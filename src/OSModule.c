#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void OSDisableInterrupts(void);
extern void OSInitThreadQueue(void);
extern void OSRestoreInterrupts(void);
extern void OSSleepThread(void);
extern void OSWakeupThread(void);

/* External data declarations */

/* Small data declarations */

/* Function declarations */
void __OSModuleInit(void);
void fn_805F2670(void);
void fn_805F26D0(void);
void fn_805F27A0(void);
void fn_805F2880(void);

asm void __OSModuleInit(void)
{
    nofralloc
    lis r3, 0x8000
    li r0, 0x0
    stw r0, 0x30cc(r3)
    stw r0, 0x30c8(r3)
    stw r0, 0x30d0(r3)
    blr
}

asm void fn_805F2670(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bl OSInitThreadQueue
    addi r3, r29, 0x8
    bl OSInitThreadQueue
    li r0, 0x0
    stw r30, 0x10(r29)
    stw r31, 0x14(r29)
    stw r0, 0x18(r29)
    stw r0, 0x1c(r29)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805F26D0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    bl OSDisableInterrupts
    mr r30, r3
    clrlwi r31, r31, 31
    b lbl_fn_805F26D0_000000D8
lbl_fn_805F26D0_000000B8:
    cmpwi r31, 0x0
    bne lbl_fn_805F26D0_000000D0
    mr r3, r30
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_fn_805F26D0_00000128
lbl_fn_805F26D0_000000D0:
    mr r3, r28
    bl OSSleepThread
lbl_fn_805F26D0_000000D8:
    lwz r4, 0x1c(r28)
    lwz r6, 0x14(r28)
    cmpw r6, r4
    ble lbl_fn_805F26D0_000000B8
    lwz r0, 0x18(r28)
    addi r3, r28, 0x8
    lwz r5, 0x10(r28)
    add r4, r0, r4
    divw r0, r4, r6
    mullw r0, r0, r6
    subf r0, r0, r4
    slwi r0, r0, 2
    stwx r29, r5, r0
    lwz r4, 0x1c(r28)
    addi r0, r4, 0x1
    stw r0, 0x1c(r28)
    bl OSWakeupThread
    mr r3, r30
    bl OSRestoreInterrupts
    li r3, 0x1
lbl_fn_805F26D0_00000128:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805F27A0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r4
    bl OSDisableInterrupts
    mr r29, r3
    clrlwi r30, r30, 31
    b lbl_fn_805F27A0_000001A8
lbl_fn_805F27A0_00000188:
    cmpwi r30, 0x0
    bne lbl_fn_805F27A0_000001A0
    mr r3, r29
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_fn_805F27A0_0000020C
lbl_fn_805F27A0_000001A0:
    addi r3, r31, 0x8
    bl OSSleepThread
lbl_fn_805F27A0_000001A8:
    lwz r0, 0x1c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_805F27A0_00000188
    cmpwi r28, 0x0
    beq lbl_fn_805F27A0_000001D0
    lwz r0, 0x18(r31)
    lwz r3, 0x10(r31)
    slwi r0, r0, 2
    lwzx r0, r3, r0
    stw r0, 0x0(r28)
lbl_fn_805F27A0_000001D0:
    lwz r4, 0x18(r31)
    mr r3, r31
    lwz r6, 0x14(r31)
    addi r7, r4, 0x1
    lwz r4, 0x1c(r31)
    divw r5, r7, r6
    subi r0, r4, 0x1
    stw r0, 0x1c(r31)
    mullw r0, r5, r6
    subf r0, r0, r7
    stw r0, 0x18(r31)
    bl OSWakeupThread
    mr r3, r29
    bl OSRestoreInterrupts
    li r3, 0x1
lbl_fn_805F27A0_0000020C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805F2880(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    bl OSDisableInterrupts
    mr r30, r3
    clrlwi r31, r31, 31
    b lbl_fn_805F2880_00000288
lbl_fn_805F2880_00000268:
    cmpwi r31, 0x0
    bne lbl_fn_805F2880_00000280
    mr r3, r30
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_fn_805F2880_000002E0
lbl_fn_805F2880_00000280:
    mr r3, r28
    bl OSSleepThread
lbl_fn_805F2880_00000288:
    lwz r6, 0x14(r28)
    lwz r0, 0x1c(r28)
    cmpw r6, r0
    ble lbl_fn_805F2880_00000268
    lwz r0, 0x18(r28)
    addi r3, r28, 0x8
    lwz r4, 0x10(r28)
    add r5, r6, r0
    subi r5, r5, 0x1
    divw r0, r5, r6
    mullw r0, r0, r6
    subf r0, r0, r5
    stw r0, 0x18(r28)
    slwi r0, r0, 2
    stwx r29, r4, r0
    lwz r4, 0x1c(r28)
    addi r0, r4, 0x1
    stw r0, 0x1c(r28)
    bl OSWakeupThread
    mr r3, r30
    bl OSRestoreInterrupts
    li r3, 0x1
lbl_fn_805F2880_000002E0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
