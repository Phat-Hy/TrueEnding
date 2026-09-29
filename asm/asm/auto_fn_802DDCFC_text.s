.include "macros.inc"
.file "auto_fn_802DDCFC_text"

# 0x802DDCFC..0x802DDD1C | size: 0x20
.text
.balign 4

# .text:0x0 | 0x802DDCFC | size: 0x20
.fn fn_802DDCFC, global
/* 802DDCFC 002D835C  3C 80 80 7D */	lis r4, lbl_807C83F8@ha
/* 802DDD00 002D8360  C0 22 C0 50 */	lfs f1, lbl_808845F0@sda21(r0)
/* 802DDD04 002D8364  38 64 83 F8 */	addi r3, r4, lbl_807C83F8@l
/* 802DDD08 002D8368  C0 02 C0 D4 */	lfs f0, lbl_80884674@sda21(r0)
/* 802DDD0C 002D836C  D0 24 83 F8 */	stfs f1, lbl_807C83F8@l(r4)
/* 802DDD10 002D8370  D0 03 00 04 */	stfs f0, 0x4(r3)
/* 802DDD14 002D8374  D0 23 00 08 */	stfs f1, 0x8(r3)
/* 802DDD18 002D8378  4E 80 00 20 */	blr
.endfn fn_802DDCFC

# 0x8072D344..0x8072D348 | size: 0x4
.section .ctors, "a"
.balign 4
	.4byte fn_802DDCFC
