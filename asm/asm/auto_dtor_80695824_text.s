.include "macros.inc"
.file "auto_dtor_80695824_text"

# 0x80007BAC..0x80007BB4 | size: 0x8
.section extab, "a"
.balign 4

# extab:0x0 | 0x80007BAC | size: 0x8
.obj "@etb_80007BAC", local
.hidden "@etb_80007BAC"
/*
 * Flag values:
 * Has Elf Vector: No
 * Large Frame: Yes
 * Has Frame Pointer: No
 * Saved CR: No
 * Saved GPR range: r29-r31
 */
	.4byte 0x18080000
	.4byte 0x00000000
.endobj "@etb_80007BAC"

# 0x80008104..0x80008110 | size: 0xC
.section extabindex, "a"
.balign 4

# extabindex:0x0 | 0x80008104 | size: 0xC
.obj "@eti_80008104", local
.hidden "@eti_80008104"
	.4byte dtor_80695824
	.4byte 0x000000BC
	.4byte "@etb_80007BAC"
.endobj "@eti_80008104"

# 0x80695824..0x806958E0 | size: 0xBC
.text
.balign 4

# .text:0x0 | 0x80695824 | size: 0xBC
.fn dtor_80695824, global
/* 80695824 0068FE84  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80695828 0068FE88  7C 08 02 A6 */	mflr r0
/* 8069582C 0068FE8C  2C 03 00 00 */	cmpwi r3, 0x0
/* 80695830 0068FE90  90 01 00 24 */	stw r0, 0x24(r1)
/* 80695834 0068FE94  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80695838 0068FE98  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8069583C 0068FE9C  7C 9E 23 78 */	mr r30, r4
/* 80695840 0068FEA0  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80695844 0068FEA4  7C 7D 1B 78 */	mr r29, r3
/* 80695848 0068FEA8  41 82 00 78 */	beq .L_806958C0
/* 8069584C 0068FEAC  80 83 00 10 */	lwz r4, 0x10(r3)
/* 80695850 0068FEB0  80 03 00 08 */	lwz r0, 0x8(r3)
/* 80695854 0068FEB4  7C 04 00 40 */	cmplw r4, r0
/* 80695858 0068FEB8  40 80 00 58 */	bge .L_806958B0
/* 8069585C 0068FEBC  80 03 00 0C */	lwz r0, 0xc(r3)
/* 80695860 0068FEC0  2C 00 00 00 */	cmpwi r0, 0x0
/* 80695864 0068FEC4  41 82 00 4C */	beq .L_806958B0
/* 80695868 0068FEC8  80 03 00 04 */	lwz r0, 0x4(r3)
/* 8069586C 0068FECC  80 63 00 00 */	lwz r3, 0x0(r3)
/* 80695870 0068FED0  7C 00 21 D6 */	mullw r0, r0, r4
/* 80695874 0068FED4  7F E3 02 14 */	add r31, r3, r0
/* 80695878 0068FED8  48 00 00 2C */	b .L_806958A4
.L_8069587C:
/* 8069587C 0068FEDC  80 1D 00 04 */	lwz r0, 0x4(r29)
/* 80695880 0068FEE0  38 80 FF FF */	li r4, -0x1
/* 80695884 0068FEE4  81 9D 00 0C */	lwz r12, 0xc(r29)
/* 80695888 0068FEE8  7F E0 F8 50 */	subf r31, r0, r31
/* 8069588C 0068FEEC  7F E3 FB 78 */	mr r3, r31
/* 80695890 0068FEF0  7D 89 03 A6 */	mtctr r12
/* 80695894 0068FEF4  4E 80 04 21 */	bctrl
/* 80695898 0068FEF8  80 7D 00 10 */	lwz r3, 0x10(r29)
/* 8069589C 0068FEFC  38 03 FF FF */	subi r0, r3, 0x1
/* 806958A0 0068FF00  90 1D 00 10 */	stw r0, 0x10(r29)
.L_806958A4:
/* 806958A4 0068FF04  80 1D 00 10 */	lwz r0, 0x10(r29)
/* 806958A8 0068FF08  2C 00 00 00 */	cmpwi r0, 0x0
/* 806958AC 0068FF0C  40 82 FF D0 */	bne .L_8069587C
.L_806958B0:
/* 806958B0 0068FF10  2C 1E 00 00 */	cmpwi r30, 0x0
/* 806958B4 0068FF14  40 81 00 0C */	ble .L_806958C0
/* 806958B8 0068FF18  7F A3 EB 78 */	mr r3, r29
/* 806958BC 0068FF1C  4B 9E ED C9 */	bl dtor_80084684
.L_806958C0:
/* 806958C0 0068FF20  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 806958C4 0068FF24  7F A3 EB 78 */	mr r3, r29
/* 806958C8 0068FF28  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 806958CC 0068FF2C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 806958D0 0068FF30  80 01 00 24 */	lwz r0, 0x24(r1)
/* 806958D4 0068FF34  7C 08 03 A6 */	mtlr r0
/* 806958D8 0068FF38  38 21 00 20 */	addi r1, r1, 0x20
/* 806958DC 0068FF3C  4E 80 00 20 */	blr
.endfn dtor_80695824
