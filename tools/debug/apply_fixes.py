with open('recomp/replacements.c', 'rb') as f:
    content = f.read().decode('utf-8')

# 1. Remove Model::Render 0x8008CD60 forced writes
old_render = """            u32 sub_cnt = model ? mem_read32(ctx, model + 260) : 0;
            // Only apply Title Cave specific activation to title models (0x81140000 - 0x81160000)
            if (model >= 0x81140000 && model <= 0x81160000) {
                if (s5c && f16c == 0) {
                    u32 cur20c = mem_read32(ctx, model + 0x20c);
                    u32 sub_cnt_in_pkt = s5c ? mem_read32(ctx, s5c + 0x30) : 0;
                    u32 target_st = (sub_cnt > 0) ? 8 : 7;
                    u32 flags = (cur20c & 0x00FFFFFF) | (target_st << 24) | 0x01;
                    if (buf58 >= 0x80800000) flags |= 0x40;
                    else flags &= ~0x40;
                    mem_write32(ctx, model + 0x16c, s5c);
                    mem_write32(ctx, model + 0x20c, flags);
                }
            }"""

new_render = """            u32 sub_cnt = model ? mem_read32(ctx, model + 260) : 0;"""

if old_render in content:
    content = content.replace(old_render, new_render)
    print("Fixed Model::Render 0x8008CD60")
else:
    print("Model::Render 0x8008CD60 pattern not found, trying CRLF")
    old_render_crlf = old_render.replace('\n', '\r\n')
    if old_render_crlf in content:
        content = content.replace(old_render_crlf, new_render.replace('\n', '\r\n'))
        print("Fixed Model::Render 0x8008CD60 (CRLF)")
    else:
        print("ERROR: could not find old_render")

# 2. Remove Model::DrawPass2 0x8008D6C0 forced writes
old_d6c0 = """            if (model >= 0x81140000 && model <= 0x81160000) {
                if (!(cur20c & 0x01)) {
                    mem_write32(ctx, model + 0x20c, cur20c | 0x01);
                }
            }"""

if old_d6c0 in content:
    content = content.replace(old_d6c0, "")
    print("Fixed Model::DrawPass2 0x8008D6C0")
elif old_d6c0.replace('\n', '\r\n') in content:
    content = content.replace(old_d6c0.replace('\n', '\r\n'), "")
    print("Fixed Model::DrawPass2 0x8008D6C0 (CRLF)")
else:
    print("ERROR: could not find old_d6c0")

# 3. Simplify Model::AddNode 0x80093F58
old_addnode = """        // fn_80093F58 (Model::AddNode)
        case 0x80093F58: {
            u32 model = ctx->gpr[3];
            u32 node = ctx->gpr[4];
            if (!resolve_guest_pointer(ctx, model) || !resolve_guest_pointer(ctx, node)) {
                ctx->pc = ctx->lr;
                return 1;
            }
            u32 container = mem_read32(ctx, model + 0x16C);
            if (!resolve_guest_pointer(ctx, container)) {
                // Container not attached or invalid; cannot look up bones in container
                // Safely return to prevent infinite loop or memory corruption
                ctx->pc = ctx->lr;
                return 1;
            }
            u32 count = mem_read32(ctx, container + 0x44);
            if (count > 512) {
                ctx->pc = ctx->lr;
                return 1;
            }
            return 0; // Run original code
        }"""

new_addnode = """        // fn_80093F58 (Model::AddNode)
        case 0x80093F58: {
            return 0; // Run original code naturally
        }"""

if old_addnode in content:
    content = content.replace(old_addnode, new_addnode)
    print("Fixed Model::AddNode 0x80093F58")
elif old_addnode.replace('\n', '\r\n') in content:
    content = content.replace(old_addnode.replace('\n', '\r\n'), new_addnode.replace('\n', '\r\n'))
    print("Fixed Model::AddNode 0x80093F58 (CRLF)")
else:
    print("ERROR: could not find old_addnode")

# 4. Remove forced alpha in LayoutTask::Draw 0x801F4514
old_layout_alpha = """            if (obj) {
                // Unblock opacity for all layout tasks: ensure alpha is 255.0f
                u32 a255 = 0x437F0000; // 255.0f
                mem_write32(ctx, obj + 0x100, a255);
                mem_write32(ctx, obj + 0x104, 0x3F800000); // 1.0f
                if (arr48 && cnt48 > 0) {
                    for (u32 i = 0; i < cnt48; i++) {
                        u32 ch = mem_read32(ctx, arr48 + i * 4);
                        if (ch) {
                            u32 ch_fc = mem_read32(ctx, ch + 0xFC);
                            if (ch_fc) {
                                mem_write32(ctx, ch_fc + 0x5C, a255);
                            }
                        }
                    }
                }
            }"""

if old_layout_alpha in content:
    content = content.replace(old_layout_alpha, "")
    print("Fixed LayoutTask::Draw alpha")
elif old_layout_alpha.replace('\n', '\r\n') in content:
    content = content.replace(old_layout_alpha.replace('\n', '\r\n'), "")
    print("Fixed LayoutTask::Draw alpha (CRLF)")
else:
    print("ERROR: could not find old_layout_alpha")

# 5. Simplify fn_801EDC78
old_edc = """        // fn_801EDC78 (pane animation visibility check)
        case 0x801EDC78: {
            u32 obj = ctx->gpr[3];
            u32 f_fc = obj ? mem_read32(ctx, obj + 0xFC) : 0;
            float f_cur = 0.0f, f_s = 0.0f, f_e = 0.0f;
            if (f_fc) {
                u32 u255 = 0x437F0000; // 255.0f
                mem_write32(ctx, f_fc + 0x5C, u255);
                u32 u_cur = mem_read32(ctx, f_fc + 0x5C);
                memcpy(&f_cur, &u_cur, 4);
            }
            if (obj) {
                u32 u_s = mem_read32(ctx, obj + 0x14);
                u32 u_e = mem_read32(ctx, obj + 0x18);
                memcpy(&f_s, &u_s, 4);
                memcpy(&f_e, &u_e, 4);
            }
            static int s_edc_calls = 0;
            if (++s_edc_calls <= 20 || s_edc_calls % 100 == 0) {
                printf("[TLS 801EDC78] #%d obj=0x%08X fc=0x%08X cur=%.2f [%.2f, %.2f] (lr=0x%08X)\\n",
                       s_edc_calls, obj, f_fc, f_cur, f_s, f_e, ctx->lr);
                fflush(stdout);
            }
            ctx->gpr[3] = 1;
            ctx->pc = ctx->lr;
            return 1;
        }"""

new_edc = """        // fn_801EDC78 (pane animation visibility check)
        case 0x801EDC78: {
            return 0; // Run naturally
        }"""

if old_edc in content:
    content = content.replace(old_edc, new_edc)
    print("Fixed fn_801EDC78")
elif old_edc.replace('\n', '\r\n') in content:
    content = content.replace(old_edc.replace('\n', '\r\n'), new_edc.replace('\n', '\r\n'))
    print("Fixed fn_801EDC78 (CRLF)")
else:
    print("ERROR: could not find old_edc")

# 6. Simplify fn_801F9FB0
old_9fb0 = """        // fn_801F9FB0 (pane draw callback)
        case 0x801F9FB0: {
            u32 obj = ctx->gpr[3];
            u32 fc = obj ? mem_read32(ctx, obj + 0xFC) : 0;
            u32 r12 = fc ? mem_read32(ctx, fc + 0xA4) : 0;
            float f_cur = 0.0f, f_base_a = 0.0f;
            if (fc) {
                // Ensure animation frame timer is at full visibility
                u32 u255 = 0x437F0000; // 255.0f
                mem_write32(ctx, fc + 0x5C, u255);
                u32 u_cur = mem_read32(ctx, fc + 0x5C);
                memcpy(&f_cur, &u_cur, 4);
            }
            if (obj) {
                u32 u_ba = mem_read32(ctx, obj + 0x80);
                memcpy(&f_base_a, &u_ba, 4);
                if (f_base_a <= 0.0f) {
                    u32 u1 = 0x3F800000; // 1.0f
                    mem_write32(ctx, obj + 0x80, u1);
                }
            }
            static int s_9fb0_calls = 0;
            if (++s_9fb0_calls <= 20 || s_9fb0_calls % 60 == 0) {
                printf("[TLS 801F9FB0] #%d obj=0x%08X fc=0x%08X r12=0x%08X cur=%.2f base_a=%.2f (lr=0x%08X)\\n",
                       s_9fb0_calls, obj, fc, r12, f_cur, f_base_a, ctx->lr);
                fflush(stdout);
            }
            return 0; // Run original code
        }"""

new_9fb0 = """        // fn_801F9FB0 (pane draw callback)
        case 0x801F9FB0: {
            return 0; // Run naturally
        }"""

if old_9fb0 in content:
    content = content.replace(old_9fb0, new_9fb0)
    print("Fixed fn_801F9FB0")
elif old_9fb0.replace('\n', '\r\n') in content:
    content = content.replace(old_9fb0.replace('\n', '\r\n'), new_9fb0.replace('\n', '\r\n'))
    print("Fixed fn_801F9FB0 (CRLF)")
else:
    print("ERROR: could not find old_9fb0")

# 7. Add dlfree 0x8022B114 safe hook right before 0x80686EA4
target_hook = "case 0x80686EA4:"
dlfree_hook = """        // 0x8022B114 (dlfree / MSL free safe bounds check)
        case 0x8022B114: {
            u32 heap = ctx->gpr[3];
            u32 ptr = ctx->gpr[4];
            if (!ptr) {
                ctx->pc = ctx->lr;
                return 1;
            }
            if (!resolve_guest_pointer(ctx, heap) || !resolve_guest_pointer(ctx, ptr)) {
                ctx->pc = ctx->lr;
                return 1;
            }
            u32 heap_start = mem_read32(ctx, heap + 16);
            if (ptr < heap_start + 8 || ptr >= 0x94000000) {
                ctx->pc = ctx->lr;
                return 1;
            }
            return 0; // Run original code safely
        }

        // abort() / panic() handler (0x80686EA4)
        case 0x80686EA4:"""

if target_hook in content and "case 0x8022B114:" not in content:
    content = content.replace("case 0x80686EA4:", dlfree_hook)
    print("Added dlfree 0x8022B114 safe hook")

with open('recomp/replacements.c', 'wb') as f:
    f.write(content.encode('utf-8'))
print("Done patching recomp/replacements.c!")
