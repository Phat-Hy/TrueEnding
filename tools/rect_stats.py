"""Region statistics for a host screenshot or a Dolphin reference frame.

The tutorial page is judged by *regions*, not by the whole frame: a crest rectangle,
the vertical band column and the body-text block each have a recorded host and
reference value (handover 5c.46 AP-N item 8). Those numbers are only comparable if
the rectangle and the "dark" threshold are both stated, so they live here.

Usage:
    python tools/rect_stats.py shot.ppm --rect crest:845,108,1005,241 \
                                       --rect band:672,150,728,690
    python tools/rect_stats.py a.ppm b.png --rect crest:845,108,1005,241 --ref-scale

`--rect name:x0,y0,x1,y1` uses inclusive pixel coordinates in the image's own grid
(the host writes 1280x720, so the host rects are the AP-N ones). With `--ref-scale`
the rectangle is rescaled to the image's size, which is how the same rectangle is
mapped onto a Dolphin reference frame of a different resolution.

"dark" is luminance (r+g+b)/3 below DARK_LUMA. The threshold is calibrated, not
picked: at 80 the tool reproduces the crest dark fraction AP-N recorded for the
fixed page (11.4 %) from the current build. The band's recorded 4.1 % is not
reproducible at any single threshold on this capture - AP-N itself measured 3.3 %
for the same band on a second run - so the band is judged by its mean and by the
motif being visible, and the pre-fix page measured 100 % / 93 % dark under every
threshold in 16..192 because it was a solid dark plate.
"""
import sys
from PIL import Image

DARK_LUMA = 80.0


def parse_rect(spec):
    name, _, nums = spec.partition(':')
    x0, y0, x1, y1 = (int(v) for v in nums.split(','))
    return name, x0, y0, x1, y1


def stats(im, rect, scale=False):
    name, x0, y0, x1, y1 = rect
    w, h = im.size
    if scale:
        fx0, fy0 = x0 / 1280.0, y0 / 720.0
        fx1, fy1 = x1 / 1280.0, y1 / 720.0
        x0, y0 = int(fx0 * w), int(fy0 * h)
        x1, y1 = int(fx1 * w), int(fy1 * h)
    x1 = min(x1, w - 1)
    y1 = min(y1, h - 1)
    px = im.load()
    n = 0
    sr = sg = sb = 0
    dark = 0
    for y in range(y0, y1 + 1):
        for x in range(x0, x1 + 1):
            r, g, b = px[x, y][:3]
            sr += r
            sg += g
            sb += b
            if (r + g + b) / 3.0 < DARK_LUMA:
                dark += 1
            n += 1
    if n == 0:
        return name, (0, 0, 0), 0.0, 0
    return name, (sr / n, sg / n, sb / n), 100.0 * dark / n, n


def main():
    rects = []
    scale = '--ref-scale' in sys.argv
    files = []
    args = sys.argv[1:]
    i = 0
    while i < len(args):
        a = args[i]
        if a == '--rect':
            rects.append(parse_rect(args[i + 1]))
            i += 2
            continue
        if a.startswith('--'):
            i += 1
            continue
        files.append(a)
        i += 1

    for path in files:
        im = Image.open(path).convert('RGB')
        w, h = im.size
        tot = im.resize((1, 1), Image.BOX).getpixel((0, 0))
        print(f'{path}  {w}x{h}  page mean ({tot[0]},{tot[1]},{tot[2]})')
        for rect in rects:
            name, mean, dark, n = stats(im, rect, scale)
            print('  %-10s (%d..%d, %d..%d) %d px  mean (%.1f,%.1f,%.1f)  %.1f %% dark'
                  % (name, rect[1], rect[3], rect[2], rect[4], n,
                     mean[0], mean[1], mean[2], dark))


if __name__ == '__main__':
    main()
