.include "macros.inc"
.file "auto_fn_800B6684_text"

# 0x800B6684..0x800B66A4 | size: 0x20
.text
.balign 4

# .text:0x0 | 0x800B6684 | size: 0x20
.fn fn_800B6684, global
/* 800B6684 000B0CE4  3C 60 80 7C */	lis r3, lbl_807C74A0@ha
/* 800B6688 000B0CE8  3C 80 80 05 */	lis r4, fn_80057A64@ha
/* 800B668C 000B0CEC  38 63 74 A0 */	addi r3, r3, lbl_807C74A0@l
/* 800B6690 000B0CF0  38 A0 00 00 */	li r5, 0x0
/* 800B6694 000B0CF4  38 84 7A 64 */	addi r4, r4, fn_80057A64@l
/* 800B6698 000B0CF8  38 C0 00 0C */	li r6, 0xc
/* 800B669C 000B0CFC  38 E0 00 10 */	li r7, 0x10
/* 800B66A0 000B0D00  48 5D F2 40 */	b fn_806958E0
.endfn fn_800B6684

# 0x8072D2BC..0x8072D2C0 | size: 0x4
.section .ctors, "a"
.balign 4
	.4byte fn_800B6684
