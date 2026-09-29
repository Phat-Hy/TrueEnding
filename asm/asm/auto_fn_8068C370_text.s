.include "macros.inc"
.file "auto_fn_8068C370_text"

# 0x80006AC4..0x80006AE0 | size: 0x1C
.section extab, "a"
.balign 4

# extab:0x0 | 0x80006AC4 | size: 0x1C
.obj "@etb_80006AC4", local
.hidden "@etb_80006AC4"
/*
 * Flag values:
 * Has Elf Vector: No
 * Large Frame: Yes
 * Has Frame Pointer: No
 * Saved CR: No
 * Saved GPR range: r30-r31
 * 
 * PC actions:
 * PC=0000004C, Action: 000010
 * 
 * Exception actions:
 * 000010:
 * Type: DESTROYBASE
 * Member: 0x0(r30)
 * Dtor: "dtor_8068C3E8"
 * Has end bit
 */
	.4byte 0x10080000
	.4byte 0x0000004C
	.4byte 0x00000010
	.4byte 0x00000000
	.4byte 0x8680001E
	.4byte 0x00000000
	.4byte dtor_8068C3E8
.endobj "@etb_80006AC4"

# 0x80007D08..0x80007D14 | size: 0xC
.section extabindex, "a"
.balign 4

# extabindex:0x0 | 0x80007D08 | size: 0xC
.obj "@eti_80007D08", local
.hidden "@eti_80007D08"
	.4byte fn_8068C370
	.4byte 0x00000078
	.4byte "@etb_80006AC4"
.endobj "@eti_80007D08"

# 0x8068C370..0x8068C3E8 | size: 0x78
.text
.balign 4

# .text:0x0 | 0x8068C370 | size: 0x78
.fn fn_8068C370, global
/* 8068C370 006869D0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8068C374 006869D4  7C 08 02 A6 */	mflr r0
/* 8068C378 006869D8  2C 03 00 00 */	cmpwi r3, 0x0
/* 8068C37C 006869DC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8068C380 006869E0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8068C384 006869E4  7C 9F 23 78 */	mr r31, r4
/* 8068C388 006869E8  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8068C38C 006869EC  7C 7E 1B 78 */	mr r30, r3
/* 8068C390 006869F0  41 82 00 3C */	beq .L_8068C3CC
/* 8068C394 006869F4  80 A3 00 00 */	lwz r5, 0x0(r3)
/* 8068C398 006869F8  38 63 00 08 */	addi r3, r3, 0x8
/* 8068C39C 006869FC  2C 04 00 00 */	cmpwi r4, 0x0
/* 8068C3A0 00686A00  7C 05 18 50 */	subf r0, r5, r3
/* 8068C3A4 00686A04  90 05 00 3C */	stw r0, 0x3c(r5)
/* 8068C3A8 00686A08  41 82 00 14 */	beq .L_8068C3BC
/* 8068C3AC 00686A0C  2C 03 00 00 */	cmpwi r3, 0x0
/* 8068C3B0 00686A10  41 82 00 0C */	beq .L_8068C3BC
/* 8068C3B4 00686A14  38 80 00 00 */	li r4, 0x0
/* 8068C3B8 00686A18  4B FF F1 55 */	bl fn_8068B50C
.L_8068C3BC:
/* 8068C3BC 00686A1C  2C 1F 00 00 */	cmpwi r31, 0x0
/* 8068C3C0 00686A20  40 81 00 0C */	ble .L_8068C3CC
/* 8068C3C4 00686A24  7F C3 F3 78 */	mr r3, r30
/* 8068C3C8 00686A28  4B 9F 82 BD */	bl dtor_80084684
.L_8068C3CC:
/* 8068C3CC 00686A2C  7F C3 F3 78 */	mr r3, r30
/* 8068C3D0 00686A30  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8068C3D4 00686A34  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8068C3D8 00686A38  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8068C3DC 00686A3C  7C 08 03 A6 */	mtlr r0
/* 8068C3E0 00686A40  38 21 00 10 */	addi r1, r1, 0x10
/* 8068C3E4 00686A44  4E 80 00 20 */	blr
.endfn fn_8068C370
