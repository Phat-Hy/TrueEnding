"""Decode the GX EFB-copy BP registers that the game writes every frame.

The pipeline does not implement these yet (handover 5c.11), so the water/reflection
texture is never filled. Before implementing the copy, the field layout has to be
pinned down; this tool turns the raw values observed at runtime into source rectangle
and destination buffer description, under the two plausible interpretations, so the
next change starts from decoded numbers instead of guesswork.

Observed values (TLS_F900_PROBE=1 TLS_F900_FRAME=2340):

    reg 0x49 = 0x000000    TEXCOPYSRC  (left/top)
    reg 0x4A = 0x06FE7F    TEXCOPYSRC  (right/bottom)
    reg 0x4A = 0x01BC9F    TEXCOPYSRC  (second copy in the same frame)
    reg 0x4B = 0x829B7F    TEXCOPYDST  (address + format)
    reg 0x52 = 0x01003B    TEXCOPYEXEC (trigger)

Layout used by libogc/GX (BP registers are 24-bit):
    0x49: srcX in bits  0..9,  srcY in bits 10..19
    0x4A: srcX2 in bits 0..9,  srcY2 in bits 10..19
    0x4B: dstAddr in bits 0..21 (in 32-byte units), format in bits 22..24,
          mipmap/half-scale flags above that
    0x52: executes the copy; bit 22 = clear, bits 0..9 = ? (engine specific)
"""
import sys

MEM2_BASE = 0x90000000


def decode_src(val):
    return {
        "x": val & 0x3FF,
        "y": (val >> 10) & 0x3FF,
    }


def decode_dst(val):
    """Decode BP 0x4B (TEXCOPYDST).

    The 24-bit low field holds the destination address >> 5, i.e. the *physical*
    address with its low 5 bits implicit; the format sits above it. Verified against
    the two copies the game issues per frame: 0x81C68E -> phys 0x1038D1C0 (virtual
    0x9038D1C0) and 0x829B7F -> phys 0x10536FE0 (virtual 0x90536FE0), both inside
    MEM2, both format 0 (RGBA8). A 22-bit address field does not fit MEM2 at all, so
    the 24-bit reading is the correct one.
    """
    addr_field = val & 0xFFFFFF
    phys = addr_field << 5
    fmt = (val >> 24) & 0x7
    # Flat model: cached alias = physical + 0x80000000 (MEM1 phys 0 -> 0x80000000,
    # MEM2 phys 0x10000000 -> 0x90000000).
    virt = 0x80000000 + phys
    return {
        "phys": phys,
        "virt": virt,
        "format": fmt,
        "raw": val,
    }


FORMAT_NAMES = {0: "RGBA8 (or RGB8)", 1: "RGB565", 2: "Z (depth)", 3: "Y8/a8",
                4: "unknown", 5: "unknown"}


def main(argv):
    if not argv:
        argv = ["0x49=0x000000", "0x4A=0x06FE7F", "0x4A=0x01BC9F", "0x4B=0x829B7F", "0x52=0x01003B"]
    for arg in argv:
        if "=" not in arg:
            print(f"{arg}: expected reg=value")
            continue
        reg_str, val_str = arg.split("=", 1)
        reg = int(reg_str, 0)
        val = int(val_str, 0)
        if reg == 0x49:
            s = decode_src(val)
            print(f"0x49 TEXCOPYSRC L/T: x={s['x']} y={s['y']}  (raw 0x{val:06X})")
        elif reg == 0x4A:
            s = decode_src(val)
            print(f"0x4A TEXCOPYSRC R/B: x2={s['x']} y2={s['y']}  (raw 0x{val:06X}) "
                  f"-> copy size {s['x']}x{s['y']}")
        elif reg == 0x4B:
            d = decode_dst(val)
            print(f"0x4B TEXCOPYDST: format={d['format']} ({FORMAT_NAMES.get(d['format'], '?')}) "
                  f"dest phys=0x{d['phys']:08X} guest=0x{d['virt']:08X}  (raw 0x{val:06X})")
        elif reg == 0x52:
            print(f"0x52 TEXCOPYEXEC: raw 0x{val:06X} "
                  f"(bits 0..9=0x{val & 0x3FF:03X}, bit 22 clear={ (val >> 22) & 1 })")
        else:
            print(f"0x{reg:02X}: raw 0x{val:06X} (not a copy register)")
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv[1:]))
