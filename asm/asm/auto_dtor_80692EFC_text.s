.include "macros.inc"
.file "auto_dtor_80692EFC_text"

# 0x800079B8..0x800079C0 | size: 0x8
.section extab, "a"
.balign 4

# extab:0x0 | 0x800079B8 | size: 0x8
.obj "@etb_800079B8", local
.hidden "@etb_800079B8"
/*
 * Flag values:
 * Has Elf Vector: No
 * Large Frame: Yes
 * Has Frame Pointer: No
 * Saved CR: No
 * Saved GPR range: r30-r31
 */
	.4byte 0x10080000
	.4byte 0x00000000
.endobj "@etb_800079B8"

# 0x80008008..0x80008014 | size: 0xC
.section extabindex, "a"
.balign 4

# extabindex:0x0 | 0x80008008 | size: 0xC
.obj "@eti_80008008", local
.hidden "@eti_80008008"
	.4byte dtor_80692EFC
	.4byte 0x0000007C
	.4byte "@etb_800079B8"
.endobj "@eti_80008008"

# 0x80692EFC..0x80692F78 | size: 0x7C
.text
.balign 4

# .text:0x0 | 0x80692EFC | size: 0x7C
.fn dtor_80692EFC, global
/* 80692EFC 0068D55C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80692F00 0068D560  7C 08 02 A6 */	mflr r0
/* 80692F04 0068D564  2C 03 00 00 */	cmpwi r3, 0x0
/* 80692F08 0068D568  90 01 00 14 */	stw r0, 0x14(r1)
/* 80692F0C 0068D56C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80692F10 0068D570  7C 9F 23 78 */	mr r31, r4
/* 80692F14 0068D574  93 C1 00 08 */	stw r30, 0x8(r1)
/* 80692F18 0068D578  7C 7E 1B 78 */	mr r30, r3
/* 80692F1C 0068D57C  41 82 00 40 */	beq .L_80692F5C
/* 80692F20 0068D580  41 82 00 2C */	beq .L_80692F4C
/* 80692F24 0068D584  41 82 00 28 */	beq .L_80692F4C
/* 80692F28 0068D588  41 82 00 24 */	beq .L_80692F4C
/* 80692F2C 0068D58C  80 83 00 00 */	lwz r4, 0x0(r3)
/* 80692F30 0068D590  2C 04 00 00 */	cmpwi r4, 0x0
/* 80692F34 0068D594  41 82 00 18 */	beq .L_80692F4C
/* 80692F38 0068D598  80 03 00 04 */	lwz r0, 0x4(r3)
/* 80692F3C 0068D59C  7C 00 00 50 */	subf r0, r0, r0
/* 80692F40 0068D5A0  90 03 00 04 */	stw r0, 0x4(r3)
/* 80692F44 0068D5A4  7C 83 23 78 */	mr r3, r4
/* 80692F48 0068D5A8  4B 9F 17 3D */	bl dtor_80084684
.L_80692F4C:
/* 80692F4C 0068D5AC  2C 1F 00 00 */	cmpwi r31, 0x0
/* 80692F50 0068D5B0  40 81 00 0C */	ble .L_80692F5C
/* 80692F54 0068D5B4  7F C3 F3 78 */	mr r3, r30
/* 80692F58 0068D5B8  4B 9F 17 2D */	bl dtor_80084684
.L_80692F5C:
/* 80692F5C 0068D5BC  7F C3 F3 78 */	mr r3, r30
/* 80692F60 0068D5C0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80692F64 0068D5C4  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 80692F68 0068D5C8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80692F6C 0068D5CC  7C 08 03 A6 */	mtlr r0
/* 80692F70 0068D5D0  38 21 00 10 */	addi r1, r1, 0x10
/* 80692F74 0068D5D4  4E 80 00 20 */	blr
.endfn dtor_80692EFC
