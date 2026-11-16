"""Source-level rewrites of a decompiled body: undo what the compiler generated so the code reads as written.

  by-value returns   T *f(T *__return_storage_ptr__, ...) -> T f(...) with a local result
  virtual calls      (*x->_vptr->Draw)(x, a) -> x->Draw(a)
  vtable setup       stores to _vptr and VTT plumbing in constructors and destructors
  local objects      T local_40[24] + new (&local_40) T(a) + local_40.~T() -> T local_40(a)
  constructors       leading base/member construction -> an initialiser list
  destructors        trailing member and base destructor calls are implicit
"""
import re

IDENT = re.compile(r'[A-Za-z_]\w*')
STRING = re.compile(r'"(?:[^"\\\n]|\\.)*"|\'(?:[^\'\\\n]|\\.)*\'')


def balanced_end(text, i):
    """Index just past the bracket group opening at text[i] (any of ([{), skipping strings."""
    pairs = {'(': ')', '[': ']', '{': '}'}
    stack, j = [], i
    while j < len(text):
        c = text[j]
        if c in '"\'':
            q = c
            j += 1
            while j < len(text) and text[j] != q:
                j += 2 if text[j] == '\\' else 1
        elif c in pairs:
            stack.append(pairs[c])
        elif stack and c == stack[-1]:
            stack.pop()
            if not stack:
                return j + 1
        j += 1
    return len(text)


def split_top(s, sep=','):
    out, depth, angle, cur, j = [], 0, 0, 0, 0
    while j < len(s):
        c = s[j]
        if c in '"\'':
            q = c
            j += 1
            while j < len(s) and s[j] != q:
                j += 2 if s[j] == '\\' else 1
        elif c in '([{':
            depth += 1
        elif c in ')]}' and depth:
            depth -= 1
        elif c == '<' and j and (s[j - 1].isalnum() or s[j - 1] in '_>') and s[j + 1:j + 2] not in ('<', '=', ' '):
            angle += 1
        elif c == '>' and angle and s[j - 1:j] != '-' and s[j + 1:j + 2] != '=':
            angle -= 1
        elif c == sep and depth == 0 and angle == 0:
            out.append(s[cur:j].strip())
            cur = j + 1
        j += 1
    tail = s[cur:].strip()
    return out + [tail] if tail or out else out


def strip_cast(e):
    e = e.strip()
    m = re.match(r'\(\s*[\w:<>,\s]+\s*\*+\s*\)\s*', e)
    return e[m.end():].strip() if m and e[m.end():m.end() + 1] not in ('', ')') else e


# ---- by-value returns ----
RET_PTR = '__return_storage_ptr__'


def by_value_return(body, ret_type):
    """The caller's buffer becomes a local named result."""
    if RET_PTR not in body:
        return body
    lines = body.split('\n')
    constructed = False
    for i, line in enumerate(lines):
        m = re.match(rf'^(\s*)new \({RET_PTR}\) ([^;]+?)\((.*)\);\s*$', line)
        if m and not constructed:
            args = m.group(3).strip()
            lines[i] = f'{m.group(1)}{ret_type} result{"(" + args + ")" if args else ""};'
            constructed = True
            continue
        lines[i] = re.sub(rf'\breturn {RET_PTR};', 'return result;', lines[i])
    body = '\n'.join(lines)
    body = re.sub(rf'\(\s*[\w:<>,\s]+\*\s*\){RET_PTR}\b', RET_PTR, body)
    body = re.sub(rf'\b{RET_PTR}->', 'result.', body)
    body = re.sub(rf'\*{RET_PTR}\b', 'result', body)
    body = re.sub(rf'\b{RET_PTR}\b', '&result', body)
    if not constructed and 'result' in body:  # filled in piece by piece: declare it first
        k = body.find('{')
        decl_end = body.find('\n\n', k)
        at = decl_end if decl_end > 0 else k + 1
        body = body[:at] + f'\n  {ret_type} result;' + body[at:]
    # T result(a); return result;  ->  return T(a);
    body = re.sub(r'^(\s*)' + re.escape(ret_type) + r' result(\(.*\))?;\s*\n\s*return result;',
                  lambda m: f'{m.group(1)}return {ret_type}{m.group(2) or "()"};', body, flags=re.M)
    return body


# ---- virtual calls ----
VCALL = re.compile(r'\(\*\s*')


def decode_slot(name):
    name = re.sub(r'__\d+$', '', name)  # overloads were numbered to keep field names unique
    return re.sub(r'_x([0-9a-f]+)_', lambda m: chr(int(m.group(1), 16)), name)


def virtual_calls(body):
    out, i = [], 0
    while True:
        k = body.find('->_vptr->', i)
        if k < 0:
            out.append(body[i:])
            return ''.join(out)
        # the call is (*OBJ->_vptr->NAME)(ARGS): find its opening "(*"
        start = body.rfind('(*', i, k)
        m = re.match(r'_vptr->(\w+)\)\(', body[k + 2:])
        if start < 0 or not m:
            out.append(body[i:k + 9])
            i = k + 9
            continue
        obj = body[start + 2:k].strip()
        if obj.count('(') != obj.count(')'):
            out.append(body[i:k + 9])
            i = k + 9
            continue
        p = k + 2 + m.end() - 1
        end = balanced_end(body, p)
        args = split_top(body[p + 1:end - 1])
        if args and strip_cast(args[0]).replace(' ', '') in (obj.replace(' ', ''), f'({obj})'.replace(' ', '')):
            args = args[1:]
        name = decode_slot(m.group(1))
        target = obj if re.fullmatch(r'[\w.\[\]]+(?:->\w+)*', obj) else f'({obj})'
        if name == '_deleting_dtor':
            call = f'delete {target}'
        elif name == '_dtor':
            call = f'std::destroy_at({target})'
        elif obj == 'this':
            call = f'{name}({", ".join(args)})'
        else:
            call = f'{target}->{name}({", ".join(args)})'
        out.append(body[i:start] + call)
        i = end


# ---- constructors and destructors ----
def drop_statements(body, pred):
    lines = body.split('\n')
    return '\n'.join(l for l in lines if not pred(l))


VPTR_STORE = re.compile(r'^\s*(?:this->)?_vptr\s*=|->_vptr\s*=|\b_vptr\s*=')


def strip_vtable_setup(body):
    """Constructors and destructors install vtable pointers (from the VTT when there are virtual bases)."""
    body = re.sub(r',\s*vtt(?:\s*\+\s*\d+)?(?=\s*\))', '', body)
    tainted = {'vtt'}
    while True:  # temporaries holding something read from the VTT are part of the same setup
        grown = False
        for m in re.finditer(r'^\s*(\w+) = ([^;]*);', body, re.M):
            if m.group(1) not in tainted and re.match(r'(?:[a-z]+Var\d+|local_\w+|p\w*Var\d+)$', m.group(1)) \
                    and any(re.search(rf'\b{t}\b', m.group(2)) for t in tainted):
                tainted.add(m.group(1))
                grown = True
        if not grown:
            break
    pat = re.compile(r'\b(?:' + '|'.join(map(re.escape, tainted)) + r')\b')
    body = drop_statements(body, lambda l: bool(VPTR_STORE.search(l)) or (pat.search(l) is not None and l.rstrip().endswith(';')))
    for t in tainted - {'vtt'}:  # their declarations are now unused
        body = re.sub(rf'^\s+[\w:<>,\s*]+?\b{t};[ \t]*\n', '', body, flags=re.M)
    return body


# ---- booleans: Ghidra types a bool return as char and compares it with '\0' ----
def bools(body):
    body = re.sub(r"\b([cb]Var\d+) != '\\0'", r'\1', body)
    body = re.sub(r"\b([cb]Var\d+) == '\\0'", r'!\1', body)
    body = re.sub(r"\(\s*\(bool\)([^()]+?)\s*\) != '\\0'", r'(bool)\1', body)
    for v in set(re.findall(r'^\s+char (cVar\d+);', body, re.M)):
        if not re.search(rf"\b{v}\b\s*(?:[=!<>]=?|[-+*/&|^])\s*['\d]|['\d]\s*[=!<>]=?\s*{v}\b|\[{v}\]", body):
            body = re.sub(rf'^(\s+)char {v};', rf'\1bool {v};', body, flags=re.M)
    body = re.sub(r'\b(if|while) \(\(bool\)', r'\1 (', body)
    body = re.sub(r'!\(bool\)', '!', body)
    return body


def fold_flags(body):
    """flag = a == b; if (flag) { ... }  ->  if (a == b) { ... } when every use of flag is such a pair."""
    names = set(re.findall(r'^\s*(?:bool |auto )?([cb]Var\d+|[a-z]Var\d+) = ', body, re.M))
    for v in names:
        pairs = list(re.finditer(rf'^([ \t]*)(?:bool |auto )?{v} = ([^;\n]+);[ \t]*\n\1(if|while) \((!?){v}\) \{{',
                                 body, re.M))
        uses = len(re.findall(rf'(?<![\w.>]){v}\b', body))
        decl = len(re.findall(rf'^\s*(?:bool|char|int|auto|uint\w*|unsigned \w+) {v};', body, re.M))
        if not pairs or uses != 2 * len(pairs) + decl:
            continue
        for m in reversed(pairs):
            expr = m.group(2).strip()
            cond = f'!({expr})' if m.group(4) else expr
            body = body[:m.start()] + f'{m.group(1)}{m.group(3)} ({cond}) {{' + body[m.end():]
        body = re.sub(rf'^\s*(?:bool|char|int|auto|uint\w*|unsigned \w+) {v};[ \t]*\n', '', body, flags=re.M)
    return body


def eastl_allocators(body):
    for m in re.finditer(r'^[ \t]*new \(&(\w+)\) (?:eastl::)?allocator\("EASTL[^"]*"\);[ \t]*\n', body, re.M):
        name = m.group(1)
        body = body.replace(m.group(0), '', 1)
        body = re.sub(rf',\s*&{name}\b(?=\s*\))', '', body)
        body = re.sub(rf'^\s*(?:eastl::)?allocator {name};[ \t]*\n', '', body, flags=re.M)
    return body


def arrows(body):
    """x.operator->()->y -> x->y (smart pointers and iterators)."""
    return re.sub(r'(\w[\w.\[\]]*)\.operator->\(\)->', r'\1->', body)


def init_list(body, members, bases):
    """Leading construction in a constructor -> (initialiser list entries, remaining body)."""
    k = body.find('{')
    lines = body[k + 1:].split('\n')
    is_member = lambda n: n in members or re.fullmatch(r'field\d*_0x[0-9a-f]+|m_\w+', n) is not None
    inits, keep, j = [], [], 0
    while j < len(lines) and (not lines[j].strip() or DECL_LINE.match(lines[j])):  # declarations stay
        keep.append(lines[j])
        j += 1
    while j < len(lines):
        s = lines[j].strip()
        placed = re.match(r'new \((.+?)\) ', s)
        if placed and s.endswith(');'):
            target, rest = placed.group(1), s[placed.end():-1]
            open_at = len(rest) - 1  # the constructor's arguments: the last parenthesised group
            depth = 0
            while open_at >= 0:
                depth += rest[open_at] == ')'
                depth -= rest[open_at] == '('
                if depth == 0:
                    break
                open_at -= 1
            typ, args = rest[:open_at].strip(), rest[open_at + 1:-1].strip()
            t = re.sub(r'^\(\s*[\w:<>,\s]+\*\s*\)\s*', '', target)
            if t == 'this' and typ.split('<')[0].split('::')[-1] in bases:
                inits.append(f'{typ}({args})')
                j += 1
                continue
            m = re.fullmatch(r'&?(?:this->)?(\w+)', t)
            if m and is_member(m.group(1)):
                if args:
                    inits.append(f'{m.group(1)}({args})')
                j += 1
                continue
        m = re.fullmatch(r'(?:this->)?(\w+) = ([-\w.]+|"[^"]*"|nullptr|true|false);', s)
        if m and is_member(m.group(1)) and not re.match(r'(?:DAT|PTR|u?Ram)\w*_[0-9a-f]+$', m.group(2)):
            inits.append(f'{m.group(1)}({m.group(2)})')
            j += 1
            continue
        if not s:
            j += 1
            continue
        break
    if not inits:
        return [], body
    return inits, body[:k + 1] + '\n'.join(keep) + '\n' + '\n'.join(lines[j:])


DECL_LINE = re.compile(r'^\s+[A-Za-z_][\w:<>,\s*&]*?[\s*&]\**[A-Za-z_]\w*(?:\s*\[\d+\])?;\s*$')


def strip_member_destruction(body, members):
    """Destructor epilogue: member destructors and the base destructor run implicitly."""
    def implicit(l):
        s = l.strip()
        if re.fullmatch(r'~[\w:<>, ]+\(\);', s):
            return True
        m = re.fullmatch(r'(?:this->)?(\w+)(?:\[\d+\])?\.~[\w:<>, ]+\(\);', s)
        return bool(m and m.group(1) in members)
    return drop_statements(body, implicit)


# ---- local objects ----
BUILTIN = re.compile(r'^(?:const\s+)?(?:unsigned |signed )?(?:char|short|int|long|long long|float|double|bool|'
                     r'u?int\d+_t|wchar_t|char\d+_t|void|size_t|uint|ulong|ushort|uchar)$')
DECL = re.compile(r'^(\s+)([A-Za-z_][\w:<>,\s]*?[\w>])\s+(local_\w+|\w+Stack_\w+)\s*\[(\d+)\];\s*$')
OBJ_DECL = re.compile(r'^(\s+)([A-Za-z_][\w:<>,\s]*?[\w>])\s+(local_\w+|\w+Stack_\w+);\s*$')


PLACEHOLDER_TYPES = ('ReturnValue', 'uint8_t', 'undefined')
PRIMITIVE = re.compile(r'^(?:const\s+)?(?:unsigned |signed )?(?:char|short|int|long|long long|float|double|bool|'
                       r'u?int\d+_t|wchar_t|char\d+_t|size_t)$')
LEADING_CAST = re.compile(r'^\(\s*[\w:<>,\s*&()]+?\s*\*+\s*\)\s*(?=[\w*&(])')


def declare_at_first_use(body):
    """Ghidra declares every variable at the top: declare each where it is first assigned at the top level,
    with its type when that is a primitive and auto otherwise (Ghidra's class types are often a folded name)."""
    k = body.find('{')
    if k < 0:
        return body
    lines = body[k + 1:].split('\n')
    # join declarations Ghidra wrapped onto two lines
    j = 0
    while j < len(lines) - 1 and (lines[j].strip() == '' and j == 0 or re.match(r'^  \S', lines[j])):
        if not lines[j].rstrip().endswith(';') and lines[j].strip() and re.match(r'^\s+\*?\w+;', lines[j + 1]):
            lines[j] = lines[j].rstrip() + ' ' + lines[j + 1].strip()
            del lines[j + 1]
            continue
        if not lines[j].strip() and j > 0:
            break
        j += 1
    decls = {}
    for i, line in enumerate(lines[:j + 1]):
        m = re.fullmatch(r'  ([A-Za-z_][\w:<>,\s*&]*?[\w>*&])\s*(\**)\s*([A-Za-z_]\w*);\s*', line)
        if m and m.group(3) not in ('this',):
            decls[m.group(3)] = (i, (m.group(1) + ' ' + m.group(2)).strip())
    if not decls:
        return body
    start = j + 1
    for name, (di, typ) in decls.items():
        pat = re.compile(rf'(?<![\w.>]){re.escape(name)}\b')
        for i in range(start, len(lines)):
            if lines[i] is None or not pat.search(lines[i]):
                continue
            m = re.fullmatch(rf'  {re.escape(name)} = (.+);\s*', lines[i])
            if m and not pat.search(m.group(1)):
                expr = m.group(1)
                bare = LEADING_CAST.sub('', expr, count=1)
                if PRIMITIVE.match(typ.replace(' *', '*').rstrip()):
                    lines[i] = f'  {typ} {name} = {expr};'
                elif re.fullmatch(r'[\w:.\->*&\[\]]+(?:<[^;]*>)?\(.*\)', bare) and balanced_end(bare, bare.index('(')) == len(bare):
                    lines[i] = f'  auto {name} = {bare};'  # a call: its own return type is the variable's
                else:
                    lines[i] = f'  {typ} {name} = {expr};'
                lines[di] = None
            break
    kept = [l for l in lines if l is not None]
    # no declarations left: drop the blank line that separated them
    while kept and not kept[0].strip() and len(kept) > 1 and not kept[1].strip():
        kept.pop(0)
    return body[:k + 1] + '\n'.join(kept)


def local_object_decls(body):
    """Ghidra declares a local class object as a byte array (T local_40[24]) that decays to a pointer. Declare it
    as an object and write its uses as &local_40, before calls are rewritten (they turn &x back into x)."""
    lines = body.split('\n')
    objs, arrays = {}, {}
    for i, line in enumerate(lines[:200]):
        m = DECL.match(line)
        if m and not BUILTIN.match(m.group(2).strip()):
            objs[m.group(3)] = arrays[m.group(3)] = m.group(2).strip()
            continue
        m = OBJ_DECL.match(line)
        if m and not BUILTIN.match(m.group(2).strip()) and not m.group(2).strip().startswith(PLACEHOLDER_TYPES):
            objs[m.group(3)] = m.group(2).strip()
    if not arrays:
        return body, objs
    text = '\n'.join(lines)
    for name, typ in arrays.items():
        text = re.sub(rf'^(\s*)[\w:<>,\s]*?[\w>]\s+{name}\s*\[\d+\];', rf'\1{typ} {name};', text, count=1, flags=re.M)
        decl_end = text.find(f' {name};') + len(name) + 2
        head, tail = text[:decl_end], text[decl_end:]
        tail = re.sub(rf'(?<![&.\w>])\b{name}\b(?!\s*[\[.(])', f'&{name}', tail)
        tail = tail.replace(f'&&{name}', f'&{name}')
        tail = re.sub(rf'\(\s*[\w:<>,\s]+\*\s*\)&{name}\b', f'&{name}', tail)
        tail = re.sub(rf'\(&{name}\)->', f'{name}.', tail)
        text = head + tail
    return text, objs


def local_object_lifetimes(body, objs):
    """After the call rewrite: construction in place becomes the declaration, and destructor calls on locals go
    (they run implicitly at the end of the scope)."""
    lines = body.split('\n')
    for name, typ in objs.items():
        di = next((i for i, l in enumerate(lines) if l is not None and re.fullmatch(rf'\s*[\w:<>,\s*]+?\s{name};\s*', l)), None)
        indent = re.match(r'\s*', lines[di]).group(0) if di is not None else None
        for i, line in enumerate(lines):
            if i == di or line is None:
                continue
            m = re.match(rf'^(\s*)new \(&{name}\) ([^;]*?)\((.*)\);\s*$', line)
            if m and di is not None and m.group(1) == indent:
                args = m.group(3).strip()
                t = m.group(2).strip() if typ.startswith(PLACEHOLDER_TYPES) else typ
                lines[i] = f'{m.group(1)}{t} {name}{"(" + args + ")" if args else ""};'
                lines[di] = None
                di = None
                continue
            m = re.match(rf'^(\s*){name} = (.+);\s*$', line)
            if m and di is not None and name not in m.group(2) and m.group(1) == indent:
                t = 'auto' if typ.startswith(PLACEHOLDER_TYPES) else typ
                lines[i] = f'{m.group(1)}{t} {name} = {m.group(2)};'
                lines[di] = None
                di = None
    body = '\n'.join(l for l in lines if l is not None)
    # constructed again inside a block, where the declaration cannot move: an assignment reads the same
    for name in objs:
        body = re.sub(rf'^(\s*)new \(&{name}\) ([^;]*?)\((.*)\);[ \t]*$', rf'\1{name} = \2(\3);', body, flags=re.M)
    # any local's destructor call is implicit
    return re.sub(r'^[ \t]*&?(?:local_\w+|\w+Stack_\w+)(?:\.|->)~[\w:<>, ]+\(\);[ \t]*\n', '', body, flags=re.M)
