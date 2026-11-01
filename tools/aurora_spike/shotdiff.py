"""What does one batch paint? Difference two shots of the same present.

    python tools/aurora_spike/shotdiff.py <shot_A> <shot_B> [<third image>]

Built for handover 5c.46 AP-BN: `TLS_BATCH_CUTOFF=76|77` screenshots the same present
(guest 2801 = present 2865) with and without batch b76, so the difference of the two images
IS that batch's own paint in the layer's chain - the one measurement AP-BM named and left.
Both sides are 1280x720 shots of the same run length with the same input script, so no
resampling enters the comparison.

Reports: each image's mean RGB / luma / gradient (gradient = mean |dx| + |dy| on luma, the
same definition as tools/aurora_spike/probe_metrics.py and logs_ap/sharpness.py, so the
numbers are comparable with AP-BJ's table); the difference's mean |d|, its pixel-coverage at
three thresholds, a 4x4 grid of where it lands, and whether it covers the whole frame (a
full-screen replace pass) or a region. With a third path it also reports each image against
that one, which is how a cut run is tied back to the uncut reference.

Writes `<shot_B>.diff.ppm` (4x amplified luma difference) next to the second image.
"""
import sys

import numpy as np

sys.path.insert(0, 'tools/aurora_spike')
from align_matrix import load_ppm  # noqa: E402


def luma(img):
    f = img.astype(np.float64)
    return 0.299 * f[..., 0] + 0.587 * f[..., 1] + 0.114 * f[..., 2]


def stats(img):
    f = img.astype(np.float64)
    l = luma(img)
    return (f.reshape(-1, 3).mean(axis=0), l.mean(),
            np.abs(np.diff(l, axis=1)).mean() + np.abs(np.diff(l, axis=0)).mean())


def describe(name, img):
    rgb, l, g = stats(img)
    print(f'{name:40s} {img.shape[1]}x{img.shape[0]}  mean=({rgb[0]:6.2f},{rgb[1]:6.2f},{rgb[2]:6.2f}) '
          f'luma={l:6.2f}  gradient={g:7.3f}')


a_path, b_path = sys.argv[1], sys.argv[2]
third_path = sys.argv[3] if len(sys.argv) > 3 else None

a = load_ppm(a_path).astype(np.int16)   # WITHOUT the batch
b = load_ppm(b_path).astype(np.int16)   # WITH the batch
assert a.shape == b.shape, (a.shape, b.shape)

print('== the two states ==')
describe(f'A {a_path.split(chr(92))[-1]}', a)
describe(f'B {b_path.split(chr(92))[-1]}', b)
c = None
if third_path:
    c = load_ppm(third_path).astype(np.int16)
    describe(f'C {third_path.split(chr(92))[-1]}', c)

d = np.abs(b - a)
dl = np.abs(luma(b) - luma(a))
pmax = d.max(axis=2)
h, w = pmax.shape
print('\n== what the batch paints (B - A) ==')
print(f'mean |d| per channel : ({d[..., 0].mean():6.2f}, {d[..., 1].mean():6.2f}, {d[..., 2].mean():6.2f})')
print(f'mean |d| on luma     : {dl.mean():6.2f}      max {dl.max():.1f}')
print(f'pixels |d|>1 / >8 / >32 : {(pmax > 1).mean() * 100:5.2f} % / '
      f'{(pmax > 8).mean() * 100:5.2f} % / {(pmax > 32).mean() * 100:5.2f} %')

print('\n== where (4x4 grid of the frame, mean |d| on luma) ==')
gy, gx = h // 4, w // 4
for row in range(4):
    print('  ' + ' '.join(f'{dl[row * gy:(row + 1) * gy, col * gx:(col + 1) * gx].mean():6.2f}'
                          for col in range(4)))

print('\n== coverage (rows/cols whose mean |d| > 2) ==')
rows = np.where(dl.mean(axis=1) > 2.0)[0]
cols = np.where(dl.mean(axis=0) > 2.0)[0]
if len(rows):
    print(f'  rows {rows.min()}..{rows.max()} of {h}  ({len(rows)} / {h} rows)')
    print(f'  cols {cols.min()}..{cols.max()} of {w}  ({len(cols)} / {w} cols)')
else:
    print('  none - the two states are identical')
if c is not None:
    print('\n== each state against C (same resolution) ==')
    for name, img in (('A', a), ('B', b)):
        print(f'  {name}: mean |d| on luma {np.abs(luma(img) - luma(c)).mean():6.2f}, '
              f'pixels |d|>8 {((np.abs(img - c).max(axis=2)) > 8).mean() * 100:5.2f} %')

out = np.clip(dl * 4.0, 0, 255).astype(np.uint8)
png = b_path + '.diff.ppm'
with open(png, 'wb') as fh:
    fh.write(b'P6\n%d %d\n255\n' % (w, h))
    fh.write(np.repeat(out[:, :, None], 3, axis=2).tobytes())
print(f'\ndifference image (4x amplified) -> {png}')
