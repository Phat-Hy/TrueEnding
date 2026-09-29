.include "macros.inc"
.file "auto_fn_8025A03C_text"

# 0x8025A03C..0x8025A060 | size: 0x24
.text
.balign 4

# .text:0x0 | 0x8025A03C | size: 0x24
.fn fn_8025A03C, global
/* 8025A03C 0025469C  3C 80 80 7D */	lis r4, lbl_807C8328@ha
/* 8025A040 002546A0  C0 42 AE F4 */	lfs f2, lbl_80883494@sda21(r0)
/* 8025A044 002546A4  38 64 83 28 */	addi r3, r4, lbl_807C8328@l
/* 8025A048 002546A8  C0 22 AE F8 */	lfs f1, lbl_80883498@sda21(r0)
/* 8025A04C 002546AC  C0 02 AE 54 */	lfs f0, lbl_808833F4@sda21(r0)
/* 8025A050 002546B0  D0 44 83 28 */	stfs f2, lbl_807C8328@l(r4)
/* 8025A054 002546B4  D0 23 00 04 */	stfs f1, 0x4(r3)
/* 8025A058 002546B8  D0 03 00 08 */	stfs f0, 0x8(r3)
/* 8025A05C 002546BC  4E 80 00 20 */	blr
.endfn fn_8025A03C

# 0x8072D328..0x8072D32C | size: 0x4
.section .ctors, "a"
.balign 4
	.4byte fn_8025A03C
