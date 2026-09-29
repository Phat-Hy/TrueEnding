.include "macros.inc"
.file "auto_fn_801F33A8_text"

# 0x801F33A8..0x801F33D4 | size: 0x2C
.text
.balign 4

# .text:0x0 | 0x801F33A8 | size: 0x2C
.fn fn_801F33A8, global
/* 801F33A8 001EDA08  3C C0 80 7C */	lis r6, lbl_807C7F74@ha
/* 801F33AC 001EDA0C  38 00 00 00 */	li r0, 0x0
/* 801F33B0 001EDA10  38 66 7F 74 */	addi r3, r6, lbl_807C7F74@l
/* 801F33B4 001EDA14  3C 80 80 1F */	lis r4, fn_801F33D4@ha
/* 801F33B8 001EDA18  3C A0 80 7C */	lis r5, lbl_807C7F68@ha
/* 801F33BC 001EDA1C  90 06 7F 74 */	stw r0, lbl_807C7F74@l(r6)
/* 801F33C0 001EDA20  38 84 33 D4 */	addi r4, r4, fn_801F33D4@l
/* 801F33C4 001EDA24  90 03 00 04 */	stw r0, 0x4(r3)
/* 801F33C8 001EDA28  38 A5 7F 68 */	addi r5, r5, lbl_807C7F68@l
/* 801F33CC 001EDA2C  90 03 00 08 */	stw r0, 0x8(r3)
/* 801F33D0 001EDA30  48 4A 20 50 */	b __register_global_object
.endfn fn_801F33A8

# 0x8072D2FC..0x8072D300 | size: 0x4
.section .ctors, "a"
.balign 4
	.4byte fn_801F33A8
