"""Analyze Dolphin's per-copy EFB dumps to answer: does a frame's copy stream brighten?

Dolphin dumps every EFB copy destination in execution order, named
    efb1_n<counter>_<W>x<H>_<fmt>.png
so one *frame* is the run of copies between two 640x479 display copies (the present copy).
If the guest's composite chain really fed itself (each additive pass sampling a copy of the
already-brightened frame) the copy averages would rise monotonically inside a frame, exactly
like the host's TLS_BATCH_PROBE shows. If hardware instead reads a coherent snapshot, they
should stay flat/dark.
"""
import os
import re
import sys
from collections import defaultdict

from PIL import Image

D = os.path.join(os.environ['APPDATA'], 'Dolphin Emulator', 'Dump', 'Textures')


def load():
    frames = []
    cur = []
    files = [f for f in os.listdir(D) if f.startswith('efb1_')]
    files.sort(key=lambda f: int(re.search(r'_n(\d+)_', f).group(1)))
    cache = {}
    for f in files:
        m = re.search(r'_n(\d+)_(\d+)x(\d+)_(\d+)\.png$', f)
        if not m:
            continue
        n, w, h, fmt = int(m.group(1)), int(m.group(2)), int(m.group(3)), int(m.group(4))
        p = os.path.join(D, f)
        try:
            im = Image.open(p).convert('RGB')
            a = im.resize((1, 1), Image.BOX).getpixel((0, 0))
        except Exception:
            continue
        entry = (n, w, h, fmt, a[0], a[1], a[2], os.path.getsize(p))
        if (w, h) == (640, 479):
            if cur:
                frames.append(cur)
            cur = [entry]
        else:
            cur.append(entry)
    if cur:
        frames.append(cur)
    return frames


def main():
    frames = load()
    print(f'frames parsed: {len(frames)}')
    step = int(sys.argv[1]) if len(sys.argv) > 1 else 100
    worst = None
    for idx, fr in enumerate(frames):
        bright = [c[4] + c[5] + c[6] for c in fr]
        if not bright:
            continue
        rise = max(bright) - bright[0]
        if worst is None or rise > worst[0]:
            worst = (rise, idx, fr)
        if idx % step == 0:
            print(f'--- frame {idx}: ' + ' '.join(
                f'{c[1]}x{c[2]}f{c[3]}={c[4]}' for c in fr))
    rise, idx, fr = worst
    print(f'\nlargest in-frame brightening: frame {idx} (+{rise})')
    for c in fr:
        print(f'  n={c[0]:6d} {c[1]:4d}x{c[2]:<4d} fmt={c[3]:2d} avg=({c[4]},{c[5]},{c[6]}) bytes={c[7]}')


if __name__ == '__main__':
    main()
