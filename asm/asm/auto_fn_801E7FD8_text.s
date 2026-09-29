.include "macros.inc"
.file "auto_fn_801E7FD8_text"

# 0x801E7FD8..0x801E7FF8 | size: 0x20
.text
.balign 4

# .text:0x0 | 0x801E7FD8 | size: 0x20
.fn fn_801E7FD8, global
/* 801E7FD8 001E2638  3C 80 80 7C */	lis r4, lbl_807C7D38@ha
/* 801E7FDC 001E263C  C0 22 A5 68 */	lfs f1, lbl_80882B08@sda21(r0)
/* 801E7FE0 001E2640  38 64 7D 38 */	addi r3, r4, lbl_807C7D38@l
/* 801E7FE4 001E2644  C0 02 A5 6C */	lfs f0, lbl_80882B0C@sda21(r0)
/* 801E7FE8 001E2648  D0 24 7D 38 */	stfs f1, lbl_807C7D38@l(r4)
/* 801E7FEC 001E264C  D0 03 00 04 */	stfs f0, 0x4(r3)
/* 801E7FF0 001E2650  D0 23 00 08 */	stfs f1, 0x8(r3)
/* 801E7FF4 001E2654  4E 80 00 20 */	blr
.endfn fn_801E7FD8

# 0x8072D2F0..0x8072D2F4 | size: 0x4
.section .ctors, "a"
.balign 4
	.4byte fn_801E7FD8
