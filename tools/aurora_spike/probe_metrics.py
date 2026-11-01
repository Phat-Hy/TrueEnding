"""Probe-copy metric for handover 5c.46 AP-BM: mean luma and gradient energy of a PPM.

    python tools/aurora_spike/probe_metrics.py <ppm> [<ppm> ...]

Same definitions as logs_ap/sharpness.py (mean |dx| + |dy| on luma; lower = blurrier), so the numbers
are comparable with AP-BJ's table: the composite probe must move from 86.98 / 20.889 towards the
layer's 43.16 / 1.123 (logs_ap/bk_layer_2801.ppm).
"""
import sys

import numpy as np

sys.path.insert(0, 'tools/aurora_spike')
from align_matrix import load_ppm  # noqa: E402


def stats(img):
    f = img.astype(np.float64)
    luma = 0.299 * f[..., 0] + 0.587 * f[..., 1] + 0.114 * f[..., 2]
    gx = np.abs(np.diff(luma, axis=1)).mean()
    gy = np.abs(np.diff(luma, axis=0)).mean()
    return f.reshape(-1, 3).mean(axis=0), luma.mean(), gx + gy


for path in sys.argv[1:]:
    im = load_ppm(path)
    rgb, l, grad = stats(im)
    print(f'{path:40s} {im.shape[1]}x{im.shape[0]}  mean=({rgb[0]:6.2f},{rgb[1]:6.2f},{rgb[2]:6.2f}) '
          f'luma={l:6.2f}  gradient={grad:7.3f}')
