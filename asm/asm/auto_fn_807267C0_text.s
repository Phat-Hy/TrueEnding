.include "macros.inc"
.file "auto_fn_807267C0_text"

# 0x807267C0..0x807267CC | size: 0xC
.text
.balign 4

# .text:0x0 | 0x807267C0 | size: 0xC
.fn fn_807267C0, global
/* 807267C0 00720E20  38 0D AE 90 */	li r0, lbl_80880550@sda21
/* 807267C4 00720E24  90 0D AE 98 */	stw r0, lbl_80880558@sda21(r0)
/* 807267C8 00720E28  4E 80 00 20 */	blr
.endfn fn_807267C0

# 0x8072D42C..0x8072D430 | size: 0x4
.section .ctors, "a"
.balign 4
	.4byte fn_807267C0
