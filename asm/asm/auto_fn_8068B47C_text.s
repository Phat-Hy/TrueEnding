.include "macros.inc"
.file "auto_fn_8068B47C_text"

# 0x8000674C..0x80006774 | size: 0x28
.section extab, "a"
.balign 4

# extab:0x0 | 0x8000674C | size: 0x28
.obj "@etb_8000674C", local
.hidden "@etb_8000674C"
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
.endobj "@etb_8000674C"

# 0x80007C6C..0x80007C78 | size: 0xC
.section extabindex, "a"
.balign 4

# extabindex:0x0 | 0x80007C6C | size: 0xC
.obj "@eti_80007C6C", local
.hidden "@eti_80007C6C"
	.4byte fn_8068B47C
	.4byte 0x00000090
	.4byte "@etb_8000674C"
.endobj "@eti_80007C6C"

# 0x8068B47C..0x8068B50C | size: 0x90
.text
.balign 4

# .text:0x0 | 0x8068B47C | size: 0x90
.fn fn_8068B47C, global
/* 8068B47C 00685ADC  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8068B480 00685AE0  7C 08 02 A6 */	mflr r0
/* 8068B484 00685AE4  2C 03 00 00 */	cmpwi r3, 0x0
/* 8068B488 00685AE8  90 01 00 34 */	stw r0, 0x34(r1)
/* 8068B48C 00685AEC  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8068B490 00685AF0  7C 3F 0B 78 */	mr r31, r1
/* 8068B494 00685AF4  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8068B498 00685AF8  7C 9E 23 78 */	mr r30, r4
/* 8068B49C 00685AFC  93 A1 00 24 */	stw r29, 0x24(r1)
/* 8068B4A0 00685B00  7C 7D 1B 78 */	mr r29, r3
/* 8068B4A4 00685B04  41 82 00 40 */	beq .L_8068B4E4
/* 8068B4A8 00685B08  34 63 00 04 */	addic. r3, r3, 0x4
/* 8068B4AC 00685B0C  41 82 00 28 */	beq .L_8068B4D4
/* 8068B4B0 00685B10  41 82 00 24 */	beq .L_8068B4D4
/* 8068B4B4 00685B14  80 63 00 04 */	lwz r3, 0x4(r3)
/* 8068B4B8 00685B18  2C 03 00 00 */	cmpwi r3, 0x0
/* 8068B4BC 00685B1C  41 82 00 18 */	beq .L_8068B4D4
/* 8068B4C0 00685B20  48 00 9E 05 */	bl fn_806952C4
/* 8068B4C4 00685B24  48 00 00 10 */	b .L_8068B4D4
/* 8068B4C8 00685B28  38 7F 00 08 */	addi r3, r31, 0x8
/* 8068B4CC 00685B2C  48 00 BF E9 */	bl fn_806974B4
.L_8068B4D0:
/* 8068B4D0 00685B30  48 00 00 00 */	b .L_8068B4D0
.L_8068B4D4:
/* 8068B4D4 00685B34  7F C0 07 35 */	extsh. r0, r30
/* 8068B4D8 00685B38  40 81 00 0C */	ble .L_8068B4E4
/* 8068B4DC 00685B3C  7F A3 EB 78 */	mr r3, r29
/* 8068B4E0 00685B40  4B 9F 91 A5 */	bl dtor_80084684
.L_8068B4E4:
/* 8068B4E4 00685B44  7F EA FB 78 */	mr r10, r31
/* 8068B4E8 00685B48  83 FF 00 2C */	lwz r31, 0x2c(r31)
/* 8068B4EC 00685B4C  7F A3 EB 78 */	mr r3, r29
/* 8068B4F0 00685B50  83 CA 00 28 */	lwz r30, 0x28(r10)
/* 8068B4F4 00685B54  83 AA 00 24 */	lwz r29, 0x24(r10)
/* 8068B4F8 00685B58  81 41 00 00 */	lwz r10, 0x0(r1)
/* 8068B4FC 00685B5C  80 0A 00 04 */	lwz r0, 0x4(r10)
/* 8068B500 00685B60  7D 41 53 78 */	mr r1, r10
/* 8068B504 00685B64  7C 08 03 A6 */	mtlr r0
/* 8068B508 00685B68  4E 80 00 20 */	blr
.endfn fn_8068B47C
