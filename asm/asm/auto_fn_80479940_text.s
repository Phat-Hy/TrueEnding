.include "macros.inc"
.file "auto_fn_80479940_text"

# 0x80479940..0x80479998 | size: 0x58
.text
.balign 4

# .text:0x0 | 0x80479940 | size: 0x58
.fn fn_80479940, global
/* 80479940 00473FA0  3C C0 80 7D */	lis r6, lbl_807C8A68@ha
/* 80479944 00473FA4  C0 62 E9 98 */	lfs f3, lbl_80886F38@sda21(r0)
/* 80479948 00473FA8  38 C6 8A 68 */	addi r6, r6, lbl_807C8A68@l
/* 8047994C 00473FAC  C0 42 E9 7C */	lfs f2, lbl_80886F1C@sda21(r0)
/* 80479950 00473FB0  38 A6 00 00 */	addi r5, r6, 0x0
/* 80479954 00473FB4  C0 22 E9 C8 */	lfs f1, lbl_80886F68@sda21(r0)
/* 80479958 00473FB8  38 86 00 10 */	addi r4, r6, 0x10
/* 8047995C 00473FBC  38 66 00 20 */	addi r3, r6, 0x20
/* 80479960 00473FC0  C0 02 E9 74 */	lfs f0, lbl_80886F14@sda21(r0)
/* 80479964 00473FC4  D0 66 00 00 */	stfs f3, 0x0(r6)
/* 80479968 00473FC8  D0 65 00 04 */	stfs f3, 0x4(r5)
/* 8047996C 00473FCC  D0 65 00 08 */	stfs f3, 0x8(r5)
/* 80479970 00473FD0  D0 45 00 0C */	stfs f2, 0xc(r5)
/* 80479974 00473FD4  D0 46 00 10 */	stfs f2, 0x10(r6)
/* 80479978 00473FD8  D0 64 00 04 */	stfs f3, 0x4(r4)
/* 8047997C 00473FDC  D0 24 00 08 */	stfs f1, 0x8(r4)
/* 80479980 00473FE0  D0 44 00 0C */	stfs f2, 0xc(r4)
/* 80479984 00473FE4  D0 46 00 20 */	stfs f2, 0x20(r6)
/* 80479988 00473FE8  D0 03 00 04 */	stfs f0, 0x4(r3)
/* 8047998C 00473FEC  D0 03 00 08 */	stfs f0, 0x8(r3)
/* 80479990 00473FF0  D0 43 00 0C */	stfs f2, 0xc(r3)
/* 80479994 00473FF4  4E 80 00 20 */	blr
.endfn fn_80479940

# 0x8072D37C..0x8072D380 | size: 0x4
.section .ctors, "a"
.balign 4
	.4byte fn_80479940
