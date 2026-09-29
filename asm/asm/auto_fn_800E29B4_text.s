.include "macros.inc"
.file "auto_fn_800E29B4_text"

# 0x800E29B4..0x800E2A10 | size: 0x5C
.text
.balign 4

# .text:0x0 | 0x800E29B4 | size: 0x5C
.fn fn_800E29B4, global
/* 800E29B4 000DD014  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800E29B8 000DD018  7C 08 02 A6 */	mflr r0
/* 800E29BC 000DD01C  38 6D 99 60 */	li r3, lbl_8087F020@sda21
/* 800E29C0 000DD020  90 01 00 14 */	stw r0, 0x14(r1)
/* 800E29C4 000DD024  48 5A 8D AD */	bl fn_8068B770
/* 800E29C8 000DD028  3C 80 80 69 */	lis r4, fn_8068BC30@ha
/* 800E29CC 000DD02C  3C A0 80 7C */	lis r5, lbl_807C7810@ha
/* 800E29D0 000DD030  38 84 BC 30 */	addi r4, r4, fn_8068BC30@l
/* 800E29D4 000DD034  38 6D 99 60 */	li r3, lbl_8087F020@sda21
/* 800E29D8 000DD038  38 A5 78 10 */	addi r5, r5, lbl_807C7810@l
/* 800E29DC 000DD03C  48 5B 2A 45 */	bl __register_global_object
/* 800E29E0 000DD040  38 6D 99 64 */	li r3, lbl_8087F024@sda21
/* 800E29E4 000DD044  48 5A 93 7D */	bl fn_8068BD60
/* 800E29E8 000DD048  3C 80 80 69 */	lis r4, fn_8068C240@ha
/* 800E29EC 000DD04C  3C A0 80 7C */	lis r5, lbl_807C781C@ha
/* 800E29F0 000DD050  38 84 C2 40 */	addi r4, r4, fn_8068C240@l
/* 800E29F4 000DD054  38 6D 99 64 */	li r3, lbl_8087F024@sda21
/* 800E29F8 000DD058  38 A5 78 1C */	addi r5, r5, lbl_807C781C@l
/* 800E29FC 000DD05C  48 5B 2A 25 */	bl __register_global_object
/* 800E2A00 000DD060  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800E2A04 000DD064  7C 08 03 A6 */	mtlr r0
/* 800E2A08 000DD068  38 21 00 10 */	addi r1, r1, 0x10
/* 800E2A0C 000DD06C  4E 80 00 20 */	blr
.endfn fn_800E29B4

# 0x8072D2C8..0x8072D2CC | size: 0x4
.section .ctors, "a"
.balign 4
	.4byte fn_800E29B4
