import re

with open('recomp/gfx_d3d11.c', 'rb') as f:
    c = f.read()

# 1. Remove artificial fullscreen skip (lines 1231-1270)
skip_pattern = rb'''                    if \(batch->vertex_count <= 64\) \{.*?                    \}'''
# Check if pattern matches
m = re.search(skip_pattern, c, re.DOTALL)
if m:
    c = c[:m.start()] + c[m.end():]
    print('Removed fullscreen skip logic!')
else:
    print('ERROR: could not find skip_pattern')

# 2. Clean blend logic
old_blend = rb'''                    uint8_t src_factor = batch->src_factor;
                    uint8_t dst_factor = batch->dst_factor;
                    bool blend_enable = batch->blend_enable;

                    // Enable alpha blending whenever destination factor requires it:
                    // dst_factor == 1: ONE (additive blending - particles, glows)
                    // dst_factor == 5: INV_SRC_ALPHA (standard alpha blending - UI, fonts, particles)
                    // dst_factor == 7: INV_DEST_ALPHA
                    // When dst_factor is 0 (ZERO), the batch is opaque (e.g. 2D backgrounds, solid terrain)
                    if (dst_factor == 1 || dst_factor == 5 || dst_factor == 7 || (!batch->is_perspective && (dst_factor != 0 || (batch->has_texture && batch->tex.format == 0)))) {
                        blend_enable = true;
                        if (dst_factor == 0) {
                            src_factor = 4; // GX_BL_SRCA
                            dst_factor = 5; // GX_BL_INVSRCA
                        }
                    }

                    if (blend_enable && src_factor == 0 && dst_factor == 0) {
                        src_factor = 4; // GX_BL_SRCA
                        dst_factor = 5; // GX_BL_INVSRCA
                    }'''

new_blend = rb'''                    uint8_t src_factor = batch->src_factor;
                    uint8_t dst_factor = batch->dst_factor;
                    bool blend_enable = batch->blend_enable;

                    // Standard GX blending rules:
                    // - Additive blending (particles, glows): dst_factor == 1
                    // - Alpha blending (UI, transparent meshes): dst_factor == 5 or 7
                    // - Alpha-bearing 2D text and icons: formats 0 (I4), 1 (I8), 2 (IA4), 3 (IA8), 5 (RGB5A3)
                    // - When dst_factor == 0 and !blend_enable: batch is opaque (2D backgrounds, opaque 3D terrain)
                    if (dst_factor == 1 || dst_factor == 5 || dst_factor == 7) {
                        blend_enable = true;
                    } else if (!batch->is_perspective && batch->has_texture && (batch->tex.format == 0 || batch->tex.format == 1 || batch->tex.format == 2 || batch->tex.format == 3 || batch->tex.format == 5)) {
                        blend_enable = true;
                        if (dst_factor == 0) {
                            src_factor = 4; // GX_BL_SRCA
                            dst_factor = 5; // GX_BL_INVSRCA
                        }
                    }'''

if old_blend in c:
    c = c.replace(old_blend, new_blend)
    print('Updated blend logic!')
elif old_blend.replace(b'\n', b'\r\n') in c:
    c = c.replace(old_blend.replace(b'\n', b'\r\n'), new_blend.replace(b'\n', b'\r\n'))
    print('Updated blend logic (CRLF)!')
else:
    print('ERROR: could not find old_blend')

# 3. Clean pixel shader selection
old_ps = rb'ID3D11PixelShader* ps = (blend_enable || !batch->is_perspective) ? s_d3d11.gx_ps_alpha : s_d3d11.gx_ps_opaque;'
new_ps = rb'ID3D11PixelShader* ps = blend_enable ? s_d3d11.gx_ps_alpha : s_d3d11.gx_ps_opaque;'

if old_ps in c:
    c = c.replace(old_ps, new_ps)
    print('Updated pixel shader selection!')
elif old_ps.replace(b'\n', b'\r\n') in c:
    c = c.replace(old_ps.replace(b'\n', b'\r\n'), new_ps.replace(b'\n', b'\r\n'))
    print('Updated pixel shader selection (CRLF)!')
else:
    print('ERROR: could not find old_ps')

with open('recomp/gfx_d3d11.c', 'wb') as f:
    f.write(c)

print('Saved recomp/gfx_d3d11.c')
