"""Byte-compare one EFB copy: aurora's capture_copies/get payload vs the hand-rolled layer's.

    python tools/aurora_spike/copycmp.py <aurora_copy.bin> <aurora_copy.bin.host.bin>
                                        [--w 160 --h 112 --bpp 4] [--out diff.png]

Both files are the *same* guest destination, written by the same pitch-derived geometry: aurora
through AuroraReadbackCaptureCopies + AuroraReadbackGet, the host layer by
recomp/gfx_d3d11.c d3d11_efb_copy_to_guest(). Equality is the criterion-3 claim; the report also
prints the 4x4-tile layout check (each tile is bpp*16 bytes, tiles in row-major order) and, with
--w/--h/--bpp, a per-texel summary of where they differ, because "mean byte" hides a swapped
tile column the same way a frame mean hides a swapped batch (handover 5c.46 I).
"""
import sys


def stats(name, data):
    n = len(data)
    if n == 0:
        print(f'{name}: empty')
        return
    mean = sum(data) / n
    nz = sum(1 for b in data if b)
    print(f'{name}: {n} bytes, mean {mean:.2f}, zero bytes {n - nz} ({100.0 * (n - nz) / n:.1f}%), '
          f'max {max(data)}')
    print(f'  first 32: {data[:32].hex(" ")}')


def main(argv):
    if len(argv) < 3:
        print(__doc__)
        return 1
    a = open(argv[1], 'rb').read()
    b = open(argv[2], 'rb').read()
    w = h = 0
    bpp = 4
    i = 3
    while i < len(argv):
        if argv[i] == '--w':
            w = int(argv[i + 1]); i += 2; continue
        if argv[i] == '--h':
            h = int(argv[i + 1]); i += 2; continue
        if argv[i] == '--bpp':
            bpp = int(argv[i + 1]); i += 2; continue
        i += 1
    stats(argv[1], a)
    stats(argv[2], b)
    if len(a) != len(b):
        print(f'SIZE MISMATCH: {len(a)} vs {len(b)}')
        return 2
    same = sum(1 for x, y in zip(a, b) if x == y)
    print(f'identical bytes: {same} / {len(a)} ({100.0 * same / len(a):.2f}%)')
    if same == len(a):
        print('RESULT: byte-identical')
        return 0
    diff = [k for k, (x, y) in enumerate(zip(a, b)) if x != y]
    print(f'first differing offset: {diff[0]}  (last {diff[-1]})')
    if w and h:
        # 4x4-tiled layout: tile index = (y//4)*tilesX + (x//4), tile bytes = bpp*16.
        tiles_x = (w + 3) // 4
        per_tile = bpp * 16
        bad = set()
        for off in diff:
            tile = off // per_tile
            bad.add((tile % tiles_x, tile // tiles_x))
        print(f'differing 4x4 tiles: {len(bad)} of {tiles_x * ((h + 3) // 4)}')
        print(f'  tile columns: {sorted({t[0] for t in bad})[:16]}')
        print(f'  tile rows:    {sorted({t[1] for t in bad})[:16]}')
    print('RESULT: differs')
    return 3


if __name__ == '__main__':
    sys.exit(main(sys.argv))
