.include "macros.inc"
.file "auto_fn_8068F9B8_text"

# 0x800073B0..0x800073B8 | size: 0x8
.section extab, "a"
.balign 4

# extab:0x0 | 0x800073B0 | size: 0x8
.obj "@etb_800073B0", local
.hidden "@etb_800073B0"
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
.endobj "@etb_800073B0"

# 0x80007EA0..0x80007EAC | size: 0xC
.section extabindex, "a"
.balign 4

# extabindex:0x0 | 0x80007EA0 | size: 0xC
.obj "@eti_80007EA0", local
.hidden "@eti_80007EA0"
	.4byte fn_8068F9B8
	.4byte 0x00000090
	.4byte "@etb_800073B0"
.endobj "@eti_80007EA0"

# 0x8068F9B8..0x8068FA48 | size: 0x90
.text
.balign 4

# .text:0x0 | 0x8068F9B8 | size: 0x90
.fn fn_8068F9B8, global
/* 8068F9B8 0068A018  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8068F9BC 0068A01C  7C 08 02 A6 */	mflr r0
/* 8068F9C0 0068A020  90 01 00 24 */	stw r0, 0x24(r1)
/* 8068F9C4 0068A024  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8068F9C8 0068A028  7C BF 2B 78 */	mr r31, r5
/* 8068F9CC 0068A02C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8068F9D0 0068A030  7C 9E 23 78 */	mr r30, r4
/* 8068F9D4 0068A034  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8068F9D8 0068A038  7C 7D 1B 78 */	mr r29, r3
/* 8068F9DC 0068A03C  81 83 00 00 */	lwz r12, 0x0(r3)
/* 8068F9E0 0068A040  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8068F9E4 0068A044  7D 89 03 A6 */	mtctr r12
/* 8068F9E8 0068A048  4E 80 04 21 */	bctrl
/* 8068F9EC 0068A04C  2C 03 00 00 */	cmpwi r3, 0x0
/* 8068F9F0 0068A050  40 80 00 0C */	bge .L_8068F9FC
/* 8068F9F4 0068A054  38 60 00 00 */	li r3, 0x0
/* 8068F9F8 0068A058  48 00 00 34 */	b .L_8068FA2C
.L_8068F9FC:
/* 8068F9FC 0068A05C  2C 1E 00 00 */	cmpwi r30, 0x0
/* 8068FA00 0068A060  38 00 00 00 */	li r0, 0x0
/* 8068FA04 0068A064  40 82 00 0C */	bne .L_8068FA10
/* 8068FA08 0068A068  2C 1F 00 00 */	cmpwi r31, 0x0
/* 8068FA0C 0068A06C  41 82 00 08 */	beq .L_8068FA14
.L_8068FA10:
/* 8068FA10 0068A070  38 00 00 01 */	li r0, 0x1
.L_8068FA14:
/* 8068FA14 0068A074  2C 00 00 00 */	cmpwi r0, 0x0
/* 8068FA18 0068A078  98 1D 00 36 */	stb r0, 0x36(r29)
/* 8068FA1C 0068A07C  40 82 00 0C */	bne .L_8068FA28
/* 8068FA20 0068A080  38 00 00 00 */	li r0, 0x0
/* 8068FA24 0068A084  98 1D 00 38 */	stb r0, 0x38(r29)
.L_8068FA28:
/* 8068FA28 0068A088  7F A3 EB 78 */	mr r3, r29
.L_8068FA2C:
/* 8068FA2C 0068A08C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8068FA30 0068A090  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8068FA34 0068A094  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8068FA38 0068A098  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8068FA3C 0068A09C  7C 08 03 A6 */	mtlr r0
/* 8068FA40 0068A0A0  38 21 00 20 */	addi r1, r1, 0x20
/* 8068FA44 0068A0A4  4E 80 00 20 */	blr
.endfn fn_8068F9B8
