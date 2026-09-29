.include "macros.inc"
.file "auto_dtor_80695138_text"

# 0x80007B54..0x80007B5C | size: 0x8
.section extab, "a"
.balign 4

# extab:0x0 | 0x80007B54 | size: 0x8
.obj "@etb_80007B54", local
.hidden "@etb_80007B54"
/*
 * Flag values:
 * Has Elf Vector: No
 * Large Frame: Yes
 * Has Frame Pointer: No
 * Saved CR: No
 * Saved GPR range: r30-r31
 */
	.4byte 0x10080000
	.4byte 0x00000000
.endobj "@etb_80007B54"

# 0x800080C8..0x800080D4 | size: 0xC
.section extabindex, "a"
.balign 4

# extabindex:0x0 | 0x800080C8 | size: 0xC
.obj "@eti_800080C8", local
.hidden "@eti_800080C8"
	.4byte dtor_80695138
	.4byte 0x00000064
	.4byte "@etb_80007B54"
.endobj "@eti_800080C8"

# 0x80695138..0x8069519C | size: 0x64
.text
.balign 4

# .text:0x0 | 0x80695138 | size: 0x64
.fn dtor_80695138, global
/* 80695138 0068F798  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8069513C 0068F79C  7C 08 02 A6 */	mflr r0
/* 80695140 0068F7A0  2C 03 00 00 */	cmpwi r3, 0x0
/* 80695144 0068F7A4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80695148 0068F7A8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8069514C 0068F7AC  7C 9F 23 78 */	mr r31, r4
/* 80695150 0068F7B0  93 C1 00 08 */	stw r30, 0x8(r1)
/* 80695154 0068F7B4  7C 7E 1B 78 */	mr r30, r3
/* 80695158 0068F7B8  41 82 00 28 */	beq .L_80695180
/* 8069515C 0068F7BC  80 63 00 00 */	lwz r3, 0x0(r3)
/* 80695160 0068F7C0  2C 03 00 00 */	cmpwi r3, 0x0
/* 80695164 0068F7C4  41 82 00 0C */	beq .L_80695170
/* 80695168 0068F7C8  38 80 00 01 */	li r4, 0x1
/* 8069516C 0068F7CC  4B FF CD B9 */	bl fn_80691F24
.L_80695170:
/* 80695170 0068F7D0  2C 1F 00 00 */	cmpwi r31, 0x0
/* 80695174 0068F7D4  40 81 00 0C */	ble .L_80695180
/* 80695178 0068F7D8  7F C3 F3 78 */	mr r3, r30
/* 8069517C 0068F7DC  4B 9E F5 09 */	bl dtor_80084684
.L_80695180:
/* 80695180 0068F7E0  7F C3 F3 78 */	mr r3, r30
/* 80695184 0068F7E4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80695188 0068F7E8  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8069518C 0068F7EC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80695190 0068F7F0  7C 08 03 A6 */	mtlr r0
/* 80695194 0068F7F4  38 21 00 10 */	addi r1, r1, 0x10
/* 80695198 0068F7F8  4E 80 00 20 */	blr
.endfn dtor_80695138
