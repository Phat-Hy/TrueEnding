#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_22(void);
extern void _restgpr_26(void);
extern void _savegpr_22(void);
extern void _savegpr_26(void);
extern void fn_8005B3CC(void);
extern void fn_8005B6E8(void);
extern void fn_80097C08(void);
extern void fn_80097CCC(void);
extern void fn_80097D7C(void);
extern void fn_800CB360(void);
extern void fn_800CB5C8(void);
extern void fn_800DC12C(void);
extern void fn_800EB7A0(void);
extern void fn_800EE360(void);
extern void fn_800EF7A0(void);
extern void fn_800F8548(void);
extern void fn_8013CB68(void);
extern void fn_8015495C(void);
extern void fn_8016DA4C(void);
extern void fn_8016E864(void);
extern void fn_8016E970(void);
extern void fn_8017039C(void);
extern void fn_801765D8(void);
extern void fn_80178A6C(void);
extern void fn_8020A81C(void);
extern void fn_80232B7C(void);
extern void fn_80237518(void);
extern void fn_80237654(void);
extern void fn_802377B8(void);
extern void fn_8023780C(void);
extern void fn_80239DAC(void);
extern void fn_8023A8B4(void);
extern void fn_802FCF14(void);
extern void fn_8035B694(void);
extern void fn_805F8E70(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_80682428(void);
extern void fn_80682544(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);
extern void fn_8068B100(void);
extern void fn_806958E0(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80748768[];
extern u8 lbl_80748A14[];
extern u8 lbl_807772B0[];
extern u8 lbl_807772D0[];
extern u8 lbl_80787C10[];

/* Small data declarations */
extern u32 lbl_8087D708;
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_80884980;
extern u32 lbl_80884994;
extern u32 lbl_80884998;
extern u32 lbl_808849BC;
extern u32 lbl_808849CC;
extern u32 lbl_808849D4;
extern u32 lbl_808849D8;
extern u32 lbl_808849F4;
extern u32 lbl_80884A00;
extern u32 lbl_80884A04;
extern u32 lbl_80884A08;
extern u32 lbl_80884A10;
extern u32 lbl_80884A14;
extern u32 lbl_80884A18;
extern u32 lbl_80884A20;
extern u32 lbl_80884A24;
extern u32 lbl_80884A28;
extern u32 lbl_80884A2C;
extern u32 lbl_80884A30;
extern u32 lbl_80884A34;
extern u32 lbl_80884A38;
extern u32 lbl_80884A3C;
extern u32 lbl_80884A40;
extern u32 lbl_80884A44;
extern u32 lbl_80884A48;
extern u32 lbl_80884A4C;

/* Function declarations */
void fn_802FB39C(void);
void fn_802FB6AC(void);
void fn_802FBA30(void);
void fn_802FBE00(void);
void fn_802FC188(void);
void fn_802FC2E0(void);
void fn_802FC840(void);
void fn_802FC848(void);
void fn_802FC850(void);

asm void fn_802FB39C(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x134(r1)
    stfd f31, 0x120(r1)
    psq_st f31, 0x128(r1), 0, 0
    stfd f30, 0x110(r1)
    psq_st f30, 0x118(r1), 0, 0
    stw r31, 0x10c(r1)
    stw r30, 0x108(r1)
    mr r30, r3
    lfs f30, 0x2e4(r3)
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f30, f1
    cror eq, gt, eq
    bne lbl_fn_802FB39C_00000120
    lwz r3, 0x1434(r30)
    lwz r4, 0x12a4(r30)
    lwz r0, 0x5c0(r30)
    cmpwi r3, 0x0
    oris r4, r4, 0x200
    stw r4, 0x12a4(r30)
    clrrwi r0, r0, 1
    stw r0, 0x5c0(r30)
    ble lbl_fn_802FB39C_00000104
    subi r0, r3, 0x1
    stw r0, 0x1434(r30)
    cmpwi r0, 0x1d
    bne lbl_fn_802FB39C_000002E8
    li r3, 0x0
    li r4, 0x0
    bl fn_80232B7C
    lfs f0, lbl_80884980
    li r3, -0x1
    lfs f1, lbl_80884994
    li r0, 0x1
    stfs f0, 0x64(r1)
    addi r4, r30, 0x15f4
    addi r5, r30, 0xb0
    addi r7, r1, 0x58
    stfs f0, 0x68(r1)
    addi r8, r1, 0x64
    addi r9, r1, 0x70
    li r6, 0x0
    stfs f0, 0x6c(r1)
    li r10, -0x1
    stfs f0, 0x58(r1)
    stfs f0, 0x5c(r1)
    stfs f0, 0x60(r1)
    stfs f1, 0x70(r1)
    stfs f1, 0x74(r1)
    stfs f1, 0x78(r1)
    stfs f1, 0x7c(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r12, 0x0(r30)
    mr r3, r30
    li r4, 0x1
    lwz r12, 0x9c(r12)
    mtctr r12
    bctrl
    b lbl_fn_802FB39C_000002E8
lbl_fn_802FB39C_00000104:
    ori r0, r4, 0x8000
    stw r0, 0x12a4(r30)
    mr r3, r30
    bl fn_801765D8
    mr r3, r30
    bl fn_800EE360
    b lbl_fn_802FB39C_000002E8
lbl_fn_802FB39C_00000120:
    lfs f2, 0x6c0(r30)
    addi r31, r1, 0x80
    psq_l f1, 0x6b8(r30), 0, 0
    fabs f3, f2
    lfs f0, lbl_80884998
    psq_st f1, 0x0(r31), 0, 0
    frsp f3, f3
    stfs f2, 0x88(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_802FB39C_0000016C
    lfs f3, 0x80(r1)
    lfs f0, lbl_80884980
    fcmpo cr0, f3, f0
    ble lbl_fn_802FB39C_00000160
    lfs f0, lbl_808849D4
    b lbl_fn_802FB39C_00000164
lbl_fn_802FB39C_00000160:
    lfs f0, lbl_808849D8
lbl_fn_802FB39C_00000164:
    stfs f0, 0x50(r1)
    b lbl_fn_802FB39C_00000180
lbl_fn_802FB39C_0000016C:
    frsp f2, f2
    lfs f1, 0x80(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x50(r1)
lbl_fn_802FB39C_00000180:
    lfs f0, 0x50(r1)
    addi r3, r1, 0x90
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80884980
    addi r4, r1, 0x40
    lfs f30, 0x98(r1)
    mr r5, r4
    lfs f31, 0x94(r1)
    addi r3, r1, 0xc0
    lfs f13, 0x90(r1)
    lfs f12, 0xa8(r1)
    lfs f11, 0xa4(r1)
    lfs f10, 0xa0(r1)
    lfs f9, 0xb8(r1)
    lfs f8, 0xb4(r1)
    lfs f7, 0xb0(r1)
    lfs f6, 0xbc(r1)
    lfs f5, 0xac(r1)
    lfs f4, 0x9c(r1)
    lfs f0, lbl_80884994
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x88(r1)
    stfs f3, 0xf0(r1)
    stfs f3, 0xf4(r1)
    stfs f3, 0xf8(r1)
    stfs f0, 0xfc(r1)
    stfs f13, 0x10(r1)
    stfs f31, 0x14(r1)
    stfs f30, 0x18(r1)
    stfs f13, 0xc0(r1)
    stfs f31, 0xc4(r1)
    stfs f30, 0xc8(r1)
    stfs f10, 0x1c(r1)
    stfs f11, 0x20(r1)
    stfs f12, 0x24(r1)
    stfs f10, 0xd0(r1)
    stfs f11, 0xd4(r1)
    stfs f12, 0xd8(r1)
    stfs f7, 0x28(r1)
    stfs f8, 0x2c(r1)
    stfs f9, 0x30(r1)
    stfs f7, 0xe0(r1)
    stfs f8, 0xe4(r1)
    stfs f9, 0xe8(r1)
    stfs f4, 0x34(r1)
    stfs f5, 0x38(r1)
    stfs f6, 0x3c(r1)
    stfs f4, 0xcc(r1)
    stfs f5, 0xdc(r1)
    stfs f6, 0xec(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x48(r1)
    bl fn_805F9750
    lfs f2, 0x48(r1)
    lfs f0, lbl_80884998
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802FB39C_0000029C
    lfs f3, 0x44(r1)
    lfs f0, lbl_80884980
    fcmpo cr0, f3, f0
    ble lbl_fn_802FB39C_0000028C
    lfs f0, lbl_808849D4
    b lbl_fn_802FB39C_00000290
lbl_fn_802FB39C_0000028C:
    lfs f0, lbl_808849D8
lbl_fn_802FB39C_00000290:
    fneg f0, f0
    stfs f0, 0x4c(r1)
    b lbl_fn_802FB39C_000002B0
lbl_fn_802FB39C_0000029C:
    lfs f1, 0x44(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x4c(r1)
lbl_fn_802FB39C_000002B0:
    lfs f2, lbl_80884980
    addi r3, r1, 0x4c
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r30
    psq_st f1, 0x0(r31), 0, 0
    fmr f1, f2
    mr r4, r31
    li r5, 0x0
    stfs f2, 0x88(r1)
    stfs f2, 0x54(r1)
    lfs f2, lbl_80884994
    bl fn_8013CB68
    li r0, 0x1e
    stw r0, 0x1434(r30)
lbl_fn_802FB39C_000002E8:
    lwz r0, 0x134(r1)
    psq_l f31, 0x128(r1), 0, 0
    lfd f31, 0x120(r1)
    psq_l f30, 0x118(r1), 0, 0
    lfd f30, 0x110(r1)
    lwz r31, 0x10c(r1)
    lwz r30, 0x108(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

asm void fn_802FB6AC(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
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
    lwz r0, 0x15b8(r3)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x2
    beq lbl_fn_802FB6AC_00000370
    li r5, 0x8
    bl fn_802FBE00
    cmpwi r3, 0x0
    bne lbl_fn_802FB6AC_00000668
    lwz r4, 0x15bc(r29)
    mr r3, r29
    bl fn_802FBA30
    b lbl_fn_802FB6AC_00000668
lbl_fn_802FB6AC_00000370:
    li r5, 0x7
    bl fn_802FBE00
    cmpwi r3, 0x0
    bne lbl_fn_802FB6AC_00000668
    lwz r3, 0x14f4(r29)
    li r0, 0x0
    stw r0, 0x14b0(r29)
    cmpwi r3, 0x0
    stw r0, 0x15cc(r29)
    beq lbl_fn_802FB6AC_000003A0
    lwz r0, 0x68(r3)
    b lbl_fn_802FB6AC_000003A4
lbl_fn_802FB6AC_000003A0:
    li r0, 0x5a
lbl_fn_802FB6AC_000003A4:
    stw r0, 0x15d4(r29)
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
    li r0, 0x7
    stw r0, 0x58c(r29)
    mr r3, r29
    li r4, 0x6
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
    lfs f0, lbl_80884998
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0x70(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_802FB6AC_000004B0
    lfs f3, 0x68(r1)
    lfs f0, lbl_80884980
    fcmpo cr0, f3, f0
    ble lbl_fn_802FB6AC_000004A4
    lfs f0, lbl_808849D4
    b lbl_fn_802FB6AC_000004A8
lbl_fn_802FB6AC_000004A4:
    lfs f0, lbl_808849D8
lbl_fn_802FB6AC_000004A8:
    stfs f0, 0x48(r1)
    b lbl_fn_802FB6AC_000004C4
lbl_fn_802FB6AC_000004B0:
    frsp f2, f2
    lfs f1, 0x68(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_802FB6AC_000004C4:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x80
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80884980
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
    lfs f0, lbl_80884994
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
    lfs f0, lbl_80884998
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802FB6AC_000005E0
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80884980
    fcmpo cr0, f3, f0
    ble lbl_fn_802FB6AC_000005D0
    lfs f0, lbl_808849D4
    b lbl_fn_802FB6AC_000005D4
lbl_fn_802FB6AC_000005D0:
    lfs f0, lbl_808849D8
lbl_fn_802FB6AC_000005D4:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_802FB6AC_000005F4
lbl_fn_802FB6AC_000005E0:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_802FB6AC_000005F4:
    addi r3, r1, 0x44
    lfs f2, lbl_80884980
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
    lfs f0, lbl_80884994
    li r0, 0x1
    stw r0, 0x3fc(r29)
    mr r3, r29
    stfs f0, 0x2fc(r29)
    bl fn_8016E864
    stfs f1, 0x2e8(r29)
    addi r3, r29, 0xb0
    lfs f1, lbl_80884980
    li r4, 0x0
    lfs f2, lbl_808849CC
    li r5, 0x145
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
lbl_fn_802FB6AC_00000668:
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

asm void fn_802FBA30(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    stfd f31, 0x110(r1)
    psq_st f31, 0x118(r1), 0, 0
    stfd f30, 0x100(r1)
    psq_st f30, 0x108(r1), 0, 0
    stw r31, 0xfc(r1)
    mr r31, r3
    stw r30, 0xf8(r1)
    stw r29, 0xf4(r1)
    mr r29, r4
    lwz r0, 0x15b8(r3)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x4
    beq lbl_fn_802FBA30_00000754
    li r5, 0x6
    bl fn_802FBE00
    cmpwi r3, 0x0
    bne lbl_fn_802FBA30_00000A38
    lwz r3, 0x14f4(r31)
    li r0, 0x0
    stw r0, 0x14b0(r31)
    cmpwi r3, 0x0
    stw r0, 0x15cc(r31)
    beq lbl_fn_802FBA30_00000704
    lwz r0, 0x68(r3)
    b lbl_fn_802FBA30_00000708
lbl_fn_802FBA30_00000704:
    li r0, 0x5a
lbl_fn_802FBA30_00000708:
    stw r0, 0x15d4(r31)
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
    li r0, 0x6
    stw r0, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    b lbl_fn_802FBA30_00000A38
lbl_fn_802FBA30_00000754:
    li r5, 0x8
    bl fn_802FBE00
    cmpwi r3, 0x0
    bne lbl_fn_802FBA30_00000A38
    li r0, 0x8
    stw r0, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lwz r3, 0x14f4(r31)
    li r0, 0x0
    stw r0, 0x14b0(r31)
    cmpwi r3, 0x0
    stw r0, 0x15cc(r31)
    beq lbl_fn_802FBA30_00000798
    lwz r0, 0x68(r3)
    b lbl_fn_802FBA30_0000079C
lbl_fn_802FBA30_00000798:
    li r0, 0x5a
lbl_fn_802FBA30_0000079C:
    stw r0, 0x15d4(r31)
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
    addi r3, r1, 0x74
    psq_l f1, 0x528(r29), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    addi r30, r1, 0x5c
    lfs f2, 0x530(r29)
    addi r5, r1, 0x50
    lfs f0, 0x530(r31)
    mr r3, r30
    lfs f5, 0x78(r1)
    mr r4, r30
    fsubs f6, f2, f0
    lfs f4, 0x52c(r31)
    lfs f3, 0x74(r1)
    lfs f0, 0x528(r31)
    fsubs f4, f5, f4
    stfs f2, 0x7c(r1)
    fsubs f0, f3, f0
    fmr f2, f6
    stfs f4, 0x54(r1)
    stfs f0, 0x50(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f6, 0x58(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x64(r1)
    bl fn_805F98D0
    lfs f2, 0x64(r1)
    addi r29, r1, 0x68
    psq_l f1, 0x0(r30), 0, 0
    fabs f3, f2
    lfs f0, lbl_80884998
    psq_st f1, 0x0(r29), 0, 0
    frsp f3, f3
    stfs f2, 0x70(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_802FBA30_00000880
    lfs f3, 0x68(r1)
    lfs f0, lbl_80884980
    fcmpo cr0, f3, f0
    ble lbl_fn_802FBA30_00000874
    lfs f0, lbl_808849D4
    b lbl_fn_802FBA30_00000878
lbl_fn_802FBA30_00000874:
    lfs f0, lbl_808849D8
lbl_fn_802FBA30_00000878:
    stfs f0, 0x48(r1)
    b lbl_fn_802FBA30_00000894
lbl_fn_802FBA30_00000880:
    frsp f2, f2
    lfs f1, 0x68(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_802FBA30_00000894:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x80
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80884980
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
    lfs f0, lbl_80884994
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
    lfs f0, lbl_80884998
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802FBA30_000009B0
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80884980
    fcmpo cr0, f3, f0
    ble lbl_fn_802FBA30_000009A0
    lfs f0, lbl_808849D4
    b lbl_fn_802FBA30_000009A4
lbl_fn_802FBA30_000009A0:
    lfs f0, lbl_808849D8
lbl_fn_802FBA30_000009A4:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_802FBA30_000009C4
lbl_fn_802FBA30_000009B0:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_802FBA30_000009C4:
    addi r3, r1, 0x44
    lfs f2, lbl_80884980
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
    stw r0, 0x15d8(r31)
    bl fn_80097CCC
    lfs f0, lbl_80884994
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80884980
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x142
    lfs f2, lbl_808849CC
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
lbl_fn_802FBA30_00000A38:
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

asm void fn_802FBE00(void)
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
    bne lbl_fn_802FBE00_00000AB0
    li r3, 0x0
    b lbl_fn_802FBE00_00000DBC
lbl_fn_802FBE00_00000AB0:
    lfs f0, 0x538(r3)
    addi r5, r1, 0x50
    stfs f0, 0x1544(r3)
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
    lfs f0, lbl_80884998
    stfs f4, 0x54(r1)
    frsp f4, f2
    stfs f3, 0x50(r1)
    fabs f3, f4
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    frsp f3, f3
    stfs f2, 0x64(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_802FBE00_00000B38
    lfs f3, 0x5c(r1)
    lfs f0, lbl_80884980
    fcmpo cr0, f3, f0
    ble lbl_fn_802FBE00_00000B2C
    lfs f0, lbl_808849D4
    b lbl_fn_802FBE00_00000B30
lbl_fn_802FBE00_00000B2C:
    lfs f0, lbl_808849D8
lbl_fn_802FBE00_00000B30:
    stfs f0, 0x48(r1)
    b lbl_fn_802FBE00_00000B4C
lbl_fn_802FBE00_00000B38:
    fmr f2, f4
    lfs f1, 0x5c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_802FBE00_00000B4C:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x68
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80884980
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
    lfs f0, lbl_80884994
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
    lfs f0, lbl_80884998
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802FBE00_00000C68
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80884980
    fcmpo cr0, f3, f0
    ble lbl_fn_802FBE00_00000C58
    lfs f0, lbl_808849D4
    b lbl_fn_802FBE00_00000C5C
lbl_fn_802FBE00_00000C58:
    lfs f0, lbl_808849D8
lbl_fn_802FBE00_00000C5C:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_802FBE00_00000C7C
lbl_fn_802FBE00_00000C68:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_802FBE00_00000C7C:
    addi r3, r1, 0x44
    lfs f4, lbl_80884980
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_80748768@ha
    psq_st f1, 0x0(r31), 0, 0
    fmr f2, f4
    lfs f0, 0x1544(r28)
    lfs f3, 0x60(r1)
    stfs f2, 0x64(r1)
    fsubs f1, f3, f0
    lfd f2, lbl_80748768@l(r3)
    stfs f4, 0x4c(r1)
    stfs f3, 0x1548(r28)
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_80884A00
    fcmpo cr0, f3, f0
    ble lbl_fn_802FBE00_00000CCC
    lfs f0, lbl_80884A04
    fsubs f3, f3, f0
lbl_fn_802FBE00_00000CCC:
    lfs f0, lbl_80884A08
    fcmpo cr0, f3, f0
    bge lbl_fn_802FBE00_00000CE0
    lfs f0, lbl_80884A04
    fadds f3, f3, f0
lbl_fn_802FBE00_00000CE0:
    lfs f0, lbl_80884A10
    fcmpo cr0, f0, f3
    bge lbl_fn_802FBE00_00000D00
    lfs f0, lbl_80884A14
    fcmpo cr0, f3, f0
    bge lbl_fn_802FBE00_00000D00
    li r3, 0x0
    b lbl_fn_802FBE00_00000DBC
lbl_fn_802FBE00_00000D00:
    lwz r3, 0x14f4(r28)
    li r0, 0x0
    stw r0, 0x1540(r28)
    cmpwi r3, 0x0
    stw r30, 0x153c(r28)
    stw r29, 0x15c4(r28)
    stw r0, 0x14b0(r28)
    stw r0, 0x15cc(r28)
    beq lbl_fn_802FBE00_00000D2C
    lwz r0, 0x68(r3)
    b lbl_fn_802FBE00_00000D30
lbl_fn_802FBE00_00000D2C:
    li r0, 0x5a
lbl_fn_802FBE00_00000D30:
    stw r0, 0x15d4(r28)
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
    lfs f1, lbl_80884980
    addi r3, r28, 0xb0
    li r4, 0x0
    bl fn_80097CCC
    lfs f3, lbl_80884994
    li r0, 0x1
    lfs f0, lbl_808849BC
    addi r3, r28, 0xb0
    stw r0, 0x3fc(r28)
    li r4, 0x0
    lfs f1, lbl_80884980
    li r5, 0x14d
    stfs f3, 0x2fc(r28)
    li r6, 0x0
    lfs f2, lbl_808849CC
    li r7, 0x0
    stfs f0, 0x2e8(r28)
    li r8, 0x1
    bl fn_80097C08
    li r3, 0x1
lbl_fn_802FBE00_00000DBC:
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

asm void fn_802FC188(void)
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
    lwz r3, 0x14f4(r31)
    li r0, 0x0
    stw r0, 0x14b0(r31)
    cmpwi r3, 0x0
    stw r0, 0x15cc(r31)
    beq lbl_fn_802FC188_00000E94
    lwz r0, 0x68(r3)
    b lbl_fn_802FC188_00000E98
lbl_fn_802FC188_00000E94:
    li r0, 0x5a
lbl_fn_802FC188_00000E98:
    stw r0, 0x15d4(r31)
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
    li r0, 0x2
    stw r0, 0x58c(r31)
    mr r3, r31
    li r4, 0x9
    bl fn_8016E970
    lfs f1, lbl_80884980
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097CCC
    lfs f0, lbl_80884994
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80884980
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x2e
    lfs f2, lbl_808849CC
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

asm void fn_802FC2E0(void)
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
    bl fn_802FBE00
    cmpwi r3, 0x0
    bne lbl_fn_802FC2E0_0000141C
    lwz r3, 0x14f4(r29)
    li r0, 0x0
    stw r0, 0x14b0(r29)
    cmpwi r3, 0x0
    stw r0, 0x15cc(r29)
    beq lbl_fn_802FC2E0_00000FFC
    lwz r0, 0x68(r3)
    b lbl_fn_802FC2E0_00001000
lbl_fn_802FC2E0_00000FFC:
    li r0, 0x5a
lbl_fn_802FC2E0_00001000:
    stw r0, 0x15d4(r29)
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
    lfs f1, lbl_80884980
    addi r3, r29, 0xb0
    li r4, 0x0
    bl fn_80097CCC
    lfs f0, lbl_80884994
    li r0, 0x1
    stw r0, 0x3fc(r29)
    addi r3, r29, 0xb0
    lfs f1, lbl_80884980
    li r4, 0x0
    stfs f0, 0x2fc(r29)
    li r5, 0x14
    lfs f2, lbl_808849CC
    li r6, 0x1
    stfs f0, 0x2e8(r29)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f26, lbl_80884980
    li r27, 0x0
    stw r27, 0x159c(r29)
    addi r26, r1, 0x50
    fmr f31, f26
    lfs f27, lbl_80884998
    fmr f28, f26
    lfs f30, lbl_80884994
    fmr f29, f26
    lfs f20, lbl_80884A04
    fmr f18, f26
    lfs f19, lbl_80884A00
    lfs f21, lbl_80884A08
    addi r25, r1, 0x74
    lfs f22, lbl_808849D4
    addi r24, r1, 0x5c
    lfs f24, lbl_808849BC
    addi r23, r1, 0x38
    lfs f23, lbl_808849D8
    addi r22, r1, 0x44
    li r31, -0x1
    li r30, 0x0
    lis r28, lbl_80748768@ha
    b lbl_fn_802FC2E0_00001384
lbl_fn_802FC2E0_000010E4:
    lwz r3, 0x15ac(r29)
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
    lwz r4, 0x15ac(r29)
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
    bge lbl_fn_802FC2E0_000011BC
    lfs f0, 0x5c(r1)
    fcmpo cr0, f0, f28
    ble lbl_fn_802FC2E0_000011B0
    lfs f0, lbl_808849D4
    b lbl_fn_802FC2E0_000011B4
lbl_fn_802FC2E0_000011B0:
    lfs f0, lbl_808849D8
lbl_fn_802FC2E0_000011B4:
    stfs f0, 0x48(r1)
    b lbl_fn_802FC2E0_000011D0
lbl_fn_802FC2E0_000011BC:
    frsp f2, f2
    lfs f1, 0x5c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_802FC2E0_000011D0:
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
    bge lbl_fn_802FC2E0_000012DC
    lfs f0, 0x3c(r1)
    fcmpo cr0, f0, f31
    ble lbl_fn_802FC2E0_000012CC
    lfs f0, lbl_808849D4
    b lbl_fn_802FC2E0_000012D0
lbl_fn_802FC2E0_000012CC:
    lfs f0, lbl_808849D8
lbl_fn_802FC2E0_000012D0:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_802FC2E0_000012F0
lbl_fn_802FC2E0_000012DC:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_802FC2E0_000012F0:
    psq_l f1, 0x0(r22), 0, 0
    fmr f2, f18
    psq_st f1, 0x0(r24), 0, 0
    lfs f0, 0x538(r29)
    lfs f3, 0x60(r1)
    stfs f2, 0x64(r1)
    fsubs f1, f3, f0
    lfd f2, lbl_80748768@l(r28)
    stfs f18, 0x4c(r1)
    bl fn_8068AEA8
    frsp f0, f1
    fcmpo cr0, f0, f19
    ble lbl_fn_802FC2E0_00001328
    fsubs f0, f0, f20
lbl_fn_802FC2E0_00001328:
    fcmpo cr0, f0, f21
    bge lbl_fn_802FC2E0_00001334
    fadds f0, f0, f20
lbl_fn_802FC2E0_00001334:
    fcmpo cr0, f0, f22
    bgt lbl_fn_802FC2E0_00001344
    fcmpo cr0, f0, f23
    bge lbl_fn_802FC2E0_00001348
lbl_fn_802FC2E0_00001344:
    fmuls f25, f25, f24
lbl_fn_802FC2E0_00001348:
    fcmpo cr0, f25, f26
    ble lbl_fn_802FC2E0_0000137C
    lwz r3, 0x15ac(r29)
    addi r4, r29, 0x15a0
    fmr f26, f25
    lwzx r5, r3, r27
    lwz r31, 0x0(r5)
    psq_l f1, 0x4(r5), 0, 0
    lfs f2, 0xc(r5)
    stfs f2, 0x15a8(r29)
    psq_st f1, 0x0(r4), 0, 0
    lwzx r0, r3, r27
    stw r0, 0x159c(r29)
lbl_fn_802FC2E0_0000137C:
    addi r30, r30, 0x1
    addi r27, r27, 0x4
lbl_fn_802FC2E0_00001384:
    lwz r0, 0x15b0(r29)
    cmplw r30, r0
    blt lbl_fn_802FC2E0_000010E4
    lwz r0, 0x159c(r29)
    cmpwi r0, 0x0
    beq lbl_fn_802FC2E0_000013B0
    mr r3, r29
    mr r4, r31
    li r5, 0x8
    bl fn_8017039C
    b lbl_fn_802FC2E0_0000141C
lbl_fn_802FC2E0_000013B0:
    lwz r3, 0x14f4(r29)
    li r0, 0x0
    stw r0, 0x14b0(r29)
    cmpwi r3, 0x0
    stw r0, 0x15cc(r29)
    beq lbl_fn_802FC2E0_000013D0
    lwz r0, 0x68(r3)
    b lbl_fn_802FC2E0_000013D4
lbl_fn_802FC2E0_000013D0:
    li r0, 0x5a
lbl_fn_802FC2E0_000013D4:
    stw r0, 0x15d4(r29)
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
lbl_fn_802FC2E0_0000141C:
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

asm void fn_802FC840(void)
{
    nofralloc
    lfs f1, lbl_80884A18
    blr
}

asm void fn_802FC848(void)
{
    nofralloc
    lfs f1, lbl_808849F4
    blr
}

asm void fn_802FC850(void)
{
    nofralloc
    stwu r1, -0x660(r1)
    mflr r0
    stw r0, 0x664(r1)
    addi r11, r1, 0x660
    bl _savegpr_26
    mr r31, r5
    lwz r5, 0x20(r5)
    mr r30, r3
    bl fn_8035B694
    lfs f0, lbl_80884A20
    lis r4, lbl_80787C10@ha
    li r28, 0x0
    stw r28, 0x14ec(r30)
    addi r4, r4, lbl_80787C10@l
    addi r3, r30, 0x1528
    stw r4, 0x0(r30)
    stw r28, 0x14f0(r30)
    stw r28, 0x14f4(r30)
    stw r28, 0x14f8(r30)
    stfs f0, 0x14fc(r30)
    stw r28, 0x151c(r30)
    stw r28, 0x1520(r30)
    bl fn_802377B8
    addi r3, r30, 0x1534
    bl fn_802377B8
    addi r3, r30, 0x1540
    bl fn_802377B8
    addi r3, r30, 0x154c
    bl fn_80237518
    addi r3, r30, 0x1558
    bl fn_802377B8
    addi r3, r30, 0x1564
    bl fn_802377B8
    addi r3, r30, 0x1570
    bl fn_802377B8
    addi r3, r30, 0x157c
    bl fn_802377B8
    addi r3, r30, 0x1588
    bl fn_80237518
    addi r3, r30, 0x1594
    bl fn_802377B8
    addi r3, r30, 0x15a0
    bl fn_802377B8
    addi r3, r30, 0x15ac
    bl fn_800CB360
    li r0, 0x1
    li r6, 0x3e8
    lis r4, fn_802FCF14@ha
    lis r5, fn_800EF7A0@ha
    stw r6, 0x15b4(r30)
    addi r3, r30, 0x1674
    addi r4, r4, fn_802FCF14@l
    addi r5, r5, fn_800EF7A0@l
    stw r28, 0x15b0(r30)
    li r6, 0x8
    li r7, 0x2
    stb r28, 0x15b8(r30)
    stw r28, 0x15bc(r30)
    stb r28, 0x15c4(r30)
    stw r28, 0x15e4(r30)
    stw r28, 0x15ec(r30)
    stw r0, 0x15f0(r30)
    stw r28, 0x1624(r30)
    stw r0, 0x1628(r30)
    stb r28, 0x1668(r30)
    stb r28, 0x1669(r30)
    stb r28, 0x166a(r30)
    bl fn_806958E0
    lfs f11, lbl_80884A28
    li r10, 0xf
    lfs f5, lbl_80884A40
    li r9, 0x1e
    li r7, 0x3
    li r0, 0xa
    lfs f12, lbl_80884A24
    li r8, 0x3c
    lfs f10, lbl_80884A2C
    li r6, 0x708
    lfs f9, lbl_80884A30
    li r5, 0x32
    lfs f8, lbl_80884A34
    lis r29, lbl_80748A14@ha
    lfs f7, lbl_80884A38
    addi r3, r30, 0x1528
    lfs f6, lbl_80884A3C
    addi r4, r29, lbl_80748A14@l
    lfs f4, lbl_80884A44
    lfs f3, lbl_80884A48
    lfs f0, lbl_80884A4C
    stw r28, 0x168c(r30)
    stw r28, 0x1690(r30)
    stfs f12, 0x1694(r30)
    stw r10, 0x1698(r30)
    stw r9, 0x169c(r30)
    stw r8, 0x16a0(r30)
    stfs f11, 0x16a4(r30)
    stfs f10, 0x16ac(r30)
    stw r7, 0x16b0(r30)
    stfs f11, 0x16b4(r30)
    stfs f9, 0x16b8(r30)
    stfs f8, 0x16bc(r30)
    stfs f7, 0x16c0(r30)
    stfs f6, 0x16c4(r30)
    stfs f5, 0x16c8(r30)
    stw r28, 0x16cc(r30)
    stw r6, 0x16d0(r30)
    stw r7, 0x16d4(r30)
    stw r5, 0x16d8(r30)
    stw r0, 0x16dc(r30)
    stfs f5, 0x16e0(r30)
    stw r9, 0x16e4(r30)
    stw r0, 0x16e8(r30)
    stfs f4, 0x16ec(r30)
    stfs f3, 0x16f0(r30)
    stfs f0, 0x16f4(r30)
    stw r10, 0x16f8(r30)
    bl fn_8023780C
    addi r29, r29, lbl_80748A14@l
    addi r3, r30, 0x1534
    addi r4, r29, 0x16
    bl fn_8023780C
    addi r3, r30, 0x1588
    addi r4, r29, 0x2c
    bl fn_80237654
    addi r3, r30, 0x1540
    addi r4, r29, 0x42
    bl fn_8023780C
    addi r3, r30, 0x154c
    addi r4, r29, 0x58
    bl fn_80237654
    addi r3, r30, 0x1558
    addi r4, r29, 0x6e
    bl fn_8023780C
    addi r3, r30, 0x1564
    addi r4, r29, 0x84
    bl fn_8023780C
    addi r3, r30, 0x1570
    addi r4, r29, 0x99
    bl fn_8023780C
    addi r3, r30, 0x157c
    addi r4, r29, 0xae
    bl fn_8023780C
    addi r3, r30, 0x1594
    addi r4, r29, 0xc3
    bl fn_8023780C
    addi r3, r30, 0x15a0
    addi r4, r29, 0xd8
    bl fn_8023780C
    lwz r12, 0x1674(r30)
    addi r3, r30, 0x1674
    addi r4, r29, 0xe5
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lwz r12, 0x167c(r30)
    addi r3, r30, 0x167c
    addi r4, r29, 0x107
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lwz r3, 0x20(r31)
    subis r0, r3, 0x4
    cmplwi r0, 0x97c9
    bne lbl_fn_802FC850_0000175C
    lwz r3, 0x12a4(r30)
    lwz r0, 0x958(r30)
    oris r3, r3, 0x40
    stw r3, 0x12a4(r30)
    ori r0, r0, 0x10
    stw r0, 0x958(r30)
lbl_fn_802FC850_0000175C:
    addi r3, r31, 0x2c
    bl strlen
    lis r4, lbl_807772D0@ha
    li r0, 0x0
    addi r4, r4, lbl_807772D0@l
    stw r4, 0x14(r1)
    mr r28, r3
    addi r3, r1, 0x24
    stw r0, 0x18(r1)
    li r4, 0x0
    li r5, 0x400
    stw r0, 0x1c(r1)
    stw r0, 0x20(r1)
    stw r0, 0x644(r1)
    bl memset
    addi r3, r1, 0x624
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x14(r1)
    mr r5, r28
    addi r3, r1, 0x14
    addi r4, r31, 0x2c
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0x14
    addi r4, r4, lbl_807772B0@l
    stw r4, 0x14(r1)
    la r4, lbl_8087D708
    bl fn_8005B6E8
    lis r31, lbl_80748A14@ha
    addi r31, r31, lbl_80748A14@l
lbl_fn_802FC850_000017E4:
    addi r3, r1, 0x14
    bl fn_8005B3CC
    cmpwi r3, 0x0
    mr r28, r3
    beq lbl_fn_802FC850_00001880
    addi r4, r31, 0x129
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_802FC850_00001880
    mr r3, r28
    addi r4, r31, 0x12a
    li r5, 0x5
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_802FC850_00001830
    addi r3, r28, 0x6
    bl fn_800DC12C
    stw r3, 0x1500(r30)
    b lbl_fn_802FC850_000017E4
lbl_fn_802FC850_00001830:
    mr r3, r28
    addi r4, r31, 0x131
    li r5, 0x5
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_802FC850_00001858
    addi r3, r28, 0x6
    bl fn_800DC12C
    stw r3, 0x1504(r30)
    b lbl_fn_802FC850_000017E4
lbl_fn_802FC850_00001858:
    mr r3, r28
    addi r4, r31, 0x138
    li r5, 0x5
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_802FC850_000017E4
    addi r3, r28, 0x6
    bl fn_800DC12C
    stw r3, 0x1508(r30)
    b lbl_fn_802FC850_000017E4
lbl_fn_802FC850_00001880:
    mr r8, r30
    li r11, 0x0
    li r3, 0x0
    li r0, 0x1
lbl_fn_802FC850_00001890:
    lwz r4, lbl_8087F430
    li r6, 0x0
    lwz r5, 0x1500(r8)
    li r9, 0x0
    lwz r7, 0x10d8(r4)
    lwz r4, 0x78(r7)
    mtctr r4
    cmplwi r4, 0x0
    ble lbl_fn_802FC850_000018DC
lbl_fn_802FC850_000018B4:
    lwz r10, 0x7c(r7)
    lwzx r4, r10, r9
    cmpw r5, r4
    bne lbl_fn_802FC850_000018D0
    mulli r4, r6, 0x28
    add r4, r10, r4
    b lbl_fn_802FC850_000018E0
lbl_fn_802FC850_000018D0:
    addi r9, r9, 0x28
    addi r6, r6, 0x1
    bdnz lbl_fn_802FC850_000018B4
lbl_fn_802FC850_000018DC:
    li r4, 0x0
lbl_fn_802FC850_000018E0:
    cmpwi r4, 0x0
    beq lbl_fn_802FC850_000018F0
    stw r4, 0x150c(r8)
    b lbl_fn_802FC850_000018F8
lbl_fn_802FC850_000018F0:
    stw r3, 0x150c(r8)
    stb r0, 0x1668(r30)
lbl_fn_802FC850_000018F8:
    addi r11, r11, 0x1
    addi r8, r8, 0x4
    cmpwi r11, 0x3
    blt lbl_fn_802FC850_00001890
    lwz r3, lbl_8087F430
    li r4, 0x0
    li r5, 0x0
    lwz r11, 0x10d8(r3)
    lwz r0, 0x78(r11)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_802FC850_00001950
lbl_fn_802FC850_00001928:
    lwz r3, 0x7c(r11)
    lwzx r0, r3, r5
    cmpwi r0, 0x385
    bne lbl_fn_802FC850_00001944
    mulli r0, r4, 0x28
    add r0, r3, r0
    b lbl_fn_802FC850_00001954
lbl_fn_802FC850_00001944:
    addi r5, r5, 0x28
    addi r4, r4, 0x1
    bdnz lbl_fn_802FC850_00001928
lbl_fn_802FC850_00001950:
    li r0, 0x0
lbl_fn_802FC850_00001954:
    cmpwi r0, 0x0
    beq lbl_fn_802FC850_000019BC
    stw r0, 0x1600(r30)
    li r4, 0x0
    li r5, 0x0
    lwz r0, 0x78(r11)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_802FC850_000019A0
lbl_fn_802FC850_00001978:
    lwz r3, 0x7c(r11)
    lwzx r0, r3, r5
    cmpwi r0, 0x385
    bne lbl_fn_802FC850_00001994
    mulli r0, r4, 0x28
    add r3, r3, r0
    b lbl_fn_802FC850_000019A4
lbl_fn_802FC850_00001994:
    addi r5, r5, 0x28
    addi r4, r4, 0x1
    bdnz lbl_fn_802FC850_00001978
lbl_fn_802FC850_000019A0:
    li r3, 0x0
lbl_fn_802FC850_000019A4:
    psq_l f1, 0x4(r3), 0, 0
    addi r4, r30, 0x1608
    lfs f2, 0xc(r3)
    stfs f2, 0x1610(r30)
    psq_st f1, 0x0(r4), 0, 0
    b lbl_fn_802FC850_000019C4
lbl_fn_802FC850_000019BC:
    li r0, 0x1
    stb r0, 0x166a(r30)
lbl_fn_802FC850_000019C4:
    addi r10, r1, 0x8
    li r31, 0x321
    li r27, 0x0
    li r3, 0x0
    li r4, 0x0
    li r0, 0x1
lbl_fn_802FC850_000019DC:
    add r29, r30, r4
    li r26, 0x0
    li r5, 0x0
    li r6, 0x0
lbl_fn_802FC850_000019EC:
    add r7, r29, r6
    mr r8, r31
    stw r31, 0x14c4(r7)
    li r9, 0x0
    li r12, 0x0
    lwz r7, 0x78(r11)
    mtctr r7
    cmplwi r7, 0x0
    addi r31, r31, 0x1
    ble lbl_fn_802FC850_00001A3C
lbl_fn_802FC850_00001A14:
    lwz r28, 0x7c(r11)
    lwzx r7, r28, r12
    cmpw r8, r7
    bne lbl_fn_802FC850_00001A30
    mulli r7, r9, 0x28
    add r7, r28, r7
    b lbl_fn_802FC850_00001A40
lbl_fn_802FC850_00001A30:
    addi r12, r12, 0x28
    addi r9, r9, 0x1
    bdnz lbl_fn_802FC850_00001A14
lbl_fn_802FC850_00001A3C:
    li r7, 0x0
lbl_fn_802FC850_00001A40:
    cmpwi r7, 0x0
    beq lbl_fn_802FC850_00001A70
    psq_l f1, 0x4(r7), 0, 0
    add r8, r30, r3
    psq_st f1, 0x0(r10), 0, 0
    add r8, r8, r5
    lfs f2, 0xc(r7)
    lfs f0, 0x8(r1)
    stfs f0, 0x1638(r8)
    stfs f2, 0x10(r1)
    stfs f2, 0x163c(r8)
    b lbl_fn_802FC850_00001A74
lbl_fn_802FC850_00001A70:
    stb r0, 0x1669(r30)
lbl_fn_802FC850_00001A74:
    addi r26, r26, 0x1
    addi r6, r6, 0x4
    cmpwi r26, 0x2
    addi r5, r5, 0x8
    blt lbl_fn_802FC850_000019EC
    addi r27, r27, 0x1
    addi r4, r4, 0x8
    cmpwi r27, 0x2
    addi r3, r3, 0x10
    blt lbl_fn_802FC850_000019DC
    li r0, 0x44d
    stw r0, 0x14d4(r30)
    li r0, 0x44e
    li r4, 0x0
    stw r0, 0x14d8(r30)
    li r0, 0x44f
    li r5, 0x0
    stw r0, 0x14dc(r30)
    li r0, 0x450
    stw r0, 0x14e0(r30)
    li r0, 0x451
    stw r0, 0x14e4(r30)
    li r0, 0x452
    stw r0, 0x14e8(r30)
    lwz r0, 0x78(r11)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_802FC850_00001B0C
lbl_fn_802FC850_00001AE4:
    lwz r3, 0x7c(r11)
    lwzx r0, r3, r5
    cmpwi r0, 0x450
    bne lbl_fn_802FC850_00001B00
    mulli r0, r4, 0x28
    add r3, r3, r0
    b lbl_fn_802FC850_00001B10
lbl_fn_802FC850_00001B00:
    addi r5, r5, 0x28
    addi r4, r4, 0x1
    bdnz lbl_fn_802FC850_00001AE4
lbl_fn_802FC850_00001B0C:
    li r3, 0x0
lbl_fn_802FC850_00001B10:
    lwz r0, 0x12a4(r30)
    lis r31, lbl_80748A14@ha
    addi r31, r31, lbl_80748A14@l
    stw r3, 0x1604(r30)
    oris r0, r0, 0x20
    stw r0, 0x12a4(r30)
    addi r3, r31, 0x13f
    bl fn_8020A81C
    stw r3, 0x166c(r30)
    addi r3, r31, 0x14c
    bl fn_8020A81C
    lfs f0, lbl_80884A20
    addi r11, r1, 0x660
    stw r3, 0x1670(r30)
    mr r3, r30
    stfs f0, 0x1618(r30)
    stfs f0, 0x161c(r30)
    stfs f0, 0x1620(r30)
    stfs f0, 0x15f4(r30)
    stfs f0, 0x15f8(r30)
    stfs f0, 0x15fc(r30)
    bl _restgpr_26
    lwz r0, 0x664(r1)
    mtlr r0
    addi r1, r1, 0x660
    blr
}
