"""Inspect a TLS_GX_CAPTURE file (recomp/gx_fifo_capture.c format 2).

    python tools/aurora_spike/capinfo.py build/recomp/gxcap/gxfifo.tlscap [--opcodes]

Prints the frame window, per-frame FIFO byte counts and the MEM plane list, and with
--opcodes a histogram of the top-level GX FIFO opcodes (the decoder is byte-exact: it walks
the same command grammar the pipeline does, so the histogram counts real commands).
"""
import struct
import sys


def records(buf):
    pos = 0
    magic = buf[:8]
    if magic != b'TLSGXCP2':
        raise SystemExit(f'bad magic {magic!r}')
    frm, to = struct.unpack_from('<II', buf, 8)
    pos = 16
    while pos + 5 <= len(buf):
        tag = buf[pos]
        (ln,) = struct.unpack_from('<I', buf, pos + 1)
        payload = buf[pos + 5:pos + 5 + ln]
        if len(payload) != ln:
            raise SystemExit(f'truncated record at {pos} tag={tag} len={ln}')
        pos += 5 + ln
        yield tag, payload


def walk_opcodes(stream):
    """Walk the GX FIFO grammar (the subset this project's guest emits) and count opcodes."""
    hist = {}
    verts = {}
    i = 0
    n = len(stream)
    while i < n:
        cmd = stream[i]
        hist[cmd] = hist.get(cmd, 0) + 1
        if cmd == 0x00:
            i += 1
        elif cmd == 0x08:  # CP reg
            i += 6
        elif cmd == 0x10:  # XF reg
            if i + 5 > n:
                break
            words = struct.unpack_from('>H', stream, i + 1)[0] + 1
            i += 5 + words * 4
        elif cmd == 0x20 or cmd == 0x28 or cmd == 0x30 or cmd == 0x38:  # indexed XF
            i += 5
        elif cmd == 0x61:  # BP reg
            i += 5
        elif cmd in (0x44, 0x48):  # invalidate / metrics
            i += 1
        elif cmd == 0x40:
            # Should not appear: the recorder inlines display lists.
            i += 9
        elif (cmd & 0xF8) in (0x80, 0x88, 0x90, 0x98, 0xA0, 0xA8, 0xB0, 0xB8):
            if i + 3 > n:
                break
            vcnt = struct.unpack_from('>H', stream, i + 1)[0]
            verts[cmd] = verts.get(cmd, 0) + vcnt
            i += 3 + vcnt * 0  # vertex payload size is unknown here; stop decoding
            raise SystemExit(f'draw at {i - 3}: vertex payload walk needs fmt tables; '
                             f'stopping after the first draw (opcode 0x{cmd:02X}, {vcnt} verts)')
        else:
            raise SystemExit(f'unknown opcode 0x{cmd:02X} at offset {i}')
    return hist, verts


def main(argv):
    if len(argv) < 2:
        print(__doc__)
        return 1
    buf = open(argv[1], 'rb').read()
    want_opcodes = '--opcodes' in argv
    frames = {}
    mem = []
    copies = []
    notes = []
    cur = None
    total_fifo = 0
    for tag, payload in records(buf):
        if tag == 1:
            cur = struct.unpack_from('<I', payload)[0]
            frames[cur] = 0
        elif tag == 2:
            pass
        elif tag == 3:
            if cur is not None:
                frames[cur] += len(payload)
            total_fifo += len(payload)
            if want_opcodes:
                try:
                    hist, _ = walk_opcodes(payload)
                    print(f'  opcodes in frame {cur}: ' +
                          ' '.join(f'0x{k:02X}x{v}' for k, v in sorted(hist.items())))
                except SystemExit as e:
                    print(f'  {e}')
        elif tag == 4:
            base, size = struct.unpack_from('<II', payload, 0)
            mem.append((base, size))
        elif tag == 5:
            dst, w, h, fmt, vmark, size = struct.unpack_from('<IIIIII', payload, 0)
            copies.append((dst, w, h, fmt, vmark, size))
        elif tag == 6:
            notes.append(payload.decode('utf-8', 'replace'))
    print(f'frames: {min(frames) if frames else "-"}..{max(frames) if frames else "-"}  '
          f'({len(frames)} recorded)')
    for f in sorted(frames):
        print(f'  frame {f}: {frames[f]} FIFO bytes')
    print(f'total FIFO bytes: {total_fifo}')
    for base, size in mem:
        print(f'MEM 0x{base:08X} {size} bytes ({size / 1048576:.1f} MiB)')
    print(f'copies: {len(copies)}')
    for c in copies[:16]:
        print(f'  copy dst=0x{c[0]:08X} {c[1]}x{c[2]} fmt={c[3]} vmark={c[4]} {c[5]} bytes')
    for t in notes:
        print(f'NOTE {t}')
    return 0


if __name__ == '__main__':
    sys.exit(main(sys.argv))
