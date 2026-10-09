#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_22(void);
extern void _restgpr_23(void);
extern void _restgpr_25(void);
extern void _savegpr_22(void);
extern void _savegpr_23(void);
extern void _savegpr_25(void);
extern void fn_8004D388(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800F8548(void);
extern void fn_8011BF3C(void);
extern void fn_80126214(void);
extern void fn_8013A258(void);
extern void fn_80148990(void);
extern void fn_80149A30(void);
extern void fn_80151448(void);
extern void fn_8015B238(void);
extern void fn_8016D454(void);
extern void fn_8016E970(void);
extern void fn_80176548(void);
extern void fn_80232B7C(void);
extern void fn_80239DAC(void);
extern void fn_8023A8B4(void);
extern void fn_80370AE4(void);
extern void fn_805F8E70(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_8068A850(void);
extern void fn_8068AD58(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);
extern void fn_80695720(void);

/* External data declarations */
extern u8 lbl_80754F58[];
extern u8 lbl_80754FDC[];
extern u8 lbl_80755090[];
extern u8 lbl_80755098[];
extern u8 lbl_80755188[];

/* Small data declarations */
extern u32 lbl_8087D9E0;
extern u32 lbl_8087D9E4;
extern u32 lbl_8087EE98;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_80886D60;
extern u32 lbl_80886D64;
extern u32 lbl_80886D70;
extern u32 lbl_80886D74;
extern u32 lbl_80886D78;
extern u32 lbl_80886D80;
extern u32 lbl_80886D84;
extern u32 lbl_80886D88;
extern u32 lbl_80886D8C;
extern u32 lbl_80886D90;
extern u32 lbl_80886D94;
extern u32 lbl_80886D98;
extern u32 lbl_80886D9C;
extern u32 lbl_80886DA0;
extern u32 lbl_80886DA4;
extern u32 lbl_80886DA8;
extern u32 lbl_80886DAC;
extern u32 lbl_80886DB0;
extern u32 lbl_80886DB4;
extern u32 lbl_80886DB8;
extern u32 lbl_80886DBC;
extern u32 lbl_80886DC0;
extern u32 lbl_80886DC4;
extern u32 lbl_80886DC8;
extern u32 lbl_80886DCC;
extern u32 lbl_80886DD0;
extern u32 lbl_80886DD4;
extern u32 lbl_80886DD8;
extern u32 lbl_80886DDC;
extern u32 lbl_80886DE0;
extern u32 lbl_80886DE4;
extern u32 lbl_80886DE8;
extern u32 lbl_80886DEC;
extern u32 lbl_80886DF0;
extern u32 lbl_80886DF4;
extern u32 lbl_80886DF8;
extern u32 lbl_80886DFC;
extern u32 lbl_80886E00;

/* Function declarations */
void fn_80460A90(void);
void fn_80460A94(void);
void fn_80460B48(void);
void fn_80460EF0(void);
void fn_80460F18(void);
void fn_80461398(void);
void fn_80461520(void);
void fn_804617A4(void);
void fn_80461838(void);
void fn_80462038(void);

asm void fn_80460A90(void)
{
    nofralloc
    b fn_80149A30
}

asm void fn_80460A94(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x14c4(r3)
    cmpwi r0, 0x7
    beq lbl_fn_80460A94_000000A0
    lwz r3, 0x58c(r3)
    cmpwi r3, 0x8
    beq lbl_fn_80460A94_000000A0
    cmpwi r0, 0x6
    beq lbl_fn_80460A94_00000054
    cmpwi r0, 0x1
    beq lbl_fn_80460A94_00000054
    subi r0, r3, 0x11
    cmplwi r0, 0x2
    bgt lbl_fn_80460A94_0000007C
lbl_fn_80460A94_00000054:
    lfs f2, 0x10(r4)
    lfs f3, lbl_80886D60
    lfs f1, 0x14(r4)
    lfs f0, 0x18(r4)
    fmuls f2, f2, f3
    fmuls f1, f1, f3
    fmuls f0, f0, f3
    stfs f2, 0x10(r4)
    stfs f1, 0x14(r4)
    stfs f0, 0x18(r4)
lbl_fn_80460A94_0000007C:
    mr r3, r30
    mr r4, r31
    bl fn_80151448
    lwz r12, 0x0(r30)
    mr r3, r30
    mr r4, r31
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
lbl_fn_80460A94_000000A0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80460B48(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    li r5, 0x0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    mr r31, r3
    stw r30, 0x58(r1)
    mr r30, r4
    lwz r0, 0x58c(r3)
    cmpwi r0, 0xd
    bne lbl_fn_80460B48_000000FC
    lwz r4, 0x15a8(r3)
    addi r0, r4, 0x1
    stw r0, 0x15a8(r3)
    cmpwi r0, 0x3
    ble lbl_fn_80460B48_000000FC
    li r5, 0x1
lbl_fn_80460B48_000000FC:
    cmpwi r5, 0x0
    beq lbl_fn_80460B48_000001AC
    li r0, 0x0
    stw r0, 0x14bc(r3)
    stw r0, 0x14c0(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80460B48_00000134
    li r4, 0x8c
    li r5, 0x0
    bl fn_80370AE4
lbl_fn_80460B48_00000134:
    li r0, 0xe
    stw r0, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lfs f0, lbl_80886D8C
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80886D60
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x148
    lfs f2, lbl_80886D90
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r3, 0x1574(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80460B48_00000198
    bl fn_8015B238
    li r0, 0x0
    stw r0, 0x1574(r31)
lbl_fn_80460B48_00000198:
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3e8
    li r6, 0x0
    bl fn_80239DAC
lbl_fn_80460B48_000001AC:
    lwz r3, 0x8(r30)
    lwz r0, 0x4(r3)
    cmpwi r0, 0x5ba
    bne lbl_fn_80460B48_000001C4
    li r0, 0x1
    stw r0, 0x18e8(r31)
lbl_fn_80460B48_000001C4:
    lwz r0, 0x940(r31)
    cmpwi r0, 0x0
    ble lbl_fn_80460B48_000001FC
    xoris r3, r0, 0x8000
    lis r0, 0x4330
    lis r4, lbl_80755090@ha
    stw r3, 0x54(r1)
    lfd f4, lbl_80755090@l(r4)
    stw r0, 0x50(r1)
    lfs f0, 0x7d8(r31)
    lfd f3, 0x50(r1)
    fsubs f3, f3, f4
    fdivs f3, f0, f3
    b lbl_fn_80460B48_00000200
lbl_fn_80460B48_000001FC:
    lfs f3, lbl_80886D60
lbl_fn_80460B48_00000200:
    lfs f0, lbl_80886D94
    fcmpo cr0, f3, f0
    bge lbl_fn_80460B48_00000448
    li r0, 0x7
    stw r0, 0x14c4(r31)
    li r4, 0x0
    li r6, 0x0
    lwz r3, lbl_8087F430
    lwz r5, 0x10d8(r3)
    lwz r0, 0x78(r5)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80460B48_0000025C
lbl_fn_80460B48_00000234:
    lwz r3, 0x7c(r5)
    lwzx r0, r3, r6
    cmpwi r0, 0x258
    bne lbl_fn_80460B48_00000250
    mulli r0, r4, 0x28
    add r3, r3, r0
    b lbl_fn_80460B48_00000260
lbl_fn_80460B48_00000250:
    addi r6, r6, 0x28
    addi r4, r4, 0x1
    bdnz lbl_fn_80460B48_00000234
lbl_fn_80460B48_0000025C:
    li r3, 0x0
lbl_fn_80460B48_00000260:
    cmpwi r3, 0x0
    beq lbl_fn_80460B48_00000390
    psq_l f1, 0x4(r3), 0, 0
    addi r4, r31, 0x14d4
    lfs f2, 0xc(r3)
    addi r6, r1, 0x40
    stfs f2, 0x14dc(r31)
    addi r5, r31, 0x14e0
    lfs f2, lbl_80886D60
    li r0, 0x0
    psq_st f1, 0x0(r4), 0, 0
    lfs f0, 0x14(r3)
    stfs f2, 0x40(r1)
    stfs f0, 0x44(r1)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x14e8(r31)
    stw r0, 0x14bc(r31)
    stw r0, 0x14c0(r31)
    stfs f2, 0x48(r1)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80460B48_000002D4
    li r4, 0x8c
    li r5, 0x0
    bl fn_80370AE4
lbl_fn_80460B48_000002D4:
    li r0, 0x8
    stw r0, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lfs f0, lbl_80886D8C
    li r30, 0x1
    stw r30, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80886D60
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x13f
    lfs f2, lbl_80886D90
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    mr r3, r31
    li r4, 0x65
    bl fn_80232B7C
    lfs f0, lbl_80886D60
    li r0, -0x1
    lfs f1, lbl_80886D8C
    addi r4, r31, 0x1790
    stfs f0, 0x28(r1)
    addi r5, r31, 0xb0
    addi r7, r1, 0x34
    addi r8, r1, 0x28
    stfs f0, 0x2c(r1)
    addi r9, r1, 0x18
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x30(r1)
    stfs f0, 0x34(r1)
    stfs f0, 0x38(r1)
    stfs f0, 0x3c(r1)
    stfs f1, 0x18(r1)
    stfs f1, 0x1c(r1)
    stfs f1, 0x20(r1)
    stfs f1, 0x24(r1)
    stw r0, 0x8(r1)
    stw r30, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    b lbl_fn_80460B48_00000448
lbl_fn_80460B48_00000390:
    li r0, 0x0
    stw r0, 0x14bc(r31)
    stw r0, 0x14c0(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80460B48_000003C0
    li r4, 0x8c
    li r5, 0x0
    bl fn_80370AE4
lbl_fn_80460B48_000003C0:
    li r0, 0x6
    stw r0, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lfs f0, lbl_80886D8C
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80886D60
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x14a
    lfs f2, lbl_80886D90
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r0, 0x17b0(r31)
    lis r4, lbl_80755188@ha
    addi r4, r4, lbl_80755188@l
    lfs f1, lbl_80886D8C
    ori r0, r0, 0x1
    stw r0, 0x17b0(r31)
    addi r3, r1, 0x10
    addi r4, r4, 0xc9
    addi r5, r31, 0x528
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_80460B48_00000448:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80460EF0(void)
{
    nofralloc
    psq_l f1, 0x528(r4), 0, 0
    lfs f2, 0x530(r4)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
    lwz r4, 0x62c(r4)
    psq_l f1, 0x4(r4), 0, 0
    lfs f2, 0xc(r4)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
    blr
}

asm void fn_80460F18(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_22
    lfs f2, lbl_80886D60
    li r0, 0x0
    lfs f3, lbl_80886D98
    lis r30, lbl_80754F58@ha
    lfs f0, 0x5b0(r3)
    addi r4, r1, 0x8
    stfs f2, 0x8(r1)
    addi r29, r1, 0x24
    fmuls f0, f3, f0
    mr r23, r3
    stfs f2, 0xc(r1)
    addi r30, r30, lbl_80754F58@l
    addi r28, r1, 0x14
    li r24, 0x0
    psq_l f1, 0x0(r4), 0, 0
    li r22, 0x0
    stw r0, 0x20(r1)
    lis r31, fn_80148990@ha
    li r26, 0x8
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x2c(r1)
    stfs f0, 0x30(r1)
lbl_fn_80460F18_000004F8:
    lwzx r4, r30, r22
    addi r3, r23, 0xb0
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80460F18_00000518
    li r3, 0x0
    b lbl_fn_80460F18_00000524
lbl_fn_80460F18_00000518:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r23)
    add r3, r3, r0
lbl_fn_80460F18_00000524:
    lfs f0, 0x1c(r3)
    lfs f3, 0xc(r3)
    lwz r0, 0x62c(r23)
    lfs f2, 0x2c(r3)
    stfs f3, 0x14(r1)
    cmpwi r0, 0x0
    stfs f0, 0x18(r1)
    psq_l f1, 0x0(r28), 0, 0
    stfs f2, 0x1c(r1)
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x2c(r1)
    beq lbl_fn_80460F18_00000560
    lwz r0, 0x628(r23)
    cmpwi r0, 0x0
    bne lbl_fn_80460F18_000006F8
lbl_fn_80460F18_00000560:
    lwz r0, 0x628(r23)
    cmplwi r0, 0x8
    bgt lbl_fn_80460F18_0000089C
    li r3, 0xb0
    li r4, 0x0
    la r5, lbl_8087D9E4
    la r6, lbl_8087D9E0
    li r7, 0x0
    bl fn_800846FC
    addi r4, r31, fn_80148990@l
    li r5, 0x0
    li r6, 0x14
    li r7, 0x8
    bl fn_80695720
    lwz r0, 0x62c(r23)
    mr r25, r3
    cmpwi r0, 0x0
    beq lbl_fn_80460F18_000006EC
    lwz r0, 0x624(r23)
    li r5, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_80460F18_000005BC
    mr r5, r0
lbl_fn_80460F18_000005BC:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_80460F18_000006D8
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_80460F18_000006A0
lbl_fn_80460F18_000005D4:
    lwz r0, 0x62c(r23)
    add r6, r3, r4
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r23)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r23)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r23)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    bdnz lbl_fn_80460F18_000005D4
    andi. r5, r5, 0x3
    beq lbl_fn_80460F18_000006D8
lbl_fn_80460F18_000006A0:
    mtctr r5
lbl_fn_80460F18_000006A4:
    lwz r0, 0x62c(r23)
    add r6, r3, r4
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    bdnz lbl_fn_80460F18_000006A4
lbl_fn_80460F18_000006D8:
    lwz r3, 0x62c(r23)
    cmpwi r3, 0x0
    beq lbl_fn_80460F18_000006EC
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80460F18_000006EC:
    stw r25, 0x62c(r23)
    stw r26, 0x628(r23)
    b lbl_fn_80460F18_0000089C
lbl_fn_80460F18_000006F8:
    lwz r3, 0x624(r23)
    cmplw r3, r0
    blt lbl_fn_80460F18_0000089C
    slwi r27, r3, 1
    cmplw r0, r27
    bgt lbl_fn_80460F18_0000089C
    mulli r3, r27, 0x14
    li r4, 0x0
    la r5, lbl_8087D9E4
    la r6, lbl_8087D9E0
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    mr r7, r27
    addi r4, r31, fn_80148990@l
    li r5, 0x0
    li r6, 0x14
    bl fn_80695720
    lwz r0, 0x62c(r23)
    mr r25, r3
    cmpwi r0, 0x0
    beq lbl_fn_80460F18_00000894
    lwz r0, 0x624(r23)
    mr r5, r27
    cmplw r27, r0
    ble lbl_fn_80460F18_00000764
    mr r5, r0
lbl_fn_80460F18_00000764:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_80460F18_00000880
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_80460F18_00000848
lbl_fn_80460F18_0000077C:
    lwz r0, 0x62c(r23)
    add r6, r3, r4
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r23)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r23)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r23)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    bdnz lbl_fn_80460F18_0000077C
    andi. r5, r5, 0x3
    beq lbl_fn_80460F18_00000880
lbl_fn_80460F18_00000848:
    mtctr r5
lbl_fn_80460F18_0000084C:
    lwz r0, 0x62c(r23)
    add r6, r3, r4
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    bdnz lbl_fn_80460F18_0000084C
lbl_fn_80460F18_00000880:
    lwz r3, 0x62c(r23)
    cmpwi r3, 0x0
    beq lbl_fn_80460F18_00000894
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80460F18_00000894:
    stw r25, 0x62c(r23)
    stw r27, 0x628(r23)
lbl_fn_80460F18_0000089C:
    lwz r0, 0x624(r23)
    addi r24, r24, 0x1
    lwz r4, 0x62c(r23)
    cmpwi r24, 0x3
    mulli r3, r0, 0x14
    lwz r0, 0x20(r1)
    stwux r0, r3, r4
    addi r22, r22, 0x4
    psq_l f1, 0x0(r29), 0, 0
    psq_st f1, 0x4(r3), 0, 0
    lfs f2, 0x2c(r1)
    stfs f2, 0xc(r3)
    lfs f0, 0x30(r1)
    stfs f0, 0x10(r3)
    lwz r3, 0x624(r23)
    addi r0, r3, 0x1
    stw r0, 0x624(r23)
    blt lbl_fn_80460F18_000004F8
    lwz r0, 0x12a8(r23)
    addi r11, r1, 0x60
    rlwinm r0, r0, 0, 3, 1
    stw r0, 0x12a8(r23)
    bl _restgpr_22
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80461398(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    addi r11, r1, 0x50
    stfd f31, 0x70(r1)
    psq_st f31, 0x78(r1), 0, 0
    stfd f30, 0x60(r1)
    psq_st f30, 0x68(r1), 0, 0
    stfd f29, 0x50(r1)
    psq_st f29, 0x58(r1), 0, 0
    bl _savegpr_25
    lwz r0, 0x624(r3)
    mr r30, r3
    cmpwi r0, 0x0
    beq lbl_fn_80461398_00000A60
    lis r27, lbl_80754F58@ha
    lfs f30, lbl_80886D94
    lfs f31, lbl_80886DA0
    addi r27, r27, lbl_80754F58@l
    lfs f29, lbl_80886D9C
    addi r26, r1, 0x20
    addi r25, r1, 0x14
    li r31, 0x0
    li r29, 0x0
    li r28, 0x0
lbl_fn_80461398_0000096C:
    lwzx r4, r27, r28
    addi r3, r30, 0xb0
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80461398_0000098C
    li r3, 0x0
    b lbl_fn_80461398_00000998
lbl_fn_80461398_0000098C:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r3, r3, r0
lbl_fn_80461398_00000998:
    lfs f0, 0x1c(r3)
    cmpwi r31, 0x1
    lfs f3, 0xc(r3)
    lfs f2, 0x2c(r3)
    lwz r0, 0x62c(r30)
    stfs f3, 0x20(r1)
    add r3, r0, r29
    stfs f0, 0x24(r1)
    psq_l f1, 0x0(r26), 0, 0
    psq_st f1, 0x4(r3), 0, 0
    stfs f2, 0x28(r1)
    stfs f2, 0xc(r3)
    bne lbl_fn_80461398_000009DC
    lwz r0, 0x62c(r30)
    add r3, r0, r29
    stfs f29, 0x10(r3)
    b lbl_fn_80461398_00000A4C
lbl_fn_80461398_000009DC:
    cmpwi r31, 0x2
    bne lbl_fn_80461398_00000A4C
    lwz r3, 0x62c(r30)
    lfs f4, 0x8(r3)
    add r4, r3, r29
    lfs f0, 0x1c(r3)
    lfs f3, 0x4(r3)
    fadds f5, f4, f0
    lfs f0, 0x18(r3)
    lfs f4, 0xc(r3)
    fadds f3, f3, f0
    lfs f0, 0x20(r3)
    fmuls f6, f5, f30
    stfs f3, 0x8(r1)
    fadds f0, f4, f0
    fmuls f3, f3, f30
    stfs f6, 0x18(r1)
    fmuls f2, f0, f30
    stfs f3, 0x14(r1)
    psq_l f1, 0x0(r25), 0, 0
    psq_st f1, 0x4(r4), 0, 0
    stfs f2, 0xc(r4)
    lwz r0, 0x62c(r30)
    stfs f5, 0xc(r1)
    add r3, r0, r29
    stfs f0, 0x10(r1)
    stfs f2, 0x1c(r1)
    stfs f31, 0x10(r3)
lbl_fn_80461398_00000A4C:
    addi r31, r31, 0x1
    addi r28, r28, 0x4
    cmpwi r31, 0x3
    addi r29, r29, 0x14
    blt lbl_fn_80461398_0000096C
lbl_fn_80461398_00000A60:
    addi r11, r1, 0x50
    psq_l f31, 0x78(r1), 0, 0
    lfd f31, 0x70(r1)
    psq_l f30, 0x68(r1), 0, 0
    lfd f30, 0x60(r1)
    psq_l f29, 0x58(r1), 0, 0
    lfd f29, 0x50(r1)
    bl _restgpr_25
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_80461520(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    addi r11, r1, 0x70
    stfd f31, 0x70(r1)
    psq_st f31, 0x78(r1), 0, 0
    bl _savegpr_23
    lfs f5, 0x52c(r3)
    addi r4, r1, 0x20
    lfs f4, 0x5a8(r3)
    addi r5, r1, 0x38
    lfs f3, 0x528(r3)
    addi r6, r1, 0x2c
    fadds f5, f5, f4
    lfs f0, 0x5a4(r3)
    lfs f4, lbl_80886D98
    mr r30, r3
    fadds f0, f3, f0
    stfs f5, 0x24(r1)
    stfs f0, 0x20(r1)
    lfs f7, 0x5b0(r3)
    psq_l f1, 0x0(r4), 0, 0
    fmuls f6, f4, f7
    lfs f3, 0x530(r3)
    lfs f0, 0x5ac(r3)
    psq_st f1, 0x614(r3), 0, 0
    fadds f8, f3, f0
    lfs f4, lbl_80886DA4
    lfs f0, 0x618(r3)
    lfs f3, 0x5b4(r3)
    fadds f5, f0, f6
    lfs f0, lbl_80886D8C
    fmr f2, f8
    stfs f6, 0x620(r3)
    fnmsubs f3, f4, f7, f3
    stfs f5, 0x618(r3)
    psq_l f1, 0x614(r3), 0, 0
    fcmpo cr0, f3, f0
    stfs f2, 0x61c(r3)
    frsp f2, f2
    stfs f8, 0x28(r1)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x40(r1)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x34(r1)
    ble lbl_fn_80461520_00000B4C
    b lbl_fn_80461520_00000B50
lbl_fn_80461520_00000B4C:
    fmr f3, f0
lbl_fn_80461520_00000B50:
    lfs f0, 0x30(r1)
    addi r25, r1, 0x38
    lfs f2, 0x40(r1)
    lis r4, lbl_80754FDC@ha
    fadds f0, f0, f3
    psq_l f1, 0x0(r25), 0, 0
    stfs f2, 0x5fc(r3)
    addi r26, r1, 0x2c
    lfs f2, 0x34(r1)
    addi r27, r4, lbl_80754FDC@l
    stfs f0, 0x30(r1)
    addi r24, r1, 0x14
    addi r23, r1, 0x8
    li r31, 0x0
    psq_st f1, 0x5f4(r3), 0, 0
    li r29, 0x0
    psq_l f1, 0x0(r26), 0, 0
    li r28, 0x0
    psq_st f1, 0x600(r3), 0, 0
    stfs f2, 0x608(r3)
    stfs f7, 0x60c(r3)
lbl_fn_80461520_00000BA4:
    add r4, r27, r28
    addi r3, r30, 0xb0
    lfs f31, 0x8(r4)
    li r5, 0x0
    lwz r4, 0x0(r4)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80461520_00000BCC
    li r5, 0x0
    b lbl_fn_80461520_00000BD8
lbl_fn_80461520_00000BCC:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r5, r3, r0
lbl_fn_80461520_00000BD8:
    lfs f0, 0x1c(r5)
    add r4, r27, r28
    lfs f3, 0xc(r5)
    addi r3, r30, 0xb0
    stfs f3, 0x14(r1)
    lfs f2, 0x2c(r5)
    li r5, 0x0
    stfs f0, 0x18(r1)
    lwz r4, 0x4(r4)
    psq_l f1, 0x0(r24), 0, 0
    stfs f2, 0x1c(r1)
    psq_st f1, 0x0(r25), 0, 0
    stfs f2, 0x40(r1)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80461520_00000C20
    li r4, 0x0
    b lbl_fn_80461520_00000C2C
lbl_fn_80461520_00000C20:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r4, r3, r0
lbl_fn_80461520_00000C2C:
    lfs f3, 0x1c(r4)
    add r3, r30, r29
    lfs f4, 0xc(r4)
    addi r31, r31, 0x1
    lfs f0, 0x2c(r4)
    addi r5, r3, 0x1614
    stfs f4, 0x8(r1)
    addi r4, r3, 0x1620
    fmr f2, f0
    cmpwi r31, 0x5
    stfs f3, 0xc(r1)
    addi r29, r29, 0x58
    addi r28, r28, 0xc
    psq_l f1, 0x0(r23), 0, 0
    psq_st f1, 0x0(r26), 0, 0
    psq_l f1, 0x0(r25), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    psq_l f1, 0x0(r26), 0, 0
    stfs f2, 0x34(r1)
    lfs f2, 0x40(r1)
    stfs f2, 0x161c(r3)
    lfs f2, 0x34(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x1628(r3)
    stfs f0, 0x10(r1)
    stfs f31, 0x162c(r3)
    blt lbl_fn_80461520_00000BA4
    addi r4, r1, 0x2c
    psq_l f1, 0x528(r30), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    addi r3, r1, 0x38
    lfs f2, 0x530(r30)
    addi r6, r30, 0x17e4
    lfs f3, 0x30(r1)
    addi r5, r30, 0x17f0
    lfs f0, lbl_80886DAC
    lfs f4, lbl_80886DA8
    fadds f0, f3, f0
    stfs f2, 0x40(r1)
    stfs f2, 0x34(r1)
    frsp f2, f2
    stfs f2, 0x17ec(r30)
    lfs f2, 0x34(r1)
    stfs f0, 0x30(r1)
    psq_st f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x17f8(r30)
    stfs f4, 0x17fc(r30)
    psq_l f31, 0x78(r1), 0, 0
    lfd f31, 0x70(r1)
    addi r11, r1, 0x70
    bl _restgpr_23
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_804617A4(void)
{
    nofralloc
    lwz r4, 0x58c(r3)
    subi r0, r4, 0xb
    cmplwi r0, 0x1
    bgt lbl_fn_804617A4_00000D44
    lwz r5, 0xd1c(r3)
    li r4, 0x0
    lwz r0, 0x1554(r3)
    stw r5, 0xd20(r3)
    stw r4, 0x1454(r3)
    stw r0, 0x14b8(r3)
    stw r0, 0xd1c(r3)
    blr
lbl_fn_804617A4_00000D44:
    cmpwi r4, 0xd
    bne lbl_fn_804617A4_00000D6C
    lwz r5, 0xd1c(r3)
    li r4, 0x0
    lwz r0, 0x1574(r3)
    stw r5, 0xd20(r3)
    stw r4, 0x1454(r3)
    stw r0, 0x14b8(r3)
    stw r0, 0xd1c(r3)
    blr
lbl_fn_804617A4_00000D6C:
    cmpwi r4, 0x11
    bne lbl_fn_804617A4_00000D94
    lwz r5, 0xd1c(r3)
    li r4, 0x0
    lwz r0, 0x15c8(r3)
    stw r5, 0xd20(r3)
    stw r4, 0x1454(r3)
    stw r0, 0x14b8(r3)
    stw r0, 0xd1c(r3)
    blr
lbl_fn_804617A4_00000D94:
    lwz r0, 0xd1c(r3)
    li r4, 0x1
    stw r4, 0x1454(r3)
    stw r0, 0x14b8(r3)
    blr
}

asm void fn_80461838(void)
{
    nofralloc
    stwu r1, -0x2f0(r1)
    mflr r0
    stw r0, 0x2f4(r1)
    stfd f31, 0x2e0(r1)
    psq_st f31, 0x2e8(r1), 0, 0
    lfs f31, lbl_80886D60
    stfd f30, 0x2d0(r1)
    psq_st f30, 0x2d8(r1), 0, 0
    lfs f30, lbl_80886D8C
    stfd f29, 0x2c0(r1)
    psq_st f29, 0x2c8(r1), 0, 0
    stfd f28, 0x2b0(r1)
    psq_st f28, 0x2b8(r1), 0, 0
    stw r31, 0x2ac(r1)
    mr r31, r3
    stw r30, 0x2a8(r1)
    addi r30, r1, 0x140
    stw r29, 0x2a4(r1)
    psq_l f1, 0x534(r3), 0, 0
    lfs f2, 0x53c(r3)
    stfs f2, 0x148(r1)
    psq_st f1, 0x0(r30), 0, 0
    lwz r4, 0x55c(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80461838_00000E28
    cmpwi r4, 0x5
    beq lbl_fn_80461838_00000E28
    cmpwi r4, 0x9
    beq lbl_fn_80461838_00000E28
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 29
    beq lbl_fn_80461838_00000E40
lbl_fn_80461838_00000E28:
    psq_l f1, 0x534(r3), 0, 0
    addi r4, r1, 0x140
    lfs f2, 0x53c(r3)
    stfs f2, 0x148(r1)
    psq_st f1, 0x0(r4), 0, 0
    b lbl_fn_80461838_00001554
lbl_fn_80461838_00000E40:
    cmpwi r4, 0x1
    bne lbl_fn_80461838_00000E54
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x148(r1)
    b lbl_fn_80461838_00001554
lbl_fn_80461838_00000E54:
    cmpwi r4, 0x7
    bne lbl_fn_80461838_00001084
    addi r3, r3, 0x1030
    bl fn_80126214
    addi r4, r31, 0x1088
    addi r29, r1, 0x134
    psq_l f1, 0x0(r4), 0, 0
    mr r3, r29
    lfs f2, 0x1090(r31)
    stfs f2, 0x13c(r1)
    psq_st f1, 0x0(r29), 0, 0
    bl fn_805F9940
    lfs f0, lbl_80886DB0
    fmr f31, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_80461838_00001070
    addi r30, r1, 0x104
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x13c(r1)
    mr r3, r30
    psq_st f1, 0x0(r30), 0, 0
    mr r4, r30
    stfs f2, 0x10c(r1)
    bl fn_805F98D0
    lfs f2, 0x10c(r1)
    addi r29, r1, 0x110
    psq_l f1, 0x0(r30), 0, 0
    fabs f3, f2
    lfs f0, lbl_80886D80
    psq_st f1, 0x0(r29), 0, 0
    frsp f3, f3
    stfs f2, 0x118(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_80461838_00000F00
    lfs f3, 0x110(r1)
    lfs f0, lbl_80886D60
    fcmpo cr0, f3, f0
    ble lbl_fn_80461838_00000EF4
    lfs f0, lbl_80886D84
    b lbl_fn_80461838_00000EF8
lbl_fn_80461838_00000EF4:
    lfs f0, lbl_80886D88
lbl_fn_80461838_00000EF8:
    stfs f0, 0xd8(r1)
    b lbl_fn_80461838_00000F14
lbl_fn_80461838_00000F00:
    frsp f2, f2
    lfs f1, 0x110(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0xd8(r1)
lbl_fn_80461838_00000F14:
    lfs f0, 0xd8(r1)
    addi r3, r1, 0x230
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80886D60
    addi r4, r1, 0xc8
    lfs f28, 0x238(r1)
    mr r5, r4
    lfs f29, 0x234(r1)
    addi r3, r1, 0x260
    lfs f13, 0x230(r1)
    lfs f12, 0x248(r1)
    lfs f11, 0x244(r1)
    lfs f10, 0x240(r1)
    lfs f9, 0x258(r1)
    lfs f8, 0x254(r1)
    lfs f7, 0x250(r1)
    lfs f6, 0x25c(r1)
    lfs f5, 0x24c(r1)
    lfs f4, 0x23c(r1)
    lfs f0, lbl_80886D8C
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x118(r1)
    stfs f3, 0x290(r1)
    stfs f3, 0x294(r1)
    stfs f3, 0x298(r1)
    stfs f0, 0x29c(r1)
    stfs f13, 0x98(r1)
    stfs f29, 0x9c(r1)
    stfs f28, 0xa0(r1)
    stfs f13, 0x260(r1)
    stfs f29, 0x264(r1)
    stfs f28, 0x268(r1)
    stfs f10, 0xa4(r1)
    stfs f11, 0xa8(r1)
    stfs f12, 0xac(r1)
    stfs f10, 0x270(r1)
    stfs f11, 0x274(r1)
    stfs f12, 0x278(r1)
    stfs f7, 0xb0(r1)
    stfs f8, 0xb4(r1)
    stfs f9, 0xb8(r1)
    stfs f7, 0x280(r1)
    stfs f8, 0x284(r1)
    stfs f9, 0x288(r1)
    stfs f4, 0xbc(r1)
    stfs f5, 0xc0(r1)
    stfs f6, 0xc4(r1)
    stfs f4, 0x26c(r1)
    stfs f5, 0x27c(r1)
    stfs f6, 0x28c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xd0(r1)
    bl fn_805F9750
    lfs f2, 0xd0(r1)
    lfs f0, lbl_80886D80
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80461838_00001030
    lfs f3, 0xcc(r1)
    lfs f0, lbl_80886D60
    fcmpo cr0, f3, f0
    ble lbl_fn_80461838_00001020
    lfs f0, lbl_80886D84
    b lbl_fn_80461838_00001024
lbl_fn_80461838_00001020:
    lfs f0, lbl_80886D88
lbl_fn_80461838_00001024:
    fneg f0, f0
    stfs f0, 0xd4(r1)
    b lbl_fn_80461838_00001044
lbl_fn_80461838_00001030:
    lfs f1, 0xcc(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0xd4(r1)
lbl_fn_80461838_00001044:
    lfs f2, lbl_80886D60
    addi r3, r1, 0xd4
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x140
    stfs f2, 0xdc(r1)
    stfs f2, 0x118(r1)
    frsp f2, f2
    psq_st f1, 0x0(r29), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x148(r1)
    b lbl_fn_80461838_00001554
lbl_fn_80461838_00001070:
    psq_l f1, 0x534(r31), 0, 0
    lfs f2, 0x53c(r31)
    stfs f2, 0x148(r1)
    psq_st f1, 0x0(r30), 0, 0
    b lbl_fn_80461838_00001554
lbl_fn_80461838_00001084:
    cmpwi r4, 0x3
    bne lbl_fn_80461838_00001544
    lwz r0, 0x14c4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80461838_00001554
    lwz r4, 0x14b8(r3)
    lfs f0, 0x530(r3)
    lfs f3, 0x530(r4)
    lfs f5, 0x52c(r4)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r3)
    lfs f0, 0x528(r3)
    addi r3, r1, 0x128
    lfs f3, 0x528(r4)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x12c(r1)
    stfs f0, 0x128(r1)
    stfs f6, 0x130(r1)
    bl fn_805F9940
    lfs f0, lbl_80886DB4
    fmr f31, f1
    fcmpo cr0, f1, f0
    bge lbl_fn_80461838_000010FC
    psq_l f1, 0x534(r31), 0, 0
    lfs f2, 0x53c(r31)
    stfs f2, 0x148(r1)
    lfs f31, lbl_80886D60
    psq_st f1, 0x0(r30), 0, 0
    b lbl_fn_80461838_00001554
lbl_fn_80461838_000010FC:
    addi r3, r1, 0x128
    mr r4, r3
    bl fn_805F98D0
    lfs f0, lbl_80886DB8
    fcmpo cr0, f31, f0
    bge lbl_fn_80461838_0000132C
    lfs f2, 0x130(r1)
    addi r3, r1, 0x128
    lfs f0, lbl_80886D80
    addi r29, r1, 0xf8
    fabs f3, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    lfs f31, lbl_80886D60
    frsp f3, f3
    stfs f2, 0x100(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_80461838_00001164
    lfs f0, 0xf8(r1)
    fcmpo cr0, f0, f31
    ble lbl_fn_80461838_00001158
    lfs f0, lbl_80886D84
    b lbl_fn_80461838_0000115C
lbl_fn_80461838_00001158:
    lfs f0, lbl_80886D88
lbl_fn_80461838_0000115C:
    stfs f0, 0x90(r1)
    b lbl_fn_80461838_00001178
lbl_fn_80461838_00001164:
    frsp f2, f2
    lfs f1, 0xf8(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x90(r1)
lbl_fn_80461838_00001178:
    lfs f0, 0x90(r1)
    addi r3, r1, 0x1c0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80886D60
    addi r4, r1, 0x80
    lfs f29, 0x1c8(r1)
    mr r5, r4
    lfs f28, 0x1c4(r1)
    addi r3, r1, 0x1f0
    lfs f13, 0x1c0(r1)
    lfs f12, 0x1d8(r1)
    lfs f11, 0x1d4(r1)
    lfs f10, 0x1d0(r1)
    lfs f9, 0x1e8(r1)
    lfs f8, 0x1e4(r1)
    lfs f7, 0x1e0(r1)
    lfs f6, 0x1ec(r1)
    lfs f5, 0x1dc(r1)
    lfs f4, 0x1cc(r1)
    lfs f0, lbl_80886D8C
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x100(r1)
    stfs f3, 0x220(r1)
    stfs f3, 0x224(r1)
    stfs f3, 0x228(r1)
    stfs f0, 0x22c(r1)
    stfs f13, 0x50(r1)
    stfs f28, 0x54(r1)
    stfs f29, 0x58(r1)
    stfs f13, 0x1f0(r1)
    stfs f28, 0x1f4(r1)
    stfs f29, 0x1f8(r1)
    stfs f10, 0x5c(r1)
    stfs f11, 0x60(r1)
    stfs f12, 0x64(r1)
    stfs f10, 0x200(r1)
    stfs f11, 0x204(r1)
    stfs f12, 0x208(r1)
    stfs f7, 0x68(r1)
    stfs f8, 0x6c(r1)
    stfs f9, 0x70(r1)
    stfs f7, 0x210(r1)
    stfs f8, 0x214(r1)
    stfs f9, 0x218(r1)
    stfs f4, 0x74(r1)
    stfs f5, 0x78(r1)
    stfs f6, 0x7c(r1)
    stfs f4, 0x1fc(r1)
    stfs f5, 0x20c(r1)
    stfs f6, 0x21c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x88(r1)
    bl fn_805F9750
    lfs f2, 0x88(r1)
    lfs f0, lbl_80886D80
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80461838_00001294
    lfs f3, 0x84(r1)
    lfs f0, lbl_80886D60
    fcmpo cr0, f3, f0
    ble lbl_fn_80461838_00001284
    lfs f0, lbl_80886D84
    b lbl_fn_80461838_00001288
lbl_fn_80461838_00001284:
    lfs f0, lbl_80886D88
lbl_fn_80461838_00001288:
    fneg f0, f0
    stfs f0, 0x8c(r1)
    b lbl_fn_80461838_000012A8
lbl_fn_80461838_00001294:
    lfs f1, 0x84(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x8c(r1)
lbl_fn_80461838_000012A8:
    addi r3, r1, 0x8c
    lfs f4, lbl_80886D60
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_80755098@ha
    psq_st f1, 0x0(r29), 0, 0
    fmr f2, f4
    lfs f0, 0x538(r31)
    lfs f3, 0xfc(r1)
    stfs f2, 0x100(r1)
    fsubs f1, f3, f0
    lfd f2, lbl_80755098@l(r3)
    stfs f4, 0x94(r1)
    bl fn_8068AEA8
    frsp f1, f1
    lfs f0, lbl_80886D78
    fcmpo cr0, f1, f0
    ble lbl_fn_80461838_000012F4
    lfs f0, lbl_80886DBC
    fsubs f1, f1, f0
lbl_fn_80461838_000012F4:
    lfs f0, lbl_80886DC0
    fcmpo cr0, f1, f0
    bge lbl_fn_80461838_00001308
    lfs f0, lbl_80886DBC
    fadds f1, f1, f0
lbl_fn_80461838_00001308:
    fabs f3, f1
    lfs f0, lbl_80886DC4
    frsp f3, f3
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_80461838_00001554
    mr r3, r31
    bl fn_8016D454
    b lbl_fn_80461838_0000156C
lbl_fn_80461838_0000132C:
    lfs f31, lbl_80886DC8
    addi r3, r1, 0xec
    addi r4, r31, 0xc58
    li r5, 0x0
    bl fn_8011BF3C
    lfs f3, 0xf4(r1)
    addi r3, r1, 0x11c
    lfs f0, 0x530(r31)
    addi r29, r1, 0xe0
    lfs f5, 0xf0(r1)
    fsubs f2, f3, f0
    lfs f4, 0x52c(r31)
    lfs f3, 0xec(r1)
    fsubs f4, f5, f4
    lfs f0, 0x528(r31)
    stfs f2, 0x124(r1)
    fsubs f3, f3, f0
    lfs f0, lbl_80886D80
    stfs f4, 0x120(r1)
    frsp f4, f2
    stfs f3, 0x11c(r1)
    fabs f3, f4
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    frsp f3, f3
    stfs f2, 0xe8(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_80461838_000013C0
    lfs f3, 0xe0(r1)
    lfs f0, lbl_80886D60
    fcmpo cr0, f3, f0
    ble lbl_fn_80461838_000013B4
    lfs f0, lbl_80886D84
    b lbl_fn_80461838_000013B8
lbl_fn_80461838_000013B4:
    lfs f0, lbl_80886D88
lbl_fn_80461838_000013B8:
    stfs f0, 0x48(r1)
    b lbl_fn_80461838_000013D4
lbl_fn_80461838_000013C0:
    fmr f2, f4
    lfs f1, 0xe0(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_80461838_000013D4:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x150
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80886D60
    addi r4, r1, 0x38
    lfs f29, 0x158(r1)
    mr r5, r4
    lfs f28, 0x154(r1)
    addi r3, r1, 0x180
    lfs f13, 0x150(r1)
    lfs f12, 0x168(r1)
    lfs f11, 0x164(r1)
    lfs f10, 0x160(r1)
    lfs f9, 0x178(r1)
    lfs f8, 0x174(r1)
    lfs f7, 0x170(r1)
    lfs f6, 0x17c(r1)
    lfs f5, 0x16c(r1)
    lfs f4, 0x15c(r1)
    lfs f0, lbl_80886D8C
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0xe8(r1)
    stfs f3, 0x1b0(r1)
    stfs f3, 0x1b4(r1)
    stfs f3, 0x1b8(r1)
    stfs f0, 0x1bc(r1)
    stfs f13, 0x8(r1)
    stfs f28, 0xc(r1)
    stfs f29, 0x10(r1)
    stfs f13, 0x180(r1)
    stfs f28, 0x184(r1)
    stfs f29, 0x188(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0x190(r1)
    stfs f11, 0x194(r1)
    stfs f12, 0x198(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0x1a0(r1)
    stfs f8, 0x1a4(r1)
    stfs f9, 0x1a8(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0x18c(r1)
    stfs f5, 0x19c(r1)
    stfs f6, 0x1ac(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80886D80
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80461838_000014F0
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80886D60
    fcmpo cr0, f3, f0
    ble lbl_fn_80461838_000014E0
    lfs f0, lbl_80886D84
    b lbl_fn_80461838_000014E4
lbl_fn_80461838_000014E0:
    lfs f0, lbl_80886D88
lbl_fn_80461838_000014E4:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_80461838_00001504
lbl_fn_80461838_000014F0:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_80461838_00001504:
    addi r3, r1, 0x44
    lfs f4, lbl_80886D60
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x140
    psq_st f1, 0x0(r3), 0, 0
    fmr f2, f4
    lfs f0, lbl_80886DCC
    lfs f3, 0x144(r1)
    stfs f2, 0xe8(r1)
    frsp f2, f2
    fsubs f0, f3, f0
    stfs f4, 0x4c(r1)
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x148(r1)
    stfs f0, 0x144(r1)
    b lbl_fn_80461838_00001554
lbl_fn_80461838_00001544:
    cmpwi r4, 0x6
    bne lbl_fn_80461838_00001554
    bl fn_8013A258
    b lbl_fn_80461838_0000156C
lbl_fn_80461838_00001554:
    fmr f1, f31
    mr r3, r31
    fmr f2, f30
    addi r4, r1, 0x140
    li r5, 0x1
    bl fn_80462038
lbl_fn_80461838_0000156C:
    lwz r0, 0x2f4(r1)
    psq_l f31, 0x2e8(r1), 0, 0
    lfd f31, 0x2e0(r1)
    psq_l f30, 0x2d8(r1), 0, 0
    lfd f30, 0x2d0(r1)
    psq_l f29, 0x2c8(r1), 0, 0
    lfd f29, 0x2c0(r1)
    psq_l f28, 0x2b8(r1), 0, 0
    lfd f28, 0x2b0(r1)
    lwz r31, 0x2ac(r1)
    lwz r30, 0x2a8(r1)
    lwz r29, 0x2a4(r1)
    mtlr r0
    addi r1, r1, 0x2f0
    blr
}

asm void fn_80462038(void)
{
    nofralloc
    stwu r1, -0x1d0(r1)
    mflr r0
    lfs f3, 0x4(r4)
    lis r4, lbl_80755098@ha
    stw r0, 0x1d4(r1)
    addi r6, r1, 0xb4
    stfd f31, 0x1c0(r1)
    psq_st f31, 0x1c8(r1), 0, 0
    stfd f30, 0x1b0(r1)
    psq_st f30, 0x1b8(r1), 0, 0
    fmr f30, f2
    stfd f29, 0x1a0(r1)
    psq_st f29, 0x1a8(r1), 0, 0
    fmr f29, f1
    stw r31, 0x19c(r1)
    stw r30, 0x198(r1)
    mr r30, r3
    stw r29, 0x194(r1)
    stw r28, 0x190(r1)
    mr r28, r5
    psq_l f1, 0x528(r3), 0, 0
    lfs f2, 0x530(r3)
    stfs f2, 0xbc(r1)
    psq_st f1, 0x0(r6), 0, 0
    addi r6, r1, 0xa8
    psq_l f1, 0x534(r3), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    lfs f2, 0x53c(r3)
    lfs f0, 0xac(r1)
    stfs f2, 0xb0(r1)
    fsubs f1, f3, f0
    lfd f2, lbl_80755098@l(r4)
    bl fn_8068AEA8
    frsp f0, f1
    lfs f3, lbl_80886D78
    fcmpo cr0, f0, f3
    ble lbl_fn_80462038_00001644
    lfs f3, lbl_80886DBC
    fsubs f0, f0, f3
lbl_fn_80462038_00001644:
    lfs f3, lbl_80886DC0
    fcmpo cr0, f0, f3
    bge lbl_fn_80462038_00001658
    lfs f3, lbl_80886DBC
    fadds f0, f0, f3
lbl_fn_80462038_00001658:
    lfs f3, lbl_80886D78
    lwz r3, lbl_8087EFA8
    fdivs f3, f0, f3
    lfs f4, 0x570(r30)
    lfs f31, 0x3a4(r3)
    lfs f6, lbl_80886DD0
    lfs f5, lbl_80886D8C
    lfs f9, 0x56c(r30)
    fabs f7, f3
    lfs f3, lbl_80886DD4
    lfs f8, 0xac(r1)
    fmuls f30, f30, f31
    fmuls f4, f4, f3
    lfs f3, lbl_80886DD8
    frsp f7, f7
    stfs f4, 0x570(r30)
    fcmpo cr0, f4, f3
    fmuls f3, f7, f6
    fadds f3, f5, f3
    fmuls f9, f9, f3
    fmuls f3, f0, f9
    fadds f8, f8, f3
    stfs f8, 0xac(r1)
    bge lbl_fn_80462038_000016C0
    lfs f3, lbl_80886D60
    stfs f3, 0x570(r30)
lbl_fn_80462038_000016C0:
    lfs f3, lbl_80886D8C
    fcmpo cr0, f29, f3
    ble lbl_fn_80462038_000016D0
    fmr f29, f3
lbl_fn_80462038_000016D0:
    lfs f3, lbl_80886DDC
    fcmpo cr0, f29, f3
    ble lbl_fn_80462038_00001754
    fsubs f6, f29, f3
    lfs f5, lbl_80886DC8
    lfs f4, 0x570(r30)
    lfs f3, lbl_80886D94
    fdivs f29, f6, f5
    lfs f5, lbl_80886DE0
    fcmpo cr0, f4, f3
    fmuls f29, f29, f30
    bge lbl_fn_80462038_00001704
    lfs f5, lbl_80886D60
lbl_fn_80462038_00001704:
    lfs f4, lbl_80886D78
    lfs f3, lbl_80886D60
    fdivs f4, f0, f4
    fabs f4, f4
    frsp f4, f4
    fsubs f7, f4, f5
    fcmpo cr0, f7, f3
    bge lbl_fn_80462038_00001728
    fmr f7, f3
lbl_fn_80462038_00001728:
    lfs f6, lbl_80886D8C
    lfs f4, lbl_80886D98
    fsubs f5, f6, f5
    lfs f3, lbl_80886D60
    fdivs f7, f7, f5
    fnmsubs f4, f4, f7, f6
    fmuls f29, f29, f4
    fcmpo cr0, f29, f3
    bge lbl_fn_80462038_00001758
    fmr f29, f3
    b lbl_fn_80462038_00001758
lbl_fn_80462038_00001754:
    lfs f29, lbl_80886D60
lbl_fn_80462038_00001758:
    lfs f3, lbl_80886DE4
    lfs f4, lbl_80886DDC
    fmuls f6, f3, f0
    lfs f5, 0x580(r30)
    lfs f3, lbl_80886DE0
    fmuls f4, f4, f5
    lfs f0, lbl_80886DD8
    fmsubs f3, f3, f6, f4
    fadds f3, f5, f3
    stfs f3, 0x580(r30)
    fabs f3, f3
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80462038_00001798
    lfs f0, lbl_80886D60
    stfs f0, 0x580(r30)
lbl_fn_80462038_00001798:
    lfs f3, lbl_80886D64
    mr r3, r30
    lfs f4, 0x570(r30)
    lfs f0, lbl_80886DE8
    fmuls f3, f3, f4
    fmsubs f0, f0, f29, f3
    fadds f0, f4, f0
    stfs f0, 0x570(r30)
    lwz r12, 0x0(r30)
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
    lfs f3, 0x574(r30)
    lfs f4, lbl_80886D70
    lfs f0, 0x57c(r30)
    fmuls f3, f3, f4
    lfs f1, 0xac(r1)
    fmuls f0, f0, f4
    stfs f3, 0x574(r30)
    stfs f0, 0x57c(r30)
    bl fn_8068AD58
    frsp f4, f1
    lfs f3, 0x570(r30)
    lfs f0, lbl_80886D60
    lfs f1, 0xac(r1)
    fmuls f3, f3, f4
    stfs f0, 0xa0(r1)
    stfs f3, 0x9c(r1)
    bl fn_8068A850
    frsp f0, f1
    lfs f6, 0x570(r30)
    lfs f4, 0x9c(r1)
    lfs f3, 0xa0(r1)
    fmuls f5, f6, f0
    lfs f0, lbl_80886D8C
    fmuls f4, f4, f31
    fmuls f3, f3, f31
    fmuls f5, f5, f31
    stfs f4, 0x9c(r1)
    fcmpo cr0, f6, f0
    stfs f3, 0xa0(r1)
    stfs f5, 0xa4(r1)
    ble lbl_fn_80462038_00001860
    lfs f0, lbl_80886DA4
    fmuls f4, f4, f0
    fmuls f3, f3, f0
    fmuls f0, f5, f0
    stfs f4, 0x9c(r1)
    stfs f3, 0xa0(r1)
    stfs f0, 0xa4(r1)
lbl_fn_80462038_00001860:
    lwz r0, 0x958(r30)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_80462038_000018B0
    lwz r4, lbl_8087F0A8
    lis r0, 0x4330
    stw r0, 0x180(r1)
    lis r3, lbl_80755090@ha
    lwz r0, 0x30(r4)
    lfd f5, lbl_80755090@l(r3)
    mullw r0, r0, r0
    lfs f3, lbl_80886DEC
    lfs f0, 0x578(r30)
    xoris r0, r0, 0x8000
    stw r0, 0x184(r1)
    lfd f4, 0x180(r1)
    fsubs f4, f4, f5
    fdivs f3, f3, f4
    fmadds f0, f31, f3, f0
    stfs f0, 0x578(r30)
lbl_fn_80462038_000018B0:
    lfs f3, 0x9c(r1)
    addi r3, r30, 0x6b8
    lfs f0, 0x6b8(r30)
    lfs f6, 0xa0(r1)
    fadds f0, f3, f0
    lfs f4, 0xa4(r1)
    lfs f5, lbl_80886D74
    stfs f0, 0x9c(r1)
    lfs f0, lbl_80886D60
    lfs f3, 0x6bc(r30)
    fadds f3, f6, f3
    stfs f3, 0xa0(r1)
    lfs f3, 0x6c0(r30)
    fadds f3, f4, f3
    stfs f3, 0xa4(r1)
    lfs f4, 0x6b8(r30)
    lfs f3, 0x6c0(r30)
    fmuls f4, f4, f5
    stfs f0, 0x6bc(r30)
    fmuls f0, f3, f5
    stfs f4, 0x6b8(r30)
    stfs f0, 0x6c0(r30)
    bl fn_805F9940
    lfs f0, lbl_80886D90
    fcmpo cr0, f1, f0
    bge lbl_fn_80462038_00001928
    lfs f0, lbl_80886D60
    stfs f0, 0x6b8(r30)
    stfs f0, 0x6bc(r30)
    stfs f0, 0x6c0(r30)
lbl_fn_80462038_00001928:
    lfs f3, 0x9c(r1)
    lfs f0, 0x574(r30)
    lfs f5, 0xa0(r1)
    fadds f3, f3, f0
    lfs f0, lbl_80886DF0
    lfs f4, 0xa4(r1)
    stfs f3, 0x9c(r1)
    lfs f3, 0x578(r30)
    fadds f3, f5, f3
    stfs f3, 0xa0(r1)
    fcmpo cr0, f3, f0
    lfs f3, 0x57c(r30)
    fadds f3, f4, f3
    stfs f3, 0xa4(r1)
    bge lbl_fn_80462038_00001968
    stfs f0, 0xa0(r1)
lbl_fn_80462038_00001968:
    addi r5, r1, 0xb4
    li r0, 0x0
    lfs f2, 0xbc(r1)
    addi r3, r1, 0x90
    psq_l f1, 0x0(r5), 0, 0
    mr r4, r30
    psq_st f1, 0x0(r3), 0, 0
    addi r3, r1, 0x80
    li r31, 0x1
    stfs f2, 0x98(r1)
    stw r0, 0x164(r1)
    stw r0, 0x168(r1)
    stw r0, 0x16c(r1)
    stw r0, 0x170(r1)
    bl fn_80176548
    lwz r4, 0x48(r30)
    neg r0, r28
    or r3, r0, r28
    cmpwi r4, 0x0
    lis r0, 0x8000
    srawi r3, r3, 31
    and r7, r0, r3
    bne lbl_fn_80462038_000019CC
    ori r7, r7, 0x20
    b lbl_fn_80462038_000019E8
lbl_fn_80462038_000019CC:
    cmpwi r4, 0x3
    bne lbl_fn_80462038_000019DC
    ori r7, r7, 0x40
    b lbl_fn_80462038_000019E8
lbl_fn_80462038_000019DC:
    cmpwi r4, 0x2
    bne lbl_fn_80462038_000019E8
    ori r7, r7, 0x80
lbl_fn_80462038_000019E8:
    lwz r3, lbl_8087EE98
    addi r4, r1, 0x130
    lfs f1, 0x8c(r1)
    addi r5, r1, 0x80
    addi r6, r1, 0x9c
    addi r8, r30, 0x5b8
    li r9, 0x0
    bl fn_8004D388
    addi r5, r1, 0x140
    lfs f2, 0x148(r1)
    addi r4, r1, 0xb4
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    cmpwi r3, 0x0
    lfs f0, 0x8c(r1)
    stfs f2, 0xbc(r1)
    lfs f5, 0xb4(r1)
    lfs f3, 0x5a4(r30)
    lfs f4, 0xb8(r1)
    fsubs f3, f5, f3
    stfs f3, 0xb4(r1)
    lfs f3, 0x5a8(r30)
    fsubs f3, f4, f3
    stfs f3, 0xb8(r1)
    fsubs f5, f3, f0
    lfs f0, 0x5ac(r30)
    fsubs f0, f2, f0
    stfs f5, 0xb8(r1)
    stfs f0, 0xbc(r1)
    beq lbl_fn_80462038_00001A88
    lfs f0, 0xa0(r1)
    lfs f4, 0x94(r1)
    fneg f3, f0
    lfs f0, lbl_80886DF4
    fsubs f4, f4, f5
    fmuls f0, f0, f3
    fcmpo cr0, f4, f0
    bge lbl_fn_80462038_00001A88
    lfs f0, lbl_80886D60
    stfs f0, 0xa0(r1)
lbl_fn_80462038_00001A88:
    lfs f5, 0xbc(r1)
    addi r3, r1, 0x74
    lfs f3, 0x98(r1)
    lfs f4, 0xb8(r1)
    fsubs f5, f5, f3
    lfs f0, 0x94(r1)
    lfs f3, 0xa4(r1)
    fsubs f6, f4, f0
    lfs f4, 0xb4(r1)
    fadds f7, f3, f5
    lfs f3, 0x90(r1)
    lfs f0, 0xa0(r1)
    fsubs f3, f4, f3
    stfs f6, 0x6c(r1)
    fadds f8, f0, f6
    lfs f0, 0x9c(r1)
    lfs f30, lbl_80886D60
    fadds f0, f0, f3
    stfs f3, 0x68(r1)
    stfs f5, 0x70(r1)
    stfs f0, 0x74(r1)
    stfs f8, 0x78(r1)
    stfs f7, 0x7c(r1)
    bl fn_805F9920
    lfs f0, lbl_80886DD8
    fcmpo cr0, f1, f0
    ble lbl_fn_80462038_00001D10
    fcmpo cr0, f29, f0
    ble lbl_fn_80462038_00001D10
    addi r3, r1, 0x74
    addi r29, r1, 0x50
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r29
    lfs f2, 0x7c(r1)
    mr r4, r29
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x58(r1)
    bl fn_805F98D0
    lfs f2, 0x58(r1)
    addi r28, r1, 0x5c
    psq_l f1, 0x0(r29), 0, 0
    fabs f3, f2
    lfs f0, lbl_80886D80
    psq_st f1, 0x0(r28), 0, 0
    frsp f3, f3
    stfs f2, 0x64(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_80462038_00001B6C
    lfs f3, 0x5c(r1)
    lfs f0, lbl_80886D60
    fcmpo cr0, f3, f0
    ble lbl_fn_80462038_00001B60
    lfs f0, lbl_80886D84
    b lbl_fn_80462038_00001B64
lbl_fn_80462038_00001B60:
    lfs f0, lbl_80886D88
lbl_fn_80462038_00001B64:
    stfs f0, 0x48(r1)
    b lbl_fn_80462038_00001B80
lbl_fn_80462038_00001B6C:
    frsp f2, f2
    lfs f1, 0x5c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_80462038_00001B80:
    lfs f0, 0x48(r1)
    addi r3, r1, 0xc0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80886D60
    addi r4, r1, 0x38
    lfs f30, 0xc8(r1)
    mr r5, r4
    lfs f29, 0xc4(r1)
    addi r3, r1, 0xf0
    lfs f13, 0xc0(r1)
    lfs f12, 0xd8(r1)
    lfs f11, 0xd4(r1)
    lfs f10, 0xd0(r1)
    lfs f9, 0xe8(r1)
    lfs f8, 0xe4(r1)
    lfs f7, 0xe0(r1)
    lfs f6, 0xec(r1)
    lfs f5, 0xdc(r1)
    lfs f4, 0xcc(r1)
    lfs f0, lbl_80886D8C
    psq_l f1, 0x0(r28), 0, 0
    lfs f2, 0x64(r1)
    stfs f3, 0x120(r1)
    stfs f3, 0x124(r1)
    stfs f3, 0x128(r1)
    stfs f0, 0x12c(r1)
    stfs f13, 0x8(r1)
    stfs f29, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f13, 0xf0(r1)
    stfs f29, 0xf4(r1)
    stfs f30, 0xf8(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0x100(r1)
    stfs f11, 0x104(r1)
    stfs f12, 0x108(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0x110(r1)
    stfs f8, 0x114(r1)
    stfs f9, 0x118(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xfc(r1)
    stfs f5, 0x10c(r1)
    stfs f6, 0x11c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80886D80
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80462038_00001C9C
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80886D60
    fcmpo cr0, f3, f0
    ble lbl_fn_80462038_00001C8C
    lfs f0, lbl_80886D84
    b lbl_fn_80462038_00001C90
lbl_fn_80462038_00001C8C:
    lfs f0, lbl_80886D88
lbl_fn_80462038_00001C90:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_80462038_00001CB0
lbl_fn_80462038_00001C9C:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_80462038_00001CB0:
    addi r3, r1, 0x44
    lfs f4, lbl_80886D60
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_80755098@ha
    psq_st f1, 0x0(r28), 0, 0
    fmr f2, f4
    lfs f0, 0x538(r30)
    lfs f3, 0x60(r1)
    stfs f2, 0x64(r1)
    fsubs f1, f3, f0
    lfd f2, lbl_80755098@l(r3)
    stfs f4, 0x4c(r1)
    bl fn_8068AEA8
    frsp f30, f1
    lfs f0, lbl_80886D78
    fcmpo cr0, f30, f0
    ble lbl_fn_80462038_00001CFC
    lfs f0, lbl_80886DBC
    fsubs f30, f30, f0
lbl_fn_80462038_00001CFC:
    lfs f0, lbl_80886DC0
    fcmpo cr0, f30, f0
    bge lbl_fn_80462038_00001D10
    lfs f0, lbl_80886DBC
    fadds f30, f30, f0
lbl_fn_80462038_00001D10:
    lfs f0, lbl_80886DA4
    lfs f4, lbl_80886D94
    fmuls f30, f30, f0
    lfs f3, 0x584(r30)
    lfs f0, lbl_80886DF8
    fnmsubs f3, f4, f30, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80462038_00001D34
    b lbl_fn_80462038_00001D38
lbl_fn_80462038_00001D34:
    fmr f3, f0
lbl_fn_80462038_00001D38:
    lfs f4, lbl_80886DFC
    fcmpo cr0, f3, f4
    ble lbl_fn_80462038_00001D64
    lfs f4, lbl_80886D94
    lfs f3, 0x584(r30)
    lfs f0, lbl_80886DF8
    fnmsubs f4, f4, f30, f3
    fcmpo cr0, f4, f0
    bge lbl_fn_80462038_00001D60
    b lbl_fn_80462038_00001D64
lbl_fn_80462038_00001D60:
    fmr f4, f0
lbl_fn_80462038_00001D64:
    frsp f3, f4
    lfs f0, lbl_80886E00
    lwz r0, 0x54c(r30)
    fmuls f0, f3, f0
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    stfs f0, 0x584(r30)
    bne lbl_fn_80462038_00001D98
    lfs f3, 0xb8(r1)
    lfs f0, lbl_80886D60
    fcmpo cr0, f3, f0
    bge lbl_fn_80462038_00001D98
    stfs f0, 0xb8(r1)
lbl_fn_80462038_00001D98:
    addi r3, r1, 0xb4
    lfs f2, 0xbc(r1)
    psq_l f1, 0x0(r3), 0, 0
    cmpwi r31, 0x0
    psq_st f1, 0x528(r30), 0, 0
    stfs f2, 0x530(r30)
    beq lbl_fn_80462038_00001DC8
    addi r3, r1, 0xa8
    lfs f2, 0xb0(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x534(r30), 0, 0
    stfs f2, 0x53c(r30)
lbl_fn_80462038_00001DC8:
    lfs f2, 0xa4(r1)
    addi r3, r1, 0x9c
    psq_l f1, 0x0(r3), 0, 0
    fdivs f0, f2, f31
    psq_st f1, 0x574(r30), 0, 0
    lfs f3, 0x574(r30)
    stfs f0, 0x57c(r30)
    fdivs f0, f3, f31
    stfs f0, 0x574(r30)
    psq_l f31, 0x1c8(r1), 0, 0
    lfd f31, 0x1c0(r1)
    psq_l f30, 0x1b8(r1), 0, 0
    lfd f30, 0x1b0(r1)
    psq_l f29, 0x1a8(r1), 0, 0
    lfd f29, 0x1a0(r1)
    lwz r31, 0x19c(r1)
    lwz r30, 0x198(r1)
    lwz r29, 0x194(r1)
    lwz r28, 0x190(r1)
    lwz r0, 0x1d4(r1)
    mtlr r0
    addi r1, r1, 0x1d0
    blr
}
