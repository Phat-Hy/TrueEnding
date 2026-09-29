.include "macros.inc"
.file "auto_fn_801D54A0_text"

# 0x801D54A0..0x801D54C0 | size: 0x20
.text
.balign 4

# .text:0x0 | 0x801D54A0 | size: 0x20
.fn fn_801D54A0, global
/* 801D54A0 001CFB00  3C 80 80 7C */	lis r4, lbl_807C7D18@ha
/* 801D54A4 001CFB04  C0 22 A4 BC */	lfs f1, lbl_80882A5C@sda21(r0)
/* 801D54A8 001CFB08  38 64 7D 18 */	addi r3, r4, lbl_807C7D18@l
/* 801D54AC 001CFB0C  C0 02 A5 2C */	lfs f0, lbl_80882ACC@sda21(r0)
/* 801D54B0 001CFB10  D0 24 7D 18 */	stfs f1, lbl_807C7D18@l(r4)
/* 801D54B4 001CFB14  D0 03 00 04 */	stfs f0, 0x4(r3)
/* 801D54B8 001CFB18  D0 23 00 08 */	stfs f1, 0x8(r3)
/* 801D54BC 001CFB1C  4E 80 00 20 */	blr
.endfn fn_801D54A0

# 0x8072D2E8..0x8072D2EC | size: 0x4
.section .ctors, "a"
.balign 4
	.4byte fn_801D54A0
