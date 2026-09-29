.include "macros.inc"
.file "auto_fn_8068D0B8_text"

# 0x80006FC4..0x80006FEC | size: 0x28
.section extab, "a"
.balign 4

# extab:0x0 | 0x80006FC4 | size: 0x28
.obj "@etb_80006FC4", local
.hidden "@etb_80006FC4"
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
.endobj "@etb_80006FC4"

# 0x80007D5C..0x80007D68 | size: 0xC
.section extabindex, "a"
.balign 4

# extabindex:0x0 | 0x80007D5C | size: 0xC
.obj "@eti_80007D5C", local
.hidden "@eti_80007D5C"
	.4byte fn_8068D0B8
	.4byte 0x000000B8
	.4byte "@etb_80006FC4"
.endobj "@eti_80007D5C"

# 0x8068D0B8..0x8068D170 | size: 0xB8
.text
.balign 4

# .text:0x0 | 0x8068D0B8 | size: 0xB8
.fn fn_8068D0B8, global
/* 8068D0B8 00687718  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8068D0BC 0068771C  7C 08 02 A6 */	mflr r0
/* 8068D0C0 00687720  2C 03 00 00 */	cmpwi r3, 0x0
/* 8068D0C4 00687724  90 01 00 34 */	stw r0, 0x34(r1)
/* 8068D0C8 00687728  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8068D0CC 0068772C  7C 3F 0B 78 */	mr r31, r1
/* 8068D0D0 00687730  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8068D0D4 00687734  7C 9E 23 78 */	mr r30, r4
/* 8068D0D8 00687738  93 A1 00 24 */	stw r29, 0x24(r1)
/* 8068D0DC 0068773C  7C 7D 1B 78 */	mr r29, r3
/* 8068D0E0 00687740  41 82 00 68 */	beq .L_8068D148
/* 8068D0E4 00687744  88 03 00 4B */	lbz r0, 0x4b(r3)
/* 8068D0E8 00687748  3C 80 80 7C */	lis r4, lbl_807BBB90@ha
/* 8068D0EC 0068774C  38 84 BB 90 */	addi r4, r4, lbl_807BBB90@l
/* 8068D0F0 00687750  90 83 00 00 */	stw r4, 0x0(r3)
/* 8068D0F4 00687754  2C 00 00 00 */	cmpwi r0, 0x0
/* 8068D0F8 00687758  41 82 00 0C */	beq .L_8068D104
/* 8068D0FC 0068775C  80 63 00 28 */	lwz r3, 0x28(r3)
/* 8068D100 00687760  4B 9F 7B 25 */	bl fn_80084C24
.L_8068D104:
/* 8068D104 00687764  2C 1D 00 00 */	cmpwi r29, 0x0
/* 8068D108 00687768  41 82 00 30 */	beq .L_8068D138
/* 8068D10C 0068776C  34 7D 00 1C */	addic. r3, r29, 0x1c
/* 8068D110 00687770  41 82 00 28 */	beq .L_8068D138
/* 8068D114 00687774  41 82 00 24 */	beq .L_8068D138
/* 8068D118 00687778  80 63 00 04 */	lwz r3, 0x4(r3)
/* 8068D11C 0068777C  2C 03 00 00 */	cmpwi r3, 0x0
/* 8068D120 00687780  41 82 00 18 */	beq .L_8068D138
/* 8068D124 00687784  48 00 81 A1 */	bl fn_806952C4
/* 8068D128 00687788  48 00 00 10 */	b .L_8068D138
/* 8068D12C 0068778C  38 7F 00 08 */	addi r3, r31, 0x8
/* 8068D130 00687790  48 00 A3 85 */	bl fn_806974B4
.L_8068D134:
/* 8068D134 00687794  48 00 00 00 */	b .L_8068D134
.L_8068D138:
/* 8068D138 00687798  7F C0 07 35 */	extsh. r0, r30
/* 8068D13C 0068779C  40 81 00 0C */	ble .L_8068D148
/* 8068D140 006877A0  7F A3 EB 78 */	mr r3, r29
/* 8068D144 006877A4  4B 9F 75 41 */	bl dtor_80084684
.L_8068D148:
/* 8068D148 006877A8  7F EA FB 78 */	mr r10, r31
/* 8068D14C 006877AC  83 FF 00 2C */	lwz r31, 0x2c(r31)
/* 8068D150 006877B0  7F A3 EB 78 */	mr r3, r29
/* 8068D154 006877B4  83 CA 00 28 */	lwz r30, 0x28(r10)
/* 8068D158 006877B8  83 AA 00 24 */	lwz r29, 0x24(r10)
/* 8068D15C 006877BC  81 41 00 00 */	lwz r10, 0x0(r1)
/* 8068D160 006877C0  80 0A 00 04 */	lwz r0, 0x4(r10)
/* 8068D164 006877C4  7D 41 53 78 */	mr r1, r10
/* 8068D168 006877C8  7C 08 03 A6 */	mtlr r0
/* 8068D16C 006877CC  4E 80 00 20 */	blr
.endfn fn_8068D0B8
