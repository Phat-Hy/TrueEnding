.include "macros.inc"
.file "auto_fn_801D8080_text"

# 0x801D8080..0x801D80A0 | size: 0x20
.text
.balign 4

# .text:0x0 | 0x801D8080 | size: 0x20
.fn fn_801D8080, global
/* 801D8080 001D26E0  3C 80 80 7C */	lis r4, lbl_807C7D28@ha
/* 801D8084 001D26E4  C0 22 A5 38 */	lfs f1, lbl_80882AD8@sda21(r0)
/* 801D8088 001D26E8  38 64 7D 28 */	addi r3, r4, lbl_807C7D28@l
/* 801D808C 001D26EC  C0 02 A5 48 */	lfs f0, lbl_80882AE8@sda21(r0)
/* 801D8090 001D26F0  D0 24 7D 28 */	stfs f1, lbl_807C7D28@l(r4)
/* 801D8094 001D26F4  D0 03 00 04 */	stfs f0, 0x4(r3)
/* 801D8098 001D26F8  D0 23 00 08 */	stfs f1, 0x8(r3)
/* 801D809C 001D26FC  4E 80 00 20 */	blr
.endfn fn_801D8080

# 0x8072D2EC..0x8072D2F0 | size: 0x4
.section .ctors, "a"
.balign 4
	.4byte fn_801D8080
