with open("recomp/gfx_d3d11.c", "r", encoding="utf-8") as f:
    text = f.read()

old_code = """        bool is_particle_size = (tu->width <= 256 && tu->height <= 256 && tu->width >= 8 && tu->height >= 8);
        bool not_ui_banner = (tu->guest_addr != 0x90782DE0 && tu->guest_addr != 0x9078EF60 && tu->guest_addr != 0x9078AEE0 && tu->guest_addr != 0x904E5EE0);
        if (tu->format == 14 && is_particle_size && not_ui_banner) {"""

new_code = """        bool is_sparkle = (tu->guest_addr == 0x907427C0 || tu->guest_addr == 0x9076C200);
        if (tu->format == 14 && is_sparkle) {"""

if old_code in text:
    text = text.replace(old_code, new_code)
    with open("recomp/gfx_d3d11.c", "w", encoding="utf-8") as f:
        f.write(text)
    print("Updated recomp/gfx_d3d11.c successfully!")
else:
    print("Target not found in recomp/gfx_d3d11.c!")
