#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */

/* External data declarations */

/* Small data declarations */
extern u32 lbl_8087FBE8;

/* Function declarations */
void fn_805EC950(void);
void fn_805ECA00(void);
void fn_805ECB00(void);

asm void fn_805EC950(void)
{
    nofralloc
    mr r7, r3
    li r6, 0x0
    b lbl_fn_805EC950_00000020
    nop
lbl_fn_805EC950_00000010:
    cmplw r4, r7
    ble lbl_fn_805EC950_00000028
    mr r6, r7
    lwz r7, 0x4(r7)
lbl_fn_805EC950_00000020:
    cmpwi r7, 0x0
    bne lbl_fn_805EC950_00000010
lbl_fn_805EC950_00000028:
    cmpwi r7, 0x0
    stw r7, 0x4(r4)
    stw r6, 0x0(r4)
    beq lbl_fn_805EC950_0000006C
    stw r4, 0x0(r7)
    lwz r5, 0x8(r4)
    add r0, r4, r5
    cmplw r0, r7
    bne lbl_fn_805EC950_0000006C
    lwz r0, 0x8(r7)
    add r0, r5, r0
    stw r0, 0x8(r4)
    lwz r7, 0x4(r7)
    stw r7, 0x4(r4)
    cmpwi r7, 0x0
    beq lbl_fn_805EC950_0000006C
    stw r4, 0x0(r7)
lbl_fn_805EC950_0000006C:
    cmpwi r6, 0x0
    beq lbl_fn_805EC950_000000A8
    stw r4, 0x4(r6)
    lwz r5, 0x8(r6)
    add r0, r6, r5
    cmplw r0, r4
    bnelr
    lwz r0, 0x8(r4)
    cmpwi r7, 0x0
    add r0, r5, r0
    stw r0, 0x8(r6)
    stw r7, 0x4(r6)
    beqlr
    stw r6, 0x0(r7)
    blr
lbl_fn_805EC950_000000A8:
    mr r3, r4
    blr
}

asm void fn_805ECA00(void)
{
    nofralloc
    mulli r3, r3, 0xc
    lwz r5, lbl_8087FBE8
    addi r0, r4, 0x3f
    add r5, r5, r3
    clrrwi r4, r0, 5
    lwz r3, 0x4(r5)
    mr r6, r3
    b lbl_fn_805ECA00_000000E0
lbl_fn_805ECA00_000000D0:
    lwz r0, 0x8(r6)
    cmpw r4, r0
    ble lbl_fn_805ECA00_000000E8
    lwz r6, 0x4(r6)
lbl_fn_805ECA00_000000E0:
    cmpwi r6, 0x0
    bne lbl_fn_805ECA00_000000D0
lbl_fn_805ECA00_000000E8:
    cmpwi r6, 0x0
    bne lbl_fn_805ECA00_000000F8
    li r3, 0x0
    blr
lbl_fn_805ECA00_000000F8:
    lwz r0, 0x8(r6)
    subf r0, r4, r0
    cmplwi r0, 0x40
    bge lbl_fn_805ECA00_00000140
    lwz r4, 0x4(r6)
    cmpwi r4, 0x0
    beq lbl_fn_805ECA00_0000011C
    lwz r0, 0x0(r6)
    stw r0, 0x0(r4)
lbl_fn_805ECA00_0000011C:
    lwz r4, 0x0(r6)
    cmpwi r4, 0x0
    bne lbl_fn_805ECA00_00000130
    lwz r3, 0x4(r6)
    b lbl_fn_805ECA00_00000138
lbl_fn_805ECA00_00000130:
    lwz r0, 0x4(r6)
    stw r0, 0x4(r4)
lbl_fn_805ECA00_00000138:
    stw r3, 0x4(r5)
    b lbl_fn_805ECA00_00000180
lbl_fn_805ECA00_00000140:
    stw r4, 0x8(r6)
    add r4, r6, r4
    stw r0, 0x8(r4)
    lwz r0, 0x0(r6)
    stw r0, 0x0(r4)
    lwz r3, 0x4(r6)
    stw r3, 0x4(r4)
    cmpwi r3, 0x0
    beq lbl_fn_805ECA00_00000168
    stw r4, 0x0(r3)
lbl_fn_805ECA00_00000168:
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_805ECA00_0000017C
    stw r4, 0x4(r3)
    b lbl_fn_805ECA00_00000180
lbl_fn_805ECA00_0000017C:
    stw r4, 0x4(r5)
lbl_fn_805ECA00_00000180:
    lwz r3, 0x8(r5)
    li r0, 0x0
    stw r3, 0x4(r6)
    cmpwi r3, 0x0
    stw r0, 0x0(r6)
    beq lbl_fn_805ECA00_0000019C
    stw r6, 0x0(r3)
lbl_fn_805ECA00_0000019C:
    stw r6, 0x8(r5)
    addi r3, r6, 0x20
    blr
}

asm void fn_805ECB00(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    subi r4, r4, 0x20
    stw r0, 0x14(r1)
    mulli r0, r3, 0xc
    stw r31, 0xc(r1)
    lwz r5, lbl_8087FBE8
    lwz r6, 0x4(r4)
    add r31, r5, r0
    cmpwi r6, 0x0
    lwz r3, 0x8(r31)
    beq lbl_fn_805ECB00_000001E8
    lwz r0, 0x0(r4)
    stw r0, 0x0(r6)
lbl_fn_805ECB00_000001E8:
    lwz r5, 0x0(r4)
    cmpwi r5, 0x0
    bne lbl_fn_805ECB00_000001FC
    lwz r3, 0x4(r4)
    b lbl_fn_805ECB00_00000204
lbl_fn_805ECB00_000001FC:
    lwz r0, 0x4(r4)
    stw r0, 0x4(r5)
lbl_fn_805ECB00_00000204:
    stw r3, 0x8(r31)
    lwz r3, 0x4(r31)
    bl fn_805EC950
    stw r3, 0x4(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
