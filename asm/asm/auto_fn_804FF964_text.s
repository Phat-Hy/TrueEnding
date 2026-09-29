.include "macros.inc"
.file "auto_fn_804FF964_text"

# 0x804FF964..0x804FF9C0 | size: 0x5C
.text
.balign 4

# .text:0x0 | 0x804FF964 | size: 0x5C
.fn fn_804FF964, global
/* 804FF964 004F9FC4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804FF968 004F9FC8  7C 08 02 A6 */	mflr r0
/* 804FF96C 004F9FCC  38 6D 9F 60 */	li r3, lbl_8087F620@sda21
/* 804FF970 004F9FD0  90 01 00 14 */	stw r0, 0x14(r1)
/* 804FF974 004F9FD4  48 18 BD FD */	bl fn_8068B770
/* 804FF978 004F9FD8  3C 80 80 69 */	lis r4, fn_8068BC30@ha
/* 804FF97C 004F9FDC  3C A0 80 7D */	lis r5, lbl_807C8F68@ha
/* 804FF980 004F9FE0  38 84 BC 30 */	addi r4, r4, fn_8068BC30@l
/* 804FF984 004F9FE4  38 6D 9F 60 */	li r3, lbl_8087F620@sda21
/* 804FF988 004F9FE8  38 A5 8F 68 */	addi r5, r5, lbl_807C8F68@l
/* 804FF98C 004F9FEC  48 19 5A 95 */	bl __register_global_object
/* 804FF990 004F9FF0  38 6D 9F 64 */	li r3, lbl_8087F624@sda21
/* 804FF994 004F9FF4  48 18 C3 CD */	bl fn_8068BD60
/* 804FF998 004F9FF8  3C 80 80 69 */	lis r4, fn_8068C240@ha
/* 804FF99C 004F9FFC  3C A0 80 7D */	lis r5, lbl_807C8F74@ha
/* 804FF9A0 004FA000  38 84 C2 40 */	addi r4, r4, fn_8068C240@l
/* 804FF9A4 004FA004  38 6D 9F 64 */	li r3, lbl_8087F624@sda21
/* 804FF9A8 004FA008  38 A5 8F 74 */	addi r5, r5, lbl_807C8F74@l
/* 804FF9AC 004FA00C  48 19 5A 75 */	bl __register_global_object
/* 804FF9B0 004FA010  80 01 00 14 */	lwz r0, 0x14(r1)
/* 804FF9B4 004FA014  7C 08 03 A6 */	mtlr r0
/* 804FF9B8 004FA018  38 21 00 10 */	addi r1, r1, 0x10
/* 804FF9BC 004FA01C  4E 80 00 20 */	blr
.endfn fn_804FF964

# 0x8072D3A4..0x8072D3A8 | size: 0x4
.section .ctors, "a"
.balign 4
	.4byte fn_804FF964
