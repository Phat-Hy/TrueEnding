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

/* Frame boundary. `guest_frame` is the runner's current guest frame counter; `at_present` is
 * three-valued: 1 = present with an XFB/scanout copy, 2 = present without one, 0 = a mid-frame
 * GXDrawDone flush.
 *
 * WHY THE FLAG EXISTS. gx_pipeline_end_frame() runs on both the flush and the present path, so
 * without it the tap closed an aurora "frame" at every mid-frame flush - measured on the gate's
 * script at counters 2794..2800: 2794 fed 0 draws / 3 copies, 2795 fed 220 draws, 2796 0, 2797 219,
 * 2798 0, 2799 207, 2800 0 draws / 3 copies. Bytes accumulate across a flush and the frame is fed
 * ONCE, at the present (5c.46 AP-AZ C).
 *
 * WHY THE THIRD VALUE (5c.46 AP-BJ). 1 and 2 are both PRESENTS and both end a guest frame, and the
 * default feed model closes on both - one aurora frame per guest frame, which is what the harness
 * does with a recorded capture and what measures 7.66 mean |d| against the layer. Closing only on 1
 * (AP-BC's display-boundary model, still available as TLS_AURORA_LEGACY_FEED=1) merges the pair into
 * one aurora frame and measures 63-66. 0 remains a flush, which never ends an aurora frame. */
void tls_aurora_frame_end(uint32_t guest_frame, int at_present);

/* Joins aurora's own threads and frees the DLL. MUST be called before the process exits:
 * aurora keeps a pipeline-cache writer std::thread in a static, and a DLL whose CRT shuts down
 * with a joinable static thread calls std::terminate -> SIGILL at exit (measured). */
void tls_aurora_shutdown_host(void);

/* ============================================================================================
 * P4 PUBLISH (handover 5c.46 AP-BQ): aurora renders the frame the runner is about to present.
 *
 * WHY THIS IS A SEPARATE ENTRY POINT FROM tls_aurora_frame_end(). The feed has to happen BEFORE the
 * present, not after it: gx_pipeline_end_frame() - and therefore tls_aurora_frame_end() - runs at
 * the END of d3d11_present(), after the EFB snapshot, the screenshot and IDXGISwapChain_Present, so
 * a picture fed there can only be drawn on the NEXT present, one guest frame late. On this scene a
 * one-frame lag is not subtle: the guest alternates a geometry half and a composite half (5c.46
 * AP-BJ), so a delayed picture puts the previous half on screen. d3d11_present() therefore calls
 * tls_aurora_publish_frame() at its TOP, where the frame's tapped bytes are already complete (the
 * XFB copy that ends the frame has been issued), and blits the result in before the screenshot.
 *
 * Publishing ignores TLS_AURORA_FROM/_TO/_SHOTS: every present is rendered and published, which is
 * what "aurora is the renderer" means. TLS_LAYER=1 wins over TLS_AURORA and disables it (the escape
 * hatch). Inert unless TLS_AURORA and TLS_AURORA_PUBLISH are both set.
 *
 * Returns nonzero when a picture is available for THIS frame; tls_aurora_published() then hands back
 * the RGBA8 buffer (640x448) the present path blits, valid until the next publish call. */
int tls_aurora_publish_frame(void);
const uint8_t* tls_aurora_published(uint32_t* w, uint32_t* h);

/* Cumulative publish counters (5c.46 AP-BR): publishes attempted and publishes that fell back to
 * the layer's picture. Read from the memory sampler, so a long run can be correlated with frames. */
void tls_aurora_publish_stats(unsigned long* frames, unsigned long* fails);

/* The DLL's cumulative readback counters (5c.46 AP-BR): calls, failures, pumped empty frames,
 * captures armed, captures rejected, and the FIFO buffer's high-water mark in bytes. Zeroes when no
 * DLL is loaded. The FIFO capacity is the one that proves a growth bug: feeding a whole frame
 * through `fifo::write_data_grow()` doubled it on every call (AP-BR §3). */
void tls_aurora_live_probe_stats(unsigned long long* calls, unsigned long long* fails,
                                 unsigned long long* pumps, unsigned long long* captures,
                                 unsigned long long* rejected, unsigned long long* fifo_cap);

#endif
