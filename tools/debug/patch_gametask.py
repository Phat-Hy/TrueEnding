with open('recomp/replacements.c', 'rb') as f:
    content = f.read().decode('utf-8')

old_gt_update = """        // GameTask::Update (0x80368280)
        case 0x80368280: {
            static int s_game_updates = 0;
            u32 task = ctx->gpr[3];
            u32 state = task ? mem_read32(ctx, task + 0x54e4) : 0;
            u32 prev = task ? mem_read32(ctx, task + 0x54e8) : 0;
            u32 timer = task ? mem_read32(ctx, task + 0x54ec) : 0;

            // 1. Clear blackout fade quad
            u32 screen_mgr = mem_read32(ctx, 0x8087EE90);
            if (resolve_guest_pointer(ctx, screen_mgr)) {
                u32 val_1028 = mem_read32(ctx, screen_mgr + 1028);
                u32 val_984 = mem_read32(ctx, screen_mgr + 984);
                if (val_1028 != 0 || val_984 != 0) {
                    mem_write32(ctx, screen_mgr + 1028, 0);
                    mem_write32(ctx, screen_mgr + 984, 0);
                    mem_write32(ctx, screen_mgr + 0x3d0, 1);
                    mem_write32(ctx, screen_mgr + 0x3d4, 0);
                    printf("[TLS GameTask] Cleared fade blackout: screen_mgr=0x%08X (was 1028=%u, 984=%u)\\n",
                           screen_mgr, val_1028, val_984);
                    fflush(stdout);
                }
            }

            // 2. Activate ViewTask (child[6]) and SceneManager (child[9])
            if (task) {
                u32 child = mem_read32(ctx, task + 0x18);
                int c_idx = 0;
                while (child && c_idx < 10) {
                    u32 vt = mem_read32(ctx, child);
                    if (c_idx == 6 || c_idx == 9 || vt == 0x80779DA0 || vt == 0x807900C0) {
                        u32 cur_flags = mem_read32(ctx, child + 0x38);
                        if ((cur_flags & 4) != 0 || (cur_flags & 0x32) != 0x32) {
                            mem_write32(ctx, child + 0x38, (cur_flags | 0x32) & ~4u);
                            printf("[TLS GameTask] Activated child[%d] 0x%08X (vt=0x%08X): flags 0x%08X -> 0x%08X\\n",
                                   c_idx, child, vt, cur_flags, (cur_flags | 0x32) & ~4u);
                            fflush(stdout);
                        }
                    }
                    child = mem_read32(ctx, child + 0x1C);
                    c_idx++;
                }
            }

            u32 f8a0 = mem_read32(ctx, 0x8087F8A0);
            u32 t48 = f8a0 ? mem_read32(ctx, f8a0 + 0x48) : 0;
            if (t48) {
                // Enable character model updating in fn_8011F71C
                u32 f2bc = mem_read32(ctx, t48 + 0x2bc);
                if (!(f2bc & 0x04)) {
                    mem_write32(ctx, t48 + 0x2bc, f2bc | 0x07);
                }
            }

            if (++s_game_updates <= 10 || s_game_updates % 60 == 0) {
                printf("[TLS GameTask] Update #%d task=0x%08X state=%u prev=%u timer=%u (lr=0x%08X)\\n",
                       s_game_updates, task, state, prev, timer, ctx->lr);
                fflush(stdout);
            }
            return 0; // Run original code
        }

        // GameTask::Draw (0x8036B7F4)
        case 0x8036B7F4: {
            static int s_game_draws = 0;
            u32 task = ctx->gpr[3];
            u32 state = task ? mem_read32(ctx, task + 0x54e4) : 0;

            // Ensure blackout fade quad is suppressed during Draw
            u32 screen_mgr = mem_read32(ctx, 0x8087EE90);
            if (resolve_guest_pointer(ctx, screen_mgr)) {
                mem_write32(ctx, screen_mgr + 1028, 0);
                mem_write32(ctx, screen_mgr + 984, 0);
            }

            u32 f8a0 = mem_read32(ctx, 0x8087F8A0);
            u32 t48 = f8a0 ? mem_read32(ctx, f8a0 + 0x48) : 0;
            if (t48) {
                // Keep Zael grounded on Gurgan Cave floor (Y = 0.0f)
                write_guest_f32(ctx, t48 + 0x528, 0.0f);
                write_guest_f32(ctx, t48 + 0x52c, 0.0f);
                write_guest_f32(ctx, t48 + 0x530, 0.0f);
            }"""

new_gt_update = """        // GameTask::Update (0x80368280)
        case 0x80368280: {
            static int s_game_updates = 0;
            u32 task = ctx->gpr[3];
            u32 state = task ? mem_read32(ctx, task + 0x54e4) : 0;
            u32 prev = task ? mem_read32(ctx, task + 0x54e8) : 0;
            u32 timer = task ? mem_read32(ctx, task + 0x54ec) : 0;
            if (++s_game_updates <= 10 || s_game_updates % 60 == 0) {
                printf("[TLS GameTask] Update #%d task=0x%08X state=%u prev=%u timer=%u (lr=0x%08X)\\n",
                       s_game_updates, task, state, prev, timer, ctx->lr);
                fflush(stdout);
            }
            return 0; // Run original code naturally
        }

        // GameTask::Draw (0x8036B7F4)
        case 0x8036B7F4: {
            static int s_game_draws = 0;
            u32 task = ctx->gpr[3];
            u32 state = task ? mem_read32(ctx, task + 0x54e4) : 0;
            u32 f8a0 = mem_read32(ctx, 0x8087F8A0);
            u32 t48 = f8a0 ? mem_read32(ctx, f8a0 + 0x48) : 0;"""

if old_gt_update in content:
    content = content.replace(old_gt_update, new_gt_update)
    print("Cleaned GameTask::Update and Draw")
elif old_gt_update.replace('\n', '\r\n') in content:
    content = content.replace(old_gt_update.replace('\n', '\r\n'), new_gt_update.replace('\n', '\r\n'))
    print("Cleaned GameTask::Update and Draw (CRLF)")
else:
    print("ERROR: old_gt_update not found")

with open('recomp/replacements.c', 'wb') as f:
    f.write(content.encode('utf-8'))
