.include "macros.inc"
.file "auto_fn_80081DC8_text"

# 0x80081DC8..0x80081E54 | size: 0x8C
.text
.balign 4

# .text:0x0 | 0x80081DC8 | size: 0x8C
.fn fn_80081DC8, global
/* 80081DC8 0007C428  3D 00 80 7C */	lis r8, lbl_807C7028@ha
/* 80081DCC 0007C42C  C0 22 86 28 */	lfs f1, lbl_80880BC8@sda21(r0)
/* 80081DD0 0007C430  39 08 70 28 */	addi r8, r8, lbl_807C7028@l
/* 80081DD4 0007C434  C0 02 86 2C */	lfs f0, lbl_80880BCC@sda21(r0)
/* 80081DD8 0007C438  38 68 00 38 */	addi r3, r8, 0x38
/* 80081DDC 0007C43C  D0 28 00 00 */	stfs f1, 0x0(r8)
/* 80081DE0 0007C440  38 A8 00 18 */	addi r5, r8, 0x18
/* 80081DE4 0007C444  38 88 00 28 */	addi r4, r8, 0x28
/* 80081DE8 0007C448  38 C8 00 08 */	addi r6, r8, 0x8
/* 80081DEC 0007C44C  38 E8 00 00 */	addi r7, r8, 0x0
/* 80081DF0 0007C450  D0 27 00 04 */	stfs f1, 0x4(r7)
/* 80081DF4 0007C454  D0 28 00 08 */	stfs f1, 0x8(r8)
/* 80081DF8 0007C458  D0 26 00 04 */	stfs f1, 0x4(r6)
/* 80081DFC 0007C45C  D0 26 00 08 */	stfs f1, 0x8(r6)
/* 80081E00 0007C460  D0 28 00 18 */	stfs f1, 0x18(r8)
/* 80081E04 0007C464  D0 25 00 04 */	stfs f1, 0x4(r5)
/* 80081E08 0007C468  D0 25 00 08 */	stfs f1, 0x8(r5)
/* 80081E0C 0007C46C  D0 25 00 0C */	stfs f1, 0xc(r5)
/* 80081E10 0007C470  D0 28 00 28 */	stfs f1, 0x28(r8)
/* 80081E14 0007C474  D0 24 00 04 */	stfs f1, 0x4(r4)
/* 80081E18 0007C478  D0 24 00 08 */	stfs f1, 0x8(r4)
/* 80081E1C 0007C47C  D0 04 00 0C */	stfs f0, 0xc(r4)
/* 80081E20 0007C480  D0 08 00 38 */	stfs f0, 0x38(r8)
/* 80081E24 0007C484  D0 23 00 04 */	stfs f1, 0x4(r3)
/* 80081E28 0007C488  D0 23 00 08 */	stfs f1, 0x8(r3)
/* 80081E2C 0007C48C  D0 23 00 0C */	stfs f1, 0xc(r3)
/* 80081E30 0007C490  D0 23 00 10 */	stfs f1, 0x10(r3)
/* 80081E34 0007C494  D0 03 00 14 */	stfs f0, 0x14(r3)
/* 80081E38 0007C498  D0 23 00 18 */	stfs f1, 0x18(r3)
/* 80081E3C 0007C49C  D0 23 00 1C */	stfs f1, 0x1c(r3)
/* 80081E40 0007C4A0  D0 23 00 20 */	stfs f1, 0x20(r3)
/* 80081E44 0007C4A4  D0 23 00 24 */	stfs f1, 0x24(r3)
/* 80081E48 0007C4A8  D0 03 00 28 */	stfs f0, 0x28(r3)
/* 80081E4C 0007C4AC  D0 23 00 2C */	stfs f1, 0x2c(r3)
/* 80081E50 0007C4B0  4E 80 00 20 */	blr
.endfn fn_80081DC8

# 0x8072D2B4..0x8072D2B8 | size: 0x4
.section .ctors, "a"
.balign 4
	.4byte fn_80081DC8
