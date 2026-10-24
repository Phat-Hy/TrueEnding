import sys
import struct
import zlib

def bmp_to_png(bmp_path, png_path):
    with open(bmp_path, "rb") as f:
        data = f.read()

    if data[:2] != b"BM":
        raise ValueError("Not a valid BMP file")

    offset = struct.unpack_from("<I", data, 10)[0]
    header_size = struct.unpack_from("<I", data, 14)[0]
    width = struct.unpack_from("<i", data, 18)[0]
    height = struct.unpack_from("<i", data, 22)[0]
    bpp = struct.unpack_from("<H", data, 28)[0]

    top_down = False
    if height < 0:
        height = -height
        top_down = True

    if bpp not in (24, 32):
        raise ValueError(f"Unsupported bpp: {bpp}")

    bytes_per_pixel = bpp // 8
    row_stride = (width * bytes_per_pixel + 3) & ~3

    raw_rows = []
    for y in range(height):
        src_y = y if top_down else (height - 1 - y)
        row_start = offset + src_y * row_stride
        row_data = data[row_start : row_start + width * bytes_per_pixel]
        
        # BMP is BGR(A), PNG needs RGB
        rgb_row = bytearray(1 + width * 3)
        rgb_row[0] = 0 # filter type None
        for x in range(width):
            b = row_data[x * bytes_per_pixel + 0]
            g = row_data[x * bytes_per_pixel + 1]
            r = row_data[x * bytes_per_pixel + 2]
            rgb_row[1 + x * 3 + 0] = r
            rgb_row[1 + x * 3 + 1] = g
            rgb_row[1 + x * 3 + 2] = b
        raw_rows.append(bytes(rgb_row))

    raw_data = b"".join(raw_rows)
    compressed = zlib.compress(raw_data, level=6)

    def make_chunk(chunk_type, chunk_data):
        crc = zlib.crc32(chunk_type + chunk_data) & 0xFFFFFFFF
        return struct.pack(">I", len(chunk_data)) + chunk_type + chunk_data + struct.pack(">I", crc)

    png_bytes = bytearray(b"\x89PNG\r\n\x1a\n")
    ihdr = struct.pack(">IIBBBBB", width, height, 8, 2, 0, 0, 0)
    png_bytes += make_chunk(b"IHDR", ihdr)
    png_bytes += make_chunk(b"IDAT", compressed)
    png_bytes += make_chunk(b"IEND", b"")

    with open(png_path, "wb") as f:
        f.write(png_bytes)
    print(f"Saved PNG to {png_path} ({width}x{height})")

if __name__ == "__main__":
    if len(sys.argv) >= 3:
        bmp_to_png(sys.argv[1], sys.argv[2])
    else:
        print("Usage: bmp2png.py input.bmp output.png")
