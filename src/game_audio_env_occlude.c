#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void dtor_80013D60(void);
extern void dtor_80084684(void);
extern void fn_8000D114(void);
extern void fn_8000D124(void);
extern void fn_80011034(void);
extern void fn_8003E4A4(void);
extern void fn_8004212C(void);
extern void fn_8004ED34(void);
extern void fn_80057A64(void);
extern void fn_8005B3CC(void);
extern void fn_8005B5F8(void);
extern void fn_8005B6E8(void);
extern void fn_8006AFF8(void);
extern void fn_8006CA80(void);
extern void fn_800844D8(void);
extern void fn_800874C8(void);
extern void fn_8008771C(void);
extern void fn_80087994(void);
extern void fn_80087E9C(void);
extern void fn_8008937C(void);
extern void fn_800897D8(void);
extern void fn_8008A76C(void);
extern void fn_80092814(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800CB5C8(void);
extern void fn_800EB7A0(void);
extern void fn_800EC254(void);
extern void fn_800EC2C4(void);
extern void fn_800EC440(void);
extern void fn_800EC534(void);
extern void fn_800EC5BC(void);
extern void fn_800EC654(void);
extern void fn_800ED42C(void);
extern void fn_800ED4D8(void);
extern void fn_800ED4E0(void);
extern void fn_800EDFE8(void);
extern void fn_800F52F0(void);
extern void fn_800F8548(void);
extern void fn_8013655C(void);
extern void fn_80145334(void);
extern void fn_8014C540(void);
extern void fn_80158E1C(void);
extern void fn_8016E970(void);
extern void fn_8020A780(void);
extern void fn_80219E6C(void);
extern void fn_80237518(void);
extern void fn_802375C4(void);
extern void fn_80237654(void);
extern void fn_802376D0(void);
extern void fn_802377B8(void);
extern void fn_8023780C(void);
extern void fn_8023781C(void);
extern void fn_80237874(void);
extern void fn_80239D58(void);
extern void fn_80239DAC(void);
extern void fn_802660FC(void);
extern void fn_802BABC0(void);
extern void fn_80318648(void);
extern void fn_8031CA30(void);
extern void fn_8031D350(void);
extern void fn_8031D4F4(void);
extern void fn_8031E8BC(void);
extern void fn_8035B694(void);
extern void fn_8035B78C(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473E8C(void);
extern void fn_80473F50(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_80680770(void);
extern void fn_80680CF8(void);
extern void fn_80682428(void);
extern void fn_80682544(void);
extern void fn_80684600(void);
extern void fn_80686EA4(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);
extern void fn_806959D8(void);
extern void memmove(void);

/* External data declarations */
extern u8 lbl_80749568[];
extern u8 lbl_80749578[];
extern u8 lbl_80749580[];
extern u8 lbl_8074959C[];
extern u8 lbl_8074973C[];
extern u8 lbl_80775A88[];
extern u8 lbl_807772B0[];
extern u8 lbl_807772D0[];
extern u8 lbl_80788890[];
extern u8 lbl_807889C0[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087D708;
extern u32 lbl_8087EE98;
extern u32 lbl_8087EF10;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F3F0;
extern u32 lbl_8087F8A0;
extern u32 lbl_80884D60;
extern u32 lbl_80884D68;
extern u32 lbl_80884D78;
extern u32 lbl_80884D8C;
extern u32 lbl_80884DA4;
extern u32 lbl_80884DB8;
extern u32 lbl_80884DBC;
extern u32 lbl_80884DC4;
extern u32 lbl_80884DDC;
extern u32 lbl_80884DE0;
extern u32 lbl_80884DE4;
extern u32 lbl_80884DE8;
extern u32 lbl_80884DF0;
extern u32 lbl_80884DF4;
extern u32 lbl_80884DF8;
extern u32 lbl_80884DFC;
extern u32 lbl_80884E00;
extern u32 lbl_80884E04;
extern u32 lbl_80884E08;
extern u32 lbl_80884E0C;
extern u32 lbl_80884E10;
extern u32 lbl_80884E14;
extern u32 lbl_80884E18;
extern u32 lbl_80884E1C;
extern u32 lbl_80884E20;

/* Function declarations */
void fn_8031A484(void);
void fn_8031A670(void);
void fn_8031ACAC(void);
void fn_8031ACC0(void);
void fn_8031AF88(void);
void fn_8031B09C(void);
void fn_8031B0A8(void);
void fn_8031B3CC(void);
void fn_8031B6E0(void);
void fn_8031B9B4(void);

asm void fn_8031A484(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r3
    stw r30, 0x38(r1)
    li r30, 0x0
    stw r30, 0x14bc(r3)
    stw r30, 0x14c0(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0x2
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3e8
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3e9
    li r6, 0x1
    bl fn_80239DAC
    lis r4, lbl_80749568@ha
    lfs f1, lbl_80884D78
    addi r4, r4, lbl_80749568@l
    addi r3, r1, 0x8
    lwz r4, 0xc(r4)
    addi r5, r31, 0x528
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    lfs f3, lbl_80884D60
    lfs f0, 0x6b8(r31)
    fcmpu cr0, f3, f0
    bne lbl_fn_8031A484_000000C8
    lfs f0, 0x6bc(r31)
    fcmpu cr0, f3, f0
    bne lbl_fn_8031A484_000000C8
    lfs f0, 0x6c0(r31)
    fcmpu cr0, f3, f0
    bne lbl_fn_8031A484_000000C8
    li r30, 0x1
lbl_fn_8031A484_000000C8:
    cmpwi r30, 0x0
    bne lbl_fn_8031A484_00000148
    psq_l f1, 0x6b8(r31), 0, 0
    addi r3, r1, 0xc
    lfs f2, 0x6c0(r31)
    mr r4, r3
    stfs f2, 0x14(r1)
    psq_st f1, 0x0(r3), 0, 0
    bl fn_805F98D0
    lfs f4, lbl_80884DDC
    addi r4, r1, 0x18
    lfs f3, 0x10(r1)
    addi r3, r31, 0x1540
    lfs f0, 0xc(r1)
    fmuls f6, f3, f4
    lfs f5, 0x14(r1)
    fmuls f0, f0, f4
    lfs f3, lbl_80884DC4
    stfs f6, 0x1c(r1)
    fmuls f2, f5, f4
    stfs f0, 0x18(r1)
    lfs f0, lbl_80884D60
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lfs f4, 0x1544(r31)
    stfs f2, 0x20(r1)
    fmuls f3, f4, f3
    stfs f2, 0x1548(r31)
    fcmpo cr0, f3, f0
    stfs f3, 0x1544(r31)
    ble lbl_fn_8031A484_00000148
    stfs f0, 0x1544(r31)
lbl_fn_8031A484_00000148:
    lwz r5, lbl_8087F0A8
    lis r0, 0x4330
    lis r4, lbl_80749578@ha
    lwz r3, lbl_8087EFA8
    lwz r5, 0x30(r5)
    lwz r6, 0x15b4(r31)
    mullw r5, r5, r5
    stw r0, 0x28(r1)
    lfd f5, lbl_80749578@l(r4)
    cmpwi r6, 0x0
    lfs f3, lbl_80884DE0
    lfs f6, 0x3a4(r3)
    xoris r0, r5, 0x8000
    stw r0, 0x2c(r1)
    lfs f0, lbl_80884DE4
    lfd f4, 0x28(r1)
    fsubs f4, f4, f5
    fdivs f3, f3, f4
    fmuls f3, f3, f6
    fmuls f0, f0, f3
    stfs f0, 0x154c(r31)
    beq lbl_fn_8031A484_000001CC
    lwz r0, 0x55c(r6)
    cmpwi r0, 0x6
    bne lbl_fn_8031A484_000001CC
    lwz r0, 0x560(r6)
    cmpwi r0, 0x8c
    bne lbl_fn_8031A484_000001CC
    lwz r3, 0xf80(r6)
    li r4, 0x1
    li r0, 0x0
    stw r4, 0x4c(r3)
    stw r0, 0x15b4(r31)
lbl_fn_8031A484_000001CC:
    mr r3, r31
    bl fn_800EB7A0
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8031A670(void)
{
    nofralloc
    stwu r1, -0x170(r1)
    mflr r0
    stw r0, 0x174(r1)
    li r0, 0x0
    stfd f31, 0x160(r1)
    psq_st f31, 0x168(r1), 0, 0
    stw r31, 0x15c(r1)
    mr r31, r3
    stw r30, 0x158(r1)
    mr r30, r4
    stw r29, 0x154(r1)
    stw r28, 0x150(r1)
    stw r0, 0x14bc(r3)
    stw r0, 0x14c0(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0xa
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3e8
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3e9
    li r6, 0x1
    bl fn_80239DAC
    lwz r29, 0x14b8(r31)
    lis r4, lbl_8074959C@ha
    lfs f0, lbl_80884D60
    addi r4, r4, lbl_8074959C@l
    addi r28, r29, 0xb0
    stw r30, 0x1524(r31)
    mr r3, r28
    addi r30, r1, 0xe0
    stfs f0, 0x1534(r31)
    addi r4, r4, 0x105
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8031A670_000002AC
    li r4, 0x0
    b lbl_fn_8031A670_000002B8
lbl_fn_8031A670_000002AC:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r28)
    add r4, r3, r0
lbl_fn_8031A670_000002B8:
    lfs f0, lbl_80884D60
    cmpwi r4, 0x0
    stfs f0, 0xe0(r1)
    stfs f0, 0xe4(r1)
    stfs f0, 0xe8(r1)
    beq lbl_fn_8031A670_000002FC
    lfs f3, 0x1c(r4)
    addi r3, r1, 0xb0
    lfs f0, 0xc(r4)
    stfs f0, 0xb0(r1)
    lfs f2, 0x2c(r4)
    stfs f3, 0xb4(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0xb8(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0xe8(r1)
    b lbl_fn_8031A670_0000031C
lbl_fn_8031A670_000002FC:
    psq_l f1, 0x528(r29), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    lfs f2, 0x530(r29)
    lfs f3, 0xe4(r1)
    lfs f0, lbl_80884D8C
    stfs f2, 0xe8(r1)
    fadds f0, f3, f0
    stfs f0, 0xe4(r1)
lbl_fn_8031A670_0000031C:
    lfs f3, 0x530(r31)
    addi r29, r1, 0xf8
    lfs f0, 0xe8(r1)
    addi r5, r1, 0xec
    lfs f5, 0x52c(r31)
    mr r3, r29
    fsubs f2, f3, f0
    lfs f4, 0xe4(r1)
    lfs f3, 0x528(r31)
    mr r4, r29
    lfs f0, 0xe0(r1)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0xf0(r1)
    stfs f0, 0xec(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0xf4(r1)
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x100(r1)
    bl fn_805F98D0
    psq_l f1, 0x0(r29), 0, 0
    addi r5, r31, 0x1528
    lfs f2, 0x100(r1)
    mr r4, r31
    stfs f2, 0x1530(r31)
    addi r3, r1, 0x14
    lwz r29, 0x1524(r31)
    psq_st f1, 0x0(r5), 0, 0
    lwz r5, 0x14b8(r31)
    bl fn_80318648
    lfs f3, 0x530(r31)
    addi r3, r1, 0x20
    lfs f0, 0x1c(r1)
    addi r5, r1, 0x50
    lfs f5, 0x52c(r31)
    mr r4, r3
    fsubs f2, f3, f0
    lfs f4, 0x18(r1)
    lfs f3, 0x528(r31)
    lfs f0, 0x14(r1)
    fsubs f4, f5, f4
    stfs f2, 0x58(r1)
    fsubs f0, f3, f0
    stfs f4, 0x54(r1)
    stfs f0, 0x50(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x28(r1)
    bl fn_805F98D0
    lwz r0, 0x14b8(r31)
    cmplw r29, r0
    bne lbl_fn_8031A670_000004E0
    mr r4, r29
    addi r3, r1, 0x2c
    bl fn_80158E1C
    addi r3, r1, 0x5c
    addi r4, r1, 0x2c
    bl fn_80011034
    lis r3, lbl_80749580@ha
    lfs f1, 0x60(r1)
    lfd f2, lbl_80749580@l(r3)
    bl fn_8068AEA8
    frsp f31, f1
    lfs f0, lbl_80884DB8
    fcmpo cr0, f31, f0
    ble lbl_fn_8031A670_0000042C
    lfs f0, lbl_80884DA4
    fsubs f31, f31, f0
lbl_fn_8031A670_0000042C:
    lfs f0, lbl_80884DBC
    fcmpo cr0, f31, f0
    bge lbl_fn_8031A670_00000440
    lfs f0, lbl_80884DA4
    fadds f31, f31, f0
lbl_fn_8031A670_00000440:
    addi r3, r1, 0x68
    addi r4, r1, 0x20
    bl fn_80011034
    lis r3, lbl_80749580@ha
    lfs f1, 0x6c(r1)
    lfd f2, lbl_80749580@l(r3)
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_80884DB8
    fcmpo cr0, f3, f0
    ble lbl_fn_8031A670_00000474
    lfs f0, lbl_80884DA4
    fsubs f3, f3, f0
lbl_fn_8031A670_00000474:
    lfs f0, lbl_80884DBC
    fcmpo cr0, f3, f0
    bge lbl_fn_8031A670_00000488
    lfs f0, lbl_80884DA4
    fadds f3, f3, f0
lbl_fn_8031A670_00000488:
    lis r3, lbl_80749580@ha
    fsubs f1, f31, f3
    lfd f2, lbl_80749580@l(r3)
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_80884DB8
    fcmpo cr0, f3, f0
    ble lbl_fn_8031A670_000004B0
    lfs f0, lbl_80884DA4
    fsubs f3, f3, f0
lbl_fn_8031A670_000004B0:
    lfs f0, lbl_80884DBC
    fcmpo cr0, f3, f0
    bge lbl_fn_8031A670_000004C4
    lfs f0, lbl_80884DA4
    fadds f3, f3, f0
lbl_fn_8031A670_000004C4:
    lfs f0, lbl_80884D60
    fcmpo cr0, f3, f0
    ble lbl_fn_8031A670_000004D8
    li r0, -0x1
    b lbl_fn_8031A670_00000674
lbl_fn_8031A670_000004D8:
    li r0, 0x1
    b lbl_fn_8031A670_00000674
lbl_fn_8031A670_000004E0:
    lwz r5, 0x1524(r31)
    mr r4, r31
    addi r3, r1, 0x80
    bl fn_80318648
    lfs f3, 0x88(r1)
    addi r29, r1, 0x38
    lfs f0, 0x530(r31)
    addi r5, r1, 0x74
    lfs f5, 0x84(r1)
    mr r3, r29
    fsubs f2, f3, f0
    lfs f4, 0x52c(r31)
    lfs f0, 0x528(r31)
    mr r4, r29
    lfs f3, 0x80(r1)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x78(r1)
    stfs f0, 0x74(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0x7c(r1)
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F98D0
    mr r4, r29
    addi r3, r1, 0x8c
    bl fn_80011034
    lis r3, lbl_80749580@ha
    lfs f1, 0x90(r1)
    lfd f2, lbl_80749580@l(r3)
    bl fn_8068AEA8
    frsp f31, f1
    lfs f0, lbl_80884DB8
    fcmpo cr0, f31, f0
    ble lbl_fn_8031A670_00000574
    lfs f0, lbl_80884DA4
    fsubs f31, f31, f0
lbl_fn_8031A670_00000574:
    lfs f0, lbl_80884DBC
    fcmpo cr0, f31, f0
    bge lbl_fn_8031A670_00000588
    lfs f0, lbl_80884DA4
    fadds f31, f31, f0
lbl_fn_8031A670_00000588:
    lfs f3, 0x1c(r1)
    addi r29, r1, 0x44
    lfs f0, 0x530(r31)
    addi r5, r1, 0x98
    lfs f5, 0x18(r1)
    mr r3, r29
    fsubs f2, f3, f0
    lfs f4, 0x52c(r31)
    lfs f0, 0x528(r31)
    mr r4, r29
    lfs f3, 0x14(r1)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x9c(r1)
    stfs f0, 0x98(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0xa0(r1)
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x4c(r1)
    bl fn_805F98D0
    mr r4, r29
    addi r3, r1, 0xa4
    bl fn_80011034
    lis r3, lbl_80749580@ha
    lfs f1, 0xa8(r1)
    lfd f2, lbl_80749580@l(r3)
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_80884DB8
    fcmpo cr0, f3, f0
    ble lbl_fn_8031A670_0000060C
    lfs f0, lbl_80884DA4
    fsubs f3, f3, f0
lbl_fn_8031A670_0000060C:
    lfs f0, lbl_80884DBC
    fcmpo cr0, f3, f0
    bge lbl_fn_8031A670_00000620
    lfs f0, lbl_80884DA4
    fadds f3, f3, f0
lbl_fn_8031A670_00000620:
    lis r3, lbl_80749580@ha
    fsubs f1, f31, f3
    lfd f2, lbl_80749580@l(r3)
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_80884DB8
    fcmpo cr0, f3, f0
    ble lbl_fn_8031A670_00000648
    lfs f0, lbl_80884DA4
    fsubs f3, f3, f0
lbl_fn_8031A670_00000648:
    lfs f0, lbl_80884DBC
    fcmpo cr0, f3, f0
    bge lbl_fn_8031A670_0000065C
    lfs f0, lbl_80884DA4
    fadds f3, f3, f0
lbl_fn_8031A670_0000065C:
    lfs f0, lbl_80884D60
    fcmpo cr0, f3, f0
    ble lbl_fn_8031A670_00000670
    li r0, 0x1
    b lbl_fn_8031A670_00000674
lbl_fn_8031A670_00000670:
    li r0, -0x1
lbl_fn_8031A670_00000674:
    xoris r3, r0, 0x8000
    lis r0, 0x4330
    stw r3, 0x144(r1)
    lis r4, lbl_80749578@ha
    lfd f4, lbl_80749578@l(r4)
    addi r5, r31, 0x1528
    stw r0, 0x140(r1)
    addi r29, r1, 0x104
    lfs f0, lbl_8087F3F0
    addi r3, r1, 0x110
    lfd f3, 0x140(r1)
    li r4, 0x79
    lfs f2, 0x1530(r31)
    fsubs f3, f3, f4
    psq_l f1, 0x0(r5), 0, 0
    fmuls f0, f0, f3
    stfs f0, 0x1538(r31)
    psq_st f1, 0x0(r29), 0, 0
    fmr f1, f0
    stfs f2, 0x10c(r1)
    bl fn_805F8E70
    mr r4, r29
    mr r5, r29
    addi r3, r1, 0x110
    bl fn_805F93C0
    lwz r30, 0x14b8(r31)
    lis r4, lbl_8074959C@ha
    lfs f2, 0x530(r31)
    addi r5, r31, 0x1504
    psq_l f1, 0x528(r31), 0, 0
    addi r4, r4, lbl_8074959C@l
    addi r28, r30, 0xb0
    psq_st f1, 0x0(r5), 0, 0
    mr r3, r28
    addi r29, r1, 0xc8
    stfs f2, 0x150c(r31)
    addi r4, r4, 0x105
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8031A670_00000720
    li r4, 0x0
    b lbl_fn_8031A670_0000072C
lbl_fn_8031A670_00000720:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r28)
    add r4, r3, r0
lbl_fn_8031A670_0000072C:
    lfs f0, lbl_80884D60
    cmpwi r4, 0x0
    stfs f0, 0xc8(r1)
    stfs f0, 0xcc(r1)
    stfs f0, 0xd0(r1)
    beq lbl_fn_8031A670_00000770
    lfs f3, 0x1c(r4)
    addi r3, r1, 0x8
    lfs f0, 0xc(r4)
    stfs f0, 0x8(r1)
    lfs f2, 0x2c(r4)
    stfs f3, 0xc(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0xd0(r1)
    b lbl_fn_8031A670_00000790
lbl_fn_8031A670_00000770:
    psq_l f1, 0x528(r30), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    lfs f2, 0x530(r30)
    lfs f3, 0xcc(r1)
    lfs f0, lbl_80884D8C
    stfs f2, 0xd0(r1)
    fadds f0, f3, f0
    stfs f0, 0xcc(r1)
lbl_fn_8031A670_00000790:
    lfs f5, 0x10c(r1)
    addi r4, r1, 0xd4
    lfs f4, lbl_80884D68
    addi r3, r31, 0x1510
    lfs f3, 0x108(r1)
    li r0, 0x7
    lfs f0, 0x104(r1)
    fmuls f5, f5, f4
    fmuls f6, f3, f4
    lfs f3, 0xd0(r1)
    fmuls f4, f0, f4
    lfs f0, 0xcc(r1)
    fadds f2, f3, f5
    fadds f7, f0, f6
    lfs f3, 0xc8(r1)
    stfs f7, 0xd8(r1)
    fadds f3, f3, f4
    lfs f0, lbl_80884D60
    stfs f2, 0x1518(r31)
    stfs f3, 0xd4(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f0, 0x151c(r31)
    stw r0, 0x58c(r31)
    psq_l f31, 0x168(r1), 0, 0
    lfd f31, 0x160(r1)
    lwz r31, 0x15c(r1)
    lwz r30, 0x158(r1)
    lwz r29, 0x154(r1)
    lwz r28, 0x150(r1)
    lwz r0, 0x174(r1)
    stfs f4, 0xbc(r1)
    stfs f6, 0xc0(r1)
    stfs f5, 0xc4(r1)
    stfs f2, 0xdc(r1)
    mtlr r0
    addi r1, r1, 0x170
    blr
}

asm void fn_8031ACAC(void)
{
    nofralloc
    lwz r3, 0x58c(r3)
    subi r0, r3, 0x8
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

asm void fn_8031ACC0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stmw r25, 0x24(r1)
    mr r27, r3
    mr r29, r4
    mr r28, r5
    lwz r0, 0x4(r3)
    lwz r30, 0x8(r3)
    cmplw r0, r30
    blt lbl_fn_8031ACC0_000008C8
    lis r3, 0x4000
    subi r0, r3, 0x1
    subf r0, r30, r0
    cmplwi r0, 0x1
    bge lbl_fn_8031ACC0_000008A0
    lis r4, lbl_8074959C@ha
    lis r3, __files@ha
    addi r4, r4, lbl_8074959C@l
    addi r3, r3, __files@l
    addi r4, r4, 0x10c
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8031ACC0_000008A0:
    lis r3, 0x1555
    addi r0, r3, 0x5555
    cmplw r30, r0
    bge lbl_fn_8031ACC0_000008B4
    b lbl_fn_8031ACC0_00000920
lbl_fn_8031ACC0_000008B4:
    lis r3, 0x2aab
    subi r0, r3, 0x5556
    cmplw r30, r0
    bge lbl_fn_8031ACC0_00000920
    b lbl_fn_8031ACC0_00000920
lbl_fn_8031ACC0_000008C8:
    cmplw r4, r5
    lwz r6, 0x0(r3)
    slwi r0, r0, 2
    add r6, r6, r0
    bgt lbl_fn_8031ACC0_000008E8
    cmplw r5, r6
    bge lbl_fn_8031ACC0_000008E8
    addi r28, r28, 0x4
lbl_fn_8031ACC0_000008E8:
    subf r0, r4, r6
    lwz r4, 0x4(r3)
    srawi r0, r0, 2
    addi r6, r6, 0x4
    addze r0, r0
    addi r4, r4, 0x1
    stw r4, 0x4(r3)
    slwi r5, r0, 2
    mr r4, r29
    subf r3, r5, r6
    bl memmove
    lwz r0, 0x0(r28)
    stw r0, 0x0(r29)
    b lbl_fn_8031ACC0_00000AEC
lbl_fn_8031ACC0_00000920:
    lwz r30, 0x0(r27)
    li r0, 0x1
    lis r3, 0x4000
    stw r0, 0x10(r1)
    subf r0, r30, r29
    srawi r4, r0, 2
    lwz r31, 0x8(r27)
    subi r0, r3, 0x1
    addze r29, r4
    subf r0, r31, r0
    cmplwi r0, 0x1
    bge lbl_fn_8031ACC0_00000974
    lis r4, lbl_8074959C@ha
    lis r3, __files@ha
    addi r4, r4, lbl_8074959C@l
    addi r3, r3, __files@l
    addi r4, r4, 0x10c
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8031ACC0_00000974:
    lis r3, 0x1555
    addi r0, r3, 0x5555
    cmplw r31, r0
    bge lbl_fn_8031ACC0_000009C0
    addi r5, r31, 0x1
    lis r4, 0xcccd
    slwi r0, r5, 2
    addi r3, r1, 0x8
    subf r0, r5, r0
    subi r4, r4, 0x3333
    mulhwu r0, r4, r0
    srwi r0, r0, 2
    stw r0, 0x8(r1)
    cmplwi r0, 0x1
    bge lbl_fn_8031ACC0_000009B4
    addi r3, r1, 0x10
lbl_fn_8031ACC0_000009B4:
    lwz r0, 0x0(r3)
    add r26, r31, r0
    b lbl_fn_8031ACC0_00000A00
lbl_fn_8031ACC0_000009C0:
    lis r3, 0x2aab
    subi r0, r3, 0x5556
    cmplw r31, r0
    bge lbl_fn_8031ACC0_000009F8
    addi r0, r31, 0x1
    addi r3, r1, 0xc
    srwi r0, r0, 1
    stw r0, 0xc(r1)
    cmplwi r0, 0x1
    bge lbl_fn_8031ACC0_000009EC
    addi r3, r1, 0x10
lbl_fn_8031ACC0_000009EC:
    lwz r0, 0x0(r3)
    add r26, r31, r0
    b lbl_fn_8031ACC0_00000A00
lbl_fn_8031ACC0_000009F8:
    lis r3, 0x4000
    subi r26, r3, 0x1
lbl_fn_8031ACC0_00000A00:
    lis r3, 0x4000
    subi r0, r3, 0x1
    cmplw r26, r0
    ble lbl_fn_8031ACC0_00000A34
    lis r4, lbl_8074959C@ha
    lis r3, __files@ha
    addi r4, r4, lbl_8074959C@l
    addi r3, r3, __files@l
    addi r4, r4, 0x10c
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8031ACC0_00000A34:
    slwi r3, r26, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r25, r3
    bne lbl_fn_8031ACC0_00000A68
    lis r3, __files@ha
    lis r4, lbl_80775A88@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8031ACC0_00000A68:
    stw r25, 0x0(r27)
    cmpwi r30, 0x0
    slwi r31, r29, 2
    lwz r0, 0x0(r28)
    stw r26, 0x8(r27)
    stwx r0, r25, r31
    beq lbl_fn_8031ACC0_00000AD8
    srawi r0, r31, 2
    lwz r25, 0x0(r27)
    addze r0, r0
    mr r4, r30
    slwi r26, r0, 2
    mr r3, r25
    mr r5, r26
    bl memmove
    lwz r0, 0x4(r27)
    add r3, r25, r26
    add r4, r30, r31
    slwi r0, r0, 2
    addi r3, r3, 0x4
    add r0, r30, r0
    subf r0, r4, r0
    srawi r0, r0, 2
    addze r0, r0
    slwi r5, r0, 2
    bl memmove
    mr r3, r30
    bl dtor_80084684
lbl_fn_8031ACC0_00000AD8:
    lwz r3, 0x4(r27)
    lwz r0, 0x0(r27)
    addi r3, r3, 0x1
    stw r3, 0x4(r27)
    add r29, r0, r31
lbl_fn_8031ACC0_00000AEC:
    mr r3, r29
    lmw r25, 0x24(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8031AF88(void)
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
    beq lbl_fn_8031AF88_00000BF8
    addic. r0, r3, 0x1c8c
    beq lbl_fn_8031AF88_00000B50
    lwz r4, 0x1c8c(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8031AF88_00000B50
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_8031AF88_00000B50
    bl fn_800897D8
lbl_fn_8031AF88_00000B50:
    lis r4, fn_8008A76C@ha
    addi r3, r29, 0x1648
    addi r4, r4, fn_8008A76C@l
    li r5, 0x214
    li r6, 0x3
    bl fn_806959D8
    addi r3, r29, 0x15a8
    li r4, -0x1
    bl fn_802375C4
    addi r3, r29, 0x159c
    li r4, -0x1
    bl fn_802375C4
    addic. r31, r29, 0x1590
    beq lbl_fn_8031AF88_00000BA0
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_8031AF88_00000BA0
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8031AF88_00000BA0:
    addi r3, r29, 0x1584
    li r4, -0x1
    bl fn_802375C4
    addic. r31, r29, 0x1550
    beq lbl_fn_8031AF88_00000BCC
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_8031AF88_00000BCC
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8031AF88_00000BCC:
    addic. r3, r29, 0x14b0
    beq lbl_fn_8031AF88_00000BDC
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8031AF88_00000BDC:
    mr r3, r29
    li r4, 0x0
    bl fn_8035B78C
    cmpwi r30, 0x0
    ble lbl_fn_8031AF88_00000BF8
    mr r3, r29
    bl dtor_80084684
lbl_fn_8031AF88_00000BF8:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8031B09C(void)
{
    nofralloc
    lfs f0, lbl_80884DE8
    stfs f0, lbl_8087F3F0
    blr
}

asm void fn_8031B0A8(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    stw r31, 0x10c(r1)
    mr r31, r5
    stw r30, 0x108(r1)
    stw r29, 0x104(r1)
    mr r29, r3
    lwz r5, 0x20(r5)
    bl fn_8035B694
    lis r4, lbl_80788890@ha
    addi r3, r29, 0x14b0
    addi r4, r4, lbl_80788890@l
    stw r4, 0x0(r29)
    bl fn_8006CA80
    li r30, 0x0
    stw r30, 0x14b8(r29)
    addi r3, r29, 0x14c8
    stw r30, 0x14bc(r29)
    stw r30, 0x14c0(r29)
    stw r30, 0x14c4(r29)
    bl fn_80057A64
    lfs f1, lbl_80884DF0
    addi r3, r29, 0x14d4
    fmr f2, f1
    fmr f3, f1
    bl fn_8000D114
    lfs f1, lbl_80884DF0
    addi r3, r29, 0x14e0
    fmr f2, f1
    fmr f3, f1
    bl fn_8000D114
    lfs f0, lbl_80884DF4
    addi r3, r29, 0x14f0
    stfs f0, 0x14ec(r29)
    bl fn_80057A64
    lfs f1, lbl_80884DF0
    addi r3, r29, 0x1500
    fmr f2, f1
    fmr f3, f1
    bl fn_8000D114
    lfs f1, lbl_80884DF0
    addi r3, r29, 0x150c
    fmr f2, f1
    fmr f3, f1
    bl fn_8000D114
    lfs f1, lbl_80884DF0
    addi r3, r29, 0x1518
    fmr f2, f1
    fmr f3, f1
    bl fn_8000D114
    addi r3, r29, 0x1524
    bl fn_80057A64
    li r0, 0x5a
    stw r0, 0x1530(r29)
    addi r3, r29, 0x1538
    bl fn_8031D4F4
    addi r3, r29, 0x1574
    bl fn_80237518
    addi r3, r29, 0x1580
    bl fn_80237518
    addi r3, r29, 0x158c
    bl fn_802377B8
    addi r3, r29, 0x1598
    bl fn_802377B8
    addi r3, r29, 0x15a4
    bl fn_802377B8
    addi r3, r29, 0x15b0
    bl fn_802377B8
    addi r3, r29, 0x15bc
    bl fn_802BABC0
    li r3, 0x1
    li r4, 0x4
    li r0, 0x8
    stw r3, 0x15c0(r29)
    mr r3, r29
    stw r30, 0x15c4(r29)
    stw r4, 0x15c8(r29)
    stw r0, 0x15cc(r29)
    bl fn_800F52F0
    li r4, 0x10
    addi r3, r3, 0xe8
    bl fn_802660FC
    lis r30, lbl_8074973C@ha
    addi r3, r1, 0x2c
    addi r4, r30, lbl_8074973C@l
    bl fn_8003E4A4
    addi r30, r30, lbl_8074973C@l
    addi r3, r1, 0x20
    addi r4, r30, 0x18
    bl fn_8003E4A4
    addi r3, r1, 0x14
    addi r4, r31, 0x2c
    bl fn_8003E4A4
    addi r3, r1, 0x74
    addi r4, r30, 0x2b
    li r5, 0x0
    li r6, 0x0
    bl fn_800EC440
    addi r3, r1, 0xd4
    addi r4, r1, 0x14
    addi r5, r1, 0x74
    bl fn_800EC2C4
    addi r3, r1, 0x74
    li r4, -0x1
    bl fn_800EC534
    addi r3, r1, 0x98
    addi r4, r1, 0xd4
    bl fn_800EC654
    b lbl_fn_8031B0A8_00000E20
lbl_fn_8031B0A8_00000DDC:
    addi r3, r1, 0x98
    bl fn_800ED4D8
    bl fn_8004212C
    addi r4, r30, 0x2d
    li r5, 0x8
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_8031B0A8_00000E18
    addi r3, r1, 0x98
    bl fn_800ED4D8
    bl fn_8004212C
    mr r4, r3
    addi r3, r1, 0x20
    addi r4, r4, 0x8
    bl fn_8020A780
lbl_fn_8031B0A8_00000E18:
    addi r3, r1, 0x98
    bl fn_800ED4E0
lbl_fn_8031B0A8_00000E20:
    addi r3, r1, 0x38
    addi r4, r1, 0xd4
    bl fn_800EDFE8
    addi r3, r1, 0x98
    addi r4, r1, 0x38
    bl fn_800EC254
    mr r31, r3
    addi r3, r1, 0x38
    li r4, -0x1
    bl fn_800ED42C
    cmpwi r31, 0x0
    bne lbl_fn_8031B0A8_00000DDC
    addi r3, r1, 0x98
    li r4, -0x1
    bl fn_800ED42C
    addi r3, r1, 0x8
    addi r4, r1, 0x2c
    addi r5, r1, 0x20
    bl fn_8006AFF8
    addi r3, r1, 0x8
    bl fn_8004212C
    lwz r12, 0x14b0(r29)
    mr r4, r3
    addi r3, r29, 0x14b0
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lis r31, lbl_8074973C@ha
    addi r3, r29, 0x1574
    addi r31, r31, lbl_8074973C@l
    addi r4, r31, 0x36
    bl fn_80237654
    addi r3, r29, 0x1580
    addi r4, r31, 0x47
    bl fn_80237654
    addi r3, r29, 0x158c
    addi r4, r31, 0x58
    bl fn_8023780C
    addi r3, r29, 0x1598
    addi r4, r31, 0x66
    bl fn_8023780C
    addi r3, r29, 0x15a4
    addi r4, r31, 0x74
    bl fn_8023780C
    addi r3, r29, 0x15b0
    addi r4, r31, 0x82
    bl fn_8023780C
    lis r4, lbl_807C7030@ha
    addi r3, r29, 0x14c8
    addi r4, r4, lbl_807C7030@l
    bl fn_8000D124
    addi r3, r1, 0x8
    li r4, -0x1
    bl dtor_80013D60
    addi r3, r1, 0xd4
    li r4, -0x1
    bl fn_800EC5BC
    addi r3, r1, 0x14
    li r4, -0x1
    bl dtor_80013D60
    addi r3, r1, 0x20
    li r4, -0x1
    bl dtor_80013D60
    addi r3, r1, 0x2c
    li r4, -0x1
    bl dtor_80013D60
    lwz r31, 0x10c(r1)
    mr r3, r29
    lwz r30, 0x108(r1)
    lwz r29, 0x104(r1)
    lwz r0, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_8031B3CC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    beq lbl_fn_8031B3CC_00001238
    lis r4, lbl_80788890@ha
    li r0, 0x0
    addi r4, r4, lbl_80788890@l
    lwz r30, 0x1560(r3)
    stw r0, 0x153c(r3)
    stw r4, 0x0(r3)
    stw r0, 0x156c(r3)
    b lbl_fn_8031B3CC_00000FEC
lbl_fn_8031B3CC_00000F94:
    lwz r3, lbl_8087F3C0
    li r5, 0x0
    lwz r4, 0x0(r30)
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, 0x0(r30)
    bl dtor_80084684
    lwz r0, 0x1564(r28)
    mr r3, r30
    lwz r5, 0x1560(r28)
    addi r4, r30, 0x4
    slwi r0, r0, 2
    add r0, r5, r0
    subf r0, r30, r0
    srawi r0, r0, 2
    addze r5, r0
    subi r0, r5, 0x1
    slwi r5, r0, 2
    bl memmove
    lwz r3, 0x1564(r28)
    subi r0, r3, 0x1
    stw r0, 0x1564(r28)
lbl_fn_8031B3CC_00000FEC:
    lwz r0, 0x1564(r28)
    lwz r3, 0x1560(r28)
    slwi r0, r0, 2
    add r0, r3, r0
    cmplw r30, r0
    bne lbl_fn_8031B3CC_00000F94
    lwz r3, lbl_8087F3C0
    addi r4, r28, 0x1538
    li r5, 0x0
    bl fn_80239D58
    cmpwi r3, 0x0
    beq lbl_fn_8031B3CC_00001030
    lwz r3, lbl_8087F3C0
    addi r4, r28, 0x1538
    li r5, 0x0
    li r6, 0x0
    bl fn_80239DAC
lbl_fn_8031B3CC_00001030:
    addi r3, r28, 0x1570
    li r4, 0x0
    li r5, 0x0
    bl fn_800CB5C8
    addic. r0, r28, 0x15bc
    beq lbl_fn_8031B3CC_00001064
    lwz r4, 0x15bc(r28)
    cmpwi r4, 0x0
    beq lbl_fn_8031B3CC_00001064
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_8031B3CC_00001064
    bl fn_800897D8
lbl_fn_8031B3CC_00001064:
    addic. r30, r28, 0x15b0
    beq lbl_fn_8031B3CC_00001084
    mr r3, r30
    bl fn_8023781C
    addic. r3, r30, 0x4
    beq lbl_fn_8031B3CC_00001084
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8031B3CC_00001084:
    addic. r30, r28, 0x15a4
    beq lbl_fn_8031B3CC_000010A4
    mr r3, r30
    bl fn_8023781C
    addic. r3, r30, 0x4
    beq lbl_fn_8031B3CC_000010A4
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8031B3CC_000010A4:
    addic. r30, r28, 0x1598
    beq lbl_fn_8031B3CC_000010C4
    mr r3, r30
    bl fn_8023781C
    addic. r3, r30, 0x4
    beq lbl_fn_8031B3CC_000010C4
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8031B3CC_000010C4:
    addic. r30, r28, 0x158c
    beq lbl_fn_8031B3CC_000010E4
    mr r3, r30
    bl fn_8023781C
    addic. r3, r30, 0x4
    beq lbl_fn_8031B3CC_000010E4
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8031B3CC_000010E4:
    addi r3, r28, 0x1580
    li r4, -0x1
    bl fn_802375C4
    addi r3, r28, 0x1574
    li r4, -0x1
    bl fn_802375C4
    addic. r30, r28, 0x1538
    beq lbl_fn_8031B3CC_0000120C
    lis r3, lbl_807889C0@ha
    li r0, 0x0
    addi r3, r3, lbl_807889C0@l
    lwz r31, 0x28(r30)
    stw r0, 0x4(r30)
    stw r3, 0x0(r30)
    stw r0, 0x34(r30)
    b lbl_fn_8031B3CC_0000117C
lbl_fn_8031B3CC_00001124:
    lwz r3, lbl_8087F3C0
    li r5, 0x0
    lwz r4, 0x0(r31)
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, 0x0(r31)
    bl dtor_80084684
    lwz r0, 0x2c(r30)
    mr r3, r31
    lwz r5, 0x28(r30)
    addi r4, r31, 0x4
    slwi r0, r0, 2
    add r0, r5, r0
    subf r0, r31, r0
    srawi r0, r0, 2
    addze r5, r0
    subi r0, r5, 0x1
    slwi r5, r0, 2
    bl memmove
    lwz r3, 0x2c(r30)
    subi r0, r3, 0x1
    stw r0, 0x2c(r30)
lbl_fn_8031B3CC_0000117C:
    lwz r0, 0x2c(r30)
    lwz r3, 0x28(r30)
    slwi r0, r0, 2
    add r0, r3, r0
    cmplw r31, r0
    bne lbl_fn_8031B3CC_00001124
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x0
    bl fn_80239D58
    cmpwi r3, 0x0
    beq lbl_fn_8031B3CC_000011C0
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x0
    li r6, 0x0
    bl fn_80239DAC
lbl_fn_8031B3CC_000011C0:
    addi r3, r30, 0x38
    li r4, 0x0
    li r5, 0x0
    bl fn_800CB5C8
    addi r3, r30, 0x38
    li r4, -0x1
    bl fn_800CB3A0
    addic. r4, r30, 0x28
    beq lbl_fn_8031B3CC_0000120C
    beq lbl_fn_8031B3CC_0000120C
    beq lbl_fn_8031B3CC_0000120C
    beq lbl_fn_8031B3CC_0000120C
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8031B3CC_0000120C
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_8031B3CC_0000120C:
    addic. r3, r28, 0x14b0
    beq lbl_fn_8031B3CC_0000121C
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8031B3CC_0000121C:
    mr r3, r28
    li r4, 0x0
    bl fn_8035B78C
    cmpwi r29, 0x0
    ble lbl_fn_8031B3CC_00001238
    mr r3, r28
    bl dtor_80084684
lbl_fn_8031B3CC_00001238:
    lwz r31, 0x1c(r1)
    mr r3, r28
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8031B6E0(void)
{
    nofralloc
    stwu r1, -0x650(r1)
    mflr r0
    stw r0, 0x654(r1)
    stw r31, 0x64c(r1)
    mr r31, r3
    stw r30, 0x648(r1)
    stw r29, 0x644(r1)
    stw r28, 0x640(r1)
    bl fn_8013655C
    cmpwi r3, 0x0
    bne lbl_fn_8031B6E0_0000150C
    addi r3, r31, 0x14b0
    bl fn_80473F50
    cmpwi r3, 0x0
    bne lbl_fn_8031B6E0_0000150C
    addi r3, r31, 0x1574
    bl fn_802376D0
    cmpwi r3, 0x0
    bne lbl_fn_8031B6E0_0000150C
    addi r3, r31, 0x1580
    bl fn_802376D0
    cmpwi r3, 0x0
    bne lbl_fn_8031B6E0_0000150C
    addi r3, r31, 0x158c
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_8031B6E0_0000150C
    addi r3, r31, 0x1598
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_8031B6E0_0000150C
    addi r3, r31, 0x15a4
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_8031B6E0_0000150C
    addi r3, r31, 0x15b0
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_8031B6E0_0000150C
    lwz r0, 0x15bc(r31)
    lis r3, lbl_8074973C@ha
    addi r3, r3, lbl_8074973C@l
    cmpwi r0, 0x0
    addi r4, r3, 0x8f
    bne lbl_fn_8031B6E0_00001330
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_8031B6E0_00001330
    addi r3, r3, 0x10
    bl fn_8008937C
    stw r3, 0x15bc(r31)
    mr r29, r3
    b lbl_fn_8031B6E0_00001334
lbl_fn_8031B6E0_00001330:
    li r29, 0x0
lbl_fn_8031B6E0_00001334:
    lis r4, lbl_8074973C@ha
    mr r3, r29
    addi r30, r4, lbl_8074973C@l
    addi r5, r31, 0x15c0
    addi r4, r30, 0x93
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r29
    addi r4, r30, 0x9d
    addi r5, r31, 0x15c4
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    lfs f1, lbl_80884DF8
    mr r3, r29
    lfs f2, lbl_80884DFC
    addi r4, r30, 0xa6
    lfs f3, lbl_80884E00
    addi r5, r31, 0x14ec
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r29
    addi r4, r30, 0xb5
    addi r5, r31, 0x58c
    li r6, 0x1
    li r7, 0x64
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_80884E04
    mr r3, r29
    lfs f2, lbl_80884E08
    addi r4, r30, 0xc0
    fmr f3, f1
    addi r5, r31, 0x528
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    addi r3, r31, 0x14b0
    bl fn_80470580
    cmpwi r3, 0x0
    beq lbl_fn_8031B6E0_000014B0
    addi r3, r31, 0x14b0
    bl fn_8047059C
    mr r28, r3
    addi r3, r31, 0x14b0
    bl fn_80470580
    lis r4, lbl_807772D0@ha
    li r0, 0x0
    addi r4, r4, lbl_807772D0@l
    stw r4, 0x8(r1)
    mr r29, r3
    addi r3, r1, 0x18
    stw r0, 0xc(r1)
    li r4, 0x0
    li r5, 0x400
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x638(r1)
    bl memset
    addi r3, r1, 0x618
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x8(r1)
    mr r4, r29
    mr r5, r28
    addi r3, r1, 0x8
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0x8
    addi r4, r4, lbl_807772B0@l
    stw r4, 0x8(r1)
    la r4, lbl_8087D708
    bl fn_8005B6E8
lbl_fn_8031B6E0_00001474:
    addi r3, r1, 0x8
    bl fn_8005B3CC
    addi r4, r30, 0xc4
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8031B6E0_000014A0
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x1534(r31)
lbl_fn_8031B6E0_000014A0:
    addi r3, r1, 0x8
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_8031B6E0_00001474
lbl_fn_8031B6E0_000014B0:
    lwz r3, 0x7ec(r31)
    addi r4, r31, 0x1574
    lwz r6, 0x958(r31)
    addi r0, r31, 0x1580
    ori r3, r3, 0x1c0
    lwz r5, 0x54c(r31)
    oris r3, r3, 0x1
    lfs f2, 0x530(r31)
    ori r3, r3, 0xc21d
    addi r8, r31, 0x14c8
    ori r7, r5, 0x200
    psq_l f1, 0x528(r31), 0, 0
    oris r5, r3, 0x388
    ori r6, r6, 0x2a
    stw r7, 0x54c(r31)
    li r3, 0x1
    stw r6, 0x958(r31)
    stw r5, 0x7ec(r31)
    stw r4, 0x1540(r31)
    stw r0, 0x1544(r31)
    psq_st f1, 0x0(r8), 0, 0
    stfs f2, 0x14d0(r31)
    b lbl_fn_8031B6E0_00001510
lbl_fn_8031B6E0_0000150C:
    li r3, 0x0
lbl_fn_8031B6E0_00001510:
    lwz r0, 0x654(r1)
    lwz r31, 0x64c(r1)
    lwz r30, 0x648(r1)
    lwz r29, 0x644(r1)
    lwz r28, 0x640(r1)
    mtlr r0
    addi r1, r1, 0x650
    blr
}

asm void fn_8031B9B4(void)
{
    nofralloc
    stwu r1, -0x370(r1)
    mflr r0
    stw r0, 0x374(r1)
    stfd f31, 0x360(r1)
    psq_st f31, 0x368(r1), 0, 0
    stfd f30, 0x350(r1)
    psq_st f30, 0x358(r1), 0, 0
    stfd f29, 0x340(r1)
    psq_st f29, 0x348(r1), 0, 0
    stfd f28, 0x330(r1)
    psq_st f28, 0x338(r1), 0, 0
    stfd f27, 0x320(r1)
    psq_st f27, 0x328(r1), 0, 0
    stfd f26, 0x310(r1)
    psq_st f26, 0x318(r1), 0, 0
    stw r31, 0x30c(r1)
    mr r31, r3
    stw r30, 0x308(r1)
    stw r29, 0x304(r1)
    stw r28, 0x300(r1)
    lwz r5, 0x58c(r3)
    lwz r4, 0xd1c(r3)
    subi r0, r5, 0x7
    stw r4, 0xd20(r3)
    cmplwi r0, 0x2
    ble lbl_fn_8031B9B4_00001698
    lwz r3, lbl_8087F8A0
    li r30, 0x0
    lfs f31, lbl_80884E0C
    lwz r29, 0x48(r3)
    b lbl_fn_8031B9B4_0000167C
lbl_fn_8031B9B4_000015AC:
    lwz r6, 0x38(r29)
    li r4, 0x0
    li r3, 0x0
    li r5, 0x0
    rlwinm r0, r6, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_8031B9B4_000015D8
    clrlwi r0, r6, 31
    cmplwi r0, 0x1
    beq lbl_fn_8031B9B4_000015D8
    li r5, 0x1
lbl_fn_8031B9B4_000015D8:
    cmpwi r5, 0x0
    beq lbl_fn_8031B9B4_000015F4
    lwz r0, 0x7e0(r29)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_8031B9B4_000015F4
    li r3, 0x1
lbl_fn_8031B9B4_000015F4:
    cmpwi r3, 0x0
    beq lbl_fn_8031B9B4_00001628
    lwz r0, 0x55c(r29)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_8031B9B4_0000161C
    lwz r0, 0x560(r29)
    cmpwi r0, 0x1c
    bne lbl_fn_8031B9B4_0000161C
    li r3, 0x1
lbl_fn_8031B9B4_0000161C:
    cmpwi r3, 0x0
    bne lbl_fn_8031B9B4_00001628
    li r4, 0x1
lbl_fn_8031B9B4_00001628:
    cmpwi r4, 0x0
    beq lbl_fn_8031B9B4_00001678
    lfs f7, 0x530(r29)
    addi r3, r1, 0xc8
    lfs f0, 0x530(r31)
    lfs f9, 0x52c(r29)
    fsubs f10, f7, f0
    lfs f8, 0x52c(r31)
    lfs f7, 0x528(r29)
    lfs f0, 0x528(r31)
    fsubs f8, f9, f8
    fsubs f0, f7, f0
    stfs f8, 0xcc(r1)
    stfs f0, 0xc8(r1)
    stfs f10, 0xd0(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f31
    bge lbl_fn_8031B9B4_00001678
    mr r30, r29
    fmr f31, f1
lbl_fn_8031B9B4_00001678:
    lwz r29, 0x14ac(r29)
lbl_fn_8031B9B4_0000167C:
    cmpwi r29, 0x0
    bne lbl_fn_8031B9B4_000015AC
    lwz r0, 0x14a8(r31)
    stw r30, 0x14b8(r31)
    oris r0, r0, 0x400
    stw r0, 0x14a8(r31)
    b lbl_fn_8031B9B4_000016A4
lbl_fn_8031B9B4_00001698:
    lwz r0, 0x14a8(r3)
    rlwinm r0, r0, 0, 6, 4
    stw r0, 0x14a8(r3)
lbl_fn_8031B9B4_000016A4:
    lwz r0, 0xd18(r31)
    li r30, 0x0
    lwz r3, 0x14c0(r31)
    lwz r5, 0x14b8(r31)
    cmpwi r0, 0x0
    addi r4, r3, 0x1
    stw r30, 0x1454(r31)
    stw r5, 0xd1c(r31)
    stw r4, 0x14c0(r31)
    beq lbl_fn_8031B9B4_000016D4
    cmpwi cr1, r5, 0x0
    bne cr1, lbl_fn_8031B9B4_000017EC
lbl_fn_8031B9B4_000016D4:
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lwz r0, 0x153c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8031B9B4_000017AC
    li r0, 0x0
    lwz r29, 0x1560(r31)
    stw r0, 0x153c(r31)
    stw r0, 0x156c(r31)
    b lbl_fn_8031B9B4_00001758
lbl_fn_8031B9B4_00001700:
    lwz r3, lbl_8087F3C0
    li r5, 0x0
    lwz r4, 0x0(r29)
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, 0x0(r29)
    bl dtor_80084684
    lwz r0, 0x1564(r31)
    mr r3, r29
    lwz r5, 0x1560(r31)
    addi r4, r29, 0x4
    slwi r0, r0, 2
    add r0, r5, r0
    subf r0, r29, r0
    srawi r0, r0, 2
    addze r5, r0
    subi r0, r5, 0x1
    slwi r5, r0, 2
    bl memmove
    lwz r3, 0x1564(r31)
    subi r0, r3, 0x1
    stw r0, 0x1564(r31)
lbl_fn_8031B9B4_00001758:
    lwz r0, 0x1564(r31)
    lwz r3, 0x1560(r31)
    slwi r0, r0, 2
    add r0, r3, r0
    cmplw r29, r0
    bne lbl_fn_8031B9B4_00001700
    lwz r3, lbl_8087F3C0
    addi r4, r31, 0x1538
    li r5, 0x0
    bl fn_80239D58
    cmpwi r3, 0x0
    beq lbl_fn_8031B9B4_0000179C
    lwz r3, lbl_8087F3C0
    addi r4, r31, 0x1538
    li r5, 0x0
    li r6, 0x0
    bl fn_80239DAC
lbl_fn_8031B9B4_0000179C:
    addi r3, r31, 0x1570
    li r4, 0x0
    li r5, 0x0
    bl fn_800CB5C8
lbl_fn_8031B9B4_000017AC:
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3e8
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x65
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x66
    li r6, 0x0
    bl fn_80239DAC
    b lbl_fn_8031B9B4_00001CA8
lbl_fn_8031B9B4_000017EC:
    beq cr1, lbl_fn_8031B9B4_00001CA8
    lwz r6, 0x58c(r31)
    lwz r3, 0x1530(r31)
    cmpwi r6, 0x2
    subi r0, r3, 0x1
    stw r0, 0x1530(r31)
    beq lbl_fn_8031B9B4_0000182C
    cmpwi r6, 0x6
    beq lbl_fn_8031B9B4_00001844
    cmpwi r6, 0x7
    beq lbl_fn_8031B9B4_000018E0
    cmpwi r6, 0x8
    beq lbl_fn_8031B9B4_00001908
    cmpwi r6, 0x9
    beq lbl_fn_8031B9B4_00001914
    b lbl_fn_8031B9B4_00001994
lbl_fn_8031B9B4_0000182C:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0xec(r12)
    mtctr r12
    bctrl
    b lbl_fn_8031B9B4_00001CA8
lbl_fn_8031B9B4_00001844:
    cmpwi r4, 0x3c
    blt lbl_fn_8031B9B4_00001CA8
    stw r30, 0x14bc(r31)
    stw r30, 0x14c0(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r3, r31
    li r4, 0x3
    stw r30, 0x58c(r31)
    bl fn_8016E970
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3e8
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x65
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x66
    li r6, 0x0
    bl fn_80239DAC
    bl fn_80680CF8
    lis r4, 0xb60b
    addi r0, r4, 0x60b7
    mulhw r0, r0, r3
    add r0, r0, r3
    srawi r0, r0, 6
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x5a
    subf r3, r0, r3
    addi r0, r3, 0xf
    stw r0, 0x1530(r31)
    b lbl_fn_8031B9B4_00001CA8
lbl_fn_8031B9B4_000018E0:
    cmpwi r4, 0x3c
    blt lbl_fn_8031B9B4_00001CA8
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x65
    li r6, 0x0
    bl fn_80239DAC
    mr r3, r31
    bl fn_8031D350
    b lbl_fn_8031B9B4_00001CA8
lbl_fn_8031B9B4_00001908:
    mr r3, r31
    bl fn_8031CA30
    b lbl_fn_8031B9B4_00001CA8
lbl_fn_8031B9B4_00001914:
    cmpwi r4, 0x32
    ble lbl_fn_8031B9B4_00001CA8
    stw r30, 0x14bc(r31)
    stw r30, 0x14c0(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r3, r31
    li r4, 0x3
    stw r30, 0x58c(r31)
    bl fn_8016E970
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3e8
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x65
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x66
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x66
    li r6, 0x0
    bl fn_80239DAC
    b lbl_fn_8031B9B4_00001CA8
lbl_fn_8031B9B4_00001994:
    beq cr1, lbl_fn_8031B9B4_00001BB0
    addi r3, r1, 0xbc
    psq_l f1, 0x528(r5), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    addi r29, r1, 0xa4
    lfs f2, 0x530(r5)
    addi r5, r1, 0x98
    lfs f0, 0x530(r31)
    mr r3, r29
    lfs f9, 0xc0(r1)
    mr r4, r29
    fsubs f10, f2, f0
    lfs f8, 0x52c(r31)
    lfs f7, 0xbc(r1)
    lfs f0, 0x528(r31)
    fsubs f8, f9, f8
    stfs f2, 0xc4(r1)
    fsubs f0, f7, f0
    fmr f2, f10
    stfs f8, 0x9c(r1)
    stfs f0, 0x98(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f10, 0xa0(r1)
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0xac(r1)
    bl fn_805F98D0
    lfs f2, 0xac(r1)
    addi r30, r1, 0xb0
    psq_l f1, 0x0(r29), 0, 0
    fabs f7, f2
    lfs f0, lbl_80884E10
    psq_st f1, 0x0(r30), 0, 0
    frsp f7, f7
    stfs f2, 0xb8(r1)
    fcmpo cr0, f7, f0
    bge lbl_fn_8031B9B4_00001A48
    lfs f7, 0xb0(r1)
    lfs f0, lbl_80884DF0
    fcmpo cr0, f7, f0
    ble lbl_fn_8031B9B4_00001A3C
    lfs f0, lbl_80884E14
    b lbl_fn_8031B9B4_00001A40
lbl_fn_8031B9B4_00001A3C:
    lfs f0, lbl_80884E18
lbl_fn_8031B9B4_00001A40:
    stfs f0, 0x90(r1)
    b lbl_fn_8031B9B4_00001A5C
lbl_fn_8031B9B4_00001A48:
    frsp f2, f2
    lfs f1, 0xb0(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x90(r1)
lbl_fn_8031B9B4_00001A5C:
    lfs f0, 0x90(r1)
    addi r3, r1, 0x210
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f7, lbl_80884DF0
    addi r4, r1, 0x80
    lfs f26, 0x218(r1)
    mr r5, r4
    lfs f27, 0x214(r1)
    addi r3, r1, 0x240
    lfs f28, 0x210(r1)
    lfs f29, 0x228(r1)
    lfs f30, 0x224(r1)
    lfs f31, 0x220(r1)
    lfs f13, 0x238(r1)
    lfs f12, 0x234(r1)
    lfs f11, 0x230(r1)
    lfs f10, 0x23c(r1)
    lfs f9, 0x22c(r1)
    lfs f8, 0x21c(r1)
    lfs f0, lbl_80884E04
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0xb8(r1)
    stfs f7, 0x270(r1)
    stfs f7, 0x274(r1)
    stfs f7, 0x278(r1)
    stfs f0, 0x27c(r1)
    stfs f28, 0x50(r1)
    stfs f27, 0x54(r1)
    stfs f26, 0x58(r1)
    stfs f28, 0x240(r1)
    stfs f27, 0x244(r1)
    stfs f26, 0x248(r1)
    stfs f31, 0x5c(r1)
    stfs f30, 0x60(r1)
    stfs f29, 0x64(r1)
    stfs f31, 0x250(r1)
    stfs f30, 0x254(r1)
    stfs f29, 0x258(r1)
    stfs f11, 0x68(r1)
    stfs f12, 0x6c(r1)
    stfs f13, 0x70(r1)
    stfs f11, 0x260(r1)
    stfs f12, 0x264(r1)
    stfs f13, 0x268(r1)
    stfs f8, 0x74(r1)
    stfs f9, 0x78(r1)
    stfs f10, 0x7c(r1)
    stfs f8, 0x24c(r1)
    stfs f9, 0x25c(r1)
    stfs f10, 0x26c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x88(r1)
    bl fn_805F9750
    lfs f2, 0x88(r1)
    lfs f0, lbl_80884E10
    fabs f7, f2
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_8031B9B4_00001B78
    lfs f7, 0x84(r1)
    lfs f0, lbl_80884DF0
    fcmpo cr0, f7, f0
    ble lbl_fn_8031B9B4_00001B68
    lfs f0, lbl_80884E14
    b lbl_fn_8031B9B4_00001B6C
lbl_fn_8031B9B4_00001B68:
    lfs f0, lbl_80884E18
lbl_fn_8031B9B4_00001B6C:
    fneg f0, f0
    stfs f0, 0x8c(r1)
    b lbl_fn_8031B9B4_00001B8C
lbl_fn_8031B9B4_00001B78:
    lfs f1, 0x84(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x8c(r1)
lbl_fn_8031B9B4_00001B8C:
    lfs f2, lbl_80884DF0
    addi r3, r1, 0x8c
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x94(r1)
    stfs f2, 0xb8(r1)
    frsp f2, f2
    psq_st f1, 0x0(r30), 0, 0
    psq_st f1, 0x534(r31), 0, 0
    stfs f2, 0x53c(r31)
lbl_fn_8031B9B4_00001BB0:
    lwz r28, 0x14b8(r31)
    cmpwi r28, 0x0
    beq lbl_fn_8031B9B4_00001CA8
    lis r4, lbl_8074973C@ha
    addi r30, r28, 0xb0
    addi r4, r4, lbl_8074973C@l
    addi r29, r1, 0x2c
    mr r3, r30
    li r5, 0x0
    addi r4, r4, 0xcc
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8031B9B4_00001BEC
    li r4, 0x0
    b lbl_fn_8031B9B4_00001BF8
lbl_fn_8031B9B4_00001BEC:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r30)
    add r4, r3, r0
lbl_fn_8031B9B4_00001BF8:
    lfs f0, lbl_80884DF0
    cmpwi r4, 0x0
    stfs f0, 0x2c(r1)
    stfs f0, 0x30(r1)
    stfs f0, 0x34(r1)
    beq lbl_fn_8031B9B4_00001C3C
    lfs f0, 0x1c(r4)
    addi r3, r1, 0x44
    lfs f7, 0xc(r4)
    stfs f7, 0x44(r1)
    lfs f2, 0x2c(r4)
    stfs f0, 0x48(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x4c(r1)
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x34(r1)
    b lbl_fn_8031B9B4_00001C5C
lbl_fn_8031B9B4_00001C3C:
    psq_l f1, 0x528(r28), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    lfs f2, 0x530(r28)
    lfs f7, 0x30(r1)
    lfs f0, lbl_80884E1C
    stfs f2, 0x34(r1)
    fadds f0, f7, f0
    stfs f0, 0x30(r1)
lbl_fn_8031B9B4_00001C5C:
    lfs f7, 0x530(r31)
    addi r3, r1, 0x38
    lfs f0, 0x34(r1)
    lfs f9, 0x52c(r31)
    fsubs f10, f7, f0
    lfs f8, 0x30(r1)
    lfs f7, 0x528(r31)
    lfs f0, 0x2c(r1)
    fsubs f8, f9, f8
    stfs f10, 0x40(r1)
    fsubs f0, f7, f0
    stfs f8, 0x3c(r1)
    stfs f0, 0x38(r1)
    bl fn_805F9940
    lwz r0, 0x1530(r31)
    cmpwi r0, 0x0
    bge lbl_fn_8031B9B4_00001CA8
    mr r3, r31
    bl fn_8031D350
lbl_fn_8031B9B4_00001CA8:
    mr r3, r31
    bl fn_8014C540
    mr r3, r31
    bl fn_80145334
    lfs f9, 0x52c(r31)
    addi r5, r1, 0x20
    lfs f8, 0x5a8(r31)
    addi r4, r1, 0x14
    lfs f7, 0x528(r31)
    addi r3, r1, 0x8
    fadds f8, f9, f8
    lfs f0, 0x5a4(r31)
    lfs f9, 0x5b0(r31)
    fadds f0, f7, f0
    stfs f8, 0x24(r1)
    lfs f7, 0x530(r31)
    stfs f0, 0x20(r1)
    lfs f0, 0x5ac(r31)
    psq_l f1, 0x0(r5), 0, 0
    fadds f10, f7, f0
    psq_st f1, 0x614(r31), 0, 0
    psq_l f1, 0x528(r31), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lfs f0, 0x618(r31)
    fmr f2, f10
    lfs f7, 0x18(r1)
    fadds f8, f0, f9
    lfs f0, lbl_80884E00
    stfs f2, 0x61c(r31)
    lfs f2, 0x530(r31)
    fadds f0, f7, f0
    lwz r0, 0x153c(r31)
    stfs f2, 0x1c(r1)
    cmpwi r0, 0x0
    stfs f2, 0x10(r1)
    frsp f2, f2
    stfs f2, 0x5fc(r31)
    lfs f2, 0x1c(r1)
    stfs f0, 0x18(r1)
    psq_st f1, 0x0(r3), 0, 0
    psq_st f1, 0x5f4(r31), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    stfs f9, 0x620(r31)
    stfs f10, 0x28(r1)
    stfs f8, 0x618(r31)
    psq_st f1, 0x600(r31), 0, 0
    stfs f2, 0x608(r31)
    stfs f9, 0x60c(r31)
    beq lbl_fn_8031B9B4_00001F78
    lfs f8, lbl_80884DF0
    addi r29, r1, 0x280
    lfs f0, lbl_80884E04
    lfs f7, lbl_80884E20
    stfs f8, 0xe0(r1)
    stfs f8, 0xe4(r1)
    stfs f7, 0xe8(r1)
    stfs f8, 0x2ac(r1)
    stfs f8, 0x2a4(r1)
    stfs f8, 0x2a0(r1)
    stfs f8, 0x29c(r1)
    stfs f8, 0x298(r1)
    stfs f8, 0x290(r1)
    stfs f8, 0x28c(r1)
    stfs f8, 0x288(r1)
    stfs f8, 0x284(r1)
    stfs f0, 0x2a8(r1)
    stfs f0, 0x294(r1)
    stfs f0, 0x280(r1)
    lfs f1, 0x53c(r31)
    fcmpu cr0, f8, f1
    beq lbl_fn_8031B9B4_00001E14
    addi r3, r1, 0x120
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0x120
    addi r5, r1, 0xf0
    bl fn_805F89F0
    addi r3, r1, 0xf0
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
lbl_fn_8031B9B4_00001E14:
    lfs f0, lbl_80884DF0
    lfs f1, 0x538(r31)
    fcmpu cr0, f0, f1
    beq lbl_fn_8031B9B4_00001E74
    addi r3, r1, 0x180
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0x180
    addi r5, r1, 0x150
    bl fn_805F89F0
    addi r3, r1, 0x150
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
lbl_fn_8031B9B4_00001E74:
    lfs f0, lbl_80884DF0
    lfs f1, 0x534(r31)
    fcmpu cr0, f0, f1
    beq lbl_fn_8031B9B4_00001ED4
    addi r3, r1, 0x1e0
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0x1e0
    addi r5, r1, 0x1b0
    bl fn_805F89F0
    addi r3, r1, 0x1b0
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
lbl_fn_8031B9B4_00001ED4:
    addi r4, r1, 0xe0
    addi r3, r1, 0x280
    mr r5, r4
    bl fn_805F93C0
    lfs f8, 0x530(r31)
    lis r7, 0x8000
    lfs f0, 0xe8(r1)
    li r0, 0x0
    lfs f9, 0x52c(r31)
    addi r4, r1, 0x2b0
    lfs f7, 0x528(r31)
    fadds f10, f8, f0
    lfs f8, 0xe4(r1)
    addi r5, r31, 0x528
    lfs f0, 0xe0(r1)
    addi r6, r1, 0xd4
    fadds f8, f9, f8
    fadds f0, f7, f0
    stfs f10, 0xdc(r1)
    lwz r3, lbl_8087EE98
    addi r7, r7, 0x4
    stfs f0, 0xd4(r1)
    addi r8, r31, 0x5b8
    stfs f8, 0xd8(r1)
    li r9, 0x0
    stw r0, 0x2e4(r1)
    stw r0, 0x2e8(r1)
    stw r0, 0x2ec(r1)
    stw r0, 0x2f0(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_8031B9B4_00001F78
    addi r4, r1, 0x2c0
    lfs f2, 0x2c8(r1)
    addi r3, r1, 0xd4
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    addi r3, r31, 0x1538
    addi r5, r1, 0x2d8
    stfs f2, 0xdc(r1)
    bl fn_8031E8BC
lbl_fn_8031B9B4_00001F78:
    lwz r0, 0x153c(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8031B9B4_00001FC0
    lwz r3, lbl_8087F3C0
    addi r4, r31, 0x1538
    li r5, 0x0
    bl fn_80239D58
    cmpwi r3, 0x0
    beq lbl_fn_8031B9B4_00001FB0
    lwz r3, lbl_8087F3C0
    addi r4, r31, 0x1538
    li r5, 0x0
    li r6, 0x0
    bl fn_80239DAC
lbl_fn_8031B9B4_00001FB0:
    addi r3, r31, 0x1570
    li r4, 0xa
    li r5, 0x0
    bl fn_800CB5C8
lbl_fn_8031B9B4_00001FC0:
    lwz r30, 0x1560(r31)
    b lbl_fn_8031B9B4_00002044
lbl_fn_8031B9B4_00001FC8:
    lwz r4, 0x0(r30)
    lwz r3, 0x4c(r4)
    subi r0, r3, 0x1
    stw r0, 0x4c(r4)
    lwz r4, 0x0(r30)
    lwz r0, 0x4c(r4)
    cmpwi r0, 0x0
    bgt lbl_fn_8031B9B4_00002040
    lwz r3, lbl_8087F3C0
    li r5, 0x0
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, 0x0(r30)
    bl dtor_80084684
    lwz r0, 0x1564(r31)
    mr r3, r30
    lwz r4, 0x1560(r31)
    slwi r0, r0, 2
    add r0, r4, r0
    addi r4, r30, 0x4
    subf r0, r30, r0
    srawi r0, r0, 2
    addze r5, r0
    subi r0, r5, 0x1
    slwi r5, r0, 2
    bl memmove
    lwz r3, 0x1564(r31)
    subi r0, r3, 0x1
    stw r0, 0x1564(r31)
    b lbl_fn_8031B9B4_00002044
lbl_fn_8031B9B4_00002040:
    addi r30, r30, 0x4
lbl_fn_8031B9B4_00002044:
    lwz r0, 0x1564(r31)
    lwz r3, 0x1560(r31)
    slwi r0, r0, 2
    add r0, r3, r0
    cmplw r30, r0
    bne lbl_fn_8031B9B4_00001FC8
    lwz r0, 0x374(r1)
    psq_l f31, 0x368(r1), 0, 0
    lfd f31, 0x360(r1)
    psq_l f30, 0x358(r1), 0, 0
    lfd f30, 0x350(r1)
    psq_l f29, 0x348(r1), 0, 0
    lfd f29, 0x340(r1)
    psq_l f28, 0x338(r1), 0, 0
    lfd f28, 0x330(r1)
    psq_l f27, 0x328(r1), 0, 0
    lfd f27, 0x320(r1)
    psq_l f26, 0x318(r1), 0, 0
    lfd f26, 0x310(r1)
    lwz r31, 0x30c(r1)
    lwz r30, 0x308(r1)
    lwz r29, 0x304(r1)
    lwz r28, 0x300(r1)
    mtlr r0
    addi r1, r1, 0x370
    blr
}
