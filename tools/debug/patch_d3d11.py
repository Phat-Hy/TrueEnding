with open('recomp/gfx_d3d11.c', 'rb') as f:
    content = f.read().decode('utf-8')

old_blend_logic = """                    uint8_t src_factor = batch->src_factor;
                    uint8_t dst_factor = batch->dst_factor;
                    bool blend_enable = batch->blend_enable;
                    // 2D UI elements (fonts, icons, frames, banners, background layers) require alpha blending
                    if (!batch->is_perspective) {
                        if (batch->has_texture || dst_factor != 0) {
                            blend_enable = true;
                            if (dst_factor == 0) {
                                src_factor = 4; // GX_BL_SRCA
                                dst_factor = 5; // GX_BL_INVSRCA
                            }
                        }
                    }
                    if (dst_factor == 1) { // Additive blending (particles, glows)
                        blend_enable = true;
                    }

                    if (blend_enable && src_factor == 0 && dst_factor == 0) {
                        src_factor = 4; // GX_BL_SRCA
                        dst_factor = 5; // GX_BL_INVSRCA
                    }"""

new_blend_logic = """                    uint8_t src_factor = batch->src_factor;
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
                    }"""

old_ps = "ID3D11PixelShader* ps = blend_enable ? s_d3d11.gx_ps_alpha : s_d3d11.gx_ps_opaque;"
new_ps = "ID3D11PixelShader* ps = (blend_enable || !batch->is_perspective) ? s_d3d11.gx_ps_alpha : s_d3d11.gx_ps_opaque;"

if old_blend_logic in content:
    content = content.replace(old_blend_logic, new_blend_logic)
    print("Updated blend logic")
elif old_blend_logic.replace('\n', '\r\n') in content:
    content = content.replace(old_blend_logic.replace('\n', '\r\n'), new_blend_logic.replace('\n', '\r\n'))
    print("Updated blend logic (CRLF)")
else:
    print("ERROR: old_blend_logic not found")

if old_ps in content:
    content = content.replace(old_ps, new_ps)
    print("Updated pixel shader selection")
elif old_ps.replace('\n', '\r\n') in content:
    content = content.replace(old_ps.replace('\n', '\r\n'), new_ps.replace('\n', '\r\n'))
    print("Updated pixel shader selection (CRLF)")
else:
    print("ERROR: old_ps not found")

with open('recomp/gfx_d3d11.c', 'wb') as f:
    f.write(content.encode('utf-8'))
