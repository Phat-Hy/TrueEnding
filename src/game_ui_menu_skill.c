#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_25(void);
extern void _savegpr_25(void);
extern void dtor_80084684(void);
extern void fn_8004ED34(void);
extern void fn_80051A88(void);
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800A56A8(void);
extern void fn_8010A308(void);
extern void fn_801446F0(void);
extern void fn_801539E0(void);
extern void fn_80155DAC(void);
extern void fn_80176DFC(void);
extern void fn_803EA77C(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_80680CF8(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);

/* External data declarations */
extern u8 lbl_8073B2E8[];
extern u8 lbl_8073B308[];
extern u8 lbl_8073B36C[];
extern u8 lbl_80780FC0[];
extern u8 lbl_80781040[];
extern u8 lbl_807813C0[];
extern u8 lbl_807815A0[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087EF70;
extern u32 lbl_8087F048;
extern u32 lbl_8087F498;
extern u32 lbl_8087F8A0;
extern u32 lbl_80882518;
extern u32 lbl_8088251C;
extern u32 lbl_80882520;
extern u32 lbl_80882528;
extern u32 lbl_8088252C;
extern u32 lbl_80882530;
extern u32 lbl_80882544;
extern u32 lbl_80882548;
extern u32 lbl_80882550;
extern u32 lbl_80882554;
extern u32 lbl_80882558;
extern u32 lbl_8088255C;
extern u32 lbl_80882560;
extern u32 lbl_80882564;
extern u32 lbl_80882568;
extern u32 lbl_8088256C;
extern u32 lbl_80882570;
extern u32 lbl_80882574;
extern u32 lbl_80882578;
extern u32 lbl_8088257C;
extern u32 lbl_80882580;
extern u32 lbl_80882584;
extern u32 lbl_80882588;
extern u32 lbl_8088258C;
extern u32 lbl_80882590;
extern u32 lbl_80882594;
extern u32 lbl_80882598;
extern u32 lbl_8088259C;
extern u32 lbl_808825A0;
extern u32 lbl_808825A4;
extern u32 lbl_808825A8;

/* Function declarations */
void fn_801B8DFC(void);
void fn_801B9128(void);
void fn_801B9598(void);
void fn_801B9814(void);
void fn_801B9854(void);
void fn_801B9894(void);
void fn_801B98D4(void);
void fn_801B9914(void);
void fn_801B9954(void);
void fn_801B9994(void);
void fn_801B99D4(void);
void fn_801B9A14(void);
void fn_801B9A54(void);
void fn_801B9DE4(void);

asm void fn_801B8DFC(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    lis r7, lbl_807813C0@ha
    lfs f0, lbl_80882518
    stw r0, 0x114(r1)
    addi r7, r7, lbl_807813C0@l
    li r0, 0x1
    lfs f1, lbl_8088251C
    stfd f31, 0x100(r1)
    li r8, 0x1
    lfs f2, lbl_80882520
    psq_st f31, 0x108(r1), 0, 0
    stfd f30, 0xf0(r1)
    psq_st f30, 0xf8(r1), 0, 0
    stw r31, 0xec(r1)
    stw r30, 0xe8(r1)
    mr r30, r6
    li r6, 0x0
    stw r29, 0xe4(r1)
    mr r29, r5
    li r5, 0x2c
    stw r28, 0xe0(r1)
    mr r28, r3
    stw r7, 0x0(r3)
    li r7, 0x0
    stw r4, 0x4(r3)
    stw r5, 0x560(r4)
    li r4, 0x0
    li r5, 0x201
    lwz r3, 0x4(r3)
    stw r0, 0x3fc(r3)
    addi r31, r3, 0xb0
    mr r3, r31
    stfs f0, 0x24c(r31)
    bl fn_80097C08
    lfs f0, lbl_80882518
    lis r4, lbl_80781040@ha
    stfs f0, 0x238(r31)
    addi r4, r4, lbl_80781040@l
    lfs f5, 0x8(r30)
    addi r3, r1, 0x8
    lfs f4, 0x8(r29)
    lfs f3, 0x4(r30)
    lfs f0, 0x4(r29)
    fsubs f5, f5, f4
    stw r4, 0x0(r28)
    fsubs f4, f3, f0
    lfs f3, 0x0(r30)
    lfs f0, 0x0(r29)
    stfs f4, 0xc(r1)
    fsubs f0, f3, f0
    lfs f31, lbl_80882544
    stfs f5, 0x10(r1)
    stfs f0, 0x8(r1)
    bl fn_805F9940
    addi r3, r1, 0x8
    mr r4, r3
    bl fn_805F98D0
    lwz r4, 0x4(r28)
    addi r3, r1, 0x8
    lfs f0, lbl_80882528
    addi r31, r1, 0x14
    psq_l f1, 0x528(r4), 0, 0
    li r0, 0x3
    lfs f2, 0x530(r4)
    stfs f2, 0x20(r28)
    lfs f2, 0x8(r29)
    psq_st f1, 0x18(r28), 0, 0
    psq_l f1, 0x0(r29), 0, 0
    psq_st f1, 0xc(r28), 0, 0
    psq_l f1, 0x0(r30), 0, 0
    stfs f2, 0x14(r28)
    lfs f2, 0x8(r30)
    psq_st f1, 0x30(r28), 0, 0
    stfs f2, 0x38(r28)
    lfs f2, 0x10(r1)
    psq_l f1, 0x0(r3), 0, 0
    frsp f3, f2
    psq_st f1, 0x24(r28), 0, 0
    stfs f2, 0x2c(r28)
    fabs f4, f3
    stfs f31, 0x3c(r28)
    frsp f4, f4
    stw r0, 0x8(r28)
    psq_st f1, 0x0(r31), 0, 0
    fcmpo cr0, f4, f0
    stfs f2, 0x1c(r1)
    bge lbl_fn_801B8DFC_00000184
    lfs f3, 0x14(r1)
    lfs f0, lbl_8088251C
    fcmpo cr0, f3, f0
    ble lbl_fn_801B8DFC_00000178
    lfs f0, lbl_8088252C
    b lbl_fn_801B8DFC_0000017C
lbl_fn_801B8DFC_00000178:
    lfs f0, lbl_80882530
lbl_fn_801B8DFC_0000017C:
    stfs f0, 0x24(r1)
    b lbl_fn_801B8DFC_00000198
lbl_fn_801B8DFC_00000184:
    fmr f2, f3
    lfs f1, 0x14(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x24(r1)
lbl_fn_801B8DFC_00000198:
    lfs f0, 0x24(r1)
    addi r3, r1, 0xa8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_8088251C
    addi r4, r1, 0x2c
    lfs f4, 0xb0(r1)
    mr r5, r4
    lfs f5, 0xac(r1)
    addi r3, r1, 0x68
    lfs f6, 0xa8(r1)
    lfs f7, 0xc0(r1)
    lfs f8, 0xbc(r1)
    lfs f9, 0xb8(r1)
    lfs f10, 0xd0(r1)
    lfs f11, 0xcc(r1)
    lfs f12, 0xc8(r1)
    lfs f13, 0xd4(r1)
    lfs f31, 0xc4(r1)
    lfs f30, 0xb4(r1)
    lfs f0, lbl_80882518
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x1c(r1)
    stfs f3, 0x98(r1)
    stfs f3, 0x9c(r1)
    stfs f3, 0xa0(r1)
    stfs f0, 0xa4(r1)
    stfs f6, 0x5c(r1)
    stfs f5, 0x60(r1)
    stfs f4, 0x64(r1)
    stfs f6, 0x68(r1)
    stfs f5, 0x6c(r1)
    stfs f4, 0x70(r1)
    stfs f9, 0x50(r1)
    stfs f8, 0x54(r1)
    stfs f7, 0x58(r1)
    stfs f9, 0x78(r1)
    stfs f8, 0x7c(r1)
    stfs f7, 0x80(r1)
    stfs f12, 0x44(r1)
    stfs f11, 0x48(r1)
    stfs f10, 0x4c(r1)
    stfs f12, 0x88(r1)
    stfs f11, 0x8c(r1)
    stfs f10, 0x90(r1)
    stfs f30, 0x38(r1)
    stfs f31, 0x3c(r1)
    stfs f13, 0x40(r1)
    stfs f30, 0x74(r1)
    stfs f31, 0x84(r1)
    stfs f13, 0x94(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x34(r1)
    bl fn_805F9750
    lfs f2, 0x34(r1)
    lfs f0, lbl_80882528
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801B8DFC_000002B4
    lfs f3, 0x30(r1)
    lfs f0, lbl_8088251C
    fcmpo cr0, f3, f0
    ble lbl_fn_801B8DFC_000002A4
    lfs f0, lbl_8088252C
    b lbl_fn_801B8DFC_000002A8
lbl_fn_801B8DFC_000002A4:
    lfs f0, lbl_80882530
lbl_fn_801B8DFC_000002A8:
    fneg f0, f0
    stfs f0, 0x20(r1)
    b lbl_fn_801B8DFC_000002C8
lbl_fn_801B8DFC_000002B4:
    lfs f1, 0x30(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x20(r1)
lbl_fn_801B8DFC_000002C8:
    addi r3, r1, 0x20
    lfs f2, lbl_8088251C
    psq_l f1, 0x0(r3), 0, 0
    lwz r3, 0x4(r28)
    stfs f2, 0x28(r1)
    stfs f2, 0x1c(r1)
    frsp f2, f2
    psq_st f1, 0x534(r3), 0, 0
    stfs f2, 0x53c(r3)
    psq_st f1, 0x0(r31), 0, 0
    lwz r3, 0x4(r28)
    bl fn_801446F0
    psq_l f31, 0x108(r1), 0, 0
    mr r3, r28
    lfd f31, 0x100(r1)
    psq_l f30, 0xf8(r1), 0, 0
    lfd f30, 0xf0(r1)
    lwz r31, 0xec(r1)
    lwz r30, 0xe8(r1)
    lwz r29, 0xe4(r1)
    lwz r28, 0xe0(r1)
    lwz r0, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_801B9128(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    lis r7, lbl_807813C0@ha
    lfs f0, lbl_80882518
    stw r0, 0x124(r1)
    addi r7, r7, lbl_807813C0@l
    li r0, 0x1
    lfs f1, lbl_8088251C
    stfd f31, 0x110(r1)
    li r8, 0x1
    lfs f2, lbl_80882520
    psq_st f31, 0x118(r1), 0, 0
    stfd f30, 0x100(r1)
    psq_st f30, 0x108(r1), 0, 0
    stw r31, 0xfc(r1)
    mr r31, r3
    stw r30, 0xf8(r1)
    stw r29, 0xf4(r1)
    mr r29, r6
    li r6, 0x0
    stw r28, 0xf0(r1)
    mr r28, r5
    li r5, 0x2
    stw r7, 0x0(r3)
    li r7, 0x0
    stw r4, 0x4(r3)
    stw r5, 0x560(r4)
    li r4, 0x0
    li r5, 0x5f
    lwz r3, 0x4(r3)
    stw r0, 0x3fc(r3)
    addi r30, r3, 0xb0
    mr r3, r30
    stfs f0, 0x24c(r30)
    bl fn_80097C08
    lfs f5, 0x4(r29)
    lis r4, lbl_80780FC0@ha
    lfs f4, 0x4(r28)
    addi r5, r1, 0x74
    lfs f3, 0x0(r29)
    addi r3, r31, 0x24
    fsubs f5, f5, f4
    lfs f0, 0x0(r28)
    lfs f4, lbl_80882518
    addi r4, r4, lbl_80780FC0@l
    fsubs f6, f3, f0
    stfs f4, 0x238(r30)
    stfs f6, 0x74(r1)
    lfs f3, 0x8(r29)
    stfs f5, 0x78(r1)
    lfs f0, 0x8(r28)
    psq_l f1, 0x0(r5), 0, 0
    fsubs f2, f3, f0
    psq_st f1, 0x0(r3), 0, 0
    lfs f0, lbl_8088251C
    stw r4, 0x0(r31)
    stfs f2, 0x7c(r1)
    stfs f2, 0x2c(r31)
    stfs f0, 0x28(r31)
    bl fn_805F9920
    fabs f3, f1
    lfs f0, lbl_80882528
    frsp f3, f3
    fcmpo cr0, f3, f0
    blt lbl_fn_801B9128_0000043C
    addi r3, r31, 0x24
    mr r4, r3
    bl fn_805F98D0
lbl_fn_801B9128_0000043C:
    lfs f2, 0x2c(r31)
    addi r30, r1, 0x5c
    psq_l f1, 0x24(r31), 0, 0
    fabs f3, f2
    lfs f0, lbl_80882528
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0x64(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_801B9128_00000488
    lfs f3, 0x5c(r1)
    lfs f0, lbl_8088251C
    fcmpo cr0, f3, f0
    ble lbl_fn_801B9128_0000047C
    lfs f0, lbl_8088252C
    b lbl_fn_801B9128_00000480
lbl_fn_801B9128_0000047C:
    lfs f0, lbl_80882530
lbl_fn_801B9128_00000480:
    stfs f0, 0x48(r1)
    b lbl_fn_801B9128_0000049C
lbl_fn_801B9128_00000488:
    frsp f2, f2
    lfs f1, 0x5c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_801B9128_0000049C:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x80
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_8088251C
    addi r4, r1, 0x38
    lfs f30, 0x88(r1)
    mr r5, r4
    lfs f31, 0x84(r1)
    addi r3, r1, 0xb0
    lfs f13, 0x80(r1)
    lfs f12, 0x98(r1)
    lfs f11, 0x94(r1)
    lfs f10, 0x90(r1)
    lfs f9, 0xa8(r1)
    lfs f8, 0xa4(r1)
    lfs f7, 0xa0(r1)
    lfs f6, 0xac(r1)
    lfs f5, 0x9c(r1)
    lfs f4, 0x8c(r1)
    lfs f0, lbl_80882518
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x64(r1)
    stfs f3, 0xe0(r1)
    stfs f3, 0xe4(r1)
    stfs f3, 0xe8(r1)
    stfs f0, 0xec(r1)
    stfs f13, 0x8(r1)
    stfs f31, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f13, 0xb0(r1)
    stfs f31, 0xb4(r1)
    stfs f30, 0xb8(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xc0(r1)
    stfs f11, 0xc4(r1)
    stfs f12, 0xc8(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0xd0(r1)
    stfs f8, 0xd4(r1)
    stfs f9, 0xd8(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xbc(r1)
    stfs f5, 0xcc(r1)
    stfs f6, 0xdc(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80882528
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801B9128_000005B8
    lfs f3, 0x3c(r1)
    lfs f0, lbl_8088251C
    fcmpo cr0, f3, f0
    ble lbl_fn_801B9128_000005A8
    lfs f0, lbl_8088252C
    b lbl_fn_801B9128_000005AC
lbl_fn_801B9128_000005A8:
    lfs f0, lbl_80882530
lbl_fn_801B9128_000005AC:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_801B9128_000005CC
lbl_fn_801B9128_000005B8:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_801B9128_000005CC:
    addi r3, r1, 0x44
    lwz r6, 0x4(r31)
    psq_l f1, 0x0(r3), 0, 0
    lis r4, lbl_8073B2E8@ha
    psq_st f1, 0x0(r30), 0, 0
    addi r3, r1, 0x68
    lfs f0, lbl_8088251C
    addi r30, r1, 0x50
    lfs f4, 0x60(r1)
    addi r4, r4, lbl_8073B2E8@l
    lfs f3, 0x534(r6)
    fmr f2, f0
    lfs f5, 0x53c(r6)
    li r5, 0x0
    stfs f3, 0x68(r1)
    stfs f4, 0x6c(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x64(r1)
    fmr f2, f5
    psq_st f1, 0x534(r6), 0, 0
    stfs f2, 0x53c(r6)
    lwz r3, 0x4(r31)
    stfs f0, 0x4c(r1)
    addi r29, r3, 0xb0
    stfs f5, 0x70(r1)
    mr r3, r29
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_801B9128_00000648
    li r3, 0x0
    b lbl_fn_801B9128_00000654
lbl_fn_801B9128_00000648:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r29)
    add r3, r3, r0
lbl_fn_801B9128_00000654:
    cmpwi r3, 0x0
    bne lbl_fn_801B9128_00000698
    lwz r3, 0x4(r31)
    lis r4, lbl_8073B2E8@ha
    addi r4, r4, lbl_8073B2E8@l
    li r5, 0x0
    addi r29, r3, 0xb0
    mr r3, r29
    addi r4, r4, 0x5
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_801B9128_0000068C
    li r3, 0x0
    b lbl_fn_801B9128_00000698
lbl_fn_801B9128_0000068C:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r29)
    add r3, r3, r0
lbl_fn_801B9128_00000698:
    cmpwi r3, 0x0
    bne lbl_fn_801B9128_000006DC
    lwz r3, 0x4(r31)
    lis r4, lbl_8073B2E8@ha
    addi r4, r4, lbl_8073B2E8@l
    li r5, 0x0
    addi r29, r3, 0xb0
    mr r3, r29
    addi r4, r4, 0xc
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_801B9128_000006D0
    li r3, 0x0
    b lbl_fn_801B9128_000006DC
lbl_fn_801B9128_000006D0:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r29)
    add r3, r3, r0
lbl_fn_801B9128_000006DC:
    cmpwi r3, 0x0
    bne lbl_fn_801B9128_00000720
    lwz r3, 0x4(r31)
    lis r4, lbl_8073B2E8@ha
    addi r4, r4, lbl_8073B2E8@l
    li r5, 0x0
    addi r29, r3, 0xb0
    mr r3, r29
    addi r4, r4, 0x11
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_801B9128_00000714
    li r3, 0x0
    b lbl_fn_801B9128_00000720
lbl_fn_801B9128_00000714:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r29)
    add r3, r3, r0
lbl_fn_801B9128_00000720:
    cmpwi r3, 0x0
    beq lbl_fn_801B9128_00000744
    lfs f4, 0x2c(r3)
    lfs f3, 0x1c(r3)
    lfs f0, 0xc(r3)
    stfs f0, 0x50(r1)
    stfs f3, 0x54(r1)
    stfs f4, 0x58(r1)
    b lbl_fn_801B9128_00000758
lbl_fn_801B9128_00000744:
    lwz r3, 0x4(r31)
    psq_l f1, 0x528(r3), 0, 0
    lfs f2, 0x530(r3)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x58(r1)
lbl_fn_801B9128_00000758:
    psq_l f1, 0x0(r30), 0, 0
    mr r3, r31
    lfs f2, 0x8(r30)
    psq_st f1, 0x18(r31), 0, 0
    stfs f2, 0x20(r31)
    psq_l f31, 0x118(r1), 0, 0
    lfd f31, 0x110(r1)
    psq_l f30, 0x108(r1), 0, 0
    lfd f30, 0x100(r1)
    lwz r31, 0xfc(r1)
    lwz r30, 0xf8(r1)
    lwz r29, 0xf4(r1)
    lwz r28, 0xf0(r1)
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_801B9598(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    stw r31, 0x2c(r1)
    li r31, 0x0
    stw r30, 0x28(r1)
    mr r30, r3
    stw r29, 0x24(r1)
    stw r28, 0x20(r1)
    lwz r5, 0x4(r3)
    lfs f31, 0x2e4(r5)
    addi r3, r5, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_801B9598_00000868
    lwz r3, 0x4(r30)
    lwz r0, 0x524(r3)
    cmpwi r0, 0x0
    bge lbl_fn_801B9598_00000800
    li r5, 0x0
    b lbl_fn_801B9598_0000080C
lbl_fn_801B9598_00000800:
    mulli r0, r0, 0x30
    lwz r3, 0xec(r3)
    add r5, r3, r0
lbl_fn_801B9598_0000080C:
    lfs f3, 0x1c(r5)
    addi r3, r1, 0x8
    lfs f4, 0xc(r5)
    li r4, 0x0
    lfs f0, 0x2c(r5)
    li r5, 0x5d
    stfs f4, 0x8(r1)
    li r6, 0x1
    lwz r9, 0x4(r30)
    fmr f2, f0
    stfs f3, 0xc(r1)
    li r7, 0x0
    li r8, 0x1
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x528(r9), 0, 0
    lfs f1, lbl_80882518
    stfs f2, 0x530(r9)
    lfs f2, lbl_80882520
    lwz r3, 0x4(r30)
    stfs f0, 0x10(r1)
    addi r3, r3, 0xb0
    bl fn_80097C08
    li r31, 0x1
lbl_fn_801B9598_00000868:
    lwz r3, 0x4(r30)
    lis r4, lbl_8073B2E8@ha
    addi r29, r1, 0x14
    li r5, 0x0
    addi r28, r3, 0xb0
    addi r4, r4, lbl_8073B2E8@l
    mr r3, r28
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_801B9598_00000898
    li r3, 0x0
    b lbl_fn_801B9598_000008A4
lbl_fn_801B9598_00000898:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r28)
    add r3, r3, r0
lbl_fn_801B9598_000008A4:
    cmpwi r3, 0x0
    bne lbl_fn_801B9598_000008E8
    lwz r3, 0x4(r30)
    lis r4, lbl_8073B2E8@ha
    addi r4, r4, lbl_8073B2E8@l
    li r5, 0x0
    addi r28, r3, 0xb0
    mr r3, r28
    addi r4, r4, 0x5
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_801B9598_000008DC
    li r3, 0x0
    b lbl_fn_801B9598_000008E8
lbl_fn_801B9598_000008DC:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r28)
    add r3, r3, r0
lbl_fn_801B9598_000008E8:
    cmpwi r3, 0x0
    bne lbl_fn_801B9598_0000092C
    lwz r3, 0x4(r30)
    lis r4, lbl_8073B2E8@ha
    addi r4, r4, lbl_8073B2E8@l
    li r5, 0x0
    addi r28, r3, 0xb0
    mr r3, r28
    addi r4, r4, 0xc
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_801B9598_00000920
    li r3, 0x0
    b lbl_fn_801B9598_0000092C
lbl_fn_801B9598_00000920:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r28)
    add r3, r3, r0
lbl_fn_801B9598_0000092C:
    cmpwi r3, 0x0
    bne lbl_fn_801B9598_00000970
    lwz r3, 0x4(r30)
    lis r4, lbl_8073B2E8@ha
    addi r4, r4, lbl_8073B2E8@l
    li r5, 0x0
    addi r28, r3, 0xb0
    mr r3, r28
    addi r4, r4, 0x11
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_801B9598_00000964
    li r3, 0x0
    b lbl_fn_801B9598_00000970
lbl_fn_801B9598_00000964:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r28)
    add r3, r3, r0
lbl_fn_801B9598_00000970:
    cmpwi r3, 0x0
    beq lbl_fn_801B9598_00000994
    lfs f4, 0x2c(r3)
    lfs f3, 0x1c(r3)
    lfs f0, 0xc(r3)
    stfs f0, 0x14(r1)
    stfs f3, 0x18(r1)
    stfs f4, 0x1c(r1)
    b lbl_fn_801B9598_000009A8
lbl_fn_801B9598_00000994:
    lwz r3, 0x4(r30)
    psq_l f1, 0x528(r3), 0, 0
    lfs f2, 0x530(r3)
    stfs f2, 0x1c(r1)
    psq_st f1, 0x0(r29), 0, 0
lbl_fn_801B9598_000009A8:
    lwz r4, 0x4(r30)
    lfs f0, lbl_80882548
    lfs f3, 0x2e4(r4)
    fcmpo cr0, f3, f0
    bge lbl_fn_801B9598_000009D8
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_801B9598_000009D8
    lfs f1, 0x5b0(r4)
    addi r4, r30, 0x18
    addi r5, r1, 0x14
    bl fn_8010A308
lbl_fn_801B9598_000009D8:
    addi r3, r1, 0x14
    lfs f2, 0x1c(r1)
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r31
    psq_st f1, 0x18(r30), 0, 0
    stfs f2, 0x20(r30)
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_801B9814(void)
{
    nofralloc
    lwz r4, 0x4(r4)
    lwz r0, 0x524(r4)
    cmpwi r0, 0x0
    bge lbl_fn_801B9814_00000A30
    li r4, 0x0
    b lbl_fn_801B9814_00000A3C
lbl_fn_801B9814_00000A30:
    mulli r0, r0, 0x30
    lwz r4, 0xec(r4)
    add r4, r4, r0
lbl_fn_801B9814_00000A3C:
    lfs f0, 0x2c(r4)
    lfs f1, 0x1c(r4)
    lfs f2, 0xc(r4)
    stfs f2, 0x0(r3)
    stfs f1, 0x4(r3)
    stfs f0, 0x8(r3)
    blr
}

asm void fn_801B9854(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801B9854_00000A80
    cmpwi r4, 0x0
    ble lbl_fn_801B9854_00000A80
    bl dtor_80084684
lbl_fn_801B9854_00000A80:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801B9894(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801B9894_00000AC0
    cmpwi r4, 0x0
    ble lbl_fn_801B9894_00000AC0
    bl dtor_80084684
lbl_fn_801B9894_00000AC0:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801B98D4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801B98D4_00000B00
    cmpwi r4, 0x0
    ble lbl_fn_801B98D4_00000B00
    bl dtor_80084684
lbl_fn_801B98D4_00000B00:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801B9914(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801B9914_00000B40
    cmpwi r4, 0x0
    ble lbl_fn_801B9914_00000B40
    bl dtor_80084684
lbl_fn_801B9914_00000B40:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801B9954(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801B9954_00000B80
    cmpwi r4, 0x0
    ble lbl_fn_801B9954_00000B80
    bl dtor_80084684
lbl_fn_801B9954_00000B80:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801B9994(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801B9994_00000BC0
    cmpwi r4, 0x0
    ble lbl_fn_801B9994_00000BC0
    bl dtor_80084684
lbl_fn_801B9994_00000BC0:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801B99D4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801B99D4_00000C00
    cmpwi r4, 0x0
    ble lbl_fn_801B99D4_00000C00
    bl dtor_80084684
lbl_fn_801B99D4_00000C00:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801B9A14(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801B9A14_00000C40
    cmpwi r4, 0x0
    ble lbl_fn_801B9A14_00000C40
    bl dtor_80084684
lbl_fn_801B9A14_00000C40:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801B9A54(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    lis r7, lbl_807815A0@ha
    psq_l f1, 0x0(r5), 0, 0
    stw r0, 0x114(r1)
    addi r7, r7, lbl_807815A0@l
    lfs f2, 0x8(r5)
    li r0, 0x54
    stfd f31, 0x100(r1)
    lfs f0, lbl_80882550
    psq_st f31, 0x108(r1), 0, 0
    stfd f30, 0xf0(r1)
    psq_st f30, 0xf8(r1), 0, 0
    stw r31, 0xec(r1)
    stw r30, 0xe8(r1)
    stw r29, 0xe4(r1)
    mr r29, r3
    psq_st f1, 0x8(r3), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x10(r3)
    lfs f2, 0x8(r6)
    stw r4, 0x4(r3)
    stw r7, 0x0(r3)
    psq_st f1, 0x14(r3), 0, 0
    stfs f2, 0x1c(r3)
    stfs f0, 0x4c(r3)
    stw r0, 0x560(r4)
    lwz r3, 0x4(r3)
    lwz r0, 0x12a4(r3)
    addi r30, r3, 0xb0
    srwi. r0, r0, 31
    beq lbl_fn_801B9A54_00000CDC
    bl fn_801539E0
lbl_fn_801B9A54_00000CDC:
    lwz r3, 0x4(r29)
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 25
    beq lbl_fn_801B9A54_00000CF4
    li r4, 0x0
    bl fn_80155DAC
lbl_fn_801B9A54_00000CF4:
    li r0, 0x1
    stw r0, 0x34c(r30)
    lfs f0, lbl_80882554
    stfs f0, 0x24c(r30)
    stfs f0, 0x238(r30)
    lfs f3, 0xc(r29)
    lfs f0, 0x18(r29)
    fcmpo cr0, f3, f0
    bge lbl_fn_801B9A54_00000D20
    li r5, 0x56
    b lbl_fn_801B9A54_00000D24
lbl_fn_801B9A54_00000D20:
    li r5, 0x55
lbl_fn_801B9A54_00000D24:
    lfs f1, lbl_80882550
    mr r3, r30
    lfs f2, lbl_80882558
    li r4, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f3, 0x1c(r29)
    addi r3, r1, 0x5c
    lfs f0, 0x10(r29)
    lfs f5, 0x18(r29)
    fsubs f6, f3, f0
    lfs f4, 0xc(r29)
    lfs f3, 0x14(r29)
    lfs f0, 0x8(r29)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x60(r1)
    stfs f0, 0x5c(r1)
    stfs f6, 0x64(r1)
    bl fn_805F9940
    addi r3, r1, 0x5c
    mr r4, r3
    bl fn_805F98D0
    addi r31, r1, 0x5c
    lfs f2, 0x64(r1)
    psq_l f1, 0x0(r31), 0, 0
    li r0, 0x0
    psq_st f1, 0x20(r29), 0, 0
    mr r3, r31
    lfs f0, lbl_80882550
    mr r4, r31
    stfs f2, 0x28(r29)
    stw r0, 0x2c(r29)
    stfs f0, 0x60(r1)
    bl fn_805F98D0
    lwz r3, 0x4(r29)
    addi r30, r1, 0x50
    lfs f2, 0x10(r29)
    psq_l f1, 0x8(r29), 0, 0
    psq_st f1, 0x528(r3), 0, 0
    lfs f0, lbl_8088255C
    stfs f2, 0x530(r3)
    lfs f2, 0x64(r1)
    psq_l f1, 0x0(r31), 0, 0
    fabs f3, f2
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x58(r1)
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801B9A54_00000E18
    lfs f3, 0x50(r1)
    lfs f0, lbl_80882550
    fcmpo cr0, f3, f0
    ble lbl_fn_801B9A54_00000E0C
    lfs f0, lbl_80882560
    b lbl_fn_801B9A54_00000E10
lbl_fn_801B9A54_00000E0C:
    lfs f0, lbl_80882564
lbl_fn_801B9A54_00000E10:
    stfs f0, 0x48(r1)
    b lbl_fn_801B9A54_00000E2C
lbl_fn_801B9A54_00000E18:
    frsp f2, f2
    lfs f1, 0x50(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_801B9A54_00000E2C:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x68
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80882550
    addi r4, r1, 0x38
    lfs f30, 0x70(r1)
    mr r5, r4
    lfs f31, 0x6c(r1)
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
    lfs f0, lbl_80882554
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x58(r1)
    stfs f3, 0xc8(r1)
    stfs f3, 0xcc(r1)
    stfs f3, 0xd0(r1)
    stfs f0, 0xd4(r1)
    stfs f13, 0x8(r1)
    stfs f31, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f13, 0x98(r1)
    stfs f31, 0x9c(r1)
    stfs f30, 0xa0(r1)
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
    lfs f0, lbl_8088255C
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801B9A54_00000F48
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80882550
    fcmpo cr0, f3, f0
    ble lbl_fn_801B9A54_00000F38
    lfs f0, lbl_80882560
    b lbl_fn_801B9A54_00000F3C
lbl_fn_801B9A54_00000F38:
    lfs f0, lbl_80882564
lbl_fn_801B9A54_00000F3C:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_801B9A54_00000F5C
lbl_fn_801B9A54_00000F48:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_801B9A54_00000F5C:
    addi r3, r1, 0x44
    lfs f2, lbl_80882550
    psq_l f1, 0x0(r3), 0, 0
    lwz r3, 0x4(r29)
    stfs f2, 0x4c(r1)
    stfs f2, 0x58(r1)
    frsp f2, f2
    psq_st f1, 0x534(r3), 0, 0
    stfs f2, 0x53c(r3)
    psq_st f1, 0x0(r30), 0, 0
    lwz r3, 0x4(r29)
    bl fn_801446F0
    lwz r3, 0x4(r29)
    li r4, 0x1
    li r5, 0x0
    li r6, 0x0
    bl fn_80176DFC
    lfs f3, 0x24(r29)
    lfs f0, lbl_80882550
    fcmpo cr0, f3, f0
    mfcr r0
    mr r3, r29
    extrwi r0, r0, 1, 1
    stw r0, 0x48(r29)
    psq_l f31, 0x108(r1), 0, 0
    lfd f31, 0x100(r1)
    psq_l f30, 0xf8(r1), 0, 0
    lfd f30, 0xf0(r1)
    lwz r31, 0xec(r1)
    lwz r30, 0xe8(r1)
    lwz r29, 0xe4(r1)
    lwz r0, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_801B9DE4(void)
{
    nofralloc
    stwu r1, -0x2f0(r1)
    mflr r0
    stw r0, 0x2f4(r1)
    addi r11, r1, 0x2d0
    stfd f31, 0x2e0(r1)
    psq_st f31, 0x2e8(r1), 0, 0
    stfd f30, 0x2d0(r1)
    psq_st f30, 0x2d8(r1), 0, 0
    bl _savegpr_25
    lwz r0, 0x2c(r3)
    mr r27, r3
    lwz r4, 0x4(r3)
    li r30, 0x0
    cmpwi r0, 0x0
    addi r31, r4, 0xb0
    beq lbl_fn_801B9DE4_0000103C
    cmpwi r0, 0x1
    beq lbl_fn_801B9DE4_000013C0
    cmpwi r0, 0x2
    beq lbl_fn_801B9DE4_00001D50
    b lbl_fn_801B9DE4_00001E4C
lbl_fn_801B9DE4_0000103C:
    lfs f30, 0x234(r31)
    mr r3, r31
    li r4, 0x0
    bl fn_80097D7C
    lfs f5, lbl_80882554
    fsubs f0, f1, f5
    fcmpo cr0, f30, f0
    cror eq, gt, eq
    bne lbl_fn_801B9DE4_00001128
    lwz r0, 0x22c(r31)
    cmpwi r0, 0x55
    bne lbl_fn_801B9DE4_000010E4
    lwz r5, 0x4(r27)
    addi r4, r1, 0x178
    lfs f3, lbl_80882568
    lis r3, lbl_8073B308@ha
    psq_l f1, 0x534(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lfs f2, 0x53c(r5)
    lfs f0, 0x17c(r1)
    stfs f2, 0x180(r1)
    fadds f1, f3, f0
    lfd f2, lbl_8073B308@l(r3)
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_80882568
    fcmpo cr0, f3, f0
    ble lbl_fn_801B9DE4_000010B4
    lfs f0, lbl_8088256C
    fsubs f3, f3, f0
lbl_fn_801B9DE4_000010B4:
    lfs f0, lbl_80882570
    fcmpo cr0, f3, f0
    bge lbl_fn_801B9DE4_000010C8
    lfs f0, lbl_8088256C
    fadds f3, f3, f0
lbl_fn_801B9DE4_000010C8:
    stfs f3, 0x17c(r1)
    addi r3, r1, 0x178
    lwz r4, 0x4(r27)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x534(r4), 0, 0
    lfs f2, 0x180(r1)
    stfs f2, 0x53c(r4)
lbl_fn_801B9DE4_000010E4:
    lfs f1, lbl_80882554
    mr r3, r31
    lfs f2, lbl_80882558
    li r4, 0x0
    li r5, 0x58
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r3, 0x4(r27)
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_80176DFC
    li r0, 0x1
    stw r0, 0x2c(r27)
    b lbl_fn_801B9DE4_00001E4C
lbl_fn_801B9DE4_00001128:
    lwz r3, 0x4(r27)
    addi r26, r1, 0x16c
    lwz r0, 0x22c(r31)
    psq_l f1, 0x528(r3), 0, 0
    lfs f2, 0x530(r3)
    cmpwi r0, 0x56
    psq_st f1, 0x0(r26), 0, 0
    stfs f2, 0x174(r1)
    bne lbl_fn_801B9DE4_00001248
    addi r28, r1, 0x160
    psq_l f1, 0x14(r27), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    lfs f2, 0x1c(r27)
    lfs f3, 0x164(r1)
    lfs f0, 0x170(r1)
    stfs f2, 0x168(r1)
    fsubs f0, f3, f0
    fcmpo cr0, f0, f5
    bge lbl_fn_801B9DE4_000013A4
    li r0, 0x2
    stw r0, 0x2c(r27)
    lfs f1, lbl_80882550
    mr r3, r31
    lfs f2, lbl_80882558
    li r4, 0x0
    li r5, 0x59
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80882554
    li r4, 0x0
    stfs f0, 0x238(r31)
    li r5, 0x0
    lfs f0, lbl_80882574
    li r6, 0x0
    stfs f0, 0x234(r31)
    psq_l f1, 0x0(r26), 0, 0
    psq_st f1, 0x30(r27), 0, 0
    lfs f0, lbl_80882578
    lfs f3, 0x34(r27)
    lfs f2, 0x174(r1)
    fsubs f0, f3, f0
    stfs f2, 0x38(r27)
    psq_l f1, 0x0(r28), 0, 0
    lfs f2, 0x168(r1)
    stfs f0, 0x34(r27)
    lwz r3, 0x4(r27)
    psq_st f1, 0x0(r26), 0, 0
    stfs f2, 0x174(r1)
    bl fn_80176DFC
    lwz r0, lbl_8087F498
    cmpwi r0, 0x0
    beq lbl_fn_801B9DE4_000013A4
    lwz r3, 0x4(r27)
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801B9DE4_00001228
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    subf. r0, r4, r0
    bne lbl_fn_801B9DE4_000013A4
lbl_fn_801B9DE4_00001228:
    lwz r3, lbl_8087F498
    li r5, 0xf
    lwz r4, 0x4(r27)
    li r6, 0x0
    lfs f1, lbl_80882554
    lfs f2, lbl_8088257C
    bl fn_803EA77C
    b lbl_fn_801B9DE4_000013A4
lbl_fn_801B9DE4_00001248:
    addi r28, r1, 0x154
    psq_l f1, 0x14(r27), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    lfs f2, 0x1c(r27)
    lfs f4, 0x158(r1)
    lfs f3, 0x170(r1)
    lfs f0, lbl_80882580
    fsubs f3, f4, f3
    stfs f2, 0x15c(r1)
    fcmpo cr0, f3, f0
    ble lbl_fn_801B9DE4_000013A4
    fmr f1, f5
    li r0, 0x2
    stw r0, 0x2c(r27)
    mr r3, r31
    lfs f2, lbl_80882558
    li r4, 0x0
    li r5, 0x5a
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80882554
    addi r4, r1, 0x148
    stfs f0, 0x238(r31)
    lis r3, lbl_8073B308@ha
    psq_l f1, 0x0(r26), 0, 0
    lfs f2, 0x174(r1)
    psq_st f1, 0x30(r27), 0, 0
    psq_l f1, 0x0(r28), 0, 0
    stfs f2, 0x38(r27)
    lfs f2, 0x15c(r1)
    psq_st f1, 0x3c(r27), 0, 0
    lwz r5, 0x4(r27)
    stfs f2, 0x44(r27)
    lfs f3, lbl_80882568
    psq_l f1, 0x534(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lfs f2, 0x53c(r5)
    lfs f0, 0x14c(r1)
    stfs f2, 0x150(r1)
    fadds f1, f3, f0
    lfd f2, lbl_8073B308@l(r3)
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_80882568
    fcmpo cr0, f3, f0
    ble lbl_fn_801B9DE4_00001310
    lfs f0, lbl_8088256C
    fsubs f3, f3, f0
lbl_fn_801B9DE4_00001310:
    lfs f0, lbl_80882570
    fcmpo cr0, f3, f0
    bge lbl_fn_801B9DE4_00001324
    lfs f0, lbl_8088256C
    fadds f3, f3, f0
lbl_fn_801B9DE4_00001324:
    stfs f3, 0x14c(r1)
    addi r3, r1, 0x148
    lwz r7, 0x4(r27)
    li r4, 0x0
    psq_l f1, 0x0(r3), 0, 0
    li r5, 0x0
    psq_st f1, 0x534(r7), 0, 0
    li r6, 0x0
    lfs f2, 0x150(r1)
    stfs f2, 0x53c(r7)
    lwz r3, 0x4(r27)
    bl fn_80176DFC
    lwz r0, lbl_8087F498
    cmpwi r0, 0x0
    beq lbl_fn_801B9DE4_000013A4
    lwz r3, 0x4(r27)
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801B9DE4_00001388
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    subf. r0, r4, r0
    bne lbl_fn_801B9DE4_000013A4
lbl_fn_801B9DE4_00001388:
    lwz r3, lbl_8087F498
    li r5, 0xf
    lwz r4, 0x4(r27)
    li r6, 0x0
    lfs f1, lbl_80882554
    lfs f2, lbl_8088257C
    bl fn_803EA77C
lbl_fn_801B9DE4_000013A4:
    addi r3, r1, 0x16c
    lwz r4, 0x4(r27)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x528(r4), 0, 0
    lfs f2, 0x174(r1)
    stfs f2, 0x530(r4)
    b lbl_fn_801B9DE4_00001E4C
lbl_fn_801B9DE4_000013C0:
    lfs f0, 0x24(r3)
    lfs f31, lbl_80882550
    fcmpo cr0, f0, f31
    mfcr r25
    lwz r0, 0x48(r4)
    extrwi r25, r25, 1, 1
    cmpwi r0, 0x0
    bne lbl_fn_801B9DE4_00001460
    lwz r0, 0x12a4(r4)
    clrlwi. r0, r0, 31
    bne lbl_fn_801B9DE4_00001460
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x1
    li r6, 0x0
    bl fn_800A56A8
    fabs f3, f1
    lfs f0, lbl_80882584
    frsp f3, f3
    fcmpo cr0, f3, f0
    ble lbl_fn_801B9DE4_00001478
    lfs f0, lbl_80882550
    fcmpo cr0, f1, f0
    ble lbl_fn_801B9DE4_00001428
    lfs f31, lbl_80882588
    b lbl_fn_801B9DE4_0000142C
lbl_fn_801B9DE4_00001428:
    lfs f31, lbl_8088258C
lbl_fn_801B9DE4_0000142C:
    fabs f5, f1
    lfs f0, lbl_80882550
    lfs f4, lbl_80882584
    fcmpo cr0, f1, f0
    lfs f3, lbl_80882590
    frsp f0, f5
    fsubs f0, f0, f4
    fdivs f0, f0, f3
    fmuls f31, f31, f0
    mfcr r0
    extrwi r0, r0, 1, 1
    stw r0, 0x48(r27)
    b lbl_fn_801B9DE4_00001478
lbl_fn_801B9DE4_00001460:
    cmpwi r25, 0x0
    beq lbl_fn_801B9DE4_00001470
    lfs f31, lbl_80882588
    b lbl_fn_801B9DE4_00001474
lbl_fn_801B9DE4_00001470:
    lfs f31, lbl_8088258C
lbl_fn_801B9DE4_00001474:
    stw r25, 0x48(r3)
lbl_fn_801B9DE4_00001478:
    lfs f0, lbl_80882588
    addi r3, r1, 0x13c
    cmpwi r25, 0x0
    addi r4, r1, 0x130
    fdivs f0, f31, f0
    li r29, 0x1
    stfs f0, 0x238(r31)
    lwz r5, 0x4(r27)
    psq_l f1, 0x528(r5), 0, 0
    lfs f2, 0x530(r5)
    stfs f2, 0x144(r1)
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x534(r5), 0, 0
    lfs f2, 0x53c(r5)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x138(r1)
    beq lbl_fn_801B9DE4_000014C4
    fmr f3, f31
    b lbl_fn_801B9DE4_000014C8
lbl_fn_801B9DE4_000014C4:
    fneg f3, f31
lbl_fn_801B9DE4_000014C8:
    lfs f0, 0x28(r27)
    cmpwi r25, 0x0
    fmuls f6, f0, f3
    beq lbl_fn_801B9DE4_000014E0
    fmr f3, f31
    b lbl_fn_801B9DE4_000014E4
lbl_fn_801B9DE4_000014E0:
    fneg f3, f31
lbl_fn_801B9DE4_000014E4:
    lfs f0, 0x24(r27)
    cmpwi r25, 0x0
    fmuls f7, f0, f3
    beq lbl_fn_801B9DE4_000014FC
    fmr f4, f31
    b lbl_fn_801B9DE4_00001500
lbl_fn_801B9DE4_000014FC:
    fneg f4, f31
lbl_fn_801B9DE4_00001500:
    lfs f3, 0x20(r27)
    lfs f0, 0x140(r1)
    fmuls f8, f3, f4
    lfs f5, 0x13c(r1)
    lfs f3, 0x144(r1)
    fadds f4, f0, f7
    lfs f0, lbl_80882550
    fadds f5, f5, f8
    fadds f3, f3, f6
    stfs f8, 0xc8(r1)
    fcmpo cr0, f31, f0
    stfs f7, 0xcc(r1)
    stfs f6, 0xd0(r1)
    stfs f5, 0x13c(r1)
    stfs f4, 0x140(r1)
    stfs f3, 0x144(r1)
    ble lbl_fn_801B9DE4_0000164C
    cmpwi r25, 0x0
    beq lbl_fn_801B9DE4_00001554
    addi r3, r27, 0x14
    b lbl_fn_801B9DE4_00001558
lbl_fn_801B9DE4_00001554:
    addi r3, r27, 0x8
lbl_fn_801B9DE4_00001558:
    addi r26, r1, 0x124
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r26), 0, 0
    lfs f2, 0x8(r3)
    lfs f4, 0x128(r1)
    lfs f3, 0x140(r1)
    lfs f0, lbl_80882554
    fsubs f3, f4, f3
    stfs f2, 0x12c(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_801B9DE4_0000173C
    li r0, 0x2
    stw r0, 0x2c(r27)
    lfs f1, lbl_80882550
    mr r3, r31
    lfs f2, lbl_80882558
    li r4, 0x0
    li r5, 0x59
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80882554
    addi r3, r1, 0x13c
    stfs f0, 0x238(r31)
    li r29, 0x0
    lfs f0, lbl_80882574
    stfs f0, 0x234(r31)
    lfs f0, lbl_80882578
    lfs f2, 0x144(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x30(r27), 0, 0
    psq_l f1, 0x0(r26), 0, 0
    lfs f3, 0x34(r27)
    stfs f2, 0x38(r27)
    fsubs f0, f3, f0
    lfs f2, 0x12c(r1)
    stfs f0, 0x34(r27)
    lwz r0, lbl_8087F498
    psq_st f1, 0x0(r3), 0, 0
    cmpwi r0, 0x0
    stfs f2, 0x144(r1)
    beq lbl_fn_801B9DE4_0000173C
    lwz r3, 0x4(r27)
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801B9DE4_0000162C
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    subf. r0, r4, r0
    bne lbl_fn_801B9DE4_0000173C
lbl_fn_801B9DE4_0000162C:
    lwz r3, lbl_8087F498
    li r5, 0xf
    lwz r4, 0x4(r27)
    li r6, 0x0
    lfs f1, lbl_80882554
    lfs f2, lbl_8088257C
    bl fn_803EA77C
    b lbl_fn_801B9DE4_0000173C
lbl_fn_801B9DE4_0000164C:
    bge lbl_fn_801B9DE4_0000173C
    cmpwi r25, 0x0
    bne lbl_fn_801B9DE4_00001660
    addi r3, r27, 0x14
    b lbl_fn_801B9DE4_00001664
lbl_fn_801B9DE4_00001660:
    addi r3, r27, 0x8
lbl_fn_801B9DE4_00001664:
    addi r26, r1, 0x118
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r26), 0, 0
    lfs f2, 0x8(r3)
    lfs f4, 0x11c(r1)
    lfs f3, 0x140(r1)
    lfs f0, lbl_80882580
    fsubs f3, f4, f3
    stfs f2, 0x120(r1)
    fcmpo cr0, f3, f0
    ble lbl_fn_801B9DE4_0000173C
    li r0, 0x2
    stw r0, 0x2c(r27)
    lfs f1, lbl_80882550
    mr r3, r31
    lfs f2, lbl_80882558
    li r4, 0x0
    li r5, 0x5a
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80882554
    addi r3, r1, 0x13c
    stfs f0, 0x238(r31)
    li r29, 0x0
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x144(r1)
    stfs f2, 0x38(r27)
    lfs f2, 0x120(r1)
    psq_st f1, 0x30(r27), 0, 0
    psq_l f1, 0x0(r26), 0, 0
    psq_st f1, 0x3c(r27), 0, 0
    stfs f2, 0x44(r27)
    lwz r0, lbl_8087F498
    cmpwi r0, 0x0
    beq lbl_fn_801B9DE4_0000173C
    lwz r3, 0x4(r27)
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801B9DE4_00001720
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    subf. r0, r4, r0
    bne lbl_fn_801B9DE4_0000173C
lbl_fn_801B9DE4_00001720:
    lwz r3, lbl_8087F498
    li r5, 0xf
    lwz r4, 0x4(r27)
    li r6, 0x0
    lfs f1, lbl_80882554
    lfs f2, lbl_8088257C
    bl fn_803EA77C
lbl_fn_801B9DE4_0000173C:
    cmpwi r29, 0x0
    li r0, 0x0
    stw r0, 0x28c(r1)
    stw r0, 0x290(r1)
    stw r0, 0x294(r1)
    stw r0, 0x298(r1)
    beq lbl_fn_801B9DE4_00001A8C
    lwz r5, 0x4(r27)
    addi r3, r1, 0x228
    lfs f3, lbl_80882550
    li r4, 0x79
    lfs f0, lbl_80882554
    stfs f3, 0xb0(r1)
    stfs f3, 0xb4(r1)
    stfs f0, 0xb8(r1)
    lfs f1, 0x538(r5)
    bl fn_805F8E70
    addi r4, r1, 0xb0
    addi r3, r1, 0x228
    mr r5, r4
    bl fn_805F93C0
    lfs f4, 0xb8(r1)
    addi r3, r1, 0x1f8
    lfs f5, lbl_80882594
    li r4, 0x79
    lfs f3, 0xb4(r1)
    fmuls f6, f4, f5
    lfs f4, 0x144(r1)
    fmuls f7, f3, f5
    lfs f0, 0xb0(r1)
    lfs f3, 0x140(r1)
    fmuls f5, f0, f5
    fsubs f8, f3, f7
    lfs f0, 0x13c(r1)
    fsubs f4, f4, f6
    lfs f3, lbl_80882550
    fsubs f9, f0, f5
    stfs f4, 0x114(r1)
    lfs f0, lbl_80882554
    stfs f9, 0x10c(r1)
    stfs f8, 0x110(r1)
    lwz r5, 0x4(r27)
    stfs f5, 0xbc(r1)
    stfs f3, 0x98(r1)
    stfs f3, 0x9c(r1)
    stfs f0, 0xa0(r1)
    lfs f1, 0x538(r5)
    stfs f7, 0xc0(r1)
    stfs f6, 0xc4(r1)
    bl fn_805F8E70
    addi r4, r1, 0x98
    addi r3, r1, 0x1f8
    mr r5, r4
    bl fn_805F93C0
    lfs f4, lbl_80882594
    addi r4, r1, 0x258
    lfs f0, 0x9c(r1)
    addi r5, r1, 0x10c
    lfs f5, 0xa0(r1)
    addi r6, r1, 0x100
    fmuls f6, f0, f4
    lfs f0, 0x98(r1)
    lfs f3, 0x140(r1)
    fmuls f5, f5, f4
    fmuls f7, f0, f4
    lfs f4, 0x144(r1)
    fadds f8, f4, f5
    lfs f0, 0x13c(r1)
    fadds f9, f3, f6
    lfs f3, lbl_80882598
    fadds f10, f0, f7
    lfs f4, 0x110(r1)
    fsubs f0, f9, f3
    stfs f7, 0xa4(r1)
    fsubs f3, f4, f3
    lwz r3, lbl_8087EE98
    stfs f6, 0xa8(r1)
    lis r7, 0x8000
    stfs f5, 0xac(r1)
    li r8, 0x0
    li r9, 0x0
    stfs f10, 0x100(r1)
    stfs f8, 0x108(r1)
    stfs f3, 0x110(r1)
    stfs f0, 0x104(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_801B9DE4_00001A8C
    lfs f0, 0x288(r1)
    addi r3, r1, 0x80
    lfs f3, 0x284(r1)
    addi r26, r1, 0x8c
    fneg f5, f0
    lfs f0, 0x280(r1)
    fneg f6, f3
    lfs f4, 0x25c(r1)
    fneg f0, f0
    lfs f3, 0x264(r1)
    frsp f2, f5
    stfs f6, 0x84(r1)
    stfs f0, 0x80(r1)
    fabs f6, f2
    lfs f0, lbl_8088255C
    stfs f4, 0x13c(r1)
    psq_l f1, 0x0(r3), 0, 0
    frsp f4, f6
    stfs f3, 0x144(r1)
    stfs f5, 0x88(r1)
    fcmpo cr0, f4, f0
    psq_st f1, 0x0(r26), 0, 0
    stfs f2, 0x94(r1)
    bge lbl_fn_801B9DE4_00001920
    lfs f3, 0x8c(r1)
    lfs f0, lbl_80882550
    fcmpo cr0, f3, f0
    ble lbl_fn_801B9DE4_00001914
    lfs f0, lbl_80882560
    b lbl_fn_801B9DE4_00001918
lbl_fn_801B9DE4_00001914:
    lfs f0, lbl_80882564
lbl_fn_801B9DE4_00001918:
    stfs f0, 0x60(r1)
    b lbl_fn_801B9DE4_00001934
lbl_fn_801B9DE4_00001920:
    frsp f2, f2
    lfs f1, 0x8c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x60(r1)
lbl_fn_801B9DE4_00001934:
    lfs f0, 0x60(r1)
    addi r3, r1, 0x188
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80882550
    addi r4, r1, 0x50
    lfs f30, 0x190(r1)
    mr r5, r4
    lfs f31, 0x18c(r1)
    addi r3, r1, 0x1b8
    lfs f13, 0x188(r1)
    lfs f12, 0x1a0(r1)
    lfs f11, 0x19c(r1)
    lfs f10, 0x198(r1)
    lfs f9, 0x1b0(r1)
    lfs f8, 0x1ac(r1)
    lfs f7, 0x1a8(r1)
    lfs f6, 0x1b4(r1)
    lfs f5, 0x1a4(r1)
    lfs f4, 0x194(r1)
    lfs f0, lbl_80882554
    psq_l f1, 0x0(r26), 0, 0
    lfs f2, 0x94(r1)
    stfs f3, 0x1e8(r1)
    stfs f3, 0x1ec(r1)
    stfs f3, 0x1f0(r1)
    stfs f0, 0x1f4(r1)
    stfs f13, 0x20(r1)
    stfs f31, 0x24(r1)
    stfs f30, 0x28(r1)
    stfs f13, 0x1b8(r1)
    stfs f31, 0x1bc(r1)
    stfs f30, 0x1c0(r1)
    stfs f10, 0x2c(r1)
    stfs f11, 0x30(r1)
    stfs f12, 0x34(r1)
    stfs f10, 0x1c8(r1)
    stfs f11, 0x1cc(r1)
    stfs f12, 0x1d0(r1)
    stfs f7, 0x38(r1)
    stfs f8, 0x3c(r1)
    stfs f9, 0x40(r1)
    stfs f7, 0x1d8(r1)
    stfs f8, 0x1dc(r1)
    stfs f9, 0x1e0(r1)
    stfs f4, 0x44(r1)
    stfs f5, 0x48(r1)
    stfs f6, 0x4c(r1)
    stfs f4, 0x1c4(r1)
    stfs f5, 0x1d4(r1)
    stfs f6, 0x1e4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x58(r1)
    bl fn_805F9750
    lfs f2, 0x58(r1)
    lfs f0, lbl_8088255C
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801B9DE4_00001A50
    lfs f3, 0x54(r1)
    lfs f0, lbl_80882550
    fcmpo cr0, f3, f0
    ble lbl_fn_801B9DE4_00001A40
    lfs f0, lbl_80882560
    b lbl_fn_801B9DE4_00001A44
lbl_fn_801B9DE4_00001A40:
    lfs f0, lbl_80882564
lbl_fn_801B9DE4_00001A44:
    fneg f0, f0
    stfs f0, 0x5c(r1)
    b lbl_fn_801B9DE4_00001A64
lbl_fn_801B9DE4_00001A50:
    lfs f1, 0x54(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x5c(r1)
lbl_fn_801B9DE4_00001A64:
    lfs f2, lbl_80882550
    addi r3, r1, 0x5c
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x130
    stfs f2, 0x64(r1)
    stfs f2, 0x94(r1)
    frsp f2, f2
    psq_st f1, 0x0(r26), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x138(r1)
lbl_fn_801B9DE4_00001A8C:
    addi r3, r1, 0x13c
    lwz r6, 0x4(r27)
    psq_l f1, 0x0(r3), 0, 0
    lis r4, lbl_8073B36C@ha
    lfs f2, 0x144(r1)
    addi r5, r1, 0x130
    mr r3, r31
    addi r4, r4, lbl_8073B36C@l
    psq_st f1, 0x528(r6), 0, 0
    li r29, 0x0
    psq_l f1, 0x0(r5), 0, 0
    li r5, 0x0
    stfs f2, 0x530(r6)
    lfs f2, 0x138(r1)
    lwz r6, 0x4(r27)
    psq_st f1, 0x534(r6), 0, 0
    stfs f2, 0x53c(r6)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_801B9DE4_00001AE4
    li r0, 0x0
    b lbl_fn_801B9DE4_00001AF0
lbl_fn_801B9DE4_00001AE4:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r31)
    add r0, r3, r0
lbl_fn_801B9DE4_00001AF0:
    cmpwi r0, 0x0
    beq lbl_fn_801B9DE4_00001B48
    lis r4, lbl_8073B36C@ha
    mr r3, r31
    addi r4, r4, lbl_8073B36C@l
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_801B9DE4_00001B1C
    li r3, 0x0
    b lbl_fn_801B9DE4_00001B28
lbl_fn_801B9DE4_00001B1C:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r31)
    add r3, r3, r0
lbl_fn_801B9DE4_00001B28:
    lfs f0, 0x2c(r3)
    addi r4, r1, 0x74
    lfs f3, 0x1c(r3)
    lfs f4, 0xc(r3)
    stfs f4, 0x74(r1)
    stfs f3, 0x78(r1)
    stfs f0, 0x7c(r1)
    b lbl_fn_801B9DE4_00001B4C
lbl_fn_801B9DE4_00001B48:
    addi r4, r1, 0x13c
lbl_fn_801B9DE4_00001B4C:
    psq_l f1, 0x0(r4), 0, 0
    addi r3, r1, 0xf0
    lfs f2, 0x8(r4)
    addi r31, r1, 0xe0
    lfs f0, lbl_8088259C
    lis r26, lbl_8073B36C@ha
    psq_st f1, 0x0(r3), 0, 0
    lwz r3, lbl_8087F8A0
    stfs f2, 0xf8(r1)
    stfs f0, 0xfc(r1)
    stfs f0, 0xec(r1)
    lwz r28, 0x48(r3)
    b lbl_fn_801B9DE4_00001CF0
lbl_fn_801B9DE4_00001B80:
    lwz r0, 0x4(r27)
    cmplw r28, r0
    beq lbl_fn_801B9DE4_00001CEC
    lwz r6, 0x38(r28)
    li r4, 0x0
    li r3, 0x0
    li r5, 0x0
    rlwinm r0, r6, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_801B9DE4_00001BB8
    clrlwi r0, r6, 31
    cmplwi r0, 0x1
    beq lbl_fn_801B9DE4_00001BB8
    li r5, 0x1
lbl_fn_801B9DE4_00001BB8:
    cmpwi r5, 0x0
    beq lbl_fn_801B9DE4_00001BD4
    lwz r0, 0x7e0(r28)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_801B9DE4_00001BD4
    li r3, 0x1
lbl_fn_801B9DE4_00001BD4:
    cmpwi r3, 0x0
    beq lbl_fn_801B9DE4_00001C08
    lwz r0, 0x55c(r28)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_801B9DE4_00001BFC
    lwz r0, 0x560(r28)
    cmpwi r0, 0x1c
    bne lbl_fn_801B9DE4_00001BFC
    li r3, 0x1
lbl_fn_801B9DE4_00001BFC:
    cmpwi r3, 0x0
    bne lbl_fn_801B9DE4_00001C08
    li r4, 0x1
lbl_fn_801B9DE4_00001C08:
    cmpwi r4, 0x0
    beq lbl_fn_801B9DE4_00001CEC
    rlwinm r0, r6, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_801B9DE4_00001CEC
    lwz r0, 0x55c(r28)
    cmpwi r0, 0x6
    bne lbl_fn_801B9DE4_00001CEC
    lwz r0, 0x560(r28)
    cmpwi r0, 0x54
    bne lbl_fn_801B9DE4_00001CEC
    addi r25, r28, 0xb0
    addi r4, r26, lbl_8073B36C@l
    mr r3, r25
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_801B9DE4_00001C58
    li r0, 0x0
    b lbl_fn_801B9DE4_00001C64
lbl_fn_801B9DE4_00001C58:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r25)
    add r0, r3, r0
lbl_fn_801B9DE4_00001C64:
    cmpwi r0, 0x0
    beq lbl_fn_801B9DE4_00001CBC
    addi r25, r28, 0xb0
    addi r4, r26, lbl_8073B36C@l
    mr r3, r25
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_801B9DE4_00001C90
    li r3, 0x0
    b lbl_fn_801B9DE4_00001C9C
lbl_fn_801B9DE4_00001C90:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r25)
    add r3, r3, r0
lbl_fn_801B9DE4_00001C9C:
    lfs f0, 0x2c(r3)
    addi r5, r1, 0x68
    lfs f3, 0x1c(r3)
    lfs f4, 0xc(r3)
    stfs f4, 0x68(r1)
    stfs f3, 0x6c(r1)
    stfs f0, 0x70(r1)
    b lbl_fn_801B9DE4_00001CC0
lbl_fn_801B9DE4_00001CBC:
    addi r5, r28, 0x528
lbl_fn_801B9DE4_00001CC0:
    psq_l f1, 0x0(r5), 0, 0
    mr r4, r31
    lfs f2, 0x8(r5)
    addi r3, r1, 0xf0
    stfs f2, 0xe8(r1)
    psq_st f1, 0x0(r31), 0, 0
    bl fn_80051A88
    cmpwi r3, 0x0
    beq lbl_fn_801B9DE4_00001CEC
    li r29, 0x1
    b lbl_fn_801B9DE4_00001CF8
lbl_fn_801B9DE4_00001CEC:
    lwz r28, 0x14ac(r28)
lbl_fn_801B9DE4_00001CF0:
    cmpwi r28, 0x0
    bne lbl_fn_801B9DE4_00001B80
lbl_fn_801B9DE4_00001CF8:
    cmpwi r29, 0x0
    beq lbl_fn_801B9DE4_00001D28
    lfs f4, lbl_808825A0
    lfs f3, 0x4c(r27)
    lfs f0, lbl_808825A4
    fadds f3, f4, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801B9DE4_00001D1C
    b lbl_fn_801B9DE4_00001D20
lbl_fn_801B9DE4_00001D1C:
    fmr f3, f0
lbl_fn_801B9DE4_00001D20:
    stfs f3, 0x4c(r27)
    b lbl_fn_801B9DE4_00001E4C
lbl_fn_801B9DE4_00001D28:
    lfs f4, 0x4c(r27)
    lfs f3, lbl_808825A0
    lfs f0, lbl_80882550
    fsubs f3, f4, f3
    fcmpo cr0, f3, f0
    ble lbl_fn_801B9DE4_00001D44
    b lbl_fn_801B9DE4_00001D48
lbl_fn_801B9DE4_00001D44:
    fmr f3, f0
lbl_fn_801B9DE4_00001D48:
    stfs f3, 0x4c(r27)
    b lbl_fn_801B9DE4_00001E4C
lbl_fn_801B9DE4_00001D50:
    lwz r0, 0x22c(r31)
    cmpwi r0, 0x5a
    bne lbl_fn_801B9DE4_00001E18
    lfs f30, 0x234(r31)
    mr r3, r31
    li r4, 0x0
    bl fn_80097D7C
    fdivs f3, f30, f1
    lfs f0, lbl_808825A8
    lfs f10, lbl_80882554
    fmuls f0, f0, f3
    fcmpo cr0, f10, f0
    bge lbl_fn_801B9DE4_00001D88
    b lbl_fn_801B9DE4_00001DA4
lbl_fn_801B9DE4_00001D88:
    lfs f30, 0x234(r31)
    mr r3, r31
    li r4, 0x0
    bl fn_80097D7C
    fdivs f3, f30, f1
    lfs f0, lbl_808825A8
    fmuls f10, f0, f3
lbl_fn_801B9DE4_00001DA4:
    lfs f0, 0x40(r27)
    addi r3, r1, 0xd4
    lfs f4, 0x34(r27)
    lfs f3, 0x3c(r27)
    fsubs f8, f0, f4
    lfs f0, 0x30(r27)
    lfs f5, 0x44(r27)
    fsubs f7, f3, f0
    lfs f3, 0x38(r27)
    fmuls f6, f8, f10
    fsubs f9, f5, f3
    stfs f7, 0x14(r1)
    fmuls f5, f7, f10
    fadds f4, f6, f4
    lwz r4, 0x4(r27)
    fmuls f7, f9, f10
    fadds f0, f5, f0
    stfs f4, 0xd8(r1)
    stfs f0, 0xd4(r1)
    fadds f2, f7, f3
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x528(r4), 0, 0
    stfs f8, 0x18(r1)
    stfs f9, 0x1c(r1)
    stfs f5, 0x8(r1)
    stfs f6, 0xc(r1)
    stfs f7, 0x10(r1)
    stfs f2, 0xdc(r1)
    stfs f2, 0x530(r4)
lbl_fn_801B9DE4_00001E18:
    lfs f30, 0x234(r31)
    mr r3, r31
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f30, f1
    cror eq, gt, eq
    bne lbl_fn_801B9DE4_00001E4C
    lwz r3, 0x4(r27)
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_80176DFC
    li r30, 0x1
lbl_fn_801B9DE4_00001E4C:
    psq_l f31, 0x2e8(r1), 0, 0
    mr r3, r30
    lfd f31, 0x2e0(r1)
    psq_l f30, 0x2d8(r1), 0, 0
    lfd f30, 0x2d0(r1)
    addi r11, r1, 0x2d0
    bl _restgpr_25
    lwz r0, 0x2f4(r1)
    mtlr r0
    addi r1, r1, 0x2f0
    blr
}
