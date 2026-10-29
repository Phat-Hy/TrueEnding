"""Compare the Aurora replay frame against the hand-rolled layer's capture (AP-AM criterion 2).

    python tools/aurora_spike/compare.py <aurora.ppm> <host.ppm> [--out cmp.png] [--tol 8]

The host capture is the runner's swap-chain image (1280x720, the 640x480 EFB stretched to
16:9 - recomp/host_runner.c sets GFX_ASPECT_16_9), so it is resized to the EFB size before
differencing; resizing with BOX exactly inverts the 2x stretch for a 2x image. Both means are
printed, plus the fraction of pixels differing by more than --tol on any channel, and with
--out a side-by-side |a-b| image amplified 8x.

Nothing here is a gate: it reports numbers so "does the picture match" is a measurement.
"""
import os
import sys

sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))


def load_ppm(path):
    import numpy as np
    with open(path, 'rb') as f:
        data = f.read()
    if not data.startswith(b'P6'):
        raise SystemExit(f'{path}: not a binary PPM')
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
    if maxv != 255:
        raise SystemExit(f'{path}: unsupported maxval {maxv}')
    buf = np.frombuffer(data[pos:pos + w * h * 3], dtype=np.uint8)
    if buf.size != w * h * 3:
        raise SystemExit(f'{path}: truncated pixel data ({buf.size} of {w * h * 3})')
    return buf.reshape(h, w, 3)


def main(argv):
    import numpy as np
    from PIL import Image

    args = [a for a in argv[1:] if not a.startswith('--')]
    tol = 8
    out = None
    i = 1
    while i < len(argv):
        if argv[i] == '--tol':
            tol = int(argv[i + 1]); i += 2; continue
        if argv[i] == '--out':
            out = argv[i + 1]; i += 2; continue
        i += 1
    if len(args) != 2:
        print(__doc__)
        return 1
    a_img = load_ppm(args[0])
    b_img = load_ppm(args[1])
    print(f'aurora : {a_img.shape[1]}x{a_img.shape[0]}')
    print(f'host   : {b_img.shape[1]}x{b_img.shape[0]}')
    if b_img.shape != a_img.shape:
        resized = Image.fromarray(b_img).resize((a_img.shape[1], a_img.shape[0]), Image.BOX)
        b_img = np.asarray(resized)
        print(f'host resized to {a_img.shape[1]}x{a_img.shape[0]} (BOX)')

    def mean(img):
        return tuple(round(float(v), 2) for v in img.reshape(-1, 3).mean(axis=0))

    d = np.abs(a_img.astype(np.int16) - b_img.astype(np.int16)).max(axis=2)
    n = d.size
    print(f'aurora mean RGB {mean(a_img)}')
    print(f'host   mean RGB {mean(b_img)}')
    print(f'changed>{tol}: {int((d > tol).sum())} / {n} pixels ({100.0 * (d > tol).sum() / n:.2f}%)')
    print(f'max |d| = {int(d.max())}   mean |d| = {d.mean():.2f}')
    # Per-band detail, because a global mean hides a swapped element (dossier 5c.46 I).
    h, w = d.shape
    for name, sl in (('top    ', slice(0, h // 4)), ('upper  ', slice(h // 4, h // 2)),
                     ('lower  ', slice(h // 2, 3 * h // 4)), ('bottom ', slice(3 * h // 4, h))):
        band = d[sl]
        print(f'  band {name} mean|d| = {band.mean():6.2f}  changed>{tol} = '
              f'{100.0 * (band > tol).sum() / band.size:5.2f}%')
    if out:
        amp = np.clip(d * 8, 0, 255).astype(np.uint8)
        vis = np.concatenate([a_img, b_img, np.stack([amp] * 3, axis=2)], axis=1).astype(np.uint8)
        Image.fromarray(vis).save(out)
        print(f'wrote {out} (aurora | host | 8x difference)')
    return 0


if __name__ == '__main__':
    sys.exit(main(sys.argv))
