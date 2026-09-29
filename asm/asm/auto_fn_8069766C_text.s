.include "macros.inc"
.file "auto_fn_8069766C_text"

# 0x80007C3C..0x80007C44 | size: 0x8
.section extab, "a"
.balign 4

# extab:0x0 | 0x80007C3C | size: 0x8
.obj "@etb_80007C3C", local
.hidden "@etb_80007C3C"
/*
 * Flag values:
 * Has Elf Vector: No
 * Large Frame: Yes
 * Has Frame Pointer: No
 * Saved CR: No
 * Saved GPR range: r31
 */
	.4byte 0x08080000
	.4byte 0x00000000
.endobj "@etb_80007C3C"

# 0x8000817C..0x80008188 | size: 0xC
.section extabindex, "a"
.balign 4

# extabindex:0x0 | 0x8000817C | size: 0xC
.obj "@eti_8000817C", local
.hidden "@eti_8000817C"
	.4byte fn_8069766C
	.4byte 0x00000040
	.4byte "@etb_80007C3C"
.endobj "@eti_8000817C"

# 0x8069766C..0x806976AC | size: 0x40
.text
.balign 4

# .text:0x0 | 0x8069766C | size: 0x40
.fn fn_8069766C, global
/* 8069766C 00691CCC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80697670 00691CD0  7C 08 02 A6 */	mflr r0
/* 80697674 00691CD4  2C 03 00 00 */	cmpwi r3, 0x0
/* 80697678 00691CD8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8069767C 00691CDC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80697680 00691CE0  7C 7F 1B 78 */	mr r31, r3
/* 80697684 00691CE4  41 82 00 10 */	beq .L_80697694
/* 80697688 00691CE8  2C 04 00 00 */	cmpwi r4, 0x0
/* 8069768C 00691CEC  40 81 00 08 */	ble .L_80697694
/* 80697690 00691CF0  4B 9E CF F5 */	bl dtor_80084684
.L_80697694:
/* 80697694 00691CF4  7F E3 FB 78 */	mr r3, r31
/* 80697698 00691CF8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8069769C 00691CFC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 806976A0 00691D00  7C 08 03 A6 */	mtlr r0
/* 806976A4 00691D04  38 21 00 10 */	addi r1, r1, 0x10
/* 806976A8 00691D08  4E 80 00 20 */	blr
.endfn fn_8069766C
