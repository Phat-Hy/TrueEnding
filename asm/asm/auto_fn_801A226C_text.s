.include "macros.inc"
.file "auto_fn_801A226C_text"

# 0x801A226C..0x801A2290 | size: 0x24
.text
.balign 4

# .text:0x0 | 0x801A226C | size: 0x24
.fn fn_801A226C, global
/* 801A226C 0019C8CC  3C 80 80 7C */	lis r4, lbl_807C7BD0@ha
/* 801A2270 0019C8D0  C0 42 9B B8 */	lfs f2, lbl_80882158@sda21(r0)
/* 801A2274 0019C8D4  38 64 7B D0 */	addi r3, r4, lbl_807C7BD0@l
/* 801A2278 0019C8D8  C0 22 9B BC */	lfs f1, lbl_8088215C@sda21(r0)
/* 801A227C 0019C8DC  C0 02 9B C0 */	lfs f0, lbl_80882160@sda21(r0)
/* 801A2280 0019C8E0  D0 44 7B D0 */	stfs f2, lbl_807C7BD0@l(r4)
/* 801A2284 0019C8E4  D0 23 00 04 */	stfs f1, 0x4(r3)
/* 801A2288 0019C8E8  D0 03 00 08 */	stfs f0, 0x8(r3)
/* 801A228C 0019C8EC  4E 80 00 20 */	blr
.endfn fn_801A226C

# 0x8072D2DC..0x8072D2E0 | size: 0x4
.section .ctors, "a"
.balign 4
	.4byte fn_801A226C
