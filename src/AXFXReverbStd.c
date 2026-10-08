#include "revolution/types.h"
#include "revolution/os.h"

/* External functions */
extern void _savegpr_25(void);
extern void _savegpr_27(void);
extern void _restgpr_25(void);
extern void _restgpr_27(void);
extern BOOL OSDisableInterrupts(void);
extern BOOL OSRestoreInterrupts(BOOL);
extern void fn_80610490(void);
extern void fn_806104A0(void);
extern void fn_80695D84(void);

/* External SDA symbols */
extern u32 lbl_8087E858;
extern u32 lbl_8087E85C;

/* External float/double constants (sdata2) */
extern f32 lbl_808886B8;
extern f32 lbl_808886BC;
extern f64 lbl_808886C0;
extern f32 lbl_808886C8;
extern f32 lbl_808886CC;
extern f32 lbl_808886D0;
extern f32 lbl_808886D4;
extern f32 lbl_808886D8;
extern f32 lbl_808886DC;
extern f32 lbl_808886E0;
extern f32 lbl_808886E4;

/* Function declarations */
void fn_8060EDF0(void);
void fn_8060EE00(void);
void fn_8060F060(void);
void fn_8060F210(void);
void fn_8060F2A0(void);
void fn_8060F600(void);
void fn_8060F800(void);

asm void fn_8060EDF0(void)
{
    nofralloc
    lis r3, 0x1
    subi r3, r3, 0x6a00
    blr
}

asm void fn_8060EE00(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r30, r3
    bl OSDisableInterrupts
    li r4, 0x1
    li r0, 0xc80
    stw r4, 0x7c(r30)
    mr r31, r3
    mr r27, r30
    li r29, 0x0
    stw r0, 0x1c(r30)
lbl_fn_8060EE00_00000048:
    lwz r0, 0x1c(r30)
    lwz r12, lbl_8087E858
    slwi r3, r0, 2
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    stw r3, 0x0(r27)
    bne lbl_fn_8060EE00_00000070
    li r0, 0x0
    b lbl_fn_8060EE00_00000084
lbl_fn_8060EE00_00000070:
    addi r29, r29, 0x1
    addi r27, r27, 0x4
    cmplwi r29, 0x3
    blt lbl_fn_8060EE00_00000048
    li r0, 0x1
lbl_fn_8060EE00_00000084:
    cmpwi r0, 0x0
    bne lbl_fn_8060EE00_000000EC
    bl OSDisableInterrupts
    lwz r0, 0x7c(r30)
    mr r27, r3
    li r28, 0x0
    li r29, 0x0
    ori r0, r0, 0x1
    stw r0, 0x7c(r30)
lbl_fn_8060EE00_000000A8:
    lwz r3, 0x0(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8060EE00_000000C0
    lwz r12, lbl_8087E85C
    mtctr r12
    bctrl
lbl_fn_8060EE00_000000C0:
    addi r28, r28, 0x1
    stw r29, 0x0(r30)
    cmplwi r28, 0x3
    addi r30, r30, 0x4
    blt lbl_fn_8060EE00_000000A8
    mr r3, r27
    bl OSRestoreInterrupts
    mr r3, r31
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_fn_8060EE00_00000250
lbl_fn_8060EE00_000000EC:
    mr r28, r30
    li r27, 0x0
lbl_fn_8060EE00_000000F4:
    lwz r3, 0x0(r28)
    cmpwi r3, 0x0
    bne lbl_fn_8060EE00_00000108
    li r4, 0x0
    b lbl_fn_8060EE00_00000160
lbl_fn_8060EE00_00000108:
    lwz r0, 0x1c(r30)
    li r4, 0x0
    slwi r5, r0, 2
    bl memset
    addi r27, r27, 0x1
    addi r28, r28, 0x4
    cmplwi r27, 0x3
    blt lbl_fn_8060EE00_000000F4
    lfs f1, lbl_808886B8
    li r0, 0x0
    lfs f0, 0x80(r30)
    stw r0, 0xc(r30)
    fmuls f1, f1, f0
    bl fn_80695D84
    lwz r0, 0x1c(r30)
    li r4, 0x1
    subf r3, r3, r0
    slwi r0, r0, 16
    slwi r3, r3, 16
    stw r3, 0x10(r30)
    stw r3, 0x14(r30)
    stw r0, 0x18(r30)
lbl_fn_8060EE00_00000160:
    cmpwi r4, 0x0
    bne lbl_fn_8060EE00_000001C8
    bl OSDisableInterrupts
    lwz r0, 0x7c(r30)
    mr r28, r3
    li r27, 0x0
    li r29, 0x0
    ori r0, r0, 0x1
    stw r0, 0x7c(r30)
lbl_fn_8060EE00_00000184:
    lwz r3, 0x0(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8060EE00_0000019C
    lwz r12, lbl_8087E85C
    mtctr r12
    bctrl
lbl_fn_8060EE00_0000019C:
    addi r27, r27, 0x1
    stw r29, 0x0(r30)
    cmplwi r27, 0x3
    addi r30, r30, 0x4
    blt lbl_fn_8060EE00_00000184
    mr r3, r28
    bl OSRestoreInterrupts
    mr r3, r31
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_fn_8060EE00_00000250
lbl_fn_8060EE00_000001C8:
    mr r3, r30
    bl fn_8060F600
    cmpwi r3, 0x0
    bne lbl_fn_8060EE00_00000238
    bl OSDisableInterrupts
    lwz r0, 0x7c(r30)
    mr r28, r3
    li r27, 0x0
    li r29, 0x0
    ori r0, r0, 0x1
    stw r0, 0x7c(r30)
lbl_fn_8060EE00_000001F4:
    lwz r3, 0x0(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8060EE00_0000020C
    lwz r12, lbl_8087E85C
    mtctr r12
    bctrl
lbl_fn_8060EE00_0000020C:
    addi r27, r27, 0x1
    stw r29, 0x0(r30)
    cmplwi r27, 0x3
    addi r30, r30, 0x4
    blt lbl_fn_8060EE00_000001F4
    mr r3, r28
    bl OSRestoreInterrupts
    mr r3, r31
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_fn_8060EE00_00000250
lbl_fn_8060EE00_00000238:
    lwz r0, 0x7c(r30)
    mr r3, r31
    clrrwi r0, r0, 1
    stw r0, 0x7c(r30)
    bl OSRestoreInterrupts
    li r3, 0x1
lbl_fn_8060EE00_00000250:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8060F060(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r30, r3
    bl OSDisableInterrupts
    lwz r0, 0x7c(r30)
    mr r31, r3
    mr r27, r30
    li r29, 0x0
    ori r0, r0, 0x1
    stw r0, 0x7c(r30)
lbl_fn_8060F060_000002A4:
    lwz r3, 0x0(r27)
    cmpwi r3, 0x0
    bne lbl_fn_8060F060_000002B8
    li r4, 0x0
    b lbl_fn_8060F060_00000310
lbl_fn_8060F060_000002B8:
    lwz r0, 0x1c(r30)
    li r4, 0x0
    slwi r5, r0, 2
    bl memset
    addi r29, r29, 0x1
    addi r27, r27, 0x4
    cmplwi r29, 0x3
    blt lbl_fn_8060F060_000002A4
    lfs f1, lbl_808886B8
    li r0, 0x0
    lfs f0, 0x80(r30)
    stw r0, 0xc(r30)
    fmuls f1, f1, f0
    bl fn_80695D84
    lwz r0, 0x1c(r30)
    li r4, 0x1
    subf r3, r3, r0
    slwi r0, r0, 16
    slwi r3, r3, 16
    stw r3, 0x10(r30)
    stw r3, 0x14(r30)
    stw r0, 0x18(r30)
lbl_fn_8060F060_00000310:
    cmpwi r4, 0x0
    bne lbl_fn_8060F060_00000378
    bl OSDisableInterrupts
    lwz r0, 0x7c(r30)
    mr r27, r3
    li r28, 0x0
    li r29, 0x0
    ori r0, r0, 0x1
    stw r0, 0x7c(r30)
lbl_fn_8060F060_00000334:
    lwz r3, 0x0(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8060F060_0000034C
    lwz r12, lbl_8087E85C
    mtctr r12
    bctrl
lbl_fn_8060F060_0000034C:
    addi r28, r28, 0x1
    stw r29, 0x0(r30)
    cmplwi r28, 0x3
    addi r30, r30, 0x4
    blt lbl_fn_8060F060_00000334
    mr r3, r27
    bl OSRestoreInterrupts
    mr r3, r31
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_fn_8060F060_00000408
lbl_fn_8060F060_00000378:
    mr r3, r30
    bl fn_8060F600
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_fn_8060F060_000003EC
    bl OSDisableInterrupts
    lwz r0, 0x7c(r30)
    mr r28, r3
    li r27, 0x0
    li r29, 0x0
    ori r0, r0, 0x1
    stw r0, 0x7c(r30)
lbl_fn_8060F060_000003A8:
    lwz r3, 0x0(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8060F060_000003C0
    lwz r12, lbl_8087E85C
    mtctr r12
    bctrl
lbl_fn_8060F060_000003C0:
    addi r27, r27, 0x1
    stw r29, 0x0(r30)
    cmplwi r27, 0x3
    addi r30, r30, 0x4
    blt lbl_fn_8060F060_000003A8
    mr r3, r28
    bl OSRestoreInterrupts
    mr r3, r31
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_fn_8060F060_00000408
lbl_fn_8060F060_000003EC:
    lwz r0, 0x7c(r30)
    mr r3, r31
    ori r0, r0, 0x2
    clrrwi r0, r0, 1
    stw r0, 0x7c(r30)
    bl OSRestoreInterrupts
    mr r3, r27
lbl_fn_8060F060_00000408:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8060F210(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    bl OSDisableInterrupts
    lwz r0, 0x7c(r28)
    mr r29, r3
    li r30, 0x0
    li r31, 0x0
    ori r0, r0, 0x1
    stw r0, 0x7c(r28)
lbl_fn_8060F210_0000045C:
    lwz r3, 0x0(r28)
    cmpwi r3, 0x0
    beq lbl_fn_8060F210_00000474
    lwz r12, lbl_8087E85C
    mtctr r12
    bctrl
lbl_fn_8060F210_00000474:
    addi r30, r30, 0x1
    stw r31, 0x0(r28)
    cmplwi r30, 0x3
    addi r28, r28, 0x4
    blt lbl_fn_8060F210_0000045C
    mr r3, r29
    bl OSRestoreInterrupts
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8060F2A0(void)
{
    nofralloc
    stwu r1, -0x200(r1)
    mflr r0
    stw r0, 0x204(r1)
    addi r11, r1, 0x1f0
    stfd f31, 0x1f0(r1)
    psq_st f31, 0x1f8(r1), 0, 0
    bl _savegpr_25
    lwz r0, 0x7c(r4)
    mr r27, r4
    cmpwi r0, 0x0
    beq lbl_fn_8060F2A0_000004E8
    rlwinm r0, r0, 0, 31, 29
    stw r0, 0x7c(r4)
    b lbl_fn_8060F2A0_000007F0
lbl_fn_8060F2A0_000004E8:
    lwz r7, 0x90(r4)
    lwz r6, 0x0(r3)
    lwz r5, 0x4(r3)
    cmpwi r7, 0x0
    lwz r0, 0x8(r3)
    stw r6, 0x20(r1)
    stw r5, 0x24(r1)
    stw r0, 0x28(r1)
    beq lbl_fn_8060F2A0_00000524
    lwz r5, 0x0(r7)
    lwz r3, 0x4(r7)
    lwz r0, 0x8(r7)
    stw r5, 0x14(r1)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
lbl_fn_8060F2A0_00000524:
    lwz r6, 0x94(r4)
    cmpwi r6, 0x0
    beq lbl_fn_8060F2A0_00000548
    lwz r5, 0x0(r6)
    lwz r3, 0x4(r6)
    lwz r0, 0x8(r6)
    stw r5, 0x8(r1)
    stw r3, 0xc(r1)
    stw r0, 0x10(r1)
lbl_fn_8060F2A0_00000548:
    addi r3, r1, 0x30
    addi r4, r4, 0x20
    bl fn_8060F800
    lfd f31, lbl_808886C0
    addi r30, r1, 0x30
    li r29, 0x0
    lis r31, 0x4330
    li r25, 0x0
    li r26, 0x3
lbl_fn_8060F2A0_0000056C:
    lwz r3, 0x10(r27)
    lwz r0, 0x0(r30)
    lwz r4, 0x18(r27)
    add r6, r3, r0
    cmpw r6, r4
    blt lbl_fn_8060F2A0_0000058C
    subf r6, r4, r6
    b lbl_fn_8060F2A0_00000598
lbl_fn_8060F2A0_0000058C:
    cmpwi r6, 0x0
    bge lbl_fn_8060F2A0_00000598
    add r6, r6, r4
lbl_fn_8060F2A0_00000598:
    lwz r0, 0x14(r27)
    subf. r3, r0, r6
    bge lbl_fn_8060F2A0_000005A8
    add r3, r3, r4
lbl_fn_8060F2A0_000005A8:
    srwi. r7, r3, 16
    clrlwi r8, r3, 16
    srwi r9, r0, 16
    lwz r28, 0x78(r27)
    mtctr r7
    beq lbl_fn_8060F2A0_00000614
lbl_fn_8060F2A0_000005C0:
    lwz r3, 0x0(r27)
    slwi r4, r9, 2
    slwi r0, r28, 2
    addi r28, r28, 0x1
    add r5, r27, r0
    lfsx f0, r3, r4
    stfs f0, 0x48(r5)
    addi r9, r9, 0x1
    clrlwi r28, r28, 30
    subi r7, r7, 0x1
    lwz r3, 0x4(r27)
    lfsx f0, r3, r4
    stfs f0, 0x58(r5)
    lwz r3, 0x8(r27)
    lfsx f0, r3, r4
    stfs f0, 0x68(r5)
    lwz r0, 0x1c(r27)
    cmplw r9, r0
    blt lbl_fn_8060F2A0_00000610
    li r9, 0x0
lbl_fn_8060F2A0_00000610:
    bdnz lbl_fn_8060F2A0_000005C0
lbl_fn_8060F2A0_00000614:
    clrrwi r0, r6, 16
    stw r0, 0x14(r27)
    extrwi r3, r8, 7, 16
    bl fn_806104A0
    mr r4, r27
    mr r7, r27
    addi r5, r1, 0x14
    addi r6, r1, 0x20
    addi r8, r1, 0x8
    mtctr r26
lbl_fn_8060F2A0_0000063C:
    slwi r0, r28, 2
    addi r28, r28, 0x1
    add r10, r4, r0
    lwz r0, 0x90(r27)
    clrlwi r28, r28, 30
    lfs f1, 0x0(r3)
    slwi r9, r28, 2
    lfs f0, 0x48(r10)
    addi r28, r28, 0x1
    lfs f5, lbl_808886BC
    fmuls f2, f1, f0
    add r11, r4, r9
    clrlwi r28, r28, 30
    lfs f1, 0x4(r3)
    slwi r9, r28, 2
    lfs f0, 0x48(r11)
    addi r28, r28, 0x1
    fmuls f4, f1, f0
    fadds f5, f5, f2
    add r10, r4, r9
    clrlwi r28, r28, 30
    lfs f3, 0x8(r3)
    slwi r9, r28, 2
    lfs f2, 0x48(r10)
    add r9, r4, r9
    fadds f5, f5, f4
    fmuls f2, f3, f2
    lfs f1, 0xc(r3)
    lfs f0, 0x48(r9)
    cmpwi r0, 0x0
    addi r28, r28, 0x1
    fmuls f0, f1, f0
    fadds f5, f5, f2
    clrlwi r28, r28, 30
    fadds f5, f5, f0
    beq lbl_fn_8060F2A0_00000700
    lwz r9, 0x0(r5)
    lwz r10, 0x0(r6)
    lwz r0, 0x0(r9)
    addi r9, r9, 0x4
    lwz r10, 0x0(r10)
    stw r31, 0x1b0(r1)
    add r0, r10, r0
    xoris r0, r0, 0x8000
    stw r0, 0x1b4(r1)
    lfd f0, 0x1b0(r1)
    stw r9, 0x0(r5)
    fsubs f1, f0, f31
    b lbl_fn_8060F2A0_0000071C
lbl_fn_8060F2A0_00000700:
    lwz r9, 0x0(r6)
    stw r31, 0x1b8(r1)
    lwz r0, 0x0(r9)
    xoris r0, r0, 0x8000
    stw r0, 0x1bc(r1)
    lfd f0, 0x1b8(r1)
    fsubs f1, f0, f31
lbl_fn_8060F2A0_0000071C:
    lfs f0, 0x8c(r27)
    lwz r0, 0xc(r27)
    fmuls f0, f5, f0
    lwz r11, 0x0(r7)
    slwi r10, r0, 2
    lwz r9, 0x0(r6)
    fadds f0, f1, f0
    addi r0, r9, 0x4
    stw r0, 0x0(r6)
    stfsx f0, r11, r10
    lfs f0, 0x98(r27)
    fmuls f0, f5, f0
    fctiwz f0, f0
    stfd f0, 0x1c0(r1)
    lwz r0, 0x1c4(r1)
    stw r0, 0x0(r9)
    lwz r0, 0x94(r27)
    cmpwi r0, 0x0
    beq lbl_fn_8060F2A0_0000078C
    lfs f0, 0x9c(r27)
    lwz r9, 0x0(r8)
    fmuls f0, f5, f0
    addi r0, r9, 0x4
    stw r0, 0x0(r8)
    fctiwz f0, f0
    stfd f0, 0x1c0(r1)
    lwz r0, 0x1c4(r1)
    stw r0, 0x0(r9)
lbl_fn_8060F2A0_0000078C:
    addi r4, r4, 0x10
    addi r5, r5, 0x4
    addi r6, r6, 0x4
    addi r7, r7, 0x4
    addi r8, r8, 0x4
    bdnz lbl_fn_8060F2A0_0000063C
    lwz r3, 0xc(r27)
    lwz r0, 0x1c(r27)
    addi r3, r3, 0x1
    stw r28, 0x78(r27)
    cmplw r3, r0
    stw r3, 0xc(r27)
    blt lbl_fn_8060F2A0_000007C4
    stw r25, 0xc(r27)
lbl_fn_8060F2A0_000007C4:
    lwz r3, 0x10(r27)
    lwz r0, 0x18(r27)
    addis r3, r3, 0x1
    stw r3, 0x10(r27)
    cmplw r3, r0
    blt lbl_fn_8060F2A0_000007E0
    stw r25, 0x10(r27)
lbl_fn_8060F2A0_000007E0:
    addi r29, r29, 0x1
    addi r30, r30, 0x4
    cmplwi r29, 0x60
    blt lbl_fn_8060F2A0_0000056C
lbl_fn_8060F2A0_000007F0:
    addi r11, r1, 0x1f0
    psq_l f31, 0x1f8(r1), 0, 0
    lfd f31, 0x1f0(r1)
    bl _restgpr_25
    lwz r0, 0x204(r1)
    mtlr r0
    addi r1, r1, 0x200
    blr
}

asm void fn_8060F600(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lfs f4, lbl_808886C8
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    lfs f1, 0x80(r3)
    fcmpo cr0, f1, f4
    blt lbl_fn_8060F600_00000840
    lfs f0, lbl_808886CC
    fcmpo cr0, f1, f0
    ble lbl_fn_8060F600_00000848
lbl_fn_8060F600_00000840:
    li r3, 0x0
    b lbl_fn_8060F600_000009F4
lbl_fn_8060F600_00000848:
    lfs f0, 0x84(r3)
    lfs f3, lbl_808886BC
    fcmpo cr0, f0, f3
    blt lbl_fn_8060F600_00000864
    lfs f2, lbl_808886D0
    fcmpo cr0, f0, f2
    ble lbl_fn_8060F600_0000086C
lbl_fn_8060F600_00000864:
    li r3, 0x0
    b lbl_fn_8060F600_000009F4
lbl_fn_8060F600_0000086C:
    lfs f1, 0x88(r3)
    fcmpo cr0, f1, f4
    blt lbl_fn_8060F600_00000884
    lfs f0, lbl_808886D4
    fcmpo cr0, f1, f0
    ble lbl_fn_8060F600_0000088C
lbl_fn_8060F600_00000884:
    li r3, 0x0
    b lbl_fn_8060F600_000009F4
lbl_fn_8060F600_0000088C:
    lfs f0, 0x8c(r3)
    fcmpo cr0, f0, f3
    blt lbl_fn_8060F600_000008A4
    fcmpo cr0, f0, f2
    cror eq, gt, eq
    bne lbl_fn_8060F600_000008AC
lbl_fn_8060F600_000008A4:
    li r3, 0x0
    b lbl_fn_8060F600_000009F4
lbl_fn_8060F600_000008AC:
    lfs f0, 0x98(r3)
    fcmpo cr0, f0, f3
    blt lbl_fn_8060F600_000008C0
    fcmpo cr0, f0, f2
    ble lbl_fn_8060F600_000008C8
lbl_fn_8060F600_000008C0:
    li r3, 0x0
    b lbl_fn_8060F600_000009F4
lbl_fn_8060F600_000008C8:
    lfs f0, 0x9c(r3)
    fcmpo cr0, f0, f3
    blt lbl_fn_8060F600_000008DC
    fcmpo cr0, f0, f2
    ble lbl_fn_8060F600_000008E4
lbl_fn_8060F600_000008DC:
    li r3, 0x0
    b lbl_fn_8060F600_000009F4
lbl_fn_8060F600_000008E4:
    bl fn_80610490
    lfs f2, lbl_808886B8
    lfs f1, 0x80(r31)
    lfs f0, 0x84(r31)
    fmuls f1, f2, f1
    stw r3, 0x20(r31)
    fmuls f6, f1, f0
    fcmpo cr0, f6, f1
    cror eq, gt, eq
    bne lbl_fn_8060F600_00000924
    lfs f1, lbl_808886D0
    lfs f0, lbl_808886BC
    fsubs f6, f6, f1
    fcmpo cr0, f6, f0
    bge lbl_fn_8060F600_00000924
    fmr f6, f0
lbl_fn_8060F600_00000924:
    lfs f3, 0x88(r31)
    li r4, 0x0
    lfs f2, lbl_808886E0
    li r0, -0x1
    lfs f4, lbl_808886DC
    li r3, 0x1
    fdivs f1, f2, f3
    lfs f0, lbl_808886E4
    lfs f5, lbl_808886D8
    stw r0, 0x38(r31)
    stw r4, 0x30(r31)
    stw r4, 0x34(r31)
    fmuls f7, f1, f0
    stw r4, 0x3c(r31)
    fmuls f1, f4, f3
    lfs f0, lbl_808886BC
    fmuls f4, f5, f6
    stw r4, 0x40(r31)
    fdivs f1, f1, f2
    fmuls f3, f5, f1
    fdivs f6, f6, f7
    fmuls f2, f5, f7
    fmuls f1, f5, f6
    fctiwz f4, f4
    fctiwz f3, f3
    fctiwz f2, f2
    stfd f4, 0x8(r1)
    fctiwz f1, f1
    stfd f3, 0x10(r1)
    lwz r7, 0xc(r1)
    stfd f2, 0x18(r1)
    lwz r6, 0x14(r1)
    stfd f1, 0x20(r1)
    lwz r5, 0x1c(r1)
    lwz r0, 0x24(r1)
    stw r7, 0x2c(r31)
    stw r6, 0x24(r31)
    stw r5, 0x28(r31)
    stw r0, 0x44(r31)
    stfs f0, 0x48(r31)
    stfs f0, 0x4c(r31)
    stfs f0, 0x50(r31)
    stfs f0, 0x54(r31)
    stfs f0, 0x58(r31)
    stfs f0, 0x5c(r31)
    stfs f0, 0x60(r31)
    stfs f0, 0x64(r31)
    stfs f0, 0x68(r31)
    stfs f0, 0x6c(r31)
    stfs f0, 0x70(r31)
    stfs f0, 0x74(r31)
    stw r4, 0x78(r31)
lbl_fn_8060F600_000009F4:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8060F800(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    li r0, 0x60
    stw r31, 0xc(r1)
    mtctr r0
lbl_fn_8060F800_00000A20:
    lwz r5, 0x10(r4)
    lwz r0, 0x18(r4)
    clrrwi r5, r5, 16
    cmplw r5, r0
    beq lbl_fn_8060F800_00000AA8
    stw r5, 0x18(r4)
    srwi r5, r5, 16
    addi r0, r5, 0x1
    lwz r6, 0x0(r4)
    slwi r5, r5, 2
    lwz r9, 0x24(r4)
    clrlslwi r0, r0, 25, 2
    lwzx r11, r6, r5
    lwzx r0, r6, r0
    lwz r5, 0xc(r4)
    subf r10, r11, r0
    mullw r0, r11, r5
    srawi r31, r10, 31
    srawi r7, r9, 31
    mullw r6, r10, r9
    rotlwi r12, r0, 8
    mulhw r0, r11, r5
    rotlwi r6, r6, 8
    mulhwu r8, r10, r9
    rlwimi r12, r0, 8, 0, 23
    mullw r9, r31, r9
    mullw r5, r10, r7
    add r8, r8, r9
    add r8, r8, r5
    rlwimi r6, r8, 8, 0, 23
    stw r6, 0x20(r4)
    srawi r5, r8, 24
    srawi r5, r0, 24
    b lbl_fn_8060F800_00000AB8
lbl_fn_8060F800_00000AA8:
    lwz r5, 0x1c(r4)
    lwz r0, 0x20(r4)
    add r12, r5, r0
    srawi r5, r12, 31
lbl_fn_8060F800_00000AB8:
    lwz r0, 0x14(r4)
    stw r12, 0x1c(r4)
    cmplwi r0, 0x1
    blt lbl_fn_8060F800_00000AD0
    subfic r12, r12, 0x0
    subfze r5, r5
lbl_fn_8060F800_00000AD0:
    lwz r5, 0x10(r4)
    lwz r0, 0x4(r4)
    add r5, r5, r0
    stw r5, 0x10(r4)
    clrrwi. r0, r5, 23
    beq lbl_fn_8060F800_00000AFC
    lwz r0, 0x14(r4)
    clrlwi r5, r5, 9
    stw r5, 0x10(r4)
    xori r0, r0, 0x1
    stw r0, 0x14(r4)
lbl_fn_8060F800_00000AFC:
    stw r12, 0x0(r3)
    addi r3, r3, 0x4
    bdnz lbl_fn_8060F800_00000A20
    lwz r31, 0xc(r1)
    addi r1, r1, 0x10
    blr
}
