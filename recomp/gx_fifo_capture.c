/* GX FIFO capture. See gx_fifo_capture.h for why; tools/aurora_spike/ for the consumer.
 *
 * Env:
 *   TLS_GX_CAPTURE=<dir>        write <dir>/gxfifo.tlscap; arms the recorder
 *   TLS_GX_CAPTURE_FROM=<f>     first frame to record (default: the TO frame)
 *   TLS_GX_CAPTURE_TO=<f>       last frame to record  (default: 0 = nothing recorded)
 *   TLS_GX_CAPTURE_RAM=0        skip the MEM1/MEM2 snapshot
 *   TLS_GX_CAPTURE_QUIET=1      no one-line progress report
 *
 * The recorder is deliberately dumb: it is a byte sink and two file records, and it must not
 * change what the pipeline does. Nothing here reads or writes guest memory.
 */
#include "gx_fifo_capture.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifdef _WIN32
#include <direct.h>
#endif

int tls_gxcap_on = 0;

#define TLS_GXCAP_MAX_PATH 512

/* Create the capture directory if it is missing, one component at a time. Without this the
 * recorder printed `[GxCap] cannot open ...` and silently recorded NOTHING: a whole 8-minute
 * run produced a batch dump and a screenshot but no stream, because the caller had only ever
 * created the directory by hand (measured, 5c.46 AP-AO). The recorder is still a dumb byte
 * sink - this only makes its one failure mode impossible. */
static void cap_mkdirs(const char* dir) {
    char tmp[TLS_GXCAP_MAX_PATH];
    size_t n = strlen(dir);
    if (n == 0 || n >= sizeof(tmp)) return;
    memcpy(tmp, dir, n + 1);
    for (size_t i = 1; i < n; ++i) {
        const char c = tmp[i];
        if (c == '/' || c == '\\') {
            tmp[i] = '\0';
#ifdef _WIN32
            _mkdir(tmp);
#else
            mkdir(tmp, 0777);
#endif
            tmp[i] = c;
        }
    }
#ifdef _WIN32
    _mkdir(tmp);
#else
    mkdir(tmp, 0777);
#endif
}

static FILE* s_file = NULL;
static int s_from = 0;
static int s_to = 0;
static int s_ram = 1;
static int s_ram_done = 0;
static int s_frames_seen = 0;
static unsigned long long s_fifo_bytes = 0;
static unsigned long long s_dropped_dl = 0;
static uint32_t s_pending_frame = 0;
static int s_have_pending = 0;
/* 0x40 call in flight: 8 header bytes still to swallow. */
static uint32_t s_dl_skip = 0;

static void cap_record(uint8_t tag, const void* payload, uint32_t len) {
    if (!s_file) return;
    fputc((int)tag, s_file);
    fwrite(&len, 4, 1, s_file);
    if (len && payload) fwrite(payload, 1, len, s_file);
}

/* FIFO bytes are framed in 64 KB records rather than written one byte at a time: the file
 * must stay a record stream (a raw byte run would make the MEM records that follow it
 * unfindable), and 64 KB of stdio buffering keeps the capture off the guest's timing. */
#define TLS_GXCAP_CHUNK (64u << 10)
static uint8_t s_chunk[TLS_GXCAP_CHUNK];
static uint32_t s_chunk_len = 0;

static void cap_flush_chunk(void) {
    if (!s_chunk_len) return;
    cap_record(TLS_GXCAP_TAG_FIFO, s_chunk, s_chunk_len);
    s_chunk_len = 0;
}

static void cap_put_byte(uint8_t b) {
    if (s_chunk_len == TLS_GXCAP_CHUNK) cap_flush_chunk();
    s_chunk[s_chunk_len++] = b;
}

static int cap_init(void) {
    static int s_tried = 0;
    if (s_tried) return tls_gxcap_on;
    s_tried = 1;

    const char* dir = getenv("TLS_GX_CAPTURE");
    if (!dir || !*dir) return 0;

    const char* e;
    if ((e = getenv("TLS_GX_CAPTURE_FROM")) != NULL) s_from = atoi(e);
    if ((e = getenv("TLS_GX_CAPTURE_TO")) != NULL) s_to = atoi(e);
    if ((e = getenv("TLS_GX_CAPTURE_RAM")) != NULL) s_ram = atoi(e);
    if (s_to == 0) s_to = s_from;
    if (s_to < s_from) { int t = s_from; s_from = s_to; s_to = t; }
    if (s_to <= 0) return 0;

    char path[TLS_GXCAP_MAX_PATH];
    snprintf(path, sizeof(path), "%s/gxfifo.tlscap", dir);
    s_file = fopen(path, "wb");
    if (!s_file) {
        cap_mkdirs(dir);
        s_file = fopen(path, "wb");
    }
    if (!s_file) {
        fprintf(stderr, "[GxCap] cannot open %s\n", path);
        return 0;
    }
    /* 4 MB of stdio buffer: a frame is ~1.2 MB of vertices and this must not add syscalls
     * to the guest's timing. */
    static char s_buf[4u << 20];
    setvbuf(s_file, s_buf, _IOFBF, sizeof(s_buf));

    fwrite("TLSGXCP2", 1, 8, s_file);
    uint32_t hdr[2];
    hdr[0] = (uint32_t)s_from;
    hdr[1] = (uint32_t)s_to;
    fwrite(hdr, 4, 2, s_file);

    printf("[GxCap] armed: %s frames %d..%d ram=%d\n", path, s_from, s_to, s_ram);
    fflush(stdout);
    tls_gxcap_on = 1;
    return 1;
}

void tls_gxcap_byte(uint8_t byte, int idle) {
    if (!tls_gxcap_on) {
        if (cap_init()) { /* fall through, first byte */ }
        else return;
    }
    if (!s_have_pending) return;

    if (s_dl_skip > 0) {
        s_dl_skip--;
        return;
    }
    if (idle && byte == 0x40) {
        /* Drop the CALL_DL opcode and its 8 header bytes: aurora does not recurse into a
         * display list, our caller inlines the body through the same parser, and that body
         * is what the replay must see. */
        s_dl_skip = 8;
        s_dropped_dl++;
        return;
    }
    cap_put_byte(byte);
    s_fifo_bytes++;
}

void tls_gxcap_frame_begin(uint32_t frame) {
    if (!tls_gxcap_on && !cap_init()) return;
    s_frames_seen++;
    s_have_pending = ((int)frame >= s_from && (int)frame <= s_to) ? 1 : 0;
    s_dl_skip = 0;
    if (!s_have_pending) return;
    s_pending_frame = frame;
    cap_record(TLS_GXCAP_TAG_FRAME_BEGIN, &frame, 4);
}

void tls_gxcap_frame_end(uint32_t frame) {
    if (!tls_gxcap_on || !s_have_pending) return;
    if (frame != s_pending_frame) return;
    cap_flush_chunk();
    cap_record(TLS_GXCAP_TAG_FRAME_END, &frame, 4);
    s_have_pending = 0;
    if (frame >= (uint32_t)s_to) {
        fflush(s_file);
        printf("[GxCap] frame %u recorded: %d frame(s) seen, %llu FIFO bytes, %llu display-list call(s) inlined\n",
               frame, s_frames_seen, s_fifo_bytes, s_dropped_dl);
        fflush(stdout);
    }
}

void tls_gxcap_note(const char* text) {
    if (!tls_gxcap_on || !s_have_pending || !text) return;
    cap_flush_chunk();
    cap_record(TLS_GXCAP_TAG_NOTE, text, (uint32_t)strlen(text));
}

int tls_gxcap_ram_wanted(uint32_t frame) {
    if (!tls_gxcap_on || !s_ram || s_ram_done) return 0;
    /* One frame AFTER the last recorded one: that is the RAM as it stood when the recorded
     * frame's draws ran, arrays and all (a dump at its start misses what the guest filled
     * during it). */
    return (int)frame == s_to + 1;
}

void tls_gxcap_ram(uint32_t guest_base, const void* data, uint32_t size) {
    if (!tls_gxcap_on || !s_file || !data || size == 0) return;
    /* Deliberately NOT gated on s_have_pending: the RAM plane is taken one frame after the
     * recorded window closes (TLS_GX_CAPTURE_TO + 1). See tls_gxcap_ram_wanted(). */
    cap_flush_chunk();
    uint8_t hdr[8];
    memcpy(hdr, &guest_base, 4);
    memcpy(hdr + 4, &size, 4);
    fputc(TLS_GXCAP_TAG_MEM, s_file);
    uint32_t len = size + 8;
    fwrite(&len, 4, 1, s_file);
    fwrite(hdr, 1, 8, s_file);
    fwrite(data, 1, size, s_file);
    printf("[GxCap] MEM plane 0x%08X..0x%08X (%u bytes)\n", guest_base, guest_base + size, size);
    fflush(stdout);
}

void tls_gxcap_ram_done(uint32_t frame) {
    (void)frame;
    if (!tls_gxcap_on || s_ram_done) return;
    s_ram_done = 1;
    if (s_file) fflush(s_file);
}

void tls_gxcap_copy(uint32_t dst_guest, uint32_t w, uint32_t h, uint32_t fmt,
                    uint32_t vertex_mark, const void* bytes, uint32_t size) {
    /* Only inside the recorded window. Measured the hard way: without this test a 2-frame window
     * produced an 8 747 977 944-byte file, because every one of the run's ~31 000 EFB copies was
     * recorded (the plugin is armed for the whole run, not only for the window). */
    if (!tls_gxcap_on || !s_have_pending || !s_file || !bytes || size == 0) return;
    cap_flush_chunk();
    uint32_t hdr[6];
    hdr[0] = dst_guest;
    hdr[1] = w;
    hdr[2] = h;
    hdr[3] = fmt;
    hdr[4] = vertex_mark;
    hdr[5] = size;
    fputc(TLS_GXCAP_TAG_COPY, s_file);
    uint32_t len = 24 + size;
    fwrite(&len, 4, 1, s_file);
    fwrite(hdr, 4, 6, s_file);
    fwrite(bytes, 1, size, s_file);
}

void tls_gxcap_shutdown(void) {
    if (s_file) {
        cap_flush_chunk();
        fflush(s_file);
        fclose(s_file);
        s_file = NULL;
    }
    tls_gxcap_on = 0;
}
