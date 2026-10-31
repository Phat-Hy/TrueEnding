/* Aurora LIVE host side (handover 5c.47 AP-AX, phase P1).
 *
 * The runner is C and must not gain a C++ link dependency, so aurora crosses the boundary as a C
 * ABI DLL built out of the spike tree (`tls_aurora_live.dll`, see tools/aurora_spike/aurora_live.cpp
 * and spike_target.cmake) which this module LoadLibrary()s on demand.
 *
 * WHAT IT DOES. With `TLS_AURORA=1` the module taps the SAME byte stream the GX capture taps
 * (`gx_pipeline_feed_byte`, after the parser has decided whether the byte belongs to a display
 * list) and, for one guest frame, hands that frame's bytes to the DLL, reads the EFB back as RGBA8
 * and writes `build/recomp/aurora_live_<frame>.ppm`. That is P1's exit criterion made visible: a
 * frame rendered by aurora *inside the runner*, which can be compared with the harness's picture
 * for the same capture.
 *
 * The display-list rule is the capture's: a `0x40` CALL_DL is 9 bytes that aurora ignores
 * ("Ignoring nested GX_CMD_CALL_DL") because its own GXCallDisplayList inlines the list, so the
 * call is dropped and the inlined body (which the parser feeds back through this same function)
 * is what gets recorded. `idle` is the parser state *before* the byte, exactly as the capture
 * takes it.
 *
 * Inert unless TLS_AURORA is set: every entry point is one global test.
 */
#ifndef TLS_AURORA_LIVE_HOST_H
#define TLS_AURORA_LIVE_HOST_H

#include <stdint.h>

/* Nonzero once TLS_AURORA selected the live path and the DLL loaded. */
extern int tls_aurora_live_on;

/* Called from gx_pipeline_feed_byte with the parser state before the byte is consumed. */
/* Registers the runner's guest planes so the DLL can map them at the guest's own
 * addresses (aurora dereferences guest pointers directly). Call once, next to the
 * GX pointer resolver. */
void tls_aurora_set_guest_ram(const void* mem1, uint32_t mem1_size, const void* mem2,
                              uint32_t mem2_size);

void tls_aurora_tap_byte(uint8_t byte, int idle);

/* Frame boundary: replays the buffered frame through aurora when it is a requested frame.
 * `guest_frame` is the runner's current guest frame counter. */
void tls_aurora_frame_end(uint32_t guest_frame);

/* Joins aurora's own threads and frees the DLL. MUST be called before the process exits:
 * aurora keeps a pipeline-cache writer std::thread in a static, and a DLL whose CRT shuts down
 * with a joinable static thread calls std::terminate -> SIGILL at exit (measured). */
void tls_aurora_shutdown_host(void);

#endif
