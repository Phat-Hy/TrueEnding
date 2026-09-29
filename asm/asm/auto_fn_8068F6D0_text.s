.include "macros.inc"
.file "auto_fn_8068F6D0_text"

# 0x800073A0..0x800073A8 | size: 0x8
.section extab, "a"
.balign 4

# extab:0x0 | 0x800073A0 | size: 0x8
.obj "@etb_800073A0", local
.hidden "@etb_800073A0"
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
.endobj "@etb_800073A0"

# 0x80007E88..0x80007E94 | size: 0xC
.section extabindex, "a"
.balign 4

# extabindex:0x0 | 0x80007E88 | size: 0xC
.obj "@eti_80007E88", local
.hidden "@eti_80007E88"
	.4byte fn_8068F6D0
	.4byte 0x0000007C
	.4byte "@etb_800073A0"
.endobj "@eti_80007E88"

# 0x8068F6D0..0x8068F74C | size: 0x7C
.text
.balign 4

# .text:0x0 | 0x8068F6D0 | size: 0x7C
.fn fn_8068F6D0, global
/* 8068F6D0 00689D30  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8068F6D4 00689D34  7C 08 02 A6 */	mflr r0
/* 8068F6D8 00689D38  90 01 00 14 */	stw r0, 0x14(r1)
/* 8068F6DC 00689D3C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8068F6E0 00689D40  7C 7F 1B 78 */	mr r31, r3
/* 8068F6E4 00689D44  88 03 00 37 */	lbz r0, 0x37(r3)
/* 8068F6E8 00689D48  2C 00 00 00 */	cmpwi r0, 0x0
/* 8068F6EC 00689D4C  41 82 00 14 */	beq .L_8068F700
/* 8068F6F0 00689D50  38 00 00 00 */	li r0, 0x0
/* 8068F6F4 00689D54  98 03 00 37 */	stb r0, 0x37(r3)
/* 8068F6F8 00689D58  88 63 00 34 */	lbz r3, 0x34(r3)
/* 8068F6FC 00689D5C  48 00 00 3C */	b .L_8068F738
.L_8068F700:
/* 8068F700 00689D60  38 80 00 01 */	li r4, 0x1
/* 8068F704 00689D64  48 00 07 59 */	bl fn_8068FE5C
/* 8068F708 00689D68  88 1F 00 36 */	lbz r0, 0x36(r31)
/* 8068F70C 00689D6C  38 80 00 00 */	li r4, 0x0
/* 8068F710 00689D70  2C 00 00 00 */	cmpwi r0, 0x0
/* 8068F714 00689D74  41 82 00 10 */	beq .L_8068F724
/* 8068F718 00689D78  2C 03 FF FF */	cmpwi r3, -0x1
/* 8068F71C 00689D7C  41 82 00 08 */	beq .L_8068F724
/* 8068F720 00689D80  38 80 00 01 */	li r4, 0x1
.L_8068F724:
/* 8068F724 00689D84  2C 04 00 00 */	cmpwi r4, 0x0
/* 8068F728 00689D88  41 82 00 10 */	beq .L_8068F738
/* 8068F72C 00689D8C  38 00 00 01 */	li r0, 0x1
/* 8068F730 00689D90  98 7F 00 34 */	stb r3, 0x34(r31)
/* 8068F734 00689D94  98 1F 00 38 */	stb r0, 0x38(r31)
.L_8068F738:
/* 8068F738 00689D98  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8068F73C 00689D9C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8068F740 00689DA0  7C 08 03 A6 */	mtlr r0
/* 8068F744 00689DA4  38 21 00 10 */	addi r1, r1, 0x10
/* 8068F748 00689DA8  4E 80 00 20 */	blr
.endfn fn_8068F6D0
