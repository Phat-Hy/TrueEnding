"""Rewrite a TLS_GX_CAPTURE file keeping only one frame window (and its copy records).

    python tools/aurora_spike/capfilter.py <in.tlscap> <out.tlscap> [--from F] [--to F]

Needed because recomp/gx_fifo_capture.c recorded *every* EFB copy of the run until the
`s_have_pending` gate was added (a 2-frame window produced an 8 747 977 944-byte file, one COPY
record per copy of frames 0..3399). A copy record outside a recorded frame is tagged with frame 0
by the loader, so dropping it loses nothing: the kept window is exactly what the replay needs.

The input is memory-mapped, never read into RAM - the whole point is that it does not fit.
"""
import mmap
import os
import struct
import sys


def main(argv):
    if len(argv) < 3:
        print(__doc__)
        return 1
    src, dst = argv[1], argv[2]
    want_from = want_to = None
    i = 3
    while i < len(argv):
        if argv[i] == '--from':
            want_from = int(argv[i + 1]); i += 2; continue
        if argv[i] == '--to':
            want_to = int(argv[i + 1]); i += 2; continue
        i += 1

    size = os.path.getsize(src)
    with open(src, 'rb') as f, mmap.mmap(f.fileno(), 0, access=mmap.ACCESS_READ) as mm:
        if mm[:8] != b'TLSGXCP2':
            raise SystemExit(f'{src}: bad magic')
        h_from, h_to = struct.unpack_from('<II', mm, 8)
        if want_from is None:
            want_from = h_from
        if want_to is None:
            want_to = h_to
        print(f'{src}: {size} bytes, header window {h_from}..{h_to}; keeping {want_from}..{want_to}')

        pos = 16
        cur = None
        stats = {'frames': 0, 'fifo': 0, 'fifo_bytes': 0, 'mem': 0, 'copy': 0, 'copy_bytes': 0,
                 'dropped_copy': 0, 'dropped_copy_bytes': 0}
        with open(dst, 'wb') as out:
            out.write(b'TLSGXCP2')
            out.write(struct.pack('<II', want_from, want_to))
            while pos + 5 <= size:
                tag = mm[pos]
                (ln,) = struct.unpack_from('<I', mm, pos + 1)
                body = pos + 5
                keep = False
                if tag == 1:  # FRAME_BEGIN
                    cur = struct.unpack_from('<I', mm, body)[0]
                    keep = want_from <= cur <= want_to
                    if keep:
                        stats['frames'] += 1
                elif tag == 2:  # FRAME_END
                    keep = cur is not None and want_from <= cur <= want_to
                elif tag == 3:  # FIFO
                    keep = cur is not None and want_from <= cur <= want_to
                    if keep:
                        stats['fifo'] += 1
                        stats['fifo_bytes'] += ln
                elif tag == 4:  # MEM
                    keep = True
                    stats['mem'] += 1
                elif tag == 5:  # COPY
                    keep = cur is not None and want_from <= cur <= want_to
                    if keep:
                        stats['copy'] += 1
                        stats['copy_bytes'] += ln
                    else:
                        stats['dropped_copy'] += 1
                        stats['dropped_copy_bytes'] += ln
                else:
                    keep = False
                if keep:
                    out.write(mm[pos:body + ln])
                pos = body + ln
            out.flush()
            os.fsync(out.fileno())
    print('kept: %(frames)d frames, %(fifo)d FIFO record(s) (%(fifo_bytes)d bytes), %(mem)d MEM, '
          '%(copy)d copy record(s) (%(copy_bytes)d bytes)' % stats)
    print('dropped: %(dropped_copy)d copy record(s) (%(dropped_copy_bytes)d bytes)' % stats)
    print(f'wrote {dst}: {os.path.getsize(dst)} bytes')
    return 0


if __name__ == '__main__':
    sys.exit(main(sys.argv))
