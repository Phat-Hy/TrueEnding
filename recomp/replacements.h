#ifndef RECOMP_REPLACEMENTS_H
#define RECOMP_REPLACEMENTS_H

#include "cpu/cpu.h"

#ifdef __cplusplus
extern "C" {
#endif

// Dispatches a function call if a native replacement exists.
// Returns 1 if handled, 0 if original recompiled code should run.
int dolrecomp_dispatch_replacement(CPUState* ctx, u32 address);

// Fallback handler for privileged or cache instructions (dcbf, icbi, etc.)
void handle_instruction_fallback(CPUState* cpu, u32 raw, u32 cia);

// Hardware MMIO handlers for Hollywood / Broadway registers
u64 mmio_external_read(CPUState* cpu, u32 ea, u8 size);
void mmio_external_write(CPUState* cpu, u32 ea, u64 value, u8 size);

// Resolves a guest PowerPC address to a host pointer.
void* resolve_guest_pointer(CPUState* ctx, u32 addr);

// Stages one queued DVD completion callback for execution (used by the runner
// frame loop, mirroring the retail DVD thread). Returns 1 when one was staged.
int tls_dvd_service_callback(CPUState* ctx);

// Best-effort guest message-queue wakeup helper for runner-side blocking paths.
int tls_service_message_queues(CPUState* ctx);

// Poll host input and update guest controller state for WPAD/KPAD stubs.
int tls_service_controller_input(CPUState* ctx);

// Current guest system time (OSGetTime + the OS system-time bias at 0x800030D8),
// used by the runner to know when an OSAlarm is due.
u64 tls_guest_system_time(CPUState* ctx);

// Stall diagnostics: ring buffer of the most recent non-idle dispatched functions.
void tls_record_recent_call(u32 address);
void tls_dump_recent_calls(void);
int tls_is_idle_address(u32 address);

extern u32 g_count_c1c8;
extern u32 g_count_bbf0;

#ifdef __cplusplus
}
#endif

#endif // RECOMP_REPLACEMENTS_H
