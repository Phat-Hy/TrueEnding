import os
import sys
import subprocess

ALL_MODULES = [
    # Batch 1 (0..6)
    ("game_post_dof", "0x802C0058", "0x802C1FEC"),
    ("game_post_motion_blur", "0x802C1FEC", "0x802C3DF8"),
    ("game_post_color_correct", "0x802C3DF8", "0x802C5D4C"),
    ("game_post_lut", "0x802C5D4C", "0x802C7A60"),
    ("game_post_vignette", "0x802C7A60", "0x802C9750"),
    ("game_post_film_grain", "0x802C9750", "0x802CB1CC"),
    # Batch 2 (6..12)
    ("game_post_radial_blur", "0x802CB1CC", "0x802CCB7C"),
    ("game_post_chromatic", "0x802CCB7C", "0x802CE504"),
    ("game_post_lens_flare", "0x802CE504", "0x802CFE78"),
    ("game_post_sun_shafts", "0x802CFE78", "0x802D228C"),
    ("game_post_fxaa", "0x802D228C", "0x802D3C74"),
    ("game_post_ssao", "0x802D3C74", "0x802D5674"),
    # Batch 3 (12..18)
    ("game_post_ssr", "0x802D5674", "0x802D7058"),
    ("game_post_fog_volume", "0x802D7058", "0x802D8B6C"),
    ("game_post_heat_wave", "0x802D8B6C", "0x802DA718"),
    ("game_post_underwater", "0x802DA718", "0x802DC1C0"),
    ("game_camera_shake", "0x802DC1C0", "0x802DDBB0"),
    ("game_camera_fov", "0x802DDBB0", "0x802DF570"),
    # Batch 4 (18..24)
    ("game_camera_collision", "0x802DF570", "0x802E1054"),
    ("game_camera_target", "0x802E1054", "0x802E2E84"),
    ("game_camera_cinematic", "0x802E2E84", "0x802E4D6C"),
    ("game_camera_follow", "0x802E4D6C", "0x802E683C"),
    ("game_camera_free", "0x802E683C", "0x802E8250"),
    ("game_camera_orbit", "0x802E8250", "0x802E9D38"),
    # Batch 5 (24..30)
    ("game_input_buffer", "0x802E9D38", "0x802EB814"),
    ("game_input_combo", "0x802EB814", "0x802ED3F0"),
    ("game_input_gesture", "0x802ED3F0", "0x802EEFE0"),
    ("game_input_deadzone", "0x802EEFE0", "0x802F0964"),
    ("game_input_rumble", "0x802F0964", "0x802F2AF4"),
    ("game_input_cursor", "0x802F2AF4", "0x802F469C"),
    # Batch 6 (30..37)
    ("game_input_virtual_pad", "0x802F469C", "0x802F62A0"),
    ("game_input_remap", "0x802F62A0", "0x802F7E0C"),
    ("game_audio_mixer", "0x802F7E0C", "0x802F97B8"),
    ("game_audio_channel", "0x802F97B8", "0x802FB39C"),
    ("game_audio_streamer", "0x802FB39C", "0x802FCF14"),
    ("game_audio_emitter", "0x802FCF14", "0x802FF2E4"),
    ("game_audio_spatial", "0x802FF2E4", "0x80300654"),
]

def run_cmd(cmd):
    print(f">> Running: {cmd}")
    res = subprocess.run(cmd, shell=True, text=True, capture_output=True)
    if res.returncode != 0:
        print(f"FAILED (code {res.returncode}):\n{res.stdout}\n{res.stderr}")
        return False, res.stdout + res.stderr
    return True, res.stdout

def apply_batch(modules, last_mod):
    print(f"Applying batch of {len(modules)} modules after {last_mod}...")
    # Step 1: Update splits.txt
    with open("config/splits.txt", "r") as f:
        splits = f.read()

    splits_additions = ""
    for mod, start, end in modules:
        entry = f"{mod}.c:\n\t.text       start:{start} end:{end}\n"
        if f"{mod}.c:" not in splits:
            splits_additions += f"\n{entry}"

    target_pos = splits.find(f"{last_mod}.c:")
    if target_pos == -1:
        print(f"Could not find {last_mod}.c: in splits.txt")
        return False
    next_nl = splits.find("\n\n", target_pos)
    if next_nl == -1:
        next_nl = len(splits)
    
    new_splits = splits[:next_nl] + splits_additions + splits[next_nl:]
    with open("config/splits.txt", "w") as f:
        f.write(new_splits)
    print("Updated config/splits.txt")

    # Step 2: Update configure.py
    with open("configure.py", "r") as f:
        cfg = f.read()

    cfg_additions = ""
    for mod, _, _ in modules:
        entry = f'            Object(True, "{mod}.c"),\n'
        if f'"{mod}.c"' not in cfg:
            cfg_additions += entry

    last_obj = f'Object(True, "{last_mod}.c"),\n'
    idx = cfg.find(last_obj)
    if idx == -1:
        print(f"Could not find {last_obj} in configure.py")
        return False

    new_cfg = cfg[:idx + len(last_obj)] + cfg_additions + cfg[idx + len(last_obj):]
    with open("configure.py", "w") as f:
        f.write(new_cfg)
    print("Updated configure.py")

    # Step 3: Run configure.py and ninja build\SLSEXJ\config.json
    ok, out = run_cmd("python configure.py")
    if not ok: return False
    ok, out = run_cmd(".\\tools\\w64devkit\\bin\\ninja.exe build\\SLSEXJ\\config.json")
    if not ok: return False

    # Step 4: Generate Method B files
    for mod, _, _ in modules:
        ok, out = run_cmd(f"python tools/gen_method_b.py {mod}")
        if not ok: return False

    # Step 5: Configure and build
    ok, out = run_cmd("python configure.py")
    if not ok: return False
    ok, out = run_cmd("python tools/patch_ldscript.py")
    if not ok: return False
    ok, out = run_cmd(".\\tools\\w64devkit\\bin\\ninja.exe")
    if not ok: return False
    print("Build output:\n" + out)
    return True

if __name__ == "__main__":
    if len(sys.argv) < 3:
        print("Usage: python tools/batch_pipeline.py <batch_start_idx> <batch_count> <last_mod>")
        sys.exit(1)
    start_idx = int(sys.argv[1])
    count = int(sys.argv[2])
    last_mod = sys.argv[3]
    batch = ALL_MODULES[start_idx:start_idx+count]
    success = apply_batch(batch, last_mod)
    if not success:
        print("Batch processing failed!")
        sys.exit(1)
    print(f"Batch {start_idx}..{start_idx+count} SUCCESS!")
