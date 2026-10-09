#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_22(void);
extern void _restgpr_25(void);
extern void _savegpr_22(void);
extern void _savegpr_25(void);
extern void dtor_80084684(void);
extern void fn_8000D124(void);
extern void fn_8000D760(void);
extern void fn_8000D9E8(void);
extern void fn_8000E18C(void);
extern void fn_80011034(void);
extern void fn_80013338(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_8004203C(void);
extern void fn_80057A68(void);
extern void fn_8005B3CC(void);
extern void fn_8005B5F8(void);
extern void fn_8005B6E8(void);
extern void fn_8006AFF8(void);
extern void fn_800897D8(void);
extern void fn_80097C08(void);
extern void fn_80097CCC(void);
extern void fn_800CB5C8(void);
extern void fn_800D5738(void);
extern void fn_800D5808(void);
extern void fn_800DC12C(void);
extern void fn_800DC288(void);
extern void fn_800EB7A0(void);
extern void fn_800EC204(void);
extern void fn_800EC24C(void);
extern void fn_800F7FD8(void);
extern void fn_800F8548(void);
extern void fn_8011F91C(void);
extern void fn_80121F00(void);
extern void fn_8013655C(void);
extern void fn_8013C504(void);
extern void fn_8015495C(void);
extern void fn_8016DA4C(void);
extern void fn_8016E970(void);
extern void fn_8017039C(void);
extern void fn_80178A6C(void);
extern void fn_80219E6C(void);
extern void fn_80237518(void);
extern void fn_802375C4(void);
extern void fn_80237654(void);
extern void fn_802376D0(void);
extern void fn_802377B8(void);
extern void fn_8023780C(void);
extern void fn_8023781C(void);
extern void fn_80237874(void);
extern void fn_80239DAC(void);
extern void fn_80244CCC(void);
extern void fn_80288DD8(void);
extern void fn_80288E30(void);
extern void fn_802914F8(void);
extern void fn_8035B694(void);
extern void fn_8035B78C(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473E74(void);
extern void fn_80473E8C(void);
extern void fn_80473F50(void);
extern void fn_805F8E70(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_80682428(void);
extern void fn_80682544(void);
extern void fn_80684600(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);
extern void fn_8068B100(void);
extern void fn_806958E0(void);
extern void fn_806959D8(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_807450E8[];
extern u8 lbl_80745314[];
extern u8 lbl_807772B0[];
extern u8 lbl_807772D0[];
extern u8 lbl_807857E0[];
extern u8 lbl_8078FBB0[];
extern u8 lbl_807C7030[];
extern u8 lbl_807C8398[];

/* Small data declarations */
extern u32 lbl_8087D708;
extern u32 lbl_8087EF10;
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_808839F4;
extern u32 lbl_808839F8;
extern u32 lbl_808839FC;
extern u32 lbl_80883A08;
extern u32 lbl_80883A20;
extern u32 lbl_80883A38;
extern u32 lbl_80883A44;
extern u32 lbl_80883A48;
extern u32 lbl_80883A70;
extern u32 lbl_80883A74;
extern u32 lbl_80883A84;
extern u32 lbl_80883A88;
extern u32 lbl_80883A8C;
extern u32 lbl_80883A90;
extern u32 lbl_80883A98;
extern u32 lbl_80883A9C;
extern u32 lbl_80883AA0;
extern u32 lbl_80883AA4;
extern u32 lbl_80883AA8;
extern u32 lbl_80883AAC;

/* Function declarations */
void fn_80287400(void);
void fn_80287788(void);
void fn_802878EC(void);
void fn_80287E54(void);
void fn_80287E7C(void);
void fn_80288390(void);
void fn_802883A4(void);
void fn_802885EC(void);

asm void fn_80287400(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    stfd f31, 0x100(r1)
    psq_st f31, 0x108(r1), 0, 0
    stfd f30, 0xf0(r1)
    psq_st f30, 0xf8(r1), 0, 0
    stw r31, 0xec(r1)
    stw r30, 0xe8(r1)
    mr r30, r5
    stw r29, 0xe4(r1)
    mr r29, r4
    stw r28, 0xe0(r1)
    mr r28, r3
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x9
    bne lbl_fn_80287400_0000004C
    li r3, 0x0
    b lbl_fn_80287400_00000358
lbl_fn_80287400_0000004C:
    lfs f0, 0x538(r3)
    addi r5, r1, 0x50
    stfs f0, 0x1540(r3)
    addi r31, r1, 0x5c
    lfs f0, 0x530(r3)
    lfs f3, 0x530(r4)
    lfs f5, 0x52c(r4)
    fsubs f2, f3, f0
    lfs f4, 0x52c(r3)
    lfs f3, 0x528(r4)
    fsubs f4, f5, f4
    lfs f0, 0x528(r3)
    stfs f2, 0x58(r1)
    fsubs f3, f3, f0
    lfs f0, lbl_80883A08
    stfs f4, 0x54(r1)
    frsp f4, f2
    stfs f3, 0x50(r1)
    fabs f3, f4
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    frsp f3, f3
    stfs f2, 0x64(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_80287400_000000D4
    lfs f3, 0x5c(r1)
    lfs f0, lbl_808839F8
    fcmpo cr0, f3, f0
    ble lbl_fn_80287400_000000C8
    lfs f0, lbl_80883A44
    b lbl_fn_80287400_000000CC
lbl_fn_80287400_000000C8:
    lfs f0, lbl_80883A48
lbl_fn_80287400_000000CC:
    stfs f0, 0x48(r1)
    b lbl_fn_80287400_000000E8
lbl_fn_80287400_000000D4:
    fmr f2, f4
    lfs f1, 0x5c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_80287400_000000E8:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x68
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808839F8
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
    lfs f0, lbl_808839FC
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x64(r1)
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
    lfs f0, lbl_80883A08
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80287400_00000204
    lfs f3, 0x3c(r1)
    lfs f0, lbl_808839F8
    fcmpo cr0, f3, f0
    ble lbl_fn_80287400_000001F4
    lfs f0, lbl_80883A44
    b lbl_fn_80287400_000001F8
lbl_fn_80287400_000001F4:
    lfs f0, lbl_80883A48
lbl_fn_80287400_000001F8:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_80287400_00000218
lbl_fn_80287400_00000204:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_80287400_00000218:
    addi r3, r1, 0x44
    lfs f4, lbl_808839F8
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_807450E8@ha
    psq_st f1, 0x0(r31), 0, 0
    fmr f2, f4
    lfs f0, 0x1540(r28)
    lfs f3, 0x60(r1)
    stfs f2, 0x64(r1)
    fsubs f1, f3, f0
    lfd f2, lbl_807450E8@l(r3)
    stfs f4, 0x4c(r1)
    stfs f3, 0x1544(r28)
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_808839F4
    fcmpo cr0, f3, f0
    ble lbl_fn_80287400_00000268
    lfs f0, lbl_80883A70
    fsubs f3, f3, f0
lbl_fn_80287400_00000268:
    lfs f0, lbl_80883A74
    fcmpo cr0, f3, f0
    bge lbl_fn_80287400_0000027C
    lfs f0, lbl_80883A70
    fadds f3, f3, f0
lbl_fn_80287400_0000027C:
    lfs f0, lbl_80883A84
    fcmpo cr0, f0, f3
    bge lbl_fn_80287400_0000029C
    lfs f0, lbl_80883A88
    fcmpo cr0, f3, f0
    bge lbl_fn_80287400_0000029C
    li r3, 0x0
    b lbl_fn_80287400_00000358
lbl_fn_80287400_0000029C:
    lwz r3, 0x14f4(r28)
    li r0, 0x0
    stw r0, 0x153c(r28)
    cmpwi r3, 0x0
    stw r30, 0x1538(r28)
    stw r29, 0x1588(r28)
    stw r0, 0x14b0(r28)
    stw r0, 0x158c(r28)
    beq lbl_fn_80287400_000002C8
    lwz r0, 0x68(r3)
    b lbl_fn_80287400_000002CC
lbl_fn_80287400_000002C8:
    li r0, 0x5a
lbl_fn_80287400_000002CC:
    stw r0, 0x1594(r28)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r28)
    addi r3, r28, 0x151c
    li r4, 0xf
    li r5, 0x0
    bl fn_800CB5C8
    lwz r3, lbl_8087F3C0
    mr r4, r28
    li r5, 0xc8
    li r6, 0x0
    bl fn_80239DAC
    li r0, 0x9
    stw r0, 0x58c(r28)
    lfs f1, lbl_808839F8
    addi r3, r28, 0xb0
    li r4, 0x0
    bl fn_80097CCC
    lfs f3, lbl_808839FC
    li r0, 0x1
    lfs f0, lbl_80883A20
    addi r3, r28, 0xb0
    stw r0, 0x3fc(r28)
    li r4, 0x0
    lfs f1, lbl_808839F8
    li r5, 0x14d
    stfs f3, 0x2fc(r28)
    li r6, 0x0
    lfs f2, lbl_80883A38
    li r7, 0x0
    stfs f0, 0x2e8(r28)
    li r8, 0x1
    bl fn_80097C08
    li r3, 0x1
lbl_fn_80287400_00000358:
    lwz r0, 0x114(r1)
    psq_l f31, 0x108(r1), 0, 0
    lfd f31, 0x100(r1)
    psq_l f30, 0xf8(r1), 0, 0
    lfd f30, 0xf0(r1)
    lwz r31, 0xec(r1)
    lwz r30, 0xe8(r1)
    lwz r29, 0xe4(r1)
    lwz r28, 0xe0(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_80287788(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x0
    li r6, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    mr r4, r31
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    addi r3, r31, 0x151c
    li r4, 0x0
    li r5, 0x0
    bl fn_800CB5C8
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0xc8
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, 0x14f4(r31)
    li r0, 0x0
    stw r0, 0x14b0(r31)
    cmpwi r3, 0x0
    stw r0, 0x158c(r31)
    beq lbl_fn_80287788_000003F4
    lwz r0, 0x68(r3)
    b lbl_fn_80287788_000003F8
lbl_fn_80287788_000003F4:
    li r0, 0x5a
lbl_fn_80287788_000003F8:
    stw r0, 0x1594(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    addi r3, r31, 0x151c
    li r4, 0xf
    li r5, 0x0
    bl fn_800CB5C8
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0xc8
    li r6, 0x0
    bl fn_80239DAC
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x48(r12)
    mtctr r12
    bctrl
    mr r3, r31
    bl fn_80178A6C
    mr r3, r31
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    bl fn_8015495C
    mr r3, r31
    bl fn_8016DA4C
    li r0, 0x2
    stw r0, 0x58c(r31)
    lfs f1, lbl_808839F8
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097CCC
    lfs f0, lbl_808839FC
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_808839F8
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x2e
    lfs f2, lbl_80883A38
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lis r4, lbl_807C7030@ha
    mr r3, r31
    addi r4, r4, lbl_807C7030@l
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    stfs f2, 0x6c0(r31)
    psq_st f1, 0x6b8(r31), 0, 0
    bl fn_800EB7A0
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802878EC(void)
{
    nofralloc
    stwu r1, -0x200(r1)
    mflr r0
    stw r0, 0x204(r1)
    addi r11, r1, 0x120
    stfd f31, 0x1f0(r1)
    psq_st f31, 0x1f8(r1), 0, 0
    stfd f30, 0x1e0(r1)
    psq_st f30, 0x1e8(r1), 0, 0
    stfd f29, 0x1d0(r1)
    psq_st f29, 0x1d8(r1), 0, 0
    stfd f28, 0x1c0(r1)
    psq_st f28, 0x1c8(r1), 0, 0
    stfd f27, 0x1b0(r1)
    psq_st f27, 0x1b8(r1), 0, 0
    stfd f26, 0x1a0(r1)
    psq_st f26, 0x1a8(r1), 0, 0
    stfd f25, 0x190(r1)
    psq_st f25, 0x198(r1), 0, 0
    stfd f24, 0x180(r1)
    psq_st f24, 0x188(r1), 0, 0
    stfd f23, 0x170(r1)
    psq_st f23, 0x178(r1), 0, 0
    stfd f22, 0x160(r1)
    psq_st f22, 0x168(r1), 0, 0
    stfd f21, 0x150(r1)
    psq_st f21, 0x158(r1), 0, 0
    stfd f20, 0x140(r1)
    psq_st f20, 0x148(r1), 0, 0
    stfd f19, 0x130(r1)
    psq_st f19, 0x138(r1), 0, 0
    stfd f18, 0x120(r1)
    psq_st f18, 0x128(r1), 0, 0
    bl _savegpr_22
    mr r29, r3
    li r5, 0xc
    bl fn_80287400
    cmpwi r3, 0x0
    bne lbl_fn_802878EC_000009CC
    lwz r3, 0x14f4(r29)
    li r0, 0x0
    stw r0, 0x14b0(r29)
    cmpwi r3, 0x0
    stw r0, 0x158c(r29)
    beq lbl_fn_802878EC_000005A4
    lwz r0, 0x68(r3)
    b lbl_fn_802878EC_000005A8
lbl_fn_802878EC_000005A4:
    li r0, 0x5a
lbl_fn_802878EC_000005A8:
    stw r0, 0x1594(r29)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r29)
    addi r3, r29, 0x151c
    li r4, 0xf
    li r5, 0x0
    bl fn_800CB5C8
    lwz r3, lbl_8087F3C0
    mr r4, r29
    li r5, 0xc8
    li r6, 0x0
    bl fn_80239DAC
    li r0, 0xc
    stw r0, 0x58c(r29)
    lfs f1, lbl_808839F8
    addi r3, r29, 0xb0
    li r4, 0x0
    bl fn_80097CCC
    lfs f0, lbl_808839FC
    li r0, 0x1
    stw r0, 0x3fc(r29)
    addi r3, r29, 0xb0
    lfs f1, lbl_808839F8
    li r4, 0x0
    stfs f0, 0x2fc(r29)
    li r5, 0x14
    lfs f2, lbl_80883A38
    li r6, 0x1
    stfs f0, 0x2e8(r29)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f26, lbl_808839F8
    li r27, 0x0
    lwz r0, 0x1580(r29)
    addi r26, r1, 0x50
    fmr f31, f26
    stw r0, 0x1584(r29)
    fmr f28, f26
    lfs f27, lbl_80883A08
    fmr f29, f26
    stw r27, 0x1560(r29)
    fmr f18, f26
    lfs f30, lbl_808839FC
    lfs f20, lbl_80883A70
    addi r25, r1, 0x74
    lfs f19, lbl_808839F4
    addi r24, r1, 0x5c
    lfs f21, lbl_80883A74
    addi r23, r1, 0x38
    lfs f22, lbl_80883A44
    addi r22, r1, 0x44
    lfs f24, lbl_80883A20
    li r31, -0x1
    lfs f23, lbl_80883A48
    li r30, 0x0
    lis r28, lbl_807450E8@ha
    b lbl_fn_802878EC_00000934
lbl_fn_802878EC_00000694:
    lwz r3, 0x1570(r29)
    lfs f4, 0x530(r29)
    lwzx r3, r3, r27
    lfs f0, 0x528(r29)
    lfs f5, 0xc(r3)
    lfs f3, 0x4(r3)
    fsubs f5, f5, f4
    lfs f4, 0x8(r3)
    fsubs f6, f3, f0
    lfs f3, 0x52c(r29)
    stfs f5, 0x70(r1)
    fmuls f0, f5, f5
    fsubs f3, f4, f3
    stfs f6, 0x68(r1)
    fmadds f1, f6, f6, f0
    stfs f3, 0x6c(r1)
    bl fn_8068B100
    lwz r4, 0x1570(r29)
    frsp f25, f1
    lfs f0, 0x530(r29)
    mr r3, r26
    lwzx r5, r4, r27
    mr r4, r26
    lfs f4, 0x52c(r29)
    lfs f3, 0xc(r5)
    lfs f5, 0x8(r5)
    fsubs f2, f3, f0
    lfs f3, 0x4(r5)
    lfs f0, 0x528(r29)
    fsubs f4, f5, f4
    stfs f2, 0x7c(r1)
    fsubs f0, f3, f0
    stfs f4, 0x78(r1)
    stfs f0, 0x74(r1)
    psq_l f1, 0x0(r25), 0, 0
    psq_st f1, 0x0(r26), 0, 0
    stfs f2, 0x58(r1)
    bl fn_805F98D0
    lfs f2, 0x58(r1)
    psq_l f1, 0x0(r26), 0, 0
    fabs f0, f2
    psq_st f1, 0x0(r24), 0, 0
    stfs f2, 0x64(r1)
    frsp f0, f0
    fcmpo cr0, f0, f27
    bge lbl_fn_802878EC_0000076C
    lfs f0, 0x5c(r1)
    fcmpo cr0, f0, f28
    ble lbl_fn_802878EC_00000760
    lfs f0, lbl_80883A44
    b lbl_fn_802878EC_00000764
lbl_fn_802878EC_00000760:
    lfs f0, lbl_80883A48
lbl_fn_802878EC_00000764:
    stfs f0, 0x48(r1)
    b lbl_fn_802878EC_00000780
lbl_fn_802878EC_0000076C:
    frsp f2, f2
    lfs f1, 0x5c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_802878EC_00000780:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x80
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f13, 0x88(r1)
    mr r4, r23
    lfs f12, 0x84(r1)
    mr r5, r23
    lfs f11, 0x80(r1)
    addi r3, r1, 0xb0
    lfs f10, 0x98(r1)
    lfs f9, 0x94(r1)
    lfs f8, 0x90(r1)
    lfs f7, 0xa8(r1)
    lfs f6, 0xa4(r1)
    lfs f5, 0xa0(r1)
    lfs f4, 0xac(r1)
    lfs f3, 0x9c(r1)
    lfs f0, 0x8c(r1)
    psq_l f1, 0x0(r24), 0, 0
    lfs f2, 0x64(r1)
    stfs f29, 0xe0(r1)
    stfs f29, 0xe4(r1)
    stfs f29, 0xe8(r1)
    stfs f30, 0xec(r1)
    stfs f11, 0x8(r1)
    stfs f12, 0xc(r1)
    stfs f13, 0x10(r1)
    stfs f11, 0xb0(r1)
    stfs f12, 0xb4(r1)
    stfs f13, 0xb8(r1)
    stfs f8, 0x14(r1)
    stfs f9, 0x18(r1)
    stfs f10, 0x1c(r1)
    stfs f8, 0xc0(r1)
    stfs f9, 0xc4(r1)
    stfs f10, 0xc8(r1)
    stfs f5, 0x20(r1)
    stfs f6, 0x24(r1)
    stfs f7, 0x28(r1)
    stfs f5, 0xd0(r1)
    stfs f6, 0xd4(r1)
    stfs f7, 0xd8(r1)
    stfs f0, 0x2c(r1)
    stfs f3, 0x30(r1)
    stfs f4, 0x34(r1)
    stfs f0, 0xbc(r1)
    stfs f3, 0xcc(r1)
    stfs f4, 0xdc(r1)
    psq_st f1, 0x0(r23), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    fabs f0, f2
    frsp f0, f0
    fcmpo cr0, f0, f27
    bge lbl_fn_802878EC_0000088C
    lfs f0, 0x3c(r1)
    fcmpo cr0, f0, f31
    ble lbl_fn_802878EC_0000087C
    lfs f0, lbl_80883A44
    b lbl_fn_802878EC_00000880
lbl_fn_802878EC_0000087C:
    lfs f0, lbl_80883A48
lbl_fn_802878EC_00000880:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_802878EC_000008A0
lbl_fn_802878EC_0000088C:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_802878EC_000008A0:
    psq_l f1, 0x0(r22), 0, 0
    fmr f2, f18
    psq_st f1, 0x0(r24), 0, 0
    lfs f0, 0x538(r29)
    lfs f3, 0x60(r1)
    stfs f2, 0x64(r1)
    fsubs f1, f3, f0
    lfd f2, lbl_807450E8@l(r28)
    stfs f18, 0x4c(r1)
    bl fn_8068AEA8
    frsp f0, f1
    fcmpo cr0, f0, f19
    ble lbl_fn_802878EC_000008D8
    fsubs f0, f0, f20
lbl_fn_802878EC_000008D8:
    fcmpo cr0, f0, f21
    bge lbl_fn_802878EC_000008E4
    fadds f0, f0, f20
lbl_fn_802878EC_000008E4:
    fcmpo cr0, f0, f22
    bgt lbl_fn_802878EC_000008F4
    fcmpo cr0, f0, f23
    bge lbl_fn_802878EC_000008F8
lbl_fn_802878EC_000008F4:
    fmuls f25, f25, f24
lbl_fn_802878EC_000008F8:
    fcmpo cr0, f25, f26
    ble lbl_fn_802878EC_0000092C
    lwz r3, 0x1570(r29)
    addi r4, r29, 0x1564
    fmr f26, f25
    lwzx r5, r3, r27
    lwz r31, 0x0(r5)
    psq_l f1, 0x4(r5), 0, 0
    lfs f2, 0xc(r5)
    stfs f2, 0x156c(r29)
    psq_st f1, 0x0(r4), 0, 0
    lwzx r0, r3, r27
    stw r0, 0x1560(r29)
lbl_fn_802878EC_0000092C:
    addi r30, r30, 0x1
    addi r27, r27, 0x4
lbl_fn_802878EC_00000934:
    lwz r0, 0x1574(r29)
    cmplw r30, r0
    blt lbl_fn_802878EC_00000694
    lwz r0, 0x1560(r29)
    cmpwi r0, 0x0
    beq lbl_fn_802878EC_00000960
    mr r3, r29
    mr r4, r31
    li r5, 0x8
    bl fn_8017039C
    b lbl_fn_802878EC_000009CC
lbl_fn_802878EC_00000960:
    lwz r3, 0x14f4(r29)
    li r0, 0x0
    stw r0, 0x14b0(r29)
    cmpwi r3, 0x0
    stw r0, 0x158c(r29)
    beq lbl_fn_802878EC_00000980
    lwz r0, 0x68(r3)
    b lbl_fn_802878EC_00000984
lbl_fn_802878EC_00000980:
    li r0, 0x5a
lbl_fn_802878EC_00000984:
    stw r0, 0x1594(r29)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r29)
    addi r3, r29, 0x151c
    li r4, 0xf
    li r5, 0x0
    bl fn_800CB5C8
    lwz r3, lbl_8087F3C0
    mr r4, r29
    li r5, 0xc8
    li r6, 0x0
    bl fn_80239DAC
    li r0, 0x6
    stw r0, 0x58c(r29)
    mr r3, r29
    li r4, 0x3
    bl fn_8016E970
lbl_fn_802878EC_000009CC:
    addi r11, r1, 0x120
    psq_l f31, 0x1f8(r1), 0, 0
    lfd f31, 0x1f0(r1)
    psq_l f30, 0x1e8(r1), 0, 0
    lfd f30, 0x1e0(r1)
    psq_l f29, 0x1d8(r1), 0, 0
    lfd f29, 0x1d0(r1)
    psq_l f28, 0x1c8(r1), 0, 0
    lfd f28, 0x1c0(r1)
    psq_l f27, 0x1b8(r1), 0, 0
    lfd f27, 0x1b0(r1)
    psq_l f26, 0x1a8(r1), 0, 0
    lfd f26, 0x1a0(r1)
    psq_l f25, 0x198(r1), 0, 0
    lfd f25, 0x190(r1)
    psq_l f24, 0x188(r1), 0, 0
    lfd f24, 0x180(r1)
    psq_l f23, 0x178(r1), 0, 0
    lfd f23, 0x170(r1)
    psq_l f22, 0x168(r1), 0, 0
    lfd f22, 0x160(r1)
    psq_l f21, 0x158(r1), 0, 0
    lfd f21, 0x150(r1)
    psq_l f20, 0x148(r1), 0, 0
    lfd f20, 0x140(r1)
    psq_l f19, 0x138(r1), 0, 0
    lfd f19, 0x130(r1)
    psq_l f18, 0x128(r1), 0, 0
    lfd f18, 0x120(r1)
    bl _restgpr_22
    lwz r0, 0x204(r1)
    mtlr r0
    addi r1, r1, 0x200
    blr
}

asm void fn_80287E54(void)
{
    nofralloc
    lis r4, lbl_807C8398@ha
    lfs f2, lbl_80883A8C
    addi r3, r4, lbl_807C8398@l
    lfs f1, lbl_80883A90
    lfs f0, lbl_808839FC
    stfs f2, lbl_807C8398@l(r4)
    stfs f1, 0x4(r3)
    stfs f1, 0x8(r3)
    stfs f0, 0xc(r3)
    blr
}

asm void fn_80287E7C(void)
{
    nofralloc
    stwu r1, -0x6a0(r1)
    mflr r0
    stw r0, 0x6a4(r1)
    addi r11, r1, 0x6a0
    bl _savegpr_25
    mr r30, r5
    lwz r5, 0x20(r5)
    mr r29, r3
    bl fn_8035B694
    lfs f1, lbl_80883A98
    lis r3, lbl_807857E0@ha
    li r28, 0x0
    lfs f0, lbl_80883A9C
    addi r3, r3, lbl_807857E0@l
    stw r3, 0x0(r29)
    addi r3, r29, 0x155c
    stw r28, 0x14b0(r29)
    stw r28, 0x14b4(r29)
    stw r28, 0x14b8(r29)
    stw r28, 0x14bc(r29)
    stw r28, 0x14c0(r29)
    stw r28, 0x14c4(r29)
    stw r28, 0x14c8(r29)
    stw r28, 0x14e4(r29)
    stw r28, 0x14e8(r29)
    stw r28, 0x14ec(r29)
    stw r28, 0x14f0(r29)
    stw r28, 0x14f4(r29)
    stw r28, 0x14f8(r29)
    stw r28, 0x14fc(r29)
    stw r28, 0x1500(r29)
    stfs f1, 0x1510(r29)
    stfs f1, 0x1514(r29)
    stfs f0, 0x1518(r29)
    stw r28, 0x1544(r29)
    stw r28, 0x1548(r29)
    stw r28, 0x154c(r29)
    stfs f1, 0x1558(r29)
    bl fn_802377B8
    addi r3, r29, 0x1568
    bl fn_80237518
    addi r3, r29, 0x1574
    bl fn_802377B8
    addi r3, r29, 0x15b8
    bl fn_802377B8
    addi r3, r29, 0x15c4
    bl fn_802377B8
    stw r28, 0x15d4(r29)
    addi r3, r29, 0x15d8
    bl fn_802377B8
    lfs f0, lbl_80883A98
    lis r4, fn_80288390@ha
    lis r5, fn_8000D760@ha
    stfs f0, 0x15e4(r29)
    addi r3, r29, 0x15ec
    addi r4, r4, fn_80288390@l
    addi r5, r5, fn_8000D760@l
    li r6, 0xc
    li r7, 0x5
    bl fn_806958E0
    stw r28, 0x1628(r29)
    addi r3, r29, 0x1634
    stw r28, 0x162c(r29)
    bl fn_802377B8
    stw r28, 0x1640(r29)
    addi r3, r29, 0x1644
    bl fn_800D5738
    addi r4, r29, 0x16e8
    addi r3, r29, 0x192c
    cmplw r4, r3
    stw r28, 0x16e0(r29)
    stw r28, 0x16e4(r29)
    bge lbl_fn_80287E7C_00000BC8
    addi r3, r3, 0x73
    li r0, 0x74
    subf r3, r4, r3
    divwu r3, r3, r0
    mtctr r3
    bge lbl_fn_80287E7C_00000BC8
lbl_fn_80287E7C_00000BB8:
    stw r28, 0x6c(r4)
    stw r28, 0x70(r4)
    addi r4, r4, 0x74
    bdnz lbl_fn_80287E7C_00000BB8
lbl_fn_80287E7C_00000BC8:
    addi r28, r29, 0x192c
    mr r3, r28
    bl fn_80237518
    addi r3, r28, 0xc
    bl fn_80237518
    addi r28, r29, 0x1944
    mr r3, r28
    bl fn_80237518
    addi r3, r28, 0xc
    bl fn_80237518
    addi r28, r29, 0x195c
    mr r3, r28
    bl fn_80237518
    addi r3, r28, 0xc
    bl fn_80237518
    addi r31, r29, 0x1984
    li r28, 0x0
    stw r28, 0x1974(r29)
    mr r3, r31
    bl fn_80473E74
    lwz r0, 0x12a4(r29)
    li r9, 0x3
    lfs f1, lbl_80883AA0
    lis r10, lbl_8078FBB0@ha
    li r4, 0x23
    lfs f0, lbl_80883AA4
    addi r10, r10, lbl_8078FBB0@l
    oris r0, r0, 0x40
    li r8, 0x1
    li r7, 0xa
    li r6, 0x14
    li r5, 0x5
    stw r10, 0x0(r31)
    lis r3, lbl_80745314@ha
    addi r31, r3, lbl_80745314@l
    addi r27, r1, 0x38
    stfs f1, 0x1994(r29)
    mr r3, r31
    stfs f0, 0x199c(r29)
    stw r9, 0x19a4(r29)
    stw r8, 0x19a8(r29)
    stw r9, 0x19ac(r29)
    stw r7, 0x19b0(r29)
    stw r6, 0x19bc(r29)
    stw r5, 0x19c0(r29)
    stw r4, 0x19c4(r29)
    stw r4, 0x19c8(r29)
    stw r0, 0x12a4(r29)
    stw r28, 0x198c(r29)
    stw r28, 0x1990(r29)
    stw r28, 0x38(r1)
    stw r28, 0x3c(r1)
    stw r28, 0x40(r1)
    bl strlen
    mr r26, r3
    mr r3, r27
    mr r4, r26
    bl fn_80013DC4
    lbz r0, 0x1c(r1)
    mr r3, r27
    stb r0, 0x18(r1)
    mr r6, r31
    add r7, r31, r26
    addi r8, r1, 0x18
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    addi r27, r31, 0x18
    stw r28, 0x2c(r1)
    addi r26, r1, 0x2c
    stw r28, 0x30(r1)
    mr r3, r27
    stw r28, 0x34(r1)
    bl strlen
    mr r25, r3
    mr r3, r26
    mr r4, r25
    bl fn_80013DC4
    lbz r0, 0x14(r1)
    mr r3, r26
    stb r0, 0x10(r1)
    mr r6, r27
    add r7, r27, r25
    addi r8, r1, 0x10
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    addi r3, r30, 0x2c
    bl strlen
    lis r4, lbl_807772D0@ha
    mr r26, r3
    addi r4, r4, lbl_807772D0@l
    stw r4, 0x44(r1)
    addi r3, r1, 0x54
    li r5, 0x400
    stw r28, 0x48(r1)
    li r4, 0x0
    stw r28, 0x4c(r1)
    stw r28, 0x50(r1)
    stw r28, 0x674(r1)
    bl memset
    addi r3, r1, 0x654
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x44(r1)
    mr r5, r26
    addi r3, r1, 0x44
    addi r4, r30, 0x2c
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0x44
    addi r4, r4, lbl_807772B0@l
    stw r4, 0x44(r1)
    la r4, lbl_8087D708
    bl fn_8005B6E8
lbl_fn_80287E7C_00000DA0:
    addi r3, r1, 0x44
    bl fn_8005B3CC
    cmpwi r3, 0x0
    mr r26, r3
    beq lbl_fn_80287E7C_00000E38
    addi r4, r31, 0x2b
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_80287E7C_00000E38
    mr r3, r26
    addi r4, r31, 0x2c
    li r5, 0x8
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_80287E7C_00000E28
    lwz r0, 0x2c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80287E7C_00000DF4
    lbz r0, 0x2c(r1)
    clrlwi r25, r0, 25
    b lbl_fn_80287E7C_00000DF8
lbl_fn_80287E7C_00000DF4:
    lwz r25, 0x30(r1)
lbl_fn_80287E7C_00000DF8:
    lbz r0, 0xc(r1)
    addi r3, r26, 0x8
    stb r0, 0x8(r1)
    bl strlen
    add r4, r26, r3
    mr r5, r25
    addi r7, r4, 0x8
    addi r3, r1, 0x2c
    addi r6, r26, 0x8
    addi r8, r1, 0x8
    li r4, 0x0
    bl fn_80013F78
lbl_fn_80287E7C_00000E28:
    addi r3, r1, 0x44
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_80287E7C_00000DA0
lbl_fn_80287E7C_00000E38:
    addi r3, r1, 0x20
    addi r4, r1, 0x38
    addi r5, r1, 0x2c
    bl fn_8006AFF8
    lwz r0, 0x20(r1)
    addi r3, r29, 0x1984
    srwi. r0, r0, 31
    bne lbl_fn_80287E7C_00000E60
    addi r4, r1, 0x21
    b lbl_fn_80287E7C_00000E64
lbl_fn_80287E7C_00000E60:
    lwz r4, 0x28(r1)
lbl_fn_80287E7C_00000E64:
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lfs f0, lbl_80883A98
    lis r30, lbl_80745314@ha
    li r0, 0x0
    li r3, 0x34
    addi r30, r30, lbl_80745314@l
    li r5, 0x33
    stw r3, 0x1504(r29)
    addi r3, r29, 0x1944
    addi r4, r30, 0x35
    stw r5, 0x1508(r29)
    stw r0, 0x152c(r29)
    stw r0, 0x1530(r29)
    stfs f0, 0x151c(r29)
    stfs f0, 0x1520(r29)
    stfs f0, 0x1524(r29)
    bl fn_80237654
    addi r3, r29, 0x1950
    addi r4, r30, 0x58
    bl fn_80237654
    addi r3, r29, 0x192c
    addi r4, r30, 0x35
    bl fn_80237654
    addi r3, r29, 0x1938
    addi r4, r30, 0x79
    bl fn_80237654
    addi r3, r29, 0x195c
    addi r4, r30, 0x9c
    bl fn_80237654
    addi r3, r29, 0x1968
    addi r4, r30, 0xbf
    bl fn_80237654
    addi r3, r29, 0x15b8
    addi r4, r30, 0xe2
    bl fn_8023780C
    addi r3, r29, 0x155c
    addi r4, r30, 0x101
    bl fn_8023780C
    addi r3, r29, 0x1568
    addi r4, r30, 0x120
    bl fn_80237654
    addi r3, r29, 0x1574
    addi r4, r30, 0x142
    bl fn_8023780C
    addi r3, r29, 0x15d8
    addi r4, r30, 0x14f
    bl fn_8023780C
    addi r3, r29, 0x1634
    addi r4, r30, 0x165
    bl fn_8023780C
    lwz r0, 0x20(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80287E7C_00000F4C
    lwz r3, 0x28(r1)
    bl dtor_80084684
lbl_fn_80287E7C_00000F4C:
    lwz r0, 0x2c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80287E7C_00000F60
    lwz r3, 0x34(r1)
    bl dtor_80084684
lbl_fn_80287E7C_00000F60:
    lwz r0, 0x38(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80287E7C_00000F74
    lwz r3, 0x40(r1)
    bl dtor_80084684
lbl_fn_80287E7C_00000F74:
    addi r11, r1, 0x6a0
    mr r3, r29
    bl _restgpr_25
    lwz r0, 0x6a4(r1)
    mtlr r0
    addi r1, r1, 0x6a0
    blr
}

asm void fn_80288390(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    blr
}

asm void fn_802883A4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    beq lbl_fn_802883A4_000011CC
    addic. r0, r3, 0x198c
    beq lbl_fn_802883A4_00000FF0
    lwz r4, 0x198c(r3)
    cmpwi r4, 0x0
    beq lbl_fn_802883A4_00000FF0
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_802883A4_00000FF0
    bl fn_800897D8
lbl_fn_802883A4_00000FF0:
    addic. r3, r30, 0x1984
    beq lbl_fn_802883A4_00001000
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802883A4_00001000:
    addic. r29, r30, 0x195c
    beq lbl_fn_802883A4_00001020
    addi r3, r29, 0xc
    li r4, -0x1
    bl fn_802375C4
    mr r3, r29
    li r4, -0x1
    bl fn_802375C4
lbl_fn_802883A4_00001020:
    addic. r29, r30, 0x1944
    beq lbl_fn_802883A4_00001040
    addi r3, r29, 0xc
    li r4, -0x1
    bl fn_802375C4
    mr r3, r29
    li r4, -0x1
    bl fn_802375C4
lbl_fn_802883A4_00001040:
    addic. r29, r30, 0x192c
    beq lbl_fn_802883A4_00001060
    addi r3, r29, 0xc
    li r4, -0x1
    bl fn_802375C4
    mr r3, r29
    li r4, -0x1
    bl fn_802375C4
lbl_fn_802883A4_00001060:
    addi r3, r30, 0x1644
    li r4, -0x1
    bl fn_800D5808
    addic. r29, r30, 0x1634
    beq lbl_fn_802883A4_0000108C
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_802883A4_0000108C
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802883A4_0000108C:
    lis r4, fn_8000D760@ha
    addi r3, r30, 0x15ec
    addi r4, r4, fn_8000D760@l
    li r5, 0xc
    li r6, 0x5
    bl fn_806959D8
    addic. r29, r30, 0x15d8
    beq lbl_fn_802883A4_000010C4
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_802883A4_000010C4
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802883A4_000010C4:
    addic. r29, r30, 0x15c4
    beq lbl_fn_802883A4_000010E4
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_802883A4_000010E4
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802883A4_000010E4:
    addic. r29, r30, 0x15b8
    beq lbl_fn_802883A4_00001104
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_802883A4_00001104
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802883A4_00001104:
    addic. r29, r30, 0x1574
    beq lbl_fn_802883A4_00001124
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_802883A4_00001124
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802883A4_00001124:
    addi r3, r30, 0x1568
    li r4, -0x1
    bl fn_802375C4
    addic. r29, r30, 0x155c
    beq lbl_fn_802883A4_00001150
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_802883A4_00001150
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802883A4_00001150:
    addic. r4, r30, 0x14f4
    beq lbl_fn_802883A4_00001180
    beq lbl_fn_802883A4_00001180
    beq lbl_fn_802883A4_00001180
    beq lbl_fn_802883A4_00001180
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_802883A4_00001180
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_802883A4_00001180:
    addic. r4, r30, 0x14e8
    beq lbl_fn_802883A4_000011B0
    beq lbl_fn_802883A4_000011B0
    beq lbl_fn_802883A4_000011B0
    beq lbl_fn_802883A4_000011B0
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_802883A4_000011B0
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_802883A4_000011B0:
    mr r3, r30
    li r4, 0x0
    bl fn_8035B78C
    cmpwi r31, 0x0
    ble lbl_fn_802883A4_000011CC
    mr r3, r30
    bl dtor_80084684
lbl_fn_802883A4_000011CC:
    mr r3, r30
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_802885EC(void)
{
    nofralloc
    stwu r1, -0x680(r1)
    mflr r0
    stw r0, 0x684(r1)
    stw r31, 0x67c(r1)
    mr r31, r3
    stw r30, 0x678(r1)
    stw r29, 0x674(r1)
    bl fn_8013655C
    cmpwi r3, 0x0
    bne lbl_fn_802885EC_000019B8
    addi r3, r31, 0x1984
    bl fn_80473F50
    cmpwi r3, 0x0
    bne lbl_fn_802885EC_000019B8
    addi r3, r31, 0x15b8
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802885EC_000019B8
    addi r3, r31, 0x155c
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802885EC_000019B8
    addi r3, r31, 0x1568
    bl fn_802376D0
    cmpwi r3, 0x0
    bne lbl_fn_802885EC_000019B8
    addi r3, r31, 0x1574
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802885EC_000019B8
    addi r3, r31, 0x1944
    bl fn_80288DD8
    cmpwi r3, 0x0
    bne lbl_fn_802885EC_000019B8
    addi r3, r31, 0x192c
    bl fn_80288DD8
    cmpwi r3, 0x0
    bne lbl_fn_802885EC_000019B8
    addi r3, r31, 0x195c
    bl fn_80288DD8
    cmpwi r3, 0x0
    bne lbl_fn_802885EC_000019B8
    addi r3, r31, 0x15d8
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802885EC_000019B8
    addi r3, r31, 0x1634
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802885EC_000019B8
    addi r3, r31, 0x1030
    li r4, 0x2
    bl fn_800EC24C
    lfs f1, lbl_80883AA8
    mr r3, r31
    bl fn_80288E30
    lwz r0, 0x7ec(r31)
    ori r0, r0, 0x1c0
    oris r0, r0, 0x1
    ori r0, r0, 0xc219
    oris r0, r0, 0x380
    stw r0, 0x7ec(r31)
    bl fn_80121F00
    bl fn_8013C504
    mr r30, r3
    addi r3, r31, 0x1984
    bl fn_80470580
    cmpwi r3, 0x0
    beq lbl_fn_802885EC_00001938
    cmpwi r30, 0x0
    beq lbl_fn_802885EC_00001938
    addi r3, r31, 0x1984
    bl fn_8047059C
    mr r30, r3
    addi r3, r31, 0x1984
    bl fn_80470580
    mr r4, r3
    mr r5, r30
    addi r3, r1, 0x38
    bl fn_8004203C
    lis r30, lbl_80745314@ha
    addi r30, r30, lbl_80745314@l
lbl_fn_802885EC_00001334:
    addi r3, r1, 0x38
    bl fn_8005B3CC
    mr r29, r3
    addi r4, r30, 0x17b
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802885EC_00001364
    addi r3, r1, 0x38
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x1518(r31)
    b lbl_fn_802885EC_00001928
lbl_fn_802885EC_00001364:
    mr r3, r29
    addi r4, r30, 0x186
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802885EC_0000138C
    addi r3, r1, 0x38
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x1994(r31)
    b lbl_fn_802885EC_00001928
lbl_fn_802885EC_0000138C:
    mr r3, r29
    addi r4, r30, 0x18f
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802885EC_000013B4
    addi r3, r1, 0x38
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x1998(r31)
    b lbl_fn_802885EC_00001928
lbl_fn_802885EC_000013B4:
    mr r3, r29
    addi r4, r30, 0x19a
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802885EC_000013DC
    addi r3, r1, 0x38
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x199c(r31)
    b lbl_fn_802885EC_00001928
lbl_fn_802885EC_000013DC:
    mr r3, r29
    addi r4, r30, 0x1a6
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802885EC_00001404
    addi r3, r1, 0x38
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x19a0(r31)
    b lbl_fn_802885EC_00001928
lbl_fn_802885EC_00001404:
    mr r3, r29
    addi r4, r30, 0x1b1
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802885EC_0000142C
    addi r3, r1, 0x38
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x19a4(r31)
    b lbl_fn_802885EC_00001928
lbl_fn_802885EC_0000142C:
    mr r3, r29
    addi r4, r30, 0x1c5
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802885EC_00001454
    addi r3, r1, 0x38
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x19a8(r31)
    b lbl_fn_802885EC_00001928
lbl_fn_802885EC_00001454:
    mr r3, r29
    addi r4, r30, 0x1d0
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802885EC_0000147C
    addi r3, r1, 0x38
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x19ac(r31)
    b lbl_fn_802885EC_00001928
lbl_fn_802885EC_0000147C:
    mr r3, r29
    addi r4, r30, 0x1da
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802885EC_000014A4
    addi r3, r1, 0x38
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x19b0(r31)
    b lbl_fn_802885EC_00001928
lbl_fn_802885EC_000014A4:
    mr r3, r29
    addi r4, r30, 0x1e6
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802885EC_000014CC
    addi r3, r1, 0x38
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x19b4(r31)
    b lbl_fn_802885EC_00001928
lbl_fn_802885EC_000014CC:
    mr r3, r29
    addi r4, r30, 0x1ef
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802885EC_000014F4
    addi r3, r1, 0x38
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x19b8(r31)
    b lbl_fn_802885EC_00001928
lbl_fn_802885EC_000014F4:
    mr r3, r29
    addi r4, r30, 0x1fd
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802885EC_0000151C
    addi r3, r1, 0x38
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x19bc(r31)
    b lbl_fn_802885EC_00001928
lbl_fn_802885EC_0000151C:
    mr r3, r29
    addi r4, r30, 0x210
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802885EC_00001544
    addi r3, r1, 0x38
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x19c0(r31)
    b lbl_fn_802885EC_00001928
lbl_fn_802885EC_00001544:
    mr r3, r29
    addi r4, r30, 0x21a
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802885EC_0000156C
    addi r3, r1, 0x38
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x19c4(r31)
    b lbl_fn_802885EC_00001928
lbl_fn_802885EC_0000156C:
    mr r3, r29
    addi r4, r30, 0x22a
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802885EC_00001594
    addi r3, r1, 0x38
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x19c8(r31)
    b lbl_fn_802885EC_00001928
lbl_fn_802885EC_00001594:
    mr r3, r29
    addi r4, r30, 0x23a
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802885EC_000015CC
    addi r3, r1, 0x38
    bl fn_8005B3CC
    bl fn_800DC12C
    mr r29, r3
    bl fn_8000D9E8
    mr r4, r29
    bl fn_8011F91C
    stw r3, 0x1630(r31)
    b lbl_fn_802885EC_00001928
lbl_fn_802885EC_000015CC:
    mr r3, r29
    addi r4, r30, 0x242
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802885EC_00001624
lbl_fn_802885EC_000015E0:
    addi r3, r1, 0x38
    bl fn_8005B3CC
    bl fn_800DC12C
    mr r29, r3
    bl fn_80121F00
    bl fn_8013C504
    mr r4, r29
    bl fn_800EC204
    cmpwi r3, 0x0
    stw r3, 0xc(r1)
    beq lbl_fn_802885EC_00001618
    addi r3, r31, 0x14f4
    addi r4, r1, 0xc
    bl fn_80244CCC
lbl_fn_802885EC_00001618:
    cmpwi r29, 0x0
    bne lbl_fn_802885EC_000015E0
    b lbl_fn_802885EC_00001928
lbl_fn_802885EC_00001624:
    mr r3, r29
    addi r4, r30, 0x24b
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802885EC_0000167C
lbl_fn_802885EC_00001638:
    addi r3, r1, 0x38
    bl fn_8005B3CC
    bl fn_800DC12C
    mr r29, r3
    bl fn_80121F00
    bl fn_8013C504
    mr r4, r29
    bl fn_800EC204
    cmpwi r3, 0x0
    stw r3, 0x8(r1)
    beq lbl_fn_802885EC_00001670
    addi r3, r31, 0x14e8
    addi r4, r1, 0x8
    bl fn_80244CCC
lbl_fn_802885EC_00001670:
    cmpwi r29, 0x0
    bne lbl_fn_802885EC_00001638
    b lbl_fn_802885EC_00001928
lbl_fn_802885EC_0000167C:
    mr r3, r29
    addi r4, r30, 0x256
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802885EC_000016B8
    addi r3, r1, 0x38
    bl fn_8005B3CC
    bl fn_800DC12C
    mr r29, r3
    bl fn_80121F00
    bl fn_8013C504
    mr r4, r29
    bl fn_800EC204
    stw r3, 0x1500(r31)
    b lbl_fn_802885EC_00001928
lbl_fn_802885EC_000016B8:
    mr r3, r29
    addi r4, r30, 0x262
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802885EC_000016F8
lbl_fn_802885EC_000016CC:
    addi r3, r1, 0x38
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x10(r1)
    addi r3, r31, 0x15ec
    addi r4, r1, 0x10
    bl fn_8000E18C
    lwz r0, 0x10(r1)
    cmpwi r0, 0x0
    bne lbl_fn_802885EC_000016CC
    b lbl_fn_802885EC_00001928
lbl_fn_802885EC_000016F8:
    mr r3, r29
    addi r4, r30, 0x26f
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802885EC_00001738
lbl_fn_802885EC_0000170C:
    addi r3, r1, 0x38
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x10(r1)
    addi r3, r31, 0x15f8
    addi r4, r1, 0x10
    bl fn_8000E18C
    lwz r0, 0x10(r1)
    cmpwi r0, 0x0
    bne lbl_fn_802885EC_0000170C
    b lbl_fn_802885EC_00001928
lbl_fn_802885EC_00001738:
    mr r3, r29
    addi r4, r30, 0x27c
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802885EC_00001778
lbl_fn_802885EC_0000174C:
    addi r3, r1, 0x38
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x10(r1)
    addi r3, r31, 0x1604
    addi r4, r1, 0x10
    bl fn_8000E18C
    lwz r0, 0x10(r1)
    cmpwi r0, 0x0
    bne lbl_fn_802885EC_0000174C
    b lbl_fn_802885EC_00001928
lbl_fn_802885EC_00001778:
    mr r3, r29
    addi r4, r30, 0x289
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802885EC_000017B8
lbl_fn_802885EC_0000178C:
    addi r3, r1, 0x38
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x10(r1)
    addi r3, r31, 0x1610
    addi r4, r1, 0x10
    bl fn_8000E18C
    lwz r0, 0x10(r1)
    cmpwi r0, 0x0
    bne lbl_fn_802885EC_0000178C
    b lbl_fn_802885EC_00001928
lbl_fn_802885EC_000017B8:
    mr r3, r29
    addi r4, r30, 0x296
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802885EC_000017F8
lbl_fn_802885EC_000017CC:
    addi r3, r1, 0x38
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x10(r1)
    addi r3, r31, 0x161c
    addi r4, r1, 0x10
    bl fn_8000E18C
    lwz r0, 0x10(r1)
    cmpwi r0, 0x0
    bne lbl_fn_802885EC_000017CC
    b lbl_fn_802885EC_00001928
lbl_fn_802885EC_000017F8:
    mr r3, r29
    addi r4, r30, 0x2a3
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802885EC_00001824
    addi r3, r1, 0x38
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x14cc(r31)
    b lbl_fn_802885EC_00001928
lbl_fn_802885EC_00001824:
    mr r3, r29
    addi r4, r30, 0x2ab
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802885EC_00001850
    addi r3, r1, 0x38
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x14d0(r31)
    b lbl_fn_802885EC_00001928
lbl_fn_802885EC_00001850:
    mr r3, r29
    addi r4, r30, 0x2b4
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802885EC_0000187C
    addi r3, r1, 0x38
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x14d4(r31)
    b lbl_fn_802885EC_00001928
lbl_fn_802885EC_0000187C:
    mr r3, r29
    addi r4, r30, 0x2bc
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802885EC_000018A8
    addi r3, r1, 0x38
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x14d8(r31)
    b lbl_fn_802885EC_00001928
lbl_fn_802885EC_000018A8:
    mr r3, r29
    addi r4, r30, 0x2c8
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802885EC_000018D4
    addi r3, r1, 0x38
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x14dc(r31)
    b lbl_fn_802885EC_00001928
lbl_fn_802885EC_000018D4:
    mr r3, r29
    addi r4, r30, 0x2d1
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802885EC_00001900
    addi r3, r1, 0x38
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x14e0(r31)
    b lbl_fn_802885EC_00001928
lbl_fn_802885EC_00001900:
    mr r3, r29
    addi r4, r30, 0x2d8
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802885EC_00001928
    addi r3, r1, 0x38
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x14e4(r31)
lbl_fn_802885EC_00001928:
    addi r3, r1, 0x38
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_802885EC_00001334
lbl_fn_802885EC_00001938:
    mr r3, r31
    bl fn_802914F8
    bl fn_80121F00
    bl fn_8013C504
    li r4, 0x3e9
    bl fn_800EC204
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_802885EC_0000196C
    addi r3, r31, 0x1978
    addi r4, r4, 0x4
    bl fn_8000D124
    b lbl_fn_802885EC_00001980
lbl_fn_802885EC_0000196C:
    lfs f1, lbl_80883A98
    addi r3, r31, 0x1978
    lfs f2, lbl_80883AAC
    fmr f3, f1
    bl fn_80057A68
lbl_fn_802885EC_00001980:
    addi r3, r1, 0x14
    addi r4, r31, 0x1978
    addi r5, r31, 0x528
    bl fn_80013338
    addi r3, r1, 0x20
    addi r4, r1, 0x14
    bl fn_800F7FD8
    addi r3, r1, 0x2c
    addi r4, r1, 0x20
    bl fn_80011034
    lfs f0, 0x30(r1)
    li r3, 0x1
    stfs f0, 0x538(r31)
    b lbl_fn_802885EC_000019BC
lbl_fn_802885EC_000019B8:
    li r3, 0x0
lbl_fn_802885EC_000019BC:
    lwz r0, 0x684(r1)
    lwz r31, 0x67c(r1)
    lwz r30, 0x678(r1)
    lwz r29, 0x674(r1)
    mtlr r0
    addi r1, r1, 0x680
    blr
}
