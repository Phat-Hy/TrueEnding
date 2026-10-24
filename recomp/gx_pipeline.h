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

// Maximum buffered vertices per draw call / batch
#define GX_MAX_BATCH_VERTICES       262144

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

// Draw batch representing a contiguous range of vertices with consistent texture state
typedef struct {
    uint32_t vertex_offset;
    uint32_t vertex_count;
    GxTextureUnit tex;
    bool has_texture;
    bool blend_enable;
    uint8_t src_factor;
    uint8_t dst_factor;
    bool subtract;
    bool is_perspective;
    bool depth_write_enable;
    bool depth_test_enable;
    uint8_t alpha_comp0;
    uint8_t alpha_ref0;
} GxDrawBatch;

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
