"""De-tile one EFB-copy payload into a PNG for inspection.

    python tools/aurora_spike/tile2png.py <payload.bin> <out.png> --w 640 --h 448 \
           --fmt rgba8|rgb565|linear565|linear565be

`rgba8`/`rgb565` are the hardware 4x4-TILED texture layouts (tile = 64/32 bytes, row-major
tiles). `linear565` is the ROW-LINEAR little-endian RGB565 layout - the one a DISPLAY (XFB)
copy actually lands in for this project, measured in 5c.46 AP-AO: the guest's XFB bytes for
frame 3295 (`0x900997E0`, 640x448, 573 440 bytes) decode to the Gurgan Cave scene with
`linear565`, and neither 4x4-tiled decode nor the byte-swapped (`linear565be`) decode does.
Objective test, horizontal neighbour correlation of the decoded PNG: 0.864 linear-LE,
0.698 tiled-LE, 0.543 tiled-BE. Using this on a display copy is what makes the picture.
"""
import argparse
import struct

from PIL import Image


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('bin')
    ap.add_argument('png')
    ap.add_argument('--w', type=int, default=640)
    ap.add_argument('--h', type=int, default=448)
    ap.add_argument('--fmt', choices=['rgba8', 'rgb565', 'linear565', 'linear565be'], default='rgba8')
    args = ap.parse_args()

    data = open(args.bin, 'rb').read()
    w, h = args.w, args.h
    if args.fmt in ('linear565', 'linear565be'):
        need = w * h * 2
        assert len(data) >= need, (len(data), need)
        img = Image.new('RGB', (w, h))
        px = img.load()
        for y in range(h):
            for x in range(w):
                o = (y * w + x) * 2
                if args.fmt == 'linear565':
                    v = data[o] | (data[o + 1] << 8)
                else:
                    v = (data[o] << 8) | data[o + 1]
                px[x, y] = (((v >> 11) & 0x1F) * 255 // 31,
                            ((v >> 5) & 0x3F) * 255 // 63,
                            (v & 0x1F) * 255 // 31)
        img.save(args.png)
        print('wrote', args.png, img.size, f'({args.fmt}, row-linear)')
        return
    tiles_x = (w + 3) // 4
    tiles_y = (h + 3) // 4
    tile_bytes = 64 if args.fmt == 'rgba8' else 32
    assert len(data) >= tiles_x * tiles_y * tile_bytes, (len(data), tiles_x * tiles_y * tile_bytes)
    img = Image.new('RGB', (w, h))
    px = img.load()
    for ty in range(tiles_y):
        for tx in range(tiles_x):
            tile = data[(ty * tiles_x + tx) * tile_bytes:(ty * tiles_x + tx + 1) * tile_bytes]
            for py in range(4):
                for pxi in range(4):
                    x, y = tx * 4 + pxi, ty * 4 + py
                    if x >= w or y >= h:
                        continue
                    if args.fmt == 'rgba8':
                        idx = (py * 4 + pxi) * 2
                        a = tile[idx]
                        r = tile[idx + 1]
                        g = tile[32 + idx]
                        b = tile[32 + idx + 1]
                        del a
                    else:
                        (v,) = struct.unpack_from('>H', tile, (py * 4 + pxi) * 2)
                        r = ((v >> 11) & 0x1F) * 255 // 31
                        g = ((v >> 5) & 0x3F) * 255 // 63
                        b = (v & 0x1F) * 255 // 31
                    px[x, y] = (r, g, b)
    img.save(args.png)
    print('wrote', args.png, img.size)


if __name__ == '__main__':
    main()
