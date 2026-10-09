#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "cpu/cpu.h"
#include "frontend/container/dol.h"
#include "replacements.h"

#define DOLRECOMP_ENABLE_REPLACEMENTS 1
#include "generated.h"

#ifdef _WIN32
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <mmsystem.h>
#include "gfx_backend.h"

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
        case WM_KEYDOWN:
            if (wParam == VK_ESCAPE) {
                s_window_closed = true;
                DestroyWindow(hwnd);
                return 0;
            }
            break;
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

    static uint8_t s_black_fb[640 * 480 * 2] = {0};
    const uint8_t* present_fb = yuyv_fb ? yuyv_fb : s_black_fb;
    gfx_backend_present(present_fb, 640, 480);
    return true;
}
#endif


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

    cpu->pc = dol.header.entry_point;
    dol_free(&dol);
    return true;
}

static void init_wii_low_memory(CPUState* cpu) {
    // Standard Wii low memory configuration (OS hardware/arena pointers)
    mem_write32(cpu, 0x80000028, 0x01800000); // MEM1 size: 24 MB
    mem_write32(cpu, 0x8000002C, 0x00000002); // Console type: Wii
    mem_write32(cpu, 0x80000030, 0x8088A000); // ArenaLo
    mem_write32(cpu, 0x80000034, 0x817F0000); // ArenaHi

    mem_write32(cpu, 0x800000E4, 0);          // __OSCurrentThread = NULL
    mem_write32(cpu, 0x800000E8, 0);          // __OSCurrentContext = NULL

    mem_write32(cpu, 0x800000F0, 0x04000000); // MEM2 size: 64 MB
    mem_write32(cpu, 0x800000F4, 729000000);  // CPU clock: 729 MHz (0x2BF20000)
    mem_write32(cpu, 0x800000F8, 243000000);  // Bus clock: 243 MHz (0x0E7BE200)
    mem_write32(cpu, 0x800000FC, 60750000);   // Time base frequency: 60.75 MHz (0x039EF880)

    // MEM2 Arena boundaries (OSBootInfo & OSBI2)
    mem_write32(cpu, 0x800030E4, 0x90002000); // MEM2 ArenaLo
    mem_write32(cpu, 0x800030E8, 0x93FE0000); // MEM2 ArenaHi

    // OS BI2 table
    mem_write32(cpu, 0x80003110, 0x80003120); // BI2 Debug/flag table pointer
    mem_write32(cpu, 0x80003118, 0x8088A000); // BI2 MEM1 ArenaLo
    mem_write32(cpu, 0x8000311C, 0x817F0000); // BI2 MEM1 ArenaHi
    mem_write32(cpu, 0x80003124, 0x90002000); // BI2 MEM2 ArenaLo
    mem_write32(cpu, 0x80003128, 0x93FE0000); // BI2 MEM2 ArenaHi
    mem_write32(cpu, 0x80003130, 0x93FE0000); // BI2 IPC Buffer Lo
    mem_write32(cpu, 0x80003134, 0x94000000); // BI2 IPC Buffer Hi
    mem_write32(cpu, 0x80003138, 0x04000000); // BI2 Simulated Memory Size (64 MB)

    // Pre-initialize AX audio readiness flag in .sbss (0x8087FFA0)
    mem_write32(cpu, 0x8087FFA0, 1);
}

static void host_wakeup_thread(CPUState* cpu, u32 thread_addr) {
    u16 state = mem_read16(cpu, thread_addr + 0x2C8);
    if (state != 4) return; // not WAITING
    u32 wait_queue = mem_read32(cpu, thread_addr + 0x2DC);
    if (wait_queue != 0) {
        mem_write32(cpu, wait_queue, 0); // head = NULL
        mem_write32(cpu, wait_queue + 4, 0); // tail = NULL
    }
    mem_write32(cpu, thread_addr + 0x2DC, 0); // thread->queue = NULL
    mem_write16(cpu, thread_addr + 0x2C8, 1); // thread->state = OS_THREAD_STATE_READY (1)

    u32 priority = mem_read32(cpu, thread_addr + 0x2D0); // priority
    if (priority > 31) priority = 16;
    u32 rq_entry = 0x807CB970 + priority * 8;
    u32 tail = mem_read32(cpu, rq_entry + 4);
    if (tail == 0) {
        mem_write32(cpu, rq_entry, thread_addr); // head = thread
    } else {
        mem_write32(cpu, tail + 0x2E4, thread_addr); // tail->link.next = thread
    }
    mem_write32(cpu, thread_addr + 0x2E0, tail); // thread->link.prev = tail
    mem_write32(cpu, thread_addr + 0x2E4, 0); // thread->link.next = NULL
    mem_write32(cpu, rq_entry + 4, thread_addr); // tail = thread

    u32 run_bits = mem_read32(cpu, 0x8087FC60);
    run_bits |= (1u << (31 - priority));
    mem_write32(cpu, 0x8087FC60, run_bits); // RunQueueBits
    mem_write32(cpu, 0x8087FC5C, 1); // RunQueueHint = TRUE
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

        cpu->gpr[3] = head;      // OSAlarm* alarm
        cpu->gpr[4] = cpu->gpr[1]; // OSContext* (handlers ignore it; must be readable)
        cpu->lr = 0x805F50B0;    // return into the scheduler idle point
        cpu->pc = handler;
        cpu->downcount = 50000000;
        dolrecomp_run_blocks(cpu, 50000);
        if (cpu->exception != 0) {
            printf("\n[Runner] CPU Exception 0x%08X at PC 0x%08X (alarm handler 0x%08X)\n",
                   cpu->exception, cpu->pc, handler);
            return;
        }
    }
}

static void host_simulate_vblank(CPUState* cpu, int frame_num) {    // 1. Advance graphics frame queue read index to match write index
    u16 write_idx = mem_read16(cpu, 0x807C6FB8);
    mem_write16(cpu, 0x807C6FBA, write_idx);

    // 2. Clear VBlank flags at r13
    mem_write8(cpu, 0x808852A0 - 26599, 0);
    mem_write8(cpu, 0x808852A0 - 26598, 0);

    // 3. Advance simulated timebase (~1/60 sec at 60MHz bus clock = 1,000,000 ticks)
    cpu->timebase += 1000000;

    // 4. Wake up any thread waiting on 0x807C6F60
    u32 waiting_thread = mem_read32(cpu, 0x807C6F60);
    if (waiting_thread != 0) {
        printf("[Runner] VBlank frame %d: waking thread 0x%08X (write_idx=%u)\n",
               frame_num, waiting_thread, write_idx);
        host_wakeup_thread(cpu, waiting_thread);
    }
}

int main(int argc, char** argv) {
    const char* dol_path = "orig/main.dol";
    u32 max_blocks = 100000;
    int max_frames = 10;
    bool frames_specified = false;
    bool enable_window = false;
    int win_width = 1280;
    int win_height = 720;
    int target_fps = 60; // Default 60 FPS (0 = uncapped)
    GfxBackendType backend_type = GFX_BACKEND_AUTO;
    bool vsync = true;

    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "--help") == 0 || strcmp(argv[i], "-h") == 0) {
            printf("Project The Maybe(Not) Last Story (TrueEnding) Native PC Runner\n");
            printf("Usage: %s [options]\n\n", argv[0]);
            printf("Options:\n");
            printf("  --dol <path>      Path to input DOL file (default: orig/main.dol)\n");
            printf("  --blocks <N>      Max blocks per slice (default: 10000)\n");
            printf("  --frames <N>      Simulated frames to run (0=unlimited, default: 10 in headless, unlimited in windowed)\n");
            printf("  --window, -w      Enable interactive display window\n");
            printf("  --width <pixels>  Display window width (default: 1280)\n");
            printf("  --height <pixels> Display window height (default: 720)\n");
            printf("  --fps <N>         Target frame rate cap (30, 60, 120, 0=uncapped, default: 60)\n");
            printf("  --gfx <backend>   Graphics backend: auto, d3d12, d3d11, gdi (default: auto)\n");
            printf("  --vsync <0|1>     Enable (1) or disable (0) vertical sync (default: 1)\n");
            printf("  --novsync         Disable vertical sync\n");
            printf("  --help, -h        Show this help message\n\n");
            printf("Interactive Controls:\n");
            printf("  Alt + Enter       Toggle Fullscreen / Windowed\n");
            printf("  Escape / Close    Exit runner\n");
            return 0;
        } else if (strcmp(argv[i], "--dol") == 0 && i + 1 < argc) {
            dol_path = argv[++i];
        } else if (strcmp(argv[i], "--blocks") == 0 && i + 1 < argc) {
            max_blocks = (u32)atoi(argv[++i]);
        } else if (strcmp(argv[i], "--frames") == 0 && i + 1 < argc) {
            max_frames = atoi(argv[++i]);
            frames_specified = true;
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
        }
    }

    if (enable_window && !frames_specified) {
        max_frames = 0; // Continuous interactive execution
    }

    printf("=================================================================\n");
    printf("  Project The Maybe(Not) Last Story (TrueEnding) Native PC Runner\n");
    printf("  Recompiled Architecture: PowerPC 750CL (Gekko) -> x86_64\n");
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

#ifdef _WIN32
    if (enable_window) {
        init_display_window(win_width, win_height, backend_type, vsync, target_fps);
    }
#endif

    printf("[Runner] Starting execution from entry point 0x%08X (limit: %u blocks/slice, frames: %d, target FPS: %d%s)...\n",
           cpu.pc, max_blocks, max_frames, target_fps, target_fps <= 0 ? " [uncapped]" : "");

    int result = 0;
    for (int frame = 0; max_frames == 0 || frame < max_frames; frame++) {
#ifdef _WIN32
        LARGE_INTEGER qpc_freq, t_start, t_end;
        if (enable_window) {
            QueryPerformanceFrequency(&qpc_freq);
            QueryPerformanceCounter(&t_start);
        }
#endif
        cpu.downcount = 50000000;
        result = dolrecomp_run_blocks(&cpu, max_blocks);
        if (cpu.exception != 0) {
            printf("\n[Runner] CPU Exception 0x%08X at PC 0x%08X\n", cpu.exception, cpu.pc);
            break;
        }

        // If the CPU was in the middle of active execution, let it run until idle
        int drain_iters = 0;
        while (!tls_is_idle_address(cpu.pc) && drain_iters < 10) {
            cpu.downcount = 50000000;
            result = dolrecomp_run_blocks(&cpu, 1000000);
            if (cpu.exception != 0) break;
            drain_iters++;
        }

        // Emulated OSAlarm expiry (no decrementer interrupt in the runner)
        host_service_alarms(&cpu);

        // Advance graphics frame queue and simulated timebase each frame
        host_simulate_vblank(&cpu, frame);

        // Poll host input so WPAD/KPAD stubs can see live keyboard state.
        tls_service_controller_input(&cpu);

        // Drain deferred DVD completion callbacks (retail runs these on the DVD
        // thread; the game's callers branch on DVDReadAsyncPrio's r3 before it).
        for (int serviced = 0; serviced < 32 && tls_dvd_service_callback(&cpu); serviced++) {
            cpu.downcount = 50000000;
            result = dolrecomp_run_blocks(&cpu, 100000);
            if (cpu.exception != 0) {
                printf("\n[Runner] CPU Exception 0x%08X at PC 0x%08X (DVD callback)\n", cpu.exception, cpu.pc);
                break;
            }
        }

#ifdef _WIN32
        if (enable_window) {
            u32 fb0 = mem_read32(&cpu, 0x807C6F70);
            u32 fb1 = mem_read32(&cpu, 0x807C6F80);
            u32 active_fb = (frame % 2 == 0) ? (fb0 ? fb0 : fb1) : (fb1 ? fb1 : fb0);
            const u8* fb_bytes = active_fb ? (const u8*)resolve_guest_pointer(&cpu, active_fb) : NULL;
            if (!update_display_window(fb_bytes)) {
                printf("[Runner] Window closed by user at frame %d.\n", frame);
                break;
            }

            // Frame pacing based on target_fps (0 = uncapped)
            if (target_fps > 0) {
                QueryPerformanceCounter(&t_end);
                double elapsed_ms = (double)(t_end.QuadPart - t_start.QuadPart) * 1000.0 / (double)qpc_freq.QuadPart;
                double frame_budget_ms = 1000.0 / (double)target_fps;
                if (elapsed_ms < frame_budget_ms) {
                    Sleep((DWORD)(frame_budget_ms - elapsed_ms));
                }
            }
        }
#endif
    }

    printf("\n[Runner] Execution paused after run_blocks (result = %d)\n", result);
    tls_dump_recent_calls();
    printf("         Final PC: 0x805F50B0? Actual PC: 0x%08X, LR: 0x%08X, SP: 0x%08X\n", cpu.pc, cpu.lr, cpu.gpr[1]);
    printf("         Exception: 0x%08X, ProgramExc: 0x%08X\n", cpu.exception, cpu.program_exception);
    printf("         SRR0 (Faulting CIA): 0x%08X, SRR1: 0x%08X\n", cpu.srr0, cpu.srr1);
    printf("         Downcount: %lld\n", (long long)cpu.downcount);

    u32 cur_sp = cpu.gpr[1];
    printf("\n[Runner] PowerPC Call Stack Backtrace:\n");
    for (int depth = 0; depth < 10 && cur_sp != 0; depth++) {
        u32 caller_sp = mem_read32(&cpu, cur_sp);
        u32 caller_lr = mem_read32(&cpu, cur_sp + 4);
        printf("         Frame %d: SP=0x%08X, LR=0x%08X\n", depth, cur_sp, caller_lr);
        if (caller_sp <= cur_sp || caller_sp >= 0x81000000) break;
        cur_sp = caller_sp;
    }

    printf("\n[Runner] Active PowerPC Threads:\n");
    u32 thread_addr = mem_read32(&cpu, 0x800000DC); // __OSActiveThreadQueue.head
    int t_idx = 0;
    while (thread_addr != 0 && t_idx < 16) {
        u16 state = mem_read16(&cpu, thread_addr + 0x2C8);
        u32 prio = mem_read32(&cpu, thread_addr + 0x2D0);
        u32 pc = mem_read32(&cpu, thread_addr + 0x198); // context.srr0
        u32 lr = mem_read32(&cpu, thread_addr + 0x190); // context.lr
        u32 sp = mem_read32(&cpu, thread_addr + 0x004); // context.gpr[1]
        u32 wait_queue = mem_read32(&cpu, thread_addr + 0x2DC);
        printf("         Thread %d: Addr=0x%08X State=%u Prio=%u Queue=0x%08X PC=0x%08X LR=0x%08X SP=0x%08X\n",
               t_idx++, thread_addr, state, prio, wait_queue, pc, lr, sp);
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

    u32 p_f510 = mem_read32(&cpu, 0x8087F510);
    u32 p_f518 = mem_read32(&cpu, 0x8087F518);
    u32 p_ee94 = mem_read32(&cpu, 0x8087EE94);
    printf("\n[Runner] Stall Diagnostics (calls: c1c8=%u, bbf0=%u):\n", g_count_c1c8, g_count_bbf0);
    printf("         lbl_8087F510 = 0x%08X\n", p_f510);
    if (p_f510) {
        u32 p_arr = mem_read32(&cpu, p_f510 + 0x10);
        printf("           p_f510->0x10 = 0x%08X\n", p_arr);
        if (p_arr) {
            u32 frame0_sp = 0x80898DC8;
            printf("           Frame 0 (0x%08X): [0]=0x%08X [4]=0x%08X [8]=0x%08X [12]=0x%08X [16]=0x%08X [20]=0x%08X [24]=0x%08X [28]=0x%08X [32]=0x%08X [36]=0x%08X\n",
                   frame0_sp,
                   mem_read32(&cpu, frame0_sp), mem_read32(&cpu, frame0_sp + 4),
                   mem_read32(&cpu, frame0_sp + 8), mem_read32(&cpu, frame0_sp + 12),
                   mem_read32(&cpu, frame0_sp + 16), mem_read32(&cpu, frame0_sp + 20),
                   mem_read32(&cpu, frame0_sp + 24), mem_read32(&cpu, frame0_sp + 28),
                   mem_read32(&cpu, frame0_sp + 32), mem_read32(&cpu, frame0_sp + 36));
            u32 buf0 = mem_read32(&cpu, p_arr + 4);
            printf("           item[0] buffer 0x%08X: %08X %08X %08X %08X\n", buf0,
                   mem_read32(&cpu, buf0), mem_read32(&cpu, buf0 + 4),
                   mem_read32(&cpu, buf0 + 8), mem_read32(&cpu, buf0 + 12));
            printf("           item[0] words: [0]=0x%08X [4]=0x%08X [8]=0x%08X [12]=0x%08X [16]=0x%08X\n",
                   mem_read32(&cpu, p_arr), mem_read32(&cpu, p_arr + 4), mem_read32(&cpu, p_arr + 8),
                   mem_read32(&cpu, p_arr + 12), mem_read32(&cpu, p_arr + 16));
            printf("           item[1] status at 0x%08X = %u, count(80) = %u, sub[0](84) = 0x%08X\n",
                   p_arr + 0x400b8, mem_read32(&cpu, p_arr + 0x400b8), mem_read32(&cpu, p_arr + 0x400b8 + 80), mem_read32(&cpu, p_arr + 0x400b8 + 84));
            u32 sub0 = mem_read32(&cpu, p_arr + 84);
            if (sub0) {
                u32 req0 = mem_read32(&cpu, sub0);
                printf("             item[0]->sub[0]: req=0x%08X [4]=0x%08X [8]=0x%08X [28]=0x%08X [32]=0x%08X\n",
                       req0, mem_read32(&cpu, sub0 + 4), mem_read32(&cpu, sub0 + 8),
                       mem_read32(&cpu, sub0 + 28), mem_read32(&cpu, sub0 + 32));
                if (req0) {
                    char name0[64];
                    for (int c = 0; c < 63; c++) name0[c] = (char)mem_read8(&cpu, req0 + 6 + c);
                    name0[63] = 0;
                    printf("               item[0] req string: \"%s\", status: %u\n", name0, mem_read8(&cpu, req0 + 4));
                }
            }
            u32 fi0 = p_arr + 20;
            u32 fi1 = p_arr + 0x400b8 + 20;
            printf("             item[0] DVDFileInfo at 0x%08X: id(0x30)=%u, len(0x34)=%u, cb(0x38)=0x%08X\n",
                   fi0, mem_read32(&cpu, fi0 + 0x30), mem_read32(&cpu, fi0 + 0x34), mem_read32(&cpu, fi0 + 0x38));
            printf("             item[1] DVDFileInfo at 0x%08X: id(0x30)=%u, len(0x34)=%u, cb(0x38)=0x%08X\n",
                   fi1, mem_read32(&cpu, fi1 + 0x30), mem_read32(&cpu, fi1 + 0x34), mem_read32(&cpu, fi1 + 0x38));
        }
    }
    printf("         lbl_8087F518 = 0x%08X\n", p_f518);
    if (p_f518) {
        u32 vt = mem_read32(&cpu, p_f518);
        printf("           p_f518 vtable = 0x%08X\n", vt);
        if (vt) {
            for (int k = 0; k < 8; k++) {
                printf("             vt[%d] = 0x%08X\n", k, mem_read32(&cpu, vt + k * 4));
            }
        }
    }
    printf("         lbl_8087EE94 = 0x%08X\n", p_ee94);
    if (p_ee94) {
        u32 ee94_cnt = mem_read32(&cpu, p_ee94);
        u32 ee94_arr = mem_read32(&cpu, p_ee94 + 8);
        printf("           ee94 count=%u, arr=0x%08X\n", ee94_cnt, ee94_arr);
        for (u32 k = 0; k < ee94_cnt && k < 8; k++) {
            u32 slot = ee94_arr + k * 20;
            printf("             ee94[%u]: [0]=0x%08X [4]=0x%08X [8]=0x%08X [12]=0x%08X [16]=0x%08X\n",
                   k, mem_read32(&cpu, slot), mem_read32(&cpu, slot + 4),
                   mem_read32(&cpu, slot + 8), mem_read32(&cpu, slot + 12), mem_read32(&cpu, slot + 16));
        }
    }

    printf("\n[Runner] Frame 3 & 4 Stack Dump (0x80898E28 - 0x80898EC0):\n");
    for (u32 addr = 0x80898E28; addr < 0x80898EC0; addr += 16) {
        printf("         0x%08X: %08X %08X %08X %08X\n", addr,
               mem_read32(&cpu, addr), mem_read32(&cpu, addr + 4),
               mem_read32(&cpu, addr + 8), mem_read32(&cpu, addr + 12));
    }

    u32 req = mem_read32(&cpu, 0x80898EA4);
    printf("\n[Runner] Resource Request Object at 0x%08X:\n", req);
    if (req) {
        for (u32 off = 0; off < 64; off += 16) {
            printf("         +0x%02X: %08X %08X %08X %08X\n", off,
                   mem_read32(&cpu, req + off), mem_read32(&cpu, req + off + 4),
                   mem_read32(&cpu, req + off + 8), mem_read32(&cpu, req + off + 12));
        }
        u8 req_status = mem_read8(&cpu, req + 4);
        printf("         req status byte (+4) = %u\n", req_status);
    }

#ifdef _WIN32
    if (enable_window) {
        gfx_backend_shutdown();
    }
#endif

    cpu_free(&cpu);
    return 0;
}
