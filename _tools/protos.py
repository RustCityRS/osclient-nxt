"""Choose a prototype for every C++ function from its demangled signature and the registers it really reads.

usage: protos.py <binary> <inputs.tsv from InferInputs.java> <layouts.tsv> <out protos.jsonl>

Itanium mangling gives the parameter types but not whether a member function is static, nor the return type
of a non-template function. The decompiler's unlocked inference (inputs.tsv) says how many integer and SSE
registers the code reads and whether it returns its first argument, which settles the hidden parameters:
  this    a member function: one integer register before the declared parameters
  sret    a class returned by value through memory: the caller's buffer in RDI, returned in RAX
  VTT     a base-object constructor/destructor of a class with virtual bases: the VTT after this
Each output line is a JSON object read by ApplyPrototypes.java.
"""
import collections, glob, json, os, re, struct, subprocess, sys

sys.path.insert(0, __import__('os').path.dirname(__file__))
from cxxsig import base, components, ctor_variant, mask, split_args, split_sig, strip_thunk

BIN, INPUTS, LAYOUTS, OUT = sys.argv[1:5]
# optional: decompiles (comma-separated) made with earlier rounds' prototypes. Registers it still reads without declaring
# them (in_RSI, ...) are inputs the unlocked inference missed, usually passed straight through to a callee.
PREV_DECOMP = sys.argv[5] if len(sys.argv) > 5 else None

# ---- binary: symbols and vtables (functions in a vtable are member functions) ----
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


sym_addr = {}
for k in range(nsyms):
    strx, ntype, nsect, ndesc, value = struct.unpack_from('<IBBHQ', data, symoff + k * 16)
    if ntype & 0xe0 or ntype & 0x0e != 0x0e:
        continue
    sym_addr.setdefault(data[stroff + strx:data.index(b'\0', stroff + strx)].decode('utf8', 'replace'), value)
addrs = sorted(set(sym_addr.values()))

# ---- inferred inputs ----
rows = []
for line in open(INPUTS, encoding='utf8'):
    a, names, inputs, flags = line.rstrip('\n').split('\t')
    rows.append((int(a, 16), names.split('|'), inputs, flags))
func_addrs = {a for a, *_ in rows}

virtual = set()
import bisect
for name, a in sym_addr.items():
    if name.startswith('__ZTV'):
        i = bisect.bisect_right(addrs, a)
        end = addrs[i] if i < len(addrs) else a
        for p in range(a, end, 8):
            v = q(p)
            if v in func_addrs:
                virtual.add(v)

all_mangled = sorted({n for _, names, _, _ in rows for n in names})
dem_list = subprocess.run(['c++filt', '-_'], input='\n'.join(all_mangled), capture_output=True, text=True,
                          check=True).stdout.split('\n')
demangled = dict(zip(all_mangled, dem_list))

# ---- class facts ----
parsed = {}
dtor_classes, copy_classes, class_scopes, ctor_classes = set(), set(), set(), set()
for m in all_mangled:
    dem, thunk = strip_thunk(demangled[m])
    sig = split_sig(dem)
    if not sig:
        continue
    comps = components(sig[1])
    parsed[m] = (dem, thunk, sig, comps)
    if len(comps) < 2:
        continue
    owner_full, leaf = '::'.join(comps[:-1]), base(comps[-1])
    owner = base(comps[-2])
    if leaf in (owner, '~' + owner) or sig[3].startswith(('const', 'volatile', '&')):
        class_scopes.add(owner_full)
    if leaf == '~' + owner:
        dtor_classes.add(owner_full)
    if leaf == owner:
        ctor_classes.add(owner_full)
        ps = split_args(sig[2][1:-1])
        if len(ps) == 1 and re.fullmatch(re.escape(owner_full) + r'\s*(?:const)?\s*&&?', ps[0].replace(' const&', ' const &')) \
                or len(ps) == 1 and ps[0] in (owner_full + ' const&', owner_full + '&&'):
            copy_classes.add(owner_full)

layouts, cur = {}, None
for line in open(LAYOUTS, encoding='utf8'):
    p = line.rstrip('\n').split('\t')
    if p[0] == 'C':
        cur = layouts.setdefault(p[1], {'size': int(p[2]), 'fields': []})
    elif p[0] == 'F' and cur is not None:
        cur['fields'].append((int(p[1]), int(p[2]), p[3]))

NONTRIVIAL = re.compile(r'^(?:std::(?:__1::)?|eastl::|jag::)(?:basic_string|function|shared_ptr|weak_ptr|unique_ptr|'
                        r'vector|map|set|multimap|multiset|unordered_map|unordered_set|list|deque|hash_map|hash_set|'
                        r'vector_map|vector_set|fixed_\w+|fixedfunction::function|intrusive_ptr|optional|variant|'
                        r'basic_ostringstream|basic_stringstream|any)\b')

INT_REGS = {r: i for i, names in enumerate([('RDI', 'EDI', 'DI', 'DIL'), ('RSI', 'ESI', 'SI', 'SIL'),
                                            ('RDX', 'EDX', 'DX', 'DL'), ('RCX', 'ECX', 'CX', 'CL'),
                                            ('R8', 'R8D', 'R8W', 'R8B'), ('R9', 'R9D', 'R9W', 'R9B')])
            for r in names}
BUILTINS = {
    'void', 'bool', 'char', 'signed char', 'unsigned char', 'wchar_t', 'char8_t', 'char16_t', 'char32_t', 'short',
    'unsigned short', 'int', 'unsigned int', 'long', 'unsigned long', 'long long', 'unsigned long long',
    '__int128', 'unsigned __int128', 'float', 'double', 'long double'}


def tspec(t):
    """A demangled parameter type -> a nested list spec (see ApplyPrototypes.java)."""
    t = ' '.join(t.split())
    while True:
        s = re.sub(r'\s*\b(?:const|volatile)$', '', t)
        s = re.sub(r'^(?:const|volatile)\s+', '', s)
        if s == t:
            break
        t = s
    m = mask(t)
    if m.endswith('::*') and '(' not in m:
        return ['B', 'long']  # pointer to data member: an offset
    if re.search(r'\((?:[\w:<>, ]*::)\*\)', m):
        return ['M']  # pointer to member function: two words
    if re.search(r'\((?:\*|&|&&)\)', m):
        return ['P', ['B', 'void']]  # function pointer, array pointer or reference
    for suffix in ('&&', '&', '*'):
        if t.endswith(suffix):
            return ['P', tspec(t[:-len(suffix)])]
    if t in BUILTINS:
        return ['B', t]
    if t in ('std::nullptr_t', 'decltype(nullptr)', 'std::__1::nullptr_t'):
        return ['P', ['B', 'void']]
    return ['C', t]


def classify(spec):
    """Resolve a by-value class: non-trivial classes go by invisible reference, unknown ones are enums."""
    if spec[0] != 'C':  # pointers and references keep the class they point to as it is
        return spec
    name = spec[1]
    if NONTRIVIAL.match(name) or name in dtor_classes or name in copy_classes:
        return ['P', ['C', name]]
    lay = layouts.get(name)
    if lay and lay['size']:
        return ['S', name, lay['size']]
    if name in class_scopes or name in ctor_classes or '<' in name:
        return ['P', ['C', name]]  # a class of unknown size: most likely not trivially copyable
    return ['E', name]


def regs(spec):
    """(integer registers, SSE registers) a parameter takes."""
    k = spec[0]
    if k == 'B':
        if spec[1] in ('float', 'double'):
            return 0, 1
        if spec[1] == 'long double':
            return 0, 0
        if '__int128' in spec[1]:
            return 2, 0
        return (0, 0) if spec[1] == 'void' else (1, 0)
    if k in ('P', 'E'):
        return 1, 0
    if k == 'M':
        return 2, 0
    if k == 'S':
        size = spec[2]
        if size > 16:
            return 0, 0
        fields = layouts.get(spec[1], {}).get('fields', [])
        ni = ns = 0
        for eb in range(0, size, 8):
            inside = [f for f in fields if eb <= f[0] < eb + 8]
            if inside and all(f[2] in ('float', 'double') for f in inside):
                ns += 1
            else:
                ni += 1
        return ni, ns
    return 1, 0


def observed(inputs):
    ni = ns = 0
    stack = False
    for item in inputs.split(','):
        if not item or item == '?':
            continue
        st = item.split(':')[0]
        for part in re.split(r'[,\s]+', st):
            r = re.match(r'([A-Z0-9]+)', part)
            if not r:
                continue
            if r.group(1) in INT_REGS:
                ni = max(ni, INT_REGS[r.group(1)] + 1)
            elif r.group(1).startswith('XMM'):
                ns = max(ns, int(re.match(r'XMM(\d+)', r.group(1)).group(1)) + 1)
            elif part.startswith('Stack'):
                stack = True
    return ni, ns, stack


KEYWORDS = {'this', 'delete', 'new', 'class', 'struct', 'union', 'enum', 'template', 'operator', 'default', 'register',
            'char', 'int', 'float', 'double', 'bool', 'long', 'short', 'void', 'auto', 'case', 'switch', 'function',
            'string', 'vector', 'map', 'set', 'list', 'array', 'pair', 'optional', 'variant', 'type', 'object'}


WRAPPERS = {'shared_ptr', 'weak_ptr', 'unique_ptr', 'intrusive_ptr', 'optional', 'vector', 'fixed_vector', 'list',
            'deque', 'set', 'fixed_set', 'span', 'Array', 'array', 'PacketT', 'MemoryRef', 'Ref', 'RefPtr'}
SPECIAL = {'basic_string': 'str', 'fixed_string': 'str', 'basic_string_view': 'str', 'function': 'callback',
           'fixedfunction': 'callback', 'map': 'map', 'hash_map': 'map', 'unordered_map': 'map', 'vector_map': 'map'}


def type_name_word(t):
    """lowerCamelCase from a type: OptionStore -> optionStore, shared_ptr<Entity> -> entity, eastl::string -> str."""
    comps = components(t)
    leaf_full = comps[-1]
    leaf = base(leaf_full)
    if leaf in SPECIAL:
        return SPECIAL[leaf]
    if leaf in WRAPPERS and '<' in leaf_full:
        args = split_args(leaf_full[len(leaf) + 1:-1])
        if args and not re.fullmatch(r'[\w ]+', args[0]) or args and re.search(r'[A-Z]', args[0]):
            word = type_name_word(re.sub(r'\s*(?:const|\*|&)+\s*$', '', args[0]))
            if word and leaf in ('vector', 'fixed_vector', 'list', 'deque', 'set', 'fixed_set', 'span', 'Array', 'array'):
                word += 's'
            return word
        return None
    leaf = re.sub(r'^_+', '', leaf)
    leaf = re.sub(r'(?<=[a-z0-9])T$', '', leaf)  # Vector3T, PacketT: template naming
    if not re.fullmatch(r'[A-Za-z]\w*', leaf):
        return None
    head = re.match(r'[A-Z0-9]+(?=[A-Z][a-z]|$)', leaf)  # RT7Core -> rt7Core, AABB -> aabb
    return (head.group(0).lower() + leaf[head.end():]) if head and head.end() > 1 else leaf[0].lower() + leaf[1:]


def param_names(params, specs):
    """Readable parameter names: the class or enum name in lowerCamelCase, else argN (never Ghidra's param_N,
    which Ghidra treats as unnamed and may drop as an explicit this)."""
    out, used = [], collections.Counter()
    for n, (p, s) in enumerate(zip(params, specs)):
        inner = s[1] if s[0] == 'P' else s
        name = None
        if inner[0] in ('C', 'S', 'E'):
            name = type_name_word(inner[1])
        elif inner[0] == 'B' and s[0] == 'P' and inner[1] == 'char':
            name = 'str'
        if not name or name in KEYWORDS:
            name = f'arg{n + 1}'
        used[name] += 1
        out.append(name)
    seen = collections.Counter()
    for i, name in enumerate(out):
        if used[name] > 1:
            seen[name] += 1
            out[i] = f'{name}{seen[name]}'
    return out


extra_inputs = {}
if PREV_DECOMP:
    import glob
    for path in [x for d in PREV_DECOMP.split(',') for x in glob.glob(os.path.join(d, 'decomp_*.txt'))]:
        cur, regs_seen = None, set()
        for line in open(path, encoding='utf8', errors='replace'):
            if line.startswith('//@@FUNC '):
                if cur is not None and regs_seen:
                    extra_inputs.setdefault(cur, set()).update(regs_seen)
                cur, regs_seen = int(line.split()[1], 16), set()
            else:
                regs_seen.update(re.findall(r'\bin_((?:R|E)?(?:DI|SI|DX|CX)L?|[DS]IL|[DC]L|R[89][DWB]?|XMM\d)', line))
        if cur is not None and regs_seen:
            extra_inputs.setdefault(cur, set()).update(regs_seen)

# return types the callers give away: Ghidra casts a call's result to the type it is used as
# ((Client *)Client::Instance()), so a function whose results are cast to one class pointer returns that pointer
def key_norm(s):
    return re.sub(r'[\s_]', '', s.replace('std::__1::', 'std::'))


ret_casts = collections.defaultdict(collections.Counter)
if PREV_DECOMP:
    last = PREV_DECOMP.split(',')[-1]
    for path in glob.glob(os.path.join(last, 'decomp_*.txt')):
        text = open(path, encoding='utf8', errors='replace').read()
        for m in re.finditer(r'\(\s*([A-Za-z_][\w:<>, ]*?)\s*\*\s*\)\s*((?:\w+(?:<[^()]*?>)?::)*[A-Za-z_]\w*)\(', text):
            ret_casts[key_norm('::'.join(components(m.group(2))[-2:]))][m.group(1).strip()] += 1
class_by_leaf = collections.defaultdict(set)
for name in class_scopes | ctor_classes | dtor_classes | set(layouts):
    class_by_leaf[key_norm(components(name)[-1])].add(name)


def cast_return(qname):
    c = ret_casts.get(key_norm('::'.join(components(qname)[-2:])))
    c = collections.Counter({t: n for t, n in (c or {}).items() if not t.startswith(('undefined', 'ReturnValue'))})
    if sum(c.values()) < 2:
        return None
    typ, n = c.most_common(1)[0]
    own = len(components(qname)) > 1 and base(components(qname)[-2]) == base(typ.split('::')[-1])
    if n < (0.5 if own else 0.8) * sum(c.values()) or typ == 'void':  # a singleton returns its own class
        return None
    if typ in BUILTINS:
        return ['P', ['B', typ]]
    full = class_by_leaf.get(key_norm(typ.split('::')[-1] if '<' not in typ else typ))
    if not full:
        return None
    # several classes share the name: the one nearest the function's own namespace
    ns = components(qname)[:-1]
    shared = lambda c: next((k for k, (a, b) in enumerate(zip(components(c), ns)) if a != b), min(len(ns), len(components(c))))
    ranked = sorted(full, key=lambda c: -shared(c))
    if len(ranked) > 1 and shared(ranked[0]) == shared(ranked[1]):
        return None
    return ['P', ['C', ranked[0]]]


MUST_BE_MEMBER = re.compile(r'^operator(?:=|[-+*/%^&|]=|<<=|>>=|\[\]|\(\)|->| )$|^operator [^<]')


def ns_like(name):
    return re.fullmatch(r'[a-z0-9_]+', name) is not None


stats = collections.Counter()
out = open(OUT, 'w', encoding='utf8', newline='\n')
for a, names, inputs, flags in rows:
    cands = [n for n in names if n in parsed]
    if not cands or inputs == '?':
        stats['skipped (no C++ signature or failed decompile)'] += 1
        continue
    oi, os_, ostack = observed(inputs)
    for reg in extra_inputs.get(a, ()):
        if reg in INT_REGS:
            oi = max(oi, INT_REGS[reg] + 1)
        elif reg.startswith('XMM'):
            os_ = max(os_, int(reg[3:]) + 1)
    fl = set(flags.split(','))
    # a by-value return: the first argument is returned, and written (stored to, or constructed by a call)
    ret_first = 'retRDI' in fl and 'p0written' in fl
    ctor_class = None  # a by-value return constructed in place names its class
    for x in fl:
        if x.startswith('p0ctor=') and x[7:] in parsed:
            cc = parsed[x[7:]][3]
            ctor_class = '::'.join(cc[:-1]) if len(cc) > 1 else None
    best = None
    for m in cands:
        dem, thunk, sig, comps = parsed[m]
        params = split_args(sig[2][1:-1])
        varargs = bool(params) and params[-1] == '...'
        params = [p for p in params if p not in ('...', 'void')]
        specs = [classify(tspec(p)) for p in params]
        ei = es = 0
        for s in specs:
            i, j = regs(s)
            ei, es = ei + i, es + j
        owner_full = '::'.join(comps[:-1]) if len(comps) > 1 else ''
        owner = base(comps[-2]) if len(comps) > 1 else ''
        leaf = base(comps[-1])
        variant = ctor_variant(m, owner) if leaf in (owner, '~' + owner) else None
        is_class = bool(owner_full) and (owner_full in class_scopes or '<' in mask(comps[-2]) or not ns_like(owner)
                                         or owner.startswith(('$', '{')) or '(' in owner_full.split('::')[-1])
        sure_member = (thunk or variant is not None or sig[3].startswith(('const', 'volatile', '&')) or a in virtual
                       or (bool(owner_full) and MUST_BE_MEMBER.match(leaf) is not None))
        member = sret = vtt = False
        why = ''
        if not is_class and not sure_member:
            sret = ret_first and oi == ei + 1
            why = 'free'
        elif variant is not None:
            member = True
            vtt = variant in ('C2', 'D2') and oi >= ei + 2
            why = 'ctor/dtor'
        elif sure_member:
            member = True
            sret = ret_first and oi >= ei + 2
            why = 'const/virtual'
        else:
            if oi <= ei:
                # reads no more than declared: static, unless the first register is used as a pointer the
                # declaration says is not one (then it is this, and trailing parameters go unused)
                # fewer registers than declared is usually a wrapper passing its arguments straight on (a
                # member); reading nothing with nothing declared is a static accessor (GetInstance())
                member = ('p0deref' in fl and bool(specs) and specs[0][0] != 'P') or oi < ei
                if leaf == '__invoke':
                    member = False  # a lambda's static invoker
                why = 'class, fits as declared'
            elif oi == ei + 1:
                if ret_first and not leaf.startswith('operator'):
                    sret = True
                    why = 'class, static returning by value'
                else:
                    member = True
                    why = 'class, one extra register'
            else:
                member = True
                sret = ret_first
                why = 'class, two or more extra registers'
        want_i = ei + member + sret + vtt
        fits = oi <= want_i and os_ <= es
        ret = None
        if variant is not None:
            ret = ['B', 'void']
        elif sret and ctor_class:
            ret = ['P', ['C', ctor_class]]
        elif sig[0] and not sig[0].startswith(('virtual thunk', 'non-virtual')):
            r = classify(tspec(sig[0]))
            if r[0] == 'P' and r[1][0] == 'C' and not sig[0].rstrip().endswith(('*', '&')):
                name = r[1][1]
                if NONTRIVIAL.match(name) or name in dtor_classes or name in copy_classes:
                    sret, ret = True, ['P', r[1]]  # a non-trivial class returned by value: always through memory
                else:
                    ret = None  # a typedef such as enable_if<...>::type or difference_type: let the decompiler say
            elif r[0] == 'S' and r[2] > 16:
                sret, ret = True, ['P', ['C', r[1]]]
            else:
                ret = r
        if ret is None and not sret and variant is None:
            ret = cast_return(sig[1])
        score = (fits, m.startswith('__ZN3jag') or m.startswith('__ZNK3jag'), -abs(oi - want_i))
        rec = {'addr': f'{a:x}', 'mangled': m, 'qname': sig[1], 'member': member, 'sret': sret, 'vtt': vtt, 'varargs': varargs,
               'params': specs, 'names': param_names(params, specs), 'refs': [bool(re.search(r'&\s*(?:const\s*)?$', x)) for x in params], 'ret': ret, 'fits': fits, 'why': why, 'obs': [oi, os_], 'exp': [want_i, es]}
        if best is None or score > best[0]:
            best = (score, rec)
    rec = best[1]
    # every other name the linker folded into this address: callers may be decompiled under any of them
    rec['aliases'] = []
    for m in cands:
        if m != rec['mangled']:
            ps = [p for p in split_args(parsed[m][2][2][1:-1]) if p not in ('...', 'void')]
            rec['aliases'].append([parsed[m][2][1], [bool(re.search(r'&\s*(?:const\s*)?$', x)) for x in ps], len(ps)])
    stats['fits' if rec['fits'] else 'does not fit'] += 1
    stats['member' if rec['member'] else 'static/free'] += 1
    stats['sret'] += rec['sret']
    stats['vtt'] += rec['vtt']
    stats[f"why: {rec['why']}"] += 1
    out.write(json.dumps(rec) + '\n')
out.close()
for k, v in sorted(stats.items()):
    print(f'{v:>8}  {k}')
