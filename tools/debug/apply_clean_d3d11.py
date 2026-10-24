with open('recomp/gfx_d3d11.c', 'rb') as f:
    c = f.read()

# 1. Update line 818
old_zero = b'bool is_all_zero = (nonzero_cnt <= 16 || nonzero_cnt <= (total_px / 500));'
new_zero = b'bool is_all_zero = (nonzero_cnt == 0);'
if old_zero in c:
    c = c.replace(old_zero, new_zero)
    print('Updated is_all_zero check')
else:
    print('ERROR: old_zero not found')

# 2. Remove lines 1231-1270 (fullscreen skip)
# Read exact lines around 1230-1271
start_marker = b'                    if (batch->vertex_count <= 64) {\n'
end_marker = b'                    }\n\n                    if (take_shot || s_d3d11.frame_counter == 150'

if start_marker not in c:
    start_marker = start_marker.replace(b'\n', b'\r\n')
    end_marker = end_marker.replace(b'\n', b'\r\n')

s_idx = c.find(start_marker)
e_idx = c.find(end_marker)

if s_idx != -1 and e_idx != -1:
    c = c[:s_idx] + c[e_idx + len(b'                    }\n\n'):]
    print('Removed fullscreen skip code block!')
else:
    print(f'ERROR: markers not found (s={s_idx}, e={e_idx})')

# 3. Clean blend logic
old_blend = b'''                    uint8_t src_factor = batch->src_factor;
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

new_blend = b'''                    uint8_t src_factor = batch->src_factor;
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
    print('Updated blend logic')
elif old_blend.replace(b'\n', b'\r\n') in c:
    c = c.replace(old_blend.replace(b'\n', b'\r\n'), new_blend.replace(b'\n', b'\r\n'))
    print('Updated blend logic (CRLF)')
else:
    print('ERROR: old_blend not found')

# 4. Clean pixel shader selection
old_ps = b'ID3D11PixelShader* ps = (blend_enable || !batch->is_perspective) ? s_d3d11.gx_ps_alpha : s_d3d11.gx_ps_opaque;'
new_ps = b'ID3D11PixelShader* ps = blend_enable ? s_d3d11.gx_ps_alpha : s_d3d11.gx_ps_opaque;'

if old_ps in c:
    c = c.replace(old_ps, new_ps)
    print('Updated pixel shader selection')
elif old_ps.replace(b'\n', b'\r\n') in c:
    c = c.replace(old_ps.replace(b'\n', b'\r\n'), new_ps.replace(b'\n', b'\r\n'))
    print('Updated pixel shader selection (CRLF)')
else:
    print('ERROR: old_ps not found')

with open('recomp/gfx_d3d11.c', 'wb') as f:
    f.write(c)

print('Saved recomp/gfx_d3d11.c')
