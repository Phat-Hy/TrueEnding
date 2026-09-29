.include "macros.inc"
.file "auto_fn_80725C80_text"

# 0x80725C80..0x80725C8C | size: 0xC
.text
.balign 4

# .text:0x0 | 0x80725C80 | size: 0xC
.fn fn_80725C80, global
/* 80725C80 007202E0  38 00 00 00 */	li r0, 0x0
/* 80725C84 007202E4  90 0D AE 80 */	stw r0, lbl_80880540@sda21(r0)
/* 80725C88 007202E8  4E 80 00 20 */	blr
.endfn fn_80725C80

# 0x8072D420..0x8072D424 | size: 0x4
.section .ctors, "a"
.balign 4
	.4byte fn_80725C80
