with open('recomp/replacements.c', 'r', encoding='utf-8') as f:
    text = f.read()

target = 'case 0x8046C1C8:'
hook = '''case 0x8046DD60: {
            static int s_dd60_cnt = 0;
            if (++s_dd60_cnt <= 10 || s_dd60_cnt % 60 == 0) {
                u32 sm = ctx->gpr[3];
                u32 q40 = sm ? mem_read32(ctx, sm + 0x4040) : 0;
                u32 cnt38 = sm ? mem_read32(ctx, sm + 0x4038) : 0;
                u32 cur_req = q40 ? mem_read32(ctx, q40 + 8) : 0;
                u8 cur_st = cur_req ? mem_read8(ctx, cur_req + 4) : 0;
                char cur_name[64] = {0};
                if (cur_req) {
                    for (int c = 0; c < 63; c++) cur_name[c] = (char)mem_read8(ctx, cur_req + 6 + c);
                }
                printf("[TLS 8046DD60] StreamManager::Update #%d sm=0x%08X (q40=0x%08X, cnt38=%u, req=0x%08X st=%u '%s', lr=0x%08X)\\n",
                       s_dd60_cnt, sm, q40, cnt38, cur_req, cur_st, cur_name, ctx->lr);
                fflush(stdout);
            }
            return 0; // Run original code
        }
        '''
if target in text:
    text = text.replace(target, hook + target)
    with open('recomp/replacements.c', 'w', encoding='utf-8') as f:
        f.write(text)
    print('Added hook 0x8046DD60!')
else:
    print('Target not found')
