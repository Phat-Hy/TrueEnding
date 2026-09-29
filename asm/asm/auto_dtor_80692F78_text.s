.include "macros.inc"
.file "auto_dtor_80692F78_text"

# 0x800079C0..0x800079C8 | size: 0x8
.section extab, "a"
.balign 4

# extab:0x0 | 0x800079C0 | size: 0x8
.obj "@etb_800079C0", local
.hidden "@etb_800079C0"
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
.endobj "@etb_800079C0"

# 0x80008014..0x80008020 | size: 0xC
.section extabindex, "a"
.balign 4

# extabindex:0x0 | 0x80008014 | size: 0xC
.obj "@eti_80008014", local
.hidden "@eti_80008014"
	.4byte dtor_80692F78
	.4byte 0x0000007C
	.4byte "@etb_800079C0"
.endobj "@eti_80008014"

# 0x80692F78..0x80692FF4 | size: 0x7C
.text
.balign 4

# .text:0x0 | 0x80692F78 | size: 0x7C
.fn dtor_80692F78, global
/* 80692F78 0068D5D8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80692F7C 0068D5DC  7C 08 02 A6 */	mflr r0
/* 80692F80 0068D5E0  2C 03 00 00 */	cmpwi r3, 0x0
/* 80692F84 0068D5E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80692F88 0068D5E8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80692F8C 0068D5EC  7C 9F 23 78 */	mr r31, r4
/* 80692F90 0068D5F0  93 C1 00 08 */	stw r30, 0x8(r1)
/* 80692F94 0068D5F4  7C 7E 1B 78 */	mr r30, r3
/* 80692F98 0068D5F8  41 82 00 40 */	beq .L_80692FD8
/* 80692F9C 0068D5FC  41 82 00 2C */	beq .L_80692FC8
/* 80692FA0 0068D600  41 82 00 28 */	beq .L_80692FC8
/* 80692FA4 0068D604  41 82 00 24 */	beq .L_80692FC8
/* 80692FA8 0068D608  80 83 00 00 */	lwz r4, 0x0(r3)
/* 80692FAC 0068D60C  2C 04 00 00 */	cmpwi r4, 0x0
/* 80692FB0 0068D610  41 82 00 18 */	beq .L_80692FC8
/* 80692FB4 0068D614  80 03 00 04 */	lwz r0, 0x4(r3)
/* 80692FB8 0068D618  7C 00 00 50 */	subf r0, r0, r0
/* 80692FBC 0068D61C  90 03 00 04 */	stw r0, 0x4(r3)
/* 80692FC0 0068D620  7C 83 23 78 */	mr r3, r4
/* 80692FC4 0068D624  4B 9F 16 C1 */	bl dtor_80084684
.L_80692FC8:
/* 80692FC8 0068D628  2C 1F 00 00 */	cmpwi r31, 0x0
/* 80692FCC 0068D62C  40 81 00 0C */	ble .L_80692FD8
/* 80692FD0 0068D630  7F C3 F3 78 */	mr r3, r30
/* 80692FD4 0068D634  4B 9F 16 B1 */	bl dtor_80084684
.L_80692FD8:
/* 80692FD8 0068D638  7F C3 F3 78 */	mr r3, r30
/* 80692FDC 0068D63C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80692FE0 0068D640  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 80692FE4 0068D644  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80692FE8 0068D648  7C 08 03 A6 */	mtlr r0
/* 80692FEC 0068D64C  38 21 00 10 */	addi r1, r1, 0x10
/* 80692FF0 0068D650  4E 80 00 20 */	blr
.endfn dtor_80692F78
