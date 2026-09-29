.include "macros.inc"
.file "auto_fn_8068F658_text"

# 0x80007398..0x800073A0 | size: 0x8
.section extab, "a"
.balign 4

# extab:0x0 | 0x80007398 | size: 0x8
.obj "@etb_80007398", local
.hidden "@etb_80007398"
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
.endobj "@etb_80007398"

# 0x80007E7C..0x80007E88 | size: 0xC
.section extabindex, "a"
.balign 4

# extabindex:0x0 | 0x80007E7C | size: 0xC
.obj "@eti_80007E7C", local
.hidden "@eti_80007E7C"
	.4byte fn_8068F658
	.4byte 0x00000078
	.4byte "@etb_80007398"
.endobj "@eti_80007E7C"

# 0x8068F658..0x8068F6D0 | size: 0x78
.text
.balign 4

# .text:0x0 | 0x8068F658 | size: 0x78
.fn fn_8068F658, global
/* 8068F658 00689CB8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8068F65C 00689CBC  7C 08 02 A6 */	mflr r0
/* 8068F660 00689CC0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8068F664 00689CC4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8068F668 00689CC8  7C 7F 1B 78 */	mr r31, r3
/* 8068F66C 00689CCC  88 03 00 37 */	lbz r0, 0x37(r3)
/* 8068F670 00689CD0  2C 00 00 00 */	cmpwi r0, 0x0
/* 8068F674 00689CD4  41 82 00 0C */	beq .L_8068F680
/* 8068F678 00689CD8  88 63 00 34 */	lbz r3, 0x34(r3)
/* 8068F67C 00689CDC  48 00 00 40 */	b .L_8068F6BC
.L_8068F680:
/* 8068F680 00689CE0  88 83 00 36 */	lbz r4, 0x36(r3)
/* 8068F684 00689CE4  48 00 07 D9 */	bl fn_8068FE5C
/* 8068F688 00689CE8  88 1F 00 36 */	lbz r0, 0x36(r31)
/* 8068F68C 00689CEC  38 80 00 00 */	li r4, 0x0
/* 8068F690 00689CF0  2C 00 00 00 */	cmpwi r0, 0x0
/* 8068F694 00689CF4  41 82 00 10 */	beq .L_8068F6A4
/* 8068F698 00689CF8  2C 03 FF FF */	cmpwi r3, -0x1
/* 8068F69C 00689CFC  41 82 00 08 */	beq .L_8068F6A4
/* 8068F6A0 00689D00  38 80 00 01 */	li r4, 0x1
.L_8068F6A4:
/* 8068F6A4 00689D04  2C 04 00 00 */	cmpwi r4, 0x0
/* 8068F6A8 00689D08  41 82 00 14 */	beq .L_8068F6BC
/* 8068F6AC 00689D0C  38 00 00 01 */	li r0, 0x1
/* 8068F6B0 00689D10  98 7F 00 34 */	stb r3, 0x34(r31)
/* 8068F6B4 00689D14  98 1F 00 37 */	stb r0, 0x37(r31)
/* 8068F6B8 00689D18  98 1F 00 38 */	stb r0, 0x38(r31)
.L_8068F6BC:
/* 8068F6BC 00689D1C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8068F6C0 00689D20  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8068F6C4 00689D24  7C 08 03 A6 */	mtlr r0
/* 8068F6C8 00689D28  38 21 00 10 */	addi r1, r1, 0x10
/* 8068F6CC 00689D2C  4E 80 00 20 */	blr
.endfn fn_8068F658
