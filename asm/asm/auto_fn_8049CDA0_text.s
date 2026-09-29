.include "macros.inc"
.file "auto_fn_8049CDA0_text"

# 0x8049CDA0..0x8049CDBC | size: 0x1C
.text
.balign 4

# .text:0x0 | 0x8049CDA0 | size: 0x1C
.fn fn_8049CDA0, global
/* 8049CDA0 00497400  38 8D 9E A0 */	li r4, lbl_8087F560@sda21
/* 8049CDA4 00497404  38 6D 9E A4 */	li r3, lbl_8087F564@sda21
/* 8049CDA8 00497408  38 0D 9E A8 */	li r0, lbl_8087F568@sda21
/* 8049CDAC 0049740C  90 8D 9E AC */	stw r4, lbl_8087F56C@sda21(r0)
/* 8049CDB0 00497410  90 6D 9E B0 */	stw r3, lbl_8087F570@sda21(r0)
/* 8049CDB4 00497414  90 0D 9E B4 */	stw r0, lbl_8087F574@sda21(r0)
/* 8049CDB8 00497418  4E 80 00 20 */	blr
.endfn fn_8049CDA0

# 0x8072D384..0x8072D388 | size: 0x4
.section .ctors, "a"
.balign 4
	.4byte fn_8049CDA0
