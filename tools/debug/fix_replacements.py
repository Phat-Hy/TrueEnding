with open('recomp/replacements.c', 'r', encoding='utf-8') as f:
    text = f.read()

# 1. Clean 0x8008C444
old_c444 = """        // 0x8008C444 (Model::InitSubmeshes loop condition safeguard)
        case 0x8008C444: {
            u32 r26 = ctx->gpr[26];
            if (r26 && resolve_guest_pointer(ctx, r26)) {
                u32 sub_cnt = mem_read32(ctx, r26 + 0x104);
                if (sub_cnt > 64) {
                    mem_write32(ctx, r26 + 0x104, 12);
                }
            }
            return 0; // Run original code
        }"""

new_c444 = """        // 0x8008C444 (Model::InitSubmeshes loop condition safeguard)
        case 0x8008C444: {
            return 0; // Run original code
        }"""

# 2. Scope 0x8008CD60 only to title cave models
old_cd60 = """            u32 sub_cnt = model ? mem_read32(ctx, model + 260) : 0;
            if (model && s5c && f16c == 0) {
                u32 cur20c = mem_read32(ctx, model + 0x20c);
                u32 sub_cnt_in_pkt = s5c ? mem_read32(ctx, s5c + 0x30) : 0;
                u32 target_st = (sub_cnt > 0) ? 8 : 7;
                u32 flags = (cur20c & 0x00FFFFFF) | (target_st << 24) | 0x01;
                if (buf58 >= 0x80800000) flags |= 0x40;
                else flags &= ~0x40;
                printf("[TLS 8008CD60] Activating model 0x%08X with mesh packet s5c=0x%08X (flags=0x%08X, sub_in_pkt=%u, sub_cnt=%u)!\\n",
                       model, s5c, flags, sub_cnt_in_pkt, sub_cnt);
                fflush(stdout);
                mem_write32(ctx, model + 0x16c, s5c);
                mem_write32(ctx, model + 0x20c, flags);
            } else if (model && f16c != 0) {
                u32 cur20c = mem_read32(ctx, model + 0x20c);
                if (sub_cnt == 0 && st >= 8) {
                    // Revert to state 7 to allow Model::Update to initialize submeshes from 0x16c
                    u32 flags = (cur20c & 0x00FFFFFF) | (7 << 24) | 0x01;
                    if (buf58 >= 0x80800000) flags |= 0x40;
                    else flags &= ~0x40;
                    mem_write32(ctx, model + 0x20c, flags);
                } else if (sub_cnt > 0 && (st != 8 || !(cur20c & 0x01))) {
                    u32 flags = (cur20c & 0x00FFFFFF) | (8 << 24) | 0x01;
                    if (buf58 >= 0x80800000) flags |= 0x40;
                    else flags &= ~0x40;
                    mem_write32(ctx, model + 0x20c, flags);
                }
            }"""

new_cd60 = """            u32 sub_cnt = model ? mem_read32(ctx, model + 260) : 0;
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

# 3. Scope 0x8008D6C0 only to title cave models
old_d6c0 = """            if (model && !(cur20c & 0x01)) {
                mem_write32(ctx, model + 0x20c, cur20c | 0x01);
            }
            if (model) {
                u32 sub_cnt = mem_read32(ctx, model + 260);
                u32 sub_arr = mem_read32(ctx, model + 264);
                if (sub_arr >= 0x80000000 && sub_arr < 0x94000000) {
                    for (u32 si = 0; si < sub_cnt && si < 128; si++) {
                        u32 sm = mem_read32(ctx, sub_arr + si * 4);
                        if (sm >= 0x80000000 && sm < 0x94000000) {
                            u8 b75 = mem_read8(ctx, sm + 75);
                            if (b75 == 0) {
                                mem_write8(ctx, sm + 75, 1);
                            }
                            u32 sm20c = mem_read32(ctx, sm + 0x20c);
                            mem_write32(ctx, sm + 0x20c, sm20c | 0x01);
                        }
                    }
                }
            }"""

new_d6c0 = """            if (model >= 0x81140000 && model <= 0x81160000) {
                if (!(cur20c & 0x01)) {
                    mem_write32(ctx, model + 0x20c, cur20c | 0x01);
                }
            }"""

def replace_norm(haystack, old_s, new_s):
    old_cr = old_s.replace('\r\n', '\n').replace('\n', '\r\n')
    old_lf = old_s.replace('\r\n', '\n')
    if old_cr in haystack:
        return haystack.replace(old_cr, new_s.replace('\r\n', '\n').replace('\n', '\r\n'))
    elif old_lf in haystack:
        return haystack.replace(old_lf, new_s.replace('\r\n', '\n'))
    else:
        print("Failed to find pattern!")
        return haystack

text = replace_norm(text, old_c444, new_c444)
text = replace_norm(text, old_cd60, new_cd60)
text = replace_norm(text, old_d6c0, new_d6c0)

with open('recomp/replacements.c', 'w', encoding='utf-8') as f:
    f.write(text)

print("recomp/replacements.c updated cleanly!")
