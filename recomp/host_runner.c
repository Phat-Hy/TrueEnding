#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "cpu/cpu.h"
#include "frontend/container/dol.h"
#include "replacements.h"

#define DOLRECOMP_ENABLE_REPLACEMENTS 1
#include "generated.h"


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

// The runner does not model the decrementer interrupt, so OSAlarm expiry is
// emulated here: every frame, alarms whose fire time has passed are unlinked
// from AlarmQueue (0x8087FBE0) and their handler(alarm, context) is run.
static void host_service_alarms(CPUState* cpu) {
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

        cpu->gpr[3] = head;      // OSAlarm* alarm
        cpu->gpr[4] = cpu->gpr[1]; // OSContext* (handlers ignore it; must be readable)
        cpu->lr = 0x805F50B0;    // return into the scheduler idle point
        cpu->pc = handler;
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
    u32 max_blocks = 10000;
    int max_frames = 10;

    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "--dol") == 0 && i + 1 < argc) {
            dol_path = argv[++i];
        } else if (strcmp(argv[i], "--blocks") == 0 && i + 1 < argc) {
            max_blocks = (u32)atoi(argv[++i]);
        } else if (strcmp(argv[i], "--frames") == 0 && i + 1 < argc) {
            max_frames = atoi(argv[++i]);
        }
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

    printf("[Runner] Starting execution from entry point 0x%08X (limit: %u blocks/slice, frames: %d)...\n",
           cpu.pc, max_blocks, max_frames);

    int result = 0;
    for (int frame = 0; frame < max_frames; frame++) {
        result = dolrecomp_run_blocks(&cpu, max_blocks);
        if (cpu.exception != 0) {
            printf("\n[Runner] CPU Exception 0x%08X at PC 0x%08X\n", cpu.exception, cpu.pc);
            break;
        }

        // Emulated OSAlarm expiry (no decrementer interrupt in the runner)
        host_service_alarms(&cpu);

        // If CPU is idle in scheduler, fire a simulated VBlank
        if (cpu.pc == 0x805F50B0 || mem_read32(&cpu, 0x8087FC60) == 0) {
            host_simulate_vblank(&cpu, frame);
        }

        // Drain deferred DVD completion callbacks (retail runs these on the DVD
        // thread; the game's callers branch on DVDReadAsyncPrio's r3 before it).
        for (int serviced = 0; serviced < 8 && tls_dvd_service_callback(&cpu); serviced++) {
            result = dolrecomp_run_blocks(&cpu, 50000);
            if (cpu.exception != 0) {
                printf("\n[Runner] CPU Exception 0x%08X at PC 0x%08X (DVD callback)\n", cpu.exception, cpu.pc);
                break;
            }
        }
    }

    printf("\n[Runner] Execution paused after run_blocks (result = %d)\n", result);
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

    cpu_free(&cpu);
    return 0;
}
