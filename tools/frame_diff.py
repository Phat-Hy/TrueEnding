"""Pixel-exact diff of two same-size frames (host PPM captures, or PNG evidence).

    python tools/frame_diff.py a.ppm b.png [--out build/recomp/cmp.png] [--tol 2]

Prints each image's mean RGB, the number of pixels that differ by more than --tol on any
channel, the largest deviation, and (with --out) writes a side-by-side PNG: a | b | |a-b|
amplified. This is the measurement used for "the page is pixel-identical" claims - a
frame-average alone hides a swapped element (5c.46 I).
"""
import sys
import numpy as np
import os

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from cmp_ref import load  # noqa: E402


def main(argv):
    args = []
    tol = 2
    out = None
    i = 1
    while i < len(argv):
        a = argv[i]
        if a == '--tol':
            tol = int(argv[i + 1]); i += 2; continue
        if a == '--out':
            out = argv[i + 1]; i += 2; continue
        args.append(a); i += 1
    if len(args) != 2:
        print(__doc__)
        return 1
    a, b = load(args[0]), load(args[1])
    if a.shape != b.shape:
        print(f'size mismatch: {args[0]} {a.shape[1]}x{a.shape[0]} vs {args[1]} {b.shape[1]}x{b.shape[0]}')
        return 2
    d = np.abs(a - b).max(axis=2)
    print(f'{args[0]}  mean={tuple(int(v) for v in a.reshape(-1, 3).mean(axis=0))}')
    print(f'{args[1]}  mean={tuple(int(v) for v in b.reshape(-1, 3).mean(axis=0))}')
    print(f'changed>{tol}: {int((d > tol).sum())} / {d.size} pixels   max={int(d.max())}  '
          f'mean|d|={d.mean():.3f}')
    if out:
        from PIL import Image
        amp = np.clip(d * 8, 0, 255).astype(np.uint8)
        vis = np.concatenate([a, b, np.stack([amp] * 3, axis=2)], axis=1).astype(np.uint8)
        Image.fromarray(vis).save(out)
        print(f'wrote {out}')
    return 0


if __name__ == '__main__':
    sys.exit(main(sys.argv))
