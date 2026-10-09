#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_22(void);
extern void _savegpr_22(void);
extern void dtor_80084684(void);
extern void fn_8004D388(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_800897D8(void);
extern void fn_8008BBD8(void);
extern void fn_80091CFC(void);
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_800D246C(void);
extern void fn_800F29D0(void);
extern void fn_800F8548(void);
extern void fn_800F8C6C(void);
extern void fn_8012A288(void);
extern void fn_8013655C(void);
extern void fn_80148990(void);
extern void fn_8016E970(void);
extern void fn_80176548(void);
extern void fn_80219E6C(void);
extern void fn_802377B8(void);
extern void fn_8023780C(void);
extern void fn_8023781C(void);
extern void fn_80237874(void);
extern void fn_8031F2A4(void);
extern void fn_803234C8(void);
extern void fn_803234F4(void);
extern void fn_803235AC(void);
extern void fn_803235D8(void);
extern void fn_8035B694(void);
extern void fn_8035B78C(void);
extern void fn_80473E8C(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9940(void);
extern void fn_805F99F0(void);
extern void fn_805F9AB0(void);
extern void fn_80682428(void);
extern void fn_8068AEA4(void);
extern void fn_80695720(void);

/* External data declarations */
extern u8 lbl_80749A70[];
extern u8 lbl_80749D10[];
extern u8 lbl_80788B40[];
extern u8 lbl_80788B4C[];
extern u8 lbl_80788BD0[];
extern u8 lbl_807C7030[];
extern u8 lbl_807C8438[];
extern u8 lbl_807C8440[];

/* Small data declarations */
extern u32 lbl_8087D9E0;
extern u32 lbl_8087D9E4;
extern u32 lbl_8087EE98;
extern u32 lbl_8087EF10;
extern u32 lbl_8087F048;
extern u32 lbl_8087F400;
extern u32 lbl_8087F401;
extern u32 lbl_80884E48;
extern u32 lbl_80884E68;
extern u32 lbl_80884E70;
extern u32 lbl_80884E74;
extern u32 lbl_80884E84;
extern u32 lbl_80884E94;
extern u32 lbl_80884E9C;
extern u32 lbl_80884EA0;
extern u32 lbl_80884EA4;
extern u32 lbl_80884EA8;
extern u32 lbl_80884EAC;
extern u32 lbl_80884ED8;
extern u32 lbl_80884F00;
extern u32 lbl_80884F08;
extern u32 lbl_80884F0C;
extern u32 lbl_80884F10;
extern u32 lbl_80884F14;
extern u32 lbl_80884F18;
extern u32 lbl_80884F1C;
extern u32 lbl_80884F20;
extern u32 lbl_80884F24;

/* Function declarations */
void fn_80321724(void);
void fn_80321900(void);
void fn_80321BCC(void);
void fn_80321E20(void);
void fn_8032268C(void);
void fn_803227A0(void);
void fn_80322AD4(void);
void fn_80322C68(void);
void fn_80322E10(void);
void fn_80322F74(void);

asm void fn_80321724(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    stw r0, 0xd4(r1)
    addi r11, r1, 0x90
    stfd f31, 0xc0(r1)
    psq_st f31, 0xc8(r1), 0, 0
    stfd f30, 0xb0(r1)
    psq_st f30, 0xb8(r1), 0, 0
    stfd f29, 0xa0(r1)
    psq_st f29, 0xa8(r1), 0, 0
    stfd f28, 0x90(r1)
    psq_st f28, 0x98(r1), 0, 0
    bl _savegpr_22
    lis r24, lbl_80749A70@ha
    lfs f28, lbl_80884EA0
    lfs f29, lbl_80884E70
    mr r27, r3
    lfs f30, lbl_80884E48
    mr r28, r4
    lfs f31, lbl_80884F00
    mr r29, r5
    addi r23, r1, 0x50
    addi r24, r24, lbl_80749A70@l
    addi r31, r1, 0x40
    li r30, 0x0
    li r26, 0x0
    li r25, 0x0
    b lbl_fn_80321724_0000019C
lbl_fn_80321724_00000070:
    lwz r3, 0x21c(r27)
    addi r4, r24, 0x9
    lwz r3, 0x48(r3)
    lwzx r3, r3, r25
    lwz r22, 0x10(r3)
    mr r3, r22
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80321724_00000100
    lwz r0, 0x648(r27)
    cmpwi r0, 0x0
    bne lbl_fn_80321724_00000190
    add r5, r28, r26
    addi r3, r1, 0x30
    psq_l f1, 0x10(r5), 0, 0
    addi r4, r1, 0x14
    psq_l f2, 0x18(r5), 0, 0
    psq_st f2, 0x8(r23), 0, 0
    psq_st f1, 0x0(r23), 0, 0
    lfs f3, 0x584(r27)
    lfs f0, 0x580(r27)
    fnmsubs f1, f28, f3, f0
    stfs f29, 0x14(r1)
    stfs f30, 0x18(r1)
    stfs f30, 0x1c(r1)
    bl fn_805F9AB0
    mr r4, r23
    mr r5, r23
    addi r3, r1, 0x30
    bl fn_805F99F0
    psq_l f2, 0x8(r23), 0, 0
    add r3, r28, r26
    psq_l f1, 0x0(r23), 0, 0
    psq_st f1, 0x10(r3), 0, 0
    psq_st f2, 0x18(r3), 0, 0
    b lbl_fn_80321724_00000190
lbl_fn_80321724_00000100:
    mr r3, r22
    addi r4, r24, 0x1e
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80321724_00000190
    lwz r0, 0x648(r27)
    cmpwi r0, 0x0
    bne lbl_fn_80321724_00000190
    lwz r3, 0x12a4(r27)
    srwi. r0, r3, 31
    bne lbl_fn_80321724_00000190
    extrwi. r0, r3, 1, 25
    bne lbl_fn_80321724_00000190
    add r5, r28, r26
    addi r3, r1, 0x20
    psq_l f1, 0x10(r5), 0, 0
    addi r4, r1, 0x8
    psq_l f2, 0x18(r5), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    lfs f3, 0x580(r27)
    lfs f0, 0x584(r27)
    fmadds f1, f31, f3, f0
    stfs f29, 0x8(r1)
    stfs f30, 0xc(r1)
    stfs f30, 0x10(r1)
    bl fn_805F9AB0
    mr r4, r31
    mr r5, r31
    addi r3, r1, 0x20
    bl fn_805F99F0
    psq_l f2, 0x8(r31), 0, 0
    add r3, r28, r26
    psq_l f1, 0x0(r31), 0, 0
    psq_st f1, 0x10(r3), 0, 0
    psq_st f2, 0x18(r3), 0, 0
lbl_fn_80321724_00000190:
    addi r30, r30, 0x1
    addi r26, r26, 0x2c
    addi r25, r25, 0x4
lbl_fn_80321724_0000019C:
    cmpw r30, r29
    blt lbl_fn_80321724_00000070
    addi r11, r1, 0x90
    psq_l f31, 0xc8(r1), 0, 0
    lfd f31, 0xc0(r1)
    psq_l f30, 0xb8(r1), 0, 0
    lfd f30, 0xb0(r1)
    psq_l f29, 0xa8(r1), 0, 0
    lfd f29, 0xa0(r1)
    psq_l f28, 0x98(r1), 0, 0
    lfd f28, 0x90(r1)
    bl _restgpr_22
    lwz r0, 0xd4(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

asm void fn_80321900(void)
{
    nofralloc
    stwu r1, -0x1c0(r1)
    mflr r0
    stw r0, 0x1c4(r1)
    stw r31, 0x1bc(r1)
    stw r30, 0x1b8(r1)
    mr r30, r5
    stw r29, 0x1b4(r1)
    mr r29, r4
    stw r28, 0x1b0(r1)
    mr r28, r3
    addi r3, r3, 0x10d8
    bl fn_8012A288
    cmpwi r3, 0x0
    bne lbl_fn_80321900_00000488
    lwz r30, 0x10(r30)
    lis r31, lbl_80749A70@ha
    addi r31, r31, lbl_80749A70@l
    mr r3, r30
    addi r4, r31, 0x9
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80321900_000002B0
    lwz r0, 0x648(r28)
    cmpwi r0, 0x0
    bne lbl_fn_80321900_00000488
    lfs f9, 0x2c(r29)
    addi r3, r1, 0x180
    lfs f10, 0x1c(r29)
    li r4, 0x79
    lfs f0, lbl_80884E48
    lfs f11, 0xc(r29)
    stfs f0, 0x1c(r29)
    lfs f8, lbl_80884EA0
    stfs f0, 0xc(r29)
    stfs f0, 0x2c(r29)
    lfs f7, 0x584(r28)
    lfs f0, 0x580(r28)
    stfs f11, 0x20(r1)
    fnmsubs f1, f8, f7, f0
    stfs f10, 0x24(r1)
    stfs f9, 0x28(r1)
    bl fn_805F8E70
    mr r4, r29
    mr r5, r29
    addi r3, r1, 0x180
    bl fn_805F89F0
    lfs f8, 0x20(r1)
    lfs f7, 0x24(r1)
    lfs f0, 0x28(r1)
    stfs f8, 0xc(r29)
    stfs f7, 0x1c(r29)
    stfs f0, 0x2c(r29)
    b lbl_fn_80321900_00000488
lbl_fn_80321900_000002B0:
    mr r3, r30
    addi r4, r31, 0xe
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80321900_00000488
    lwz r0, 0x55c(r28)
    cmpwi r0, 0x8
    beq lbl_fn_80321900_00000488
    lfs f10, 0x2c(r29)
    addi r31, r1, 0x150
    lfs f9, lbl_80884E48
    lfs f11, 0x1c(r29)
    lfs f12, 0xc(r29)
    stfs f9, 0x1c(r29)
    lfs f8, lbl_80884E68
    stfs f9, 0xc(r29)
    lfs f0, lbl_80884E70
    stfs f9, 0x2c(r29)
    lfs f7, 0x14c4(r28)
    stfs f12, 0x14(r1)
    fmuls f1, f8, f7
    stfs f11, 0x18(r1)
    fcmpu cr0, f9, f1
    stfs f10, 0x1c(r1)
    stfs f9, 0x8(r1)
    stfs f7, 0xc(r1)
    stfs f1, 0x10(r1)
    stfs f9, 0x17c(r1)
    stfs f9, 0x174(r1)
    stfs f9, 0x170(r1)
    stfs f9, 0x16c(r1)
    stfs f9, 0x168(r1)
    stfs f9, 0x160(r1)
    stfs f9, 0x15c(r1)
    stfs f9, 0x158(r1)
    stfs f9, 0x154(r1)
    stfs f0, 0x178(r1)
    stfs f0, 0x164(r1)
    stfs f0, 0x150(r1)
    beq lbl_fn_80321900_000003A0
    addi r3, r1, 0xf0
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0xf0
    addi r5, r1, 0x120
    bl fn_805F89F0
    addi r3, r1, 0x120
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_80321900_000003A0:
    lfs f0, lbl_80884E48
    lfs f1, 0xc(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_80321900_00000400
    addi r3, r1, 0x90
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0x90
    addi r5, r1, 0xc0
    bl fn_805F89F0
    addi r3, r1, 0xc0
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_80321900_00000400:
    lfs f0, lbl_80884E48
    lfs f1, 0x8(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_80321900_00000460
    addi r3, r1, 0x30
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0x30
    addi r5, r1, 0x60
    bl fn_805F89F0
    addi r3, r1, 0x60
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_80321900_00000460:
    mr r4, r29
    mr r5, r29
    addi r3, r1, 0x150
    bl fn_805F89F0
    lfs f8, 0x14(r1)
    lfs f7, 0x18(r1)
    lfs f0, 0x1c(r1)
    stfs f8, 0xc(r29)
    stfs f7, 0x1c(r29)
    stfs f0, 0x2c(r29)
lbl_fn_80321900_00000488:
    lwz r0, 0x1c4(r1)
    lwz r31, 0x1bc(r1)
    lwz r30, 0x1b8(r1)
    lwz r29, 0x1b4(r1)
    lwz r28, 0x1b0(r1)
    mtlr r0
    addi r1, r1, 0x1c0
    blr
}

asm void fn_80321BCC(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r3
    lwz r0, 0x12a4(r3)
    lfs f7, 0x5b0(r3)
    extrwi. r0, r0, 1, 18
    stfs f7, 0x620(r3)
    beq lbl_fn_80321BCC_00000538
    lwz r0, 0x648(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80321BCC_000004F8
    lwz r0, 0x12a4(r3)
    srwi. r0, r0, 31
    bne lbl_fn_80321BCC_00000538
    lfs f0, lbl_80884E9C
    fadds f0, f7, f0
    stfs f0, 0x620(r3)
    b lbl_fn_80321BCC_00000538
lbl_fn_80321BCC_000004F8:
    lfs f6, lbl_80884E9C
    lfs f5, 0x500(r3)
    lfs f3, 0x570(r3)
    fmuls f0, f6, f5
    fcmpo cr0, f3, f0
    ble lbl_fn_80321BCC_00000538
    lfs f0, lbl_80884F08
    lfs f4, 0x508(r3)
    fmuls f0, f0, f5
    fcmpo cr0, f4, f0
    ble lbl_fn_80321BCC_00000538
    fnmsubs f3, f6, f5, f3
    fnmsubs f0, f6, f5, f4
    fdivs f0, f3, f0
    fmadds f0, f6, f0, f7
    stfs f0, 0x620(r3)
lbl_fn_80321BCC_00000538:
    lfs f5, 0x52c(r3)
    lis r4, lbl_80749A70@ha
    lfs f4, 0x5a8(r3)
    addi r4, r4, lbl_80749A70@l
    lfs f3, 0x528(r3)
    addi r6, r1, 0x20
    lfs f0, 0x5a4(r3)
    fadds f4, f5, f4
    lfs f8, 0x530(r3)
    addi r4, r4, 0x24
    fadds f0, f3, f0
    stfs f4, 0x24(r1)
    lfs f3, 0x620(r3)
    stfs f0, 0x20(r1)
    li r5, 0x0
    lfs f0, lbl_80884ED8
    psq_l f1, 0x0(r6), 0, 0
    fmuls f5, f3, f0
    psq_st f1, 0x614(r3), 0, 0
    lfs f0, 0x52c(r3)
    lfs f3, 0x618(r3)
    fadds f7, f0, f5
    lfs f4, 0x530(r3)
    fadds f0, f3, f5
    lfs f3, 0x5ac(r3)
    lfs f6, 0x528(r3)
    fadds f2, f4, f3
    stfs f5, 0x620(r3)
    stfs f0, 0x618(r3)
    stfs f2, 0x61c(r3)
    addi r3, r3, 0xb0
    stfs f2, 0x28(r1)
    stfs f6, 0x38(r1)
    stfs f7, 0x3c(r1)
    stfs f8, 0x40(r1)
    bl fn_80092814
    cmpwi r3, -0x1
    ble lbl_fn_80321BCC_0000061C
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    addi r5, r1, 0x14
    lfs f0, lbl_80884E70
    addi r4, r1, 0x2c
    add r3, r3, r0
    lfs f3, 0x1c(r3)
    lfs f4, 0xc(r3)
    stfs f4, 0x14(r1)
    lfs f2, 0x2c(r3)
    stfs f3, 0x18(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lfs f3, 0x30(r1)
    stfs f2, 0x1c(r1)
    fsubs f0, f3, f0
    stfs f2, 0x34(r1)
    stfs f0, 0x30(r1)
    b lbl_fn_80321BCC_00000650
lbl_fn_80321BCC_0000061C:
    addi r4, r1, 0x38
    lfs f2, 0x40(r1)
    addi r3, r1, 0x2c
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lfs f5, lbl_80884E9C
    lfs f4, 0x620(r31)
    lfs f3, 0x5b4(r31)
    lfs f0, 0x30(r1)
    fnmsubs f3, f5, f4, f3
    stfs f2, 0x34(r1)
    fadds f0, f0, f3
    stfs f0, 0x30(r1)
lbl_fn_80321BCC_00000650:
    addi r3, r1, 0x38
    lfs f2, 0x40(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r5, r1, 0x2c
    psq_st f1, 0x5f4(r31), 0, 0
    lis r3, lbl_80749A70@ha
    psq_l f1, 0x0(r5), 0, 0
    addi r3, r3, lbl_80749A70@l
    lfs f0, 0x620(r31)
    addi r4, r3, 0x9
    stfs f2, 0x5fc(r31)
    addi r3, r31, 0xb0
    lfs f2, 0x34(r1)
    li r5, 0x0
    psq_st f1, 0x600(r31), 0, 0
    stfs f2, 0x608(r31)
    stfs f0, 0x60c(r31)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80321BCC_000006A8
    li r5, 0x0
    b lbl_fn_80321BCC_000006B4
lbl_fn_80321BCC_000006A8:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r5, r3, r0
lbl_fn_80321BCC_000006B4:
    lfs f3, 0x1c(r5)
    addi r4, r1, 0x8
    lfs f4, 0xc(r5)
    addi r3, r31, 0x148c
    lfs f2, 0x2c(r5)
    lfs f0, lbl_80884E94
    stfs f4, 0x8(r1)
    stfs f3, 0xc(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x1494(r31)
    stfs f0, 0x1498(r31)
    lwz r31, 0x4c(r1)
    lwz r0, 0x54(r1)
    stfs f2, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80321E20(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    lfs f5, lbl_80884E48
    li r4, 0x0
    stw r0, 0x54(r1)
    addi r5, r1, 0x8
    fmr f2, f5
    lfs f4, lbl_80884EA4
    stw r31, 0x4c(r1)
    addi r6, r1, 0x30
    addi r7, r1, 0x20
    mr r31, r3
    stw r30, 0x48(r1)
    stw r29, 0x44(r1)
    lfs f3, 0x52c(r3)
    lfs f0, 0x5a8(r3)
    lwz r0, 0x62c(r3)
    fadds f6, f3, f0
    lfs f3, 0x528(r3)
    lfs f0, 0x5a4(r3)
    cmpwi r0, 0x0
    stfs f5, 0x8(r1)
    fadds f7, f3, f0
    stfs f5, 0xc(r1)
    lfs f3, 0x530(r3)
    psq_l f1, 0x0(r5), 0, 0
    lfs f0, 0x5ac(r3)
    stfs f7, 0x20(r1)
    fadds f3, f3, f0
    stfs f2, 0x38(r1)
    fmr f2, f3
    stfs f6, 0x24(r1)
    psq_st f1, 0x0(r6), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    lfs f0, 0x34(r1)
    stw r4, 0x2c(r1)
    fadds f0, f0, f4
    stfs f5, 0x10(r1)
    stfs f4, 0x3c(r1)
    stfs f3, 0x28(r1)
    stfs f2, 0x38(r1)
    stfs f0, 0x34(r1)
    beq lbl_fn_80321E20_000007B8
    lwz r0, 0x628(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80321E20_00000958
lbl_fn_80321E20_000007B8:
    lwz r0, 0x628(r3)
    li r30, 0x8
    cmplwi r0, 0x8
    bgt lbl_fn_80321E20_00000B00
    li r3, 0xb0
    li r4, 0x0
    la r5, lbl_8087D9E4
    la r6, lbl_8087D9E0
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_80148990@ha
    li r5, 0x0
    addi r4, r4, fn_80148990@l
    li r6, 0x14
    li r7, 0x8
    bl fn_80695720
    lwz r0, 0x62c(r31)
    mr r29, r3
    cmpwi r0, 0x0
    beq lbl_fn_80321E20_0000094C
    lwz r0, 0x624(r31)
    li r5, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_80321E20_0000081C
    mr r5, r0
lbl_fn_80321E20_0000081C:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_80321E20_00000938
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_80321E20_00000900
lbl_fn_80321E20_00000834:
    lwz r0, 0x62c(r31)
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
    lwz r0, 0x62c(r31)
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
    lwz r0, 0x62c(r31)
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
    lwz r0, 0x62c(r31)
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
    bdnz lbl_fn_80321E20_00000834
    andi. r5, r5, 0x3
    beq lbl_fn_80321E20_00000938
lbl_fn_80321E20_00000900:
    mtctr r5
lbl_fn_80321E20_00000904:
    lwz r0, 0x62c(r31)
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
    bdnz lbl_fn_80321E20_00000904
lbl_fn_80321E20_00000938:
    lwz r3, 0x62c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80321E20_0000094C
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80321E20_0000094C:
    stw r29, 0x62c(r31)
    stw r30, 0x628(r31)
    b lbl_fn_80321E20_00000B00
lbl_fn_80321E20_00000958:
    lwz r3, 0x624(r3)
    cmplw r3, r0
    blt lbl_fn_80321E20_00000B00
    slwi r30, r3, 1
    cmplw r0, r30
    bgt lbl_fn_80321E20_00000B00
    mulli r3, r30, 0x14
    li r4, 0x0
    la r5, lbl_8087D9E4
    la r6, lbl_8087D9E0
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_80148990@ha
    mr r7, r30
    addi r4, r4, fn_80148990@l
    li r5, 0x0
    li r6, 0x14
    bl fn_80695720
    lwz r0, 0x62c(r31)
    mr r29, r3
    cmpwi r0, 0x0
    beq lbl_fn_80321E20_00000AF8
    lwz r0, 0x624(r31)
    mr r5, r30
    cmplw r30, r0
    ble lbl_fn_80321E20_000009C8
    mr r5, r0
lbl_fn_80321E20_000009C8:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_80321E20_00000AE4
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_80321E20_00000AAC
lbl_fn_80321E20_000009E0:
    lwz r0, 0x62c(r31)
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
    lwz r0, 0x62c(r31)
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
    lwz r0, 0x62c(r31)
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
    lwz r0, 0x62c(r31)
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
    bdnz lbl_fn_80321E20_000009E0
    andi. r5, r5, 0x3
    beq lbl_fn_80321E20_00000AE4
lbl_fn_80321E20_00000AAC:
    mtctr r5
lbl_fn_80321E20_00000AB0:
    lwz r0, 0x62c(r31)
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
    bdnz lbl_fn_80321E20_00000AB0
lbl_fn_80321E20_00000AE4:
    lwz r3, 0x62c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80321E20_00000AF8
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80321E20_00000AF8:
    stw r29, 0x62c(r31)
    stw r30, 0x628(r31)
lbl_fn_80321E20_00000B00:
    lwz r0, 0x624(r31)
    addi r3, r1, 0x30
    psq_l f1, 0x0(r3), 0, 0
    lis r4, lbl_80749A70@ha
    mulli r5, r0, 0x14
    lwz r6, 0x62c(r31)
    lwz r0, 0x2c(r1)
    addi r4, r4, lbl_80749A70@l
    lfs f2, 0x38(r1)
    addi r3, r31, 0xb0
    stwux r0, r6, r5
    addi r4, r4, 0x24
    lfs f3, 0x3c(r1)
    li r5, 0x0
    psq_st f1, 0x4(r6), 0, 0
    lfs f0, lbl_80884EA4
    stfs f2, 0xc(r6)
    stfs f3, 0x10(r6)
    lwz r6, 0x624(r31)
    stfs f0, 0x3c(r1)
    addi r0, r6, 0x1
    stw r0, 0x624(r31)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80321E20_00000B6C
    li r5, 0x0
    b lbl_fn_80321E20_00000B78
lbl_fn_80321E20_00000B6C:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r5, r3, r0
lbl_fn_80321E20_00000B78:
    lfs f0, 0x1c(r5)
    addi r4, r1, 0x14
    lfs f3, 0xc(r5)
    addi r3, r1, 0x30
    lwz r0, 0x62c(r31)
    lfs f2, 0x2c(r5)
    stfs f3, 0x14(r1)
    cmpwi r0, 0x0
    stfs f0, 0x18(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0x1c(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x38(r1)
    beq lbl_fn_80321E20_00000BBC
    lwz r0, 0x628(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80321E20_00000D5C
lbl_fn_80321E20_00000BBC:
    lwz r0, 0x628(r31)
    li r30, 0x8
    cmplwi r0, 0x8
    bgt lbl_fn_80321E20_00000F04
    li r3, 0xb0
    li r4, 0x0
    la r5, lbl_8087D9E4
    la r6, lbl_8087D9E0
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_80148990@ha
    li r5, 0x0
    addi r4, r4, fn_80148990@l
    li r6, 0x14
    li r7, 0x8
    bl fn_80695720
    lwz r0, 0x62c(r31)
    mr r29, r3
    cmpwi r0, 0x0
    beq lbl_fn_80321E20_00000D50
    lwz r0, 0x624(r31)
    li r5, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_80321E20_00000C20
    mr r5, r0
lbl_fn_80321E20_00000C20:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_80321E20_00000D3C
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_80321E20_00000D04
lbl_fn_80321E20_00000C38:
    lwz r0, 0x62c(r31)
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
    lwz r0, 0x62c(r31)
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
    lwz r0, 0x62c(r31)
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
    lwz r0, 0x62c(r31)
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
    bdnz lbl_fn_80321E20_00000C38
    andi. r5, r5, 0x3
    beq lbl_fn_80321E20_00000D3C
lbl_fn_80321E20_00000D04:
    mtctr r5
lbl_fn_80321E20_00000D08:
    lwz r0, 0x62c(r31)
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
    bdnz lbl_fn_80321E20_00000D08
lbl_fn_80321E20_00000D3C:
    lwz r3, 0x62c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80321E20_00000D50
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80321E20_00000D50:
    stw r29, 0x62c(r31)
    stw r30, 0x628(r31)
    b lbl_fn_80321E20_00000F04
lbl_fn_80321E20_00000D5C:
    lwz r3, 0x624(r31)
    cmplw r3, r0
    blt lbl_fn_80321E20_00000F04
    slwi r30, r3, 1
    cmplw r0, r30
    bgt lbl_fn_80321E20_00000F04
    mulli r3, r30, 0x14
    li r4, 0x0
    la r5, lbl_8087D9E4
    la r6, lbl_8087D9E0
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_80148990@ha
    mr r7, r30
    addi r4, r4, fn_80148990@l
    li r5, 0x0
    li r6, 0x14
    bl fn_80695720
    lwz r0, 0x62c(r31)
    mr r29, r3
    cmpwi r0, 0x0
    beq lbl_fn_80321E20_00000EFC
    lwz r0, 0x624(r31)
    mr r5, r30
    cmplw r30, r0
    ble lbl_fn_80321E20_00000DCC
    mr r5, r0
lbl_fn_80321E20_00000DCC:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_80321E20_00000EE8
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_80321E20_00000EB0
lbl_fn_80321E20_00000DE4:
    lwz r0, 0x62c(r31)
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
    lwz r0, 0x62c(r31)
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
    lwz r0, 0x62c(r31)
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
    lwz r0, 0x62c(r31)
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
    bdnz lbl_fn_80321E20_00000DE4
    andi. r5, r5, 0x3
    beq lbl_fn_80321E20_00000EE8
lbl_fn_80321E20_00000EB0:
    mtctr r5
lbl_fn_80321E20_00000EB4:
    lwz r0, 0x62c(r31)
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
    bdnz lbl_fn_80321E20_00000EB4
lbl_fn_80321E20_00000EE8:
    lwz r3, 0x62c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80321E20_00000EFC
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80321E20_00000EFC:
    stw r29, 0x62c(r31)
    stw r30, 0x628(r31)
lbl_fn_80321E20_00000F04:
    lwz r0, 0x624(r31)
    addi r5, r1, 0x30
    lwz r4, 0x62c(r31)
    mulli r3, r0, 0x14
    lwz r0, 0x2c(r1)
    stwux r0, r3, r4
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x4(r3), 0, 0
    lfs f2, 0x38(r1)
    stfs f2, 0xc(r3)
    lfs f0, 0x3c(r1)
    stfs f0, 0x10(r3)
    lwz r3, 0x624(r31)
    lwz r0, 0x12a8(r31)
    addi r3, r3, 0x1
    stw r3, 0x624(r31)
    rlwinm r0, r0, 0, 3, 1
    stw r0, 0x12a8(r31)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8032268C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    lwz r0, 0x624(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8032268C_00001068
    lwz r5, 0x62c(r3)
    lis r4, lbl_80749A70@ha
    lfs f6, lbl_80884EA4
    addi r4, r4, lbl_80749A70@l
    stfs f6, 0x10(r5)
    addi r6, r1, 0x14
    addi r4, r4, 0x24
    li r5, 0x0
    lfs f5, 0x52c(r3)
    lfs f4, 0x5a8(r3)
    lfs f3, 0x528(r3)
    fadds f5, f5, f4
    lfs f0, 0x5a4(r3)
    lfs f4, 0x530(r3)
    fadds f3, f3, f0
    lfs f0, 0x5ac(r3)
    stfs f5, 0x18(r1)
    fadds f2, f4, f0
    lwz r7, 0x62c(r3)
    stfs f3, 0x14(r1)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x4(r7), 0, 0
    stfs f2, 0xc(r7)
    lwz r6, 0x62c(r3)
    stfs f2, 0x1c(r1)
    lfs f3, 0x8(r6)
    lfs f0, 0x10(r6)
    fadds f0, f3, f0
    stfs f0, 0x8(r6)
    lwz r6, 0x62c(r3)
    addi r3, r3, 0xb0
    stfs f6, 0x24(r6)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8032268C_0000101C
    li r4, 0x0
    b lbl_fn_8032268C_00001028
lbl_fn_8032268C_0000101C:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r4, r3, r0
lbl_fn_8032268C_00001028:
    lfs f0, 0x1c(r4)
    addi r3, r1, 0x8
    lfs f3, 0xc(r4)
    lfs f2, 0x2c(r4)
    stfs f0, 0xc(r1)
    lwz r4, 0x62c(r31)
    stfs f3, 0x8(r1)
    lfs f0, lbl_80884EA4
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x18(r4), 0, 0
    stfs f2, 0x20(r4)
    lwz r3, 0x62c(r31)
    stfs f2, 0x10(r1)
    lfs f3, 0x1c(r3)
    fsubs f0, f3, f0
    stfs f0, 0x1c(r3)
lbl_fn_8032268C_00001068:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_803227A0(void)
{
    nofralloc
    stwu r1, -0x140(r1)
    mflr r0
    li r4, 0x6
    stw r0, 0x144(r1)
    li r0, 0x7
    stfd f31, 0x130(r1)
    psq_st f31, 0x138(r1), 0, 0
    stfd f30, 0x120(r1)
    psq_st f30, 0x128(r1), 0, 0
    stw r31, 0x11c(r1)
    stw r30, 0x118(r1)
    mr r30, r3
    stw r0, 0x58c(r3)
    bl fn_8016E970
    li r0, 0x4
    stw r0, 0x560(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f3, lbl_80884E70
    li r0, 0x1
    lfs f0, lbl_80884E9C
    li r4, 0x0
    stw r3, 0x590(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80884E48
    li r5, 0x21
    stw r0, 0x3fc(r30)
    li r6, 0x1
    lfs f2, lbl_80884E68
    li r7, 0x0
    stfs f3, 0x2fc(r30)
    li r8, 0x1
    stfs f0, 0x2e8(r30)
    bl fn_80097C08
    lwz r5, 0x1574(r30)
    cmpwi r5, 0x0
    beq lbl_fn_803227A0_00001158
    lfs f3, 0x530(r5)
    addi r4, r1, 0x68
    lfs f0, 0x530(r30)
    addi r3, r30, 0x157c
    lfs f5, 0x52c(r5)
    fsubs f2, f3, f0
    lfs f4, 0x52c(r30)
    lfs f3, 0x528(r5)
    lfs f0, 0x528(r30)
    fsubs f4, f5, f4
    stfs f2, 0x70(r1)
    fsubs f0, f3, f0
    stfs f4, 0x6c(r1)
    stfs f0, 0x68(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x1584(r30)
    b lbl_fn_803227A0_000011A4
lbl_fn_803227A0_00001158:
    lfs f3, lbl_80884E48
    addi r3, r1, 0xe8
    lfs f0, lbl_80884E70
    li r4, 0x79
    stfs f3, 0x5c(r1)
    stfs f3, 0x60(r1)
    stfs f0, 0x64(r1)
    lfs f1, 0x538(r30)
    bl fn_805F8E70
    addi r4, r1, 0x5c
    addi r3, r1, 0xe8
    mr r5, r4
    bl fn_805F93C0
    addi r3, r1, 0x5c
    lfs f2, 0x64(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r30, 0x157c
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x1584(r30)
lbl_fn_803227A0_000011A4:
    lfs f0, lbl_80884E48
    addi r3, r30, 0x157c
    stfs f0, 0x1580(r30)
    bl fn_805F9940
    addi r3, r30, 0x157c
    stfs f1, 0x1578(r30)
    mr r4, r3
    bl fn_805F98D0
    lfs f2, 0x1584(r30)
    addi r3, r30, 0x157c
    lfs f3, lbl_80884ED8
    addi r31, r1, 0x50
    fabs f4, f2
    stfs f3, 0x1588(r30)
    psq_l f1, 0x0(r3), 0, 0
    lfs f0, lbl_80884EA8
    frsp f3, f4
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x58(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_803227A0_0000121C
    lfs f3, 0x50(r1)
    lfs f0, lbl_80884E48
    fcmpo cr0, f3, f0
    ble lbl_fn_803227A0_00001210
    lfs f0, lbl_80884E74
    b lbl_fn_803227A0_00001214
lbl_fn_803227A0_00001210:
    lfs f0, lbl_80884EAC
lbl_fn_803227A0_00001214:
    stfs f0, 0x48(r1)
    b lbl_fn_803227A0_00001230
lbl_fn_803227A0_0000121C:
    frsp f2, f2
    lfs f1, 0x50(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_803227A0_00001230:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x78
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80884E48
    addi r4, r1, 0x38
    lfs f30, 0x80(r1)
    mr r5, r4
    lfs f31, 0x7c(r1)
    addi r3, r1, 0xa8
    lfs f13, 0x78(r1)
    lfs f12, 0x90(r1)
    lfs f11, 0x8c(r1)
    lfs f10, 0x88(r1)
    lfs f9, 0xa0(r1)
    lfs f8, 0x9c(r1)
    lfs f7, 0x98(r1)
    lfs f6, 0xa4(r1)
    lfs f5, 0x94(r1)
    lfs f4, 0x84(r1)
    lfs f0, lbl_80884E70
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x58(r1)
    stfs f3, 0xd8(r1)
    stfs f3, 0xdc(r1)
    stfs f3, 0xe0(r1)
    stfs f0, 0xe4(r1)
    stfs f13, 0x8(r1)
    stfs f31, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f13, 0xa8(r1)
    stfs f31, 0xac(r1)
    stfs f30, 0xb0(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xb8(r1)
    stfs f11, 0xbc(r1)
    stfs f12, 0xc0(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0xc8(r1)
    stfs f8, 0xcc(r1)
    stfs f9, 0xd0(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xb4(r1)
    stfs f5, 0xc4(r1)
    stfs f6, 0xd4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80884EA8
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_803227A0_0000134C
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80884E48
    fcmpo cr0, f3, f0
    ble lbl_fn_803227A0_0000133C
    lfs f0, lbl_80884E74
    b lbl_fn_803227A0_00001340
lbl_fn_803227A0_0000133C:
    lfs f0, lbl_80884EAC
lbl_fn_803227A0_00001340:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_803227A0_00001360
lbl_fn_803227A0_0000134C:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_803227A0_00001360:
    addi r3, r1, 0x44
    lfs f2, lbl_80884E48
    psq_l f1, 0x0(r3), 0, 0
    li r0, 0x14
    psq_st f1, 0x0(r31), 0, 0
    lfs f0, 0x54(r1)
    stfs f0, 0x538(r30)
    stw r0, 0x1570(r30)
    psq_l f31, 0x138(r1), 0, 0
    lfd f31, 0x130(r1)
    psq_l f30, 0x128(r1), 0, 0
    lfd f30, 0x120(r1)
    lwz r31, 0x11c(r1)
    lwz r30, 0x118(r1)
    lwz r0, 0x144(r1)
    stfs f2, 0x4c(r1)
    stfs f2, 0x58(r1)
    mtlr r0
    addi r1, r1, 0x140
    blr
}

asm void fn_80322AD4(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stw r31, 0x7c(r1)
    mr r31, r3
    lwz r4, 0x1570(r3)
    subic. r0, r4, 0x1
    stw r0, 0x1570(r3)
    bge lbl_fn_80322AD4_00001408
    lwz r0, 0x55c(r3)
    li r4, 0x0
    stw r4, 0x58c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_80322AD4_000013FC
    lwz r0, 0x560(r3)
    cmpwi r0, 0x4
    bne lbl_fn_80322AD4_000013FC
    li r4, 0x4
    bl fn_8016E970
lbl_fn_80322AD4_000013FC:
    li r0, 0x0
    stw r0, 0x1560(r31)
    b lbl_fn_80322AD4_00001530
lbl_fn_80322AD4_00001408:
    lfs f4, 0x1588(r3)
    lfs f3, lbl_80884E84
    lfs f0, lbl_80884F0C
    fadds f6, f4, f3
    stfs f6, 0x1588(r3)
    fcmpo cr0, f6, f0
    ble lbl_fn_80322AD4_00001428
    b lbl_fn_80322AD4_0000142C
lbl_fn_80322AD4_00001428:
    fmr f6, f0
lbl_fn_80322AD4_0000142C:
    frsp f5, f6
    lfs f4, 0x1584(r3)
    lfs f3, 0x1580(r3)
    li r0, 0x0
    lfs f0, 0x157c(r3)
    mr r4, r31
    stfs f6, 0x1588(r3)
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    addi r3, r1, 0x8
    fmuls f0, f0, f5
    stfs f4, 0x20(r1)
    addi r5, r31, 0x528
    stfs f0, 0x18(r1)
    stfs f3, 0x1c(r1)
    stw r0, 0x5c(r1)
    stw r0, 0x60(r1)
    stw r0, 0x64(r1)
    stw r0, 0x68(r1)
    bl fn_80176548
    lis r7, 0x8000
    lwz r3, lbl_8087EE98
    lfs f1, 0x14(r1)
    addi r4, r1, 0x28
    addi r5, r1, 0x8
    addi r6, r1, 0x18
    addi r7, r7, 0x80
    addi r8, r31, 0x5b8
    li r9, 0x0
    bl fn_8004D388
    addi r3, r1, 0x38
    lfs f2, 0x40(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x528(r31), 0, 0
    lfs f0, 0x5ac(r31)
    lfs f6, 0x528(r31)
    lfs f5, 0x5a4(r31)
    fsubs f0, f2, f0
    lfs f4, 0x52c(r31)
    lfs f3, 0x5a8(r31)
    fsubs f5, f6, f5
    stfs f0, 0x530(r31)
    fsubs f4, f4, f3
    lfs f3, 0x1588(r31)
    lfs f0, lbl_80884E94
    stfs f5, 0x528(r31)
    fcmpo cr0, f3, f0
    stfs f4, 0x52c(r31)
    lfs f0, 0x14(r1)
    fsubs f0, f4, f0
    stfs f0, 0x52c(r31)
    cror eq, gt, eq
    bne lbl_fn_80322AD4_00001530
    li r3, 0x686
    bl fn_80219E6C
    mr r7, r3
    lwz r3, lbl_8087F048
    lwz r8, 0x590(r31)
    mr r6, r31
    lfs f1, lbl_80884E48
    li r4, 0x0
    li r5, 0x0
    li r9, 0x1e
    li r10, -0x1
    bl fn_800F8C6C
lbl_fn_80322AD4_00001530:
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_80322C68(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    bl fn_8035B694
    lfs f0, lbl_80884F10
    lis r3, lbl_80788BD0@ha
    li r30, 0x0
    stfs f0, 0x14b0(r31)
    addi r3, r3, lbl_80788BD0@l
    stw r3, 0x0(r31)
    addi r3, r31, 0x15fc
    stfs f0, 0x14b4(r31)
    stfs f0, 0x14b8(r31)
    stw r30, 0x14bc(r31)
    stw r30, 0x14c0(r31)
    stw r30, 0x14c4(r31)
    stw r30, 0x14c8(r31)
    stw r30, 0x14cc(r31)
    stw r30, 0x14d0(r31)
    stw r30, 0x14d4(r31)
    stfs f0, 0x14dc(r31)
    stfs f0, 0x14e0(r31)
    stfs f0, 0x14e4(r31)
    stfs f0, 0x14e8(r31)
    stfs f0, 0x14ec(r31)
    stfs f0, 0x14f0(r31)
    stw r30, 0x14f4(r31)
    stw r30, 0x1524(r31)
    stfs f0, 0x1528(r31)
    stw r30, 0x1544(r31)
    stw r30, 0x1548(r31)
    stw r30, 0x154c(r31)
    stw r30, 0x1550(r31)
    stw r30, 0x1554(r31)
    stw r30, 0x1558(r31)
    stw r30, 0x155c(r31)
    stw r30, 0x1560(r31)
    stw r30, 0x1564(r31)
    stw r30, 0x1568(r31)
    stw r30, 0x156c(r31)
    stw r30, 0x1570(r31)
    stw r30, 0x1598(r31)
    stw r30, 0x15cc(r31)
    stw r30, 0x15d0(r31)
    stw r30, 0x15d4(r31)
    stw r30, 0x15d8(r31)
    stw r30, 0x15dc(r31)
    stw r30, 0x15e0(r31)
    stw r30, 0x15e4(r31)
    stw r30, 0x15e8(r31)
    stw r30, 0x15ec(r31)
    stw r30, 0x15f0(r31)
    stw r30, 0x15f4(r31)
    bl fn_802377B8
    lwz r3, 0x12a4(r31)
    lis r9, lbl_807C7030@ha
    lwz r0, 0x958(r31)
    lis r4, lbl_80749D10@ha
    lfs f0, lbl_80884F10
    oris r3, r3, 0x40
    ori r0, r0, 0x10
    stw r3, 0x12a4(r31)
    addi r9, r9, lbl_807C7030@l
    lwz r5, 0x1548(r31)
    stw r30, 0x1608(r31)
    addi r10, r31, 0x152c
    lwz r6, 0x1554(r31)
    subf r7, r5, r5
    stw r30, 0x160c(r31)
    addi r8, r31, 0x1538
    lwz r5, 0x1560(r31)
    subf r6, r6, r6
    stw r0, 0x958(r31)
    addi r4, r4, lbl_80749D10@l
    lwz r3, 0x156c(r31)
    subf r5, r5, r5
    stw r30, 0x1524(r31)
    subf r0, r3, r3
    addi r3, r31, 0x15fc
    stfs f0, 0x1528(r31)
    psq_l f1, 0x0(r9), 0, 0
    lfs f2, 0x8(r9)
    stfs f2, 0x1534(r31)
    psq_st f1, 0x0(r10), 0, 0
    psq_l f1, 0x0(r9), 0, 0
    lfs f2, 0x8(r9)
    stfs f2, 0x1540(r31)
    psq_st f1, 0x0(r8), 0, 0
    stw r7, 0x1548(r31)
    stw r6, 0x1554(r31)
    stw r5, 0x1560(r31)
    stw r0, 0x156c(r31)
    bl fn_8023780C
    lwz r0, 0x14a8(r31)
    mr r3, r31
    oris r0, r0, 0x8000
    stw r0, 0x14a8(r31)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80322E10(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_fn_80322E10_00001830
    addic. r0, r3, 0x1608
    beq lbl_fn_80322E10_00001738
    lwz r4, 0x1608(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80322E10_00001738
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_80322E10_00001738
    bl fn_800897D8
lbl_fn_80322E10_00001738:
    addic. r31, r29, 0x15fc
    beq lbl_fn_80322E10_00001758
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_80322E10_00001758
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80322E10_00001758:
    addic. r31, r29, 0x1524
    beq lbl_fn_80322E10_00001814
    addic. r4, r31, 0x44
    beq lbl_fn_80322E10_00001790
    beq lbl_fn_80322E10_00001790
    beq lbl_fn_80322E10_00001790
    beq lbl_fn_80322E10_00001790
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_80322E10_00001790
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_80322E10_00001790:
    addic. r4, r31, 0x38
    beq lbl_fn_80322E10_000017BC
    beq lbl_fn_80322E10_000017BC
    beq lbl_fn_80322E10_000017BC
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_80322E10_000017BC
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_80322E10_000017BC:
    addic. r4, r31, 0x2c
    beq lbl_fn_80322E10_000017E8
    beq lbl_fn_80322E10_000017E8
    beq lbl_fn_80322E10_000017E8
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_80322E10_000017E8
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_80322E10_000017E8:
    addic. r4, r31, 0x20
    beq lbl_fn_80322E10_00001814
    beq lbl_fn_80322E10_00001814
    beq lbl_fn_80322E10_00001814
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_80322E10_00001814
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_80322E10_00001814:
    mr r3, r29
    li r4, 0x0
    bl fn_8035B78C
    cmpwi r30, 0x0
    ble lbl_fn_80322E10_00001830
    mr r3, r29
    bl dtor_80084684
lbl_fn_80322E10_00001830:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80322F74(void)
{
    nofralloc
    stwu r1, -0x270(r1)
    mflr r0
    stw r0, 0x274(r1)
    stw r31, 0x26c(r1)
    mr r31, r3
    stw r30, 0x268(r1)
    li r30, 0x1
    bl fn_8013655C
    cmpwi r3, 0x0
    beq lbl_fn_80322F74_0000187C
    li r30, 0x0
lbl_fn_80322F74_0000187C:
    lwz r3, 0x1438(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80322F74_0000189C
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_80322F74_0000189C
    li r30, 0x0
lbl_fn_80322F74_0000189C:
    addi r3, r31, 0x15fc
    bl fn_80237874
    cmpwi r3, 0x0
    beq lbl_fn_80322F74_000018B0
    li r30, 0x0
lbl_fn_80322F74_000018B0:
    cmpwi r30, 0x0
    beq lbl_fn_80322F74_00001D88
    lwz r0, 0x7ec(r31)
    lis r4, lbl_80788B40@ha
    lfs f4, lbl_80884F14
    li r3, 0x0
    ori r0, r0, 0x1c0
    lfs f3, lbl_80884F18
    oris r0, r0, 0x1
    lfs f0, lbl_80884F1C
    ori r0, r0, 0x8219
    stfs f4, 0x56c(r31)
    oris r0, r0, 0x280
    stw r0, 0x7ec(r31)
    stfs f3, 0x500(r31)
    stfs f0, 0x508(r31)
    lwzu r9, lbl_80788B40@l(r4)
    lbz r0, lbl_8087F401
    lwz r8, 0x4(r4)
    lwz r7, 0x8(r4)
    extsb. r0, r0
    stw r9, 0x200(r1)
    stw r8, 0x204(r1)
    stw r7, 0x208(r1)
    stw r9, 0x78(r1)
    stw r8, 0x7c(r1)
    stw r7, 0x80(r1)
    stw r9, 0x38(r1)
    stw r8, 0x3c(r1)
    stw r7, 0x40(r1)
    stw r9, 0x1c8(r1)
    stw r8, 0x1cc(r1)
    stw r7, 0x1d0(r1)
    stw r9, 0x1bc(r1)
    stw r8, 0x1c0(r1)
    stw r7, 0x1c4(r1)
    stw r9, 0x1b0(r1)
    stw r8, 0x1b4(r1)
    stw r7, 0x1b8(r1)
    stw r9, 0x210(r1)
    stw r8, 0x214(r1)
    stw r7, 0x218(r1)
    stw r31, 0x21c(r1)
    stw r9, 0x28(r1)
    stw r8, 0x2c(r1)
    stw r7, 0x30(r1)
    stw r31, 0x34(r1)
    stw r9, 0x220(r1)
    stw r8, 0x224(r1)
    stw r7, 0x228(r1)
    stw r31, 0x22c(r1)
    stw r9, 0x68(r1)
    stw r8, 0x6c(r1)
    stw r7, 0x70(r1)
    stw r31, 0x74(r1)
    stw r9, 0x130(r1)
    stw r8, 0x134(r1)
    stw r7, 0x138(r1)
    stw r31, 0x13c(r1)
    stw r3, 0x250(r1)
    stw r9, 0x1a0(r1)
    stw r8, 0x1a4(r1)
    stw r7, 0x1a8(r1)
    stw r31, 0x1ac(r1)
    bne lbl_fn_80322F74_00001A0C
    lis r6, lbl_807C8440@ha
    lis r4, fn_803235AC@ha
    lis r3, fn_803235D8@ha
    li r0, 0x1
    addi r3, r3, fn_803235D8@l
    addi r5, r6, lbl_807C8440@l
    addi r4, r4, fn_803235AC@l
    stw r9, 0x140(r1)
    stw r8, 0x144(r1)
    stw r7, 0x148(r1)
    stw r31, 0x14c(r1)
    stw r9, 0x170(r1)
    stw r8, 0x174(r1)
    stw r7, 0x178(r1)
    stw r31, 0x17c(r1)
    stw r9, 0x160(r1)
    stw r8, 0x164(r1)
    stw r7, 0x168(r1)
    stw r31, 0x16c(r1)
    stw r4, 0x4(r5)
    stw r3, lbl_807C8440@l(r6)
    stb r0, lbl_8087F401
lbl_fn_80322F74_00001A0C:
    lwz r6, 0x68(r1)
    addi r3, r1, 0x190
    lwz r5, 0x6c(r1)
    lwz r4, 0x70(r1)
    lwz r0, 0x74(r1)
    stw r6, 0x150(r1)
    stw r5, 0x154(r1)
    stw r4, 0x158(r1)
    stw r0, 0x15c(r1)
    stw r6, 0x190(r1)
    stw r5, 0x194(r1)
    stw r4, 0x198(r1)
    stw r0, 0x19c(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_80322F74_00001A90
    addic. r0, r1, 0x254
    lwz r5, 0x190(r1)
    lwz r4, 0x194(r1)
    lwz r3, 0x198(r1)
    lwz r0, 0x19c(r1)
    stw r5, 0x180(r1)
    stw r4, 0x184(r1)
    stw r3, 0x188(r1)
    stw r0, 0x18c(r1)
    beq lbl_fn_80322F74_00001A88
    stw r5, 0x254(r1)
    stw r4, 0x258(r1)
    stw r3, 0x25c(r1)
    stw r0, 0x260(r1)
lbl_fn_80322F74_00001A88:
    li r0, 0x1
    b lbl_fn_80322F74_00001A94
lbl_fn_80322F74_00001A90:
    li r0, 0x0
lbl_fn_80322F74_00001A94:
    cmpwi r0, 0x0
    beq lbl_fn_80322F74_00001AAC
    lis r3, lbl_807C8440@ha
    addi r3, r3, lbl_807C8440@l
    stw r3, 0x250(r1)
    b lbl_fn_80322F74_00001AB4
lbl_fn_80322F74_00001AAC:
    li r0, 0x0
    stw r0, 0x250(r1)
lbl_fn_80322F74_00001AB4:
    addi r3, r31, 0xb0
    addi r4, r1, 0x250
    bl fn_800F29D0
    addic. r3, r1, 0x250
    beq lbl_fn_80322F74_00001AFC
    lwz r4, 0x250(r1)
    cmpwi r4, 0x0
    beq lbl_fn_80322F74_00001AFC
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_80322F74_00001AF4
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80322F74_00001AF4:
    li r0, 0x0
    stw r0, 0x250(r1)
lbl_fn_80322F74_00001AFC:
    lis r30, lbl_80749D10@ha
    addi r3, r31, 0xb0
    addi r30, r30, lbl_80749D10@l
    addi r4, r30, 0x16
    bl fn_80091CFC
    addi r3, r31, 0xb0
    addi r4, r30, 0x1b
    bl fn_80091CFC
    lbz r0, lbl_8087F400
    lis r4, lbl_80788B4C@ha
    lwzu r9, lbl_80788B4C@l(r4)
    li r3, 0x0
    extsb. r0, r0
    stw r9, 0x1d4(r1)
    lwz r8, 0x4(r4)
    lwz r7, 0x8(r4)
    stw r8, 0x1d8(r1)
    stw r7, 0x1dc(r1)
    stw r9, 0x58(r1)
    stw r8, 0x5c(r1)
    stw r7, 0x60(r1)
    stw r9, 0x18(r1)
    stw r8, 0x1c(r1)
    stw r7, 0x20(r1)
    stw r9, 0x120(r1)
    stw r8, 0x124(r1)
    stw r7, 0x128(r1)
    stw r9, 0x114(r1)
    stw r8, 0x118(r1)
    stw r7, 0x11c(r1)
    stw r9, 0x108(r1)
    stw r8, 0x10c(r1)
    stw r7, 0x110(r1)
    stw r9, 0x1e0(r1)
    stw r8, 0x1e4(r1)
    stw r7, 0x1e8(r1)
    stw r31, 0x1ec(r1)
    stw r9, 0x8(r1)
    stw r8, 0xc(r1)
    stw r7, 0x10(r1)
    stw r31, 0x14(r1)
    stw r9, 0x1f0(r1)
    stw r8, 0x1f4(r1)
    stw r7, 0x1f8(r1)
    stw r31, 0x1fc(r1)
    stw r9, 0x48(r1)
    stw r8, 0x4c(r1)
    stw r7, 0x50(r1)
    stw r31, 0x54(r1)
    stw r9, 0x88(r1)
    stw r8, 0x8c(r1)
    stw r7, 0x90(r1)
    stw r31, 0x94(r1)
    stw r3, 0x23c(r1)
    stw r9, 0xf8(r1)
    stw r8, 0xfc(r1)
    stw r7, 0x100(r1)
    stw r31, 0x104(r1)
    bne lbl_fn_80322F74_00001C40
    lis r6, lbl_807C8438@ha
    lis r4, fn_803234C8@ha
    lis r3, fn_803234F4@ha
    li r0, 0x1
    addi r3, r3, fn_803234F4@l
    addi r5, r6, lbl_807C8438@l
    addi r4, r4, fn_803234C8@l
    stw r9, 0x98(r1)
    stw r8, 0x9c(r1)
    stw r7, 0xa0(r1)
    stw r31, 0xa4(r1)
    stw r9, 0xc8(r1)
    stw r8, 0xcc(r1)
    stw r7, 0xd0(r1)
    stw r31, 0xd4(r1)
    stw r9, 0xb8(r1)
    stw r8, 0xbc(r1)
    stw r7, 0xc0(r1)
    stw r31, 0xc4(r1)
    stw r4, 0x4(r5)
    stw r3, lbl_807C8438@l(r6)
    stb r0, lbl_8087F400
lbl_fn_80322F74_00001C40:
    lwz r6, 0x48(r1)
    addi r3, r1, 0xe8
    lwz r5, 0x4c(r1)
    lwz r4, 0x50(r1)
    lwz r0, 0x54(r1)
    stw r6, 0xa8(r1)
    stw r5, 0xac(r1)
    stw r4, 0xb0(r1)
    stw r0, 0xb4(r1)
    stw r6, 0xe8(r1)
    stw r5, 0xec(r1)
    stw r4, 0xf0(r1)
    stw r0, 0xf4(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_80322F74_00001CC4
    addic. r0, r1, 0x240
    lwz r5, 0xe8(r1)
    lwz r4, 0xec(r1)
    lwz r3, 0xf0(r1)
    lwz r0, 0xf4(r1)
    stw r5, 0xd8(r1)
    stw r4, 0xdc(r1)
    stw r3, 0xe0(r1)
    stw r0, 0xe4(r1)
    beq lbl_fn_80322F74_00001CBC
    stw r5, 0x240(r1)
    stw r4, 0x244(r1)
    stw r3, 0x248(r1)
    stw r0, 0x24c(r1)
lbl_fn_80322F74_00001CBC:
    li r0, 0x1
    b lbl_fn_80322F74_00001CC8
lbl_fn_80322F74_00001CC4:
    li r0, 0x0
lbl_fn_80322F74_00001CC8:
    cmpwi r0, 0x0
    beq lbl_fn_80322F74_00001CE0
    lis r3, lbl_807C8438@ha
    addi r3, r3, lbl_807C8438@l
    stw r3, 0x23c(r1)
    b lbl_fn_80322F74_00001CE8
lbl_fn_80322F74_00001CE0:
    li r0, 0x0
    stw r0, 0x23c(r1)
lbl_fn_80322F74_00001CE8:
    addi r3, r31, 0xb0
    addi r4, r1, 0x23c
    bl fn_8031F2A4
    addic. r3, r1, 0x23c
    beq lbl_fn_80322F74_00001D30
    lwz r4, 0x23c(r1)
    cmpwi r4, 0x0
    beq lbl_fn_80322F74_00001D30
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_80322F74_00001D28
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80322F74_00001D28:
    li r0, 0x0
    stw r0, 0x23c(r1)
lbl_fn_80322F74_00001D30:
    lfs f3, lbl_80884F20
    addi r4, r1, 0x230
    lfs f0, lbl_80884F24
    addi r5, r31, 0x10fc
    lwz r3, 0x1438(r31)
    lfs f2, lbl_80884F10
    stfs f3, 0x230(r1)
    cmpwi r3, 0x0
    stfs f0, 0x234(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0x238(r1)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x1104(r31)
    beq lbl_fn_80322F74_00001D80
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x1438(r31)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_80322F74_00001D80:
    li r3, 0x1
    b lbl_fn_80322F74_00001D8C
lbl_fn_80322F74_00001D88:
    li r3, 0x0
lbl_fn_80322F74_00001D8C:
    lwz r0, 0x274(r1)
    lwz r31, 0x26c(r1)
    lwz r30, 0x268(r1)
    mtlr r0
    addi r1, r1, 0x270
    blr
}
