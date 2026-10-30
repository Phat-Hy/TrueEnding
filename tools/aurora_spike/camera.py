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


def draw_boxes(stream, mem, st, d):
    """clip-space and w-divided NDC bbox of one draw's vertices, plus the outside count.

    The arithmetic mirrors the layer's own dump (`recomp/gfx_d3d11.c` TLS_BATCH_DUMP prints
    `ndc=[clip x, clip y]` and `wNDC=[x/w, y/w, z/w]`), and aurora's convention: the pos
    matrix is applied row-vector style (`sum_c pos[c]*m[r][c] + m[r][3]`), then
    `x_c = x*pa+pb, y_c = y*pc+pd, z_c = z*pe+pf`, and for a perspective projection
    `w = -z_eye` (`pr[6] == 0`), for an orthographic one `w = 1`.
    Returns None when this draw's state is not in the captured window.
    """
    pf, mw = d['pf'], d['mw']
    if pf is None or mw is None or any(v is None for v in pf) or any(v is None for v in mw):
        return None
    pr = pf
    mtx = [[f32(mw[r * 4 + c]) for c in range(4)] for r in range(3)]
    typ, frac, ncomp = d['ptype'], d['pfrac'], d['ncomp']
    elem, stride = d['pelem'], d['pstride']
    pos_off = d['poff']
    indexed = d['posdesc'] in (2, 3)
    width = 1 if d['posdesc'] == 2 else 2
    base = d['pbase']
    ortho = pr[6] != 0.0
    lo = [1e9, 1e9, 1e9]
    hi = [-1e9, -1e9, -1e9]
    nlo = [1e9, 1e9, 1e9]
    nhi = [-1e9, -1e9, -1e9]
    outside = 0
    n = 0
    for v in range(d['vcnt']):
        voff = d['payload'] + v * d['vs'] + pos_off
        if not indexed:
            raw = stream[voff:voff + elem]
            if len(raw) < elem:
                break
        else:
            if width == 1:
                idx = stream[voff]
            else:
                idx = struct.unpack_from('>H', stream, voff)[0]
            raw = sw.read_guest(mem, base + idx * stride, elem)
            if raw is None:
                continue
        vals = sw.parse_components(raw, typ, frac, ncomp)
        xyz = vals + [0.0] * (3 - len(vals))
        eye = [sum(xyz[c] * mtx[r][c] for c in range(3)) + mtx[r][3] for r in range(3)]
        cx = eye[0] * pr[0] + pr[1]
        cy = eye[1] * pr[2] + pr[3]
        cz = eye[2] * pr[4] + pr[5]
        cw = 1.0 if ortho else -eye[2]
        n += 1
        for k, val in enumerate((cx, cy, cz)):
            if val < lo[k]:
                lo[k] = val
            if val > hi[k]:
                hi[k] = val
        if abs(cw) < 1e-9:
            outside += 1
            continue
        nx, ny, nz = cx / cw, cy / cw, cz / cw
        for k, val in enumerate((nx, ny, nz)):
            if val < nlo[k]:
                nlo[k] = val
            if val > nhi[k]:
                nhi[k] = val
        if nx < -1.0 or nx > 1.0 or ny < -1.0 or ny > 1.0 or nz < -1.0 or nz > 1.0:
            outside += 1
    if n == 0:
        return None
    return dict(n=n, lo=lo, hi=hi, nlo=nlo, nhi=nhi, outside=outside, ortho=ortho, span_w=hi[0] - lo[0])


def ndc_census(stream, mem, st, draws, ntop):
    """Whole-frame NDC census, the capture-side twin of the layer's TLS_BATCH_DUMP."""
    boxes = []
    unmeasurable = 0
    for k, d in enumerate(draws):
        b = draw_boxes(stream, mem, st, d)
        if b is None:
            unmeasurable += 1
            continue
        b['idx'] = k
        b['vcnt'] = d['vcnt']
        boxes.append(b)
    print(f'\n=== NDC census over {len(draws)} draw(s): {len(boxes)} measurable, '
          f'{unmeasurable} with state outside the window ===')
    if not boxes:
        return
    nv = sum(b['n'] for b in boxes)
    out = sum(b['outside'] for b in boxes)
    print(f'vertices measured {nv}, outside the clip volume {out} ({100.0 * out / nv:.1f} %), '
          f'fully-outside draws {sum(1 for b in boxes if b["outside"] == b["n"])}, '
          f'ortho draws {sum(1 for b in boxes if b["ortho"])}, perspective draws '
          f'{sum(1 for b in boxes if not b["ortho"])}')
    lo = [min(b['lo'][k] for b in boxes) for k in range(3)]
    hi = [max(b['hi'][k] for b in boxes) for k in range(3)]
    nlo = [min(b['nlo'][k] for b in boxes) for k in range(3)]
    nhi = [max(b['nhi'][k] for b in boxes) for k in range(3)]
    print('union clip  x[%.2f..%.2f] y[%.2f..%.2f] z[%.2f..%.2f]' % (lo[0], hi[0], lo[1], hi[1], lo[2], hi[2]))
    print('union wNDC  x[%.2f..%.2f] y[%.2f..%.2f] z[%.2f..%.2f]' % (nlo[0], nhi[0], nlo[1], nhi[1], nlo[2], nhi[2]))
    if ntop:
        order = sorted(boxes, key=lambda b: -b['vcnt'])
        print(f'top {ntop} draws by vertex count (compare against the layer\'s TLS_BATCH_DUMP lines):')
        for b in order[:ntop]:
            print('  draw %5d vtx %5d %s clip x[%.2f..%.2f] y[%.2f..%.2f] '
                  'wNDC x[%.2f..%.2f] y[%.2f..%.2f] outside %d/%d'
                  % (b['idx'], b['vcnt'], 'ortho ' if b['ortho'] else 'persp ',
                     b['lo'][0], b['hi'][0], b['lo'][1], b['hi'][1],
                     b['nlo'][0], b['nhi'][0], b['nlo'][1], b['nhi'][1], b['outside'], b['n']))


def check_window(frames, max_frames=0):
    """Can aurora replay this capture at all? 10-second answer, no GPU.

    aurora's adapter (aurora_replay.cpp) starts the window with EMPTY GP state and aborts on the
    first draw whose vertex format it cannot size - it does not carry state in from before
    `TLS_GX_CAPTURE_FROM`. A frame whose stream begins with a draw and no VCD/VAT write is
    therefore unreplayable, and the replay only says so after a GPU run
    (`adapter failed: draw with unknown vertex size at offset 48`, measured on
    gxcap/ao3301 frame 3294, 5c.46 AP-AO). This walks each frame from a FRESH state, exactly
    like the adapter, and reports the first failure per frame.
    """
    print(f'{"frame":>6} {"bytes":>9} {"cmds":>7} {"draws":>6} {"vtx":>7}  result')
    for fi, fr in enumerate(frames):
        if max_frames and fi >= max_frames:
            break
        stream = b''.join(fr['chunks'])
        st = sw.Stream()
        i = 0
        cmds = draws = verts = 0
        err = ''
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
                if vs == 0:
                    err = f'unreplayable: draw at {i} fmt {fmt} vcnt {vcnt} vtxsize 0'
                    break
                total = 3 + vcnt * vs
                if i + total > len(stream):
                    err = f'truncated draw at {i}'
                    break
                draws += 1
                verts += vcnt
                i += total
            else:
                err = f'unknown opcode 0x{cmd:02X} at {i}'
                break
        print(f'{fr["frame"]:>6} {len(stream):>9} {cmds:>7} {draws:>6} {verts:>7}  '
              f'{err if err else "walks clean"}')
    return 0


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('capture')
    ap.add_argument('--frame', type=int, default=0)
    ap.add_argument('--draw', type=int, default=None)
    ap.add_argument('--verts', type=int, default=3)
    ap.add_argument('--top', type=int, default=0, help='print the top N draws by vertex count')
    ap.add_argument('--matrices', type=int, default=4, help='print this many pos matrices')
    ap.add_argument('--ndc', action='store_true',
                    help='whole-frame NDC census: per-draw clip/wNDC boxes, outside counts, union')
    ap.add_argument('--ndc-top', type=int, default=0,
                    help='with --ndc, print the N biggest draws by vertex count')
    ap.add_argument('--check-window', action='store_true',
                    help='walk every recorded frame from a fresh state (as aurora\'s adapter '
                         'does) and report the first failure: tells you in 10 s whether the '
                         'capture can be replayed at all')
    args = ap.parse_args()

    frm, to, frames, mem = sw.load(args.capture)
    print(f'capture frames {frm}..{to}, {len(frames)} recorded')
    if args.frame >= len(frames):
        print(f'no recorded frame index {args.frame} (0..{len(frames) - 1})')
        return 1
    if args.check_window:
        return check_window(frames)
    fr = frames[args.frame]
    print(f"frame index {args.frame} = guest frame {fr['frame']}: "
          f"{sum(len(c) for c in fr['chunks'])} bytes, {len(fr['copies'])} copy record(s)")

    # The GP state is carried ACROSS frames, exactly as aurora's adapter does
    # (aurora_replay.cpp keeps one StreamState for the whole replay). Walking the target frame
    # alone is wrong: a frame need not re-write VCD/VAT/projection, and on the ao3301 capture
    # frame 3300 begins with a draw whose vertex format was set two frames earlier - walking it
    # in isolation reported `vtxsize 0` at byte 0 (measured, 5c.46 AP-AO).
    st = sw.Stream()
    xf = {}
    cp = {}
    bp = {}
    draws = []
    cmds = 0
    errors = []
    for fi in range(args.frame + 1):
        stream = b''.join(frames[fi]['chunks'])
        target = (fi == args.frame)
        i = 0
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
                errors.append(f'CALL_DL at {i} (frame index {fi})')
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
                    errors.append(f'draw at {i} has vtxsize 0 (frame index {fi})')
                    break
                total = 3 + vcnt * vs
                if i + total > len(stream):
                    errors.append(f'draw at {i} runs past the stream (frame index {fi})')
                    break
                if target:
                    slot = (cp.get(0x30, 0) & 0x3F) // 3
                    d = dict(off=i, fmt=fmt, vcnt=vcnt, vs=vs, pnm=slot, payload=i + 3)
                    # Snapshot the POS description and the projection/matrix AT THIS DRAW.
                    # Reading them off the final Stream state is wrong: frame 3300 mixes F32 2D
                    # elements with S16 3D geometry, so the last VAT entry decoded other draws'
                    # vertices into 1e38 clip values (measured, 5c.46 AP-AO).
                    cnt, typ, frac = st.fmt[fmt & 7][sw.ATTR_POS]
                    d['posdesc'] = st.desc[sw.ATTR_POS]
                    d['ncomp'] = 3 if cnt & 1 else 2
                    d['ptype'] = typ
                    d['pfrac'] = frac
                    d['pelem'] = (3 if cnt & 1 else 2) * sw.elem_size(typ)
                    d['poff'] = st.attr_offset(fmt, sw.ATTR_POS)
                    d['pstride'] = st.strides[sw.ATTR_POS] or d['pelem']
                    d['pbase'] = st.base[sw.ATTR_POS]
                    d['pf'] = [f32(xf[a]) if a in xf else None for a in range(0x1020, 0x1027)]
                    d['mw'] = [xf.get(slot * 12 + k) for k in range(12)]
                    draws.append(d)
                i += total
                if target and args.draw is not None and len(draws) > args.draw:
                    break
            else:
                errors.append(f'unknown opcode 0x{cmd:02X} at {i} (frame index {fi})')
                break
        if target and args.draw is not None and len(draws) > args.draw:
            break
    stream = b''.join(fr['chunks'])
    target_off = i

    print(f'walked {cmds} commands and {target_off}/{len(stream)} bytes of the target frame, '
          f'{len(draws)} draw(s), {sum(d["vcnt"] for d in draws)} vertices, {len(errors)} error(s)')
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

    if args.ndc:
        ndc_census(stream, mem, st, draws, args.ndc_top)

    if args.draw is not None:
        if args.draw >= len(draws):
            print(f'\nno draw {args.draw} ({len(draws)} walked)')
            return 0
        d = draws[args.draw]
        print(f'\n== draw {args.draw} at {d["off"]}: fmt {d["fmt"]} vcnt {d["vcnt"]} '
              f'vtxsize {d["vs"]} pnm {d["pnm"]}')
        for a, name in ((sw.ATTR_POS, 'POS'), (sw.ATTR_CLR0, 'CLR0')):
            if a == sw.ATTR_POS:
                print(f'   POS desc={d["posdesc"]} cnt={"3" if d["ncomp"] == 3 else "2"} '
                      f'type={d["ptype"]} frac={d["pfrac"]} size={d["pelem"]} '
                      f'(array element; the payload holds 1-2 index bytes)')
                continue
            # CLR0 has no per-draw snapshot; report the draw's own vertex format from the
            # snapshot of the POS entry plus the final VAT for the rest (documented limit).
            cnt, typ, frac = st.fmt[d['fmt'] & 7][a]
            print(f'   {name} desc={st.desc[a]} cnt={cnt} type={typ} frac={frac} '
                  f'size={st.attr_size(d["fmt"], a)} (final state: not snapshotted)')
        pos_off = d['poff']
        typ, frac, ncomp = d['ptype'], d['pfrac'], d['ncomp']
        elem, stride = d['pelem'], d['pstride']
        mw = d['mw']
        have_mtx = mw is not None and all(v is not None for v in mw)
        mtx = [[f32(mw[r * 4 + c]) for c in range(4)] for r in range(3)] if have_mtx else None
        p = d['pf'] if d['pf'] is not None else [float('nan')] * 7
        print(f'   POS array 0x{d["pbase"]:08X} stride {stride} '
              f'{"(indexed)" if d["posdesc"] in (2, 3) else "(direct)"}')
        print('   projection at this draw: ' + ' '.join(
            ('nan' if v is None else f'{v:.6f}') for v in p))
        for v in range(min(args.verts, d['vcnt'])):
            voff = d['payload'] + v * d['vs'] + pos_off
            if d['posdesc'] == 1:
                raw = stream[voff:voff + elem]
                vals = sw.parse_components(raw, typ, frac, ncomp)
            else:
                width = 1 if d['posdesc'] == 2 else 2
                idx = stream[voff] if width == 1 else struct.unpack_from('>H', stream, voff)[0]
                addr = d['pbase'] + idx * stride
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
