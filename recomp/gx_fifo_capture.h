/* GX FIFO capture: record the guest's real GX byte stream for a frame window, so it can be
 * replayed into a different command processor (the Aurora spike, handover 5c.46 AP-AM).
 *
 * WHY THIS EXISTS.  recomp/replacements.c routes every guest write to the write-gather pipe
 * (0xCC008000..0xCC00803F) into gx_pipeline_feed_byte()/feed_bytes() as the raw, big-endian
 * GX FIFO byte stream - the same encoding a real command processor parses.  Aurora's
 * lib/gx/fifo.cpp + command_processor.cpp consume exactly that encoding via
 * aurora::gx::fifo::write_data()/drain().  The only two differences are:
 *
 *   1. display lists.  The guest calls a display list with the 0x40 opcode (8 bytes of
 *      address+size); aurora IGNORES a nested CALL_DL ("Ignoring nested GX_CMD_CALL_DL")
 *      because its own GXCallDisplayList() inlines the list into the FIFO instead.  This
 *      recorder therefore DROPS the 9-byte 0x40 call and records the inlined body, which
 *      gx_pipeline_process_display_list() feeds back through the same parser.
 *   2. guest addresses.  The stream carries guest virtual addresses (display lists, vertex
 *      arrays, textures) that aurora dereferences as host pointers, so the capture also
 *      carries a snapshot of MEM1 (0x80000000) and MEM2 (0x90000000) that the replay maps
 *      at exactly those addresses.
 *
 * Inert unless TLS_GX_CAPTURE is set: every entry point is a load of tls_gxcap_on plus a
 * branch, no allocation, no formatting.  See tools/aurora_spike/README.md for the format.
 */
#ifndef TLS_GX_FIFO_CAPTURE_H
#define TLS_GX_FIFO_CAPTURE_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/* File format (little-endian), version 2:
 *   char magic[8]     "TLSGXCP2"
 *   u32  frame_from   first recorded frame
 *   u32  frame_to     last recorded frame (0 = unset)
 *   then a sequence of records, each  u8 tag; u32 len; len bytes of payload:
 *     1 FRAME_BEGIN   u32 frame
 *     2 FRAME_END     u32 frame
 *     3 FIFO          raw GX FIFO bytes (display lists already inlined)
 *     4 MEM           u32 guest_base; u32 size; size bytes  (the MEM record's len = 8 + size)
 *     5 COPY          u32 dst_guest; u32 w; u32 h; u32 fmt; u32 vmark; u32 len; bytes
 *     6 NOTE          free-form ASCII, one line, no newline required
 * All record payloads are little-endian; the FIFO payload is the guest's big-endian stream
 * exactly as it arrived. */
#define TLS_GXCAP_TAG_FRAME_BEGIN 1
#define TLS_GXCAP_TAG_FRAME_END 2
#define TLS_GXCAP_TAG_FIFO 3
#define TLS_GXCAP_TAG_MEM 4
#define TLS_GXCAP_TAG_COPY 5
#define TLS_GXCAP_TAG_NOTE 6

/* Nonzero when TLS_GX_CAPTURE selected a window. Read by gx_pipeline.c on every byte. */
extern int tls_gxcap_on;

/* Called from gx_pipeline_feed_byte with the parser state *before* the byte is consumed.
 * `idle` is (s_parser_state == GX_STATE_IDLE). Drops the 9-byte 0x40 display-list call. */
void tls_gxcap_byte(uint8_t byte, int idle);

void tls_gxcap_frame_begin(uint32_t frame);
void tls_gxcap_frame_end(uint32_t frame);
void tls_gxcap_note(const char* text);

/* RAM plane. wanted() is checked once per frame by the host; ram() appends one MEM record.
 * The host writes MEM1 and MEM2 at the capture's last frame, before the frame runs, which is
 * the RAM the recorded frame's draws read. */
int tls_gxcap_ram_wanted(uint32_t frame);
void tls_gxcap_ram(uint32_t guest_base, const void* data, uint32_t size);
void tls_gxcap_ram_done(uint32_t frame);

/* One serviced EFB copy, bytes as the host left them in guest memory. */
void tls_gxcap_copy(uint32_t dst_guest, uint32_t w, uint32_t h, uint32_t fmt,
                    uint32_t vertex_mark, const void* bytes, uint32_t size);

void tls_gxcap_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* TLS_GX_FIFO_CAPTURE_H */
