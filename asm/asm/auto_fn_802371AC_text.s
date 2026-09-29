.include "macros.inc"
.file "auto_fn_802371AC_text"

# 0x802371AC..0x802371BC | size: 0x10
.text
.balign 4

# .text:0x0 | 0x802371AC | size: 0x10
.fn fn_802371AC, global
/* 802371AC 0023180C  80 0D 85 38 */	lwz r0, lbl_8087DBF8@sda21(r0)
/* 802371B0 00231810  54 00 18 38 */	slwi r0, r0, 3
/* 802371B4 00231814  90 0D 9C B8 */	stw r0, lbl_8087F378@sda21(r0)
/* 802371B8 00231818  4E 80 00 20 */	blr
.endfn fn_802371AC

# 0x8072D314..0x8072D318 | size: 0x4
.section .ctors, "a"
.balign 4
	.4byte fn_802371AC
