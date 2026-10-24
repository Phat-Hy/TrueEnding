#include "tls_debug.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "gx_pipeline.h"

// Use the real CPUState. This file used to declare its own reduced copy that was
// missing ps1[32], which shifted every field after fpr[] by 256 bytes - so the
// telemetry heartbeat reported "PC: 0x00000000" for every frame of every run and
// any diagnosis based on it was meaningless.
#include "cpu/cpu.h"

extern void* resolve_guest_pointer(CPUState* cpu, uint32_t addr);
extern uint32_t mem_read32(CPUState* cpu, uint32_t addr);
extern uint16_t mem_read16(CPUState* cpu, uint32_t addr);
extern uint8_t  mem_read8(CPUState* cpu, uint32_t addr);

typedef struct {
    uint32_t vtable;
    const char* name;
} VtableClassMap;

static const VtableClassMap s_known_classes[] = {
    {0x807975E0, "StrapTask"},
    {0x80779F08, "BootTask"},
    {0x80760D18, "NewTitleTask"},
    {0x80790770, "MapTask"},
    {0x8078A030, "PlayerTask"},
    {0x80779FE0, "MenuLoadTask"},
    {0x8077A028, "MenuSaveTask"},
    {0x8078A4E8, "GameOverTask"},
    {0x8078A3C8, "GamePauseTask"},
    {0x8078B540, "GameSaveTask"},
    {0x8078CAA8, "LoadSeTableTask"},
    {0x80790810, "MenuCommonTask"},
    {0x80790880, "MiniMapTask"},
    {0x80794918, "PickTask"},
    {0x80782EB8, "Event::MovieTask"},
    {0x80782600, "CopyRobotTask"},
    {0x8078FAE8, "BookTask"},
    {0x8077A1A0, "CharaManager<NpcTask>"},
    {0x8077A1E0, "CharaManager<EnemyTask>"},
    {0x8077A220, "CharaManager<PlayerTask>"},
    {0x80779328, "atn::SequenceHolder::SequenceUnit"},
    {0x80796738, "SequenceUnit<GameLoadTask::Option>"},
    {0x80796760, "SequenceUnit<GameTask::Option>"},
    {0x80790128, "Event::PostSequence"},
    {0x80794428, "Event::Sequence"},
    {0x807790B0, "GameLoadTask"},
    {0x807C8AA8, "TaskDelegate_Load"},
    {0x807C8AA0, "TaskDelegate_Scene"},
    {0x8078FB70, "ResourceLoader"},
    {0x00000000, NULL}
};

const char* tls_debug_get_class_name(uint32_t vtable_addr) {
    for (int i = 0; s_known_classes[i].name != NULL; i++) {
        if (s_known_classes[i].vtable == vtable_addr) {
            return s_known_classes[i].name;
        }
    }
    return NULL;
}

const char* tls_debug_get_sequence_name(CPUState* cpu) {
    uint32_t seq_mgr = mem_read32(cpu, 0x8087EE90);
    if (!seq_mgr || !resolve_guest_pointer(cpu, seq_mgr)) {
        return "(none)";
    }
    // Look at current sequence pointer at seq_mgr + 0x48 or + 0x50
    uint32_t cur_seq = mem_read32(cpu, seq_mgr + 0x48);
    if (!cur_seq) cur_seq = mem_read32(cpu, seq_mgr + 0x50);
    if (cur_seq && resolve_guest_pointer(cpu, cur_seq)) {
        uint32_t str_ptr = mem_read32(cpu, cur_seq + 4);
        if (str_ptr && resolve_guest_pointer(cpu, str_ptr)) {
            const char* s = (const char*)resolve_guest_pointer(cpu, str_ptr);
            if (s && s[0] >= 0x20 && s[0] <= 0x7E) return s;
        }
    }
    return "UnknownSeq";
}

void tls_debug_init(void) {
    printf("[TLS Telemetry] Initialized unified engine observability subsystem.\n");
    fflush(stdout);
}

void tls_debug_dump_full(CPUState* cpu, int frame, const char* reason) {
    printf("\n================================================================================\n");
    printf("  [ENGINE TELEMETRY DUMP] Frame %d | Reason: %s\n", frame, reason ? reason : "Manual");
    printf("================================================================================\n");

    // 1. Sequence & Tasks
    const char* seq = tls_debug_get_sequence_name(cpu);
    printf("  Sequence: '%s'\n", seq);

    uint32_t p_ee94 = mem_read32(cpu, 0x8087EE94);
    if (p_ee94 && resolve_guest_pointer(cpu, p_ee94)) {
        uint32_t task_cnt = mem_read32(cpu, p_ee94);
        uint32_t task_arr = mem_read32(cpu, p_ee94 + 8);
        printf("  Active Tasks (%u registered in TaskManager 0x%08X):\n", task_cnt, p_ee94);
        for (uint32_t i = 0; i < task_cnt && i < 16; i++) {
            uint32_t slot = task_arr + i * 20;
            uint32_t fn_update = mem_read32(cpu, slot + 12);
            uint32_t task_ptr  = mem_read32(cpu, slot + 16);
            // These task objects carry their vtable at +0x30, not +0x00 (verified against
            // the GameLoadTask dump whose +0x30 held 0x807790B0, a real vtable whose slots
            // are all text-range code). Reading +0x00 reported "vt=0x00000000" for every
            // task and made the class names unusable.
            uint32_t vt = 0;
            if (task_ptr && resolve_guest_pointer(cpu, task_ptr)) {
                uint32_t cand = mem_read32(cpu, task_ptr + 0x30);
                uint32_t cand_slot = (cand && resolve_guest_pointer(cpu, cand)) ? mem_read32(cpu, cand + 8) : 0;
                if (cand_slot >= 0x80003000u && cand_slot < 0x80730000u) {
                    vt = cand;
                } else {
                    vt = mem_read32(cpu, task_ptr);
                }
            }
            const char* cls = tls_debug_get_class_name(vt);
            char cls_buf[64];
            if (!cls) {
                snprintf(cls_buf, sizeof(cls_buf), "vt=0x%08X", vt);
                cls = cls_buf;
            }

            // Print task-specific state details
            char details[128] = {0};
            if (vt == 0x807975E0) { // StrapTask
                uint32_t st = mem_read32(cpu, task_ptr + 0x48);
                uint32_t cnt = mem_read32(cpu, task_ptr + 0x4C);
                uint32_t frame_cnt = mem_read32(cpu, task_ptr + 0x50);
                snprintf(details, sizeof(details), "st=%u fade_cnt=%u/15 timer=%u/600", st, cnt, frame_cnt);
            } else if (vt == 0x80760D18 || strstr(cls, "Title")) { // NewTitleTask
                uint32_t mode = mem_read32(cpu, task_ptr + 0x2AC);
                uint32_t child = mem_read32(cpu, task_ptr + 0x25C);
                snprintf(details, sizeof(details), "mode=%u child25c=0x%08X", mode, child);
            } else if (vt == 0x807790B0) { // GameLoadTask
                uint32_t st1c = mem_read32(cpu, task_ptr + 0x1C);
                uint32_t st34 = mem_read32(cpu, task_ptr + 0x34);
                snprintf(details, sizeof(details), "+1c=%u +34=%u", st1c, st34);
            }

            printf("    [%u] %-24s task=0x%08X up=0x%08X %s\n", i, cls, task_ptr, fn_update, details);
        }
    }

    // 2. Resource Loader & DVD Streaming
    uint32_t p_f510 = mem_read32(cpu, 0x8087F510);
    if (p_f510 && resolve_guest_pointer(cpu, p_f510)) {
        uint32_t p_arr = mem_read32(cpu, p_f510 + 0x10);
        if (p_arr && resolve_guest_pointer(cpu, p_arr)) {
            uint32_t sub0 = mem_read32(cpu, p_arr + 84);
            uint32_t req0 = (sub0 && resolve_guest_pointer(cpu, sub0)) ? mem_read32(cpu, sub0) : 0;
            if (req0 && resolve_guest_pointer(cpu, req0)) {
                char req_str[64] = {0};
                for (int c = 0; c < 63; c++) req_str[c] = (char)mem_read8(cpu, req0 + 6 + c);
                uint8_t req_st = mem_read8(cpu, req0 + 4);
                printf("  Streaming Queue: active=\"%s\" status=%u req=0x%08X\n", req_str, req_st, req0);
            } else {
                printf("  Streaming Queue: idle\n");
            }
        }
    }

    // 3. Threads & Retrace Queue
    uint32_t q_head = mem_read32(cpu, 0x807C6F60);
    uint32_t fb0 = mem_read32(cpu, 0x807C6F70);
    uint32_t fb1 = mem_read32(cpu, 0x807C6F80);
    printf("  VI Queues: RetraceQueueHead=0x%08X | fb0=0x%08X fb1=0x%08X\n", q_head, fb0, fb1);

    printf("================================================================================\n\n");
    fflush(stdout);
}

void tls_debug_frame(CPUState* cpu, int frame, uint32_t gx_vtx_count, uint32_t batch_count) {
    static uint32_t s_last_seq_hash = 0;
    static uint32_t s_last_task_hash = 0;
    static int s_same_state_frames = 0;

    // Check Sequence
    const char* seq_name = tls_debug_get_sequence_name(cpu);
    uint32_t p_ee94 = mem_read32(cpu, 0x8087EE94);
    uint32_t task_cnt = (p_ee94 && resolve_guest_pointer(cpu, p_ee94)) ? mem_read32(cpu, p_ee94) : 0;
    uint32_t task_arr = (p_ee94 && resolve_guest_pointer(cpu, p_ee94)) ? mem_read32(cpu, p_ee94 + 8) : 0;

    // Hash active tasks
    uint32_t task_hash = task_cnt;
    for (uint32_t i = 0; i < task_cnt && i < 8; i++) {
        uint32_t slot = task_arr + i * 20;
        uint32_t t_ptr = mem_read32(cpu, slot + 16);
        uint32_t t_up  = mem_read32(cpu, slot + 12);
        task_hash ^= (t_ptr << (i * 3)) ^ (t_up << (i * 2));
        if (t_ptr && resolve_guest_pointer(cpu, t_ptr)) {
            task_hash ^= mem_read32(cpu, t_ptr + 0x48); // state
        }
    }

    uint32_t seq_hash = 0;
    for (const char* p = seq_name; *p; p++) seq_hash = (seq_hash * 31) + (uint8_t)*p;

    bool state_changed = (seq_hash != s_last_seq_hash) || (task_hash != s_last_task_hash);
    if (state_changed) {
        s_same_state_frames = 0;
        s_last_seq_hash = seq_hash;
        s_last_task_hash = task_hash;
        tls_debug_dump_full(cpu, frame, "State / Task Transition");
    } else {
        s_same_state_frames++;
        if (s_same_state_frames == 180 || s_same_state_frames == 360) {
            tls_debug_dump_full(cpu, frame, "STALL WARNING: No State Change in 3+ seconds");
        }
    }

    // Periodic 1-line heartbeat every 60 frames
    if (frame % 60 == 0) {
        // PadManager readiness flag: the press-start draw path (src/game_title_press_start.c)
        // skips its fade/advance math entirely unless *(PadManager + 0x284) is non-zero.
        uint32_t pad_mgr = mem_read32(cpu, 0x8087F0A8);
        uint32_t pad_flag = (pad_mgr && resolve_guest_pointer(cpu, pad_mgr)) ? mem_read32(cpu, pad_mgr + 0x284) : 0;
        /* "dropped" is geometry the guest submitted that did not fit the host vertex
         * buffer (gx_pipeline_get_dropped_vertices). Any non-zero value means part of
         * the frame is missing from the picture, so it is reported, not hidden. */
        uint32_t dropped = gx_pipeline_get_dropped_vertices();
        char dropped_note[32];
        if (dropped) {
            snprintf(dropped_note, sizeof(dropped_note), ", dropped %u", dropped);
        } else {
            dropped_note[0] = '\0';
        }
        printf("[TLS Frame %4d] Seq: %-12s | Tasks: %u | GX: %u vtx (%u batches%s) | PC: 0x%08X | pad284=0x%08X\n",
               frame, seq_name, task_cnt, gx_vtx_count, batch_count, dropped_note, cpu->pc, pad_flag);
        fflush(stdout);
    }
}
