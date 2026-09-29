.include "macros.inc"
.file "auto_fn_805AE250_text"

# 0x805AE250..0x805AE270 | size: 0x20
.text
.balign 4

# .text:0x0 | 0x805AE250 | size: 0x20
.fn fn_805AE250, global
/* 805AE250 005A88B0  3C 60 80 7D */	lis r3, lbl_807C95B0@ha
/* 805AE254 005A88B4  3C 80 80 22 */	lis r4, fn_80219EC4@ha
/* 805AE258 005A88B8  38 63 95 B0 */	addi r3, r3, lbl_807C95B0@l
/* 805AE25C 005A88BC  38 A0 00 00 */	li r5, 0x0
/* 805AE260 005A88C0  38 84 9E C4 */	addi r4, r4, fn_80219EC4@l
/* 805AE264 005A88C4  38 C0 00 D0 */	li r6, 0xd0
/* 805AE268 005A88C8  38 E0 00 06 */	li r7, 0x6
/* 805AE26C 005A88CC  48 0E 76 74 */	b fn_806958E0
.endfn fn_805AE250

# 0x8072D3E4..0x8072D3E8 | size: 0x4
.section .ctors, "a"
.balign 4
	.4byte fn_805AE250
