"""Decode the input indirection tables the action API uses (orig/main.dol).

fn_800A555C(chan, action) is a thin wrapper:

    800A556C  r7 = 0x80782858        ; channel map
    800A5570  r6 = 0x80782868        ; action map
    800A5578  r4 = *(r7 + chan*4)    ; device index handed to the evaluator
    800A557C  r5 = *(r6 + action*4)  ; REAL action bit index
    800A5580  b 0x800DEEDC

so the id a caller passes is not the bit that gets tested: it is remapped. That
is why the title screen's "push any button" (action 5) never fired even though
button presses were arriving - action 5 maps to a different bit. This tool prints
both maps, plus what each *real* bit is bound to in fn_800DDD18's dispatch table.
"""
import struct
import sys

DOL_PATH = r"orig\main.dol"
CHAN_MAP = 0x80730000 + 10392   # lis r7,-32653 / addi 10392 -> 0x80732898
ACTION_MAP = 0x80730000 + 10408  # lis r6,-32653 / addi 10408 -> 0x807328A8
ACTION_MAP_ENTRIES = 32
PAD_ACTION_TABLE = 0x80780000 - 26288


def load_dol(path):
    raw = open(path, "rb").read()
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
    print("channel map (logical chan -> device index):")
    for chan in range(4):
        print(f"  chan {chan} -> {read_word(raw, sections, CHAN_MAP + chan * 4)}")

    print("\naction map (caller's action id -> real action bit):")
    for action in range(ACTION_MAP_ENTRIES):
        real = read_word(raw, sections, ACTION_MAP + action * 4)
        if real is None:
            break
        bound = "unbound"
        if real < 32:
            thunk = read_word(raw, sections, PAD_ACTION_TABLE + real * 4)
            instr = read_word(raw, sections, thunk) if thunk else None
            if instr is not None and (instr & 0xFFFF0000) == 0x38C00000:
                bound = f"button bit 0x{instr & 0xFFFF:04X}"
            elif thunk == PAD_ACTION_TABLE and False:
                bound = "loop tail"
        print(f"  action {action:2d} -> real bit {real} ({bound})")
    return 0


if __name__ == "__main__":
    sys.exit(main())
