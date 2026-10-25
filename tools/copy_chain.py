"""Print a Dolphin EFB-copy dump run's per-frame copy sequence *in execution order*.

Dolphin's `DumpEFBTarget=True` writes every EFB copy destination as
    efb1_n<counter>_<W>x<H>_<fmt>.png
in the order the copies are executed. The present (VI) copy is the 640x479 one, so the
copies between two of those are one emulated frame's worth of EFB copies.

This is the ground truth for the host's copy-servicing model: a copy must contain the
picture that had been drawn when the guest issued it, and the sizes are the destination
sizes the guest actually asked for.

Usage:
  set TLS_COPY_DUMP_DIR=build\\recomp\\dolphin-ref\\run4
  python tools/copy_chain.py [--frames 0-40] [--from N] [--count N] [--size WxH]
                             [--chain] [--best]
"""
import argparse
import os
import re
import sys
from collections import defaultdict

from PIL import Image

D = (os.environ.get("TLS_COPY_DUMP_DIR")
     or os.path.join(os.environ["APPDATA"], "Dolphin Emulator", "Dump", "Textures"))


def load():
    files = [f for f in os.listdir(D) if f.startswith("efb1_")]
    files.sort(key=lambda f: int(re.search(r"_n(\d+)_", f).group(1)))
    frames = []
    cur = []
    for f in files:
        m = re.search(r"_n(\d+)_(\d+)x(\d+)_(\d+)\.png$", f)
        if not m:
            continue
        n, w, h, fmt = int(m.group(1)), int(m.group(2)), int(m.group(3)), int(m.group(4))
        p = os.path.join(D, f)
        try:
            im = Image.open(p).convert("RGB")
            # Brightest single texel as well as the average: a bloom source is dark
            # everywhere except a few pixels, and the average alone cannot see that.
            small = im.resize((1, 1), Image.BOX).getpixel((0, 0))
            mx = im.resize((32, 32), Image.BOX)
            peak = max(sum(px) for px in mx.getdata())
        except Exception:
            continue
        entry = dict(n=n, w=w, h=h, fmt=fmt, avg=small, peak=peak, f=f)
        if (w, h) in ((640, 479), (640, 480)):
            if cur:
                frames.append(cur)
            cur = [entry]
        else:
            cur.append(entry)
    if cur:
        frames.append(cur)
    return frames


def fmt_avg(e):
    return "%3d/%3d" % (e["avg"][0], e["avg"][1])


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--frames", default=None, help="index range a-b")
    ap.add_argument("--from", dest="start", type=int, default=0)
    ap.add_argument("--count", type=int, default=20)
    ap.add_argument("--size", default=None, help="only frames containing this WxH")
    ap.add_argument("--chain", action="store_true", help="print the full sequence")
    ap.add_argument("--best", action="store_true",
                    help="rank frames by how much the chain lifts the copies")
    args = ap.parse_args()

    frames = load()
    print("frames parsed: %d" % len(frames), file=sys.stderr)

    if args.best:
        ranked = []
        for i, fr in enumerate(frames):
            body = [c for c in fr if (c["w"], c["h"]) != (640, 479)]
            if len(body) < 4:
                continue
            lum = [sum(c["avg"]) / 3.0 for c in body]
            ranked.append((max(lum) - min(lum), i, len(body)))
        ranked.sort(reverse=True)
        for rise, i, n in ranked[: args.count]:
            print("frame %4d  copies=%2d  rise=%.1f  %s" % (
                i, n, rise,
                " ".join("%dx%d=%s" % (c["w"], c["h"], fmt_avg(c)) for c in frames[i][1:])))
        return

    lo, hi = args.start, args.start + args.count
    if args.frames:
        a, b = args.frames.split("-")
        lo, hi = int(a), int(b) + 1
    for i in range(lo, min(hi, len(frames))):
        fr = frames[i]
        body = fr[1:]
        if args.size:
            w, h = (int(x) for x in args.size.split("x"))
            if not any(c["w"] == w and c["h"] == h for c in body):
                continue
        print("frame %4d  copies=%2d  %s" % (
            i, len(body),
            " ".join("%dx%df%d=(%s)pk%d" % (c["w"], c["h"], c["fmt"], fmt_avg(c), c["peak"])
                     for c in body)))
        if args.chain:
            for c in fr:
                print("      n=%6d %4dx%-4d fmt=%2d avg=(%3d,%3d,%3d) peak=%3d  %s" % (
                    c["n"], c["w"], c["h"], c["fmt"], c["avg"][0], c["avg"][1], c["avg"][2],
                    c["peak"], c["f"]))


if __name__ == "__main__":
    main()
