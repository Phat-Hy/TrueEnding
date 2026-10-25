#!/usr/bin/env python3
"""Find code references to data addresses / strings in a GameCube/Wii DOL.

Purpose: the recomp project frequently needs "who loads the string at 0x8074FBB1?".
The generated chunk comments show the disassembly, but the address is usually built
from a `lis` + `addi`/`ori` pair (or `lis` + `lwz/stw` for globals), so a plain grep
for the full constant finds nothing.

Usage:
    python tools/dol_xref.py dis 0x800A472C [count]
        Plain instruction listing (no symbols) for a text window. Decodes the
        common integer opcodes only; enough to read control flow and constants.

    python tools/dol_xref.py strings <substr> [<substr> ...]
        List data strings matching substr with their guest address and the code
        sites that materialise that address.

    python tools/dol_xref.py addr 0x8074FBB1 [0x...]
        Same, for explicit addresses (also matches the nearest string).

    python tools/dol_xref.py near 0x800A472C <count>
        Dump the lis+disp address materialisations inside the given function window.
"""
import struct
import sys

DOL = 'orig/main.dol'


class Dol:
    def __init__(self, path=DOL):
        self.raw = open(path, 'rb').read()
        d = self.raw
        to = list(struct.unpack('>7I', d[0x00:0x1C]))
        do = list(struct.unpack('>11I', d[0x1C:0x48]))
        ta = list(struct.unpack('>7I', d[0x48:0x64]))
        da = list(struct.unpack('>11I', d[0x64:0x90]))
        ts = list(struct.unpack('>7I', d[0x90:0xAC]))
        ds = list(struct.unpack('>11I', d[0xAC:0xD8]))
        self.regions = []   # (guest_addr, bytes, kind)
        for i in range(7):
            if ts[i]:
                self.regions.append((ta[i], d[to[i]:to[i] + ts[i]], 'text'))
        for i in range(11):
            if ds[i]:
                self.regions.append((da[i], d[do[i]:do[i] + ds[i]], 'data'))
        self.text = [(a, b) for a, b, k in self.regions if k == 'text']
        self.data = [(a, b) for a, b, k in self.regions if k == 'data']
        self._strings = None

    def read(self, addr, n):
        for base, buf, _kind in self.regions:
            if base <= addr < base + len(buf):
                off = addr - base
                return buf[off:off + n]
        return b''

    def string_at(self, addr, maxlen=120):
        b = self.read(addr, maxlen)
        out = bytearray()
        for c in b:
            if c == 0:
                break
            if 0x20 <= c < 0x7F:
                out.append(c)
            else:
                return None
        return out.decode('ascii') if len(out) >= 3 else None

    def strings(self):
        if self._strings is not None:
            return self._strings
        import re
        pat = re.compile(rb'[\x20-\x7e]{4,}')
        found = []
        for base, buf in self.data:
            for m in pat.finditer(buf):
                found.append((base + m.start(), m.group().decode('ascii')))
        self._strings = found
        return found

    def nearest_string(self, addr, back=160):
        best = None
        for a, s in self.strings():
            if a <= addr < a + len(s) + 1:
                return a, s
            if addr - back <= a < addr and (best is None or a > best[0]):
                best = (a, s)
        return best

    def xrefs(self, target, window=6):
        """Return [(site_addr, kind, text)] for code that materialises `target`."""
        hires = (target >> 16) & 0xFFFF
        hits = []
        for base, buf in self.text:
            n = len(buf) // 4
            for i in range(n):
                w = struct.unpack_from('>I', buf, i * 4)[0]
                if (w >> 26) != 15:          # opcode 15 = addis/lis
                    continue
                if (w & 0xFFFF) != hires:
                    continue
                rd = (w >> 21) & 0x1F
                for j in range(1, window + 1):
                    if i + j >= n:
                        break
                    w2 = struct.unpack_from('>I', buf, (i + j) * 4)[0]
                    op = w2 >> 26
                    if op == 14:             # addi  rD, rA, simm
                        rd2 = (w2 >> 21) & 0x1F
                        ra = (w2 >> 16) & 0x1F
                        simm = w2 & 0xFFFF
                        if simm & 0x8000:
                            simm -= 0x10000
                        if rd2 == rd and ra == rd:
                            addr = ((hires << 16) + simm) & 0xFFFFFFFF
                            if addr == target:
                                hits.append((base + i * 4, 'lis+addi', addr))
                            break
                    elif op == 24:           # ori
                        rd2 = (w2 >> 21) & 0x1F
                        ra = (w2 >> 16) & 0x1F
                        uimm = w2 & 0xFFFF
                        if rd2 == rd and ra == rd:
                            addr = ((hires << 16) | uimm) & 0xFFFFFFFF
                            if addr == target:
                                hits.append((base + i * 4, 'lis+ori', addr))
                            break
                    elif op in (32, 36, 37, 40, 44):   # lwz/stw/lbz/lhz/sth
                        rd2 = (w2 >> 21) & 0x1F
                        ra = (w2 >> 16) & 0x1F
                        disp = w2 & 0xFFFF
                        if disp & 0x8000:
                            disp -= 0x10000
                        if ra == rd and disp >= 0:
                            near = ((hires << 16) + disp) & 0xFFFFFFFF
                            if near == target:
                                hits.append((base + i * 4, 'lis+mem', near))
                            break
                    else:
                        # Another lis to the same register kills the pair.
                        if op == 15 and ((w2 >> 21) & 0x1F) == rd:
                            break
                        if op == 18 or op == 16 or op in (32, 33, 34, 35, 36, 37, 38, 39, 40,
                                                          41, 42, 43, 44, 45, 46, 47, 48, 49,
                                                          50, 51, 52, 53, 54, 55):
                            # call or store through another reg: keep looking, the
                            # compiler may interleave independent work.
                            continue
                        continue
        return hits


def _sx16(v):
    return v - 0x10000 if v & 0x8000 else v


def disasm_one(w, pc):
    op = w >> 26
    rD = (w >> 21) & 0x1F
    rA = (w >> 16) & 0x1F
    rB = (w >> 11) & 0x1F
    if op == 18:
        li = w & 0x03FFFFFC
        if li & 0x02000000:
            li -= 0x04000000
        tgt = li if (w & 2) else pc + li
        return ('bl' if (w & 1) else 'b') + f' 0x{tgt:08X}'
    if op == 16:
        bo, bi = rD, rA
        disp = _sx16(w & 0xFFFC)
        tgt = disp if (w & 2) else pc + disp
        cond = {(12, 2): 'beq', (4, 2): 'bne'}
        nm = cond.get((bo, bi), f'bc {bo},{bi}')
        return f'{nm} 0x{tgt:08X}'
    if op == 14:
        return f'{"addi" if not (w & 1) else "addic."} r{rD}, r{rA}, {_sx16(w & 0xFFFF)}'
    if op == 15:
        return f'lis r{rD}, 0x{(w & 0xFFFF):04X}'
    if op == 24:
        return f'ori r{rA}, r{rD}, 0x{(w & 0xFFFF):04X}'
    if op == 3:
        return f'twi {rD}, r{rA}, {_sx16(w & 0xFFFF)}'
    if op == 10:
        return f'cmplwi cr{rD >> 2}, r{rA}, 0x{(w & 0xFFFF):04X}'
    if op == 11:
        return f'cmpwi cr{rD >> 2}, r{rA}, {_sx16(w & 0xFFFF)}'
    if op == 20:
        return f'rlwimi r{rA}, r{rD}, {rB}, {(w >> 6) & 31}, {(w >> 1) & 31}'
    if op == 21:
        return f'rlwinm r{rA}, r{rD}, {rB}, {(w >> 6) & 31}, {(w >> 1) & 31}{"." if w & 1 else ""}'
    if op == 23:
        return f'rlwnm r{rA}, r{rD}, r{rB}, {(w >> 6) & 31}, {(w >> 1) & 31}'
    mem = {32: 'lwz', 33: 'lwzu', 34: 'lbz', 35: 'lbzu', 36: 'stw', 37: 'stwu',
           38: 'lbzu', 40: 'lhz', 41: 'lhzu', 42: 'lha', 43: 'lhau', 44: 'sth',
           45: 'sthu', 46: 'lmw', 47: 'stmw', 48: 'lfs', 50: 'lfd', 52: 'stfs', 54: 'stfd'}
    if op in mem:
        return f'{mem[op]} r{rD}, {_sx16(w & 0xFFFF)}(r{rA})'
    if op == 31:
        xo = (w >> 1) & 0x3FF
        if xo == 444:
            return 'mr r%d, r%d' % (rA, rB) if rD == rB else f'or r{rA}, r{rD}, r{rB}'
        if xo == 339:
            return f'mflr r{rD}'
        if xo == 467:
            return f'mtlr r{rD}'
        if xo == 19:
            return f'mfcr r{rD}'
        if xo == 144:
            return f'mtcr r{rD}'
        if xo == 0:
            return f'cmp cr{rD >> 2}, r{rA}, r{rB}'
        if xo == 32:
            return f'cmpl cr{rD >> 2}, r{rA}, r{rB}'
        if xo == 40:
            return f'subf r{rD}, r{rA}, r{rB}'
        if xo == 266:
            return f'add r{rD}, r{rA}, r{rB}'
        if xo == 28:
            return f'and r{rA}, r{rD}, r{rB}'
        if xo == 316:
            return f'xor r{rA}, r{rD}, r{rB}'
        if xo == 954:
            return f'extsb r{rA}, r{rD}'
        if xo == 922:
            return f'extsh r{rA}, r{rD}'
        if xo == 26:
            return f'cntlzw r{rA}, r{rD}'
        if xo == 23:
            return f'lwzx r{rD}, r{rA}, r{rB}'
        if xo == 151:
            return f'stwx r{rD}, r{rA}, r{rB}'
        if xo == 459:
            return f'nand r{rA}, r{rD}, r{rB}'
        return f'op31.xo{xo} r{rD},r{rA},r{rB}'
    if op == 19:
        xo = (w >> 1) & 0x3FF
        return f'op19.xo{xo}'
    if op == 1:
        return f'op1'
    return f'.long 0x{w:08X}'


def dump_disasm(dol, start, count):
    out = []
    for i in range(count):
        pc = start + i * 4
        b = dol.read(pc, 4)
        if len(b) < 4:
            out.append(f'0x{pc:08X}  <outside image>')
            break
        w = struct.unpack('>I', b)[0]
        out.append(f'0x{pc:08X}  {w:08X}  {disasm_one(w, pc)}')
    return out


def main():
    if len(sys.argv) < 3:
        print(__doc__)
        return 1
    dol = Dol()
    mode = sys.argv[1]
    if mode == 'dis':
        start = int(sys.argv[2], 16)
        count = int(sys.argv[3], 0) if len(sys.argv) > 3 else 40
        for line in dump_disasm(dol, start, count):
            print(line)
        return 0
    if mode == 'strings':
        for needle in sys.argv[2:]:
            print(f'== strings containing {needle!r}')
            for addr, s in dol.strings():
                if needle.lower() in s.lower():
                    hits = dol.xrefs(addr)
                    print(f'  0x{addr:08X} {s!r}  refs={len(hits)}')
                    for site, kind, _ in hits:
                        print(f'      site 0x{site:08X} ({kind})')
    elif mode == 'addr':
        for a in sys.argv[2:]:
            target = int(a, 16)
            hits = dol.xrefs(target)
            ns = dol.nearest_string(target)
            print(f'0x{target:08X} string={ns} refs={len(hits)}')
            for site, kind, _ in hits:
                print(f'    site 0x{site:08X} ({kind})')
    elif mode == 'near':
        lo = int(sys.argv[2], 16)
        hi = lo + int(sys.argv[3], 0) if len(sys.argv) > 3 else lo + 0x400
        seen = {}
        for addr, s in dol.strings():
            hits = dol.xrefs(addr)
            for site, kind, _ in hits:
                if lo <= site < hi:
                    seen[site] = (addr, s)
        for site in sorted(seen):
            addr, s = seen[site]
            print(f'0x{site:08X} -> 0x{addr:08X} {s!r}')
    else:
        print(__doc__)
        return 1
    return 0


if __name__ == '__main__':
    sys.exit(main())
