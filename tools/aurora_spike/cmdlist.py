"""List one recorded frame's commands by INDEX (the index --max-cmds counts), so a bisect result of the
form "black between command 61 250 and 61 500" can be turned into "the command at 61 41x is ...".

    python tools/aurora_spike/cmdlist.py <capture.tlscap> --frame 0 --from 61200 --to 61600
"""
import argparse
import os
import struct
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from streamwalk import Stream, load  # noqa: E402


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('capture')
    ap.add_argument('--frame', type=int, default=0)
    ap.add_argument('--from', dest='lo', type=int, default=0)
    ap.add_argument('--to', dest='hi', type=int, default=10 ** 9)
    args = ap.parse_args()

    _, _, frames, _ = load(args.capture)
    stream = b''.join(frames[args.frame]['chunks'])
    st = Stream()
    i = 0
    cmds = 0
    while i < len(stream):
        cmds += 1
        cmd = stream[i]
        note = ''
        if cmd == 0x00:
            i += 1
        elif cmd == 0x08:
            reg = stream[i + 1]
            val = struct.unpack_from('>I', stream, i + 2)[0]
            st.apply_cp(reg, val)
            note = f'CP 0x{reg:02X} = 0x{val:08X}'
            i += 6
        elif cmd == 0x10:
            words = (stream[i + 1] << 8 | stream[i + 2]) + 1
            base = (stream[i + 3] << 8 | stream[i + 4])
            vals = [struct.unpack_from('>I', stream, i + 5 + w * 4)[0] for w in range(words)]
            note = f'XF base 0x{base:04X} n={words} words=' + ' '.join(f'{v:08X}' for v in vals[:3])
            i += 5 + words * 4
        elif cmd in (0x20, 0x28, 0x30, 0x38):
            addr = struct.unpack_from('>H', stream, i + 1)[0]
            note = f'XFIDX 0x{addr:04X}'
            i += 5
        elif cmd == 0x40:
            note = 'CALL_DL (recorder inlines these)'
            i += 9
        elif cmd in (0x44, 0x48):
            i += 1
        elif cmd == 0x61:
            word = struct.unpack_from('>I', stream, i + 1)[0]
            note = f'BP 0x{word >> 24:02X} = 0x{word & 0xFFFFFF:06X}'
            i += 5
        elif 0x80 <= cmd <= 0xBF:
            fmt = cmd & 7
            vcnt = struct.unpack_from('>H', stream, i + 1)[0]
            vs = st.vtx_size(fmt)
            note = f'DRAW 0x{cmd:02X} fmt {fmt} vcnt {vcnt} vtxsize {vs}'
            i += 3 + vcnt * vs
        else:
            note = 'UNKNOWN'
            break
        if args.lo <= cmds <= args.hi:
            print(f'{cmds:6d} @{i:8d} {note}')
    print(f'total {cmds} command(s), {len(stream)} bytes')


if __name__ == '__main__':
    main()
