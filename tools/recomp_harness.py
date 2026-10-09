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


def build_runner(jobs: int = 12):
    """Compile all lifted chunks and link the native PC host runner."""
    from concurrent.futures import ThreadPoolExecutor

    chunks_dir = GENERATED_DIR / "chunks"
    obj_dir = RECOMP_DIR / "chunks"
    obj_dir.mkdir(parents=True, exist_ok=True)

    if not chunks_dir.exists():
        print(f"Error: {chunks_dir} not found. Run 'python tools/recomp_harness.py lift' first.")
        return False

    chunk_files = sorted(list(chunks_dir.glob("*.c")))
    if not chunk_files:
        print(f"Error: no chunks found in {chunks_dir}")
        return False

    # 1. Compile core support objects
    support_files = [
        (ROOT_DIR / "tools" / "DolRecomp" / "src" / "cpu" / "cpu.c", RECOMP_DIR / "cpu.o"),
        (ROOT_DIR / "tools" / "DolRecomp" / "src" / "frontend" / "container" / "dol.c", RECOMP_DIR / "dol.o"),
        (ROOT_DIR / "recomp" / "replacements.c", RECOMP_DIR / "replacements.o"),
        (ROOT_DIR / "recomp" / "gfx_d3d11.c", RECOMP_DIR / "gfx_d3d11.o"),
        (ROOT_DIR / "recomp" / "gfx_d3d12.c", RECOMP_DIR / "gfx_d3d12.o"),
        (ROOT_DIR / "recomp" / "gfx_backend.c", RECOMP_DIR / "gfx_backend.o"),
        (ROOT_DIR / "recomp" / "host_runner.c", RECOMP_DIR / "host_runner.o"),
    ]

    includes = [
        "-I", str(ROOT_DIR / "recomp"),
        "-I", str(ROOT_DIR / "tools" / "DolRecomp" / "src"),
        "-I", str(GENERATED_DIR),
    ]

    for src, obj in support_files:
        if not obj.exists() or obj.stat().st_mtime < src.stat().st_mtime:
            print(f"Compiling {src.name} -> {obj.name}...")
            cmd = [str(GCC_BIN), "-c", str(src), "-o", str(obj)] + includes + ["-O2"]
            res = subprocess.run(cmd)
            if res.returncode != 0:
                print(f"Failed to compile {src}")
                return False

    # 2. Compile chunks in parallel (with incremental check)
    to_compile = []
    all_objs = [str(obj.resolve()) for _, obj in support_files]
    for c_file in chunk_files:
        o_file = obj_dir / (c_file.stem + ".o")
        all_objs.append(str(o_file.resolve()))
        if not o_file.exists() or o_file.stat().st_mtime < c_file.stat().st_mtime:
            to_compile.append((c_file, o_file))

    print(f"Total chunks: {len(chunk_files)} ({len(to_compile)} to compile, {len(chunk_files) - len(to_compile)} cached)")

    if to_compile:
        def compile_chunk(item):
            src, obj = item
            cmd = [str(GCC_BIN), "-c", str(src), "-o", str(obj)] + includes + ["-O1"]
            res = subprocess.run(cmd)
            return res.returncode == 0

        t0 = time.time()
        print(f"Compiling {len(to_compile)} chunks with {jobs} worker threads...")
        with ThreadPoolExecutor(max_workers=jobs) as ex:
            results = list(ex.map(compile_chunk, to_compile))
        t1 = time.time()

        if not all(results):
            print("Error: one or more chunks failed to compile.")
            return False
        print(f"Chunk compilation completed in {t1 - t0:.2f} seconds.")

    # 3. Link executable using response file
    runner_exe = RECOMP_DIR / "tls_runner.exe"
    rsp_path = RECOMP_DIR / "objects.rsp"
    with open(rsp_path, "w", encoding="utf-8") as f:
        for obj in all_objs:
            f.write(f'"{obj.replace(os.sep, "/")}"\n')

    print(f"Linking {runner_exe.name} with {len(all_objs)} object files...")
    link_cmd = [
        str(GCC_BIN),
        f"@{rsp_path}",
        "-o", str(runner_exe),
        "-lm",
        "-lgdi32",
        "-luser32",
        "-ld3d12",
        "-ld3d11",
        "-ldxgi",
        "-ldxguid",
        "-lwinmm",
    ]
    t0 = time.time()
    res = subprocess.run(link_cmd)
    t1 = time.time()

    if res.returncode != 0 or not runner_exe.exists():
        print(f"Error: linking failed with exit code {res.returncode}")
        return False

    print(f"SUCCESS! Built native PC runner: {runner_exe} ({runner_exe.stat().st_size / (1024*1024):.2f} MB) in {t1 - t0:.2f}s")
    return True


def run_runner(blocks: int = 10000):
    """Run the native PC runner against the original main.dol."""
    runner_exe = RECOMP_DIR / "tls_runner.exe"
    if not runner_exe.exists():
        print(f"Runner executable {runner_exe} not found. Building first...")
        if not build_runner():
            return False

    cmd = [str(runner_exe), "--dol", str(DOL_PATH), "--blocks", str(blocks)]
    print(f"Executing: {' '.join(cmd)}\n")
    res = subprocess.run(cmd)
    return res.returncode == 0


def main():
    parser = argparse.ArgumentParser(description="DolRecomp PC Lifting Harness for The Last Story")
    parser.add_argument(
        "action",
        choices=["lift", "status", "convert-symbols", "compile-test", "build-runner", "run"],
        default="status",
        nargs="?",
        help="Action to perform",
    )
    parser.add_argument("-j", "--jobs", type=int, default=12, help="Number of worker jobs for parallel work")
    parser.add_argument("--blocks", type=int, default=10000, help="Max blocks to execute in runner")
    args = parser.parse_args()

    if args.action == "convert-symbols":
        convert_symbols()
    elif args.action == "lift":
        run_lift(jobs=args.jobs)
    elif args.action == "status":
        check_status()
    elif args.action == "compile-test":
        compile_test()
    elif args.action == "build-runner":
        build_runner(jobs=args.jobs)
    elif args.action == "run":
        run_runner(blocks=args.blocks)


if __name__ == "__main__":
    main()

