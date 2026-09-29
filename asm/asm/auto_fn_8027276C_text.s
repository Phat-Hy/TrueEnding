.include "macros.inc"
.file "auto_fn_8027276C_text"

# 0x8027276C..0x8027278C | size: 0x20
.text
.balign 4

# .text:0x0 | 0x8027276C | size: 0x20
.fn fn_8027276C, global
/* 8027276C 0026CDCC  3C 60 80 7D */	lis r3, lbl_807C8350@ha
/* 80272770 0026CDD0  3C 80 80 05 */	lis r4, fn_80057A64@ha
/* 80272774 0026CDD4  38 63 83 50 */	addi r3, r3, lbl_807C8350@l
/* 80272778 0026CDD8  38 A0 00 00 */	li r5, 0x0
/* 8027277C 0026CDDC  38 84 7A 64 */	addi r4, r4, fn_80057A64@l
/* 80272780 0026CDE0  38 C0 00 0C */	li r6, 0xc
/* 80272784 0026CDE4  38 E0 00 06 */	li r7, 0x6
/* 80272788 0026CDE8  48 42 31 58 */	b fn_806958E0
.endfn fn_8027276C

# 0x8072D32C..0x8072D330 | size: 0x4
.section .ctors, "a"
.balign 4
	.4byte fn_8027276C
