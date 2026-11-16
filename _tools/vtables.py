"""Export the vtable slots of every class for ApplyVtables.java: vtables.py <binary> <out tsv>

Rows: class \t slot \t function address (hex, or 0 for a pure virtual) \t slot name
The slot name is the method as the class itself would call it: its own method if one was folded into the slot,
otherwise the inherited name. Destructors are named ~ (complete) and ~delete (deleting); a repeated name gets
a __N suffix so the structure's field names stay unique.
"""
import bisect, collections, struct, subprocess, sys, os

sys.path.insert(0, os.path.dirname(__file__))
from cxxsig import base, components, ctor_variant, split_sig, strip_thunk

BIN, OUT = sys.argv[1:3]
data = open(BIN, 'rb').read()
segs, off = [], 32
for _ in range(struct.unpack_from('<I', data, 16)[0]):
    cmd, size = struct.unpack_from('<II', data, off)
    if cmd == 0x19:
        vm, vms, fo, fs = struct.unpack_from('<QQQQ', data, off + 24)
        segs.append((vm, fs, fo))
    elif cmd == 0x2:
        symoff, nsyms, stroff, _ = struct.unpack_from('<IIII', data, off + 8)
    off += size


def q(addr):
    for vm, fs, fo in segs:
        if vm <= addr < vm + fs - 7:
            return struct.unpack_from('<Q', data, fo + addr - vm)[0]
    return None


names_at = collections.defaultdict(list)
sym_addr = {}
for k in range(nsyms):
    strx, ntype, nsect, ndesc, value = struct.unpack_from('<IBBHQ', data, symoff + k * 16)
    if ntype & 0xe0 or ntype & 0x0e != 0x0e:
        continue
    name = data[stroff + strx:data.index(b'\0', stroff + strx)].decode('utf8', 'replace')
    if name not in sym_addr:
        sym_addr[name] = value
        if name.startswith('__Z'):
            names_at[value].append(name)
addrs = sorted(set(sym_addr.values()))
mangled = sorted(n for n in sym_addr if n.startswith('__Z'))
dem = dict(zip(mangled, subprocess.run(['c++filt', '-_'], input='\n'.join(mangled), capture_output=True, text=True,
                                       check=True).stdout.split('\n')))


def owner_leaf(m):
    d, _ = strip_thunk(dem[m])
    sig = split_sig(d)
    if not sig:
        return None, None
    comps = components(sig[1])
    return '::'.join(comps[:-1]), comps[-1]


rows = []
for vt in mangled:
    if not vt.startswith('__ZTV'):
        continue
    cls = dem[vt].replace('vtable for ', '')
    a = sym_addr[vt]
    i = bisect.bisect_right(addrs, a)
    words = [q(a + 8 * j) for j in range(((addrs[i] if i < len(addrs) else a) - a) // 8)]
    start = 0
    if words[:2] != [0, 0]:  # virtual bases: vbase/vcall offsets come before offset-to-top and typeinfo
        start = next((j for j in range(min(len(words) - 2, 32)) if words[j] == 0 and words[j + 1] == 0
                      and words[j + 2] in names_at), None)
        if start is None:
            continue
    slots, zeros = [], 0
    for v in words[start + 2:]:
        if v is None or v >> 56 == 0xff:
            break
        if v in names_at:
            slots.append(v)
            zeros = 0
        elif v == 0:
            zeros += 1
            if zeros > 2:
                break
            slots.append(0)
        else:
            break
    while slots and slots[-1] == 0:
        slots.pop()
    used = collections.Counter()
    for n, v in enumerate(slots):
        leaf = None
        if v:
            cands = [(owner_leaf(m), m) for m in names_at[v]]
            own = [(ol, m) for ol, m in cands if ol[0] == cls]
            pick = own[0] if own else (cands[0] if cands else None)
            if pick and pick[0][1]:
                (owner, lf), m = pick
                b = base(lf)
                if b.startswith('~'):
                    leaf = '~delete' if ctor_variant(m, b[1:]) == 'D0' else '~'
                else:
                    leaf = b
        leaf = leaf or f'slot{n}'
        used[leaf] += 1
        if used[leaf] > 1:
            leaf = f'{leaf}__{used[leaf]}'
        rows.append((cls, n, v, leaf))
with open(OUT, 'w', encoding='utf8', newline='\n') as fh:
    for cls, n, v, leaf in rows:
        fh.write(f'{cls}\t{n}\t{v:x}\t{leaf}\n')
print(len({r[0] for r in rows}), 'vtables,', len(rows), 'slots')
