import os
import sys
import subprocess

ALL_MODULES = [
    # Batch 1 (0..6)
    ("game_battle_spirit_drive", "0x804003E0", "0x80401E50"),
    ("game_battle_finish_blow", "0x80401E50", "0x804038D0"),
    ("game_battle_revive_ally", "0x804038D0", "0x804052EC"),
    ("game_battle_command_mode", "0x804052EC", "0x80406EC4"),
    ("game_battle_slow_time", "0x80406EC4", "0x804088C0"),
    ("game_battle_target_cursor", "0x804088C0", "0x8040A32C"),
    # Batch 2 (6..12)
    ("game_battle_line_of_sight", "0x8040A32C", "0x8040BE88"),
    ("game_battle_cover_point", "0x8040BE88", "0x8040DA48"),
    ("game_battle_vault_kick", "0x8040DA48", "0x8040F3CC"),
    ("game_battle_climb_aim", "0x8040F3CC", "0x80410DE0"),
    ("game_battle_plunge_attack", "0x80410DE0", "0x804128A8"),
    ("game_battle_parry_guard", "0x804128A8", "0x80414328"),
    # Batch 3 (12..18)
    ("game_battle_dodge_roll", "0x80414328", "0x80415E40"),
    ("game_battle_knockback_wall", "0x80415E40", "0x80417E88"),
    ("game_battle_terrain_hazard", "0x80417E88", "0x80419A48"),
    ("game_battle_water_conduct", "0x80419A48", "0x8041B4D8"),
    ("game_battle_ice_freeze", "0x8041B4D8", "0x8041CF94"),
    ("game_battle_fire_diffuse", "0x8041CF94", "0x8041EA1C"),
    # Batch 4 (18..24)
    ("game_battle_wind_disperse", "0x8041EA1C", "0x80420490"),
    ("game_battle_light_holy", "0x80420490", "0x80421E54"),
    ("game_battle_dark_curse", "0x80421E54", "0x804238E8"),
    ("game_battle_element_chain", "0x804238E8", "0x80425498"),
    ("game_battle_status_burn", "0x80425498", "0x804273A4"),
    ("game_battle_status_freeze", "0x804273A4", "0x80428DE8"),
    # Batch 5 (24..30)
    ("game_battle_status_paralyze", "0x80428DE8", "0x8042A98C"),
    ("game_battle_status_sleep", "0x8042A98C", "0x8042C30C"),
    ("game_battle_status_silence", "0x8042C30C", "0x8042DFD4"),
    ("game_battle_status_daze", "0x8042DFD4", "0x8042F97C"),
    ("game_battle_ai_zael", "0x8042F97C", "0x80431314"),
    ("game_battle_ai_calista", "0x80431314", "0x80432C90"),
    # Batch 6 (30..36)
    ("game_battle_ai_dagran", "0x80432C90", "0x80434604"),
    ("game_battle_ai_syrenne", "0x80434604", "0x80436000"),
    ("game_battle_ai_lowell", "0x80436000", "0x80438814"),
    ("game_battle_ai_mirania", "0x80438814", "0x8043A530"),
    ("game_battle_ai_yurick", "0x8043A530", "0x8043C334"),
    ("game_battle_ai_general", "0x8043C334", "0x80440184"),
    # Batch 7 (36..42)
    ("game_gmk_item_slot", "0x80440184", "0x80441E54"),
    ("game_gmk_slot_anime", "0x80441E54", "0x8044386C"),
    ("game_gmk_slot_cache", "0x8044386C", "0x80445F44"),
    ("game_gmk_slot_draw", "0x80445F44", "0x804479B8"),
    ("game_gmk_slot_event", "0x804479B8", "0x80449448"),
    ("game_gmk_slot_trigger", "0x80449448", "0x8044B44C"),
    # Batch 8 (42..48)
    ("game_boss_cocoon_init", "0x8044B44C", "0x8044D028"),
    ("game_boss_cocoon_state", "0x8044D028", "0x8044EA34"),
    ("game_boss_cocoon_move", "0x8044EA34", "0x80450590"),
    ("game_boss_cocoon_anim", "0x80450590", "0x80452370"),
    ("game_boss_cocoon_action", "0x80452370", "0x80453DB4"),
    ("game_boss_cocoon_ai", "0x80453DB4", "0x80455D80"),
    # Batch 9 (48..54)
    ("game_boss_cocoon_skill", "0x80455D80", "0x80457C48"),
    ("game_boss_cocoon_damage", "0x80457C48", "0x804596E8"),
    ("game_boss_cocoon_rage", "0x804596E8", "0x8045B40C"),
    ("game_boss_cocoon_laser", "0x8045B40C", "0x8045D1EC"),
    ("game_boss_cocoon_sub", "0x8045D1EC", "0x8045ECC4"),
    ("game_boss_cocoon_phase2", "0x8045ECC4", "0x80460A90"),
    # Batch 10 (54..60)
    ("game_boss_cocoon_phase3", "0x80460A90", "0x804628B4"),
    ("game_boss_cocoon_tail", "0x804628B4", "0x80464608"),
    ("game_boss_cocoon_claw", "0x80464608", "0x80466370"),
    ("game_boss_cocoon_roar", "0x80466370", "0x80467F50"),
    ("game_boss_cocoon_death", "0x80467F50", "0x804699A4"),
    ("game_boss_cocoon_fx", "0x804699A4", "0x8046B798"),
    # Batch 11 (60..66)
    ("game_boss_cocoon_shield", "0x8046B798", "0x8046D19C"),
    ("game_boss_cocoon_weak", "0x8046D19C", "0x8046EBC4"),
    ("game_boss_cocoon_laser_aim", "0x8046EBC4", "0x80470604"),
    ("game_boss_cocoon_spin", "0x80470604", "0x8047202C"),
    ("game_boss_cocoon_rush", "0x8047202C", "0x80473B20"),
    ("game_boss_cocoon_shockwave", "0x80473B20", "0x80475DF8"),
    # Batch 12 (66..72)
    ("game_event_cutscene_mgr", "0x80475DF8", "0x8047782C"),
    ("game_event_cutscene_cam", "0x8047782C", "0x8047961C"),
    ("game_event_cutscene_actor", "0x8047961C", "0x8047B594"),
    ("game_event_cutscene_voice", "0x8047B594", "0x8047DC98"),
    ("game_event_cutscene_fade", "0x8047DC98", "0x8047F6B0"),
    ("game_event_cutscene_skip", "0x8047F6B0", "0x804814E8"),
    # Batch 13 (72..78)
    ("game_quest_sub_mgr", "0x804814E8", "0x80483644"),
    ("game_quest_sub_stage", "0x80483644", "0x80485964"),
    ("game_quest_sub_target", "0x80485964", "0x80487490"),
    ("game_quest_sub_reward", "0x80487490", "0x80489280"),
    ("game_quest_sub_dialog", "0x80489280", "0x8048AF9C"),
    ("game_quest_sub_complete", "0x8048AF9C", "0x8048D3A4"),
    # Batch 14 (78..84)
    ("game_coliseum_mgr", "0x8048D3A4", "0x8048EE78"),
    ("game_coliseum_round", "0x8048EE78", "0x80490884"),
    ("game_coliseum_enemy", "0x80490884", "0x804923AC"),
    ("game_coliseum_score", "0x804923AC", "0x80494354"),
    ("game_coliseum_reward", "0x80494354", "0x80495EA8"),
    ("game_coliseum_ranking", "0x80495EA8", "0x80498354"),
    # Batch 15 (84..90)
    ("game_net_lobby_mgr", "0x80498354", "0x80499D60"),
    ("game_net_lobby_room", "0x80499D60", "0x8049B780"),
    ("game_net_lobby_match", "0x8049B780", "0x8049D1A4"),
    ("game_net_lobby_player", "0x8049D1A4", "0x8049EBAC"),
    ("game_net_lobby_sync", "0x8049EBAC", "0x804A0614"),
    ("game_net_lobby_chat", "0x804A0614", "0x804A2078"),
    # Batch 16 (90..96)
    ("game_net_coop_mgr", "0x804A2078", "0x804A3AF0"),
    ("game_net_coop_session", "0x804A3AF0", "0x804A55FC"),
    ("game_net_coop_spawn", "0x804A55FC", "0x804A71F0"),
    ("game_net_coop_boss", "0x804A71F0", "0x804A9E44"),
    ("game_net_coop_drop", "0x804A9E44", "0x804ABA2C"),
    ("game_net_coop_score", "0x804ABA2C", "0x804AD738"),
    # Batch 17 (96..102)
    ("game_net_packet_mgr", "0x804AD738", "0x804AF1BC"),
    ("game_net_packet_queue", "0x804AF1BC", "0x804B0F58"),
    ("game_net_crypt_core", "0x804B0F58", "0x804B2C20"),
    ("game_net_crypt_key", "0x804B2C20", "0x804B4678"),
    ("game_net_crypt_cipher", "0x804B4678", "0x804B6204"),
    ("game_net_crypt_auth", "0x804B6204", "0x804B7F88"),
    # Batch 18 (102..108)
    ("game_net_versus_mgr", "0x804B7F88", "0x804B9B68"),
    ("game_net_versus_rule", "0x804B9B68", "0x804BBB60"),
    ("game_net_versus_map", "0x804BBB60", "0x804BD9B0"),
    ("game_net_versus_stat", "0x804BD9B0", "0x804BF550"),
    ("game_net_versus_leader", "0x804BF550", "0x804C0F88"),
    ("game_net_versus_award", "0x804C0F88", "0x804C2994"),
    # Batch 19 (108..114)
    ("game_net_replay_mgr", "0x804C2994", "0x804C4530"),
    ("game_net_replay_data", "0x804C4530", "0x804C66C8"),
    ("game_net_replay_play", "0x804C66C8", "0x804C8204"),
    ("game_net_sync_clock", "0x804C8204", "0x804C9C88"),
    ("game_net_sync_state", "0x804C9C88", "0x804CB74C"),
    ("game_net_sync_event", "0x804CB74C", "0x804CD2F8"),
    # Batch 20 (114..120)
    ("game_net_friend_mgr", "0x804CD2F8", "0x804CEF84"),
    ("game_net_friend_list", "0x804CEF84", "0x804D1400"),
    ("game_net_friend_invite", "0x804D1400", "0x804D5F08"),
    ("game_net_voice_chat", "0x804D5F08", "0x804D807C"),
    ("game_net_voice_codec", "0x804D807C", "0x804D9BF8"),
    ("game_net_voice_buffer", "0x804D9BF8", "0x804DBC84"),
    # Batch 21 (120..126)
    ("game_flow_title_mgr", "0x804DBC84", "0x804DD9D0"),
    ("game_flow_title_menu", "0x804DD9D0", "0x804DF408"),
    ("game_flow_title_logo", "0x804DF408", "0x804E2844"),
    ("game_flow_opening_movie", "0x804E2844", "0x804E4490"),
    ("game_flow_chapter_intro", "0x804E4490", "0x804E6510"),
    ("game_flow_chapter_outro", "0x804E6510", "0x804E8094"),
    # Batch 22 (126..132)
    ("game_flow_epilogue_mgr", "0x804E8094", "0x804E9C68"),
    ("game_flow_credits_roll", "0x804E9C68", "0x804EB754"),
    ("game_flow_credits_draw", "0x804EB754", "0x804ED76C"),
    ("game_flow_clear_save", "0x804ED76C", "0x804EF9B8"),
    ("game_flow_new_game_plus", "0x804EF9B8", "0x804F147C"),
    ("game_flow_gallery_mgr", "0x804F147C", "0x804F2ED0"),
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
