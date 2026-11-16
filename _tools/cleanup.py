"""Text clean-ups that turn Ghidra's C into ordinary C++. Each takes and returns one function's code."""
import re

# ---- comments ----
WARNING = re.compile(r'^[ \t]*/\* WARNING:.*?\*/[ \t]*\n', re.M | re.S)
STACK_SIZE = re.compile(r'^[ \t]*/\* Function Stack Size: [^*]*\*/[ \t]*\n', re.M)


def strip_comments(code):
    code = WARNING.sub('', code)
    return STACK_SIZE.sub('', code)


# ---- the stack protector: a canary copied at entry and checked before every return ----
GUARD = r'\*\((?:long|undefined8|ulong) \*\)(?:PTR_)?_*stack_chk_guard\w*'
GUARD_LOAD = re.compile(rf'^[ \t]*([\w.]+) = {GUARD};[ \t]*\n', re.M)
GUARD_EMPTY = re.compile(rf'^[ \t]*if \({GUARD} [!=]= [\w.]+\) \{{\s*\}}[ \t]*\n', re.M)
GUARD_FAIL = re.compile(rf'^([ \t]*)if \({GUARD} != ([\w.]+)\) \{{\s*\n\s*_*stack_chk_fail\(\);\s*\n\1\}}[ \t]*\n', re.M)
GUARD_OK = re.compile(rf'^([ \t]*)if \({GUARD} == ([\w.]+)\) \{{\s*\n(.*?)^\1\}}\s*\n\s*_*stack_chk_fail\(\);[ \t]*\n', re.M | re.S)
GUARD_NE = re.compile(rf'^[ \t]*if \({GUARD} != [\w.]+\) \{{', re.M)
GUARD_FAIL_ONLY = re.compile(r'^[ \t]*_*stack_chk_fail\(\);[ \t]*\n', re.M)


def strip_stack_guard(code):
    if 'stack_chk' not in code:
        return code
    code = GUARD_LOAD.sub('', code)
    code = GUARD_FAIL.sub('', code)
    code = GUARD_EMPTY.sub('', code)

    def ok(m):  # the success branch holds the real return: keep it, one level out
        indent = m.group(1)
        body = m.group(3)
        return re.sub(r'^' + re.escape(indent) + r'  ', indent, body, flags=re.M)
    code = GUARD_OK.sub(ok, code)
    code = GUARD_FAIL_ONLY.sub('', code)
    # whatever is left: the != branch is the failure path, whatever Ghidra kept inside it
    while True:
        m = GUARD_NE.search(code)
        if not m:
            return code
        depth, j = 0, m.end() - 1
        while j < len(code):
            if code[j] == '{':
                depth += 1
            elif code[j] == '}':
                depth -= 1
                if depth == 0:
                    break
            j += 1
        end = code.find('\n', j)
        code = code[:m.start()] + code[end + 1 if end >= 0 else len(code):]


# ---- types ----
TYPE_WORDS = {
    'undefined1': 'uint8_t', 'undefined2': 'uint16_t', 'undefined4': 'uint32_t', 'undefined8': 'uint64_t',
    'undefined16': 'uint8_t', 'undefined': 'uint8_t', 'byte': 'uint8_t', 'sbyte': 'int8_t', 'word': 'uint16_t',
    'dword': 'uint32_t', 'qword': 'uint64_t', 'uchar': 'unsigned char', 'ushort': 'unsigned short',
    'uint': 'unsigned int', 'ulong': 'unsigned long', 'longlong': 'long long', 'ulonglong': 'unsigned long long',
    'int3': 'int32_t', 'int5': 'int64_t', 'int6': 'int64_t', 'int7': 'int64_t', 'uint3': 'uint32_t',
    'uint5': 'uint64_t', 'uint6': 'uint64_t', 'uint7': 'uint64_t', 'undefined3': 'uint32_t',
    'undefined5': 'uint64_t', 'undefined6': 'uint64_t', 'undefined7': 'uint64_t', 'float10': 'long double',
    'wchar32': 'char32_t', 'wchar16': 'char16_t', '_func_decltype_nullptr': 'std::nullptr_t',
}
TYPE_RE = re.compile(r'(?<![\w:."])(' + '|'.join(sorted(map(re.escape, TYPE_WORDS), key=len, reverse=True)) + r')(?!\w)')
CODE_PTR = re.compile(r'\(code \*(\*?)\)')
NULL_CAST = re.compile(r'(?<![\w*)\]])\(\s*[\w:<>, ]+?\s*\*+\s*\)\s*0x0\b(?!\s*->|\s*\[)')
STRINGS = re.compile(r'"(?:[^"\\\n]|\\.)*"|\'(?:[^\'\\\n]|\\.)*\'')


def outside_strings(code, fn):
    out, i = [], 0
    for m in STRINGS.finditer(code):
        out.append(fn(code[i:m.start()]))
        out.append(m.group(0))
        i = m.end()
    out.append(fn(code[i:]))
    return ''.join(out)


def fix_types(code):
    def fix(text):
        text = CODE_PTR.sub(lambda m: '(void (*' + m.group(1) + ')(...))', text)
        text = re.sub(r'\bcode \*', 'void *', text)
        text = TYPE_RE.sub(lambda m: TYPE_WORDS[m.group(1)], text)
        return NULL_CAST.sub('nullptr', text)
    return outside_strings(code, fix)


# ---- Ghidra's register-piece operators ----
UNSIGNED = {1: 'uint8_t', 2: 'uint16_t', 3: 'uint32_t', 4: 'uint32_t', 5: 'uint64_t', 6: 'uint64_t',
            7: 'uint64_t', 8: 'uint64_t', 16: 'unsigned __int128'}
SIGNED = {1: 'int8_t', 2: 'int16_t', 4: 'int32_t', 8: 'int64_t', 16: '__int128'}
PIECE = re.compile(r'\b(CONCAT|SUB|ZEXT|SEXT)(\d)(\d+)\(')


def _args(text, i):
    """Split the call arguments starting after the '(' at text[i-1]; returns (args, index past ')')."""
    depth, j, cur, args = 1, i, i, []
    while j < len(text) and depth:
        c = text[j]
        if c in '([':
            depth += 1
        elif c in ')]':
            depth -= 1
            if depth == 0:
                args.append(text[cur:j].strip())
                return args, j + 1
        elif c == ',' and depth == 1:
            args.append(text[cur:j].strip())
            cur = j + 1
        j += 1
    return None, i


def _paren(e):
    return e if re.fullmatch(r'[\w.\->\[\]]+', e) else f'({e})'


def rewrite_pieces(code, returns_narrow=None):
    """CONCAT44(hi, lo) -> (uint64_t)hi << 32 | lo; SUB84(x, 4) -> (uint32_t)(x >> 32); ZEXT48(x) -> (uint64_t)x.
    In a return statement CONCATn1(junk, b) is just b: the upper bytes are register garbage around a bool/char."""
    for _ in range(8):
        m = PIECE.search(code)
        if not m:
            return code
        changed = False
        out, i = [], 0
        for m in PIECE.finditer(code):
            if m.start() < i:
                continue
            args, end = _args(code, m.end())
            if args is None:
                continue
            op, a, b = m.group(1), int(m.group(2)), int(m.group(3))
            new = None
            if op == 'CONCAT' and len(args) == 2:
                line_start = code.rfind('\n', 0, m.start()) + 1
                if b == 1 and code[line_start:m.start()].strip() == 'return':
                    new = args[1]
                else:
                    t = UNSIGNED.get(a + b, 'uint64_t')
                    new = f'((({t}){_paren(args[0])} << {b * 8}) | ({UNSIGNED.get(b, "uint64_t")}){_paren(args[1])})'
            elif op == 'SUB' and len(args) == 2 and re.fullmatch(r'\d+|0x[0-9a-fA-F]+', args[1]):
                k, t = int(args[1], 0), UNSIGNED.get(b, 'uint64_t')
                new = f'({t}){_paren(args[0])}' if k == 0 else f'({t})({_paren(args[0])} >> {k * 8})'
            elif op == 'ZEXT' and len(args) == 1:
                new = f'({UNSIGNED.get(b, "uint64_t")}){_paren(args[0])}'
            elif op == 'SEXT' and len(args) == 1:
                new = f'({SIGNED.get(b, "int64_t")}){_paren(args[0])}'
            if new is None:
                continue
            out.append(code[i:m.start()] + new)
            i = end
            changed = True
        out.append(code[i:])
        code = ''.join(out)
        if not changed:
            return code
    return code


# ---- floats: Ghidra prints a float constant at double precision (0.05000000074505806) ----
import struct as _struct

LONG_DECIMAL = re.compile(r'(?<![\w.])(-?\d+\.\d{5,})(?![\w.])')


def _float32(x):
    return _struct.unpack('<f', _struct.pack('<f', x))[0]


def short_floats(code):
    def fix(m):
        x = float(m.group(1))
        if x and abs(x) <= 3.4e38 and _float32(x) != x:
            # Ghidra prints a float constant by its own shortest form: 1.5707965 is a float, not a double
            fx = _float32(x)
            digits = len(re.sub(r'[^0-9]', '', m.group(1)).lstrip('0'))
            if digits >= 7 and any(f'{fx:.{p}g}' == m.group(1).lstrip('-').lstrip('+') or
                                   f'{-fx:.{p}g}' == m.group(1) for p in range(6, 10)):
                return m.group(1) + 'f'
            return m.group(0)
        if not x or abs(x) > 3.4e38:
            return m.group(0)
        for p in range(1, 10):
            s = f'{x:.{p}g}'
            if _float32(float(s)) == x:
                if 'e' not in s and '.' not in s:
                    s += '.0'
                return s + 'f'
        return m.group(0)
    return outside_strings(code, lambda t: LONG_DECIMAL.sub(fix, t))


# ---- default template arguments: hash_map<K, V, eastl::hash<K>, eastl::equal_to<K>, eastl::allocator, false> ----
DEFAULT_ARG = re.compile(r'(?:eastl::|std::(?:__1::)?)?(?:allocator(?:<.*>)?|less<.*>|greater<.*>|hash<.*>|'
                         r'equal_to<.*>|default_delete<.*>|char_traits<.*>|BucketAllocatorEASTL)$')
FLAG_DEFAULTS = {'hash_map': 'false', 'hash_set': 'false', 'hash_multimap': 'false', 'hash_multiset': 'false',
                 'fixed_vector': 'true', 'fixed_string': 'true', 'fixed_list': 'true', 'fixed_map': 'true',
                 'fixed_set': 'true', 'fixed_hash_map': 'true', 'fixed_hash_set': 'true', 'fixed_substring': 'true'}
TEMPLATE_START = re.compile(r'([A-Za-z_][\w:]*)<(?![<=])')


def _template_end(text, i):
    """Index of the '>' closing the template argument list that opens at text[i] ('<'), or -1."""
    depth, paren, j = 0, 0, i
    while j < len(text):
        c = text[j]
        if c == '(':
            paren += 1
        elif c == ')':
            paren -= 1
            if paren < 0:
                return -1
        elif c == '<' and text[j - 1:j] not in ('<', ' ') and text[j + 1:j + 2] not in ('<', '='):
            depth += 1
        elif c == '>' and text[j - 1:j] != '-' and text[j + 1:j + 2] != '=':
            depth -= 1
            if depth == 0:
                return j
        elif c in ';{}"\n':
            return -1
        j += 1
    return -1


def _split_template_args(s):
    out, depth, cur = [], 0, 0
    for j, c in enumerate(s):
        if c in '(<' and not (c == '<' and s[j - 1:j] == '<'):
            depth += 1
        elif c in ')>' and not (c == '>' and s[j - 1:j] == '-'):
            depth -= 1
        elif c == ',' and depth == 0:
            out.append(s[cur:j].strip())
            cur = j + 1
    out.append(s[cur:].strip())
    return out


def drop_default_template_args(text):
    out, i = [], 0
    for m in TEMPLATE_START.finditer(text):
        if m.start() < i:
            continue
        lt = m.end() - 1
        gt = _template_end(text, lt)
        if gt < 0:
            continue
        if re.search(r'&&|\|\||==|!=| [<>]=? |[;?]', text[lt + 1:gt]):
            continue  # an expression (a < b ... c > d), not a template argument list
        name = m.group(1).split('::')[-1]
        args = _split_template_args(drop_default_template_args(text[lt + 1:gt]))
        while len(args) > 1:
            last = args[-1]
            if DEFAULT_ARG.match(last) or FLAG_DEFAULTS.get(name) == last or \
                    (name.startswith('vector_') and re.match(r'(?:eastl::)?vector<(?:eastl::)?pair<', last)):
                args.pop()
            else:
                break
        out.append(text[i:m.start()] + m.group(1) + '<' + ', '.join(args) + '>')
        i = gt + 1
    out.append(text[i:])
    return ''.join(out)


def join_wrapped(code):
    """Ghidra wraps long statements and declarations over several lines: one line each (clang-format re-wraps)."""
    lines = code.split('\n')
    out, buf = [], None
    for line in lines:
        s = line.strip()
        if buf is not None:
            buf = buf.rstrip() + ('' if buf.rstrip().endswith(('(', '::', '[')) or s.startswith((')', '(', '::', '[', ',')) else ' ') + s
        else:
            buf = line
        t = buf.strip()
        if not t or t.endswith((';', '{', '}', '*/', ':')) or t.startswith(('//', '/*', '#')) or t in ('else', 'do') \
                or re.fullmatch(r'(?:case .*|default|LAB_\w+|\w+):', t):
            out.append(buf)
            buf = None
    if buf is not None:
        out.append(buf)
    return '\n'.join(out)


def clean(code):
    code = join_wrapped(code)
    code = strip_comments(code)
    code = strip_stack_guard(code)
    code = rewrite_pieces(code)
    code = re.sub(r'\boperator_(new|delete)(\[\])?\(', lambda m: f'operator {m.group(1)}{m.group(2) or ""}(', code)
    code = re.sub(r'\[\((?:long|ulong|int|uint|longlong|ulonglong)\)', '[', code)  # index widening casts
    code = re.sub(r' \+ -(?=\d|\w)', ' - ', code)  # x + -5 -> x - 5
    # the compiler's remainder: x + (x / n) * -n and x - (x / n) * n are x % n
    code = re.sub(r'\b([\w.]+(?:->\w+)*) \+ \(\1 / (\d+)\) \* -\2\b', r'\1 % \2', code)
    code = re.sub(r'\b([\w.]+(?:->\w+)*) - \(\1 / (\d+)\) \* \2\b', r'\1 % \2', code)
    return short_floats(fix_types(code))
