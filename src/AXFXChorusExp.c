#include "revolution/types.h"
#include "revolution/os.h"

/* External functions */
extern void _savegpr_24(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void _restgpr_24(void);
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern BOOL OSDisableInterrupts(void);
extern BOOL OSRestoreInterrupts(BOOL);
extern void fn_8068AEB0(void);
extern void fn_80695D84(void);

/* External large data symbols */
extern u8 lbl_807AF800[];
extern u8 lbl_807AF820[];

/* External SDA symbols */
extern u32 lbl_8087E858;
extern u32 lbl_8087E85C;

/* External float/double constants (sdata2) */
extern f32 lbl_80888620;
extern f32 lbl_80888624;
extern f32 lbl_80888628;
extern f32 lbl_8088862C;
extern f32 lbl_80888630;
extern f32 lbl_80888638;
extern f32 lbl_8088863C;
extern f32 lbl_80888640;
extern f32 lbl_80888644;
extern f64 lbl_80888648;
extern f32 lbl_80888650;
extern f32 lbl_80888654;
extern f32 lbl_80888658;
extern f64 lbl_80888660;
extern f32 lbl_80888668;
extern f64 lbl_80888670;

/* Function declarations */
void fn_8060D190(void);
void fn_8060D350(void);
void fn_8060D3B0(void);
void fn_8060D530(void);
void fn_8060D600(void);
void fn_8060D6C0(void);
void fn_8060D720(void);
void fn_8060DA90(void);
void fn_8060DBE0(void);
void fn_8060DCE0(void);
void fn_8060DDD0(void);

asm void fn_8060D190(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    stw r28, 0x20(r1)
    mr r28, r3
    lfs f3, 0x44(r3)
    lfs f0, 0x40(r3)
    fcmpo cr0, f3, f0
    ble lbl_fn_8060D190_00000038
    li r3, 0x0
    b lbl_fn_8060D190_00000198
lbl_fn_8060D190_00000038:
    lfs f0, 0x48(r3)
    lfs f2, lbl_80888624
    fcmpo cr0, f0, f2
    blt lbl_fn_8060D190_00000058
    lfs f1, lbl_80888628
    fcmpo cr0, f0, f1
    cror eq, gt, eq
    bne lbl_fn_8060D190_00000060
lbl_fn_8060D190_00000058:
    li r3, 0x0
    b lbl_fn_8060D190_00000198
lbl_fn_8060D190_00000060:
    lfs f0, 0x4c(r3)
    fcmpo cr0, f0, f2
    blt lbl_fn_8060D190_00000074
    fcmpo cr0, f0, f1
    ble lbl_fn_8060D190_0000007C
lbl_fn_8060D190_00000074:
    li r3, 0x0
    b lbl_fn_8060D190_00000198
lbl_fn_8060D190_0000007C:
    lfs f0, 0x58(r3)
    fcmpo cr0, f0, f2
    blt lbl_fn_8060D190_00000090
    fcmpo cr0, f0, f1
    ble lbl_fn_8060D190_00000098
lbl_fn_8060D190_00000090:
    li r3, 0x0
    b lbl_fn_8060D190_00000198
lbl_fn_8060D190_00000098:
    lfs f0, 0x5c(r3)
    fcmpo cr0, f0, f2
    blt lbl_fn_8060D190_000000AC
    fcmpo cr0, f0, f1
    ble lbl_fn_8060D190_000000B4
lbl_fn_8060D190_000000AC:
    li r3, 0x0
    b lbl_fn_8060D190_00000198
lbl_fn_8060D190_000000B4:
    lfs f0, lbl_80888620
    fmuls f1, f0, f3
    bl fn_80695D84
    cmpwi r3, 0x0
    stw r3, 0x14(r28)
    bne lbl_fn_8060D190_000000D4
    li r0, 0x1
    stw r0, 0x14(r28)
lbl_fn_8060D190_000000D4:
    lfs f1, lbl_8088862C
    li r0, 0x0
    lfs f0, 0x48(r28)
    lfs f2, lbl_80888628
    fmuls f3, f1, f0
    lfs f1, 0x4c(r28)
    lfs f0, lbl_80888630
    fsubs f2, f2, f1
    stw r0, 0x10(r28)
    fctiwz f1, f3
    stfd f1, 0x8(r1)
    fcmpo cr0, f2, f0
    lwz r0, 0xc(r1)
    stw r0, 0x1c(r28)
    ble lbl_fn_8060D190_00000114
    fmr f2, f0
lbl_fn_8060D190_00000114:
    lfs f0, lbl_8088862C
    mr r30, r28
    li r29, 0x0
    li r31, 0x0
    fmuls f0, f0, f2
    fctiwz f0, f0
    stfd f0, 0x10(r1)
    lwz r0, 0x14(r1)
    stw r0, 0x30(r28)
lbl_fn_8060D190_00000138:
    lwz r0, 0x18(r28)
    li r4, 0x0
    lwz r3, 0x0(r30)
    slwi r5, r0, 2
    bl memset
    addi r29, r29, 0x1
    stw r31, 0x20(r30)
    cmplwi r29, 0x4
    addi r30, r30, 0x4
    blt lbl_fn_8060D190_00000138
    lfs f2, lbl_8088862C
    li r3, 0x1
    lfs f1, 0x58(r28)
    lfs f0, 0x5c(r28)
    fmuls f1, f2, f1
    fmuls f0, f2, f0
    fctiwz f1, f1
    fctiwz f0, f0
    stfd f1, 0x10(r1)
    stfd f0, 0x8(r1)
    lwz r4, 0x14(r1)
    lwz r0, 0xc(r1)
    stw r4, 0x34(r28)
    stw r0, 0x38(r28)
lbl_fn_8060D190_00000198:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8060D350(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    lis r4, lbl_807AF800@ha
    lis r6, lbl_807AF820@ha
    lfs f1, lbl_80888638
    lfs f0, 0xb8(r3)
    addi r6, r6, lbl_807AF820@l
    addi r4, r4, lbl_807AF800@l
    lwz r5, 0x60(r6)
    fmuls f0, f1, f0
    lwz r7, 0x1c(r4)
    lwz r4, 0x64(r6)
    lwz r3, 0x68(r6)
    fctiwz f0, f0
    lwz r0, 0x6c(r6)
    stfd f0, 0x8(r1)
    lwz r6, 0xc(r1)
    add r6, r7, r6
    add r6, r6, r5
    add r6, r6, r4
    add r6, r6, r3
    add r6, r6, r0
    mulli r3, r6, 0xc
    addi r1, r1, 0x10
    blr
}

asm void fn_8060D3B0(void)
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
    lfs f1, 0xb8(r30)
    li r0, 0x1
    lfs f0, lbl_8088863C
    mr r31, r3
    stw r0, 0xb0(r30)
    fcmpo cr0, f1, f0
    bge lbl_fn_8060D3B0_00000290
    bl OSDisableInterrupts
    lwz r0, 0xb0(r30)
    mr r29, r3
    mr r3, r30
    ori r0, r0, 0x1
    stw r0, 0xb0(r30)
    bl fn_8060DCE0
    mr r3, r29
    bl OSRestoreInterrupts
    mr r3, r31
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_fn_8060D3B0_00000380
lbl_fn_8060D3B0_00000290:
    lfs f0, lbl_80888638
    lis r3, lbl_807AF800@ha
    addi r3, r3, lbl_807AF800@l
    lwz r0, 0x1c(r3)
    fmuls f1, f0, f1
    stw r0, 0x14(r30)
    bl fn_80695D84
    stw r3, 0x30(r30)
    lis r4, lbl_807AF820@ha
    addi r4, r4, lbl_807AF820@l
    mr r3, r30
    lwz r0, 0x60(r4)
    stw r0, 0x5c(r30)
    lwz r0, 0x64(r4)
    stw r0, 0x60(r30)
    lwz r0, 0x68(r4)
    stw r0, 0x94(r30)
    lwz r0, 0x6c(r4)
    stw r0, 0x98(r30)
    bl fn_8060DA90
    cmpwi r3, 0x0
    bne lbl_fn_8060D3B0_0000031C
    bl OSDisableInterrupts
    lwz r0, 0xb0(r30)
    mr r29, r3
    mr r3, r30
    ori r0, r0, 0x1
    stw r0, 0xb0(r30)
    bl fn_8060DCE0
    mr r3, r29
    bl OSRestoreInterrupts
    mr r3, r31
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_fn_8060D3B0_00000380
lbl_fn_8060D3B0_0000031C:
    mr r3, r30
    bl fn_8060DBE0
    mr r3, r30
    bl fn_8060DDD0
    cmpwi r3, 0x0
    bne lbl_fn_8060D3B0_00000368
    bl OSDisableInterrupts
    lwz r0, 0xb0(r30)
    mr r29, r3
    mr r3, r30
    ori r0, r0, 0x1
    stw r0, 0xb0(r30)
    bl fn_8060DCE0
    mr r3, r29
    bl OSRestoreInterrupts
    mr r3, r31
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_fn_8060D3B0_00000380
lbl_fn_8060D3B0_00000368:
    lwz r0, 0xb0(r30)
    mr r3, r31
    clrrwi r0, r0, 1
    stw r0, 0xb0(r30)
    bl OSRestoreInterrupts
    li r3, 0x1
lbl_fn_8060D3B0_00000380:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8060D530(void)
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
    lwz r0, 0xb0(r29)
    mr r30, r3
    ori r0, r0, 0x1
    stw r0, 0xb0(r29)
    bl OSDisableInterrupts
    lwz r0, 0xb0(r29)
    mr r31, r3
    mr r3, r29
    ori r0, r0, 0x1
    stw r0, 0xb0(r29)
    bl fn_8060DCE0
    mr r3, r31
    bl OSRestoreInterrupts
    mr r3, r29
    bl fn_8060D3B0
    cmpwi r3, 0x0
    bne lbl_fn_8060D530_00000438
    bl OSDisableInterrupts
    lwz r0, 0xb0(r29)
    mr r31, r3
    mr r3, r29
    ori r0, r0, 0x1
    stw r0, 0xb0(r29)
    bl fn_8060DCE0
    mr r3, r31
    bl OSRestoreInterrupts
    mr r3, r30
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_fn_8060D530_00000454
lbl_fn_8060D530_00000438:
    lwz r0, 0xb0(r29)
    mr r3, r30
    ori r0, r0, 0x2
    clrrwi r0, r0, 1
    stw r0, 0xb0(r29)
    bl OSRestoreInterrupts
    li r3, 0x1
lbl_fn_8060D530_00000454:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8060D600(void)
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
    lwz r0, 0xb0(r29)
    mr r30, r3
    mr r3, r29
    ori r0, r0, 0x1
    stw r0, 0xb0(r29)
    bl fn_8060DBE0
    mr r3, r29
    bl fn_8060DDD0
    cmpwi r3, 0x0
    bne lbl_fn_8060D600_000004EC
    bl OSDisableInterrupts
    lwz r0, 0xb0(r29)
    mr r31, r3
    mr r3, r29
    ori r0, r0, 0x1
    stw r0, 0xb0(r29)
    bl fn_8060DCE0
    mr r3, r31
    bl OSRestoreInterrupts
    mr r3, r30
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_fn_8060D600_00000508
lbl_fn_8060D600_000004EC:
    lwz r0, 0xb0(r29)
    mr r3, r30
    ori r0, r0, 0x2
    clrrwi r0, r0, 1
    stw r0, 0xb0(r29)
    bl OSRestoreInterrupts
    li r3, 0x1
lbl_fn_8060D600_00000508:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8060D6C0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl OSDisableInterrupts
    lwz r0, 0xb0(r30)
    mr r31, r3
    mr r3, r30
    ori r0, r0, 0x1
    stw r0, 0xb0(r30)
    bl fn_8060DCE0
    mr r3, r31
    bl OSRestoreInterrupts
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8060D720(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_24
    lwz r0, 0xb0(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8060D720_000005BC
    rlwinm r0, r0, 0, 31, 29
    stw r0, 0xb0(r4)
    b lbl_fn_8060D720_000008E4
lbl_fn_8060D720_000005BC:
    lwz r7, 0xd8(r4)
    lwz r6, 0x0(r3)
    lwz r5, 0x4(r3)
    cmpwi r7, 0x0
    lwz r0, 0x8(r3)
    stw r6, 0x20(r1)
    stw r5, 0x24(r1)
    stw r0, 0x28(r1)
    beq lbl_fn_8060D720_000005F8
    lwz r5, 0x0(r7)
    lwz r3, 0x4(r7)
    lwz r0, 0x8(r7)
    stw r5, 0x14(r1)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
lbl_fn_8060D720_000005F8:
    lwz r6, 0xdc(r4)
    cmpwi r6, 0x0
    beq lbl_fn_8060D720_0000061C
    lwz r5, 0x0(r6)
    lwz r3, 0x4(r6)
    lwz r0, 0x8(r6)
    stw r5, 0x8(r1)
    stw r3, 0xc(r1)
    stw r0, 0x10(r1)
lbl_fn_8060D720_0000061C:
    lfs f2, lbl_80888640
    li r28, 0x0
    lfs f0, 0xac(r4)
    lis r3, 0x4330
    lfs f3, lbl_80888644
    li r0, 0x0
    lfs f1, 0xd0(r4)
    fsubs f5, f2, f0
    lfs f2, 0xd4(r4)
    li r27, 0x3
    fmuls f6, f3, f1
    lfs f1, 0x18(r4)
    fmuls f7, f3, f2
    lfs f2, 0x64(r4)
    lfs f3, 0x68(r4)
    lfs f4, 0x9c(r4)
    lfd f11, lbl_80888648
lbl_fn_8060D720_00000660:
    lwz r10, 0xc(r4)
    mr r7, r4
    lwz r11, 0x28(r4)
    mr r8, r4
    lwz r12, 0x4c(r4)
    addi r5, r1, 0x14
    lwz r26, 0x50(r4)
    addi r6, r1, 0x20
    lwz r25, 0x84(r4)
    addi r9, r1, 0x8
    lwz r24, 0x88(r4)
    slwi r10, r10, 2
    slwi r11, r11, 2
    slwi r12, r12, 2
    slwi r31, r26, 2
    slwi r30, r25, 2
    slwi r29, r24, 2
    mtctr r27
lbl_fn_8060D720_000006A8:
    lwz r24, 0xd8(r4)
    cmpwi r24, 0x0
    beq lbl_fn_8060D720_000006E8
    lwz r25, 0x0(r5)
    lwz r26, 0x0(r6)
    lwz r24, 0x0(r25)
    addi r25, r25, 0x4
    lwz r26, 0x0(r26)
    stw r3, 0x30(r1)
    add r24, r26, r24
    xoris r24, r24, 0x8000
    stw r24, 0x34(r1)
    lfd f8, 0x30(r1)
    stw r25, 0x0(r5)
    fsubs f9, f8, f11
    b lbl_fn_8060D720_00000704
lbl_fn_8060D720_000006E8:
    lwz r24, 0x0(r6)
    stw r3, 0x38(r1)
    lwz r24, 0x0(r24)
    xoris r24, r24, 0x8000
    stw r24, 0x3c(r1)
    lfd f8, 0x38(r1)
    fsubs f9, f8, f11
lbl_fn_8060D720_00000704:
    lwz r24, 0x0(r7)
    lfsx f10, r10, r24
    fmuls f8, f10, f1
    fadds f8, f9, f8
    stfsx f8, r10, r24
    lwz r24, 0x2c(r4)
    cmpwi r24, 0x0
    beq lbl_fn_8060D720_00000734
    lwz r24, 0x1c(r7)
    lfsx f12, r11, r24
    stfsx f9, r11, r24
    b lbl_fn_8060D720_00000738
lbl_fn_8060D720_00000734:
    fmr f12, f9
lbl_fn_8060D720_00000738:
    lwz r24, 0x34(r8)
    fmuls f10, f10, f6
    lwz r26, 0x0(r6)
    lfsx f9, r12, r24
    addi r25, r26, 0x4
    stw r25, 0x0(r6)
    fmuls f8, f9, f2
    fadds f8, f12, f8
    stfsx f8, r12, r24
    lwz r25, 0x38(r8)
    lfsx f13, r31, r25
    fmuls f8, f13, f3
    fadds f9, f9, f13
    fadds f8, f12, f8
    stfsx f8, r31, r25
    lwz r24, 0x6c(r8)
    lfsx f12, r30, r24
    fmuls f8, f12, f4
    fadds f8, f9, f8
    stfsx f8, r30, r24
    fmuls f9, f8, f4
    lfs f8, 0xa0(r7)
    fsubs f9, f12, f9
    fmuls f8, f0, f8
    fmuls f9, f5, f9
    fadds f9, f9, f8
    stfs f9, 0xa0(r7)
    lwz r25, 0x70(r8)
    lfsx f12, r29, r25
    fmuls f8, f12, f4
    fadds f8, f9, f8
    stfsx f8, r29, r25
    fmuls f9, f8, f4
    lfs f8, 0xe0(r4)
    fsubs f9, f12, f9
    fmuls f9, f9, f7
    fadds f9, f10, f9
    fmuls f8, f9, f8
    fctiwz f8, f8
    stfd f8, 0x38(r1)
    lwz r25, 0x3c(r1)
    stw r25, 0x0(r26)
    lwz r25, 0xdc(r4)
    cmpwi r25, 0x0
    beq lbl_fn_8060D720_00000810
    lfs f8, 0xe4(r4)
    lwz r25, 0x0(r9)
    fmuls f8, f9, f8
    addi r26, r25, 0x4
    stw r26, 0x0(r9)
    fctiwz f8, f8
    stfd f8, 0x38(r1)
    lwz r26, 0x3c(r1)
    stw r26, 0x0(r25)
lbl_fn_8060D720_00000810:
    addi r5, r5, 0x4
    addi r6, r6, 0x4
    addi r7, r7, 0x4
    addi r8, r8, 0x8
    addi r9, r9, 0x4
    bdnz lbl_fn_8060D720_000006A8
    lwz r6, 0xc(r4)
    lwz r5, 0x10(r4)
    addi r6, r6, 0x1
    stw r6, 0xc(r4)
    cmplw r6, r5
    blt lbl_fn_8060D720_00000844
    stw r0, 0xc(r4)
lbl_fn_8060D720_00000844:
    lwz r6, 0x2c(r4)
    cmpwi r6, 0x0
    beq lbl_fn_8060D720_00000868
    lwz r5, 0x28(r4)
    addi r5, r5, 0x1
    stw r5, 0x28(r4)
    cmplw r5, r6
    blt lbl_fn_8060D720_00000868
    stw r0, 0x28(r4)
lbl_fn_8060D720_00000868:
    lwz r6, 0x4c(r4)
    lwz r5, 0x54(r4)
    addi r6, r6, 0x1
    stw r6, 0x4c(r4)
    cmplw r6, r5
    blt lbl_fn_8060D720_00000884
    stw r0, 0x4c(r4)
lbl_fn_8060D720_00000884:
    lwz r6, 0x50(r4)
    lwz r5, 0x58(r4)
    addi r6, r6, 0x1
    stw r6, 0x50(r4)
    cmplw r6, r5
    blt lbl_fn_8060D720_000008A0
    stw r0, 0x50(r4)
lbl_fn_8060D720_000008A0:
    lwz r6, 0x84(r4)
    lwz r5, 0x8c(r4)
    addi r6, r6, 0x1
    stw r6, 0x84(r4)
    cmplw r6, r5
    blt lbl_fn_8060D720_000008BC
    stw r0, 0x84(r4)
lbl_fn_8060D720_000008BC:
    lwz r6, 0x88(r4)
    lwz r5, 0x90(r4)
    addi r6, r6, 0x1
    stw r6, 0x88(r4)
    cmplw r6, r5
    blt lbl_fn_8060D720_000008D8
    stw r0, 0x88(r4)
lbl_fn_8060D720_000008D8:
    addi r28, r28, 0x1
    cmplwi r28, 0x60
    blt lbl_fn_8060D720_00000660
lbl_fn_8060D720_000008E4:
    addi r11, r1, 0x60
    bl _restgpr_24
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_8060DA90(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    mr r24, r3
    li r25, 0x0
    mr r30, r24
    li r31, 0x0
    mr r29, r24
lbl_fn_8060DA90_00000928:
    lwz r0, 0x14(r24)
    lwz r12, lbl_8087E858
    slwi r3, r0, 2
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    stw r3, 0x0(r30)
    bne lbl_fn_8060DA90_00000950
    li r3, 0x0
    b lbl_fn_8060DA90_00000A2C
lbl_fn_8060DA90_00000950:
    lwz r0, 0x30(r24)
    cmpwi r0, 0x0
    beq lbl_fn_8060DA90_00000980
    lwz r12, lbl_8087E858
    slwi r3, r0, 2
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    stw r3, 0x1c(r30)
    bne lbl_fn_8060DA90_00000984
    li r3, 0x0
    b lbl_fn_8060DA90_00000A2C
lbl_fn_8060DA90_00000980:
    stw r31, 0x1c(r30)
lbl_fn_8060DA90_00000984:
    mr r27, r24
    mr r28, r29
    li r26, 0x0
lbl_fn_8060DA90_00000990:
    lwz r0, 0x5c(r27)
    lwz r12, lbl_8087E858
    slwi r3, r0, 2
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    stw r3, 0x34(r28)
    bne lbl_fn_8060DA90_000009B8
    li r3, 0x0
    b lbl_fn_8060DA90_00000A2C
lbl_fn_8060DA90_000009B8:
    addi r26, r26, 0x1
    addi r28, r28, 0x4
    cmplwi r26, 0x2
    addi r27, r27, 0x4
    blt lbl_fn_8060DA90_00000990
    mr r28, r24
    mr r27, r29
    li r26, 0x0
lbl_fn_8060DA90_000009D8:
    lwz r0, 0x94(r28)
    lwz r12, lbl_8087E858
    slwi r3, r0, 2
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    stw r3, 0x6c(r27)
    bne lbl_fn_8060DA90_00000A00
    li r3, 0x0
    b lbl_fn_8060DA90_00000A2C
lbl_fn_8060DA90_00000A00:
    addi r26, r26, 0x1
    addi r27, r27, 0x4
    cmplwi r26, 0x2
    addi r28, r28, 0x4
    blt lbl_fn_8060DA90_000009D8
    addi r25, r25, 0x1
    addi r29, r29, 0x8
    cmplwi r25, 0x3
    addi r30, r30, 0x4
    blt lbl_fn_8060DA90_00000928
    li r3, 0x1
lbl_fn_8060DA90_00000A2C:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8060DBE0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    mr r25, r3
    li r26, 0x0
    mr r31, r25
    mr r30, r25
lbl_fn_8060DBE0_00000A74:
    lwz r3, 0x0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8060DBE0_00000A90
    lwz r0, 0x14(r25)
    li r4, 0x0
    slwi r5, r0, 2
    bl memset
lbl_fn_8060DBE0_00000A90:
    lwz r3, 0x1c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8060DBE0_00000AAC
    lwz r0, 0x30(r25)
    li r4, 0x0
    slwi r5, r0, 2
    bl memset
lbl_fn_8060DBE0_00000AAC:
    mr r28, r30
    mr r29, r25
    li r27, 0x0
lbl_fn_8060DBE0_00000AB8:
    lwz r3, 0x34(r28)
    cmpwi r3, 0x0
    beq lbl_fn_8060DBE0_00000AD4
    lwz r0, 0x5c(r29)
    li r4, 0x0
    slwi r5, r0, 2
    bl memset
lbl_fn_8060DBE0_00000AD4:
    addi r27, r27, 0x1
    addi r29, r29, 0x4
    cmplwi r27, 0x2
    addi r28, r28, 0x4
    blt lbl_fn_8060DBE0_00000AB8
    mr r29, r30
    mr r28, r25
    li r27, 0x0
lbl_fn_8060DBE0_00000AF4:
    lwz r3, 0x6c(r29)
    cmpwi r3, 0x0
    beq lbl_fn_8060DBE0_00000B10
    lwz r0, 0x94(r28)
    li r4, 0x0
    slwi r5, r0, 2
    bl memset
lbl_fn_8060DBE0_00000B10:
    addi r27, r27, 0x1
    addi r28, r28, 0x4
    cmplwi r27, 0x2
    addi r29, r29, 0x4
    blt lbl_fn_8060DBE0_00000AF4
    addi r26, r26, 0x1
    addi r30, r30, 0x8
    cmplwi r26, 0x3
    addi r31, r31, 0x4
    blt lbl_fn_8060DBE0_00000A74
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8060DCE0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    li r26, 0x0
    mr r30, r3
    li r31, 0x0
    mr r29, r3
lbl_fn_8060DCE0_00000B74:
    lwz r3, 0x0(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8060DCE0_00000B90
    lwz r12, lbl_8087E85C
    mtctr r12
    bctrl
    stw r31, 0x0(r30)
lbl_fn_8060DCE0_00000B90:
    lwz r3, 0x1c(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8060DCE0_00000BAC
    lwz r12, lbl_8087E85C
    mtctr r12
    bctrl
    stw r31, 0x1c(r30)
lbl_fn_8060DCE0_00000BAC:
    mr r28, r29
    li r27, 0x0
lbl_fn_8060DCE0_00000BB4:
    lwz r3, 0x34(r28)
    cmpwi r3, 0x0
    beq lbl_fn_8060DCE0_00000BD0
    lwz r12, lbl_8087E85C
    mtctr r12
    bctrl
    stw r31, 0x34(r28)
lbl_fn_8060DCE0_00000BD0:
    addi r27, r27, 0x1
    addi r28, r28, 0x4
    cmplwi r27, 0x2
    blt lbl_fn_8060DCE0_00000BB4
    mr r28, r29
    li r27, 0x0
lbl_fn_8060DCE0_00000BE8:
    lwz r3, 0x6c(r28)
    cmpwi r3, 0x0
    beq lbl_fn_8060DCE0_00000C04
    lwz r12, lbl_8087E85C
    mtctr r12
    bctrl
    stw r31, 0x6c(r28)
lbl_fn_8060DCE0_00000C04:
    addi r27, r27, 0x1
    addi r28, r28, 0x4
    cmplwi r27, 0x2
    blt lbl_fn_8060DCE0_00000BE8
    addi r26, r26, 0x1
    addi r29, r29, 0x8
    cmplwi r26, 0x3
    addi r30, r30, 0x4
    blt lbl_fn_8060DCE0_00000B74
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8060DDD0(void)
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
    bl _savegpr_25
    lwz r5, 0xb4(r3)
    mr r31, r3
    cmplwi r5, 0x8
    blt lbl_fn_8060DDD0_00000C84
    li r3, 0x0
    b lbl_fn_8060DDD0_00000EBC
lbl_fn_8060DDD0_00000C84:
    lfs f1, 0xbc(r3)
    lfs f2, lbl_8088863C
    fcmpo cr0, f1, f2
    blt lbl_fn_8060DDD0_00000CA0
    lfs f0, 0xb8(r3)
    fcmpo cr0, f1, f0
    ble lbl_fn_8060DDD0_00000CA8
lbl_fn_8060DDD0_00000CA0:
    li r3, 0x0
    b lbl_fn_8060DDD0_00000EBC
lbl_fn_8060DDD0_00000CA8:
    lwz r0, 0xc0(r3)
    cmplwi r0, 0x6
    blt lbl_fn_8060DDD0_00000CBC
    li r3, 0x0
    b lbl_fn_8060DDD0_00000EBC
lbl_fn_8060DDD0_00000CBC:
    lfs f0, 0xc4(r3)
    fcmpo cr0, f0, f2
    bge lbl_fn_8060DDD0_00000CD0
    li r3, 0x0
    b lbl_fn_8060DDD0_00000EBC
lbl_fn_8060DDD0_00000CD0:
    lfs f0, 0xc8(r3)
    fcmpo cr0, f0, f2
    blt lbl_fn_8060DDD0_00000CE8
    lfs f1, lbl_80888640
    fcmpo cr0, f0, f1
    ble lbl_fn_8060DDD0_00000CF0
lbl_fn_8060DDD0_00000CE8:
    li r3, 0x0
    b lbl_fn_8060DDD0_00000EBC
lbl_fn_8060DDD0_00000CF0:
    lfs f0, 0xcc(r3)
    fcmpo cr0, f0, f2
    blt lbl_fn_8060DDD0_00000D04
    fcmpo cr0, f0, f1
    ble lbl_fn_8060DDD0_00000D0C
lbl_fn_8060DDD0_00000D04:
    li r3, 0x0
    b lbl_fn_8060DDD0_00000EBC
lbl_fn_8060DDD0_00000D0C:
    lfs f0, 0xd0(r3)
    fcmpo cr0, f0, f2
    blt lbl_fn_8060DDD0_00000D20
    fcmpo cr0, f0, f1
    ble lbl_fn_8060DDD0_00000D28
lbl_fn_8060DDD0_00000D20:
    li r3, 0x0
    b lbl_fn_8060DDD0_00000EBC
lbl_fn_8060DDD0_00000D28:
    lfs f0, 0xd4(r3)
    fcmpo cr0, f0, f2
    blt lbl_fn_8060DDD0_00000D3C
    fcmpo cr0, f0, f1
    ble lbl_fn_8060DDD0_00000D44
lbl_fn_8060DDD0_00000D3C:
    li r3, 0x0
    b lbl_fn_8060DDD0_00000EBC
lbl_fn_8060DDD0_00000D44:
    lfs f0, 0xe0(r3)
    fcmpo cr0, f0, f2
    blt lbl_fn_8060DDD0_00000D58
    fcmpo cr0, f0, f1
    ble lbl_fn_8060DDD0_00000D60
lbl_fn_8060DDD0_00000D58:
    li r3, 0x0
    b lbl_fn_8060DDD0_00000EBC
lbl_fn_8060DDD0_00000D60:
    lfs f0, 0xe4(r3)
    fcmpo cr0, f0, f2
    blt lbl_fn_8060DDD0_00000D74
    fcmpo cr0, f0, f1
    ble lbl_fn_8060DDD0_00000D7C
lbl_fn_8060DDD0_00000D74:
    li r3, 0x0
    b lbl_fn_8060DDD0_00000EBC
lbl_fn_8060DDD0_00000D7C:
    li r0, 0x0
    lis r4, lbl_807AF800@ha
    stw r0, 0xc(r3)
    slwi r0, r5, 2
    addi r4, r4, lbl_807AF800@l
    cmplwi r5, 0x3
    lwzx r0, r4, r0
    stw r0, 0x10(r3)
    bgt lbl_fn_8060DDD0_00000DAC
    lfs f0, lbl_80888650
    stfs f0, 0x18(r3)
    b lbl_fn_8060DDD0_00000DB4
lbl_fn_8060DDD0_00000DAC:
    lfs f0, lbl_80888654
    stfs f0, 0x18(r3)
lbl_fn_8060DDD0_00000DB4:
    lfs f1, lbl_80888638
    li r28, 0x0
    lfs f0, 0xbc(r3)
    stw r28, 0x28(r3)
    fmuls f1, f1, f0
    bl fn_80695D84
    lis r29, lbl_807AF820@ha
    stw r3, 0x2c(r31)
    lfd f29, lbl_80888670
    mr r27, r31
    lfs f30, lbl_80888658
    addi r29, r29, lbl_807AF820@l
    lfs f31, lbl_80888638
    li r25, 0x0
    li r26, 0x0
    lis r30, 0x4330
lbl_fn_8060DDD0_00000DF4:
    stw r28, 0x4c(r27)
    lfd f1, lbl_80888660
    lwz r0, 0xc0(r31)
    stw r30, 0x8(r1)
    slwi r0, r0, 4
    add r0, r26, r0
    lwzx r0, r29, r0
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    stw r0, 0x54(r27)
    fsubs f2, f0, f29
    lfs f0, 0xc4(r31)
    fmuls f2, f30, f2
    fmuls f0, f31, f0
    fdivs f2, f2, f0
    bl fn_8068AEB0
    frsp f0, f1
    addi r25, r25, 0x1
    cmplwi r25, 0x2
    addi r26, r26, 0x4
    stfs f0, 0x64(r27)
    addi r27, r27, 0x4
    blt lbl_fn_8060DDD0_00000DF4
    lwz r0, 0xc0(r31)
    lis r3, lbl_807AF820@ha
    li r4, 0x0
    stw r4, 0x84(r31)
    addi r3, r3, lbl_807AF820@l
    slwi r0, r0, 4
    add r3, r3, r0
    lfs f1, lbl_80888640
    lwz r0, 0x8(r3)
    lfs f0, 0xcc(r31)
    stw r0, 0x8c(r31)
    fsubs f1, f1, f0
    lfs f0, lbl_80888668
    stw r4, 0x88(r31)
    lfs f2, 0xc8(r31)
    lwz r0, 0xc(r3)
    fcmpo cr0, f1, f0
    stw r0, 0x90(r31)
    stfs f2, 0x9c(r31)
    stfs f1, 0xac(r31)
    ble lbl_fn_8060DDD0_00000EA8
    stfs f0, 0xac(r31)
lbl_fn_8060DDD0_00000EA8:
    lfs f0, lbl_8088863C
    li r3, 0x1
    stfs f0, 0xa0(r31)
    stfs f0, 0xa4(r31)
    stfs f0, 0xa8(r31)
lbl_fn_8060DDD0_00000EBC:
    addi r11, r1, 0x30
    psq_l f31, 0x58(r1), 0, 0
    lfd f31, 0x50(r1)
    psq_l f30, 0x48(r1), 0, 0
    lfd f30, 0x40(r1)
    psq_l f29, 0x38(r1), 0, 0
    lfd f29, 0x30(r1)
    bl _restgpr_25
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}
