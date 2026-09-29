.include "macros.inc"
.file "auto_fn_802CFFC8_text"

# 0x802CFFC8..0x802D0038 | size: 0x70
.text
.balign 4

# .text:0x0 | 0x802CFFC8 | size: 0x70
.fn fn_802CFFC8, global
/* 802CFFC8 002CA628  3C C0 80 7D */	lis r6, lbl_807C83C8@ha
/* 802CFFCC 002CA62C  C1 22 BF 9C */	lfs f9, lbl_8088453C@sda21(r0)
/* 802CFFD0 002CA630  38 C6 83 C8 */	addi r6, r6, lbl_807C83C8@l
/* 802CFFD4 002CA634  C0 A2 BF A8 */	lfs f5, lbl_80884548@sda21(r0)
/* 802CFFD8 002CA638  C0 42 BF 84 */	lfs f2, lbl_80884524@sda21(r0)
/* 802CFFDC 002CA63C  38 A6 00 00 */	addi r5, r6, 0x0
/* 802CFFE0 002CA640  C1 02 BF A0 */	lfs f8, lbl_80884540@sda21(r0)
/* 802CFFE4 002CA644  38 86 00 10 */	addi r4, r6, 0x10
/* 802CFFE8 002CA648  C0 C2 BF 4C */	lfs f6, lbl_808844EC@sda21(r0)
/* 802CFFEC 002CA64C  38 66 00 20 */	addi r3, r6, 0x20
/* 802CFFF0 002CA650  C0 E2 BF A4 */	lfs f7, lbl_80884544@sda21(r0)
/* 802CFFF4 002CA654  C0 82 BF AC */	lfs f4, lbl_8088454C@sda21(r0)
/* 802CFFF8 002CA658  C0 62 BF 98 */	lfs f3, lbl_80884538@sda21(r0)
/* 802CFFFC 002CA65C  C0 22 BF B0 */	lfs f1, lbl_80884550@sda21(r0)
/* 802D0000 002CA660  C0 02 BF B4 */	lfs f0, lbl_80884554@sda21(r0)
/* 802D0004 002CA664  D1 26 00 00 */	stfs f9, 0x0(r6)
/* 802D0008 002CA668  D1 05 00 04 */	stfs f8, 0x4(r5)
/* 802D000C 002CA66C  D0 E5 00 08 */	stfs f7, 0x8(r5)
/* 802D0010 002CA670  D0 C5 00 0C */	stfs f6, 0xc(r5)
/* 802D0014 002CA674  D0 A6 00 10 */	stfs f5, 0x10(r6)
/* 802D0018 002CA678  D0 84 00 04 */	stfs f4, 0x4(r4)
/* 802D001C 002CA67C  D0 64 00 08 */	stfs f3, 0x8(r4)
/* 802D0020 002CA680  D0 C4 00 0C */	stfs f6, 0xc(r4)
/* 802D0024 002CA684  D0 46 00 20 */	stfs f2, 0x20(r6)
/* 802D0028 002CA688  D0 23 00 04 */	stfs f1, 0x4(r3)
/* 802D002C 002CA68C  D0 03 00 08 */	stfs f0, 0x8(r3)
/* 802D0030 002CA690  D0 C3 00 0C */	stfs f6, 0xc(r3)
/* 802D0034 002CA694  4E 80 00 20 */	blr
.endfn fn_802CFFC8

# 0x8072D340..0x8072D344 | size: 0x4
.section .ctors, "a"
.balign 4
	.4byte fn_802CFFC8
