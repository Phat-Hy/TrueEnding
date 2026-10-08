#include "replacements.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#ifdef _WIN32
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#else
static short GetAsyncKeyState(int vKey) {
    (void)vKey;
    return 0;
}
#define VK_LEFT 0
#define VK_RIGHT 1
#define VK_UP 2
#define VK_DOWN 3
#define VK_RETURN 4
#define VK_SPACE 5
#endif

void* resolve_guest_pointer(CPUState* ctx, u32 addr) {
    if (addr >= GC_RAM_BASE && addr < GC_RAM_BASE + ctx->ram_size) {
        return ctx->ram + (addr - GC_RAM_BASE);
    }
    if (addr >= GC_RAM_UNCACHED && addr < GC_RAM_UNCACHED + ctx->ram_size) {
        return ctx->ram + (addr - GC_RAM_UNCACHED);
    }
    if (ctx->mem2 && ctx->mem2_size) {
        if (addr >= WII_MEM2_BASE && addr < WII_MEM2_BASE + ctx->mem2_size) {
            return ctx->mem2 + (addr - WII_MEM2_BASE);
        }
        if (addr >= WII_MEM2_UNCACHED && addr < WII_MEM2_UNCACHED + ctx->mem2_size) {
            return ctx->mem2 + (addr - WII_MEM2_UNCACHED);
        }
    }
    return NULL;
}

void handle_instruction_fallback(CPUState* cpu, u32 raw, u32 cia) {
    u32 primary = (raw >> 26) & 0x3F;
    u32 xo = (raw >> 1) & 0x3FF;
    if (primary == 31) {
        switch (xo) {
            case 86:   // dcbf
            case 54:   // dcbst
            case 470:  // dcbi
            case 982:  // icbi
            case 1014: // dcbz_l
                cpu->pc = cia + 4;
                return;
            default:
                break;
        }
    }
    // Safely advance past harmless instructions
    cpu->pc = cia + 4;
}

static u32 s_mmio_regs[0x2000]; // Hash storage for common MMIO offsets

static inline u32 mmio_hash(u32 ea) {
    return (ea >> 2) & 0x1FFF;
}

u64 mmio_external_read(CPUState* cpu, u32 ea, u8 size) {
    (void)cpu;
    // Hollywood Version / ID register
    if (ea == 0xCD006024 || ea == 0xCC006024) {
        return 0x00000021; // Hollywood revision 2.1
    }
    // Memory controller / bus clock
    if (ea == 0xCC004000 || ea == 0xCD004000) {
        return 0x00000001;
    }
    // DSP Mailbox registers (0xCC005000 / 0xCD005000)
    if (ea == 0xCC005000 || ea == 0xCD005000) {
        return 0; // Bit 15/16 clear: CPU mailbox empty (consumed by DSP)
    }
    if (ea == 0xCC005004 || ea == 0xCD005004) {
        return 0x8000; // Bit 15/16 set: DSP has mail / ready
    }
    if (ea == 0xCC005006 || ea == 0xCD005006) {
        return 0; // Low 16 bits of DSP mail
    }
    // DSP control status
    if (ea == 0xCC00500A || ea == 0xCD00500A) {
        return 0;
    }
    // Video Interface
    if (ea == 0xCC00206C || ea == 0xCD00206C) {
        return 0;
    }
    // IPC status (Starlet acknowledgment ready)
    if (ea == 0xCD006434 || ea == 0xCC006434) {
        return 0x00000002;
    }
    // Audio Interface Sample Counter
    if (ea == 0xCD006C08 || ea == 0xCC006C08) {
        static u32 s_ai_samples = 0;
        return (s_ai_samples += 32);
    }

    // EXI (External Interface) registers (0xCD006800 / 0xCC006800)
    if ((ea & 0xFFFFFE00) == 0xCD006800 || (ea & 0xFFFFFE00) == 0xCC006800) {
        u32 reg = ea & 0x3F;
        // EXI0CR (0x0C), EXI1CR (0x20), EXI2CR (0x34): bit 0 (TSTART) clears immediately when transfer completes
        if (reg == 0x0C || reg == 0x20 || reg == 0x34) {
            return s_mmio_regs[mmio_hash(ea)] & ~1u;
        }
        // EXI0DATA (0x10), EXI1DATA (0x24), EXI2DATA (0x38): default to 0xFFFFFFFF if not written
        if (reg == 0x10 || reg == 0x24 || reg == 0x38) {
            u32 val = s_mmio_regs[mmio_hash(ea)];
            return val ? val : 0xFFFFFFFFu;
        }
    }

    // SI (Serial Interface) registers (0xCC006400 / 0xCD006400)
    if ((ea & 0xFFFFFE00) == 0xCD006400 || (ea & 0xFFFFFE00) == 0xCC006400) {
        u32 reg = ea & 0xFF;
        // SICR / SISR / COMCSR: return 0 (no transfer pending, no error)
        if (reg == 0x34 || reg == 0x38) {
            return 0;
        }
    }

    return s_mmio_regs[mmio_hash(ea)];
}

void mmio_external_write(CPUState* cpu, u32 ea, u64 value, u8 size) {
    (void)cpu;
    (void)size;
    // EXI Control Registers: immediately clear TSTART (bit 0) upon write completion
    if ((ea & 0xFFFFFE00) == 0xCD006800 || (ea & 0xFFFFFE00) == 0xCC006800) {
        u32 reg = ea & 0x3F;
        if (reg == 0x0C || reg == 0x20 || reg == 0x34) {
            value &= ~1ULL;
        }
    }
    // DSP Mailbox writes: immediately set AXReady flag (0x8087FFA0) so AXInit proceeds
    if ((ea & 0xFFFFFFF0) == 0xCC005000 || (ea & 0xFFFFFFF0) == 0xCD005000) {
        u32* ax_ready = (u32*)resolve_guest_pointer(cpu, 0x8087FFA0);
        if (ax_ready) *ax_ready = 1;
    }
    s_mmio_regs[mmio_hash(ea)] = (u32)value;
}

static u32 s_simulated_ticks = 0;

static u8 s_controller_button_bits = 0;
static u32 s_controller_poll_count = 0;

/* Current guest time, matching the OSGetTime replacement below. */
static u64 guest_time_now(CPUState* ctx) {
    return ctx->timebase + (u64)s_simulated_ticks;
}

static u8 tls_poll_controller_buttons(void) {
    u8 buttons = 0;
#ifdef _WIN32
    if (GetAsyncKeyState(VK_LEFT) & 0x8000) buttons |= 0x08;
    if (GetAsyncKeyState(VK_RIGHT) & 0x8000) buttons |= 0x04;
    if (GetAsyncKeyState(VK_UP) & 0x8000) buttons |= 0x01;
    if (GetAsyncKeyState(VK_DOWN) & 0x8000) buttons |= 0x02;
    if (GetAsyncKeyState(VK_RETURN) & 0x8000) buttons |= 0x08;
    if (GetAsyncKeyState(VK_SPACE) & 0x8000) buttons |= 0x04;
#endif
    return buttons;
}

int tls_service_controller_input(CPUState* ctx) {
    (void)ctx;
    u8 buttons = tls_poll_controller_buttons();
    s_controller_button_bits = buttons;
    s_controller_poll_count++;
    return buttons != 0;
}

/* System time the OS uses for alarms: __OSGetSystemTime() = OSGetTime() + *(OSTime*)0x800030D8 */
u64 tls_guest_system_time(CPUState* ctx) {
    u64 bias = ((u64)mem_read32(ctx, 0x800030D8) << 32) | mem_read32(ctx, 0x800030DC);
    return guest_time_now(ctx) + bias;
}

static void format_and_print_osreport(CPUState* ctx, const char* fmt) {
    int gpr_idx = 4;
    printf("[TLS OSReport] ");
    for (const char* p = fmt; *p != '\0'; p++) {
        if (*p == '%' && *(p+1) != '\0') {
            p++;
            if (*p == '%') {
                putchar('%');
                continue;
            }
            // Skip width / precision / flags
            while (*p == '-' || *p == '+' || *p == ' ' || *p == '#' || *p == '0' || (*p >= '0' && *p <= '9') || *p == '.') p++;
            while (*p == 'l' || *p == 'h' || *p == 'z') p++;
            if (*p == 's') {
                u32 s_addr;
                if (gpr_idx <= 10) {
                    s_addr = ctx->gpr[gpr_idx++];
                } else {
                    s_addr = 0;
                }
                const char* s = (const char*)resolve_guest_pointer(ctx, s_addr);
                fputs(s ? s : "(null)", stdout);
            } else if (*p == 'd' || *p == 'i') {
                s32 v;
                if (gpr_idx <= 10) {
                    v = (s32)ctx->gpr[gpr_idx++];
                } else {
                    v = 0;
                }
                printf("%d", v);
            } else if (*p == 'u') {
                u32 v;
                if (gpr_idx <= 10) {
                    v = ctx->gpr[gpr_idx++];
                } else {
                    v = 0;
                }
                printf("%u", v);
            } else if (*p == 'x' || *p == 'X') {
                u32 v;
                if (gpr_idx <= 10) {
                    v = ctx->gpr[gpr_idx++];
                } else {
                    v = 0;
                }
                printf((*p == 'x') ? "%x" : "%X", v);
            } else if (*p == 'p') {
                u32 v;
                if (gpr_idx <= 10) {
                    v = ctx->gpr[gpr_idx++];
                } else {
                    v = 0;
                }
                printf("0x%08X", v);
            } else if (*p == 'c') {
                u32 v;
                if (gpr_idx <= 10) {
                    v = ctx->gpr[gpr_idx++];
                } else {
                    v = 0;
                }
                putchar((char)v);
            } else {
                putchar('%');
                putchar(*p);
            }
        } else {
            putchar(*p);
        }
    }
    fflush(stdout);
}

/* ------------------------------------------------------------------
 * Host-backed DVD asset serving (Task 3)
 *
 * The retail disc's FST is absent in the static-recomp runner
 * (FstStart_8087FCE8 == 0), so the SDK's __DVDConvertPathToEntrynum /
 * DVDFastOpen cannot resolve anything and no asset can be loaded.
 *
 * We bypass the FST entirely:
 *   __DVDConvertPathToEntrynum(path)  -> synthetic id for a host file
 *   DVDFastOpen(entrynum, fileInfo)   -> expose size + id in DVDFileInfo
 *   DVDReadAsyncPrio(...)             -> copy bytes straight from the host
 *
 * Guest memory is big-endian, so all DVDFileInfo fields go through
 * mem_read32 / mem_write32.
 * ------------------------------------------------------------------ */
#define TLS_MAX_HOST_FILES 4096
#define TLS_PATH_MAX 256

typedef struct HostAsset {
    char path[TLS_PATH_MAX];
    u32 size;
} HostAsset;

static HostAsset s_host_assets[TLS_MAX_HOST_FILES];
static u32 s_host_asset_count = 0;
static const char* s_asset_root = NULL;
static u32 s_dvd_read_ok = 0;
static u32 s_dvd_read_fail = 0;

static const char* asset_root(void) {
    if (!s_asset_root) {
        const char* env = getenv("TLS_ASSET_ROOT");
        s_asset_root = (env && env[0]) ? env : "orig/DATA/files";
    }
    return s_asset_root;
}

static void asset_full_path(const char* rel, char* out, size_t out_size) {
    snprintf(out, out_size, "%s/%s", asset_root(), rel);
}

/* Map a guest disc path to a synthetic entry number (0 = not found). */
static u32 host_asset_lookup(const char* guest_path) {
    if (!guest_path) {
        return 0;
    }
    const char* p = guest_path;
    while (*p == '/' || *p == '\\') {
        p++;
    }
    char rel[TLS_PATH_MAX];
    size_t i = 0;
    for (; p[i] && i < sizeof(rel) - 1; i++) {
        rel[i] = (p[i] == '\\') ? '/' : p[i];
    }
    rel[i] = '\0';
    if (i == 0) {
        return 0;
    }

    for (u32 k = 0; k < s_host_asset_count; k++) {
        if (strcmp(s_host_assets[k].path, rel) == 0) {
            return k + 1; /* cached */
        }
    }
    if (s_host_asset_count >= TLS_MAX_HOST_FILES) {
        return 0;
    }

    char full[512];
    asset_full_path(rel, full, sizeof(full));
    FILE* f = fopen(full, "rb");
    if (!f) {
        return 0;
    }
    if (fseek(f, 0, SEEK_END) != 0) {
        fclose(f);
        return 0;
    }
    long size = ftell(f);
    fclose(f);
    if (size < 0) {
        return 0;
    }

    strncpy(s_host_assets[s_host_asset_count].path, rel, TLS_PATH_MAX - 1);
    s_host_assets[s_host_asset_count].path[TLS_PATH_MAX - 1] = '\0';
    s_host_assets[s_host_asset_count].size = (u32)size;
    s_host_asset_count++;
    return s_host_asset_count;
}

static const HostAsset* host_asset_by_id(u32 id) {
    if (id == 0 || id > s_host_asset_count) {
        return NULL;
    }
    return &s_host_assets[id - 1];
}

/* Fill a DVDFileInfo: +0x0C state, +0x30 startAddr, +0x34 length, +0x38 callback */
static void dvd_fill_file_info(CPUState* ctx, u32 fi_addr, u32 id, const HostAsset* asset) {
    mem_write32(ctx, fi_addr + 0x0C, 0);          /* DVD_STATE_END */
    mem_write32(ctx, fi_addr + 0x30, id);         /* synthetic host file id */
    mem_write32(ctx, fi_addr + 0x34, asset->size);
    mem_write32(ctx, fi_addr + 0x38, 0);          /* no pending callback */
}

/* ------------------------------------------------------------------
 * Deferred DVD completion callbacks.
 *
 * Retail invokes DVDReadAsyncPrio's callback later, from the DVD
 * thread, and the caller inspects r3 immediately after the call
 * (e.g. 0x8046CAD4 branches on it), so the callback cannot run inline.
 * We queue (callback, fileInfo) and let the runner's frame loop drain
 * the queue, mirroring how the retail DVD thread completes transfers.
 * ------------------------------------------------------------------ */
#define TLS_DVD_MAX_PENDING 32
#define TLS_DVD_IDLE_PC 0x805F50B0u /* OS scheduler idle loop used by the runner */

typedef struct PendingDvdCallback {
    u32 callback;
    u32 file_info;
} PendingDvdCallback;

static PendingDvdCallback s_dvd_pending[TLS_DVD_MAX_PENDING];
static u32 s_dvd_pending_head = 0;
static u32 s_dvd_pending_tail = 0;
static u32 s_dvd_callbacks_run = 0;

#define TLS_MQ_MAX 32

typedef struct PendingMessageQueueWakeup {
    u32 queue_addr;
    u32 message_addr;
} PendingMessageQueueWakeup;

static PendingMessageQueueWakeup s_pending_mq[TLS_MQ_MAX];
static u32 s_pending_mq_head = 0;
static u32 s_pending_mq_tail = 0;
static u32 s_pending_mq_count = 0;

static void dvd_queue_callback(u32 callback, u32 file_info) {
    if (!callback) {
        return;
    }
    u32 next = (s_dvd_pending_tail + 1) % TLS_DVD_MAX_PENDING;
    if (next == s_dvd_pending_head) {
        return; // queue full: drop rather than corrupt
    }
    s_dvd_pending[s_dvd_pending_tail].callback = callback;
    s_dvd_pending[s_dvd_pending_tail].file_info = file_info;
    s_dvd_pending_tail = next;
}


/* Sets up the guest to run one queued callback. Returns 1 when a call was staged. */
int tls_dvd_service_callback(CPUState* ctx) {
    if (s_dvd_pending_head == s_dvd_pending_tail) {
        return 0;
    }
    if (!tls_is_idle_address(ctx->pc)) {
        return 0;
    }
    PendingDvdCallback pending = s_dvd_pending[s_dvd_pending_head];
    s_dvd_pending_head = (s_dvd_pending_head + 1) % TLS_DVD_MAX_PENDING;
    if (!pending.callback) {
        return 0;
    }

    ctx->gpr[3] = 0;                 /* result: DVD_STATE_END */
    ctx->gpr[4] = pending.file_info; /* DVDFileInfo* */
    ctx->lr = TLS_DVD_IDLE_PC;       /* return into the scheduler idle point */
    ctx->pc = pending.callback;
    s_dvd_callbacks_run++;
    if (getenv("TLS_DVD_TRACE") && s_dvd_callbacks_run <= 128) {
        printf("[TLS DVD] callback #%u -> %08X fileInfo=%08X\n", s_dvd_callbacks_run,
               pending.callback, pending.file_info);
        fflush(stdout);
    }
    return 1;
}

int tls_service_message_queues(CPUState* ctx) {
    (void)ctx;
    return 0;
}

/* Ring buffer of the most recent dispatched guest functions, for stall diagnosis. */
#define TLS_RECENT_MAX 64
static u32 s_recent_calls[TLS_RECENT_MAX];
static u32 s_recent_count = 0;
static u32 s_recent_pos = 0;

int tls_is_idle_address(u32 address) {
    return address == 0x805F50B0u || address == 0x805F5060u || address == 0x805F5094u ||
           address == 0x805F50A8u || address == 0x805F50ACu;
}

void tls_record_recent_call(u32 address) {
    if (tls_is_idle_address(address)) {
        return;
    }
    s_recent_calls[s_recent_pos] = address;
    s_recent_pos = (s_recent_pos + 1) % TLS_RECENT_MAX;
    if (s_recent_count < TLS_RECENT_MAX) {
        s_recent_count++;
    }
}

void tls_dump_recent_calls(void) {
    printf("\n[Runner] Last %u non-idle guest functions (oldest first):\n", s_recent_count);
    for (u32 i = 0; i < s_recent_count; i++) {
        u32 idx = (s_recent_pos + TLS_RECENT_MAX - s_recent_count + i) % TLS_RECENT_MAX;
        printf("         0x%08X\n", s_recent_calls[idx]);
    }
}

u32 g_count_c1c8 = 0;
u32 g_count_bbf0 = 0;

int dolrecomp_dispatch_replacement(CPUState* ctx, u32 address) {
    tls_record_recent_call(address);

    switch (address) {
        // OSReport: printf diagnostic messages to host console
        case 0x805EE0D0: {
            u32 fmt_addr = ctx->gpr[3];
            const char* fmt = (const char*)resolve_guest_pointer(ctx, fmt_addr);
            if (fmt) {
                format_and_print_osreport(ctx, fmt);
            }
            ctx->pc = ctx->lr;
            return 1;
        }

        // OSPanic: halt with message
        case 0x805EE160: {
            u32 file_addr = ctx->gpr[3];
            u32 line = ctx->gpr[4];
            u32 msg_addr = ctx->gpr[5];
            const char* file = (const char*)resolve_guest_pointer(ctx, file_addr);
            const char* msg = (const char*)resolve_guest_pointer(ctx, msg_addr);
            printf("[TLS OSPanic] %s:%u: %s\n", file ? file : "<unknown>", line, msg ? msg : "");
            fflush(stdout);
            ctx->pc = ctx->lr;
            return 1;
        }

        // OSGetTime: 64-bit timebase in (r3, r4)
        case 0x805F5F90: {
            s_simulated_ticks += 1000;
            u64 tb = guest_time_now(ctx);
            ctx->gpr[3] = (u32)(tb >> 32);
            ctx->gpr[4] = (u32)(tb & 0xFFFFFFFF);
            ctx->pc = ctx->lr;
            return 1;
        }

        // OSGetTick: 32-bit tick counter in r3
        case 0x805F5FB0: {
            ctx->gpr[3] = (s_simulated_ticks += 1000);
            ctx->pc = ctx->lr;
            return 1;
        }

        // __OSGetSystemTime: 64-bit system time in (r3, r4)
        case 0x805F5FC0: {
            s_simulated_ticks += 2000;
            u64 tb = tls_guest_system_time(ctx);
            ctx->gpr[3] = (u32)(tb >> 32);
            ctx->gpr[4] = (u32)(tb & 0xFFFFFFFF);
            ctx->pc = ctx->lr;
            return 1;
        }

        // __VIDelay: timing delay loop on video encoder
        case 0x806056D0: {
            ctx->pc = ctx->lr;
            return 1;
        }

        // Diagnostic monitoring for resource pipeline
        case 0x8046C1C8: {
            if (++g_count_c1c8 <= 60) {
                printf("[TLS 8046C1C8] #%u lr=0x%08X\n", g_count_c1c8, ctx->lr);
                fflush(stdout);
            }
            return 0; // continue to original code
        }
        case 0x8046BBF0: {
            if (++g_count_bbf0 <= 80) {
                u32 item = ctx->gpr[4];
                u32 st = mem_read32(ctx, item);
                u32 cnt = mem_read32(ctx, item + 80);
                u32 sub0 = mem_read32(ctx, item + 84);
                u32 req = sub0 ? mem_read32(ctx, sub0) : 0;
                printf("[TLS 8046BBF0] #%u item=0x%08X status=%u cnt=%u req=0x%08X req_st=%u (lr=0x%08X)\n",
                       g_count_bbf0, item, st, cnt, req, req ? mem_read8(ctx, req + 4) : 0, ctx->lr);
                fflush(stdout);
            }
            return 0; // continue to original code
        }
        case 0x8046BEE0: {
            printf("[TLS 8046BBF0] EXIT lr=0x%08X\n", ctx->lr);
            fflush(stdout);
            return 0;
        }
        case 0x806254D0: {
            printf("[TLS CXDecompressFast] ENTER src=0x%08X dst=0x%08X (lr=0x%08X)\n",
                   ctx->gpr[3], ctx->gpr[4], ctx->lr);
            fflush(stdout);
            return 0;
        }
        case 0x80625728: {
            printf("[TLS CXUncompressLZ] EXIT dst=0x%08X (lr=0x%08X)\n",
                   ctx->gpr[4], ctx->lr);
            fflush(stdout);
            return 0;
        }
        case 0x80473104: {
            static u32 count_3104 = 0;
            if (++count_3104 <= 80) {
                u32 req = ctx->gpr[3];
                u32 new_st = ctx->gpr[4];
                printf("[TLS SetReqStatus] #%u req=0x%08X -> %u (lr=0x%08X)\n",
                       count_3104, req, new_st, ctx->lr);
                fflush(stdout);
            }
            return 0;
        }
        case 0x80473184: {
            static u32 count_3184 = 0;
            if (++count_3184 <= 80) {
                u32 req = ctx->gpr[3];
                printf("[TLS ReqDoneCb] #%u req=0x%08X status=%u (lr=0x%08X)\n",
                       count_3184, req, mem_read8(ctx, req + 4), ctx->lr);
                fflush(stdout);
            }
            return 0;
        }
        case 0x805F3A80: // OSSendMessage
        case 0x805F3B00: // OSReceiveMessage
        case 0x805F3B40: { // OSJamMessage
            ctx->pc = ctx->lr;
            return 1;
        }

        // __AIClockInit: Audio Interface clock calibration
        case 0x805ECC80:
        // __OSInitAudioSystem: Audio System DSP/ARAM hardware initialization
        case 0x805ECEA0: {
            ctx->pc = ctx->lr;
            return 1;
        }

        // Interrupt controls (dummy pass-through on native host)
        case 0x805F1E80: // OSDisableInterrupts
        case 0x805F1EA0: // OSEnableInterrupts
        case 0x805F1EC0: { // OSRestoreInterrupts
            ctx->gpr[3] = 1; // previous state = enabled
            ctx->pc = ctx->lr;
            return 1;
        }

        // Cache control fallbacks (no-ops on modern cache-coherent PC x64)
        case 0x805ED140: // DCEnable
        case 0x805ED160: // DCInvalidateRange
        case 0x805ED190: // DCFlushRange
        case 0x805ED1F0: // DCFlushRangeNoSync
        case 0x805ED220: // DCZeroRange
        case 0x805ED250: // ICInvalidateRange
        case 0x805ED290: // ICFlashInvalidate
        case 0x805ED2A0: { // ICEnable
            ctx->pc = ctx->lr;
            return 1;
        }

        // IOS / Starlet IPC services
        case 0x8061C6B0: { // IOS_Open
            u32 path_addr = ctx->gpr[3];
            const char* path = (const char*)resolve_guest_pointer(ctx, path_addr);
            printf("[TLS IOS_Open] %s\n", path ? path : "(null)");
            fflush(stdout);
            ctx->gpr[3] = 1; // Return valid file descriptor 1
            ctx->pc = ctx->lr;
            return 1;
        }
        case 0x8061C7E0: { // IOS_Close
            ctx->gpr[3] = 0; // Success
            ctx->pc = ctx->lr;
            return 1;
        }
        case 0x8061C8A0: { // IOS_Read
            u32 buf_addr = ctx->gpr[4];
            u32 len = ctx->gpr[5];
            void* buf = resolve_guest_pointer(ctx, buf_addr);
            if (buf && len > 0) {
                memset(buf, 0, len);
            }
            ctx->gpr[3] = len; // Return bytes read = len (Success)
            ctx->pc = ctx->lr;
            return 1;
        }
        case 0x8061CAB0: // IOS_Write
        case 0x8061CB60: { // IOS_WriteAsync / IOS_Write
            u32 len = ctx->gpr[5];
            ctx->gpr[3] = len; // Return bytes written = len
            ctx->pc = ctx->lr;
            return 1;
        }
        case 0x8061CC60: // IOS_Seek
        case 0x8061CD70: { // IOS_SeekAsync
            ctx->gpr[3] = 0; // Return offset 0
            ctx->pc = ctx->lr;
            return 1;
        }
        case 0x8061D080: { // IOS_Ioctl
            ctx->gpr[3] = 0; // Success
            ctx->pc = ctx->lr;
            return 1;
        }
        case 0x8061D3E0: { // IOS_Ioctlv
            ctx->gpr[3] = 0; // Success
            ctx->pc = ctx->lr;
            return 1;
        }

        // SC (System Config) services
        case 0x80622F40: { // SCCheckStatus
            ctx->gpr[3] = 0; // SC_STATUS_READY (0 = ready, 1 = busy)
            ctx->pc = ctx->lr;
            return 1;
        }

        // DVD services
        case 0x80603FF0: { // DVDSync
            ctx->gpr[3] = 1; // DVD_STATE_END / Success
            ctx->pc = ctx->lr;
            return 1;
        }
        case 0x80605140: { // DVDClose
            ctx->gpr[3] = 1; // Success
            ctx->pc = ctx->lr;
            return 1;
        }

        // __VISendI2CData: I2C transmission to AVE-RVL video encoder
        case 0x80605AB0: {
            ctx->gpr[3] = 0; // Success
            ctx->pc = ctx->lr;
            return 1;
        }

        // VISetNextFrameBuffer: capture guest framebuffer pointer
        case 0x80607120: {
            u32 fb = ctx->gpr[3];
            static u32 s_last_fb = 0;
            if (fb != s_last_fb) {
                printf("[TLS VI] VISetNextFrameBuffer: 0x%08X (lr=0x%08X)\n", fb, ctx->lr);
                fflush(stdout);
                s_last_fb = fb;
            }
            if (ctx->gpr[13]) {
                mem_write32(ctx, ctx->gpr[13] - 22556, fb);
                u32 flags = mem_read32(ctx, ctx->gpr[13] - 22568);
                mem_write32(ctx, ctx->gpr[13] - 22568, flags | 0x10);
            }
            ctx->pc = ctx->lr;
            return 1;
        }

        // __DVDConvertPathToEntrynum(const char* path) -> synthetic host file id
        case 0x805F9EF0: {
            const char* path = (const char*)resolve_guest_pointer(ctx, ctx->gpr[3]);
            u32 id = host_asset_lookup(path);
            if (getenv("TLS_DVD_TRACE") && !id) {
                printf("[TLS DVD] convert MISS: \"%s\"\n", path ? path : "(bad ptr)");
                fflush(stdout);
            }
            ctx->gpr[3] = id ? id : 0xFFFFFFFFu; // -1 when absent, like the SDK
            ctx->pc = ctx->lr;
            return 1;
        }

        // DVDFastOpen(s32 entrynum, DVDFileInfo* fileInfo)
        case 0x805FA200: {
            u32 entry = ctx->gpr[3];
            u32 fi_addr = ctx->gpr[4];
            u8* fi = (u8*)resolve_guest_pointer(ctx, fi_addr);
            const HostAsset* asset = host_asset_by_id(entry);
            if (!fi || !asset) {
                ctx->gpr[3] = 0;
                ctx->pc = ctx->lr;
                return 1;
            }
            dvd_fill_file_info(ctx, fi_addr, entry, asset);
            ctx->gpr[3] = 1;
            ctx->pc = ctx->lr;
            return 1;
        }

        // DVDReadAsyncPrio(fileInfo, addr, length, offset, callback, prio)
        // Served synchronously from the host file; the command block is left in
        // DVD_STATE_END so polling callers see the transfer as complete.
        //
        // KNOWN LIMITATION: the game's completion callback (passed in r7, also
        // stored at fileInfo+0x38) is *not* invoked yet. Retail runs it later
        // from the DVD thread, i.e. after the caller has resumed, and the caller
        // tests r3 immediately after the call (e.g. 0x8046CAD4 branches on the
        // return value), so invoking it inline would break that check. Servicing
        // queued callbacks from the runner's frame loop is the intended fix.
        case 0x805FA4E0: {
            u32 fi_addr = ctx->gpr[3];
            u32 dst_addr = ctx->gpr[4];
            s32 length = (s32)ctx->gpr[5];
            s32 offset = (s32)ctx->gpr[6];
            u32 callback = ctx->gpr[7];
            u8* fi = (u8*)resolve_guest_pointer(ctx, fi_addr);
            void* dst = resolve_guest_pointer(ctx, dst_addr);
            u32 id = fi ? mem_read32(ctx, fi_addr + 0x30) : 0;
            const HostAsset* asset = host_asset_by_id(id);
            int ok = 0;
            u32 transferred = 0;

            if (fi && dst && asset && length > 0 && offset >= 0) {
                char full[512];
                asset_full_path(asset->path, full, sizeof(full));
                FILE* f = fopen(full, "rb");
                if (f) {
                    if (fseek(f, offset, SEEK_SET) == 0) {
                        transferred = (u32)fread(dst, 1, (size_t)length, f);
                        ok = 1; // a short read simply means the transfer hit EOF
                    }
                    fclose(f);
                }
            }
            if (ok) {
                s_dvd_read_ok++;
                if (getenv("TLS_DVD_TRACE") && s_dvd_read_ok <= 128) {
                    printf("[TLS DVD] read #%u %s off=%d len=%d -> %u bytes lr=%08X cb=%08X\n", s_dvd_read_ok,
                           asset ? asset->path : "?", offset, length, transferred, ctx->lr, callback);
                    fflush(stdout);
                }
            } else {
                s_dvd_read_fail++;
            }
            if (!ok && getenv("TLS_DVD_TRACE")) {
                printf("[TLS DVD] read FAIL id=%u off=%d len=%d fi=%08X dst=%08X\n",
                       id, offset, length, fi_addr, dst_addr);
                fflush(stdout);
            }
            if (fi) {
                mem_write32(ctx, fi_addr + 0x1C, transferred); // currTransferSize
                mem_write32(ctx, fi_addr + 0x20, transferred); // transferredSize
                mem_write32(ctx, fi_addr + 0x38, callback);
                mem_write32(ctx, fi_addr + 0x0C, 0); // DVD_STATE_END
            }
            if (ok) {
                dvd_queue_callback(callback, fi_addr); // drained by the runner frame loop
            }
            ctx->gpr[3] = ok ? 1 : 0;
            ctx->pc = ctx->lr;
            return 1;
        }

        // DVDClose(DVDFileInfo*) - SDK implementation, no host state to drop
        case 0x805FA390: {
            ctx->gpr[3] = 1;
            ctx->pc = ctx->lr;
            return 1;
        }

        // WPAD / Bluetooth status: return 1 (ready / initialized)
        case 0x8062CA30:
        case 0x80632414: {
            u8* state = (u8*)resolve_guest_pointer(ctx, 0x80820666);
            if (state) *state = 5;
            ctx->gpr[3] = 1;
            ctx->pc = ctx->lr;
            return 1;
        }

        // WPAD/KPAD input polling: synthesize a small button mask from host keys.
        // The game mostly needs a ready controller and a few digital buttons for boot/menu flow.
        case 0x8062CB10:
        case 0x80632B40: {
            u8 buttons = tls_poll_controller_buttons();
            s_controller_button_bits = buttons;
            s_controller_poll_count++;
            u8* state = (u8*)resolve_guest_pointer(ctx, 0x80820666);
            if (state) *state = 5;
            ctx->gpr[3] = buttons;
            ctx->pc = ctx->lr;
            return 1;
        }

        // ARCInitHandle(void* arc_data, ARCHandle* handle)
        case 0x80625BF0: {
            u32 arc_addr = ctx->gpr[3];
            u32 handle_addr = ctx->gpr[4];
            u8* arc = (u8*)resolve_guest_pointer(ctx, arc_addr);
            u32* handle = (u32*)resolve_guest_pointer(ctx, handle_addr);
            printf("[TLS ARCInitHandle] arc=0x%08X handle=0x%08X\n", arc_addr, handle_addr);
            fflush(stdout);
            if (handle) {
                static const u8 s_empty_u8[48] = {
                    0x55, 0xAA, 0x38, 0x2D, // magic
                    0x00, 0x00, 0x00, 0x20, // nodes offset
                    0x00, 0x00, 0x00, 0x20, // header size
                    0x00, 0x00, 0x00, 0x40, // data offset
                    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                    // Root node at 0x20
                    0x01, 0x00, 0x00, 0x00, // type=0x0100, name=0
                    0x00, 0x00, 0x00, 0x00, // data offset = 0
                    0x00, 0x00, 0x00, 0x01, // size = 1 node
                    0x00, 0x00, 0x00, 0x00  // string table (empty)
                };
                if (!arc || arc[0] != 0x55 || arc[1] != 0xAA || arc[2] != 0x38 || arc[3] != 0x2D) {
                    if (arc) {
                        memcpy(arc, s_empty_u8, sizeof(s_empty_u8));
                    }
                }
                u32 nodes_off = arc ? ((u32)arc[4]<<24 | (u32)arc[5]<<16 | (u32)arc[6]<<8 | (u32)arc[7]) : 0x20;
                u32 files_off = arc ? ((u32)arc[12]<<24 | (u32)arc[13]<<16 | (u32)arc[14]<<8 | (u32)arc[15]) : 0x40;
                u32 header_sz = arc ? ((u32)arc[8]<<24 | (u32)arc[9]<<16 | (u32)arc[10]<<8 | (u32)arc[11]) : 0x20;
                u8* nodes = arc ? (arc + nodes_off) : NULL;
                u32 count = nodes ? ((u32)nodes[8]<<24 | (u32)nodes[9]<<16 | (u32)nodes[10]<<8 | (u32)nodes[11]) : 1;

                handle[0] = arc_addr;
                handle[1] = arc_addr + nodes_off;
                handle[2] = arc_addr + files_off;
                handle[3] = count;
                handle[4] = arc_addr + nodes_off + count * 12;
                handle[5] = header_sz;
                handle[6] = 0;
            }
            ctx->gpr[3] = 1;
            ctx->pc = ctx->lr;
            return 1;
        }

        // HBMInit / HomeButtonMenuInit: no-op stub on PC
        case 0x805C3C70: {
            printf("[TLS HBMInit] Bypassing Home Button Menu initialization on PC\n");
            fflush(stdout);
            ctx->gpr[3] = 0;
            ctx->pc = ctx->lr;
            return 1;
        }

        // DSPInit / DSPReset hardware mailbox handshake: no-op on PC
        case 0x80610DA0: {
            printf("[TLS DSPReset] Completed simulated DSP hardware handshake\n");
            fflush(stdout);
            ctx->pc = ctx->lr;
            return 1;
        }

        // GXCopyDisp(void* dest, u8 clear)
        case 0x80615420: {
            u32 dest = ctx->gpr[3];
            u8 clear = (u8)ctx->gpr[4];
            printf("[TLS GXCopyDisp] dest=0x%08X clear=%u\n", dest, clear);
            fflush(stdout);
            ctx->pc = ctx->lr;
            return 1;
        }

        default:
            return 0; // Fall through to recompiled PowerPC code
    }
}
