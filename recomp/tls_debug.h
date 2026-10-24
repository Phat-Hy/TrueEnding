#ifndef TLS_DEBUG_H
#define TLS_DEBUG_H

#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CPUState CPUState;

// Initialize telemetry subsystem
void tls_debug_init(void);

// Call once per frame at end of frame execution
void tls_debug_frame(CPUState* cpu, int frame, uint32_t gx_vtx_count, uint32_t batch_count);

// Query human-readable name of class for a given vtable address
const char* tls_debug_get_class_name(uint32_t vtable_addr);

// Query active sequence name
const char* tls_debug_get_sequence_name(CPUState* cpu);

// Dump full engine diagnostics immediately (used on stall, crash, or key trigger)
void tls_debug_dump_full(CPUState* cpu, int frame, const char* reason);

#ifdef __cplusplus
}
#endif

#endif // TLS_DEBUG_H
