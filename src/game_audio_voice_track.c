#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_22(void);
extern void _savegpr_22(void);
extern void fn_8000D0F8(void);
extern void fn_8000D114(void);
extern void fn_8000D124(void);
extern void fn_8001047C(void);
extern void fn_800109E0(void);
extern void fn_80011034(void);
extern void fn_80011410(void);
extern void fn_80012C88(void);
extern void fn_800132EC(void);
extern void fn_80013338(void);
extern void fn_80057A68(void);
extern void fn_80063764(void);
extern void fn_800874C8(void);
extern void fn_8008771C(void);
extern void fn_80087994(void);
extern void fn_8008937C(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800F7FA0(void);
extern void fn_800F7FD8(void);
extern void fn_800FAB80(void);
extern void fn_801125F8(void);
extern void fn_80121F00(void);
extern void fn_80122550(void);
extern void fn_80139550(void);
extern void fn_80139F24(void);
extern void fn_80139F3C(void);
extern void fn_8013A194(void);
extern void fn_8013C554(void);
extern void fn_8014C540(void);
extern void fn_8017A300(void);
extern void fn_801C3910(void);
extern void fn_8020A81C(void);
extern void fn_80219E6C(void);
extern void fn_80232B7C(void);
extern void fn_80239DAC(void);
extern void fn_8023A8B4(void);
extern void fn_8028CFB8(void);
extern void fn_80300DF4(void);
extern void fn_80301200(void);
extern void fn_80370AE4(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_80695D84(void);

/* External data declarations */
extern u8 lbl_80748A00[];
extern u8 lbl_80748A14[];

/* Small data declarations */
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EF10;
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F8A0;
extern u32 lbl_80884A20;
extern u32 lbl_80884A28;
extern u32 lbl_80884A2C;
extern u32 lbl_80884A34;
extern u32 lbl_80884A38;
extern u32 lbl_80884A44;
extern u32 lbl_80884A5C;
extern u32 lbl_80884A60;
extern u32 lbl_80884A70;
extern u32 lbl_80884A74;
extern u32 lbl_80884A8C;
extern u32 lbl_80884A9C;
extern u32 lbl_80884ABC;
extern u32 lbl_80884AC4;
extern u32 lbl_80884ADC;
extern u32 lbl_80884AF0;
extern u32 lbl_80884AF4;
extern u32 lbl_80884B04;
extern u32 lbl_80884B08;
extern u32 lbl_80884B0C;
extern u32 lbl_80884B10;
extern u32 lbl_80884B14;
extern u32 lbl_80884B18;
extern u32 lbl_80884B1C;

/* Function declarations */
void fn_803041C8(void);
void fn_80304718(void);
void fn_80304B40(void);
void fn_80304FC0(void);
void fn_803057A8(void);

asm void fn_803041C8(void)
{
    nofralloc
    stwu r1, -0x1a0(r1)
    mflr r0
    lfs f1, lbl_80884A20
    stw r0, 0x1a4(r1)
    fmr f2, f1
    stfd f31, 0x190(r1)
    fmr f3, f1
    psq_st f31, 0x198(r1), 0, 0
    stw r31, 0x18c(r1)
    mr r31, r3
    stw r30, 0x188(r1)
    lfs f31, 0x16c8(r3)
    addi r3, r1, 0x110
    bl fn_8000D114
    lwz r4, 0x1604(r31)
    cmpwi r4, 0x0
    beq lbl_fn_803041C8_00000050
    addi r3, r1, 0x110
    addi r4, r4, 0x4
    bl fn_8000D124
lbl_fn_803041C8_00000050:
    addi r3, r1, 0x74
    addi r4, r1, 0x110
    addi r5, r31, 0x1608
    bl fn_80013338
    addi r3, r1, 0x80
    addi r4, r1, 0x74
    bl fn_800F7FD8
    addi r3, r1, 0x104
    addi r4, r1, 0x80
    bl fn_80011034
    addi r3, r1, 0x5c
    addi r4, r31, 0x1608
    addi r5, r1, 0x110
    bl fn_80013338
    addi r3, r1, 0x68
    addi r4, r1, 0x5c
    bl fn_800F7FD8
    addi r3, r1, 0xf8
    addi r4, r1, 0x68
    bl fn_80011034
    lwz r0, 0x14f0(r31)
    cmpwi r0, 0x0
    bne lbl_fn_803041C8_00000284
    lwz r5, 0x1600(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    lfs f0, 0x14(r5)
    stfs f0, 0x538(r31)
    bl fn_80139550
    lfs f0, lbl_80884AF0
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_803041C8_00000104
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    lfs f0, lbl_80884AF4
    addi r3, r31, 0xb0
    li r4, 0x0
    fsubs f31, f1, f0
    bl fn_80139550
    lfs f0, lbl_80884AF4
    fsubs f0, f1, f0
    fdivs f2, f0, f31
    b lbl_fn_803041C8_00000108
lbl_fn_803041C8_00000104:
    lfs f2, lbl_80884A20
lbl_fn_803041C8_00000108:
    lfs f1, lbl_80884AC4
    addi r3, r31, 0xb0
    lfs f0, 0x52c(r31)
    li r4, 0x0
    fmadds f0, f1, f2, f0
    stfs f0, 0x52c(r31)
    bl fn_80097D7C
    fmr f31, f1
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80139550
    fcmpo cr0, f1, f31
    cror eq, gt, eq
    bne lbl_fn_803041C8_00000530
    addi r3, r31, 0xb0
    li r4, 0x1
    bl fn_80139F24
    lfs f1, lbl_80884A5C
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_8013C554
    lfs f1, lbl_80884A5C
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80139F3C
    lfs f1, lbl_80884A20
    addi r3, r31, 0xb0
    lfs f2, lbl_80884A60
    li r4, 0x0
    li r5, 0x14b
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    addi r3, r1, 0x44
    addi r4, r1, 0x110
    addi r5, r31, 0x528
    bl fn_80013338
    addi r3, r1, 0x50
    addi r4, r1, 0x44
    bl fn_800F7FD8
    addi r3, r1, 0xec
    addi r4, r1, 0x50
    bl fn_80011034
    addi r3, r1, 0x2c
    addi r4, r31, 0x1608
    addi r5, r31, 0x528
    bl fn_80013338
    addi r3, r1, 0x38
    addi r4, r1, 0x2c
    bl fn_800F7FD8
    addi r3, r1, 0xe0
    addi r4, r1, 0x38
    bl fn_80011034
    li r30, 0x2
    stw r30, 0x1624(r31)
    addi r3, r1, 0xd4
    addi r4, r31, 0x534
    lfs f0, 0xf0(r1)
    stfs f0, 0x538(r31)
    bl fn_8001047C
    lfs f1, lbl_80884A20
    addi r3, r31, 0x15d8
    stfs f1, 0xd4(r1)
    fmr f2, f1
    lfs f3, 0x16c4(r31)
    bl fn_80057A68
    addi r3, r1, 0x150
    addi r4, r1, 0xd4
    bl fn_800109E0
    addi r3, r31, 0x15d8
    addi r4, r1, 0x150
    bl fn_80011410
    lwz r3, 0x1628(r31)
    slwi r0, r3, 2
    cmpwi r3, 0x1
    add r3, r31, r0
    lwz r0, 0x150c(r3)
    stw r0, 0x1518(r31)
    bne lbl_fn_803041C8_00000250
    stw r30, 0x1628(r31)
    b lbl_fn_803041C8_00000258
lbl_fn_803041C8_00000250:
    li r0, 0x1
    stw r0, 0x1628(r31)
lbl_fn_803041C8_00000258:
    lfs f0, lbl_80884AC4
    li r0, 0x1
    stfs f0, 0x52c(r31)
    stw r0, 0x14f0(r31)
    bl fn_80121F00
    bl fn_80122550
    lfs f1, lbl_80884A9C
    li r4, 0x1
    fmr f2, f1
    bl fn_8028CFB8
    b lbl_fn_803041C8_00000530
lbl_fn_803041C8_00000284:
    cmpwi r0, 0x1
    bne lbl_fn_803041C8_00000530
    addi r3, r31, 0x528
    addi r4, r31, 0x15d8
    li r30, 0x0
    bl fn_80012C88
    lfs f0, lbl_80884AC4
    fmr f1, f31
    stfs f0, 0x52c(r31)
    bl fn_801125F8
    lfs f0, 0x534(r31)
    lwz r0, 0x1624(r31)
    fadds f0, f0, f1
    cmpwi r0, 0x0
    stfs f0, 0x534(r31)
    bne lbl_fn_803041C8_00000334
    lwz r4, 0x1518(r31)
    addi r3, r1, 0xc8
    addi r5, r31, 0x528
    addi r4, r4, 0x4
    bl fn_80013338
    addi r3, r1, 0xc8
    bl fn_801C3910
    lfs f0, lbl_80884A38
    fcmpo cr0, f1, f0
    bge lbl_fn_803041C8_000003E8
    lwz r4, 0x1518(r31)
    addi r3, r31, 0x528
    addi r4, r4, 0x4
    bl fn_8000D124
    lfs f0, lbl_80884A20
    mr r3, r31
    stfs f0, 0x534(r31)
    bl fn_80301200
    bl fn_800F7FA0
    mr r4, r31
    li r5, 0x190
    li r6, 0x1
    bl fn_80239DAC
    bl fn_80121F00
    li r4, 0xa4
    li r5, 0x0
    bl fn_80370AE4
    b lbl_fn_803041C8_000003E8
lbl_fn_803041C8_00000334:
    cmpwi r0, 0x1
    bne lbl_fn_803041C8_00000390
    addi r3, r1, 0xbc
    addi r4, r31, 0x1608
    addi r5, r31, 0x528
    bl fn_80013338
    addi r3, r1, 0xbc
    bl fn_801C3910
    lfs f0, lbl_80884A38
    fcmpo cr0, f1, f0
    bge lbl_fn_803041C8_000003E8
    lfs f0, 0x108(r1)
    addi r3, r31, 0x528
    stfs f0, 0x538(r31)
    addi r4, r31, 0x1608
    bl fn_8000D124
    lwz r3, 0x15e4(r31)
    li r0, 0x2
    stw r0, 0x1624(r31)
    li r30, 0x1
    addi r0, r3, 0x1
    stw r0, 0x15e4(r31)
    b lbl_fn_803041C8_000003E8
lbl_fn_803041C8_00000390:
    cmpwi r0, 0x2
    bne lbl_fn_803041C8_000003E8
    addi r3, r1, 0xb0
    addi r4, r1, 0x110
    addi r5, r31, 0x528
    bl fn_80013338
    addi r3, r1, 0xb0
    bl fn_801C3910
    lfs f0, lbl_80884A38
    fcmpo cr0, f1, f0
    bge lbl_fn_803041C8_000003E8
    lfs f0, 0xfc(r1)
    addi r3, r31, 0x528
    stfs f0, 0x538(r31)
    addi r4, r1, 0x110
    bl fn_8000D124
    lwz r3, 0x15e4(r31)
    li r0, 0x1
    stw r0, 0x1624(r31)
    li r30, 0x1
    addi r0, r3, 0x1
    stw r0, 0x15e4(r31)
lbl_fn_803041C8_000003E8:
    lwz r0, 0x15e4(r31)
    cmpwi r0, 0x2
    ble lbl_fn_803041C8_00000438
    lwz r4, 0x1518(r31)
    addi r3, r1, 0xa4
    addi r5, r31, 0x528
    addi r4, r4, 0x4
    bl fn_80013338
    addi r3, r1, 0x14
    addi r4, r1, 0xa4
    bl fn_800F7FD8
    addi r3, r1, 0x20
    addi r4, r1, 0x14
    bl fn_80011034
    lfs f0, 0x24(r1)
    li r0, 0x0
    stfs f0, 0x538(r31)
    li r30, 0x1
    stw r0, 0x1624(r31)
    stw r0, 0x15e4(r31)
lbl_fn_803041C8_00000438:
    cmpwi r30, 0x0
    beq lbl_fn_803041C8_000004CC
    lis r4, lbl_80748A14@ha
    lfs f1, lbl_80884A5C
    addi r4, r4, lbl_80748A14@l
    addi r3, r1, 0x10
    addi r4, r4, 0x187
    addi r5, r31, 0x528
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    addi r3, r1, 0x98
    addi r4, r31, 0x534
    bl fn_8001047C
    lfs f1, lbl_80884A20
    addi r3, r31, 0x15d8
    stfs f1, 0x98(r1)
    fmr f2, f1
    lfs f3, 0x16c4(r31)
    bl fn_80057A68
    addi r3, r1, 0x120
    addi r4, r1, 0x98
    bl fn_800109E0
    addi r3, r31, 0x15d8
    addi r4, r1, 0x120
    bl fn_80011410
    lfs f0, lbl_80884A20
    stfs f0, 0x15dc(r31)
    bl fn_80121F00
    bl fn_80122550
    lfs f1, lbl_80884A9C
    li r4, 0x1
    fmr f2, f1
    bl fn_8028CFB8
lbl_fn_803041C8_000004CC:
    lis r4, lbl_80748A14@ha
    addi r3, r31, 0xb0
    addi r4, r4, lbl_80748A14@l
    addi r4, r4, 0x194
    bl fn_800132EC
    mr r4, r3
    addi r3, r1, 0x8c
    bl fn_8000D0F8
    li r3, 0x64d
    bl fn_80219E6C
    mr r30, r3
    bl fn_8013A194
    li r0, -0x1
    stw r0, 0x8(r1)
    lfs f1, lbl_80884A20
    mr r4, r31
    stw r0, 0xc(r1)
    mr r5, r30
    lfs f2, lbl_80884A5C
    addi r7, r1, 0x8c
    addi r8, r31, 0x534
    li r6, 0x3e8
    li r9, 0x0
    li r10, 0x1e
    bl fn_800FAB80
lbl_fn_803041C8_00000530:
    lwz r0, 0x1a4(r1)
    psq_l f31, 0x198(r1), 0, 0
    lfd f31, 0x190(r1)
    lwz r31, 0x18c(r1)
    lwz r30, 0x188(r1)
    mtlr r0
    addi r1, r1, 0x1a0
    blr
}

asm void fn_80304718(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    stfd f31, 0xb0(r1)
    psq_st f31, 0xb8(r1), 0, 0
    stw r31, 0xac(r1)
    mr r31, r3
    stw r30, 0xa8(r1)
    lwz r0, 0x14f0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80304718_000006DC
    lwz r0, 0x2dc(r3)
    cmpwi r0, 0x14d
    bne lbl_fn_80304718_00000684
    lfs f31, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_80304718_00000660
    lfs f0, lbl_80884A5C
    li r30, 0x1
    stw r30, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80884A20
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x14e
    lfs f2, lbl_80884A60
    li r6, 0x1
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    mr r3, r31
    li r4, 0x131
    bl fn_80232B7C
    lwz r3, 0x1614(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    lfs f0, lbl_80884A20
    li r0, -0x1
    lfs f1, lbl_80884A5C
    mr r5, r3
    stfs f0, 0x44(r1)
    addi r4, r31, 0x1570
    addi r7, r1, 0x38
    addi r8, r1, 0x44
    stfs f0, 0x48(r1)
    addi r9, r1, 0x50
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x4c(r1)
    stfs f0, 0x38(r1)
    stfs f0, 0x3c(r1)
    stfs f0, 0x40(r1)
    stfs f1, 0x50(r1)
    stfs f1, 0x54(r1)
    stfs f1, 0x58(r1)
    stfs f1, 0x5c(r1)
    stw r0, 0x8(r1)
    stw r30, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    b lbl_fn_80304718_00000958
lbl_fn_80304718_00000660:
    lfs f1, 0x2e4(r31)
    lfs f0, lbl_80884A34
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_80304718_00000684
    lfs f1, 0x52c(r31)
    lfs f0, lbl_80884B04
    fsubs f0, f1, f0
    stfs f0, 0x52c(r31)
lbl_fn_80304718_00000684:
    lwz r0, 0x16dc(r31)
    lwz r3, 0x14f4(r31)
    mulli r0, r0, 0x1e
    cmpw r3, r0
    ble lbl_fn_80304718_00000958
    lwz r4, 0x166c(r31)
    mr r3, r31
    bl fn_8017A300
    mr r3, r31
    bl fn_80300DF4
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x131
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F430
    li r4, 0xa2
    li r5, 0x1
    bl fn_80370AE4
    li r0, 0x0
    stw r0, 0x14f4(r31)
    b lbl_fn_80304718_00000958
lbl_fn_80304718_000006DC:
    cmpwi r0, 0x1
    bne lbl_fn_80304718_00000958
    lfs f31, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    ble lbl_fn_80304718_0000073C
    lwz r0, 0x15c8(r31)
    lfs f0, lbl_80884A20
    cmpwi r0, 0x1
    stfs f0, 0x52c(r31)
    bne lbl_fn_80304718_0000072C
    mr r3, r31
    bl fn_80300DF4
    li r3, 0x2
    li r0, 0x0
    stw r3, 0x14f8(r31)
    stw r0, 0x15ec(r31)
    b lbl_fn_80304718_00000734
lbl_fn_80304718_0000072C:
    mr r3, r31
    bl fn_80300DF4
lbl_fn_80304718_00000734:
    li r0, 0x1
    stw r0, 0x15f0(r31)
lbl_fn_80304718_0000073C:
    lfs f1, 0x2e4(r31)
    lfs f0, lbl_80884B08
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_80304718_00000818
    lfs f0, lbl_80884A38
    fcmpo cr0, f1, f0
    bge lbl_fn_80304718_00000818
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x131
    li r6, 0x1
    bl fn_80239DAC
    mr r3, r31
    li r4, 0x132
    bl fn_80232B7C
    lwz r3, 0x1614(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    lfs f0, lbl_80884A20
    li r11, -0x1
    lfs f1, lbl_80884A5C
    li r0, 0x1
    stfs f0, 0x1c(r1)
    mr r5, r3
    addi r4, r31, 0x157c
    addi r7, r1, 0x10
    stfs f0, 0x20(r1)
    addi r8, r1, 0x1c
    addi r9, r1, 0x28
    li r6, 0x0
    stfs f0, 0x24(r1)
    li r10, -0x1
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f1, 0x28(r1)
    stfs f1, 0x2c(r1)
    stfs f1, 0x30(r1)
    stfs f1, 0x34(r1)
    stw r11, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lis r3, lbl_80748A14@ha
    addi r3, r3, lbl_80748A14@l
    addi r3, r3, 0x13f
    bl fn_8020A81C
    mr r4, r3
    mr r3, r31
    bl fn_8017A300
    mr r3, r31
    bl fn_8014C540
lbl_fn_80304718_00000818:
    lfs f1, 0x2e4(r31)
    lfs f0, lbl_80884A44
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_80304718_00000870
    lfs f0, lbl_80884B0C
    fcmpo cr0, f1, f0
    bge lbl_fn_80304718_00000870
    lfs f0, lbl_80884A5C
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80884A20
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x14a
    lfs f2, lbl_80884A60
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
lbl_fn_80304718_00000870:
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    lfs f0, lbl_80884A5C
    addi r3, r31, 0xb0
    lfs f2, lbl_80884A8C
    li r4, 0x0
    fadds f1, f0, f1
    lfs f0, 0x538(r31)
    fdivs f1, f2, f1
    fadds f0, f0, f1
    stfs f0, 0x538(r31)
    lwz r5, lbl_8087F430
    lwz r30, 0x10d8(r5)
    bl fn_80097D7C
    lfs f2, lbl_80884ABC
    li r4, 0x0
    lfs f0, lbl_80884A20
    li r5, 0x0
    fdivs f1, f2, f1
    stfs f0, 0x60(r1)
    stfs f0, 0x64(r1)
    stfs f1, 0x68(r1)
    lwz r0, 0x78(r30)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80304718_00000904
lbl_fn_80304718_000008DC:
    lwz r3, 0x7c(r30)
    lwzx r0, r3, r5
    cmpwi r0, 0x385
    bne lbl_fn_80304718_000008F8
    mulli r0, r4, 0x28
    add r3, r3, r0
    b lbl_fn_80304718_00000908
lbl_fn_80304718_000008F8:
    addi r5, r5, 0x28
    addi r4, r4, 0x1
    bdnz lbl_fn_80304718_000008DC
lbl_fn_80304718_00000904:
    li r3, 0x0
lbl_fn_80304718_00000908:
    lfs f1, 0x14(r3)
    addi r3, r1, 0x70
    li r4, 0x79
    bl fn_805F8E70
    addi r4, r1, 0x60
    addi r3, r1, 0x70
    mr r5, r4
    bl fn_805F93C0
    lfs f1, 0x528(r31)
    lfs f0, 0x60(r1)
    lfs f2, 0x52c(r31)
    fsubs f0, f1, f0
    lfs f1, 0x530(r31)
    stfs f0, 0x528(r31)
    lfs f0, 0x64(r1)
    fsubs f0, f2, f0
    stfs f0, 0x52c(r31)
    lfs f0, 0x68(r1)
    fsubs f0, f1, f0
    stfs f0, 0x530(r31)
lbl_fn_80304718_00000958:
    lwz r0, 0xc4(r1)
    psq_l f31, 0xb8(r1), 0, 0
    lfd f31, 0xb0(r1)
    lwz r31, 0xac(r1)
    lwz r30, 0xa8(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

asm void fn_80304B40(void)
{
    nofralloc
    stwu r1, -0x160(r1)
    mflr r0
    stw r0, 0x164(r1)
    addi r11, r1, 0xd0
    stfd f31, 0x150(r1)
    psq_st f31, 0x158(r1), 0, 0
    stfd f30, 0x140(r1)
    psq_st f30, 0x148(r1), 0, 0
    stfd f29, 0x130(r1)
    psq_st f29, 0x138(r1), 0, 0
    stfd f28, 0x120(r1)
    psq_st f28, 0x128(r1), 0, 0
    stfd f27, 0x110(r1)
    psq_st f27, 0x118(r1), 0, 0
    stfd f26, 0x100(r1)
    psq_st f26, 0x108(r1), 0, 0
    stfd f25, 0xf0(r1)
    psq_st f25, 0xf8(r1), 0, 0
    stfd f24, 0xe0(r1)
    psq_st f24, 0xe8(r1), 0, 0
    stfd f23, 0xd0(r1)
    psq_st f23, 0xd8(r1), 0, 0
    bl _savegpr_22
    lwz r4, lbl_8087F8A0
    mr r25, r3
    lfs f27, lbl_80884A20
    lwz r28, 0x48(r4)
    lfs f1, 0x530(r3)
    lfs f0, 0x528(r3)
    cmpwi r28, 0x0
    stfs f0, 0x50(r1)
    stfs f1, 0x54(r1)
    stfs f27, 0x48(r1)
    stfs f27, 0x4c(r1)
    bne lbl_fn_80304B40_00000A0C
    li r3, 0x0
    b lbl_fn_80304B40_00000D98
lbl_fn_80304B40_00000A0C:
    lfs f2, 0x530(r28)
    frsp f28, f1
    lfs f1, 0x528(r28)
    frsp f29, f0
    frsp f30, f2
    stfs f1, 0x48(r1)
    frsp f31, f1
    stfs f2, 0x4c(r1)
    mr r31, r25
    lfs f23, lbl_80884A28
    lfs f24, lbl_80884ADC
    li r27, 0x0
    lfs f25, lbl_80884A5C
    lfs f26, lbl_80884A9C
lbl_fn_80304B40_00000A44:
    lfs f5, 0x163c(r31)
    lfs f4, 0x1638(r31)
    lfs f3, 0x1644(r31)
    fsubs f10, f28, f5
    fsubs f0, f29, f4
    lfs f2, 0x1640(r31)
    fsubs f8, f3, f5
    stfs f10, 0x2c(r1)
    fsubs f9, f2, f4
    fsubs f7, f31, f4
    fmuls f1, f8, f0
    stfs f0, 0x28(r1)
    fsubs f6, f30, f5
    fmuls f0, f8, f7
    stfs f9, 0x30(r1)
    fmsubs f1, f9, f10, f1
    stfs f8, 0x34(r1)
    fmsubs f0, f9, f6, f0
    stfs f7, 0x38(r1)
    fmuls f0, f0, f1
    stfs f6, 0x3c(r1)
    stfs f9, 0x40(r1)
    fcmpo cr0, f0, f27
    stfs f8, 0x44(r1)
    bge lbl_fn_80304B40_00000B08
    fsubs f6, f30, f28
    fsubs f0, f2, f29
    fsubs f4, f4, f29
    stfs f6, 0x14(r1)
    fsubs f7, f31, f29
    fsubs f3, f3, f28
    stfs f0, 0x8(r1)
    fmuls f1, f6, f0
    fsubs f2, f5, f28
    stfs f3, 0xc(r1)
    fmuls f0, f6, f4
    fmsubs f1, f7, f3, f1
    stfs f7, 0x10(r1)
    fmsubs f0, f7, f2, f0
    stfs f4, 0x18(r1)
    stfs f2, 0x1c(r1)
    fmuls f0, f0, f1
    stfs f7, 0x20(r1)
    fcmpo cr0, f0, f27
    stfs f6, 0x24(r1)
    bge lbl_fn_80304B40_00000B08
    stw r28, 0x1658(r25)
    li r3, 0x1
    b lbl_fn_80304B40_00000D98
lbl_fn_80304B40_00000B08:
    lwz r0, 0x1690(r25)
    cmpwi r0, 0x0
    beq lbl_fn_80304B40_00000D84
    mr r30, r25
    addi r29, r1, 0x78
    li r26, 0x0
lbl_fn_80304B40_00000B20:
    lfs f1, 0x163c(r30)
    fcmpo cr0, f24, f25
    lfs f0, 0x1638(r30)
    stfs f0, 0x0(r29)
    stfs f23, 0x4(r29)
    stfs f1, 0x8(r29)
    lfs f1, 0x1644(r30)
    lfs f0, 0x1640(r30)
    stfs f0, 0xc(r29)
    stfs f23, 0x10(r29)
    stfs f1, 0x14(r29)
    stfs f24, 0x68(r1)
    stfs f27, 0x6c(r1)
    stfs f27, 0x70(r1)
    stfs f24, 0x74(r1)
    cror eq, gt, eq
    bne lbl_fn_80304B40_00000B6C
    li r24, 0xff
    b lbl_fn_80304B40_00000B8C
lbl_fn_80304B40_00000B6C:
    fcmpo cr0, f24, f27
    cror eq, lt, eq
    bne lbl_fn_80304B40_00000B80
    li r3, 0x0
    b lbl_fn_80304B40_00000B88
lbl_fn_80304B40_00000B80:
    fmadds f1, f24, f24, f26
    bl fn_80695D84
lbl_fn_80304B40_00000B88:
    mr r24, r3
lbl_fn_80304B40_00000B8C:
    lfs f0, 0x6c(r1)
    fcmpo cr0, f0, f25
    cror eq, gt, eq
    bne lbl_fn_80304B40_00000BA4
    li r23, 0xff
    b lbl_fn_80304B40_00000BC4
lbl_fn_80304B40_00000BA4:
    fcmpo cr0, f0, f27
    cror eq, lt, eq
    bne lbl_fn_80304B40_00000BB8
    li r3, 0x0
    b lbl_fn_80304B40_00000BC0
lbl_fn_80304B40_00000BB8:
    fmadds f1, f24, f0, f26
    bl fn_80695D84
lbl_fn_80304B40_00000BC0:
    mr r23, r3
lbl_fn_80304B40_00000BC4:
    lfs f0, 0x70(r1)
    fcmpo cr0, f0, f25
    cror eq, gt, eq
    bne lbl_fn_80304B40_00000BDC
    li r22, 0xff
    b lbl_fn_80304B40_00000BFC
lbl_fn_80304B40_00000BDC:
    fcmpo cr0, f0, f27
    cror eq, lt, eq
    bne lbl_fn_80304B40_00000BF0
    li r3, 0x0
    b lbl_fn_80304B40_00000BF8
lbl_fn_80304B40_00000BF0:
    fmadds f1, f24, f0, f26
    bl fn_80695D84
lbl_fn_80304B40_00000BF8:
    mr r22, r3
lbl_fn_80304B40_00000BFC:
    lfs f0, 0x74(r1)
    fcmpo cr0, f0, f25
    cror eq, gt, eq
    bne lbl_fn_80304B40_00000C14
    li r3, 0xff
    b lbl_fn_80304B40_00000C30
lbl_fn_80304B40_00000C14:
    fcmpo cr0, f0, f27
    cror eq, lt, eq
    bne lbl_fn_80304B40_00000C28
    li r3, 0x0
    b lbl_fn_80304B40_00000C30
lbl_fn_80304B40_00000C28:
    fmadds f1, f24, f0, f26
    bl fn_80695D84
lbl_fn_80304B40_00000C30:
    slwi r5, r23, 8
    slwi r4, r3, 24
    slwi r0, r24, 16
    lwz r3, lbl_8087EEB0
    or r6, r22, r5
    lfs f1, lbl_80884B10
    or r0, r4, r0
    mr r4, r29
    addi r5, r29, 0xc
    or r6, r6, r0
    bl fn_80063764
    fcmpo cr0, f27, f25
    stfs f27, 0x58(r1)
    stfs f27, 0x5c(r1)
    stfs f24, 0x60(r1)
    stfs f24, 0x64(r1)
    cror eq, gt, eq
    bne lbl_fn_80304B40_00000C80
    li r22, 0xff
    b lbl_fn_80304B40_00000CA0
lbl_fn_80304B40_00000C80:
    fcmpo cr0, f27, f27
    cror eq, lt, eq
    bne lbl_fn_80304B40_00000C94
    li r3, 0x0
    b lbl_fn_80304B40_00000C9C
lbl_fn_80304B40_00000C94:
    fmadds f1, f24, f27, f26
    bl fn_80695D84
lbl_fn_80304B40_00000C9C:
    mr r22, r3
lbl_fn_80304B40_00000CA0:
    lfs f0, 0x5c(r1)
    fcmpo cr0, f0, f25
    cror eq, gt, eq
    bne lbl_fn_80304B40_00000CB8
    li r23, 0xff
    b lbl_fn_80304B40_00000CD8
lbl_fn_80304B40_00000CB8:
    fcmpo cr0, f0, f27
    cror eq, lt, eq
    bne lbl_fn_80304B40_00000CCC
    li r3, 0x0
    b lbl_fn_80304B40_00000CD4
lbl_fn_80304B40_00000CCC:
    fmadds f1, f24, f0, f26
    bl fn_80695D84
lbl_fn_80304B40_00000CD4:
    mr r23, r3
lbl_fn_80304B40_00000CD8:
    lfs f0, 0x60(r1)
    fcmpo cr0, f0, f25
    cror eq, gt, eq
    bne lbl_fn_80304B40_00000CF0
    li r24, 0xff
    b lbl_fn_80304B40_00000D10
lbl_fn_80304B40_00000CF0:
    fcmpo cr0, f0, f27
    cror eq, lt, eq
    bne lbl_fn_80304B40_00000D04
    li r3, 0x0
    b lbl_fn_80304B40_00000D0C
lbl_fn_80304B40_00000D04:
    fmadds f1, f24, f0, f26
    bl fn_80695D84
lbl_fn_80304B40_00000D0C:
    mr r24, r3
lbl_fn_80304B40_00000D10:
    lfs f0, 0x64(r1)
    fcmpo cr0, f0, f25
    cror eq, gt, eq
    bne lbl_fn_80304B40_00000D28
    li r3, 0xff
    b lbl_fn_80304B40_00000D44
lbl_fn_80304B40_00000D28:
    fcmpo cr0, f0, f27
    cror eq, lt, eq
    bne lbl_fn_80304B40_00000D3C
    li r3, 0x0
    b lbl_fn_80304B40_00000D44
lbl_fn_80304B40_00000D3C:
    fmadds f1, f24, f0, f26
    bl fn_80695D84
lbl_fn_80304B40_00000D44:
    slwi r5, r23, 8
    slwi r4, r3, 24
    slwi r0, r22, 16
    lwz r3, lbl_8087EEB0
    or r6, r24, r5
    lfs f1, lbl_80884A70
    or r0, r4, r0
    addi r4, r28, 0x528
    addi r5, r25, 0x528
    or r6, r6, r0
    bl fn_80063764
    addi r26, r26, 0x1
    addi r29, r29, 0x18
    cmpwi r26, 0x2
    addi r30, r30, 0x10
    blt lbl_fn_80304B40_00000B20
lbl_fn_80304B40_00000D84:
    addi r27, r27, 0x1
    addi r31, r31, 0x10
    cmpwi r27, 0x2
    blt lbl_fn_80304B40_00000A44
    li r3, 0x0
lbl_fn_80304B40_00000D98:
    addi r11, r1, 0xd0
    psq_l f31, 0x158(r1), 0, 0
    lfd f31, 0x150(r1)
    psq_l f30, 0x148(r1), 0, 0
    lfd f30, 0x140(r1)
    psq_l f29, 0x138(r1), 0, 0
    lfd f29, 0x130(r1)
    psq_l f28, 0x128(r1), 0, 0
    lfd f28, 0x120(r1)
    psq_l f27, 0x118(r1), 0, 0
    lfd f27, 0x110(r1)
    psq_l f26, 0x108(r1), 0, 0
    lfd f26, 0x100(r1)
    psq_l f25, 0xf8(r1), 0, 0
    lfd f25, 0xf0(r1)
    psq_l f24, 0xe8(r1), 0, 0
    lfd f24, 0xe0(r1)
    psq_l f23, 0xd8(r1), 0, 0
    lfd f23, 0xd0(r1)
    bl _restgpr_22
    lwz r0, 0x164(r1)
    mtlr r0
    addi r1, r1, 0x160
    blr
}

asm void fn_80304FC0(void)
{
    nofralloc
    stwu r1, -0x4d0(r1)
    mflr r0
    stw r0, 0x4d4(r1)
    stfd f31, 0x4c0(r1)
    psq_st f31, 0x4c8(r1), 0, 0
    stfd f30, 0x4b0(r1)
    psq_st f30, 0x4b8(r1), 0, 0
    stw r31, 0x4ac(r1)
    mr r31, r3
    stw r30, 0x4a8(r1)
    stw r29, 0x4a4(r1)
    lwz r0, 0x15bc(r3)
    cmpwi r0, 0x5a
    ble lbl_fn_80304FC0_00000E88
    li r0, 0x0
    stw r0, 0x15bc(r3)
    li r29, 0x3e8
    stb r0, 0x15b8(r3)
    b lbl_fn_80304FC0_00000E5C
lbl_fn_80304FC0_00000E44:
    lwz r3, lbl_8087F3C0
    mr r4, r31
    mr r5, r29
    li r6, 0x0
    bl fn_80239DAC
    addi r29, r29, 0x1
lbl_fn_80304FC0_00000E5C:
    lwz r0, 0x15b4(r31)
    cmpw r29, r0
    blt lbl_fn_80304FC0_00000E44
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x66
    li r6, 0x0
    bl fn_80239DAC
    li r0, 0x3e8
    stw r0, 0x15b4(r31)
    b lbl_fn_80304FC0_000015B4
lbl_fn_80304FC0_00000E88:
    lfs f8, lbl_80884A20
    addi r30, r1, 0x458
    lfs f7, lbl_80884A34
    lfs f0, lbl_80884A5C
    stfs f8, 0x88(r1)
    stfs f8, 0x8c(r1)
    stfs f7, 0x90(r1)
    stfs f8, 0x7c(r1)
    stfs f8, 0x80(r1)
    stfs f7, 0x84(r1)
    stfs f8, 0x70(r1)
    stfs f8, 0x74(r1)
    stfs f7, 0x78(r1)
    stfs f8, 0x484(r1)
    stfs f8, 0x47c(r1)
    stfs f8, 0x478(r1)
    stfs f8, 0x474(r1)
    stfs f8, 0x470(r1)
    stfs f8, 0x468(r1)
    stfs f8, 0x464(r1)
    stfs f8, 0x460(r1)
    stfs f8, 0x45c(r1)
    stfs f0, 0x480(r1)
    stfs f0, 0x46c(r1)
    stfs f0, 0x458(r1)
    lfs f1, 0x53c(r3)
    fcmpu cr0, f8, f1
    beq lbl_fn_80304FC0_00000F48
    addi r3, r1, 0x308
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x308
    addi r5, r1, 0x2d8
    bl fn_805F89F0
    addi r3, r1, 0x2d8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_80304FC0_00000F48:
    lfs f0, lbl_80884A20
    lfs f1, 0x538(r31)
    fcmpu cr0, f0, f1
    beq lbl_fn_80304FC0_00000FA8
    addi r3, r1, 0x368
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x368
    addi r5, r1, 0x338
    bl fn_805F89F0
    addi r3, r1, 0x338
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_80304FC0_00000FA8:
    lfs f0, lbl_80884A20
    lfs f1, 0x534(r31)
    fcmpu cr0, f0, f1
    beq lbl_fn_80304FC0_00001008
    addi r3, r1, 0x3c8
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x3c8
    addi r5, r1, 0x398
    bl fn_805F89F0
    addi r3, r1, 0x398
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_80304FC0_00001008:
    addi r4, r1, 0x88
    addi r3, r1, 0x458
    mr r5, r4
    bl fn_805F93C0
    lfs f2, 0x53c(r31)
    addi r3, r1, 0x64
    psq_l f1, 0x534(r31), 0, 0
    addi r30, r1, 0x428
    psq_st f1, 0x0(r3), 0, 0
    lfs f7, lbl_80884A20
    lfs f9, 0x68(r1)
    lfs f8, lbl_80884B14
    fcmpu cr0, f7, f2
    lfs f0, lbl_80884A5C
    fadds f8, f9, f8
    stfs f2, 0x6c(r1)
    stfs f8, 0x68(r1)
    stfs f7, 0x454(r1)
    stfs f7, 0x44c(r1)
    stfs f7, 0x448(r1)
    stfs f7, 0x444(r1)
    stfs f7, 0x440(r1)
    stfs f7, 0x438(r1)
    stfs f7, 0x434(r1)
    stfs f7, 0x430(r1)
    stfs f7, 0x42c(r1)
    stfs f0, 0x450(r1)
    stfs f0, 0x43c(r1)
    stfs f0, 0x428(r1)
    beq lbl_fn_80304FC0_000010D4
    frsp f1, f2
    addi r3, r1, 0x1e8
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x1e8
    addi r5, r1, 0x1b8
    bl fn_805F89F0
    addi r3, r1, 0x1b8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_80304FC0_000010D4:
    lfs f0, lbl_80884A20
    lfs f1, 0x68(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_80304FC0_00001134
    addi r3, r1, 0x248
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x248
    addi r5, r1, 0x218
    bl fn_805F89F0
    addi r3, r1, 0x218
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_80304FC0_00001134:
    lfs f0, lbl_80884A20
    lfs f1, 0x64(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_80304FC0_00001194
    addi r3, r1, 0x2a8
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x2a8
    addi r5, r1, 0x278
    bl fn_805F89F0
    addi r3, r1, 0x278
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_80304FC0_00001194:
    addi r4, r1, 0x7c
    addi r3, r1, 0x428
    mr r5, r4
    bl fn_805F93C0
    lfs f2, 0x53c(r31)
    addi r3, r1, 0x58
    psq_l f1, 0x534(r31), 0, 0
    addi r30, r1, 0x3f8
    psq_st f1, 0x0(r3), 0, 0
    lfs f7, lbl_80884A20
    lfs f9, 0x5c(r1)
    lfs f8, lbl_80884B18
    fcmpu cr0, f7, f2
    lfs f0, lbl_80884A5C
    fadds f8, f9, f8
    stfs f2, 0x60(r1)
    stfs f8, 0x5c(r1)
    stfs f7, 0x424(r1)
    stfs f7, 0x41c(r1)
    stfs f7, 0x418(r1)
    stfs f7, 0x414(r1)
    stfs f7, 0x410(r1)
    stfs f7, 0x408(r1)
    stfs f7, 0x404(r1)
    stfs f7, 0x400(r1)
    stfs f7, 0x3fc(r1)
    stfs f0, 0x420(r1)
    stfs f0, 0x40c(r1)
    stfs f0, 0x3f8(r1)
    beq lbl_fn_80304FC0_00001260
    frsp f1, f2
    addi r3, r1, 0xc8
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0xc8
    addi r5, r1, 0x98
    bl fn_805F89F0
    addi r3, r1, 0x98
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_80304FC0_00001260:
    lfs f0, lbl_80884A20
    lfs f1, 0x5c(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_80304FC0_000012C0
    addi r3, r1, 0x128
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x128
    addi r5, r1, 0xf8
    bl fn_805F89F0
    addi r3, r1, 0xf8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_80304FC0_000012C0:
    lfs f0, lbl_80884A20
    lfs f1, 0x58(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_80304FC0_00001320
    addi r3, r1, 0x188
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x188
    addi r5, r1, 0x158
    bl fn_805F89F0
    addi r3, r1, 0x158
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_80304FC0_00001320:
    addi r4, r1, 0x70
    addi r3, r1, 0x3f8
    mr r5, r4
    bl fn_805F93C0
    lwz r4, 0x15bc(r31)
    lis r0, 0x4330
    lis r3, lbl_80748A00@ha
    stw r0, 0x488(r1)
    xoris r4, r4, 0x8000
    lfd f12, lbl_80748A00@l(r3)
    stw r4, 0x48c(r1)
    addi r6, r1, 0x4c
    lfs f7, 0x8c(r1)
    addi r5, r1, 0x88
    lfd f8, 0x488(r1)
    addi r8, r1, 0x40
    lfs f0, 0x88(r1)
    addi r7, r1, 0x7c
    fsubs f10, f8, f12
    lfs f8, 0x90(r1)
    stw r4, 0x494(r1)
    addi r10, r1, 0x34
    addi r9, r1, 0x70
    lfs f9, lbl_80884A34
    fmuls f13, f8, f10
    stw r0, 0x490(r1)
    fmuls f8, f0, f10
    lwz r29, lbl_8087F048
    fmuls f7, f7, f10
    lfd f0, 0x490(r1)
    fmr f2, f13
    stfs f8, 0x4c(r1)
    fsubs f8, f0, f12
    li r3, 0x64c
    stfs f7, 0x50(r1)
    frsp f0, f2
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    fmuls f31, f0, f8
    lfs f7, 0x8c(r1)
    stfs f2, 0x90(r1)
    fmuls f30, f7, f8
    lfs f11, 0x88(r1)
    stw r4, 0x49c(r1)
    fmr f2, f31
    fmuls f8, f11, f8
    lfs f10, 0x90(r1)
    stw r0, 0x498(r1)
    lfd f0, 0x498(r1)
    stfs f8, 0x40(r1)
    fsubs f0, f0, f12
    stfs f30, 0x44(r1)
    fmuls f7, f7, f0
    psq_l f1, 0x0(r8), 0, 0
    fmuls f8, f11, f0
    psq_st f1, 0x0(r7), 0, 0
    fmuls f12, f10, f0
    stfs f2, 0x84(r1)
    fmr f2, f12
    stfs f8, 0x34(r1)
    stfs f7, 0x38(r1)
    psq_l f1, 0x0(r10), 0, 0
    psq_st f1, 0x0(r9), 0, 0
    stfs f2, 0x78(r1)
    stfs f9, 0x8c(r1)
    stfs f9, 0x80(r1)
    stfs f9, 0x74(r1)
    lfs f8, 0x530(r31)
    lfs f7, 0x52c(r31)
    lfs f0, 0x528(r31)
    fadds f8, f8, f10
    fadds f7, f7, f9
    stfs f13, 0x54(r1)
    fadds f0, f0, f11
    stfs f31, 0x48(r1)
    stfs f12, 0x3c(r1)
    stfs f0, 0x28(r1)
    stfs f7, 0x2c(r1)
    stfs f8, 0x30(r1)
    bl fn_80219E6C
    li r30, -0x1
    stw r30, 0x8(r1)
    lfs f1, lbl_80884A20
    mr r5, r3
    stw r30, 0xc(r1)
    mr r3, r29
    lfs f2, lbl_80884A5C
    mr r4, r31
    addi r7, r1, 0x28
    addi r8, r31, 0x534
    li r6, 0x7d0
    li r9, 0x0
    li r10, 0x1e
    bl fn_800FAB80
    lfs f7, 0x530(r31)
    li r3, 0x64c
    lfs f0, 0x84(r1)
    lfs f9, 0x52c(r31)
    fadds f10, f7, f0
    lfs f8, 0x80(r1)
    lfs f7, 0x528(r31)
    lfs f0, 0x7c(r1)
    fadds f8, f9, f8
    stfs f10, 0x24(r1)
    fadds f0, f7, f0
    lwz r29, lbl_8087F048
    stfs f8, 0x20(r1)
    stfs f0, 0x1c(r1)
    bl fn_80219E6C
    stw r30, 0x8(r1)
    mr r5, r3
    lfs f1, lbl_80884A20
    mr r3, r29
    stw r30, 0xc(r1)
    mr r4, r31
    lfs f2, lbl_80884A5C
    addi r7, r1, 0x1c
    addi r8, r1, 0x64
    li r6, 0x7d0
    li r9, 0x0
    li r10, 0x1e
    bl fn_800FAB80
    lfs f7, 0x530(r31)
    li r3, 0x64c
    lfs f0, 0x78(r1)
    lfs f9, 0x52c(r31)
    fadds f10, f7, f0
    lfs f8, 0x74(r1)
    lfs f7, 0x528(r31)
    lfs f0, 0x70(r1)
    fadds f8, f9, f8
    stfs f10, 0x18(r1)
    fadds f0, f7, f0
    lwz r29, lbl_8087F048
    stfs f8, 0x14(r1)
    stfs f0, 0x10(r1)
    bl fn_80219E6C
    stw r30, 0x8(r1)
    mr r5, r3
    lfs f1, lbl_80884A20
    mr r3, r29
    stw r30, 0xc(r1)
    mr r4, r31
    lfs f2, lbl_80884A5C
    addi r7, r1, 0x10
    addi r8, r1, 0x58
    li r6, 0x7d0
    li r9, 0x0
    li r10, 0x1e
    bl fn_800FAB80
    lwz r0, 0x15bc(r31)
    srwi r3, r0, 31
    clrlwi r0, r0, 31
    xor r0, r0, r3
    subf. r0, r3, r0
    bne lbl_fn_80304FC0_000015A8
    lwz r5, 0x15b4(r31)
    mr r4, r31
    lwz r3, lbl_8087F3C0
    li r6, 0x1
    subi r5, r5, 0x3
    bl fn_80239DAC
lbl_fn_80304FC0_000015A8:
    lwz r3, 0x15bc(r31)
    addi r0, r3, 0x1
    stw r0, 0x15bc(r31)
lbl_fn_80304FC0_000015B4:
    lwz r0, 0x4d4(r1)
    psq_l f31, 0x4c8(r1), 0, 0
    lfd f31, 0x4c0(r1)
    psq_l f30, 0x4b8(r1), 0, 0
    lfd f30, 0x4b0(r1)
    lwz r31, 0x4ac(r1)
    lwz r30, 0x4a8(r1)
    lwz r29, 0x4a4(r1)
    mtlr r0
    addi r1, r1, 0x4d0
    blr
}

asm void fn_803057A8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_80748A14@ha
    stw r0, 0x24(r1)
    addi r4, r4, lbl_80748A14@l
    addi r4, r4, 0x199
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r0, 0x168c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_803057A8_00001634
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_803057A8_00001634
    addi r3, r3, 0x10
    bl fn_8008937C
    stw r3, 0x168c(r29)
    mr r30, r3
    b lbl_fn_803057A8_00001638
lbl_fn_803057A8_00001634:
    li r30, 0x0
lbl_fn_803057A8_00001638:
    lis r31, lbl_80748A14@ha
    mr r3, r30
    addi r31, r31, lbl_80748A14@l
    addi r5, r29, 0x1690
    addi r4, r31, 0x1a5
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r30
    addi r4, r31, 0x1af
    addi r5, r29, 0x1698
    li r6, 0x0
    li r7, 0xbb8
    li r8, 0x1e
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lis r6, 0x5
    mr r3, r30
    subi r7, r6, 0x6c3e
    addi r4, r31, 0x1b8
    addi r5, r29, 0x169c
    li r6, 0x0
    li r8, 0x1e
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_80884A34
    mr r3, r30
    lfs f2, lbl_80884A70
    addi r4, r31, 0x1c1
    fmr f3, f1
    addi r5, r29, 0x1694
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r30
    addi r4, r31, 0x1cc
    addi r5, r29, 0x16a0
    li r6, 0x0
    li r7, 0xbb8
    li r8, 0x1e
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_80884A20
    mr r3, r30
    lfs f2, lbl_80884B1C
    addi r4, r31, 0x1d7
    lfs f3, lbl_80884A34
    addi r5, r29, 0x16a4
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80884A20
    mr r3, r30
    lfs f2, lbl_80884B1C
    addi r4, r31, 0x1e0
    lfs f3, lbl_80884A34
    addi r5, r29, 0x16a8
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80884A20
    mr r3, r30
    lfs f2, lbl_80884A2C
    addi r4, r31, 0x1e9
    lfs f3, lbl_80884A34
    addi r5, r29, 0x16ac
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r30
    addi r4, r31, 0x1f5
    addi r5, r29, 0x16b0
    li r6, 0x0
    li r7, 0x5
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r30
    addi r4, r31, 0x1f5
    addi r5, r29, 0x16b0
    li r6, 0x0
    li r7, 0x5
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_80884A20
    mr r3, r30
    lfs f2, lbl_80884A74
    addi r4, r31, 0x204
    lfs f3, lbl_80884A60
    addi r5, r29, 0x16b8
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80884A20
    mr r3, r30
    lfs f2, lbl_80884A74
    addi r4, r31, 0x210
    lfs f3, lbl_80884A60
    addi r5, r29, 0x16bc
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80884A20
    mr r3, r30
    lfs f2, lbl_80884B1C
    addi r4, r31, 0x223
    lfs f3, lbl_80884A60
    addi r5, r29, 0x16c0
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80884A20
    mr r3, r30
    lfs f2, lbl_80884A74
    addi r4, r31, 0x234
    lfs f3, lbl_80884A60
    addi r5, r29, 0x16c4
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80884A20
    mr r3, r30
    lfs f2, lbl_80884B1C
    addi r4, r31, 0x247
    lfs f3, lbl_80884A60
    addi r5, r29, 0x16c8
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r30
    addi r4, r31, 0x258
    addi r5, r29, 0x16cc
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r30
    addi r4, r31, 0x262
    addi r5, r29, 0x16d0
    li r6, 0x0
    li r7, 0x270f
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r30
    addi r4, r31, 0x26b
    addi r5, r29, 0x16d4
    li r6, 0x0
    li r7, 0x270f
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r30
    addi r4, r31, 0x276
    addi r5, r29, 0x16d8
    li r6, 0x0
    li r7, 0x270f
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r30
    addi r4, r31, 0x27f
    addi r5, r29, 0x16dc
    li r6, 0x0
    li r7, 0x63
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_80884A20
    mr r3, r30
    lfs f2, lbl_80884A74
    addi r4, r31, 0x287
    lfs f3, lbl_80884A60
    addi r5, r29, 0x16e0
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r30
    addi r4, r31, 0x293
    addi r5, r29, 0x16e4
    li r6, 0x0
    li r7, 0x270f
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r30
    addi r4, r31, 0x29e
    addi r5, r29, 0x16e8
    li r6, 0x0
    li r7, 0x270f
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_80884A20
    mr r3, r30
    lfs f2, lbl_80884A74
    addi r4, r31, 0x2a5
    lfs f3, lbl_80884A60
    addi r5, r29, 0x16ec
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80884A20
    mr r3, r30
    lfs f2, lbl_80884A74
    addi r4, r31, 0x2b6
    lfs f3, lbl_80884A60
    addi r5, r29, 0x16f0
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80884A20
    mr r3, r30
    lfs f2, lbl_80884A74
    addi r4, r31, 0x2c4
    lfs f3, lbl_80884A60
    addi r5, r29, 0x16f4
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
