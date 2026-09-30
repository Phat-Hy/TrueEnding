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

int main(int argc, char** argv) {
    const char* dol_path = "orig/main.dol";
    u32 max_blocks = 10000;

    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "--dol") == 0 && i + 1 < argc) {
            dol_path = argv[++i];
        } else if (strcmp(argv[i], "--blocks") == 0 && i + 1 < argc) {
            max_blocks = (u32)atoi(argv[++i]);
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

    printf("[Runner] Starting execution from entry point 0x%08X (limit: %u blocks)...\n",
           cpu.pc, max_blocks);

    int result = dolrecomp_run_blocks(&cpu, max_blocks);

    printf("\n[Runner] Execution paused after run_blocks (result = %d)\n", result);
    printf("         Final PC: 0x%08X, LR: 0x%08X, SP: 0x%08X\n", cpu.pc, cpu.lr, cpu.gpr[1]);
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

    cpu_free(&cpu);
    return 0;
}
