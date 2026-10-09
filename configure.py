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
            Object(False, "__init_cpp_exceptions.cpp"),
            Object(True, "init_user.c"),
        ],
    },
    {
        "lib": "OS",
        "mw_version": "Wii/1.0",
        "cflags": cflags_os,
        "objects": [
            Object(True, "OSAlarm.c"),
            Object(True, "OSArena.c"),
            Object(True, "OSCache.c"),
            Object(True, "OSContext.c"),
            Object(True, "OSError.c"),
            Object(True, "OSInterrupt.c"),
            Object(True, "OSThread.c"),
            Object(True, "OSTime.c"),
            Object(True, "OSIpc.c"),
            Object(True, "OSReset.c"),
            Object(True, "OSPlayTime.c"),
            Object(True, "OSTitle.c"),
            Object(True, "PSMTX.c"),
            Object(True, "mtx.c"),
            Object(True, "mtx44.c"),
            Object(True, "vec.c"),
            Object(True, "quat.c"),
            Object(True, "DVDFS.c"),
            Object(True, "dvd.c"),
            Object(True, "dvdqueue.c"),
            Object(True, "dvderror.c"),
            Object(True, "dvdFatal.c"),
            Object(True, "dvd_broadway.c"),
            Object(True, "vi3in1.c"),
            Object(True, "vi.c"),
            Object(True, "pad.c"),
            Object(True, "ai.c"),
            Object(True, "ax.c"),
            Object(True, "AXAlloc.c"),
            Object(True, "AXAux.c"),
            Object(True, "AXCL.c"),
            Object(True, "AXOut.c"),
            Object(True, "AXVPB.c"),
            Object(True, "AXSPB.c"),
            Object(True, "AXProf.c"),
            Object(True, "AXFXReverbHi.c"),
            Object(True, "AXFXReverbHiExp.c"),
            Object(True, "AXFXReverbStdExp.c"),
            Object(True, "AXFXDelay.c"),
            Object(True, "AXFXChorusExp.c"),
            Object(True, "AXFXReverbHiExpDpl2.c"),
            Object(True, "AXFXReverbStd.c"),
            Object(True, "AXFXReverbHiDpl2.c"),
            Object(True, "AXFXHooks.c"),
            Object(True, "dsp.c"),
            Object(True, "dsp_task.c"),
            Object(True, "GXInit.c"),
            Object(True, "GXFifo.c"),
            Object(True, "GXAttr.c"),
            Object(True, "GXMisc.c"),
            Object(True, "GXGeometry.c"),
            Object(True, "GXFrameBuf.c"),
            Object(True, "GXLight.c"),
            Object(True, "GXTexture.c"),
            Object(True, "GXBump.c"),
            Object(True, "GXTev.c"),
            Object(True, "isfs.c"),
            Object(True, "ipc.c"),
            Object(True, "ipcclt.c"),
            Object(True, "ipcprof.c"),
            Object(True, "nand.c"),
            Object(True, "NANDOpenClose.c"),
            Object(True, "NANDCheck.c"),
            Object(True, "NANDCore.c"),
            Object(True, "NANDLogging.c"),
            Object(True, "nanderror.c"),
            Object(True, "scsystem.c"),
            Object(True, "scapi.c"),
            Object(True, "hcis.c"),
            Object(True, "bta_sys.c"),
            Object(True, "bta_dm.c"),
            Object(True, "bta_hh.c"),
            Object(True, "btm_acl.c"),
            Object(True, "btm_dev.c"),
            Object(True, "btm_inq.c"),
            Object(True, "btm_sco.c"),
            Object(True, "btm_sec.c"),
            Object(True, "gap.c"),
            Object(True, "hid.c"),
            Object(True, "l2cap.c"),
            Object(True, "rfcomm.c"),
            Object(True, "sdp.c"),
            Object(True, "tpl.c"),
            Object(True, "gx_draw.c"),
            Object(True, "gx_anim.c"),
            Object(True, "usb.c"),
            Object(True, "kpad.c"),
            Object(True, "wpad.c"),
            Object(True, "wpad_mem.c"),
            Object(True, "wpad_core.c"),
            Object(True, "trk.c"),
            Object(True, "msl_c.c"),
            Object(True, "msl_cpp.c"),
            Object(True, "runtime.c"),
        ],
    },
]

if args.mode == "configure":
    generate_build(config)
elif args.mode == "progress":
    calculate_progress(config)
