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
                u32 s_addr = (gpr_idx <= 10) ? ctx->gpr[gpr_idx++] : 0;
                const char* s = (const char*)resolve_guest_pointer(ctx, s_addr);
                fputs(s ? s : "(null)", stdout);
            } else if (*p == 'd' || *p == 'i') {
                s32 v = (gpr_idx <= 10) ? (s32)ctx->gpr[gpr_idx++] : 0;
                printf("%d", v);
            } else if (*p == 'u') {
                u32 v = (gpr_idx <= 10) ? ctx->gpr[gpr_idx++] : 0;
                printf("%u", v);
            } else if (*p == 'x' || *p == 'X') {
                u32 v = (gpr_idx <= 10) ? ctx->gpr[gpr_idx++] : 0;
                printf((*p == 'x') ? "%x" : "%X", v);
            } else if (*p == 'p') {
                u32 v = (gpr_idx <= 10) ? ctx->gpr[gpr_idx++] : 0;
                printf("0x%08X", v);
            } else if (*p == 'c') {
                u32 v = (gpr_idx <= 10) ? ctx->gpr[gpr_idx++] : 0;
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

int dolrecomp_dispatch_replacement(CPUState* ctx, u32 address) {
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
            u64 tb = ctx->timebase + (u64)(s_simulated_ticks += 1000);
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

        // WPAD / Bluetooth status: return 1 (ready / initialized)
        case 0x8062CA30:
        case 0x80632414: {
            u8* state = (u8*)resolve_guest_pointer(ctx, 0x80820666);
            if (state) *state = 5;
            ctx->gpr[3] = 1;
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

        default:
            return 0; // Fall through to recompiled PowerPC code
    }
}
