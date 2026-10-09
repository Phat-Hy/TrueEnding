#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void OSDisableInterrupts(void);
extern void OSGetCurrentThread(void);
extern void OSInitThreadQueue(void);
extern void OSRestoreInterrupts(void);
extern void OSSetArenaHi(void);
extern void OSSetArenaLo(void);
extern void OSWakeupThread(void);
extern void fn_805EFD90(void);

/* External data declarations */

/* Small data declarations */
extern u32 lbl_8087FBF8;
extern u32 lbl_8087FC40;
extern u32 lbl_8087FC44;

/* Function declarations */
void __OSUnlockAllMutex(void);
void fn_805F3350(void);
void fn_805F3410(void);
void fn_805F3420(void);
void fn_805F3430(void);
void fn_805F34A0(void);

asm void __OSUnlockAllMutex(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    b lbl___OSUnlockAllMutex_00000048
lbl___OSUnlockAllMutex_00000020:
    lwz r4, 0x10(r3)
    cmpwi r4, 0x0
    bne lbl___OSUnlockAllMutex_00000034
    stw r31, 0x2f8(r30)
    b lbl___OSUnlockAllMutex_00000038
lbl___OSUnlockAllMutex_00000034:
    stw r31, 0x14(r4)
lbl___OSUnlockAllMutex_00000038:
    stw r4, 0x2f4(r30)
    stw r31, 0xc(r3)
    stw r31, 0x8(r3)
    bl OSWakeupThread
lbl___OSUnlockAllMutex_00000048:
    lwz r3, 0x2f4(r30)
    cmpwi r3, 0x0
    bne lbl___OSUnlockAllMutex_00000020
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805F3350(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    bl OSDisableInterrupts
    mr r31, r3
    bl OSGetCurrentThread
    lwz r0, 0x8(r29)
    cmpwi r0, 0x0
    bne lbl_fn_805F3350_000000E4
    lwz r4, 0xc(r29)
    stw r3, 0x8(r29)
    addi r0, r4, 0x1
    stw r0, 0xc(r29)
    lwz r4, 0x2f8(r3)
    cmpwi r4, 0x0
    bne lbl_fn_805F3350_000000C8
    stw r29, 0x2f4(r3)
    b lbl_fn_805F3350_000000CC
lbl_fn_805F3350_000000C8:
    stw r29, 0x10(r4)
lbl_fn_805F3350_000000CC:
    li r0, 0x0
    stw r4, 0x14(r29)
    li r30, 0x1
    stw r0, 0x10(r29)
    stw r29, 0x2f8(r3)
    b lbl_fn_805F3350_00000104
lbl_fn_805F3350_000000E4:
    cmplw r0, r3
    bne lbl_fn_805F3350_00000100
    lwz r3, 0xc(r29)
    li r30, 0x1
    addi r0, r3, 0x1
    stw r0, 0xc(r29)
    b lbl_fn_805F3350_00000104
lbl_fn_805F3350_00000100:
    li r30, 0x0
lbl_fn_805F3350_00000104:
    mr r3, r31
    bl OSRestoreInterrupts
    mr r3, r30
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805F3410(void)
{
    nofralloc
    b OSInitThreadQueue
}

asm void fn_805F3420(void)
{
    nofralloc
    b OSWakeupThread
}

asm void fn_805F3430(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    bl OSDisableInterrupts
    lis r3, 0x8128
    bl OSSetArenaLo
    lis r3, 0x812f
    bl OSSetArenaHi
    li r0, 0x0
    stw r0, 0x8(r1)
    lis r4, 0x8000
    mr r3, r31
    lwz r0, 0x3194(r4)
    oris r4, r30, 0x8000
    stw r0, lbl_8087FBF8
    addi r5, r1, 0x8
    bl fn_805EFD90
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805F34A0(void)
{
    nofralloc
    lwz r0, lbl_8087FC40
    stw r0, 0x0(r3)
    lwz r0, lbl_8087FC44
    stw r0, 0x0(r4)
    blr
}
