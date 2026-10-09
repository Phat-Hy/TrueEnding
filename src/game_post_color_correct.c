#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void fn_8004D388(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800F8548(void);
extern void fn_800F8C6C(void);
extern void fn_80144710(void);
extern void fn_80148990(void);
extern void fn_8015495C(void);
extern void fn_80158BB4(void);
extern void fn_8016DA4C(void);
extern void fn_8016E970(void);
extern void fn_8016F824(void);
extern void fn_80170A20(void);
extern void fn_80176548(void);
extern void fn_801765D8(void);
extern void fn_80178A6C(void);
extern void fn_80219E6C(void);
extern void fn_80232B7C(void);
extern void fn_80239DAC(void);
extern void fn_8023A8B4(void);
extern void fn_802C2BCC(void);
extern void fn_802C38E4(void);
extern void fn_80370A78(void);
extern void fn_80370AE4(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9940(void);
extern void fn_805F9990(void);
extern void fn_8068AE9C(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);
extern void fn_80695720(void);

/* External data declarations */
extern u8 lbl_80746C68[];
extern u8 lbl_80746C78[];
extern u8 lbl_80746C90[];

/* Small data declarations */
extern u32 lbl_8087D9E0;
extern u32 lbl_8087D9E4;
extern u32 lbl_8087EE98;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F4A0;
extern u32 lbl_808842A8;
extern u32 lbl_808842AC;
extern u32 lbl_808842B0;
extern u32 lbl_808842DC;
extern u32 lbl_808842E4;
extern u32 lbl_80884300;
extern u32 lbl_80884304;
extern u32 lbl_80884308;
extern u32 lbl_80884320;
extern u32 lbl_80884324;
extern u32 lbl_80884344;
extern u32 lbl_8088434C;
extern u32 lbl_80884350;
extern u32 lbl_80884358;
extern u32 lbl_80884360;
extern u32 lbl_80884364;
extern u32 lbl_80884384;
extern u32 lbl_8088438C;
extern u32 lbl_80884390;
extern u32 lbl_80884394;
extern u32 lbl_80884398;
extern u32 lbl_8088439C;
extern u32 lbl_808843A0;
extern u32 lbl_808843A4;
extern u32 lbl_808843A8;
extern u32 lbl_808843AC;
extern u32 lbl_808843B0;
extern u32 lbl_808843B4;
extern u32 lbl_808843B8;
extern u32 lbl_808843BC;

/* Function declarations */
void fn_802C3DF8(void);
void fn_802C3EDC(void);
void fn_802C42D4(void);
void fn_802C4480(void);
void fn_802C46BC(void);
void fn_802C4858(void);
void fn_802C4B70(void);
void fn_802C4E80(void);
void fn_802C5068(void);

asm void fn_802C3DF8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    psq_l f1, 0x528(r4), 0, 0
    lfs f2, 0x530(r4)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
    bne lbl_fn_802C3DF8_00000048
    psq_l f1, 0x528(r4), 0, 0
    lfs f2, 0x530(r4)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
    b lbl_fn_802C3DF8_000000CC
lbl_fn_802C3DF8_00000048:
    lwz r3, lbl_8087F430
    li r4, 0xf5
    bl fn_80370A78
    cmpwi r3, 0x0
    bne lbl_fn_802C3DF8_00000070
    psq_l f1, 0x528(r31), 0, 0
    lfs f2, 0x530(r31)
    stfs f2, 0x8(r30)
    psq_st f1, 0x0(r30), 0, 0
    b lbl_fn_802C3DF8_000000CC
lbl_fn_802C3DF8_00000070:
    lis r4, lbl_80746C90@ha
    addi r3, r31, 0xb0
    addi r4, r4, lbl_80746C90@l
    li r5, 0x0
    addi r4, r4, 0xc3
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802C3DF8_00000098
    li r4, 0x0
    b lbl_fn_802C3DF8_000000A4
lbl_fn_802C3DF8_00000098:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r4, r3, r0
lbl_fn_802C3DF8_000000A4:
    lfs f0, 0x1c(r4)
    addi r3, r1, 0x8
    lfs f3, 0xc(r4)
    lfs f2, 0x2c(r4)
    stfs f3, 0x8(r1)
    stfs f0, 0xc(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x8(r30)
lbl_fn_802C3DF8_000000CC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_802C3EDC(void)
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
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x7
    bne lbl_fn_802C3EDC_00000158
    lwz r0, 0x1594(r3)
    cmpwi r0, 0x2
    beq lbl_fn_802C3EDC_000001A4
    lwz r4, 0xd1c(r3)
    lwz r0, 0xd20(r3)
    cmplw r4, r0
    beq lbl_fn_802C3EDC_000001A4
    li r4, 0x3
    bl fn_8016E970
    lwz r4, 0x1584(r31)
    mr r3, r31
    lfs f1, lbl_808842B0
    li r5, 0x0
    bl fn_80170A20
    b lbl_fn_802C3EDC_000001A4
lbl_fn_802C3EDC_00000158:
    lwz r0, 0x1594(r3)
    cmpwi r0, 0x2
    bne lbl_fn_802C3EDC_00000188
    li r4, 0x3
    bl fn_8016E970
    li r0, 0x0
    stw r0, 0x10d0(r31)
    mr r3, r31
    li r4, 0xac
    li r5, 0x0
    bl fn_8016F824
    b lbl_fn_802C3EDC_000001A4
lbl_fn_802C3EDC_00000188:
    li r4, 0x3
    bl fn_8016E970
    lwz r4, 0x1584(r31)
    mr r3, r31
    lfs f1, lbl_808842B0
    li r5, 0x0
    bl fn_80170A20
lbl_fn_802C3EDC_000001A4:
    lwz r0, 0x1594(r31)
    cmpwi r0, 0x1
    bne lbl_fn_802C3EDC_000001C4
    lfs f3, lbl_80884360
    lfs f0, lbl_8088438C
    stfs f3, 0x568(r31)
    stfs f0, 0x2e8(r31)
    b lbl_fn_802C3EDC_000001D4
lbl_fn_802C3EDC_000001C4:
    lfs f3, lbl_808842DC
    lfs f0, lbl_808842AC
    stfs f3, 0x568(r31)
    stfs f0, 0x2e8(r31)
lbl_fn_802C3EDC_000001D4:
    mr r3, r31
    bl fn_802C2BCC
    lwz r0, 0x1594(r31)
    cmpwi r0, 0x2
    beq lbl_fn_802C3EDC_000004B0
    lwz r6, 0x1584(r31)
    addi r30, r1, 0x5c
    lfs f0, 0x530(r31)
    addi r5, r1, 0x74
    lfs f3, 0x530(r6)
    mr r3, r30
    lfs f5, 0x52c(r6)
    mr r4, r30
    fsubs f2, f3, f0
    lfs f4, 0x52c(r31)
    lfs f3, 0x528(r6)
    lfs f0, 0x528(r31)
    fsubs f4, f5, f4
    stfs f2, 0x7c(r1)
    fsubs f0, f3, f0
    stfs f4, 0x78(r1)
    stfs f0, 0x74(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x64(r1)
    bl fn_805F98D0
    lfs f2, 0x64(r1)
    addi r29, r1, 0x68
    psq_l f1, 0x0(r30), 0, 0
    fabs f3, f2
    lfs f0, lbl_80884300
    psq_st f1, 0x0(r29), 0, 0
    frsp f3, f3
    stfs f2, 0x70(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_802C3EDC_00000288
    lfs f3, 0x68(r1)
    lfs f0, lbl_808842A8
    fcmpo cr0, f3, f0
    ble lbl_fn_802C3EDC_0000027C
    lfs f0, lbl_80884304
    b lbl_fn_802C3EDC_00000280
lbl_fn_802C3EDC_0000027C:
    lfs f0, lbl_80884308
lbl_fn_802C3EDC_00000280:
    stfs f0, 0x48(r1)
    b lbl_fn_802C3EDC_0000029C
lbl_fn_802C3EDC_00000288:
    frsp f2, f2
    lfs f1, 0x68(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_802C3EDC_0000029C:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x80
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808842A8
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
    lfs f0, lbl_808842AC
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
    lfs f0, lbl_80884300
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802C3EDC_000003B8
    lfs f3, 0x3c(r1)
    lfs f0, lbl_808842A8
    fcmpo cr0, f3, f0
    ble lbl_fn_802C3EDC_000003A8
    lfs f0, lbl_80884304
    b lbl_fn_802C3EDC_000003AC
lbl_fn_802C3EDC_000003A8:
    lfs f0, lbl_80884308
lbl_fn_802C3EDC_000003AC:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_802C3EDC_000003CC
lbl_fn_802C3EDC_000003B8:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_802C3EDC_000003CC:
    addi r3, r1, 0x44
    lfs f4, lbl_808842A8
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_80746C78@ha
    psq_st f1, 0x0(r29), 0, 0
    fmr f2, f4
    lfs f0, 0x538(r31)
    lfs f3, 0x6c(r1)
    stfs f2, 0x70(r1)
    fsubs f1, f3, f0
    lfd f2, lbl_80746C78@l(r3)
    stfs f4, 0x4c(r1)
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_80884320
    fcmpo cr0, f3, f0
    ble lbl_fn_802C3EDC_00000418
    lfs f0, lbl_80884390
    fsubs f3, f3, f0
lbl_fn_802C3EDC_00000418:
    lfs f0, lbl_80884394
    fcmpo cr0, f3, f0
    addi r3, r1, 0x74
    addi r29, r1, 0x50
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r29
    lfs f2, 0x7c(r1)
    mr r4, r29
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x58(r1)
    bl fn_805F98D0
    mr r3, r29
    bl fn_805F9940
    lwz r0, 0x1594(r31)
    cmpwi r0, 0x1
    bne lbl_fn_802C3EDC_00000460
    li r3, 0x12c
    b lbl_fn_802C3EDC_0000047C
lbl_fn_802C3EDC_00000460:
    lwz r0, 0x15c4(r31)
    li r3, 0xf
    mulli r0, r0, 0xa
    subfic r0, r0, 0x96
    cmpwi r0, 0xf
    blt lbl_fn_802C3EDC_0000047C
    mr r3, r0
lbl_fn_802C3EDC_0000047C:
    lwz r0, 0x1590(r31)
    cmpw r0, r3
    ble lbl_fn_802C3EDC_000004B0
    mr r3, r31
    bl fn_802C38E4
    lwz r0, 0x58c(r31)
    cmpw r0, r3
    beq lbl_fn_802C3EDC_000004B0
    li r0, 0x0
    stw r0, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
lbl_fn_802C3EDC_000004B0:
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

asm void fn_802C42D4(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r3
    bl fn_80158BB4
    cmpwi r3, 0x0
    beq lbl_fn_802C42D4_00000538
    li r31, 0x0
    stw r31, 0x1590(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    mr r3, r30
    li r4, 0x3
    stw r31, 0x58c(r30)
    bl fn_8016E970
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3e8
    li r6, 0x0
    bl fn_80239DAC
lbl_fn_802C42D4_00000538:
    lfs f1, 0x2e4(r30)
    lfs f0, lbl_80884398
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_802C42D4_000005B8
    lfs f0, lbl_8088439C
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_802C42D4_000005B8
    lwz r0, 0x1700(r30)
    cmpwi r0, 0x0
    beq lbl_fn_802C42D4_00000578
    li r3, 0x582
    bl fn_80219E6C
    mr r31, r3
    b lbl_fn_802C42D4_00000584
lbl_fn_802C42D4_00000578:
    li r3, 0x578
    bl fn_80219E6C
    mr r31, r3
lbl_fn_802C42D4_00000584:
    mr r3, r30
    bl fn_80144710
    lwz r3, lbl_8087F048
    mr r6, r30
    lwz r8, 0x590(r30)
    mr r7, r31
    lfs f1, lbl_808842A8
    li r4, 0x0
    li r5, 0x0
    li r9, 0x1e
    li r10, -0x1
    bl fn_800F8C6C
    b lbl_fn_802C42D4_00000670
lbl_fn_802C42D4_000005B8:
    lfs f1, 0x2e4(r30)
    lfs f0, lbl_80884350
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_802C42D4_000005E8
    lfs f0, lbl_8088434C
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_802C42D4_000005E8
    lfs f0, lbl_808843A0
    stfs f0, 0x2e8(r30)
    b lbl_fn_802C42D4_00000670
lbl_fn_802C42D4_000005E8:
    lfs f2, 0x2e4(r30)
    lfs f1, lbl_808842AC
    lfs f0, lbl_80884300
    fsubs f2, f2, f1
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f0
    bge lbl_fn_802C42D4_0000066C
    lfs f0, lbl_808842A8
    li r3, -0x1
    stfs f0, 0x1c(r1)
    li r0, 0x1
    addi r4, r30, 0x16b0
    addi r5, r30, 0xb0
    stfs f0, 0x20(r1)
    addi r7, r1, 0x10
    addi r8, r1, 0x1c
    addi r9, r1, 0x28
    stfs f0, 0x24(r1)
    li r6, 0x0
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
    b lbl_fn_802C42D4_00000670
lbl_fn_802C42D4_0000066C:
    stfs f1, 0x2e8(r30)
lbl_fn_802C42D4_00000670:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_802C4480(void)
{
    nofralloc
    stwu r1, -0xe0(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0xe4(r1)
    stfd f31, 0xd0(r1)
    psq_st f31, 0xd8(r1), 0, 0
    stw r31, 0xcc(r1)
    stw r30, 0xc8(r1)
    mr r30, r3
    lfs f31, 0x2e4(r3)
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_802C4480_00000700
    li r31, 0x0
    stw r31, 0x1590(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    mr r3, r30
    li r4, 0x3
    stw r31, 0x58c(r30)
    bl fn_8016E970
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3e8
    li r6, 0x0
    bl fn_80239DAC
    b lbl_fn_802C4480_00000828
lbl_fn_802C4480_00000700:
    lfs f3, 0x2e4(r30)
    lfs f0, lbl_808843A4
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_802C4480_00000828
    lfs f0, lbl_80884384
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_802C4480_00000828
    lwz r3, lbl_8087F0A8
    lis r0, 0x4330
    stw r0, 0xb8(r1)
    lis r5, lbl_80746C68@ha
    lwz r0, 0x30(r3)
    addi r3, r1, 0x38
    lfs f3, lbl_808842A8
    li r4, 0x79
    mullw r0, r0, r0
    lfs f0, lbl_80884324
    lfd f5, lbl_80746C68@l(r5)
    stfs f3, 0x28(r1)
    lfs f4, lbl_808843A8
    stfs f0, 0x30(r1)
    xoris r0, r0, 0x8000
    stw r0, 0xbc(r1)
    lfd f3, 0xb8(r1)
    fsubs f0, f3, f5
    fdivs f0, f4, f0
    stfs f0, 0x2c(r1)
    lfs f1, 0x538(r30)
    bl fn_805F8E70
    addi r4, r1, 0x28
    addi r3, r1, 0x38
    mr r5, r4
    bl fn_805F93C0
    li r0, 0x0
    stw r0, 0x9c(r1)
    mr r4, r30
    addi r3, r1, 0x18
    stw r0, 0xa0(r1)
    addi r5, r30, 0x528
    stw r0, 0xa4(r1)
    stw r0, 0xa8(r1)
    bl fn_80176548
    lwz r3, lbl_8087EE98
    addi r4, r1, 0x68
    lfs f1, 0x24(r1)
    addi r5, r1, 0x18
    addi r6, r1, 0x28
    addi r8, r30, 0x5b8
    lis r7, 0x8000
    li r9, 0x0
    bl fn_8004D388
    addi r4, r1, 0x78
    addi r3, r1, 0x8
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lfs f0, 0x5a8(r30)
    lfs f3, 0xc(r1)
    lfs f2, 0x80(r1)
    fsubs f4, f3, f0
    lfs f3, 0x5ac(r30)
    lfs f0, 0x24(r1)
    fsubs f2, f2, f3
    lfs f5, 0x8(r1)
    lfs f3, 0x5a4(r30)
    fsubs f0, f4, f0
    stfs f2, 0x10(r1)
    fsubs f3, f5, f3
    stfs f0, 0xc(r1)
    stfs f3, 0x8(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x528(r30), 0, 0
    stfs f2, 0x530(r30)
lbl_fn_802C4480_00000828:
    lfs f3, 0x2e4(r30)
    lfs f0, lbl_808843AC
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_802C4480_000008A4
    lfs f0, lbl_80884384
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_802C4480_000008A4
    lwz r0, 0x1700(r30)
    cmpwi r0, 0x0
    beq lbl_fn_802C4480_00000868
    li r3, 0x584
    bl fn_80219E6C
    mr r31, r3
    b lbl_fn_802C4480_00000874
lbl_fn_802C4480_00000868:
    li r3, 0x57a
    bl fn_80219E6C
    mr r31, r3
lbl_fn_802C4480_00000874:
    mr r3, r30
    bl fn_80144710
    lwz r3, lbl_8087F048
    mr r6, r30
    lwz r8, 0x590(r30)
    mr r7, r31
    lfs f1, lbl_808842A8
    li r4, 0x0
    li r5, 0x0
    li r9, 0x1e
    li r10, -0x1
    bl fn_800F8C6C
lbl_fn_802C4480_000008A4:
    lwz r0, 0xe4(r1)
    psq_l f31, 0xd8(r1), 0, 0
    lfd f31, 0xd0(r1)
    lwz r31, 0xcc(r1)
    lwz r30, 0xc8(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}

asm void fn_802C46BC(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    lfs f31, 0x2e4(r3)
    addi r3, r3, 0xb0
    lwz r31, lbl_8087F430
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_802C46BC_000009C0
    lwz r3, lbl_8087F0A8
    li r4, 0x1
    lwz r0, 0x194(r3)
    cmpwi r0, 0x0
    beq lbl_fn_802C46BC_00000958
    lwz r3, lbl_8087F430
    lwz r0, 0x5744(r3)
    cmplwi r0, 0x5460
    bge lbl_fn_802C46BC_00000930
    li r0, 0x5460
    stw r0, 0x5744(r3)
lbl_fn_802C46BC_00000930:
    lfs f31, 0x2e4(r30)
    addi r3, r30, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    lfs f0, lbl_808843B0
    fmuls f0, f0, f1
    fcmpo cr0, f31, f0
    cror eq, gt, eq
    mfcr r4
    extrwi r4, r4, 1, 2
lbl_fn_802C46BC_00000958:
    cmpwi r4, 0x0
    beq lbl_fn_802C46BC_00000A40
    lwz r0, 0x12a4(r30)
    mr r3, r30
    lwz r6, 0x5c0(r30)
    lwz r5, 0x1608(r30)
    oris r0, r0, 0x200
    lwz r4, 0x1654(r30)
    clrrwi r6, r6, 1
    clrrwi r5, r5, 1
    ori r0, r0, 0x8000
    clrrwi r4, r4, 1
    stw r6, 0x5c0(r30)
    stw r5, 0x1608(r30)
    stw r4, 0x1654(r30)
    stw r0, 0x12a4(r30)
    bl fn_801765D8
    lwz r3, lbl_8087F430
    li r4, 0xf9
    li r5, 0x1
    bl fn_80370AE4
    li r0, 0x0
    stw r0, 0x8a0(r31)
    stw r0, 0x4d8(r31)
    stb r0, 0x97c(r31)
    b lbl_fn_802C46BC_00000A40
lbl_fn_802C46BC_000009C0:
    lis r4, lbl_80746C90@ha
    addi r3, r30, 0xb0
    addi r4, r4, lbl_80746C90@l
    li r5, 0x0
    addi r4, r4, 0xc3
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802C46BC_000009E8
    li r3, 0x0
    b lbl_fn_802C46BC_000009F4
lbl_fn_802C46BC_000009E8:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r3, r3, r0
lbl_fn_802C46BC_000009F4:
    lfs f3, lbl_80884358
    lfs f0, 0x52c(r30)
    lfs f4, 0x1c(r3)
    fadds f0, f3, f0
    lfs f3, 0x2c(r3)
    lfs f5, 0xc(r3)
    stfs f5, 0x8(r1)
    fcmpo cr0, f4, f0
    stfs f4, 0xc(r1)
    stfs f3, 0x10(r1)
    bge lbl_fn_802C46BC_00000A24
    stfs f0, 0xc(r1)
lbl_fn_802C46BC_00000A24:
    addi r4, r1, 0x8
    stw r30, 0x8a0(r31)
    addi r3, r31, 0x988
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lfs f2, 0x10(r1)
    stfs f2, 0x990(r31)
lbl_fn_802C46BC_00000A40:
    lwz r0, 0x34(r1)
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_802C4858(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    li r0, 0x0
    stfd f31, 0x120(r1)
    psq_st f31, 0x128(r1), 0, 0
    stfd f30, 0x110(r1)
    psq_st f30, 0x118(r1), 0, 0
    stw r31, 0x10c(r1)
    stw r30, 0x108(r1)
    mr r30, r3
    stw r0, 0x1590(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    li r0, 0x3
    mr r3, r30
    li r4, 0x6
    stw r0, 0x58c(r30)
    bl fn_8016E970
    lfs f0, lbl_808842AC
    li r0, 0x4
    li r31, 0x1
    stw r0, 0x560(r30)
    lfs f1, lbl_808842A8
    addi r3, r30, 0xb0
    stw r31, 0x3fc(r30)
    li r4, 0x0
    lfs f2, lbl_80884364
    li r5, 0x13f
    stfs f0, 0x2fc(r30)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r30)
    bl fn_80097C08
    mr r3, r30
    li r4, 0x3e8
    bl fn_80232B7C
    lfs f0, lbl_808842A8
    li r0, -0x1
    lfs f1, lbl_808842AC
    addi r4, r30, 0x1578
    stfs f0, 0x64(r1)
    addi r5, r30, 0xb0
    lwz r3, lbl_8087F3C0
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
    stw r0, 0x8(r1)
    stw r31, 0xc(r1)
    bl fn_8023A8B4
    lwz r3, 0x1584(r30)
    addi r4, r1, 0x8c
    stw r3, 0x1528(r30)
    addi r31, r1, 0x80
    lfs f0, 0x530(r30)
    lfs f3, 0x530(r3)
    lfs f5, 0x52c(r3)
    fsubs f2, f3, f0
    lfs f4, 0x52c(r30)
    lfs f3, 0x528(r3)
    fsubs f4, f5, f4
    lfs f0, 0x528(r30)
    stfs f2, 0x94(r1)
    fsubs f3, f3, f0
    lfs f0, lbl_80884300
    stfs f4, 0x90(r1)
    frsp f4, f2
    stfs f3, 0x8c(r1)
    fabs f3, f4
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    frsp f3, f3
    stfs f2, 0x88(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_802C4858_00000BE4
    lfs f3, 0x80(r1)
    lfs f0, lbl_808842A8
    fcmpo cr0, f3, f0
    ble lbl_fn_802C4858_00000BD8
    lfs f0, lbl_80884304
    b lbl_fn_802C4858_00000BDC
lbl_fn_802C4858_00000BD8:
    lfs f0, lbl_80884308
lbl_fn_802C4858_00000BDC:
    stfs f0, 0x50(r1)
    b lbl_fn_802C4858_00000BF8
lbl_fn_802C4858_00000BE4:
    fmr f2, f4
    lfs f1, 0x80(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x50(r1)
lbl_fn_802C4858_00000BF8:
    lfs f0, 0x50(r1)
    addi r3, r1, 0x98
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808842A8
    addi r4, r1, 0x40
    lfs f30, 0xa0(r1)
    mr r5, r4
    lfs f31, 0x9c(r1)
    addi r3, r1, 0xc8
    lfs f13, 0x98(r1)
    lfs f12, 0xb0(r1)
    lfs f11, 0xac(r1)
    lfs f10, 0xa8(r1)
    lfs f9, 0xc0(r1)
    lfs f8, 0xbc(r1)
    lfs f7, 0xb8(r1)
    lfs f6, 0xc4(r1)
    lfs f5, 0xb4(r1)
    lfs f4, 0xa4(r1)
    lfs f0, lbl_808842AC
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x88(r1)
    stfs f3, 0xf8(r1)
    stfs f3, 0xfc(r1)
    stfs f3, 0x100(r1)
    stfs f0, 0x104(r1)
    stfs f13, 0x10(r1)
    stfs f31, 0x14(r1)
    stfs f30, 0x18(r1)
    stfs f13, 0xc8(r1)
    stfs f31, 0xcc(r1)
    stfs f30, 0xd0(r1)
    stfs f10, 0x1c(r1)
    stfs f11, 0x20(r1)
    stfs f12, 0x24(r1)
    stfs f10, 0xd8(r1)
    stfs f11, 0xdc(r1)
    stfs f12, 0xe0(r1)
    stfs f7, 0x28(r1)
    stfs f8, 0x2c(r1)
    stfs f9, 0x30(r1)
    stfs f7, 0xe8(r1)
    stfs f8, 0xec(r1)
    stfs f9, 0xf0(r1)
    stfs f4, 0x34(r1)
    stfs f5, 0x38(r1)
    stfs f6, 0x3c(r1)
    stfs f4, 0xd4(r1)
    stfs f5, 0xe4(r1)
    stfs f6, 0xf4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x48(r1)
    bl fn_805F9750
    lfs f2, 0x48(r1)
    lfs f0, lbl_80884300
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802C4858_00000D14
    lfs f3, 0x44(r1)
    lfs f0, lbl_808842A8
    fcmpo cr0, f3, f0
    ble lbl_fn_802C4858_00000D04
    lfs f0, lbl_80884304
    b lbl_fn_802C4858_00000D08
lbl_fn_802C4858_00000D04:
    lfs f0, lbl_80884308
lbl_fn_802C4858_00000D08:
    fneg f0, f0
    stfs f0, 0x4c(r1)
    b lbl_fn_802C4858_00000D28
lbl_fn_802C4858_00000D14:
    lfs f1, 0x44(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x4c(r1)
lbl_fn_802C4858_00000D28:
    addi r3, r1, 0x4c
    lfs f2, lbl_808842A8
    psq_l f1, 0x0(r3), 0, 0
    li r0, 0x0
    psq_st f1, 0x0(r31), 0, 0
    lfs f0, 0x84(r1)
    stfs f0, 0x538(r30)
    stw r0, 0x15b4(r30)
    psq_l f31, 0x128(r1), 0, 0
    lfd f31, 0x120(r1)
    psq_l f30, 0x118(r1), 0, 0
    lfd f30, 0x110(r1)
    lwz r31, 0x10c(r1)
    lwz r30, 0x108(r1)
    lwz r0, 0x134(r1)
    stfs f2, 0x54(r1)
    stfs f2, 0x88(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

asm void fn_802C4B70(void)
{
    nofralloc
    stwu r1, -0xe0(r1)
    mflr r0
    stw r0, 0xe4(r1)
    stfd f31, 0xd0(r1)
    psq_st f31, 0xd8(r1), 0, 0
    stfd f30, 0xc0(r1)
    psq_st f30, 0xc8(r1), 0, 0
    stfd f29, 0xb0(r1)
    psq_st f29, 0xb8(r1), 0, 0
    stfd f28, 0xa0(r1)
    psq_st f28, 0xa8(r1), 0, 0
    stfd f27, 0x90(r1)
    psq_st f27, 0x98(r1), 0, 0
    stw r31, 0x8c(r1)
    stw r30, 0x88(r1)
    li r30, 0x0
    stw r29, 0x84(r1)
    mr r29, r3
    stw r30, 0x1590(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r29)
    mr r3, r29
    lwz r12, 0x0(r29)
    lwz r12, 0x48(r12)
    mtctr r12
    bctrl
    mr r3, r29
    bl fn_80178A6C
    mr r3, r29
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    bl fn_8015495C
    mr r3, r29
    bl fn_8016DA4C
    lfs f0, lbl_808842AC
    li r0, 0x9
    li r31, 0x1
    stw r0, 0x58c(r29)
    lfs f1, lbl_808842A8
    addi r3, r29, 0xb0
    stw r31, 0x3fc(r29)
    li r4, 0x0
    lfs f2, lbl_80884364
    li r5, 0x2e
    stfs f0, 0x2fc(r29)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r29)
    bl fn_80097C08
    stw r31, 0x15b4(r29)
    mr r4, r29
    li r5, 0xc8
    li r6, 0x0
    stw r30, 0x16bc(r29)
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    li r3, 0x0
    li r4, 0x0
    bl fn_80232B7C
    lfs f0, lbl_808842A8
    li r0, -0x1
    lfs f1, lbl_808842AC
    addi r4, r29, 0x16a4
    stfs f0, 0x1c(r1)
    addi r5, r29, 0xb0
    lwz r3, lbl_8087F3C0
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
    stw r0, 0x8(r1)
    stw r31, 0xc(r1)
    bl fn_8023A8B4
    lis r4, lbl_80746C90@ha
    lwz r30, lbl_8087F430
    addi r4, r4, lbl_80746C90@l
    addi r3, r29, 0xb0
    addi r4, r4, 0xc3
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802C4B70_00000F00
    li r3, 0x0
    b lbl_fn_802C4B70_00000F0C
lbl_fn_802C4B70_00000F00:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r29)
    add r3, r3, r0
lbl_fn_802C4B70_00000F0C:
    lfs f3, 0x2c(r3)
    addi r4, r30, 0x4d8
    lfs f28, 0x1c(r3)
    lfs f27, 0xc(r3)
    lfs f29, 0x594(r30)
    lfs f30, 0x59c(r30)
    lfs f31, 0x5a0(r30)
    lfs f13, 0x5a4(r30)
    lfs f12, 0x5a8(r30)
    lfs f11, 0x5ac(r30)
    lfs f10, 0x5b0(r30)
    lfs f9, 0x5b4(r30)
    lfs f8, 0x5b8(r30)
    lfs f7, 0x5bc(r30)
    lwz r3, 0x5c0(r30)
    lfs f6, lbl_808842A8
    stw r29, 0x8a0(r30)
    lfs f5, lbl_808843B4
    lwz r0, 0x4d8(r30)
    lfs f0, lbl_808842E4
    lfs f4, lbl_808843B8
    cmpwi r0, 0x4
    stfs f27, 0x38(r1)
    stfs f28, 0x3c(r1)
    stfs f3, 0x40(r1)
    stfs f29, 0x50(r1)
    stfs f30, 0x58(r1)
    stfs f31, 0x5c(r1)
    stfs f13, 0x60(r1)
    stfs f12, 0x64(r1)
    stfs f11, 0x68(r1)
    stfs f10, 0x6c(r1)
    stfs f9, 0x70(r1)
    stfs f8, 0x74(r1)
    stfs f7, 0x78(r1)
    stw r3, 0x7c(r1)
    stfs f6, 0x4c(r1)
    stfs f5, 0x48(r1)
    stfs f0, 0x44(r1)
    stfs f4, 0x54(r1)
    beq lbl_fn_802C4B70_00001004
    li r0, 0x4
    stw r0, 0x0(r4)
    lfs f3, lbl_808843BC
    stfs f0, 0xc(r4)
    lfs f0, lbl_808842AC
    stfs f5, 0x10(r4)
    stfs f6, 0x14(r4)
    stfs f29, 0x18(r4)
    stfs f4, 0x1c(r4)
    stfs f30, 0x20(r4)
    stfs f31, 0x24(r4)
    stfs f13, 0x28(r4)
    stfs f12, 0x2c(r4)
    stfs f11, 0x30(r4)
    stfs f10, 0x34(r4)
    stfs f9, 0x38(r4)
    stfs f8, 0x3c(r4)
    stfs f7, 0x40(r4)
    stw r3, 0x44(r4)
    stfs f3, 0x8(r4)
    stfs f0, 0x4(r4)
lbl_fn_802C4B70_00001004:
    lbz r0, 0x97c(r30)
    addi r3, r1, 0x38
    stb r0, 0x97d(r30)
    li r0, 0x1
    addi r4, r30, 0x97c
    psq_l f1, 0x0(r3), 0, 0
    stb r0, 0x97c(r30)
    lfs f2, 0x40(r1)
    psq_st f1, 0xc(r4), 0, 0
    lfs f0, lbl_808842A8
    stfs f2, 0x990(r30)
    stfs f0, 0x9a0(r30)
    b lbl_fn_802C4B70_0000103C
    b lbl_fn_802C4B70_00001040
lbl_fn_802C4B70_0000103C:
    li r0, 0x0
lbl_fn_802C4B70_00001040:
    stw r0, 0x4(r4)
    psq_l f31, 0xd8(r1), 0, 0
    lfd f31, 0xd0(r1)
    psq_l f30, 0xc8(r1), 0, 0
    lfd f30, 0xc0(r1)
    psq_l f29, 0xb8(r1), 0, 0
    lfd f29, 0xb0(r1)
    psq_l f28, 0xa8(r1), 0, 0
    lfd f28, 0xa0(r1)
    psq_l f27, 0x98(r1), 0, 0
    lfd f27, 0x90(r1)
    lwz r31, 0x8c(r1)
    lwz r30, 0x88(r1)
    lwz r29, 0x84(r1)
    lwz r0, 0xe4(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}

asm void fn_802C4E80(void)
{
    nofralloc
    stwu r1, -0x100(r1)
    mflr r0
    stw r0, 0x104(r1)
    stfd f31, 0xf0(r1)
    psq_st f31, 0xf8(r1), 0, 0
    lfs f31, lbl_80884344
    stfd f30, 0xe0(r1)
    psq_st f30, 0xe8(r1), 0, 0
    lfs f30, lbl_808842AC
    stfd f29, 0xd0(r1)
    psq_st f29, 0xd8(r1), 0, 0
    lfs f29, lbl_808842A8
    stfd f28, 0xc0(r1)
    psq_st f28, 0xc8(r1), 0, 0
    stfd f27, 0xb0(r1)
    psq_st f27, 0xb8(r1), 0, 0
    fmr f27, f2
    stfd f26, 0xa0(r1)
    psq_st f26, 0xa8(r1), 0, 0
    fmr f26, f1
    stw r31, 0x9c(r1)
    stw r30, 0x98(r1)
    mr r30, r4
    stw r29, 0x94(r1)
    mr r29, r3
    lwz r5, lbl_8087F4A0
    lwz r31, 0x48(r5)
    b lbl_fn_802C4E80_0000121C
lbl_fn_802C4E80_000010F8:
    lwz r0, 0x48(r31)
    cmpwi r0, 0x40f
    beq lbl_fn_802C4E80_00001114
    cmpwi r0, 0x410
    beq lbl_fn_802C4E80_00001114
    cmpwi r0, 0x412
    bne lbl_fn_802C4E80_00001218
lbl_fn_802C4E80_00001114:
    lwz r12, 0x0(r31)
    mr r4, r31
    addi r3, r1, 0x20
    lwz r12, 0x54(r12)
    mtctr r12
    bctrl
    lfs f3, 0x28(r1)
    addi r3, r1, 0x14
    lfs f2, 0x530(r29)
    lfs f0, 0x528(r29)
    lfs f1, 0x20(r1)
    fsubs f2, f3, f2
    stfs f29, 0x18(r1)
    fsubs f0, f1, f0
    stfs f2, 0x1c(r1)
    stfs f0, 0x14(r1)
    bl fn_805F9940
    lwz r12, 0x0(r31)
    fmr f28, f1
    mr r3, r31
    lwz r12, 0x50(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_802C4E80_00001180
    lfs f0, 0x48(r3)
    fsubs f28, f28, f0
lbl_fn_802C4E80_00001180:
    fcmpo cr0, f28, f26
    cror eq, lt, eq
    bne lbl_fn_802C4E80_00001218
    addi r3, r1, 0x14
    mr r4, r3
    bl fn_805F98D0
    stfs f29, 0x8(r1)
    addi r3, r1, 0x30
    li r4, 0x79
    stfs f29, 0xc(r1)
    stfs f30, 0x10(r1)
    lfs f1, 0x538(r29)
    bl fn_805F8E70
    addi r4, r1, 0x8
    addi r3, r1, 0x30
    mr r5, r4
    bl fn_805F93C0
    stfs f29, 0xc(r1)
    addi r3, r1, 0x14
    addi r4, r1, 0x8
    bl fn_805F9990
    bl fn_8068AE9C
    frsp f1, f1
    fmuls f0, f31, f27
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_802C4E80_00001218
    addi r3, r1, 0x60
    li r4, 0x0
    li r5, 0x30
    bl memset
    stw r30, 0x60(r1)
    mr r3, r31
    addi r4, r1, 0x60
    lwz r12, 0x0(r31)
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
lbl_fn_802C4E80_00001218:
    lwz r31, 0x5c(r31)
lbl_fn_802C4E80_0000121C:
    cmpwi r31, 0x0
    bne lbl_fn_802C4E80_000010F8
    lwz r0, 0x104(r1)
    psq_l f31, 0xf8(r1), 0, 0
    lfd f31, 0xf0(r1)
    psq_l f30, 0xe8(r1), 0, 0
    lfd f30, 0xe0(r1)
    psq_l f29, 0xd8(r1), 0, 0
    lfd f29, 0xd0(r1)
    psq_l f28, 0xc8(r1), 0, 0
    lfd f28, 0xc0(r1)
    psq_l f27, 0xb8(r1), 0, 0
    lfd f27, 0xb0(r1)
    psq_l f26, 0xa8(r1), 0, 0
    lfd f26, 0xa0(r1)
    lwz r31, 0x9c(r1)
    lwz r30, 0x98(r1)
    lwz r29, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x100
    blr
}

asm void fn_802C5068(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    lfs f5, lbl_808842A8
    li r4, 0x0
    stw r0, 0x84(r1)
    addi r5, r1, 0x8
    fmr f2, f5
    addi r6, r1, 0x54
    stw r31, 0x7c(r1)
    addi r7, r1, 0x44
    mr r31, r3
    stw r30, 0x78(r1)
    stw r29, 0x74(r1)
    lfs f3, 0x52c(r3)
    lfs f0, 0x5a8(r3)
    lwz r0, 0x62c(r3)
    fadds f4, f3, f0
    lfs f3, 0x528(r3)
    lfs f0, 0x5a4(r3)
    cmpwi r0, 0x0
    stfs f5, 0x8(r1)
    fadds f7, f3, f0
    stfs f5, 0xc(r1)
    lfs f3, 0x530(r3)
    stfs f4, 0x48(r1)
    psq_l f1, 0x0(r5), 0, 0
    lfs f0, 0x5ac(r3)
    stfs f7, 0x44(r1)
    fadds f6, f3, f0
    lfs f4, lbl_80884358
    psq_st f1, 0x0(r6), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    lfs f0, 0x5b0(r3)
    lfs f3, 0x58(r1)
    stfs f2, 0x5c(r1)
    fmr f2, f6
    fadds f3, f3, f4
    stw r4, 0x50(r1)
    stfs f5, 0x10(r1)
    stfs f6, 0x4c(r1)
    stfs f2, 0x5c(r1)
    stfs f3, 0x58(r1)
    stfs f0, 0x60(r1)
    beq lbl_fn_802C5068_00001330
    lwz r0, 0x628(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802C5068_000014D0
lbl_fn_802C5068_00001330:
    lwz r0, 0x628(r3)
    li r30, 0x8
    cmplwi r0, 0x8
    bgt lbl_fn_802C5068_00001678
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
    lwz r0, 0x62c(r31)
    mr r29, r3
    cmpwi r0, 0x0
    beq lbl_fn_802C5068_000014C4
    lwz r0, 0x624(r31)
    li r5, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_802C5068_00001394
    mr r5, r0
lbl_fn_802C5068_00001394:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_802C5068_000014B0
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_802C5068_00001478
lbl_fn_802C5068_000013AC:
    lwz r0, 0x62c(r31)
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
    lwz r0, 0x62c(r31)
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
    lwz r0, 0x62c(r31)
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
    lwz r0, 0x62c(r31)
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
    bdnz lbl_fn_802C5068_000013AC
    andi. r5, r5, 0x3
    beq lbl_fn_802C5068_000014B0
lbl_fn_802C5068_00001478:
    mtctr r5
lbl_fn_802C5068_0000147C:
    lwz r0, 0x62c(r31)
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
    bdnz lbl_fn_802C5068_0000147C
lbl_fn_802C5068_000014B0:
    lwz r3, 0x62c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802C5068_000014C4
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_802C5068_000014C4:
    stw r29, 0x62c(r31)
    stw r30, 0x628(r31)
    b lbl_fn_802C5068_00001678
lbl_fn_802C5068_000014D0:
    lwz r3, 0x624(r3)
    cmplw r3, r0
    blt lbl_fn_802C5068_00001678
    slwi r30, r3, 1
    cmplw r0, r30
    bgt lbl_fn_802C5068_00001678
    mulli r3, r30, 0x14
    li r4, 0x0
    la r5, lbl_8087D9E4
    la r6, lbl_8087D9E0
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_80148990@ha
    mr r7, r30
    addi r4, r4, fn_80148990@l
    li r5, 0x0
    li r6, 0x14
    bl fn_80695720
    lwz r0, 0x62c(r31)
    mr r29, r3
    cmpwi r0, 0x0
    beq lbl_fn_802C5068_00001670
    lwz r0, 0x624(r31)
    mr r5, r30
    cmplw r30, r0
    ble lbl_fn_802C5068_00001540
    mr r5, r0
lbl_fn_802C5068_00001540:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_802C5068_0000165C
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_802C5068_00001624
lbl_fn_802C5068_00001558:
    lwz r0, 0x62c(r31)
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
    lwz r0, 0x62c(r31)
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
    lwz r0, 0x62c(r31)
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
    lwz r0, 0x62c(r31)
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
    bdnz lbl_fn_802C5068_00001558
    andi. r5, r5, 0x3
    beq lbl_fn_802C5068_0000165C
lbl_fn_802C5068_00001624:
    mtctr r5
lbl_fn_802C5068_00001628:
    lwz r0, 0x62c(r31)
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
    bdnz lbl_fn_802C5068_00001628
lbl_fn_802C5068_0000165C:
    lwz r3, 0x62c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802C5068_00001670
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_802C5068_00001670:
    stw r29, 0x62c(r31)
    stw r30, 0x628(r31)
lbl_fn_802C5068_00001678:
    lwz r0, 0x624(r31)
    addi r3, r1, 0x54
    psq_l f1, 0x0(r3), 0, 0
    lis r4, lbl_80746C90@ha
    mulli r5, r0, 0x14
    lwz r6, 0x62c(r31)
    lwz r0, 0x50(r1)
    addi r4, r4, lbl_80746C90@l
    lfs f2, 0x5c(r1)
    addi r3, r31, 0xb0
    stwux r0, r6, r5
    addi r4, r4, 0xe5
    lfs f0, 0x60(r1)
    li r5, 0x0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    stfs f0, 0x10(r6)
    lwz r6, 0x624(r31)
    addi r0, r6, 0x1
    stw r0, 0x624(r31)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802C5068_000016DC
    li r6, 0x0
    b lbl_fn_802C5068_000016E8
lbl_fn_802C5068_000016DC:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r6, r3, r0
lbl_fn_802C5068_000016E8:
    lfs f6, 0x1c(r6)
    li r0, 0x4
    lfs f7, 0xc(r6)
    ori r3, r0, 0x8
    lfs f3, 0x5a8(r31)
    addi r5, r1, 0x38
    lfs f0, 0x5a4(r31)
    addi r4, r1, 0x54
    fadds f3, f6, f3
    lfs f5, 0x2c(r6)
    fadds f4, f7, f0
    lfs f0, 0x5ac(r31)
    stfs f3, 0x3c(r1)
    fadds f2, f5, f0
    stfs f4, 0x38(r1)
    lfs f3, lbl_8088438C
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lwz r0, 0x62c(r31)
    lfs f4, 0x58(r1)
    lfs f0, 0x5b0(r31)
    cmpwi r0, 0x0
    fadds f3, f4, f3
    stfs f7, 0x2c(r1)
    stfs f6, 0x30(r1)
    stfs f5, 0x34(r1)
    stfs f2, 0x40(r1)
    stfs f2, 0x5c(r1)
    stfs f3, 0x58(r1)
    stfs f0, 0x60(r1)
    stw r3, 0x50(r1)
    beq lbl_fn_802C5068_00001774
    lwz r0, 0x628(r31)
    cmpwi r0, 0x0
    bne lbl_fn_802C5068_00001914
lbl_fn_802C5068_00001774:
    lwz r0, 0x628(r31)
    li r30, 0x8
    cmplwi r0, 0x8
    bgt lbl_fn_802C5068_00001ABC
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
    lwz r0, 0x62c(r31)
    mr r29, r3
    cmpwi r0, 0x0
    beq lbl_fn_802C5068_00001908
    lwz r0, 0x624(r31)
    li r5, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_802C5068_000017D8
    mr r5, r0
lbl_fn_802C5068_000017D8:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_802C5068_000018F4
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_802C5068_000018BC
lbl_fn_802C5068_000017F0:
    lwz r0, 0x62c(r31)
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
    lwz r0, 0x62c(r31)
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
    lwz r0, 0x62c(r31)
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
    lwz r0, 0x62c(r31)
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
    bdnz lbl_fn_802C5068_000017F0
    andi. r5, r5, 0x3
    beq lbl_fn_802C5068_000018F4
lbl_fn_802C5068_000018BC:
    mtctr r5
lbl_fn_802C5068_000018C0:
    lwz r0, 0x62c(r31)
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
    bdnz lbl_fn_802C5068_000018C0
lbl_fn_802C5068_000018F4:
    lwz r3, 0x62c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802C5068_00001908
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_802C5068_00001908:
    stw r29, 0x62c(r31)
    stw r30, 0x628(r31)
    b lbl_fn_802C5068_00001ABC
lbl_fn_802C5068_00001914:
    lwz r3, 0x624(r31)
    cmplw r3, r0
    blt lbl_fn_802C5068_00001ABC
    slwi r30, r3, 1
    cmplw r0, r30
    bgt lbl_fn_802C5068_00001ABC
    mulli r3, r30, 0x14
    li r4, 0x0
    la r5, lbl_8087D9E4
    la r6, lbl_8087D9E0
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_80148990@ha
    mr r7, r30
    addi r4, r4, fn_80148990@l
    li r5, 0x0
    li r6, 0x14
    bl fn_80695720
    lwz r0, 0x62c(r31)
    mr r29, r3
    cmpwi r0, 0x0
    beq lbl_fn_802C5068_00001AB4
    lwz r0, 0x624(r31)
    mr r5, r30
    cmplw r30, r0
    ble lbl_fn_802C5068_00001984
    mr r5, r0
lbl_fn_802C5068_00001984:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_802C5068_00001AA0
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_802C5068_00001A68
lbl_fn_802C5068_0000199C:
    lwz r0, 0x62c(r31)
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
    lwz r0, 0x62c(r31)
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
    lwz r0, 0x62c(r31)
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
    lwz r0, 0x62c(r31)
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
    bdnz lbl_fn_802C5068_0000199C
    andi. r5, r5, 0x3
    beq lbl_fn_802C5068_00001AA0
lbl_fn_802C5068_00001A68:
    mtctr r5
lbl_fn_802C5068_00001A6C:
    lwz r0, 0x62c(r31)
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
    bdnz lbl_fn_802C5068_00001A6C
lbl_fn_802C5068_00001AA0:
    lwz r3, 0x62c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802C5068_00001AB4
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_802C5068_00001AB4:
    stw r29, 0x62c(r31)
    stw r30, 0x628(r31)
lbl_fn_802C5068_00001ABC:
    lwz r0, 0x624(r31)
    addi r3, r1, 0x54
    psq_l f1, 0x0(r3), 0, 0
    lis r4, lbl_80746C90@ha
    mulli r5, r0, 0x14
    lwz r6, 0x62c(r31)
    lwz r0, 0x50(r1)
    addi r4, r4, lbl_80746C90@l
    lfs f2, 0x5c(r1)
    addi r3, r31, 0xb0
    stwux r0, r6, r5
    addi r4, r4, 0xea
    lfs f0, 0x60(r1)
    li r5, 0x0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    stfs f0, 0x10(r6)
    lwz r6, 0x624(r31)
    addi r0, r6, 0x1
    stw r0, 0x624(r31)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802C5068_00001B20
    li r4, 0x0
    b lbl_fn_802C5068_00001B2C
lbl_fn_802C5068_00001B20:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r4, r3, r0
lbl_fn_802C5068_00001B2C:
    lfs f4, 0x2c(r4)
    li r0, 0x4
    lfs f0, 0x5ac(r31)
    ori r3, r0, 0xa
    lfs f5, 0x1c(r4)
    addi r5, r1, 0x20
    fadds f2, f4, f0
    lfs f6, 0xc(r4)
    lfs f3, 0x5a8(r31)
    addi r4, r1, 0x54
    lfs f0, 0x5a4(r31)
    fadds f3, f5, f3
    fadds f7, f6, f0
    lwz r0, 0x62c(r31)
    lfs f0, 0x5b0(r31)
    stfs f7, 0x20(r1)
    cmpwi r0, 0x0
    stfs f3, 0x24(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f6, 0x14(r1)
    stfs f5, 0x18(r1)
    stfs f4, 0x1c(r1)
    stfs f2, 0x28(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x5c(r1)
    stfs f0, 0x60(r1)
    stw r3, 0x50(r1)
    beq lbl_fn_802C5068_00001BA8
    lwz r0, 0x628(r31)
    cmpwi r0, 0x0
    bne lbl_fn_802C5068_00001D48
lbl_fn_802C5068_00001BA8:
    lwz r0, 0x628(r31)
    li r30, 0x8
    cmplwi r0, 0x8
    bgt lbl_fn_802C5068_00001EF0
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
    lwz r0, 0x62c(r31)
    mr r29, r3
    cmpwi r0, 0x0
    beq lbl_fn_802C5068_00001D3C
    lwz r0, 0x624(r31)
    li r5, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_802C5068_00001C0C
    mr r5, r0
lbl_fn_802C5068_00001C0C:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_802C5068_00001D28
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_802C5068_00001CF0
lbl_fn_802C5068_00001C24:
    lwz r0, 0x62c(r31)
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
    lwz r0, 0x62c(r31)
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
    lwz r0, 0x62c(r31)
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
    lwz r0, 0x62c(r31)
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
    bdnz lbl_fn_802C5068_00001C24
    andi. r5, r5, 0x3
    beq lbl_fn_802C5068_00001D28
lbl_fn_802C5068_00001CF0:
    mtctr r5
lbl_fn_802C5068_00001CF4:
    lwz r0, 0x62c(r31)
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
    bdnz lbl_fn_802C5068_00001CF4
lbl_fn_802C5068_00001D28:
    lwz r3, 0x62c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802C5068_00001D3C
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_802C5068_00001D3C:
    stw r29, 0x62c(r31)
    stw r30, 0x628(r31)
    b lbl_fn_802C5068_00001EF0
lbl_fn_802C5068_00001D48:
    lwz r3, 0x624(r31)
    cmplw r3, r0
    blt lbl_fn_802C5068_00001EF0
    slwi r30, r3, 1
    cmplw r0, r30
    bgt lbl_fn_802C5068_00001EF0
    mulli r3, r30, 0x14
    li r4, 0x0
    la r5, lbl_8087D9E4
    la r6, lbl_8087D9E0
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_80148990@ha
    mr r7, r30
    addi r4, r4, fn_80148990@l
    li r5, 0x0
    li r6, 0x14
    bl fn_80695720
    lwz r0, 0x62c(r31)
    mr r29, r3
    cmpwi r0, 0x0
    beq lbl_fn_802C5068_00001EE8
    lwz r0, 0x624(r31)
    mr r5, r30
    cmplw r30, r0
    ble lbl_fn_802C5068_00001DB8
    mr r5, r0
lbl_fn_802C5068_00001DB8:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_802C5068_00001ED4
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_802C5068_00001E9C
lbl_fn_802C5068_00001DD0:
    lwz r0, 0x62c(r31)
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
    lwz r0, 0x62c(r31)
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
    lwz r0, 0x62c(r31)
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
    lwz r0, 0x62c(r31)
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
    bdnz lbl_fn_802C5068_00001DD0
    andi. r5, r5, 0x3
    beq lbl_fn_802C5068_00001ED4
lbl_fn_802C5068_00001E9C:
    mtctr r5
lbl_fn_802C5068_00001EA0:
    lwz r0, 0x62c(r31)
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
    bdnz lbl_fn_802C5068_00001EA0
lbl_fn_802C5068_00001ED4:
    lwz r3, 0x62c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802C5068_00001EE8
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_802C5068_00001EE8:
    stw r29, 0x62c(r31)
    stw r30, 0x628(r31)
lbl_fn_802C5068_00001EF0:
    lwz r0, 0x624(r31)
    addi r5, r1, 0x54
    lwz r4, 0x62c(r31)
    mulli r3, r0, 0x14
    lwz r0, 0x50(r1)
    stwux r0, r3, r4
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x4(r3), 0, 0
    lfs f2, 0x5c(r1)
    stfs f2, 0xc(r3)
    lfs f0, 0x60(r1)
    stfs f0, 0x10(r3)
    lwz r3, 0x624(r31)
    lwz r0, 0x12a8(r31)
    addi r3, r3, 0x1
    stw r3, 0x624(r31)
    rlwinm r0, r0, 0, 3, 1
    stw r0, 0x12a8(r31)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    lwz r29, 0x74(r1)
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}
