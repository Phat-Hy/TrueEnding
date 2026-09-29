.include "macros.inc"
.file "auto_fn_80490850_text"

# 0x80490850..0x80490884 | size: 0x34
.text
.balign 4

# .text:0x0 | 0x80490850 | size: 0x34
.fn fn_80490850, global
/* 80490850 0048AEB0  3C 80 80 7D */	lis r4, lbl_807C8AB0@ha
/* 80490854 0048AEB4  C0 62 E9 F8 */	lfs f3, lbl_80886F98@sda21(r0)
/* 80490858 0048AEB8  38 64 8A B0 */	addi r3, r4, lbl_807C8AB0@l
/* 8049085C 0048AEBC  C0 42 EA AC */	lfs f2, lbl_8088704C@sda21(r0)
/* 80490860 0048AEC0  C0 22 EA 60 */	lfs f1, lbl_80887000@sda21(r0)
/* 80490864 0048AEC4  C0 02 EA A8 */	lfs f0, lbl_80887048@sda21(r0)
/* 80490868 0048AEC8  D0 64 8A B0 */	stfs f3, lbl_807C8AB0@l(r4)
/* 8049086C 0048AECC  D0 43 00 04 */	stfs f2, 0x4(r3)
/* 80490870 0048AED0  D0 63 00 08 */	stfs f3, 0x8(r3)
/* 80490874 0048AED4  D0 63 00 0C */	stfs f3, 0xc(r3)
/* 80490878 0048AED8  D0 23 00 10 */	stfs f1, 0x10(r3)
/* 8049087C 0048AEDC  D0 03 00 14 */	stfs f0, 0x14(r3)
/* 80490880 0048AEE0  4E 80 00 20 */	blr
.endfn fn_80490850

# 0x8072D380..0x8072D384 | size: 0x4
.section .ctors, "a"
.balign 4
	.4byte fn_80490850
