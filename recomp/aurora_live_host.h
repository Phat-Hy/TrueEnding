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
 * `TLS_AURORA_SHOTS=<f>[,<f>...]` (5c.46 AP-BI) asks for a readback at SEVERAL fed frames in one
 * launch. It exists because the alignment question AP-BD leaves open - "which guest frame is this
 * aurora picture?" - cannot be answered from one picture per launch: the layer's own neighbouring
 * frames differ by 33-48 mean |d|, so a one-picture comparison measures the frame offset rather
 * than the renderer. Absent = one readback at the first display boundary at/after TLS_AURORA_TO,
 * which is the behaviour every measurement before AP-BI used.
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

/* Frame boundary. `guest_frame` is the runner's current guest frame counter; `at_present` says
 * whether this boundary is the guest's own present (`1`) or a mid-frame GXDrawDone flush (`0`).
 *
 * THE FLAG EXISTS BECAUSE THE BOUNDARY IS NOT THE PRESENT. gx_pipeline_end_frame() runs on both
 * paths, so without it the tap closed an aurora "frame" at every mid-frame flush - measured on the
 * gate's script at counters 2794..2800: 2794 fed 0 draws / 3 copies, 2795 fed 220 draws, 2796 0,
 * 2797 219, 2798 0, 2799 207, 2800 0 draws / 3 copies. Aurora clears per fed frame, so a feed that
 * lands on the copy-only half renders black *by construction* - which is what the previous session
 * recorded as "the cave frame renders BLACK live (mean 1.92)" and blamed on depth state (5c.46
 * AP-AZ C). With the flag the bytes accumulate across the flush and the frame is fed ONCE, at the
 * present, as the whole guest frame the layer also renders. */
void tls_aurora_frame_end(uint32_t guest_frame, int at_present);

/* Joins aurora's own threads and frees the DLL. MUST be called before the process exits:
 * aurora keeps a pipeline-cache writer std::thread in a static, and a DLL whose CRT shuts down
 * with a joinable static thread calls std::terminate -> SIGILL at exit (measured). */
void tls_aurora_shutdown_host(void);

#endif
