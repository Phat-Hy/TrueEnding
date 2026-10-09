#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void fn_8000D124(void);
extern void fn_8000D3A4(void);
extern void fn_8001047C(void);
extern void fn_80011034(void);
extern void fn_80012C88(void);
extern void fn_80013338(void);
extern void fn_80013410(void);
extern void fn_8004D388(void);
extern void fn_8004ED34(void);
extern void fn_80051BC4(void);
extern void fn_80057A64(void);
extern void fn_8008CD1C(void);
extern void fn_80092814(void);
extern void fn_800E932C(void);
extern void fn_800F72CC(void);
extern void fn_800F7FA0(void);
extern void fn_800F7FA8(void);
extern void fn_800F7FF0(void);
extern void fn_800F80A8(void);
extern void fn_800F80B8(void);
extern void fn_800F8290(void);
extern void fn_800F8548(void);
extern void fn_800F8574(void);
extern void fn_800FBA9C(void);
extern void fn_8013A194(void);
extern void fn_8013C38C(void);
extern void fn_801404F8(void);
extern void fn_80140500(void);
extern void fn_8014052C(void);
extern void fn_80158CA4(void);
extern void fn_80158E1C(void);
extern void fn_8016E970(void);
extern void fn_80176548(void);
extern void fn_801765D8(void);
extern void fn_80232B7C(void);
extern void fn_80239D58(void);
extern void fn_80239DAC(void);
extern void fn_8023A680(void);
extern void fn_80267B20(void);
extern void fn_80267B28(void);
extern void fn_8031A670(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F90D0(void);
extern void fn_805F9160(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9940(void);
extern void fn_80680CF8(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);

/* External data declarations */
extern u8 lbl_80749580[];
extern u8 lbl_8074959C[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F8A0;
extern u32 lbl_80884D60;
extern u32 lbl_80884D68;
extern u32 lbl_80884D6C;
extern u32 lbl_80884D74;
extern u32 lbl_80884D78;
extern u32 lbl_80884D8C;
extern u32 lbl_80884D90;
extern u32 lbl_80884D94;
extern u32 lbl_80884D98;
extern u32 lbl_80884DA4;
extern u32 lbl_80884DAC;
extern u32 lbl_80884DB0;
extern u32 lbl_80884DB4;
extern u32 lbl_80884DB8;
extern u32 lbl_80884DBC;
extern u32 lbl_80884DC0;
extern u32 lbl_80884DC4;
extern u32 lbl_80884DC8;
extern u32 lbl_80884DCC;
extern u32 lbl_80884DD0;
extern u32 lbl_80884DD4;
extern u32 lbl_80884DD8;

/* Function declarations */
void fn_80318A30(void);
void fn_80318AA4(void);
void fn_80318F90(void);
void fn_80318F98(void);
void fn_80318F9C(void);
void fn_80319090(void);
void fn_803191FC(void);
void fn_80319384(void);
void fn_80319578(void);
void fn_8031958C(void);
void fn_80319998(void);
void fn_803199A4(void);
void fn_80319C10(void);
void fn_80319C90(void);

asm void fn_80318A30(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r4, lbl_8087F8A0
    lwz r31, 0x48(r4)
    b lbl_fn_80318A30_00000050
lbl_fn_80318A30_00000024:
    mr r3, r30
    mr r4, r31
    bl fn_80318AA4
    cmpwi r3, 0x0
    beq lbl_fn_80318A30_0000004C
    mr r3, r30
    mr r4, r31
    bl fn_8031A670
    mr r3, r31
    b lbl_fn_80318A30_0000005C
lbl_fn_80318A30_0000004C:
    lwz r31, 0x14ac(r31)
lbl_fn_80318A30_00000050:
    cmpwi r31, 0x0
    bne lbl_fn_80318A30_00000024
    li r3, 0x0
lbl_fn_80318A30_0000005C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80318AA4(void)
{
    nofralloc
    stwu r1, -0x190(r1)
    mflr r0
    stw r0, 0x194(r1)
    li r0, 0x0
    stfd f31, 0x180(r1)
    psq_st f31, 0x188(r1), 0, 0
    stfd f30, 0x170(r1)
    psq_st f30, 0x178(r1), 0, 0
    stw r31, 0x16c(r1)
    mr r31, r4
    stw r30, 0x168(r1)
    mr r30, r3
    stw r29, 0x164(r1)
    lwz r6, 0x38(r4)
    rlwinm r5, r6, 0, 29, 29
    cmplwi r5, 0x4
    beq lbl_fn_80318AA4_000000C8
    clrlwi r5, r6, 31
    cmplwi r5, 0x1
    beq lbl_fn_80318AA4_000000C8
    li r0, 0x1
lbl_fn_80318AA4_000000C8:
    cmpwi r0, 0x0
    beq lbl_fn_80318AA4_00000530
    lwz r0, 0x55c(r4)
    cmpwi r0, 0x6
    bne lbl_fn_80318AA4_000001BC
    lwz r0, 0x560(r4)
    cmpwi r0, 0x1e
    bne lbl_fn_80318AA4_000001BC
    lwz r0, 0xd1c(r4)
    lwz r5, 0xf80(r4)
    cmplw r0, r3
    bne lbl_fn_80318AA4_00000530
    lbz r0, 0x1d(r5)
    cmpwi r0, 0x0
    beq lbl_fn_80318AA4_00000530
    lfs f2, 0x530(r4)
    addi r31, r1, 0xd8
    psq_l f1, 0x528(r4), 0, 0
    mr r4, r5
    psq_st f1, 0x0(r31), 0, 0
    addi r3, r1, 0x80
    lfs f0, lbl_80884DB0
    lfs f3, 0xdc(r1)
    stfs f2, 0xe0(r1)
    fadds f0, f3, f0
    stfs f0, 0xdc(r1)
    lwz r12, 0x0(r5)
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    lfs f5, 0x88(r1)
    addi r6, r1, 0x98
    lfs f4, lbl_80884DB4
    addi r5, r1, 0xe4
    lfs f0, 0x84(r1)
    mr r3, r31
    fmuls f5, f5, f4
    lfs f3, 0x80(r1)
    fmuls f6, f0, f4
    lfs f0, 0xe0(r1)
    fmuls f4, f3, f4
    lfs f3, 0xdc(r1)
    fadds f2, f0, f5
    lfs f0, 0xd8(r1)
    fadds f3, f3, f6
    stfs f4, 0x8c(r1)
    fadds f0, f0, f4
    addi r4, r30, 0x5f4
    stfs f3, 0x9c(r1)
    stfs f0, 0x98(r1)
    psq_l f1, 0x0(r6), 0, 0
    stfs f6, 0x90(r1)
    stfs f5, 0x94(r1)
    stfs f2, 0xa0(r1)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0xec(r1)
    bl fn_80051BC4
    cmpwi r3, 0x0
    beq lbl_fn_80318AA4_00000530
    li r3, 0x1
    b lbl_fn_80318AA4_00000534
lbl_fn_80318AA4_000001BC:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x78(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_80318AA4_000001E8
    mr r3, r31
    bl fn_80158CA4
    cmpwi r3, 0x0
    beq lbl_fn_80318AA4_00000468
lbl_fn_80318AA4_000001E8:
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x6
    bne lbl_fn_80318AA4_00000214
    lwz r0, 0x560(r31)
    cmpwi r0, 0x1e
    bne lbl_fn_80318AA4_00000214
    lwz r0, 0xd1c(r31)
    cmplw r0, r30
    bne lbl_fn_80318AA4_00000530
    li r3, 0x1
    b lbl_fn_80318AA4_00000534
lbl_fn_80318AA4_00000214:
    lwz r6, 0x638(r31)
    mr r4, r31
    lwz r3, lbl_8087F048
    mr r5, r30
    lfs f1, lbl_80884D60
    li r7, -0x1
    bl fn_800FBA9C
    cmpwi r3, 0x0
    blt lbl_fn_80318AA4_00000240
    li r3, 0x1
    b lbl_fn_80318AA4_00000534
lbl_fn_80318AA4_00000240:
    mr r4, r31
    addi r3, r1, 0x68
    bl fn_80158E1C
    lfs f2, 0x70(r1)
    addi r3, r1, 0x68
    lfs f0, lbl_80884D90
    addi r29, r1, 0x74
    fabs f3, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    frsp f3, f3
    stfs f2, 0x7c(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_80318AA4_0000029C
    lfs f3, 0x74(r1)
    lfs f0, lbl_80884D60
    fcmpo cr0, f3, f0
    ble lbl_fn_80318AA4_00000290
    lfs f0, lbl_80884D94
    b lbl_fn_80318AA4_00000294
lbl_fn_80318AA4_00000290:
    lfs f0, lbl_80884D98
lbl_fn_80318AA4_00000294:
    stfs f0, 0x48(r1)
    b lbl_fn_80318AA4_000002B0
lbl_fn_80318AA4_0000029C:
    frsp f2, f2
    lfs f1, 0x74(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_80318AA4_000002B0:
    lfs f0, 0x48(r1)
    addi r3, r1, 0xf0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80884D60
    addi r4, r1, 0x38
    lfs f30, 0xf8(r1)
    mr r5, r4
    lfs f31, 0xf4(r1)
    addi r3, r1, 0x120
    lfs f13, 0xf0(r1)
    lfs f12, 0x108(r1)
    lfs f11, 0x104(r1)
    lfs f10, 0x100(r1)
    lfs f9, 0x118(r1)
    lfs f8, 0x114(r1)
    lfs f7, 0x110(r1)
    lfs f6, 0x11c(r1)
    lfs f5, 0x10c(r1)
    lfs f4, 0xfc(r1)
    lfs f0, lbl_80884D78
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x7c(r1)
    stfs f3, 0x150(r1)
    stfs f3, 0x154(r1)
    stfs f3, 0x158(r1)
    stfs f0, 0x15c(r1)
    stfs f13, 0x8(r1)
    stfs f31, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f13, 0x120(r1)
    stfs f31, 0x124(r1)
    stfs f30, 0x128(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0x130(r1)
    stfs f11, 0x134(r1)
    stfs f12, 0x138(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0x140(r1)
    stfs f8, 0x144(r1)
    stfs f9, 0x148(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0x12c(r1)
    stfs f5, 0x13c(r1)
    stfs f6, 0x14c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80884D90
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80318AA4_000003CC
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80884D60
    fcmpo cr0, f3, f0
    ble lbl_fn_80318AA4_000003BC
    lfs f0, lbl_80884D94
    b lbl_fn_80318AA4_000003C0
lbl_fn_80318AA4_000003BC:
    lfs f0, lbl_80884D98
lbl_fn_80318AA4_000003C0:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_80318AA4_000003E0
lbl_fn_80318AA4_000003CC:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_80318AA4_000003E0:
    addi r3, r1, 0x44
    lfs f4, lbl_80884D60
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_80749580@ha
    psq_st f1, 0x0(r29), 0, 0
    fmr f2, f4
    lfs f0, 0x538(r31)
    lfs f3, 0x78(r1)
    stfs f2, 0x7c(r1)
    fsubs f1, f3, f0
    lfd f2, lbl_80749580@l(r3)
    stfs f4, 0x4c(r1)
    bl fn_8068AEA8
    frsp f1, f1
    lfs f0, lbl_80884DB8
    fcmpo cr0, f1, f0
    ble lbl_fn_80318AA4_0000042C
    lfs f0, lbl_80884DA4
    fsubs f1, f1, f0
lbl_fn_80318AA4_0000042C:
    lfs f0, lbl_80884DBC
    fcmpo cr0, f1, f0
    bge lbl_fn_80318AA4_00000440
    lfs f0, lbl_80884DA4
    fadds f1, f1, f0
lbl_fn_80318AA4_00000440:
    lwz r3, lbl_8087F048
    mr r4, r31
    lwz r6, 0x638(r31)
    mr r5, r30
    li r7, -0x1
    bl fn_800FBA9C
    cmpwi r3, 0x0
    blt lbl_fn_80318AA4_00000530
    li r3, 0x1
    b lbl_fn_80318AA4_00000534
lbl_fn_80318AA4_00000468:
    lwz r0, 0x12a4(r31)
    extrwi. r3, r0, 1, 25
    bne lbl_fn_80318AA4_00000488
    srwi. r0, r0, 31
    beq lbl_fn_80318AA4_00000530
    lwz r0, 0xc48(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80318AA4_00000530
lbl_fn_80318AA4_00000488:
    mr r3, r31
    addi r4, r1, 0xb0
    addi r5, r1, 0xa4
    li r6, 0x1
    bl fn_800E932C
    lfs f4, 0xac(r1)
    addi r4, r1, 0xb0
    lfs f5, lbl_80884DB4
    addi r3, r1, 0xc0
    lfs f3, 0xa8(r1)
    addi r6, r1, 0x5c
    fmuls f6, f4, f5
    lfs f4, 0xb8(r1)
    fmuls f7, f3, f5
    lfs f0, 0xa4(r1)
    lfs f3, 0xb4(r1)
    addi r5, r1, 0xcc
    fmuls f5, f0, f5
    lfs f0, 0xb0(r1)
    psq_l f1, 0x0(r4), 0, 0
    fadds f4, f4, f6
    fadds f3, f3, f7
    lfs f2, 0xb8(r1)
    fadds f0, f0, f5
    stfs f2, 0xc8(r1)
    fmr f2, f4
    addi r4, r30, 0x5f4
    stfs f0, 0x5c(r1)
    stfs f3, 0x60(r1)
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f5, 0x50(r1)
    stfs f7, 0x54(r1)
    stfs f6, 0x58(r1)
    stfs f4, 0x64(r1)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0xd4(r1)
    bl fn_80051BC4
    cmpwi r3, 0x0
    beq lbl_fn_80318AA4_00000530
    li r3, 0x1
    b lbl_fn_80318AA4_00000534
lbl_fn_80318AA4_00000530:
    li r3, 0x0
lbl_fn_80318AA4_00000534:
    lwz r0, 0x194(r1)
    psq_l f31, 0x188(r1), 0, 0
    lfd f31, 0x180(r1)
    psq_l f30, 0x178(r1), 0, 0
    lfd f30, 0x170(r1)
    lwz r31, 0x16c(r1)
    lwz r30, 0x168(r1)
    lwz r29, 0x164(r1)
    mtlr r0
    addi r1, r1, 0x190
    blr
}

asm void fn_80318F90(void)
{
    nofralloc
    lwz r3, 0xf80(r3)
    blr
}

asm void fn_80318F98(void)
{
    nofralloc
    blr
}

asm void fn_80318F9C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x14c0(r3)
    cmpwi r0, 0x5a
    ble lbl_fn_80318F9C_00000648
    li r31, 0x0
    stw r31, 0x14bc(r3)
    stw r31, 0x14c0(r3)
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
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3e9
    li r6, 0x1
    bl fn_80239DAC
    lwz r31, 0x1c84(r30)
    bl fn_80680CF8
    divw r4, r3, r31
    lwz r6, 0x7e0(r30)
    li r5, 0x1
    rlwinm r0, r6, 0, 28, 28
    cmplwi r0, 0x8
    mullw r0, r4, r31
    subf r0, r0, r3
    add r0, r31, r0
    stw r0, 0x1574(r30)
    beq lbl_fn_80318F9C_00000620
    rlwinm r0, r6, 0, 22, 22
    cmplwi r0, 0x200
    beq lbl_fn_80318F9C_00000620
    li r5, 0x0
lbl_fn_80318F9C_00000620:
    cmpwi r5, 0x0
    bne lbl_fn_80318F9C_0000063C
    lwz r0, 0x7e0(r30)
    rlwinm r3, r0, 0, 8, 8
    subis r0, r3, 0x80
    cmplwi r0, 0x0
    bne lbl_fn_80318F9C_00000648
lbl_fn_80318F9C_0000063C:
    lwz r0, 0x1574(r30)
    slwi r0, r0, 1
    stw r0, 0x1574(r30)
lbl_fn_80318F9C_00000648:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80319090(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stw r31, 0x6c(r1)
    mr r31, r3
    lwz r0, 0x14c0(r3)
    cmpwi r0, 0x1e
    blt lbl_fn_80319090_000006BC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3e9
    li r6, 0x0
    bl fn_80239DAC
    lwz r0, 0x12a4(r31)
    mr r3, r31
    lwz r4, 0x5c0(r31)
    oris r0, r0, 0x200
    clrrwi r4, r4, 1
    stw r4, 0x5c0(r31)
    ori r0, r0, 0x8000
    stw r0, 0x12a4(r31)
    bl fn_801765D8
    b lbl_fn_80319090_00000788
lbl_fn_80319090_000006BC:
    li r0, 0x0
    stw r0, 0x4c(r1)
    mr r4, r31
    addi r3, r1, 0x8
    stw r0, 0x50(r1)
    addi r5, r31, 0x528
    stw r0, 0x54(r1)
    stw r0, 0x58(r1)
    bl fn_80176548
    lis r0, 0x8000
    lwz r3, lbl_8087EE98
    lfs f1, 0x14(r1)
    ori r7, r0, 0x80
    addi r4, r1, 0x18
    addi r5, r1, 0x8
    addi r6, r31, 0x1540
    addi r8, r31, 0x5b8
    li r9, 0x0
    bl fn_8004D388
    lfs f3, 0x1544(r31)
    cmpwi r3, 0x0
    lfs f0, 0x154c(r31)
    fadds f4, f3, f0
    stfs f4, 0x1544(r31)
    beq lbl_fn_80319090_00000788
    lfs f6, lbl_80884DC0
    lfs f0, 0x1540(r31)
    lfs f3, 0x1548(r31)
    fmuls f4, f4, f6
    fmuls f5, f0, f6
    lfs f0, 0x52c(r31)
    fmuls f3, f3, f6
    stfs f4, 0x1544(r31)
    stfs f5, 0x1540(r31)
    stfs f3, 0x1548(r31)
    lfs f3, 0x2c(r1)
    fcmpo cr0, f0, f3
    bge lbl_fn_80319090_00000788
    fabs f4, f4
    stfs f3, 0x52c(r31)
    lfs f0, lbl_80884DC4
    frsp f3, f4
    fcmpo cr0, f3, f0
    bge lbl_fn_80319090_00000788
    lis r4, lbl_807C7030@ha
    addi r3, r31, 0x1540
    addi r4, r4, lbl_807C7030@l
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    stfs f2, 0x1548(r31)
    psq_st f1, 0x0(r3), 0, 0
lbl_fn_80319090_00000788:
    lfs f3, 0x528(r31)
    lfs f0, 0x1540(r31)
    lfs f5, 0x52c(r31)
    fadds f6, f3, f0
    lfs f4, 0x1544(r31)
    lfs f3, 0x530(r31)
    lfs f0, 0x1548(r31)
    fadds f4, f5, f4
    stfs f6, 0x528(r31)
    fadds f0, f3, f0
    stfs f4, 0x52c(r31)
    stfs f0, 0x530(r31)
    lwz r31, 0x6c(r1)
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_803191FC(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r3
    stw r30, 0x38(r1)
    lwz r0, 0x14c0(r3)
    cmpwi r0, 0x14
    blt lbl_fn_803191FC_000008C8
    addi r4, r3, 0x14e4
    lfs f2, 0x14ec(r3)
    psq_l f1, 0x0(r4), 0, 0
    li r0, 0x0
    psq_st f1, 0x528(r3), 0, 0
    lwz r30, 0x1c84(r3)
    stfs f2, 0x530(r3)
    stw r0, 0x1578(r3)
    bl fn_80680CF8
    divw r4, r3, r30
    lwz r6, 0x7e0(r31)
    li r5, 0x1
    rlwinm r0, r6, 0, 28, 28
    cmplwi r0, 0x8
    mullw r0, r4, r30
    subf r0, r0, r3
    add r0, r30, r0
    stw r0, 0x1574(r31)
    beq lbl_fn_803191FC_0000084C
    rlwinm r0, r6, 0, 22, 22
    cmplwi r0, 0x200
    beq lbl_fn_803191FC_0000084C
    li r5, 0x0
lbl_fn_803191FC_0000084C:
    cmpwi r5, 0x0
    bne lbl_fn_803191FC_00000868
    lwz r0, 0x7e0(r31)
    rlwinm r3, r0, 0, 8, 8
    subis r0, r3, 0x80
    cmplwi r0, 0x0
    bne lbl_fn_803191FC_00000874
lbl_fn_803191FC_00000868:
    lwz r0, 0x1574(r31)
    slwi r0, r0, 1
    stw r0, 0x1574(r31)
lbl_fn_803191FC_00000874:
    li r30, 0x0
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
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3e9
    li r6, 0x1
    bl fn_80239DAC
    b lbl_fn_803191FC_0000093C
lbl_fn_803191FC_000008C8:
    lfs f3, 0x14ec(r3)
    addi r4, r1, 0x20
    lfs f5, 0x530(r3)
    lfs f0, 0x14e8(r3)
    fsubs f9, f3, f5
    lfs f4, 0x52c(r3)
    lfs f6, 0x14f0(r3)
    fsubs f7, f0, f4
    lfs f3, 0x14e4(r3)
    fmuls f8, f9, f6
    lfs f0, 0x528(r3)
    stfs f7, 0x18(r1)
    fmuls f7, f7, f6
    fadds f2, f8, f5
    fsubs f3, f3, f0
    stfs f9, 0x1c(r1)
    stfs f3, 0x14(r1)
    fmuls f5, f3, f6
    fadds f3, f7, f4
    stfs f7, 0xc(r1)
    fadds f0, f5, f0
    stfs f3, 0x24(r1)
    stfs f0, 0x20(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f5, 0x8(r1)
    stfs f8, 0x10(r1)
    stfs f2, 0x28(r1)
    psq_st f1, 0x528(r3), 0, 0
    stfs f2, 0x530(r3)
lbl_fn_803191FC_0000093C:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80319384(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    lfs f4, lbl_80884DAC
    li r4, 0x1
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r3
    stw r30, 0x38(r1)
    lwz r5, 0x7e0(r3)
    rlwinm r0, r5, 0, 28, 28
    cmplwi r0, 0x8
    beq lbl_fn_80319384_00000994
    rlwinm r0, r5, 0, 22, 22
    cmplwi r0, 0x200
    beq lbl_fn_80319384_00000994
    li r4, 0x0
lbl_fn_80319384_00000994:
    cmpwi r4, 0x0
    bne lbl_fn_80319384_000009B0
    lwz r0, 0x7e0(r3)
    rlwinm r4, r0, 0, 8, 8
    subis r0, r4, 0x80
    cmplwi r0, 0x0
    bne lbl_fn_80319384_000009B8
lbl_fn_80319384_000009B0:
    lfs f0, lbl_80884D74
    fmuls f4, f4, f0
lbl_fn_80319384_000009B8:
    lwz r0, 0x7e0(r3)
    rlwinm r4, r0, 0, 7, 7
    subis r0, r4, 0x100
    cmplwi r0, 0x0
    bne lbl_fn_80319384_000009D4
    lfs f0, lbl_80884D6C
    fmuls f4, f4, f0
lbl_fn_80319384_000009D4:
    lwz r4, lbl_8087EFA8
    lfs f3, 0x151c(r3)
    lfs f5, 0x3a4(r4)
    lfs f0, lbl_80884D78
    fmadds f12, f4, f5, f3
    stfs f12, 0x151c(r3)
    fcmpo cr0, f12, f0
    bge lbl_fn_80319384_000009F8
    b lbl_fn_80319384_000009FC
lbl_fn_80319384_000009F8:
    fmr f12, f0
lbl_fn_80319384_000009FC:
    lfs f0, 0x1518(r3)
    addi r4, r1, 0x8
    lfs f6, 0x150c(r3)
    lfs f3, 0x1514(r3)
    fsubs f7, f0, f6
    lfs f5, 0x1508(r3)
    lfs f0, 0x1510(r3)
    fsubs f8, f3, f5
    lfs f4, 0x1504(r3)
    fmuls f10, f7, f12
    fsubs f9, f0, f4
    lfs f3, 0x151c(r3)
    fmuls f11, f8, f12
    fadds f2, f10, f6
    lfs f0, lbl_80884D78
    fmuls f6, f9, f12
    fadds f5, f11, f5
    stfs f9, 0x14(r1)
    fcmpo cr0, f3, f0
    fadds f4, f6, f4
    stfs f5, 0xc(r1)
    stfs f4, 0x8(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f8, 0x18(r1)
    stfs f7, 0x1c(r1)
    stfs f6, 0x20(r1)
    stfs f11, 0x24(r1)
    stfs f10, 0x28(r1)
    stfs f2, 0x10(r1)
    psq_st f1, 0x528(r3), 0, 0
    stfs f2, 0x530(r3)
    cror eq, gt, eq
    mfcr r0
    extrwi. r0, r0, 1, 2
    beq lbl_fn_80319384_00000B30
    lwz r0, 0x58c(r3)
    cmpwi r0, 0xc
    bne lbl_fn_80319384_00000AD8
    li r0, 0x0
    stw r0, 0x14bc(r3)
    stw r0, 0x14c0(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0xb
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3e8
    li r6, 0x1
    bl fn_80239DAC
    b lbl_fn_80319384_00000B28
lbl_fn_80319384_00000AD8:
    li r30, 0x0
    stw r30, 0x14bc(r3)
    stw r30, 0x14c0(r3)
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
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3e9
    li r6, 0x1
    bl fn_80239DAC
lbl_fn_80319384_00000B28:
    li r0, 0x0
    stw r0, 0x1520(r31)
lbl_fn_80319384_00000B30:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80319578(void)
{
    nofralloc
    lwz r0, 0x14c0(r3)
    cmpwi r0, 0x5
    blelr
    b fn_80319C90
    blr
}

asm void fn_8031958C(void)
{
    nofralloc
    stwu r1, -0x1f0(r1)
    mflr r0
    stw r0, 0x1f4(r1)
    stfd f31, 0x1e0(r1)
    psq_st f31, 0x1e8(r1), 0, 0
    stw r31, 0x1dc(r1)
    mr r31, r3
    lwz r0, 0x14c0(r3)
    cmpwi r0, 0x5a
    ble lbl_fn_8031958C_00000BE8
    bl fn_80319C10
    lwz r3, 0x15b4(r31)
    bl fn_80267B20
    cmpwi r3, 0x6
    bne lbl_fn_8031958C_00000BBC
    lwz r3, 0x15b4(r31)
    bl fn_80267B28
    cmpwi r3, 0x8c
    bne lbl_fn_8031958C_00000BBC
    lwz r3, 0x15b4(r31)
    bl fn_80318F90
    bl fn_80319998
    li r0, 0x0
    stw r0, 0x15b4(r31)
lbl_fn_8031958C_00000BBC:
    bl fn_800F7FA0
    mr r4, r31
    li r5, 0x3e8
    li r6, 0x1
    bl fn_80239DAC
    bl fn_800F7FA0
    mr r4, r31
    li r5, 0x3e9
    li r6, 0x1
    bl fn_80239DAC
    b lbl_fn_8031958C_00000F4C
lbl_fn_8031958C_00000BE8:
    addi r3, r1, 0xe4
    bl fn_80057A64
    lwz r3, 0x15b4(r31)
    bl fn_80267B20
    cmpwi r3, 0x6
    bne lbl_fn_8031958C_00000D24
    lwz r3, 0x15b4(r31)
    bl fn_80267B28
    cmpwi r3, 0x8c
    bne lbl_fn_8031958C_00000D24
    lwz r3, 0x15b4(r31)
    bl fn_8013C38C
    mr r4, r3
    addi r3, r1, 0xe4
    bl fn_8000D124
    lfs f1, 0xe8(r1)
    addi r3, r1, 0x9c
    lfs f0, lbl_80884DC8
    fadds f0, f1, f0
    stfs f0, 0xe8(r1)
    lwz r4, 0x15b4(r31)
    bl fn_8014052C
    lfs f1, lbl_80884DCC
    addi r3, r1, 0xa8
    addi r4, r1, 0x9c
    bl fn_800F72CC
    addi r3, r1, 0xe4
    addi r4, r1, 0xa8
    bl fn_80012C88
    lfs f1, 0x5b0(r31)
    addi r3, r1, 0x78
    addi r4, r31, 0x155c
    bl fn_800F72CC
    addi r3, r1, 0x84
    addi r4, r31, 0x528
    addi r5, r1, 0x78
    bl fn_80013410
    addi r3, r1, 0x90
    addi r4, r1, 0xe4
    addi r5, r1, 0x84
    bl fn_80013338
    addi r3, r31, 0x155c
    addi r4, r1, 0x90
    bl fn_8000D124
    addi r3, r31, 0x155c
    bl fn_8000D3A4
    lfs f0, lbl_80884DD0
    addi r3, r31, 0x155c
    fdivs f31, f1, f0
    bl fn_800F7FF0
    addi r3, r1, 0xd8
    addi r4, r31, 0x155c
    bl fn_80011034
    lfs f1, 0x5b0(r31)
    addi r3, r1, 0x60
    addi r4, r31, 0x155c
    bl fn_800F72CC
    addi r3, r1, 0x6c
    addi r4, r31, 0x528
    addi r5, r1, 0x60
    bl fn_80013410
    addi r3, r1, 0x150
    addi r4, r1, 0x6c
    bl fn_800F80A8
    addi r3, r31, 0x15b8
    addi r4, r1, 0x150
    bl fn_8008CD1C
    addi r3, r31, 0x15b8
    addi r4, r1, 0xd8
    bl fn_800F80B8
    addi r3, r31, 0x15e8
    addi r4, r31, 0x15b8
    bl fn_8008CD1C
    lfs f1, lbl_80884D78
    fmr f3, f31
    addi r3, r31, 0x15b8
    fmr f2, f1
    bl fn_800F8290
    b lbl_fn_8031958C_00000E08
lbl_fn_8031958C_00000D24:
    lwz r0, 0x14c0(r31)
    li r4, 0x3c
    cmpwi r0, 0x3c
    blt lbl_fn_8031958C_00000D38
    mr r4, r0
lbl_fn_8031958C_00000D38:
    lis r3, 0x6666
    stw r4, 0x14c0(r31)
    addi r0, r3, 0x6667
    mulhw r0, r0, r4
    srawi r0, r0, 2
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r0, r0, 0xa
    subf. r0, r0, r4
    bne lbl_fn_8031958C_00000D8C
    bl fn_8013A194
    lwz r5, 0x157c(r31)
    mr r4, r31
    lfs f1, lbl_80884D60
    addi r6, r31, 0x528
    lfs f2, lbl_80884D78
    addi r7, r31, 0x155c
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_800F8574
lbl_fn_8031958C_00000D8C:
    addi r3, r1, 0x180
    bl fn_80140500
    addi r3, r1, 0xcc
    addi r4, r31, 0x528
    bl fn_8001047C
    lfs f1, lbl_80884DD4
    addi r3, r1, 0x54
    addi r4, r31, 0x155c
    bl fn_800F72CC
    addi r3, r1, 0xc0
    addi r4, r1, 0xcc
    addi r5, r1, 0x54
    bl fn_80013410
    bl fn_801404F8
    lis r7, 0x8000
    addi r4, r1, 0x180
    addi r5, r1, 0xcc
    addi r6, r1, 0xc0
    addi r7, r7, 0x4
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_8031958C_00000DFC
    addi r3, r1, 0xe4
    addi r4, r1, 0x184
    bl fn_8000D124
    b lbl_fn_8031958C_00000E08
lbl_fn_8031958C_00000DFC:
    addi r3, r1, 0xe4
    addi r4, r1, 0xc0
    bl fn_8000D124
lbl_fn_8031958C_00000E08:
    lfs f1, 0x5b0(r31)
    addi r3, r1, 0x30
    addi r4, r31, 0x155c
    bl fn_800F72CC
    addi r3, r1, 0x3c
    addi r4, r31, 0x528
    addi r5, r1, 0x30
    bl fn_80013410
    addi r3, r1, 0x48
    addi r4, r1, 0xe4
    addi r5, r1, 0x3c
    bl fn_80013338
    addi r3, r31, 0x155c
    addi r4, r1, 0x48
    bl fn_8000D124
    addi r3, r31, 0x155c
    bl fn_8000D3A4
    lfs f0, lbl_80884DD0
    addi r3, r31, 0x155c
    fdivs f31, f1, f0
    bl fn_800F7FF0
    addi r3, r1, 0xb4
    addi r4, r31, 0x155c
    bl fn_80011034
    lfs f1, 0x5b0(r31)
    addi r3, r1, 0x18
    addi r4, r31, 0x155c
    bl fn_800F72CC
    addi r3, r1, 0x24
    addi r4, r31, 0x528
    addi r5, r1, 0x18
    bl fn_80013410
    addi r3, r1, 0x120
    addi r4, r1, 0x24
    bl fn_800F80A8
    addi r3, r31, 0x15b8
    addi r4, r1, 0x120
    bl fn_8008CD1C
    addi r3, r31, 0x15b8
    addi r4, r1, 0xb4
    bl fn_800F80B8
    addi r3, r31, 0x15e8
    addi r4, r31, 0x15b8
    bl fn_8008CD1C
    lfs f1, lbl_80884D78
    fmr f3, f31
    addi r3, r31, 0x15b8
    fmr f2, f1
    bl fn_800F8290
    addi r3, r1, 0xf0
    addi r4, r1, 0xe4
    bl fn_800F80A8
    addi r3, r31, 0x1618
    addi r4, r1, 0xf0
    bl fn_8008CD1C
    bl fn_800F7FA0
    mr r4, r31
    li r5, 0x3e9
    bl fn_80239D58
    cmpwi r3, 0x0
    bne lbl_fn_8031958C_00000F4C
    bl fn_800F7FA0
    mr r4, r31
    li r5, 0x3e9
    bl fn_800F7FA8
    bl fn_800F7FA0
    li r0, 0x0
    stw r0, 0x8(r1)
    li r0, -0x1
    lfs f1, lbl_80884D78
    stw r0, 0xc(r1)
    li r0, 0x1
    addi r4, r31, 0x1584
    addi r7, r31, 0x1618
    stw r0, 0x10(r1)
    li r5, -0x1
    li r6, 0x5
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_8023A680
lbl_fn_8031958C_00000F4C:
    lwz r0, 0x1f4(r1)
    psq_l f31, 0x1e8(r1), 0, 0
    lfd f31, 0x1e0(r1)
    lwz r31, 0x1dc(r1)
    mtlr r0
    addi r1, r1, 0x1f0
    blr
}

asm void fn_80319998(void)
{
    nofralloc
    li r0, 0x1
    stw r0, 0x4c(r3)
    blr
}

asm void fn_803199A4(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    lfs f0, lbl_80884D6C
    stw r0, 0x94(r1)
    stw r31, 0x8c(r1)
    mr r31, r3
    stw r30, 0x88(r1)
    stw r29, 0x84(r1)
    stw r28, 0x80(r1)
    lfs f4, 0x1534(r3)
    lfs f3, 0x1538(r3)
    fsubs f3, f4, f3
    fabs f3, f3
    frsp f3, f3
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_803199A4_0000100C
    li r30, 0x0
    stw r30, 0x14bc(r3)
    stw r30, 0x14c0(r3)
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
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3e9
    li r6, 0x1
    bl fn_80239DAC
    b lbl_fn_803199A4_000011C0
lbl_fn_803199A4_0000100C:
    lwz r5, 0x7e0(r3)
    li r4, 0x1
    lfs f4, lbl_80884DD8
    rlwinm r0, r5, 0, 28, 28
    cmplwi r0, 0x8
    beq lbl_fn_803199A4_00001034
    rlwinm r0, r5, 0, 22, 22
    cmplwi r0, 0x200
    beq lbl_fn_803199A4_00001034
    li r4, 0x0
lbl_fn_803199A4_00001034:
    cmpwi r4, 0x0
    bne lbl_fn_803199A4_00001050
    lwz r0, 0x7e0(r3)
    rlwinm r4, r0, 0, 8, 8
    subis r0, r4, 0x80
    cmplwi r0, 0x0
    bne lbl_fn_803199A4_00001058
lbl_fn_803199A4_00001050:
    lfs f0, lbl_80884D74
    fmuls f4, f4, f0
lbl_fn_803199A4_00001058:
    lwz r0, 0x7e0(r3)
    rlwinm r4, r0, 0, 7, 7
    subis r0, r4, 0x100
    cmplwi r0, 0x0
    bne lbl_fn_803199A4_00001074
    lfs f0, lbl_80884D6C
    fmuls f4, f4, f0
lbl_fn_803199A4_00001074:
    lfs f0, 0x1538(r3)
    addi r5, r3, 0x1528
    lfs f3, 0x1534(r3)
    addi r30, r1, 0x38
    lfs f2, 0x1530(r3)
    li r4, 0x79
    fsubs f0, f0, f3
    psq_l f1, 0x0(r5), 0, 0
    fmadds f0, f4, f0, f3
    stfs f0, 0x1534(r3)
    addi r3, r1, 0x48
    psq_st f1, 0x0(r30), 0, 0
    fmr f1, f0
    stfs f2, 0x40(r1)
    bl fn_805F8E70
    mr r4, r30
    mr r5, r30
    addi r3, r1, 0x48
    bl fn_805F93C0
    lwz r29, 0x14b8(r31)
    lis r4, lbl_8074959C@ha
    addi r4, r4, lbl_8074959C@l
    addi r30, r1, 0x20
    addi r28, r29, 0xb0
    li r5, 0x0
    mr r3, r28
    addi r4, r4, 0x105
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_803199A4_000010F4
    li r4, 0x0
    b lbl_fn_803199A4_00001100
lbl_fn_803199A4_000010F4:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r28)
    add r4, r3, r0
lbl_fn_803199A4_00001100:
    lfs f0, lbl_80884D60
    cmpwi r4, 0x0
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    stfs f0, 0x28(r1)
    beq lbl_fn_803199A4_00001144
    lfs f3, 0x1c(r4)
    addi r3, r1, 0x8
    lfs f0, 0xc(r4)
    stfs f0, 0x8(r1)
    lfs f2, 0x2c(r4)
    stfs f3, 0xc(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x28(r1)
    b lbl_fn_803199A4_00001164
lbl_fn_803199A4_00001144:
    psq_l f1, 0x528(r29), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    lfs f2, 0x530(r29)
    lfs f3, 0x24(r1)
    lfs f0, lbl_80884D8C
    stfs f2, 0x28(r1)
    fadds f0, f3, f0
    stfs f0, 0x24(r1)
lbl_fn_803199A4_00001164:
    lfs f5, 0x40(r1)
    addi r3, r1, 0x2c
    lfs f4, lbl_80884D68
    lfs f0, 0x3c(r1)
    fmuls f5, f5, f4
    lfs f3, 0x38(r1)
    fmuls f6, f0, f4
    lfs f0, 0x28(r1)
    fmuls f4, f3, f4
    lfs f3, 0x24(r1)
    fadds f2, f0, f5
    lfs f0, 0x20(r1)
    fadds f3, f3, f6
    stfs f4, 0x14(r1)
    fadds f0, f0, f4
    stfs f3, 0x30(r1)
    stfs f0, 0x2c(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f6, 0x18(r1)
    stfs f5, 0x1c(r1)
    stfs f2, 0x34(r1)
    psq_st f1, 0x528(r31), 0, 0
    stfs f2, 0x530(r31)
lbl_fn_803199A4_000011C0:
    lwz r0, 0x94(r1)
    lwz r31, 0x8c(r1)
    lwz r30, 0x88(r1)
    lwz r29, 0x84(r1)
    lwz r28, 0x80(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_80319C10(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    stw r31, 0x14bc(r3)
    stw r31, 0x14c0(r3)
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
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3e9
    li r6, 0x1
    bl fn_80239DAC
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80319C90(void)
{
    nofralloc
    stwu r1, -0x3e0(r1)
    mflr r0
    stw r0, 0x3e4(r1)
    stfd f31, 0x3d0(r1)
    psq_st f31, 0x3d8(r1), 0, 0
    stfd f30, 0x3c0(r1)
    psq_st f30, 0x3c8(r1), 0, 0
    stfd f29, 0x3b0(r1)
    psq_st f29, 0x3b8(r1), 0, 0
    stfd f28, 0x3a0(r1)
    psq_st f28, 0x3a8(r1), 0, 0
    stfd f27, 0x390(r1)
    psq_st f27, 0x398(r1), 0, 0
    stfd f26, 0x380(r1)
    psq_st f26, 0x388(r1), 0, 0
    stfd f25, 0x370(r1)
    psq_st f25, 0x378(r1), 0, 0
    stw r31, 0x36c(r1)
    mr r31, r3
    stw r30, 0x368(r1)
    stw r29, 0x364(r1)
    stw r28, 0x360(r1)
    lwz r28, 0x1c84(r3)
    bl fn_80680CF8
    divw r4, r3, r28
    lwz r6, 0x7e0(r31)
    li r5, 0x1
    rlwinm r0, r6, 0, 28, 28
    cmplwi r0, 0x8
    mullw r0, r4, r28
    subf r0, r0, r3
    add r0, r28, r0
    stw r0, 0x1574(r31)
    beq lbl_fn_80319C90_000012F8
    rlwinm r0, r6, 0, 22, 22
    cmplwi r0, 0x200
    beq lbl_fn_80319C90_000012F8
    li r5, 0x0
lbl_fn_80319C90_000012F8:
    cmpwi r5, 0x0
    bne lbl_fn_80319C90_00001314
    lwz r0, 0x7e0(r31)
    rlwinm r3, r0, 0, 8, 8
    subis r0, r3, 0x80
    cmplwi r0, 0x0
    bne lbl_fn_80319C90_00001320
lbl_fn_80319C90_00001314:
    lwz r0, 0x1574(r31)
    slwi r0, r0, 1
    stw r0, 0x1574(r31)
lbl_fn_80319C90_00001320:
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3e8
    li r6, 0x1
    bl fn_80239DAC
    li r0, 0x0
    stw r0, 0x14bc(r31)
    stw r0, 0x14c0(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0x9
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lwz r29, 0x14b8(r31)
    lis r4, lbl_8074959C@ha
    lfs f2, 0x530(r31)
    addi r5, r31, 0x1568
    psq_l f1, 0x528(r31), 0, 0
    addi r4, r4, lbl_8074959C@l
    addi r30, r29, 0xb0
    psq_st f1, 0x0(r5), 0, 0
    mr r3, r30
    addi r28, r1, 0xcc
    stfs f2, 0x1570(r31)
    addi r4, r4, 0x105
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80319C90_000013A8
    li r4, 0x0
    b lbl_fn_80319C90_000013B4
lbl_fn_80319C90_000013A8:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r30)
    add r4, r3, r0
lbl_fn_80319C90_000013B4:
    lfs f0, lbl_80884D60
    cmpwi r4, 0x0
    stfs f0, 0xcc(r1)
    stfs f0, 0xd0(r1)
    stfs f0, 0xd4(r1)
    beq lbl_fn_80319C90_000013F8
    lfs f7, 0x1c(r4)
    addi r3, r1, 0x6c
    lfs f0, 0xc(r4)
    stfs f0, 0x6c(r1)
    lfs f2, 0x2c(r4)
    stfs f7, 0x70(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x74(r1)
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0xd4(r1)
    b lbl_fn_80319C90_00001418
lbl_fn_80319C90_000013F8:
    psq_l f1, 0x528(r29), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    lfs f2, 0x530(r29)
    lfs f7, 0xd0(r1)
    lfs f0, lbl_80884D8C
    stfs f2, 0xd4(r1)
    fadds f0, f7, f0
    stfs f0, 0xd0(r1)
lbl_fn_80319C90_00001418:
    lfs f7, 0xd4(r1)
    addi r3, r31, 0x155c
    lfs f0, 0x530(r31)
    addi r5, r1, 0xb4
    lfs f9, 0xd0(r1)
    mr r4, r3
    fsubs f2, f7, f0
    lfs f8, 0x52c(r31)
    lfs f7, 0xcc(r1)
    lfs f0, 0x528(r31)
    fsubs f8, f9, f8
    stfs f2, 0xbc(r1)
    fsubs f0, f7, f0
    stfs f8, 0xb8(r1)
    stfs f0, 0xb4(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x1564(r31)
    bl fn_805F98D0
    lfs f9, 0x5b0(r31)
    li r4, 0x0
    lfs f8, 0x1564(r31)
    addi r5, r1, 0xa8
    lfs f7, 0x1560(r31)
    addi r3, r31, 0x155c
    fmuls f10, f8, f9
    lfs f8, 0x530(r31)
    fmuls f11, f7, f9
    lfs f0, 0x155c(r31)
    lfs f7, 0x528(r31)
    fmuls f9, f0, f9
    lfs f0, 0x52c(r31)
    fadds f8, f8, f10
    lwz r0, 0x14b8(r31)
    fadds f12, f0, f11
    lfs f0, 0xd4(r1)
    fadds f13, f7, f9
    lfs f7, 0xd0(r1)
    fsubs f2, f0, f8
    lfs f0, 0xcc(r1)
    fsubs f7, f7, f12
    stw r4, 0x1578(r31)
    fsubs f0, f0, f13
    stfs f7, 0xac(r1)
    stfs f0, 0xa8(r1)
    psq_l f1, 0x0(r5), 0, 0
    stw r0, 0x15b4(r31)
    stfs f9, 0x90(r1)
    stfs f11, 0x94(r1)
    stfs f10, 0x98(r1)
    stfs f13, 0x9c(r1)
    stfs f12, 0xa0(r1)
    stfs f8, 0xa4(r1)
    stfs f2, 0xb0(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x1564(r31)
    bl fn_805F9940
    lfs f0, lbl_80884DD0
    addi r3, r31, 0x155c
    mr r4, r3
    fdivs f31, f1, f0
    bl fn_805F98D0
    lfs f2, 0x1564(r31)
    addi r3, r31, 0x155c
    lfs f0, lbl_80884D90
    addi r28, r1, 0xc0
    fabs f7, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    frsp f7, f7
    stfs f2, 0xc8(r1)
    fcmpo cr0, f7, f0
    bge lbl_fn_80319C90_00001560
    lfs f7, 0xc0(r1)
    lfs f0, lbl_80884D60
    fcmpo cr0, f7, f0
    ble lbl_fn_80319C90_00001554
    lfs f0, lbl_80884D94
    b lbl_fn_80319C90_00001558
lbl_fn_80319C90_00001554:
    lfs f0, lbl_80884D98
lbl_fn_80319C90_00001558:
    stfs f0, 0x64(r1)
    b lbl_fn_80319C90_00001574
lbl_fn_80319C90_00001560:
    frsp f2, f2
    lfs f1, 0xc0(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x64(r1)
lbl_fn_80319C90_00001574:
    lfs f0, 0x64(r1)
    addi r3, r1, 0x2b8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f7, lbl_80884D60
    addi r4, r1, 0x54
    lfs f25, 0x2c0(r1)
    mr r5, r4
    lfs f26, 0x2bc(r1)
    addi r3, r1, 0x2e8
    lfs f27, 0x2b8(r1)
    lfs f28, 0x2d0(r1)
    lfs f29, 0x2cc(r1)
    lfs f30, 0x2c8(r1)
    lfs f13, 0x2e0(r1)
    lfs f12, 0x2dc(r1)
    lfs f11, 0x2d8(r1)
    lfs f10, 0x2e4(r1)
    lfs f9, 0x2d4(r1)
    lfs f8, 0x2c4(r1)
    lfs f0, lbl_80884D78
    psq_l f1, 0x0(r28), 0, 0
    lfs f2, 0xc8(r1)
    stfs f7, 0x318(r1)
    stfs f7, 0x31c(r1)
    stfs f7, 0x320(r1)
    stfs f0, 0x324(r1)
    stfs f27, 0x24(r1)
    stfs f26, 0x28(r1)
    stfs f25, 0x2c(r1)
    stfs f27, 0x2e8(r1)
    stfs f26, 0x2ec(r1)
    stfs f25, 0x2f0(r1)
    stfs f30, 0x30(r1)
    stfs f29, 0x34(r1)
    stfs f28, 0x38(r1)
    stfs f30, 0x2f8(r1)
    stfs f29, 0x2fc(r1)
    stfs f28, 0x300(r1)
    stfs f11, 0x3c(r1)
    stfs f12, 0x40(r1)
    stfs f13, 0x44(r1)
    stfs f11, 0x308(r1)
    stfs f12, 0x30c(r1)
    stfs f13, 0x310(r1)
    stfs f8, 0x48(r1)
    stfs f9, 0x4c(r1)
    stfs f10, 0x50(r1)
    stfs f8, 0x2f4(r1)
    stfs f9, 0x304(r1)
    stfs f10, 0x314(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x5c(r1)
    bl fn_805F9750
    lfs f2, 0x5c(r1)
    lfs f0, lbl_80884D90
    fabs f7, f2
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_80319C90_00001690
    lfs f7, 0x58(r1)
    lfs f0, lbl_80884D60
    fcmpo cr0, f7, f0
    ble lbl_fn_80319C90_00001680
    lfs f0, lbl_80884D94
    b lbl_fn_80319C90_00001684
lbl_fn_80319C90_00001680:
    lfs f0, lbl_80884D98
lbl_fn_80319C90_00001684:
    fneg f0, f0
    stfs f0, 0x60(r1)
    b lbl_fn_80319C90_000016A4
lbl_fn_80319C90_00001690:
    lfs f1, 0x58(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x60(r1)
lbl_fn_80319C90_000016A4:
    lfs f9, 0x5b0(r31)
    addi r4, r1, 0x60
    lfs f8, 0x1564(r31)
    addi r3, r1, 0x328
    lfs f7, 0x1560(r31)
    fmuls f10, f8, f9
    lfs f0, 0x155c(r31)
    fmuls f11, f7, f9
    lfs f8, lbl_80884D60
    fmuls f9, f0, f9
    lfs f0, 0x530(r31)
    fadds f3, f0, f10
    lfs f7, 0x52c(r31)
    lfs f0, 0x528(r31)
    fmr f2, f8
    fadds f7, f7, f11
    psq_l f1, 0x0(r4), 0, 0
    fadds f0, f0, f9
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0xc8(r1)
    fmr f2, f7
    fmr f1, f0
    stfs f8, 0x68(r1)
    stfs f9, 0x78(r1)
    stfs f11, 0x7c(r1)
    stfs f10, 0x80(r1)
    stfs f0, 0x84(r1)
    stfs f7, 0x88(r1)
    stfs f3, 0x8c(r1)
    bl fn_805F90D0
    addi r3, r1, 0x328
    addi r28, r31, 0x15b8
    psq_l f1, 0x0(r3), 0, 0
    addi r29, r1, 0x168
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    lfs f8, lbl_80884D60
    lfs f0, 0xc8(r1)
    psq_st f1, 0x0(r28), 0, 0
    fcmpu cr0, f8, f0
    lfs f7, lbl_80884D78
    psq_st f2, 0x8(r28), 0, 0
    psq_st f3, 0x10(r28), 0, 0
    psq_st f4, 0x18(r28), 0, 0
    psq_st f5, 0x20(r28), 0, 0
    psq_st f6, 0x28(r28), 0, 0
    stfs f8, 0x194(r1)
    stfs f8, 0x18c(r1)
    stfs f8, 0x188(r1)
    stfs f8, 0x184(r1)
    stfs f8, 0x180(r1)
    stfs f8, 0x178(r1)
    stfs f8, 0x174(r1)
    stfs f8, 0x170(r1)
    stfs f8, 0x16c(r1)
    stfs f7, 0x190(r1)
    stfs f7, 0x17c(r1)
    stfs f7, 0x168(r1)
    beq lbl_fn_80319C90_000017F0
    fmr f1, f0
    addi r3, r1, 0x258
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0x258
    addi r5, r1, 0x288
    bl fn_805F89F0
    addi r3, r1, 0x288
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
lbl_fn_80319C90_000017F0:
    lfs f0, lbl_80884D60
    lfs f1, 0xc4(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_80319C90_00001850
    addi r3, r1, 0x1f8
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0x1f8
    addi r5, r1, 0x228
    bl fn_805F89F0
    addi r3, r1, 0x228
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
lbl_fn_80319C90_00001850:
    lfs f0, lbl_80884D60
    lfs f1, 0xc0(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_80319C90_000018B0
    addi r3, r1, 0x198
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0x198
    addi r5, r1, 0x1c8
    bl fn_805F89F0
    addi r3, r1, 0x1c8
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
lbl_fn_80319C90_000018B0:
    mr r3, r28
    mr r4, r29
    addi r5, r1, 0x138
    bl fn_805F89F0
    addi r4, r1, 0x138
    lfs f0, lbl_80884D78
    psq_l f2, 0x8(r4), 0, 0
    addi r5, r31, 0x15e8
    psq_l f3, 0x10(r4), 0, 0
    addi r29, r31, 0x15b8
    psq_l f4, 0x18(r4), 0, 0
    addi r3, r1, 0xd8
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    fmr f1, f0
    psq_st f2, 0x8(r28), 0, 0
    psq_st f2, 0x8(r5), 0, 0
    fmr f2, f1
    psq_st f3, 0x10(r28), 0, 0
    psq_st f3, 0x10(r5), 0, 0
    fmr f3, f31
    psq_st f4, 0x18(r28), 0, 0
    psq_st f5, 0x20(r28), 0, 0
    psq_st f6, 0x28(r28), 0, 0
    psq_st f4, 0x18(r5), 0, 0
    psq_st f5, 0x20(r5), 0, 0
    psq_st f6, 0x28(r5), 0, 0
    stfs f0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f31, 0x20(r1)
    bl fn_805F9160
    mr r3, r29
    addi r4, r1, 0xd8
    addi r5, r1, 0x108
    bl fn_805F89F0
    addi r5, r1, 0x108
    mr r3, r31
    psq_l f1, 0x0(r5), 0, 0
    li r4, 0x3e8
    psq_l f2, 0x8(r5), 0, 0
    psq_l f3, 0x10(r5), 0, 0
    psq_l f4, 0x18(r5), 0, 0
    psq_l f5, 0x20(r5), 0, 0
    psq_l f6, 0x28(r5), 0, 0
    psq_st f6, 0x28(r29), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    bl fn_80232B7C
    li r28, 0x0
    stw r28, 0x8(r1)
    li r29, -0x1
    li r30, 0x1
    stw r29, 0xc(r1)
    addi r4, r31, 0x159c
    lfs f1, lbl_80884D78
    addi r7, r31, 0x15b8
    stw r30, 0x10(r1)
    li r5, -0x1
    li r6, 0x5
    li r8, 0x0
    lwz r3, lbl_8087F3C0
    li r9, 0x0
    li r10, 0x0
    bl fn_8023A680
    stw r28, 0x8(r1)
    addi r4, r31, 0x15a8
    lfs f1, lbl_80884D78
    addi r7, r31, 0x15e8
    stw r29, 0xc(r1)
    li r5, -0x1
    li r6, 0x5
    li r8, 0x0
    stw r30, 0x10(r1)
    li r9, 0x0
    li r10, 0x0
    lwz r3, lbl_8087F3C0
    bl fn_8023A680
    lwz r0, 0x3e4(r1)
    psq_l f31, 0x3d8(r1), 0, 0
    lfd f31, 0x3d0(r1)
    psq_l f30, 0x3c8(r1), 0, 0
    lfd f30, 0x3c0(r1)
    psq_l f29, 0x3b8(r1), 0, 0
    lfd f29, 0x3b0(r1)
    psq_l f28, 0x3a8(r1), 0, 0
    lfd f28, 0x3a0(r1)
    psq_l f27, 0x398(r1), 0, 0
    lfd f27, 0x390(r1)
    psq_l f26, 0x388(r1), 0, 0
    lfd f26, 0x380(r1)
    psq_l f25, 0x378(r1), 0, 0
    lfd f25, 0x370(r1)
    lwz r31, 0x36c(r1)
    lwz r30, 0x368(r1)
    lwz r29, 0x364(r1)
    lwz r28, 0x360(r1)
    mtlr r0
    addi r1, r1, 0x3e0
    blr
}
