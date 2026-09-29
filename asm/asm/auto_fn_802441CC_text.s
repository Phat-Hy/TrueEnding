.include "macros.inc"
.file "auto_fn_802441CC_text"

# 0x802441CC..0x80244228 | size: 0x5C
.text
.balign 4

# .text:0x0 | 0x802441CC | size: 0x5C
.fn fn_802441CC, global
/* 802441CC 0023E82C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802441D0 0023E830  7C 08 02 A6 */	mflr r0
/* 802441D4 0023E834  38 6D 9D 10 */	li r3, lbl_8087F3D0@sda21
/* 802441D8 0023E838  90 01 00 14 */	stw r0, 0x14(r1)
/* 802441DC 0023E83C  48 44 75 95 */	bl fn_8068B770
/* 802441E0 0023E840  3C 80 80 69 */	lis r4, fn_8068BC30@ha
/* 802441E4 0023E844  3C A0 80 7D */	lis r5, lbl_807C82E8@ha
/* 802441E8 0023E848  38 84 BC 30 */	addi r4, r4, fn_8068BC30@l
/* 802441EC 0023E84C  38 6D 9D 10 */	li r3, lbl_8087F3D0@sda21
/* 802441F0 0023E850  38 A5 82 E8 */	addi r5, r5, lbl_807C82E8@l
/* 802441F4 0023E854  48 45 12 2D */	bl __register_global_object
/* 802441F8 0023E858  38 6D 9D 14 */	li r3, lbl_8087F3D4@sda21
/* 802441FC 0023E85C  48 44 7B 65 */	bl fn_8068BD60
/* 80244200 0023E860  3C 80 80 69 */	lis r4, fn_8068C240@ha
/* 80244204 0023E864  3C A0 80 7D */	lis r5, lbl_807C82F4@ha
/* 80244208 0023E868  38 84 C2 40 */	addi r4, r4, fn_8068C240@l
/* 8024420C 0023E86C  38 6D 9D 14 */	li r3, lbl_8087F3D4@sda21
/* 80244210 0023E870  38 A5 82 F4 */	addi r5, r5, lbl_807C82F4@l
/* 80244214 0023E874  48 45 12 0D */	bl __register_global_object
/* 80244218 0023E878  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8024421C 0023E87C  7C 08 03 A6 */	mtlr r0
/* 80244220 0023E880  38 21 00 10 */	addi r1, r1, 0x10
/* 80244224 0023E884  4E 80 00 20 */	blr
.endfn fn_802441CC

# 0x8072D320..0x8072D324 | size: 0x4
.section .ctors, "a"
.balign 4
	.4byte fn_802441CC
