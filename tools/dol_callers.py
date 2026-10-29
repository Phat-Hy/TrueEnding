#!/usr/bin/env python3
"""Find the call sites of a guest function address in a GameCube/Wii DOL.

The decompiled chunks name functions (`fn_8036F268`) but not their callers, and
`dol_xref.py` only resolves *data* references (lis+addi materialisations).  A
function call is `bl <target>` (opcode 18, AA=0, LK=1) and is therefore invisible
to a grep for the hex constant, because the displacement is relative.

Usage:
    python tools/dol_callers.py 0x8036F268 [0x...]
        Direct `bl` callers (LK=1) and `b` tail-jumps (LK=0), plus any
        lis+addi/lis+ori pair that materialises the address as a function
        pointer (e.g. a task-table registration).

Options:
    --funcs   Print only the containing function's start address for each site.
"""
import struct
import sys

sys.path.insert(0, __file__.rsplit('\\', 1)[0])
sys.path.insert(0, __file__.rsplit('/', 1)[0])
try:
    from dol_xref import Dol, _sx16
except ImportError:  # run from tools/
    from dol_xref import Dol, _sx16


def sx(v, bits):
    return v - (1 << bits) if v & (1 << (bits - 1)) else v


def branch_target(w, pc):
    """Return target address for opcode 18, else None."""
    if (w >> 26) != 18:
        return None
    li = w & 0x03FFFFFC
    li = sx(li, 26)
    return li if (w & 2) else (pc + li) & 0xFFFFFFFF


def scan_branches(dol):
    """Yield (pc, target, is_call) for every direct branch in text."""
    for base, buf, _kind in dol.regions:
        if _kind != 'text':
            continue
        for off in range(0, len(buf) - 3, 4):
            w = struct.unpack('>I', buf[off:off + 4])[0]
            if (w >> 26) != 18:
                continue
            tgt = branch_target(w, base + off)
            yield (base + off, tgt, bool(w & 1))


def materialisations(dol, target):
    """Yield (pc, kind) where target is built as lis+addi or lis+ori (r12 style pointers)."""
    hi = (target >> 16) & 0xFFFF
    lo = target & 0xFFFF
    out = []
    for base, buf, kind in dol.regions:
        if kind != 'text':
            continue
        for off in range(0, len(buf) - 7, 4):
            w1, w2 = struct.unpack('>II', buf[off:off + 8])
            # lis rD, hi
            if (w1 >> 26) != 15 or (w1 & 0xFFFF) != hi:
                continue
            rD = (w1 >> 21) & 0x1F
            rA1 = (w1 >> 16) & 0x1F
            op2 = w2 >> 26
            if op2 == 14:      # addi
                rD2 = (w2 >> 21) & 0x1F
                rA2 = (w2 >> 16) & 0x1F
                if rA2 == rD and sx(w2 & 0xFFFF, 16) == sx(lo, 16) and rD2 == rD:
                    out.append((base + off, 'lis+addi'))
            elif op2 == 24:    # ori
                rA2 = (w2 >> 16) & 0x1F
                rS = (w2 >> 21) & 0x1F
                if rA2 == rD and rS == rD and (w2 & 0xFFFF) == lo:
                    out.append((base + off, 'lis+ori'))
    return out


def containing_function(dol, pc):
    """Nearest preceding function label guess: scan backwards for a `bl`-target or prologue."""
    # Heuristic: walk back up to 0x4000 looking for `stwu r1, -N(r1)` or mflr r0 after it.
    for back in range(0, 0x2000, 4):
        q = pc - back
        b = dol.read(q, 4)
        if len(b) < 4:
            return None
        w = struct.unpack('>I', b)[0]
        # stwu r1, -x(r1): opcode 37, rD=1, rA=1
        if (w >> 26) == 37 and ((w >> 21) & 0x1F) == 1 and ((w >> 16) & 0x1F) == 1:
            nxt = dol.read(q + 4, 4)
            if len(nxt) == 4:
                w2 = struct.unpack('>I', nxt)[0]
                if w2 == 0x7C0802A6:  # mflr r0
                    return q
    return None


def main():
    args = [a for a in sys.argv[1:] if not a.startswith('--')]
    if not args:
        print(__doc__)
        return 1
    show_funcs = '--funcs' in sys.argv
    dol = Dol()
    branches = list(scan_branches(dol))
    for a in args:
        target = int(a, 16)
        print(f'== callers of 0x{target:08X}')
        hits = [(pc, is_call) for pc, tgt, is_call in branches if tgt == target]
        for pc, is_call in hits:
            fn = containing_function(dol, pc) if show_funcs else None
            tag = 'bl   ' if is_call else 'b(tail)'
            extra = f'  in fn_0x{fn:08X}' if fn else ''
            print(f'   site 0x{pc:08X}  {tag}{extra}')
        if not hits:
            print('   (no direct branch)')
        mats = materialisations(dol, target)
        if mats:
            print(f'   -- address materialised as a pointer --')
            for pc, kind in mats:
                fn = containing_function(dol, pc) if show_funcs else None
                extra = f'  in fn_0x{fn:08X}' if fn else ''
                print(f'   site 0x{pc:08X}  {kind}{extra}')
    return 0


if __name__ == '__main__':
    sys.exit(main())
