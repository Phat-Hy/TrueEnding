.include "macros.inc"
.file "auto_fn_8031B09C_text"

# 0x8031B09C..0x8031B0A8 | size: 0xC
.text
.balign 4

# .text:0x0 | 0x8031B09C | size: 0xC
.fn fn_8031B09C, global
/* 8031B09C 003156FC  C0 02 C8 48 */	lfs f0, lbl_80884DE8@sda21(r0)
/* 8031B0A0 00315700  D0 0D 9D 30 */	stfs f0, lbl_8087F3F0@sda21(r0)
/* 8031B0A4 00315704  4E 80 00 20 */	blr
.endfn fn_8031B09C

# 0x8072D350..0x8072D354 | size: 0x4
.section .ctors, "a"
.balign 4
	.4byte fn_8031B09C
