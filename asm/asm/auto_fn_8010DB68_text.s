.include "macros.inc"
.file "auto_fn_8010DB68_text"

# 0x8010DB68..0x8010DB88 | size: 0x20
.text
.balign 4

# .text:0x0 | 0x8010DB68 | size: 0x20
.fn fn_8010DB68, global
/* 8010DB68 001081C8  3C 60 80 7C */	lis r3, lbl_807C7858@ha
/* 8010DB6C 001081CC  3C 80 80 11 */	lis r4, fn_8010DB88@ha
/* 8010DB70 001081D0  38 63 78 58 */	addi r3, r3, lbl_807C7858@l
/* 8010DB74 001081D4  38 A0 00 00 */	li r5, 0x0
/* 8010DB78 001081D8  38 84 DB 88 */	addi r4, r4, fn_8010DB88@l
/* 8010DB7C 001081DC  38 C0 00 04 */	li r6, 0x4
/* 8010DB80 001081E0  38 E0 00 03 */	li r7, 0x3
/* 8010DB84 001081E4  48 58 7D 5C */	b fn_806958E0
.endfn fn_8010DB68

# 0x8072D2CC..0x8072D2D0 | size: 0x4
.section .ctors, "a"
.balign 4
	.4byte fn_8010DB68
