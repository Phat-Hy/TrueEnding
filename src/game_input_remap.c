#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_17(void);
extern void _restgpr_22(void);
extern void _restgpr_25(void);
extern void _savegpr_17(void);
extern void _savegpr_22(void);
extern void _savegpr_25(void);
extern void dtor_80084684(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_8005B3CC(void);
extern void fn_8005B5F8(void);
extern void fn_8005B6E8(void);
extern void fn_8006AFF8(void);
extern void fn_800844D8(void);
extern void fn_80087994(void);
extern void fn_8008937C(void);
extern void fn_800897D8(void);
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_80097CCC(void);
extern void fn_800CB360(void);
extern void fn_800CB3A0(void);
extern void fn_800CB5C8(void);
extern void fn_800D246C(void);
extern void fn_800DC12C(void);
extern void fn_800DC288(void);
extern void fn_800F8548(void);
extern void fn_80103F60(void);
extern void fn_80108378(void);
extern void fn_8013655C(void);
extern void fn_8015495C(void);
extern void fn_8016DA4C(void);
extern void fn_8016E970(void);
extern void fn_8017039C(void);
extern void fn_80178A6C(void);
extern void fn_80219E6C(void);
extern void fn_80232B7C(void);
extern void fn_802377B8(void);
extern void fn_8023780C(void);
extern void fn_8023781C(void);
extern void fn_80237874(void);
extern void fn_80239DAC(void);
extern void fn_8023A680(void);
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
extern void fn_80680770(void);
extern void fn_80680CF8(void);
extern void fn_80682428(void);
extern void fn_80682544(void);
extern void fn_80684600(void);
extern void fn_80686EA4(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);
extern void fn_8068B100(void);
extern int sprintf(char* str, const char* format, ...);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80748540[];
extern u8 lbl_80748558[];
extern u8 lbl_80748780[];
extern u8 lbl_80775A88[];
extern u8 lbl_807772B0[];
extern u8 lbl_807772D0[];
extern u8 lbl_80787AA8[];
extern u8 lbl_8078FBB0[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087D708;
extern u32 lbl_8087EF10;
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F8A0;
extern u32 lbl_808848DC;
extern u32 lbl_808848E4;
extern u32 lbl_808848FC;
extern u32 lbl_80884900;
extern u32 lbl_80884914;
extern u32 lbl_80884920;
extern u32 lbl_80884924;
extern u32 lbl_80884934;
extern u32 lbl_8088493C;
extern u32 lbl_80884940;
extern u32 lbl_80884944;
extern u32 lbl_80884958;
extern u32 lbl_8088495C;
extern u32 lbl_80884960;
extern u32 lbl_80884964;
extern u32 lbl_80884968;
extern u32 lbl_80884970;
extern u32 lbl_80884974;
extern u32 lbl_80884978;
extern u32 lbl_8088497C;
extern u32 lbl_80884980;
extern u32 lbl_80884984;
extern u32 lbl_80884988;
extern u32 lbl_8088498C;
extern u32 lbl_80884990;
extern u32 lbl_80884994;
extern u32 lbl_80884998;
extern u32 lbl_8088499C;

/* Function declarations */
void fn_802F62A0(void);
void fn_802F66CC(void);
void fn_802F693C(void);
void fn_802F6E54(void);
void fn_802F6E5C(void);
void fn_802F6E64(void);
void fn_802F726C(void);
void fn_802F73FC(void);

asm void fn_802F62A0(void)
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
    bne lbl_fn_802F62A0_0000004C
    li r3, 0x0
    b lbl_fn_802F62A0_000003FC
lbl_fn_802F62A0_0000004C:
    lfs f0, 0x538(r3)
    addi r5, r1, 0x50
    stfs f0, 0x1538(r3)
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
    lfs f0, lbl_808848E4
    stfs f4, 0x54(r1)
    frsp f4, f2
    stfs f3, 0x50(r1)
    fabs f3, f4
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    frsp f3, f3
    stfs f2, 0x64(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_802F62A0_000000D4
    lfs f3, 0x5c(r1)
    lfs f0, lbl_808848DC
    fcmpo cr0, f3, f0
    ble lbl_fn_802F62A0_000000C8
    lfs f0, lbl_80884920
    b lbl_fn_802F62A0_000000CC
lbl_fn_802F62A0_000000C8:
    lfs f0, lbl_80884924
lbl_fn_802F62A0_000000CC:
    stfs f0, 0x48(r1)
    b lbl_fn_802F62A0_000000E8
lbl_fn_802F62A0_000000D4:
    fmr f2, f4
    lfs f1, 0x5c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_802F62A0_000000E8:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x68
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808848DC
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
    lfs f0, lbl_808848FC
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
    lfs f0, lbl_808848E4
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802F62A0_00000204
    lfs f3, 0x3c(r1)
    lfs f0, lbl_808848DC
    fcmpo cr0, f3, f0
    ble lbl_fn_802F62A0_000001F4
    lfs f0, lbl_80884920
    b lbl_fn_802F62A0_000001F8
lbl_fn_802F62A0_000001F4:
    lfs f0, lbl_80884924
lbl_fn_802F62A0_000001F8:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_802F62A0_00000218
lbl_fn_802F62A0_00000204:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_802F62A0_00000218:
    addi r3, r1, 0x44
    lfs f4, lbl_808848DC
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_80748540@ha
    psq_st f1, 0x0(r31), 0, 0
    fmr f2, f4
    lfs f0, 0x1538(r28)
    lfs f3, 0x60(r1)
    stfs f2, 0x64(r1)
    fsubs f1, f3, f0
    lfd f2, lbl_80748540@l(r3)
    stfs f4, 0x4c(r1)
    stfs f3, 0x153c(r28)
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_8088493C
    fcmpo cr0, f3, f0
    ble lbl_fn_802F62A0_00000268
    lfs f0, lbl_80884940
    fsubs f3, f3, f0
lbl_fn_802F62A0_00000268:
    lfs f0, lbl_80884944
    fcmpo cr0, f3, f0
    bge lbl_fn_802F62A0_0000027C
    lfs f0, lbl_80884940
    fadds f3, f3, f0
lbl_fn_802F62A0_0000027C:
    lfs f0, lbl_80884958
    fcmpo cr0, f0, f3
    bge lbl_fn_802F62A0_0000029C
    lfs f0, lbl_8088495C
    fcmpo cr0, f3, f0
    bge lbl_fn_802F62A0_0000029C
    li r3, 0x0
    b lbl_fn_802F62A0_000003FC
lbl_fn_802F62A0_0000029C:
    li r0, 0x0
    stw r0, 0x1534(r28)
    mr r4, r28
    stw r30, 0x1530(r28)
    stw r29, 0x1588(r28)
    lwz r3, lbl_8087F048
    bl fn_80103F60
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_802F62A0_00000374
    mr r4, r29
    bl fn_80108378
    li r0, 0x8
    lfs f0, lbl_808848DC
    li r4, 0x0
    mtctr r0
lbl_fn_802F62A0_000002DC:
    cmpw r4, r3
    beq lbl_fn_802F62A0_000002E8
    stfs f0, 0x128(r31)
lbl_fn_802F62A0_000002E8:
    addi r4, r4, 0x1
    cmpw r4, r3
    beq lbl_fn_802F62A0_000002F8
    stfs f0, 0x12c(r31)
lbl_fn_802F62A0_000002F8:
    addi r4, r4, 0x1
    cmpw r4, r3
    beq lbl_fn_802F62A0_00000308
    stfs f0, 0x130(r31)
lbl_fn_802F62A0_00000308:
    addi r4, r4, 0x1
    cmpw r4, r3
    beq lbl_fn_802F62A0_00000318
    stfs f0, 0x134(r31)
lbl_fn_802F62A0_00000318:
    addi r4, r4, 0x1
    cmpw r4, r3
    beq lbl_fn_802F62A0_00000328
    stfs f0, 0x138(r31)
lbl_fn_802F62A0_00000328:
    addi r4, r4, 0x1
    cmpw r4, r3
    beq lbl_fn_802F62A0_00000338
    stfs f0, 0x13c(r31)
lbl_fn_802F62A0_00000338:
    addi r4, r4, 0x1
    cmpw r4, r3
    beq lbl_fn_802F62A0_00000348
    stfs f0, 0x140(r31)
lbl_fn_802F62A0_00000348:
    addi r4, r4, 0x1
    cmpw r4, r3
    beq lbl_fn_802F62A0_00000358
    stfs f0, 0x144(r31)
lbl_fn_802F62A0_00000358:
    addi r4, r4, 0x1
    cmpw r4, r3
    beq lbl_fn_802F62A0_00000368
    stfs f0, 0x148(r31)
lbl_fn_802F62A0_00000368:
    addi r31, r31, 0x24
    addi r4, r4, 0x1
    bdnz lbl_fn_802F62A0_000002DC
lbl_fn_802F62A0_00000374:
    lwz r3, 0x14ec(r28)
    li r0, 0x0
    stw r0, 0x1590(r28)
    cmpwi r3, 0x0
    beq lbl_fn_802F62A0_00000390
    lwz r0, 0x68(r3)
    b lbl_fn_802F62A0_00000394
lbl_fn_802F62A0_00000390:
    li r0, 0x5a
lbl_fn_802F62A0_00000394:
    stw r0, 0x15a0(r28)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r28)
    li r0, 0x9
    lfs f1, lbl_808848DC
    addi r3, r28, 0xb0
    stw r0, 0x58c(r28)
    li r4, 0x0
    bl fn_80097CCC
    lfs f3, lbl_808848FC
    li r0, 0x1
    lfs f0, lbl_80884960
    addi r3, r28, 0xb0
    stw r0, 0x3fc(r28)
    li r4, 0x0
    lfs f1, lbl_808848DC
    li r5, 0x14d
    stfs f3, 0x2fc(r28)
    li r6, 0x0
    lfs f2, lbl_80884900
    li r7, 0x0
    stfs f0, 0x2e8(r28)
    li r8, 0x1
    bl fn_80097C08
    li r3, 0x1
lbl_fn_802F62A0_000003FC:
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

asm void fn_802F66CC(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    li r5, 0x0
    li r6, 0x0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r3
    mr r4, r31
    stw r30, 0x38(r1)
    stw r29, 0x34(r1)
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    addi r3, r31, 0x1514
    li r4, 0x0
    li r5, 0x0
    bl fn_800CB5C8
    lwz r3, 0x14ec(r31)
    li r0, 0x0
    stw r0, 0x1590(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802F66CC_00000488
    lwz r0, 0x68(r3)
    b lbl_fn_802F66CC_0000048C
lbl_fn_802F66CC_00000488:
    li r0, 0x5a
lbl_fn_802F66CC_0000048C:
    stw r0, 0x15a0(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r3, r31
    lwz r12, 0x0(r31)
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
    lfs f1, lbl_808848DC
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097CCC
    lfs f0, lbl_808848FC
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_808848DC
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x2e
    lfs f2, lbl_80884900
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r4, lbl_8087F8A0
    lis r3, lbl_80748558@ha
    addi r3, r3, lbl_80748558@l
    li r5, 0x0
    lwz r30, 0x48(r4)
    addi r4, r3, 0x1a4
    lwz r3, 0x648(r30)
    addi r29, r3, 0x10
    mr r3, r29
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802F66CC_00000560
    li r0, 0x0
    b lbl_fn_802F66CC_0000056C
lbl_fn_802F66CC_00000560:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r29)
    add r0, r3, r0
lbl_fn_802F66CC_0000056C:
    lfs f0, lbl_808848DC
    cmpwi r0, 0x0
    stfs f0, 0x24(r1)
    stfs f0, 0x28(r1)
    stfs f0, 0x2c(r1)
    beq lbl_fn_802F66CC_000005F8
    lis r4, lbl_80748558@ha
    mr r3, r29
    addi r4, r4, lbl_80748558@l
    li r5, 0x0
    addi r4, r4, 0x1a4
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802F66CC_000005AC
    li r5, 0x0
    b lbl_fn_802F66CC_000005B8
lbl_fn_802F66CC_000005AC:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r29)
    add r5, r3, r0
lbl_fn_802F66CC_000005B8:
    lfs f3, 0x1c(r5)
    addi r4, r1, 0x18
    lfs f0, 0xc(r5)
    addi r3, r1, 0x24
    lfs f2, 0x2c(r5)
    stfs f0, 0x18(r1)
    lfs f0, lbl_80884964
    stfs f3, 0x1c(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lfs f3, 0x28(r1)
    stfs f2, 0x20(r1)
    fadds f0, f3, f0
    stfs f2, 0x2c(r1)
    stfs f0, 0x28(r1)
    b lbl_fn_802F66CC_0000061C
lbl_fn_802F66CC_000005F8:
    lfs f2, 0x530(r31)
    addi r3, r1, 0x24
    psq_l f1, 0x528(r31), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lfs f0, lbl_80884914
    lfs f3, 0x28(r1)
    stfs f2, 0x2c(r1)
    fsubs f0, f3, f0
    stfs f0, 0x28(r1)
lbl_fn_802F66CC_0000061C:
    mr r3, r31
    li r4, 0x0
    bl fn_80232B7C
    lwz r3, lbl_8087F3C0
    li r0, 0x0
    li r5, -0x1
    lfs f1, lbl_808848FC
    stw r0, 0x8(r1)
    li r0, 0x1
    addi r4, r31, 0x15b8
    addi r8, r1, 0x24
    stw r5, 0xc(r1)
    addi r9, r30, 0x534
    li r5, -0x1
    li r6, 0x0
    stw r0, 0x10(r1)
    li r7, 0x0
    li r10, 0x0
    bl fn_8023A680
    lis r3, lbl_807C7030@ha
    addi r3, r3, lbl_807C7030@l
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x8(r3)
    stfs f2, 0x6c0(r31)
    psq_st f1, 0x6b8(r31), 0, 0
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_802F693C(void)
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
    bl fn_802F62A0
    cmpwi r3, 0x0
    bne lbl_fn_802F693C_00000B2C
    lwz r3, 0x14ec(r29)
    li r0, 0x0
    stw r0, 0x1590(r29)
    cmpwi r3, 0x0
    beq lbl_fn_802F693C_00000750
    lwz r0, 0x68(r3)
    b lbl_fn_802F693C_00000754
lbl_fn_802F693C_00000750:
    li r0, 0x5a
lbl_fn_802F693C_00000754:
    stw r0, 0x15a0(r29)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r29)
    li r0, 0xc
    lfs f1, lbl_808848DC
    addi r3, r29, 0xb0
    stw r0, 0x58c(r29)
    li r4, 0x0
    bl fn_80097CCC
    lfs f0, lbl_808848FC
    li r0, 0x1
    stw r0, 0x3fc(r29)
    addi r3, r29, 0xb0
    lfs f1, lbl_808848DC
    li r4, 0x0
    stfs f0, 0x2fc(r29)
    li r5, 0x14
    lfs f2, lbl_80884900
    li r6, 0x1
    stfs f0, 0x2e8(r29)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f26, lbl_808848DC
    li r27, 0x0
    lwz r0, 0x1580(r29)
    addi r26, r1, 0x50
    fmr f31, f26
    stw r0, 0x1584(r29)
    fmr f28, f26
    lfs f27, lbl_808848E4
    fmr f29, f26
    stw r27, 0x1560(r29)
    fmr f18, f26
    lfs f30, lbl_808848FC
    lfs f20, lbl_80884940
    addi r25, r1, 0x74
    lfs f19, lbl_8088493C
    addi r24, r1, 0x5c
    lfs f21, lbl_80884944
    addi r23, r1, 0x38
    lfs f22, lbl_80884920
    addi r22, r1, 0x44
    lfs f24, lbl_80884960
    li r31, -0x1
    lfs f23, lbl_80884924
    li r30, 0x0
    lis r28, lbl_80748540@ha
    b lbl_fn_802F693C_00000ABC
lbl_fn_802F693C_0000081C:
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
    bge lbl_fn_802F693C_000008F4
    lfs f0, 0x5c(r1)
    fcmpo cr0, f0, f28
    ble lbl_fn_802F693C_000008E8
    lfs f0, lbl_80884920
    b lbl_fn_802F693C_000008EC
lbl_fn_802F693C_000008E8:
    lfs f0, lbl_80884924
lbl_fn_802F693C_000008EC:
    stfs f0, 0x48(r1)
    b lbl_fn_802F693C_00000908
lbl_fn_802F693C_000008F4:
    frsp f2, f2
    lfs f1, 0x5c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_802F693C_00000908:
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
    bge lbl_fn_802F693C_00000A14
    lfs f0, 0x3c(r1)
    fcmpo cr0, f0, f31
    ble lbl_fn_802F693C_00000A04
    lfs f0, lbl_80884920
    b lbl_fn_802F693C_00000A08
lbl_fn_802F693C_00000A04:
    lfs f0, lbl_80884924
lbl_fn_802F693C_00000A08:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_802F693C_00000A28
lbl_fn_802F693C_00000A14:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_802F693C_00000A28:
    psq_l f1, 0x0(r22), 0, 0
    fmr f2, f18
    psq_st f1, 0x0(r24), 0, 0
    lfs f0, 0x538(r29)
    lfs f3, 0x60(r1)
    stfs f2, 0x64(r1)
    fsubs f1, f3, f0
    lfd f2, lbl_80748540@l(r28)
    stfs f18, 0x4c(r1)
    bl fn_8068AEA8
    frsp f0, f1
    fcmpo cr0, f0, f19
    ble lbl_fn_802F693C_00000A60
    fsubs f0, f0, f20
lbl_fn_802F693C_00000A60:
    fcmpo cr0, f0, f21
    bge lbl_fn_802F693C_00000A6C
    fadds f0, f0, f20
lbl_fn_802F693C_00000A6C:
    fcmpo cr0, f0, f22
    bgt lbl_fn_802F693C_00000A7C
    fcmpo cr0, f0, f23
    bge lbl_fn_802F693C_00000A80
lbl_fn_802F693C_00000A7C:
    fmuls f25, f25, f24
lbl_fn_802F693C_00000A80:
    fcmpo cr0, f25, f26
    ble lbl_fn_802F693C_00000AB4
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
lbl_fn_802F693C_00000AB4:
    addi r30, r30, 0x1
    addi r27, r27, 0x4
lbl_fn_802F693C_00000ABC:
    lwz r0, 0x1574(r29)
    cmplw r30, r0
    blt lbl_fn_802F693C_0000081C
    lwz r0, 0x1560(r29)
    cmpwi r0, 0x0
    beq lbl_fn_802F693C_00000AE8
    lwz r5, 0x15a8(r29)
    mr r3, r29
    mr r4, r31
    bl fn_8017039C
    b lbl_fn_802F693C_00000B2C
lbl_fn_802F693C_00000AE8:
    lwz r3, 0x14ec(r29)
    li r0, 0x0
    stw r0, 0x1590(r29)
    cmpwi r3, 0x0
    beq lbl_fn_802F693C_00000B04
    lwz r0, 0x68(r3)
    b lbl_fn_802F693C_00000B08
lbl_fn_802F693C_00000B04:
    li r0, 0x5a
lbl_fn_802F693C_00000B08:
    stw r0, 0x15a0(r29)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r29)
    li r0, 0x6
    mr r3, r29
    li r4, 0x3
    stw r0, 0x58c(r29)
    bl fn_8016E970
lbl_fn_802F693C_00000B2C:
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

asm void fn_802F6E54(void)
{
    nofralloc
    lfs f1, lbl_80884968
    blr
}

asm void fn_802F6E5C(void)
{
    nofralloc
    lfs f1, lbl_80884934
    blr
}

asm void fn_802F6E64(void)
{
    nofralloc
    stwu r1, -0x6a0(r1)
    mflr r0
    stw r0, 0x6a4(r1)
    addi r11, r1, 0x6a0
    bl _savegpr_25
    mr r31, r5
    lwz r5, 0x20(r5)
    mr r30, r3
    bl fn_8035B694
    lis r3, lbl_80787AA8@ha
    li r29, 0x0
    addi r3, r3, lbl_80787AA8@l
    stw r3, 0x0(r30)
    addi r3, r30, 0x14d8
    stw r29, 0x14b0(r30)
    stw r29, 0x14b4(r30)
    bl fn_800CB360
    addi r3, r30, 0x14dc
    bl fn_802377B8
    lfs f1, lbl_80884970
    li r3, 0x3c
    lfs f0, lbl_80884974
    li r0, 0xf
    stw r3, 0x14e8(r30)
    addi r3, r30, 0x151c
    stw r0, 0x14ec(r30)
    stfs f1, 0x14f0(r30)
    stfs f0, 0x14f8(r30)
    bl fn_800CB360
    addi r3, r30, 0x1520
    bl fn_802377B8
    lfs f0, lbl_80884994
    li r4, 0x2d
    lfs f5, lbl_80884980
    li r0, 0x5a
    lfs f7, lbl_80884978
    li r5, 0x12c
    lfs f6, lbl_8088497C
    addi r3, r30, 0x15f4
    lfs f4, lbl_80884984
    lfs f3, lbl_80884988
    lfs f2, lbl_8088498C
    lfs f1, lbl_80884990
    stfs f7, 0x152c(r30)
    stfs f6, 0x1534(r30)
    stw r29, 0x1538(r30)
    stw r29, 0x1540(r30)
    stfs f5, 0x1544(r30)
    stfs f5, 0x1548(r30)
    stw r29, 0x1558(r30)
    stw r29, 0x155c(r30)
    stw r29, 0x1560(r30)
    stw r5, 0x1574(r30)
    stw r4, 0x157c(r30)
    stw r4, 0x1580(r30)
    stfs f4, 0x1584(r30)
    stfs f3, 0x1588(r30)
    stfs f2, 0x158c(r30)
    stw r29, 0x1590(r30)
    stfs f1, 0x1594(r30)
    stw r29, 0x15ac(r30)
    stw r29, 0x15b0(r30)
    stw r29, 0x15b4(r30)
    stw r29, 0x15b8(r30)
    stw r29, 0x15bc(r30)
    stw r29, 0x15c8(r30)
    stw r29, 0x15cc(r30)
    stw r0, 0x15d0(r30)
    stw r0, 0x15d4(r30)
    stw r29, 0x15dc(r30)
    stfs f0, 0x15e0(r30)
    stfs f0, 0x15e4(r30)
    stfs f0, 0x15e8(r30)
    stfs f0, 0x15ec(r30)
    stfs f0, 0x15f0(r30)
    bl fn_802377B8
    addi r3, r30, 0x1600
    bl fn_802377B8
    addi r28, r30, 0x160c
    mr r3, r28
    bl fn_80473E74
    lis r4, lbl_8078FBB0@ha
    lis r3, lbl_80748780@ha
    addi r4, r4, lbl_8078FBB0@l
    stw r4, 0x0(r28)
    addi r28, r3, lbl_80748780@l
    addi r27, r1, 0x38
    stw r29, 0x1614(r30)
    mr r3, r28
    stw r29, 0x1618(r30)
    stw r29, 0x38(r1)
    stw r29, 0x3c(r1)
    stw r29, 0x40(r1)
    bl strlen
    mr r26, r3
    mr r3, r27
    mr r4, r26
    bl fn_80013DC4
    lbz r0, 0x1c(r1)
    mr r3, r27
    stb r0, 0x18(r1)
    mr r6, r28
    add r7, r28, r26
    addi r8, r1, 0x18
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    addi r27, r28, 0x18
    stw r29, 0x2c(r1)
    addi r26, r1, 0x2c
    stw r29, 0x30(r1)
    mr r3, r27
    stw r29, 0x34(r1)
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
    addi r3, r31, 0x2c
    bl strlen
    lis r4, lbl_807772D0@ha
    mr r26, r3
    addi r4, r4, lbl_807772D0@l
    stw r4, 0x44(r1)
    addi r3, r1, 0x54
    li r5, 0x400
    stw r29, 0x48(r1)
    li r4, 0x0
    stw r29, 0x4c(r1)
    stw r29, 0x50(r1)
    stw r29, 0x674(r1)
    bl memset
    addi r3, r1, 0x654
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x44(r1)
    mr r5, r26
    addi r3, r1, 0x44
    addi r4, r31, 0x2c
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0x44
    addi r4, r4, lbl_807772B0@l
    stw r4, 0x44(r1)
    la r4, lbl_8087D708
    bl fn_8005B6E8
lbl_fn_802F6E64_00000E3C:
    addi r3, r1, 0x44
    bl fn_8005B3CC
    cmpwi r3, 0x0
    mr r26, r3
    beq lbl_fn_802F6E64_00000ED4
    addi r4, r28, 0x2b
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_802F6E64_00000ED4
    mr r3, r26
    addi r4, r28, 0x2c
    li r5, 0x8
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_802F6E64_00000EC4
    lwz r0, 0x2c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_802F6E64_00000E90
    lbz r0, 0x2c(r1)
    clrlwi r25, r0, 25
    b lbl_fn_802F6E64_00000E94
lbl_fn_802F6E64_00000E90:
    lwz r25, 0x30(r1)
lbl_fn_802F6E64_00000E94:
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
lbl_fn_802F6E64_00000EC4:
    addi r3, r1, 0x44
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_802F6E64_00000E3C
lbl_fn_802F6E64_00000ED4:
    addi r3, r1, 0x20
    addi r4, r1, 0x38
    addi r5, r1, 0x2c
    bl fn_8006AFF8
    lwz r0, 0x20(r1)
    addi r3, r30, 0x160c
    srwi. r0, r0, 31
    bne lbl_fn_802F6E64_00000EFC
    addi r4, r1, 0x21
    b lbl_fn_802F6E64_00000F00
lbl_fn_802F6E64_00000EFC:
    lwz r4, 0x28(r1)
lbl_fn_802F6E64_00000F00:
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lfs f0, lbl_80884990
    li r3, 0x3f8
    stfs f0, 0x568(r30)
    bl fn_80219E6C
    stw r3, 0x1530(r30)
    li r3, 0x3f7
    bl fn_80219E6C
    stw r3, 0x14f4(r30)
    li r3, 0x400
    bl fn_80219E6C
    lis r31, lbl_80748780@ha
    stw r3, 0x1578(r30)
    addi r31, r31, lbl_80748780@l
    addi r3, r30, 0x15f4
    addi r4, r31, 0x35
    bl fn_8023780C
    addi r3, r30, 0x1520
    addi r4, r31, 0x4a
    bl fn_8023780C
    addi r3, r30, 0x14dc
    addi r4, r31, 0x60
    bl fn_8023780C
    addi r3, r30, 0x1600
    addi r4, r31, 0x75
    bl fn_8023780C
    lwz r0, 0x20(r1)
    srwi. r0, r0, 31
    beq lbl_fn_802F6E64_00000F88
    lwz r3, 0x28(r1)
    bl dtor_80084684
lbl_fn_802F6E64_00000F88:
    lwz r0, 0x2c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_802F6E64_00000F9C
    lwz r3, 0x34(r1)
    bl dtor_80084684
lbl_fn_802F6E64_00000F9C:
    lwz r0, 0x38(r1)
    srwi. r0, r0, 31
    beq lbl_fn_802F6E64_00000FB0
    lwz r3, 0x40(r1)
    bl dtor_80084684
lbl_fn_802F6E64_00000FB0:
    addi r11, r1, 0x6a0
    mr r3, r30
    bl _restgpr_25
    lwz r0, 0x6a4(r1)
    mtlr r0
    addi r1, r1, 0x6a0
    blr
}

asm void fn_802F726C(void)
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
    beq lbl_fn_802F726C_0000113C
    addic. r0, r3, 0x1614
    beq lbl_fn_802F726C_00001018
    lwz r4, 0x1614(r3)
    cmpwi r4, 0x0
    beq lbl_fn_802F726C_00001018
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_802F726C_00001018
    bl fn_800897D8
lbl_fn_802F726C_00001018:
    addic. r3, r29, 0x160c
    beq lbl_fn_802F726C_00001028
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802F726C_00001028:
    addic. r31, r29, 0x1600
    beq lbl_fn_802F726C_00001048
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_802F726C_00001048
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802F726C_00001048:
    addic. r31, r29, 0x15f4
    beq lbl_fn_802F726C_00001068
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_802F726C_00001068
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802F726C_00001068:
    addic. r4, r29, 0x15ac
    beq lbl_fn_802F726C_00001098
    beq lbl_fn_802F726C_00001098
    beq lbl_fn_802F726C_00001098
    beq lbl_fn_802F726C_00001098
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_802F726C_00001098
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_802F726C_00001098:
    addic. r4, r29, 0x1558
    beq lbl_fn_802F726C_000010C8
    beq lbl_fn_802F726C_000010C8
    beq lbl_fn_802F726C_000010C8
    beq lbl_fn_802F726C_000010C8
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_802F726C_000010C8
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_802F726C_000010C8:
    addic. r31, r29, 0x1520
    beq lbl_fn_802F726C_000010E8
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_802F726C_000010E8
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802F726C_000010E8:
    addi r3, r29, 0x151c
    li r4, -0x1
    bl fn_800CB3A0
    addic. r31, r29, 0x14dc
    beq lbl_fn_802F726C_00001114
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_802F726C_00001114
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802F726C_00001114:
    addi r3, r29, 0x14d8
    li r4, -0x1
    bl fn_800CB3A0
    mr r3, r29
    li r4, 0x0
    bl fn_8035B78C
    cmpwi r30, 0x0
    ble lbl_fn_802F726C_0000113C
    mr r3, r29
    bl dtor_80084684
lbl_fn_802F726C_0000113C:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_802F73FC(void)
{
    nofralloc
    stwu r1, -0x6e0(r1)
    mflr r0
    stw r0, 0x6e4(r1)
    addi r11, r1, 0x6a0
    stfd f31, 0x6d0(r1)
    psq_st f31, 0x6d8(r1), 0, 0
    stfd f30, 0x6c0(r1)
    psq_st f30, 0x6c8(r1), 0, 0
    stfd f29, 0x6b0(r1)
    psq_st f29, 0x6b8(r1), 0, 0
    stfd f28, 0x6a0(r1)
    psq_st f28, 0x6a8(r1), 0, 0
    bl _savegpr_17
    mr r18, r3
    bl fn_8013655C
    cmpwi r3, 0x0
    bne lbl_fn_802F73FC_00001B30
    lwz r3, 0x1438(r18)
    cmpwi r3, 0x0
    beq lbl_fn_802F73FC_000011BC
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_802F73FC_00001B30
lbl_fn_802F73FC_000011BC:
    addi r3, r18, 0x15f4
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802F73FC_00001B30
    addi r3, r18, 0x1520
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802F73FC_00001B30
    addi r3, r18, 0x14dc
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802F73FC_00001B30
    addi r3, r18, 0x1600
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802F73FC_00001B30
    addi r3, r18, 0x160c
    bl fn_80473F50
    cmpwi r3, 0x0
    bne lbl_fn_802F73FC_00001B30
    addi r3, r18, 0x160c
    bl fn_80470580
    cmpwi r3, 0x0
    beq lbl_fn_802F73FC_00001A5C
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_802F73FC_00001A5C
    lwz r0, 0x10d8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_802F73FC_00001A5C
    addi r3, r18, 0x160c
    bl fn_8047059C
    mr r20, r3
    addi r3, r18, 0x160c
    bl fn_80470580
    lis r4, lbl_807772D0@ha
    li r22, 0x0
    addi r4, r4, lbl_807772D0@l
    stw r4, 0x28(r1)
    mr r19, r3
    addi r3, r1, 0x38
    stw r22, 0x2c(r1)
    li r4, 0x0
    li r5, 0x400
    stw r22, 0x30(r1)
    stw r22, 0x34(r1)
    stw r22, 0x658(r1)
    bl memset
    addi r3, r1, 0x638
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x28(r1)
    mr r4, r19
    mr r5, r20
    addi r3, r1, 0x28
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0x28
    addi r4, r4, lbl_807772B0@l
    stw r4, 0x28(r1)
    la r4, lbl_8087D708
    bl fn_8005B6E8
    lis r4, lbl_80748780@ha
    lis r3, __files@ha
    lfs f31, lbl_8088499C
    addi r25, r4, lbl_80748780@l
    lfs f30, lbl_8088497C
    addi r26, r3, __files@l
    lfs f28, lbl_80884974
    addi r20, r1, 0x14
    lfs f29, lbl_80884998
    lis r29, 0xcccd
    lis r24, 0x4000
    lis r28, 0x1555
    lis r30, 0x2aab
    lis r31, lbl_80775A88@ha
lbl_fn_802F73FC_000012F8:
    addi r3, r1, 0x28
    bl fn_8005B3CC
    mr r17, r3
    addi r4, r25, 0x8e
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802F73FC_0000133C
    addi r3, r1, 0x28
    bl fn_8005B3CC
    addi r4, r25, 0x9b
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802F73FC_00001A4C
    lwz r0, 0x15b8(r18)
    ori r0, r0, 0x2
    stw r0, 0x15b8(r18)
    b lbl_fn_802F73FC_00001A4C
lbl_fn_802F73FC_0000133C:
    mr r3, r17
    addi r4, r25, 0x9e
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802F73FC_00001378
    addi r3, r1, 0x28
    bl fn_8005B3CC
    addi r4, r25, 0x9b
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802F73FC_00001A4C
    lwz r0, 0x15b8(r18)
    ori r0, r0, 0x4
    stw r0, 0x15b8(r18)
    b lbl_fn_802F73FC_00001A4C
lbl_fn_802F73FC_00001378:
    mr r3, r17
    addi r4, r25, 0xa5
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802F73FC_000013B4
    addi r3, r1, 0x28
    bl fn_8005B3CC
    addi r4, r25, 0x9b
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802F73FC_00001A4C
    lwz r0, 0x15b8(r18)
    ori r0, r0, 0x1
    stw r0, 0x15b8(r18)
    b lbl_fn_802F73FC_00001A4C
lbl_fn_802F73FC_000013B4:
    mr r3, r17
    addi r4, r25, 0xaa
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802F73FC_000013F0
    addi r3, r1, 0x28
    bl fn_8005B3CC
    addi r4, r25, 0x9b
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802F73FC_00001A4C
    lwz r0, 0x15b8(r18)
    ori r0, r0, 0x8
    stw r0, 0x15b8(r18)
    b lbl_fn_802F73FC_00001A4C
lbl_fn_802F73FC_000013F0:
    mr r3, r17
    addi r4, r25, 0xb2
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802F73FC_0000142C
    addi r3, r1, 0x28
    bl fn_8005B3CC
    addi r4, r25, 0x9b
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802F73FC_00001A4C
    lwz r0, 0x15b8(r18)
    ori r0, r0, 0x10
    stw r0, 0x15b8(r18)
    b lbl_fn_802F73FC_00001A4C
lbl_fn_802F73FC_0000142C:
    mr r3, r17
    addi r4, r25, 0xbe
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802F73FC_00001468
    addi r3, r1, 0x28
    bl fn_8005B3CC
    addi r4, r25, 0xc9
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802F73FC_00001A4C
    lwz r0, 0x12a8(r18)
    ori r0, r0, 0x40
    stw r0, 0x12a8(r18)
    b lbl_fn_802F73FC_00001A4C
lbl_fn_802F73FC_00001468:
    mr r3, r17
    addi r4, r25, 0xcd
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802F73FC_00001710
lbl_fn_802F73FC_0000147C:
    addi r3, r1, 0x28
    bl fn_8005B3CC
    bl fn_800DC12C
    lwz r4, lbl_8087F430
    mr r23, r3
    li r5, 0x0
    li r6, 0x0
    lwz r4, 0x10d8(r4)
    lwz r0, 0x78(r4)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_802F73FC_000014D4
lbl_fn_802F73FC_000014AC:
    lwz r7, 0x7c(r4)
    lwzx r0, r7, r6
    cmpw r3, r0
    bne lbl_fn_802F73FC_000014C8
    mulli r0, r5, 0x28
    add r21, r7, r0
    b lbl_fn_802F73FC_000014D8
lbl_fn_802F73FC_000014C8:
    addi r6, r6, 0x28
    addi r5, r5, 0x1
    bdnz lbl_fn_802F73FC_000014AC
lbl_fn_802F73FC_000014D4:
    li r21, 0x0
lbl_fn_802F73FC_000014D8:
    cmpwi r21, 0x0
    beq lbl_fn_802F73FC_00001704
    lwz r4, 0x15b0(r18)
    lwz r3, 0x15b4(r18)
    cmplw r4, r3
    bge lbl_fn_802F73FC_0000150C
    addi r4, r4, 0x1
    lwz r3, 0x15ac(r18)
    slwi r0, r4, 2
    stw r4, 0x15b0(r18)
    add r3, r3, r0
    stw r21, -0x4(r3)
    b lbl_fn_802F73FC_00001704
lbl_fn_802F73FC_0000150C:
    subi r0, r24, 0x1
    subf r0, r3, r0
    cmplwi r0, 0x1
    bge lbl_fn_802F73FC_00001530
    addi r4, r25, 0xd8
    addi r3, r26, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802F73FC_00001530:
    lwz r3, 0x15b0(r18)
    addi r4, r18, 0x15b4
    lwz r27, 0x15b4(r18)
    subi r0, r24, 0x1
    addi r3, r3, 0x1
    stw r22, 0x14(r1)
    subf r3, r27, r3
    subf r0, r27, r0
    cmplw r3, r0
    stw r22, 0x18(r1)
    stw r22, 0x1c(r1)
    stw r4, 0x20(r1)
    stw r22, 0x24(r1)
    stw r3, 0x8(r1)
    ble lbl_fn_802F73FC_00001580
    addi r4, r25, 0xd8
    addi r3, r26, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802F73FC_00001580:
    addi r0, r28, 0x5555
    cmplw r27, r0
    bge lbl_fn_802F73FC_000015C8
    addi r4, r27, 0x1
    subi r5, r29, 0x3333
    slwi r3, r4, 2
    lwz r0, 0x8(r1)
    subf r4, r4, r3
    mulhwu r4, r5, r4
    addi r3, r1, 0x10
    srwi r4, r4, 2
    stw r4, 0x10(r1)
    cmplw r4, r0
    bge lbl_fn_802F73FC_000015BC
    addi r3, r1, 0x8
lbl_fn_802F73FC_000015BC:
    lwz r0, 0x0(r3)
    add r19, r27, r0
    b lbl_fn_802F73FC_00001604
lbl_fn_802F73FC_000015C8:
    subi r0, r30, 0x5556
    cmplw r27, r0
    bge lbl_fn_802F73FC_00001600
    addi r3, r27, 0x1
    lwz r0, 0x8(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_802F73FC_000015F4
    addi r3, r1, 0x8
lbl_fn_802F73FC_000015F4:
    lwz r0, 0x0(r3)
    add r19, r27, r0
    b lbl_fn_802F73FC_00001604
lbl_fn_802F73FC_00001600:
    subi r19, r24, 0x1
lbl_fn_802F73FC_00001604:
    subi r0, r24, 0x1
    cmplw r19, r0
    ble lbl_fn_802F73FC_00001624
    addi r4, r25, 0xd8
    addi r3, r26, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802F73FC_00001624:
    slwi r3, r19, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_fn_802F73FC_0000164C
    addi r3, r26, 0xa0
    addi r4, r31, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802F73FC_0000164C:
    lwz r5, 0x15b0(r18)
    lwz r3, 0x18(r1)
    slwi r0, r5, 2
    stw r19, 0x1c(r1)
    slwi r4, r3, 2
    addi r3, r3, 0x1
    add r0, r27, r0
    stw r3, 0x18(r1)
    stwx r21, r4, r0
    lwz r0, 0x15b0(r18)
    lwz r19, 0x15ac(r18)
    slwi r0, r0, 2
    add r0, r19, r0
    mr r4, r19
    subf r0, r19, r0
    srawi r0, r0, 2
    addze r21, r0
    subf r0, r21, r5
    stw r0, 0x24(r1)
    slwi r17, r21, 2
    slwi r0, r0, 2
    mr r5, r17
    add r3, r27, r0
    bl memcpy
    mr r3, r19
    mr r5, r17
    li r4, 0x0
    bl memset
    lwz r0, 0x18(r1)
    cmpwi r20, 0x0
    lwz r3, 0x15ac(r18)
    add r5, r0, r21
    mr r0, r27
    lwz r6, 0x15b4(r18)
    lwz r4, 0x1c(r1)
    stw r4, 0x15b4(r18)
    stw r6, 0x1c(r1)
    stw r0, 0x15ac(r18)
    stw r3, 0x14(r1)
    stw r5, 0x15b0(r18)
    stw r22, 0x18(r1)
    beq lbl_fn_802F73FC_00001704
    cmpwi r3, 0x0
    beq lbl_fn_802F73FC_00001704
    stw r22, 0x18(r1)
    bl dtor_80084684
lbl_fn_802F73FC_00001704:
    cmpwi r23, 0x0
    bne lbl_fn_802F73FC_0000147C
    b lbl_fn_802F73FC_00001A4C
lbl_fn_802F73FC_00001710:
    mr r3, r17
    addi r4, r25, 0xec
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802F73FC_00001738
    addi r3, r1, 0x28
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x14e8(r18)
    b lbl_fn_802F73FC_00001A4C
lbl_fn_802F73FC_00001738:
    mr r3, r17
    addi r4, r25, 0xfd
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802F73FC_00001760
    addi r3, r1, 0x28
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x14ec(r18)
    b lbl_fn_802F73FC_00001A4C
lbl_fn_802F73FC_00001760:
    mr r3, r17
    addi r4, r25, 0x10f
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802F73FC_00001788
    addi r3, r1, 0x28
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x152c(r18)
    b lbl_fn_802F73FC_00001A4C
lbl_fn_802F73FC_00001788:
    mr r3, r17
    addi r4, r25, 0x11a
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802F73FC_000017B0
    addi r3, r1, 0x28
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x14f0(r18)
    b lbl_fn_802F73FC_00001A4C
lbl_fn_802F73FC_000017B0:
    mr r3, r17
    addi r4, r25, 0x125
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802F73FC_000017D8
    addi r3, r1, 0x28
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x1594(r18)
    b lbl_fn_802F73FC_00001A4C
lbl_fn_802F73FC_000017D8:
    mr r3, r17
    addi r4, r25, 0x132
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802F73FC_00001800
    addi r3, r1, 0x28
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x1598(r18)
    b lbl_fn_802F73FC_00001A4C
lbl_fn_802F73FC_00001800:
    mr r3, r17
    addi r4, r25, 0x13e
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802F73FC_00001844
    addi r3, r1, 0x28
    bl fn_8005B3CC
    bl fn_800DC288
    frsp f0, f1
    stfs f1, 0x1534(r18)
    fsubs f0, f0, f28
    fabs f0, f0
    frsp f0, f0
    fcmpo cr0, f0, f29
    bge lbl_fn_802F73FC_00001A4C
    stfs f30, 0x1534(r18)
    b lbl_fn_802F73FC_00001A4C
lbl_fn_802F73FC_00001844:
    mr r3, r17
    addi r4, r25, 0x149
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802F73FC_00001870
    addi r3, r1, 0x28
    bl fn_8005B3CC
    bl fn_800DC288
    fmuls f0, f31, f1
    stfs f0, 0x14f8(r18)
    b lbl_fn_802F73FC_00001A4C
lbl_fn_802F73FC_00001870:
    mr r3, r17
    addi r4, r25, 0x155
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802F73FC_00001898
    addi r3, r1, 0x28
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x1574(r18)
    b lbl_fn_802F73FC_00001A4C
lbl_fn_802F73FC_00001898:
    mr r3, r17
    addi r4, r25, 0x161
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802F73FC_000018C4
    addi r3, r1, 0x28
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x157c(r18)
    stw r3, 0x1580(r18)
    b lbl_fn_802F73FC_00001A4C
lbl_fn_802F73FC_000018C4:
    mr r3, r17
    addi r4, r25, 0x171
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802F73FC_000018EC
    addi r3, r1, 0x28
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x1584(r18)
    b lbl_fn_802F73FC_00001A4C
lbl_fn_802F73FC_000018EC:
    mr r3, r17
    addi r4, r25, 0x17d
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802F73FC_00001914
    addi r3, r1, 0x28
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x1588(r18)
    b lbl_fn_802F73FC_00001A4C
lbl_fn_802F73FC_00001914:
    mr r3, r17
    addi r4, r25, 0x18e
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802F73FC_0000193C
    addi r3, r1, 0x28
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x158c(r18)
    b lbl_fn_802F73FC_00001A4C
lbl_fn_802F73FC_0000193C:
    mr r3, r17
    addi r4, r25, 0x19d
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802F73FC_00001968
    addi r3, r1, 0x28
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x1530(r18)
    b lbl_fn_802F73FC_00001A4C
lbl_fn_802F73FC_00001968:
    mr r3, r17
    addi r4, r25, 0x1a6
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802F73FC_00001994
    addi r3, r1, 0x28
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x14f4(r18)
    b lbl_fn_802F73FC_00001A4C
lbl_fn_802F73FC_00001994:
    mr r3, r17
    addi r4, r25, 0x1af
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802F73FC_000019C0
    addi r3, r1, 0x28
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x1578(r18)
    b lbl_fn_802F73FC_00001A4C
lbl_fn_802F73FC_000019C0:
    mr r3, r17
    addi r4, r25, 0x1be
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802F73FC_000019F4
    addi r3, r1, 0x28
    bl fn_8005B3CC
    mr r5, r3
    addi r3, r18, 0x14fc
    addi r4, r25, 0x1cd
    crclr 6
    bl sprintf
    b lbl_fn_802F73FC_00001A4C
lbl_fn_802F73FC_000019F4:
    mr r3, r17
    addi r4, r25, 0x1d0
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802F73FC_00001A28
    addi r3, r1, 0x28
    bl fn_8005B3CC
    mr r5, r3
    addi r3, r18, 0x14b8
    addi r4, r25, 0x1cd
    crclr 6
    bl sprintf
    b lbl_fn_802F73FC_00001A4C
lbl_fn_802F73FC_00001A28:
    mr r3, r17
    addi r4, r25, 0x1d7
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802F73FC_00001A4C
    addi r3, r1, 0x28
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x15e0(r18)
lbl_fn_802F73FC_00001A4C:
    addi r3, r1, 0x28
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_802F73FC_000012F8
lbl_fn_802F73FC_00001A5C:
    lwz r0, 0x7ec(r18)
    ori r0, r0, 0x1c1
    oris r0, r0, 0x1
    ori r0, r0, 0x4010
    oris r0, r0, 0x300
    stw r0, 0x7ec(r18)
    bl fn_80680CF8
    lis r4, 0x8889
    lwz r0, 0x1614(r18)
    subi r4, r4, 0x7777
    lfs f0, 0x15e0(r18)
    mulhw r6, r4, r3
    cmpwi r0, 0x0
    lis r4, lbl_80748780@ha
    lwz r5, 0x15d0(r18)
    stfs f0, 0x1258(r18)
    addi r4, r4, lbl_80748780@l
    add r0, r6, r3
    addi r4, r4, 0x1e8
    srawi r0, r0, 5
    srwi r6, r0, 31
    add r0, r0, r6
    mulli r0, r0, 0x3c
    subf r0, r0, r3
    add r0, r5, r0
    stw r0, 0x15d0(r18)
    bne lbl_fn_802F73FC_00001AE4
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_802F73FC_00001AE4
    addi r3, r3, 0x10
    bl fn_8008937C
    stw r3, 0x1614(r18)
    b lbl_fn_802F73FC_00001AE8
lbl_fn_802F73FC_00001AE4:
    li r3, 0x0
lbl_fn_802F73FC_00001AE8:
    lis r4, lbl_80748780@ha
    addi r5, r18, 0x1618
    addi r4, r4, lbl_80748780@l
    li r6, 0x0
    addi r4, r4, 0x1f7
    li r7, 0x0
    bl fn_80087994
    lwz r3, 0x1438(r18)
    cmpwi r3, 0x0
    beq lbl_fn_802F73FC_00001B28
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x1438(r18)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_802F73FC_00001B28:
    li r3, 0x1
    b lbl_fn_802F73FC_00001B34
lbl_fn_802F73FC_00001B30:
    li r3, 0x0
lbl_fn_802F73FC_00001B34:
    addi r11, r1, 0x6a0
    psq_l f31, 0x6d8(r1), 0, 0
    lfd f31, 0x6d0(r1)
    psq_l f30, 0x6c8(r1), 0, 0
    lfd f30, 0x6c0(r1)
    psq_l f29, 0x6b8(r1), 0, 0
    lfd f29, 0x6b0(r1)
    psq_l f28, 0x6a8(r1), 0, 0
    lfd f28, 0x6a0(r1)
    bl _restgpr_17
    lwz r0, 0x6e4(r1)
    mtlr r0
    addi r1, r1, 0x6e0
    blr
}
