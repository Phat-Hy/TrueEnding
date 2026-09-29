.include "macros.inc"
.file "auto_fn_80725D90_text"

# 0x80725D90..0x80725D9C | size: 0xC
.text
.balign 4

# .text:0x0 | 0x80725D90 | size: 0xC
.fn fn_80725D90, global
/* 80725D90 007203F0  38 0D AE 80 */	li r0, lbl_80880540@sda21
/* 80725D94 007203F4  90 0D AE 88 */	stw r0, lbl_80880548@sda21(r0)
/* 80725D98 007203F8  4E 80 00 20 */	blr
.endfn fn_80725D90

# 0x8072D424..0x8072D428 | size: 0x4
.section .ctors, "a"
.balign 4
	.4byte fn_80725D90
