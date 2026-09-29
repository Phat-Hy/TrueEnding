.include "macros.inc"
.file "auto_fn_80695A50_text"

# 0x80007BD4..0x80007BDC | size: 0x8
.section extab, "a"
.balign 4

# extab:0x0 | 0x80007BD4 | size: 0x8
.obj "@etb_80007BD4", local
.hidden "@etb_80007BD4"
/*
 * Flag values:
 * Has Elf Vector: No
 * Large Frame: Yes
 * Has Frame Pointer: No
 * Saved CR: No
 * Saved GPR range: r26-r31
 */
	.4byte 0x30080000
	.4byte 0x00000000
.endobj "@etb_80007BD4"

# 0x80008128..0x80008134 | size: 0xC
.section extabindex, "a"
.balign 4

# extabindex:0x0 | 0x80008128 | size: 0xC
.obj "@eti_80008128", local
.hidden "@eti_80008128"
	.4byte fn_80695A50
	.4byte 0x00000080
	.4byte "@etb_80007BD4"
.endobj "@eti_80008128"

# 0x80695A50..0x80695AD0 | size: 0x80
.text
.balign 4

# .text:0x0 | 0x80695A50 | size: 0x80
.fn fn_80695A50, global
/* 80695A50 006900B0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80695A54 006900B4  7C 08 02 A6 */	mflr r0
/* 80695A58 006900B8  2C 03 00 00 */	cmpwi r3, 0x0
/* 80695A5C 006900BC  90 01 00 24 */	stw r0, 0x24(r1)
/* 80695A60 006900C0  BF 41 00 08 */	stmw r26, 0x8(r1)
/* 80695A64 006900C4  7C 7A 1B 78 */	mr r26, r3
/* 80695A68 006900C8  7C 9B 23 78 */	mr r27, r4
/* 80695A6C 006900CC  41 82 00 50 */	beq .L_80695ABC
/* 80695A70 006900D0  2C 04 00 00 */	cmpwi r4, 0x0
/* 80695A74 006900D4  41 82 00 40 */	beq .L_80695AB4
/* 80695A78 006900D8  83 A3 FF F0 */	lwz r29, -0x10(r3)
/* 80695A7C 006900DC  3B E0 00 00 */	li r31, 0x0
/* 80695A80 006900E0  83 C3 FF F4 */	lwz r30, -0xc(r3)
/* 80695A84 006900E4  7C 1D F1 D6 */	mullw r0, r29, r30
/* 80695A88 006900E8  7F 83 02 14 */	add r28, r3, r0
/* 80695A8C 006900EC  48 00 00 20 */	b .L_80695AAC
.L_80695A90:
/* 80695A90 006900F0  7F 9D E0 50 */	subf r28, r29, r28
/* 80695A94 006900F4  7F 6C DB 78 */	mr r12, r27
/* 80695A98 006900F8  7F 83 E3 78 */	mr r3, r28
/* 80695A9C 006900FC  38 80 FF FF */	li r4, -0x1
/* 80695AA0 00690100  7D 89 03 A6 */	mtctr r12
/* 80695AA4 00690104  4E 80 04 21 */	bctrl
/* 80695AA8 00690108  3B FF 00 01 */	addi r31, r31, 0x1
.L_80695AAC:
/* 80695AAC 0069010C  7C 1F F0 40 */	cmplw r31, r30
/* 80695AB0 00690110  41 80 FF E0 */	blt .L_80695A90
.L_80695AB4:
/* 80695AB4 00690114  38 7A FF F0 */	subi r3, r26, 0x10
/* 80695AB8 00690118  4B 9E F1 6D */	bl fn_80084C24
.L_80695ABC:
/* 80695ABC 0069011C  BB 41 00 08 */	lmw r26, 0x8(r1)
/* 80695AC0 00690120  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80695AC4 00690124  7C 08 03 A6 */	mtlr r0
/* 80695AC8 00690128  38 21 00 20 */	addi r1, r1, 0x20
/* 80695ACC 0069012C  4E 80 00 20 */	blr
.endfn fn_80695A50
