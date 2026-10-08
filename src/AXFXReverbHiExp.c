#include "revolution/types.h"
#include "revolution/os.h"

/* External functions */
extern void _savegpr_23(void);
extern void _savegpr_24(void);
extern void _savegpr_25(void);
extern void _restgpr_23(void);
extern void _restgpr_24(void);
extern void _restgpr_25(void);
extern BOOL OSDisableInterrupts(void);
extern BOOL OSRestoreInterrupts(BOOL);
extern void fn_8068AEB0(void);
extern void fn_80695D84(void);

/* External large data symbols */
extern u8 lbl_807AF660[];
extern u8 lbl_807AF720[];

/* External SDA symbols */
extern u32 lbl_8087E858;
extern u32 lbl_8087E85C;

/* External float/double constants (sdata2) */
extern f32 lbl_808885C8;
extern f32 lbl_808885CC;
extern f32 lbl_808885D0;
extern f32 lbl_808885D4;
extern f32 lbl_808885D8;
extern f64 lbl_808885E0;
extern f32 lbl_808885E8;
extern f64 lbl_808885F0;
extern f32 lbl_808885F8;
extern f64 lbl_80888600;
extern f32 lbl_80888608;

/* Function declarations */
void fn_8060B180(void);
void fn_8060B320(void);
void fn_8060B380(void);
void fn_8060B8B0(void);
void fn_8060BA30(void);
void fn_8060BB60(void);
void fn_8060BC80(void);
void fn_8060BFB0(void);

asm void fn_8060B180(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    bl OSDisableInterrupts
    lfs f1, 0x114(r30)
    li r0, 0x1
    lfs f0, lbl_808885CC
    mr r31, r3
    stw r0, 0x10c(r30)
    fcmpo cr0, f1, f0
    bge lbl_fn_8060B180_00000070
    bl OSDisableInterrupts
    lwz r0, 0x10c(r30)
    mr r29, r3
    mr r3, r30
    ori r0, r0, 0x1
    stw r0, 0x10c(r30)
    bl fn_8060BB60
    mr r3, r29
    bl OSRestoreInterrupts
    mr r3, r31
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_fn_8060B180_00000180
lbl_fn_8060B180_00000070:
    lfs f0, lbl_808885C8
    lis r3, lbl_807AF660@ha
    addi r3, r3, lbl_807AF660@l
    lwz r0, 0x5c(r3)
    fmuls f1, f0, f1
    stw r0, 0x1c(r30)
    bl fn_80695D84
    stw r3, 0x40(r30)
    lis r4, lbl_807AF720@ha
    addi r4, r4, lbl_807AF720@l
    mr r3, r30
    lwz r0, 0xc0(r4)
    stw r0, 0x80(r30)
    lwz r0, 0xc4(r4)
    stw r0, 0x84(r30)
    lwz r0, 0xc8(r4)
    stw r0, 0x88(r30)
    lwz r0, 0xcc(r4)
    stw r0, 0xc0(r30)
    lwz r0, 0xd0(r4)
    stw r0, 0xc4(r30)
    lwz r0, 0xd4(r4)
    stw r0, 0xec(r30)
    lwz r0, 0xd8(r4)
    stw r0, 0xf0(r30)
    lwz r0, 0xdc(r4)
    stw r0, 0xf4(r30)
    bl fn_8060B8B0
    cmpwi r3, 0x0
    bne lbl_fn_8060B180_0000011C
    bl OSDisableInterrupts
    lwz r0, 0x10c(r30)
    mr r29, r3
    mr r3, r30
    ori r0, r0, 0x1
    stw r0, 0x10c(r30)
    bl fn_8060BB60
    mr r3, r29
    bl OSRestoreInterrupts
    mr r3, r31
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_fn_8060B180_00000180
lbl_fn_8060B180_0000011C:
    mr r3, r30
    bl fn_8060BA30
    mr r3, r30
    bl fn_8060BC80
    cmpwi r3, 0x0
    bne lbl_fn_8060B180_00000168
    bl OSDisableInterrupts
    lwz r0, 0x10c(r30)
    mr r29, r3
    mr r3, r30
    ori r0, r0, 0x1
    stw r0, 0x10c(r30)
    bl fn_8060BB60
    mr r3, r29
    bl OSRestoreInterrupts
    mr r3, r31
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_fn_8060B180_00000180
lbl_fn_8060B180_00000168:
    lwz r0, 0x10c(r30)
    mr r3, r31
    clrrwi r0, r0, 1
    stw r0, 0x10c(r30)
    bl OSRestoreInterrupts
    li r3, 0x1
lbl_fn_8060B180_00000180:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8060B320(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl OSDisableInterrupts
    lwz r0, 0x10c(r30)
    mr r31, r3
    mr r3, r30
    ori r0, r0, 0x1
    stw r0, 0x10c(r30)
    bl fn_8060BB60
    mr r3, r31
    bl OSRestoreInterrupts
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8060B380(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r11, r1, 0x70
    bl _savegpr_25
    lwz r0, 0x10c(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8060B380_0000022C
    rlwinm r0, r0, 0, 31, 29
    stw r0, 0x10c(r4)
    b lbl_fn_8060B380_0000070C
lbl_fn_8060B380_0000022C:
    lwz r7, 0x138(r4)
    lwz r6, 0x0(r3)
    lwz r5, 0x4(r3)
    cmpwi r7, 0x0
    lwz r0, 0x8(r3)
    stw r6, 0x2c(r1)
    stw r5, 0x30(r1)
    stw r0, 0x34(r1)
    beq lbl_fn_8060B380_00000268
    lwz r5, 0x0(r7)
    lwz r3, 0x4(r7)
    lwz r0, 0x8(r7)
    stw r5, 0x8(r1)
    stw r3, 0xc(r1)
    stw r0, 0x10(r1)
lbl_fn_8060B380_00000268:
    lwz r7, 0x13c(r4)
    cmpwi r7, 0x0
    beq lbl_fn_8060B380_00000280
    lwz r3, 0x0(r7)
    lwz r5, 0x4(r7)
    lwz r6, 0x8(r7)
lbl_fn_8060B380_00000280:
    lfs f0, lbl_808885D0
    li r31, 0x0
    lfs f1, 0x108(r4)
    li r29, 0x0
    lfs f5, lbl_808885D4
    lis r0, 0x4330
    lfs f3, 0x134(r4)
    fsubs f4, f0, f1
    lfs f2, lbl_808885D8
    li r30, 0x3
    lfs f0, 0x12c(r4)
    fmuls f5, f5, f3
    lfs f3, 0xf8(r4)
    fmuls f6, f2, f0
    lfd f0, lbl_808885E0
    nop
lbl_fn_8060B380_000002C0:
    mr r9, r4
    mr r10, r4
    mr r11, r4
    addi r7, r1, 0x8
    addi r8, r1, 0x2c
    addi r12, r1, 0x14
    mtctr r30
    nop
lbl_fn_8060B380_000002E0:
    lwz r26, 0x138(r4)
    cmpwi r26, 0x0
    beq lbl_fn_8060B380_00000320
    lwz r27, 0x0(r7)
    lwz r28, 0x0(r8)
    lwz r26, 0x0(r27)
    addi r27, r27, 0x4
    lwz r28, 0x0(r28)
    stw r0, 0x38(r1)
    add r26, r28, r26
    xoris r26, r26, 0x8000
    stw r26, 0x3c(r1)
    lfd f2, 0x38(r1)
    stw r27, 0x0(r7)
    fsubs f11, f2, f0
    b lbl_fn_8060B380_0000033C
lbl_fn_8060B380_00000320:
    lwz r26, 0x0(r8)
    stw r0, 0x40(r1)
    lwz r26, 0x0(r26)
    xoris r26, r26, 0x8000
    stw r26, 0x44(r1)
    lfd f2, 0x40(r1)
    fsubs f11, f2, f0
lbl_fn_8060B380_0000033C:
    lwz r28, 0xc(r4)
    lwz r27, 0x10(r4)
    lwz r26, 0x14(r4)
    slwi r28, r28, 2
    lwz r25, 0x0(r9)
    slwi r27, r27, 2
    lfs f9, 0x20(r4)
    slwi r26, r26, 2
    lfsx f8, r25, r28
    lfs f7, 0x24(r4)
    lfsx f2, r25, r27
    fmuls f8, f9, f8
    lfs f10, 0x28(r4)
    lfsx f9, r25, r26
    fmuls f2, f7, f2
    stfsx f11, r25, r26
    fmuls f7, f10, f9
    fadds f2, f8, f2
    lwz r27, 0x3c(r4)
    cmpwi r27, 0x0
    fadds f2, f7, f2
    beq lbl_fn_8060B380_000003AC
    lwz r27, 0x38(r4)
    lwz r28, 0x2c(r9)
    slwi r27, r27, 2
    lfsx f9, r28, r27
    stfsx f11, r28, r27
    b lbl_fn_8060B380_000003B0
lbl_fn_8060B380_000003AC:
    fmr f9, f11
lbl_fn_8060B380_000003B0:
    lwz r27, 0x68(r4)
    lwz r25, 0x44(r10)
    slwi r27, r27, 2
    lfs f7, 0x8c(r4)
    lfsx f8, r25, r27
    lfs f10, lbl_808885CC
    fmuls f7, f8, f7
    fadds f10, f10, f8
    fadds f7, f9, f7
    stfsx f7, r25, r27
    lwz r27, 0x6c(r4)
    lwz r26, 0x48(r10)
    slwi r27, r27, 2
    lfs f7, 0x90(r4)
    lfsx f8, r26, r27
    fmuls f7, f8, f7
    fadds f10, f10, f8
    fadds f7, f9, f7
    stfsx f7, r26, r27
    lwz r27, 0x70(r4)
    lwz r28, 0x4c(r10)
    slwi r27, r27, 2
    lfs f7, 0x94(r4)
    lfsx f8, r28, r27
    fmuls f7, f8, f7
    fadds f10, f10, f8
    fadds f7, f9, f7
    stfsx f7, r28, r27
    lwz r27, 0xb0(r4)
    lwz r25, 0x98(r11)
    slwi r27, r27, 2
    lfsx f8, r25, r27
    fmuls f7, f8, f3
    fadds f7, f10, f7
    stfsx f7, r25, r27
    fmuls f7, f7, f3
    lwz r27, 0xb4(r4)
    lwz r26, 0x9c(r11)
    slwi r27, r27, 2
    fsubs f8, f8, f7
    lfsx f9, r26, r27
    fmuls f7, f9, f3
    fadds f7, f8, f7
    stfsx f7, r26, r27
    fmuls f8, f7, f3
    lfs f7, 0xfc(r9)
    fsubs f8, f9, f8
    fmuls f7, f1, f7
    fmuls f8, f4, f8
    fadds f9, f8, f7
    stfs f9, 0xfc(r9)
    lwz r27, 0xd4(r9)
    lwz r28, 0xc8(r9)
    slwi r27, r27, 2
    lfsx f8, r28, r27
    fmuls f7, f8, f3
    fadds f7, f9, f7
    stfsx f7, r28, r27
    fmuls f7, f7, f3
    lwz r27, 0xd4(r9)
    addi r27, r27, 0x1
    stw r27, 0xd4(r9)
    fsubs f7, f8, f7
    lwz r28, 0xe0(r9)
    stfs f7, 0x0(r12)
    cmplw r27, r28
    blt lbl_fn_8060B380_000004C0
    stw r29, 0xd4(r9)
lbl_fn_8060B380_000004C0:
    lfs f7, 0x0(r12)
    addi r7, r7, 0x4
    addi r8, r8, 0x4
    addi r9, r9, 0x4
    fmuls f7, f7, f5
    addi r10, r10, 0xc
    addi r11, r11, 0x8
    fadds f2, f7, f2
    stfs f2, 0x0(r12)
    addi r12, r12, 0x4
    bdnz lbl_fn_8060B380_000002E0
    lfs f12, 0x18(r1)
    lfs f11, 0x1c(r1)
    lfs f10, 0x14(r1)
    fadds f2, f12, f11
    lwz r12, 0x2c(r1)
    fadds f7, f10, f11
    lwz r8, 0x34(r1)
    addi r11, r12, 0x4
    lwz r10, 0x30(r1)
    fmuls f9, f2, f6
    addi r7, r8, 0x4
    fmuls f8, f7, f6
    addi r9, r10, 0x4
    lfs f2, 0x140(r4)
    fadds f13, f10, f12
    fadds f9, f10, f9
    stw r11, 0x2c(r1)
    fadds f8, f12, f8
    fmuls f7, f13, f6
    stw r7, 0x34(r1)
    fmuls f2, f9, f2
    stfs f9, 0x20(r1)
    fadds f7, f11, f7
    fctiwz f2, f2
    stfs f8, 0x24(r1)
    stfd f2, 0x40(r1)
    lwz r11, 0x44(r1)
    stw r11, 0x0(r12)
    lfs f2, 0x140(r4)
    stfs f7, 0x28(r1)
    fmuls f2, f8, f2
    stw r9, 0x30(r1)
    fctiwz f2, f2
    stfd f2, 0x38(r1)
    lwz r7, 0x3c(r1)
    stw r7, 0x0(r10)
    lfs f2, 0x140(r4)
    fmuls f2, f7, f2
    fctiwz f2, f2
    stfd f2, 0x48(r1)
    lwz r7, 0x4c(r1)
    stw r7, 0x0(r8)
    lwz r7, 0x13c(r4)
    cmpwi r7, 0x0
    beq lbl_fn_8060B380_000005F4
    lfs f2, 0x144(r4)
    fmuls f2, f9, f2
    fctiwz f2, f2
    stfd f2, 0x48(r1)
    lwz r7, 0x4c(r1)
    stw r7, 0x0(r3)
    addi r3, r3, 0x4
    lfs f2, 0x144(r4)
    fmuls f2, f8, f2
    fctiwz f2, f2
    stfd f2, 0x40(r1)
    lwz r7, 0x44(r1)
    stw r7, 0x0(r5)
    addi r5, r5, 0x4
    lfs f2, 0x144(r4)
    fmuls f2, f7, f2
    fctiwz f2, f2
    stfd f2, 0x38(r1)
    lwz r7, 0x3c(r1)
    stw r7, 0x0(r6)
    addi r6, r6, 0x4
lbl_fn_8060B380_000005F4:
    lwz r7, 0xc(r4)
    addi r8, r7, 0x1
    stw r8, 0xc(r4)
    lwz r7, 0x18(r4)
    cmplw r8, r7
    blt lbl_fn_8060B380_00000610
    stw r29, 0xc(r4)
lbl_fn_8060B380_00000610:
    lwz r7, 0x10(r4)
    addi r8, r7, 0x1
    stw r8, 0x10(r4)
    lwz r7, 0x18(r4)
    cmplw r8, r7
    blt lbl_fn_8060B380_0000062C
    stw r29, 0x10(r4)
lbl_fn_8060B380_0000062C:
    lwz r7, 0x14(r4)
    addi r9, r4, 0x8
    addi r8, r7, 0x1
    stw r8, 0x14(r4)
    lwz r7, 0x18(r4)
    cmplw r8, r7
    blt lbl_fn_8060B380_0000064C
    stw r29, 0xc(r9)
lbl_fn_8060B380_0000064C:
    lwz r8, 0x3c(r4)
    cmpwi r8, 0x0
    beq lbl_fn_8060B380_00000670
    lwz r7, 0x38(r4)
    addi r7, r7, 0x1
    stw r7, 0x38(r4)
    cmplw r7, r8
    blt lbl_fn_8060B380_00000670
    stw r29, 0x38(r4)
lbl_fn_8060B380_00000670:
    lwz r7, 0x68(r4)
    addi r8, r7, 0x1
    stw r8, 0x68(r4)
    lwz r7, 0x74(r4)
    cmplw r8, r7
    blt lbl_fn_8060B380_0000068C
    stw r29, 0x68(r4)
lbl_fn_8060B380_0000068C:
    lwz r7, 0x6c(r4)
    addi r8, r7, 0x1
    stw r8, 0x6c(r4)
    lwz r7, 0x78(r4)
    cmplw r8, r7
    blt lbl_fn_8060B380_000006A8
    stw r29, 0x6c(r4)
lbl_fn_8060B380_000006A8:
    lwz r7, 0x70(r4)
    addi r9, r4, 0x8
    addi r8, r7, 0x1
    stw r8, 0x70(r4)
    lwz r7, 0x7c(r4)
    cmplw r8, r7
    blt lbl_fn_8060B380_000006C8
    stw r29, 0x68(r9)
lbl_fn_8060B380_000006C8:
    lwz r7, 0xb0(r4)
    addi r8, r7, 0x1
    stw r8, 0xb0(r4)
    lwz r7, 0xb8(r4)
    cmplw r8, r7
    blt lbl_fn_8060B380_000006E4
    stw r29, 0xb0(r4)
lbl_fn_8060B380_000006E4:
    lwz r7, 0xb4(r4)
    addi r8, r7, 0x1
    stw r8, 0xb4(r4)
    lwz r7, 0xbc(r4)
    cmplw r8, r7
    blt lbl_fn_8060B380_00000700
    stw r29, 0xb4(r4)
lbl_fn_8060B380_00000700:
    addi r31, r31, 0x1
    cmplwi r31, 0x60
    blt lbl_fn_8060B380_000002C0
lbl_fn_8060B380_0000070C:
    addi r11, r1, 0x70
    bl _restgpr_25
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_8060B8B0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_23
    mr r23, r3
    li r24, 0x0
    mr r30, r23
    li r31, 0x0
    mr r29, r23
    mr r28, r23
lbl_fn_8060B8B0_0000075C:
    lwz r0, 0x1c(r23)
    lwz r12, lbl_8087E858
    slwi r3, r0, 2
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    stw r3, 0x0(r30)
    bne lbl_fn_8060B8B0_00000784
    li r3, 0x0
    b lbl_fn_8060B8B0_0000088C
lbl_fn_8060B8B0_00000784:
    lwz r0, 0x40(r23)
    cmpwi r0, 0x0
    beq lbl_fn_8060B8B0_000007B4
    lwz r12, lbl_8087E858
    slwi r3, r0, 2
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    stw r3, 0x2c(r30)
    bne lbl_fn_8060B8B0_000007B8
    li r3, 0x0
    b lbl_fn_8060B8B0_0000088C
lbl_fn_8060B8B0_000007B4:
    stw r31, 0x2c(r30)
lbl_fn_8060B8B0_000007B8:
    mr r26, r23
    mr r27, r29
    li r25, 0x0
lbl_fn_8060B8B0_000007C4:
    lwz r0, 0x80(r26)
    lwz r12, lbl_8087E858
    slwi r3, r0, 2
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    stw r3, 0x44(r27)
    bne lbl_fn_8060B8B0_000007EC
    li r3, 0x0
    b lbl_fn_8060B8B0_0000088C
lbl_fn_8060B8B0_000007EC:
    addi r25, r25, 0x1
    addi r27, r27, 0x4
    cmplwi r25, 0x3
    addi r26, r26, 0x4
    blt lbl_fn_8060B8B0_000007C4
    mr r27, r23
    mr r26, r28
    li r25, 0x0
lbl_fn_8060B8B0_0000080C:
    lwz r0, 0xc0(r27)
    lwz r12, lbl_8087E858
    slwi r3, r0, 2
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    stw r3, 0x98(r26)
    bne lbl_fn_8060B8B0_00000834
    li r3, 0x0
    b lbl_fn_8060B8B0_0000088C
lbl_fn_8060B8B0_00000834:
    addi r25, r25, 0x1
    addi r26, r26, 0x4
    cmplwi r25, 0x2
    addi r27, r27, 0x4
    blt lbl_fn_8060B8B0_0000080C
    lwz r0, 0xec(r30)
    lwz r12, lbl_8087E858
    slwi r3, r0, 2
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    stw r3, 0xc8(r30)
    bne lbl_fn_8060B8B0_00000870
    li r3, 0x0
    b lbl_fn_8060B8B0_0000088C
lbl_fn_8060B8B0_00000870:
    addi r24, r24, 0x1
    addi r29, r29, 0xc
    cmplwi r24, 0x3
    addi r28, r28, 0x8
    addi r30, r30, 0x4
    blt lbl_fn_8060B8B0_0000075C
    li r3, 0x1
lbl_fn_8060B8B0_0000088C:
    addi r11, r1, 0x30
    bl _restgpr_23
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8060BA30(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    mr r24, r3
    li r25, 0x0
    mr r31, r24
    mr r30, r24
    mr r29, r24
lbl_fn_8060BA30_000008D8:
    lwz r3, 0x0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8060BA30_000008F4
    lwz r0, 0x1c(r24)
    li r4, 0x0
    slwi r5, r0, 2
    bl memset
lbl_fn_8060BA30_000008F4:
    lwz r3, 0x2c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8060BA30_00000910
    lwz r0, 0x40(r24)
    li r4, 0x0
    slwi r5, r0, 2
    bl memset
lbl_fn_8060BA30_00000910:
    mr r27, r30
    mr r28, r24
    li r26, 0x0
lbl_fn_8060BA30_0000091C:
    lwz r3, 0x44(r27)
    cmpwi r3, 0x0
    beq lbl_fn_8060BA30_00000938
    lwz r0, 0x80(r28)
    li r4, 0x0
    slwi r5, r0, 2
    bl memset
lbl_fn_8060BA30_00000938:
    addi r26, r26, 0x1
    addi r28, r28, 0x4
    cmplwi r26, 0x3
    addi r27, r27, 0x4
    blt lbl_fn_8060BA30_0000091C
    mr r28, r29
    mr r27, r24
    li r26, 0x0
lbl_fn_8060BA30_00000958:
    lwz r3, 0x98(r28)
    cmpwi r3, 0x0
    beq lbl_fn_8060BA30_00000974
    lwz r0, 0xc0(r27)
    li r4, 0x0
    slwi r5, r0, 2
    bl memset
lbl_fn_8060BA30_00000974:
    addi r26, r26, 0x1
    addi r27, r27, 0x4
    cmplwi r26, 0x2
    addi r28, r28, 0x4
    blt lbl_fn_8060BA30_00000958
    lwz r3, 0xc8(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8060BA30_000009A4
    lwz r0, 0xec(r31)
    li r4, 0x0
    slwi r5, r0, 2
    bl memset
lbl_fn_8060BA30_000009A4:
    addi r25, r25, 0x1
    addi r30, r30, 0xc
    cmplwi r25, 0x3
    addi r29, r29, 0x8
    addi r31, r31, 0x4
    blt lbl_fn_8060BA30_000008D8
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8060BB60(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    li r25, 0x0
    mr r30, r3
    li r31, 0x0
    mr r29, r3
    mr r28, r3
lbl_fn_8060BB60_00000A08:
    lwz r3, 0x0(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8060BB60_00000A24
    lwz r12, lbl_8087E85C
    mtctr r12
    bctrl
    stw r31, 0x0(r30)
lbl_fn_8060BB60_00000A24:
    lwz r3, 0x2c(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8060BB60_00000A40
    lwz r12, lbl_8087E85C
    mtctr r12
    bctrl
    stw r31, 0x2c(r30)
lbl_fn_8060BB60_00000A40:
    mr r27, r29
    li r26, 0x0
lbl_fn_8060BB60_00000A48:
    lwz r3, 0x44(r27)
    cmpwi r3, 0x0
    beq lbl_fn_8060BB60_00000A64
    lwz r12, lbl_8087E85C
    mtctr r12
    bctrl
    stw r31, 0x44(r27)
lbl_fn_8060BB60_00000A64:
    addi r26, r26, 0x1
    addi r27, r27, 0x4
    cmplwi r26, 0x3
    blt lbl_fn_8060BB60_00000A48
    mr r27, r28
    li r26, 0x0
lbl_fn_8060BB60_00000A7C:
    lwz r3, 0x98(r27)
    cmpwi r3, 0x0
    beq lbl_fn_8060BB60_00000A98
    lwz r12, lbl_8087E85C
    mtctr r12
    bctrl
    stw r31, 0x98(r27)
lbl_fn_8060BB60_00000A98:
    addi r26, r26, 0x1
    addi r27, r27, 0x4
    cmplwi r26, 0x2
    blt lbl_fn_8060BB60_00000A7C
    lwz r3, 0xc8(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8060BB60_00000AC4
    lwz r12, lbl_8087E85C
    mtctr r12
    bctrl
    stw r31, 0xc8(r30)
lbl_fn_8060BB60_00000AC4:
    addi r25, r25, 0x1
    addi r29, r29, 0xc
    cmplwi r25, 0x3
    addi r28, r28, 0x8
    addi r30, r30, 0x4
    blt lbl_fn_8060BB60_00000A08
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8060BC80(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x30
    stfd f31, 0x50(r1)
    psq_st f31, 0x58(r1), 0, 0
    stfd f30, 0x40(r1)
    psq_st f30, 0x48(r1), 0, 0
    stfd f29, 0x30(r1)
    psq_st f29, 0x38(r1), 0, 0
    bl _savegpr_24
    lwz r4, 0x110(r3)
    lis r31, lbl_807AF660@ha
    mr r30, r3
    cmplwi r4, 0x8
    addi r31, r31, lbl_807AF660@l
    blt lbl_fn_8060BC80_00000B4C
    li r3, 0x0
    b lbl_fn_8060BC80_00000DF4
lbl_fn_8060BC80_00000B4C:
    lfs f4, 0x118(r3)
    lfs f2, lbl_808885CC
    fcmpo cr0, f4, f2
    blt lbl_fn_8060BC80_00000B68
    lfs f0, 0x114(r3)
    fcmpo cr0, f4, f0
    ble lbl_fn_8060BC80_00000B70
lbl_fn_8060BC80_00000B68:
    li r3, 0x0
    b lbl_fn_8060BC80_00000DF4
lbl_fn_8060BC80_00000B70:
    lwz r0, 0x11c(r3)
    cmplwi r0, 0x6
    blt lbl_fn_8060BC80_00000B84
    li r3, 0x0
    b lbl_fn_8060BC80_00000DF4
lbl_fn_8060BC80_00000B84:
    lfs f0, 0x120(r3)
    fcmpo cr0, f0, f2
    bge lbl_fn_8060BC80_00000B98
    li r3, 0x0
    b lbl_fn_8060BC80_00000DF4
lbl_fn_8060BC80_00000B98:
    lfs f0, 0x124(r3)
    fcmpo cr0, f0, f2
    blt lbl_fn_8060BC80_00000BB0
    lfs f1, lbl_808885D0
    fcmpo cr0, f0, f1
    ble lbl_fn_8060BC80_00000BB8
lbl_fn_8060BC80_00000BB0:
    li r3, 0x0
    b lbl_fn_8060BC80_00000DF4
lbl_fn_8060BC80_00000BB8:
    lfs f0, 0x128(r3)
    fcmpo cr0, f0, f2
    blt lbl_fn_8060BC80_00000BCC
    fcmpo cr0, f0, f1
    ble lbl_fn_8060BC80_00000BD4
lbl_fn_8060BC80_00000BCC:
    li r3, 0x0
    b lbl_fn_8060BC80_00000DF4
lbl_fn_8060BC80_00000BD4:
    lfs f0, 0x12c(r3)
    fcmpo cr0, f0, f2
    blt lbl_fn_8060BC80_00000BE8
    fcmpo cr0, f0, f1
    ble lbl_fn_8060BC80_00000BF0
lbl_fn_8060BC80_00000BE8:
    li r3, 0x0
    b lbl_fn_8060BC80_00000DF4
lbl_fn_8060BC80_00000BF0:
    lfs f3, 0x130(r3)
    fcmpo cr0, f3, f2
    blt lbl_fn_8060BC80_00000C04
    fcmpo cr0, f3, f1
    ble lbl_fn_8060BC80_00000C0C
lbl_fn_8060BC80_00000C04:
    li r3, 0x0
    b lbl_fn_8060BC80_00000DF4
lbl_fn_8060BC80_00000C0C:
    lfs f0, 0x134(r3)
    fcmpo cr0, f0, f2
    blt lbl_fn_8060BC80_00000C20
    fcmpo cr0, f0, f1
    ble lbl_fn_8060BC80_00000C28
lbl_fn_8060BC80_00000C20:
    li r3, 0x0
    b lbl_fn_8060BC80_00000DF4
lbl_fn_8060BC80_00000C28:
    lfs f0, 0x140(r3)
    fcmpo cr0, f0, f2
    blt lbl_fn_8060BC80_00000C3C
    fcmpo cr0, f0, f1
    ble lbl_fn_8060BC80_00000C44
lbl_fn_8060BC80_00000C3C:
    li r3, 0x0
    b lbl_fn_8060BC80_00000DF4
lbl_fn_8060BC80_00000C44:
    lfs f0, 0x144(r3)
    fcmpo cr0, f0, f2
    blt lbl_fn_8060BC80_00000C58
    fcmpo cr0, f0, f1
    ble lbl_fn_8060BC80_00000C60
lbl_fn_8060BC80_00000C58:
    li r3, 0x0
    b lbl_fn_8060BC80_00000DF4
lbl_fn_8060BC80_00000C60:
    mulli r8, r4, 0xc
    addi r9, r31, 0x0
    lfs f0, lbl_808885C8
    addi r5, r31, 0x60
    lfs f2, lbl_808885D4
    li r27, 0x0
    add r7, r9, r8
    fmuls f1, f0, f4
    lwz r6, 0x8(r7)
    add r4, r5, r8
    stw r6, 0x18(r3)
    lwzx r0, r9, r8
    subf r0, r0, r6
    stw r0, 0xc(r3)
    lfsx f0, r5, r8
    fmuls f0, f3, f0
    fmuls f0, f2, f0
    stfs f0, 0x20(r3)
    lwz r0, 0x4(r7)
    subf r0, r0, r6
    stw r0, 0x10(r3)
    lfs f0, 0x4(r4)
    fmuls f0, f3, f0
    fmuls f0, f2, f0
    stfs f0, 0x24(r3)
    lwz r0, 0x8(r7)
    subf r0, r0, r6
    stw r0, 0x14(r3)
    lfs f0, 0x8(r4)
    fmuls f0, f3, f0
    stw r27, 0x38(r3)
    fmuls f0, f2, f0
    stfs f0, 0x28(r3)
    bl fn_80695D84
    stw r3, 0x3c(r30)
    mr r26, r30
    lfd f29, lbl_80888600
    addi r28, r31, 0xc0
    lfs f30, lbl_808885E8
    li r24, 0x0
    lfs f31, lbl_808885C8
    li r25, 0x0
    lis r29, 0x4330
lbl_fn_8060BC80_00000D0C:
    stw r27, 0x68(r26)
    lfd f1, lbl_808885F0
    lwz r0, 0x11c(r30)
    stw r29, 0x8(r1)
    slwi r0, r0, 5
    add r0, r25, r0
    lwzx r0, r28, r0
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    stw r0, 0x74(r26)
    fsubs f2, f0, f29
    lfs f0, 0x120(r30)
    fmuls f2, f30, f2
    fmuls f0, f31, f0
    fdivs f2, f2, f0
    bl fn_8068AEB0
    frsp f0, f1
    addi r24, r24, 0x1
    cmplwi r24, 0x3
    addi r25, r25, 0x4
    stfs f0, 0x8c(r26)
    addi r26, r26, 0x4
    blt lbl_fn_8060BC80_00000D0C
    lwz r0, 0x11c(r30)
    li r4, 0x0
    stw r4, 0xb0(r30)
    addi r3, r31, 0xc0
    slwi r0, r0, 5
    lfs f1, lbl_808885D0
    add r3, r3, r0
    lfs f0, 0x128(r30)
    lwz r0, 0xc(r3)
    fsubs f1, f1, f0
    lfs f0, lbl_808885F8
    stw r0, 0xb8(r30)
    lfs f2, 0x124(r30)
    stw r4, 0xb4(r30)
    fcmpo cr0, f1, f0
    lwz r0, 0x10(r3)
    stw r0, 0xbc(r30)
    stw r4, 0xd4(r30)
    lwz r0, 0x14(r3)
    stw r0, 0xe0(r30)
    stw r4, 0xd8(r30)
    lwz r0, 0x18(r3)
    stw r0, 0xe4(r30)
    stw r4, 0xdc(r30)
    lwz r0, 0x1c(r3)
    stw r0, 0xe8(r30)
    stfs f2, 0xf8(r30)
    stfs f1, 0x108(r30)
    ble lbl_fn_8060BC80_00000DE0
    stfs f0, 0x108(r30)
lbl_fn_8060BC80_00000DE0:
    lfs f0, lbl_808885CC
    li r3, 0x1
    stfs f0, 0xfc(r30)
    stfs f0, 0x100(r30)
    stfs f0, 0x104(r30)
lbl_fn_8060BC80_00000DF4:
    addi r11, r1, 0x30
    psq_l f31, 0x58(r1), 0, 0
    lfd f31, 0x50(r1)
    psq_l f30, 0x48(r1), 0, 0
    lfd f30, 0x40(r1)
    psq_l f29, 0x38(r1), 0, 0
    lfd f29, 0x30(r1)
    bl _restgpr_24
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_8060BFB0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    lfs f1, lbl_80888608
    lfs f0, 0x38(r3)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r0, 0xc(r1)
    mulli r3, r0, 0xc
    addi r1, r1, 0x10
    blr
}
