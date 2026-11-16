"""Re-check the review's confirmed defects against a generated tree: verify.py <tree> <stabs.tsv> <demangled.txt>"""
import collections, os, re, sys

tree, stabs, dem = sys.argv[1:4]
texts = {}
for root, _, names in os.walk(tree):
    for n in names:
        if n.endswith(('.cpp', '.h', '.inl', '.mm', '.c', '.hpp', '.inc', '.cxx')):
            p = os.path.join(root, n)
            texts[os.path.relpath(p, tree).replace(os.sep, '/')] = open(p, encoding='utf8', errors='replace').read()
alltext = '\n'.join(texts.values())
addrs = set(int(a, 16) for a in re.findall(r'^\s*// 0x([0-9a-f]+)[,:]', alltext, re.M))
demangled = open(dem, encoding='utf8').read().split('\n')
missing = []
for n, line in enumerate(open(stabs, encoding='utf8')):
    kind, obj, sol, mangled, addr, size = line.rstrip('\n').split('\t')
    d = demangled[n]
    if kind == 'F' and d.startswith('jag::') and '3rdPartyLibs' in sol and int(addr) not in addrs:
        missing.append(d)
print('1. jag:: functions with a vendored debug-map file still missing:', len(missing), missing[:3])
print('2. GCC_except_table / block / ObjC metadata emitted as data:',
      len(re.findall(r'^\s*// 0x[0-9a-f]+, \d+ bytes, __\w+.*\n\s*\S*\b(?:GCC_except_table\d+|___block_descriptor|__OBJC_)',
                     alltext, re.M)))
ctor_void = 0
for m in re.finditer(r'^\s*class (\w+)[^\n{;]*\{(.*?)^\s*\};', alltext, re.M | re.S):
    cls, body = m.group(1), m.group(2)
    ctor_void += len(re.findall(rf'^\s+(?:virtual\s+)?void\s+~?{cls}\(', body, re.M))
print('3. constructors/destructors declared with void:', ctor_void)
print('4. libc++ global templates written as Jagex code:',
      len(re.findall(r'^\s*// (?:pow|sqrt|atan2|log|exp|fabs)<', alltext, re.M)))
print('3b. class blocks checked:', len(re.findall(r'^\s*class \w+[^\n{;]*\{', alltext, re.M)))
cm = {}
for root, _, names in os.walk(tree):
    for n in names:
        if n == 'CMakeLists.txt':
            cm[os.path.join(root, n)] = open(os.path.join(root, n), encoding='utf8').read()
targets = collections.Counter(re.findall(r'add_(?:library|executable)\((\S+)', '\n'.join(cm.values())))
print('5. duplicate CMake targets:', [t for t, c in targets.items() if c > 1],
      '| exe target:', [t for t in targets if 'system.osclient' in t],
      '| osclient lib linked:', any('target_link_libraries' in v and '\n    osclient\n' in v for v in cm.values()))
dumps = sorted(((len(re.findall(r'^\s*// 0x[0-9a-f]+, \d+ bytes, __', t, re.M)), p) for p, t in texts.items()), reverse=True)[:3]
print('6. files with the most data definitions:', dumps)
print('7. member calls still in Ghidra form (Class::m((Class *)x ...)):',
      len(re.findall(r'(\w+)(?:<[^;()]*>)?::(\w+)\(\s*\(\s*\1(?:<[^;()]*>)?\s*\*\s*\)', alltext)))
print('8. files:', len(texts))
