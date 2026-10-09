import os
import sys
import subprocess
from net_sdk_modules import NET_SDK_MODULES

def run_cmd(cmd):
    res = subprocess.run(cmd, shell=True, text=True, capture_output=True)
    if res.returncode != 0:
        print(f"FAILED (code {res.returncode}):\n{res.stdout}\n{res.stderr}")
        return False
    return True

def process_batch(start_idx, count):
    end_idx = min(start_idx + count, len(NET_SDK_MODULES))
    batch = NET_SDK_MODULES[start_idx:end_idx]
    prev_mod = "game_net_nwc24_init" if start_idx == 0 else NET_SDK_MODULES[start_idx - 1][0]
    
    print(f"=== Applying Batch: {start_idx} to {end_idx - 1} ({len(batch)} modules) after {prev_mod} ===")
    
    # 1. Update splits.txt
    with open("config/splits.txt", "r") as f:
        splits = f.read()

    splits_additions = ""
    for name, start, end in batch:
        splits_additions += f"\n{name}.c:\n\t.text       start:{start} end:{end}\n"

    target_anchor = f"{prev_mod}.c:"
    if target_anchor not in splits:
        print(f"Error: Anchor {target_anchor} not found in splits.txt!")
        return False

    parts = splits.split(target_anchor, 1)
    subparts = parts[1].split("\n\n", 1)
    new_splits = parts[0] + target_anchor + subparts[0] + splits_additions + "\n" + subparts[1]

    with open("config/splits.txt", "w") as f:
        f.write(new_splits)

    # 2. Update configure.py
    with open("configure.py", "r") as f:
        conf = f.read()

    conf_additions = ""
    for name, _, _ in batch:
        conf_additions += f'            Object(True, "{name}.c"),\n'

    conf_anchor = f'Object(True, "{prev_mod}.c"),'
    if conf_anchor not in conf:
        print(f"Error: Anchor {conf_anchor} not found in configure.py!")
        return False

    new_conf = conf.replace(conf_anchor, conf_anchor + "\n" + conf_additions.rstrip())
    with open("configure.py", "w") as f:
        f.write(new_conf)

    # 3. Regenerate build & slice objects
    if not run_cmd("python configure.py"):
        return False

    ninja_targets = " ".join([f"build/SLSEXJ/obj/{name}.o" for name, _, _ in batch])
    print(f"Slicing {len(batch)} objects with ninja...")
    run_cmd(f"tools\\w64devkit\\bin\\ninja.exe {ninja_targets}")

    # 4. Generate Method B source files
    for name, _, _ in batch:
        if not run_cmd(f"python tools/gen_method_b.py {name}"):
            print(f"Failed to generate {name}")
            return False

    # 5. Patch linker script and compile with ninja
    if not run_cmd("python configure.py"):
        return False
    if not run_cmd("python tools/patch_ldscript.py"):
        return False

    print("Compiling and linking main.dol...")
    res = subprocess.run(["tools/w64devkit/bin/ninja.exe"], capture_output=True, text=True)
    if res.returncode != 0:
        print(f"Ninja build failed:\n{res.stdout}\n{res.stderr}")
        return False

    for line in res.stdout.splitlines():
        if "Progress:" in line or "Code:" in line or "All:" in line or "OK" in line:
            print(" ", line)

    print(f"=== Batch {start_idx}..{end_idx - 1} COMPLETED SUCCESSFULLY ===")
    return True

if __name__ == "__main__":
    start = int(sys.argv[1]) if len(sys.argv) > 1 else 0
    count = int(sys.argv[2]) if len(sys.argv) > 2 else 6
    success = process_batch(start, count)
    sys.exit(0 if success else 1)
