.include "macros.inc"
.file "auto_fn_804405CC_text"

# 0x804405CC..0x804405F8 | size: 0x2C
.text
.balign 4

# .text:0x0 | 0x804405CC | size: 0x2C
.fn fn_804405CC, global
/* 804405CC 0043AC2C  88 0D 9D 0C */	lbz r0, lbl_8087F3CC@sda21(r0)
/* 804405D0 0043AC30  7C 00 07 75 */	extsb. r0, r0
/* 804405D4 0043AC34  40 82 00 0C */	bne .L_804405E0
/* 804405D8 0043AC38  38 00 00 01 */	li r0, 0x1
/* 804405DC 0043AC3C  98 0D 9D 0C */	stb r0, lbl_8087F3CC@sda21(r0)
.L_804405E0:
/* 804405E0 0043AC40  88 0D 9D 0D */	lbz r0, lbl_8087F3CD@sda21(r0)
/* 804405E4 0043AC44  7C 00 07 75 */	extsb. r0, r0
/* 804405E8 0043AC48  4C 82 00 20 */	bnelr
/* 804405EC 0043AC4C  38 00 00 01 */	li r0, 0x1
/* 804405F0 0043AC50  98 0D 9D 0D */	stb r0, lbl_8087F3CD@sda21(r0)
/* 804405F4 0043AC54  4E 80 00 20 */	blr
.endfn fn_804405CC

# 0x8072D370..0x8072D374 | size: 0x4
.section .ctors, "a"
.balign 4
	.4byte fn_804405CC
