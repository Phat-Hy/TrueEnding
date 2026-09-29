.include "macros.inc"
.file "auto_fn_806959D8_text"

# 0x80007BCC..0x80007BD4 | size: 0x8
.section extab, "a"
.balign 4

# extab:0x0 | 0x80007BCC | size: 0x8
.obj "@etb_80007BCC", local
.hidden "@etb_80007BCC"
/*
 * Flag values:
 * Has Elf Vector: No
 * Large Frame: Yes
 * Has Frame Pointer: No
 * Saved CR: No
 * Saved GPR range: r28-r31
 */
	.4byte 0x20080000
	.4byte 0x00000000
.endobj "@etb_80007BCC"

# 0x8000811C..0x80008128 | size: 0xC
.section extabindex, "a"
.balign 4

# extabindex:0x0 | 0x8000811C | size: 0xC
.obj "@eti_8000811C", local
.hidden "@eti_8000811C"
	.4byte fn_806959D8
	.4byte 0x00000078
	.4byte "@etb_80007BCC"
.endobj "@eti_8000811C"

# 0x806959D8..0x80695A50 | size: 0x78
.text
.balign 4

# .text:0x0 | 0x806959D8 | size: 0x78
.fn fn_806959D8, global
/* 806959D8 00690038  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 806959DC 0069003C  7C 08 02 A6 */	mflr r0
/* 806959E0 00690040  90 01 00 24 */	stw r0, 0x24(r1)
/* 806959E4 00690044  7C 05 31 D6 */	mullw r0, r5, r6
/* 806959E8 00690048  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 806959EC 0069004C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 806959F0 00690050  7C DE 33 78 */	mr r30, r6
/* 806959F4 00690054  7F E3 02 14 */	add r31, r3, r0
/* 806959F8 00690058  93 A1 00 14 */	stw r29, 0x14(r1)
/* 806959FC 0069005C  7C BD 2B 78 */	mr r29, r5
/* 80695A00 00690060  93 81 00 10 */	stw r28, 0x10(r1)
/* 80695A04 00690064  7C 9C 23 78 */	mr r28, r4
/* 80695A08 00690068  48 00 00 20 */	b .L_80695A28
.L_80695A0C:
/* 80695A0C 0069006C  7F FD F8 50 */	subf r31, r29, r31
/* 80695A10 00690070  7F 8C E3 78 */	mr r12, r28
/* 80695A14 00690074  7F E3 FB 78 */	mr r3, r31
/* 80695A18 00690078  38 80 FF FF */	li r4, -0x1
/* 80695A1C 0069007C  7D 89 03 A6 */	mtctr r12
/* 80695A20 00690080  4E 80 04 21 */	bctrl
/* 80695A24 00690084  3B DE FF FF */	subi r30, r30, 0x1
.L_80695A28:
/* 80695A28 00690088  2C 1E 00 00 */	cmpwi r30, 0x0
/* 80695A2C 0069008C  40 82 FF E0 */	bne .L_80695A0C
/* 80695A30 00690090  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80695A34 00690094  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80695A38 00690098  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80695A3C 0069009C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80695A40 006900A0  83 81 00 10 */	lwz r28, 0x10(r1)
/* 80695A44 006900A4  7C 08 03 A6 */	mtlr r0
/* 80695A48 006900A8  38 21 00 20 */	addi r1, r1, 0x20
/* 80695A4C 006900AC  4E 80 00 20 */	blr
.endfn fn_806959D8
