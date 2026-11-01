#include "gx_pipeline.h"
#include "aurora_live_host.h"
#include "gx_fifo_capture.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/* Set by host_runner.c's frame loop. Used by the GX FIFO recorder (TLS_GX_CAPTURE) so the
 * captured frame numbers are the same ones every other probe prints. */
extern int g_runner_current_frame;

/* The runner's guest frame counter, for the frame-gated probes below. */
extern int g_runner_current_frame;

// Attribute descriptor
typedef struct {
    uint8_t type; // NONE=0, DIRECT=1, INDEX8=2, INDEX16=3
} AttrDesc;

// Attribute format
typedef struct {
    uint8_t comp_cnt;
    uint8_t comp_type;
    uint8_t frac;
} AttrFmt;

// Array pointer
typedef struct {
    const void* base_ptr;
    uint8_t stride;
} ArrayInfo;

// Internal Pipeline State
static AttrDesc s_vtx_desc[32];
static AttrFmt s_vtx_fmt[8][32];
static ArrayInfo s_arrays[32];

static float s_proj_matrix[4][4];
static bool s_proj_is_perspective = true;
static float s_pos_matrices[64][3][4];
static uint8_t s_current_pnm_idx = 0;
static uint8_t s_default_pnm_idx = 0;
/* The 6-bit PosNormalMtxIdx as the guest wrote it (= 3 * matrix index). The normal-matrix
 * fetch uses the raw field: XF normalMatrices[3 * (field & 31)] (Dolphin XFMemory). */
static uint8_t s_current_pnm_raw = 0;
static uint8_t s_default_pnm_raw = 0;

static GxVertex s_vertex_batch[GX_MAX_BATCH_VERTICES];
static uint32_t s_vertex_count = 0;
static uint32_t s_primitive_count = 0;
/* Vertices submitted this frame that did not fit the host buffer. Silently returning
 * them (the old behaviour) loses geometry with no trace; count them so the frame
 * telemetry can say so. */
static uint32_t s_dropped_vertices = 0;

static inline bool reserve_vertices(uint32_t n) {
    if (s_vertex_count + n <= GX_MAX_BATCH_VERTICES) return true;
    s_dropped_vertices += n;
    return false;
}

static GxDrawBatch s_draw_batches[GX_MAX_DRAW_BATCHES];
static uint32_t s_draw_batch_count = 0;

static bool s_blend_enable = true;
static uint8_t s_src_factor = 4; // GX_BL_SRCA
static uint8_t s_dst_factor = 5; // GX_BL_INVSRCA
/* GX scissor, BP 0x20 (top-left) / BP 0x21 (bottom-right). GX writes both with a +342 bias in
 * each 12-bit field, which is why BP 0x20 = 0x156156 decodes to (0,0) and not to (342,342).
 * Snapshot per batch and part of the batch-merge predicate, so a scissor change splits a batch.
 * Since handover 5c.46 AP-AR the backend APPLIES this by default (it was AP-AP's diagnostic
 * switch, and the AP-AP addendum's "it changes nothing" measurement was an inert-switch bug);
 * TLS_NO_SCISSOR=1 in recomp/gfx_d3d11.c restores the unclipped behaviour. */
static uint16_t s_scissor[4] = {0, 0, 639, 447};
static bool s_scissor_valid = false;
static bool s_blend_subtract = false;
static bool s_depth_test_enable = true;
static bool s_depth_write_enable = true;
static uint8_t s_depth_func = 3; // LEQUAL
static uint8_t s_alpha_comp0 = 7; // ALWAYS
static uint8_t s_alpha_ref0 = 0;

static float s_clear_color[4] = {0.0f, 0.0f, 0.0f, 1.0f};

/* BP 0x30..0x3F: TCoordInfo, one S/T pair per texcoord (SU_SSIZE / SU_TSIZE).
 * `scale_minus_1` (bits 0..15) is the power-of-two scale the GX texcoord generator
 * applies and `range_bias` (bit 16) is its uv*0.5+0.5 remap. The host feeds the raw
 * vertex UV to the sampler, so these registers are recorded here and reported per
 * batch - a fullscreen 2D quad that samples a mask only over the mask's *middle*
 * would look exactly like the host's title-screen vignette being too strong
 * (handover 5c.23 §7). */
#define GX_TC_INFO_MAX 8
static uint32_t s_tc_info[GX_TC_INFO_MAX][2];

uint32_t gx_pipeline_get_tc_info(int coord, int is_t) {
    if (coord < 0 || coord >= GX_TC_INFO_MAX) return 0;
    return s_tc_info[coord][is_t ? 1 : 0];
}

/* EFB -> texture copy state (see the 0x49/0x4A/0x4B/0x52 handling in
 * gx_pipeline_process_bp). Decoded with tools/decode_bp_copy.py. */
static uint32_t s_efb_copy_x0 = 0, s_efb_copy_y0 = 0;
static uint32_t s_efb_copy_x1 = 639, s_efb_copy_y1 = 479;
static uint32_t s_efb_copy_dst_guest = 0;
static uint32_t s_efb_copy_format = 0;
/* BP 0x4D: the destination pitch GXSetTexCopyDst() derives from the *destination*
 * width/height (src/GXFrameBuf.c fn_80614D30 stores fn_80615F30(fmt,w,h) outputs
 * multiplied together there). It is the only destination-geometry number the hardware
 * ever sees, so it is the key to deciding whether a copy is 1:1 or downscaled. */
static uint32_t s_efb_copy_pitch = 0;
static uint32_t s_efb_copy_count = 0;
static GxEfbCopyFunc s_efb_copy_hook = NULL;

/* Copies queued for the current frame, in stream order (see GxPendingEfbCopy in the
 * header). s_batch_barrier forces the next emitted draw into a fresh batch so a batch
 * can never straddle a copy command - otherwise flushing "copies up to batch vertex
 * offset" would draw geometry that the guest submitted after the copy. */
static GxPendingEfbCopy s_pending_copies[GX_MAX_PENDING_COPIES];
static uint32_t s_pending_copy_count = 0;
static uint32_t s_pending_copy_overflow = 0;
static bool s_batch_barrier = false;
static bool s_efb_copy_deferred = false;

uint32_t gx_pipeline_get_pending_copy_count(void) { return s_pending_copy_count; }

const GxPendingEfbCopy* gx_pipeline_get_pending_copy(uint32_t index) {
    if (index >= s_pending_copy_count) return NULL;
    return &s_pending_copies[index];
}

void gx_pipeline_set_clear_color(float r, float g, float b, float a) {
    s_clear_color[0] = r;
    s_clear_color[1] = g;
    s_clear_color[2] = b;
    s_clear_color[3] = a;
}

void gx_pipeline_get_clear_color(float* rgba) {
    if (rgba) {
        rgba[0] = s_clear_color[0];
        rgba[1] = s_clear_color[1];
        rgba[2] = s_clear_color[2];
        rgba[3] = s_clear_color[3];
    }
}

static inline uint32_t pack_rgba(uint8_t r, uint8_t g, uint8_t b, uint8_t a) {
    return (uint32_t)(r | (g << 8) | (b << 16) | (a << 24));
}

static GxResolvePtrFunc s_resolve_ptr = NULL;
static int s_dl_recursion_depth = 0;
static uint32_t s_debug_pc = 0;
static uint32_t s_debug_lr = 0;

// Current primitive parser state
typedef enum {
    GX_STATE_IDLE,
    GX_STATE_READ_CP_REG,
    GX_STATE_READ_XF_HDR,
    GX_STATE_READ_XF_PAYLOAD,
    GX_STATE_READ_DL_HDR,
    GX_STATE_READ_COUNT_HIGH,
    GX_STATE_READ_COUNT_LOW,
    GX_STATE_READ_VERTICES,
    GX_STATE_READ_BP_REG,
    GX_STATE_READ_IDX_LOAD,
    GX_STATE_SKIP_BYTES,
} ParserState;

static ParserState s_parser_state = GX_STATE_IDLE;
static uint8_t s_current_prim_type = 0;
static uint8_t s_current_vtx_fmt_idx = 0;
static uint16_t s_target_vertex_count = 0;
static uint16_t s_current_vertex_idx = 0;
static uint32_t s_skip_remaining = 0;

// Indexed load buffer (opcodes 0x20, 0x28, 0x30, 0x38)
static uint8_t  s_idx_buf[4];
static uint32_t s_idx_buf_pos = 0;
static uint8_t  s_current_idx_cmd = 0;

// BP load buffer
static uint8_t  s_bp_buf[4];
static uint32_t s_bp_buf_pos = 0;

// Active texture and TEV state
static GxTextureUnit s_tex_units[8];
static uint8_t s_active_tex_map = 0;
static uint8_t s_active_tex_coord = 0;
static bool s_tev_tex_enable = true;
static uint8_t s_num_tev_stages = 1;

typedef struct {
    uint32_t guest_addr;
    uint32_t tmem_offset;
} GxTlutLoad;
static GxTlutLoad s_tlut_loads[1024];
static uint32_t s_last_tlut_addr = 0;

typedef struct {
    uint8_t texmap;
    uint8_t texcoord;
    bool enable;
    /* TEVORDER's colorchan field (bits 7-9 even stage / 19-21 odd stage, Dolphin
     * TwoTevStageOrders::colorchan). It picks which XF vertex colour - or the bump
     * alpha, or zero - feeds the stage's RASC/RASA input. The host always feeds the
     * one vertex colour it carries, so a batch that names Color1, AlphaBump or Zero
     * gets the wrong raster colour; recorded and printed so that is a measurement
     * rather than a guess (handover 5c.46 AP-O). */
    uint8_t colorchan;
} GxTevOrder;
static GxTevOrder s_tev_orders[16];

/* ---- TEV register file ---------------------------------------------------
 * Everything the pixel shader needs to evaluate the TEV stages lives here. The
 * registers themselves are written by the guest (BP 0xC0..0xDF combiners,
 * 0xE0..0xE7 colour registers, 0xF6..0xFD konst selectors, 0xF3 alpha test);
 * s_cur_tev_state is the deduplicated snapshot index handed to each draw batch.
 * See the layout notes in gx_pipeline.h - they are Dolphin's BPMemory.h. */
static uint32_t s_tev_comb_color[16];
static uint32_t s_tev_comb_alpha[16];
static uint32_t s_tev_kreg_ra[4];
static uint32_t s_tev_kreg_bg[4];
/* TEV colour registers C0..C2 (+ the fourth, which Dolphin uses as the initial value
 * of `prev`). Written through the same BP 0xE0..0xE7 registers as the konst
 * registers; TevReg::type (bit 23) decides which file the write belongs to. */
static uint32_t s_tev_creg_ra[4];
static uint32_t s_tev_creg_bg[4];
static uint32_t s_tev_ksel[8];
/* GX indirect texturing state (BP 0x06..0x0F, 0x10..0x1F, 0x25..0x27). Persists
 * across frames like the combiners, because it is BP (GPU) state: the guest
 * reprograms it, but a draw that does not is still drawn with the last values. */
static uint32_t s_ind_stage[GX_MAX_TEV_STAGES];
static uint32_t s_ind_iref;
static uint32_t s_ind_texscale[2];
static uint32_t s_ind_imask;
static uint32_t s_ind_mtx[9];
static uint8_t  s_num_ind_stages = 0;
static uint8_t  s_alpha_comp1 = 7;
static uint8_t  s_alpha_ref1 = 0;
static uint8_t  s_alpha_logic = 0;
static GxTevState s_tev_states[GX_MAX_TEV_STATES];
static uint16_t   s_tev_state_count = 0;
static uint16_t   s_cur_tev_state = 0;
static bool       s_tev_state_dirty = true;
/* Counters for TEV features this host does not evaluate, so a probe can say so
 * instead of the picture being silently wrong. */
static uint32_t s_tev_compare_stages = 0;   /* bias == 3 (compare mode) */

static float tev_reg_component(uint32_t raw) {
    /* 11-bit signed fixed point, 255 == 1.0 (GXSetTevColor / GXSetTevColorS10). */
    int32_t v = (int32_t)(raw & 0x7FF);
    if (v & 0x400) v -= 0x800;
    return (float)v / 255.0f;
}

static uint32_t tev_state_hash(const GxTevState* st) {
    const uint8_t* p = (const uint8_t*)st;
    uint32_t h = 2166136261u;
    for (size_t i = 0; i < sizeof(*st); i++) { h ^= p[i]; h *= 16777619u; }
    return h;
}

static void tev_state_recompute(void) {
    GxTevState st;
    memset(&st, 0, sizeof(st));
    st.num_stages = s_num_tev_stages;
    st.alpha_comp0 = s_alpha_comp0;
    st.alpha_comp1 = s_alpha_comp1;
    st.alpha_logic = s_alpha_logic;
    st.alpha_ref0 = s_alpha_ref0;
    st.alpha_ref1 = s_alpha_ref1;
    for (int i = 0; i < GX_MAX_TEV_STAGES; i++) {
        st.tex_enable[i] = s_tev_orders[i].enable ? 1 : 0;
        st.texmap[i] = s_tev_orders[i].texmap;
        st.texcoord[i] = s_tev_orders[i].texcoord;
        st.colorchan[i] = s_tev_orders[i].colorchan;
        st.combiner_color[i] = s_tev_comb_color[i];
        st.combiner_alpha[i] = s_tev_comb_alpha[i];
        st.kcsel[i] = (uint8_t)(((s_tev_ksel[i >> 1] >> ((i & 1) ? 14 : 4)) & 0x1F));
        st.kasel[i] = (uint8_t)(((s_tev_ksel[i >> 1] >> ((i & 1) ? 19 : 9)) & 0x1F));
    }
    for (int i = 0; i < 4; i++) {
        st.kreg_ra[i] = s_tev_kreg_ra[i];
        st.kreg_bg[i] = s_tev_kreg_bg[i];
        st.creg_ra[i] = s_tev_creg_ra[i];
        st.creg_bg[i] = s_tev_creg_bg[i];
    }
    for (int i = 0; i < 8; i++) st.ksel[i] = s_tev_ksel[i];

    st.num_ind_stages = s_num_ind_stages;
    for (int i = 0; i < GX_MAX_TEV_STAGES; i++) st.ind_stage[i] = s_ind_stage[i];
    st.ind_iref = s_ind_iref;
    st.ind_texscale[0] = s_ind_texscale[0];
    st.ind_texscale[1] = s_ind_texscale[1];
    st.ind_imask = s_ind_imask;
    for (int i = 0; i < 9; i++) st.ind_mtx[i] = s_ind_mtx[i];

    uint32_t h = tev_state_hash(&st);
    st._hash = h;
    for (uint32_t i = 0; i < s_tev_state_count; i++) {
        if (s_tev_states[i]._hash == h && memcmp(&s_tev_states[i], &st, sizeof(st)) == 0) {
            s_cur_tev_state = (uint16_t)i;
            s_tev_state_dirty = false;
            return;
        }
    }
    if (s_tev_state_count < GX_MAX_TEV_STATES) {
        s_tev_states[s_tev_state_count] = st;
        s_cur_tev_state = s_tev_state_count++;
    } else {
        /* Table full: reuse the last slot rather than pretending the state is new. */
        s_cur_tev_state = (uint16_t)(GX_MAX_TEV_STATES - 1);
    }
    s_tev_state_dirty = false;
}

// XF load buffer
static uint16_t s_xf_word_count = 0;
static uint16_t s_xf_target_addr = 0;
static uint8_t  s_xf_buf[1024];
static uint32_t s_xf_buf_pos = 0;

/* ---------------------------------------------------------------------------
 * XF transform unit state: lighting, normal matrices, texture matrices.
 *
 * The XF is the half of the GX pipeline between the FIFO and the TEV stage, and the
 * host used to implement only the position matrix and the projection matrix. That
 * meant every vertex reached the TEV stage carrying the *raw* CLR0 attribute (or
 * white when the batch supplies no colour, which is the normal case for lit 3D
 * geometry), so the TEV's RASC input was unlit. On hardware the two vertex colours
 * are the output of the per-channel lighting equation below, so the host rendered
 * every lit material at full brightness - handover 5c.19 measures the scene at
 * (76,70,62) against the reference's (23,25,18).
 *
 * Register layout and semantics are Dolphin's (VideoCommon/XFMemory.h,
 * VideoCommon/LightingShaderGen.cpp); the arithmetic is 8-bit fixed point exactly
 * as the hardware does it, including the `mat * (lacc + (lacc >> 7)) >> 8` rounding.
 * ------------------------------------------------------------------------- */

#define XF_MAX_LIGHTS 8

static uint32_t s_gx_frame_idx; /* defined below; needed by the frame-gated probes */

typedef struct {
    uint32_t color;           /* XF 0x600+16i+3, RGBA8 with R in bits 24..31 */
    float cosatt[3];          /* +4..+6 */
    float distatt[3];         /* +7..+9 */
    float pos[3];             /* +10..+12 (dpos) */
    float dir[3];             /* +13..+15 (ddir), normalised on use */
} XfLight;

static XfLight s_xf_lights[XF_MAX_LIGHTS];
static float s_xf_nrm_mtx[96];              /* XF 0x400..0x45f, 9 floats per matrix */
static uint32_t s_xf_amb_color[2];          /* XF 0x100a / 0x100b, RGBA8 */
static uint32_t s_xf_mat_color[2];          /* XF 0x100c / 0x100d */
static uint32_t s_xf_color_ctrl[2];         /* XF 0x100e / 0x100f, LitChannel */
static uint32_t s_xf_alpha_ctrl[2];         /* XF 0x1010 / 0x1011 */
static uint32_t s_xf_num_chan = 1;          /* XF 0x1009 */
static uint32_t s_xf_texmtx_info[8];        /* XF 0x1040..0x1047, TexMtxInfo */
static uint32_t s_xf_postmtx_info[8];       /* XF 0x1050..0x1057, PostMtxInfo */
static uint32_t s_xf_num_texgens = 0;       /* XF 0x103f */
static uint32_t s_xf_dualtex = 0;           /* XF 0x1012 */
static float s_xf_viewport[6];              /* XF 0x101a..0x101f, wd ht zRange x y farZ */
static float s_xf_post_mtx[256];             /* XF 0x500..0x5ff, 64 rows of float4 */
static uint8_t s_cp_tex_mtx[8];             /* CP 0x30/0x40, 6-bit tex matrix indices */

/* XF texture coordinate generation state, for the TEV stages that name texcoord 2..7.
 * The field layout is Dolphin's (VideoCommon/XFMemory.h TexMtxInfo); these accessors are
 * plain reads of XF state the pipeline already tracks, so nothing is duplicated. */
void gx_pipeline_get_texgen(int i, GxTexGenInfo* out) {
    if (!out) return;
    memset(out, 0, sizeof(*out));
    if (i < 0 || i > 7) return;
    uint32_t info = s_xf_texmtx_info[i], post = s_xf_postmtx_info[i];
    out->info = info;
    out->post_info = post;
    /* projection:1 (0 = ST, 1 = STQ), inputform:2 (0 = AB11, 1 = ABC1),
     * texgentype:4-6 (0 = Regular), sourcerow:7-11 (0 PosNorm, 1 Colors,
     * 2 BinormalT, 3 BinormalB, 4..11 Tex0..Tex7). */
    out->projection = (uint8_t)((info >> 1) & 1);
    out->inputform = (uint8_t)((info >> 2) & 1);
    out->texgentype = (uint8_t)((info >> 4) & 7);
    out->sourcerow = (uint8_t)((info >> 7) & 0x1F);
    out->mtx_index = s_cp_tex_mtx[i];
    out->post_index = (uint8_t)(post & 0x3F);
    out->post_normalize = (int)((post >> 8) & 1);
}

void gx_pipeline_get_tex_matrix(int mtx_index, float out[3][4]) {
    int m = (mtx_index / 3) & 63;
    memcpy(out, s_pos_matrices[m], sizeof(float) * 12);
}

void gx_pipeline_get_post_matrix(int index, float out[3][4]) {
    index &= 63;
    for (int r = 0; r < 3; r++)
        for (int c = 0; c < 4; c++)
            out[r][c] = s_xf_post_mtx[(index + r) * 4 + c];
}

/* XF 0x1012 bit 0: the dual texture transform (the post matrices) is enabled. */
int gx_pipeline_xf_dualtex(void) {
    return (int)(s_xf_dualtex & 1u);
}

/* TLS_XF_LIGHTING=1 enables the emulated lighting stage (default off until measured).
 * TLS_XF_NO_LIGHTING=1 forces it off for A/B runs on the same binary. */
static bool xf_lighting_enabled(void) {
    static int s_on = -1;
    if (s_on < 0) {
        const char* e = getenv("TLS_XF_LIGHTING");
        s_on = (e && *e && *e != '0') ? 1 : 0;
        if (getenv("TLS_XF_NO_LIGHTING")) s_on = 0;
    }
    return s_on != 0;
}

/* TLS_XF_PROBE=<frame> dumps the lighting/texture-matrix file for one frame. */
static bool xf_probe_active(void) {
    static int s_on = -1;
    static uint32_t s_frame = 0;
    if (s_on < 0) {
        const char* e = getenv("TLS_XF_PROBE");
        s_on = e ? 1 : 0;
        if (e) s_frame = (uint32_t)strtoul(e, NULL, 0);
    }
    return s_on && s_gx_frame_idx == s_frame;
}

// CP load buffer
static uint8_t  s_cp_buf[5];
static uint32_t s_cp_buf_pos = 0;

// Display list header buffer
static uint8_t  s_dl_buf[8];
static uint32_t s_dl_buf_pos = 0;

// Temporary vertex assembly buffer
static GxVertex s_prim_temp_verts[2048];
static uint16_t s_prim_temp_count = 0;

// Intermediate byte accumulation for reading vertex attributes
static uint8_t s_attr_buf[256];
static uint32_t s_attr_buf_pos = 0;

static inline float read_f32_be(const uint8_t* p) {
    union { uint32_t u; float f; } val;
    val.u = (uint32_t)((p[0] << 24) | (p[1] << 16) | (p[2] << 8) | p[3]);
    return val.f;
}

static inline int16_t read_s16_be(const uint8_t* p) {
    return (int16_t)((p[0] << 8) | p[1]);
}

static inline uint16_t read_u16_be(const uint8_t* p) {
    return (uint16_t)((p[0] << 8) | p[1]);
}

static inline uint32_t read_u32_be(const uint8_t* p) {
    return (uint32_t)((p[0] << 24) | (p[1] << 16) | (p[2] << 8) | p[3]);
}

static inline bool is_valid_matrix(const float mtx[3][4]) {
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 4; c++) {
            float val = mtx[r][c];
            if (isnan(val) || isinf(val) || fabsf(val) > 1e8f) {
                return false;
            }
        }
    }
    return true;
}

static inline uint32_t get_attr_elem_size(uint8_t comp_type) {
    switch (comp_type) {
        case GX_COMP_U8:
        case GX_COMP_S8:  return 1;
        case GX_COMP_U16:
        case GX_COMP_S16: return 2;
        case GX_COMP_F32:
        default:          return 4;
    }
}

static inline uint32_t get_vtx_attr_size(uint8_t fmt, uint8_t attr) {
    uint8_t type = s_vtx_desc[attr].type;
    if (type == GX_ATTR_NONE) return 0;
    if (type == GX_ATTR_INDEX8) return 1;
    if (type == GX_ATTR_INDEX16) return 2;
    if (type == GX_ATTR_DIRECT) {
        if (attr >= GX_VA_PNMTXIDX && attr <= 8) { // Matrix indices (PNMTXIDX, TEX0MTXIDX..TEX7MTXIDX)
            return 1;
        }
        if (attr == GX_VA_POS) {
            int count = (s_vtx_fmt[fmt][GX_VA_POS].comp_cnt == 0) ? 2 : 3;
            return (uint32_t)(count * get_attr_elem_size(s_vtx_fmt[fmt][GX_VA_POS].comp_type));
        }
        if (attr == GX_VA_NRM) {
            int count = (s_vtx_fmt[fmt][GX_VA_NRM].comp_cnt == 2) ? 9 : 3;
            return (uint32_t)(count * get_attr_elem_size(s_vtx_fmt[fmt][GX_VA_NRM].comp_type));
        }
        if (attr == GX_VA_CLR0 || attr == GX_VA_CLR1) {
            uint8_t clr_type = s_vtx_fmt[fmt][attr].comp_type;
            return (clr_type == 0 || clr_type == 3) ? 2 : ((clr_type == 1 || clr_type == 4) ? 3 : 4);
        }
        if (attr >= GX_VA_TEX0 && attr <= 20) { // TEX0 .. TEX7
            int count = (s_vtx_fmt[fmt][attr].comp_cnt == 0) ? 1 : 2;
            return (uint32_t)(count * get_attr_elem_size(s_vtx_fmt[fmt][attr].comp_type));
        }
    }
    return 0;
}

static inline float parse_comp_value(const uint8_t* p, uint8_t comp_type, uint8_t frac, uint32_t* advance) {
    float scale = (frac > 0) ? (1.0f / (float)(1 << frac)) : 1.0f;
    switch (comp_type) {
        case GX_COMP_U8:
            *advance = 1;
            return (float)p[0] * scale;
        case GX_COMP_S8:
            *advance = 1;
            return (float)(int8_t)p[0] * scale;
        case GX_COMP_U16:
            *advance = 2;
            return (float)read_u16_be(p) * scale;
        case GX_COMP_S16:
            *advance = 2;
            return (float)read_s16_be(p) * scale;
        case GX_COMP_F32:
        default:
            *advance = 4;
            return read_f32_be(p);
    }
}

void gx_pipeline_set_efb_copy_hook(GxEfbCopyFunc func) {
    s_efb_copy_hook = func;
}

void gx_pipeline_set_efb_copy_deferred(int on) {
    s_efb_copy_deferred = (on != 0);
    s_pending_copy_count = 0;
}

int gx_pipeline_efb_copy_is_deferred(void) { return s_efb_copy_deferred ? 1 : 0; }

void gx_pipeline_set_pointer_resolver(GxResolvePtrFunc func) {
    s_resolve_ptr = func;
}

/* Per-display-list dump (two lines each, thousands per frame). TLS_PIPELINE_TRACE=1. */
static int tls_pipeline_trace_enabled(void) {
    static int s_on = -1;
    if (s_on < 0) s_on = getenv("TLS_PIPELINE_TRACE") ? 1 : 0;
    return s_on;
}

void gx_pipeline_init(void) {
    memset(s_vtx_desc, 0, sizeof(s_vtx_desc));
    memset(s_vtx_fmt, 0, sizeof(s_vtx_fmt));
    memset(s_arrays, 0, sizeof(s_arrays));
    memset(s_pos_matrices, 0, sizeof(s_pos_matrices));

    // Default identity projection
    memset(s_proj_matrix, 0, sizeof(s_proj_matrix));
    s_proj_matrix[0][0] = 1.0f;
    s_proj_matrix[1][1] = 1.0f;
    s_proj_matrix[2][2] = 1.0f;
    s_proj_matrix[3][3] = 1.0f;

    // Default identity position matrices
    for (int i = 0; i < 64; i++) {
        s_pos_matrices[i][0][0] = 1.0f;
        s_pos_matrices[i][1][1] = 1.0f;
        s_pos_matrices[i][2][2] = 1.0f;
    }

    // Default POS format: XYZ float
    for (int f = 0; f < 8; f++) {
        s_vtx_fmt[f][GX_VA_POS].comp_cnt = 1; // XYZ
        s_vtx_fmt[f][GX_VA_POS].comp_type = GX_COMP_F32;
        s_vtx_fmt[f][GX_VA_TEX0].comp_cnt = 1; // ST
        s_vtx_fmt[f][GX_VA_TEX0].comp_type = GX_COMP_F32;
        s_vtx_fmt[f][GX_VA_CLR0].comp_cnt = 1; // RGBA
        s_vtx_fmt[f][GX_VA_CLR0].comp_type = GX_COMP_U8;
    }

    s_vertex_count = 0;
    s_dropped_vertices = 0;
    s_primitive_count = 0;
    s_draw_batch_count = 0;
    s_pending_copy_count = 0;
    s_batch_barrier = false;
    /* Scissor state does NOT persist across frames the way texture/TEV state does in this
     * pipeline: a frame that never writes BP 0x20/0x21 draws with the full target, which is
     * the shipping behaviour. The backend applies this rect by default since 5c.46 AP-AR
     * (AP-AP's TLS_SCISSOR=1 diagnostic is what proved the decode; the application is now
     * unconditional, with TLS_NO_SCISSOR=1 as the escape hatch - see recomp/gfx_d3d11.c). */
    s_scissor[0] = 0;
    s_scissor[1] = 0;
    s_scissor[2] = 639;
    s_scissor[3] = 447;
    s_scissor_valid = false;
    s_parser_state = GX_STATE_IDLE;
    s_current_pnm_idx = 0;
    s_default_pnm_idx = 0;
    s_current_pnm_raw = 0;
    s_default_pnm_raw = 0;
    /* Identity normal matrices: a batch that never received 0x400 writes must not light
     * against a zero matrix (which would make every normal Z and the scene black). */
    memset(s_xf_nrm_mtx, 0, sizeof(s_xf_nrm_mtx));
    for (int i = 0; i + 8 < 96; i += 9) {
        s_xf_nrm_mtx[i + 0] = 1.0f;
        s_xf_nrm_mtx[i + 4] = 1.0f;
        s_xf_nrm_mtx[i + 8] = 1.0f;
    }
    memset(s_xf_lights, 0, sizeof(s_xf_lights));
    s_xf_amb_color[0] = s_xf_amb_color[1] = 0xFFFFFFFFu;
    s_xf_mat_color[0] = s_xf_mat_color[1] = 0xFFFFFFFFu;
    s_xf_color_ctrl[0] = s_xf_color_ctrl[1] = 0;
    s_xf_alpha_ctrl[0] = s_xf_alpha_ctrl[1] = 0;
    s_xf_num_chan = 1;
    s_xf_num_texgens = 0;
    s_xf_dualtex = 0;
    memset(s_cp_tex_mtx, 0, sizeof(s_cp_tex_mtx));
    for (int i = 0; i < 8; i++) {
        s_xf_lights[i].color = 0xFFFFFFFFu;
    }
    s_active_tex_map = 0;
    s_active_tex_coord = 0;
    s_tev_tex_enable = true;
    s_num_tev_stages = 1;
    memset(s_tev_orders, 0, sizeof(s_tev_orders));
    s_tev_orders[0].enable = true;
    /* TEV snapshots are indexed per frame: batches never outlive their frame, and
     * bounding the table to one frame's worth of states keeps it from saturating. */
    s_tev_state_count = 0;
    s_cur_tev_state = 0;
    s_tev_state_dirty = true;
}

static uint32_t s_gx_frame_idx = 0;

/* Per-BP-register and per-batch dump that used to be hardcoded to frame 900 in two
 * places (thousands of synchronous prints, a frame-rate killer and a hardcoded
 * investigation leftover). TLS_F900_PROBE=1 enables it, TLS_F900_FRAME=<n> moves it. */
static bool gx_f900_probe_active(void) {
    static int s_on = -1;
    static uint32_t s_frame = 900;
    if (s_on < 0) {
        const char* e = getenv("TLS_F900_PROBE");
        const char* f = getenv("TLS_F900_FRAME");
        s_on = e ? 1 : 0;
        if (f) s_frame = (uint32_t)strtoul(f, NULL, 0);
    }
    return s_on && s_gx_frame_idx == s_frame;
}

/* TLS_TEV_WORD_PROBE=<f0>[:<f1>] - the guest's OWN words, in order.
 *
 * Every other TEV instrument in this project reads the pipeline's *decoded snapshot*
 * of the combiners, so a decode bug and a guest that really programmed those words
 * look identical. This probe prints the raw BP writes in the TEV register range
 * (GEN_MODE, TEVORDER, the combiners, the colour/konst registers, alpha test and the
 * konst/swap words 0xF6..0xFD) as they arrive, interleaved with a marker for each draw
 * batch that is opened, so the words a draw actually ran with can be read off the
 * stream instead of inferred. Narrow by construction: one line per state write plus one
 * per batch, in a frame window the caller chooses.
 * This is what found the crest mask (BP 0xF8/0xF9 = 0x018060 immediately before the
 * crest draw - handover 5c.46 AP-N). */
static uint32_t s_tev_word_seq = 0;
static bool gx_tev_word_probe_active(void) {
    static int s_on = -1;
    static uint32_t s_f0 = 0, s_f1 = 0;
    if (s_on < 0) {
        const char* e = getenv("TLS_TEV_WORD_PROBE");
        s_on = e ? 1 : 0;
        if (e) {
            unsigned a = 0, b = 0;
            int n = sscanf(e, "%u:%u", &a, &b);
            s_f0 = a;
            s_f1 = (n == 2) ? b : a;
        }
    }
    if (!s_on) return false;
    uint32_t f = (uint32_t)(g_runner_current_frame < 0 ? 0 : g_runner_current_frame);
    return f >= s_f0 && f <= s_f1;
}

void gx_pipeline_begin_frame(void) {
    s_gx_frame_idx++;
    s_vertex_count = 0;
    s_dropped_vertices = 0;
    s_primitive_count = 0;
    s_draw_batch_count = 0;
    if (s_pending_copy_overflow) {
        printf("[EfbCopy] frame %u dropped %u copies (queue is %d entries)\n",
               s_gx_frame_idx, s_pending_copy_overflow, GX_MAX_PENDING_COPIES);
        fflush(stdout);
        s_pending_copy_overflow = 0;
    }
    s_pending_copy_count = 0;
    s_batch_barrier = false;
    s_parser_state = GX_STATE_IDLE;
    s_active_tex_map = 0;
    s_active_tex_coord = 0;
    s_tev_tex_enable = true;
    s_num_tev_stages = 1;
    /* GEN_MODE re-states the indirect-stage count every frame; resetting it here is
     * the same convention as the stage count above (a frame that programs no indirect
     * stages must not inherit the previous frame's). The raw indirect words, the
     * IREF/texscale registers and the offset matrices are NOT reset - they are
     * ordinary BP state that persists until the guest rewrites them. */
    s_num_ind_stages = 0;
    s_current_pnm_idx = 0;
    s_default_pnm_idx = 0;
    memset(s_tev_orders, 0, sizeof(s_tev_orders));
    s_tev_orders[0].enable = true;
    s_tev_state_count = 0;
    s_cur_tev_state = 0;
    s_tev_state_dirty = true;
    s_tev_compare_stages = 0;
}

static void xf_probe_dump(void) {
    printf("[XF PROBE frame %u] numChan=%u numTexGens=%u dualTex=%u\n",
           s_gx_frame_idx, s_xf_num_chan, s_xf_num_texgens, s_xf_dualtex);
    for (int c = 0; c < 2; c++) {
        uint32_t cc = s_xf_color_ctrl[c], ac = s_xf_alpha_ctrl[c];
        printf("  chan%d colour ctrl=0x%08X lit=%u matsrc=%u ambsrc=%u mask=0x%02X diff=%u attn=%u\n",
               c, cc, (cc >> 1) & 1, cc & 1, (cc >> 6) & 1,
               (unsigned)(((cc >> 2) & 0xF) | (((cc >> 11) & 0xF) << 4)),
               (unsigned)((cc >> 7) & 3), (unsigned)((cc >> 9) & 3));
        printf("  chan%d alpha  ctrl=0x%08X lit=%u matsrc=%u ambsrc=%u mask=0x%02X diff=%u attn=%u\n",
               c, ac, (ac >> 1) & 1, ac & 1, (ac >> 6) & 1,
               (unsigned)(((ac >> 2) & 0xF) | (((ac >> 11) & 0xF) << 4)),
               (unsigned)((ac >> 7) & 3), (unsigned)((ac >> 9) & 3));
        printf("  chan%d amb=0x%08X mat=0x%08X\n", c, s_xf_amb_color[c], s_xf_mat_color[c]);
    }
    for (int i = 0; i < XF_MAX_LIGHTS; i++) {
        const XfLight* L = &s_xf_lights[i];
        printf("  light%d col=0x%08X cosatt=(%.3f,%.3f,%.3f) distatt=(%.3f,%.3f,%.3f)"
               " pos=(%.2f,%.2f,%.2f) dir=(%.3f,%.3f,%.3f)\n",
               i, L->color, L->cosatt[0], L->cosatt[1], L->cosatt[2],
               L->distatt[0], L->distatt[1], L->distatt[2],
               L->pos[0], L->pos[1], L->pos[2], L->dir[0], L->dir[1], L->dir[2]);
    }
    for (int i = 0; i < 8; i++) {
        printf("  texgen%d info=0x%08X post=0x%08X mtxidx=%u\n",
               i, s_xf_texmtx_info[i], s_xf_postmtx_info[i], s_cp_tex_mtx[i]);
    }
    /* The matrices the texgen would use. If these are identity the missing texcoord
     * transform cannot change any sample, which decides whether implementing it is
     * the next useful step (handover 5c.20). */
    for (int i = 0; i < 2; i++) {
        int mi = s_cp_tex_mtx[i] / 3;
        printf("  texmtx[%d] (pos matrix %d): [%.4f %.4f %.4f %.4f] [%.4f %.4f %.4f %.4f] [%.4f %.4f %.4f %.4f]\n",
               i, mi,
               s_pos_matrices[mi][0][0], s_pos_matrices[mi][0][1], s_pos_matrices[mi][0][2], s_pos_matrices[mi][0][3],
               s_pos_matrices[mi][1][0], s_pos_matrices[mi][1][1], s_pos_matrices[mi][1][2], s_pos_matrices[mi][1][3],
               s_pos_matrices[mi][2][0], s_pos_matrices[mi][2][1], s_pos_matrices[mi][2][2], s_pos_matrices[mi][2][3]);
    }
    {
        int pi = (int)(s_xf_postmtx_info[0] & 0x3F);
        printf("  postmtx[%d] (normalize=%d): [%.4f %.4f %.4f %.4f] [%.4f %.4f %.4f %.4f] [%.4f %.4f %.4f %.4f]\n",
               pi, (int)((s_xf_postmtx_info[0] >> 8) & 1),
               s_xf_post_mtx[pi * 4 + 0], s_xf_post_mtx[pi * 4 + 1], s_xf_post_mtx[pi * 4 + 2], s_xf_post_mtx[pi * 4 + 3],
               s_xf_post_mtx[(pi + 1) * 4 + 0], s_xf_post_mtx[(pi + 1) * 4 + 1], s_xf_post_mtx[(pi + 1) * 4 + 2], s_xf_post_mtx[(pi + 1) * 4 + 3],
               s_xf_post_mtx[(pi + 2) * 4 + 0], s_xf_post_mtx[(pi + 2) * 4 + 1], s_xf_post_mtx[(pi + 2) * 4 + 2], s_xf_post_mtx[(pi + 2) * 4 + 3]);
    }
    const float* nm = &s_xf_nrm_mtx[3 * (s_default_pnm_raw & 31)];
    printf("  nrmmtx[%u] = (%.3f,%.3f,%.3f)(%.3f,%.3f,%.3f)(%.3f,%.3f,%.3f)\n",
           s_default_pnm_raw, nm[0], nm[1], nm[2], nm[3], nm[4], nm[5], nm[6], nm[7], nm[8]);
    printf("  viewport wd=%.3f ht=%.3f zRange=%.3f x=%.3f y=%.3f farZ=%.3f\n",
           s_xf_viewport[0], s_xf_viewport[1], s_xf_viewport[2],
           s_xf_viewport[3], s_xf_viewport[4], s_xf_viewport[5]);
    /* Batch-level picture: which batches are lit, and which texcoords they can supply.
     * This is what decides whether a lighting stage can change the frame at all. */
    uint32_t lit_batches = 0, lit_vertices = 0, total_vertices = 0, no_uv0 = 0;
    for (uint32_t i = 0; i < s_draw_batch_count; i++) {
        const GxDrawBatch* b = &s_draw_batches[i];
        total_vertices += b->vertex_count;
        if ((b->xf_ctrl0 >> 1) & 1) {
            lit_batches++;
            lit_vertices += b->vertex_count;
        }
        if (!(b->texcoord_mask & 1)) no_uv0++;
    }
    printf("  batches=%u vertices=%u lit_batches=%u lit_vertices=%u batches_without_uv0=%u\n",
           s_draw_batch_count, total_vertices, lit_batches, lit_vertices, no_uv0);
    for (uint32_t i = 0; i < s_draw_batch_count && i < 64; i++) {
        const GxDrawBatch* b = &s_draw_batches[i];
        printf("  b%u: vtx=%u..%u tex=%d coord_mask=0x%02X ctrl0=0x%08X lit=%u ntexgen=%u\n",
               i, b->vertex_offset, b->vertex_offset + b->vertex_count - 1,
               b->has_texture ? 1 : 0, b->texcoord_mask, b->xf_ctrl0,
               (unsigned)((b->xf_ctrl0 >> 1) & 1), b->xf_num_texgens);
    }
    fflush(stdout);
}

void gx_pipeline_end_frame(int at_present) {
    if (xf_probe_active()) xf_probe_dump();
    /* TLS_GX_CAPTURE closes the frame here: this is the point the backend presents, i.e.
     * after every GX command the guest issued for the frame has been consumed. */
    if (tls_gxcap_on) tls_gxcap_frame_end((uint32_t)g_runner_current_frame);
    /* The aurora feed needs the distinction the capture does not: a GXDrawDone flush also lands
     * here (gfx_d3d11.c's flush-only path), so `at_present` keeps aurora's frame boundary at the
     * guest's own present and lets the flush bytes accumulate into the same frame. 1 and 2 are
     * both presents (with / without an XFB copy) - see the declaration for why the feed needs
     * that apart. */
    tls_aurora_frame_end((uint32_t)g_runner_current_frame, at_present);
}

void gx_pipeline_set_vtx_desc(uint32_t attr, uint32_t type) {
    if (attr < 32) {
        s_vtx_desc[attr].type = (uint8_t)type;
    }
}

void gx_pipeline_set_vtx_attr_fmt(uint32_t fmt, uint32_t attr, uint32_t comp_cnt, uint32_t comp_type, uint8_t frac) {
    if (fmt < 8 && attr < 32) {
        s_vtx_fmt[fmt][attr].comp_cnt = (uint8_t)comp_cnt;
        s_vtx_fmt[fmt][attr].comp_type = (uint8_t)comp_type;
        s_vtx_fmt[fmt][attr].frac = frac;
    }
}

void gx_pipeline_set_array(uint32_t attr, const void* base_ptr, uint8_t stride) {
    if (attr < 32) {
        s_arrays[attr].base_ptr = base_ptr;
        s_arrays[attr].stride = stride;
    }
}

void gx_pipeline_set_projection(const float mtx[4][4], bool is_perspective) {
    memcpy(s_proj_matrix, mtx, sizeof(s_proj_matrix));
    s_proj_is_perspective = is_perspective;
}

void gx_pipeline_load_pos_matrix(uint32_t id, const float mtx[3][4]) {
    if (id < 64) {
        memcpy(s_pos_matrices[id], mtx, sizeof(s_pos_matrices[id]));
    }
}

uint32_t gx_pipeline_get_dropped_vertices(void) {
    return s_dropped_vertices;
}

const GxVertex* gx_pipeline_get_vertices(uint32_t* out_count) {
    if (out_count) *out_count = s_vertex_count;
    return s_vertex_batch;
}

const GxDrawBatch* gx_pipeline_get_draw_batches(uint32_t* out_count) {
    if (out_count) *out_count = s_draw_batch_count;
    return s_draw_batches;
}

const GxTevState* gx_pipeline_get_tev_state(uint16_t index) {
    if (index >= s_tev_state_count) return s_tev_state_count ? &s_tev_states[0] : NULL;
    return &s_tev_states[index];
}

uint32_t gx_pipeline_get_tev_state_count(void) {
    return s_tev_state_count;
}

/* Diagnostic decode of one TEV state (TLS_TEV_PROBE). Names are Dolphin's. */
static const char* const k_color_arg_names[16] = {
    "prev.rgb", "prev.aaa", "c0.rgb",  "c0.aaa",  "c1.rgb", "c1.aaa", "c2.rgb",    "c2.aaa",
    "tex.rgb",  "tex.aaa",  "ras.rgb", "ras.aaa", "ONE",    "HALF",   "konst.rgb", "ZERO",
};
static const char* const k_alpha_arg_names[8] = {
    "prev", "c0", "c1", "c2", "tex", "ras", "konst", "ZERO",
};
static const char* const k_scale_names[4] = { "1", "2", "4", "0.5" };
static const char* const k_dest_names[4] = { "prev", "c0", "c1", "c2" };
static const char* const k_konst_names[32] = {
    "1", "7/8", "3/4", "5/8", "1/2", "3/8", "1/4", "1/8",
    "?", "?", "?", "?", "K0", "K1", "K2", "K3",
    "K0.r", "K1.r", "K2.r", "K3.r", "K0.g", "K1.g", "K2.g", "K3.g",
    "K0.b", "K1.b", "K2.b", "K3.b", "K0.a", "K1.a", "K2.a", "K3.a",
};

void gx_pipeline_print_tev_state(uint16_t index) {
    const GxTevState* st = gx_pipeline_get_tev_state(index);
    if (!st) { printf("   [tev] <none>\n"); return; }
    printf("   [tev #%u] stages=%u alphaTest=(%u,%u,%u,%u,log=%u) compareStages=%u\n",
           index, st->num_stages, st->alpha_comp0, st->alpha_ref0,
           st->alpha_comp1, st->alpha_ref1, st->alpha_logic, s_tev_compare_stages);
    for (int i = 0; i < 4; i++) {
        printf("   [tev] K%d = (%9.4f %9.4f %9.4f %9.4f) raw ra=0x%06X bg=0x%06X\n", i,
               tev_reg_component(st->kreg_ra[i]), tev_reg_component(st->kreg_bg[i] >> 12),
               tev_reg_component(st->kreg_bg[i]), tev_reg_component(st->kreg_ra[i] >> 12),
               st->kreg_ra[i], st->kreg_bg[i]);
    }
    for (int i = 0; i < 4; i++) {
        printf("   [tev] C%d = (%9.4f %9.4f %9.4f %9.4f) raw ra=0x%06X bg=0x%06X\n", i,
               tev_reg_component(st->creg_ra[i]), tev_reg_component(st->creg_bg[i] >> 12),
               tev_reg_component(st->creg_bg[i]), tev_reg_component(st->creg_ra[i] >> 12),
               st->creg_ra[i], st->creg_bg[i]);
    }
    for (int i = 0; i < (int)st->num_stages && i < 8; i++) {
        uint32_t c = st->combiner_color[i], a = st->combiner_alpha[i];
        /* Swap tables: BP 0xF6..0xFD, two TevKSel words per table (R/G then B/A), and
         * the ALPHA combiner's tswap:2-3 / rswap:0-1 pick one for the texture sample
         * and the raster colour. Printed because a two-texture "ink plate" is only
         * explicable through them: alpha 255 textures become masks by mapping A onto
         * the texture's red channel (handover 5c.46 AP-N). */
        uint32_t tsid = (a >> 2) & 3, rsid = a & 3;
        uint32_t trg = st->ksel[tsid * 2], tba = st->ksel[tsid * 2 + 1];
        uint32_t rrg = st->ksel[rsid * 2], rba = st->ksel[rsid * 2 + 1];
        printf("   [tev] st%d tex=%d map=%u coord=%u chan=%u | rgb: %s %s %s %s bias=%u op=%u clamp=%u scale=%s dest=%s kc=%s raw=0x%08X\n",
               i, st->tex_enable[i], st->texmap[i], st->texcoord[i], st->colorchan[i],
               k_color_arg_names[(c >> 12) & 0xF], k_color_arg_names[(c >> 8) & 0xF],
               k_color_arg_names[(c >> 4) & 0xF], k_color_arg_names[c & 0xF],
               (c >> 16) & 3, (c >> 18) & 1, (c >> 19) & 1,
               k_scale_names[(c >> 20) & 3], k_dest_names[(c >> 22) & 3],
               k_konst_names[st->kcsel[i] & 0x1F], c);
        /* BP 0xC1 is Dolphin `TevStageCombiner::AlphaCombiner` (VideoCommon/BPMemory.h,
         * fetched and quoted here because this decoder was wrong for three sessions):
         *   rswap:0-1 tswap:2-3   d:4-6 c:7-9 b:10-12 a:13-15
         *   bias:16-17 op:18 clamp:19 scale:20-21 dest:22-23
         * i.e. the four 3-bit arguments start at bit 4, NOT at bit 0, because the two swap
         * table indices occupy bits 0..3 - the same positions `tsid`/`rsid` above already
         * read. The old decode here used 9/6/3/0 with the control bits at 12/14/15/16/18,
         * which is the layout *without* the swap fields: every printed `[tev] alpha :`
         * line named the wrong four arguments and the wrong bias/dest (measured on the
         * title frame's b18, raw 0x0008F2F0: the true decode is
         * `alpha: ZERO tex ras ZERO bias=0 op=0 clamp=1 scale=1 dest=prev`, the old one
         * printed `c0 c2 konst prev bias=3 dest=c1`). The PIXEL SHADER
         * (tools/compile_shaders.py) has always used the correct 13/10/7/4 layout, so this
         * is an instrument bug only - the picture does not change - but it invalidated
         * every alpha-stage argument read off this probe, including AP-AV addendum 4's
         * "the glow chain's alpha dests are c1,c1,c1", which is what a reverted experiment
         * was built on. Cross-check: `TLS_TEV_UNIFORM` prints the same raw words, and
         * running both on one frame is what exposes a mismatch. */
        printf("   [tev]     alpha : %s %s %s %s bias=%u op=%u clamp=%u scale=%s dest=%s ka=%s raw=0x%08X\n",
               k_alpha_arg_names[(a >> 13) & 7], k_alpha_arg_names[(a >> 10) & 7],
               k_alpha_arg_names[(a >> 7) & 7], k_alpha_arg_names[(a >> 4) & 7],
               (a >> 16) & 3, (a >> 18) & 1, (a >> 19) & 1,
               k_scale_names[(a >> 20) & 3], k_dest_names[(a >> 22) & 3],
               k_konst_names[st->kasel[i] & 0x1F], a);
        printf("   [tev]     swap : tex table %u [R<-ch%u G<-ch%u B<-ch%u A<-ch%u] "
               "ras table %u [R<-ch%u G<-ch%u B<-ch%u A<-ch%u]\n",
               tsid, trg & 3, (trg >> 2) & 3, tba & 3, (tba >> 2) & 3,
               rsid, rrg & 3, (rrg >> 2) & 3, rba & 3, (rba >> 2) & 3);
    }
    /* Indirect texturing: the whole reason a 3D batch cannot be drawn at its
     * unperturbed coordinate (handover 5c.46 AP-O). Printed unconditionally because
     * "this batch has no indirect stage" is itself the measurement. */
    printf("   [ind] numindstages=%u (GEN_MODE 16..18) iref=0x%06X imask=0x%06X "
           "ss0=0x%06X ss1=0x%06X\n",
           st->num_ind_stages, st->ind_iref, st->ind_imask,
           st->ind_texscale[0], st->ind_texscale[1]);
    for (int s = 0; s < 4; s++) {
        uint32_t raw = st->ind_stage[s];
        GxIndStage d = gx_ind_decode(raw);
        /* The indirect stage a TEV stage consumes is `bt`, and THAT is the index into
         * RAS1_IREF - printing IREF[s] is wrong whenever bt != s. */
        printf("   [ind] st%d texind=0x%06X %s bt=%u->%s isactive=%d map=%u coord=%u "
               "fmt=%u bias=%u bs=%u mtxidx=%u mtxid=%u sw=%u tw=%u utclod=%d addprev=%d\n",
               s, raw, st->num_ind_stages > (uint8_t)s ? "on " : "off",
               d.bt, d.bt < 4 ? "indstage" : "?", (int)gx_ind_is_active(raw),
               gx_ind_iref_map(st->ind_iref, d.bt & 3), gx_ind_iref_coord(st->ind_iref, d.bt & 3),
               d.fmt, d.bias, d.bs, d.matrix_index, d.matrix_id, d.sw, d.tw,
               (int)d.lb_utclod, (int)d.fb_addprev);
    }
    for (int m = 0; m < 3; m++) {
        int row[2][3], shift = 0;
        gx_ind_matrix(st->ind_mtx, m, row, &shift);
        printf("   [ind] mtx%d raw=0x%06X/0x%06X/0x%06X row0=(%d %d %d) row1=(%d %d %d) "
               "shift=%d (2^-(17-s), s=%d)\n",
               m, st->ind_mtx[m * 3], st->ind_mtx[m * 3 + 1], st->ind_mtx[m * 3 + 2],
               row[0][0], row[0][1], row[0][2], row[1][0], row[1][1], row[1][2],
               shift, 17 - shift);
    }
}

uint32_t gx_pipeline_get_primitive_count(void) {
    return s_primitive_count;
}

uint32_t gx_pipeline_get_vertex_count(void) {
    return s_vertex_count;
}

const GxTextureUnit* gx_pipeline_get_texture(uint32_t unit) {
    if (unit < 8) return &s_tex_units[unit];
    return NULL;
}

void gx_pipeline_clear_texture_dirty(uint32_t unit) {
    if (unit < 8) s_tex_units[unit].dirty = false;
}

/* --- XF lighting ---------------------------------------------------------- *
 * Dolphin's GenerateLightShader / GenerateLightingShaderHeader, ported to scalar C.
 * Everything is 8-bit fixed point: materials and ambient colours are RGBA8 registers,
 * the accumulator is int4 clamped to 0..255, and the result is the hardware's
 * `mat * (lacc + (lacc >> 7)) >> 8` (i.e. mat * lacc / 255 with rounding). */

static inline float xf_dot3(const float* a, const float* b) {
    return a[0] * b[0] + a[1] * b[1] + a[2] * b[2];
}

static inline void xf_normalize3(float* v) {
    float len2 = v[0] * v[0] + v[1] * v[1] + v[2] * v[2];
    if (len2 <= 0.0f || isnan(len2)) return;
    float inv = 1.0f / sqrtf(len2);
    v[0] *= inv; v[1] *= inv; v[2] *= inv;
}

static inline float xf_roundf(float v) {
    return (v >= 0.0f) ? floorf(v + 0.5f) : ceilf(v - 0.5f);
}

static inline int xf_clampi(int v, int lo, int hi) {
    return v < lo ? lo : (v > hi ? hi : v);
}

/* Decode an RGBA8 XF colour word (R in bits 24..31). */
static inline void xf_unpack_rgba8(uint32_t w, float out[4]) {
    out[0] = (float)((w >> 24) & 0xFF);
    out[1] = (float)((w >> 16) & 0xFF);
    out[2] = (float)((w >> 8) & 0xFF);
    out[3] = (float)(w & 0xFF);
}

/* One light's contribution, from GenerateLightShader(). Adds into lacc[]. */
static void xf_light_accumulate(int index, int diffusefunc, int attnfunc,
                               const float pos[3], const float nrm[3],
                               int lacc[4], bool alpha_only) {
    const XfLight* L = &s_xf_lights[index];
    float ldir[3] = { L->pos[0] - pos[0], L->pos[1] - pos[1], L->pos[2] - pos[2] };
    float attn = 1.0f;
    float dist = 0.0f;

    switch (attnfunc) {
    case 0: /* None */
    case 2: /* Dir */
        xf_normalize3(ldir);
        attn = 1.0f;
        break;
    case 1: { /* Spec: point light attenuation */
        xf_normalize3(ldir);
        float ndl = xf_dot3(nrm, ldir);
        float dir[3] = { L->dir[0], L->dir[1], L->dir[2] };
        xf_normalize3(dir);
        attn = (ndl >= 0.0f) ? fmaxf(0.0f, xf_dot3(nrm, dir)) : 0.0f;
        float cosatt[3] = { L->cosatt[0], L->cosatt[1], L->cosatt[2] };
        float distatt[3] = { L->distatt[0], L->distatt[1], L->distatt[2] };
        if (diffusefunc != 0) xf_normalize3(distatt);
        float v[3] = { 1.0f, attn, attn * attn };
        float num = xf_dot3(cosatt, v);
        float den = xf_dot3(distatt, v);
        attn = fmaxf(0.0f, num) / den;
        break;
    }
    case 3: { /* Spot */
        float dist2 = xf_dot3(ldir, ldir);
        dist = sqrtf(dist2);
        if (dist > 0.0f) { ldir[0] /= dist; ldir[1] /= dist; ldir[2] /= dist; }
        float dir[3] = { L->dir[0], L->dir[1], L->dir[2] };
        xf_normalize3(dir);
        attn = fmaxf(0.0f, xf_dot3(ldir, dir));
        float num = fmaxf(0.0f, L->cosatt[0] + L->cosatt[1] * attn + L->cosatt[2] * attn * attn);
        float den = L->distatt[0] + L->distatt[1] * dist + L->distatt[2] * dist2;
        attn = num / den;
        break;
    }
    default:
        break;
    }

    float col[4];
    xf_unpack_rgba8(L->color, col);

    if (diffusefunc == 0) { /* None: no normal term */
        if (alpha_only) {
            lacc[3] += (int)xf_roundf(attn * col[3]);
        } else {
            for (int c = 0; c < 3; c++) lacc[c] += (int)xf_roundf(attn * col[c]);
        }
    } else {
        float ndl = xf_dot3(ldir, nrm);
        float k = (diffusefunc == 2) ? fmaxf(0.0f, ndl) : ndl; /* Clamp vs Sign */
        float s = attn * k;
        if (alpha_only) {
            lacc[3] += (int)xf_roundf(s * col[3]);
        } else {
            for (int c = 0; c < 3; c++) lacc[c] += (int)xf_roundf(s * col[c]);
        }
    }
}

/* Channel `chan` (0/1). Returns the lit colour in 0..1 floats. */
static void xf_light_channel(int chan, const float base[4], const float pos[3],
                             const float nrm[3], float out[4]) {
    const uint32_t cctl = s_xf_color_ctrl[chan];
    const uint32_t actl = s_xf_alpha_ctrl[chan];
    const int mat_src_c = (int)(cctl & 1);            /* bit 0 */
    const int lit_c = (int)((cctl >> 1) & 1);         /* bit 1 */
    const int mask_c = (int)(((cctl >> 2) & 0xF) | (((cctl >> 11) & 0xF) << 4));
    const int amb_src_c = (int)((cctl >> 6) & 1);     /* bit 6 */
    const int diff_c = (int)((cctl >> 7) & 3);
    const int attn_c = (int)((cctl >> 9) & 3);
    const int mat_src_a = (int)(actl & 1);
    const int lit_a = (int)((actl >> 1) & 1);
    const int mask_a = (int)(((actl >> 2) & 0xF) | (((actl >> 11) & 0xF) << 4));
    const int amb_src_a = (int)((actl >> 6) & 1);
    const int diff_a = (int)((actl >> 7) & 3);
    const int attn_a = (int)((actl >> 9) & 3);

    float amb_reg[4], mat_reg[4];
    xf_unpack_rgba8(s_xf_amb_color[chan], amb_reg);
    xf_unpack_rgba8(s_xf_mat_color[chan], mat_reg);

    int mat[4], lacc[4];
    for (int c = 0; c < 4; c++) mat[c] = mat_src_c ? (int)xf_roundf(base[c] * 255.0f) : (int)mat_reg[c];
    if (lit_c) {
        for (int c = 0; c < 3; c++)
            lacc[c] = amb_src_c ? (int)xf_roundf(base[c] * 255.0f) : (int)amb_reg[c];
    } else {
        lacc[0] = lacc[1] = lacc[2] = 255;
    }
    if (mat_src_a != mat_src_c) mat[3] = mat_src_a ? (int)xf_roundf(base[3] * 255.0f) : (int)mat_reg[3];
    if (lit_a) lacc[3] = amb_src_a ? (int)xf_roundf(base[3] * 255.0f) : (int)amb_reg[3];
    else lacc[3] = 255;

    if (lit_c) {
        for (int i = 0; i < XF_MAX_LIGHTS; i++)
            if (mask_c & (1 << i)) xf_light_accumulate(i, diff_c, attn_c, pos, nrm, lacc, false);
    }
    if (lit_a) {
        for (int i = 0; i < XF_MAX_LIGHTS; i++)
            if (mask_a & (1 << i)) xf_light_accumulate(i, diff_a, attn_a, pos, nrm, lacc, true);
    }
    for (int c = 0; c < 4; c++) lacc[c] = xf_clampi(lacc[c], 0, 255);

    for (int c = 0; c < 4; c++) {
        int v = (mat[c] * (lacc[c] + (lacc[c] >> 7))) >> 8;
        out[c] = (float)v / 255.0f;
    }
}

/* The XF's colour for one channel (Dolphin: WriteVertexBody -> dolphin_calculate_lighting_chnN).
 * Refactored out of xf_lighting_compute so channel 1 can be produced even while channel 0
 * keeps whichever path it had: the host's channel 0 is the raw CLR0 unless TLS_XF_LIGHTING
 * is set, and changing that is a separate, picture-wide decision. */
static uint32_t xf_channel_colour(int chan, const GxVertex* v, float px, float py, float pz) {
    float base[4] = {
        (float)(v->color & 0xFF) / 255.0f,
        (float)((v->color >> 8) & 0xFF) / 255.0f,
        (float)((v->color >> 16) & 0xFF) / 255.0f,
        (float)((v->color >> 24) & 0xFF) / 255.0f,
    };
    float nrm[3] = { v->nx, v->ny, v->nz };
    /* Normal matrix: XF 0x400 + 3 * (PosNormalMtxIdx & 31), 3 rows of 3 floats. */
    const float* nm = &s_xf_nrm_mtx[3 * (s_current_pnm_raw & 31)];
    float tn[3] = {
        nm[0] * nrm[0] + nm[3] * nrm[1] + nm[6] * nrm[2],
        nm[1] * nrm[0] + nm[4] * nrm[1] + nm[7] * nrm[2],
        nm[2] * nrm[0] + nm[5] * nrm[1] + nm[8] * nrm[2],
    };
    xf_normalize3(tn);
    const float pos[3] = { px, py, pz };
    float lit[4];
    xf_light_channel(chan, base, pos, tn, lit);
    if (s_xf_num_chan == 0) lit[0] = lit[1] = lit[2] = lit[3] = 0.0f;   /* TEV sees zero */
    /* Dolphin WriteVertexBody: with fewer than two colour channels the TEV still gets
     * the second one, as zero. */
    if (s_xf_num_chan <= 1 && chan == 1) return 0u;
    uint32_t a = (uint32_t)(lit[3] * 255.0f + 0.5f);
    uint32_t b = (uint32_t)(lit[2] * 255.0f + 0.5f);
    uint32_t g = (uint32_t)(lit[1] * 255.0f + 0.5f);
    uint32_t r = (uint32_t)(lit[0] * 255.0f + 0.5f);
    return (a << 24) | (b << 16) | (g << 8) | r;
}

/* Replace the vertex colour with the XF's channel-0 result (Dolphin: WriteVertexBody). */
static void xf_lighting_compute(GxVertex* v, float px, float py, float pz) {
    v->color = xf_channel_colour(0, v, px, py, pz);
}

static inline GxVertex transform_vertex(const GxVertex* in) {
    GxVertex out = *in;
    float vx = in->x, vy = in->y, vz = in->z;
    /* Keep the object-space position for the XF texgen (SourceRow::Geom transforms it);
     * the clip-space result overwrites x..w below. */
    out.ox = vx; out.oy = vy; out.oz = vz;
    // Apply active position matrix
    float px = s_pos_matrices[s_current_pnm_idx][0][0] * vx + s_pos_matrices[s_current_pnm_idx][0][1] * vy + s_pos_matrices[s_current_pnm_idx][0][2] * vz + s_pos_matrices[s_current_pnm_idx][0][3];
    float py = s_pos_matrices[s_current_pnm_idx][1][0] * vx + s_pos_matrices[s_current_pnm_idx][1][1] * vy + s_pos_matrices[s_current_pnm_idx][1][2] * vz + s_pos_matrices[s_current_pnm_idx][1][3];
    float pz = s_pos_matrices[s_current_pnm_idx][2][0] * vx + s_pos_matrices[s_current_pnm_idx][2][1] * vy + s_pos_matrices[s_current_pnm_idx][2][2] * vz + s_pos_matrices[s_current_pnm_idx][2][3];

    // Apply projection if available
    if (fabsf(s_proj_matrix[0][0]) > 1e-6f || fabsf(s_proj_matrix[1][1]) > 1e-6f) {
        if (s_proj_is_perspective) {
            float cx = s_proj_matrix[0][0] * px + s_proj_matrix[0][2] * pz;
            float cy = s_proj_matrix[1][1] * py + s_proj_matrix[1][2] * pz;
            float cz = s_proj_matrix[2][2] * pz + s_proj_matrix[2][3];
            float cw = -pz;
            out.x = cx;
            out.y = cy;
            // GX perspective NDC Z is in [-1.0, 0.0]; map to D3D11 [0.0, 1.0]
            // Homogeneous clip-space Z for D3D11: z_clip = cz + cw
            out.z = cz + cw;
            out.w = cw;
        } else {
            // Orthographic projection: mtx[0][3] and mtx[1][3] are the translations
            out.x = s_proj_matrix[0][0] * px + s_proj_matrix[0][3];
            out.y = s_proj_matrix[1][1] * py + s_proj_matrix[1][3];
            float cz = s_proj_matrix[2][2] * pz + s_proj_matrix[2][3];
            float z_val = cz + 1.0f;
            if (z_val < 0.0f) z_val = 0.0f;
            else if (z_val > 0.999f) z_val = 0.999f;
            out.z = z_val;
            out.w = 1.0f;
        }
    } else {
        out.x = px;
        out.y = py;
        out.z = pz;
        out.w = 1.0f;
    }

    /* TLS_XF_CLIP_PROBE=1: report vertices whose transform lands far outside the clip
     * volume, with the inputs that produced it (PN matrix index, eye-space z, w). The
     * tutorial page's 3D batches (b9, b11) come out with |ndc| in the thousands and clip
     * away entirely - this names the matrix index and z that did it (handover 5c.46 J). */
    {
        static int s_clip = -1, s_n = 0;
        if (s_clip < 0) s_clip = getenv("TLS_XF_CLIP_PROBE") ? 1 : 0;
        static int s_from = -2;
        if (s_from == -2) {
            const char* f = getenv("TLS_XF_CLIP_FROM");
            s_from = f ? atoi(f) : 0;
        }
        extern int g_runner_current_frame;
        if (s_clip && s_n < 24 && g_runner_current_frame >= s_from) {
            float w = (out.w != 0.0f) ? out.w : 1.0f;
            float nx = out.x / w, ny = out.y / w, nz = out.z / w;
            if (fabsf(nx) > 10.0f || fabsf(ny) > 10.0f || fabsf(nz) > 10.0f) {
                s_n++;
                printf("[XfClip] pnm=%u persp=%d eye=(%.3f %.3f %.3f) ndc=(%.1f %.1f %.1f) w=%.4f\n",
                       s_current_pnm_idx, (int)s_proj_is_perspective, px, py, pz, nx, ny, nz, w);
                printf("         mtx[%u] row0=(%.3f %.3f %.3f %.3f) row1=(%.3f %.3f %.3f %.3f) row2=(%.3f %.3f %.3f %.3f)\n",
                       s_current_pnm_idx,
                       s_pos_matrices[s_current_pnm_idx][0][0], s_pos_matrices[s_current_pnm_idx][0][1],
                       s_pos_matrices[s_current_pnm_idx][0][2], s_pos_matrices[s_current_pnm_idx][0][3],
                       s_pos_matrices[s_current_pnm_idx][1][0], s_pos_matrices[s_current_pnm_idx][1][1],
                       s_pos_matrices[s_current_pnm_idx][1][2], s_pos_matrices[s_current_pnm_idx][1][3],
                       s_pos_matrices[s_current_pnm_idx][2][0], s_pos_matrices[s_current_pnm_idx][2][1],
                       s_pos_matrices[s_current_pnm_idx][2][2], s_pos_matrices[s_current_pnm_idx][2][3]);
                fflush(stdout);
            }
        }
    }

    /* The TEV stage's RASC input is the XF's lit channel colour, not the FIFO's CLR0. */
    if (xf_lighting_enabled()) {
        xf_lighting_compute(&out, px, py, pz);
    }
    /* XF colour channel 1, which TEVORDER's colorchan can select instead of channel 0
     * (Dolphin tev_ras_table). Unconditional: it is a new input, so nothing that renders
     * today changes, and the water/effect materials are the stages that read it. */
    out.color1 = xf_channel_colour(1, in, px, py, pz);
    return out;
}

static inline GxVertex lerp_vertex(const GxVertex* a, const GxVertex* b, float t) {
    GxVertex r;
    r.x = a->x + t * (b->x - a->x);
    r.y = a->y + t * (b->y - a->y);
    r.z = a->z + t * (b->z - a->z);
    r.w = a->w + t * (b->w - a->w);
    r.nx = a->nx + t * (b->nx - a->nx);
    r.ny = a->ny + t * (b->ny - a->ny);
    r.nz = a->nz + t * (b->nz - a->nz);
    r.u = a->u + t * (b->u - a->u);
    r.v = a->v + t * (b->v - a->v);
    r.u1 = a->u1 + t * (b->u1 - a->u1);
    r.v1 = a->v1 + t * (b->v1 - a->v1);
    r.ox = a->ox + t * (b->ox - a->ox);
    r.oy = a->oy + t * (b->oy - a->oy);
    r.oz = a->oz + t * (b->oz - a->oz);
    {
        uint32_t a_a = (a->color1 >> 24) & 0xFF, b_a = (b->color1 >> 24) & 0xFF;
        uint32_t a_b = (a->color1 >> 16) & 0xFF, b_b = (b->color1 >> 16) & 0xFF;
        uint32_t a_g = (a->color1 >> 8) & 0xFF,  b_g = (b->color1 >> 8) & 0xFF;
        uint32_t a_r = a->color1 & 0xFF,         b_r = b->color1 & 0xFF;
        r.color1 = (((uint32_t)(a_a + t * ((float)b_a - (float)a_a))) << 24) |
                   (((uint32_t)(a_b + t * ((float)b_b - (float)a_b))) << 16) |
                   (((uint32_t)(a_g + t * ((float)b_g - (float)a_g))) << 8) |
                    ((uint32_t)(a_r + t * ((float)b_r - (float)a_r)));
    }
    uint32_t a_a = (a->color >> 24) & 0xFF, b_a = (b->color >> 24) & 0xFF;
    uint32_t a_b = (a->color >> 16) & 0xFF, b_b = (b->color >> 16) & 0xFF;
    uint32_t a_g = (a->color >> 8) & 0xFF,  b_g = (b->color >> 8) & 0xFF;
    uint32_t a_r = a->color & 0xFF,         b_r = b->color & 0xFF;
    uint32_t cr_a = (uint32_t)(a_a + t * ((float)b_a - (float)a_a));
    uint32_t cr_r = (uint32_t)(a_r + t * ((float)b_r - (float)a_r));
    uint32_t cr_g = (uint32_t)(a_g + t * ((float)b_g - (float)a_g));
    uint32_t cr_b = (uint32_t)(a_b + t * ((float)b_b - (float)a_b));
    r.color = (cr_a << 24) | (cr_b << 16) | (cr_g << 8) | cr_r;
    return r;
}

static inline void clip_and_emit_triangle(GxVertex v0, GxVertex v1, GxVertex v2) {
    if (isnan(v0.x) || isnan(v1.x) || isnan(v2.x) ||
        isnan(v0.y) || isnan(v1.y) || isnan(v2.y) ||
        isnan(v0.z) || isnan(v1.z) || isnan(v2.z) ||
        isnan(v0.w) || isnan(v1.w) || isnan(v2.w)) {
        return;
    }

    if (!s_proj_is_perspective) {
        if (reserve_vertices(3)) {
            s_vertex_batch[s_vertex_count++] = v0;
            s_vertex_batch[s_vertex_count++] = v1;
            s_vertex_batch[s_vertex_count++] = v2;
        }
        return;
    }

    const float w_near = 0.05f;
    bool in0 = v0.w >= w_near;
    bool in1 = v1.w >= w_near;
    bool in2 = v2.w >= w_near;
    int in_count = (in0 ? 1 : 0) + (in1 ? 1 : 0) + (in2 ? 1 : 0);

    if (in_count == 3) {
        if (reserve_vertices(3)) {
            s_vertex_batch[s_vertex_count++] = v0;
            s_vertex_batch[s_vertex_count++] = v1;
            s_vertex_batch[s_vertex_count++] = v2;
        }
    } else if (in_count == 1) {
        // 1 vertex in front, 2 vertices behind near plane -> 1 clipped triangle
        GxVertex vi  = in0 ? v0 : (in1 ? v1 : v2);
        GxVertex vo1 = in0 ? v1 : (in1 ? v2 : v0);
        GxVertex vo2 = in0 ? v2 : (in1 ? v0 : v1);
        float d1 = vo1.w - vi.w;
        float d2 = vo2.w - vi.w;
        if (fabsf(d1) < 1e-6f || fabsf(d2) < 1e-6f) return;
        float t1 = (w_near - vi.w) / d1;
        float t2 = (w_near - vi.w) / d2;
        if (t1 < 0.0f || t1 > 1.0f || t2 < 0.0f || t2 > 1.0f) return;
        GxVertex p1 = lerp_vertex(&vi, &vo1, t1);
        GxVertex p2 = lerp_vertex(&vi, &vo2, t2);
        if (reserve_vertices(3)) {
            s_vertex_batch[s_vertex_count++] = vi;
            s_vertex_batch[s_vertex_count++] = p1;
            s_vertex_batch[s_vertex_count++] = p2;
        }
    } else if (in_count == 2) {
        // 2 vertices in front, 1 vertex behind near plane -> 2 clipped triangles (quad)
        GxVertex vi1 = !in0 ? v1 : (!in1 ? v2 : v0);
        GxVertex vi2 = !in0 ? v2 : (!in1 ? v0 : v1);
        GxVertex vo  = !in0 ? v0 : (!in1 ? v1 : v2);
        float d1 = vo.w - vi1.w;
        float d2 = vo.w - vi2.w;
        if (fabsf(d1) < 1e-6f || fabsf(d2) < 1e-6f) return;
        float t1 = (w_near - vi1.w) / d1;
        float t2 = (w_near - vi2.w) / d2;
        if (t1 < 0.0f || t1 > 1.0f || t2 < 0.0f || t2 > 1.0f) return;
        GxVertex p1 = lerp_vertex(&vi1, &vo, t1);
        GxVertex p2 = lerp_vertex(&vi2, &vo, t2);
        if (reserve_vertices(6)) {
            s_vertex_batch[s_vertex_count++] = vi1;
            s_vertex_batch[s_vertex_count++] = vi2;
            s_vertex_batch[s_vertex_count++] = p2;

            s_vertex_batch[s_vertex_count++] = vi1;
            s_vertex_batch[s_vertex_count++] = p2;
            s_vertex_batch[s_vertex_count++] = p1;
        }
    }
}

static void emit_primitive_triangles(uint8_t prim_type, const GxVertex* verts, uint16_t count) {
    if (count == 0) return;
    uint32_t vtx_start = s_vertex_count;

    switch (prim_type) {
        case GX_PRIMITIVE_TRIANGLES: {
            for (uint16_t i = 0; i + 2 < count; i += 3) {
                clip_and_emit_triangle(verts[i + 0], verts[i + 1], verts[i + 2]);
            }
            break;
        }
        case GX_PRIMITIVE_QUADS: {
            for (uint16_t i = 0; i + 3 < count; i += 4) {
                clip_and_emit_triangle(verts[i + 0], verts[i + 1], verts[i + 2]);
                clip_and_emit_triangle(verts[i + 0], verts[i + 2], verts[i + 3]);
            }
            break;
        }
        case GX_PRIMITIVE_TRIANGLE_STRIP: {
            for (uint16_t i = 2; i < count; i++) {
                GxVertex v0 = verts[(i % 2 == 0) ? i - 2 : i - 1];
                GxVertex v1 = verts[(i % 2 == 0) ? i - 1 : i - 2];
                GxVertex v2 = verts[i];
                clip_and_emit_triangle(v0, v1, v2);
            }
            break;
        }
        case GX_PRIMITIVE_TRIANGLE_FAN: {
            for (uint16_t i = 2; i < count; i++) {
                clip_and_emit_triangle(verts[0], verts[i - 1], verts[i]);
            }
            break;
        }
        default:
            break;
    }

    uint32_t vtx_emitted = s_vertex_count - vtx_start;
    if (s_tev_state_dirty) tev_state_recompute();
    if (vtx_emitted > 0) {
        uint8_t tex_unit = s_active_tex_map < 8 ? s_active_tex_map : 0;

        if (s_vtx_desc[GX_VA_TEX0].type == GX_ATTR_NONE && s_vtx_desc[GX_VA_TEX1].type != GX_ATTR_NONE) {
            tex_unit = 1;
        } else if (s_active_tex_map == 0 && s_vtx_desc[GX_VA_TEX1].type != GX_ATTR_NONE &&
                   (s_tex_units[0].guest_addr == 0 || s_tex_units[0].width == 0) &&
                   s_tex_units[1].guest_addr != 0) {
            tex_unit = 1;
        } else if (s_tex_units[tex_unit].guest_addr == 0 || s_tex_units[tex_unit].width == 0) {
            for (uint8_t u = 0; u < 8; u++) {
                if (s_tex_units[u].guest_addr != 0 && s_tex_units[u].width > 0) {
                    tex_unit = u;
                    break;
                }
            }
        }
        bool has_tex = s_tev_tex_enable &&
                       ((s_vtx_desc[GX_VA_TEX0].type != GX_ATTR_NONE) ||
                        (s_vtx_desc[GX_VA_TEX1].type != GX_ATTR_NONE)) &&
                       (s_tex_units[tex_unit].guest_addr != 0) &&
                       (s_tex_units[tex_unit].width > 0) &&
                       (s_tex_units[tex_unit].height > 0);

        /* TLS_TEV_PRIMARY_MAP=<0|1>: pick the batch's sampled texture from the TEV's own
         * stage list instead of from the last GXLoadTexObj the guest issued.
         *
         * Why this exists (handover 5c.46 AP-M/N): the tutorial page's two dark plates and
         * the reference's missing emblem are the SAME two batches, b37/b38. Both set TWO
         * texmaps - texmap0 = `data/texture/ui_base_white.texture` (a white plate) and
         * texmap1 = the actual art (`tutorial_dc01.texture`, the crown crest, for b37;
         * `tt001_10_ch02.texture`, the paper insert, for b38). The old heuristic took
         * s_active_tex_map, i.e. whichever map was loaded last, so the plate was sampled,
         * multiplied by the batch's near-black raster colour (ras=0xFF00001E) and drawn as
         * an opaque dark rectangle exactly where the crest belongs. The TEV stages name the
         * map they sample (`s_tev_orders[st].texmap`); that is the measured source of truth,
         * and `primary` below already computed it and then threw it away. */
        {
            static int s_prim = -1;
            if (s_prim < 0) {
                const char* e = getenv("TLS_TEV_PRIMARY_MAP");
                s_prim = (e && *e && *e != '0') ? 1 : 0;
            }
            if (s_prim) {
                for (int st = 0; st < (int)s_num_tev_stages; st++) {
                    if (!s_tev_orders[st].enable) continue;
                    int m = s_tev_orders[st].texmap & 7;
                    if (s_tex_units[m].guest_addr != 0 && s_tex_units[m].width > 0 &&
                        s_tex_units[m].height > 0) {
                        tex_unit = (uint8_t)m;
                    }
                    break;
                }
            }
        }

        /* Second texture unit for the TEV shader: the distinct texmaps named by the
         * active stages. texmap n selects the texture bound to texcoord n, so a batch
         * whose stages use maps 0 and 1 samples two different textures. */
        uint8_t tex_unit1 = 0xFF;
        {
            int primary = -1;
            for (int st = 0; st < (int)s_num_tev_stages; st++) {
                if (!s_tev_orders[st].enable) continue;
                int m = s_tev_orders[st].texmap & 7;
                if (primary < 0) { primary = m; }
                else if (m != primary) { tex_unit1 = (uint8_t)m; break; }
            }
            if (primary >= 0 && tex_unit1 == 0xFF) {
                /* keep tex_unit1 empty: one texture is enough */
            }
        }
        /* Texmaps sampled by the TEV stages: the shader binds one SRV per map. */
        uint8_t texmap_mask = 0;
        {
            for (int st = 0; st < (int)s_num_tev_stages; st++) {
                if (!s_tev_orders[st].enable) continue;
                texmap_mask |= (uint8_t)(1u << (s_tev_orders[st].texmap & 7));
            }
            if (texmap_mask == 0) texmap_mask = (uint8_t)(1u << (tex_unit & 7));
        }
        /* Texmaps an ACTIVE indirect stage samples. Kept separate from texmap_mask so
         * that the batch-merge test below - which is keyed on texmap_mask - splits
         * batches exactly as it did before indirect texturing existed. The two are
         * unioned into GxDrawBatch::tev_texmap_mask, which is what the renderer binds:
         * an indirect map is frequently NOT one a TEV stage names, and leaving it
         * unbound made the shader read white and apply a constant offset (handover
         * 5c.46 AP-O). */
        uint8_t ind_texmap_mask = 0;
        for (int st = 0; st < (int)s_num_tev_stages && st < 16; st++) {
            uint32_t raw = s_ind_stage[st];
            if (!gx_ind_is_active(raw)) continue;
            uint32_t bt = raw & 3u;
            if (bt >= (uint32_t)s_num_ind_stages) continue;
            ind_texmap_mask |= (uint8_t)(1u << (gx_ind_iref_map(s_ind_iref, (int)bt) & 7));
        }
        uint8_t texcoord_mask = 0;
        for (int t = 0; t < 8; t++)
            if (s_vtx_desc[13 + t].type != GX_ATTR_NONE) texcoord_mask |= (uint8_t)(1u << t);
        bool has_tex1 = (tex_unit1 < 8) &&
                        (s_tex_units[tex_unit1].guest_addr != 0) &&
                        (s_tex_units[tex_unit1].width > 0) &&
                        (s_tex_units[tex_unit1].height > 0) &&
                        (tex_unit1 != tex_unit);
        if (!has_tex1) tex_unit1 = 0xFF;

        /* Frame-900 dump from an earlier investigation. It prints once per emitted
         * batch (thousands of lines per run) and is keyed on a hardcoded frame, so
         * it is gated: TLS_F900_PROBE=1. TLS_F900_FRAME=<n> moves the window. */
        if (gx_f900_probe_active()) {
            printf("[F900 Batch Emit] emitted=%u has_tex=%d tex_en=%d num_stages=%u texmap=%u texcoord=%u unit=%u addr=0x%08X\n",
                   vtx_emitted, has_tex, s_tev_tex_enable, s_num_tev_stages, s_active_tex_map, s_active_tex_coord, tex_unit, s_tex_units[tex_unit].guest_addr);
            for (int st = 0; st < s_num_tev_stages && st < 4; st++) {
                printf("   st%d: en=%d map=%u coord=%u\n", st, s_tev_orders[st].enable, s_tev_orders[st].texmap, s_tev_orders[st].texcoord);
            }
            fflush(stdout);
        }

        bool merged = false;
        if (s_draw_batch_count > 0 && !s_batch_barrier) {
            GxDrawBatch* last = &s_draw_batches[s_draw_batch_count - 1];
            if (last->has_texture == has_tex &&
                last->blend_enable == s_blend_enable &&
                last->src_factor == s_src_factor &&
                last->dst_factor == s_dst_factor &&
                last->subtract == s_blend_subtract &&
                last->is_perspective == s_proj_is_perspective &&
                last->depth_write_enable == s_depth_write_enable &&
                last->depth_test_enable == s_depth_test_enable &&
                last->tev_state == s_cur_tev_state &&
                last->texcoord_mask == texcoord_mask &&
                last->scissor_valid == s_scissor_valid &&
                last->scissor[0] == s_scissor[0] && last->scissor[1] == s_scissor[1] &&
                last->scissor[2] == s_scissor[2] && last->scissor[3] == s_scissor[3] &&
                (!(texmap_mask & 0x01) || (last->tev_texmap[0].guest_addr == s_tex_units[0].guest_addr &&
                                           last->tev_texmap[0].width == s_tex_units[0].width &&
                                           last->tev_texmap[0].height == s_tex_units[0].height &&
                                           last->tev_texmap[0].format == s_tex_units[0].format)) &&
                (!(texmap_mask & 0x02) || (last->tev_texmap[1].guest_addr == s_tex_units[1].guest_addr &&
                                           last->tev_texmap[1].width == s_tex_units[1].width &&
                                           last->tev_texmap[1].height == s_tex_units[1].height &&
                                           last->tev_texmap[1].format == s_tex_units[1].format)) &&
                (!(texmap_mask & 0x04) || (last->tev_texmap[2].guest_addr == s_tex_units[2].guest_addr &&
                                           last->tev_texmap[2].width == s_tex_units[2].width &&
                                           last->tev_texmap[2].height == s_tex_units[2].height &&
                                           last->tev_texmap[2].format == s_tex_units[2].format)) &&
                (!(texmap_mask & 0x08) || (last->tev_texmap[3].guest_addr == s_tex_units[3].guest_addr &&
                                           last->tev_texmap[3].width == s_tex_units[3].width &&
                                           last->tev_texmap[3].height == s_tex_units[3].height &&
                                           last->tev_texmap[3].format == s_tex_units[3].format)) &&
                (!(texmap_mask & 0x10) || (last->tev_texmap[4].guest_addr == s_tex_units[4].guest_addr &&
                                           last->tev_texmap[4].width == s_tex_units[4].width &&
                                           last->tev_texmap[4].height == s_tex_units[4].height &&
                                           last->tev_texmap[4].format == s_tex_units[4].format)) &&
                (!(texmap_mask & 0x20) || (last->tev_texmap[5].guest_addr == s_tex_units[5].guest_addr &&
                                           last->tev_texmap[5].width == s_tex_units[5].width &&
                                           last->tev_texmap[5].height == s_tex_units[5].height &&
                                           last->tev_texmap[5].format == s_tex_units[5].format)) &&
                (!(texmap_mask & 0x40) || (last->tev_texmap[6].guest_addr == s_tex_units[6].guest_addr &&
                                           last->tev_texmap[6].width == s_tex_units[6].width &&
                                           last->tev_texmap[6].height == s_tex_units[6].height &&
                                           last->tev_texmap[6].format == s_tex_units[6].format)) &&
                (!(texmap_mask & 0x80) || (last->tev_texmap[7].guest_addr == s_tex_units[7].guest_addr &&
                                           last->tev_texmap[7].width == s_tex_units[7].width &&
                                           last->tev_texmap[7].height == s_tex_units[7].height &&
                                           last->tev_texmap[7].format == s_tex_units[7].format)) &&
                last->has_texture1 == has_tex1 &&
                (!has_tex1 || (last->tex1.guest_addr == s_tex_units[tex_unit1].guest_addr &&
                               last->tex1.width == s_tex_units[tex_unit1].width &&
                               last->tex1.height == s_tex_units[tex_unit1].height &&
                               last->tex1.format == s_tex_units[tex_unit1].format)) &&
                (!has_tex || (last->tex.guest_addr == s_tex_units[tex_unit].guest_addr &&
                              last->tex.width == s_tex_units[tex_unit].width &&
                              last->tex.height == s_tex_units[tex_unit].height &&
                              last->tex.format == s_tex_units[tex_unit].format &&
                              last->tex.tlut_addr == s_tex_units[tex_unit].tlut_addr &&
                              last->tex.tlut_format == s_tex_units[tex_unit].tlut_format))) {
                last->vertex_count += vtx_emitted;
                merged = true;
            }
        }

        if (!merged && s_draw_batch_count < GX_MAX_DRAW_BATCHES) {
            GxDrawBatch* b = &s_draw_batches[s_draw_batch_count++];
            s_batch_barrier = false;
            b->vertex_offset = vtx_start;
            b->vertex_count = vtx_emitted;
            b->has_texture = has_tex;
            b->blend_enable = s_blend_enable;
            b->src_factor = s_src_factor;
            b->dst_factor = s_dst_factor;
            b->subtract = s_blend_subtract;
            b->is_perspective = s_proj_is_perspective;
    b->pnm_idx = (uint32_t)s_current_pnm_idx;
            b->depth_write_enable = s_depth_write_enable;
            b->depth_test_enable = s_depth_test_enable;
            b->alpha_comp0 = s_alpha_comp0;
            b->alpha_ref0 = s_alpha_ref0;
            b->scissor[0] = s_scissor[0];
            b->scissor[1] = s_scissor[1];
            b->scissor[2] = s_scissor[2];
            b->scissor[3] = s_scissor[3];
            b->scissor_valid = s_scissor_valid;
            b->tev_state = s_cur_tev_state;
            b->tev_texmap_mask = (uint8_t)(texmap_mask | ind_texmap_mask);
            b->texcoord_mask = texcoord_mask;
            b->xf_ctrl0 = s_xf_color_ctrl[0];
            b->xf_num_texgens = (uint8_t)s_xf_num_texgens;
            for (int m = 0; m < 8; m++) {
                if ((texmap_mask | ind_texmap_mask) & (1u << m)) b->tev_texmap[m] = s_tex_units[m];
                else memset(&b->tev_texmap[m], 0, sizeof(b->tev_texmap[m]));
            }
            b->has_texture1 = has_tex1;
            if (has_tex1) {
                b->tex1 = s_tex_units[tex_unit1];
            } else {
                memset(&b->tex1, 0, sizeof(b->tex1));
            }
            if (has_tex) {
                b->tex = s_tex_units[tex_unit];
            } else {
                memset(&b->tex, 0, sizeof(b->tex));
            }
            if (gx_tev_word_probe_active()) {
                printf("[TevWord] #%u f=%d DRAW b=%u vtx=%u tex=0x%08X tex1=0x%08X stages=%u "
                       "state=%u\n",
                       ++s_tev_word_seq, (int)g_runner_current_frame, s_draw_batch_count - 1,
                       vtx_emitted, has_tex ? s_tex_units[tex_unit].guest_addr : 0u,
                       has_tex1 ? s_tex_units[tex_unit1].guest_addr : 0u,
                       (unsigned)s_num_tev_stages, (unsigned)s_cur_tev_state);
                fflush(stdout);
            }
        }
    }

    s_primitive_count++;
}

void gx_pipeline_set_blend_mode(bool enable, uint8_t src_factor, uint8_t dst_factor, bool subtract) {
    s_blend_enable = enable;
    s_src_factor = src_factor;
    s_dst_factor = dst_factor;
    s_blend_subtract = subtract;
}

void gx_pipeline_set_z_mode(bool test_enable, uint8_t func, bool write_enable) {
    s_depth_test_enable = test_enable;
    s_depth_func = func;
    s_depth_write_enable = write_enable;
}

static void gx_pipeline_process_bp(uint8_t reg, uint32_t val) {
    if (gx_f900_probe_active()) {
        printf("[F900 BP] reg=0x%02X val=0x%06X pc=0x%08X lr=0x%08X\n", reg, val, s_debug_pc, s_debug_lr);
        fflush(stdout);
    }
    if (gx_tev_word_probe_active() &&
        (reg == 0x00 || (reg >= 0x10 && reg <= 0x1F) || (reg >= 0x25 && reg <= 0x2B) ||
         (reg >= 0xC0 && reg <= 0xC7) || (reg >= 0xE0 && reg <= 0xE7) || (reg >= 0xF3 && reg <= 0xFD))) {
        printf("[TevWord] #%u f=%d BP 0x%02X = 0x%06X\n", ++s_tev_word_seq,
               (int)g_runner_current_frame, reg, val & 0x00FFFFFFu);
        fflush(stdout);
    }
    if (reg == 0x00) { // BPMEM_GENMODE (active TEV stages and texgens)
        /* GEN_MODE is Dolphin GenMode (VideoCommon/BPMemory.h):
         *   numtexgens 0-3, numcolchans 4-6, bit 7 unused, flat_shading 8,
         *   multisampling 9, numtevstages 10-13 (value = stages-1), cull_mode 14-15,
         *   numindstages 16-18, zfreeze 19.
         * The stage count therefore comes from bits 10-13 exactly as this reads it.
         * Handover 5c.46 AP-M item 5 claimed the packing was `numtex:0-3 numcol:4-6
         * numtev:7-10` and that this read was one field off - that is DISPROVEN by
         * Dolphin's own bitfield, and by the page's crest draw: the guest sets
         * 0x000412 there (numtevstages = 1 -> 2 stages) and writes exactly two
         * combiners, 0xC0..0xC3, for the two texture maps it binds. Reading bits 7-10
         * would give 9 stages, which is not a state the guest ever programs.
         * TLS_GENMODE_PROBE=1 prints the full decode. */
        {
            static int s_probe = -1;
            if (s_probe < 0) s_probe = getenv("TLS_GENMODE_PROBE") ? 1 : 0;
            if (s_probe) {
                extern int g_runner_current_frame;
                printf("[GenMode] f=%d val=0x%06X numtex=%u numcol=%u unused=%u flat=%u ms=%u "
                       "numtev=%u stages=%u cull=%u numind=%u\n",
                       g_runner_current_frame, val, val & 0xF, (val >> 4) & 7, (val >> 7) & 1,
                       (val >> 8) & 1, (val >> 9) & 1, (val >> 10) & 0xF,
                       (uint32_t)(((val >> 10) & 0xF) + 1), (val >> 14) & 3, (val >> 16) & 7);
                fflush(stdout);
            }
        }
        s_num_tev_stages = (uint8_t)(((val >> 10) & 0x0F) + 1);
        s_num_ind_stages = (uint8_t)((val >> 16) & 7);
        // Recompute primary active texture map and texcoord strictly within active stage count
        s_tev_tex_enable = false;
        for (int i = 0; i < s_num_tev_stages; i++) {
            if (s_tev_orders[i].enable) {
                s_active_tex_map = s_tev_orders[i].texmap;
                s_active_tex_coord = s_tev_orders[i].texcoord;
                s_tev_tex_enable = true;
                break;
            }
        }
        return;
    }
    if (reg == 0x40) { // PE_ZMODE (depth compare & depth write mask)
        s_depth_test_enable = (val & 1) != 0;
        s_depth_func = (uint8_t)((val >> 1) & 7);
        s_depth_write_enable = ((val >> 4) & 1) != 0;
        return;
    }
    if (reg == 0x20 || reg == 0x21) { // SU_SCISSOR: BP 0x20 top-left, BP 0x21 bottom-right
        const uint16_t y = (uint16_t)(val & 0x7FF);
        const uint16_t x = (uint16_t)((val >> 12) & 0x7FF);
        const int o = (reg == 0x20) ? 0 : 2;
        s_scissor[o + 0] = (uint16_t)((x > 342u) ? (x - 342u) : 0u);
        s_scissor[o + 1] = (uint16_t)((y > 342u) ? (y - 342u) : 0u);
        if (s_scissor[2] > 639) s_scissor[2] = 639;
        if (s_scissor[3] > 447) s_scissor[3] = 447;
        s_scissor_valid = true;
        if (getenv("TLS_SCISSOR_LOG")) {
            static int s_sc_log = 0;
            if (s_sc_log < 60 && s_gx_frame_idx >= 3290) {
                printf("[Scissor] f=%u BP 0x%02X = 0x%06X -> (%u,%u)..(%u,%u)\n",
                       s_gx_frame_idx, reg, val, s_scissor[0], s_scissor[1], s_scissor[2], s_scissor[3]);
                fflush(stdout);
                s_sc_log++;
            }
        }
        return;
    }
    if (reg == 0x41) { // PE_CMODE0 (blend mode & factors)
        s_blend_enable = (val & 1) != 0;
        s_src_factor = (uint8_t)((val >> 8) & 7);
        s_dst_factor = (uint8_t)((val >> 5) & 7);
        s_blend_subtract = ((val >> 11) & 1) != 0;
        static uint32_t s_cmode_log = 0;
        if (++s_cmode_log <= 30) {
            printf("[BP 0x41 CMODE0 #%u] val=0x%06X -> blend=%d src=%u dst=%u sub=%d frame=%u\n",
                   s_cmode_log, val, s_blend_enable, s_src_factor, s_dst_factor, s_blend_subtract, s_gx_frame_idx);
            fflush(stdout);
        }
        return;
    }
    static uint8_t s_clear_r = 0, s_clear_g = 0, s_clear_b = 0, s_clear_a = 255;
    /* EFB copy registers (TEXCOPYSRC 0x49/0x4A, TEXCOPYDST 0x4B, TEXCOPYEXEC 0x52).
     * The game copies the framebuffer into MEM2 textures every frame - that is how the
     * water reflection and the menu blur are produced - and until now these writes were
     * dropped, so those textures sampled uninitialised memory (handover 5c.11).
     * The registers are recorded here and each copy is reported under
     * TLS_EFB_COPY_PROBE=1; performing the GPU->guest-memory copy is the next step
     * (source rect is decoded, destination is a 4x4-tiled GX texture). */
    if (reg == 0x49) { // TEXCOPYSRC (left/top)
        s_efb_copy_x0 = val & 0x3FF;
        s_efb_copy_y0 = (val >> 10) & 0x3FF;
        return;
    }
    if (reg == 0x4A) { // TEXCOPYSRC (right/bottom)
        s_efb_copy_x1 = val & 0x3FF;
        s_efb_copy_y1 = (val >> 10) & 0x3FF;
        return;
    }
    if (reg == 0x4B) { // TEXCOPYDST (address >> 5 in bits 0..23, format in 24..26)
        s_efb_copy_dst_guest = 0x80000000u + ((val & 0xFFFFFF) << 5);
        s_efb_copy_format = (val >> 24) & 0x7;
        return;
    }
    if (reg == 0x4D) { // TEXCOPYDST pitch, computed by GXSetTexCopyDst (see src/GXFrameBuf.c)
        s_efb_copy_pitch = val & 0x3FF;
        return;
    }
    if (reg == 0x52) { // TEXCOPYEXEC
        static int s_copy_probe = -1;
        static int s_copy_reports = 0;
        static int s_copy_from = -1;
        static int s_copy_max = 2000;
        if (s_copy_probe < 0) {
            s_copy_probe = getenv("TLS_EFB_COPY_PROBE") ? 1 : 0;
            const char* f = getenv("TLS_EFB_COPY_FROM");
            s_copy_from = f ? atoi(f) : 0;
            /* TLS_EFB_COPY_MAX raises the report cap. The default 2000 is right for
             * "what does one frame issue", but the interesting question is often the
             * whole run ("is this destination EVER a copy target?"), and a whole run
             * issues ~15 000 copies (~8 per frame x 1960) - about 2 MB of log. */
            const char* m = getenv("TLS_EFB_COPY_MAX");
            if (m) { int v = atoi(m); if (v > 0) s_copy_max = v; }
        }
        s_efb_copy_count++;
        /* WHICH copies are replayed in stream order (handover 5c.46 AP-Q).
         *
         * The hardware performs a GXCopyTex against the framebuffer *as drawn up to that
         * command*. The host can only do that from inside its batch loop, and switching
         * the whole pipeline to that mode (`TLS_DEFER_EFB_COPY=1`) is not survivable: it
         * makes the character-texture bake capture real content (measured - see AP-Q) and
         * then the guest calls exit(0) around frame 2700, so the run dies.
         *
         * `TLS_EFB_ORDER=staging` is the narrow version: only copies whose destination is
         * one of the render-to-texture staging slots in the 0x90300000..0x90700000 arena
         * are replayed in stream order, and every other copy keeps the old inline
         * behaviour. That is the class the character/HUD bakes read back, and it leaves
         * the title/MENU composite path - the one the global switch breaks - untouched.
         * Off by default until measured. */
        bool defer_this = s_efb_copy_deferred;
        if (!defer_this) {
            /* TLS_EFB_ORDER is a comma-separated set: `staging` = destinations in the
             * 0x90300000..0x90700000 render-to-texture arena, `xfb` = copies into the
             * linear scanout buffer (BP 0x52 bit 14), `all` = everything (same as
             * TLS_DEFER_EFB_COPY=1). Measured at frame 1900 the bake window issues 10
             * staging copies and one XFB copy per frame, so the two sets can be tested
             * separately (handover 5c.46 AP-Q). */
            static int s_order_set = -1;
            if (s_order_set < 0) {
                const char* e = getenv("TLS_EFB_ORDER");
                /* STAGING ORDER IS THE DEFAULT (5c.46 AP-Z, user-approved promotion).
                 *
                 * Three pieces had to be right before this could be on:
                 *   - AP-R: a replayed copy must read the LIVE back buffer, not the
                 *     previous-frame snapshot (the source used to be chosen from the GLOBAL
                 *     defer flag, which is why the earlier "narrowing does not work"
                 *     measurement was invalid);
                 *   - AP-Z: GXDrawDone (0x806140C0) must service the queue, because
                 *     fn_800D7278 issues the copy, calls GXDrawDone, and only then reads it;
                 *   - AP-Q: the class itself is safe - `staging` was measured surviving
                 *     2 760 frames with zero exit(0), unlike the global switch.
                 * With all three the character's 256x256 base texture at 0x92AEAEC0 bakes
                 * varied CMPR blocks instead of the all-transparent pattern, and
                 * docs/evidence/host_5500_hero_visible_apZ.png shows the character rendered
                 * in the cave where it used to be absent.
                 *
                 * COST, accepted knowingly: this moves the sequence, so frame 3500 is now
                 * the "NEW TUTORIAL" menu (sha C5447108...) instead of the cave, and
                 * tools/invariant.ps1's EXPECTED_SHA was re-recorded with that scene named as
                 * the reason (docs/evidence/host_3500_tutorial_menu_apZ.png). `TLS_EFB_ORDER=none`
                 * restores the old inline behaviour for A/B; xfb/all still select the others. */
                s_order_set = (e == NULL) ? 1 : 0;
                if (e) {
                    if (strstr(e, "staging")) s_order_set |= 1;
                    if (strstr(e, "xfb")) s_order_set |= 2;
                    if (strstr(e, "all")) s_order_set |= 3;
                }
            }
            if ((s_order_set & 1) &&
                s_efb_copy_dst_guest >= 0x90300000u && s_efb_copy_dst_guest < 0x90700000u) {
                defer_this = true;
            }
            if ((s_order_set & 2) && ((val >> 14) & 1u)) defer_this = true;
        }
        /* The copy is queued, never performed here: doing it during guest execution can
         * only read the *previous* completed frame, which produced the flat-cyan MENU
         * background feedback loop (handover 5c.14). The backend replays the queue inside
         * its batch loop, at the matching vertex mark. If the queue is full the copy is
         * dropped loudly (counted, reported at the next frame start) rather than silently
         * diverted to the old path. */
        if (defer_this && s_pending_copy_count < GX_MAX_PENDING_COPIES) {
            GxPendingEfbCopy* pc = &s_pending_copies[s_pending_copy_count++];
            pc->dst_guest = s_efb_copy_dst_guest;
            pc->x0 = s_efb_copy_x0;
            pc->y0 = s_efb_copy_y0;
            pc->x1 = s_efb_copy_x1;
            pc->y1 = s_efb_copy_y1;
            pc->format = s_efb_copy_format;
            pc->pitch = s_efb_copy_pitch;
            pc->exec = val;
            /* Half-scale decode: BP 0x52 bit 9 (0x200) is the copy's half-scale flag.
             * Verified against every copy of MENU frame 1450 by cross-checking the
             * destination size each batch declares when it samples it:
             *   0x010263 -> 0x90395DC0 written 640x448, sampled 320x224   (half)
             *   0x010A63 -> 0x9038D1C0 written 160x112, sampled  80x56    (half)
             *   0x010A43 -> 0x9038D1C0 written 640x448, sampled 320x224   (half)
             *   0x010063/0x010843/0x01003B/0x010863/0x004C03             (1:1)
             * Bit 11 is NOT part of it: 0x010A43/0x010A63 have it set and are half-scale.
             * (handover 5c.15) */
            pc->half_scale = ((val & 0x200u) != 0) ? 1 : 0;
            /* BP 0x52 field decode (Dolphin BPMemory.h UPE_Copy). target_pixel_format is
             * bits 3..6 and the real copy format is fmt/2 + (fmt&1)*8; bit 14 marks a
             * copy into the 16bpp linear XFB/scanout buffer rather than a tiled texture.
             * Note the destination *size* is not encoded here - it is in the pitch
             * register, see GxPendingEfbCopy (handover 5c.17). */
            {
                uint32_t tpf = (val >> 3) & 0xFu;
                pc->real_format = tpf / 2u + (tpf & 1u) * 8u;
                pc->copy_to_xfb = (int)((val >> 14) & 1u);
                pc->intensity_fmt = (int)((val >> 15) & 1u);
            }
            pc->vertex_mark = s_vertex_count;
            /* Only the deferred replay needs the barrier; splitting batches in the
             * default path would change what the inline copies read. */
            if (defer_this) s_batch_barrier = true;
        } else if (defer_this) {
            s_pending_copy_overflow++;
        }
        /* Default (5c.15): perform the copy right here, exactly as before - it can only
         * read the last completed frame. TLS_DEFER_EFB_COPY=1 instead lets the backend
         * replay the queue in stream order, which is also the only mode that receives
         * the half-scale flag: applying it to the inline path changes the default
         * picture (MENU background (119,234,255) -> (255,234,119)) while the composite
         * chain is still unfixed, so it is deliberately left off there. */
        if (!defer_this && s_efb_copy_hook) {
            /* Pass the real destination format (BP 0x52 bits 3..6, `fmt/2 + (fmt&1)*8`)
             * rather than the raw BP 0x4B byte, which is only the destination address and
             * is therefore always 0. The backend still treats "flag off" as RGBA8, so this
             * cannot change the default picture; with TLS_EFB_COPY_FMT=1 it writes RGB565
             * and IA8 destinations in their own tile layout (handover 5c.22). */
            uint32_t tpf_rt = (val >> 3) & 0xFu;
            s_efb_copy_hook(s_efb_copy_dst_guest, s_efb_copy_x0, s_efb_copy_y0,
                            s_efb_copy_x1, s_efb_copy_y1, tpf_rt / 2u + (tpf_rt & 1u) * 8u, 0,
                            s_efb_copy_pitch, val);
            /* TLS_GX_CAPTURE copy record: the destination bytes AS THIS LAYER LEFT THEM, with the
             * geometry the same derivation gives (pitch*8/bpp for a tiled destination,
             * pitch*16 for a 16bpp linear scanout copy). This is the "today" side of the spike's
             * EFB-copy criterion: the Aurora replay must deliver the same bytes through
             * capture_copies/get for the same copy. */
            if (tls_gxcap_on) {
                const int xfb_c = (int)((val >> 14) & 1u);
                const uint32_t fmt_c = tpf_rt / 2u + (tpf_rt & 1u) * 8u;
                uint32_t bpp = 4;
                switch (fmt_c) {
                    case 6: case 12: bpp = 4; break;
                    case 4: case 10: case 5: case 11: case 3: case 9: bpp = 2; break;
                    case 7: case 8: case 0: bpp = 1; break;
                    default: bpp = 4; break;
                }
                if (xfb_c) bpp = 2;
                uint32_t srcw = (s_efb_copy_x1 >= s_efb_copy_x0) ? s_efb_copy_x1 - s_efb_copy_x0 + 1 : 0;
                uint32_t srch = (s_efb_copy_y1 >= s_efb_copy_y0) ? s_efb_copy_y1 - s_efb_copy_y0 + 1 : 0;
                uint32_t dw = 0, dh = 0;
                if (xfb_c) {
                    dw = s_efb_copy_pitch * 16u;
                    dh = srch;
                } else if (s_efb_copy_pitch) {
                    dw = (s_efb_copy_pitch * 8u) / bpp;
                    if (dw == 0 || dw > srcw) dw = srcw;
                    {
                        uint32_t step = (dw && srcw % dw == 0) ? srcw / dw : 1;
                        if (step == 0) step = 1;
                        dh = srch / step;
                    }
                } else {
                    dw = (srcw + 1) / 2;
                    dh = (srch + 1) / 2;
                }
                if (dw && dh && s_resolve_ptr) {
                    const void* bytes = s_resolve_ptr(s_efb_copy_dst_guest);
                    if (bytes) tls_gxcap_copy(s_efb_copy_dst_guest, dw, dh, fmt_c, s_vertex_count, bytes,
                                              dw * dh * bpp);
                }
            }
        }
        if (s_copy_probe && s_copy_reports < s_copy_max) {
            extern int g_runner_current_frame;
            if (g_runner_current_frame >= s_copy_from) {
                s_copy_reports++;
                /* dstw is what the pitch register says the destination width is
                 * (pitch*2 for a tiled copy, pitch*16 for a 16bpp linear XFB copy);
                 * geodst is the width the host's old source/half rule assumed. They
                 * differ whenever the guest asked for a 4:1 or 8:1 shrink. */
                uint32_t tpf = (val >> 3) & 0xFu;
                int xfb = (int)((val >> 14) & 1u);
                unsigned dstw = xfb ? (unsigned)(s_efb_copy_pitch * 16u)
                                    : (unsigned)(s_efb_copy_pitch * 2u);
                unsigned geodst = (unsigned)((s_efb_copy_x1 - s_efb_copy_x0 + 1) /
                                             (((val & 0x200u) != 0) ? 2 : 1));
                printf("[EfbCopy] frame=%d #%u src=(%u,%u)-(%u,%u) dst=0x%08X fmt=%u pitch=%u "
                       "dstw=%u geodst=%u tpf=%u realfmt=%u xfb=%d vmark=%u/batches=%u (raw exec=0x%06X)\n",
                       g_runner_current_frame,
                       s_efb_copy_count, s_efb_copy_x0, s_efb_copy_y0, s_efb_copy_x1, s_efb_copy_y1,
                       s_efb_copy_dst_guest, s_efb_copy_format, s_efb_copy_pitch, dstw, geodst,
                       tpf, tpf / 2u + (tpf & 1u) * 8u, xfb,
                       s_vertex_count, s_draw_batch_count, val);
                fflush(stdout);
            }
        }
        return;
    }
    /* GX INDIRECT TEXTURING registers. None of these were tracked before: the host
     * dropped every one of these writes on the floor, so a 3D batch that perturbs its
     * texture coordinates through an indirect map was sampled at the unperturbed
     * coordinate. Frame 3500 alone writes BP 0x10..0x1F 249 times and 0x0F/0x25/0x26/
     * 0x27 58 times, with at least one ACTIVE stage (handover 5c.46 AP-N item 11).
     *
     *   BP 0x06..0x0E  the three 2x3 offset matrices (IND_MTXA/B/C per matrix)
     *   BP 0x0F        IND_IMASK (the hardware applies it to the sampled texel; the
     *                  game as configured does not rely on it - recorded, not applied)
     *   BP 0x10..0x1F  one TevStageIndirect word per TEV stage
     *   BP 0x25/0x26   RAS1_SS0/SS1, the indirect texcoord right-shifts
     *   BP 0x27        RAS1_IREF, the texmap and texcoord each indirect stage samples
     * Field layouts are Dolphin's; the decoders are in gx_pipeline.h. */
    if (reg >= 0x06 && reg <= 0x0E) {
        s_ind_mtx[reg - 0x06] = val & 0x00FFFFFF;
        s_tev_state_dirty = true;
        return;
    }
    if (reg == 0x0F) {
        s_ind_imask = val & 0x00FFFFFF;
        s_tev_state_dirty = true;
        return;
    }
    if (reg >= 0x10 && reg <= 0x1F) {
        s_ind_stage[reg - 0x10] = val & 0x00FFFFFF;
        s_tev_state_dirty = true;
        return;
    }
    if (reg == 0x25 || reg == 0x26) {
        s_ind_texscale[reg - 0x25] = val & 0x00FFFFFF;
        s_tev_state_dirty = true;
        return;
    }
    if (reg == 0x27) {
        s_ind_iref = val & 0x00FFFFFF;
        s_tev_state_dirty = true;
        return;
    }
    if (reg >= 0x30 && reg <= 0x3F) { // BP_SU_SSIZE / BP_SU_TSIZE: TCoordInfo
        int idx = (int)(reg - 0x30) >> 1;
        int is_t = (int)(reg - 0x30) & 1;
        s_tc_info[idx][is_t] = val & 0x7FFFFu;
        return;
    }
    if (reg == 0x4F) { // BP_CLEAR_AR
        s_clear_r = (uint8_t)(val & 0xFF);
        s_clear_a = (uint8_t)((val >> 8) & 0xFF);
        return;
    }
    if (reg == 0x50) { // BP_CLEAR_GB
        s_clear_b = (uint8_t)(val & 0xFF);
        s_clear_g = (uint8_t)((val >> 8) & 0xFF);
        /* Publish unconditionally: the guest may legitimately clear to black, and a
         * "skip when all zero" guard would then leave the previous colour in effect. */
        gx_pipeline_set_clear_color(s_clear_r / 255.0f, s_clear_g / 255.0f, s_clear_b / 255.0f, s_clear_a / 255.0f);
        return;
    }

    if (reg == 0xF3) { // PE_ALPHA_COMPARE
        s_alpha_ref0 = (uint8_t)(val & 0xFF);
        s_alpha_ref1 = (uint8_t)((val >> 8) & 0xFF);
        s_alpha_comp0 = (uint8_t)((val >> 16) & 7);
        s_alpha_comp1 = (uint8_t)((val >> 19) & 7);
        s_alpha_logic = (uint8_t)((val >> 22) & 3);
        s_tev_state_dirty = true;
        return;
    }
    /* TEV colour/alpha combiners, BP 0xC0..0xDF: stage i uses 0xC0+2i (colour)
     * and 0xC1+2i (alpha). Field layout: see the note in gx_pipeline.h. */
    if (reg >= 0xC0 && reg <= 0xDF) {
        uint32_t stage = (uint32_t)((reg - 0xC0) >> 1);
        if (((reg - 0xC0) & 1) == 0) {
            s_tev_comb_color[stage] = val & 0x00FFFFFF;
            if (((val >> 16) & 3) == 3) s_tev_compare_stages++;
        } else {
            /* BP 0xC1 is Dolphin TevStageCombiner::AlphaCombiner:
             *   rswap:0-1 tswap:2-3 d:4-6 c:7-9 b:10-12 a:13-15,
             *   bias:16-17 op:18 clamp:19 compare_mode:20-21 dest:22-23
             * and the pixel shader reads exactly that packing, so the raw word is
             * passed through unchanged.
             *
             * Handover 5c.46 AP-M item 4 added a `TLS_TEV_ALPHA_GX` repack that shifted
             * these fields down to `d:0-2 c:3-5 b:6-8 a:9-11, bias:12-13`. That repack
             * is a decode of the WRONG register: applied to the page's crest words it
             * turns stage 0's alpha into a compare stage whose dest is r1 instead of
             * prev, so `prev.a` stays 0 and the batch is simply not drawn - which is
             * why it "removed the black plates" in that session's table. With the real
             * layout the words decode as `a = tex.a * ras.a` (stage 0) and
             * `a = prev.a * tex.a` (stage 1), and the missing mask turned out to be the
             * SWAP TABLES (tex.a reading the texture's red channel), not this. */
            s_tev_comb_alpha[stage] = val & 0x00FFFFFF;
            if (((val >> 16) & 3) == 3) s_tev_compare_stages++;
        }
        s_tev_state_dirty = true;
        return;
    }
    /* TEV colour / konst registers, BP 0xE0..0xE7: register i takes RA in 0xE0+2i and
     * BG in 0xE1+2i. Bit 23 is TevReg::type and selects WHICH register file the write
     * belongs to - 0 = TEV colour register (the shader's c0/c1/c2 and the pre-loaded
     * value of prev), 1 = konst register (K0..K3). Dolphin's BPStructs.cpp routes on
     * exactly this bit; the host used to send every write to the konst file, so the
     * colour registers stayed zero for the whole run (handover 5c.46 AP-M). */
    if (reg >= 0xE0 && reg <= 0xE7) {
        uint32_t i = (uint32_t)((reg - 0xE0) >> 1);
        uint32_t raw = val & 0x00FFFFFF;
        bool konst = (raw & 0x00800000) != 0;
        if (((reg - 0xE0) & 1) == 0) {
            if (konst) s_tev_kreg_ra[i] = raw; else s_tev_creg_ra[i] = raw;
        } else {
            if (konst) s_tev_kreg_bg[i] = raw; else s_tev_creg_bg[i] = raw;
        }
        s_tev_state_dirty = true;
        return;
    }
    /* TEV konst selectors, BP 0xF6..0xFD (four 5-bit selectors plus swap fields per
     * register; stage i uses 0xF6+(i>>1), even stages in the low half). */
    if (reg >= 0xF6 && reg <= 0xFD) {
        s_tev_ksel[reg - 0xF6] = val & 0x00FFFFFF;
        s_tev_state_dirty = true;
        return;
    }
    if (reg >= 0x28 && reg <= 0x2F) { // TEV_ORDER (stages 0..15)
        uint8_t stage_base = (reg - 0x28) * 2;
        s_tev_orders[stage_base + 0].texmap = (uint8_t)(val & 7);
        s_tev_orders[stage_base + 0].texcoord = (uint8_t)((val >> 3) & 7);
        s_tev_orders[stage_base + 0].enable = ((val >> 6) & 1) != 0;
        s_tev_orders[stage_base + 0].colorchan = (uint8_t)((val >> 7) & 7);

        s_tev_orders[stage_base + 1].texmap = (uint8_t)((val >> 12) & 7);
        s_tev_orders[stage_base + 1].texcoord = (uint8_t)((val >> 15) & 7);
        s_tev_orders[stage_base + 1].enable = ((val >> 18) & 1) != 0;
        s_tev_orders[stage_base + 1].colorchan = (uint8_t)((val >> 19) & 7);

        // Recompute primary active texture map and texcoord strictly from first active stage within s_num_tev_stages
        s_tev_tex_enable = false;
        for (int i = 0; i < s_num_tev_stages; i++) {
            if (s_tev_orders[i].enable) {
                s_active_tex_map = s_tev_orders[i].texmap;
                s_active_tex_coord = s_tev_orders[i].texcoord;
                s_tev_tex_enable = true;
                break;
            }
        }
        s_tev_state_dirty = true;
        return;
    }

    if (reg == 0x64) { // TX_LOADTLUT0
        uint32_t phys = (val & 0x001FFFFF) << 5;
        uint32_t addr = (phys >= 0x10000000) ? (0x90000000 | (phys & 0x0FFFFFFF)) : (0x80000000 | (phys & 0x0FFFFFFF));
        uint32_t tmem = (val >> 21) & 0x3FF;
        s_tlut_loads[tmem].guest_addr = addr;
        s_tlut_loads[tmem].tmem_offset = tmem;
        s_last_tlut_addr = addr;
        return;
    }
    if (reg == 0x65) { // TX_LOADTLUT1
        return;
    }

    uint32_t unit = 0xFFFFFFFF;
    if (reg >= 0x98 && reg <= 0x9B) unit = reg - 0x98;
    else if (reg >= 0xB8 && reg <= 0xBB) unit = 4 + (reg - 0xB8);

    if (unit < 8) { // TX_SETTLUT
        uint32_t tmem = val & 0x3FF;
        uint32_t fmt = (val >> 10) & 3;
        s_tex_units[unit].tlut_format = fmt;
        if (s_tlut_loads[tmem].guest_addr != 0) {
            s_tex_units[unit].tlut_addr = s_tlut_loads[tmem].guest_addr;
        } else if (s_last_tlut_addr != 0) {
            s_tex_units[unit].tlut_addr = s_last_tlut_addr;
        }
        s_tex_units[unit].dirty = true;
        return;
    }

    unit = 0xFFFFFFFF;
    if (reg >= 0x88 && reg <= 0x8B) unit = reg - 0x88;
    else if (reg >= 0xA8 && reg <= 0xAB) unit = 4 + (reg - 0xA8);

    if (unit < 8) { // TX_SETIMAGE0 (width, height, format)
        s_tex_units[unit].width = (val & 0x3FF) + 1;
        s_tex_units[unit].height = ((val >> 10) & 0x3FF) + 1;
        s_tex_units[unit].format = (val >> 20) & 0x0F;
        s_tex_units[unit].dirty = true;
        return;
    }

    unit = 0xFFFFFFFF;
    if (reg >= 0x8C && reg <= 0x8F) unit = reg - 0x8C;
    else if (reg >= 0xAC && reg <= 0xAF) unit = 4 + (reg - 0xAC);

    if (unit < 8) { // TX_SETIMAGE1 (TMEM even line)
        // Note: TX_SETIMAGE1 specifies TMEM cache offset, not guest main RAM address.
        // The actual RAM base address is provided by TX_SETIMAGE3.
        return;
    }

    unit = 0xFFFFFFFF;
    if (reg >= 0x94 && reg <= 0x97) unit = reg - 0x94;
    else if (reg >= 0xB4 && reg <= 0xB7) unit = 4 + (reg - 0xB4);

    if (unit < 8) { // TX_SETIMAGE3 (Actual texture image pointer in RAM >> 5)
        uint32_t phys = (val & 0x00FFFFFF) << 5;
        if (phys >= 0x10000000) {
            s_tex_units[unit].guest_addr = 0x90000000 | (phys & 0x0FFFFFFF);
        } else {
            s_tex_units[unit].guest_addr = 0x80000000 | (phys & 0x0FFFFFFF);
        }
        s_tex_units[unit].dirty = true;

        return;
    }

    unit = 0xFFFFFFFF;
    if (reg >= 0x80 && reg <= 0x83) unit = reg - 0x80;
    else if (reg >= 0xA0 && reg <= 0xA3) unit = 4 + (reg - 0xA0);

    if (unit < 8) { // TX_SETMODE0
        s_tex_units[unit].wrap_s = val & 3;
        s_tex_units[unit].wrap_t = (val >> 2) & 3;
        if (s_tex_units[unit].tlut_format == 0) {
            s_tex_units[unit].tlut_format = (val >> 21) & 3;
        }
        if (s_tex_units[unit].tlut_addr == 0 && s_last_tlut_addr != 0) {
            s_tex_units[unit].tlut_addr = s_last_tlut_addr;
        }
        return;
    }
}

static inline void decode_single_vertex(const uint8_t* attr_data, uint8_t fmt, GxVertex* v) {
    memset(v, 0, sizeof(*v));
    v->color = 0xFFFFFFFF;

    uint32_t offset = 0;
    uint32_t adv = 0;

    // Parse Position Matrix Index
    if (s_vtx_desc[0].type != GX_ATTR_NONE) {
        s_current_pnm_raw = attr_data[0];
        s_current_pnm_idx = attr_data[offset++] / 3;
    } else {
        s_current_pnm_raw = s_default_pnm_raw;
        s_current_pnm_idx = s_default_pnm_idx;
    }

    uint8_t raw_pnm_byte = (s_vtx_desc[0].type != GX_ATTR_NONE) ? attr_data[0] : 0xFF;

    // Parse Texcoord Matrix Indices (TEX0MTXIDX..TEX7MTXIDX)
    for (int m = 1; m <= 8; m++) {
        if (s_vtx_desc[m].type != GX_ATTR_NONE) {
            offset++;
        }
    }

    // Parse Position
    if (s_vtx_desc[GX_VA_POS].type == GX_ATTR_DIRECT) {
        uint8_t c_cnt = s_vtx_fmt[fmt][GX_VA_POS].comp_cnt;
        uint8_t c_type = s_vtx_fmt[fmt][GX_VA_POS].comp_type;
        uint8_t frac = s_vtx_fmt[fmt][GX_VA_POS].frac;
        v->x = parse_comp_value(&attr_data[offset], c_type, frac, &adv); offset += adv;
        v->y = parse_comp_value(&attr_data[offset], c_type, frac, &adv); offset += adv;
        v->z = (c_cnt == 0) ? 0.0f : parse_comp_value(&attr_data[offset], c_type, frac, &adv);
        if (c_cnt != 0) offset += adv;
    } else if (s_vtx_desc[GX_VA_POS].type == GX_ATTR_INDEX16) {
        uint16_t idx = read_u16_be(&attr_data[offset]);
        offset += 2;
        if (s_arrays[GX_VA_POS].base_ptr) {
            uint8_t c_cnt = s_vtx_fmt[fmt][GX_VA_POS].comp_cnt;
            uint8_t c_type = s_vtx_fmt[fmt][GX_VA_POS].comp_type;
            uint8_t frac = s_vtx_fmt[fmt][GX_VA_POS].frac;
            uint32_t elem_sz = get_attr_elem_size(c_type);
            uint32_t default_stride = (c_cnt == 0 ? 2 : 3) * elem_sz;
            uint32_t stride = s_arrays[GX_VA_POS].stride ? s_arrays[GX_VA_POS].stride : default_stride;
            const uint8_t* p = (const uint8_t*)s_arrays[GX_VA_POS].base_ptr + idx * stride;
            uint32_t aoff = 0;
            v->x = parse_comp_value(p + aoff, c_type, frac, &adv); aoff += adv;
            v->y = parse_comp_value(p + aoff, c_type, frac, &adv); aoff += adv;
            v->z = (c_cnt == 0) ? 0.0f : parse_comp_value(p + aoff, c_type, frac, &adv);
            if (s_gx_frame_idx == 700 && s_vertex_count < 5) {
                printf("[F700 POS INDEX16] idx=%u stride=%u (arr_stride=%u def=%u) c_type=%u frac=%u elem_sz=%u\n"
                       "   raw bytes: %02X %02X %02X %02X %02X %02X\n"
                       "   parsed: (%.4f, %.4f, %.4f)\n",
                       idx, stride, s_arrays[GX_VA_POS].stride, default_stride, c_type, frac, elem_sz,
                       p[0], p[1], p[2], p[3], p[4], p[5], v->x, v->y, v->z);
                fflush(stdout);
            }
        }
    } else if (s_vtx_desc[GX_VA_POS].type == GX_ATTR_INDEX8) {
        uint8_t idx = attr_data[offset++];
        if (s_arrays[GX_VA_POS].base_ptr) {
            uint8_t c_cnt = s_vtx_fmt[fmt][GX_VA_POS].comp_cnt;
            uint8_t c_type = s_vtx_fmt[fmt][GX_VA_POS].comp_type;
            uint8_t frac = s_vtx_fmt[fmt][GX_VA_POS].frac;
            uint32_t elem_sz = get_attr_elem_size(c_type);
            uint32_t default_stride = (c_cnt == 0 ? 2 : 3) * elem_sz;
            uint32_t stride = s_arrays[GX_VA_POS].stride ? s_arrays[GX_VA_POS].stride : default_stride;
            const uint8_t* p = (const uint8_t*)s_arrays[GX_VA_POS].base_ptr + idx * stride;
            uint32_t aoff = 0;
            v->x = parse_comp_value(p + aoff, c_type, frac, &adv); aoff += adv;
            v->y = parse_comp_value(p + aoff, c_type, frac, &adv); aoff += adv;
            v->z = (c_cnt == 0) ? 0.0f : parse_comp_value(p + aoff, c_type, frac, &adv);
            if (s_gx_frame_idx == 700 && s_vertex_count < 5) {
                printf("[F700 POS INDEX8] idx=%u stride=%u (arr_stride=%u def=%u) c_type=%u frac=%u elem_sz=%u\n"
                       "   raw bytes: %02X %02X %02X %02X %02X %02X\n"
                       "   parsed: (%.4f, %.4f, %.4f)\n",
                       idx, stride, s_arrays[GX_VA_POS].stride, default_stride, c_type, frac, elem_sz,
                       p[0], p[1], p[2], p[3], p[4], p[5], v->x, v->y, v->z);
                fflush(stdout);
            }
        }
    }

    // Parse Normal
    if (s_vtx_desc[GX_VA_NRM].type == GX_ATTR_DIRECT) {
        uint8_t c_type = s_vtx_fmt[fmt][GX_VA_NRM].comp_type;
        uint8_t frac = s_vtx_fmt[fmt][GX_VA_NRM].frac;
        v->nx = parse_comp_value(&attr_data[offset], c_type, frac, &adv); offset += adv;
        v->ny = parse_comp_value(&attr_data[offset], c_type, frac, &adv); offset += adv;
        v->nz = parse_comp_value(&attr_data[offset], c_type, frac, &adv); offset += adv;
        if (s_vtx_fmt[fmt][GX_VA_NRM].comp_cnt == 2) {
            offset += 6 * adv;
        }
    } else if (s_vtx_desc[GX_VA_NRM].type == GX_ATTR_INDEX16) {
        offset += (s_vtx_fmt[fmt][GX_VA_NRM].comp_cnt == 2) ? 6 : 2;
    } else if (s_vtx_desc[GX_VA_NRM].type == GX_ATTR_INDEX8) {
        offset += (s_vtx_fmt[fmt][GX_VA_NRM].comp_cnt == 2) ? 3 : 1;
    }

    // Parse Color 0
    if (s_vtx_desc[GX_VA_CLR0].type == GX_ATTR_DIRECT) {
        uint8_t clr_type = s_vtx_fmt[fmt][GX_VA_CLR0].comp_type;
        if (clr_type == 5) { // RGBA8
            v->color = pack_rgba(attr_data[offset], attr_data[offset+1], attr_data[offset+2], attr_data[offset+3]);
            offset += 4;
        } else if (clr_type == 1) { // RGB888
            v->color = pack_rgba(attr_data[offset], attr_data[offset+1], attr_data[offset+2], 255);
            offset += 3;
        } else if (clr_type == 0) { // RGB565
            uint16_t c565 = read_u16_be(&attr_data[offset]);
            uint8_t r = ((c565 >> 11) & 0x1F) * 255 / 31;
            uint8_t g = ((c565 >> 5) & 0x3F) * 255 / 63;
            uint8_t b = (c565 & 0x1F) * 255 / 31;
            v->color = pack_rgba(r, g, b, 255);
            offset += 2;
        } else {
            v->color = pack_rgba(255, 255, 255, 255);
            offset += 4;
        }
    } else if (s_vtx_desc[GX_VA_CLR0].type == GX_ATTR_INDEX16 || s_vtx_desc[GX_VA_CLR0].type == GX_ATTR_INDEX8) {
        uint16_t idx = 0;
        if (s_vtx_desc[GX_VA_CLR0].type == GX_ATTR_INDEX16) {
            idx = read_u16_be(&attr_data[offset]);
            offset += 2;
        } else {
            idx = attr_data[offset++];
        }
        if (s_arrays[GX_VA_CLR0].base_ptr) {
            uint8_t clr_type = s_vtx_fmt[fmt][GX_VA_CLR0].comp_type;
            uint32_t stride = s_arrays[GX_VA_CLR0].stride;
            if (stride == 0) stride = (clr_type == 5 || clr_type == 2) ? 4 : (clr_type == 1 ? 3 : 2);
            const uint8_t* p = (const uint8_t*)s_arrays[GX_VA_CLR0].base_ptr + idx * stride;
            if (clr_type == 5) { // RGBA8
                v->color = pack_rgba(p[0], p[1], p[2], p[3]);
            } else if (clr_type == 1 || clr_type == 2) { // RGB888 or RGBX888
                v->color = pack_rgba(p[0], p[1], p[2], 255);
            } else if (clr_type == 0) { // RGB565
                uint16_t c565 = read_u16_be(p);
                uint8_t r = ((c565 >> 11) & 0x1F) * 255 / 31;
                uint8_t g = ((c565 >> 5) & 0x3F) * 255 / 63;
                uint8_t b = (c565 & 0x1F) * 255 / 31;
                v->color = pack_rgba(r, g, b, 255);
            } else {
                v->color = pack_rgba(p[0], p[1], p[2], 255);
            }
        } else {
            v->color = pack_rgba(255, 255, 255, 255);
        }
    } else {
        v->color = pack_rgba(255, 255, 255, 255);
    }

    // Parse Color 1
    if (s_vtx_desc[GX_VA_CLR1].type == GX_ATTR_DIRECT) {
        uint8_t clr_type = s_vtx_fmt[fmt][GX_VA_CLR1].comp_type;
        offset += (clr_type == 0 || clr_type == 3) ? 2 : ((clr_type == 1 || clr_type == 4) ? 3 : 4);
    } else if (s_vtx_desc[GX_VA_CLR1].type == GX_ATTR_INDEX16) {
        offset += 2;
    } else if (s_vtx_desc[GX_VA_CLR1].type == GX_ATTR_INDEX8) {
        offset += 1;
    }

    // Parse Texcoord 0 (attr 13)
    if (s_vtx_desc[GX_VA_TEX0].type == GX_ATTR_DIRECT) {
        uint8_t c_cnt = s_vtx_fmt[fmt][GX_VA_TEX0].comp_cnt;
        uint8_t c_type = s_vtx_fmt[fmt][GX_VA_TEX0].comp_type;
        uint8_t frac = s_vtx_fmt[fmt][GX_VA_TEX0].frac;
        v->u = parse_comp_value(&attr_data[offset], c_type, frac, &adv); offset += adv;
        v->v = (c_cnt == 0) ? 0.0f : parse_comp_value(&attr_data[offset], c_type, frac, &adv);
        if (c_cnt != 0) offset += adv;
    } else if (s_vtx_desc[GX_VA_TEX0].type == GX_ATTR_INDEX16) {
        uint16_t idx = read_u16_be(&attr_data[offset]);
        offset += 2;
        if (s_arrays[GX_VA_TEX0].base_ptr) {
            uint32_t stride = s_arrays[GX_VA_TEX0].stride ? s_arrays[GX_VA_TEX0].stride : 8;
            const uint8_t* p = (const uint8_t*)s_arrays[GX_VA_TEX0].base_ptr + idx * stride;
            uint8_t c_cnt = s_vtx_fmt[fmt][GX_VA_TEX0].comp_cnt;
            uint8_t c_type = s_vtx_fmt[fmt][GX_VA_TEX0].comp_type;
            uint8_t frac = s_vtx_fmt[fmt][GX_VA_TEX0].frac;
            uint32_t aoff = 0;
            v->u = parse_comp_value(p + aoff, c_type, frac, &adv); aoff += adv;
            v->v = (c_cnt == 0) ? 0.0f : parse_comp_value(p + aoff, c_type, frac, &adv);
        }
    } else if (s_vtx_desc[GX_VA_TEX0].type == GX_ATTR_INDEX8) {
        uint8_t idx = attr_data[offset++];
        if (s_arrays[GX_VA_TEX0].base_ptr) {
            uint32_t stride = s_arrays[GX_VA_TEX0].stride ? s_arrays[GX_VA_TEX0].stride : 8;
            const uint8_t* p = (const uint8_t*)s_arrays[GX_VA_TEX0].base_ptr + idx * stride;
            uint8_t c_cnt = s_vtx_fmt[fmt][GX_VA_TEX0].comp_cnt;
            uint8_t c_type = s_vtx_fmt[fmt][GX_VA_TEX0].comp_type;
            uint8_t frac = s_vtx_fmt[fmt][GX_VA_TEX0].frac;
            uint32_t aoff = 0;
            v->u = parse_comp_value(p + aoff, c_type, frac, &adv); aoff += adv;
            v->v = (c_cnt == 0) ? 0.0f : parse_comp_value(p + aoff, c_type, frac, &adv);
        }
    }

    // Parse Texcoord 1 through 7 (attrs 14..20)
    for (int t = 1; t < 8; t++) {
        uint8_t attr = 13 + t;
        if (s_vtx_desc[attr].type == GX_ATTR_DIRECT) {
            uint8_t c_cnt = s_vtx_fmt[fmt][attr].comp_cnt;
            uint8_t c_type = s_vtx_fmt[fmt][attr].comp_type;
            uint8_t frac = s_vtx_fmt[fmt][attr].frac;
            float tu = parse_comp_value(&attr_data[offset], c_type, frac, &adv); offset += adv;
            float tv = (c_cnt == 0) ? 0.0f : parse_comp_value(&attr_data[offset], c_type, frac, &adv);
            if (c_cnt != 0) offset += adv;
            if (t == 1) { v->u1 = tu; v->v1 = tv; }
            if (s_active_tex_coord == t || (s_vtx_desc[GX_VA_TEX0].type == GX_ATTR_NONE && s_active_tex_coord == 0 && t == 1)) {
                v->u = tu;
                v->v = tv;
            }
        } else if (s_vtx_desc[attr].type == GX_ATTR_INDEX16) {
            uint16_t idx = read_u16_be(&attr_data[offset]);
            offset += 2;
            if (s_arrays[attr].base_ptr) {
                uint32_t stride = s_arrays[attr].stride ? s_arrays[attr].stride : 8;
                const uint8_t* p = (const uint8_t*)s_arrays[attr].base_ptr + idx * stride;
                uint8_t c_cnt = s_vtx_fmt[fmt][attr].comp_cnt;
                uint8_t c_type = s_vtx_fmt[fmt][attr].comp_type;
                uint8_t frac = s_vtx_fmt[fmt][attr].frac;
                uint32_t aoff = 0;
                float tu = parse_comp_value(p + aoff, c_type, frac, &adv); aoff += adv;
                float tv = (c_cnt == 0) ? 0.0f : parse_comp_value(p + aoff, c_type, frac, &adv);
                if (t == 1) { v->u1 = tu; v->v1 = tv; }
                if (s_active_tex_coord == t || (s_vtx_desc[GX_VA_TEX0].type == GX_ATTR_NONE && s_active_tex_coord == 0 && t == 1)) {
                    v->u = tu;
                    v->v = tv;
                }
            }
        } else if (s_vtx_desc[attr].type == GX_ATTR_INDEX8) {
            uint8_t idx = attr_data[offset++];
            if (s_arrays[attr].base_ptr) {
                uint32_t stride = s_arrays[attr].stride ? s_arrays[attr].stride : 8;
                const uint8_t* p = (const uint8_t*)s_arrays[attr].base_ptr + idx * stride;
                uint8_t c_cnt = s_vtx_fmt[fmt][attr].comp_cnt;
                uint8_t c_type = s_vtx_fmt[fmt][attr].comp_type;
                uint8_t frac = s_vtx_fmt[fmt][attr].frac;
                uint32_t aoff = 0;
                float tu = parse_comp_value(p + aoff, c_type, frac, &adv); aoff += adv;
                float tv = (c_cnt == 0) ? 0.0f : parse_comp_value(p + aoff, c_type, frac, &adv);
                if (t == 1) { v->u1 = tu; v->v1 = tv; }
                if (s_active_tex_coord == t || (s_vtx_desc[GX_VA_TEX0].type == GX_ATTR_NONE && s_active_tex_coord == 0 && t == 1)) {
                    v->u = tu;
                    v->v = tv;
                }
            }
        }
    }

    static int s_font_vtx_log = 0;
    bool is_font_unit = false;
    for (int u = 0; u < 8; u++) if (s_tex_units[u].guest_addr == 0x81A1A1A0) is_font_unit = true;
    if ((is_font_unit || (s_vertex_count >= 78 && s_vertex_count <= 165)) && ++s_font_vtx_log <= 20) {
        printf("[BATCH11-16 VTX #%u vcnt=%u] raw=(%.3f, %.3f, %.3f) pos_desc=%u pos_fmt=(cnt=%u,type=%u,frac=%u) base_ptr=%p pnm=%u pc=0x%08X lr=0x%08X\n",
               s_font_vtx_log, s_vertex_count,
               v->x, v->y, v->z,
               s_vtx_desc[GX_VA_POS].type,
               s_vtx_fmt[fmt][GX_VA_POS].comp_cnt,
               s_vtx_fmt[fmt][GX_VA_POS].comp_type,
               s_vtx_fmt[fmt][GX_VA_POS].frac,
               s_arrays[GX_VA_POS].base_ptr,
               s_current_pnm_idx,
               s_debug_pc, s_debug_lr);
        printf("   active attrs: ");
        for (int a = 0; a <= 20; a++) {
            if (s_vtx_desc[a].type != GX_ATTR_NONE) printf("[a%d:t%d] ", a, s_vtx_desc[a].type);
        }
        printf("\n   attr_data: ");
        for (int k = 0; k < 32; k++) printf("%02X ", attr_data[k]);
        printf("\n");
        printf("   s_pos_matrices[%u] row0=(%.3f, %.3f, %.3f, %.3f) row1=(%.3f, %.3f, %.3f, %.3f)\n",
               s_current_pnm_idx,
               s_pos_matrices[s_current_pnm_idx][0][0], s_pos_matrices[s_current_pnm_idx][0][1], s_pos_matrices[s_current_pnm_idx][0][2], s_pos_matrices[s_current_pnm_idx][0][3],
               s_pos_matrices[s_current_pnm_idx][1][0], s_pos_matrices[s_current_pnm_idx][1][1], s_pos_matrices[s_current_pnm_idx][1][2], s_pos_matrices[s_current_pnm_idx][1][3]);
        printf("   s_proj_matrix: is_persp=%d [0][0]=%.4f [0][3]=%.4f [1][1]=%.4f [1][3]=%.4f\n",
               s_proj_is_perspective,
               s_proj_matrix[0][0], s_proj_matrix[0][3], s_proj_matrix[1][1], s_proj_matrix[1][3]);
        fflush(stdout);
    }

    *v = transform_vertex(v);
}

static void gx_pipeline_process_cp(uint8_t reg, uint32_t val) {
    if (reg == 0x30) { // MATINDEX_A (PosNormalMtxIdx & TexMtxIdx)
        s_default_pnm_idx = (uint8_t)((val & 0x3F) / 3);
        return;
    }
    if (reg == 0x50) { // VCD Lo
        s_vtx_desc[0].type          = (uint8_t)(val & 1); // GX_VA_PNMTXIDX
        for (int i = 0; i < 8; i++) {
            s_vtx_desc[1 + i].type  = (uint8_t)((val >> (1 + i)) & 1); // TEX0MTXIDX..TEX7MTXIDX
        }
        s_vtx_desc[GX_VA_POS].type  = (uint8_t)((val >> 9) & 3);
        s_vtx_desc[GX_VA_NRM].type  = (uint8_t)((val >> 11) & 3);
        s_vtx_desc[GX_VA_CLR0].type = (uint8_t)((val >> 13) & 3);
        s_vtx_desc[GX_VA_CLR1].type = (uint8_t)((val >> 15) & 3);
    } else if (reg == 0x60) { // VCD Hi
        s_vtx_desc[GX_VA_TEX0].type = (uint8_t)((val >> 0) & 3);
        s_vtx_desc[GX_VA_TEX1].type = (uint8_t)((val >> 2) & 3);
        s_vtx_desc[15].type         = (uint8_t)((val >> 4) & 3); // TEX2
        s_vtx_desc[16].type         = (uint8_t)((val >> 6) & 3); // TEX3
        s_vtx_desc[17].type         = (uint8_t)((val >> 8) & 3); // TEX4
        s_vtx_desc[18].type         = (uint8_t)((val >> 10) & 3); // TEX5
        s_vtx_desc[19].type         = (uint8_t)((val >> 12) & 3); // TEX6
        s_vtx_desc[20].type         = (uint8_t)((val >> 14) & 3); // TEX7
    } else if (reg >= 0x70 && reg <= 0x77) { // VAT A (formats 0..7)
        uint8_t fmt = reg - 0x70;
        s_vtx_fmt[fmt][GX_VA_POS].comp_cnt  = (uint8_t)((val >> 0) & 1);
        s_vtx_fmt[fmt][GX_VA_POS].comp_type = (uint8_t)((val >> 1) & 7);
        s_vtx_fmt[fmt][GX_VA_POS].frac      = (uint8_t)((val >> 4) & 0x1F);
        s_vtx_fmt[fmt][GX_VA_NRM].comp_cnt  = (uint8_t)((val >> 9) & 1);
        s_vtx_fmt[fmt][GX_VA_NRM].comp_type = (uint8_t)((val >> 10) & 7);
        s_vtx_fmt[fmt][GX_VA_CLR0].comp_cnt = (uint8_t)((val >> 13) & 1);
        s_vtx_fmt[fmt][GX_VA_CLR0].comp_type= (uint8_t)((val >> 14) & 7);
        s_vtx_fmt[fmt][GX_VA_CLR1].comp_cnt = (uint8_t)((val >> 17) & 1);
        s_vtx_fmt[fmt][GX_VA_CLR1].comp_type= (uint8_t)((val >> 18) & 7);
        s_vtx_fmt[fmt][GX_VA_TEX0].comp_cnt = (uint8_t)((val >> 21) & 1);
        s_vtx_fmt[fmt][GX_VA_TEX0].comp_type= (uint8_t)((val >> 22) & 7);
        s_vtx_fmt[fmt][GX_VA_TEX0].frac     = (uint8_t)((val >> 25) & 0x1F);
    } else if (reg >= 0x80 && reg <= 0x87) { // VAT B (formats 0..7)
        uint8_t fmt = reg - 0x80;
        s_vtx_fmt[fmt][GX_VA_TEX1].comp_cnt  = (uint8_t)((val >> 0) & 1);
        s_vtx_fmt[fmt][GX_VA_TEX1].comp_type = (uint8_t)((val >> 1) & 7);
        s_vtx_fmt[fmt][GX_VA_TEX1].frac      = (uint8_t)((val >> 4) & 0x1F);
        s_vtx_fmt[fmt][15].comp_cnt          = (uint8_t)((val >> 9) & 1);
        s_vtx_fmt[fmt][15].comp_type         = (uint8_t)((val >> 10) & 7);
        s_vtx_fmt[fmt][15].frac              = (uint8_t)((val >> 13) & 0x1F);
        s_vtx_fmt[fmt][16].comp_cnt          = (uint8_t)((val >> 18) & 1);
        s_vtx_fmt[fmt][16].comp_type         = (uint8_t)((val >> 19) & 7);
        s_vtx_fmt[fmt][16].frac              = (uint8_t)((val >> 22) & 0x1F);
        s_vtx_fmt[fmt][17].comp_cnt          = (uint8_t)((val >> 27) & 1);
        s_vtx_fmt[fmt][17].comp_type         = (uint8_t)((val >> 28) & 7);
    } else if (reg >= 0x90 && reg <= 0x97) { // VAT C (formats 0..7)
        uint8_t fmt = reg - 0x90;
        s_vtx_fmt[fmt][17].frac      = (uint8_t)((val >> 0) & 0x1F);
        s_vtx_fmt[fmt][18].comp_cnt  = (uint8_t)((val >> 5) & 1);
        s_vtx_fmt[fmt][18].comp_type = (uint8_t)((val >> 6) & 7);
        s_vtx_fmt[fmt][18].frac      = (uint8_t)((val >> 9) & 0x1F);
        s_vtx_fmt[fmt][19].comp_cnt  = (uint8_t)((val >> 14) & 1);
        s_vtx_fmt[fmt][19].comp_type = (uint8_t)((val >> 15) & 7);
        s_vtx_fmt[fmt][19].frac      = (uint8_t)((val >> 18) & 0x1F);
        s_vtx_fmt[fmt][20].comp_cnt  = (uint8_t)((val >> 23) & 1);
        s_vtx_fmt[fmt][20].comp_type = (uint8_t)((val >> 24) & 7);
        s_vtx_fmt[fmt][20].frac      = (uint8_t)((val >> 27) & 0x1F);
    } else if (reg >= 0xA0 && reg <= 0xAF) { // Array base addresses (attr = 9 + (reg - 0xA0))
        uint8_t attr = 9 + (reg - 0xA0);
        if (attr < 32 && s_resolve_ptr) {
            s_arrays[attr].base_ptr = s_resolve_ptr(val);
            static uint32_t s_base_log = 0;
            if (++s_base_log <= 20) {
                printf("[GX CP ArrayBase] reg=0x%02X attr=%u val=0x%08X ptr=%p frame=%u\n", reg, attr, val, s_arrays[attr].base_ptr, s_gx_frame_idx);
                fflush(stdout);
            }
        }
    } else if (reg >= 0xB0 && reg <= 0xBF) { // Array strides (attr = 9 + (reg - 0xB0))
        uint8_t attr = 9 + (reg - 0xB0);
        if (attr < 32) {
            s_arrays[attr].stride = (uint8_t)val;
            static uint32_t s_stride_log = 0;
            if (++s_stride_log <= 20) {
                printf("[GX CP ArrayStride] reg=0x%02X attr=%u val=%u frame=%u\n", reg, attr, (uint8_t)val, s_gx_frame_idx);
                fflush(stdout);
            }
        }
    }
}

static void gx_pipeline_process_indexed_load(uint8_t cmd, uint32_t val) {
    uint32_t index = val >> 16;
    uint8_t size = (uint8_t)(((val >> 12) & 0xF) + 1);
    uint16_t address = (uint16_t)(val & 0xFFF);
    uint8_t ref_array = 21 + (cmd - 0x20) / 8; // 0x20 -> 21 (s_arrays[21]), 0x28 -> 22, 0x30 -> 23, 0x38 -> 24

    static uint32_t s_idx_log_count = 0;
    if (++s_idx_log_count <= 30 || s_idx_log_count % 500 == 0) {
        printf("[GX IndexedLoad #%u frame %u] cmd=0x%02X arr=%u idx=%u addr=0x%03X size=%u words (base=%p, str=%u)\n",
               s_idx_log_count, s_gx_frame_idx, cmd, ref_array, index, address, size,
               s_arrays[ref_array].base_ptr, s_arrays[ref_array].stride);
        fflush(stdout);
    }

    if (ref_array < 32 && s_arrays[ref_array].base_ptr) {
        uint32_t stride = s_arrays[ref_array].stride;
        if (stride == 0) stride = size * 4;
        const uint8_t* src = (const uint8_t*)s_arrays[ref_array].base_ptr + index * stride;

        // Position matrices (cmd == 0x20, address in 0x0000 - 0x03FF)
        if (cmd == 0x20 && address < 0x0400) {
            uint32_t mtx_id = address / 12;
            if (mtx_id < 64 && size >= 12) {
                float mtx[3][4];
                for (int r = 0; r < 3; r++) {
                    for (int c = 0; c < 4; c++) {
                        mtx[r][c] = read_f32_be(&src[(r * 4 + c) * 4]);
                    }
                }
                {
                    static int s_mtx_log = -1, s_mtx_n = 0;
                    if (s_mtx_log < 0) s_mtx_log = getenv("TLS_XF_MTX_LOG") ? 1 : 0;
                    if (s_mtx_log && s_mtx_n < 40) {
                        s_mtx_n++;
                        printf("[XfMtx] id=%u valid=%d size=%u [%.3f %.3f %.3f %.3f][%.3f %.3f %.3f %.3f][%.3f %.3f %.3f %.3f]\n",
                               mtx_id, (int)is_valid_matrix(mtx), size,
                               mtx[0][0], mtx[0][1], mtx[0][2], mtx[0][3],
                               mtx[1][0], mtx[1][1], mtx[1][2], mtx[1][3],
                               mtx[2][0], mtx[2][1], mtx[2][2], mtx[2][3]);
                        fflush(stdout);
                    }
                }
                if (is_valid_matrix(mtx)) {
                    memcpy(s_pos_matrices[mtx_id], mtx, sizeof(mtx));
                    if (s_idx_log_count <= 10) {
                        printf("   -> Loaded pos_mtx[%u]: [%.3f, %.3f, %.3f, %.3f][%.3f, %.3f, %.3f, %.3f][%.3f, %.3f, %.3f, %.3f]\n",
                               mtx_id,
                               mtx[0][0], mtx[0][1], mtx[0][2], mtx[0][3],
                               mtx[1][0], mtx[1][1], mtx[1][2], mtx[1][3],
                               mtx[2][0], mtx[2][1], mtx[2][2], mtx[2][3]);
                        fflush(stdout);
                    }
                }
            }
        }
    }
}

void gx_pipeline_set_debug_pc(uint32_t pc, uint32_t lr) {
    s_debug_pc = pc;
    s_debug_lr = lr;
}

static void gx_pipeline_process_xf(uint16_t target_addr, uint16_t word_count, const uint8_t* payload) {
    static uint32_t s_xf_calls = 0;
    if (++s_xf_calls <= 20) {
        printf("[XF #%u frame %u] addr=0x%04X words=%u val0=0x%08X (PC=0x%08X LR=0x%08X)\n",
               s_xf_calls, s_gx_frame_idx, target_addr, word_count, word_count > 0 ? read_u32_be(payload) : 0,
               s_debug_pc, s_debug_lr);
        fflush(stdout);
    }
    if (target_addr < 0x0400 && (target_addr % 12 == 0) && word_count >= 12) { // Position matrix memory
        int num_mtx = word_count / 12;
        for (int m = 0; m < num_mtx; m++) {
            uint32_t base_addr = target_addr + m * 12;
            uint32_t mtx_id = base_addr / 12;
            if (mtx_id >= 64) break;
            float mtx[3][4];
            for (int r = 0; r < 3; r++) {
                for (int c = 0; c < 4; c++) {
                    int idx = (m * 12 + r * 4 + c) * 4;
                    mtx[r][c] = read_f32_be(&payload[idx]);
                }
            }
            if (is_valid_matrix(mtx)) {
                memcpy(s_pos_matrices[mtx_id], mtx, sizeof(mtx));
            }
        }
    } else if (target_addr == 0x1018 && word_count >= 1) { // MatrixIndex0 (A)
        uint32_t val = read_u32_be(&payload[0]);
        s_default_pnm_raw = (uint8_t)(val & 0x3F);
        s_default_pnm_idx = (uint8_t)((val & 0x3F) / 3);
        for (int i = 0; i < 4; i++) s_cp_tex_mtx[i] = (uint8_t)((val >> (6 + 6 * i)) & 0x3F);
    } else if (target_addr == 0x1019 && word_count >= 1) { // MatrixIndex1 (B)
        uint32_t val = read_u32_be(&payload[0]);
        for (int i = 0; i < 4; i++) s_cp_tex_mtx[4 + i] = (uint8_t)((val >> (6 * i)) & 0x3F);
    } else if (target_addr >= 0x0400 && target_addr < 0x0460) {
        /* Normal matrices: 9 floats per matrix at 3*(PosNormalMtxIdx & 31). */
        for (uint16_t w = 0; w < word_count; w++) {
            uint32_t a = (uint32_t)target_addr + w - 0x400;
            if (a < sizeof(s_xf_nrm_mtx) / sizeof(s_xf_nrm_mtx[0]))
                s_xf_nrm_mtx[a] = read_f32_be(&payload[w * 4]);
        }
    } else if (target_addr >= 0x0500 && target_addr < 0x0600) {
        /* Post-transform matrices: 64 rows of float4 (XF 0x500..0x5ff). */
        for (uint16_t w = 0; w < word_count; w++) {
            uint32_t a = (uint32_t)target_addr + w - 0x500;
            if (a < 256) s_xf_post_mtx[a] = read_f32_be(&payload[w * 4]);
        }
    } else if (target_addr >= 0x0600 && target_addr < 0x0680) {
        /* Lights: 16 words each - colour at +3, cosatt +4..+6, distatt +7..+9,
         * position +10..+12, direction +13..+15 (Dolphin VideoCommon/XFMemory.h). */
        for (uint16_t w = 0; w < word_count; w++) {
            uint32_t a = (uint32_t)target_addr + w - 0x600;
            uint32_t idx = a / 16, off = a % 16;
            if (idx >= XF_MAX_LIGHTS) continue;
            uint32_t word = read_u32_be(&payload[w * 4]);
            if (off == 3) s_xf_lights[idx].color = word;
            else if (off >= 4 && off <= 6) s_xf_lights[idx].cosatt[off - 4] = read_f32_be(&payload[w * 4]);
            else if (off >= 7 && off <= 9) s_xf_lights[idx].distatt[off - 7] = read_f32_be(&payload[w * 4]);
            else if (off >= 10 && off <= 12) s_xf_lights[idx].pos[off - 10] = read_f32_be(&payload[w * 4]);
            else if (off >= 13 && off <= 15) s_xf_lights[idx].dir[off - 13] = read_f32_be(&payload[w * 4]);
        }
    } else if (target_addr >= 0x100a && target_addr <= 0x1011) {
        for (uint16_t w = 0; w < word_count; w++) {
            uint32_t a = (uint32_t)target_addr + w;
            uint32_t val = read_u32_be(&payload[w * 4]);
            switch (a) {
                case 0x100a: s_xf_amb_color[0] = val; break;
                case 0x100b: s_xf_amb_color[1] = val; break;
                case 0x100c: s_xf_mat_color[0] = val; break;
                case 0x100d: s_xf_mat_color[1] = val; break;
                case 0x100e: s_xf_color_ctrl[0] = val; break;
                case 0x100f: s_xf_color_ctrl[1] = val; break;
                case 0x1010: s_xf_alpha_ctrl[0] = val; break;
                case 0x1011: s_xf_alpha_ctrl[1] = val; break;
                default: break;
            }
        }
    } else if (target_addr == 0x1009 && word_count >= 1) {
        s_xf_num_chan = read_u32_be(&payload[0]) & 3;
    } else if (target_addr == 0x1012 && word_count >= 1) {
        s_xf_dualtex = read_u32_be(&payload[0]) & 1;
    } else if (target_addr >= 0x101a && target_addr < 0x1020) {
        for (uint16_t w = 0; w < word_count; w++) {
            uint32_t a = (uint32_t)target_addr + w - 0x101a;
            if (a < 6) s_xf_viewport[a] = read_f32_be(&payload[w * 4]);
        }
    } else if (target_addr == 0x103f && word_count >= 1) {
        s_xf_num_texgens = read_u32_be(&payload[0]) & 0xF;
    } else if (target_addr >= 0x1040 && target_addr < 0x1048) {
        for (uint16_t w = 0; w < word_count; w++) {
            uint32_t a = (uint32_t)target_addr + w - 0x1040;
            if (a < 8) s_xf_texmtx_info[a] = read_u32_be(&payload[w * 4]);
        }
    } else if (target_addr >= 0x1050 && target_addr < 0x1058) {
        for (uint16_t w = 0; w < word_count; w++) {
            uint32_t a = (uint32_t)target_addr + w - 0x1050;
            if (a < 8) s_xf_postmtx_info[a] = read_u32_be(&payload[w * 4]);
        }
    } else if (target_addr == 0x1020 && word_count >= 6) { // Projection
        uint32_t proj_type = (word_count >= 7) ? read_u32_be(&payload[24]) : 0;
        s_proj_is_perspective = (proj_type == 0);
        memset(s_proj_matrix, 0, sizeof(s_proj_matrix));
        if (s_proj_is_perspective) {
            s_proj_matrix[0][0] = read_f32_be(&payload[0]);
            s_proj_matrix[0][2] = read_f32_be(&payload[4]);
            s_proj_matrix[1][1] = read_f32_be(&payload[8]);
            s_proj_matrix[1][2] = read_f32_be(&payload[12]);
            s_proj_matrix[2][2] = read_f32_be(&payload[16]);
            s_proj_matrix[2][3] = read_f32_be(&payload[20]);
            s_proj_matrix[3][2] = -1.0f;
        } else {
            // Orthographic: mtx[0][3] and mtx[1][3] are the translations
            s_proj_matrix[0][0] = read_f32_be(&payload[0]);
            s_proj_matrix[0][3] = read_f32_be(&payload[4]);
            s_proj_matrix[1][1] = read_f32_be(&payload[8]);
            s_proj_matrix[1][3] = read_f32_be(&payload[12]);
            s_proj_matrix[2][2] = read_f32_be(&payload[16]);
            s_proj_matrix[2][3] = read_f32_be(&payload[20]);
            s_proj_matrix[3][3] = 1.0f;
        }
        /* TLS_PROJ_LOG=1: one frame-stamped line per projection CHANGE, so the matrix in force
         * at an arbitrary frame is visible (the capped log below cannot show it). Needed for the
         * tutorial page, whose 3D batches land at NDC z 13.3..22.9 (handover 5c.44 D3). */
        {
            static int s_proj_all = -1;
            static uint32_t s_proj_sig = 0;
            if (s_proj_all < 0) s_proj_all = getenv("TLS_PROJ_LOG") ? 1 : 0;
            if (s_proj_all) {
                extern int g_runner_current_frame;
                uint32_t sig = (uint32_t)(s_proj_matrix[0][0] * 1e6f)
                             ^ (uint32_t)(s_proj_matrix[1][1] * 1e6f)
                             ^ (uint32_t)(s_proj_matrix[2][2] * 1e6f)
                             ^ (uint32_t)(s_proj_matrix[2][3] * 1e6f)
                             ^ (uint32_t)s_proj_is_perspective;
                if (sig != s_proj_sig) {
                    s_proj_sig = sig;
                    printf("[ProjSet] frame=%d persp=%d a00=%.6f a11=%.6f a03=%.6f b13=%.6f c22=%.6f c23=%.6f\n",
                           g_runner_current_frame, s_proj_is_perspective,
                           s_proj_matrix[0][0], s_proj_matrix[1][1], s_proj_matrix[0][3],
                           s_proj_matrix[1][3], s_proj_matrix[2][2], s_proj_matrix[2][3]);
                    fflush(stdout);
                }
            }
        }

        static uint32_t s_proj_log_count = 0;
        if (++s_proj_log_count <= 20 || (s_proj_log_count % 300 == 0)) {
            printf("[GX XF Projection #%u] is_persp=%d mtx:\n"
                   "  [%.4f, %.4f, %.4f, %.4f]\n"
                   "  [%.4f, %.4f, %.4f, %.4f]\n"
                   "  [%.4f, %.4f, %.4f, %.4f]\n"
                   "  [%.4f, %.4f, %.4f, %.4f]\n",
                   s_proj_log_count, s_proj_is_perspective,
                   s_proj_matrix[0][0], s_proj_matrix[0][1], s_proj_matrix[0][2], s_proj_matrix[0][3],
                   s_proj_matrix[1][0], s_proj_matrix[1][1], s_proj_matrix[1][2], s_proj_matrix[1][3],
                   s_proj_matrix[2][0], s_proj_matrix[2][1], s_proj_matrix[2][2], s_proj_matrix[2][3],
                   s_proj_matrix[3][0], s_proj_matrix[3][1], s_proj_matrix[3][2], s_proj_matrix[3][3]);
            fflush(stdout);
        }
    }
}

// Byte-by-byte FIFO stream processor
void gx_pipeline_feed_byte(uint8_t byte) {
    /* TLS_GX_CAPTURE: record the byte before it is consumed, so the recorder sees the same
     * parser state the decoder does (that is how the 9-byte 0x40 display-list call is
     * recognised and dropped). One global load when the recorder is off. */
    if (tls_gxcap_on) tls_gxcap_byte(byte, s_parser_state == GX_STATE_IDLE);
    /* 5c.47 AP-AX: the same tap, for aurora. One global test when the live path is off. */
    if (tls_aurora_live_on) tls_aurora_tap_byte(byte, s_parser_state == GX_STATE_IDLE);
    switch (s_parser_state) {
        case GX_STATE_IDLE: {
            if (byte == 0x00) {
                break; // NOP byte
            }
            if ((byte & 0xF8) == GX_PRIMITIVE_QUADS ||
                (byte & 0xF8) == GX_PRIMITIVE_TRIANGLES ||
                (byte & 0xF8) == GX_PRIMITIVE_TRIANGLE_STRIP ||
                (byte & 0xF8) == GX_PRIMITIVE_TRIANGLE_FAN ||
                (byte & 0xF8) == GX_PRIMITIVE_LINES ||
                (byte & 0xF8) == GX_PRIMITIVE_LINE_STRIP ||
                (byte & 0xF8) == GX_PRIMITIVE_POINTS) {
                s_current_prim_type = byte & 0xF8;
                s_current_vtx_fmt_idx = byte & 0x07;
                s_parser_state = GX_STATE_READ_COUNT_HIGH;
            } else if (byte == 0x08) { // Load CP register: 1 byte reg + 4 bytes value
                s_cp_buf_pos = 0;
                s_parser_state = GX_STATE_READ_CP_REG;
            } else if (byte == 0x10) { // Load XF register: 4 bytes header + (count * 4) payload
                s_xf_buf_pos = 0;
                s_parser_state = GX_STATE_READ_XF_HDR;
            } else if (byte == 0x40) { // Call Display List: 4 bytes addr + 4 bytes size
                s_dl_buf_pos = 0;
                s_parser_state = GX_STATE_READ_DL_HDR;
            } else if (byte == 0x61) { // Load BP register: 4 payload bytes
                s_bp_buf_pos = 0;
                s_parser_state = GX_STATE_READ_BP_REG;
            } else if (byte == 0x20 || byte == 0x28 || byte == 0x30 || byte == 0x38) { // Load Indexed XF
                s_current_idx_cmd = byte;
                s_idx_buf_pos = 0;
                s_parser_state = GX_STATE_READ_IDX_LOAD;
            } else if (byte == 0x44 || byte == 0x48) { // Invalidate VC or perf metrics (1 byte)
                // 1 byte consumed, stay in GX_STATE_IDLE
            } else {
                static uint32_t s_unk_byte_log = 0;
                if (++s_unk_byte_log <= 20) {
                    printf("[GX Unknown Byte in IDLE] byte=0x%02X at frame %u\n", byte, s_gx_frame_idx);
                    fflush(stdout);
                }
            }
            break;
        }
        case GX_STATE_READ_CP_REG: {
            s_cp_buf[s_cp_buf_pos++] = byte;
            if (s_cp_buf_pos >= 5) {
                uint8_t reg = s_cp_buf[0];
                uint32_t val = read_u32_be(&s_cp_buf[1]);
                gx_pipeline_process_cp(reg, val);
                s_parser_state = GX_STATE_IDLE;
            }
            break;
        }
        case GX_STATE_READ_XF_HDR: {
            s_xf_buf[s_xf_buf_pos++] = byte;
            if (s_xf_buf_pos >= 4) {
                s_xf_word_count = read_u16_be(&s_xf_buf[0]) + 1;
                s_xf_target_addr = read_u16_be(&s_xf_buf[2]);
                s_xf_buf_pos = 0;
                s_skip_remaining = (uint32_t)s_xf_word_count * 4;
                s_parser_state = (s_skip_remaining > 0 && s_skip_remaining <= sizeof(s_xf_buf))
                                 ? GX_STATE_READ_XF_PAYLOAD : GX_STATE_SKIP_BYTES;
            }
            break;
        }
        case GX_STATE_READ_XF_PAYLOAD: {
            s_xf_buf[s_xf_buf_pos++] = byte;
            if (s_xf_buf_pos >= s_skip_remaining) {
                gx_pipeline_process_xf(s_xf_target_addr, s_xf_word_count, s_xf_buf);
                s_parser_state = GX_STATE_IDLE;
            }
            break;
        }
        case GX_STATE_READ_DL_HDR: {
            s_dl_buf[s_dl_buf_pos++] = byte;
            if (s_dl_buf_pos >= 8) {
                uint32_t dl_addr = read_u32_be(&s_dl_buf[0]);
                uint32_t dl_size = read_u32_be(&s_dl_buf[4]);
                s_parser_state = GX_STATE_IDLE;
                if (s_resolve_ptr && dl_size > 0 && dl_size < (16 * 1024 * 1024)) {
                    const void* ptr = s_resolve_ptr(dl_addr);
                    if (ptr) {
                        static uint32_t s_dl_calls = 0;
                        if (++s_dl_calls <= 10) {
                            printf("[GX DL] Call #%u: addr=0x%08X size=%u bytes\n", s_dl_calls, dl_addr, dl_size);
                            fflush(stdout);
                        }
                        gx_pipeline_process_display_list((const uint8_t*)ptr, dl_size);
                    } else {
                        static uint32_t s_dl_fails = 0;
                        if (++s_dl_fails <= 5) {
                            printf("[GX DL] Failed to resolve dl_addr=0x%08X size=%u\n", dl_addr, dl_size);
                            fflush(stdout);
                        }
                    }
                }
            }
            break;
        }
        case GX_STATE_READ_COUNT_HIGH: {
            s_target_vertex_count = (uint16_t)(byte << 8);
            s_parser_state = GX_STATE_READ_COUNT_LOW;
            break;
        }
        case GX_STATE_READ_COUNT_LOW: {
            s_target_vertex_count |= byte;
            s_current_vertex_idx = 0;
            s_prim_temp_count = 0;
            s_attr_buf_pos = 0;
            s_parser_state = (s_target_vertex_count > 0) ? GX_STATE_READ_VERTICES : GX_STATE_IDLE;
            break;
        }


        case GX_STATE_READ_VERTICES: {
            s_attr_buf[s_attr_buf_pos++] = byte;

            uint32_t expected_vtx_size = 0;
            uint8_t fmt = s_current_vtx_fmt_idx;
            for (int attr = 0; attr <= 20; attr++) {
                expected_vtx_size += get_vtx_attr_size(fmt, attr);
            }

            if (expected_vtx_size == 0) {
                s_parser_state = GX_STATE_IDLE;
                s_attr_buf_pos = 0;
                break;
            }

            if (s_attr_buf_pos >= expected_vtx_size) {
                GxVertex v;
                decode_single_vertex(s_attr_buf, fmt, &v);

                if (s_prim_temp_count < 2048) {
                    s_prim_temp_verts[s_prim_temp_count++] = v;
                }

                s_attr_buf_pos = 0;
                s_current_vertex_idx++;

                if (s_current_vertex_idx >= s_target_vertex_count) {
                    emit_primitive_triangles(s_current_prim_type, s_prim_temp_verts, s_prim_temp_count);
                    s_parser_state = GX_STATE_IDLE;
                }
            }
            break;
        }
        case GX_STATE_READ_BP_REG: {
            s_bp_buf[s_bp_buf_pos++] = byte;
            if (s_bp_buf_pos >= 4) {
                uint32_t word = read_u32_be(s_bp_buf);
                uint8_t reg = (uint8_t)(word >> 24);
                uint32_t val = word & 0x00FFFFFF;
                gx_pipeline_process_bp(reg, val);
                s_parser_state = GX_STATE_IDLE;
            }
            break;
        }
        case GX_STATE_READ_IDX_LOAD: {
            s_idx_buf[s_idx_buf_pos++] = byte;
            if (s_idx_buf_pos >= 4) {
                uint32_t val = read_u32_be(s_idx_buf);
                gx_pipeline_process_indexed_load(s_current_idx_cmd, val);
                s_parser_state = GX_STATE_IDLE;
            }
            break;
        }
        case GX_STATE_SKIP_BYTES: {
            if (s_skip_remaining > 0) {
                s_skip_remaining--;
            }
            if (s_skip_remaining == 0) {
                s_parser_state = GX_STATE_IDLE;
            }
            break;
        }
    }
}

void gx_pipeline_feed_bytes(const uint8_t* data, uint32_t size) {
    if (!data || size == 0) return;

    /* TLS_GX_CAPTURE needs every byte to pass through gx_pipeline_feed_byte(), where the
     * recorder can see the parser state that decides whether a byte is a display-list call
     * header. Taking the fast paths below would bypass it, so capture mode runs the slow
     * (identical) path instead. Only ever set for a capture run.
     *
     * THE AURORA TAP HAS THE SAME REQUIREMENT, and until 5c.46 AP-BI it did not have it
     * (measured). `tls_aurora_tap_byte` is called from `gx_pipeline_feed_byte`, but the fast path
     * below parses display lists and primitives inline, so the tap never saw those bytes. The
     * visible effect was that the aurora feed carried only the fraction of the stream the slow
     * path happened to consume: on the gate's Chapter-1 window the same guest frame fed
     * **203 draws / 655 116 B** without the recorder armed and **28 372 draws / 1 890 604 B**
     * with it (and 106 vs 313 draws on the title, 63 723 vs 70 241 B) - and only the full stream
     * rendered the Gurgan Cave (mean (94.37,104.16,87.66)) instead of the near-black frame
     * (2.54,4.11,0.92) that four earlier sessions chased through depth, scissor, raster channel,
     * texture identity and the guest-memory snapshot. The tap is therefore armed on the same
     * condition as the recorder: one global load when neither instrument is on. */
    if (tls_gxcap_on || tls_aurora_live_on) {
        for (uint32_t i = 0; i < size; i++) gx_pipeline_feed_byte(data[i]);
        return;
    }

    uint32_t i = 0;
    while (i < size) {
        if (s_parser_state == GX_STATE_IDLE) {
            uint8_t cmd = data[i];
            if (cmd == 0x00) {
                // Fast skip runs of 0x00 NOP/padding bytes
                while (i < size && data[i] == 0x00) i++;
                continue;
            }

            // Fast path for draw primitives (0x80 - 0xB8)
            if ((cmd & 0xF8) == GX_PRIMITIVE_QUADS ||
                (cmd & 0xF8) == GX_PRIMITIVE_TRIANGLES ||
                (cmd & 0xF8) == GX_PRIMITIVE_TRIANGLE_STRIP ||
                (cmd & 0xF8) == GX_PRIMITIVE_TRIANGLE_FAN ||
                (cmd & 0xF8) == GX_PRIMITIVE_LINES ||
                (cmd & 0xF8) == GX_PRIMITIVE_LINE_STRIP ||
                (cmd & 0xF8) == GX_PRIMITIVE_POINTS) {

                if (i + 3 <= size) {
                    uint8_t prim_type = cmd & 0xF8;
                    uint8_t fmt = cmd & 0x07;
                    uint16_t vcnt = ((uint16_t)data[i + 1] << 8) | data[i + 2];

                    uint32_t expected_vtx_size = 0;
                    for (int attr = 0; attr <= 20; attr++) {
                        expected_vtx_size += get_vtx_attr_size(fmt, attr);
                    }

                    static uint32_t s_prim_log = 0;
                    if (size == 1440 && ++s_prim_log <= 30) {
                        printf("[GX Prim Step in DL1440 #%u] i=%u cmd=0x%02X fmt=%u vcnt=%u evs=%u advance=%u size=%u frame=%u\n",
                               s_prim_log, i, cmd, fmt, vcnt, expected_vtx_size, 3 + vcnt * expected_vtx_size, size, s_gx_frame_idx);
                        fflush(stdout);
                    }

                    if (expected_vtx_size > 0 && (uint64_t)i + 3 + (uint64_t)vcnt * expected_vtx_size <= size) {
                        static uint32_t s_large_draw_calls = 0;
                        if (vcnt > 100 && ++s_large_draw_calls <= 5) {
                            printf("[GX Large Prim #%u] prim=0x%02X fmt=%u vcnt=%u vtx_sz=%u pnm_desc=%u def_pnm=%u\n",
                                   s_large_draw_calls, prim_type, fmt, vcnt, expected_vtx_size,
                                   s_vtx_desc[0].type, s_default_pnm_idx);
                            printf("   pos_desc=%u nrm_desc=%u clr0_desc=%u tex0_desc=%u\n",
                                   s_vtx_desc[GX_VA_POS].type, s_vtx_desc[GX_VA_NRM].type,
                                   s_vtx_desc[GX_VA_CLR0].type, s_vtx_desc[GX_VA_TEX0].type);
                            printf("   pos_fmt: cnt=%u type=%u frac=%u | array_ptr=%p stride=%u\n",
                                   s_vtx_fmt[fmt][GX_VA_POS].comp_cnt, s_vtx_fmt[fmt][GX_VA_POS].comp_type,
                                   s_vtx_fmt[fmt][GX_VA_POS].frac, s_arrays[GX_VA_POS].base_ptr, s_arrays[GX_VA_POS].stride);
                            const uint8_t* dump_p = &data[i + 3];
                            printf("   vtx0 bytes: ");
                            for (uint32_t b = 0; b < expected_vtx_size && b < 32; b++) printf("%02X ", dump_p[b]);
                            printf("\n");
                            fflush(stdout);
                        }
                        const uint8_t* vptr = &data[i + 3];
                        uint32_t remaining = vcnt;
                        while (remaining > 0) {
                            uint32_t chunk = (remaining > 2048) ? 2048 : remaining;
                            for (uint32_t vi = 0; vi < chunk; vi++) {
                                decode_single_vertex(vptr, fmt, &s_prim_temp_verts[vi]);
                                if (s_large_draw_calls <= 5 && vi < 3 && vcnt > 100) {
                                    printf("   v[%u]: raw=(%.3f, %.3f, %.3f) pnm_idx=%u -> xformed=(%.4f, %.4f, %.4f, %.4f)\n",
                                           vi, s_prim_temp_verts[vi].x, s_prim_temp_verts[vi].y, s_prim_temp_verts[vi].z,
                                           s_current_pnm_idx,
                                           s_prim_temp_verts[vi].x, s_prim_temp_verts[vi].y, s_prim_temp_verts[vi].z, s_prim_temp_verts[vi].w);
                                    printf("      pos_mtx[%u]: [%.4f, %.4f, %.4f, %.4f][%.4f, %.4f, %.4f, %.4f][%.4f, %.4f, %.4f, %.4f]\n",
                                           s_current_pnm_idx,
                                           s_pos_matrices[s_current_pnm_idx][0][0], s_pos_matrices[s_current_pnm_idx][0][1], s_pos_matrices[s_current_pnm_idx][0][2], s_pos_matrices[s_current_pnm_idx][0][3],
                                           s_pos_matrices[s_current_pnm_idx][1][0], s_pos_matrices[s_current_pnm_idx][1][1], s_pos_matrices[s_current_pnm_idx][1][2], s_pos_matrices[s_current_pnm_idx][1][3],
                                           s_pos_matrices[s_current_pnm_idx][2][0], s_pos_matrices[s_current_pnm_idx][2][1], s_pos_matrices[s_current_pnm_idx][2][2], s_pos_matrices[s_current_pnm_idx][2][3]);
                                    fflush(stdout);
                                }
                                vptr += expected_vtx_size;
                            }
                            emit_primitive_triangles(prim_type, s_prim_temp_verts, (uint16_t)chunk);
                            remaining -= chunk;
                        }
                        i += 3 + vcnt * expected_vtx_size;
                        continue;
                    } else {
                        static uint32_t s_missed_fast_path = 0;
                        if (++s_missed_fast_path <= 10) {
                            printf("[GX Prim FAST PATH MISSED] cmd=0x%02X fmt=%u vcnt=%u exp_vtx_sz=%u i=%u size=%u (needed %llu) frame=%u\n",
                                   cmd, fmt, vcnt, expected_vtx_size, i, size,
                                   (unsigned long long)(i + 3 + (uint64_t)vcnt * expected_vtx_size), s_gx_frame_idx);
                            fflush(stdout);
                        }
                    }
                }
            } else if (cmd == 0x61 && i + 5 <= size) { // Fast BP register load
                uint32_t word = read_u32_be(&data[i + 1]);
                gx_pipeline_process_bp((uint8_t)(word >> 24), word & 0x00FFFFFF);
                i += 5;
                continue;
            } else if (cmd == 0x08 && i + 6 <= size) { // Fast CP register load
                uint8_t reg = data[i + 1];
                uint32_t val = read_u32_be(&data[i + 2]);
                gx_pipeline_process_cp(reg, val);
                i += 6;
                continue;
            } else if (cmd == 0x10 && i + 5 <= size) { // Fast XF register load
                uint16_t word_count = read_u16_be(&data[i + 1]) + 1;
                uint16_t target_addr = read_u16_be(&data[i + 3]);
                uint32_t payload_bytes = (uint32_t)word_count * 4;
                if ((uint64_t)i + 5 + payload_bytes <= size) {
                    gx_pipeline_process_xf(target_addr, word_count, &data[i + 5]);
                    i += 5 + payload_bytes;
                    continue;
                }
            } else if (cmd == 0x40 && i + 9 <= size) { // Fast Display List call
                uint32_t dl_addr = read_u32_be(&data[i + 1]);
                uint32_t dl_size = read_u32_be(&data[i + 5]);
                if (s_resolve_ptr && dl_size > 0 && dl_size < (16 * 1024 * 1024)) {
                    const void* ptr = s_resolve_ptr(dl_addr);
                    if (ptr) {
                        gx_pipeline_process_display_list((const uint8_t*)ptr, dl_size);
                    }
                }
                i += 9;
                continue;
            } else if ((cmd == 0x20 || cmd == 0x28 || cmd == 0x30 || cmd == 0x38) && i + 5 <= size) { // Fast Indexed XF load
                uint32_t val = read_u32_be(&data[i + 1]);
                gx_pipeline_process_indexed_load(cmd, val);
                i += 5;
                continue;
            }
        }

        // Fallback for fragmented commands
        gx_pipeline_feed_byte(data[i++]);
    }
}

void gx_pipeline_process_display_list(const uint8_t* data, uint32_t size) {
    if (!data || size == 0) return;
    if (s_dl_recursion_depth >= 8) return; // Prevent excessive recursion

    static uint32_t s_dl_enter_log = 0;
    if (++s_dl_enter_log <= 20) {
        printf("[GX DL ENTER #%u] size=%u state=%u frame=%u\n", s_dl_enter_log, size, s_parser_state, s_gx_frame_idx);
        fflush(stdout);
    }

    if (size > 64) {
        static uint32_t s_large_dl_proc = 0;
        ++s_large_dl_proc;
        if (tls_pipeline_trace_enabled() && (s_large_dl_proc <= 20 || s_large_dl_proc % 50 == 0)) {
            printf("[GX Pipeline DL] #%u (frame %u): size=%u bytes, first bytes:\n   ",
                   s_large_dl_proc, s_gx_frame_idx, size);
            for (uint32_t b = 0; b < 32 && b < size; b++) printf("%02X ", data[b]);
            printf("\n");
            uint32_t evs0 = 0;
            for (int a = 0; a <= 20; a++) evs0 += get_vtx_attr_size(0, a);
            printf("   fmt0 exp_vtx_sz=%u | pnm=%u pos=%u nrm=%u clr0=%u tex0=%u tex1=%u\n",
                   evs0, s_vtx_desc[0].type, s_vtx_desc[GX_VA_POS].type, s_vtx_desc[GX_VA_NRM].type,
                   s_vtx_desc[GX_VA_CLR0].type, s_vtx_desc[GX_VA_TEX0].type, s_vtx_desc[GX_VA_TEX1].type);
            printf("   attrs: ");
            for (int a = 0; a <= 20; a++) {
                uint32_t sz = get_vtx_attr_size(0, a);
                if (sz > 0) printf("a%u=%ub(t%u) ", a, sz, s_vtx_desc[a].type);
            }
            printf("\n");
            if (size == 1440) {
                printf("   DL[130..210]: ");
                for (uint32_t d = 130; d < 210 && d < size; d++) printf("%02X ", data[d]);
                printf("\n");
            }
            fflush(stdout);
        }
    }

    s_dl_recursion_depth++;
    ParserState prev_state = s_parser_state;
    s_parser_state = GX_STATE_IDLE;
    s_attr_buf_pos = 0;
    s_xf_buf_pos = 0;
    s_bp_buf_pos = 0;
    s_cp_buf_pos = 0;
    s_dl_buf_pos = 0;

    gx_pipeline_feed_bytes(data, size);

    s_parser_state = prev_state;
    s_dl_recursion_depth--;
}

