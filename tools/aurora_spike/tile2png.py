"""De-tile one EFB-copy payload (hardware 4x4 tiling) into a PNG for inspection.

    python logs_ap/tile2png.py <payload.bin> <out.png> --w 640 --h 448 --fmt rgb565|rgba8
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
    ap.add_argument('--fmt', choices=['rgba8', 'rgb565'], default='rgba8')
    args = ap.parse_args()

    data = open(args.bin, 'rb').read()
    w, h = args.w, args.h
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
