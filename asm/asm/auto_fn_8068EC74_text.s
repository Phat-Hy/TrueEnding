.include "macros.inc"
.file "auto_fn_8068EC74_text"

# 0x800072D0..0x800072D8 | size: 0x8
.section extab, "a"
.balign 4

# extab:0x0 | 0x800072D0 | size: 0x8
.obj "@etb_800072D0", local
.hidden "@etb_800072D0"
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
.endobj "@etb_800072D0"

# 0x80007E34..0x80007E40 | size: 0xC
.section extabindex, "a"
.balign 4

# extabindex:0x0 | 0x80007E34 | size: 0xC
.obj "@eti_80007E34", local
.hidden "@eti_80007E34"
	.4byte fn_8068EC74
	.4byte 0x00000080
	.4byte "@etb_800072D0"
.endobj "@eti_80007E34"

# 0x8068EC74..0x8068ECF4 | size: 0x80
.text
.balign 4

# .text:0x0 | 0x8068EC74 | size: 0x80
.fn fn_8068EC74, global
/* 8068EC74 006892D4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8068EC78 006892D8  7C 08 02 A6 */	mflr r0
/* 8068EC7C 006892DC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8068EC80 006892E0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8068EC84 006892E4  7C 7F 1B 78 */	mr r31, r3
/* 8068EC88 006892E8  88 03 00 38 */	lbz r0, 0x38(r3)
/* 8068EC8C 006892EC  2C 00 00 00 */	cmpwi r0, 0x0
/* 8068EC90 006892F0  41 82 00 14 */	beq .L_8068ECA4
/* 8068EC94 006892F4  38 00 00 00 */	li r0, 0x0
/* 8068EC98 006892F8  98 03 00 38 */	stb r0, 0x38(r3)
/* 8068EC9C 006892FC  A0 63 00 34 */	lhz r3, 0x34(r3)
/* 8068ECA0 00689300  48 00 00 40 */	b .L_8068ECE0
.L_8068ECA4:
/* 8068ECA4 00689304  38 80 00 01 */	li r4, 0x1
/* 8068ECA8 00689308  48 00 07 69 */	bl fn_8068F410
/* 8068ECAC 0068930C  88 1F 00 37 */	lbz r0, 0x37(r31)
/* 8068ECB0 00689310  38 80 00 00 */	li r4, 0x0
/* 8068ECB4 00689314  2C 00 00 00 */	cmpwi r0, 0x0
/* 8068ECB8 00689318  41 82 00 14 */	beq .L_8068ECCC
/* 8068ECBC 0068931C  54 60 04 3E */	clrlwi r0, r3, 16
/* 8068ECC0 00689320  28 00 FF FF */	cmplwi r0, 0xffff
/* 8068ECC4 00689324  41 82 00 08 */	beq .L_8068ECCC
/* 8068ECC8 00689328  38 80 00 01 */	li r4, 0x1
.L_8068ECCC:
/* 8068ECCC 0068932C  2C 04 00 00 */	cmpwi r4, 0x0
/* 8068ECD0 00689330  41 82 00 10 */	beq .L_8068ECE0
/* 8068ECD4 00689334  38 00 00 01 */	li r0, 0x1
/* 8068ECD8 00689338  B0 7F 00 34 */	sth r3, 0x34(r31)
/* 8068ECDC 0068933C  98 1F 00 39 */	stb r0, 0x39(r31)
.L_8068ECE0:
/* 8068ECE0 00689340  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8068ECE4 00689344  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8068ECE8 00689348  7C 08 03 A6 */	mtlr r0
/* 8068ECEC 0068934C  38 21 00 10 */	addi r1, r1, 0x10
/* 8068ECF0 00689350  4E 80 00 20 */	blr
.endfn fn_8068EC74
