.include "macros.inc"
.file "auto_fn_80077058_text"

# 0x80077058..0x8007708C | size: 0x34
.text
.balign 4

# .text:0x0 | 0x80077058 | size: 0x34
.fn fn_80077058, global
/* 80077058 000716B8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8007705C 000716BC  7C 08 02 A6 */	mflr r0
/* 80077060 000716C0  3C 60 80 7C */	lis r3, lbl_807C6C08@ha
/* 80077064 000716C4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80077068 000716C8  38 63 6C 08 */	addi r3, r3, lbl_807C6C08@l
/* 8007706C 000716CC  48 05 F9 3D */	bl fn_800D69A8
/* 80077070 000716D0  3C 60 80 7C */	lis r3, lbl_807C6DB4@ha
/* 80077074 000716D4  38 63 6D B4 */	addi r3, r3, lbl_807C6DB4@l
/* 80077078 000716D8  48 05 FA 0D */	bl fn_800D6A84
/* 8007707C 000716DC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80077080 000716E0  7C 08 03 A6 */	mtlr r0
/* 80077084 000716E4  38 21 00 10 */	addi r1, r1, 0x10
/* 80077088 000716E8  4E 80 00 20 */	blr
.endfn fn_80077058

# 0x8072D2B0..0x8072D2B4 | size: 0x4
.section .ctors, "a"
.balign 4
	.4byte fn_80077058
