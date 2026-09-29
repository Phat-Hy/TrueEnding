.include "macros.inc"
.file "auto_fn_8068C440_text"

# 0x80006AE8..0x80006B04 | size: 0x1C
.section extab, "a"
.balign 4

# extab:0x0 | 0x80006AE8 | size: 0x1C
.obj "@etb_80006AE8", local
.hidden "@etb_80006AE8"
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
.endobj "@etb_80006AE8"

# 0x80007D20..0x80007D2C | size: 0xC
.section extabindex, "a"
.balign 4

# extabindex:0x0 | 0x80007D20 | size: 0xC
.obj "@eti_80007D20", local
.hidden "@eti_80007D20"
	.4byte fn_8068C440
	.4byte 0x00000078
	.4byte "@etb_80006AE8"
.endobj "@eti_80007D20"

# 0x8068C440..0x8068C4B8 | size: 0x78
.text
.balign 4

# .text:0x0 | 0x8068C440 | size: 0x78
.fn fn_8068C440, global
/* 8068C440 00686AA0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8068C444 00686AA4  7C 08 02 A6 */	mflr r0
/* 8068C448 00686AA8  2C 03 00 00 */	cmpwi r3, 0x0
/* 8068C44C 00686AAC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8068C450 00686AB0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8068C454 00686AB4  7C 9F 23 78 */	mr r31, r4
/* 8068C458 00686AB8  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8068C45C 00686ABC  7C 7E 1B 78 */	mr r30, r3
/* 8068C460 00686AC0  41 82 00 3C */	beq .L_8068C49C
/* 8068C464 00686AC4  80 A3 00 00 */	lwz r5, 0x0(r3)
/* 8068C468 00686AC8  38 63 00 0C */	addi r3, r3, 0xc
/* 8068C46C 00686ACC  2C 04 00 00 */	cmpwi r4, 0x0
/* 8068C470 00686AD0  7C 05 18 50 */	subf r0, r5, r3
/* 8068C474 00686AD4  90 05 00 3C */	stw r0, 0x3c(r5)
/* 8068C478 00686AD8  41 82 00 14 */	beq .L_8068C48C
/* 8068C47C 00686ADC  2C 03 00 00 */	cmpwi r3, 0x0
/* 8068C480 00686AE0  41 82 00 0C */	beq .L_8068C48C
/* 8068C484 00686AE4  38 80 00 00 */	li r4, 0x0
/* 8068C488 00686AE8  4B FF F0 85 */	bl fn_8068B50C
.L_8068C48C:
/* 8068C48C 00686AEC  2C 1F 00 00 */	cmpwi r31, 0x0
/* 8068C490 00686AF0  40 81 00 0C */	ble .L_8068C49C
/* 8068C494 00686AF4  7F C3 F3 78 */	mr r3, r30
/* 8068C498 00686AF8  4B 9F 81 ED */	bl dtor_80084684
.L_8068C49C:
/* 8068C49C 00686AFC  7F C3 F3 78 */	mr r3, r30
/* 8068C4A0 00686B00  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8068C4A4 00686B04  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8068C4A8 00686B08  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8068C4AC 00686B0C  7C 08 03 A6 */	mtlr r0
/* 8068C4B0 00686B10  38 21 00 10 */	addi r1, r1, 0x10
/* 8068C4B4 00686B14  4E 80 00 20 */	blr
.endfn fn_8068C440
