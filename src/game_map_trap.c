#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void fn_80097C08(void);
extern void fn_80097D40(void);
extern void fn_80097D7C(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_80106878(void);
extern void fn_8010CA34(void);
extern void fn_8012DB04(void);
extern void fn_802097C4(void);
extern void fn_803EA77C(void);
extern void fn_80473F18(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9940(void);
extern void fn_80680CF8(void);
extern void fn_8068AEA4(void);

/* External data declarations */
extern u8 lbl_80738F68[];
extern u8 lbl_80738F88[];
extern u8 lbl_80738FB8[];
extern u8 lbl_8077D200[];
extern u8 lbl_8077D280[];
extern u8 lbl_8077D300[];
extern u8 lbl_8077D380[];
extern u8 lbl_8077D400[];
extern u8 lbl_8077D578[];

/* Small data declarations */
extern u32 lbl_8087EFA8;
extern u32 lbl_8087F048;
extern u32 lbl_8087F498;
extern u32 lbl_8087F610;
extern u32 lbl_8087F9C0;
extern u32 lbl_80881E90;
extern u32 lbl_80881E94;
extern u32 lbl_80881EA8;
extern u32 lbl_80881EB0;
extern u32 lbl_80881EC0;
extern u32 lbl_80881EC4;
extern u32 lbl_80881EC8;
extern u32 lbl_80881ECC;
extern u32 lbl_80881ED4;
extern u32 lbl_80881ED8;
extern u32 lbl_80881EDC;
extern u32 lbl_80881EE0;
extern u32 lbl_80881EF4;
extern u32 lbl_80881EFC;
extern u32 lbl_80881F00;
extern u32 lbl_80881F04;
extern u32 lbl_80881F08;
extern u32 lbl_80881F0C;
extern u32 lbl_80881F10;
extern u32 lbl_80881F14;
extern u32 lbl_80881F18;
extern u32 lbl_80881F1C;
extern u32 lbl_80881F20;
extern u32 lbl_80881F24;
extern u32 lbl_80881F28;
extern u32 lbl_80881F2C;
extern u32 lbl_80881F30;

/* Function declarations */
void fn_8018B090(void);
void fn_8018B48C(void);
void fn_8018B610(void);
void fn_8018B6A0(void);
void fn_8018B87C(void);
void fn_8018BB7C(void);
void fn_8018BD74(void);
void fn_8018C084(void);
void fn_8018C0EC(void);
void fn_8018C2E0(void);
void fn_8018C650(void);
void fn_8018C6B8(void);
void fn_8018C84C(void);

asm void fn_8018B090(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    stfd f31, 0x100(r1)
    psq_st f31, 0x108(r1), 0, 0
    stfd f30, 0xf0(r1)
    psq_st f30, 0xf8(r1), 0, 0
    stfd f29, 0xe0(r1)
    psq_st f29, 0xe8(r1), 0, 0
    stw r31, 0xdc(r1)
    mr r31, r3
    stw r30, 0xd8(r1)
    stw r29, 0xd4(r1)
    lwz r4, 0x4(r3)
    lwz r0, 0x674(r4)
    cmpwi r0, 0x0
    bge lbl_fn_8018B090_0000004C
    li r3, 0x1
    b lbl_fn_8018B090_000003C8
lbl_fn_8018B090_0000004C:
    lfs f3, lbl_80881EC0
    addi r30, r4, 0xb0
    lfs f0, 0x2e4(r4)
    lfs f4, 0x2e8(r4)
    fcmpo cr0, f0, f3
    bge lbl_fn_8018B090_000000CC
    fadds f0, f0, f4
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_8018B090_000000CC
    addi r29, r4, 0x528
    bl fn_80680CF8
    lis r5, 0x5555
    lis r4, lbl_80738F68@ha
    addi r0, r5, 0x5556
    lfs f1, lbl_80881EC4
    mulhw r8, r0, r3
    addi r4, r4, lbl_80738F68@l
    mr r5, r29
    li r6, 0x0
    li r7, -0x1
    srwi r0, r8, 31
    add r0, r8, r0
    mulli r0, r0, 0x3
    subf r0, r0, r3
    addi r3, r1, 0x8
    slwi r0, r0, 2
    lwzx r4, r4, r0
    bl fn_800C344C
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_8018B090_000000CC:
    lwz r3, 0x4(r31)
    lfs f31, lbl_80881ED4
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8018B090_00000158
    lwz r3, lbl_8087F9C0
    lwz r0, 0x28(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8018B090_00000158
    lwz r0, 0x22c(r30)
    cmpwi r0, 0x162
    beq lbl_fn_8018B090_00000104
    cmpwi r0, 0x163
    bne lbl_fn_8018B090_00000158
lbl_fn_8018B090_00000104:
    lfs f3, 0x234(r30)
    lfs f0, lbl_80881EFC
    fcmpo cr0, f3, f0
    ble lbl_fn_8018B090_0000012C
    lfs f0, lbl_80881EA8
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_8018B090_0000012C
    lfs f31, lbl_80881EC4
    b lbl_fn_8018B090_00000158
lbl_fn_8018B090_0000012C:
    lfs f29, 0x234(r30)
    mr r3, r30
    li r4, 0x0
    bl fn_80097D7C
    lfs f0, lbl_80881F00
    fsubs f0, f1, f0
    fcmpo cr0, f29, f0
    ble lbl_fn_8018B090_00000158
    lwz r3, 0x4(r31)
    lfs f0, lbl_80881ED4
    stfs f0, 0x570(r3)
lbl_fn_8018B090_00000158:
    lwz r3, 0x4(r31)
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8018B090_000001B4
    lwz r3, 0x50(r3)
    subis r0, r3, 0xa
    cmplwi r0, 0xae76
    bne lbl_fn_8018B090_000001B4
    lwz r0, 0x22c(r30)
    cmpwi r0, 0x156
    beq lbl_fn_8018B090_0000018C
    cmpwi r0, 0x157
    bne lbl_fn_8018B090_000001B4
lbl_fn_8018B090_0000018C:
    lfs f3, 0x234(r30)
    lfs f0, lbl_80881F04
    fcmpo cr0, f3, f0
    bge lbl_fn_8018B090_000001B4
    lfs f0, lbl_80881F0C
    fcmpo cr0, f3, f0
    ble lbl_fn_8018B090_000001B0
    lfs f31, lbl_80881EC4
    b lbl_fn_8018B090_000001B4
lbl_fn_8018B090_000001B0:
    lfs f31, lbl_80881F08
lbl_fn_8018B090_000001B4:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8018B090_000001E4
    lwz r0, 0xc(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8018B090_000001E4
    li r0, 0x1
    stw r0, 0xc(r31)
lbl_fn_8018B090_000001E4:
    lfs f2, 0x18(r31)
    addi r30, r1, 0x54
    psq_l f1, 0x10(r31), 0, 0
    fabs f3, f2
    lfs f0, lbl_80881ED8
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0x5c(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_8018B090_00000230
    lfs f3, 0x54(r1)
    lfs f0, lbl_80881ED4
    fcmpo cr0, f3, f0
    ble lbl_fn_8018B090_00000224
    lfs f0, lbl_80881EDC
    b lbl_fn_8018B090_00000228
lbl_fn_8018B090_00000224:
    lfs f0, lbl_80881EE0
lbl_fn_8018B090_00000228:
    stfs f0, 0x4c(r1)
    b lbl_fn_8018B090_00000244
lbl_fn_8018B090_00000230:
    frsp f2, f2
    lfs f1, 0x54(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x4c(r1)
lbl_fn_8018B090_00000244:
    lfs f0, 0x4c(r1)
    addi r3, r1, 0x60
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80881ED4
    addi r4, r1, 0x3c
    lfs f29, 0x68(r1)
    mr r5, r4
    lfs f30, 0x64(r1)
    addi r3, r1, 0x90
    lfs f13, 0x60(r1)
    lfs f12, 0x78(r1)
    lfs f11, 0x74(r1)
    lfs f10, 0x70(r1)
    lfs f9, 0x88(r1)
    lfs f8, 0x84(r1)
    lfs f7, 0x80(r1)
    lfs f6, 0x8c(r1)
    lfs f5, 0x7c(r1)
    lfs f4, 0x6c(r1)
    lfs f0, lbl_80881EC4
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x5c(r1)
    stfs f3, 0xc0(r1)
    stfs f3, 0xc4(r1)
    stfs f3, 0xc8(r1)
    stfs f0, 0xcc(r1)
    stfs f13, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f29, 0x14(r1)
    stfs f13, 0x90(r1)
    stfs f30, 0x94(r1)
    stfs f29, 0x98(r1)
    stfs f10, 0x18(r1)
    stfs f11, 0x1c(r1)
    stfs f12, 0x20(r1)
    stfs f10, 0xa0(r1)
    stfs f11, 0xa4(r1)
    stfs f12, 0xa8(r1)
    stfs f7, 0x24(r1)
    stfs f8, 0x28(r1)
    stfs f9, 0x2c(r1)
    stfs f7, 0xb0(r1)
    stfs f8, 0xb4(r1)
    stfs f9, 0xb8(r1)
    stfs f4, 0x30(r1)
    stfs f5, 0x34(r1)
    stfs f6, 0x38(r1)
    stfs f4, 0x9c(r1)
    stfs f5, 0xac(r1)
    stfs f6, 0xbc(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x44(r1)
    bl fn_805F9750
    lfs f2, 0x44(r1)
    lfs f0, lbl_80881ED8
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8018B090_00000360
    lfs f3, 0x40(r1)
    lfs f0, lbl_80881ED4
    fcmpo cr0, f3, f0
    ble lbl_fn_8018B090_00000350
    lfs f0, lbl_80881EDC
    b lbl_fn_8018B090_00000354
lbl_fn_8018B090_00000350:
    lfs f0, lbl_80881EE0
lbl_fn_8018B090_00000354:
    fneg f0, f0
    stfs f0, 0x48(r1)
    b lbl_fn_8018B090_00000374
lbl_fn_8018B090_00000360:
    lfs f1, 0x40(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x48(r1)
lbl_fn_8018B090_00000374:
    lfs f0, lbl_80881ED4
    addi r3, r1, 0x48
    psq_l f1, 0x0(r3), 0, 0
    mr r4, r30
    fmr f2, f0
    psq_st f1, 0x0(r30), 0, 0
    fmr f1, f31
    li r5, 0x0
    stfs f2, 0x5c(r1)
    lfs f2, lbl_80881EC4
    lwz r3, 0x4(r31)
    stfs f0, 0x50(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    lwz r4, 0x4(r31)
    li r3, 0x0
    lfs f0, lbl_80881ED4
    stfs f0, 0x580(r4)
    stfs f0, 0x584(r4)
lbl_fn_8018B090_000003C8:
    lwz r0, 0x114(r1)
    psq_l f31, 0x108(r1), 0, 0
    lfd f31, 0x100(r1)
    psq_l f30, 0xf8(r1), 0, 0
    lfd f30, 0xf0(r1)
    psq_l f29, 0xe8(r1), 0, 0
    lfd f29, 0xe0(r1)
    lwz r31, 0xdc(r1)
    lwz r30, 0xd8(r1)
    lwz r29, 0xd4(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_8018B48C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r6, 0x4330
    stw r0, 0x34(r1)
    xoris r0, r5, 0x8000
    lis r5, lbl_80738FB8@ha
    stfd f31, 0x20(r1)
    lfd f2, lbl_80738FB8@l(r5)
    lis r5, lbl_8077D400@ha
    psq_st f31, 0x28(r1), 0, 0
    addi r5, r5, lbl_8077D400@l
    lfs f31, lbl_80881EC4
    stw r0, 0xc(r1)
    li r0, 0xc
    stw r6, 0x8(r1)
    stw r31, 0x1c(r1)
    lfd f0, 0x8(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    fsubs f0, f0, f2
    stw r4, 0x4(r3)
    stw r5, 0x0(r3)
    stfs f0, 0x8(r3)
    stw r0, 0x560(r4)
    lwz r4, 0x4(r3)
    stw r6, 0x10(r1)
    lwz r5, 0x7e0(r4)
    addi r3, r4, 0x7d4
    addi r31, r4, 0xb0
    rlwinm r0, r5, 0, 25, 25
    cmplwi r0, 0x40
    bne lbl_fn_8018B48C_000004E8
    lwz r0, 0xf98(r4)
    lwz r4, 0xf94(r4)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    xoris r4, r4, 0x8000
    lfs f3, lbl_80881EC8
    stw r4, 0x14(r1)
    lfd f0, 0x8(r1)
    lfd f1, 0x10(r1)
    fsubs f0, f0, f2
    fsubs f1, f1, f2
    fdivs f0, f1, f0
    fsubs f0, f31, f0
    fsubs f0, f31, f0
    fcmpo cr0, f3, f0
    ble lbl_fn_8018B48C_000004C0
    b lbl_fn_8018B48C_000004E4
lbl_fn_8018B48C_000004C0:
    stw r4, 0x14(r1)
    stw r0, 0xc(r1)
    lfd f1, 0x10(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f1, f2
    fsubs f0, f0, f2
    fdivs f0, f1, f0
    fsubs f0, f31, f0
    fsubs f3, f31, f0
lbl_fn_8018B48C_000004E4:
    fmuls f31, f31, f3
lbl_fn_8018B48C_000004E8:
    rlwinm r0, r5, 0, 16, 16
    cmplwi r0, 0x8000
    bne lbl_fn_8018B48C_000004FC
    lfs f0, lbl_80881ECC
    fmuls f31, f31, f0
lbl_fn_8018B48C_000004FC:
    bl fn_8012DB04
    lwz r3, 0x4(r30)
    fmuls f31, f31, f1
    lwz r0, 0x7e8(r3)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    bne lbl_fn_8018B48C_00000524
    lwz r3, lbl_8087F048
    bl fn_8010CA34
    fmuls f31, f31, f1
lbl_fn_8018B48C_00000524:
    li r0, 0x1
    stw r0, 0x34c(r31)
    lfs f0, lbl_80881EC4
    mr r3, r31
    stfs f0, 0x24c(r31)
    li r4, 0x0
    lfs f1, lbl_80881ED4
    li r5, 0x173
    stfs f31, 0x238(r31)
    li r6, 0x0
    lfs f2, lbl_80881F10
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    psq_l f31, 0x28(r1), 0, 0
    mr r3, r30
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8018B610(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    psq_st f31, 0x18(r1), 0, 0
    stw r31, 0xc(r1)
    lwz r5, lbl_8087EFA8
    lfs f0, 0x8(r3)
    lfs f1, 0x3a4(r5)
    lwz r6, 0x4(r3)
    fsubs f0, f0, f1
    addi r31, r6, 0xb0
    stfs f0, 0x8(r3)
    mr r3, r31
    lfs f31, 0x2e4(r6)
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    ble lbl_fn_8018B610_000005F0
    lfs f1, lbl_80881ED4
    mr r3, r31
    lfs f2, lbl_80881F10
    li r4, 0x0
    li r5, 0x174
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
lbl_fn_8018B610_000005F0:
    psq_l f31, 0x18(r1), 0, 0
    li r3, 0x0
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8018B6A0(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    lfs f3, lbl_80881ED4
    stw r0, 0x74(r1)
    lfs f0, lbl_80881EC4
    stw r31, 0x6c(r1)
    mr r31, r3
    addi r3, r1, 0x30
    stw r30, 0x68(r1)
    mr r30, r5
    stw r29, 0x64(r1)
    mr r29, r4
    stfs f3, 0x20(r1)
    stfs f3, 0x24(r1)
    stfs f0, 0x28(r1)
    lfs f1, 0x538(r4)
    li r4, 0x79
    bl fn_805F8E70
    addi r4, r1, 0x20
    addi r3, r1, 0x30
    mr r5, r4
    bl fn_805F93C0
    lis r3, lbl_8077D578@ha
    li r7, 0x0
    addi r3, r3, lbl_8077D578@l
    stw r3, 0x0(r31)
    addi r9, r1, 0x20
    lis r5, lbl_8077D380@ha
    stw r29, 0x4(r31)
    addi r5, r5, lbl_8077D380@l
    li r3, 0x6
    li r0, 0x1
    stw r7, 0x8(r31)
    li r4, 0x0
    lfs f0, lbl_80881EC4
    li r6, 0x0
    stw r7, 0xc(r31)
    li r7, 0x0
    li r8, 0x1
    psq_l f1, 0x0(r9), 0, 0
    lfs f2, 0x28(r1)
    stfs f2, 0x18(r31)
    lfs f2, 0x8(r30)
    psq_st f1, 0x10(r31), 0, 0
    psq_l f1, 0x0(r30), 0, 0
    psq_st f1, 0x1c(r31), 0, 0
    lfs f1, lbl_80881ED4
    stfs f2, 0x24(r31)
    lfs f2, lbl_80881F10
    stw r5, 0x0(r31)
    stw r3, 0x560(r29)
    lwz r3, 0x4(r31)
    addi r3, r3, 0xb0
    stw r0, 0x34c(r3)
    stfs f0, 0x24c(r3)
    stfs f0, 0x238(r3)
    lwz r5, 0x4(r31)
    lwz r5, 0x4d8(r5)
    bl fn_80097C08
    lwz r4, 0x4(r31)
    addi r30, r1, 0x14
    lfs f0, 0x24(r31)
    addi r5, r1, 0x8
    lfs f2, 0x530(r4)
    mr r3, r30
    psq_l f1, 0x528(r4), 0, 0
    mr r4, r30
    psq_st f1, 0x28(r31), 0, 0
    fsubs f6, f0, f2
    lfs f5, 0x20(r31)
    lfs f4, 0x2c(r31)
    lfs f3, 0x1c(r31)
    lfs f0, 0x28(r31)
    fsubs f4, f5, f4
    stfs f2, 0x30(r31)
    fmr f2, f6
    fsubs f0, f3, f0
    stfs f4, 0xc(r1)
    stfs f0, 0x8(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f6, 0x10(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x1c(r1)
    bl fn_805F98D0
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x1c(r1)
    lwz r3, 0x4(r31)
    psq_st f1, 0x10(r31), 0, 0
    addi r3, r3, 0xb0
    stfs f2, 0x18(r31)
    lwz r4, 0x22c(r3)
    bl fn_80097D40
    bl fn_80473F18
    bl fn_802097C4
    stw r3, 0x8(r31)
    lwz r0, lbl_8087F498
    cmpwi r0, 0x0
    beq lbl_fn_8018B6A0_000007CC
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    subf. r0, r4, r0
    bne lbl_fn_8018B6A0_000007CC
    lwz r3, lbl_8087F498
    li r5, 0x20
    lwz r4, 0x4(r31)
    li r6, 0x0
    lfs f1, lbl_80881EC4
    lfs f2, lbl_80881EB0
    bl fn_803EA77C
lbl_fn_8018B6A0_000007CC:
    mr r3, r31
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    lwz r29, 0x64(r1)
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_8018B87C(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    stfd f31, 0x110(r1)
    psq_st f31, 0x118(r1), 0, 0
    lfs f31, lbl_80881ED4
    stfd f30, 0x100(r1)
    psq_st f30, 0x108(r1), 0, 0
    lfs f30, lbl_80881EC4
    stfd f29, 0xf0(r1)
    psq_st f29, 0xf8(r1), 0, 0
    stfd f28, 0xe0(r1)
    psq_st f28, 0xe8(r1), 0, 0
    stw r31, 0xdc(r1)
    stw r30, 0xd8(r1)
    mr r30, r3
    lwz r31, 0x4(r3)
    lfs f0, 0x24(r3)
    lfs f3, 0x530(r31)
    lfs f5, 0x52c(r31)
    fsubs f6, f3, f0
    lfs f4, 0x20(r3)
    lfs f0, 0x1c(r3)
    addi r3, r1, 0x5c
    lfs f3, 0x528(r31)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x60(r1)
    stfs f0, 0x5c(r1)
    stfs f6, 0x64(r1)
    bl fn_805F9940
    lwz r3, 0x4(r30)
    lfs f0, lbl_80881F14
    lfs f3, 0x8e4(r3)
    fsubs f0, f3, f0
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_8018B87C_000008A0
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_80881F18
    fcmpo cr0, f3, f0
    bge lbl_fn_8018B87C_000008A0
    lfs f0, lbl_80881F1C
    lfs f31, lbl_80881EC4
    fmuls f30, f30, f0
lbl_fn_8018B87C_000008A0:
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8018B87C_000008D0
    lwz r0, 0xc(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8018B87C_000008D0
    li r0, 0x1
    stw r0, 0xc(r30)
lbl_fn_8018B87C_000008D0:
    lfs f2, 0x18(r30)
    addi r31, r1, 0x50
    psq_l f1, 0x10(r30), 0, 0
    fabs f3, f2
    lfs f0, lbl_80881ED8
    psq_st f1, 0x0(r31), 0, 0
    frsp f3, f3
    stfs f2, 0x58(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_8018B87C_0000091C
    lfs f3, 0x50(r1)
    lfs f0, lbl_80881ED4
    fcmpo cr0, f3, f0
    ble lbl_fn_8018B87C_00000910
    lfs f0, lbl_80881EDC
    b lbl_fn_8018B87C_00000914
lbl_fn_8018B87C_00000910:
    lfs f0, lbl_80881EE0
lbl_fn_8018B87C_00000914:
    stfs f0, 0x48(r1)
    b lbl_fn_8018B87C_00000930
lbl_fn_8018B87C_0000091C:
    frsp f2, f2
    lfs f1, 0x50(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_8018B87C_00000930:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x68
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80881ED4
    addi r4, r1, 0x38
    lfs f28, 0x70(r1)
    mr r5, r4
    lfs f29, 0x6c(r1)
    addi r3, r1, 0x98
    lfs f13, 0x68(r1)
    lfs f12, 0x80(r1)
    lfs f11, 0x7c(r1)
    lfs f10, 0x78(r1)
    lfs f9, 0x90(r1)
    lfs f8, 0x8c(r1)
    lfs f7, 0x88(r1)
    lfs f6, 0x94(r1)
    lfs f5, 0x84(r1)
    lfs f4, 0x74(r1)
    lfs f0, lbl_80881EC4
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x58(r1)
    stfs f3, 0xc8(r1)
    stfs f3, 0xcc(r1)
    stfs f3, 0xd0(r1)
    stfs f0, 0xd4(r1)
    stfs f13, 0x8(r1)
    stfs f29, 0xc(r1)
    stfs f28, 0x10(r1)
    stfs f13, 0x98(r1)
    stfs f29, 0x9c(r1)
    stfs f28, 0xa0(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xa8(r1)
    stfs f11, 0xac(r1)
    stfs f12, 0xb0(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0xb8(r1)
    stfs f8, 0xbc(r1)
    stfs f9, 0xc0(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xa4(r1)
    stfs f5, 0xb4(r1)
    stfs f6, 0xc4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80881ED8
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8018B87C_00000A4C
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80881ED4
    fcmpo cr0, f3, f0
    ble lbl_fn_8018B87C_00000A3C
    lfs f0, lbl_80881EDC
    b lbl_fn_8018B87C_00000A40
lbl_fn_8018B87C_00000A3C:
    lfs f0, lbl_80881EE0
lbl_fn_8018B87C_00000A40:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_8018B87C_00000A60
lbl_fn_8018B87C_00000A4C:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_8018B87C_00000A60:
    lfs f0, lbl_80881ED4
    addi r3, r1, 0x44
    psq_l f1, 0x0(r3), 0, 0
    mr r4, r31
    fmr f2, f0
    psq_st f1, 0x0(r31), 0, 0
    fmr f1, f31
    li r5, 0x0
    stfs f2, 0x58(r1)
    fmr f2, f30
    lwz r3, 0x4(r30)
    stfs f0, 0x4c(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    lwz r4, 0x4(r30)
    li r3, 0x0
    lfs f0, lbl_80881ED4
    stfs f0, 0x580(r4)
    stfs f0, 0x584(r4)
    psq_l f31, 0x118(r1), 0, 0
    lfd f31, 0x110(r1)
    psq_l f30, 0x108(r1), 0, 0
    lfd f30, 0x100(r1)
    psq_l f29, 0xf8(r1), 0, 0
    lfd f29, 0xf0(r1)
    psq_l f28, 0xe8(r1), 0, 0
    lfd f28, 0xe0(r1)
    lwz r31, 0xdc(r1)
    lwz r30, 0xd8(r1)
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_8018BB7C(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    lfs f3, lbl_80881ED4
    stw r0, 0x74(r1)
    lfs f0, lbl_80881EC4
    stw r31, 0x6c(r1)
    mr r31, r3
    addi r3, r1, 0x30
    stw r30, 0x68(r1)
    mr r30, r6
    stw r29, 0x64(r1)
    mr r29, r5
    stw r28, 0x60(r1)
    mr r28, r4
    stfs f3, 0x20(r1)
    stfs f3, 0x24(r1)
    stfs f0, 0x28(r1)
    lfs f1, 0x538(r4)
    li r4, 0x79
    bl fn_805F8E70
    addi r4, r1, 0x20
    addi r3, r1, 0x30
    mr r5, r4
    bl fn_805F93C0
    lis r3, lbl_8077D578@ha
    li r7, 0x0
    addi r3, r3, lbl_8077D578@l
    stw r3, 0x0(r31)
    addi r9, r1, 0x20
    lis r5, lbl_8077D300@ha
    stw r28, 0x4(r31)
    addi r5, r5, lbl_8077D300@l
    li r3, 0x7
    li r0, 0x1
    stw r7, 0x8(r31)
    li r4, 0x0
    lfs f0, lbl_80881EC4
    li r6, 0x0
    stw r7, 0xc(r31)
    li r7, 0x0
    li r8, 0x1
    psq_l f1, 0x0(r9), 0, 0
    lfs f2, 0x28(r1)
    stfs f2, 0x18(r31)
    lfs f2, 0x8(r29)
    psq_st f1, 0x10(r31), 0, 0
    psq_l f1, 0x0(r29), 0, 0
    psq_st f1, 0x1c(r31), 0, 0
    psq_l f1, 0x0(r30), 0, 0
    stfs f2, 0x24(r31)
    lfs f2, 0x8(r30)
    psq_st f1, 0x34(r31), 0, 0
    lfs f1, lbl_80881ED4
    stfs f2, 0x3c(r31)
    lfs f2, lbl_80881F10
    stw r5, 0x0(r31)
    stw r3, 0x560(r28)
    lwz r3, 0x4(r31)
    addi r3, r3, 0xb0
    stw r0, 0x34c(r3)
    stfs f0, 0x24c(r3)
    stfs f0, 0x238(r3)
    lwz r5, 0x4(r31)
    lwz r5, 0x4e0(r5)
    bl fn_80097C08
    lwz r4, 0x4(r31)
    addi r30, r1, 0x14
    lfs f0, 0x8(r29)
    addi r5, r1, 0x8
    lfs f2, 0x530(r4)
    mr r3, r30
    psq_l f1, 0x528(r4), 0, 0
    mr r4, r30
    psq_st f1, 0x28(r31), 0, 0
    fsubs f6, f0, f2
    lfs f5, 0x4(r29)
    lfs f4, 0x2c(r31)
    lfs f3, 0x0(r29)
    lfs f0, 0x28(r31)
    fsubs f4, f5, f4
    stfs f2, 0x30(r31)
    fmr f2, f6
    fsubs f0, f3, f0
    stfs f4, 0xc(r1)
    stfs f0, 0x8(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f6, 0x10(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x1c(r1)
    bl fn_805F98D0
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x1c(r1)
    lwz r3, 0x4(r31)
    psq_st f1, 0x10(r31), 0, 0
    addi r3, r3, 0xb0
    stfs f2, 0x18(r31)
    lwz r4, 0x22c(r3)
    bl fn_80097D40
    bl fn_80473F18
    bl fn_802097C4
    stw r3, 0x8(r31)
    lwz r0, lbl_8087F498
    cmpwi r0, 0x0
    beq lbl_fn_8018BB7C_00000CC0
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    subf. r0, r4, r0
    bne lbl_fn_8018BB7C_00000CC0
    lwz r3, lbl_8087F498
    li r5, 0x20
    lwz r4, 0x4(r31)
    li r6, 0x0
    lfs f1, lbl_80881EC4
    lfs f2, lbl_80881EB0
    bl fn_803EA77C
lbl_fn_8018BB7C_00000CC0:
    mr r3, r31
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    lwz r29, 0x64(r1)
    lwz r28, 0x60(r1)
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_8018BD74(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    lfs f6, lbl_80881E90
    stw r0, 0x124(r1)
    stfd f31, 0x110(r1)
    psq_st f31, 0x118(r1), 0, 0
    lfs f31, lbl_80881ED4
    stfd f30, 0x100(r1)
    psq_st f30, 0x108(r1), 0, 0
    lfs f30, lbl_80881EC4
    stfd f29, 0xf0(r1)
    psq_st f29, 0xf8(r1), 0, 0
    stfd f28, 0xe0(r1)
    psq_st f28, 0xe8(r1), 0, 0
    stw r31, 0xdc(r1)
    stw r30, 0xd8(r1)
    mr r30, r3
    lwz r5, 0x4(r3)
    lfs f3, 0x2e4(r5)
    fcmpo cr0, f3, f6
    cror eq, lt, eq
    bne lbl_fn_8018BD74_00000D90
    lfs f3, 0x34(r3)
    addi r4, r1, 0x5c
    lfs f0, 0x3c(r3)
    li r3, 0x0
    fdivs f4, f3, f6
    psq_l f1, 0x528(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lfs f2, 0x530(r5)
    lfs f5, 0x60(r1)
    lfs f3, 0x5c(r1)
    fdivs f0, f0, f6
    fadds f2, f2, f0
    fadds f5, f5, f30
    fadds f0, f3, f4
    stfs f2, 0x64(r1)
    stfs f5, 0x60(r1)
    stfs f0, 0x5c(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x528(r5), 0, 0
    stfs f2, 0x530(r5)
    b lbl_fn_8018BD74_00000FBC
lbl_fn_8018BD74_00000D90:
    lfs f0, lbl_80881F20
    fcmpo cr0, f3, f0
    bge lbl_fn_8018BD74_00000DA8
    lfs f0, lbl_80881F1C
    fmr f31, f30
    fmuls f30, f30, f0
lbl_fn_8018BD74_00000DA8:
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8018BD74_00000DD8
    lwz r0, 0xc(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8018BD74_00000DD8
    li r0, 0x1
    stw r0, 0xc(r30)
lbl_fn_8018BD74_00000DD8:
    lfs f2, 0x18(r30)
    addi r31, r1, 0x50
    psq_l f1, 0x10(r30), 0, 0
    fabs f3, f2
    lfs f0, lbl_80881ED8
    psq_st f1, 0x0(r31), 0, 0
    frsp f3, f3
    stfs f2, 0x58(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_8018BD74_00000E24
    lfs f3, 0x50(r1)
    lfs f0, lbl_80881ED4
    fcmpo cr0, f3, f0
    ble lbl_fn_8018BD74_00000E18
    lfs f0, lbl_80881EDC
    b lbl_fn_8018BD74_00000E1C
lbl_fn_8018BD74_00000E18:
    lfs f0, lbl_80881EE0
lbl_fn_8018BD74_00000E1C:
    stfs f0, 0x48(r1)
    b lbl_fn_8018BD74_00000E38
lbl_fn_8018BD74_00000E24:
    frsp f2, f2
    lfs f1, 0x50(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_8018BD74_00000E38:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x68
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80881ED4
    addi r4, r1, 0x38
    lfs f28, 0x70(r1)
    mr r5, r4
    lfs f29, 0x6c(r1)
    addi r3, r1, 0x98
    lfs f13, 0x68(r1)
    lfs f12, 0x80(r1)
    lfs f11, 0x7c(r1)
    lfs f10, 0x78(r1)
    lfs f9, 0x90(r1)
    lfs f8, 0x8c(r1)
    lfs f7, 0x88(r1)
    lfs f6, 0x94(r1)
    lfs f5, 0x84(r1)
    lfs f4, 0x74(r1)
    lfs f0, lbl_80881EC4
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x58(r1)
    stfs f3, 0xc8(r1)
    stfs f3, 0xcc(r1)
    stfs f3, 0xd0(r1)
    stfs f0, 0xd4(r1)
    stfs f13, 0x8(r1)
    stfs f29, 0xc(r1)
    stfs f28, 0x10(r1)
    stfs f13, 0x98(r1)
    stfs f29, 0x9c(r1)
    stfs f28, 0xa0(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xa8(r1)
    stfs f11, 0xac(r1)
    stfs f12, 0xb0(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0xb8(r1)
    stfs f8, 0xbc(r1)
    stfs f9, 0xc0(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xa4(r1)
    stfs f5, 0xb4(r1)
    stfs f6, 0xc4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80881ED8
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8018BD74_00000F54
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80881ED4
    fcmpo cr0, f3, f0
    ble lbl_fn_8018BD74_00000F44
    lfs f0, lbl_80881EDC
    b lbl_fn_8018BD74_00000F48
lbl_fn_8018BD74_00000F44:
    lfs f0, lbl_80881EE0
lbl_fn_8018BD74_00000F48:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_8018BD74_00000F68
lbl_fn_8018BD74_00000F54:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_8018BD74_00000F68:
    lfs f0, lbl_80881ED4
    addi r3, r1, 0x44
    psq_l f1, 0x0(r3), 0, 0
    mr r4, r31
    fmr f2, f0
    psq_st f1, 0x0(r31), 0, 0
    fmr f1, f31
    li r5, 0x0
    stfs f2, 0x58(r1)
    fmr f2, f30
    lwz r3, 0x4(r30)
    stfs f0, 0x4c(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    lwz r4, 0x4(r30)
    li r3, 0x0
    lfs f0, lbl_80881ED4
    stfs f0, 0x580(r4)
    stfs f0, 0x584(r4)
lbl_fn_8018BD74_00000FBC:
    lwz r0, 0x124(r1)
    psq_l f31, 0x118(r1), 0, 0
    lfd f31, 0x110(r1)
    psq_l f30, 0x108(r1), 0, 0
    lfd f30, 0x100(r1)
    psq_l f29, 0xf8(r1), 0, 0
    lfd f29, 0xf0(r1)
    psq_l f28, 0xe8(r1), 0, 0
    lfd f28, 0xe0(r1)
    lwz r31, 0xdc(r1)
    lwz r30, 0xd8(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_8018C084(void)
{
    nofralloc
    lwz r5, 0x4(r4)
    lfs f0, lbl_80881F24
    psq_l f1, 0x528(r5), 0, 0
    lfs f2, 0x530(r5)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
    lfs f3, 0x2e4(r5)
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_8018C084_00001028
    lfs f0, 0x2c(r4)
    stfs f0, 0x4(r3)
    blr
lbl_fn_8018C084_00001028:
    lfs f0, lbl_80881F28
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bnelr
    fsubs f5, f0, f3
    lfs f4, lbl_80881EB0
    lfs f0, 0x2c(r4)
    lfs f3, 0x52c(r5)
    fdivs f4, f5, f4
    fsubs f0, f0, f3
    fmadds f0, f4, f0, f3
    stfs f0, 0x4(r3)
    blr
}

asm void fn_8018C0EC(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    lfs f3, lbl_80881ED4
    stw r0, 0x74(r1)
    lfs f0, lbl_80881EC4
    stw r31, 0x6c(r1)
    mr r31, r3
    addi r3, r1, 0x30
    stw r30, 0x68(r1)
    mr r30, r6
    stw r29, 0x64(r1)
    mr r29, r5
    stw r28, 0x60(r1)
    mr r28, r4
    stfs f3, 0x20(r1)
    stfs f3, 0x24(r1)
    stfs f0, 0x28(r1)
    lfs f1, 0x538(r4)
    li r4, 0x79
    bl fn_805F8E70
    addi r4, r1, 0x20
    addi r3, r1, 0x30
    mr r5, r4
    bl fn_805F93C0
    lis r3, lbl_8077D578@ha
    li r6, 0x0
    addi r3, r3, lbl_8077D578@l
    stw r3, 0x0(r31)
    addi r10, r1, 0x20
    lis r9, lbl_8077D280@ha
    stw r28, 0x4(r31)
    addi r9, r9, lbl_8077D280@l
    li r3, 0x7
    li r0, 0x1
    stw r6, 0x8(r31)
    li r4, 0x0
    lfs f0, lbl_80881EC4
    li r5, 0x15c
    stw r6, 0xc(r31)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    psq_l f1, 0x0(r10), 0, 0
    lfs f2, 0x28(r1)
    stfs f2, 0x18(r31)
    lfs f2, 0x8(r29)
    psq_st f1, 0x10(r31), 0, 0
    psq_l f1, 0x0(r29), 0, 0
    psq_st f1, 0x1c(r31), 0, 0
    psq_l f1, 0x0(r30), 0, 0
    stfs f2, 0x24(r31)
    lfs f2, 0x8(r30)
    psq_st f1, 0x34(r31), 0, 0
    lfs f1, lbl_80881ED4
    stfs f2, 0x3c(r31)
    lfs f2, lbl_80881F10
    stw r9, 0x0(r31)
    stw r3, 0x560(r28)
    lwz r3, 0x4(r31)
    addi r3, r3, 0xb0
    stw r0, 0x34c(r3)
    stfs f0, 0x24c(r3)
    stfs f0, 0x238(r3)
    bl fn_80097C08
    lwz r4, 0x4(r31)
    addi r30, r1, 0x14
    lfs f0, 0x8(r29)
    addi r5, r1, 0x8
    lfs f2, 0x530(r4)
    mr r3, r30
    psq_l f1, 0x528(r4), 0, 0
    mr r4, r30
    psq_st f1, 0x28(r31), 0, 0
    fsubs f6, f0, f2
    lfs f5, 0x4(r29)
    lfs f4, 0x2c(r31)
    lfs f3, 0x0(r29)
    lfs f0, 0x28(r31)
    fsubs f4, f5, f4
    stfs f2, 0x30(r31)
    fmr f2, f6
    fsubs f0, f3, f0
    stfs f4, 0xc(r1)
    stfs f0, 0x8(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f6, 0x10(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x1c(r1)
    bl fn_805F98D0
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x1c(r1)
    lwz r3, 0x4(r31)
    psq_st f1, 0x10(r31), 0, 0
    addi r3, r3, 0xb0
    stfs f2, 0x18(r31)
    lwz r4, 0x22c(r3)
    bl fn_80097D40
    bl fn_80473F18
    bl fn_802097C4
    stw r3, 0x8(r31)
    lwz r0, lbl_8087F498
    cmpwi r0, 0x0
    beq lbl_fn_8018C0EC_0000122C
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    subf. r0, r4, r0
    bne lbl_fn_8018C0EC_0000122C
    lwz r3, lbl_8087F498
    li r5, 0x20
    lwz r4, 0x4(r31)
    li r6, 0x0
    lfs f1, lbl_80881EC4
    lfs f2, lbl_80881EB0
    bl fn_803EA77C
lbl_fn_8018C0EC_0000122C:
    mr r3, r31
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    lwz r29, 0x64(r1)
    lwz r28, 0x60(r1)
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_8018C2E0(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    lfs f0, lbl_80881E90
    stw r0, 0x134(r1)
    stfd f31, 0x120(r1)
    psq_st f31, 0x128(r1), 0, 0
    lfs f31, lbl_80881ED4
    stfd f30, 0x110(r1)
    psq_st f30, 0x118(r1), 0, 0
    lfs f30, lbl_80881EC4
    stfd f29, 0x100(r1)
    psq_st f29, 0x108(r1), 0, 0
    stfd f28, 0xf0(r1)
    psq_st f28, 0xf8(r1), 0, 0
    stw r31, 0xec(r1)
    stw r30, 0xe8(r1)
    mr r30, r3
    lwz r5, 0x4(r3)
    lfs f3, 0x2e4(r5)
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_8018C2E0_00001300
    lfs f3, 0x34(r3)
    addi r4, r1, 0x68
    lfs f5, lbl_80881F14
    lfs f0, 0x3c(r3)
    li r3, 0x0
    fdivs f4, f3, f5
    psq_l f1, 0x528(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lfs f2, 0x530(r5)
    lfs f6, 0x6c(r1)
    lfs f3, 0x68(r1)
    fdivs f0, f0, f5
    fadds f2, f2, f0
    fadds f5, f6, f30
    fadds f0, f3, f4
    stfs f2, 0x70(r1)
    stfs f5, 0x6c(r1)
    stfs f0, 0x68(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x528(r5), 0, 0
    stfs f2, 0x530(r5)
    b lbl_fn_8018C2E0_00001588
lbl_fn_8018C2E0_00001300:
    lfs f0, lbl_80881EF4
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_8018C2E0_0000135C
    lfs f3, 0x34(r3)
    addi r4, r1, 0x5c
    lfs f5, lbl_80881F14
    lfs f0, 0x3c(r3)
    li r3, 0x0
    fdivs f4, f3, f5
    psq_l f1, 0x528(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lfs f2, 0x530(r5)
    lfs f3, 0x5c(r1)
    fdivs f0, f0, f5
    fadds f2, f2, f0
    fadds f0, f3, f4
    stfs f2, 0x64(r1)
    stfs f0, 0x5c(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x528(r5), 0, 0
    stfs f2, 0x530(r5)
    b lbl_fn_8018C2E0_00001588
lbl_fn_8018C2E0_0000135C:
    lfs f0, lbl_80881F2C
    fcmpo cr0, f3, f0
    bge lbl_fn_8018C2E0_00001374
    lfs f0, lbl_80881F30
    fmr f31, f30
    fmuls f30, f30, f0
lbl_fn_8018C2E0_00001374:
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8018C2E0_000013A4
    lwz r0, 0xc(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8018C2E0_000013A4
    li r0, 0x1
    stw r0, 0xc(r30)
lbl_fn_8018C2E0_000013A4:
    lfs f2, 0x18(r30)
    addi r31, r1, 0x50
    psq_l f1, 0x10(r30), 0, 0
    fabs f3, f2
    lfs f0, lbl_80881ED8
    psq_st f1, 0x0(r31), 0, 0
    frsp f3, f3
    stfs f2, 0x58(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_8018C2E0_000013F0
    lfs f3, 0x50(r1)
    lfs f0, lbl_80881ED4
    fcmpo cr0, f3, f0
    ble lbl_fn_8018C2E0_000013E4
    lfs f0, lbl_80881EDC
    b lbl_fn_8018C2E0_000013E8
lbl_fn_8018C2E0_000013E4:
    lfs f0, lbl_80881EE0
lbl_fn_8018C2E0_000013E8:
    stfs f0, 0x48(r1)
    b lbl_fn_8018C2E0_00001404
lbl_fn_8018C2E0_000013F0:
    frsp f2, f2
    lfs f1, 0x50(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_8018C2E0_00001404:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x78
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80881ED4
    addi r4, r1, 0x38
    lfs f28, 0x80(r1)
    mr r5, r4
    lfs f29, 0x7c(r1)
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
    lfs f0, lbl_80881EC4
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x58(r1)
    stfs f3, 0xd8(r1)
    stfs f3, 0xdc(r1)
    stfs f3, 0xe0(r1)
    stfs f0, 0xe4(r1)
    stfs f13, 0x8(r1)
    stfs f29, 0xc(r1)
    stfs f28, 0x10(r1)
    stfs f13, 0xa8(r1)
    stfs f29, 0xac(r1)
    stfs f28, 0xb0(r1)
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
    lfs f0, lbl_80881ED8
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8018C2E0_00001520
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80881ED4
    fcmpo cr0, f3, f0
    ble lbl_fn_8018C2E0_00001510
    lfs f0, lbl_80881EDC
    b lbl_fn_8018C2E0_00001514
lbl_fn_8018C2E0_00001510:
    lfs f0, lbl_80881EE0
lbl_fn_8018C2E0_00001514:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_8018C2E0_00001534
lbl_fn_8018C2E0_00001520:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_8018C2E0_00001534:
    lfs f0, lbl_80881ED4
    addi r3, r1, 0x44
    psq_l f1, 0x0(r3), 0, 0
    mr r4, r31
    fmr f2, f0
    psq_st f1, 0x0(r31), 0, 0
    fmr f1, f31
    li r5, 0x0
    stfs f2, 0x58(r1)
    fmr f2, f30
    lwz r3, 0x4(r30)
    stfs f0, 0x4c(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    lwz r4, 0x4(r30)
    li r3, 0x0
    lfs f0, lbl_80881ED4
    stfs f0, 0x580(r4)
    stfs f0, 0x584(r4)
lbl_fn_8018C2E0_00001588:
    lwz r0, 0x134(r1)
    psq_l f31, 0x128(r1), 0, 0
    lfd f31, 0x120(r1)
    psq_l f30, 0x118(r1), 0, 0
    lfd f30, 0x110(r1)
    psq_l f29, 0x108(r1), 0, 0
    lfd f29, 0x100(r1)
    psq_l f28, 0xf8(r1), 0, 0
    lfd f28, 0xf0(r1)
    lwz r31, 0xec(r1)
    lwz r30, 0xe8(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

asm void fn_8018C650(void)
{
    nofralloc
    lwz r5, 0x4(r4)
    lfs f0, lbl_80881F24
    psq_l f1, 0x528(r5), 0, 0
    lfs f2, 0x530(r5)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
    lfs f3, 0x2e4(r5)
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_8018C650_000015F4
    lfs f0, 0x2c(r4)
    stfs f0, 0x4(r3)
    blr
lbl_fn_8018C650_000015F4:
    lfs f0, lbl_80881F28
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bnelr
    fsubs f5, f0, f3
    lfs f4, lbl_80881EB0
    lfs f0, 0x2c(r4)
    lfs f3, 0x52c(r5)
    fdivs f4, f5, f4
    fsubs f0, f0, f3
    fmadds f0, f4, f0, f3
    stfs f0, 0x4(r3)
    blr
}

asm void fn_8018C6B8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r10, lbl_8077D200@ha
    psq_l f1, 0x0(r5), 0, 0
    stw r0, 0x14(r1)
    li r11, 0x0
    lfs f2, 0x8(r5)
    addi r10, r10, lbl_8077D200@l
    stw r31, 0xc(r1)
    li r9, 0x9
    mr r31, r3
    li r0, 0x1
    stw r30, 0x8(r1)
    li r5, 0x161
    lfs f0, lbl_80881EC4
    li r6, 0x0
    psq_st f1, 0x10(r3), 0, 0
    li r7, 0x0
    lfs f1, lbl_80881ED4
    li r8, 0x1
    stfs f2, 0x18(r3)
    lfs f2, lbl_80881F10
    stw r4, 0x4(r3)
    stw r11, 0x8(r3)
    stw r11, 0xc(r3)
    stw r10, 0x0(r3)
    stw r9, 0x560(r4)
    li r4, 0x0
    lwz r3, 0x4(r3)
    stw r0, 0x3fc(r3)
    addi r30, r3, 0xb0
    mr r3, r30
    stfs f0, 0x24c(r30)
    bl fn_80097C08
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x60(r12)
    mtctr r12
    bctrl
    stfs f1, 0x238(r30)
    lis r3, 0x51ec
    subi r3, r3, 0x7ae1
    lwz r4, 0x4(r31)
    lwz r0, 0x950(r4)
    mulhw r0, r3, r0
    srawi r0, r0, 5
    srwi r3, r0, 31
    add r3, r0, r3
    srawi r0, r3, 31
    andc r0, r3, r0
    cmpwi r0, 0x5
    ble lbl_fn_8018C6B8_00001700
    li r0, 0x5
    b lbl_fn_8018C6B8_00001708
lbl_fn_8018C6B8_00001700:
    srawi r0, r3, 31
    andc r0, r3, r0
lbl_fn_8018C6B8_00001708:
    lfs f3, 0x2e8(r4)
    lis r3, lbl_80738F88@ha
    lfs f4, lbl_80881EC4
    slwi r0, r0, 3
    addi r3, r3, lbl_80738F88@l
    fcmpo cr0, f4, f3
    lfsx f0, r3, r0
    bge lbl_fn_8018C6B8_0000172C
    b lbl_fn_8018C6B8_00001730
lbl_fn_8018C6B8_0000172C:
    fmr f4, f3
lbl_fn_8018C6B8_00001730:
    fmuls f0, f0, f4
    stfs f0, 0x234(r30)
    lwz r3, lbl_8087F048
    lwz r4, 0x4(r31)
    bl fn_80106878
    lwz r3, 0x4(r31)
    addi r3, r3, 0xb0
    lwz r4, 0x22c(r3)
    bl fn_80097D40
    bl fn_80473F18
    bl fn_802097C4
    stw r3, 0x8(r31)
    lwz r0, lbl_8087F498
    cmpwi r0, 0x0
    beq lbl_fn_8018C6B8_000017A0
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    subf. r0, r4, r0
    bne lbl_fn_8018C6B8_000017A0
    lwz r3, lbl_8087F498
    li r5, 0x2
    lwz r4, 0x4(r31)
    li r6, 0x0
    lfs f1, lbl_80881EC4
    lfs f2, lbl_80881EB0
    bl fn_803EA77C
lbl_fn_8018C6B8_000017A0:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8018C84C(void)
{
    nofralloc
    stwu r1, -0x100(r1)
    mflr r0
    stw r0, 0x104(r1)
    stfd f31, 0xf0(r1)
    psq_st f31, 0xf8(r1), 0, 0
    stfd f30, 0xe0(r1)
    psq_st f30, 0xe8(r1), 0, 0
    stw r31, 0xdc(r1)
    stw r30, 0xd8(r1)
    mr r30, r3
    lwz r0, lbl_8087F610
    lwz r4, 0x4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8018C84C_00001840
    lwz r0, 0x48(r4)
    cmpwi r0, 0x0
    bne lbl_fn_8018C84C_00001840
    lfs f3, 0x2e4(r4)
    lfs f0, lbl_80881E94
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_8018C84C_00001834
    lfs f0, lbl_80881EA8
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_8018C84C_00001834
    lwz r4, lbl_8087EFA8
    lfs f0, lbl_80881ECC
    stfs f0, 0x3a4(r4)
    b lbl_fn_8018C84C_00001840
lbl_fn_8018C84C_00001834:
    lwz r4, lbl_8087EFA8
    lfs f0, lbl_80881EC4
    stfs f0, 0x3a4(r4)
lbl_fn_8018C84C_00001840:
    lfs f2, 0x18(r3)
    addi r31, r1, 0x50
    psq_l f1, 0x10(r3), 0, 0
    fabs f3, f2
    lfs f0, lbl_80881ED8
    psq_st f1, 0x0(r31), 0, 0
    frsp f3, f3
    stfs f2, 0x58(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_8018C84C_0000188C
    lfs f3, 0x50(r1)
    lfs f0, lbl_80881ED4
    fcmpo cr0, f3, f0
    ble lbl_fn_8018C84C_00001880
    lfs f0, lbl_80881EDC
    b lbl_fn_8018C84C_00001884
lbl_fn_8018C84C_00001880:
    lfs f0, lbl_80881EE0
lbl_fn_8018C84C_00001884:
    stfs f0, 0x48(r1)
    b lbl_fn_8018C84C_000018A0
lbl_fn_8018C84C_0000188C:
    frsp f2, f2
    lfs f1, 0x50(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_8018C84C_000018A0:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x60
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80881ED4
    addi r4, r1, 0x38
    lfs f30, 0x68(r1)
    mr r5, r4
    lfs f31, 0x64(r1)
    addi r3, r1, 0x90
    lfs f13, 0x60(r1)
    lfs f12, 0x78(r1)
    lfs f11, 0x74(r1)
    lfs f10, 0x70(r1)
    lfs f9, 0x88(r1)
    lfs f8, 0x84(r1)
    lfs f7, 0x80(r1)
    lfs f6, 0x8c(r1)
    lfs f5, 0x7c(r1)
    lfs f4, 0x6c(r1)
    lfs f0, lbl_80881EC4
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x58(r1)
    stfs f3, 0xc0(r1)
    stfs f3, 0xc4(r1)
    stfs f3, 0xc8(r1)
    stfs f0, 0xcc(r1)
    stfs f13, 0x8(r1)
    stfs f31, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f13, 0x90(r1)
    stfs f31, 0x94(r1)
    stfs f30, 0x98(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xa0(r1)
    stfs f11, 0xa4(r1)
    stfs f12, 0xa8(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0xb0(r1)
    stfs f8, 0xb4(r1)
    stfs f9, 0xb8(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0x9c(r1)
    stfs f5, 0xac(r1)
    stfs f6, 0xbc(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80881ED8
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8018C84C_000019BC
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80881ED4
    fcmpo cr0, f3, f0
    ble lbl_fn_8018C84C_000019AC
    lfs f0, lbl_80881EDC
    b lbl_fn_8018C84C_000019B0
lbl_fn_8018C84C_000019AC:
    lfs f0, lbl_80881EE0
lbl_fn_8018C84C_000019B0:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_8018C84C_000019D0
lbl_fn_8018C84C_000019BC:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_8018C84C_000019D0:
    lfs f0, lbl_80881ED4
    addi r3, r1, 0x44
    psq_l f1, 0x0(r3), 0, 0
    mr r4, r31
    fmr f2, f0
    psq_st f1, 0x0(r31), 0, 0
    fmr f1, f0
    li r5, 0x0
    stfs f2, 0x58(r1)
    lfs f2, lbl_80881EC4
    lwz r3, 0x4(r30)
    stfs f0, 0x4c(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    lwz r4, 0x4(r30)
    li r3, 0x0
    lfs f0, lbl_80881ED4
    stfs f0, 0x580(r4)
    stfs f0, 0x584(r4)
    psq_l f31, 0xf8(r1), 0, 0
    lfd f31, 0xf0(r1)
    psq_l f30, 0xe8(r1), 0, 0
    lfd f30, 0xe0(r1)
    lwz r31, 0xdc(r1)
    lwz r30, 0xd8(r1)
    lwz r0, 0x104(r1)
    mtlr r0
    addi r1, r1, 0x100
    blr
}
