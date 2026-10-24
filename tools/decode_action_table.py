"""Decode the game's action-id -> button-bit table straight out of orig/main.dol.

The pad update (fn_800DDD18 at 0x800DE0A8) does:
    r6 = *(u32*)(r13 - 26288 + action*4);  mtctr r6; bctr
i.e. it jumps through a table of function pointers, one per action id, and each
target is a `li r6, <button bit>` thunk feeding the action-mask builder. Reading
the table names what every action id is bound to without guessing.
"""
import struct
import sys

DOL_PATH = r"orig\main.dol"
SDA_BASE = 0x808852A0
TABLE_OFFSET = -26288
# fn_800DDD18 computes the dispatch table as r25 - 26288 with r25 = 0x80780000
TABLE_BASE = 0x80780000 - 26288
ACTION_COUNT = 20


def load_dol(path):
    raw = open(path, "rb").read()
    # Wii DOL variant used by this game: 7 text + 11 data sections (see
    # tools/DolRecomp/src/frontend/container/dol.h), so the arrays are laid out
    # as 7/11/7/11/7/11, not the GameCube 7/7/7/7/7/7 form.
    text_off = struct.unpack_from(">7I", raw, 0x00)
    data_off = struct.unpack_from(">11I", raw, 0x1C)
    text_addr = struct.unpack_from(">7I", raw, 0x48)
    data_addr = struct.unpack_from(">11I", raw, 0x64)
    text_size = struct.unpack_from(">7I", raw, 0x90)
    data_size = struct.unpack_from(">11I", raw, 0xAC)
    bss_addr = struct.unpack_from(">I", raw, 0xD8)[0]
    bss_size = struct.unpack_from(">I", raw, 0xDC)[0]
    sections = []
    for i in range(7):
        if text_size[i]:
            sections.append((text_addr[i], text_size[i], text_off[i]))
    for i in range(11):
        if data_size[i]:
            sections.append((data_addr[i], data_size[i], data_off[i]))
    return raw, sections, bss_addr, bss_size


def read_word(raw, sections, address):
    for base, size, offset in sections:
        if base <= address < base + size:
            return struct.unpack_from(">I", raw, offset + (address - base))[0]
    return None


def main():
    raw, sections, bss_addr, bss_size = load_dol(DOL_PATH)
    table = TABLE_BASE
    print(f"SDA base 0x{SDA_BASE:08X}, action table 0x{table:08X}, .bss ends 0x{bss_addr + bss_size:08X}")
    for action in range(ACTION_COUNT):
        entry = read_word(raw, sections, table + action * 4)
        if entry is None:
            print(f"action {action:2d}: <table not in an initialized section>")
            continue
        thunk = read_word(raw, sections, entry)
        note = ""
        if thunk is not None:
            # li r6, imm  ==  addi r6, 0, imm  ==  0x38C00000 | imm
            if (thunk & 0xFFFF0000) == 0x38C00000:
                note = f"button bit 0x{thunk & 0xFFFF:04X}"
            else:
                note = f"instruction 0x{thunk:08X}"
        print(f"action {action:2d}: 0x{entry:08X} -> {note}")
    return 0


if __name__ == "__main__":
    sys.exit(main())
