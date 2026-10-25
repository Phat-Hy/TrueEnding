"""Frame-average / comparison helper for host PPM screenshots and Dolphin PNG dumps.

Usage:
    python tools/img_stats.py a.ppm b.png            # per-image means, side by side
    python tools/img_stats.py a.ppm b.png --diff     # + resampled per-pixel |a-b|
    python tools/img_stats.py a.ppm --gamma 2.2 ...  # + mean after out = v**k

The host writes 1280x720 PPMs (build/recomp/d3d11_screenshot_<frame>.ppm); Dolphin's
reference frames are 828x480 PNGs. Both are compared by *statistics* because the two
framings differ; --diff resamples the first image onto the second's grid and is only
meaningful when the two show the same framing.
"""
import sys
import os
from PIL import Image


def load(path):
    im = Image.open(path).convert('RGB')
    return im


def mean_of(im, gamma=None):
    if gamma is None:
        r, g, b = im.resize((1, 1), Image.BOX).getpixel((0, 0))
        return (r, g, b)
    # Per-pixel power transform, then average (the mean of a power != power of the mean).
    lut = [min(255, max(0, int(round(((i / 255.0) ** gamma) * 255.0)))) for i in range(256)]
    flat = im.point(lut * 3)
    r, g, b = flat.resize((1, 1), Image.BOX).getpixel((0, 0))
    return (r, g, b)


def main():
    args = [a for a in sys.argv[1:] if not a.startswith('--')]
    want_diff = '--diff' in sys.argv
    gammas = []
    for i, a in enumerate(sys.argv):
        if a == '--gamma':
            gammas.append(float(sys.argv[i + 1]))
    ims = []
    for p in args:
        if not os.path.exists(p):
            print(f'MISSING {p}')
            continue
        im = load(p)
        ims.append((p, im))
        print(f'{p}  {im.size[0]}x{im.size[1]}  mean={mean_of(im)}')
    for k in gammas:
        for p, im in ims:
            print(f'  gamma {k}: {p} mean={mean_of(im, k)}')
    if want_diff and len(ims) == 2:
        a, b = ims[0][1], ims[1][1]
        a2 = a.resize(b.size, Image.BOX)
        pa, pb = a2.load(), b.load()
        w, h = b.size
        tot = [0, 0, 0]
        n = 0
        worst = 0
        for y in range(0, h, 2):
            for x in range(0, w, 2):
                ca, cb = pa[x, y], pb[x, y]
                d = [abs(ca[i] - cb[i]) for i in range(3)]
                worst = max(worst, sum(d) // 3)
                for i in range(3):
                    tot[i] += d[i]
                n += 1
        print(f'  resampled mean |diff| = ({tot[0]//n},{tot[1]//n},{tot[2]//n})  worst={worst}')


if __name__ == '__main__':
    main()
