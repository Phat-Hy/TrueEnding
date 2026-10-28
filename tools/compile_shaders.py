import ctypes
from ctypes import wintypes
import os

d3dcompiler = ctypes.windll.LoadLibrary('d3dcompiler_47.dll')

D3DCompile = d3dcompiler.D3DCompile
D3DCompile.argtypes = [
    ctypes.c_char_p, # pSrcData
    ctypes.c_size_t, # SrcDataSize
    ctypes.c_char_p, # pSourceName
    ctypes.c_void_p, # pDefines
    ctypes.c_void_p, # pInclude
    ctypes.c_char_p, # pEntrypoint
    ctypes.c_char_p, # pTarget
    wintypes.UINT,   # Flags1
    wintypes.UINT,   # Flags2
    ctypes.POINTER(ctypes.c_void_p), # ppCode
    ctypes.POINTER(ctypes.c_void_p), # ppErrorMsgs
]
D3DCompile.restype = wintypes.LONG

# ID3DBlob vtable interface
class ID3D10BlobVtbl(ctypes.Structure):
    _fields_ = [
        ('QueryInterface', ctypes.c_void_p),
        ('AddRef', ctypes.c_void_p),
        ('Release', ctypes.c_void_p),
        ('GetBufferPointer', ctypes.WINFUNCTYPE(ctypes.c_void_p, ctypes.c_void_p)),
        ('GetBufferSize', ctypes.WINFUNCTYPE(ctypes.c_size_t, ctypes.c_void_p)),
    ]

class ID3D10Blob(ctypes.Structure):
    _fields_ = [('lpVtbl', ctypes.POINTER(ID3D10BlobVtbl))]

def compile_hlsl(src: str, entry: str, target: str) -> bytes:
    src_bytes = src.encode('utf-8')
    ppCode = ctypes.c_void_p()
    ppError = ctypes.c_void_p()
    
    hr = D3DCompile(
        src_bytes, len(src_bytes),
        None, None, None,
        entry.encode('utf-8'),
        target.encode('utf-8'),
        0, 0,
        ctypes.byref(ppCode),
        ctypes.byref(ppError)
    )
    
    if hr != 0:
        if ppError.value:
            err_blob = ctypes.cast(ppError.value, ctypes.POINTER(ID3D10Blob))
            p_buf = err_blob.contents.lpVtbl.contents.GetBufferPointer(ppError)
            sz = err_blob.contents.lpVtbl.contents.GetBufferSize(ppError)
            err_msg = ctypes.string_at(p_buf, sz).decode('utf-8', errors='replace')
            raise RuntimeError(f"HLSL compilation failed ({entry}, {target}): {err_msg}")
        raise RuntimeError(f"HLSL compilation failed with hr=0x{hr:08X}")
    
    code_blob = ctypes.cast(ppCode.value, ctypes.POINTER(ID3D10Blob))
    p_buf = code_blob.contents.lpVtbl.contents.GetBufferPointer(ppCode)
    sz = code_blob.contents.lpVtbl.contents.GetBufferSize(ppCode)
    return ctypes.string_at(p_buf, sz)

hlsl_source = """
struct VSInput {
    float4 pos    : POSITION;
    float3 normal : NORMAL;
    float2 uv     : TEXCOORD0;
    float4 color  : COLOR0;
    float2 uv1    : TEXCOORD1;
    float3 objpos : TEXCOORD2;
};

struct PSInput {
    float4 pos   : SV_Position;
    float2 uv    : TEXCOORD0;
    float4 color : COLOR0;
    float2 uv1   : TEXCOORD1;
    float3 objpos : TEXCOORD2;
    float3 nrm    : TEXCOORD3;
};

PSInput VSMain(VSInput input) {
    PSInput output;
    output.pos = input.pos;
    output.uv = input.uv;
    output.uv1 = input.uv1;
    output.color = input.color;
    output.objpos = input.objpos;
    output.nrm = input.normal;
    return output;
}

Texture2D tex0 : register(t0);
SamplerState samLinear : register(s0);

float4 PSOpaque(PSInput input) : SV_Target {
    float4 texColor = tex0.Sample(samLinear, input.uv);
    float alpha = texColor.a * input.color.a;
    // Punch-through alpha test for cutout foliage, grass, decals rendered without framebuffer blending
    if (alpha <= 0.25f) discard;
    return float4(texColor.rgb * input.color.rgb, 1.0f);
}

/* Flat-raster glyph batches. GX colour combiners that do NOT reference the texture
 * colour (arg TEXC) output the rasteriser colour unchanged and take only the ALPHA
 * from the texture - e.g. the page's label/title atlases, whose colour word decodes
 * to `ZERO ONE ras.rgb ZERO` (handover 5c.43 D). Multiplying by the texture's RGB
 * therefore darkens or whitens the glyphs against their own plate: the page's title
 * and body text were drawn and invisible for exactly that reason (5c.46 K). This
 * shader keeps the alpha chain and uses the vertex colour for RGB, which is what the
 * declared combiner says to do. */
float4 PSAlphaFlat(PSInput input) : SV_Target {
    float4 texColor = tex0.Sample(samLinear, input.uv);
    float va = (input.color.a > 0.001f) ? input.color.a : 1.0f;
    float alpha = texColor.a * va;
    if (alpha <= 0.005f) discard;
    return float4(input.color.rgb, alpha);
}

float4 PSAlpha(PSInput input) : SV_Target {
    float4 texColor = tex0.Sample(samLinear, input.uv);
    // GX convention: when vertex alpha is zero the TEV alpha stage is driven by the
    // texture alone (GX_CC_TEXA), so the vertex colour must not zero it out.
    float va = (input.color.a > 0.001f) ? input.color.a : 1.0f;
    // Honour the texture's own alpha. CMPR/DXT1, RGBA8, IA4/IA8 and I4/I8 atlases all
    // carry meaningful alpha. The previous luma fallback ("if (a > 0.01) a else luma")
    // replaced every legitimately transparent texel with its brightness, which turned
    // each transparent-background sprite - the title logo, the title menu text, the
    // particle sparkles - into a solid opaque rectangle whose edges followed the quad.
    float alpha = texColor.a * va;
    // Discard invisible fragments to avoid Z/blend pollution
    if (alpha <= 0.005f) discard;
    return float4(texColor.rgb * input.color.rgb, alpha);
}

/* ==========================================================================
 * TEV pixel shader  (TLS_TEV=1)
 *
 * GX does not have a fixed "texture * vertex colour" stage: every pixel runs
 * through 1..16 TEV stages, each combining four sources - the previous stage's
 * result, one of three colour registers, the stage's texture, and the rasteriser
 * (vertex) colour, or a constant - as
 *
 *     dest = (d (op) lerp(a, b, c) + bias) * scale
 *
 * separately for RGB and A, each stage writing to prev / c0 / c1 / c2. The
 * registers are decoded in recomp/gx_pipeline.h (layout from Dolphin's
 * VideoCommon/BPMemory.h) and uploaded per draw batch into b0.
 *
 * The command stream in this game really does use this: the title MENU's 3D
 * batches run 3..9 stages and the composite tail's fullscreen quads run 1..5,
 * with per-stage konstant tints and channel isolation. Handover 5c.16.
 * ========================================================================== */

Texture2D  tev_tex0 : register(t0);
Texture2D  tev_tex1 : register(t1);
Texture2D  tev_tex2 : register(t2);
Texture2D  tev_tex3 : register(t3);
Texture2D  tev_tex4 : register(t4);
Texture2D  tev_tex5 : register(t5);
Texture2D  tev_tex6 : register(t6);
Texture2D  tev_tex7 : register(t7);
SamplerState tev_samp : register(s0);
// GX wrap mode 1 (REPEAT) needs a second sampler: the cave's wall/floor textures tile
// far outside [0,1), and the CLAMP sampler stretched their border texels across the
// whole surface. Measured: that, not the missing indirect stage, is what made the 3D
// batches "smeared stripes" on the TEV path (handover 5c.46 AP-O).
SamplerState tev_sampw : register(s1);

// Sample the texture bound to GX texmap `map`. Written as an if-chain over eight
// distinct Texture2D objects rather than an indexed array: array-of-texture
// dynamic indexing forces the surrounding TEV stage loop to unroll, and
// D3DCompile refuses to unroll a loop of that size. `wrap` selects the REPEAT
// sampler for this map and is uniform per draw.
float4 SampleTevTex(uint map, float2 uv, uint wrap)
{
    if (wrap == 0u) {
        if (map == 0u) return tev_tex0.Sample(tev_samp, uv);
        if (map == 1u) return tev_tex1.Sample(tev_samp, uv);
        if (map == 2u) return tev_tex2.Sample(tev_samp, uv);
        if (map == 3u) return tev_tex3.Sample(tev_samp, uv);
        if (map == 4u) return tev_tex4.Sample(tev_samp, uv);
        if (map == 5u) return tev_tex5.Sample(tev_samp, uv);
        if (map == 6u) return tev_tex6.Sample(tev_samp, uv);
        return tev_tex7.Sample(tev_samp, uv);
    }
    if (map == 0u) return tev_tex0.Sample(tev_sampw, uv);
    if (map == 1u) return tev_tex1.Sample(tev_sampw, uv);
    if (map == 2u) return tev_tex2.Sample(tev_sampw, uv);
    if (map == 3u) return tev_tex3.Sample(tev_sampw, uv);
    if (map == 4u) return tev_tex4.Sample(tev_sampw, uv);
    if (map == 5u) return tev_tex5.Sample(tev_sampw, uv);
    if (map == 6u) return tev_tex6.Sample(tev_sampw, uv);
    return tev_tex7.Sample(tev_sampw, uv);
}

// GX stages name the texcoord they sample (BP 0xC0 bits 4..7 for the colour combiner's
// texture input). The host used to feed every stage uv0, which is only correct for a
// single-texcoord batch. Measured at MENU frame 1448 the scene batches supply TEX0 and
// TEX1 (texcoord_mask=0x03) while their stages name texcoords 0..3; hardware starts every
// generated coord at (0,0) and only overwrites it from an attribute that exists, so a
// stage naming a texcoord the batch does not supply samples the constant (0,0).
// tev_order[].w carries the renderer's decision: 0 = uv0, 1 = uv1, 2 = constant (0,0).
float2 TevSelectUv(uint sel, float2 uv0, float2 uv1)
{
    if (sel == 0u) return uv0;
    if (sel == 1u) return uv1;
    return float2(0.0f, 0.0f);
}

// GX swap tables (BP 0xF6..0xFD). Before the combiners see them, the sampled texture
// and the raster colour are permuted through a table chosen per stage by the alpha
// combiner's tswap/rswap fields. This is how a texture whose alpha is 255 everywhere
// can still supply an alpha mask: the page's crest stage names a table that maps A
// onto the texture's RED channel (handover 5c.46 AP-N). A float4 component cannot be
// indexed dynamically, so the permutation is a branch chain.
float TevSwapPick(float4 v, uint ch)
{
    if (ch == 0u) return v.r;
    if (ch == 1u) return v.g;
    if (ch == 2u) return v.b;
    return v.a;
}

float4 TevSwap(float4 v, uint4 sw)
{
    return float4(TevSwapPick(v, sw.x), TevSwapPick(v, sw.y),
                  TevSwapPick(v, sw.z), TevSwapPick(v, sw.w));
}

/* GX INDIRECT TEXTURING helpers. The offsets are integers: Dolphin's
 * PixelShaderGen.cpp::WriteStage turns an indirect texture sample into a fixpoint
 * coordinate offset with explicit shifts, and the hardware's arithmetic really is
 * integer (it overflows), so this mirrors it rather than cleaning it up.
 *
 * Fixpoint coordinate: 128 units per texel, i.e. `uv * dim * 128`. An offset of N
 * units is N/128 texels, and the wrap masks below are texel counts, which is what
 * makes ITW_256 wrap at 256 texels. */
int TevIdot3(int3 x, int3 y)
{
    int3 t = x * y;
    return t.x + t.y + t.z;
}

/* IndirectTexFormat -> the shift that keeps the significant bits of the sampled
 * byte: ITF_8 uses all 8, ITF_5 keeps 5, ITF_4 keeps 4, ITF_3 keeps 3. */
int TevIndFmtShift(uint f)
{
    if (f == 0u) return 0;
    if (f == 1u) return 3;
    if (f == 2u) return 4;
    return 5;
}

/* IndTexWrap: 0 = off (pass through), 1..5 = mask to 256/128/64/32/16 texels,
 * 6 = force 0. 7 is invalid on hardware and behaves as 6. */
int TevIndWrapPick(int v, uint w)
{
    if (w == 0u) return v;
    if (w == 1u) return v & 32767;
    if (w == 2u) return v & 16383;
    if (w == 3u) return v & 8191;
    if (w == 4u) return v & 4095;
    if (w == 5u) return v & 2047;
    return 0;
}

/* The offset matrix's dynamic scale: shift right by `w` (a negative w shifts left,
 * i.e. 2^-(17-s) with s > 17). The count is clamped because a shift of 32 or more
 * is undefined in both HLSL and the assembly behind it; the result is truncated to
 * 24 bits a few lines later anyway, so a clamped count only loses bits the hardware
 * also discards. Dolphin does not clamp; the clamp is this host's, not the spec's. */
int2 TevIndShift(int2 v, int w)
{
    if (w < -16) w = -16;
    if (w > 24) w = 24;
    if (w >= 0) return v >> w;
    return v << (-w);
}

cbuffer GxTev : register(b0)
{
    float4 tev_kreg[4];      // K0..K3 constant colour registers
    float4 tev_kprev[4];     // K0..K3 "previous" colour registers
    float4 tev_creg[4];      // C0..C3 TEV colour registers (C0 pre-loads prev)
    uint4  tev_color[16];    // x = rgb combiner (24 bit), y = alpha combiner (24 bit)
    uint4  tev_ksel[16];     // x = colour KonstSel, y = alpha KonstSel
    uint4  tev_order[16];    // x = texmap, y = texcoord, z = enable texture, w = uv source
    uint4  tev_tswap[16];    // per stage: texture channel permutation (out ch -> in ch)
    uint4  tev_rswap[16];    // per stage: raster colour permutation (out ch -> in ch)
    // GX indirect texturing (BP 0x06..0x0F, 0x10..0x1F, 0x25..0x27). Integer because
    // the hardware's offset arithmetic is integer with explicit shifts.
    int4   tev_indmtx[6];    // 2 rows per offset matrix: xyz = 11-bit signed, w = 17-s
    int4   tev_dim[8];       // per texmap x = width, y = height; per texcoord z/w = S/T scale
    uint4  tev_indref[4];    // per indirect stage: x = texmap, y = texcoord, z = used
    uint4  tev_indscale[2];  // BP 0x25/0x26: x = ss0, y = ts0, z = ss1, w = ts1
    uint4  tev_indword[16];  // per TEV stage: x = raw TevStageIndirect (BP 0x10+i)
    uint4  tev_wrap[8];      // per texmap: x = 1 when that map's GX wrap mode is repeat
    // XF texture coordinate generation (Dolphin VertexShaderGen WriteTexCoordTransforms):
    // x = TexMtxInfo raw, y = texture matrix index, z = post index | normalize<<8,
    // w = 1 when this texcoord exists, | 2 when the dual texture transform is enabled.
    int4   tev_tginfo[8];
    float4 tev_tgmtx[24];    // three rows of the texture matrix, per texgen
    float4 tev_tgpost[24];   // three rows of the post matrix, per texgen
    uint   tev_tgneed;       // bit g set = coordinate g has to be generated
    uint   tev_tgpad0, tev_tgpad1, tev_tgpad2;
    uint   tev_ind_num;      // GEN_MODE bits 16..18
    uint   tev_ind_used;     // 0 = no stage perturbs its coordinate: take the old path
    uint   tev_num_stages;
    uint   tev_alpha_test;   // comp0 | comp1<<3 | logic<<6 | ref0<<8 | ref1<<16
};
/* GX texture coordinates 0..7 for this pixel. 0 and 1 are the TEX0/TEX1 attributes as
 * before; 2..7 are generated by the XF texture matrix path (Dolphin
 * VertexShaderGen.cpp WriteTexCoordTransforms + WriteVertexBody): the source row picks
 * the vertex attribute (Geom = position, Normal = normal, Tex0.. = a previous
 * coordinate), the texture matrix's three rows transform it, STQ divides by the third
 * result and the post matrix (when the dual texture transform is enabled) remaps it.
 * Every one of those is linear in the interpolated attributes, so evaluating them per
 * pixel from the interpolated position is what the hardware gets by interpolating the
 * generated coordinate (handover 5c.46 AP-P). */
float3 TevTexCoord(uint g, PSInput input,
                   float3 c0, float3 c1, float3 c2, float3 c3,
                   float3 c4, float3 c5, float3 c6, float3 c7)
{
    int4 ti = tev_tginfo[g];
    if ((ti.w & 1) == 0) return float3(0.0f, 0.0f, 1.0f);
    if (((tev_tgneed >> g) & 1u) == 0u) return float3(0.0f, 0.0f, 1.0f);
    uint srcreal = ((uint)ti.x >> 7) & 0x1Fu;
    uint proj    = ((uint)ti.x >> 1) & 1u;
    uint inform  = ((uint)ti.x >> 2) & 1u;
    float4 coord = float4(0.0f, 0.0f, 1.0f, 1.0f);
    if (srcreal >= 5u) {
        uint t = srcreal - 5u;
        float3 p = c0;
        if (t == 1u) p = c1;
        else if (t == 2u) p = c2;
        else if (t == 3u) p = c3;
        else if (t == 4u) p = c4;
        else if (t == 5u) p = c5;
        else if (t == 6u) p = c6;
        else if (t == 7u) p = c7;
        coord = float4(p.xy, 1.0f, 1.0f);
    } else if (srcreal == 0u) {
        coord = float4(input.objpos, 1.0f);        // SourceRow::Geom
    } else if (srcreal == 1u) {
        coord = float4(input.nrm, 1.0f);           // SourceRow::Normal
    }
    if (inform == 0u) coord.z = 1.0f;              // AB11 forces the third input to 1
    float4 m0 = tev_tgmtx[g * 3 + 0];
    float4 m1 = tev_tgmtx[g * 3 + 1];
    float4 m2 = tev_tgmtx[g * 3 + 2];
    float3 r;
    r.x = dot(coord, m0);
    r.y = dot(coord, m1);
    r.z = (proj != 0u) ? dot(coord, m2) : 1.0f;
    if ((((uint)ti.z >> 8) & 1u) != 0u) r = normalize(r);
    if ((ti.w & 2) != 0) {
        float4 p0 = tev_tgpost[g * 3 + 0];
        float4 p1 = tev_tgpost[g * 3 + 1];
        float4 p2 = tev_tgpost[g * 3 + 2];
        r = float3(dot(p0.xyz, r) + p0.w, dot(p1.xyz, r) + p1.w, dot(p2.xyz, r) + p2.w);
    }
    return r;
}

/* The normalized coordinate a TEV stage samples: its texcoord index resolved by the
 * renderer, divided by q when the texgen asked for STQ (a q of 0 falls back to the
 * s,t as-is, GX's special case). `sel` 8 means "no coordinate": sample (0,0). */
float2 TevSelectCoord(uint sel, PSInput input, float3 c0, float3 c1, float3 c2,
                      float3 c3, float3 c4, float3 c5, float3 c6, float3 c7)
{
    float3 c;
    if (sel == 0u) c = c0;
    else if (sel == 1u) c = c1;
    else if (sel == 2u) c = c2;
    else if (sel == 3u) c = c3;
    else if (sel == 4u) c = c4;
    else if (sel == 5u) c = c5;
    else if (sel == 6u) c = c6;
    else if (sel == 7u) c = c7;
    else return float2(0.0f, 0.0f);
    if (abs(c.z) > 1e-6f) return c.xy / c.z;
    return c.xy;
}



// GX V-constants shared by the colour and alpha KonstSel tables. Written as a
// branch chain rather than an indexed array: a dynamically indexed array inside
// the TEV stage loop forces an unroll, and D3DCompile cannot unroll a loop that
// also performs dynamically indexed texture sampling.
float TevVConst(uint i)
{
    // Dolphin's table (VideoCommon/PixelShaderGen.cpp tev_ksel_table_c): the GX
    // "fraction" constants are exact 8-bit values, not powers of two over 8.
    if (i == 0) return 255.0f/255.0f;
    if (i == 1) return 223.0f/255.0f;
    if (i == 2) return 191.0f/255.0f;
    if (i == 3) return 159.0f/255.0f;
    if (i == 4) return 128.0f/255.0f;
    if (i == 5) return  96.0f/255.0f;
    if (i == 6) return  64.0f/255.0f;
    return 32.0f/255.0f;
}

float TevKonstChannel(uint sel, uint comp)
{
    // 0..7 V constants, 8..15 zero, 16..31 = K0..K3 channel (r,g,b,a)
    if (sel < 8) return TevVConst(sel);
    if (sel < 16) return 0.0f;
    uint k = (sel - 16) & 3;       // K register
    uint ch = (sel - 16) >> 2;     // 0=r 1=g 2=b 3=a
    float4 v = tev_kreg[k];
    // A float4 component cannot be indexed dynamically, so branch instead.
    if (ch == 0) return v.x;
    if (ch == 1) return v.y;
    if (ch == 2) return v.z;
    return v.w;
}

float4 TevKonstColor(uint sel)
{
    if (sel < 8) { float v = TevVConst(sel); return float4(v, v, v, 1.0f); }
    if (sel < 12) return float4(0.0f, 0.0f, 0.0f, 0.0f);
    // 12..15 = K0..K3 rgb; 16..31 = one channel of K0..K3 replicated over rgb
    uint k = (sel < 16) ? (sel - 12) : ((sel - 16) & 3);
    uint ch = (sel < 16) ? 4u : ((sel - 16) >> 2);
    float4 v = tev_kreg[k];
    if (ch == 4) return float4(v.rgb, 1.0f);
    float c = v.x;
    if (ch == 1) c = v.y;
    else if (ch == 2) c = v.z;
    else if (ch == 3) c = v.w;
    return float4(c, c, c, 1.0f);
}

float3 TevColorArg(uint idx, float4 prev, float4 c0, float4 c1, float4 c2,
                   float4 tex, float4 ras, float4 konst)
{
    if (idx == 0)  return prev.rgb;
    if (idx == 1)  return prev.aaa;
    if (idx == 2)  return c0.rgb;
    if (idx == 3)  return c0.aaa;
    if (idx == 4)  return c1.rgb;
    if (idx == 5)  return c1.aaa;
    if (idx == 6)  return c2.rgb;
    if (idx == 7)  return c2.aaa;
    if (idx == 8)  return tex.rgb;
    if (idx == 9)  return tex.aaa;
    if (idx == 10) return ras.rgb;
    if (idx == 11) return ras.aaa;
    if (idx == 12) return float3(1.0f, 1.0f, 1.0f);
    if (idx == 13) return float3(0.5f, 0.5f, 0.5f);
    if (idx == 14) return konst.rgb;
    return float3(0.0f, 0.0f, 0.0f);
}

float TevAlphaArg(uint idx, float4 prev, float4 c0, float4 c1, float4 c2,
                  float4 tex, float4 ras, float4 konst)
{
    if (idx == 0) return prev.a;
    if (idx == 1) return c0.a;
    if (idx == 2) return c1.a;
    if (idx == 3) return c2.a;
    if (idx == 4) return tex.a;
    if (idx == 5) return ras.a;
    if (idx == 6) return konst.a;
    return 0.0f;
}

/* The compare stages need the four alpha sources as float4 because GR16/BGR24 compare
 * the *colour* channels of an alpha-combiner argument; only the alpha channel matters
 * for A8, so the colour triple is carried through unchanged. */
float4 TevAlphaArg4(uint idx, float4 prev, float4 c0, float4 c1, float4 c2,
                    float4 tex, float4 ras, float4 konst)
{
    float a = TevAlphaArg(idx, prev, c0, c1, c2, tex, ras, konst);
    float4 src = prev;
    if (idx == 1) src = c0;
    else if (idx == 2) src = c1;
    else if (idx == 3) src = c2;
    else if (idx == 4) src = tex;
    else if (idx == 5) src = ras;
    else if (idx == 6) src = konst;
    return float4(src.rgb, a);
}

/* GX TEV "regular" stage: (d (op) lerp(a,b,c) + bias) * scale, then clamp.
 * The hardware's lerp works in 8-bit fixed point with c pre-scaled by 256/255,
 * which is a sub-1/255 difference; the structure is what matters here. */
float3 TevRegular3(float3 a, float3 b, float3 c, float3 d,
                   uint bias, uint op, uint scale, uint clampv)
{
    float3 lerp = a * (1.0f - c) + b * c;
    float3 r = (op == 1) ? (d - lerp) : (d + lerp);
    if (bias == 1) r += 0.5f;
    else if (bias == 2) r -= 0.5f;
    if (scale == 1) r *= 2.0f;
    else if (scale == 2) r *= 4.0f;
    else if (scale == 3) r *= 0.5f;
    if (clampv) r = saturate(r);
    return r;
}

float TevRegular1(float a, float b, float c, float d,
                  uint bias, uint op, uint scale, uint clampv)
{
    float lerp = a * (1.0f - c) + b * c;
    float r = (op == 1) ? (d - lerp) : (d + lerp);
    if (bias == 1) r += 0.5f;
    else if (bias == 2) r -= 0.5f;
    if (scale == 1) r *= 2.0f;
    else if (scale == 2) r *= 4.0f;
    else if (scale == 3) r *= 0.5f;
    if (clampv) r = saturate(r);
    return r;
}

/* TEV compare stages (bias == 3). Dolphin VideoCommon/PixelShaderGen.cpp:1473-1536:
 *     out = clamp(d + cmp)        GT: (a > b) ? c : 0      EQ: (a == b) ? c : 0
 * and the comparison is done in 8-bit fixed point in one of four modes taken from bits
 * 20..21 (which hold `scale` in a regular stage):
 *     0 = R8     (a.r vs b.r)
 *     1 = GR16   (a.r + a.g*256)
 *     2 = BGR24  (a.r + a.g*256 + a.b*65536)
 *     3 = RGB8   per channel: GT -> max(sign(a-b),0)*c, EQ -> (1-sign(|a-b|))*c
 * The alpha combiner uses the same packing with A8 in place of RGB8. There is no
 * scale multiply in a compare stage (Dolphin writes only the clamp). */
float3 TevCompare3(uint mode, uint eq, float3 a, float3 b, float3 c, float3 d, uint clampv)
{
    int3 ia = (int3)round(a * 255.0f);
    int3 ib = (int3)round(b * 255.0f);
    float3 r = float3(0.0f, 0.0f, 0.0f);
    if (mode == 0u) {
        bool t = (eq != 0u) ? (ia.x == ib.x) : (ia.x > ib.x);
        r = t ? c : float3(0.0f, 0.0f, 0.0f);
    } else if (mode == 1u) {
        int va = ia.x + ia.y * 256, vb = ib.x + ib.y * 256;
        bool t = (eq != 0u) ? (va == vb) : (va > vb);
        r = t ? c : float3(0.0f, 0.0f, 0.0f);
    } else if (mode == 2u) {
        int va = ia.x + ia.y * 256 + ia.z * 65536, vb = ib.x + ib.y * 256 + ib.z * 65536;
        bool t = (eq != 0u) ? (va == vb) : (va > vb);
        r = t ? c : float3(0.0f, 0.0f, 0.0f);
    } else {
        if (eq != 0u) r = (float3(1.0f, 1.0f, 1.0f) - (float3)sign(abs(ia - ib))) * c;
        else          r = (float3)max(sign(ia - ib), int3(0, 0, 0)) * c;
    }
    float3 o = d + r;
    if (clampv) o = saturate(o);
    return o;
}

float TevCompare1(uint mode, uint eq, float4 a, float4 b, float4 c, float d, uint clampv)
{
    int3 ia = (int3)round(a.rgb * 255.0f);
    int3 ib = (int3)round(b.rgb * 255.0f);
    int aa = (int)round(a.a * 255.0f), ab2 = (int)round(b.a * 255.0f);
    float r = 0.0f;
    if (mode == 0u) {
        bool t = (eq != 0u) ? (ia.x == ib.x) : (ia.x > ib.x);
        r = t ? c.a : 0.0f;
    } else if (mode == 1u) {
        int va = ia.x + ia.y * 256, vb = ib.x + ib.y * 256;
        bool t = (eq != 0u) ? (va == vb) : (va > vb);
        r = t ? c.a : 0.0f;
    } else if (mode == 2u) {
        int va = ia.x + ia.y * 256 + ia.z * 65536, vb = ib.x + ib.y * 256 + ib.z * 65536;
        bool t = (eq != 0u) ? (va == vb) : (va > vb);
        r = t ? c.a : 0.0f;
    } else {
        bool t = (eq != 0u) ? (aa == ab2) : (aa > ab2);
        r = t ? c.a : 0.0f;
    }
    float o = d + r;
    if (clampv) o = saturate(o);
    return o;
}

bool TevAlphaTest(float alpha, uint packed)
{
    uint comp0 = packed & 7u;
    uint comp1 = (packed >> 3) & 7u;
    uint logic = (packed >> 6) & 3u;
    float ref0 = (float)((packed >> 8) & 0xFFu) / 255.0f;
    float ref1 = (float)((packed >> 16) & 0xFFu) / 255.0f;

    bool r0;
    if (comp0 == 0) r0 = false;
    else if (comp0 == 1) r0 = alpha < ref0;
    else if (comp0 == 2) r0 = abs(alpha - ref0) < (0.5f / 255.0f);
    else if (comp0 == 3) r0 = alpha <= ref0;
    else if (comp0 == 4) r0 = alpha > ref0;
    else if (comp0 == 5) r0 = abs(alpha - ref0) >= (0.5f / 255.0f);
    else if (comp0 == 6) r0 = alpha >= ref0;
    else r0 = true;

    bool r1;
    if (comp1 == 0) r1 = false;
    else if (comp1 == 1) r1 = alpha < ref1;
    else if (comp1 == 2) r1 = abs(alpha - ref1) < (0.5f / 255.0f);
    else if (comp1 == 3) r1 = alpha <= ref1;
    else if (comp1 == 4) r1 = alpha > ref1;
    else if (comp1 == 5) r1 = abs(alpha - ref1) >= (0.5f / 255.0f);
    else if (comp1 == 6) r1 = alpha >= ref1;
    else r1 = true;

    if (logic == 0) return r0 && r1;
    if (logic == 1) return r0 || r1;
    if (logic == 2) return r0 != r1;
    return r0 == r1;
}

float4 PSTev(PSInput input) : SV_Target
{
    float4 ras = input.color;
    // GX pre-loads the TEV register file from the colour registers C0..C3 before the
    // first stage: prev <- C0, r0 <- C1, r1 <- C2, r2 <- C3 (Dolphin
    // PixelShaderGen.cpp: `prev = colors[0], c0 = colors[1], c1 = colors[2],
    // c2 = colors[3]`). These used to be zero, so a compare stage - the only GX
    // mechanism that derives alpha from a texture's RGB - always compared zeros and
    // could never produce a mask (handover 5c.46 AP-M).
    float4 prev = tev_creg[0];
    float4 r0 = tev_creg[1];
    float4 r1 = tev_creg[2];
    float4 r2 = tev_creg[3];

    uint stages = min(tev_num_stages, 16u);
    // GX texture coordinates for this pixel: 0/1 are the TEX0/TEX1 attributes, 2..7 are
    // generated by the XF texture matrix path (see TevTexCoord). A coordinate whose
    // texgen does not exist is (0,0,1), which is what the hardware leaves there.
    float3 cx0 = float3(input.uv, 1.0f);
    float3 cx1 = float3(input.uv1, 1.0f);
    float3 cx2 = float3(0.0f, 0.0f, 1.0f);
    float3 cx3 = cx2, cx4 = cx2, cx5 = cx2, cx6 = cx2, cx7 = cx2;
    if (tev_tgneed != 0u) {
        cx2 = TevTexCoord(2u, input, cx0, cx1, cx1, cx1, cx1, cx1, cx1, cx1);
        cx3 = TevTexCoord(3u, input, cx0, cx1, cx2, cx2, cx2, cx2, cx2, cx2);
        cx4 = TevTexCoord(4u, input, cx0, cx1, cx2, cx3, cx3, cx3, cx3, cx3);
        cx5 = TevTexCoord(5u, input, cx0, cx1, cx2, cx3, cx4, cx4, cx4, cx4);
        cx6 = TevTexCoord(6u, input, cx0, cx1, cx2, cx3, cx4, cx5, cx5, cx5);
        cx7 = TevTexCoord(7u, input, cx0, cx1, cx2, cx3, cx4, cx5, cx6, cx6);
    }
    // tevcoord accumulates across stages exactly as it does on hardware: every stage
    // recomputes it from its own texcoord, the indirect wrap and the stage's offset.
    int2 tevcoord = int2(0, 0);

    [loop] for (uint s = 0; s < stages; s++) {
        uint4 cc = tev_color[s];
        uint4 ac = tev_color[s];
        uint cbits = cc.x;
        uint abits = ac.y;
        uint4 ks = tev_ksel[s];
        uint4 ord = tev_order[s];

        // This stage's own texcoord (GX TEVORDER's texcoord field, resolved by the
        // renderer to a coordinate index or 8 for "none, sample (0,0)").
        float2 sel_uv = TevSelectCoord(ord.w, input, cx0, cx1, cx2, cx3, cx4, cx5, cx6, cx7);

        float4 texel = float4(1.0f, 1.0f, 1.0f, 1.0f);
        if (tev_ind_used == 0u) {
            if (ord.z != 0u) {
                uint map = ord.x & 7u;
                texel = SampleTevTex(map, sel_uv, tev_wrap[map].x);
                texel = TevSwap(texel, tev_tswap[s]);
            }
        } else {
            /* ---- GX indirect texturing (Dolphin PixelShaderGen.cpp WriteStage) ----
             * BP 0x10+s is this TEV stage's TevStageIndirect word. If it names one of
             * the active indirect stages (bt < numindstages) and an offset matrix, the
             * stage samples the map RAS1_IREF gives that indirect stage through the
             * *texel* it finds there: that texel's alpha/blue/green channels become a
             * 3-component input vector, one of the three 2x3 matrices turns it into an
             * (s,t) offset, and the offset is added to this stage's texture coordinate.
             * This is the mechanism the cave's rock walls use, and the reason a
             * single-texture shader turned them into smeared stripes.
             *
             * Units: the coordinate is generated from the TEXCOORD's scale (Dolphin
             * I_TEXDIMS[i].zw, i.e. BP 0x30..0x3F + 1) and divided by the SAMPLED
             * map's dimensions, exactly as Dolphin's sampleTexture does, so the fixpoint
             * unit is one texel of whichever map the value is finally divided by (128
             * units per texel). Frame 3500 programs scale 256 for both texcoords, equal
             * to the 256x256 wall atlas, so the wall coordinate round-trips and an
             * offset of N units is N/128 texels of it. */
            uint smap = ord.x & 7u;
            int2 tcsc = int2(1, 1);
            if (ord.w == 0u) tcsc = tev_dim[0].zw;
            else if (ord.w == 1u) tcsc = tev_dim[1].zw;
            int2 sel_fp = int2(sel_uv * (float2(tcsc) * 128.0f));
            uint raw   = tev_indword[s].x;
            uint ibt   = raw & 3u;
            uint ifmt  = (raw >> 2) & 3u;
            uint ibias = (raw >> 4) & 7u;
            uint imtx  = (raw >> 9) & 3u;
            uint imtxid= (raw >> 11) & 3u;
            uint isw   = (raw >> 13) & 7u;
            uint itw   = (raw >> 16) & 7u;
            bool iadd  = ((raw >> 20) & 1u) != 0u;

            int2 indtevtrans = int2(0, 0);
            if (ibt < tev_ind_num && imtx != 0u) {
                uint imap = tev_indref[ibt].x & 7u;
                uint4 sc = tev_indscale[ibt >> 1];
                // RAS1_SS0/SS1: a separate right shift for s and t, 4 bits each.
                uint sh_s = (ibt & 1u) ? sc.z : sc.x;
                uint sh_t = (ibt & 1u) ? sc.w : sc.y;
                float2 ind_uv = TevSelectCoord(tev_indref[ibt].w, input,
                                               cx0, cx1, cx2, cx3, cx4, cx5, cx6, cx7);
                int2 itcsc = tev_dim[tev_indref[ibt].w < 8u ? tev_indref[ibt].w : 0u].zw;
                int2 ind_fp = int2(ind_uv * (float2(itcsc) * 128.0f));
                // The lookup happens at the (shifted) coordinate, divided by the
                // indirect map's own dimensions.
                float2 ind_dim = float2(tev_dim[imap].xy * 128);
                float2 ind_lookup = float2((float)(ind_fp.x >> sh_s) / ind_dim.x,
                                           (float)(ind_fp.y >> sh_t) / ind_dim.y);
                float4 indsample = SampleTevTex(imap, ind_lookup, tev_wrap[imap].x);
                // Dolphin samples `.abg`: x = alpha, y = blue, z = green, each 0..255.
                int3 iindtex = int3((int)round(indsample.a * 255.0f),
                                    (int)round(indsample.b * 255.0f),
                                    (int)round(indsample.g * 255.0f));
                // ITF_8 keeps all 8 bits and is centred with -128; the smaller
                // formats keep 5/4/3 bits and are rounded with +1.
                int3 crd = iindtex >> TevIndFmtShift(ifmt);
                int badd = (ifmt == 0u) ? -128 : 1;
                if (ibias == 1u) crd.x += badd;
                else if (ibias == 2u) crd.y += badd;
                else if (ibias == 3u) { crd.x += badd; crd.y += badd; }
                else if (ibias == 4u) crd.z += badd;
                else if (ibias == 5u) { crd.x += badd; crd.z += badd; }
                else if (ibias == 6u) { crd.y += badd; crd.z += badd; }
                else if (ibias == 7u) { crd.x += badd; crd.y += badd; crd.z += badd; }

                uint mi = 2u * (imtx - 1u);
                int4 r0 = tev_indmtx[mi];
                int4 r1 = tev_indmtx[mi + 1u];
                if (imtxid == 0u) {
                    int t0 = TevIdot3(r0.xyz, crd) >> 3;
                    int t1 = TevIdot3(r1.xyz, crd) >> 3;
                    indtevtrans = TevIndShift(int2(t0, t1), r0.w);
                } else if (imtxid == 1u) {
                    // S-type: scale the coordinate by the sampled S component.
                    int t0 = (sel_fp.x * crd.x) >> 8;
                    int t1 = (sel_fp.y * crd.x) >> 8;
                    indtevtrans = TevIndShift(int2(t0, t1), r0.w);
                } else {
                    // T-type: scale the coordinate by the sampled T component.
                    int t0 = (sel_fp.x * crd.y) >> 8;
                    int t1 = (sel_fp.y * crd.y) >> 8;
                    indtevtrans = TevIndShift(int2(t0, t1), r0.w);
                }
            }

            int2 wrapped = int2(TevIndWrapPick(sel_fp.x, isw), TevIndWrapPick(sel_fp.y, itw));
            if (iadd) tevcoord = tevcoord + wrapped + indtevtrans;
            else      tevcoord = wrapped + indtevtrans;
            // Hardware keeps 24 signed bits of the coordinate.
            tevcoord = (tevcoord << 8) >> 8;

            if (ord.z != 0u) {
                uint map = ord.x & 7u;
                float2 dim = float2(tev_dim[map].xy * 128);
                texel = SampleTevTex(map, float2(tevcoord) / dim, tev_wrap[map].x);
                texel = TevSwap(texel, tev_tswap[s]);
            }
        }        float4 rasv = TevSwap(ras, tev_rswap[s]);

        float4 konst_c = TevKonstColor(ks.x & 0x1Fu);
        float konst_a = TevKonstChannel(ks.y & 0x1Fu, 3u);

        uint3 carg = uint3((cbits >> 12) & 0xF, (cbits >> 8) & 0xF, (cbits >> 4) & 0xF);
        uint  cd    = cbits & 0xF;
        uint  cbias = (cbits >> 16) & 3;
        uint  cop   = (cbits >> 18) & 1;
        uint  cclamp= (cbits >> 19) & 1;
        uint  cscale= (cbits >> 20) & 3;
        uint  cdest = (cbits >> 22) & 3;

        float3 rgb;
        if (cbias == 3) {
            // compare stage: bits 20..21 are compare_mode, bit 18 is GT/EQ
            rgb = TevCompare3(cscale, cop,
                              TevColorArg(carg.x, prev, r0, r1, r2, texel, rasv, konst_c),
                              TevColorArg(carg.y, prev, r0, r1, r2, texel, rasv, konst_c),
                              TevColorArg(carg.z, prev, r0, r1, r2, texel, rasv, konst_c),
                              TevColorArg(cd,    prev, r0, r1, r2, texel, rasv, konst_c),
                              cclamp);
        } else {
            rgb = TevRegular3(TevColorArg(carg.x, prev, r0, r1, r2, texel, rasv, konst_c),
                              TevColorArg(carg.y, prev, r0, r1, r2, texel, rasv, konst_c),
                              TevColorArg(carg.z, prev, r0, r1, r2, texel, rasv, konst_c),
                              TevColorArg(cd,    prev, r0, r1, r2, texel, rasv, konst_c),
                              cbias, cop, cscale, cclamp);
        }

        /* GX BP 0xC1 (alpha combiner) packs 3-bit args at d:0-2 c:3-5 b:6-8 a:9-11, then
         * bias:12-13 op:14 clamp:15 scale:16-17 dest:18-19. These used to be read at
         * 13/10/7/4 with the *colour* combiner's control-bit positions (16/18/19/20/22),
         * i.e. shifted by one nibble - which silently replaced every alpha stage's
         * arguments with the wrong fields. Measured cost (handover 5c.43 E): the page's
         * SKIP label (b34, raw alpha word 0x0008F2F4) evaluates as A0*A2 + KONST + TEXA
         * under the real layout (texture alpha shapes the glyphs) and as a flat
         * "ZERO tex ras ZERO" -> raster alpha only under the shifted one (no glyphs). */
        uint aarg = (abits >> 13) & 7;
        uint ab   = (abits >> 10) & 7;
        uint ac2  = (abits >> 7) & 7;
        uint ad   = (abits >> 4) & 7;
        uint abias= (abits >> 16) & 3;
        uint aop  = (abits >> 18) & 1;
        uint aclamp=(abits >> 19) & 1;
        uint ascale=(abits >> 20) & 3;
        uint adest= (abits >> 22) & 3;

        float alpha;
        if (abias == 3) {
            // compare stage: alpha mode A8 == RGB8 (3), same compare packing
            alpha = TevCompare1(ascale, aop,
                                TevAlphaArg4(aarg, prev, r0, r1, r2, texel, rasv, konst_c),
                                TevAlphaArg4(ab,   prev, r0, r1, r2, texel, rasv, konst_c),
                                TevAlphaArg4(ac2,  prev, r0, r1, r2, texel, rasv, konst_c),
                                TevAlphaArg(ad,    prev, r0, r1, r2, texel, rasv, konst_c),
                                aclamp);
        } else {
            alpha = TevRegular1(TevAlphaArg(aarg, prev, r0, r1, r2, texel, rasv, konst_c),
                                TevAlphaArg(ab,   prev, r0, r1, r2, texel, rasv, konst_c),
                                TevAlphaArg(ac2,  prev, r0, r1, r2, texel, rasv, konst_c),
                                TevAlphaArg(ad,   prev, r0, r1, r2, texel, rasv, konst_c),
                                abias, aop, ascale, aclamp);
        }

        float4 result = float4(rgb, alpha);
        if (cdest == 0) prev = result;
        else if (cdest == 1) r0 = result;
        else if (cdest == 2) r1 = result;
        else r2 = result;
        // The alpha stage's destination is independent in GX, but every stage in
        // this game's command stream uses the same destination for both halves.
        if (adest != cdest) {
            float4 alpha_only = float4(prev.rgb, alpha);
            if (adest == 0) prev.a = alpha;
            else if (adest == 1) r0.a = alpha;
            else if (adest == 2) r1.a = alpha;
            else r2.a = alpha;
        }
    }

    float4 outColor = float4(prev.rgb, prev.a);
    // The final stage's alpha is the pixel alpha the blend unit sees.
    if (!TevAlphaTest(outColor.a, tev_alpha_test)) discard;
    return outColor;
}
"""

vs_bytecode = compile_hlsl(hlsl_source, "VSMain", "vs_4_0")
ps_opaque_bytecode = compile_hlsl(hlsl_source, "PSOpaque", "ps_4_0")
ps_alpha_bytecode = compile_hlsl(hlsl_source, "PSAlpha", "ps_4_0")
ps_alpha_flat_bytecode = compile_hlsl(hlsl_source, "PSAlphaFlat", "ps_4_0")
ps_tev_bytecode = compile_hlsl(hlsl_source, "PSTev", "ps_5_0")

print(f"Compiled VS: {len(vs_bytecode)} bytes")
print(f"Compiled PSOpaque: {len(ps_opaque_bytecode)} bytes")
print(f"Compiled PSAlpha: {len(ps_alpha_bytecode)} bytes")
print(f"Compiled PSAlphaFlat: {len(ps_alpha_flat_bytecode)} bytes")
print(f"Compiled PSTev: {len(ps_tev_bytecode)} bytes")

def to_c_array(name: str, data: bytes) -> str:
    lines = [f"static const uint8_t {name}[{len(data)}] = {{"]
    for i in range(0, len(data), 24):
        chunk = data[i:i+24]
        line = "    " + ",".join(str(b) for b in chunk) + ","
        lines.append(line)
    lines.append("};")
    return "\n".join(lines)

out_text = f"""// Auto-generated GX 3D shaders with 4D Clip-space Position and Hardware Frustum Clipping
{to_c_array('s_gx_vs_bytecode', vs_bytecode)}

{to_c_array('s_gx_ps_opaque_bytecode', ps_opaque_bytecode)}

{to_c_array('s_gx_ps_alpha_bytecode', ps_alpha_bytecode)}

{to_c_array('s_gx_ps_alpha_flat_bytecode', ps_alpha_flat_bytecode)}

{to_c_array('s_gx_ps_tev_bytecode', ps_tev_bytecode)}

// Backward compatibility alias
#define s_gx_ps_bytecode s_gx_ps_alpha_bytecode
"""

with open("build/recomp/gx_shaders_d3d11.inl", "w") as f:
    f.write(out_text)

print("Saved build/recomp/gx_shaders_d3d11.inl successfully!")
