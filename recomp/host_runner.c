#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "cpu/cpu.h"
#include "frontend/container/dol.h"
#include "replacements.h"
#include "gx_pipeline.h"

#define DOLRECOMP_ENABLE_REPLACEMENTS 1
#include "generated.h"

#ifdef _WIN32
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <mmsystem.h>
#include "gfx_backend.h"
#include "audio_player.h"
#include "tls_debug.h"

bool g_interactive_mode = false;
bool g_auto_start_game = false; // Default: clean natural boot into Title Screen
int g_runner_current_frame = 0;
static HWND s_hwnd = NULL;
static bool s_window_closed = false;
static GfxConfig s_gfx_config = {0};

static LRESULT CALLBACK window_proc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam) {
    switch (msg) {
        case WM_SIZE:
            if (wParam != SIZE_MINIMIZED) {
                gfx_backend_resize(LOWORD(lParam), HIWORD(lParam));
            }
            return 0;
        case WM_SYSKEYDOWN:
            // Alt + Enter toggles fullscreen
            if (wParam == VK_RETURN && (lParam & (1 << 29))) {
                gfx_backend_toggle_fullscreen();
                return 0;
            }
            break;
        case WM_CLOSE:
            s_window_closed = true;
            DestroyWindow(hwnd);
            return 0;
        case WM_DESTROY:
            s_window_closed = true;
            PostQuitMessage(0);
            return 0;
    }
    return DefWindowProcA(hwnd, msg, wParam, lParam);
}

static bool init_display_window(int width, int height, GfxBackendType backend_type, bool vsync, int target_fps) {
    WNDCLASSA wc = {0};
    wc.lpfnWndProc = window_proc;
    wc.hInstance = GetModuleHandle(NULL);
    wc.lpszClassName = "TLS_Runner_Class";
    wc.hCursor = LoadCursor(NULL, IDC_ARROW);
    wc.hbrBackground = (HBRUSH)GetStockObject(BLACK_BRUSH);
    RegisterClassA(&wc);

    RECT r = {0, 0, width, height};
    AdjustWindowRect(&r, WS_OVERLAPPEDWINDOW, FALSE);

    s_hwnd = CreateWindowA(
        "TLS_Runner_Class",
        "Project The Maybe(Not) Last Story - Native PC Port [Hardware Accelerated]",
        WS_OVERLAPPEDWINDOW | WS_VISIBLE,
        CW_USEDEFAULT, CW_USEDEFAULT,
        r.right - r.left, r.bottom - r.top,
        NULL, NULL, GetModuleHandle(NULL), NULL
    );

    if (!s_hwnd) return false;

    s_gfx_config.backend_type = backend_type;
    s_gfx_config.window_width = width;
    s_gfx_config.window_height = height;
    s_gfx_config.render_scale = 2; // 1080p scale
    s_gfx_config.target_fps = target_fps;
    s_gfx_config.vsync = vsync;
    s_gfx_config.fullscreen = false;
    s_gfx_config.aspect_ratio = GFX_ASPECT_16_9;

    if (!gfx_backend_init(s_hwnd, &s_gfx_config)) {
        printf("[Runner] Warning: Failed to initialize graphics backend, window output disabled.\n");
        return false;
    }

    ShowWindow(s_hwnd, SW_SHOWNORMAL);
    UpdateWindow(s_hwnd);
    SetForegroundWindow(s_hwnd);
    SetFocus(s_hwnd);

    char title[256];
    snprintf(title, sizeof(title),
             "Project The Maybe(Not) Last Story (TrueEnding) - Native PC Port [%s, %s]",
             gfx_backend_get_name(), vsync ? "VSync ON" : "VSync OFF");
    SetWindowTextA(s_hwnd, title);

    timeBeginPeriod(1);
    printf("[Runner] Display window initialized (%dx%d) using %s\n",
           width, height, gfx_backend_get_name());
    return true;
}

static bool update_display_window(const u8* yuyv_fb) {
    if (!s_hwnd || s_window_closed) return false;

    MSG msg;
    while (PeekMessageA(&msg, NULL, 0, 0, PM_REMOVE)) {
        if (msg.message == WM_QUIT) {
            s_window_closed = true;
            return false;
        }
        TranslateMessage(&msg);
        DispatchMessageA(&msg);
    }

    if (s_window_closed) return false;

    // Real-time FPS calculation in title bar
    static LARGE_INTEGER s_last_fps_qpc = {0};
    static LARGE_INTEGER s_qpc_freq = {0};
    static int s_fps_frame_count = 0;
    if (s_qpc_freq.QuadPart == 0) {
        QueryPerformanceFrequency(&s_qpc_freq);
        QueryPerformanceCounter(&s_last_fps_qpc);
    }
    s_fps_frame_count++;
    LARGE_INTEGER now_qpc;
    QueryPerformanceCounter(&now_qpc);
    double elapsed_fps_sec = (double)(now_qpc.QuadPart - s_last_fps_qpc.QuadPart) / (double)s_qpc_freq.QuadPart;
    if (elapsed_fps_sec >= 0.5) {
        double current_fps = (double)s_fps_frame_count / elapsed_fps_sec;
        char title[256];
        snprintf(title, sizeof(title),
                 "The Last Story (TrueEnding PC Port) - [%s | %.1f FPS | %s]",
                 gfx_backend_get_name(), current_fps, s_gfx_config.vsync ? "VSync ON" : "VSync OFF");
        SetWindowTextA(s_hwnd, title);
        s_last_fps_qpc = now_qpc;
        s_fps_frame_count = 0;
    }

    static uint8_t s_black_fb[640 * 480 * 2];
    static bool s_black_fb_inited = false;
    if (!s_black_fb_inited) {
        for (int i = 0; i < 640 * 480 * 2; i += 4) {
            s_black_fb[i + 0] = 16;
            s_black_fb[i + 1] = 128;
            s_black_fb[i + 2] = 16;
            s_black_fb[i + 3] = 128;
        }
        s_black_fb_inited = true;
    }
    const uint8_t* present_fb = yuyv_fb ? yuyv_fb : s_black_fb;
    gfx_backend_present(present_fb, 640, 480);
    return true;
}
#endif


/* End of the DOL's .bss. The OS places the main thread stack immediately above
 * it, so this is the one fact the host needs to compute the same memory map the
 * application's linker script defines (see init_wii_low_memory). */
static u32 s_guest_static_end = 0;

static bool load_dol_into_cpu(CPUState* cpu, const char* path) {
    DOLFile dol;
    if (!dol_load(&dol, path)) {
        fprintf(stderr, "error: failed to load DOL file: %s\n", path);
        return false;
    }

    printf("[Runner] Loaded DOL header from: %s\n", path);
    printf("         Entry Point: 0x%08X\n", dol.header.entry_point);

    // Load text sections
    for (int i = 0; i < DOL_NUM_TEXT; i++) {
        if (dol.header.text_sizes[i] == 0) continue;
        u32 addr = dol.header.text_addresses[i];
        u32 size = dol.header.text_sizes[i];
        const u8* data = dol_get_text_section(&dol, i);
        void* dest = resolve_guest_pointer(cpu, addr);
        if (dest) {
            memcpy(dest, data, size);
            printf("         Text[%d]: 0x%08X - 0x%08X (%u bytes)\n", i, addr, addr + size, size);
        } else {
            fprintf(stderr, "warn: unable to map text section %d at 0x%08X\n", i, addr);
        }
    }

    // Zero BSS prior to loading data so initialized sdata/sdata2 sections are preserved
    if (dol.header.bss_size > 0) {
        void* dest = resolve_guest_pointer(cpu, dol.header.bss_address);
        if (dest) {
            memset(dest, 0, dol.header.bss_size);
            printf("         BSS:     0x%08X - 0x%08X (%u bytes zeroed)\n",
                   dol.header.bss_address, dol.header.bss_address + dol.header.bss_size, dol.header.bss_size);
        }
        s_guest_static_end = dol.header.bss_address + dol.header.bss_size;
    }

    // Load data sections
    for (int i = 0; i < DOL_NUM_DATA; i++) {
        if (dol.header.data_sizes[i] == 0) continue;
        u32 addr = dol.header.data_addresses[i];
        u32 size = dol.header.data_sizes[i];
        const u8* data = dol_get_data_section(&dol, i);
        void* dest = resolve_guest_pointer(cpu, addr);
        if (dest) {
            memcpy(dest, data, size);
            printf("         Data[%d]: 0x%08X - 0x%08X (%u bytes)\n", i, addr, addr + size, size);
        } else {
            fprintf(stderr, "warn: unable to map data section %d at 0x%08X\n", i, addr);
        }
    }

    printf("[DOL CHECK] 0x807785E4 after load = 0x%08X (expected 0x80084F30)\n", mem_read32(cpu, 0x807785E4));
    cpu->pc = dol.header.entry_point;
    dol_free(&dol);
    return true;
}

static void init_wii_low_memory(CPUState* cpu) {
    /* The MEM1 arena low is not a free choice: the guest's OSInit takes it from
     * BI2 (0x8000310C) when that field is non-zero and skips its own computation,
     * and the very first thing the engine does with it is carve a 1 MB heap at
     * OSGetMEM1ArenaLo(). The application's linker script defines the map this
     * value has to respect (asm/ldscript.lcf):
     *
     *     _stack_end   = end of .bss
     *     _stack_addr  = _stack_end + 0x10000        (main thread stack, 64 KB)
     *     _db_stack_addr = _stack_addr + 0x2000      (debugger stack, 8 KB)
     *     __ArenaLo    = (_db_stack_addr + 31) & ~31
     *
     * Both halves were verified in the run: BSS ends at 0x808893B0 and the boot
     * thread reports stackBase=0x808993B0 / stackEnd=0x808893B0.
     *
     * The previous hardcoded 0x8088A000 was 0xC50 bytes above .bss - i.e. inside
     * the main thread's own stack, not above it. Consequences observed, not
     * inferred: the engine's 1 MB heap (arena+8) grew upward through unwritten
     * stack, and at frame 830 an allocation returned 0x80898D60, a live stack
     * address. The caller (fn_800838B8, the game's allocate-through-vtable
     * helper) stored it and then returned through its own clobbered save slot:
     * `lwz r0,0x34(r1); mtlr r0; blr` with r0 = 0xAA, dispatching pc 0xA8. The
     * boot thread then executed string data ("...el/textures/...") as code and
     * never re-entered the frame loop. TLS_WATCH_ADDR on 0x8087E768 showed
     * OSSetMEM1ArenaLo(0x8088A000) at frame 0 from lr=0x805EB7EC, i.e. through
     * the BI2 field written below, which is why this is the fix. */
    const u32 app_stack_size = 0x10000u;  /* _stack_addr - _stack_end */
    const u32 db_stack_size  = 0x2000u;   /* _db_stack_addr - _stack_addr */
    u32 static_end = s_guest_static_end ? s_guest_static_end : 0x808893B0u;
    u32 arena_lo = (static_end + app_stack_size + db_stack_size + 31u) & ~31u;
    /* TLS_ARENALO=<hex> overrides for A/B experiments only. */
    {
        const char* e = getenv("TLS_ARENALO");
        if (e) {
            arena_lo = (u32)strtoul(e, NULL, 0);
            printf("[Runner] MEM1 arena low overridden to 0x%08X (TLS_ARENALO)\n", arena_lo);
        }
    }

    // Standard Wii low memory configuration (OS hardware/arena pointers)
    mem_write32(cpu, 0x80000028, 0x04000000); // MEM1 size: 64 MB
    mem_write32(cpu, 0x8000002C, 0x00000002); // Console type: Wii
    mem_write32(cpu, 0x80000030, arena_lo);   // OSBootInfo ArenaLo
    mem_write32(cpu, 0x80000034, 0x83FE0000); // ArenaHi

    mem_write32(cpu, 0x800000E4, 0);          // __OSCurrentThread = NULL
    mem_write32(cpu, 0x800000E8, 0);          // __OSCurrentContext = NULL

    mem_write32(cpu, 0x800000F0, 0x04000000); // MEM2 size: 64 MB
    mem_write32(cpu, 0x800000F4, 0);          // Wii mode (no GameCube BI2)
    mem_write32(cpu, 0x800000F8, 243000000);  // Bus clock: 243 MHz (0x0E7BE200)
    mem_write32(cpu, 0x800000FC, 60750000);   // Time base frequency: 60.75 MHz (0x039EF880)

    // MEM2 Arena boundaries (OSBootInfo & OSBI2)
    mem_write32(cpu, 0x800030E4, 0x90002000); // MEM2 ArenaLo
    mem_write32(cpu, 0x800030E8, 0x93FE0000); // MEM2 ArenaHi

    // OS BI2 table
    mem_write32(cpu, 0x8000310C, arena_lo);   // BI2 MEM1 ArenaLo (OSInit consumes this)
    mem_write32(cpu, 0x80003110, 0x83FE0000); // BI2 MEM1 ArenaHi
    mem_write32(cpu, 0x80003124, 0x90002000); // BI2 MEM2 ArenaLo
    mem_write32(cpu, 0x80003128, 0x93FE0000); // BI2 MEM2 ArenaHi
    mem_write32(cpu, 0x80003130, 0x93FE0000); // BI2 IPC Buffer Lo
    mem_write32(cpu, 0x80003134, 0x94000000); // BI2 IPC Buffer Hi
    mem_write32(cpu, 0x80003138, 0x04000000); // BI2 Simulated Memory Size (64 MB)

    // Pre-initialize AX audio readiness flag in .sbss (0x8087FFA0)
    mem_write32(cpu, 0x8087FFA0, 1);

    // Pre-initialize NAND and FS library readiness flags
    mem_write32(cpu, 0x80880120, 2); // s_libState = 2 (NAND_LIB_INITIALIZED)
    mem_write32(cpu, 0x8087E8C0, 1); // __fsFd = 1 (ISFS initialized)
}

static inline bool tls_is_system_idle(CPUState* ctx) {
    /* "Idle" may only skip execution when the guest has no pending work. Testing
     * only PC + RunQueueBits is not enough: when the guest sits in the OS idle loop
     * (`while (!*(0x8087F840)) {}` at 0x805F50B0) with no thread in a run queue,
     * that test reports idle forever - so the runner never executes a block, the
     * guest never observes the reschedule word the host raises each vblank, and the
     * whole engine appears to hang at a healthy 60 FPS. Including the pending-work
     * word lets the guest exit its own idle loop and reschedule.
     * TLS_IDLE_IGNORE_PENDING=1 restores the old predicate for A/B. */
    static int s_use_pending = -1;
    if (s_use_pending < 0) s_use_pending = getenv("TLS_IDLE_IGNORE_PENDING") ? 0 : 1;
    if (!tls_is_idle_address(ctx->pc)) return false;
    if (mem_read32(ctx, 0x8087FC60) != 0) return false;
    if (s_use_pending && mem_read32(ctx, 0x8087F840) != 0) return false;
    return true;
}

/* Task-vtable watchpoint. The Chapter 1 handoff dies because the task scheduler
 * executes `lwz r12,12(r12); bctrl` (0x800D28B4) on task objects whose vtable
 * word is 0, so it reads guest address 0x0C and calls 0x01FFFFFC. These two
 * objects are the ones TaskManager still holds when that happens; report every
 * change to their vtable word together with the block that performed it, so the
 * writer - not its victim - is named. */
static void host_watch_task_vtables(CPUState* ctx, u32 block_pc) {
    static const u32 s_addrs[2] = {0x80ADC930u, 0x80B7C950u};
    static u32 s_prev[2] = {0xDEADBEEFu, 0xDEADBEEFu};
    static u32 s_reports = 0;
    for (int i = 0; i < 2; i++) {
        u32 vt = mem_read32(ctx, s_addrs[i]);
        if (s_prev[i] != 0xDEADBEEFu && vt != s_prev[i] && s_reports < 8) {
            s_reports++;
            printf("[Runner] Task vtable watch: 0x%08X 0x%08X -> 0x%08X by block 0x%08X "
                   "(frame %d, lr=0x%08X sp=0x%08X)\n",
                   s_addrs[i], s_prev[i], vt, block_pc, g_runner_current_frame,
                   ctx->lr, ctx->gpr[1]);
            fflush(stdout);
        }
        s_prev[i] = vt;
    }
}

/* Sampled dispatch addresses from the most recent interpreter slice. Used to name
 * the code responsible when a frame burns its entire block budget without
 * producing any geometry - the failure mode where the window keeps reporting a
 * healthy 60 FPS while nothing renders. Sampling one block in 1024 keeps the
 * hot path at a single predictable branch. */
static u32 s_slice_samples[64];
static u32 s_slice_sample_count;

static void host_report_runaway_slice(int frame, int frame_blocks, const char* why) {
    static u32 s_reports = 0;
    if (s_reports >= 3) return;
    s_reports++;
    printf("[Runner] Frame %d burned %d blocks without rendering (%s); sampled dispatches:\n",
           frame, frame_blocks, why);
    for (u32 i = 0; i < s_slice_sample_count; i++) {
        printf("           0x%08X\n", s_slice_samples[i]);
    }
    fflush(stdout);
}

/* __OSCurrentThread watchpoint. tls_wait_probe showed the guest sleeping inside
 * OSSleepThread on 0x807C6F60 with the queue argument correct but the wake never
 * arriving; the same probe read __OSCurrentThread (0x800000E4) as 0x80000001 and
 * later 0x90000004 - neither is a thread object. OSSleepThread loads that global
 * and writes the thread state through it, so once it is junk the sleep/reschedule
 * pair cannot work and the caller spins. Sample it every block while
 * TLS_WATCH_CURRENT_THREAD=1 and name the block that changed it. */
static u32 s_first_thread = 0; /* thread running at the first dispatch: the boot/main thread */
static void host_watch_os_current_thread(CPUState* ctx, u32 block_pc) {
    static int s_enabled = -1;
    static u32 s_prev = 0;
    static int s_reports = 0;
    static int s_bad_reports = 0;
    static int s_have_prev = 0;
    /* Remember the thread running at the first dispatch: that is the boot/main
     * thread, and reporting its state at shutdown distinguishes "still blocked on
     * a queue" from "returned, so it no longer exists". */
    if (!s_first_thread) s_first_thread = mem_read32(ctx, 0x800000E4);
    if (s_enabled < 0) {
        s_enabled = getenv("TLS_WATCH_CURRENT_THREAD") ? 1 : 0;
    }
    if (!s_enabled) return;
    u32 cur = mem_read32(ctx, 0x800000E4);
    if (!s_have_prev) { s_prev = cur; s_have_prev = 1; return; }
    if (cur == s_prev) return;
    u32 prev = s_prev;
    s_prev = cur;
    /* Anything that is not a 4-byte aligned address in the MEM1/MEM2 heaps is not
     * an OSThread. Those transitions are the ones that matter; ordinary thread
     * switches between two real thread objects are summarised by count only. */
    bool invalid = (cur != 0) && ((cur & 3u) != 0u || cur < 0x80000000u);
    if (invalid) {
        if (s_bad_reports++ >= 40) return;
    } else if (s_reports >= 6) {
        return;
    } else {
        s_reports++;
    }
    printf("[Runner] __OSCurrentThread 0x%08X -> 0x%08X%s by block pc=0x%08X lr=0x%08X sp=0x%08X (frame %d)\n",
           prev, cur, invalid ? " [INVALID]" : "", block_pc, ctx->lr, ctx->gpr[1], g_runner_current_frame);
    printf("         0x800000C0:");
    for (u32 a = 0x800000C0; a < 0x80000100; a += 4) printf(" %08X", mem_read32(ctx, a));
    printf("\n");
    u32 sp = ctx->gpr[1];
    for (int depth = 0; depth < 8; depth++) {
        if (sp < 0x80000000u || sp >= 0x80800000u || (sp & 3u)) break;
        u32 back = mem_read32(ctx, sp);
        u32 saved_lr = mem_read32(ctx, sp + 4);
        printf("         frame %d sp=0x%08X lr=0x%08X back=0x%08X\n", depth, sp, saved_lr, back);
        if (back <= sp) break;
        sp = back;
    }
    fflush(stdout);
}

/* Generic sampled memory watch. TLS_WATCH_ADDR=0xAAAAAAAA,0xBBBBBBBB (up to 4)
 * reports every change of those words together with the block that made it.
 * Sampling once per dispatched block catches stores of any width (byte, word,
 * memcpy), which a mem_write32 hook would miss. It follows a stalled manager's
 * pending-operation pointer and thread-queue heads without hardcoding addresses. */
static void host_watch_addrs(CPUState* ctx, u32 block_pc) {
    static int s_init = -1;
    static u32 s_addr[4];
    static u32 s_prev[4];
    static int s_n = 0;
    static int s_reports = 0;
    if (s_init < 0) {
        s_init = 1;
        const char* env = getenv("TLS_WATCH_ADDR");
        if (env) {
            const char* p = env;
            while (*p && s_n < 4) {
                s_addr[s_n] = (u32)strtoul(p, (char**)&p, 0);
                s_prev[s_n] = 0xDEADBEEFu;
                s_n++;
                while (*p == ',' || *p == ' ') p++;
            }
        }
    }
    if (s_n == 0) return;
    for (int i = 0; i < s_n; i++) {
        u32 v = mem_read32(ctx, s_addr[i]);
        if (s_prev[i] == 0xDEADBEEFu) { s_prev[i] = v; continue; }
        if (v == s_prev[i]) continue;
        u32 old = s_prev[i];
        s_prev[i] = v;
        if (s_reports++ >= 300) continue;
        printf("[Runner] WATCH 0x%08X: 0x%08X -> 0x%08X by block pc=0x%08X lr=0x%08X (frame %d)\n",
               s_addr[i], old, v, block_pc, ctx->lr, g_runner_current_frame);
        fflush(stdout);
    }
}

static inline int tls_run_blocks(CPUState* ctx, u32 max_blocks) {
    u32 blocks = 0;
    s_slice_sample_count = 0;
    while (max_blocks == 0u || blocks < max_blocks) {
        if (tls_is_system_idle(ctx)) {
            break;
        }
        u32 pc_before = ctx->pc;
        if (!dolrecomp_call(ctx, ctx->pc)) return 0;
        if (ctx->exception) return 0;
        blocks++;
        host_watch_os_current_thread(ctx, pc_before);
        host_watch_addrs(ctx, pc_before);

        if ((blocks & 1023u) == 0u && s_slice_sample_count < 64) {
            s_slice_samples[s_slice_sample_count++] = ctx->pc;
        }
        if ((blocks & 7u) == 0u) {
            host_watch_task_vtables(ctx, pc_before);
        }

        // A dispatch that leaves PC where it was cannot make progress. Inside
        // the DOL image that is legitimate (the guest's own spin loops, e.g. the
        // boot handshake at 0x800065EC and the OS idle loop, do exactly this and
        // are expected to run until the block budget ends the slice). Outside the
        // DOL image there is no block to return to at all, so the interpreter
        // would re-enter the same dead dispatch forever at ~zero cost: that is
        // the wedge that reported a healthy 60 FPS over a black screen
        // (PC pinning at the 0xFFFFFFFC host-callback sentinel). End the slice
        // and say so instead of hiding it.
        if (ctx->pc == pc_before && !(ctx->pc >= 0x80003000u && ctx->pc < 0x80730000u)) {
            static u32 s_reported_pcs[8];
            static u32 s_reported_count = 0;
            u32 i = 0;
            while (i < s_reported_count && s_reported_pcs[i] != pc_before) i++;
            if (i == s_reported_count && s_reported_count < 8) {
                s_reported_pcs[s_reported_count++] = pc_before;
                printf("[Runner] Dead dispatch: PC 0x%08X is outside guest code and did not advance "
                       "(lr=0x%08X sp=0x%08X cur_thread=0x%08X run_bits=0x%08X) - ending slice\n",
                       pc_before, ctx->lr, ctx->gpr[1],
                       mem_read32(ctx, 0x800000E4), mem_read32(ctx, 0x8087FC60));
                fflush(stdout);
            }
            return (int)blocks;
        }

        if (*(uint32_t*)(ctx->ram + 0x007785E4) != 0x304F0880) {
            printf("[CORRUPT DETECTED IN BLOCK] PC=0x%08X LR=0x%08X block=%u val=0x%08X\n",
                   ctx->pc, ctx->lr, blocks, mem_read32(ctx, 0x807785E4));
            printf("[CORRUPT] Memory around 0x807785C0 - 0x80778600:\n");
            for (u32 a = 0x807785C0; a < 0x80778600; a += 16) {
                printf("  0x%08X: %08X %08X %08X %08X\n",
                       a, mem_read32(ctx, a), mem_read32(ctx, a+4),
                       mem_read32(ctx, a+8), mem_read32(ctx, a+12));
            }
            fflush(stdout);
            static const u32 s_vtable_orig[16] = {
                0x00000000, 0x00000000, 0x807320D0, 0x807785B8,
                0x807320E8, 0x00000000, 0x80778608, 0x00000000,
                0x80084E78, 0x80084F30, 0x80084F58, 0x80084F6C,
                0x80084F7C, 0x80084FA8, 0x807785D0, 0x00000000
            };
            for (int i = 0; i < 16; i++) {
                mem_write32(ctx, 0x807785C0 + i * 4, s_vtable_orig[i]);
            }
        }
    }
    return (int)blocks;
}

static void host_wakeup_thread_queue(CPUState* cpu, u32 queue_addr) {
    u32 head = mem_read32(cpu, queue_addr);
    if (!head || head < 0x80000000 || head >= 0x82000000) {
        if (head != 0) {
            mem_write32(cpu, queue_addr, 0);
            mem_write32(cpu, queue_addr + 4, 0);
        }
        return;
    }

    // Safely unlink all waiting threads from this queue and move to RunQueue directly in guest memory
    u32 cur = head;
    while (cur >= 0x80000000 && cur < 0x82000000) {
        {
            static int s_wp = -1;
            if (s_wp < 0) s_wp = getenv("TLS_WAKE_PROBE") ? 1 : 0;
            if (s_wp) {
                printf("[WAKE] q=0x%08X thr=0x%08X state=%u susp=%d prio=%u bits_before=0x%08X\n",
                       queue_addr, cur, (unsigned)mem_read16(cpu, cur + 0x2C8),
                       (int)mem_read32(cpu, cur + 0x2CC), mem_read32(cpu, cur + 0x2D0),
                       mem_read32(cpu, 0x8087FC60));
                fflush(stdout);
            }
        }
        u32 next = mem_read32(cpu, cur + 0x2E0); // cur->link.next
        if (!next) {
            mem_write32(cpu, queue_addr + 4, 0); // queue->tail = NULL
        } else {
            mem_write32(cpu, next + 0x2E4, 0);   // next->link.prev = NULL
        }
        mem_write32(cpu, queue_addr, next);       // queue->head = next

        mem_write16(cpu, cur + 0x2C8, 1);        // thread->state = OS_THREAD_STATE_READY (1)
        s32 suspend = (s32)mem_read32(cpu, cur + 0x2CC);
        if (suspend <= 0) {
            // SetRun(thread)
            u32 prio = mem_read32(cpu, cur + 0x2D0);
            if (prio < 32) {
                u32 rq = 0x807CB970 + prio * 8;  // RunQueue[prio]
                mem_write32(cpu, cur + 0x2DC, rq); // thread->queue = rq
                u32 tail = mem_read32(cpu, rq + 4);
                if (!tail) {
                    mem_write32(cpu, rq, cur);    // rq->head = cur
                } else {
                    mem_write32(cpu, tail + 0x2E0, cur); // tail->link.next = cur
                }
                mem_write32(cpu, cur + 0x2E4, tail); // cur->link.prev = tail
                mem_write32(cpu, cur + 0x2E0, 0);    // cur->link.next = NULL
                mem_write32(cpu, rq + 4, cur);       // rq->tail = cur

                u32 bits = mem_read32(cpu, 0x8087FC60); // RunQueueBits
                bits |= (1u << (31 - prio));
                mem_write32(cpu, 0x8087FC60, bits);
                mem_write32(cpu, 0x8087FC5C, 1);        // RunQueueHint = TRUE

                /* OSWakeupThread also raises the "reschedule needed" word at
                 * 0x8087F840 (its own code ORs into it at 0x805F5E0C). The OS idle
                 * loop at 0x805F50B0 is literally `while (*(0x8087F840) == 0) {}`,
                 * so a wake delivered by hand _without_ this word leaves the guest
                 * spinning in the idle loop forever - which is the state the run dies
                 * in. Set it exactly like the guest would. TLS_WAKE_NO_RESCHED=1
                 * restores the incomplete behaviour for A/B. */
                static int s_resched = -1;
                if (s_resched < 0) s_resched = getenv("TLS_WAKE_NO_RESCHED") ? 0 : 1;
                if (s_resched) {
                    u32 need = mem_read32(cpu, 0x8087F840);
                    mem_write32(cpu, 0x8087F840, need | 1u);
                }
            }
        }
        cur = next;
    }
}

/* A host callback runs guest code inside the interrupted thread's register set
 * with TLS_HOST_CALLBACK_SENTINEL in LR. If that guest code lets the scheduler
 * run (OSSleepThread / __OSReschedule), the guest saves the *current* context
 * into the interrupted thread's OSThread, so the sentinel can end up as that
 * thread's saved return address; when the thread is resumed it "returns" to
 * 0xFFFFFFFC. No run has been observed doing this (TLS_HOSTCALLBACK_PROBE would
 * say so), and the stray-sentinel report that used to fire once per run turned
 * out to be a *symptom* of stack corruption, not of this path (see §5c.9 of the
 * handover). The leak is silent and unrecoverable when it does happen, so repair
 * it against the host's own saved interrupted state instead of leaving it to the
 * generic invalid-address safeguard. Inert in practice. */
static void host_repair_sentinel_in_thread(CPUState* cpu, u32 thread, const CPUState* interrupted) {
    if (!thread || thread < 0x80000000u || thread >= 0x94000000u) return;
    u32 lr = mem_read32(cpu, thread + 0x84);        /* OSContext.lr   */
    if (lr != TLS_HOST_CALLBACK_SENTINEL && lr != 0xFFFFFFFFu && lr != 0xFFFFFFFDu) return;
    mem_write32(cpu, thread + 0x84, interrupted->lr);   /* OSContext.lr   */
    mem_write32(cpu, thread + 0x198, interrupted->pc);  /* OSContext.srr0 */
    static int s_reports = 0;
    if (s_reports++ < 4) {
        printf("[Runner] Repaired host sentinel leaked into thread 0x%08X context "
               "(lr 0x%08X -> 0x%08X) - the callback ran scheduler code\n",
               thread, lr, interrupted->lr);
        fflush(stdout);
    }
}

/* Run one guest function as a host-invoked "interrupt" and restore the CPU
 * registers afterwards. Memory effects persist, which is what a scheduler call
 * needs: OSWakeupThread moves a thread from a wait queue to a run queue by
 * writing guest memory. The hand-rolled queue surgery this replaces raced the
 * guest mid-__OSReschedule (observed at frame 829: __OSCurrentThread was 0 while
 * the thread was still on the queue) and left the boot thread unwakeable. */
static bool host_call_guest(CPUState* cpu, u32 fn, u32 arg) {
    if (!fn) return false;
    CPUState saved = *cpu;
    u32 thread_before = mem_read32(cpu, 0x800000E4);
    cpu->gpr[3] = arg;
    cpu->gpr[4] = cpu->gpr[1];   /* OSContext*: handlers take (interrupt type, context) */
    cpu->lr = TLS_HOST_CALLBACK_SENTINEL;
    cpu->pc = fn;
    cpu->downcount = 10000;
    g_host_callback_depth++;
    tls_run_blocks(cpu, 4000);
    g_host_callback_depth--;
    u32 ended_at = cpu->pc;
    /* Naming the callback and whether it rescheduled turns "the sentinel leaked
     * somewhere" into a producer. TLS_HOSTCALLBACK_PROBE=1. */
    static int s_probe = -1;
    if (s_probe < 0) s_probe = getenv("TLS_HOSTCALLBACK_PROBE") ? 1 : 0;
    if (s_probe) {
        printf("[Runner] host callback 0x%08X frame=%d ended_at=0x%08X thread 0x%08X -> 0x%08X\n",
               fn, g_runner_current_frame, ended_at, thread_before, mem_read32(cpu, 0x800000E4));
        fflush(stdout);
    }
    host_repair_sentinel_in_thread(cpu, thread_before, &saved);
    saved.timebase = cpu->timebase;
    *cpu = saved;
    cpu->exception = 0;
    cpu->program_exception = 0;
    return ended_at == TLS_HOST_CALLBACK_SENTINEL || ended_at == 0;
}

static void host_insert_alarm(CPUState* cpu, u32 alarm, u32 handler) {
    u64 period = ((u64)mem_read32(cpu, alarm + 0x18) << 32) | mem_read32(cpu, alarm + 0x1C);
    u64 fire = 0;
    if (period > 0) {
        u64 cur_time = tls_guest_system_time(cpu);
        u64 start = ((u64)mem_read32(cpu, alarm + 0x20) << 32) | mem_read32(cpu, alarm + 0x24);
        fire = start;
        if (start < cur_time) {
            fire += ((cur_time - start) / period) * period + period;
        }
    }
    mem_write32(cpu, alarm + 0x00, handler);
    mem_write32(cpu, alarm + 0x08, (u32)(fire >> 32));
    mem_write32(cpu, alarm + 0x0C, (u32)(fire & 0xFFFFFFFF));

    u32 next = mem_read32(cpu, 0x8087FBE0); // AlarmQueue.head
    while (next != 0) {
        u64 next_fire = ((u64)mem_read32(cpu, next + 0x08) << 32) | mem_read32(cpu, next + 0x0C);
        if (next_fire > fire) {
            u32 prev = mem_read32(cpu, next + 0x10);
            mem_write32(cpu, alarm + 0x10, prev); // alarm->prev = next->prev
            mem_write32(cpu, next + 0x10, alarm); // next->prev = alarm
            mem_write32(cpu, alarm + 0x14, next); // alarm->next = next
            if (prev != 0) {
                mem_write32(cpu, prev + 0x14, alarm); // prev->next = alarm
            } else {
                mem_write32(cpu, 0x8087FBE0, alarm); // AlarmQueue.head = alarm
            }
            return;
        }
        next = mem_read32(cpu, next + 0x14);
    }
    // Append to tail
    u32 tail = mem_read32(cpu, 0x8087FBE4); // AlarmQueue.tail
    mem_write32(cpu, alarm + 0x14, 0); // alarm->next = NULL
    mem_write32(cpu, 0x8087FBE4, alarm); // AlarmQueue.tail = alarm
    mem_write32(cpu, alarm + 0x10, tail); // alarm->prev = tail
    if (tail != 0) {
        mem_write32(cpu, tail + 0x14, alarm); // tail->next = alarm
    } else {
        mem_write32(cpu, 0x8087FBE0, alarm); // AlarmQueue.head = alarm
        mem_write32(cpu, 0x8087FBE4, alarm); // AlarmQueue.tail = alarm
    }
}

// The runner does not model the decrementer interrupt, so OSAlarm expiry is
// emulated here: every frame, alarms whose fire time has passed are serviced.
// Periodic alarms (period > 0) are re-enqueued for their next interval.
static void host_service_alarms(CPUState* cpu) {
    if (!tls_is_idle_address(cpu->pc)) {
        return;
    }
    for (int i = 0; i < 16; i++) {
        u32 head = mem_read32(cpu, 0x8087FBE0);
        if (head == 0) {
            return;
        }
        u64 fire = ((u64)mem_read32(cpu, head + 0x08) << 32) | mem_read32(cpu, head + 0x0C);
        if (fire > tls_guest_system_time(cpu)) {
            return;
        }
        u32 next = mem_read32(cpu, head + 0x14); // alarm->next
        mem_write32(cpu, 0x8087FBE0, next);
        if (next != 0) {
            mem_write32(cpu, next + 0x10, 0); // next->prev = NULL
        } else {
            mem_write32(cpu, 0x8087FBE4, 0);
        }
        u32 handler = mem_read32(cpu, head + 0x00);
        if (handler == 0) {
            continue; // cancelled alarm
        }
        mem_write32(cpu, head + 0x00, 0); // alarm->handler = NULL
        mem_write32(cpu, head + 0x14, 0); // alarm->next = NULL

        u64 period = ((u64)mem_read32(cpu, head + 0x18) << 32) | mem_read32(cpu, head + 0x1C);
        if (period > 0) {
            host_insert_alarm(cpu, head, handler);
        }

        CPUState saved_state = *cpu;
        u32 initial_cur_thread = mem_read32(cpu, 0x800000E4);

        cpu->gpr[3] = head;        // OSAlarm* alarm
        cpu->gpr[4] = cpu->gpr[1]; // OSContext*
        cpu->lr = TLS_HOST_CALLBACK_SENTINEL; // host sentinel; see replacements.h
        cpu->pc = handler;
        cpu->downcount = 10000;
        g_host_callback_depth++;
        tls_run_blocks(cpu, 1000);
        g_host_callback_depth--;

        // A handler that runs scheduler code with the sentinel still in LR can
        // push that sentinel into a thread context, which later surfaces as a
        // jump to 0xFFFFFFFC in the middle of frame execution. Report it and
        // repair it (see host_repair_sentinel_in_thread) rather than letting it
        // hide in the frame loop.
        u32 final_cur_thread = mem_read32(cpu, 0x800000E4);
        if (final_cur_thread != initial_cur_thread) {
            static u32 s_alarm_switch_reports = 0;
            if (s_alarm_switch_reports < 4) {
                s_alarm_switch_reports++;
                printf("[Runner] Alarm handler 0x%08X ran scheduler code "
                       "(cur_thread 0x%08X -> 0x%08X, pc=0x%08X)\n",
                       handler, initial_cur_thread, final_cur_thread, cpu->pc);
                fflush(stdout);
            }
        }
        host_repair_sentinel_in_thread(cpu, initial_cur_thread, &saved_state);

        // In RVL-SDK, OSAlarm callbacks are interrupt handlers that run on the interrupt stack.
        // Once the alarm callback finishes, the CPU state must ALWAYS be restored to the interrupted state.
        saved_state.timebase = cpu->timebase; // preserve timebase advancement
        *cpu = saved_state;
        cpu->exception = 0;
        cpu->program_exception = 0;
    }
}

static void host_simulate_vblank(CPUState* cpu, int frame_num) {
    (void)frame_num;
    /* 0x807C6F60 is not free real estate. The guest treats it as an OSThreadQueue
     * (OSSleepThread(0x807C6F60) from the drain loop at 0x80071CFC) *and* keeps its
     * own two halfword counters at 0x807C6FB8 / 0x807C6FBA, which is what that loop
     * tests. The previous unconditional "read index := write index" silently
     * rewrote the guest's own counter once per frame, and the force-wakeup moved
     * waiters to the run queue behind __OSReschedule's back. Both are guesses about
     * what this word means; TLS_NO_FRAMEQUEUE_HACK=1 removes them so the effect can
     * be measured instead of assumed. */
    static int s_hack = -1;
    if (s_hack < 0) {
        s_hack = getenv("TLS_NO_FRAMEQUEUE_HACK") ? 0 : 1;
        printf("[Runner] VBlank frame-queue hack: %s\n", s_hack ? "enabled (legacy)" : "DISABLED (TLS_NO_FRAMEQUEUE_HACK)");
        fflush(stdout);
    }
    if (s_hack) {
        // 1. Advance graphics frame queue read index to match write index
        u16 write_idx = mem_read16(cpu, 0x807C6FB8);
        mem_write16(cpu, 0x807C6FBA, write_idx);
    }

    /* VBlank-side trace. The boot thread's last action before the engine goes
     * quiet is OSSleepThread(0x807C6F60) from the GX-fifo drain loop, and the only
     * thing that ever wakes it is the host. Print what the host sees at each
     * vblank - fifo counters, queue head, run bits, current thread - so the frame
     * where the wakeup stops being delivered becomes visible. TLS_VBLANK_PROBE=<n>. */
    {
        static int s_vb_from = -2;
        if (s_vb_from == -2) {
            const char* e = getenv("TLS_VBLANK_PROBE");
            s_vb_from = e ? atoi(e) : -1;
        }
        if (s_vb_from >= 0 && g_runner_current_frame >= s_vb_from) {
            u32 head = mem_read32(cpu, 0x807C6F60);
            printf("[VBLANK] frame=%d W=%u R=%u qhead=0x%08X runbits=0x%08X cur=0x%08X headstate=%u pc=0x%08X lr=0x%08X\n",
                   g_runner_current_frame,
                   (unsigned)mem_read16(cpu, 0x807C6FB8),
                   (unsigned)mem_read16(cpu, 0x807C6FBA),
                   head, mem_read32(cpu, 0x8087FC60), mem_read32(cpu, 0x800000E4),
                   (head >= 0x80000000u && head < 0x94000000u) ? (unsigned)mem_read16(cpu, head + 0x2C8) : 0,
                   cpu->pc, cpu->lr);
            fflush(stdout);
        }
    }

    // 2. Signal VBlank retrace flags at r13 (pre-retrace at -26599, post-retrace at -26598)
    mem_write8(cpu, 0x808852A0 - 26599, 1);
    mem_write8(cpu, 0x808852A0 - 26598, 1);


    // 3. Advance simulated timebase (~1/60 sec at 60MHz bus clock = 1,000,000 ticks)
    cpu->timebase += 1000000;

    /* Deliver a real retrace interrupt. The engine parks in the OS idle loop
     * waiting for one; poking memory cannot wake a spinning idle context, and that
     * is exactly the state the run dies in (PC 0x805F50B0, RunQueueBits 0). The OS
     * registered its handler for interrupt 24 at boot (0x80602ED0, seen via
     * __OSSetInterruptHandler), so call it at the vblank boundary and let the guest
     * wake whatever it is supposed to wake. TLS_VIRETRACE=<hex handler> enables it
     * so the effect stays measurable rather than assumed. */
    {
        static int s_virq_init = -1;
        static u32 s_virq = 0;
        if (s_virq_init < 0) {
            s_virq_init = 1;
            const char* e = getenv("TLS_VIRETRACE");
            if (e) {
                s_virq = (u32)strtoul(e, NULL, 0);
                printf("[Runner] VI retrace handler: 0x%08X\n", s_virq);
                fflush(stdout);
            }
        }
        if (s_virq) {
            host_call_guest(cpu, s_virq, 24u);
        }
    }

    // 4. Wake whoever waits on the graphics frame queue. Two ways:
    /* Raise the OS "reschedule needed" word, which is what a VI retrace interrupt
     * leaves behind. 0x8087F840 is written by the guest's own OSWakeupThread
     * (0x805F5E0C) and the OS idle loop at 0x805F50B0 is `while (!*(0x8087F840)) {}`,
     * so the host must raise it once per retrace or the idle context never gets a
     * chance to reschedule - which is exactly how the engine ends up parked at
     * 0x805F50B0 with RunQueueBits 0. Unlike calling the VI handler directly (which
     * corrupts the guest because the interrupt-entry context is missing), this is
     * only the flag the handler would set; the guest schedules itself.
     * TLS_RETRACE_FLAG=0 disables it for A/B. */
    {
        static int s_flag_init = -1;
        static int s_flag = 1;
        if (s_flag_init < 0) {
            s_flag_init = 1;
            const char* e = getenv("TLS_RETRACE_FLAG");
            if (e) s_flag = atoi(e) != 0;
            printf("[Runner] Retrace reschedule flag: %s\n", s_flag ? "raised each vblank" : "off");
            fflush(stdout);
        }
        if (s_flag) {
            u32 need = mem_read32(cpu, 0x8087F840);
            mem_write32(cpu, 0x8087F840, need | 1u);
        }
    }

    //    legacy - hand-edit the guest thread queue (races __OSReschedule),
    //    guest  - call the guest's own OSWakeupThread so its accounting is used.
    if (s_hack) {
        static int s_wake_mode = -1;
        if (s_wake_mode < 0) {
            const char* e = getenv("TLS_FRAMEQUEUE_WAKE");
            s_wake_mode = (e && e[0] == 'g') ? 1 : 0;
            printf("[Runner] Frame-queue wake mode: %s\n", s_wake_mode ? "guest OSWakeupThread" : "legacy host surgery");
            fflush(stdout);
        }
        if (s_wake_mode == 1) {
            u32 head = mem_read32(cpu, 0x807C6F60);
            if (head >= 0x80000000u && head < 0x94000000u) {
                host_call_guest(cpu, 0x805F5D60u, 0x807C6F60u);
            }
        } else {
            host_wakeup_thread_queue(cpu, 0x807C6F60);
        }
    }
}

int main(int argc, char** argv) {
#ifdef _WIN32
    timeBeginPeriod(1);
#endif
    const char* dol_path = "orig/main.dol";
    u32 max_blocks = 300000;
    int max_frames = 10;
    bool frames_specified = false;
    bool enable_window = true;
    int win_width = 1280;
    int win_height = 720;
    int target_fps = 60; // Default 60 FPS (0 = uncapped)
    GfxBackendType backend_type = GFX_BACKEND_AUTO;
    bool vsync = true;
    bool enable_audio = true;
    const char* bgm_path = "orig/DATA/files/sound/stream/BGM_SYST001_TITLE.brstm";
    float audio_volume = 1.0f;

    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "--help") == 0 || strcmp(argv[i], "-h") == 0) {
            printf("Project The Maybe(Not) Last Story (TrueEnding) Native PC Runner\n");
            printf("Usage: %s [options]\n\n", argv[0]);
            printf("Options:\n");
            printf("  --dol <path>      Path to input DOL file (default: orig/main.dol)\n");
            printf("  --blocks <N>      Max blocks per slice (default: 500000)\n");
            printf("  --frames <N>      Simulated frames to run (0=unlimited, default: 0 in windowed, 10 in headless)\n");
            printf("  --window, -w      Enable interactive display window (default)\n");
            printf("  --headless        Run in headless console mode without display window\n");
            printf("  --width <pixels>  Display window width (default: 1280)\n");
            printf("  --height <pixels> Display window height (default: 720)\n");
            printf("  --fps <N>         Target frame rate cap (30, 60, 120, 0=uncapped, default: 60)\n");
            printf("  --gfx <backend>   Graphics backend: auto, d3d12, d3d11, gdi (default: auto)\n");
            printf("  --vsync <0|1>     Enable (1) or disable (0) vertical sync (default: 1)\n");
            printf("  --novsync         Disable vertical sync\n");
            printf("  --no-audio        Disable native audio playback\n");
            printf("  --bgm <path>      BRSTM music track to stream (default: title theme)\n");
            printf("  --vol <0.0-1.0>   Master audio volume (default: 1.0)\n");
            printf("  --help, -h        Show this help message\n\n");
            printf("Interactive Controls:\n");
            printf("  Alt + Enter       Toggle Fullscreen / Windowed\n");
            printf("  F12               Save Backbuffer Screenshot (build/recomp/d3d11_screenshot.ppm)\n");
            printf("  Space / Enter / Z / Left Click: A Button\n");
            printf("  Escape / Backspace / X / Right Click: B Button\n");
            printf("  WASD / Arrow Keys: Analog Stick / D-Pad\n");
            printf("  1 / Tab: + Button | 2: - Button | Shift: ZL | Ctrl: ZR\n");
            printf("  Escape / Close: Exit runner\n");
            return 0;
        } else if (strcmp(argv[i], "--dol") == 0 && i + 1 < argc) {
            dol_path = argv[++i];
        } else if (strcmp(argv[i], "--blocks") == 0 && i + 1 < argc) {
            max_blocks = (u32)atoi(argv[++i]);
        } else if ((strcmp(argv[i], "--frames") == 0 || strcmp(argv[i], "-f") == 0) && i + 1 < argc) {
            max_frames = atoi(argv[++i]);
            frames_specified = true;
        } else if (strcmp(argv[i], "--headless") == 0) {
            enable_window = false;
        } else if (strcmp(argv[i], "--window") == 0 || strcmp(argv[i], "-w") == 0) {
            enable_window = true;
        } else if (strcmp(argv[i], "--width") == 0 && i + 1 < argc) {
            win_width = atoi(argv[++i]);
        } else if (strcmp(argv[i], "--height") == 0 && i + 1 < argc) {
            win_height = atoi(argv[++i]);
        } else if (strcmp(argv[i], "--fps") == 0 && i + 1 < argc) {
            target_fps = atoi(argv[++i]);
        } else if (strcmp(argv[i], "--gfx") == 0 && i + 1 < argc) {
            i++;
            if (strcmp(argv[i], "d3d12") == 0) backend_type = GFX_BACKEND_D3D12;
            else if (strcmp(argv[i], "d3d11") == 0) backend_type = GFX_BACKEND_D3D11;
            else if (strcmp(argv[i], "gdi") == 0) backend_type = GFX_BACKEND_GDI;
        } else if (strcmp(argv[i], "--vsync") == 0 && i + 1 < argc) {
            vsync = atoi(argv[++i]) != 0;
        } else if (strcmp(argv[i], "--novsync") == 0) {
            vsync = false;
        } else if (strcmp(argv[i], "--no-audio") == 0) {
            enable_audio = false;
        } else if (strcmp(argv[i], "--bgm") == 0 && i + 1 < argc) {
            bgm_path = argv[++i];
        } else if (strcmp(argv[i], "--vol") == 0 && i + 1 < argc) {
            audio_volume = (float)atof(argv[++i]);
        } else if (strcmp(argv[i], "--stage") == 0 && i + 1 < argc) {
            extern char g_tls_stage_override[32];
            strncpy(g_tls_stage_override, argv[++i], 31);
            printf("[Runner] Stage override active: %s\n", g_tls_stage_override);
        } else if (strcmp(argv[i], "--title") == 0 || strcmp(argv[i], "-t") == 0) {
            g_auto_start_game = false;
            printf("[Runner] Title screen enabled.\n");
        } else if (strcmp(argv[i], "--game") == 0 || strcmp(argv[i], "--cave") == 0 || strcmp(argv[i], "-g") == 0) {
            g_auto_start_game = true;
            printf("[Runner] Direct campaign launch enabled (Chapter 1 Gurgan Cave).\n");
        }
    }

    g_interactive_mode = enable_window && !frames_specified;

    if (g_interactive_mode) {
        max_frames = 0; // Continuous interactive execution
    }

    if (enable_window) {
        if (!frames_specified) {
            FILE* log_fp = freopen("interactive_debug.log", "a", stdout);
            if (log_fp) {
                setvbuf(stdout, NULL, _IOLBF, 8192);
                printf("\n--- New Interactive Session Started ---\n");
                printf("[Runner] Persistent interactive logging initialized: interactive_debug.log\n");
                fflush(stdout);
            }
        }
    }

#ifdef _WIN32
    CreateDirectoryA("SaveData", NULL);
    CreateDirectoryA("savedata", NULL);
#endif

    // Ensure savedata.dat exists with proper size (0x149580 = 1348992 bytes)
    FILE* sf = fopen("savedata/savedata.dat", "rb");
    long sf_size = 0;
    if (sf) {
        fseek(sf, 0, SEEK_END);
        sf_size = ftell(sf);
        fclose(sf);
    }
    if (sf_size < 1348992) {
        sf = fopen("savedata/savedata.dat", "wb");
        if (sf) {
            static const uint8_t zero_block[4096] = {0};
            for (uint32_t i = 0; i < 1348992 / 4096; i++) {
                fwrite(zero_block, 1, 4096, sf);
            }
            if (1348992 % 4096 > 0) {
                fwrite(zero_block, 1, 1348992 % 4096, sf);
            }
            fclose(sf);
            printf("[Runner] Initialized empty savedata/savedata.dat (%u bytes)\n", 1348992);
        }
    }

    printf("=================================================================\n");
    printf("  Project The Maybe(Not) Last Story (TrueEnding) Native PC Runner\n");
    printf("  Recompiled Architecture: PowerPC 750CL (Gekko) -> x86_64\n");
    printf("  Controls: Enter/Space/Z/LeftClick: A | Esc/Backspace/X: B\n");
    printf("            WASD/Arrow Keys: Movement | 1/Tab: + | 2: - | V: Button 2\n");
    printf("            F12: Screenshot\n");
    printf("=================================================================\n\n");

    CPUState cpu;
    if (!cpu_init(&cpu)) {
        fprintf(stderr, "Fatal: failed to initialize CPUState\n");
        return 1;
    }

    if (!cpu_alloc_mem2(&cpu, WII_MEM2_SIZE)) {
        fprintf(stderr, "Fatal: failed to allocate 64MB MEM2\n");
        cpu_free(&cpu);
        return 1;
    }

    printf("[Runner] Initialized CPUState (MEM1: %u MB, MEM2: %u MB)\n",
           cpu.ram_size / (1024 * 1024), cpu.mem2_size / (1024 * 1024));

    if (!load_dol_into_cpu(&cpu, dol_path)) {
        fprintf(stderr, "Fatal: failed to load DOL binary\n");
        cpu_free(&cpu);
        return 1;
    }

    init_wii_low_memory(&cpu);

    // Initialize initial PowerPC state
    cpu.instruction_fallback = handle_instruction_fallback;
    cpu.external_read = mmio_external_read;
    cpu.external_write = mmio_external_write;
    cpu.gpr[1] = 0x80700000; // Initial stack pointer
    cpu.msr = 0x00002000;    // FP enabled

    // Initialize GX hardware graphics pipeline decoder
    host_set_active_cpu(&cpu);
    gx_pipeline_init();
    gx_pipeline_set_pointer_resolver(host_resolve_gx_guest_addr);
    tls_debug_init();

#ifdef _WIN32
    if (enable_window) {
        init_display_window(win_width, win_height, backend_type, vsync, target_fps);
    }
#endif

    if (enable_audio) {
        if (audio_player_init(48000, 2)) {
            audio_player_set_volume(audio_volume);
            if (bgm_path && strlen(bgm_path) > 0) {
                audio_player_play_brstm(bgm_path, true);
            }
        }
    }

    printf("[Runner] Starting execution from entry point 0x%08X (limit: %u blocks/slice, frames: %d, target FPS: %d%s)...\n",
           cpu.pc, max_blocks, max_frames, target_fps, target_fps <= 0 ? " [uncapped]" : "");

    int result = 0;
    int frame = 0;
    for (; max_frames == 0 || frame < max_frames; frame++) {
        gx_pipeline_begin_frame();
#ifdef _WIN32
        LARGE_INTEGER qpc_freq, t_start, t_end;
        if (enable_window) {
            QueryPerformanceFrequency(&qpc_freq);
            QueryPerformanceCounter(&t_start);
        }
#endif
        // 1. Advance VBlank and timebase at start of frame, then service expired alarms
        g_runner_current_frame = frame;
        host_simulate_vblank(&cpu, frame);
        host_service_alarms(&cpu);
        LARGE_INTEGER t1, t2, t4;
        QueryPerformanceCounter(&t1);

        // 2. Poll host input and update controller structures
        tls_input_new_frame();
        tls_service_controller_input(&cpu);

        // 3. Run CPU blocks for the active thread(s)
        int frame_blocks = 0;
        int ran = 0;
        if (!tls_is_system_idle(&cpu)) {
            cpu.downcount = 50000;
            ran = tls_run_blocks(&cpu, max_blocks);
            frame_blocks += ran;
            result = ran;
            if (cpu.exception != 0) {
                printf("\n[Runner] CPU Exception 0x%08X at PC 0x%08X\n", cpu.exception, cpu.pc);
                break;
            }
        }
        // 4. If thread is still doing work, run it until idle
        int drain_iters = 0;
        while (!tls_is_system_idle(&cpu) && drain_iters < 1) {
            cpu.downcount = 10000;
            ran = tls_run_blocks(&cpu, 5000);
            frame_blocks += ran;
            if (cpu.exception != 0) break;
            drain_iters++;
        }

        // 5. Drain any deferred DVD/IPC completion callbacks and sub-frame alarms
        for (int step = 0; step < 4; step++) {
            bool cb_work = false;
            while (tls_dvd_service_callback(&cpu) || tls_ipc_service_callback(&cpu)) {
                cpu.downcount = 10000;
                ran = tls_run_blocks(&cpu, 4000);
                frame_blocks += ran;
                cb_work = true;
                if (cpu.exception != 0) break;
            }
            if (cpu.exception != 0) break;

            cpu.timebase += 62500;
            host_service_alarms(&cpu);
            bool pc_busy = !tls_is_system_idle(&cpu);
            if (pc_busy || cb_work) {
                cpu.downcount = 10000;
                ran = tls_run_blocks(&cpu, 4000);
                frame_blocks += ran;
            } else {
                break; // Idle and no callbacks pending - frame execution complete!
            }
        }
        QueryPerformanceCounter(&t2);

        if (enable_audio) {
            audio_player_update();
        }

        uint32_t dbg_vtx = 0;
        gx_pipeline_get_vertices(&dbg_vtx);
        uint32_t dbg_batches = 0;
        gx_pipeline_get_draw_batches(&dbg_batches);

        // A frame that consumes its whole block budget is normal during boot
        // (decompression, DVD streaming): the blocks do real work and cost
        // 5-40 ms. What is never normal is burning the whole budget in ~1 ms -
        // hundreds of millions of blocks per second can only mean the dispatcher
        // is cycling through addresses that execute no guest logic. That is the
        // wedge that reported a healthy 60 FPS over a black screen, so name the
        // addresses responsible instead of presenting it as a frame rate.
        if (enable_window && qpc_freq.QuadPart > 0 && frame_blocks >= 150000) {
            double cpu_ms = (double)(t2.QuadPart - t1.QuadPart) * 1000.0 / (double)qpc_freq.QuadPart;
            if (cpu_ms > 0.0001 && (double)frame_blocks / cpu_ms > 120000.0) {
                host_report_runaway_slice(frame, frame_blocks, "blocks far too cheap to be guest code");
            }
        }

        tls_debug_frame(&cpu, frame, dbg_vtx, dbg_batches);

#ifdef _WIN32
        if (enable_window) {
            extern uint32_t g_last_vi_framebuffer;
            u32 active_fb = g_last_vi_framebuffer;
            if (!active_fb || !resolve_guest_pointer(&cpu, active_fb)) {
                active_fb = 0x900997E0; // Safe default VI framebuffer
            }
            const u8* fb_bytes = (const u8*)resolve_guest_pointer(&cpu, active_fb);
            if (!update_display_window(fb_bytes)) {
                printf("[Runner] Window closed by user at frame %d.\n", frame);
                break;
            }
        }
        QueryPerformanceCounter(&t4);

        if (enable_window && target_fps > 0) {
            // High-precision frame pacing locked to target_fps
            QueryPerformanceCounter(&t_end);
            double elapsed_ms = (double)(t_end.QuadPart - t_start.QuadPart) * 1000.0 / (double)qpc_freq.QuadPart;
            double frame_budget_ms = 1000.0 / (double)target_fps;
            if (elapsed_ms < frame_budget_ms) {
                DWORD sleep_ms = (DWORD)(frame_budget_ms - elapsed_ms);
                if (sleep_ms > 1) Sleep(sleep_ms - 1);
                do {
                    QueryPerformanceCounter(&t_end);
                    elapsed_ms = (double)(t_end.QuadPart - t_start.QuadPart) * 1000.0 / (double)qpc_freq.QuadPart;
                } while (elapsed_ms < frame_budget_ms);
            }
        } else {
            QueryPerformanceCounter(&t_end);
        }

        if (frame % 30 == 0 && qpc_freq.QuadPart > 0) {
            double ms_vb  = (double)(t1.QuadPart - t_start.QuadPart) * 1000.0 / (double)qpc_freq.QuadPart;
            double ms_cpu = (double)(t2.QuadPart - t1.QuadPart) * 1000.0 / (double)qpc_freq.QuadPart;
            double ms_gfx = (double)(t4.QuadPart - t2.QuadPart) * 1000.0 / (double)qpc_freq.QuadPart;
            double ms_tot = (double)(t_end.QuadPart - t_start.QuadPart) * 1000.0 / (double)qpc_freq.QuadPart;
            printf("[Runner] Frame %d (%d blks) | VBlank: %.2fms, CPU: %.2fms, Gfx/Present: %.2fms | Total: %.2fms (%.1f FPS)\n",
                   frame, frame_blocks, ms_vb, ms_cpu, ms_gfx, ms_tot, ms_tot > 0.0 ? 1000.0 / ms_tot : 0.0);
            fflush(stdout);
        }

        if (!enable_window && (frame % 60 == 0 || frame < 5)) {
            printf("[Runner] Headless Frame %d / %d (%d blks)\n", frame, max_frames, frame_blocks);
            fflush(stdout);
        }
#endif
    }
    printf("\n[Runner] Completed %d of %d requested frames (CPU Exception: 0x%08X)\n",
           frame, max_frames, cpu.exception);

    if (enable_audio) {
        audio_player_shutdown();
    }

    printf("\n[Runner] Execution paused after run_blocks (result = %d)\n", result);
    void* p_tex = resolve_guest_pointer(&cpu, 0x90742780);
    if (p_tex) {
        const u8* b = (const u8*)p_tex;
        printf("\n[Texture 0x90742780 Header (first 64 bytes)]:\n  ");
        for (int i = 0; i < 64; i++) {
            printf("%02X ", b[i]);
            if ((i + 1) % 16 == 0) printf("\n  ");
        }
        printf("\n[Texture 0x907427C0 Data (first 64 bytes)]:\n  ");
        for (int i = 0; i < 64; i++) {
            printf("%02X ", b[64 + i]);
            if ((i + 1) % 16 == 0) printf("\n  ");
        }
        printf("\n");
    } else {
        printf("\n[Texture 0x90742780]: resolve_guest_pointer returned NULL!\n");
    }
    tls_dump_recent_calls();
    if (s_first_thread) {
        u32 bt = s_first_thread;
        printf("\n[Runner] Boot thread 0x%08X at shutdown: state=%u susp=%d prio=%u queue=0x%08X (current=0x%08X, runbits=0x%08X)\n",
               bt, (unsigned)mem_read16(&cpu, bt + 0x2C8), (int)mem_read32(&cpu, bt + 0x2CC),
               mem_read32(&cpu, bt + 0x2D0), mem_read32(&cpu, bt + 0x2DC),
               mem_read32(&cpu, 0x800000E4), mem_read32(&cpu, 0x8087FC60));
        /* stackBase (+0x304) / stackEnd (+0x308) name the memory the OS handed this
         * thread. The heap must never allocate inside that window; the frame-830
         * failure is an allocation that lands there, so print the window. */
        printf("         stackBase=0x%08X stackEnd=0x%08X (SP=0x%08X, in-window=%s)\n",
               mem_read32(&cpu, bt + 0x304), mem_read32(&cpu, bt + 0x308), cpu.gpr[1],
               (cpu.gpr[1] >= mem_read32(&cpu, bt + 0x308) &&
                cpu.gpr[1] <= mem_read32(&cpu, bt + 0x304)) ? "yes" : "no");
    }
    tls_dump_sleep_queues(&cpu);
    tls_dump_watched_object(&cpu);
    tls_dump_wake_queues(&cpu);
    tls_dump_taps();
    tls_dump_sleep_tail();
    printf("         Final PC: 0x805F50B0? Actual PC: 0x%08X, LR: 0x%08X, SP: 0x%08X\n", cpu.pc, cpu.lr, cpu.gpr[1]);
    printf("         Exception: 0x%08X, ProgramExc: 0x%08X\n", cpu.exception, cpu.program_exception);
    printf("         SRR0 (Faulting CIA): 0x%08X, SRR1: 0x%08X\n", cpu.srr0, cpu.srr1);
    printf("         Downcount: %lld\n", (long long)cpu.downcount);

    u32 cur_sp = cpu.gpr[1];
    printf("\n[Runner] PowerPC Call Stack Backtrace (Active SP):\n");
    for (int depth = 0; depth < 10 && cur_sp != 0; depth++) {
        u32 caller_sp = mem_read32(&cpu, cur_sp);
        u32 caller_lr = mem_read32(&cpu, cur_sp + 4);
        printf("         Frame %d: SP=0x%08X, LR=0x%08X\n", depth, cur_sp, caller_lr);
        if (caller_sp <= cur_sp || caller_sp >= 0x81000000) break;
        cur_sp = caller_sp;
    }

    printf("\n[Runner] Stack Code Pointers between 0x80897C00 and 0x80898800:\n");
    for (u32 a = 0x80897C00; a < 0x80898800; a += 4) {
        u32 val = mem_read32(&cpu, a);
        if (val >= 0x80003000 && val < 0x80700000 && (val & 3) == 0) {
            printf("         0x%08X: 0x%08X\n", a, val);
        }
    }

    printf("\n[Runner] Active PowerPC Threads:\n");
    u32 thread_addr = mem_read32(&cpu, 0x800000DC); // __OSActiveThreadQueue.head
    int t_idx = 0;
    while (thread_addr != 0 && t_idx < 16) {
        u16 state = mem_read16(&cpu, thread_addr + 0x2C8);
        u32 prio = mem_read32(&cpu, thread_addr + 0x2D0);
        u32 pc = mem_read32(&cpu, thread_addr + 0x198); // context.srr0
        u32 t_lr = mem_read32(&cpu, thread_addr + 0x84); // context.lr
        u32 sp = mem_read32(&cpu, thread_addr + 0x004); // context.gpr[1]
        u32 wait_queue = mem_read32(&cpu, thread_addr + 0x2DC);
        printf("         Thread %d: Addr=0x%08X State=%u Prio=%u Queue=0x%08X PC=0x%08X LR=0x%08X SP=0x%08X\n",
               t_idx++, thread_addr, state, prio, wait_queue, pc, t_lr, sp);
        u32 tsp = sp;
        for (int d = 0; d < 8 && tsp != 0; d++) {
            u32 nxt = mem_read32(&cpu, tsp);
            u32 frame_lr = mem_read32(&cpu, tsp + 4);
            printf("           T%d Frame %d: SP=0x%08X LR=0x%08X\n", t_idx - 1, d, tsp, frame_lr);
            if (nxt <= tsp || nxt >= 0x81000000) break;
            tsp = nxt;
        }
        thread_addr = mem_read32(&cpu, thread_addr + 0x2FC); // linkActive.next
    }

    u32 cur_thread = mem_read32(&cpu, 0x800000E4);
    u32 run_bits = mem_read32(&cpu, 0x8087FC60);
    printf("         CurrentThread: 0x%08X, RunQueueBits: 0x%08X\n", cur_thread, run_bits);

    printf("\n[Runner] Active Alarms (AlarmQueue at 0x8087FBE0):\n");
    u32 alarm_addr = mem_read32(&cpu, 0x8087FBE0); // AlarmQueue.head
    u32 alarm_tail = mem_read32(&cpu, 0x8087FBE4); // AlarmQueue.tail
    printf("         Queue Head: 0x%08X, Tail: 0x%08X\n", alarm_addr, alarm_tail);
    int a_idx = 0;
    while (alarm_addr != 0 && a_idx < 16) {
        u32 handler = mem_read32(&cpu, alarm_addr + 0x00);
        u32 tag = mem_read32(&cpu, alarm_addr + 0x04);
        u32 fire_hi = mem_read32(&cpu, alarm_addr + 0x08);
        u32 fire_lo = mem_read32(&cpu, alarm_addr + 0x0C);
        u32 prev = mem_read32(&cpu, alarm_addr + 0x10);
        u32 next = mem_read32(&cpu, alarm_addr + 0x14);
        u32 period_hi = mem_read32(&cpu, alarm_addr + 0x18);
        u32 period_lo = mem_read32(&cpu, alarm_addr + 0x1C);
        u32 start_hi = mem_read32(&cpu, alarm_addr + 0x20);
        u32 start_lo = mem_read32(&cpu, alarm_addr + 0x24);
        printf("         Alarm %d: Addr=0x%08X Handler=0x%08X Tag=%u Fire=0x%08X%08X Period=0x%08X%08X Next=0x%08X\n",
               a_idx++, alarm_addr, handler, tag, fire_hi, fire_lo, period_hi, period_lo, next);
        alarm_addr = next;
    }

    printf("\n[Runner] Graphics Frame Queue (0x807C6F60 - 0x807C6FC0):\n");
    for (u32 a = 0x807C6F60; a <= 0x807C6FC0; a += 16) {
        printf("         0x%08X: %08X %08X %08X %08X\n",
               a, mem_read32(&cpu, a), mem_read32(&cpu, a + 4),
               mem_read32(&cpu, a + 8), mem_read32(&cpu, a + 12));
    }

    u8 r13_26599 = mem_read8(&cpu, 0x808852A0 - 26599);
    u8 r13_26598 = mem_read8(&cpu, 0x808852A0 - 26598);
    printf("         Flags at r13: -26599 = %u, -26598 = %u\n", r13_26599, r13_26598);

    printf("\n[Runner] GameLoadTask Object 0x80ADC930 Dump:\n");
    for (int i = 0; i < 64; i += 4) {
        printf("   +0x%02X: 0x%08X\n", i, mem_read32(&cpu, 0x80ADC930 + i));
    }

    printf("\n[Runner] Scene Task Object 0x80B7C950 Dump:\n");
    for (int i = 0; i < 64; i += 4) {
        printf("   +0x%02X: 0x%08X\n", i, mem_read32(&cpu, 0x80B7C950 + i));
    }

    // Framebuffer capture
    u32 fb0_addr = mem_read32(&cpu, 0x807C6F70);
    u32 fb1_addr = mem_read32(&cpu, 0x807C6F80);
    if (fb0_addr) {
        u8* fb = (u8*)resolve_guest_pointer(&cpu, fb0_addr);
        if (fb) {
            FILE* f = fopen("build/recomp/framebuffer_0.ppm", "wb");
            if (f) {
                fprintf(f, "P6\n640 480\n255\n");
                for (int y = 0; y < 480; y++) {
                    for (int x = 0; x < 640; x += 2) {
                        int off = (y * 640 + x) * 2;
                        u8 y0 = fb[off + 0], u = fb[off + 1], y1 = fb[off + 2], v = fb[off + 3];
                        int c0 = (int)y0 - 16, c1 = (int)y1 - 16, d = (int)u - 128, e = (int)v - 128;
                        int r0 = (298 * c0 + 409 * e + 128) >> 8;
                        int g0 = (298 * c0 - 100 * d - 208 * e + 128) >> 8;
                        int b0 = (298 * c0 + 516 * d + 128) >> 8;
                        int r1 = (298 * c1 + 409 * e + 128) >> 8;
                        int g1 = (298 * c1 - 100 * d - 208 * e + 128) >> 8;
                        int b1 = (298 * c1 + 516 * d + 128) >> 8;
                        fputc(r0 < 0 ? 0 : (r0 > 255 ? 255 : r0), f);
                        fputc(g0 < 0 ? 0 : (g0 > 255 ? 255 : g0), f);
                        fputc(b0 < 0 ? 0 : (b0 > 255 ? 255 : b0), f);
                        fputc(r1 < 0 ? 0 : (r1 > 255 ? 255 : r1), f);
                        fputc(g1 < 0 ? 0 : (g1 > 255 ? 255 : g1), f);
                        fputc(b1 < 0 ? 0 : (b1 > 255 ? 255 : b1), f);
                    }
                }
                fclose(f);
                printf("[Runner] Dumped Framebuffer 0 (0x%08X) to build/recomp/framebuffer_0.ppm\n", fb0_addr);
            }
        }
    }
    if (fb1_addr) {
        u8* fb = (u8*)resolve_guest_pointer(&cpu, fb1_addr);
        if (fb) {
            FILE* f = fopen("build/recomp/framebuffer_1.ppm", "wb");
            if (f) {
                fprintf(f, "P6\n640 480\n255\n");
                for (int y = 0; y < 480; y++) {
                    for (int x = 0; x < 640; x += 2) {
                        int off = (y * 640 + x) * 2;
                        u8 y0 = fb[off + 0], u = fb[off + 1], y1 = fb[off + 2], v = fb[off + 3];
                        int c0 = (int)y0 - 16, c1 = (int)y1 - 16, d = (int)u - 128, e = (int)v - 128;
                        int r0 = (298 * c0 + 409 * e + 128) >> 8;
                        int g0 = (298 * c0 - 100 * d - 208 * e + 128) >> 8;
                        int b0 = (298 * c0 + 516 * d + 128) >> 8;
                        int r1 = (298 * c1 + 409 * e + 128) >> 8;
                        int g1 = (298 * c1 - 100 * d - 208 * e + 128) >> 8;
                        int b1 = (298 * c1 + 516 * d + 128) >> 8;
                        fputc(r0 < 0 ? 0 : (r0 > 255 ? 255 : r0), f);
                        fputc(g0 < 0 ? 0 : (g0 > 255 ? 255 : g0), f);
                        fputc(b0 < 0 ? 0 : (b0 > 255 ? 255 : b0), f);
                        fputc(r1 < 0 ? 0 : (r1 > 255 ? 255 : r1), f);
                        fputc(g1 < 0 ? 0 : (g1 > 255 ? 255 : g1), f);
                        fputc(b1 < 0 ? 0 : (b1 > 255 ? 255 : b1), f);
                    }
                }
                fclose(f);
                printf("[Runner] Dumped Framebuffer 1 (0x%08X) to build/recomp/framebuffer_1.ppm\n", fb1_addr);
            }
        }
    }

    tls_debug_dump_full(&cpu, frame, "Runner Execution Completed");

#ifdef _WIN32
    if (enable_window) {
        gfx_backend_shutdown();
    }
    timeEndPeriod(1);
#endif

    cpu_free(&cpu);
    return 0;
}
