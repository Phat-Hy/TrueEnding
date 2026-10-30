"""Camera probe: what the CAPTURE says the transform is for one draw (AP-AO).

streamwalk.py walks a frame and decodes one vertex; this prints the state that turns that
vertex into a screen position, so the "camera" question (AP-AN 12e) can be answered from the
stream alone:

  * XF position-matrix words 0x0000..0x0077 decoded the way aurora's copy_xf_data does
    (10 matrices x 12 words: 3 rows x 4 columns, row-major, transposed at use);
  * the projection (XF 0x1020..0x1026) and the viewport/scissor (XF 0x101A..0x101F,
    BP 0x20/0x21/0x59 with GX's +342 view bias removed);
  * CP 0x30 (matrix index A) -> pn matrix slot = (value & 0x3F) / 3;
  * the first vertex's POS through that matrix and the projection -> clip -> NDC.

Usage:
    camera.py <capture> --frame 6 --draw 0 [--verts 3] [--top 12]
    camera.py <capture> --frame 6 --top 12          # just the draw census
"""
import argparse
import struct
import sys

import streamwalk as sw


def f32(word):
    return struct.unpack('>f', struct.pack('>I', word))[0]


def array_elem_size(st, fmt, attr):
    """Bytes one ARRAY element occupies (not the index width): the size the array holds.

    streamwalk.Stream.attr_size() answers "how wide is this attribute in the vertex payload",
    which for INDEX8/INDEX16 is the index width (1 or 2). The element it indexes is sized by
    the VAT entry instead, and the array stride the guest declares is that element size.
    """
    cnt, typ, frac = st.fmt[fmt & 7][attr]
    if attr == sw.ATTR_POS:
        return (3 if cnt & 1 else 2) * sw.elem_size(typ)
    if attr == sw.ATTR_NRM:
        return (9 if cnt == 2 else 3) * sw.elem_size(typ)
    if attr in (sw.ATTR_CLR0, sw.ATTR_CLR1):
        return 2 if (typ & 7) in (0, 3) else (3 if (typ & 7) in (1, 4) else 4)
    return (2 if cnt & 1 else 1) * sw.elem_size(typ)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('capture')
    ap.add_argument('--frame', type=int, default=0)
    ap.add_argument('--draw', type=int, default=None)
    ap.add_argument('--verts', type=int, default=3)
    ap.add_argument('--top', type=int, default=0, help='print the top N draws by vertex count')
    ap.add_argument('--matrices', type=int, default=4, help='print this many pos matrices')
    args = ap.parse_args()

    frm, to, frames, mem = sw.load(args.capture)
    print(f'capture frames {frm}..{to}, {len(frames)} recorded')
    if args.frame >= len(frames):
        print(f'no recorded frame index {args.frame} (0..{len(frames) - 1})')
        return 1
    fr = frames[args.frame]
    stream = b''.join(fr['chunks'])
    print(f"frame index {args.frame} = guest frame {fr['frame']}: {len(stream)} bytes, "
          f"{len(fr['copies'])} copy record(s)")

    st = sw.Stream()
    xf = {}
    cp = {}
    bp = {}
    draws = []
    i = 0
    cmds = 0
    errors = []
    while i < len(stream):
        cmds += 1
        cmd = stream[i]
        if cmd == 0x00:
            i += 1
        elif cmd == 0x08:
            reg = stream[i + 1]
            val = struct.unpack_from('>I', stream, i + 2)[0]
            cp[reg] = val
            st.apply_cp(reg, val)
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
            errors.append(f'CALL_DL at {i}')
            i += 9
        elif cmd in (0x44, 0x48):
            i += 1
        elif cmd == 0x61:
            word = struct.unpack_from('>I', stream, i + 1)[0]
            bp[word >> 24] = word & 0xFFFFFF
            i += 5
        elif 0x80 <= cmd <= 0xBF:
            fmt = cmd & 7
            vcnt = struct.unpack_from('>H', stream, i + 1)[0]
            vs = st.vtx_size(fmt)
            if vs == 0:
                errors.append(f'draw at {i} has vtxsize 0')
                break
            total = 3 + vcnt * vs
            if i + total > len(stream):
                errors.append(f'draw at {i} runs past the stream')
                break
            draws.append(dict(off=i, fmt=fmt, vcnt=vcnt, vs=vs,
                              pnm=(cp.get(0x30, 0) & 0x3F) // 3,
                              payload=i + 3))
            i += total
            if args.draw is not None and len(draws) > args.draw:
                break
        else:
            errors.append(f'unknown opcode 0x{cmd:02X} at {i}')
            break

    print(f'walked {i} bytes, {cmds} commands, {len(draws)} draw(s), '
          f'{sum(d["vcnt"] for d in draws)} vertices, {len(errors)} error(s)')
    for e in errors[:5]:
        print('  ERROR', e)

    def proj():
        vals = [f32(xf[a]) if a in xf else float('nan') for a in range(0x1020, 0x1027)]
        return vals

    p = proj()
    print(f'projection XF 0x1020..0x1026 = '
          f'{p[0]:.6f} {p[1]:.6f} {p[2]:.6f} {p[3]:.6f} {p[4]:.6f} {p[5]:.6f} {p[6]:.6f}')
    print(f'  type field = {p[6]:.0f} ({"PERSPECTIVE" if p[6] == 0 else "ORTHOGRAPHIC"})')
    vp = [f32(xf[a]) if a in xf else float('nan') for a in range(0x101A, 0x1020)]
    print(f'viewport XF 0x101A..0x101F = {[round(v, 3) for v in vp]}')
    print(f'CP 0x30 matrix index A = 0x{cp.get(0x30, 0):08X} -> slot {(cp.get(0x30, 0) & 0x3F) // 3}')
    if 0x20 in bp:
        v = bp[0x20]
        print(f'scissor BP 0x20 = 0x{v:06X} -> ({v & 0x7FF},{((v >> 12) & 0x7FF)}) '
              f'unbiased ({max(0, (v & 0x7FF) - 342)},{max(0, ((v >> 12) & 0x7FF) - 342)})')
    if 0x21 in bp:
        v = bp[0x21]
        print(f'scissor BP 0x21 = 0x{v:06X} -> ({v & 0x7FF},{((v >> 12) & 0x7FF)}) '
              f'unbiased ({max(0, (v & 0x7FF) - 342)},{max(0, ((v >> 12) & 0x7FF) - 342)})')

    for m in range(args.matrices):
        base = m * 12
        if not all((base + k) in xf for k in range(12)):
            print(f'pos matrix {m}: not written (words 0x{base:04X}..0x{base + 11:04X})')
            continue
        w = [xf[base + k] for k in range(12)]
        rows = [[f32(w[r * 4 + c]) for c in range(4)] for r in range(3)]
        print(f'pos matrix {m} (XF 0x{base:04X}):')
        for r in rows:
            print('   (%9.5f %9.5f %9.5f | %10.4f)' % tuple(r))

    if args.top:
        order = sorted(range(len(draws)), key=lambda n: -draws[n]['vcnt'])
        print(f'\ntop {args.top} draws by vertex count:')
        for n in order[:args.top]:
            d = draws[n]
            print(f'  draw {n:5d} off {d["off"]:8d} fmt {d["fmt"]} vcnt {d["vcnt"]:5d} '
                  f'vtxsize {d["vs"]} pnm {d["pnm"]}')

    if args.draw is not None:
        if args.draw >= len(draws):
            print(f'\nno draw {args.draw} ({len(draws)} walked)')
            return 0
        d = draws[args.draw]
        print(f'\n== draw {args.draw} at {d["off"]}: fmt {d["fmt"]} vcnt {d["vcnt"]} '
              f'vtxsize {d["vs"]} pnm {d["pnm"]} desc='
              + ' '.join(str(x) for x in st.desc))
        for a, name in ((sw.ATTR_POS, 'POS'), (sw.ATTR_CLR0, 'CLR0')):
            cnt, typ, frac = st.fmt[d['fmt'] & 7][a]
            print(f'   {name} desc={st.desc[a]} cnt={cnt} type={typ} frac={frac} '
                  f'size={st.attr_size(d["fmt"], a)}')
        pos_off = st.attr_offset(d['fmt'], sw.ATTR_POS)
        cnt, typ, frac = st.fmt[d['fmt'] & 7][sw.ATTR_POS]
        ncomp = 3 if cnt & 1 else 2
        elem = array_elem_size(st, d['fmt'], sw.ATTR_POS)
        stride = st.strides[sw.ATTR_POS] or elem
        m = d['pnm']
        base = m * 12
        have_mtx = all((base + k) in xf for k in range(12))
        mtx = [[f32(xf[base + r * 4 + c]) for c in range(4)] for r in range(3)] if have_mtx else None
        print(f'   POS array 0x{st.base[sw.ATTR_POS]:08X} stride {stride} '
              f'{"(indexed)" if st.desc[sw.ATTR_POS] in (2, 3) else "(direct)"}')
        for v in range(min(args.verts, d['vcnt'])):
            voff = d['payload'] + v * d['vs'] + pos_off
            if st.desc[sw.ATTR_POS] == 1:
                raw = stream[voff:voff + elem]
                vals = sw.parse_components(raw, typ, frac, ncomp)
            else:
                width = 1 if st.desc[sw.ATTR_POS] == 2 else 2
                idx = stream[voff] if width == 1 else struct.unpack_from('>H', stream, voff)[0]
                addr = st.base[sw.ATTR_POS] + idx * stride
                raw = sw.read_guest(mem, addr, elem)
                if raw is None:
                    print(f'   v{v}: idx {idx} -> 0x{addr:08X}: not mapped in the MEM plane')
                    continue
                vals = sw.parse_components(raw, typ, frac, ncomp)
            xyz = vals + [0.0] * (3 - len(vals))
            print(f'   v{v}: raw {raw.hex()} -> POS ({xyz[0]:.5f}, {xyz[1]:.5f}, {xyz[2]:.5f})')
            if mtx is None:
                continue
            eye = [sum(xyz[c] * mtx[r][c] for c in range(3)) + mtx[r][3] for r in range(3)]
            # aurora's use: vec4(pos,1) * postex_mtx -> row-vector convention already.
            pr = p
            if pr[6] == 0.0 and abs(pr[5]) > 1e-9:  # perspective: x' = x*pa, w' = z*pc + pd
                cx = eye[0] * pr[0] + pr[3]
                cy = eye[1] * pr[2] + pr[4]
                cw = eye[2] * (-1.0 if pr[5] < 0 else 1.0) if False else None
            # Hardware perspective: x_clip = x*pa + pb, y_clip = y*pc + pd, z_clip = z*pe + pf,
            # w_clip = -z (GX's own convention), so NDC = clip / w.
            cx = eye[0] * pr[0] + pr[1]
            cy = eye[1] * pr[2] + pr[3]
            cz = eye[2] * pr[4] + pr[5]
            cw = -eye[2]
            if pr[6] != 0.0:  # orthographic
                cw = 1.0
            if abs(cw) < 1e-12:
                print('       eye (%9.4f %9.4f %9.4f) -> clip w = 0 (degenerate)' % tuple(eye))
                continue
            print('       eye (%9.4f %9.4f %9.4f) -> clip (%9.4f %9.4f %9.4f) w %9.4f '
                  '-> NDC (%7.4f, %7.4f, %7.4f)'
                  % (eye[0], eye[1], eye[2], cx, cy, cz, cw, cx / cw, cy / cw, cz / cw))
    return 0


if __name__ == '__main__':
    sys.exit(main())
