.include "macros.inc"
.file "auto_fn_802CCAFC_text"

# 0x802CCAFC..0x802CCB20 | size: 0x24
.text
.balign 4

# .text:0x0 | 0x802CCAFC | size: 0x24
.fn fn_802CCAFC, global
/* 802CCAFC 002C715C  3C 80 80 7D */	lis r4, lbl_807C83B8@ha
/* 802CCB00 002C7160  C0 42 BF 10 */	lfs f2, lbl_808844B0@sda21(r0)
/* 802CCB04 002C7164  38 64 83 B8 */	addi r3, r4, lbl_807C83B8@l
/* 802CCB08 002C7168  C0 22 BF 14 */	lfs f1, lbl_808844B4@sda21(r0)
/* 802CCB0C 002C716C  C0 02 BF 18 */	lfs f0, lbl_808844B8@sda21(r0)
/* 802CCB10 002C7170  D0 44 83 B8 */	stfs f2, lbl_807C83B8@l(r4)
/* 802CCB14 002C7174  D0 23 00 04 */	stfs f1, 0x4(r3)
/* 802CCB18 002C7178  D0 03 00 08 */	stfs f0, 0x8(r3)
/* 802CCB1C 002C717C  4E 80 00 20 */	blr
.endfn fn_802CCAFC

# 0x8072D33C..0x8072D340 | size: 0x4
.section .ctors, "a"
.balign 4
	.4byte fn_802CCAFC
