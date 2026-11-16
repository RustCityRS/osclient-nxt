"""Map accessor methods (GetX/SetX/IsX/HasX) to the data members they read or write, from the decompiled bodies.

usage: accessor_map.py <stabs.tsv> <demangled.txt> <binary> <decomp dir> <layouts.tsv> <out tsv>
Writes: class, offset, size, name, type, accessor  (one row per member to name)
"""
import collections, re, sys

STABS, DEM, BIN, DECOMP, LAYOUTS, OUT = sys.argv[1:7]
sys.argv = ['rebuild.py', BIN, STABS, DEM, '_accessor_probe', DECOMP]
g = {}
src = open(__file__.replace('accessor_map.py', 'rebuild.py'), encoding='utf8').read().split('written = 0\n')[0]
exec(compile(src, 'rebuild.py', 'exec'), g)
bodies, classes, sig_line, base, components = g['bodies'], g['classes'], g['sig_line'], g['base'], g['components']

layout, by_name = {}, collections.defaultdict(dict)
cur = None
for line in open(LAYOUTS, encoding='utf8'):
    p = line.rstrip('\n').split('\t')
    if p[0] == 'C':
        cur = p[1]
        layout[cur] = {'size': int(p[2]), 'fields': {}}
    elif p[0] == 'F' and cur:
        off, ln, typ, name = int(p[1]), int(p[2]), p[3], p[4]
        layout[cur]['fields'][off] = (ln, typ, name)
        by_name[cur][name] = off
leaf_classes = collections.defaultdict(list)
for k in layout:
    leaf_classes[k.split('::')[-1]].append(k)

ACCESSOR = re.compile(r'^(Get|Set|Is|Has)([A-Z]\w*)$')
CAST = r'(?:\(\s*[^()]*\)\s*)?'
MEMBER = r'this->(field\d*_0x[0-9a-f]+|m_\w+)'
RAW = r'\*\s*\(\s*([\w\s:<>,]+?)\s*\*\s*\)\s*\(\s*(?:\(long\)\s*)?this\s*\+\s*(0x[0-9a-f]+|\d+)\s*\)'
GET_MEMBER = re.compile(rf'^return\s+{CAST}&?{MEMBER}(\[param_1\])?\s*;$')
GET_RAW = re.compile(rf'^return\s+{CAST}{RAW}\s*;$')
SET_MEMBER = re.compile(rf'^{MEMBER}(\[param_1\])?\s*=\s*{CAST}param_[12]\s*;$')
SET_RAW = re.compile(rf'^{RAW}\s*=\s*{CAST}param_[12]\s*;$')
GHIDRA_TYPES = {'float': 4, 'double': 8, 'int': 4, 'uint': 4, 'bool': 1, 'byte': 1, 'char': 1, 'short': 2,
                'ushort': 2, 'long': 8, 'ulong': 8, 'longlong': 8, 'ulonglong': 8}


def statements(code):
    i = code.find('\n{')
    body = re.sub(r'/\*.*?\*/', '', code[i + 2:code.rfind('}')], flags=re.S) if i >= 0 else ''
    return [s.strip() for s in re.split(r'(?<=;)\s*\n', body.strip()) if s.strip()]


def owner_of_body(code):
    m = re.search(r'__thiscall\s+([\w:<>, ]+?)::\w+\s*\(', sig_line(code))
    return m.group(1).replace(' ', '') if m else None


def offset_of(body_owner, member):
    m = re.fullmatch(r'field\d*_0x([0-9a-f]+)', member)
    if m:
        return int(m.group(1), 16)
    for k in leaf_classes.get((body_owner or '').split('::')[-1], []):
        if member in by_name[k]:
            return by_name[k][member]
    return None


def ret_type(code):
    line = sig_line(code)
    m = re.match(r'(\w+)\s*(\*?)\s*(?:__thiscall\s+)?[\w:<>, ]+::', line)
    return (m.group(1) + (' *' if m.group(2) else '')) if m else None


rows, stats = {}, collections.Counter()
for key, c in classes.items():
    if key not in layout:
        continue
    for f in c['methods']:
        m = ACCESSOR.match(base(f['leaf'])) if f['sig'] else None
        if not m or f['size'] > 96:
            continue
        code = bodies.get(f['addr'], '')
        sts = [s for s in statements(code) if not s.endswith(('return;',))]
        if not sts or len(sts) > 2:
            continue
        kind, what = m.group(1), m.group(2)
        owner = owner_of_body(code)
        off = size = typ = None
        indexed = False
        s = sts[-1] if kind != 'Set' else sts[0]
        if kind == 'Set':
            mm = SET_MEMBER.match(s)
            if mm:
                off, indexed = offset_of(owner, mm.group(1)), bool(mm.group(2))
            else:
                mm = SET_RAW.match(s)
                if mm:
                    typ, off = mm.group(1).strip(), int(mm.group(2), 0)
        else:
            mm = GET_MEMBER.match(s)
            if mm:
                off, indexed = offset_of(owner, mm.group(1)), bool(mm.group(2))
            else:
                mm = GET_RAW.match(s)
                if mm:
                    typ, off = mm.group(1).strip(), int(mm.group(2), 0)
            rt = ret_type(code)
            if rt and not rt.startswith('undefined') and rt != 'void':
                typ = typ or rt
        if off is None:
            stats['no match'] += 1
            continue
        field = layout[key]['fields'].get(off)
        size = field[0] if field else GHIDRA_TYPES.get((typ or '').replace(' *', ''), 8 if typ and typ.endswith('*') else None)
        stem = ('has' + what) if kind == 'Has' else what
        pointer = (typ or (field[1] if field else '')).strip().endswith('*')
        name = ('m_p' + stem[0].upper() + stem[1:]) if pointer else ('m_' + stem[0].lower() + stem[1:])
        stats['folded' if f.get('alias_of') or (owner and owner.split('::')[-1] != key.split('::')[-1]) else 'own'] += 1
        prev = rows.get((key, off))
        if prev and prev[2] != name:
            if prev[4].startswith('Get'):
                continue  # a getter's name wins over a setter's
        rows[(key, off)] = (size or 0, typ or '', name, field[2] if field else '', base(f['leaf']), indexed)

with open(OUT, 'w', encoding='utf8') as fh:
    for (key, off), (size, typ, name, old, acc, indexed) in sorted(rows.items()):
        fh.write(f'{key}\t{off}\t{size}\t{name}\t{typ}\t{acc}\n')
renamed = sum(1 for v in rows.values() if v[3].startswith('field') or not v[3])
print(dict(stats), '| members to name:', len(rows), '| new names (were field_N or not in the layout):', renamed)
