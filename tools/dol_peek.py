"""Read words/strings out of the guest DOL by virtual address.

The NAND layer's ISFS->NAND error table, the 20-entry GetUsage path table and the
home-dir string are static data in build/SLSEXJ/main.dol, so read them from the
image instead of guessing from a run. Usage:

    python tools/dol_peek.py <hexaddr> <count> [--str]

--str prints each word's target interpreted as a C string.
"""
import struct
import sys

DOL = "build/SLSEXJ/main.dol"


def load_sections(path=DOL):
    """DOL header: 7 text + 11 data sections, each {offset, address, size}."""
    data = open(path, "rb").read()
    text_off = struct.unpack_from(">7I", data, 0x00)
    data_off = struct.unpack_from(">11I", data, 0x1C)
    text_addr = struct.unpack_from(">7I", data, 0x48)
    data_addr = struct.unpack_from(">11I", data, 0x64)
    text_size = struct.unpack_from(">7I", data, 0x80)
    data_size = struct.unpack_from(">11I", data, 0x9C)
    secs = []
    for i in range(7):
        if text_size[i]:
            secs.append((text_addr[i], text_size[i], text_off[i]))
    for i in range(11):
        if data_size[i]:
            secs.append((data_addr[i], data_size[i], data_off[i]))
    return data, secs


def read(addr, n, data=None, secs=None):
    """Read n bytes, crossing section boundaries (the DOL splits .text/.data)."""
    out = bytearray()
    a = addr
    while len(out) < n:
        for saddr, size, off in secs:
            if saddr <= a < saddr + size:
                take = min(n - len(out), saddr + size - a)
                out += data[off + (a - saddr): off + (a - saddr) + take]
                a += take
                break
        else:
            raise SystemExit("address 0x%08X not inside any DOL section" % a)
    return bytes(out)


def cstr(addr, data, secs, limit=256):
    out = b""
    a = addr
    while len(out) < limit:
        try:
            out += read(a, 1, data, secs)
        except SystemExit:
            break
        if out.endswith(b"\x00"):
            break
        a += 1
    return out.split(b"\x00")[0].decode("latin-1")


def main():
    addr = int(sys.argv[1], 16)
    count = int(sys.argv[2])
    as_str = "--str" in sys.argv
    data, secs = load_sections()
    if as_str:
        words = struct.unpack(">%dI" % count, read(addr, count * 4, data, secs))
        for i, w in enumerate(words):
            try:
                print("%08X +%02X: %08X %r" % (addr + i * 4, i * 4, w, cstr(w, data, secs)))
            except SystemExit:
                print("%08X +%02X: %08X <unmapped>" % (addr + i * 4, i * 4, w))
    else:
        for i in range(count):
            w = struct.unpack(">I", read(addr + i * 4, 4, data, secs))[0]
            s = struct.unpack(">i", struct.pack(">I", w))[0]
            print("%08X +%02X: %08X  (s32 %d)" % (addr + i * 4, i * 4, w, s))


if __name__ == "__main__":
    main()
