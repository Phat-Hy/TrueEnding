"""Read words/strings/pointers out of the guest image by virtual address.

The NAND layer's error maps, the save-layer dispatch tables and the save-file name
strings are all static data in the guest image, so read them from the image instead
of guessing from a run.

`build/SLSEXJ/main.elf` is used, not `main.dol`: the DOL in this tree has a
non-standard section header (textSize[0] reads as 0x8086E140), so an address can
land in the wrong "section" and return plausible-looking garbage. The ELF's
PT_LOAD program headers are unambiguous (ELF32, big-endian, PowerPC).

Usage:
    python tools/dol_peek.py <hexaddr> <count> [--str|--ptr]
    python tools/dol_peek.py --find <hexword>       # where is this 32-bit word?
    python tools/dol_peek.py --strfind <text>       # where is this C string?
"""
import struct
import sys

ELF = "build/SLSEXJ/main.elf"


def load_segments(path=ELF):
    """[(vaddr, size, file_offset)] from the PT_LOAD program headers."""
    data = open(path, "rb").read()
    if data[:4] != b"\x7fELF":
        raise SystemExit("%s is not an ELF" % path)
    if data[4] != 1 or data[5] != 2:
        raise SystemExit("expected ELF32 big-endian")
    e_phoff, = struct.unpack_from(">I", data, 0x1C)
    e_phentsize, e_phnum = struct.unpack_from(">HH", data, 0x2A)
    segs = []
    for i in range(e_phnum):
        off = e_phoff + i * e_phentsize
        p_type, p_offset, p_vaddr, p_paddr, p_filesz, p_memsz = struct.unpack_from(">6I", data, off)
        if p_type == 1 and p_filesz:  # PT_LOAD
            segs.append((p_vaddr, p_filesz, p_offset))
    return data, segs


def read(addr, n, data=None, segs=None):
    out = bytearray()
    a = addr
    while len(out) < n:
        for vaddr, size, off in segs:
            if vaddr <= a < vaddr + size:
                take = min(n - len(out), vaddr + size - a)
                out += data[off + (a - vaddr): off + (a - vaddr) + take]
                a += take
                break
        else:
            raise SystemExit("address 0x%08X not inside any loaded segment" % a)
    return bytes(out)


def cstr(addr, data, segs, limit=256):
    out = b""
    a = addr
    while len(out) < limit:
        try:
            out += read(a, 1, data, segs)
        except SystemExit:
            break
        if out.endswith(b"\x00"):
            break
        a += 1
    return out.split(b"\x00")[0].decode("latin-1")


def main():
    if len(sys.argv) >= 3 and sys.argv[1] == "--find":
        want = struct.pack(">I", int(sys.argv[2], 16))
        data, segs = load_segments()
        for i in range(len(data) - 3):
            if data[i:i + 4] == want:
                for vaddr, size, off in segs:
                    if off <= i < off + size:
                        print("0x%08X" % (vaddr + (i - off)))
        return
    if len(sys.argv) >= 3 and sys.argv[1] == "--strfind":
        needle = sys.argv[2].encode()
        data, segs = load_segments()
        i = 0
        while True:
            i = data.find(needle, i)
            if i < 0:
                return
            for vaddr, size, off in segs:
                if off <= i < off + size:
                    print("%r at 0x%08X" % (sys.argv[2], vaddr + (i - off)))
            i += 1

    addr = int(sys.argv[1], 16)
    count = int(sys.argv[2])
    data, segs = load_segments()
    for i in range(count):
        w = struct.unpack_from(">I", read(addr + i * 4, 4, data, segs))[0]
        s = struct.unpack(">i", struct.pack(">I", w))[0]
        extra = ""
        if "--str" in sys.argv:
            try:
                extra = " %r" % cstr(w, data, segs)
            except SystemExit:
                extra = " <unmapped>"
        elif "--ptr" in sys.argv:
            try:
                read(w, 4, data, segs)
                extra = " <loaded>"
            except SystemExit:
                extra = " <not-loaded>"
        print("%08X +%02X: %08X  (s32 %d)%s" % (addr + i * 4, i * 4, w, s, extra))


if __name__ == "__main__":
    main()
