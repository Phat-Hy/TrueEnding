#!/usr/bin/env python3
"""
DolRecomp PC Lifting Harness for The Last Story (USA / SLSEXJ)
Project TrueEnding

Orchestrates:
1. Exporting symbols from config/symbols.txt to DolRecomp symbol map format.
2. Invoking tools/dolrecomp.exe to statically lift orig/main.dol PowerPC code into C chunks.
3. Managing native recompilation host targets and function replacement hooks.
"""

import argparse
import os
import re
import subprocess
import sys
import time
from pathlib import Path

ROOT_DIR = Path(__file__).resolve().parent.parent
DOL_PATH = ROOT_DIR / "orig" / "main.dol"
SYMBOLS_TXT = ROOT_DIR / "config" / "symbols.txt"
BUILD_DIR = ROOT_DIR / "build"
RECOMP_DIR = BUILD_DIR / "recomp"
GENERATED_DIR = RECOMP_DIR / "generated"
SYMBOLS_MAP = BUILD_DIR / "symbols.map"
DOLRECOMP_BIN = ROOT_DIR / "tools" / "dolrecomp.exe"
GCC_BIN = ROOT_DIR / "tools" / "w64devkit" / "bin" / "gcc.exe"


def convert_symbols():
    """Convert config/symbols.txt into DolRecomp symbol map format: <addr_hex> <size_hex> <name>"""
    if not SYMBOLS_TXT.exists():
        print(f"Error: {SYMBOLS_TXT} does not exist.")
        return False

    BUILD_DIR.mkdir(parents=True, exist_ok=True)
    count = 0
    with open(SYMBOLS_TXT, "r", encoding="utf-8") as f, open(SYMBOLS_MAP, "w", encoding="utf-8") as out:
        for line in f:
            line = line.strip()
            if not line or line.startswith("//"):
                continue
            # Format: name = section:0xADDR; // type:TYPE size:0xSIZE ...
            m = re.match(r"^(\S+)\s*=\s*[^:]+:0x([0-9a-fA-F]+);\s*(?://.*size:0x([0-9a-fA-F]+))?", line)
            if m:
                name, addr_str, size_str = m.group(1), m.group(2), m.group(3)
                size = int(size_str, 16) if size_str else 0
                addr = int(addr_str, 16)
                out.write(f"{addr:08X} {size:08X} {name}\n")
                count += 1

    print(f"Exported {count} symbols to {SYMBOLS_MAP}")
    return True


def run_lift(jobs: int = 8):
    """Run DolRecomp to decompile main.dol into portable C chunks."""
    if not DOL_PATH.exists():
        print(f"Error: {DOL_PATH} does not exist. Please place original main.dol in orig/")
        return False

    if not DOLRECOMP_BIN.exists():
        print(f"Error: {DOLRECOMP_BIN} not found. Please build DolRecomp first.")
        return False

    convert_symbols()
    RECOMP_DIR.mkdir(parents=True, exist_ok=True)

    cmd = [
        str(DOLRECOMP_BIN),
        str(DOL_PATH),
        "SLSEXJ",
        str(RECOMP_DIR),
        f"-j{jobs}",
        "--map",
        str(SYMBOLS_MAP),
    ]

    print(f"Executing: {' '.join(cmd)}")
    t0 = time.time()
    res = subprocess.run(cmd)
    t1 = time.time()

    if res.returncode != 0:
        print(f"Error: DolRecomp failed with exit code {res.returncode}")
        return False

    print(f"Lifting completed successfully in {t1 - t0:.2f} seconds.")
    print(f"Generated C chunks: {GENERATED_DIR / 'chunks'}")
    return True


def check_status():
    """Report status of the lifted C chunks and toolchain."""
    print("=== DolRecomp PC Lifting Status ===")
    print(f"DOL Binary:          {DOL_PATH} ({'Exists' if DOL_PATH.exists() else 'Missing'})")
    print(f"DolRecomp Tool:      {DOLRECOMP_BIN} ({'Ready' if DOLRECOMP_BIN.exists() else 'Missing'})")
    print(f"Host GCC Compiler:   {GCC_BIN} ({'Ready' if GCC_BIN.exists() else 'Missing'})")

    if (GENERATED_DIR / "chunks").exists():
        chunks = list((GENERATED_DIR / "chunks").glob("*.c"))
        print(f"Lifted C Chunks:     {len(chunks)} chunk files in {GENERATED_DIR / 'chunks'}")
        if (GENERATED_DIR / "generated_symbols.h").exists():
            with open(GENERATED_DIR / "generated_symbols.h", "r", encoding="utf-8") as f:
                first_lines = [next(f) for _ in range(10)]
            for l in first_lines:
                if "DOLRECOMP_SYMBOL_COUNT" in l:
                    print(f"Executable Symbols:  {l.strip().split()[-1]}")
    else:
        print("Lifted C Chunks:     None (run 'python tools/recomp_harness.py lift' to generate)")


def compile_test():
    """Verify host compilation of a lifted chunk with host GCC."""
    if not GCC_BIN.exists():
        print(f"Error: Host GCC not found at {GCC_BIN}")
        return False

    chunk_sample = GENERATED_DIR / "chunks" / "chunk_0000_text0_80004000.c"
    if not chunk_sample.exists():
        print(f"Error: {chunk_sample} not found. Run lift first.")
        return False

    test_obj = RECOMP_DIR / "test_chunk_0000.o"
    cmd = [
        str(GCC_BIN),
        "-c",
        str(chunk_sample),
        "-o",
        str(test_obj),
        "-I",
        str(ROOT_DIR / "tools" / "DolRecomp" / "src"),
        "-O2",
    ]
    print(f"Compiling test chunk: {' '.join(cmd)}")
    t0 = time.time()
    res = subprocess.run(cmd)
    t1 = time.time()

    if res.returncode == 0 and test_obj.exists():
        print(f"Success! Native x64 object generated ({test_obj.stat().st_size} bytes) in {t1 - t0:.2f}s")
        return True
    else:
        print(f"Compilation failed with exit code {res.returncode}")
        return False


def main():
    parser = argparse.ArgumentParser(description="DolRecomp PC Lifting Harness for The Last Story")
    parser.add_argument(
        "action",
        choices=["lift", "status", "convert-symbols", "compile-test"],
        default="status",
        nargs="?",
        help="Action to perform",
    )
    parser.add_argument("-j", "--jobs", type=int, default=8, help="Number of worker jobs for lifting")
    args = parser.parse_args()

    if args.action == "convert-symbols":
        convert_symbols()
    elif args.action == "lift":
        run_lift(jobs=args.jobs)
    elif args.action == "status":
        check_status()
    elif args.action == "compile-test":
        compile_test()


if __name__ == "__main__":
    main()
