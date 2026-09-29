.include "macros.inc"
.file "auto_03_80691E1C_text"

# 0x80691E1C..0x80691E68 | size: 0x4C
.text
.balign 4

# .text:0x0 | 0x80691E1C | size: 0xC
.fn fn_80691E1C, global
/* 80691E1C 0068C47C  3C 60 00 01 */	lis r3, 0x1
/* 80691E20 0068C480  38 63 FF FF */	subi r3, r3, 0x1
/* 80691E24 0068C484  4E 80 00 20 */	blr
.endfn fn_80691E1C

# .text:0xC | 0x80691E28 | size: 0x14
.fn fn_80691E28, global
/* 80691E28 0068C488  39 60 00 3C */	li r11, 0x3c
/* 80691E2C 0068C48C  7D 63 58 2E */	lwzx r11, r3, r11
/* 80691E30 0068C490  7C 63 5A 14 */	add r3, r3, r11
/* 80691E34 0068C494  38 63 FF F4 */	subi r3, r3, 0xc
/* 80691E38 0068C498  4B FF A6 08 */	b fn_8068C440
.endfn fn_80691E28

# .text:0x20 | 0x80691E3C | size: 0x14
.fn fn_80691E3C, global
/* 80691E3C 0068C49C  39 60 00 3C */	li r11, 0x3c
/* 80691E40 0068C4A0  7D 63 58 2E */	lwzx r11, r3, r11
/* 80691E44 0068C4A4  7C 63 5A 14 */	add r3, r3, r11
/* 80691E48 0068C4A8  38 63 FF F8 */	subi r3, r3, 0x8
/* 80691E4C 0068C4AC  4B FF A5 24 */	b fn_8068C370
.endfn fn_80691E3C

# .text:0x34 | 0x80691E50 | size: 0x18
.fn fn_80691E50, global
/* 80691E50 0068C4B0  80 0D AC E0 */	lwz r0, lbl_808803A0@sda21(r0)
/* 80691E54 0068C4B4  2C 00 00 00 */	cmpwi r0, 0x0
/* 80691E58 0068C4B8  4D 82 00 20 */	beqlr
/* 80691E5C 0068C4BC  38 00 00 00 */	li r0, 0x0
/* 80691E60 0068C4C0  90 0D AC E0 */	stw r0, lbl_808803A0@sda21(r0)
/* 80691E64 0068C4C4  4E 80 00 20 */	blr
.endfn fn_80691E50
