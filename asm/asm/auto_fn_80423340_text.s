.include "macros.inc"
.file "auto_fn_80423340_text"

# 0x80423340..0x8042335C | size: 0x1C
.text
.balign 4

# .text:0x0 | 0x80423340 | size: 0x1C
.fn fn_80423340, global
/* 80423340 0041D9A0  38 8D 9E 08 */	li r4, lbl_8087F4C8@sda21
/* 80423344 0041D9A4  38 6D 9E 0C */	li r3, lbl_8087F4CC@sda21
/* 80423348 0041D9A8  38 0D 9E 10 */	li r0, lbl_8087F4D0@sda21
/* 8042334C 0041D9AC  90 8D 9E 14 */	stw r4, lbl_8087F4D4@sda21(r0)
/* 80423350 0041D9B0  90 6D 9E 18 */	stw r3, lbl_8087F4D8@sda21(r0)
/* 80423354 0041D9B4  90 0D 9E 1C */	stw r0, lbl_8087F4DC@sda21(r0)
/* 80423358 0041D9B8  4E 80 00 20 */	blr
.endfn fn_80423340

# 0x8072D368..0x8072D36C | size: 0x4
.section .ctors, "a"
.balign 4
	.4byte fn_80423340
