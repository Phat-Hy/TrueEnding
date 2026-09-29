.include "macros.inc"
.file "auto_fn_8069298C_text"

# 0x80007960..0x80007968 | size: 0x8
.section extab, "a"
.balign 4

# extab:0x0 | 0x80007960 | size: 0x8
.obj "@etb_80007960", local
.hidden "@etb_80007960"
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
.endobj "@etb_80007960"

# 0x80007FD8..0x80007FE4 | size: 0xC
.section extabindex, "a"
.balign 4

# extabindex:0x0 | 0x80007FD8 | size: 0xC
.obj "@eti_80007FD8", local
.hidden "@eti_80007FD8"
	.4byte fn_8069298C
	.4byte 0x00000070
	.4byte "@etb_80007960"
.endobj "@eti_80007FD8"

# 0x8069298C..0x806929FC | size: 0x70
.text
.balign 4

# .text:0x0 | 0x8069298C | size: 0x70
.fn fn_8069298C, global
/* 8069298C 0068CFEC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80692990 0068CFF0  7C 08 02 A6 */	mflr r0
/* 80692994 0068CFF4  2C 03 00 00 */	cmpwi r3, 0x0
/* 80692998 0068CFF8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8069299C 0068CFFC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 806929A0 0068D000  7C 9F 23 78 */	mr r31, r4
/* 806929A4 0068D004  93 C1 00 08 */	stw r30, 0x8(r1)
/* 806929A8 0068D008  7C 7E 1B 78 */	mr r30, r3
/* 806929AC 0068D00C  41 82 00 34 */	beq .L_806929E0
/* 806929B0 0068D010  88 03 00 14 */	lbz r0, 0x14(r3)
/* 806929B4 0068D014  3C 80 80 7C */	lis r4, lbl_807BBECC@ha
/* 806929B8 0068D018  38 84 BE CC */	addi r4, r4, lbl_807BBECC@l
/* 806929BC 0068D01C  90 83 00 00 */	stw r4, 0x0(r3)
/* 806929C0 0068D020  2C 00 00 00 */	cmpwi r0, 0x0
/* 806929C4 0068D024  41 82 00 0C */	beq .L_806929D0
/* 806929C8 0068D028  80 63 00 08 */	lwz r3, 0x8(r3)
/* 806929CC 0068D02C  4B 9F 22 59 */	bl fn_80084C24
.L_806929D0:
/* 806929D0 0068D030  2C 1F 00 00 */	cmpwi r31, 0x0
/* 806929D4 0068D034  40 81 00 0C */	ble .L_806929E0
/* 806929D8 0068D038  7F C3 F3 78 */	mr r3, r30
/* 806929DC 0068D03C  4B 9F 1C A9 */	bl dtor_80084684
.L_806929E0:
/* 806929E0 0068D040  7F C3 F3 78 */	mr r3, r30
/* 806929E4 0068D044  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 806929E8 0068D048  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 806929EC 0068D04C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 806929F0 0068D050  7C 08 03 A6 */	mtlr r0
/* 806929F4 0068D054  38 21 00 10 */	addi r1, r1, 0x10
/* 806929F8 0068D058  4E 80 00 20 */	blr
.endfn fn_8069298C
