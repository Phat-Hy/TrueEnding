"""Compare a host screenshot (PPM) against a Dolphin reference PNG on the *same*
quantities the handover quotes: frame average, luminance percentiles, and a 4x6 grid of
block means.  The two pictures have different sizes and slightly different framings, so
frame averages alone are misleading - the percentiles and the grid show the *shape* of
the picture (a saturating centre, a dark cave, a lamp glow).

Usage:  python tools/cmp_ref.py <host.ppm|png> [reference.png ...]
"""
import sys
import os

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))


def load(path):
    import numpy as np
    from PIL import Image
    if path.lower().endswith(".ppm"):
        with open(path, "rb") as f:
            assert f.readline().strip() == b"P6"
            dims = f.readline()
            while dims.startswith(b"#"):
                dims = f.readline()
            w, h = map(int, dims.split())
            assert int(f.readline().strip()) == 255
            a = np.frombuffer(f.read(w * h * 3), dtype=np.uint8)
        return a.reshape(h, w, 3).astype(np.float64)
    return np.asarray(Image.open(path).convert("RGB")).astype(np.float64)


def stats(name, img):
    import numpy as np
    lum = img.mean(axis=2)
    flat = lum.ravel()
    p = {q: float(np.percentile(flat, q)) for q in (10, 50, 75, 90, 99, 99.7)}
    avg = img.reshape(-1, 3).mean(axis=0)
    # 4 columns x 6 rows grid of block means, centre is [1:3, 1:5]
    h, w = lum.shape
    rows, cols = 6, 4
    grid = [[lum[r * h // rows:(r + 1) * h // rows, c * w // cols:(c + 1) * w // cols].mean()
             for c in range(cols)] for r in range(rows)]
    print(f"{name:44s} {w}x{h} mean=({avg[0]:.0f},{avg[1]:.0f},{avg[2]:.0f}) "
          f"p10={p[10]:.0f} p50={p[50]:.0f} p75={p[75]:.0f} p90={p[90]:.0f} "
          f"p99={p[99]:.0f} p99.7={p[99.7]:.0f} max={flat.max():.0f}")
    for row in grid:
        print("      " + " ".join(f"{v:6.0f}" for v in row))
    return avg, p, grid


def main(argv):
    if len(argv) < 2:
        print(__doc__)
        return 1
    for path in argv[1:]:
        if not os.path.exists(path):
            print(f"{path}: missing")
            continue
        stats(path, load(path))
        print()
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
