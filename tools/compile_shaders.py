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
};

struct PSInput {
    float4 pos   : SV_Position;
    float2 uv    : TEXCOORD0;
    float4 color : COLOR0;
    float2 uv1   : TEXCOORD1;
};

PSInput VSMain(VSInput input) {
    PSInput output;
    output.pos = input.pos;
    output.uv = input.uv;
    output.uv1 = input.uv1;
    output.color = input.color;
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

// Sample the texture bound to GX texmap `map`. Written as an if-chain over eight
// distinct Texture2D objects rather than an indexed array: array-of-texture
// dynamic indexing forces the surrounding TEV stage loop to unroll, and
// D3DCompile refuses to unroll a loop of that size.
float4 SampleTevTex(uint map, float2 uv)
{
    if (map == 0u) return tev_tex0.Sample(tev_samp, uv);
    if (map == 1u) return tev_tex1.Sample(tev_samp, uv);
    if (map == 2u) return tev_tex2.Sample(tev_samp, uv);
    if (map == 3u) return tev_tex3.Sample(tev_samp, uv);
    if (map == 4u) return tev_tex4.Sample(tev_samp, uv);
    if (map == 5u) return tev_tex5.Sample(tev_samp, uv);
    if (map == 6u) return tev_tex6.Sample(tev_samp, uv);
    return tev_tex7.Sample(tev_samp, uv);
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

cbuffer GxTev : register(b0)
{
    float4 tev_kreg[4];      // K0..K3 constant colour registers
    float4 tev_kprev[4];     // K0..K3 "previous" colour registers
    uint4  tev_color[16];    // x = rgb combiner (24 bit), y = alpha combiner (24 bit)
    uint4  tev_ksel[16];     // x = colour KonstSel, y = alpha KonstSel
    uint4  tev_order[16];    // x = texmap, y = texcoord, z = enable texture
    uint   tev_num_stages;
    uint   tev_alpha_test;   // comp0 | comp1<<3 | logic<<6 | ref0<<8 | ref1<<16
    uint   tev_pad0, tev_pad1;
};

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
    float4 prev = float4(0.0f, 0.0f, 0.0f, 0.0f);
    float4 r0 = float4(0.0f, 0.0f, 0.0f, 0.0f);
    float4 r1 = float4(0.0f, 0.0f, 0.0f, 0.0f);
    float4 r2 = float4(0.0f, 0.0f, 0.0f, 0.0f);

    uint stages = min(tev_num_stages, 16u);
    [loop] for (uint s = 0; s < stages; s++) {
        uint4 cc = tev_color[s];
        uint4 ac = tev_color[s];
        uint cbits = cc.x;
        uint abits = ac.y;
        uint4 ks = tev_ksel[s];
        uint4 ord = tev_order[s];

        float4 texel = float4(1.0f, 1.0f, 1.0f, 1.0f);
        if (ord.z != 0u) {
            uint map = ord.x & 7u;
            texel = SampleTevTex(map, TevSelectUv(ord.w, input.uv, input.uv1));
        }

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
                              TevColorArg(carg.x, prev, r0, r1, r2, texel, ras, konst_c),
                              TevColorArg(carg.y, prev, r0, r1, r2, texel, ras, konst_c),
                              TevColorArg(carg.z, prev, r0, r1, r2, texel, ras, konst_c),
                              TevColorArg(cd,    prev, r0, r1, r2, texel, ras, konst_c),
                              cclamp);
        } else {
            rgb = TevRegular3(TevColorArg(carg.x, prev, r0, r1, r2, texel, ras, konst_c),
                              TevColorArg(carg.y, prev, r0, r1, r2, texel, ras, konst_c),
                              TevColorArg(carg.z, prev, r0, r1, r2, texel, ras, konst_c),
                              TevColorArg(cd,    prev, r0, r1, r2, texel, ras, konst_c),
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
        uint aarg = (abits >> 9) & 7;
        uint ab   = (abits >> 6) & 7;
        uint ac2  = (abits >> 3) & 7;
        uint ad   = abits & 7;
        uint abias= (abits >> 12) & 3;
        uint aop  = (abits >> 14) & 1;
        uint aclamp=(abits >> 15) & 1;
        uint ascale=(abits >> 16) & 3;
        uint adest= (abits >> 18) & 3;

        float alpha;
        if (abias == 3) {
            // compare stage: alpha mode A8 == RGB8 (3), same compare packing
            alpha = TevCompare1(ascale, aop,
                                TevAlphaArg4(aarg, prev, r0, r1, r2, texel, ras, konst_c),
                                TevAlphaArg4(ab,   prev, r0, r1, r2, texel, ras, konst_c),
                                TevAlphaArg4(ac2,  prev, r0, r1, r2, texel, ras, konst_c),
                                TevAlphaArg(ad,    prev, r0, r1, r2, texel, ras, konst_c),
                                aclamp);
        } else {
            alpha = TevRegular1(TevAlphaArg(aarg, prev, r0, r1, r2, texel, ras, konst_c),
                                TevAlphaArg(ab,   prev, r0, r1, r2, texel, ras, konst_c),
                                TevAlphaArg(ac2,  prev, r0, r1, r2, texel, ras, konst_c),
                                TevAlphaArg(ad,   prev, r0, r1, r2, texel, ras, konst_c),
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
ps_tev_bytecode = compile_hlsl(hlsl_source, "PSTev", "ps_5_0")

print(f"Compiled VS: {len(vs_bytecode)} bytes")
print(f"Compiled PSOpaque: {len(ps_opaque_bytecode)} bytes")
print(f"Compiled PSAlpha: {len(ps_alpha_bytecode)} bytes")
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

{to_c_array('s_gx_ps_tev_bytecode', ps_tev_bytecode)}

// Backward compatibility alias
#define s_gx_ps_bytecode s_gx_ps_alpha_bytecode
"""

with open("build/recomp/gx_shaders_d3d11.inl", "w") as f:
    f.write(out_text)

print("Saved build/recomp/gx_shaders_d3d11.inl successfully!")
