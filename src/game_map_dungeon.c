#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_24(void);
extern void _restgpr_27(void);
extern void _savegpr_24(void);
extern void _savegpr_27(void);
extern void fn_8004ED34(void);
extern void fn_80063764(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800C31F4(void);
extern void fn_800CB3A0(void);
extern void fn_801255C8(void);
extern void fn_80126214(void);
extern void fn_80128508(void);
extern void fn_80128A30(void);
extern void fn_80129954(void);
extern void fn_80129978(void);
extern void fn_80129A48(void);
extern void fn_80139560(void);
extern void fn_8015E7A0(void);
extern void fn_80161570(void);
extern void fn_8016EB48(void);
extern void fn_80182874(void);
extern void fn_80183860(void);
extern void fn_80370174(void);
extern void fn_803CC6B4(void);
extern void fn_803E3BE8(void);
extern void fn_804AAD68(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9990(void);
extern void fn_8068AE9C(void);
extern void fn_8068AEA4(void);

/* External data declarations */
extern u8 lbl_807380D8[];
extern u8 lbl_807380F8[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087EEB0;
extern u32 lbl_8087F098;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F430;
extern u32 lbl_8087F490;
extern u32 lbl_8087FA20;
extern u32 lbl_80881B78;
extern u32 lbl_80881B7C;
extern u32 lbl_80881B80;
extern u32 lbl_80881B88;
extern u32 lbl_80881B8C;
extern u32 lbl_80881B90;
extern u32 lbl_80881B94;
extern u32 lbl_80881BA4;
extern u32 lbl_80881BB0;
extern u32 lbl_80881BB4;
extern u32 lbl_80881BB8;
extern u32 lbl_80881BBC;
extern u32 lbl_80881BC0;
extern u32 lbl_80881BC4;
extern u32 lbl_80881BC8;
extern u32 lbl_80881BCC;
extern u32 lbl_80881BD0;
extern u32 lbl_80881BD4;
extern u32 lbl_80881BD8;
extern u32 lbl_80881BDC;
extern u32 lbl_80881BE0;
extern u32 lbl_80881BE4;
extern u32 lbl_80881BE8;
extern u32 lbl_80881BEC;
extern u32 lbl_80881BF0;
extern u32 lbl_80881BF4;

/* Function declarations */
void fn_8017E9D8(void);
void fn_8017F118(void);
void fn_8017F348(void);
void fn_8017F4A0(void);
void fn_8017FBEC(void);
void fn_8017FED0(void);

asm void fn_8017E9D8(void)
{
    nofralloc
    stwu r1, -0x1f0(r1)
    mflr r0
    stw r0, 0x1f4(r1)
    stfd f31, 0x1e0(r1)
    psq_st f31, 0x1e8(r1), 0, 0
    stfd f30, 0x1d0(r1)
    psq_st f30, 0x1d8(r1), 0, 0
    stw r31, 0x1cc(r1)
    mr r31, r3
    stw r30, 0x1c8(r1)
    stw r29, 0x1c4(r1)
    lwz r4, 0x14b4(r3)
    lwz r0, 0x5c0(r3)
    cmpwi r4, 0x0
    clrrwi r0, r0, 1
    stw r0, 0x5c0(r3)
    beq lbl_fn_8017E9D8_000006B4
    lwz r4, 0x560(r4)
    li r0, 0x1
    cmpwi r4, 0x64
    beq lbl_fn_8017E9D8_00000060
    cmpwi r4, 0x65
    beq lbl_fn_8017E9D8_00000060
    li r0, 0x0
lbl_fn_8017E9D8_00000060:
    cmpwi r0, 0x0
    beq lbl_fn_8017E9D8_00000594
    lwz r0, 0x150c(r3)
    lwz r4, 0x14d4(r3)
    cmpwi r0, 0x0
    addi r0, r4, 0x1
    stw r0, 0x14d4(r3)
    beq lbl_fn_8017E9D8_0000052C
    lwz r0, 0x2dc(r3)
    cmpwi r0, 0x8c
    beq lbl_fn_8017E9D8_000006B4
    lfs f3, 0x1518(r3)
    lfs f0, 0x530(r3)
    lfs f5, 0x1514(r3)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r3)
    lfs f3, 0x1510(r3)
    lfs f0, 0x528(r3)
    fsubs f4, f5, f4
    addi r3, r1, 0xd4
    fsubs f0, f3, f0
    stfs f4, 0xd8(r1)
    stfs f0, 0xd4(r1)
    stfs f6, 0xdc(r1)
    bl fn_805F9920
    lfs f0, lbl_80881BB0
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_8017E9D8_0000030C
    lfs f0, lbl_80881B7C
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80881B78
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x8c
    lfs f2, lbl_80881B90
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80881B78
    addi r4, r31, 0x528
    lfs f3, lbl_80881BB4
    stfs f3, 0x2e8(r31)
    stfs f0, 0x580(r31)
    stfs f0, 0x584(r31)
    lwz r3, lbl_8087F098
    bl fn_80183860
    cmpwi r3, 0x0
    beq lbl_fn_8017E9D8_000006B4
    addi r29, r31, 0x528
    lwz r3, lbl_8087F098
    mr r4, r29
    bl fn_80183860
    lfs f3, 0x530(r3)
    addi r30, r1, 0xc8
    lfs f0, 0x8(r29)
    lfs f5, 0x52c(r3)
    fsubs f2, f3, f0
    lfs f4, 0x4(r29)
    lfs f3, 0x528(r3)
    fsubs f4, f5, f4
    lfs f0, 0x0(r29)
    fabs f5, f2
    fsubs f1, f3, f0
    lfs f0, lbl_80881BB8
    stfs f4, 0xcc(r1)
    frsp f3, f5
    stfs f1, 0xc8(r1)
    fcmpo cr0, f3, f0
    stfs f2, 0xd0(r1)
    bge lbl_fn_8017E9D8_000001A8
    lfs f0, lbl_80881B78
    fcmpo cr0, f1, f0
    ble lbl_fn_8017E9D8_0000019C
    lfs f0, lbl_80881BBC
    b lbl_fn_8017E9D8_000001A0
lbl_fn_8017E9D8_0000019C:
    lfs f0, lbl_80881BC0
lbl_fn_8017E9D8_000001A0:
    stfs f0, 0x54(r1)
    b lbl_fn_8017E9D8_000001B4
lbl_fn_8017E9D8_000001A8:
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x54(r1)
lbl_fn_8017E9D8_000001B4:
    lfs f0, 0x54(r1)
    addi r3, r1, 0x190
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80881B78
    addi r4, r1, 0x5c
    lfs f4, 0x198(r1)
    mr r5, r4
    lfs f5, 0x194(r1)
    addi r3, r1, 0x150
    lfs f6, 0x190(r1)
    lfs f7, 0x1a8(r1)
    lfs f8, 0x1a4(r1)
    lfs f9, 0x1a0(r1)
    lfs f10, 0x1b8(r1)
    lfs f11, 0x1b4(r1)
    lfs f12, 0x1b0(r1)
    lfs f13, 0x1bc(r1)
    lfs f31, 0x1ac(r1)
    lfs f30, 0x19c(r1)
    lfs f0, lbl_80881B7C
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0xd0(r1)
    stfs f3, 0x180(r1)
    stfs f3, 0x184(r1)
    stfs f3, 0x188(r1)
    stfs f0, 0x18c(r1)
    stfs f6, 0x8c(r1)
    stfs f5, 0x90(r1)
    stfs f4, 0x94(r1)
    stfs f6, 0x150(r1)
    stfs f5, 0x154(r1)
    stfs f4, 0x158(r1)
    stfs f9, 0x80(r1)
    stfs f8, 0x84(r1)
    stfs f7, 0x88(r1)
    stfs f9, 0x160(r1)
    stfs f8, 0x164(r1)
    stfs f7, 0x168(r1)
    stfs f12, 0x74(r1)
    stfs f11, 0x78(r1)
    stfs f10, 0x7c(r1)
    stfs f12, 0x170(r1)
    stfs f11, 0x174(r1)
    stfs f10, 0x178(r1)
    stfs f30, 0x68(r1)
    stfs f31, 0x6c(r1)
    stfs f13, 0x70(r1)
    stfs f30, 0x15c(r1)
    stfs f31, 0x16c(r1)
    stfs f13, 0x17c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x64(r1)
    bl fn_805F9750
    lfs f2, 0x64(r1)
    lfs f0, lbl_80881BB8
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8017E9D8_000002D0
    lfs f3, 0x60(r1)
    lfs f0, lbl_80881B78
    fcmpo cr0, f3, f0
    ble lbl_fn_8017E9D8_000002C0
    lfs f0, lbl_80881BBC
    b lbl_fn_8017E9D8_000002C4
lbl_fn_8017E9D8_000002C0:
    lfs f0, lbl_80881BC0
lbl_fn_8017E9D8_000002C4:
    fneg f0, f0
    stfs f0, 0x50(r1)
    b lbl_fn_8017E9D8_000002E4
lbl_fn_8017E9D8_000002D0:
    lfs f1, 0x60(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x50(r1)
lbl_fn_8017E9D8_000002E4:
    lfs f2, lbl_80881B78
    addi r3, r1, 0x50
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x58(r1)
    stfs f2, 0xd0(r1)
    frsp f2, f2
    psq_st f1, 0x0(r30), 0, 0
    psq_st f1, 0x534(r31), 0, 0
    stfs f2, 0x53c(r31)
    b lbl_fn_8017E9D8_000006B4
lbl_fn_8017E9D8_0000030C:
    addi r30, r1, 0xd4
    addi r3, r1, 0xa4
    psq_l f1, 0x0(r30), 0, 0
    mr r4, r3
    lfs f2, 0xdc(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0xac(r1)
    bl fn_805F98D0
    lfs f5, 0xac(r1)
    addi r29, r1, 0x98
    lfs f4, lbl_80881BA4
    lfs f0, 0xa8(r1)
    fmuls f6, f5, f4
    lfs f3, 0xa4(r1)
    fmuls f7, f0, f4
    lfs f0, 0x52c(r31)
    fmuls f8, f3, f4
    lfs f5, 0x528(r31)
    fadds f4, f0, f7
    lfs f3, 0x530(r31)
    fadds f5, f5, f8
    lfs f0, lbl_80881BB8
    fadds f3, f3, f6
    stfs f4, 0x52c(r31)
    stfs f5, 0x528(r31)
    stfs f3, 0x530(r31)
    lfs f2, 0xdc(r1)
    psq_l f1, 0x0(r30), 0, 0
    fabs f3, f2
    stfs f8, 0xb0(r1)
    stfs f7, 0xb4(r1)
    frsp f3, f3
    stfs f6, 0xb8(r1)
    fcmpo cr0, f3, f0
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0xa0(r1)
    bge lbl_fn_8017E9D8_000003C4
    lfs f3, 0x98(r1)
    lfs f0, lbl_80881B78
    fcmpo cr0, f3, f0
    ble lbl_fn_8017E9D8_000003B8
    lfs f0, lbl_80881BBC
    b lbl_fn_8017E9D8_000003BC
lbl_fn_8017E9D8_000003B8:
    lfs f0, lbl_80881BC0
lbl_fn_8017E9D8_000003BC:
    stfs f0, 0x48(r1)
    b lbl_fn_8017E9D8_000003D8
lbl_fn_8017E9D8_000003C4:
    frsp f2, f2
    lfs f1, 0x98(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_8017E9D8_000003D8:
    lfs f0, 0x48(r1)
    addi r3, r1, 0xe0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80881B78
    addi r4, r1, 0x38
    lfs f31, 0xe8(r1)
    mr r5, r4
    lfs f30, 0xe4(r1)
    addi r3, r1, 0x110
    lfs f13, 0xe0(r1)
    lfs f12, 0xf8(r1)
    lfs f11, 0xf4(r1)
    lfs f10, 0xf0(r1)
    lfs f9, 0x108(r1)
    lfs f8, 0x104(r1)
    lfs f7, 0x100(r1)
    lfs f6, 0x10c(r1)
    lfs f5, 0xfc(r1)
    lfs f4, 0xec(r1)
    lfs f0, lbl_80881B7C
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0xa0(r1)
    stfs f3, 0x140(r1)
    stfs f3, 0x144(r1)
    stfs f3, 0x148(r1)
    stfs f0, 0x14c(r1)
    stfs f13, 0x8(r1)
    stfs f30, 0xc(r1)
    stfs f31, 0x10(r1)
    stfs f13, 0x110(r1)
    stfs f30, 0x114(r1)
    stfs f31, 0x118(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0x120(r1)
    stfs f11, 0x124(r1)
    stfs f12, 0x128(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0x130(r1)
    stfs f8, 0x134(r1)
    stfs f9, 0x138(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0x11c(r1)
    stfs f5, 0x12c(r1)
    stfs f6, 0x13c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80881BB8
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8017E9D8_000004F4
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80881B78
    fcmpo cr0, f3, f0
    ble lbl_fn_8017E9D8_000004E4
    lfs f0, lbl_80881BBC
    b lbl_fn_8017E9D8_000004E8
lbl_fn_8017E9D8_000004E4:
    lfs f0, lbl_80881BC0
lbl_fn_8017E9D8_000004E8:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_8017E9D8_00000508
lbl_fn_8017E9D8_000004F4:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_8017E9D8_00000508:
    addi r3, r1, 0x44
    lfs f2, lbl_80881B78
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    lfs f0, 0x9c(r1)
    stfs f2, 0x4c(r1)
    stfs f2, 0xa0(r1)
    stfs f0, 0x538(r31)
    b lbl_fn_8017E9D8_000006B4
lbl_fn_8017E9D8_0000052C:
    lwz r0, 0x2dc(r3)
    cmpwi r0, 0x87
    bne lbl_fn_8017E9D8_000006B4
    lfs f30, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f30, f1
    cror eq, gt, eq
    bne lbl_fn_8017E9D8_000006B4
    lfs f0, lbl_80881B7C
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80881B78
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x88
    lfs f2, lbl_80881B90
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80881B7C
    stfs f0, 0x2e8(r31)
    b lbl_fn_8017E9D8_000006B4
lbl_fn_8017E9D8_00000594:
    li r0, 0x0
    stw r0, 0x14b4(r3)
    lwz r4, lbl_8087F098
    lwz r0, 0x70(r4)
    cmplw r0, r3
    bne lbl_fn_8017E9D8_000005B4
    mr r3, r4
    bl fn_80182874
lbl_fn_8017E9D8_000005B4:
    lwz r0, 0x2dc(r31)
    cmpwi r0, 0x88
    bne lbl_fn_8017E9D8_000005E8
    lfs f1, lbl_80881BC4
    mr r3, r31
    li r4, 0x89
    li r5, 0x0
    fmr f2, f1
    li r6, 0x0
    bl fn_80161570
    lfs f0, lbl_80881BC8
    stfs f0, 0x2e8(r31)
    b lbl_fn_8017E9D8_000006B4
lbl_fn_8017E9D8_000005E8:
    lwz r3, lbl_8087F098
    addi r4, r31, 0x528
    bl fn_80183860
    cmpwi r3, 0x0
    beq lbl_fn_8017E9D8_000006B4
    lwz r3, lbl_8087F098
    addi r4, r31, 0x528
    bl fn_80183860
    lfs f3, 0x530(r31)
    lfs f0, 0x530(r3)
    lfs f5, 0x52c(r31)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r3)
    lfs f0, 0x528(r3)
    addi r3, r1, 0xbc
    lfs f3, 0x528(r31)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0xc0(r1)
    stfs f0, 0xbc(r1)
    stfs f6, 0xc4(r1)
    bl fn_805F9920
    lfs f0, lbl_80881BCC
    fcmpo cr0, f1, f0
    ble lbl_fn_8017E9D8_00000684
    addi r3, r1, 0xbc
    mr r4, r3
    bl fn_805F98D0
    lfs f4, 0xbc(r1)
    lfs f5, lbl_80881BA4
    lfs f3, 0xc0(r1)
    lfs f0, 0xc4(r1)
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    fmuls f0, f0, f5
    stfs f4, 0xbc(r1)
    stfs f3, 0xc0(r1)
    stfs f0, 0xc4(r1)
    b lbl_fn_8017E9D8_00000698
lbl_fn_8017E9D8_00000684:
    lfs f3, lbl_80881B78
    lfs f0, lbl_80881B7C
    stfs f3, 0xbc(r1)
    stfs f3, 0xc0(r1)
    stfs f0, 0xc4(r1)
lbl_fn_8017E9D8_00000698:
    mr r3, r31
    addi r4, r1, 0xbc
    li r5, 0x38
    li r6, 0x0
    bl fn_8015E7A0
    lfs f0, lbl_80881B80
    stfs f0, 0x2e8(r31)
lbl_fn_8017E9D8_000006B4:
    lwz r0, 0x14b4(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8017E9D8_00000714
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x2
    beq lbl_fn_8017E9D8_000006D8
    mr r3, r31
    bl fn_80139560
    b lbl_fn_8017E9D8_00000714
lbl_fn_8017E9D8_000006D8:
    lwz r3, lbl_8087F430
    li r0, 0x0
    stw r0, 0x5660(r3)
    lwz r3, 0x14d0(r31)
    addi r4, r3, 0x1
    stw r4, 0x14d0(r31)
    lwz r3, lbl_8087F0A8
    lwz r0, 0x518(r3)
    cmpw r4, r0
    ble lbl_fn_8017E9D8_00000714
    li r0, 0x2d
    stw r0, 0x14d8(r31)
    mr r3, r31
    li r4, 0x1
    bl fn_8017F4A0
lbl_fn_8017E9D8_00000714:
    lwz r0, 0x1f4(r1)
    psq_l f31, 0x1e8(r1), 0, 0
    lfd f31, 0x1e0(r1)
    psq_l f30, 0x1d8(r1), 0, 0
    lfd f30, 0x1d0(r1)
    lwz r31, 0x1cc(r1)
    lwz r30, 0x1c8(r1)
    lwz r29, 0x1c4(r1)
    mtlr r0
    addi r1, r1, 0x1f0
    blr
}

asm void fn_8017F118(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    li r0, 0x5
    stw r31, 0x3c(r1)
    mr r31, r3
    stb r0, 0xd75(r3)
    bl fn_8017FBEC
    cmpwi r3, 0x0
    beq lbl_fn_8017F118_000007B4
    lwz r3, 0x14d0(r31)
    li r0, 0x0
    stw r0, 0x14d4(r31)
    addi r4, r3, 0x1
    stw r4, 0x14d0(r31)
    lwz r3, lbl_8087F0A8
    lwz r0, 0x510(r3)
    addi r5, r3, 0x4dc
    cmpw r4, r0
    ble lbl_fn_8017F118_00000808
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8016EB48
    mr r3, r31
    li r4, 0x1
    bl fn_8017F4A0
    b lbl_fn_8017F118_0000095C
lbl_fn_8017F118_000007B4:
    lwz r3, 0x14d4(r31)
    li r0, 0x0
    stw r0, 0x14d0(r31)
    addi r4, r3, 0x1
    stw r4, 0x14d4(r31)
    lwz r3, lbl_8087F0A8
    lwz r0, 0x51c(r3)
    addi r5, r3, 0x4dc
    cmpw r4, r0
    ble lbl_fn_8017F118_00000808
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8016EB48
    li r0, 0x1
    stw r0, 0x14fc(r31)
    mr r3, r31
    li r4, 0x5
    bl fn_8017F4A0
    b lbl_fn_8017F118_0000095C
lbl_fn_8017F118_00000808:
    lwz r0, 0xc90(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8017F118_000008DC
    lwz r0, 0x2dc(r31)
    cmpwi r0, 0x45
    beq lbl_fn_8017F118_0000085C
    lfs f0, lbl_80881B7C
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80881B78
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x45
    lfs f2, lbl_80881B90
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80881B7C
    stfs f0, 0x2e8(r31)
lbl_fn_8017F118_0000085C:
    lwz r5, lbl_8087F0A8
    addi r3, r31, 0x10d8
    lfs f3, lbl_80881B78
    addi r4, r1, 0x2c
    lfs f1, 0x1500(r31)
    lfs f0, 0x4f8(r5)
    lfs f2, 0x10f8(r31)
    fmuls f5, f1, f0
    lfs f0, 0x10f0(r31)
    lfs f1, 0x10f4(r31)
    fadds f4, f2, f3
    fadds f0, f0, f3
    stfs f3, 0x20(r1)
    fadds f2, f1, f5
    stfs f5, 0x24(r1)
    lfs f1, lbl_80881BD0
    stfs f3, 0x28(r1)
    stfs f0, 0x2c(r1)
    stfs f2, 0x30(r1)
    stfs f4, 0x34(r1)
    bl fn_80129954
    lfs f1, 0x30(r1)
    lfs f0, 0x1100(r31)
    fabs f1, f1
    frsp f1, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_8017F118_0000095C
    lfs f1, 0x1500(r31)
    lfs f0, lbl_80881BC4
    fmuls f0, f1, f0
    stfs f0, 0x1500(r31)
    b lbl_fn_8017F118_0000095C
lbl_fn_8017F118_000008DC:
    lfs f1, 0x1500(r31)
    addi r3, r31, 0x10d8
    lfs f0, 0x1c(r5)
    addi r4, r1, 0x14
    lfs f3, lbl_80881B78
    fmuls f5, f1, f0
    lfs f2, 0x10f8(r31)
    lfs f0, 0x10f0(r31)
    lfs f1, 0x10f4(r31)
    fadds f4, f2, f3
    fadds f0, f0, f3
    fadds f2, f1, f5
    stfs f3, 0x8(r1)
    lfs f1, lbl_80881BD0
    stfs f5, 0xc(r1)
    stfs f3, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f2, 0x18(r1)
    stfs f4, 0x1c(r1)
    bl fn_80129954
    lfs f1, 0x18(r1)
    lfs f0, 0x1100(r31)
    fabs f1, f1
    frsp f1, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_8017F118_00000954
    lfs f1, 0x1500(r31)
    lfs f0, lbl_80881BC4
    fmuls f0, f1, f0
    stfs f0, 0x1500(r31)
lbl_fn_8017F118_00000954:
    mr r3, r31
    bl fn_8017FED0
lbl_fn_8017F118_0000095C:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8017F348(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    bl fn_8017FBEC
    lwz r4, lbl_8087F098
    lwz r0, 0x48(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8017F348_000009D4
    cmpwi r3, 0x0
    beq lbl_fn_8017F348_000009CC
    lwz r3, 0x14d0(r31)
    addi r4, r3, 0x1
    stw r4, 0x14d0(r31)
    lwz r3, lbl_8087F0A8
    lwz r0, 0x510(r3)
    cmpw r4, r0
    ble lbl_fn_8017F348_000009D4
    mr r3, r31
    li r4, 0x2
    bl fn_8017F4A0
    b lbl_fn_8017F348_00000AB4
lbl_fn_8017F348_000009CC:
    li r0, 0x0
    stw r0, 0x14d0(r31)
lbl_fn_8017F348_000009D4:
    lwz r0, 0xc90(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8017F348_00000A30
    lwz r8, 0x14f0(r31)
    cmpwi r8, 0x0
    beq lbl_fn_8017F348_00000A30
    lwz r4, 0x14f8(r31)
    li r0, 0x0
    stw r0, 0x14fc(r31)
    addi r3, r31, 0xc64
    addi r7, r4, 0x1
    lwz r4, 0x14ec(r31)
    divwu r0, r7, r8
    addi r5, r31, 0x528
    li r6, 0x8
    mullw r0, r0, r8
    subf r0, r0, r7
    stw r0, 0x14f8(r31)
    slwi r0, r0, 2
    lwzx r4, r4, r0
    bl fn_80128508
    addi r3, r31, 0xc64
    bl fn_801255C8
lbl_fn_8017F348_00000A30:
    lwz r5, lbl_8087F0A8
    addi r3, r31, 0x10d8
    lfs f3, lbl_80881B78
    addi r4, r1, 0x14
    lfs f1, 0x1500(r31)
    lfs f0, 0x4f8(r5)
    lfs f2, 0x10f8(r31)
    fmuls f5, f1, f0
    lfs f0, 0x10f0(r31)
    lfs f1, 0x10f4(r31)
    fadds f4, f2, f3
    fadds f0, f0, f3
    stfs f3, 0x8(r1)
    fadds f2, f1, f5
    stfs f5, 0xc(r1)
    lfs f1, lbl_80881BD0
    stfs f3, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f2, 0x18(r1)
    stfs f4, 0x1c(r1)
    bl fn_80129954
    lfs f1, 0x18(r1)
    lfs f0, 0x1100(r31)
    fabs f1, f1
    frsp f1, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_8017F348_00000AAC
    lfs f1, 0x1500(r31)
    lfs f0, lbl_80881BC4
    fmuls f0, f1, f0
    stfs f0, 0x1500(r31)
lbl_fn_8017F348_00000AAC:
    mr r3, r31
    bl fn_8017FED0
lbl_fn_8017F348_00000AB4:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8017F4A0(void)
{
    nofralloc
    stwu r1, -0x1e0(r1)
    mflr r0
    stw r0, 0x1e4(r1)
    addi r11, r1, 0x160
    stfd f31, 0x1d0(r1)
    psq_st f31, 0x1d8(r1), 0, 0
    stfd f30, 0x1c0(r1)
    psq_st f30, 0x1c8(r1), 0, 0
    stfd f29, 0x1b0(r1)
    psq_st f29, 0x1b8(r1), 0, 0
    stfd f28, 0x1a0(r1)
    psq_st f28, 0x1a8(r1), 0, 0
    stfd f27, 0x190(r1)
    psq_st f27, 0x198(r1), 0, 0
    stfd f26, 0x180(r1)
    psq_st f26, 0x188(r1), 0, 0
    stfd f25, 0x170(r1)
    psq_st f25, 0x178(r1), 0, 0
    stfd f24, 0x160(r1)
    psq_st f24, 0x168(r1), 0, 0
    bl _savegpr_24
    li r28, 0x0
    stw r28, 0x14b4(r3)
    lfs f1, lbl_80881BD0
    mr r30, r3
    stw r28, 0x14d0(r3)
    mr r31, r4
    stw r28, 0x14d4(r3)
    addi r3, r3, 0x10d8
    bl fn_80129A48
    cmpwi r31, 0x4
    beq lbl_fn_8017F4A0_00000B6C
    cmpwi r31, 0x5
    beq lbl_fn_8017F4A0_00000BF0
    cmpwi r31, 0x3
    beq lbl_fn_8017F4A0_00000C90
    cmpwi r31, 0x2
    beq lbl_fn_8017F4A0_00000FF8
    cmpwi r31, 0x1
    beq lbl_fn_8017F4A0_000010D0
    b lbl_fn_8017F4A0_000011B8
lbl_fn_8017F4A0_00000B6C:
    lfs f1, lbl_80881B78
    addi r3, r30, 0xc64
    addi r4, r30, 0x14b8
    addi r5, r30, 0x528
    li r6, 0x8
    bl fn_80128A30
    addi r3, r30, 0xc64
    bl fn_801255C8
    stw r28, 0xd18(r30)
    addi r4, r30, 0x528
    lwz r3, lbl_8087F098
    bl fn_80183860
    cmpwi r3, 0x0
    beq lbl_fn_8017F4A0_00000BBC
    lwz r3, lbl_8087F098
    addi r4, r30, 0x528
    bl fn_80183860
    lwz r4, 0xd18(r3)
    subi r0, r4, 0x1
    stw r0, 0xd18(r3)
lbl_fn_8017F4A0_00000BBC:
    lwz r25, lbl_8087F490
    cmpwi r25, 0x0
    beq lbl_fn_8017F4A0_000011B8
    lwz r3, lbl_8087F430
    li r4, 0x2714
    lwz r3, 0x10d8(r3)
    bl fn_803CC6B4
    lfs f1, lbl_80881B8C
    mr r4, r3
    mr r3, r25
    li r5, 0x0
    bl fn_803E3BE8
    b lbl_fn_8017F4A0_000011B8
lbl_fn_8017F4A0_00000BF0:
    lwz r0, 0x14f0(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8017F4A0_00000C20
    lwz r0, 0x14f8(r30)
    addi r3, r30, 0xc64
    lwz r4, 0x14ec(r30)
    addi r5, r30, 0x528
    slwi r0, r0, 2
    li r6, 0x8
    lwzx r4, r4, r0
    bl fn_80128508
    b lbl_fn_8017F4A0_00000C38
lbl_fn_8017F4A0_00000C20:
    lfs f1, 0x14e8(r30)
    addi r3, r30, 0xc64
    addi r4, r30, 0x14dc
    addi r5, r30, 0x528
    li r6, 0x8
    bl fn_80128A30
lbl_fn_8017F4A0_00000C38:
    addi r3, r30, 0xc64
    bl fn_801255C8
    lwz r25, lbl_8087F490
    cmpwi r25, 0x0
    beq lbl_fn_8017F4A0_000011B8
    lwz r3, lbl_8087F098
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8017F4A0_000011B8
    lwz r0, 0x14b0(r30)
    cmpwi r0, 0x4
    bne lbl_fn_8017F4A0_000011B8
    lwz r3, lbl_8087F430
    li r4, 0x2715
    lwz r3, 0x10d8(r3)
    bl fn_803CC6B4
    lfs f1, lbl_80881B8C
    mr r4, r3
    mr r3, r25
    li r5, 0x0
    bl fn_803E3BE8
    b lbl_fn_8017F4A0_000011B8
lbl_fn_8017F4A0_00000C90:
    stw r28, 0x150c(r30)
    lwz r3, lbl_8087F098
    lwz r0, 0x70(r3)
    cmplw r0, r30
    bne lbl_fn_8017F4A0_00000D18
    lfs f0, lbl_80881B7C
    li r0, 0x1
    stw r0, 0x3fc(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80881B78
    li r4, 0x0
    stfs f0, 0x2fc(r30)
    li r5, 0x87
    lfs f2, lbl_80881B90
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80881B78
    li r4, 0x2717
    lfs f3, lbl_80881B7C
    stfs f3, 0x2e8(r30)
    stfs f0, 0x580(r30)
    stfs f0, 0x584(r30)
    lwz r3, lbl_8087F430
    lwz r25, lbl_8087F490
    lwz r3, 0x10d8(r3)
    bl fn_803CC6B4
    lfs f1, lbl_80881B8C
    mr r4, r3
    mr r3, r25
    li r5, 0x0
    bl fn_803E3BE8
    b lbl_fn_8017F4A0_00000F90
lbl_fn_8017F4A0_00000D18:
    lfs f2, 0x530(r30)
    cmpwi r0, 0x0
    addi r3, r30, 0x1510
    psq_l f1, 0x528(r30), 0, 0
    stw r0, 0x150c(r30)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x1518(r30)
    beq lbl_fn_8017F4A0_00000F90
    lwz r4, lbl_8087F098
    lis r29, 0x4330
    lis r3, lbl_807380D8@ha
    stw r29, 0x130(r1)
    lwz r4, 0x74(r4)
    addi r27, r1, 0x5c
    lfd f26, lbl_807380D8@l(r3)
    addi r25, r1, 0x68
    subi r0, r4, 0x2
    lfs f27, lbl_80881BD4
    xoris r0, r0, 0x8000
    stw r0, 0x134(r1)
    lfs f0, lbl_80881BD8
    addi r26, r1, 0x50
    lfd f3, 0x130(r1)
    li r24, 0x0
    lfs f28, lbl_80881B78
    fsubs f3, f3, f26
    lfs f29, lbl_80881B7C
    lfs f30, lbl_80881BB0
    lfs f31, lbl_80881BDC
    fmuls f3, f27, f3
    lfs f24, lbl_80881B88
    fmuls f25, f3, f0
lbl_fn_8017F4A0_00000D98:
    lwz r5, 0x150c(r30)
    addi r3, r1, 0x80
    li r4, 0x79
    stfs f28, 0x44(r1)
    stfs f28, 0x48(r1)
    stfs f29, 0x4c(r1)
    lfs f1, 0x538(r5)
    bl fn_805F8E70
    addi r4, r1, 0x44
    addi r3, r1, 0x80
    mr r5, r4
    bl fn_805F93C0
    xoris r0, r24, 0x8000
    lfs f0, 0x4c(r1)
    stw r0, 0x134(r1)
    addi r3, r1, 0xb0
    fneg f5, f0
    lfs f4, 0x48(r1)
    stw r29, 0x130(r1)
    li r4, 0x79
    lfs f3, 0x44(r1)
    fneg f4, f4
    lfd f0, 0x130(r1)
    fneg f3, f3
    stfs f5, 0x7c(r1)
    fsubs f0, f0, f26
    stfs f4, 0x78(r1)
    fmuls f0, f27, f0
    stfs f3, 0x74(r1)
    fdivs f0, f0, f30
    fadds f1, f25, f0
    bl fn_805F8E70
    addi r4, r1, 0x74
    addi r3, r1, 0xb0
    mr r5, r4
    bl fn_805F93C0
    lfs f3, 0x78(r1)
    mr r5, r27
    lwz r3, 0x150c(r30)
    mr r6, r26
    fmuls f5, f3, f31
    lfs f0, 0x74(r1)
    lfs f3, 0x52c(r3)
    addi r4, r1, 0xe0
    fmuls f6, f0, f31
    lfs f0, 0x528(r3)
    fadds f8, f3, f5
    lfs f3, 0x7c(r1)
    fadds f7, f0, f6
    lfs f0, 0x530(r3)
    fmuls f4, f3, f31
    lfs f2, 0x530(r3)
    psq_l f1, 0x528(r3), 0, 0
    lis r7, 0x8000
    stfs f7, 0x68(r1)
    fadds f7, f0, f4
    lwz r3, lbl_8087EE98
    li r8, 0x0
    psq_st f1, 0x0(r27), 0, 0
    li r9, 0x0
    stfs f8, 0x6c(r1)
    lfs f0, 0x60(r1)
    psq_l f1, 0x0(r25), 0, 0
    fadds f3, f0, f24
    psq_st f1, 0x0(r26), 0, 0
    lfs f0, 0x54(r1)
    stfs f2, 0x64(r1)
    fmr f2, f7
    fadds f0, f0, f24
    stfs f6, 0x38(r1)
    stfs f5, 0x3c(r1)
    stfs f4, 0x40(r1)
    stfs f7, 0x70(r1)
    stfs f2, 0x58(r1)
    stfs f3, 0x60(r1)
    stfs f0, 0x54(r1)
    stw r28, 0x114(r1)
    stw r28, 0x118(r1)
    stw r28, 0x11c(r1)
    stw r28, 0x120(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    bne lbl_fn_8017F4A0_00000F48
    lfs f5, 0x7c(r1)
    addi r4, r1, 0x2c
    lfs f4, lbl_80881B88
    addi r3, r30, 0x1510
    lfs f0, 0x78(r1)
    fmuls f5, f5, f4
    lfs f3, 0x74(r1)
    fmuls f6, f0, f4
    lfs f0, 0x70(r1)
    fmuls f4, f3, f4
    lfs f3, 0x6c(r1)
    fsubs f2, f0, f5
    lfs f0, 0x68(r1)
    fsubs f3, f3, f6
    stfs f4, 0x20(r1)
    fsubs f0, f0, f4
    stfs f3, 0x30(r1)
    stfs f0, 0x2c(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f6, 0x24(r1)
    stfs f5, 0x28(r1)
    stfs f2, 0x34(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x1518(r30)
    b lbl_fn_8017F4A0_00000F54
lbl_fn_8017F4A0_00000F48:
    addi r24, r24, 0x1
    cmpwi r24, 0x8
    blt lbl_fn_8017F4A0_00000D98
lbl_fn_8017F4A0_00000F54:
    lfs f0, lbl_80881B7C
    li r0, 0x1
    stw r0, 0x3fc(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80881B78
    li r4, 0x0
    stfs f0, 0x2fc(r30)
    li r5, 0x20
    lfs f2, lbl_80881B90
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80881BB4
    stfs f0, 0x2e8(r30)
lbl_fn_8017F4A0_00000F90:
    lwz r3, lbl_8087F098
    addi r4, r30, 0x528
    bl fn_80183860
    lwz r0, 0xd18(r30)
    mr r7, r3
    cmpwi r0, 0x0
    beq lbl_fn_8017F4A0_00000FC8
    cmpwi r3, 0x0
    li r0, 0x0
    stw r0, 0xd18(r30)
    beq lbl_fn_8017F4A0_00000FC8
    lwz r4, 0xd18(r3)
    subi r0, r4, 0x1
    stw r0, 0xd18(r3)
lbl_fn_8017F4A0_00000FC8:
    cmpwi r3, 0x0
    beq lbl_fn_8017F4A0_000011B8
    lis r5, lbl_807380F8@ha
    lis r6, lbl_807C7030@ha
    addi r5, r5, lbl_807380F8@l
    lfs f1, lbl_80881BD0
    addi r3, r30, 0x10d8
    addi r4, r7, 0xb0
    addi r5, r5, 0x15
    addi r6, r6, lbl_807C7030@l
    bl fn_80129978
    b lbl_fn_8017F4A0_000011B8
lbl_fn_8017F4A0_00000FF8:
    lis r29, lbl_807380F8@ha
    li r0, 0xa
    addi r29, r29, lbl_807380F8@l
    stw r0, 0x12c8(r30)
    lfs f1, lbl_80881B7C
    addi r3, r1, 0x8
    addi r4, r29, 0x1a
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    lwz r3, lbl_8087F098
    addi r4, r30, 0x528
    bl fn_80183860
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_8017F4A0_00001060
    lis r6, lbl_807C7030@ha
    lfs f1, lbl_80881BD0
    addi r3, r30, 0x10d8
    addi r4, r4, 0xb0
    addi r5, r29, 0x15
    addi r6, r6, lbl_807C7030@l
    bl fn_80129978
lbl_fn_8017F4A0_00001060:
    lfs f0, lbl_80881B7C
    li r0, 0x1
    stw r0, 0x3fc(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80881B78
    li r4, 0x0
    stfs f0, 0x2fc(r30)
    li r5, 0x2
    lfs f2, lbl_80881B90
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f3, lbl_80881B7C
    li r0, 0x0
    stfs f3, 0x2e8(r30)
    mr r4, r30
    lfs f0, lbl_80881B78
    addi r5, r1, 0x10
    stw r0, 0x1508(r30)
    stfs f3, 0x10(r1)
    lwz r3, lbl_8087FA20
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f3, 0x1c(r1)
    lwz r3, 0x258(r3)
    bl fn_804AAD68
    b lbl_fn_8017F4A0_000011B8
lbl_fn_8017F4A0_000010D0:
    lwz r0, 0x14b0(r30)
    cmpwi r0, 0x2
    beq lbl_fn_8017F4A0_000010E4
    li r0, 0xa
    stw r0, 0x12c8(r30)
lbl_fn_8017F4A0_000010E4:
    li r0, 0x1
    stw r0, 0xd18(r30)
    addi r4, r30, 0x528
    lwz r3, lbl_8087F098
    bl fn_80183860
    cmpwi r3, 0x0
    mr r7, r3
    beq lbl_fn_8017F4A0_00001134
    lwz r4, 0xd18(r3)
    lis r5, lbl_807380F8@ha
    addi r5, r5, lbl_807380F8@l
    lis r6, lbl_807C7030@ha
    addi r0, r4, 0x1
    stw r0, 0xd18(r3)
    lfs f1, lbl_80881BD0
    addi r3, r30, 0x10d8
    addi r4, r7, 0xb0
    addi r5, r5, 0x15
    addi r6, r6, lbl_807C7030@l
    bl fn_80129978
lbl_fn_8017F4A0_00001134:
    lfs f1, lbl_80881B78
    addi r3, r30, 0xc64
    addi r4, r30, 0x14b8
    addi r5, r30, 0x528
    li r6, 0x8
    bl fn_80128A30
    addi r3, r30, 0xc64
    bl fn_801255C8
    lwz r25, lbl_8087F490
    cmpwi r25, 0x0
    beq lbl_fn_8017F4A0_000011B8
    lwz r0, 0x14b0(r30)
    cmpwi r0, 0x3
    bne lbl_fn_8017F4A0_00001194
    lwz r3, lbl_8087F430
    li r4, 0x2712
    lwz r3, 0x10d8(r3)
    bl fn_803CC6B4
    lfs f1, lbl_80881B8C
    mr r4, r3
    mr r3, r25
    li r5, 0x0
    bl fn_803E3BE8
    b lbl_fn_8017F4A0_000011B8
lbl_fn_8017F4A0_00001194:
    lwz r3, lbl_8087F430
    li r4, 0x2711
    lwz r3, 0x10d8(r3)
    bl fn_803CC6B4
    lfs f1, lbl_80881B8C
    mr r4, r3
    mr r3, r25
    li r5, 0x0
    bl fn_803E3BE8
lbl_fn_8017F4A0_000011B8:
    stw r31, 0x14b0(r30)
    psq_l f31, 0x1d8(r1), 0, 0
    lfd f31, 0x1d0(r1)
    psq_l f30, 0x1c8(r1), 0, 0
    lfd f30, 0x1c0(r1)
    psq_l f29, 0x1b8(r1), 0, 0
    lfd f29, 0x1b0(r1)
    psq_l f28, 0x1a8(r1), 0, 0
    lfd f28, 0x1a0(r1)
    psq_l f27, 0x198(r1), 0, 0
    lfd f27, 0x190(r1)
    psq_l f26, 0x188(r1), 0, 0
    lfd f26, 0x180(r1)
    psq_l f25, 0x178(r1), 0, 0
    lfd f25, 0x170(r1)
    psq_l f24, 0x168(r1), 0, 0
    lfd f24, 0x160(r1)
    addi r11, r1, 0x160
    bl _restgpr_24
    lwz r0, 0x1e4(r1)
    mtlr r0
    addi r1, r1, 0x1e0
    blr
}

asm void fn_8017FBEC(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    addi r11, r1, 0x110
    bl _savegpr_27
    mr r31, r3
    lwz r3, lbl_8087F098
    addi r4, r31, 0x528
    bl fn_80183860
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_8017FBEC_0000124C
    li r3, 0x0
    b lbl_fn_8017FBEC_000014E0
lbl_fn_8017FBEC_0000124C:
    lfs f3, 0x530(r3)
    lfs f0, 0x530(r31)
    lfs f5, 0x52c(r3)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r31)
    lfs f3, 0x528(r3)
    addi r3, r1, 0x2c
    lfs f0, 0x528(r31)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x30(r1)
    stfs f0, 0x2c(r1)
    stfs f6, 0x34(r1)
    bl fn_805F9920
    lwz r0, 0x14b0(r31)
    lwz r3, lbl_8087F0A8
    cmpwi r0, 0x1
    lfs f0, 0x4e4(r3)
    bne lbl_fn_8017FBEC_0000129C
    lfs f0, 0x4e0(r3)
lbl_fn_8017FBEC_0000129C:
    fmuls f0, f0, f0
    fcmpo cr0, f1, f0
    bge lbl_fn_8017FBEC_000014DC
    lfs f6, lbl_80881B78
    addi r29, r1, 0x44
    lfs f5, lbl_80881BDC
    addi r5, r1, 0x20
    lfs f4, 0x530(r31)
    mr r3, r29
    lfs f3, 0x52c(r31)
    mr r4, r29
    lfs f0, 0x528(r31)
    fadds f7, f4, f6
    fadds f8, f3, f5
    stfs f6, 0x68(r1)
    fadds f9, f0, f6
    li r27, 0x0
    stfs f8, 0x60(r1)
    stfs f9, 0x5c(r1)
    stfs f7, 0x64(r1)
    lfs f3, 0x52c(r30)
    lfs f0, 0x528(r30)
    lfs f4, 0x530(r30)
    fadds f3, f3, f5
    fadds f0, f0, f6
    stfs f5, 0x6c(r1)
    fadds f4, f4, f6
    stfs f6, 0x70(r1)
    fsubs f5, f3, f8
    fsubs f6, f0, f9
    fsubs f2, f4, f7
    stfs f5, 0x24(r1)
    stfs f6, 0x20(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f0, 0x50(r1)
    stfs f3, 0x54(r1)
    stfs f4, 0x58(r1)
    stfs f2, 0x28(r1)
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x4c(r1)
    bl fn_805F98D0
    lfs f3, lbl_80881B78
    addi r3, r1, 0x78
    lfs f0, lbl_80881B7C
    li r4, 0x79
    stfs f3, 0x38(r1)
    stfs f3, 0x3c(r1)
    stfs f0, 0x40(r1)
    lfs f3, 0x538(r31)
    lfs f0, 0x10f4(r31)
    fadds f1, f3, f0
    bl fn_805F8E70
    addi r4, r1, 0x38
    addi r3, r1, 0x78
    mr r5, r4
    bl fn_805F93C0
    addi r3, r1, 0x38
    addi r28, r1, 0x14
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r28
    lfs f2, 0x40(r1)
    mr r4, r28
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x1c(r1)
    bl fn_805F98D0
    mr r3, r28
    mr r4, r29
    bl fn_805F9990
    bl fn_8068AE9C
    lwz r3, lbl_8087F0A8
    frsp f4, f1
    lfs f3, lbl_80881B80
    lfs f0, 0x4e8(r3)
    fmuls f0, f3, f0
    fcmpo cr0, f4, f0
    bge lbl_fn_8017FBEC_00001474
    li r0, 0x0
    stw r0, 0xdc(r1)
    lwz r3, lbl_8087EE98
    addi r4, r1, 0xa8
    stw r0, 0xe0(r1)
    addi r5, r1, 0x5c
    addi r6, r1, 0x50
    lis r7, 0x8000
    stw r0, 0xe4(r1)
    li r8, 0x0
    li r9, 0x0
    stw r0, 0xe8(r1)
    bl fn_8004ED34
    lwz r4, lbl_8087F0A8
    cntlzw r0, r3
    srwi r27, r0, 5
    lwz r0, 0x4dc(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8017FBEC_00001474
    cmpwi r27, 0x0
    bne lbl_fn_8017FBEC_00001458
    lwz r3, lbl_8087EEB0
    addi r4, r1, 0x5c
    lfs f1, lbl_80881B78
    addi r5, r1, 0xac
    li r6, -0x100
    bl fn_80063764
    lis r6, 0xff4d
    lwz r3, lbl_8087EEB0
    lfs f1, lbl_80881B78
    addi r4, r1, 0xac
    addi r5, r1, 0x50
    addi r6, r6, 0x4d00
    bl fn_80063764
    b lbl_fn_8017FBEC_00001474
lbl_fn_8017FBEC_00001458:
    lis r6, 0xff4d
    lwz r3, lbl_8087EEB0
    lfs f1, lbl_80881B78
    addi r4, r1, 0x5c
    addi r5, r1, 0x50
    addi r6, r6, 0x4d00
    bl fn_80063764
lbl_fn_8017FBEC_00001474:
    cmpwi r27, 0x0
    beq lbl_fn_8017FBEC_000014D4
    lfs f2, 0x530(r30)
    addi r3, r31, 0x14b8
    psq_l f1, 0x528(r30), 0, 0
    addi r5, r1, 0x8
    psq_st f1, 0x0(r3), 0, 0
    addi r4, r31, 0x14c4
    lfs f0, 0x530(r31)
    lfs f5, 0x52c(r31)
    fsubs f6, f0, f2
    lfs f4, 0x14bc(r31)
    lfs f3, 0x528(r31)
    lfs f0, 0x14b8(r31)
    fsubs f4, f5, f4
    stfs f2, 0x14c0(r31)
    fsubs f0, f3, f0
    fmr f2, f6
    stfs f4, 0xc(r1)
    stfs f0, 0x8(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f6, 0x10(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x14cc(r31)
lbl_fn_8017FBEC_000014D4:
    mr r3, r27
    b lbl_fn_8017FBEC_000014E0
lbl_fn_8017FBEC_000014DC:
    li r3, 0x0
lbl_fn_8017FBEC_000014E0:
    addi r11, r1, 0x110
    bl _restgpr_27
    lwz r0, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_8017FED0(void)
{
    nofralloc
    stwu r1, -0x200(r1)
    mflr r0
    stw r0, 0x204(r1)
    stfd f31, 0x1f0(r1)
    psq_st f31, 0x1f8(r1), 0, 0
    stfd f30, 0x1e0(r1)
    psq_st f30, 0x1e8(r1), 0, 0
    stfd f29, 0x1d0(r1)
    psq_st f29, 0x1d8(r1), 0, 0
    stw r31, 0x1cc(r1)
    mr r31, r3
    stw r30, 0x1c8(r1)
    stw r29, 0x1c4(r1)
    addi r29, r3, 0xc64
    mr r3, r29
    bl fn_80126214
    psq_l f1, 0x58(r29), 0, 0
    addi r30, r1, 0xd4
    lfs f2, 0x60(r29)
    addi r3, r1, 0xc8
    stfs f2, 0xdc(r1)
    lfs f31, lbl_80881B7C
    psq_st f1, 0x0(r30), 0, 0
    psq_l f1, 0x534(r31), 0, 0
    lfs f2, 0x53c(r31)
    stfs f2, 0xd0(r1)
    psq_st f1, 0x0(r3), 0, 0
    lwz r0, 0xc90(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8017FED0_0000174C
    mr r3, r30
    bl fn_805F9920
    lfs f0, lbl_80881BCC
    fcmpo cr0, f1, f0
    ble lbl_fn_8017FED0_00001750
    mr r3, r30
    mr r4, r30
    bl fn_805F98D0
    lfs f2, 0xdc(r1)
    addi r29, r1, 0xb0
    psq_l f1, 0x0(r30), 0, 0
    fabs f3, f2
    lfs f0, lbl_80881BB8
    psq_st f1, 0x0(r29), 0, 0
    frsp f3, f3
    stfs f2, 0xb8(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_8017FED0_000015DC
    lfs f3, 0xb0(r1)
    lfs f0, lbl_80881B78
    fcmpo cr0, f3, f0
    ble lbl_fn_8017FED0_000015D0
    lfs f0, lbl_80881BBC
    b lbl_fn_8017FED0_000015D4
lbl_fn_8017FED0_000015D0:
    lfs f0, lbl_80881BC0
lbl_fn_8017FED0_000015D4:
    stfs f0, 0x9c(r1)
    b lbl_fn_8017FED0_000015F0
lbl_fn_8017FED0_000015DC:
    frsp f2, f2
    lfs f1, 0xb0(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x9c(r1)
lbl_fn_8017FED0_000015F0:
    lfs f0, 0x9c(r1)
    addi r3, r1, 0x150
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80881B78
    addi r4, r1, 0x8c
    lfs f29, 0x158(r1)
    mr r5, r4
    lfs f30, 0x154(r1)
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
    lfs f0, lbl_80881B7C
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0xb8(r1)
    stfs f3, 0x1b0(r1)
    stfs f3, 0x1b4(r1)
    stfs f3, 0x1b8(r1)
    stfs f0, 0x1bc(r1)
    stfs f13, 0x5c(r1)
    stfs f30, 0x60(r1)
    stfs f29, 0x64(r1)
    stfs f13, 0x180(r1)
    stfs f30, 0x184(r1)
    stfs f29, 0x188(r1)
    stfs f10, 0x68(r1)
    stfs f11, 0x6c(r1)
    stfs f12, 0x70(r1)
    stfs f10, 0x190(r1)
    stfs f11, 0x194(r1)
    stfs f12, 0x198(r1)
    stfs f7, 0x74(r1)
    stfs f8, 0x78(r1)
    stfs f9, 0x7c(r1)
    stfs f7, 0x1a0(r1)
    stfs f8, 0x1a4(r1)
    stfs f9, 0x1a8(r1)
    stfs f4, 0x80(r1)
    stfs f5, 0x84(r1)
    stfs f6, 0x88(r1)
    stfs f4, 0x18c(r1)
    stfs f5, 0x19c(r1)
    stfs f6, 0x1ac(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x94(r1)
    bl fn_805F9750
    lfs f2, 0x94(r1)
    lfs f0, lbl_80881BB8
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8017FED0_0000170C
    lfs f3, 0x90(r1)
    lfs f0, lbl_80881B78
    fcmpo cr0, f3, f0
    ble lbl_fn_8017FED0_000016FC
    lfs f0, lbl_80881BBC
    b lbl_fn_8017FED0_00001700
lbl_fn_8017FED0_000016FC:
    lfs f0, lbl_80881BC0
lbl_fn_8017FED0_00001700:
    fneg f0, f0
    stfs f0, 0x98(r1)
    b lbl_fn_8017FED0_00001720
lbl_fn_8017FED0_0000170C:
    lfs f1, 0x90(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x98(r1)
lbl_fn_8017FED0_00001720:
    lfs f2, lbl_80881B78
    addi r3, r1, 0x98
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0xc8
    stfs f2, 0xa0(r1)
    stfs f2, 0xb8(r1)
    frsp f2, f2
    psq_st f1, 0x0(r29), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0xd0(r1)
    b lbl_fn_8017FED0_00001750
lbl_fn_8017FED0_0000174C:
    lfs f31, lbl_80881B78
lbl_fn_8017FED0_00001750:
    lwz r3, 0x14b0(r31)
    subi r0, r3, 0x4
    cmplwi r0, 0x1
    bgt lbl_fn_8017FED0_00001A08
    lwz r3, lbl_8087F098
    addi r4, r31, 0x528
    bl fn_80183860
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_8017FED0_00001780
    li r0, 0x0
    b lbl_fn_8017FED0_000017F0
lbl_fn_8017FED0_00001780:
    lfs f3, 0x530(r3)
    lfs f0, 0x530(r31)
    lfs f5, 0x52c(r3)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r31)
    lfs f3, 0x528(r3)
    addi r3, r1, 0x50
    lfs f0, 0x528(r31)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x54(r1)
    stfs f0, 0x50(r1)
    stfs f6, 0x58(r1)
    bl fn_805F9920
    lfs f3, 0x570(r30)
    lfs f0, lbl_80881B94
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    mfcr r0
    lwz r3, lbl_8087F0A8
    extrwi. r0, r0, 1, 2
    lfs f0, 0x4f0(r3)
    beq lbl_fn_8017FED0_000017E0
    lfs f0, 0x4ec(r3)
lbl_fn_8017FED0_000017E0:
    fmuls f0, f0, f0
    fcmpo cr0, f1, f0
    mfcr r0
    srwi r0, r0, 31
lbl_fn_8017FED0_000017F0:
    cmpwi r0, 0x0
    beq lbl_fn_8017FED0_00001A08
    lwz r3, lbl_8087F098
    addi r4, r31, 0x528
    bl fn_80183860
    cmpwi r3, 0x0
    beq lbl_fn_8017FED0_00001A08
    addi r30, r31, 0x528
    lwz r3, lbl_8087F098
    mr r4, r30
    bl fn_80183860
    lfs f3, 0x530(r3)
    addi r4, r1, 0xbc
    lfs f0, 0x8(r30)
    addi r29, r1, 0xa4
    lfs f5, 0x52c(r3)
    fsubs f2, f3, f0
    lfs f4, 0x4(r30)
    lfs f3, 0x528(r3)
    fsubs f4, f5, f4
    lfs f0, 0x0(r30)
    stfs f2, 0xc4(r1)
    fsubs f3, f3, f0
    lfs f0, lbl_80881BB8
    stfs f4, 0xc0(r1)
    frsp f4, f2
    stfs f3, 0xbc(r1)
    fabs f3, f4
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    frsp f3, f3
    stfs f2, 0xac(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_8017FED0_0000189C
    lfs f3, 0xa4(r1)
    lfs f0, lbl_80881B78
    fcmpo cr0, f3, f0
    ble lbl_fn_8017FED0_00001890
    lfs f0, lbl_80881BBC
    b lbl_fn_8017FED0_00001894
lbl_fn_8017FED0_00001890:
    lfs f0, lbl_80881BC0
lbl_fn_8017FED0_00001894:
    stfs f0, 0x48(r1)
    b lbl_fn_8017FED0_000018B0
lbl_fn_8017FED0_0000189C:
    fmr f2, f4
    lfs f1, 0xa4(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_8017FED0_000018B0:
    lfs f0, 0x48(r1)
    addi r3, r1, 0xe0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80881B78
    addi r4, r1, 0x38
    lfs f30, 0xe8(r1)
    mr r5, r4
    lfs f29, 0xe4(r1)
    addi r3, r1, 0x110
    lfs f13, 0xe0(r1)
    lfs f12, 0xf8(r1)
    lfs f11, 0xf4(r1)
    lfs f10, 0xf0(r1)
    lfs f9, 0x108(r1)
    lfs f8, 0x104(r1)
    lfs f7, 0x100(r1)
    lfs f6, 0x10c(r1)
    lfs f5, 0xfc(r1)
    lfs f4, 0xec(r1)
    lfs f0, lbl_80881B7C
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0xac(r1)
    stfs f3, 0x140(r1)
    stfs f3, 0x144(r1)
    stfs f3, 0x148(r1)
    stfs f0, 0x14c(r1)
    stfs f13, 0x8(r1)
    stfs f29, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f13, 0x110(r1)
    stfs f29, 0x114(r1)
    stfs f30, 0x118(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0x120(r1)
    stfs f11, 0x124(r1)
    stfs f12, 0x128(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0x130(r1)
    stfs f8, 0x134(r1)
    stfs f9, 0x138(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0x11c(r1)
    stfs f5, 0x12c(r1)
    stfs f6, 0x13c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80881BB8
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8017FED0_000019CC
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80881B78
    fcmpo cr0, f3, f0
    ble lbl_fn_8017FED0_000019BC
    lfs f0, lbl_80881BBC
    b lbl_fn_8017FED0_000019C0
lbl_fn_8017FED0_000019BC:
    lfs f0, lbl_80881BC0
lbl_fn_8017FED0_000019C0:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_8017FED0_000019E0
lbl_fn_8017FED0_000019CC:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_8017FED0_000019E0:
    lfs f2, lbl_80881B78
    addi r3, r1, 0x44
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0xc8
    stfs f2, 0x4c(r1)
    stfs f2, 0xac(r1)
    frsp f2, f2
    psq_st f1, 0x0(r29), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0xd0(r1)
lbl_fn_8017FED0_00001A08:
    lwz r0, 0x14b0(r31)
    lwz r3, lbl_8087F0A8
    cmpwi r0, 0x5
    lfs f29, 0x500(r3)
    bne lbl_fn_8017FED0_00001A38
    lwz r0, 0x14fc(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8017FED0_00001A30
    lfs f29, 0x508(r3)
    b lbl_fn_8017FED0_00001B64
lbl_fn_8017FED0_00001A30:
    lfs f29, 0x4fc(r3)
    b lbl_fn_8017FED0_00001B64
lbl_fn_8017FED0_00001A38:
    cmpwi r0, 0x4
    bne lbl_fn_8017FED0_00001A48
    lfs f29, 0x504(r3)
    b lbl_fn_8017FED0_00001B64
lbl_fn_8017FED0_00001A48:
    cmpwi r0, 0x1
    bne lbl_fn_8017FED0_00001B64
    lwz r0, 0x1508(r31)
    cmpwi r0, 0x1c2
    bge lbl_fn_8017FED0_00001A68
    lfs f0, lbl_80881BE0
    fmuls f29, f29, f0
    b lbl_fn_8017FED0_00001AA0
lbl_fn_8017FED0_00001A68:
    cmpwi r0, 0x2ee
    bge lbl_fn_8017FED0_00001A7C
    lfs f0, lbl_80881BE4
    fmuls f29, f29, f0
    b lbl_fn_8017FED0_00001AA0
lbl_fn_8017FED0_00001A7C:
    cmpwi r0, 0x708
    blt lbl_fn_8017FED0_00001AA0
    cmpwi r0, 0xa8c
    bge lbl_fn_8017FED0_00001A98
    lfs f0, lbl_80881BE8
    fmuls f29, f29, f0
    b lbl_fn_8017FED0_00001AA0
lbl_fn_8017FED0_00001A98:
    lfs f0, lbl_80881BEC
    fmuls f29, f29, f0
lbl_fn_8017FED0_00001AA0:
    lwz r0, 0x1504(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8017FED0_00001AB4
    lfs f0, lbl_80881BE8
    fmuls f29, f29, f0
lbl_fn_8017FED0_00001AB4:
    lwz r3, 0x14d8(r31)
    cmpwi r3, 0x0
    ble lbl_fn_8017FED0_00001AD0
    lfs f0, lbl_80881BF0
    subi r0, r3, 0x1
    stw r0, 0x14d8(r31)
    fmuls f29, f29, f0
lbl_fn_8017FED0_00001AD0:
    lwz r3, lbl_8087F430
    li r4, 0xd4
    bl fn_80370174
    subi r0, r3, 0x1
    cntlzw r0, r0
    srwi. r4, r0, 5
    beq lbl_fn_8017FED0_00001AF4
    lfs f0, lbl_80881BE8
    fmuls f29, f29, f0
lbl_fn_8017FED0_00001AF4:
    lwz r3, lbl_8087F098
    lwz r0, 0x58(r3)
    cmpwi r0, 0x1194
    ble lbl_fn_8017FED0_00001B20
    cmpwi r4, 0x0
    beq lbl_fn_8017FED0_00001B14
    lfs f0, lbl_80881B80
    b lbl_fn_8017FED0_00001B18
lbl_fn_8017FED0_00001B14:
    lfs f0, lbl_80881BC8
lbl_fn_8017FED0_00001B18:
    fmuls f29, f29, f0
    b lbl_fn_8017FED0_00001B64
lbl_fn_8017FED0_00001B20:
    cmpwi r0, 0xe10
    ble lbl_fn_8017FED0_00001B44
    cmpwi r4, 0x0
    beq lbl_fn_8017FED0_00001B38
    lfs f0, lbl_80881BF4
    b lbl_fn_8017FED0_00001B3C
lbl_fn_8017FED0_00001B38:
    lfs f0, lbl_80881BEC
lbl_fn_8017FED0_00001B3C:
    fmuls f29, f29, f0
    b lbl_fn_8017FED0_00001B64
lbl_fn_8017FED0_00001B44:
    cmpwi r0, 0xa8c
    ble lbl_fn_8017FED0_00001B64
    cmpwi r4, 0x0
    beq lbl_fn_8017FED0_00001B5C
    lfs f0, lbl_80881BEC
    b lbl_fn_8017FED0_00001B60
lbl_fn_8017FED0_00001B5C:
    lfs f0, lbl_80881BE8
lbl_fn_8017FED0_00001B60:
    fmuls f29, f29, f0
lbl_fn_8017FED0_00001B64:
    lwz r12, 0x0(r31)
    fmr f1, f31
    fmr f2, f29
    mr r3, r31
    lwz r12, 0x34(r12)
    addi r4, r1, 0xc8
    li r5, 0x0
    mtctr r12
    bctrl
    lwz r0, 0x204(r1)
    psq_l f31, 0x1f8(r1), 0, 0
    lfd f31, 0x1f0(r1)
    psq_l f30, 0x1e8(r1), 0, 0
    lfd f30, 0x1e0(r1)
    psq_l f29, 0x1d8(r1), 0, 0
    lfd f29, 0x1d0(r1)
    lwz r31, 0x1cc(r1)
    lwz r30, 0x1c8(r1)
    lwz r29, 0x1c4(r1)
    mtlr r0
    addi r1, r1, 0x200
    blr
}
