.include "macros.inc"
.file "auto_fn_803CCF38_text"

# 0x803CCF38..0x803CCF64 | size: 0x2C
.text
.balign 4

# .text:0x0 | 0x803CCF38 | size: 0x2C
.fn fn_803CCF38, global
/* 803CCF38 003C7598  88 0D 9D 0C */	lbz r0, lbl_8087F3CC@sda21(r0)
/* 803CCF3C 003C759C  7C 00 07 75 */	extsb. r0, r0
/* 803CCF40 003C75A0  40 82 00 0C */	bne .L_803CCF4C
/* 803CCF44 003C75A4  38 00 00 01 */	li r0, 0x1
/* 803CCF48 003C75A8  98 0D 9D 0C */	stb r0, lbl_8087F3CC@sda21(r0)
.L_803CCF4C:
/* 803CCF4C 003C75AC  88 0D 9D 0D */	lbz r0, lbl_8087F3CD@sda21(r0)
/* 803CCF50 003C75B0  7C 00 07 75 */	extsb. r0, r0
/* 803CCF54 003C75B4  4C 82 00 20 */	bnelr
/* 803CCF58 003C75B8  38 00 00 01 */	li r0, 0x1
/* 803CCF5C 003C75BC  98 0D 9D 0D */	stb r0, lbl_8087F3CD@sda21(r0)
/* 803CCF60 003C75C0  4E 80 00 20 */	blr
.endfn fn_803CCF38

# 0x8072D360..0x8072D364 | size: 0x4
.section .ctors, "a"
.balign 4
	.4byte fn_803CCF38
