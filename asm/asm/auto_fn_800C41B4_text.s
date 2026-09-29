.include "macros.inc"
.file "auto_fn_800C41B4_text"

# 0x800C41B4..0x800C41D0 | size: 0x1C
.text
.balign 4

# .text:0x0 | 0x800C41B4 | size: 0x1C
.fn fn_800C41B4, global
/* 800C41B4 000BE814  38 8D 99 08 */	li r4, lbl_8087EFC8@sda21
/* 800C41B8 000BE818  38 6D 99 0C */	li r3, lbl_8087EFCC@sda21
/* 800C41BC 000BE81C  38 0D 99 10 */	li r0, lbl_8087EFD0@sda21
/* 800C41C0 000BE820  90 8D 99 14 */	stw r4, lbl_8087EFD4@sda21(r0)
/* 800C41C4 000BE824  90 6D 99 18 */	stw r3, lbl_8087EFD8@sda21(r0)
/* 800C41C8 000BE828  90 0D 99 1C */	stw r0, lbl_8087EFDC@sda21(r0)
/* 800C41CC 000BE82C  4E 80 00 20 */	blr
.endfn fn_800C41B4

# 0x8072D2C0..0x8072D2C4 | size: 0x4
.section .ctors, "a"
.balign 4
	.4byte fn_800C41B4
