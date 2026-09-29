.include "macros.inc"
.file "auto_fn_80254530_text"

# 0x80254530..0x8025457C | size: 0x4C
.text
.balign 4

# .text:0x0 | 0x80254530 | size: 0x4C
.fn fn_80254530, global
/* 80254530 0024EB90  3C C0 80 7D */	lis r6, lbl_807C8300@ha
/* 80254534 0024EB94  C0 62 AD 9C */	lfs f3, lbl_8088333C@sda21(r0)
/* 80254538 0024EB98  38 C6 83 00 */	addi r6, r6, lbl_807C8300@l
/* 8025453C 0024EB9C  C0 02 AE 0C */	lfs f0, lbl_808833AC@sda21(r0)
/* 80254540 0024EBA0  38 A6 00 00 */	addi r5, r6, 0x0
/* 80254544 0024EBA4  C0 42 AD B8 */	lfs f2, lbl_80883358@sda21(r0)
/* 80254548 0024EBA8  38 86 00 0C */	addi r4, r6, 0xc
/* 8025454C 0024EBAC  38 66 00 18 */	addi r3, r6, 0x18
/* 80254550 0024EBB0  C0 22 AE 08 */	lfs f1, lbl_808833A8@sda21(r0)
/* 80254554 0024EBB4  D0 66 00 00 */	stfs f3, 0x0(r6)
/* 80254558 0024EBB8  D0 65 00 04 */	stfs f3, 0x4(r5)
/* 8025455C 0024EBBC  D0 45 00 08 */	stfs f2, 0x8(r5)
/* 80254560 0024EBC0  D0 66 00 0C */	stfs f3, 0xc(r6)
/* 80254564 0024EBC4  D0 64 00 04 */	stfs f3, 0x4(r4)
/* 80254568 0024EBC8  D0 24 00 08 */	stfs f1, 0x8(r4)
/* 8025456C 0024EBCC  D0 06 00 18 */	stfs f0, 0x18(r6)
/* 80254570 0024EBD0  D0 63 00 04 */	stfs f3, 0x4(r3)
/* 80254574 0024EBD4  D0 23 00 08 */	stfs f1, 0x8(r3)
/* 80254578 0024EBD8  4E 80 00 20 */	blr
.endfn fn_80254530

# 0x8072D324..0x8072D328 | size: 0x4
.section .ctors, "a"
.balign 4
	.4byte fn_80254530
