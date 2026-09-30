#include "replacements.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

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
    if (ea == 0xCD006024) {
        return 0x00000021; // Hollywood revision 2.1
    }
    // Memory controller / bus clock
    if (ea == 0xCC004000) {
        return 0x00000001;
    }
    // DSP control status
    if (ea == 0xCC00500A) {
        return 0;
    }
    // Video Interface
    if (ea == 0xCC00206C) {
        return 0;
    }
    // IPC status (Starlet acknowledgment ready)
    if (ea == 0xCD006434) {
        return 0x00000002;
    }
    return s_mmio_regs[mmio_hash(ea)];
}

void mmio_external_write(CPUState* cpu, u32 ea, u64 value, u8 size) {
    (void)cpu;
    (void)size;
    s_mmio_regs[mmio_hash(ea)] = (u32)value;
}

static u32 s_simulated_ticks = 0;

int dolrecomp_dispatch_replacement(CPUState* ctx, u32 address) {
    switch (address) {
        // OSReport: printf diagnostic messages to host console
        case 0x805EE0D0: {
            u32 fmt_addr = ctx->gpr[3];
            const char* fmt = (const char*)resolve_guest_pointer(ctx, fmt_addr);
            if (fmt) {
                // Format string may have % specifiers; for basic OSReport print fmt directly
                // (a full vsnprintf parser can parse guest registers in r4-r10)
                printf("[TLS OSReport] %s", fmt);
                fflush(stdout);
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
            u64 tb = ctx->timebase + (u64)(s_simulated_ticks += 100);
            ctx->gpr[3] = (u32)(tb >> 32);
            ctx->gpr[4] = (u32)(tb & 0xFFFFFFFF);
            ctx->pc = ctx->lr;
            return 1;
        }

        // OSGetTick: 32-bit tick counter in r3
        case 0x805F5FB0: {
            ctx->gpr[3] = (s_simulated_ticks += 10);
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

        default:
            return 0; // Fall through to recompiled PowerPC code
    }
}
