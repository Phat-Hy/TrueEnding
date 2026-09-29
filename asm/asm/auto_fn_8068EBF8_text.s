.include "macros.inc"
.file "auto_fn_8068EBF8_text"

# 0x800072C8..0x800072D0 | size: 0x8
.section extab, "a"
.balign 4

# extab:0x0 | 0x800072C8 | size: 0x8
.obj "@etb_800072C8", local
.hidden "@etb_800072C8"
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
.endobj "@etb_800072C8"

# 0x80007E28..0x80007E34 | size: 0xC
.section extabindex, "a"
.balign 4

# extabindex:0x0 | 0x80007E28 | size: 0xC
.obj "@eti_80007E28", local
.hidden "@eti_80007E28"
	.4byte fn_8068EBF8
	.4byte 0x0000007C
	.4byte "@etb_800072C8"
.endobj "@eti_80007E28"

# 0x8068EBF8..0x8068EC74 | size: 0x7C
.text
.balign 4

# .text:0x0 | 0x8068EBF8 | size: 0x7C
.fn fn_8068EBF8, global
/* 8068EBF8 00689258  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8068EBFC 0068925C  7C 08 02 A6 */	mflr r0
/* 8068EC00 00689260  90 01 00 14 */	stw r0, 0x14(r1)
/* 8068EC04 00689264  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8068EC08 00689268  7C 7F 1B 78 */	mr r31, r3
/* 8068EC0C 0068926C  88 03 00 38 */	lbz r0, 0x38(r3)
/* 8068EC10 00689270  2C 00 00 00 */	cmpwi r0, 0x0
/* 8068EC14 00689274  41 82 00 0C */	beq .L_8068EC20
/* 8068EC18 00689278  A0 63 00 34 */	lhz r3, 0x34(r3)
/* 8068EC1C 0068927C  48 00 00 44 */	b .L_8068EC60
.L_8068EC20:
/* 8068EC20 00689280  88 83 00 37 */	lbz r4, 0x37(r3)
/* 8068EC24 00689284  48 00 07 ED */	bl fn_8068F410
/* 8068EC28 00689288  88 1F 00 37 */	lbz r0, 0x37(r31)
/* 8068EC2C 0068928C  38 80 00 00 */	li r4, 0x0
/* 8068EC30 00689290  2C 00 00 00 */	cmpwi r0, 0x0
/* 8068EC34 00689294  41 82 00 14 */	beq .L_8068EC48
/* 8068EC38 00689298  54 60 04 3E */	clrlwi r0, r3, 16
/* 8068EC3C 0068929C  28 00 FF FF */	cmplwi r0, 0xffff
/* 8068EC40 006892A0  41 82 00 08 */	beq .L_8068EC48
/* 8068EC44 006892A4  38 80 00 01 */	li r4, 0x1
.L_8068EC48:
/* 8068EC48 006892A8  2C 04 00 00 */	cmpwi r4, 0x0
/* 8068EC4C 006892AC  41 82 00 14 */	beq .L_8068EC60
/* 8068EC50 006892B0  38 00 00 01 */	li r0, 0x1
/* 8068EC54 006892B4  B0 7F 00 34 */	sth r3, 0x34(r31)
/* 8068EC58 006892B8  98 1F 00 38 */	stb r0, 0x38(r31)
/* 8068EC5C 006892BC  98 1F 00 39 */	stb r0, 0x39(r31)
.L_8068EC60:
/* 8068EC60 006892C0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8068EC64 006892C4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8068EC68 006892C8  7C 08 03 A6 */	mtlr r0
/* 8068EC6C 006892CC  38 21 00 10 */	addi r1, r1, 0x10
/* 8068EC70 006892D0  4E 80 00 20 */	blr
.endfn fn_8068EBF8
