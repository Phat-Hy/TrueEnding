"""Mean |d| matrix between the layer's shots and aurora's live readbacks of ONE launch.

    python tools/aurora_spike/align_matrix.py --layer-frames 2794,2795 --layer-offset 64 \
        --aurora-frames 2795,2797 [--layer-dir build/recomp] [--aurora-dir build/recomp] \
        [--out png] [--tol 8]

Both sides are named by GUEST frame. The layer's screenshot files carry the PRESENT counter, which
runs 64 ahead at the Chapter-1 cave (`d3d11_screenshot_<guest+64>.ppm`, AP-AO), so `--layer-offset`
is the mapping and it is printed with the numbers rather than assumed silently.

Every cell is one (layer frame, aurora frame) pair differenced on the max channel after resizing the
1280x720 layer image to the 640x448 aurora readback with BOX (compare.py's rule: it exactly inverts
the 2x EFB stretch). The diagonal is the same-instant pair; the per-row minimum says which aurora
frame actually corresponds to a layer frame.

WHY THIS IS THE ALIGNMENT INSTRUMENT (handover 5c.46 AP-BD): the layer's own neighbouring frames at
the gate's content moment differ by 33-48 mean |d|, so a one-column table cannot say whether a
difference is the renderer or the frame. The full matrix can: a diagonal minimum means the frames are
aligned and the residual IS the renderer; an off-diagonal minimum measures the offset instead of
assuming it. The tool prints the layer's own adjacent-frame spread (the noise floor any renderer
claim has to beat) and aurora's own adjacent-frame spread (whether aurora's frames move at all).

No gate implications: it only reads PPMs and prints numbers.
"""
import os
import sys

import numpy as np


def load_ppm(path):
    data = open(path, 'rb').read()
    if data[:4] == b'\x89PNG':
        from PIL import Image
        return np.asarray(Image.open(path).convert('RGB'))
    if data[:2] != b'P6':
        raise SystemExit(f'{path}: not a binary PPM/PNG')
    fields, pos = [], 2
    while len(fields) < 3:
        while data[pos:pos + 1].isspace():
            pos += 1
        if data[pos:pos + 1] == b'#':
            while data[pos:pos + 1] != b'\n':
                pos += 1
            continue
        start = pos
        while not data[pos:pos + 1].isspace():
            pos += 1
        fields.append(int(data[start:pos]))
    pos += 1
    w, h, maxv = fields
    buf = np.frombuffer(data[pos:pos + w * h * 3], dtype=np.uint8)
    if buf.size != w * h * 3:
        raise SystemExit(f'{path}: truncated pixel data')
    return buf.reshape(h, w, 3)


def mean_abs(a, b):
    if a.shape != b.shape:
        try:
            from PIL import Image
        except ModuleNotFoundError:
            raise SystemExit('align_matrix.py needs Pillow for the BOX resize (layer shots are 1280x720, the '
                             'EFB readback is 640x448): run it with the bundled python that has Pillow, or '
                             'install Pillow.')

        b = np.asarray(Image.fromarray(b).resize((a.shape[1], a.shape[0]), Image.BOX))
    d = np.abs(a.astype(np.int16) - b.astype(np.int16)).max(axis=2)
    return float(d.mean()), float((d > 8).sum()) / d.size, d


def luma(img):
    f = img.astype(np.float64)
    return float((0.299 * f[..., 0] + 0.587 * f[..., 1] + 0.114 * f[..., 2]).mean())


def parse(argv):
    o = {'layer_frames': None, 'aurora_frames': None, 'layer_offset': 0,
         'layer_dir': 'build/recomp', 'aurora_dir': 'build/recomp', 'out': None, 'tol': 8}
    i = 1
    while i < len(argv):
        a = argv[i]
        if a == '--layer-frames':
            o['layer_frames'] = argv[i + 1]; i += 2; continue
        if a == '--aurora-frames':
            o['aurora_frames'] = argv[i + 1]; i += 2; continue
        if a == '--layer-offset':
            o['layer_offset'] = int(argv[i + 1]); i += 2; continue
        if a == '--layer-dir':
            o['layer_dir'] = argv[i + 1]; i += 2; continue
        if a == '--aurora-dir':
            o['aurora_dir'] = argv[i + 1]; i += 2; continue
        if a == '--out':
            o['out'] = argv[i + 1]; i += 2; continue
        if a == '--tol':
            o['tol'] = int(argv[i + 1]); i += 2; continue
        i += 1
    return o


def main(argv):
    o = parse(argv)
    if not o['layer_frames'] or not o['aurora_frames']:
        print(__doc__)
        return 1
    lf = [int(x) for x in o['layer_frames'].split(',') if x.strip()]
    af = [int(x) for x in o['aurora_frames'].split(',') if x.strip()]
    limgs, aimgs = {}, {}
    for f in lf:
        p = os.path.join(o['layer_dir'], f'd3d11_screenshot_{f + o["layer_offset"]}.ppm')
        if os.path.exists(p):
            limgs[f] = load_ppm(p)
        else:
            print(f'layer guest {f}: missing {p}')
    for f in af:
        p = os.path.join(o['aurora_dir'], f'aurora_live_{f}.ppm')
        if os.path.exists(p):
            aimgs[f] = load_ppm(p)
        else:
            print(f'aurora guest {f}: missing {p}')
    if not limgs or not aimgs:
        print(f'no images: layer={sorted(limgs)} aurora={sorted(aimgs)}')
        return 2

    print(f'layer images  : guest -> present = guest + {o["layer_offset"]}')
    for f, im in limgs.items():
        print(f'  {f}: mean=({im[...,0].mean():6.2f},{im[...,1].mean():6.2f},{im[...,2].mean():6.2f}) '
              f'luma={luma(im):6.2f}')
    print('aurora readback:')
    for f, im in aimgs.items():
        print(f'  {f}: mean=({im[...,0].mean():6.2f},{im[...,1].mean():6.2f},{im[...,2].mean():6.2f}) '
              f'luma={luma(im):6.2f}')

    lf, af = sorted(limgs), sorted(aimgs)
    cells = {}
    print('\nmean |d| matrix   rows = layer guest frame, cols = aurora readback guest frame')
    print('            ' + ''.join(f'{a:>9d}' for a in af))
    for l in lf:
        row = []
        for a in af:
            m, ch, d = mean_abs(aimgs[a], limgs[l])
            cells[(l, a)] = (m, ch, d)
            row.append(f'{m:9.2f}')
        print(f'  L{l:<8d}' + ''.join(row))
    print('\nchanged > 8 (%)   same axes')
    print('            ' + ''.join(f'{a:>9d}' for a in af))
    for l in lf:
        print(f'  L{l:<8d}' + ''.join(f'{100 * cells[(l, a)][1]:9.2f}' for a in af))

    print('\nper layer row: best aurora frame (alignment), diagonal value')
    for l in lf:
        best = min(af, key=lambda a: cells[(l, a)][0])
        diag = f'{cells[(l, l)][0]:.2f}' if l in af else 'n/a'
        flag = '' if best == l else '   <-- off-diagonal'
        print(f'  L{l}: best A{best} ({cells[(l, best)][0]:.2f})  diagonal {diag}{flag}')

    if len(lf) > 1:
        adj = [mean_abs(limgs[lf[i]], limgs[lf[i + 1]])[0] for i in range(len(lf) - 1)]
        print(f'\nlayer adjacent-frame spread (L i vs L i+1): min {min(adj):.2f} max {max(adj):.2f}')
    if len(af) > 1:
        aadj = [mean_abs(aimgs[af[i]], aimgs[af[i + 1]])[0] for i in range(len(af) - 1)]
        print(f'aurora adjacent-frame spread (A i vs A i+1): min {min(aadj):.2f} max {max(aadj):.2f}')

    if o['out']:
        from PIL import Image
        rows = []
        for l in lf:
            row = []
            for a in af:
                d = np.clip(cells[(l, a)][2] * 8, 0, 255).astype(np.uint8)
                row.append(np.stack([d] * 3, axis=2))
            rows.append(np.concatenate(row, axis=1))
        Image.fromarray(np.concatenate(rows, axis=0)).save(o['out'])
        print(f'wrote {o["out"]} (rows = layer {lf}, cols = aurora {af}, 8x |d|)')
    return 0


if __name__ == '__main__':
    sys.exit(main(sys.argv))
