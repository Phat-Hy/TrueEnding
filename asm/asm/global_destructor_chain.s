.include "macros.inc"
.file "global_destructor_chain.c"

# 0x80695420..0x80695480 | size: 0x60
.text
.balign 4

# .text:0x0 | 0x80695420 | size: 0x18
.fn __register_global_object, global
/* 80695420 0068FA80  80 0D AD 1C */	lwz r0, __global_destructor_chain@sda21(r0)
/* 80695424 0068FA84  90 05 00 00 */	stw r0, 0x0(r5)
/* 80695428 0068FA88  90 85 00 04 */	stw r4, 0x4(r5)
/* 8069542C 0068FA8C  90 65 00 08 */	stw r3, 0x8(r5)
/* 80695430 0068FA90  90 AD AD 1C */	stw r5, __global_destructor_chain@sda21(r0)
/* 80695434 0068FA94  4E 80 00 20 */	blr
.endfn __register_global_object

# .text:0x18 | 0x80695438 | size: 0x48
.fn __destroy_global_chain, global
/* 80695438 0068FA98  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8069543C 0068FA9C  7C 08 02 A6 */	mflr r0
/* 80695440 0068FAA0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80695444 0068FAA4  48 00 00 20 */	b .L_80695464
.L_80695448:
/* 80695448 0068FAA8  80 03 00 00 */	lwz r0, 0x0(r3)
/* 8069544C 0068FAAC  38 80 FF FF */	li r4, -0x1
/* 80695450 0068FAB0  90 0D AD 1C */	stw r0, __global_destructor_chain@sda21(r0)
/* 80695454 0068FAB4  81 83 00 04 */	lwz r12, 0x4(r3)
/* 80695458 0068FAB8  80 63 00 08 */	lwz r3, 0x8(r3)
/* 8069545C 0068FABC  7D 89 03 A6 */	mtctr r12
/* 80695460 0068FAC0  4E 80 04 21 */	bctrl
.L_80695464:
/* 80695464 0068FAC4  80 6D AD 1C */	lwz r3, __global_destructor_chain@sda21(r0)
/* 80695468 0068FAC8  2C 03 00 00 */	cmpwi r3, 0x0
/* 8069546C 0068FACC  40 82 FF DC */	bne .L_80695448
/* 80695470 0068FAD0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80695474 0068FAD4  7C 08 03 A6 */	mtlr r0
/* 80695478 0068FAD8  38 21 00 10 */	addi r1, r1, 0x10
/* 8069547C 0068FADC  4E 80 00 20 */	blr
.endfn __destroy_global_chain
