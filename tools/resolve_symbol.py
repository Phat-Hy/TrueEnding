#!/usr/bin/env python3
"""Resolve guest PowerPC addresses to the nearest symbol in config/symbols.txt.

The recompiled chunks, the runner probes and the handover dossier all speak in
raw addresses (`0x800838B8`, `lr=0x80083930`). Naming those addresses is what
turns "the guest returned into garbage" into "fn_800838B8's saved LR was
clobbered", so keep the mapping one command away.

Usage:
    python tools/resolve_symbol.py 0x800838B8 0x80083930 800D28FC
    python tools/resolve_symbol.py --containing 0x80083930   # function only
"""
import bisect
import os
import re
import sys

SYMBOL_FILE = os.path.join(os.path.dirname(os.path.abspath(__file__)), "..", "config", "symbols.txt")

# `name = section:0xADDRESS; // type:function size:0xNN scope:global`
_LINE = re.compile(r"^(\S+)\s*=\s*(\.\w+(?::\w+)?)\s*:\s*0x([0-9A-Fa-f]+)\s*;(.*)$")
_SIZE = re.compile(r"size:0x([0-9A-Fa-f]+)")


def load_symbols(path=SYMBOL_FILE):
    """Return a sorted list of (address, name, section, size)."""
    symbols = []
    with open(path, encoding="utf-8", errors="replace") as handle:
        for raw in handle:
            match = _LINE.match(raw.strip())
            if not match:
                continue
            name, section, address, rest = match.groups()
            size_match = _SIZE.search(rest)
            size = int(size_match.group(1), 16) if size_match else 0
            symbols.append((int(address, 16), name, section, size))
    symbols.sort(key=lambda entry: entry[0])
    return symbols


class Resolver:
    def __init__(self, symbols=None):
        self.symbols = symbols if symbols is not None else load_symbols()
        self.addresses = [entry[0] for entry in self.symbols]

    def resolve(self, address):
        """Nearest preceding symbol plus its offset, or None below the first."""
        index = bisect.bisect_right(self.addresses, address) - 1
        if index < 0:
            return None
        base, name, section, size = self.symbols[index]
        return {
            "address": address,
            "base": base,
            "name": name,
            "section": section,
            "size": size,
            "offset": address - base,
        }

    def format(self, address, containing=False):
        hit = self.resolve(address)
        if hit is None:
            return f"0x{address:08X} -> <below the first symbol>"
        if containing and hit["size"] and hit["offset"] >= hit["size"]:
            return (f"0x{address:08X} -> {hit['name']}+0x{hit['offset']:X} "
                    f"(outside its 0x{hit['size']:X}-byte body)")
        if hit["offset"] == 0:
            return f"0x{address:08X} -> {hit['name']} ({hit['section']})"
        return f"0x{address:08X} -> {hit['name']}+0x{hit['offset']:X} (base 0x{hit['base']:08X})"


def main(argv):
    containing = "--containing" in argv
    args = [a for a in argv if not a.startswith("--")]
    if not args:
        print(__doc__)
        return 1
    resolver = Resolver()
    for arg in args:
        try:
            address = int(arg, 0)
        except ValueError:
            print(f"{arg}: not a number")
            continue
        print(resolver.format(address, containing=containing))
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv[1:]))
