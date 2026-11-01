#define COBJMACROS
#include <windows.h>
#include <initguid.h>
#include <d3d11.h>
#include <dxgi.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>
#include <math.h>
#include <stddef.h>
#include "gfx_backend.h"
#include "gx_pipeline.h"
#include "aurora_live_host.h"

const void* host_resolve_gx_guest_addr(uint32_t addr);

/* Byte-for-byte mirror of `cbuffer GxTev` in tools/compile_shaders.py. */
typedef struct {
    float    kreg[4][4];      /* K0..K3 constant colour registers (rgba) */
    float    kprev[4][4];     /* K0..K3 previous colour registers */
    float    creg[4][4];      /* C0..C3 TEV colour registers (rgba); creg[0] pre-loads prev */
    uint32_t color[16][4];    /* x = rgb combiner bits, y = alpha combiner bits */
    uint32_t ksel[16][4];     /* x = colour KonstSel, y = alpha KonstSel */
    uint32_t order[16][4];    /* x = texmap, y = texcoord, z = enable texture, w = uv source */
    uint32_t tswap[16][4];    /* per stage: texture channel permutation (out ch -> in ch) */
    uint32_t rswap[16][4];    /* per stage: raster colour permutation (out ch -> in ch) */
    /* --- GX indirect texturing (BP 0x06..0x0F, 0x10..0x1F, 0x25..0x27) ---------
     * The pixel shader evaluates Dolphin's PixelShaderGen::WriteStage indirect block
     * out of these: it turns a texel of the map named by RAS1_IREF into an integer
     * offset through one of three 2x3 matrices and adds it to the fixpoint texture
     * coordinate the stage samples. Integer (not float) because the hardware's
     * arithmetic is integer with explicit shifts. */
    int32_t  ind_mtx[6][4];   /* 2 rows per matrix: xyz = 11-bit signed elements,
                               * w = 17 - scale (Dolphin SetIndMatrixChanged) */
    int32_t  dim[8][4];       /* per texmap x = width, y = height; per texCOORD
                               * z = S scale, w = T scale (BP 0x30..0x3F + 1) */
    uint32_t indref[4][4];    /* per indirect stage: x = texmap, y = texcoord, z = 1 if used */
    uint32_t indscale[2][4];  /* BP 0x25/0x26: x=ss0 y=ts0 z=ss1 w=ts1 */
    uint32_t indword[16][4];  /* per TEV stage: x = raw TevStageIndirect (BP 0x10+i) */
    uint32_t wrap[8][4];      /* per texmap: x = 1 when that map's GX wrap mode is repeat */
    /* XF texture coordinate generation: x = TexMtxInfo raw, y = texture matrix index,
     * z = post index | normalize<<8, w = 1 when the texcoord exists | 2 when the dual
     * texture transform is enabled. tgmtx/tgpost are three rows per texgen. */
    int32_t  tginfo[8][4];
    float    tgmtx[24][4];
    float    tgpost[24][4];
    /* 16-byte aligned on BOTH sides: HLSL aligns a uint4 array to 16 bytes and would
     * insert padding if a scalar preceded it, so the scalars live after the arrays (the
     * mirror silently desynchronised the first time this was written). */
    uint32_t raschan[16][4];  /* per TEV stage: x = TEVORDER colorchan (raster source) */
    uint32_t tgneed;          /* bit g set = coordinate g has to be generated */
    uint32_t tgpad0, tgpad1, tgpad2;
    uint32_t ind_num;         /* GEN_MODE bits 16..18 */
    uint32_t ind_used;        /* 1 = some active stage really perturbs its coordinate */
    uint32_t num_stages;
    uint32_t alpha_test;
} GxTevConstants;

/* Landmarks of the cbuffer mirror. If one of these fires, `cbuffer GxTev` in
 * tools/compile_shaders.py no longer matches this struct - and the failure mode is
 * silent: HLSL 16-byte-aligns an array of uint4/float4 and inserts padding, so a scalar
 * inserted in front of one shifts every field after it while both sides still compile
 * (that is exactly how the colorchan field first desynchronised the layout). */
_Static_assert(sizeof(GxTevConstants) == 3360,
               "GxTevConstants changed size: update the `cbuffer GxTev` mirror");
_Static_assert(offsetof(GxTevConstants, raschan) % 16 == 0,
               "raschan must start 16-byte aligned, as HLSL aligns uint4 arrays");
_Static_assert(offsetof(GxTevConstants, num_stages) % 4 == 0, "scalar block misaligned");

/* XF texture coordinate generation (Dolphin VertexShaderGen WriteTexCoordTransforms) and
 * the stage/indirect coordinate selections that consume it.
 *
 * The host has always fed the TEX0/TEX1 attributes and nothing else, so a TEV stage that
 * names texcoord 2..7 sampled the wrong texture region - measured at present 3500, 15 of
 * 56 batches have an enabled stage naming texcoord >= 2 (24.6 % of the frame's vertices,
 * handover 5c.46 AP-O item 7). The cave's texgens are all TexGenType::Regular, so the
 * coordinate is a texture-matrix transform of a source row, optionally STQ-projected and
 * post-transformed; `TLS_XF_TEXGEN=1` generates them (default off until measured, because
 * the same path also transforms coordinates 0 and 1 and that is a picture-wide change).
 *
 * When the switch is off every coordinate selection keeps exactly the value it had
 * before this existed, which is what keeps the recorded invariant reproducible. */
static void gx_tev_fill_texgen(GxTevConstants* c, const GxDrawBatch* b, const GxTevState* st) {
    static int s_texgen = -1;
    if (s_texgen < 0) s_texgen = getenv("TLS_XF_TEXGEN") ? 1 : 0;
    /* 5c.46 AP-AU: THE PER-STAGE COORDINATE IS NOW THE DEFAULT, because it is not a feature -
     * a TEV stage samples the texcoord TEVORDER names, and the previous default substituted
     * coordinate 0 for every stage. Measured at the gate's content frame (guest 2800, same
     * capture, aurora as the Dolphin-derived reference): mean |d| vs aurora **11.20 -> 4.83**,
     * changed pixels 48.13 % -> 37.26 %, luma 45.58 -> 35.63 (aurora 37.00). The prompt for it
     * was `TLS_TEV_UNIFORM` showing `st2` asking for `coord=1` and receiving `uvsrc=0`.
     * The escape hatch is `TLS_NO_TEV_TEXCOORD`, value-tested with `atoi` so an empty string
     * cannot disable the default by accident (the AP-AR lesson); `TLS_TEV_TEXCOORD=1` is now a
     * no-op that asks for the default. 5c.23/AP-P recorded this switch as "default off until
     * measured" - it has now been measured, on two frames, in both directions. */
    static int s_texcoord_sel = -2;
    if (s_texcoord_sel == -2) {
        const char* off = getenv("TLS_NO_TEV_TEXCOORD");
        s_texcoord_sel = (off && atoi(off) != 0) ? 0 : 1;
    }

    uint32_t numtex = b->xf_num_texgens;
    for (int g = 0; g < 8; g++) {
        GxTexGenInfo ti;
        gx_pipeline_get_texgen(g, &ti);
        float tm[3][4], pm[3][4];
        gx_pipeline_get_tex_matrix(ti.mtx_index, tm);
        gx_pipeline_get_post_matrix(ti.post_index, pm);
        bool exists = (uint32_t)g < numtex;
        c->tginfo[g][0] = (int32_t)ti.info;
        c->tginfo[g][1] = (int32_t)ti.mtx_index;
        c->tginfo[g][2] = (int32_t)(ti.post_index | (ti.post_normalize << 8));
        c->tginfo[g][3] = (exists ? 1 : 0) | (gx_pipeline_xf_dualtex() ? 2 : 0);
        for (int r = 0; r < 3; r++) {
            for (int ch = 0; ch < 4; ch++) {
                c->tgmtx[g * 3 + r][ch] = tm[r][ch];
                c->tgpost[g * 3 + r][ch] = pm[r][ch];
            }
        }
    }

    /* Which coordinate each TEV stage samples (order[i][3]) and which one each indirect
     * stage reads (indref[i][3]): 0..7 = a coordinate, 8 = sample (0,0). */
    for (int i = 0; i < 16; i++) {
        uint32_t tc = st ? (uint32_t)st->texcoord[i] : 0u;
        if (s_texgen) {
            c->order[i][3] = (tc < numtex) ? tc : 8u;
        } else if (s_texcoord_sel) {
            /* 5c.46 AP-AU: Dolphin's quirk, quoted from its own comment in
             * PixelShaderGen.cpp WriteStage: "when the tex coord is not less than the number
             * of tex gens (i.e. the tex coord does not exist), then tex coord 0 is used".
             * A stage that names a coordinate GEN_MODE does not define therefore samples
             * TEX0 - NOT texel (0,0), which is what `8` selects and what this switch used to
             * fall back to for both cases. The two cases are different and the host only
             * owns one of them: (a) `tc >= numtex` is a GUEST declaration and hardware's
             * answer is coordinate 0; (b) `tc < numtex` but this batch does not feed that
             * attribute (the layer has TEX0/TEX1 only, and XF texgen is default-off) is a
             * HOST limitation, and (0,0) remains the honest stand-in there. */
            bool exists = (tc < numtex);
            bool fed = (tc < 2u) && (((b->texcoord_mask >> tc) & 1u) != 0u);
            c->order[i][3] = !exists ? 0u : (fed ? tc : 8u);
        } else {
            c->order[i][3] = 0u;
        }
    }
    for (int i = 0; i < 4; i++) {
        uint32_t tc = c->indref[i][1];
        if (s_texgen) c->indref[i][3] = (tc < numtex) ? tc : 8u;
        else c->indref[i][3] = (tc == 1u) ? 1u : 0u;   /* the pre-texgen rule */
    }

    /* Which generated coordinates are actually demanded. Generating all six costs a
     * 65 % slower frame (measured: 320 s -> 528 s for the same 3 800-frame run) and
     * almost every batch only names coordinates 0 and 1, so the shader is told exactly
     * which ones to build - and a coordinate another one reads as its source row is
     * demanded too. With the switch off the mask is 0 and the shader skips the whole
     * block, which is why the recorded frame is unaffected by it. */
    uint32_t need = 0;
    if (s_texgen && st) {
        for (uint32_t i = 0; i < st->num_stages && i < 16u; i++) {
            uint32_t tc = st->texcoord[i];
            uint32_t raw = st->ind_stage[i];
            /* A stage demands its coordinate if it samples a texture, or if it has
             * indirect work of its own (wrap / add-to-previous / an offset matrix),
             * because in that case its coordinate feeds tevcoord - which fb_addprev can
             * carry into the next stage even when this one samples nothing. */
            bool uses = st->tex_enable[i] != 0 ||
                        ((raw >> 13) & 7) || ((raw >> 16) & 7) || ((raw >> 20) & 1) ||
                        gx_ind_is_active(raw);
            if (uses && tc >= 2u && tc < numtex) need |= 1u << tc;
        }
        for (int i = 0; i < 4; i++) {
            uint32_t tc = c->indref[i][1];
            if (c->indref[i][2] && tc >= 2u && tc < numtex) need |= 1u << tc;
        }
        /* A needed coordinate reads another one through SourceRow::TexN. */
        for (int pass = 0; pass < 8; pass++) {
            uint32_t before = need;
            for (int g = 2; g < 8; g++) {
                if (!(need & (1u << g))) continue;
                GxTexGenInfo ti;
                gx_pipeline_get_texgen(g, &ti);
                if (ti.sourcerow >= 5u) {
                    uint32_t src = ti.sourcerow - 5u;
                    if (src >= 2u && src < numtex) need |= 1u << src;
                }
            }
            if (need == before) break;
        }
    }
    c->tgneed = need;

    /* TEVORDER colorchan: which XF colour - or zero - feeds this stage's raster input.
     * OFF by default (`TLS_TEV_RASCHAN=1` enables): the register the guest names is
     * channel 1 for exactly the 9 stages that read RASC/RASA, but its *value* comes out
     * of the XF channel-1 lighting path, and the XF light registers are not trustworthy
     * yet (frame 3500's light 1 decodes with a position of ~4.7e17). Measured with the
     * switch on: mean absolute difference 0.09/255, 0.3 % of pixels - i.e. near
     * equivalence, not a demonstrated improvement, so the recorded frame stays. */
    static int s_raschan = -1;
    if (s_raschan < 0) {
        const char* e = getenv("TLS_TEV_RASCHAN");
        s_raschan = (e && *e && *e != '0') ? 1 : 0;
    }
    for (int i = 0; i < 16; i++) {
        c->raschan[i][0] = (s_raschan && st) ? (uint32_t)st->colorchan[i] : 0u;
    }
}

static float gx_tev_reg_component(uint32_t raw) {    int32_t v = (int32_t)(raw & 0x7FF);
    if (v & 0x400) v -= 0x800;
    return (float)v / 255.0f;
}

static void gx_tev_fill_constants(GxTevConstants* c, const GxTevState* st, bool* need_compare) {
    memset(c, 0, sizeof(*c));
    if (!st) { c->num_stages = 0; return; }    for (int i = 0; i < 4; i++) {
        /* BP 0xE0+2i holds red (bits 0..10) and alpha (12..22);
         * BP 0xE1+2i holds blue (0..10) and green (12..22). */
        c->kreg[i][0] = gx_tev_reg_component(st->kreg_ra[i]);
        c->kreg[i][1] = gx_tev_reg_component(st->kreg_bg[i] >> 12);
        c->kreg[i][2] = gx_tev_reg_component(st->kreg_bg[i]);
        c->kreg[i][3] = gx_tev_reg_component(st->kreg_ra[i] >> 12);
        c->kprev[i][0] = c->kreg[i][0];
        c->kprev[i][1] = c->kreg[i][1];
        c->kprev[i][2] = c->kreg[i][2];
        c->kprev[i][3] = c->kreg[i][3];
        /* The TEV colour registers are the values r0/r1/r2 and prev start a draw with
         * (Dolphin PixelShaderGen.cpp: `prev = colors[0], c0 = colors[1] ...`). They
         * used to be hardcoded 0, so no compare stage could ever see a real operand. */
        c->creg[i][0] = gx_tev_reg_component(st->creg_ra[i]);
        c->creg[i][1] = gx_tev_reg_component(st->creg_bg[i] >> 12);
        c->creg[i][2] = gx_tev_reg_component(st->creg_bg[i]);
        c->creg[i][3] = gx_tev_reg_component(st->creg_ra[i] >> 12);
    }
    c->num_stages = st->num_stages ? st->num_stages : 1;
    /* GX swap tables (BP 0xF6..0xFD). Each pair of TevKSel registers defines one
     * channel permutation: the low pair maps output R/G from input channels, the high
     * pair maps B/A (Dolphin AllTevKSels::GetSwapTable). The ALPHA combiner's
     * tswap/rswap fields (bits 2-3 and 0-1) choose which table applies to the texture
     * sample and to the raster colour of that stage. This is the mechanism that turns
     * a texture with alpha 255 everywhere into a mask: the tutorial page's crest stage
     * names table 1 so that `tex.a` reads the texture's RED channel (handover 5c.46
     * AP-N). A completely zeroed register file is not a valid GX state - the game
     * always sets these, and all-zero would make every channel read red - so an
     * all-zero file keeps the identity permutation. */
    {
        uint32_t swap[4][4];
        bool any_ksel = false;
        for (int i = 0; i < 8; i++) if (st->ksel[i]) any_ksel = true;
        for (int id = 0; id < 4; id++) {
            if (!any_ksel) { swap[id][0] = 0; swap[id][1] = 1; swap[id][2] = 2; swap[id][3] = 3; continue; }
            uint32_t rg = st->ksel[id * 2], ba = st->ksel[id * 2 + 1];
            swap[id][0] = rg & 3;         /* R <- swap_rb of the even ksel */
            swap[id][1] = (rg >> 2) & 3;  /* G <- swap_ga */
            swap[id][2] = ba & 3;         /* B <- swap_rb of the odd ksel */
            swap[id][3] = (ba >> 2) & 3;  /* A <- swap_ga */
        }
        for (int i = 0; i < 16; i++) {
            uint32_t ts = (st->combiner_alpha[i] >> 2) & 3;
            uint32_t rs = st->combiner_alpha[i] & 3;
            for (int ch = 0; ch < 4; ch++) {
                c->tswap[i][ch] = swap[ts][ch];
                c->rswap[i][ch] = swap[rs][ch];
            }
        }
    }
    for (int i = 0; i < 16; i++) {
        c->color[i][0] = st->combiner_color[i];
        c->color[i][1] = st->combiner_alpha[i];
        c->ksel[i][0] = st->kcsel[i];
        c->ksel[i][1] = st->kasel[i];
        c->order[i][0] = st->texmap[i];
        c->order[i][1] = st->texcoord[i];
        c->order[i][2] = st->tex_enable[i];
        if (i < c->num_stages && (((st->combiner_color[i] >> 16) & 3) == 3 ||
                                  ((st->combiner_alpha[i] >> 16) & 3) == 3)) {
            if (need_compare) *need_compare = true;
        }
    }
    c->alpha_test = (uint32_t)st->alpha_comp0 |
                    ((uint32_t)st->alpha_comp1 << 3) |
                    ((uint32_t)st->alpha_logic << 6) |
                    ((uint32_t)st->alpha_ref0 << 8) |
                    ((uint32_t)st->alpha_ref1 << 16);

    /* ---------------------------------------------------------------------
     * GX indirect texturing. Dolphin PixelShaderGen.cpp / PixelShaderManager:
     * each of the three offset matrices is uploaded as two rows of 11-bit signed
     * elements plus w = 17 - scale, and the shader shifts the dot product right by
     * that count (a negative w shifts left). The per-indirect-stage texmap and
     * texcoord come from RAS1_IREF, and only the indirect stages a TEV stage
     * actually consumes are marked used - `ind_used` is the shader's "the fast
     * path is not taken" flag, so a batch with no indirect work samples exactly
     * where it did before this was implemented.
     * ------------------------------------------------------------------- */
    c->ind_num = st->num_ind_stages;
    c->indscale[0][0] = st->ind_texscale[0] & 0xF;
    c->indscale[0][1] = (st->ind_texscale[0] >> 4) & 0xF;
    c->indscale[0][2] = (st->ind_texscale[0] >> 8) & 0xF;
    c->indscale[0][3] = (st->ind_texscale[0] >> 12) & 0xF;
    c->indscale[1][0] = st->ind_texscale[1] & 0xF;
    c->indscale[1][1] = (st->ind_texscale[1] >> 4) & 0xF;
    c->indscale[1][2] = (st->ind_texscale[1] >> 8) & 0xF;
    c->indscale[1][3] = (st->ind_texscale[1] >> 12) & 0xF;
    for (int m = 0; m < 3; m++) {
        int row[2][3], shift = 0;
        gx_ind_matrix(st->ind_mtx, m, row, &shift);
        for (int ch = 0; ch < 3; ch++) {
            c->ind_mtx[m * 2][ch] = row[0][ch];
            c->ind_mtx[m * 2 + 1][ch] = row[1][ch];
        }
        c->ind_mtx[m * 2][3] = shift;
        c->ind_mtx[m * 2 + 1][3] = shift;
    }
    {
        bool used = false;
        for (int i = 0; i < 16; i++) {
            uint32_t raw = st->ind_stage[i];
            c->indword[i][0] = raw;
            if (i >= c->num_stages) continue;
            /* Only what actually MOVES the coordinate counts: an offset matrix on an
             * indirect stage GEN_MODE says does not exist is inert (measured: frame 3500
             * has batches whose TevStageIndirect names matrix 0 while numindstages is
             * 0), and a wrap or add-to-previous perturbs it on its own. Anything else -
             * in particular the bare `bs` bump-alpha field - must not divert the batch
             * away from the unchanged sampling path. */
            bool moves = false;
            if (((raw >> 9) & 3) != 0 && (raw & 3u) < st->num_ind_stages) moves = true;
            if (((raw >> 13) & 7) || ((raw >> 16) & 7) || ((raw >> 20) & 1)) moves = true;
            if (moves) used = true;
        }
        c->ind_used = used ? 1u : 0u;
        /* TLS_TEV_NO_IND=1 forces the unperturbed coordinate, which is the A/B that
         * isolates what indirect texturing contributes to a frame (handover 5c.46
         * AP-O). */
        {
            static int s_no_ind = -1;
            if (s_no_ind < 0) s_no_ind = getenv("TLS_TEV_NO_IND") ? 1 : 0;
            if (s_no_ind) c->ind_used = 0u;
        }
    }
    for (int i = 0; i < 4; i++) {
        c->indref[i][0] = gx_ind_iref_map(st->ind_iref, i);
        c->indref[i][1] = gx_ind_iref_coord(st->ind_iref, i);
        c->indref[i][2] = ((uint32_t)i < st->num_ind_stages) ? 1u : 0u;
    }
}

/* Texture dimensions per texmap, which the indirect path needs to convert between
 * normalized UV and GX's fixpoint coordinate. Dolphin keeps this in I_TEXDIMS and
 * generates the fixpoint coordinate as `uv * (dims * 128)`, then divides the
 * (possibly perturbed) coordinate by the same `dims * 128` before sampling - so the
 * unperturbed case round-trips to the same UV, and an indirect offset of N fixpoint
 * units is N/128 texels. That is why taking the fast path in the shader when
 * ind_used == 0 keeps a batch bit-identical to the pre-indirect behaviour. */
static void gx_tev_fill_dims(GxTevConstants* c, const GxDrawBatch* b) {
    for (int m = 0; m < 8; m++) {
        uint32_t w = 0, h = 0;
        if (b->tev_texmap_mask & (1u << m)) {
            w = b->tev_texmap[m].width;
            h = b->tev_texmap[m].height;
            /* GX wrap mode 1 is REPEAT. The TEV path used to bind the CLAMP sampler
             * for every stage, so any batch whose coordinate leaves [0,1) - which the
             * cave's tiling rock textures do everywhere - had its border texels
             * stretched across the surface: the smeared bands that made the 3D
             * widening look broken (handover 5c.46 AP-O). The legacy path already
             * honoured this per batch; here it is per MAP, because the stages of one
             * batch can sample maps with different wrap modes. */
            if (b->tev_texmap[m].wrap_s == 1 || b->tev_texmap[m].wrap_t == 1)
                c->wrap[m][0] = 1;
        }
        if ((w == 0 || h == 0) && b->has_texture) { w = b->tex.width; h = b->tex.height; }
        if (w == 0 || h == 0) { w = 1; h = 1; }
        c->dim[m][0] = (int32_t)w;
        c->dim[m][1] = (int32_t)h;
    }
    /* The fixpoint coordinate is generated from a TEXCOORD's scale, not from the
     * sampled map's size (Dolphin I_TEXDIMS[i].zw = TCoordInfo.scale_minus_1 + 1, and
     * its sampleTexture divides by I_TEXDIMS[texmap].xy * 128). Measured at frame 3500
     * the guest sets BP 0x30 = 0x000100FF / 0x000000FF, i.e. scale 256 for both
     * texcoords - equal to the 256x256 wall atlas, so the wall coordinate round-trips
     * exactly, while the 4x4 dither map the third stage multiplies in is sampled at
     * 64x its own resolution, which is what produces the fine dither the reference
     * has. Using the sampled map's size for generation instead (this host's first
     * attempt) turned that dither into broad bands. */
    for (int t = 0; t < 8; t++) {
        uint32_t s_raw = gx_pipeline_get_tc_info(t, 0);
        uint32_t t_raw = gx_pipeline_get_tc_info(t, 1);
        c->dim[t][2] = (int32_t)((s_raw & 0xFFFF) + 1);
        c->dim[t][3] = (int32_t)((t_raw & 0xFFFF) + 1);
    }
}


// Forward declaration of backend state
typedef struct {
    HWND hwnd;
    ID3D11Device* device;
    ID3D11DeviceContext* context;
    IDXGISwapChain* swap_chain;
    ID3D11RenderTargetView* rtv;
    ID3D11Texture2D* depth_stencil_texture;
    ID3D11DepthStencilView* dsv;
    ID3D11DepthStencilState* ds_state_3d_opaque;
    ID3D11DepthStencilState* ds_state_3d_alpha;
    ID3D11DepthStencilState* ds_state_ui;
    ID3D11Texture2D* fb_texture;
    ID3D11ShaderResourceView* fb_srv;
    ID3D11SamplerState* sampler_linear;
    ID3D11SamplerState* sampler_point;
    ID3D11SamplerState* sampler_wrap;
    ID3D11VertexShader* vs;
    ID3D11PixelShader* ps;

    // GX 3D Pipeline rendering resources
    ID3D11InputLayout* gx_input_layout;
    ID3D11Buffer* gx_vbo;
    ID3D11VertexShader* gx_vs;
    ID3D11PixelShader* gx_ps;
    ID3D11PixelShader* gx_ps_opaque;
    ID3D11PixelShader* gx_ps_alpha;
    ID3D11PixelShader* gx_ps_alpha_flat;   /* raster-colour RGB + texture alpha */
    /* TEV pixel pipeline (TLS_TEV=1): the GX texture environment, driven by the
     * per-batch state in GxDrawBatch::tev_state. Off by default until measured. */
    ID3D11PixelShader* gx_ps_tev;
    ID3D11Buffer* gx_tev_cb;
    bool tev_enabled;
    ID3D11BlendState* blend_state_alpha;
    ID3D11RasterizerState* rs_cull_none;
    /* The SAME rasterizer state plus ScissorEnable=TRUE. D3D11 IGNORES RSSetScissorRects
     * unless the bound rasterizer state enables scissoring, and until AP-AQ the only
     * rasterizer state in the backend had ScissorEnable=FALSE, so the AP-AP diagnostic
     * `TLS_SCISSOR=1` could not clip anything - which is what its "byte-identical frame"
     * result actually measured (handover 5c.46 AP-AQ). Bound on every batch since AP-AR
     * promoted the fix; TLS_NO_SCISSOR=1 restores the old single-state path. */
    ID3D11RasterizerState* rs_scissor;
    ID3D11Texture2D* gx_tex_white;
    ID3D11ShaderResourceView* gx_tex_white_srv;

#define GX_MAX_CACHED_TEXTURES 1024
    struct {
        uint32_t guest_addr;
        uint32_t width;
        uint32_t height;
        uint32_t format;
        uint32_t tlut_addr;
        uint32_t tlut_format;
        uint32_t last_frame;
        uint32_t hash;
        /* Mean of the staging buffer AT THE LAST UPLOAD, per channel (0..255). The
         * staging buffer itself is shared and is overwritten by every later decode, so
         * "what did the shader sample on a cache HIT" cannot be read back from it - it
         * has to be remembered here. Used by the TLS_TEX_CACHE_LOG instrument below. */
        float mean_r, mean_g, mean_b, mean_a;
        uint32_t upd_frame;   /* frame_counter of the last actual upload */
        ID3D11Texture2D* tex;
        ID3D11ShaderResourceView* srv;
        bool is_all_zero;
    } tex_cache[GX_MAX_CACHED_TEXTURES];
    uint32_t* gx_staging_rgba;
    uint32_t gx_staging_capacity;
    uint32_t frame_counter;
    /* last completed frame, source for EFB -> texture copies */
    ID3D11Texture2D* efb_snapshot;
    UINT efb_snapshot_w, efb_snapshot_h;

    /* viewport rect used to scale the GX image onto the backbuffer (EFB copy) */
    float vp_x, vp_y, vp_w, vp_h;
    
    int fb_width;
    int fb_height;
    int win_width;
    int win_height;
    bool vsync;
    bool fullscreen;
    GfxAspectRatio aspect_ratio;
    uint32_t* rgba_staging;
} D3D11Backend;

/* EFB -> texture copy (implemented below, registered by d3d11_init). */
static void d3d11_efb_copy_to_guest(uint32_t dst_guest, uint32_t x0, uint32_t y0,
                                    uint32_t x1, uint32_t y1, uint32_t format, int half_scale,
                                    uint32_t pitch, uint32_t exec);

/* Non-zero while d3d11_service_pending_copies() is replaying a queued copy. Read by
 * d3d11_efb_copy_to_guest to decide the copy's SOURCE: a replayed copy must sample the
 * live back buffer (the frame as drawn up to its vertex mark), an inline copy keeps the
 * legacy previous-frame snapshot. Before AP-R this was inferred from the GLOBAL
 * TLS_DEFER_EFB_COPY flag, which is why a deferred-by-class copy (`TLS_EFB_ORDER=
 * staging`) still read the snapshot and still baked a transparent hero. */
static int s_replaying_copy = 0;

/* Copy sequence number and the path the last copy took, readable from the guest-side
 * probes in replacements.c (see d3d11_efb_copy_to_guest). */
unsigned g_efb_copy_seq = 0;
int g_efb_copy_last_replay = 0;

/* Non-zero while gfx_flush_gx_now() is running the draw phase outside a real present.
 * GXDrawDone (0x806140C0) is the guest's "the FIFO has been consumed" sync, and the guest
 * relies on it: fn_800D7278 issues an EFB copy, calls GXDrawDone, and only then reads the
 * copied image (handover 5c.46 AP-W8). The host threw that away - the copy was performed
 * either inline (before the frame's draws, so it captured the previous frame) or at the
 * end of the present (after the guest had already read it).
 *
 * A flush replicates exactly what the hardware's EFB looks like at that moment: the
 * previous frame's content PLUS everything drawn so far this frame, which is why it must
 * NOT clear (the real present still clears and redraws its own complete batch list, so the
 * displayed picture does not change) and must NOT consume the accumulated geometry (the
 * present redraws it from scratch). With copies queued - `TLS_EFB_ORDER=staging` - the
 * flush's final service call is the first moment a copy can sample the drawn frame while
 * the guest is still waiting inside GXDrawDone. */
static int s_flush_only = 0;

static D3D11Backend s_d3d11 = {0};

// Precompiled bytecode for fullscreen triangle vertex shader
// HLSL:
// struct VSOut { float4 pos : SV_Position; float2 uv : TEXCOORD; };
// VSOut main(uint id : SV_VertexID) {
//     VSOut o;
//     o.uv = float2((id << 1) & 2, id & 2);
//     o.pos = float4(o.uv * float2(2.0, -2.0) + float2(-1.0, 1.0), 0.0, 1.0);
//     return o;
// }
#include "../build/recomp/d3d11_shaders.inl"


#include "../build/recomp/gx_shaders_d3d11.inl"


static void recreate_render_target(void) {
    if (s_d3d11.rtv) {
        ID3D11RenderTargetView_Release(s_d3d11.rtv);
        s_d3d11.rtv = NULL;
    }
    if (s_d3d11.dsv) {
        ID3D11DepthStencilView_Release(s_d3d11.dsv);
        s_d3d11.dsv = NULL;
    }
    if (s_d3d11.depth_stencil_texture) {
        ID3D11Texture2D_Release(s_d3d11.depth_stencil_texture);
        s_d3d11.depth_stencil_texture = NULL;
    }

    ID3D11Texture2D* back_buffer = NULL;
    HRESULT hr = IDXGISwapChain_GetBuffer(s_d3d11.swap_chain, 0, &IID_ID3D11Texture2D, (void**)&back_buffer);
    if (SUCCEEDED(hr) && back_buffer) {
        ID3D11Device_CreateRenderTargetView(s_d3d11.device, (ID3D11Resource*)back_buffer, NULL, &s_d3d11.rtv);
        ID3D11Texture2D_Release(back_buffer);
    }

    // Create 24-bit Depth + 8-bit Stencil buffer matching backbuffer dimensions
    D3D11_TEXTURE2D_DESC depth_desc = {0};
    depth_desc.Width = s_d3d11.win_width;
    depth_desc.Height = s_d3d11.win_height;
    depth_desc.MipLevels = 1;
    depth_desc.ArraySize = 1;
    depth_desc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;
    depth_desc.SampleDesc.Count = 1;
    depth_desc.SampleDesc.Quality = 0;
    depth_desc.Usage = D3D11_USAGE_DEFAULT;
    depth_desc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

    hr = ID3D11Device_CreateTexture2D(s_d3d11.device, &depth_desc, NULL, &s_d3d11.depth_stencil_texture);
    if (SUCCEEDED(hr) && s_d3d11.depth_stencil_texture) {
        ID3D11Device_CreateDepthStencilView(s_d3d11.device, (ID3D11Resource*)s_d3d11.depth_stencil_texture, NULL, &s_d3d11.dsv);
        printf("[D3D11] Created %ux%u Hardware Depth-Stencil Buffer (D24S8)\n", s_d3d11.win_width, s_d3d11.win_height);
    }
}

bool d3d11_init(HWND hwnd, const GfxConfig* config) {
    s_d3d11.hwnd = hwnd;
    s_d3d11.win_width = config->window_width;
    s_d3d11.win_height = config->window_height;
    s_d3d11.vsync = config->vsync;
    s_d3d11.fullscreen = config->fullscreen;
    s_d3d11.aspect_ratio = config->aspect_ratio;
    s_d3d11.fb_width = 640;
    s_d3d11.fb_height = 480;

    DXGI_SWAP_CHAIN_DESC scd = {0};
    scd.BufferCount = 2;
    scd.BufferDesc.Width = s_d3d11.win_width;
    scd.BufferDesc.Height = s_d3d11.win_height;
    scd.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
    scd.BufferDesc.RefreshRate.Numerator = config->target_fps > 0 ? (UINT)config->target_fps : 60;
    scd.BufferDesc.RefreshRate.Denominator = 1;
    scd.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
    scd.OutputWindow = hwnd;
    scd.SampleDesc.Count = 1;
    scd.SampleDesc.Quality = 0;
    scd.Windowed = !config->fullscreen;
    scd.SwapEffect = DXGI_SWAP_EFFECT_DISCARD;

    D3D_FEATURE_LEVEL feature_levels[] = {
        D3D_FEATURE_LEVEL_11_0,
        D3D_FEATURE_LEVEL_10_1,
        D3D_FEATURE_LEVEL_10_0
    };
    D3D_FEATURE_LEVEL feature_level;

    HRESULT hr = D3D11CreateDeviceAndSwapChain(
        NULL,
        D3D_DRIVER_TYPE_HARDWARE,
        NULL,
        0,
        feature_levels,
        sizeof(feature_levels) / sizeof(feature_levels[0]),
        D3D11_SDK_VERSION,
        &scd,
        &s_d3d11.swap_chain,
        &s_d3d11.device,
        &feature_level,
        &s_d3d11.context
    );

    if (FAILED(hr)) {
        printf("[D3D11] Failed to create device and swapchain: 0x%08lX\n", (unsigned long)hr);
        return false;
    }

    recreate_render_target();

    // Create Shaders from bytecode
    hr = ID3D11Device_CreateVertexShader(s_d3d11.device, s_vs_bytecode, sizeof(s_vs_bytecode), NULL, &s_d3d11.vs);
    if (FAILED(hr)) {
        printf("[D3D11] Failed to create vertex shader\n");
        return false;
    }

    hr = ID3D11Device_CreatePixelShader(s_d3d11.device, s_ps_bytecode, sizeof(s_ps_bytecode), NULL, &s_d3d11.ps);
    if (FAILED(hr)) {
        printf("[D3D11] Failed to create pixel shader\n");
        return false;
    }

    // Create GX Shaders, Input Layout & Dynamic Vertex Buffer
    hr = ID3D11Device_CreateVertexShader(s_d3d11.device, s_gx_vs_bytecode, sizeof(s_gx_vs_bytecode), NULL, &s_d3d11.gx_vs);
    if (FAILED(hr)) {
        printf("[D3D11] Failed to create GX vertex shader: 0x%08X\n", (unsigned int)hr);
    }
    hr = ID3D11Device_CreatePixelShader(s_d3d11.device, s_gx_ps_opaque_bytecode, sizeof(s_gx_ps_opaque_bytecode), NULL, &s_d3d11.gx_ps_opaque);
    if (FAILED(hr)) {
        printf("[D3D11] Failed to create GX opaque pixel shader: 0x%08X\n", (unsigned int)hr);
    }
    hr = ID3D11Device_CreatePixelShader(s_d3d11.device, s_gx_ps_alpha_bytecode, sizeof(s_gx_ps_alpha_bytecode), NULL, &s_d3d11.gx_ps_alpha);
    hr = ID3D11Device_CreatePixelShader(s_d3d11.device, s_gx_ps_alpha_flat_bytecode, sizeof(s_gx_ps_alpha_flat_bytecode), NULL, &s_d3d11.gx_ps_alpha_flat);
    if (FAILED(hr)) {
        printf("[D3D11] Failed to create GX alpha pixel shader: 0x%08X\n", (unsigned int)hr);
    }
    hr = ID3D11Device_CreatePixelShader(s_d3d11.device, s_gx_ps_tev_bytecode, sizeof(s_gx_ps_tev_bytecode), NULL, &s_d3d11.gx_ps_tev);
    if (FAILED(hr)) {
        fprintf(stderr, "[GFX] Failed to create TEV pixel shader hr=0x%08lX\n", (unsigned long)hr);
        return false;
    }

    /* Per-batch TEV state: 4 K registers + 4 previous + 4 colour + 16 combiners + 16
     * konst selectors + 16 orders + 16 texture swap tables + 16 raster swap tables +
     * 6 indirect-matrix rows + 8 texture dims + 4 indirect orders + 2 texscales + 16
     * indirect words + 4 scalars. Must match the GxTevConstants mirror of
     * tools/compile_shaders.py's `cbuffer GxTev`. */
    {
        D3D11_BUFFER_DESC cb_desc;
        memset(&cb_desc, 0, sizeof(cb_desc));
        cb_desc.ByteWidth = sizeof(GxTevConstants) + ((16 - (sizeof(GxTevConstants) % 16)) % 16);
        cb_desc.Usage = D3D11_USAGE_DYNAMIC;
        cb_desc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;
        cb_desc.CPUAccessFlags = D3D11_CPU_ACCESS_WRITE;
        hr = ID3D11Device_CreateBuffer(s_d3d11.device, &cb_desc, NULL, &s_d3d11.gx_tev_cb);
        if (FAILED(hr)) {
            fprintf(stderr, "[GFX] Failed to create TEV constant buffer hr=0x%08lX\n", (unsigned long)hr);
            return false;
        }
    }
    s_d3d11.tev_enabled = getenv("TLS_TEV") != NULL;
    s_d3d11.gx_ps = s_d3d11.gx_ps_alpha;

    D3D11_INPUT_ELEMENT_DESC gx_elements[] = {
        {"POSITION", 0, DXGI_FORMAT_R32G32B32A32_FLOAT, 0, 0,  D3D11_INPUT_PER_VERTEX_DATA, 0},
        {"NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT,    0, 16, D3D11_INPUT_PER_VERTEX_DATA, 0},
        {"TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,       0, 28, D3D11_INPUT_PER_VERTEX_DATA, 0},
        {"COLOR",    0, DXGI_FORMAT_R8G8B8A8_UNORM,     0, 36, D3D11_INPUT_PER_VERTEX_DATA, 0},
        {"TEXCOORD", 1, DXGI_FORMAT_R32G32_FLOAT,       0, 40, D3D11_INPUT_PER_VERTEX_DATA, 0},
        /* Object-space position, appended so the offsets above are unchanged; the XF
         * texgen needs it (SourceRow::Geom) - handover 5c.46 AP-P. */
        {"TEXCOORD", 2, DXGI_FORMAT_R32G32B32_FLOAT,    0, 48, D3D11_INPUT_PER_VERTEX_DATA, 0},
        /* XF colour channel 1, which TEVORDER's colorchan can select as the raster
         * colour (5c.46 AP-P). Appended, so the offsets above are untouched. */
        {"COLOR",    1, DXGI_FORMAT_R8G8B8A8_UNORM,     0, 60, D3D11_INPUT_PER_VERTEX_DATA, 0},
    };
    hr = ID3D11Device_CreateInputLayout(s_d3d11.device, gx_elements, 7, s_gx_vs_bytecode, sizeof(s_gx_vs_bytecode), &s_d3d11.gx_input_layout);
    if (FAILED(hr)) {
        printf("[D3D11] Failed to create GX input layout: 0x%08X\n", (unsigned int)hr);
    }

    D3D11_BUFFER_DESC vbo_desc = {0};
    vbo_desc.ByteWidth = GX_MAX_BATCH_VERTICES * sizeof(GxVertex);
    vbo_desc.Usage = D3D11_USAGE_DYNAMIC;
    vbo_desc.BindFlags = D3D11_BIND_VERTEX_BUFFER;
    vbo_desc.CPUAccessFlags = D3D11_CPU_ACCESS_WRITE;
    ID3D11Device_CreateBuffer(s_d3d11.device, &vbo_desc, NULL, &s_d3d11.gx_vbo);

    // Create Sampler State (Linear Bilinear filtering)
    D3D11_SAMPLER_DESC samp_desc = {0};
    samp_desc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;
    samp_desc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;
    samp_desc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;
    samp_desc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;
    samp_desc.ComparisonFunc = D3D11_COMPARISON_NEVER;
    samp_desc.MinLOD = 0;
    samp_desc.MaxLOD = D3D11_FLOAT32_MAX;
    ID3D11Device_CreateSamplerState(s_d3d11.device, &samp_desc, &s_d3d11.sampler_linear);

    samp_desc.AddressU = D3D11_TEXTURE_ADDRESS_WRAP;
    samp_desc.AddressV = D3D11_TEXTURE_ADDRESS_WRAP;
    samp_desc.AddressW = D3D11_TEXTURE_ADDRESS_WRAP;
    ID3D11Device_CreateSamplerState(s_d3d11.device, &samp_desc, &s_d3d11.sampler_wrap);

    // Create dynamic guest framebuffer texture (640x480 RGBA8)
    D3D11_TEXTURE2D_DESC tex_desc = {0};
    tex_desc.Width = s_d3d11.fb_width;
    tex_desc.Height = s_d3d11.fb_height;
    tex_desc.MipLevels = 1;
    tex_desc.ArraySize = 1;
    tex_desc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
    tex_desc.SampleDesc.Count = 1;
    tex_desc.Usage = D3D11_USAGE_DYNAMIC;
    tex_desc.BindFlags = D3D11_BIND_SHADER_RESOURCE;
    tex_desc.CPUAccessFlags = D3D11_CPU_ACCESS_WRITE;

    hr = ID3D11Device_CreateTexture2D(s_d3d11.device, &tex_desc, NULL, &s_d3d11.fb_texture);
    if (SUCCEEDED(hr)) {
        ID3D11Device_CreateShaderResourceView(s_d3d11.device, (ID3D11Resource*)s_d3d11.fb_texture, NULL, &s_d3d11.fb_srv);
    }

    // Create Alpha Blend State for GX Primitives
    D3D11_BLEND_DESC blend_desc = {0};
    blend_desc.RenderTarget[0].BlendEnable = TRUE;
    blend_desc.RenderTarget[0].SrcBlend = D3D11_BLEND_SRC_ALPHA;
    blend_desc.RenderTarget[0].DestBlend = D3D11_BLEND_INV_SRC_ALPHA;
    blend_desc.RenderTarget[0].BlendOp = D3D11_BLEND_OP_ADD;
    blend_desc.RenderTarget[0].SrcBlendAlpha = D3D11_BLEND_ONE;
    blend_desc.RenderTarget[0].DestBlendAlpha = D3D11_BLEND_INV_SRC_ALPHA;
    blend_desc.RenderTarget[0].BlendOpAlpha = D3D11_BLEND_OP_ADD;
    blend_desc.RenderTarget[0].RenderTargetWriteMask = D3D11_COLOR_WRITE_ENABLE_ALL;
    ID3D11Device_CreateBlendState(s_d3d11.device, &blend_desc, &s_d3d11.blend_state_alpha);

    // Create Rasterizer State with no backface culling for GX 2D/3D geometry
    D3D11_RASTERIZER_DESC rdesc = {0};
    rdesc.FillMode = D3D11_FILL_SOLID;
    rdesc.CullMode = D3D11_CULL_NONE;
    rdesc.FrontCounterClockwise = FALSE;
    rdesc.DepthClipEnable = FALSE;
    ID3D11Device_CreateRasterizerState(s_d3d11.device, &rdesc, &s_d3d11.rs_cull_none);
    /* Second instance, identical except that scissoring is enabled: RSSetScissorRects has no
     * effect without it (D3D11_RASTERIZER_DESC::ScissorEnable). Bound whenever the guest's
     * BP 0x20/0x21 rect is applied, which since handover 5c.46 AP-AR is the DEFAULT; the
     * pre-AP-AR behaviour is reachable with TLS_NO_SCISSOR=1. */
    rdesc.ScissorEnable = TRUE;
    ID3D11Device_CreateRasterizerState(s_d3d11.device, &rdesc, &s_d3d11.rs_scissor);

    // 3D Opaque Depth State: Test enabled (LESS_EQUAL), Depth write enabled
    D3D11_DEPTH_STENCIL_DESC ds_op_desc = {0};
    ds_op_desc.DepthEnable = TRUE;
    ds_op_desc.DepthWriteMask = D3D11_DEPTH_WRITE_MASK_ALL;
    ds_op_desc.DepthFunc = D3D11_COMPARISON_LESS_EQUAL;
    ds_op_desc.StencilEnable = FALSE;
    ID3D11Device_CreateDepthStencilState(s_d3d11.device, &ds_op_desc, &s_d3d11.ds_state_3d_opaque);

    // 3D Alpha Depth State: Test enabled (LESS_EQUAL), Depth write disabled (for transparent particles/glass)
    D3D11_DEPTH_STENCIL_DESC ds_al_desc = {0};
    ds_al_desc.DepthEnable = TRUE;
    ds_al_desc.DepthWriteMask = D3D11_DEPTH_WRITE_MASK_ZERO;
    ds_al_desc.DepthFunc = D3D11_COMPARISON_LESS_EQUAL;
    ds_al_desc.StencilEnable = FALSE;
    ID3D11Device_CreateDepthStencilState(s_d3d11.device, &ds_al_desc, &s_d3d11.ds_state_3d_alpha);

    // 2D UI Depth State: Test disabled, Depth write disabled
    D3D11_DEPTH_STENCIL_DESC ds_ui_desc = {0};
    ds_ui_desc.DepthEnable = FALSE;
    ds_ui_desc.DepthWriteMask = D3D11_DEPTH_WRITE_MASK_ZERO;
    ds_ui_desc.DepthFunc = D3D11_COMPARISON_ALWAYS;
    ds_ui_desc.StencilEnable = FALSE;
    ID3D11Device_CreateDepthStencilState(s_d3d11.device, &ds_ui_desc, &s_d3d11.ds_state_ui);

    // Create 1x1 White Texture fallback
    uint32_t white_pixel = 0xFFFFFFFF;
    D3D11_SUBRESOURCE_DATA init_data = { &white_pixel, 4, 4 };
    D3D11_TEXTURE2D_DESC white_desc = {0};
    white_desc.Width = 1;
    white_desc.Height = 1;
    white_desc.MipLevels = 1;
    white_desc.ArraySize = 1;
    white_desc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
    white_desc.SampleDesc.Count = 1;
    white_desc.Usage = D3D11_USAGE_IMMUTABLE;
    white_desc.BindFlags = D3D11_BIND_SHADER_RESOURCE;
    ID3D11Device_CreateTexture2D(s_d3d11.device, &white_desc, &init_data, &s_d3d11.gx_tex_white);
    ID3D11Device_CreateShaderResourceView(s_d3d11.device, (ID3D11Resource*)s_d3d11.gx_tex_white, NULL, &s_d3d11.gx_tex_white_srv);

    s_d3d11.rgba_staging = (uint32_t*)malloc(s_d3d11.fb_width * s_d3d11.fb_height * sizeof(uint32_t));

    printf("[D3D11] Initialized Direct3D 11 Hardware Graphics Pipeline (%dx%d, VSync: %s)\n",
           s_d3d11.win_width, s_d3d11.win_height, s_d3d11.vsync ? "ON" : "OFF");
    /* EFB copies run inline (reading the last completed frame) unless
     * TLS_DEFER_EFB_COPY=1, which asks this backend to replay the pipeline's copy queue
     * from inside the batch loop instead. See handover 5c.15 for why the deferred mode,
     * although it is what the hardware does, is not the default yet. */
    gx_pipeline_set_efb_copy_hook(d3d11_efb_copy_to_guest);
    gx_pipeline_set_efb_copy_deferred(getenv("TLS_DEFER_EFB_COPY") ? 1 : 0);
    return true;
}

static inline uint8_t clamp_u8(int v) {
    return (uint8_t)(v < 0 ? 0 : (v > 255 ? 255 : v));
}

static inline uint32_t decode_tlut_pixel(const uint8_t* tlut_data, uint32_t idx, uint32_t format) {
    if (!tlut_data) {
        uint8_t gray = (uint8_t)(idx * 17);
        return (uint32_t)(gray | (gray << 8) | (gray << 16) | (0xFF << 24));
    }
    uint8_t b0 = tlut_data[idx * 2 + 0];
    uint8_t b1 = tlut_data[idx * 2 + 1];
    uint16_t val = (uint16_t)(((uint16_t)b0 << 8) | b1);
    switch (format) {
        case 0: { // GX_TL_IA8: byte 0 = alpha, byte 1 = intensity
            uint8_t a = b0;
            uint8_t i = b1;
            return (uint32_t)(i | (i << 8) | (i << 16) | (a << 24));
        }
        case 1: { // GX_TL_RGB565
            uint8_t r = ((val >> 11) & 0x1F) * 255 / 31;
            uint8_t g = ((val >> 5) & 0x3F) * 255 / 63;
            uint8_t b = (val & 0x1F) * 255 / 31;
            return (uint32_t)(r | (g << 8) | (b << 16) | (0xFF << 24));
        }
        case 2: // GX_TL_RGB5A3
        default: {
            if (val & 0x8000) {
                uint8_t r = ((val >> 10) & 0x1F) * 255 / 31;
                uint8_t g = ((val >> 5) & 0x1F) * 255 / 31;
                uint8_t b = (val & 0x1F) * 255 / 31;
                return (uint32_t)(r | (g << 8) | (b << 16) | (0xFF << 24));
            } else {
                uint8_t a = ((val >> 12) & 0x7) * 255 / 7;
                uint8_t r = ((val >> 8) & 0xF) * 17;
                uint8_t g = ((val >> 4) & 0xF) * 17;
                uint8_t b = (val & 0xF) * 17;
                return (uint32_t)(r | (g << 8) | (b << 16) | (a << 24));
            }
        }
    }
}

/* TLS_TEX_CACHE_LOG=0xA[,0xB...]: is <addr> one of the addresses whose binds are logged?
 * Parsed once, inert otherwise. This is also the guard on the per-upload staging mean in
 * decode_gx_texture, so the DEFAULT path pays one comparison per upload and nothing else:
 * a debug reduction over every texture upload would slow the runner, and a slowed runner
 * is indistinguishable from a loaded host when the gate's handover frame is read. */
static bool texlog_wanted(uint32_t addr) {
    static uint32_t addrs[4];
    static int n = -1;
    if (n < 0) {
        n = 0;
        const char* e = getenv("TLS_TEX_CACHE_LOG");
        while (e && *e && n < 4) {
            while (*e == ',' || *e == ' ') e++;
            if (!*e) break;
            addrs[n++] = (uint32_t)strtoul(e, (char**)&e, 0);
        }
    }
    if (n == 0) return false;
    for (int i = 0; i < n; i++)
        if (addrs[i] == addr) return true;
    return false;
}

static void decode_gx_texture(const uint8_t* src, uint32_t width, uint32_t height, uint32_t format, uint32_t* dst, uint32_t tlut_addr, uint32_t tlut_format) {

    if (!src || !dst) return;
    switch (format) {
        case 0: { // GX_TF_I4 (8x8 tiles, 32 bytes per tile: 64 pixels, 4 bits per pixel)
            uint32_t bw = (width + 7) / 8;
            uint32_t bh = (height + 7) / 8;
            const uint8_t* p = src;
            for (uint32_t by = 0; by < bh; by++) {
                for (uint32_t bx = 0; bx < bw; bx++) {
                    for (uint32_t py = 0; py < 8; py++) {
                        uint32_t y = by * 8 + py;
                        for (uint32_t px = 0; px < 8; px += 2) {
                            uint8_t byte_val = *p++;
                            uint8_t i0 = (uint8_t)((byte_val >> 4) * 17);
                            uint8_t i1 = (uint8_t)((byte_val & 0x0F) * 17);
                            if (y < height) {
                                if (bx * 8 + px < width) {
                                    dst[y * width + (bx * 8 + px)] = (uint32_t)(i0 | (i0 << 8) | (i0 << 16) | ((uint32_t)i0 << 24));
                                }
                                if (bx * 8 + px + 1 < width) {
                                    dst[y * width + (bx * 8 + px + 1)] = (uint32_t)(i1 | (i1 << 8) | (i1 << 16) | ((uint32_t)i1 << 24));
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        case 2: { // GX_TF_IA4 (8x4 tiles, 32 bytes per tile: 32 pixels, 8 bits per pixel)
            uint32_t bw = (width + 7) / 8;
            uint32_t bh = (height + 3) / 4;
            const uint8_t* p = src;
            for (uint32_t by = 0; by < bh; by++) {
                for (uint32_t bx = 0; bx < bw; bx++) {
                    for (uint32_t py = 0; py < 4; py++) {
                        uint32_t y = by * 4 + py;
                        for (uint32_t px = 0; px < 8; px++) {
                            uint32_t x = bx * 8 + px;
                            uint8_t byte_val = *p++;
                            uint8_t a = (uint8_t)((byte_val >> 4) * 17);
                            uint8_t i = (uint8_t)((byte_val & 0x0F) * 17);
                            if (y < height && x < width) {
                                dst[y * width + x] = (uint32_t)(i | (i << 8) | (i << 16) | (a << 24));
                            }
                        }
                    }
                }
            }
            break;
        }
        case 6: { // GX_TF_RGBA8 (4x4 tiles, 64 bytes per tile: 32 AR, 32 GB)
            uint32_t bw = (width + 3) / 4;
            uint32_t bh = (height + 3) / 4;
            const uint8_t* p = src;
            for (uint32_t by = 0; by < bh; by++) {
                for (uint32_t bx = 0; bx < bw; bx++) {
                    const uint8_t* ar = p;
                    const uint8_t* gb = p + 32;
                    p += 64;
                    for (uint32_t py = 0; py < 4; py++) {
                        uint32_t y = by * 4 + py;
                        if (y >= height) continue;
                        for (uint32_t px = 0; px < 4; px++) {
                            uint32_t x = bx * 4 + px;
                            if (x >= width) continue;
                            uint32_t idx = (py * 4 + px) * 2;
                            uint8_t a = ar[idx + 0];
                            uint8_t r = ar[idx + 1];
                            uint8_t g = gb[idx + 0];
                            uint8_t b = gb[idx + 1];
                            dst[y * width + x] = (uint32_t)(r | (g << 8) | (b << 16) | (a << 24));
                        }
                    }
                }
            }
            break;
        }
        case 3: { // GX_TF_IA8 (4x4 tiles, 32 bytes per tile: 16 AI pairs)
            uint32_t bw = (width + 3) / 4;
            uint32_t bh = (height + 3) / 4;
            const uint8_t* p = src;
            for (uint32_t by = 0; by < bh; by++) {
                for (uint32_t bx = 0; bx < bw; bx++) {
                    for (uint32_t py = 0; py < 4; py++) {
                        uint32_t y = by * 4 + py;
                        for (uint32_t px = 0; px < 4; px++) {
                            uint32_t x = bx * 4 + px;
                            uint8_t a = *p++;
                            uint8_t i = *p++;
                            if (y < height && x < width) {
                                dst[y * width + x] = (uint32_t)(i | (i << 8) | (i << 16) | (a << 24));
                            }
                        }
                    }
                }
            }
            break;
        }
        case 4: { // GX_TF_RGB565 (4x4 tiles, 32 bytes per tile)
            uint32_t bw = (width + 3) / 4;
            uint32_t bh = (height + 3) / 4;
            const uint8_t* p = src;
            for (uint32_t by = 0; by < bh; by++) {
                for (uint32_t bx = 0; bx < bw; bx++) {
                    for (uint32_t py = 0; py < 4; py++) {
                        uint32_t y = by * 4 + py;
                        for (uint32_t px = 0; px < 4; px++) {
                            uint32_t x = bx * 4 + px;
                            uint16_t val = (uint16_t)((p[0] << 8) | p[1]);
                            p += 2;
                            if (y < height && x < width) {
                                uint8_t r = ((val >> 11) & 0x1F) * 255 / 31;
                                uint8_t g = ((val >> 5) & 0x3F) * 255 / 63;
                                uint8_t b = (val & 0x1F) * 255 / 31;
                                dst[y * width + x] = (uint32_t)(r | (g << 8) | (b << 16) | (0xFF << 24));
                            }
                        }
                    }
                }
            }
            break;
        }
        case 5: { // GX_TF_RGB5A3
            uint32_t bw = (width + 3) / 4;
            uint32_t bh = (height + 3) / 4;
            const uint8_t* p = src;
            for (uint32_t by = 0; by < bh; by++) {
                for (uint32_t bx = 0; bx < bw; bx++) {
                    for (uint32_t py = 0; py < 4; py++) {
                        uint32_t y = by * 4 + py;
                        for (uint32_t px = 0; px < 4; px++) {
                            uint32_t x = bx * 4 + px;
                            uint16_t val = (uint16_t)((p[0] << 8) | p[1]);
                            p += 2;
                            if (y < height && x < width) {
                                uint8_t r, g, b, a;
                                if (val & 0x8000) {
                                    r = ((val >> 10) & 0x1F) * 255 / 31;
                                    g = ((val >> 5) & 0x1F) * 255 / 31;
                                    b = (val & 0x1F) * 255 / 31;
                                    a = 255;
                                } else {
                                    a = ((val >> 12) & 0x7) * 255 / 7;
                                    r = ((val >> 8) & 0xF) * 255 / 15;
                                    g = ((val >> 4) & 0xF) * 255 / 15;
                                    b = (val & 0xF) * 255 / 15;
                                }
                                dst[y * width + x] = (uint32_t)(r | (g << 8) | (b << 16) | (a << 24));
                            }
                        }
                    }
                }
            }
            break;
        }
        case 1: { // GX_TF_I8 (8x4 tiles, 32 bytes)
            uint32_t bw = (width + 7) / 8;
            uint32_t bh = (height + 3) / 4;
            const uint8_t* p = src;
            for (uint32_t by = 0; by < bh; by++) {
                for (uint32_t bx = 0; bx < bw; bx++) {
                    for (uint32_t py = 0; py < 4; py++) {
                        uint32_t y = by * 4 + py;
                        for (uint32_t px = 0; px < 8; px++) {
                            uint32_t x = bx * 8 + px;
                            uint8_t i = *p++;
                            if (y < height && x < width) {
                                dst[y * width + x] = (uint32_t)(i | (i << 8) | (i << 16) | ((uint32_t)i << 24));
                            }
                        }
                    }
                }
            }
            break;
        }
        case 14: { // GX_TF_CMPR (DXT1 in 8x8 tiles composed of four 4x4 sub-blocks)
            uint32_t bw = (width + 7) / 8;
            uint32_t bh = (height + 7) / 8;
            const uint8_t* p = src;
            static const uint32_t sub_ox[4] = { 0, 4, 0, 4 };
            static const uint32_t sub_oy[4] = { 0, 0, 4, 4 };

            int max_sub = (width <= 4 && height <= 4) ? 1 : 4;
            for (uint32_t by = 0; by < bh; by++) {
                for (uint32_t bx = 0; bx < bw; bx++) {
                    for (int sub = 0; sub < max_sub; sub++) {
                        uint16_t c0 = (uint16_t)((p[0] << 8) | p[1]);
                        uint16_t c1 = (uint16_t)((p[2] << 8) | p[3]);
                        uint32_t bits = ((uint32_t)p[4] << 24) | ((uint32_t)p[5] << 16) | ((uint32_t)p[6] << 8) | (uint32_t)p[7];
                        p += 8;

                        uint8_t r[4], g[4], b[4], a[4];
                        r[0] = ((c0 >> 11) & 0x1F) * 255 / 31;
                        g[0] = ((c0 >> 5) & 0x3F) * 255 / 63;
                        b[0] = (c0 & 0x1F) * 255 / 31;
                        a[0] = 255;

                        r[1] = ((c1 >> 11) & 0x1F) * 255 / 31;
                        g[1] = ((c1 >> 5) & 0x3F) * 255 / 63;
                        b[1] = (c1 & 0x1F) * 255 / 31;
                        a[1] = 255;

                        if (c0 > c1) {
                            r[2] = (uint8_t)((2 * r[0] + r[1]) / 3);
                            g[2] = (uint8_t)((2 * g[0] + g[1]) / 3);
                            b[2] = (uint8_t)((2 * b[0] + b[1]) / 3);
                            a[2] = 255;

                            r[3] = (uint8_t)((r[0] + 2 * r[1]) / 3);
                            g[3] = (uint8_t)((g[0] + 2 * g[1]) / 3);
                            b[3] = (uint8_t)((b[0] + 2 * b[1]) / 3);
                            a[3] = 255;
                        } else {
                            r[2] = (uint8_t)((r[0] + r[1]) / 2);
                            g[2] = (uint8_t)((g[0] + g[1]) / 2);
                            b[2] = (uint8_t)((b[0] + b[1]) / 2);
                            a[2] = 255;

                            r[3] = 0;
                            g[3] = 0;
                            b[3] = 0;
                            a[3] = 0;
                        }

                        uint32_t base_x = bx * 8 + sub_ox[sub];
                        uint32_t base_y = by * 8 + sub_oy[sub];
                        for (uint32_t py = 0; py < 4; py++) {
                            uint32_t y = base_y + py;
                            for (uint32_t px = 0; px < 4; px++) {
                                uint32_t x = base_x + px;
                                uint32_t shift = 30 - (py * 4 + px) * 2;
                                uint32_t code = (bits >> shift) & 3;
                                if (y < height && x < width) {
                                    dst[y * width + x] = (uint32_t)(r[code] | (g[code] << 8) | (b[code] << 16) | (a[code] << 24));
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        case 8: { // GX_TF_CI4 (8x8 tiles, 32 bytes per tile: 64 pixels, 4 bits per pixel)
            uint32_t bw = (width + 7) / 8;
            uint32_t bh = (height + 7) / 8;
            const uint8_t* p = src;
            const uint8_t* tlut_data = tlut_addr ? (const uint8_t*)host_resolve_gx_guest_addr(tlut_addr) : NULL;
            for (uint32_t by = 0; by < bh; by++) {
                for (uint32_t bx = 0; bx < bw; bx++) {
                    for (uint32_t py = 0; py < 8; py++) {
                        uint32_t y = by * 8 + py;
                        for (uint32_t px = 0; px < 8; px += 2) {
                            uint8_t byte_val = *p++;
                            uint8_t i0 = (uint8_t)(byte_val >> 4);
                            uint8_t i1 = (uint8_t)(byte_val & 0x0F);
                            if (y < height) {
                                if (bx * 8 + px < width) {
                                    dst[y * width + (bx * 8 + px)] = decode_tlut_pixel(tlut_data, i0, tlut_format);
                                }
                                if (bx * 8 + px + 1 < width) {
                                    dst[y * width + (bx * 8 + px + 1)] = decode_tlut_pixel(tlut_data, i1, tlut_format);
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        case 9: { // GX_TF_CI8 (8x4 tiles, 32 bytes per tile: 32 pixels, 8 bits per pixel)
            uint32_t bw = (width + 7) / 8;
            uint32_t bh = (height + 3) / 4;
            const uint8_t* p = src;
            const uint8_t* tlut_data = tlut_addr ? (const uint8_t*)host_resolve_gx_guest_addr(tlut_addr) : NULL;
            for (uint32_t by = 0; by < bh; by++) {
                for (uint32_t bx = 0; bx < bw; bx++) {
                    for (uint32_t py = 0; py < 4; py++) {
                        uint32_t y = by * 4 + py;
                        for (uint32_t px = 0; px < 8; px++) {
                            uint32_t x = bx * 8 + px;
                            uint8_t val = *p++;
                            if (y < height && x < width) {
                                dst[y * width + x] = decode_tlut_pixel(tlut_data, val, tlut_format);
                            }
                        }
                    }
                }
            }
            break;
        }
        default: {
            memset(dst, 0, width * height * 4);
            break;
        }
    }
}

static bool s_last_tex_all_zero = false;

/* Diagnostic: decode a GX texture from guest memory and report its average colour.
 * Used by TLS_TEV_PROBE to answer "is the texture this composite pass samples
 * already blown out?", which is the open question in handover 5c.16 item 4.2. */
static uint32_t* s_probe_tex_buf = NULL;
static uint32_t s_probe_tex_cap = 0;
static bool probe_texture_avg(const GxTextureUnit* tu, unsigned* out_r, unsigned* out_g, unsigned* out_b, unsigned* out_a) {
    *out_r = *out_g = *out_b = *out_a = 0;
    if (!tu || tu->guest_addr == 0 || tu->width == 0 || tu->height == 0) return false;
    const void* data = host_resolve_gx_guest_addr(tu->guest_addr);
    if (!data) return false;
    uint32_t need = tu->width * tu->height;
    if (need == 0 || need > (4u << 20)) return false;
    if (need > s_probe_tex_cap) {
        uint32_t* nb = (uint32_t*)realloc(s_probe_tex_buf, (size_t)need * 4);
        if (!nb) return false;
        s_probe_tex_buf = nb;
        s_probe_tex_cap = need;
    }
    decode_gx_texture((const uint8_t*)data, tu->width, tu->height, tu->format,
                      s_probe_tex_buf, tu->tlut_addr, tu->tlut_format);
    uint64_t sr = 0, sg = 0, sb = 0, sa = 0;
    uint32_t n = tu->width * tu->height;
    for (uint32_t i = 0; i < n; i++) {
        uint32_t p = s_probe_tex_buf[i];
        sr += p & 0xFF; sg += (p >> 8) & 0xFF; sb += (p >> 16) & 0xFF;
        sa += (p >> 24) & 0xFF;
    }
    *out_r = (unsigned)(sr / n);
    *out_g = (unsigned)(sg / n);
    *out_b = (unsigned)(sb / n);
    *out_a = (unsigned)(sa / n);
    return true;
}

/* TLS_NO_INK_MATTE=1 turns OFF the "dark ink on a light plate" reconstruction below.
 *
 * That heuristic exists because the title logo, the menu text and the button prompts are
 * authored as dark lettering on an opaque cream plate, and the GX TEV alpha stage - which
 * we do not emulate by default - is what removes the plate on hardware. The heuristic
 * removes it for us: every texel within reach of the plate luminance becomes transparent
 * and only the ink survives.
 *
 * It also fires on artwork where the plate IS the artwork. Measured on the Chapter-1
 * tutorial page (handover 5c.43 C): the parchment sheet (0x921DEA60, 512x512 CMPR,
 * full-screen at b26/b30) has light corners and a dark decorative border, so
 * `base_luma - min_luma > 60` holds and the ink matte erases the whole sheet - the
 * batch then draws nothing (the per-batch back-buffer average does not move at all
 * across b26) and the page has no background. This flag is the one-run proof of that
 * diagnosis and is inert by default; the fix has to be a rule that distinguishes the
 * two cases (per-batch, not per-texture), not a global switch. */
static int tls_ink_matte_allowed(void) {
    static int v = -1;
    if (v < 0) v = getenv("TLS_NO_INK_MATTE") ? 0 : 1;
    return v;
}

static ID3D11ShaderResourceView* get_or_upload_gx_texture(const GxTextureUnit* tu) {
    if (!tu || tu->guest_addr == 0 || tu->width == 0 || tu->height == 0) {
        s_last_tex_all_zero = true;
        return s_d3d11.gx_tex_white_srv;
    }

    const void* guest_tex_data = host_resolve_gx_guest_addr(tu->guest_addr);
    if (!guest_tex_data) {
        s_last_tex_all_zero = true;
        return s_d3d11.gx_tex_white_srv;
    }

    if (tu->guest_addr == 0x904B5C80) {
        static int s_4b5c80_log = 0;
        if (++s_4b5c80_log <= 5) {
            printf("[TEX 0x904B5C80] w=%u h=%u fmt=%u first 32 bytes: ", tu->width, tu->height, tu->format);
            const uint8_t* b = (const uint8_t*)guest_tex_data;
            for (int k = 0; k < 32; k++) printf("%02X ", b[k]);
            printf("\n");
            fflush(stdout);
        }
    }

    if (tu->guest_addr == 0x90703AA0) {
        static int s_703aa0_log = 0;
        if (++s_703aa0_log <= 5) {
            printf("[TEX 0x90703AA0] w=%u h=%u fmt=%u first 64 bytes:\n  ", tu->width, tu->height, tu->format);
            const uint8_t* b = (const uint8_t*)guest_tex_data;
            for (int k = 0; k < 64; k++) printf("%02X ", b[k]);
            printf("\n");
            fflush(stdout);
        }
    }

    const uint32_t* p_words = (const uint32_t*)guest_tex_data;
    /* Content hash, used below to decide "the cached decode of this texture is still
     * valid".
     *
     * The old size estimate was `width*height/8` words - i.e. 0.5 bytes per pixel whatever
     * the format - and only ~64 words spread across THAT range were hashed. For an RGBA8
     * destination (4 bytes/texel) that covers just the first 1/8 of the texture, so an EFB
     * copy that rewrites anything past it leaves the hash unchanged and the host keeps
     * serving a stale decoded texture. That is exactly what a byte-identical "frozen"
     * frame looks like, and the Chapter-1 composite half is a 320x224 RGBA8 destination.
     * TLS_TEX_HASH_FULL (now ON by default; set it to 0 to get the old behaviour) hashes
     * across the format's real byte size with a denser sample. */
    static int s_hash_full = -1;
    if (s_hash_full < 0) {
        const char* e = getenv("TLS_TEX_HASH_FULL");
        s_hash_full = (e && atoi(e) == 0) ? 0 : 1;
    }
    uint32_t approx_words;
    uint32_t hash_samples = 64;
    if (s_hash_full) {
        uint32_t num = 4, den = 1;                 /* default: RGBA8, 4 bytes per texel */
        switch (tu->format) {
            case 0: case 8:                num = 1; den = 2; break;  /* I4 / CI4 (4bpp) */
            case 1: case 2: case 9: case 14: num = 1; den = 1; break; /* I8 IA4 CI8 CMPR */
            case 3: case 4: case 5:        num = 2; den = 1; break;  /* IA8 RGB565 RGB5A3 */
            default:                       num = 4; den = 1; break;  /* RGBA8 / default */
        }
        uint32_t tex_bytes = (uint32_t)(((uint64_t)tu->width * tu->height * num) / den);
        approx_words = tex_bytes / 4u;
        hash_samples = 256;
    } else {
        approx_words = (tu->width * tu->height) / 8; // minimum 0.5 bpp -> words
    }
    if (approx_words == 0) approx_words = 1;
    uint32_t step = (approx_words > hash_samples) ? (approx_words / hash_samples) : 1;
    uint32_t quick_hash = 0x811c9dc5;
    for (uint32_t wi = 0; wi < approx_words; wi += step) {
        quick_hash ^= p_words[wi];
        quick_hash *= 0x01000193;
    }

    int match_idx = -1;
    int oldest_idx = 0;
    uint32_t oldest_frame = 0xFFFFFFFF;

    for (int i = 0; i < GX_MAX_CACHED_TEXTURES; i++) {
        if (s_d3d11.tex_cache[i].tex &&
            s_d3d11.tex_cache[i].guest_addr == tu->guest_addr &&
            s_d3d11.tex_cache[i].width == tu->width &&
            s_d3d11.tex_cache[i].height == tu->height &&
            s_d3d11.tex_cache[i].format == tu->format &&
            ((tu->format != 8 && tu->format != 9) ||
             (s_d3d11.tex_cache[i].tlut_addr == tu->tlut_addr && s_d3d11.tex_cache[i].tlut_format == tu->tlut_format))) {
            match_idx = i;
            break;
        }
        if (!s_d3d11.tex_cache[i].tex) {
            oldest_idx = i;
            oldest_frame = 0;
        } else if (s_d3d11.tex_cache[i].last_frame < oldest_frame) {
            oldest_frame = s_d3d11.tex_cache[i].last_frame;
            oldest_idx = i;
        }
    }

    bool need_upload = false;
    int target_idx = match_idx;

    if (match_idx >= 0) {
        // GPU Cache hit - check if dynamic content modified
        if (s_d3d11.tex_cache[match_idx].hash != quick_hash) {
            need_upload = true;
            s_d3d11.tex_cache[match_idx].hash = quick_hash;
        }
    } else {
        target_idx = oldest_idx;
        bool can_reuse = (s_d3d11.tex_cache[target_idx].tex != NULL &&
                          s_d3d11.tex_cache[target_idx].srv != NULL &&
                          s_d3d11.tex_cache[target_idx].width == tu->width &&
                          s_d3d11.tex_cache[target_idx].height == tu->height);
        if (!can_reuse) {
            if (s_d3d11.tex_cache[target_idx].srv) {
                ID3D11ShaderResourceView_Release(s_d3d11.tex_cache[target_idx].srv);
                s_d3d11.tex_cache[target_idx].srv = NULL;
            }
            if (s_d3d11.tex_cache[target_idx].tex) {
                ID3D11Texture2D_Release(s_d3d11.tex_cache[target_idx].tex);
                s_d3d11.tex_cache[target_idx].tex = NULL;
            }

            D3D11_TEXTURE2D_DESC tdesc = {0};
            tdesc.Width = tu->width;
            tdesc.Height = tu->height;
            tdesc.MipLevels = 1;
            tdesc.ArraySize = 1;
            tdesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
            tdesc.SampleDesc.Count = 1;
            tdesc.Usage = D3D11_USAGE_DYNAMIC;
            tdesc.BindFlags = D3D11_BIND_SHADER_RESOURCE;
            tdesc.CPUAccessFlags = D3D11_CPU_ACCESS_WRITE;

            HRESULT hr = ID3D11Device_CreateTexture2D(s_d3d11.device, &tdesc, NULL, &s_d3d11.tex_cache[target_idx].tex);
            if (FAILED(hr) || !s_d3d11.tex_cache[target_idx].tex) {
                return s_d3d11.gx_tex_white_srv;
            }

            hr = ID3D11Device_CreateShaderResourceView(s_d3d11.device, (ID3D11Resource*)s_d3d11.tex_cache[target_idx].tex, NULL, &s_d3d11.tex_cache[target_idx].srv);
            if (FAILED(hr) || !s_d3d11.tex_cache[target_idx].srv) {
                ID3D11Texture2D_Release(s_d3d11.tex_cache[target_idx].tex);
                s_d3d11.tex_cache[target_idx].tex = NULL;
                return s_d3d11.gx_tex_white_srv;
            }
        }

        s_d3d11.tex_cache[target_idx].guest_addr = tu->guest_addr;
        s_d3d11.tex_cache[target_idx].width = tu->width;
        s_d3d11.tex_cache[target_idx].height = tu->height;
        s_d3d11.tex_cache[target_idx].format = tu->format;
        s_d3d11.tex_cache[target_idx].tlut_addr = tu->tlut_addr;
        s_d3d11.tex_cache[target_idx].tlut_format = tu->tlut_format;
        s_d3d11.tex_cache[target_idx].hash = quick_hash;
        need_upload = true;
    }

    s_d3d11.tex_cache[target_idx].last_frame = s_d3d11.frame_counter;

    if (need_upload) {
        uint32_t needed_bytes = tu->width * tu->height * 4;
        if (s_d3d11.gx_staging_capacity < needed_bytes) {
            free(s_d3d11.gx_staging_rgba);
            s_d3d11.gx_staging_capacity = needed_bytes < (2048 * 2048 * 4) ? (2048 * 2048 * 4) : needed_bytes;
            s_d3d11.gx_staging_rgba = (uint32_t*)malloc(s_d3d11.gx_staging_capacity);
        }
        decode_gx_texture((const uint8_t*)guest_tex_data, tu->width, tu->height, tu->format, s_d3d11.gx_staging_rgba, tu->tlut_addr, tu->tlut_format);

        /* Decoded-texture dump: the picture the shader will actually sample, so a
         * "this surface renders the wrong colour" report can be split into "the decode
         * is wrong" vs "the TEV stage is wrong" without another frame of guessing.
         * TLS_TEX_DUMP=0x90CDCBE0[,addr...] writes build/recomp/tex_<addr>_<WxH>_f<fmt>.ppm
         *
         * TLS_TEX_DUMP_FRAME=<guest frame> narrows the dump to ONE frame and keeps every
         * upload, appending `_p<frame>_s<ordinal>` to the name. The unconditional form
         * above overwrites one file per address, so it can only show the buffer's LAST
         * state in the run - which is why a scratch texture reused inside a single frame
         * (the tutorial page's 64x64 CMPR at 0x90D19B80 is drawn as the black
         * illustration box and again as the SKIP plate) could not be told apart from the
         * state its first draw actually sampled (handover 5c.43 C). The per-frame form
         * keeps the uploads in draw order. */
        {
            static uint32_t s_dump_addrs[8];
            static int s_dump_count = -1;
            static int s_dump_frame = -2;
            static int s_dump_ord[8];
            extern int g_runner_current_frame;
            if (s_dump_count < 0) {
                s_dump_count = 0;
                const char* e = getenv("TLS_TEX_DUMP");
                while (e && *e && s_dump_count < 8) {
                    while (*e == ',' || *e == ' ') e++;
                    if (!*e) break;
                    s_dump_addrs[s_dump_count++] = (uint32_t)strtoul(e, (char**)&e, 0);
                }
            }
            if (s_dump_frame == -2) {
                const char* f = getenv("TLS_TEX_DUMP_FRAME");
                s_dump_frame = f ? atoi(f) : -1;
            }
            for (int di = 0; di < s_dump_count; di++) {
                if (s_dump_addrs[di] != tu->guest_addr) continue;
                int ord = -1;
                if (s_dump_frame >= 0) {
                    if (s_dump_frame != g_runner_current_frame) continue;
                    ord = s_dump_ord[di];
                    if (ord >= 64) continue;   /* plenty for one frame, and bounded */
                    s_dump_ord[di] = ord + 1;
                }
                char path[160];
                if (ord >= 0) {
                    snprintf(path, sizeof(path), "build/recomp/tex_%08X_%ux%u_f%u_p%d_s%d.ppm",
                             tu->guest_addr, tu->width, tu->height, tu->format,
                             g_runner_current_frame, ord);
                } else {
                    snprintf(path, sizeof(path), "build/recomp/tex_%08X_%ux%u_f%u.ppm",
                             tu->guest_addr, tu->width, tu->height, tu->format);
                }
                FILE* df = fopen(path, "wb");
                if (df) {
                    fprintf(df, "P6\n%u %u\n255\n", tu->width, tu->height);
                    for (uint32_t pi = 0; pi < tu->width * tu->height; pi++) {
                        uint32_t px = s_d3d11.gx_staging_rgba[pi];
                        fputc((int)(px & 0xFF), df);
                        fputc((int)((px >> 8) & 0xFF), df);
                        fputc((int)((px >> 16) & 0xFF), df);
                    }
                    fclose(df);
                    printf("[TexDump] %s\n", path);
                    fflush(stdout);
                }
            }
        }

        uint32_t total_px = tu->width * tu->height;
        uint32_t nonzero_cnt = 0;
        uint32_t transparent_cnt = 0;
        for (uint32_t pi = 0; pi < total_px; pi++) {
            uint32_t px = s_d3d11.gx_staging_rgba[pi];
            if (px != 0) {
                nonzero_cnt++;
            }
            if ((px >> 24) < 8) {
                transparent_cnt++;
            }
        }
        bool is_all_zero = (nonzero_cnt == 0);
        s_d3d11.tex_cache[target_idx].is_all_zero = is_all_zero;

        // Decoded-alpha probe: distinguishes "the texture really is opaque" from
        // "the transparent background was lost in the decode / never streamed".
        // TLS_TEX_ALPHA_ADDR=0xA,0xB narrows it to those guest addresses and ignores the
        // 30-line cap, because the page's own atlases (0x9076E5E0 IA4, 0x90703AA0 I4) are
        // uploaded long after the EFB-copy churn has used the 30 lines up (5c.43 H).
        {
            static uint32_t s_alpha_addrs[8];
            static int s_alpha_addr_count = -1;
            if (s_alpha_addr_count < 0) {
                s_alpha_addr_count = 0;
                const char* e = getenv("TLS_TEX_ALPHA_ADDR");
                while (e && *e && s_alpha_addr_count < 8) {
                    while (*e == ',' || *e == ' ') e++;
                    if (!*e) break;
                    s_alpha_addrs[s_alpha_addr_count++] = (uint32_t)strtoul(e, (char**)&e, 0);
                }
            }
            bool want_this = false;
            for (int i = 0; i < s_alpha_addr_count; i++)
                if (s_alpha_addrs[i] == tu->guest_addr) want_this = true;
            if (want_this || getenv("TLS_TEX_ALPHA_PROBE")) {
                static uint32_t s_probe = 0;
                if (want_this || s_probe < 30) {
                    if (!want_this) s_probe++;
                    uint32_t opaque_cnt = 0, clear_cnt = 0, mid_cnt = 0;
                    for (uint32_t pi = 0; pi < total_px; pi++) {
                        uint32_t pa = s_d3d11.gx_staging_rgba[pi] >> 24;
                        if (pa >= 128) opaque_cnt++; else if (pa < 8) clear_cnt++; else mid_cnt++;
                    }
                    printf("[TEXPROBE] addr=0x%08X %ux%u fmt=%u opaque=%u clear=%u mid=%u corner=0x%08X center=0x%08X\n",
                           tu->guest_addr, tu->width, tu->height, tu->format,
                           opaque_cnt, clear_cnt, mid_cnt, s_d3d11.gx_staging_rgba[0],
                           s_d3d11.gx_staging_rgba[(tu->height / 2) * tu->width + tu->width / 2]);
                    fflush(stdout);
                }
            }
        }

        // Particle sparkle textures (e.g. ui_logo_select_shine 0x907427C0, 0x9076C200):
        // On Wii GX, TEV subtracts the solid golden-beige baseline color bias (around 191, 176, 125)
        // and routes luminance to alpha.
        // On PC, without TEV subtraction, sampling this texture adds the golden background across the
        // entire quad, drawing every particle as an opaque rectangular box.
        // Dynamic baseline subtraction for CMPR/opaque textures with uniform non-black backgrounds
        // (Wii GX TEV subtraction for particle glows, sparkles, and shines)
        // Baseline subtraction turns a CMPR *glow* sprite back into a soft particle:
        // the texture is a uniform light baseline (the golden-beige ~191,176,125 that
        // Wii GX TEV subtracts) with a brighter core, and without that subtraction the
        // whole quad samples as opaque beige - the hard-edged particle boxes.
        //
        // This used to be gated on a two-address allowlist (0x907427C0 / 0x9076C200)
        // whose addresses are never actually drawn, so no particle ever qualified.
        // Decide structurally instead, and require ALL of:
        //   - CMPR and larger than 16x16: the 4x4 dialog-border texture (0x904E5EE0)
        //     and the 8x8 sparkle (0x907826E0) are never baseline-subtracted;
        //   - no texel carries real alpha, so artwork that already has a cutout keeps
        //     its own alpha;
        //   - uniform non-black corners and a *positive* deviation above the baseline
        //     (max_delta > 10, tested below). Ink only ever goes darker than its
        //     background, never brighter, so dark-on-cream artwork such as the title
        //     logo (0x90782DE0) fails this test and is left untouched.
        bool is_glow = (tu->format == 14 && tu->width > 16 && tu->height > 16 && transparent_cnt == 0);
        if (is_glow) {
            uint32_t c_tl = s_d3d11.gx_staging_rgba[0];
            uint32_t c_tr = s_d3d11.gx_staging_rgba[tu->width - 1];
            uint32_t c_bl = s_d3d11.gx_staging_rgba[(tu->height - 1) * tu->width];
            uint32_t c_br = s_d3d11.gx_staging_rgba[tu->height * tu->width - 1];

            int r0 = (int)(uint8_t)c_tl, g0 = (int)(uint8_t)(c_tl >> 8), b0 = (int)(uint8_t)(c_tl >> 16);
            int r1 = (int)(uint8_t)c_tr, g1 = (int)(uint8_t)(c_tr >> 8), b1 = (int)(uint8_t)(c_tr >> 16);
            int r2 = (int)(uint8_t)c_bl, g2 = (int)(uint8_t)(c_bl >> 8), b2 = (int)(uint8_t)(c_bl >> 16);
            int r3 = (int)(uint8_t)c_br, g3 = (int)(uint8_t)(c_br >> 8), b3 = (int)(uint8_t)(c_br >> 16);

            // Check if all 4 corners are non-black and approximately match (within baseline color tolerance)
            bool is_non_black = (r0 > 20 || g0 > 20 || b0 > 20);
            bool corners_match = (abs(r0 - r1) <= 30 && abs(g0 - g1) <= 30 && abs(b0 - b1) <= 30) &&
                                 (abs(r0 - r2) <= 30 && abs(g0 - g2) <= 30 && abs(b0 - b2) <= 30) &&
                                 (abs(r0 - r3) <= 30 && abs(g0 - g3) <= 30 && abs(b0 - b3) <= 30);

            if (is_non_black && corners_match) {
                int base_r = (r0 + r1 + r2 + r3) / 4;
                int base_g = (g0 + g1 + g2 + g3) / 4;
                int base_b = (b0 + b1 + b2 + b3) / 4;

                // Find max positive deviation (glow core) and the darkest texel.
                // Ink artwork (dark lettering on a light plate, e.g. the title logo
                // 0x90782DE0) only deviates *downwards* from its baseline; subtracting
                // its baseline would erase both plate and lettering. Glow sprites
                // deviate upwards from a beige baseline.
                int max_delta = 1;
                int min_luma = 255;
                uint32_t total_px = tu->width * tu->height;
                /* "Ink art" is dark lettering on a FLAT plate: most texels sit on the plate.
                 * A photograph (the tutorial page's parchment, 0x921DEA60) also has dark
                 * detail but its luminance is spread out, so a bare
                 * `base_luma - min_luma > 60` test calls it ink art and the matte erases the
                 * whole sheet (5c.46 D). Count the plate instead. */
                int base_luma_pre = (base_r * 3 + base_g * 6 + base_b) / 10;
                uint32_t plate_px = 0;
                for (uint32_t pi = 0; pi < total_px; pi++) {
                    uint32_t px = s_d3d11.gx_staging_rgba[pi];
                    int r = (int)(uint8_t)px;
                    int g = (int)(uint8_t)(px >> 8);
                    int b = (int)(uint8_t)(px >> 16);
                    int lum = (r * 3 + g * 6 + b) / 10;
                    if (lum > base_luma_pre - 12 && lum < base_luma_pre + 12) plate_px++;
                    if (lum < min_luma) min_luma = lum;
                    int dr = r > base_r ? (r - base_r) : 0;
                    int dg = g > base_g ? (g - base_g) : 0;
                    int db = b > base_b ? (b - base_b) : 0;
                    int dmax = dr > dg ? (dr > db ? dr : db) : (dg > db ? dg : db);
                    if (dmax > max_delta) max_delta = dmax;
                }

                int base_luma = (base_r * 3 + base_g * 6 + base_b) / 10;
                float plate_frac = total_px ? (float)plate_px / (float)total_px : 0.0f;
                /* Ink art needs BOTH a big drop to the darkest texel AND a flat plate. The
                 * second half is what the old test lacked: the tutorial page's parchment
                 * (0x921DEA60, 512x512) has base_luma 133 / min 7 - so it passed - but its
                 * plate_frac is 0.022 because it is a photograph, and the matte erased the
                 * whole sheet. The title logo (0x90782DE0), which the matte exists for, is
                 * 0.737. Measured in 5c.46 D; threshold is the midpoint of that gap. */
                static float s_plate_min = -1.0f;
                if (s_plate_min < 0.0f) {
                    const char* e = getenv("TLS_INK_PLATE_MIN");
                    s_plate_min = e ? (float)atof(e) : 0.55f;
                }
                /* Classification stays as it was - it also keeps photographs out of the glow
                 * path below, which is what makes the parchment render untouched. Only the
                 * MATTE is gated by plate fraction (see matte_allowed). */
                bool is_ink_art = (base_luma - min_luma) > 60;
                bool matte_allowed = is_ink_art && (plate_frac >= s_plate_min);
                /* The glow rewrite's guard, decided here so the stats line below can report
                 * what was APPLIED rather than what was classified (two sessions of this
                 * dossier have been misled by an instrument that reported intent). */
                static int s_glow_all = -1;
                if (s_glow_all < 0) s_glow_all = getenv("TLS_GLOW_ALL") ? 1 : 0;
                /* TLS_NO_GLOW=1 disables the rewrite for EVERY size, which is the A/B that asks
                 * whether the compensation is right on the class it WAS built for (the menu's
                 * full-screen radial glow is a 1386-vertex quad on the 64x64 sprite 0x907FC980 -
                 * measured with TLS_BATCH_PROBE=900, handover 5c.46 AP-AT item 7, where it leaves
                 * the frame byte-identical: the sprite compensation is NOT the menu vignette's
                 * cause). Diagnostic only: it is never a default, and the gate asserts the
                 * default picture. */
                static int s_no_glow = -1;
                if (s_no_glow < 0) s_no_glow = getenv("TLS_NO_GLOW") ? 1 : 0;
                bool glow_size_ok = (tu->width <= 64 && tu->height <= 64);
                bool glow_applied = (max_delta > 10 && !is_ink_art && !s_no_glow &&
                                     (glow_size_ok || s_glow_all));
                {
                    static int s_stats = -1;
                    if (s_stats < 0) s_stats = getenv("TLS_INK_STATS") ? 1 : 0;
                    if (s_stats) {
                        /* `action=` is the decision, printed beside the numbers it is taken
                         * from, because the numbers alone cannot show whether the upload path
                         * rewrote the texels the shader samples (handover 5c.46 AP-AT). */
                        const char* action = "none";
                        if (glow_applied) action = "glow";
                        else if (max_delta > 10 && !is_ink_art) action = "glow-blocked";
                        else if (matte_allowed && tls_ink_matte_allowed()) action = "matte";
                        printf("[InkStats] tex=0x%08X %ux%u fmt=%u base_luma=%d min_luma=%d "
                               "plate_frac=%.3f ink=%d max_delta=%d base=(%d,%d,%d) "
                               "corners=(%d,%d,%d) action=%s\n",
                               tu->guest_addr, tu->width, tu->height, tu->format, base_luma,
                               min_luma, plate_frac, (int)is_ink_art, max_delta,
                               base_r, base_g, base_b, r0, g0, b0, action);
                        fflush(stdout);
                    }
                }

                /* The glow path (baseline subtraction) exists for small particle sprites: a
                 * bright core on a beige baseline. Applying it to a full-bleed texture washes
                 * the whole page out and speckles its edges - measured on the parchment
                 * (0x921DEA60) in 5c.46 D, where restricting it to small textures is what
                 * keeps the sheet photographic. */
                /* 5c.46 AP-AT: THE GLOW REWRITE IS A SPRITE COMPENSATION AND IT WAS FIRING ON
                 * SCENE ATLASES. It exists for the particle class - a small quad whose whole
                 * texture is a bright core on a uniform baseline (the documented example
                 * 0x907FC980 is 64x64 with base (191,176,125)) - and it rewrites the uploaded
                 * texels with `out_r = 217..255` while G/B ramp from the baseline. So every
                 * texel it touches becomes red-dominant by construction, and until now nothing
                 * restricted it to sprites: measured on the field at guest 2800 it fires on the
                 * cave's 256x256 CMPR rock atlas 0x91EBC460 (base (68,61,52), plate_frac 0.259,
                 * max_delta 161), turning its grey decode (88.54,85.39,76.40; the pre-rewrite
                 * `TLS_TEX_DUMP`) into mean (169.76,80.21,75.02) with **75.16 % red-dominant
                 * texels** (`TLS_TEX_DUMP_FINAL`, TLS_INK_STATS action=glow). That upload is
                 * the whole "red rock": every TEV input is neutral (AP-AS item 7), the uniform
                 * equals the probe's decode field for field (AP-AT item 1), and aurora - which
                 * decodes the real texels - renders the same stream with 0.00 % red. The
                 * texture dump that "proved" the atlas grey is written *before* this block,
                 * which is why three sessions of TEV archaeology could not see it.
                 * The guard keeps the behaviour on the sprite class (<= 64x64, the size the
                 * hack was built for and the size of the measured baseline sprite) and leaves
                 * larger atlases as the guest authored them. `TLS_GLOW_ALL=1` restores the old
                 * behaviour for an A/B: it is the control that reproduces the pre-AP-AT gate
                 * references. 128x128 textures keep the old behaviour on purpose - they are the
                 * one size class the field census cannot separate (both 128x128 sprite and
                 * 128x128 atlas exist), so they are bounded rather than changed. */
                if (glow_applied) {
                    for (uint32_t pi = 0; pi < total_px; pi++) {
                        uint32_t px = s_d3d11.gx_staging_rgba[pi];
                        int r = (int)(uint8_t)px;
                        int g = (int)(uint8_t)(px >> 8);
                        int b = (int)(uint8_t)(px >> 16);
                        int dr = r > base_r ? (r - base_r) : 0;
                        int dg = g > base_g ? (g - base_g) : 0;
                        int db = b > base_b ? (b - base_b) : 0;
                        int dmax = dr > dg ? (dr > db ? dr : db) : (dg > db ? dg : db);

                        if (dmax <= 2) {
                            s_d3d11.gx_staging_rgba[pi] = 0; // Transparent background
                        } else {
                            float t = (float)dmax / (float)max_delta;
                            float alpha = t * t * (3.0f - 2.0f * t); // Smooth Hermite curve
                            uint8_t out_r = (uint8_t)(255 * (0.85f + 0.15f * t));
                            uint8_t out_g = (uint8_t)(base_g + (255 - base_g) * t);
                            uint8_t out_b = (uint8_t)(base_b + (255 - base_b) * t);
                            uint8_t out_a = (uint8_t)(alpha * 255.0f);
                            s_d3d11.gx_staging_rgba[pi] = (uint32_t)(out_r | (out_g << 8) | (out_b << 16) | (out_a << 24));
                        }
                    }
                } else if (matte_allowed && tls_ink_matte_allowed()) {
                    // Ink matte: dark artwork on a uniform light plate - the title logo
                    // (0x90782DE0: black lettering on cream) and the button-prompt icons are
                    // authored this way. Wii GX removes the plate in the TEV alpha stage,
                    // which we do not emulate, so the entire opaque plate got drawn.
                    //
                    // Reconstruct what that stage produces: alpha from how far each texel
                    // falls below the plate luminance (plate -> transparent, ink -> opaque),
                    // and white RGB so the batch's own vertex colour tints the artwork
                    // instead of the baked-in black.
                    int base_l = base_luma > 0 ? base_luma : 1;
                    for (uint32_t pi = 0; pi < total_px; pi++) {
                        uint32_t px = s_d3d11.gx_staging_rgba[pi];
                        int r = (int)(uint8_t)px;
                        int g = (int)(uint8_t)(px >> 8);
                        int b = (int)(uint8_t)(px >> 16);
                        int lum = (r * 3 + g * 6 + b) / 10;
                        int ink = base_l - lum;
                        if (ink < 0) ink = 0;
                        uint32_t a = (uint32_t)(ink * 255 / base_l);
                        if (a > 255) a = 255;
                        s_d3d11.gx_staging_rgba[pi] = 0x00FFFFFFu | (a << 24);
                    }
                }
            }
        }



        /* TLS_TEX_DUMP_FINAL=0xA[,0xB]: dump the staging buffer AFTER the compensation
         * paths above - i.e. the texels the GPU actually samples. `TLS_TEX_DUMP` writes
         * straight after `decode_gx_texture`, BEFORE the CMPR baseline / ink rewrites, so
         * "the dump is grey and the render is red" is a state the old instrument cannot
         * express (handover 5c.46 AP-AT: the rock atlas 0x91EBC460 dumps grey
         * (88.54,85.39,76.40) and is uploaded with R >= 217). The line printed with the
         * file is the staging buffer's own mean, so the two paths compare numerically
         * without parsing a PPM. Inert unless set. */
        {
            static uint32_t s_final_addrs[4];
            static int s_final_count = -1;
            if (s_final_count < 0) {
                s_final_count = 0;
                const char* e = getenv("TLS_TEX_DUMP_FINAL");
                while (e && *e && s_final_count < 4) {
                    while (*e == ',' || *e == ' ') e++;
                    if (!*e) break;
                    s_final_addrs[s_final_count++] = (uint32_t)strtoul(e, (char**)&e, 0);
                }
            }
            for (int fi = 0; fi < s_final_count; fi++) {
                if (s_final_addrs[fi] != tu->guest_addr) continue;
                uint64_t sr = 0, sg = 0, sb = 0;
                uint32_t red_dom = 0;
                for (uint32_t pi = 0; pi < total_px; pi++) {
                    uint32_t px = s_d3d11.gx_staging_rgba[pi];
                    uint32_t r = px & 0xFF, g = (px >> 8) & 0xFF, b = (px >> 16) & 0xFF;
                    sr += r; sg += g; sb += b;
                    if (r > g + 25 && r > b + 25 && r > 80) red_dom++;
                }
                char path[160];
                snprintf(path, sizeof(path), "build/recomp/texfinal_%08X_%ux%u_f%u.ppm",
                         tu->guest_addr, tu->width, tu->height, tu->format);
                FILE* ff = fopen(path, "wb");
                if (ff) {
                    fprintf(ff, "P6\n%u %u\n255\n", tu->width, tu->height);
                    for (uint32_t pi = 0; pi < total_px; pi++) {
                        uint32_t px = s_d3d11.gx_staging_rgba[pi];
                        fputc((int)(px & 0xFF), ff);
                        fputc((int)((px >> 8) & 0xFF), ff);
                        fputc((int)((px >> 16) & 0xFF), ff);
                    }
                    fclose(ff);
                }
                printf("[TexFinal] tex=0x%08X %ux%u fmt=%u mean=(%.2f,%.2f,%.2f) "
                       "red_dominant=%.2f%% file=%s\n",
                       tu->guest_addr, tu->width, tu->height, tu->format,
                       total_px ? (double)sr / total_px : 0.0,
                       total_px ? (double)sg / total_px : 0.0,
                       total_px ? (double)sb / total_px : 0.0,
                       total_px ? 100.0 * (double)red_dom / (double)total_px : 0.0, path);
                fflush(stdout);
            }
        }

        /* Remember the uploaded content's mean, so a later CACHE HIT can still report
         * what the shader is sampling (the staging buffer is shared and overwritten).
         * GUARDED: the reduction is O(width*height) and must not run on the default path -
         * an instrument that costs the gate milliseconds is a loaded host by another name. */
        if (texlog_wanted(tu->guest_addr)) {
            uint32_t np = tu->width * tu->height;
            uint64_t ar = 0, ag = 0, ab = 0, aa = 0;
            for (uint32_t pi = 0; pi < np; pi++) {
                uint32_t px = s_d3d11.gx_staging_rgba[pi];
                ar += px & 0xFF; ag += (px >> 8) & 0xFF; ab += (px >> 16) & 0xFF; aa += (px >> 24) & 0xFF;
            }
            if (np) {
                s_d3d11.tex_cache[target_idx].mean_r = (float)((double)ar / np);
                s_d3d11.tex_cache[target_idx].mean_g = (float)((double)ag / np);
                s_d3d11.tex_cache[target_idx].mean_b = (float)((double)ab / np);
                s_d3d11.tex_cache[target_idx].mean_a = (float)((double)aa / np);
                s_d3d11.tex_cache[target_idx].upd_frame = s_d3d11.frame_counter;
            }
        }

        D3D11_MAPPED_SUBRESOURCE mapped_tex;
        if (SUCCEEDED(ID3D11DeviceContext_Map(s_d3d11.context, (ID3D11Resource*)s_d3d11.tex_cache[target_idx].tex, 0, D3D11_MAP_WRITE_DISCARD, 0, &mapped_tex))) {
            uint8_t* p_dst = (uint8_t*)mapped_tex.pData;
            const uint8_t* p_src = (const uint8_t*)s_d3d11.gx_staging_rgba;
            uint32_t row_bytes = tu->width * 4;
            for (uint32_t y = 0; y < tu->height; y++) {
                memcpy(p_dst, p_src, row_bytes);
                p_src += row_bytes;
                p_dst += mapped_tex.RowPitch;
            }
            ID3D11DeviceContext_Unmap(s_d3d11.context, (ID3D11Resource*)s_d3d11.tex_cache[target_idx].tex, 0);
        }
    }

    /* TLS_TEX_CACHE_LOG=0xA[,0xB...]: per-BIND texture log. Every call to this function is
     * one bound texture, so this prints what the shader is about to sample AND where it
     * came from: `upload=1` means the guest bytes changed since the last decode (a fresh
     * decode of guest memory), `upload=0` means a CACHE HIT - the GPU is sampling the
     * upload from `upd_frame`, not the bytes that are in guest memory now.
     *
     * This exists because the title plate's b18 samples the 80x56 EFB-copy buffer
     * 0x9038D1C0 and the copy chain says that buffer is FLAT 255 (TLS_EFB_CHAIN_GUEST=900:
     * copy #15/#16 dstavg=(255,255,255) dstalpha=255), while the frame b18 produces is a
     * radial vignette (255 centre / 0 corner). A flat opaque source under SRCALPHA/
     * INVSRCALPHA cannot do that, so either the bind is not the copy destination or the
     * bind is a stale upload. `[TexBind]` distinguishes the two in one run - which is the
     * "copy content wrong vs sampling wrong" split of handover 5c.46 AP-AV item 7.
     * Inert unless set. */
    {
        extern int g_runner_current_frame;
        if (texlog_wanted(tu->guest_addr)) {
            printf("[TexBind] gframe=%d preset=%u addr=0x%08X %ux%u fmt=%u upload=%d upd_frame=%u "
                   "hash=%08X mean=(%.1f,%.1f,%.1f,%.1f)\n",
                   g_runner_current_frame, s_d3d11.frame_counter, tu->guest_addr,
                   tu->width, tu->height, tu->format, need_upload ? 1 : 0,
                   s_d3d11.tex_cache[target_idx].upd_frame, quick_hash,
                   s_d3d11.tex_cache[target_idx].mean_r, s_d3d11.tex_cache[target_idx].mean_g,
                   s_d3d11.tex_cache[target_idx].mean_b, s_d3d11.tex_cache[target_idx].mean_a);
            fflush(stdout);
        }
    }

    s_last_tex_all_zero = s_d3d11.tex_cache[target_idx].is_all_zero;
    return s_d3d11.tex_cache[target_idx].srv ? s_d3d11.tex_cache[target_idx].srv : s_d3d11.gx_tex_white_srv;
}

static D3D11_BLEND map_gx_src_blend_factor(uint8_t factor) {
    /* The SOURCE and DESTINATION slots do NOT decode identically, which is what Dolphin's
     * two enums (SrcBlendFactor / DstBlendFactor) encode and what one shared table cannot
     * express:
     *   SrcBlendFactor: 0 Zero 1 One 2 DstClr 3 InvDstClr 4 SrcAlpha 5 InvSrcAlpha
     *                   6 DstAlpha 7 InvDstAlpha
     *   DstBlendFactor: 0 Zero 1 One 2 SrcClr 3 InvSrcClr 4 SrcAlpha 5 InvSrcAlpha
     *                   6 DstAlpha 7 InvDstAlpha
     * This table was written for the DESTINATION slot and is reused for the source, so source
     * factors 2 and 3 were evaluated as SrcClr/InvSrcClr instead of DstClr/InvDstClr - a
     * different operation as soon as source and destination differ. Factors 4..7 are identical
     * in both enums, so alpha blending was never affected; only the 2/3 "bright pass" shape is.
     * TLS_BLEND_SLOT_FIX=1 evaluates the corrected source-slot mapping; the default is left
     * alone because the page gate was recorded against it (see the comment below). */
    static int s_slot_fix = -1;
    if (s_slot_fix < 0) s_slot_fix = getenv("TLS_BLEND_SLOT_FIX") ? 1 : 0;
    switch (factor) {
        case 0: return D3D11_BLEND_ZERO;
        case 1: return D3D11_BLEND_ONE;
        /* GX CMODE0 names the *operand*, not the slot: 2 = SRCCLR (the source colour),
         * 3 = INVSRCCLR, 6 = DSTALPHA, 7 = INVDSTALPHA - identically for the source and
         * the destination factor (Dolphin's BlendMode::BlendFactor enum is in exactly
         * this order). The host had 2/3 mapped to DEST_COLOR/INV_DEST_COLOR in the
         * *source* slot, which is a different operation as soon as source and
         * destination differ - and the brightest composite pass of the MENU tail is
         * `s=2 d=0` (GX: dst = src*src, the "bright pass"), so this was measurable
         * (handover 5c.23). */
        case 2: return s_slot_fix ? D3D11_BLEND_DEST_COLOR : D3D11_BLEND_SRC_COLOR;
        case 3: return s_slot_fix ? D3D11_BLEND_INV_DEST_COLOR : D3D11_BLEND_INV_SRC_COLOR;
        case 4: return D3D11_BLEND_SRC_ALPHA;
        case 5: return D3D11_BLEND_INV_SRC_ALPHA;
        case 6: return D3D11_BLEND_DEST_ALPHA;
        case 7: return D3D11_BLEND_INV_DEST_ALPHA;
        default: return D3D11_BLEND_ONE;
    }
}

static D3D11_BLEND map_gx_dst_blend_factor(uint8_t factor) {
    switch (factor) {
        case 0: return D3D11_BLEND_ZERO;
        case 1: return D3D11_BLEND_ONE;
        case 2: return D3D11_BLEND_SRC_COLOR;
        case 3: return D3D11_BLEND_INV_SRC_COLOR;
        case 4: return D3D11_BLEND_SRC_ALPHA;
        case 5: return D3D11_BLEND_INV_SRC_ALPHA;
        case 6: return D3D11_BLEND_DEST_ALPHA;
        case 7: return D3D11_BLEND_INV_DEST_ALPHA;
        default: return D3D11_BLEND_ZERO;
    }
}

#define GX_MAX_CACHED_BLEND_STATES 32
static struct {
    uint32_t key;
    ID3D11BlendState* state;
} s_blend_cache[GX_MAX_CACHED_BLEND_STATES];
static uint32_t s_blend_cache_count = 0;

static ID3D11BlendState* get_or_create_blend_state(bool blend_enable, uint8_t src_factor, uint8_t dst_factor, bool subtract, bool guest_blend_enable) {
    static int s_gx_alpha_blend = -1;
    static int s_efb_alpha = -1;
    if (s_gx_alpha_blend < 0) s_gx_alpha_blend = getenv("TLS_GX_ALPHA_BLEND") ? 1 : 0;
    if (s_efb_alpha < 0) s_efb_alpha = getenv("TLS_EFB_ALPHA") ? 1 : 0;
    uint32_t key = (blend_enable ? 1u : 0u) | ((uint32_t)src_factor << 1) | ((uint32_t)dst_factor << 4) | (subtract ? (1u << 7) : 0u) |
                   (guest_blend_enable ? (1u << 8) : 0u) | (s_gx_alpha_blend ? (1u << 9) : 0u) |
                   (s_efb_alpha ? (1u << 10) : 0u);
    for (uint32_t i = 0; i < s_blend_cache_count; i++) {
        if (s_blend_cache[i].key == key) {
            return s_blend_cache[i].state;
        }
    }
    if (s_blend_cache_count >= GX_MAX_CACHED_BLEND_STATES) {
        return s_d3d11.blend_state_alpha;
    }

    D3D11_BLEND_DESC desc = {0};
    desc.RenderTarget[0].BlendEnable = blend_enable ? TRUE : FALSE;
    desc.RenderTarget[0].SrcBlend = map_gx_src_blend_factor(src_factor);
    desc.RenderTarget[0].DestBlend = map_gx_dst_blend_factor(dst_factor);
    desc.RenderTarget[0].BlendOp = subtract ? D3D11_BLEND_OP_REV_SUBTRACT : D3D11_BLEND_OP_ADD;
    /* GX applies the *same* CMODE0 factors to the alpha channel as to RGB - there is
     * no separate alpha blend in the GameCube/Wii pixel pipeline. The host has always
     * hardcoded ONE / INV_SRC_ALPHA here, which keeps the EFB alpha pinned at 1 for
     * every blended batch. That matters far beyond the alpha channel: the composite
     * tail's additive passes are SRCALPHA/ONE, so their strength is `src.rgb * src.a`,
     * and src.a is the EFB alpha carried through the EFB copies. TLS_GX_ALPHA_BLEND=1
     * makes the alpha channel follow the guest's factors so the difference can be
     * measured instead of argued (handover 5c.16 item 8).
     *
     * Measured in 5c.23: with alpha hardcoded to ONE/INV_SRC_ALPHA *and* the EFB cleared
     * to alpha 1.0, the framebuffer alpha is 255 after **every** batch of the MENU frame
     * (TLS_BATCH_PROBE), so every EFB copy the composite tail samples carries a=255 and
     * every `SRCALPHA/ONE` pass runs at full strength. GX *replaces* the alpha when
     * blending is disabled (`dst.a = src.a`), which D3D11 expresses as ONE/ZERO.
     * TLS_EFB_ALPHA=1 enables both halves of the faithful behaviour: the guest's factors
     * for alpha when the guest blends, and alpha *replace* whenever the guest had
     * blending disabled (the host forces colour blending on for some 2D icon/text
     * batches below, so the two can disagree). */
    if (s_efb_alpha || s_gx_alpha_blend) {
        if (s_efb_alpha && !guest_blend_enable) {
            desc.RenderTarget[0].SrcBlendAlpha = D3D11_BLEND_ONE;
            desc.RenderTarget[0].DestBlendAlpha = D3D11_BLEND_ZERO;
            desc.RenderTarget[0].BlendOpAlpha = D3D11_BLEND_OP_ADD;
        } else {
            desc.RenderTarget[0].SrcBlendAlpha = map_gx_src_blend_factor(src_factor);
            desc.RenderTarget[0].DestBlendAlpha = map_gx_dst_blend_factor(dst_factor);
            desc.RenderTarget[0].BlendOpAlpha = subtract ? D3D11_BLEND_OP_REV_SUBTRACT : D3D11_BLEND_OP_ADD;
        }
    } else {
        desc.RenderTarget[0].SrcBlendAlpha = D3D11_BLEND_ONE;
        desc.RenderTarget[0].DestBlendAlpha = D3D11_BLEND_INV_SRC_ALPHA;
        desc.RenderTarget[0].BlendOpAlpha = D3D11_BLEND_OP_ADD;
    }
    desc.RenderTarget[0].RenderTargetWriteMask = D3D11_COLOR_WRITE_ENABLE_ALL;

    ID3D11BlendState* state = NULL;
    HRESULT hr = ID3D11Device_CreateBlendState(s_d3d11.device, &desc, &state);
    if (SUCCEEDED(hr) && state) {
        s_blend_cache[s_blend_cache_count].key = key;
        s_blend_cache[s_blend_cache_count].state = state;
        s_blend_cache_count++;
        return state;
    }
    return s_d3d11.blend_state_alpha;
}

static void save_backbuffer_bmp(const char* bmp_path) {
    ID3D11Texture2D* back_buffer = NULL;
    if (SUCCEEDED(IDXGISwapChain_GetBuffer(s_d3d11.swap_chain, 0, &IID_ID3D11Texture2D, (void**)&back_buffer))) {
        D3D11_TEXTURE2D_DESC desc;
        ID3D11Texture2D_GetDesc(back_buffer, &desc);
        desc.Usage = D3D11_USAGE_STAGING;
        desc.BindFlags = 0;
        desc.CPUAccessFlags = D3D11_CPU_ACCESS_READ;
        desc.MiscFlags = 0;
        ID3D11Texture2D* staging = NULL;
        if (SUCCEEDED(ID3D11Device_CreateTexture2D(s_d3d11.device, &desc, NULL, &staging))) {
            ID3D11DeviceContext_CopyResource(s_d3d11.context, (ID3D11Resource*)staging, (ID3D11Resource*)back_buffer);
            D3D11_MAPPED_SUBRESOURCE mapped;
            if (SUCCEEDED(ID3D11DeviceContext_Map(s_d3d11.context, (ID3D11Resource*)staging, 0, D3D11_MAP_READ, 0, &mapped))) {
                FILE* f_bmp = fopen(bmp_path, "wb");
                if (f_bmp) {
                    uint32_t w = desc.Width;
                    uint32_t h = desc.Height;
                    uint32_t row_padded = (w * 3 + 3) & (~3);
                    uint32_t file_size = 54 + row_padded * h;
                    uint8_t bmp_hdr[54] = {
                        'B', 'M',
                        (uint8_t)file_size, (uint8_t)(file_size >> 8), (uint8_t)(file_size >> 16), (uint8_t)(file_size >> 24),
                        0, 0, 0, 0, 54, 0, 0, 0,
                        40, 0, 0, 0,
                        (uint8_t)w, (uint8_t)(w >> 8), (uint8_t)(w >> 16), (uint8_t)(w >> 24),
                        (uint8_t)h, (uint8_t)(h >> 8), (uint8_t)(h >> 16), (uint8_t)(h >> 24),
                        1, 0, 24, 0, 0, 0, 0, 0,
                        (uint8_t)(row_padded * h), (uint8_t)((row_padded * h) >> 8), (uint8_t)((row_padded * h) >> 16), (uint8_t)((row_padded * h) >> 24),
                        0x13, 0x0B, 0, 0, 0x13, 0x0B, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
                    };
                    fwrite(bmp_hdr, 1, 54, f_bmp);
                    uint8_t* bmp_row = (uint8_t*)calloc(1, row_padded);
                    if (bmp_row) {
                        for (int y = (int)h - 1; y >= 0; y--) {
                            const uint8_t* row = (const uint8_t*)mapped.pData + y * mapped.RowPitch;
                            for (uint32_t x = 0; x < w; x++) {
                                bmp_row[x * 3 + 0] = row[x * 4 + 2]; // B
                                bmp_row[x * 3 + 1] = row[x * 4 + 1]; // G
                                bmp_row[x * 3 + 2] = row[x * 4 + 0]; // R
                            }
                            fwrite(bmp_row, 1, row_padded, f_bmp);
                        }
                        free(bmp_row);
                    }
                    fclose(f_bmp);
                }
                ID3D11DeviceContext_Unmap(s_d3d11.context, (ID3D11Resource*)staging, 0);
            }
            ID3D11Texture2D_Release(staging);
        }
        ID3D11Texture2D_Release(back_buffer);
    }
}

/* Copy the finished backbuffer aside so EFB copies see a complete picture instead of
 * the mid-frame clear colour. Called at the end of d3d11_present(), after the GX
 * batches have been drawn. */
static void d3d11_capture_efb_snapshot(void) {
    ID3D11Texture2D* back_buffer = NULL;
    if (FAILED(IDXGISwapChain_GetBuffer(s_d3d11.swap_chain, 0, &IID_ID3D11Texture2D, (void**)&back_buffer)))
        return;
    D3D11_TEXTURE2D_DESC desc;
    ID3D11Texture2D_GetDesc(back_buffer, &desc);
    HRESULT hr_snap = 0;
    if (!s_d3d11.efb_snapshot || s_d3d11.efb_snapshot_w != desc.Width || s_d3d11.efb_snapshot_h != desc.Height) {
        if (s_d3d11.efb_snapshot) ID3D11Texture2D_Release(s_d3d11.efb_snapshot);
        D3D11_TEXTURE2D_DESC sd = desc;
        sd.Usage = D3D11_USAGE_DEFAULT;
        sd.BindFlags = 0;
        sd.CPUAccessFlags = 0;
        sd.MiscFlags = 0;
        sd.SampleDesc.Count = 1;
        sd.SampleDesc.Quality = 0;
        sd.MipLevels = 1;
        sd.ArraySize = 1;
        hr_snap = ID3D11Device_CreateTexture2D(s_d3d11.device, &sd, NULL, &s_d3d11.efb_snapshot);
        if (FAILED(hr_snap)) {
            printf("[EfbSnapshot] creation FAILED (0x%08lX)\n", (unsigned long)hr_snap);
            fflush(stdout);
            s_d3d11.efb_snapshot = NULL;
            ID3D11Texture2D_Release(back_buffer);
            return;
        }
        s_d3d11.efb_snapshot_w = desc.Width;
        s_d3d11.efb_snapshot_h = desc.Height;
        printf("[EfbSnapshot] created %ux%u\n", desc.Width, desc.Height);
        fflush(stdout);
    }
    ID3D11DeviceContext_CopyResource(s_d3d11.context, (ID3D11Resource*)s_d3d11.efb_snapshot,
                                     (ID3D11Resource*)back_buffer);
    ID3D11Texture2D_Release(back_buffer);
}

/* Decode one destination texel of an EFB copy in the layout the writer below produced.
 * `format` is the copy destination format (GX_TF_*), `disp` the 16bpp linear scanout
 * buffer, `linear4` the TLS_EFB_LINEAR debug layout. This exists because the probe that
 * measures a copy must decode with the *same* rule the write used: reading an RGB565
 * destination as RGBA8 tiles reports dstavg != srcavg for a write that is correct, and
 * that would make the chain probe lie exactly when TLS_EFB_COPY_FMT is on. */
/* R8 (EFB-copy ids 8 and 1) is the GX_TF_I8 geometry: 8 texels wide by 4 tall,
 * 32 bytes per tile - not the 4x4 tile the other 32-byte formats use. The
 * texture decoder in this file says so explicitly ("case 1: GX_TF_I8 (8x4
 * tiles, 32 bytes)"), and a destination the guest samples has to be written in
 * the layout that decoder will read.
 *
 * Opt-in via TLS_R8_TILE_8X4 because the title's bloom chain also uses R8 and
 * the 1448 invariant is the only verified reference this project has: flipping
 * the default would move it with nothing to check the new value against.
 * Both the writer and efb_dst_decode_texel read this, so the chain probe stays
 * honest - a probe that decodes with a different rule than the writer is worse
 * than no probe. */
static int s_clears_this_frame = 0;
static int s_xfbs_this_frame = 0;
static float s_last_clear[4] = {0,0,0,0};

static int efb_r8_tile_8x4(void) {
    static int s = -1;
    if (s < 0) s = getenv("TLS_R8_TILE_8X4") ? 1 : 0;
    return s;
}

static void efb_dst_decode_texel(const uint8_t* guest, uint32_t format, uint32_t dst_w,
                                 uint32_t gx, uint32_t gy, int disp, int linear4,
                                 uint8_t* r, uint8_t* g, uint8_t* b, uint8_t* a) {
    *r = *g = *b = 0; *a = 255;
    if (disp) {
        uint16_t v = ((const uint16_t*)guest)[(size_t)gy * 640u + gx];
        *r = (uint8_t)(((v >> 11) & 0x1F) << 3);
        *g = (uint8_t)(((v >> 5) & 0x3F) << 2);
        *b = (uint8_t)((v & 0x1F) << 3);
        *a = 255;
        return;
    }
    if (linear4) {
        const uint8_t* p = guest + ((size_t)gy * dst_w + gx) * 4;
        *r = p[0]; *g = p[1]; *b = p[2]; *a = p[3];
        return;
    }
    uint32_t tiles_x = (dst_w + 3) / 4;
    uint32_t tile = (gy / 4) * tiles_x + (gx / 4);
    uint32_t within = (gy % 4) * 4 + (gx % 4);
    /* R8 (EFB-copy ids 8 and 1) is the GX_TF_I8 geometry: 8 texels wide by 4 tall,
     * 32 bytes per tile - not the 4x4 tile the other 32-byte formats use. The
     * texture decoder in this file says so explicitly ("case 1: GX_TF_I8 (8x4
     * tiles, 32 bytes)"), and a destination the guest samples has to be written
     * in the layout that decoder will read. Opt-in via TLS_R8_TILE_8X4 because
     * the title's bloom chain also uses R8 and the 1448 invariant is the only
     * verified reference we have. */
    /* R8 uses the 8x4 GX_TF_I8 tile; see efb_r8_tile_8x4(). Must agree with
     * the writer or the chain probe lies. */
    const bool r8 = (format == 8 || format == 1);
    if (efb_r8_tile_8x4() && r8) {
        tiles_x = (dst_w + 7) / 8;
        tile = (gy / 4) * tiles_x + (gx / 8);
        within = (gy % 4) * 8 + (gx % 8);
    }
    switch (format) {
        case 0: {           /* R4: 8x8 tiles, 32 bytes, high nibble = even texel */
            uint32_t tiles_x8 = (dst_w + 7) / 8;
            uint32_t tile8  = (gy / 8) * tiles_x8 + (gx / 8);
            uint32_t byte_i = (gy % 8) * 4 + (gx % 8) / 2;
            uint8_t  bv     = guest[(size_t)tile8 * 32 + byte_i];
            uint8_t  nib    = ((gx & 1u) == 0) ? (uint8_t)(bv >> 4) : (uint8_t)(bv & 0x0F);
            *r = *g = *b = (uint8_t)(nib * 17);
            *a = 255;
            break;
        }
        case 4: case 10: {   /* RGB565: 32-byte 4x4 tile of big-endian u16 */
            const uint8_t* t = guest + (size_t)tile * 32 + within * 2;
            uint16_t v = (uint16_t)((t[0] << 8) | t[1]);
            *r = (uint8_t)(((v >> 11) & 0x1F) << 3);
            *g = (uint8_t)(((v >> 5) & 0x3F) << 2);
            *b = (uint8_t)((v & 0x1F) << 3);
            *a = 255;   /* RGB565 destinations have no alpha: GX samples a = 1 */
            break;
        }
        case 5: case 11: {   /* RGB5A3: bit 15 set = 1-bit alpha + RGB555 */
            const uint8_t* t = guest + (size_t)tile * 32 + within * 2;
            uint16_t v = (uint16_t)((t[0] << 8) | t[1]);
            *a = (v & 0x8000) ? 255 : 0;
            *r = (uint8_t)(((v >> 10) & 0x1F) << 3);
            *g = (uint8_t)(((v >> 5) & 0x1F) << 3);
            *b = (uint8_t)((v & 0x1F) << 3);
            break;
        }
        case 3: case 9: {   /* RA8 / IA8: 32-byte 4x4 tile of (alpha, intensity) pairs */
            const uint8_t* t = guest + (size_t)tile * 32 + within * 2;
            *a = t[0];
            *r = *g = *b = t[1];
            break;
        }
        case 7: {           /* A8: 32-byte 4x4 tile of alpha */
            *a = guest[(size_t)tile * 32 + within];
            *r = *g = *b = 0;
            break;
        }
        case 8: {           /* R8: 32-byte 4x4 tile of red */
            *r = guest[(size_t)tile * 32 + within];
            *g = *b = *r;
            *a = 255;
            break;
        }
        case 1: {           /* R8 again: id 1 is the same memory layout as id 8 */
            *r = guest[(size_t)tile * 32 + within];
            *g = *b = *r;
            *a = 255;
            break;
        }
        default: {  /* GX_TF_RGBA8: 32B of A/R pairs then 32B of G/B pairs */
            const uint8_t* t = guest + (size_t)tile * 64;
            *a = t[within * 2 + 0];
            *r = t[within * 2 + 1];
            *g = t[32 + within * 2 + 0];
            *b = t[32 + within * 2 + 1];
            break;
        }
    }
}

/* GX EFB -> texture copy (BP 0x52). Reads the requested GX-space rectangle out of the
 * backbuffer and writes it into guest memory as a GX RGBA8 texture, in the same 4x4
 * tile layout that decode_gx_texture() reads (32 bytes of A/R pairs, then 32 bytes of
 * G/B pairs, per tile). This is what produces the water reflection, the menu blur and
 * the guest's own VI framebuffers - none of which existed while the copy was ignored
 * (handover 5c.11). */
static void d3d11_efb_copy_to_guest(uint32_t dst_guest, uint32_t x0, uint32_t y0,
                                    uint32_t x1, uint32_t y1, uint32_t format, int half_scale,
                                    uint32_t pitch, uint32_t exec) {
    if (!s_d3d11.device || !s_d3d11.context || !s_d3d11.swap_chain) return;
    /* Copy sequence number, read by the guest-side probes (TLS_DUMP_AT_PC prints it).
     * It answers the one question that decides whether the hero's defect is a write/alias
     * problem or a present-phase problem: when the conversion runs, has the copy that
     * feeds it already happened? If the conversion's `seq` is >= the copy's, the copy ran
     * first and the zeroed staging is a memory question; if it is smaller, the conversion
     * runs before its own input (handover 5c.46 AP-U4). */
    extern unsigned g_efb_copy_seq;
    extern int g_efb_copy_last_replay;
    g_efb_copy_seq++;
    g_efb_copy_last_replay = s_replaying_copy;
    /* Destination pixel format. Until now every copy was written as a 4-byte RGBA8 tile,
     * which is only right for the copies whose destination the guest samples as RGBA8
     * (GX_TF_RGBA8 = 6). The MENU's composite chain copies into **RGB565** destinations
     * as well - Dolphin's own per-copy dumps name them `..._320x224_4.png` - and the
     * guest samples those with GX_TF_RGB565, i.e. 2 bytes per pixel in 32-byte 4x4
     * tiles. Writing 64-byte RGBA8 tiles there puts every texel in the wrong place and
     * hands the 3D passes a garbage "previous frame" texture: measured at MENU frame
     * 1448, batch b13's TEV stage 3 samples `0x9038D1C0 320x224 fmt=4 avg=(127,112,0)`
     * and *adds* it, which is exactly the saturated red the foreground rock shows.
     *
     * TLS_EFB_COPY_FMT=1 writes the destination in the format's real tile layout and
     * derives the destination width from the pitch and the format's bytes per pixel
     * (tile row = pitch*32 bytes = dst_w*4*bpp, so dst_w = pitch*8/bpp), which
     * reproduces the guest's own pitch/dstw pairs (`pitch=80 -> 320` for RGB565,
     * `pitch=160 -> 320` for RGBA8) instead of the old source/half rule.
     *
     * PROMOTED to the default (handover 5c.23): verified on the attract/title screen,
     * where it fixes the *sizes* of the bloom chain's destinations - the title's
     * 160x112 R8 luminance chain used to be written as 40x28 RGBA8, and its 640x448
     * RA8 copies as 320x224 - and every destination then reproduces the size Dolphin's
     * own per-copy dumps name (`160x112_1`, `80x56_6`, `320x224_4`, `640x448_3`).
     * `TLS_EFB_COPY_FMT=0` restores the old write for A/B. */
    static int s_copy_fmt = -1;
    if (s_copy_fmt < 0) {
        const char* cf = getenv("TLS_EFB_COPY_FMT");
        s_copy_fmt = cf ? (atoi(cf) != 0) : 1;
    }
    int is_xfb_copy = (int)((exec >> 14) & 1u);
    if (is_xfb_copy) s_xfbs_this_frame++;
    uint32_t bpp = 4;
    int dst_supported = 1;
    if (s_copy_fmt) {
        if (is_xfb_copy) {
            bpp = 2;                  /* 16bpp linear scanout buffer, see below */
        } else {
            /* UPE_Copy::tp_realFormat() values (Dolphin's EFBCopyFormat), and the bytes
             * per pixel each one occupies in its 4x4 tile:
             *   0 R4 .5 | 1 R8 1 | 2 RA4 .5 | 3 RA8 2 | 4 RGB565 2 | 5 RGB5A3 2
             *   6 RGBA8 4 | 7 A8 1 | 8 R8 1 | 9 RA8 2 | 10 RGB565 2 | 11 RGB5A3 2
             *   12 RGBA8 4 | 13..15 Z8/Z16/Z24
             * Formats 8 (R8) and 11 (RGB5A3) were the ones the title screen's bloom chain
             * uses, and treating them as "unimplemented -> write RGBA8" also halved or
             * quartered the destination *width* (dst_w = pitch*8/bpp), so the guest
             * sampled a 160x112 R8 luminance chain as a 40x28 RGBA8 texture - measured:
             * `[EfbChain] copy=5 dst=0x9038D1C0 40x28 fmt=8` while the copy source is
             * 160x112, and the final `SRCALPHA/INVSRCALPHA` pass then drags the title
             * screen from a flat 220 plate to the black-cornered radial glow
             * (handover 5c.23). */
            switch (format) {
                case 6: case 12: bpp = 4; break;  /* RGBA8: 8B A/R + 8B G/B per 4x4 tile */
                case 4: case 10: bpp = 2; break;  /* RGB565: 32B of big-endian u16 */
                case 5: case 11: bpp = 2; break;  /* RGB5A3: 32B of big-endian u16 */
                case 3: case 9:  bpp = 2; break;  /* RA8: 32B of (alpha, red) pairs */
                case 7: bpp = 1; break;           /* A8: 32B of alpha */
                case 8: bpp = 1; break;           /* R8: 32B of red (intensity) */
                case 0: bpp = 1; break;           /* R4: 8x8 tiles, 4 bits per texel. A tile
                                                   * row is (dst_w/8)*32 = dst_w*4 bytes and
                                                   * equals pitch*32, so dst_w = pitch*8 -
                                                   * which is what bpp = 1 yields here. */
                case 1: bpp = 1; break;           /* R8 again - the id the Chapter-1
                                                   * composite chain uses (5c.25 §4c).
                                                   * Same 32B 4x4 tile as 8; leaving it
                                                   * on the RGBA8 fallback quadrupled
                                                   * dst_w (pitch*8/4 instead of *8/1). */
                default:
                    /* Keep the old behaviour for the formats that are not implemented
                     * (an RGBA8 write) rather than dropping the copy: a skipped copy
                     * leaves guest memory stale, which is worse than a wrong layout. */
                    bpp = 4;
                    dst_supported = 0;
                    break;
            }
        }
    }
    if (!dst_supported) {
        static uint32_t s_unsup = 0;
        if (s_unsup < 8) {
            printf("[EfbCopy] destination format %u not implemented, writing RGBA8 (dst=0x%08X)\n",
                   format, dst_guest);
            fflush(stdout);
            s_unsup++;
        }
    }
    if (x1 < x0 || y1 < y0) return;

    uint32_t w = x1 - x0 + 1;
    uint32_t h = y1 - y0 + 1;
    if (w > 1024 || h > 1024) return;

    /* Half-scale copies (see GxPendingEfbCopy.half_scale and handover 5c.15): the
     * destination holds w/2 x h/2 pixels, so the source rectangle is downsampled and the
     * 4x4 tile grid is dst_w/4 tiles wide, not w/4. Writing at the source size is what
     * produced the 4-pixel horizontal stripes the composite quads show. */
    uint32_t dst_w = half_scale ? ((w + 1) / 2) : w;
    uint32_t dst_h = half_scale ? ((h + 1) / 2) : h;
    uint32_t step = half_scale ? 2 : 1;
    /* TLS_EFB_COPY_GEOM=1 derives the destination size from the hardware registers
     * instead: BP 0x52 bit 14 says the copy goes into the 16bpp *linear* scanout buffer
     * (stride = pitch*32 bytes, so width = pitch*16), otherwise the destination is a 4x4
     * tiled texture whose tile row is (width/4)*64 = width*16 bytes == pitch*32, so
     * width = pitch*2. Heights follow from a uniform shrink factor source_w/dst_w.
     * The old rule above only ever produced a 2:1 shrink, so every 4:1 and 8:1 copy the
     * guest asks for (160x112 and 80x56 destinations, which the Dolphin reference dumps
     * show) was written 2-4x too large, straddling the next buffer - measured copy by
     * copy on MENU frame 1448 in handover 5c.17. */
    static int s_geom = -1;
    if (s_geom < 0) s_geom = getenv("TLS_EFB_COPY_GEOM") ? 1 : 0;
    if (s_copy_fmt) {
        /* Format-aware version of the same derivation: a 4x4-tiled destination's tile
         * row is dst_w*4*bpp bytes and equals pitch*32, so dst_w = pitch*8/bpp. */
        if (is_xfb_copy) {
            uint32_t ww = (pitch * 32u) / 2u;   /* 16bpp linear scanout buffer */
            if (ww) dst_w = ww;
            dst_h = h;
            step = 1;
        } else if (pitch) {
            uint32_t ww = (pitch * 8u) / bpp;
            if (ww && ww <= w) {
                dst_w = ww;
                step = (w % dst_w) == 0 ? (w / dst_w) : 1;
                if (step == 0) step = 1;
                dst_h = h / step;
            }
        }
    } else if (s_geom) {
        if (is_xfb_copy) {
            uint32_t ww = (pitch * 32u) / 2u;
            if (ww) dst_w = ww;
            dst_h = h;
            step = 1;
        } else if (pitch) {
            uint32_t ww = pitch * 2u;
            if (ww > w) ww = w;
            if (ww) dst_w = ww;
            step = (dst_w && (w % dst_w) == 0) ? (w / dst_w) : 1;
            if (step == 0) step = 1;
            dst_h = h / step;
        }
    }
    if (dst_w == 0) dst_w = 1;
    if (dst_h == 0) dst_h = 1;
    if (step == 0) step = 1;

    uint8_t* guest = (uint8_t*)host_resolve_gx_guest_addr(dst_guest);
    if (!guest) {
        static int s_addr_reported = 0;
        if (s_addr_reported++ < 4) {
            printf("[EfbCopy] destination 0x%08X is not mapped; copy skipped\n", dst_guest);
            fflush(stdout);
        }
        return;
    }

    /* The two ways to source an EFB copy, and why neither is the default yet: see
     * handover 5c.15. The pipeline records every GXCopyTex in stream order with the
     * vertex index that was current when the guest issued it, and this backend can
     * replay the queue from inside its batch loop so a copy reads the frame as drawn
     * so far (TLS_DEFER_EFB_COPY=1). That is what the hardware does, and it is
     * measurable: the copies of one frame then capture distinct states of the same
     * frame (black clear -> cave -> progressively brighter) instead of all capturing
     * the previous frame.
     *
     * It is NOT the default because it makes both the title attract screen and the
     * MENU background wrong in a different way (white instead of the previous
     * behaviour), i.e. the composite chain that consumes these copies has a second
     * defect that has not been found yet. Keeping the old source as the default keeps
     * the tree visually identical to 510426d while the new path stays available.
     *
     * TLS_EFB_PREV_FRAME=1 forces the old "last completed frame" source in either mode. */
    static int s_defer = -1;
    static int s_prev_frame = -1;
    if (s_defer < 0) s_defer = getenv("TLS_DEFER_EFB_COPY") ? 1 : 0;
    if (s_prev_frame < 0) s_prev_frame = getenv("TLS_EFB_PREV_FRAME") ? 1 : 0;
    /* Stream-order replay (handover 5c.46 AP-R). This function serves BOTH copy paths -
     * the inline hook and the batch loop's replay of the queue - and until AP-R the
     * source was chosen from the GLOBAL TLS_DEFER_EFB_COPY flag instead of from which
     * path is calling. That is why narrowing the deferral to a copy class appeared not
     * to work (AP-Q item 4): `TLS_EFB_ORDER=staging` did replay the staging copies in
     * stream order, but because s_defer was 0 they still read the PREVIOUS-FRAME
     * SNAPSHOT, i.e. exactly the black loading frame the bake must not read. The
     * narrowing was never given the source the global switch gets.
     *
     * A replayed copy must read the live back buffer (the frame as drawn up to its
     * vertex mark); an inline copy keeps the legacy previous-frame snapshot so the
     * default picture - and the title/MENU composite path that depends on it - does not
     * move. TLS_EFB_PREV_FRAME=1 still forces the legacy source in either path. */
    int replaying = s_replaying_copy != 0;
    if (s_prev_frame) replaying = 0;
    /* TLS_EFB_SRC_CURRENT=1 forces the copy to read the CURRENT back buffer even
     * though the snapshot exists. The default path reads the previous-frame
     * snapshot, and the alternate-frame staleness (5c.27 §9) makes every even
     * present byte-identical - which is what a composite of a composite would
     * converge to. This flag is how to tell a feedback loop from a stale write:
     * it changes only the copy *source*, nothing else. */
    static int s_src_current = -1;
    if (s_src_current < 0) s_src_current = getenv("TLS_EFB_SRC_CURRENT") ? 1 : 0;
    /* One rule, one place: the snapshot is read only by an INLINE copy with the legacy
     * behaviour on. A replayed copy always reads the live back buffer. */
    bool src_snapshot = (!s_src_current && !replaying && (s_prev_frame || s_d3d11.efb_snapshot));
    {
        static int s_src = 0;
        if (s_src < 3) {
            s_src++;
            printf("[EfbCopySrc] reading %s (deferred=%d replay=%d)\n",
                   src_snapshot ? "previous-frame snapshot" : "current backbuffer", s_defer, replaying);
            fflush(stdout);
        }
    }
    ID3D11Texture2D* source = NULL;
    bool have_backbuffer = false;
    if (src_snapshot) {
        source = s_d3d11.efb_snapshot;
    } else {
        if (FAILED(IDXGISwapChain_GetBuffer(s_d3d11.swap_chain, 0, &IID_ID3D11Texture2D, (void**)&source)))
            return;
        have_backbuffer = true;
    }

    D3D11_TEXTURE2D_DESC desc;
    ID3D11Texture2D_GetDesc(source, &desc);
    desc.Usage = D3D11_USAGE_STAGING;
    desc.BindFlags = 0;
    desc.CPUAccessFlags = D3D11_CPU_ACCESS_READ;
    desc.MiscFlags = 0;
    ID3D11Texture2D* staging = NULL;
    if (SUCCEEDED(ID3D11Device_CreateTexture2D(s_d3d11.device, &desc, NULL, &staging))) {
        ID3D11DeviceContext_CopyResource(s_d3d11.context, (ID3D11Resource*)staging, (ID3D11Resource*)source);
        D3D11_MAPPED_SUBRESOURCE mapped;
        if (SUCCEEDED(ID3D11DeviceContext_Map(s_d3d11.context, (ID3D11Resource*)staging, 0, D3D11_MAP_READ, 0, &mapped))) {
            const uint8_t* src = (const uint8_t*)mapped.pData;
            /* Is the source we are about to sample actually the drawn frame? Scan a
             * coarse grid of the mapped backbuffer and report its brightness range.
             * TLS_EFB_SAMPLE=1. */
            {
                static int s_sample = -1;
                if (s_sample < 0) s_sample = getenv("TLS_EFB_SAMPLE") ? 1 : 0;
                if (s_sample) {
                    static int s_samples = 0;
                    extern int g_runner_current_frame;
                    if (g_runner_current_frame >= 1100 && s_samples < 4) {
                        s_samples++;
                        unsigned maxlum = 0; unsigned long sum = 0, n = 0;
                        for (UINT yy = 0; yy < desc.Height; yy += 16) {
                            const uint8_t* r2 = src + (size_t)yy * mapped.RowPitch;
                            for (UINT xx = 0; xx < desc.Width; xx += 16) {
                                const uint8_t* p2 = r2 + (size_t)xx * 4;
                                unsigned lum = p2[0] + p2[1] + p2[2];
                                if (lum > maxlum) maxlum = lum;
                                sum += lum; n++;
                            }
                        }
                        printf("[EfbSample] src=%s %ux%u avg=%.1f max=%u (of 765)\n",
                               have_backbuffer ? "backbuffer" : "snapshot", desc.Width, desc.Height,
                               (double)sum / (double)n, maxlum);
                        fflush(stdout);
                    }
                }
            }
            /* What did each copy of one guest frame actually capture? Samples the same
             * grid the copy is about to read and prints the average colour of the source
             * rectangle, so a destination holding the wrong picture can be traced to the
             * pixels it was written from. TLS_EFB_SAMPLE_FRAME=<guest frame>. */
            {
                static int s_sf = -2;
                if (s_sf == -2) {
                    const char* f = getenv("TLS_EFB_SAMPLE_FRAME");
                    s_sf = f ? atoi(f) : -1;
                }
                extern int g_runner_current_frame;
                if (s_sf >= 0 && g_runner_current_frame == s_sf) {
                    float sx0 = (s_d3d11.vp_w > 0.0f) ? (s_d3d11.vp_w / 640.0f) : (float)desc.Width / 640.0f;
                    float sy0 = (s_d3d11.vp_h > 0.0f) ? (s_d3d11.vp_h / 480.0f) : (float)desc.Height / 480.0f;
                    unsigned long sr = 0, sg = 0, sb = 0, n = 0;
                    unsigned long sa = 0, na = 0, a0 = 0, a255 = 0;
                    for (uint32_t gy = 0; gy < h; gy += 8) {
                        uint32_t py = (uint32_t)(s_d3d11.vp_y + ((float)(y0 + gy) + 0.5f) * sy0);
                        if (py >= desc.Height) py = desc.Height - 1;
                        const uint8_t* row = src + (size_t)py * mapped.RowPitch;
                        for (uint32_t gx = 0; gx < w; gx += 8) {
                            uint32_t px = (uint32_t)(s_d3d11.vp_x + ((float)(x0 + gx) + 0.5f) * sx0);
                            if (px >= desc.Width) px = desc.Width - 1;
                            const uint8_t* p = row + (size_t)px * 4;
                            /* AP-AS: same channel order as the back-buffer probes - the
                             * surface is R8G8B8A8, so byte 0 is red (this line used to read
                             * p[2] as red, i.e. it reported (B,G,R)). */
                            sr += p[0]; sg += p[1]; sb += p[2]; n++;
                            /* The copy writes `a = p[3]` straight through, so the SOURCE's
                             * alpha channel is what every texture derived from a copy ends
                             * up with (handover 5c.46 AP-R). A D3D11 back buffer's alpha is
                             * not maintained unless the app writes it, so this number is the
                             * difference between "the art is dark" and "the art is invisible". */
                            sa += p[3]; na++;
                            if (p[3] == 0) a0++; else if (p[3] == 255) a255++;
                        }
                    }
                    if (n == 0) n = 1;
                    printf("[EfbSampleCopy] frame=%d dst=0x%08X %ux%u src=(%u,%u)-(%u,%u) avg=(%lu,%lu,%lu) "
                           "alpha avg=%lu a0=%lu/%lu a255=%lu\n",
                           g_runner_current_frame, dst_guest, w, h, x0, y0, x1, y1,
                           sr / n, sg / n, sb / n, na ? sa / na : 0, a0, na, a255);
                    fflush(stdout);
                }
            }
            float sx = (s_d3d11.vp_w > 0.0f) ? (s_d3d11.vp_w / 640.0f) : (float)desc.Width / 640.0f;
            float sy = (s_d3d11.vp_h > 0.0f) ? (s_d3d11.vp_h / 480.0f) : (float)desc.Height / 480.0f;
            uint32_t tiles_x = (dst_w + 3) / 4;
            /* A/B: display copies may want a row-linear scanout buffer rather than the
             * 4x4-tiled texture layout. TLS_EFB_LINEAR=1 writes rows linearly (R,G,B,A)
             * so the two can be compared on one frame. The two VI scanout buffers are
             * 16bpp linear (614400 B each: the gap between 0x900037C0 and 0x900997E0 is
             * 614432). Writing 32-bit pixels into them overran into the next buffer - that
             * was the doubled image in the guest framebuffer dump (handover 5c.11).
             * Display copies therefore go out as RGB565 rows; texture copies keep the
             * format's own tile layout.
             *
             * Hoisted out of the pixel loop (it was per-pixel before) because the probes
             * below must decode guest memory with exactly this rule - see
             * efb_dst_decode_texel. */
            static int s_linear = -1;
            if (s_linear < 0) s_linear = getenv("TLS_EFB_LINEAR") ? 1 : 0;
            const bool is_display_copy =
                s_copy_fmt ? (is_xfb_copy != 0)
                           : (s_geom ? (is_xfb_copy != 0)
                                     : (dst_guest == 0x900997E0u || dst_guest == 0x900037C0u));
                    /* TLS_EFB_COPY_LOG=1: report the byte RANGE each copy writes, computed from the
             * branch that will actually be taken. Several rounds chased "who writes
             * 0x903CD1C0" through lifted stores, the copy chain and the loader, and all three
             * said no - so make the copy path state its own extent (handover 5c.45 K). */
            {
                static int s_log = -1;
                static int s_n = 0;
                if (s_log < 0) s_log = getenv("TLS_EFB_COPY_LOG") ? 1 : 0;
                if (s_log && s_n < 400) {
                    s_n++;
                    size_t bytes;
                    const char* mode;
                    if (is_display_copy && !s_linear) {
                        mode = "xfb640";
                        bytes = (size_t)((y0 + dst_h) * 640u + (x0 + dst_w)) * 2u;
                    } else if (s_linear) {
                        mode = "linear";
                        bytes = (size_t)dst_w * dst_h * 4u;
                    } else {
                        mode = "tiled";
                        bytes = (size_t)((dst_h + 3) / 4) * ((dst_w + 3) / 4) * 32u;
                    }
                    printf("[EfbCopyRange] dst=0x%08X %ux%u step=%u mode=%s bytes=%zu end=0x%08X\n",
                           dst_guest, dst_w, dst_h, step, mode, bytes,
                           (unsigned)(dst_guest + bytes));
                    fflush(stdout);
                }
            }

            for (uint32_t gy = 0; gy < dst_h; gy++) {
                uint32_t py = (uint32_t)(s_d3d11.vp_y + ((float)(y0 + gy * step) + 0.5f) * sy);
                if (py >= desc.Height) py = desc.Height - 1;
                const uint8_t* row = src + (size_t)py * mapped.RowPitch;
                for (uint32_t gx = 0; gx < dst_w; gx++) {
                    uint32_t px = (uint32_t)(s_d3d11.vp_x + ((float)(x0 + gx * step) + 0.5f) * sx);
                    if (px >= desc.Width) px = desc.Width - 1;
                    const uint8_t* p = row + (size_t)px * 4;
                    uint8_t b = p[0], g = p[1], r = p[2], a = p[3];
                    if (is_display_copy && !s_linear) {
                        uint16_t* out = (uint16_t*)guest;
                        uint32_t row = (y0 + gy) * 640u + (x0 + gx);
                        out[row] = (uint16_t)(((r >> 3) << 11) | ((g >> 2) << 5) | (b >> 3));
                    } else if (s_linear) {
                        uint8_t* px = guest + ((size_t)gy * w + gx) * 4;
                        px[0] = r; px[1] = g; px[2] = b; px[3] = a;
                    } else if (!is_display_copy) {
                        uint32_t tile = (gy / 4) * tiles_x + (gx / 4);
                        uint32_t within = (gy % 4) * 4 + (gx % 4);
                        /* R8 is the 8x4 GX_TF_I8 tile, not 4x4 - see
                         * efb_r8_tile_8x4(). Opt-in so the title's R8 bloom
                         * chain keeps the invariant it was measured with. */
                        if (efb_r8_tile_8x4() && (format == 8 || format == 1)) {
                            tiles_x = (dst_w + 7) / 8;
                            tile = (gy / 4) * tiles_x + (gx / 8);
                            within = (gy % 4) * 8 + (gx % 8);
                        }
                        if (s_copy_fmt && (format == 4 || format == 10)) {
                            /* RGB565: 32-byte 4x4 tile of big-endian u16 */
                            uint16_t v = (uint16_t)(((r >> 3) << 11) | ((g >> 2) << 5) | (b >> 3));
                            uint8_t* t16 = guest + (size_t)tile * 32 + within * 2;
                            t16[0] = (uint8_t)(v >> 8);
                            t16[1] = (uint8_t)(v & 0xFF);
                        } else if (s_copy_fmt && (format == 5 || format == 11)) {
                            /* RGB5A3: 16-bit, alpha bit 15 clear => 1 bit alpha */
                            uint16_t v = (uint16_t)(((a >> 7) << 15) |
                                                    (((r * 31) / 255) << 10) |
                                                    (((g * 31) / 255) << 5) |
                                                    ((b * 31) / 255));
                            uint8_t* t16 = guest + (size_t)tile * 32 + within * 2;
                            t16[0] = (uint8_t)(v >> 8);
                            t16[1] = (uint8_t)(v & 0xFF);
                        } else if (s_copy_fmt && (format == 3 || format == 9)) {
                            /* RA8 (9) = (alpha, red) pairs; IA8 (3) = (alpha, intensity).
                             * Same 32-byte 4x4 tile, different second channel. */
                            uint8_t* t8 = guest + (size_t)tile * 32 + within * 2;
                            t8[0] = a;
                            t8[1] = (format == 9) ? r
                                                  : (uint8_t)((r * 77 + g * 150 + b * 29) >> 8);
                        } else if (s_copy_fmt && format == 7) {
                            /* A8: 32-byte 4x4 tile of alpha */
                            guest[(size_t)tile * 32 + within] = a;
                        } else if (s_copy_fmt && (format == 8 || format == 1)) {
                            /* R8: 32-byte 4x4 tile of red. The bloom chain copies the
                             * frame here to get a one-byte luminance image; writing
                             * RGBA8 instead both mis-sized the destination and put the
                             * intensity in the wrong byte. Format 1 is the same layout
                             * (the Chapter-1 chain's id for it, 5c.25 §4c). */
                            guest[(size_t)tile * 32 + within] = r;
                        } else if (s_copy_fmt && format == 0) {
                            /* R4 (format id 0): 8x8 tiles, 32 bytes per tile, 4 bits per texel.
                             * This is the exact inverse of decode_gx_texture()'s `case 0`, which
                             * is what the guest will use to sample it: inside a tile the bytes are
                             * row-major, 4 bytes per row of 8 texels, and the HIGH nibble is the
                             * even texel. Both halves must stay in step or the destination decodes
                             * as a scrambled image that still has the right average - which is why
                             * the old RGBA8 fallback looked plausible and measured wrong. */
                            uint32_t tiles_x8 = (dst_w + 7) / 8;
                            uint32_t tile8  = (gy / 8) * tiles_x8 + (gx / 8);
                            uint32_t byte_i = (gy % 8) * 4 + (gx % 8) / 2;
                            uint8_t  nib    = (uint8_t)((r >> 4) & 0x0F);
                            uint8_t* t4     = guest + (size_t)tile8 * 32 + byte_i;
                            if ((gx & 1u) == 0) *t4 = (uint8_t)((*t4 & 0x0Fu) | (uint8_t)(nib << 4));
                            else                *t4 = (uint8_t)((*t4 & 0xF0u) | nib);
                        } else {
                            uint8_t* tile_base = guest + (size_t)tile * 64;
                            tile_base[within * 2 + 0] = a;
                            tile_base[within * 2 + 1] = r;
                            tile_base[32 + within * 2 + 0] = g;
                            tile_base[32 + within * 2 + 1] = b;
                        }
                    }
                }
            }
            /* Per-copy chain probe. Hardware's `DumpEFBTarget` writes every EFB copy
             * destination in execution order, so the only honest comparison is the same
             * thing on the host: every copy of one frame in stream order, at the
             * destination's real size, printing (a) the average of the source rectangle
             * that was just read out of the frame and (b) the average of the destination
             * decoded back out of guest memory, i.e. what the guest will sample.
             * A copy whose (a) is the scene and whose (b) is black is a write/decode bug;
             * a copy whose (a) is also black is a servicing-model bug. TLS_EFB_CHAIN=<frame>,
             * TLS_EFB_CHAIN_DUMP=1 additionally writes each destination as a PPM. */
            {
                static int s_chain_frame = -2, s_chain_dump = 0, s_chain_idx = 0, s_chain_frame_seen = -1;
                static int s_chain_guest = -2;
                if (s_chain_frame == -2) {
                    const char* f = getenv("TLS_EFB_CHAIN");
                    s_chain_frame = f ? atoi(f) : -1;
                    s_chain_dump = getenv("TLS_EFB_CHAIN_DUMP") ? 1 : 0;
                    /* TLS_EFB_CHAIN_GUEST=<guest frame> gates on the GUEST frame counter
                     * instead of the present counter. The present index of a guest frame is
                     * not something you can guess from a log (measured: ~2 800 presents per
                     * 6 000 guest frames), and every probe aimed at "the frame the hero's
                     * texture is built" knows the guest frame, e.g. 1909 from TLS_DUMP_AT_PC
                     * on fn_800D6E48 (handover 5c.46 AP-T). */
                    const char* g = getenv("TLS_EFB_CHAIN_GUEST");
                    s_chain_guest = g ? atoi(g) : -1;
                }
                extern int g_runner_current_frame;
                /* Keyed on the present counter, not the guest frame counter: the two are
                 * offset by one (present N renders guest frame N-1), so gating on the frame
                 * counter silently compared a batch dump of one frame with the copies of
                 * the next one. */
                extern int s_efb_copy_batch_ctx;
                const bool chain_on =
                    (s_chain_frame >= 0 && (int)s_d3d11.frame_counter == s_chain_frame) ||
                    (s_chain_guest >= 0 && g_runner_current_frame == s_chain_guest);
                if (chain_on && s_chain_idx < 40) {
                    if (s_chain_frame_seen != s_chain_frame) { s_chain_frame_seen = s_chain_frame; s_chain_idx = 0; }
                    float qx = (s_d3d11.vp_w > 0.0f) ? (s_d3d11.vp_w / 640.0f) : (float)desc.Width / 640.0f;
                    float qy = (s_d3d11.vp_h > 0.0f) ? (s_d3d11.vp_h / 480.0f) : (float)desc.Height / 480.0f;
                    unsigned long sr2 = 0, sg2 = 0, sb2 = 0, sa2 = 0, ns = 0;
                    for (uint32_t gy = 0; gy < dst_h; gy += 4) {
                        uint32_t py = (uint32_t)(s_d3d11.vp_y + ((float)(y0 + gy * step) + 0.5f) * qy);
                        if (py >= desc.Height) py = desc.Height - 1;
                        const uint8_t* row2 = src + (size_t)py * mapped.RowPitch;
                        for (uint32_t gx = 0; gx < dst_w; gx += 4) {
                            uint32_t px = (uint32_t)(s_d3d11.vp_x + ((float)(x0 + gx * step) + 0.5f) * qx);
                            if (px >= desc.Width) px = desc.Width - 1;
                            const uint8_t* p2 = row2 + (size_t)px * 4;
                            sr2 += p2[2]; sg2 += p2[1]; sb2 += p2[0]; sa2 += p2[3]; ns++;
                        }
                    }
                    if (ns == 0) ns = 1;
                    /* Destination content, in the layout the writer just used. The alpha
                     * average is the term that decides how strong a `SRCALPHA/ONE`
                     * additive pass is: the composite tail's passes read these copies, so
                     * `dstalpha` is the EFB alpha the guest will sample (handover 5c.23). */
                    unsigned long dr = 0, dg = 0, db = 0, da = 0, nd = 0, dpeak = 0;
                    const bool chain_disp = is_display_copy && !s_linear;
                    const bool chain_lin = (s_linear != 0);
                    for (uint32_t gy = 0; gy < dst_h; gy++) {
                        for (uint32_t gx = 0; gx < dst_w; gx++) {
                            uint8_t r8, g8, b8, a8;
                            efb_dst_decode_texel(guest, format, dst_w, gx, gy,
                                                 chain_disp, chain_lin, &r8, &g8, &b8, &a8);
                            unsigned lum = (unsigned)r8 + g8 + b8;
                            if (lum > dpeak) dpeak = lum;
                            dr += r8; dg += g8; db += b8; da += a8; nd++;
                        }
                    }
                    if (nd == 0) nd = 1;
                    /* Raw byte checksum of the destination, independent of the decode above:
                     * the decode reads back what this function just wrote, so it is
                     * self-consistent even if the write landed at the wrong offset. Comparing
                     * this against the same address read from another instrument (e.g.
                     * TLS_DUMP_AT_PC) in the SAME run is what shows whether the guest and the
                     * copy path agree about where the bytes are (handover 5c.46 AP-T). */
                    {
                        const uint8_t* rb = (const uint8_t*)guest;
                        uint32_t sum = 0, nzb = 0;
                        for (uint32_t i = 0; i < 0x4000u; i++) { sum += rb[i]; if (rb[i]) nzb++; }
                        printf("[EfbChainSum] dst=0x%08X sum=%u nonzero=%u/16384\n", dst_guest, sum, nzb);
                    }
                    printf("[EfbChain] present=%d frame=%d copy=%d batch=%d dst=0x%08X %ux%u src=(%u,%u)-(%u,%u) xfb=%d fmt=%u "
                           "srcavg=(%lu,%lu,%lu) srca=%lu dstavg=(%lu,%lu,%lu) dstalpha=%lu dstpeak=%lu\n",
                           s_d3d11.frame_counter, g_runner_current_frame, s_chain_idx, s_efb_copy_batch_ctx,
                           dst_guest, dst_w, dst_h, x0, y0, x1, y1,
                           is_xfb_copy, format, sr2 / ns, sg2 / ns, sb2 / ns, sa2 / ns,
                           dr / nd, dg / nd, db / nd, da / nd, dpeak);
                    fflush(stdout);
                    if (s_chain_dump) {
                        char path[128];
                        snprintf(path, sizeof(path), "build/recomp/efbchain_%d_%02d_%08X_%ux%u.ppm",
                                 g_runner_current_frame, s_chain_idx, dst_guest, dst_w, dst_h);
                        FILE* df = fopen(path, "wb");
                        if (df) {
                            fprintf(df, "P6\n%u %u\n255\n", dst_w, dst_h);
                            for (uint32_t yy = 0; yy < dst_h; yy++) {
                                for (uint32_t xx = 0; xx < dst_w; xx++) {
                                    uint8_t r8, g8, b8, a8;
                                    efb_dst_decode_texel(guest, format, dst_w, xx, yy,
                                                         chain_disp, chain_lin, &r8, &g8, &b8, &a8);
                                    fputc(r8, df);
                                    fputc(g8, df);
                                    fputc(b8, df);
                                }
                            }
                            fclose(df);
                        }
                    }
                    s_chain_idx++;
                }
            }
            ID3D11DeviceContext_Unmap(s_d3d11.context, (ID3D11Resource*)staging, 0);
            /* Dump a copy destination as a PPM, decoded with the same tile layout, so the
             * picture the guest will sample can be compared with the Dolphin reference
             * dump. TLS_EFB_DUMP=<frame> dumps the copies issued in that frame. */
            {
                static int s_dump_frame = -2;
                if (s_dump_frame == -2) {
                    const char* f = getenv("TLS_EFB_DUMP");
                    s_dump_frame = f ? atoi(f) : -1;
                }
                extern int g_runner_current_frame;
                if (s_dump_frame >= 0 && g_runner_current_frame >= s_dump_frame) {
                    static int s_dump_n = 0;
                    if (s_dump_n < 4) {
                        char path[96];
                        snprintf(path, sizeof(path), "build/recomp/efb_tex_%d_%08X.ppm",
                                 s_dump_n, dst_guest);
                        FILE* df = fopen(path, "wb");
                        if (df) {
                            fprintf(df, "P6\n%u %u\n255\n", w, h);
                            uint32_t dtx = (w + 3) / 4;
                            for (uint32_t yy = 0; yy < h; yy++) {
                                for (uint32_t xx = 0; xx < w; xx++) {
                                    uint32_t tile = (yy / 4) * dtx + (xx / 4);
                                    uint32_t within = (yy % 4) * 4 + (xx % 4);
                                    const uint8_t* t = guest + (size_t)tile * 64;
                                    fputc(t[within * 2 + 1], df);
                                    fputc(t[32 + within * 2 + 0], df);
                                    fputc(t[32 + within * 2 + 1], df);
                                }
                            }
                            fclose(df);
                            printf("[EfbDump] %s (%ux%u)\n", path, w, h);
                            fflush(stdout);
                        }
                        s_dump_n++;
                    }
                }
            }
            /* Proof that the copy delivered content: count distinct byte values in the
             * first 4 KB of the destination. A destination that is still uninitialised
             * reads as one or two values; a real picture has many. TLS_EFB_CHECK=1. */
            static int s_check = -1, s_check_from = 0;
            if (s_check < 0) {
                s_check = getenv("TLS_EFB_CHECK") ? 1 : 0;
                const char* cf = getenv("TLS_EFB_CHECK_FRAME");
                s_check_from = cf ? atoi(cf) : 0;
            }
            if (s_check) {
                static int s_checks = 0;
                extern int g_runner_current_frame;
                if (g_runner_current_frame >= s_check_from && s_checks < 4) {
                    s_checks++;
                    unsigned seen[256] = {0};
                    int distinct = 0;
                    for (int i = 0; i < 4096; i++) {
                        unsigned b = guest[i];
                        if (!seen[b]) { seen[b] = 1; distinct++; }
                    }
                    printf("[EfbCheck] dst=0x%08X %ux%u: %d distinct byte values in first 4KB\n",
                           dst_guest, w, h, distinct);
                    fflush(stdout);
                }
            }
        }
        ID3D11Texture2D_Release(staging);
    }
    if (have_backbuffer) ID3D11Texture2D_Release(source);
}

/* Frame matcher for the per-batch probes (TLS_BATCH_DUMP / TLS_BATCH_PROBE /
 * TLS_TEV_PROBE). The present counter and the guest frame diverge (~2800 presents per
 * 6000 frames), so a probe keyed only to the present counter silently lands on a
 * different moment than the TLS_INPUT_SCRIPT frame number it was aimed at - that
 * ambiguity cost three full runs. Match either counter, exactly as TLS_SHOT_FRAMES
 * already does, and the same frame number means the same moment everywhere. */
static bool probe_frame_hits(int want, int present_count) {
    extern int g_runner_current_frame;
    /* The two counters agree only on some frames: when the present counter reaches N the
     * guest frame may already be N+1. Matching either one (which is what the probes used
     * to do) therefore makes a frame-gated probe fire TWICE for the same batch index - and
     * the two events carry DIFFERENT state, so a per-batch table read off the log mixes two
     * frames. TLS_PROBE_PRESENT_ONLY=1 pins the probes to the present counter, so a
     * per-batch table is one frame (handover 5c.46 AP-O items 1 and 10). */
    static int s_present_only = -1;
    if (s_present_only < 0) s_present_only = getenv("TLS_PROBE_PRESENT_ONLY") ? 1 : 0;
    if (s_present_only) return want == present_count;
    return want == present_count || want == g_runner_current_frame;
}

/* Same readback, plus the two statistics that name a *local* defect instead of a
 * frame average: the brightest sample (a saturated glow raises it without moving the
 * average much) and the number of red-dominant samples (a channel-swapped or
 * mis-decoded texture shows up as red-dominant rock, which an average hides).
 * Used by TLS_BATCH_PROBE. */
/* AP-AS: THE BACK-BUFFER PROBES READ R AND B THE WRONG WAY ROUND, and this is measured, not
 * inferred. The swap chain is `DXGI_FORMAT_R8G8B8A8_UNORM` (the swap-chain desc above), so a
 * mapped pixel is (R,G,B,A) and byte 0 is RED; both screenshot writers in this file already
 * assume exactly that (the PPM copies bytes 0,1,2 straight out, the BMP writes 2,1,0 as B,G,R).
 * These three probes did the opposite - `p[0]` as blue, `p[2]` as red - so every `avg=(r,g,b)`
 * they printed had R and B exchanged and the `red=` census counted BLUE-dominant pixels.
 * Measured on guest frame 2800 from ONE launch (shot and probe in the same run, handover 5c.46
 * AP-AS): the probe's last reading was `avg=(49,45,61)` while the screenshot of that same frame
 * is (60.07, 45.10, 49.14) and byte-identical to the gate's content reference; exchanging the
 * probe's R and B gives (61,45,49) - the screenshot, to within its 1/16 sampling. So every
 * `avg=[...]` in a `[BatchProbe]`/`[BatchRect]` line before AP-AS is **(B,G,R)**, and every
 * `red=<n>` counted blue. The per-batch DELTAS were still measured on the right surface, so the
 * batch attributions they support survive as "which batch moved the frame", but the red/blue
 * NAMES in AP-AI..AP-AP are swapped. */
static void probe_backbuffer_stats(unsigned* out_r, unsigned* out_g, unsigned* out_b,
                                   unsigned* out_max, unsigned* out_red, unsigned* out_bright,
                                   unsigned* out_n, unsigned* out_a) {
    *out_r = *out_g = *out_b = *out_max = *out_red = *out_bright = *out_n = 0;
    if (out_a) *out_a = 0;
    ID3D11Texture2D* bb = NULL;
    if (FAILED(IDXGISwapChain_GetBuffer(s_d3d11.swap_chain, 0, &IID_ID3D11Texture2D, (void**)&bb))) return;
    D3D11_TEXTURE2D_DESC desc;
    ID3D11Texture2D_GetDesc(bb, &desc);
    desc.Usage = D3D11_USAGE_STAGING;
    desc.BindFlags = 0;
    desc.CPUAccessFlags = D3D11_CPU_ACCESS_READ;
    desc.MiscFlags = 0;
    ID3D11Texture2D* staging = NULL;
    if (SUCCEEDED(ID3D11Device_CreateTexture2D(s_d3d11.device, &desc, NULL, &staging))) {
        ID3D11DeviceContext_CopyResource(s_d3d11.context, (ID3D11Resource*)staging, (ID3D11Resource*)bb);
        D3D11_MAPPED_SUBRESOURCE mapped;
        if (SUCCEEDED(ID3D11DeviceContext_Map(s_d3d11.context, (ID3D11Resource*)staging, 0, D3D11_MAP_READ, 0, &mapped))) {
            unsigned long sr = 0, sg = 0, sb = 0, sa = 0, n = 0;
            unsigned maxlum = 0, red = 0, bright = 0;
            for (UINT y = 0; y < desc.Height; y += 16) {
                const uint8_t* row = (const uint8_t*)mapped.pData + (size_t)y * mapped.RowPitch;
                for (UINT x = 0; x < desc.Width; x += 16) {
                    const uint8_t* p = row + (size_t)x * 4;
                    unsigned r8 = p[0], g8 = p[1], b8 = p[2];
                    sb += b8; sg += g8; sr += r8; sa += p[3]; n++;
                    unsigned lum = r8 + g8 + b8;
                    if (lum > maxlum) maxlum = lum;
                    if (lum > 600) bright++;
                    if (r8 > g8 + 30 && r8 > b8 + 30) red++;
                }
            }
            if (n == 0) n = 1;
            *out_r = (unsigned)(sr / n); *out_g = (unsigned)(sg / n); *out_b = (unsigned)(sb / n);
            *out_max = maxlum; *out_red = red; *out_bright = bright; *out_n = (unsigned)n;
            /* The EFB alpha channel is the term that decides how strong a
             * `SRCALPHA/ONE` additive pass is, and it travels into every EFB copy the
             * composite tail samples. GX writes it from the TEV alpha stage; the host
             * wrote 1.0 at every clear and never looked (handover 5c.23). */
            if (out_a) *out_a = (unsigned)(sa / n);
            ID3D11DeviceContext_Unmap(s_d3d11.context, (ID3D11Resource*)staging, 0);
        }
        ID3D11Texture2D_Release(staging);
    }
    ID3D11Texture2D_Release(bb);
}

/* Region readback for per-batch attribution (TLS_BATCH_RECT): the batch's own NDC
 * rectangle only, so a 70x43-pixel UI element is measurable and no draw list is cut.
 * NDC -> pixel uses the same mapping the renderer's viewport does: x = (ndc+1)/2*W,
 * y = (1-ndc)/2*H (the projection already carries the flip that was measured earlier). */
static void probe_backbuffer_rect(float mnx, float mny, float mxx, float mxy,
                                  unsigned* out_r, unsigned* out_g, unsigned* out_b,
                                  unsigned* out_dark, unsigned* out_n) {
    *out_r = *out_g = *out_b = *out_dark = *out_n = 0;
    ID3D11Texture2D* bb = NULL;
    if (FAILED(IDXGISwapChain_GetBuffer(s_d3d11.swap_chain, 0, &IID_ID3D11Texture2D, (void**)&bb))) return;
    D3D11_TEXTURE2D_DESC desc;
    ID3D11Texture2D_GetDesc(bb, &desc);
    int x0 = (int)((mnx + 1.0f) * 0.5f * (float)desc.Width);
    int x1 = (int)((mxx + 1.0f) * 0.5f * (float)desc.Width);
    int y0 = (int)((1.0f - mxy) * 0.5f * (float)desc.Height);
    int y1 = (int)((1.0f - mny) * 0.5f * (float)desc.Height);
    if (x0 < 0) x0 = 0;
    if (y0 < 0) y0 = 0;
    if (x1 > (int)desc.Width) x1 = (int)desc.Width;
    if (y1 > (int)desc.Height) y1 = (int)desc.Height;
    if (x1 <= x0 || y1 <= y0) { ID3D11Texture2D_Release(bb); return; }
    desc.Usage = D3D11_USAGE_STAGING;
    desc.BindFlags = 0;
    desc.CPUAccessFlags = D3D11_CPU_ACCESS_READ;
    desc.MiscFlags = 0;
    ID3D11Texture2D* staging = NULL;
    if (SUCCEEDED(ID3D11Device_CreateTexture2D(s_d3d11.device, &desc, NULL, &staging))) {
        ID3D11DeviceContext_CopyResource(s_d3d11.context, (ID3D11Resource*)staging, (ID3D11Resource*)bb);
        D3D11_MAPPED_SUBRESOURCE mapped;
        if (SUCCEEDED(ID3D11DeviceContext_Map(s_d3d11.context, (ID3D11Resource*)staging, 0, D3D11_MAP_READ, 0, &mapped))) {
            unsigned long sr = 0, sg = 0, sb = 0, n = 0, dark = 0;
            for (int y = y0; y < y1; y++) {
                const uint8_t* row = (const uint8_t*)mapped.pData + (size_t)y * mapped.RowPitch;
                for (int x = x0; x < x1; x++) {
                    const uint8_t* p = row + (size_t)x * 4;
                    unsigned r8 = p[0], g8 = p[1], b8 = p[2];
                    sb += b8; sg += g8; sr += r8; n++;
                    if (r8 + g8 + b8 < 300) dark++;
                }
            }
            if (n == 0) n = 1;
            *out_r = (unsigned)(sr / n); *out_g = (unsigned)(sg / n); *out_b = (unsigned)(sb / n);
            *out_dark = (unsigned)dark; *out_n = (unsigned)n;
            ID3D11DeviceContext_Unmap(s_d3d11.context, (ID3D11Resource*)staging, 0);
        }
        ID3D11Texture2D_Release(staging);
    }
    ID3D11Texture2D_Release(bb);
}

static void probe_backbuffer_avg(unsigned* out_r, unsigned* out_g, unsigned* out_b) {
    *out_r = *out_g = *out_b = 0;
    ID3D11Texture2D* bb = NULL;
    if (FAILED(IDXGISwapChain_GetBuffer(s_d3d11.swap_chain, 0, &IID_ID3D11Texture2D, (void**)&bb))) return;
    D3D11_TEXTURE2D_DESC desc;
    ID3D11Texture2D_GetDesc(bb, &desc);
    desc.Usage = D3D11_USAGE_STAGING;
    desc.BindFlags = 0;
    desc.CPUAccessFlags = D3D11_CPU_ACCESS_READ;
    desc.MiscFlags = 0;
    ID3D11Texture2D* staging = NULL;
    if (SUCCEEDED(ID3D11Device_CreateTexture2D(s_d3d11.device, &desc, NULL, &staging))) {
        ID3D11DeviceContext_CopyResource(s_d3d11.context, (ID3D11Resource*)staging, (ID3D11Resource*)bb);
        D3D11_MAPPED_SUBRESOURCE mapped;
        if (SUCCEEDED(ID3D11DeviceContext_Map(s_d3d11.context, (ID3D11Resource*)staging, 0, D3D11_MAP_READ, 0, &mapped))) {
            unsigned long sr = 0, sg = 0, sb = 0, n = 0;
            for (UINT y = 0; y < desc.Height; y += 40) {
                const uint8_t* row = (const uint8_t*)mapped.pData + (size_t)y * mapped.RowPitch;
                for (UINT x = 0; x < desc.Width; x += 40) {
                    const uint8_t* p = row + (size_t)x * 4;
                    sr += p[0]; sg += p[1]; sb += p[2]; n++;
                }
            }
            if (n == 0) n = 1;
            *out_r = (unsigned)(sr / n); *out_g = (unsigned)(sg / n); *out_b = (unsigned)(sb / n);
            ID3D11DeviceContext_Unmap(s_d3d11.context, (ID3D11Resource*)staging, 0);
        }
        ID3D11Texture2D_Release(staging);
    }
    ID3D11Texture2D_Release(bb);
}

/* Replay the frame's queued GXCopyTex commands whose vertex mark is <= up_to_vertex.
 * Called from inside the batch loop of d3d11_present(), so each copy reads the frame as
 * the guest had drawn it at that point in its display list - which is what the hardware
 * does and what breaks the "copy the previous frame into the framebuffer" feedback loop
 * that turned the title MENU background into a flat colour (handover 5c.14/5c.15).
 * The render target must be unbound around the read; re-binding it afterwards does not
 * disturb the pixels already rendered into it. */
/* Which batch the copy being serviced is attached to (-1 = before any batch, 9999 = after
 * the last one). Only used by the TLS_EFB_CHAIN probe, so a copy can be placed in the
 * frame's draw stream instead of being printed in an unattributable block. */
int s_efb_copy_batch_ctx = -1;

static void d3d11_service_pending_copies(uint32_t* cursor, uint32_t up_to_vertex, int at_batch) {
    s_efb_copy_batch_ctx = at_batch;
    if (!cursor) return;
    /* The queue holds ONLY the copies that were not performed inline (the
     * `TLS_EFB_ORDER=staging` class, or everything under `TLS_DEFER_EFB_COPY=1`), so it is
     * always replayed from here. In the default mode nothing is queued and this is a
     * no-op, which is why the default picture is unchanged (handover 5c.46 AP-Q). */
    static int s_order = -1;
    if (s_order < 0) s_order = getenv("TLS_DRAW_ORDER") ? 1 : 0;
    uint32_t count = gx_pipeline_get_pending_copy_count();
    while (*cursor < count) {
        const GxPendingEfbCopy* c = gx_pipeline_get_pending_copy(*cursor);
        if (!c || c->vertex_mark > up_to_vertex) break;
        if (s_order) {
            printf("[CopyOrder] before batch=%d: copy #%u dst=0x%08X %ux%u src=(%u,%u)-(%u,%u) vmark=%u\n",
                   at_batch, *cursor, c->dst_guest, c->x1 - c->x0 + 1, c->y1 - c->y0 + 1,
                   c->x0, c->y0, c->x1, c->y1, c->vertex_mark);
            fflush(stdout);
        }
        ID3D11DeviceContext_OMSetRenderTargets(s_d3d11.context, 0, NULL, NULL);
        s_replaying_copy++;
        d3d11_efb_copy_to_guest(c->dst_guest, c->x0, c->y0, c->x1, c->y1, c->real_format,
                                c->half_scale, c->pitch, c->exec);
        s_replaying_copy--;
        ID3D11DeviceContext_OMSetRenderTargets(s_d3d11.context, 1, &s_d3d11.rtv, s_d3d11.dsv);
        /* TLS_COPY_PROBE=<frame>: for ONE frame, give every serviced copy an identity and its
         * own bytes, so "the same destination is written twice with different content" and
         * "the tail samples a copy of its own output" are measured instead of inferred
         * (5c.46 AP-AI: the composite tail pins the screen to white). The fingerprint is the
         * mean of up to 4096 bytes read back from the destination in GUEST memory after the
         * copy runs, so destination and content come from one line. Gated on the present
         * counter like the other per-batch probes; inertia unless set. */
        {
            extern int g_runner_current_frame;
            /* TLS_COPY_PROBE=<frame> | <start>-<end>. The range form exists because the white
             * screen (5c.46 AP-AI) is a *steady state*: a single frame shows the tail copying a
             * screen that is already white, which is circular. The first frame of the transition
             * is what names the cause, and it cannot be guessed - 3700 is still a normal frame
             * (mean 253.56, std 18.28) and 3800 is exactly 255.00/0.00. */
            static int s_cp_from = -2, s_cp_to = -2;
            if (s_cp_from == -2) {
                const char* e = getenv("TLS_COPY_PROBE");
                s_cp_from = s_cp_to = -1;
                if (e) {
                    int a = -1, b = -1;
                    if (sscanf(e, "%d-%d", &a, &b) >= 2 && a >= 0 && b >= a) {
                        s_cp_from = a; s_cp_to = b;
                    } else {
                        s_cp_from = s_cp_to = atoi(e);
                    }
                }
            }
            bool cp_hit = false;
            if (s_cp_from >= 0) {
                if (s_cp_to > s_cp_from)
                    cp_hit = g_runner_current_frame >= s_cp_from && g_runner_current_frame <= s_cp_to;
                else
                    cp_hit = g_runner_current_frame == s_cp_from;
            }
            if (cp_hit) {
                uint32_t w = c->x1 - c->x0 + 1, h = c->y1 - c->y0 + 1;
                uint32_t bytes = w * h * 4u;
                double sum = 0.0; uint32_t n = 0;
                {
                    const uint8_t* q = (const uint8_t*)host_resolve_gx_guest_addr(c->dst_guest);
                    if (q) {
                        uint32_t step = bytes > 4096u ? bytes / 4096u : 1u;
                        if (step < 1u) step = 1u;
                        for (uint32_t i = 0; i < bytes; i += step) { sum += q[i]; n++; }
                    }
                }
                printf("[CopyProbe] frame=%d at batch=%d copy#%u dst=0x%08X %ux%u fmt=%u vmark=%u bytes=%u mean=%.2f n=%u\n",
                       g_runner_current_frame, at_batch, *cursor, c->dst_guest, w, h,
                       c->real_format, c->vertex_mark, bytes, n ? (sum / (double)n) : -1.0, n);
                fflush(stdout);
            }
        }
        (*cursor)++;
    }
}

/* TLS_BATCH_DUMP_GUEST=<start>,<count>: dump the draw list for <count> consecutive GUEST
 * frames starting at <start>. The page half and the gameplay half alternate, and the frame
 * the sequence hands over on moves by tens of frames between runs, so a single frame number
 * cannot be trusted to land on the half being studied (handover 5c.46 Z). A short window
 * contains both halves and the page half is then picked out of the log by its own content
 * (the parchment draw / the batch and vertex counts), not by its position. */
static bool batch_dump_guest_hit(void) {
    static int s_from = -2, s_count = 0;
    extern int g_runner_current_frame;
    if (s_from == -2) {
        const char* e = getenv("TLS_BATCH_DUMP_GUEST");
        s_from = -1;
        if (e) {
            int a = -1, b = 0;
            if (sscanf(e, "%d,%d", &a, &b) >= 2 && a >= 0 && b > 0) {
                s_from = a;
                s_count = b;
            } else {
                printf("[BatchDump] TLS_BATCH_DUMP_GUEST='%s' not understood "
                       "(want <startframe>,<count>)\n", e);
                fflush(stdout);
            }
        }
    }
    if (s_from < 0) return false;
    return g_runner_current_frame >= s_from && g_runner_current_frame < s_from + s_count;
}

/* Guest frame on which TLS_PAGE_CAPTURE fired (-1 = never). replacements.c uses it to
 * dump the layout objects drawn around that frame at full detail, which is how the page's
 * element tree can be read without guessing a frame number (handover 5c.46 AA). */
int g_tls_page_capture_frame = -1;

/* ============================================================================================
 * P4 PUBLISH (handover 5c.46 AP-BQ): replace the back buffer with aurora's picture for THIS frame.
 *
 * Option (b) of 5c.47, the CPU round-trip, which --probe-copy proved end to end (AP-BO measured the
 * two paths byte-identical). aurora's 640x448 EFB readback is bilinearly scaled into a staging
 * texture in the BACK BUFFER'S OWN format and CopyResource'd in, so the existing
 * capture-before-Present screenshot - which reads the back buffer - hashes what aurora drew with no
 * change to that path at all. That is the whole point of doing it here rather than with a shader.
 *
 * WHY AFTER d3d11_capture_efb_snapshot(). That snapshot is the layer's copy source for its own
 * EFB-copy service, and the layer keeps drawing (it is the fallback for a failed readback and for
 * TLS_LAYER=1). Overwriting the back buffer after the snapshot leaves the layer's own machinery
 * untouched and keeps this change to one function plus two call sites.
 *
 * Returns 1 when aurora's picture replaced the frame, 0 when the layer's picture stands.
 * ============================================================================ */
static ID3D11Texture2D* s_aurora_stage;
static UINT s_aurora_stage_w, s_aurora_stage_h;
static DXGI_FORMAT s_aurora_stage_fmt;
static unsigned long s_aurora_blits, s_aurora_blit_fail;

static int aurora_blit_presented_frame(void) {
    uint32_t sw = 0, sh = 0;
    const uint8_t* src = tls_aurora_published(&sw, &sh);
    if (!src || sw == 0 || sh == 0) return 0;

    ID3D11Texture2D* back_buffer = NULL;
    if (FAILED(IDXGISwapChain_GetBuffer(s_d3d11.swap_chain, 0, &IID_ID3D11Texture2D, (void**)&back_buffer)))
        return 0;
    D3D11_TEXTURE2D_DESC desc;
    ID3D11Texture2D_GetDesc(back_buffer, &desc);

    if (!s_aurora_stage || s_aurora_stage_w != desc.Width || s_aurora_stage_h != desc.Height ||
        s_aurora_stage_fmt != desc.Format) {
        if (s_aurora_stage) { ID3D11Texture2D_Release(s_aurora_stage); s_aurora_stage = NULL; }
        D3D11_TEXTURE2D_DESC sd = desc;
        sd.Usage = D3D11_USAGE_STAGING;
        sd.BindFlags = 0;
        sd.CPUAccessFlags = D3D11_CPU_ACCESS_WRITE;
        sd.MiscFlags = 0;
        sd.MipLevels = 1;
        sd.ArraySize = 1;
        if (FAILED(ID3D11Device_CreateTexture2D(s_d3d11.device, &sd, NULL, &s_aurora_stage))) {
            ID3D11Texture2D_Release(back_buffer);
            return 0;
        }
        s_aurora_stage_w = desc.Width;
        s_aurora_stage_h = desc.Height;
        s_aurora_stage_fmt = desc.Format;
    }

    D3D11_MAPPED_SUBRESOURCE mapped;
    if (FAILED(ID3D11DeviceContext_Map(s_d3d11.context, (ID3D11Resource*)s_aurora_stage, 0,
                                      D3D11_MAP_WRITE, 0, &mapped))) {
        ID3D11Texture2D_Release(back_buffer);
        return 0;
    }

    /* Bilinear, and the swizzle is decided from the swap chain's actual format rather than assumed:
     * the screenshot path reads channels 0,1,2 as R,G,B, so a B8G8R8A8 back buffer would otherwise
     * hash a blue-red-swapped frame. */
    const int bgra = (desc.Format == DXGI_FORMAT_B8G8R8A8_UNORM ||
                      desc.Format == DXGI_FORMAT_B8G8R8A8_UNORM_SRGB);
    const float xr = (float)sw / (float)desc.Width;
    const float yr = (float)sh / (float)desc.Height;
    for (UINT y = 0; y < desc.Height; y++) {
        float fy = ((float)y + 0.5f) * yr - 0.5f;
        int y0 = (int)floorf(fy);
        float wy = fy - (float)y0;
        if (y0 < 0) { y0 = 0; wy = 0.0f; }
        int y1 = y0 + 1;
        if (y1 > (int)sh - 1) y1 = (int)sh - 1;
        const uint8_t* r0 = src + (size_t)y0 * sw * 4u;
        const uint8_t* r1 = src + (size_t)y1 * sw * 4u;
        uint8_t* out = (uint8_t*)mapped.pData + (size_t)y * mapped.RowPitch;
        for (UINT x = 0; x < desc.Width; x++) {
            float fx = ((float)x + 0.5f) * xr - 0.5f;
            int x0 = (int)floorf(fx);
            float wx = fx - (float)x0;
            if (x0 < 0) { x0 = 0; wx = 0.0f; }
            int x1 = x0 + 1;
            if (x1 > (int)sw - 1) x1 = (int)sw - 1;
            const uint8_t* p00 = r0 + (size_t)x0 * 4u;
            const uint8_t* p10 = r0 + (size_t)x1 * 4u;
            const uint8_t* p01 = r1 + (size_t)x0 * 4u;
            const uint8_t* p11 = r1 + (size_t)x1 * 4u;
            float c[3];
            for (int k = 0; k < 3; k++) {
                float top = (float)p00[k] + ((float)p10[k] - (float)p00[k]) * wx;
                float bot = (float)p01[k] + ((float)p11[k] - (float)p01[k]) * wx;
                c[k] = top + (bot - top) * wy;
            }
            uint8_t* o = out + (size_t)x * 4u;
            if (bgra) { o[0] = (uint8_t)(c[2] + 0.5f); o[1] = (uint8_t)(c[1] + 0.5f); o[2] = (uint8_t)(c[0] + 0.5f); }
            else      { o[0] = (uint8_t)(c[0] + 0.5f); o[1] = (uint8_t)(c[1] + 0.5f); o[2] = (uint8_t)(c[2] + 0.5f); }
            o[3] = 255;
        }
    }
    ID3D11DeviceContext_Unmap(s_d3d11.context, (ID3D11Resource*)s_aurora_stage, 0);
    ID3D11DeviceContext_CopyResource(s_d3d11.context, (ID3D11Resource*)back_buffer,
                                     (ID3D11Resource*)s_aurora_stage);
    ID3D11Texture2D_Release(back_buffer);

    s_aurora_blits++;
    if (s_aurora_blits == 1 || (s_aurora_blits % 500) == 0) {
        printf("[AuroraPublish] blitted %lu frame(s) into the %ux%u back buffer, %lu failure(s)\n",
               s_aurora_blits, desc.Width, desc.Height, s_aurora_blit_fail);
        fflush(stdout);
    }
    return 1;
}

bool d3d11_present(const uint8_t* yuyv_data, int fb_width, int fb_height) {
    if (!s_d3d11.device || !s_d3d11.swap_chain) return false;

    s_d3d11.frame_counter += s_flush_only ? 0 : 1;

    /* P4 PUBLISH (5c.46 AP-BQ), and this line's POSITION is the whole change: the aurora feed has
     * to run before the frame is drawn, captured and presented, or the picture is one guest frame
     * late - which on this scene shows the previous half (the guest alternates a geometry half and a
     * composite half, AP-BJ). A flush is not a frame: publishing it would consume half a frame's
     * bytes and leave the aurora feed accumulating nothing. */
    int aurora_published = 0;
    if (!s_flush_only) {
        static int s_publish = -1;
        if (s_publish < 0) s_publish = getenv("TLS_AURORA_PUBLISH") ? 1 : 0;
        if (s_publish) {
            aurora_published = tls_aurora_publish_frame();
        }
    }

    // Check if guest resolution changed
    if (fb_width != s_d3d11.fb_width || fb_height != s_d3d11.fb_height) {
        s_d3d11.fb_width = fb_width;
        s_d3d11.fb_height = fb_height;
        if (s_d3d11.fb_srv) ID3D11ShaderResourceView_Release(s_d3d11.fb_srv);
        if (s_d3d11.fb_texture) ID3D11Texture2D_Release(s_d3d11.fb_texture);

        D3D11_TEXTURE2D_DESC tex_desc = {0};
        tex_desc.Width = fb_width;
        tex_desc.Height = fb_height;
        tex_desc.MipLevels = 1;
        tex_desc.ArraySize = 1;
        tex_desc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
        tex_desc.SampleDesc.Count = 1;
        tex_desc.Usage = D3D11_USAGE_DYNAMIC;
        tex_desc.BindFlags = D3D11_BIND_SHADER_RESOURCE;
        tex_desc.CPUAccessFlags = D3D11_CPU_ACCESS_WRITE;
        ID3D11Device_CreateTexture2D(s_d3d11.device, &tex_desc, NULL, &s_d3d11.fb_texture);
        ID3D11Device_CreateShaderResourceView(s_d3d11.device, (ID3D11Resource*)s_d3d11.fb_texture, NULL, &s_d3d11.fb_srv);

        free(s_d3d11.rgba_staging);
        s_d3d11.rgba_staging = (uint32_t*)malloc(fb_width * fb_height * sizeof(uint32_t));
    }

    // Check for hardware GX geometry
    uint32_t gx_vtx_count = 0;
    const GxVertex* gx_vtx = gx_pipeline_get_vertices(&gx_vtx_count);

    // Only decode and upload software XFB texture when no hardware GX primitives are rendered
    if (gx_vtx_count == 0 && yuyv_data && s_d3d11.rgba_staging) {
        int total_pixels = fb_width * fb_height;
        const uint8_t* src = yuyv_data;
        uint32_t* dst = s_d3d11.rgba_staging;

        for (int i = 0; i < total_pixels; i += 2) {
            int y0 = src[0];
            int u  = src[1];
            int y1 = src[2];
            int v  = src[3];
            src += 4;
            if (y0 == 0 && u == 0 && y1 == 0 && v == 0) {
                dst[0] = 0xFF000000;
                dst[1] = 0xFF000000;
                dst += 2;
                continue;
            }

            int c0 = y0 - 16;
            int c1 = y1 - 16;
            int d  = u - 128;
            int e  = v - 128;

            uint8_t r0 = clamp_u8((298 * c0 + 409 * e + 128) >> 8);
            uint8_t g0 = clamp_u8((298 * c0 - 100 * d - 208 * e + 128) >> 8);
            uint8_t b0 = clamp_u8((298 * c0 + 516 * d + 128) >> 8);

            uint8_t r1 = clamp_u8((298 * c1 + 409 * e + 128) >> 8);
            uint8_t g1 = clamp_u8((298 * c1 - 100 * d - 208 * e + 128) >> 8);
            uint8_t b1 = clamp_u8((298 * c1 + 516 * d + 128) >> 8);

            dst[0] = (uint32_t)(r0 | (g0 << 8) | (b0 << 16) | (0xFF << 24));
            dst[1] = (uint32_t)(r1 | (g1 << 8) | (b1 << 16) | (0xFF << 24));
            dst += 2;
        }

        // Map and upload to dynamic GPU texture
        D3D11_MAPPED_SUBRESOURCE mapped;
        HRESULT hr = ID3D11DeviceContext_Map(s_d3d11.context, (ID3D11Resource*)s_d3d11.fb_texture, 0, D3D11_MAP_WRITE_DISCARD, 0, &mapped);
        if (SUCCEEDED(hr)) {
            const uint8_t* p_src = (const uint8_t*)s_d3d11.rgba_staging;
            uint8_t* p_dst = (uint8_t*)mapped.pData;
            int row_bytes = fb_width * 4;
            for (int y = 0; y < fb_height; y++) {
                memcpy(p_dst, p_src, row_bytes);
                p_src += row_bytes;
                p_dst += mapped.RowPitch;
            }
            ID3D11DeviceContext_Unmap(s_d3d11.context, (ID3D11Resource*)s_d3d11.fb_texture, 0);
        }
    }

    // Set Render Target and Hardware Depth-Stencil Buffer
    ID3D11DeviceContext_OMSetRenderTargets(s_d3d11.context, 1, &s_d3d11.rtv, s_d3d11.dsv);

    /* Clear the EFB to the colour the guest programmed (BP 0x4F/0x50 through
     * GXSetCopyClear), not to a hardcoded black: the pipeline already tracks it
     * (gx_pipeline_get_clear_color) and til now nothing consumed it, so any frame
     * whose guest clear was not black lost its background.
     * TLS_EFB_CLEAR_BLACK=1 restores the old behaviour for A/B. */
    FLOAT clear_color[4] = {0.0f, 0.0f, 0.0f, 1.0f};
    {
        static int s_force_black = -1;
        static int s_efb_alpha = -1;
        if (s_force_black < 0) s_force_black = getenv("TLS_EFB_CLEAR_BLACK") ? 1 : 0;
        if (s_efb_alpha < 0) s_efb_alpha = getenv("TLS_EFB_ALPHA") ? 1 : 0;
        if (!s_force_black) {
            gx_pipeline_get_clear_color(clear_color);
            /* The clear *alpha* was hardcoded to 1.0 ("depth/stencil clear alpha; the
             * guest clear alpha is not used"), which pins the EFB alpha at 1.0 for the
             * whole frame: every blended batch keeps it there (ONE/INV_SRCALPHA) and
             * every EFB copy the composite tail samples then carries a=255, so all four
             * `SRCALPHA/ONE` additive passes run at full strength (handover 5c.23).
             * GX clears the EFB alpha to the alpha in the BP 0x4F clear colour.
             * TLS_EFB_ALPHA=1 honours the guest value. */
            if (!s_efb_alpha) clear_color[3] = 1.0f;
        }
        s_clears_this_frame++;
        s_last_clear[0]=clear_color[0]; s_last_clear[1]=clear_color[1];
        s_last_clear[2]=clear_color[2]; s_last_clear[3]=clear_color[3];
        static int s_cc = 0;
        if (s_cc < 2) { s_cc++; printf("[EfbClear] clear = %.2f %.2f %.2f %.2f%s\n",
            clear_color[0], clear_color[1], clear_color[2], clear_color[3],
            s_force_black ? " (forced black)" : " (guest BP clear)"); fflush(stdout); }
    }
    /* The GX EFB is *not* cleared between frames: it keeps whatever the last frame left
     * in it unless the guest clears it itself (there is no "clear EFB" command in GX -
     * GXCopyTex's clear bit, the BP clear colour and fullscreen quads are how games do
     * it). Clearing every present therefore throws away content the guest may read: the
     * first three GXCopyTex commands of a titled MENU frame are issued at vertex mark 0,
     * i.e. before any drawing, and are a deliberate capture of the previous frame.
     * TLS_NO_FRAME_CLEAR=1 skips the colour clear (depth is always cleared) to A/B it. */
    static int s_no_clear = -1;
    if (s_no_clear < 0) s_no_clear = getenv("TLS_NO_FRAME_CLEAR") ? 1 : 0;
    /* A flush must not clear (see s_flush_only): the hardware EFB keeps the previous
     * frame and adds this frame's draws on top, which is what a mid-frame GXDrawDone
     * copy has to see. Depth is cleared either way - a flush is not a new frame. */
    if (!s_no_clear && !s_flush_only) {
        ID3D11DeviceContext_ClearRenderTargetView(s_d3d11.context, s_d3d11.rtv, clear_color);
    }
    if (s_d3d11.dsv) {
        ID3D11DeviceContext_ClearDepthStencilView(s_d3d11.context, s_d3d11.dsv, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);
    }

    // Calculate Aspect Ratio Preserving Viewport
    float vx = 0.0f, vy = 0.0f;
    float vw = (float)s_d3d11.win_width;
    float vh = (float)s_d3d11.win_height;

    if (s_d3d11.aspect_ratio != GFX_ASPECT_STRETCH && s_d3d11.win_height > 0) {
        float target_aspect = (s_d3d11.aspect_ratio == GFX_ASPECT_4_3) ? (4.0f / 3.0f) : (16.0f / 9.0f);
        float win_aspect = (float)s_d3d11.win_width / (float)s_d3d11.win_height;
        if (win_aspect > target_aspect) {
            vh = (float)s_d3d11.win_height;
            vw = (float)s_d3d11.win_height * target_aspect;
            vx = ((float)s_d3d11.win_width - vw) * 0.5f;
            vy = 0.0f;
        } else {
            vw = (float)s_d3d11.win_width;
            vh = (float)s_d3d11.win_width / target_aspect;
            vx = 0.0f;
            vy = ((float)s_d3d11.win_height - vh) * 0.5f;
        }
    }

    s_d3d11.vp_x = vx;
    s_d3d11.vp_y = vy;
    s_d3d11.vp_w = vw;
    s_d3d11.vp_h = vh;
    D3D11_VIEWPORT vp = {0};
    vp.TopLeftX = vx;
    vp.TopLeftY = vy;
    vp.Width = vw;
    vp.Height = vh;
    vp.MinDepth = 0.0f;
    vp.MaxDepth = 1.0f;
    ID3D11DeviceContext_RSSetViewports(s_d3d11.context, 1, &vp);

    static int s_d3d11_dump_count = 0;
    static DWORD s_last_f12_tick = 0;
    DWORD now_tick = GetTickCount();
    bool take_shot = false;
    /* Content-keyed capture: TLS_PAGE_CAPTURE=<nbatches>[,<minframe>] takes one screenshot
     * AND a full per-batch dump on the FIRST present whose draw list has exactly that many
     * batches, provided the guest frame is at least <minframe>. Frame-numbered captures are
     * unreliable here: the frame at which SetNextSequence('Game') fires moves by tens of
     * frames between runs (measured 1620/1647/1848 on an idle host, 886..1920 under load),
     * and everything the page draws shifts with it - so a fixed frame number is not a stable
     * reference (handover 5c.46 Z). Batch count is a property of the page half itself
     * (37 batches vs 54 for the gameplay half, 5c.37 D). */
    bool page_capture = false;
    s_d3d11_dump_count++;
    if ((GetAsyncKeyState(VK_F12) & 0x8000) && (now_tick - s_last_f12_tick > 500)) {
        s_last_f12_tick = now_tick;
        take_shot = true;
    }
    if (s_d3d11_dump_count == 100 || s_d3d11_dump_count == 200 || s_d3d11_dump_count == 350 || s_d3d11_dump_count == 360 || s_d3d11_dump_count == 400 || s_d3d11_dump_count == 450 || s_d3d11_dump_count == 500 || s_d3d11_dump_count == 550 || s_d3d11_dump_count == 600 || s_d3d11_dump_count == 650 || s_d3d11_dump_count == 700 || s_d3d11_dump_count == 900 || s_d3d11_dump_count == 1100 || s_d3d11_dump_count == 1200 || s_d3d11_dump_count == 1300 || s_d3d11_dump_count == 1400 || s_d3d11_dump_count == 1500 || s_d3d11_dump_count == 1600 || s_d3d11_dump_count == 1700 || s_d3d11_dump_count == 1800) {
        take_shot = true;
    }
    /* Dense capture for menu-state diagnosis: TLS_DUMP_EVERY=<n> dumps every n presents.
     * TLS_DUMP_EVERY_G=<n> is the same cadence in *guest frames*, which is what a
     * `TLS_INPUT_SCRIPT` frame number means - the two counters diverge sharply once the
     * title hands over to the game sequence (measured: ~2800 presents in 6000 frames),
     * so a present-count capture point silently misses the state it was aimed at. */
    {
        const char* dump_every = getenv("TLS_DUMP_EVERY");
        const char* dump_every_g = getenv("TLS_DUMP_EVERY_G");
        extern int g_runner_current_frame;
        if (dump_every) {
            int every = atoi(dump_every);
            if (every > 0 && (s_d3d11_dump_count % every) == 0) {
                take_shot = true;
            }
        }
        if (dump_every_g) {
            int every = atoi(dump_every_g);
            if (every > 0 && g_runner_current_frame > 0 &&
                (g_runner_current_frame % every) == 0) {
                take_shot = true;
            }
        }
    }
    /* Content-keyed capture: TLS_PAGE_CAPTURE=<nbatches>[,<minframe>]. Fires once, on the
     * first present whose draw list has exactly <nbatches> batches at guest frame
     * >= <minframe>, and forces both the screenshot and the full per-batch dump below. */
    {
        static int s_pc_kind = -2, s_pc_batches = -1, s_pc_tex = 0, s_pc_min = 0, s_pc_done = 0;
        extern int g_runner_current_frame;
        if (s_pc_kind == -2) {
            const char* e = getenv("TLS_PAGE_CAPTURE");
            s_pc_kind = 0;
            if (e) {
                unsigned tex = 0;
                int minframe = 0;
                if (sscanf(e, "tex:%x,%d", &tex, &minframe) >= 1 && tex != 0) {
                    s_pc_kind = 2;   /* capture the first present that BINDS this texture */
                    s_pc_tex = (int)tex;
                    s_pc_min = minframe;
                } else {
                    int a = -1, b = 0;
                    if (sscanf(e, "%d,%d", &a, &b) >= 1 && a >= 0) {
                        s_pc_kind = 1;   /* capture the first present with this many batches */
                        s_pc_batches = a;
                        s_pc_min = b;
                    } else {
                        printf("[PageCapture] TLS_PAGE_CAPTURE='%s' not understood "
                               "(want tex:0xADDR[,<minframe>] or <nbatches>[,<minframe>])\n", e);
                        fflush(stdout);
                    }
                }
            }
        }
        if (s_pc_kind > 0 && !s_pc_done && g_runner_current_frame >= s_pc_min) {
            uint32_t pc_count = 0;
            const GxDrawBatch* pc_batches = gx_pipeline_get_draw_batches(&pc_count);
            int fire = 0;
            if (s_pc_kind == 1) {
                fire = ((int)pc_count == s_pc_batches);
            } else {
                for (uint32_t i = 0; i < pc_count && !fire; i++) {
                    if (pc_batches[i].has_texture && pc_batches[i].vertex_count &&
                        (int)pc_batches[i].tex.guest_addr == s_pc_tex) fire = 1;
                }
            }
            if (fire) {
                s_pc_done = 1;
                page_capture = true;
                take_shot = true;
                g_tls_page_capture_frame = g_runner_current_frame;
                printf("[PageCapture] firing (%s) at guest frame %d (present %d, %u batches)\n",
                       s_pc_kind == 1 ? "batch count" : "texture", g_runner_current_frame,
                       s_d3d11_dump_count, pc_count);
                fflush(stdout);
            }
        }
    }
    /* TLS_PAGE_CAPTURE_ALL=<start>,<count>[,<step>]: one screenshot every <step>-th GUEST frame
     * (default 20) inside the window, but only on frames that actually bind the page's parchment
     * texture - i.e. on the page half of the alternating pair. This is what maps the content
     * subtree's timeline: with TLS_FORCE_LAYOUT_BIT set, the hidden elements come and go over the
     * page's life, and a single first-match capture cannot show that (5c.46 AC next step). */
    {
        static int s_pa_start = -2, s_pa_count = 0, s_pa_step = 20;
        extern int g_runner_current_frame;
        if (s_pa_start == -2) {
            const char* e = getenv("TLS_PAGE_CAPTURE_ALL");
            s_pa_start = -1;
            if (e) {
                int a = -1, b = 0, c = 20;
                if (sscanf(e, "%d,%d,%d", &a, &b, &c) >= 2 && a >= 0 && b > 0) {
                    s_pa_start = a;
                    s_pa_count = b;
                    s_pa_step = (c > 0) ? c : 20;
                } else {
                    printf("[PageTL] TLS_PAGE_CAPTURE_ALL='%s' not understood "
                           "(want <startframe>,<count>[,<step>])\n", e);
                    fflush(stdout);
                }
            }
        }
        if (s_pa_start >= 0 && g_runner_current_frame >= s_pa_start &&
            g_runner_current_frame < s_pa_start + s_pa_count &&
            ((g_runner_current_frame - s_pa_start) % s_pa_step) == 0) {
            uint32_t tl_count = 0;
            const GxDrawBatch* tl_batches = gx_pipeline_get_draw_batches(&tl_count);
            int has_page = 0;
            for (uint32_t i = 0; i < tl_count && !has_page; i++) {
                if (tl_batches[i].has_texture && tl_batches[i].vertex_count &&
                    tl_batches[i].tex.guest_addr == 0x921DEA60u) has_page = 1;
            }
            if (has_page) {
                take_shot = true;
                printf("[PageTL] firing at guest frame %d (present %d, %u batches)\n",
                       g_runner_current_frame, s_d3d11_dump_count, tl_count);
                fflush(stdout);
            }
        }
    }
    /* Explicit capture points: TLS_SHOT_FRAMES=1920,2160,2400. The list above is a
     * legacy fixed set; this lets a run grab exactly the frames being investigated
     * instead of editing hardcoded numbers. A value matches the present count *or*
     * the guest frame, so "dump frame 1700 of the input script" is unambiguous. */
    {
        static char s_shot_list[256];
        static int s_shot_loaded = 0;
        extern int g_runner_current_frame;
        if (!s_shot_loaded) {
            s_shot_loaded = 1;
            const char* frames = getenv("TLS_SHOT_FRAMES");
            if (frames) {
                strncpy(s_shot_list, frames, sizeof(s_shot_list) - 1);
            }
        }
        if (s_shot_list[0]) {
            char buf[256];
            strncpy(buf, s_shot_list, sizeof(buf) - 1);
            buf[sizeof(buf) - 1] = '\0';
            for (char* tok = strtok(buf, ","); tok; tok = strtok(NULL, ",")) {
                int want = atoi(tok);
                /* TLS_SHOT_GUEST=1 keys the capture on the GUEST frame only.
                 *
                 * The default matches either counter, which is fine when the two agree -
                 * but a diagnostic that changes what is rendered also changes the present
                 * count for a given guest frame, so a bisect at a fixed frame number can
                 * silently land on a different moment. Measured (handover 5c.43 F): a
                 * TLS_BATCH_CUTOFF run and a shader-bypass run both captured a frame whose
                 * SKIP-button box averaged 84.1 with 68.6% dark pixels, while the page
                 * itself averages 221.7 there - i.e. neither shot was the page at all.
                 * Every bisect after that used this flag. */
                static int s_shot_guest_only = -1;
                if (s_shot_guest_only < 0)
                    s_shot_guest_only = getenv("TLS_SHOT_GUEST") ? 1 : 0;
                bool hit = s_shot_guest_only
                               ? (want == g_runner_current_frame)
                               : (want == s_d3d11_dump_count || want == g_runner_current_frame);
                if (hit) {
                    take_shot = true;
                    break;
                }
            }
        }
    }

    // Do not stomp cleared backbuffer with empty XFB quad on native GX hardware titles
    #if 0
    if (gx_vtx_count == 0 && s_d3d11.fb_srv) {
        ID3D11DeviceContext_IASetPrimitiveTopology(s_d3d11.context, D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);
        ID3D11DeviceContext_VSSetShader(s_d3d11.context, s_d3d11.vs, NULL, 0);
        ID3D11DeviceContext_PSSetShader(s_d3d11.context, s_d3d11.ps, NULL, 0);
        ID3D11DeviceContext_PSSetShaderResources(s_d3d11.context, 0, 1, &s_d3d11.fb_srv);
        ID3D11DeviceContext_PSSetSamplers(s_d3d11.context, 0, 1, &s_d3d11.sampler_linear);
        ID3D11DeviceContext_Draw(s_d3d11.context, 3, 0);
    }
    #endif

    /* Copies are replayed in stream order as the batch list is drawn (see
     * d3d11_service_pending_copies). Frame-start copies (vertex_mark 0) and anything the
     * guest issued before its first draw are serviced here, i.e. against the clear. */
    uint32_t efb_copy_cursor = 0;
    d3d11_service_pending_copies(&efb_copy_cursor, 0, -1);

    // Draw GX decoded primitives if present
    if (gx_vtx && gx_vtx_count > 0 && s_d3d11.gx_vbo && s_d3d11.gx_vs && s_d3d11.gx_ps) {
        D3D11_MAPPED_SUBRESOURCE mapped_vbo;
        HRESULT map_hr = ID3D11DeviceContext_Map(s_d3d11.context, (ID3D11Resource*)s_d3d11.gx_vbo, 0, D3D11_MAP_WRITE_DISCARD, 0, &mapped_vbo);
        if (SUCCEEDED(map_hr)) {

            GxVertex* dst_vtx = (GxVertex*)mapped_vbo.pData;
            memcpy(dst_vtx, gx_vtx, gx_vtx_count * sizeof(GxVertex));
            ID3D11DeviceContext_Unmap(s_d3d11.context, (ID3D11Resource*)s_d3d11.gx_vbo, 0);

            uint32_t batch_count = 0;
            const GxDrawBatch* batches = gx_pipeline_get_draw_batches(&batch_count);

            UINT stride = sizeof(GxVertex);
            UINT offset = 0;
            ID3D11DeviceContext_IASetInputLayout(s_d3d11.context, s_d3d11.gx_input_layout);
            ID3D11DeviceContext_IASetVertexBuffers(s_d3d11.context, 0, 1, &s_d3d11.gx_vbo, &stride, &offset);
            ID3D11DeviceContext_IASetPrimitiveTopology(s_d3d11.context, D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);
            ID3D11DeviceContext_VSSetShader(s_d3d11.context, s_d3d11.gx_vs, NULL, 0);
            ID3D11DeviceContext_PSSetShader(s_d3d11.context, s_d3d11.gx_ps, NULL, 0);
            ID3D11DeviceContext_PSSetSamplers(s_d3d11.context, 0, 1, &s_d3d11.sampler_linear);

            if (s_d3d11.rs_cull_none) {
                ID3D11DeviceContext_RSSetState(s_d3d11.context, s_d3d11.rs_cull_none);
            }

            // Enable alpha blending for GX geometry
            if (s_d3d11.blend_state_alpha) {
                ID3D11DeviceContext_OMSetBlendState(s_d3d11.context, s_d3d11.blend_state_alpha, NULL, 0xFFFFFFFF);
            }

            if (batches && batch_count > 0) {
                if (take_shot) {
                    printf("[D3D11 Frame %d] Total Batches: %u, Total Vtx: %u\n", s_d3d11_dump_count, batch_count, gx_vtx_count);
                }
                /* Per-batch dump for visual defects: which batch covers which part of
                 * the frame, with its texture binding and blend/depth state. Used to
                 * find out whether a black or pink region is an untextured batch, a
                 * missing texture, or a blend/depth problem. TLS_BATCH_DUMP=<frame>,
                 * TLS_BATCH_DUMP_MAX=<count> (default 48). */
                {
                    static int s_dump_frame = -2, s_dump_max = 48;
                    if (s_dump_frame == -2) {
                        const char* f = getenv("TLS_BATCH_DUMP");
                        const char* m = getenv("TLS_BATCH_DUMP_MAX");
                        s_dump_frame = f ? atoi(f) : -1;
                        if (m) s_dump_max = atoi(m);
                    }
                    if ((s_dump_frame >= 0 && probe_frame_hits(s_dump_frame, (int)s_d3d11_dump_count)) ||
                        page_capture || batch_dump_guest_hit()) {
                        printf("[BatchDump] frame=%d batches=%u vtx=%u\n",
                               s_d3d11_dump_count, batch_count, gx_vtx_count);
                        uint32_t shown = 0;
                        for (uint32_t b = 0; b < batch_count && (int)shown < s_dump_max; b++) {
                            const GxDrawBatch* bd = &batches[b];
                            if (bd->vertex_count == 0) continue;
                            float minx = 1e9f, maxx = -1e9f, miny = 1e9f, maxy = -1e9f;
                            float minz = 1e9f, maxz = -1e9f;
                            /* v->z is CLIP-space z for perspective batches (transform_vertex leaves
                             * z = c22*z + c23 + w and w = -pz), so it must be divided by w before it
                             * is compared with the clip volume. Printing it raw once made "NDC z
                             * 13.3..22.9" look like a clip failure when it was not (5c.45 I). */
                            float nminx = 1e9f, nmaxx = -1e9f, nminy = 1e9f, nmaxy = -1e9f;
                            float nminz = 1e9f, nmaxz = -1e9f;
                            uint32_t outside = 0;
                            for (uint32_t vi = 0; vi < bd->vertex_count; vi++) {
                                const GxVertex* v = &gx_vtx[bd->vertex_offset + vi];
                                if (v->x < minx) minx = v->x;
                                if (v->x > maxx) maxx = v->x;
                                if (v->y < miny) miny = v->y;
                                if (v->y > maxy) maxy = v->y;
                                if (v->z < minz) minz = v->z;
                                if (v->z > maxz) maxz = v->z;
                                float w = (v->w != 0.0f) ? v->w : 1.0f;
                                float nx = v->x / w, ny = v->y / w, nz = v->z / w;
                                if (nx < nminx) nminx = nx;
                                if (nx > nmaxx) nmaxx = nx;
                                if (ny < nminy) nminy = ny;
                                if (ny > nmaxy) nmaxy = ny;
                                if (nz < nminz) nminz = nz;
                                if (nz > nmaxz) nmaxz = nz;
                                if (nx < -1.0f || nx > 1.0f || ny < -1.0f || ny > 1.0f || nz < -1.0f || nz > 1.0f)
                                    outside++;
                            }
                            printf("  b%u vtx=%u tex=%d addr=0x%08X %ux%u fmt=%u tlut=0x%08X "
                                   "blend=%d src=%u dst=%u sub=%d persp=%d pnm=%u zwrite=%d ztest=%d "
                                   "ndc=[%.2f..%.2f, %.2f..%.2f] z=[%.4f..%.4f] "
                                   "wNDC=[x %.2f..%.2f y %.2f..%.2f z %.2f..%.2f] outside=%u/%u "
                                   "scissor=[%u,%u..%u,%u]v%d\n",
                                   b, bd->vertex_count, bd->has_texture, bd->tex.guest_addr,
                                   bd->tex.width, bd->tex.height, bd->tex.format, bd->tex.tlut_addr,
                                   bd->blend_enable, bd->src_factor, bd->dst_factor, bd->subtract,
                                   bd->is_perspective, bd->pnm_idx, bd->depth_write_enable, bd->depth_test_enable,
                                   minx, maxx, miny, maxy, minz, maxz,
                                   nminx, nmaxx, nminy, nmaxy, nminz, nmaxz, outside, bd->vertex_count,
                                   bd->scissor[0], bd->scissor[1], bd->scissor[2], bd->scissor[3],
                                   bd->scissor_valid ? 1 : 0);
                            shown++;
                        }
                        fflush(stdout);
                    }
                }
                for (uint32_t b = 0; b < batch_count; b++) {
                    const GxDrawBatch* batch = &batches[b];
                    if (batch->vertex_count == 0) continue;

                    /* Every copy the guest issued before this batch's first vertex must
                     * see the frame without this batch: flush it now. */
                    d3d11_service_pending_copies(&efb_copy_cursor, batch->vertex_offset, (int)b);

                    /* Diagnostic bisect: TLS_BATCH_CUTOFF=<n> draws only the first n
                     * batches of a frame, so the contribution of the tail composite
                     * quads can be seen instead of argued about. */
                    {
                        static int s_cutoff = -2;
                        if (s_cutoff == -2) {
                            const char* c = getenv("TLS_BATCH_CUTOFF");
                            s_cutoff = c ? atoi(c) : -1;
                        }
                        if (s_cutoff >= 0 && (int)b >= s_cutoff) break;
                    }



                    if (take_shot || s_d3d11.frame_counter == 150 || s_d3d11.frame_counter == 200 || s_d3d11.frame_counter == 300) {
                        uint32_t vo = batch->vertex_offset;
                        float min_x = 1e9f, max_x = -1e9f, min_y = 1e9f, max_y = -1e9f;
                        for (uint32_t vi = 0; vi < batch->vertex_count; vi++) {
                            float x = gx_vtx[vo + vi].x;
                            float y = gx_vtx[vo + vi].y;
                            if (x < min_x) min_x = x;
                            if (x > max_x) max_x = x;
                            if (y < min_y) min_y = y;
                            if (y > max_y) max_y = y;
                        }
                        printf("   Batch %2u: voff=%4u vcnt=%4u tex=0x%08X %3ux%3u fmt=%2u blend=%d (s=%u d=%u) | X:[%5.2f, %5.2f] Y:[%5.2f, %5.2f] col0=0x%08X\n",
                               b, vo, batch->vertex_count, batch->tex.guest_addr,
                               batch->tex.width, batch->tex.height, batch->tex.format,
                               batch->blend_enable, batch->src_factor, batch->dst_factor,
                               min_x, max_x, min_y, max_y, gx_vtx[vo].color);
                        /* 5c.43 C: the Chapter-1 tutorial page's own textures are dumped in
                         * full on a shot frame. The page submits its parchment sheet
                         * (0x921DEA60) TWICE around the illustration plate (0x90D19B80) and the
                         * font atlas (0x90703AA0), and `col0` cannot distinguish the two sheet
                         * draws - the per-vertex colours and UVs can. */
                        if ((b == 0 || b == 1 || b == 2 || b == 7 || b == 17 || batch->tex.guest_addr == 0x904E5EE0 || batch->tex.guest_addr == 0x907427C0 || batch->tex.guest_addr == 0x81A1A1A0 ||
                             batch->tex.guest_addr == 0x921DEA60u || batch->tex.guest_addr == 0x90D19B80u ||
                             batch->tex.guest_addr == 0x90703AA0u) && batch->vertex_count >= 6) {
                            for (uint32_t vi = 0; vi < 6 && vi < batch->vertex_count; vi++) {
                                uint32_t vidx = vo + vi;
                                printf("      b%u v[%u]: pos=(%.3f, %.3f, %.3f) uv=(%.3f, %.3f) col=0x%08X\n",
                                       b, vi, gx_vtx[vidx].x, gx_vtx[vidx].y, gx_vtx[vidx].z,
                                       gx_vtx[vidx].u, gx_vtx[vidx].v, gx_vtx[vidx].color);
                            }
                        }
                    }

                    uint8_t src_factor = batch->src_factor;
                    uint8_t dst_factor = batch->dst_factor;
                    bool blend_enable = batch->blend_enable;

                    // Standard GX blending rules:
                    // - Additive blending (particles, glows): dst_factor == 1
                    // - Alpha blending (UI, transparent meshes): dst_factor == 5 or 7
                    // - Alpha-bearing 2D text and icons: formats 0 (I4), 1 (I8), 2 (IA4), 3 (IA8), 5 (RGB5A3)
                    // - When dst_factor == 0 and !blend_enable: batch is opaque (2D backgrounds, opaque 3D terrain)
                    //
                    // AP-AQ: these rules OVERRIDE the guest. GX's CMODE0 bit 0 is the blend
                    // enable, and when it is clear the hardware REPLACES (dst = src) whatever
                    // the factor fields say - Dolphin's BlendMode has `blend_enable` at bit 0
                    // and applies the factors only when it is set. Promoting `dst_factor == 1`
                    // to "blend on" therefore turns every guest REPLACE whose factor field
                    // happens to be ONE into `src*srcA + dst`. Measured on guest frame 3300
                    // (TLS_BATCH_PROBE, one run): batch b117 (0x003438, guest blend OFF,
                    // s=4 d=1) takes the frame (103,110,101) -> (188,200,187), and b118 takes
                    // it to pure (255,255,255) where a replace would have written the sampled
                    // texture's own (174,183,172). That is the first saturation of the
                    // composite tail, six vertices before the copies AP-AP's addendum blamed
                    // (handover 5c.46 AP-AQ). `TLS_NO_FORCE_BLEND=1` was the one-run A/B.
                    //
                    // AP-AR: PROMOTED - the guest's blend enable is now obeyed by DEFAULT, because
                    // forcing it is simply wrong against GX (and against every Dolphin reference
                    // frame of this scene). `TLS_FORCE_BLEND=1` restores the old promotion for a
                    // session that needs to re-measure the defect or reproduce a pre-AP-AR gate
                    // reference. TLS_NO_FORCE_BLEND is consequently a no-op that asks for the
                    // default. Measured on the gate's own frames (two independent runs each, 5c.46
                    // AP-AR): guest 2800 luma 33.50 -> 50.04, guest 3500 luma 253.63 -> 48.17 with
                    // `>250` 99.30 % -> 2.02 %.
                    static int s_force_blend = -1;
                    if (s_force_blend < 0) {
                        const char* fb = getenv("TLS_FORCE_BLEND");
                        s_force_blend = (fb && atoi(fb) != 0) ? 1 : 0;
                    }
                    if (s_force_blend) {
                        if (dst_factor == 1 || dst_factor == 5 || dst_factor == 7) {
                            blend_enable = true;
                        } else if (!batch->is_perspective && batch->has_texture && (batch->tex.format == 0 || batch->tex.format == 1 || batch->tex.format == 2 || batch->tex.format == 3 || batch->tex.format == 5)) {
                            blend_enable = true;
                            if (dst_factor == 0) {
                                src_factor = 4; // GX_BL_SRCA
                                dst_factor = 5; // GX_BL_INVSRCA
                            }
                        }
                    }

                    ID3D11BlendState* bs = get_or_create_blend_state(blend_enable, src_factor, dst_factor,
                                                                     batch->subtract, batch->blend_enable);
                    if (bs) {
                        ID3D11DeviceContext_OMSetBlendState(s_d3d11.context, bs, NULL, 0xFFFFFFFF);
                    }

                    /* GX scissor (BP 0x20/0x21). Before AP-AQ this shipping path applied NO scissor,
                     * and that is half of the AP-AI/AP-AP white-out: the guest's tail is a
                     * downscale/blur chain drawn into a 160x112 (6.25 %) or 80x56 (1.56 %) corner
                     * of the EFB under a scissor, and this backend drew every one of those quads
                     * across the whole 640x448 target. Measured on guest frame 3300 with the tail
                     * cut off (TLS_BATCH_CUTOFF=114) the frame is luma 91.59; with the tail and
                     * without the popup live (114 -> 122) the same frame is 255.00 with 100 % of
                     * pixels above luma 250; the full frame is 142.29. Aurora, clipping them,
                     * moves +0.8 % across the same eight draws.
                     *
                     * AP-AQ CORRECTION: until AP-AQ this block called RSSetScissorRects while the
                     * ONLY bound rasterizer state (rs_cull_none) had ScissorEnable = FALSE, and
                     * D3D11 ignores the scissor rectangles in that case - so the AP-AP addendum's
                     * "the scissor changes nothing, mean |d| 0.000" measured an inert switch, not
                     * the scissor. rs_scissor (ScissorEnable = TRUE) is bound here; the frame
                     * moves (b118 (255,255,255) -> (95,97,92) on an identical pre-tail frame).
                     *
                     * AP-AR: PROMOTED - applying the guest's rect is the DEFAULT. It changes every
                     * frame the guest scissor-limits, which is why the two gate references were
                     * re-recorded deliberately, twice, in AP-AR (guest 2800 luma 50.04, guest 3500
                     * luma 48.17 with `>250` 2.02 %). `TLS_NO_SCISSOR=1` restores the pre-AP-AR
                     * behaviour; combined with TLS_FORCE_BLEND=1 it reproduces the old build's
                     * picture, which is how the superseded gate references stay reachable. The
                     * rect is scaled from EFB pixels into the aspect-preserving viewport. */
                    static int s_no_scissor = -1;
                    if (s_no_scissor < 0) {
                        const char* ns = getenv("TLS_NO_SCISSOR");
                        s_no_scissor = (ns && atoi(ns) != 0) ? 1 : 0;
                    }
                    if (!s_no_scissor) {
                        D3D11_RECT sr;
                        if (batch->scissor_valid) {
                            const float sx = s_d3d11.vp_w / 640.0f;
                            const float sy = s_d3d11.vp_h / 448.0f;
                            sr.left = (LONG)(s_d3d11.vp_x + (float)batch->scissor[0] * sx + 0.5f);
                            sr.top = (LONG)(s_d3d11.vp_y + (float)batch->scissor[1] * sy + 0.5f);
                            sr.right = (LONG)(s_d3d11.vp_x + (float)(batch->scissor[2] + 1) * sx + 0.5f);
                            sr.bottom = (LONG)(s_d3d11.vp_y + (float)(batch->scissor[3] + 1) * sy + 0.5f);
                        } else {
                            sr.left = 0;
                            sr.top = 0;
                            sr.right = (LONG)s_d3d11.win_width;
                            sr.bottom = (LONG)s_d3d11.win_height;
                        }
                        ID3D11DeviceContext_RSSetState(s_d3d11.context, s_d3d11.rs_scissor);
                        ID3D11DeviceContext_RSSetScissorRects(s_d3d11.context, 1, &sr);
                        if (getenv("TLS_SCISSOR_LOG")) {
                            static int s_sca_log = 0;
                            if (s_sca_log < 200 && s_d3d11.frame_counter >= 3299) {
                                printf("[ScissorApply] f=%u b=%u valid=%d target=%ux%u vp=(%.1f,%.1f,%.1fx%.1f) "
                                       "rect=(%ld,%ld)-(%ld,%ld)\n",
                                       s_d3d11.frame_counter, b, (int)batch->scissor_valid,
                                       s_d3d11.win_width, s_d3d11.win_height,
                                       s_d3d11.vp_x, s_d3d11.vp_y, s_d3d11.vp_w, s_d3d11.vp_h,
                                       (long)sr.left, (long)sr.top, (long)sr.right, (long)sr.bottom);
                                fflush(stdout);
                                s_sca_log++;
                            }
                        }
                    }

                    if (batch->is_perspective) {
                        if (!batch->depth_test_enable) {
                            ID3D11DeviceContext_OMSetDepthStencilState(s_d3d11.context, s_d3d11.ds_state_ui, 0);
                        } else if (blend_enable || !batch->depth_write_enable || dst_factor == 1) {
                            // Transparent objects / particles: test depth (LESS_EQUAL), do NOT write depth
                            ID3D11DeviceContext_OMSetDepthStencilState(s_d3d11.context, s_d3d11.ds_state_3d_alpha, 0);
                        } else {
                            // Standard opaque 3D objects: test depth AND write depth
                            ID3D11DeviceContext_OMSetDepthStencilState(s_d3d11.context, s_d3d11.ds_state_3d_opaque, 0);
                        }
                    } else {
                        /* 2D UI: normally depth test off so UI renders cleanly on top of the
                         * 3D scene. The EFB-copy composite quads, however, declare ztest=1
                         * themselves, and on hardware they really are depth tested against
                         * the scene that was drawn before them - which is one candidate for
                         * why hardware's additive passes add only a few units while the
                         * host's add the whole copied frame (handover 5c.22). Honouring the
                         * guest z-mode here was tried in 5c.15 while the copy model was
                         * still stale, so the result then said nothing; TLS_COMPOSITE_ZTEST=1
                         * re-tests it now that copies are in stream order. */
                        static int s_comp_ztest = -1;
                        if (s_comp_ztest < 0) s_comp_ztest = getenv("TLS_COMPOSITE_ZTEST") ? 1 : 0;
                        if (s_comp_ztest && batch->depth_test_enable) {
                            ID3D11DeviceContext_OMSetDepthStencilState(s_d3d11.context, s_d3d11.ds_state_3d_alpha, 0);
                        } else {
                            ID3D11DeviceContext_OMSetDepthStencilState(s_d3d11.context, s_d3d11.ds_state_ui, 0);
                        }
                    }

                    ID3D11ShaderResourceView* srv = s_d3d11.gx_tex_white_srv;
                    if (batch->has_texture && batch->tex.guest_addr != 0) {
                        srv = get_or_upload_gx_texture(&batch->tex);
                        if (!srv) {
                            // A batch that names a texture but gets the 1x1 white fallback draws
                            // as a solid white quad - the stray white rectangle over the title
                            // screen. Name every distinct address that fails so the cause
                            // (unstreamed data, unknown format, zero-filled upload) is visible.
                            if (getenv("TLS_TEX_FAIL_PROBE")) {
                                static uint32_t s_fail_addrs[16];
                                static uint32_t s_fail_count = 0;
                                uint32_t i = 0;
                                while (i < s_fail_count && s_fail_addrs[i] != batch->tex.guest_addr) i++;
                                if (i == s_fail_count && s_fail_count < 16) {
                                    s_fail_addrs[s_fail_count++] = batch->tex.guest_addr;
                                    printf("[GFX] White fallback: batch %u tex=0x%08X %ux%u fmt=%u persp=%d blend=%d d=%u\n",
                                           b, batch->tex.guest_addr, batch->tex.width, batch->tex.height,
                                           batch->tex.format, batch->is_perspective, batch->blend_enable,
                                           batch->dst_factor);
                                    fflush(stdout);
                                }
                            }
                            srv = s_d3d11.gx_tex_white_srv;
                        }
                        if ((batch->tex.wrap_s == 1 || batch->tex.wrap_t == 1) && s_d3d11.sampler_wrap) {
                            ID3D11DeviceContext_PSSetSamplers(s_d3d11.context, 0, 1, &s_d3d11.sampler_wrap);
                        } else {
                            ID3D11DeviceContext_PSSetSamplers(s_d3d11.context, 0, 1, &s_d3d11.sampler_linear);
                        }
                        // Name the stray all-white rectangle that appears over the title screen.
                        // 0x9086A120 decodes to a uniform 1024x512 opaque white CMPR texture; if it
                        // is drawn as a 2D quad its placement/blend is what needs fixing.
                        if (batch->tex.guest_addr == 0x9086A120u) {
                            static int s_white_quad_logs = 0;
                            if (s_white_quad_logs < 6) {
                                s_white_quad_logs++;
                                float mnx = 1e9f, mxx = -1e9f, mny = 1e9f, mxy = -1e9f;
                                uint32_t vo = batch->vertex_offset;
                                for (uint32_t vi = 0; vi < batch->vertex_count && vi < 64; vi++) {
                                    float x = gx_vtx[vo + vi].x, y = gx_vtx[vo + vi].y;
                                    if (x < mnx) mnx = x; if (x > mxx) mxx = x;
                                    if (y < mny) mny = y; if (y > mxy) mxy = y;
                                }
                                printf("[GFX] white 1024x512 quad: batch=%u verts=%u persp=%d blend=%d "
                                       "s=%u d=%u bounds=(%.2f,%.2f)-(%.2f,%.2f) uv0=(%.3f,%.3f) col0=0x%08X\n",
                                       b, batch->vertex_count, batch->is_perspective, batch->blend_enable,
                                       batch->src_factor, batch->dst_factor, mnx, mny, mxx, mxy,
                                       gx_vtx[vo].u, gx_vtx[vo].v, gx_vtx[vo].color);
                                fflush(stdout);
                            }
                        }
                    } else {
                        ID3D11DeviceContext_PSSetSamplers(s_d3d11.context, 0, 1, &s_d3d11.sampler_linear);
                    }
                    // Skip unpopulated EFB copy fullscreen quads that would wipe the rendered 3D scene to black
                    if (!batch->is_perspective && batch->has_texture && s_last_tex_all_zero && dst_factor == 0 && batch->vertex_count >= 6) {
                        uint32_t vo = batch->vertex_offset;
                        float min_x = gx_vtx[vo].x, max_x = min_x, min_y = gx_vtx[vo].y, max_y = min_y;
                        for (uint32_t vi = 1; vi < 6 && vi < batch->vertex_count; vi++) {
                            float x = gx_vtx[vo + vi].x;
                            float y = gx_vtx[vo + vi].y;
                            if (x < min_x) min_x = x;
                            if (x > max_x) max_x = x;
                            if (y < min_y) min_y = y;
                            if (y > max_y) max_y = y;
                        }
                        if (min_x <= -0.95f && max_x >= 0.95f && min_y <= -0.95f && max_y >= 0.95f) {
                            continue;
                        }
                    }

                    /* TLS_BATCH_COLOR_PROBE=<present frame>: one compact line per batch with
                     * everything that decides whether a quad is visible - texture, blend
                     * factors, TEV stage-0 words, alpha test, the raster (vertex) colour and
                     * the UV range. Added for 5c.46 AP-M: the page's b37/b38 sample the SAME
                     * 64x64 ui_base_white texture as the SKIP plate (b48+) yet render opaque
                     * black while the plate renders white, so the difference is one of these
                     * fields and printing all of them for every batch makes it a diff. */
                    {
                        static int s_col_probe_f = -2;
                        if (s_col_probe_f == -2) {
                            const char* e = getenv("TLS_BATCH_COLOR_PROBE");
                            s_col_probe_f = e ? atoi(e) : -1;
                        }
                        if (s_col_probe_f >= 0 && probe_frame_hits(s_col_probe_f, (int)s_d3d11_dump_count)) {
                            const GxTevState* cst_st = gx_pipeline_get_tev_state(batch->tev_state);
                            uint32_t vo = batch->vertex_offset;
                            float umin = 1e9f, umax = -1e9f, vmin = 1e9f, vmax = -1e9f;
                            uint32_t c0 = 0, c1 = 0;
                            for (uint32_t vi = 0; vi < batch->vertex_count; vi++) {
                                const GxVertex* v = &gx_vtx[vo + vi];
                                if (v->u < umin) umin = v->u;
                                if (v->u > umax) umax = v->u;
                                if (v->v < vmin) vmin = v->v;
                                if (v->v > vmax) vmax = v->v;
                                if (vi == 0) c0 = v->color;
                                else if (v->color != c0 && !c1) c1 = v->color;
                            }
                            printf("[BatchCol] b%u tex=0x%08X %ux%u fmt=%u blend=%d src=%u dst=%u sub=%d "
                                   "at=0x%08X st=%u tev0col=0x%08X tev0alp=0x%08X "
                                   "ras=0x%08X ras2=0x%08X uv=[%.3f..%.3f, %.3f..%.3f] verts=%u "
                                   "texmapmask=0x%02X t0=0x%08X t1=0x%08X t2=0x%08X has1=%d tex1=0x%08X "
                                   "st0en=%u st0map=%u st0coord=%u st1en=%u st1map=%u st1coord=%u "
                                   "st1col=0x%08X st1alp=0x%08X tex1fmt=%u tex1wh=%ux%u\n",
                                   b, batch->tex.guest_addr, batch->tex.width, batch->tex.height,
                                   batch->tex.format, batch->blend_enable, batch->src_factor,
                                   batch->dst_factor, batch->subtract, batch->alpha_ref0,
                                   cst_st ? cst_st->num_stages : 0,
                                   cst_st ? cst_st->combiner_color[0] : 0,
                                   cst_st ? cst_st->combiner_alpha[0] : 0,
                                   c0, c1, umin, umax, vmin, vmax, batch->vertex_count,
                                   batch->tev_texmap_mask,
                                   batch->tev_texmap[0].guest_addr,
                                   batch->tev_texmap[1].guest_addr,
                                   batch->tev_texmap[2].guest_addr,
                                   (int)batch->has_texture1,
                                   batch->has_texture1 ? batch->tex1.guest_addr : 0u,
                                   cst_st ? cst_st->tex_enable[0] : 0,
                                   cst_st ? cst_st->texmap[0] : 0,
                                   cst_st ? cst_st->texcoord[0] : 0,
                                   cst_st ? cst_st->tex_enable[1] : 0,
                                   cst_st ? cst_st->texmap[1] : 0,
                                   cst_st ? cst_st->texcoord[1] : 0,
                                   cst_st ? cst_st->combiner_color[1] : 0,
                                   cst_st ? cst_st->combiner_alpha[1] : 0,
                                   batch->has_texture1 ? batch->tex1.format : 0u,
                                   batch->has_texture1 ? batch->tex1.width : 0u,
                                   batch->has_texture1 ? batch->tex1.height : 0u);
                            fflush(stdout);
                        }
                    }

                    /* GX colour-combiner argument 4 is TEXC. A stage that names TEXC in no argument outputs the
     * rasteriser colour unchanged, with the texture contributing only through the alpha
     * combiner - that is how the game's glyph atlases are drawn (`ZERO ONE ras.rgb ZERO`,
     * 5c.43 D). Multiplying such a batch by the texture's RGB hides the glyphs, which is what
     * made the page's title and body text invisible (5c.46 K), so those batches use the
     * dedicced shader. */
    bool flat_raster = false;
    if (blend_enable) {
        static int s_flat = -1;
        /* OFF by default: measured to REMOVE the SKIP button's letters (it draws from the same
         * 0x9076E5E0 atlas and its glyphs come from the texture RGB, not the raster colour), so
         * the flat-raster theory is wrong for this atlas. Kept behind TLS_FLAT_GLYPHS=1 so the
         * experiment is reproducible (handover 5c.46 L). */
        if (s_flat < 0) s_flat = getenv("TLS_FLAT_GLYPHS") ? 1 : 0;
        /* Restrict to the TWO glyph atlases measured on the page: 0x90703AA0 draws the title
         * (b28, 19 glyphs) and 0x9076E5E0 the body text (b34, 20 glyphs) - see 5c.46 K. A general
         * "colour combiner names no TEXC" rule was tried first and caught the parchment sheet
         * too, turning the whole page white, so the condition is the measured one. */
        uint32_t tex_addr = batch->tex.guest_addr;
        flat_raster = (s_flat != 0) &&
                      (tex_addr == 0x90703AA0u || tex_addr == 0x9076E5E0u);
    }
    ID3D11PixelShader* ps = flat_raster ? s_d3d11.gx_ps_alpha_flat
                                        : (blend_enable ? s_d3d11.gx_ps_alpha : s_d3d11.gx_ps_opaque);
                    bool use_tev_path = s_d3d11.tev_enabled;
                    /* Two-texture batches whose STAGES SAMPLE THE SECOND MAP go through the
                     * TEV shader by default.
                     *
                     * Measured (5c.46 AP-N): the page's two remaining art defects are batches
                     * that set texmap0 = ui_base_white (a white plate) and texmap1 = the actual
                     * art - tutorial_dc01.texture (the crown crest) and tt001_10_ch02.texture
                     * (moon/wave motif) - with two TEV stages (st0 map 0, st1 map 1). PSAlpha
                     * can only sample ONE texture, so it painted the white plate tinted by the
                     * batch's near-black raster colour (ras=0xFF00001E): an opaque dark
                     * rectangle exactly where the reference draws the crest. A single-texture
                     * shader cannot express these batches at all, so they are the one class that
                     * must take the TEV path. With the swap tables implemented (tex.a reading
                     * the mask texture's red channel) they now render as the reference does:
                     * dark ink on parchment, and the motif instead of the band.
                     *
                     * The test is "a stage names a texmap other than 0", not merely
                     * `has_texture1`: the handler binds a second unit whenever the guest leaves
                     * one configured, and routing those batches through the TEV shader moved the
                     * Chapter-1 invariant frame (5c.46 AP-N: frame 3500 became 22C32C4E... with
                     * every has_texture1 batch on the TEV path).
                     *
                     * WIDENED TO 3D (handover 5c.46 AP-O). This used to require
                     * `!batch->is_perspective`, i.e. 2D/UI batches only, because putting the
                     * cave's 3D batches on PSTev turned its rock walls into smeared stripes.
                     * Measured, that was ONE defect in this host and not a PSTev limitation:
                     * the TEV path bound the CLAMP sampler for every stage while GX's wrap
                     * mode for those rock textures is REPEAT, so every coordinate outside
                     * [0,1) stretched a border texel across the surface. With the per-map
                     * wrap sampler in place the artifact is gone (docs/evidence/
                     * cmp_f3500_smear_5c46apo.png: clamp left, wrap right).
                     *
                     * What the widening changes, measured at frame 3500: the big wall
                     * batches have two-stage chains (ras, then tex*ras) and come out
                     * identical; the water/glow batches have up to EIGHT stages, of which the
                     * legacy path could only evaluate the first two - the dropped stages
                     * blend in a second texture by prev.a, multiply by a dark 512x512 map at
                     * scale 2 and ADD a 256x1 gradient ramp times an EFB copy. That is why
                     * the legacy water is a blown-out pale sheet (region mean (63,62,54)) and
                     * the widened one is a dark reflective surface (24,25,24) - the reference
                     * (dolphin_ref_run3_f5000_gameplay.png) is dark water, not a white sheet.
                     * Frame 3500 therefore moves to a re-recorded hash; see the dossier.
                     * TLS_TEV_MULTI=0 restores the old single-texture path for A/B runs. */
                    if (!use_tev_path && s_d3d11.gx_ps_tev) {
                        static int s_multi = -1;
                        if (s_multi < 0) {
                            const char* e = getenv("TLS_TEV_MULTI");
                            s_multi = (e && e[0] == '0' && e[1] == '\0') ? 0 : 1;
                        }
                        bool second_map = false;
                        if (s_multi != 0 && batch->has_texture1) {
                            const GxTevState* st = gx_pipeline_get_tev_state(batch->tev_state);
                            for (uint32_t s = 0; st && s < st->num_stages && s < 16; s++) {
                                if (st->tex_enable[s] && (st->texmap[s] & 7) != 0) second_map = true;
                            }
                        }
                        use_tev_path = second_map;
                        /* TLS_TEV_FORCE_STAGES=<n>: route a batch through PSTev when its TEV
                         * chain has at least <n> stages, even if every stage names texmap 0.
                         *
                         * The test above only catches "a second texture is named", so a chain
                         * that stays on one texture but does its work through konst/prev/scale
                         * - the shape of a bloom or fade composite - is still handed to the
                         * legacy single-texture shader, which can express only the first two
                         * stages. That is the documented cause of the blown-out pale water
                         * ("the dropped stages carry the SCALE", comment above). The Chapter-1
                         * white screen (5c.46 AP-AI) is nine full-screen EFB-copy quads whose
                         * additive blend saturates, so this switch tests the same hypothesis on
                         * them: if forcing PSTev turns the white into a picture, the tail's
                         * scaling lives in stages the legacy path drops. Inert unless set, and
                         * never a default: it re-routes every 3+ stage batch in the game and so
                         * moves the invariant frame. */
                        if (!use_tev_path) {
                            static int s_force_stages = -2;
                            if (s_force_stages == -2) {
                                const char* e = getenv("TLS_TEV_FORCE_STAGES");
                                s_force_stages = e ? atoi(e) : 0;
                            }
                            if (s_force_stages > 0 && s_multi != 0) {
                                const GxTevState* st = gx_pipeline_get_tev_state(batch->tev_state);
                                if (st && (int)st->num_stages >= s_force_stages)
                                    use_tev_path = true;
                            }
                        }
                    }
                    if (use_tev_path && s_d3d11.gx_ps_tev) {
                        /* GX TEV: evaluate the batch's real combiner stages. All eight
                         * texmap slots are bound (white where the batch does not use
                         * them) because the stages pick the texture, not the batch. */
                        const GxTevState* tev_st = gx_pipeline_get_tev_state(batch->tev_state);
                        bool need_compare = false;
                        GxTevConstants* cst = NULL;
                        D3D11_MAPPED_SUBRESOURCE mapped_cb;
                        if (SUCCEEDED(ID3D11DeviceContext_Map(s_d3d11.context,
                                (ID3D11Resource*)s_d3d11.gx_tev_cb, 0, D3D11_MAP_WRITE_DISCARD,
                                0, &mapped_cb))) {
                            cst = (GxTevConstants*)mapped_cb.pData;
                            gx_tev_fill_constants(cst, tev_st, &need_compare);
                            gx_tev_fill_dims(cst, batch);
                            /* TLS_TEV_DUMP_BATCH=<batch index>[,<present frame>]: print exactly
                             * what the TEV shader is handed for that batch, so its arithmetic can
                             * be evaluated offline instead of inferred from its output. Added for
                             * 5c.43 G: b28 (I4 atlas) renders glyphs under TEV and b34 (IA4 atlas)
                             * draws nothing, with identical combiner words. */
                            {
                                static int s_dump_b = -2, s_dump_f = -1;
                                if (s_dump_b == -2) {
                                    const char* e = getenv("TLS_TEV_DUMP_BATCH");
                                    s_dump_b = -1;
                                    if (e && *e) {
                                        s_dump_b = atoi(e);
                                        const char* comma = strchr(e, ',');
                                        if (comma) s_dump_f = atoi(comma + 1);
                                    }
                                }
                                if (s_dump_b >= 0 && (int)b == s_dump_b &&
                                    (s_dump_f < 0 || s_dump_f == (int)s_d3d11_dump_count)) {
                                    uint32_t col = tev_st ? tev_st->combiner_color[0] : 0;
                                    uint32_t alp = tev_st ? tev_st->combiner_alpha[0] : 0;
                                    printf("[TevBatch] frame=%d b%u tex=0x%08X fmt=%u %ux%u "
                                           "stages=%u col0=0x%08X alp0=0x%08X alphaTest=0x%08X "
                                           "texenable=%u map=%u coord=%u ras=0x%08X\n",
                                           s_d3d11_dump_count, b, batch->tex.guest_addr,
                                           batch->tex.format, batch->tex.width, batch->tex.height,
                                           tev_st ? tev_st->num_stages : 0, col, alp,
                                           cst->alpha_test, tev_st ? tev_st->tex_enable[0] : 0,
                                           tev_st ? tev_st->texmap[0] : 0,
                                           tev_st ? tev_st->texcoord[0] : 0,
                                           gx_vtx[batch->vertex_offset].color);
                                    printf("[TevTexmap] b%u mask=0x%02X t0=0x%08X t1=0x%08X t2=0x%08X has1=%d tex1=0x%08X\n",
                                           b, batch->tev_texmap_mask,
                                           batch->tev_texmap[0].guest_addr, batch->tev_texmap[1].guest_addr,
                                           batch->tev_texmap[2].guest_addr,
                                           (int)batch->has_texture1,
                                           batch->has_texture1 ? batch->tex1.guest_addr : 0u);
                                    fflush(stdout);
                                    /* Every stage, not just 0: the page's b30 differs from b26 ONLY
                                     * in having a second stage (both share stage-0 words), and that
                                     * stage is what makes it a wipe instead of a covering sheet
                                     * (handover 5c.46 F). */
                                    if (tev_st) {
                                        for (uint32_t st = 0; st < tev_st->num_stages && st < 16; st++) {
                                            printf("[TevStage]  b%u stage=%u col=0x%08X alp=0x%08X "
                                                   "texenable=%u texmap=%u texcoord=%u\n",
                                                   b, st, tev_st->combiner_color[st],
                                                   tev_st->combiner_alpha[st], tev_st->tex_enable[st],
                                                   tev_st->texmap[st], tev_st->texcoord[st]);
                                        }
                                        fflush(stdout);
                                    }
                                    fflush(stdout);
                                }
                            }
                            /* Which UV each stage samples (handover 5c.20) and, with
                             * TLS_XF_TEXGEN=1, the generated coordinates 2..7. Both live
                             * in gx_tev_fill_texgen so the stage and indirect selections
                             * are decided in one place (5c.46 AP-P). */
                            gx_tev_fill_texgen(cst, batch, tev_st);
                            /* TLS_TEV_UNIFORM=<batch>[,<frame>]: print the UNIFORM PACKET the
                             * pixel shader receives - the filled `GxTevConstants` - not the
                             * snapshot decode `TLS_TEV_PROBE` prints. The two are different
                             * objects: the probe reads `GxTevState`, the shader reads this
                             * cbuffer, and a packing/mirror bug between them is invisible to the
                             * probe (handover 5c.46 AP-AS item 7 named this as the last cheap
                             * discriminator for the red rock). The vertex colours are printed
                             * beside it because `ras` is the one shader input no probe has ever
                             * printed per batch: the batch probes print `col0=` (vertex 0 only)
                             * and the TEV probe prints the snapshot. Fixed 8.8.8.8 packing
                             * (`pack_rgba`, gx_pipeline.c:147) so the shader's (r,g,b,a) is
                             * exactly the printed tuple. */
                            {
                                static int s_unif_b = -2, s_unif_f = -1;
                                if (s_unif_b == -2) {
                                    const char* e = getenv("TLS_TEV_UNIFORM");
                                    s_unif_b = -1;
                                    if (e && *e) {
                                        s_unif_b = atoi(e);
                                        const char* comma = strchr(e, ',');
                                        if (comma) s_unif_f = atoi(comma + 1);
                                    }
                                }
                                if (cst && s_unif_b >= 0 && (int)b == s_unif_b &&
                                    (s_unif_f < 0 || probe_frame_hits(s_unif_f, (int)s_d3d11_dump_count))) {
                                    printf("[TevUniform] frame=%d b%u vcnt=%u voff=%u num_stages=%u "
                                           "ind_num=%u ind_used=%u tgneed=0x%X alpha_test=0x%08X\n",
                                           s_d3d11_dump_count, b, batch->vertex_count,
                                           batch->vertex_offset, cst->num_stages, cst->ind_num,
                                           cst->ind_used, cst->tgneed, cst->alpha_test);
                                    for (uint32_t ui = 0; ui < cst->num_stages && ui < 16; ui++) {
                                        printf("[TevUniform]  st%u col=0x%08X alp=0x%08X map=%u "
                                               "coord=%u en=%u uvsrc=%u raschan=%u kc=%u ka=%u "
                                               "tswap=%u%u%u%u rswap=%u%u%u%u\n",
                                               ui, cst->color[ui][0], cst->color[ui][1],
                                               cst->order[ui][0], cst->order[ui][1],
                                               cst->order[ui][2], cst->order[ui][3],
                                               cst->raschan[ui][0], cst->ksel[ui][0] & 0x1Fu,
                                               cst->ksel[ui][1] & 0x1Fu,
                                               cst->tswap[ui][0], cst->tswap[ui][1],
                                               cst->tswap[ui][2], cst->tswap[ui][3],
                                               cst->rswap[ui][0], cst->rswap[ui][1],
                                               cst->rswap[ui][2], cst->rswap[ui][3]);
                                    }
                                    for (int ui = 0; ui < 4; ui++) {
                                        printf("[TevUniform]  K%d=(%.4f %.4f %.4f %.4f) "
                                               "C%d=(%.4f %.4f %.4f %.4f)\n", ui,
                                               cst->kreg[ui][0], cst->kreg[ui][1],
                                               cst->kreg[ui][2], cst->kreg[ui][3], ui,
                                               cst->creg[ui][0], cst->creg[ui][1],
                                               cst->creg[ui][2], cst->creg[ui][3]);
                                    }
                                    {
                                        uint32_t n = batch->vertex_count;
                                        uint32_t probes[3] = { batch->vertex_offset,
                                                               batch->vertex_offset + n / 2,
                                                               batch->vertex_offset + n - 1 };
                                        for (int pi = 0; pi < 3; pi++) {
                                            uint32_t c = gx_vtx[probes[pi]].color;
                                            printf("[TevUniform]  vtx[%u] color=0x%08X "
                                                   "rgba=(%u,%u,%u,%u) uv=(%.4f %.4f)\n",
                                                   probes[pi] - batch->vertex_offset, c,
                                                   c & 0xFF, (c >> 8) & 0xFF, (c >> 16) & 0xFF,
                                                   (c >> 24) & 0xFF, gx_vtx[probes[pi]].u,
                                                   gx_vtx[probes[pi]].v);
                                        }
                                    }
                                    for (int m = 0; m < 8; m++) {
                                        if (!(batch->tev_texmap_mask & (1u << m))) continue;
                                        printf("[TevUniform]  map%d=0x%08X %ux%u fmt=%u wrap=%u/%u "
                                               "uvsrc(dim s,t)=%d,%d\n", m,
                                               batch->tev_texmap[m].guest_addr,
                                               batch->tev_texmap[m].width,
                                               batch->tev_texmap[m].height,
                                               batch->tev_texmap[m].format,
                                               batch->tev_texmap[m].wrap_s,
                                               batch->tev_texmap[m].wrap_t,
                                               cst->dim[m][2], cst->dim[m][3]);
                                    }
                                    fflush(stdout);
                                }
                            }
                        }
                        ID3D11ShaderResourceView* srvs[8];
                        for (int m = 0; m < 8; m++) {
                            srvs[m] = s_d3d11.gx_tex_white_srv;
                            if (batch->tev_texmap_mask & (1u << m)) {
                                ID3D11ShaderResourceView* m_srv = get_or_upload_gx_texture(&batch->tev_texmap[m]);
                                if (m_srv) srvs[m] = m_srv;
                                else if (getenv("TLS_TEX_FAIL_PROBE")) {
                                    /* A TEV stage that samples an un-uploadable map reads
                                     * the white fallback, which paints a flat tinted
                                     * polygon - the "olive blob" symptom on the cave walls
                                     * (handover 5c.46 AP-O). Report each address once. */
                                    static uint32_t s_fail[32];
                                    static int s_fail_n = 0;
                                    uint32_t a = batch->tev_texmap[m].guest_addr;
                                    int seen = 0;
                                    for (int i = 0; i < s_fail_n; i++) if (s_fail[i] == a) seen = 1;
                                    if (!seen && s_fail_n < 32) {
                                        s_fail[s_fail_n++] = a;
                                        printf("[GFX] TEV white fallback: batch %u map %d tex=0x%08X "
                                               "%ux%u fmt=%u\n", b, m, a,
                                               batch->tev_texmap[m].width, batch->tev_texmap[m].height,
                                               batch->tev_texmap[m].format);
                                        fflush(stdout);
                                    }
                                }
                            }
                        }
                        if (cst) {
                            ID3D11DeviceContext_Unmap(s_d3d11.context,
                                (ID3D11Resource*)s_d3d11.gx_tev_cb, 0);
                        }
                        ID3D11DeviceContext_PSSetConstantBuffers(s_d3d11.context, 0, 1, &s_d3d11.gx_tev_cb);
                        {
                            /* TLS_TEV_PATH=<batch>[,<frame>]: say which pixel shader this draw
                             * uses. Settles whether a multi-stage batch (the page's b30) is drawn
                             * through the TEV shader at all or through the PSAlpha fallback, which
                             * needs no TEV arithmetic (handover 5c.46 G). */
                            static int s_pb = -2, s_pf = -1;
                            if (s_pb == -2) {
                                const char* e = getenv("TLS_TEV_PATH");
                                s_pb = -1;
                                if (e && *e) {
                                    s_pb = atoi(e);
                                    const char* c = strchr(e, ',');
                                    if (c) s_pf = atoi(c + 1);
                                }
                            }
                            if (s_pb >= 0 && (int)b == s_pb &&
                                (s_pf < 0 || s_pf == (int)s_d3d11_dump_count)) {
                                printf("[TevPath] frame=%d b%u shader=TEV stages=%u\n",
                                       s_d3d11_dump_count, b, cst ? 0u : 0u);
                                fflush(stdout);
                            }
                        }
                        ID3D11DeviceContext_PSSetShader(s_d3d11.context, s_d3d11.gx_ps_tev, NULL, 0);
                        ID3D11DeviceContext_PSSetShaderResources(s_d3d11.context, 0, 8, srvs);
                        /* Two samplers: s0 = CLAMP, s1 = WRAP. The shader picks per
                         * texmap from cst->wrap[], which gx_tev_fill_dims fills from the
                         * guest's GX wrap mode. Binding only the clamp sampler is what
                         * stretched the cave's tiling rock textures (5c.46 AP-O). */
                        {
                            ID3D11SamplerState* samps[2] = { s_d3d11.sampler_linear,
                                                             s_d3d11.sampler_wrap };
                            ID3D11DeviceContext_PSSetSamplers(s_d3d11.context, 0, 2, samps);
                        }
                    } else {
                        ID3D11DeviceContext_PSSetShader(s_d3d11.context, ps, NULL, 0);
                        ID3D11DeviceContext_PSSetShaderResources(s_d3d11.context, 0, 1, &srv);
                    }
                    ID3D11DeviceContext_Draw(s_d3d11.context, batch->vertex_count, batch->vertex_offset);
                    /* Watch the framebuffer change pass by pass. TLS_BATCH_PROBE=<frame>. */
                    {
                        static int s_probe_frame = -2;
                        if (s_probe_frame == -2) {
                            const char* f = getenv("TLS_BATCH_PROBE");
                            s_probe_frame = f ? atoi(f) : -1;
                        }
                        if (s_probe_frame >= 0 && probe_frame_hits(s_probe_frame, (int)s_d3d11_dump_count)) {
                            unsigned pr, pg, pb, pmax, pred, pbright, pn, pa;
                            probe_backbuffer_stats(&pr, &pg, &pb, &pmax, &pred, &pbright, &pn, &pa);
                            printf("[BatchProbe] frame=%d after b%u (voff=%u vcnt=%u tex=0x%08X blend=%d s=%u d=%u col0=0x%08X): avg=(%u,%u,%u) a=%u max=%u red=%u/%u bright=%u eff=%d es=%u ed=%u\n",
                                   s_d3d11_dump_count, b, batch->vertex_offset, batch->vertex_count,
                                   batch->tex.guest_addr, batch->blend_enable, batch->src_factor,
                                   batch->dst_factor, gx_vtx[batch->vertex_offset].color, pr, pg, pb,
                                   pa, pmax, pred, pn, pbright,
                                   blend_enable ? 1 : 0, src_factor, dst_factor);
                            fflush(stdout);
                        }
                    }
                    /* Per-batch REGION attribution (TLS_BATCH_RECT=<guest frame>).
                     *
                     * TLS_BATCH_PROBE above reads the whole back buffer, so a 70x43-pixel UI
                     * element - the page's SKIP label - is invisible in its average, and
                     * TLS_BATCH_CUTOFF cannot be used instead because cutting the loop leaves
                     * the guest's end-of-frame EFB copies unserviced (handover 5c.43 F). This
                     * reads back only the batch's own NDC rectangle, so it changes nothing
                     * about the frame's inputs.
                     *
                     * Keyed on the PRESENT counter, like TLS_BATCH_DUMP and TLS_SHOT_FRAMES, because
                     * g_runner_current_frame is one behind while the draw loop runs: measured
                     * TLS_BATCH_RECT=4000 with the guest key listed a completely different scene
                     * (19 batches, textures 0x91EBC460..) while 3999 listed the page, and 3999's
                     * page is the frame the shot at 4000 captures (handover 5c.43 G). */
                    {
                        static int s_rect_frame = -2;
                        if (s_rect_frame == -2) {
                            const char* f = getenv("TLS_BATCH_RECT");
                            s_rect_frame = f ? atoi(f) : -1;
                        }
                        if (s_rect_frame >= 0 && s_rect_frame == (int)s_d3d11_dump_count) {
                            uint32_t vo3 = batch->vertex_offset;
                            float mnx = 1e9f, mxx = -1e9f, mny = 1e9f, mxy = -1e9f;
                            for (uint32_t vi = 0; vi < batch->vertex_count; vi++) {
                                float x = gx_vtx[vo3 + vi].x, y = gx_vtx[vo3 + vi].y;
                                if (x < mnx) mnx = x; if (x > mxx) mxx = x;
                                if (y < mny) mny = y; if (y > mxy) mxy = y;
                            }
                            unsigned rr, rg, rb, rdark, rn;
                            probe_backbuffer_rect(mnx, mny, mxx, mxy, &rr, &rg, &rb, &rdark, &rn);
                            printf("[BatchRect] frame=%d after b%u tex=0x%08X blend=%d s=%u d=%u "
                                   "ndc=(%.2f,%.2f)-(%.2f,%.2f) avg=(%u,%u,%u) dark=%u/%u\n",
                                   s_d3d11_dump_count, b, batch->tex.guest_addr,
                                   batch->blend_enable, batch->src_factor, batch->dst_factor,
                                   mnx, mny, mxx, mxy, rr, rg, rb, rdark, rn);
                            fflush(stdout);
                        }
                    }
                    /* TEV state of every batch (TLS_TEV_PROBE=<frame>): the decode of
                     * BP 0xC0..0xDF / 0xE0..0xE7 / 0xF6..0xFD that the shader evaluates. */
                    {
                        static int s_tev_probe_frame = -2;
                        static int s_tev_probe_from = 0;
                        if (s_tev_probe_frame == -2) {
                            const char* f = getenv("TLS_TEV_PROBE");
                            s_tev_probe_frame = f ? atoi(f) : -1;
                            const char* fb = getenv("TLS_TEV_PROBE_FROM");
                            s_tev_probe_from = fb ? atoi(fb) : 0;
                        }
                        if (s_tev_probe_frame >= 0 &&
                            probe_frame_hits(s_tev_probe_frame, (int)s_d3d11_dump_count) &&
                            (int)b >= s_tev_probe_from) {
                            printf("[TevProbe] frame=%d b%u vcnt=%u tex=0x%08X tex1=0x%08X blend=%d s=%u d=%u texcoord_mask=0x%02X ntexgen=%u tc0=%08X/%08X tc1=%08X/%08X\n",
                                   s_d3d11_dump_count, b, batch->vertex_count,
                                   batch->tex.guest_addr,
                                   batch->has_texture1 ? batch->tex1.guest_addr : 0u,
                                   batch->blend_enable, batch->src_factor, batch->dst_factor,
                                   batch->texcoord_mask, batch->xf_num_texgens,
                                   gx_pipeline_get_tc_info(0, 0), gx_pipeline_get_tc_info(0, 1),
                                   gx_pipeline_get_tc_info(1, 0), gx_pipeline_get_tc_info(1, 1));
                            {
                                /* Screen-space extent of the batch (NDC). The composite tail
                                 * is supposed to be a handful of *small* blur quads; if one of
                                 * them covers the screen, the glow's size is a geometry bug,
                                 * not a blend bug (handover 5c.16). */
                                float mnx2 = 1e9f, mxx2 = -1e9f, mny2 = 1e9f, mxy2 = -1e9f;
                                uint32_t vo2 = batch->vertex_offset;
                                for (uint32_t vi = 0; vi < batch->vertex_count; vi++) {
                                    float x = gx_vtx[vo2 + vi].x, y = gx_vtx[vo2 + vi].y;
                                    if (x < mnx2) mnx2 = x; if (x > mxx2) mxx2 = x;
                                    if (y < mny2) mny2 = y; if (y > mxy2) mxy2 = y;
                                }
                                printf("   [bounds] ndc=(%.2f,%.2f)-(%.2f,%.2f) persp=%d\n",
                                       mnx2, mny2, mxx2, mxy2, batch->is_perspective);
                            }
                            /* XF texture-coordinate generation, per texgen: this is what
                             * a TEV stage naming texcoord 2..7 asks for and the host does
                             * not feed (handover 5c.46 AP-O item 7). Printed with the
                             * matrix rows so the coordinate can be evaluated offline
                             * instead of inferred. */
                            for (int g = 0; g < (int)batch->xf_num_texgens && g < 8; g++) {
                                GxTexGenInfo ti;
                                float tm[3][4], pm[3][4];
                                gx_pipeline_get_texgen(g, &ti);
                                gx_pipeline_get_tex_matrix(ti.mtx_index, tm);
                                gx_pipeline_get_post_matrix(ti.post_index, pm);
                                printf("   [texgen] tg%d type=%u src=%u proj=%u in=%u mtx=%u post=%u/%d "
                                       "raw=0x%08X postraw=0x%08X\n",
                                       g, ti.texgentype, ti.sourcerow, ti.projection, ti.inputform,
                                       ti.mtx_index, ti.post_index, ti.post_normalize,
                                       ti.info, ti.post_info);
                                printf("   [texgen]     tm=[%.4f %.4f %.4f %.4f][%.4f %.4f %.4f %.4f][%.4f %.4f %.4f %.4f]\n",
                                       tm[0][0], tm[0][1], tm[0][2], tm[0][3],
                                       tm[1][0], tm[1][1], tm[1][2], tm[1][3],
                                       tm[2][0], tm[2][1], tm[2][2], tm[2][3]);
                                if (ti.post_index || ti.post_normalize)
                                    printf("   [texgen]     pm=[%.4f %.4f %.4f %.4f][%.4f %.4f %.4f %.4f][%.4f %.4f %.4f %.4f]\n",
                                           pm[0][0], pm[0][1], pm[0][2], pm[0][3],
                                           pm[1][0], pm[1][1], pm[1][2], pm[1][3],
                                           pm[2][0], pm[2][1], pm[2][2], pm[2][3]);
                            }
                            for (int m = 0; m < 8; m++) {
                                if (!(batch->tev_texmap_mask & (1u << m))) continue;
                                unsigned tr, tg, tb, ta;
                                if (probe_texture_avg(&batch->tev_texmap[m], &tr, &tg, &tb, &ta)) {
                                    printf("   [tex] map%d = 0x%08X %ux%u fmt=%u avg=(%u,%u,%u) a=%u\n",
                                           m, batch->tev_texmap[m].guest_addr,
                                           batch->tev_texmap[m].width, batch->tev_texmap[m].height,
                                           batch->tev_texmap[m].format, tr, tg, tb, ta);
                                } else {
                                    printf("   [tex] map%d = 0x%08X <unavailable>\n", m,
                                           batch->tev_texmap[m].guest_addr);
                                }
                            }
                            gx_pipeline_print_tev_state(batch->tev_state);
                            fflush(stdout);
                        }
                    }
                    if (take_shot && (s_d3d11_dump_count == 900 || s_d3d11_dump_count == 1500)) {                        char bpath[128];
                        snprintf(bpath, sizeof(bpath), "build/recomp/batch_%u_f%d.bmp", b, s_d3d11_dump_count);
                        save_backbuffer_bmp(bpath);
                        if (b == 0 || b == 1 || b == 2) {
                            char vfpath[128];
                            snprintf(vfpath, sizeof(vfpath), "build/recomp/batch_%u_f%d_verts.txt", b, s_d3d11_dump_count);
                            FILE* vf = fopen(vfpath, "w");
                            if (vf) {
                                for (uint32_t vi = 0; vi < batch->vertex_count && vi < 200; vi++) {
                                    uint32_t vidx = batch->vertex_offset + vi;
                                    fprintf(vf, "v[%u]: pos=(%.3f, %.3f, %.3f, %.3f) uv=(%.4f, %.4f) col=0x%08X\n",
                                            vi, gx_vtx[vidx].x, gx_vtx[vidx].y, gx_vtx[vidx].z, gx_vtx[vidx].w,
                                            gx_vtx[vidx].u, gx_vtx[vidx].v, gx_vtx[vidx].color);
                                }
                                fclose(vf);
                            }
                        }
                    }
                }
            } else {
                ID3D11DeviceContext_OMSetDepthStencilState(s_d3d11.context, s_d3d11.ds_state_ui, 0);
                ID3D11ShaderResourceView* srv = s_d3d11.gx_tex_white_srv;
                ID3D11DeviceContext_PSSetShaderResources(s_d3d11.context, 0, 1, &srv);
                ID3D11DeviceContext_Draw(s_d3d11.context, gx_vtx_count, 0);
            }
            /* Copies issued after the last draw read the finished frame. */
            d3d11_service_pending_copies(&efb_copy_cursor, 0xFFFFFFFFu, 9999);

            // Restore default blend and depth state
            ID3D11DeviceContext_OMSetBlendState(s_d3d11.context, NULL, NULL, 0xFFFFFFFF);
            ID3D11DeviceContext_OMSetDepthStencilState(s_d3d11.context, NULL, 0);
        }
    }
    /* Frames with no drawable geometry still issue copies (VI scanout, screen captures);
     * service everything that is left so no copy command is silently dropped. */
    d3d11_service_pending_copies(&efb_copy_cursor, 0xFFFFFFFFu, 9999);

    /* Capture plumbing is otherwise silent, which makes "no file appeared" ambiguous
     * between "the capture point was never reached" and "the write failed". Print the
     * present counter, the take_shot decision and the write result when
     * TLS_PRESENT_PROBE=1, and make a failed write loud instead of falling back. */
    {
        static int s_pp = -1;
        if (s_pp < 0) s_pp = getenv("TLS_PRESENT_PROBE") ? 1 : 0;
        /* TLS_PRESENT_WINDOW=<start>,<count> prints EVERY present in that window.
         * The 100-present cadence below cannot show the alternate-frame staleness
         * (5c.25 §4b): the defect is exactly a parity, so it only appears when two
         * adjacent presents are compared. */
        static int s_pw_start = -1, s_pw_count = 0;
        if (s_pw_start == -1) {
            const char* pw = getenv("TLS_PRESENT_WINDOW");
            s_pw_start = -2;
            if (pw && *pw) {
                int a = -1, b = 0;
                if (sscanf(pw, "%d,%d", &a, &b) == 2 && a >= 0 && b > 0) {
                    s_pw_start = a;
                    s_pw_count = b;
                }
            }
        }
        int in_window = (s_pw_start >= 0 && s_d3d11_dump_count >= s_pw_start &&
                         s_d3d11_dump_count < s_pw_start + s_pw_count);
        if (s_pp && (in_window || (s_d3d11_dump_count % 100) == 0 || take_shot)) {
            /* Per-frame characterisation, which the two halves of a multi-pass guest
             * frame need: how many batches, how many of them blend, and whether this
             * frame cleared the EFB (and to what). The [EfbClear] print above is
             * capped at two occurrences for the whole run, so it cannot answer
             * "did THIS frame clear" - which is exactly the question the parity
             * defect turns on. */
            uint32_t bc = 0, blended = 0;
            const GxDrawBatch* bd = gx_pipeline_get_draw_batches(&bc);
            for (uint32_t i = 0; i < bc; i++) if (bd[i].blend_enable) blended++;
            printf("[TLS Present] count=%d frame_counter=%d gx_vtx=%u batches=%u blended=%u "
                   "clears=%d xfbs=%d clear=(%.2f,%.2f,%.2f) take_shot=%d\n",
                   s_d3d11_dump_count, s_d3d11.frame_counter, gx_vtx_count, bc, blended,
                   s_clears_this_frame, s_xfbs_this_frame, s_last_clear[0], s_last_clear[1], s_last_clear[2],
                   (int)take_shot);
            fflush(stdout);
        }
    }
    /* Captured BEFORE the reset: the aurora feed must know whether the guest displayed this frame
     * (an XFB/scanout copy is the guest's own "frame finished" marker). Reading s_xfbs_this_frame at
     * the end_frame call below would always see 0, because the counter is cleared here. */
    const int xfb_boundary_this_frame = s_xfbs_this_frame;
    s_clears_this_frame = 0;
    s_xfbs_this_frame = 0;

    /* P4 (5c.46 AP-BQ): aurora's picture replaces this frame in the back buffer.
     *
     * IT MUST BE BEFORE `if (take_shot)` BELOW, and that ordering cost the first promotion run its
     * evidence: the screenshot happens BEFORE d3d11_capture_efb_snapshot(), so a blit placed after the
     * snapshot produced a shot byte-identical to the layer's (mean |d| 0.00, max 0) - the promotion
     * looked inert while it was merely late. Blitting here means the screenshot AND the snapshot both
     * see aurora's frame; the snapshot feeds only the layer's own EFB-copy sampling, and the layer's
     * picture is not presented while aurora publishes.
     *
     * A failed blit - a readback that did not deliver, a device that went away - falls through and the
     * layer's picture is presented instead: a frame is never presented black because of the promotion. */
    if (aurora_published) {
        if (!aurora_blit_presented_frame()) {
            s_aurora_blit_fail++;
            if (s_aurora_blit_fail <= 8 || (s_aurora_blit_fail % 200) == 0) {
                printf("[AuroraPublish] blit failed on frame %d - the layer's picture is presented\n",
                       s_d3d11_dump_count);
                fflush(stdout);
            }
        }
    }

    if (take_shot) {
        ID3D11Texture2D* back_buffer = NULL;
        if (SUCCEEDED(IDXGISwapChain_GetBuffer(s_d3d11.swap_chain, 0, &IID_ID3D11Texture2D, (void**)&back_buffer))) {
            D3D11_TEXTURE2D_DESC desc;
            ID3D11Texture2D_GetDesc(back_buffer, &desc);
            desc.Usage = D3D11_USAGE_STAGING;
            desc.BindFlags = 0;
            desc.CPUAccessFlags = D3D11_CPU_ACCESS_READ;
            desc.MiscFlags = 0;
            ID3D11Texture2D* staging = NULL;
            if (SUCCEEDED(ID3D11Device_CreateTexture2D(s_d3d11.device, &desc, NULL, &staging))) {
                ID3D11DeviceContext_CopyResource(s_d3d11.context, (ID3D11Resource*)staging, (ID3D11Resource*)back_buffer);
                D3D11_MAPPED_SUBRESOURCE mapped;
                if (SUCCEEDED(ID3D11DeviceContext_Map(s_d3d11.context, (ID3D11Resource*)staging, 0, D3D11_MAP_READ, 0, &mapped))) {
                    char shot_path[128];
                    snprintf(shot_path, sizeof(shot_path), "build/recomp/d3d11_screenshot_%d.ppm", s_d3d11_dump_count);
                    FILE* f = fopen(shot_path, "wb");
                    if (!f) {
                        snprintf(shot_path, sizeof(shot_path), "build/recomp/d3d11_screenshot.ppm");
                        f = fopen(shot_path, "wb");
                    }
                    if (f) {
                        fprintf(f, "P6\n%u %u\n255\n", desc.Width, desc.Height);
                        uint8_t* row_buf = (uint8_t*)malloc(desc.Width * 3);
                        if (row_buf) {
                            for (UINT y = 0; y < desc.Height; y++) {
                                const uint8_t* row = (const uint8_t*)mapped.pData + y * mapped.RowPitch;
                                for (UINT x = 0; x < desc.Width; x++) {
                                    row_buf[x * 3 + 0] = row[x * 4 + 0];
                                    row_buf[x * 3 + 1] = row[x * 4 + 1];
                                    row_buf[x * 3 + 2] = row[x * 4 + 2];
                                }
                                fwrite(row_buf, 1, desc.Width * 3, f);
                            }
                            free(row_buf);
                        }
                        fclose(f);
                        printf("[D3D11] Dumped screenshot to %s (%u x %u)\n", shot_path, desc.Width, desc.Height);
                        fflush(stdout);
                    }

                    // Also save 24-bit BMP
                    char bmp_path[128];
                    snprintf(bmp_path, sizeof(bmp_path), "build/recomp/d3d11_screenshot_%d.bmp", s_d3d11_dump_count);
                    FILE* f_bmp = fopen(bmp_path, "wb");
                    if (!f_bmp) f_bmp = fopen("build/recomp/d3d11_screenshot.bmp", "wb");
                    if (f_bmp) {
                        uint32_t w = desc.Width;
                        uint32_t h = desc.Height;
                        uint32_t row_padded = (w * 3 + 3) & (~3);
                        uint32_t file_size = 54 + row_padded * h;
                        uint8_t bmp_hdr[54] = {
                            'B', 'M',
                            (uint8_t)file_size, (uint8_t)(file_size >> 8), (uint8_t)(file_size >> 16), (uint8_t)(file_size >> 24),
                            0, 0, 0, 0, 54, 0, 0, 0,
                            40, 0, 0, 0,
                            (uint8_t)w, (uint8_t)(w >> 8), (uint8_t)(w >> 16), (uint8_t)(w >> 24),
                            (uint8_t)h, (uint8_t)(h >> 8), (uint8_t)(h >> 16), (uint8_t)(h >> 24),
                            1, 0, 24, 0, 0, 0, 0, 0,
                            (uint8_t)(row_padded * h), (uint8_t)((row_padded * h) >> 8), (uint8_t)((row_padded * h) >> 16), (uint8_t)((row_padded * h) >> 24),
                            0x13, 0x0B, 0, 0, 0x13, 0x0B, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
                        };
                        fwrite(bmp_hdr, 1, 54, f_bmp);
                        uint8_t* bmp_row = (uint8_t*)calloc(1, row_padded);
                        if (bmp_row) {
                            for (int y = (int)h - 1; y >= 0; y--) {
                                const uint8_t* row = (const uint8_t*)mapped.pData + y * mapped.RowPitch;
                                for (uint32_t x = 0; x < w; x++) {
                                    bmp_row[x * 3 + 0] = row[x * 4 + 2]; // B
                                    bmp_row[x * 3 + 1] = row[x * 4 + 1]; // G
                                    bmp_row[x * 3 + 2] = row[x * 4 + 0]; // R
                                }
                                fwrite(bmp_row, 1, row_padded, f_bmp);
                            }
                            free(bmp_row);
                        }
                        fclose(f_bmp);
                        // Also duplicate as default d3d11_screenshot.bmp
                        CopyFileA(bmp_path, "build/recomp/d3d11_screenshot.bmp", FALSE);
                    }
                    ID3D11DeviceContext_Unmap(s_d3d11.context, (ID3D11Resource*)staging, 0);
                }
                ID3D11Texture2D_Release(staging);
            }
            ID3D11Texture2D_Release(back_buffer);
        }
    }

    // Present with V-Sync
    /* A flush is not a present: the snapshot must not be overwritten with a half-drawn
     * frame (the next real present captures the finished one) and the window must not
     * flip. Everything above - viewport, batches, per-batch copy service, textures - has
     * already run, which is the whole point. */
    if (s_flush_only) {
        gx_pipeline_end_frame(0);   /* a flush is not the guest's frame boundary */
        return true;
    }
    d3d11_capture_efb_snapshot();
    /* TLS_PRESENT_ON_XFB=1 flips the window only on frames where the guest performed an
     * XFB (scanout) copy, i.e. only on frames the guest itself considers finished.
     * Measured with the per-frame probe:
     *   - the TITLE does an XFB copy on EVERY frame (xfbs=1 at 1444..1448), so it is
     *     unaffected and keeps its cadence;
     *   - the Chapter-1 loop does one only on the composite half (xfbs=1 on 4002/4004/
     *     4006, xfbs=0 on 4001/4003/4005), so the opaque geometry half - a frame the guest
     *     never displays - stops being put on screen.
     * Default ON (set TLS_PRESENT_ON_XFB=0 to restore one present per emulated frame).
     * Measured before flipping: the ONLY stretch with no XFB copy is the initial black
     * boot (frames 2..~300 render `batches=0` anyway), while the title, the save dialog
     * and the Chapter-1 composite frames all have `xfbs=1` - so nothing that has content
     * stops being shown. In Chapter-1 this removes the opaque geometry half from the
     * screen, which the guest never displays. */
    {
        static int s_on_xfb = -1;
        if (s_on_xfb < 0) {
            const char* e = getenv("TLS_PRESENT_ON_XFB");
            s_on_xfb = (e && atoi(e) == 0) ? 0 : 1;
        }
        if (!s_on_xfb || s_xfbs_this_frame > 0)
            IDXGISwapChain_Present(s_d3d11.swap_chain, s_d3d11.vsync ? 1 : 0, 0);
    }
    /* 1 = present WITH an XFB/scanout copy (a display boundary), 2 = present without one. Both are
     * presents and both end a guest frame; the aurora feed needs them apart because the harness
     * replay of a recorded capture feeds one aurora frame per recorded frame (one present), which
     * is the model that matches the layer (5c.46 AP-BI/AP-BJ). A flush passes 0. */
    gx_pipeline_end_frame(xfb_boundary_this_frame > 0 ? 1 : 2);   /* the guest's own display boundary */
    return true;
}

/* GXDrawDone's real meaning: "the commands the guest has issued have been consumed".
 * Runs the draw phase without clearing, without capturing the snapshot and without
 * flipping the window, so any EFB copy still queued is serviced here - against the
 * previous frame's content plus everything drawn so far - instead of at the end of the
 * present, after the guest has already read the destination (handover 5c.46 AP-W7/W8).
 * The accumulated geometry is NOT consumed: the real present redraws its own batch list,
 * so the displayed picture is unchanged and this cannot regress the invariant. Inert
 * unless copies are queued, i.e. unless TLS_EFB_ORDER/TLS_DEFER_EFB_COPY is in use. */
void gfx_flush_gx_now(void) {
    if (!s_d3d11.device || !s_d3d11.context || !s_d3d11.swap_chain) return;
    if (s_flush_only) return;              /* not re-entrant */
    if (gx_pipeline_get_pending_copy_count() == 0) return;   /* nothing to gain */
    s_flush_only = 1;
    d3d11_present(NULL, 0, 0);
    s_flush_only = 0;
}

void d3d11_resize(int new_width, int new_height) {    if (!s_d3d11.swap_chain || new_width <= 0 || new_height <= 0) return;
    s_d3d11.win_width = new_width;
    s_d3d11.win_height = new_height;

    if (s_d3d11.rtv) {
        ID3D11RenderTargetView_Release(s_d3d11.rtv);
        s_d3d11.rtv = NULL;
    }

    IDXGISwapChain_ResizeBuffers(s_d3d11.swap_chain, 0, new_width, new_height, DXGI_FORMAT_UNKNOWN, 0);
    recreate_render_target();
}

void d3d11_shutdown(void) {
    if (s_d3d11.rgba_staging) {
        free(s_d3d11.rgba_staging);
        s_d3d11.rgba_staging = NULL;
    }
    if (s_d3d11.gx_input_layout) ID3D11InputLayout_Release(s_d3d11.gx_input_layout);
    if (s_d3d11.gx_vbo) ID3D11Buffer_Release(s_d3d11.gx_vbo);
    if (s_d3d11.gx_vs) ID3D11VertexShader_Release(s_d3d11.gx_vs);
    if (s_d3d11.gx_ps_opaque) ID3D11PixelShader_Release(s_d3d11.gx_ps_opaque);
    if (s_d3d11.gx_ps_alpha) ID3D11PixelShader_Release(s_d3d11.gx_ps_alpha);
    if (s_d3d11.gx_ps_alpha_flat) ID3D11PixelShader_Release(s_d3d11.gx_ps_alpha_flat);
    if (s_d3d11.sampler_linear) ID3D11SamplerState_Release(s_d3d11.sampler_linear);
    if (s_d3d11.fb_srv) ID3D11ShaderResourceView_Release(s_d3d11.fb_srv);
    if (s_d3d11.fb_texture) ID3D11Texture2D_Release(s_d3d11.fb_texture);
    if (s_d3d11.vs) ID3D11VertexShader_Release(s_d3d11.vs);
    if (s_d3d11.ps) ID3D11PixelShader_Release(s_d3d11.ps);
    if (s_d3d11.rtv) ID3D11RenderTargetView_Release(s_d3d11.rtv);
    if (s_d3d11.swap_chain) IDXGISwapChain_Release(s_d3d11.swap_chain);
    if (s_d3d11.context) ID3D11DeviceContext_Release(s_d3d11.context);
    if (s_d3d11.device) ID3D11Device_Release(s_d3d11.device);
    memset(&s_d3d11, 0, sizeof(s_d3d11));
}
