.include "macros.inc"
.file "auto_fn_802C7BC8_text"

# 0x802C7BC8..0x802C7BE4 | size: 0x1C
.text
.balign 4

# .text:0x0 | 0x802C7BC8 | size: 0x1C
.fn fn_802C7BC8, global
/* 802C7BC8 002C2228  3C 80 80 7D */	lis r4, lbl_807C83A8@ha
/* 802C7BCC 002C222C  C0 02 BE 44 */	lfs f0, lbl_808843E4@sda21(r0)
/* 802C7BD0 002C2230  38 64 83 A8 */	addi r3, r4, lbl_807C83A8@l
/* 802C7BD4 002C2234  D0 04 83 A8 */	stfs f0, lbl_807C83A8@l(r4)
/* 802C7BD8 002C2238  D0 03 00 04 */	stfs f0, 0x4(r3)
/* 802C7BDC 002C223C  D0 03 00 08 */	stfs f0, 0x8(r3)
/* 802C7BE0 002C2240  4E 80 00 20 */	blr
.endfn fn_802C7BC8

# 0x8072D338..0x8072D33C | size: 0x4
.section .ctors, "a"
.balign 4
	.4byte fn_802C7BC8
