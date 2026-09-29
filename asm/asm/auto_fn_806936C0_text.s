.include "macros.inc"
.file "auto_fn_806936C0_text"

# 0x800079D0..0x800079D8 | size: 0x8
.section extab, "a"
.balign 4

# extab:0x0 | 0x800079D0 | size: 0x8
.obj "@etb_800079D0", local
.hidden "@etb_800079D0"
/*
 * Flag values:
 * Has Elf Vector: No
 * Large Frame: Yes
 * Has Frame Pointer: No
 * Saved CR: No
 * Saved GPR range: r27-r31
 */
	.4byte 0x28080000
	.4byte 0x00000000
.endobj "@etb_800079D0"

# 0x8000802C..0x80008038 | size: 0xC
.section extabindex, "a"
.balign 4

# extabindex:0x0 | 0x8000802C | size: 0xC
.obj "@eti_8000802C", local
.hidden "@eti_8000802C"
	.4byte fn_806936C0
	.4byte 0x00000070
	.4byte "@etb_800079D0"
.endobj "@eti_8000802C"

# 0x806936C0..0x80693730 | size: 0x70
.text
.balign 4

# .text:0x0 | 0x806936C0 | size: 0x70
.fn fn_806936C0, global
/* 806936C0 0068DD20  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 806936C4 0068DD24  7C 08 02 A6 */	mflr r0
/* 806936C8 0068DD28  90 01 00 24 */	stw r0, 0x24(r1)
/* 806936CC 0068DD2C  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 806936D0 0068DD30  7C 7B 1B 78 */	mr r27, r3
/* 806936D4 0068DD34  7C 9C 23 78 */	mr r28, r4
/* 806936D8 0068DD38  7C BD 2B 78 */	mr r29, r5
/* 806936DC 0068DD3C  7C DE 33 78 */	mr r30, r6
/* 806936E0 0068DD40  7C FF 3B 78 */	mr r31, r7
/* 806936E4 0068DD44  48 00 00 2C */	b .L_80693710
.L_806936E8:
/* 806936E8 0068DD48  81 9B 00 00 */	lwz r12, 0x0(r27)
/* 806936EC 0068DD4C  7F 63 DB 78 */	mr r3, r27
/* 806936F0 0068DD50  7F C5 07 74 */	extsb r5, r30
/* 806936F4 0068DD54  A0 9C 00 00 */	lhz r4, 0x0(r28)
/* 806936F8 0068DD58  81 8C 00 34 */	lwz r12, 0x34(r12)
/* 806936FC 0068DD5C  7D 89 03 A6 */	mtctr r12
/* 80693700 0068DD60  3B 9C 00 02 */	addi r28, r28, 0x2
/* 80693704 0068DD64  4E 80 04 21 */	bctrl
/* 80693708 0068DD68  98 7F 00 00 */	stb r3, 0x0(r31)
/* 8069370C 0068DD6C  3B FF 00 01 */	addi r31, r31, 0x1
.L_80693710:
/* 80693710 0068DD70  7C 1C E8 40 */	cmplw r28, r29
/* 80693714 0068DD74  41 80 FF D4 */	blt .L_806936E8
/* 80693718 0068DD78  7F A3 EB 78 */	mr r3, r29
/* 8069371C 0068DD7C  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 80693720 0068DD80  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80693724 0068DD84  7C 08 03 A6 */	mtlr r0
/* 80693728 0068DD88  38 21 00 20 */	addi r1, r1, 0x20
/* 8069372C 0068DD8C  4E 80 00 20 */	blr
.endfn fn_806936C0
