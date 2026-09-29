.include "macros.inc"
.file "auto_fn_80468F48_text"

# 0x80468F48..0x80468F54 | size: 0xC
.text
.balign 4

# .text:0x0 | 0x80468F48 | size: 0xC
.fn fn_80468F48, global
/* 80468F48 004635A8  C0 02 E8 E4 */	lfs f0, lbl_80886E84@sda21(r0)
/* 80468F4C 004635AC  D0 0D 9E 40 */	stfs f0, lbl_8087F500@sda21(r0)
/* 80468F50 004635B0  4E 80 00 20 */	blr
.endfn fn_80468F48

# 0x8072D378..0x8072D37C | size: 0x4
.section .ctors, "a"
.balign 4
	.4byte fn_80468F48
