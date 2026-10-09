#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_21(void);
extern void _restgpr_24(void);
extern void _restgpr_25(void);
extern void _restgpr_27(void);
extern void _savegpr_21(void);
extern void _savegpr_24(void);
extern void _savegpr_25(void);
extern void _savegpr_27(void);
extern void fn_8004D388(void);
extern void fn_8004ED34(void);
extern void fn_80084320(void);
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800EB7A0(void);
extern void fn_800F8548(void);
extern void fn_800F8574(void);
extern void fn_800FAB80(void);
extern void fn_8012D8B8(void);
extern void fn_8012DD70(void);
extern void fn_80139560(void);
extern void fn_8015495C(void);
extern void fn_8016DA4C(void);
extern void fn_8016E970(void);
extern void fn_80176ACC(void);
extern void fn_80178208(void);
extern void fn_80178A6C(void);
extern void fn_80179D44(void);
extern void fn_801C02F4(void);
extern void fn_80232B7C(void);
extern void fn_80239DAC(void);
extern void fn_8023A8B4(void);
extern void fn_80370A78(void);
extern void fn_80370AE4(void);
extern void fn_805F8E70(void);
extern void fn_805F9050(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_80680CF8(void);
extern void fn_8068AEA4(void);

/* External data declarations */
extern u8 lbl_807435F0[];
extern u8 lbl_8074367C[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_80883268;
extern u32 lbl_8088326C;
extern u32 lbl_8088328C;
extern u32 lbl_808832A4;
extern u32 lbl_808832A8;
extern u32 lbl_808832AC;
extern u32 lbl_808832B0;
extern u32 lbl_808832B4;
extern u32 lbl_808832C4;
extern u32 lbl_808832C8;
extern u32 lbl_808832D4;
extern u32 lbl_808832F8;
extern u32 lbl_808832FC;
extern u32 lbl_80883300;
extern u32 lbl_80883304;
extern u32 lbl_80883308;
extern u32 lbl_8088330C;
extern u32 lbl_80883310;
extern u32 lbl_80883314;
extern u32 lbl_80883318;
extern u32 lbl_8088331C;
extern u32 lbl_80883320;
extern u32 lbl_80883324;
extern u32 lbl_80883328;
extern u32 lbl_8088332C;
extern u32 lbl_80883330;

/* Function declarations */
void fn_8024ED68(void);
void fn_8024F1DC(void);
void fn_8024F9B8(void);
void fn_8024FCDC(void);
void fn_8024FE18(void);
void fn_8024FFE8(void);
void fn_802506AC(void);

asm void fn_8024ED68(void)
{
    nofralloc
    stwu r1, -0x200(r1)
    mflr r0
    stw r0, 0x204(r1)
    addi r11, r1, 0x140
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
    bl _savegpr_21
    lwz r0, 0x14b8(r3)
    lis r4, 0x4330
    stw r4, 0xf8(r1)
    mr r22, r3
    cmpwi r0, 0x0
    li r21, 0x1
    stw r4, 0x100(r1)
    bne lbl_fn_8024ED68_000003C0
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_8024ED68_000003C0
    lwz r0, 0x560(r3)
    cmpwi r0, 0x1d
    beq lbl_fn_8024ED68_000000C0
    cmpwi r0, 0x1e
    beq lbl_fn_8024ED68_000000D8
    cmpwi r0, 0x1f
    beq lbl_fn_8024ED68_000003AC
    b lbl_fn_8024ED68_000003C0
lbl_fn_8024ED68_000000C0:
    lwz r0, 0x12a4(r3)
    li r21, 0x0
    ori r0, r0, 0x10
    stw r0, 0x12a4(r3)
    bl fn_80139560
    b lbl_fn_8024ED68_000003C0
lbl_fn_8024ED68_000000D8:
    lwz r26, 0xf80(r3)
    li r4, 0x0
    lwz r25, 0x638(r3)
    lbz r0, 0x1d(r26)
    cmpwi r0, 0x0
    bne lbl_fn_8024ED68_00000108
    lfs f3, 0x2e4(r3)
    lfs f0, lbl_808832FC
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_8024ED68_00000108
    li r4, 0x1
lbl_fn_8024ED68_00000108:
    cmpwi r4, 0x0
    beq lbl_fn_8024ED68_00000348
    mr r3, r22
    bl fn_8016DA4C
    li r0, 0x1
    stb r0, 0x1d(r26)
    addi r5, r1, 0x30
    lfs f4, lbl_80883300
    lfs f2, 0x530(r22)
    addi r3, r1, 0x70
    psq_l f1, 0x528(r22), 0, 0
    li r4, 0x79
    psq_st f1, 0x0(r5), 0, 0
    lfs f3, lbl_80883268
    lfs f5, 0x34(r1)
    lfs f0, lbl_8088326C
    fadds f4, f5, f4
    stfs f2, 0x38(r1)
    stfs f4, 0x34(r1)
    stfs f3, 0x24(r1)
    stfs f3, 0x28(r1)
    stfs f0, 0x2c(r1)
    lfs f1, 0x538(r22)
    bl fn_805F8E70
    addi r4, r1, 0x24
    addi r3, r1, 0x70
    mr r5, r4
    bl fn_805F93C0
    lfs f3, 0x28(r1)
    addi r3, r1, 0x24
    lfs f0, lbl_8088326C
    mr r4, r3
    fadds f0, f3, f0
    stfs f0, 0x28(r1)
    bl fn_805F98D0
    lis r4, lbl_807435F0@ha
    li r0, 0x2
    lis r3, 0x5555
    lfd f30, lbl_807435F0@l(r4)
    lfs f31, lbl_808832D4
    addi r27, r1, 0x24
    lfs f21, lbl_80883268
    addi r28, r1, 0x18
    lfs f22, lbl_8088326C
    xoris r29, r0, 0x8000
    lfs f23, lbl_80883304
    addi r21, r3, 0x5556
    lfs f24, lbl_808832A8
    li r24, 0x3
    lfs f25, lbl_8088328C
    li r23, 0x0
    lfs f26, lbl_80883308
    li r30, 0x0
    lfs f27, lbl_8088330C
    li r31, -0x1
    lfs f28, lbl_808832F8
    lfs f29, lbl_80883310
lbl_fn_8024ED68_000001EC:
    stw r29, 0xfc(r1)
    xoris r0, r23, 0x8000
    psq_l f1, 0x0(r27), 0, 0
    addi r3, r1, 0x40
    lfd f0, 0xf8(r1)
    li r4, 0x79
    stw r0, 0x104(r1)
    lfs f2, 0x2c(r1)
    fsubs f4, f0, f30
    stw r29, 0xfc(r1)
    lfd f3, 0x100(r1)
    lfd f0, 0xf8(r1)
    fsubs f3, f3, f30
    psq_st f1, 0x0(r28), 0, 0
    fsubs f0, f0, f30
    stfs f2, 0x20(r1)
    fnmsubs f3, f31, f4, f3
    fmuls f0, f31, f0
    stfs f21, 0xc(r1)
    stfs f21, 0x10(r1)
    fdivs f20, f3, f0
    stfs f22, 0x14(r1)
    lfs f1, 0x538(r22)
    bl fn_805F8E70
    addi r4, r1, 0xc
    addi r3, r1, 0x40
    mr r5, r4
    bl fn_805F93C0
    fmuls f1, f23, f20
    addi r3, r1, 0xa0
    addi r4, r1, 0xc
    bl fn_805F9050
    mr r4, r28
    mr r5, r28
    addi r3, r1, 0xa0
    bl fn_805F93C0
    stw r30, 0xd0(r1)
    stfs f21, 0xd4(r1)
    stfs f24, 0xd8(r1)
    stfs f25, 0xdc(r1)
    stfs f26, 0xe0(r1)
    stfs f27, 0xe4(r1)
    stfs f28, 0xe8(r1)
    stw r30, 0xec(r1)
    stw r31, 0xf0(r1)
    lwz r0, 0x14(r26)
    stw r0, 0xd0(r1)
    bl fn_80680CF8
    mulhw r6, r21, r3
    stfs f29, 0xe0(r1)
    lfs f1, lbl_80883268
    mr r4, r22
    lfs f2, lbl_8088326C
    mr r5, r25
    srwi r0, r6, 31
    mr r7, r28
    add r0, r6, r0
    addi r6, r1, 0x30
    mulli r0, r0, 0x3
    addi r8, r1, 0xd0
    li r9, 0x0
    li r10, 0x0
    subf r11, r0, r3
    lwz r3, lbl_8087F048
    addi r0, r11, 0x2
    xoris r0, r0, 0x8000
    stw r0, 0x104(r1)
    lfd f0, 0x100(r1)
    fsubs f0, f0, f30
    stfs f0, 0xe8(r1)
    bl fn_800F8574
    addi r23, r23, 0x1
    cmpw r23, r24
    blt lbl_fn_8024ED68_000001EC
    lis r4, lbl_8074367C@ha
    lfs f1, lbl_8088326C
    addi r4, r4, lbl_8074367C@l
    addi r3, r1, 0x8
    addi r4, r4, 0x2f0
    addi r5, r1, 0x30
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_8024ED68_000003A4
lbl_fn_8024ED68_00000348:
    lfs f21, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f21, f1
    cror eq, gt, eq
    bne lbl_fn_8024ED68_000003A4
    lis r5, lbl_8074367C@ha
    li r3, 0x34
    addi r5, r5, lbl_8074367C@l
    li r4, 0x1
    addi r5, r5, 0x2b
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_8024ED68_0000039C
    mr r4, r22
    bl fn_801C02F4
    mr r4, r3
lbl_fn_8024ED68_0000039C:
    mr r3, r22
    bl fn_80178208
lbl_fn_8024ED68_000003A4:
    li r21, 0x0
    b lbl_fn_8024ED68_000003C0
lbl_fn_8024ED68_000003AC:
    lwz r0, 0x12a4(r3)
    li r21, 0x0
    ori r0, r0, 0x10
    stw r0, 0x12a4(r3)
    bl fn_80139560
lbl_fn_8024ED68_000003C0:
    cmpwi r21, 0x0
    beq lbl_fn_8024ED68_000003FC
    lwz r0, 0x12a4(r22)
    mr r3, r22
    ori r0, r0, 0x10
    stw r0, 0x12a4(r22)
    bl fn_80139560
    li r23, 0x0
    stw r23, 0x58c(r22)
    mr r3, r22
    li r4, 0x3
    bl fn_8016E970
    stw r23, 0x14b8(r22)
    stw r23, 0x14bc(r22)
    stw r23, 0x14dc(r22)
lbl_fn_8024ED68_000003FC:
    addi r11, r1, 0x140
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
    bl _restgpr_21
    lwz r0, 0x204(r1)
    mtlr r0
    addi r1, r1, 0x200
    blr
}

asm void fn_8024F1DC(void)
{
    nofralloc
    stwu r1, -0x200(r1)
    mflr r0
    stw r0, 0x204(r1)
    addi r11, r1, 0x1d0
    stfd f31, 0x1f0(r1)
    psq_st f31, 0x1f8(r1), 0, 0
    stfd f30, 0x1e0(r1)
    psq_st f30, 0x1e8(r1), 0, 0
    stfd f29, 0x1d0(r1)
    psq_st f29, 0x1d8(r1), 0, 0
    bl _savegpr_24
    lwz r0, 0x14b8(r3)
    mr r31, r3
    cmpwi r0, 0x0
    beq lbl_fn_8024F1DC_000004C4
    cmpwi r0, 0x1
    beq lbl_fn_8024F1DC_000009B8
    cmpwi r0, 0x3
    beq lbl_fn_8024F1DC_00000B4C
    b lbl_fn_8024F1DC_00000C20
lbl_fn_8024F1DC_000004C4:
    lwz r0, 0x14b0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8024F1DC_00000C20
    lis r4, lbl_8074367C@ha
    li r5, 0x0
    addi r4, r4, lbl_8074367C@l
    addi r3, r3, 0xb0
    addi r4, r4, 0x2fd
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8024F1DC_000004F8
    li r4, 0x0
    b lbl_fn_8024F1DC_00000504
lbl_fn_8024F1DC_000004F8:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r4, r3, r0
lbl_fn_8024F1DC_00000504:
    lfs f7, 0x2c(r4)
    addi r3, r1, 0xd4
    lfs f8, 0x1c(r4)
    addi r28, r1, 0xc8
    lfs f9, 0xc(r4)
    stfs f9, 0xec(r1)
    lfs f3, lbl_808832D4
    stfs f8, 0xf0(r1)
    lfs f0, lbl_808832AC
    stfs f7, 0xf4(r1)
    lwz r4, 0x14b0(r31)
    lfs f5, 0x5fc(r4)
    lfs f4, 0x608(r4)
    lfs f6, 0x5f8(r4)
    fadds f10, f5, f4
    lfs f4, 0x604(r4)
    lfs f5, 0x5f4(r4)
    fadds f6, f6, f4
    lfs f4, 0x600(r4)
    fmuls f11, f10, f3
    fadds f4, f5, f4
    stfs f6, 0xa8(r1)
    fmuls f5, f6, f3
    fsubs f2, f11, f7
    stfs f4, 0xa4(r1)
    fmuls f3, f4, f3
    fsubs f4, f5, f8
    stfs f10, 0xac(r1)
    stfs f4, 0xd8(r1)
    fsubs f6, f3, f9
    frsp f4, f2
    stfs f6, 0xd4(r1)
    psq_l f1, 0x0(r3), 0, 0
    fabs f6, f4
    stfs f3, 0xe0(r1)
    frsp f3, f6
    stfs f5, 0xe4(r1)
    stfs f11, 0xe8(r1)
    fcmpo cr0, f3, f0
    stfs f2, 0xdc(r1)
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0xd0(r1)
    bge lbl_fn_8024F1DC_000005D4
    lfs f3, 0xc8(r1)
    lfs f0, lbl_80883268
    fcmpo cr0, f3, f0
    ble lbl_fn_8024F1DC_000005C8
    lfs f0, lbl_808832B0
    b lbl_fn_8024F1DC_000005CC
lbl_fn_8024F1DC_000005C8:
    lfs f0, lbl_808832B4
lbl_fn_8024F1DC_000005CC:
    stfs f0, 0x9c(r1)
    b lbl_fn_8024F1DC_000005E8
lbl_fn_8024F1DC_000005D4:
    fmr f2, f4
    lfs f1, 0xc8(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x9c(r1)
lbl_fn_8024F1DC_000005E8:
    lfs f0, 0x9c(r1)
    addi r3, r1, 0x128
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883268
    addi r4, r1, 0x8c
    lfs f30, 0x130(r1)
    mr r5, r4
    lfs f29, 0x12c(r1)
    addi r3, r1, 0x158
    lfs f13, 0x128(r1)
    lfs f12, 0x140(r1)
    lfs f11, 0x13c(r1)
    lfs f10, 0x138(r1)
    lfs f9, 0x150(r1)
    lfs f8, 0x14c(r1)
    lfs f7, 0x148(r1)
    lfs f6, 0x154(r1)
    lfs f5, 0x144(r1)
    lfs f4, 0x134(r1)
    lfs f0, lbl_8088326C
    psq_l f1, 0x0(r28), 0, 0
    lfs f2, 0xd0(r1)
    stfs f3, 0x188(r1)
    stfs f3, 0x18c(r1)
    stfs f3, 0x190(r1)
    stfs f0, 0x194(r1)
    stfs f13, 0x5c(r1)
    stfs f29, 0x60(r1)
    stfs f30, 0x64(r1)
    stfs f13, 0x158(r1)
    stfs f29, 0x15c(r1)
    stfs f30, 0x160(r1)
    stfs f10, 0x68(r1)
    stfs f11, 0x6c(r1)
    stfs f12, 0x70(r1)
    stfs f10, 0x168(r1)
    stfs f11, 0x16c(r1)
    stfs f12, 0x170(r1)
    stfs f7, 0x74(r1)
    stfs f8, 0x78(r1)
    stfs f9, 0x7c(r1)
    stfs f7, 0x178(r1)
    stfs f8, 0x17c(r1)
    stfs f9, 0x180(r1)
    stfs f4, 0x80(r1)
    stfs f5, 0x84(r1)
    stfs f6, 0x88(r1)
    stfs f4, 0x164(r1)
    stfs f5, 0x174(r1)
    stfs f6, 0x184(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x94(r1)
    bl fn_805F9750
    lfs f2, 0x94(r1)
    lfs f0, lbl_808832AC
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8024F1DC_00000704
    lfs f3, 0x90(r1)
    lfs f0, lbl_80883268
    fcmpo cr0, f3, f0
    ble lbl_fn_8024F1DC_000006F4
    lfs f0, lbl_808832B0
    b lbl_fn_8024F1DC_000006F8
lbl_fn_8024F1DC_000006F4:
    lfs f0, lbl_808832B4
lbl_fn_8024F1DC_000006F8:
    fneg f0, f0
    stfs f0, 0x98(r1)
    b lbl_fn_8024F1DC_00000718
lbl_fn_8024F1DC_00000704:
    lfs f1, 0x90(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x98(r1)
lbl_fn_8024F1DC_00000718:
    addi r3, r1, 0x98
    lfs f2, lbl_80883268
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    lfs f3, lbl_80883314
    lfs f0, 0xc8(r1)
    stfs f2, 0xa0(r1)
    fcmpo cr0, f3, f0
    stfs f2, 0xd0(r1)
    bge lbl_fn_8024F1DC_00000744
    b lbl_fn_8024F1DC_00000748
lbl_fn_8024F1DC_00000744:
    fmr f3, f0
lbl_fn_8024F1DC_00000748:
    lfs f4, lbl_80883318
    fcmpo cr0, f4, f3
    ble lbl_fn_8024F1DC_00000758
    b lbl_fn_8024F1DC_00000770
lbl_fn_8024F1DC_00000758:
    lfs f4, lbl_80883314
    lfs f0, 0xc8(r1)
    fcmpo cr0, f4, f0
    bge lbl_fn_8024F1DC_0000076C
    b lbl_fn_8024F1DC_00000770
lbl_fn_8024F1DC_0000076C:
    fmr f4, f0
lbl_fn_8024F1DC_00000770:
    stfs f4, 0xc8(r1)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    lfs f0, lbl_8088331C
    addi r3, r31, 0xb0
    lfs f29, 0x2e4(r31)
    li r4, 0x0
    fsubs f30, f1, f0
    bl fn_80097D7C
    lfs f0, lbl_80883320
    fsubs f0, f1, f0
    fcmpo cr0, f29, f0
    cror eq, gt, eq
    beq lbl_fn_8024F1DC_000007F4
    lfs f0, 0x2e4(r31)
    fcmpo cr0, f0, f30
    cror eq, gt, eq
    bne lbl_fn_8024F1DC_000007EC
    fsubs f3, f0, f30
    lfs f0, lbl_80883324
    lfs f4, lbl_8088326C
    fdivs f0, f3, f0
    fcmpo cr0, f4, f0
    bge lbl_fn_8024F1DC_000007D8
    b lbl_fn_8024F1DC_000007DC
lbl_fn_8024F1DC_000007D8:
    fmr f4, f0
lbl_fn_8024F1DC_000007DC:
    lfs f0, 0xc8(r1)
    fmuls f0, f0, f4
    stfs f0, 0xc8(r1)
    b lbl_fn_8024F1DC_000007F4
lbl_fn_8024F1DC_000007EC:
    lfs f0, lbl_80883268
    stfs f0, 0xc8(r1)
lbl_fn_8024F1DC_000007F4:
    lwz r0, 0x1650(r31)
    cmpwi r0, 0x0
    blt lbl_fn_8024F1DC_0000084C
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_808832F8
    fcmpo cr0, f0, f3
    cror eq, lt, eq
    bne lbl_fn_8024F1DC_0000084C
    lfs f0, lbl_80883328
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_8024F1DC_0000084C
    mulli r0, r0, 0xc
    addi r4, r1, 0xbc
    add r3, r31, r0
    addi r3, r3, 0x1594
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x8(r3)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xc4(r1)
    psq_st f1, 0x528(r31), 0, 0
    stfs f2, 0x530(r31)
lbl_fn_8024F1DC_0000084C:
    addi r3, r1, 0xc8
    lfs f2, 0xd0(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r31, 0xb0
    psq_st f1, 0x534(r31), 0, 0
    li r4, 0x0
    lfs f29, 0x2e4(r31)
    stfs f2, 0x53c(r31)
    bl fn_80097D7C
    lfs f0, lbl_80883328
    fsubs f0, f1, f0
    fcmpo cr0, f29, f0
    cror eq, gt, eq
    bne lbl_fn_8024F1DC_00000C20
    lwz r0, 0x16e4(r31)
    li r28, 0x5
    cmpwi r0, 0x0
    beq lbl_fn_8024F1DC_00000898
    li r28, 0x3
lbl_fn_8024F1DC_00000898:
    lfs f3, 0xe8(r1)
    addi r3, r1, 0x44
    lfs f0, 0xf4(r1)
    mr r4, r3
    lfs f5, 0xe4(r1)
    addi r27, r1, 0xec
    fsubs f6, f3, f0
    lfs f4, 0xf0(r1)
    lfs f3, 0xe0(r1)
    lfs f0, 0xec(r1)
    fsubs f4, f5, f4
    stfs f6, 0x4c(r1)
    fsubs f0, f3, f0
    stfs f4, 0x48(r1)
    stfs f0, 0x44(r1)
    bl fn_805F98D0
    lis r3, lbl_807435F0@ha
    subi r0, r28, 0x1
    lfd f29, lbl_807435F0@l(r3)
    addi r26, r1, 0x44
    lfs f30, lbl_808832D4
    addi r25, r1, 0x50
    lfs f31, lbl_80883304
    xoris r29, r0, 0x8000
    li r24, 0x0
    lis r30, 0x4330
    b lbl_fn_8024F1DC_000009A4
lbl_fn_8024F1DC_00000904:
    stw r29, 0x19c(r1)
    xoris r0, r24, 0x8000
    psq_l f1, 0x0(r26), 0, 0
    addi r3, r1, 0xf8
    stw r30, 0x198(r1)
    li r4, 0x79
    lfs f2, 0x4c(r1)
    lfd f0, 0x198(r1)
    stw r0, 0x1a4(r1)
    fsubs f4, f0, f29
    stw r30, 0x1a0(r1)
    lfd f0, 0x1a0(r1)
    stw r29, 0x1ac(r1)
    fsubs f3, f0, f29
    stw r30, 0x1a8(r1)
    lfd f0, 0x1a8(r1)
    fnmsubs f3, f30, f4, f3
    psq_st f1, 0x0(r25), 0, 0
    fsubs f0, f0, f29
    stfs f2, 0x58(r1)
    fmuls f0, f30, f0
    fdivs f0, f3, f0
    fmuls f1, f31, f0
    bl fn_805F8E70
    mr r4, r25
    mr r5, r25
    addi r3, r1, 0xf8
    bl fn_805F93C0
    lwz r3, lbl_8087F048
    mr r4, r31
    lwz r5, 0x14d4(r31)
    mr r6, r27
    lfs f1, lbl_80883268
    mr r7, r25
    lfs f2, lbl_8088326C
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_800F8574
    addi r24, r24, 0x1
lbl_fn_8024F1DC_000009A4:
    cmpw r24, r28
    blt lbl_fn_8024F1DC_00000904
    li r0, 0x1
    stw r0, 0x14b8(r31)
    b lbl_fn_8024F1DC_00000C20
lbl_fn_8024F1DC_000009B8:
    lfs f29, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f29, f1
    cror eq, gt, eq
    bne lbl_fn_8024F1DC_00000C20
    lwz r3, 0x164c(r31)
    subic. r0, r3, 0x1
    stw r0, 0x164c(r31)
    ble lbl_fn_8024F1DC_00000B1C
    lwz r4, 0x1590(r31)
    cmpwi r4, 0x0
    beq lbl_fn_8024F1DC_00000AEC
    lwz r3, 0x1650(r31)
    cmpwi r3, 0x0
    bge lbl_fn_8024F1DC_00000A74
    lfs f29, lbl_80883268
    addi r26, r31, 0x1594
    li r25, -0x1
    li r24, 0x0
    b lbl_fn_8024F1DC_00000A60
lbl_fn_8024F1DC_00000A10:
    lfs f3, 0x530(r31)
    addi r3, r1, 0x38
    lfs f0, 0x8(r26)
    lfs f5, 0x52c(r31)
    fsubs f6, f3, f0
    lfs f4, 0x4(r26)
    lfs f3, 0x528(r31)
    lfs f0, 0x0(r26)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x3c(r1)
    stfs f0, 0x38(r1)
    stfs f6, 0x40(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f29
    ble lbl_fn_8024F1DC_00000A58
    mr r25, r24
    fmr f29, f1
lbl_fn_8024F1DC_00000A58:
    addi r26, r26, 0xc
    addi r24, r24, 0x1
lbl_fn_8024F1DC_00000A60:
    lwz r0, 0x1590(r31)
    cmplw r24, r0
    blt lbl_fn_8024F1DC_00000A10
    stw r25, 0x1650(r31)
    b lbl_fn_8024F1DC_00000A88
lbl_fn_8024F1DC_00000A74:
    addi r3, r3, 0x1
    divwu r0, r3, r4
    mullw r0, r0, r4
    subf r0, r0, r3
    stw r0, 0x1650(r31)
lbl_fn_8024F1DC_00000A88:
    lfs f0, lbl_80883268
    li r3, -0x1
    lfs f1, lbl_8088326C
    li r0, 0x1
    stfs f0, 0x1c(r1)
    addi r4, r31, 0x157c
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
lbl_fn_8024F1DC_00000AEC:
    lfs f1, lbl_8088326C
    addi r3, r31, 0xb0
    lfs f2, lbl_808832C4
    li r4, 0x0
    li r5, 0x146
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    li r0, 0x0
    stw r0, 0x14b8(r31)
    b lbl_fn_8024F1DC_00000C20
lbl_fn_8024F1DC_00000B1C:
    lfs f1, lbl_8088326C
    addi r3, r31, 0xb0
    lfs f2, lbl_808832C4
    li r4, 0x0
    li r5, 0x147
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    li r0, 0x3
    stw r0, 0x14b8(r31)
    b lbl_fn_8024F1DC_00000C20
lbl_fn_8024F1DC_00000B4C:
    addi r4, r1, 0xb0
    psq_l f1, 0x534(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lfs f2, 0x53c(r3)
    lfs f3, 0xb0(r1)
    lfs f0, lbl_80883268
    stfs f2, 0xb8(r1)
    fcmpo cr0, f3, f0
    ble lbl_fn_8024F1DC_00000B94
    lfs f0, lbl_808832C8
    fcmpo cr0, f3, f0
    bge lbl_fn_8024F1DC_00000B80
    b lbl_fn_8024F1DC_00000B84
lbl_fn_8024F1DC_00000B80:
    fmr f3, f0
lbl_fn_8024F1DC_00000B84:
    lfs f0, 0xb0(r1)
    fsubs f0, f0, f3
    stfs f0, 0xb0(r1)
    b lbl_fn_8024F1DC_00000BB8
lbl_fn_8024F1DC_00000B94:
    bge lbl_fn_8024F1DC_00000BB8
    lfs f0, lbl_8088332C
    fcmpo cr0, f3, f0
    bge lbl_fn_8024F1DC_00000BA8
    b lbl_fn_8024F1DC_00000BAC
lbl_fn_8024F1DC_00000BA8:
    fmr f3, f0
lbl_fn_8024F1DC_00000BAC:
    lfs f0, 0xb0(r1)
    fsubs f0, f0, f3
    stfs f0, 0xb0(r1)
lbl_fn_8024F1DC_00000BB8:
    addi r24, r1, 0xb0
    lfs f2, 0xb8(r1)
    psq_l f1, 0x0(r24), 0, 0
    li r4, 0x0
    psq_st f1, 0x534(r3), 0, 0
    lfs f29, 0x2e4(r3)
    stfs f2, 0x53c(r3)
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f29, f1
    cror eq, gt, eq
    bne lbl_fn_8024F1DC_00000C20
    lfs f0, lbl_80883268
    li r30, 0x0
    stfs f0, 0xb0(r1)
    mr r3, r31
    lfs f2, 0xb8(r1)
    li r4, 0x3
    psq_l f1, 0x0(r24), 0, 0
    psq_st f1, 0x534(r31), 0, 0
    stfs f2, 0x53c(r31)
    stw r30, 0x58c(r31)
    bl fn_8016E970
    stw r30, 0x14b8(r31)
    stw r30, 0x14bc(r31)
    stw r30, 0x14dc(r31)
lbl_fn_8024F1DC_00000C20:
    addi r11, r1, 0x1d0
    psq_l f31, 0x1f8(r1), 0, 0
    lfd f31, 0x1f0(r1)
    psq_l f30, 0x1e8(r1), 0, 0
    lfd f30, 0x1e0(r1)
    psq_l f29, 0x1d8(r1), 0, 0
    lfd f29, 0x1d0(r1)
    bl _restgpr_24
    lwz r0, 0x204(r1)
    mtlr r0
    addi r1, r1, 0x200
    blr
}

asm void fn_8024F9B8(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    addi r11, r1, 0xc0
    bl _savegpr_27
    lfs f2, 0x530(r3)
    addi r31, r1, 0x44
    psq_l f1, 0x528(r3), 0, 0
    addi r30, r1, 0x38
    psq_st f1, 0x0(r31), 0, 0
    frsp f0, f2
    lfs f3, lbl_8088328C
    mr r27, r3
    stfs f2, 0x4c(r1)
    lfs f4, 0x48(r1)
    lwz r4, 0x14b0(r3)
    addi r3, r1, 0x2c
    fadds f4, f4, f3
    lfs f2, 0x530(r4)
    psq_l f1, 0x528(r4), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    fsubs f5, f2, f0
    lfs f0, 0x44(r1)
    fsubs f6, f4, f4
    lfs f3, 0x38(r1)
    stfs f2, 0x40(r1)
    fsubs f0, f3, f0
    stfs f4, 0x48(r1)
    stfs f4, 0x3c(r1)
    stfs f0, 0x2c(r1)
    stfs f6, 0x30(r1)
    stfs f5, 0x34(r1)
    bl fn_805F9940
    lfs f0, 0x166c(r27)
    fcmpo cr0, f1, f0
    bge lbl_fn_8024F9B8_00000CE8
    li r3, 0x0
    b lbl_fn_8024F9B8_00000F5C
lbl_fn_8024F9B8_00000CE8:
    addi r3, r1, 0x2c
    mr r4, r3
    bl fn_805F98D0
    lfs f5, 0x34(r1)
    li r0, 0x0
    lfs f4, lbl_80883328
    mr r3, r27
    lfs f3, 0x30(r1)
    lfs f0, 0x2c(r1)
    fmuls f5, f5, f4
    fmuls f6, f3, f4
    lfs f3, 0x3c(r1)
    fmuls f7, f0, f4
    lfs f4, 0x38(r1)
    lfs f0, 0x40(r1)
    fsubs f3, f3, f6
    fsubs f4, f4, f7
    stfs f7, 0x14(r1)
    fsubs f0, f0, f5
    lwz r29, lbl_8087EE98
    stfs f6, 0x18(r1)
    stfs f5, 0x1c(r1)
    stfs f4, 0x38(r1)
    stfs f3, 0x3c(r1)
    stfs f0, 0x40(r1)
    stw r0, 0x84(r1)
    stw r0, 0x88(r1)
    stw r0, 0x8c(r1)
    stw r0, 0x90(r1)
    bl fn_80179D44
    oris r7, r3, 0x8000
    mr r3, r29
    mr r5, r31
    mr r6, r30
    addi r4, r1, 0x50
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ED34
    cmpwi r3, 0x0
    bne lbl_fn_8024F9B8_00000F58
    psq_l f1, 0x0(r30), 0, 0
    mr r3, r27
    psq_st f1, 0x0(r31), 0, 0
    lfs f2, 0x40(r1)
    lfs f5, 0x48(r1)
    lfs f4, lbl_808832F8
    lfs f3, 0x3c(r1)
    lfs f0, lbl_808832A4
    fadds f4, f5, f4
    stfs f2, 0x4c(r1)
    fsubs f0, f3, f0
    lwz r29, lbl_8087EE98
    stfs f4, 0x48(r1)
    stfs f0, 0x3c(r1)
    bl fn_80179D44
    oris r7, r3, 0x8000
    mr r3, r29
    mr r5, r31
    mr r6, r30
    addi r4, r1, 0x50
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_8024F9B8_00000F58
    lfs f4, 0x58(r1)
    lfs f3, 0x52c(r27)
    lfs f0, lbl_808832F8
    fsubs f3, f4, f3
    fabs f3, f3
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8024F9B8_00000F58
    addi r3, r1, 0x54
    lfs f2, 0x5c(r1)
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r27
    psq_st f1, 0x0(r31), 0, 0
    lfs f5, lbl_808832D4
    stfs f2, 0x4c(r1)
    lfs f3, 0x48(r1)
    lfs f4, 0x620(r27)
    lfs f0, lbl_80883268
    fadds f4, f5, f4
    stfs f0, 0x8(r1)
    lwz r29, lbl_8087EE98
    stfs f0, 0xc(r1)
    fadds f3, f3, f4
    stfs f0, 0x10(r1)
    stfs f3, 0x48(r1)
    bl fn_80179D44
    lfs f1, 0x620(r27)
    oris r7, r3, 0x8000
    mr r3, r29
    mr r5, r31
    addi r4, r1, 0x50
    addi r6, r1, 0x8
    li r8, 0x0
    li r9, 0x0
    bl fn_8004D388
    addi r4, r1, 0x60
    lfs f2, 0x68(r1)
    addi r29, r1, 0x20
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    cmpwi r3, 0x0
    lfs f4, lbl_808832D4
    lfs f3, 0x620(r27)
    lfs f0, 0x24(r1)
    fadds f3, f4, f3
    stfs f2, 0x28(r1)
    fsubs f0, f0, f3
    stfs f0, 0x24(r1)
    bne lbl_fn_8024F9B8_00000ECC
    frsp f2, f2
    addi r4, r27, 0x15f4
    psq_l f1, 0x0(r29), 0, 0
    li r3, 0x1
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x15fc(r27)
    b lbl_fn_8024F9B8_00000F5C
lbl_fn_8024F9B8_00000ECC:
    lfs f2, 0x530(r27)
    mr r3, r27
    psq_l f1, 0x528(r27), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_l f1, 0x0(r29), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    lfs f3, 0x48(r1)
    lfs f4, lbl_8088328C
    lfs f0, 0x3c(r1)
    fadds f3, f3, f4
    stfs f2, 0x4c(r1)
    fadds f0, f0, f4
    lfs f2, 0x28(r1)
    stfs f2, 0x40(r1)
    lwz r28, lbl_8087EE98
    stfs f3, 0x48(r1)
    stfs f0, 0x3c(r1)
    bl fn_80179D44
    oris r7, r3, 0x8000
    mr r3, r28
    mr r5, r31
    mr r6, r30
    addi r4, r1, 0x50
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ED34
    cmpwi r3, 0x0
    bne lbl_fn_8024F9B8_00000F58
    lfs f2, 0x28(r1)
    addi r4, r27, 0x15f4
    psq_l f1, 0x0(r29), 0, 0
    li r3, 0x1
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x15fc(r27)
    b lbl_fn_8024F9B8_00000F5C
lbl_fn_8024F9B8_00000F58:
    li r3, 0x0
lbl_fn_8024F9B8_00000F5C:
    addi r11, r1, 0xc0
    bl _restgpr_27
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

asm void fn_8024FCDC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r0, 0x16e4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8024FCDC_00000FA8
    li r4, 0x1
    bl fn_8024FE18
    b lbl_fn_8024FCDC_00001094
lbl_fn_8024FCDC_00000FA8:
    li r0, 0x2
    stw r0, 0x58c(r3)
    li r4, 0x3
    bl fn_8016E970
    lfs f0, lbl_8088326C
    li r3, 0x0
    li r0, 0x1
    stw r3, 0x14b8(r29)
    lfs f1, lbl_80883268
    addi r3, r29, 0xb0
    stw r0, 0x3fc(r29)
    li r4, 0x0
    lfs f2, lbl_808832C4
    li r5, 0x2e
    stfs f0, 0x2fc(r29)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r29)
    bl fn_80097C08
    lwz r12, 0x0(r29)
    mr r3, r29
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
    lwz r3, lbl_8087F3C0
    addi r4, r29, 0x1504
    li r5, 0x0
    li r6, 0x0
    bl fn_80239DAC
    mr r3, r29
    bl fn_800EB7A0
    mr r31, r29
    li r30, 0x0
    b lbl_fn_8024FCDC_0000107C
lbl_fn_8024FCDC_0000105C:
    lwz r3, 0x16dc(r31)
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x2
    beq lbl_fn_8024FCDC_00001074
    li r4, 0x0
    bl fn_8024FE18
lbl_fn_8024FCDC_00001074:
    addi r31, r31, 0x4
    addi r30, r30, 0x1
lbl_fn_8024FCDC_0000107C:
    lwz r0, 0x16d8(r29)
    cmplw r30, r0
    blt lbl_fn_8024FCDC_0000105C
    li r0, 0x0
    stw r0, 0x14dc(r29)
    stw r0, 0x14e4(r29)
lbl_fn_8024FCDC_00001094:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8024FE18(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    stw r30, 0x58(r1)
    mr r30, r4
    stw r29, 0x54(r1)
    mr r29, r3
    addi r3, r3, 0x7d4
    bl fn_8012DD70
    li r0, 0x2
    stw r0, 0x58c(r29)
    mr r3, r29
    li r4, 0x3
    bl fn_8016E970
    lfs f0, lbl_8088326C
    li r0, 0x0
    li r31, 0x1
    stw r0, 0x14b8(r29)
    lfs f1, lbl_80883268
    addi r3, r29, 0xb0
    stw r31, 0x3fc(r29)
    li r4, 0x0
    lfs f2, lbl_808832C4
    li r5, 0x33
    stfs f0, 0x2fc(r29)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r29)
    bl fn_80097C08
    lwz r12, 0x0(r29)
    mr r3, r29
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
    lwz r3, lbl_8087F3C0
    addi r4, r29, 0x1504
    li r5, 0x0
    li r6, 0x0
    bl fn_80239DAC
    cmpwi r30, 0x0
    beq lbl_fn_8024FE18_000011EC
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r29)
    addi r7, r1, 0x38
    lfs f2, 0x530(r29)
    li r0, -0x1
    psq_l f1, 0x528(r29), 0, 0
    mr r4, r29
    psq_st f1, 0x0(r7), 0, 0
    addi r8, r29, 0x534
    lfs f0, lbl_8088328C
    li r9, 0x0
    lfs f3, 0x3c(r1)
    li r10, 0x1e
    stfs f2, 0x40(r1)
    fadds f0, f3, f0
    lfs f1, lbl_80883268
    lfs f2, lbl_8088326C
    stfs f0, 0x3c(r1)
    stw r0, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F048
    lwz r5, 0x14d8(r29)
    lwz r6, 0x590(r29)
    bl fn_800FAB80
    b lbl_fn_8024FE18_00001258
lbl_fn_8024FE18_000011EC:
    li r3, 0x0
    li r4, 0x0
    bl fn_80232B7C
    lfs f0, lbl_80883268
    li r0, -0x1
    lfs f1, lbl_8088326C
    addi r4, r29, 0x14ec
    stfs f0, 0x1c(r1)
    addi r5, r29, 0xb0
    addi r7, r1, 0x10
    addi r8, r1, 0x1c
    stfs f0, 0x20(r1)
    addi r9, r1, 0x28
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x24(r1)
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f1, 0x28(r1)
    stfs f1, 0x2c(r1)
    stfs f1, 0x30(r1)
    stfs f1, 0x34(r1)
    stw r0, 0x8(r1)
    stw r31, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
lbl_fn_8024FE18_00001258:
    li r0, 0x0
    stw r0, 0x14dc(r29)
    stw r0, 0x14e4(r29)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_8024FFE8(void)
{
    nofralloc
    stwu r1, -0x180(r1)
    mflr r0
    stw r0, 0x184(r1)
    addi r11, r1, 0x160
    stfd f31, 0x170(r1)
    psq_st f31, 0x178(r1), 0, 0
    stfd f30, 0x160(r1)
    psq_st f30, 0x168(r1), 0, 0
    bl _savegpr_25
    li r0, 0x9
    stw r0, 0x58c(r3)
    mr r29, r3
    li r4, 0x3
    bl fn_8016E970
    lfs f0, lbl_8088326C
    li r0, 0x0
    li r26, 0x1
    stw r0, 0x14b8(r29)
    lfs f1, lbl_80883268
    addi r3, r29, 0xb0
    stw r26, 0x3fc(r29)
    li r4, 0x0
    lfs f2, lbl_808832C4
    li r5, 0x142
    stfs f0, 0x2fc(r29)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r29)
    bl fn_80097C08
    addi r3, r29, 0x1504
    li r4, 0x0
    bl fn_80232B7C
    lfs f0, lbl_80883268
    li r0, -0x1
    lfs f1, lbl_8088326C
    addi r4, r29, 0x14f8
    stfs f0, 0x28(r1)
    addi r5, r29, 0xb0
    lwz r3, lbl_8087F3C0
    addi r7, r1, 0x1c
    stfs f0, 0x2c(r1)
    addi r8, r1, 0x28
    addi r9, r1, 0x38
    li r6, 0x0
    stfs f0, 0x30(r1)
    li r10, -0x1
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    stfs f1, 0x38(r1)
    stfs f1, 0x3c(r1)
    stfs f1, 0x40(r1)
    stfs f1, 0x44(r1)
    stw r0, 0x8(r1)
    stw r26, 0xc(r1)
    bl fn_8023A8B4
    lwz r0, 0x14c0(r29)
    addi r4, r29, 0x1600
    lwz r6, 0x16d8(r29)
    addi r5, r29, 0x15f4
    slwi r0, r0, 2
    psq_l f1, 0x528(r29), 0, 0
    add r3, r29, r0
    cmpwi r6, 0x0
    lwz r0, 0x1628(r3)
    lfs f2, 0x530(r29)
    lfs f0, lbl_80883268
    stw r0, 0x1624(r29)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x1608(r29)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x15fc(r29)
    stfs f0, 0x160c(r29)
    beq lbl_fn_8024FFE8_0000191C
    bl fn_80680CF8
    lis r26, 0x5555
    lwz r30, 0x1654(r29)
    addi r0, r26, 0x5556
    lfs f3, lbl_80883268
    mulhw r5, r0, r3
    lfs f0, lbl_8088326C
    stfs f3, 0x84(r1)
    li r4, 0x79
    stfs f3, 0x88(r1)
    srwi r0, r5, 31
    add r0, r5, r0
    stfs f0, 0x8c(r1)
    mulli r0, r0, 0x3
    lfs f1, 0x538(r29)
    subf r31, r0, r3
    addi r3, r1, 0x90
    bl fn_805F8E70
    addi r4, r1, 0x84
    addi r3, r1, 0x90
    mr r5, r4
    bl fn_805F93C0
    lfs f0, lbl_80883268
    addi r3, r1, 0xc0
    lfs f3, lbl_808832A4
    li r4, 0x79
    stfs f3, 0x78(r1)
    stfs f0, 0x7c(r1)
    stfs f0, 0x80(r1)
    lfs f1, 0x538(r29)
    bl fn_805F8E70
    addi r4, r1, 0x78
    addi r3, r1, 0xc0
    mr r5, r4
    bl fn_805F93C0
    addi r0, r26, 0x5556
    addi r6, r31, 0x1
    mulhw r5, r0, r6
    addi r4, r31, 0x2
    addi r9, r29, 0x1600
    lfs f6, 0x1604(r29)
    lfs f0, 0x7c(r1)
    addi r8, r1, 0x114
    mulhw r3, r0, r4
    srwi r0, r5, 31
    fadds f8, f6, f0
    lfs f5, 0x1600(r29)
    fsubs f12, f6, f0
    lfs f4, 0x78(r1)
    add r0, r5, r0
    fadds f9, f5, f4
    fsubs f13, f5, f4
    mulli r5, r0, 0x3
    lfs f0, 0x84(r1)
    srwi r0, r3, 31
    lfs f3, 0x88(r1)
    mulli r7, r31, 0xc
    fadds f10, f8, f3
    add r0, r3, r0
    subf r5, r5, r6
    fadds f11, f9, f0
    mulli r0, r0, 0x3
    fadds f3, f12, f3
    fadds f30, f13, f0
    lfs f6, 0x1608(r29)
    subf r0, r0, r4
    lfs f5, 0x80(r1)
    mulli r3, r5, 0xc
    fadds f7, f6, f5
    fsubs f6, f6, f5
    lfs f4, 0x8c(r1)
    addi r4, r1, 0x114
    add r8, r8, r7
    psq_l f1, 0x0(r9), 0, 0
    fadds f5, f7, f4
    add r4, r4, r3
    fadds f0, f6, f4
    psq_st f1, 0x0(r8), 0, 0
    addi r5, r1, 0x6c
    lfs f2, 0x1608(r29)
    stfs f2, 0x8(r8)
    fmr f2, f5
    mulli r0, r0, 0xc
    addi r3, r1, 0x114
    stfs f11, 0x6c(r1)
    addi r6, r1, 0x114
    lfs f31, lbl_80883330
    stfs f10, 0x70(r1)
    add r3, r3, r0
    addi r27, r29, 0x1594
    psq_l f1, 0x0(r5), 0, 0
    addi r5, r1, 0x54
    psq_st f1, 0x0(r4), 0, 0
    li r25, -0x1
    li r26, 0x0
    stfs f2, 0x8(r4)
    fmr f2, f0
    addi r4, r29, 0x15f4
    stfs f30, 0x54(r1)
    stfs f3, 0x58(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x8(r3)
    psq_l f1, 0x0(r6), 0, 0
    lfs f2, 0x11c(r1)
    stfs f9, 0x60(r1)
    stfs f8, 0x64(r1)
    stfs f7, 0x68(r1)
    stfs f5, 0x74(r1)
    stfs f13, 0x48(r1)
    stfs f12, 0x4c(r1)
    stfs f6, 0x50(r1)
    stfs f0, 0x5c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x15fc(r29)
    b lbl_fn_8024FFE8_000015CC
lbl_fn_8024FFE8_0000157C:
    lfs f3, 0x1608(r29)
    addi r3, r1, 0x10
    lfs f0, 0x8(r27)
    lfs f5, 0x1604(r29)
    fsubs f6, f3, f0
    lfs f4, 0x4(r27)
    lfs f3, 0x1600(r29)
    lfs f0, 0x0(r27)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x14(r1)
    stfs f0, 0x10(r1)
    stfs f6, 0x18(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f31
    bge lbl_fn_8024FFE8_000015C4
    mr r25, r26
    fmr f31, f1
lbl_fn_8024FFE8_000015C4:
    addi r27, r27, 0xc
    addi r26, r26, 0x1
lbl_fn_8024FFE8_000015CC:
    lwz r0, 0x1590(r29)
    cmplw r26, r0
    blt lbl_fn_8024FFE8_0000157C
    cmpwi r25, 0x3
    bge lbl_fn_8024FFE8_000016D0
    lis r3, 0x5555
    addi r27, r25, 0x1
    addi r26, r3, 0x5556
    addi r11, r31, 0x1
    mulhw r8, r26, r27
    addi r3, r1, 0xf0
    addi r9, r25, 0x2
    addi r7, r31, 0x2
    addi r28, r25, 0x3
    mr r4, r3
    srwi r0, r8, 31
    mr r5, r3
    add r12, r8, r0
    mulhw r6, r26, r11
    srwi r0, r6, 31
    add r10, r6, r0
    mulhw r8, r26, r9
    mulli r12, r12, 0x3
    srwi r0, r8, 31
    subf r12, r12, r27
    add r8, r8, r0
    mulhw r6, r26, r7
    addi r12, r12, 0x3
    srwi r0, r6, 31
    mulli r26, r31, 0xc
    add r0, r6, r0
    mulli r27, r28, 0xc
    add r3, r3, r26
    add r6, r29, r27
    addi r25, r6, 0x1594
    psq_l f1, 0x0(r25), 0, 0
    mulli r0, r0, 0x3
    psq_st f1, 0x0(r3), 0, 0
    lfs f2, 0x8(r25)
    subf r0, r0, r7
    stfs f2, 0x8(r3)
    mulli r6, r8, 0x3
    mulli r10, r10, 0x3
    subf r3, r6, r9
    subf r8, r10, r11
    addi r3, r3, 0x3
    mulli r6, r8, 0xc
    mulli r10, r12, 0xc
    add r4, r4, r6
    add r8, r29, r10
    addi r8, r8, 0x1594
    mulli r3, r3, 0xc
    psq_l f1, 0x0(r8), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r8)
    mulli r0, r0, 0xc
    stfs f2, 0x8(r4)
    add r3, r29, r3
    addi r3, r3, 0x1594
    add r5, r5, r0
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    lfs f2, 0x8(r3)
    stfs f2, 0x8(r5)
    b lbl_fn_8024FFE8_000017B4
lbl_fn_8024FFE8_000016D0:
    subi r25, r25, 0x3
    lis r3, 0x5555
    addi r26, r3, 0x5556
    addi r11, r31, 0x1
    addi r27, r25, 0x1
    addi r3, r1, 0xf0
    mulhw r8, r26, r27
    addi r9, r25, 0x2
    addi r7, r31, 0x2
    mr r4, r3
    mr r5, r3
    srwi r0, r8, 31
    add r12, r8, r0
    mulhw r6, r26, r11
    srwi r0, r6, 31
    add r10, r6, r0
    mulhw r8, r26, r9
    mulhw r6, r26, r7
    srwi r0, r8, 31
    add r8, r8, r0
    srwi r0, r6, 31
    add r0, r6, r0
    mulli r26, r25, 0xc
    add r6, r29, r26
    addi r6, r6, 0x1594
    mulli r26, r31, 0xc
    psq_l f1, 0x0(r6), 0, 0
    lfs f2, 0x8(r6)
    mulli r12, r12, 0x3
    add r3, r3, r26
    psq_st f1, 0x0(r3), 0, 0
    mulli r6, r10, 0x3
    subf r12, r12, r27
    stfs f2, 0x8(r3)
    mulli r3, r8, 0x3
    subf r6, r6, r11
    mulli r10, r12, 0xc
    subf r3, r3, r9
    mulli r6, r6, 0xc
    add r8, r29, r10
    addi r8, r8, 0x1594
    mulli r0, r0, 0x3
    psq_l f1, 0x0(r8), 0, 0
    add r4, r4, r6
    lfs f2, 0x8(r8)
    psq_st f1, 0x0(r4), 0, 0
    mulli r3, r3, 0xc
    subf r0, r0, r7
    stfs f2, 0x8(r4)
    mulli r0, r0, 0xc
    add r3, r29, r3
    addi r3, r3, 0x1594
    add r5, r5, r0
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    lfs f2, 0x8(r3)
    stfs f2, 0x8(r5)
lbl_fn_8024FFE8_000017B4:
    addi r4, r1, 0xf0
    lfs f2, 0xf8(r1)
    addi r3, r29, 0x1610
    psq_l f1, 0x0(r4), 0, 0
    li r0, 0xb
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x1618(r29)
    stw r0, 0x1654(r29)
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    li r3, -0x1
    subf. r0, r4, r0
    beq lbl_fn_8024FFE8_000017F4
    mr r3, r30
lbl_fn_8024FFE8_000017F4:
    stw r3, 0x1658(r29)
    li r31, 0x0
    li r28, 0x0
    li r27, 0xb
    b lbl_fn_8024FFE8_000018EC
lbl_fn_8024FFE8_00001808:
    add r25, r29, r28
    lwz r3, 0x16dc(r25)
    bl fn_80176ACC
    lwz r3, 0x16dc(r25)
    addi r3, r3, 0x7d4
    bl fn_8012D8B8
    lwz r3, 0x16dc(r25)
    mr r26, r25
    lfs f0, 0x7d8(r29)
    stfs f0, 0x7d8(r3)
    lwz r3, 0x16dc(r25)
    lfs f2, 0x530(r29)
    psq_l f1, 0x528(r29), 0, 0
    psq_st f1, 0x528(r3), 0, 0
    stfs f2, 0x530(r3)
    lwz r3, 0x16dc(r25)
    lfs f2, 0x53c(r29)
    psq_l f1, 0x534(r29), 0, 0
    psq_st f1, 0x534(r3), 0, 0
    stfs f2, 0x53c(r3)
    lwz r3, 0x16dc(r25)
    lwz r0, 0x14c0(r29)
    stw r0, 0x14c0(r3)
    lwz r3, 0x16dc(r25)
    bl fn_8024FFE8
    addi r0, r31, 0x1
    lwz r3, 0x16dc(r26)
    mulli r0, r0, 0xc
    addi r4, r1, 0x114
    addi r5, r1, 0xf0
    addi r3, r3, 0x15f4
    add r4, r4, r0
    psq_l f1, 0x0(r4), 0, 0
    add r5, r5, r0
    psq_st f1, 0x0(r3), 0, 0
    lfs f2, 0x8(r4)
    stfs f2, 0x8(r3)
    psq_l f1, 0x0(r5), 0, 0
    lwz r3, 0x16dc(r26)
    lfs f2, 0x8(r5)
    addi r3, r3, 0x1610
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x8(r3)
    lwz r3, 0x16dc(r26)
    stw r27, 0x1654(r3)
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    li r5, -0x1
    subf. r0, r4, r0
    beq lbl_fn_8024FFE8_000018DC
    mr r5, r30
lbl_fn_8024FFE8_000018DC:
    lwz r3, 0x16dc(r26)
    addi r31, r31, 0x1
    addi r28, r28, 0x4
    stw r5, 0x1658(r3)
lbl_fn_8024FFE8_000018EC:
    lwz r0, 0x16d8(r29)
    cmplw r31, r0
    blt lbl_fn_8024FFE8_00001808
    lwz r3, lbl_8087F430
    li r4, 0xfa
    bl fn_80370A78
    cmpwi r3, 0x0
    bne lbl_fn_8024FFE8_0000191C
    lwz r3, lbl_8087F430
    li r4, 0xfa
    li r5, 0x1
    bl fn_80370AE4
lbl_fn_8024FFE8_0000191C:
    addi r11, r1, 0x160
    psq_l f31, 0x178(r1), 0, 0
    lfd f31, 0x170(r1)
    psq_l f30, 0x168(r1), 0, 0
    lfd f30, 0x160(r1)
    bl _restgpr_25
    lwz r0, 0x184(r1)
    mtlr r0
    addi r1, r1, 0x180
    blr
}

asm void fn_802506AC(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    stw r28, 0x20(r1)
    lwz r0, 0x1590(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802506AC_00001998
    li r30, 0x0
    stw r30, 0x58c(r3)
    li r4, 0x3
    bl fn_8016E970
    stw r30, 0x14b8(r31)
    stw r30, 0x14bc(r31)
    stw r30, 0x14dc(r31)
    b lbl_fn_802506AC_00001AF4
lbl_fn_802506AC_00001998:
    li r4, 0x3
    bl fn_8016E970
    lwz r0, 0x14b0(r31)
    li r3, 0x0
    li r4, 0xa
    stw r4, 0x58c(r31)
    cmpwi r0, 0x0
    lfs f31, lbl_80883268
    stw r3, 0x14b8(r31)
    li r29, 0x0
    stw r3, 0x14bc(r31)
    beq lbl_fn_802506AC_00001A38
    addi r30, r31, 0x1594
    li r28, 0x0
    b lbl_fn_802506AC_00001A28
lbl_fn_802506AC_000019D4:
    lwz r4, 0x14b0(r31)
    addi r3, r1, 0x8
    lfs f3, 0x8(r30)
    lfs f0, 0x530(r4)
    lfs f5, 0x4(r30)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r4)
    lfs f3, 0x0(r30)
    lfs f0, 0x528(r4)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f6, 0x10(r1)
    bl fn_805F9940
    fcmpo cr0, f1, f31
    ble lbl_fn_802506AC_00001A20
    mr r29, r28
    fmr f31, f1
lbl_fn_802506AC_00001A20:
    addi r30, r30, 0xc
    addi r28, r28, 0x1
lbl_fn_802506AC_00001A28:
    lwz r0, 0x1590(r31)
    cmplw r28, r0
    blt lbl_fn_802506AC_000019D4
    b lbl_fn_802506AC_00001A3C
lbl_fn_802506AC_00001A38:
    li r29, 0x0
lbl_fn_802506AC_00001A3C:
    mr r30, r31
    li r28, 0x0
    b lbl_fn_802506AC_00001A68
lbl_fn_802506AC_00001A48:
    lwz r3, 0x16dc(r30)
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x2
    beq lbl_fn_802506AC_00001A60
    li r4, 0x0
    bl fn_8024FE18
lbl_fn_802506AC_00001A60:
    addi r30, r30, 0x4
    addi r28, r28, 0x1
lbl_fn_802506AC_00001A68:
    lwz r0, 0x16d8(r31)
    cmplw r28, r0
    blt lbl_fn_802506AC_00001A48
    mulli r4, r29, 0xc
    addi r6, r31, 0x15f4
    li r0, 0x6
    mr r3, r31
    add r5, r31, r4
    addi r5, r5, 0x1594
    li r4, 0x3
    psq_l f1, 0x0(r5), 0, 0
    lfs f2, 0x8(r5)
    stfs f2, 0x15fc(r31)
    psq_st f1, 0x0(r6), 0, 0
    stw r0, 0x58c(r31)
    bl fn_8016E970
    li r0, 0x0
    stw r0, 0x14b8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_8088326C
    li r0, 0x1
    stw r3, 0x590(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80883268
    li r4, 0x0
    stw r0, 0x3fc(r31)
    li r5, 0x14a
    lfs f2, lbl_808832C4
    li r6, 0x0
    stfs f0, 0x2fc(r31)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
lbl_fn_802506AC_00001AF4:
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
