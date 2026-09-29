import struct
import sys
import re

def inspect_dol(dol_path):
    with open(dol_path, "rb") as f:
        data = f.read()

    print(f"=== DOL HEADER INSPECTION: {dol_path} ===")
    print(f"Total Binary Size: {len(data):,} bytes ({len(data)/(1024*1024):.2f} MB)")

    # Read DOL header (256 bytes)
    header = data[:256]
    text_offsets = struct.unpack(">7I", header[0x00:0x1C])
    data_offsets = struct.unpack(">11I", header[0x1C:0x48])
    text_addrs = struct.unpack(">7I", header[0x48:0x64])
    data_addrs = struct.unpack(">11I", header[0x64:0x90])
    text_lens = struct.unpack(">7I", header[0x90:0xAC])
    data_lens = struct.unpack(">11I", header[0xAC:0xD8])
    bss_addr, bss_len, entry_point = struct.unpack(">3I", header[0xD8:0xE4])

    print(f"\nEntry Point: 0x{entry_point:08X}")
    print(f"BSS Address: 0x{bss_addr:08X} (Size: 0x{bss_len:X} / {bss_len:,} bytes)")

    print("\n--- TEXT SECTIONS (Executable Code) ---")
    total_code = 0
    for i in range(7):
        if text_lens[i] > 0:
            print(f"  Text[{i}]: Offset 0x{text_offsets[i]:08X} -> Mem 0x{text_addrs[i]:08X} - 0x{text_addrs[i]+text_lens[i]:08X} (Size: {text_lens[i]:,} bytes / 0x{text_lens[i]:X})")
            total_code += text_lens[i]

    print("\n--- DATA SECTIONS (Constants, Globals, Strings) ---")
    total_data = 0
    for i in range(11):
        if data_lens[i] > 0:
            print(f"  Data[{i}]: Offset 0x{data_offsets[i]:08X} -> Mem 0x{data_addrs[i]:08X} - 0x{data_addrs[i]+data_lens[i]:08X} (Size: {data_lens[i]:,} bytes / 0x{data_lens[i]:X})")
            total_data += data_lens[i]

    print(f"\nTotal Code Size: {total_code:,} bytes ({total_code/(1024*1024):.2f} MB)")
    print(f"Total Data Size: {total_data:,} bytes ({total_data/(1024*1024):.2f} MB)")

    # Search for compiler & build strings
    print("\n--- COMPILER & BUILD SIGNATURES ---")
    patterns = [
        rb"Metrowerks[^\x00\r\n]{0,100}",
        rb"CodeWarrior[^\x00\r\n]{0,100}",
        rb"MetroTRK[^\x00\r\n]{0,100}",
        rb"Revolution OS[^\x00\r\n]{0,100}",
        rb"RVL_SDK[^\x00\r\n]{0,100}",
        rb"Version [0-9]+\.[0-9]+[^\x00\r\n]{0,50}",
        rb"<< RVL_SDK - [^>]+ >>",
        rb"<< ModernGekko [^>]+ >>",
        rb"feelplus[^\x00\r\n]{0,60}",
        rb"Mistwalker[^\x00\r\n]{0,60}",
        rb"AQ Interactive[^\x00\r\n]{0,60}"
    ]

    found_matches = set()
    for pattern in patterns:
        for match in re.finditer(pattern, data, re.IGNORECASE):
            text = match.group(0).decode("latin-1", errors="replace").strip()
            if text and text not in found_matches:
                found_matches.add(text)
                print(f"  [Found @ 0x{match.start():08X}]: {text}")

if __name__ == "__main__":
    path = sys.argv[1] if len(sys.argv) > 1 else "orig/main.dol"
    inspect_dol(path)
