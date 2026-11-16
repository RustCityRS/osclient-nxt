"""Parsing helpers for demangled C++ names (c++filt output), shared by the reconstruction scripts."""
import re

OPS = sorted(['operator<<=', 'operator>>=', 'operator<=>', 'operator<<', 'operator>>', 'operator<=',
              'operator>=', 'operator->*', 'operator->', 'operator<', 'operator>', 'operator()',
              'operator[]'], key=len, reverse=True)
QUALS = re.compile(r'(\s*(const|volatile|&&|&|noexcept))*\s*$')
THUNKS = ('non-virtual thunk to ', 'virtual thunk to ', 'covariant return thunk to ')


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


def split_args(s):
    out, depth, cur, j = [], 0, 0, 0
    while j < len(s):
        c = s[j]
        if c == '"':
            j += 1
            while j < len(s) and s[j] != '"':
                j += 2 if s[j] == '\\' else 1
        elif c in '(<':
            depth += 1
        elif c in ')>':
            depth -= 1
        elif c == ',' and depth == 0:
            out.append(' '.join(s[cur:j].split()))
            cur = j + 1
        j += 1
    tail = ' '.join(s[cur:].split())
    return out + [tail] if tail else out


def strip_thunk(dem):
    for t in THUNKS:
        if dem.startswith(t):
            return dem[len(t):], True
    return dem, False


def ctor_variant(mangled, owner):
    """C1/C2/C3/D0/D1/D2 for a constructor or destructor symbol, else None."""
    i = mangled.rfind(f'{len(owner)}{owner}')
    m = re.search(r'(C[123]|D[012])', mangled[i + len(owner) + len(str(len(owner))):]) if i >= 0 else None
    if m:
        return m.group(1)
    m = re.search(r'(C[123]|D[012])E', mangled)  # template classes: ...IT_EC2E...
    return m.group(1) if m else None
