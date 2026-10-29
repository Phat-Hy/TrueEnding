"""Decode the BP/CP state in force at a given stream offset of frame 3400 (AP-AN).

Handy one-shot: what did the guest actually write for the scissor / cmode / genmode before draw 0?
"""
import struct
import sys

path = sys.argv[1] if len(sys.argv) > 1 else 'build/recomp/gxcap/window.tlscap'
stop = int(sys.argv[2]) if len(sys.argv) > 2 else 3123
d = open(path, 'rb').read()
assert d[:8] == b'TLSGXCP2'
pos = 16
chunks = None
while pos + 5 <= len(d):
    tag = d[pos]
    (ln,) = struct.unpack_from('<I', d, pos + 1)
    body = pos + 5
    if tag == 1 and chunks is None:
        chunks = []
    elif tag == 3 and chunks is not None:
        chunks.append(d[body:body + ln])
    elif tag == 2:
        break
    pos = body + ln
s = b''.join(chunks)
print('frame 0 bytes', len(s), 'stop at', stop)


def u32(o):
    return struct.unpack_from('>I', s, o)[0]


i = 0
bp = {}
xf = {}
cp = {}
draws = 0
while i < stop:
    c = s[i]
    if c == 0x00:
        i += 1
    elif c == 0x08:
        cp[s[i + 1]] = u32(i + 2)
        i += 6
    elif c == 0x10:
        w = (s[i + 1] << 8 | s[i + 2]) + 1
        base = (s[i + 3] << 8 | s[i + 4])
        for k in range(w):
            xf[base + k] = u32(i + 5 + k * 4)
        i += 5 + w * 4
    elif c in (0x20, 0x28, 0x30, 0x38):
        i += 5
    elif c in (0x44, 0x48):
        i += 1
    elif c == 0x61:
        word = u32(i + 1)
        bp[word >> 24] = word & 0xFFFFFF
        i += 5
    elif 0x80 <= c <= 0xBF:
        draws += 1
        break
    else:
        print('unknown opcode', hex(c), 'at', i)
        break

print(f'walked to {i}, {draws} draw(s) seen')
for r in (0x00, 0x20, 0x21, 0x41, 0x43, 0xF3, 0x4F, 0x50, 0x51):
    v = bp.get(r)
    if v is None:
        print(f'BP 0x{r:02X}: not written before draw 0')
        continue
    if r == 0x20:
        print(f'BP 0x20 (scissor x0,y0) = 0x{v:06X} -> x0={v & 0x3FF} y0={(v >> 10) & 0x3FF}')
    elif r == 0x21:
        print(f'BP 0x21 (scissor x1,y1) = 0x{v:06X} -> x1={v & 0x3FF} y1={(v >> 10) & 0x3FF}')
    else:
        print(f'BP 0x{r:02X} = 0x{v:06X}')
print('CP 0x30 (matrix index) =', cp.get(0x30), '-> pnm', (cp.get(0x30) or 0) & 0x3F, '/3 =',
      (cp.get(0x30) or 0) & 0x3F // 1)


def f32(w):
    return struct.unpack('>f', struct.pack('>I', w))[0]


print('XF projection 0x1020..0x1026:', [f'{f32(xf[a]):.6f}' if a in xf else '-' for a in range(0x1020, 0x1027)])
print('XF viewport   0x101A..0x101F:', [f'{f32(xf[a]):.4f}' if a in xf else '-' for a in range(0x101A, 0x1020)])
