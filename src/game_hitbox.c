#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_26(void);
extern void _savegpr_26(void);
extern void dtor_80084684(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800EFBC4(void);
extern void fn_800EFDA0(void);
extern void fn_800EFE3C(void);
extern void fn_80134168(void);
extern void fn_80210220(void);
extern void fn_80219558(void);
extern void fn_80232B7C(void);
extern void fn_80239D58(void);
extern void fn_80239DAC(void);
extern void fn_8023A184(void);
extern void fn_8023A680(void);
extern void fn_8023A8B4(void);
extern void fn_805F9940(void);
extern void fn_80680CF8(void);

/* External data declarations */
extern u8 lbl_80735EB0[];
extern u8 lbl_80736040[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F610;
extern u32 lbl_80881478;
extern u32 lbl_8088147C;
extern u32 lbl_80881494;
extern u32 lbl_808814AC;
extern u32 lbl_808814C4;
extern u32 lbl_808814C8;
extern u32 lbl_808814E8;
extern u32 lbl_80881518;
extern u32 lbl_8088151C;
extern u32 lbl_808815B4;
extern u32 lbl_808815B8;
extern u32 lbl_808815D0;

/* Function declarations */
void fn_801070C8(void);
void fn_80107168(void);
void fn_80107208(void);
void fn_80107274(void);
void fn_80107380(void);
void fn_8010743C(void);
void fn_80107574(void);
void fn_80107584(void);
void fn_801076D0(void);
void fn_80107798(void);
void fn_801077A8(void);
void fn_80107850(void);
void fn_80107860(void);
void fn_80107908(void);
void fn_801079B0(void);
void fn_801079C0(void);
void fn_80107A68(void);
void fn_80107A78(void);
void fn_80107B20(void);
void fn_80107B30(void);
void fn_80107BD8(void);
void fn_80107BE8(void);
void fn_80107CA8(void);
void fn_80107CEC(void);
void fn_80107D94(void);
void fn_80107DA4(void);
void fn_80107E58(void);
void fn_80107E68(void);
void fn_80107F10(void);
void fn_80107F20(void);
void fn_80107FC8(void);
void fn_80107FD8(void);
void fn_80108080(void);
void fn_80108090(void);
void fn_80108150(void);
void fn_801081D8(void);
void fn_80108378(void);
void fn_801083D8(void);

asm void fn_801070C8(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    mr r3, r4
    stw r0, 0x44(r1)
    stfd f31, 0x38(r1)
    fmr f31, f1
    stmw r25, 0x1c(r1)
    mr r25, r5
    mr r26, r6
    mr r27, r7
    mr r28, r8
    mr r29, r9
    mr r30, r10
    bl fn_800EFBC4
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_801070C8_00000088
    mr r3, r25
    mr r4, r26
    bl fn_80232B7C
    li r0, -0x1
    stw r0, 0x8(r1)
    li r0, 0x1
    fmr f1, f31
    stw r0, 0xc(r1)
    mr r4, r31
    mr r5, r27
    mr r7, r28
    lwz r3, lbl_8087F3C0
    mr r8, r29
    mr r9, r30
    li r6, 0x0
    li r10, -0x1
    bl fn_8023A8B4
lbl_fn_801070C8_00000088:
    lfd f31, 0x38(r1)
    lmw r25, 0x1c(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80107168(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    mr r3, r4
    stw r0, 0x44(r1)
    stfd f31, 0x38(r1)
    fmr f31, f1
    stmw r25, 0x1c(r1)
    mr r25, r5
    mr r26, r6
    mr r27, r7
    mr r28, r8
    mr r29, r9
    mr r30, r10
    bl fn_800EFDA0
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_80107168_00000128
    mr r3, r25
    mr r4, r26
    bl fn_80232B7C
    li r0, -0x1
    stw r0, 0x8(r1)
    li r0, 0x1
    fmr f1, f31
    stw r0, 0xc(r1)
    mr r4, r31
    mr r5, r27
    mr r7, r28
    lwz r3, lbl_8087F3C0
    mr r8, r29
    mr r9, r30
    li r6, 0x0
    li r10, -0x1
    bl fn_8023A8B4
lbl_fn_80107168_00000128:
    lfd f31, 0x38(r1)
    lmw r25, 0x1c(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80107208(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    mr r3, r4
    stw r0, 0x24(r1)
    stfd f31, 0x18(r1)
    fmr f31, f1
    stw r31, 0x14(r1)
    mr r31, r5
    bl fn_800EFE3C
    cmpwi r3, 0x0
    beq lbl_fn_80107208_00000194
    fmr f1, f31
    mr r4, r3
    mr r5, r31
    addi r3, r1, 0x8
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_80107208_00000194:
    lwz r0, 0x24(r1)
    lfd f31, 0x18(r1)
    lwz r31, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80107274(void)
{
    nofralloc
    li r0, 0x2
    mr r6, r3
    li r7, 0x0
    mtctr r0
lbl_fn_80107274_000001BC:
    addis r5, r6, 0x1
    lwz r0, -0x45b0(r5)
    cmpwi r0, 0x0
    beq lbl_fn_80107274_000001E0
    lwz r0, -0x4398(r5)
    cmplw r0, r4
    bne lbl_fn_80107274_000001E0
    li r3, 0x0
    blr
lbl_fn_80107274_000001E0:
    addi r6, r6, 0x21c
    addis r5, r6, 0x1
    lwz r0, -0x45b0(r5)
    cmpwi r0, 0x0
    beq lbl_fn_80107274_00000208
    lwz r0, -0x4398(r5)
    cmplw r0, r4
    bne lbl_fn_80107274_00000208
    li r3, 0x0
    blr
lbl_fn_80107274_00000208:
    addi r6, r6, 0x21c
    addis r5, r6, 0x1
    lwz r0, -0x45b0(r5)
    cmpwi r0, 0x0
    beq lbl_fn_80107274_00000230
    lwz r0, -0x4398(r5)
    cmplw r0, r4
    bne lbl_fn_80107274_00000230
    li r3, 0x0
    blr
lbl_fn_80107274_00000230:
    addi r6, r6, 0x21c
    addis r5, r6, 0x1
    lwz r0, -0x45b0(r5)
    cmpwi r0, 0x0
    beq lbl_fn_80107274_00000258
    lwz r0, -0x4398(r5)
    cmplw r0, r4
    bne lbl_fn_80107274_00000258
    li r3, 0x0
    blr
lbl_fn_80107274_00000258:
    addi r6, r6, 0x21c
    addi r7, r7, 0x3
    bdnz lbl_fn_80107274_000001BC
    li r0, 0x8
    mr r6, r3
    li r7, 0x0
    mtctr r0
lbl_fn_80107274_00000274:
    addis r5, r6, 0x1
    lwz r0, -0x45b0(r5)
    cmpwi r0, 0x0
    bne lbl_fn_80107274_000002A4
    mulli r5, r7, 0x21c
    addis r0, r3, 0x1
    li r6, 0x1
    li r3, 0x1
    add r5, r0, r5
    stw r6, -0x45b0(r5)
    stw r4, -0x4398(r5)
    blr
lbl_fn_80107274_000002A4:
    addi r6, r6, 0x21c
    addi r7, r7, 0x1
    bdnz lbl_fn_80107274_00000274
    li r3, 0x0
    blr
}

asm void fn_80107380(void)
{
    nofralloc
    li r0, 0x2
    li r7, 0x0
    li r5, 0x0
    mtctr r0
lbl_fn_80107380_000002C8:
    addis r6, r3, 0x1
    lwz r0, -0x45b0(r6)
    cmpwi r0, 0x0
    beq lbl_fn_80107380_000002EC
    lwz r0, -0x4398(r6)
    cmplw r0, r4
    bne lbl_fn_80107380_000002EC
    stw r5, -0x45b0(r6)
    stw r5, -0x4398(r6)
lbl_fn_80107380_000002EC:
    addi r3, r3, 0x21c
    addis r6, r3, 0x1
    lwz r0, -0x45b0(r6)
    cmpwi r0, 0x0
    beq lbl_fn_80107380_00000314
    lwz r0, -0x4398(r6)
    cmplw r0, r4
    bne lbl_fn_80107380_00000314
    stw r5, -0x45b0(r6)
    stw r5, -0x4398(r6)
lbl_fn_80107380_00000314:
    addi r3, r3, 0x21c
    addis r6, r3, 0x1
    lwz r0, -0x45b0(r6)
    cmpwi r0, 0x0
    beq lbl_fn_80107380_0000033C
    lwz r0, -0x4398(r6)
    cmplw r0, r4
    bne lbl_fn_80107380_0000033C
    stw r5, -0x45b0(r6)
    stw r5, -0x4398(r6)
lbl_fn_80107380_0000033C:
    addi r3, r3, 0x21c
    addis r6, r3, 0x1
    lwz r0, -0x45b0(r6)
    cmpwi r0, 0x0
    beq lbl_fn_80107380_00000364
    lwz r0, -0x4398(r6)
    cmplw r0, r4
    bne lbl_fn_80107380_00000364
    stw r5, -0x45b0(r6)
    stw r5, -0x4398(r6)
lbl_fn_80107380_00000364:
    addi r3, r3, 0x21c
    addi r7, r7, 0x3
    bdnz lbl_fn_80107380_000002C8
    blr
}

asm void fn_8010743C(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    addis r6, r3, 0x4
    cmpwi r5, 0x0
    stw r0, 0x54(r1)
    li r0, 0x1
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    fmr f31, f1
    stw r31, 0x3c(r1)
    mr r31, r5
    stw r30, 0x38(r1)
    mr r30, r4
    stw r29, 0x34(r1)
    mr r29, r3
    stw r0, -0x1d00(r6)
    lwz r3, lbl_8087F3C0
    stw r0, 0xd0(r3)
    beq lbl_fn_8010743C_000003D8
    mr r4, r6
    lwz r3, lbl_8087F3C0
    li r5, 0x0
    li r6, 0x0
    subi r4, r4, 0x760c
    bl fn_80239DAC
lbl_fn_8010743C_000003D8:
    cmpwi r31, 0x0
    bne lbl_fn_8010743C_000003FC
    addis r4, r29, 0x4
    lwz r3, lbl_8087F3C0
    li r5, 0x0
    subi r4, r4, 0x760c
    bl fn_80239D58
    cmpwi r3, 0x0
    bne lbl_fn_8010743C_0000047C
lbl_fn_8010743C_000003FC:
    addis r3, r29, 0x4
    li r4, 0x0
    lfs f0, -0x1cfc(r3)
    stfs f0, 0x18(r1)
    lfs f0, -0x1cf8(r3)
    stfs f0, 0x1c(r1)
    lfs f0, -0x1cf4(r3)
    stfs f0, 0x20(r1)
    lfs f0, -0x1cf0(r3)
    stfs f0, 0x24(r1)
    lfs f0, -0x1d04(r3)
    subi r3, r3, 0x760c
    stfs f0, 0x24(r1)
    bl fn_80232B7C
    lfs f0, lbl_808814E8
    li r0, 0x0
    stw r0, 0x8(r1)
    li r0, -0x1
    fdivs f1, f31, f0
    addis r4, r29, 0x4
    stw r0, 0xc(r1)
    li r0, 0x1
    mr r7, r30
    addi r10, r1, 0x18
    stw r0, 0x10(r1)
    li r5, -0x1
    li r6, 0x6
    li r8, 0x0
    lwz r3, lbl_8087F3C0
    li r9, 0x0
    subi r4, r4, 0x760c
    bl fn_8023A680
lbl_fn_8010743C_0000047C:
    lwz r3, lbl_8087F3C0
    li r0, 0x0
    stw r0, 0xd0(r3)
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80107574(void)
{
    nofralloc
    addis r3, r3, 0x4
    li r0, 0x2
    stw r0, -0x1d00(r3)
    blr
}

asm void fn_80107584(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    addis r4, r3, 0x4
    stw r0, 0x34(r1)
    li r0, 0x1
    stw r31, 0x2c(r1)
    mr r31, r3
    lwz r5, lbl_8087F3C0
    stw r0, 0xd0(r5)
    lwz r0, -0x1d00(r4)
    cmpwi r0, 0x1
    beq lbl_fn_80107584_000004F8
    cmpwi r0, 0x2
    beq lbl_fn_80107584_00000558
    b lbl_fn_80107584_000005E8
lbl_fn_80107584_000004F8:
    lfs f1, lbl_808814AC
    lfs f0, -0x1d04(r4)
    lfs f2, lbl_80881494
    fadds f0, f1, f0
    fcmpo cr0, f2, f0
    bge lbl_fn_80107584_00000514
    b lbl_fn_80107584_00000518
lbl_fn_80107584_00000514:
    fmr f2, f0
lbl_fn_80107584_00000518:
    addis r4, r3, 0x4
    frsp f0, f2
    stfs f2, -0x1d04(r4)
    addi r6, r1, 0x18
    lfs f1, -0x1cfc(r4)
    li r5, 0x0
    stfs f1, 0x18(r1)
    lwz r3, lbl_8087F3C0
    lfs f1, -0x1cf8(r4)
    stfs f1, 0x1c(r1)
    lfs f1, -0x1cf4(r4)
    subi r4, r4, 0x760c
    stfs f1, 0x20(r1)
    stfs f0, 0x24(r1)
    bl fn_8023A184
    b lbl_fn_80107584_000005E8
lbl_fn_80107584_00000558:
    lfs f1, -0x1d04(r4)
    lfs f0, lbl_808814AC
    lfs f2, lbl_80881478
    fsubs f0, f1, f0
    fcmpo cr0, f2, f0
    ble lbl_fn_80107584_00000574
    b lbl_fn_80107584_00000578
lbl_fn_80107584_00000574:
    fmr f2, f0
lbl_fn_80107584_00000578:
    addis r4, r3, 0x4
    frsp f0, f2
    stfs f2, -0x1d04(r4)
    addi r6, r1, 0x8
    lfs f1, -0x1cfc(r4)
    li r5, 0x0
    stfs f1, 0x8(r1)
    lwz r3, lbl_8087F3C0
    lfs f1, -0x1cf8(r4)
    stfs f1, 0xc(r1)
    lfs f1, -0x1cf4(r4)
    subi r4, r4, 0x760c
    stfs f1, 0x10(r1)
    stfs f0, 0x14(r1)
    bl fn_8023A184
    addis r4, r31, 0x4
    lfs f0, lbl_80881518
    lfs f1, -0x1d04(r4)
    fcmpo cr0, f1, f0
    bge lbl_fn_80107584_000005E8
    lwz r3, lbl_8087F3C0
    li r5, 0x0
    li r6, 0x0
    subi r4, r4, 0x760c
    bl fn_80239DAC
    addis r3, r31, 0x4
    li r0, 0x0
    stw r0, -0x1d00(r3)
lbl_fn_80107584_000005E8:
    lwz r3, lbl_8087F3C0
    li r0, 0x0
    stw r0, 0xd0(r3)
    lwz r31, 0x2c(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_801076D0(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r5
    li r5, 0x14
    stw r30, 0x48(r1)
    mr r30, r4
    stw r29, 0x44(r1)
    mr r29, r3
    lwz r3, lbl_8087F3C0
    bl fn_80239D58
    cmpwi r3, 0x0
    bne lbl_fn_801076D0_000006B4
    mr r3, r30
    li r4, 0x14
    bl fn_80232B7C
    lfs f0, lbl_80881478
    addis r4, r29, 0x4
    lfs f1, lbl_80881494
    li r3, -0x1
    stfs f0, 0x1c(r1)
    li r0, 0x1
    mr r5, r31
    addi r7, r1, 0x10
    stfs f0, 0x20(r1)
    addi r8, r1, 0x1c
    addi r9, r1, 0x28
    li r6, 0x0
    stfs f0, 0x24(r1)
    li r10, -0x1
    subi r4, r4, 0x744c
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f1, 0x28(r1)
    stfs f1, 0x2c(r1)
    stfs f1, 0x30(r1)
    stfs f1, 0x34(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
lbl_fn_801076D0_000006B4:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80107798(void)
{
    nofralloc
    lwz r3, lbl_8087F3C0
    mr r6, r5
    li r5, 0x14
    b fn_80239DAC
}

asm void fn_801077A8(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r5
    stw r30, 0x38(r1)
    mr r30, r3
    mr r3, r4
    li r4, 0x15
    bl fn_80232B7C
    lfs f0, lbl_80881478
    addis r4, r30, 0x4
    lfs f1, lbl_80881494
    li r3, -0x1
    stfs f0, 0x1c(r1)
    li r0, 0x1
    mr r5, r31
    addi r7, r1, 0x10
    stfs f0, 0x20(r1)
    addi r8, r1, 0x1c
    addi r9, r1, 0x28
    li r6, 0x0
    stfs f0, 0x24(r1)
    li r10, -0x1
    subi r4, r4, 0x7440
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f1, 0x28(r1)
    stfs f1, 0x2c(r1)
    stfs f1, 0x30(r1)
    stfs f1, 0x34(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80107850(void)
{
    nofralloc
    lwz r3, lbl_8087F3C0
    li r5, 0x15
    li r6, 0x1
    b fn_80239DAC
}

asm void fn_80107860(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r5
    stw r30, 0x38(r1)
    mr r30, r3
    mr r3, r4
    li r4, 0x16
    bl fn_80232B7C
    lfs f0, lbl_80881478
    addis r4, r30, 0x4
    lfs f1, lbl_80881494
    li r3, -0x1
    stfs f0, 0x1c(r1)
    li r0, 0x1
    mr r5, r31
    addi r7, r1, 0x10
    stfs f0, 0x20(r1)
    addi r8, r1, 0x1c
    addi r9, r1, 0x28
    li r6, 0x0
    stfs f0, 0x24(r1)
    li r10, -0x1
    subi r4, r4, 0x7428
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f1, 0x28(r1)
    stfs f1, 0x2c(r1)
    stfs f1, 0x30(r1)
    stfs f1, 0x34(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80107908(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r5
    stw r30, 0x38(r1)
    mr r30, r3
    mr r3, r4
    li r4, 0x17
    bl fn_80232B7C
    lfs f0, lbl_80881478
    addis r4, r30, 0x4
    lfs f1, lbl_80881494
    li r3, -0x1
    stfs f0, 0x1c(r1)
    li r0, 0x1
    mr r5, r31
    addi r7, r1, 0x10
    stfs f0, 0x20(r1)
    addi r8, r1, 0x1c
    addi r9, r1, 0x28
    li r6, 0x0
    stfs f0, 0x24(r1)
    li r10, -0x1
    subi r4, r4, 0x741c
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f1, 0x28(r1)
    stfs f1, 0x2c(r1)
    stfs f1, 0x30(r1)
    stfs f1, 0x34(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_801079B0(void)
{
    nofralloc
    lwz r3, lbl_8087F3C0
    li r5, 0x17
    li r6, 0x1
    b fn_80239DAC
}

asm void fn_801079C0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r5
    stw r30, 0x38(r1)
    mr r30, r3
    mr r3, r4
    li r4, 0x18
    bl fn_80232B7C
    lfs f0, lbl_80881478
    addis r4, r30, 0x4
    lfs f1, lbl_80881494
    li r3, -0x1
    stfs f0, 0x1c(r1)
    li r0, 0x1
    mr r5, r31
    addi r7, r1, 0x10
    stfs f0, 0x20(r1)
    addi r8, r1, 0x1c
    addi r9, r1, 0x28
    li r6, 0x0
    stfs f0, 0x24(r1)
    li r10, -0x1
    subi r4, r4, 0x7404
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f1, 0x28(r1)
    stfs f1, 0x2c(r1)
    stfs f1, 0x30(r1)
    stfs f1, 0x34(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80107A68(void)
{
    nofralloc
    lwz r3, lbl_8087F3C0
    li r5, 0x18
    li r6, 0x1
    b fn_80239DAC
}

asm void fn_80107A78(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r5
    stw r30, 0x38(r1)
    mr r30, r3
    mr r3, r4
    li r4, 0x19
    bl fn_80232B7C
    lfs f0, lbl_80881478
    addis r4, r30, 0x4
    lfs f1, lbl_80881494
    li r3, -0x1
    stfs f0, 0x1c(r1)
    li r0, 0x1
    mr r5, r31
    addi r7, r1, 0x10
    stfs f0, 0x20(r1)
    addi r8, r1, 0x1c
    addi r9, r1, 0x28
    li r6, 0x0
    stfs f0, 0x24(r1)
    li r10, -0x1
    subi r4, r4, 0x7434
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f1, 0x28(r1)
    stfs f1, 0x2c(r1)
    stfs f1, 0x30(r1)
    stfs f1, 0x34(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80107B20(void)
{
    nofralloc
    lwz r3, lbl_8087F3C0
    li r5, 0x19
    li r6, 0x1
    b fn_80239DAC
}

asm void fn_80107B30(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r5
    stw r30, 0x38(r1)
    mr r30, r3
    mr r3, r4
    li r4, 0x1a
    bl fn_80232B7C
    lfs f0, lbl_80881478
    addis r4, r30, 0x4
    lfs f1, lbl_80881494
    li r3, -0x1
    stfs f0, 0x1c(r1)
    li r0, 0x1
    mr r5, r31
    addi r7, r1, 0x10
    stfs f0, 0x20(r1)
    addi r8, r1, 0x1c
    addi r9, r1, 0x28
    li r6, 0x0
    stfs f0, 0x24(r1)
    li r10, -0x1
    subi r4, r4, 0x73f8
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f1, 0x28(r1)
    stfs f1, 0x2c(r1)
    stfs f1, 0x30(r1)
    stfs f1, 0x34(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80107BD8(void)
{
    nofralloc
    lwz r3, lbl_8087F3C0
    li r5, 0x1a
    li r6, 0x1
    b fn_80239DAC
}

asm void fn_80107BE8(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    li r0, 0x2
    stw r31, 0x3c(r1)
    mr r31, r5
    stw r30, 0x38(r1)
    mr r30, r3
    mr r3, r4
    li r4, 0x1b
    lwz r6, lbl_8087F3C0
    stw r0, 0xb8(r6)
    bl fn_80232B7C
    lfs f0, lbl_80881478
    addis r4, r30, 0x4
    lfs f1, lbl_80881494
    li r3, -0x1
    stfs f0, 0x1c(r1)
    li r0, 0x1
    mr r5, r31
    addi r7, r1, 0x10
    stfs f0, 0x20(r1)
    addi r8, r1, 0x1c
    addi r9, r1, 0x28
    li r6, 0x0
    stfs f0, 0x24(r1)
    li r10, -0x1
    subi r4, r4, 0x73ec
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f1, 0x28(r1)
    stfs f1, 0x2c(r1)
    stfs f1, 0x30(r1)
    stfs f1, 0x34(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r3, lbl_8087F3C0
    li r0, 0x0
    stw r0, 0xb8(r3)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80107CA8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    mr r6, r5
    li r5, 0x1b
    stw r0, 0x14(r1)
    li r0, 0x2
    lwz r3, lbl_8087F3C0
    stw r0, 0xb8(r3)
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    li r0, 0x0
    stw r0, 0xb8(r3)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80107CEC(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    fmr f31, f1
    stw r31, 0x2c(r1)
    mr r31, r5
    stw r30, 0x28(r1)
    mr r30, r3
    mr r3, r4
    li r4, 0x1c
    bl fn_80232B7C
    lfs f0, lbl_80881494
    lis r7, lbl_807C7030@ha
    stfs f0, 0x10(r1)
    addis r4, r30, 0x4
    addi r7, r7, lbl_807C7030@l
    li r3, -0x1
    stfs f0, 0x14(r1)
    li r0, 0x1
    fmr f1, f31
    mr r5, r31
    stfs f0, 0x18(r1)
    mr r8, r7
    addi r9, r1, 0x10
    li r6, 0x0
    stfs f0, 0x1c(r1)
    li r10, -0x1
    subi r4, r4, 0x73e0
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r0, 0x44(r1)
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80107D94(void)
{
    nofralloc
    lwz r3, lbl_8087F3C0
    li r5, 0x1c
    li r6, 0x1
    b fn_80239DAC
}

asm void fn_80107DA4(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    fmr f31, f1
    stw r31, 0x2c(r1)
    mr r31, r6
    stw r30, 0x28(r1)
    mr r30, r5
    stw r29, 0x24(r1)
    mr r29, r3
    mr r3, r4
    li r4, 0x1d
    bl fn_80232B7C
    lfs f0, lbl_80881494
    addis r4, r29, 0x4
    stfs f0, 0x10(r1)
    lis r8, lbl_807C7030@ha
    li r3, -0x1
    li r0, 0x1
    stfs f0, 0x14(r1)
    fmr f1, f31
    mr r5, r30
    mr r7, r31
    stfs f0, 0x18(r1)
    addi r8, r8, lbl_807C7030@l
    addi r9, r1, 0x10
    stfs f0, 0x1c(r1)
    li r6, 0x0
    li r10, -0x1
    subi r4, r4, 0x73d4
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r0, 0x44(r1)
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80107E58(void)
{
    nofralloc
    lwz r3, lbl_8087F3C0
    li r5, 0x1d
    li r6, 0x1
    b fn_80239DAC
}

asm void fn_80107E68(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r5
    stw r30, 0x38(r1)
    mr r30, r3
    mr r3, r4
    li r4, 0x1e
    bl fn_80232B7C
    lfs f0, lbl_80881478
    addis r4, r30, 0x4
    lfs f1, lbl_80881494
    li r3, -0x1
    stfs f0, 0x1c(r1)
    li r0, 0x1
    mr r5, r31
    addi r7, r1, 0x10
    stfs f0, 0x20(r1)
    addi r8, r1, 0x1c
    addi r9, r1, 0x28
    li r6, 0x0
    stfs f0, 0x24(r1)
    li r10, -0x1
    subi r4, r4, 0x7410
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f1, 0x28(r1)
    stfs f1, 0x2c(r1)
    stfs f1, 0x30(r1)
    stfs f1, 0x34(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80107F10(void)
{
    nofralloc
    lwz r3, lbl_8087F3C0
    li r5, 0x1e
    li r6, 0x1
    b fn_80239DAC
}

asm void fn_80107F20(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    fmr f31, f1
    stw r31, 0x2c(r1)
    mr r31, r5
    stw r30, 0x28(r1)
    mr r30, r3
    mr r3, r4
    li r4, 0x1f
    bl fn_80232B7C
    lfs f0, lbl_80881494
    lis r7, lbl_807C7030@ha
    stfs f0, 0x10(r1)
    addis r4, r30, 0x4
    addi r7, r7, lbl_807C7030@l
    li r3, -0x1
    stfs f0, 0x14(r1)
    li r0, 0x1
    fmr f1, f31
    mr r5, r31
    stfs f0, 0x18(r1)
    mr r8, r7
    addi r9, r1, 0x10
    li r6, 0x0
    stfs f0, 0x1c(r1)
    li r10, -0x1
    subi r4, r4, 0x73c8
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r0, 0x44(r1)
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80107FC8(void)
{
    nofralloc
    lwz r3, lbl_8087F3C0
    li r5, 0x1f
    li r6, 0x1
    b fn_80239DAC
}

asm void fn_80107FD8(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r5
    stw r30, 0x38(r1)
    mr r30, r3
    mr r3, r4
    li r4, 0x20
    bl fn_80232B7C
    lfs f0, lbl_80881478
    addis r4, r30, 0x4
    lfs f1, lbl_80881494
    li r3, -0x1
    stfs f0, 0x1c(r1)
    li r0, 0x1
    mr r5, r31
    addi r7, r1, 0x10
    stfs f0, 0x20(r1)
    addi r8, r1, 0x1c
    addi r9, r1, 0x28
    li r6, 0x0
    stfs f0, 0x24(r1)
    li r10, -0x1
    subi r4, r4, 0x73bc
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f1, 0x28(r1)
    stfs f1, 0x2c(r1)
    stfs f1, 0x30(r1)
    stfs f1, 0x34(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80108080(void)
{
    nofralloc
    lwz r3, lbl_8087F3C0
    li r5, 0x20
    li r6, 0x1
    b fn_80239DAC
}

asm void fn_80108090(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0xa
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    stw r0, 0x6d0(r3)
    stw r0, 0x6d4(r3)
    stw r0, 0x6d8(r3)
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    bne lbl_fn_80108090_00001004
    li r4, 0x5
lbl_fn_80108090_00001004:
    lis r31, lbl_80736040@ha
    stw r4, 0x6d8(r3)
    addi r5, r31, lbl_80736040@l
    slwi r3, r4, 1
    mr r6, r5
    li r4, 0x3
    li r7, 0x0
    bl fn_800846FC
    lwz r0, 0x6d8(r30)
    addi r5, r31, lbl_80736040@l
    stw r3, 0x6d0(r30)
    mr r6, r5
    slwi r3, r0, 1
    li r4, 0x3
    li r7, 0x0
    bl fn_800846FC
    lfs f0, lbl_80881494
    li r0, 0x0
    stw r3, 0x6d4(r30)
    mr r3, r30
    stw r0, 0x0(r30)
    stb r0, 0x92d(r30)
    stfs f0, 0x248(r30)
    stb r0, 0x92e(r30)
    stb r0, 0x92f(r30)
    bl fn_801081D8
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80108150(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_fn_80108150_000010F4
    lwz r3, 0x6d0(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80108150_000010C4
    bl fn_80084C24
    li r0, 0x0
    stw r0, 0x6d0(r30)
lbl_fn_80108150_000010C4:
    lwz r3, 0x6d4(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80108150_000010DC
    bl fn_80084C24
    li r0, 0x0
    stw r0, 0x6d4(r30)
lbl_fn_80108150_000010DC:
    cmpwi r31, 0x0
    li r0, 0x0
    stw r0, 0x6d8(r30)
    ble lbl_fn_80108150_000010F4
    mr r3, r30
    bl dtor_80084684
lbl_fn_80108150_000010F4:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801081D8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lfs f1, lbl_80881494
    li r4, 0x0
    stw r0, 0x24(r1)
    li r0, 0xc
    lfs f0, lbl_80881478
    stw r31, 0x1c(r1)
    mr r31, r3
    mr r5, r31
    mtctr r0
lbl_fn_801081D8_0000113C:
    stw r4, 0x8(r5)
    stfs f1, 0x128(r5)
    stw r4, 0x48c(r5)
    stw r4, 0x5ac(r5)
    stw r4, 0x36c(r5)
    stfs f0, 0x24c(r5)
    stw r4, 0x80c(r5)
    stfs f0, 0x6e4(r5)
    stw r4, 0xc(r5)
    stfs f1, 0x12c(r5)
    stw r4, 0x490(r5)
    stw r4, 0x5b0(r5)
    stw r4, 0x370(r5)
    stfs f0, 0x250(r5)
    stw r4, 0x810(r5)
    stfs f0, 0x6e8(r5)
    stw r4, 0x10(r5)
    stfs f1, 0x130(r5)
    stw r4, 0x494(r5)
    stw r4, 0x5b4(r5)
    stw r4, 0x374(r5)
    stfs f0, 0x254(r5)
    stw r4, 0x814(r5)
    stfs f0, 0x6ec(r5)
    stw r4, 0x14(r5)
    stfs f1, 0x134(r5)
    stw r4, 0x498(r5)
    stw r4, 0x5b8(r5)
    stw r4, 0x378(r5)
    stfs f0, 0x258(r5)
    stw r4, 0x818(r5)
    stfs f0, 0x6f0(r5)
    stw r4, 0x18(r5)
    stfs f1, 0x138(r5)
    stw r4, 0x49c(r5)
    stw r4, 0x5bc(r5)
    stw r4, 0x37c(r5)
    stfs f0, 0x25c(r5)
    stw r4, 0x81c(r5)
    stfs f0, 0x6f4(r5)
    stw r4, 0x1c(r5)
    stfs f1, 0x13c(r5)
    stw r4, 0x4a0(r5)
    stw r4, 0x5c0(r5)
    stw r4, 0x380(r5)
    stfs f0, 0x260(r5)
    stw r4, 0x820(r5)
    stfs f0, 0x6f8(r5)
    addi r5, r5, 0x18
    bdnz lbl_fn_801081D8_0000113C
    li r8, 0x0
    li r7, 0x0
    li r6, 0x0
    li r5, -0x1
    b lbl_fn_801081D8_00001230
lbl_fn_801081D8_00001218:
    lwz r4, 0x6d0(r3)
    addi r8, r8, 0x1
    sthx r6, r4, r7
    lwz r4, 0x6d4(r3)
    sthx r5, r4, r7
    addi r7, r7, 0x2
lbl_fn_801081D8_00001230:
    lwz r0, 0x6d8(r3)
    cmpw r8, r0
    blt lbl_fn_801081D8_00001218
    bl fn_80680CF8
    xoris r0, r3, 0x8000
    lis r3, 0x4330
    stw r0, 0xc(r1)
    lis r4, lbl_80735EB0@ha
    lfd f3, lbl_80735EB0@l(r4)
    li r0, 0x0
    stw r3, 0x8(r1)
    lfs f1, lbl_808815B8
    lfd f2, 0x8(r1)
    lfs f0, lbl_808815B4
    fsubs f2, f2, f3
    stw r0, 0x6dc(r31)
    stw r0, 0x6e0(r31)
    fdivs f1, f2, f1
    stw r0, 0x804(r31)
    stw r0, 0x808(r31)
    stb r0, 0x92f(r31)
    stw r0, 0x930(r31)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x10(r1)
    lwz r0, 0x14(r1)
    stw r0, 0x6cc(r31)
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80108378(void)
{
    nofralloc
    lwz r6, lbl_8087F048
    cmpwi r6, 0x0
    beq lbl_fn_80108378_00001308
    cmpwi r4, 0x0
    bne lbl_fn_80108378_000012CC
    li r3, -0x1
    blr
lbl_fn_80108378_000012CC:
    addis r3, r6, 0x3
    lwz r0, 0x63b0(r3)
    li r3, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80108378_00001300
lbl_fn_80108378_000012E4:
    addis r5, r6, 0x1
    lwz r0, -0x3410(r5)
    cmplw r0, r4
    beqlr
    addi r6, r6, 0x934
    addi r3, r3, 0x1
    bdnz lbl_fn_80108378_000012E4
lbl_fn_80108378_00001300:
    li r3, -0x1
    blr
lbl_fn_80108378_00001308:
    li r3, -0x1
    blr
}

asm void fn_801083D8(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x40
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    bl _savegpr_26
    cmpwi r4, 0x0
    mr r26, r3
    mr r27, r4
    li r7, -0x1
    blt lbl_fn_801083D8_000017CC
    slwi r29, r4, 2
    lwz r4, lbl_8087F0A8
    add r3, r3, r29
    lwz r28, 0x8(r3)
    lwz r3, 0x3cc(r4)
    bl fn_80210220
    lwz r4, lbl_8087F048
    lwz r31, lbl_8087F0A8
    cmpwi r4, 0x0
    beq lbl_fn_801083D8_0000139C
    cmpwi r27, 0x0
    blt lbl_fn_801083D8_00001380
    addis r3, r4, 0x3
    lwz r0, 0x63b0(r3)
    cmpw r0, r27
    bgt lbl_fn_801083D8_00001388
lbl_fn_801083D8_00001380:
    li r30, 0x0
    b lbl_fn_801083D8_000013A0
lbl_fn_801083D8_00001388:
    mulli r0, r27, 0x934
    addis r3, r4, 0x1
    add r3, r3, r0
    lwz r30, -0x3410(r3)
    b lbl_fn_801083D8_000013A0
lbl_fn_801083D8_0000139C:
    li r30, 0x0
lbl_fn_801083D8_000013A0:
    lwz r6, 0x0(r26)
    lwz r0, 0xd6c(r6)
    cmpwi r0, 0x6
    bne lbl_fn_801083D8_000013E0
    lwz r3, 0xd2c(r6)
    cmpwi r3, 0x0
    beq lbl_fn_801083D8_000013D8
    lwz r3, 0x218(r3)
    cmpwi r3, 0x0
    beq lbl_fn_801083D8_000013D0
    lwz r8, 0x8c(r3)
    b lbl_fn_801083D8_000013E4
lbl_fn_801083D8_000013D0:
    li r8, 0x0
    b lbl_fn_801083D8_000013E4
lbl_fn_801083D8_000013D8:
    li r8, 0x0
    b lbl_fn_801083D8_000013E4
lbl_fn_801083D8_000013E0:
    mr r8, r6
lbl_fn_801083D8_000013E4:
    cmpwi r6, 0x0
    beq lbl_fn_801083D8_000015D4
    lwz r0, 0x7e0(r6)
    rlwinm r0, r0, 0, 20, 20
    cmplwi r0, 0x800
    beq lbl_fn_801083D8_000015D4
    lwz r0, 0xd70(r6)
    cmpwi r0, 0x1
    bne lbl_fn_801083D8_000015D4
    cmpwi r8, 0x0
    beq lbl_fn_801083D8_000015D4
    lwz r7, 0x38(r8)
    li r4, 0x0
    li r3, 0x0
    li r5, 0x0
    rlwinm r0, r7, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_801083D8_0000143C
    clrlwi r0, r7, 31
    cmplwi r0, 0x1
    beq lbl_fn_801083D8_0000143C
    li r5, 0x1
lbl_fn_801083D8_0000143C:
    cmpwi r5, 0x0
    beq lbl_fn_801083D8_00001458
    lwz r0, 0x7e0(r8)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_801083D8_00001458
    li r3, 0x1
lbl_fn_801083D8_00001458:
    cmpwi r3, 0x0
    beq lbl_fn_801083D8_0000148C
    lwz r0, 0x55c(r8)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_801083D8_00001480
    lwz r0, 0x560(r8)
    cmpwi r0, 0x1c
    bne lbl_fn_801083D8_00001480
    li r3, 0x1
lbl_fn_801083D8_00001480:
    cmpwi r3, 0x0
    bne lbl_fn_801083D8_0000148C
    li r4, 0x1
lbl_fn_801083D8_0000148C:
    cmpwi r4, 0x0
    beq lbl_fn_801083D8_000015D4
    lfs f1, 0x530(r8)
    addi r3, r1, 0x8
    lfs f0, 0x530(r30)
    lfs f3, 0x52c(r8)
    fsubs f4, f1, f0
    lfs f2, 0x52c(r30)
    lfs f1, 0x528(r8)
    lfs f0, 0x528(r30)
    fsubs f2, f3, f2
    lfs f31, lbl_8088147C
    fsubs f0, f1, f0
    stfs f2, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f4, 0x10(r1)
    bl fn_805F9940
    fcmpo cr0, f1, f31
    bge lbl_fn_801083D8_000014F4
    fsubs f2, f31, f1
    lfs f0, lbl_8088151C
    fmuls f0, f0, f2
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r0, 0x1c(r1)
    add r28, r28, r0
lbl_fn_801083D8_000014F4:
    lwz r0, 0x6d8(r26)
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_801083D8_00001548
lbl_fn_801083D8_00001508:
    lwz r3, 0x6d0(r26)
    lhax r5, r3, r4
    cmpwi r5, 0x0
    ble lbl_fn_801083D8_00001540
    lwz r3, 0x6d4(r26)
    lhax r0, r3, r4
    cmpw r27, r0
    bne lbl_fn_801083D8_00001540
    fcmpo cr0, f1, f31
    bge lbl_fn_801083D8_00001540
    srwi r0, r5, 31
    add r0, r0, r5
    srawi r0, r0, 1
    add r28, r28, r0
lbl_fn_801083D8_00001540:
    addi r4, r4, 0x2
    bdnz lbl_fn_801083D8_00001508
lbl_fn_801083D8_00001548:
    lwz r0, 0x48(r30)
    cmpwi r0, 0x0
    bne lbl_fn_801083D8_0000156C
    lwz r0, 0x374(r31)
    subf r3, r0, r28
    neg r0, r3
    andc r0, r0, r3
    srawi r0, r0, 31
    and r28, r3, r0
lbl_fn_801083D8_0000156C:
    lwz r6, lbl_8087F048
    cmpwi r6, 0x0
    beq lbl_fn_801083D8_000015CC
    add r4, r26, r29
    xoris r3, r28, 0x8000
    lfs f0, 0x6e4(r4)
    mulli r5, r27, 0x934
    lfs f1, lbl_80881494
    addis r4, r6, 0x1
    lis r0, 0x4330
    stw r3, 0x1c(r1)
    add r4, r4, r5
    stw r0, 0x18(r1)
    fsubs f2, f1, f0
    lis r3, lbl_80735EB0@ha
    lfs f3, -0x31c8(r4)
    lfd f1, lbl_80735EB0@l(r3)
    lfd f0, 0x18(r1)
    fmuls f3, f3, f2
    fsubs f0, f0, f1
    fmuls f0, f0, f3
    fctiwz f0, f0
    stfd f0, 0x20(r1)
    lwz r28, 0x24(r1)
lbl_fn_801083D8_000015CC:
    mr r3, r28
    b lbl_fn_801083D8_000017D0
lbl_fn_801083D8_000015D4:
    lwz r7, 0x7e0(r6)
    lfs f3, lbl_808815D0
    rlwinm r0, r7, 0, 18, 18
    cmplwi r0, 0x2000
    bne lbl_fn_801083D8_000015F0
    lfs f0, lbl_808814AC
    fmuls f3, f3, f0
lbl_fn_801083D8_000015F0:
    lwz r0, 0xd70(r6)
    cmpwi r0, 0x1
    bne lbl_fn_801083D8_00001600
    lfs f3, lbl_808814C8
lbl_fn_801083D8_00001600:
    add r3, r26, r29
    lfs f2, lbl_808815D0
    lfs f4, 0x24c(r3)
    fcmpo cr0, f4, f2
    bge lbl_fn_801083D8_00001634
    fsubs f1, f2, f4
    lfs f0, lbl_808814C4
    fmuls f0, f0, f1
    fdivs f0, f0, f2
    fctiwz f0, f0
    stfd f0, 0x20(r1)
    lwz r0, 0x24(r1)
    add r28, r28, r0
lbl_fn_801083D8_00001634:
    lwz r0, 0x6d8(r26)
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_801083D8_0000167C
lbl_fn_801083D8_00001648:
    lwz r3, 0x6d0(r26)
    lhax r5, r3, r4
    cmpwi r5, 0x0
    ble lbl_fn_801083D8_00001674
    lwz r3, 0x6d4(r26)
    lhax r0, r3, r4
    cmpw r27, r0
    bne lbl_fn_801083D8_00001674
    fcmpo cr0, f4, f3
    bge lbl_fn_801083D8_00001674
    add r28, r28, r5
lbl_fn_801083D8_00001674:
    addi r4, r4, 0x2
    bdnz lbl_fn_801083D8_00001648
lbl_fn_801083D8_0000167C:
    rlwinm r0, r7, 0, 20, 20
    cmplwi r0, 0x800
    bne lbl_fn_801083D8_00001694
    add r3, r26, r29
    lwz r0, 0x36c(r3)
    add r28, r28, r0
lbl_fn_801083D8_00001694:
    fcmpo cr0, f4, f3
    bge lbl_fn_801083D8_000016B4
    add r3, r26, r29
    lwz r0, 0x5ac(r3)
    cmpwi r0, 0x0
    ble lbl_fn_801083D8_000016B4
    lwz r0, 0x48c(r3)
    add r28, r28, r0
lbl_fn_801083D8_000016B4:
    lwz r0, 0x48(r30)
    cmpwi r0, 0x0
    bne lbl_fn_801083D8_000016F4
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    bne lbl_fn_801083D8_000016F4
    lwz r3, 0x50(r30)
    bl fn_80219558
    cmpwi r3, 0x2
    beq lbl_fn_801083D8_000016F4
    lwz r0, 0x374(r31)
    subf r3, r0, r28
    neg r0, r3
    andc r0, r0, r3
    srawi r0, r0, 31
    and r28, r3, r0
lbl_fn_801083D8_000016F4:
    addi r3, r30, 0x7d4
    li r4, 0x33
    li r5, -0x1
    bl fn_80134168
    add. r0, r28, r3
    ble lbl_fn_801083D8_00001724
    addi r3, r30, 0x7d4
    li r4, 0x33
    li r5, -0x1
    bl fn_80134168
    add r0, r28, r3
    b lbl_fn_801083D8_00001728
lbl_fn_801083D8_00001724:
    li r0, 0x0
lbl_fn_801083D8_00001728:
    xoris r0, r0, 0x8000
    lis r6, 0x4330
    lis r3, lbl_80735EB0@ha
    stw r0, 0x24(r1)
    lfd f3, lbl_80735EB0@l(r3)
    add r5, r26, r29
    stw r6, 0x20(r1)
    lwz r4, lbl_8087F048
    lfd f0, 0x20(r1)
    lfs f1, 0x128(r5)
    cmpwi r4, 0x0
    fsubs f2, f0, f3
    lfs f0, lbl_808814AC
    fmadds f0, f2, f1, f0
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r7, 0x1c(r1)
    beq lbl_fn_801083D8_000017C0
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    bne lbl_fn_801083D8_000017C0
    mulli r3, r27, 0x934
    addis r4, r4, 0x1
    lfs f1, lbl_80881494
    xoris r0, r7, 0x8000
    lfs f0, 0x6e4(r5)
    add r3, r4, r3
    stw r0, 0x24(r1)
    fsubs f1, f1, f0
    lfs f2, -0x31c8(r3)
    stw r6, 0x20(r1)
    fmuls f2, f2, f1
    lfd f0, 0x20(r1)
    fsubs f0, f0, f3
    fmuls f0, f0, f2
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r7, 0x1c(r1)
lbl_fn_801083D8_000017C0:
    add r3, r26, r29
    lwz r0, 0x80c(r3)
    add r7, r7, r0
lbl_fn_801083D8_000017CC:
    mr r3, r7
lbl_fn_801083D8_000017D0:
    addi r11, r1, 0x40
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    bl _restgpr_26
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}
