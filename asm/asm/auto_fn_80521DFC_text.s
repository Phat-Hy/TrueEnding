.include "macros.inc"
.file "auto_fn_80521DFC_text"

# 0x80521DFC..0x80521E20 | size: 0x24
.text
.balign 4

# .text:0x0 | 0x80521DFC | size: 0x24
.fn fn_80521DFC, global
/* 80521DFC 0051C45C  3C 80 80 7D */	lis r4, lbl_807C9100@ha
/* 80521E00 0051C460  C0 42 F3 94 */	lfs f2, lbl_80887934@sda21(r0)
/* 80521E04 0051C464  38 64 91 00 */	addi r3, r4, lbl_807C9100@l
/* 80521E08 0051C468  C0 22 F3 64 */	lfs f1, lbl_80887904@sda21(r0)
/* 80521E0C 0051C46C  C0 02 F3 98 */	lfs f0, lbl_80887938@sda21(r0)
/* 80521E10 0051C470  D0 44 91 00 */	stfs f2, lbl_807C9100@l(r4)
/* 80521E14 0051C474  D0 23 00 04 */	stfs f1, 0x4(r3)
/* 80521E18 0051C478  D0 03 00 08 */	stfs f0, 0x8(r3)
/* 80521E1C 0051C47C  4E 80 00 20 */	blr
.endfn fn_80521DFC

# 0x8072D3B4..0x8072D3B8 | size: 0x4
.section .ctors, "a"
.balign 4
	.4byte fn_80521DFC
