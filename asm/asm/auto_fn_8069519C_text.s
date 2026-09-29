.include "macros.inc"
.file "auto_fn_8069519C_text"

# 0x80007B5C..0x80007B84 | size: 0x28
.section extab, "a"
.balign 4

# extab:0x0 | 0x80007B5C | size: 0x28
.obj "@etb_80007B5C", local
.hidden "@etb_80007B5C"
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
.endobj "@etb_80007B5C"

# 0x800080D4..0x800080E0 | size: 0xC
.section extabindex, "a"
.balign 4

# extabindex:0x0 | 0x800080D4 | size: 0xC
.obj "@eti_800080D4", local
.hidden "@eti_800080D4"
	.4byte fn_8069519C
	.4byte 0x00000094
	.4byte "@etb_80007B5C"
.endobj "@eti_800080D4"

# 0x8069519C..0x80695230 | size: 0x94
.text
.balign 4

# .text:0x0 | 0x8069519C | size: 0x94
.fn fn_8069519C, global
/* 8069519C 0068F7FC  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 806951A0 0068F800  7C 08 02 A6 */	mflr r0
/* 806951A4 0068F804  2C 03 00 00 */	cmpwi r3, 0x0
/* 806951A8 0068F808  90 01 00 34 */	stw r0, 0x34(r1)
/* 806951AC 0068F80C  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 806951B0 0068F810  7C 3F 0B 78 */	mr r31, r1
/* 806951B4 0068F814  93 C1 00 28 */	stw r30, 0x28(r1)
/* 806951B8 0068F818  7C 9E 23 78 */	mr r30, r4
/* 806951BC 0068F81C  93 A1 00 24 */	stw r29, 0x24(r1)
/* 806951C0 0068F820  7C 7D 1B 78 */	mr r29, r3
/* 806951C4 0068F824  41 82 00 44 */	beq .L_80695208
/* 806951C8 0068F828  41 82 00 30 */	beq .L_806951F8
/* 806951CC 0068F82C  34 63 00 04 */	addic. r3, r3, 0x4
/* 806951D0 0068F830  41 82 00 28 */	beq .L_806951F8
/* 806951D4 0068F834  41 82 00 24 */	beq .L_806951F8
/* 806951D8 0068F838  80 63 00 04 */	lwz r3, 0x4(r3)
/* 806951DC 0068F83C  2C 03 00 00 */	cmpwi r3, 0x0
/* 806951E0 0068F840  41 82 00 18 */	beq .L_806951F8
/* 806951E4 0068F844  48 00 00 E1 */	bl fn_806952C4
/* 806951E8 0068F848  48 00 00 10 */	b .L_806951F8
/* 806951EC 0068F84C  38 7F 00 08 */	addi r3, r31, 0x8
/* 806951F0 0068F850  48 00 22 C5 */	bl fn_806974B4
.L_806951F4:
/* 806951F4 0068F854  48 00 00 00 */	b .L_806951F4
.L_806951F8:
/* 806951F8 0068F858  7F C0 07 35 */	extsh. r0, r30
/* 806951FC 0068F85C  40 81 00 0C */	ble .L_80695208
/* 80695200 0068F860  7F A3 EB 78 */	mr r3, r29
/* 80695204 0068F864  4B 9E F4 81 */	bl dtor_80084684
.L_80695208:
/* 80695208 0068F868  7F EA FB 78 */	mr r10, r31
/* 8069520C 0068F86C  83 FF 00 2C */	lwz r31, 0x2c(r31)
/* 80695210 0068F870  7F A3 EB 78 */	mr r3, r29
/* 80695214 0068F874  83 CA 00 28 */	lwz r30, 0x28(r10)
/* 80695218 0068F878  83 AA 00 24 */	lwz r29, 0x24(r10)
/* 8069521C 0068F87C  81 41 00 00 */	lwz r10, 0x0(r1)
/* 80695220 0068F880  80 0A 00 04 */	lwz r0, 0x4(r10)
/* 80695224 0068F884  7D 41 53 78 */	mr r1, r10
/* 80695228 0068F888  7C 08 03 A6 */	mtlr r0
/* 8069522C 0068F88C  4E 80 00 20 */	blr
.endfn fn_8069519C
