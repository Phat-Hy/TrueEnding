.include "macros.inc"
.file "auto_fn_80243700_text"

# 0x80243700..0x8024372C | size: 0x2C
.text
.balign 4

# .text:0x0 | 0x80243700 | size: 0x2C
.fn fn_80243700, global
/* 80243700 0023DD60  88 0D 9D 0C */	lbz r0, lbl_8087F3CC@sda21(r0)
/* 80243704 0023DD64  7C 00 07 75 */	extsb. r0, r0
/* 80243708 0023DD68  40 82 00 0C */	bne .L_80243714
/* 8024370C 0023DD6C  38 00 00 01 */	li r0, 0x1
/* 80243710 0023DD70  98 0D 9D 0C */	stb r0, lbl_8087F3CC@sda21(r0)
.L_80243714:
/* 80243714 0023DD74  88 0D 9D 0D */	lbz r0, lbl_8087F3CD@sda21(r0)
/* 80243718 0023DD78  7C 00 07 75 */	extsb. r0, r0
/* 8024371C 0023DD7C  4C 82 00 20 */	bnelr
/* 80243720 0023DD80  38 00 00 01 */	li r0, 0x1
/* 80243724 0023DD84  98 0D 9D 0D */	stb r0, lbl_8087F3CD@sda21(r0)
/* 80243728 0023DD88  4E 80 00 20 */	blr
.endfn fn_80243700

# 0x8072D31C..0x8072D320 | size: 0x4
.section .ctors, "a"
.balign 4
	.4byte fn_80243700
