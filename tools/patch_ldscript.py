import sys
import os

EXTRA_SYMBOLS = """
    /* Generated Method B symbol definitions */
    lbl_80764848 = 0x80764848;
    lbl_807B0FC0 = 0x807B0FC0;
    lbl_807B11F8 = 0x807B11F8;
    lbl_807ABF20 = 0x807ABF20;
}
"""

def patch_ldscript(path):
    if not os.path.exists(path):
        return
    with open(path, "r") as f:
        content = f.read()
    
    if "Generated Method B symbol definitions" in content:
        return

    # Replace closing brace of SECTIONS with our symbols + closing brace
    # Find last occurrence of '}' in SECTIONS
    if "__ArenaHi = 0x81700000;\n}" in content:
        content = content.replace("__ArenaHi = 0x81700000;\n}", "__ArenaHi = 0x81700000;\n" + EXTRA_SYMBOLS)
    elif "__ArenaHi = 0x81700000;\r\n}" in content:
        content = content.replace("__ArenaHi = 0x81700000;\r\n}", "__ArenaHi = 0x81700000;\r\n" + EXTRA_SYMBOLS)
    
    with open(path, "w") as f:
        f.write(content)
    print(f"Patched {path}")

if __name__ == "__main__":
    path = sys.argv[1] if len(sys.argv) > 1 else "build/SLSEXJ/ldscript.lcf"
    patch_ldscript(path)
