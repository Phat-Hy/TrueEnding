"""Reconstruct `lis rX, hi` + `addi rX, rX, lo` address pairs in the lifted guest code.

The recompiler emits one C comment per guest instruction, so a computed address
shows up as two separate lines. A plain grep for the full 32-bit address therefore
misses every `lis`/`addi` reference (which is how a previous round wrongly concluded
a function had no callers). This walks the comments and reports where a full
address is formed.

Usage:
    python tools/find_xref.py 0x80600010 [0x805FFF70 ...]
    python tools/find_xref.py --addr-range 0x80600000 0x80600100
"""
import glob
import re
import sys

LIS = re.compile(r"^\s*//\s*([0-9A-F]{8}):\s+lis\s+r(\d+),\s*(-?\d+|0x[0-9A-Fa-f]+)\s*$")
ADDI = re.compile(r"^\s*//\s*([0-9A-F]{8}):\s+add[i]?\s+r(\d+),\s*r(\d+),\s*(-?\d+|0x[0-9A-Fa-f]+)\s*$")


def val(s):
    s = s.strip()
    return int(s, 16) if s.lower().startswith("0x") else int(s)


def scan(targets=None, rng=None):
    hits = []
    for path in sorted(glob.glob("build/recomp/generated/chunks/*.c")):
        hi = {}
        for line in open(path, "r", errors="replace"):
            m = LIS.match(line)
            if m:
                addr, reg, imm = int(m.group(1), 16), int(m.group(2)), val(m.group(3))
                hi[reg] = ((imm & 0xFFFF) << 16)
                continue
            m = ADDI.match(line)
            if m:
                addr, dst, src, imm = int(m.group(1), 16), int(m.group(2)), int(m.group(3)), val(m.group(4))
                if src in hi:
                    full = (hi[src] + imm) & 0xFFFFFFFF
                    if (targets and full in targets) or (rng and rng[0] <= full < rng[1]):
                        hits.append((full, path, addr))
    return hits


def main():
    targets = None
    rng = None
    if sys.argv[1] == "--addr-range":
        rng = (int(sys.argv[2], 16), int(sys.argv[3], 16))
    else:
        targets = {int(a, 16) for a in sys.argv[1:]}
    hits = scan(targets, rng)
    by = {}
    for full, path, at in hits:
        by.setdefault(full, []).append((path.split("chunk_")[-1], at))
    for full in sorted(by):
        print("0x%08X referenced %d time(s):" % (full, len(by[full])))
        for name, at in by[full]:
            print("    %s @ 0x%08X" % (name, at))


if __name__ == "__main__":
    main()
