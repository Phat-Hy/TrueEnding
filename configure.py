#!/usr/bin/env python3

###
# Generates build files for Project The Maybe(Not) Last Story (TrueEnding).
#
# Usage:
#   python configure.py
#   ninja
###

import argparse
import sys
from pathlib import Path
from typing import Any, Dict, List

from tools.project import (
    Object,
    ProgressCategory,
    ProjectConfig,
    calculate_progress,
    generate_build,
    is_windows,
)

DEFAULT_VERSION = 0
VERSIONS = [
    "SLSEXJ",  # The Last Story (USA)
]

parser = argparse.ArgumentParser()
parser.add_argument(
    "mode",
    choices=["configure", "progress"],
    default="configure",
    help="script mode (default: configure)",
    nargs="?",
)
parser.add_argument(
    "-v",
    "--version",
    choices=VERSIONS,
    type=str.upper,
    default=VERSIONS[DEFAULT_VERSION],
    help="version to build",
)
parser.add_argument(
    "--build-dir",
    metavar="DIR",
    type=Path,
    default=Path("build"),
    help="base build directory (default: build)",
)
parser.add_argument(
    "--compilers",
    metavar="DIR",
    type=Path,
    default=Path("build/compilers"),
    help="path to compilers",
)
parser.add_argument(
    "--map",
    action="store_true",
    help="generate map file(s)",
)
parser.add_argument(
    "--debug",
    action="store_true",
    help="build with debug info (non-matching)",
)
parser.add_argument(
    "--non-matching",
    dest="non_matching",
    action="store_true",
    help="builds equivalent (but non-matching) or modded objects",
)
args = parser.parse_args()

config = ProjectConfig()
config.version = str(args.version)
version_num = VERSIONS.index(config.version)

config.build_dir = args.build_dir
config.compilers_path = args.compilers
config.generate_map = args.map
config.non_matching = args.non_matching
config.dtk_path = Path("tools/dtk.exe")
config.objdiff_path = Path("tools/objdiff-cli.exe")

# Toolchain versions
config.binutils_tag = "2.42-1"
config.compilers_tag = "20240706"
config.dtk_tag = "v1.8.4"
config.objdiff_tag = "v3.8.1"
config.sjiswrap_tag = "v1.2.0"
config.linker_version = "Wii/1.0"  # Metrowerks CodeWarrior 4.3 build 145

# Project paths
config.config_path = Path("config.yml")
config.dol_path = Path("orig/main.dol")
config.check_sha_path = Path("orig/main.dol.sha1")
config.ldscript = Path("asm/ldscript.lcf")
config.ldflags = ["-fp hard", "-nodefaults"]
config.shift_jis = False

# Base C/C++ compiler flags (CodeWarrior 4.3 build 145)
cflags_base = [
    "-nodefaults",
    "-proc gekko",
    "-align powerpc",
    "-enum int",
    "-fp hard",
    "-O4,p",
    "-inline auto",
    "-Cpp_exceptions on",
    "-RTTI off",
    "-sdata 48",
    "-sdata2 48",
    "-i ./include",
    "-i ./src",
]

# Base C/C++ compiler flags for OS library
cflags_os = [
    "-nodefaults",
    "-proc gekko",
    "-align powerpc",
    "-enum int",
    "-fp hard",
    "-O4,p",
    "-inline auto",
    "-Cpp_exceptions on",
    "-RTTI off",
    "-sdata 8",
    "-sdata2 8",
    "-i ./include",
    "-i ./src",
]

config.cflags = cflags_base

# Registered libraries and translation units
config.libs = [
    {
        "lib": "Runtime",
        "mw_version": "Wii/1.0",
        "cflags": cflags_base,
        "objects": [
            Object(True, "__init_hardware.c"),
            Object(True, "memcpy.c"),
            Object(True, "memset.c"),
            Object(True, "global_destructor_chain.c"),
            Object(True, "__init_cpp_exceptions.cpp"),
        ],
    },
    {
        "lib": "OS",
        "mw_version": "Wii/1.0",
        "cflags": cflags_os,
        "objects": [
            Object(True, "OSAlarm.c"),
            Object(True, "OSThread.c"),
            Object(True, "OSTime.c"),
        ],
    },
]

if args.mode == "configure":
    generate_build(config)
elif args.mode == "progress":
    calculate_progress(config)
