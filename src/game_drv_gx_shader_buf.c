#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void OSCancelAlarm(void);
extern void OSSetAlarm(void);
extern void _restgpr_20(void);
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _savegpr_20(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void fn_805C0120(void);
extern void fn_805C02F0(void);
extern void fn_805C1F90(void);
extern void fn_805C2040(void);
extern void fn_805C2250(void);
extern void fn_805C2270(void);
extern void fn_805C2290(void);
extern void fn_805C22A0(void);
extern void fn_805C22B0(void);
extern void fn_805C2360(void);
extern void fn_805C23C0(void);
extern void fn_805C2610(void);
extern void fn_805C26A0(void);
extern void fn_805C26D0(void);
extern void fn_805C27E0(void);
extern void fn_805C2A70(void);
extern void fn_805C2C10(void);
extern void fn_805C2CF0(void);
extern void fn_805C3570(void);
extern void fn_805C3950(void);
extern void fn_805C3B20(void);
extern void fn_805C3C40(void);
extern void fn_805C3C50(void);
extern void fn_805C3C60(void);
extern void fn_805C7FE0(void);
extern void fn_805C80B0(void);
extern void fn_805C80F0(void);
extern void fn_805C9310(void);
extern void fn_805CC170(void);
extern void fn_805CF4C0(void);
extern void fn_805EC870(void);
extern void fn_80604FB0(void);
extern void fn_80605140(void);
extern void fn_806089C0(void);
extern void fn_80608B10(void);
extern void fn_806095F0(void);
extern void fn_80609600(void);
extern void fn_80609610(void);
extern void fn_80609640(void);
extern void fn_80609650(void);
extern void fn_80609660(void);
extern void fn_8060B0D0(void);
extern void fn_8060B140(void);
extern void fn_8060B170(void);
extern void fn_806104E0(void);
extern void fn_806104F0(void);
extern void fn_80624AB0(void);
extern void fn_8065F500(void);
extern void fn_8065F510(void);
extern void fn_8065F520(void);
extern void fn_80660B90(void);
extern void fn_80660CF0(void);
extern void fn_80661410(void);
extern void fn_80661640(void);
extern void fn_80663160(void);
extern void fn_806631A0(void);
extern void fn_8068236C(void);

/* External data declarations */
extern u8 jumptable_80798C5C[];
extern u8 lbl_80764198[];
extern u8 lbl_80764200[];
extern u8 lbl_807980D8[];
extern u8 lbl_80798130[];
extern u8 lbl_80798BC8[];
extern u8 lbl_807CA148[];
extern u8 lbl_807CA168[];

/* Small data declarations */

/* Function declarations */
void fn_805C4FA0(void);
void fn_805C5110(void);
void fn_805C51A0(void);
void fn_805C56B0(void);
void fn_805C58B0(void);
void fn_805C59E0(void);
void fn_805C5C50(void);

asm void fn_805C4FA0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    stw r28, 0x10(r1)
    li r28, 0x0
    lwz r4, 0x4(r3)
    lwz r31, 0xc(r4)
    lwz r0, 0x28(r4)
    mr r3, r31
    add r30, r31, r0
    b lbl_fn_805C4FA0_00000054
    nop
lbl_fn_805C4FA0_00000040:
    extsb r0, r4
    cmpwi r0, 0x2c
    beq lbl_fn_805C4FA0_00000060
    addi r28, r28, 0x1
    addi r3, r3, 0x1
lbl_fn_805C4FA0_00000054:
    lbz r4, 0x0(r3)
    extsb. r0, r4
    bne lbl_fn_805C4FA0_00000040
lbl_fn_805C4FA0_00000060:
    addi r3, r28, 0x1
    bl fn_805C3C50
    stw r3, 0xb0(r29)
    mr r4, r31
    mr r5, r28
    bl fn_8068236C
    lwz r4, 0xb0(r29)
    add r3, r28, r31
    addi r31, r3, 0x1
    li r0, 0x0
    stbx r0, r4, r28
    mr r3, r31
    li r28, 0x0
    b lbl_fn_805C4FA0_000000AC
lbl_fn_805C4FA0_00000098:
    extsb r0, r4
    cmpwi r0, 0x2c
    beq lbl_fn_805C4FA0_000000B8
    addi r28, r28, 0x1
    addi r3, r3, 0x1
lbl_fn_805C4FA0_000000AC:
    lbz r4, 0x0(r3)
    extsb. r0, r4
    bne lbl_fn_805C4FA0_00000098
lbl_fn_805C4FA0_000000B8:
    addi r3, r28, 0x1
    bl fn_805C3C50
    stw r3, 0xb4(r29)
    mr r4, r31
    mr r5, r28
    bl fn_8068236C
    lwz r3, 0xb4(r29)
    li r4, 0x0
    mr r5, r29
    add r31, r31, r28
    stbx r4, r3, r28
    li r8, 0x0
    li r9, 0x0
    li r3, 0x1
    b lbl_fn_805C4FA0_00000128
    nop
lbl_fn_805C4FA0_000000F8:
    extsb r0, r7
    cmpwi r0, 0x2c
    bne lbl_fn_805C4FA0_00000124
    lbz r0, 0x1(r6)
    cmpwi r0, 0x31
    bne lbl_fn_805C4FA0_00000118
    stw r3, 0xa0(r5)
    b lbl_fn_805C4FA0_0000011C
lbl_fn_805C4FA0_00000118:
    stw r4, 0xa0(r5)
lbl_fn_805C4FA0_0000011C:
    addi r5, r5, 0x4
    addi r9, r9, 0x1
lbl_fn_805C4FA0_00000124:
    addi r8, r8, 0x1
lbl_fn_805C4FA0_00000128:
    lbzx r7, r31, r8
    add r6, r31, r8
    extsb. r0, r7
    beq lbl_fn_805C4FA0_00000140
    cmplw r6, r30
    blt lbl_fn_805C4FA0_000000F8
lbl_fn_805C4FA0_00000140:
    slwi r0, r9, 2
    stw r9, 0xc(r29)
    subf r0, r9, r0
    stw r0, 0x10(r29)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805C5110(void)
{
    nofralloc
    lwz r4, 0x4(r3)
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    lwz r11, 0x8(r4)
    li r7, 0x0
    mr r6, r11
    b lbl_fn_805C5110_000001E4
lbl_fn_805C5110_00000190:
    cmplwi r0, 0x22
    bne lbl_fn_805C5110_000001DC
    cmpwi r10, 0x0
    bne lbl_fn_805C5110_000001D8
    mulli r4, r9, 0x18
    addi r5, r8, 0x1
    add r0, r7, r3
    addi r9, r9, 0x1
    slwi r5, r5, 1
    li r10, 0x1
    add r4, r4, r0
    cmpwi r9, 0xa
    add r0, r11, r5
    stw r0, 0xbc(r4)
    bne lbl_fn_805C5110_000001DC
    li r9, 0x0
    addi r7, r7, 0x4
    b lbl_fn_805C5110_000001DC
lbl_fn_805C5110_000001D8:
    li r10, 0x0
lbl_fn_805C5110_000001DC:
    addi r6, r6, 0x2
    addi r8, r8, 0x1
lbl_fn_805C5110_000001E4:
    lhz r0, 0x0(r6)
    cmpwi r0, 0x0
    bne lbl_fn_805C5110_00000190
    blr
}

asm void fn_805C51A0(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    addi r11, r1, 0x60
    stfd f31, 0x70(r1)
    psq_st f31, 0x78(r1), 0, 0
    stfd f30, 0x60(r1)
    psq_st f30, 0x68(r1), 0, 0
    bl _savegpr_26
    lbz r0, 0x94(r3)
    lis r30, lbl_80764198@ha
    lis r31, lbl_807980D8@ha
    mr r29, r3
    cmpwi r0, 0x0
    addi r30, r30, lbl_80764198@l
    addi r31, r31, lbl_807980D8@l
    bne lbl_fn_805C51A0_000006DC
    li r0, 0x1
    stb r0, 0x94(r3)
    sth r0, 0x5ca(r3)
    bl fn_8065F510
    li r28, 0x0
    stb r28, 0x95(r29)
    lis r4, lbl_807CA148@ha
    lbz r0, 0x97(r29)
    stb r28, 0x96(r29)
    lfs f2, 0x2f0(r30)
    cmpwi r0, 0x0
    stb r28, 0x9a(r29)
    lfs f1, 0x2f4(r30)
    stb r28, 0x98(r29)
    stw r28, 0x1ac(r29)
    lwz r3, lbl_807CA148@l(r4)
    lwz r3, 0x4(r3)
    lfs f0, 0x30(r3)
    fdivs f0, f2, f0
    fctiwz f0, f0
    stfd f0, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r0, 0x5bc(r29)
    lwz r3, lbl_807CA148@l(r4)
    lwz r3, 0x4(r3)
    lfs f0, 0x30(r3)
    fdivs f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x38(r1)
    lwz r0, 0x3c(r1)
    stw r0, 0x5c0(r29)
    beq lbl_fn_805C51A0_00000300
    addi r3, r29, 0x5d4
    bl fn_8060B140
    lwz r3, 0x734(r29)
    lwz r4, 0x738(r29)
    bl fn_806089C0
    lwz r3, 0x5cc(r29)
    lwz r4, 0x5d0(r29)
    bl fn_806104E0
    lhz r3, 0x5c4(r29)
    bl fn_80609640
    lhz r3, 0x5c6(r29)
    bl fn_80609650
    lhz r3, 0x5c8(r29)
    bl fn_80609660
    stb r28, 0x97(r29)
lbl_fn_805C51A0_00000300:
    li r0, 0x0
    stw r0, 0x20(r29)
    stw r0, 0x24(r29)
    stw r0, 0x28(r29)
    stw r0, 0x2c(r29)
    stw r0, 0x30(r29)
    stw r0, 0x34(r29)
    stw r0, 0x38(r29)
    stw r0, 0x3c(r29)
    stw r0, 0x40(r29)
    stw r0, 0x44(r29)
    stw r0, 0x48(r29)
    stw r0, 0x4c(r29)
    stw r0, 0x50(r29)
    stw r0, 0x54(r29)
    stw r0, 0x14(r29)
    lwz r3, 0x1f0(r29)
    stw r0, 0x0(r29)
    stb r0, 0x90(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lwz r3, 0x1f0(r29)
    li r4, 0x0
    lwz r12, 0x0(r3)
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    addi r27, r31, 0x98
    li r26, 0x0
    b lbl_fn_805C51A0_000003D4
lbl_fn_805C51A0_00000380:
    lwz r3, 0x1d8(r29)
    li r5, 0x1
    lwz r4, 0x0(r27)
    lwz r3, 0x10(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    mr r4, r3
    lwz r3, 0x1f0(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x4c(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x50(r12)
    mtctr r12
    bctrl
    addi r27, r27, 0x4
    addi r26, r26, 0x1
lbl_fn_805C51A0_000003D4:
    lwz r0, 0xc(r29)
    cmpw r26, r0
    blt lbl_fn_805C51A0_00000380
    mr r3, r29
    bl fn_805C9310
    lwz r4, 0x1d8(r29)
    addi r3, r1, 0x20
    bl fn_805CF4C0
    lfs f0, 0x20(r1)
    addi r4, r29, 0x1f8
    stfs f0, 0x22c(r29)
    lwz r3, 0x1d8(r29)
    lfs f0, 0x24(r1)
    stfs f0, 0x230(r29)
    lfs f0, 0x28(r1)
    stfs f0, 0x234(r29)
    lfs f0, 0x2c(r1)
    stfs f0, 0x238(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
    lfs f0, 0x2f8(r30)
    mr r27, r29
    stfs f0, 0x8(r1)
    li r26, 0x0
    frsp f30, f0
    lfs f31, 0x2e4(r30)
    stfs f0, 0xc(r1)
lbl_fn_805C51A0_00000448:
    lwz r3, 0x1dc(r27)
    addi r4, r29, 0x1f8
    lwz r12, 0x0(r3)
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
    lwz r3, 0x1dc(r27)
    li r5, 0x1
    lwz r4, 0x58(r31)
    lwz r3, 0x10(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    stfs f30, 0x2c(r3)
    addi r26, r26, 0x1
    cmpwi r26, 0x4
    addi r27, r27, 0x4
    stfs f30, 0x30(r3)
    stfs f30, 0x10(r1)
    stfs f30, 0x14(r1)
    stfs f31, 0x18(r1)
    stfs f31, 0x34(r3)
    blt lbl_fn_805C51A0_00000448
    li r28, 0x0
lbl_fn_805C51A0_000004AC:
    lwz r3, 0x1f0(r29)
    mr r4, r28
    lfs f1, 0x2fc(r30)
    li r5, 0x0
    lwz r12, 0x0(r3)
    li r6, 0x0
    fmr f2, f1
    li r7, 0x0
    lwz r12, 0x30(r12)
    li r8, 0x0
    mtctr r12
    bctrl
    addi r28, r28, 0x1
    cmpwi r28, 0x8
    blt lbl_fn_805C51A0_000004AC
    lfs f31, 0x2e4(r30)
    mr r27, r29
    li r26, 0x0
    li r28, 0x0
lbl_fn_805C51A0_000004F8:
    stw r28, 0x58(r27)
    lwz r3, 0x24c(r27)
    bl fn_805C2270
    lwz r3, 0x24c(r27)
    bl fn_805C2250
    lwz r3, 0x24c(r27)
    bl fn_805C22A0
    lwz r3, 0x24c(r27)
    bl fn_805C27E0
    lwz r3, 0x24c(r27)
    bl fn_805C1F90
    lwz r3, 0x24c(r27)
    bl fn_805C23C0
    addi r26, r26, 0x1
    stfs f31, 0x1b0(r27)
    cmpwi r26, 0x4
    stfs f31, 0x1c0(r27)
    addi r27, r27, 0x4
    blt lbl_fn_805C51A0_000004F8
    lwz r3, 0x1d8(r29)
    li r5, 0x1
    lwz r4, 0x900(r31)
    lwz r3, 0x10(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lbz r0, 0xcf(r3)
    addi r4, r31, 0xb68
    li r5, 0x1
    rlwinm r0, r0, 0, 24, 30
    stb r0, 0xcf(r3)
    lwz r3, 0x1d8(r29)
    lwz r3, 0x10(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lbz r0, 0xcf(r3)
    addi r4, r31, 0xb74
    li r5, 0x1
    rlwinm r0, r0, 0, 24, 30
    ori r0, r0, 0x1
    stb r0, 0xcf(r3)
    lwz r3, 0x1d8(r29)
    lwz r3, 0x10(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lbz r0, 0xcf(r3)
    addi r4, r31, 0xb7c
    li r5, 0x1
    rlwinm r0, r0, 0, 24, 30
    ori r0, r0, 0x1
    stb r0, 0xcf(r3)
    lwz r3, 0x1d8(r29)
    lwz r3, 0x10(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lbz r0, 0xcf(r3)
    addi r4, r31, 0x998
    addi r28, r4, 0x8
    li r27, 0x2
    rlwinm r0, r0, 0, 24, 30
    ori r0, r0, 0x1
    stb r0, 0xcf(r3)
lbl_fn_805C51A0_0000060C:
    lwz r3, 0x1d8(r29)
    li r5, 0x1
    lwz r4, 0x0(r28)
    lwz r3, 0x10(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lbz r0, 0xcf(r3)
    addi r27, r27, 0x1
    cmpwi r27, 0x7
    addi r28, r28, 0x4
    rlwinm r0, r0, 0, 24, 30
    stb r0, 0xcf(r3)
    blt lbl_fn_805C51A0_0000060C
    addi r28, r31, 0x9e4
    li r27, 0x0
lbl_fn_805C51A0_00000650:
    lwz r3, 0x1d8(r29)
    li r5, 0x1
    lwz r4, 0x0(r28)
    lwz r3, 0x10(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lbz r0, 0xcf(r3)
    addi r27, r27, 0x1
    cmpwi r27, 0x3
    addi r28, r28, 0x4
    rlwinm r0, r0, 0, 24, 30
    stb r0, 0xcf(r3)
    blt lbl_fn_805C51A0_00000650
    lwz r3, 0x25c(r29)
    bl fn_805C2C10
    mr r3, r29
    li r4, 0x0
    bl fn_805C5C50
    lis r3, lbl_807CA148@ha
    lfs f1, 0x300(r30)
    lwz r4, lbl_807CA148@l(r3)
    li r0, 0x1
    li r3, 0x0
    lwz r4, 0x4(r4)
    lfs f0, 0x30(r4)
    fdivs f0, f1, f0
    stb r0, 0x400(r29)
    stw r3, 0x3f4(r29)
    stw r3, 0x3fc(r29)
    fctiwz f0, f0
    stfd f0, 0x38(r1)
    lwz r0, 0x3c(r1)
    stw r0, 0x3f8(r29)
lbl_fn_805C51A0_000006DC:
    addi r11, r1, 0x60
    psq_l f31, 0x78(r1), 0, 0
    lfd f31, 0x70(r1)
    psq_l f30, 0x68(r1), 0, 0
    lfd f30, 0x60(r1)
    bl _restgpr_26
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_805C56B0(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x40
    stfd f31, 0x50(r1)
    psq_st f31, 0x58(r1), 0, 0
    stfd f30, 0x40(r1)
    psq_st f30, 0x48(r1), 0, 0
    bl _savegpr_25
    lis r31, lbl_80764198@ha
    mr r29, r3
    addi r31, r31, lbl_80764198@l
    bl fn_80663160
    clrlwi r0, r3, 24
    lis r26, 0x4330
    stw r0, 0xc(r1)
    li r3, 0x7f
    lfd f3, 0x2e8(r31)
    stw r26, 0x8(r1)
    lfs f1, 0x308(r31)
    lfd f2, 0x8(r1)
    lfs f0, 0x304(r31)
    fsubs f2, f2, f3
    fmuls f1, f1, f2
    fadds f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x10(r1)
    lwz r0, 0x14(r1)
    stw r0, 0x84(r29)
    bl fn_806631A0
    lfd f30, 0x310(r31)
    mr r25, r29
    lfs f31, 0x30c(r31)
    li r27, 0x0
lbl_fn_805C56B0_00000798:
    lwz r0, 0x84(r29)
    stw r26, 0x10(r1)
    xoris r0, r0, 0x8000
    lwz r3, 0x24c(r25)
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f30
    fdivs f1, f0, f31
    bl fn_805C22B0
    lwz r3, 0x24c(r25)
    bl fn_805C2290
    addi r27, r27, 0x1
    addi r25, r25, 0x4
    cmpwi r27, 0x4
    blt lbl_fn_805C56B0_00000798
    li r30, 0x0
    li r26, 0x1
    li r27, 0x25
    li r28, 0x25
lbl_fn_805C56B0_000007E4:
    lwz r0, 0x84(r29)
    cmpw r30, r0
    bge lbl_fn_805C56B0_00000868
    addi r5, r31, 0x68
    addi r3, r30, 0x15
    li r4, 0x0
    mtctr r27
lbl_fn_805C56B0_00000800:
    lwz r0, 0x0(r5)
    cmpw r3, r0
    bne lbl_fn_805C56B0_0000081C
    lwz r0, 0x4(r5)
    cmpwi r0, 0xa
    bne lbl_fn_805C56B0_0000081C
    b lbl_fn_805C56B0_0000084C
lbl_fn_805C56B0_0000081C:
    lwz r0, 0x8(r5)
    addi r4, r4, 0x1
    cmpw r3, r0
    bne lbl_fn_805C56B0_0000083C
    lwz r0, 0xc(r5)
    cmpwi r0, 0xa
    bne lbl_fn_805C56B0_0000083C
    b lbl_fn_805C56B0_0000084C
lbl_fn_805C56B0_0000083C:
    addi r5, r5, 0x10
    addi r4, r4, 0x1
    bdnz lbl_fn_805C56B0_00000800
    li r4, -0x1
lbl_fn_805C56B0_0000084C:
    slwi r0, r4, 2
    add r3, r29, r0
    lwz r25, 0x290(r3)
    mr r3, r25
    bl fn_805C0120
    stw r26, 0x14(r25)
    b lbl_fn_805C56B0_000008DC
lbl_fn_805C56B0_00000868:
    addi r5, r31, 0x68
    addi r3, r30, 0x15
    li r4, 0x0
    mtctr r28
lbl_fn_805C56B0_00000878:
    lwz r0, 0x0(r5)
    cmpw r3, r0
    bne lbl_fn_805C56B0_00000894
    lwz r0, 0x4(r5)
    cmpwi r0, 0x9
    bne lbl_fn_805C56B0_00000894
    b lbl_fn_805C56B0_000008C4
lbl_fn_805C56B0_00000894:
    lwz r0, 0x8(r5)
    addi r4, r4, 0x1
    cmpw r3, r0
    bne lbl_fn_805C56B0_000008B4
    lwz r0, 0xc(r5)
    cmpwi r0, 0x9
    bne lbl_fn_805C56B0_000008B4
    b lbl_fn_805C56B0_000008C4
lbl_fn_805C56B0_000008B4:
    addi r5, r5, 0x10
    addi r4, r4, 0x1
    bdnz lbl_fn_805C56B0_00000878
    li r4, -0x1
lbl_fn_805C56B0_000008C4:
    slwi r0, r4, 2
    add r3, r29, r0
    lwz r25, 0x290(r3)
    mr r3, r25
    bl fn_805C0120
    stw r26, 0x14(r25)
lbl_fn_805C56B0_000008DC:
    addi r30, r30, 0x1
    cmpwi r30, 0xa
    blt lbl_fn_805C56B0_000007E4
    addi r11, r1, 0x40
    psq_l f31, 0x58(r1), 0, 0
    lfd f31, 0x50(r1)
    psq_l f30, 0x48(r1), 0, 0
    lfd f30, 0x40(r1)
    bl _restgpr_25
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_805C58B0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_80764198@ha
    addi r31, r31, lbl_80764198@l
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r4, 0x4(r3)
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_fn_805C58B0_00000950
    li r3, 0x0
    li r4, 0x0
    mtctr r12
    bctrl
lbl_fn_805C58B0_00000950:
    bl fn_806095F0
    sth r3, 0x5c4(r30)
    bl fn_80609600
    sth r3, 0x5c6(r30)
    bl fn_80609610
    sth r3, 0x5c8(r30)
    addi r3, r30, 0x5cc
    addi r4, r30, 0x5d0
    bl fn_806104F0
    addi r3, r30, 0x734
    addi r4, r30, 0x738
    bl fn_80608B10
    lis r3, fn_805C3C50@ha
    lis r4, fn_805C3C60@ha
    addi r3, r3, fn_805C3C50@l
    addi r4, r4, fn_805C3C60@l
    bl fn_806104E0
    lfs f3, 0x2e4(r31)
    addi r3, r30, 0x5d4
    lfs f2, 0x318(r31)
    lfs f1, 0x31c(r31)
    lfs f0, 0x2e0(r31)
    stfs f3, 0x72c(r30)
    stfs f2, 0x724(r30)
    stfs f1, 0x71c(r30)
    stfs f3, 0x728(r30)
    stfs f3, 0x730(r30)
    stfs f0, 0x720(r30)
    bl fn_8060B0D0
    lis r3, fn_8060B170@ha
    addi r4, r30, 0x5d4
    addi r3, r3, fn_8060B170@l
    bl fn_806089C0
    lis r3, 0x1
    addi r0, r3, -0x8000
    clrlwi r3, r0, 16
    bl fn_80609640
    li r3, 0x0
    bl fn_80609650
    li r3, 0x0
    bl fn_80609660
    lwz r3, 0x4(r30)
    lwz r12, 0x14(r3)
    cmpwi r12, 0x0
    beq lbl_fn_805C58B0_00000A14
    li r3, 0x1
    li r4, 0x0
    mtctr r12
    bctrl
lbl_fn_805C58B0_00000A14:
    bl fn_80624AB0
    clrlwi r3, r3, 24
    bl fn_805C3C40
    li r0, 0x1
    stb r0, 0x97(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805C59E0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_20
    mr r24, r3
    lis r26, lbl_807CA168@ha
    mr r28, r4
    li r25, 0x0
    mr r27, r24
    addi r26, r26, lbl_807CA168@l
    lis r29, lbl_80798130@ha
    lis r30, lbl_80764200@ha
    li r31, 0x1
    li r21, 0x0
    li r22, 0x25
    li r23, 0x25
lbl_fn_805C59E0_00000A84:
    lwz r0, 0x0(r28)
    cmpwi r0, 0x0
    beq lbl_fn_805C59E0_00000B5C
    lwz r3, 0x4(r24)
    lwz r0, 0x20(r3)
    cmpwi r0, 0x0
    bne lbl_fn_805C59E0_00000AD0
    lwz r3, 0x1dc(r27)
    li r5, 0x1
    lwz r4, lbl_80798130@l(r29)
    lwz r3, 0x10(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lbz r0, 0xcf(r3)
    rlwinm r0, r0, 0, 24, 30
    ori r0, r0, 0x1
    stb r0, 0xcf(r3)
lbl_fn_805C59E0_00000AD0:
    addi r5, r30, lbl_80764200@l
    addi r3, r25, 0x1f
    li r4, 0x0
    mtctr r22
lbl_fn_805C59E0_00000AE0:
    lwz r0, 0x0(r5)
    cmpw r3, r0
    bne lbl_fn_805C59E0_00000AFC
    lwz r0, 0x4(r5)
    cmpwi r0, 0x11
    bne lbl_fn_805C59E0_00000AFC
    b lbl_fn_805C59E0_00000B2C
lbl_fn_805C59E0_00000AFC:
    lwz r0, 0x8(r5)
    addi r4, r4, 0x1
    cmpw r3, r0
    bne lbl_fn_805C59E0_00000B1C
    lwz r0, 0xc(r5)
    cmpwi r0, 0x11
    bne lbl_fn_805C59E0_00000B1C
    b lbl_fn_805C59E0_00000B2C
lbl_fn_805C59E0_00000B1C:
    addi r5, r5, 0x10
    addi r4, r4, 0x1
    bdnz lbl_fn_805C59E0_00000AE0
    li r4, -0x1
lbl_fn_805C59E0_00000B2C:
    slwi r0, r4, 2
    add r3, r24, r0
    lwz r20, 0x290(r3)
    mr r3, r20
    bl fn_805C0120
    stw r31, 0x14(r20)
    add r3, r24, r25
    mr r4, r26
    stb r31, 0x80(r3)
    lwz r3, 0x24c(r27)
    bl fn_805C26D0
    b lbl_fn_805C59E0_00000C14
lbl_fn_805C59E0_00000B5C:
    lwz r3, 0x4(r24)
    lwz r0, 0x20(r3)
    cmpwi r0, 0x0
    bne lbl_fn_805C59E0_00000B98
    lwz r3, 0x1dc(r27)
    li r5, 0x1
    lwz r4, lbl_80798130@l(r29)
    lwz r3, 0x10(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lbz r0, 0xcf(r3)
    rlwinm r0, r0, 0, 24, 30
    stb r0, 0xcf(r3)
lbl_fn_805C59E0_00000B98:
    addi r5, r30, lbl_80764200@l
    addi r3, r25, 0x1f
    li r4, 0x0
    mtctr r23
lbl_fn_805C59E0_00000BA8:
    lwz r0, 0x0(r5)
    cmpw r3, r0
    bne lbl_fn_805C59E0_00000BC4
    lwz r0, 0x4(r5)
    cmpwi r0, 0x10
    bne lbl_fn_805C59E0_00000BC4
    b lbl_fn_805C59E0_00000BF4
lbl_fn_805C59E0_00000BC4:
    lwz r0, 0x8(r5)
    addi r4, r4, 0x1
    cmpw r3, r0
    bne lbl_fn_805C59E0_00000BE4
    lwz r0, 0xc(r5)
    cmpwi r0, 0x10
    bne lbl_fn_805C59E0_00000BE4
    b lbl_fn_805C59E0_00000BF4
lbl_fn_805C59E0_00000BE4:
    addi r5, r5, 0x10
    addi r4, r4, 0x1
    bdnz lbl_fn_805C59E0_00000BA8
    li r4, -0x1
lbl_fn_805C59E0_00000BF4:
    slwi r0, r4, 2
    add r3, r24, r0
    lwz r20, 0x290(r3)
    mr r3, r20
    bl fn_805C0120
    stw r31, 0x14(r20)
    add r3, r24, r25
    stb r21, 0x80(r3)
lbl_fn_805C59E0_00000C14:
    addi r25, r25, 0x1
    addi r27, r27, 0x4
    cmpwi r25, 0x4
    addi r26, r26, 0x18
    addi r28, r28, 0x10
    blt lbl_fn_805C59E0_00000A84
    lis r22, lbl_80798BC8@ha
    li r21, 0x0
    addi r22, r22, lbl_80798BC8@l
lbl_fn_805C59E0_00000C38:
    mr r23, r22
    li r20, 0x0
lbl_fn_805C59E0_00000C40:
    lwz r3, 0x1d8(r24)
    li r5, 0x1
    lwz r4, 0x0(r23)
    lwz r3, 0x10(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lbz r0, 0xcf(r3)
    addi r20, r20, 0x1
    cmpwi r20, 0x4
    addi r23, r23, 0x4
    rlwinm r0, r0, 0, 24, 30
    stb r0, 0xcf(r3)
    blt lbl_fn_805C59E0_00000C40
    addi r21, r21, 0x1
    addi r22, r22, 0x10
    cmpwi r21, 0x4
    blt lbl_fn_805C59E0_00000C38
    li r0, 0x0
    stw r0, 0x7c(r24)
    addi r11, r1, 0x40
    bl _restgpr_20
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_805C5C50(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r11, r1, 0x50
    stfd f31, 0x60(r1)
    psq_st f31, 0x68(r1), 0, 0
    stfd f30, 0x50(r1)
    psq_st f30, 0x58(r1), 0, 0
    bl _savegpr_25
    mr r28, r3
    lwz r3, 0x1f0(r3)
    lis r0, 0x4330
    lis r30, lbl_80764198@ha
    lwz r12, 0x0(r3)
    lis r31, lbl_807980D8@ha
    mr r29, r4
    stw r0, 0x10(r1)
    lwz r12, 0x10(r12)
    addi r30, r30, lbl_80764198@l
    stw r0, 0x18(r1)
    addi r31, r31, lbl_807980D8@l
    mtctr r12
    bctrl
    mr r25, r28
    li r26, 0x0
    b lbl_fn_805C5C50_00000D28
lbl_fn_805C5C50_00000D18:
    lwz r3, 0x260(r25)
    bl fn_805C02F0
    addi r25, r25, 0x4
    addi r26, r26, 0x1
lbl_fn_805C5C50_00000D28:
    lwz r0, 0x10(r28)
    cmpw r26, r0
    blt lbl_fn_805C5C50_00000D18
    mr r25, r28
    li r26, 0x0
lbl_fn_805C5C50_00000D3C:
    lwz r3, 0x3b8(r25)
    bl fn_805C02F0
    addi r26, r26, 0x1
    addi r25, r25, 0x4
    cmpwi r26, 0xf
    blt lbl_fn_805C5C50_00000D3C
    mr r25, r28
    li r26, 0x0
lbl_fn_805C5C50_00000D5C:
    lwz r3, 0x290(r25)
    bl fn_805C02F0
    addi r26, r26, 0x1
    addi r25, r25, 0x4
    cmpwi r26, 0x4a
    blt lbl_fn_805C5C50_00000D5C
    lfs f30, 0x2e4(r30)
    mr r25, r28
    lfs f31, 0x320(r30)
    li r26, 0x0
lbl_fn_805C5C50_00000D84:
    lfs f1, 0x1b0(r25)
    fcmpo cr0, f1, f30
    ble lbl_fn_805C5C50_00000E0C
    add r3, r28, r26
    lbz r0, 0x80(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805C5C50_00000DB0
    lwz r3, 0x24c(r25)
    lbz r0, 0x1c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_805C5C50_00000DD0
lbl_fn_805C5C50_00000DB0:
    stfs f30, 0x1b0(r25)
    stfs f30, 0x1c0(r25)
    lwz r3, 0x24c(r25)
    lbz r0, 0x1c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805C5C50_00000E38
    bl fn_805C26A0
    b lbl_fn_805C5C50_00000E38
lbl_fn_805C5C50_00000DD0:
    lwz r3, 0x4(r28)
    lfs f0, 0x30(r3)
    fsubs f0, f1, f0
    stfs f0, 0x1b0(r25)
    fcmpo cr0, f0, f30
    cror eq, lt, eq
    beq lbl_fn_805C5C50_00000DF8
    lwz r0, 0x14(r28)
    cmpwi r0, 0x11
    bne lbl_fn_805C5C50_00000E38
lbl_fn_805C5C50_00000DF8:
    lwz r3, 0x24c(r25)
    bl fn_805C26A0
    stfs f30, 0x1b0(r25)
    stfs f31, 0x1c0(r25)
    b lbl_fn_805C5C50_00000E38
lbl_fn_805C5C50_00000E0C:
    lfs f1, 0x1c0(r25)
    fcmpo cr0, f1, f30
    ble lbl_fn_805C5C50_00000E38
    lwz r3, 0x4(r28)
    lfs f0, 0x30(r3)
    fsubs f0, f1, f0
    stfs f0, 0x1c0(r25)
    fcmpo cr0, f0, f30
    cror eq, lt, eq
    bne lbl_fn_805C5C50_00000E38
    stfs f30, 0x1c0(r25)
lbl_fn_805C5C50_00000E38:
    addi r26, r26, 0x1
    addi r25, r25, 0x4
    cmpwi r26, 0x4
    blt lbl_fn_805C5C50_00000D84
    lwz r0, 0x14(r28)
    cmplwi r0, 0x13
    bgt lbl_fn_805C5C50_00002674
    lis r3, jumptable_80798C5C@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_80798C5C@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lis r27, fn_805C80B0@ha
    addi r3, r27, fn_805C80B0@l
    bl fn_8065F520
    addi r0, r27, fn_805C80B0@l
    cmplw r3, r0
    beq lbl_fn_805C5C50_00000E88
    stw r3, 0x1ac(r28)
lbl_fn_805C5C50_00000E88:
    lwz r3, 0x4(r28)
    lwz r0, 0x18(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805C5C50_00000F58
    li r0, 0x25
    addi r4, r30, 0x68
    li r3, 0x0
    mtctr r0
lbl_fn_805C5C50_00000EA8:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x2
    bne lbl_fn_805C5C50_00000EC4
    lwz r0, 0x4(r4)
    cmpwi r0, 0x0
    bne lbl_fn_805C5C50_00000EC4
    b lbl_fn_805C5C50_00000EF4
lbl_fn_805C5C50_00000EC4:
    lwz r0, 0x8(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0x2
    bne lbl_fn_805C5C50_00000EE4
    lwz r0, 0xc(r4)
    cmpwi r0, 0x0
    bne lbl_fn_805C5C50_00000EE4
    b lbl_fn_805C5C50_00000EF4
lbl_fn_805C5C50_00000EE4:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_fn_805C5C50_00000EA8
    li r3, -0x1
lbl_fn_805C5C50_00000EF4:
    stw r3, 0x18(r28)
    addi r4, r31, 0xb38
    lwz r3, 0x1d8(r28)
    li r5, 0x1
    lwz r3, 0x10(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lbz r0, 0xcf(r3)
    addi r4, r31, 0xb48
    li r5, 0x1
    rlwinm r0, r0, 0, 24, 30
    stb r0, 0xcf(r3)
    lwz r3, 0x1d8(r28)
    lwz r3, 0x10(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lbz r0, 0xcf(r3)
    rlwinm r0, r0, 0, 24, 30
    ori r0, r0, 0x1
    stb r0, 0xcf(r3)
    b lbl_fn_805C5C50_00001014
lbl_fn_805C5C50_00000F58:
    li r0, 0x25
    addi r4, r30, 0x68
    li r3, 0x0
    mtctr r0
lbl_fn_805C5C50_00000F68:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    bne lbl_fn_805C5C50_00000F84
    lwz r0, 0x4(r4)
    cmpwi r0, 0x0
    bne lbl_fn_805C5C50_00000F84
    b lbl_fn_805C5C50_00000FB4
lbl_fn_805C5C50_00000F84:
    lwz r0, 0x8(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0x0
    bne lbl_fn_805C5C50_00000FA4
    lwz r0, 0xc(r4)
    cmpwi r0, 0x0
    bne lbl_fn_805C5C50_00000FA4
    b lbl_fn_805C5C50_00000FB4
lbl_fn_805C5C50_00000FA4:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_fn_805C5C50_00000F68
    li r3, -0x1
lbl_fn_805C5C50_00000FB4:
    stw r3, 0x18(r28)
    addi r4, r31, 0xb38
    lwz r3, 0x1d8(r28)
    li r5, 0x1
    lwz r3, 0x10(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lbz r0, 0xcf(r3)
    addi r4, r31, 0xb48
    li r5, 0x1
    rlwinm r0, r0, 0, 24, 30
    ori r0, r0, 0x1
    stb r0, 0xcf(r3)
    lwz r3, 0x1d8(r28)
    lwz r3, 0x10(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lbz r0, 0xcf(r3)
    rlwinm r0, r0, 0, 24, 30
    stb r0, 0xcf(r3)
lbl_fn_805C5C50_00001014:
    lwz r0, 0x18(r28)
    slwi r0, r0, 2
    add r3, r28, r0
    lwz r27, 0x290(r3)
    mr r3, r27
    bl fn_805C0120
    cmpwi r29, 0x0
    li r0, 0x1
    stw r0, 0x14(r27)
    beq lbl_fn_805C5C50_00002674
    stw r0, 0x14(r28)
    mr r3, r28
    mr r4, r29
    bl fn_805C59E0
    b lbl_fn_805C5C50_00002674
    lwz r0, 0x18(r28)
    slwi r0, r0, 2
    add r3, r28, r0
    lwz r3, 0x290(r3)
    lwz r0, 0x14(r3)
    cmpwi r0, 0x1
    beq lbl_fn_805C5C50_00002674
    mr r3, r28
    bl fn_805C56B0
    bl fn_80661410
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    stb r0, 0x8c(r28)
    beq lbl_fn_805C5C50_00001184
    li r0, 0x25
    addi r4, r30, 0x68
    li r3, 0x0
    mtctr r0
    nop
lbl_fn_805C5C50_000010A0:
    lwz r0, 0x0(r4)
    cmpwi r0, 0xd
    bne lbl_fn_805C5C50_000010BC
    lwz r0, 0x4(r4)
    cmpwi r0, 0x6
    bne lbl_fn_805C5C50_000010BC
    b lbl_fn_805C5C50_000010EC
lbl_fn_805C5C50_000010BC:
    lwz r0, 0x8(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0xd
    bne lbl_fn_805C5C50_000010DC
    lwz r0, 0xc(r4)
    cmpwi r0, 0x6
    bne lbl_fn_805C5C50_000010DC
    b lbl_fn_805C5C50_000010EC
lbl_fn_805C5C50_000010DC:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_fn_805C5C50_000010A0
    li r3, -0x1
lbl_fn_805C5C50_000010EC:
    slwi r0, r3, 2
    add r3, r28, r0
    lwz r27, 0x290(r3)
    mr r3, r27
    bl fn_805C0120
    li r0, 0x25
    li r3, 0x1
    stw r3, 0x14(r27)
    addi r4, r30, 0x68
    li r3, 0x0
    mtctr r0
lbl_fn_805C5C50_00001118:
    lwz r0, 0x0(r4)
    cmpwi r0, 0xe
    bne lbl_fn_805C5C50_00001134
    lwz r0, 0x4(r4)
    cmpwi r0, 0x8
    bne lbl_fn_805C5C50_00001134
    b lbl_fn_805C5C50_00001164
lbl_fn_805C5C50_00001134:
    lwz r0, 0x8(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0xe
    bne lbl_fn_805C5C50_00001154
    lwz r0, 0xc(r4)
    cmpwi r0, 0x8
    bne lbl_fn_805C5C50_00001154
    b lbl_fn_805C5C50_00001164
lbl_fn_805C5C50_00001154:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_fn_805C5C50_00001118
    li r3, -0x1
lbl_fn_805C5C50_00001164:
    slwi r0, r3, 2
    add r3, r28, r0
    lwz r27, 0x290(r3)
    mr r3, r27
    bl fn_805C0120
    li r0, 0x1
    stw r0, 0x14(r27)
    b lbl_fn_805C5C50_00001278
lbl_fn_805C5C50_00001184:
    li r0, 0x25
    addi r4, r30, 0x68
    li r3, 0x0
    mtctr r0
    nop
lbl_fn_805C5C50_00001198:
    lwz r0, 0x0(r4)
    cmpwi r0, 0xd
    bne lbl_fn_805C5C50_000011B4
    lwz r0, 0x4(r4)
    cmpwi r0, 0x8
    bne lbl_fn_805C5C50_000011B4
    b lbl_fn_805C5C50_000011E4
lbl_fn_805C5C50_000011B4:
    lwz r0, 0x8(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0xd
    bne lbl_fn_805C5C50_000011D4
    lwz r0, 0xc(r4)
    cmpwi r0, 0x8
    bne lbl_fn_805C5C50_000011D4
    b lbl_fn_805C5C50_000011E4
lbl_fn_805C5C50_000011D4:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_fn_805C5C50_00001198
    li r3, -0x1
lbl_fn_805C5C50_000011E4:
    slwi r0, r3, 2
    add r3, r28, r0
    lwz r27, 0x290(r3)
    mr r3, r27
    bl fn_805C0120
    li r0, 0x25
    li r3, 0x1
    stw r3, 0x14(r27)
    addi r4, r30, 0x68
    li r3, 0x0
    mtctr r0
lbl_fn_805C5C50_00001210:
    lwz r0, 0x0(r4)
    cmpwi r0, 0xe
    bne lbl_fn_805C5C50_0000122C
    lwz r0, 0x4(r4)
    cmpwi r0, 0x6
    bne lbl_fn_805C5C50_0000122C
    b lbl_fn_805C5C50_0000125C
lbl_fn_805C5C50_0000122C:
    lwz r0, 0x8(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0xe
    bne lbl_fn_805C5C50_0000124C
    lwz r0, 0xc(r4)
    cmpwi r0, 0x6
    bne lbl_fn_805C5C50_0000124C
    b lbl_fn_805C5C50_0000125C
lbl_fn_805C5C50_0000124C:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_fn_805C5C50_00001210
    li r3, -0x1
lbl_fn_805C5C50_0000125C:
    slwi r0, r3, 2
    add r3, r28, r0
    lwz r27, 0x290(r3)
    mr r3, r27
    bl fn_805C0120
    li r0, 0x1
    stw r0, 0x14(r27)
lbl_fn_805C5C50_00001278:
    mr r3, r28
    bl fn_805C58B0
    lwz r4, 0x4(r28)
    li r3, 0x0
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_fn_805C5C50_000012A4
    li r3, 0x5
    li r4, 0x0
    mtctr r12
    bctrl
lbl_fn_805C5C50_000012A4:
    cmpwi r3, 0x0
    bne lbl_fn_805C5C50_000012B4
    li r3, 0x0
    bl fn_805C3570
lbl_fn_805C5C50_000012B4:
    li r0, 0x2
    stw r0, 0x14(r28)
    b lbl_fn_805C5C50_00002674
    lwz r4, 0x18(r28)
    slwi r0, r4, 2
    add r3, r28, r0
    lwz r3, 0x290(r3)
    lwz r0, 0x14(r3)
    cmpwi r0, 0x1
    beq lbl_fn_805C5C50_0000135C
    cmpwi r4, 0x5
    beq lbl_fn_805C5C50_0000135C
    addi r25, r31, 0xaf0
    li r31, 0x0
lbl_fn_805C5C50_000012EC:
    mr r26, r25
    li r27, 0x0
lbl_fn_805C5C50_000012F4:
    lwz r3, 0x1d8(r28)
    li r5, 0x1
    lwz r4, 0x0(r26)
    lwz r3, 0x10(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lbz r0, 0xcf(r3)
    addi r27, r27, 0x1
    cmpwi r27, 0x4
    addi r26, r26, 0x4
    rlwinm r0, r0, 0, 24, 30
    stb r0, 0xcf(r3)
    blt lbl_fn_805C5C50_000012F4
    addi r31, r31, 0x1
    addi r25, r25, 0x10
    cmpwi r31, 0x4
    blt lbl_fn_805C5C50_000012EC
    li r0, 0x5
    stw r0, 0x18(r28)
    lwz r27, 0x3cc(r28)
    mr r3, r27
    bl fn_805C0120
    li r0, 0x1
    stw r0, 0x14(r27)
lbl_fn_805C5C50_0000135C:
    lwz r3, 0x1d0(r28)
    subic. r0, r3, 0x1
    stw r0, 0x1d0(r28)
    bgt lbl_fn_805C5C50_00002674
    li r25, 0x0
lbl_fn_805C5C50_00001370:
    mr r3, r25
    bl fn_80660B90
    addi r25, r25, 0x1
    cmpwi r25, 0x4
    blt lbl_fn_805C5C50_00001370
    li r0, 0x4
    stw r0, 0x14(r28)
    lis r3, lbl_807CA148@ha
    lfs f1, 0x324(r30)
    lwz r3, lbl_807CA148@l(r3)
    lwz r3, 0x4(r3)
    lfs f0, 0x30(r3)
    fdivs f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x20(r1)
    lwz r0, 0x24(r1)
    stw r0, 0x1d4(r28)
    b lbl_fn_805C5C50_00002674
    lwz r0, 0x18(r28)
    slwi r0, r0, 2
    add r3, r28, r0
    lwz r3, 0x290(r3)
    lwz r0, 0x14(r3)
    cmpwi r0, 0x1
    beq lbl_fn_805C5C50_00002674
    lwz r0, 0x1d4(r28)
    cmpwi r0, 0x0
    ble lbl_fn_805C5C50_00001424
    li r25, 0x0
lbl_fn_805C5C50_000013E4:
    mr r3, r25
    addi r4, r1, 0x8
    bl fn_80660CF0
    cmpwi r3, -0x1
    bne lbl_fn_805C5C50_00001404
    addi r25, r25, 0x1
    cmpwi r25, 0x4
    blt lbl_fn_805C5C50_000013E4
lbl_fn_805C5C50_00001404:
    cmpwi r25, 0x4
    bge lbl_fn_805C5C50_0000141C
    lwz r3, 0x1d4(r28)
    subi r0, r3, 0x1
    stw r0, 0x1d4(r28)
    b lbl_fn_805C5C50_00002674
lbl_fn_805C5C50_0000141C:
    li r0, 0x0
    stw r0, 0x1d4(r28)
lbl_fn_805C5C50_00001424:
    li r27, 0x0
    li r0, 0x5
    lis r3, fn_805C80B0@ha
    stw r0, 0x14(r28)
    addi r3, r3, fn_805C80B0@l
    stw r27, 0x1c(r28)
    stw r27, 0x9c(r28)
    bl fn_8065F520
    stb r27, 0x92(r28)
    li r0, 0x1
    lwz r3, 0x24c(r28)
    stb r27, 0x93(r28)
    stb r0, 0x44(r3)
    lwz r3, 0x250(r28)
    stb r0, 0x44(r3)
    lwz r3, 0x254(r28)
    stb r0, 0x44(r3)
    lwz r3, 0x258(r28)
    stb r0, 0x44(r3)
    bl fn_8065F500
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    stb r0, 0x91(r28)
    bne lbl_fn_805C5C50_00002674
    addi r3, r28, 0x588
    bl OSCancelAlarm
    addi r3, r28, 0x588
    li r4, 0x0
    bl fn_805EC870
    lis r4, 0x8000
    lis r7, fn_805C7FE0@ha
    lwz r0, 0xf8(r4)
    lis r3, 0x1062
    addi r4, r3, 0x4dd3
    addi r7, r7, fn_805C7FE0@l
    srwi r0, r0, 2
    addi r3, r28, 0x588
    mulhwu r0, r4, r0
    li r5, 0x0
    srwi r0, r0, 6
    mulli r6, r0, 0x64
    bl OSSetAlarm
    b lbl_fn_805C5C50_00002674
    lbz r0, 0x91(r28)
    cmpwi r0, 0x0
    beq lbl_fn_805C5C50_00002674
    lwz r0, 0x18(r28)
    slwi r0, r0, 2
    add r3, r28, r0
    lwz r3, 0x3b8(r3)
    lwz r0, 0x14(r3)
    cmpwi r0, 0x1
    beq lbl_fn_805C5C50_00002674
    lwz r0, 0x1c(r28)
    cmpwi r0, 0x0
    bne lbl_fn_805C5C50_000015C0
    li r25, 0x0
    li r27, 0x1
    li r31, 0x25
lbl_fn_805C5C50_00001514:
    addi r5, r30, 0x68
    addi r3, r25, 0x6
    li r4, 0x0
    mtctr r31
    nop
lbl_fn_805C5C50_00001528:
    lwz r0, 0x0(r5)
    cmpw r3, r0
    bne lbl_fn_805C5C50_00001544
    lwz r0, 0x4(r5)
    cmpwi r0, 0x7
    bne lbl_fn_805C5C50_00001544
    b lbl_fn_805C5C50_00001574
lbl_fn_805C5C50_00001544:
    lwz r0, 0x8(r5)
    addi r4, r4, 0x1
    cmpw r3, r0
    bne lbl_fn_805C5C50_00001564
    lwz r0, 0xc(r5)
    cmpwi r0, 0x7
    bne lbl_fn_805C5C50_00001564
    b lbl_fn_805C5C50_00001574
lbl_fn_805C5C50_00001564:
    addi r5, r5, 0x10
    addi r4, r4, 0x1
    bdnz lbl_fn_805C5C50_00001528
    li r4, -0x1
lbl_fn_805C5C50_00001574:
    slwi r0, r4, 2
    add r3, r28, r0
    lwz r26, 0x290(r3)
    mr r3, r26
    bl fn_805C0120
    addi r25, r25, 0x1
    stw r27, 0x14(r26)
    cmpwi r25, 0x5
    blt lbl_fn_805C5C50_00001514
    mr r3, r28
    bl fn_805CC170
    lwz r3, 0x3f0(r28)
    li r0, 0x2
    stw r0, 0x18(r3)
    lwz r25, 0x3f0(r28)
    mr r3, r25
    bl fn_805C0120
    li r0, 0x1
    stw r0, 0x14(r25)
lbl_fn_805C5C50_000015C0:
    lbz r0, 0x80(r28)
    li r3, 0x0
    cmpwi r0, 0x0
    beq lbl_fn_805C5C50_00001604
    lbz r0, 0x81(r28)
    li r3, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_805C5C50_00001604
    lbz r0, 0x82(r28)
    li r3, 0x2
    cmpwi r0, 0x0
    beq lbl_fn_805C5C50_00001604
    lbz r0, 0x83(r28)
    li r3, 0x3
    cmpwi r0, 0x0
    beq lbl_fn_805C5C50_00001604
    li r3, 0x4
lbl_fn_805C5C50_00001604:
    cmpwi r3, 0x4
    blt lbl_fn_805C5C50_00001614
    li r0, 0x1
    stb r0, 0x93(r28)
lbl_fn_805C5C50_00001614:
    lbz r0, 0x93(r28)
    cmpwi r0, 0x0
    beq lbl_fn_805C5C50_00001720
    lwz r0, 0x14(r28)
    cmpwi r0, 0x6
    beq lbl_fn_805C5C50_000016A0
    lwz r0, 0x88(r28)
    slwi r0, r0, 2
    add r3, r28, r0
    lwz r3, 0x24c(r3)
    bl fn_805C2610
    cmpwi r3, 0x0
    beq lbl_fn_805C5C50_00001668
    lwz r0, 0x88(r28)
    li r4, 0x5
    slwi r0, r0, 2
    add r3, r28, r0
    lwz r3, 0x24c(r3)
    bl fn_805C2360
    cmpwi r3, 0x0
    beq lbl_fn_805C5C50_00001678
lbl_fn_805C5C50_00001668:
    lwz r0, 0x5c0(r28)
    li r3, 0x6
    stw r3, 0x14(r28)
    stw r0, 0x1c(r28)
lbl_fn_805C5C50_00001678:
    lwz r4, 0x9c(r28)
    lwz r3, 0x5c0(r28)
    addi r0, r4, 0x1
    stw r0, 0x9c(r28)
    cmpw r0, r3
    ble lbl_fn_805C5C50_00002674
    li r0, 0x6
    stw r0, 0x14(r28)
    stw r3, 0x1c(r28)
    b lbl_fn_805C5C50_00002674
lbl_fn_805C5C50_000016A0:
    lwz r3, 0x1c(r28)
    lwz r0, 0x5bc(r28)
    addi r3, r3, 0x1
    stw r3, 0x1c(r28)
    cmpw r3, r0
    ble lbl_fn_805C5C50_00002674
    li r0, 0x7
    stw r0, 0x14(r28)
    bl fn_8065F510
    cmpwi r3, 0x0
    bne lbl_fn_805C5C50_00001714
    addi r3, r28, 0x588
    bl OSCancelAlarm
    addi r3, r28, 0x588
    li r4, 0x1
    bl fn_805EC870
    lis r4, 0x8000
    lis r7, fn_805C7FE0@ha
    lwz r0, 0xf8(r4)
    lis r3, 0x1062
    addi r4, r3, 0x4dd3
    addi r7, r7, fn_805C7FE0@l
    srwi r0, r0, 2
    addi r3, r28, 0x588
    mulhwu r0, r4, r0
    li r5, 0x0
    srwi r0, r0, 6
    mulli r6, r0, 0x64
    bl OSSetAlarm
lbl_fn_805C5C50_00001714:
    li r0, 0x1
    stb r0, 0x92(r28)
    b lbl_fn_805C5C50_00002674
lbl_fn_805C5C50_00001720:
    lwz r3, 0x1c(r28)
    lwz r0, 0x5bc(r28)
    addi r3, r3, 0x1
    stw r3, 0x1c(r28)
    cmpw r3, r0
    ble lbl_fn_805C5C50_00002674
    li r0, 0x7
    stw r0, 0x14(r28)
    bl fn_8065F510
    cmpwi r3, 0x0
    bne lbl_fn_805C5C50_00001794
    addi r3, r28, 0x588
    bl OSCancelAlarm
    addi r3, r28, 0x588
    li r4, 0x1
    bl fn_805EC870
    lis r4, 0x8000
    lis r7, fn_805C7FE0@ha
    lwz r0, 0xf8(r4)
    lis r3, 0x1062
    addi r4, r3, 0x4dd3
    addi r7, r7, fn_805C7FE0@l
    srwi r0, r0, 2
    addi r3, r28, 0x588
    mulhwu r0, r4, r0
    li r5, 0x0
    srwi r0, r0, 6
    mulli r6, r0, 0x64
    bl OSSetAlarm
lbl_fn_805C5C50_00001794:
    li r0, 0x1
    stb r0, 0x92(r28)
    b lbl_fn_805C5C50_00002674
    lbz r0, 0x92(r28)
    cmpwi r0, 0x0
    beq lbl_fn_805C5C50_00002674
    lwz r3, 0x1ac(r28)
    bl fn_8065F520
    lwz r3, 0x25c(r28)
    bl fn_805C2A70
    li r25, 0x0
lbl_fn_805C5C50_000017C0:
    lwz r3, 0x1f0(r28)
    mr r4, r25
    lfs f1, 0x2fc(r30)
    li r5, 0x0
    lwz r12, 0x0(r3)
    li r6, 0x0
    fmr f2, f1
    li r7, 0x0
    lwz r12, 0x30(r12)
    li r8, 0x0
    mtctr r12
    bctrl
    addi r25, r25, 0x1
    cmpwi r25, 0x8
    blt lbl_fn_805C5C50_000017C0
    li r0, 0x6
    stw r0, 0x18(r28)
    lwz r25, 0x3d0(r28)
    mr r3, r25
    bl fn_805C0120
    li r0, 0x1
    stw r0, 0x14(r25)
    li r3, 0x8
    stw r3, 0x14(r28)
    li r0, 0x0
    lwz r4, 0x3f0(r28)
    li r3, 0x0
    stw r0, 0x18(r4)
    lwz r4, 0x4(r28)
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_fn_805C5C50_00001850
    li r3, 0x5
    li r4, 0x15
    mtctr r12
    bctrl
lbl_fn_805C5C50_00001850:
    cmpwi r3, 0x0
    bne lbl_fn_805C5C50_00002674
    li r3, 0x15
    bl fn_805C3570
    b lbl_fn_805C5C50_00002674
    lwz r4, 0x18(r28)
    slwi r0, r4, 2
    add r3, r28, r0
    lwz r3, 0x3b8(r3)
    lwz r0, 0x14(r3)
    cmpwi r0, 0x1
    beq lbl_fn_805C5C50_00002674
    cmpwi r4, 0xd
    bne lbl_fn_805C5C50_000019AC
    li r0, 0x25
    addi r4, r30, 0x68
    li r3, 0x0
    mtctr r0
lbl_fn_805C5C50_00001898:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x11
    bne lbl_fn_805C5C50_000018B4
    lwz r0, 0x4(r4)
    cmpwi r0, 0xc
    bne lbl_fn_805C5C50_000018B4
    b lbl_fn_805C5C50_000018E4
lbl_fn_805C5C50_000018B4:
    lwz r0, 0x8(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0x11
    bne lbl_fn_805C5C50_000018D4
    lwz r0, 0xc(r4)
    cmpwi r0, 0xc
    bne lbl_fn_805C5C50_000018D4
    b lbl_fn_805C5C50_000018E4
lbl_fn_805C5C50_000018D4:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_fn_805C5C50_00001898
    li r3, -0x1
lbl_fn_805C5C50_000018E4:
    slwi r0, r3, 2
    add r3, r28, r0
    lwz r25, 0x290(r3)
    mr r3, r25
    bl fn_805C0120
    li r0, 0x25
    li r3, 0x1
    stw r3, 0x14(r25)
    addi r4, r30, 0x68
    li r3, 0x0
    mtctr r0
lbl_fn_805C5C50_00001910:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x12
    bne lbl_fn_805C5C50_0000192C
    lwz r0, 0x4(r4)
    cmpwi r0, 0xc
    bne lbl_fn_805C5C50_0000192C
    b lbl_fn_805C5C50_0000195C
lbl_fn_805C5C50_0000192C:
    lwz r0, 0x8(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0x12
    bne lbl_fn_805C5C50_0000194C
    lwz r0, 0xc(r4)
    cmpwi r0, 0xc
    bne lbl_fn_805C5C50_0000194C
    b lbl_fn_805C5C50_0000195C
lbl_fn_805C5C50_0000194C:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_fn_805C5C50_00001910
    li r3, -0x1
lbl_fn_805C5C50_0000195C:
    slwi r0, r3, 2
    add r3, r28, r0
    lwz r25, 0x290(r3)
    mr r3, r25
    bl fn_805C0120
    li r0, 0x1
    stw r0, 0x14(r25)
    addi r3, r31, 0x9e4
    li r5, 0x1
    lwz r6, 0x1d8(r28)
    lwz r4, 0x8(r3)
    lwz r3, 0x10(r6)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lbz r0, 0xcf(r3)
    rlwinm r0, r0, 0, 24, 30
    stb r0, 0xcf(r3)
    b lbl_fn_805C5C50_00001A10
lbl_fn_805C5C50_000019AC:
    cmpwi r4, 0x6
    bne lbl_fn_805C5C50_00001A10
    lwz r3, 0x1d8(r28)
    li r5, 0x1
    lwz r4, 0x9e4(r31)
    lwz r3, 0x10(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lbz r0, 0xcf(r3)
    addi r4, r31, 0x9e4
    li r5, 0x1
    rlwinm r0, r0, 0, 24, 30
    stb r0, 0xcf(r3)
    lwz r3, 0x1d8(r28)
    lwz r4, 0x4(r4)
    lwz r3, 0x10(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lbz r0, 0xcf(r3)
    rlwinm r0, r0, 0, 24, 30
    stb r0, 0xcf(r3)
lbl_fn_805C5C50_00001A10:
    li r0, 0x2
    stw r0, 0x14(r28)
    b lbl_fn_805C5C50_00002674
    lwz r0, 0x18(r28)
    slwi r0, r0, 2
    add r3, r28, r0
    lwz r3, 0x290(r3)
    lwz r0, 0x14(r3)
    cmpwi r0, 0x1
    beq lbl_fn_805C5C50_00002674
    lbz r0, 0x8c(r28)
    cmpwi r0, 0x0
    beq lbl_fn_805C5C50_00001A64
    mr r25, r28
    li r26, 0x0
lbl_fn_805C5C50_00001A4C:
    lwz r3, 0x24c(r25)
    bl fn_805C26A0
    addi r26, r26, 0x1
    addi r25, r25, 0x4
    cmpwi r26, 0x4
    blt lbl_fn_805C5C50_00001A4C
lbl_fn_805C5C50_00001A64:
    li r0, 0x2
    stw r0, 0x14(r28)
    b lbl_fn_805C5C50_00002674
    lwz r0, 0x18(r28)
    slwi r0, r0, 2
    add r3, r28, r0
    lwz r3, 0x3b8(r3)
    lwz r0, 0x14(r3)
    cmpwi r0, 0x1
    beq lbl_fn_805C5C50_00002674
    lwz r0, 0x0(r28)
    li r3, 0x0
    stw r3, 0x6c(r28)
    cmpwi r0, 0x1
    stw r3, 0x70(r28)
    stw r3, 0x74(r28)
    stw r3, 0x78(r28)
    beq lbl_fn_805C5C50_00001B00
    addi r3, r31, 0x998
    li r26, 0x2
    addi r25, r3, 0x8
lbl_fn_805C5C50_00001AB8:
    lwz r3, 0x1d8(r28)
    li r5, 0x1
    lwz r4, 0x0(r25)
    lwz r3, 0x10(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lbz r0, 0xcf(r3)
    addi r26, r26, 0x1
    cmpwi r26, 0x7
    addi r25, r25, 0x4
    rlwinm r0, r0, 0, 24, 30
    stb r0, 0xcf(r3)
    blt lbl_fn_805C5C50_00001AB8
    li r0, 0x2
    stw r0, 0x14(r28)
    b lbl_fn_805C5C50_00001B88
lbl_fn_805C5C50_00001B00:
    lwz r3, 0x1d8(r28)
    addi r4, r31, 0xb74
    li r5, 0x1
    lwz r3, 0x10(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lbz r4, 0xcf(r3)
    li r0, 0xa
    rlwinm r4, r4, 0, 24, 30
    stb r4, 0xcf(r3)
    stw r0, 0x18(r28)
    lwz r25, 0x3e0(r28)
    mr r3, r25
    bl fn_805C0120
    li r0, 0x1
    stw r0, 0x14(r25)
    li r3, 0x0
    stw r0, 0x18(r28)
    lwz r4, 0x4(r28)
    lwz r12, 0x14(r4)
    cmpwi r12, 0x0
    beq lbl_fn_805C5C50_00001B70
    li r3, 0x5
    li r4, 0x7
    mtctr r12
    bctrl
lbl_fn_805C5C50_00001B70:
    cmpwi r3, 0x0
    bne lbl_fn_805C5C50_00001B80
    li r3, 0x7
    bl fn_805C3570
lbl_fn_805C5C50_00001B80:
    li r0, 0x8
    stw r0, 0x14(r28)
lbl_fn_805C5C50_00001B88:
    mr r3, r28
    bl fn_805C9310
    b lbl_fn_805C5C50_00002674
    lwz r0, 0x18(r28)
    slwi r0, r0, 2
    add r3, r28, r0
    lwz r3, 0x260(r3)
    lwz r0, 0x14(r3)
    cmpwi r0, 0x1
    beq lbl_fn_805C5C50_00002674
    li r0, 0x7
    stw r0, 0x18(r28)
    lwz r25, 0x3d4(r28)
    mr r3, r25
    bl fn_805C0120
    li r0, 0x1
    stw r0, 0x14(r25)
    li r0, 0xc
    stw r0, 0x14(r28)
    b lbl_fn_805C5C50_00002674
    lwz r0, 0x18(r28)
    slwi r0, r0, 2
    add r3, r28, r0
    lwz r3, 0x3b8(r3)
    lwz r0, 0x14(r3)
    cmpwi r0, 0x1
    beq lbl_fn_805C5C50_00002674
    mr r3, r28
    bl fn_805C9310
    mr r3, r28
    bl fn_805CC170
    li r0, 0x2
    stw r0, 0x14(r28)
    b lbl_fn_805C5C50_00002674
    lwz r0, 0x18(r28)
    slwi r0, r0, 2
    add r3, r28, r0
    lwz r3, 0x290(r3)
    lwz r0, 0x14(r3)
    cmpwi r0, 0x1
    beq lbl_fn_805C5C50_00002674
    lwz r5, 0xb8(r28)
    cmpwi r5, 0x0
    blt lbl_fn_805C5C50_00001C98
    lwz r0, 0x3f8(r28)
    li r4, 0x1
    li r3, 0x13
    lfd f1, 0x310(r30)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    cmpwi r5, 0x3
    lfd f0, 0x10(r1)
    stw r4, 0x3fc(r28)
    fsubs f0, f0, f1
    stw r3, 0x14(r28)
    stfs f0, 0x73c(r28)
    beq lbl_fn_805C5C50_00001CC4
    lwz r3, 0x4(r28)
    lwz r12, 0x14(r3)
    cmpwi r12, 0x0
    beq lbl_fn_805C5C50_00001CC4
    fctiwz f0, f0
    li r3, 0x3
    stfd f0, 0x20(r1)
    lwz r4, 0x24(r1)
    mtctr r12
    bctrl
    b lbl_fn_805C5C50_00001CC4
lbl_fn_805C5C50_00001C98:
    mr r3, r28
    bl fn_805C9310
    li r0, 0xd
    stw r0, 0x18(r28)
    lwz r25, 0x3ec(r28)
    mr r3, r25
    bl fn_805C0120
    li r0, 0x1
    stw r0, 0x14(r25)
    li r0, 0x8
    stw r0, 0x14(r28)
lbl_fn_805C5C50_00001CC4:
    li r25, 0x0
lbl_fn_805C5C50_00001CC8:
    lwz r3, 0x1f0(r28)
    mr r4, r25
    lfs f1, 0x2fc(r30)
    li r5, 0x0
    lwz r12, 0x0(r3)
    li r6, 0x0
    fmr f2, f1
    li r7, 0x0
    lwz r12, 0x30(r12)
    li r8, 0x0
    mtctr r12
    bctrl
    addi r25, r25, 0x1
    cmpwi r25, 0x8
    blt lbl_fn_805C5C50_00001CC8
    b lbl_fn_805C5C50_00002674
    lwz r0, 0x18(r28)
    slwi r0, r0, 2
    add r3, r28, r0
    lwz r3, 0x3b8(r3)
    lwz r0, 0x14(r3)
    cmpwi r0, 0x1
    beq lbl_fn_805C5C50_00002674
    lwz r6, 0x1d8(r28)
    addi r3, r31, 0x9e4
    lwz r4, 0x8(r3)
    li r5, 0x1
    lwz r3, 0x10(r6)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lbz r0, 0xcf(r3)
    rlwinm r0, r0, 0, 24, 30
    stb r0, 0xcf(r3)
    lwz r3, 0x4(r28)
    lwz r0, 0x18(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805C5C50_00001DCC
    li r0, 0x25
    addi r4, r30, 0x68
    li r3, 0x0
    mtctr r0
    nop
lbl_fn_805C5C50_00001D78:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x3
    bne lbl_fn_805C5C50_00001D94
    lwz r0, 0x4(r4)
    cmpwi r0, 0x1
    bne lbl_fn_805C5C50_00001D94
    b lbl_fn_805C5C50_00001DC4
lbl_fn_805C5C50_00001D94:
    lwz r0, 0x8(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0x3
    bne lbl_fn_805C5C50_00001DB4
    lwz r0, 0xc(r4)
    cmpwi r0, 0x1
    bne lbl_fn_805C5C50_00001DB4
    b lbl_fn_805C5C50_00001DC4
lbl_fn_805C5C50_00001DB4:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_fn_805C5C50_00001D78
    li r3, -0x1
lbl_fn_805C5C50_00001DC4:
    stw r3, 0x18(r28)
    b lbl_fn_805C5C50_00001E30
lbl_fn_805C5C50_00001DCC:
    li r0, 0x25
    addi r4, r30, 0x68
    li r3, 0x0
    mtctr r0
    nop
lbl_fn_805C5C50_00001DE0:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x1
    bne lbl_fn_805C5C50_00001DFC
    lwz r0, 0x4(r4)
    cmpwi r0, 0x1
    bne lbl_fn_805C5C50_00001DFC
    b lbl_fn_805C5C50_00001E2C
lbl_fn_805C5C50_00001DFC:
    lwz r0, 0x8(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0x1
    bne lbl_fn_805C5C50_00001E1C
    lwz r0, 0xc(r4)
    cmpwi r0, 0x1
    bne lbl_fn_805C5C50_00001E1C
    b lbl_fn_805C5C50_00001E2C
lbl_fn_805C5C50_00001E1C:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_fn_805C5C50_00001DE0
    li r3, -0x1
lbl_fn_805C5C50_00001E2C:
    stw r3, 0x18(r28)
lbl_fn_805C5C50_00001E30:
    lwz r0, 0x18(r28)
    slwi r0, r0, 2
    add r3, r28, r0
    lwz r25, 0x290(r3)
    mr r3, r25
    bl fn_805C0120
    li r0, 0x1
    stw r0, 0x14(r25)
    li r3, 0x10
    lwz r0, 0x18(r28)
    stw r3, 0x14(r28)
    slwi r0, r0, 2
    lwz r3, 0x4(r28)
    add r4, r28, r0
    lwz r4, 0x290(r4)
    lfs f0, 0x4(r4)
    stfs f0, 0x73c(r28)
    lwz r12, 0x14(r3)
    cmpwi r12, 0x0
    beq lbl_fn_805C5C50_00002674
    fctiwz f0, f0
    li r3, 0x2
    stfd f0, 0x20(r1)
    lwz r4, 0x24(r1)
    mtctr r12
    bctrl
    b lbl_fn_805C5C50_00002674
    lwz r0, 0x18(r28)
    slwi r0, r0, 2
    add r3, r28, r0
    lwz r3, 0x260(r3)
    lwz r0, 0x14(r3)
    cmpwi r0, 0x1
    beq lbl_fn_805C5C50_00002674
    lwz r3, 0x3f8(r28)
    li r5, 0x1
    lwz r0, 0xb8(r28)
    li r4, 0x13
    xoris r3, r3, 0x8000
    stw r3, 0x1c(r1)
    lfd f1, 0x310(r30)
    cmpwi r0, 0x3
    lfd f0, 0x18(r1)
    stw r5, 0x3fc(r28)
    fsubs f0, f0, f1
    stb r5, 0x9a(r28)
    stw r4, 0x14(r28)
    stfs f0, 0x73c(r28)
    beq lbl_fn_805C5C50_00002674
    lwz r3, 0x4(r28)
    lwz r12, 0x14(r3)
    cmpwi r12, 0x0
    beq lbl_fn_805C5C50_00002674
    fctiwz f0, f0
    li r3, 0x3
    stfd f0, 0x20(r1)
    lwz r4, 0x24(r1)
    mtctr r12
    bctrl
    b lbl_fn_805C5C50_00002674
    lwz r0, 0x0(r28)
    li r3, 0x0
    sth r3, 0x5ca(r28)
    cmpwi r0, 0x2
    bgt lbl_fn_805C5C50_00001F44
    lwz r0, 0x18(r28)
    slwi r0, r0, 2
    add r3, r28, r0
    lwz r31, 0x290(r3)
lbl_fn_805C5C50_00001F44:
    lwz r0, 0x14(r31)
    cmpwi r0, 0x1
    beq lbl_fn_805C5C50_00001F84
    lwz r0, 0xb8(r28)
    li r3, 0x11
    stw r3, 0x14(r28)
    cmpwi r0, 0x3
    beq lbl_fn_805C5C50_00002674
    lbz r0, 0x97(r28)
    cmpwi r0, 0x0
    beq lbl_fn_805C5C50_00001F78
    li r3, 0x0
    bl fn_80609640
lbl_fn_805C5C50_00001F78:
    lfs f1, 0x2e4(r30)
    bl fn_805C3B20
    b lbl_fn_805C5C50_00002674
lbl_fn_805C5C50_00001F84:
    lfs f0, 0xc(r31)
    lfs f1, 0x4(r31)
    lwz r0, 0xb8(r28)
    fsubs f1, f1, f0
    lfs f0, 0x73c(r28)
    cmpwi r0, 0x3
    fdivs f30, f1, f0
    beq lbl_fn_805C5C50_00002674
    lbz r0, 0x97(r28)
    cmpwi r0, 0x0
    beq lbl_fn_805C5C50_00001FCC
    lfs f0, 0x328(r30)
    fmuls f0, f0, f30
    fctiwz f0, f0
    stfd f0, 0x20(r1)
    lwz r3, 0x24(r1)
    clrlwi r3, r3, 16
    bl fn_80609640
lbl_fn_805C5C50_00001FCC:
    fmr f1, f30
    bl fn_805C3B20
    b lbl_fn_805C5C50_00002674
    lwz r0, 0xb8(r28)
    li r3, 0x12
    stw r3, 0x14(r28)
    cmpwi r0, 0x3
    beq lbl_fn_805C5C50_0000203C
    bl fn_805C3950
    lbz r0, 0x97(r28)
    cmpwi r0, 0x0
    beq lbl_fn_805C5C50_00002034
    addi r3, r28, 0x5d4
    bl fn_8060B140
    lwz r3, 0x734(r28)
    lwz r4, 0x738(r28)
    bl fn_806089C0
    lwz r3, 0x5cc(r28)
    lwz r4, 0x5d0(r28)
    bl fn_806104E0
    lhz r3, 0x5c4(r28)
    bl fn_80609640
    lhz r3, 0x5c6(r28)
    bl fn_80609650
    lhz r3, 0x5c8(r28)
    bl fn_80609660
lbl_fn_805C5C50_00002034:
    li r0, 0x0
    stb r0, 0x97(r28)
lbl_fn_805C5C50_0000203C:
    lwz r0, 0x84(r28)
    lfd f2, 0x310(r30)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfs f0, 0x32c(r30)
    lfd f1, 0x10(r1)
    fsubs f1, f1, f2
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x20(r1)
    lwz r3, 0x24(r1)
    clrlwi r3, r3, 24
    bl fn_806631A0
    li r3, 0x0
    bl fn_80661640
    lwz r3, 0x25c(r28)
    bl fn_805C2A70
    lwz r3, 0x25c(r28)
    bl fn_805C2CF0
    mr r25, r28
    li r26, 0x0
lbl_fn_805C5C50_00002090:
    lwz r3, 0x24c(r25)
    bl fn_805C26A0
    lwz r3, 0x24c(r25)
    bl fn_805C2040
    addi r26, r26, 0x1
    addi r25, r25, 0x4
    cmpwi r26, 0x4
    blt lbl_fn_805C5C50_00002090
    lwz r0, 0xb8(r28)
    cmpwi r0, 0x3
    beq lbl_fn_805C5C50_000020DC
    lwz r3, 0x4(r28)
    lwz r12, 0x14(r3)
    cmpwi r12, 0x0
    beq lbl_fn_805C5C50_000020DC
    li r3, 0x4
    li r4, 0x0
    mtctr r12
    bctrl
lbl_fn_805C5C50_000020DC:
    li r3, 0x0
    li r8, 0x0
    li r4, 0x25
    li r0, 0x25
    li r5, 0x25
lbl_fn_805C5C50_000020F0:
    addi r10, r30, 0x68
    addi r7, r3, 0x1f
    li r9, 0x0
    mtctr r5
lbl_fn_805C5C50_00002100:
    lwz r6, 0x0(r10)
    cmpw r7, r6
    bne lbl_fn_805C5C50_0000211C
    lwz r6, 0x4(r10)
    cmpwi r6, 0x11
    bne lbl_fn_805C5C50_0000211C
    b lbl_fn_805C5C50_0000214C
lbl_fn_805C5C50_0000211C:
    lwz r6, 0x8(r10)
    addi r9, r9, 0x1
    cmpw r7, r6
    bne lbl_fn_805C5C50_0000213C
    lwz r6, 0xc(r10)
    cmpwi r6, 0x11
    bne lbl_fn_805C5C50_0000213C
    b lbl_fn_805C5C50_0000214C
lbl_fn_805C5C50_0000213C:
    addi r10, r10, 0x10
    addi r9, r9, 0x1
    bdnz lbl_fn_805C5C50_00002100
    li r9, -0x1
lbl_fn_805C5C50_0000214C:
    slwi r6, r9, 2
    addi r10, r30, 0x68
    add r6, r28, r6
    addi r7, r3, 0x1f
    lwz r6, 0x290(r6)
    li r9, 0x0
    stw r8, 0x14(r6)
    mtctr r4
    nop
lbl_fn_805C5C50_00002170:
    lwz r6, 0x0(r10)
    cmpw r7, r6
    bne lbl_fn_805C5C50_0000218C
    lwz r6, 0x4(r10)
    cmpwi r6, 0x12
    bne lbl_fn_805C5C50_0000218C
    b lbl_fn_805C5C50_000021BC
lbl_fn_805C5C50_0000218C:
    lwz r6, 0x8(r10)
    addi r9, r9, 0x1
    cmpw r7, r6
    bne lbl_fn_805C5C50_000021AC
    lwz r6, 0xc(r10)
    cmpwi r6, 0x12
    bne lbl_fn_805C5C50_000021AC
    b lbl_fn_805C5C50_000021BC
lbl_fn_805C5C50_000021AC:
    addi r10, r10, 0x10
    addi r9, r9, 0x1
    bdnz lbl_fn_805C5C50_00002170
    li r9, -0x1
lbl_fn_805C5C50_000021BC:
    slwi r6, r9, 2
    addi r10, r30, 0x68
    add r6, r28, r6
    addi r7, r3, 0x1f
    lwz r6, 0x290(r6)
    li r9, 0x0
    stw r8, 0x14(r6)
    mtctr r0
    nop
lbl_fn_805C5C50_000021E0:
    lwz r6, 0x0(r10)
    cmpw r7, r6
    bne lbl_fn_805C5C50_000021FC
    lwz r6, 0x4(r10)
    cmpwi r6, 0xf
    bne lbl_fn_805C5C50_000021FC
    b lbl_fn_805C5C50_0000222C
lbl_fn_805C5C50_000021FC:
    lwz r6, 0x8(r10)
    addi r9, r9, 0x1
    cmpw r7, r6
    bne lbl_fn_805C5C50_0000221C
    lwz r6, 0xc(r10)
    cmpwi r6, 0xf
    bne lbl_fn_805C5C50_0000221C
    b lbl_fn_805C5C50_0000222C
lbl_fn_805C5C50_0000221C:
    addi r10, r10, 0x10
    addi r9, r9, 0x1
    bdnz lbl_fn_805C5C50_000021E0
    li r9, -0x1
lbl_fn_805C5C50_0000222C:
    slwi r6, r9, 2
    addi r3, r3, 0x1
    add r6, r28, r6
    lwz r6, 0x290(r6)
    cmpwi r3, 0x4
    stw r8, 0x14(r6)
    blt lbl_fn_805C5C50_000020F0
    lwz r3, 0x1ac(r28)
    bl fn_8065F520
    li r0, 0x0
    stb r0, 0x94(r28)
    b lbl_fn_805C5C50_00002674
    li r0, 0x2
    stw r0, 0x14(r28)
    b lbl_fn_805C5C50_00002674
    lbz r0, 0x95(r28)
    cmpwi r0, 0x0
    beq lbl_fn_805C5C50_00002288
    mr r3, r28
    mr r4, r29
    bl fn_805C59E0
    li r0, 0x0
    stb r0, 0x95(r28)
lbl_fn_805C5C50_00002288:
    lbz r0, 0x96(r28)
    cmpwi r0, 0x0
    beq lbl_fn_805C5C50_000024A8
    mr r3, r28
    bl fn_805C56B0
    bl fn_80661410
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    stb r0, 0x8c(r28)
    beq lbl_fn_805C5C50_000023AC
    li r0, 0x25
    addi r4, r30, 0x68
    li r3, 0x0
    mtctr r0
    nop
lbl_fn_805C5C50_000022C8:
    lwz r0, 0x0(r4)
    cmpwi r0, 0xd
    bne lbl_fn_805C5C50_000022E4
    lwz r0, 0x4(r4)
    cmpwi r0, 0x6
    bne lbl_fn_805C5C50_000022E4
    b lbl_fn_805C5C50_00002314
lbl_fn_805C5C50_000022E4:
    lwz r0, 0x8(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0xd
    bne lbl_fn_805C5C50_00002304
    lwz r0, 0xc(r4)
    cmpwi r0, 0x6
    bne lbl_fn_805C5C50_00002304
    b lbl_fn_805C5C50_00002314
lbl_fn_805C5C50_00002304:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_fn_805C5C50_000022C8
    li r3, -0x1
lbl_fn_805C5C50_00002314:
    slwi r0, r3, 2
    add r3, r28, r0
    lwz r25, 0x290(r3)
    mr r3, r25
    bl fn_805C0120
    li r0, 0x25
    li r3, 0x1
    stw r3, 0x14(r25)
    addi r4, r30, 0x68
    li r3, 0x0
    mtctr r0
lbl_fn_805C5C50_00002340:
    lwz r0, 0x0(r4)
    cmpwi r0, 0xe
    bne lbl_fn_805C5C50_0000235C
    lwz r0, 0x4(r4)
    cmpwi r0, 0x8
    bne lbl_fn_805C5C50_0000235C
    b lbl_fn_805C5C50_0000238C
lbl_fn_805C5C50_0000235C:
    lwz r0, 0x8(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0xe
    bne lbl_fn_805C5C50_0000237C
    lwz r0, 0xc(r4)
    cmpwi r0, 0x8
    bne lbl_fn_805C5C50_0000237C
    b lbl_fn_805C5C50_0000238C
lbl_fn_805C5C50_0000237C:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_fn_805C5C50_00002340
    li r3, -0x1
lbl_fn_805C5C50_0000238C:
    slwi r0, r3, 2
    add r3, r28, r0
    lwz r25, 0x290(r3)
    mr r3, r25
    bl fn_805C0120
    li r0, 0x1
    stw r0, 0x14(r25)
    b lbl_fn_805C5C50_000024A0
lbl_fn_805C5C50_000023AC:
    li r0, 0x25
    addi r4, r30, 0x68
    li r3, 0x0
    mtctr r0
    nop
lbl_fn_805C5C50_000023C0:
    lwz r0, 0x0(r4)
    cmpwi r0, 0xd
    bne lbl_fn_805C5C50_000023DC
    lwz r0, 0x4(r4)
    cmpwi r0, 0x8
    bne lbl_fn_805C5C50_000023DC
    b lbl_fn_805C5C50_0000240C
lbl_fn_805C5C50_000023DC:
    lwz r0, 0x8(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0xd
    bne lbl_fn_805C5C50_000023FC
    lwz r0, 0xc(r4)
    cmpwi r0, 0x8
    bne lbl_fn_805C5C50_000023FC
    b lbl_fn_805C5C50_0000240C
lbl_fn_805C5C50_000023FC:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_fn_805C5C50_000023C0
    li r3, -0x1
lbl_fn_805C5C50_0000240C:
    slwi r0, r3, 2
    add r3, r28, r0
    lwz r25, 0x290(r3)
    mr r3, r25
    bl fn_805C0120
    li r0, 0x25
    li r3, 0x1
    stw r3, 0x14(r25)
    addi r4, r30, 0x68
    li r3, 0x0
    mtctr r0
lbl_fn_805C5C50_00002438:
    lwz r0, 0x0(r4)
    cmpwi r0, 0xe
    bne lbl_fn_805C5C50_00002454
    lwz r0, 0x4(r4)
    cmpwi r0, 0x6
    bne lbl_fn_805C5C50_00002454
    b lbl_fn_805C5C50_00002484
lbl_fn_805C5C50_00002454:
    lwz r0, 0x8(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0xe
    bne lbl_fn_805C5C50_00002474
    lwz r0, 0xc(r4)
    cmpwi r0, 0x6
    bne lbl_fn_805C5C50_00002474
    b lbl_fn_805C5C50_00002484
lbl_fn_805C5C50_00002474:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_fn_805C5C50_00002438
    li r3, -0x1
lbl_fn_805C5C50_00002484:
    slwi r0, r3, 2
    add r3, r28, r0
    lwz r25, 0x290(r3)
    mr r3, r25
    bl fn_805C0120
    li r0, 0x1
    stw r0, 0x14(r25)
lbl_fn_805C5C50_000024A0:
    li r0, 0x0
    stb r0, 0x96(r28)
lbl_fn_805C5C50_000024A8:
    lwz r4, 0x3fc(r28)
    cmpwi r4, 0x1
    bne lbl_fn_805C5C50_000024CC
    lwz r3, 0x3f4(r28)
    lwz r0, 0x3f8(r28)
    cmpw r3, r0
    bne lbl_fn_805C5C50_000024CC
    li r0, 0x1
    b lbl_fn_805C5C50_000024EC
lbl_fn_805C5C50_000024CC:
    cmpwi r4, 0x2
    bne lbl_fn_805C5C50_000024E8
    lwz r0, 0x3f4(r28)
    cmpwi r0, 0x0
    bne lbl_fn_805C5C50_000024E8
    li r0, 0x1
    b lbl_fn_805C5C50_000024EC
lbl_fn_805C5C50_000024E8:
    li r0, 0x0
lbl_fn_805C5C50_000024EC:
    cmpwi r0, 0x0
    beq lbl_fn_805C5C50_00002610
    lbz r0, 0x98(r28)
    cmpwi r0, 0x0
    beq lbl_fn_805C5C50_0000251C
    lbz r0, 0x92(r28)
    cmpwi r0, 0x0
    beq lbl_fn_805C5C50_00002674
    lwz r3, 0x1ac(r28)
    bl fn_8065F520
    li r0, 0x0
    stb r0, 0x98(r28)
lbl_fn_805C5C50_0000251C:
    lbz r0, 0x99(r28)
    cmpwi r0, 0x0
    beq lbl_fn_805C5C50_000025B4
    lwz r3, 0x3cc(r28)
    bl fn_805C0120
    lwz r3, 0x3cc(r28)
    li r27, 0x0
    li r5, 0x1
    stw r27, 0x14(r3)
    lwz r3, 0x1d8(r28)
    lwz r4, 0x9e4(r31)
    lwz r3, 0x10(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lbz r0, 0xcf(r3)
    addi r4, r31, 0x9e4
    li r5, 0x1
    rlwinm r0, r0, 0, 24, 30
    stb r0, 0xcf(r3)
    lwz r3, 0x1d8(r28)
    lwz r4, 0x4(r4)
    lwz r3, 0x10(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lbz r0, 0xcf(r3)
    rlwinm r0, r0, 0, 24, 30
    stb r0, 0xcf(r3)
    lwz r3, 0x3f0(r28)
    lwz r0, 0x14(r3)
    cmpwi r0, 0x1
    bne lbl_fn_805C5C50_000025B4
    bl fn_805C0120
    lwz r3, 0x3f0(r28)
    stw r27, 0x14(r3)
lbl_fn_805C5C50_000025B4:
    lwz r0, 0x5b8(r28)
    li r3, 0x11
    stw r3, 0x14(r28)
    li r3, 0x0
    cmpwi r0, 0x0
    bne lbl_fn_805C5C50_000025D8
    lbz r0, 0x400(r28)
    cmpwi r0, 0x0
    bne lbl_fn_805C5C50_000025DC
lbl_fn_805C5C50_000025D8:
    li r3, 0x1
lbl_fn_805C5C50_000025DC:
    bl fn_80605140
    bl fn_80604FB0
    lwz r0, 0xb8(r28)
    cmpwi r0, 0x3
    beq lbl_fn_805C5C50_00002674
    lbz r0, 0x97(r28)
    cmpwi r0, 0x0
    beq lbl_fn_805C5C50_00002604
    li r3, 0x0
    bl fn_80609640
lbl_fn_805C5C50_00002604:
    lfs f1, 0x2e4(r30)
    bl fn_805C3B20
    b lbl_fn_805C5C50_00002674
lbl_fn_805C5C50_00002610:
    lwz r4, 0x3f4(r28)
    lwz r3, 0x3f8(r28)
    lwz r0, 0xb8(r28)
    subf r3, r4, r3
    lfd f2, 0x310(r30)
    xoris r3, r3, 0x8000
    stw r3, 0x1c(r1)
    lfs f0, 0x73c(r28)
    cmpwi r0, 0x3
    lfd f1, 0x18(r1)
    fsubs f1, f1, f2
    fdivs f30, f1, f0
    beq lbl_fn_805C5C50_00002674
    lbz r0, 0x97(r28)
    cmpwi r0, 0x0
    beq lbl_fn_805C5C50_0000266C
    lfs f0, 0x328(r30)
    fmuls f0, f0, f30
    fctiwz f0, f0
    stfd f0, 0x20(r1)
    lwz r3, 0x24(r1)
    clrlwi r3, r3, 16
    bl fn_80609640
lbl_fn_805C5C50_0000266C:
    fmr f1, f30
    bl fn_805C3B20
lbl_fn_805C5C50_00002674:
    lwz r5, 0x6c(r28)
    cmpwi r5, 0x0
    beq lbl_fn_805C5C50_000026FC
    lwz r0, 0x14(r28)
    li r4, 0x1
    cmpwi r0, 0x2
    bne lbl_fn_805C5C50_000026B0
    lwz r3, 0x3e8(r28)
    lwz r0, 0x14(r3)
    cmpwi r0, 0x1
    beq lbl_fn_805C5C50_000026B0
    lwz r3, 0x3c4(r28)
    lwz r0, 0x14(r3)
    cmpwi r0, 0x1
    bne lbl_fn_805C5C50_000026B4
lbl_fn_805C5C50_000026B0:
    li r4, 0x0
lbl_fn_805C5C50_000026B4:
    cmpwi r4, 0x0
    beq lbl_fn_805C5C50_000026FC
    cmpwi r5, 0x0
    beq lbl_fn_805C5C50_000026F4
    lwz r0, 0x74(r28)
    cmpw r5, r0
    beq lbl_fn_805C5C50_000026F4
    slwi r0, r5, 2
    add r3, r28, r0
    lwz r25, 0x3b8(r3)
    mr r3, r25
    bl fn_805C0120
    li r0, 0x1
    stw r0, 0x14(r25)
    lwz r0, 0x6c(r28)
    stw r0, 0x74(r28)
lbl_fn_805C5C50_000026F4:
    li r0, 0x0
    stw r0, 0x6c(r28)
lbl_fn_805C5C50_000026FC:
    lwz r3, 0x70(r28)
    cmpwi r3, 0x0
    beq lbl_fn_805C5C50_00002944
    li r4, 0x25
    addi r5, r30, 0x68
    li r0, 0x1
    li r8, 0x0
    mtctr r4
    nop
lbl_fn_805C5C50_00002720:
    lwz r4, 0x0(r5)
    cmpwi r4, 0x4
    bne lbl_fn_805C5C50_0000273C
    lwz r4, 0x4(r5)
    cmpwi r4, 0x2
    bne lbl_fn_805C5C50_0000273C
    b lbl_fn_805C5C50_0000276C
lbl_fn_805C5C50_0000273C:
    lwz r4, 0x8(r5)
    addi r8, r8, 0x1
    cmpwi r4, 0x4
    bne lbl_fn_805C5C50_0000275C
    lwz r4, 0xc(r5)
    cmpwi r4, 0x2
    bne lbl_fn_805C5C50_0000275C
    b lbl_fn_805C5C50_0000276C
lbl_fn_805C5C50_0000275C:
    addi r5, r5, 0x10
    addi r8, r8, 0x1
    bdnz lbl_fn_805C5C50_00002720
    li r8, -0x1
lbl_fn_805C5C50_0000276C:
    li r4, 0x25
    addi r5, r30, 0x68
    li r7, 0x0
    mtctr r4
    nop
lbl_fn_805C5C50_00002780:
    lwz r4, 0x0(r5)
    cmpwi r4, 0x5
    bne lbl_fn_805C5C50_0000279C
    lwz r4, 0x4(r5)
    cmpwi r4, 0x3
    bne lbl_fn_805C5C50_0000279C
    b lbl_fn_805C5C50_000027CC
lbl_fn_805C5C50_0000279C:
    lwz r4, 0x8(r5)
    addi r7, r7, 0x1
    cmpwi r4, 0x5
    bne lbl_fn_805C5C50_000027BC
    lwz r4, 0xc(r5)
    cmpwi r4, 0x3
    bne lbl_fn_805C5C50_000027BC
    b lbl_fn_805C5C50_000027CC
lbl_fn_805C5C50_000027BC:
    addi r5, r5, 0x10
    addi r7, r7, 0x1
    bdnz lbl_fn_805C5C50_00002780
    li r7, -0x1
lbl_fn_805C5C50_000027CC:
    li r4, 0x25
    addi r5, r30, 0x68
    li r6, 0x0
    mtctr r4
    nop
lbl_fn_805C5C50_000027E0:
    lwz r4, 0x0(r5)
    cmpwi r4, 0x4
    bne lbl_fn_805C5C50_000027FC
    lwz r4, 0x4(r5)
    cmpwi r4, 0x13
    bne lbl_fn_805C5C50_000027FC
    b lbl_fn_805C5C50_0000282C
lbl_fn_805C5C50_000027FC:
    lwz r4, 0x8(r5)
    addi r6, r6, 0x1
    cmpwi r4, 0x4
    bne lbl_fn_805C5C50_0000281C
    lwz r4, 0xc(r5)
    cmpwi r4, 0x13
    bne lbl_fn_805C5C50_0000281C
    b lbl_fn_805C5C50_0000282C
lbl_fn_805C5C50_0000281C:
    addi r5, r5, 0x10
    addi r6, r6, 0x1
    bdnz lbl_fn_805C5C50_000027E0
    li r6, -0x1
lbl_fn_805C5C50_0000282C:
    li r4, 0x25
    addi r9, r30, 0x68
    li r5, 0x0
    mtctr r4
    nop
lbl_fn_805C5C50_00002840:
    lwz r4, 0x0(r9)
    cmpwi r4, 0x5
    bne lbl_fn_805C5C50_0000285C
    lwz r4, 0x4(r9)
    cmpwi r4, 0x14
    bne lbl_fn_805C5C50_0000285C
    b lbl_fn_805C5C50_0000288C
lbl_fn_805C5C50_0000285C:
    lwz r4, 0x8(r9)
    addi r5, r5, 0x1
    cmpwi r4, 0x5
    bne lbl_fn_805C5C50_0000287C
    lwz r4, 0xc(r9)
    cmpwi r4, 0x14
    bne lbl_fn_805C5C50_0000287C
    b lbl_fn_805C5C50_0000288C
lbl_fn_805C5C50_0000287C:
    addi r9, r9, 0x10
    addi r5, r5, 0x1
    bdnz lbl_fn_805C5C50_00002840
    li r5, -0x1
lbl_fn_805C5C50_0000288C:
    lwz r4, 0x14(r28)
    cmpwi r4, 0x2
    bne lbl_fn_805C5C50_000028F8
    slwi r4, r8, 2
    add r4, r28, r4
    lwz r4, 0x290(r4)
    lwz r4, 0x14(r4)
    cmpwi r4, 0x1
    beq lbl_fn_805C5C50_000028F8
    slwi r4, r7, 2
    add r4, r28, r4
    lwz r4, 0x290(r4)
    lwz r4, 0x14(r4)
    cmpwi r4, 0x1
    beq lbl_fn_805C5C50_000028F8
    slwi r4, r6, 2
    add r4, r28, r4
    lwz r4, 0x290(r4)
    lwz r4, 0x14(r4)
    cmpwi r4, 0x1
    beq lbl_fn_805C5C50_000028F8
    slwi r4, r5, 2
    add r4, r28, r4
    lwz r4, 0x290(r4)
    lwz r4, 0x14(r4)
    cmpwi r4, 0x1
    bne lbl_fn_805C5C50_000028FC
lbl_fn_805C5C50_000028F8:
    li r0, 0x0
lbl_fn_805C5C50_000028FC:
    cmpwi r0, 0x0
    beq lbl_fn_805C5C50_00002944
    cmpwi r3, 0x0
    beq lbl_fn_805C5C50_0000293C
    lwz r0, 0x78(r28)
    cmpw r3, r0
    beq lbl_fn_805C5C50_0000293C
    slwi r0, r3, 2
    add r3, r28, r0
    lwz r25, 0x290(r3)
    mr r3, r25
    bl fn_805C0120
    li r0, 0x1
    stw r0, 0x14(r25)
    lwz r0, 0x70(r28)
    stw r0, 0x78(r28)
lbl_fn_805C5C50_0000293C:
    li r0, 0x0
    stw r0, 0x70(r28)
lbl_fn_805C5C50_00002944:
    lwz r0, 0x3fc(r28)
    cmpwi r0, 0x1
    bne lbl_fn_805C5C50_00002960
    lwz r3, 0x3f4(r28)
    addi r0, r3, 0x1
    stw r0, 0x3f4(r28)
    b lbl_fn_805C5C50_00002974
lbl_fn_805C5C50_00002960:
    cmpwi r0, 0x2
    bne lbl_fn_805C5C50_00002974
    lwz r3, 0x3f4(r28)
    subi r0, r3, 0x1
    stw r0, 0x3f4(r28)
lbl_fn_805C5C50_00002974:
    lwz r0, 0x3f4(r28)
    cmpwi r0, 0x0
    bge lbl_fn_805C5C50_0000298C
    li r0, 0x0
    stw r0, 0x3f4(r28)
    b lbl_fn_805C5C50_0000299C
lbl_fn_805C5C50_0000298C:
    lwz r3, 0x3f8(r28)
    cmpw r0, r3
    ble lbl_fn_805C5C50_0000299C
    stw r3, 0x3f4(r28)
lbl_fn_805C5C50_0000299C:
    cmpwi r29, 0x0
    beq lbl_fn_805C5C50_000029BC
    lhz r0, 0x5ca(r28)
    cmpwi r0, 0x0
    beq lbl_fn_805C5C50_000029BC
    mr r3, r28
    mr r4, r29
    bl fn_805C80F0
lbl_fn_805C5C50_000029BC:
    lwz r3, 0x1d8(r28)
    li r4, 0x0
    lwz r12, 0x0(r3)
    lwz r12, 0x2c(r12)
    mtctr r12
    bctrl
    lwz r3, 0x1d8(r28)
    addi r4, r28, 0x1f8
    lwz r12, 0x0(r3)
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
    lwz r3, 0x4(r28)
    lwz r0, 0x20(r3)
    cmpwi r0, 0x0
    bne lbl_fn_805C5C50_00002A2C
    mr r25, r28
    li r26, 0x0
lbl_fn_805C5C50_00002A04:
    lwz r3, 0x1dc(r25)
    addi r4, r28, 0x1f8
    lwz r12, 0x0(r3)
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
    addi r26, r26, 0x1
    addi r25, r25, 0x4
    cmpwi r26, 0x4
    blt lbl_fn_805C5C50_00002A04
lbl_fn_805C5C50_00002A2C:
    lwz r3, 0x68(r28)
    cmpwi r3, 0x2
    bgt lbl_fn_805C5C50_00002A40
    addi r0, r3, 0x1
    stw r0, 0x68(r28)
lbl_fn_805C5C50_00002A40:
    addi r11, r1, 0x50
    psq_l f31, 0x68(r1), 0, 0
    lfd f31, 0x60(r1)
    psq_l f30, 0x58(r1), 0, 0
    lfd f30, 0x50(r1)
    bl _restgpr_25
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}
