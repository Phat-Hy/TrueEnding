.include "macros.inc"
.file "auto_fn_80716030_text"

# 0x80716030..0x8071603C | size: 0xC
.text
.balign 4

# .text:0x0 | 0x80716030 | size: 0xC
.fn fn_80716030, global
/* 80716030 00710690  3C 60 80 86 */	lis r3, lbl_808632A8@ha
/* 80716034 00710694  38 63 32 A8 */	addi r3, r3, lbl_808632A8@l
/* 80716038 00710698  4B FF F7 98 */	b fn_807157D0
.endfn fn_80716030

# 0x8072D410..0x8072D414 | size: 0x4
.section .ctors, "a"
.balign 4
	.4byte fn_80716030
