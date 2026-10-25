#!/usr/bin/env python3
"""Drive Dolphin headlessly for reference captures.

The Dolphin build in G:\\Program\\Dolphin-x64 has no scripting interface, but it does
handle Win32 key messages on its render window, so this script:

  1. launches `Dolphin.exe -b -e <iso>` (batch mode, no game list),
  2. finds the Dolphin top-level window,
  3. posts synthetic WM_KEYDOWN/WM_KEYUP for a list of `wait:key` steps,
  4. optionally posts the screenshot hotkey (default F9) periodically,
  5. kills the process at the end.

Screenshots land in %APPDATA%\\Dolphin Emulator\\ScreenShots (Dolphin's own readback of
the framebuffer, so it does not depend on the window being visible).

Usage:
    python tools/dolphin_capture.py --plan "15:A/10:A/20:F9,10:F9" --run 60
Each `/`-separated step is `<seconds_to_wait>:<KEY or shot>`.  `shot` posts the
screenshot hotkey once.
"""
import argparse
import ctypes
import ctypes.wintypes as wintypes
import os
import subprocess
import sys
import time

user32 = ctypes.WinDLL("user32", use_last_error=True)

WM_KEYDOWN = 0x0100
WM_KEYUP = 0x0101
WM_SYSKEYDOWN = 0x0104
WM_SYSKEYUP = 0x0105

VK = {
    "A": 0x41, "B": 0x42, "C": 0x43, "D": 0x44, "E": 0x45, "F": 0x46, "G": 0x47,
    "H": 0x48, "I": 0x49, "J": 0x4A, "K": 0x4B, "L": 0x4C, "M": 0x4D, "N": 0x4E,
    "O": 0x4F, "P": 0x50, "Q": 0x51, "R": 0x52, "S": 0x53, "T": 0x54, "U": 0x55,
    "V": 0x56, "W": 0x57, "X": 0x58, "Y": 0x59, "Z": 0x5A,
    "RETURN": 0x0D, "ENTER": 0x0D, "SPACE": 0x20, "ESCAPE": 0x1B, "ESC": 0x1B,
    "UP": 0x26, "DOWN": 0x28, "LEFT": 0x25, "RIGHT": 0x27,
    "TAB": 0x09, "BACK": 0x08, "F1": 0x70, "F2": 0x71, "F3": 0x72, "F4": 0x73,
    "F5": 0x74, "F6": 0x75, "F7": 0x76, "F8": 0x77, "F9": 0x78, "F10": 0x79,
    "F11": 0x7A, "F12": 0x7B,
    # directions for the wiimote/cursor: numpad as used by Dolphin's default maps
    "1": 0x31, "2": 0x32, "3": 0x33, "0": 0x30,
}

EnumWindowsProc = ctypes.WINFUNCTYPE(wintypes.BOOL, wintypes.HWND, wintypes.LPARAM)


def windows_of_pid(pid):
    found = []

    def cb(hwnd, _lparam):
        wpid = wintypes.DWORD()
        user32.GetWindowThreadProcessId(hwnd, ctypes.byref(wpid))
        if wpid.value == pid:
            buf = ctypes.create_unicode_buffer(512)
            user32.GetWindowTextW(hwnd, buf, 512)
            cls = ctypes.create_unicode_buffer(256)
            user32.GetClassNameW(hwnd, cls, 256)
            found.append((hwnd, buf.value, cls.value, bool(user32.IsWindowVisible(hwnd))))
        return True

    user32.EnumWindows(EnumWindowsProc(cb), 0)
    return found


def post_key(hwnd, vk, hold=0.06):
    # lParam bits: repeat=1, scancode, extended flag for arrows/F-keys
    scan = user32.MapVirtualKeyW(vk, 0)
    ext = 0x01000000 if vk in (0x26, 0x28, 0x25, 0x27, 0x70, 0x71, 0x72, 0x73,
                               0x74, 0x75, 0x76, 0x77, 0x78, 0x79, 0x7A, 0x7B) else 0
    down = 1 | (scan << 16) | ext
    up = 1 | (scan << 16) | ext | 0xC0000000
    msg_d = WM_SYSKEYDOWN if ext else WM_KEYDOWN
    msg_u = WM_SYSKEYUP if ext else WM_KEYUP
    user32.PostMessageW(hwnd, msg_d, vk, down)
    time.sleep(hold)
    user32.PostMessageW(hwnd, msg_u, vk, up)


# Real synthetic input: Dolphin's DInput "Keyboard Mouse" wiimote device polls the
# global key state, so the message must go through the OS input queue, not PostMessage.
INPUT_KEYBOARD = 1
KEYEVENTF_KEYUP = 0x0002
KEYEVENTF_EXTENDEDKEY = 0x0001


class KEYBDINPUT(ctypes.Structure):
    _fields_ = [("wVk", wintypes.WORD), ("wScan", wintypes.WORD),
                ("dwFlags", wintypes.DWORD), ("time", wintypes.DWORD),
                ("dwExtraInfo", ctypes.POINTER(ctypes.c_ulong))]


class _INPUTUNION(ctypes.Union):
    _fields_ = [("ki", KEYBDINPUT), ("pad", ctypes.c_byte * 32)]


class INPUT(ctypes.Structure):
    _fields_ = [("type", wintypes.DWORD), ("u", _INPUTUNION)]


def key_down(vk):
    scan = user32.MapVirtualKeyW(vk, 0)
    ext = KEYEVENTF_EXTENDEDKEY if vk in (0x26, 0x28, 0x25, 0x27, 0x70, 0x71, 0x72,
                                          0x73, 0x74, 0x75, 0x76, 0x77, 0x78, 0x79,
                                          0x7A, 0x7B) else 0
    inp = INPUT(type=INPUT_KEYBOARD, u=_INPUTUNION(ki=KEYBDINPUT(vk, scan, ext, 0, None)))
    user32.SendInput(1, ctypes.byref(inp), ctypes.sizeof(INPUT))


def key_up(vk):
    scan = user32.MapVirtualKeyW(vk, 0)
    ext = KEYEVENTF_EXTENDEDKEY if vk in (0x26, 0x28, 0x25, 0x27, 0x70, 0x71, 0x72,
                                          0x73, 0x74, 0x75, 0x76, 0x77, 0x78, 0x79,
                                          0x7A, 0x7B) else 0
    inp = INPUT(type=INPUT_KEYBOARD,
                u=_INPUTUNION(ki=KEYBDINPUT(vk, scan, ext | KEYEVENTF_KEYUP, 0, None)))
    user32.SendInput(1, ctypes.byref(inp), ctypes.sizeof(INPUT))


def send_key(vk, hold=0.08):
    key_down(vk)
    time.sleep(hold)
    key_up(vk)


def kill_stray_dolphins():
    """A second Dolphin.exe instance cannot open Wii/title/.../play_rec.dat and puts a
    modal "File could not be opened" warning in front of a fully booted but frozen
    emulator, which looks exactly like "the game stalls". Always start clean."""
    out = subprocess.run(["taskkill", "/IM", "Dolphin.exe", "/F"],
                         capture_output=True, text=True)
    if "SUCCESS" in out.stdout or "SUCCESS" in out.stderr:
        print("killed a stray Dolphin.exe", flush=True)
        time.sleep(2.0)


def dismiss_dialogs(pid, log=print):
    """Post RETURN to any Dolphin top-level window whose title is a known message box.
    Qt draws the label itself, so the only handle on the dialog is its window title and
    its default button, which is what RETURN activates."""
    known = {"Warning", "Error", "Question", "Information", "Critical"}
    for hwnd, title, cls, _vis in windows_of_pid(pid):
        if title in known:
            log(f"dismissing dialog {title!r}")
            post_key(hwnd, VK["RETURN"])
            time.sleep(0.4)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--exe", default=r"G:\Program\Dolphin-x64\Dolphin.exe")
    ap.add_argument("--iso", default=os.path.join(os.path.dirname(os.path.dirname(
        os.path.abspath(__file__))), "roms", "TheLastStory.iso"))
    ap.add_argument("--plan", default="20:A/10:A/20:A",
                    help="slash separated wait:KEY steps; use SHOT for a screenshot")
    ap.add_argument("--shotkey", default="F9")
    ap.add_argument("--input", default="send", choices=("send", "post"),
                    help="send = SendInput (global key state, what the Wiimote device "
                         "polls); post = PostMessage (only Qt shortcuts, needs focus)")
    ap.add_argument("--run", type=float, default=120.0, help="total seconds to keep running")
    ap.add_argument("--frame-plan", default="",
                    help="frame-indexed input, same syntax as TLS_INPUT_SCRIPT: "
                         "'600-612:A,1300-1312:UP'; frames are counted from Dump/Frames")
    ap.add_argument("--visible", action="store_true",
                    help="launch the GUI (batch mode hides the window, which stops Qt "
                         "delivering key messages, so input plans need this)")
    ap.add_argument("--keep", action="store_true", help="do not kill Dolphin at the end")
    args = ap.parse_args()

    shotdir = os.path.join(os.environ["APPDATA"], "Dolphin Emulator", "ScreenShots")
    os.makedirs(shotdir, exist_ok=True)
    before = set(os.listdir(shotdir))
    args.frames_dir = os.path.join(os.environ["APPDATA"], "Dolphin Emulator", "Dump", "Frames")
    os.makedirs(args.frames_dir, exist_ok=True)

    cmd = [args.exe]
    if not args.visible:
        cmd.append("-b")
    cmd += ["-e", args.iso]
    kill_stray_dolphins()
    print("launch:", cmd, flush=True)
    proc = subprocess.Popen(cmd)
    t0 = time.time()

    hwnds = []
    while time.time() - t0 < 30:
        time.sleep(0.5)
        hwnds = [h for h in windows_of_pid(proc.pid) if "Qt" in h[2]]
        if hwnds:
            break
    if not hwnds:
        print("no Dolphin window found", file=sys.stderr)
    for h in hwnds:
        print("window:", h[0], repr(h[1]), h[2], "visible", h[3], flush=True)

    # The render widget is the widest Qt window; post to all of them, harmless.
    targets = [h[0] for h in hwnds]
    if args.visible:
        for hwnd in targets:
            user32.ShowWindow(hwnd, 9)          # SW_RESTORE
            user32.SetForegroundWindow(hwnd)
            user32.SetFocus(hwnd)

    def broadcast(key, mode="send"):
        for hwnd in targets:
            if mode == "post":
                post_key(hwnd, VK[key])
            else:
                send_key(VK[key])

    # Frame-indexed plan: "600-612:A,1300-1312:UP" - the same syntax TLS_INPUT_SCRIPT
    # uses, but indexed by *dumped frames*. Dolphin's wall-clock rate is far below 60 fps
    # while dumping, so a wall-clock plan would land nowhere near the host's frame
    # numbers; counting Dump/Frames files makes the two runs comparable frame for frame.
    if args.frame_plan:
        # Frames already in the dump directory belong to earlier runs, so index from the
        # count at launch - otherwise a stale directory makes every span look "already
        # passed" and no key is ever sent.
        frame_base = len(os.listdir(args.frames_dir))
        if frame_base:
            print(f"frame base offset {frame_base} (stale dumps present)", flush=True)
        spans = []
        for item in args.frame_plan.split(","):
            item = item.strip()
            if not item:
                continue
            span, _, key = item.partition(":")
            key = key.upper().strip()
            key = key.replace("BUTTON_A", "RETURN")
            if key not in VK:
                sys.exit(f"unknown key {key!r}")
            if "-" in span:
                a, b = span.split("-")
                spans.append((int(a), int(b), key))
            else:
                spans.append((int(span), int(span) + 12, key))
        spans.sort()
        print("frame plan:", spans, flush=True)
        held = {}          # key -> end frame
        last_report = -1
        while time.time() - t0 < args.run:
            frames = len(os.listdir(args.frames_dir)) - frame_base
            for a, b, key in spans:
                if frames >= b and key not in held:
                    held[key] = b
            # press
            for a, b, key in spans:
                if a <= frames < b:
                    if not held.get(key + "#down"):
                        key_down(VK[key])
                        held[key + "#down"] = True
                        print(f"frame {frames}: {key} down", flush=True)
            # release when the span has passed
            for a, b, key in spans:
                if held.get(key + "#down") and frames >= b:
                    key_up(VK[key])
                    held[key + "#down"] = False
                    print(f"frame {frames}: {key} up", flush=True)
            if frames // 60 != last_report:
                last_report = frames // 60
                print(f"frame {frames} t={time.time()-t0:.0f}s", flush=True)
            dismiss_dialogs(proc.pid)
            time.sleep(0.2)

    # A frame plan owns the whole run; falling through to the wall-clock --plan afterwards
    # would dribble extra presses into whatever screen the game reached (measured: three
    # stray "A" presses ~20 s after an 800 s plan ended).
    wall_plan = "" if args.frame_plan else args.plan
    for step in wall_plan.split("/"):
        step = step.strip()
        if not step:
            continue
        wait, _, key = step.partition(":")
        slept = 0.0
        while slept < float(wait):
            time.sleep(min(2.0, float(wait) - slept))
            slept += 2.0
            dismiss_dialogs(proc.pid)
        key = key.upper().strip()
        if key in ("SHOT", "SCREENSHOT"):
            broadcast(args.shotkey, args.input)
            print(f"t={time.time()-t0:6.1f} screenshot", flush=True)
        elif key:
            if key not in VK:
                print("unknown key", key, file=sys.stderr)
                continue
            broadcast(key, args.input)
            print(f"t={time.time()-t0:6.1f} key {key}", flush=True)

    remain = args.run - (time.time() - t0)
    if remain > 0:
        time.sleep(remain)

    proc.kill()
    proc.wait(timeout=20)
    after = set(os.listdir(shotdir)) - before
    print(f"new screenshots: {len(after)}")
    for n in sorted(after):
        print("  ", n, os.path.getsize(os.path.join(shotdir, n)))


if __name__ == "__main__":
    main()
