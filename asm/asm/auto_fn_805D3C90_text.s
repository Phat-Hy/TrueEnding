.include "macros.inc"
.file "auto_fn_805D3C90_text"

# 0x805D3C90..0x805D3CA0 | size: 0x10
.text
.balign 4

# .text:0x0 | 0x805D3C90 | size: 0x10
.fn fn_805D3C90, global
/* 805D3C90 005CE2F0  3C 60 80 7D */	lis r3, lbl_807CA200@ha
/* 805D3C94 005CE2F4  38 00 00 00 */	li r0, 0x0
/* 805D3C98 005CE2F8  90 03 A2 00 */	stw r0, lbl_807CA200@l(r3)
/* 805D3C9C 005CE2FC  4E 80 00 20 */	blr
.endfn fn_805D3C90

# 0x8072D3EC..0x8072D3F0 | size: 0x4
.section .ctors, "a"
.balign 4
	.4byte fn_805D3C90
