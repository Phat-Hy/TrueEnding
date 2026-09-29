.include "macros.inc"
.file "auto_fn_80234A60_text"

# 0x80234A60..0x80234A8C | size: 0x2C
.text
.balign 4

# .text:0x0 | 0x80234A60 | size: 0x2C
.fn fn_80234A60, global
/* 80234A60 0022F0C0  3C A0 80 7D */	lis r5, lbl_807C82C0@ha
/* 80234A64 0022F0C4  3C 80 80 7D */	lis r4, lbl_807C8290@ha
/* 80234A68 0022F0C8  38 65 82 C0 */	addi r3, r5, lbl_807C82C0@l
/* 80234A6C 0022F0CC  38 00 00 00 */	li r0, 0x0
/* 80234A70 0022F0D0  38 84 82 90 */	addi r4, r4, lbl_807C8290@l
/* 80234A74 0022F0D4  38 C0 00 05 */	li r6, 0x5
/* 80234A78 0022F0D8  90 C5 82 C0 */	stw r6, lbl_807C82C0@l(r5)
/* 80234A7C 0022F0DC  90 83 00 04 */	stw r4, 0x4(r3)
/* 80234A80 0022F0E0  90 03 00 08 */	stw r0, 0x8(r3)
/* 80234A84 0022F0E4  90 03 00 0C */	stw r0, 0xc(r3)
/* 80234A88 0022F0E8  4E 80 00 20 */	blr
.endfn fn_80234A60

# 0x8072D310..0x8072D314 | size: 0x4
.section .ctors, "a"
.balign 4
	.4byte fn_80234A60
