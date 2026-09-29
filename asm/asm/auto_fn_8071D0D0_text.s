.include "macros.inc"
.file "auto_fn_8071D0D0_text"

# 0x8071D0D0..0x8071D0DC | size: 0xC
.text
.balign 4

# .text:0x0 | 0x8071D0D0 | size: 0xC
.fn fn_8071D0D0, global
/* 8071D0D0 00717730  38 0D AD F0 */	li r0, lbl_808804B0@sda21
/* 8071D0D4 00717734  90 0D AE 40 */	stw r0, lbl_80880500@sda21(r0)
/* 8071D0D8 00717738  4E 80 00 20 */	blr
.endfn fn_8071D0D0

# 0x8072D418..0x8072D41C | size: 0x4
.section .ctors, "a"
.balign 4
	.4byte fn_8071D0D0
