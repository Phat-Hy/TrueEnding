#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_21(void);
extern void _restgpr_22(void);
extern void _savegpr_21(void);
extern void _savegpr_22(void);
extern void fn_8004D388(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_800F8548(void);
extern void fn_80148990(void);
extern void fn_8016E970(void);
extern void fn_80179D44(void);
extern void fn_80370A78(void);
extern void fn_80370AE4(void);
extern void fn_803B3B38(void);
extern void fn_8045EB60(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_80686A64(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);
extern void fn_80695720(void);

/* External data declarations */
extern u8 lbl_80754C24[];
extern u8 lbl_80754DB8[];
extern u8 lbl_80754DC0[];

/* Small data declarations */
extern u32 lbl_8087D9E0;
extern u32 lbl_8087D9E4;
extern u32 lbl_8087EE98;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F430;
extern u32 lbl_80886C30;
extern u32 lbl_80886C34;
extern u32 lbl_80886C38;
extern u32 lbl_80886C50;
extern u32 lbl_80886C54;
extern u32 lbl_80886C64;
extern u32 lbl_80886C68;
extern u32 lbl_80886C6C;
extern u32 lbl_80886C70;
extern u32 lbl_80886C74;
extern u32 lbl_80886C78;
extern u32 lbl_80886C7C;
extern u32 lbl_80886C80;
extern u32 lbl_80886C84;
extern u32 lbl_80886C88;
extern u32 lbl_80886C8C;
extern u32 lbl_80886C90;
extern u32 lbl_80886C94;
extern u32 lbl_80886C98;
extern u32 lbl_80886C9C;
extern u32 lbl_80886CA0;
extern u32 lbl_80886CA4;
extern u32 lbl_80886CA8;
extern u32 lbl_80886CAC;
extern u32 lbl_80886CB0;
extern u32 lbl_80886CB4;
extern u32 lbl_80886CB8;

/* Function declarations */
void fn_804596E8(void);
void fn_80459EBC(void);
void fn_80459F24(void);
void fn_80459FB8(void);
void fn_80459FD0(void);
void fn_8045A8F0(void);
void fn_8045ABB4(void);

asm void fn_804596E8(void)
{
    nofralloc
    stwu r1, -0x250(r1)
    mflr r0
    stw r0, 0x254(r1)
    stfd f31, 0x240(r1)
    psq_st f31, 0x248(r1), 0, 0
    stfd f30, 0x230(r1)
    psq_st f30, 0x238(r1), 0, 0
    stw r31, 0x22c(r1)
    mr r31, r3
    stw r30, 0x228(r1)
    lwz r5, 0x58c(r3)
    cmpwi r5, 0xc
    beq lbl_fn_804596E8_000007AC
    cmpwi r5, 0xe
    bne lbl_fn_804596E8_00000054
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_804596E8_000007AC
    bl fn_8045EB60
    b lbl_fn_804596E8_000007AC
lbl_fn_804596E8_00000054:
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_804596E8_0000006C
    bl fn_8045EB60
    b lbl_fn_804596E8_000007AC
lbl_fn_804596E8_0000006C:
    lwz r6, 0x8(r4)
    lwz r0, 0x4(r6)
    cmpwi r0, 0x1791
    bne lbl_fn_804596E8_0000040C
    lfs f5, 0x30(r4)
    lfs f4, lbl_80886C64
    lfs f3, 0x2c(r4)
    lfs f0, 0x28(r4)
    fmuls f5, f5, f4
    fmuls f3, f3, f4
    fmuls f0, f0, f4
    stfs f5, 0x130(r1)
    stfs f0, 0x128(r1)
    stfs f3, 0x12c(r1)
    lwz r0, 0x18ec(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804596E8_00000154
    lwz r3, lbl_8087F430
    li r4, 0xcf
    bl fn_80370A78
    cmpwi r3, 0x0
    bne lbl_fn_804596E8_000000D4
    lwz r3, lbl_8087F430
    li r4, 0xcf
    li r5, 0x1
    bl fn_80370AE4
lbl_fn_804596E8_000000D4:
    lwz r5, 0x18f4(r31)
    addi r3, r1, 0x128
    lfs f4, 0x52c(r31)
    addi r6, r1, 0x110
    lfs f5, 0x8(r5)
    mr r4, r3
    lfs f3, 0x4(r5)
    fsubs f5, f5, f4
    lfs f0, 0x528(r31)
    lfs f4, 0xc(r5)
    fsubs f3, f3, f0
    stfs f5, 0x114(r1)
    lfs f0, 0x530(r31)
    stfs f3, 0x110(r1)
    fsubs f2, f4, f0
    lfs f0, lbl_80886C34
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x118(r1)
    stfs f2, 0x130(r1)
    stfs f0, 0x12c(r1)
    bl fn_805F98D0
    lfs f4, 0x128(r1)
    lfs f5, lbl_80886C64
    lfs f3, 0x12c(r1)
    lfs f0, 0x130(r1)
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    fmuls f0, f0, f5
    stfs f4, 0x128(r1)
    stfs f3, 0x12c(r1)
    stfs f0, 0x130(r1)
lbl_fn_804596E8_00000154:
    lbz r0, 0x197c(r31)
    cmpwi r0, 0x0
    bne lbl_fn_804596E8_00000734
    addi r3, r1, 0x128
    lfs f2, 0x130(r1)
    psq_l f1, 0x0(r3), 0, 0
    li r0, 0x0
    addi r30, r1, 0x104
    stfs f2, 0x10c(r1)
    stw r0, 0x14bc(r31)
    stw r0, 0x14c0(r31)
    psq_st f1, 0x0(r30), 0, 0
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0x7
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f0, lbl_80886C30
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80886C34
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x14a
    lfs f2, lbl_80886C38
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    addi r3, r1, 0x80
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x10c(r1)
    mr r4, r3
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x88(r1)
    bl fn_805F98D0
    psq_l f1, 0x0(r30), 0, 0
    addi r4, r1, 0x8c
    psq_st f1, 0x0(r4), 0, 0
    addi r3, r1, 0xa4
    lfs f2, 0x10c(r1)
    addi r30, r1, 0x98
    lfs f3, 0x90(r1)
    lfs f0, lbl_80886C68
    stfs f2, 0x6c0(r31)
    fmuls f3, f3, f0
    lfs f0, lbl_80886C6C
    stfs f2, 0x94(r1)
    stfs f3, 0x90(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x6b8(r31), 0, 0
    lfs f3, 0x88(r1)
    lfs f4, 0x84(r1)
    fneg f5, f3
    lfs f3, 0x80(r1)
    fneg f4, f4
    fneg f3, f3
    stfs f5, 0xac(r1)
    frsp f2, f5
    stfs f3, 0xa4(r1)
    fabs f3, f2
    stfs f4, 0xa8(r1)
    psq_l f1, 0x0(r3), 0, 0
    frsp f3, f3
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0xa0(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_804596E8_0000029C
    lfs f3, 0x98(r1)
    lfs f0, lbl_80886C34
    fcmpo cr0, f3, f0
    ble lbl_fn_804596E8_00000290
    lfs f0, lbl_80886C70
    b lbl_fn_804596E8_00000294
lbl_fn_804596E8_00000290:
    lfs f0, lbl_80886C74
lbl_fn_804596E8_00000294:
    stfs f0, 0xb4(r1)
    b lbl_fn_804596E8_000002B0
lbl_fn_804596E8_0000029C:
    frsp f2, f2
    lfs f1, 0x98(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0xb4(r1)
lbl_fn_804596E8_000002B0:
    lfs f0, 0xb4(r1)
    addi r3, r1, 0x1e8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80886C34
    addi r4, r1, 0xbc
    lfs f4, 0x1f0(r1)
    mr r5, r4
    lfs f5, 0x1ec(r1)
    addi r3, r1, 0x1a8
    lfs f6, 0x1e8(r1)
    lfs f7, 0x200(r1)
    lfs f8, 0x1fc(r1)
    lfs f9, 0x1f8(r1)
    lfs f10, 0x210(r1)
    lfs f11, 0x20c(r1)
    lfs f12, 0x208(r1)
    lfs f13, 0x214(r1)
    lfs f31, 0x204(r1)
    lfs f30, 0x1f4(r1)
    lfs f0, lbl_80886C30
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0xa0(r1)
    stfs f3, 0x1d8(r1)
    stfs f3, 0x1dc(r1)
    stfs f3, 0x1e0(r1)
    stfs f0, 0x1e4(r1)
    stfs f6, 0xec(r1)
    stfs f5, 0xf0(r1)
    stfs f4, 0xf4(r1)
    stfs f6, 0x1a8(r1)
    stfs f5, 0x1ac(r1)
    stfs f4, 0x1b0(r1)
    stfs f9, 0xe0(r1)
    stfs f8, 0xe4(r1)
    stfs f7, 0xe8(r1)
    stfs f9, 0x1b8(r1)
    stfs f8, 0x1bc(r1)
    stfs f7, 0x1c0(r1)
    stfs f12, 0xd4(r1)
    stfs f11, 0xd8(r1)
    stfs f10, 0xdc(r1)
    stfs f12, 0x1c8(r1)
    stfs f11, 0x1cc(r1)
    stfs f10, 0x1d0(r1)
    stfs f30, 0xc8(r1)
    stfs f31, 0xcc(r1)
    stfs f13, 0xd0(r1)
    stfs f30, 0x1b4(r1)
    stfs f31, 0x1c4(r1)
    stfs f13, 0x1d4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xc4(r1)
    bl fn_805F9750
    lfs f2, 0xc4(r1)
    lfs f0, lbl_80886C6C
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_804596E8_000003CC
    lfs f3, 0xc0(r1)
    lfs f0, lbl_80886C34
    fcmpo cr0, f3, f0
    ble lbl_fn_804596E8_000003BC
    lfs f0, lbl_80886C70
    b lbl_fn_804596E8_000003C0
lbl_fn_804596E8_000003BC:
    lfs f0, lbl_80886C74
lbl_fn_804596E8_000003C0:
    fneg f0, f0
    stfs f0, 0xb0(r1)
    b lbl_fn_804596E8_000003E0
lbl_fn_804596E8_000003CC:
    lfs f1, 0xc0(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0xb0(r1)
lbl_fn_804596E8_000003E0:
    lfs f2, lbl_80886C34
    addi r3, r1, 0xb0
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r31, 0x14e0
    stfs f2, 0xb8(r1)
    stfs f2, 0xa0(r1)
    frsp f2, f2
    psq_st f1, 0x0(r30), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x14e8(r31)
    b lbl_fn_804596E8_00000734
lbl_fn_804596E8_0000040C:
    lwz r0, 0x40(r4)
    cmpwi r0, 0x1
    bne lbl_fn_804596E8_00000734
    lwz r0, 0x3c(r6)
    cmpwi r0, 0x3
    blt lbl_fn_804596E8_0000072C
    cmpwi r5, 0x7
    beq lbl_fn_804596E8_0000072C
    lfs f4, 0x30(r4)
    lfs f3, lbl_80886C78
    lwz r0, 0x18ec(r3)
    fmuls f5, f4, f3
    lfs f0, 0x28(r4)
    cmpwi r0, 0x0
    fmuls f4, f0, f3
    lfs f3, lbl_80886C34
    stfs f5, 0x124(r1)
    stfs f4, 0x11c(r1)
    stfs f3, 0x120(r1)
    beq lbl_fn_804596E8_00000478
    lfs f0, lbl_80886C50
    fmuls f4, f4, f0
    fmuls f3, f3, f0
    fmuls f0, f5, f0
    stfs f4, 0x11c(r1)
    stfs f3, 0x120(r1)
    stfs f0, 0x124(r1)
lbl_fn_804596E8_00000478:
    lbz r0, 0x197c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804596E8_0000072C
    li r0, 0x0
    addi r4, r1, 0x11c
    lfs f2, 0x124(r1)
    addi r30, r1, 0xf8
    psq_l f1, 0x0(r4), 0, 0
    stw r0, 0x14bc(r3)
    stw r0, 0x14c0(r3)
    psq_st f1, 0x0(r30), 0, 0
    lwz r3, lbl_8087F048
    stfs f2, 0x100(r1)
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0x8
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f0, lbl_80886C30
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80886C34
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x33
    lfs f2, lbl_80886C38
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    addi r3, r1, 0x8
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x100(r1)
    mr r4, r3
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x10(r1)
    bl fn_805F98D0
    psq_l f1, 0x0(r30), 0, 0
    addi r4, r1, 0x14
    psq_st f1, 0x0(r4), 0, 0
    addi r3, r1, 0x2c
    lfs f2, 0x100(r1)
    addi r30, r1, 0x20
    lfs f3, 0x18(r1)
    lfs f0, lbl_80886C68
    stfs f2, 0x6c0(r31)
    fmuls f3, f3, f0
    lfs f0, lbl_80886C6C
    stfs f2, 0x1c(r1)
    stfs f3, 0x18(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x6b8(r31), 0, 0
    lfs f3, 0x10(r1)
    lfs f4, 0xc(r1)
    fneg f5, f3
    lfs f3, 0x8(r1)
    fneg f4, f4
    fneg f3, f3
    stfs f5, 0x34(r1)
    frsp f2, f5
    stfs f3, 0x2c(r1)
    fabs f3, f2
    stfs f4, 0x30(r1)
    psq_l f1, 0x0(r3), 0, 0
    frsp f3, f3
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x28(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_804596E8_000005C0
    lfs f3, 0x20(r1)
    lfs f0, lbl_80886C34
    fcmpo cr0, f3, f0
    ble lbl_fn_804596E8_000005B4
    lfs f0, lbl_80886C70
    b lbl_fn_804596E8_000005B8
lbl_fn_804596E8_000005B4:
    lfs f0, lbl_80886C74
lbl_fn_804596E8_000005B8:
    stfs f0, 0x3c(r1)
    b lbl_fn_804596E8_000005D4
lbl_fn_804596E8_000005C0:
    frsp f2, f2
    lfs f1, 0x20(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x3c(r1)
lbl_fn_804596E8_000005D4:
    lfs f0, 0x3c(r1)
    addi r3, r1, 0x178
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80886C34
    addi r4, r1, 0x44
    lfs f4, 0x180(r1)
    mr r5, r4
    lfs f5, 0x17c(r1)
    addi r3, r1, 0x138
    lfs f6, 0x178(r1)
    lfs f7, 0x190(r1)
    lfs f8, 0x18c(r1)
    lfs f9, 0x188(r1)
    lfs f10, 0x1a0(r1)
    lfs f11, 0x19c(r1)
    lfs f12, 0x198(r1)
    lfs f13, 0x1a4(r1)
    lfs f30, 0x194(r1)
    lfs f31, 0x184(r1)
    lfs f0, lbl_80886C30
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x28(r1)
    stfs f3, 0x168(r1)
    stfs f3, 0x16c(r1)
    stfs f3, 0x170(r1)
    stfs f0, 0x174(r1)
    stfs f6, 0x74(r1)
    stfs f5, 0x78(r1)
    stfs f4, 0x7c(r1)
    stfs f6, 0x138(r1)
    stfs f5, 0x13c(r1)
    stfs f4, 0x140(r1)
    stfs f9, 0x68(r1)
    stfs f8, 0x6c(r1)
    stfs f7, 0x70(r1)
    stfs f9, 0x148(r1)
    stfs f8, 0x14c(r1)
    stfs f7, 0x150(r1)
    stfs f12, 0x5c(r1)
    stfs f11, 0x60(r1)
    stfs f10, 0x64(r1)
    stfs f12, 0x158(r1)
    stfs f11, 0x15c(r1)
    stfs f10, 0x160(r1)
    stfs f31, 0x50(r1)
    stfs f30, 0x54(r1)
    stfs f13, 0x58(r1)
    stfs f31, 0x144(r1)
    stfs f30, 0x154(r1)
    stfs f13, 0x164(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x4c(r1)
    bl fn_805F9750
    lfs f2, 0x4c(r1)
    lfs f0, lbl_80886C6C
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_804596E8_000006F0
    lfs f3, 0x48(r1)
    lfs f0, lbl_80886C34
    fcmpo cr0, f3, f0
    ble lbl_fn_804596E8_000006E0
    lfs f0, lbl_80886C70
    b lbl_fn_804596E8_000006E4
lbl_fn_804596E8_000006E0:
    lfs f0, lbl_80886C74
lbl_fn_804596E8_000006E4:
    fneg f0, f0
    stfs f0, 0x38(r1)
    b lbl_fn_804596E8_00000704
lbl_fn_804596E8_000006F0:
    lfs f1, 0x48(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x38(r1)
lbl_fn_804596E8_00000704:
    lfs f2, lbl_80886C34
    addi r3, r1, 0x38
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r31, 0x14e0
    stfs f2, 0x40(r1)
    stfs f2, 0x28(r1)
    frsp f2, f2
    psq_st f1, 0x0(r30), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x14e8(r31)
lbl_fn_804596E8_0000072C:
    li r0, 0xf
    stw r0, 0x18e0(r31)
lbl_fn_804596E8_00000734:
    lwz r0, 0x18ec(r31)
    cmpwi r0, 0x0
    bne lbl_fn_804596E8_000007AC
    lwz r0, 0x940(r31)
    cmpwi r0, 0x0
    ble lbl_fn_804596E8_00000778
    xoris r3, r0, 0x8000
    lis r0, 0x4330
    lis r4, lbl_80754DB8@ha
    stw r3, 0x21c(r1)
    lfd f4, lbl_80754DB8@l(r4)
    stw r0, 0x218(r1)
    lfs f0, 0x7d8(r31)
    lfd f3, 0x218(r1)
    fsubs f3, f3, f4
    fdivs f3, f0, f3
    b lbl_fn_804596E8_0000077C
lbl_fn_804596E8_00000778:
    lfs f3, lbl_80886C34
lbl_fn_804596E8_0000077C:
    lfs f0, lbl_80886C7C
    fcmpo cr0, f3, f0
    bge lbl_fn_804596E8_000007AC
    lwz r3, lbl_8087F430
    li r4, 0xce
    bl fn_80370A78
    cmpwi r3, 0x0
    bne lbl_fn_804596E8_000007AC
    lwz r3, lbl_8087F430
    li r4, 0xce
    li r5, 0x1
    bl fn_80370AE4
lbl_fn_804596E8_000007AC:
    lwz r0, 0x254(r1)
    psq_l f31, 0x248(r1), 0, 0
    lfd f31, 0x240(r1)
    psq_l f30, 0x238(r1), 0, 0
    lfd f30, 0x230(r1)
    lwz r31, 0x22c(r1)
    lwz r30, 0x228(r1)
    mtlr r0
    addi r1, r1, 0x250
    blr
}

asm void fn_80459EBC(void)
{
    nofralloc
    psq_l f1, 0x528(r4), 0, 0
    cmpwi r5, 0x0
    lfs f2, 0x530(r4)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
    bne lbl_fn_80459EBC_00000800
    psq_l f1, 0x528(r4), 0, 0
    lfs f2, 0x530(r4)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
    blr
lbl_fn_80459EBC_00000800:
    lwz r0, 0x18d0(r4)
    cmpwi r0, 0x0
    beqlr
    lwz r0, 0x58c(r4)
    cmpwi r0, 0xc
    beqlr
    lwz r0, 0x18c8(r4)
    lwz r4, 0x62c(r4)
    mulli r0, r0, 0x14
    add r4, r4, r0
    psq_l f1, 0x4(r4), 0, 0
    lfs f2, 0xc(r4)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
    blr
}

asm void fn_80459F24(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    lwz r5, lbl_8087F048
    cmpwi r5, 0x0
    beq lbl_fn_80459F24_000008B8
    addis r4, r5, 0x4
    addi r0, r3, 0x18fc
    lwz r4, -0x1d18(r4)
    cmplw r4, r0
    beq lbl_fn_80459F24_000008B8
    lwz r3, 0x5c(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80459F24_000008B8
    lwz r4, 0xc4(r3)
    cmpwi r4, 0x0
    ble lbl_fn_80459F24_000008B8
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80459F24_000008B8
    addi r3, r3, 0x54f4
    bl fn_803B3B38
    cmpwi r3, 0x0
    beq lbl_fn_80459F24_000008B8
    lwz r4, 0x8(r3)
    mr r3, r31
    bl fn_80686A64
    li r3, 0x1
    b lbl_fn_80459F24_000008BC
lbl_fn_80459F24_000008B8:
    li r3, 0x0
lbl_fn_80459F24_000008BC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80459FB8(void)
{
    nofralloc
    addi r0, r3, 0x18fc
    subf r3, r4, r0
    subf r0, r0, r4
    or r0, r3, r0
    srwi r3, r0, 31
    blr
}

asm void fn_80459FD0(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    addi r11, r1, 0xa0
    stfd f31, 0xa0(r1)
    psq_st f31, 0xa8(r1), 0, 0
    bl _savegpr_21
    lfs f2, lbl_80886C34
    lis r4, lbl_80754C24@ha
    stfs f2, 0x20(r1)
    li r0, 0x0
    addi r5, r1, 0x20
    lfs f0, lbl_80886C78
    stfs f2, 0x24(r1)
    addi r29, r1, 0x60
    lfs f31, lbl_80886C80
    mr r22, r3
    psq_l f1, 0x0(r5), 0, 0
    addi r30, r4, lbl_80754C24@l
    stw r0, 0x5c(r1)
    addi r27, r1, 0x2c
    addi r28, r1, 0x50
    li r23, 0x0
    stfs f2, 0x28(r1)
    li r21, 0x0
    lis r31, fn_80148990@ha
    li r25, 0x8
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x68(r1)
    stfs f0, 0x6c(r1)
lbl_fn_80459FD0_00000960:
    lwzx r4, r30, r21
    add r26, r30, r21
    addi r3, r22, 0xb0
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80459FD0_00000984
    li r24, 0x0
    b lbl_fn_80459FD0_00000990
lbl_fn_80459FD0_00000984:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r22)
    add r24, r3, r0
lbl_fn_80459FD0_00000990:
    lwz r4, 0x4(r26)
    addi r3, r22, 0xb0
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80459FD0_000009B0
    li r3, 0x0
    b lbl_fn_80459FD0_000009BC
lbl_fn_80459FD0_000009B0:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r22)
    add r3, r3, r0
lbl_fn_80459FD0_000009BC:
    cmpwi r24, 0x0
    beq lbl_fn_80459FD0_00000E10
    cmpwi r3, 0x0
    beq lbl_fn_80459FD0_00000A54
    lfs f6, 0x1c(r3)
    lfs f3, 0x1c(r24)
    lfs f7, 0xc(r3)
    lfs f4, 0xc(r24)
    fsubs f10, f6, f3
    lfs f5, 0x2c(r3)
    lfs f0, 0x2c(r24)
    fsubs f9, f7, f4
    stfs f7, 0x38(r1)
    fmuls f7, f10, f31
    fsubs f11, f5, f0
    stfs f6, 0x3c(r1)
    fmuls f6, f9, f31
    fmuls f8, f11, f31
    stfs f5, 0x40(r1)
    fadds f5, f7, f3
    stfs f4, 0x44(r1)
    fadds f4, f6, f4
    fadds f2, f8, f0
    stfs f5, 0x54(r1)
    stfs f4, 0x50(r1)
    psq_l f1, 0x0(r28), 0, 0
    stfs f3, 0x48(r1)
    stfs f0, 0x4c(r1)
    stfs f9, 0x14(r1)
    stfs f10, 0x18(r1)
    stfs f11, 0x1c(r1)
    stfs f6, 0x8(r1)
    stfs f7, 0xc(r1)
    stfs f8, 0x10(r1)
    stfs f2, 0x58(r1)
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x68(r1)
    b lbl_fn_80459FD0_00000A78
lbl_fn_80459FD0_00000A54:
    lfs f0, 0x1c(r24)
    lfs f3, 0xc(r24)
    stfs f3, 0x2c(r1)
    lfs f2, 0x2c(r24)
    stfs f0, 0x30(r1)
    psq_l f1, 0x0(r27), 0, 0
    stfs f2, 0x34(r1)
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x68(r1)
lbl_fn_80459FD0_00000A78:
    lwz r0, 0x62c(r22)
    add r3, r30, r21
    lfs f0, 0x14(r3)
    cmpwi r0, 0x0
    stfs f0, 0x6c(r1)
    beq lbl_fn_80459FD0_00000A9C
    lwz r0, 0x628(r22)
    cmpwi r0, 0x0
    bne lbl_fn_80459FD0_00000C34
lbl_fn_80459FD0_00000A9C:
    lwz r0, 0x628(r22)
    cmplwi r0, 0x8
    bgt lbl_fn_80459FD0_00000DD8
    li r3, 0xb0
    li r4, 0x0
    la r5, lbl_8087D9E4
    la r6, lbl_8087D9E0
    li r7, 0x0
    bl fn_800846FC
    addi r4, r31, fn_80148990@l
    li r5, 0x0
    li r6, 0x14
    li r7, 0x8
    bl fn_80695720
    lwz r0, 0x62c(r22)
    mr r26, r3
    cmpwi r0, 0x0
    beq lbl_fn_80459FD0_00000C28
    lwz r0, 0x624(r22)
    li r5, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_80459FD0_00000AF8
    mr r5, r0
lbl_fn_80459FD0_00000AF8:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_80459FD0_00000C14
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_80459FD0_00000BDC
lbl_fn_80459FD0_00000B10:
    lwz r0, 0x62c(r22)
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
    lwz r0, 0x62c(r22)
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
    lwz r0, 0x62c(r22)
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
    lwz r0, 0x62c(r22)
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
    bdnz lbl_fn_80459FD0_00000B10
    andi. r5, r5, 0x3
    beq lbl_fn_80459FD0_00000C14
lbl_fn_80459FD0_00000BDC:
    mtctr r5
lbl_fn_80459FD0_00000BE0:
    lwz r0, 0x62c(r22)
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
    bdnz lbl_fn_80459FD0_00000BE0
lbl_fn_80459FD0_00000C14:
    lwz r3, 0x62c(r22)
    cmpwi r3, 0x0
    beq lbl_fn_80459FD0_00000C28
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80459FD0_00000C28:
    stw r26, 0x62c(r22)
    stw r25, 0x628(r22)
    b lbl_fn_80459FD0_00000DD8
lbl_fn_80459FD0_00000C34:
    lwz r3, 0x624(r22)
    cmplw r3, r0
    blt lbl_fn_80459FD0_00000DD8
    slwi r26, r3, 1
    cmplw r0, r26
    bgt lbl_fn_80459FD0_00000DD8
    mulli r3, r26, 0x14
    li r4, 0x0
    la r5, lbl_8087D9E4
    la r6, lbl_8087D9E0
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    mr r7, r26
    addi r4, r31, fn_80148990@l
    li r5, 0x0
    li r6, 0x14
    bl fn_80695720
    lwz r0, 0x62c(r22)
    mr r24, r3
    cmpwi r0, 0x0
    beq lbl_fn_80459FD0_00000DD0
    lwz r0, 0x624(r22)
    mr r5, r26
    cmplw r26, r0
    ble lbl_fn_80459FD0_00000CA0
    mr r5, r0
lbl_fn_80459FD0_00000CA0:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_80459FD0_00000DBC
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_80459FD0_00000D84
lbl_fn_80459FD0_00000CB8:
    lwz r0, 0x62c(r22)
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
    lwz r0, 0x62c(r22)
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
    lwz r0, 0x62c(r22)
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
    lwz r0, 0x62c(r22)
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
    bdnz lbl_fn_80459FD0_00000CB8
    andi. r5, r5, 0x3
    beq lbl_fn_80459FD0_00000DBC
lbl_fn_80459FD0_00000D84:
    mtctr r5
lbl_fn_80459FD0_00000D88:
    lwz r0, 0x62c(r22)
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
    bdnz lbl_fn_80459FD0_00000D88
lbl_fn_80459FD0_00000DBC:
    lwz r3, 0x62c(r22)
    cmpwi r3, 0x0
    beq lbl_fn_80459FD0_00000DD0
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80459FD0_00000DD0:
    stw r24, 0x62c(r22)
    stw r26, 0x628(r22)
lbl_fn_80459FD0_00000DD8:
    lwz r0, 0x624(r22)
    lwz r4, 0x62c(r22)
    mulli r3, r0, 0x14
    lwz r0, 0x5c(r1)
    stwux r0, r3, r4
    psq_l f1, 0x0(r29), 0, 0
    psq_st f1, 0x4(r3), 0, 0
    lfs f2, 0x68(r1)
    stfs f2, 0xc(r3)
    lfs f0, 0x6c(r1)
    stfs f0, 0x10(r3)
    lwz r3, 0x624(r22)
    addi r0, r3, 0x1
    stw r0, 0x624(r22)
lbl_fn_80459FD0_00000E10:
    addi r23, r23, 0x1
    addi r21, r21, 0x1c
    cmpwi r23, 0x3
    blt lbl_fn_80459FD0_00000960
    lwz r0, 0x62c(r22)
    addi r4, r22, 0x1948
    lfs f2, 0x1950(r22)
    addi r3, r1, 0x60
    psq_l f1, 0x0(r4), 0, 0
    cmpwi r0, 0x0
    lfs f0, 0x1954(r22)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x68(r1)
    stfs f0, 0x6c(r1)
    beq lbl_fn_80459FD0_00000E58
    lwz r0, 0x628(r22)
    cmpwi r0, 0x0
    bne lbl_fn_80459FD0_00000FF8
lbl_fn_80459FD0_00000E58:
    lwz r0, 0x628(r22)
    li r21, 0x8
    cmplwi r0, 0x8
    bgt lbl_fn_80459FD0_000011A0
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
    lwz r0, 0x62c(r22)
    mr r23, r3
    cmpwi r0, 0x0
    beq lbl_fn_80459FD0_00000FEC
    lwz r0, 0x624(r22)
    li r5, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_80459FD0_00000EBC
    mr r5, r0
lbl_fn_80459FD0_00000EBC:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_80459FD0_00000FD8
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_80459FD0_00000FA0
lbl_fn_80459FD0_00000ED4:
    lwz r0, 0x62c(r22)
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
    lwz r0, 0x62c(r22)
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
    lwz r0, 0x62c(r22)
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
    lwz r0, 0x62c(r22)
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
    bdnz lbl_fn_80459FD0_00000ED4
    andi. r5, r5, 0x3
    beq lbl_fn_80459FD0_00000FD8
lbl_fn_80459FD0_00000FA0:
    mtctr r5
lbl_fn_80459FD0_00000FA4:
    lwz r0, 0x62c(r22)
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
    bdnz lbl_fn_80459FD0_00000FA4
lbl_fn_80459FD0_00000FD8:
    lwz r3, 0x62c(r22)
    cmpwi r3, 0x0
    beq lbl_fn_80459FD0_00000FEC
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80459FD0_00000FEC:
    stw r23, 0x62c(r22)
    stw r21, 0x628(r22)
    b lbl_fn_80459FD0_000011A0
lbl_fn_80459FD0_00000FF8:
    lwz r3, 0x624(r22)
    cmplw r3, r0
    blt lbl_fn_80459FD0_000011A0
    slwi r21, r3, 1
    cmplw r0, r21
    bgt lbl_fn_80459FD0_000011A0
    mulli r3, r21, 0x14
    li r4, 0x0
    la r5, lbl_8087D9E4
    la r6, lbl_8087D9E0
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_80148990@ha
    mr r7, r21
    addi r4, r4, fn_80148990@l
    li r5, 0x0
    li r6, 0x14
    bl fn_80695720
    lwz r0, 0x62c(r22)
    mr r23, r3
    cmpwi r0, 0x0
    beq lbl_fn_80459FD0_00001198
    lwz r0, 0x624(r22)
    mr r5, r21
    cmplw r21, r0
    ble lbl_fn_80459FD0_00001068
    mr r5, r0
lbl_fn_80459FD0_00001068:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_80459FD0_00001184
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_80459FD0_0000114C
lbl_fn_80459FD0_00001080:
    lwz r0, 0x62c(r22)
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
    lwz r0, 0x62c(r22)
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
    lwz r0, 0x62c(r22)
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
    lwz r0, 0x62c(r22)
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
    bdnz lbl_fn_80459FD0_00001080
    andi. r5, r5, 0x3
    beq lbl_fn_80459FD0_00001184
lbl_fn_80459FD0_0000114C:
    mtctr r5
lbl_fn_80459FD0_00001150:
    lwz r0, 0x62c(r22)
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
    bdnz lbl_fn_80459FD0_00001150
lbl_fn_80459FD0_00001184:
    lwz r3, 0x62c(r22)
    cmpwi r3, 0x0
    beq lbl_fn_80459FD0_00001198
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80459FD0_00001198:
    stw r23, 0x62c(r22)
    stw r21, 0x628(r22)
lbl_fn_80459FD0_000011A0:
    lwz r0, 0x624(r22)
    addi r5, r1, 0x60
    lwz r4, 0x62c(r22)
    mulli r3, r0, 0x14
    lwz r0, 0x5c(r1)
    stwux r0, r3, r4
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x4(r3), 0, 0
    lfs f2, 0x68(r1)
    stfs f2, 0xc(r3)
    lfs f0, 0x6c(r1)
    stfs f0, 0x10(r3)
    lwz r3, 0x624(r22)
    lwz r0, 0x12a8(r22)
    addi r3, r3, 0x1
    stw r3, 0x624(r22)
    rlwinm r0, r0, 0, 3, 1
    stw r0, 0x12a8(r22)
    psq_l f31, 0xa8(r1), 0, 0
    lfd f31, 0xa0(r1)
    addi r11, r1, 0xa0
    bl _restgpr_21
    lwz r0, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_8045A8F0(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    addi r11, r1, 0xd0
    stfd f31, 0x110(r1)
    psq_st f31, 0x118(r1), 0, 0
    stfd f30, 0x100(r1)
    psq_st f30, 0x108(r1), 0, 0
    stfd f29, 0xf0(r1)
    psq_st f29, 0xf8(r1), 0, 0
    stfd f28, 0xe0(r1)
    psq_st f28, 0xe8(r1), 0, 0
    stfd f27, 0xd0(r1)
    psq_st f27, 0xd8(r1), 0, 0
    bl _savegpr_22
    lwz r0, 0x624(r3)
    mr r27, r3
    cmpwi r0, 0x0
    beq lbl_fn_8045A8F0_0000148C
    lis r3, lbl_80754C24@ha
    lfs f27, lbl_80886C34
    lfs f28, lbl_80886C30
    addi r24, r3, lbl_80754C24@l
    lfs f31, lbl_80886C80
    addi r29, r1, 0x20
    lfs f29, lbl_80886C84
    addi r30, r1, 0x44
    lfs f30, lbl_80886C64
    addi r31, r1, 0x68
    li r28, 0x0
    li r26, 0x0
    li r25, 0x0
lbl_fn_8045A8F0_00001288:
    cmpwi r28, 0x0
    bne lbl_fn_8045A8F0_00001338
    stfs f27, 0x50(r1)
    addi r3, r1, 0x78
    li r4, 0x79
    stfs f27, 0x54(r1)
    stfs f28, 0x58(r1)
    lfs f1, 0x538(r27)
    bl fn_805F8E70
    addi r4, r1, 0x50
    addi r3, r1, 0x78
    mr r5, r4
    bl fn_805F93C0
    lfs f3, 0x54(r1)
    add r3, r24, r26
    lfs f0, 0x50(r1)
    fmuls f5, f3, f29
    lfs f3, 0x52c(r27)
    fmuls f6, f0, f29
    lfs f0, 0x528(r27)
    lfs f4, 0x58(r1)
    fsubs f7, f3, f5
    fsubs f0, f0, f6
    lwz r0, 0x62c(r27)
    fmuls f4, f4, f29
    stfs f7, 0x6c(r1)
    lfs f3, 0x530(r27)
    stfs f0, 0x68(r1)
    fsubs f2, f3, f4
    add r4, r0, r25
    psq_l f1, 0x0(r31), 0, 0
    psq_st f1, 0x4(r4), 0, 0
    lfs f3, 0x14(r3)
    stfs f2, 0xc(r4)
    lwz r0, 0x62c(r27)
    stfs f6, 0x5c(r1)
    add r3, r0, r25
    lfs f0, 0x8(r3)
    stfs f5, 0x60(r1)
    fmadds f0, f30, f3, f0
    stfs f4, 0x64(r1)
    stfs f2, 0x70(r1)
    stfs f0, 0x8(r3)
    b lbl_fn_8045A8F0_00001460
lbl_fn_8045A8F0_00001338:
    lwzx r4, r24, r26
    add r22, r24, r26
    addi r3, r27, 0xb0
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8045A8F0_0000135C
    li r23, 0x0
    b lbl_fn_8045A8F0_00001368
lbl_fn_8045A8F0_0000135C:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r27)
    add r23, r3, r0
lbl_fn_8045A8F0_00001368:
    lwz r4, 0x4(r22)
    addi r3, r27, 0xb0
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8045A8F0_00001388
    li r3, 0x0
    b lbl_fn_8045A8F0_00001394
lbl_fn_8045A8F0_00001388:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r27)
    add r3, r3, r0
lbl_fn_8045A8F0_00001394:
    cmpwi r23, 0x0
    beq lbl_fn_8045A8F0_00001460
    cmpwi r3, 0x0
    beq lbl_fn_8045A8F0_00001434
    lfs f6, 0x1c(r3)
    lfs f3, 0x1c(r23)
    lfs f7, 0xc(r3)
    lfs f4, 0xc(r23)
    fsubs f12, f6, f3
    lfs f5, 0x2c(r3)
    fsubs f11, f7, f4
    lfs f0, 0x2c(r23)
    fmuls f9, f12, f31
    stfs f7, 0x2c(r1)
    fsubs f13, f5, f0
    lwz r0, 0x62c(r27)
    fmuls f8, f11, f31
    stfs f6, 0x30(r1)
    fmuls f10, f13, f31
    add r3, r0, r25
    fadds f7, f9, f3
    stfs f5, 0x34(r1)
    fadds f6, f8, f4
    stfs f7, 0x48(r1)
    fadds f2, f10, f0
    stfs f6, 0x44(r1)
    psq_l f1, 0x0(r30), 0, 0
    psq_st f1, 0x4(r3), 0, 0
    stfs f4, 0x38(r1)
    stfs f3, 0x3c(r1)
    stfs f0, 0x40(r1)
    stfs f11, 0x14(r1)
    stfs f12, 0x18(r1)
    stfs f13, 0x1c(r1)
    stfs f8, 0x8(r1)
    stfs f9, 0xc(r1)
    stfs f10, 0x10(r1)
    stfs f2, 0x4c(r1)
    stfs f2, 0xc(r3)
    b lbl_fn_8045A8F0_00001460
lbl_fn_8045A8F0_00001434:
    lfs f0, 0x1c(r23)
    lfs f3, 0xc(r23)
    lwz r0, 0x62c(r27)
    lfs f2, 0x2c(r23)
    stfs f3, 0x20(r1)
    add r3, r0, r25
    stfs f0, 0x24(r1)
    psq_l f1, 0x0(r29), 0, 0
    psq_st f1, 0x4(r3), 0, 0
    stfs f2, 0x28(r1)
    stfs f2, 0xc(r3)
lbl_fn_8045A8F0_00001460:
    addi r28, r28, 0x1
    addi r25, r25, 0x14
    cmpwi r28, 0x3
    addi r26, r26, 0x1c
    blt lbl_fn_8045A8F0_00001288
    addi r3, r27, 0x1948
    lwz r4, 0x62c(r27)
    lfs f2, 0x1950(r27)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x40(r4), 0, 0
    stfs f2, 0x48(r4)
lbl_fn_8045A8F0_0000148C:
    addi r11, r1, 0xd0
    psq_l f31, 0x118(r1), 0, 0
    lfd f31, 0x110(r1)
    psq_l f30, 0x108(r1), 0, 0
    lfd f30, 0x100(r1)
    psq_l f29, 0xf8(r1), 0, 0
    lfd f29, 0xf0(r1)
    psq_l f28, 0xe8(r1), 0, 0
    lfd f28, 0xe0(r1)
    psq_l f27, 0xd8(r1), 0, 0
    lfd f27, 0xd0(r1)
    bl _restgpr_22
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_8045ABB4(void)
{
    nofralloc
    stwu r1, -0x210(r1)
    mflr r0
    stw r0, 0x214(r1)
    stfd f31, 0x200(r1)
    psq_st f31, 0x208(r1), 0, 0
    stfd f30, 0x1f0(r1)
    psq_st f30, 0x1f8(r1), 0, 0
    fmr f30, f2
    stfd f29, 0x1e0(r1)
    psq_st f29, 0x1e8(r1), 0, 0
    fmr f29, f1
    stw r31, 0x1dc(r1)
    mr r31, r3
    stw r30, 0x1d8(r1)
    stw r29, 0x1d4(r1)
    stw r28, 0x1d0(r1)
    lbz r0, 0x197c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8045ABB4_0000151C
    lfs f29, lbl_80886C34
lbl_fn_8045ABB4_0000151C:
    addi r5, r1, 0xcc
    psq_l f1, 0x528(r3), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    addi r5, r1, 0xc0
    psq_l f1, 0x534(r3), 0, 0
    li r0, 0x0
    psq_st f1, 0x0(r5), 0, 0
    lis r5, lbl_80754DC0@ha
    lfs f3, 0x4(r4)
    lfs f0, 0xc4(r1)
    lfs f2, 0x530(r3)
    stfs f2, 0xd4(r1)
    fsubs f1, f3, f0
    lfs f2, 0x53c(r3)
    stfs f2, 0xc8(r1)
    lfd f2, lbl_80754DC0@l(r5)
    stw r0, 0x14c8(r3)
    bl fn_8068AEA8
    frsp f6, f1
    lfs f0, lbl_80886C88
    fcmpo cr0, f6, f0
    ble lbl_fn_8045ABB4_0000157C
    lfs f0, lbl_80886C8C
    fsubs f6, f6, f0
lbl_fn_8045ABB4_0000157C:
    lfs f0, lbl_80886C90
    fcmpo cr0, f6, f0
    bge lbl_fn_8045ABB4_00001590
    lfs f0, lbl_80886C8C
    fadds f6, f6, f0
lbl_fn_8045ABB4_00001590:
    lfs f0, lbl_80886C88
    lwz r3, lbl_8087EFA8
    fdivs f0, f6, f0
    lfs f4, lbl_80886C94
    lfs f3, lbl_80886C30
    lfs f7, 0x56c(r31)
    lfs f1, 0xc4(r1)
    lfs f31, 0x3a4(r3)
    fabs f5, f0
    lfs f0, lbl_80886C98
    frsp f5, f5
    fmuls f4, f5, f4
    fadds f3, f3, f4
    fmuls f7, f7, f3
    fmuls f3, f6, f7
    fcmpo cr0, f3, f0
    fadds f1, f1, f3
    bge lbl_fn_8045ABB4_000015E0
    li r0, 0x1
    stw r0, 0x14c8(r31)
lbl_fn_8045ABB4_000015E0:
    lfs f3, lbl_80886C34
    addi r3, r1, 0x148
    lfs f0, lbl_80886C30
    li r4, 0x79
    stfs f1, 0xc4(r1)
    stfs f3, 0xb4(r1)
    stfs f3, 0xb8(r1)
    stfs f0, 0xbc(r1)
    bl fn_805F8E70
    addi r4, r1, 0xb4
    addi r3, r1, 0x148
    mr r5, r4
    bl fn_805F93C0
    lfs f0, lbl_80886C9C
    fcmpo cr0, f29, f0
    ble lbl_fn_8045ABB4_00001654
    fmuls f5, f0, f30
    lfs f4, 0xb4(r1)
    lfs f3, 0xb8(r1)
    li r0, 0x1
    lfs f0, 0xbc(r1)
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    fmuls f0, f0, f5
    stfs f4, 0xb4(r1)
    stfs f3, 0xb8(r1)
    stfs f0, 0xbc(r1)
    stw r0, 0x14c8(r31)
    b lbl_fn_8045ABB4_0000167C
lbl_fn_8045ABB4_00001654:
    lfs f4, 0xb4(r1)
    lfs f5, lbl_80886C34
    lfs f3, 0xb8(r1)
    lfs f0, 0xbc(r1)
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    fmuls f0, f0, f5
    stfs f4, 0xb4(r1)
    stfs f3, 0xb8(r1)
    stfs f0, 0xbc(r1)
lbl_fn_8045ABB4_0000167C:
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x7
    beq lbl_fn_8045ABB4_000016A4
    cmpwi r0, 0x8
    beq lbl_fn_8045ABB4_000016A4
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
lbl_fn_8045ABB4_000016A4:
    lwz r4, lbl_8087F0A8
    lis r0, 0x4330
    lis r3, lbl_80754DB8@ha
    lfs f7, lbl_80886C30
    lwz r4, 0x30(r4)
    stw r0, 0x1c8(r1)
    fcmpo cr0, f7, f31
    mullw r0, r4, r4
    lfd f6, lbl_80754DB8@l(r3)
    lfs f4, lbl_80886C54
    lfs f3, lbl_80886CA0
    lfs f0, 0xb8(r1)
    xoris r0, r0, 0x8000
    stw r0, 0x1cc(r1)
    lfd f5, 0x1c8(r1)
    fsubs f5, f5, f6
    fdivs f4, f4, f5
    fmuls f4, f31, f4
    fmadds f0, f3, f4, f0
    stfs f0, 0xb8(r1)
    bge lbl_fn_8045ABB4_000016FC
    b lbl_fn_8045ABB4_00001700
lbl_fn_8045ABB4_000016FC:
    fmr f7, f31
lbl_fn_8045ABB4_00001700:
    lfs f3, 0x6b8(r31)
    lfs f0, 0xb4(r1)
    lfs f5, lbl_80886C30
    fmadds f0, f3, f7, f0
    fcmpo cr0, f5, f31
    stfs f0, 0xb4(r1)
    bge lbl_fn_8045ABB4_00001720
    b lbl_fn_8045ABB4_00001724
lbl_fn_8045ABB4_00001720:
    fmr f5, f31
lbl_fn_8045ABB4_00001724:
    lfs f4, 0x6c0(r31)
    lfs f3, 0xbc(r1)
    lfs f0, lbl_80886CA4
    fmadds f3, f4, f5, f3
    lfs f4, 0xb8(r1)
    fmuls f0, f0, f31
    lfs f5, lbl_80886C30
    stfs f3, 0xbc(r1)
    lfs f3, 0x6bc(r31)
    fcmpo cr0, f5, f0
    fadds f3, f4, f3
    stfs f3, 0xb8(r1)
    bge lbl_fn_8045ABB4_0000175C
    b lbl_fn_8045ABB4_00001760
lbl_fn_8045ABB4_0000175C:
    fmr f5, f0
lbl_fn_8045ABB4_00001760:
    lfs f0, lbl_80886CA4
    lfs f3, 0x6c0(r31)
    fmuls f0, f0, f31
    lfs f4, lbl_80886C30
    fmuls f5, f3, f5
    fcmpo cr0, f4, f0
    bge lbl_fn_8045ABB4_00001780
    b lbl_fn_8045ABB4_00001784
lbl_fn_8045ABB4_00001780:
    fmr f4, f0
lbl_fn_8045ABB4_00001784:
    lfs f0, lbl_80886CA4
    lfs f3, 0x6bc(r31)
    fmuls f0, f0, f31
    lfs f7, lbl_80886C30
    fmuls f6, f3, f4
    fcmpo cr0, f7, f0
    bge lbl_fn_8045ABB4_000017A4
    b lbl_fn_8045ABB4_000017A8
lbl_fn_8045ABB4_000017A4:
    fmr f7, f0
lbl_fn_8045ABB4_000017A8:
    lfs f3, 0x6b8(r31)
    addi r3, r31, 0x6b8
    lfs f0, 0x6c0(r31)
    fmuls f7, f3, f7
    lfs f4, 0x6b8(r31)
    fsubs f3, f0, f5
    lfs f0, lbl_80886C34
    stfs f7, 0x80(r1)
    fsubs f4, f4, f7
    stfs f6, 0x84(r1)
    stfs f5, 0x88(r1)
    stfs f4, 0x6b8(r31)
    stfs f3, 0x6c0(r31)
    stfs f0, 0x6bc(r31)
    bl fn_805F9940
    lfs f0, lbl_80886C50
    fcmpo cr0, f1, f0
    bge lbl_fn_8045ABB4_00001800
    lfs f0, lbl_80886C34
    stfs f0, 0x6b8(r31)
    stfs f0, 0x6bc(r31)
    stfs f0, 0x6c0(r31)
lbl_fn_8045ABB4_00001800:
    lfs f3, 0xb8(r1)
    lfs f0, lbl_80886CA8
    fcmpo cr0, f3, f0
    bge lbl_fn_8045ABB4_00001814
    stfs f0, 0xb8(r1)
lbl_fn_8045ABB4_00001814:
    li r0, 0x0
    addi r30, r1, 0xcc
    lfs f2, 0xd4(r1)
    addi r4, r1, 0xa8
    psq_l f1, 0x0(r30), 0, 0
    addi r29, r1, 0x98
    stw r0, 0x1ac(r1)
    mr r3, r31
    lis r28, 0x8000
    stw r0, 0x1b0(r1)
    stw r0, 0x1b4(r1)
    stw r0, 0x1b8(r1)
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x614(r31), 0, 0
    stfs f2, 0xb0(r1)
    lfs f2, 0x61c(r31)
    stfs f2, 0xa0(r1)
    psq_st f1, 0x0(r29), 0, 0
    lfs f0, 0x620(r31)
    stfs f0, 0xa4(r1)
    bl fn_80179D44
    or r7, r28, r3
    lwz r3, lbl_8087EE98
    lfs f1, 0xa4(r1)
    mr r5, r29
    addi r4, r1, 0x178
    addi r6, r1, 0xb4
    addi r8, r31, 0x5b8
    li r9, 0x0
    bl fn_8004D388
    addi r3, r1, 0x188
    lwz r4, 0x1ac(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    cmpwi r4, 0x0
    lfs f0, 0x5a8(r31)
    lfs f3, 0xd0(r1)
    lfs f2, 0x190(r1)
    fsubs f4, f3, f0
    lfs f3, 0x5ac(r31)
    lfs f0, 0xa4(r1)
    fsubs f3, f2, f3
    lfs f6, 0xcc(r1)
    lfs f5, 0x5a4(r31)
    fsubs f0, f4, f0
    stfs f3, 0xd4(r1)
    fsubs f3, f6, f5
    stfs f0, 0xd0(r1)
    stfs f3, 0xcc(r1)
    beq lbl_fn_8045ABB4_000018E4
    lwz r0, 0x0(r4)
    b lbl_fn_8045ABB4_000018E8
lbl_fn_8045ABB4_000018E4:
    li r0, -0x1
lbl_fn_8045ABB4_000018E8:
    lfs f5, 0xd4(r1)
    addi r3, r1, 0x8c
    lfs f3, 0xb0(r1)
    stw r0, 0x634(r31)
    fsubs f5, f5, f3
    lfs f4, 0xd0(r1)
    lfs f0, 0xac(r1)
    lfs f3, 0xbc(r1)
    fsubs f6, f4, f0
    lfs f0, 0xb8(r1)
    fadds f7, f3, f5
    lfs f4, 0xcc(r1)
    lfs f3, 0xa8(r1)
    fadds f8, f0, f6
    fsubs f3, f4, f3
    lfs f0, 0xb4(r1)
    stfs f6, 0x78(r1)
    lfs f31, lbl_80886C34
    fadds f0, f0, f3
    stfs f3, 0x74(r1)
    stfs f5, 0x7c(r1)
    stfs f0, 0x8c(r1)
    stfs f8, 0x90(r1)
    stfs f7, 0x94(r1)
    bl fn_805F9920
    lfs f0, lbl_80886CAC
    fcmpo cr0, f1, f0
    ble lbl_fn_8045ABB4_00001B74
    fcmpo cr0, f29, f0
    ble lbl_fn_8045ABB4_00001B74
    addi r3, r1, 0x8c
    addi r29, r1, 0x5c
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r29
    lfs f2, 0x94(r1)
    mr r4, r29
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x64(r1)
    bl fn_805F98D0
    lfs f2, 0x64(r1)
    addi r30, r1, 0x68
    psq_l f1, 0x0(r29), 0, 0
    fabs f3, f2
    lfs f0, lbl_80886C6C
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0x70(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_8045ABB4_000019D0
    lfs f3, 0x68(r1)
    lfs f0, lbl_80886C34
    fcmpo cr0, f3, f0
    ble lbl_fn_8045ABB4_000019C4
    lfs f0, lbl_80886C70
    b lbl_fn_8045ABB4_000019C8
lbl_fn_8045ABB4_000019C4:
    lfs f0, lbl_80886C74
lbl_fn_8045ABB4_000019C8:
    stfs f0, 0x48(r1)
    b lbl_fn_8045ABB4_000019E4
lbl_fn_8045ABB4_000019D0:
    frsp f2, f2
    lfs f1, 0x68(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_8045ABB4_000019E4:
    lfs f0, 0x48(r1)
    addi r3, r1, 0xd8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80886C34
    addi r4, r1, 0x38
    lfs f30, 0xe0(r1)
    mr r5, r4
    lfs f29, 0xdc(r1)
    addi r3, r1, 0x108
    lfs f13, 0xd8(r1)
    lfs f12, 0xf0(r1)
    lfs f11, 0xec(r1)
    lfs f10, 0xe8(r1)
    lfs f9, 0x100(r1)
    lfs f8, 0xfc(r1)
    lfs f7, 0xf8(r1)
    lfs f6, 0x104(r1)
    lfs f5, 0xf4(r1)
    lfs f4, 0xe4(r1)
    lfs f0, lbl_80886C30
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x70(r1)
    stfs f3, 0x138(r1)
    stfs f3, 0x13c(r1)
    stfs f3, 0x140(r1)
    stfs f0, 0x144(r1)
    stfs f13, 0x8(r1)
    stfs f29, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f13, 0x108(r1)
    stfs f29, 0x10c(r1)
    stfs f30, 0x110(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0x118(r1)
    stfs f11, 0x11c(r1)
    stfs f12, 0x120(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0x128(r1)
    stfs f8, 0x12c(r1)
    stfs f9, 0x130(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0x114(r1)
    stfs f5, 0x124(r1)
    stfs f6, 0x134(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80886C6C
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8045ABB4_00001B00
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80886C34
    fcmpo cr0, f3, f0
    ble lbl_fn_8045ABB4_00001AF0
    lfs f0, lbl_80886C70
    b lbl_fn_8045ABB4_00001AF4
lbl_fn_8045ABB4_00001AF0:
    lfs f0, lbl_80886C74
lbl_fn_8045ABB4_00001AF4:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_8045ABB4_00001B14
lbl_fn_8045ABB4_00001B00:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_8045ABB4_00001B14:
    addi r3, r1, 0x44
    lfs f4, lbl_80886C34
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_80754DC0@ha
    psq_st f1, 0x0(r30), 0, 0
    fmr f2, f4
    lfs f0, 0x538(r31)
    lfs f3, 0x6c(r1)
    stfs f2, 0x70(r1)
    fsubs f1, f3, f0
    lfd f2, lbl_80754DC0@l(r3)
    stfs f4, 0x4c(r1)
    bl fn_8068AEA8
    frsp f31, f1
    lfs f0, lbl_80886C88
    fcmpo cr0, f31, f0
    ble lbl_fn_8045ABB4_00001B60
    lfs f0, lbl_80886C8C
    fsubs f31, f31, f0
lbl_fn_8045ABB4_00001B60:
    lfs f0, lbl_80886C90
    fcmpo cr0, f31, f0
    bge lbl_fn_8045ABB4_00001B74
    lfs f0, lbl_80886C8C
    fadds f31, f31, f0
lbl_fn_8045ABB4_00001B74:
    lfs f0, lbl_80886CA0
    lfs f4, lbl_80886C64
    fmuls f31, f31, f0
    lfs f3, 0x584(r31)
    lfs f0, lbl_80886CB0
    fnmsubs f3, f4, f31, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8045ABB4_00001B98
    b lbl_fn_8045ABB4_00001B9C
lbl_fn_8045ABB4_00001B98:
    fmr f3, f0
lbl_fn_8045ABB4_00001B9C:
    lfs f4, lbl_80886CB4
    fcmpo cr0, f3, f4
    ble lbl_fn_8045ABB4_00001BC8
    lfs f4, lbl_80886C64
    lfs f3, 0x584(r31)
    lfs f0, lbl_80886CB0
    fnmsubs f4, f4, f31, f3
    fcmpo cr0, f4, f0
    bge lbl_fn_8045ABB4_00001BC4
    b lbl_fn_8045ABB4_00001BC8
lbl_fn_8045ABB4_00001BC4:
    fmr f4, f0
lbl_fn_8045ABB4_00001BC8:
    addi r3, r1, 0xcc
    frsp f3, f4
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0xc0
    lfs f0, lbl_80886CB8
    psq_st f1, 0x528(r31), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    fmuls f0, f3, f0
    lfs f2, 0xd4(r1)
    lis r3, lbl_80754DC0@ha
    psq_st f1, 0x534(r31), 0, 0
    stfs f2, 0x530(r31)
    lfs f2, 0xc8(r1)
    stfs f2, 0x53c(r31)
    lfs f1, 0x534(r31)
    lfd f2, lbl_80754DC0@l(r3)
    stfs f0, 0x584(r31)
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_80886C88
    fcmpo cr0, f3, f0
    ble lbl_fn_8045ABB4_00001C28
    lfs f0, lbl_80886C8C
    fsubs f3, f3, f0
lbl_fn_8045ABB4_00001C28:
    lfs f0, lbl_80886C90
    fcmpo cr0, f3, f0
    bge lbl_fn_8045ABB4_00001C3C
    lfs f0, lbl_80886C8C
    fadds f3, f3, f0
lbl_fn_8045ABB4_00001C3C:
    lis r3, lbl_80754DC0@ha
    lfs f1, 0x538(r31)
    stfs f3, 0x534(r31)
    lfd f2, lbl_80754DC0@l(r3)
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_80886C88
    fcmpo cr0, f3, f0
    ble lbl_fn_8045ABB4_00001C68
    lfs f0, lbl_80886C8C
    fsubs f3, f3, f0
lbl_fn_8045ABB4_00001C68:
    lfs f0, lbl_80886C90
    fcmpo cr0, f3, f0
    bge lbl_fn_8045ABB4_00001C7C
    lfs f0, lbl_80886C8C
    fadds f3, f3, f0
lbl_fn_8045ABB4_00001C7C:
    lis r3, lbl_80754DC0@ha
    lfs f1, 0x53c(r31)
    stfs f3, 0x538(r31)
    lfd f2, lbl_80754DC0@l(r3)
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_80886C88
    fcmpo cr0, f3, f0
    ble lbl_fn_8045ABB4_00001CA8
    lfs f0, lbl_80886C8C
    fsubs f3, f3, f0
lbl_fn_8045ABB4_00001CA8:
    lfs f0, lbl_80886C90
    fcmpo cr0, f3, f0
    bge lbl_fn_8045ABB4_00001CBC
    lfs f0, lbl_80886C8C
    fadds f3, f3, f0
lbl_fn_8045ABB4_00001CBC:
    lfs f2, lbl_80886C34
    li r0, 0x0
    stfs f2, 0x50(r1)
    addi r3, r1, 0x50
    stfs f2, 0x54(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f3, 0x53c(r31)
    psq_st f1, 0x574(r31), 0, 0
    stfs f2, 0x57c(r31)
    stw r0, 0x630(r31)
    stw r0, 0x610(r31)
    psq_l f31, 0x208(r1), 0, 0
    lfd f31, 0x200(r1)
    psq_l f30, 0x1f8(r1), 0, 0
    lfd f30, 0x1f0(r1)
    psq_l f29, 0x1e8(r1), 0, 0
    lfd f29, 0x1e0(r1)
    lwz r31, 0x1dc(r1)
    lwz r30, 0x1d8(r1)
    lwz r29, 0x1d4(r1)
    lwz r28, 0x1d0(r1)
    lwz r0, 0x214(r1)
    stfs f2, 0x58(r1)
    mtlr r0
    addi r1, r1, 0x210
    blr
}
