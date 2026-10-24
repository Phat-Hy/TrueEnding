with open("recomp/replacements.c", "r", encoding="utf-8") as f:
    text = f.read()

# 1. Update KPADRead channel check
old_kpad = """            s32 chan = (s32)ctx->gpr[3];
            u32 status_addr = ctx->gpr[4];
            u32 count = ctx->gpr[5];
            if (chan == 0 && status_addr != 0 && count > 0) {"""

new_kpad = """            s32 chan = (s32)ctx->gpr[3];
            u32 status_addr = ctx->gpr[4];
            u32 count = ctx->gpr[5];
            if ((chan >= 0 && chan < 4) && status_addr != 0 && count > 0) {"""

# 2. Update StrapTask to auto-transition after 60 frames (1 sec) so user is not stuck on black
old_strap = """        // StrapTask::Update (0x805A646C)
        case 0x805A646C: {
            u32 task = ctx->gpr[3];
            static int s_strap_updates = 0;
            s_strap_updates++;
            if (s_strap_updates <= 5 || s_strap_updates % 60 == 0) {
                u32 st = task ? mem_read32(ctx, task + 0x48) : 0;
                u32 timer = task ? mem_read32(ctx, task + 0x50) : 0;
                printf("[TLS StrapTask] Update #%d task=0x%08X st=%u timer=%u/600\\n",
                       s_strap_updates, task, st, timer);
                fflush(stdout);
            }
            return 0; // Run original code
        }"""

new_strap = """        // StrapTask::Update (0x805A646C)
        case 0x805A646C: {
            u32 task = ctx->gpr[3];
            static int s_strap_updates = 0;
            s_strap_updates++;
            if (task) {
                u32 st = mem_read32(ctx, task + 0x48);
                u32 timer = mem_read32(ctx, task + 0x50);
                if (st == 0 && timer >= 60) {
                    // Smoothly transition from strap screen into title screen after 1 second
                    mem_write32(ctx, task + 0x48, 2);
                    mem_write32(ctx, task + 0x4C, 0);
                    printf("[TLS StrapTask] Auto-advancing past strap screen into Title (timer=%u)\\n", timer);
                    fflush(stdout);
                }
            }
            if (s_strap_updates <= 5 || s_strap_updates % 60 == 0) {
                u32 st = task ? mem_read32(ctx, task + 0x48) : 0;
                u32 timer = task ? mem_read32(ctx, task + 0x50) : 0;
                printf("[TLS StrapTask] Update #%d task=0x%08X st=%u timer=%u/600\\n",
                       s_strap_updates, task, st, timer);
                fflush(stdout);
            }
            return 0; // Run original code
        }"""

if old_kpad in text and old_strap in text:
    text = text.replace(old_kpad, new_kpad)
    text = text.replace(old_strap, new_strap)
    with open("recomp/replacements.c", "w", encoding="utf-8") as f:
        f.write(text)
    print("Updated recomp/replacements.c successfully!")
else:
    print(f"Match failed: old_kpad={old_kpad in text}, old_strap={old_strap in text}")
