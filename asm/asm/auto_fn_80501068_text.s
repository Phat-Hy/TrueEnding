.include "macros.inc"
.file "auto_fn_80501068_text"

# 0x80501068..0x805010C4 | size: 0x5C
.text
.balign 4

# .text:0x0 | 0x80501068 | size: 0x5C
.fn fn_80501068, global
/* 80501068 004FB6C8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8050106C 004FB6CC  7C 08 02 A6 */	mflr r0
/* 80501070 004FB6D0  38 6D 9F 78 */	li r3, lbl_8087F638@sda21
/* 80501074 004FB6D4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80501078 004FB6D8  48 18 A6 F9 */	bl fn_8068B770
/* 8050107C 004FB6DC  3C 80 80 69 */	lis r4, fn_8068BC30@ha
/* 80501080 004FB6E0  3C A0 80 7D */	lis r5, lbl_807C8F80@ha
/* 80501084 004FB6E4  38 84 BC 30 */	addi r4, r4, fn_8068BC30@l
/* 80501088 004FB6E8  38 6D 9F 78 */	li r3, lbl_8087F638@sda21
/* 8050108C 004FB6EC  38 A5 8F 80 */	addi r5, r5, lbl_807C8F80@l
/* 80501090 004FB6F0  48 19 43 91 */	bl __register_global_object
/* 80501094 004FB6F4  38 6D 9F 7C */	li r3, lbl_8087F63C@sda21
/* 80501098 004FB6F8  48 18 AC C9 */	bl fn_8068BD60
/* 8050109C 004FB6FC  3C 80 80 69 */	lis r4, fn_8068C240@ha
/* 805010A0 004FB700  3C A0 80 7D */	lis r5, lbl_807C8F8C@ha
/* 805010A4 004FB704  38 84 C2 40 */	addi r4, r4, fn_8068C240@l
/* 805010A8 004FB708  38 6D 9F 7C */	li r3, lbl_8087F63C@sda21
/* 805010AC 004FB70C  38 A5 8F 8C */	addi r5, r5, lbl_807C8F8C@l
/* 805010B0 004FB710  48 19 43 71 */	bl __register_global_object
/* 805010B4 004FB714  80 01 00 14 */	lwz r0, 0x14(r1)
/* 805010B8 004FB718  7C 08 03 A6 */	mtlr r0
/* 805010BC 004FB71C  38 21 00 10 */	addi r1, r1, 0x10
/* 805010C0 004FB720  4E 80 00 20 */	blr
.endfn fn_80501068

# 0x8072D3A8..0x8072D3AC | size: 0x4
.section .ctors, "a"
.balign 4
	.4byte fn_80501068
