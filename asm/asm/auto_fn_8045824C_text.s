.include "macros.inc"
.file "auto_fn_8045824C_text"

# 0x8045824C..0x80458270 | size: 0x24
.text
.balign 4

# .text:0x0 | 0x8045824C | size: 0x24
.fn fn_8045824C, global
/* 8045824C 004528AC  3C 80 80 7D */	lis r4, lbl_807C8A48@ha
/* 80458250 004528B0  C0 22 E6 70 */	lfs f1, lbl_80886C10@sda21(r0)
/* 80458254 004528B4  38 64 8A 48 */	addi r3, r4, lbl_807C8A48@l
/* 80458258 004528B8  C0 02 E5 D8 */	lfs f0, lbl_80886B78@sda21(r0)
/* 8045825C 004528BC  D0 24 8A 48 */	stfs f1, lbl_807C8A48@l(r4)
/* 80458260 004528C0  D0 23 00 04 */	stfs f1, 0x4(r3)
/* 80458264 004528C4  D0 23 00 08 */	stfs f1, 0x8(r3)
/* 80458268 004528C8  D0 03 00 0C */	stfs f0, 0xc(r3)
/* 8045826C 004528CC  4E 80 00 20 */	blr
.endfn fn_8045824C

# 0x8072D374..0x8072D378 | size: 0x4
.section .ctors, "a"
.balign 4
	.4byte fn_8045824C
