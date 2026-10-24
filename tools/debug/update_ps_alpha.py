with open("tools/compile_shaders.py", "r", encoding="utf-8") as f:
    text = f.read()

import re
old_ps_alpha = re.search(r"float4 PSAlpha\(PSInput input\) : SV_Target \{[^}]+\}", text)
if old_ps_alpha:
    new_ps_alpha = """float4 PSAlpha(PSInput input) : SV_Target {
    float4 texColor = tex0.Sample(samLinear, input.uv);
    // On GameCube GX, textures without an alpha channel (CMPR text, additive particle shines)
    // have texColor.a == 0.0. The alpha is carried by the luminance of the RGB glyph/glow.
    // Textures with a valid alpha channel (RGBA8, IA8, I4/I8 font atlases, opaque artwork) have texColor.a > 0.01f.
    float luma = max(texColor.r, max(texColor.g, texColor.b));
    float texA = (texColor.a > 0.01f) ? texColor.a : luma;
    float alpha = texA * input.color.a;
    // Discard invisible fragments to avoid Z/blend pollution
    if (alpha <= 0.005f) discard;
    return float4(texColor.rgb * input.color.rgb, alpha);
}"""
    text = text[:old_ps_alpha.start()] + new_ps_alpha + text[old_ps_alpha.end():]
    with open("tools/compile_shaders.py", "w", encoding="utf-8") as f:
        f.write(text)
    print("Updated PSAlpha with luminance fallback for alpha-less CMPR glyphs!")
else:
    print("PSAlpha block not found!")
