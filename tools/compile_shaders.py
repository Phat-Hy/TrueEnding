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
};

struct PSInput {
    float4 pos   : SV_Position;
    float2 uv    : TEXCOORD0;
    float4 color : COLOR0;
};

PSInput VSMain(VSInput input) {
    PSInput output;
    output.pos = input.pos;
    output.uv = input.uv;
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
"""

vs_bytecode = compile_hlsl(hlsl_source, "VSMain", "vs_4_0")
ps_opaque_bytecode = compile_hlsl(hlsl_source, "PSOpaque", "ps_4_0")
ps_alpha_bytecode = compile_hlsl(hlsl_source, "PSAlpha", "ps_4_0")

print(f"Compiled VS: {len(vs_bytecode)} bytes")
print(f"Compiled PSOpaque: {len(ps_opaque_bytecode)} bytes")
print(f"Compiled PSAlpha: {len(ps_alpha_bytecode)} bytes")

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

// Backward compatibility alias
#define s_gx_ps_bytecode s_gx_ps_alpha_bytecode
"""

with open("build/recomp/gx_shaders_d3d11.inl", "w") as f:
    f.write(out_text)

print("Saved build/recomp/gx_shaders_d3d11.inl successfully!")
