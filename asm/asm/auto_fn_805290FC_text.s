.include "macros.inc"
.file "auto_fn_805290FC_text"

# 0x805290FC..0x8052911C | size: 0x20
.text
.balign 4

# .text:0x0 | 0x805290FC | size: 0x20
.fn fn_805290FC, global
/* 805290FC 0052375C  3C 80 80 7D */	lis r4, lbl_807C9110@ha
/* 80529100 00523760  C0 22 F4 E4 */	lfs f1, lbl_80887A84@sda21(r0)
/* 80529104 00523764  38 64 91 10 */	addi r3, r4, lbl_807C9110@l
/* 80529108 00523768  C0 02 F4 C0 */	lfs f0, lbl_80887A60@sda21(r0)
/* 8052910C 0052376C  D0 24 91 10 */	stfs f1, lbl_807C9110@l(r4)
/* 80529110 00523770  D0 03 00 04 */	stfs f0, 0x4(r3)
/* 80529114 00523774  D0 03 00 08 */	stfs f0, 0x8(r3)
/* 80529118 00523778  4E 80 00 20 */	blr
.endfn fn_805290FC

# 0x8072D3B8..0x8072D3BC | size: 0x4
.section .ctors, "a"
.balign 4
	.4byte fn_805290FC
