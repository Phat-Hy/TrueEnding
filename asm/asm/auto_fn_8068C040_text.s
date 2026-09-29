.include "macros.inc"
.file "auto_fn_8068C040_text"

# 0x80006A34..0x80006A5C | size: 0x28
.section extab, "a"
.balign 4

# extab:0x0 | 0x80006A34 | size: 0x28
.obj "@etb_80006A34", local
.hidden "@etb_80006A34"
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
.endobj "@etb_80006A34"

# 0x80007CD8..0x80007CE4 | size: 0xC
.section extabindex, "a"
.balign 4

# extabindex:0x0 | 0x80007CD8 | size: 0xC
.obj "@eti_80007CD8", local
.hidden "@eti_80007CD8"
	.4byte fn_8068C040
	.4byte 0x00000094
	.4byte "@etb_80006A34"
.endobj "@eti_80007CD8"

# 0x8068C040..0x8068C0D4 | size: 0x94
.text
.balign 4

# .text:0x0 | 0x8068C040 | size: 0x94
.fn fn_8068C040, global
/* 8068C040 006866A0  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8068C044 006866A4  7C 08 02 A6 */	mflr r0
/* 8068C048 006866A8  2C 03 00 00 */	cmpwi r3, 0x0
/* 8068C04C 006866AC  90 01 00 34 */	stw r0, 0x34(r1)
/* 8068C050 006866B0  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8068C054 006866B4  7C 3F 0B 78 */	mr r31, r1
/* 8068C058 006866B8  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8068C05C 006866BC  7C 9E 23 78 */	mr r30, r4
/* 8068C060 006866C0  93 A1 00 24 */	stw r29, 0x24(r1)
/* 8068C064 006866C4  7C 7D 1B 78 */	mr r29, r3
/* 8068C068 006866C8  41 82 00 44 */	beq .L_8068C0AC
/* 8068C06C 006866CC  41 82 00 30 */	beq .L_8068C09C
/* 8068C070 006866D0  34 63 00 1C */	addic. r3, r3, 0x1c
/* 8068C074 006866D4  41 82 00 28 */	beq .L_8068C09C
/* 8068C078 006866D8  41 82 00 24 */	beq .L_8068C09C
/* 8068C07C 006866DC  80 63 00 04 */	lwz r3, 0x4(r3)
/* 8068C080 006866E0  2C 03 00 00 */	cmpwi r3, 0x0
/* 8068C084 006866E4  41 82 00 18 */	beq .L_8068C09C
/* 8068C088 006866E8  48 00 92 3D */	bl fn_806952C4
/* 8068C08C 006866EC  48 00 00 10 */	b .L_8068C09C
/* 8068C090 006866F0  38 7F 00 08 */	addi r3, r31, 0x8
/* 8068C094 006866F4  48 00 B4 21 */	bl fn_806974B4
.L_8068C098:
/* 8068C098 006866F8  48 00 00 00 */	b .L_8068C098
.L_8068C09C:
/* 8068C09C 006866FC  7F C0 07 35 */	extsh. r0, r30
/* 8068C0A0 00686700  40 81 00 0C */	ble .L_8068C0AC
/* 8068C0A4 00686704  7F A3 EB 78 */	mr r3, r29
/* 8068C0A8 00686708  4B 9F 85 DD */	bl dtor_80084684
.L_8068C0AC:
/* 8068C0AC 0068670C  7F EA FB 78 */	mr r10, r31
/* 8068C0B0 00686710  83 FF 00 2C */	lwz r31, 0x2c(r31)
/* 8068C0B4 00686714  7F A3 EB 78 */	mr r3, r29
/* 8068C0B8 00686718  83 CA 00 28 */	lwz r30, 0x28(r10)
/* 8068C0BC 0068671C  83 AA 00 24 */	lwz r29, 0x24(r10)
/* 8068C0C0 00686720  81 41 00 00 */	lwz r10, 0x0(r1)
/* 8068C0C4 00686724  80 0A 00 04 */	lwz r0, 0x4(r10)
/* 8068C0C8 00686728  7D 41 53 78 */	mr r1, r10
/* 8068C0CC 0068672C  7C 08 03 A6 */	mtlr r0
/* 8068C0D0 00686730  4E 80 00 20 */	blr
.endfn fn_8068C040
