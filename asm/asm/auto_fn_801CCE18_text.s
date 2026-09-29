.include "macros.inc"
.file "auto_fn_801CCE18_text"

# 0x801CCE18..0x801CCE50 | size: 0x38
.text
.balign 4

# .text:0x0 | 0x801CCE18 | size: 0x38
.fn fn_801CCE18, global
/* 801CCE18 001C7478  3C C0 80 7C */	lis r6, lbl_807C7CA0@ha
/* 801CCE1C 001C747C  3C 80 80 7C */	lis r4, lbl_807C7CAC@ha
/* 801CCE20 001C7480  C0 42 A3 F8 */	lfs f2, lbl_80882998@sda21(r0)
/* 801CCE24 001C7484  38 A6 7C A0 */	addi r5, r6, lbl_807C7CA0@l
/* 801CCE28 001C7488  38 64 7C AC */	addi r3, r4, lbl_807C7CAC@l
/* 801CCE2C 001C748C  C0 22 A4 00 */	lfs f1, lbl_808829A0@sda21(r0)
/* 801CCE30 001C7490  C0 02 A4 20 */	lfs f0, lbl_808829C0@sda21(r0)
/* 801CCE34 001C7494  D0 46 7C A0 */	stfs f2, lbl_807C7CA0@l(r6)
/* 801CCE38 001C7498  D0 45 00 04 */	stfs f2, 0x4(r5)
/* 801CCE3C 001C749C  D0 25 00 08 */	stfs f1, 0x8(r5)
/* 801CCE40 001C74A0  D0 44 7C AC */	stfs f2, lbl_807C7CAC@l(r4)
/* 801CCE44 001C74A4  D0 43 00 04 */	stfs f2, 0x4(r3)
/* 801CCE48 001C74A8  D0 03 00 08 */	stfs f0, 0x8(r3)
/* 801CCE4C 001C74AC  4E 80 00 20 */	blr
.endfn fn_801CCE18

# 0x8072D2E0..0x8072D2E4 | size: 0x4
.section .ctors, "a"
.balign 4
	.4byte fn_801CCE18
