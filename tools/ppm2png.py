import struct, zlib

def ppm_to_png(ppm_path, png_path):
    with open(ppm_path, "rb") as f:
        magic = f.readline().strip()
        dims = f.readline().strip()
        while dims.startswith(b"#"):
            dims = f.readline().strip()
        w, h = map(int, dims.split())
        maxval = int(f.readline().strip())
        rgb_data = f.read()

    # Create uncompressed RGBA or RGB scanlines with filter byte 0
    raw = bytearray()
    row_bytes = w * 3
    for y in range(h):
        raw.append(0) # filter byte 0
        raw.extend(rgb_data[y * row_bytes : (y + 1) * row_bytes])

    compressed = zlib.compress(bytes(raw), 9)

    def chunk(tag, data):
        c = struct.pack(">I", len(data)) + tag + data
        crc = zlib.crc32(tag + data) & 0xFFFFFFFF
        return c + struct.pack(">I", crc)

    png = b"\x89PNG\r\n\x1a\n"
    # IHDR: w, h, bitdepth=8, colortype=2 (RGB), compression=0, filter=0, interlace=0
    ihdr_data = struct.pack(">IIBBBBB", w, h, 8, 2, 0, 0, 0)
    png += chunk(b"IHDR", ihdr_data)
    png += chunk(b"IDAT", compressed)
    png += chunk(b"IEND", b"")

    with open(png_path, "wb") as f:
        f.write(png)
    print(f"Saved {png_path} ({w}x{h})")

ppm_to_png("build/recomp/framebuffer_0.ppm", "build/recomp/frame_420_fixed.png")
