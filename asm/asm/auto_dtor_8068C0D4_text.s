.include "macros.inc"
.file "auto_dtor_8068C0D4_text"

# 0x80006A5C..0x80006A84 | size: 0x28
.section extab, "a"
.balign 4

# extab:0x0 | 0x80006A5C | size: 0x28
.obj "@etb_80006A5C", local
.hidden "@etb_80006A5C"
/*
 * Flag values:
 * Has Elf Vector: No
 * Large Frame: Yes
 * Has Frame Pointer: Yes
 * Saved CR: No
 * Saved GPR range: r29-r31
 * 
 * PC actions:
 * PC=00000048, Action: 000018
 * PC=00000054, Action: 000024
 * 
 * Exception actions:
 * 000018:
 * Type: SPECIFICATION
 * Local: 0x8(FP)
 * PC: 0000004C
 * Types: 0
 * Has end bit
 * 000024:
 * Type: ACTIVECATCHBLOCK
 * Local: 0x8(FP)
 * Has end bit
 */
	.4byte 0x18180000
	.4byte 0x00000048
	.4byte 0x00000018
	.4byte 0x00000054
	.4byte 0x00000024
	.4byte 0x00000000
	.4byte 0x8F000000
	.4byte 0x0000004C
	.4byte 0x00000008
	.4byte 0x8D000008
.endobj "@etb_80006A5C"

# 0x80007CE4..0x80007CF0 | size: 0xC
.section extabindex, "a"
.balign 4

# extabindex:0x0 | 0x80007CE4 | size: 0xC
.obj "@eti_80007CE4", local
.hidden "@eti_80007CE4"
	.4byte dtor_8068C0D4
	.4byte 0x00000090
	.4byte "@etb_80006A5C"
.endobj "@eti_80007CE4"

# 0x8068C0D4..0x8068C164 | size: 0x90
.text
.balign 4

# .text:0x0 | 0x8068C0D4 | size: 0x90
.fn dtor_8068C0D4, global
/* 8068C0D4 00686734  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8068C0D8 00686738  7C 08 02 A6 */	mflr r0
/* 8068C0DC 0068673C  2C 03 00 00 */	cmpwi r3, 0x0
/* 8068C0E0 00686740  90 01 00 34 */	stw r0, 0x34(r1)
/* 8068C0E4 00686744  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8068C0E8 00686748  7C 3F 0B 78 */	mr r31, r1
/* 8068C0EC 0068674C  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8068C0F0 00686750  7C 9E 23 78 */	mr r30, r4
/* 8068C0F4 00686754  93 A1 00 24 */	stw r29, 0x24(r1)
/* 8068C0F8 00686758  7C 7D 1B 78 */	mr r29, r3
/* 8068C0FC 0068675C  41 82 00 40 */	beq .L_8068C13C
/* 8068C100 00686760  34 63 00 1C */	addic. r3, r3, 0x1c
/* 8068C104 00686764  41 82 00 28 */	beq .L_8068C12C
/* 8068C108 00686768  41 82 00 24 */	beq .L_8068C12C
/* 8068C10C 0068676C  80 63 00 04 */	lwz r3, 0x4(r3)
/* 8068C110 00686770  2C 03 00 00 */	cmpwi r3, 0x0
/* 8068C114 00686774  41 82 00 18 */	beq .L_8068C12C
/* 8068C118 00686778  48 00 91 AD */	bl fn_806952C4
/* 8068C11C 0068677C  48 00 00 10 */	b .L_8068C12C
/* 8068C120 00686780  38 7F 00 08 */	addi r3, r31, 0x8
/* 8068C124 00686784  48 00 B3 91 */	bl fn_806974B4
.L_8068C128:
/* 8068C128 00686788  48 00 00 00 */	b .L_8068C128
.L_8068C12C:
/* 8068C12C 0068678C  7F C0 07 35 */	extsh. r0, r30
/* 8068C130 00686790  40 81 00 0C */	ble .L_8068C13C
/* 8068C134 00686794  7F A3 EB 78 */	mr r3, r29
/* 8068C138 00686798  4B 9F 85 4D */	bl dtor_80084684
.L_8068C13C:
/* 8068C13C 0068679C  7F EA FB 78 */	mr r10, r31
/* 8068C140 006867A0  83 FF 00 2C */	lwz r31, 0x2c(r31)
/* 8068C144 006867A4  7F A3 EB 78 */	mr r3, r29
/* 8068C148 006867A8  83 CA 00 28 */	lwz r30, 0x28(r10)
/* 8068C14C 006867AC  83 AA 00 24 */	lwz r29, 0x24(r10)
/* 8068C150 006867B0  81 41 00 00 */	lwz r10, 0x0(r1)
/* 8068C154 006867B4  80 0A 00 04 */	lwz r0, 0x4(r10)
/* 8068C158 006867B8  7D 41 53 78 */	mr r1, r10
/* 8068C15C 006867BC  7C 08 03 A6 */	mtlr r0
/* 8068C160 006867C0  4E 80 00 20 */	blr
.endfn dtor_8068C0D4
