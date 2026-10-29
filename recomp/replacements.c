#include "replacements.h"
#include "gx_pipeline.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

static CPUState* s_current_active_cpu = NULL;
u32 g_tls_rbtree_1354_cnt = 0;
u32 g_tls_rbtree_195c_cnt = 0;
u32 g_tls_rbtree_19e0_cnt = 0;
u32 g_tls_rbtree_b04_cnt = 0;
u32 g_tls_rbtree_b88_cnt = 0;

void host_set_active_cpu(CPUState* cpu) {
    s_current_active_cpu = cpu;
}

/* TLS_TEXPROBE_FROM=<frame>: suppress the texture probes before this frame, so the report
 * cap is spent on the window of interest instead of on the first 60 passes of the boot. */
static int tls_texprobe_from(void) {
    static int v = -2;
    if (v == -2) {
        const char* e = getenv("TLS_TEXPROBE_FROM");
        v = e ? atoi(e) : 0;
    }
    return v;
}

int tls_replacements_anchor(void) { return 0; }
const void* host_resolve_gx_guest_addr(uint32_t addr) {
    if (!s_current_active_cpu) return NULL;
    void* p = resolve_guest_pointer(s_current_active_cpu, addr);
    if (!p) {
        if (addr < 0x04000000) {
            // Physical MEM1 address (0x00000000 - 0x03FFFFFF)
            p = resolve_guest_pointer(s_current_active_cpu, 0x80000000 | addr);
        } else if (addr >= 0x10000000 && addr < 0x18000000) {
            // Physical MEM2 address (0x10000000 - 0x13FFFFFF)
            p = resolve_guest_pointer(s_current_active_cpu, 0x90000000 | (addr & 0x03FFFFFF));
        } else if ((addr & 0xFE000000) == 0x82000000) {
            p = resolve_guest_pointer(s_current_active_cpu, 0x90000000 | (addr & 0x03FFFFFF));
        }
    }
    return p;
}
#ifdef _WIN32
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <mmsystem.h>
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
    if (addr >= 0xE0000000 && addr < 0xE0010000) {
        return g_locked_cache + (addr - 0xE0000000);
    }
    return NULL;
}

/* ---------------------------------------------------------------------------------------------
 * THE TUTORIAL PAGE'S CONTENT LAYOUT (5c.46 AP-L).
 *
 * Measured chain:
 *   - fn_803D022C (the camp/tutorial UI manager's setup, called from 0x803660C8 with
 *     r3 = *(0x8087F490)) creates a LayoutTask from '/data/d2anime/ui_hp_heal.d2a' at frame 1656,
 *     stores it at manager+0x3EC, activates it (fn_800D246C) and immediately clears bits 1 and 0
 *     of [layout+0xFC] - i.e. it hides it (0x74xxxxxx -> 0x34xxxxxx).
 *   - Its init virtual runs at 1696 (task-execute, lr=0x800D28C0) and builds its container
 *     (fn_801FFA04) - 4 panes, `cnt48=4`; fn_803D164C then hides it again at 2020.
 *   - Nothing ever sets bit 30 (0x40000000) of [node+0xFC] again. fn_801F4514 gates the whole
 *     subtree on that bit, so the node's four panes are dropped on every later frame even though
 *     the draw traversal still visits it (it has a [PageTree] line at the page frame).
 *   - TLS_FORCE_LAYOUT_BIT=1 sets exactly that bit and the reference page appears: illustration,
 *     "Movement and Camera", both body lines, i.e. the page's whole content is that subtree
 *     (docs/evidence/host_page_full_5c46ad.png).
 *   - The manager's +0x3EC is still read every second frame during the page by fn_803D2A6C
 *     ([HudUpd] f=3501 mgr=0x81161760 node0x3ec=0x81359B80 fc=0x2C000000 cnt=4), so the node is
 *     live and reachable - the page start just never shows it.
 *
 * So the page's own verbs get the show/hide the reference must be doing:
 *   - fn_805BB658 (the page start) builds a layout per page-table row; when it builds MODE 1 the
 *     page's content becomes due, and the content node's draw bit is set there;
 *   - fn_805BA16C's per-mode hide pass (`.L_805BA2D4`, which deactivates each mode layout and
 *     clears [layout+0xFC] bit 3) is the same page's "hide everything" step, so the content bit is
 *     cleared there again.
 * Both hooks touch ONE bit of ONE layout, they look the layout up through the manager the game
 * itself stores it in, and they verify the object is still a LayoutTask (vptr 0x80782C08) before
 * writing, because 0x80000000-range layout addresses are recycled.
 * ------------------------------------------------------------------------------------------- */
#define TLS_LAYOUT_VPTR 0x80782C08u
#define TLS_UI_MANAGER_GLOBAL 0x8087F490u
#define TLS_UI_MANAGER_CONTENT 0x3ECu
#define TLS_LAYOUT_FC_DRAW 0x40000000u

static u32 tls_page_content_node(CPUState* ctx) {
    u32 mgr = mem_read32(ctx, TLS_UI_MANAGER_GLOBAL);
    if (!mgr) return 0;
    u32 node = mem_read32(ctx, mgr + TLS_UI_MANAGER_CONTENT);
    if (node < 0x80000000u || node >= 0x81800000u || (node & 3u)) return 0;
    if (!resolve_guest_pointer(ctx, node)) return 0;
    if (mem_read32(ctx, node) != TLS_LAYOUT_VPTR) return 0;   /* recycled address: not a layout */
    if (!mem_read32(ctx, node + 0x48)) return 0;              /* container not built yet */
    return node;
}

/* Returns 1 when the bit actually changed. */
static int tls_page_content_set(CPUState* ctx, int show, const char* why) {
    u32 node = tls_page_content_node(ctx);
    if (!node) return 0;
    u32 fc = mem_read32(ctx, node + 0xFC);
    int on = (fc & TLS_LAYOUT_FC_DRAW) != 0;
    if (on == (show ? 1 : 0)) return 0;
    mem_write32(ctx, node + 0xFC, show ? (fc | TLS_LAYOUT_FC_DRAW)
                                       : (fc & ~TLS_LAYOUT_FC_DRAW));
    {
        static int s_rep = 0;
        extern int g_runner_current_frame;
        if (s_rep < 24) {
            s_rep++;
            printf("[PageContentShow] f=%d %s node=0x%08X 0x%08X -> 0x%08X (%s)\n",
                   g_runner_current_frame, show ? "SHOW" : "HIDE", node, fc,
                   show ? (fc | TLS_LAYOUT_FC_DRAW) : (fc & ~TLS_LAYOUT_FC_DRAW), why);
            fflush(stdout);
        }
    }
    return 1;
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
static u32 s_cp_read_ptr = 0;
static u32 s_cp_bp_addr = 0;
static u8  s_cp_bp_reached = 0;
static u16 s_pe_draw_token = 0;

static inline u32 mmio_hash(u32 ea) {
    return (ea >> 2) & 0x1FFF;
}

u64 mmio_external_read(CPUState* cpu, u32 ea, u8 size) {
    (void)cpu;
    // Physical memory below 0x04000000 that fell through resolve_addr
    if (ea < 0x04000000) {
        if (cpu && cpu->ram && ea + size <= cpu->ram_size) {
            u64 val = 0;
            for (u8 i = 0; i < size; i++) {
                val = (val << 8) | cpu->ram[ea + i];
            }
            return val;
        }
        return 0;
    }
    // Locked L1 Data Cache Scratchpad (0xE0000000 - 0xE000FFFF)
    if (ea >= 0xE0000000 && ea < 0xE0010000) {
        u32 offset = ea - 0xE0000000;
        if (offset + size <= sizeof(g_locked_cache)) {
            u64 val = 0;
            for (u8 i = 0; i < size; i++) {
                val = (val << 8) | g_locked_cache[offset + i];
            }
            return val;
        }
        return 0;
    }
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
        // If called by __OSStopAudioSystem (0x805ED070 - 0x805ED140), return 0 to exit loop!
        if (cpu && cpu->pc >= 0x805ED070 && cpu->pc <= 0x805ED140) {
            return 0;
        }
        return 0x8000; // Bit 15 set: DSP has mail / ready for DSP task runner
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

    // CP (Command Processor / GP FIFO) registers (0xCC000000 / 0xCD000000)
    if ((ea & 0xFFFFFE00) == 0xCC000000 || (ea & 0xFFFFFE00) == 0xCD000000) {
        u32 reg = ea & 0x7F;
        // 0x00: CP Status Register (SR)
        // Bit 1: Read idle (1), Bit 2: Command idle (1), Bit 3: Breakpoint reached
        if (reg == 0x00) {
            u16 sr = 0x0006;
            if (s_cp_bp_reached) sr |= (1 << 3);
            return sr;
        }
        // 0x28 / 0x2A: Read Pointer (CB_RP)
        if (reg == 0x28) return (s_cp_read_ptr >> 16) & 0xFFFF;
        if (reg == 0x2A) return s_cp_read_ptr & 0xFFFF;
        // 0x30 / 0x32: FIFO distance / count (0 = caught up / idle)
        if (reg == 0x30 || reg == 0x32) return 0;
    }

    // PE (Pixel Engine) registers: 0xCC001000 / 0xCD001000
    if ((ea & 0xFFFFFE00) == 0xCC001000 || (ea & 0xFFFFFE00) == 0xCD001000) {
        u32 reg = ea & 0x7F;
        // 0x04: PE Token (GXReadDrawSync)
        if (reg == 0x04) {
            return s_pe_draw_token;
        }
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

    // DSP (Digital Signal Processor) registers (0xCC005000 / 0xCD005000)
    if ((ea & 0xFFFFFE00) == 0xCD005000 || (ea & 0xFFFFFE00) == 0xCC005000) {
        u32 reg = ea & 0xFF;
        // 0x04: DSP Mailbox High, 0x06: DSP Mailbox Low
        // __OSStopAudioSystem loops while ((r3<<16 | r0) & ~1) != 0, so returning 0 exits immediately!
        if (reg == 0x04 || reg == 0x06) {
            return 0;
        }
        // DSP Control/Status register (0x0A): bit 0 (DSPINIT) clears immediately when initialized
        if (reg == 0x0A) {
            u16 val = (u16)s_mmio_regs[mmio_hash(ea)];
            return val & ~0x0601u; // clear DSPINIT (bit 0), DSPHALT, etc.
        }
    }

    return s_mmio_regs[mmio_hash(ea)];
}

void mmio_external_write(CPUState* cpu, u32 ea, u64 value, u8 size) {
    s_current_active_cpu = cpu;

    // Physical memory below 0x04000000 that fell through resolve_addr
    if (ea < 0x04000000) {
        if (cpu && cpu->ram && ea + size <= cpu->ram_size) {
            for (u8 i = 0; i < size; i++) {
                cpu->ram[ea + i] = (u8)(value >> ((size - 1 - i) * 8));
            }
        }
        return;
    }

    // Locked L1 Data Cache Scratchpad (0xE0000000 - 0xE000FFFF)
    if (ea >= 0xE0000000 && ea < 0xE0010000) {
        u32 offset = ea - 0xE0000000;
        if (offset + size <= sizeof(g_locked_cache)) {
            for (u8 i = 0; i < size; i++) {
                g_locked_cache[offset + i] = (u8)(value >> ((size - 1 - i) * 8));
            }
        }
        return;
    }

    // Graphics Command FIFO / WGPIPE (0xCC008000 - 0xCC00803F / 0xCD008000 - 0xCD00803F)
    if ((ea & ~0x3Fu) == 0xCC008000u || (ea & ~0x3Fu) == 0xCD008000u) {
        gx_pipeline_set_debug_pc(cpu->pc, cpu->lr);
        if (size == 1 && ((value & 0xF8) == 0x80 || (value & 0xF8) == 0x90 || (value & 0xF8) == 0x98 || (value & 0xF8) == 0xA0)) {
            static uint32_t s_gx_begin_count = 0;
            if (++s_gx_begin_count <= 15) {
                printf("[GXBegin #%u] cmd=0x%02X PC=0x%08X LR=0x%08X\n", s_gx_begin_count, (unsigned)value, cpu->pc, cpu->lr);
                fflush(stdout);
            }
        }
        if (size == 1) {
            gx_pipeline_feed_byte((uint8_t)value);
        } else if (size == 2) {
            uint8_t b[2];
            b[0] = (uint8_t)(value >> 8);
            b[1] = (uint8_t)(value & 0xFF);
            gx_pipeline_feed_bytes(b, 2);
        } else if (size == 4) {
            uint8_t b[4];
            b[0] = (uint8_t)(value >> 24);
            b[1] = (uint8_t)(value >> 16);
            b[2] = (uint8_t)(value >> 8);
            b[3] = (uint8_t)(value & 0xFF);
            gx_pipeline_feed_bytes(b, 4);
        } else if (size == 8) {
            uint8_t b[8];
            for (int i = 0; i < 8; i++) {
                b[i] = (uint8_t)(value >> (56 - i * 8));
            }
            gx_pipeline_feed_bytes(b, 8);
        }
        return;
    }

    // PI FIFO Write Pointer: align to 32-byte units (wiikit commit ae77320)
    if (ea == 0xCC00000C || ea == 0xCD00000C) {
        value &= ~0x1FULL;
        s_cp_read_ptr = (u32)value; // Read pointer catches up with write pointer
    }

    // CP Breakpoint and Control registers
    if ((ea & 0xFFFFFE00) == 0xCC000000 || (ea & 0xFFFFFE00) == 0xCD000000) {
        u32 reg = ea & 0x7F;
        if (reg == 0x3C) {
            s_cp_bp_addr = (s_cp_bp_addr & 0x0000FFFF) | ((u32)value << 16);
            s_cp_bp_reached = 1;
        } else if (reg == 0x3E) {
            s_cp_bp_addr = (s_cp_bp_addr & 0xFFFF0000) | ((u32)value & 0xFFFF);
            s_cp_bp_reached = 1;
        } else if (reg == 0x02) {
            if (!(value & 0x02)) {
                s_cp_bp_reached = 0; // Clear BP
            }
        }
    }

    // PE Token register (0xCC001004 / 0xCD001004)
    if (ea == 0xCC001004 || ea == 0xCD001004) {
        s_pe_draw_token = (u16)value;
    }

    // PE ZMODE and CMODE0 registers (0xCC001000 / 0xCD001000 and 0xCC001002 / 0xCD001002)
    if (ea == 0xCC001000 || ea == 0xCD001000) {
        if (size == 4) {
            uint16_t zmode = (uint16_t)(value >> 16);
            uint16_t cmode0 = (uint16_t)(value & 0xFFFF);
            bool z_test = (zmode & 1) != 0;
            uint8_t z_func = (uint8_t)((zmode >> 1) & 7);
            bool z_write = ((zmode >> 4) & 1) != 0;
            gx_pipeline_set_z_mode(z_test, z_func, z_write);

            bool bl_enable = (cmode0 & 1) != 0;
            uint8_t bl_dst = (uint8_t)((cmode0 >> 5) & 7);
            uint8_t bl_src = (uint8_t)((cmode0 >> 8) & 7);
            bool bl_sub = ((cmode0 >> 11) & 1) != 0;
            gx_pipeline_set_blend_mode(bl_enable, bl_src, bl_dst, bl_sub);
        } else if (size == 2) {
            uint16_t zmode = (uint16_t)value;
            bool z_test = (zmode & 1) != 0;
            uint8_t z_func = (uint8_t)((zmode >> 1) & 7);
            bool z_write = ((zmode >> 4) & 1) != 0;
            gx_pipeline_set_z_mode(z_test, z_func, z_write);
        }
    } else if (ea == 0xCC001002 || ea == 0xCD001002) {
        uint16_t cmode0 = (uint16_t)value;
        bool bl_enable = (cmode0 & 1) != 0;
        uint8_t bl_dst = (uint8_t)((cmode0 >> 5) & 7);
        uint8_t bl_src = (uint8_t)((cmode0 >> 8) & 7);
        bool bl_sub = ((cmode0 >> 11) & 1) != 0;
        gx_pipeline_set_blend_mode(bl_enable, bl_src, bl_dst, bl_sub);
    }

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

static u64 guest_time_now(CPUState* ctx) {
    return ctx->timebase;
}

/* --- Enhanced Controller Input Subsystem (XInput + Win32 Keyboard + KPAD) --- */
#define WPAD_BUTTON_LEFT          0x0001
#define WPAD_BUTTON_RIGHT         0x0002
#define WPAD_BUTTON_DOWN          0x0004
#define WPAD_BUTTON_UP            0x0008
#define WPAD_BUTTON_PLUS          0x0010
#define WPAD_BUTTON_2             0x0100
#define WPAD_BUTTON_1             0x0200
#define WPAD_BUTTON_B             0x0400
#define WPAD_BUTTON_A             0x0800
#define WPAD_BUTTON_MINUS         0x1000
#define WPAD_BUTTON_HOME          0x8000

#define WPAD_CL_BUTTON_UP         0x0001
#define WPAD_CL_BUTTON_LEFT       0x0002
#define WPAD_CL_BUTTON_ZR         0x0004
#define WPAD_CL_BUTTON_X          0x0008
#define WPAD_CL_BUTTON_A          0x0010
#define WPAD_CL_BUTTON_Y          0x0020
#define WPAD_CL_BUTTON_B          0x0040
#define WPAD_CL_BUTTON_ZL         0x0080
#define WPAD_CL_BUTTON_FULL_R     0x0200
#define WPAD_CL_BUTTON_PLUS       0x0400
#define WPAD_CL_BUTTON_HOME       0x0800
#define WPAD_CL_BUTTON_MINUS      0x1000
#define WPAD_CL_BUTTON_FULL_L     0x2000
#define WPAD_CL_BUTTON_DOWN       0x4000
#define WPAD_CL_BUTTON_RIGHT      0x8000

typedef struct HostControllerState {
    u32 core_hold;
    u32 core_trig;
    u32 core_release;
    u32 cl_hold;
    u32 cl_trig;
    u32 cl_release;
    f32 stick_l_x;
    f32 stick_l_y;
    f32 stick_r_x;
    f32 stick_r_y;
    f32 trigger_l;
    f32 trigger_r;
    f32 ir_x;
    f32 ir_y;
} HostControllerState;

static HostControllerState s_ctrl_state = {0};
static u32 s_last_core_hold = 0;
static u32 s_last_cl_hold = 0;
static u32 s_latched_core_trig = 0;
static u32 s_latched_cl_trig = 0;
static u32 s_latched_core_release = 0;
static u32 s_latched_cl_release = 0;
static u8 s_controller_button_bits = 0;
static u32 s_controller_poll_count = 0;

/* ---------------------------------------------------------------------------
 * Deterministic host input script.
 *
 * The runner used to advance the title with two synthetic triggers: `sim_press`
 * (0x800A555C action 4 returned "pressed" on call counts 10/50/130/190) and a
 * hardcoded headless press schedule (frames 250..265, 460..475, 800..815). Both
 * fabricated the *answer* instead of the *input*, so the engine's own action
 * evaluator (0x800DEEDC) never ran and the menu state machine walked modes
 * 1->25 without ever handing the sequence over - and no run could reach gameplay.
 *
 * This drives the real input path instead: frame-indexed button windows are ORed
 * into the same host controller state the keyboard fills, so KPADRead/PadManager
 * and the engine's edge bookkeeping see ordinary button presses.
 *
 *   TLS_INPUT_SCRIPT="640-652:A,900-912:DOWN,1000-1012:A"
 *
 * Frames are inclusive, buttons are separated by '+' (e.g. 700-710:A+DOWN).
 * ------------------------------------------------------------------------- */
#define TLS_INPUT_SCRIPT_MAX 32
typedef struct {
    int start;
    int end;
    u32 core;
    u32 cl;
} TlsScriptedPress;

static TlsScriptedPress s_script[TLS_INPUT_SCRIPT_MAX];
static int s_script_count = -1;

static bool tls_name_eq(const char* name, size_t len, const char* want) {
    size_t n = strlen(want);
    if (len != n) return false;
    for (size_t i = 0; i < len; i++) {
        char a = name[i], b = want[i];
        if (a >= 'a' && a <= 'z') a = (char)(a - 'a' + 'A');
        if (b >= 'a' && b <= 'z') b = (char)(b - 'a' + 'A');
        if (a != b) return false;
    }
    return true;
}

static u32 tls_button_core_mask(const char* name, size_t len) {
#define BTN_MATCH(s) tls_name_eq(name, len, s)
    if (BTN_MATCH("A"))     return WPAD_BUTTON_A;
    if (BTN_MATCH("B"))     return WPAD_BUTTON_B;
    if (BTN_MATCH("1"))     return WPAD_BUTTON_1;
    if (BTN_MATCH("2"))     return WPAD_BUTTON_2;
    if (BTN_MATCH("UP"))    return WPAD_BUTTON_UP;
    if (BTN_MATCH("DOWN"))  return WPAD_BUTTON_DOWN;
    if (BTN_MATCH("LEFT"))  return WPAD_BUTTON_LEFT;
    if (BTN_MATCH("RIGHT")) return WPAD_BUTTON_RIGHT;
    if (BTN_MATCH("PLUS") || BTN_MATCH("START")) return WPAD_BUTTON_PLUS;
    if (BTN_MATCH("MINUS")) return WPAD_BUTTON_MINUS;
#undef BTN_MATCH
    return 0;
}

static u32 tls_button_cl_mask(const char* name, size_t len) {
#define BTN_MATCH(s) tls_name_eq(name, len, s)
    if (BTN_MATCH("A"))     return WPAD_CL_BUTTON_A;
    if (BTN_MATCH("B"))     return WPAD_CL_BUTTON_B;
    if (BTN_MATCH("X"))     return WPAD_CL_BUTTON_X;
    if (BTN_MATCH("Y"))     return WPAD_CL_BUTTON_Y;
    if (BTN_MATCH("UP"))    return WPAD_CL_BUTTON_UP;
    if (BTN_MATCH("DOWN"))  return WPAD_CL_BUTTON_DOWN;
    if (BTN_MATCH("LEFT"))  return WPAD_CL_BUTTON_LEFT;
    if (BTN_MATCH("RIGHT")) return WPAD_CL_BUTTON_RIGHT;
    if (BTN_MATCH("PLUS") || BTN_MATCH("START")) return WPAD_CL_BUTTON_PLUS;
    if (BTN_MATCH("MINUS")) return WPAD_CL_BUTTON_MINUS;
    if (BTN_MATCH("ZL") || BTN_MATCH("L")) return WPAD_CL_BUTTON_ZL;
    if (BTN_MATCH("ZR") || BTN_MATCH("R")) return WPAD_CL_BUTTON_ZR;
#undef BTN_MATCH
    return 0;
}

/* Parse TLS_INPUT_SCRIPT once. Returns the number of presses loaded. */
static int tls_input_script_load(void) {
    if (s_script_count >= 0) return s_script_count;
    s_script_count = 0;
    const char* spec = getenv("TLS_INPUT_SCRIPT");
    if (!spec || !*spec) return 0;

    printf("[Input] deterministic script: %s\n", spec);
    fflush(stdout);

    /* Split items and buttons by hand: this used to call strtok() for the item list
     * and strtok() again for the '+' button list, and the inner call reset the outer
     * iteration state, so only the *first* entry of a multi-entry script was ever
     * recorded. A second press therefore never reached the pad, which is what made
     * the title's fade gate look "first-press-only" (handover 5c.10). */
    const char* cursor = spec;
    while (*cursor && s_script_count < TLS_INPUT_SCRIPT_MAX) {
        while (*cursor == ' ') cursor++;
        const char* item_end = strchr(cursor, ',');
        if (!item_end) item_end = cursor + strlen(cursor);
        char item[96];
        size_t item_len = (size_t)(item_end - cursor);
        if (item_len >= sizeof(item)) item_len = sizeof(item) - 1;
        memcpy(item, cursor, item_len);
        item[item_len] = '\0';
        cursor = *item_end ? item_end + 1 : item_end;

        char* colon = strchr(item, ':');
        if (!colon) continue;
        *colon = '\0';
        char* range = item;
        char* buttons = colon + 1;
        char* dash = strchr(range, '-');
        int start = atoi(range);
        int end = dash ? atoi(dash + 1) : start;
        if (end < start) { int tmp = start; start = end; end = tmp; }
        if (start < 0) continue;

        u32 core = 0, cl = 0;
        /* "0xHEX" presses a literal raw mask on both devices. Single-bit masks are
         * how the engine's action ids are decoded without guessing which button
         * produced which action. */
        if (buttons[0] == '0' && (buttons[1] == 'x' || buttons[1] == 'X')) {
            u32 raw = (u32)strtoul(buttons, NULL, 0);
            core = raw;
            cl = raw;
        } else {
            for (char* btn = buttons; btn && *btn; ) {
                char* plus = strchr(btn, '+');
                size_t len = plus ? (size_t)(plus - btn) : strlen(btn);
                char name[32];
                if (len >= sizeof(name)) len = sizeof(name) - 1;
                memcpy(name, btn, len);
                name[len] = '\0';
                while (len && name[len - 1] == ' ') name[--len] = '\0';
                core |= tls_button_core_mask(name, len);
                cl |= tls_button_cl_mask(name, len);
                btn = plus ? plus + 1 : NULL;
            }
        }
        if (!core && !cl) {
            printf("[Input] script entry '%s' has no known button\n", buttons);
            continue;
        }
        s_script[s_script_count].start = start;
        s_script[s_script_count].end = end;
        s_script[s_script_count].core = core;
        s_script[s_script_count].cl = cl;
        s_script_count++;
        /* 'A' on the Classic Controller maps to A|Y in this runner's keyboard table
         * (the game's own bindings expect the Y alias), so mirror it for scripts. */
        if (cl & WPAD_CL_BUTTON_A) s_script[s_script_count - 1].cl |= WPAD_CL_BUTTON_Y;
    }
    for (int i = 0; i < s_script_count; i++) {
        printf("[Input]   frames %d-%d -> core=0x%08X cl=0x%08X\n",
               s_script[i].start, s_script[i].end, s_script[i].core, s_script[i].cl);
    }
    fflush(stdout);
    return s_script_count;
}

static void tls_input_script_apply(int frame, u32* core, u32* cl) {
    if (tls_input_script_load() == 0) return;
    for (int i = 0; i < s_script_count; i++) {
        if (frame >= s_script[i].start && frame <= s_script[i].end) {
            *core |= s_script[i].core;
            *cl |= s_script[i].cl;
        }
    }
}

/* ---------------------------------------------------------------------------
 * State-triggered accept press.
 *
 * A frame-indexed script cannot press at the right moment when the frame at which
 * the title reaches a mode varies between runs (it does - streaming timing). So
 * allow a press *triggered by the guest's own state*: when the title task enters
 * one of the modes named in TLS_AUTO_ACCEPT ("1" by default), press A for a short
 * hold. This is still just a button press - nothing is written to guest state
 * except the same controller data the keyboard writes.
 *
 * Note: the "the title gate is first-press-only" premise this comment used to carry
 * was a symptom of TLS_INPUT_SCRIPT only ever loading its first entry (see the
 * strtok note above), not of the gate. With multi-entry scripts the gate behaves
 * exactly as the DOL code reads: it opens once the fade value at task[0x48]+0x100
 * reaches the 150 at +0xA0, which the first accepted press is what sets.
 * ------------------------------------------------------------------------- */
#define TLS_AUTO_ACCEPT_MAX 16
static int s_accept_modes[TLS_AUTO_ACCEPT_MAX];
static int s_accept_mode_count = -1;
static int s_accept_press_frames = 0;
static int s_accept_press_delay = 0;

static int tls_auto_accept_configured(void) {
    if (s_accept_mode_count >= 0) return s_accept_mode_count;
    s_accept_mode_count = 0;
    const char* spec = getenv("TLS_AUTO_ACCEPT");
    if (!spec || !*spec) return 0;
    char buf[128];
    strncpy(buf, spec, sizeof(buf) - 1);
    buf[sizeof(buf) - 1] = '\0';
    for (char* tok = strtok(buf, ","); tok && s_accept_mode_count < TLS_AUTO_ACCEPT_MAX; tok = strtok(NULL, ",")) {
        s_accept_modes[s_accept_mode_count++] = atoi(tok);
    }
    printf("[Input] auto-accept on title mode(s):");
    for (int i = 0; i < s_accept_mode_count; i++) printf(" %d", s_accept_modes[i]);
    printf("\n");
    fflush(stdout);
    return s_accept_mode_count;
}

/* Called from the title update hook when the mode changes. */
static void tls_auto_accept_on_mode(int mode) {
    if (tls_auto_accept_configured() == 0) return;
    for (int i = 0; i < s_accept_mode_count; i++) {
        if (s_accept_modes[i] == mode) {
            /* Start the press on the *next* frame: the pad manager's per-frame update
             * may already have run for the frame in which the mode changed, so a press
             * that begins immediately can be seen only as a partial edge (measured:
             * frame 357 of mode 1 produced action bit 12 from the classic Y alias but
             * not bit 11 from A). */
            s_accept_press_delay = 1;
            s_accept_press_frames = 20;
            return;
        }
    }
}

static void tls_auto_accept_apply(u32* core, u32* cl) {
    if (s_accept_press_delay > 0 || s_accept_press_frames <= 0) return;
    *core |= WPAD_BUTTON_A | WPAD_BUTTON_2;
    *cl |= WPAD_CL_BUTTON_A | WPAD_CL_BUTTON_Y;
}

/* Counted once per frame in tls_input_new_frame(): tls_service_controller_input()
 * runs several times per frame (main loop plus one call per KPADRead channel), so
 * decrementing there burned the whole press inside a single frame and the pad
 * manager never observed a held button. */
static void tls_auto_accept_tick(void) {
    if (s_accept_press_delay > 0) {
        s_accept_press_delay--;
        return;
    }
    if (s_accept_press_frames > 0) s_accept_press_frames--;
}


void tls_input_new_frame(void) {
    tls_auto_accept_tick();
    s_latched_core_trig = 0;
    s_latched_cl_trig = 0;
    s_latched_core_release = 0;
    s_latched_cl_release = 0;
}

#ifdef _WIN32
typedef struct _XINPUT_GAMEPAD_LOCAL {
    WORD  wButtons;
    BYTE  bLeftTrigger;
    BYTE  bRightTrigger;
    SHORT sThumbLX;
    SHORT sThumbLY;
    SHORT sThumbRX;
    SHORT sThumbRY;
} XINPUT_GAMEPAD_LOCAL;

typedef struct _XINPUT_STATE_LOCAL {
    DWORD                dwPacketNumber;
    XINPUT_GAMEPAD_LOCAL Gamepad;
} XINPUT_STATE_LOCAL;

typedef DWORD (WINAPI *PFN_XInputGetStateLocal)(DWORD dwUserIndex, XINPUT_STATE_LOCAL* pState);
static PFN_XInputGetStateLocal s_pfnXInputGetState = NULL;
static int s_xinput_checked = 0;

static void init_xinput_dynamic(void) {
    if (s_xinput_checked) return;
    s_xinput_checked = 1;
    HMODULE h = LoadLibraryA("xinput1_4.dll");
    if (!h) h = LoadLibraryA("xinput1_3.dll");
    if (!h) h = LoadLibraryA("xinput9_1_0.dll");
    if (h) {
        s_pfnXInputGetState = (PFN_XInputGetStateLocal)GetProcAddress(h, "XInputGetState");
        if (s_pfnXInputGetState) {
            printf("[TLS Controller] Dynamic XInput support active\n");
            fflush(stdout);
        }
    }
}
#endif

static void write_guest_f32(CPUState* ctx, u32 addr, f32 val) {
    u32 raw;
    memcpy(&raw, &val, 4);
    mem_write32(ctx, addr, raw);
}

static f32 read_guest_f32(CPUState* ctx, u32 addr) {
    u32 raw = mem_read32(ctx, addr);
    f32 val;
    memcpy(&val, &raw, 4);
    return val;
}

static void fill_kpad_status(CPUState* ctx, u32 status_addr) {
    u8* p = (u8*)resolve_guest_pointer(ctx, status_addr);
    if (p) memset(p, 0, 0xF0);

    // 0x00: Wiimote core buttons
    mem_write32(ctx, status_addr + 0x00, s_ctrl_state.core_hold);
    mem_write32(ctx, status_addr + 0x04, s_ctrl_state.core_trig);
    mem_write32(ctx, status_addr + 0x08, s_ctrl_state.core_release);

    // 0x0C: Accelerometer (default neutral gravity upright: 0, 0, 1)
    write_guest_f32(ctx, status_addr + 0x0C, 0.0f);
    write_guest_f32(ctx, status_addr + 0x10, 0.0f);
    write_guest_f32(ctx, status_addr + 0x14, 1.0f);
    write_guest_f32(ctx, status_addr + 0x18, 1.0f); // acc_value
    write_guest_f32(ctx, status_addr + 0x1C, 0.0f); // acc_speed

    // 0x20: Pointer position
    write_guest_f32(ctx, status_addr + 0x20, s_ctrl_state.ir_x);
    write_guest_f32(ctx, status_addr + 0x24, s_ctrl_state.ir_y);
    write_guest_f32(ctx, status_addr + 0x28, 0.0f); // vec.x
    write_guest_f32(ctx, status_addr + 0x2C, 0.0f); // vec.y
    write_guest_f32(ctx, status_addr + 0x30, 0.0f); // speed

    // 0x34: Device type (standard KPADStatus: 2 = Classic Controller)
    mem_write8(ctx, status_addr + 0x34, 2);
    // 0x35: Error (0 = OK)
    mem_write8(ctx, status_addr + 0x35, 0);
    mem_write16(ctx, status_addr + 0x36, 0);

    // 0x38: Classic Controller Extension (standard KPADStatus)
    mem_write32(ctx, status_addr + 0x38, s_ctrl_state.cl_hold);
    mem_write32(ctx, status_addr + 0x3C, s_ctrl_state.cl_trig);
    mem_write32(ctx, status_addr + 0x40, s_ctrl_state.cl_release);
    write_guest_f32(ctx, status_addr + 0x44, s_ctrl_state.stick_l_x);
    write_guest_f32(ctx, status_addr + 0x48, s_ctrl_state.stick_l_y);
    write_guest_f32(ctx, status_addr + 0x4C, s_ctrl_state.stick_r_x);
    write_guest_f32(ctx, status_addr + 0x50, s_ctrl_state.stick_r_y);
    write_guest_f32(ctx, status_addr + 0x54, s_ctrl_state.trigger_l);
    write_guest_f32(ctx, status_addr + 0x58, s_ctrl_state.trigger_r);

    // 0x5C: Extended Device Type (used by TLS PadManager at 0x800DDD18 and 0x806572E0)
    mem_write8(ctx, status_addr + 0x5C, 2); // WPAD_DEV_CLASSIC
    mem_write8(ctx, status_addr + 0x5D, 0); // WPAD_ERR_NONE
    mem_write8(ctx, status_addr + 0x5E, 0);
    mem_write8(ctx, status_addr + 0x5F, 0);

    // 0x60: Extended Classic Controller buttons & sticks (TLS PadManager layout)
    mem_write32(ctx, status_addr + 0x60, s_ctrl_state.cl_hold);
    mem_write32(ctx, status_addr + 0x64, s_ctrl_state.cl_trig);
    mem_write32(ctx, status_addr + 0x68, s_ctrl_state.cl_release);
    write_guest_f32(ctx, status_addr + 0x6C, s_ctrl_state.stick_l_x);
    write_guest_f32(ctx, status_addr + 0x70, s_ctrl_state.stick_l_y);
    write_guest_f32(ctx, status_addr + 0x74, s_ctrl_state.stick_r_x);
    write_guest_f32(ctx, status_addr + 0x78, s_ctrl_state.stick_r_y);
    write_guest_f32(ctx, status_addr + 0x7C, s_ctrl_state.trigger_l);
    write_guest_f32(ctx, status_addr + 0x80, s_ctrl_state.trigger_r);
}

int tls_service_controller_input(CPUState* ctx) {
    (void)ctx;
    u32 cur_core = 0;
    u32 cur_cl = 0;
    f32 lx = 0.0f, ly = 0.0f;
    f32 rx = 0.0f, ry = 0.0f;
    f32 tl = 0.0f, tr = 0.0f;

#ifdef _WIN32
    init_xinput_dynamic();
    if (s_pfnXInputGetState) {
        XINPUT_STATE_LOCAL xi;
        for (DWORD i = 0; i < 4; i++) {
            if (s_pfnXInputGetState(i, &xi) == 0) { // ERROR_SUCCESS = 0
                WORD w = xi.Gamepad.wButtons;
                if (w & 0x0001) { cur_core |= WPAD_BUTTON_UP;    cur_cl |= WPAD_CL_BUTTON_UP; }
                if (w & 0x0002) { cur_core |= WPAD_BUTTON_DOWN;  cur_cl |= WPAD_CL_BUTTON_DOWN; }
                if (w & 0x0004) { cur_core |= WPAD_BUTTON_LEFT;  cur_cl |= WPAD_CL_BUTTON_LEFT; }
                if (w & 0x0008) { cur_core |= WPAD_BUTTON_RIGHT; cur_cl |= WPAD_CL_BUTTON_RIGHT; }
                if (w & 0x1000) { cur_core |= WPAD_BUTTON_A;     cur_cl |= WPAD_CL_BUTTON_A; }
                if (w & 0x2000) { cur_core |= WPAD_BUTTON_B;     cur_cl |= WPAD_CL_BUTTON_B; }
                if (w & 0x4000) { cur_core |= WPAD_BUTTON_1;     cur_cl |= WPAD_CL_BUTTON_X; }
                if (w & 0x8000) { cur_core |= WPAD_BUTTON_2;     cur_cl |= WPAD_CL_BUTTON_Y; }
                if (w & 0x0010) { cur_core |= WPAD_BUTTON_PLUS;  cur_cl |= WPAD_CL_BUTTON_PLUS; }
                if (w & 0x0020) { cur_core |= WPAD_BUTTON_MINUS; cur_cl |= WPAD_CL_BUTTON_MINUS; }
                if (w & 0x0100) { cur_cl |= WPAD_CL_BUTTON_ZL; }
                if (w & 0x0200) { cur_cl |= WPAD_CL_BUTTON_ZR; }
                if (xi.Gamepad.bLeftTrigger > 30) {
                    cur_cl |= WPAD_CL_BUTTON_FULL_L;
                    if (tl == 0.0f) tl = (f32)xi.Gamepad.bLeftTrigger / 255.0f;
                }
                if (xi.Gamepad.bRightTrigger > 30) {
                    cur_cl |= WPAD_CL_BUTTON_FULL_R;
                    if (tr == 0.0f) tr = (f32)xi.Gamepad.bRightTrigger / 255.0f;
                }
                if (abs(xi.Gamepad.sThumbLX) > 7849 && lx == 0.0f) lx = (f32)xi.Gamepad.sThumbLX / 32767.0f;
                if (abs(xi.Gamepad.sThumbLY) > 7849 && ly == 0.0f) ly = (f32)xi.Gamepad.sThumbLY / 32767.0f;
                if (abs(xi.Gamepad.sThumbRX) > 8689 && rx == 0.0f) rx = (f32)xi.Gamepad.sThumbRX / 32767.0f;
                if (abs(xi.Gamepad.sThumbRY) > 8689 && ry == 0.0f) ry = (f32)xi.Gamepad.sThumbRY / 32767.0f;
            }
        }
    }

    // Direct WinMM joystick polling (DirectInput, DualSense native, virtual controllers)
    for (UINT jid = JOYSTICKID1; jid <= JOYSTICKID2; jid++) {
        JOYINFOEX ji = {0};
        ji.dwSize = sizeof(JOYINFOEX);
        ji.dwFlags = JOY_RETURNALL;
        if (joyGetPosEx(jid, &ji) == JOYERR_NOERROR) {
            DWORD b = ji.dwButtons;
            if (b & 0x01) { cur_core |= WPAD_BUTTON_A; cur_cl |= WPAD_CL_BUTTON_A; }
            if (b & 0x02) { cur_core |= WPAD_BUTTON_B; cur_cl |= WPAD_CL_BUTTON_B; }
            if (b & 0x04) { cur_core |= WPAD_BUTTON_1; cur_cl |= WPAD_CL_BUTTON_X; }
            if (b & 0x08) { cur_core |= WPAD_BUTTON_2; cur_cl |= WPAD_CL_BUTTON_Y; }
            if (b & 0x10) { cur_cl |= WPAD_CL_BUTTON_ZL; }
            if (b & 0x20) { cur_cl |= WPAD_CL_BUTTON_ZR; }
            if (b & 0x40) { cur_cl |= WPAD_CL_BUTTON_FULL_L; }
            if (b & 0x80) { cur_cl |= WPAD_CL_BUTTON_FULL_R; }
            if (b & 0x100) { cur_core |= WPAD_BUTTON_MINUS; cur_cl |= WPAD_CL_BUTTON_MINUS; }
            if (b & 0x200) { cur_core |= WPAD_BUTTON_PLUS;  cur_cl |= WPAD_CL_BUTTON_PLUS; }
            if (ji.dwPOV != 0xFFFF && ji.dwPOV != 65535) {
                if (ji.dwPOV == 0 || ji.dwPOV == 4500 || ji.dwPOV == 31500) { cur_core |= WPAD_BUTTON_UP; cur_cl |= WPAD_CL_BUTTON_UP; }
                if (ji.dwPOV == 9000 || ji.dwPOV == 4500 || ji.dwPOV == 13500) { cur_core |= WPAD_BUTTON_RIGHT; cur_cl |= WPAD_CL_BUTTON_RIGHT; }
                if (ji.dwPOV == 18000 || ji.dwPOV == 13500 || ji.dwPOV == 22500) { cur_core |= WPAD_BUTTON_DOWN; cur_cl |= WPAD_CL_BUTTON_DOWN; }
                if (ji.dwPOV == 27000 || ji.dwPOV == 22500 || ji.dwPOV == 31500) { cur_core |= WPAD_BUTTON_LEFT; cur_cl |= WPAD_CL_BUTTON_LEFT; }
            }
        }
    }

    // Win32 Keyboard Mapping (WASD & Arrows, Space/Enter=A, Esc/X=B, etc.)
    if ((GetAsyncKeyState(VK_LEFT) & 0x8000) || (GetAsyncKeyState('A') & 0x8000)) {
        cur_core |= WPAD_BUTTON_LEFT;  cur_cl |= WPAD_CL_BUTTON_LEFT;  lx = -1.0f;
    }
    if ((GetAsyncKeyState(VK_RIGHT) & 0x8000) || (GetAsyncKeyState('D') & 0x8000)) {
        cur_core |= WPAD_BUTTON_RIGHT; cur_cl |= WPAD_CL_BUTTON_RIGHT; lx = 1.0f;
    }
    if ((GetAsyncKeyState(VK_UP) & 0x8000) || (GetAsyncKeyState('W') & 0x8000)) {
        cur_core |= WPAD_BUTTON_UP;    cur_cl |= WPAD_CL_BUTTON_UP;    ly = 1.0f;
    }
    if ((GetAsyncKeyState(VK_DOWN) & 0x8000) || (GetAsyncKeyState('S') & 0x8000)) {
        cur_core |= WPAD_BUTTON_DOWN;  cur_cl |= WPAD_CL_BUTTON_DOWN;  ly = -1.0f;
    }
    if ((GetAsyncKeyState(VK_RETURN) & 0x8000) || (GetAsyncKeyState(VK_SPACE) & 0x8000) || (GetAsyncKeyState('Z') & 0x8000) || (GetAsyncKeyState('E') & 0x8000) || (GetAsyncKeyState('F') & 0x8000) || (GetAsyncKeyState(VK_LBUTTON) & 0x8000) || (GetAsyncKeyState('2') & 0x8000)) {
        cur_core |= WPAD_BUTTON_A | WPAD_BUTTON_2;
        cur_cl   |= WPAD_CL_BUTTON_A | WPAD_CL_BUTTON_Y;
    }
    if ((GetAsyncKeyState(VK_ESCAPE) & 0x8000) || (GetAsyncKeyState(VK_BACK) & 0x8000) || (GetAsyncKeyState('X') & 0x8000) || (GetAsyncKeyState('Q') & 0x8000) || (GetAsyncKeyState(VK_RBUTTON) & 0x8000)) {
        cur_core |= WPAD_BUTTON_B; cur_cl |= WPAD_CL_BUTTON_B;
    }
    if (GetAsyncKeyState('C') & 0x8000) {
        cur_core |= WPAD_BUTTON_1; cur_cl |= WPAD_CL_BUTTON_X;
    }
    if (GetAsyncKeyState('V') & 0x8000) {
        cur_core |= WPAD_BUTTON_2; cur_cl |= WPAD_CL_BUTTON_Y;
    }
    if ((GetAsyncKeyState(VK_TAB) & 0x8000) || (GetAsyncKeyState('1') & 0x8000)) {
        cur_core |= WPAD_BUTTON_PLUS; cur_cl |= WPAD_CL_BUTTON_PLUS;
    }
    if ((GetAsyncKeyState(VK_OEM_MINUS) & 0x8000) || (GetAsyncKeyState('M') & 0x8000)) {
        cur_core |= WPAD_BUTTON_MINUS; cur_cl |= WPAD_CL_BUTTON_MINUS;
    }
    if (GetAsyncKeyState(VK_SHIFT) & 0x8000) {
        cur_cl |= WPAD_CL_BUTTON_ZL;
    }
    if (GetAsyncKeyState(VK_CONTROL) & 0x8000) {
        cur_cl |= WPAD_CL_BUTTON_ZR;
    }

    extern int g_runner_current_frame;
    /* Scripted presses land in the same state the keyboard fills, so the guest's own
     * action evaluator sees ordinary edges. Replaces the old hardcoded "press A at
     * frames 250/460/800" schedule, which produced presses the engine never asked for. */
    tls_input_script_apply(g_runner_current_frame, &cur_core, &cur_cl);
    tls_auto_accept_apply(&cur_core, &cur_cl);
#endif

    u32 new_core_trig = cur_core & ~s_last_core_hold;
    u32 new_cl_trig   = cur_cl & ~s_last_cl_hold;
    u32 new_core_rel  = ~cur_core & s_last_core_hold;
    u32 new_cl_rel    = ~cur_cl & s_last_cl_hold;

    s_latched_core_trig |= new_core_trig;
    s_latched_cl_trig   |= new_cl_trig;
    s_latched_core_release |= new_core_rel;
    s_latched_cl_release   |= new_cl_rel;

    s_ctrl_state.core_hold = cur_core;
    s_ctrl_state.core_trig = s_latched_core_trig;
    s_ctrl_state.core_release = s_latched_core_release;

    s_ctrl_state.cl_hold = cur_cl;
    s_ctrl_state.cl_trig = s_latched_cl_trig;
    s_ctrl_state.cl_release = s_latched_cl_release;

    if (s_ctrl_state.cl_trig != 0) {
        printf("[Input] Player Pressed: 0x%08X (A=%d, B=%d, X=%d, Y=%d, Dpad=%d, Stick=[%.2f, %.2f])\n",
               s_ctrl_state.cl_trig,
               (s_ctrl_state.cl_trig & WPAD_CL_BUTTON_A) ? 1 : 0,
               (s_ctrl_state.cl_trig & WPAD_CL_BUTTON_B) ? 1 : 0,
               (s_ctrl_state.cl_trig & WPAD_CL_BUTTON_X) ? 1 : 0,
               (s_ctrl_state.cl_trig & WPAD_CL_BUTTON_Y) ? 1 : 0,
               (s_ctrl_state.cl_trig & (WPAD_CL_BUTTON_UP | WPAD_CL_BUTTON_DOWN | WPAD_CL_BUTTON_LEFT | WPAD_CL_BUTTON_RIGHT)) ? 1 : 0,
               lx, ly);
        fflush(stdout);
    }

    s_ctrl_state.stick_l_x = lx;
    s_ctrl_state.stick_l_y = ly;
    s_ctrl_state.stick_r_x = rx;
    s_ctrl_state.stick_r_y = ry;
    s_ctrl_state.trigger_l = tl;
    s_ctrl_state.trigger_r = tr;

    s_last_core_hold = cur_core;
    s_last_cl_hold = cur_cl;

    s_controller_button_bits = (u8)cur_core;
    s_controller_poll_count++;

    // 1. Raw Bluetooth HID buffer emulation
    mem_write16(ctx, 0x8081FB5C, (u16)cur_core);
    mem_write16(ctx, 0x8081FB70, 0x0030); // report ID 0x30
    mem_write32(ctx, 0x8087FE80, 0);      // global controller error flag
    mem_write32(ctx, 0x8087FDE0, 0);

    // 2. WPAD Subsystem state
    u8* wpad_state = (u8*)resolve_guest_pointer(ctx, 0x8082E508);
    if (wpad_state) *wpad_state = 3; // WPAD_STATE_SETUP (ready)
    u8* pad_init_done = (u8*)resolve_guest_pointer(ctx, 0x808801A4);
    if (pad_init_done) *pad_init_done = 1;

    // 3. Channel 0 Internal Controller Buffer at 0x80828318
    mem_write32(ctx, 0x80828318 + 0x00, s_ctrl_state.core_hold);
    mem_write32(ctx, 0x80828318 + 0x04, s_ctrl_state.core_trig);
    mem_write32(ctx, 0x80828318 + 0x08, s_ctrl_state.core_release);
    mem_write8(ctx,  0x80828318 + 0x5c, 2); // Dev type = Classic Controller
    mem_write8(ctx,  0x80828318 + 0x5d, 0); // err = 0
    mem_write8(ctx,  0x80828318 + 0x5e, 0);
    mem_write8(ctx,  0x80828318 + 0x5f, 0);
    mem_write32(ctx, 0x80828318 + 0x60, s_ctrl_state.cl_hold);
    mem_write32(ctx, 0x80828318 + 0x64, s_ctrl_state.cl_trig);
    mem_write32(ctx, 0x80828318 + 0x68, s_ctrl_state.cl_release);
    mem_write8(ctx,  0x80828318 + 0x17b, 1); // 1 sample queued

    // Queued sample at 0x80828318 + 0x180
    mem_write16(ctx, 0x80828318 + 0x180 + 0x00, (u16)s_ctrl_state.core_hold);
    mem_write8(ctx,  0x80828318 + 0x180 + 0x29, 0);
    mem_write16(ctx, 0x80828318 + 0x180 + 0x2a, (u16)s_ctrl_state.cl_hold);
    mem_write8(ctx,  0x80828318 + 0x180 + 0x40, 0);

    // Controller connection & enable flags (ensure reset flag 0x640 is 0 so SDK does not error out)
    mem_write8(ctx, 0x80828318 + 0x640, 0); // No reset pending
    mem_write8(ctx, 0x80828318 + 0x641, 0);
    mem_write8(ctx, 0x80828318 + 0x642, 1);
    mem_write8(ctx, 0x80828318 + 0x643, 2); // Dev type = Classic
    mem_write8(ctx, 0x80828318 + 0x645, 1); // Connected
    mem_write8(ctx, 0x80828318 + 0x648, 1); // Enabled
    mem_write8(ctx, 0x80828318 + 0x649, 1); // Enabled

    // Ensure DVD drive initialized flag at 0x8087FE44 (-22964 from r13) is set so DVDGetDriveStatus sees ready drive
    mem_write32(ctx, 0x8087FE44, 1);

    // 4. Game Pad Managers: primary at 0x8087F150, home/system check at 0x8087F018, title/menu at 0x8087EF70
    u32 pad_mgrs[3];
    pad_mgrs[0] = mem_read32(ctx, 0x8087F150);
    pad_mgrs[1] = mem_read32(ctx, 0x8087F018);
    pad_mgrs[2] = mem_read32(ctx, 0x8087EF70);

    u32 mask = 0;
    if ((cur_core & WPAD_BUTTON_LEFT)  || (cur_cl & WPAD_CL_BUTTON_LEFT))  mask |= (1 << 0);
    if ((cur_core & WPAD_BUTTON_RIGHT) || (cur_cl & WPAD_CL_BUTTON_RIGHT)) mask |= (1 << 1);
    if ((cur_core & WPAD_BUTTON_DOWN)  || (cur_cl & WPAD_CL_BUTTON_DOWN))  mask |= (1 << 2);
    if ((cur_core & WPAD_BUTTON_UP)    || (cur_cl & WPAD_CL_BUTTON_UP))    mask |= (1 << 3);
    if ((cur_core & WPAD_BUTTON_B)     || (cur_cl & WPAD_CL_BUTTON_B))     mask |= (1 << 4) | (1 << 10);  // Cancel / Action 5 (bit 10)
    if ((cur_core & WPAD_BUTTON_A)     || (cur_cl & WPAD_CL_BUTTON_A))     mask |= (1 << 14) | (1 << 11); // Confirm / Action 4 (bit 11)
    if ((cur_core & WPAD_BUTTON_1)     || (cur_cl & WPAD_CL_BUTTON_X))     mask |= (1 << 10);
    if ((cur_core & WPAD_BUTTON_2)     || (cur_cl & WPAD_CL_BUTTON_Y))     mask |= (1 << 11);
    if ((cur_core & WPAD_BUTTON_PLUS)  || (cur_cl & WPAD_CL_BUTTON_PLUS))  mask |= (1 << 12) | (1 << 11); // Plus also triggers confirm
    if ((cur_core & WPAD_BUTTON_MINUS) || (cur_cl & WPAD_CL_BUTTON_MINUS)) mask |= (1 << 13);

    static u32 s_last_game_mask = 0;
    u32 trig = mask & ~s_last_game_mask;
    u32 rel = ~mask & s_last_game_mask;
    s_last_game_mask = mask;

    for (int i = 0; i < 3; i++) {
        u32 pad_mgr = pad_mgrs[i];
        if (pad_mgr != 0) {
            mem_write32(ctx, pad_mgr + 0x40c0, 1); // Channel 0 enabled
            mem_write32(ctx, pad_mgr + 0x3c00, 1); // Channel 0 connected
            mem_write8(ctx,  pad_mgr + 0x5c, 2);   // Classic Controller attached
            mem_write8(ctx,  pad_mgr + 0x5d, 0);   // err = 0
            mem_write32(ctx, pad_mgr + 0x3c18, mask);
            mem_write32(ctx, pad_mgr + 0x3c28, trig);
            mem_write32(ctx, pad_mgr + 0x3c38, rel);
        }
    }

    return (cur_core != 0 || cur_cl != 0);
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

char g_tls_stage_override[32] = {0};
uint32_t g_last_vi_framebuffer = 0;

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
/* The deferred-completion ring has to hold a whole frame's burst of reads once
 * TLS_ASYNC_IO_COMPLETE routes the streaming loader through it: the loader submits up to
 * two slots per file handle and many handles per frame, and a dropped entry is a slot
 * that never completes. */
#define TLS_DVD_MAX_PENDING 512
#define TLS_DVD_IDLE_PC 0x805F50B0u /* OS scheduler idle loop used by the runner */

/* TLS_HOST_CALLBACK_SENTINEL (0xFFFFFFFC) is declared in replacements.h because
 * host_runner.c plants it in LR before entering guest callbacks. */

typedef struct PendingDvdCallback {
    u32 callback;
    u32 file_info;
    s32 result;
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

static void dvd_queue_callback(u32 callback, u32 file_info, s32 result) {
    if (!callback) {
        return;
    }
    u32 next = (s_dvd_pending_tail + 1) % TLS_DVD_MAX_PENDING;
    if (next == s_dvd_pending_head) {
        /* Queue full: dropping a completion leaves the guest polling a slot that will
         * never say "done", so a silent drop turns into a stall. Report it: with
         * TLS_ASYNC_IO_COMPLETE the whole streaming pipeline goes through this queue. */
        static u32 s_full_reports = 0;
        if (s_full_reports++ < 16 || (s_full_reports % 1000) == 0) {
            printf("[TLS DVD] completion queue FULL #%u (dropping cb=0x%08X fi=0x%08X)\n",
                   s_full_reports, callback, file_info);
            fflush(stdout);
        }
        return;
    }
    s_dvd_pending[s_dvd_pending_tail].callback = callback;
    s_dvd_pending[s_dvd_pending_tail].file_info = file_info;
    s_dvd_pending[s_dvd_pending_tail].result = result;
    s_dvd_pending_tail = next;
}


/* Sets up the guest to run one queued callback. Returns 1 when a call was staged. */
int tls_dvd_service_callback(CPUState* ctx) {
    if (s_dvd_pending_head == s_dvd_pending_tail) {
        return 0;
    }
    // Drain any lightweight 0x8046BBE0 stream callbacks directly without requiring a thread context switch
    while (s_dvd_pending_head != s_dvd_pending_tail) {
        PendingDvdCallback* pending = &s_dvd_pending[s_dvd_pending_head];
        if (pending->callback == 0x8046BBE0) {
            u32 fi_addr = pending->file_info;
            u32 target = fi_addr ? mem_read32(ctx, fi_addr + 0x2C) : 0;
            if (target != 0x807C6F60 && target != 0x800000E4 && resolve_guest_pointer(ctx, target)) {
                mem_write32(ctx, target, 2);
            } else {
                /* The completion is dropped for this target, so whatever waits on it spins
                 * forever. Make that visible instead of silent (handover 5c.21). */
                static u32 s_drop_reports = 0;
                if (s_drop_reports++ < 16 || (s_drop_reports % 500) == 0) {
                    printf("[TLS DVD] stream completion DROPPED #%u fi=0x%08X target=0x%08X "
                           "res=%d resolved=%d\n",
                           s_drop_reports, fi_addr, target, pending->result,
                           resolve_guest_pointer(ctx, target) ? 1 : 0);
                    fflush(stdout);
                }
            }
            s_dvd_callbacks_run++;
            s_dvd_pending_head = (s_dvd_pending_head + 1) % TLS_DVD_MAX_PENDING;
            continue;
        }
        break;
    }
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

    ctx->gpr[3] = (u32)pending.result; /* result: bytes transferred (or error code) */
    ctx->gpr[4] = pending.file_info;   /* DVDFileInfo* */
    ctx->lr = TLS_DVD_IDLE_PC;         /* return into the scheduler idle point */
    ctx->pc = pending.callback;
    s_dvd_callbacks_run++;
    if (getenv("TLS_DVD_TRACE") && s_dvd_callbacks_run <= 128) {
        printf("[TLS DVD] callback #%u -> %08X fileInfo=%08X res=%d\n", s_dvd_callbacks_run,
               pending.callback, pending.file_info, pending.result);
        fflush(stdout);
    }
    return 1;
}

#define TLS_IPC_MAX_PENDING 64
typedef struct {
    u32 callback;
    s32 result;
    u32 usrdata;
    int frame; /* runner frame the completion was produced on */
} PendingIpcCallback;

extern int g_runner_current_frame;

/* How many frames an IOS completion must wait before it is delivered.
 *
 * On hardware a /dev/fs request completes asynchronously, and the guest's task
 * loops tick once per frame in between: measured, the save manager's driver calls
 * fn_800A48B8 (which stores state 1 into the manager) and then tears the request
 * down in the SAME frame, so the state-1 handler - the one that decides whether to
 * NANDCreateAsync - is never dispatched by an Update tick. TLS_IPC_DELAY makes the
 * completion land on a later frame, as a device round trip would. 0 keeps the old
 * same-frame behaviour. */
static int tls_ipc_delay_frames(void) {
    static int v = -1;
    if (v < 0) {
        const char* env = getenv("TLS_IPC_DELAY");
        v = env ? atoi(env) : 0;
        if (v < 0) v = 0;
        if (v > 8) v = 8;
    }
    return v;
}

static PendingIpcCallback s_ipc_pending[TLS_IPC_MAX_PENDING];
static u32 s_ipc_pending_head = 0;
static u32 s_ipc_pending_tail = 0;

static void tls_ipc_enqueue_callback(u32 callback, s32 result, u32 usrdata) {
    if (!callback) return;
    u32 next = (s_ipc_pending_tail + 1) % TLS_IPC_MAX_PENDING;
    if (next == s_ipc_pending_head) return;
    s_ipc_pending[s_ipc_pending_tail].callback = callback;
    s_ipc_pending[s_ipc_pending_tail].result = result;
    s_ipc_pending[s_ipc_pending_tail].usrdata = usrdata;
    s_ipc_pending[s_ipc_pending_tail].frame = g_runner_current_frame;
    s_ipc_pending_tail = next;
}

int tls_ipc_service_callback(CPUState* ctx) {
    if (s_ipc_pending_head == s_ipc_pending_tail) {
        return 0;
    }
    if (!tls_is_idle_address(ctx->pc)) {
        return 0;
    }
    {
        int delay = tls_ipc_delay_frames();
        int ready = s_ipc_pending[s_ipc_pending_head].frame + delay;
        if (delay > 0 && g_runner_current_frame < ready) {
            return 0; /* not yet: let the guest's own per-frame ticks run first */
        }
    }
    PendingIpcCallback pending = s_ipc_pending[s_ipc_pending_head];
    s_ipc_pending_head = (s_ipc_pending_head + 1) % TLS_IPC_MAX_PENDING;
    if (!pending.callback) {
        return 0;
    }

    ctx->gpr[3] = (u32)pending.result;
    ctx->gpr[4] = pending.usrdata;
    ctx->lr = TLS_DVD_IDLE_PC;
    ctx->pc = pending.callback;
    return 1;
}

int tls_service_message_queues(CPUState* ctx) {
    (void)ctx;
    return 0;
}

/* High-frequency draw-path telemetry. These prints fire per draw call (thousands
 * per frame); a single run produced ~120k lines and spent milliseconds per frame in
 * synchronous console I/O. TLS_DRAW_TRACE=1 restores them. */
static int tls_draw_trace_enabled(void) {
    static int s_on = -1;
    if (s_on < 0) s_on = getenv("TLS_DRAW_TRACE") ? 1 : 0;
    return s_on;
}

/* Ring buffer of the most recent dispatched guest functions, for stall diagnosis.
 * Each entry carries the caller-visible state at dispatch time: a bare PC list
 * says where the guest was but not why it got there, while (lr, sp, r3, r12)
 * together name the call site and the receiver of a virtual call. */
#define TLS_RECENT_MAX 64
static u32 s_recent_calls[TLS_RECENT_MAX];
static u32 s_recent_lr[TLS_RECENT_MAX];
static u32 s_recent_sp[TLS_RECENT_MAX];
static u32 s_recent_r3[TLS_RECENT_MAX];
static u32 s_recent_r12[TLS_RECENT_MAX];
static int s_recent_frames[TLS_RECENT_MAX];
static u32 s_recent_count = 0;
static u32 s_recent_pos = 0;

int tls_is_idle_address(u32 address) {
    return (address >= 0x805F50B0u && address <= 0x805F50BCu);
}

void tls_record_recent_call(CPUState* ctx, u32 address) {
    if (tls_is_idle_address(address)) {
        return;
    }
    extern int g_runner_current_frame;
    s_recent_calls[s_recent_pos] = address;
    s_recent_lr[s_recent_pos] = ctx->lr;
    s_recent_sp[s_recent_pos] = ctx->gpr[1];
    s_recent_r3[s_recent_pos] = ctx->gpr[3];
    s_recent_r12[s_recent_pos] = ctx->gpr[12];
    s_recent_frames[s_recent_pos] = g_runner_current_frame;
    s_recent_pos = (s_recent_pos + 1) % TLS_RECENT_MAX;
    if (s_recent_count < TLS_RECENT_MAX) {
        s_recent_count++;
    }
}

void tls_dump_recent_calls(void) {
    printf("\n[Runner] Last %u non-idle guest functions (oldest first):\n", s_recent_count);
    for (u32 i = 0; i < s_recent_count; i++) {
        u32 idx = (s_recent_pos + TLS_RECENT_MAX - s_recent_count + i) % TLS_RECENT_MAX;
        printf("         0x%08X  frame=%d  lr=0x%08X sp=0x%08X r3=0x%08X r12=0x%08X\n",
               s_recent_calls[idx], s_recent_frames[idx], s_recent_lr[idx],
               s_recent_sp[idx], s_recent_r3[idx], s_recent_r12[idx]);
    }
    fflush(stdout);
}

u32 g_count_c1c8 = 0;
u32 g_count_bbf0 = 0;

/* Depth of host-driven guest callback execution; see TLS_HOST_CALLBACK_SENTINEL. */
int g_host_callback_depth = 0;

static inline bool is_valid_task_node(CPUState* ctx, u32 node) {
    if (node < 0x80000000 || node >= 0x82000000 || (node & 3) != 0) return false;
    u32 vt = mem_read32(ctx, node);
    if (vt < 0x80003000 || vt >= 0x80800000 || (vt & 3) != 0) return false;
    // Task vtable must have a valid Init method at vt + 0x0C in DOL executable code
    u32 fn_init = mem_read32(ctx, vt + 0x0C);
    if (fn_init < 0x80003000 || fn_init >= 0x80730000 || (fn_init & 3) != 0) return false;
    return true;
}

static void sanitize_task_tree(CPUState* ctx, u32 node, int depth) {
    (void)ctx; (void)node; (void)depth;
}

static inline void sanitize_task_children(CPUState* ctx, u32 parent) {
    sanitize_task_tree(ctx, parent, 0);
}

typedef struct {
    FILE* fp;
    char path[128];
    uint32_t mode;
    bool in_use;
} IosFile;

static IosFile s_ios_files[16] = {0};

static void fs_path_to_host(const char* guest_path, char* out, size_t outsz);

/* Open the host stand-in for a NAND file.
 *
 * The guest's save-data check distinguishes "no save data yet" (a fresh console)
 * from "the data is corrupt" purely by what the NAND layer answers, so fabricating
 * a file when there is none makes every first boot take the corrupt path -
 * measured: the title asks "The save data cannot be used because the data is
 * corrupted. Recreate save data?" instead of offering a new game.
 *
 * 5c.40 retires the last fabrication in here: this used to answer `mode & 2` by
 * *creating* the file and filling it with 0x159580 zero bytes. ISFS_Open does not
 * create (the guest must issue CreateFile, command 9, first), and writing a
 * guessed 1 414 528 zeroes invented the save's contents. The file is opened only
 * when the host really holds it; the guest's own create+write path fills it. */
static bool ios_open_nand_file(const char* guest_path, uint32_t mode, FILE** out_fp) {
    char host[160];
    fs_path_to_host(guest_path, host, sizeof(host));
    FILE* fp = fopen(host, (mode & 2u) ? "r+b" : "rb");
    if (!fp) return false;
    *out_fp = fp;
    return true;
}

/* Is this an ISFS path (a file on the NAND) rather than an IOS device node? */
static int isfs_is_nand_file_path(const char* path) {
    return path && path[0] == '/' && strncmp(path, "/dev/", 5) != 0;
}

static int ios_alloc_fd(const char* path, uint32_t mode, FILE* fp) {
    for (int i = 1; i < 16; i++) {
        if (!s_ios_files[i].in_use) {
            s_ios_files[i].in_use = true;
            s_ios_files[i].fp = fp;
            s_ios_files[i].mode = mode;
            strncpy(s_ios_files[i].path, path ? path : "", sizeof(s_ios_files[i].path) - 1);
            return i;
        }
    }
    return 1;
}

static void ios_close_fd(int fd) {
    if (fd >= 1 && fd < 16 && s_ios_files[fd].in_use) {
        if (s_ios_files[fd].fp) {
            fclose(s_ios_files[fd].fp);
            s_ios_files[fd].fp = NULL;
        }
        s_ios_files[fd].in_use = false;
    }
}

/* ---------------------------------------------------------------------------
 * NAND / ISFS / IOS-file probe -- TLS_NAND_PROBE=1, inert by default.
 *
 * The title's save-data check (mode 5) is guest code: fn_800A472C calls
 * NANDGetLength(info, out_len) and, on a nonzero error, maps that error to a
 * dialog with fn_800A4494 and takes the "save data cannot be used" branch. The
 * length itself comes from the *open fd's* stats through
 *   fn_8061B860(fd, out8) -> IOS_Ioctl(fd, cmd=11, NULL, 0, out8, 8)
 * and the ISFS/NAND open above it is an async callback chain
 *   fn_80620220(path, info, mode, ..., cb, arg) -> cb(result)
 * So every fact that decides "corrupt" is one of the HLE answers below. Print
 * the question and the answer at each layer instead of guessing which one the
 * guest is reading. Rate-limited by a global cap; a boot makes ~10 NAND calls.
 * ------------------------------------------------------------------------- */
static int tls_nand_probe_on(void) {
    static int v = -1;
    if (v < 0) v = getenv("TLS_NAND_PROBE") ? 1 : 0;
    return v;
}

static int tls_nand_probe_slot(const char* what) {
    static int s_count = 0;
    if (s_count >= 200) return 0;
    s_count++;
    printf("[TLS NAND] #%d %s\n", s_count, what);
    fflush(stdout);
    return 1;
}

/* Host FILE* behind an HLE fd, or NULL for the device fds (/dev/fs, ...). */
static FILE* ios_fd_file(u32 fd) {
    return (fd >= 1 && fd < 16 && s_ios_files[fd].in_use) ? s_ios_files[fd].fp : NULL;
}

static const char* ios_fd_path(u32 fd) {
    return (fd >= 1 && fd < 16 && s_ios_files[fd].in_use) ? s_ios_files[fd].path : "";
}

/* Length currently visible through an HLE fd (0 when there is no backing file). */
static u32 ios_fd_length(u32 fd) {
    FILE* fp = ios_fd_file(fd);
    if (!fp) return 0;
    long here = ftell(fp);
    fseek(fp, 0, SEEK_END);
    long size = ftell(fp);
    fseek(fp, here, SEEK_SET);
    return (size > 0) ? (u32)size : 0u;
}

#define TLS_NAND_DIR "savedata"
#define TLS_TITLE_DATA_DIR_HOST TLS_NAND_DIR "/title/00010000/534c5345/data"

/* ---------------------------------------------------------------------------
 * Host NAND root initialisation (5c.41 H).
 *
 * With /dev/es answered (5c.41 G) the guest asks about its real paths, and a real
 * console that has this title installed already holds the directories the NAND
 * keeps for it - most importantly /title/00010000/534c5345/data, the title's own
 * data directory. Our host tree was empty, so GetAttr/GetUsage/ReadDir on that
 * directory answered "missing", which is not what a console says. These are
 * device facts, not guest state: no file content is invented, only the directory
 * skeleton an installed title has.
 * ------------------------------------------------------------------------- */
static void tls_nand_host_init(void) {
    static int done = 0;
    if (done) return;
    done = 1;
#ifdef _WIN32
    static const char* dirs[] = {
        TLS_NAND_DIR,
        TLS_NAND_DIR "/title",
        TLS_NAND_DIR "/title/00010000",
        TLS_NAND_DIR "/title/00010000/534c5345",
        TLS_TITLE_DATA_DIR_HOST,
        TLS_NAND_DIR "/meta",
        TLS_NAND_DIR "/ticket",
        TLS_NAND_DIR "/shared2",
        TLS_NAND_DIR "/shared2/sys",
        /* 5c.42 D: the space check sweeps these numeric title pools, one GetUsage
         * each; a console has them (they are the per-title-type block accounts), so
         * they must exist or every sweep accumulates -106 instead of a real pool. */
        TLS_NAND_DIR "/title/00010001",
        TLS_NAND_DIR "/title/00010003",
        TLS_NAND_DIR "/title/00010004",
        TLS_NAND_DIR "/title/00010005",
        TLS_NAND_DIR "/title/00010006",
        TLS_NAND_DIR "/title/00010007",
        TLS_NAND_DIR "/shared2/title",
    };
    for (unsigned i = 0; i < sizeof(dirs) / sizeof(dirs[0]); i++) {
        CreateDirectoryA(dirs[i], NULL);
    }
#endif
}

/* Map a guest ISFS path onto the host NAND tree under savedata/.
 *
 * 5c.41 G: before /dev/es answered the title-id and home-dir queries, every guest
 * path was root-relative ("/savedata.dat") and a flat file set was enough. With the
 * title directory answered, the paths are the real ones, e.g.
 *   /title/00010000/534c5345/data/savedata.dat
 * so the host mirrors that tree: a file the guest creates lands where a real NAND
 * would keep it, and ReadDir/GetAttr/GetUsage operate on real directories. */
static void fs_path_to_host(const char* guest_path, char* out, size_t outsz) {
    const char* p = guest_path;
    while (p && *p == '/') p++;
    if (!p || !*p) p = "unnamed.dat";
    size_t n = (size_t)snprintf(out, outsz, "savedata/");
    for (; *p && n + 1 < outsz; p++) {
        char c = *p;
        if (c == '\\' || c == ':') c = '_';
        if (c == '/' && (n == 0 || out[n - 1] == '/')) continue; /* collapse // */
        out[n++] = c;
    }
    out[n] = '\0';
}

/* Create every parent directory of a host path (savedata/a/b/c.dat -> a, then b). */
static void fs_make_parents(char* host_path) {
#ifdef _WIN32
    for (char* q = host_path; *q; q++) {
        if (*q != '/') continue;
        char save = *q;
        *q = '\0';
        if (*host_path) CreateDirectoryA(host_path, NULL);
        *q = save;
    }
#else
    (void)host_path;
#endif
}

/* Read the NUL-terminated guest path an ISFS request carries in its input buffer. */
static u32 isfs_read_guest_path(CPUState* ctx, u32 buf, u32 len, char* out, size_t outsz) {
    if (!outsz) return 0;
    out[0] = '\0';
    if (!buf || !len) return 0;
    u32 n = 0;
    for (; n + 1 < outsz && n < len; n++) {
        u8 c = mem_read8(ctx, buf + n);
        out[n] = (char)c;
        if (!c) return n;
    }
    out[outsz - 1] = '\0';
    return n;
}

/* Does the host NAND hold this guest path, and what length does it have? */
static int isfs_host_file_size(const char* guest_path, u32* size_out) {
    char host[160];
    fs_path_to_host(guest_path, host, sizeof(host));
    FILE* f = fopen(host, "rb");
    if (!f) return 0;
    fseek(f, 0, SEEK_END);
    long sz = ftell(f);
    fclose(f);
    if (size_out) *size_out = (sz > 0) ? (u32)sz : 0u;
    return 1;
}

/* 5c.42 G: the fn_800A4228 fabrication can be retired for measurement. It must be
 * checked BEFORE the fabricated writes, otherwise the state is zeroed first and the
 * "retired" run is really the fabricated one (which is what 5c.40 measured). */
static int tls_no_4228_fabrication(void) {
    static int v = -1;
    if (v < 0) v = getenv("TLS_NO_4228_FABRICATION") ? 1 : 0;
    return v;
}

static int tls_isfs_service_on(void) {
    /* ON by default since 5c.40: it is now a device model, not a stub. With the
     * service off the guest gets "success" for commands that were never executed,
     * which is exactly the fabrication 5c.39/5c.40 removed. TLS_ISFS_SERVICE=0
     * restores the old stub for A/B comparison. */
    static int v = -1;
    if (v < 0) {
        const char* env = getenv("TLS_ISFS_SERVICE");
        v = (env && env[0] == '0') ? 0 : 1;
    }
    return v;
}

/* Copy the NUL-terminated guest path a /dev/fs vector carries, or "" if none. */
static u32 isfs_path_of_vec(CPUState* ctx, u32 vecs, u32 index, char* out, size_t outsz) {
    if (!outsz) return 0;
    out[0] = '\0';
    u32 in_ptr = mem_read32(ctx, vecs + index * 8);
    if (!in_ptr) return 0;
    u32 n = 0;
    for (; n + 1 < outsz; n++) {
        u8 c = mem_read8(ctx, in_ptr + n);
        out[n] = (char)c;
        if (!c) return n;
    }
    out[outsz - 1] = '\0';
    return n;
}

/* ---- /dev/fs (ISFS) device model, from the guest's own SDK wrappers ----------
 *
 * Command numbers, payload sizes and reply layouts are read from src/isfs.c, not
 * guessed. Every wrapper below is named by the SDK symbol it belongs to:
 *
 *   3  CreateDir(path, owner, group, attr)   ioctl,   0x4c-byte request
 *   4  ReadDir(path, *count, [entries])      ioctlv,  count-only or count*13 bytes
 *   6  GetAttr(path) -> 0x4c reply           ioctl
 *   7  Delete(path)                          ioctl
 *   8  Rename(old, new)                      ioctl,   two 0x40-byte paths
 *   9  CreateFile(path, owner, group, attr)  ioctl,   0x4c-byte request
 *  12  GetUsage(path) -> two words           ioctlv,  the create path's space probe
 *
 * Request layout for 3/9 (fn_8061A880 / fn_8061B4D0): the NUL-terminated path,
 * then owner at +0x49, group at +0x46, attr at +0x47 and +0x48.
 * Reply layout for 6 (fn_8061AD30): u32 length at +0, u16 mode at +4, and the
 * same three attribute bytes at +0x49/+0x46/+0x47/+0x48.
 * ReadDir 13-byte entry records: type byte first, then up to 12 name bytes.
 *
 * 5c.39 retired a fabrication here: command 4 used to create a host file, so a
 * plain *ReadDir* made empty files for "/savedata.dat" and "/banner.bin".
 *
 * 5c.40 retires two more, both measured:
 *
 *  A) ioctl commands were never serviced at all. The handler was gated on
 *     `num_io > 0`, and 3/6/7/8/9 are plain ioctls (num_io == 0), so Delete,
 *     CreateFile and CreateDir were dropped on the floor. The guest was told
 *     "success" for a delete that removed nothing.
 *  B) Missing paths answered "success" with zeroed payloads. The guest's own
 *     NAND layer treats exactly -106 (ENOENT, fn_80622310 tests `cmpwi r3,-0x6a`)
 *     as "this path does not exist", and its ReadDir callback (fn_80620C60) has
 *     no case for "success, zero entries" - it calls no continuation at all. So
 *     answering success/count=0 did not say "empty directory": it said nothing,
 *     and the create path never continued to CreateFile.
 *
 * The host NAND is a flat file set under savedata/, and the guest's own paths are
 * root-relative ("/savedata.dat"), so "" and "/" are the root directory listing.
 * ------------------------------------------------------------------------- */
#define TLS_ISFS_ENOENT (-106) /* ISFS/IPC "no such file", the code the guest maps */
#define TLS_ISFS_EEXIST (-105)

/* Is this guest path the NAND root? ("", "/", "//" ...) */
static int isfs_is_root_path(const char* p) {
    if (!p) return 1;
    for (; *p; p++) if (*p != '/') return 0;
    return 1;
}

/* Host directory that backs the NAND root. */

/* Number of entries in a host NAND directory (a directory listing). */
static u32 isfs_host_dir_count(const char* host_dir) {
    u32 n = 0;
#undef TLS_NAND_DIR_PATHSPEC
#ifdef _WIN32
    char spec[192];
    snprintf(spec, sizeof(spec), "%s\\*", host_dir);
    WIN32_FIND_DATAA fd;
    HANDLE h = FindFirstFileA(spec, &fd);
    if (h == INVALID_HANDLE_VALUE) return 0;
    do {
        if (strcmp(fd.cFileName, ".") == 0 || strcmp(fd.cFileName, "..") == 0) continue;
        n++;
    } while (FindNextFileA(h, &fd));
    FindClose(h);
#else
    DIR* d = opendir(host_dir);
    if (!d) return 0;
    struct dirent* e;
    while ((e = readdir(d))) {
        if (strcmp(e->d_name, ".") == 0 || strcmp(e->d_name, "..") == 0) continue;
        n++;
    }
    closedir(d);
#endif
    return n;
}

/* Copy up to `max` entries of a host directory as 13-byte ReadDir records
 * (type byte + name). A directory entry is type 1, a plain file type 0. */
static u32 isfs_host_dir_entries(CPUState* ctx, u32 buf, u32 max, const char* host_dir) {
    u32 written = 0;
#ifdef _WIN32
    char spec[192];
    snprintf(spec, sizeof(spec), "%s\\*", host_dir);
    WIN32_FIND_DATAA fd;
    HANDLE h = FindFirstFileA(spec, &fd);
    if (h == INVALID_HANDLE_VALUE) return 0;
    do {
        if (strcmp(fd.cFileName, ".") == 0 || strcmp(fd.cFileName, "..") == 0) continue;
        if (written >= max) break;
        u32 rec = buf + written * 13;
        if (!resolve_guest_pointer(ctx, rec)) break;
        mem_write8(ctx, rec + 0, (fd.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY) ? 1u : 0u);
        for (u32 i = 1; i < 13; i++) {
            char c = fd.cFileName[i - 1];
            mem_write8(ctx, rec + i, (u8)c);
            if (!c) break;
        }
        written++;
    } while (FindNextFileA(h, &fd));
    FindClose(h);
#else
    (void)ctx; (void)buf; (void)max; (void)host_dir;
#endif
    return written;
}

/* Is the host path a directory? */
static int fs_host_is_dir(const char* host_path) {
#ifdef _WIN32
    DWORD a = GetFileAttributesA(host_path);
    return (a != INVALID_FILE_ATTRIBUTES) && (a & FILE_ATTRIBUTE_DIRECTORY);
#else
    (void)host_path;
    return 0;
#endif
}

/* Blocks a file of this size occupies, in the unit the guest's own limits use:
 * fn_80622310 allows 0x400 (1024) of them per save and 0x4400 (17408) of them
 * for the whole NAND, i.e. 8 KiB NAND blocks. */
static u32 isfs_blocks_for_size(u32 size) { return (size + 0x1FFF) / 0x2000; }

/* Service an ISFS *ioctl* (commands 3, 6, 7, 8, 9): the request/reply travel as
 * plain in/out buffers, not as io vectors. Returns the ISFS result code. */
static s32 tls_isfs_ioctl_service(CPUState* ctx, u32 cmd, u32 in_buf, u32 in_len, u32 out_buf,
                                  u32 out_len) {
    tls_nand_host_init();
    char guest_path[80];
    char host_path[160];
    char made_path[200] = {0};
    guest_path[0] = '\0';
    /* 5c.42 H: the request layout depends on the command. fn_8061A880 (CreateDir)
     * and fn_8061B4D0 (CreateFile) build their 0x4c request with the path at **+6**
     * (`addi r3, r3, 0x6; bl memcpy`), followed by owner at +0x49, group at +0x46
     * and attr at +0x47/+0x48. fn_8061AD30 (GetAttr) and fn_8061AFD0 (Delete) put
     * the path at +0. Reading +0 for create produced a garbage path and a failed
     * create - measured: `cmd=9 path='\xNN\xNN!\xNN' -> -105`. */
    u32 path_off = (cmd == 3 || cmd == 9) ? 6u : 0u;
    u32 plen = isfs_read_guest_path(ctx, in_buf + path_off,
                                    in_len > path_off ? in_len - path_off : 0,
                                    guest_path, sizeof(guest_path));
    s32 result = 0;

    if (!plen) {
        if (tls_nand_probe_on()) tls_nand_probe_slot("ISFS ioctl with no path -> -101 (EINVAL)");
        return -101;
    }

    u32 size = 0;
    int exists = isfs_host_file_size(guest_path, &size);
    fs_path_to_host(guest_path, host_path, sizeof(host_path));

    switch (cmd) {
    case 3: /* CreateDir */
        if (exists) {
            result = TLS_ISFS_EEXIST;
        } else {
            fs_make_parents(host_path);
#ifdef _WIN32
            CreateDirectoryA(host_path, NULL);
#endif
            result = 0;
            snprintf(made_path, sizeof(made_path), "mkdir %s", guest_path);
        }
        break;
    case 6: { /* GetAttr -> 0x4c reply in the layout fn_8061AD30 reads */
        if (!exists) {
            result = TLS_ISFS_ENOENT;
            break;
        }
        if (out_buf && out_len >= 0x4c) {
            memset(resolve_guest_pointer(ctx, out_buf), 0, out_len);
            mem_write32(ctx, out_buf + 0x00, size); /* +0: length   */
            mem_write16(ctx, out_buf + 0x04, 0);    /* +4: mode     */
            mem_write8(ctx, out_buf + 0x46, 0);     /* +0x46: group  */
            mem_write8(ctx, out_buf + 0x47, 0);     /* +0x47: attr   */
            mem_write8(ctx, out_buf + 0x48, 0);     /* +0x48: attr2  */
            mem_write8(ctx, out_buf + 0x49, 0);     /* +0x49: owner  */
        }
        break;
    }
    case 7: /* Delete */
        if (!exists) {
            result = TLS_ISFS_ENOENT;
            break;
        }
        if (remove(host_path) == 0) {
            snprintf(made_path, sizeof(made_path), "delete %s", guest_path);
        } else {
            result = TLS_ISFS_ENOENT;
        }
        break;
    case 8: { /* Rename(old, new): two 0x40-byte paths in one buffer */
        char new_path[80];
        /* 5c.42 J: the second path starts at the fixed offset 0x40, not after the
         * first path's NUL. fn_8061B290 copies the old path to +0 (up to 0x40) and
         * the new path to +0x40, and sends the pair as one 0x80-byte request. Using
         * plen+1 read inside the first slot and produced "a.dat" from
         * "/tmp/savedata.dat" - measured, and it renamed the finished save to the
         * wrong name. */
        u32 off = 0x40u;
        u32 n = isfs_read_guest_path(ctx, in_buf + off, in_len > off ? in_len - off : 0,
                                     new_path, sizeof(new_path));
        if (!exists) {
            result = TLS_ISFS_ENOENT;
        } else if (!n) {
            result = -101;
        } else {
            char host_new[160];
            fs_path_to_host(new_path, host_new, sizeof(host_new));
            remove(host_new);
            if (rename(host_path, host_new) == 0) {
                snprintf(made_path, sizeof(made_path), "rename %s -> %s", guest_path, new_path);
            } else {
                result = TLS_ISFS_ENOENT;
            }
        }
        break;
    }
    case 9: /* CreateFile: the guest writes the contents through IOS_Write */
        if (exists) {
            result = TLS_ISFS_EEXIST;
        } else {
#ifdef _WIN32
            CreateDirectoryA(TLS_NAND_DIR, NULL);
#endif
            fs_make_parents(host_path);
            FILE* f = fopen(host_path, "wb");
            if (!f) {
                result = -102; /* ISFS_EIO */
            } else {
                fclose(f);
                snprintf(made_path, sizeof(made_path), "create %s -> %s", guest_path, host_path);
                printf("[TLS ISFS] CreateFile '%s' -> %s\n", guest_path, host_path);
                fflush(stdout);
            }
        }
        break;
    default:
        /* Not a plain ioctl command: leave the buffer alone rather than inventing
         * a reply. The caller reports 0 like the hardware does for unknown cmds. */
        break;
    }

    if (tls_nand_probe_on()) {
        char msg[400];
        snprintf(msg, sizeof(msg), "ISFS ioctl cmd=%u path='%s' -> %d%s%s", cmd, guest_path,
                 result, made_path[0] ? " " : "", made_path[0] ? made_path : "");
        tls_nand_probe_slot(msg);
    }
    return result;
}

/* ---------------------------------------------------------------------------
 * /dev/es device model (5c.41 G).
 *
 * Measured: the game issues ES ioctlv cmd=32 with one 8-byte OUTPUT vector, and
 * cmd=29 with one 8-byte input plus one 30-byte OUTPUT vector. Nothing answered
 * them, so both replies stayed zero: the title id read back as 0 and the "home
 * directory" string came back empty. That is why every ISFS path this game builds
 * is root-relative ("/savedata.dat") instead of living under /title/<tid>/data as
 * Dolphin's NAND has it.
 *
 * The title is SLSEXJ, so title id = 0x00010000534C5345, and 30 bytes is exactly
 * "/title/00010000/534c5345/data" plus its NUL (29 characters) - the shape the
 * 30-byte vector asks for. Both answers come from the game's own title id.
 * ------------------------------------------------------------------------- */
#define TLS_TITLE_ID_HI 0x00010000u
#define TLS_TITLE_ID_LO 0x534C5345u
#define TLS_TITLE_DATA_DIR "/title/00010000/534c5345/data"

static s32 tls_es_ioctlv_service(CPUState* ctx, u32 cmd, u32 num_in, u32 num_io, u32 vecs) {
#define ES_VEC_DATA(i) mem_read32(ctx, vecs + (i) * 8)
#define ES_VEC_LEN(i) mem_read32(ctx, vecs + (i) * 8 + 4)
    if (cmd == 32 && num_io >= 1) {
        /* ES_GetTitleId -> u64 title id */
        u32 p = ES_VEC_DATA(num_in), len = ES_VEC_LEN(num_in);
        if (p && len >= 8 && resolve_guest_pointer(ctx, p)) {
            mem_write32(ctx, p + 0, TLS_TITLE_ID_HI);
            mem_write32(ctx, p + 4, TLS_TITLE_ID_LO);
            if (tls_nand_probe_on()) tls_nand_probe_slot("ES GetTitleId -> 0x00010000534C5345");
        }
    } else if (cmd == 29 && num_io >= 1) {
        /* the reply vector carries the title's data directory as a C string */
        u32 p = ES_VEC_DATA(num_in), len = ES_VEC_LEN(num_in);
        if (p && len >= 2 && resolve_guest_pointer(ctx, p)) {
            u32 maxn = (u32)(sizeof(TLS_TITLE_DATA_DIR) - 1);
            u32 n = (len - 1 < maxn) ? len - 1 : maxn;
            for (u32 i = 0; i < n; i++) mem_write8(ctx, p + i, (u8)TLS_TITLE_DATA_DIR[i]);
            mem_write8(ctx, p + n, 0);
            if (tls_nand_probe_on()) {
                char m[96];
                snprintf(m, sizeof(m), "ES cmd29 -> home dir '%s'", TLS_TITLE_DATA_DIR);
                tls_nand_probe_slot(m);
            }
        }
    }
#undef ES_VEC_DATA
#undef ES_VEC_LEN
    return 0;
}

/* Service an ISFS *ioctlv* (commands 4 ReadDir, 12 GetUsage). Returns the ISFS
 * result code, which the SDK's callback (_isfsFuncCb) only passes its payload
 * copy through when it is >= 0 - so an error code here is what makes the guest's
 * completion handler run at all. */
static s32 tls_isfs_ioctlv_service(CPUState* ctx, u32 fd, u32 cmd, u32 num_in, u32 num_io,
                                   u32 vecs) {
    tls_nand_host_init();
    char guest_path[80];
    char made_path[200] = {0};
    guest_path[0] = '\0';
    isfs_path_of_vec(ctx, vecs, 0, guest_path, sizeof(guest_path));
    s32 result = 0;

    /* Vector data/length accessors: vecs is an array of {void* data; u32 size;}. */
    #define ISFS_VEC_DATA(i) mem_read32(ctx, vecs + (i) * 8)
    #define ISFS_VEC_LEN(i)  mem_read32(ctx, vecs + (i) * 8 + 4)

    if (cmd == 4) {
        /* fn_8061AA80 / fn_8061ABE0: with an entries buffer the vectors are
         *   in  = {path, requested count}          io = {entries, returned count}
         * and with entries == NULL (count only)
         *   in  = {path}                           io = {returned count}. */
        u32 count_out = (num_in >= 2) ? ISFS_VEC_DATA(num_in + 1) : ISFS_VEC_DATA(1);
        u32 entries = (num_in >= 2) ? ISFS_VEC_DATA(num_in) : 0;
        u32 max_entries = (num_in >= 2) ? (ISFS_VEC_LEN(num_in) / 13) : 0;

        /* 5c.41 G: with /dev/es answering the home dir, the guest asks about real
         * paths ("/title/00010000/534c5345/data/savedata.dat"), so ReadDir is a
         * directory query on the mirrored host tree: a real directory lists, a file
         * answers -101 (EINVAL, "not a directory"), a missing path -106. */
        char host_dir[192];
        fs_path_to_host(guest_path, host_dir, sizeof(host_dir));
        if (fs_host_is_dir(host_dir)) {
            u32 count = isfs_host_dir_count(host_dir);
            if (entries && count_out) {
                u32 want = max_entries ? max_entries : count;
                u32 written = isfs_host_dir_entries(ctx, entries, want, host_dir);
                mem_write32(ctx, count_out, written);
                snprintf(made_path, sizeof(made_path), "listing %u/%u", written, count);
            } else if (count_out) {
                mem_write32(ctx, count_out, count);
                snprintf(made_path, sizeof(made_path), "count %u", count);
            }
        } else {
            /* A save file is not a directory. The guest's ReadDir callback has no
             * "success, zero entries" case, so a truthful "not a directory" error
             * is what lets the NAND layer continue instead of going quiet. */
            u32 size = 0;
            result = isfs_host_file_size(guest_path, &size) ? -101 /* EINVAL: not a dir */
                                                            : TLS_ISFS_ENOENT;
            if (count_out) mem_write32(ctx, count_out, 0);
        }
    } else if (cmd == 12) {
        /* fn_8061B3A0: {path} in, {u32 used, u32 used} out. fn_80622310 walks a
         * 20-entry path table accumulating both words; it tests for -0x6a and
         * keeps going, so "missing" must be an error, not a zero. */
        u32 out0 = (num_io >= 1) ? ISFS_VEC_DATA(num_in) : 0;
        u32 out1 = (num_io >= 2) ? ISFS_VEC_DATA(num_in + 1) : 0;
        u32 size = 0;
        char host_dir12[192];
        fs_path_to_host(guest_path, host_dir12, sizeof(host_dir12));
        if (isfs_host_file_size(guest_path, &size)) {
            if (out0) mem_write32(ctx, out0, isfs_blocks_for_size(size));
            if (out1) mem_write32(ctx, out1, 1); /* one file */
            snprintf(made_path, sizeof(made_path), "%u blocks, 1 file of %u bytes",
                     isfs_blocks_for_size(size), size);
        } else if (fs_host_is_dir(host_dir12)) {
            u32 n = isfs_host_dir_count(host_dir12);
            if (out0) mem_write32(ctx, out0, 0);
            if (out1) mem_write32(ctx, out1, n);
            snprintf(made_path, sizeof(made_path), "0 blocks, %u entries", n);
        } else {
            result = TLS_ISFS_ENOENT;
        }
    }

    #undef ISFS_VEC_DATA
    #undef ISFS_VEC_LEN

    if (tls_nand_probe_on()) {
        char msg[400];
        snprintf(msg, sizeof(msg), "ISFS cmd=%u fd=%u nin=%u nio=%u path='%s' -> %d%s%s",
                 cmd, fd, num_in, num_io, guest_path, result,
                 made_path[0] ? " " : "", made_path[0] ? made_path : "");
        tls_nand_probe_slot(msg);
    }
    return result;
}

/* Wait-loop probe. The Chapter 1 handoff wedges with the guest parked inside
 * OSSleepThread on the queue at 0x807C6F60, called from the drain loop at
 * 0x80071CFC..0x80071D44, ~175 times per frame. That loop reads two halfwords
 * (0x807C6FB8 / 0x807C6FBA) and keeps sleeping while their difference says the
 * producer is more than one entry ahead of the consumer - so either the counter
 * is never advanced by whatever "consumes" it, or the waiter is not the party
 * that is supposed to be woken. Name the waiter (guest back chain) and the exact
 * counter values instead of guessing which of those it is.
 * Inert unless TLS_WAIT_PROBE=1. */
static void tls_wait_probe(CPUState* ctx, u32 queue_addr) {
    static int s_enabled = -1;
    static int s_all = 0;
    static u32 s_calls = 0;
    static u32 s_reports = 0;
    static u32 s_seen_q[16];
    static int s_seen_n = 0;
    if (s_enabled < 0) {
        const char* env = getenv("TLS_WAIT_PROBE");
        s_enabled = env ? 1 : 0;
        s_all = (env && env[0] == 'a') ? 1 : 0;   /* TLS_WAIT_PROBE=all */
    }
    if (!s_enabled) return;
    if (!s_all && (queue_addr < 0x807C0000u || queue_addr >= 0x807D0000u)) return;

    s_calls++;
    bool full = false;
    if (s_all) {
        /* One detailed report per distinct queue: regime matters, per-call spam
         * does not. */
        int known = 0;
        for (int i = 0; i < s_seen_n; i++) if (s_seen_q[i] == queue_addr) known = 1;
        if (known) return;
        if (s_seen_n < 16) s_seen_q[s_seen_n++] = queue_addr;
        full = true;
    } else {
        full = (s_calls <= 6) || (s_calls % 2000u) == 0u;
        if (!full && (s_calls % 250u) != 0u) return;
        if (!full && s_reports > 400u) return;
    }
    s_reports++;

    u32 w = mem_read16(ctx, 0x807C6FB8);
    u32 r = mem_read16(ctx, 0x807C6FBA);
    u32 runbits = mem_read32(ctx, 0x8087FC60);
    u32 cur = mem_read32(ctx, 0x800000E4);
    u32 tstate = cur ? (u32)mem_read16(ctx, cur + 0x2C8) : 0;
    s32 tsusp = cur ? (s32)mem_read32(ctx, cur + 0x2CC) : 0;
    u32 tqueue = cur ? mem_read32(ctx, cur + 0x2DC) : 0;
    printf("[TLS WAIT] #%u q=0x%08X W=%u R=%u lr=0x%08X runbits=0x%08X cur=0x%08X st=%u susp=%d tq=0x%08X r30=0x%08X\n",
           s_calls, queue_addr, w, r, ctx->lr, runbits, cur, tstate, tsusp, tqueue, ctx->gpr[30]);
    if (full) {
        /* Guest stack walk: each frame starts with the caller's SP then its LR. */
        u32 sp = ctx->gpr[1];
        for (int depth = 0; depth < 10; depth++) {
            if (sp < 0x80000000u || sp >= 0x84000000u || (sp & 3u)) break;
            u32 back = mem_read32(ctx, sp);
            u32 saved_lr = mem_read32(ctx, sp + 4);
            printf("           frame %d sp=0x%08X lr=0x%08X back=0x%08X\n",
                   depth, sp, saved_lr, back);
            if (back <= sp) break;
            sp = back;
        }
    }
    fflush(stdout);
}

/* Registry of every OSThreadQueue the guest has slept on, plus a dump of the
 * ones that still hold waiters. The Chapter 1 wedge leaves the guest parked in
 * the OS idle loop (0x805F50B0) with RunQueueBits == 0, which means every thread
 * is blocked and nothing on the host side ever signals the queue they are on.
 * Enumerating the still-occupied queues names the missing wake source directly
 * instead of guessing at it. */
#define TLS_SLEEP_QUEUE_MAX 48
static u32 s_sleep_queues[TLS_SLEEP_QUEUE_MAX];
static u32 s_sleep_queue_lr[TLS_SLEEP_QUEUE_MAX];
static u32 s_sleep_queue_count = 0;

static void tls_note_sleep_queue(u32 queue_addr, u32 caller_lr) {
    if (queue_addr < 0x80000000u || queue_addr >= 0x94000000u) return;
    for (u32 i = 0; i < s_sleep_queue_count; i++) {
        if (s_sleep_queues[i] == queue_addr) return;
    }
    if (s_sleep_queue_count < TLS_SLEEP_QUEUE_MAX) {
        s_sleep_queue_lr[s_sleep_queue_count] = caller_lr;
        s_sleep_queues[s_sleep_queue_count++] = queue_addr;
    }
}
void tls_dump_sleep_queues(CPUState* ctx) {
    printf("\n[Runner] OSThreadQueues that still hold waiters (%u queues observed):\n",
           s_sleep_queue_count);
    for (u32 i = 0; i < s_sleep_queue_count; i++) {
        u32 q = s_sleep_queues[i];
        u32 head = mem_read32(ctx, q);
        if (!head) continue;
        if (head < 0x80000000u || head >= 0x94000000u) {
            printf("         queue 0x%08X: head 0x%08X (not a thread pointer)\n", q, head);
            continue;
        }
        printf("         queue 0x%08X (first sleep from lr=0x%08X):\n", q, s_sleep_queue_lr[i]);
        u32 t = head;
        for (int n = 0; n < 8 && t >= 0x80000000u && t < 0x94000000u; n++) {
            u16 state = mem_read16(ctx, t + 0x2C8);
            s32 susp = (s32)mem_read32(ctx, t + 0x2CC);
            u32 prio = mem_read32(ctx, t + 0x2D0);
            u32 srr0 = mem_read32(ctx, t + 0x198);   /* context.srr0 = resume PC */
            u32 lr = mem_read32(ctx, t + 0x084);     /* context.lr */
            u32 sp = mem_read32(ctx, t + 0x004);     /* context.gpr[1] */
            printf("            thread 0x%08X state=%u susp=%d prio=%u resumePC=0x%08X lr=0x%08X sp=0x%08X\n",
                   t, state, susp, prio, srr0, lr, sp);
            /* Walk the blocked thread's own stack: each frame stores the caller's
             * SP then the caller's LR, so these return addresses name the call
             * chain that blocked it. */
            u32 f = sp;
            for (int depth = 0; depth < 6; depth++) {
                if (f < 0x80000000u || f >= 0x84000000u || (f & 3u)) break;
                u32 back = mem_read32(ctx, f);
                printf("               sp=0x%08X callerLR=0x%08X back=0x%08X\n",
                       f, mem_read32(ctx, f + 4), back);
                if (back <= f) break;
                f = back;
            }
            u32 next = mem_read32(ctx, t + 0x2E0);
            if (next == t) break;
            t = next;
        }
    }
    fflush(stdout);
}

/* Wake registry: who signals which OSThreadQueue. A deadlock is usually a queue
 * that has waiters and never receives a wakeup, so counting OSWakeupThread per
 * queue (and printing the first caller) separates "nobody signals it" from "the
 * signal is delivered but does not release the waiter". Dumped at shutdown. */
#define TLS_WAKE_QUEUE_MAX 64
static u32 s_wake_q[TLS_WAKE_QUEUE_MAX];
static u32 s_wake_count[TLS_WAKE_QUEUE_MAX];
static u32 s_wake_lr[TLS_WAKE_QUEUE_MAX];
static u32 s_wake_qn = 0;

static void tls_note_wake(u32 queue_addr, u32 caller_lr) {
    if (queue_addr < 0x80000000u || queue_addr >= 0x94000000u) return;
    for (u32 i = 0; i < s_wake_qn; i++) {
        if (s_wake_q[i] == queue_addr) { s_wake_count[i]++; return; }
    }
    if (s_wake_qn < TLS_WAKE_QUEUE_MAX) {
        s_wake_q[s_wake_qn] = queue_addr;
        s_wake_count[s_wake_qn] = 1;
        s_wake_lr[s_wake_qn] = caller_lr;
        s_wake_qn++;
    }
}

void tls_dump_wake_queues(CPUState* ctx) {
    (void)ctx;
    printf("\n[Runner] OSWakeupThread calls per queue (%u queues signalled):\n", s_wake_qn);
    for (u32 i = 0; i < s_wake_qn; i++) {
        printf("         0x%08X  x%-6u first caller lr=0x%08X\n",
               s_wake_q[i], s_wake_count[i], s_wake_lr[i]);
    }
    fflush(stdout);
}

/* Method activity taps. When the Chapter-1 task stops progressing it is not
 * obvious which of the four sequence-unit methods (IsReady / Init / Update /
 * Draw) stopped being called first, and "no Update" looks the same whether the
 * driver stopped or the task refused to advance. Record count + first/last frame
 * per method and print them at shutdown. */
#define TLS_TAPS 8
static const char* s_tap_name[TLS_TAPS];
static u32 s_tap_count[TLS_TAPS];
static int s_tap_first[TLS_TAPS];
static int s_tap_last[TLS_TAPS];

static void tls_tap(int id, const char* name, int frame) {
    if (id < 0 || id >= TLS_TAPS) return;
    if (s_tap_count[id] == 0) {
        s_tap_name[id] = name;
        s_tap_first[id] = frame;
    }
    s_tap_count[id]++;
    s_tap_last[id] = frame;
}

void tls_dump_taps(void) {
    printf("\n[Runner] Method activity (first/last frame each was dispatched):\n");
    for (int i = 0; i < TLS_TAPS; i++) {
        if (s_tap_count[i] == 0) continue;
        printf("         %-24s calls=%-6u first=%-5d last=%-5d\n",
               s_tap_name[i] ? s_tap_name[i] : "?", s_tap_count[i],
               s_tap_first[i], s_tap_last[i]);
    }
    fflush(stdout);
}

/* Tail ring of OSSleepThread calls. First-sleep-per-queue (TLS_WAIT_PROBE=all)
 * lists the queues in use but not which sleep came last: when the whole engine
 * loop stops at one particular frame, the final sleeps identify the thread that
 * never came back. TLS_SLEEP_TAIL=1 keeps the last 32 and prints them at
 * shutdown with the queue, the caller and the sleeping thread. */
#define TLS_SLEEP_TAIL_N 32
static u32 s_sleep_tail_q[TLS_SLEEP_TAIL_N];
static u32 s_sleep_tail_lr[TLS_SLEEP_TAIL_N];
static u32 s_sleep_tail_thr[TLS_SLEEP_TAIL_N];
static int s_sleep_tail_frame[TLS_SLEEP_TAIL_N];
static u32 s_sleep_tail_n = 0;
static u32 s_sleep_tail_pos = 0;
static int s_sleep_tail_on = -1;

static void tls_note_sleep_tail(CPUState* ctx, u32 queue_addr) {
    extern int g_runner_current_frame;
    if (s_sleep_tail_on < 0) s_sleep_tail_on = getenv("TLS_SLEEP_TAIL") ? 1 : 0;
    if (!s_sleep_tail_on) return;
    s_sleep_tail_q[s_sleep_tail_pos] = queue_addr;
    s_sleep_tail_lr[s_sleep_tail_pos] = ctx->lr;
    s_sleep_tail_thr[s_sleep_tail_pos] = mem_read32(ctx, 0x800000E4);
    s_sleep_tail_frame[s_sleep_tail_pos] = g_runner_current_frame;
    s_sleep_tail_pos = (s_sleep_tail_pos + 1) % TLS_SLEEP_TAIL_N;
    if (s_sleep_tail_n < TLS_SLEEP_TAIL_N) s_sleep_tail_n++;
}

void tls_dump_sleep_tail(void) {
    if (s_sleep_tail_n == 0) return;
    printf("\n[Runner] Last %u OSSleepThread calls (oldest first):\n", s_sleep_tail_n);
    for (u32 i = 0; i < s_sleep_tail_n; i++) {
        u32 idx = (s_sleep_tail_pos + TLS_SLEEP_TAIL_N - s_sleep_tail_n + i) % TLS_SLEEP_TAIL_N;
        printf("         frame=%-5d thread=0x%08X queue=0x%08X lr=0x%08X\n",
               s_sleep_tail_frame[idx], s_sleep_tail_thr[idx],
               s_sleep_tail_q[idx], s_sleep_tail_lr[idx]);
    }
    fflush(stdout);
}

void tls_dump_watched_object(CPUState* ctx) {
    const char* env = getenv("TLS_DUMP_OBJ");
    if (!env) return;
    u32 base = (u32)strtoul(env, NULL, 0);
    if (base < 0x80000000u || !resolve_guest_pointer(ctx, base)) return;
    printf("\n[Runner] Object dump at 0x%08X (TLS_DUMP_OBJ):\n", base);
    for (u32 off = 0; off < 0x80; off += 16) {
        printf("         0x%08X:", base + off);
        for (u32 j = 0; j < 16; j += 4) printf(" %08X", mem_read32(ctx, base + off + j));
        printf("\n");
    }
    /* Follow the first heap-looking pointers: a stalled operation manager keeps
     * its pending request in one of its fields, and request objects often carry
     * the source file name as inline text. */
    for (u32 off = 0; off < 0x40; off += 4) {
        u32 p = mem_read32(ctx, base + off);
        if (p < 0x80000000u || p >= 0x94000000u || (p & 3u) || !resolve_guest_pointer(ctx, p)) continue;
        printf("         -> [0x%02X] 0x%08X:\n", off, p);
        for (u32 k = 0; k < 0x40; k += 16) {
            printf("            0x%08X:", p + k);
            for (u32 j = 0; j < 16; j += 4) printf(" %08X", mem_read32(ctx, p + k + j));
            printf("\n");
        }
        for (u32 off2 = 0; off2 < 0x40; off2++) {
            const char* s = (const char*)resolve_guest_pointer(ctx, p + off2);
            if (!s) continue;
            if ((s[0] >= 'a' && s[0] <= 'z') && (s[1] >= 'a' && s[1] <= 'z') && s[2] == '/') {
                printf("            name@0x%02X: '%s'\n", off2, s);
                break;
            }
        }
    }
    fflush(stdout);
}

/* The anime-track "safeguards" that used to live here clamped gpr[24], gpr[25] and
 * the words at 300(r26)/316(r29) whenever they exceeded 256. Their premise was wrong:
 * the recompiled code at 0x80200D00 loads 304(r26) - a pointer - and 0x80200D7C loads
 * 312(r29); neither is a track count, so the clamps rewrote memory the loop never
 * reads. One of them also zeroed gpr[24] before fn_801FFA04 sized a staging buffer,
 * which left the buffer NULL and made the engine memcpy animation data to address 0,
 * destroying __OSCurrentThread at 0x800000E4 and the rest of the OS low page. Verified
 * by TLS_MEMCPY_PROBE: memcpy(dst=0x00000000, src=0x90303F14, len=450) from
 * lr=0x801FFFB4 stopped happening once the generated chunks were re-lifted with
 * DolRecomp and the in-chunk copies of these clamps were gone. They are removed for
 * good; TLS_MEMCPY_PROBE / TLS_WATCH_CURRENT_THREAD still watch for their return. */

/* Fixed-size ring of the last TLS_TAIL_N dispatches with the whole argument set.
 * The 64-entry tls_dump_recent_calls ring is too coarse to follow one deep call
 * chain into a bad return, and streaming every dispatch from a frame boundary
 * would overflow before the defect. Keeping a 256-dispatch tail in memory and
 * dumping it at the moment the guest leaves code shows the exact call chain.
 * Inert unless TLS_TAIL_RING=1. */
#define TLS_TAIL_N 256
typedef struct {
    u32 pc, lr, sp, r3, r4, r5, r6, r7, ctr;
    int frame;
    int cb;
} TlsTailEntry;
static TlsTailEntry s_tailbuf[TLS_TAIL_N];
static u32 s_tailpos = 0, s_tailcount = 0;

static int tls_tail_enabled(void) {
    static int s_on = -1;
    if (s_on < 0) s_on = getenv("TLS_TAIL_RING") ? 1 : 0;
    return s_on;
}

static void tls_tail_push(CPUState* ctx, u32 pc) {
    if (!tls_tail_enabled()) return;
    extern int g_runner_current_frame;
    TlsTailEntry* e = &s_tailbuf[s_tailpos];
    e->pc = pc; e->lr = ctx->lr; e->sp = ctx->gpr[1];
    e->r3 = ctx->gpr[3]; e->r4 = ctx->gpr[4]; e->r5 = ctx->gpr[5];
    e->r6 = ctx->gpr[6]; e->r7 = ctx->gpr[7]; e->ctr = ctx->ctr;
    e->frame = g_runner_current_frame; e->cb = g_host_callback_depth;
    s_tailpos = (s_tailpos + 1) % TLS_TAIL_N;
    if (s_tailcount < TLS_TAIL_N) s_tailcount++;
}

static void tls_tail_dump(const char* why) {
    if (!tls_tail_enabled() || s_tailcount == 0) return;
    printf("\n[TLS TailRing] %s - last %u dispatches (oldest first):\n", why, s_tailcount);
    for (u32 i = 0; i < s_tailcount; i++) {
        u32 idx = (s_tailpos + TLS_TAIL_N - s_tailcount + i) % TLS_TAIL_N;
        TlsTailEntry* e = &s_tailbuf[idx];
        printf("   f=%d cb=%d pc=0x%08X lr=0x%08X sp=0x%08X r3=0x%08X r4=0x%08X r5=0x%08X "
               "r6=0x%08X r7=0x%08X ctr=0x%08X\n",
               e->frame, e->cb, e->pc, e->lr, e->sp, e->r3, e->r4, e->r5, e->r6, e->r7, e->ctr);
    }
    fflush(stdout);
}

/* ---- Mode-25 handover probe (handover 5c.25) ------------------------------
 * Mode 25 is the title's LAST mode (jump table 0x807939B8[25] -> 0x80535B14) and
 * it is the one that actually hands the game over: its state-0 path ends in
 * `fn_80572B70(..., "Game")` (0x80535D00), which stores a name->id lookup of the
 * sequence "Game" into g_seqmgr->[80]. Everything else is gating:
 *
 *   0x80535B34  r3 = *(u32*)(task + 0x2C8);        // object made by fn_8006A250
 *   0x80535B38  r0 = *(u32*)(r3 + 76);
 *   0x80535B3C  if (r0 < 60) return;               // gate A: counter must reach 60
 *   0x80535B44  if (fn_800CB538(task + 0x284) != 0) return;   // gate B: handle idle
 *   0x80535B6C  switch (*(u32*)(task + 0x2B4)) { 0: build req; 1/2: log only }
 *
 * fn_800CB538(slot) is `slot[0] ? progressOf(slot[0][4]) : 0` and progressOf is
 * fn_8070ABE0's ratio of fields +108/+112, reduced to "is it non-zero" - so gate B
 * opens when the handle's object reports zero progress (either not started or
 * finished; the difference is what this probe measures).
 *
 * TLS_MODE25_PROBE=1 dumps gate A's counter and gate B's handle whenever either
 * changes, plus a periodic line while stuck. Inert unless set. */
static int tls_mode25_probe_on(void) {
    static int s = -1;
    if (s < 0) s = getenv("TLS_MODE25_PROBE") ? 1 : 0;
    return s;
}
static u32 g_m25_task = 0;        /* task pointer seen in mode 25 (for gate B) */
static u32 g_m25_cb_n = 0;        /* fn_800CB538 calls seen for that handle */
static int g_m25_seen = 0;

/* ---- Chapter-1 scene state machine probe (handover 5c.26) -------------------
 * `GameTask::Update` (0x80368280) is entered with r3 = the game task object.
 * Its state word is +0x5538 (21816): compared against 9 at 0x8036830C and
 * dispatched through a jump table built as
 *
 *     0x80368314  lis  r4, 0x8079
 *     0x8036831C  addi r4, r4, -23960      -> 0x8078A268
 *
 * NOTE: 5c.25 recorded that table as 0x8079A268; the words at 0x8079A268 are
 * float data (0x3CADB61C, ...) and decode as nonsense instructions. The real
 * table entries, read from the DOL, are
 *
 *   0 -> 0x8036A10C (just `b 0x8036B420`; state 0 itself is taken by the
 *                    `beq` at 0x80368304, which lands on 0x8036A110)
 *   1 -> 0x8036832C   2 -> 0x8036881C   3 -> 0x80368864   4 -> 0x80368B94
 *   5 -> 0x80368DB8   6 -> 0x803690EC   7 -> 0x8036919C   8 -> 0x803691EC
 *   9 -> 0x80369454   >9 -> 0x8036B420 (the shared tail)
 *
 * +0x5744 is the frame counter the function increments first, +0x5748 a
 * countdown it decrements, and +0x4424 a 15-frame clock derived from +0x5744
 * by the two `mulhw` steps at 0x803682EC..0x803682FC.
 *
 * `blr` leaves the chunk through dolrecomp_call, so every jump-table entry is
 * seen by this dispatcher exactly once per dispatch - which is what the hit
 * counters below count.
 *
 * TLS_SCENE_SM_PROBE=1 logs the state word on every change (with the operands
 * the state's own handler will test) and a heartbeat every 120 entries. Inert
 * unless set. */
static int tls_scene_sm_probe_on(void) {
    static int s = -1;
    if (s < 0) s = getenv("TLS_SCENE_SM_PROBE") ? 1 : 0;
    return s;
}
static u32 g_ssm_task = 0;
static u32 g_ssm_state = 0xFFFFFFFFu;
static u32 g_ssm_phase = 0xFFFFFFFFu;
static u32 g_ssm_hits[10];
static long g_ssm_entries = 0;
static int g_ssm_call_1231 = 0;
static int g_ssm_call_3e44 = 0;
static int g_ssm_g0_call = 0;
static u32 g_ssm_last_cmd = 0xFFFFFFFFu;
static int g_ph13_update_calls = 0;
static u32 g_ssm_g2w = 0xFFFFFFFFu;

/* Chapter-1 sub-phase machine (a SECOND jump table, not the +0x5538 one).
 * State 0's common tail at 0x8036A444 dispatches on +0x54E4:
 *     0x8036A450  lis r3, 0x8079
 *     0x8036A458  addi r3, r3, -24020        -> 0x8078A22C
 *     0x8036A45C  lwzx; mtlr; blr
 * decode (0..14): 0->8036A554 1->8036A468 2,3,4->8036B198(tail) 5->8036A484
 * 6->8036A8E8 7->8036A940 8->8036AAB8 9->8036B01C 10,11->8036B058
 * 12->8036B110 13->8036B134 14->8036AA44
 * Phase 1 (0x8036A468) is the one that clears +0x54F0, and GameTask::Init
 * (0x8036F5D8) sets the OUTER state to *(task+0x54F0)+1 - so phase 1 is the
 * bridge from "outer state 0, no game" to the playable states. */
static const u32 g_ssm_phase_entry[15] = {
    0x8036A554u, 0x8036A468u, 0x8036B198u, 0x8036B198u, 0x8036B198u,
    0x8036A484u, 0x8036A8E8u, 0x8036A940u, 0x8036AAB8u, 0x8036B01Cu,
    0x8036B058u, 0x8036B058u, 0x8036B110u, 0x8036B134u, 0x8036AA44u
};

static void tls_scene_sm_hit(int idx) {
    if (!tls_scene_sm_probe_on()) return;
    if (idx >= 0 && idx < 10) g_ssm_hits[idx]++;
}

/* Task-manager census (handover 5c.30 synthesis): the Chapter-1 stall and "no
 * player/scene task is ever created" may be the same defect seen from two ends.
 * [0x8087EE94] is the task manager; +0 is the count, +8 the array, 20 bytes per
 * slot (+12 update fn, +16 task). Print on EVERY change so a transient
 * registration cannot hide between the periodic telemetry dumps. */
static void tls_task_census(CPUState* ctx) {
    extern int g_runner_current_frame;
    static u32 s_cnt = 0xFFFFFFFFu;
    u32 mgr = mem_read32(ctx, 0x8087EE94u);
    if (!mgr) return;
    u32 cnt = mem_read32(ctx, mgr);
    if (cnt == s_cnt) return;
    s_cnt = cnt;
    {
        u32 arr = mem_read32(ctx, mgr + 8);
        u32 i;
        printf("[TLS SceneSM] f=%d TASKS count=%u arr=0x%08X:", g_runner_current_frame, cnt, arr);
        for (i = 0; i < cnt && i < 8; i++) {
            u32 slot = arr + i * 20u;
            printf(" [%u up=0x%08X task=0x%08X]", i, mem_read32(ctx, slot + 12),
                   mem_read32(ctx, slot + 16));
        }
        printf("\n");
        fflush(stdout);
    }
}

static void tls_scene_sm_enter(CPUState* ctx, u32 task) {
    extern int g_runner_current_frame;
    tls_task_census(ctx);
    /* Sequence manager census. The telemetry dump has said `Sequence: 'UnknownSeq'` for
     * the WHOLE Chapter-1 run, which was never questioned. If the manager never actually
     * switched to the 'Game' sequence, then everything the sequence's own setup does -
     * including creating the player/scene task - never runs, and the phase-13 stall is a
     * symptom of that. SetNextSequence only stores a pending id (g->[80]); the transition
     * itself has to move it into the current-sequence fields. Print them on change. */
    {
        static u32 s_key = 0xFFFFFFFFu;
        /* The REAL sequence manager is *(r13-26368) - the object SetNextSequence uses
         * (measured 0x80BB5CC0). [0x8087EE90] (0x80E9DB00) is a DIFFERENT object whose
         * +0x48/+0x50/+0x80 are all zero; reading it produced a false "the sequence was
         * never set" reading. SetNextSequence('Game') does succeed: it stores id 12 into
         * manager+80 (measured at frame 1728). So watch +80 (pending) and the surrounding
         * fields for the transition being consumed. */
        u32 mgr = mem_read32(ctx, ctx->gpr[13] - 26368u);
        if (mgr) {
            u32 f76 = mem_read32(ctx, mgr + 76);
            u32 f80 = mem_read32(ctx, mgr + 80);
            u32 f84 = mem_read32(ctx, mgr + 84);
            u32 f88 = mem_read32(ctx, mgr + 88);
            u32 key = (f80 & 0xFFu) | ((f84 & 0xFFu) << 8) | ((f88 & 0xFFu) << 16);
            if (key != s_key) {
                s_key = key;
                printf("[TLS SceneSM] f=%d SEQ mgr=0x%08X at76=0x%08X at80=0x%08X at84=0x%08X at88=0x%08X\n",
                       g_runner_current_frame, mgr, f76, f80, f84, f88);
                /* at88 looks like the current-sequence object; +4 is what the telemetry
                 * helper treats as a name pointer. Dump the leading words and any
                 * resolvable strings so the sequence can be NAMED, not just numbered. */
                if (f88 >= 0x80000000u && f88 < 0x83000000u) {
                    int i;
                    u32 sp  = mem_read32(ctx, f88 + 4);
                    u32 sp2 = mem_read32(ctx, f88 + 8);
                    const char* s1 = (sp  >= 0x80000000u && sp  < 0x83000000u) ?
                                     (const char*)resolve_guest_pointer(ctx, sp) : 0;
                    const char* s2 = (sp2 >= 0x80000000u && sp2 < 0x83000000u) ?
                                     (const char*)resolve_guest_pointer(ctx, sp2) : 0;
                    printf("[TLS SceneSM] f=%d SEQOBJ 0x%08X:", g_runner_current_frame, f88);
                    for (i = 0; i < 8; i++) printf(" %08X", mem_read32(ctx, f88 + (u32)i * 4));
                    printf(" | +4:%s | +8:%s\n",
                           (s1 && s1[0] >= 0x20 && s1[0] <= 0x7E) ? s1 : "-",
                           (s2 && s2[0] >= 0x20 && s2[0] <= 0x7E) ? s2 : "-");
                    /* One-shot deeper dump: if the 'Game' sequence carries a step/progress
                     * field, it should be somewhere in here - and a stuck counter would name
                     * the thing that never advances. */
                    {
                        static int s_deep = 0;
                        if (!s_deep) {
                            s_deep = 1;
                            printf("[TLS SceneSM] f=%d SEQOBJ24 0x%08X:", g_runner_current_frame, f88);
                            for (i = 0; i < 24; i++)
                                printf(" %08X", mem_read32(ctx, f88 + (u32)i * 4));
                            printf("\n");
                        }
                    }
                    /* The words at +0x48..+0x5C are small integers (measured 0,2,4,1 at
                     * frame 2115) - the shape of a step/index set. Watch them: a counter
                     * that should advance but never does names the stuck step. */
                    {
                        static u32 s_ck = 0xFFFFFFFFu;
                        u32 w48 = mem_read32(ctx, f88 + 0x48);
                        u32 w4c = mem_read32(ctx, f88 + 0x4C);
                        u32 w50 = mem_read32(ctx, f88 + 0x50);
                        u32 w54 = mem_read32(ctx, f88 + 0x54);
                        u32 w58 = mem_read32(ctx, f88 + 0x58);
                        u32 ck = (w48 & 0xFFu) | ((w4c & 0xFFu) << 8) |
                                 ((w50 & 0xFFu) << 16) | ((w54 & 0xFFu) << 24);
                        (void)w58;
                        if (ck != s_ck) {
                            s_ck = ck;
                            printf("[TLS SceneSM] f=%d SEQSTEP +48=%u +4C=%u +50=%u +54=%u +58=%u\n",
                                   g_runner_current_frame, w48, w4c, w50, w54, w58);
                            fflush(stdout);
                        }
                    }
                }
                fflush(stdout);
            }
        }
    }
    u32 st  = mem_read32(ctx, task + 0x5538);
    u32 ctr = mem_read32(ctx, task + 0x5744);
    u32 cd  = mem_read32(ctx, task + 0x5748);
    u32 clk = mem_read32(ctx, task + 0x4424);
    int changed = (st != g_ssm_state || task != g_ssm_task);
    u32 ph = mem_read32(ctx, task + 0x54E4);
    u32 g2v = mem_read32(ctx, ctx->gpr[13] - 25136u);
    u32 g2ok_v = (g2v >= 0x80000000u && g2v < 0x83000000u) ? g2v : 0;
    u32 g2_3468 = g2ok_v ? mem_read32(ctx, g2ok_v + 3468) : 0;
    g_ssm_entries++;
    if (g2_3468 != g_ssm_g2w) {
        printf("[TLS SceneSM] f=%d g2_3468 %u -> %u (phase=%u state=%u)\n",
               g_runner_current_frame, g_ssm_g2w, g2_3468, ph, st);
        fflush(stdout);
        g_ssm_g2w = g2_3468;
    }
    if (ph != g_ssm_phase) {
        printf("[TLS SceneSM] f=%d PHASE %d -> %u (outer state=%u ctr=%u f54e8=%u f54ec=%u f54f0=0x%08X)\n",
               g_runner_current_frame, (int)g_ssm_phase, ph, st, ctr,
               mem_read32(ctx, task + 0x54E8), mem_read32(ctx, task + 0x54EC),
               mem_read32(ctx, task + 0x54F0));
        fflush(stdout);
        g_ssm_phase = ph;
    }
    if (changed) {
        int i;
        printf("[TLS SceneSM] f=%d ENTER obj=0x%08X state=%u (was %d) ctr=%u cd=%u clk=%u prev_hits=",
               g_runner_current_frame, task, st, (int)g_ssm_state, ctr, cd, clk);
        for (i = 0; i < 10; i++) printf("%s%u", i ? "," : "", g_ssm_hits[i]);
        printf("\n");
        fflush(stdout);
        memset(g_ssm_hits, 0, sizeof(g_ssm_hits));
        g_ssm_state = st;
        g_ssm_task  = task;
    }
    if (changed || (g_ssm_entries % 120) == 0) {
        /* State-0's own gate chain, read at its offsets (0x8036A110..):
         *   0x8036A1C8  g = *(r13 - 26136); if (*(g + 404) == 0) -> tail
         *   0x8036A1D8  f54e4 = *(task + 0x54E4); if == 8 -> ctr--
         *   0x8036A1F0  if (ctr < 0x5460) -> tail
         *   0x8036A1FC  if (f54e4 == 6) { handle = *(task+0x575C); ... }
         *   0x8036A224  if (*(task+0x575C) == 0) -> create the object via fn_8006A250
         * so print all of them verbatim rather than reading the branches. */
        u32 gA   = mem_read32(ctx, ctx->gpr[13] - 26136u);
        u32 gAok = (gA >= 0x80000000u && gA < 0x83000000u) ? gA : 0;
        u32 a404 = gAok ? mem_read32(ctx, gAok + 404) : 0;
        u32 gB   = mem_read32(ctx, ctx->gpr[13] - 24096u);
        u32 gBok = (gB >= 0x80000000u && gB < 0x83000000u) ? gB : 0;
        u32 b72  = gBok ? mem_read32(ctx, gBok + 72) : 0;
        u32 bOk2 = (b72 >= 0x80000000u && b72 < 0x83000000u) ? b72 : 0;
        u32 f54e4 = mem_read32(ctx, task + 0x54E4);
        u32 f54e8 = mem_read32(ctx, task + 0x54E8);
        u32 f54ec = mem_read32(ctx, task + 0x54EC);
        u32 f566c = mem_read32(ctx, task + 0x566C);
        u32 f5674 = mem_read32(ctx, task + 0x5674);
        u32 f575c = mem_read32(ctx, task + 0x575C);
        u32 f5624 = mem_read32(ctx, task + 0x5624);
        u32 f56ec = mem_read32(ctx, task + 0x56EC);
        u32 f10d8 = mem_read32(ctx, task + 0x10D8);
        /* Phase 0's success gate (0x8036A554..0x8036A5C0):
         *   g2 = *(r13 - 25136)
         *   if (g2->[3468] == 1 && fn_801231D0(singleton + 0x48C, 1)) {
         *       fn_803E4478(g2);        <- the only path out of phase 0 that
         *       return tail;               does any work
         *   }
         * so print g2 and its +3468 word, and count the two calls. */
        {
            u32 g2   = mem_read32(ctx, ctx->gpr[13] - 25136u);
            u32 g2ok = (g2 >= 0x80000000u && g2 < 0x83000000u) ? g2 : 0;
            u32 sub  = gAok ? gAok + 0x48C : 0;
            printf("[TLS SceneSM] f=%d GATES2 phase=%u g2=0x%08X g2_3468=%u | "
                   "call801231D0=%d call803E4478=%d\n",
                   g_runner_current_frame, ph, g2ok,
                   g2ok ? mem_read32(ctx, g2ok + 3468) : 0,
                   g_ssm_call_1231, g_ssm_call_3e44);
            if (sub) {
                int i;
                printf("[TLS SceneSM] f=%d SUB48C 0x%08X:", g_runner_current_frame, sub);
                for (i = 0; i < 10; i++) printf(" %08X", mem_read32(ctx, sub + i * 4));
                printf("\n");
            }
            /* Phase 13's only exits (0x8036B134..0x8036B174):
             *   obj = *(task+0x56EC)
             *   if ((obj->[0x38] & 2) == 2 && obj->[0x88] == 0)  fn_805BA358(next+608)
             *   else if (obj->[0x88] == 4)                        fn_80376568(task)
             * so these two words are the whole decision. */
            {
                u32 o56ec = mem_read32(ctx, task + 0x56EC);
                u32 ok    = (o56ec >= 0x80000000u && o56ec < 0x83000000u) ? o56ec : 0;
                u32 o38   = ok ? mem_read32(ctx, ok + 0x38) : 0;
                u32 o88   = ok ? mem_read32(ctx, ok + 0x88) : 0;
                printf("[TLS SceneSM] f=%d PH13OBJ obj=0x%08X o38=0x%08X (bit1=%u) o88=%u (%s)\n",
                       g_runner_current_frame, ok, o38, (o38 >> 1) & 1u, o88,
                       (o88 == 0) ? "zero" : (o88 == 4 ? "FOUR" : "other"));
            }
        }
        printf("[TLS SceneSM] f=%d GATES state=%u ctr=%u/21600 f54e4=%u f54e8=%u f54ec=%u | "
               "gA=0x%08X gA404=%u | gB=0x%08X gB72=0x%08X b12a4=0x%08X bC48=0x%08X | "
               "f566c=%u f5674=%u f575c=0x%08X f5624=0x%08X f56ec=0x%08X f10d8=0x%08X\n",
               g_runner_current_frame, st, ctr, f54e4, f54e8, f54ec,
               gAok, a404, gBok, b72,
               bOk2 ? mem_read32(ctx, bOk2 + 0x12A4) : 0,
               bOk2 ? mem_read32(ctx, bOk2 + 0xC48) : 0,
               f566c, f5674, f575c, f5624, f56ec, f10d8);
        fflush(stdout);
    }
}

/* Earliest frame the async-pool probe reports from (TLS_ASYNC_PROBE_FROM). The pool's
 * one known burst is at frame 376; a later start makes a long run answer "is anything
 * ever posted again" instead of spending the whole report on that burst. */
static int tls_async_probe_from(void) {
    static int v = -2;
    if (v == -2) {
        const char* e = getenv("TLS_ASYNC_PROBE_FROM");
        v = e ? atoi(e) : 0;
        if (v < 0) v = 0;
    }
    return v;
}

/* TLS_ASYNC_IO_COMPLETE=1: deliver streaming (0x8046BBE0) read completions through the
 * guest's own async route - queued and dispatched at the guest's idle point by
 * tls_dvd_service_callback - instead of finishing them inside DVDReadAsyncPrio.
 * Default off: every streaming read in the engine (title, menu, Chapter 1) goes through
 * that one call, so this is an experiment to be judged on the invariant hash, not a fix. */
static int tls_async_io_complete(void) {
    static int v = -1;
    if (v < 0) v = getenv("TLS_ASYNC_IO_COMPLETE") ? 1 : 0;
    return v;
}

/* Dump a dispatch/type table ONCE, as it exists in the RUNNING image. The on-disk ELF cannot
 * be used for this: the game constructs these tables at runtime, so `build/SLSEXJ/main.elf`
 * shows data addresses where the live table holds code (measured: the layout container's
 * vptr 0x80782A80 has 0x80782A70/+0x10 0x8074C788 on disk and 0x801EF894/0x801EF944 live).
 * Slots that land in the text range are marked so a probe target is picked from evidence. */
static void tls_dump_live_table(CPUState* ctx, u32 tv, u32* seen, int* n, const char* what) {
    if (!tv) return;
    for (int k = 0; k < *n; k++) if (seen[k] == tv) return;
    if (*n >= 12) return;
    seen[(*n)++] = tv;
    printf("[PageTree]  %s 0x%08X live words:\n", what, tv);
    for (int w = 0; w < 16; w++) {
        u32 v = mem_read32(ctx, tv + (u32)w * 4);
        printf("[PageTree]    +%02X = 0x%08X%s\n", w * 4, v,
               (v >= 0x80000000u && v <= 0x8071B2F8u) ? "  <TEXT>" : "");
    }
    fflush(stdout);
}

/* Resource-load probe (handover 5c.46 AP-L addendum 3).
 *
 * The two remaining page-art defects are batches 37/38 sampling 0x90D19B80 (a 64x64 CMPR
 * slot in the 0x90D19xxx MEM2 arena) and reading opaque black, while a `CXDecompressFast`
 * lands 0xE0 bytes below it (`dst=0x90D19AA0`). The loader `fn_8046C2D4` is what fills these
 * buffers: it allocates `(size+0x20)&~31` bytes, decompresses into it (or memcpy's), then
 * publishes the pair on the request node as `+0x54 = data, +0x50 = size` and calls
 * `fn_80473104(req, 2)`. Reading that pair at the state-2 call is the *measured* byte extent
 * of every resource loaded at the page, so "did the crest's buffer get written, and how much
 * of it" stops being an inference from a dst address alone.
 *
 * TLS_RES_LOAD_PROBE=1            print (frame, req, ptr, size, name) for every state-2 load
 * TLS_RES_LOAD_DUMP=<lo>,<hi>     also write build/recomp/resload_f<frame>_<ptr>.bin for
 *                                 every load whose [ptr,ptr+size) intersects [lo,hi)
 * TLS_RES_LOAD_FROM=<frame>       suppress both before this frame (a whole run loads
 *                                 thousands of resources; the page window is the subject)
 * Both default off; nothing is printed or written unless set. */
static void tls_res_load_probe(CPUState* ctx) {
    extern int g_runner_current_frame;
    static int s_on = -1, s_from = 0;
    static u32 s_lo = 0, s_hi = 0;
    if (s_on < 0) {
        const char* e = getenv("TLS_RES_LOAD_PROBE");
        s_on = (e && *e && *e != '0') ? 1 : 0;
        const char* f = getenv("TLS_RES_LOAD_FROM");
        if (f) s_from = atoi(f);
        const char* d = getenv("TLS_RES_LOAD_DUMP");
        if (d) {
            unsigned lo = 0, hi = 0;
            if (sscanf(d, "%x,%x", &lo, &hi) == 2 && hi > lo) { s_lo = lo; s_hi = hi; s_on = 1; }
        }
    }
    if (!s_on) return;
    if (ctx->gpr[4] != 2) return;             /* only the "loaded" transition */
    if (g_runner_current_frame < s_from) return;
    u32 req = ctx->gpr[3];
    if (req < 0x80000000u || !resolve_guest_pointer(ctx, req)) return;
    u32 ptr = mem_read32(ctx, req + 0x54);
    u32 size = mem_read32(ctx, req + 0x50);
    char name[72];
    int n = 0;
    for (; n < 63; n++) {
        u8 c = mem_read8(ctx, req + 6 + (u32)n);
        if (!c) break;
        name[n] = (c >= 32 && c < 127) ? (char)c : '.';
    }
    name[n] = 0;
    /* Which arena slot the load touches, so a log line answers "is this the crest?" directly. */
    char hits[160];
    hits[0] = 0;
    if (ptr && size) {
        struct { u32 addr; const char* what; u32 len; } slots[] = {
            { 0x90D19B80u, "crest64x64", 2048u },   /* batches 37/38 sample this */
            { 0x90D1A400u, "next32x32",   512u },
        };
        for (unsigned k = 0; k < sizeof(slots) / sizeof(slots[0]); k++) {
            if (ptr < slots[k].addr + slots[k].len && slots[k].addr < ptr + size) {
                char one[64];
                sprintf(one, " OVERLAPS:%s@+0x%X", slots[k].what, (unsigned)(slots[k].addr - ptr));
                strncat(hits, one, sizeof(hits) - strlen(hits) - 1);
            }
        }
    }
    printf("[ResLoad] f=%d req=0x%08X ptr=0x%08X size=0x%X name='%s'%s\n",
           g_runner_current_frame, req, ptr, size, name, hits);
    fflush(stdout);
    if (s_lo && size && ptr && ptr < s_hi && s_lo < ptr + size) {
        const u8* base = (const u8*)resolve_guest_pointer(ctx, ptr);
        u32 want = size > (1u << 20) ? (1u << 20) : size;
        if (base) {
            char path[160];
            sprintf(path, "build/recomp/resload_f%d_%08X.bin", g_runner_current_frame, ptr);
            FILE* f = fopen(path, "wb");
            if (f) {
                fwrite(base, 1, want, f);
                fclose(f);
                printf("[ResLoad]   wrote %s (%u of 0x%X bytes)\n", path, want, size);
                fflush(stdout);
            }
        }
    }
}

int dolrecomp_dispatch_replacement(CPUState* ctx, u32 address) {
    tls_record_recent_call(ctx, address);
    tls_tail_push(ctx, address);

    /* Dump guest memory at the moment a chosen function is ENTERED, not at a frame
     * boundary (handover 5c.46 AP-R). A frame-end dump of the hero bake's source proved
     * nothing: the same address measures a uniform FF00FF00 fill at 1915 while the EFB
     * copies of frame 1910 are capturing real content (avg 47,62,76), i.e. the buffer is
     * written *during* the frame and cleared (or re-filled) before the frame boundary.
     * TLS_DUMP_AT_PC=<hex pc>:<hex addr>:<hex len>:<max dumps> writes
     * build/recomp/atpc_<pc>_<n>_<addr>.bin on the first <max> dispatches of <pc>.
     * Inert unless set. */
    {
        static int s_init = 0;
        static u32 s_pc[8] = {0};
        static int s_npc = 0;
        static u32 s_addr = 0, s_len = 0;
        static int s_max = 0, s_n = 0, s_minframe = -1;
        static int s_reg = -1;   /* addr field given as r3..r9 instead of a literal */
        if (!s_init) {
            s_init = 1;
            const char* e = getenv("TLS_DUMP_AT_PC");
            if (e) {
                char pctok[128] = {0};
                char addrtok[16] = {0};
                unsigned pc = 0, len = 0;
                int mx = 1, mf = -1;
                /* <pc>[:<pc2>...]:<addr|rN>:<len>:<max>[:<minframe>]. Several comma-separated
                 * PCs share one addr/len/max, which is what answers "does this MODULE ever
                 * run in gameplay": one run instead of one run per function (handover 5c.46
                 * AP-AB - the party manager's entry turned out never to be dispatched, and
                 * proving that for a whole module needs this). */
                if (sscanf(e, "%127[^:]:%15[^:]:%x:%d:%d", pctok, addrtok, &len, &mx, &mf) >= 3 &&
                    len && len <= 65536) {
                    s_len = len;
                    s_max = (mx > 0) ? mx : 1;
                    s_minframe = mf;
                    if (addrtok[0] == 'r' && addrtok[1] >= '3' && addrtok[1] <= '9' && !addrtok[2]) {
                        s_reg = addrtok[1] - '3';
                    } else {
                        s_addr = (u32)strtoul(addrtok, NULL, 16);
                    }
                    char* p = pctok;
                    while (*p && s_npc < 8) {
                        pc = (unsigned)strtoul(p, &p, 16);
                        if (pc) s_pc[s_npc++] = pc;
                        while (*p == ',' || *p == ' ') p++;
                    }
                }
            }
        }
        int hit_pc = 0;
        u32 hit_pc_val = 0;
        for (int i = 0; i < s_npc; i++) { if (s_pc[i] == address) { hit_pc = 1; hit_pc_val = s_pc[i]; break; } }
        if (hit_pc && s_n < s_max && (s_minframe < 0 || g_runner_current_frame >= s_minframe)) {
            if (s_reg >= 0) s_addr = ctx->gpr[3 + s_reg];
            { extern unsigned g_efb_copy_seq; extern int g_efb_copy_last_replay;
              printf("[DumpAtPc] copiesseq=%u lastreplay=%d\n", g_efb_copy_seq, g_efb_copy_last_replay); }
            const u8* base = (const u8*)host_resolve_gx_guest_addr(s_addr);
            printf("[DumpAtPc] pc=0x%08X frame=%d r3=0x%08X r4=0x%08X r5=0x%08X r6=0x%08X "
                   "r7=0x%08X r8=0x%08X r9=0x%08X lr=0x%08X\n",
                   hit_pc_val, g_runner_current_frame, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5],
                   ctx->gpr[6], ctx->gpr[7], ctx->gpr[8], ctx->gpr[9], ctx->lr);
            if (base) {
                char path[160];
                snprintf(path, sizeof(path), "build/recomp/atpc_%08X_%d_%08X.bin", hit_pc_val, s_n, s_addr);
                FILE* f = fopen(path, "wb");
                if (f) {
                    fwrite(base, 1, s_len, f);
                    fclose(f);
                    printf("[DumpAtPc] wrote %s (%u bytes)\n", path, s_len);
                }
                /* Same checksum the EFB copy path prints for its destination, over the same
                 * window, so the two views of one address can be compared in ONE run. */
                {
                    uint32_t sum = 0, nzb = 0, n = (s_len < 0x4000u) ? s_len : 0x4000u;
                    for (uint32_t i = 0; i < n; i++) { sum += base[i]; if (base[i]) nzb++; }
                    printf("[DumpAtPcSum] addr=0x%08X sum=%u nonzero=%u/%u\n", s_addr, sum, nzb, n);
                }
            } else {
                printf("[DumpAtPc] 0x%08X unmapped\n", s_addr);
            }
            fflush(stdout);
            s_n++;
        }
    }

    /* Instruction-level dispatch trace from a given frame onward. The recent-call
     * ring only keeps 64 entries, which is not enough to follow one deep call
     * chain into a bad return; this prints every dispatch with the registers a
     * call site actually passes. TLS_TRACE_FROM=<frame> (cap: TLS_TRACE_MAX,
     * default 400). Inert unless set. */
    {
        extern int g_runner_current_frame;
        static int s_trace_from = -2, s_trace_cap = 400, s_trace_n = 0;
        if (s_trace_from == -2) {
            const char* e = getenv("TLS_TRACE_FROM");
            const char* c = getenv("TLS_TRACE_MAX");
            s_trace_from = e ? atoi(e) : -1;
            if (c) s_trace_cap = atoi(c);
        }
        if (s_trace_from >= 0 && g_runner_current_frame >= s_trace_from && s_trace_n < s_trace_cap) {
            s_trace_n++;
            printf("[TRACE] f=%d pc=0x%08X lr=0x%08X sp=0x%08X r3=0x%08X r4=0x%08X r5=0x%08X "
                   "r6=0x%08X r7=0x%08X ctr=0x%08X cb=%d\n",
                   g_runner_current_frame, address, ctx->lr, ctx->gpr[1], ctx->gpr[3], ctx->gpr[4],
                   ctx->gpr[5], ctx->gpr[6], ctx->gpr[7], ctx->ctr, g_host_callback_depth);
            fflush(stdout);
        }
    }

    /* memcpy watch for writes into the OS low page. A byte-copy through
     * memcpy (0x800062F8, whose tail loop is 0x80006460) with a NULL destination
     * overwrote 0x80000000-0x800001C1 - including __OSCurrentThread at
     * 0x800000E4 - whenever fn_801FFA04's staging buffer had been zeroed. Nothing
     * in the game should ever copy into the first 16 KB of MEM1, so name the
     * caller, destination, source and length of any such copy. Inert unless
     * TLS_MEMCPY_PROBE=1. */
    if (address == 0x800062F8u) {
        static int s_probe = -1;
        static int s_reports = 0;
        if (s_probe < 0) s_probe = getenv("TLS_MEMCPY_PROBE") ? 1 : 0;
        if (s_probe) {
            u32 dst = ctx->gpr[3], src = ctx->gpr[4], len = ctx->gpr[5];
            if (dst < 0x80004000u && s_reports < 16) {
                s_reports++;
                printf("[TLS MEMCPY] dst=0x%08X src=0x%08X len=%u lr=0x%08X sp=0x%08X\n",
                       dst, src, len, ctx->lr, ctx->gpr[1]);
                fflush(stdout);
            }
        }
    }

    // Host callback sentinel: the runner enters guest callbacks (OSAlarm
    // handlers, DVD/IPC completion routines) with LR = TLS_HOST_CALLBACK_SENTINEL
    // so the callback's `blr` returns control to the host.
    //
    // This address is NOT guest code. Dispatching it as a basic block used to
    // self-loop here at ~zero cost: the interpreter then burned its entire
    // block budget every frame without rendering or reaching the idle loop,
    // which is why a wedged run kept reporting a healthy 60 FPS over a black
    // screen (frame_blocks == 300000 + 5000 + 4*4000 == 321000 every frame).
    //
    // It also starved host_service_alarms(), which only fires while PC sits at
    // the idle point, so the DVD/alarm work that could have unstuck the guest
    // never ran again. Reaching the sentinel means "this guest call frame
    // returned to the host": park at the scheduler idle point and let the
    // runner service alarms/wakeups and schedule the next ready thread.
    if (address == TLS_HOST_CALLBACK_SENTINEL) {
        if (g_host_callback_depth > 0) {
            // The callback returned to the host. Produce nothing further: report
            // "no block executed" so the interpreter slice ends right here and the
            // runner resumes ownership of the CPU state immediately. Running on
            // from a sentinel PC would execute the OS dispatch loop with the
            // callback's register state and then be thrown away by the caller's
            // saved-state restore, mutating guest scheduling state for nothing.
            return 0;
        }

        // Sentinel reached outside any host callback: some guest frame was left
        // with the sentinel in its return address (e.g. a handler that let the
        // scheduler run saved it into a thread context). Park at the scheduler
        // idle point instead of self-looping, which also re-enables
        // host_service_alarms() - it only services alarms while PC is idle.
        static u32 s_sentinel_hits = 0;
        if (s_sentinel_hits < 8) {
            printf("[TLS HostCallback] Stray host sentinel in frame execution #%u "
                   "(lr=0x%08X sp=0x%08X cur_thread=0x%08X run_bits=0x%08X) -> scheduler idle\n",
                   s_sentinel_hits + 1, ctx->lr, ctx->gpr[1],
                   mem_read32(ctx, 0x800000E4), mem_read32(ctx, 0x8087FC60));
            fflush(stdout);
        }
        s_sentinel_hits++;
        {
            static int s_tail2 = -1;
            if (s_tail2 < 0) s_tail2 = getenv("TLS_TAIL_PROBE") ? 1 : 0;
            if (s_tail2 && s_sentinel_hits == 1) {
                printf("[TLS TailProbe] stray sentinel reached; dispatch tail follows\n");
                tls_dump_recent_calls();
                tls_tail_dump("stray host sentinel");
            }
        }
        /* Parking at the idle PC used to be the recovery, and it is unrecoverable:
         * tls_is_system_idle() then reports idle for every following frame, no block
         * is ever executed again, and the run ends at a healthy 60 FPS over a black
         * screen. That is exactly how this run died (one stray sentinel, then 370
         * silent frames). Resume the current thread from its own saved OSContext
         * instead: the sentinel only leaked into LR, the context still holds the
         * thread's real return address. Only if that is not a valid code address
         * fall back to the idle park. TLS_SENTINEL_PARK=1 restores the old path. */
        {
            static int s_park = -1;
            if (s_park < 0) s_park = getenv("TLS_SENTINEL_PARK") ? 1 : 0;
            u32 cur = mem_read32(ctx, 0x800000E4);
            bool ctx_ok = (cur >= 0x80000000u && cur < 0x94000000u && (cur & 3u) == 0u);
            u32 saved_lr = ctx_ok ? mem_read32(ctx, cur + 0x84) : 0;
            u32 saved_pc = ctx_ok ? mem_read32(ctx, cur + 0x198) : 0;
            u32 resume = (saved_lr >= 0x80003000u && saved_lr < 0x80730000u) ? saved_lr : saved_pc;
            if (!s_park && resume >= 0x80003000u && resume < 0x80730000u) {
                ctx->lr = resume;
                ctx->pc = resume;
                return 1;
            }
        }
        ctx->pc = TLS_DVD_IDLE_PC;
        ctx->lr = TLS_DVD_IDLE_PC;
        return 1;
    }

    /* MEM1 physical addressing. The OS's exception-return helper (0x805F2E90:
     * `mtsrr0 r3; mfmsr; mtsrr1; rfi`) hands `rfi` a *physical* address because the
     * exception context runs with translation off, and the Wii maps MEM1 physical 0
     * to cached 0x80000000. The emulator keeps a flat mapping, so a jump to e.g.
     * 0x005F2A10 is really "resume at 0x805F2A10". Translate instead of treating it
     * as corruption: that removes the last two boot-time non-code dispatches without
     * weakening the safeguard (only addresses that land inside the DOL text are
     * translated, and each is reported once). */
    if (address < 0x80000000u && address >= 0x00003000u) {
        u32 cached = address + 0x80000000u;
        if (cached >= 0x80003000u && cached < 0x80730000u) {
            static u32 s_seen[8];
            static int s_seen_n = 0;
            bool known = false;
            for (int i = 0; i < s_seen_n; i++) if (s_seen[i] == address) known = true;
            if (!known) {
                if (s_seen_n < 8) s_seen[s_seen_n++] = address;
                printf("[TLS PhysMap] physical 0x%08X -> cached 0x%08X (lr=0x%08X) - exception-context "
                       "return translated to the MEM1 cached alias\n", address, cached, ctx->lr);
                fflush(stdout);
            }
            ctx->pc = cached;
            return 1;
        }
    }

    // Generic non-code address safeguard (null pointer / corrupt indirect calls / heap calls)
    // Guest executable DOL code strictly exists between 0x80003100 and 0x80730000.
    if (address < 0x80003000 || address >= 0x80730000) {
        // CharaTask model LoadAsync call sites (0x80135B50, 0x80135F64)
        if (ctx->lr == 0x80135B54 || ctx->lr == 0x80135F68) {
            u32 path_ptr = ctx->gpr[4];
            const char* path = (const char*)resolve_guest_pointer(ctx, path_ptr);
            printf("[TLS CharaTask] LoadAsync redirect (LR=0x%08X): lh=0x%08X path='%s'\n",
                   ctx->lr, ctx->gpr[3], path ? path : "(null)");
            fflush(stdout);
            mem_write32(ctx, ctx->gpr[3], 0x8078FBB0); // restore atn::LH_Binary vtable
            ctx->pc = 0x804705B8; // call atn::LH_Binary::LoadAsync
            return 1;
        }

        // Float-vector virtual calls in fn_800F29D0 (copy/destruct of function delegates)
        if (ctx->lr == 0x800F2AC4 || ctx->lr == 0x800F2B00 || ctx->lr == 0x800F2B9C) {
            ctx->pc = ctx->lr;
            ctx->gpr[3] = 0;
            return 1;
        }

        static u32 s_invalid_addr_count = 0;
        /* The FIRST non-code address of a run is the defect; the recoveries that
         * follow are consequences of it (each one resumes somewhere arbitrary).
         * Dump the dispatch tail here so the calls that led into it are named.
         * Inert unless TLS_TAIL_PROBE=1. */
        {
            static int s_tail = -1;
            static int s_tail_dumps = 0;
            if (s_tail < 0) s_tail = getenv("TLS_TAIL_PROBE") ? 1 : 0;
            if (s_tail && s_invalid_addr_count == 0) {
                if (s_tail_dumps == 0) {
                    printf("[TLS TailProbe] first non-code address 0x%08X (lr=0x%08X)\n",
                           address, ctx->lr);
                    tls_dump_recent_calls();
                }
                if (s_tail_dumps < 3) {
                    char why[64];
                    s_tail_dumps++;
                    snprintf(why, sizeof(why), "non-code address 0x%08X #%d", address, s_tail_dumps);
                    tls_tail_dump(why);
                }
            }
        }
        if (++s_invalid_addr_count <= 30) {
            printf("[TLS Safeguard] Bypassed invalid jump to 0x%08X (LR=0x%08X, SP=0x%08X, r3=0x%08X, r12=0x%08X)\n",
                   address, ctx->lr, ctx->gpr[1], ctx->gpr[3], ctx->gpr[12]);
            if (ctx->gpr[3] >= 0x80000000 && ctx->gpr[3] < 0x82000000) {
                u32 node = ctx->gpr[3];
                printf("  [TLS Safeguard] r3 obj 0x%08X (+0..+0x20): %08X %08X %08X %08X %08X %08X %08X %08X %08X\n",
                       node,
                       mem_read32(ctx, node), mem_read32(ctx, node + 4),
                       mem_read32(ctx, node + 8), mem_read32(ctx, node + 12),
                       mem_read32(ctx, node + 16), mem_read32(ctx, node + 20),
                       mem_read32(ctx, node + 24), mem_read32(ctx, node + 28),
                       mem_read32(ctx, node + 32));
            }
            fflush(stdout);
        }
        if (ctx->lr < 0x80003000 || ctx->lr >= 0x80730000) {
            u32 caller_lr = 0;
            u32 restored_sp = 0;
            // 1. Walk the current stack frame chain from ctx->gpr[1]
            u32 cur_sp = ctx->gpr[1];
            for (int depth = 0; depth < 16 && cur_sp >= 0x80000000 && cur_sp < 0x83000000; depth++) {
                u32 cand = mem_read32(ctx, cur_sp + 4);
                if (cand >= 0x80003000 && cand < 0x80730000) {
                    caller_lr = cand;
                    restored_sp = cur_sp;
                    break;
                }
                u32 nxt = mem_read32(ctx, cur_sp);
                if (nxt <= cur_sp || nxt >= 0x83000000) break;
                cur_sp = nxt;
            }
            // 2. If address itself was a stack pointer (e.g. 0x808993A0), check its chain
            if (caller_lr == 0 && address >= 0x80000000 && address < 0x83000000) {
                u32 addr_sp = address;
                for (int depth = 0; depth < 8 && addr_sp >= 0x80000000 && addr_sp < 0x83000000; depth++) {
                    u32 cand = mem_read32(ctx, addr_sp + 4);
                    if (cand >= 0x80003000 && cand < 0x80730000) {
                        caller_lr = cand;
                        restored_sp = addr_sp;
                        break;
                    }
                    u32 nxt = mem_read32(ctx, addr_sp);
                    if (nxt <= addr_sp || nxt >= 0x83000000) break;
                    addr_sp = nxt;
                }
            }
            // 3. If r3 is a Task object (tag XTASKTAG 0x58544153), recover to Task scheduler return site
            if (caller_lr == 0) {
                u32 node = ctx->gpr[3];
                if (node >= 0x80000000 && node < 0x83000000 && mem_read32(ctx, node + 8) == 0x58544153) {
                    caller_lr = 0x800D28FC; // Task::Execute return site in fn_800D2868
                    printf("[TLS Safeguard] Recovered Task 0x%08X to Task scheduler (0x800D28FC)\n", node);
                    fflush(stdout);
                }
            }

            if (caller_lr != 0) {
                ctx->pc = caller_lr;
                if (restored_sp != 0) {
                    ctx->gpr[1] = restored_sp;
                }
            } else {
                ctx->pc = 0x800D28FC; // Default to task scheduler loop instead of idle!
            }
        } else {
            if ((ctx->lr >= 0x800D2868 && ctx->lr <= 0x800D2AD8) ||
                (ctx->pc >= 0x800D2868 && ctx->pc <= 0x800D2AD8)) {
                // Task::Execute / Task::InitLoop / Task::DrawLoop
                // Recover directly to 0x800D2AB0 (cleanly advance to next sibling r29->0x1C)
                ctx->pc = 0x800D2AB0;
                ctx->gpr[3] = 0;
            } else {
                ctx->pc = ctx->lr;
                ctx->gpr[3] = 0;
            }
        }
        return 1;
    }

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
            ctx->timebase += 200;
            u64 tb = ctx->timebase;
            ctx->gpr[3] = (u32)(tb >> 32);
            ctx->gpr[4] = (u32)(tb & 0xFFFFFFFF);
            ctx->pc = ctx->lr;
            return 1;
        }

        // OSGetTick: 32-bit tick counter in r3
        case 0x805F5FB0: {
            ctx->timebase += 100;
            ctx->gpr[3] = (u32)(ctx->timebase & 0xFFFFFFFF);
            ctx->pc = ctx->lr;
            return 1;
        }

        // __OSGetSystemTime: 64-bit system time in (r3, r4)
        case 0x805F5FC0: {
            ctx->timebase += 200;
            u64 tb = tls_guest_system_time(ctx);
            ctx->gpr[3] = (u32)(tb >> 32);
            ctx->gpr[4] = (u32)(tb & 0xFFFFFFFF);
            ctx->pc = ctx->lr;
            return 1;
        }

        case 0x8059F878: {
            u32 r3 = ctx->gpr[3];
            // Self-healing guard: repair any corrupted LinkLists in nw4r SoundArchivePlayer
            for (int offset = 72; offset <= 152; offset += 40) {
                u32 count = mem_read32(ctx, r3 + offset);
                u32 head = mem_read32(ctx, r3 + offset + 4);
                u32 sentinel = r3 + offset + 4;
                if (count > 0 && (head == 0 || head == sentinel)) {
                    printf("[TLS 8059F878] Healing corrupted list at r3+0x%X (count=%u, head=0x%08X) -> reset to empty\n",
                           offset, count, head);
                    mem_write32(ctx, r3 + offset, 0);
                    mem_write32(ctx, r3 + offset + 4, sentinel);
                    mem_write32(ctx, r3 + offset + 8, sentinel);
                }
            }
            return 0;
        }

        case 0x8059EA18: {
            return 0;
        }

        case 0x80724DF0: {
            u32 file_addr = ctx->gpr[3];
            u32 line = ctx->gpr[4];
            u32 msg_addr = ctx->gpr[5];
            const char* file = (const char*)resolve_guest_pointer(ctx, file_addr);
            const char* msg = (const char*)resolve_guest_pointer(ctx, msg_addr);
            printf("[TLS ASSERT 80724DF0] %s:%u: %s (caller LR=0x%08X, r1=0x%08X)\n",
                   file ? file : "<null>", line, msg ? msg : "<null>", ctx->lr, ctx->gpr[1]);
            fflush(stdout);
            return 0;
        }

        // abort() / panic() handler (0x80686EA4)
                // 0x8022B114 (dlfree / MSL free safe bounds check)
        case 0x8022B114: {
            u32 heap = ctx->gpr[3];
            u32 ptr = ctx->gpr[4];
            if (!ptr) {
                ctx->pc = ctx->lr;
                return 1;
            }
            if (!resolve_guest_pointer(ctx, heap) || !resolve_guest_pointer(ctx, ptr)) {
                ctx->pc = ctx->lr;
                return 1;
            }
            u32 heap_start = mem_read32(ctx, heap + 16);
            if (ptr < heap_start + 8 || ptr >= 0x94000000) {
                ctx->pc = ctx->lr;
                return 1;
            }
            return 0; // Run original code safely
        }

        // abort() / panic() handler (0x80686EA4)
        case 0x80686EA4: {
            /* Rate-limited: a guest that loops on abort()/exit() used to write one line per
             * iteration, which produced an 11 GB log in one run and filled the disk
             * (handover 5c.46 AP-Q item 8). First 20 calls, then every 10 000th. */
            static unsigned s_abort_calls = 0;
            s_abort_calls++;
            if (s_abort_calls <= 20u || (s_abort_calls % 10000u) == 0u)
                printf("[TLS WARNING] abort() called from LR=0x%08X! Bypassing termination to keep game running. (call %u)\n",
                       ctx->lr, s_abort_calls);
            fflush(stdout);
            ctx->pc = ctx->lr;
            return 1;
        }

        // exit() handler (0x805F8930)
        case 0x805F8930: {
            static int s_exit_reports = 0;
            static unsigned s_exit_calls = 0;
            s_exit_calls++;
            if (s_exit_calls <= 20u || (s_exit_calls % 10000u) == 0u)
                printf("[TLS WARNING] exit(%d) called from LR=0x%08X (pc=0x%08X sp=0x%08X)! Bypassing termination to keep game running. (call %u)\n",
                       (int)ctx->gpr[3], ctx->lr, ctx->pc, ctx->gpr[1], s_exit_calls);
            /* WHO called exit? `lr` is already inside the C runtime, so print a
             * return-address scan of the caller's frame: PowerPC does not chain frames,
             * but every function that calls anything stores LR in its own frame, so the
             * words just above sp are usually a recent call chain. Only words that land in
             * the code range are printed, which is enough to name the caller. Added for
             * 5c.46 AP-Q: under stream-order EFB copies the guest calls exit(0) at ~2700
             * and the run dies, and this is how the caller gets identified. */
            if (s_exit_reports < 3) {
                s_exit_reports++;
                /* The dispatch ring is populated unconditionally (tls_record_recent_call
                 * runs at the top of every dispatch), so dumping it here names the call
                 * chain that reached exit() with no extra run cost - the exit stub then
                 * spins forever at PC=0x800041B4 and every other trace is drowned out. */
                tls_dump_recent_calls();
                tls_tail_dump("exit(0) reached");
                const uint8_t* base = (const uint8_t*)host_resolve_gx_guest_addr(ctx->gpr[1]);
                if (base) {
                    printf("[TLS EXIT] return-address scan above sp=0x%08X:\n", ctx->gpr[1]);
                    for (int i = 0; i < 128; i++) {
                        const uint8_t* b = base + i * 4;
                        uint32_t v = ((uint32_t)b[0] << 24) | ((uint32_t)b[1] << 16) |
                                     ((uint32_t)b[2] << 8) | (uint32_t)b[3];
                        if (v >= 0x80000000u && v < 0x81800000u) {
                            printf("[TLS EXIT]   sp+%3d = 0x%08X\n", i * 4, v);
                        }
                    }
                    fflush(stdout);
                }
            }
            fflush(stdout);
            ctx->pc = ctx->lr;
            return 1;
        }

        /* __OSSetInterruptHandler(type, handler) - log every registration once.
         * The engine parks in the OS idle loop waiting for an interrupt, and the
         * host simulates vblank by poking memory instead of delivering one, so the
         * VI handler's address is what would let the host raise a real retrace. */
        case 0x805F1EF0: {
            static int s_irq_cap = 0;
            static u32 s_seen_type[16];
            static int s_seen_n = 0;
            u32 type = ctx->gpr[3], handler = ctx->gpr[4];
            int known = 0;
            for (int i = 0; i < s_seen_n; i++) if (s_seen_type[i] == type) known = 1;
            if (!known && s_seen_n < 16) {
                s_seen_type[s_seen_n++] = type;
                if (s_irq_cap++ < 16) {
                    printf("[TLS IRQ] __OSSetInterruptHandler type=%u handler=0x%08X lr=0x%08X\n",
                           type, handler, ctx->lr);
                    fflush(stdout);
                }
            }
            return 0;
        }

        // OSSleepThread probe & queue sanity check
        case 0x805F5C70: {
            u32 queue_addr = ctx->gpr[3];
            tls_wait_probe(ctx, queue_addr);
            tls_note_sleep_queue(queue_addr, ctx->lr);
            tls_note_sleep_tail(ctx, queue_addr);
            /* Lost-wakeup test for the Chapter-1 stall. The engine's worker at
             * 0x8071D950 sleeps while *(r30+0x24) != 0; queue r30+0x2C is the one it
             * blocks on. If it ever enqueues while that field is already 0, the
             * producer cleared the condition without delivering the wakeup, which is
             * a different defect from "the producer never ran". */
            {
                static int s_lw = -1;
                static int s_lw_reports = 0;
                if (s_lw < 0) s_lw = getenv("TLS_LOSTWAKE_PROBE") ? 1 : 0;
                if (s_lw && ctx->lr == 0x8071D984u && s_lw_reports < 20) {
                    extern int g_runner_current_frame;
                    u32 base = ctx->gpr[30];
                    u32 pending = (base && resolve_guest_pointer(ctx, base))
                                      ? mem_read32(ctx, base + 36) : 0;
                    s_lw_reports++;
                    /* queue head/tail before the enqueue: if both are null the thread is going
                     * onto an EMPTY queue while its condition is already clear, i.e. the wakeup
                     * that should have found it has already happened and been consumed. */
                    u32 qh = mem_read32(ctx, queue_addr);
                    u32 qt = mem_read32(ctx, queue_addr + 4);
                    printf("[TLS LOSTWAKE] frame=%d base=0x%08X queue=0x%08X head=0x%08X tail=0x%08X pending(+0x24)=0x%08X %s\n",
                           g_runner_current_frame, base, queue_addr, qh, qt, pending,
                           pending == 0 ? "<-- sleeping with the condition ALREADY satisfied" : "");
                    fflush(stdout);
                }
            }
            /* TLS_NUDGE_SLEEP=1: when the worker at lr=0x8071D984 is about to sleep on
             * queue r30+0x2C while its condition (r30+0x24) is ALREADY clear, the wakeup it
             * is waiting for has already been consumed (5c.46 S). Skipping that sleep lets the
             * worker make progress instead of parking forever. This is an emulation allowance,
             * NOT a fix: it papers over a timing difference between this runner and the
             * console, so it stays opt-in and must be evaluated on what the page gains. */
            {
                static int s_nudge = -1;
                if (s_nudge < 0) s_nudge = getenv("TLS_NUDGE_SLEEP") ? 1 : 0;
                if (s_nudge && ctx->lr == 0x8071D984u) {
                    u32 nb = ctx->gpr[30];
                    u32 npending = (nb && resolve_guest_pointer(ctx, nb))
                                       ? mem_read32(ctx, nb + 36) : 1;
                    if (npending == 0) {
                        static int s_skips = 0;
                        if (s_skips++ < 20) {
                            extern int g_runner_current_frame;
                            printf("[TLS NUDGE] frame=%d skipped a spurious sleep on 0x%08X (condition already clear)\n",
                                   g_runner_current_frame, queue_addr);
                            fflush(stdout);
                        }
                        return 1;   /* handled: do not block */
                    }
                }
            }
            {
                static int s_tl = -1;
                if (s_tl < 0) s_tl = getenv("TLS_WAKE_TIMELINE") ? 1 : 0;
                extern int g_runner_current_frame;
                if (s_tl && g_runner_current_frame >= 150 && g_runner_current_frame <= 400) {
                    printf("[WakeTL] frame=%d SLEEP queue=0x%08X lr=0x%08X head=0x%08X\n",
                           g_runner_current_frame, queue_addr, ctx->lr, mem_read32(ctx, queue_addr));
                    fflush(stdout);
                }
            }
            static u32 count_sleep = 0;
            if (++count_sleep <= 50 || count_sleep % 100 == 0) {
                printf("[TLS OSSleepThread] #%u queue=0x%08X lr=0x%08X\n",
                       count_sleep, queue_addr, ctx->lr);
                fflush(stdout);
            }
            if (queue_addr >= 0x80000000 && queue_addr < 0x82000000) {
                u32 head = mem_read32(ctx, queue_addr);
                if (head != 0 && (head < 0x80000000 || head >= 0x82000000)) {
                    static int s_qreset_log = 0;
                    if (++s_qreset_log <= 5) {
                        printf("[TLS OSSleepThread] Resetting invalid queue head 0x%08X at 0x%08X\n", head, queue_addr);
                        fflush(stdout);
                    }
                    mem_write32(ctx, queue_addr, 0);
                    mem_write32(ctx, queue_addr + 4, 0);
                }
            }
            return 0; // Let original SDK OSSleepThread run
        }

        // OSWakeupThread probe
        case 0x805F5D60: {
            static u32 count_wakeup = 0;
            /* TLS_WAKE_TIMELINE=1: one line per sleep/wakeup inside the window where the
             * workers actually run, so the signal and the enqueue can be ordered on ONE
             * timeline (handover 5c.46 U). */
            {
                static int s_tl = -1;
                if (s_tl < 0) s_tl = getenv("TLS_WAKE_TIMELINE") ? 1 : 0;
                extern int g_runner_current_frame;
                if (s_tl && g_runner_current_frame >= 150 && g_runner_current_frame <= 400) {
                    printf("[WakeTL] frame=%d WAKE queue=0x%08X lr=0x%08X head=0x%08X\n",
                           g_runner_current_frame, ctx->gpr[3], ctx->lr, mem_read32(ctx, ctx->gpr[3]));
                    fflush(stdout);
                }
            }
            tls_note_wake(ctx->gpr[3], ctx->lr);
            if (++count_wakeup <= 50) {
                printf("[TLS OSWakeupThread] #%u queue=0x%08X lr=0x%08X\n", count_wakeup, ctx->gpr[3], ctx->lr);
                fflush(stdout);
            }
            return 0;
        }

        /* The drain function that blocks the Chapter-1 handoff. It walks three
         * 12-byte list heads, runs a virtual destructor per entry, then sleeps on
         * queue manager+0x34 until manager+0x24 (the pending-operation pointer)
         * clears. Naming the manager instance is what lets the pending request be
         * identified; report each distinct one once. */
        case 0x8071D860: {
            static u32 s_seen[8];
            static int s_seen_n = 0;
            static int s_reports = 0;
            u32 mgr = ctx->gpr[3];
            int known = 0;
            for (int i = 0; i < s_seen_n; i++) if (s_seen[i] == mgr) known = 1;
            if (!known) {
                if (s_seen_n < 8) s_seen[s_seen_n++] = mgr;
                if (s_reports++ < 12) {
                    extern int g_runner_current_frame;
                    u32 pending = (mgr && resolve_guest_pointer(ctx, mgr)) ? mem_read32(ctx, mgr + 0x24) : 0;
                    printf("[TLS Drain] frame=%d manager=0x%08X pending(+0x24)=0x%08X lr=0x%08X\n",
                           g_runner_current_frame, mgr, pending, ctx->lr);
                    fflush(stdout);
                }
            }
            return 0;
        }

        /* OSCreateThread(thread, func, param, stack, stackSize, prio, attr):
         * record which guest function each thread was created to run, so thread
         * objects seen blocked in the deadlock dump can be named. */
        case 0x805F51B0: {
            static int s_thr_cap = 0;
            extern int g_runner_current_frame;
            if (s_thr_cap < 24) {
                s_thr_cap++;
                printf("[TLS OSCreateThread] frame=%d thread=0x%08X entry=0x%08X param=0x%08X stack=0x%08X size=0x%X prio=%u\n",
                       g_runner_current_frame, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5],
                       ctx->gpr[6], ctx->gpr[7], ctx->gpr[8]);
                fflush(stdout);
            }
            return 0;
        }

        // OSSleepTicks probe
        case 0x805F5EE0: {
            static u32 count_ticks = 0;
            if (++count_ticks <= 50) {
                u64 ticks = ((u64)ctx->gpr[3] << 32) | ctx->gpr[4];
                printf("[TLS OSSleepTicks] #%u ticks=%lld lr=0x%08X\n", count_ticks, (long long)ticks, ctx->lr);
                fflush(stdout);
            }
            return 0;
        }

        // __OSReschedule probe
        case 0x805F5190: {
            static u32 count_resched = 0;
            if (++count_resched <= 20) {
                printf("[TLS __OSReschedule] #%u lr=0x%08X\n", count_resched, ctx->lr);
                fflush(stdout);
            }
            return 0;
        }

        // NAND PlayRecord alarm callbacks (0x805F7040 / 0x805F7050) - no-op on PC
        case 0x805F7040:
        case 0x805F7050: {
            ctx->pc = ctx->lr;
            return 1;
        }

        // __VIDelay: timing delay loop on video encoder
        case 0x806056D0: {
            ctx->pc = ctx->lr;
            return 1;
        }

        // fn_80071AFC: Display copy and frame queue submission
        case 0x80071AFC: {
            static int s_71afc_count = 0;
            if (tls_draw_trace_enabled() && (++s_71afc_count <= 20 || s_71afc_count % 300 == 0)) {
                printf("[TLS 80071AFC DisplayCopy] #%d lr=0x%08X r3=0x%08X\n",
                       s_71afc_count, ctx->lr, ctx->gpr[3]);
                fflush(stdout);
            }
            return 0; // Let original recompiled code run to perform GX display list flush and frame copy
        }

        // Model material lighting channel setup (fn_8009C508)
        case 0x8009C508: {
            u32 r3 = ctx->gpr[3];
            u32 r4 = (r3 >= 0x80000000 && r3 < 0x94000000) ? mem_read32(ctx, r3 + 8) : 0;
            u32 r30 = (r4 >= 0x80000000 && r4 < 0x94000000) ? mem_read32(ctx, r4 + 16) : 0;
            if (r30 < 0x80000000 || r30 >= 0x94000000) {
                // Invalid or null lightgroup pointer -- return immediately to avoid corrupt dereference / infinite loop
                ctx->pc = ctx->lr;
                return 1;
            }
            return 0; // Valid lightgroup, execute original recompiled code
        }

        /* fn_8022A054 is the engine's TLSF allocator: it walks the free-list table at
         * manager+0x12C. After the title->game handoff the guest burns the whole block
         * budget every frame with the PC parked inside it (handover 5c.10 follow-up),
         * so count the calls per frame and name each caller before assuming the free
         * list is corrupt. TLS_ALLOC_PROBE=1. */
        case 0x8022A054: {
            static int s_alloc = -1;
            if (s_alloc < 0) s_alloc = getenv("TLS_ALLOC_PROBE") ? 1 : 0;
            if (s_alloc) {
                extern int g_runner_current_frame;
                static int s_frame = -1;
                static unsigned s_in_frame = 0, s_first_size = 0, s_last_size = 0;
                if (g_runner_current_frame != s_frame) {
                    if (s_in_frame > 0 && (s_in_frame > 100 || s_frame % 60 == 0)) {
                        printf("[TLS Alloc] frame %d: %u allocator calls (first size=%u last=%u)\n",
                               s_frame, s_in_frame, s_first_size, s_last_size);
                        fflush(stdout);
                    }
                    s_frame = g_runner_current_frame;
                    s_in_frame = 0;
                    s_first_size = ctx->gpr[4];
                }
                s_last_size = ctx->gpr[4];
                s_in_frame++;
            }
            /* TLS_ALLOC_PROBE=2 additionally inspects the free-list table
             * (manager+0x12C, 32 roots, blocks linked through +0x10) for a cycle.
             * The allocator's search loop only terminates when the next pointer reads
             * 0, so a self-referencing or circular chain is why the guest can burn the
             * whole block budget inside one call. */
            if (s_alloc >= 2) {
                extern int g_runner_current_frame;
                static int s_table_reports = 0;
                u32 mgr = ctx->gpr[3];
                if (s_table_reports < 6 && mgr && resolve_guest_pointer(ctx, mgr)) {
                    bool bad = false;
                    int bad_root = -1;
                    u32 cycle_at = 0, chain_len = 0;
                    for (int root = 0; root < 32 && !bad; root++) {
                        u32 b = mem_read32(ctx, mgr + 0x12C + (u32)root * 4);
                        u32 seen[128];
                        int n = 0;
                        u32 len = 0;
                        while (b && len < 4096) {
                            bool repeat = false;
                            for (int k = 0; k < n; k++) if (seen[k] == b) { repeat = true; break; }
                            if (repeat) { bad = true; bad_root = root; cycle_at = b; chain_len = len; break; }
                            if (n < 128) seen[n++] = b;
                            if (!resolve_guest_pointer(ctx, b)) { bad = true; bad_root = root; cycle_at = b; chain_len = len; break; }
                            b = mem_read32(ctx, b + 0x10);
                            len++;
                        }
                    }
                    if (bad) {
                        s_table_reports++;
                        printf("[TLS Alloc] frame=%d size=%u lr=0x%08X mgr=0x%08X: FREE LIST BROKEN "
                               "(root=%d cycle_at=0x%08X after %u blocks)\n",
                               g_runner_current_frame, ctx->gpr[4], ctx->lr, mgr, bad_root, cycle_at, chain_len);
                        for (int root = 0; root < 32; root++) {
                            u32 b = mem_read32(ctx, mgr + 0x12C + (u32)root * 4);
                            if (!b) continue;
                            printf("        root[%2d]=0x%08X hdr[0]=0x%08X hdr[4]=0x%08X next10=0x%08X next14=0x%08X\n",
                                   root, b, mem_read32(ctx, b), mem_read32(ctx, b + 4),
                                   mem_read32(ctx, b + 0x10), mem_read32(ctx, b + 0x14));
                        }
                        fflush(stdout);
                    }
                }
            }
            return 0; // Run original code
        }

        // Diagnostic monitoring for resource pipeline
        case 0x8046DD60: {
            static int s_dd60_cnt = 0;
            if (tls_draw_trace_enabled() && (++s_dd60_cnt <= 10 || s_dd60_cnt % 60 == 0)) {
                u32 sm = ctx->gpr[3];
                u32 q40 = sm ? mem_read32(ctx, sm + 0x4040) : 0;
                u32 cnt38 = sm ? mem_read32(ctx, sm + 0x4038) : 0;
                u32 cur_req = q40 ? mem_read32(ctx, q40 + 8) : 0;
                u8 cur_st = cur_req ? mem_read8(ctx, cur_req + 4) : 0;
                char cur_name[64] = {0};
                if (cur_req) {
                    for (int c = 0; c < 63; c++) cur_name[c] = (char)mem_read8(ctx, cur_req + 6 + c);
                }
                printf("[TLS 8046DD60] StreamManager::Update #%d sm=0x%08X (q40=0x%08X, cnt38=%u, req=0x%08X st=%u '%s', lr=0x%08X)\n",
                       s_dd60_cnt, sm, q40, cnt38, cur_req, cur_st, cur_name, ctx->lr);
                fflush(stdout);
            }
            return 0; // Run original code
        }
        case 0x8046C1C8: {
            if (++g_count_c1c8 <= 60) {
                printf("[TLS 8046C1C8] #%u lr=0x%08X\n", g_count_c1c8, ctx->lr);
                fflush(stdout);
            }
            return 0; // continue to original code
        }
        case 0x8046BBF0: {
            if (++g_count_bbf0 <= 300) {
                u32 item = ctx->gpr[4];
                u32 st = mem_read32(ctx, item);
                u32 cnt = mem_read32(ctx, item + 80);
                u32 sub0 = mem_read32(ctx, item + 84);
                u32 req = sub0 ? mem_read32(ctx, sub0) : 0;
                char name[64] = {0};
                if (req) {
                    for (int c = 0; c < 63; c++) name[c] = (char)mem_read8(ctx, req + 6 + c);
                }
                printf("[TLS 8046BBF0] #%u item=0x%08X (buf=0x%08X, len=%u) cnt=%u sub0=0x%08X: req=0x%08X st=%u (4=%u, 8=0x%08X, 28=%u, 32=%u) name='%s'\n",
                       g_count_bbf0, item, mem_read32(ctx, item + 4), mem_read32(ctx, item + 8),
                       cnt, sub0, req, req ? mem_read8(ctx, req + 4) : 0,
                       sub0 ? mem_read32(ctx, sub0 + 4) : 0, sub0 ? mem_read32(ctx, sub0 + 8) : 0,
                       sub0 ? mem_read32(ctx, sub0 + 28) : 0, sub0 ? mem_read32(ctx, sub0 + 32) : 0,
                       name);
                fflush(stdout);
            }
            return 0; // continue to original code
        }
        case 0x806254D0: {
            /* The frame is part of the evidence: these lines carry no frame and a previous
             * round read three of them as "frames 3700-3800" when the hook never said so
             * (handover 5c.46 AP-L addendum 3 / AP-M). */
            {
                extern int g_runner_current_frame;
                printf("[TLS CXDecompressFast] f=%d ENTER src=0x%08X dst=0x%08X (lr=0x%08X)\n",
                       g_runner_current_frame, ctx->gpr[3], ctx->gpr[4], ctx->lr);
            }
            fflush(stdout);
            return 0;
        }
        case 0x80695720: {
            u32 arr = ctx->gpr[3];
            u32 ctor = ctx->gpr[4];
            u32 elem_sz = ctx->gpr[6];
            u32 cnt = ctx->gpr[7];
            static int s_cna_cnt = 0;
            if (++s_cna_cnt <= 30 || cnt > 1000) {
                printf("[TLS MSL __construct_new_array] #%d arr=0x%08X ctor=0x%08X elem_sz=%u count=%u (lr=0x%08X)\n",
                       s_cna_cnt, arr, ctor, elem_sz, cnt, ctx->lr);
                fflush(stdout);
            }
            if (arr == 0 || !resolve_guest_pointer(ctx, arr) || cnt > 65536) {
                printf("[TLS MSL __construct_new_array] SAFELY SKIPPED CORRUPT ARRAY: arr=0x%08X cnt=%u (lr=0x%08X)!\n",
                       arr, cnt, ctx->lr);
                fflush(stdout);
                ctx->pc = ctx->lr;
                return 1;
            }
            return 0; // Run original code
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
            /* TLS_RES_LOAD_PROBE / TLS_RES_LOAD_DUMP: the loaded (data,size) pair every
             * resource publishes here (see tls_res_load_probe). Inert unless set. */
            tls_res_load_probe(ctx);
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

        // 0x800A0A68: Gauge / Actor node map registration
        case 0x800A0A68: {
            static u32 s_a68_cnt = 0;
            if (tls_draw_trace_enabled() && (++s_a68_cnt <= 20 || s_a68_cnt % 50 == 0)) {
                u32 slot = ctx->gpr[3];
                u32 k0 = slot ? mem_read32(ctx, slot) : 0;
                u32 k1 = slot ? mem_read32(ctx, slot + 4) : 0;
                printf("[TLS 800A0A68] #%u slot=0x%08X (k0=0x%08X, k1=0x%08X) r4=0x%08X r5=0x%08X (lr=0x%08X)\n",
                       s_a68_cnt, slot, k0, k1, ctx->gpr[4], ctx->gpr[5], ctx->lr);
                fflush(stdout);
            }
            extern u32 g_tls_rbtree_b04_cnt;
            extern u32 g_tls_rbtree_b88_cnt;
            g_tls_rbtree_b04_cnt = 0;
            g_tls_rbtree_b88_cnt = 0;
            return 0;
        }

        // 0x800A0C3C & 0x800A0CB8: Red-Black tree upward traversal loops in std::map::erase
        // Only break if explicitly looping back to header node 0x807C73CC
        case 0x800A0C3C: {
            if (ctx->gpr[3] == 0x807C73CC || ctx->gpr[29] == 0x807C73CC) {
                ctx->pc = 0x800A0CF8;
                return 1;
            }
            return 0;
        }
        case 0x800A0CB8: {
            if (ctx->gpr[3] == 0x807C73CC || ctx->gpr[30] == 0x807C73CC) {
                ctx->pc = 0x800A0CF8;
                return 1;
            }
            return 0;
        }

        // 0x800A1F84: _Rb_tree_rebalance_for_erase in fn_800A1F84
        // Bypassed to eliminate all infinite tree rotation cycles on circular or corrupted UI gauge nodes
        case 0x800A1F84: {
            static u32 s_1f84_cnt = 0;
            if (tls_draw_trace_enabled() && (++s_1f84_cnt <= 10 || s_1f84_cnt % 50 == 0)) {
                printf("[TLS RBTree] Bypassed _Rb_tree_rebalance_for_erase (#%u, z=0x%08X root=0x%08X lr=0x%08X)\n",
                       s_1f84_cnt, ctx->gpr[3], ctx->gpr[4], ctx->lr);
                fflush(stdout);
            }
            ctx->pc = ctx->lr;
            return 1;
        }

        // 0x8003E120 & 0x8003E130: _Rb_tree_rebalance (insertion)
        case 0x8003E120: {
            u32 node = ctx->gpr[3];
            u32 root = ctx->gpr[4];
            if (node) {
                u32 ea = node + 8;
                mem_write32(ctx, ea, mem_read32(ctx, ea) | 1);
            }
            if (root) {
                u32 ea = root + 8;
                mem_write32(ctx, ea, mem_read32(ctx, ea) & ~1u);
            }
            ctx->pc = ctx->lr;
            return 1;
        }
        case 0x8003E130: {
            ctx->pc = ctx->lr;
            return 1;
        }
        case 0x805F3A80: // dead: mid-function address inside OS init (disassembly: `bl 0x805F6C70`)
        case 0x805F3B00: // dead: not a function entry either
        case 0x805F3B40: { // dead: not a function entry either
            /* These three are not function entries - 0x805F3A80 is the middle of a
             * larger OS-init routine - so the dispatcher can only reach them if
             * something jumps into the middle of that function, which intra-chunk
             * control flow does with a plain goto, not a dispatch. The stubs are
             * therefore never executed and are NOT the reason any caller misbehaves.
             * The runtime's real message-queue entry points are OSSendMessage at
             * 0x805F26D0 and OSReceiveMessage at 0x805F27A0, and those run the
             * recompiled code (verified: the sender bumps mq->used at +0x1C and wakes
             * mq+8; the receiver sleeps on mq+8). Kept only so the addresses are not
             * silently handed to the interpreter if that ever changes. */
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

        // EXISync: Immediately acknowledge transfer complete
        case 0x805E7FB0: {
            u32 chan = ctx->gpr[3];
            u32 ecb = 0x807CAF50 + (chan & 3) * 64;
            u32 st = mem_read32(ctx, ecb + 0x0C);
            mem_write32(ctx, ecb + 0x0C, st & ~0x7u);
            ctx->gpr[3] = 1;
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

        // OSYieldThread (0x805EAA00: sc; blr)
        case 0x805EAA00: {
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
        //
        // NAND / ISFS probe (TLS_NAND_PROBE=1, inert by default).
        //
        // The save-data verdict is decided *above* the host file: the title's mode 5
        // runs fn_800A472C, which is
        //     *out_err = 0;
        //     err = NANDGetLength(mgr + 0x234, out_len);   // fn_8061EF90
        //     if (err == 0) return 1;
        //     *out_err = nandErrorToMsg(err);              // fn_800A4494
        //     return 0;
        // and the caller (0x80534C7C..0x80534CFC) turns that into mode 6 (error /
        // save confirm) or mode 9 (the "corrupted" dialog). NANDGetLength asks
        // ISFS for the *open fd's* stats: fn_8061B860 -> fn_8061D080(fd, cmd=11,
        // in=NULL, in_len=0, out, out_len=8) and takes the first word of the reply
        // as the file length. Every one of those answers is produced by the HLE
        // below, so this probe prints the question and the answer at each layer.
        // Count-capped: a boot makes only a handful of NAND calls.
        case 0x8061C590:
        case 0x8061C650: { // IOS_OpenAsync
            u32 path_addr = ctx->gpr[3];
            u32 mode = ctx->gpr[4];
            u32 cb = ctx->gpr[5];
            u32 usrdata = ctx->gpr[6];
            const char* path = (const char*)resolve_guest_pointer(ctx, path_addr);
            printf("[TLS IOS_OpenAsync] %s (mode=%u cb=0x%08X)\n", path ? path : "(null)", mode, cb);
            fflush(stdout);

            if (path && strstr(path, "/dev/net")) {
                printf("[TLS IOS_OpenAsync] %s -> device does not exist (offline code -6)\n", path);
                fflush(stdout);
                tls_ipc_enqueue_callback(cb, -6, usrdata);
                ctx->gpr[3] = 0;
                ctx->pc = ctx->lr;
                return 1;
            }

            /* Every non-/dev path is a file on the NAND, so it must be opened from
             * the host file set rather than handed a fabricated fd with no backing
             * file. 5c.40: this used to special-case only names containing
             * "savedata", so IOS_OpenAsync("/banner.bin") *succeeded* with
             * fp=none and the following 29 344-byte read returned 0 - a lie that
             * let the guest believe an absent banner had been read.
             * /shared2/sys/SYSCONF is the one exception: we hold no SYSCONF image
             * (a separate defect - it carries boot settings, not save data), so it
             * keeps answering an empty configuration for now. */
            FILE* fp = NULL;
            if (isfs_is_nand_file_path(path) && strcmp(path, "/shared2/sys/SYSCONF") != 0) {
                if (!ios_open_nand_file(path, mode, &fp)) {
                    printf("[TLS IOS_OpenAsync] %s -> no such file (-6), NAND has no such file\n", path);
                    fflush(stdout);
                    tls_ipc_enqueue_callback(cb, -6, usrdata); // IPC_RESULT_NOEXISTS
                    ctx->gpr[3] = 0; // IPC_ERR_NONE
                    ctx->pc = ctx->lr;
                    return 1;
                }
            }

            int fd = ios_alloc_fd(path, mode, fp);
            if (tls_nand_probe_on()) {
                char msg[256];
                snprintf(msg, sizeof(msg), "IOS_OpenAsync '%s' mode=%u -> fd=%d fp=%s",
                         path ? path : "(null)", mode, fd, fp ? "host-file" : "none");
                tls_nand_probe_slot(msg);
            }
            tls_ipc_enqueue_callback(cb, fd, usrdata); // Return fd
            ctx->gpr[3] = 0; // IPC_ERR_NONE
            ctx->pc = ctx->lr;
            return 1;
        }
        case 0x8061C6B0: { // IOS_Open
            u32 path_addr = ctx->gpr[3];
            u32 mode = ctx->gpr[4];
            const char* path = (const char*)resolve_guest_pointer(ctx, path_addr);
            printf("[TLS IOS_Open] %s (mode=%u)\n", path ? path : "(null)", mode);
            fflush(stdout);

            if (path && strstr(path, "/dev/net")) {
                printf("[TLS IOS_Open] %s -> device does not exist (offline code -6)\n", path);
                fflush(stdout);
                ctx->gpr[3] = (u32)-6; // IPC_RESULT_NOEXISTS
                ctx->pc = ctx->lr;
                return 1;
            }

            /* Same rule as IOS_OpenAsync: a NAND path with no host file does not
             * open. /shared2/sys/SYSCONF stays the documented exception. */
            FILE* fp = NULL;
            if (isfs_is_nand_file_path(path) && strcmp(path, "/shared2/sys/SYSCONF") != 0) {
                if (!ios_open_nand_file(path, mode, &fp)) {
                    printf("[TLS IOS_Open] %s -> no such file (-6), NAND has no such file\n", path);
                    fflush(stdout);
                    ctx->gpr[3] = (u32)-6; // IPC_RESULT_NOEXISTS
                    ctx->pc = ctx->lr;
                    return 1;
                }
            }
            int fd = ios_alloc_fd(path, mode, fp);
            if (tls_nand_probe_on()) {
                char msg[256];
                snprintf(msg, sizeof(msg), "IOS_Open '%s' mode=%u -> fd=%d fp=%s",
                         path ? path : "(null)", mode, fd, fp ? "host-file" : "none");
                tls_nand_probe_slot(msg);
            }
            ctx->gpr[3] = (u32)fd;
            ctx->pc = ctx->lr;
            return 1;
        }
        case 0x8061C7E0: { // IOS_CloseAsync
            u32 fd = ctx->gpr[3];
            u32 cb = ctx->gpr[4];
            u32 usrdata = ctx->gpr[5];
            ios_close_fd(fd);
            /* 5c.42 I: this used to be handled as *synchronous* IOS_Close, so the
             * completion callback was dropped and any async close left the guest
             * waiting forever. The SDK settles it: src/isfs.c fn_8061BB80 is an async
             * wrapper (it allocates a context and passes _isfsFuncCb), and its only
             * jump target is this function with (fd, cb, usrdata). Measured symptom:
             * the save manager parks at state 18 after opening /tmp/savedata.dat for
             * write, with no further NAND traffic. */
            if (cb >= 0x80003000u && cb < 0x80800000u && (cb & 3u) == 0) {
                tls_ipc_enqueue_callback(cb, 0, usrdata);
            }
            ctx->gpr[3] = 0; // Success
            ctx->pc = ctx->lr;
            return 1;
        }
        case 0x8061C840: { // IOS_CloseAsync
            u32 fd = ctx->gpr[3];
            u32 cb = ctx->gpr[4];
            u32 usrdata = ctx->gpr[5];
            ios_close_fd(fd);
            tls_ipc_enqueue_callback(cb, 0, usrdata);
            ctx->gpr[3] = 0;
            ctx->pc = ctx->lr;
            return 1;
        }
        case 0x8061C8A0: { // IOS_Read
            u32 fd = ctx->gpr[3];
            u32 buf_addr = ctx->gpr[4];
            u32 len = ctx->gpr[5];
            void* buf = resolve_guest_pointer(ctx, buf_addr);
            u32 got = 0;
            /* 5c.40: an fd that was never opened is an error, not a successful
             * zero-filled read. The save manager keeps operating on fd 0 after its
             * open of /savedata.dat fails (10 000-frame trace: 17 NANDSeek calls at
             * lr=0x800A4DA8 walking slot offsets 0x20, 0x13580, 0x26AE0 ... with no
             * open fd behind them), because every fd-0 read/seek answered "fine". */
            if (!(fd >= 1 && fd < 16 && s_ios_files[fd].in_use)) {
                if (tls_nand_probe_on()) {
                    char msg[192];
                    snprintf(msg, sizeof(msg), "IOS_Read fd=%u NOT OPEN -> -6", fd);
                    tls_nand_probe_slot(msg);
                }
                ctx->gpr[3] = (u32)-6;
                ctx->pc = ctx->lr;
                return 1;
            }
            if (buf && len > 0) {
                FILE* fp = ios_fd_file(fd);
                if (fp) {
                    /* Report what was actually read. Claiming `len` unconditionally
                     * fabricates data past EOF, and the guest's save-header checksum
                     * then fails on bytes that were never in any file. */
                    got = (u32)fread(buf, 1, len, fp);
                    if (got < len) memset((uint8_t*)buf + got, 0, len - got);
                } else {
                    memset(buf, 0, len);
                }
            }
            if (tls_nand_probe_on()) {
                char msg[256];
                snprintf(msg, sizeof(msg), "IOS_Read fd=%u '%s' len=%u -> %u",
                         fd, ios_fd_path(fd), len, got);
                tls_nand_probe_slot(msg);
            }
            ctx->gpr[3] = (u32)got; // bytes actually read
            ctx->pc = ctx->lr;
            return 1;
        }
        case 0x8061C950: { // IOS_ReadAsync
            u32 fd = ctx->gpr[3];
            u32 buf_addr = ctx->gpr[4];
            u32 len = ctx->gpr[5];
            u32 cb = ctx->gpr[6];
            u32 usrdata = ctx->gpr[7];
            void* buf = resolve_guest_pointer(ctx, buf_addr);
            u32 got = 0;
            if (!(fd >= 1 && fd < 16 && s_ios_files[fd].in_use)) {
                if (tls_nand_probe_on()) {
                    char msg[192];
                    snprintf(msg, sizeof(msg), "IOS_ReadAsync fd=%u NOT OPEN -> -6", fd);
                    tls_nand_probe_slot(msg);
                }
                tls_ipc_enqueue_callback(cb, -6, usrdata);
                ctx->gpr[3] = 0;
                ctx->pc = ctx->lr;
                return 1;
            }
            if (buf && len > 0) {
                FILE* fp = ios_fd_file(fd);
                if (fp) {
                    got = (u32)fread(buf, 1, len, fp);
                    if (got < len) memset((uint8_t*)buf + got, 0, len - got);
                } else {
                    memset(buf, 0, len);
                }
            }
            if (tls_nand_probe_on()) {
                char msg[256];
                snprintf(msg, sizeof(msg), "IOS_ReadAsync fd=%u '%s' len=%u -> %u",
                         fd, ios_fd_path(fd), len, got);
                tls_nand_probe_slot(msg);
            }
            tls_ipc_enqueue_callback(cb, (s32)got, usrdata);
            ctx->gpr[3] = 0;
            ctx->pc = ctx->lr;
            return 1;
        }
        case 0x8061CA50: // IOS_Write
        case 0x8061CAB0: {
            u32 fd = ctx->gpr[3];
            u32 buf_addr = ctx->gpr[4];
            u32 len = ctx->gpr[5];
            void* buf = resolve_guest_pointer(ctx, buf_addr);
            if (!(fd >= 1 && fd < 16 && s_ios_files[fd].in_use)) {
                if (tls_nand_probe_on()) {
                    char msg[192];
                    snprintf(msg, sizeof(msg), "IOS_Write fd=%u NOT OPEN -> -6", fd);
                    tls_nand_probe_slot(msg);
                }
                ctx->gpr[3] = (u32)-6;
                ctx->pc = ctx->lr;
                return 1;
            }
            if (buf && len > 0) {
                FILE* fp = s_ios_files[fd].fp;
                if (fp) {
                    fwrite(buf, 1, len, fp);
                    fflush(fp);
                }
            }
            ctx->gpr[3] = len; // Return bytes written = len
            ctx->pc = ctx->lr;
            return 1;
        }
        case 0x8061CB60: { // IOS_WriteAsync
            u32 fd = ctx->gpr[3];
            u32 buf_addr = ctx->gpr[4];
            u32 len = ctx->gpr[5];
            u32 cb = ctx->gpr[6];
            u32 usrdata = ctx->gpr[7];
            void* buf = resolve_guest_pointer(ctx, buf_addr);
            if (!(fd >= 1 && fd < 16 && s_ios_files[fd].in_use)) {
                if (tls_nand_probe_on()) {
                    char msg[192];
                    snprintf(msg, sizeof(msg), "IOS_WriteAsync fd=%u NOT OPEN -> -6", fd);
                    tls_nand_probe_slot(msg);
                }
                tls_ipc_enqueue_callback(cb, -6, usrdata);
                ctx->gpr[3] = 0;
                ctx->pc = ctx->lr;
                return 1;
            }
            if (buf && len > 0) {
                FILE* fp = s_ios_files[fd].fp;
                if (fp) {
                    fwrite(buf, 1, len, fp);
                    fflush(fp);
                }
            }
            tls_ipc_enqueue_callback(cb, (s32)len, usrdata);
            ctx->gpr[3] = 0;
            ctx->pc = ctx->lr;
            return 1;
        }
        case 0x8061CC60: { // IOS_Seek
            u32 fd = ctx->gpr[3];
            s32 offset = (s32)ctx->gpr[4];
            u32 origin = ctx->gpr[5];
            int whence = SEEK_SET;
            if (origin == 1) whence = SEEK_CUR;
            else if (origin == 2) whence = SEEK_END;
            long cur_pos = 0;
            if (!(fd >= 1 && fd < 16 && s_ios_files[fd].in_use)) {
                if (tls_nand_probe_on()) {
                    char msg[192];
                    snprintf(msg, sizeof(msg), "IOS_Seek fd=%u NOT OPEN off=0x%X -> -6", fd, offset);
                    tls_nand_probe_slot(msg);
                }
                ctx->gpr[3] = (u32)-6;
                ctx->pc = ctx->lr;
                return 1;
            }
            FILE* fp = s_ios_files[fd].fp;
            if (fp) {
                fseek(fp, offset, whence);
                cur_pos = ftell(fp);
            }
            ctx->gpr[3] = (u32)cur_pos;
            ctx->pc = ctx->lr;
            return 1;
        }
        case 0x8061CD70: { // IOS_SeekAsync
            u32 fd = ctx->gpr[3];
            s32 offset = (s32)ctx->gpr[4];
            u32 origin = ctx->gpr[5];
            u32 cb = ctx->gpr[6];
            u32 usrdata = ctx->gpr[7];
            int whence = SEEK_SET;
            if (origin == 1) whence = SEEK_CUR;
            else if (origin == 2) whence = SEEK_END;
            long cur_pos = 0;
            if (!(fd >= 1 && fd < 16 && s_ios_files[fd].in_use)) {
                if (tls_nand_probe_on()) {
                    char msg[192];
                    snprintf(msg, sizeof(msg), "IOS_SeekAsync fd=%u NOT OPEN off=0x%X -> -6", fd, offset);
                    tls_nand_probe_slot(msg);
                }
                tls_ipc_enqueue_callback(cb, -6, usrdata);
                ctx->gpr[3] = 0;
                ctx->pc = ctx->lr;
                return 1;
            }
            FILE* fp = s_ios_files[fd].fp;
            if (fp) {
                fseek(fp, offset, whence);
                cur_pos = ftell(fp);
            }
            tls_ipc_enqueue_callback(cb, (s32)cur_pos, usrdata);
            ctx->gpr[3] = 0;
            ctx->pc = ctx->lr;
            return 1;
        }
        case 0x8061CE50:
        case 0x8061D080: { // IOS_Ioctl
            u32 fd = ctx->gpr[3];
            u32 cmd = ctx->gpr[4];
            u32 in_buf = ctx->gpr[5];
            u32 in_len = ctx->gpr[6];
            u32 out_buf = ctx->gpr[7];
            u32 out_len = ctx->gpr[8];
            u32 first_out = 0xDEADBEEFu;
            /* An fd that was never opened must not answer "success". The title's
             * save check opens /savedata.dat, and when that open fails the SDK's
             * NAND handle keeps fd 0, so NANDGetLength -> ISFS_GetFileStats(fd=0)
             * -> this ioctl (cmd 11) landed here. Answering success with the
             * length of a non-existent FILE* (0) made the guest see "the save
             * exists and is 0 bytes", which the mode-5 comparison at 0x80534CC8
             * reads as "lengths equal" -> mode 9, the "data is corrupted" dialog.
             * A stats query on an unopened fd is an error on hardware too. */
            if (!(fd >= 1 && fd < 16 && s_ios_files[fd].in_use)) {
                if (tls_nand_probe_on()) {
                    char msg[192];
                    snprintf(msg, sizeof(msg),
                             "IOS_Ioctl fd=%u NOT OPEN cmd=%u -> -6 (IPC_NOEXISTS)",
                             fd, cmd);
                    tls_nand_probe_slot(msg);
                }
                ctx->gpr[3] = (u32)-6; // IPC_RESULT_NOEXISTS
                ctx->pc = ctx->lr;
                return 1;
            }
            /* /dev/fs is a device with ioctl commands of its own (3 CreateDir,
             * 6 GetAttr, 7 Delete, 8 Rename, 9 CreateFile). 5c.40: they used to be
             * dropped because the servicer was gated on `num_io > 0`. Service them
             * here, as ioctls, and let the result stand in for the reply. */
            if (strcmp(ios_fd_path(fd), "/dev/fs") == 0 && tls_isfs_service_on()) {
                s32 r = tls_isfs_ioctl_service(ctx, cmd, in_buf, in_len, out_buf, out_len);
                ctx->gpr[3] = (u32)r;
                ctx->pc = ctx->lr;
                return 1;
            }
            /* ISFS GetAttr (cmd 6 on /dev/fs). The SDK sends the NUL-terminated guest
             * path in the input buffer and expects a 76-byte attribute reply. Until now
             * every path was answered "success" with a zeroed reply, i.e. "the file
             * exists, permissions 0, length 0" - and /savedata.dat is exactly the path
             * the save manager asks about first. On a console with no save file that lie
             * makes the manager open a file that was never there, fail, and report the
             * save as corrupted (handover 5c.38). The host NAND is the only filesystem
             * this player has: a path it does not hold does not exist, and the faithful
             * answer is IPC_NOEXISTS (-6), which the guest's own NAND layer already maps
             * like a missing file. A path that does exist is reported with its real
             * length instead of a fabricated zero. */
            int isfs_getattr = (strcmp(ios_fd_path(fd), "/dev/fs") == 0 && cmd == 6);
            u32 isfs_size = 0;
            if (isfs_getattr) {
                char gp[80];
                u32 plen = isfs_read_guest_path(ctx, in_buf, in_len, gp, sizeof(gp));
                if (!(plen > 0 && isfs_host_file_size(gp, &isfs_size))) {
                    if (tls_nand_probe_on()) {
                        char msg[224];
                        snprintf(msg, sizeof(msg),
                                 "ISFS GetAttr '%s' -> -6 (IPC_NOEXISTS: not on this NAND)",
                                 gp);
                        tls_nand_probe_slot(msg);
                    }
                    ctx->gpr[3] = (u32)-6;
                    ctx->pc = ctx->lr;
                    return 1;
                }
            }
            void* dst = (out_buf && out_len > 0) ? resolve_guest_pointer(ctx, out_buf) : NULL;
            /* ISFS command 11 is the file-stats query on an open fd: an 8-byte
             * reply {u32 length; u32 offset}, and NANDGetLength (fn_8061EF90)
             * takes the first word as the save file's length. Answering "success"
             * with the buffer untouched leaves whatever the IOS heap happens to
             * contain in there, which is not a length of anything. */
            if (dst) {
                if (isfs_getattr) {
                    memset(dst, 0, out_len);
                    if (out_len >= 4) mem_write32(ctx, out_buf + 0, isfs_size);
                } else if (cmd == 11 && out_len >= 8) {
                    mem_write32(ctx, out_buf + 0, ios_fd_length(fd));
                    FILE* fp = ios_fd_file(fd);
                    mem_write32(ctx, out_buf + 4, fp ? (u32)ftell(fp) : 0u);
                } else {
                    memset(dst, 0, out_len);
                }
                first_out = mem_read32(ctx, out_buf);
            }
            if (tls_nand_probe_on()) {
                char msg[256];
                if (strcmp(ios_fd_path(fd), "/dev/fs") == 0 && (cmd == 4 || cmd == 6 || cmd == 8) && in_buf) {
                    /* /dev/fs carries the NUL-terminated guest path in the input buffer;
                     * print it, because "cmd=6 -> success" is meaningless without knowing
                     * which file it was asked about (handover 5c.38). */
                    char gp[80];
                    u32 n = 0;
                    for (; n + 1 < sizeof(gp) && n < in_len; n++) {
                        u8 c = mem_read8(ctx, in_buf + n);
                        gp[n] = (char)c;
                        if (!c) break;
                    }
                    gp[sizeof(gp) - 1] = '\0';
                    snprintf(msg, sizeof(msg),
                             "IOS_Ioctl fd=%u '/dev/fs' cmd=%u path='%s' out=0x%08X/%u -> out0=%u",
                             fd, cmd, gp, out_buf, out_len, first_out);
                } else {
                    snprintf(msg, sizeof(msg),
                             "IOS_Ioctl fd=%u '%s' cmd=%u in=0x%08X/%u out=0x%08X/%u -> out0=%u",
                             fd, ios_fd_path(fd), cmd, in_buf, in_len, out_buf, out_len, first_out);
                }
                tls_nand_probe_slot(msg);
            }
            ctx->gpr[3] = 0; // Success
            ctx->pc = ctx->lr;
            return 1;
        }
        case 0x8061CF40:
        case 0x8061CF80:
        case 0x8061D1B0: { // IOS_IoctlAsync
            u32 fd = ctx->gpr[3];
            u32 cmd = ctx->gpr[4];
            u32 in_buf = ctx->gpr[5];
            u32 in_len = ctx->gpr[6];
            u32 out_buf = ctx->gpr[7];
            u32 out_len = ctx->gpr[8];
            u32 cb = ctx->gpr[9];
            u32 usrdata = ctx->gpr[10];
            /* Same rule as the synchronous ioctl: an fd that was never opened is an
             * error, not a successful stats query returning 0. */
            if (!(fd >= 1 && fd < 16 && s_ios_files[fd].in_use)) {
                if (tls_nand_probe_on()) {
                    char msg[192];
                    snprintf(msg, sizeof(msg),
                             "IOS_IoctlAsync fd=%u NOT OPEN cmd=%u -> -6 (IPC_NOEXISTS)",
                             fd, cmd);
                    tls_nand_probe_slot(msg);
                }
                tls_ipc_enqueue_callback(cb, -6, usrdata);
                ctx->gpr[3] = 0;
                ctx->pc = ctx->lr;
                return 1;
            }
            /* Same rule as the synchronous ioctl: /dev/fs ioctl commands are
             * serviced as a device (5c.40). The result goes into the callback, which
             * is where the SDK's async wrappers read it from. */
            if (strcmp(ios_fd_path(fd), "/dev/fs") == 0 && tls_isfs_service_on()) {
                s32 r = tls_isfs_ioctl_service(ctx, cmd, in_buf, in_len, out_buf, out_len);
                tls_ipc_enqueue_callback(cb, r, usrdata);
                ctx->gpr[3] = 0;
                ctx->pc = ctx->lr;
                return 1;
            }
            /* Same GetAttr rule as the synchronous ioctl (see there): a path the host
             * NAND does not hold answers ENOENT instead of "exists, 0 bytes". */
            u32 isfs_size = 0;
            int isfs_getattr = (strcmp(ios_fd_path(fd), "/dev/fs") == 0 && cmd == 6);
            if (isfs_getattr) {
                char gp[80];
                u32 plen = isfs_read_guest_path(ctx, in_buf, in_len, gp, sizeof(gp));
                if (!(plen > 0 && isfs_host_file_size(gp, &isfs_size))) {
                    if (tls_nand_probe_on()) {
                        char msg[224];
                        snprintf(msg, sizeof(msg),
                                 "ISFS GetAttrAsync '%s' -> -6 (IPC_NOEXISTS: not on this NAND)",
                                 gp);
                        tls_nand_probe_slot(msg);
                    }
                    tls_ipc_enqueue_callback(cb, -6, usrdata);
                    ctx->gpr[3] = 0;
                    ctx->pc = ctx->lr;
                    return 1;
                }
            }
            if (out_buf && out_len > 0) {
                void* dst = resolve_guest_pointer(ctx, out_buf);
                if (dst) {
                    if (isfs_getattr) {
                        memset(dst, 0, out_len);
                        if (out_len >= 4) mem_write32(ctx, out_buf + 0, isfs_size);
                    } else if (cmd == 11 && out_len >= 8) {
                        mem_write32(ctx, out_buf + 0, ios_fd_length(fd));
                        FILE* fp = ios_fd_file(fd);
                        mem_write32(ctx, out_buf + 4, fp ? (u32)ftell(fp) : 0u);
                    } else {
                        memset(dst, 0, out_len);
                    }
                }
            }
            if (tls_nand_probe_on()) {
                char msg[256];
                snprintf(msg, sizeof(msg),
                         "IOS_IoctlAsync fd=%u '%s' cmd=%u in=0x%08X/%u out=0x%08X/%u cb=0x%08X",
                         fd, ios_fd_path(fd), cmd, in_buf, in_len, out_buf, out_len, cb);
                tls_nand_probe_slot(msg);
            }
            tls_ipc_enqueue_callback(cb, 0, usrdata);
            ctx->gpr[3] = 0;
            ctx->pc = ctx->lr;
            return 1;
        }
        case 0x8061D2F0: { // IOS_IoctlvAsync
            u32 fd = ctx->gpr[3];
            u32 cmd = ctx->gpr[4];
            u32 num_in = ctx->gpr[5];
            u32 num_io = ctx->gpr[6];
            u32 vecs = ctx->gpr[7];
            u32 cb = ctx->gpr[8];
            u32 usrdata = ctx->gpr[9];
            if (tls_nand_probe_on()) {
                char msg[256];
                snprintf(msg, sizeof(msg),
                         "IOS_IoctlvAsync fd=%u '%s' cmd=%u nin=%u nio=%u vecs=0x%08X cb=0x%08X",
                         fd, ios_fd_path(fd), cmd, num_in, num_io, vecs, cb);
                tls_nand_probe_slot(msg);
            }
            /* ISFS: an operation on /dev/fs. The SDK's callback (_isfsFuncCb) copies
             * the reply payload only when the result is >= 0, so the result code is
             * part of the answer: a truthful error is what makes the guest's NAND
             * layer continue (see tls_isfs_ioctlv_service).
             * Only for /dev/fs: an "io" vector is bidirectional (it carries input
             * bytes too), so touching the /dev/es vectors would corrupt those
             * calls' inputs. */
            s32 isfs_result = 0;
            /* /dev/es: answer the title id and home-directory queries instead of
             * handing back zeroed buffers (5c.41 G). */
            if (strcmp(ios_fd_path(fd), "/dev/es") == 0) {
                tls_es_ioctlv_service(ctx, cmd, num_in, num_io, vecs);
            }
            if (num_io > 0 && strcmp(ios_fd_path(fd), "/dev/fs") == 0 && tls_isfs_service_on()) {
                isfs_result = tls_isfs_ioctlv_service(ctx, fd, cmd, num_in, num_io, vecs);
            }
            tls_ipc_enqueue_callback(cb, isfs_result, usrdata);
            ctx->gpr[3] = 0;
            ctx->pc = ctx->lr;
            return 1;
        }
        case 0x8061D3E0: { // IOS_Ioctlv
            u32 fd = ctx->gpr[3];
            u32 cmd = ctx->gpr[4];
            u32 num_in = ctx->gpr[5];
            u32 num_io = ctx->gpr[6];
            u32 vecs = ctx->gpr[7];
            if (tls_nand_probe_on()) {
                char msg[512];
                int n = snprintf(msg, sizeof(msg), "IOS_Ioctlv fd=%u '%s' cmd=%u nin=%u nio=%u vecs=0x%08X",
                                 fd, ios_fd_path(fd), cmd, num_in, num_io, vecs);
                /* Each IOSIoVector is {void* data; u32 size;}: print data+size and
                 * the first word of each, enough to recognise the ISFS request. */
                for (u32 i = 0; i < num_in + num_io && i < 6 && n > 0 && n < (int)sizeof(msg) - 40; i++) {
                    u32 vp = vecs + i * 8;
                    u32 d = mem_read32(ctx, vp);
                    u32 s = mem_read32(ctx, vp + 4);
                    u32 w0 = (d && resolve_guest_pointer(ctx, d)) ? mem_read32(ctx, d) : 0;
                    n += snprintf(msg + n, sizeof(msg) - n, " v%u[0x%08X/%u w0=0x%08X]", i, d, s, w0);
                }
                tls_nand_probe_slot(msg);
            }
            s32 isfs_result = 0;
            /* /dev/es: answer the title id and home-directory queries instead of
             * handing back zeroed buffers (5c.41 G). */
            if (strcmp(ios_fd_path(fd), "/dev/es") == 0) {
                tls_es_ioctlv_service(ctx, cmd, num_in, num_io, vecs);
            }
            if (num_io > 0 && strcmp(ios_fd_path(fd), "/dev/fs") == 0 && tls_isfs_service_on()) {
                isfs_result = tls_isfs_ioctlv_service(ctx, fd, cmd, num_in, num_io, vecs);
            }
            ctx->gpr[3] = (u32)isfs_result; // ISFS result, 0 = success
            ctx->pc = ctx->lr;
            return 1;
        }

        // ISFS / NAND entry points. Probe only: every one of these is guest SDK
        // code whose real work lands on the HLE'd IOS_* calls above, so run it.
        case 0x8061B6D0:   // ISFS_Open(path, mode)
        case 0x8061B7A0:   // ISFS_OpenAsync(path, mode, cb, arg)
        case 0x8061B860:   // ISFS get-file-stats on an open fd (cmd 11)
        case 0x8061EF90:   // NANDGetLength(info, u32* length)
        {
            if (tls_nand_probe_on()) {
                char msg[256];
                if (address == 0x8061EF90u) {
                    u32 info = ctx->gpr[3];
                    u32 fd = (info >= 0x80000000u && info < 0x94000000u) ? mem_read32(ctx, info) : 0;
                    snprintf(msg, sizeof(msg), "NANDGetLength info=0x%08X fd=%u out_len=0x%08X lr=0x%08X",
                             info, fd, ctx->gpr[4], ctx->lr);
                } else if (address == 0x8061B860u) {
                    u32 fd = ctx->gpr[3];
                    snprintf(msg, sizeof(msg), "ISFS_GetFileStats fd=%u out=0x%08X lr=0x%08X",
                             fd, ctx->gpr[4], ctx->lr);
                } else {
                    const char* p = (const char*)resolve_guest_pointer(ctx, ctx->gpr[3]);
                    snprintf(msg, sizeof(msg), "%s path='%s' mode=%u lr=0x%08X",
                             (address == 0x8061B6D0u) ? "ISFS_Open" : "ISFS_OpenAsync",
                             p ? p : "(null)", ctx->gpr[4], ctx->lr);
                }
                tls_nand_probe_slot(msg);
            }
            return 0; // Run the guest's own implementation
        }

        // SC (System Config) services
        case 0x80622F40: { // SCCheckStatus
            ctx->gpr[3] = 0; // SC_STATUS_READY (0 = ready, 1 = busy)
            ctx->pc = ctx->lr;
            return 1;
        }

        /* 5c.41 B: fn_800A2DE0 dispatches on mgr+348 through a 26-entry pointer
         * table at 0x807789D8 read with `lwzx`/`bctr`. In the static image only
         * entry 1 (0x803A41C4) is non-zero, so the table is filled at run time and
         * no static read can say which state owns a case. Dump it once per run. */
        case 0x800A2E18: {
            if (tls_nand_probe_on()) {
                static u32 s_tab_n = 0;
                if (s_tab_n < 1) {
                    s_tab_n++;
                    u32 mgr = ctx->gpr[3];
                    printf("[TLS StateTab] mgr=0x%08X state=%u table@0x807789D8:\n", mgr,
                           mgr ? mem_read32(ctx, mgr + 348) : 0);
                    for (u32 st = 0; st < 26; st++) {
                        u32 h = mem_read32(ctx, 0x807789D8 + st * 4);
                        if (h) printf("  state %2u -> 0x%08X\n", st, h);
                    }
                    fflush(stdout);
                }
            }
            return 0;
        }

        /* 5c.41 F: fn_800A4AD4 is the manager entry that sets kind=0 (the branch that
         * holds NANDCreateAsync at 0x800A3198) and state=2. Its only caller is the
         * TITLE task, at 0x80535674 - inside the mode-12/16/20 stretch that answers
         * the save dialog. fn_800A48B8 (kind 2/3, state 1) is what the save driver
         * calls instead. Inert probe: is the kind-0 request ever made? */
        case 0x800A4AD4: case 0x80535678: {
            if (tls_nand_probe_on()) {
                static u32 s_4ad4 = 0;
                if (s_4ad4 < 20) {
                    s_4ad4++;
                    u32 obj = ctx->gpr[3];
                    char msg[224];
                    snprintf(msg, sizeof(msg),
                             "SAVEKIND0 pc=0x%08X obj=0x%08X kind(+72)=%u state=%u "
                             "result(+344)=%u lr=0x%08X",
                             ctx->pc, obj,
                             obj ? mem_read32(ctx, obj + 72) : 0,
                             obj ? mem_read32(ctx, obj + 348) : 0,
                             obj ? mem_read32(ctx, obj + 344) : 0, ctx->lr);
                    tls_nand_probe_slot(msg);
                }
            }
            return 0;
        }

        /* 5c.41 D: the save driver's four fn_800A48B8 calls, at their RETURN
         * addresses (a bl return address is a dispatch point, so these fire). The
         * API entry stores 1 into +348, but no Update ever then sees state 1, so
         * print the state immediately after each call returns to see who clears it. */
        case 0x803B81E8: case 0x803B8E14: case 0x803B8F30: case 0x803B8FD4: {
            if (tls_nand_probe_on()) {
                static u32 s_ret = 0;
                if (s_ret < 30) {
                    s_ret++;
                    u32 obj = ctx->gpr[31];
                    char msg[224];
                    snprintf(msg, sizeof(msg),
                             "SAVEDRV ret=0x%08X r3=0x%08X obj(r31)=0x%08X state(+348)=%u "
                             "kind(+72)=%u wait(+368)=%d",
                             ctx->pc, ctx->gpr[3], obj,
                             obj ? mem_read32(ctx, obj + 348) : 0,
                             obj ? mem_read32(ctx, obj + 72) : 0,
                             obj ? (s32)mem_read32(ctx, obj + 368) : 0);
                    tls_nand_probe_slot(msg);
                }
            }
            return 0;
        }

        /* 5c.41 D: the state-1 handler's opening guards, 0x800A2E24..0x800A2E50:
         *   r4 = obj+368; if (r4 < 0) { obj+368 = r4-1; return; }   ; a wait counter
         *   kind = obj+72; if (kind in {2,3}) return;               ; nothing to do
         *   if (kind != 2) goto 0x800A2EA4                          ; the real work
         * The entry is a dispatch target, so probing it says whether the handler runs
         * at all and with which (counter, kind) - the driver calls fn_800A48B8 once. */
        case 0x800A2E24: case 0x800A2EA4: {
            if (tls_nand_probe_on()) {
                static u32 s_e24 = 0;
                if (s_e24 < 30) {
                    s_e24++;
                    u32 obj = ctx->gpr[3];
                    char msg[224];
                    snprintf(msg, sizeof(msg),
                             "STATE1 pc=0x%08X obj=0x%08X kind(+72)=%u wait(+368)=%d "
                             "state=%u result(+344)=%u lr=0x%08X",
                             ctx->pc, obj,
                             obj ? mem_read32(ctx, obj + 72) : 0,
                             obj ? (s32)mem_read32(ctx, obj + 368) : 0,
                             obj ? mem_read32(ctx, obj + 348) : 0,
                             obj ? mem_read32(ctx, obj + 344) : 0, ctx->lr);
                    tls_nand_probe_slot(msg);
                }
            }
            return 0;
        }

        /* 5c.41 J: the OTHER save module. 0x805FExxx..0x806001xx never runs (its chain
         * steps 0x805FF770.. are silent), and it is the only code that references the
         * save-file name table at 0x80873818 ("savedata.dat"/"banner.bin"). Probe its
         * public entry points - the ones called from outside the module - to settle
         * whether this whole create path is dead in our flow. */
        case 0x805FF240: case 0x805FF4B0: case 0x805FF4F0:
        case 0x805FF530: case 0x805FF5A0: case 0x805FF640: case 0x805FF6A0:
        case 0x805FF710: case 0x805FFEF0: {
            if (tls_nand_probe_on()) {
                static u32 s_mod_n = 0;
                if (s_mod_n < 20) {
                    s_mod_n++;
                    char msg[160];
                    snprintf(msg, sizeof(msg), "SAVEMOD entry pc=0x%08X lr=0x%08X", ctx->pc, ctx->lr);
                    tls_nand_probe_slot(msg);
                }
            }
            return 0;
        }

        /* 5c.41 D: fn_800A48B8 is the ONE manager API entry that stores 1 into
         * +348 (state 1, whose handler holds NANDCreateAsync at 0x800A3038). Its
         * only callers are 0x803B81E4, 0x803B8E10, 0x803B8F2C and 0x803B8FD0 - the
         * game's save-task driver. Inert probe: does the driver ever call it? */
        case 0x800A48B8: {
            if (tls_nand_probe_on()) {
                static u32 s_48b8 = 0;
                if (s_48b8 < 20) {
                    s_48b8++;
                    char msg[192];
                    snprintf(msg, sizeof(msg), "SAVEAPI 800A48B8(mgr=0x%08X) lr=0x%08X",
                             ctx->gpr[3], ctx->lr);
                    tls_nand_probe_slot(msg);
                }
            }
            return 0;
        }

        /* 5c.41: the save manager's create-vs-skip decision, read out of the lifted
         * code at 0x800A2F80..0x800A3010:
         *
         *   r3 = fn_80622050(path, &status)      ; fn_80621D70 -> ISFS_ReadDir(count-only)
         *   if (r3 == 0)            r0 = (status == 1)
         *   else if (r3 == -12)     r0 = 0
         *   else { mgr+344 = fn_800A4494(r3); r0 = 0 }
         *   if (r0 == 0)  -> state 4, NANDCreateAsync   <- the create
         *   else          -> state 8, no create
         *
         * and fn_80621D70 sets status = 1 only when ReadDir answered -101 (EINVAL,
         * "not a directory"); success or -102 give status 2. So the create is taken
         * unless the status probe succeeds *and* reports 1. Inert probe. */
        case 0x800A2FC0: case 0x800A300C: case 0x800A2FC8: case 0x800A2FB4:
        /* The state-3 handler (fn_800A2DE0 +0x2A4) dispatches on a *kind* field at
         * obj+72: 0 -> 0x800A30B0 (this branch holds the second NANDCreateAsync, at
         * 0x800A3198), 1 -> 0x800A31E0, 10 -> 0x800A3254. op=3 completes in every
         * run, so these four branch targets fire and say which kind is live. */
        case 0x800A30B0: case 0x800A31E0: case 0x800A3254: case 0x800A3260:
        case 0x800A3084: {
            if (tls_nand_probe_on()) {
                static u32 s_dec_n = 0;
                if (s_dec_n < 40) {
                    u32 obj0 = ctx->gpr[3];
                    u32 kind0 = obj0 ? mem_read32(ctx, obj0 + 72) : 0;
                    /* kind 3 is the no-op path (0x800A30AC: b 0x800A41CC); only a
                     * different kind can reach the create, so skip the noise. */
                    if (kind0 == 3) return 0;
                    s_dec_n++;
                    u32 obj = ctx->gpr[3];
                    char msg[224];
                    snprintf(msg, sizeof(msg),
                             "SAVECREATE3 pc=0x%08X obj=0x%08X kind(+72)=%u result(+344)=%u state=%u lr=0x%08X",
                             ctx->pc, obj,
                             obj ? mem_read32(ctx, obj + 72) : 0,
                             obj ? mem_read32(ctx, obj + 344) : 0,
                             obj ? mem_read32(ctx, obj + 348) : 0, ctx->lr);
                    tls_nand_probe_slot(msg);
                }
            }
            return 0; // run the guest's own code
        }

        /* NAND save-layer tracer (5c.40). Inert: prints the entry and lets the guest
         * code run (return 0). These are the guest's own NAND API wrappers and the
         * save layer that names "savedata.dat"/"banner.bin" (0x8073DAA0 /
         * 0x8073DE80), so this says *whether the create/write half is ever entered*
         * - measured with a 10 000-frame run, the title never gets there.
         * Cap: these fire a few dozen times at most. */
        case 0x8061E270: case 0x8061E2F0: case 0x8061E370: case 0x8061E3F0:
        case 0x805FFF70: case 0x805FF7A0: case 0x8061FBE0: case 0x8061FA70:
        case 0x8061E8C0: case 0x8061E9E0: case 0x8061E7D0:
        /* The save module's async chain (5c.40): the driver fn_80600010 wires
         * fn_805FFF70 (the NAND-create step) as a callback, and the steps below
         * chain into each other. Probing them all says *which* step the game
         * actually reaches - the create is the question. */
        case 0x80600010: case 0x806000A0:
        case 0x805FF770: case 0x805FF800: case 0x805FF900: case 0x805FFA60:
        case 0x805FFB20: case 0x805FFC10: case 0x805FFCB0: case 0x805FFDB0:
        case 0x805FFED0: {
            if (tls_nand_probe_on()) {
                static u32 s_nandlayer_n = 0;
                if (s_nandlayer_n < 60) {
                    s_nandlayer_n++;
                    char msg[224];
                    snprintf(msg, sizeof(msg),
                             "NAND-LAYER pc=0x%08X r3=0x%08X r4=0x%08X r5=0x%08X r6=0x%08X lr=0x%08X",
                             ctx->pc, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->gpr[6], ctx->lr);
                    tls_nand_probe_slot(msg);
                }
            }
            return 0; // run the guest's own code
        }

        // NAND error handlers
        // NANDSetAutoErrorMessaging (0x80622E20)
        case 0x80622E20: {
            printf("[TLS NAND] NANDSetAutoErrorMessaging(enable=%u) lr=0x%08X -> returning 0\n", ctx->gpr[3], ctx->lr);
            fflush(stdout);
            ctx->gpr[3] = 0; // previous state = disabled
            ctx->pc = ctx->lr;
            return 1;
        }

        // __NANDShowErrorMessage (0x80622BA0)
        case 0x80622BA0: {
            s32 err = (s32)ctx->gpr[3];
            printf("[TLS NAND] __NANDShowErrorMessage err=%d (0x%08X) caller lr=0x%08X -> bypassed\n",
                   err, (u32)err, ctx->lr);
            fflush(stdout);
            ctx->pc = ctx->lr;
            return 1;
        }

        // __NANDPrintErrorMessage (0x80622E80)
        case 0x80622E80: {
            s32 err = (s32)ctx->gpr[3];
            printf("[TLS NAND] __NANDPrintErrorMessage err=%d (0x%08X) caller lr=0x%08X -> bypassed\n",
                   err, (u32)err, ctx->lr);
            fflush(stdout);
            ctx->pc = ctx->lr;
            return 1;
        }

        // DVD services
        // __DVDCheckDevice (0x80600120) - Broadway disc drive security check
        case 0x80600120: {
            printf("[TLS DVD] __DVDCheckDevice called (lr=0x%08X) -> bypassed (returning 1)\n", ctx->lr);
            fflush(stdout);
            ctx->gpr[3] = 1; // Success
            ctx->pc = ctx->lr;
            return 1;
        }

        // __DVDShowFatalMessage (0x80600280) / fn_806003D0
        case 0x80600280:
        case 0x806003D0: {
            printf("[TLS DVD] Fatal disc dialog bypassed (pc=0x%08X lr=0x%08X)\n", ctx->pc, ctx->lr);
            fflush(stdout);
            ctx->pc = ctx->lr;
            return 1;
        }

        // DVD fatal alarm callbacks (fn_805FAD40, fn_805FAD50)
        case 0x805FAD40:
        case 0x805FAD50: {
            ctx->pc = ctx->lr;
            return 1;
        }

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
            g_last_vi_framebuffer = fb;
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
            char* path = (char*)resolve_guest_pointer(ctx, ctx->gpr[3]);
            const char* stage_env = g_tls_stage_override[0] ? g_tls_stage_override : getenv("TLS_STAGE");
            if (stage_env && strlen(stage_env) == 8 && path) {
                char* found = strstr(path, "dg004_01");
                if (found) {
                    memcpy(found, stage_env, 8);
                }
            }
            u32 id = host_asset_lookup(path);
            printf("[TLS DVD] convert: \"%s\" -> id=%u\n", path ? path : "(bad ptr)", id);
            fflush(stdout);
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

            if (fi && asset && length >= 0 && offset >= 0) {
                if (length == 0) {
                    ok = 1;
                    transferred = 0;
                } else if (dst) {
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
            }
            if (ok) {
                s_dvd_read_ok++;
                if (s_dvd_read_ok <= 256 || s_dvd_read_ok % 50 == 0) {
                    /* The frame is part of the record: the streaming loader's reads
                     * happen in bursts and the question "did the read that completes
                     * the job arrive at frame N" cannot be answered without it. */
                    extern int g_runner_current_frame;
                    printf("[TLS DVD] read #%u f=%d %s off=%d len=%d -> %u bytes lr=%08X cb=%08X\n",
                           s_dvd_read_ok, g_runner_current_frame, asset ? asset->path : "?", offset,
                           length, transferred, ctx->lr, callback);
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
                if (callback == 0x8046BBE0 && !tls_async_io_complete()) {
                    u32 target = fi_addr ? mem_read32(ctx, fi_addr + 0x2C) : 0;
                    if (target != 0x807C6F60 && target != 0x800000E4 && resolve_guest_pointer(ctx, target)) {
                        mem_write32(ctx, target, 2);
                    }
                    s_dvd_callbacks_run++;
                } else {
                    /* TLS_ASYNC_IO_COMPLETE=1 sends the stream completion through the
                     * guest's own async route instead of finishing it inside the
                     * DVDReadAsyncPrio call: the runner's frame loop then delivers it at
                     * the guest's idle point, which is where the retail DVD thread's
                     * callback would run (5c.46 X). */
                    dvd_queue_callback(callback, fi_addr, (s32)transferred); // drained by the runner frame loop
                }
            }
            ctx->gpr[3] = ok ? 1 : 0;
            ctx->pc = ctx->lr;
            return 1;
        }

        // DVDReadPrio(fileInfo, addr, length, offset, prio) - synchronous read
        case 0x805FA5D0: {
            u32 fi_addr = ctx->gpr[3];
            u32 dst_addr = ctx->gpr[4];
            s32 length = (s32)ctx->gpr[5];
            s32 offset = (s32)ctx->gpr[6];
            u8* fi = (u8*)resolve_guest_pointer(ctx, fi_addr);
            void* dst = resolve_guest_pointer(ctx, dst_addr);
            u32 id = fi ? mem_read32(ctx, fi_addr + 0x30) : 0;
            const HostAsset* asset = host_asset_by_id(id);
            int ok = 0;
            u32 transferred = 0;

            if (fi && asset && length >= 0 && offset >= 0) {
                if (length == 0) {
                    ok = 1;
                    transferred = 0;
                } else if (dst) {
                    char full[512];
                    asset_full_path(asset->path, full, sizeof(full));
                    FILE* f = fopen(full, "rb");
                    if (f) {
                        if (fseek(f, offset, SEEK_SET) == 0) {
                            transferred = (u32)fread(dst, 1, (size_t)length, f);
                            ok = 1;
                        }
                        fclose(f);
                    }
                }
            }
            if (ok) {
                s_dvd_read_ok++;
                if (s_dvd_read_ok <= 256 || s_dvd_read_ok % 50 == 0) {
                    printf("[TLS DVD] sync read #%u %s off=%d len=%d -> %u bytes lr=%08X\n", s_dvd_read_ok,
                           asset ? asset->path : "?", offset, length, transferred, ctx->lr);
                    fflush(stdout);
                }
            } else {
                s_dvd_read_fail++;
            }
            if (!ok && getenv("TLS_DVD_TRACE")) {
                printf("[TLS DVD] sync read FAIL id=%u off=%d len=%d fi=%08X dst=%08X\n",
                       id, offset, length, fi_addr, dst_addr);
                fflush(stdout);
            }
            if (fi) {
                mem_write32(ctx, fi_addr + 0x1C, transferred); // currTransferSize
                mem_write32(ctx, fi_addr + 0x20, transferred); // transferredSize
                mem_write32(ctx, fi_addr + 0x0C, 0); // DVD_STATE_END
            }
            ctx->gpr[3] = ok ? (s32)transferred : -1;
            ctx->pc = ctx->lr;
            return 1;
        }

        // DVDClose(DVDFileInfo*) - SDK implementation, no host state to drop
        case 0x805FA390: {
            ctx->gpr[3] = 1;
            ctx->pc = ctx->lr;
            return 1;
        }

        // DVDGetDriveStatus() -> DVD_STATE_END (0 = ready / idle, no error)
        case 0x805FEB00: {
            ctx->gpr[3] = 0; // DVD_STATE_END
            ctx->pc = ctx->lr;
            return 1;
        }

        // fn_805FEF70: synchronous DVD command execution / wait
        case 0x805FEF70: {
            static u32 count_fef70 = 0;
            u32 block = ctx->gpr[3];
            if (block) {
                mem_write32(ctx, block + 0x0C, 0); // DVD_STATE_END
            }
            if (++count_fef70 <= 32) {
                printf("[TLS DVD] fn_805FEF70 #%u block=0x%08X (lr=0x%08X) -> completed\n",
                       count_fef70, block, ctx->lr);
                fflush(stdout);
            }
            ctx->gpr[3] = 1;
            ctx->pc = ctx->lr;
            return 1;
        }

        // DVDCheckDisk() / DVDGetCommandBlockStatus (0x805FF120) -> 1 (disc OK)
        case 0x805FF120: {
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

        // WPAD legacy probe/poll stubs
        case 0x8062CB10:
        case 0x80632B40: {
            tls_service_controller_input(ctx);
            u8* state = (u8*)resolve_guest_pointer(ctx, 0x80820666);
            if (state) *state = 5;
            ctx->gpr[3] = s_controller_button_bits;
            ctx->pc = ctx->lr;
            return 1;
        }

        // WPADGetInfo(s32 chan, WPADInfo* info)
        case 0x80660D60:
        case 0x80660D80: {
            s32 chan = (s32)ctx->gpr[3];
            u32 info_addr = ctx->gpr[4];
            u8* info = (u8*)resolve_guest_pointer(ctx, info_addr);
            if (info) {
                memset(info, 0, 8);
                info[0] = 0; // dpd: 0
                info[1] = 1; // attach: 1 (Classic Controller / Extension attached)
                info[2] = 0; // lowBat: 0
                info[3] = 1; // led: LED 1
                info[4] = 0; // protocol
                info[5] = 0; // firmware
                info[6] = 4; // battery: 4 (full)
                info[7] = 0;
            }
            if (getenv("TLS_WPAD_TRACE")) {
                printf("[TLS WPADGetInfo] chan=%d info=0x%08X (attach=1, bat=4)\n", chan, info_addr);
                fflush(stdout);
            }
            ctx->gpr[3] = 0; // WPAD_ERR_NONE
            ctx->pc = ctx->lr;
            return 1;
        }

        // WPADGetInfoAsync(s32 chan, WPADInfo* info, WPADCallback cb)
        // Note: 0x80660DF0 is the true function entry, 0x80660E10 is after preamble
        case 0x80660DF0:
        case 0x80660E10: {
            s32 chan = (s32)ctx->gpr[3];
            u32 info_addr = ctx->gpr[4];
            u8* info = (u8*)resolve_guest_pointer(ctx, info_addr);
            if (info) {
                memset(info, 0, 8);
                info[0] = 0; // dpd: 0
                info[1] = 1; // attach: 1 (Classic Controller / Extension attached)
                info[2] = 0; // lowBat: 0
                info[3] = 1; // led: LED 1
                info[4] = 0; // protocol
                info[5] = 0; // firmware
                info[6] = 4; // battery: 4 (full)
                info[7] = 0;
            }
            if (getenv("TLS_WPAD_TRACE")) {
                printf("[TLS WPADGetInfoAsync] chan=%d info=0x%08X (attach=1, bat=4)\n", chan, info_addr);
                fflush(stdout);
            }
            ctx->gpr[3] = 0; // WPAD_ERR_NONE
            ctx->pc = ctx->lr;
            return 1;
        }

        // fn_80660FF0 (synchronous WPADGetInfo wait loop / thread sleep)
        case 0x80660FF0:
        case 0x80661010: {
            s32 chan = (s32)ctx->gpr[3];
            if (getenv("TLS_WPAD_TRACE")) {
                printf("[TLS WPADSyncWait] chan=%d bypassed (returning 0)\n", chan);
                fflush(stdout);
            }
            ctx->gpr[3] = 0; // WPAD_ERR_NONE
            ctx->pc = ctx->lr;
            return 1;
        }

        // KPADGetStatus (s32 chan) -> returns device type for channel
        case 0x80661B10: {
            s32 chan = (s32)ctx->gpr[3];
            if (chan == 0) {
                ctx->gpr[3] = 2; // 2 = WPAD_DEV_CLASSIC (Classic Controller attached)
            } else {
                ctx->gpr[3] = (u32)-1;
            }
            ctx->pc = ctx->lr;
            return 1;
        }

        // KPADRead(s32 chan, KPADStatus* status, u32 count)
        // 0x80661B60 is the SDK entry; 0x806572D0 and 0x806572E0 are the internal game-linked KPADRead functions!
        case 0x806572D0:
        case 0x806572E0:
        case 0x80661B60: {
            tls_service_controller_input(ctx);
            s32 chan = (s32)ctx->gpr[3];
            u32 status_addr = ctx->gpr[4];
            u32 count = ctx->gpr[5];
            if ((chan >= 0 && chan < 4) && status_addr != 0 && count > 0) {
                fill_kpad_status(ctx, status_addr);
                ctx->gpr[3] = 1; // 1 sample returned
            } else {
                if (status_addr != 0) {
                    mem_write8(ctx, status_addr + 0x5C, 0xFD);
                    mem_write8(ctx, status_addr + 0x5D, (u8)-1);
                }
                ctx->gpr[3] = 0;
            }
            static int s_kpad_reads = 0;
            int kpad_n = ++s_kpad_reads;
            if (kpad_n <= 10 || kpad_n % 60 == 0) {
                printf("[TLS KPADRead] #%d chan=%d status_addr=0x%08X count=%u hold=0x%04X trig=0x%04X\n",
                       kpad_n, chan, status_addr, count, s_ctrl_state.core_hold, s_ctrl_state.core_trig);
                fflush(stdout);
            }
            // Every read that actually carries a button press must be visible: the
            // periodic sampling above almost always misses a short press, which makes
            // "the game ignores my input" indistinguishable from "input never arrived".
            if ((s_ctrl_state.core_hold | s_ctrl_state.core_trig) != 0) {
                static int s_kpad_press_logs = 0;
                if (s_kpad_press_logs < 40) {
                    s_kpad_press_logs++;
                    printf("[TLS KPADRead] PRESS #%d chan=%d hold=0x%04X trig=0x%04X\n",
                           kpad_n, chan, s_ctrl_state.core_hold, s_ctrl_state.core_trig);
                    fflush(stdout);
                }
            }
            ctx->pc = ctx->lr;
            return 1;
        }

        // WPADGetStatus (0x8065F540) -> returns 3 (WPAD_STATE_SETUP)
        case 0x8065F540: {
            ctx->gpr[3] = 3;
            ctx->pc = ctx->lr;
            return 1;
        }

        // KPADGetUnifiedWpadStatus(s32 chan)
        case 0x80663160: {
            ctx->gpr[3] = 0; // WPAD_ERR_NONE
            ctx->pc = ctx->lr;
            return 1;
        }

        // WPADGetDevType(s32 chan) -> returns device type (2 = WPAD_DEV_CLASSIC)
        case 0x80663610: {
            s32 chan = (s32)ctx->gpr[3];
            ctx->gpr[3] = (chan == 0) ? 2 : (u32)-1;
            ctx->pc = ctx->lr;
            return 1;
        }

        // WPADProbe(s32 chan, u32* type)
        case 0x80660CF0: {
            s32 chan = (s32)ctx->gpr[3];
            u32 type_ptr = ctx->gpr[4];
            if (chan == 0) {
                if (type_ptr != 0) {
                    mem_write32(ctx, type_ptr, 2); // WPAD_DEV_CLASSIC
                }
                ctx->gpr[3] = 0; // WPAD_ERR_NONE
            } else {
                ctx->gpr[3] = (u32)-1; // WPAD_ERR_NO_CONTROLLER
            }
            ctx->pc = ctx->lr;
            return 1;
        }

        // WPADRead(s32 chan, void* buf)
        case 0x806616F0: {
            s32 chan = (s32)ctx->gpr[3];
            u32 buf_ptr = ctx->gpr[4];
            if (chan == 0 && buf_ptr != 0) {
                mem_write16(ctx, buf_ptr + 0x00, (u16)s_ctrl_state.core_hold);
                mem_write8(ctx,  buf_ptr + 0x29, 0); // err = 0
                mem_write16(ctx, buf_ptr + 0x2a, (u16)s_ctrl_state.cl_hold);
                mem_write8(ctx,  buf_ptr + 0x40, 0); // format = 0
                ctx->gpr[3] = 0; // WPAD_ERR_NONE
            } else {
                ctx->gpr[3] = (u32)-1;
            }
            ctx->pc = ctx->lr;
            return 1;
        }

        // KPAD configuration setters (PosParam, AccParam, StickClamp, ButtonFilter, Reset, Enable)
        case 0x80660EA0:
        case 0x80660B90:
        case 0x80660C50:
        case 0x80660C90:
        case 0x80661300:
        case 0x806631A0: {
            ctx->gpr[3] = 0;
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

        // Table loader 10 (skill param table)
        case 0x80210ACC: {
            printf("[TLS Table] fn_80210ACC (skill_param_text) entered\n");
            fflush(stdout);
            return 0;
        }


        // Controller update called from main game loop (0x80479C34)
        case 0x800A5554: {
            static int s_pad_updates = 0;
            if (s_pad_updates++ % 60 == 0) {
                printf("\n=============================================================\n");
                printf("[TLS Engine] Active Main Game Loop: update #%d\n", s_pad_updates);
                printf("=============================================================\n\n");
            }
            return 0;
        }

        // fn_800A6BD4 / fn_800A6BDC: Animation curve / spline evaluator
        case 0x800A6BD4:
        case 0x800A6BDC: {
            /* SKIPPING THE GUEST'S SCRIPT EXECUTOR WAS THE ROOT CAUSE OF THE CHAPTER-1 STALL.
             * This override walked the bytecode with a heuristic opcode table and, when it
             * disliked a stream, returned to the caller WITHOUT running the guest evaluator
             * at all - so the script that was supposed to run simply never did.
             *
             * Measured (5c.34): with the skip enabled the sequence stayed on 'Title' forever,
             * the task list never grew past 3 and the intro never advanced. With the guest's
             * own evaluator running, the sequence progresses Boot -> Titl -> GAME, the Game
             * sequence submits ~231000 vertices per frame, and frame 3500 shows Chapter-1
             * gameplay (the cave pool, a character, and the "NEW TUTORIAL." prompt). The
             * "black title" that once justified the skip is simply the game having already
             * moved past the title by frame 1448 - a transition, not a failure.
             *
             * So the guest's evaluator now runs BY DEFAULT. The fabricated skip is opt-in via
             * TLS_SCRIPT_FILTER=1 for comparison only; TLS_NO_SCRIPT_FILTER is still honoured
             * as a no-op. Never make the skip the default again. */
            static int s_skip = -1;
            if (s_skip < 0) {
                s_skip = getenv("TLS_SCRIPT_FILTER") ? 1 : 0;
                if (getenv("TLS_NO_SCRIPT_FILTER")) s_skip = 0;   /* honoured, now a no-op */
            }
            if (!s_skip) return 0;   /* run the guest's own evaluator */
            if (address == 0x800A6BD4) {
                u32 ea = ctx->gpr[13] + (u32)(s32)(-26432);
                union { float f; u32 u; } conv;
                conv.f = (float)ctx->fpr[1];
                mem_write32(ctx, ea, conv.u);
            }
            u32 stream = ctx->gpr[3];
            if (stream < 0x80000000 || stream >= 0x94000000) {
                ctx->pc = ctx->lr;
                return 1;
            }
            // Robust stream validator: must terminate with 0xFF within 128 bytes with all valid opcodes
            u32 cur = stream;
            bool valid = false;
            for (int i = 0; i < 128; i++) {
                if (cur < 0x80000000 || cur >= 0x94000000) break;
                u8 op = mem_read8(ctx, cur);
                if (op == 0xFF) { valid = true; break; }
                if (op > 16) break; // Invalid opcode (> 16 and != 0xFF)
                if (op == 0 || op == 1 || (op >= 3 && op <= 11)) {
                    cur += 5;
                } else {
                    cur += 1;
                }
            }
            if (!valid) {
                ctx->pc = ctx->lr;
                return 1;
            }
            return 0; // Valid pointer & valid terminating bytecode: run recompiled evaluator!
        }

        // 0x80239D58: Item / Asset table lookup
        case 0x80239D58: {
            u32 container = ctx->gpr[3];
            if (container < 0x80000000 || container >= 0x94000000) {
                ctx->gpr[3] = 0; // Not found
                ctx->pc = ctx->lr;
                return 1;
            }
            u32 count = mem_read32(ctx, container + 216);
            u32 array = mem_read32(ctx, container + 224);
            if (count > 20000 || (count > 0 && (array < 0x80000000 || array >= 0x94000000))) {
                printf("[TLS 80239D58] Clamped invalid lookup: container=0x%08X count=%u arr=0x%08X (lr=0x%08X)\n",
                       container, count, array, ctx->lr);
                fflush(stdout);
                ctx->gpr[3] = 0;
                ctx->pc = ctx->lr;
                return 1;
            }
            return 0; // Run original code
        }

        // 0x80360A2C: Fade Coordinator
        case 0x80360A2C: {
            /* FAITHFUL BY DEFAULT since 5c.32. This used to return 0 ("fade complete")
             * unconditionally and skip the guest's fade coordinator, with the comment
             * admitting it existed "so GameTask::Init advances to State 2". It is exactly
             * the invented answer the recomp-debugging skill's Rule 1 forbids, and it was
             * measurably wrong: it pins a white fade across the Chapter-1 cinematics.
             *
             * Measured (5c.32, against reference run2/framedump_2000 = mean 25.1):
             *   fabricated path  -> Chapter-1 card frame f=2251 mean 183.9 (a white wash)
             *   guest's own path -> f=2251 mean  54.7 (a legible underground pool)
             * and the title invariant at frame 1448 is unchanged either way:
             *   default (fabricated)  mean=(102,188,205) p50=203
             *   guest's own           mean=(102,188,205) p50=202
             * so a previous note that "bypassing the overrides regresses the title
             * (p50 203 -> 174)" was mis-attributed: the regression comes from the SCRIPT
             * FILTER override, not this one. Measured in isolation:
             *   TLS_NO_SCRIPT_FILTER=1 alone -> mean=(2,2,2) p50=0 (title never renders)
             *   TLS_NO_FAKE_FADE=1 alone     -> mean=(102,188,205) p50=202 (intact)
             * The fabricated result is therefore opt-in via TLS_FAKE_FADE=1 for comparison
             * only; never make it the default again. */
            static int s_fake = -1;
            if (s_fake < 0) {
                s_fake = getenv("TLS_FAKE_FADE") ? 1 : 0;
                if (getenv("TLS_NO_FAKE_FADE")) s_fake = 0;   /* honoured, now a no-op */
            }
            if (!s_fake) {
                /* Watched because of 5c.32c: with the guest's own coordinator the A press
                 * reaches KPAD (hold=0x0800 trig=0x0800, bit 11 = A) but NOTHING consumes it
                 * and fn_800A555C is never called, while with the fabricated fade the same
                 * press advanced phase 0 -> 13 within two frames. Hypothesis: the real
                 * coordinator reports "still fading" indefinitely, and the game suppresses
                 * input while a fade is active. Rate-limited so this cannot throttle the
                 * run - only on change of any watched field. */
                extern int g_runner_current_frame;
                static u32 s_prev = 0xFFFFFFFFu;
                u32 o3   = ctx->gpr[3];
                u32 v408 = (o3 >= 0x80000000u && o3 < 0x94000000u) ? mem_read32(ctx, o3 + 408) : 0xFFFFFFFFu;
                u32 sm   = ctx->gpr[13] ? mem_read32(ctx, ctx->gpr[13] - 26672) : 0;
                u32 v1028 = (sm >= 0x80000000u && sm < 0x94000000u) ? mem_read32(ctx, sm + 1028) : 0xFFFFFFFFu;
                u32 v984  = (sm >= 0x80000000u && sm < 0x94000000u) ? mem_read32(ctx, sm + 984) : 0xFFFFFFFFu;
                u32 key = (v408 & 0xFFu) | ((v1028 & 0xFFu) << 8) | ((v984 & 0xFFu) << 16);
                static int s_n = 0;
                if (key != s_prev) {
                    s_prev = key;
                    if (s_n++ < 40) {
                        printf("[TLS FADE] f=%d obj=0x%08X 408=%u sm=0x%08X 1028=%u 984=%u lr=0x%08X\n",
                               g_runner_current_frame, o3, v408, sm, v1028, v984, ctx->lr);
                        fflush(stdout);
                    }
                }
                return 0;
            }
            static int s_fade_log_count = 0;
            u32 r3_obj = ctx->gpr[3];
            u32 val_408 = (r3_obj >= 0x80000000 && r3_obj < 0x94000000) ? mem_read32(ctx, r3_obj + 408) : 0xFFFFFFFF;
            u32 screen_mgr = ctx->gpr[13] ? mem_read32(ctx, ctx->gpr[13] - 26672) : 0;
            u32 val_1028 = (screen_mgr >= 0x80000000 && screen_mgr < 0x94000000) ? mem_read32(ctx, screen_mgr + 1028) : 0xFFFFFFFF;
            u32 val_984 = (screen_mgr >= 0x80000000 && screen_mgr < 0x94000000) ? mem_read32(ctx, screen_mgr + 984) : 0xFFFFFFFF;
            if (s_fade_log_count++ < 20 || (s_fade_log_count % 60 == 0)) {
                printf("[TLS 80360A2C #%d] r3=0x%08X 408=%u, screen_mgr=0x%08X (1028=%u, 984=%u), lr=0x%08X -> returning 0 (FADE COMPLETE)\n",
                       s_fade_log_count, r3_obj, val_408, screen_mgr, val_1028, val_984, ctx->lr);
                fflush(stdout);
            }
            ctx->gpr[3] = 0; // Signal fade completed so GameTask::Init advances to State 2
            ctx->pc = ctx->lr;
            return 1;
        }

        // fn_800A6E8C: UI/Script stream relocator & symbol fixup
        case 0x800A6E8C: {
            u32 desc = ctx->gpr[3];
            u32 r4_arg = ctx->gpr[4];
            if (!desc) {
                ctx->pc = ctx->lr;
                return 1;
            }
            u32 len = mem_read32(ctx, desc);
            u32 ptr = mem_read32(ctx, desc + 4);
            if (!len || !ptr) {
                ctx->pc = ctx->lr;
                return 1;
            }
            static int s_6e8c_calls = 0;
            if (tls_draw_trace_enabled() && (++s_6e8c_calls <= 10 || s_6e8c_calls % 50 == 0)) {
                printf("[TLS 800A6E8C] Relocating script stream #%d: desc=0x%08X ptr=0x%08X len=%u (lr=0x%08X)\n",
                       s_6e8c_calls, desc, ptr, len, ctx->lr);
                fflush(stdout);
            }
            u32 cur = ptr;
            u32 end = ptr + len;
            u32 r31_val = 0x8087EF80;
            while (cur < end) {
                u8 b = mem_read8(ctx, cur);
                if (b == 0xFF) {
                    cur += 1;
                } else if (b == 0) {
                    cur += 5;
                } else if (b == 1) {
                    u32 r29 = cur + 1;
                    u32 v = mem_read32(ctx, r29);
                    if (v != 0) {
                        u32 v_hi = (v + 0x00010000) >> 16;
                        if (v_hi == 0xFFFF || v == 0xFFFFFFFF) {
                            mem_write32(ctx, r29, r31_val);
                        } else {
                            u32 v_idx = v - 1;
                            u32 r28_base = r4_arg ? mem_read32(ctx, r4_arg) : 0;
                            if (r28_base) {
                                u32 target = mem_read32(ctx, r28_base + (v_idx * 4));
                                mem_write32(ctx, r29, target);
                            }
                        }
                    }
                    cur += 5;
                } else if ((b >= 2 && b <= 9) || b == 0x10) {
                    cur += 1;
                } else {
                    // Unknown token or padding byte: advance 1 byte to prevent infinite loop
                    cur += 1;
                }
            }
            ctx->pc = ctx->lr;
            return 1;
        }

        // Task / Scene node registration (fn_800D1D94)
        case 0x800D1D94: {
            static u32 count_1d94 = 0;
            u32 node = ctx->gpr[3];
            u32 parent = ctx->gpr[4];
            if (++count_1d94 <= 100 || (count_1d94 % 100 == 0) || parent == 0x818204E0) {
                printf("[TLS NodeReg] #%u node=0x%08X parent=0x%08X (lr=0x%08X)\n", count_1d94, node, parent, ctx->lr);
                if (parent) {
                    u32 c = mem_read32(ctx, parent + 24); // first child
                    printf("       parent=0x%08X child=0x%08X\n", parent, c);
                    int depth = 0;
                    while (c && depth < 20) {
                        u32 next = mem_read32(ctx, c + 28); // next sibling
                        printf("         [%d] child=0x%08X next=0x%08X\n", depth++, c, next);
                        if (next == c || next == node) {
                            printf("         CYCLE DETECTED: child=0x%08X next=0x%08X!\n", c, next);
                            break;
                        }
                        c = next;
                    }
                }
                fflush(stdout);
            }
            return 0; // continue to original code
        }

        // Loop inside fn_800D1D94 (finding end of child list)
        case 0x800D1DF0: {
            u32 slot = ctx->gpr[3];
            u32 child = mem_read32(ctx, slot);
            if (!resolve_guest_pointer(ctx, child) || (child & 3) != 0) {
                // Not a valid heap node pointer -> terminate traversal at slot!
                ctx->gpr[0] = 0;
                ctx->pc = 0x800D1E00;
                return 1;
            }
            u32 next = mem_read32(ctx, child + 28);
            if (next == child || (next != 0 && (!resolve_guest_pointer(ctx, next) || (next & 3) != 0))) {
                // Self-loop or invalid next pointer -> terminate traversal at child!
                ctx->gpr[0] = 0;
                ctx->gpr[3] = child + 28;
                ctx->pc = 0x800D1E00;
                return 1;
            }
            return 0; // normal valid traversal
        }

        /* PadManager update (0x800DDD18): the only code in the DOL that stores into
         * the per-channel action bitmask the whole input API queries
         * (`*(0x8087EBF8) + 0x3C28 + chan*4`). When menus ignore real button presses,
         * the first thing to establish is whether this runs at all and with which
         * object, so TLS_PADUPDATE_PROBE=1 names the call. */
        case 0x800DDD18: {
            static int s_pu_probe = -1;
            static int s_pu_n = 0;
            if (s_pu_probe < 0) s_pu_probe = getenv("TLS_PADUPDATE_PROBE") ? 1 : 0;
            if (s_pu_probe && (++s_pu_n <= 6 || s_pu_n % 120 == 0)) {
                extern int g_runner_current_frame;
                u32 pm = mem_read32(ctx, 0x8087EBF8);
                printf("[TLS PadUpdate] #%d frame=%d r3=0x%08X r4=0x%08X pm=0x%08X "
                       "mask0=0x%08X hold=0x%04X trig=0x%04X (lr=0x%08X)\n",
                       s_pu_n, g_runner_current_frame, ctx->gpr[3], ctx->gpr[4], pm,
                       pm ? mem_read32(ctx, pm + 15400) : 0,
                       s_ctrl_state.core_hold, s_ctrl_state.core_trig, ctx->lr);
                fflush(stdout);
            }
            return 0; // Run original code
        }

        /* memset (0x80006648). The pad update clears the action tables with three
         * 16-byte memsets at PadManager+0x3C28/0x3C38/0x3C48, so the first memset
         * targets the table the whole input API queries. Printing those names the
         * manager the update actually uses; if it differs from *(0x8087EBF8), input
         * can never be seen by the menus. TLS_MEMSET_PROBE=1. */
        case 0x80006648: {
            static int s_ms_probe = -1;
            static int s_ms_n = 0;
            if (s_ms_probe < 0) s_ms_probe = getenv("TLS_MEMSET_PROBE") ? 1 : 0;
            if (s_ms_probe && ctx->gpr[4] == 0 && ctx->gpr[5] == 16 && s_ms_n < 24 && ctx->lr == 0x800DDDD0u) {
                extern int g_runner_current_frame;
                s_ms_n++;
                printf("[TLS MemsetProbe] frame=%d dst=0x%08X (global=r13-26280) mask_before=0x%08X hold=0x%04X\n",
                       g_runner_current_frame, ctx->gpr[3], ctx->gpr[13] - 26280u,
                       mem_read32(ctx, ctx->gpr[3]), s_ctrl_state.core_hold);
                fflush(stdout);
            }
            return 0; // Run original code
        }

        // Game pad action trigger check (0x800A555C)
        case 0x800A555C: {            u32 action = ctx->gpr[5];
            static int s_a555c_calls = 0;
            /* which manager the caller passes and what its action table holds: two
             * PadManager instances would make "input arrives but nothing reacts" */
            static int s_a555c_probe = -1;
            if (s_a555c_probe < 0) s_a555c_probe = getenv("TLS_ACTION_PROBE") ? 1 : 0;
            if (tls_draw_trace_enabled() && (++s_a555c_calls <= 10 || s_a555c_calls % 120 == 0)) {
                printf("[TLS 0x800A555C] action=%u mgr=0x%08X chan=%u mask=0x%08X\n",
                       action, ctx->gpr[3], ctx->gpr[4],
                       (ctx->gpr[3] && resolve_guest_pointer(ctx, ctx->gpr[3] + 15400))
                           ? mem_read32(ctx, ctx->gpr[3] + 15400) : 0);
                fflush(stdout);
            }
            if (s_a555c_probe) {
                extern int g_runner_current_frame;
                /* TLS_ACTION_TRACE="395-405" prints every call inside that frame window. */
                static int s_trace_lo = -2, s_trace_hi = -1;
                if (s_trace_lo == -2) {
                    const char* w = getenv("TLS_ACTION_TRACE");
                    if (w) sscanf(w, "%d-%d", &s_trace_lo, &s_trace_hi);
                    else s_trace_lo = -1;
                }
                if (s_trace_lo >= 0 && g_runner_current_frame >= s_trace_lo && g_runner_current_frame <= s_trace_hi) {
                    u32 pm = ctx->gpr[13] - 26280u;
                    u32 mg = resolve_guest_pointer(ctx, pm) ? mem_read32(ctx, pm) : 0;
                    u32 mask = mg ? mem_read32(ctx, mg + 15400 + (ctx->gpr[4] & 3) * 4) : 0;
                    u32 real_action = 0;
                    u32 map = 0x807328A8u;
                    if (resolve_guest_pointer(ctx, map + (action & 31) * 4)) {
                        real_action = mem_read32(ctx, map + (action & 31) * 4);
                    }
                    printf("[TLS ActionTrace] frame=%d action=%u real=%u chan=%u mask=0x%08X bit=%d\n",
                           g_runner_current_frame, action, real_action, ctx->gpr[4], mask,
                           (mask >> (real_action & 31)) & 1);
                    fflush(stdout);
                }
                u32 mgr = ctx->gpr[3];
                u32 m0 = (mgr && resolve_guest_pointer(ctx, mgr + 15400)) ? mem_read32(ctx, mgr + 15400) : 0;
                static int s_last_f = -1;
                if (m0 != 0 && g_runner_current_frame != s_last_f) {
                    s_last_f = g_runner_current_frame;
                    printf("[TLS ActionProbe] frame=%d action=%u mgr=0x%08X mask0=0x%08X bit=%d hold=0x%04X\n",
                           g_runner_current_frame, action, mgr, m0, (m0 >> (action & 31)) & 1,
                           s_ctrl_state.core_hold);
                    fflush(stdout);
                }
            }
            // Filter Home button (action 17 / 0x11)
            if (action == 17 || action == 0x11) {
                ctx->gpr[3] = 0;
                ctx->pc = ctx->lr;
                return 1;
            }
            /* The `sim_press` fabrication that lived here (action 4 returned "pressed"
             * on call counts 10/50/130/190 while the runner was headless) is gone: it
             * answered the question instead of supplying the input, so the engine's
             * action evaluator never ran and the title could not hand the sequence
             * over. Input now comes only from the host state that TLS_INPUT_SCRIPT and
             * the keyboard feed, and the guest evaluates it itself. */
            return 0; // Run original code naturally via 0x800DEEDC (handles Dpad, sticks, all buttons)
        }

        // Game pad button trigger query by action (0x800DEEDC)
        case 0x800DEEDC: {
            /* This used to synthesize "pressed" for actions 11/3 (push-any-button and
             * confirm) as soon as any trigger bit was set, which skipped the evaluator's
             * own latch/edge bookkeeping the menus depend on. Supplying the input state
             * is enough; the guest decides. */
            /* The evaluator itself is trivial (`1 << action` tested against a per-channel
             * action bitmask at PadManager+0x3C28). When the menus ignore real input the
             * question is always whether that bitmask carries the press, so read it back:
             * TLS_PAD_PROBE=1 prints it whenever it changes, with the host state beside it. */
            static int s_pad_probe = -1;
            if (s_pad_probe < 0) s_pad_probe = getenv("TLS_PAD_PROBE") ? 1 : 0;
            if (s_pad_probe) {
                extern int g_runner_current_frame;
                /* The action API loads its manager with `lwz r3, -26280(r13)`; use the
                 * guest's own r13 instead of assuming the SDA base, so the probe cannot read
                 * a different word than the code does. */
                u32 pad_global = ctx->gpr[13] - 26280u;
                u32 pad_mgr = resolve_guest_pointer(ctx, pad_global) ? mem_read32(ctx, pad_global) : 0;
                u32 chan = ctx->gpr[4];
                u32 action = ctx->gpr[5];
                u32 mask = (pad_mgr && chan < 4 && resolve_guest_pointer(ctx, pad_mgr + 15400 + chan * 4))
                               ? mem_read32(ctx, pad_mgr + 15400 + chan * 4) : 0;
                static int s_last_frame = -1;
                static u32 s_last_mask = 0xDEADBEEF;
                /* One line per frame (first query of that frame) plus any mask change:
                 * per-change-only logging hides presses when the queried action ids
                 * repeat, which is exactly when "did my press reach the pad" matters. */
                if (g_runner_current_frame != s_last_frame || mask != s_last_mask) {
                    s_last_frame = g_runner_current_frame;
                    s_last_mask = mask;
                    printf("[TLS PadProbe] frame=%d pad=0x%08X chan=%u action=%u mask=0x%08X bit=%d "
                           "hold=0x%04X trig=0x%04X\n",
                           g_runner_current_frame, pad_mgr, chan, action, mask,
                           (mask >> (action & 31)) & 1, s_ctrl_state.core_hold, s_ctrl_state.core_trig);
                    fflush(stdout);
                }
            }
            return 0; // Run original code
        }

        // Controller trigger check called by StrapTask, TitleTask, menus (0x800A5920, 0x800A59F0, 0x800A5AA4)
        case 0x800A5920:
        case 0x800A59F0:
        case 0x800A5AA4: {
            // Run original PPC code naturally using PadManager and KPADRead!
            return 0;
        }

        // atn::LoadScene task update (0x80477D60)
        case 0x80477D60: {
            static int s_loadscene_calls = 0;
            if (tls_draw_trace_enabled() && (++s_loadscene_calls <= 20 || s_loadscene_calls % 60 == 0)) {
                printf("[TLS LoadScene] #%d task=0x%08X scene=0x%08X (lr=0x%08X)\n",
                       s_loadscene_calls, ctx->gpr[3], ctx->gpr[4], ctx->lr);
                fflush(stdout);
            }
            return 0; // Run original code
        }

        // SequenceManager::Update (0x800C3720)
        case 0x800C3720: {
            { extern int g_runner_current_frame; tls_tap(4, "SequenceManager::Update", g_runner_current_frame); }
            /* Which loop drives the sequence update? ctx->lr at entry is the
             * caller's continuation, so logging distinct callers names the loop
             * whose exit condition ends the whole game. */
            {
                static u32 s_callers[4];
                static int s_caller_n = 0;
                int known = 0;
                for (int i = 0; i < s_caller_n; i++) if (s_callers[i] == ctx->lr) known = 1;
                if (!known) {
                    if (s_caller_n < 4) s_callers[s_caller_n++] = ctx->lr;
                    printf("[TLS SequenceManager] caller lr=0x%08X sp=0x%08X\n", ctx->lr, ctx->gpr[1]);
                    fflush(stdout);
                }
            }
            static int s_seq_updates = 0;
            static u32 s_last_active = 0;
            u32 mgr = ctx->gpr[3];
            u32 active_task = mgr ? mem_read32(ctx, mgr + 72) : 0;
            u32 next_seq = mgr ? mem_read32(ctx, mgr + 80) : 0;
            u32 seq_84 = mgr ? mem_read32(ctx, mgr + 84) : 0;
            s_seq_updates++;

            static bool s_printed_units = false;
            if (!s_printed_units && mgr) {
                u32 arr_ptr = mem_read32(ctx, mgr + 0x4C + 4);
                u32 count = mem_read32(ctx, mgr + 0x4C + 8);
                printf("[TLS SequenceManager] Factory count: %u, arr_ptr=0x%08X\n", count, arr_ptr);
                for (u32 i = 0; i < count; i++) {
                    u32 unit = mem_read32(ctx, arr_ptr + i * 4);
                    u32 factory = unit ? mem_read32(ctx, unit + 4) : 0;
                    const char* uname = unit ? (const char*)resolve_guest_pointer(ctx, unit + 8) : "<null>";
                    printf("   [%u] unit=0x%08X factory=0x%08X name='%s'\n", i, unit, factory, uname ? uname : "<null>");
                }
                fflush(stdout);
                s_printed_units = true;
            }

            extern bool g_auto_start_game;
            static bool s_advanced_to_game = false;
            // Advance directly into "Game" (Sequence ID = 2: Chapter 1 Gurgan Cave) once boot preload completes (update >= 80):
            if (g_auto_start_game && !s_advanced_to_game && s_seq_updates >= 80 && mgr) {
                printf("\n=============================================================\n");
                printf("[TLS SequenceManager] Auto-Advancing to 'Game' (Sequence ID = 2: Chapter 1 Gurgan Cave)!\n");
                printf("=============================================================\n\n");
                fflush(stdout);
                mem_write32(ctx, mgr + 80, 2); // 2 = Game sequence!
                mem_write32(ctx, mgr + 72, 0); // Clear active task to trigger spawn of next sequence!
                s_advanced_to_game = true;
            }

            if (s_seq_updates <= 10 || s_seq_updates % 30 == 0 || next_seq != 0 || active_task != s_last_active) {
                u32 vt = active_task ? mem_read32(ctx, active_task) : 0;
                u32 name_ptr = active_task ? mem_read32(ctx, active_task + 4) : 0;
                const char* tname = name_ptr ? (const char*)resolve_guest_pointer(ctx, name_ptr) : "<none>";
                printf("[TLS SequenceManager] Update #%d mgr=0x%08X active=0x%08X ('%s' vt=0x%08X) next=0x%08X (+84=0x%08X)\n",
                       s_seq_updates, mgr, active_task, tname ? tname : "<null>", vt, next_seq, seq_84);
                if (vt) {
                    printf("     active vt: [0]=0x%08X [1]=0x%08X [2]=0x%08X [3]=0x%08X [4]=0x%08X [5]=0x%08X [6]=0x%08X [7]=0x%08X\n",
                           mem_read32(ctx, vt), mem_read32(ctx, vt + 4), mem_read32(ctx, vt + 8), mem_read32(ctx, vt + 12),
                           mem_read32(ctx, vt + 16), mem_read32(ctx, vt + 20), mem_read32(ctx, vt + 24), mem_read32(ctx, vt + 28));
                }
                fflush(stdout);
                s_last_active = active_task;
            }
            return 0; // Run original code
        }

        // fn_801FFA04 (Anime setup)
        case 0x801FFA04: {
            u32 r3 = ctx->gpr[3], r4 = ctx->gpr[4], r5 = ctx->gpr[5], r6 = ctx->gpr[6], r7 = ctx->gpr[7];
            static int s_ffa04_calls = 0;
            printf("[TLS 801FFA04] #%d r3=0x%08X r4=0x%08X r5=0x%08X r6=0x%08X r7=%u (lr=0x%08X)\n",
                   ++s_ffa04_calls, r3, r4, r5, r6, r7, ctx->lr);
            fflush(stdout);
            return 0; // Run original code
        }

        // CreateGameTask (0x80365708)
        case 0x80365708: {
            printf("[TLS CreateGameTask] Called! factory=0x%08X mgr=0x%08X (lr=0x%08X)\n",
                   ctx->gpr[3], ctx->gpr[4], ctx->lr);

            fflush(stdout);
            return 0; // Run original code
        }

        // GameTask::IsReady (0x80366454)
        case 0x80366454: {
            { extern int g_runner_current_frame; tls_tap(0, "GameTask::IsReady", g_runner_current_frame); }
            static int s_game_ready_calls = 0;
            s_game_ready_calls++;
            u32 task = ctx->gpr[3];
            printf("[TLS GameTask] IsReady #%d task=0x%08X (lr=0x%08X)\n", s_game_ready_calls, task, ctx->lr);
            fflush(stdout);
            return 0; // Run original code
        }

        // OSLockMutex (0x805F3130)
        // OSTryLockMutex (0x805F3350)
        case 0x805F3130:
        case 0x805F3350: {
            u32 mutex = ctx->gpr[3];
            if (mutex) {
                u32 cur_thread = mem_read32(ctx, 0x800000E4);
                u32 owner = mem_read32(ctx, mutex + 8);
                u32 count = mem_read32(ctx, mutex + 12);
                if (count == 0 && owner != 0) {
                    printf("[TLS OSMutex] Resetting stale owner 0x%08X on unlocked mutex 0x%08X (count=0, lr=0x%08X)\n",
                           owner, mutex, ctx->lr);
                    fflush(stdout);
                    mem_write32(ctx, mutex + 8, 0);
                } else if (owner != 0 && owner != cur_thread) {
                    if (owner < 0x807C0000 || owner >= 0x82000000) {
                        printf("[TLS OSMutex] Resetting invalid owner 0x%08X on mutex 0x%08X (count=%u, lr=0x%08X)\n",
                               owner, mutex, count, ctx->lr);
                        fflush(stdout);
                        mem_write32(ctx, mutex + 8, 0);
                        mem_write32(ctx, mutex + 12, 0);
                    } else {
                        printf("[TLS OSMutex] CONTENTION on mutex 0x%08X! owner=0x%08X (cur=0x%08X, count=%u, lr=0x%08X)\n",
                               mutex, owner, cur_thread, count, ctx->lr);
                        fflush(stdout);
                    }
                }
            }
            return 0; // Run original code
        }

        // ViewTask::Init (0x800F26D4)
        case 0x800F26D4: {
            u32 obj = ctx->gpr[3];
            static int s_vt_calls = 0;
            if (tls_draw_trace_enabled() && (++s_vt_calls <= 10 || s_vt_calls % 60 == 0)) {
                printf("[TLS ViewTask] Init #%d obj=0x%08X (lr=0x%08X)\n", s_vt_calls, obj, ctx->lr);
                fflush(stdout);
            }
            return 0; // Run original code
        }

        // ViewTask::CheckResources (0x800F3490)
        case 0x800F3490: {
            static int s_vtr_calls = 0;
            if (tls_draw_trace_enabled() && (++s_vtr_calls <= 10 || s_vtr_calls % 60 == 0)) {
                u32 obj = ctx->gpr[3];
                printf("[TLS ViewTask] CheckResources (800F3490) #%d obj=0x%08X (lr=0x%08X)\n",
                       s_vtr_calls, obj, ctx->lr);
                fflush(stdout);
            }
            return 0; // Run original code
        }

        // ViewTask::CheckPending (0x800F3B4C)
        case 0x800F3B4C: {
            static int s_vtp_calls = 0;
            if (tls_draw_trace_enabled() && (++s_vtp_calls <= 10 || s_vtp_calls % 60 == 0)) {
                u32 obj = ctx->gpr[3];
                printf("[TLS ViewTask] CheckPending (800F3B4C) #%d obj=0x%08X (lr=0x%08X)\n",
                       s_vtp_calls, obj, ctx->lr);
                fflush(stdout);
            }
            return 0; // Run original code
        }

        // GameTask::Init (0x80366E54)
        case 0x80366E54: {
            { extern int g_runner_current_frame; tls_tap(1, "GameTask::Init", g_runner_current_frame); }
            u32 task = ctx->gpr[3];
            u32 state = task ? mem_read32(ctx, task + 0x10DC) : 0;
            static int s_gt_init_calls = 0;
            static u32 s_last_gt_state = 0xFFFFFFFF;
            if (++s_gt_init_calls <= 20 || s_gt_init_calls % 60 == 0 || state != s_last_gt_state) {
                printf("[TLS GameTask] Init #%d ENTER task=0x%08X state=%u (last=%u, lr=0x%08X)\n",
                       s_gt_init_calls, task, state, s_last_gt_state, ctx->lr);
                s_last_gt_state = state;
                if (task) {
                    u32 child = mem_read32(ctx, task + 0x18);
                    int c_idx = 0;
                    while (child && c_idx < 10) {
                        u32 vt = mem_read32(ctx, child);
                        u32 flags = mem_read32(ctx, child + 0x38);
                        printf("     child[%d]=0x%08X vt=0x%08X flags=0x%08X (init=%d)\n",
                               c_idx++, child, vt, flags, (flags & 2) != 0);
                        child = mem_read32(ctx, child + 0x1C);
                    }
                    u32 f4f0 = mem_read32(ctx, 0x8087F4F0);
                    u32 f470 = mem_read32(ctx, 0x8087F470);
                    /* The state-0 gate in GameTask::Init is:
                     *   0x80366EAC  bl 0x800D3FA4(task)      -> must be non-zero
                     *   0x80366EBC  bl 0x8044386C(*(r13-25040))-> must return 0
                     *   0x80366ED0  if (*(r13-25168) != 0) return
                     * r13 is 0x808852A0, so the two globals are at 0x8087EED0 and
                     * 0x8087E1F0. Print them so the failing gate is visible instead
                     * of inferred; f4f0/f470 are unrelated globals kept for history. */
                    u32 g2p = mem_read32(ctx, 0x8087EED0);
                    u32 g2v = (g2p && resolve_guest_pointer(ctx, g2p)) ? mem_read32(ctx, g2p) : 0;
                    u32 g3 = mem_read32(ctx, 0x8087E1F0);
                    printf("     State 0 gates: child=0x%08X g2arg=0x%08X g2arg[0]=0x%08X g3(r13-25168)=0x%08X | f4f0=0x%08X f470=0x%08X\n",
                           task ? mem_read32(ctx, task + 24) : 0,
                           g2p, g2v, g3, f4f0, f470);
                    if (state == 2) {
                        u32 f8a0 = mem_read32(ctx, 0x8087F8A0);
                        u32 t48 = f8a0 ? mem_read32(ctx, f8a0 + 0x48) : 0;
                        if (t48) {
                            u32 cur_f = mem_read32(ctx, t48 + 0x38);
                            if ((cur_f & 2) == 0) {
                                mem_write32(ctx, t48 + 0x38, cur_f | 2);
                            }
                        }
                        u32 f38 = t48 ? mem_read32(ctx, t48 + 0x38) : 0;
                        u32 f890 = mem_read32(ctx, 0x8087F890);
                        printf("     State 2 check: f8a0=0x%08X t48=0x%08X f38=0x%08X(init=%d) f890=0x%08X\n",
                               f8a0, t48, f38, (f38 & 2) != 0, f890);
                        if (f890) {
                            for (int i = 0; i < 6; i++) {
                                u32 ct = mem_read32(ctx, f890 + 0x5C + i * 4);
                                u32 cf = ct ? mem_read32(ctx, ct + 0x38) : 0;
                                printf("       chara[%d]=0x%08X flags=0x%08X (init=%d)\n",
                                       i, ct, cf, (cf & 2) != 0);
                            }
                        }
                    }
                }
                fflush(stdout);
            }
            return 0; // Run original code
        }

        // fn_800D2494 (Task scheduler top-level Init)
        // fn_800D2494 (Task scheduler top-level Init)
        case 0x800D2494: {
            return 0; // Run original code
        }

        // fn_800D2868 (Task scheduler traverse and dispatch)
        case 0x800D2868: {
            static int s_2868_calls = 0;
            if (++s_2868_calls <= 10) {
                u32 parent = ctx->gpr[3];
                u32 first_child = parent ? mem_read32(ctx, parent + 0x18) : 0;
                printf("[TLS 800D2868] #%d parent=0x%08X child=0x%08X (lr=0x%08X)\n",
                       s_2868_calls, parent, first_child, ctx->lr);
                fflush(stdout);
            }
            return 0; // Run original code naturally without any hijacking!
        }

        // fn_800D26A4 (Task scheduler recursive Init)
        case 0x800D26A4: {
            return 0; // Run original code
        }

        // fn_800D2AD8 (Task scheduler Draw traversal)
        case 0x800D2AD8: {
            return 0; // Run original code
        }


        // GameTask::Update (0x80368280)
        case 0x80368280: {
            { extern int g_runner_current_frame; tls_tap(2, "GameTask::Update", g_runner_current_frame); }
            static int s_game_updates = 0;
            u32 task = ctx->gpr[3];
            u32 state = task ? mem_read32(ctx, task + 0x54e4) : 0;
            u32 prev = task ? mem_read32(ctx, task + 0x54e8) : 0;
            u32 timer = task ? mem_read32(ctx, task + 0x54ec) : 0;
            /* Chapter-1 scene state machine: state word is +0x5538, not +0x54E4
             * (+0x54E4 is what state 0's handler at 0x8036A110 tests). */
            if (tls_scene_sm_probe_on() && task) tls_scene_sm_enter(ctx, task);
            if (tls_draw_trace_enabled() && (++s_game_updates <= 10 || s_game_updates % 60 == 0)) {
                printf("[TLS GameTask] Update #%d task=0x%08X state=%u prev=%u timer=%u (lr=0x%08X)\n",
                       s_game_updates, task, state, prev, timer, ctx->lr);
                fflush(stdout);
            }
            return 0; // Run original code naturally
        }

        /* Jump-table handler entries of the Chapter-1 scene state machine
         * (0x80368280 dispatch -> table 0x8078A268). `blr` leaves the chunk
         * through dolrecomp_call, so each entry is observed here exactly once
         * per dispatch and the counters show which state body actually ran.
         * Inert unless TLS_SCENE_SM_PROBE=1. */
        case 0x8036A110: tls_scene_sm_hit(0); return 0;
        case 0x8036832C: tls_scene_sm_hit(1); return 0;
        case 0x8036881C: tls_scene_sm_hit(2); return 0;
        case 0x80368864: tls_scene_sm_hit(3); return 0;
        case 0x80368B94: tls_scene_sm_hit(4); return 0;
        case 0x80368DB8: tls_scene_sm_hit(5); return 0;
        case 0x803690EC: tls_scene_sm_hit(6); return 0;
        case 0x8036919C: tls_scene_sm_hit(7); return 0;
        case 0x803691EC: tls_scene_sm_hit(8); return 0;
        case 0x80369454: tls_scene_sm_hit(9); return 0;

        /* The phase-0 success gate, read at its return point. 0x8036A570 is
         * `bl 0x801231D0` and 0x8036A574 is `cmpwi r3, 0`, so when the callee
         * blr's back into 0x8036A574 this dispatcher sees r3 = the predicate
         * result. Print it next to g2+3468 so the two halves of
         *      if (g2->[3468] == 1 && fn_801231D0(singleton + 0x48C, 1))
         * are measured rather than inferred. */
        case 0x8036A574: {
            if (tls_scene_sm_probe_on()) {
                extern int g_runner_current_frame;
                static int s_n = 0;
                u32 g2   = mem_read32(ctx, ctx->gpr[13] - 25136u);
                u32 g2ok = (g2 >= 0x80000000u && g2 < 0x83000000u) ? g2 : 0;
                s_n++;
                /* Always print a non-zero predicate: the gate's operand is a
                 * per-frame button-edge test, so the whole point is to catch the
                 * frame on which it goes 1, and a stride would miss it. */
                if (s_n <= 40 || s_n % 120 == 0 || ctx->gpr[3] != 0) {
                    printf("[TLS SceneSM] f=%d GATE0 predicate=0x%08X (%s) g2_3468=%u  #%d\n",
                           g_runner_current_frame, ctx->gpr[3], ctx->gpr[3] ? "OPEN" : "closed",
                           g2ok ? mem_read32(ctx, g2ok + 3468) : 0, s_n);
                    fflush(stdout);
                }
            }
            return 0;
        }

        /* Phase-0's success gate (see the SceneSM probe comment): the predicate
         * that has to answer 1, and the function that runs when it does.
         * Counting them says whether the branch is even reachable. */
        case 0x801231D0: {
            if (tls_scene_sm_probe_on()) {
                g_ssm_call_1231++;
                g_ssm_last_cmd = ctx->gpr[4];
                g_ssm_g0_call = (ctx->lr == 0x8036A574u);
                if (g_ssm_g0_call) {
                    extern int g_runner_current_frame;
                    static int s_g0 = 0;
                    if (++s_g0 <= 5)
                        printf("[TLS SceneSM] f=%d fn_801231D0 GATE CALL obj=0x%08X arg=%u lr=0x%08X #%d\n",
                               g_runner_current_frame, ctx->gpr[3], ctx->gpr[4], ctx->lr, s_g0);
                    fflush(stdout);
                }
                if (g_ssm_call_1231 <= 6 || g_ssm_call_1231 % 300 == 0) {
                    extern int g_runner_current_frame;
                    printf("[TLS SceneSM] f=%d fn_801231D0(obj=0x%08X, arg=%u) lr=0x%08X #%d\n",
                           g_runner_current_frame, ctx->gpr[3], ctx->gpr[4], ctx->lr, g_ssm_call_1231);
                    fflush(stdout);
                }
            }
            return 0;
        }
        /* Inside fn_801231D0's arg<=3 path (0x801237A0):
         *   0x801237A8  bl 0x80122C70        ; -> index
         *   0x801237AC  r4 = r0 + 1
         *   0x801237B0  bl 0x80121F08        ; tail call with (r3=index, r4=index+1)
         *   0x801237B4  b epilogue           ; r3 = the value the gate sees
         * The gate calls it as fn_801231D0(singleton + 0x48C, 1), so these two
         * return points expose the index and the value it resolves to. */
        case 0x801237A0: {
            if (tls_scene_sm_probe_on()) {
                extern int g_runner_current_frame;
                static int s_a = 0;
                if (++s_a <= 5)
                    printf("[TLS SceneSM] f=%d fn_801231D0 DEFAULT-PATH obj=0x%08X arg=%u lr=0x%08X\n",
                           g_runner_current_frame, ctx->gpr[3], ctx->gpr[4], ctx->lr);
                fflush(stdout);
            }
            return 0;
        }
        case 0x801237AC: {
            if (tls_scene_sm_probe_on() && g_ssm_g0_call) {
                extern int g_runner_current_frame;
                printf("[TLS SceneSM] f=%d GATE0 index=0x%08X obj=0x%08X words:",
                       g_runner_current_frame, ctx->gpr[3], ctx->gpr[29]);
                for (int i = 0; i < 12; i++) printf(" %08X", mem_read32(ctx, ctx->gpr[29] + i * 4));
                printf("\n");
                fflush(stdout);
            }
            return 0;
        }
        case 0x801237B4: {
            if (tls_scene_sm_probe_on() && g_ssm_g0_call) {
                extern int g_runner_current_frame;
                printf("[TLS SceneSM] f=%d GATE0 result=0x%08X\n", g_runner_current_frame, ctx->gpr[3]);
                fflush(stdout);
                g_ssm_g0_call = 0;
            }
            return 0;
        }
        /* fn_80121F08(code, 1) is the leaf that answers the phase-0 gate. Its
         * structure (0x80121F08..0x80121FC8):
         *   if (code == 33)            return 0;
         *   if (arg2 == 0)             goto ALLOW;
         *   gC = *(r13-25232); if (!gC || gC->[0x54E4] != 0) goto ZERO;
         *   gD = *(r13-23752); if (!gD || gD->[2672] != 0)   goto ZERO;
         *   gB = *(r13-24096); r3 = gB ? gB->[72] : 0; if (!r3) goto ZERO;
         *   r0 = (fn_8017C974(r3) == 1);
         *   if (r0) return 0;                       (0x80121F9C)
         * ZERO: r0 = 0;
         * ALLOW: r3 = fn_800A555C(*(r13-26448), 0, code);   (0x80121FB0)
         *        return r3 & 1;
         * so in practice the answer is "is flag `code` set in *(r13-26448)", and
         * `code` comes from fn_80122C70(singleton+0x48C, 0). Print both. */
        case 0x80121FA4: {
            if (tls_scene_sm_probe_on() && g_ssm_g0_call) {
                extern int g_runner_current_frame;
                static int s_n = 0;
                u32 tab = mem_read32(ctx, ctx->gpr[13] - 26448u);
                if (++s_n <= 6)
                    printf("[TLS SceneSM] f=%d FLAGQ code=%u (r31=0x%08X) table=0x%08X #%d\n",
                           g_runner_current_frame, ctx->gpr[31], ctx->gpr[31], tab, s_n);
                fflush(stdout);
            }
            return 0;
        }
        case 0x8036B1A8: {
            /* Phase 13 (0x8036B134..0x8036B1AC) is
             *     if (fn_801231D0(*(r13-26136)+0x48C, 16)) {
             *         if (fn_8036E170(task)) { obj[120]=18; fn_8006A900(obj);
             *             task[0x5684]=1; task[0x5688]=0; task[0x568C]=0; }
             *     }
             * so 0x8036B1A8 is the return point and r3 is the cmd-16 answer.
             * Report it on change: this is the only thing between the phase-0
             * gate (which an A press opens) and the next phase. */
            if (tls_scene_sm_probe_on()) {
                extern int g_runner_current_frame;
                static u32 s_last = 0xFFFFFFFFu;
                static int s_n = 0;
                u32 v = ctx->gpr[3];
                s_n++;
                if (v != s_last || s_n <= 3) {
                    printf("[TLS SceneSM] f=%d PHASE13 cmd16=%u (%s) #%d\n",
                           g_runner_current_frame, v, v ? "OPEN" : "closed", s_n);
                    fflush(stdout);
                    s_last = v;
                }
            }
            return 0;
        }

        case 0x8036B1B8: {
            /* Same tail: 0x8036B1B4 is `bl 0x8036E170`, 0x8036B1B8 is
             * `cmpwi r3, 0`. The phase-13 advance needs cmd16 AND this, on the
             * SAME frame - and cmd16 is an edge, so a held button cannot retry. */
            if (tls_scene_sm_probe_on()) {
                extern int g_runner_current_frame;
                static u32 s_last = 0xFFFFFFFFu;
                static int s_n = 0;
                u32 v = ctx->gpr[3];
                s_n++;
                if (v != s_last || s_n <= 3) {
                    printf("[TLS SceneSM] f=%d PHASE13 fn_8036E170=0x%08X (%s) #%d\n",
                           g_runner_current_frame, v, v ? "TRUE" : "false", s_n);
                    fflush(stdout);
                    s_last = v;
                }
            }
            return 0;
        }

        /* The phase-13 waiter is a 1480-byte polymorphic object (ctor 0x805B9FC8,
         * vtable 0x807979B0 -> function table from 0x807979B8: dtor 0x805BD3B0,
         * 0x805BA16C, 0x805BAC18, 0x805BB5A0). Its +0x88 lifecycle is
         *      ctor -> (the id arg)  1
         *      0x805BBEBC -> 2   (only when *(this+0x484) != 0)
         *      0x805BB42C -> 3   (from fn_80244CAC)
         *      0x805BC134 -> 4   (`li r0,4` then `stw r0,136(r31)`)
         * and phase 13 exits when it reads 4 (or 0). It is stuck at 1, so the
         * question is whether this object is ever ticked at all - which is the
         * same shape as "no player/scene task is ever created". */
        case 0x805BAC18: {
            if (tls_scene_sm_probe_on()) {
                extern int g_runner_current_frame;
                static u32 s_key = 0xFFFFFFFFu;
                u32 o = ctx->gpr[3];
                u32 ok = (o >= 0x80000000u && o < 0x83000000u) ? o : 0;
                u32 o88 = ok ? mem_read32(ctx, ok + 0x88) : 0;
                u32 o5b0 = ok ? mem_read32(ctx, ok + 0x5B0) : 0;
                u32 key = (o88 << 8) ^ (o5b0 & 0xFFu);
                g_ph13_update_calls++;
                if (key != s_key || g_ph13_update_calls <= 2) {
                    int i;
                    s_key = key;
                    printf("[TLS SceneSM] f=%d WAITER this=0x%08X o88=%u o5b0=%u rec[i]=(w0,w10):",
                           g_runner_current_frame, ok, o88, o5b0);
                    {
                        /* payload +4 (the field the ctor does NOT set) for slots 0 and 1,
                         * sampled whenever the machine changes, so we can see WHEN it is
                         * written rather than only what it holds at frame 3604. */
                        u32 p0 = ok ? mem_read32(ctx, ok + 0x474u + 4u) : 0;
                        u32 p1 = ok ? mem_read32(ctx, ok + 0x474u + 76u + 4u) : 0;
                        u32 n0 = (p0 >= 0x80000000u && p0 < 0x94000000u) ? mem_read32(ctx, p0 + 4u) : 0;
                        u32 n1 = (p1 >= 0x80000000u && p1 < 0x94000000u) ? mem_read32(ctx, p1 + 4u) : 0;
                        printf("[TLS SceneSM] f=%d P4 p0=0x%08X(pay0.p4=0x%08X) p1=0x%08X(pay1.p4=0x%08X)\n",
                               g_runner_current_frame, p0, n0, p1, n1);
                    }
                    for (i = 0; i < 4; i++) {
                        u32 base = ok + 0x474u + (u32)i * 76u;
                        printf(" (%u,%u)", ok ? mem_read32(ctx, base) : 0,
                               ok ? mem_read32(ctx, base + 0x10) : 0);
                    }
                    printf("\n");
                    fflush(stdout);
                }
                /* One-shot full dump of records 0 and 1 once the counter has settled at 1:
                 * slot 0 got its resource and slot 1 did not, so whatever distinguishes them
                 * is inside these 76 bytes. 76 = 19 words. */
                {
                    static int s_full = 0;
                    if (!s_full && ok && o5b0 == 1 && o88 == 1) {
                        int rec, wd;
                        s_full = 1;
                        for (rec = 0; rec < 2; rec++) {
                            u32 base = ok + 0x474u + (u32)rec * 76u;
                            u32 pay  = mem_read32(ctx, base + 4);
                            printf("[TLS SceneSM] f=%d REC%d 0x%08X:", g_runner_current_frame, rec, base);
                            for (wd = 0; wd < 19; wd++) printf(" %08X", mem_read32(ctx, base + (u32)wd * 4));
                            printf("\n");
                            /* The payloads are LayoutTasks and slot 1's is never drawn.
                             * Diff the two objects' leading words: whatever marks "registered
                             * for draw" should show up here as a field only slot 0 has. */
                            if (pay >= 0x80000000u && pay < 0x83000000u) {
                                printf("[TLS SceneSM] f=%d PAY%d 0x%08X:", g_runner_current_frame, rec, pay);
                                for (wd = 0; wd < 20; wd++) printf(" %08X", mem_read32(ctx, pay + (u32)wd * 4));
                                printf("\n");
                                /* w1 of slot 0 is PAY0-8, which round 13 read as a parent/base
                                 * pointer. Test that reading: what is actually at payload-8? */
                                printf("[TLS SceneSM] f=%d PRE%d [pay-16..pay-4]:", g_runner_current_frame, rec);
                                for (wd = 0; wd < 4; wd++) printf(" %08X", mem_read32(ctx, pay - 16u + (u32)wd * 4));
                                printf("\n");
                            }
                        }
                        fflush(stdout);
                        /* Settle the (a)/(b) ambiguity: did the GUEST keep a reference to slot 1's
                         * payload anywhere? A manager that received it and failed to link it leaves
                         * references behind; a layout the guest deliberately parked leaves few or
                         * none. One-shot scan over the globals region and the heap where these
                         * objects live (0x8186xxxx), so the cost stays bounded. */
                        {
                            u32 tgt[2];
                            int t;
                            tgt[0] = mem_read32(ctx, ok + 0x474u + 4u);
                            tgt[1] = mem_read32(ctx, ok + 0x474u + 76u + 4u);
                            for (t = 0; t < 2; t++) {
                                u32 lo[2] = { 0x80B00000u, 0x81000000u };
                                u32 hi[2] = { 0x80E00000u, 0x81A00000u };
                                int r, cnt = 0;
                                printf("[TLS SceneSM] f=%d SCAN 0x%08X refs:", g_runner_current_frame, tgt[t]);
                                for (r = 0; r < 2; r++) {
                                    u32 a;
                                    for (a = lo[r]; a < hi[r]; a += 4u) {
                                        if (mem_read32(ctx, a) == tgt[t]) {
                                            if (cnt < 12) printf(" 0x%08X", a);
                                            cnt++;
                                        }
                                    }
                                }
                                printf("  total=%d\n", cnt);
                                fflush(stdout);
                            }
                        }
                    }
                }
            }
            return 0;
        }
        case 0x805BB5A0: {
            if (tls_scene_sm_probe_on()) {
                extern int g_runner_current_frame;
                static int s_n = 0;
                g_ph13_update_calls++;
                if (++s_n <= 5) {
                    u32 o = ctx->gpr[3];
                    u32 ok = (o >= 0x80000000u && o < 0x83000000u) ? o : 0;
                    printf("[TLS SceneSM] f=%d WAITER vfn[3](this=0x%08X) o88=%u o484=%u #%d\n",
                           g_runner_current_frame, ok, ok ? mem_read32(ctx, ok + 0x88) : 0,
                           ok ? mem_read32(ctx, ok + 0x484) : 0, s_n);
                    fflush(stdout);
                }
            }
            return 0;
        }

        case 0x80476664: {
            /* vtable 0x8078FE50 entry 3 - the per-slot payload object's virtual. Both
             * Chapter-1 waiter slots spawn one of this class (slot 0 -> 0x8186DF60,
             * slot 1 -> 0x81863F60) but only slot 0 ever produces its resource, so the
             * question is whether slot 1's payload is ticked at all. Count calls per
             * `this` and report periodically. */
            if (tls_scene_sm_probe_on()) {
                extern int g_runner_current_frame;
                static u32 seen[8];
                static long counts[8];
                static int seen_n = 0;
                static int last_f = -1;
                u32 th = ctx->gpr[3];
                int i, found = -1;
                for (i = 0; i < seen_n; i++) if (seen[i] == th) { found = i; break; }
                if (found < 0 && seen_n < 8) {
                    found = seen_n;
                    seen[seen_n] = th;
                    counts[seen_n] = 0;
                    seen_n++;
                    printf("[TLS SceneSM] f=%d VT76664 NEW this=0x%08X\n",
                           g_runner_current_frame, th);
                    fflush(stdout);
                }
                if (found >= 0) counts[found]++;
                if (g_runner_current_frame != last_f) {
                    last_f = g_runner_current_frame;
                    if ((g_runner_current_frame % 300) == 0) {
                        printf("[TLS SceneSM] f=%d VT76664 calls:", g_runner_current_frame);
                        for (i = 0; i < seen_n; i++) printf(" 0x%08X=%ld", seen[i], counts[i]);
                        printf("\n");
                        fflush(stdout);
                    }
                }
            }
            return 0;
        }

        case 0x80084320: {
            /* The engine allocator: r3 = size, r4 = align, r5/r6 = name, r7 = 0, result in r3.
             * The two Chapter-1 waiter payloads (LayoutTasks 0x8186DF60 / 0x81863F60, ids
             * 0x0A93/0x0A94) are created back-to-back around frame 3414, so logging every
             * allocation in a frame window names the factory by its return address - which is
             * how to read the parenting step instead of inferring it from object memory.
             * TLS_ALLOC_WINDOW=<lo>,<hi> selects the window (default 3380..3430). */
            if (tls_scene_sm_probe_on()) {
                extern int g_runner_current_frame;
                static int s_lo = -2, s_hi = 0, s_n = 0;
                if (s_lo == -2) {
                    const char* w = getenv("TLS_ALLOC_WINDOW");
                    int a = 3380, b = 3430;
                    if (w) sscanf(w, "%d,%d", &a, &b);
                    s_lo = a; s_hi = b;
                }
                if (g_runner_current_frame >= s_lo && g_runner_current_frame <= s_hi && s_n < 240) {
                    s_n++;
                    printf("[TLS SceneSM] f=%d ALLOC size=%u lr=0x%08X #%d\n",
                           g_runner_current_frame, ctx->gpr[3], ctx->lr, s_n);
                    fflush(stdout);
                }
            }
            return 0;   /* run the original allocator */
        }

        /* Phase 13's two exits (0x8036B134..0x8036B174). Neither has ever been observed
         * to run; test it rather than assume:
         *   (obj->[0x38] & 2) == 2 && obj->[0x88] == 0   -> fn_805BA358(next + 608)
         *   obj->[0x88] == 4                              -> fn_80376568(task)
         * If BOTH counts stay zero for a whole run, phase 13 is genuinely inert and the
         * stall is entirely in the slot list - which is what the rest of the thread assumes. */
        case 0x805BA358: {
            /* Also the page-enter path (5c.46 AP): it walks class+0x474 + i*0x4C and, for every non-empty
             * mode slot, does [layout+0x38] |= 4. If this fires at the page start, the pre-created content
             * node 0x81359B80 is a foreign child of the page and the missing activation belongs elsewhere;
             * if it never fires, the missing call is one level up (the page-enter opcode). */
            {
                static int s_pe = -1, s_pe_from = -1;
                static u32 s_pe_n = 0;
                extern int g_runner_current_frame;
                if (s_pe < 0) s_pe = getenv("TLS_PAGE_ENTER_PROBE") ? 1 : 0;
                if (s_pe_from < 0) { const char* e = getenv("TLS_PAGE_ENTER_FROM"); s_pe_from = e ? atoi(e) : 0; }
                if (s_pe && s_pe_n < 40 && g_runner_current_frame >= s_pe_from) {
                    u32 cls = ctx->gpr[3];
                    s_pe_n++;
                    printf("[PageEnter] f=%d class=0x%08X r4=0x%08X slots:", g_runner_current_frame, cls, ctx->gpr[4]);
                    for (u32 i = 0; i < 4u && cls; i++) {
                        u32 slot = cls + 0x474u + i * 0x4Cu;
                        u32 lay = mem_read32(ctx, slot + 4);
                        printf(" [%u]=0x%08X(38=0x%08X,fc=0x%08X)", i, lay,
                               lay ? mem_read32(ctx, lay + 0x38) : 0,
                               lay ? mem_read32(ctx, lay + 0xFC) : 0);
                    }
                    printf("\n");
                    /* Every layout field one mode slot carries, not just the d2a one (5c.46 AP-L).
                     * fn_805BA16C (the page's "hide all modes" verb) touches slot+0x40, and the
                     * page start fills slot+0x478 / +0x4B0 / +0x4B4, so a content layout attached
                     * to the page class would be sitting in one of those four. */
                    for (u32 i = 0; i < 4u && cls; i++) {
                        u32 slot = cls + 0x474u + i * 0x4Cu;
                        printf("[PageSlot] f=%d mode=%u slot=0x%08X", g_runner_current_frame, i + 1, slot);
                        static const u32 offs[4] = { 0x40u, 0x478u, 0x4B0u, 0x4B4u };
                        for (u32 k = 0; k < 4u; k++) {
                            u32 lay = mem_read32(ctx, slot + offs[k]);
                            printf(" +%03X=0x%08X(38=0x%08X fc=0x%08X cnt=%u)", offs[k], lay,
                                   lay ? mem_read32(ctx, lay + 0x38) : 0,
                                   lay ? mem_read32(ctx, lay + 0xFC) : 0,
                                   lay ? mem_read32(ctx, lay + 0x4C) : 0);
                        }
                        printf("\n");
                    }
                    fflush(stdout);
                }
            }
            if (tls_scene_sm_probe_on()) {
                extern int g_runner_current_frame;
                static int s_n = 0;
                if (++s_n <= 6 || s_n % 120 == 0) {
                    printf("[TLS SceneSM] f=%d PH13-EXIT-A fn_805BA358(r3=0x%08X) #%d\n",
                           g_runner_current_frame, ctx->gpr[3], s_n);
                    fflush(stdout);
                }
            }
            /* 5c.46 AP-L: this is the page's ENTER verb - it is where the page declares that
             * its layouts are on screen ([layout+0x38] |= 4 for every non-empty mode slot), and
             * it fires once, at f=3659, eleven frames after the page start built the layouts and
             * one frame after the per-mode hide pass. Showing the page's content node here is the
             * only missing step in the measured chain: the node is fully built (4 panes), its
             * manager still holds it at +0x3EC, and fn_801F4514 drops its entire subtree purely
             * on [node+0xFC] bit 30, which nothing has set since frame 1696. */
            tls_page_content_set(ctx, 1, "page enter");
            return 0;
        }
        case 0x80376568: {
            if (tls_scene_sm_probe_on()) {
                extern int g_runner_current_frame;
                static int s_n = 0;
                if (++s_n <= 6 || s_n % 120 == 0) {
                    printf("[TLS SceneSM] f=%d PH13-EXIT-B fn_80376568(task=0x%08X) #%d\n",
                           g_runner_current_frame, ctx->gpr[3], s_n);
                    fflush(stdout);
                }
            }
            return 0;
        }

        /* The mode-25 call site's return address (lr = 0x80535D04) is a dispatch point, so
         * the sequence manager's pending/current fields can be read AFTER SetNextSequence
         * has computed them - the existing 0x80572B70 hook can only show the arguments.
         * The manager is *(r13-26368) (= 0x80BB5CC0), NOT the object at [0x8087EE90]:
         * those are different objects and reading the wrong one showed all-zero fields,
         * which would have been a false "the sequence was never set" conclusion. */
        case 0x80535D04: {
            if (tls_scene_sm_probe_on()) {
                extern int g_runner_current_frame;
                u32 mgr = mem_read32(ctx, ctx->gpr[13] - 26368u);
                printf("[TLS SceneSM] f=%d SetNextSequence RETURN mgr=0x%08X at76=0x%08X at80=0x%08X\n",
                       g_runner_current_frame, mgr,
                       mgr ? mem_read32(ctx, mgr + 76) : 0,
                       mgr ? mem_read32(ctx, mgr + 80) : 0);
                fflush(stdout);
            }
            return 0;
        }

        /* Return point of the fade coordinator call at 0x80360A2C (its caller's lr). A
         * dispatch point, so the guest's actual return value can be read here even on the
         * faithful path. This is the measurement that decides 5c.32c's hypothesis: if the
         * coordinator keeps returning non-zero ("still fading"), the game plausibly
         * suppresses input; if it returns 0, the fade is complete and is NOT the reason the
         * A press at ~3400 goes unconsumed. */
        case 0x803673E4: {
            if (tls_scene_sm_probe_on() || getenv("TLS_FADE_RET")) {
                extern int g_runner_current_frame;
                static u32 s_prev = 0xFFFFFFFFu;
                static int s_n = 0;
                u32 r = ctx->gpr[3];
                if (r != s_prev || s_n < 5) {
                    s_prev = r;
                    if (s_n++ < 60) {
                        printf("[TLS FADERET] f=%d r3=0x%08X\n", g_runner_current_frame, r);
                        fflush(stdout);
                    }
                }
            }
            return 0;
        }

        case 0x80121FB4: {
            if (tls_scene_sm_probe_on()) {
                extern int g_runner_current_frame;
                static int s_n = 0;
                /* fn_801231D0(obj, cmd) dispatches through the 54-entry handler
                 * table at 0x8077A228; the handler returns a `code`, and
                 * fn_800A555C(mgr, 0, code) tests bit tableB[code] of the pad
                 * trigger word at mgr+0x3C28 (tableB at 0x807328A8: 0->3, 1->2,
                 * 2->0, 3->1, 4->11, 5->10, 6->14, 7->4, 8->12, 9->13, 10->16,
                 * 11->17). So code 4 == bit 11 == A, which is exactly the
                 * phase-0 gate that opened at frame 3400 on an A press. */
                static const unsigned char c_bit[12] = {3,2,0,1,11,10,14,4,12,13,16,17};
                u32 code = ctx->gpr[31];
                if (++s_n <= 60)
                    printf("[TLS SceneSM] f=%d BTNQ cmd=%u code=%u bit=%u set?=%u\n",
                           g_runner_current_frame, g_ssm_last_cmd, code,
                           (code < 12u) ? (u32)c_bit[code] : 0xFFu,
                           ctx->gpr[3] & 1u);
                fflush(stdout);
            }
            return 0;
        }
        case 0x803E4478: {
            if (tls_scene_sm_probe_on()) {
                g_ssm_call_3e44++;
                if (g_ssm_call_3e44 <= 6 || g_ssm_call_3e44 % 120 == 0) {
                    extern int g_runner_current_frame;
                    printf("[TLS SceneSM] f=%d fn_803E4478(obj=0x%08X) lr=0x%08X #%d\n",
                           g_runner_current_frame, ctx->gpr[3], ctx->lr, g_ssm_call_3e44);
                    fflush(stdout);
                }
            }
            return 0;
        }

        // GameTask::Draw (0x8036B7F4)
        case 0x8036B7F4: {
            { extern int g_runner_current_frame; tls_tap(3, "GameTask::Draw", g_runner_current_frame); }
            static int s_game_draws = 0;
            u32 task = ctx->gpr[3];
            u32 state = task ? mem_read32(ctx, task + 0x54e4) : 0;
            u32 f8a0 = mem_read32(ctx, 0x8087F8A0);
            u32 t48 = f8a0 ? mem_read32(ctx, f8a0 + 0x48) : 0;
            if (tls_draw_trace_enabled() && (++s_game_draws <= 10 || s_game_draws % 60 == 0)) {
                u32 r868 = task ? mem_read32(ctx, task + 0x868) : 0;
                u32 r56d4 = task ? mem_read32(ctx, task + 0x56d4) : 0;
                u32 r5590 = task ? mem_read32(ctx, task + 0x5590) : 0;
                u32 r10d8 = task ? mem_read32(ctx, task + 0x10d8) : 0;
                u32 r64 = r10d8 ? mem_read32(ctx, r10d8 + 0x64) : 0;
                u32 r48_cam = r64 ? mem_read32(ctx, r64 + 0x48) : 0;
                u32 r4c_cam = r64 ? mem_read32(ctx, r64 + 0x4C) : 0;
                u32 t48_flags = t48 ? mem_read32(ctx, t48 + 0x38) : 0;
                u32 z_55c = t48 ? mem_read32(ctx, t48 + 0x55c) : 0;
                u32 z_560 = t48 ? mem_read32(ctx, t48 + 0x560) : 0;
                u32 z_1450 = t48 ? mem_read32(ctx, t48 + 0x1450) : 0;
                u32 z_12a4 = t48 ? mem_read32(ctx, t48 + 0x12a4) : 0;
                f32 zx = t48 ? read_guest_f32(ctx, t48 + 0x528) : 0.0f;
                f32 zy = t48 ? read_guest_f32(ctx, t48 + 0x52c) : 0.0f;
                f32 zz = t48 ? read_guest_f32(ctx, t48 + 0x530) : 0.0f;
                u32 zm = t48 ? mem_read32(ctx, t48 + 0xB0) : 0;
                printf("[TLS GameTask] Draw #%d task=0x%08X state=%u 5590=0x%08X cam=0x%08X r64=0x%08X (48=%u, 4c=%u)\n"
                       "     Zael=0x%08X flags=0x%08X 55c=%u 560=%u 1450=%u 12a4=0x%08X pos=(%.2f, %.2f, %.2f) zm=0x%08X\n",
                       s_game_draws, task, state, r5590, r10d8, r64, r48_cam, r4c_cam,
                       t48, t48_flags, z_55c, z_560, z_1450, z_12a4, zx, zy, zz, zm);
                u32 efa8 = mem_read32(ctx, 0x8087EFA8);
                if (efa8) {
                    printf("     RenderMgr(efa8=0x%X): d4=[%.2f, %.2f, %.2f, %.2f] e4=[%.2f, %.2f, %.2f, %.2f] 374=[%.2f, %.2f, %.2f, %.2f]\n",
                           efa8,
                           read_guest_f32(ctx, efa8 + 0xd4), read_guest_f32(ctx, efa8 + 0xd8), read_guest_f32(ctx, efa8 + 0xdc), read_guest_f32(ctx, efa8 + 0xe0),
                           read_guest_f32(ctx, efa8 + 0xe4), read_guest_f32(ctx, efa8 + 0xe8), read_guest_f32(ctx, efa8 + 0xec), read_guest_f32(ctx, efa8 + 0xf0),
                           read_guest_f32(ctx, efa8 + 0x374), read_guest_f32(ctx, efa8 + 0x378), read_guest_f32(ctx, efa8 + 0x37c), read_guest_f32(ctx, efa8 + 0x380));
                }
                if (r64) {
                    printf("     Cam r64=0x%X: +0=[%.2f, %.2f, %.2f, %.2f] +10=[%.2f, %.2f, %.2f, %.2f] +20=[%.2f, %.2f, %.2f, %.2f]\n",
                           r64,
                           read_guest_f32(ctx, r64 + 0x00), read_guest_f32(ctx, r64 + 0x04), read_guest_f32(ctx, r64 + 0x08), read_guest_f32(ctx, r64 + 0x0C),
                           read_guest_f32(ctx, r64 + 0x10), read_guest_f32(ctx, r64 + 0x14), read_guest_f32(ctx, r64 + 0x18), read_guest_f32(ctx, r64 + 0x1C),
                           read_guest_f32(ctx, r64 + 0x20), read_guest_f32(ctx, r64 + 0x24), read_guest_f32(ctx, r64 + 0x28), read_guest_f32(ctx, r64 + 0x2C));
                }
                fflush(stdout);
            }

            // GameTask::Draw
            return 0; // Run original code
        }

        // 0x802368B0 (RenderQueue::Dispatch)
        case 0x802368B0: {
            static int s_rq_disp = 0;
            if (tls_draw_trace_enabled() && (++s_rq_disp <= 10 || s_rq_disp % 60 == 0)) {
                printf("[TLS RenderQueue] Dispatch #%d r3=0x%08X r4=0x%08X (lr=0x%08X)\n",
                       s_rq_disp, ctx->gpr[3], ctx->gpr[4], ctx->lr);
                fflush(stdout);
            }
            return 0; // Run original code
        }

        // 0x80235BF8 (RenderQueue::Flush/Draw)
        case 0x80235BF8: {
            static int s_rq_flush = 0;
            if (tls_draw_trace_enabled() && (++s_rq_flush <= 10 || s_rq_flush % 60 == 0)) {
                printf("[TLS RenderQueue] Flush #%d r3=0x%08X (lr=0x%08X)\n",
                       s_rq_flush, ctx->gpr[3], ctx->lr);
                fflush(stdout);
            }
            return 0; // Run original code
        }

        // 0x800BDBC8 (RenderQueue::DrawPasses - Main 3D pass renderer)
        case 0x800BDBC8: {
            static int s_rq_draw_passes = 0;
            u32 rq = ctx->gpr[3];
            u32 efa8 = mem_read32(ctx, 0x8087EFA8);
            u32 f104 = efa8 ? mem_read32(ctx, efa8 + 0x104) : 0;
            if (efa8 && f104 == 0) {
                // Ensure pass 3 gate is open
                mem_write32(ctx, efa8 + 0x104, 1);
            }

            if (rq) {
                // Ensure pass renderers have their active flag set if they have pending items
                for (int p = 0; p < 20; p++) {
                    u32 cnt = mem_read32(ctx, rq + 0xA0 + p * 4);
                    u32 pr = mem_read32(ctx, rq + p * 4);
                    if (pr && cnt > 0) {
                        u32 pr_f4 = mem_read32(ctx, pr + 4);
                        if (pr_f4 == 0) {
                            mem_write32(ctx, pr + 4, 1);
                        }
                    }
                }
            }

            if (tls_draw_trace_enabled() && (++s_rq_draw_passes <= 10 || s_rq_draw_passes % 60 == 0)) {
                printf("[TLS 800BDBC8] RenderQueue::DrawPasses #%d rq=0x%08X efa8=0x%08X(104=%u) lr=0x%08X\n",
                       s_rq_draw_passes, rq, efa8, f104, ctx->lr);
                if (rq) {
                    printf("     Active passes: ");
                    for (int p = 0; p < 20; p++) {
                        u32 cnt = mem_read32(ctx, rq + 0xA0 + p * 4);
                        u32 pr = mem_read32(ctx, rq + p * 4);
                        u32 head = mem_read32(ctx, rq + 0x50 + p * 4);
                        if (cnt > 0 || head != 0) {
                            printf("P%d(cnt=%u,pr=0x%X,f4=%u,hd=0x%X) ",
                                   p, cnt, pr, pr ? mem_read32(ctx, pr + 4) : 0, head);
                        }
                    }
                    printf("\n");
                }
                fflush(stdout);
            }
            return 0; // Run original code
        }

        // 0x800BDB58 (RenderQueue::Push)
        case 0x800BDB58: {
            static int s_rq_push = 0;
            if (tls_draw_trace_enabled() && (++s_rq_push <= 20 || s_rq_push % 100 == 0)) {
                printf("[TLS 800BDB58] RenderQueue::Push #%d rq=0x%08X item=0x%08X pass=%u (lr=0x%08X)\n",
                       s_rq_push, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->lr);
                fflush(stdout);
            }
            return 0; // Run original code
        }

        // 0x8008B140 (Model::Update)
        case 0x8008B140: {
            static int s_model_updates = 0;
            u32 model = ctx->gpr[3];
            u32 st = model ? (mem_read32(ctx, model + 0x20c) >> 24) : 0;
            if (tls_draw_trace_enabled() && (++s_model_updates <= 10 || s_model_updates % 200 == 0)) {
                printf("[TLS 8008B140] Model::Update #%d model=0x%08X st=%u (20c=0x%08X, lr=0x%08X)\n",
                       s_model_updates, model, st, model ? mem_read32(ctx, model + 0x20c) : 0, ctx->lr);
                fflush(stdout);
            }
            return 0; // Run original code
        }

        // 0x800804D0 (Model::FindNodeIndexByType)
        case 0x800804D0: {
            u32 node_tbl = ctx->gpr[3];
            u32 type = ctx->gpr[4];
            if (!resolve_guest_pointer(ctx, node_tbl)) {
                ctx->gpr[3] = 0xFFFFFFFFu; // -1 (not found)
                ctx->pc = ctx->lr;
                return 1;
            }
            u8 count = mem_read8(ctx, node_tbl + 0x4A);
            u32 arr = mem_read32(ctx, node_tbl + 0x0C);
            if (!resolve_guest_pointer(ctx, arr) || count > 64) {
                ctx->gpr[3] = 0xFFFFFFFFu; // -1 (not found)
                ctx->pc = ctx->lr;
                return 1;
            }
            for (u32 i = 0; i < count; i++) {
                s8 t = (s8)mem_read8(ctx, arr + i * 0x14 + 0x10);
                if (t == (s8)type) {
                    ctx->gpr[3] = i;
                    ctx->pc = ctx->lr;
                    return 1;
                }
            }
            ctx->gpr[3] = 0xFFFFFFFFu;
            ctx->pc = ctx->lr;
            return 1;
        }

        // 0x8008BD10 (Model::InitSubmeshes)
        case 0x8008BD10: {
            u32 model = ctx->gpr[3];
            u32 f16c = model ? mem_read32(ctx, model + 0x16c) : 0;
            static int s_initsub_cnt = 0;
            if (++s_initsub_cnt <= 15) {
                printf("[TLS 8008BD10] Model::InitSubmeshes #%d model=0x%08X f16c=0x%08X (lr=0x%08X)\n",
                       s_initsub_cnt, model, f16c, ctx->lr);
                fflush(stdout);
            }
            return 0; // Run original code (chunk 33 handles NULL r4 safely at label_8008BD2C)
        }

        // 0x8008C444 (Model::InitSubmeshes loop condition safeguard)
        case 0x8008C444: {
            return 0; // Run original code
        }

        // 0x8008CD60 (Model::Render)
        case 0x8008CD60: {
            static int s_model_render = 0;
            u32 model = ctx->gpr[3];
            u32 f164 = model ? mem_read32(ctx, model + 0x164) : 0;
            u32 f168 = model ? mem_read32(ctx, model + 0x168) : 0;
            u32 f16c = model ? mem_read32(ctx, model + 0x16c) : 0;
            u32 s5c = f168 ? mem_read32(ctx, f168 + 0x5C) : 0;
            u32 buf58 = model ? mem_read32(ctx, model + 0x58) : 0;
            u32 st = model ? (mem_read32(ctx, model + 0x20c) >> 24) : 0;

            u32 sub_cnt = model ? mem_read32(ctx, model + 260) : 0;

            if (tls_draw_trace_enabled() && (++s_model_render <= 20 || s_model_render % 100 == 0)) {
                sub_cnt = mem_read32(ctx, model + 260);
                printf("[TLS 8008CD60] Model::Render #%d model=0x%08X st=%u 20c=0x%X sub=%u 164=0x%X 168=0x%X 16c=0x%X s5c=0x%X (lr=0x%08X)\n",
                       s_model_render, model, (mem_read32(ctx, model + 0x20c) >> 24), mem_read32(ctx, model + 0x20c), sub_cnt, f164, f168, mem_read32(ctx, model + 0x16c), s5c, ctx->lr);
                fflush(stdout);
            }
            return 0; // Run original code
        }

        // 0x800709F4 (ChunkAABBOverlapCheck)
        case 0x800709F4: {
            static int s_709f4_calls = 0;
            if (tls_draw_trace_enabled() && (++s_709f4_calls <= 10 || s_709f4_calls % 100 == 0)) {
                printf("[TLS 800709F4] ChunkAABBOverlapCheck #%d r3=0x%08X r4=0x%08X (lr=0x%08X)\n",
                       s_709f4_calls, ctx->gpr[3], ctx->gpr[4], ctx->lr);
                fflush(stdout);
            }
            ctx->gpr[3] = 1; // Always visible (hardware rasterizer performs true depth and clipping)
            ctx->pc = ctx->lr;
            return 1;
        }

        // 0x8004FF58 (FrustumSphereCull)
        case 0x8004FF58: {
            static int s_cull_calls = 0;
            if (tls_draw_trace_enabled() && (++s_cull_calls <= 10 || s_cull_calls % 1000 == 0)) {
                u32 frustum = ctx->gpr[3];
                u32 sphere = ctx->gpr[4];
                f32 sx = read_guest_f32(ctx, sphere);
                f32 sy = read_guest_f32(ctx, sphere + 4);
                f32 sz = read_guest_f32(ctx, sphere + 8);
                f32 sr = read_guest_f32(ctx, sphere + 12);
                printf("[TLS 8004FF58] FrustumCull #%d frustum=0x%08X sphere=(%.2f, %.2f, %.2f, r=%.2f)\n",
                       s_cull_calls, frustum, sx, sy, sz, sr);
                fflush(stdout);
            }
            ctx->gpr[3] = 1; // Always visible (hardware D3D11 rasterizer performs true clip & depth culling)
            ctx->pc = ctx->lr;
            return 1;
        }

        // 0x8008D6C0 (Model::DrawPass2Callback)
        case 0x8008D6C0: {
            static int s_d6c0_calls = 0;
            u32 model = ctx->gpr[3];
            u32 cur20c = model ? mem_read32(ctx, model + 0x20c) : 0;
            u32 st = cur20c >> 24;
            u32 buf58 = model ? mem_read32(ctx, model + 0x58) : 0;

            if (tls_draw_trace_enabled() && (++s_d6c0_calls <= 20 || s_d6c0_calls % 100 == 0)) {
                u32 sub_cnt = model ? mem_read32(ctx, model + 260) : 0;
                printf("[TLS 8008D6C0] Model::DrawPass2 #%d model=0x%08X st=%u 20c=0x%08X sub_cnt=%u (lr=0x%08X)\n",
                       s_d6c0_calls, model, st, model ? mem_read32(ctx, model + 0x20c) : 0, sub_cnt, ctx->lr);
                fflush(stdout);
            }
            return 0; // Run original code
        }

        // 0x8008D78C (Model::DrawMeshDirect)
        case 0x8008D78C: {
            static int s_d78c_calls = 0;
            if (tls_draw_trace_enabled() && (++s_d78c_calls <= 20 || s_d78c_calls % 100 == 0)) {
                printf("[TLS 8008D78C] Model::DrawMeshDirect #%d model=0x%08X rq=0x%08X (lr=0x%08X)\n",
                       s_d78c_calls, ctx->gpr[3], ctx->gpr[4], ctx->lr);
                fflush(stdout);
            }
            return 0; // Run original code
        }

        // 0x80091684 (Model::SetupSkinningAndDrawSubmeshes)
        case 0x80091684: {
            static int s_91684_calls = 0;
            u32 mdl = ctx->gpr[3];
            u32 buf58 = mdl ? mem_read32(ctx, mdl + 0x58) : 0;
            if (buf58 < 0x80800000) {
                // No skinning matrix buffer allocated for this model! Skip to prevent static data corruption.
                ctx->pc = ctx->lr;
                return 1;
            }
            if (tls_draw_trace_enabled() && (++s_91684_calls <= 20 || s_91684_calls % 100 == 0)) {
                printf("[TLS 80091684] SetupSkinning #%d model=0x%08X buf58=0x%08X (lr=0x%08X)\n",
                       s_91684_calls, mdl, buf58, ctx->lr);
                fflush(stdout);
            }
            return 0; // Run original code
        }

        // 0x8009A0F8 (TransformSkinningMatricesToBuffer)
        case 0x8009A0F8: {
            u32 dst = ctx->gpr[3];
            u32 lc = ctx->gpr[4];
            u32 cnt = ctx->gpr[6];
            if (dst < 0x80800000) {
                printf("[TLS 8009A0F8] BLOCKED CORRUPTING WRITE: dst=0x%08X lc=0x%08X cnt=%u (lr=0x%08X)\n",
                       dst, lc, cnt, ctx->lr);
                fflush(stdout);
                ctx->pc = ctx->lr;
                return 1; // Safely skip writing into code/static data
            }
            return 0; // Run original code
        }

        // 0x8009A2C0 (TransformSkinningMatricesToBufferPass2)
        case 0x8009A2C0: {
            u32 dst_ptr_addr = ctx->gpr[3];
            u32 dst = dst_ptr_addr ? mem_read32(ctx, dst_ptr_addr) : 0;
            u32 lc = ctx->gpr[4];
            u32 cnt = ctx->gpr[6];
            if (dst < 0x80800000) {
                printf("[TLS 8009A2C0] BLOCKED CORRUPTING WRITE: ptr=0x%08X dst=0x%08X lc=0x%08X cnt=%u (lr=0x%08X)\n",
                       dst_ptr_addr, dst, lc, cnt, ctx->lr);
                fflush(stdout);
                ctx->pc = ctx->lr;
                return 1; // Safely skip writing into code/static data
            }
            return 0; // Run original code
        }

        // 0x805ED460 (LC DMA: Locked Cache -> RAM)
        case 0x805ED460: {
            u32 dst = ctx->gpr[3];
            u32 src = ctx->gpr[4];
            u32 len = ctx->gpr[5];
            void* p_dst = resolve_guest_pointer(ctx, dst);
            void* p_src = resolve_guest_pointer(ctx, src);
            if (p_dst && p_src && len > 0) {
                memcpy(p_dst, p_src, len);
            }
            ctx->pc = ctx->lr;
            return 1;
        }

        // 0x805ED500 (LC DMA: RAM -> Locked Cache)
        case 0x805ED500: {
            u32 dst = ctx->gpr[3];
            u32 src = ctx->gpr[4];
            u32 len = ctx->gpr[5];
            void* p_dst = resolve_guest_pointer(ctx, dst);
            void* p_src = resolve_guest_pointer(ctx, src);
            if (p_dst && p_src && len > 0) {
                memcpy(p_dst, p_src, len);
            }
            ctx->pc = ctx->lr;
            return 1;
        }

        // 0x805ED400 (LC DMA block transfer: LC -> RAM)
        case 0x805ED400: {
            u32 dst = ctx->gpr[3];
            u32 src = ctx->gpr[4];
            u32 lines = ctx->gpr[5];
            u32 len = (lines == 0 ? 128 : lines) * 32;
            void* p_dst = resolve_guest_pointer(ctx, dst);
            void* p_src = resolve_guest_pointer(ctx, src);
            if (p_dst && p_src && len > 0) {
                memcpy(p_dst, p_src, len);
            }
            ctx->pc = ctx->lr;
            return 1;
        }

        // 0x805ED430 (LC DMA block transfer: RAM -> LC)
        case 0x805ED430: {
            u32 dst = ctx->gpr[3];
            u32 src = ctx->gpr[4];
            u32 lines = ctx->gpr[5];
            u32 len = (lines == 0 ? 128 : lines) * 32;
            void* p_dst = resolve_guest_pointer(ctx, dst);
            void* p_src = resolve_guest_pointer(ctx, src);
            if (p_dst && p_src && len > 0) {
                memcpy(p_dst, p_src, len);
            }
            ctx->pc = ctx->lr;
            return 1;
        }

        // 0x805ED5A0 (LC DMA Wait / Poll HID2)
        case 0x805ED5A0: {
            ctx->pc = ctx->lr;
            return 1;
        }

        // 0x804732DC (SceneChunk Update/Instantiate)
        case 0x804732DC: {
            static int s_chunk_calls = 0;
            u32 chunk = ctx->gpr[3];
            u8 st = chunk ? mem_read8(ctx, chunk + 4) : 0;
            u32 a0 = chunk ? mem_read32(ctx, chunk + 0xA0) : 0;
            u32 c4c = chunk ? mem_read32(ctx, chunk + 0x4C) : 0;
            u32 cnt64 = chunk ? mem_read32(ctx, chunk + 0x64) : 0;
            u32 arr90 = chunk ? mem_read32(ctx, chunk + 0x90) : 0;
            if (tls_draw_trace_enabled() && (++s_chunk_calls <= 20 || s_chunk_calls % 60 == 0)) {
                printf("[TLS 804732DC] SceneChunk #%d chunk=0x%08X st=%u a0=0x%X 4c=0x%X cnt=%u arr=0x%X (lr=0x%08X)\n",
                       s_chunk_calls, chunk, st, a0, c4c, cnt64, arr90, ctx->lr);
                fflush(stdout);
            }
            return 0; // Run original code
        }

        // 0x80363C10 (GameTask Model Render Entry)
        case 0x80363C10: {
            static int s_gt_model_render = 0;
            if (tls_draw_trace_enabled() && (++s_gt_model_render <= 20 || s_gt_model_render % 100 == 0)) {
                printf("[TLS 80363C10] GameTask::ModelRender #%d obj=0x%08X (lr=0x%08X)\n",
                       s_gt_model_render, ctx->gpr[3], ctx->lr);
                fflush(stdout);
            }
            return 0; // Run original code
        }

        // 0x8009DE60 (DrawMeshPacket)
        case 0x8009DE60: {
            static int s_draw_pkt = 0;
            if (tls_draw_trace_enabled() && (++s_draw_pkt <= 20 || s_draw_pkt % 100 == 0)) {
                printf("[TLS 8009DE60] DrawMeshPacket #%d pkt=0x%08X (lr=0x%08X)\n",
                       s_draw_pkt, ctx->gpr[3], ctx->lr);
                fflush(stdout);
            }
            return 0; // Run original code
        }

        // 0x80618030 (GXCallDisplayList)
        case 0x80618030: {
            static int s_gx_cdl = 0;
            static int s_gx_cdl_large = 0;
            u32 list = ctx->gpr[3];
            u32 size = ctx->gpr[4];
            if (size > 64) {
                if (tls_draw_trace_enabled() && (++s_gx_cdl_large <= 30 || s_gx_cdl_large % 50 == 0)) {
                    const u8* ptr = (const u8*)resolve_guest_pointer(ctx, list);
                    printf("[TLS GXCallDisplayList] LARGE DL #%d list=0x%08X size=%u (lr=0x%08X)",
                           s_gx_cdl_large, list, size, ctx->lr);
                    if (ptr) {
                        printf(" bytes: %02X %02X %02X %02X %02X %02X %02X %02X\n",
                               ptr[0], ptr[1], ptr[2], ptr[3], ptr[4], ptr[5], ptr[6], ptr[7]);
                    } else {
                        printf("\n");
                    }
                    fflush(stdout);
                }
            } else if (tls_draw_trace_enabled() && (++s_gx_cdl <= 10 || s_gx_cdl % 200 == 0)) {
                printf("[TLS GXCallDisplayList] #%d list=0x%08X size=%u (lr=0x%08X)\n",
                       s_gx_cdl, list, size, ctx->lr);
                fflush(stdout);
            }
            return 0; // Run original code
        }

        // 0x8046E058 (SceneTask::Draw)
        case 0x8046E058: {
            static int s_scene_draws = 0;
            u32 scene = ctx->gpr[3];
            u32 r3ee0 = scene ? mem_read32(ctx, scene + 0x3EE0) : 0;
            u32 r3ee0_flags = r3ee0 ? mem_read32(ctx, r3ee0 + 0x38) : 0;
            u32 count48 = scene ? mem_read32(ctx, scene + 0x48) : 0;
            if (tls_draw_trace_enabled() && (++s_scene_draws <= 5 || s_scene_draws % 60 == 0)) {
                printf("[TLS SceneTask] Draw #%d scene=0x%08X 3ee0=0x%08X (flags=0x%08X) count48=%u (lr=0x%08X)\n",
                       s_scene_draws, scene, r3ee0, r3ee0_flags, count48, ctx->lr);
                if (s_scene_draws == 5 && scene && count48 > 0) {
                    for (u32 i = 0; i < 20 && i < count48; ++i) {
                        u32 elem = mem_read32(ctx, scene + 0x4C + i * 4);
                        u32 vtbl = elem ? mem_read32(ctx, elem) : 0;
                        u32 m_ptr = elem ? mem_read32(ctx, elem + 4) : 0;
                        u32 e4c = elem ? mem_read32(ctx, elem + 0x4C) : 0;
                        u32 e5c = elem ? mem_read32(ctx, elem + 0x5C) : 0;
                        const char* name = elem ? (const char*)resolve_guest_pointer(ctx, elem + 6) : "";
                        printf("    elem[%u]=0x%08X name='%s' vtbl=0x%08X 4c=%u 5c=0x%08X\n",
                               i, elem, name ? name : "", vtbl, e4c, e5c);
                    }
                }
                fflush(stdout);
            }
            return 0; // Run original code
        }

        // 0x8036CC90 (GameTask::DrawScene)
        case 0x8036CC90: {
            static int s_cc90_calls = 0;
            u32 task = ctx->gpr[3];
            u32 r868 = task ? mem_read32(ctx, task + 0x868) : 0;
            u32 r56d4 = task ? mem_read32(ctx, task + 0x56d4) : 0;
            u32 f8a0 = mem_read32(ctx, 0x8087F8A0);
            u32 t48 = f8a0 ? mem_read32(ctx, f8a0 + 0x48) : 0;
            u32 t48_flags = t48 ? mem_read32(ctx, t48 + 0x38) : 0;
            if (tls_draw_trace_enabled() && (++s_cc90_calls <= 10 || s_cc90_calls % 60 == 0)) {
                printf("[TLS 8036CC90] DrawScene #%d task=0x%08X 868=%u 56d4=0x%08X t48=0x%08X flags=0x%08X (lr=0x%08X)\n",
                       s_cc90_calls, task, r868, r56d4, t48, t48_flags, ctx->lr);
                fflush(stdout);
            }
            return 0; // Run original code
        }

        // 0x800E4278 (Scene/Model Render pass from GameTask)
        case 0x800E4278: {
            static int s_e4278_calls = 0;
            if (tls_draw_trace_enabled() && (++s_e4278_calls <= 10 || s_e4278_calls % 60 == 0)) {
                printf("[TLS 800E4278] Render call #%d r3=0x%08X r4=0x%08X (lr=0x%08X)\n",
                       s_e4278_calls, ctx->gpr[3], ctx->gpr[4], ctx->lr);
                fflush(stdout);
            }
            return 0; // Run original code
        }

        // SceneManager::Init (0x80487184)
        case 0x80487184: {
            static int s_sm_init_calls = 0;
            u32 sm = ctx->gpr[3];
            u32 t1 = sm ? mem_read32(ctx, sm + 0x1A7C) : 0;
            u32 t2 = sm ? mem_read32(ctx, sm + 0x1A80) : 0;
            u32 t3 = sm ? mem_read32(ctx, sm + 0x1AA8) : 0;
            u32 t4 = sm ? mem_read32(ctx, sm + 0x1A9C) : 0;
            u32 f1 = t1 ? mem_read32(ctx, t1 + 0x38) : 0;
            u32 f2 = t2 ? mem_read32(ctx, t2 + 0x38) : 0;
            u32 f3 = t3 ? mem_read32(ctx, t3 + 0x38) : 0;
            u32 f4 = t4 ? mem_read32(ctx, t4 + 0x38) : 0;
            if (tls_draw_trace_enabled() && (++s_sm_init_calls <= 20 || s_sm_init_calls % 60 == 0)) {
                printf("[TLS SceneManager::Init] #%d sm=0x%08X t1=0x%08X(f=0x%X) t2=0x%08X(f=0x%X) t3=0x%08X(f=0x%X) t4=0x%08X(f=0x%X)\n",
                       s_sm_init_calls, sm, t1, f1, t2, f2, t3, f3, t4, f4);
                fflush(stdout);
            }
            return 0; // Run original code
        }



        // SequenceManager::UnregisterTask (0x800C37E4)
        case 0x800C37E4: {
            u32 mgr = ctx->gpr[3];
            u32 task = ctx->gpr[4];
            u32 active_task = mgr ? mem_read32(ctx, mgr + 72) : 0;
            printf("[TLS SequenceManager] UnregisterTask mgr=0x%08X task=0x%08X (active=0x%08X, lr=0x%08X)\n",
                   mgr, task, active_task, ctx->lr);
            fflush(stdout);
            return 0; // Run original code
        }

        // CreateNewTitleTask (0x80531ED4)
        case 0x80531ED4: {
            printf("[TLS CreateNewTitleTask] Called! factory=0x%08X mgr=0x%08X (lr=0x%08X)\n",
                   ctx->gpr[3], ctx->gpr[4], ctx->lr);
            fflush(stdout);
            return 0; // Run original code
        }

        // OSFatal (0x805F03C0)
        case 0x805F03C0: {
            u32 fg = ctx->gpr[3];
            u32 bg = ctx->gpr[4];
            u32 msg_ptr = ctx->gpr[5];
            const char* msg = msg_ptr ? (const char*)resolve_guest_pointer(ctx, msg_ptr) : "<null>";
            printf("\n=============================================================\n");
            printf("[TLS OSFatal] FATAL ERROR TRIGGERED!\n");
            printf("  Message: %s\n", msg ? msg : "<null>");
            printf("  Caller LR: 0x%08X\n", ctx->lr);
            printf("=============================================================\n\n");
            fflush(stdout);
            ctx->pc = ctx->lr;
            return 1; // Do not hang in infinite loop
        }

        // SequenceManager::SetNextSequence (0x80572B70)
        case 0x80572B70: {
            /* The guest function ignores its r3: it reads the manager from r13-26368 and
             * stores a name->id lookup into manager->[80]. Print that manager (not the
             * caller's r3) plus the guest frame, so a handover can be placed on the
             * timeline - title mode 25 asks for 'Game' here at frame 1728 (5c.25). */
            const char* name = (const char*)resolve_guest_pointer(ctx, ctx->gpr[4]);
            extern int g_runner_current_frame;
            u32 mgr = mem_read32(ctx, ctx->gpr[13] - 26368u);
            printf("[TLS Sequence] SetNextSequence('%s') mgr=0x%08X frame=%d (lr=0x%08X)\n",
                   name ? name : "<null>", mgr, g_runner_current_frame, ctx->lr);
            fflush(stdout);
            return 0; // Run original code
        }

        // BootTask::Update (0x8010F720)
        case 0x8010F720: {
            static int s_boot_updates = 0;
            if (tls_draw_trace_enabled() && (++s_boot_updates <= 10 || s_boot_updates % 60 == 0)) {
                u32 timer_raw = mem_read32(ctx, ctx->gpr[3] + 0x94);
                float timer_val;
                memcpy(&timer_val, &timer_raw, 4);
                printf("[TLS BootTask] Update #%d task=0x%08X timer=%.2f (+4=0x%08X)\n",
                       s_boot_updates, ctx->gpr[3], timer_val, mem_read32(ctx, ctx->gpr[3] + 4));
                fflush(stdout);
            }
            return 0; // Run original code
        }

        // StrapTask::Init (0x805A6370)
        case 0x805A6370: {
            printf("[TLS StrapTask] Init! task=0x%08X (lr=0x%08X)\n", ctx->gpr[3], ctx->lr);
            fflush(stdout);
            return 0;
        }

        // StrapTask::IsReady (0x805A6404)
        case 0x805A6404: {
            static int s_strap_ready_calls = 0;
            if (tls_draw_trace_enabled() && (++s_strap_ready_calls <= 5 || s_strap_ready_calls % 30 == 0)) {
                printf("[TLS StrapTask] IsReady #%d task=0x%08X (lr=0x%08X)\n",
                       s_strap_ready_calls, ctx->gpr[3], ctx->lr);
                fflush(stdout);
            }
            return 0;
        }

        // StrapTask::Update (0x805A646C)
        case 0x805A646C: {
            u32 task = ctx->gpr[3];
            static int s_strap_updates = 0;
            s_strap_updates++;
            if (task) {
                u32 st = mem_read32(ctx, task + 0x48);
                u32 timer = mem_read32(ctx, task + 0x50);
                if (st == 0 && timer >= 60) {
                    // Smoothly transition from strap screen into title screen after 1 second
                    mem_write32(ctx, task + 0x48, 2);
                    mem_write32(ctx, task + 0x4C, 0);
                    printf("[TLS StrapTask] Auto-advancing past strap screen into Title (timer=%u)\n", timer);
                    fflush(stdout);
                }
            }
            if (s_strap_updates <= 5 || s_strap_updates % 60 == 0) {
                u32 st = task ? mem_read32(ctx, task + 0x48) : 0;
                u32 timer = task ? mem_read32(ctx, task + 0x50) : 0;
                printf("[TLS StrapTask] Update #%d task=0x%08X st=%u timer=%u/600\n",
                       s_strap_updates, task, st, timer);
                fflush(stdout);
            }
            return 0; // Run original code
        }

        // NewTitleTask constructor (0x80531F48)
        case 0x80531F48: {
            printf("[TLS NewTitleTask] Constructor task=0x%08X arg4=0x%08X arg5=0x%08X (lr=0x%08X)\n",
                   ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->lr);
            fflush(stdout);
            return 0;
        }

        // NewTitleTask::Init (0x805327B4)
        case 0x805327B4: {
            printf("[TLS NewTitleTask] Init! task=0x%08X (lr=0x%08X)\n", ctx->gpr[3], ctx->lr);
            fflush(stdout);
            return 0;
        }

        // NewTitleTask::IsReady (0x80532ABC)
        case 0x80532ABC: {
            static int s_title_ready_calls = 0;
            if (tls_draw_trace_enabled() && (++s_title_ready_calls <= 10 || s_title_ready_calls % 30 == 0)) {
                u32 task = ctx->gpr[3];
                u32 state = task ? mem_read32(ctx, task + 680) : 0;
                u32 req438 = task ? mem_read32(ctx, task + 0x438) : 0;
                u32 req43c = task ? mem_read32(ctx, task + 0x43C) : 0;
                u8 st43c = req43c ? mem_read8(ctx, req43c + 4) : 0;
                u32 req290_4 = task ? mem_read32(ctx, task + 0x294) : 0;
                u32 req290_8 = task ? mem_read32(ctx, task + 0x298) : 0;
                u8 st290 = req290_8 ? mem_read8(ctx, req290_8 + 4) : 0;
                u32 req29c_4 = task ? mem_read32(ctx, task + 0x2A0) : 0;
                u32 req29c_8 = task ? mem_read32(ctx, task + 0x2A4) : 0;
                u8 st29c = req29c_8 ? mem_read8(ctx, req29c_8 + 4) : 0;
                u32 c310c_mgr = mem_read32(ctx, 0x8087EE90);
                u32 t_cnt = c310c_mgr ? mem_read32(ctx, c310c_mgr + 0x394) : 0;
                printf("[TLS NewTitleTask] IsReady #%d task=0x%08X state=%u | 438=[%08X,%08X st=%u] 290=[%08X,%08X st=%u] 29c=[%08X,%08X st=%u] c310c_mgr=%08X cnt=%u\n",
                       s_title_ready_calls, task, state, req438, req43c, st43c,
                       req290_4, req290_8, st290, req29c_4, req29c_8, st29c, c310c_mgr, t_cnt);
                fflush(stdout);
            }
            return 0;
        }

        // fn_8009076C (Model::UpdateNodeMatrices)
        case 0x8009076C: {
            u32 model = ctx->gpr[3];
            if (!resolve_guest_pointer(ctx, model)) {
                ctx->pc = ctx->lr;
                return 1;
            }
            u32 hint = mem_read32(ctx, model + 0x50);
            u32 sub_m = model + hint * 0x18;
            u32 container = resolve_guest_pointer(ctx, sub_m) ? mem_read32(ctx, sub_m + 0x16C) : 0;
            if (!resolve_guest_pointer(ctx, container)) {
                ctx->pc = ctx->lr;
                return 1;
            }
            return 0; // Run original code
        }

        // fn_80091CFC (Model::FindBoneIndex)
        case 0x80091CFC: {
            u32 model = ctx->gpr[3];
            u32 name_ptr = ctx->gpr[4];
            const char* name = (const char*)resolve_guest_pointer(ctx, name_ptr);
            u32 container = resolve_guest_pointer(ctx, model) ? mem_read32(ctx, model + 0x16C) : 0;
            u32 count = resolve_guest_pointer(ctx, container) ? mem_read32(ctx, container + 0x44) : 0;
            static int s_fbi_calls = 0;
            if (++s_fbi_calls <= 20 || s_fbi_calls % 100 == 0 || count > 512) {
                printf("[TLS Model] FindBoneIndex #%d model=0x%08X name='%s' container=0x%08X count=%u (lr=0x%08X)\n",
                       s_fbi_calls, model, name ? name : "(null)", container, count, ctx->lr);
                fflush(stdout);
            }
            if (!resolve_guest_pointer(ctx, container) || count > 512) {
                ctx->gpr[3] = 0xFFFFFFFF; // bone not found (-1)
                ctx->pc = ctx->lr;
                return 1;
            }
            return 0; // Run original code
        }

        // fn_80092814 (Model::FindNodeIndexByName(model, name, index_hint))
        case 0x80092814: {
            u32 model = ctx->gpr[3];
            u32 name_ptr = ctx->gpr[4];
            u32 hint = ctx->gpr[5];
            const char* name = (const char*)resolve_guest_pointer(ctx, name_ptr);
            u32 sub_model = model + hint * 0x18;
            u32 container = resolve_guest_pointer(ctx, sub_model) ? mem_read32(ctx, sub_model + 0x16C) : 0;
            u32 count = resolve_guest_pointer(ctx, container) ? mem_read32(ctx, container + 0x44) : 0;
            static int s_814_calls = 0;
            if (++s_814_calls <= 20 || s_814_calls % 100 == 0 || count > 512) {
                printf("[TLS Model] FindNodeIndexByName #%d model=0x%08X name='%s' hint=%u container=0x%08X count=%u (lr=0x%08X)\n",
                       s_814_calls, model, name ? name : "(null)", hint, container, count, ctx->lr);
                fflush(stdout);
            }
            if (!resolve_guest_pointer(ctx, container) || count > 512) {
                ctx->gpr[3] = 0xFFFFFFFF; // node not found (-1)
                ctx->pc = ctx->lr;
                return 1;
            }
            return 0; // Run original code
        }

        // fn_800928B0 (Model::FindNodeIndexByHash(model, hash, index_hint))
        case 0x800928B0: {
            u32 model = ctx->gpr[3];
            u32 hash = ctx->gpr[4];
            u32 hint = ctx->gpr[5];
            u32 sub_model = model + hint * 0x18;
            u32 container = resolve_guest_pointer(ctx, sub_model) ? mem_read32(ctx, sub_model + 0x16C) : 0;
            u32 count = resolve_guest_pointer(ctx, container) ? mem_read32(ctx, container + 0x44) : 0;
            if (!resolve_guest_pointer(ctx, container) || count > 512) {
                ctx->gpr[3] = 0xFFFFFFFF; // node not found (-1)
                ctx->pc = ctx->lr;
                return 1;
            }
            return 0; // Run original code
        }

        // fn_80093F58 (Model::AddNode)
        case 0x80093F58: {
            return 0; // Run original code naturally
        }

        // fn_8009A584 / fn_8009A5A8 (Model::CalculateWorldMatrices)
        case 0x8009A584:
        case 0x8009A5A8: {
            u32 param_struct = ctx->gpr[3];
            u32 container = resolve_guest_pointer(ctx, param_struct) ? mem_read32(ctx, param_struct) : 0;
            u32 count = resolve_guest_pointer(ctx, container) ? mem_read32(ctx, container + 0x44) : 0;
            if (!resolve_guest_pointer(ctx, container) || count == 0 || count > 512) {
                // No nodes to calculate world matrices for; return safely
                ctx->pc = ctx->lr;
                return 1;
            }
            return 0; // Run original code
        }

        // fn_8013655C (CharaTask readiness check)
        case 0x8013655C: {
            u32 task = ctx->gpr[3];
            static int s_655c_calls = 0;
            u32 st_ac = resolve_guest_pointer(ctx, task) ? mem_read32(ctx, task + 0xAC) : 0;
            if (tls_draw_trace_enabled() && (++s_655c_calls <= 20 || s_655c_calls % 60 == 0)) {
                u32 lh1 = task + 0x84;
                u32 lh2 = task + 0xA4;
                u32 req1 = resolve_guest_pointer(ctx, task) ? mem_read32(ctx, lh1 + 4) : 0;
                u32 req2 = resolve_guest_pointer(ctx, task) ? mem_read32(ctx, lh2 + 4) : 0;
                u8 st1 = resolve_guest_pointer(ctx, req1) ? mem_read8(ctx, req1 + 4) : 0xFF;
                u8 st2 = resolve_guest_pointer(ctx, req2) ? mem_read8(ctx, req2 + 4) : 0xFF;
                printf("[TLS CharaTask] 8013655C check #%d task=0x%08X (ac=%u, req1=0x%08X st=%u, req2=0x%08X st=%u) (lr=0x%08X)\n",
                       s_655c_calls, task, st_ac, req1, st1, req2, st2, ctx->lr);
                fflush(stdout);
            }
            return 0; // Run original code
        }

        // fn_800E2DD4 (CharaTask::Init virtual method)
        case 0x800E2DD4: {
            u32 task = ctx->gpr[3];
            u32 f8a0 = mem_read32(ctx, 0x8087F8A0);
            u32 active_chara = f8a0 ? mem_read32(ctx, f8a0 + 0x48) : 0;
            static int s_e2dd4_calls = 0;
            if (++s_e2dd4_calls <= 20 || s_e2dd4_calls % 60 == 0 || task == active_chara) {
                printf("[TLS CharaTask] 800E2DD4 Init #%d task=0x%08X active=0x%08X (lr=0x%08X)\n",
                       s_e2dd4_calls, task, active_chara, ctx->lr);
                fflush(stdout);
            }
            return 0; // Run original code
        }

        // fn_801EB078 (Spawn / Point of interest distributor)
        case 0x801EB078: {
            u32 obj = ctx->gpr[3];
            if (!resolve_guest_pointer(ctx, obj)) {
                static int s_bypassed_null_78 = 0;
                if (++s_bypassed_null_78 <= 5) {
                    printf("[TLS 801EB078] Bypassed NULL obj=0x%08X (lr=0x%08X)\n", obj, ctx->lr);
                    fflush(stdout);
                }
                ctx->pc = ctx->lr;
                return 1;
            }
            return 0; // Run original code
        }

        // fn_801EB188 (Subsystem element processor)
        case 0x801EB188: {
            u32 obj = ctx->gpr[3];
            if (!resolve_guest_pointer(ctx, obj)) {
                static int s_bypassed_null_188 = 0;
                if (++s_bypassed_null_188 <= 5) {
                    printf("[TLS 801EB188] Bypassed NULL obj=0x%08X (lr=0x%08X)\n", obj, ctx->lr);
                    fflush(stdout);
                }
                ctx->pc = ctx->lr;
                return 1;
            }
            return 0; // Run original code
        }

        // fn_803C0F48 (Scene camera / viewport setup)
        case 0x803C0F48: {
            u32 obj = ctx->gpr[3];
            u32 cam_id = ctx->gpr[4];
            u32 count = resolve_guest_pointer(ctx, obj) ? mem_read32(ctx, obj + 120) : 0;
            u32 arr = resolve_guest_pointer(ctx, obj) ? mem_read32(ctx, obj + 124) : 0;
            static int s_3c0f48_calls = 0;
            if (tls_draw_trace_enabled() && (++s_3c0f48_calls <= 20 || s_3c0f48_calls % 60 == 0)) {
                printf("[TLS 803C0F48] #%d obj=0x%08X cam_id=%u count=%u arr=0x%08X (lr=0x%08X)\n",
                       s_3c0f48_calls, obj, cam_id, count, arr, ctx->lr);
                fflush(stdout);
            }
            if (!resolve_guest_pointer(ctx, obj)) {
                ctx->pc = ctx->lr;
                return 1;
            }
            return 0; // Run original code
        }

        // fn_80367A40 (State 3 subsystem setup)
        // fn_801F683C (child[0] of child[9] Init method)
        case 0x801F683C: {
            u32 task = ctx->gpr[3];
            u32 r4 = task ? mem_read32(ctx, task + 72) : 0;
            if (resolve_guest_pointer(ctx, r4)) {
                u32 cur_flg = mem_read32(ctx, r4 + 56);
                if ((cur_flg & 2) == 0) {
                    // Mark background resource task ready (set bit 1)
                    mem_write32(ctx, r4 + 56, cur_flg | 2);
                }
            }
            u32 flg = r4 ? mem_read32(ctx, r4 + 56) : 0xFFFFFFFF;
            static int s_1f683c_calls = 0;
            if (tls_draw_trace_enabled() && (++s_1f683c_calls <= 10 || s_1f683c_calls % 60 == 0)) {
                printf("[TLS 801F683C] #%d task=0x%08X r4=0x%08X (flg=0x%08X) -> completed\n", s_1f683c_calls, task, r4, flg);
                fflush(stdout);
            }
            return 0; // Run original code which will now call 0x800D246C, set 0x4 on r4, and return 1!
        }

        // fn_803EC91C
        case 0x803EC91C: {
            u32 task = ctx->gpr[3];
            u32 st68 = task ? mem_read32(ctx, task + 0x68) : 0;
            static int s_c91c_calls = 0;
            if (tls_draw_trace_enabled() && (++s_c91c_calls <= 10 || s_c91c_calls % 30 == 0)) {
                printf("[TLS 803EC91C] #%d task=0x%08X st68=%u lr=0x%08X\n", s_c91c_calls, task, st68, ctx->lr);
                fflush(stdout);
            }
            return 0; // Run original code
        }

        // fn_8044E1BC
        case 0x8044E1BC: {
            u32 arg = ctx->gpr[3];
            static int s_e1bc_calls = 0;
            if (tls_draw_trace_enabled() && (++s_e1bc_calls <= 5 || s_e1bc_calls % 30 == 0)) {
                u32 mgr = mem_read32(ctx, 0x8087F4F8);
                u32 cnt48 = mgr ? mem_read32(ctx, mgr + 0x48) : 0;
                u32 arr50 = mgr ? mem_read32(ctx, mgr + 0x50) : 0;
                printf("[TLS 8044E1BC] #%d arg=0x%08X mgr=0x%08X cnt48=%u (arr=0x%08X)\n", s_e1bc_calls, arg, mgr, cnt48, arr50);
                if (arr50) {
                    for (u32 g = 0; g < cnt48; g++) {
                        u32 grp = arr50 + g * 0x84;
                        u32 m_cnt = mem_read32(ctx, grp + 0x40);
                        for (u32 m = 0; m < m_cnt; m++) {
                            u32 mdl = mem_read32(ctx, grp + 0x44 + m * 4);
                            if (mdl) {
                                u32 f38 = mem_read32(ctx, mdl + 0x38);
                                if ((f38 & 2) == 0) {
                                    u32 name_p = mem_read32(ctx, mdl + 4);
                                    const char* name = name_p ? (const char*)resolve_guest_pointer(ctx, name_p) : "";
                                    u32 vt = mem_read32(ctx, mdl);
                                    u32 rdy = vt ? mem_read32(ctx, vt + 12) : 0;
                                    u32 p14 = mem_read32(ctx, mdl + 0x14);
                                    u32 p18 = mem_read32(ctx, mdl + 0x18);
                                    u32 p1c = mem_read32(ctx, mdl + 0x1C);
                                    printf("     grp[%u] mdl[%u]=0x%08X ('%s') NOT READY: f38=0x%X vt=0x%X(rdy=0x%X) p14=0x%X p18=0x%X p1c=0x%X\n",
                                           g, m, mdl, name ? name : "", f38, vt, rdy, p14, p18, p1c);
                                }
                            }
                        }
                    }
                }
                fflush(stdout);
            }
            return 0; // Run original code
        }

        // fn_804095F0 (GimmickTask::IsReady)
        case 0x804095F0: {
            u32 task = ctx->gpr[3];
            u32 st68 = task ? mem_read32(ctx, task + 0x68) : 0;
            u32 req60 = task ? mem_read32(ctx, task + 0x60) : 0;
            u32 req64 = task ? mem_read32(ctx, task + 0x64) : 0;
            u8 st64 = req64 ? mem_read8(ctx, req64 + 4) : 0;
            u32 cnt19c = task ? mem_read32(ctx, task + 0x19C + 4) : 0;
            u32 task_e4 = task ? mem_read32(ctx, task + 0xE4) : 0;
            u32 flg_e4 = task_e4 ? mem_read32(ctx, task_e4 + 0x38) : 0;
            static int s_4095f0_calls = 0;
            if (tls_draw_trace_enabled() && (++s_4095f0_calls <= 10 || s_4095f0_calls % 30 == 0)) {
                printf("[TLS 804095F0 GimmickTask] IsReady #%d task=0x%08X st68=%u 64_st=%u 19c_cnt=%u e4=0x%08X (f38=0x%X) lr=0x%08X\n",
                       s_4095f0_calls, task, st68, st64, cnt19c, task_e4, flg_e4, ctx->lr);
                fflush(stdout);
            }
            return 0; // Run original code
        }

        // fn_80219558 (Subsystem ID lookup)
        case 0x80219558: {
            static int s_219558_calls = 0;
            s_219558_calls++;
            if (ctx->lr == 0x80367D6C) {
                u32 node = ctx->gpr[26];
                u32 next = (node >= 0x80000000 && node < 0x82000000) ? mem_read32(ctx, node + 5292) : 0;
                if (s_219558_calls == 5) {
                    printf("[TLS 80219558] Memory around node 0x%08X + 5292:\n", node);
                    for (int off = 5260; off <= 5320; off += 4) {
                        u32 val = (node + off < 0x82000000) ? mem_read32(ctx, node + off) : 0;
                        printf("  +%d (0x%X): 0x%08X\n", off, off, val);
                    }
                    fflush(stdout);
                }
                if (s_219558_calls <= 25 || s_219558_calls % 100 == 0) {
                    printf("[TLS 80219558] #%d node=0x%08X id=%u next=0x%08X\n", s_219558_calls, node, ctx->gpr[3], next);
                    fflush(stdout);
                }
            } else if (s_219558_calls <= 5) {
                printf("[TLS 80219558] #%d id=%u (lr=0x%08X)\n", s_219558_calls, ctx->gpr[3], ctx->lr);
                fflush(stdout);
            }
            return 0; // Run original code
        }


        case 0x80470528: {
            u32 ptr = ctx->gpr[3];
            if (resolve_guest_pointer(ctx, ptr) && (ptr & 3) == 0) {
                u32 obj = mem_read32(ctx, ptr);
                if (resolve_guest_pointer(ctx, obj) && (obj & 3) == 0) {
                    u32 ref = mem_read32(ctx, obj + 0x2C);
                    if (ref > 0) {
                        mem_write32(ctx, obj + 0x2C, ref - 1);
                    }
                }
                mem_write32(ctx, ptr, 0);
            }
            ctx->pc = ctx->lr;
            return 1;
        }

        // fn_803B8D3C (Async loader / task progress check)
        case 0x803B8D3C: {
            static int s_8d3c_calls = 0;
            u32 obj = ctx->gpr[3];
            u8 v340 = obj ? mem_read8(ctx, obj + 340) : 0xFF;
            u32 mgr = mem_read32(ctx, 0x8087EC48);
            u32 m348 = mgr ? mem_read32(ctx, mgr + 348) : 0;
            if (tls_draw_trace_enabled() && (++s_8d3c_calls <= 10 || s_8d3c_calls % 60 == 0)) {
                printf("[TLS 803B8D3C] #%d obj=0x%08X (v340=%u) mgr=0x%08X (m348=%u) (lr=0x%08X)\n",
                       s_8d3c_calls, obj, v340, mgr, m348, ctx->lr);
                fflush(stdout);
            }
            return 0; // Run original code
        }

        // Task::Update for 0x80E93220 (0x800A2DE0)
        case 0x800A2DE0: {
            u32 obj = ctx->gpr[3];
            u32 state = obj ? mem_read32(ctx, obj + 348) : 0;
            static int s_2de0_calls = 0;
            if (++s_2de0_calls <= 5 || s_2de0_calls % 60 == 0 || state != 0) {
                printf("[TLS 800A2DE0] Update #%d obj=0x%08X state=+348=%u (lr=0x%08X)\n",
                       s_2de0_calls, obj, state, ctx->lr);
                fflush(stdout);
            }
            /* 5c.41: fn_800A2DE0 dispatches on mgr+348 through a 26-entry pointer
             * table at 0x807789D8 (`lwzx` then `bctr`). Only entry 1 is non-zero in
             * the static image, so the table is filled at run time - and 0x800A2E18
             * is mid-block, where a hook never fires (a probe only fires at a branch
             * target or a bl return address). Read the entry here instead, where the
             * state is already loaded and the dispatch is certain to follow. */
            if (tls_nand_probe_on()) {
                static u32 s_tab_dumped = 0;
                if (!s_tab_dumped && obj) {
                    s_tab_dumped = 1;
                    printf("[TLS StateTab] table@0x807789D8 (non-zero entries):\n");
                    for (u32 st = 0; st < 26; st++) {
                        u32 h = mem_read32(ctx, 0x807789D8 + st * 4);
                        if (h) printf("  state %2u -> 0x%08X\n", st, h);
                    }
                    printf("[TLS StateTab] current state=%u -> handler=0x%08X\n", state,
                           mem_read32(ctx, 0x807789D8 + (state < 26 ? state : 0) * 4));
                    fflush(stdout);
                }
            }
            return 0; // Run original code
        }

        // fn_80620220 (NANDPrivateOpen async wrapper) / fn_80620250 (its body)
        //
        // These used to answer for the guest: write 0 to gpr[6], enqueue gpr[8]
        // with result 0. That is fabricated *state*: it told the save loader that
        // the save file was opened successfully when nothing had been opened, so
        // the loader went on to read a file that does not exist and the title
        // ended up declaring the (absent) save data corrupt. The real body is not
        // an IOS call at all - it is SDK code that resolves the path and then
        // calls ISFS_OpenAsync/CreateFile, which land on our HLE'd IOS_* entries
        // further down this switch, where the honest answer already exists
        // ("no such file" for a fresh console). Run it.
        case 0x80620220:
        case 0x80620250: {
            if (tls_nand_probe_on()) {
                char msg[320];
                int n = snprintf(msg, sizeof(msg),
                                 "NANDPrivateOpen%s r3=0x%08X r4=0x%08X r5=%u r6=0x%08X r7=0x%08X r8=0x%08X r9=0x%08X",
                                 (address == 0x80620220u) ? "Async" : " (body)",
                                 ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->gpr[6],
                                 ctx->gpr[7], ctx->gpr[8], ctx->gpr[9]);
                if (n > 0 && n < (int)sizeof(msg) - 8 && ctx->gpr[3] >= 0x80000000u &&
                    ctx->gpr[3] < 0x94000000u && resolve_guest_pointer(ctx, ctx->gpr[3])) {
                    char path[64];
                    u32 pa = ctx->gpr[3];
                    for (int i = 0; i < 63; i++) {
                        u8 c = mem_read8(ctx, pa + (u32)i);
                        path[i] = (char)c;
                        if (!c) break;
                    }
                    path[63] = 0;
                    snprintf(msg + n, sizeof(msg) - n, " path4='%s'", path);
                }
                tls_nand_probe_slot(msg);
            }
            return 0; // Run the guest's own NAND implementation
        }

        // fn_80620BD0 (NANDGetStatus, async)
        //
        // Same story: it used to write a fabricated 1346432-byte length into the
        // caller's status buffer and report success. The real function builds a
        // command block and issues an ISFS ioctl, which our IOS_* HLE answers.
        case 0x80620BD0: {
            if (tls_nand_probe_on()) {
                char msg[256];
                snprintf(msg, sizeof(msg),
                         "NANDGetStatus r3=0x%08X r4=0x%08X r5=0x%08X r6=0x%08X r7=0x%08X lr=0x%08X",
                         ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->gpr[6], ctx->gpr[7], ctx->lr);
                tls_nand_probe_slot(msg);
            }
            return 0; // Run the guest's own implementation
        }

        // fn_800A4228(mgr, &status): the save manager's "is it finished?" query.
        //
        // The guest's own function is three instructions (handover 5c.38 D):
        //
        //     800A4228  lwz  r5, 0x15C(r3)   ; state
        //               lwz  r3, 0x168(r3)   ; status
        //               neg/or/srwi          ; return (state != 0)
        //               stw  r3, 0(r4)       ; *out = status
        //
        // This replacement answers it for the guest and *writes* 0 into mgr+0x15C.
        // That is a fabrication, and 5c.39 measured exactly what it hides: at the
        // title's query (lr=0x80534C58) the manager is genuinely BUSY - state 7,
        // status 0 - and its own run continues to status 11 (the open of the missing
        // /savedata.dat fails with NAND error -12 -> fn_800A4494 -> 11) before it
        // finishes. Forcing state 0 truncates that machine and sends the title down
        // fn_800A472C's length check instead, which is why message 12 is set.
        //
        // It was kept after measuring the alternative: with the guest's own function
        // the title waits, finishes with status 11, takes mode 9 and shows the MENU
        // with no dialog - and then NEW GAME fades to black and never reaches Game,
        // because the save *create* path needs a NAND the runner does not model yet.
        // Hardware does show this dialog on a fresh NAND (Dolphin run3: title ->
        // save dialog -> NEW GAME -> Chapter 1), so the fabricated answer's *visible*
        // effect coincides with hardware while its mechanism is a lie. Retire it only
        // together with the create/write half of the NAND (handover 5c.39 F).
        /* 5c.42 K: THE fn_800A4228 FABRICATION IS RETIRED.
         *
         * It used to answer for the guest - *out = 0 and mgr->state = 0, i.e. "the
         * save manager is idle and has no error" - regardless of what the manager
         * actually held. With the create path working (5c.42 G-J) the guest's own
         * three instructions are enough, and they are what runs now:
         *     *out = mgr+0x168 (status);  return (mgr+0x15C (state) != 0)
         * so the title waits for the real manager instead of a fabricated "idle".
         * Probe only, then let the guest code execute. */
        case 0x800A4228: {
            static int s_probe = -1, s_n = 0;
            if (s_probe < 0) s_probe = getenv("TLS_SAVE_PROBE") ? 1 : 0;
            if (s_probe && s_n < 80) {
                u32 mgr = ctx->gpr[3];
                s_n++;
                printf("[TLS SaveCheck] 800A4228 state=%u status=%u lr=0x%08X (guest answer)\n",
                       mgr ? mem_read32(ctx, mgr + 0x15C) : 0,
                       mgr ? mem_read32(ctx, mgr + 0x168) : 0, ctx->lr);
                fflush(stdout);
            }
            return 0; // run the guest's own three instructions
        }

        /* fn_800A500C(mgr, result, op) is the save manager's single completion
         * handler: it stores `op` into mgr+0x15C (the state the title polls) and
         * `result` decides what goes into mgr+0x168 (0 -> "no error", otherwise
         * fn_800A4494(result)). Printing both arguments at every completion shows
         * what the manager actually learned from the NAND layer - in particular
         * whether the -6 our IOS_OpenAsync hands back for a missing file ever
         * reaches it (handover 5c.39). */
        case 0x800A500C: {
            static int s_500c_probe = -1, s_500c_n = 0;
            if (s_500c_probe < 0) s_500c_probe = getenv("TLS_SAVE_PROBE") ? 1 : 0;
            if (s_500c_probe && s_500c_n < 60) {
                s_500c_n++;
                printf("[TLS SaveCheck] 800A500C(mgr=0x%08X result=%d op=%u) lr=0x%08X\n",
                       ctx->gpr[3], (s32)ctx->gpr[4], ctx->gpr[5], ctx->lr);
                fflush(stdout);
            }
            return 0; // Run the guest's own state machine
        }

        // fn_800A472C (Save data status check)
        case 0x800A472C: {
            /* This used to answer for the guest: gpr[3]=1 plus a fabricated length of
             * 1348992 bytes. That is fabricated *state*, and it is why the title's
             * mode 5 (save check) always took the "data problem" branch to mode 9 and
             * then looped back to the title instead of offering NEW GAME (handover
             * 5c.10). The guest's own implementation is small and self-contained:
             *   800A472C  if (fn_8061EF90(mgr + 0x234) == 0) return 1;
             *             *out = fn_800A4494(mgr); return 0;
             * and the NAND/IOS layer underneath it is already HLE'd, so run it. */
            static int s_472c_probe = -1;
            if (s_472c_probe < 0) s_472c_probe = getenv("TLS_SAVE_PROBE") ? 1 : 0;
            if (s_472c_probe) {
                printf("[TLS SaveCheck] fn_800A472C running original (mgr=0x%08X out_len=0x%08X out_err=0x%08X lr=0x%08X)\n",
                       ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->lr);
                fflush(stdout);
            }
            return 0; // Run the guest's own save-data check
        }

        // The two instructions that decide "no save data (offer to create)" vs
        // "the data is corrupted" in the title's mode-5 save check (handover 5c.34
        // item 2). Read from the DOL, both are *block entries* (a `bl` return address
        // and a branch target), which is what makes them probeable as replacements:
        //
        //   80534C78  bl  0x800A472C            ; save status check
        //   80534C7C  cmpwi r3, 0               ; <- probe A: 0 = "check passed"
        //   80534C80  bc  4,2, 0x80534CA8       ; nonzero -> mode 6 (error/create)
        //   80534CA8  ... bl 0x800A4E08 / 0x803B854C ; expected length
        //   80534CC0  lwz  r3, 120(r1)          ; <- probe B: out_len
        //   80534CC4  lwz  r0, 116(r1)          ;            expected
        //   80534CC8  cmplw r3, r0
        //   80534CCC  bc  12,2, 0x80534CF4      ; EQUAL -> mode 9 ("data is corrupted")
        //   80534CF4  mode 9 ;  80534CD0.. mode 6
        //
        // So the guest shows the corrupted dialog exactly when the two lengths are
        // EQUAL. With no save file at all our NAND layer answered success with length
        // 0 for a fd that was never opened, and the manager's cached status length is
        // also 0 - equal, hence "corrupted". The probe prints both values so the
        // decision is measured rather than argued about.
        case 0x80534C7C: {
            static int s_probe = -1;
            if (s_probe < 0) s_probe = getenv("TLS_SAVE_PROBE") ? 1 : 0;
            if (s_probe) {
                /* r3 here is fn_800A472C's *return*: 1 = the check passed (the caller then
                 * compares lengths), 0 = it failed (the caller takes mode 6). */
                printf("[TLS SaveCheck] 80534C7C fn_800A472C -> %d (%s)\n",
                       (s32)ctx->gpr[3],
                       ((s32)ctx->gpr[3] != 0) ? "check PASSED, compare lengths"
                                               : "check FAILED -> mode 6");
                fflush(stdout);
            }
            return 0;
        }
        /* The save-verdict chain, measured instead of argued (handover 5c.38).
         *
         * The title's mode-5 handler is a four-way decision and both old probes sat
         * *below* it, so "mode 6" was visible while the reason was not:
         *
         *   80534C54  bl   0x800A4228(mgr, &status)   ; flag = (mgr+348 != 0), status = mgr+360
         *   80534C58  <- probe A: flag.  NaN -> title does nothing at all
         *   80534C5C  bc   4,2, done                  ; flag != 0 -> no dialog
         *   80534C68  bc   4,2, 0x80534D04           ; status != 0 -> decide below
         *   (status == 0) -> 80534C78 fn_800A472C length check -> mode 6 / mode 9
         *   80534D04  <- probe B: status.  5 -> msg 12, 14 -> msg 21, other -> mode 9
         *   80534D34  bl   0x80364E7C(..., status+7) ; <- probe C sees the message id
         *   80534C9C  bl   0x80364E7C(..., 12)       ; the "check failed" message
         *
         * fn_800A4228 is three instructions: *out = mgr+360; return mgr+348 != 0, so a
         * console with no save file reaches the dialog only if the manager stored a
         * failure status - the question is which status, and which layer produced it. */
        /* fn_800D6BE0 is the routine whose inner block (0x800D6CF0) stamps
         * 00000000FFFFFFFF over the character-texture buffers. The block watch reported the
         * mid-function label, where r3..r6 are whatever the branch left; this is the real
         * ENTRY, so these are the arguments the routine was called with (handover 5c.45 E).
         * Probe only - the guest's own code still runs. */
        case 0x800D6BE0: {
            static int s_probe = -1, s_n = 0;
            if (s_probe < 0) s_probe = getenv("TLS_TEXDECODE_PROBE") ? 1 : 0;
            if (s_probe && s_n < 200) {
                extern int g_runner_current_frame;
                if (g_runner_current_frame < tls_texprobe_from()) return 0;
                s_n++;
                printf("[TLS TexDecode] frame=%d dst=0x%08X src=0x%08X w=%u h=%u r7=0x%08X lr=0x%08X\n",
                       g_runner_current_frame, ctx->gpr[3], ctx->gpr[4],
                       ctx->gpr[5], ctx->gpr[6], ctx->gpr[7], ctx->lr);
                fflush(stdout);
            }
            return 0;
        }

        /* fn_800D6E48 is the game's software CMPR encoder: it asks 0x80615E00 for an RGBA8
         * (format 6) and a CMPR (format 14) texture of the same size, then converts one into
         * the other. The model's texture comes out fully transparent, so the question is
         * whether the RGBA8 source is empty or the encoder mistranslates it. These two probes
         * sit on the CALLER's bl-return addresses, where r3 is the returned texture pointer
         * (handover 5c.45 M). Probe only. */
        case 0x800D6E80: {
            static int s_probe = -1;
            if (s_probe < 0) s_probe = getenv("TLS_CMPR_PROBE") ? 1 : 0;
            if (s_probe) {
                extern int g_runner_current_frame;
                printf("[TLS Cmpr] frame=%d rgba8_tex=0x%08X (w=%u h=%u)\n",
                       g_runner_current_frame, ctx->gpr[3], ctx->gpr[26], ctx->gpr[27]);
                fflush(stdout);
            }
            return 0;
        }
        case 0x800D6E9C: {
            static int s_probe = -1;
            if (s_probe < 0) s_probe = getenv("TLS_CMPR_PROBE") ? 1 : 0;
            if (s_probe) {
                extern int g_runner_current_frame;
                printf("[TLS Cmpr] frame=%d cmpr_tex=0x%08X dst=0x%08X src=0x%08X\n",
                       g_runner_current_frame, ctx->gpr[3], ctx->gpr[24], ctx->gpr[25]);
                fflush(stdout);
            }
            return 0;
        }

        /* 0x800D6F70 is the branch target of the pixel copy/convert loop inside the texture
         * preparation routine (copy -> decode -> memset(source), handover 5c.45 R). Its
         * registers name the buffers of the pass that is running, which decides whether the
         * copy step ran before the decode that reads the cleared staging buffer. */
        case 0x800D6F70: {
            static int s_probe = -1, s_n2 = 0;
            if (s_probe < 0) s_probe = getenv("TLS_TEXPREP_PROBE") ? 1 : 0;
            if (s_probe && s_n2 < 400) {
                extern int g_runner_current_frame;
                if (g_runner_current_frame < tls_texprobe_from()) return 0;
                /* one line per distinct pass: this block is a loop body */
                static u32 l_src = 0, l_dst = 0, l_stg = 0, l_sz = 0;
                if (ctx->gpr[24] == l_src && ctx->gpr[29] == l_dst &&
                    ctx->gpr[28] == l_stg && ctx->gpr[30] == l_sz) return 0;
                l_src = ctx->gpr[24]; l_dst = ctx->gpr[29];
                l_stg = ctx->gpr[28]; l_sz = ctx->gpr[30];
                s_n2++;
                printf("[TLS TexPrep] frame=%d src=0x%08X dst=0x%08X staging=0x%08X size=0x%08X\n",
                       g_runner_current_frame, ctx->gpr[24], ctx->gpr[29],
                       ctx->gpr[28], ctx->gpr[30]);
                fflush(stdout);
            }
            return 0;
        }

        /* 0x800D7178 is the return address of the memset that ends one texture pass
         * (copy -> decode -> memset(source), handover 5c.45 R). Logging it with the staging
         * pointer orders the memset against the prep and decode probes *within* a frame, which
         * frame-granular instruments cannot do. */
        case 0x800D7178: {
            static int s_probe = -1, s_n = 0;
            if (s_probe < 0) s_probe = getenv("TLS_TEXPREP_PROBE") ? 1 : 0;
            if (s_probe && s_n < 400) {
                extern int g_runner_current_frame;
                if (g_runner_current_frame < tls_texprobe_from()) return 0;
                s_n++;
                printf("[TLS TexClear] frame=%d staging=0x%08X size=0x%08X\n",
                       g_runner_current_frame, ctx->gpr[28], ctx->gpr[30]);
                fflush(stdout);
            }
            return 0;
        }

        /* 0x80570CFC is the GameLoadTask update - the task that owns the tutorial/loading
         * page and never finishes (handover 5c.46 M/N). Its own code returns early when
         * [task+0x00] == 0 while [task+0x14] != 0, so print the fields that gate it. */
        case 0x80570CFC: {
            static int s_probe = -1, s_n = 0;
            static u32 l_f[8] = {0,0,0,0,0,0,0,0};
            if (s_probe < 0) s_probe = getenv("TLS_LOADTASK_PROBE") ? 1 : 0;
            if (s_probe) {
                extern int g_runner_current_frame;
                /* the offsets the function itself tests: 0x00, 0x14, 0x18, 0x1c, 0x20,
                 * 0x24 (= the 36(r3) the code branches on), 0x28 (= 40(r3)), 0x2c */
                static const u32 offs[8] = {0x00,0x14,0x18,0x1c,0x20,0x24,0x28,0x2c};
                u32 f[8];
                for (int i = 0; i < 8; i++) {
                    u32 a = ctx->gpr[3] + offs[i];
                    u8* h = (u8*)resolve_guest_pointer(ctx, a);
                    f[i] = h ? *(u32*)h : 0xDEADBEEFu;
                }
                int changed = 0;
                for (int i = 0; i < 8; i++) if (f[i] != l_f[i]) changed = 1;
                if (changed && s_n < 80) {
                    for (int i = 0; i < 8; i++) l_f[i] = f[i];
                    s_n++;
                    /* the manager this task consults for the save check (r13-26456) and the
                     * two fields fn_800A4228 reads: +360 stored out, +348 returned */
                    u32 mgr = 0, f348 = 0, f360 = 0;
                    {
                        u8* gh = (u8*)resolve_guest_pointer(ctx, ctx->gpr[13] + (u32)(s32)(-26456));
                        if (gh) {
                            mgr = *(u32*)gh;
                            u8* mh = (u8*)resolve_guest_pointer(ctx, mgr);
                            if (mh) { f348 = *(u32*)(mh + 348); f360 = *(u32*)(mh + 360); }
                        }
                    }
                    /* r13-23336 gates 0x805EC060 (status 64 while zero) and so gates the whole
                     * load state machine; r13-26456 is the save manager. */
                    u32 flag_addr = ctx->gpr[13] + (u32)(s32)(-23336);
                    u32 flag = 0, status = 0;
                    {
                        u8* fh = (u8*)resolve_guest_pointer(ctx, flag_addr);
                        if (fh) flag = *(u32*)fh;
                        u8* sh = (u8*)resolve_guest_pointer(ctx, 0x80003174u);
                        if (sh) status = *(u8*)sh;
                    }
                    printf("[LoadTask] frame=%d r13=0x%08X flag(0x%08X)=0x%08X status174=%u mgr348=%u\n",
                           g_runner_current_frame, ctx->gpr[13], flag_addr, flag, status, f348);
                    fflush(stdout);
                }
            }
            return 0;
        }

        /* 0x80570E28 is where GameLoadTask calls fn_800A4228 (the save check) every frame;
         * a nonzero return sends it straight back to its idle path, which is what keeps the
         * tutorial/loading page from ever advancing (handover 5c.46 O). Print the manager and
         * the two fields that function reads: mgr+360 (the status it stores) and mgr+348 (the
         * flag it returns). */
        case 0x80570E28: {
            static int s_probe = -1, s_n = 0;
            if (s_probe < 0) s_probe = getenv("TLS_LOADTASK_PROBE") ? 1 : 0;
            if (s_probe && s_n < 30) {
                extern int g_runner_current_frame;
                u32 mgr = ctx->gpr[3];
                u8* h = (u8*)resolve_guest_pointer(ctx, mgr);
                if (h) {
                    u32 f348 = *(u32*)(h + 348);
                    u32 f360 = *(u32*)(h + 360);
                    if (s_n < 12 || (g_runner_current_frame % 600) == 0) {
                        printf("[LoadSaveCheck] frame=%d mgr=0x%08X mgr+348=%u mgr+360=0x%08X\n",
                               g_runner_current_frame, mgr, f348, f360);
                        fflush(stdout);
                    }
                    s_n++;
                }
            }
            return 0;
        }

        /* The two threads the game creates at frame 170 (OSCreateThread: 0x808638F0 entry
         * 0x8071DBE0, 0x80879210 entry 0x80718C40). If their entries never fire, the game's
         * worker threads are never scheduled - which would explain a BSS flag that stays zero
         * forever (handover 5c.46 P/Q). */
        case 0x8071DBE0:
        case 0x80718C40: {
            static int s_probe = -1, s_hits = 0;
            if (s_probe < 0) s_probe = getenv("TLS_THREAD_PROBE") ? 1 : 0;
            if (s_probe && s_hits < 12) {
                extern int g_runner_current_frame;
                s_hits++;
                printf("[ThreadEntry] frame=%d pc=0x%08X r3=0x%08X\n",
                       g_runner_current_frame, address, ctx->gpr[3]);
                fflush(stdout);
            }
            return 0;
        }

        /* 0x8071D6E0 is the streaming manager's submit: allocate an operation, publish it as
         * manager+0x24, invoke its virtual start (5c.46 V). It has no direct xref, so the
         * caller is found here instead: print lr, i.e. who asks for the operation. */
        case 0x8071D6E0: {
            static int s_probe = -1, s_n = 0;
            if (s_probe < 0) s_probe = getenv("TLS_SUBMIT_PROBE") ? 1 : 0;
            if (s_probe && s_n < 24) {
                extern int g_runner_current_frame;
                s_n++;
                printf("[Submit] frame=%d mgr=0x%08X lr=0x%08X\n",
                       g_runner_current_frame, ctx->gpr[3], ctx->lr);
                fflush(stdout);
            }
            return 0;
        }

        /* The job pool behind that submit (handover 5c.46 V/W). 0x8071D470 allocates an
         * operation object from one of three free lists (mgr+0x0, mgr+0xC, mgr+0x18),
         * 0x8071D714 publishes it at mgr+0x24 and invokes its virtual start, and
         * 0x8071D3F0 is the *completion* that returns a finished object to a free list
         * (mgr + idx*0xC + 4) and wakes the worker on mgr+0x2C. TLS_ASYNC_PROBE=1 names
         * the objects, their vtable and their start slot, so "no work after frame 376"
         * can be attributed to a producer instead of to the worker.
         * TLS_ASYNC_PROBE_FROM=<frame> suppresses the start-up burst, so a long run can
         * answer "does anything get posted later". */
        case 0x8071D3F0: { /* post a completed operation object back into the pool */
            static int s_probe = -1, s_n = 0;
            static u32 s_seen_vt[8] = {0};
            static int s_seen_n = 0;
            if (s_probe < 0) s_probe = getenv("TLS_ASYNC_PROBE") ? 1 : 0;
            if (s_probe && s_n < 64 && g_runner_current_frame >= tls_async_probe_from()) {
                extern int g_runner_current_frame;
                u32 mgr = ctx->gpr[3], obj = ctx->gpr[4], idx = ctx->gpr[5];
                u32 vt = obj ? mem_read32(ctx, obj) : 0;
                s_n++;
                printf("[AsyncPool] f=%d POST mgr=0x%08X obj=0x%08X idx=%u vptr=0x%08X "
                       "f10=0x%08X f14=0x%08X f18=0x%08X f1c=0x%08X f20=0x%08X f24=0x%08X "
                       "f28=0x%08X\n",
                       g_runner_current_frame, mgr, obj, idx, vt,
                       obj ? mem_read32(ctx, obj + 0x10) : 0,
                       obj ? mem_read32(ctx, obj + 0x14) : 0,
                       obj ? mem_read32(ctx, obj + 0x18) : 0,
                       obj ? mem_read32(ctx, obj + 0x1C) : 0,
                       obj ? mem_read32(ctx, obj + 0x20) : 0,
                       obj ? mem_read32(ctx, obj + 0x24) : 0,
                       obj ? mem_read32(ctx, obj + 0x28) : 0);
                int known = 0;
                for (int i = 0; i < s_seen_n; i++) if (s_seen_vt[i] == vt) known = 1;
                if (!known && vt && s_seen_n < 8) {
                    s_seen_vt[s_seen_n++] = vt;
                    printf("[AsyncPool]   vtable 0x%08X slots:", vt);
                    for (int i = 0; i < 8; i++) printf(" %02X=0x%08X", i * 4, mem_read32(ctx, vt + i * 4));
                    printf("\n");
                }
                fflush(stdout);
            }
            return 0;
        }
        case 0x8071D714: { /* submit: the allocated operation is now at mgr+0x24 (r29=mgr, r3=obj) */
            static int s_probe = -1, s_n = 0;
            if (s_probe < 0) s_probe = getenv("TLS_ASYNC_PROBE") ? 1 : 0;
            if (s_probe && s_n < 64 && g_runner_current_frame >= tls_async_probe_from()) {
                extern int g_runner_current_frame;
                u32 mgr = ctx->gpr[29], obj = ctx->gpr[3];
                u32 vt = obj ? mem_read32(ctx, obj) : 0;
                s_n++;
                printf("[AsyncPool] f=%d SUBMIT mgr=0x%08X obj=0x%08X vptr=0x%08X "
                       "slot3=0x%08X slot4=0x%08X f10=0x%08X f14=0x%08X f18=0x%08X f1c=0x%08X "
                       "f20=0x%08X f24=0x%08X\n",
                       g_runner_current_frame, mgr, obj, vt,
                       vt ? mem_read32(ctx, vt + 0x0C) : 0,
                       vt ? mem_read32(ctx, vt + 0x10) : 0,
                       obj ? mem_read32(ctx, obj + 0x10) : 0,
                       obj ? mem_read32(ctx, obj + 0x14) : 0,
                       obj ? mem_read32(ctx, obj + 0x18) : 0,
                       obj ? mem_read32(ctx, obj + 0x1C) : 0,
                       obj ? mem_read32(ctx, obj + 0x20) : 0,
                       obj ? mem_read32(ctx, obj + 0x24) : 0);
                fflush(stdout);
            }
            return 0;
        }
        case 0x8071D5D0: { /* the wait's "is an object available?" peek, plus pool occupancy */
            static int s_probe = -1, s_n = 0;
            if (s_probe < 0) s_probe = getenv("TLS_ASYNC_PROBE") ? 1 : 0;
            if (s_probe && s_n < 64 && g_runner_current_frame >= tls_async_probe_from()) {
                extern int g_runner_current_frame;
                u32 mgr = ctx->gpr[3];
                s_n++;
                printf("[AsyncPool] f=%d PEEK mgr=0x%08X heads=0x%08X/0x%08X/0x%08X sig=%u\n",
                       g_runner_current_frame, mgr,
                       mem_read32(ctx, mgr), mem_read32(ctx, mgr + 0x0C),
                       mem_read32(ctx, mgr + 0x18),
                       mem_read8(ctx, mgr + 0x28));
                fflush(stdout);
            }
            return 0;
        }

        /* 0x805F38A0 is the SDK's reset/return-to-menu path (OSReboot.c chunk: it calls
         * __OSStopPlayRecord, __OSUnRegisterStateEvent, __OSShutdownDevices, __OSHotReset
         * and ends in OSPanic). 5c.46 O claims GameLoadTask pumps it every frame when the
         * save check returns zero; this probe answers that directly, and any call would
         * also leave [TLS OSPanic] output behind. */
        case 0x805F38A0: {
            static int s_probe = -1;
            static u32 s_n = 0;
            if (s_probe < 0) s_probe = getenv("TLS_RESET_PROBE") ? 1 : 0;
            if (s_probe) {
                extern int g_runner_current_frame;
                s_n++;
                if (s_n <= 8 || (s_n % 60) == 0) {
                    printf("[ResetProbe] f=%d #%u fn_805F38A0(r3=%u) lr=0x%08X\n",
                           g_runner_current_frame, s_n, ctx->gpr[3], ctx->lr);
                    fflush(stdout);
                }
            }
            return 0;
        }

        /* 0x80363DBC is the update half of the only task pair in the frame-4020 dump besides
         * GameLoadTask (same object 0x80B8DD10, drawn by 0x803646C4, which formats four
         * strings and draws four quads). Its first pass creates four event actions
         * (fn_801F3FF8) and stores them at +0x24..+0x30; the next pass only proceeds when
         * the actions report `(*(u32*)(h+0x38) & 2) == 2`, then sets +0x34 = 1. Measured
         * (5c.46 Z): handles 0/1/2 are ready from frame 201 and +0x34 = 1 from frame 202,
         * so this task is NOT what the frozen page waits on - the probe is kept because it
         * is the cheapest way to re-check that claim on a different frame. Print on change. */
        case 0x80363DBC: {
            static int s_probe = -1;
            static u32 s_last[12];
            static int s_have = 0, s_n = 0;
            if (s_probe < 0) s_probe = getenv("TLS_PAGETASK_PROBE") ? 1 : 0;
            if (s_probe) {
                extern int g_runner_current_frame;
                u32 p = ctx->gpr[3];
                u32 v[12];
                v[0] = mem_read32(ctx, p + 0x00);
                v[1] = mem_read32(ctx, p + 0x18);
                v[2] = mem_read32(ctx, p + 0x1C);
                v[3] = mem_read32(ctx, p + 0x20);
                v[4] = mem_read32(ctx, p + 0x34);
                v[5] = mem_read32(ctx, p + 0x44);
                for (int i = 0; i < 4; i++) {
                    u32 h = mem_read32(ctx, p + 0x24 + (u32)i * 4);
                    v[6 + i] = h;
                    v[8 + i] = (h >= 0x80000000u && h < 0x82000000u)
                                   ? mem_read32(ctx, h + 0x38) : 0xDEADBEEFu;
                }
                int changed = !s_have;
                for (int i = 0; i < 12; i++) if (v[i] != s_last[i]) changed = 1;
                if ((changed && s_n < 120) || (g_runner_current_frame % 600) == 0) {
                    for (int i = 0; i < 12; i++) s_last[i] = v[i];
                    s_have = 1;
                    s_n++;
                    printf("[PageTask] f=%d p=0x%08X f0=%u f18=%u f1c=%u f20=%u f34=%u f44=0x%08X "
                           "h=%08X/%08X/%08X/%08X st=x%X,x%X,x%X,x%X (ready012=%d)\n",
                           g_runner_current_frame, p, v[0], v[1], v[2], v[3], v[4], v[5],
                           v[6], v[7], v[8], v[9], v[8], v[9], v[10], v[11],
                           (((v[8] & 2) == 2) + ((v[9] & 2) == 2) + ((v[10] & 2) == 2)));
                    fflush(stdout);
                }
            }
            return 0;
        }

        case 0x80534C58: {
            static int s_probe = -1;
            if (s_probe < 0) s_probe = getenv("TLS_SAVE_PROBE") ? 1 : 0;
            if (s_probe) {
                printf("[TLS SaveCheck] 80534C58 fn_800A4228 -> flag=%d (%s)\n",
                       (s32)ctx->gpr[3],
                       ((s32)ctx->gpr[3] != 0) ? "mgr says OK -> no dialog at all"
                                               : "mgr says not-OK -> status decides");
                fflush(stdout);
            }
            return 0;
        }
        case 0x80534D04: {
            static int s_probe = -1;
            if (s_probe < 0) s_probe = getenv("TLS_SAVE_PROBE") ? 1 : 0;
            if (s_probe) {
                s32 st = (s32)ctx->gpr[0];
                printf("[TLS SaveCheck] 80534D04 mgr status=%d -> %s\n", st,
                       (st == 5)  ? "mode 6, msg 12" :
                       (st == 14) ? "mode 6, msg 21" : "mode 9");
                fflush(stdout);
            }
            return 0;
        }
        /* fn_80364E7C(owner, id): the message setter the save dialogs go through.
         * Prints the id it is asked for, so "which text is on screen" stops being a
         * guess: 12 is the id both failure paths above use. */
        case 0x80364E7C: {
            static int s_probe = -1, s_n = 0;
            if (s_probe < 0) s_probe = getenv("TLS_SAVE_PROBE") ? 1 : 0;
            if (s_probe && s_n < 24) {
                s_n++;
                printf("[TLS SaveCheck] SetMessage id=%d owner=0x%08X lr=0x%08X\n",
                       (s32)ctx->gpr[4], ctx->gpr[3], ctx->lr);
                fflush(stdout);
            }
            return 0;
        }

        /* fn_800A4494(err) is the NAND-error -> status/message-index mapper: 0 means
         * "no error" and everything else becomes one of the statuses the title turns
         * into a dialog (5 -> msg 12, 14 -> msg 21, other -> mode 9). Printing the code
         * it is handed names the layer that failed instead of leaving "the save is
         * corrupted" as the only visible fact (handover 5c.38). */
        case 0x800A4494: {
            static int s_probe = -1, s_n = 0;
            if (s_probe < 0) s_probe = getenv("TLS_SAVE_PROBE") ? 1 : 0;
            if (s_probe && s_n < 40) {
                s_n++;
                printf("[TLS SaveCheck] err->status(%d) call#%d lr=0x%08X\n",
                       (s32)ctx->gpr[4], s_n, ctx->lr);
                fflush(stdout);
            }
            return 0;
        }

        case 0x80534CC0: {
            static int s_probe = -1;
            if (s_probe < 0) s_probe = getenv("TLS_SAVE_PROBE") ? 1 : 0;
            if (s_probe) {
                u32 sp = ctx->gpr[1];
                u32 len = mem_read32(ctx, sp + 120);
                u32 want = mem_read32(ctx, sp + 116);
                printf("[TLS SaveCheck] 80534CC0 out_len=%u expected=%u -> %s\n", len, want,
                       (len == want) ? "MODE 9 (\"data is corrupted\")" : "MODE 6 (error/create)");
                fflush(stdout);
            }
            return 0;
        }

        // fn_803B8270 (FinishAsync / set v340=0)
        case 0x803B8270: {
            u32 obj = ctx->gpr[3];
            printf("[TLS 803B8270] FinishAsync! obj=0x%08X (lr=0x%08X)\n", obj, ctx->lr);
            fflush(stdout);
            return 0; // Run original code
        }

        // fn_800CB538 (handle-busy predicate, gate B of title mode 25)
        case 0x800CB538: {
            if (tls_mode25_probe_on() && g_m25_task && ctx->gpr[3] == g_m25_task + 0x284u) {
                u32 slot  = ctx->gpr[3];
                u32 tgt   = mem_read32(ctx, slot);
                u32 inner = (tgt >= 0x80000000u && tgt < 0x83000000u) ? mem_read32(ctx, tgt + 4) : 0;
                u32 i108  = (inner >= 0x80000000u && inner < 0x83000000u) ? mem_read32(ctx, inner + 108) : 0;
                u32 i112  = (inner >= 0x80000000u && inner < 0x83000000u) ? mem_read32(ctx, inner + 112) : 0;
                u32 key[3] = { tgt, i108, i112 };
                static u32 s_key[3] = { 0xFFFFFFFFu, 0, 0 };
                g_m25_cb_n++;
                if (key[0] != s_key[0] || key[1] != s_key[1] || key[2] != s_key[2]) {
                    extern int g_runner_current_frame;
                    printf("[TLS Mode25] gateB fn_800CB538 #%u frame=%d slot=0x%08X tgt=0x%08X "
                           "inner=0x%08X i108=0x%08X i112=0x%08X\n",
                           g_m25_cb_n, g_runner_current_frame, slot, tgt, inner, i108, i112);
                    fflush(stdout);
                    memcpy(s_key, key, sizeof(s_key));
                }
            }
            return 0; // run the guest's own predicate
        }

        // fn_80572B70 is hooked above as SequenceManager::SetNextSequence; the
        // mode-25 handover shows up there as SetNextSequence('Game').

        // fn_80533BE0 (TitleTask::SetMode)
        case 0x80533BE0: {
            u32 old_mode = mem_read32(ctx, ctx->gpr[3] + 0x2AC);
            u32 new_mode = ctx->gpr[4];
            printf("[TLS TitleMode] SetMode: new_mode=%u (old=%u) lr=0x%08X\n",
                   new_mode, old_mode, ctx->lr);
            fflush(stdout);
            return 0; // Run original code
        }

        // NewTitleTask::Update (0x80534074)
        case 0x80534074: {
            u32 task = ctx->gpr[3];
            u32 mode = task ? mem_read32(ctx, task + 0x2AC) : 0;
            static int s_upd_log = 0;
            static int s_after_press = 0;
            static u32 s_last_mode = 0xFFFFFFFFu;
            bool pad_edge = (s_ctrl_state.core_trig | s_ctrl_state.cl_trig) != 0;
            if (pad_edge) s_after_press = 12;
            if (mode != s_last_mode) {
                // The title advances 1->2->4->5->9 but never draws a menu layout, so the
                // question is which guest functions run at the transition. Dump the recent
                // dispatch ring right at the flip instead of at end of run.
                {
                    extern int g_runner_current_frame;
                    printf("[TLS NewTitleTask] MODE TRANSITION %u -> %u (frame %d, task=0x%08X)\n",
                           s_last_mode, mode, g_runner_current_frame, task);
                }
                tls_auto_accept_on_mode((int)mode);
                if (mode >= 2) {
                    tls_dump_recent_calls();
                }
                fflush(stdout);
                s_last_mode = mode;
            }
            if (++s_upd_log <= 10 || s_upd_log % 60 == 0 || pad_edge || s_after_press > 0) {
                // The press-start state machine either observes the button edge and moves a
                // state field, or it never sees it. Log the edge together with the candidate
                // state words for a short window after each press so the difference shows.
                printf("[TLS NewTitleTask] Update #%d task=0x%08X mode=%u trig=0x%04X/0x%04X "
                       "f48=0x%08X f2a8=0x%08X f2ac=0x%08X f2b0=0x%08X%s\n",
                       s_upd_log, task, mode, s_ctrl_state.core_trig, s_ctrl_state.cl_trig,
                       task ? mem_read32(ctx, task + 0x48) : 0,
                       task ? mem_read32(ctx, task + 0x2A8) : 0,
                       mode,
                       task ? mem_read32(ctx, task + 0x2B0) : 0,
                       pad_edge ? "   <== PAD EDGE" : "");
                fflush(stdout);
                if (!pad_edge && s_after_press > 0) s_after_press--;
            }
            /* Mode 1 -> 2 is gated by two things (0x80534264..0x805342A4):
             *   1. caller action 4, which the action map sends to real bit 11
             *      (classic-controller A, 0x0010) - see tools/decode_input_maps.py
             *   2. a float compare between *(*(task+72)+160) (150.0, the fade target)
             *      and *(*(task+72)+256) (0.0 until the first accepted press, which
             *      stores 150.0 there). The DOL's `cror eq,gt,eq` turns that into
             *      CR0[EQ] = (f256 >= f160), `mfcr r0` copies CR, `extrwi. r0,r0,1,2`
             *      extracts CR0[EQ], and `beq` takes the "not armed yet" branch when it
             *      is 0. So the gate opens on the press *after* the one that arms it -
             *      print both values so the state is never a guess. TLS_TITLE_GATE=1. */
            {
                static int s_gate = -1;
                if (s_gate < 0) s_gate = getenv("TLS_TITLE_GATE") ? 1 : 0;
                if (s_gate && mode == 1) {
                    extern int g_runner_current_frame;
                    u32 pad_global = ctx->gpr[13] - 26280u;
                    u32 pad = resolve_guest_pointer(ctx, pad_global) ? mem_read32(ctx, pad_global) : 0;
                    u32 trig = (pad && resolve_guest_pointer(ctx, pad + 15400)) ? mem_read32(ctx, pad + 15400) : 0;
                    u32 holder = task ? mem_read32(ctx, task + 72) : 0;
                    u32 f160 = 0, f256 = 0;
                    f32 a = 0.0f, b = 0.0f;
                    if (holder && resolve_guest_pointer(ctx, holder)) {
                        f160 = mem_read32(ctx, holder + 160);
                        f256 = mem_read32(ctx, holder + 256);
                        memcpy(&a, &f160, 4);
                        memcpy(&b, &f256, 4);
                    }
                    printf("[TLS TitleGate] frame=%d mode=1 realbit11(A)=%d trigger=0x%08X "
                           "f160=%.4f f256=%.4f gate_open=%d hold=0x%04X\n",
                           g_runner_current_frame, (trig >> 11) & 1, trig, a, b, (b >= a),
                           s_ctrl_state.core_hold);
                    fflush(stdout);
                }
            }
            /* Mode-25 gate dump (TLS_MODE25_PROBE=1): the two operands that decide
             * whether the title ever requests the "Game" sequence are
             *   gate A  *(task+0x2C8) != 0 && *(*(task+0x2C8)+76) >= 60
             *   gate B  fn_800CB538(task+0x284) == 0
             * Print both sides verbatim (and the objects' own progress fields) so
             * "waiting for 60" is a measurement instead of a reading of the branch. */
            if (tls_mode25_probe_on() && task && mode == 25) {
                extern int g_runner_current_frame;
                g_m25_task = task;
                u32 obj   = mem_read32(ctx, task + 0x2C8);
                u32 valid = (obj >= 0x80000000u && obj < 0x83000000u) ? 1u : 0u;
                u32 ctr   = valid ? mem_read32(ctx, obj + 76) : 0xDEADBEEFu;
                u32 o84   = valid ? mem_read32(ctx, obj + 84) : 0;
                u32 o92   = valid ? mem_read32(ctx, obj + 92) : 0;
                u32 o108  = valid ? mem_read32(ctx, obj + 108) : 0;
                u32 o112  = valid ? mem_read32(ctx, obj + 112) : 0;
                u32 o116  = valid ? mem_read32(ctx, obj + 116) : 0;
                u32 h284  = mem_read32(ctx, task + 0x284);
                u32 inner = (h284 >= 0x80000000u && h284 < 0x83000000u) ? mem_read32(ctx, h284 + 4) : 0;
                u32 i108  = (inner >= 0x80000000u && inner < 0x83000000u) ? mem_read32(ctx, inner + 108) : 0;
                u32 i112  = (inner >= 0x80000000u && inner < 0x83000000u) ? mem_read32(ctx, inner + 112) : 0;
                u32 h270  = mem_read32(ctx, task + 0x270);
                u32 f2b4  = mem_read32(ctx, task + 0x2B4);
                u32 f2c0  = mem_read32(ctx, task + 0x2C0);
                u32 f2c4  = mem_read32(ctx, task + 0x2C4);
                u32 key[5] = { obj, ctr, h284, inner, f2b4 };
                static u32 s_key[5] = { 0xFFFFFFFFu, 0, 0, 0, 0 };
                static int s_n = 0;
                int changed = (key[0] != s_key[0] || key[1] != s_key[1] ||
                               key[2] != s_key[2] || key[3] != s_key[3] || key[4] != s_key[4]);
                s_n++;
                if (changed || (s_n % 120) == 0 || !g_m25_seen) {
                    printf("[TLS Mode25] frame=%d #%d gateA obj=0x%08X valid=%u ctr76=%u(>=60:%d) "
                           "o84=%u o92=0x%08X o108=0x%08X o112=0x%08X o116=0x%08X | "
                           "gateB slot=0x%08X inner=0x%08X i108=0x%08X i112=0x%08X cb_calls=%u | "
                           "f2b4=%u f2c0=0x%08X f2c4=0x%08X h270=0x%08X\n",
                           g_runner_current_frame, s_n, obj, valid, ctr, (ctr >= 60),
                           o84, o92, o108, o112, o116,
                           h284, inner, i108, i112, g_m25_cb_n,
                           f2b4, f2c0, f2c4, h270);
                    fflush(stdout);
                    memcpy(s_key, key, sizeof(s_key));
                }
                g_m25_seen = 1;
            }
            return 0; // Run original code naturally!
        }

        case 0x8005DD60: {
            printf("[TLS fn_8005DD60] Called! lr=0x%08X eeb0_before=0x%08X\n", ctx->lr, mem_read32(ctx, 0x8087EEB0));
            fflush(stdout);
            return 0; // Run naturally
        }

        case 0x8047A4C8: {
            printf("[TLS fn_8047A4C8] Called! lr=0x%08X\n", ctx->lr);
            fflush(stdout);
            return 0; // Run naturally
        }

        // LayoutTask::Draw (0x801F4514)
        case 0x801F4514: {
            u32 obj = ctx->gpr[3];
            u32 f_fc = obj ? mem_read32(ctx, obj + 0xFC) : 0;
            /* EXPERIMENT, not a fix: `+0xFC` bit 30 is set on all six layout tasks whose
             * subtrees draw at the page frame and clear on the one whose four panes never
             * submit (0x81359B80, values 0x6C.../0x6F.../0x6E.../0xEC... vs 0x2C000000). Setting
             * it here answers the one question that matters - do those four panes draw when the
             * bit is on, i.e. are the page's missing crest/body-text elements sitting behind it -
             * or do they merely draw nothing? Default off; it mutates guest state by design and
             * must never ship as anything but a diagnostic (5c.46 AB). */
            {
                static int s_force = -1;
                if (s_force < 0) s_force = getenv("TLS_FORCE_LAYOUT_BIT") ? 1 : 0;
                if (s_force && obj && !(f_fc & 0x40000000u)) {
                    extern int g_runner_current_frame;
                    mem_write32(ctx, obj + 0xFC, f_fc | 0x40000000u);
                    static int s_force_reports = 0;
                    if (s_force_reports++ < 32) {
                        printf("[ForceLayoutBit] f=%d obj=0x%08X 0x%08X -> 0x%08X\n",
                               g_runner_current_frame, obj, f_fc, f_fc | 0x40000000u);
                        fflush(stdout);
                    }
                    f_fc |= 0x40000000u;
                }
            }
            u32 f_38 = obj ? mem_read32(ctx, obj + 0x38) : 0;
            u32 vt48 = obj ? mem_read32(ctx, obj + 0x48) : 0;
            u32 cnt48 = obj ? mem_read32(ctx, obj + 0x48 + 4) : 0;
            u32 arr48 = obj ? mem_read32(ctx, obj + 0x48 + 0xC) : 0;
            float f_100, f_104, f_a0;
            u32 u100 = obj ? mem_read32(ctx, obj + 0x100) : 0;
            u32 u104 = obj ? mem_read32(ctx, obj + 0x104) : 0;
            u32 ua0 = obj ? mem_read32(ctx, obj + 0xA0) : 0;
            memcpy(&f_100, &u100, 4); memcpy(&f_104, &u104, 4); memcpy(&f_a0, &ua0, 4);
            static int s_layout_draws = 0;
            s_layout_draws++;
            /* Test the 5c.27 s9.4 lead's foundation: do DRAWN LayoutTasks generally carry a
             * self-pointer at +4, or is +4 just uninitialised residue? If drawn tasks show a
             * variety of +4 values (including 2), then +4 is not the discriminator and the
             * whole "slot 1's +4 == 2 means unlinked" reading should be dropped. */
            if (tls_scene_sm_probe_on() && s_layout_draws <= 24) {
                printf("[TLS SceneSM] DRAW obj=0x%08X p4=0x%08X (self-8=0x%08X) p0=0x%08X\n",
                       obj, obj ? mem_read32(ctx, obj + 4) : 0, obj - 8u, obj ? mem_read32(ctx, obj) : 0);
                fflush(stdout);
            }
            if (obj == 0x8114EAE0 || s_layout_draws <= 5 || s_layout_draws % 60 == 0) {
                printf("[TLS LayoutTask::Draw] #%d obj=0x%08X fc=0x%08X (b1=%u,b4=%u) f38=0x%08X f100=%.2f f104=%.2f fa0=%.2f cnt48=%u\n",
                       s_layout_draws, obj, f_fc, (f_fc >> 30) & 1, (f_fc >> 27) & 1, f_38, f_100, f_104, f_a0, cnt48);
                if (arr48 && cnt48 > 0) {
                    for (u32 i = 0; i < cnt48; i++) {
                        u32 ch = mem_read32(ctx, arr48 + i * 4);
                        u32 cvt = ch ? mem_read32(ctx, ch) : 0;
                        u32 m14 = cvt ? mem_read32(ctx, cvt + 0x14) : 0;
                        u32 m18 = cvt ? mem_read32(ctx, cvt + 0x18) : 0;
                        u32 ch_f10 = ch ? mem_read32(ctx, ch + 0x10) : 0;
                        u32 ch_f184 = ch ? mem_read32(ctx, ch + 0x184) : 0;
                        printf("   ch[%u]=0x%08X (vt=0x%08X m14=0x%08X m18=0x%08X f10=0x%08X f184=0x%08X)\n",
                               i, ch, cvt, m14, m18, ch_f10, ch_f184);
                    }
                }
                fflush(stdout);
            }
            /* TLS_PAGE_CAPTURE window: the page half is only ~1 frame in 2, so dump the
             * layout tree for a few frames after the capture fired and pick the page one.
             * This is what answers "are the missing elements absent from the tree, or
             * present and skipped": a pane that exists here but never submits a quad is a
             * draw-side skip; no pane at all means the page's script never created it. */
            {
                extern int g_tls_page_capture_frame;
                extern int g_runner_current_frame;
                static int s_pcd_draws = 0;
                if (g_tls_page_capture_frame >= 0 &&
                    g_runner_current_frame >= g_tls_page_capture_frame &&
                    g_runner_current_frame <= g_tls_page_capture_frame + 4 &&
                    s_pcd_draws < 400) {
                    s_pcd_draws++;
                    printf("[PageTree] f=%d #%d obj=0x%08X fc=0x%08X f38=0x%08X cnt48=%u arr48=0x%08X "
                           "f40=0x%08X f44=0x%08X f48=0x%08X f4c=0x%08X f50=0x%08X\n",
                           g_runner_current_frame, s_pcd_draws, obj, f_fc, f_38, cnt48, arr48,
                           obj ? mem_read32(ctx, obj + 0x40) : 0,
                           obj ? mem_read32(ctx, obj + 0x44) : 0,
                           obj ? mem_read32(ctx, obj + 0x48) : 0,
                           obj ? mem_read32(ctx, obj + 0x4C) : 0,
                           obj ? mem_read32(ctx, obj + 0x50) : 0);
                    /* The dispatch words, read LIVE (see tls_dump_live_table): the container's
                     * vptr first, then every distinct pane type table in this tree. */
                    {
                        static u32 s_pcd_tables[12];
                        static int s_pcd_ntables = 0;
                        tls_dump_live_table(ctx, obj ? mem_read32(ctx, obj + 0x48) : 0,
                                            s_pcd_tables, &s_pcd_ntables, "container");
                        if (arr48 && cnt48 > 0 && cnt48 < 128) {
                            for (u32 i = 0; i < cnt48; i++) {
                                u32 ch = mem_read32(ctx, arr48 + i * 4);
                                tls_dump_live_table(ctx, ch ? mem_read32(ctx, ch) : 0,
                                                    s_pcd_tables, &s_pcd_ntables, "pane");
                            }
                        }
                    }
                    /* Raw head of the task around +0xF0..+0x11F. `+0xFC` is what fn_801F4514
                     * bit-tests before it draws the subtree, and for the six tasks that DO
                     * draw it reads as printable ASCII ("l922", "o060") while the one that is
                     * skipped reads 0x2C000000 - which cannot both be a flag word. One hexdump
                     * decides whether that field is a flag or a label buffer. */
                    if (obj) {
                        for (u32 off = 0xF0; off < 0x120; off += 16) {
                            printf("[PageTree]    obj+%03X %08X %08X %08X %08X\n", off,
                                   mem_read32(ctx, obj + off + 0),
                                   mem_read32(ctx, obj + off + 4),
                                   mem_read32(ctx, obj + off + 8),
                                   mem_read32(ctx, obj + off + 12));
                        }
                    }
                    if (arr48 && cnt48 > 0 && cnt48 < 128) {
                        for (u32 i = 0; i < cnt48; i++) {
                            u32 ch = mem_read32(ctx, arr48 + i * 4);
                            printf("[PageTree]    ch[%u]=0x%08X vt=0x%08X vis=0x%08X tex=0x%08X "
                                   "f10=0x%08X f18=0x%08X f184=0x%08X f1c=0x%08X\n",
                                   i, ch, ch ? mem_read32(ctx, ch) : 0,
                                   ch ? mem_read32(ctx, ch + 0x10) : 0,
                                   ch ? mem_read32(ctx, ch + 0x14) : 0,
                                   ch ? mem_read32(ctx, ch + 0x18) : 0,
                                   ch ? mem_read32(ctx, ch + 0x1C) : 0,
                                   ch ? mem_read32(ctx, ch + 0x184) : 0,
                                   ch ? mem_read32(ctx, ch + 0x20) : 0);
                            /* Raw head of the pane, so the class layout can be read off the
                             * object instead of guessed from one field at a time. Four words
                             * per line, +0x00..+0x7F. */
                            if (ch) {
                                for (u32 off = 0; off < 0x80; off += 16) {
                                    printf("[PageTree]      +%02X %08X %08X %08X %08X\n", off,
                                           mem_read32(ctx, ch + off + 0),
                                           mem_read32(ctx, ch + off + 4),
                                           mem_read32(ctx, ch + off + 8),
                                           mem_read32(ctx, ch + off + 12));
                                }
                            }
                        }
                    }
                    fflush(stdout);
                }
            }

            return 0; // Run naturally
        }

        /* Which panes DRAW. fn_801EF894 (the layout container's draw) walks the child array it
         * holds at +0x0C and calls each child's slot +0x14:
         *
         *   lwz r3,0xc(r28); lwzx r3,r3,r31; lwz r12,0(r3); lwz r12,0x14(r12); bctrl
         *
         * The slot targets come from the LIVE type tables (tls_dump_live_table), not the ELF:
         *   type table 0x80782B68 (image panes) +0x14 -> 0x801F2A88
         *   type table 0x80782D80 (type-0 panes)  +0x14 -> 0x801F9E6C
         *   type tables 0x80782BD0 / 0x80782AA0 / 0x80782DB8 share the base 0x801ED90C
         * Logging r3 here lists the panes that actually submit. Set-difference against the
         * [PageTree] pane addresses: what never appears is a pane whose draw is skipped - which
         * is the state the page's missing crest / body text would be in (5c.46 AB). */
        case 0x801F2A88:
        case 0x801F9E6C:
        case 0x801ED90C: {
            extern int g_tls_page_capture_frame;
            extern int g_runner_current_frame;
            static int s_pd_n = 0;
            if (g_tls_page_capture_frame >= 0 &&
                g_runner_current_frame >= g_tls_page_capture_frame &&
                g_runner_current_frame <= g_tls_page_capture_frame + 4 &&
                s_pd_n < 600) {
                s_pd_n++;
                printf("[PaneDraw] f=%d slot=0x%08X pane=0x%08X\n",
                       g_runner_current_frame, address, ctx->gpr[3]);
                fflush(stdout);
            }
            return 0;
        }

        /* The container's two draw entry points, from the LIVE container table
         * (vptr 0x80782A80: +0x0C = 0x801EF894, +0x10 = 0x801EF944). fn_801F4514 calls these
         * only when the task's own bit test on +0xFC passes, so a container that never appears
         * here is a task whose whole subtree is skipped - which is what the page's four
         * non-drawing panes (task 0x81359B80) need in order to be explained (5c.46 AB). */
        case 0x801EF894:
        case 0x801EF944: {
            extern int g_tls_page_capture_frame;
            extern int g_runner_current_frame;
            static int s_cd_n = 0;
            if (g_tls_page_capture_frame >= 0 &&
                g_runner_current_frame >= g_tls_page_capture_frame &&
                g_runner_current_frame <= g_tls_page_capture_frame + 4 &&
                s_cd_n < 200) {
                s_cd_n++;
                printf("[ContainerDraw] f=%d entry=0x%08X container=0x%08X n=%u arr=0x%08X\n",
                       g_runner_current_frame, address, ctx->gpr[3],
                       ctx->gpr[3] ? mem_read32(ctx, ctx->gpr[3] + 4) : 0,
                       ctx->gpr[3] ? mem_read32(ctx, ctx->gpr[3] + 0x0C) : 0);
                fflush(stdout);
            }
            return 0;
        }

        /* LayoutTask construction: fn_801F3FF8(owner, name, arg) allocates 0x110 bytes and calls
         * the real constructor fn_801F407C(obj, owner, name, arg), which sets the task vptr and
         * initialises the container at +0x48. Logging the new object with its owner and name is
         * how the page's hidden content layout (0x81359B80, [task+0xFC] bit 30 clear) can be
         * traced to whoever creates it - the one question 5c.46 AD leaves open. */
        case 0x801F3FF8:
        case 0x801F407C: {
            static int s_probe = -1;
            static u32 s_n = 0;
            if (s_probe < 0) s_probe = getenv("TLS_LAYOUT_CREATE_PROBE") ? 1 : 0;
            /* Log the CONSTRUCTOR only when TLS_LAYOUT_CTOR_ONLY is set: the factory is called far
             * too often to leave room for the one line that names a new object (r3 at the
             * constructor IS the object, so this is how 0x81359B80 gets a parent and a name). */
            static int s_ctor_only = -1;
            if (s_ctor_only < 0) s_ctor_only = getenv("TLS_LAYOUT_CTOR_ONLY") ? 1 : 0;
            /* TLS_LAYOUT_CREATE_FROM=<frame>: the factory is called hundreds of times before the
             * page exists, so a start frame is the only way to see the call that builds the page's
             * hidden layout (store watch: 0x81359B80 is constructed at frame 1656 by 0x801F40AC). */
            static int s_from = -1;
            if (s_from < 0) {
                const char* e = getenv("TLS_LAYOUT_CREATE_FROM");
                s_from = e ? atoi(e) : 0;
                if (s_from < 0) s_from = 0;
            }
            if (s_probe && s_n < 90 && !(s_ctor_only && address != 0x801F407Cu) &&
                g_runner_current_frame >= s_from) {
                extern int g_runner_current_frame;
                char s4[72], s5[72];
                for (int slot = 0; slot < 2; slot++) {
                    u32 p = (slot == 0) ? ctx->gpr[4] : ctx->gpr[5];
                    char* out = (slot == 0) ? s4 : s5;
                    int k = 0;
                    const char* sp = (p >= 0x80600000u && p < 0x80800000u)
                                         ? (const char*)resolve_guest_pointer(ctx, p) : NULL;
                    if (sp) {
                        for (; k < 71 && sp[k]; k++) {
                            unsigned char ch = (unsigned char)sp[k];
                            out[k] = (ch >= 32 && ch < 127) ? (char)ch : '.';
                        }
                    }
                    out[k] = 0;
                }
                s_n++;
                printf("[LayoutCreate] f=%d pc=0x%08X r3=0x%08X r4=0x%08X'%s' r5=0x%08X'%s' r6=0x%08X lr=0x%08X\n",
                       g_runner_current_frame, address, ctx->gpr[3], ctx->gpr[4], s4,
                       ctx->gpr[5], s5, ctx->gpr[6], ctx->lr);
                fflush(stdout);
            }
            return 0;
        }

        /* The call sites that receive a layout back from fn_801F3FF8 (taken from the
         * TLS_LAYOUT_CREATE_PROBE lr column: the page's script task creates four layouts at
         * frame 0 from lr 0x80363E10/38/54/70). A `bl` RETURN is a dispatch point, so r3 here
         * is the freshly built LayoutTask - which is how the four .d2a files can be matched to
         * the seven tasks that draw, and how the hidden node (0x81359B80, never seen at the
         * factory) can be placed in that tree. */
        case 0x80363E10:
        case 0x80363E38:
        case 0x80363E54:
        case 0x80363E70:
        /* The HUD/UI loader's single return site (lr 0x801F65DC): it builds a whole batch of
         * layouts in one frame, including the page's hidden content node (vptr store for
         * 0x81359B80 lands at frame 1656), so logging r3 here lists the objects in creation
         * order and lets that node be matched to the name the factory logged beside it. */
        case 0x801F65DC: {
            static int s_probe = -1;
            static u32 s_n = 0;
            if (s_probe < 0) s_probe = getenv("TLS_LAYOUT_CREATE_PROBE") ? 1 : 0;
            if (s_probe && s_n < 60) {
                extern int g_runner_current_frame;
                u32 obj = ctx->gpr[3];
                s_n++;
                printf("[LayoutRet] f=%d caller=0x%08X obj=0x%08X fc=0x%08X cnt48=%u\n",
                       g_runner_current_frame, address, obj,
                       obj ? mem_read32(ctx, obj + 0xFC) : 0,
                       obj ? mem_read32(ctx, obj + 0x4C) : 0);
                fflush(stdout);
            }
            return 0;
        }

        /* fn_805BB658's THIRD per-mode layout, at lr=0x805BBCF8 (5c.46 AP-L). One page-table row
         * builds TWO layouts at 0x805BB774 (the row's `col 2` d2a, e.g. tt001_10.d2a) and a THIRD
         * at 0x805BBCF4 whose name is assembled at runtime from the strings at 0x80763F39
         * (`database/tutorial/%s`) - that one is stored at class+(mode-1)*0x4C+0x4B4 and its
         * `fc` bit 3 is cleared immediately, the same "hidden until shown" idiom fn_803D164C uses.
         * The pane builder is fn_801FFA04(text,len,container,...), fed from this layout's stream
         * (+0xF0 -> +0xF4 file -> file+0x50 len / file+0x54 text), so printing the stream and its
         * text answers the only question left for the page's content: is the script there at
         * creation, and does a later activation ever build panes from it? */
        case 0x805BBCF8: {
            static int s_probe = -1;
            static u32 s_n = 0;
            if (s_probe < 0) s_probe = getenv("TLS_PAGE_CONTENT_PROBE") ? 1 : 0;
            if (s_probe && s_n < 12) {
                extern int g_runner_current_frame;
                u32 obj = ctx->gpr[3];
                u32 cls = ctx->gpr[15];
                u32 slot = ctx->gpr[26];
                u32 st = obj + 0xF0;
                u32 file = obj ? mem_read32(ctx, st + 4) : 0;
                u32 len = file ? mem_read32(ctx, file + 0x50) : 0;
                u32 text = file ? mem_read32(ctx, file + 0x54) : 0;
                s_n++;
                printf("[PageContent] f=%d obj=0x%08X fc=0x%08X f38=0x%08X cnt48=%u arr48=0x%08X "
                       "class=0x%08X slot=0x%08X\n",
                       g_runner_current_frame, obj,
                       obj ? mem_read32(ctx, obj + 0xFC) : 0,
                       obj ? mem_read32(ctx, obj + 0x38) : 0,
                       obj ? mem_read32(ctx, obj + 0x4C) : 0,
                       obj ? mem_read32(ctx, obj + 0x54) : 0, cls, slot);
                printf("[PageContent] f=%d stream=0x%08X vt=0x%08X file=0x%08X len=%u text=0x%08X "
                       "slot4b0=0x%08X slot4b4=0x%08X slot478=0x%08X fc478=0x%08X\n",
                       g_runner_current_frame, st, mem_read32(ctx, st), file, len, text,
                       slot ? mem_read32(ctx, slot + 0x4B0) : 0,
                       slot ? mem_read32(ctx, slot + 0x4B4) : 0,
                       slot ? mem_read32(ctx, slot + 0x478) : 0,
                       (slot && mem_read32(ctx, slot + 0x478))
                           ? mem_read32(ctx, mem_read32(ctx, slot + 0x478) + 0xFC) : 0);
                if (text && len && len < 0x8000) {
                    const char* p = (const char*)resolve_guest_pointer(ctx, text);
                    if (p) {
                        char buf[513];
                        u32 k;
                        for (k = 0; k < 512 && k < len; k++) {
                            unsigned char ch = (unsigned char)p[k];
                            buf[k] = (ch == '\n' || ch == '\r' || (ch >= 32 && ch < 127))
                                         ? (char)ch : '.';
                        }
                        buf[k] = 0;
                        printf("[PageContent] script: %s\n", buf);
                    }
                }
                fflush(stdout);
            }
            return 0;
        }

        /* The HUD updater fn_803D2A6C (5c.46 AP-L): this is the method that reads the manager's
         * +0x3EC layout every frame and sets panes by name (`base_point`, `damage`, `damageSub`
         * live at 0x80751742/0x80751821/0x80751828 in the ORIGINAL DOL). If it runs while the
         * tutorial page is up and its +0x3EC is the page's content node, the node is a live HUD
         * widget and the page's content is somewhere else; if it never runs there, +0x3EC is only
         * touched at creation and the page's content is the better reading. */
        case 0x803D2A6C: {
            static int s_hud = -1;
            static int s_hud_from = -1;
            static u32 s_hud_n = 0;
            extern int g_runner_current_frame;
            if (s_hud < 0) s_hud = getenv("TLS_HUDUPD_PROBE") ? 1 : 0;
            if (s_hud_from < 0) { const char* e = getenv("TLS_HUDUPD_FROM"); s_hud_from = e ? atoi(e) : 0; }
            if (s_hud && s_hud_n < 12 && g_runner_current_frame >= s_hud_from) {
                u32 mgr = ctx->gpr[3];
                u32 node = mgr ? mem_read32(ctx, mgr + 0x3EC) : 0;
                s_hud_n++;
                printf("[HudUpd] f=%d mgr=0x%08X node0x3ec=0x%08X(38=0x%08X fc=0x%08X cnt=%u)\n",
                       g_runner_current_frame, mgr, node,
                       node ? mem_read32(ctx, node + 0x38) : 0,
                       node ? mem_read32(ctx, node + 0xFC) : 0,
                       node ? mem_read32(ctx, node + 0x4C) : 0);
                fflush(stdout);
            }
            return 0;
        }

        /* The mode value that selects the page-start branch. fn_805BB658 does
         *   bl fn_8005B3CC ; bl fn_80684600 ; subi r0,r3,1 ; cmplwi r0,3 ; bgt tail
         * The mode check is at 0x805BB748 (the `subi` right after the bl) and that is the only
         * place a per-line mode is visible. 0x805BBC50/0x805BBC54 - the addresses earlier rounds
         * probed - sit 0x500 bytes further into the function, inside the row branch, and read one
         * COLUMN, not the mode; their "returned 0 (branch SKIPPED)" text was a mislabel, because
         * reaching them at all proves the branch was taken (5c.46 AP). */
        case 0x805BB748: {
            static int s_probe = -1;
            static u32 s_n = 0;
            if (s_probe < 0) s_probe = getenv("TLS_PAGE_MODE_PROBE") ? 1 : 0;
            if (s_probe) {
                extern int g_runner_current_frame;
                u32 obj = ctx->gpr[1] + 0xB4u;
                u32 cls = ctx->gpr[15];
                s32 mode = (s32)ctx->gpr[3];
                u32 limit = mem_read32(ctx, obj + 0x8);
                u32 cursor = mem_read32(ctx, obj + 0xC);
                const char* t = (const char*)resolve_guest_pointer(ctx, obj + 0x10);
                char clean[80]; int k = 0;
                if (t) for (; k < 79 && t[k]; k++) { unsigned char ch = (unsigned char)t[k];
                         clean[k] = (ch >= 32 && ch < 127) ? (char)ch : '.'; }
                clean[k] = 0;
                u32 slot = 0, layout = 0;
                if (mode >= 1 && mode <= 4 && cls) {
                    slot = cls + (u32)(mode - 1) * 0x4Cu;
                    layout = mem_read32(ctx, slot + 0x478);
                }
                if (s_n < 80) { s_n++;
                    printf("[PageLine] f=%d mode=%d token='%s' cursor=%u limit=%u slot48=0x%08X layout478=0x%08X\n",
                           g_runner_current_frame, mode, clean, cursor, limit, slot, layout);
                    fflush(stdout);
                }
            }
            return 0;
        }

        case 0x805BBC50:   /* a column read inside the row branch: r3 = the column's token */
        case 0x805BBC54: { /* the same column parsed by fn_80684600 */
            static int s_probe = -1;
            static s32 s_last = -12345;
            static u32 s_n = 0;
            if (s_probe < 0) s_probe = getenv("TLS_PAGE_MODE_PROBE") ? 1 : 0;
            if (s_probe) {
                extern int g_runner_current_frame;
                s32 mode = (s32)ctx->gpr[3];
                if (address == 0x805BBC50u) {
                    const char* s = ctx->gpr[3] ? (const char*)resolve_guest_pointer(ctx, ctx->gpr[3]) : NULL;
                    char clean[64]; int k = 0;
                    if (s) for (; k < 63 && s[k]; k++) { unsigned char ch = (unsigned char)s[k];
                             clean[k] = (ch >= 32 && ch < 127) ? (char)ch : '.'; }
                    clean[k] = 0;
                    /* The parse split: fn_8005B3CC(obj) takes a stack struct at r1+0xb4, reads the
                     * text at *(obj+4) with length *(obj+0xC) and copies the token between '"' pairs
                     * into obj+0x10. An empty token therefore means either the TEXT is empty (a load
                     * defect) or it has no quoted token (a parse/data defect). Print both. */
                    u32 obj = ctx->gpr[1] + 0xB4u;
                    u32 textp = mem_read32(ctx, obj + 4);
                    u32 limit = mem_read32(ctx, obj + 0x8);   /* fn_8005B3CC compares the cursor against this */
                    u32 textn = mem_read32(ctx, obj + 0xC);   /* the cursor itself */
                    char head[64]; int hk = 0;
                    const char* tb = (textp && limit) ? (const char*)resolve_guest_pointer(ctx, textp) : NULL;
                    if (tb) for (; hk < 63 && hk < (int)limit && tb[hk]; hk++) {
                        unsigned char ch = (unsigned char)tb[hk];
                        head[hk] = (ch >= 32 && ch < 127) ? (char)ch : '.';
                    }
                    head[hk] = 0;
                    /* The reader's buffer comes from the page stream at class+0x5a4: the virtual
                     * at [class+0x5a4] slot 0x8 is handed *(file+0x54) and *(file+0x50). Print the
                     * stream's file object and those two fields, so "cursor already at the end"
                     * can be told apart from "size == cursor at construction" without guessing
                     * (5c.46 AO/AP). */
                    u32 stream = ctx->gpr[15] ? ctx->gpr[15] + 0x5A4u : 0;
                    u32 fileobj = stream ? mem_read32(ctx, stream + 4) : 0;
                    if (s_n < 20) { s_n++;
                        printf("[PageRow] f=%d column token at 0x%08X = '%s'\n",
                               g_runner_current_frame, ctx->gpr[3], s ? clean : "(null)");
                        printf("[PageRow] f=%d   reader text=0x%08X limit=%u cursor=%u head='%s'\n",
                               g_runner_current_frame, textp, limit, textn, tb ? head : "(unmapped)");
                        if (fileobj) {
                            printf("[PageRow] f=%d   stream=0x%08X file=0x%08X state=%u size48=%u f50=%u f54=0x%08X\n",
                                   g_runner_current_frame, stream, fileobj,
                                   mem_read8(ctx, fileobj + 4), mem_read32(ctx, fileobj + 0x48),
                                   mem_read32(ctx, fileobj + 0x50), mem_read32(ctx, fileobj + 0x54));
                        } else {
                            printf("[PageRow] f=%d   stream=0x%08X file=0 (no page stream)\n",
                                   g_runner_current_frame, stream);
                        }
                        /* The whole reader buffer, so the page table's own format (header row,
                         * quoted page names, CR/LF) is recorded instead of guessed from 63 bytes. */
                        if (tb) {
                            u32 total = limit < 360u ? limit : 360u;
                            u32 off = 0;
                            while (off < total) {
                                char row[128]; int rn = 0;
                                u32 off0 = off;
                                u32 end = off + 110u; if (end > total) end = total;
                                for (; off < end; off++) {
                                    unsigned char ch = (unsigned char)tb[off];
                                    row[rn++] = (ch == 0x0D) ? '|' : (ch == 0x0A) ? '/' :
                                                ((ch >= 32 && ch < 127) ? (char)ch : '.');
                                }
                                row[rn] = 0;
                                printf("[PageRow] f=%d   buf[%3u] '%s'\n",
                                       g_runner_current_frame, off0, row);
                            }
                        }
                        fflush(stdout); }
                } else if (mode != s_last) {
                    s_last = mode;
                    printf("[PageRow] f=%d column atoi = %d\n", g_runner_current_frame, mode);
                    fflush(stdout);
                }
            }
            return 0;
        }

        /* The page start's per-row layout creation: 0x805BB764 `bl fn_8005B3CC` returns the
         * "d2a" column in r3, so the block at 0x805BB768 (`mr r4,r3`) is the last moment the
         * name is still a plain pointer. Printing it here, together with the row slot and the
         * layout the factory returned at 0x805BB778, is the whole per-mode build in one line. */
        case 0x805BB768:
        case 0x805BB778:
        case 0x805BB780: {
            static int s_probe = -1;
            static u32 s_n = 0;
            if (s_probe < 0) s_probe = getenv("TLS_PAGE_ROW_PROBE") ? 1 : 0;
            if (s_probe) {
                extern int g_runner_current_frame;
                u32 obj = ctx->gpr[1] + 0xB4u;
                u32 tok = mem_read32(ctx, obj + 0x10);
                u32 slot = ctx->gpr[26];
                if (s_n < 40) { s_n++;
                    if (address == 0x805BB768u) {
                        printf("[PageRowBuild] f=%d name ptr=0x%08X bytes=%08X '%s' slot=0x%08X modeIdx=%d\n",
                               g_runner_current_frame, ctx->gpr[3],
                               mem_read32(ctx, ctx->gpr[3]), (const char*)resolve_guest_pointer(ctx, ctx->gpr[3]),
                               slot, slot && ctx->gpr[15] ? (s32)((slot - ctx->gpr[15]) / 0x4C) + 1 : 0);
                    } else {
                        /* 0x805BB778 runs before the `stw r3,0x478(r26)` that follows it, so the
                         * slot still reads 0 there; 0x805BB780 runs after the store and is the one
                         * that sees the real layout. Use gpr[3] (the factory's return) for the
                         * fields either way. */
                        u32 layout = ctx->gpr[3];
                        u32 cnt = layout ? mem_read32(ctx, layout + 0x4C) : 0;
                        u32 arr = layout ? mem_read32(ctx, layout + 0x54) : 0;
                        printf("[PageRowBuild] f=%d pc=0x%08X layout=0x%08X slot478=0x%08X fc=0x%08X vptr=0x%08X cnt48=%u arr48=0x%08X\n",
                               g_runner_current_frame, address, layout,
                               slot ? mem_read32(ctx, slot + 0x478) : 0,
                               layout ? mem_read32(ctx, layout + 0xFC) : 0,
                               layout ? mem_read32(ctx, layout) : 0, cnt, arr);
                        /* layout+0x48 is a container object: +4 is its count and +0xC its array
                         * (the same shape the draw probe reads). Scan it for the content node. */
                        if (layout) {
                            u32 found = 0, i = 0;
                            for (; i < cnt && i < 24u; i++) {
                                if (mem_read32(ctx, arr + i * 4u) == 0x81359B80u) { found = 1; break; }
                            }
                            printf("[PageRowBuild] f=%d   children cnt=%u arr=0x%08X content0x81359B80=%s\n",
                                   g_runner_current_frame, cnt, arr, found ? "YES" : "no");
                        }
                    }
                    fflush(stdout);
                }
            }
            /* 5c.46 AP-L: the page start's mode-row build is NOT the show point - measured, the
             * per-mode hide pass (.L_805BA2D4) runs 10 frames later (f=3658) and would undo it.
             * The show belongs to the page ENTER verb fn_805BA358 (f=3659), which is where the
             * page says "these layouts are now on screen". */
            return 0;
        }

        /* The instruction right after the page reader's virtual "attach text" call
         * (0x805BB6E8 bctrl -> 0x805BB6EC). Two things are open here: what the object looks
         * like the instant the call returns, and whether the vtable slot the call went through
         * holds a real function at all. Both are printed once, with the caller's ctr, so a
         * "the reader was handed an already-positioned cursor" finding cannot be an artifact of
         * something else scribbling on the stack object later (5c.46 AP). */
        case 0x805BB6EC: {
            static int s_probe = -1;
            if (s_probe < 0) s_probe = getenv("TLS_PAGE_VT_PROBE") ? 1 : 0;
            if (s_probe) {
                extern int g_runner_current_frame;
                u32 obj = ctx->gpr[1] + 0xB4u;
                u32 c = ctx->ctr;
                printf("[PageVt] f=%d target=0x%08X  obj+4=0x%08X obj+8=%u obj+0xC=%u\n",
                       g_runner_current_frame, c,
                       mem_read32(ctx, obj + 4), mem_read32(ctx, obj + 8), mem_read32(ctx, obj + 0xC));
                printf("[PageVt] f=%d vtable 0x807772D0[0..7] = %08X %08X %08X %08X %08X %08X %08X %08X\n",
                       g_runner_current_frame,
                       mem_read32(ctx, 0x807772D0), mem_read32(ctx, 0x807772D4),
                       mem_read32(ctx, 0x807772D8), mem_read32(ctx, 0x807772DC),
                       mem_read32(ctx, 0x807772E0), mem_read32(ctx, 0x807772E4),
                       mem_read32(ctx, 0x807772E8), mem_read32(ctx, 0x807772EC));
                printf("[PageVt] f=%d vtable 0x807772B0[0..7] = %08X %08X %08X %08X %08X %08X %08X %08X\n",
                       g_runner_current_frame,
                       mem_read32(ctx, 0x807772B0), mem_read32(ctx, 0x807772B4),
                       mem_read32(ctx, 0x807772B8), mem_read32(ctx, 0x807772BC),
                       mem_read32(ctx, 0x807772C0), mem_read32(ctx, 0x807772C4),
                       mem_read32(ctx, 0x807772C8), mem_read32(ctx, 0x807772CC));
                fflush(stdout);
            }
            return 0;
        }

        /* The tutorial page's per-frame update (the only caller of the page start fn_805BB658).
         * Tracing the page stream's file object here, printing only on change, answers "when was
         * the page table consumed" WITHOUT the global store watch, whose per-store hook shifts
         * the title hand-over frame and so invalidates the run (5c.46 AO/AP: both store-watch
         * runs handed over at 1042 and 727 instead of 1647). */
        case 0x805BA16C: {
            static int s_probe = -1;
            static u32 s_file = 0xFFFFFFFFu, s_c48 = 0, s_c50 = 0, s_c54 = 0, s_req = 0xFFFFFFFFu;
            if (s_probe < 0) s_probe = getenv("TLS_PAGE_STREAM_PROBE") ? 1 : 0;
            if (s_probe) {
                extern int g_runner_current_frame;
                u32 cls = ctx->gpr[3];
                u32 stream = cls ? cls + 0x5A4u : 0;
                u32 file = stream ? mem_read32(ctx, stream + 4) : 0;
                u32 req = cls ? mem_read32(ctx, cls + 0x5ACu) : 0;
                u32 c48 = file ? mem_read32(ctx, file + 0x48) : 0;
                u32 c50 = file ? mem_read32(ctx, file + 0x50) : 0;
                u32 c54 = file ? mem_read32(ctx, file + 0x54) : 0;
                u32 state = file ? mem_read8(ctx, file + 4) : 0;
                if (file != s_file || c48 != s_c48 || c50 != s_c50 || c54 != s_c54 || req != s_req) {
                    s_file = file; s_c48 = c48; s_c50 = c50; s_c54 = c54; s_req = req;
                    printf("[PageStream] f=%d cls=0x%08X req=%u file=0x%08X state=%u size48=%u f50=%u f54=0x%08X\n",
                           g_runner_current_frame, cls, req, file, state, c48, c50, c54);
                    fflush(stdout);
                }
            }
            return 0;
        }

        /* .L_805BA2D4, inside fn_805BA16C (the page's own update): this is the per-mode hide pass
         * that deactivates each mode layout (fn_800D246C(layout,0)), sets [layout+0x38] |= 4 and
         * clears [layout+0xFC] bit 3. That is the page saying "nothing of mine is showing", so the
         * content node's draw bit that the page start set is taken back down here (5c.46 AP-L). */
        case 0x805BA2D4: {
            tls_page_content_set(ctx, 0, "page hide pass");
            return 0;
        }

        /* fn_801F42A8 is the layout SHOW call (its 0x801F4334 slot ORs bit 30 of [layout+0xFC];
         * the write history of the page's content node shows it being shown at frame 1696 and
         * hidden again at 2020 by the camp UI, then never shown). Logging every call with its
         * layout and caller turns "what should show 0x81359B80" into "which caller never fires"
         * - the smallest form of the question (5c.46 AG). */
        case 0x801F42A8: {
            static int s_probe = -1;
            static u32 s_n = 0;
            if (s_probe < 0) s_probe = getenv("TLS_LAYOUT_SHOW_PROBE") ? 1 : 0;
            /* TLS_LAYOUT_SHOW_FROM=<frame>: registration-time shows flood the log in the first
             * 200 frames, so a start frame is the only way to see the per-page shows that happen
             * after the camp UI hides the content node (frame 2020). */
            static int s_from = -1;
            if (s_from < 0) {
                const char* e = getenv("TLS_LAYOUT_SHOW_FROM");
                s_from = e ? atoi(e) : 0;
                if (s_from < 0) s_from = 0;
            }
            if (s_probe && s_n < 400 && g_runner_current_frame >= s_from) {
                extern int g_runner_current_frame;
                u32 lay = ctx->gpr[3];
                s_n++;
                printf("[LayoutShow] f=%d layout=0x%08X r4=%u fc=0x%08X lr=0x%08X\n",
                       g_runner_current_frame, lay, ctx->gpr[4],
                       lay ? mem_read32(ctx, lay + 0xFC) : 0, ctx->lr);
                fflush(stdout);
            }
            return 0;
        }

        // fn_8005E3E4 (2D UI quad submission)
        case 0x8005E3E4:
        case 0x8005E40C: {
            u32 eeb0 = mem_read32(ctx, 0x8087EEB0);
            static int s_e3e4_cnt = 0;
            if (++s_e3e4_cnt <= 15) {
                float m[3][4];
                for (int r = 0; r < 3; r++) {
                    for (int c = 0; c < 4; c++) {
                        u32 val = mem_read32(ctx, eeb0 + 0xA4 + (r * 4 + c) * 4);
                        memcpy(&m[r][c], &val, 4);
                    }
                }
                double df1 = ctx->fpr[1];
                double df2 = ctx->fpr[2];
                double df3 = ctx->fpr[3];
                double df4 = ctx->fpr[4];
                printf("[TLS 8005E40C #%d] f1=%.2f f2=%.2f f3=%.2f f4=%.2f (lr=0x%08X)\n",
                       s_e3e4_cnt, df1, df2, df3, df4, ctx->lr);
                printf("   mtx0: [%.4f, %.4f, %.4f, %.4f]\n", m[0][0], m[0][1], m[0][2], m[0][3]);
                printf("   mtx1: [%.4f, %.4f, %.4f, %.4f]\n", m[1][0], m[1][1], m[1][2], m[1][3]);
                printf("   mtx2: [%.4f, %.4f, %.4f, %.4f]\n", m[2][0], m[2][1], m[2][2], m[2][3]);
                fflush(stdout);
            }
            return 0; // Run original code
        }

        // fn_800656C8 (UI Quad Draw to WGPIPE)
        case 0x800656C8: {
            static int s_656c8_cnt = 0;
            u32 pkt = ctx->gpr[3];
            if (++s_656c8_cnt <= 10) {
                u32 f4 = pkt ? mem_read32(ctx, pkt + 4) : 0;
                u32 vbuf = pkt ? mem_read32(ctx, pkt + 8) : 0;
                printf("[TLS 800656C8 #%d] pkt=0x%08X f4=%u vbuf=0x%08X (lr=0x%08X)\n",
                       s_656c8_cnt, pkt, f4, vbuf, ctx->lr);
                if (vbuf) {
                    for (int vi = 0; vi < 4; vi++) {
                        u32 ux = mem_read32(ctx, vbuf + vi * 24);
                        u32 uy = mem_read32(ctx, vbuf + vi * 24 + 4);
                        u32 ucol = mem_read32(ctx, vbuf + vi * 24 + 12);
                        u32 uu = mem_read32(ctx, vbuf + vi * 24 + 16);
                        u32 uv = mem_read32(ctx, vbuf + vi * 24 + 20);
                        float fx, fy, fu, fv;
                        memcpy(&fx, &ux, 4); memcpy(&fy, &uy, 4);
                        memcpy(&fu, &uu, 4); memcpy(&fv, &uv, 4);
                        printf("     v[%d]: pos=(%.3f, %.3f) col=0x%08X uv=(%.3f, %.3f)\n",
                               vi, fx, fy, ucol, fu, fv);
                    }
                }
                fflush(stdout);
            }
            return 0;
        }

        // fn_801ED928 (pane transform / world position calculation)
        case 0x801ED928: {
            u32 pane = ctx->gpr[3];
            static int s_ed9_cnt = 0;
            if (++s_ed9_cnt <= 15) {
                float p48, p4c, p50, pdc, pe0, pe4, pe8, pf8;
                u32 u48 = pane ? mem_read32(ctx, pane + 0x48) : 0;
                u32 u4c = pane ? mem_read32(ctx, pane + 0x4C) : 0;
                u32 u50 = pane ? mem_read32(ctx, pane + 0x50) : 0;
                u32 udc = pane ? mem_read32(ctx, pane + 0xDC) : 0;
                u32 ue0 = pane ? mem_read32(ctx, pane + 0xE0) : 0;
                u32 ue4 = pane ? mem_read32(ctx, pane + 0xE4) : 0;
                u32 ue8 = pane ? mem_read32(ctx, pane + 0xE8) : 0;
                u32 uf8 = pane ? mem_read32(ctx, pane + 0xF8) : 0;
                u32 parent = pane ? mem_read32(ctx, pane + 0x100) : 0;
                memcpy(&p48, &u48, 4); memcpy(&p4c, &u4c, 4); memcpy(&p50, &u50, 4);
                memcpy(&pdc, &udc, 4); memcpy(&pe0, &ue0, 4); memcpy(&pe4, &ue4, 4);
                memcpy(&pe8, &ue8, 4); memcpy(&pf8, &uf8, 4);
                printf("[TLS 801ED928 #%d] pane=0x%08X pos=(%.2f, %.2f, %.2f) sz=(%.2f, %.2f) parent=0x%08X (lr=0x%08X)\n",
                       s_ed9_cnt, pane, p48, p4c, p50, pe4, pe8, parent, ctx->lr);
                if (s_ed9_cnt <= 2) {
                    printf("[Pane 0x%08X Dump]:\n", pane);
                    for (int i = 0; i < 0x120; i += 16) {
                        printf("  +%02X: %08X %08X %08X %08X\n", i,
                               mem_read32(ctx, pane + i), mem_read32(ctx, pane + i + 4),
                               mem_read32(ctx, pane + i + 8), mem_read32(ctx, pane + i + 12));
                    }
                }
                fflush(stdout);
            }
            return 0; // Run naturally
        }

        // fn_801EDC78 (pane animation visibility check)
        case 0x801EDC78: {
            return 0; // Run naturally
        }

        // fn_800D59B8 (resource pending check)
        case 0x800D59B8: {
            if (ctx->lr >= 0x801F9F00 && ctx->lr <= 0x801FA020) {
                ctx->gpr[3] = 0; // Resource ready!
                ctx->pc = ctx->lr;
                return 1;
            }
            return 0; // Run naturally
        }

        // fn_801F9FB0 (pane draw callback)
        case 0x801F9FB0: {
            return 0; // Run naturally
        }

        // GXSetCopyClear (0x80615190)
        case 0x80615190: {
            u32 color_ptr = ctx->gpr[3];
            u32 z = ctx->gpr[4];
            u8 r = color_ptr ? mem_read8(ctx, color_ptr + 0) : 0;
            u8 g = color_ptr ? mem_read8(ctx, color_ptr + 1) : 0;
            u8 b = color_ptr ? mem_read8(ctx, color_ptr + 2) : 0;
            u8 a = color_ptr ? mem_read8(ctx, color_ptr + 3) : 0;
            if (ctx->lr == 0x800719AC || ctx->lr == 0x806119DC || r != 0 || g != 0 || b != 0) {
                gx_pipeline_set_clear_color(r / 255.0f, g / 255.0f, b / 255.0f, a / 255.0f);
            }
            return 0; // Run original code
        }

        // GXSetTexCopyDst (0x80614D30) -- the guest's OWN declaration of an EFB-copy
        // destination. The writer derives the destination size from BP 0x4D (the pitch
        // this function computes into 0x238(GXData)), so the two can only be compared if
        // the declaration is printed next to the copy. This is the independent half of
        // the 320x224-written / 80x56-sampled mismatch measured at frame 4000
        // (handover 5c.37 D): if this prints 320x224 as well, the writer is faithful to
        // the guest and the 80x56 sampler is a different resource at the same address;
        // if it prints 80x56, the pitch decode is what is wrong.
        case 0x80614D30: {
            extern int g_runner_current_frame;
            static int s_from = -1, s_lines = 0;
            if (s_from < 0) {
                const char* f = getenv("TLS_COPYDST_PROBE");
                s_from = f ? atoi(f) : -1;
            }
            if (s_from >= 0 && g_runner_current_frame >= s_from && s_lines < 200) {
                u32 w = ctx->gpr[3] & 0xFFFFu, h = ctx->gpr[4] & 0xFFFFu;
                u32 fmt = ctx->gpr[5] & 0xFFu, mip = ctx->gpr[6] & 0xFFu;
                s_lines++;
                printf("[TLS CopyDst] frame=%d declared=%ux%u fmt=0x%02X (id=%u half=%u) mip=%u lr=0x%08X\n",
                       g_runner_current_frame, w, h, fmt, fmt & 0x0Fu, (fmt >> 5) & 1u, mip, ctx->lr);
                fflush(stdout);
            }
            return 0; // Run the guest's own GXSetTexCopyDst
        }

        // NewTitleTask::Draw (0x805363F8)
        case 0x805363F8: {
            static int s_title_draws = 0;
            u32 task = ctx->gpr[3];
            u32 mode = task ? mem_read32(ctx, task + 0x2AC) : 0;
            u32 eeb0 = mem_read32(ctx, 0x8087EEB0);
            u32 l48 = task ? mem_read32(ctx, task + 0x48) : 0;
            u32 l4c = task ? mem_read32(ctx, task + 0x4C) : 0;
            u32 l50 = task ? mem_read32(ctx, task + 0x50) : 0;
            u32 l5c = task ? mem_read32(ctx, task + 0x5C) : 0;
            u32 l60 = task ? mem_read32(ctx, task + 0x60) : 0;
            if (tls_draw_trace_enabled() && (++s_title_draws <= 5 || s_title_draws % 30 == 0)) {
                printf("[TLS NewTitleTask] Draw #%d task=0x%08X mode=%u eeb0=0x%08X (c18=0x%08X, s1c=0x%08X, p14=0x%08X)\n",
                       s_title_draws, task, mode, eeb0,
                       task ? mem_read32(ctx, task + 0x18) : 0,
                       task ? mem_read32(ctx, task + 0x1C) : 0,
                       task ? mem_read32(ctx, task + 0x14) : 0);
                if (task) {
                    u32 cur_child = mem_read32(ctx, task + 0x18);
                    int c_idx = 0;
                    while (cur_child && c_idx < 10) {
                        u32 c_vt = mem_read32(ctx, cur_child);
                        u32 c_f38 = mem_read32(ctx, cur_child + 0x38);
                        u32 c_m14 = c_vt ? mem_read32(ctx, c_vt + 0x14) : 0;
                        u32 cu100 = mem_read32(ctx, cur_child + 0x100);
                        u32 cu104 = mem_read32(ctx, cur_child + 0x104);
                        u32 cua0 = mem_read32(ctx, cur_child + 0xA0);
                        float cf100, cf104, cfa0;
                        memcpy(&cf100, &cu100, 4); memcpy(&cf104, &cu104, 4); memcpy(&cfa0, &cua0, 4);
                        printf("     child[%d]=0x%08X (vt=0x%08X f38=0x%08X f100=%.2f f104=%.2f fa0=%.2f)\n",
                               c_idx, cur_child, c_vt, c_f38, cf100, cf104, cfa0);
                        cur_child = mem_read32(ctx, cur_child + 0x1C);
                        c_idx++;
                    }
                }
                if (l5c) {
                    u32 u100 = mem_read32(ctx, l5c + 0x100);
                    u32 u104 = mem_read32(ctx, l5c + 0x104);
                    u32 ua0 = mem_read32(ctx, l5c + 0xa0);
                    float f100, f104, fa0;
                    memcpy(&f100, &u100, 4); memcpy(&f104, &u104, 4); memcpy(&fa0, &ua0, 4);
                    printf("   l5c (0x%08X): vt=0x%08X f38=0x%08X fc=0x%08X f100=%.2f f104=%.2f fa0=%.2f\n",
                           l5c, mem_read32(ctx, l5c), mem_read32(ctx, l5c + 0x38), mem_read32(ctx, l5c + 0xFC), f100, f104, fa0);
                }
                if (l60) {
                    u32 u100 = mem_read32(ctx, l60 + 0x100);
                    u32 u104 = mem_read32(ctx, l60 + 0x104);
                    u32 ua0 = mem_read32(ctx, l60 + 0xa0);
                    float f100, f104, fa0;
                    memcpy(&f100, &u100, 4); memcpy(&f104, &u104, 4); memcpy(&fa0, &ua0, 4);
                    printf("   l60 (0x%08X): vt=0x%08X f38=0x%08X fc=0x%08X f100=%.2f f104=%.2f fa0=%.2f\n",
                           l60, mem_read32(ctx, l60), mem_read32(ctx, l60 + 0x38), mem_read32(ctx, l60 + 0xFC), f100, f104, fa0);
                }
                fflush(stdout);
            }
            return 0;
        }

        // Sub-checks called by NewTitleTask::IsReady and GameTask::Init
        case 0x800D3FA4: {
            u32 task = ctx->gpr[3];
            u32 child = task ? mem_read32(ctx, task + 0x18) : 0;
            static int s_d3fa4_calls = 0;
            if (tls_draw_trace_enabled() && (++s_d3fa4_calls <= 20 || s_d3fa4_calls % 60 == 0)) {
                printf("[TLS 800D3FA4] #%d task=0x%08X child=0x%08X lr=0x%08X\n",
                       s_d3fa4_calls, task, child, ctx->lr);
                if (child) {
                    u32 f38 = mem_read32(ctx, child + 0x38);
                    u32 c18 = mem_read32(ctx, child + 0x18);
                    u32 c1c = mem_read32(ctx, child + 0x1C);
                    printf("     child: f38=0x%X (bit30=%u) c18=0x%08X c1c=0x%08X\n",
                           f38, (f38 >> 1) & 1, c18, c1c);
                    if (c1c) {
                        u32 sib_f38 = mem_read32(ctx, c1c + 0x38);
                        u32 sib_18 = mem_read32(ctx, c1c + 0x18);
                        u32 sib_1c = mem_read32(ctx, c1c + 0x1C);
                        u32 vt = mem_read32(ctx, c1c);
                        u32 fn_init = vt ? mem_read32(ctx, vt + 8) : 0;
                        u32 fn_ready = vt ? mem_read32(ctx, vt + 12) : 0;
                        u32 fn_update = vt ? mem_read32(ctx, vt + 16) : 0;
                        printf("     sibling1 (0x%08X): f38=0x%X (bit30=%u) 18=0x%08X 1c=0x%08X vt=0x%08X (init=0x%08X rdy=0x%08X upd=0x%08X)\n",
                               c1c, sib_f38, (sib_f38 >> 1) & 1, sib_18, sib_1c, vt, fn_init, fn_ready, fn_update);
                    }
                }
                fflush(stdout);
            }
            return 0; // Run original code
        }
        case 0x800C310C: {
            static int s_c310c_calls = 0;
            if (tls_draw_trace_enabled() && (++s_c310c_calls <= 10 || s_c310c_calls % 60 == 0)) {
                u32 mgr = mem_read32(ctx, 0x8087EE90);
                u32 p4 = mgr ? mem_read32(ctx, mgr + 4) : 0;
                u32 cnt394 = mgr ? mem_read32(ctx, mgr + 0x394) : 0;
                u32 cnt3a0 = mgr ? mem_read32(ctx, mgr + 0x3A0) : 0;
                u32 cnt400 = mgr ? mem_read32(ctx, mgr + 0x400) : 0;
                u32 cnt404 = mgr ? mem_read32(ctx, mgr + 0x404) : 0;
                printf("[TLS 800C310C] #%d mgr=0x%08X (p4=0x%08X) cnt394=%u cnt3a0=%u 400=%u 404=%u lr=0x%08X\n",
                       s_c310c_calls, mgr, p4, cnt394, cnt3a0, cnt400, cnt404, ctx->lr);
                fflush(stdout);
            }
            return 0; // Run original code naturally
        }


        // 0x8049DEE4 (Title Map Task / titlle_white.map IsReady)
        case 0x8049DEE4: {
            u32 task = ctx->gpr[3];
            u32 req = task ? mem_read32(ctx, task + 0x58 + 4) : 0;
            u8 st = req ? mem_read8(ctx, req + 4) : 0;
            static int s_49dee4_calls = 0;
            if (tls_draw_trace_enabled() && (++s_49dee4_calls <= 20 || s_49dee4_calls % 60 == 0)) {
                printf("[TLS 8049DEE4] #%d task=0x%08X req=0x%08X status=%u (lr=0x%08X)\n",
                       s_49dee4_calls, task, req, st, ctx->lr);
                fflush(stdout);
            }
            return 0; // Run original code
        }

        // DVD stream read completion callback (0x8046BBE0)
        case 0x8046BBE0: {
            u32 fi_addr = ctx->gpr[4];
            u32 target = fi_addr ? mem_read32(ctx, fi_addr + 0x2C) : 0;
            if (target != 0x807C6F60 && target != 0x800000E4 && resolve_guest_pointer(ctx, target)) {
                mem_write32(ctx, target, 2);
            }
            ctx->pc = ctx->lr;
            return 1;
        }


        // fn_800EF3EC (camera mode resource loading & initialization)
        case 0x800EF3EC: {
            printf("[TLS Camera] fn_800EF3EC called! cam_obj=0x%08X (lr=0x%08X)\n", ctx->gpr[3], ctx->lr);
            fflush(stdout);
            return 0; // Run original code
        }

        // GXDrawDone (0x806140C0)
        case 0x806140C0: {
            mem_write8(ctx, 0x808800A8, 1);
            /* The guest uses this as "the GX FIFO has been consumed": fn_800D7278 issues an
             * EFB copy, calls GXDrawDone, then reads the copied image (handover 5c.46
             * AP-W8). Servicing the queued copies here is what makes that read valid. */
            { extern void gfx_flush_gx_now(void); gfx_flush_gx_now(); }
            static int s_drawdone_cnt = 0;
            if (tls_draw_trace_enabled() && (++s_drawdone_cnt <= 20 || s_drawdone_cnt % 60 == 0)) {
                printf("[TLS GX] GXDrawDone #%d completed (LR=0x%08X)\n", s_drawdone_cnt, ctx->lr);
                fflush(stdout);
            }
            ctx->pc = ctx->lr;
            return 1;
        }

        // fn_80536CAC (Title BGM & layout startup)
        case 0x80536CAC: {
            printf("[TLS TitleSub] 80536CAC called! task=0x%08X (lr=0x%08X)\n", ctx->gpr[3], ctx->lr);
            fflush(stdout);
            return 0; // Run original code
        }

        // fn_8004AE84 (sound stream open)
        case 0x8004AE84: {
            printf("[TLS TitleSub] 8004AE84 called! task=0x%08X (lr=0x%08X)\n", ctx->gpr[3], ctx->lr);
            fflush(stdout);
            return 0; // Run original code
        }

        // fn_8049D68C (create child task)
        case 0x8049D68C: {
            printf("[TLS TitleSub] 8049D68C called! parent=0x%08X desc=0x%08X (lr=0x%08X)\n", ctx->gpr[3], ctx->gpr[4], ctx->lr);
            fflush(stdout);
            return 0; // Run original code
        }

        // fn_8004B0E4 (sound stream ready check)
        case 0x8004B0E4: {
            if (ctx->lr >= 0x80532000 && ctx->lr <= 0x80537000) {
                printf("[TLS TitleSub] 8004B0E4 arg3=0x%08X (lr=0x%08X) -> ret 0 (ready)\n", ctx->gpr[3], ctx->lr);
                fflush(stdout);
            }
            ctx->gpr[3] = 0; // ready
            ctx->pc = ctx->lr;
            return 1;
        }

        // 0x8004424C (Strap/Scene task state check)
        case 0x8004424C: {
            u32 obj = ctx->gpr[3];
            u32 state = obj ? mem_read32(ctx, obj + 644) : 0;
            static int s_calls_4424c = 0;
            if (tls_draw_trace_enabled() && (++s_calls_4424c <= 10 || s_calls_4424c % 60 == 0)) {
                printf("[TLS 4424C] #%d obj=0x%08X state=+644=%u (lr=0x%08X)\n", s_calls_4424c, obj, state, ctx->lr);
                fflush(stdout);
            }
            return 0; // Run original code
        }

        // atn::LH_Scene notify ready (0x804780AC)
        case 0x804780AC: {
            static int s_scene_ready_calls = 0;
            if (tls_draw_trace_enabled() && (++s_scene_ready_calls <= 20 || s_scene_ready_calls % 60 == 0)) {
                u32 req = ctx->gpr[3];
                u8 st = req ? mem_read8(ctx, req + 4) : 0;
                printf("[TLS SceneReady] #%d req=0x%08X status=%u (lr=0x%08X)\n",
                       s_scene_ready_calls, req, st, ctx->lr);
                fflush(stdout);
            }
            return 0; // Run original code
        }

        // GXCopyDisp(void* dest, u8 clear)
        case 0x80615420: {
            u32 dest = ctx->gpr[3];
            u8 clear = (u8)ctx->gpr[4];
            uint32_t prim_cnt = gx_pipeline_get_primitive_count();
            uint32_t vtx_cnt = gx_pipeline_get_vertex_count();
            if (prim_cnt > 0 || vtx_cnt > 0) {
                static uint32_t s_last_gx_log = 0;
                static uint32_t s_gx_fctr = 0;
                if (++s_gx_fctr - s_last_gx_log >= 60) {
                    printf("[TLS GXCopyDisp] Frame %u: Captured %u primitives, %u vertices\n", s_gx_fctr, prim_cnt, vtx_cnt);
                    s_last_gx_log = s_gx_fctr;
                }
            }
            return 0; // Run original GXCopyDisp code naturally
        }

        default:
            return 0; // Fall through to recompiled PowerPC code
    }
}
