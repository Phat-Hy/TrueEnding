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

    // Zero BSS
    if (dol.header.bss_size > 0) {
        void* dest = resolve_guest_pointer(cpu, dol.header.bss_address);
        if (dest) {
            memset(dest, 0, dol.header.bss_size);
            printf("         BSS:     0x%08X - 0x%08X (%u bytes zeroed)\n",
                   dol.header.bss_address, dol.header.bss_address + dol.header.bss_size, dol.header.bss_size);
        }
    }

    cpu->pc = dol.header.entry_point;
    dol_free(&dol);
    return true;
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

    cpu_free(&cpu);
    return 0;
}
