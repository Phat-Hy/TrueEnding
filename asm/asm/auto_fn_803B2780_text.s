.include "macros.inc"
.file "auto_fn_803B2780_text"

# 0x803B2780..0x803B27AC | size: 0x2C
.text
.balign 4

# .text:0x0 | 0x803B2780 | size: 0x2C
.fn fn_803B2780, global
/* 803B2780 003ACDE0  88 0D 9D 0C */	lbz r0, lbl_8087F3CC@sda21(r0)
/* 803B2784 003ACDE4  7C 00 07 75 */	extsb. r0, r0
/* 803B2788 003ACDE8  40 82 00 0C */	bne .L_803B2794
/* 803B278C 003ACDEC  38 00 00 01 */	li r0, 0x1
/* 803B2790 003ACDF0  98 0D 9D 0C */	stb r0, lbl_8087F3CC@sda21(r0)
.L_803B2794:
/* 803B2794 003ACDF4  88 0D 9D 0D */	lbz r0, lbl_8087F3CD@sda21(r0)
/* 803B2798 003ACDF8  7C 00 07 75 */	extsb. r0, r0
/* 803B279C 003ACDFC  4C 82 00 20 */	bnelr
/* 803B27A0 003ACE00  38 00 00 01 */	li r0, 0x1
/* 803B27A4 003ACE04  98 0D 9D 0D */	stb r0, lbl_8087F3CD@sda21(r0)
/* 803B27A8 003ACE08  4E 80 00 20 */	blr
.endfn fn_803B2780

# 0x8072D358..0x8072D35C | size: 0x4
.section .ctors, "a"
.balign 4
	.4byte fn_803B2780
