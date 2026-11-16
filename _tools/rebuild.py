"""Rebuild the osclient source tree from the Mach-O symbols, debug map and RTTI.

usage: rebuild.py <binary> <stabs.tsv> <demangled.txt> <outdir> [decomp dir]
"""
import bisect, collections, functools, math, subprocess, glob, os, posixpath, re, struct, sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import cleanup, cxxify  # noqa: E402

BIN, STABS, DEM, OUT = sys.argv[1:5]
DECOMP = sys.argv[5] if len(sys.argv) > 5 else None
DECOMP_THIS = sys.argv[6] if len(sys.argv) > 6 else None  # second pass with __thiscall applied
PREFIX = '/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/'
SRC_EXT = ('.cpp', '.mm', '.c', '.cxx', '.m', '.code')
HDR_EXT = ('.h', '.inl', '.hpp', '.inc')
LIBRARY_ROOTS = {'std', 'eastl', '__cxxabiv1', '__gnu_cxx', '__1'}
VENDORED_LIBS = {'libs.glew', 'libs.imgui', 'libs.freetype', 'libs.json', 'libs.sqlite', 'libs.libpng',
                 'libs.bzip2', 'libs.lzma', 'libtommath', 'arclite_macosx'}

data = open(BIN, 'rb').read()

# ---- Mach-O: segments and symbol table ----
segs, frameworks, rpaths = [], [], []
off = 32
for _ in range(struct.unpack_from('<I', data, 16)[0]):
    cmd, size = struct.unpack_from('<II', data, off)
    if cmd == 0x19:
        name = data[off + 8:off + 24].rstrip(b'\0').decode()
        vm, vms, fo, fs = struct.unpack_from('<QQQQ', data, off + 24)
        segs.append((vm, fs, fo, name))
    elif cmd == 0x2:
        symoff, nsyms, stroff, _ = struct.unpack_from('<IIII', data, off + 8)
    elif cmd in (0xc, 0x80000018):
        so = struct.unpack_from('<I', data, off + 8)[0]
        frameworks.append((data[off + so:off + size].split(b'\0')[0].decode(), cmd == 0x80000018))
    elif cmd == 0x8000001c:
        so = struct.unpack_from('<I', data, off + 8)[0]
        rpaths.append(data[off + so:off + size].split(b'\0')[0].decode())
    off += size


def q(addr):
    for vm, fs, fo, _ in segs:
        if vm <= addr < vm + fs:
            return struct.unpack_from('<Q', data, fo + addr - vm)[0]
    return None


syms, all_addrs = {}, set()
names_at = collections.Counter()  # real names per address: >1 means the linker folded identical functions
for k in range(nsyms):
    strx, ntype, nsect, ndesc, value = struct.unpack_from('<IBBHQ', data, symoff + k * 16)
    if ntype & 0xe0 or ntype & 0x0e != 0x0e:
        continue
    name = data[stroff + strx:data.index(b'\0', stroff + strx)].decode('utf8', 'replace')
    all_addrs.add(value)
    if name not in syms and not name.startswith(('ltmp', 'l_', 'L_', 'GCC_except_table')):
        names_at[value] += 1
    syms.setdefault(name, (value, ndesc, ntype))
sym_addrs = sorted(all_addrs)


def symsize(addr):
    i = bisect.bisect_right(sym_addrs, addr)
    return sym_addrs[i] - addr if i < len(sym_addrs) else 0


# ---- demangled name parsing ----
OPS = sorted(['operator<<=', 'operator>>=', 'operator<=>', 'operator<<', 'operator>>', 'operator<=',
              'operator>=', 'operator->*', 'operator->', 'operator<', 'operator>', 'operator()',
              'operator[]'], key=len, reverse=True)
QUALS = re.compile(r'(\s*(const|volatile|&&|&|noexcept))*\s*$')


def mask(s):
    for op in OPS:
        s = s.replace(op, 'operator' + '#' * (len(op) - 8))
    return re.sub(r'(operator#+) <', r'\1#<', s)  # 'operator<< <T>': the space belongs to the name


def split_sig(dem):
    """-> (ret, name, params, quals) or None for non-function names."""
    m = mask(dem)
    end = QUALS.search(m).start()
    if end == 0 or m[end - 1] != ')':
        return None
    depth, i = 0, end - 1
    while i >= 0:
        c = m[i]
        if c in ')>':
            depth += 1
        elif c in '(<':
            depth -= 1
            if depth == 0 and c == '(':
                break
        i -= 1
    if i <= 0:
        return None
    stop = i
    k = m.rfind('operator ', 0, i)  # conversion operators have a space inside the name
    if k >= 0 and (k == 0 or m[k - 2:k] == '::' or m[k - 1] == ' '):
        stop = k
    depth, j = 0, stop - 1
    while j >= 0:
        c = m[j]
        if c in ')>':
            depth += 1
        elif c in '(<':
            depth -= 1
        elif c == ' ' and depth == 0 and not re.match(r'(?:const|volatile|&&|&)\s*::', m[j + 1:j + 16]):
            break  # a lambda inside a const method keeps 'f() const::' in its name
        j -= 1
    return dem[:j + 1].strip(), dem[j + 1:i], dem[i:end], dem[end:].strip()


def components(name):
    m = mask(name)
    parts, depth, cur, i = [], 0, 0, 0
    while i < len(m):
        c = m[i]
        if depth == 0 and i == cur and m.startswith('operator ', i):
            break  # a conversion operator's type is part of its name
        if c in '<(':
            depth += 1
        elif c in '>)':
            depth -= 1
        elif c == ':' and depth == 0 and m.startswith('::', i):
            parts.append(name[cur:i])
            i += 2
            cur = i
            continue
        i += 1
    parts.append(name[cur:])
    return parts


def base(comp):
    m = mask(comp)
    i = m.find('<')
    return comp if i <= 0 else comp[:i]


def rel(path):
    if not path:
        return None
    if path.startswith(PREFIX):
        return posixpath.normpath(path[len(PREFIX):])
    return None


def jagex_path(p):
    return p and '3rdPartyLibs' not in p and '/Unity/' not in p and not p.startswith('CMakeFiles') \
        and not p.startswith('build/') and not p.startswith('/')


def target_of(obj):
    m = re.search(r'/lib(lib[^/(]*|osclient|libtommath|arclite_macosx)\.a\(', obj or '')
    if m:
        t = m.group(1)
        return t[3:] if t.startswith('liblibs.') else ('osclient' if t == 'osclient' else t)
    m = re.search(r'CMakeFiles/([^/]+)\.dir/', obj or '')
    return m.group(1) if m else 'unknown'


# ---- load the debug map ----
dem_names = open(DEM, encoding='utf8').read().split('\n')
funcs, datas = [], []
for n, line in enumerate(open(STABS, encoding='utf8')):
    kind, obj, sol, mangled, addr, size = line.rstrip('\n').split('\t')
    rec = {'kind': kind, 'obj': obj, 'target': target_of(obj), 'sol': rel(sol) or sol,
           'mangled': mangled, 'dem': dem_names[n], 'addr': int(addr), 'size': int(size)}
    if kind == 'F':
        funcs.append(rec)
    else:
        if rec['addr'] == 0 and mangled in syms:
            rec['addr'] = syms[mangled][0]
        datas.append(rec)
addr2func = {}
for f in funcs:
    addr2func.setdefault(f['addr'], f)

# names the linker folded into another function's code keep only a symbol: add them as aliases of that function
stab_names = {f['mangled'] for f in funcs}
alias_syms = sorted((addr, name) for name, (addr, _, _) in syms.items()
                    if addr in addr2func and name not in stab_names and name.startswith('__Z'))
alias_dem = subprocess.run(['c++filt', '-_'], input='\n'.join(n for _, n in alias_syms), capture_output=True,
                           text=True, check=True).stdout.split('\n')
for (addr, name), dem in zip(alias_syms, alias_dem):
    sig = split_sig(dem)
    if not sig or not sig[1].startswith('jag::') or '<' in mask(sig[1]):
        continue  # folded std:: code and template instantiations add nothing to the source
    primary = addr2func[addr]
    funcs.append({'kind': 'F', 'obj': primary['obj'], 'target': primary['target'], 'sol': None, 'mangled': name,
                  'dem': dem, 'addr': addr, 'size': primary['size'], 'alias_of': primary})

# ---- decompiled bodies ----
def load_bodies(directory):
    out = {}
    for path in glob.glob(os.path.join(directory, 'decomp_*.txt')) if directory else []:
        cur, buf = None, []
        for line in open(path, encoding='utf8', errors='replace'):
            if line.startswith('//@@FUNC '):
                if cur is not None:
                    out[cur] = ''.join(buf)
                cur, buf = int(line.split()[1], 16), []
            else:
                buf.append(line)
        if cur is not None:
            out[cur] = ''.join(buf)
    return out


def sig_line(code):
    """Ghidra's signature: everything before the body, without its (possibly wrapped) comments."""
    i = code.find('\n{')
    head = re.sub(r'/\*.*?\*/', ' ', code[:i] if i >= 0 else '', flags=re.S)
    return ' '.join(re.sub(r'//[^\n]*', ' ', head).split())


def body_of(code):
    i = code.find('\n{')
    return code[i:] if i >= 0 else ''


bodies = load_bodies(DECOMP)
bodies_this = load_bodies(DECOMP_THIS)
FILE_STR = re.compile(re.escape(PREFIX) + r'([^"\\\s]+?\.(?:cpp|mm|cxx|c|h|inl|hpp))"')
CALLCONV = re.compile(r'\s__(?:thiscall|cdecl|stdcall|fastcall)\s')


def ghidra_ret(f):
    """Return type from Ghidra's signature line, unless it is an undefined placeholder."""
    line = sig_line(bodies.get(f['addr'], ''))
    if not line:
        return None
    m = CALLCONV.search(' ' + line)
    if m:
        ret = (' ' + line)[:m.start()].strip()
    else:
        first = (f['scope'] or [base(f.get('leaf') or '')])[0]
        k = line.find(' ' + first) if first else -1
        if k <= 0:
            return None
        ret = line[:k].strip()
    if not ret or ret.startswith('undefined') or len(ret) > 120 or not same_name(f, bodies.get(f['addr'], '')):
        return None
    owner = f['scope'][-1] if f['scope'] else None
    if owner and (ret == owner or (ret == owner + ' *' and f.get('pass_b'))):
        return None
    return ret

# ---- known Jagex files ----
known = set()
for f in funcs + datas:
    if jagex_path(f['sol']):
        known.add(f['sol'])
cs_lo, cs_len = 0xda1f70, 0xd743e
for s in data[cs_lo:cs_lo + cs_len].split(b'\0'):
    p = rel(s.decode('latin1'))
    if p and jagex_path(p) and p.endswith(SRC_EXT + HDR_EXT):
        known.add(p)
stem_map = collections.defaultdict(list)
for p in sorted(known):
    stem_map[posixpath.splitext(posixpath.basename(p))[0].lower()].append(p)


def target_dir(t):
    if t == 'osclient':
        return 'projects/osclient'
    if t == 'libs.hal.system.osclient':
        return 'libs/hal/system/bootstrap'
    return t.replace('.', '/')


# ---- classify functions ----
THUNK = ('non-virtual thunk to ', 'virtual thunk to ', 'covariant return thunk to ')
stats = collections.Counter()
for f in funcs:
    dem = f['dem']
    f['thunk'] = dem.startswith(THUNK)
    for t in THUNK:
        if dem.startswith(t):
            dem = dem[len(t):]
    sym = syms.get(f['mangled'], (0, 0, 0))
    # inline: a weak definition, or a local template instantiation over a lambda or other local type
    f['weak'] = bool(sym[1] & 0x80) or (not sym[2] & 0x01 and '<' in dem
                                        and re.search(r'\$_\d|\(anonymous namespace\)|\)::', dem) is not None)
    sol = f['sol'] if jagex_path(f['sol']) else None
    # the debug map's file run is sticky, so a vendored header there says nothing; a vendored source file does
    vendored = f['target'] in VENDORED_LIBS or bool(f['sol'] and '3rdPartyLibs' in f['sol'] and f['sol'].endswith(SRC_EXT))
    f['scope'], f['rawscope'], f['sig'] = [], [], None
    if f['thunk']:
        f['cat'] = 'thunk'
    elif dem.startswith(('-[', '+[')):
        f['cat'] = 'jagex'
        f['scope'] = [dem[2:].split(' ')[0].split('(')[0]]
    elif dem.startswith(('___cxx_global_var_init', '__GLOBAL__sub_I', '___cxx_global_array_dtor')):
        f['cat'] = 'vendored' if vendored else 'init'
    elif '(' not in dem:
        f['dem'] = dem[1:] if dem.startswith('_') else dem
        f['cat'] = 'vendored' if vendored else ('jagex' if sol else 'library')
    else:
        sig = split_sig(dem)
        if not sig:
            f['cat'] = 'library'
        else:
            f['sig'] = sig
            comps = components(sig[1])
            scope = [base(c) for c in comps[:-1]]
            root = next((c for c in scope if c != '(anonymous namespace)'), base(comps[-1]))
            f['scope'], f['leaf'], f['rawscope'] = scope, comps[-1], comps[:-1]
            if root in LIBRARY_ROOTS:
                f['cat'] = 'library'
            elif root == 'jag':
                f['cat'] = 'jagex'
            elif vendored or root.startswith(('Im', 'Json', 'stb', 'Example')):
                f['cat'] = 'vendored'
            elif len(comps) == 1 and ('<' in comps[0] or 'std::' in sig[0]):
                f['cat'] = 'library'  # libc++'s global-namespace templates: pow<int, int>, sqrt<int>, ...
            elif sol:
                f['cat'] = 'jagex'
            else:
                f['cat'] = 'library'
    stats[f['cat']] += 1


def norm_stem(s):
    return s.lower().replace('_', '').replace('-', '')


fuzzy_map = collections.defaultdict(list)
for stem, ps in stem_map.items():
    fuzzy_map[norm_stem(stem)].extend(ps)


@functools.lru_cache(maxsize=None)
def prefixed(key):
    return [p for s, ps in stem_map.items() if s.startswith(key + '_') for p in ps]


@functools.lru_cache(maxsize=None)
def suffixed(key):
    """'<prefix>_<Class>' files, such as Tweaky_ContainerGroup.h for jag::tweak::ContainerGroup."""
    return [p for s, ps in stem_map.items() if s.endswith('_' + key) for p in ps]


def namespace_like(name):
    return re.fullmatch(r'[a-z0-9_]+', name) is not None


def kind_ok(p, f):
    return p.endswith(HDR_EXT if f['weak'] else SRC_EXT)


def lib_bias(paths, f):
    tdir = target_dir(f['target'])
    sol = f['sol'] or ''
    ns = {c.lower() for c in f['scope']}

    def score(p):
        overlap = len(ns & set(p.lower().split('/')[:-1]))
        in_target = p.startswith(tdir + '/')
        common = (len(posixpath.commonprefix([p, sol])), len(posixpath.commonprefix([p, tdir])))
        return ((overlap, in_target) if f['weak'] else (in_target, overlap)) + common
    return max(paths, key=score)


def class_key(scope):
    return '::'.join(scope)


# scopes with class evidence: a constructor, destructor, const method, vtable or a __thiscall decompile
class_evidence = {class_key(base(c) for c in components(r['dem'][len('vtable for '):]))
                  for r in datas if r['dem'].startswith('vtable for ')}
for f in funcs:
    if f['cat'] == 'jagex' and f['sig'] and f['scope']:
        leaf, owner = base(f['leaf']), f['scope'][-1]
        ghidra_sig = sig_line(bodies.get(f['addr'], ''))
        if leaf in (owner, '~' + owner) or f['sig'][3].startswith('const') or \
                ('__thiscall' in ghidra_sig and f'{owner}::{leaf}' in ghidra_sig.replace(' ', '')
                 and not namespace_like(owner)):
            class_evidence.add(class_key(f['scope']))


def assign(f):
    sol = f['sol'] if jagex_path(f['sol']) else None
    if f['cat'] == 'init':
        return sol, 'sol'
    tdir = target_dir(f['target']) + '/'
    ns = {c.lower() for c in f['scope']}
    # the function's own scope always counts; outer scopes only when they are classes, not namespaces
    scope = f['scope']
    tries = [c for n, c in enumerate(scope) if c != '(anonymous namespace)' and not c.startswith('$') and '(' not in c
             and (n == len(scope) - 1 or class_key(scope[:n + 1]) in class_evidence)]
    for c in reversed(tries):
        key = c.lower()
        cands = stem_map.get(key) or fuzzy_map.get(norm_stem(c), []) or suffixed(key)
        extra = prefixed(key)
        if not f['weak'] and not f.get('alias_of'):  # an alias only borrows the folded function's library
            # out-of-line code is compiled into its own library, so its file sits under that library
            cands = [p for p in cands if p.startswith(tdir)] or [p for p in suffixed(key) if p.startswith(tdir)]
            extra = [p for p in extra if p.startswith(tdir)]
        else:
            cands = [p for p in cands if ns & set(p.lower().split('/')[:-1])] or cands
        cands = [p for p in cands if not p.endswith('.inc')]
        if not cands and not extra:
            continue
        if sol and (sol in cands or sol in extra) and kind_ok(sol, f):
            return sol, 'sol+class'
        if cands:
            src = [p for p in cands if p.endswith(SRC_EXT)]
            hdr = [p for p in cands if p.endswith(HDR_EXT)]
            pick = (hdr or src) if f['weak'] else (src or hdr)
            return lib_bias(pick, f), 'class'
    if sol and (f['weak'] or not sol.endswith(SRC_EXT) or sol.startswith(tdir)):
        return sol, 'sol'
    return None, None


def string_hit(f):
    """The file a decompiled body's __FILE__ strings (asserts, logging) say it came from."""
    code = bodies.get(f['addr'])
    if not code:
        return None
    hits = sorted({h for h in (posixpath.normpath(m) for m in FILE_STR.findall(code)) if jagex_path(h) and kind_ok(h, f)})
    if not hits:
        return None
    leaf = norm_stem(f['scope'][-1]) if f['scope'] else ''
    own = [h for h in hits if leaf and norm_stem(posixpath.basename(h).split('.')[0]).startswith(leaf)]
    if f['weak']:  # inlined callees leave their own header paths in inline functions
        return own[0] if len(own) == 1 else None
    if len(hits) == 1:
        return hits[0]
    return own[0] if len(own) == 1 else None


jag_funcs = [f for f in funcs if f['cat'] in ('jagex', 'init') and not f['thunk']]
for f in funcs:
    f['file'], f['how'] = (assign(f) if f['cat'] in ('jagex', 'init') else (None, None))
file_check = collections.Counter()
for f in jag_funcs:
    f['hit'] = string_hit(f)
    if f['hit']:
        file_check[(f['how'], f['hit'] == f['file'])] += 1
        known.add(f['hit'])
        if f['hit'] != f['file']:
            f['file'], f['how'] = f['hit'], 'file string'

# neighbours: unity objects keep each source file's functions together, so a function between two
# anchors of the same .cpp most likely belongs to it (scored against the file strings, holding each out)
by_obj = collections.defaultdict(list)
for f in jag_funcs:
    if not f['weak']:
        by_obj[f['obj']].append(f)
neighbour_check = collections.Counter()
for obj, fs in by_obj.items():
    fs.sort(key=lambda f: f['addr'])
    anchors = [i for i, f in enumerate(fs) if f['file'] and f['file'].endswith(SRC_EXT)
               and (f['hit'] or f['how'] in ('class', 'sol+class'))]
    for i, f in enumerate(fs):
        k = bisect.bisect_left(anchors, i)
        prev = anchors[k - 1] if k > 0 else None
        if k < len(anchors) and anchors[k] == i:
            nxt = anchors[k + 1] if k + 1 < len(anchors) else None
        else:
            nxt = anchors[k] if k < len(anchors) else None
        if prev is not None and nxt is not None and fs[prev]['file'] == fs[nxt]['file']:
            pred = fs[prev]['file']
            if f['hit']:
                neighbour_check['agrees' if pred == f['hit'] else 'differs'] += 1
            elif f['how'] in ('sol', None):
                f['file'], f['how'] = pred, 'neighbour'
# classes split over several files (client.cpp, client_network.cpp, ...): reliable neighbours pick the sibling
for obj, fs in by_obj.items():
    strong = [i for i, f in enumerate(fs) if f['file'] and f['file'].endswith(SRC_EXT)
              and (f['hit'] or f['how'] == 'sol+class')]
    for i, f in enumerate(fs):
        if f['how'] != 'class':
            continue
        k = bisect.bisect_left(strong, i)
        near = [fs[strong[k - 1]]['file'] if k > 0 else None, fs[strong[k]]['file'] if k < len(strong) else None]
        sibs = set()
        for c in f['scope']:
            sibs |= set(stem_map.get(c.lower(), [])) | set(prefixed(c.lower()))
        picks = {p for p in near if p and p in sibs and p != f['file']}
        others = [p for p in near if p and p not in sibs]
        if len(picks) == 1 and (near[0] == near[1] or others or None in near):
            f['file'], f['how'] = picks.pop(), 'class + neighbours'
for f in jag_funcs:  # aliases come after their primaries, so a primary's file is known by then
    if not f['file'] and f.get('alias_of') and f['alias_of'].get('file'):
        f['file'], f['how'] = f['alias_of']['file'], 'folded with'
    if not f['file']:
        unity = re.search(r'unity_\d+', f['obj'] or '')
        f['file'] = f"_unplaced/{target_dir(f['target'])}/{unity.group(0) if unity else 'misc'}.cpp"
        f['how'] = 'unplaced'
how = collections.Counter(f['how'] for f in jag_funcs)

# ---- vtables: the client is built with -fno-rtti, so bases come from shared vtable slots ----
dem_of = {r['mangled']: r['dem'] for r in datas}


addr2funcs = collections.defaultdict(list)
for f in funcs:
    addr2funcs[f['addr']].append(f)


def method_leaf(f):
    if not f or not f['sig']:
        return None
    leaf = base(f['leaf'])
    return '~' if leaf.startswith('~') else leaf


# a slot is (address, names): ld64 folds identical functions, so one address can carry many names
vtables, vtable_count = {}, collections.Counter()
for name, (addr, _, _) in syms.items():
    if not name.startswith('__ZTV'):
        continue
    cls = dem_of.get(name, name).replace('vtable for ', '')
    words = [q(addr + 8 * i) for i in range(symsize(addr) // 8)]
    # classes with virtual bases put vbase/vcall offsets before the offset-to-top and typeinfo words
    start = 0
    if words[:2] != [0, 0]:
        start = next((i for i in range(min(len(words) - 2, 32)) if words[i] == 0 and words[i + 1] == 0
                      and words[i + 2] in addr2funcs), None)
        if start is None:
            continue
    slots, zeros = [], 0
    for v in words[start + 2:]:
        if v is None or v >> 56 == 0xff:  # a negative offset-to-top starts a secondary vtable
            break
        if v in addr2funcs:
            fs = addr2funcs[v]
            slots.append((v, fs, {method_leaf(f) for f in fs}))
            zeros = 0
        elif v == 0:
            zeros += 1
            if zeros > 2:  # a run of zeros is the next table, not pure virtual slots
                break
            slots.append(None)
        else:
            break
    while slots and slots[-1] is None:
        slots.pop()
    key = class_key(base(c) for c in components(cls))
    vtable_count[key] += 1
    vtables.setdefault(key, slots)


def slot_func(slot, key):
    """The name a class's slot most likely has: its own method if one was folded here."""
    _, fs, _ = slot
    own = [f for f in fs if f['sig'] and class_key(f['scope']) == key]
    return own[0] if own else (fs[0] if len(fs) == 1 else None)


def compatible(bslots, slots, key):
    """Can `slots` extend `bslots`? strong counts unfolded slots the class shares but doesn't own."""
    strong = same = 0
    named = False
    for sb, sc in zip(bslots, slots):
        if sb is None:
            continue
        if sc is None:
            return None
        if sb[0] == sc[0]:
            same += 1
            strong += len(sc[1]) == 1 and names_at[sc[0]] <= 1 and class_key(sc[1][0]['scope']) != key
        elif sb[2] & sc[2] - {None}:
            named = named or bool(sb[2] & sc[2] - {'~', None})
        else:
            return None
    return strong, same, named


class_bases, base_score = {}, {}
# template instantiations share one key but not one vtable, so they take no part in base inference
single = {k: v for k, v in vtables.items() if vtable_count[k] == 1}
by_len = sorted(single.items(), key=lambda kv: len(kv[1]))
for key, slots in single.items():
    scored = []
    for b, bslots in by_len:
        if len(bslots) > len(slots):
            break
        if b == key or len(bslots) < 2:
            continue
        r = compatible(bslots, slots, key)
        if r and (r[0] or (r[2] and 3 <= len(bslots) < len(slots))) and (len(bslots) < len(slots) or r[0]):
            scored.append(((r[0] > 0, len(bslots), r[1]), b))
    if scored:
        scored.sort(reverse=True)
        if len(scored) == 1 or scored[0][0] != scored[1][0]:
            class_bases[key], base_score[key] = scored[0][1], scored[0][0]
# break any inheritance cycle at its weakest edge
for key in list(class_bases):
    seen, cur = [], key
    while cur in class_bases and cur not in seen:
        seen.append(cur)
        cur = class_bases[cur]
    if cur in seen:
        loop = seen[seen.index(cur):]
        weakest = min(loop, key=lambda k: base_score.get(k, (False, 0, 0)))
        class_bases.pop(weakest, None)

# pick the __thiscall pass for functions that are members; keep the first pass for likely statics
STRAY = re.compile(r'\b(?:in|unaff)_(?:[RE]?(?:DI|SI|DX|CX)|R[89][DWB]?|DIL|SIL|DL|CL)\b|\bin_stack_')
virtual_addrs = {slot[0] for slots in vtables.values() for slot in slots if slot}
this_pick = collections.Counter()
static_names = set()  # switched to __thiscall in the second pass but judged static
for f in funcs:
    b = bodies_this.get(f['addr'])
    a = bodies.get(f['addr'], '')
    if not b or not f['sig'] or not f['scope'] or f['scope'][-1] == '(anonymous namespace)' or f.get('alias_of') \
            or (namespace_like(f['scope'][-1]) and class_key(f['scope']) not in vtables) \
            or '__thiscall' in sig_line(a) or b.startswith('// decompile failed'):
        continue
    leaf, owner = base(f['leaf']), f['scope'][-1]
    member = leaf in (owner, '~' + owner) or f['sig'][3].startswith('const') or f['addr'] in virtual_addrs \
        or STRAY.search(a)
    no_params = f['sig'][2] in ('()', '(void)')
    if member or (no_params and re.search(r'\bthis\b', body_of(b))):
        bodies[f['addr']] = b
        f['pass_b'] = True
        this_pick['thiscall'] += 1
    else:
        this_pick['kept (likely static)'] += 1
        static_names.add(f"{owner}::{leaf}")

# ---- classes from member functions ----
classes = collections.defaultdict(lambda: {'methods': [], 'statics': [], 'template': False})


def local_scope(scope):
    return any(c.startswith('$') or ('(' in c and c != '(anonymous namespace)') for c in scope)


is_class = {k for k in vtables if not local_scope(components(k))}
for f in funcs:
    if f['cat'] != 'jagex' or not f['sig'] or not f['scope'] or local_scope(f['scope']):
        continue
    leaf = base(f['leaf'])
    owner = f['scope'][-1]
    key = class_key(f['scope'])
    if owner == '(anonymous namespace)':
        continue
    if leaf in (owner, '~' + owner) or f['sig'][3].startswith('const') or not re.fullmatch(r'[a-z0-9_]+', owner):
        is_class.add(key)
for f in funcs:
    if f['cat'] == 'jagex' and f['sig'] and not local_scope(f['scope']) and class_key(f['scope']) in is_class:
        c = classes[class_key(f['scope'])]
        c['methods'].append(f)
        if any('<' in mask(x) for x in f['rawscope']):
            c['template'] = True
for r in datas:
    dem = r['dem']
    if dem.startswith(('vtable for', 'typeinfo', 'VTT for', 'construction vtable', 'guard variable')):
        continue
    comps = components(dem)
    key = '::'.join(base(c) for c in comps[:-1])
    if key in is_class and '(' not in dem:
        classes[key]['statics'].append(r)


home_cache = {}


def home_header(key, c):
    if key not in home_cache:
        home_cache[key] = find_home_header(key, c)
    return home_cache[key]


def find_home_header(key, c):
    leaf = key.split('::')[-1].lower()
    hdrs = [p for p in stem_map.get(leaf, []) + suffixed(leaf) if p.endswith(HDR_EXT) and not p.endswith('.inc')]
    ns = {x.lower() for x in key.split('::')}
    hdrs = [p for p in hdrs if ns & set(p.lower().split('/')[:-1])] or hdrs
    libs = collections.Counter(target_dir(f['target']) for f in c['methods'] if not f['weak'])
    if libs:
        lib = libs.most_common(1)[0][0] + '/'
        hdrs = [p for p in hdrs if p.startswith(lib)] or hdrs
    files = collections.Counter(f['file'] for f in c['methods'] if f['file'])
    if hdrs:
        if files:
            top = files.most_common(1)[0][0]
            return max(hdrs, key=lambda p: len(posixpath.commonprefix([p, top])))
        return hdrs[0]
    outer = key.rsplit('::', 1)[0] if '::' in key else None
    if outer in classes:  # a nested class is declared with its outer class
        return home_header(outer, classes[outer])
    # no file of its own: first, methods reliably placed in a real file that shares the class's namespace
    # (out-of-line methods the debug map puts there count half: several agreeing ones are evidence, one is not)
    solid = collections.Counter()
    for f in c['methods']:
        if f['file'] and not f['file'].startswith('_unplaced/') and ns & set(f['file'].lower().split('/')[:-1]):
            if f['how'] in ('file string', 'sol+class', 'class', 'class + neighbours', 'neighbour'):
                solid[f['file']] += 1
            elif f['how'] == 'sol' and not f['weak']:
                solid[f['file']] += 0.5
    if solid and solid.most_common(1)[0][1] >= 1:
        top = solid.most_common(1)[0][0]
        sib = posixpath.splitext(top)[0] + '.h'
        return sib if sib in known else top
    # then the module it belongs to, usually named as a prefix (AddressBase in address.h,
    # Vector3T in Vector3.inl, LoadingScreenScript in LoadingScreen.cpp)
    for i in range(len(leaf) - 1, 3, -1):
        mods = [p for p in stem_map.get(leaf[:i], []) if not p.endswith('.inc')]
        mods = [p for p in mods if ns & set(p.lower().split('/')[:-1])] or mods
        if mods:
            return max(mods, key=lambda p: (p.endswith(HDR_EXT), p.endswith('.h')))
    # otherwise beside the methods, counted by how reliably they were placed: never by placements that came
    # from this very choice (inline relocation, folded aliases), and a debug-map guess or _unplaced/ counts little
    weight = collections.Counter()
    for f in c['methods']:
        if f['file'] and f['how'] not in ('class header', 'folded with'):
            near = 2 if ns & set(f['file'].lower().split('/')[:-1]) else 0.5  # a path sharing its namespace
            weight[f['file']] += near * (0.01 if f['file'].startswith('_unplaced/') else 0.3 if f['how'] == 'sol' else 1)
    if weight:
        # declared in the module header if there is one, otherwise in the file that defines it, as a class local
        # to that .cpp (or beside its inline methods in a header)
        top = weight.most_common(1)[0][0]
        sib = posixpath.splitext(top)[0] + '.h'
        return sib if sib in known and not top.startswith('_unplaced/') else top
    return f"_unplaced/classes/{key.replace('::', '/').replace('(anonymous namespace)', 'anon')}.h"


for f in funcs:
    key = class_key(f['scope'])
    if f['weak'] and f['how'] in ('sol', 'neighbour', 'unplaced') and key in classes and \
            not (f['file'] or '').endswith(HDR_EXT):
        f['file'], f['how'] = home_header(key, classes[key]), 'class header'
how = collections.Counter(f['how'] for f in funcs if f['cat'] in ('jagex', 'init'))

# ---- static data: values stored in the binary, or set at startup by the static initialisers ----
sections = []
off = 32
for _ in range(struct.unpack_from('<I', data, 16)[0]):
    cmd, size = struct.unpack_from('<II', data, off)
    if cmd == 0x19:
        for j in range(struct.unpack_from('<I', data, off + 64)[0]):
            so = off + 72 + 80 * j
            sect = data[so:so + 16].rstrip(b'\0').decode()
            seg = data[so + 16:so + 32].rstrip(b'\0').decode()
            saddr, ssize, sfoff = struct.unpack_from('<QQI', data, so + 32)
            zero = struct.unpack_from('<I', data, so + 64)[0] & 0xff in (0x1, 0xc, 0x12)
            sections.append((f'{seg},{sect}', saddr, ssize, sfoff, zero))
    off += size


def section_of(a):
    return next((s for s in sections if s[1] <= a < s[1] + s[2]), None)


def raw(a, n):
    s = section_of(a)
    if not s or s[4]:
        return None
    o = s[3] + a - s[1]
    return data[o:o + n]


def cstr(a):
    s = section_of(a)
    if not s or not s[0].endswith('__cstring'):
        return None
    o = s[3] + a - s[1]
    return data[o:data.index(b'\0', o)].decode('utf8', 'replace')


def c_literal(s):
    return '"' + s.replace('\\', '\\\\').replace('"', '\\"').replace('\n', '\\n').replace('\t', '\\t') + '"'


COMPILER_DATA = ('vtable for', 'typeinfo', 'VTT for', 'construction vtable', 'guard variable', 'GCC_except_table',
                 '___block_', '__OBJC_', '_OBJC_', 'OBJC_', 'l_', 'L_', 'ltmp', '___unnamed', '_objc_', '__ZTS')


def is_source_data(r):
    d = r['dem']
    if not r['addr'] or d.startswith(COMPILER_DATA) or '(' in d or '::$_' in d:
        return False
    root = base(components(d)[0])
    return root not in LIBRARY_ROOTS and (root == 'jag' or jagex_path(r['sol']))


src_data = [r for r in datas if is_source_data(r)]
for r in src_data:
    if re.fullmatch(r'_[A-Za-z]\w*', r['dem']):
        r['dem'] = r['dem'][1:]
data_by_name = {r['dem']: r for r in src_data}
data_ranges = sorted((r['addr'], r['addr'] + max(symsize(r['addr']), 1), r) for r in src_data)
range_starts = [x[0] for x in data_ranges]


def containing(a):
    i = bisect.bisect_right(range_starts, a) - 1
    return data_ranges[i][2] if i >= 0 and a < data_ranges[i][1] else None


def mangled_ctor_class(name):
    """'__ZN3jag4game14Js5ConfigGroupC2Eii' -> 'jag::game::Js5ConfigGroup' (plain nested names only)."""
    if not name.startswith('__ZN'):
        return None
    i, comps = 4, []
    while i < len(name):
        if name[i].isdigit():
            j = i
            while j < len(name) and name[j].isdigit():
                j += 1
            n = int(name[i:j])
            comps.append(name[j:j + n])
            i = j + n
        elif name.startswith(('C1', 'C2', 'C3'), i) and comps:
            return '::'.join(comps)
        else:
            return None
    return None


# constructors by class, from the full symbol table: folded constructors keep their names there as aliases
ctor_addrs = collections.defaultdict(set)
for name, (addr, _, _) in syms.items():
    cls = mangled_ctor_class(name)
    if cls:
        ctor_addrs[cls].add(addr)


def balanced(text, i):
    """Index just past the parenthesis group opening at text[i], skipping string literals."""
    depth, j = 0, i
    while j < len(text):
        c = text[j]
        if c == '"':
            j += 1
            while j < len(text) and text[j] != '"':
                j += 2 if text[j] == '\\' else 1
        elif c == '(':
            depth += 1
        elif c == ')':
            depth -= 1
            if depth == 0:
                return j + 1
        j += 1
    return len(text)


def split_args(s):
    """Split on top-level commas. '<' and '>' count as brackets only where they look like template arguments,
    so 'p->x', 'a < b' and 'a >= b' inside an argument do not unbalance it."""
    out, depth, angle, cur, j = [], 0, 0, 0, 0
    while j < len(s):
        c = s[j]
        if c in '"\'':
            q = c
            j += 1
            while j < len(s) and s[j] != q:
                j += 2 if s[j] == '\\' else 1
        elif c in '([':
            depth += 1
        elif c in ')]':
            depth -= 1
        elif c == '<' and j and (s[j - 1].isalnum() or s[j - 1] in '_>') and s[j + 1:j + 2] not in ('<', '=', ' '):
            angle += 1
        elif c == '>' and angle and s[j - 1:j] != '-' and s[j + 1:j + 2] != '=':
            angle -= 1
        elif c == ',' and depth == 0 and angle == 0:
            out.append(' '.join(s[cur:j].split()))
            cur = j + 1
        j += 1
    tail = ' '.join(s[cur:].split())
    return out + [tail] if tail else out


def target_addr(expr):
    expr = re.sub(r'^\(\s*[^()]*\)\s*', '', expr.strip())  # leading cast
    m = re.fullmatch(r'&?DAT_([0-9a-f]+)', expr)
    if m:
        return int(m.group(1), 16)
    m = re.fullmatch(r'PTR_\w*?_([0-9a-f]{9,})', expr)
    if m:
        v = q(int(m.group(1), 16))
        return v or None
    m = re.fullmatch(r'&([\w:]+)', expr)
    if m and m.group(1) in data_by_name:
        return data_by_name[m.group(1)]['addr']
    return None


CTOR = re.compile(r'((?:[A-Za-z_]\w*(?:<[^()]*?>)?::)+)(~?[A-Za-z_]\w*)\s*\(')
STORE = re.compile(r'^\s*(?:\*\s*\([^()]*\)\s*)?(&?[\w:]+)\s*=\s*([^;]+);', re.M)
LOCALS = re.compile(r'\b(?:local_|param_|[a-z]Var\d|in_|unaff_|extraout_)')
inits = {}
for f in jag_funcs:
    if not f['dem'].startswith(('___cxx_global_var_init', '__GLOBAL__sub_I')) or f['addr'] not in bodies:
        continue
    body = body_of(bodies[f['addr']])
    for m in CTOR.finditer(body):
        cls, name = m.group(1)[:-2], m.group(2)
        if base(components(cls)[-1]) != name:
            continue
        end = balanced(body, m.end() - 1)
        args = split_args(body[m.end():end - 1])
        if not args:
            continue
        a = target_addr(args[0])
        if a is None or a in inits:
            continue
        rest = args[1:]
        if name == 'basic_string' and rest and rest[0].startswith('"'):
            typ = ('eastl::string' if 'eastl' in cls else 'std::string')
            value = rest[0]
        else:
            typ = cls
            rest = [x for x in rest if not x.startswith('local_')] if name == 'basic_string' else rest
            if any(LOCALS.search(x) for x in rest):
                rest = None
            value = None if rest is None else f"{components(cls)[-1]}({', '.join(rest)})"
        inits[a] = {'type': typ, 'value': value, 'func': f, 'ghidra_ctor': cls + '::' + name}
    for m in STORE.finditer(body):
        a = target_addr(m.group(1) if m.group(1).startswith(('&', 'DAT_', 'PTR_')) else '&' + m.group(1))
        value = ' '.join(m.group(2).split())
        if a is not None and a not in inits and not LOCALS.search(value) and containing(a):
            inits[a] = {'type': None, 'value': value, 'func': f, 'ghidra_ctor': None}
init_addrs = sorted(inits)


def owner_class(r):
    comps = components(r['dem'])
    key = '::'.join(base(c) for c in comps[:-1])
    return key if key in classes else None


def element_type(r, init):
    """Ghidra may name a linker-folded constructor; prefer the owner class when its constructor is that code."""
    typ, owner = init['type'], owner_class(r)
    if typ and owner and init['ghidra_ctor'] and typ != owner:
        if ctor_addrs.get(typ, set()) & ctor_addrs.get(owner, set()):
            return owner, True
    return typ, False


def decimal(text):
    return re.sub(r'\b0x([0-9a-f]+)\b', lambda m: str(int(m.group(1), 16)) if int(m.group(1), 16) < 1 << 20 else m.group(0), text)


def entries_in(r):
    lo, hi = r['addr'], r['addr'] + max(symsize(r['addr']), 1)
    i, j = bisect.bisect_left(init_addrs, lo), bisect.bisect_left(init_addrs, hi)
    return [(x - lo, inits[x]) for x in init_addrs[i:j]]


def stride_of(entries):
    gaps = [b[0] - a[0] for a, b in zip(entries, entries[1:]) if b[0] > a[0]]
    g = 0
    for x in gaps:
        g = math.gcd(g, x)
    return g or None


def short(r, ref):
    """ref's name, relative to r's class when they share it."""
    owner = owner_class(r)
    return ref['dem'][len(owner) + 2:] if owner and ref['dem'].startswith(owner + '::') else ref['dem']


def entry_text(r, init):
    typ, folded = element_type(r, init)
    value = init['value']
    if value and folded and '(' in value:
        value = typ.split('::')[-1] + value[value.index('('):]
    return decimal(value) if value and init['type'] else value


def ptr_text(r, v):
    if v == 0:
        return 'nullptr'
    s = cstr(v)
    if s is not None:
        return c_literal(s)
    ref = containing(v)
    if ref:
        off = v - ref['addr']
        if off == 0:
            return '&' + short(r, ref)
        ents = entries_in(ref)
        st = stride_of(ents)
        hit = inits.get(v)
        note = f' /* {entry_text(ref, hit)} */' if hit and entry_text(ref, hit) else ''
        if st and off % st == 0:
            return f'&{short(r, ref)}[{off // st}]{note}'
        return f'(&{short(r, ref)} + {off}){note}'
    f = addr2func.get(v)
    return f'&{f["dem"]}' if f else None


def nice_float(x):
    return x == x and abs(x) != float('inf') and (x == 0 or 1e-4 <= abs(x) <= 1e7) and float(f'{x:.6g}') == x


def fmt_float(x, suffix='f'):
    s = f'{x:.7g}'
    if not re.search(r'[.e]|inf|nan', s):
        s += '.0'
    return s + suffix


def wrap(items, per=8):
    if len(items) <= per:
        return '{ ' + ', '.join(items) + ' }'
    rows = [', '.join(items[k:k + per]) for k in range(0, len(items), per)]
    return '{\n    ' + ',\n    '.join(rows) + ',\n}'


IMAGE_LO, IMAGE_HI = 0x100000000, max(s[1] + s[2] for s in sections)


def bytes_value(r, n):
    b = raw(r['addr'], min(n, 1 << 16))
    if b is None:
        return None
    note = f' /* first {len(b)} of {n} bytes */' if len(b) < n else ''
    if n in (1, 2):
        return str(int.from_bytes(b, 'little', signed=True))
    if n == 4:
        i, x = struct.unpack('<i', b)[0], struct.unpack('<f', b)[0]
        return fmt_float(x) if abs(i) > 0x10000 and nice_float(x) else str(i)
    if n == 8:
        v = struct.unpack('<Q', b)[0]
        if IMAGE_LO <= v < IMAGE_HI:
            t = ptr_text(r, v)
            if t:
                return t
        d = struct.unpack('<d', b)[0]
        if v >> 52 not in (0, 0x800) and nice_float(d):
            return fmt_float(d, '')
        return str(struct.unpack('<q', b)[0])
    if len(b) % 8 == 0:
        qs = struct.unpack(f'<{len(b) // 8}Q', b)
        ptrs = [ptr_text(r, v) if v == 0 or IMAGE_LO <= v < IMAGE_HI else None for v in qs]
        if all(ptrs) and any(p != 'nullptr' for p in ptrs):
            return wrap(ptrs, 4) + note
    if len(b) % 4 == 0:
        ws = struct.unpack(f'<{len(b) // 4}i', b)
        fs = struct.unpack(f'<{len(b) // 4}f', b)
        nz = [k for k, w in enumerate(ws) if w]
        if nz and sum(1 for k in nz if abs(ws[k]) > 0x10000 and nice_float(fs[k])) >= 0.6 * len(nz):
            return wrap([fmt_float(x) if x else '0' for x in fs]) + note
        return wrap([str(w) for w in ws], 12) + note
    return wrap([f'0x{x:02x}' for x in b], 16) + note


def data_info(r):
    """-> (type, value, startup function, section, folded constructor note)"""
    n = symsize(r['addr'])
    sec = section_of(r['addr'])
    secname = sec[0] if sec else '?'
    ents = entries_in(r)
    if ents:
        func = ents[0][1]['func']['dem']
        typ, folded = element_type(r, ents[0][1])
        fold_note = ents[0][1]['ghidra_ctor'] if folded else None
        if len(ents) == 1 and ents[0][0] == 0:
            return typ, entry_text(r, ents[0][1]), func, secname, fold_note
        st = stride_of(ents) or n
        count = n // st if st else len(ents)
        items = [f'/* [{o // st}] */ {entry_text(r, e) or "?"}' for o, e in ents]
        return (f'{typ}[{count}]' if typ else None), wrap(items, 1), func, secname, fold_note
    typ = None
    if n == 8 and raw(r['addr'], 8):
        ref = containing(q(r['addr']) or 0)
        target = inits.get(q(r['addr']))
        if ref and target:
            elem = element_type(ref, target)[0]
            owner = owner_class(r)
            typ = (elem[len(owner) - len(owner.split('::')[-1]):] if owner and elem == owner else elem) + ' const*'
    value = bytes_value(r, n)
    if not typ and value and re.fullmatch(r'-?[\d.]+(?:e[-+]?\d+)?f?', value) and '.' in value:
        typ = 'float' if value.endswith('f') else 'double'
    return typ, value, None, secname, None


def data_file(r):
    owner = owner_class(r)
    if owner:
        srcs = collections.Counter(f['file'] for f in classes[owner]['methods']
                                   if f['file'] and f['file'].endswith(SRC_EXT) and not f['file'].startswith('_unplaced'))
        if srcs:
            return srcs.most_common(1)[0][0]
        return home_header(owner, classes[owner])
    init_files = [e['func']['file'] for _, e in entries_in(r)[:1] if e['func'].get('file')]
    if init_files and not init_files[0].startswith('_unplaced'):
        return init_files[0]
    # the debug map's file run is stale for data (it comes after an object's functions): match the name instead
    tdir = target_dir(r['target']) + '/'
    for c in reversed([base(x) for x in components(r['dem'])[:-1]]):
        cands = [p for p in stem_map.get(c.lower(), []) if p.endswith(SRC_EXT)]
        if cands:
            return max(cands, key=lambda p: p.startswith(tdir))
    if init_files:
        return init_files[0]
    unity = re.search(r'unity_\d+', r['obj'] or '')
    return f"_unplaced/{target_dir(r['target'])}/{unity.group(0) if unity else 'misc'}.cpp"


# trailing alignment padding is not part of a variable: trim it to the size of its neighbour in the same scope
data_size = {}
prev = None
for lo, hi, r in data_ranges:
    n = hi - lo
    b = raw(lo, n)
    if prev and b and owner_class(prev) == owner_class(r):
        m = data_size[prev['addr']]
        if m < n and not any(b[m:]):
            n = m
    data_size[lo] = n
    prev = r
symsize_raw = symsize


def symsize(a):
    return data_size.get(a) or symsize_raw(a)


# a static initialiser that only sets data in one known file moves into that file
init_targets = collections.defaultdict(set)
for a, e in inits.items():
    r = containing(a)
    if r:
        init_targets[e['func']['addr']].add(data_file(r))
for f in jag_funcs:
    files_set = init_targets.get(f['addr'])
    if files_set and len(files_set) == 1 and f['how'] in ('sol', 'unplaced', 'neighbour', None):
        target = next(iter(files_set))
        if not target.startswith('_unplaced'):
            f['file'], f['how'] = target, 'data it initialises'


def declarator(typ, name):
    """'T[86]', 'x' -> 'T x[86]'"""
    if not typ:
        return name
    m = re.fullmatch(r'(.*?)(\[\d+\])', typ)
    return f'{m.group(1)} {name}{m.group(2)}' if m else f'{typ} {name}'


cast_types = None
DATA_CAST = re.compile(r'\(\s*([A-Za-z_][\w:<>,\s]*?[\w>])\s*\*\s*\)\s*&([A-Za-z_][\w:]*)')


def cast_type(r):
    """The type the code treats a variable as: Ghidra casts &var to it wherever it calls a method on it."""
    global cast_types
    if cast_types is None:
        by_leaf = collections.defaultdict(list)
        for d in src_data:
            by_leaf[components(d['dem'])[-1]].append(d)
        cast_types = collections.defaultdict(collections.Counter)
        for f in jag_funcs:
            for m in DATA_CAST.finditer(bodies.get(f['addr'], '')):
                name = m.group(2)
                cands = [d for d in by_leaf.get(name.split('::')[-1], []) if d['dem'].endswith(name)]
                if len(cands) > 1 and f['scope']:
                    cands = [d for d in cands if d['dem'].startswith(class_key(f['scope']) + '::')] or cands
                if len(cands) == 1 and not m.group(1).startswith(('undefined', 'char', 'ReturnValue')):
                    cast_types[cands[0]['addr']][' '.join(m.group(1).split())] += 1
    c = cast_types.get(r['addr'])
    if not c:
        return None
    # a container's methods are often its base's (hashtable for hash_map): the derived type is the declared one
    ranked = sorted(c.items(), key=lambda kv: (base(kv[0]).split('::')[-1] in INTERNAL_BASES, -kv[1]))
    return qualify_type(ranked[0][0])


INTERNAL_BASES = {'hashtable', 'rbtree', 'DequeBase', 'VectorBase', 'ListBase', 'intrusive_list_base',
                  'compressed_pair', '__compressed_pair', '__hash_table', '__tree', '__vector_base'}


def qualify_type(t):
    """Ghidra prints a structure by its own name: put back the namespace when only one fits."""
    leaf = base(t)
    if '::' in leaf:
        return t
    owners = {k.rsplit('::', 1)[0] for k in class_keys_by_leaf.get(leaf, ())}
    return f'{owners.pop()}::{t}' if len(owners) == 1 else t


class_keys_by_leaf = collections.defaultdict(set)
for _f in funcs:
    if _f['sig'] and _f['scope'] and len(_f['scope']) > 1:
        class_keys_by_leaf[_f['scope'][-1]].add(class_key(_f['scope']))


def fallback_type(r, value):
    """A type for data the binary does not type: from its size, alignment and the shape of its value."""
    n = symsize(r['addr'])
    t = cast_type(r) if value is None else None
    if t:
        return t
    if value and value.startswith('"'):
        return 'const char*'
    if value and value.startswith('&'):
        return 'const void*'
    if value and value.startswith('{'):
        items = re.findall(r'(?<=[{,])\s*([^,{}\n]+?)\s*(?=[,}])', value)
        k = max(len(items), 1)
        if items and all(re.fullmatch(r'-?[\d.]+(?:e[-+]?\d+)?f', x) or x == '0' for x in items):
            return f'float[{n // 4}]'
        if items and all(x.startswith(('&', '"', 'nullptr')) for x in items):
            return f'const void*[{n // 8}]'
        if re.search(r'0x[0-9a-f]{2}\b', value):
            return f'uint8_t[{n}]'
        return f'int32_t[{n // 4}]' if n % 4 == 0 else f'uint8_t[{n}]'
    if n > 8:
        return f'uint8_t[{n}]'
    for size, name in ((8, 'int64_t'), (4, 'int32_t'), (2, 'int16_t'), (1, 'uint8_t')):
        if size <= max(n, 1) and r['addr'] % size == 0:
            return 'bool' if size == 1 and value in (None, '0', '1') else name
    return 'uint8_t'


def data_definition(r):
    typ, value, func, secname, fold = data_info(r)
    head = f"// {r['addr']:#x}"
    if func:
        head += f", set at startup by {func}"
    return f"{head}\n{declarator(typ or fallback_type(r, value), r['dem'])}{' = ' + value if value else ''};\n"


def static_member_line(r):
    typ, value, func, _, _ = data_info(r)
    owner = owner_class(r)
    if typ and owner and typ.startswith(owner) and not typ[len(owner):len(owner) + 2] == '::':
        typ = owner.split('::')[-1] + typ[len(owner):]
    sized = components(r['dem'])[-1]
    decl = f"    static {declarator(typ or fallback_type(r, value), sized)};"
    if value and '\n' not in value and len(value) < 120:
        decl += f' // = {value}'
    elif value:
        decl += ' // initialised in its definition'
    return decl


def data_stats():
    c = collections.Counter()
    for r in src_data:
        typ, value, func, _, _ = data_info(r)
        c['set at startup' if func else 'stored in the binary' if value else 'zero-initialised'] += 1
        if func and value:
            c['startup value recovered'] += 1
    return dict(c)


# ---- write the tree ----
files = collections.defaultdict(lambda: {'funcs': [], 'data': [], 'classes': [], 'targets': collections.Counter()})
for f in funcs:
    if f['file'] and not f['thunk']:
        files[f['file']]['funcs'].append(f)
        if not f['weak']:
            files[f['file']]['targets'][f['target']] += 1
for r in src_data:
    files[data_file(r)]['data'].append(r)
for key, c in classes.items():
    files[home_header(key, c)]['classes'].append(key)


# hex literals become decimal, except inside string/char literals and the address line of each definition
HEX = re.compile(r'"(?:[^"\\\n]|\\.)*"|\'(?:[^\'\\\n]|\\.)*\'|^// 0x[0-9a-f]+\b.*$|\b0[xX]([0-9a-fA-F]+)([uUlL]*)\b', re.M)


def dehex(text):
    return HEX.sub(lambda m: m.group(0) if m.group(1) is None else str(int(m.group(1), 16)) + m.group(2), text)


def write(path, text):
    full = os.path.join(OUT, *path.split('/'))
    os.makedirs(os.path.dirname(full), exist_ok=True)
    with open(full, 'w', encoding='utf8', newline='\n') as fh:
        fh.write(text)


HEADER = '// {path}\n// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.\n'


# ---- class layouts recovered by BuildStructs.java (layouts.tsv beside the decompile directory) ----
layouts = {}
LAYOUTS = os.path.join(os.path.dirname(os.path.abspath(DECOMP)), 'layouts.tsv') if DECOMP else None
if LAYOUTS and os.path.exists(LAYOUTS):
    cur = None
    for line in open(LAYOUTS, encoding='utf8'):
        parts = line.rstrip('\n').split('\t')
        if parts[0] == 'C':
            key = parts[1].replace('(anonymous_namespace)', '(anonymous namespace)')
            cur = layouts.setdefault(key, {'size': int(parts[2]), 'fields': []})
        elif parts[0] == 'F' and cur is not None and len(parts) >= 5:
            typ = parts[3]
            if len(parts) > 5 and parts[5].startswith('embedded '):
                typ = parts[5][len('embedded '):]  # an embedded class, kept as bytes in Ghidra
            cur['fields'].append((int(parts[1]), int(parts[2]), typ, parts[4]))
APPLIED = os.path.join(os.path.dirname(os.path.abspath(STABS)), 'thiscall_apply.txt')
if DECOMP and not DECOMP_THIS and os.path.exists(APPLIED):
    applied = {int(x, 16) for x in open(APPLIED).read().split()}
    for f in funcs:
        if f['addr'] in applied:
            f['pass_b'] = True  # Ghidra's this-derived return types are not trusted for these
FIELD_HEX = re.compile(r'\bfield\d*_0x([0-9a-f]+)\b')  # Ghidra's field8_0x8 -> field_8


def decimal_fields(text):
    return FIELD_HEX.sub(lambda m: f'field_{int(m.group(1), 16)}', text)


# getters mapped to the member they return (accessor_map.py), for return types the decompile can't give
accessor_field = {}
ACCESSORS = os.path.join(os.path.dirname(os.path.abspath(STABS)), 'accessor_names.tsv')
if os.path.exists(ACCESSORS):
    for line in open(ACCESSORS, encoding='utf8'):
        parts = line.rstrip('\n').split('\t')
        if len(parts) >= 6:
            accessor_field[(parts[0], parts[5])] = int(parts[1])


def accessor_type(f):
    """The type of the member a getter returns."""
    if not f['sig'] or not f['scope'] or not base(f['leaf']).startswith(('Get', 'Is', 'Has')):
        return None
    key = class_key(f['scope'])
    off = accessor_field.get((key, base(f['leaf'])))
    for o, length, typ, name in layouts.get(key, {}).get('fields', []) if off is not None else []:
        if o == off:
            t = re.sub(r'\s+\*', '*', re.sub(r'\[\d+\]$', '', typ).strip())
            return None if t.startswith('undefined') else t
    return None


def layout_lines(key):
    lay = layouts.get(key)
    if not lay or (not lay['fields'] and not lay['size']):
        return []
    parent = class_bases.get(key)
    start = layouts[parent]['size'] if parent in layouts and 0 < layouts[parent]['size'] <= lay['size'] else 0
    out = ['', 'private:' if key in vtables or lay['fields'] else '']
    pos = start or (8 if key in vtables else 0)  # the vtable pointer is implicit
    for off, length, typ, name in sorted(lay['fields']):
        if off < pos or name == '_vptr':
            continue  # inside the base, or overlapping a wider access
        if off > pos:
            out.append(f'    uint8_t _unknown_{pos}[{off - pos}];')
        typ = re.sub(r'\s+\*', '*', typ)
        odd = re.fullmatch(r'undefined([3567])', typ)
        typ = f'uint8_t[{odd.group(1)}]' if odd else cleanup.fix_types(typ)
        if typ.endswith('_vtbl*'):
            typ = 'void*'
        arr = re.fullmatch(r'(.*?)\[(\d+)\]', typ)
        decl = f'{arr.group(1)} {name}[{arr.group(2)}]' if arr else f'{typ} {name}'
        out.append(f'    {decimal_fields(decl)};')
        pos = off + length
    if lay['size'] > pos:
        out.append(f"    uint8_t _unknown_{pos}[{lay['size'] - pos}];")
    return out if len(out) > 2 else []


HIDDEN_PARAMS = {'this', '__return_storage_ptr__', 'vtt'}


def sig_params(sig):
    """Ghidra's parameter declarations: the last top-level parenthesised group of its signature line."""
    end = sig.rfind(')')
    depth, j = 0, end
    while j >= 0:
        if sig[j] == ')':
            depth += 1
        elif sig[j] == '(':
            depth -= 1
            if depth == 0:
                break
        j -= 1
    inner = sig[j + 1:end] if end > 0 and j >= 0 else ''
    return [] if inner.strip() in ('', 'void') else split_args(inner)


def param_name(decl):
    m = re.search(r'(\w+)\s*(?:\[\d*\])?$', decl)
    return m.group(1) if m else None


def declare(typ, name):
    """A parameter declaration from a demangled type: 'char const*' -> 'const char* name'."""
    typ = ' '.join(typ.split())
    for pat in (r'\(\*\)', r'\(&&\)', r'\(&\)', r'\(([\w:<>, ]+)::\*\)'):
        m = re.search(pat, typ)
        if m:
            inner = m.group(0)
            return typ[:m.start()] + inner[:-1] + name + ')' + typ[m.end():]
    m = re.fullmatch(r'(.+?) const((?:\s*[*&])+)', typ)
    if m and not re.search(r'[*&]', m.group(1)):
        typ = f'const {m.group(1)}{m.group(2).replace(" ", "")}'
    return f'{typ} {name}'


def is_ctor_dtor(f):
    owner = f['scope'][-1] if f['scope'] else None
    return bool(f['sig']) and base(components(f['sig'][1])[-1]) in (owner, '~' + str(owner))


RET_CTOR = re.compile(r'([\w:]+(?:<[^;()]*?>)?)::(~?\w+)\(\s*(?:\([^()]*\)\s*)?__return_storage_ptr__\b')


def function_return(f):
    """The return type to write: from the signature (templates), the decompiler, or a by-value return buffer."""
    if 'ret_text' in f:
        return f['ret_text']
    if not f['sig']:
        return ''
    ret, name, params, quals = f['sig']
    leaf = components(name)[-1]
    code = bodies.get(f['addr'], '')
    line = sig_line(code)
    out = ''
    if is_ctor_dtor(f) or leaf.startswith('operator '):
        out = ''
    elif '__return_storage_ptr__' in line:
        m = re.match(r'\s*(.+?)\s*\*\s*(?:__\w+\s+)?' + re.escape(base(leaf)), line) if leaf else None
        t = m.group(1).strip() if m else ''
        if not t or t.split('::')[-1] in ('ReturnValue', 'undefined', 'void'):
            c = RET_CTOR.search(body_of(code))
            t = c.group(1) if c and base(components(c.group(1))[-1]) == c.group(2) else ''
        out = ret or t or accessor_type(f) or 'auto'
    else:
        out = ret or ghidra_ret(f) or accessor_type(f) or ''
        if not out and line:
            m = CALLCONV.search(' ' + line)
            raw_ret = (' ' + line)[:m.start()].strip() if m else ''
            out = cleanup.fix_types(raw_ret) if raw_ret and len(raw_ret) < 60 else ''
        out = out or 'void'
    out = cleanup.fix_types(out) if out else ''
    if re.match(r'(?:Is|Has|Can|Should|Was|Are|Does|Did|Will|Contains|Uses|Needs)[A-Z0-9]', base(leaf)) and \
            out in ('uint8_t', 'uint32_t', 'int', 'char', 'unsigned int', 'unsigned char', 'uint64_t', 'int32_t'):
        out = 'bool'
    f['ret_text'] = out
    return f['ret_text']


def definition_params(f):
    """The demangled parameter types, named as in the decompiled code."""
    names = [param_name(p) for p in sig_params(sig_line(bodies.get(f['addr'], '')))]
    names = [n for n in names if n and n not in HIDDEN_PARAMS]
    out = []
    for i, t in enumerate(p for p in split_args(f['sig'][2][1:-1]) if p != 'void'):
        if t == '...':
            out.append('...')
            continue
        n = names[i] if i < len(names) and not names[i].startswith(('in_', 'param_')) else f'arg{i + 1}'
        out.append(declare(t, n))
    return out


def decl_name(f):
    ret, name, params, quals = f['sig']
    leaf = components(name)[-1]
    ret = function_return(f)
    return (ret + ' ' if ret else '') + leaf + '(' + ', '.join(definition_params(f)) + ')' + (' ' + quals if quals else '')


def class_block(key):
    c = classes[key]
    comps = components(key)
    n = 0
    while n < len(comps) - 1 and '::'.join(comps[:n + 1]) not in is_class:
        n += 1
    ns, name = comps[:n], '::'.join(comps[n:])
    parent = class_bases.get(key)
    out = []
    if c['template']:
        pos = len(comps) - 1
        inst = sorted({f['rawscope'][pos][len(comps[-1]):][:100] for f in c['methods'] if len(f['rawscope']) > pos})
        out.append(f'template <typename...> // {len(inst)} instantiations, e.g. ' + ', '.join(inst[:3]))
    inherit = f' : public {parent} // base inferred from shared vtable slots' if parent else ''
    out.append(f'class {name}{inherit}\n{{\npublic:')
    nested = sorted(k[len(key) + 2:] for k in classes if k.startswith(key + '::') and len(components(k)) == len(comps) + 1)
    out += [f'    class {k};' for k in nested]
    seen = set()
    slots = vtables.get(key, [])
    inherited = len(vtables.get(parent, [])) if parent else 0
    vnames = []
    for i, slot in enumerate(slots):
        f = slot and slot_func(slot, key)
        if slot is None:
            if i >= inherited:
                vnames.append(f'    virtual void __pure_slot_{i}() = 0;')
        elif f and f['sig'] and class_key(f['scope']) == key:
            d = decl_name(f)
            if d not in seen:
                seen.add(d)
                vnames.append(f'    virtual {d};')
    if vnames:
        out.append('    // virtual methods in vtable order')
        out += vnames
    rest = []
    for f in sorted(c['methods'], key=lambda f: f['addr']):
        d = decl_name(f)
        if d in seen:
            continue
        seen.add(d)
        rest.append(f'    {d};')
    if c['template'] and len(rest) > 200:
        rest = rest[:200] + [f'    // ... {len(rest) - 200} more instantiated members']
    out += rest
    for r in c['statics']:
        out.append(static_member_line(r))
    out += layout_lines(key)
    out.append('};')
    return ns, shorten('\n'.join(out), comps) + '\n'


PLACED = {'sol+class': 'class name and debug map', 'class': 'class name', 'sol': 'debug map only (low confidence)',
          'neighbour': 'neighbouring functions', 'class + neighbours': 'class name and neighbouring functions', 'file string': '__FILE__ string', 'class header': 'class header (inline)',
          'unplaced': 'nothing (unplaced)', 'data it initialises': 'the data it initialises',
          'folded with': 'the function it was folded into'}


def same_name(f, code):
    leaf = base(f['leaf']).replace(' ', '') if f['sig'] else f['dem']
    key = re.sub(r'[^A-Za-z0-9_~]', '', leaf.replace('.', '_').replace(':', '_'))[:40]
    return not key or key in re.sub(r'[^A-Za-z0-9_~]', '', sig_line(code)) or f['dem'] == 'main'


VARIANTS = {'C1': 'complete-object constructor', 'C2': 'base-object constructor', 'C3': 'allocating constructor',
            'D0': 'deleting destructor', 'D1': 'complete-object destructor', 'D2': 'base-object destructor'}


def variant(f):
    if not f['sig'] or not f['scope'] or base(f['leaf']) not in (f['scope'][-1], '~' + f['scope'][-1]):
        return None
    owner = f['scope'][-1]
    i = f['mangled'].rfind(f'{len(owner)}{owner}')
    m = re.search(r'(C[123]|D[012])', f['mangled'][i + len(owner) + len(str(len(owner))):]) if i >= 0 else None
    return m.group(1) if m else None


# Ghidra writes member calls as Class::method((Class *)obj, ...): rewrite them as obj->method(...)
OPERATOR = r'operator(?:_cast_to_\w+|\(\)|\[\]|->\*?|_new|_delete|<<=|>>=|<<|>>|[-+*/%^&|!=<>~]=?|&&|\|\||\+\+|--|,)'
CALL = re.compile(r'::(~?[A-Za-z_]\w*|' + OPERATOR + r')\s*\(')
CALL_ANY = re.compile(r'::(~?[A-Za-z_]\w*|' + OPERATOR + r')(?=[(<])')
BINARY_OP = re.compile(r'operator(?:==|!=|<=|>=|<<|>>|<|>|\+|-|\*|/|%|&&|\|\||&|\||\^)')
FREE_OP = re.compile(r'(?<![\w:.>])(operator(?:==|!=|<=|>=|<<|>>|<|>|\+|-|\*|/|%|&&|\|\|))\s*\(')
CAST = re.compile(r'\(\s*([^()]+?)\s*\*\s*\)\s*(.+)', re.S)
SIMPLE = re.compile(r'[\w.\[\]]+(?:->\w+)*')
member_names = None
CTX = {'refparams': set()}  # the reference parameters of the function being rewritten


def qual_start(text, i):
    """Start of the qualified name that ends at text[i] ('::method'), or None."""
    j, depth = i, 0
    while j > 0:
        c = text[j - 1]
        if c in '>)' and (depth or c == '>'):
            depth += 1
        elif c in '<(' and depth:
            depth -= 1
        elif c == '<':
            return None
        elif depth == 0 and not (c.isalnum() or c in '_:'):
            break
        elif depth > 0 and c in ';{}"\n':
            return None
        j -= 1
    return j if j < i else None


def shape_norm(s):
    return re.sub(r'[\s_]', '', s.replace('std::__1::', 'std::').replace('operator_cast_to_', 'operator '))


callee_shapes = collections.defaultdict(list)
folded_keys = set()
PROTOS = os.path.join(os.path.dirname(os.path.abspath(STABS)), 'protos.jsonl')
if os.path.exists(PROTOS):
    import json
    for line in open(PROTOS, encoding='utf8'):
        r = json.loads(line)
        comps = components(r['qname'].replace('std::__1::', 'std::'))
        key = shape_norm('::'.join(comps[-2:]))
        shape = (r['sret'], r['member'], r['vtt'], tuple(r.get('refs') or ()), len(r['params']), r['varargs'])
        if shape not in callee_shapes[key]:
            callee_shapes[key].append(shape)
        names = [r['qname']] + [a[0] for a in r.get('aliases', ())]
        owners = {shape_norm('::'.join(components(n.replace('std::__1::', 'std::'))[:-1])) for n in names}
        if len(owners) > 1:  # one body under several classes' names: Ghidra's choice of name says nothing
            folded_keys.update(shape_norm('::'.join(components(n.replace('std::__1::', 'std::'))[-2:])) for n in names)
        for qname, refs, n in r.get('aliases', ()):  # folded names share the code, so the hidden parameters
            akey = shape_norm('::'.join(components(qname.replace('std::__1::', 'std::'))[-2:]))
            ashape = (r['sret'], r['member'], r['vtt'], tuple(refs), n, r['varargs'])
            if ashape not in callee_shapes[akey]:
                callee_shapes[akey].append(ashape)


def callee_shape(qual, method, nargs):
    """(sret, member, vtt, refs) of the function a call names, picked among its overloads by argument count."""
    comps = components(qual.replace('std::__1::', 'std::')) if qual else []
    cands = callee_shapes.get(shape_norm('::'.join(comps[-1:] + [method])), [])
    fit = [s for s in cands if (s[4] + s[0] + s[1] + s[2] == nargs) or (s[5] and s[4] + s[0] + s[1] + s[2] <= nargs)]
    if not fit:
        return None
    if len({s[:3] for s in fit}) > 1:
        return None
    refs = fit[0][3] if len({s[3] for s in fit}) == 1 else ()
    return fit[0][0], fit[0][1], fit[0][2], refs


def pointer_to_object(a):
    """The object an address expression points to: &x -> x, p -> *p (a reference parameter is already one)."""
    a = drop_cast(a.strip())
    if a in CTX['refparams'] or a in ('nullptr', '0') or a[:1] in '"\'' or re.fullmatch(r'-?\d+', a):
        return a
    if re.fullmatch(r'&[\w.\[\]]+(?:->\w+)*', a) or re.fullmatch(r'&\w+(?:\.\w+)*(?:\[[^\[\]]*\])*', a):
        return a[1:]
    if a == 'this':
        return '*this'
    return '*' + a if SIMPLE.fullmatch(a) else f'*({a})'


def object_access(obj):
    """obj (a pointer expression) as the target of a member access: 'x.' or 'p->', '' for this."""
    obj = drop_cast(obj.strip())
    if obj == 'this':
        return ''
    if obj in CTX['refparams']:
        return obj + '.'
    if re.fullmatch(r'&[\w.\[\]]+(?:->\w+)*', obj):
        return obj[1:] + '.'
    call = re.fullmatch(r'[\w:.\->]+(?:<[^;()]*>)?\(', obj[:obj.find('(') + 1]) if '(' in obj else None
    if call and balanced(obj, obj.find('(')) == len(obj):  # a call's result: f()->x needs no parentheses
        return obj + '->'
    return (obj if SIMPLE.fullmatch(obj) else f'({obj})') + '->'


def wrap_operand(e):
    e = e.strip()
    return e if re.fullmatch(r'[*&!-]?[\w.\[\]]+(?:->\w+)*(?:\([^()]*\))?|"[^"]*"|\'[^\']*\'', e) else f'({e})'


def wrap_postfix(e):
    """An operand followed by [], () or a member access: a leading unary operator needs parentheses."""
    e = wrap_operand(e)
    return f'({e})' if e[:1] in '*&!-' else e


def render_call(qual, method, obj, args):
    """A member or static call in source form; operators as operators."""
    if method.startswith('operator') and obj is not None:
        op = method[8:]
        target = wrap_operand(pointer_to_object(obj))
        post = wrap_postfix(pointer_to_object(obj))
        if op.startswith('_cast_to_'):
            return f'({op[9:]}){target}'
        if op == '[]' and len(args) == 1:
            return f'{post}[{args[0]}]'
        if op == '()':
            return f'{post}({", ".join(args)})'
        if op in ('++', '--'):
            return f'{post}{op}' if args else f'{op}{target}'
        if op in ('*', '-', '!', '~', '&') and not args:
            return f'{op}{target}'
        if op == '->' and not args:
            return f'{post}.operator->()'
        if len(args) == 1 and op not in ('_new', '_delete', '->', '->*'):
            return f'{target} {op} {wrap_operand(args[0])}'
    if obj is None and len(args) == 2 and BINARY_OP.fullmatch(method):
        return f'{wrap_operand(args[0])} {method[8:]} {wrap_operand(args[1])}'
    if obj is None:
        name = method.replace('operator_new', 'operator new').replace('operator_delete', 'operator delete')
        return f'{qual + "::" if qual else ""}{name}({", ".join(args)})'
    return f'{object_access(obj)}{method}({", ".join(args)})'


def shaped_call(qual, method, args, shape):
    """Rewrite a call whose callee's hidden parameters are known."""
    sret, member, vtt, refs = shape
    args = list(args)
    ret = args.pop(0) if sret else None
    obj = args.pop(0) if member else None
    if vtt and args:
        args.pop(0)
    args = [pointer_to_object(a) if i < len(refs) and refs[i] else drop_cast(a) for i, a in enumerate(args)]
    cls = base(components(qual)[-1]) if qual else ''
    if member and method == cls:  # constructor call on memory: placement new
        comps = components(qual.replace('std::__1::', 'std::'))
        if shape_norm('::'.join(comps[-1:] + [method])) in folded_keys:  # folded: the template arguments are noise
            qual = '::'.join(comps[:-1] + [base(comps[-1])])
        call = f"new ({drop_cast(obj)}) {qual}({', '.join(args)})"
    else:
        call = render_call(qual if not member else qual, method, obj, args)
    if ret is not None:
        return f'{pointer_to_object(ret)} = {call}'
    return call


def type_base(t):
    t = re.sub(r'\b(?:const|struct|class)\b', '', t).strip()
    return base(components(t)[-1]).strip() if t else ''


PTR_CAST = re.compile(r'\(\s*[\w:<>,\s]+?\s*\*+\s*\)\s*([&*]?[\w.\[\]]+(?:->\w+)*)')


def drop_cast(arg):
    """A pointer cast Ghidra adds only to match a parameter type: (hash_node *)prVar2 -> prVar2."""
    a = arg.strip()
    while a.startswith('('):
        end = balanced(a, 0)
        inner, rest = a[1:end - 1].strip(), a[end:].strip()
        if inner.endswith('*') and re.fullmatch(r'[\w:<>,\s*&()]+', inner) and \
                re.fullmatch(r'[&*]?[\w.\[\]]+(?:->\w+)*|[&*]?\([^()]*\)', rest):
            a = rest
        else:
            break
    return a


def member_call(qual, method, args_text, pass_b):
    cls = base(components(qual)[-1])
    args = split_args(rewrite_calls(args_text, pass_b))
    shape = callee_shape(qual, method, len(args))
    if shape:
        return shaped_call(qual, method, args, shape)
    if BINARY_OP.fullmatch(method) and len(args) == 2 \
            and all(namespace_like(c) for c in components(qual)):  # a free operator: eastl::operator==(&a, &b)
        a, b = (x if x in ('nullptr', '0') or x[:1] in '"\'' else pointer_to_object(x) for x in args)
        return f'{wrap_operand(a)} {method[8:]} {wrap_operand(b)}'
    if not args:
        return None
    m = CAST.fullmatch(args[0])
    if method == cls:  # constructor call on memory: placement new
        obj = m.group(2).strip() if m and type_base(m.group(1)) == cls else (args[0] if args[0].startswith('&') else None)
        if obj is None:
            return None
        return f"new ({obj}) {qual}({', '.join(drop_cast(a) for a in args[1:])})"
    args = args[:1] + [drop_cast(a) for a in args[1:]]
    if pass_b and f'{cls}::{method}' in static_names and m and type_base(m.group(1)) == cls:
        return f'{qual}::{method}({", ".join(args[1:])})'  # the __thiscall pass gave this static a fake this
    if m and type_base(m.group(1)) == cls:
        obj = m.group(2).strip()
    elif f'{cls}::{method}' in member_names:
        obj = args[0]
    else:
        return None
    rest = ', '.join(args[1:])
    if obj == 'this':
        return f'{method}({rest})'
    if re.fullmatch(r'&[\w.\[\]]+', obj):
        return f'{obj[1:]}.{method}({rest})'
    return f'{obj if SIMPLE.fullmatch(obj) else "(" + obj + ")"}->{method}({rest})'


STRING_LIT = re.compile(r'"(?:[^"\\\n]|\\.)*"')


def rewrite_calls(text, pass_b=False):
    strings = [(x.start(), x.end()) for x in STRING_LIT.finditer(text)]
    starts = [a for a, _ in strings]
    out, i, pos = [], 0, 0  # i: text emitted so far; pos: where the search continues
    while True:
        m = CALL_ANY.search(text, pos)
        if not m:
            out.append(text[i:])
            return ''.join(out)
        pos = m.end()
        k = bisect.bisect_right(starts, m.start()) - 1
        if k >= 0 and m.start() < strings[k][1]:  # inside a string literal
            continue
        method = m.group(1)
        p = m.end()
        if text[p] == '<':  # explicit template arguments: f<T>(...); a template in a qualifier is not a call
            gt = cleanup._template_end(text, p)
            q = gt + 1 if gt > 0 else -1
            while 0 < q < len(text) and text[q] == ' ':
                q += 1
            if gt < 0 or q >= len(text) or text[q] != '(':
                continue
            method, p = method + text[m.end():gt + 1], q
        start = qual_start(text, m.start())
        end = balanced(text, p)
        new = (member_call(text[start:m.start()], method, text[p + 1:end - 1], pass_b)
               if start is not None and start >= i else None)
        if new is not None:
            out.append(text[i:start] + new)
            i = pos = end


UNQUALIFIED = re.compile(r'(?<![\w:.>~&*])\b([A-Za-z_]\w*)\s*\(')
NOT_CALLS = {'if', 'while', 'for', 'switch', 'return', 'sizeof', 'new', 'delete', 'catch', 'alignof', 'decltype',
             'static_cast', 'reinterpret_cast', 'const_cast', 'dynamic_cast'}


def rewrite_free_operators(text):
    out, i = [], 0
    for m in FREE_OP.finditer(text):
        if m.start() < i:
            continue
        p = m.end() - 1
        end = balanced(text, p)
        args = split_args(text[p + 1:end - 1])
        shape = callee_shape('', m.group(1), len(args))
        result = None
        if shape and shape[0] and len(args) == 3:
            result, args = pointer_to_object(args[0]), args[1:]
        if len(args) != 2:
            continue
        refs = shape[3] if shape else (True, True)
        a, b = (pointer_to_object(x) if k < len(refs) and refs[k] else drop_cast(x) for k, x in enumerate(args))
        expr = f'{wrap_operand(a)} {m.group(1)[8:]} {wrap_operand(b)}'
        out.append(text[i:m.start()] + (f'{result} = {expr}' if result else expr))
        i = end
    out.append(text[i:])
    return ''.join(out)


def rewrite_unqualified(text):
    """Calls Ghidra wrote without a qualifier: methods of the current class, and free operators."""
    text = rewrite_free_operators(text)
    out, i = [], 0
    for m in UNQUALIFIED.finditer(text):
        if m.start() < i or m.group(1) in NOT_CALLS:
            continue
        name = m.group(1)
        p = m.end() - 1
        end = balanced(text, p)
        args = split_args(text[p + 1:end - 1])
        new = None
        if name.startswith('operator') and FREE_OP.match(text, m.start()) and len(args) == 2:
            op = name[8:]
            a, b = (x if x in ('nullptr', '0') or x[:1] in '"\'' else pointer_to_object(x) for x in args)
            new = f'{wrap_operand(a)} {op} {wrap_operand(b)}'
        elif CTX.get('cls'):
            shape = callee_shape(CTX['cls'], name, len(args))
            if shape and shape[1] and args and drop_cast(args[0]) == 'this':
                new = shaped_call('', name, args, shape)
        if new is not None:
            out.append(text[i:m.start()] + new)
            i = end
    out.append(text[i:])
    return ''.join(out)


# ---- body clean-up: fold copies and one-use temporaries, drop a trailing return ----
DECL_LINE = re.compile(r'^\s+(?P<type>[^;=(){}]*?[\s*&])(?P<name>[A-Za-z_]\w*)\s*(?P<arr>\[[^\]]*\])?;\s*$')
ASSIGN_AFTER = re.compile(r'\s*(?:=(?!=)|\+=|-=|\*=|/=|%=|\|=|&=|\^=|<<=|>>=|\+\+|--)')
LITERALS = re.compile(r'"(?:[^"\\\n]|\\.)*"|\'(?:[^\'\\\n]|\\.)*\'')
NUMBER = re.compile(r'-?\d+(?:\.\d+)?(?:e[-+]?\d+)?[fFuUlL]*|-?0x[0-9a-fA-F]+[uUlL]*')
CAST_PREFIX = re.compile(r'\(\s*[\w:<>,\s*]+\)\s*')
LEAD_USE = re.compile(r'\s*(?:(?:if|switch|while) \(+!?|return |[\w.\[\]]+(?:->\w+)* = |'
                      r'(?:[\w.\[\]]+(?:->\w+)* = )?[\w:.>~-]+\(|)')
NOT_TYPES = {'goto', 'return', 'delete', 'throw', 'case', 'else', 'do'}
simplified = collections.Counter()


def simplify_body(rest, sig):
    lines = rest.split('\n')
    opens = [i for i, l in enumerate(lines) if l.strip() == '{']
    closes = [i for i, l in enumerate(lines) if l.strip() == '}']
    if not opens or not closes:
        return rest
    open_i, close_i = opens[0], closes[-1]
    decls, j = {}, open_i + 1
    while j < close_i and lines[j].strip():
        m = DECL_LINE.match(lines[j])
        if not m or m.group('type').strip() in NOT_TYPES:
            break
        decls[m.group('name')] = (j, ' '.join(m.group('type').split()), bool(m.group('arr')))
        j += 1
    if not decls or lines[j].strip():
        decls, start = {}, open_i + 1
    else:
        start = j + 1
    params = {}
    pm = re.search(r'\(([^()]*)\)\s*(?:const)?\s*$', sig)
    for p in split_args(pm.group(1)) if pm else []:
        m = re.fullmatch(r'(.*?[\s*&])([A-Za-z_]\w*)', p.strip())
        if m:
            params[m.group(2)] = ' '.join(m.group(1).split())

    # brace depth at the start of each line, and the lowest depth reached on it
    depth_at, low_at, d = {}, {}, 0
    for i in range(open_i, close_i + 1):
        depth_at[i] = low = d
        for c in LITERALS.sub('', lines[i]):
            if c == '{':
                d += 1
            elif c == '}':
                d -= 1
                low = min(low, d)
        low_at[i] = low
    removed = set()

    def live():
        return [i for i in range(start, close_i) if i not in removed]

    def occurrences(name):
        out = []
        for i in live():
            clean = LITERALS.sub(lambda x: ' ' * len(x.group(0)), lines[i])
            for m in re.finditer(rf'(?<![\w.]){re.escape(name)}\b', clean):
                if clean[max(0, m.start() - 2):m.start()] == '->':
                    continue
                if m.start() and clean[m.start() - 1] == '&':
                    return None
                assign = bool(ASSIGN_AFTER.match(clean, m.end())) or clean[:m.start()].rstrip().endswith(('++', '--'))
                out.append((i, m.start(), m.end(), assign))
        return out

    def enclosed(a, b):
        d0 = depth_at[a]
        return all(low_at[i] >= d0 and depth_at[i] >= d0 for i in range(a + 1, b + 1))

    def invariant(expr):
        e = CAST_PREFIX.sub('', expr, count=1).strip() if expr.startswith('(') else expr
        if NUMBER.fullmatch(e) or e == 'this':
            return True
        if e.startswith('&') and re.fullmatch(r'&[A-Za-z_]\w*', e) and e[1:] in decls:
            return True
        if e in params:
            occ = occurrences(e)
            return occ is not None and not any(o[3] for o in occ)
        return False

    changed = True
    while changed:
        changed = False
        for v, (di, vtype, arr) in list(decls.items()):
            if arr or di in removed:
                continue
            occ = occurrences(v)
            if occ is None:
                continue
            assigns, reads = [o for o in occ if o[3]], [o for o in occ if not o[3]]
            if not reads:
                if not assigns:
                    removed.add(di)
                    changed = True
                continue
            if len(assigns) != 1:
                continue
            ai = assigns[0][0]
            m = re.fullmatch(rf'\s*{re.escape(v)} = (.+);\s*', lines[ai])
            if not m or any(r[0] <= ai for r in reads) or not enclosed(ai, max(r[0] for r in reads)):
                continue
            expr = m.group(1).strip()
            if invariant(expr):
                bare = expr if not expr.startswith('(') else None
                same = bare and (params.get(bare) or decls.get(bare, (0, None))[1]) == vtype
                sub = expr if (not bare or same or NUMBER.fullmatch(expr) or bare.startswith('&')) else f'({vtype}){expr}'
                simplified['copies folded'] += 1
            else:
                nxt = next((i for i in live() if i > ai and lines[i].strip()), None)
                r = reads[0]
                if len(reads) != 1 or r[0] != nxt or not LEAD_USE.fullmatch(lines[r[0]][:r[1]]) \
                        or re.search(rf'(?<![\w.]){re.escape(v)}\b', expr):
                    continue
                sub = expr
                simplified['one-use temporaries folded'] += 1
            for i, s0, e0, _ in sorted(reads, key=lambda o: (o[0], -o[1])):
                line = lines[i]
                wrap = sub.startswith('(') and line[e0:e0 + 2] in ('->', '[') or line[e0:e0 + 1] == '.'
                lines[i] = line[:s0] + (f'({sub})' if wrap else sub) + line[e0:]
            removed.update((ai, di))
            changed = True
            break

    body = live()
    last = next((i for i in reversed(body) if lines[i].strip()), None)
    if last is not None and lines[last].strip() == 'return;' and depth_at[last] == 1:
        removed.add(last)
        simplified['trailing returns removed'] += 1
    if decls and all(d[0] in removed for d in decls.values()):
        removed.add(start - 1)  # the blank line after the declarations
    return '\n'.join(l for i, l in enumerate(lines) if i not in removed)


data_by_leaf = None
GLOBAL_REF = re.compile(r'\b(?:DAT_|[a-z]?Ram0*)([0-9a-f]{9,})\b|(?<![\w:])_([A-Za-z]\w+)\b')


def global_refs(text):
    """Ghidra's DAT_1039bc158 / uRam00000001039bc150 / _name: the variable that address belongs to."""
    global data_by_leaf
    if data_by_leaf is None:
        data_by_leaf = {}
        for d in src_data:
            data_by_leaf.setdefault(components(d['dem'])[-1], d)

    def rep(m):
        if m.group(2):  # the raw symbol of a variable: _infiniteAcceleration
            r = data_by_leaf.get(m.group(2))
            return m.group(2) if r else m.group(0)
        a = int(m.group(1), 16)
        r = containing(a)
        if not r:
            return m.group(0)
        name, off = components(r['dem'])[-1], a - r['addr']
        if off == 0:
            return name
        typ = data_info(r)[0] or cast_type(r)
        lay = layouts.get(typ.replace(' const*', '')) if typ else None
        field = next((n for o, _, _, n in lay['fields'] if o == off), None) if lay else None
        if field:
            return f'{name}.{field}'
        return f'reinterpret_cast<const uint64_t*>(&{name})[{off // 8}]' if off % 8 == 0 else m.group(0)
    return outside_strings(text, lambda t: GLOBAL_REF.sub(rep, t))


def outside_strings(text, fn):
    return cleanup.outside_strings(text, fn)


def has_this(code):
    line = sig_line(code)
    return '__thiscall' in line or any(param_name(p) == 'this' for p in sig_params(line))


def class_members(key):
    return {name for _, _, _, name in layouts.get(key, {}).get('fields', [])} | {'_vptr'}


def tidy_body(code, f):
    """Ghidra's body as C++: Ghidra-isms cleaned, calls written as member calls, compiler-made code removed."""
    i = code.find('\n{')
    if i < 0:
        return None
    sig, rest = code[:i], code[i:]
    global member_names
    if member_names is None:  # members Ghidra decompiled with a this pointer
        member_names = {f"{g['scope'][-1]}::{base(g['leaf'])}" for g in funcs if g['sig'] and g['scope']
                        and has_this(bodies.get(g['addr'], ''))}
    rest = re.sub(r'::[ \t]*\n\s*|\s*\n[ \t]*::', '::', rest)  # Ghidra wraps long qualified names
    rest = cleanup.clean(rest)
    rest = global_refs(rest)
    rest = simplify_body(rest, cleanup.fix_types(sig))
    # reference parameters are pointers in Ghidra's code and references in the signature written out
    CTX['refparams'] = set()
    if f['sig']:
        for t, decl in zip((p for p in split_args(f['sig'][2][1:-1]) if p not in ('void', '...')), definition_params(f)):
            if re.search(r'&\s*$', t.replace(' const', '')):
                CTX['refparams'].add(param_name(decl))
    CTX['cls'] = class_key(f['scope']) if f['scope'] else None
    if not has_this(code):  # Ghidra names a local 'this' when it is passed as one
        m = re.search(r'^\s+([A-Za-z_][\w:<>,\s]*?)\s*\*\s*this;', rest, re.M)
        if m:
            leaf = base(components(m.group(1).strip())[-1])
            word = (leaf[:1].lower() + leaf[1:]) if re.fullmatch(r'[A-Za-z]\w*', leaf) else 'self'
            rest = re.sub(r'\bthis\b', word if word not in ('this', 'delete') else 'self', rest)
    rest, objs = cxxify.local_object_decls(rest)
    rest = rewrite_calls(rest, False)
    rest = rewrite_unqualified(rest)
    for r in CTX['refparams']:
        rest = re.sub(rf'\b{r}->', f'{r}.', rest)
        rest = re.sub(rf'(?<![\w)\]])\*\s*{r}\b', r, rest)
    rest = cxxify.virtual_calls(rest)
    rest = cxxify.bools(rest)
    rest = simplify_body(rest, cleanup.fix_types(sig))
    rest = cxxify.arrows(rest)
    rest = cxxify.fold_flags(rest)
    # operator[] returns a reference: assigned to a pointer, it is that element's address
    rest = re.sub(r'(\b\w+ = )\(\s*[\w:<>,\s*&]+\*\s*\)\s*([\w.]+(?:->\w+)*\[[^\[\];]+\]);', r'\1&\2;', rest)
    if '__return_storage_ptr__' in rest:
        rest = cxxify.by_value_return(rest, function_return(f) or 'auto')
    key = class_key(f['scope']) if f['scope'] else None
    v = variant(f)
    members = class_members(key)
    inits = []
    if v:
        rest = cxxify.strip_vtable_setup(rest)
        if v.startswith('C'):
            parent = class_bases.get(key)
            bases = {parent.split('::')[-1]} if parent else set()
            bases |= {m.group(1).split('<')[0].split('::')[-1]
                      for m in re.finditer(r'new \(\(?\w*[\w:<>, ]*\*?\)?\s*this\) ([\w:<>, ]+?)\(', rest)}
            bases.discard(f['scope'][-1])
            inits, rest = cxxify.init_list(rest, members, bases)
        else:
            rest = cxxify.strip_member_destruction(rest, members)
    rest = cxxify.eastl_allocators(rest)
    rest = cxxify.local_object_lifetimes(rest, objs)
    rest = cxxify.declare_at_first_use(rest)
    names = '|'.join(re.escape(m) for m in sorted(members, key=len, reverse=True) if m != '_vptr')
    if names:
        rest = re.sub(rf'\bthis->(?=(?:{names})\b)', '', rest)  # members are in scope in a method
    rest = re.sub(r'\bthis->(?=(?:field\d*_0x[0-9a-f]+|m_\w+)\b)', '', rest)
    return inits, rest


def definition_head(f):
    ret, name, params, quals = f['sig']
    rt = function_return(f)
    return f"{rt + ' ' if rt else ''}{name}({', '.join(definition_params(f))}){' ' + quals if quals else ''}"


CTOR_RANK = {'C2': 0, 'C1': 1, 'C3': 2, 'D2': 0, 'D1': 1, 'D0': 2}


def redundant_variant(f):
    """Constructors and destructors are emitted in up to three variants with one source: keep the best one."""
    v = variant(f)
    if not v:
        return False
    rivals = [g for g in variant_groups.get((f['file'], f['dem']), []) if g is not f and bodies.get(g['addr'])]
    return any((CTOR_RANK[variant(g)], g['addr']) < (CTOR_RANK[v], f['addr']) for g in rivals) or \
        (v == 'D0' and not bodies.get(f['addr']))


variant_groups = None


alias_cache = {}


def alias_text(f):
    """A linker-folded accessor shares its code with another class's: return the member at the same offset."""
    if f['addr'] in alias_cache and id(f) in alias_cache[f['addr']]:
        return alias_cache[f['addr']][id(f)]
    p = f['alias_of']
    code = bodies.get(p['addr'], '').strip()
    pk, ak = class_key(p['scope']) if p['scope'] else None, class_key(f['scope']) if f['scope'] else None
    tidy = tidy_body(code, p) if code.endswith('}') and p['sig'] else None
    simple = tidy and re.fullmatch(r'\s*\{\s*return (&?)(\w+);\s*\}\s*', tidy[1])
    text = f"// {f['addr']:#x}: {f['dem']} has the same machine code as {p['dem']}\n"
    if simple and f['sig'] and not f['sig'][2].strip('()').strip():
        amp, name = simple.groups()
        theirs = {nm: (off, typ) for off, _, typ, nm in layouts.get(pk, {}).get('fields', [])}
        mine = {off: (nm, typ) for off, _, typ, nm in layouts.get(ak, {}).get('fields', [])}
        hit = mine.get(theirs[name][0]) if name in theirs else None
        if hit and not hit[0].startswith('field'):
            typ = cleanup.fix_types(re.sub(r'\s+\*', '*', hit[1]))
            if not re.search(r'\[|undefined|uint8_t$', typ):
                f['ret_text'] = (f'const {typ}&' if amp else typ)
            text = (f"// {f['addr']:#x}, the same machine code as {p['dem']}\n"
                    f"{definition_head(f)}\n{{\n  return {hit[0]};\n}}\n")
    alias_cache.setdefault(f['addr'], {})[id(f)] = text
    return text


def func_text(f):
    if f.get('alias_of'):
        return alias_text(f)
    head = f"// {f['addr']:#x}"
    v = variant(f)
    if v in ('C1', 'D1') and f['size'] <= 16:
        return ''  # jumps straight to the base-object variant
    code = bodies.get(f['addr'], '').strip()
    if not f['sig']:
        sig = f['dem']
        tidy = tidy_body(code, f) if code.endswith('}') else None
        return f"{head}\n{sig_line(code) or sig}{tidy[1] if tidy else ' {}'}\n"
    sig = definition_head(f)
    if code.endswith('}'):
        inits, body = tidy_body(code, f)
        if inits:
            sig += '\n    : ' + ', '.join(inits)
        return f"{head}\n{sig}{body}\n"
    return f"{head}\n{sig}\n{{\n    // body not decompiled\n}}\n"


# ---- namespaces: definitions grouped into namespace blocks, names written relative to them ----
ANON = '__anon'


BUILTIN_WORDS = r'(?:unsigned|signed|long|short|int|char|const|bool|float|double)'
BUILTIN_CHAIN = re.compile(rf'(?<!\w)(?:{BUILTIN_WORDS}_)+{BUILTIN_WORDS}(?!\w)')


def ns_norm(text):
    text = decimal_fields(text.replace('std::__1::', 'std::'))
    text = re.sub(r'(?<=[<,])_(?=[a-z])', ' ', text)
    text = re.sub(r'(?<=[\w>])_const(?=[*&>, ])', ' const', text)
    text = BUILTIN_CHAIN.sub(lambda m: m.group(0).replace('_', ' '), text)  # Ghidra's unsigned_int -> unsigned int
    text = cleanup.drop_default_template_args(text)
    text = re.sub(r'std::basic_string<char(?:, ?std::char_traits<char>)?(?:, ?std::allocator<char> ?)?>', 'std::string', text)
    text = re.sub(r'(?:eastl::)?basic_string<char(?:, ?eastl::allocator ?)?>', 'eastl::string', text)
    return text.replace('(anonymous namespace)', ANON).replace('(anonymous_namespace)', ANON)


def anon(comps):
    return [ANON if c == '(anonymous namespace)' else c for c in comps]


# every name at every scope level, so shortening can tell when a nearer scope would capture a name
children = collections.defaultdict(set)


def add_path(comps):
    for i, c in enumerate(comps):
        children['::'.join(comps[:i])].add(c)


for f in funcs:
    if f['sig']:
        add_path(anon(f['scope']) + [base(f['leaf'])])
for r in datas:
    if not r['dem'].startswith(COMPILER_DATA):
        add_path(anon([base(c) for c in components(r['dem'])]))

NAME_TOKEN = re.compile(r'(?<![\w:])((?:[A-Za-z_]\w*::)+~?[A-Za-z_]\w*)')


def shorten(text, scope):
    """Write qualified names relative to `scope` (namespace or class path) as far as C++ lookup allows."""
    scope = anon(scope)
    text = ns_norm(text)
    if scope:
        def rep(m):
            comps = m.group(1).split('::')
            p = 0
            while p < len(comps) - 1 and p < len(scope) and comps[p] == scope[p]:
                p += 1
            while p > 0 and any(comps[p] in children.get('::'.join(scope[:lvl]), ()) and comps[p] != scope[lvl - 1]
                                for lvl in range(p + 1, len(scope) + 1)):  # a class's own name is always in scope
                p -= 1
            return '::'.join(comps[p:])
        text = NAME_TOKEN.sub(rep, text)
    return text.replace(ANON, '(anonymous namespace)')


def ns_of(scope):
    """The namespace part of a scope: everything before the first class or function scope."""
    out = []
    for i, c in enumerate(scope):
        key = '::'.join(scope[:i + 1])
        if ('(' in c and c != '(anonymous namespace)') or c.startswith('$') or key in is_class \
                or key in class_evidence or c[:1].isupper():
            break
        out.append(c)
    return out


def data_ns(r):
    return ns_of([base(c) for c in components(r['dem'])[:-1]])


def func_ns(f):
    if f['dem'].startswith(('___cxx_global_var_init', '__GLOBAL__sub_I')):
        return None  # compiler-made: goes with the file's main namespace
    return ns_of(f['scope']) if f['sig'] else []


def wrap_ns(ns, body):
    opens, run = [], []
    for part in ns:
        if part == '(anonymous namespace)':
            if run:
                opens.append('::'.join(run))
                run = []
            opens.append('')
        else:
            run.append(part)
    if run:
        opens.append('::'.join(run))
    for name in reversed(opens):
        body = f"namespace {name + ' ' if name else ''}{{\n{body}\n}} // namespace {name or '(anonymous)'}\n"
    return body


def emit_blocks(items):
    """items: (namespace or None, text). One block per namespace, the busiest first, order kept inside."""
    counts = collections.Counter(tuple(ns) for ns, _ in items if ns)
    primary = list(counts.most_common(1)[0][0]) if counts else []
    groups = {}
    for ns, text in items:
        groups.setdefault(tuple(primary if ns is None else ns), []).append(text)
    out = []
    for ns in sorted(groups, key=lambda k: -len(groups[k])):
        out.append(wrap_ns(list(ns), shorten('\n'.join(groups[ns]), list(ns))))
    return '\n'.join(out)


def objc_decl(dem):
    """'-[AppDelegate application:openURLs:]' -> '- (id)application:(id)arg1 openURLs:(id)arg2'"""
    kind, sel = dem[0], dem[2:-1].split(' ', 1)[1]
    parts = [x for x in sel.split(':')]
    if len(parts) == 1:
        return f'{kind} (id){sel}'
    return f'{kind} (id)' + ' '.join(f'{x}:(id)arg{n + 1}' for n, x in enumerate(parts[:-1]))


variant_groups = collections.defaultdict(list)
for f in funcs:
    if f['file'] and variant(f):
        variant_groups[(f['file'], f['dem'])].append(f)
for f in funcs:  # folded accessors settle their return types before any class declares them
    if f.get('alias_of') and f['file']:
        alias_text(f)
# a static initialiser whose every store was recovered as a data definition's value is not written out
init_done = collections.defaultdict(lambda: True)
for e in inits.values():
    init_done[e['func']['addr']] &= e['value'] is not None


def written_out(f):
    if f['dem'].startswith(('___cxx_global_var_init', '__GLOBAL__sub_I')):
        return f['addr'] not in init_done or not init_done[f['addr']]
    return not redundant_variant(f)


written = 0
for path, info in sorted(files.items()):
    info['funcs'] = [f for f in info['funcs'] if written_out(f)]
    parts = [HEADER.format(path=path)]
    if info['targets']:
        parts.append(f"// target: {info['targets'].most_common(1)[0][0]}\n")
    stem = posixpath.splitext(path)[0]
    if path.endswith(SRC_EXT):
        own = [stem + ext for ext in ('.h', '.hpp') if stem + ext in files][:1]
        keys = {class_key(f['scope']) for f in info['funcs'] if f['scope'] and class_key(f['scope']) in classes}
        heads = own + sorted({home_header(k, classes[k]) for k in keys} - set(own) - {path})
        heads = [h for h in heads if h in files and h.endswith(HDR_EXT)]
        if heads:
            parts.append('\n' + ''.join(
                f'#include "{posixpath.basename(h) if posixpath.dirname(h) == posixpath.dirname(path) else h}"\n'
                for h in heads))
    if path.endswith(HDR_EXT):
        parts.insert(1, '\n#pragma once\n')
    items = [class_block(key) for key in sorted(info['classes'])]
    items += [(data_ns(r), data_definition(r)) for r in sorted(info['data'], key=lambda r: r['addr'])]
    objc = collections.defaultdict(list)
    for f in sorted(info['funcs'], key=lambda f: f['addr']):
        if f['dem'].startswith(('-[', '+[')):
            objc[f['scope'][0]].append(f)
        else:
            text = func_text(f)
            if text:
                items.append((func_ns(f), text))
    for cls, fs in objc.items():
        decls = ''.join(objc_decl(f['dem']) + ';\n' for f in fs)
        items.append(([], f'@interface {cls} : NSObject\n{decls}@end\n\n@implementation {cls}\n\n'
                          + '\n'.join(func_text(f) for f in fs) + '\n@end\n'))
    if items:
        parts.append('\n' + emit_blocks(items))
    write(path, dehex(''.join(parts)))
    written += 1

# ---- build files ----
target_files = collections.defaultdict(set)
for path, info in files.items():
    if path.endswith(SRC_EXT) and info['targets']:
        target_files[info['targets'].most_common(1)[0][0]].add(path)
vendored_files = collections.defaultdict(set)
for f in funcs:
    if f['cat'] == 'vendored' and f['sol'] and '3rdPartyLibs' in f['sol'] and f['sol'].endswith(SRC_EXT):
        vendored_files[f['target']].add(f['sol'].split('3rdPartyLibs/', 1)[1])
all_targets = sorted({f['target'] for f in funcs} - {'unknown'})
order = [t for t in all_targets if t not in ('osclient', 'libs.hal.system.osclient')]
for t in all_targets:
    if t == 'arclite_macosx':
        continue
    if t in VENDORED_LIBS:
        srcs = sorted(vendored_files.get(t, []))
        d = 'devplatform/3rdPartyLibs/' + (srcs[0].split('/')[0] + '/' + srcs[0].split('/')[1] if srcs else 'cpp/' + t)
        body = f'# {t}: vendored third-party library, original sources were not rebuilt\n' + \
               f'add_library({t} STATIC\n' + ''.join(f'    ${{DEVPLATFORM}}/3rdPartyLibs/{s}\n' for s in srcs) + ')\n'
        write(f'cmake/vendored/{t}.cmake', body)
        continue
    d = target_dir(t)
    srcs = sorted(target_files.get(t, []))
    relsrcs = [posixpath.relpath(s, d) if s.startswith(d + '/') else '${ROOT}/' + s for s in srcs]
    kind = f'add_executable({t} MACOSX_BUNDLE' if t == 'libs.hal.system.osclient' else f'add_library({t} STATIC'
    body = f'{kind}\n' + ''.join(f'    {s}\n' for s in relsrcs) + ')\n'
    body += f"set_target_properties({t} PROPERTIES UNITY_BUILD ON)\n"
    if t == 'libs.hal.system.osclient':
        body += f'target_link_libraries({t} PRIVATE\n' + ''.join(
            f'    {x}\n' for x in ['osclient'] + order if x != 'arclite_macosx') + \
                ''.join(f'    "-framework {posixpath.basename(fw).split(".")[0]}"\n' if '.framework' in fw
                        else f'    {posixpath.basename(fw)[3:].split(".")[0]}\n'
                        for fw, weak in frameworks if not weak and not re.search(r'libSystem|libc\+\+|libobjc', fw)) + \
                ''.join(f'    "-weak_framework {posixpath.basename(fw).split(".")[0]}"\n' for fw, weak in frameworks if weak) + ')\n'
        body += f'set_target_properties({t} PROPERTIES\n    OUTPUT_NAME osclient\n' \
                '    MACOSX_BUNDLE_INFO_PLIST ${ROOT}/packaging/macos/Info.plist\n' \
                '    XCODE_ATTRIBUTE_CODE_SIGN_IDENTITY "Developer ID Application: Jagex (UG2BR73SV5)"\n' \
                '    XCODE_ATTRIBUTE_ENABLE_HARDENED_RUNTIME YES\n' \
                '    BUILD_RPATH "' + ';'.join(r.replace(PREFIX, '${ROOT}/') for r in rpaths) + '")\n'
    write(f'{d}/CMakeLists.txt', body)
top = ['cmake_minimum_required(VERSION 3.16)', 'project(osclient C CXX OBJC OBJCXX)', '',
       'set(CMAKE_CXX_STANDARD 17)', 'set(CMAKE_OSX_DEPLOYMENT_TARGET 10.9)', 'set(CMAKE_OSX_ARCHITECTURES x86_64)',
       'set(ROOT ${CMAKE_CURRENT_SOURCE_DIR})', 'set(DEVPLATFORM ${ROOT}/devplatform)', '']
top += [f'include(cmake/vendored/{t}.cmake)' for t in all_targets if t in VENDORED_LIBS and t != 'arclite_macosx']
top += [f'add_subdirectory({target_dir(t)})' for t in order if t not in VENDORED_LIBS]
top += ['add_subdirectory(projects/osclient)', 'add_subdirectory(libs/hal/system/bootstrap)', '']
write('CMakeLists.txt', '\n'.join(top))

jag = [f for f in funcs if f['cat'] in ('jagex', 'init')]
summary = {
    'functions': len(funcs), 'categories': dict(stats), 'placement': dict(collections.Counter(f['how'] for f in jag_funcs)), 'static_data': data_stats(),
    'files_written': written, 'classes': len(classes), 'with_bases': sum(1 for v in class_bases.values() if v),
    'vtables': len(vtables), 'decompiled_bodies': sum(1 for f in jag if f['addr'] in bodies),
    'decompile_failed': sum(1 for f in jag if bodies.get(f['addr'], '').startswith('// decompile failed')),
    'thiscall_pass': dict(this_pick),
    'simplified': dict(simplified),
    'layouts': {'classes': len(layouts), 'with fields': sum(1 for v in layouts.values() if v['fields']),
                'fields': sum(len(v['fields']) for v in layouts.values()),
                'named fields': sum(1 for v in layouts.values() for x in v['fields'] if x[3].startswith('m_'))},
    'neighbour_check': dict(neighbour_check),
    'file_string_check': {f'{h} {"agrees" if ok else "differs"}': n for (h, ok), n in sorted(file_check.items(), key=str)},
}
print(summary)
with open(os.path.join(os.path.dirname(os.path.abspath(STABS)), 'decompile_targets.txt'), 'w') as fh:
    for f in sorted(jag, key=lambda f: f['addr']):
        if not f['thunk'] and not f.get('alias_of'):
            fh.write(f"{f['addr']:x}\n")
if DECOMP and not DECOMP_THIS:
    with open(os.path.join(os.path.dirname(os.path.abspath(STABS)), 'thiscall_targets.txt'), 'w') as fh:
        for f in sorted(jag, key=lambda f: f['addr']):
            code = bodies.get(f['addr'])
            if code and not f['thunk'] and not f.get('alias_of') and f['sig'] and f['scope'] \
                    and class_key(f['scope']) in is_class \
                    and '__thiscall' not in sig_line(code):
                fh.write(f"{f['addr']:x}\n")


# ---- inputs for BuildStructs.java: members to switch to __thiscall, and class sizes from allocation sites ----
OUT_DIR = os.path.dirname(os.path.abspath(STABS))
if DECOMP_THIS:
    with open(os.path.join(OUT_DIR, 'thiscall_apply.txt'), 'w') as fh:
        for f in sorted(jag_funcs, key=lambda f: f['addr']):
            if f.get('pass_b') and not f.get('alias_of'):
                fh.write(f"{f['addr']:x}\n")
ALLOC = re.compile(r'(\w+) = (?:\([^()]*\)\s*)?operator_new\((0x[0-9a-f]+|\d+)\);')
by_leaf = collections.defaultdict(list)
for key in classes:
    by_leaf[key.split('::')[-1]].append(key)
class_sizes = collections.defaultdict(collections.Counter)
for f in jag_funcs:
    code = bodies.get(f['addr'], '')
    for m in ALLOC.finditer(code):
        var, size = m.group(1), int(m.group(2), 0)
        c = re.search(rf'((?:\w+::)*)(\w+)::\2\s*\(\s*(?:\([^()]*\)\s*)?{re.escape(var)}\b', code[m.end():m.end() + 800])
        if not c:
            continue
        qual = c.group(1) + c.group(2)
        cands = [k for k in by_leaf.get(c.group(2), []) if k == qual or k.endswith('::' + qual)]
        if len(cands) == 1:
            class_sizes[cands[0]][size] += 1
# a lower bound from the furthest (this + N) a member function touches: Ghidra's structure fill ignores offsets
# beyond 4096 bytes unless the structure is already that big
THIS_OFFSET = re.compile(r'\(\s*this \+ (0x[0-9a-f]+|\d+)\s*\)')
min_sizes = {}
if DECOMP_THIS:  # the bodies from before any layout was applied, where member offsets are still raw
    for f in jag_funcs:
        key = class_key(f['scope']) if f['sig'] and f['scope'] else None
        code = bodies.get(f['addr'], '')
        if key in classes and '__thiscall' in sig_line(code):
            offsets = [int(x, 0) for x in THIS_OFFSET.findall(code)]
            if offsets:
                min_sizes[key] = max(min_sizes.get(key, 0), max(offsets) + 8)
if DECOMP_THIS:  # only the two-pass bodies have raw member offsets; the layout pass must not overwrite this
    with open(os.path.join(OUT_DIR, 'class_sizes.txt'), 'w') as fh:
        for key in sorted(set(class_sizes) | set(min_sizes)):
            alloc = class_sizes[key].most_common(1)[0][0] if key in class_sizes else 0
            fh.write(f"{key}\t{max(alloc, min_sizes.get(key, 0))}\n")
    print('class sizes from allocation sites:', len(class_sizes), '| minimum from member offsets:', len(min_sizes))
