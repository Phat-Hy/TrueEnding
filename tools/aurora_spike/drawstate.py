"""Per-draw raster state from the CAPTURE - the capture-side twin of the layer's TLS_BATCH_DUMP.

camera.py answers "where does this draw land" (POS/projection/matrices). It does not answer
"what is this draw made of", which is the question the composite tail asks: the layer's dump
(`recomp/gfx_d3d11.c` TLS_BATCH_DUMP) prints per-batch `blend/src/dst/tex/w/h/fmt`, and until
now there was no way to read the same fields out of the recorded stream. This prints them from
the stream itself, with the same bit layout the layer and aurora both use:

  BP 0x00 GENMODE      numTevStages = ((v >> 10) & 0xF) + 1
  BP 0x28 TREF         texmap0 = v & 7, texcoord0 = (v >> 3) & 7, enable = (v >> 6) & 1
  BP 0x88+m TEXIMAGE0  width = (v & 0x3FF)+1, height = ((v >> 10) & 0x3FF)+1, fmt = (v >> 20) & 0xF
  BP 0x94+m TEXIMAGE3  address = (v & 0xFFFFFF) << 5
  BP 0x40 ZMODE        compare = v & 1, func = (v >> 1) & 7, update = (v >> 4) & 1
  BP 0x41 CMODE0       blendEn = v & 1, logicEn = (v >> 1) & 1, colorUpdate = (v >> 3) & 1,
                       alphaUpdate = (v >> 4) & 1, dst = (v >> 5) & 7, src = (v >> 8) & 7,
                       subtract = (v >> 11) & 1
  BP 0x49/0x4A COPYSRC left/top + right/bottom, 0x4B COPYDST (address>>5, format in 24..26),
  BP 0x4D COPYDST pitch, 0x52 COPYEXEC (bit 11 clear, bit 14 display copy)

The texture register numbers are the ones the adapter in `aurora_replay.cpp:790-832` watches
(BP 0x88..0x8B = image0 per map, 0x94..0x97 = image3 per map) and the field layout is the one
both it and `recomp/gfx_d3d11.c` use - NOT the 0x38/0x3B pair, which carried coordinate-scale
values in this stream and made the first version of this tool report an 80-wide "texture" for
every tail quad.

Both `recomp/gx_pipeline.c:1689-1700` and aurora's `lib/gx/regs.cpp:229-255` decode 0x41 exactly
this way, so this tool agrees with both by construction. The point of the exercise is to see
*which* factor pair a tail quad actually carries, instead of reading it off a rendered frame.

Usage:
    drawstate.py <capture> --frame 6 --last 25          # the tail of the frame
    drawstate.py <capture> --frame 6 --copies           # every EFB copy command with its index
    drawstate.py <capture> --frame 6 --draws 114 --to-draw 130
    drawstate.py <capture> --frame 6 --last 25 --first-frame 1   # command index as --max-cmds counts it
"""
import argparse
import os
import struct
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import streamwalk as sw  # noqa: E402

BLEND_FACTOR = {
    0: 'ZERO', 1: 'ONE', 2: 'SRCCLR', 3: 'INVSRCCLR',
    4: 'SRCALPHA', 5: 'INVSRCALPHA', 6: 'DSTALPHA', 7: 'INVDSTALPHA',
}


def tev_stages(v):
    return ((v >> 10) & 0xF) + 1


def f32(word):
    return struct.unpack('>f', struct.pack('>I', word))[0]


def dump_draw(n, d):
    cm = d['cmode0']
    print(f'  draw {n:6d} @cmd {d["cmd"]:7d} off {d["off"]:8d} fmt {d["fmt"]} vcnt {d["vcnt"]:5d} '
          f'tev {d["tev"]:2d}')
    if cm is None:
        print('        cmode0 not written in the window')
    else:
        print(f'        cmode0=0x{cm:06X} blendEn={cm & 1} logicEn={(cm >> 1) & 1} '
              f'colUpd={(cm >> 3) & 1} aUpd={(cm >> 4) & 1} '
              f'src={((cm >> 8) & 7)}:{BLEND_FACTOR[(cm >> 8) & 7]} '
              f'dst={((cm >> 5) & 7)}:{BLEND_FACTOR[(cm >> 5) & 7]} sub={(cm >> 11) & 1}')
    zm = d['zmode']
    if zm is not None:
        print(f'        zmode=0x{zm:06X} compare={zm & 1} func={(zm >> 1) & 7} update={(zm >> 4) & 1}')
    tr = d['tref']
    if tr is not None:
        print(f'        tref=0x{tr:06X} texmap0={tr & 7} texcoord0={(tr >> 3) & 7} '
              f'tex_enable={(tr >> 6) & 1}')
    for m in range(2):
        a = d['img0'][m]
        b = d['img3'][m]
        if a is None and b is None:
            continue
        addr = None
        s = f'        texobj m{m}: image0=' + (f'0x{a:06X}' if a is not None else '-')
        if a is not None and a != 0xFFFFFFFF:
            s += f' -> {((a & 0x3FF) + 1)}x{(((a >> 10) & 0x3FF) + 1)} fmt {(a >> 20) & 0xF}'
        if b is not None:
            addr = (b & 0xFFFFFF) << 5
            s += f'  image3=0x{b:06X} -> addr 0x{addr:08X}'
        print(s)
    if d['scissor'] is not None:
        v = d['scissor']
        # Field order measured, not assumed: BP 0x20/0x21 carry y in bits 0..11 and x in bits
        # 12..23. Read the other way round, draw 15513's scissor comes out 112x160 while the
        # copy it feeds is 160x112 - and every one of the ten tail draws' scissors then matches
        # the SOURCE RECT of the EFB copy issued next to it ((0,0)..(159,111) and (0,0)..(79,55)).
        x0, y0 = (v[0] >> 12) & 0x7FF, v[0] & 0x7FF
        x1, y1 = (v[1] >> 12) & 0x7FF, v[1] & 0x7FF
        bx0, by0 = max(0, x0 - 342), max(0, y0 - 342)
        bx1, by1 = max(0, x1 - 342), max(0, y1 - 342)
        w, h = bx1 - bx0 + 1, by1 - by0 + 1
        print(f'        scissor BP 0x20/0x21 = 0x{v[0]:06X}/0x{v[1]:06X} -> raw '
              f'(x {x0}..{x1}, y {y0}..{y1}) | minus the 342 GX view bias = '
              f'({bx0},{by0})..({bx1},{by1}) = {w}x{h} = '
              f'{100.0 * w * h / (640.0 * 448.0):.2f} % of the 640x448 frame')
    if d['viewport'] is not None:
        print('        viewport XF 0x101A..0x101F = '
              + ' '.join(f'{x:.3f}' for x in d['viewport']))
    if d['copies']:
        c = d['copies'][-1]
        print(f'        copies before this draw: {len(d["copies"])}, last = '
              f'0x{c["dst"]:08X} pitch {c["pitch"]} copyfmt {c["fmt"]} at cmd {c["cmd"]}')
    if d['clr0'] is not None:
        print(f'        CLR0 v0 raw {d["clr0"]}')


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('capture')
    ap.add_argument('--frame', type=int, default=0, help='frame index into the file')
    ap.add_argument('--last', type=int, default=0, help='print the last N draws of the frame')
    ap.add_argument('--draws', type=int, default=-1, help='first draw index to print')
    ap.add_argument('--to-draw', type=int, default=-1, help='last draw index to print')
    ap.add_argument('--copies', action='store_true', help='print every EFB copy command')
    ap.add_argument('--first-frame', type=int, default=0,
                    help='frame index a replay starts at; command indices are reported from '
                         'there so they match --max-cmds')
    ap.add_argument('--state-every', type=int, default=0,
                    help='also print every changed 0x40/0x41/0x00 value with its command index')
    ap.add_argument('--cmd-counts', action='store_true',
                    help='print each recorded frame\'s command count as a replay walks it '
                         '(state carried across frames, as aurora\'s adapter does), then exit: '
                         'this is how a frame-relative command index becomes a --max-cmds value')
    args = ap.parse_args()

    frm, to, frames, mem = sw.load(args.capture)
    if args.cmd_counts:
        st = sw.Stream()
        per = []
        for fi, fr in enumerate(frames):
            stream = b''.join(fr['chunks'])
            i = cmds = 0
            while i < len(stream):
                cmds += 1
                cmd = stream[i]
                if cmd == 0x00:
                    i += 1
                elif cmd == 0x08:
                    st.apply_cp(stream[i + 1], struct.unpack_from('>I', stream, i + 2)[0])
                    i += 6
                elif cmd == 0x10:
                    words = (stream[i + 1] << 8 | stream[i + 2]) + 1
                    i += 5 + words * 4
                elif cmd in (0x20, 0x28, 0x30, 0x38):
                    i += 5
                elif cmd == 0x40:
                    i += 9
                elif cmd in (0x44, 0x48):
                    i += 1
                elif cmd == 0x61:
                    i += 5
                elif 0x80 <= cmd <= 0xBF:
                    fmt = cmd & 7
                    vcnt = struct.unpack_from('>H', stream, i + 1)[0]
                    vs = st.vtx_size(fmt)
                    if vs == 0 or i + 3 + vcnt * vs > len(stream):
                        print(f'  frame index {fi} (guest {fr["frame"]}): desync at byte {i}')
                        break
                    i += 3 + vcnt * vs
                else:
                    print(f'  frame index {fi} (guest {fr["frame"]}): unknown 0x{cmd:02X} at {i}')
                    break
            per.append(cmds)
            print(f'  frame index {fi} (guest {fr["frame"]:5d}): {cmds:6d} commands, '
                  f'{len(stream):8d} bytes')
        run = 0
        print('  cumulative from frame index 1 (a --start-at 1 replay):')
        for fi in range(1, len(frames)):
            run += per[fi]
            print(f'    through frame index {fi} (guest {frames[fi]["frame"]}): '
                  f'{run:7d} commands')
        return 0
    print(f'capture frames {frm}..{to}, {len(frames)} recorded; target frame index {args.frame}')
    if not (0 <= args.frame < len(frames)):
        print(f'no frame index {args.frame}')
        return 1

    st = sw.Stream()
    xf = {}
    bp = {}
    draws = []
    copies = []
    base_cmd = 0          # commands in frames [first_frame, target)
    cmds = 0
    errors = []
    last_cm = None
    for fi in range(args.frame + 1):
        stream = b''.join(frames[fi]['chunks'])
        target = (fi == args.frame)
        if target:
            base_cmd = cmds
        i = 0
        while i < len(stream):
            cmds += 1
            cmd = stream[i]
            if cmd == 0x00:
                i += 1
            elif cmd == 0x08:
                st.apply_cp(stream[i + 1], struct.unpack_from('>I', stream, i + 2)[0])
                i += 6
            elif cmd == 0x10:
                words = (stream[i + 1] << 8 | stream[i + 2]) + 1
                base = (stream[i + 3] << 8 | stream[i + 4])
                for w in range(words):
                    xf[base + w] = struct.unpack_from('>I', stream, i + 5 + w * 4)[0]
                i += 5 + words * 4
            elif cmd in (0x20, 0x28, 0x30, 0x38):
                i += 5
            elif cmd == 0x40:
                errors.append(f'CALL_DL at {i} (frame index {fi})')
                i += 9
            elif cmd in (0x44, 0x48):
                i += 1
            elif cmd == 0x61:
                word = struct.unpack_from('>I', stream, i + 1)[0]
                reg, val = word >> 24, word & 0xFFFFFF
                bp[reg] = val
                if target and args.state_every and reg in (0x00, 0x40, 0x41):
                    print(f'  @cmd {cmds - base_cmd:7d} BP 0x{reg:02X} = 0x{val:06X}'
                          + (f'  (moved: tev {tev_stages(val)})' if reg == 0x00 else ''))
                if target and reg == 0x52:
                    b4b = bp.get(0x4B, 0)
                    dst = 0x80000000 | ((b4b & 0xFFFFFF) << 5)
                    c = dict(cmd=cmds - base_cmd, dst=dst,
                             fmt=(b4b >> 24) & 0x7,
                             x0=bp.get(0x49, 0) & 0x3FF, y0=(bp.get(0x49, 0) >> 10) & 0x3FF,
                             x1=bp.get(0x4A, 0) & 0x3FF, y1=(bp.get(0x4A, 0) >> 10) & 0x3FF,
                             pitch=bp.get(0x4D, 0) & 0x3FF, val=val)
                    copies.append(c)
                    if args.copies:
                        print(f'  COPY @cmd {c["cmd"]:7d} src ({c["x0"]},{c["y0"]})..'
                              f'({c["x1"]},{c["y1"]}) dst 0x{dst:08X} pitch {c["pitch"]} '
                              f'copyfmt {c["fmt"]} exec=0x{val:06X} '
                              f'clear={(val >> 11) & 1} display={(val >> 14) & 1}')
                i += 5
            elif 0x80 <= cmd <= 0xBF:
                fmt = cmd & 7
                vcnt = struct.unpack_from('>H', stream, i + 1)[0]
                vs = st.vtx_size(fmt)
                if vs == 0:
                    errors.append(f'draw at {i} has vtxsize 0 (frame index {fi})')
                    break
                total = 3 + vcnt * vs
                if i + total > len(stream):
                    errors.append(f'draw at {i} runs past the stream (frame index {fi})')
                    break
                if target:
                    d = dict(idx=len(draws), cmd=cmds - base_cmd, off=i, fmt=fmt, vcnt=vcnt,
                             vs=vs, payload=i + 3)
                    d['tev'] = tev_stages(bp.get(0x00, 0))
                    d['cmode0'] = bp.get(0x41)
                    d['zmode'] = bp.get(0x40)
                    d['tref'] = bp.get(0x28)
                    d['img0'] = [bp.get(0x88), bp.get(0x89)]
                    d['img3'] = [bp.get(0x94), bp.get(0x95)]
                    d['scissor'] = (bp[0x20], bp[0x21]) if (0x20 in bp and 0x21 in bp) else None
                    d['viewport'] = [f32(xf[a]) if a in xf else float('nan')
                                     for a in range(0x101A, 0x1020)]
                    d['copies'] = list(copies)
                    cnt, typ, frac = st.fmt[fmt & 7][sw.ATTR_CLR0]
                    d['clr0'] = None
                    if st.desc[sw.ATTR_CLR0] == 1:
                        off = st.attr_offset(fmt, sw.ATTR_CLR0)
                        n = st.attr_size(fmt, sw.ATTR_CLR0)
                        d['clr0'] = stream[i + 3 + off:i + 3 + off + n].hex()
                    draws.append(d)
                i += total
            else:
                errors.append(f'unknown opcode 0x{cmd:02X} at {i} (frame index {fi})')
                break

    if not args.copies:
        lo = args.draws if args.draws >= 0 else max(0, len(draws) - args.last) if args.last else 0
        hi = args.to_draw if args.to_draw >= 0 else len(draws) - 1
        print(f'frame index {args.frame} = guest {frames[args.frame]["frame"]}: '
              f'{len(draws)} draw(s), {len(copies)} EFB copy command(s), '
              f'{len(errors)} error(s)')
        for c in copies:
            print(f'  COPY @cmd {c["cmd"]:7d} src ({c["x0"]},{c["y0"]})..({c["x1"]},{c["y1"]}) '
                  f'dst 0x{c["dst"]:08X} pitch {c["pitch"]} copyfmt {c["fmt"]} '
                  f'clear={(c["val"] >> 11) & 1} display={(c["val"] >> 14) & 1}')
        print(f'draws {lo}..{min(hi, len(draws) - 1)}:')
        for n in range(lo, min(hi, len(draws) - 1) + 1):
            dump_draw(n, draws[n])
    for e in errors[:5]:
        print('  ERROR', e)
    return 0


if __name__ == '__main__':
    sys.exit(main())
