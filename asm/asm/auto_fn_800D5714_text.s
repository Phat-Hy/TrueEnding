.include "macros.inc"
.file "auto_fn_800D5714_text"

# 0x800D5714..0x800D5738 | size: 0x24
.text
.balign 4

# .text:0x0 | 0x800D5714 | size: 0x24
.fn fn_800D5714, global
/* 800D5714 000CFD74  3C 60 80 73 */	lis r3, lbl_80734628@ha
/* 800D5718 000CFD78  3C 80 80 7C */	lis r4, lbl_807C75D0@ha
/* 800D571C 000CFD7C  38 A3 46 28 */	addi r5, r3, lbl_80734628@l
/* 800D5720 000CFD80  80 03 46 28 */	lwz r0, lbl_80734628@l(r3)
/* 800D5724 000CFD84  38 64 75 D0 */	addi r3, r4, lbl_807C75D0@l
/* 800D5728 000CFD88  80 A5 00 04 */	lwz r5, 0x4(r5)
/* 800D572C 000CFD8C  90 A3 00 04 */	stw r5, 0x4(r3)
/* 800D5730 000CFD90  90 04 75 D0 */	stw r0, lbl_807C75D0@l(r4)
/* 800D5734 000CFD94  4E 80 00 20 */	blr
.endfn fn_800D5714

# 0x8072D2C4..0x8072D2C8 | size: 0x4
.section .ctors, "a"
.balign 4
	.4byte fn_800D5714
