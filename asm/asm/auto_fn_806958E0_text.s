.include "macros.inc"
.file "auto_fn_806958E0_text"

# 0x80007BB4..0x80007BCC | size: 0x18
.section extab, "a"
.balign 4

# extab:0x0 | 0x80007BB4 | size: 0x18
.obj "@etb_80007BB4", local
.hidden "@etb_80007BB4"
/*
 * Flag values:
 * Has Elf Vector: No
 * Large Frame: Yes
 * Has Frame Pointer: No
 * Saved CR: No
 * Saved GPR range: r28-r31
 * 
 * PC actions:
 * PC=0000005C, Action: 000010
 * 
 * Exception actions:
 * 000010:
 * Type: DESTROYLOCAL
 * Local: 0x8(SP)
 * Dtor: "dtor_80695824"
 * Has end bit
 */
	.4byte 0x20080000
	.4byte 0x0000005C
	.4byte 0x00000010
	.4byte 0x00000000
	.4byte 0x82000008
	.4byte dtor_80695824
.endobj "@etb_80007BB4"

# 0x80008110..0x8000811C | size: 0xC
.section extabindex, "a"
.balign 4

# extabindex:0x0 | 0x80008110 | size: 0xC
.obj "@eti_80008110", local
.hidden "@eti_80008110"
	.4byte fn_806958E0
	.4byte 0x000000F8
	.4byte "@etb_80007BB4"
.endobj "@eti_80008110"

# 0x806958E0..0x806959D8 | size: 0xF8
.text
.balign 4

# .text:0x0 | 0x806958E0 | size: 0xF8
.fn fn_806958E0, global
/* 806958E0 0068FF40  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 806958E4 0068FF44  7C 08 02 A6 */	mflr r0
/* 806958E8 0068FF48  90 01 00 34 */	stw r0, 0x34(r1)
/* 806958EC 0068FF4C  38 00 00 00 */	li r0, 0x0
/* 806958F0 0068FF50  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 806958F4 0068FF54  7C 7F 1B 78 */	mr r31, r3
/* 806958F8 0068FF58  93 C1 00 28 */	stw r30, 0x28(r1)
/* 806958FC 0068FF5C  7C FE 3B 78 */	mr r30, r7
/* 80695900 0068FF60  93 A1 00 24 */	stw r29, 0x24(r1)
/* 80695904 0068FF64  7C DD 33 78 */	mr r29, r6
/* 80695908 0068FF68  93 81 00 20 */	stw r28, 0x20(r1)
/* 8069590C 0068FF6C  7C 9C 23 78 */	mr r28, r4
/* 80695910 0068FF70  90 61 00 08 */	stw r3, 0x8(r1)
/* 80695914 0068FF74  90 C1 00 0C */	stw r6, 0xc(r1)
/* 80695918 0068FF78  90 E1 00 10 */	stw r7, 0x10(r1)
/* 8069591C 0068FF7C  90 A1 00 14 */	stw r5, 0x14(r1)
/* 80695920 0068FF80  90 01 00 18 */	stw r0, 0x18(r1)
/* 80695924 0068FF84  48 00 00 28 */	b .L_8069594C
.L_80695928:
/* 80695928 0068FF88  7F 8C E3 78 */	mr r12, r28
/* 8069592C 0068FF8C  7F E3 FB 78 */	mr r3, r31
/* 80695930 0068FF90  38 80 00 01 */	li r4, 0x1
/* 80695934 0068FF94  7D 89 03 A6 */	mtctr r12
/* 80695938 0068FF98  4E 80 04 21 */	bctrl
/* 8069593C 0068FF9C  80 61 00 18 */	lwz r3, 0x18(r1)
/* 80695940 0068FFA0  7F FF EA 14 */	add r31, r31, r29
/* 80695944 0068FFA4  38 03 00 01 */	addi r0, r3, 0x1
/* 80695948 0068FFA8  90 01 00 18 */	stw r0, 0x18(r1)
.L_8069594C:
/* 8069594C 0068FFAC  80 81 00 18 */	lwz r4, 0x18(r1)
/* 80695950 0068FFB0  7C 04 F0 40 */	cmplw r4, r30
/* 80695954 0068FFB4  41 80 FF D4 */	blt .L_80695928
/* 80695958 0068FFB8  80 01 00 10 */	lwz r0, 0x10(r1)
/* 8069595C 0068FFBC  7C 04 00 40 */	cmplw r4, r0
/* 80695960 0068FFC0  40 80 00 58 */	bge .L_806959B8
/* 80695964 0068FFC4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80695968 0068FFC8  2C 00 00 00 */	cmpwi r0, 0x0
/* 8069596C 0068FFCC  41 82 00 4C */	beq .L_806959B8
/* 80695970 0068FFD0  80 01 00 0C */	lwz r0, 0xc(r1)
/* 80695974 0068FFD4  80 61 00 08 */	lwz r3, 0x8(r1)
/* 80695978 0068FFD8  7C 00 21 D6 */	mullw r0, r0, r4
/* 8069597C 0068FFDC  7F E3 02 14 */	add r31, r3, r0
/* 80695980 0068FFE0  48 00 00 2C */	b .L_806959AC
.L_80695984:
/* 80695984 0068FFE4  80 01 00 0C */	lwz r0, 0xc(r1)
/* 80695988 0068FFE8  38 80 FF FF */	li r4, -0x1
/* 8069598C 0068FFEC  81 81 00 14 */	lwz r12, 0x14(r1)
/* 80695990 0068FFF0  7F E0 F8 50 */	subf r31, r0, r31
/* 80695994 0068FFF4  7F E3 FB 78 */	mr r3, r31
/* 80695998 0068FFF8  7D 89 03 A6 */	mtctr r12
/* 8069599C 0068FFFC  4E 80 04 21 */	bctrl
/* 806959A0 00690000  80 61 00 18 */	lwz r3, 0x18(r1)
/* 806959A4 00690004  38 03 FF FF */	subi r0, r3, 0x1
/* 806959A8 00690008  90 01 00 18 */	stw r0, 0x18(r1)
.L_806959AC:
/* 806959AC 0069000C  80 01 00 18 */	lwz r0, 0x18(r1)
/* 806959B0 00690010  2C 00 00 00 */	cmpwi r0, 0x0
/* 806959B4 00690014  40 82 FF D0 */	bne .L_80695984
.L_806959B8:
/* 806959B8 00690018  80 01 00 34 */	lwz r0, 0x34(r1)
/* 806959BC 0069001C  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 806959C0 00690020  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 806959C4 00690024  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 806959C8 00690028  83 81 00 20 */	lwz r28, 0x20(r1)
/* 806959CC 0069002C  7C 08 03 A6 */	mtlr r0
/* 806959D0 00690030  38 21 00 30 */	addi r1, r1, 0x30
/* 806959D4 00690034  4E 80 00 20 */	blr
.endfn fn_806958E0
