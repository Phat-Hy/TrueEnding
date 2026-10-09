#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */

/* External data declarations */
extern u8 lbl_80775208[];

/* Small data declarations */
extern u32 lbl_8087D6C0;

/* Function declarations */
void fn_800081C0(void);
void fn_80008210(void);

asm void fn_800081C0(void)
{
    nofralloc
    lwz r0, lbl_8087D6C0
    lis r4, lbl_80775208@ha
    addi r4, r4, lbl_80775208@l
    li r5, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_800081C0_00000048
lbl_fn_800081C0_0000001C:
    lwz r0, 0x0(r4)
    cmpw r3, r0
    bne lbl_fn_800081C0_0000003C
    mulli r0, r5, 0x28
    lis r3, lbl_80775208@ha
    addi r3, r3, lbl_80775208@l
    add r3, r3, r0
    blr
lbl_fn_800081C0_0000003C:
    addi r4, r4, 0x28
    addi r5, r5, 0x1
    bdnz lbl_fn_800081C0_0000001C
lbl_fn_800081C0_00000048:
    li r3, 0x0
    blr
}

asm void fn_80008210(void)
{
    nofralloc
    lwz r0, lbl_8087D6C0
    lis r6, lbl_80775208@ha
    addi r6, r6, lbl_80775208@l
    li r7, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80008210_000000E4
lbl_fn_80008210_0000006C:
    lwz r0, 0x0(r6)
    cmpw r3, r0
    bne lbl_fn_80008210_000000D8
    cmpwi r4, 0x0
    beq lbl_fn_80008210_00000098
    mulli r0, r7, 0x28
    lis r3, lbl_80775208@ha
    addi r3, r3, lbl_80775208@l
    add r3, r3, r0
    lwz r0, 0x14(r3)
    stw r0, 0x0(r4)
lbl_fn_80008210_00000098:
    cmpwi r5, 0x0
    blt lbl_fn_80008210_000000C0
    mulli r3, r7, 0x28
    lis r4, lbl_80775208@ha
    slwi r0, r5, 2
    addi r4, r4, lbl_80775208@l
    add r3, r4, r3
    lwz r3, 0x24(r3)
    lwzx r3, r3, r0
    blr
lbl_fn_80008210_000000C0:
    mulli r0, r7, 0x28
    lis r3, lbl_80775208@ha
    addi r3, r3, lbl_80775208@l
    add r3, r3, r0
    lwz r3, 0x18(r3)
    blr
lbl_fn_80008210_000000D8:
    addi r6, r6, 0x28
    addi r7, r7, 0x1
    bdnz lbl_fn_80008210_0000006C
lbl_fn_80008210_000000E4:
    li r3, 0x0
    blr
}
