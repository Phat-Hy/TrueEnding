.include "macros.inc"
.file "auto_fn_8068BAC0_text"

# 0x800068E4..0x8000690C | size: 0x28
.section extab, "a"
.balign 4

# extab:0x0 | 0x800068E4 | size: 0x28
.obj "@etb_800068E4", local
.hidden "@etb_800068E4"
/*
 * Flag values:
 * Has Elf Vector: No
 * Large Frame: Yes
 * Has Frame Pointer: Yes
 * Saved CR: No
 * Saved GPR range: r29-r31
 * 
 * PC actions:
 * PC=0000004C, Action: 000018
 * PC=00000058, Action: 000024
 * 
 * Exception actions:
 * 000018:
 * Type: SPECIFICATION
 * Local: 0x8(FP)
 * PC: 00000050
 * Types: 0
 * Has end bit
 * 000024:
 * Type: ACTIVECATCHBLOCK
 * Local: 0x8(FP)
 * Has end bit
 */
	.4byte 0x18180000
	.4byte 0x0000004C
	.4byte 0x00000018
	.4byte 0x00000058
	.4byte 0x00000024
	.4byte 0x00000000
	.4byte 0x8F000000
	.4byte 0x00000050
	.4byte 0x00000008
	.4byte 0x8D000008
.endobj "@etb_800068E4"

# 0x80007CA8..0x80007CB4 | size: 0xC
.section extabindex, "a"
.balign 4

# extabindex:0x0 | 0x80007CA8 | size: 0xC
.obj "@eti_80007CA8", local
.hidden "@eti_80007CA8"
	.4byte fn_8068BAC0
	.4byte 0x00000094
	.4byte "@etb_800068E4"
.endobj "@eti_80007CA8"

# 0x8068BAC0..0x8068BB54 | size: 0x94
.text
.balign 4

# .text:0x0 | 0x8068BAC0 | size: 0x94
.fn fn_8068BAC0, global
/* 8068BAC0 00686120  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8068BAC4 00686124  7C 08 02 A6 */	mflr r0
/* 8068BAC8 00686128  2C 03 00 00 */	cmpwi r3, 0x0
/* 8068BACC 0068612C  90 01 00 34 */	stw r0, 0x34(r1)
/* 8068BAD0 00686130  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8068BAD4 00686134  7C 3F 0B 78 */	mr r31, r1
/* 8068BAD8 00686138  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8068BADC 0068613C  7C 9E 23 78 */	mr r30, r4
/* 8068BAE0 00686140  93 A1 00 24 */	stw r29, 0x24(r1)
/* 8068BAE4 00686144  7C 7D 1B 78 */	mr r29, r3
/* 8068BAE8 00686148  41 82 00 44 */	beq .L_8068BB2C
/* 8068BAEC 0068614C  41 82 00 30 */	beq .L_8068BB1C
/* 8068BAF0 00686150  34 63 00 1C */	addic. r3, r3, 0x1c
/* 8068BAF4 00686154  41 82 00 28 */	beq .L_8068BB1C
/* 8068BAF8 00686158  41 82 00 24 */	beq .L_8068BB1C
/* 8068BAFC 0068615C  80 63 00 04 */	lwz r3, 0x4(r3)
/* 8068BB00 00686160  2C 03 00 00 */	cmpwi r3, 0x0
/* 8068BB04 00686164  41 82 00 18 */	beq .L_8068BB1C
/* 8068BB08 00686168  48 00 97 BD */	bl fn_806952C4
/* 8068BB0C 0068616C  48 00 00 10 */	b .L_8068BB1C
/* 8068BB10 00686170  38 7F 00 08 */	addi r3, r31, 0x8
/* 8068BB14 00686174  48 00 B9 A1 */	bl fn_806974B4
.L_8068BB18:
/* 8068BB18 00686178  48 00 00 00 */	b .L_8068BB18
.L_8068BB1C:
/* 8068BB1C 0068617C  7F C0 07 35 */	extsh. r0, r30
/* 8068BB20 00686180  40 81 00 0C */	ble .L_8068BB2C
/* 8068BB24 00686184  7F A3 EB 78 */	mr r3, r29
/* 8068BB28 00686188  4B 9F 8B 5D */	bl dtor_80084684
.L_8068BB2C:
/* 8068BB2C 0068618C  7F EA FB 78 */	mr r10, r31
/* 8068BB30 00686190  83 FF 00 2C */	lwz r31, 0x2c(r31)
/* 8068BB34 00686194  7F A3 EB 78 */	mr r3, r29
/* 8068BB38 00686198  83 CA 00 28 */	lwz r30, 0x28(r10)
/* 8068BB3C 0068619C  83 AA 00 24 */	lwz r29, 0x24(r10)
/* 8068BB40 006861A0  81 41 00 00 */	lwz r10, 0x0(r1)
/* 8068BB44 006861A4  80 0A 00 04 */	lwz r0, 0x4(r10)
/* 8068BB48 006861A8  7D 41 53 78 */	mr r1, r10
/* 8068BB4C 006861AC  7C 08 03 A6 */	mtlr r0
/* 8068BB50 006861B0  4E 80 00 20 */	blr
.endfn fn_8068BAC0
