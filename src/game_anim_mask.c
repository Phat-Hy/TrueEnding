#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_25(void);
extern void _savegpr_25(void);
extern void dtor_80084684(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_80057A64(void);
extern void fn_8005B3CC(void);
extern void fn_8005B5F8(void);
extern void fn_8005B6E8(void);
extern void fn_8006AFF8(void);
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_80097CCC(void);
extern void fn_80097D7C(void);
extern void fn_800C344C(void);
extern void fn_800CB360(void);
extern void fn_800CB3A0(void);
extern void fn_800CB440(void);
extern void fn_800CB5C8(void);
extern void fn_800EB7A0(void);
extern void fn_800EE360(void);
extern void fn_800F8548(void);
extern void fn_800F8574(void);
extern void fn_8015495C(void);
extern void fn_8016DA4C(void);
extern void fn_8016E970(void);
extern void fn_8016F824(void);
extern void fn_801765D8(void);
extern void fn_80178A6C(void);
extern void fn_80219E6C(void);
extern void fn_80232B7C(void);
extern void fn_80237654(void);
extern void fn_802377B8(void);
extern void fn_8023780C(void);
extern void fn_80239DAC(void);
extern void fn_8023A8B4(void);
extern void fn_80272C6C(void);
extern void fn_80272CF0(void);
extern void fn_8035B694(void);
extern void fn_8036554C(void);
extern void fn_80473E74(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_80682428(void);
extern void fn_80682544(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);
extern void fn_806958E0(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_807448D8[];
extern u8 lbl_80744920[];
extern u8 lbl_80744938[];
extern u8 lbl_80744940[];
extern u8 lbl_8074495C[];
extern u8 lbl_80744AA4[];
extern u8 lbl_807772B0[];
extern u8 lbl_807772D0[];
extern u8 lbl_807850E0[];
extern u8 lbl_8078FBB0[];
extern u8 lbl_807C7030[];
extern u8 lbl_807C8338[];
extern u8 lbl_807C8350[];

/* Small data declarations */
extern u32 lbl_8087D708;
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F428;
extern u32 lbl_8087F8A0;
extern u32 lbl_80883798;
extern u32 lbl_8088379C;
extern u32 lbl_808837B0;
extern u32 lbl_808837C4;
extern u32 lbl_808837D0;
extern u32 lbl_808837D8;
extern u32 lbl_808837DC;
extern u32 lbl_808837E0;
extern u32 lbl_808837E4;
extern u32 lbl_808837E8;
extern u32 lbl_808837EC;
extern u32 lbl_808837F0;
extern u32 lbl_808837F4;
extern u32 lbl_808837F8;
extern u32 lbl_808837FC;
extern u32 lbl_80883800;
extern u32 lbl_80883804;
extern u32 lbl_80883808;
extern u32 lbl_8088380C;
extern u32 lbl_80883810;
extern u32 lbl_80883820;
extern u32 lbl_80883824;
extern u32 lbl_80883828;
extern u32 lbl_8088382C;
extern u32 lbl_80883830;
extern u32 lbl_80883834;

/* Function declarations */
void fn_80271074(void);
void fn_80271104(void);
void fn_802714B0(void);
void fn_80271654(void);
void fn_8027179C(void);
void fn_80271AA4(void);
void fn_80271DAC(void);
void fn_802721A0(void);
void fn_8027232C(void);
void fn_80272660(void);
void fn_8027276C(void);
void fn_8027278C(void);

asm void fn_80271074(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r31, 0xc(r1)
    mr r31, r3
    stw r0, 0x14b4(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0xd
    mr r3, r31
    li r4, 0x6
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f0, lbl_8088379C
    li r3, 0x16
    li r0, 0x1
    stw r3, 0x560(r31)
    lfs f1, lbl_80883798
    addi r3, r31, 0xb0
    stw r0, 0x3fc(r31)
    li r4, 0x0
    lfs f2, lbl_808837E0
    li r5, 0x1dd
    stfs f0, 0x2fc(r31)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80271104(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    stfd f31, 0x90(r1)
    psq_st f31, 0x98(r1), 0, 0
    stw r31, 0x8c(r1)
    mr r31, r3
    stw r30, 0x88(r1)
    lwz r0, 0x14d0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80271104_000000D0
    cmpwi r0, 0x1
    beq lbl_fn_80271104_000001D0
    cmpwi r0, 0x2
    beq lbl_fn_80271104_00000284
    b lbl_fn_80271104_0000041C
lbl_fn_80271104_000000D0:
    lfs f31, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_80271104_0000041C
    li r30, 0x1
    stw r30, 0x14d0(r31)
    mr r3, r31
    li r4, 0x0
    bl fn_80232B7C
    lfs f0, lbl_80883798
    li r0, -0x1
    lfs f1, lbl_8088379C
    addi r4, r31, 0x1518
    stfs f0, 0x24(r1)
    addi r5, r31, 0xb0
    addi r7, r1, 0x18
    addi r8, r1, 0x24
    stfs f0, 0x28(r1)
    addi r9, r1, 0x30
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x2c(r1)
    stfs f0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f1, 0x30(r1)
    stfs f1, 0x34(r1)
    stfs f1, 0x38(r1)
    stfs f1, 0x3c(r1)
    stw r0, 0x8(r1)
    stw r30, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lis r3, lbl_80744920@ha
    lfs f1, lbl_8088379C
    lwz r4, lbl_80744920@l(r3)
    addi r3, r1, 0x14
    addi r5, r31, 0x528
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r31, 0x153c
    addi r4, r1, 0x14
    bl fn_800CB440
    addi r3, r1, 0x14
    li r4, -0x1
    bl fn_800CB3A0
    lfs f0, lbl_8088379C
    addi r3, r31, 0xb0
    stw r30, 0x3fc(r31)
    li r4, 0x0
    lfs f1, lbl_80883798
    li r5, 0x143
    stfs f0, 0x2fc(r31)
    li r6, 0x1
    lfs f2, lbl_808837D0
    li r7, 0x0
    stfs f0, 0x2e8(r31)
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_80271104_0000041C
lbl_fn_80271104_000001D0:
    lwz r4, 0x14c4(r3)
    addi r0, r4, 0x1
    stw r0, 0x14c4(r3)
    cmpwi r0, 0x3c
    blt lbl_fn_80271104_0000041C
    li r4, 0x2
    li r0, 0x0
    stw r4, 0x14d0(r3)
    mr r4, r31
    li r5, 0x0
    li r6, 0x1
    stw r0, 0x14c4(r3)
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    addi r3, r31, 0x153c
    li r4, 0x0
    li r5, 0x0
    bl fn_800CB5C8
    lis r4, lbl_80744920@ha
    lfs f1, lbl_8088379C
    addi r4, r4, lbl_80744920@l
    addi r3, r1, 0x10
    lwz r4, 0x4(r4)
    addi r5, r31, 0x528
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    lfs f0, lbl_8088379C
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80883798
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x144
    lfs f2, lbl_808837D0
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_80271104_0000041C
lbl_fn_80271104_00000284:
    lfs f31, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_80271104_00000300
    li r30, 0x0
    stw r30, 0x14b4(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r3, r31
    li r4, 0x3
    stw r30, 0x58c(r31)
    bl fn_8016E970
    addi r3, r31, 0x153c
    li r4, 0xf
    li r5, 0x0
    bl fn_800CB5C8
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0xc8
    li r6, 0x0
    bl fn_80239DAC
    lwz r0, 0x14bc(r31)
    lis r3, lbl_807C8338@ha
    addi r3, r3, lbl_807C8338@l
    slwi r0, r0, 2
    stwx r30, r3, r0
    b lbl_fn_80271104_0000041C
lbl_fn_80271104_00000300:
    lfs f1, 0x2e4(r31)
    lfs f0, lbl_808837E4
    fcmpo cr0, f0, f1
    bge lbl_fn_80271104_0000033C
    lfs f0, lbl_808837E8
    fcmpo cr0, f1, f0
    bge lbl_fn_80271104_0000033C
    lwz r3, 0x14c4(r31)
    addi r0, r3, 0x1
    stw r0, 0x14c4(r31)
    cmpwi r0, 0xf
    bge lbl_fn_80271104_0000041C
    lfs f0, lbl_808837B0
    stfs f0, 0x2e4(r31)
    b lbl_fn_80271104_0000041C
lbl_fn_80271104_0000033C:
    lfs f1, 0x2e4(r31)
    lfs f0, lbl_808837EC
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_80271104_0000041C
    lfs f0, lbl_808837F0
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_80271104_0000041C
    lis r4, lbl_8074495C@ha
    addi r30, r31, 0xb0
    addi r4, r4, lbl_8074495C@l
    li r5, 0x0
    mr r3, r30
    addi r4, r4, 0x85
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80271104_0000038C
    li r5, 0x0
    b lbl_fn_80271104_00000398
lbl_fn_80271104_0000038C:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r30)
    add r5, r3, r0
lbl_fn_80271104_00000398:
    lfs f2, 0x2c(r5)
    addi r3, r1, 0x58
    lfs f3, 0x1c(r5)
    li r4, 0x79
    lfs f4, 0xc(r5)
    lfs f1, lbl_80883798
    lfs f0, lbl_8088379C
    stfs f4, 0x4c(r1)
    stfs f3, 0x50(r1)
    stfs f2, 0x54(r1)
    stfs f1, 0x40(r1)
    stfs f1, 0x44(r1)
    stfs f0, 0x48(r1)
    lfs f1, 0x538(r31)
    bl fn_805F8E70
    addi r4, r1, 0x40
    addi r3, r1, 0x58
    mr r5, r4
    bl fn_805F93C0
    lwz r30, lbl_8087F048
    li r3, 0x3f2
    bl fn_80219E6C
    lfs f1, lbl_80883798
    mr r5, r3
    lfs f2, lbl_8088379C
    mr r3, r30
    mr r4, r31
    addi r6, r1, 0x4c
    addi r7, r1, 0x40
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_800F8574
lbl_fn_80271104_0000041C:
    lwz r0, 0xa4(r1)
    psq_l f31, 0x98(r1), 0, 0
    lfd f31, 0x90(r1)
    lwz r31, 0x8c(r1)
    lwz r30, 0x88(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_802714B0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    stw r31, 0x1c(r1)
    mr r31, r3
    lfs f31, 0x2e4(r3)
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_802714B0_000004DC
    lwz r3, 0x14d8(r31)
    subi r0, r3, 0x7
    cmplwi r0, 0x1
    ble lbl_fn_802714B0_000004BC
    cmpwi r3, 0x0
    beq lbl_fn_802714B0_000004A0
    cmpwi r3, 0x6
    beq lbl_fn_802714B0_000004AC
    cmpwi r3, 0xa
    beq lbl_fn_802714B0_000004CC
    b lbl_fn_802714B0_000005C4
lbl_fn_802714B0_000004A0:
    li r0, 0x0
    stw r0, 0x58c(r31)
    b lbl_fn_802714B0_000005C4
lbl_fn_802714B0_000004AC:
    lwz r4, 0x14e8(r31)
    mr r3, r31
    bl fn_8027179C
    b lbl_fn_802714B0_000005C4
lbl_fn_802714B0_000004BC:
    lwz r4, 0x14e8(r31)
    mr r3, r31
    bl fn_80271AA4
    b lbl_fn_802714B0_000005C4
lbl_fn_802714B0_000004CC:
    lwz r4, 0x14e8(r31)
    mr r3, r31
    bl fn_80271DAC
    b lbl_fn_802714B0_000005C4
lbl_fn_802714B0_000004DC:
    lfs f1, 0x2e4(r31)
    lfs f0, lbl_808837F4
    fcmpo cr0, f0, f1
    cror eq, lt, eq
    bne lbl_fn_802714B0_000005C4
    lfs f0, lbl_808837F8
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_802714B0_000005C4
    lfs f1, 0x14e4(r31)
    lis r3, lbl_80744940@ha
    lfs f0, 0x14e0(r31)
    lwz r4, 0x14dc(r31)
    fsubs f1, f1, f0
    lfd f2, lbl_80744940@l(r3)
    addi r0, r4, 0x2
    stw r0, 0x14dc(r31)
    bl fn_8068AEA8
    frsp f4, f1
    lfs f0, lbl_808837FC
    fcmpo cr0, f4, f0
    ble lbl_fn_802714B0_0000053C
    lfs f0, lbl_80883800
    fsubs f4, f4, f0
lbl_fn_802714B0_0000053C:
    lfs f0, lbl_80883804
    fcmpo cr0, f4, f0
    bge lbl_fn_802714B0_00000550
    lfs f0, lbl_80883800
    fadds f4, f4, f0
lbl_fn_802714B0_00000550:
    lwz r4, 0x14dc(r31)
    lis r0, 0x4330
    lis r5, lbl_80744938@ha
    stw r0, 0x8(r1)
    xoris r4, r4, 0x8000
    lfd f3, lbl_80744938@l(r5)
    stw r4, 0xc(r1)
    lis r3, lbl_80744940@ha
    lfs f1, lbl_808837B0
    lfd f2, 0x8(r1)
    lfs f0, 0x14e0(r31)
    fsubs f3, f2, f3
    lfd f2, lbl_80744940@l(r3)
    fmuls f3, f3, f4
    fdivs f1, f3, f1
    fadds f1, f0, f1
    bl fn_8068AEA8
    frsp f1, f1
    lfs f0, lbl_808837FC
    fcmpo cr0, f1, f0
    ble lbl_fn_802714B0_000005AC
    lfs f0, lbl_80883800
    fsubs f1, f1, f0
lbl_fn_802714B0_000005AC:
    lfs f0, lbl_80883804
    fcmpo cr0, f1, f0
    bge lbl_fn_802714B0_000005C0
    lfs f0, lbl_80883800
    fadds f1, f1, f0
lbl_fn_802714B0_000005C0:
    stfs f1, 0x538(r31)
lbl_fn_802714B0_000005C4:
    lwz r0, 0x34(r1)
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80271654(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    stw r31, 0x3c(r1)
    mr r31, r3
    lwz r0, 0x2dc(r3)
    cmpwi r0, 0x2e
    beq lbl_fn_80271654_0000060C
    bl fn_80272660
lbl_fn_80271654_0000060C:
    lfs f31, 0x2e4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_80271654_00000704
    lwz r3, 0x1434(r31)
    lwz r4, 0x12a4(r31)
    lwz r0, 0x5c0(r31)
    cmpwi r3, 0x0
    oris r4, r4, 0x200
    stw r4, 0x12a4(r31)
    clrrwi r0, r0, 1
    stw r0, 0x5c0(r31)
    ble lbl_fn_80271654_000006E8
    subi r0, r3, 0x1
    stw r0, 0x1434(r31)
    cmpwi r0, 0x1d
    bne lbl_fn_80271654_0000070C
    li r3, 0x0
    li r4, 0x0
    bl fn_80232B7C
    lfs f0, lbl_80883798
    li r3, -0x1
    lfs f1, lbl_8088379C
    li r0, 0x1
    stfs f0, 0x1c(r1)
    addi r4, r31, 0x150c
    addi r5, r31, 0xb0
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
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x1
    lwz r12, 0x9c(r12)
    mtctr r12
    bctrl
    b lbl_fn_80271654_0000070C
lbl_fn_80271654_000006E8:
    ori r0, r4, 0x8000
    stw r0, 0x12a4(r31)
    mr r3, r31
    bl fn_801765D8
    mr r3, r31
    bl fn_800EE360
    b lbl_fn_80271654_0000070C
lbl_fn_80271654_00000704:
    li r0, 0x1e
    stw r0, 0x1434(r31)
lbl_fn_80271654_0000070C:
    lwz r0, 0x54(r1)
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    lwz r31, 0x3c(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8027179C(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    li r5, 0x6
    stw r0, 0x124(r1)
    stfd f31, 0x110(r1)
    psq_st f31, 0x118(r1), 0, 0
    stfd f30, 0x100(r1)
    psq_st f30, 0x108(r1), 0, 0
    stw r31, 0xfc(r1)
    stw r30, 0xf8(r1)
    mr r30, r4
    stw r29, 0xf4(r1)
    mr r29, r3
    bl fn_8027232C
    cmpwi r3, 0x0
    bne lbl_fn_8027179C_00000A04
    li r0, 0x0
    stw r0, 0x14b4(r29)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r29)
    li r0, 0x6
    mr r3, r29
    li r4, 0x6
    stw r0, 0x58c(r29)
    bl fn_8016E970
    lwz r3, 0x14c8(r29)
    li r0, 0x4
    stw r0, 0x560(r29)
    addi r31, r1, 0x5c
    addi r0, r3, 0x1
    addi r5, r1, 0x74
    stw r0, 0x14c8(r29)
    addi r6, r1, 0x50
    lfs f0, 0x530(r29)
    mr r3, r31
    lfs f2, 0x530(r30)
    mr r4, r31
    psq_l f1, 0x528(r30), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    fsubs f6, f2, f0
    lfs f4, 0x52c(r29)
    lfs f5, 0x78(r1)
    lfs f3, 0x74(r1)
    lfs f0, 0x528(r29)
    fsubs f4, f5, f4
    stfs f2, 0x7c(r1)
    fmr f2, f6
    fsubs f0, f3, f0
    stfs f4, 0x54(r1)
    stfs f0, 0x50(r1)
    psq_l f1, 0x0(r6), 0, 0
    stfs f6, 0x58(r1)
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x64(r1)
    bl fn_805F98D0
    lfs f2, 0x64(r1)
    addi r30, r1, 0x68
    psq_l f1, 0x0(r31), 0, 0
    fabs f3, f2
    lfs f0, lbl_808837C4
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0x70(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_8027179C_00000854
    lfs f3, 0x68(r1)
    lfs f0, lbl_80883798
    fcmpo cr0, f3, f0
    ble lbl_fn_8027179C_00000848
    lfs f0, lbl_808837D8
    b lbl_fn_8027179C_0000084C
lbl_fn_8027179C_00000848:
    lfs f0, lbl_808837DC
lbl_fn_8027179C_0000084C:
    stfs f0, 0x48(r1)
    b lbl_fn_8027179C_00000868
lbl_fn_8027179C_00000854:
    frsp f2, f2
    lfs f1, 0x68(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_8027179C_00000868:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x80
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883798
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
    lfs f0, lbl_8088379C
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x70(r1)
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
    lfs f0, lbl_808837C4
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8027179C_00000984
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80883798
    fcmpo cr0, f3, f0
    ble lbl_fn_8027179C_00000974
    lfs f0, lbl_808837D8
    b lbl_fn_8027179C_00000978
lbl_fn_8027179C_00000974:
    lfs f0, lbl_808837DC
lbl_fn_8027179C_00000978:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_8027179C_00000998
lbl_fn_8027179C_00000984:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_8027179C_00000998:
    addi r3, r1, 0x44
    lfs f2, lbl_80883798
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r29, 0xb0
    psq_st f1, 0x534(r29), 0, 0
    li r4, 0x0
    psq_st f1, 0x0(r30), 0, 0
    fmr f1, f2
    stfs f2, 0x4c(r1)
    stfs f2, 0x70(r1)
    stfs f2, 0x534(r29)
    stfs f2, 0x53c(r29)
    bl fn_80097CCC
    lfs f0, lbl_8088379C
    li r0, 0x1
    stw r0, 0x3fc(r29)
    addi r3, r29, 0xb0
    lfs f1, lbl_80883798
    li r4, 0x0
    stfs f0, 0x2fc(r29)
    li r5, 0x13f
    lfs f2, lbl_808837D0
    li r6, 0x0
    stfs f0, 0x2e8(r29)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
lbl_fn_8027179C_00000A04:
    lwz r0, 0x124(r1)
    psq_l f31, 0x118(r1), 0, 0
    lfd f31, 0x110(r1)
    psq_l f30, 0x108(r1), 0, 0
    lfd f30, 0x100(r1)
    lwz r31, 0xfc(r1)
    lwz r30, 0xf8(r1)
    lwz r29, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_80271AA4(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    li r5, 0x8
    stw r0, 0x124(r1)
    stfd f31, 0x110(r1)
    psq_st f31, 0x118(r1), 0, 0
    stfd f30, 0x100(r1)
    psq_st f30, 0x108(r1), 0, 0
    stw r31, 0xfc(r1)
    stw r30, 0xf8(r1)
    mr r30, r4
    stw r29, 0xf4(r1)
    mr r29, r3
    bl fn_8027232C
    cmpwi r3, 0x0
    bne lbl_fn_80271AA4_00000D0C
    li r0, 0x0
    stw r0, 0x14b4(r29)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r29)
    li r0, 0x8
    mr r3, r29
    li r4, 0x6
    stw r0, 0x58c(r29)
    bl fn_8016E970
    li r0, 0x4
    stw r0, 0x560(r29)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r29)
    addi r31, r1, 0x5c
    addi r3, r1, 0x74
    lfs f0, 0x530(r29)
    psq_l f1, 0x528(r30), 0, 0
    addi r5, r1, 0x50
    psq_st f1, 0x0(r3), 0, 0
    mr r3, r31
    lfs f2, 0x530(r30)
    mr r4, r31
    lfs f5, 0x78(r1)
    fsubs f6, f2, f0
    lfs f4, 0x52c(r29)
    lfs f3, 0x74(r1)
    lfs f0, 0x528(r29)
    fsubs f4, f5, f4
    stfs f2, 0x7c(r1)
    fsubs f0, f3, f0
    fmr f2, f6
    stfs f4, 0x54(r1)
    stfs f0, 0x50(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f6, 0x58(r1)
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x64(r1)
    bl fn_805F98D0
    lfs f2, 0x64(r1)
    addi r30, r1, 0x68
    psq_l f1, 0x0(r31), 0, 0
    fabs f3, f2
    lfs f0, lbl_808837C4
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0x70(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_80271AA4_00000B5C
    lfs f3, 0x68(r1)
    lfs f0, lbl_80883798
    fcmpo cr0, f3, f0
    ble lbl_fn_80271AA4_00000B50
    lfs f0, lbl_808837D8
    b lbl_fn_80271AA4_00000B54
lbl_fn_80271AA4_00000B50:
    lfs f0, lbl_808837DC
lbl_fn_80271AA4_00000B54:
    stfs f0, 0x48(r1)
    b lbl_fn_80271AA4_00000B70
lbl_fn_80271AA4_00000B5C:
    frsp f2, f2
    lfs f1, 0x68(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_80271AA4_00000B70:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x80
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883798
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
    lfs f0, lbl_8088379C
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x70(r1)
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
    lfs f0, lbl_808837C4
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80271AA4_00000C8C
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80883798
    fcmpo cr0, f3, f0
    ble lbl_fn_80271AA4_00000C7C
    lfs f0, lbl_808837D8
    b lbl_fn_80271AA4_00000C80
lbl_fn_80271AA4_00000C7C:
    lfs f0, lbl_808837DC
lbl_fn_80271AA4_00000C80:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_80271AA4_00000CA0
lbl_fn_80271AA4_00000C8C:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_80271AA4_00000CA0:
    addi r3, r1, 0x44
    lfs f2, lbl_80883798
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r29, 0xb0
    psq_st f1, 0x534(r29), 0, 0
    li r4, 0x0
    psq_st f1, 0x0(r30), 0, 0
    fmr f1, f2
    stfs f2, 0x4c(r1)
    stfs f2, 0x70(r1)
    stfs f2, 0x534(r29)
    stfs f2, 0x53c(r29)
    bl fn_80097CCC
    lfs f0, lbl_8088379C
    li r0, 0x1
    stw r0, 0x3fc(r29)
    addi r3, r29, 0xb0
    lfs f1, lbl_80883798
    li r4, 0x0
    stfs f0, 0x2fc(r29)
    li r5, 0x145
    lfs f2, lbl_808837D0
    li r6, 0x0
    stfs f0, 0x2e8(r29)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
lbl_fn_80271AA4_00000D0C:
    lwz r0, 0x124(r1)
    psq_l f31, 0x118(r1), 0, 0
    lfd f31, 0x110(r1)
    psq_l f30, 0x108(r1), 0, 0
    lfd f30, 0x100(r1)
    lwz r31, 0xfc(r1)
    lwz r30, 0xf8(r1)
    lwz r29, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_80271DAC(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    li r5, 0xa
    stw r0, 0x134(r1)
    stfd f31, 0x120(r1)
    psq_st f31, 0x128(r1), 0, 0
    stfd f30, 0x110(r1)
    psq_st f30, 0x118(r1), 0, 0
    stw r31, 0x10c(r1)
    mr r31, r3
    stw r30, 0x108(r1)
    stw r29, 0x104(r1)
    bl fn_8027232C
    cmpwi r3, 0x0
    bne lbl_fn_80271DAC_00001100
    li r0, 0x0
    stw r0, 0x14b4(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0xa
    mr r3, r31
    li r4, 0x6
    stw r0, 0x58c(r31)
    bl fn_8016E970
    li r0, 0x4
    stw r0, 0x560(r31)
    lwz r3, lbl_8087F8A0
    lwz r6, 0x48(r3)
    lwz r0, 0x12a4(r6)
    extrwi. r0, r0, 1, 3
    beq lbl_fn_80271DAC_00000DD0
    lfs f2, 0x530(r6)
    addi r3, r1, 0x74
    psq_l f1, 0x528(r6), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x7c(r1)
    b lbl_fn_80271DAC_00000EA8
lbl_fn_80271DAC_00000DD0:
    lis r5, lbl_807C7030@ha
    addi r4, r1, 0x74
    addi r5, r5, lbl_807C7030@l
    lwz r3, lbl_8087F428
    psq_l f1, 0x0(r5), 0, 0
    li r30, 0x1
    lfs f2, 0x8(r5)
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x528(r6), 0, 0
    stfs f2, 0x7c(r1)
    lfs f2, 0x530(r6)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x7c(r1)
    bl fn_8036554C
    b lbl_fn_80271DAC_00000E54
lbl_fn_80271DAC_00000E0C:
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_80271DAC_00000E50
    lfs f3, 0x74(r1)
    addi r30, r30, 0x1
    lfs f0, 0x528(r3)
    lfs f5, 0x78(r1)
    fadds f6, f3, f0
    lfs f4, 0x52c(r3)
    lfs f3, 0x7c(r1)
    lfs f0, 0x530(r3)
    fadds f4, f5, f4
    stfs f6, 0x74(r1)
    fadds f0, f3, f0
    stfs f4, 0x78(r1)
    stfs f0, 0x7c(r1)
lbl_fn_80271DAC_00000E50:
    lwz r3, 0x14ac(r3)
lbl_fn_80271DAC_00000E54:
    cmpwi r3, 0x0
    bne lbl_fn_80271DAC_00000E0C
    xoris r3, r30, 0x8000
    lis r0, 0x4330
    lis r4, lbl_80744938@ha
    stw r3, 0xf4(r1)
    lfd f3, lbl_80744938@l(r4)
    stw r0, 0xf0(r1)
    lfs f5, lbl_8088379C
    lfd f0, 0xf0(r1)
    lfs f4, 0x74(r1)
    fsubs f6, f0, f3
    lfs f3, 0x78(r1)
    lfs f0, 0x7c(r1)
    fdivs f5, f5, f6
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    fmuls f0, f0, f5
    stfs f4, 0x74(r1)
    stfs f3, 0x78(r1)
    stfs f0, 0x7c(r1)
lbl_fn_80271DAC_00000EA8:
    lfs f3, 0x7c(r1)
    addi r30, r1, 0x5c
    lfs f0, 0x530(r31)
    addi r5, r1, 0x50
    lfs f5, 0x78(r1)
    mr r3, r30
    fsubs f2, f3, f0
    lfs f4, 0x52c(r31)
    lfs f0, 0x528(r31)
    mr r4, r30
    lfs f3, 0x74(r1)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x54(r1)
    stfs f0, 0x50(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0x58(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x64(r1)
    bl fn_805F98D0
    lfs f2, 0x64(r1)
    addi r29, r1, 0x68
    psq_l f1, 0x0(r30), 0, 0
    fabs f3, f2
    lfs f0, lbl_808837C4
    psq_st f1, 0x0(r29), 0, 0
    frsp f3, f3
    stfs f2, 0x70(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_80271DAC_00000F44
    lfs f3, 0x68(r1)
    lfs f0, lbl_80883798
    fcmpo cr0, f3, f0
    ble lbl_fn_80271DAC_00000F38
    lfs f0, lbl_808837D8
    b lbl_fn_80271DAC_00000F3C
lbl_fn_80271DAC_00000F38:
    lfs f0, lbl_808837DC
lbl_fn_80271DAC_00000F3C:
    stfs f0, 0x48(r1)
    b lbl_fn_80271DAC_00000F58
lbl_fn_80271DAC_00000F44:
    frsp f2, f2
    lfs f1, 0x68(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_80271DAC_00000F58:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x80
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883798
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
    lfs f0, lbl_8088379C
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x70(r1)
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
    lfs f0, lbl_808837C4
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80271DAC_00001074
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80883798
    fcmpo cr0, f3, f0
    ble lbl_fn_80271DAC_00001064
    lfs f0, lbl_808837D8
    b lbl_fn_80271DAC_00001068
lbl_fn_80271DAC_00001064:
    lfs f0, lbl_808837DC
lbl_fn_80271DAC_00001068:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_80271DAC_00001088
lbl_fn_80271DAC_00001074:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_80271DAC_00001088:
    addi r3, r1, 0x44
    lfs f2, lbl_80883798
    psq_l f1, 0x0(r3), 0, 0
    li r0, 0x0
    psq_st f1, 0x534(r31), 0, 0
    addi r3, r31, 0xb0
    li r4, 0x0
    psq_st f1, 0x0(r29), 0, 0
    fmr f1, f2
    stfs f2, 0x4c(r1)
    stfs f2, 0x70(r1)
    stfs f2, 0x534(r31)
    stfs f2, 0x53c(r31)
    stw r0, 0x14c4(r31)
    stw r0, 0x14d0(r31)
    bl fn_80097CCC
    lfs f0, lbl_8088379C
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80883798
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x142
    lfs f2, lbl_808837D0
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
lbl_fn_80271DAC_00001100:
    lwz r0, 0x134(r1)
    psq_l f31, 0x128(r1), 0, 0
    lfd f31, 0x120(r1)
    psq_l f30, 0x118(r1), 0, 0
    lfd f30, 0x110(r1)
    lwz r31, 0x10c(r1)
    lwz r30, 0x108(r1)
    lwz r29, 0x104(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

asm void fn_802721A0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    lfs f31, lbl_80883798
    stw r31, 0x2c(r1)
    lis r31, lbl_807C8350@ha
    addi r31, r31, lbl_807C8350@l
    stw r30, 0x28(r1)
    li r30, 0x0
    stw r29, 0x24(r1)
    li r29, 0x0
    stw r28, 0x20(r1)
    mr r28, r3
lbl_fn_802721A0_00001168:
    lfs f1, 0x8(r31)
    addi r3, r1, 0x8
    lfs f0, 0x530(r28)
    lfs f3, 0x4(r31)
    fsubs f4, f1, f0
    lfs f2, 0x52c(r28)
    lfs f0, 0x528(r28)
    lfs f1, 0x0(r31)
    fsubs f2, f3, f2
    stfs f4, 0x10(r1)
    fsubs f0, f1, f0
    stfs f2, 0xc(r1)
    stfs f0, 0x8(r1)
    bl fn_805F9920
    fcmpo cr0, f31, f1
    bge lbl_fn_802721A0_000011B8
    addi r3, r1, 0x8
    bl fn_805F9920
    mr r30, r29
    fmr f31, f1
lbl_fn_802721A0_000011B8:
    addi r29, r29, 0x1
    addi r31, r31, 0xc
    cmpwi r29, 0x6
    blt lbl_fn_802721A0_00001168
    lis r3, lbl_807C8338@ha
    mr r4, r30
    addi r3, r3, lbl_807C8338@l
    b lbl_fn_802721A0_000011F0
lbl_fn_802721A0_000011D8:
    addi r30, r30, 0x1
    cmpwi r30, 0x6
    blt lbl_fn_802721A0_000011E8
    li r30, 0x0
lbl_fn_802721A0_000011E8:
    cmpw r30, r4
    beq lbl_fn_802721A0_00001200
lbl_fn_802721A0_000011F0:
    slwi r0, r30, 2
    lwzx r0, r3, r0
    cmpwi r0, 0x0
    bne lbl_fn_802721A0_000011D8
lbl_fn_802721A0_00001200:
    lis r3, lbl_807C8338@ha
    lis r4, lbl_807448D8@ha
    slwi r0, r30, 2
    li r31, 0x1
    addi r3, r3, lbl_807C8338@l
    addi r4, r4, lbl_807448D8@l
    stwx r31, r3, r0
    mr r3, r28
    lwzx r4, r4, r0
    li r5, 0x2
    stw r30, 0x14bc(r28)
    bl fn_8016F824
    lfs f0, lbl_8088379C
    li r3, 0xc
    li r0, 0x0
    stw r3, 0x58c(r28)
    lfs f1, lbl_80883798
    addi r3, r28, 0xb0
    stw r0, 0x14c4(r28)
    li r4, 0x0
    stfs f0, 0x568(r28)
    bl fn_80097CCC
    lfs f2, lbl_8088379C
    addi r3, r28, 0xb0
    lfs f0, lbl_80883808
    li r4, 0x0
    stfs f2, 0x2fc(r28)
    li r5, 0x14
    lfs f1, lbl_80883798
    li r6, 0x0
    stw r31, 0x3fc(r28)
    li r7, 0x0
    lfs f2, lbl_808837D0
    li r8, 0x1
    stfs f0, 0x2e8(r28)
    bl fn_80097C08
    lwz r0, 0x44(r1)
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8027232C(void)
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
    cmpwi r0, 0xb
    bne lbl_fn_8027232C_00001304
    li r3, 0x0
    b lbl_fn_8027232C_000015BC
lbl_fn_8027232C_00001304:
    lfs f0, 0x538(r3)
    addi r5, r1, 0x50
    stfs f0, 0x14e0(r3)
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
    lfs f0, lbl_808837C4
    stfs f4, 0x54(r1)
    frsp f4, f2
    stfs f3, 0x50(r1)
    fabs f3, f4
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    frsp f3, f3
    stfs f2, 0x64(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_8027232C_0000138C
    lfs f3, 0x5c(r1)
    lfs f0, lbl_80883798
    fcmpo cr0, f3, f0
    ble lbl_fn_8027232C_00001380
    lfs f0, lbl_808837D8
    b lbl_fn_8027232C_00001384
lbl_fn_8027232C_00001380:
    lfs f0, lbl_808837DC
lbl_fn_8027232C_00001384:
    stfs f0, 0x48(r1)
    b lbl_fn_8027232C_000013A0
lbl_fn_8027232C_0000138C:
    fmr f2, f4
    lfs f1, 0x5c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_8027232C_000013A0:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x68
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883798
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
    lfs f0, lbl_8088379C
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
    lfs f0, lbl_808837C4
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8027232C_000014BC
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80883798
    fcmpo cr0, f3, f0
    ble lbl_fn_8027232C_000014AC
    lfs f0, lbl_808837D8
    b lbl_fn_8027232C_000014B0
lbl_fn_8027232C_000014AC:
    lfs f0, lbl_808837DC
lbl_fn_8027232C_000014B0:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_8027232C_000014D0
lbl_fn_8027232C_000014BC:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_8027232C_000014D0:
    addi r3, r1, 0x44
    lfs f4, lbl_80883798
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_80744940@ha
    psq_st f1, 0x0(r31), 0, 0
    fmr f2, f4
    lfs f0, 0x14e0(r28)
    lfs f3, 0x60(r1)
    stfs f2, 0x64(r1)
    fsubs f1, f3, f0
    lfd f2, lbl_80744940@l(r3)
    stfs f4, 0x4c(r1)
    stfs f3, 0x14e4(r28)
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_808837FC
    fcmpo cr0, f3, f0
    ble lbl_fn_8027232C_00001520
    lfs f0, lbl_80883800
    fsubs f3, f3, f0
lbl_fn_8027232C_00001520:
    lfs f0, lbl_80883804
    fcmpo cr0, f3, f0
    bge lbl_fn_8027232C_00001534
    lfs f0, lbl_80883800
    fadds f3, f3, f0
lbl_fn_8027232C_00001534:
    lfs f0, lbl_8088380C
    fcmpo cr0, f0, f3
    bge lbl_fn_8027232C_00001554
    lfs f0, lbl_80883810
    fcmpo cr0, f3, f0
    bge lbl_fn_8027232C_00001554
    li r3, 0x0
    b lbl_fn_8027232C_000015BC
lbl_fn_8027232C_00001554:
    li r3, 0x0
    li r0, 0xb
    stw r3, 0x14dc(r28)
    addi r3, r28, 0xb0
    lfs f1, lbl_80883798
    li r4, 0x0
    stw r30, 0x14d8(r28)
    stw r29, 0x14e8(r28)
    stw r0, 0x58c(r28)
    bl fn_80097CCC
    lfs f3, lbl_8088379C
    li r0, 0x1
    lfs f0, lbl_80883808
    addi r3, r28, 0xb0
    stw r0, 0x3fc(r28)
    li r4, 0x0
    lfs f1, lbl_80883798
    li r5, 0x14d
    stfs f3, 0x2fc(r28)
    li r6, 0x0
    lfs f2, lbl_808837D0
    li r7, 0x0
    stfs f0, 0x2e8(r28)
    li r8, 0x1
    bl fn_80097C08
    li r3, 0x1
lbl_fn_8027232C_000015BC:
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

asm void fn_80272660(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x58c(r3)
    cmpwi r0, 0xa
    bne lbl_fn_80272660_0000162C
    lwz r0, 0x14d0(r3)
    cmpwi r0, 0x1
    bne lbl_fn_80272660_0000162C
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x0
    li r6, 0x0
    bl fn_80239DAC
lbl_fn_80272660_0000162C:
    addi r3, r31, 0x153c
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
    lfs f1, lbl_80883798
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097CCC
    lfs f0, lbl_8088379C
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80883798
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x2e
    lfs f2, lbl_808837D0
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    mr r3, r31
    bl fn_800EB7A0
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8027276C(void)
{
    nofralloc
    lis r3, lbl_807C8350@ha
    lis r4, fn_80057A64@ha
    addi r3, r3, lbl_807C8350@l
    li r5, 0x0
    addi r4, r4, fn_80057A64@l
    li r6, 0xc
    li r7, 0x6
    b fn_806958E0
}

asm void fn_8027278C(void)
{
    nofralloc
    stwu r1, -0x6a0(r1)
    mflr r0
    stw r0, 0x6a4(r1)
    addi r11, r1, 0x6a0
    bl _savegpr_25
    mr r29, r5
    lwz r5, 0x20(r5)
    mr r28, r3
    bl fn_8035B694
    lfs f3, lbl_80883820
    lis r3, lbl_807850E0@ha
    li r31, 0x0
    li r12, 0x3f2
    lfs f2, lbl_80883824
    addi r3, r3, lbl_807850E0@l
    lfs f1, lbl_80883828
    li r30, 0x1
    lfs f0, lbl_8088382C
    li r11, 0x2
    li r10, 0x3
    li r9, 0x3c
    li r8, 0x5
    li r0, 0x96
    lis r4, fn_80272C6C@ha
    lis r5, fn_80272CF0@ha
    stw r3, 0x0(r28)
    addi r3, r28, 0x1538
    addi r4, r4, fn_80272C6C@l
    addi r5, r5, fn_80272CF0@l
    stw r31, 0x14b0(r28)
    li r6, 0xec
    li r7, 0x4
    stw r31, 0x14b4(r28)
    stw r31, 0x14b8(r28)
    stw r31, 0x14bc(r28)
    stw r31, 0x14c0(r28)
    stw r31, 0x14c4(r28)
    stw r31, 0x14c8(r28)
    stw r31, 0x14d4(r28)
    stw r31, 0x14dc(r28)
    stw r31, 0x14e0(r28)
    stw r31, 0x14e4(r28)
    stw r31, 0x14e8(r28)
    stw r31, 0x14ec(r28)
    stfs f3, 0x14f0(r28)
    stfs f3, 0x14f4(r28)
    stw r31, 0x14f8(r28)
    stw r30, 0x14fc(r28)
    stw r31, 0x1500(r28)
    stfs f2, 0x1504(r28)
    stw r12, 0x1508(r28)
    stw r12, 0x150c(r28)
    stfs f1, 0x1510(r28)
    stfs f0, 0x1514(r28)
    stw r11, 0x1518(r28)
    stw r31, 0x151c(r28)
    stw r10, 0x1520(r28)
    stw r9, 0x1524(r28)
    stw r8, 0x1528(r28)
    stw r0, 0x152c(r28)
    stw r31, 0x1530(r28)
    stw r31, 0x1534(r28)
    bl fn_806958E0
    stw r31, 0x18e8(r28)
    addi r3, r28, 0x18f4
    stw r31, 0x18ec(r28)
    stw r31, 0x18f0(r28)
    bl fn_800CB360
    lfs f0, lbl_80883820
    addi r3, r28, 0x1914
    stfs f0, 0x18f8(r28)
    stw r30, 0x1904(r28)
    stw r31, 0x1908(r28)
    stw r31, 0x190c(r28)
    stw r31, 0x1910(r28)
    bl fn_802377B8
    addi r3, r28, 0x1920
    bl fn_802377B8
    addi r3, r28, 0x192c
    bl fn_802377B8
    addi r27, r28, 0x1938
    mr r3, r27
    bl fn_80473E74
    lwz r5, 0x12a4(r28)
    lis r6, lbl_8078FBB0@ha
    lfs f1, lbl_80883830
    addi r6, r6, lbl_8078FBB0@l
    lwz r3, 0x958(r28)
    oris r5, r5, 0x40
    lfs f0, lbl_80883834
    lis r0, 0x4000
    ori r4, r3, 0x10
    stw r6, 0x0(r27)
    lis r3, lbl_80744AA4@ha
    addi r27, r1, 0x38
    addi r30, r3, lbl_80744AA4@l
    stfs f1, 0x1940(r28)
    mr r3, r30
    stfs f1, 0x1944(r28)
    stfs f1, 0x1948(r28)
    stfs f1, 0x194c(r28)
    stfs f1, 0x1950(r28)
    stfs f1, 0x1954(r28)
    stfs f1, 0x1958(r28)
    stfs f1, 0x195c(r28)
    stw r5, 0x12a4(r28)
    stw r4, 0x958(r28)
    stfs f0, 0x18fc(r28)
    stw r0, 0x1900(r28)
    stw r31, 0x1960(r28)
    stw r31, 0x1964(r28)
    stw r31, 0x38(r1)
    stw r31, 0x3c(r1)
    stw r31, 0x40(r1)
    bl strlen
    mr r26, r3
    mr r3, r27
    mr r4, r26
    bl fn_80013DC4
    lbz r0, 0x1c(r1)
    mr r3, r27
    stb r0, 0x18(r1)
    mr r6, r30
    add r7, r30, r26
    addi r8, r1, 0x18
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    addi r27, r30, 0x18
    stw r31, 0x2c(r1)
    addi r26, r1, 0x2c
    stw r31, 0x30(r1)
    mr r3, r27
    stw r31, 0x34(r1)
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
    addi r3, r29, 0x2c
    bl strlen
    lis r4, lbl_807772D0@ha
    mr r26, r3
    addi r4, r4, lbl_807772D0@l
    stw r4, 0x44(r1)
    addi r3, r1, 0x54
    li r5, 0x400
    stw r31, 0x48(r1)
    li r4, 0x0
    stw r31, 0x4c(r1)
    stw r31, 0x50(r1)
    stw r31, 0x674(r1)
    bl memset
    addi r3, r1, 0x654
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x44(r1)
    mr r5, r26
    addi r3, r1, 0x44
    addi r4, r29, 0x2c
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0x44
    addi r4, r4, lbl_807772B0@l
    stw r4, 0x44(r1)
    la r4, lbl_8087D708
    bl fn_8005B6E8
lbl_fn_8027278C_000019E4:
    addi r3, r1, 0x44
    bl fn_8005B3CC
    cmpwi r3, 0x0
    mr r26, r3
    beq lbl_fn_8027278C_00001A7C
    addi r4, r30, 0x2b
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_8027278C_00001A7C
    mr r3, r26
    addi r4, r30, 0x2c
    li r5, 0x8
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_8027278C_00001A6C
    lwz r0, 0x2c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_8027278C_00001A38
    lbz r0, 0x2c(r1)
    clrlwi r25, r0, 25
    b lbl_fn_8027278C_00001A3C
lbl_fn_8027278C_00001A38:
    lwz r25, 0x30(r1)
lbl_fn_8027278C_00001A3C:
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
lbl_fn_8027278C_00001A6C:
    addi r3, r1, 0x44
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_8027278C_000019E4
lbl_fn_8027278C_00001A7C:
    addi r3, r1, 0x20
    addi r4, r1, 0x38
    addi r5, r1, 0x2c
    bl fn_8006AFF8
    lwz r0, 0x20(r1)
    addi r3, r28, 0x1938
    srwi. r0, r0, 31
    bne lbl_fn_8027278C_00001AA4
    addi r4, r1, 0x21
    b lbl_fn_8027278C_00001AA8
lbl_fn_8027278C_00001AA4:
    lwz r4, 0x28(r1)
lbl_fn_8027278C_00001AA8:
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lis r3, lbl_80744AA4@ha
    lwz r0, 0x190c(r28)
    lwz r4, 0x14b4(r28)
    addi r29, r3, lbl_80744AA4@l
    lwz r3, 0x14c4(r28)
    subf r0, r0, r0
    subf r4, r4, r4
    stw r0, 0x190c(r28)
    subf r0, r3, r3
    addi r3, r28, 0x1914
    stw r4, 0x14b4(r28)
    addi r4, r29, 0x35
    stw r0, 0x14c4(r28)
    bl fn_8023780C
    addi r3, r28, 0x1920
    addi r4, r29, 0x4a
    bl fn_8023780C
    addi r3, r28, 0x192c
    addi r4, r29, 0x5f
    bl fn_8023780C
    li r26, 0x0
    li r25, 0x0
lbl_fn_8027278C_00001B10:
    add r3, r28, r25
    addi r4, r29, 0x78
    addi r3, r3, 0x15c4
    bl fn_8023780C
    add r3, r28, r25
    addi r4, r29, 0x8e
    addi r3, r3, 0x15d0
    bl fn_80237654
    add r3, r28, r25
    addi r4, r29, 0xa7
    addi r3, r3, 0x15dc
    bl fn_8023780C
    add r3, r28, r25
    addi r4, r29, 0xbd
    addi r3, r3, 0x15e8
    bl fn_80237654
    add r3, r28, r25
    addi r4, r29, 0xd5
    addi r3, r3, 0x15f4
    bl fn_80237654
    add r3, r28, r25
    addi r4, r29, 0xed
    addi r3, r3, 0x1600
    bl fn_8023780C
    add r3, r28, r25
    addi r4, r29, 0x102
    addi r3, r3, 0x160c
    bl fn_8023780C
    add r3, r28, r25
    addi r4, r29, 0x117
    addi r3, r3, 0x1618
    bl fn_8023780C
    addi r26, r26, 0x1
    addi r25, r25, 0xec
    cmpwi r26, 0x4
    blt lbl_fn_8027278C_00001B10
    lwz r0, 0x20(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8027278C_00001BB4
    lwz r3, 0x28(r1)
    bl dtor_80084684
lbl_fn_8027278C_00001BB4:
    lwz r0, 0x2c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8027278C_00001BC8
    lwz r3, 0x34(r1)
    bl dtor_80084684
lbl_fn_8027278C_00001BC8:
    lwz r0, 0x38(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8027278C_00001BDC
    lwz r3, 0x40(r1)
    bl dtor_80084684
lbl_fn_8027278C_00001BDC:
    addi r11, r1, 0x6a0
    mr r3, r28
    bl _restgpr_25
    lwz r0, 0x6a4(r1)
    mtlr r0
    addi r1, r1, 0x6a0
    blr
}
