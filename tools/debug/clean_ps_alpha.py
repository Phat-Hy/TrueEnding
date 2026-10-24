with open("tools/compile_shaders.py", "r", encoding="utf-8") as f:
    text = f.read()

import re
old_block = re.search(r"float4 PSAlpha\(PSInput input\) : SV_Target \{[^}]+\}", text)
if old_block:
    new_block = """float4 PSAlpha(PSInput input) : SV_Target {
    float4 texColor = tex0.Sample(samLinear, input.uv);
    float alpha = texColor.a * input.color.a;
    // Discard invisible fragments to avoid Z/blend pollution
    if (alpha <= 0.005f) discard;
    return float4(texColor.rgb * input.color.rgb, alpha);
}"""
    text = text[:old_block.start()] + new_block + text[old_block.end():]
    with open("tools/compile_shaders.py", "w", encoding="utf-8") as f:
        f.write(text)
    print("Cleaned up PSAlpha in compile_shaders.py!")
else:
    print("Block not found!")
