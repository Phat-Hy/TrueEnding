.include "macros.inc"
.file "auto_fn_807263D0_text"

# 0x807263D0..0x807263DC | size: 0xC
.text
.balign 4

# .text:0x0 | 0x807263D0 | size: 0xC
.fn fn_807263D0, global
/* 807263D0 00720A30  38 0D AE 88 */	li r0, lbl_80880548@sda21
/* 807263D4 00720A34  90 0D AE 90 */	stw r0, lbl_80880550@sda21(r0)
/* 807263D8 00720A38  4E 80 00 20 */	blr
.endfn fn_807263D0

# 0x8072D428..0x8072D42C | size: 0x4
.section .ctors, "a"
.balign 4
	.4byte fn_807263D0
