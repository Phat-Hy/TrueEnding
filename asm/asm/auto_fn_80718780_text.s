.include "macros.inc"
.file "auto_fn_80718780_text"

# 0x80718780..0x807187C8 | size: 0x48
.text
.balign 4

# .text:0x0 | 0x80718780 | size: 0x48
.fn fn_80718780, global
/* 80718780 00712DE0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80718784 00712DE4  7C 08 02 A6 */	mflr r0
/* 80718788 00712DE8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8071878C 00712DEC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80718790 00712DF0  3F E0 80 86 */	lis r31, lbl_808638F0@ha
/* 80718794 00712DF4  38 7F 38 F0 */	addi r3, r31, lbl_808638F0@l
/* 80718798 00712DF8  48 00 52 79 */	bl fn_8071DA10
/* 8071879C 00712DFC  3C 80 80 72 */	lis r4, fn_8071DA30@ha
/* 807187A0 00712E00  3C A0 80 86 */	lis r5, lbl_808638E0@ha
/* 807187A4 00712E04  38 7F 38 F0 */	addi r3, r31, lbl_808638F0@l
/* 807187A8 00712E08  38 84 DA 30 */	addi r4, r4, fn_8071DA30@l
/* 807187AC 00712E0C  38 A5 38 E0 */	addi r5, r5, lbl_808638E0@l
/* 807187B0 00712E10  4B F7 CC 71 */	bl __register_global_object
/* 807187B4 00712E14  80 01 00 14 */	lwz r0, 0x14(r1)
/* 807187B8 00712E18  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 807187BC 00712E1C  7C 08 03 A6 */	mtlr r0
/* 807187C0 00712E20  38 21 00 10 */	addi r1, r1, 0x10
/* 807187C4 00712E24  4E 80 00 20 */	blr
.endfn fn_80718780

# 0x8072D414..0x8072D418 | size: 0x4
.section .ctors, "a"
.balign 4
	.4byte fn_80718780
