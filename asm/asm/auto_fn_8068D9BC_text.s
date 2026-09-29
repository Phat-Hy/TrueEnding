.include "macros.inc"
.file "auto_fn_8068D9BC_text"

# 0x8000700C..0x80007034 | size: 0x28
.section extab, "a"
.balign 4

# extab:0x0 | 0x8000700C | size: 0x28
.obj "@etb_8000700C", local
.hidden "@etb_8000700C"
/*
 * Flag values:
 * Has Elf Vector: No
 * Large Frame: Yes
 * Has Frame Pointer: Yes
 * Saved CR: No
 * Saved GPR range: r29-r31
 * 
 * PC actions:
 * PC=00000070, Action: 000018
 * PC=0000007C, Action: 000024
 * 
 * Exception actions:
 * 000018:
 * Type: SPECIFICATION
 * Local: 0x8(FP)
 * PC: 00000074
 * Types: 0
 * Has end bit
 * 000024:
 * Type: ACTIVECATCHBLOCK
 * Local: 0x8(FP)
 * Has end bit
 */
	.4byte 0x18180000
	.4byte 0x00000070
	.4byte 0x00000018
	.4byte 0x0000007C
	.4byte 0x00000024
	.4byte 0x00000000
	.4byte 0x8F000000
	.4byte 0x00000074
	.4byte 0x00000008
	.4byte 0x8D000008
.endobj "@etb_8000700C"

# 0x80007D98..0x80007DA4 | size: 0xC
.section extabindex, "a"
.balign 4

# extabindex:0x0 | 0x80007D98 | size: 0xC
.obj "@eti_80007D98", local
.hidden "@eti_80007D98"
	.4byte fn_8068D9BC
	.4byte 0x000000B8
	.4byte "@etb_8000700C"
.endobj "@eti_80007D98"

# 0x8068D9BC..0x8068DA74 | size: 0xB8
.text
.balign 4

# .text:0x0 | 0x8068D9BC | size: 0xB8
.fn fn_8068D9BC, global
/* 8068D9BC 0068801C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8068D9C0 00688020  7C 08 02 A6 */	mflr r0
/* 8068D9C4 00688024  2C 03 00 00 */	cmpwi r3, 0x0
/* 8068D9C8 00688028  90 01 00 34 */	stw r0, 0x34(r1)
/* 8068D9CC 0068802C  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8068D9D0 00688030  7C 3F 0B 78 */	mr r31, r1
/* 8068D9D4 00688034  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8068D9D8 00688038  7C 9E 23 78 */	mr r30, r4
/* 8068D9DC 0068803C  93 A1 00 24 */	stw r29, 0x24(r1)
/* 8068D9E0 00688040  7C 7D 1B 78 */	mr r29, r3
/* 8068D9E4 00688044  41 82 00 68 */	beq .L_8068DA4C
/* 8068D9E8 00688048  88 03 00 4B */	lbz r0, 0x4b(r3)
/* 8068D9EC 0068804C  3C 80 80 7C */	lis r4, lbl_807BBCC8@ha
/* 8068D9F0 00688050  38 84 BC C8 */	addi r4, r4, lbl_807BBCC8@l
/* 8068D9F4 00688054  90 83 00 00 */	stw r4, 0x0(r3)
/* 8068D9F8 00688058  2C 00 00 00 */	cmpwi r0, 0x0
/* 8068D9FC 0068805C  41 82 00 0C */	beq .L_8068DA08
/* 8068DA00 00688060  80 63 00 28 */	lwz r3, 0x28(r3)
/* 8068DA04 00688064  4B 9F 72 21 */	bl fn_80084C24
.L_8068DA08:
/* 8068DA08 00688068  2C 1D 00 00 */	cmpwi r29, 0x0
/* 8068DA0C 0068806C  41 82 00 30 */	beq .L_8068DA3C
/* 8068DA10 00688070  34 7D 00 1C */	addic. r3, r29, 0x1c
/* 8068DA14 00688074  41 82 00 28 */	beq .L_8068DA3C
/* 8068DA18 00688078  41 82 00 24 */	beq .L_8068DA3C
/* 8068DA1C 0068807C  80 63 00 04 */	lwz r3, 0x4(r3)
/* 8068DA20 00688080  2C 03 00 00 */	cmpwi r3, 0x0
/* 8068DA24 00688084  41 82 00 18 */	beq .L_8068DA3C
/* 8068DA28 00688088  48 00 78 9D */	bl fn_806952C4
/* 8068DA2C 0068808C  48 00 00 10 */	b .L_8068DA3C
/* 8068DA30 00688090  38 7F 00 08 */	addi r3, r31, 0x8
/* 8068DA34 00688094  48 00 9A 81 */	bl fn_806974B4
.L_8068DA38:
/* 8068DA38 00688098  48 00 00 00 */	b .L_8068DA38
.L_8068DA3C:
/* 8068DA3C 0068809C  7F C0 07 35 */	extsh. r0, r30
/* 8068DA40 006880A0  40 81 00 0C */	ble .L_8068DA4C
/* 8068DA44 006880A4  7F A3 EB 78 */	mr r3, r29
/* 8068DA48 006880A8  4B 9F 6C 3D */	bl dtor_80084684
.L_8068DA4C:
/* 8068DA4C 006880AC  7F EA FB 78 */	mr r10, r31
/* 8068DA50 006880B0  83 FF 00 2C */	lwz r31, 0x2c(r31)
/* 8068DA54 006880B4  7F A3 EB 78 */	mr r3, r29
/* 8068DA58 006880B8  83 CA 00 28 */	lwz r30, 0x28(r10)
/* 8068DA5C 006880BC  83 AA 00 24 */	lwz r29, 0x24(r10)
/* 8068DA60 006880C0  81 41 00 00 */	lwz r10, 0x0(r1)
/* 8068DA64 006880C4  80 0A 00 04 */	lwz r0, 0x4(r10)
/* 8068DA68 006880C8  7D 41 53 78 */	mr r1, r10
/* 8068DA6C 006880CC  7C 08 03 A6 */	mtlr r0
/* 8068DA70 006880D0  4E 80 00 20 */	blr
.endfn fn_8068D9BC
