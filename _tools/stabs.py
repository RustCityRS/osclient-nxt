import struct, sys, collections, json

path, out = sys.argv[1], sys.argv[2]
data = open(path, 'rb').read()
ncmds = struct.unpack_from('<I', data, 16)[0]
off = 32
for i in range(ncmds):
    cmd, size = struct.unpack_from('<II', data, off)
    if cmd == 0x2:
        symoff, nsyms, stroff, strsize = struct.unpack_from('<IIII', data, off + 8)
    off += size


def sym(k):
    strx, ntype, nsect, ndesc, value = struct.unpack_from('<IBBHQ', data, symoff + k * 16)
    end = data.index(b'\0', stroff + strx)
    return ntype, nsect, value, data[stroff + strx:end].decode('utf8', 'replace')


rows = []
so_dir = so_file = obj = sol = None
pending = None
for k in range(nsyms):
    ntype, nsect, value, s = sym(k)
    if not ntype & 0xe0:
        continue
    if ntype == 0x64:
        if not s:
            so_dir = so_file = None
        elif s.endswith('/'):
            so_dir = s
        else:
            so_file = s
            sol = (so_dir or '') + s
    elif ntype == 0x66:
        obj = s
    elif ntype == 0x84:
        sol = s
    elif ntype == 0x24:
        if s:
            pending = (s, value)
        elif pending:
            rows.append(('F', obj, sol, pending[0], pending[1], value))
            pending = None
    elif ntype in (0x26, 0x20):
        rows.append(('S' if ntype == 0x26 else 'G', obj, sol, s, value, 0))

with open(out, 'w', encoding='utf8', newline='') as f:
    for r in rows:
        f.write('\t'.join(map(str, r)) + '\n')
print(len(rows))
