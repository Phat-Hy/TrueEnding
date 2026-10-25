#ifndef TLS_GX_PIPELINE_H
#define TLS_GX_PIPELINE_H

#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

// Standard decoded 3D vertex matching Direct3D 11 / 12 input layout
typedef struct {
    float x, y, z, w;
    float nx, ny, nz;
    float u, v;
    uint32_t color; // 0xAABBGGRR / RGBA
} GxVertex;

// GX Primitive types
#define GX_PRIMITIVE_POINTS         0xB8
#define GX_PRIMITIVE_LINES          0xA8
#define GX_PRIMITIVE_LINE_STRIP     0xB0
#define GX_PRIMITIVE_TRIANGLES      0x90
#define GX_PRIMITIVE_TRIANGLE_STRIP 0x98
#define GX_PRIMITIVE_TRIANGLE_FAN   0xA0
#define GX_PRIMITIVE_QUADS          0x80

// Attribute Indices
#define GX_VA_PNMTXIDX              0
#define GX_VA_POS                   9
#define GX_VA_NRM                   10
#define GX_VA_CLR0                  11
#define GX_VA_CLR1                  12
#define GX_VA_TEX0                  13
#define GX_VA_TEX1                  14

// Attribute Types
#define GX_ATTR_NONE                0
#define GX_ATTR_DIRECT              1
#define GX_ATTR_INDEX8              2
#define GX_ATTR_INDEX16             3

// Component Types
#define GX_COMP_U8                  0
#define GX_COMP_S8                  1
#define GX_COMP_U16                 2
#define GX_COMP_S16                 3
#define GX_COMP_F32                 4

// Maximum buffered vertices per frame. This is a *host* buffer, not a guest limit:
// 262144 (0x40000) used to be the ceiling and Chapter 1's cave+water pass saturates
// it (frames 2160/2220/2280 reported exactly 262143 vertices), so geometry past the
// cap was silently dropped - visible as missing chunks of the scene. 1 M vertices =
// 40 MB of GxVertex, which a PC runner can afford; the overflow counter below makes
// any future saturation loud instead of silent.
#define GX_MAX_BATCH_VERTICES       (1u << 20)

// Guest pointer resolution callback
typedef const void* (*GxResolvePtrFunc)(uint32_t addr);
void gx_pipeline_set_pointer_resolver(GxResolvePtrFunc func);
void gx_pipeline_set_debug_pc(uint32_t pc, uint32_t lr);

// Initialize the GX pipeline subsystem
void gx_pipeline_init(void);

// Set blend mode from PE MMIO register
void gx_pipeline_set_blend_mode(bool enable, uint8_t src_factor, uint8_t dst_factor, bool subtract);
void gx_pipeline_set_z_mode(bool test_enable, uint8_t func, bool write_enable);

// Clear color tracking
void gx_pipeline_set_clear_color(float r, float g, float b, float a);
void gx_pipeline_get_clear_color(float* rgba);

// Reset per-frame primitive buffers
void gx_pipeline_begin_frame(void);
void gx_pipeline_end_frame(void);

// Feed data written to WGPIPE (0xCC008000)
void gx_pipeline_feed_byte(uint8_t byte);
void gx_pipeline_feed_bytes(const uint8_t* data, uint32_t size);

// Display list processing
void gx_pipeline_process_display_list(const uint8_t* data, uint32_t size);

// Attribute configuration
void gx_pipeline_set_vtx_desc(uint32_t attr, uint32_t type);
void gx_pipeline_set_vtx_attr_fmt(uint32_t fmt, uint32_t attr, uint32_t comp_cnt, uint32_t comp_type, uint8_t frac);
void gx_pipeline_set_array(uint32_t attr, const void* base_ptr, uint8_t stride);

// Get current decoded vertex stream
const GxVertex* gx_pipeline_get_vertices(uint32_t* out_count);
// Vertices the guest submitted that did not fit the host vertex buffer this frame.
// Non-zero means visible geometry was dropped; report it, never hide it.
uint32_t gx_pipeline_get_dropped_vertices(void);

// Performs an EFB -> texture copy for the guest (called on TEXCOPYEXEC, BP 0x52).
// (dst_guest, x0, y0, x1, y1, format, half_scale, pitch, exec) with format 0 = RGBA8,
// 1 = RGB565. pitch is BP 0x4D (see GxPendingEfbCopy) and exec is the raw BP 0x52 word,
// both needed to derive the *destination* size (handover 5c.17).
// Implemented by the active graphics backend; when unset the copy is recorded and
// reported but not performed (see handover 5c.11).
typedef void (*GxEfbCopyFunc)(uint32_t dst_guest, uint32_t x0, uint32_t y0,
                              uint32_t x1, uint32_t y1, uint32_t format, int half_scale,
                              uint32_t pitch, uint32_t exec);
void gx_pipeline_set_efb_copy_hook(GxEfbCopyFunc func);

/* Off (default): the hook is invoked at the copy command, so it reads the last completed
 * frame - the pre-5c.15 behaviour. On: the hook is NOT invoked inline; the backend must
 * replay gx_pipeline_get_pending_copy() from inside its batch loop, in stream order, so
 * each copy observes the frame as drawn up to that point (what the hardware does). */
void gx_pipeline_set_efb_copy_deferred(int on);
int gx_pipeline_efb_copy_is_deferred(void);

/* A GXCopyTex command recorded in stream order (BP 0x52). The hardware copy reads the
 * EFB as drawn *up to the point the guest issued it*; the host used to run every copy
 * during guest execution, i.e. before any of the frame was drawn, so each copy read the
 * previous frame's finished picture. That closed a feedback loop (handover 5c.14/5c.15).
 * Each entry therefore carries the host vertex index that was current when the copy was
 * issued, and the backend renders the batch list up to that index before performing it.
 * A copy also acts as a batch barrier so no draw batch can straddle a copy command. */
typedef struct {
    uint32_t dst_guest;
    uint32_t x0, y0, x1, y1;
    uint32_t format;        /* 0 = RGBA8, 1 = RGB565 (as decoded from BP 0x4B) */
    uint32_t pitch;         /* BP 0x4D: destination pitch from GXSetTexCopyDst */
    uint32_t exec;          /* raw BP 0x52, for field decoding */
    int half_scale;         /* destination is half the source rect in each axis */
    uint32_t vertex_mark;   /* gx_pipeline vertex count at the copy command */
    /* Decoded BP 0x52 fields (Dolphin's BPMemory.h UPE_Copy). The destination size is
     * NOT source/2 - it comes from the pitch register: for a tiled copy the tile row is
     * (width/4)*64 = width*16 bytes and pitch*32 == that, so dst_w = pitch*2. Verified
     * against every copy of MENU frame 1448 (handover 5c.17). */
    uint32_t real_format;   /* UPE_Copy::tp_realFormat(): fmt/2 + (fmt&1)*8 */
    int copy_to_xfb;        /* bit 14: 16bpp linear scanout buffer, not a tiled texture */
    int intensity_fmt;      /* bit 15 */
} GxPendingEfbCopy;

#define GX_MAX_PENDING_COPIES 256

uint32_t gx_pipeline_get_pending_copy_count(void);
const GxPendingEfbCopy* gx_pipeline_get_pending_copy(uint32_t index);

// Active texture state
typedef struct {
    uint32_t width;
    uint32_t height;
    uint32_t format;
    uint32_t guest_addr;
    uint32_t tlut_addr;
    uint32_t tlut_format;
    uint32_t wrap_s;
    uint32_t wrap_t;
    bool dirty;
} GxTextureUnit;

// Matrix tracking
void gx_pipeline_set_projection(const float mtx[4][4], bool is_perspective);
void gx_pipeline_load_pos_matrix(uint32_t id, const float mtx[3][4]);

// Texture tracking
const GxTextureUnit* gx_pipeline_get_texture(uint32_t unit);
void gx_pipeline_clear_texture_dirty(uint32_t unit);

/* ---------------------------------------------------------------------------
 * GX TEV (texture environment) state.
 *
 * The GX pixel pipeline is not a fixed function "texture * vertex colour" stage:
 * every pixel runs through 1..16 * TEV stages*, each of which combines up to four
 * sources (previous stage result, one of three colour registers, the texture, the
 * rasteriser/vertex colour, or a constant) with an arbitrary lerp, bias, scale,
 * clamp and destination register, separately for RGB and A.  Until now the host
 * shaders implemented a single hardcoded `texColor.rgb * vertexColor.rgb,
 * texColor.a * vertexColor.a` expression, which is only correct for the one
 * configuration that happens to be `prev = tex * ras`.
 *
 * The composite tail of the title/MENU frames is exactly where that gap bites:
 * its fullscreen quads carry `col0 = 0xFFFFFFFF` (so `tex*ras` is no modulation at
 * all) and `src=SRCALPHA dst=ONE`, so every additive pass adds the full source
 * texture.  Real hardware scales those passes through the TEV alpha/colour
 * combiner first.  See handover 5c.15 item 7d.
 *
 * The register layouts below are Dolphin's (VideoCommon/BPMemory.h):
 *   BP 0xC0+2i  colour combiner   d:0-3 c:4-7 b:8-11 a:12-15 bias:16-17
 *                                 op:18 clamp:19 scale:20-21 dest:22-23
 *   BP 0xC1+2i  alpha combiner    d:4-6 c:7-9 b:10-12 a:13-15, rest as above
 *   BP 0xE0+2i / 0xE1+2i  colour register i, RA / BG half (11-bit signed + type bit)
 *   BP 0xF6+j   konst selectors: swap_rb:0-1 swap_ga:2-3 kcsel_even:4-8
 *                                kasel_even:9-13 kcsel_odd:14-18 kasel_odd:19-23
 *   BP 0xF3     alpha test: ref0:0-7 ref1:8-15 comp0:16-18 comp1:19-21 logic:22-23
 * ------------------------------------------------------------------------- */

#define GX_MAX_TEV_STAGES 16
#define GX_MAX_TEV_STATES 512

typedef struct {
    uint8_t  num_stages;
    uint8_t  alpha_comp0;      /* BP 0xF3 bits 16..18 (GXCompare) */
    uint8_t  alpha_comp1;      /* BP 0xF3 bits 19..21 */
    uint8_t  alpha_logic;      /* BP 0xF3 bits 22..23 */
    uint8_t  alpha_ref0;
    uint8_t  alpha_ref1;
    uint8_t  tex_enable[GX_MAX_TEV_STAGES];
    uint8_t  texmap[GX_MAX_TEV_STAGES];
    uint8_t  texcoord[GX_MAX_TEV_STAGES];
    uint8_t  kcsel[GX_MAX_TEV_STAGES];   /* KonstSel, colour */
    uint8_t  kasel[GX_MAX_TEV_STAGES];   /* KonstSel, alpha */
    uint32_t combiner_color[GX_MAX_TEV_STAGES];  /* BP 0xC0+2i */
    uint32_t combiner_alpha[GX_MAX_TEV_STAGES];  /* BP 0xC1+2i */
    uint32_t kreg_ra[4];                 /* BP 0xE0+2i, type bit still set */
    uint32_t kreg_bg[4];                 /* BP 0xE1+2i */
    uint32_t ksel[8];                    /* BP 0xF6+j raw */
    uint32_t _hash;                      /* dedup only; not part of the state */
} GxTevState;

/* Draw batch representing a contiguous range of vertices with consistent texture state */
typedef struct {
    uint32_t vertex_offset;
    uint32_t vertex_count;
    GxTextureUnit tex;
    /* Second texture unit referenced by the TEV stages (stage texmaps 0 and 1 are
     * the only ones the game uses; a batch whose stages name a third map is
     * reported by TLS_TEV_PROBE as unsupported rather than silently mis-sampled). */
    GxTextureUnit tex1;
    bool has_texture;
    bool has_texture1;
    /* Every texmap the TEV stages sample during this batch (bit m = texmap m,
     * i.e. the texture the guest bound to GX_TEXMAP0+m). The TEV pixel shader
     * binds these to t0..t7 and samples them by stage texmap. */
    uint8_t tev_texmap_mask;
    GxTextureUnit tev_texmap[8];
    /* Which GX texcoord attributes the guest supplied for this batch (bit t set =
     * vertex attribute 13+t present). The TEV stages select texcoord per stage, so
     * this says whether the host could feed them uv1..uv7 at all. */
    uint8_t texcoord_mask;
    uint16_t tev_state;        /* index into gx_pipeline_get_tev_state()'s table */
    bool blend_enable;
    uint8_t src_factor;
    uint8_t dst_factor;
    bool subtract;
    bool is_perspective;
    bool depth_write_enable;
    bool depth_test_enable;
    uint8_t alpha_comp0;
    uint8_t alpha_ref0;
    /* XF state that decides the vertex colours of this batch (diagnostics + the lighting
     * stage). xf_ctrl0 is the raw XF 0x100e channel-0 colour control word: bit 1 is
     * "lighting enabled", bit 0 picks the material source, bits 2..5 / 11..14 the light
     * mask. xf_num_texgens is XF 0x103f; only texcoords below it exist on hardware and
     * every other texcoord reads (0,0) - Dolphin writes texture_coord_i = vec3(0) for
     * i >= numTexGens. */
    uint32_t xf_ctrl0;
    uint8_t xf_num_texgens;
} GxDrawBatch;

/* The TEV state snapshot attached to a batch (NULL when the index is out of range). */
const GxTevState* gx_pipeline_get_tev_state(uint16_t index);
/* Number of distinct TEV states recorded this frame (diagnostics only). */
uint32_t gx_pipeline_get_tev_state_count(void);
/* Human-readable dump of one TEV state (used by TLS_TEV_PROBE). */
void gx_pipeline_print_tev_state(uint16_t index);

#define GX_MAX_DRAW_BATCHES 4096

// Retrieve draw batches for the current frame
const GxDrawBatch* gx_pipeline_get_draw_batches(uint32_t* out_count);

// Statistics
uint32_t gx_pipeline_get_primitive_count(void);
uint32_t gx_pipeline_get_vertex_count(void);

#ifdef __cplusplus
}
#endif

#endif // TLS_GX_PIPELINE_H
