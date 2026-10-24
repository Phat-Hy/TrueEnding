#include "gx_pipeline.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

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
static bool s_blend_subtract = false;
static bool s_depth_test_enable = true;
static bool s_depth_write_enable = true;
static uint8_t s_depth_func = 3; // LEQUAL
static uint8_t s_alpha_comp0 = 7; // ALWAYS
static uint8_t s_alpha_ref0 = 0;

static float s_clear_color[4] = {0.0f, 0.0f, 0.0f, 1.0f};

/* EFB -> texture copy state (see the 0x49/0x4A/0x4B/0x52 handling in
 * gx_pipeline_process_bp). Decoded with tools/decode_bp_copy.py. */
static uint32_t s_efb_copy_x0 = 0, s_efb_copy_y0 = 0;
static uint32_t s_efb_copy_x1 = 639, s_efb_copy_y1 = 479;
static uint32_t s_efb_copy_dst_guest = 0;
static uint32_t s_efb_copy_format = 0;
static uint32_t s_efb_copy_count = 0;

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
} GxTevOrder;
static GxTevOrder s_tev_orders[16];

// XF load buffer
static uint16_t s_xf_word_count = 0;
static uint16_t s_xf_target_addr = 0;
static uint8_t  s_xf_buf[1024];
static uint32_t s_xf_buf_pos = 0;

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
    s_parser_state = GX_STATE_IDLE;
    s_current_pnm_idx = 0;
    s_default_pnm_idx = 0;
    s_active_tex_map = 0;
    s_active_tex_coord = 0;
    s_tev_tex_enable = true;
    s_num_tev_stages = 1;
    memset(s_tev_orders, 0, sizeof(s_tev_orders));
    s_tev_orders[0].enable = true;
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

void gx_pipeline_begin_frame(void) {
    s_gx_frame_idx++;
    s_vertex_count = 0;
    s_dropped_vertices = 0;
    s_primitive_count = 0;
    s_draw_batch_count = 0;
    s_parser_state = GX_STATE_IDLE;
    s_active_tex_map = 0;
    s_active_tex_coord = 0;
    s_tev_tex_enable = true;
    s_num_tev_stages = 1;
    s_current_pnm_idx = 0;
    s_default_pnm_idx = 0;
    memset(s_tev_orders, 0, sizeof(s_tev_orders));
    s_tev_orders[0].enable = true;
}

void gx_pipeline_end_frame(void) {
    // Frame complete
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

static inline GxVertex transform_vertex(const GxVertex* in) {
    GxVertex out = *in;
    float vx = in->x, vy = in->y, vz = in->z;

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
        if (s_draw_batch_count > 0) {
            GxDrawBatch* last = &s_draw_batches[s_draw_batch_count - 1];
            if (last->has_texture == has_tex &&
                last->blend_enable == s_blend_enable &&
                last->src_factor == s_src_factor &&
                last->dst_factor == s_dst_factor &&
                last->subtract == s_blend_subtract &&
                last->is_perspective == s_proj_is_perspective &&
                last->depth_write_enable == s_depth_write_enable &&
                last->depth_test_enable == s_depth_test_enable &&
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
            b->vertex_offset = vtx_start;
            b->vertex_count = vtx_emitted;
            b->has_texture = has_tex;
            b->blend_enable = s_blend_enable;
            b->src_factor = s_src_factor;
            b->dst_factor = s_dst_factor;
            b->subtract = s_blend_subtract;
            b->is_perspective = s_proj_is_perspective;
            b->depth_write_enable = s_depth_write_enable;
            b->depth_test_enable = s_depth_test_enable;
            b->alpha_comp0 = s_alpha_comp0;
            b->alpha_ref0 = s_alpha_ref0;
            if (has_tex) {
                b->tex = s_tex_units[tex_unit];
            } else {
                memset(&b->tex, 0, sizeof(b->tex));
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
        printf("[F900 BP] reg=0x%02X val=0x%06X\n", reg, val);
        fflush(stdout);
    }
    if (reg == 0x00) { // BPMEM_GENMODE (active TEV stages and texgens)
        s_num_tev_stages = (uint8_t)(((val >> 10) & 0x0F) + 1);
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
    if (reg == 0x52) { // TEXCOPYEXEC
        static int s_copy_probe = -1;
        static int s_copy_reports = 0;
        if (s_copy_probe < 0) s_copy_probe = getenv("TLS_EFB_COPY_PROBE") ? 1 : 0;
        s_efb_copy_count++;
        if (s_copy_probe && s_copy_reports < 12) {
            s_copy_reports++;
            printf("[EfbCopy] #%u src=(%u,%u)-(%u,%u) dst=0x%08X fmt=%u (raw exec=0x%06X)\n",
                   s_efb_copy_count, s_efb_copy_x0, s_efb_copy_y0, s_efb_copy_x1, s_efb_copy_y1,
                   s_efb_copy_dst_guest, s_efb_copy_format, val);
            fflush(stdout);
        }
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
        if (s_clear_r != 0 || s_clear_g != 0 || s_clear_b != 0) {
            gx_pipeline_set_clear_color(s_clear_r / 255.0f, s_clear_g / 255.0f, s_clear_b / 255.0f, s_clear_a / 255.0f);
        }
        return;
    }

    if (reg == 0xF3) { // PE_ALPHA_COMPARE
        s_alpha_ref0 = (uint8_t)(val & 0xFF);
        s_alpha_comp0 = (uint8_t)((val >> 16) & 7);
        return;
    }
    if (reg >= 0x28 && reg <= 0x2F) { // TEV_ORDER (stages 0..15)
        uint8_t stage_base = (reg - 0x28) * 2;
        s_tev_orders[stage_base + 0].texmap = (uint8_t)(val & 7);
        s_tev_orders[stage_base + 0].texcoord = (uint8_t)((val >> 3) & 7);
        s_tev_orders[stage_base + 0].enable = ((val >> 6) & 1) != 0;

        s_tev_orders[stage_base + 1].texmap = (uint8_t)((val >> 12) & 7);
        s_tev_orders[stage_base + 1].texcoord = (uint8_t)((val >> 15) & 7);
        s_tev_orders[stage_base + 1].enable = ((val >> 18) & 1) != 0;

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
        s_current_pnm_idx = attr_data[offset++] / 3;
    } else {
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
    } else if (target_addr == 0x1018 && word_count >= 1) { // MatrixIndex0
        uint32_t val = read_u32_be(&payload[0]);
        s_default_pnm_idx = (uint8_t)((val & 0x3F) / 3);
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
