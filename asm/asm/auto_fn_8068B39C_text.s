.include "macros.inc"
.file "auto_fn_8068B39C_text"

# 0x80006720..0x8000674C | size: 0x2C
.section extab, "a"
.balign 4

# extab:0x0 | 0x80006720 | size: 0x2C
.obj "@etb_80006720", local
.hidden "@etb_80006720"
/*
 * Flag values:
 * Has Elf Vector: No
 * Large Frame: Yes
 * Has Frame Pointer: No
 * Saved CR: No
 * Saved GPR range: r29-r31
 * 
 * PC actions:
 * PC=0000004C, Action: 000020
 * PC=00000068, Action: 000018
 * 
 * Exception actions:
 * 000018:
 * Type: DESTROYLOCAL
 * Local: 0x10(SP)
 * Dtor: "dtor_8001A3A4"
 * 000020:
 * Type: DESTROYBASE
 * Member: 0x0(r30)
 * Dtor: "dtor_8001A228"
 * Has end bit
 */
	.4byte 0x18080000
	.4byte 0x0000004C
	.4byte 0x00000020
	.4byte 0x00000068
	.4byte 0x00000018
	.4byte 0x00000000
	.4byte 0x02000010
	.4byte dtor_8001A3A4
	.4byte 0x8680001E
	.4byte 0x00000000
	.4byte dtor_8001A228
.endobj "@etb_80006720"

# 0x80007C60..0x80007C6C | size: 0xC
.section extabindex, "a"
.balign 4

# extabindex:0x0 | 0x80007C60 | size: 0xC
.obj "@eti_80007C60", local
.hidden "@eti_80007C60"
	.4byte fn_8068B39C
	.4byte 0x000000E0
	.4byte "@etb_80006720"
.endobj "@eti_80007C60"

# 0x8068B39C..0x8068B47C | size: 0xE0
.text
.balign 4

# .text:0x0 | 0x8068B39C | size: 0xE0
.fn fn_8068B39C, global
/* 8068B39C 006859FC  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8068B3A0 00685A00  7C 08 02 A6 */	mflr r0
/* 8068B3A4 00685A04  3C 60 80 7C */	lis r3, lbl_807BBB08@ha
/* 8068B3A8 00685A08  90 01 00 44 */	stw r0, 0x44(r1)
/* 8068B3AC 00685A0C  38 63 BB 08 */	addi r3, r3, lbl_807BBB08@l
/* 8068B3B0 00685A10  38 00 00 00 */	li r0, 0x0
/* 8068B3B4 00685A14  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8068B3B8 00685A18  93 C1 00 38 */	stw r30, 0x38(r1)
/* 8068B3BC 00685A1C  3B C1 00 18 */	addi r30, r1, 0x18
/* 8068B3C0 00685A20  93 A1 00 34 */	stw r29, 0x34(r1)
/* 8068B3C4 00685A24  7C 9D 23 78 */	mr r29, r4
/* 8068B3C8 00685A28  90 61 00 18 */	stw r3, 0x18(r1)
/* 8068B3CC 00685A2C  7F A3 EB 78 */	mr r3, r29
/* 8068B3D0 00685A30  98 01 00 08 */	stb r0, 0x8(r1)
/* 8068B3D4 00685A34  48 00 9F 69 */	bl strlen
/* 8068B3D8 00685A38  38 63 00 01 */	addi r3, r3, 0x1
/* 8068B3DC 00685A3C  54 60 08 3C */	slwi r0, r3, 1
/* 8068B3E0 00685A40  7C 63 00 50 */	subf r3, r3, r0
/* 8068B3E4 00685A44  4B 9F 96 95 */	bl fn_80084A78
/* 8068B3E8 00685A48  38 01 00 08 */	addi r0, r1, 0x8
/* 8068B3EC 00685A4C  90 61 00 1C */	stw r3, 0x1c(r1)
/* 8068B3F0 00685A50  7C 7F 1B 78 */	mr r31, r3
/* 8068B3F4 00685A54  90 61 00 10 */	stw r3, 0x10(r1)
/* 8068B3F8 00685A58  38 60 00 10 */	li r3, 0x10
/* 8068B3FC 00685A5C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8068B400 00685A60  4B 9F 90 D9 */	bl fn_800844D8
/* 8068B404 00685A64  2C 03 00 00 */	cmpwi r3, 0x0
/* 8068B408 00685A68  41 82 00 20 */	beq .L_8068B428
/* 8068B40C 00685A6C  38 00 00 01 */	li r0, 0x1
/* 8068B410 00685A70  90 03 00 04 */	stw r0, 0x4(r3)
/* 8068B414 00685A74  3C 80 80 77 */	lis r4, lbl_80775B98@ha
/* 8068B418 00685A78  90 03 00 08 */	stw r0, 0x8(r3)
/* 8068B41C 00685A7C  38 84 5B 98 */	addi r4, r4, lbl_80775B98@l
/* 8068B420 00685A80  90 83 00 00 */	stw r4, 0x0(r3)
/* 8068B424 00685A84  93 E3 00 0C */	stw r31, 0xc(r3)
.L_8068B428:
/* 8068B428 00685A88  38 00 00 00 */	li r0, 0x0
/* 8068B42C 00685A8C  90 61 00 20 */	stw r3, 0x20(r1)
/* 8068B430 00685A90  90 01 00 10 */	stw r0, 0x10(r1)
/* 8068B434 00685A94  48 00 00 08 */	b .L_8068B43C
/* 8068B438 00685A98  4B 9F 97 ED */	bl fn_80084C24
.L_8068B43C:
/* 8068B43C 00685A9C  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 8068B440 00685AA0  7F A4 EB 78 */	mr r4, r29
/* 8068B444 00685AA4  4B FF 6E 69 */	bl strcpy
/* 8068B448 00685AA8  3C 60 80 76 */	lis r3, lbl_807661D8@ha
/* 8068B44C 00685AAC  3C A0 80 69 */	lis r5, fn_8068B47C@ha
/* 8068B450 00685AB0  7F C4 F3 78 */	mr r4, r30
/* 8068B454 00685AB4  38 63 61 D8 */	addi r3, r3, lbl_807661D8@l
/* 8068B458 00685AB8  38 A5 B4 7C */	addi r5, r5, fn_8068B47C@l
/* 8068B45C 00685ABC  48 00 C7 5D */	bl fn_80697BB8
/* 8068B460 00685AC0  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8068B464 00685AC4  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8068B468 00685AC8  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 8068B46C 00685ACC  83 A1 00 34 */	lwz r29, 0x34(r1)
/* 8068B470 00685AD0  7C 08 03 A6 */	mtlr r0
/* 8068B474 00685AD4  38 21 00 40 */	addi r1, r1, 0x40
/* 8068B478 00685AD8  4E 80 00 20 */	blr
.endfn fn_8068B39C
