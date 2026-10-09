#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_14(void);
extern void _savegpr_14(void);
extern void dtor_80084684(void);
extern void fn_800844D8(void);
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_80097CCC(void);
extern void fn_800D246C(void);
extern void fn_800DD3FC(void);
extern void fn_800EB7A0(void);
extern void fn_800F8548(void);
extern void fn_801077A8(void);
extern void fn_80107850(void);
extern void fn_801092C8(void);
extern void fn_80109828(void);
extern void fn_8012D8B8(void);
extern void fn_8013310C(void);
extern void fn_80145334(void);
extern void fn_8015495C(void);
extern void fn_80166D3C(void);
extern void fn_8016CAD0(void);
extern void fn_8016DA4C(void);
extern void fn_8016E484(void);
extern void fn_8016E970(void);
extern void fn_80176ACC(void);
extern void fn_80178A6C(void);
extern void fn_80219558(void);
extern void fn_80232B7C(void);
extern void fn_8023A8B4(void);
extern void fn_8036554C(void);
extern void fn_80370320(void);
extern void fn_80375184(void);
extern void fn_80389838(void);
extern void fn_805A4A20(void);
extern void fn_805F8E70(void);
extern void fn_805F9750(void);
extern void fn_80680770(void);
extern void fn_80680CF8(void);
extern void fn_80686EA4(void);
extern void fn_8068AEA4(void);

/* External data declarations */
extern u8 lbl_807470A4[];
extern u8 lbl_80775A88[];
extern u8 lbl_80786DA0[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087EFA8;
extern u32 lbl_8087F048;
extern u32 lbl_8087F1E4;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F428;
extern u32 lbl_8087F430;
extern u32 lbl_8087F8A0;
extern u32 lbl_808813D0;
extern u32 lbl_80884558;
extern u32 lbl_8088455C;
extern u32 lbl_80884564;
extern u32 lbl_80884588;
extern u32 lbl_8088458C;
extern u32 lbl_808845A8;
extern u32 lbl_808845AC;
extern u32 lbl_808845B0;
extern u32 lbl_808845E4;

/* Function declarations */
void fn_802D5674(void);
void fn_802D57B8(void);
void fn_802D5D18(void);
void fn_802D6004(void);
void fn_802D67F8(void);

asm void fn_802D5674(void)
{
    nofralloc
    stwu r1, -0x240(r1)
    mflr r0
    stw r0, 0x244(r1)
    stw r31, 0x23c(r1)
    mr r31, r4
    li r4, 0x14
    stw r30, 0x238(r1)
    mr r30, r3
    bl fn_80232B7C
    lfs f0, lbl_80884564
    li r3, -0x1
    lfs f1, lbl_8088458C
    li r0, 0x1
    stfs f0, 0x1c(r1)
    addi r4, r30, 0x15cc
    addi r5, r30, 0xb0
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
    li r0, 0x0
    stw r0, 0x14e8(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    li r0, 0x6
    mr r3, r30
    li r4, 0x3
    stw r0, 0x58c(r30)
    bl fn_8016E970
    lwz r0, 0x1630(r30)
    cmpw r31, r0
    blt lbl_fn_802D5674_000000C8
    lwz r0, 0x1628(r30)
    stw r0, 0x14d8(r30)
    b lbl_fn_802D5674_000000CC
lbl_fn_802D5674_000000C8:
    stw r31, 0x14d8(r30)
lbl_fn_802D5674_000000CC:
    addi r3, r1, 0x38
    li r4, 0x0
    li r5, 0x200
    bl memset
    lwz r4, lbl_8087F1E4
    addi r3, r1, 0x38
    lwz r4, 0x47c(r4)
    cmpwi r4, 0x0
    beq lbl_fn_802D5674_000000F4
    b lbl_fn_802D5674_000000F8
lbl_fn_802D5674_000000F4:
    la r4, lbl_808813D0
lbl_fn_802D5674_000000F8:
    lwz r5, 0x60(r30)
    lwz r5, 0x4(r5)
    crclr 6
    bl fn_800DD3FC
    lwz r3, lbl_8087F048
    addi r4, r1, 0x38
    bl fn_80109828
    li r0, 0x0
    stw r0, 0x1504(r30)
    stw r0, 0x1508(r30)
    stw r0, 0x15e8(r30)
    stw r0, 0x15ec(r30)
    stw r0, 0x14f4(r30)
    lwz r31, 0x23c(r1)
    lwz r30, 0x238(r1)
    lwz r0, 0x244(r1)
    mtlr r0
    addi r1, r1, 0x240
    blr
}

asm void fn_802D57B8(void)
{
    nofralloc
    stwu r1, -0x1a0(r1)
    mflr r0
    stw r0, 0x1a4(r1)
    li r0, 0x0
    stfd f31, 0x190(r1)
    psq_st f31, 0x198(r1), 0, 0
    stfd f30, 0x180(r1)
    psq_st f30, 0x188(r1), 0, 0
    stw r31, 0x17c(r1)
    mr r31, r3
    stw r30, 0x178(r1)
    stw r0, 0x14e8(r3)
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
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lfs f1, lbl_80884564
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097CCC
    lfs f0, lbl_8088458C
    li r30, 0x1
    stw r30, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80884564
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x2e
    lfs f2, lbl_8088455C
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    mr r3, r31
    li r4, 0x3e8
    bl fn_80232B7C
    lwz r0, 0x14d4(r31)
    cmpwi r0, 0x0
    beq lbl_fn_802D57B8_00000294
    lfs f0, lbl_80884564
    li r0, -0x1
    lfs f1, lbl_8088458C
    addi r4, r31, 0x1614
    stfs f0, 0x74(r1)
    addi r5, r31, 0xb0
    lwz r3, lbl_8087F3C0
    addi r7, r1, 0x68
    stfs f0, 0x78(r1)
    addi r8, r1, 0x74
    addi r9, r1, 0x80
    li r6, 0x0
    stfs f0, 0x7c(r1)
    li r10, -0x1
    stfs f0, 0x68(r1)
    stfs f0, 0x6c(r1)
    stfs f0, 0x70(r1)
    stfs f1, 0x80(r1)
    stfs f1, 0x84(r1)
    stfs f1, 0x88(r1)
    stfs f1, 0x8c(r1)
    stw r0, 0x8(r1)
    stw r30, 0xc(r1)
    bl fn_8023A8B4
    b lbl_fn_802D57B8_000002F8
lbl_fn_802D57B8_00000294:
    lfs f1, 0x540(r31)
    lis r8, lbl_807C7030@ha
    lfs f4, lbl_80884588
    li r0, -0x1
    lfs f0, lbl_8088458C
    addi r4, r31, 0x1608
    lfs f3, lbl_80884564
    fmuls f4, f4, f1
    stfs f3, 0xb4(r1)
    addi r5, r31, 0xb0
    lwz r3, lbl_8087F3C0
    addi r7, r1, 0xb4
    stfs f4, 0xb8(r1)
    addi r8, r8, lbl_807C7030@l
    addi r9, r1, 0x58
    stfs f3, 0xbc(r1)
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x58(r1)
    stfs f0, 0x5c(r1)
    stfs f0, 0x60(r1)
    stfs f0, 0x64(r1)
    stw r0, 0x8(r1)
    stw r30, 0xc(r1)
    bl fn_8023A8B4
lbl_fn_802D57B8_000002F8:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_802D57B8_00000334
    bl fn_80375184
    cmpwi r3, 0x0
    beq lbl_fn_802D57B8_00000334
    lwz r0, 0x48(r31)
    cmpwi r0, 0x2
    bne lbl_fn_802D57B8_00000334
    lwz r3, lbl_8087F048
    mr r5, r31
    li r4, 0x6
    li r6, 0x0
    li r7, 0x0
    bl fn_801092C8
lbl_fn_802D57B8_00000334:
    mr r3, r31
    bl fn_800EB7A0
    addi r4, r31, 0x15bc
    li r0, 0x0
    lfs f2, 0x15c4(r31)
    lis r3, lbl_807470A4@ha
    addi r6, r1, 0xc0
    psq_l f1, 0x0(r4), 0, 0
    addi r3, r3, lbl_807470A4@l
    stw r0, 0x15e8(r31)
    addi r4, r3, 0x2b2
    li r5, 0x0
    stw r0, 0x15ec(r31)
    addi r3, r31, 0xb0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0xc8(r1)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802D57B8_00000388
    li r3, 0x0
    b lbl_fn_802D57B8_00000394
lbl_fn_802D57B8_00000388:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r3, r3, r0
lbl_fn_802D57B8_00000394:
    lfs f0, 0x1c(r3)
    li r0, 0x0
    lfs f4, 0xc(r3)
    addi r5, r1, 0x9c
    lfs f3, 0x2c(r3)
    addi r3, r1, 0xcc
    stfs f0, 0xa0(r1)
    addi r6, r1, 0xc0
    fmr f2, f3
    lwz r7, lbl_8087F430
    stfs f4, 0x9c(r1)
    li r4, 0x13
    lfs f0, lbl_808845E4
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x568(r7), 0, 0
    psq_l f1, 0xc(r6), 0, 0
    stfs f2, 0xd4(r1)
    lfs f2, 0xc8(r1)
    stfs f2, 0x570(r7)
    lfs f2, 0xd4(r1)
    psq_st f1, 0x574(r7), 0, 0
    stfs f2, 0x57c(r7)
    stfs f0, 0x580(r7)
    stw r0, 0x584(r7)
    lwz r3, lbl_8087F430
    stfs f3, 0xa4(r1)
    addi r3, r3, 0x6c
    stfs f0, 0xd8(r1)
    stw r0, 0xdc(r1)
    bl fn_80389838
    lwz r10, lbl_8087EFA8
    li r0, 0x1
    lfs f0, lbl_80884558
    li r4, 0xd0
    lwz r9, 0x244(r10)
    li r5, 0x1
    lwz r3, 0x248(r10)
    li r6, 0x0
    lfs f6, 0x24c(r10)
    lfs f5, 0x250(r10)
    lwz r8, 0x254(r10)
    lwz r7, 0x258(r10)
    lfs f4, 0x25c(r10)
    lfs f3, 0x260(r10)
    stw r9, 0x154(r1)
    stw r0, 0x240(r10)
    stw r9, 0x244(r10)
    stw r3, 0x248(r10)
    stfs f6, 0x24c(r10)
    stfs f5, 0x250(r10)
    stw r8, 0x254(r10)
    stw r7, 0x258(r10)
    stfs f4, 0x25c(r10)
    stfs f3, 0x260(r10)
    lwz r9, lbl_8087EFA8
    stw r3, 0x158(r1)
    stfs f0, 0x3a4(r9)
    stfs f6, 0x15c(r1)
    lwz r3, lbl_8087F430
    stfs f5, 0x160(r1)
    stw r8, 0x164(r1)
    stw r7, 0x168(r1)
    stfs f4, 0x16c(r1)
    stfs f3, 0x170(r1)
    stw r0, 0x150(r1)
    bl fn_80370320
    lfs f4, 0xd4(r1)
    addi r3, r1, 0xa8
    lfs f0, 0x530(r31)
    addi r30, r1, 0x90
    lfs f3, lbl_80884564
    fsubs f2, f4, f0
    lfs f5, 0xcc(r1)
    lfs f4, 0x528(r31)
    stfs f3, 0xac(r1)
    fsubs f4, f5, f4
    lfs f0, lbl_808845A8
    frsp f5, f2
    stfs f2, 0xb0(r1)
    stfs f4, 0xa8(r1)
    fabs f4, f5
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    frsp f4, f4
    stfs f2, 0x98(r1)
    fcmpo cr0, f4, f0
    bge lbl_fn_802D57B8_00000518
    lfs f0, 0x90(r1)
    fcmpo cr0, f0, f3
    ble lbl_fn_802D57B8_0000050C
    lfs f0, lbl_808845AC
    b lbl_fn_802D57B8_00000510
lbl_fn_802D57B8_0000050C:
    lfs f0, lbl_808845B0
lbl_fn_802D57B8_00000510:
    stfs f0, 0x50(r1)
    b lbl_fn_802D57B8_0000052C
lbl_fn_802D57B8_00000518:
    fmr f2, f5
    lfs f1, 0x90(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x50(r1)
lbl_fn_802D57B8_0000052C:
    lfs f0, 0x50(r1)
    addi r3, r1, 0xe0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80884564
    addi r4, r1, 0x40
    lfs f30, 0xe8(r1)
    mr r5, r4
    lfs f31, 0xe4(r1)
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
    lfs f0, lbl_8088458C
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x98(r1)
    stfs f3, 0x140(r1)
    stfs f3, 0x144(r1)
    stfs f3, 0x148(r1)
    stfs f0, 0x14c(r1)
    stfs f13, 0x10(r1)
    stfs f31, 0x14(r1)
    stfs f30, 0x18(r1)
    stfs f13, 0x110(r1)
    stfs f31, 0x114(r1)
    stfs f30, 0x118(r1)
    stfs f10, 0x1c(r1)
    stfs f11, 0x20(r1)
    stfs f12, 0x24(r1)
    stfs f10, 0x120(r1)
    stfs f11, 0x124(r1)
    stfs f12, 0x128(r1)
    stfs f7, 0x28(r1)
    stfs f8, 0x2c(r1)
    stfs f9, 0x30(r1)
    stfs f7, 0x130(r1)
    stfs f8, 0x134(r1)
    stfs f9, 0x138(r1)
    stfs f4, 0x34(r1)
    stfs f5, 0x38(r1)
    stfs f6, 0x3c(r1)
    stfs f4, 0x11c(r1)
    stfs f5, 0x12c(r1)
    stfs f6, 0x13c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x48(r1)
    bl fn_805F9750
    lfs f2, 0x48(r1)
    lfs f0, lbl_808845A8
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802D57B8_00000648
    lfs f3, 0x44(r1)
    lfs f0, lbl_80884564
    fcmpo cr0, f3, f0
    ble lbl_fn_802D57B8_00000638
    lfs f0, lbl_808845AC
    b lbl_fn_802D57B8_0000063C
lbl_fn_802D57B8_00000638:
    lfs f0, lbl_808845B0
lbl_fn_802D57B8_0000063C:
    fneg f0, f0
    stfs f0, 0x4c(r1)
    b lbl_fn_802D57B8_0000065C
lbl_fn_802D57B8_00000648:
    lfs f1, 0x44(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x4c(r1)
lbl_fn_802D57B8_0000065C:
    addi r3, r1, 0x4c
    lfs f2, lbl_80884564
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    lfs f0, 0x94(r1)
    stfs f0, 0x538(r31)
    psq_l f31, 0x198(r1), 0, 0
    lfd f31, 0x190(r1)
    psq_l f30, 0x188(r1), 0, 0
    lfd f30, 0x180(r1)
    lwz r31, 0x17c(r1)
    lwz r30, 0x178(r1)
    lwz r0, 0x1a4(r1)
    stfs f2, 0x54(r1)
    stfs f2, 0x98(r1)
    mtlr r0
    addi r1, r1, 0x1a0
    blr
}

asm void fn_802D5D18(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stmw r26, 0x58(r1)
    mr r28, r3
    li r31, 0x0
    lwz r0, 0x1510(r3)
    cmpwi r0, 0x0
    beq lbl_fn_802D5D18_000006D4
    cmpwi r0, 0x1
    beq lbl_fn_802D5D18_00000744
    b lbl_fn_802D5D18_00000958
lbl_fn_802D5D18_000006D4:
    lwz r3, lbl_8087F428
    bl fn_8036554C
    mr r26, r3
    b lbl_fn_802D5D18_00000738
lbl_fn_802D5D18_000006E4:
    lwz r3, 0x50(r26)
    bl fn_80219558
    cmpwi r3, 0x2
    bne lbl_fn_802D5D18_00000734
    lwz r3, 0x7e0(r26)
    rlwinm r0, r3, 0, 25, 25
    cmplwi r0, 0x40
    beq lbl_fn_802D5D18_00000958
    rlwinm r0, r3, 0, 23, 23
    cmplwi r0, 0x100
    beq lbl_fn_802D5D18_00000958
    addi r3, r26, 0x7d4
    li r4, 0x100
    li r5, 0x0
    bl fn_8013310C
    mr r3, r26
    li r4, 0x1
    bl fn_80166D3C
    li r31, 0x1
    b lbl_fn_802D5D18_00000958
lbl_fn_802D5D18_00000734:
    lwz r26, 0x14ac(r26)
lbl_fn_802D5D18_00000738:
    cmpwi r26, 0x0
    bne lbl_fn_802D5D18_000006E4
    b lbl_fn_802D5D18_00000958
lbl_fn_802D5D18_00000744:
    li r0, 0x0
    stw r0, 0x8(r1)
    lwz r3, lbl_8087F428
    bl fn_8036554C
    mr r29, r3
    b lbl_fn_802D5D18_00000848
lbl_fn_802D5D18_0000075C:
    lwz r4, 0x7e0(r29)
    rlwinm r0, r4, 0, 23, 23
    cmplwi r0, 0x100
    beq lbl_fn_802D5D18_00000844
    rlwinm r0, r4, 0, 25, 25
    cmplwi r0, 0x40
    beq lbl_fn_802D5D18_00000844
    lwz r4, 0x38(r29)
    li r6, 0x0
    mr r5, r6
    rlwinm r0, r4, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_802D5D18_0000079C
    clrlwi r0, r4, 31
    cmplwi r0, 0x1
    bne lbl_fn_802D5D18_000007A0
lbl_fn_802D5D18_0000079C:
    li r5, 0x1
lbl_fn_802D5D18_000007A0:
    cmpwi r5, 0x0
    bne lbl_fn_802D5D18_000007E4
    lwz r0, 0x7e0(r29)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_802D5D18_000007E4
    lwz r0, 0x55c(r29)
    li r4, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_802D5D18_000007D8
    lwz r0, 0x560(r29)
    cmpwi r0, 0x1c
    bne lbl_fn_802D5D18_000007D8
    li r4, 0x1
lbl_fn_802D5D18_000007D8:
    cmpwi r4, 0x0
    bne lbl_fn_802D5D18_000007E4
    li r6, 0x1
lbl_fn_802D5D18_000007E4:
    cmpwi r6, 0x0
    beq lbl_fn_802D5D18_00000844
    bl fn_8016E484
    cmpwi r3, 0x0
    beq lbl_fn_802D5D18_00000844
    lwz r0, 0x14d4(r28)
    cmpwi r0, 0x0
    beq lbl_fn_802D5D18_00000820
    lwz r3, 0x50(r29)
    bl fn_80219558
    cmpwi r3, 0x2
    beq lbl_fn_802D5D18_00000820
    lwz r0, 0x9f8(r29)
    cmpwi r0, 0x1
    ble lbl_fn_802D5D18_00000844
lbl_fn_802D5D18_00000820:
    lwz r0, 0x8(r1)
    addi r3, r1, 0xc
    slwi r0, r0, 2
    add. r3, r3, r0
    beq lbl_fn_802D5D18_00000838
    stw r29, 0x0(r3)
lbl_fn_802D5D18_00000838:
    lwz r3, 0x8(r1)
    addi r0, r3, 0x1
    stw r0, 0x8(r1)
lbl_fn_802D5D18_00000844:
    lwz r29, 0x14ac(r29)
lbl_fn_802D5D18_00000848:
    cmpwi r29, 0x0
    mr r3, r29
    bne lbl_fn_802D5D18_0000075C
    bl fn_80680CF8
    lis r4, 0x5555
    lwz r0, 0x14d4(r28)
    addi r4, r4, 0x5556
    mulhw r4, r4, r3
    cmpwi r0, 0x0
    srwi r0, r4, 31
    add r0, r4, r0
    mulli r0, r0, 0x3
    subf r3, r0, r3
    addi r30, r3, 0x1
    beq lbl_fn_802D5D18_000008BC
    bl fn_80680CF8
    lis r4, 0x51ec
    subi r0, r4, 0x7ae1
    mulhw r0, r0, r3
    srawi r0, r0, 5
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x64
    subf r0, r0, r3
    xori r0, r0, 0x3c
    srawi r3, r0, 1
    rlwinm r0, r0, 0, 26, 29
    subf r0, r0, r3
    srwi r30, r0, 31
lbl_fn_802D5D18_000008BC:
    addi r27, r1, 0x8
    li r29, 0x0
    b lbl_fn_802D5D18_00000950
lbl_fn_802D5D18_000008C8:
    lwz r0, 0x8(r1)
    lwz r26, 0x8(r1)
    cmpwi r0, 0x0
    beq lbl_fn_802D5D18_0000094C
    bl fn_80680CF8
    divwu r0, r3, r26
    li r4, 0x100
    li r5, 0x0
    mullw r0, r0, r26
    subf r31, r0, r3
    slwi r0, r31, 2
    add r26, r27, r0
    lwz r3, 0x4(r26)
    addi r3, r3, 0x7d4
    bl fn_8013310C
    lwz r3, 0x4(r26)
    li r4, 0x1
    bl fn_80166D3C
    slwi r0, r31, 2
    srawi r0, r0, 2
    addze r4, r0
    slwi r0, r4, 2
    add r5, r27, r0
    b lbl_fn_802D5D18_00000934
lbl_fn_802D5D18_00000928:
    lwz r0, 0x8(r5)
    addi r4, r4, 0x1
    stwu r0, 0x4(r5)
lbl_fn_802D5D18_00000934:
    lwz r3, 0x8(r1)
    subi r0, r3, 0x1
    cmplw r4, r0
    blt lbl_fn_802D5D18_00000928
    stw r0, 0x8(r1)
    li r31, 0x1
lbl_fn_802D5D18_0000094C:
    addi r29, r29, 0x1
lbl_fn_802D5D18_00000950:
    cmpw r29, r30
    blt lbl_fn_802D5D18_000008C8
lbl_fn_802D5D18_00000958:
    cmpwi r31, 0x0
    beq lbl_fn_802D5D18_0000097C
    lwz r0, 0x1690(r28)
    cmpwi r0, 0x0
    blt lbl_fn_802D5D18_0000097C
    mr r3, r28
    addi r4, r28, 0x1690
    li r5, 0x1
    bl fn_805A4A20
lbl_fn_802D5D18_0000097C:
    lmw r26, 0x58(r1)
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_802D6004(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    stw r0, 0xd4(r1)
    addi r11, r1, 0xd0
    bl _savegpr_14
    lwz r0, 0x15b0(r3)
    lis r5, lbl_807470A4@ha
    lis r4, __files@ha
    mr r15, r3
    subf r0, r0, r0
    stw r0, 0x15b0(r3)
    addi r14, r1, 0x64
    addi r16, r1, 0x70
    lwz r3, lbl_8087F8A0
    addi r27, r5, lbl_807470A4@l
    addi r28, r1, 0x2c
    addi r25, r4, __files@l
    lwz r18, 0x48(r3)
    addi r17, r1, 0x4c
    lis r20, 0xcccd
    lis r26, 0x925
    lis r24, 0x30c
    lis r23, 0x618
    li r22, 0x0
    lis r19, lbl_80786DA0@ha
    b lbl_fn_802D6004_00000D7C
lbl_fn_802D6004_000009F8:
    lwz r0, 0x7e0(r18)
    rlwinm r0, r0, 0, 23, 23
    cmplwi r0, 0x100
    bne lbl_fn_802D6004_00000D78
    addi r21, r18, 0xb0
    stw r18, 0x60(r1)
    mr r3, r21
    addi r4, r27, 0x2f6
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802D6004_00000A30
    li r3, 0x0
    b lbl_fn_802D6004_00000A3C
lbl_fn_802D6004_00000A30:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r21)
    add r3, r3, r0
lbl_fn_802D6004_00000A3C:
    lfs f0, 0x2c(r3)
    lfs f3, 0x1c(r3)
    fmr f2, f0
    lfs f4, 0xc(r3)
    stfs f4, 0x2c(r1)
    lwz r0, 0x15b0(r15)
    stfs f3, 0x30(r1)
    lwz r21, 0x15b4(r15)
    psq_l f1, 0x0(r28), 0, 0
    stfs f2, 0x78(r1)
    frsp f2, f2
    cmplw r0, r21
    stfs f0, 0x34(r1)
    psq_st f1, 0x0(r16), 0, 0
    psq_st f1, 0x0(r14), 0, 0
    stfs f2, 0x6c(r1)
    bge lbl_fn_802D6004_00000AC0
    mulli r0, r0, 0x1c
    lwz r3, 0x15ac(r15)
    add. r3, r3, r0
    beq lbl_fn_802D6004_00000AB0
    lwz r0, 0x60(r1)
    frsp f2, f2
    stw r0, 0x0(r3)
    psq_st f1, 0x4(r3), 0, 0
    stfs f2, 0xc(r3)
    lfs f2, 0x78(r1)
    psq_st f1, 0x10(r3), 0, 0
    stfs f2, 0x18(r3)
lbl_fn_802D6004_00000AB0:
    lwz r3, 0x15b0(r15)
    addi r0, r3, 0x1
    stw r0, 0x15b0(r15)
    b lbl_fn_802D6004_00000D70
lbl_fn_802D6004_00000AC0:
    subi r0, r26, 0x6db7
    subf r0, r21, r0
    cmplwi r0, 0x1
    bge lbl_fn_802D6004_00000AE4
    addi r4, r27, 0x2b7
    addi r3, r25, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802D6004_00000AE4:
    addi r0, r24, 0x30c3
    cmplw r21, r0
    bge lbl_fn_802D6004_00000B18
    addi r3, r21, 0x1
    subi r4, r20, 0x3333
    slwi r0, r3, 2
    subf r0, r3, r0
    mulhwu r0, r4, r0
    srwi r0, r0, 2
    cmplwi r0, 0x1
    bge lbl_fn_802D6004_00000B34
    b lbl_fn_802D6004_00000B34
    b lbl_fn_802D6004_00000B34
lbl_fn_802D6004_00000B18:
    addi r0, r23, 0x6186
    cmplw r21, r0
    bge lbl_fn_802D6004_00000B34
    addi r0, r21, 0x1
    srwi r0, r0, 1
    cmplwi r0, 0x1
    cmplwi r0, 0x1
lbl_fn_802D6004_00000B34:
    addi r3, r15, 0x15b4
    stw r22, 0x4c(r1)
    subi r0, r26, 0x6db7
    stw r22, 0x50(r1)
    stw r22, 0x54(r1)
    stw r3, 0x58(r1)
    stw r22, 0x5c(r1)
    lwz r3, 0x15b0(r15)
    lwz r21, 0x15b4(r15)
    addi r3, r3, 0x1
    subf r3, r21, r3
    subf r0, r21, r0
    cmplw r3, r0
    stw r3, 0x1c(r1)
    ble lbl_fn_802D6004_00000B84
    addi r4, r27, 0x2b7
    addi r3, r25, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802D6004_00000B84:
    addi r0, r24, 0x30c3
    cmplw r21, r0
    bge lbl_fn_802D6004_00000BCC
    addi r4, r21, 0x1
    subi r5, r20, 0x3333
    slwi r3, r4, 2
    lwz r0, 0x1c(r1)
    subf r4, r4, r3
    mulhwu r4, r5, r4
    addi r3, r1, 0x14
    srwi r4, r4, 2
    stw r4, 0x14(r1)
    cmplw r4, r0
    bge lbl_fn_802D6004_00000BC0
    addi r3, r1, 0x1c
lbl_fn_802D6004_00000BC0:
    lwz r0, 0x0(r3)
    add r21, r21, r0
    b lbl_fn_802D6004_00000C08
lbl_fn_802D6004_00000BCC:
    addi r0, r23, 0x6186
    cmplw r21, r0
    bge lbl_fn_802D6004_00000C04
    addi r3, r21, 0x1
    lwz r0, 0x1c(r1)
    srwi r3, r3, 1
    stw r3, 0x18(r1)
    cmplw r3, r0
    addi r3, r1, 0x18
    bge lbl_fn_802D6004_00000BF8
    addi r3, r1, 0x1c
lbl_fn_802D6004_00000BF8:
    lwz r0, 0x0(r3)
    add r21, r21, r0
    b lbl_fn_802D6004_00000C08
lbl_fn_802D6004_00000C04:
    subi r21, r26, 0x6db7
lbl_fn_802D6004_00000C08:
    subi r0, r26, 0x6db7
    cmplw r21, r0
    ble lbl_fn_802D6004_00000C28
    addi r4, r27, 0x2b7
    addi r3, r25, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802D6004_00000C28:
    mulli r3, r21, 0x1c
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_fn_802D6004_00000C50
    addi r3, r25, 0xa0
    addi r4, r19, lbl_80786DA0@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802D6004_00000C50:
    stw r29, 0x4c(r1)
    lwz r0, 0x50(r1)
    stw r21, 0x54(r1)
    mulli r4, r0, 0x1c
    lwz r0, 0x60(r1)
    lwz r3, 0x15b0(r15)
    stw r3, 0x5c(r1)
    mulli r3, r3, 0x1c
    add r3, r29, r3
    add. r3, r4, r3
    beq lbl_fn_802D6004_00000CA0
    stw r0, 0x0(r3)
    psq_l f1, 0x0(r14), 0, 0
    psq_st f1, 0x4(r3), 0, 0
    lfs f2, 0x6c(r1)
    stfs f2, 0xc(r3)
    psq_l f1, 0x0(r16), 0, 0
    psq_st f1, 0x10(r3), 0, 0
    lfs f2, 0x78(r1)
    stfs f2, 0x18(r3)
lbl_fn_802D6004_00000CA0:
    lwz r3, 0x50(r1)
    lwz r0, 0x5c(r1)
    addi r3, r3, 0x1
    stw r3, 0x50(r1)
    mulli r0, r0, 0x1c
    lwz r3, 0x4c(r1)
    lwz r4, 0x15b0(r15)
    lwz r7, 0x15ac(r15)
    mulli r4, r4, 0x1c
    add r5, r3, r0
    add r6, r7, r4
    b lbl_fn_802D6004_00000D1C
lbl_fn_802D6004_00000CD0:
    subic. r5, r5, 0x1c
    subi r6, r6, 0x1c
    beq lbl_fn_802D6004_00000D04
    lwz r0, 0x0(r6)
    stw r0, 0x0(r5)
    lfs f2, 0xc(r6)
    psq_l f1, 0x4(r6), 0, 0
    psq_st f1, 0x4(r5), 0, 0
    stfs f2, 0xc(r5)
    lfs f2, 0x18(r6)
    psq_l f1, 0x10(r6), 0, 0
    psq_st f1, 0x10(r5), 0, 0
    stfs f2, 0x18(r5)
lbl_fn_802D6004_00000D04:
    lwz r4, 0x5c(r1)
    lwz r3, 0x50(r1)
    subi r0, r4, 0x1
    stw r0, 0x5c(r1)
    addi r0, r3, 0x1
    stw r0, 0x50(r1)
lbl_fn_802D6004_00000D1C:
    cmplw r7, r6
    blt lbl_fn_802D6004_00000CD0
    stw r22, 0x15b0(r15)
    cmpwi r17, 0x0
    lwz r3, 0x15b4(r15)
    lwz r0, 0x54(r1)
    stw r0, 0x15b4(r15)
    stw r3, 0x54(r1)
    lwz r0, 0x4c(r1)
    lwz r3, 0x15ac(r15)
    stw r0, 0x15ac(r15)
    stw r3, 0x4c(r1)
    lwz r0, 0x50(r1)
    stw r0, 0x15b0(r15)
    stw r22, 0x50(r1)
    beq lbl_fn_802D6004_00000D70
    lwz r3, 0x4c(r1)
    cmpwi r3, 0x0
    beq lbl_fn_802D6004_00000D70
    stw r22, 0x50(r1)
    bl dtor_80084684
lbl_fn_802D6004_00000D70:
    mr r3, r18
    bl fn_8016CAD0
lbl_fn_802D6004_00000D78:
    lwz r18, 0x14ac(r18)
lbl_fn_802D6004_00000D7C:
    cmpwi r18, 0x0
    bne lbl_fn_802D6004_000009F8
    lis r4, lbl_807470A4@ha
    lis r3, __files@ha
    addi r20, r1, 0x64
    addi r19, r1, 0x70
    addi r24, r4, lbl_807470A4@l
    addi r23, r1, 0x20
    addi r26, r3, __files@l
    addi r18, r1, 0x38
    li r17, 0x0
    li r31, 0x0
    lis r30, 0xcccd
    lis r25, 0x925
    lis r27, 0x30c
    lis r28, 0x618
    li r29, 0x0
    lis r14, lbl_80786DA0@ha
    b lbl_fn_802D6004_0000115C
lbl_fn_802D6004_00000DC8:
    lwz r3, 0x1644(r15)
    lwzx r16, r3, r31
    lwz r0, 0x7e0(r16)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_802D6004_00001154
    lwz r0, 0xd18(r16)
    cmpwi r0, 0x0
    beq lbl_fn_802D6004_00001154
    addi r21, r16, 0xb0
    stw r16, 0x60(r1)
    mr r3, r21
    addi r4, r24, 0x2f6
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802D6004_00000E14
    li r3, 0x0
    b lbl_fn_802D6004_00000E20
lbl_fn_802D6004_00000E14:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r21)
    add r3, r3, r0
lbl_fn_802D6004_00000E20:
    lfs f0, 0x2c(r3)
    lfs f3, 0x1c(r3)
    fmr f2, f0
    lfs f4, 0xc(r3)
    stfs f4, 0x20(r1)
    lwz r0, 0x15b0(r15)
    stfs f3, 0x24(r1)
    lwz r21, 0x15b4(r15)
    psq_l f1, 0x0(r23), 0, 0
    stfs f2, 0x78(r1)
    frsp f2, f2
    cmplw r0, r21
    stfs f0, 0x28(r1)
    psq_st f1, 0x0(r19), 0, 0
    psq_st f1, 0x0(r20), 0, 0
    stfs f2, 0x6c(r1)
    bge lbl_fn_802D6004_00000EA4
    mulli r0, r0, 0x1c
    lwz r3, 0x15ac(r15)
    add. r3, r3, r0
    beq lbl_fn_802D6004_00000E94
    lwz r0, 0x60(r1)
    frsp f2, f2
    stw r0, 0x0(r3)
    psq_st f1, 0x4(r3), 0, 0
    stfs f2, 0xc(r3)
    lfs f2, 0x78(r1)
    psq_st f1, 0x10(r3), 0, 0
    stfs f2, 0x18(r3)
lbl_fn_802D6004_00000E94:
    lwz r3, 0x15b0(r15)
    addi r0, r3, 0x1
    stw r0, 0x15b0(r15)
    b lbl_fn_802D6004_0000114C
lbl_fn_802D6004_00000EA4:
    subi r0, r25, 0x6db7
    subf r0, r21, r0
    cmplwi r0, 0x1
    bge lbl_fn_802D6004_00000EC8
    addi r4, r24, 0x2b7
    addi r3, r26, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802D6004_00000EC8:
    addi r0, r27, 0x30c3
    cmplw r21, r0
    bge lbl_fn_802D6004_00000EFC
    addi r3, r21, 0x1
    subi r4, r30, 0x3333
    slwi r0, r3, 2
    subf r0, r3, r0
    mulhwu r0, r4, r0
    srwi r0, r0, 2
    cmplwi r0, 0x1
    bge lbl_fn_802D6004_00000F18
    b lbl_fn_802D6004_00000F18
    b lbl_fn_802D6004_00000F18
lbl_fn_802D6004_00000EFC:
    addi r0, r28, 0x6186
    cmplw r21, r0
    bge lbl_fn_802D6004_00000F18
    addi r0, r21, 0x1
    srwi r0, r0, 1
    cmplwi r0, 0x1
    cmplwi r0, 0x1
lbl_fn_802D6004_00000F18:
    lwz r3, 0x15b0(r15)
    addi r4, r15, 0x15b4
    lwz r21, 0x15b4(r15)
    subi r0, r25, 0x6db7
    addi r3, r3, 0x1
    stw r29, 0x38(r1)
    subf r3, r21, r3
    subf r0, r21, r0
    cmplw r3, r0
    stw r29, 0x3c(r1)
    stw r29, 0x40(r1)
    stw r4, 0x44(r1)
    stw r29, 0x48(r1)
    stw r3, 0x10(r1)
    ble lbl_fn_802D6004_00000F68
    addi r4, r24, 0x2b7
    addi r3, r26, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802D6004_00000F68:
    addi r0, r27, 0x30c3
    cmplw r21, r0
    bge lbl_fn_802D6004_00000FB0
    addi r4, r21, 0x1
    subi r5, r30, 0x3333
    slwi r3, r4, 2
    lwz r0, 0x10(r1)
    subf r4, r4, r3
    mulhwu r4, r5, r4
    addi r3, r1, 0x8
    srwi r4, r4, 2
    stw r4, 0x8(r1)
    cmplw r4, r0
    bge lbl_fn_802D6004_00000FA4
    addi r3, r1, 0x10
lbl_fn_802D6004_00000FA4:
    lwz r0, 0x0(r3)
    add r22, r21, r0
    b lbl_fn_802D6004_00000FEC
lbl_fn_802D6004_00000FB0:
    addi r0, r28, 0x6186
    cmplw r21, r0
    bge lbl_fn_802D6004_00000FE8
    addi r3, r21, 0x1
    lwz r0, 0x10(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_802D6004_00000FDC
    addi r3, r1, 0x10
lbl_fn_802D6004_00000FDC:
    lwz r0, 0x0(r3)
    add r22, r21, r0
    b lbl_fn_802D6004_00000FEC
lbl_fn_802D6004_00000FE8:
    subi r22, r25, 0x6db7
lbl_fn_802D6004_00000FEC:
    subi r0, r25, 0x6db7
    cmplw r22, r0
    ble lbl_fn_802D6004_0000100C
    addi r4, r24, 0x2b7
    addi r3, r26, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802D6004_0000100C:
    mulli r3, r22, 0x1c
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r21, r3
    bne lbl_fn_802D6004_00001034
    addi r3, r26, 0xa0
    addi r4, r14, lbl_80786DA0@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802D6004_00001034:
    lwz r6, 0x15b0(r15)
    lwz r3, 0x3c(r1)
    mulli r5, r6, 0x1c
    stw r21, 0x38(r1)
    lwz r0, 0x60(r1)
    stw r22, 0x40(r1)
    mulli r4, r3, 0x1c
    add r3, r21, r5
    stw r6, 0x48(r1)
    add. r3, r4, r3
    beq lbl_fn_802D6004_00001084
    stw r0, 0x0(r3)
    psq_l f1, 0x0(r20), 0, 0
    psq_st f1, 0x4(r3), 0, 0
    lfs f2, 0x6c(r1)
    stfs f2, 0xc(r3)
    psq_l f1, 0x0(r19), 0, 0
    psq_st f1, 0x10(r3), 0, 0
    lfs f2, 0x78(r1)
    stfs f2, 0x18(r3)
lbl_fn_802D6004_00001084:
    lwz r0, 0x15b0(r15)
    lwz r3, 0x48(r1)
    lwz r4, 0x3c(r1)
    mulli r5, r0, 0x1c
    lwz r0, 0x15ac(r15)
    addi r6, r4, 0x1
    stw r6, 0x3c(r1)
    mulli r3, r3, 0x1c
    lwz r4, 0x38(r1)
    add r6, r0, r5
    add r5, r4, r3
    b lbl_fn_802D6004_00001100
lbl_fn_802D6004_000010B4:
    subic. r5, r5, 0x1c
    subi r6, r6, 0x1c
    beq lbl_fn_802D6004_000010E8
    lwz r3, 0x0(r6)
    stw r3, 0x0(r5)
    lfs f2, 0xc(r6)
    psq_l f1, 0x4(r6), 0, 0
    psq_st f1, 0x4(r5), 0, 0
    stfs f2, 0xc(r5)
    lfs f2, 0x18(r6)
    psq_l f1, 0x10(r6), 0, 0
    psq_st f1, 0x10(r5), 0, 0
    stfs f2, 0x18(r5)
lbl_fn_802D6004_000010E8:
    lwz r4, 0x48(r1)
    lwz r3, 0x3c(r1)
    subi r4, r4, 0x1
    stw r4, 0x48(r1)
    addi r3, r3, 0x1
    stw r3, 0x3c(r1)
lbl_fn_802D6004_00001100:
    cmplw r0, r6
    blt lbl_fn_802D6004_000010B4
    lwz r0, 0x3c(r1)
    cmpwi r18, 0x0
    lwz r6, 0x15b4(r15)
    lwz r5, 0x40(r1)
    lwz r3, 0x15ac(r15)
    lwz r4, 0x38(r1)
    stw r5, 0x15b4(r15)
    stw r6, 0x40(r1)
    stw r4, 0x15ac(r15)
    stw r3, 0x38(r1)
    stw r0, 0x15b0(r15)
    stw r29, 0x3c(r1)
    beq lbl_fn_802D6004_0000114C
    cmpwi r3, 0x0
    beq lbl_fn_802D6004_0000114C
    stw r29, 0x3c(r1)
    bl dtor_80084684
lbl_fn_802D6004_0000114C:
    mr r3, r16
    bl fn_8016CAD0
lbl_fn_802D6004_00001154:
    addi r17, r17, 0x1
    addi r31, r31, 0x4
lbl_fn_802D6004_0000115C:
    lwz r0, 0x1648(r15)
    cmplw r17, r0
    blt lbl_fn_802D6004_00000DC8
    addi r11, r1, 0xd0
    lwz r3, 0x15b0(r15)
    bl _restgpr_14
    lwz r0, 0xd4(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

asm void fn_802D67F8(void)
{
    nofralloc
    stwu r1, -0x310(r1)
    mflr r0
    stw r0, 0x314(r1)
    addi r11, r1, 0x2f0
    stfd f31, 0x300(r1)
    psq_st f31, 0x308(r1), 0, 0
    stfd f30, 0x2f0(r1)
    psq_st f30, 0x2f8(r1), 0, 0
    bl _savegpr_14
    cmpwi r4, 0x0
    mr r15, r3
    blt lbl_fn_802D67F8_000019BC
    cmpwi r4, 0x3
    blt lbl_fn_802D67F8_000011C0
    b lbl_fn_802D67F8_000019BC
lbl_fn_802D67F8_000011C0:
    lwz r0, 0x1624(r3)
    li r17, 0x2
    cmpwi r0, 0x0
    beq lbl_fn_802D67F8_000011DC
    li r0, 0x0
    stw r0, 0x1624(r3)
    li r17, 0x4
lbl_fn_802D67F8_000011DC:
    li r28, 0x0
    lis r3, __files@ha
    lis r4, lbl_807470A4@ha
    stw r28, 0x68(r1)
    addi r25, r4, lbl_807470A4@l
    addi r24, r3, __files@l
    stw r28, 0x70(r1)
    addi r21, r1, 0x70
    addi r29, r1, 0x88
    li r16, 0x0
    stw r28, 0x6c(r1)
    li r14, 0x0
    lis r19, 0xcccd
    lis r26, 0x4000
    lis r23, 0x1555
    lis r22, 0x2aab
    lis r18, lbl_80775A88@ha
    b lbl_fn_802D67F8_000014C8
lbl_fn_802D67F8_00001224:
    lwz r0, 0x1648(r15)
    cmplw r0, r16
    ble lbl_fn_802D67F8_000014D0
    lwz r3, 0x6c(r1)
    lwz r20, 0x70(r1)
    lwz r27, 0x1644(r15)
    cmplw r3, r20
    bge lbl_fn_802D67F8_00001264
    addi r0, r3, 0x1
    stw r0, 0x6c(r1)
    lwz r3, 0x68(r1)
    slwi r0, r0, 2
    lwzx r4, r27, r14
    add r3, r3, r0
    stw r4, -0x4(r3)
    b lbl_fn_802D67F8_000014C0
lbl_fn_802D67F8_00001264:
    subi r0, r26, 0x1
    subf r0, r20, r0
    cmplwi r0, 0x1
    bge lbl_fn_802D67F8_00001288
    addi r4, r25, 0x2b7
    addi r3, r24, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802D67F8_00001288:
    addi r0, r23, 0x5555
    cmplw r20, r0
    bge lbl_fn_802D67F8_000012BC
    addi r3, r20, 0x1
    subi r4, r19, 0x3333
    slwi r0, r3, 2
    subf r0, r3, r0
    mulhwu r0, r4, r0
    srwi r0, r0, 2
    cmplwi r0, 0x1
    bge lbl_fn_802D67F8_000012D8
    b lbl_fn_802D67F8_000012D8
    b lbl_fn_802D67F8_000012D8
lbl_fn_802D67F8_000012BC:
    subi r0, r22, 0x5556
    cmplw r20, r0
    bge lbl_fn_802D67F8_000012D8
    addi r0, r20, 0x1
    srwi r0, r0, 1
    cmplwi r0, 0x1
    cmplwi r0, 0x1
lbl_fn_802D67F8_000012D8:
    lwz r3, 0x6c(r1)
    subi r0, r26, 0x1
    lwz r20, 0x70(r1)
    addi r3, r3, 0x1
    stw r28, 0x88(r1)
    subf r3, r20, r3
    subf r0, r20, r0
    cmplw r3, r0
    stw r28, 0x8c(r1)
    stw r28, 0x90(r1)
    stw r21, 0x94(r1)
    stw r28, 0x98(r1)
    stw r3, 0x1c(r1)
    ble lbl_fn_802D67F8_00001324
    addi r4, r25, 0x2b7
    addi r3, r24, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802D67F8_00001324:
    addi r0, r23, 0x5555
    cmplw r20, r0
    bge lbl_fn_802D67F8_0000136C
    addi r4, r20, 0x1
    subi r5, r19, 0x3333
    slwi r3, r4, 2
    lwz r0, 0x1c(r1)
    subf r4, r4, r3
    mulhwu r4, r5, r4
    addi r3, r1, 0x24
    srwi r4, r4, 2
    stw r4, 0x24(r1)
    cmplw r4, r0
    bge lbl_fn_802D67F8_00001360
    addi r3, r1, 0x1c
lbl_fn_802D67F8_00001360:
    lwz r0, 0x0(r3)
    add r30, r20, r0
    b lbl_fn_802D67F8_000013A8
lbl_fn_802D67F8_0000136C:
    subi r0, r22, 0x5556
    cmplw r20, r0
    bge lbl_fn_802D67F8_000013A4
    addi r3, r20, 0x1
    lwz r0, 0x1c(r1)
    srwi r3, r3, 1
    stw r3, 0x20(r1)
    cmplw r3, r0
    addi r3, r1, 0x20
    bge lbl_fn_802D67F8_00001398
    addi r3, r1, 0x1c
lbl_fn_802D67F8_00001398:
    lwz r0, 0x0(r3)
    add r30, r20, r0
    b lbl_fn_802D67F8_000013A8
lbl_fn_802D67F8_000013A4:
    subi r30, r26, 0x1
lbl_fn_802D67F8_000013A8:
    subi r0, r26, 0x1
    cmplw r30, r0
    ble lbl_fn_802D67F8_000013C8
    addi r4, r25, 0x2b7
    addi r3, r24, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802D67F8_000013C8:
    slwi r3, r30, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r20, r3
    bne lbl_fn_802D67F8_000013F0
    addi r3, r24, 0xa0
    addi r4, r18, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802D67F8_000013F0:
    lwz r0, 0x6c(r1)
    lwz r3, 0x8c(r1)
    slwi r4, r0, 2
    stw r20, 0x88(r1)
    slwi r3, r3, 2
    stw r30, 0x90(r1)
    add r4, r20, r4
    stw r0, 0x98(r1)
    lwzx r0, r27, r14
    stwx r0, r4, r3
    lwz r0, 0x6c(r1)
    lwz r4, 0x8c(r1)
    lwz r30, 0x68(r1)
    slwi r0, r0, 2
    addi r5, r4, 0x1
    stw r5, 0x8c(r1)
    add r3, r30, r0
    lwz r0, 0x98(r1)
    subf r3, r30, r3
    srawi r4, r3, 2
    lwz r3, 0x88(r1)
    addze r20, r4
    subf r0, r20, r0
    stw r0, 0x98(r1)
    slwi r27, r20, 2
    mr r4, r30
    slwi r0, r0, 2
    mr r5, r27
    add r3, r3, r0
    bl memcpy
    mr r3, r30
    mr r5, r27
    li r4, 0x0
    bl memset
    lwz r0, 0x8c(r1)
    cmpwi r29, 0x0
    lwz r6, 0x70(r1)
    lwz r4, 0x90(r1)
    add r5, r0, r20
    lwz r3, 0x68(r1)
    lwz r0, 0x88(r1)
    stw r4, 0x70(r1)
    stw r6, 0x90(r1)
    stw r0, 0x68(r1)
    stw r3, 0x88(r1)
    stw r5, 0x6c(r1)
    stw r28, 0x8c(r1)
    beq lbl_fn_802D67F8_000014C0
    cmpwi r3, 0x0
    beq lbl_fn_802D67F8_000014C0
    stw r28, 0x8c(r1)
    bl dtor_80084684
lbl_fn_802D67F8_000014C0:
    addi r14, r14, 0x4
    addi r16, r16, 0x1
lbl_fn_802D67F8_000014C8:
    cmplw r16, r17
    blt lbl_fn_802D67F8_00001224
lbl_fn_802D67F8_000014D0:
    li r24, 0x0
    lis r3, __files@ha
    lis r4, lbl_807470A4@ha
    stw r24, 0x5c(r1)
    addi r26, r4, lbl_807470A4@l
    addi r27, r3, __files@l
    stw r24, 0x64(r1)
    addi r30, r1, 0x64
    addi r23, r1, 0x74
    li r16, 0x0
    stw r24, 0x60(r1)
    li r20, 0x0
    lis r31, 0xcccd
    lis r25, 0x4000
    lis r28, 0x1555
    lis r29, 0x2aab
    lis r14, lbl_80775A88@ha
    b lbl_fn_802D67F8_000017A8
lbl_fn_802D67F8_00001518:
    lwz r0, 0x163c(r15)
    cmplw r0, r16
    ble lbl_fn_802D67F8_000017B0
    lwz r3, 0x60(r1)
    lwz r19, 0x64(r1)
    lwz r18, 0x1638(r15)
    cmplw r3, r19
    bge lbl_fn_802D67F8_00001558
    addi r0, r3, 0x1
    stw r0, 0x60(r1)
    lwz r3, 0x5c(r1)
    slwi r0, r0, 2
    lwzx r4, r18, r20
    add r3, r3, r0
    stw r4, -0x4(r3)
    b lbl_fn_802D67F8_000017A0
lbl_fn_802D67F8_00001558:
    subi r0, r25, 0x1
    subf r0, r19, r0
    cmplwi r0, 0x1
    bge lbl_fn_802D67F8_0000157C
    addi r4, r26, 0x2b7
    addi r3, r27, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802D67F8_0000157C:
    addi r0, r28, 0x5555
    cmplw r19, r0
    bge lbl_fn_802D67F8_000015B0
    addi r3, r19, 0x1
    subi r4, r31, 0x3333
    slwi r0, r3, 2
    subf r0, r3, r0
    mulhwu r0, r4, r0
    srwi r0, r0, 2
    cmplwi r0, 0x1
    bge lbl_fn_802D67F8_000015CC
    b lbl_fn_802D67F8_000015CC
    b lbl_fn_802D67F8_000015CC
lbl_fn_802D67F8_000015B0:
    subi r0, r29, 0x5556
    cmplw r19, r0
    bge lbl_fn_802D67F8_000015CC
    addi r0, r19, 0x1
    srwi r0, r0, 1
    cmplwi r0, 0x1
    cmplwi r0, 0x1
lbl_fn_802D67F8_000015CC:
    lwz r3, 0x60(r1)
    subi r0, r25, 0x1
    lwz r19, 0x64(r1)
    addi r3, r3, 0x1
    stw r24, 0x74(r1)
    subf r3, r19, r3
    subf r0, r19, r0
    cmplw r3, r0
    stw r24, 0x78(r1)
    stw r24, 0x7c(r1)
    stw r30, 0x80(r1)
    stw r24, 0x84(r1)
    stw r3, 0x10(r1)
    ble lbl_fn_802D67F8_00001618
    addi r4, r26, 0x2b7
    addi r3, r27, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802D67F8_00001618:
    addi r0, r28, 0x5555
    cmplw r19, r0
    bge lbl_fn_802D67F8_00001660
    addi r4, r19, 0x1
    subi r5, r31, 0x3333
    slwi r3, r4, 2
    lwz r0, 0x10(r1)
    subf r4, r4, r3
    mulhwu r4, r5, r4
    addi r3, r1, 0x18
    srwi r4, r4, 2
    stw r4, 0x18(r1)
    cmplw r4, r0
    bge lbl_fn_802D67F8_00001654
    addi r3, r1, 0x10
lbl_fn_802D67F8_00001654:
    lwz r0, 0x0(r3)
    add r19, r19, r0
    b lbl_fn_802D67F8_0000169C
lbl_fn_802D67F8_00001660:
    subi r0, r29, 0x5556
    cmplw r19, r0
    bge lbl_fn_802D67F8_00001698
    addi r3, r19, 0x1
    lwz r0, 0x10(r1)
    srwi r3, r3, 1
    stw r3, 0x14(r1)
    cmplw r3, r0
    addi r3, r1, 0x14
    bge lbl_fn_802D67F8_0000168C
    addi r3, r1, 0x10
lbl_fn_802D67F8_0000168C:
    lwz r0, 0x0(r3)
    add r19, r19, r0
    b lbl_fn_802D67F8_0000169C
lbl_fn_802D67F8_00001698:
    subi r19, r25, 0x1
lbl_fn_802D67F8_0000169C:
    subi r0, r25, 0x1
    cmplw r19, r0
    ble lbl_fn_802D67F8_000016BC
    addi r4, r26, 0x2b7
    addi r3, r27, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802D67F8_000016BC:
    slwi r3, r19, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r21, r3
    bne lbl_fn_802D67F8_000016E4
    addi r3, r27, 0xa0
    addi r4, r14, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802D67F8_000016E4:
    lwz r5, 0x60(r1)
    lwz r3, 0x78(r1)
    slwi r6, r5, 2
    lwzx r0, r18, r20
    slwi r4, r3, 2
    addi r3, r3, 0x1
    add r6, r21, r6
    stw r19, 0x7c(r1)
    stwx r0, r6, r4
    lwz r0, 0x60(r1)
    lwz r18, 0x5c(r1)
    slwi r0, r0, 2
    stw r3, 0x78(r1)
    add r0, r18, r0
    mr r4, r18
    subf r0, r18, r0
    srawi r0, r0, 2
    addze r22, r0
    subf r0, r22, r5
    stw r0, 0x84(r1)
    slwi r19, r22, 2
    slwi r0, r0, 2
    mr r5, r19
    add r3, r21, r0
    bl memcpy
    mr r3, r18
    mr r5, r19
    li r4, 0x0
    bl memset
    lwz r0, 0x78(r1)
    cmpwi r23, 0x0
    lwz r3, 0x5c(r1)
    add r5, r0, r22
    mr r0, r21
    lwz r6, 0x64(r1)
    lwz r4, 0x7c(r1)
    stw r4, 0x64(r1)
    stw r6, 0x7c(r1)
    stw r0, 0x5c(r1)
    stw r3, 0x74(r1)
    stw r5, 0x60(r1)
    stw r24, 0x78(r1)
    beq lbl_fn_802D67F8_000017A0
    cmpwi r3, 0x0
    beq lbl_fn_802D67F8_000017A0
    stw r24, 0x78(r1)
    bl dtor_80084684
lbl_fn_802D67F8_000017A0:
    addi r20, r20, 0x4
    addi r16, r16, 0x1
lbl_fn_802D67F8_000017A8:
    cmplw r16, r17
    blt lbl_fn_802D67F8_00001518
lbl_fn_802D67F8_000017B0:
    lfs f30, lbl_80884564
    addi r19, r1, 0x50
    lfs f31, lbl_8088458C
    li r20, 0x0
    li r14, 0x0
    li r18, -0x1
    li r17, 0x1
    li r16, 0x0
    b lbl_fn_802D67F8_00001910
lbl_fn_802D67F8_000017D4:
    lwz r0, 0x60(r1)
    cmplw r0, r20
    ble lbl_fn_802D67F8_0000191C
    lwz r3, 0x68(r1)
    lwz r4, 0x5c(r1)
    lwzx r22, r3, r14
    lwzx r21, r4, r14
    lwz r3, lbl_8087F048
    addi r4, r22, 0xb0
    bl fn_80107850
    addi r4, r22, 0xb0
    lwz r3, lbl_8087F048
    mr r5, r4
    bl fn_801077A8
    mr r3, r22
    li r4, 0x3e8
    bl fn_80232B7C
    stfs f30, 0x34(r1)
    fmr f1, f31
    addi r4, r15, 0x1520
    addi r5, r22, 0xb0
    stfs f30, 0x38(r1)
    addi r7, r1, 0x28
    addi r8, r1, 0x34
    stfs f30, 0x3c(r1)
    addi r9, r1, 0x40
    li r6, 0x0
    li r10, -0x1
    stfs f30, 0x28(r1)
    stfs f30, 0x2c(r1)
    stfs f30, 0x30(r1)
    stfs f31, 0x40(r1)
    stfs f31, 0x44(r1)
    stfs f31, 0x48(r1)
    stfs f31, 0x4c(r1)
    stw r18, 0x8(r1)
    stw r17, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r0, 0x12a4(r22)
    mr r3, r22
    rlwinm r0, r0, 0, 17, 15
    stw r0, 0x12a4(r22)
    bl fn_80176ACC
    mr r3, r22
    li r4, 0x0
    bl fn_800D246C
    lwz r0, 0x12a4(r22)
    extrwi. r0, r0, 1, 6
    beq lbl_fn_802D67F8_000018A8
    lwz r0, 0x12a4(r22)
    rlwinm r0, r0, 0, 7, 5
    stw r0, 0x12a4(r22)
lbl_fn_802D67F8_000018A8:
    addi r3, r22, 0x7d4
    bl fn_8012D8B8
    stw r16, 0x58c(r22)
    mr r3, r22
    li r4, 0x0
    li r5, 0x1
    stw r17, 0xd18(r22)
    li r6, 0x1
    li r7, 0x1
    bl fn_8015495C
    lfs f2, 0xc(r21)
    mr r3, r22
    psq_l f1, 0x4(r21), 0, 0
    psq_st f1, 0x528(r22), 0, 0
    stfs f2, 0x530(r22)
    fmr f2, f30
    lfs f0, 0x14(r21)
    stfs f30, 0x50(r1)
    stfs f0, 0x54(r1)
    psq_l f1, 0x0(r19), 0, 0
    psq_st f1, 0x534(r22), 0, 0
    stfs f30, 0x58(r1)
    stfs f2, 0x53c(r22)
    bl fn_80145334
    addi r20, r20, 0x1
    addi r14, r14, 0x4
lbl_fn_802D67F8_00001910:
    lwz r0, 0x6c(r1)
    cmplw r20, r0
    blt lbl_fn_802D67F8_000017D4
lbl_fn_802D67F8_0000191C:
    addi r3, r1, 0xa0
    li r4, 0x0
    li r5, 0x200
    bl memset
    lwz r4, lbl_8087F1E4
    addi r3, r1, 0xa0
    lwz r4, 0x49c(r4)
    cmpwi r4, 0x0
    beq lbl_fn_802D67F8_00001944
    b lbl_fn_802D67F8_00001948
lbl_fn_802D67F8_00001944:
    la r4, lbl_808813D0
lbl_fn_802D67F8_00001948:
    lwz r5, 0x60(r15)
    lwz r5, 0x4(r5)
    crclr 6
    bl fn_800DD3FC
    lwz r3, lbl_8087F048
    addi r4, r1, 0xa0
    bl fn_80109828
    addic. r0, r1, 0x5c
    beq lbl_fn_802D67F8_00001990
    beq lbl_fn_802D67F8_00001990
    beq lbl_fn_802D67F8_00001990
    lwz r3, 0x5c(r1)
    cmpwi r3, 0x0
    beq lbl_fn_802D67F8_00001990
    lwz r0, 0x60(r1)
    subf r0, r0, r0
    stw r0, 0x60(r1)
    bl dtor_80084684
lbl_fn_802D67F8_00001990:
    addic. r0, r1, 0x68
    beq lbl_fn_802D67F8_000019BC
    beq lbl_fn_802D67F8_000019BC
    beq lbl_fn_802D67F8_000019BC
    lwz r3, 0x68(r1)
    cmpwi r3, 0x0
    beq lbl_fn_802D67F8_000019BC
    lwz r0, 0x6c(r1)
    subf r0, r0, r0
    stw r0, 0x6c(r1)
    bl dtor_80084684
lbl_fn_802D67F8_000019BC:
    addi r11, r1, 0x2f0
    psq_l f31, 0x308(r1), 0, 0
    lfd f31, 0x300(r1)
    psq_l f30, 0x2f8(r1), 0, 0
    lfd f30, 0x2f0(r1)
    bl _restgpr_14
    lwz r0, 0x314(r1)
    mtlr r0
    addi r1, r1, 0x310
    blr
}
