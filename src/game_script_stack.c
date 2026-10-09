#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_15(void);
extern void _restgpr_24(void);
extern void _restgpr_25(void);
extern void _savegpr_15(void);
extern void _savegpr_24(void);
extern void _savegpr_25(void);
extern void dtor_80084684(void);
extern void fn_8004ED34(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800D246C(void);
extern void fn_800DD3FC(void);
extern void fn_800EB7A0(void);
extern void fn_800EE360(void);
extern void fn_800F8548(void);
extern void fn_80105BD8(void);
extern void fn_80109828(void);
extern void fn_8010CB2C(void);
extern void fn_8012D8B8(void);
extern void fn_8013322C(void);
extern void fn_8013655C(void);
extern void fn_80144710(void);
extern void fn_80145334(void);
extern void fn_8014C540(void);
extern void fn_8015495C(void);
extern void fn_801603CC(void);
extern void fn_8016DA4C(void);
extern void fn_8016E970(void);
extern void fn_8017547C(void);
extern void fn_801765D8(void);
extern void fn_80176ACC(void);
extern void fn_80178A6C(void);
extern void fn_80219558(void);
extern void fn_80232B7C(void);
extern void fn_802377B8(void);
extern void fn_8023780C(void);
extern void fn_8023781C(void);
extern void fn_80237874(void);
extern void fn_80239DAC(void);
extern void fn_8023A8B4(void);
extern void fn_80247DA4(void);
extern void fn_80247FB0(void);
extern void fn_8024845C(void);
extern void fn_8035B694(void);
extern void fn_8035B78C(void);
extern void fn_80370AE4(void);
extern void fn_80473E8C(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_80680CF8(void);
extern void fn_8068AEA4(void);
extern void memmove(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_807431F0[];
extern u8 lbl_8074320C[];
extern u8 lbl_80743498[];
extern u8 lbl_80783E48[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087F048;
extern u32 lbl_8087F1E4;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_808813D0;
extern u32 lbl_80883188;
extern u32 lbl_8088318C;
extern u32 lbl_80883190;
extern u32 lbl_808831A0;
extern u32 lbl_808831A8;
extern u32 lbl_808831AC;
extern u32 lbl_808831B0;
extern u32 lbl_808831B4;
extern u32 lbl_808831B8;
extern u32 lbl_808831BC;
extern u32 lbl_808831C0;
extern u32 lbl_808831C4;
extern u32 lbl_808831C8;
extern u32 lbl_808831CC;
extern u32 lbl_808831D0;
extern u32 lbl_808831D4;
extern u32 lbl_808831D8;
extern u32 lbl_808831DC;

/* Function declarations */
void fn_80246244(void);
void fn_80246450(void);
void fn_80246478(void);
void fn_80246508(void);
void fn_80246594(void);
void fn_8024675C(void);
void fn_80246914(void);
void fn_80246C30(void);
void fn_80246E48(void);
void fn_802470CC(void);
void fn_80247258(void);
void fn_80247674(void);
void fn_802476D0(void);
void fn_80247748(void);
void fn_802477FC(void);
void fn_802478C4(void);

asm void fn_80246244(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    lwz r0, 0x15ac(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80246244_0000008C
    li r0, 0x0
    stw r0, 0x1514(r3)
    stw r0, 0x1518(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0xd
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f0, lbl_8088318C
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80883190
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x28
    lfs f2, lbl_808831B0
    li r6, 0x1
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_80246244_000001F4
lbl_fn_80246244_0000008C:
    lwz r4, 0x1554(r3)
    lwz r0, 0x14bc(r3)
    cmpw r4, r0
    blt lbl_fn_80246244_000000C0
    lwz r0, 0x14b8(r3)
    cmpwi r0, 0x2
    beq lbl_fn_80246244_000000C0
    li r0, 0x0
    stw r0, 0x1554(r3)
    li r4, 0x1
    stw r0, 0x1570(r3)
    bl fn_80246C30
    b lbl_fn_80246244_000001F4
lbl_fn_80246244_000000C0:
    lwz r0, 0x14e0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80246244_000000D4
    li r0, 0x0
    b lbl_fn_80246244_00000138
lbl_fn_80246244_000000D4:
    li r5, 0x0
    li r6, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80246244_00000120
lbl_fn_80246244_000000E8:
    lwz r4, 0x14dc(r3)
    lwzx r4, r4, r6
    cmpwi r4, 0x0
    beq lbl_fn_80246244_00000118
    lwz r0, 0x7e0(r4)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_80246244_00000118
    lwz r0, 0xd18(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80246244_00000118
    addi r5, r5, 0x1
lbl_fn_80246244_00000118:
    addi r6, r6, 0x4
    bdnz lbl_fn_80246244_000000E8
lbl_fn_80246244_00000120:
    subfic r0, r5, 0x1
    li r4, 0x1
    orc r4, r4, r5
    srwi r0, r0, 1
    subf r0, r0, r4
    srwi r0, r0, 31
lbl_fn_80246244_00000138:
    cmpwi r0, 0x0
    beq lbl_fn_80246244_000001AC
    li r30, 0x0
    stw r30, 0x1514(r3)
    stw r30, 0x1518(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0x9
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f0, lbl_8088318C
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80883190
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x6b
    lfs f2, lbl_808831A0
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    stw r30, 0x1574(r31)
    b lbl_fn_80246244_000001F4
lbl_fn_80246244_000001AC:
    lwz r0, 0x1510(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80246244_000001F4
    lwz r0, 0x1530(r3)
    cmpwi r0, 0x2
    blt lbl_fn_80246244_000001DC
    mr r3, r31
    li r4, 0x2
    bl fn_8024675C
    li r0, 0x0
    stw r0, 0x1530(r31)
    b lbl_fn_80246244_000001F4
lbl_fn_80246244_000001DC:
    mr r3, r31
    li r4, 0x0
    bl fn_8024675C
    lwz r3, 0x1530(r31)
    addi r0, r3, 0x1
    stw r0, 0x1530(r31)
lbl_fn_80246244_000001F4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80246450(void)
{
    nofralloc
    lwz r0, 0x15ac(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80246450_0000022C
    lwz r0, 0x58c(r3)
    cmpwi r0, 0xe
    beq lbl_fn_80246450_0000022C
    li r3, 0x9
    blr
lbl_fn_80246450_0000022C:
    li r3, 0x0
    blr
}

asm void fn_80246478(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r4
    stw r30, 0x28(r1)
    mr r30, r3
    lfs f5, 0x530(r3)
    lfs f0, 0x530(r5)
    lfs f4, 0x528(r3)
    addi r3, r1, 0x14
    lfs f3, 0x528(r5)
    fsubs f5, f5, f0
    lfs f0, lbl_80883190
    mr r4, r3
    fsubs f3, f4, f3
    stfs f5, 0x1c(r1)
    stfs f3, 0x14(r1)
    stfs f0, 0x18(r1)
    bl fn_805F98D0
    cmpwi r31, 0x9
    bne lbl_fn_80246478_000002AC
    addi r3, r1, 0x14
    lfs f2, 0x1c(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r4, r1, 0x8
    psq_st f1, 0x0(r4), 0, 0
    mr r3, r30
    stfs f2, 0x10(r1)
    bl fn_80246914
lbl_fn_80246478_000002AC:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80246508(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    psq_st f31, 0x18(r1), 0, 0
    stw r31, 0xc(r1)
    mr r31, r3
    lfs f31, 0x2e4(r3)
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_80246508_00000334
    lwz r0, 0x12a4(r31)
    mr r3, r31
    lwz r4, 0x5c0(r31)
    oris r0, r0, 0x200
    clrrwi r4, r4, 1
    stw r4, 0x5c0(r31)
    ori r0, r0, 0x8000
    stw r0, 0x12a4(r31)
    bl fn_801765D8
    lwz r0, 0x14b8(r31)
    cmpwi r0, 0x2
    beq lbl_fn_80246508_00000334
    mr r3, r31
    bl fn_800EE360
lbl_fn_80246508_00000334:
    lwz r0, 0x24(r1)
    psq_l f31, 0x18(r1), 0, 0
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80246594(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r30, 0x28(r1)
    lis r30, 0x4330
    stw r29, 0x24(r1)
    lis r29, lbl_807431F0@ha
    lfd f4, lbl_807431F0@l(r29)
    stw r28, 0x20(r1)
    li r28, 0x0
    lwz r0, 0x152c(r3)
    stw r30, 0x8(r1)
    slwi r0, r0, 2
    lfs f3, 0xfb8(r3)
    add r4, r3, r0
    stw r30, 0x10(r1)
    lwz r4, 0x1520(r4)
    stw r4, 0x638(r3)
    lwz r0, 0xc0(r4)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f4
    stfs f0, 0xfbc(r3)
    lwz r0, 0xc0(r4)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f4
    fcmpo cr0, f3, f0
    bge lbl_fn_80246594_00000430
    lwz r3, lbl_8087F048
    mr r4, r31
    lfs f1, lbl_8088318C
    bl fn_8010CB2C
    lwz r3, lbl_8087EFA8
    fmuls f3, f1, f1
    lfs f0, 0xfb8(r31)
    lfs f4, 0x3a4(r3)
    lwz r3, 0x638(r31)
    fmadds f4, f3, f4, f0
    stw r30, 0x10(r1)
    lfd f3, lbl_807431F0@l(r29)
    stfs f4, 0xfb8(r31)
    lwz r0, 0xc0(r3)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f3
    fcmpo cr0, f4, f0
    cror eq, gt, eq
    bne lbl_fn_80246594_00000434
    li r28, 0x1
    b lbl_fn_80246594_00000434
lbl_fn_80246594_00000430:
    li r28, 0x1
lbl_fn_80246594_00000434:
    lfs f3, 0x52c(r31)
    lfs f0, 0x1544(r31)
    lfs f4, lbl_808831B4
    fsubs f0, f3, f0
    fcmpo cr0, f0, f4
    bge lbl_fn_80246594_00000458
    lfs f0, lbl_808831B8
    fadds f0, f3, f0
    stfs f0, 0x52c(r31)
lbl_fn_80246594_00000458:
    cmpwi r28, 0x0
    beq lbl_fn_80246594_000004F8
    li r30, 0x0
    stw r30, 0x1514(r31)
    stw r30, 0x1518(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r3, r31
    li r4, 0x3
    stw r30, 0x58c(r31)
    bl fn_8016E970
    lwz r0, 0x152c(r31)
    addi r6, r31, 0xf6c
    lfs f0, lbl_80883190
    mr r3, r31
    slwi r0, r0, 2
    stfs f0, 0xfb8(r31)
    add r4, r31, r0
    lwz r5, 0x1510(r31)
    lwz r0, 0x1520(r4)
    li r4, 0x0
    stw r0, 0x638(r31)
    stw r5, 0xf7c(r31)
    psq_l f1, 0x528(r5), 0, 0
    lfs f2, 0x530(r5)
    stfs f2, 0xf74(r31)
    psq_st f1, 0x0(r6), 0, 0
    lfs f1, lbl_8088318C
    bl fn_801603CC
    lwz r0, 0x152c(r31)
    cmpwi r0, 0x1
    bne lbl_fn_80246594_000004E4
    li r0, 0x384
    stw r0, 0x1550(r31)
lbl_fn_80246594_000004E4:
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x0
    li r6, 0x1
    bl fn_80239DAC
lbl_fn_80246594_000004F8:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8024675C(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    li r0, 0x0
    stw r31, 0x6c(r1)
    mr r31, r4
    stw r30, 0x68(r1)
    mr r30, r3
    stw r0, 0x1514(r3)
    stw r0, 0x1518(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    li r0, 0x7
    mr r3, r30
    li r4, 0x6
    stw r0, 0x58c(r30)
    bl fn_8016E970
    li r0, 0x1d
    stw r0, 0x560(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    slwi r0, r31, 2
    add r4, r30, r0
    addi r9, r30, 0x1540
    stw r31, 0x152c(r30)
    li r31, 0x1
    psq_l f1, 0x528(r30), 0, 0
    addi r3, r30, 0xb0
    lwz r0, 0x1520(r4)
    li r4, 0x0
    lfs f0, lbl_8088318C
    li r5, 0x66
    lfs f2, 0x530(r30)
    li r6, 0x1
    psq_st f1, 0x0(r9), 0, 0
    li r7, 0x0
    lfs f1, lbl_80883190
    li r8, 0x1
    stfs f2, 0x1548(r30)
    lfs f2, lbl_808831A0
    stw r0, 0x638(r30)
    stw r31, 0x3fc(r30)
    stfs f0, 0x2fc(r30)
    stfs f0, 0x2e8(r30)
    bl fn_80097C08
    lfs f0, lbl_80883190
    mr r3, r30
    stfs f0, 0xfb8(r30)
    li r4, 0x0
    bl fn_80232B7C
    lwz r0, 0x152c(r30)
    cmpwi r0, 0x2
    bne lbl_fn_8024675C_00000658
    lfs f0, lbl_80883190
    li r0, -0x1
    lfs f1, lbl_8088318C
    addi r4, r30, 0x1584
    stfs f0, 0x44(r1)
    addi r5, r30, 0xb0
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
    stw r31, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    b lbl_fn_8024675C_000006B8
lbl_fn_8024675C_00000658:
    lfs f0, lbl_80883190
    li r0, -0x1
    lfs f1, lbl_8088318C
    addi r4, r30, 0x1578
    stfs f0, 0x1c(r1)
    addi r5, r30, 0xb0
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
lbl_fn_8024675C_000006B8:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_80246914(void)
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
    mr r31, r4
    stw r30, 0xf8(r1)
    mr r30, r3
    lwz r12, 0x0(r3)
    lwz r12, 0x48(r12)
    mtctr r12
    bctrl
    mr r3, r30
    bl fn_80178A6C
    mr r3, r30
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    bl fn_8015495C
    mr r3, r30
    bl fn_8016DA4C
    li r0, 0xe
    stw r0, 0x58c(r30)
    mr r3, r30
    li r4, 0x6
    bl fn_8016E970
    lfs f0, lbl_8088318C
    li r3, 0x8e
    li r5, 0x41
    li r0, 0x1
    stw r3, 0x560(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80883190
    li r4, 0x0
    stw r5, 0x1434(r30)
    li r5, 0x171
    lfs f2, lbl_808831B0
    li r6, 0x0
    stw r0, 0x3fc(r30)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2fc(r30)
    stfs f0, 0x2e8(r30)
    bl fn_80097C08
    psq_l f1, 0x0(r31), 0, 0
    addi r3, r1, 0x74
    lfs f2, 0x8(r31)
    mr r4, r3
    stfs f2, 0x7c(r1)
    psq_st f1, 0x0(r3), 0, 0
    bl fn_805F98D0
    addi r3, r1, 0x68
    psq_l f1, 0x0(r31), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    addi r4, r1, 0x50
    lfs f2, 0x8(r31)
    addi r31, r1, 0x5c
    lfs f3, 0x6c(r1)
    lfs f0, lbl_808831BC
    stfs f2, 0x6c0(r30)
    fmuls f3, f3, f0
    lfs f0, lbl_80883188
    stfs f2, 0x70(r1)
    stfs f3, 0x6c(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x6b8(r30), 0, 0
    lfs f3, 0x7c(r1)
    lfs f4, 0x78(r1)
    fneg f5, f3
    lfs f3, 0x74(r1)
    fneg f4, f4
    fneg f3, f3
    stfs f5, 0x58(r1)
    frsp f2, f5
    stfs f3, 0x50(r1)
    fabs f3, f2
    stfs f4, 0x54(r1)
    psq_l f1, 0x0(r4), 0, 0
    frsp f3, f3
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x64(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_80246914_00000850
    lfs f3, 0x5c(r1)
    lfs f0, lbl_80883190
    fcmpo cr0, f3, f0
    ble lbl_fn_80246914_00000844
    lfs f0, lbl_808831A8
    b lbl_fn_80246914_00000848
lbl_fn_80246914_00000844:
    lfs f0, lbl_808831AC
lbl_fn_80246914_00000848:
    stfs f0, 0x48(r1)
    b lbl_fn_80246914_00000864
lbl_fn_80246914_00000850:
    frsp f2, f2
    lfs f1, 0x5c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_80246914_00000864:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x80
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883190
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
    lfs f0, lbl_8088318C
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x64(r1)
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
    lfs f0, lbl_80883188
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80246914_00000980
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80883190
    fcmpo cr0, f3, f0
    ble lbl_fn_80246914_00000970
    lfs f0, lbl_808831A8
    b lbl_fn_80246914_00000974
lbl_fn_80246914_00000970:
    lfs f0, lbl_808831AC
lbl_fn_80246914_00000974:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_80246914_00000994
lbl_fn_80246914_00000980:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_80246914_00000994:
    lfs f2, lbl_80883190
    addi r3, r1, 0x44
    psq_l f1, 0x0(r3), 0, 0
    addi r4, r30, 0x15b0
    stfs f2, 0x4c(r1)
    mr r3, r30
    stfs f2, 0x64(r1)
    frsp f2, f2
    psq_st f1, 0x0(r31), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x15b8(r30)
    bl fn_800EB7A0
    lwz r0, 0x124(r1)
    psq_l f31, 0x118(r1), 0, 0
    lfd f31, 0x110(r1)
    psq_l f30, 0x108(r1), 0, 0
    lfd f30, 0x100(r1)
    lwz r31, 0xfc(r1)
    lwz r30, 0xf8(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_80246C30(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_25
    li r0, 0x0
    stw r0, 0x1514(r3)
    mr r31, r3
    stw r0, 0x1518(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0xa
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f0, lbl_8088318C
    li r27, 0x1
    stw r27, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80883190
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x1ea
    lfs f2, lbl_808831A0
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    mr r3, r31
    li r4, 0x65
    bl fn_80232B7C
    lfs f0, lbl_80883190
    li r0, -0x1
    lfs f1, lbl_8088318C
    addi r4, r31, 0x1590
    stfs f0, 0x1c(r1)
    addi r5, r31, 0xb0
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
    stw r27, 0xc(r1)
    bl fn_8023A8B4
    lwz r0, 0x940(r31)
    cmpwi r0, 0x0
    ble lbl_fn_80246C30_00000B0C
    xoris r3, r0, 0x8000
    lis r0, 0x4330
    lis r4, lbl_807431F0@ha
    stw r3, 0x3c(r1)
    lfd f4, lbl_807431F0@l(r4)
    stw r0, 0x38(r1)
    lfs f0, 0x7d8(r31)
    lfd f3, 0x38(r1)
    fsubs f3, f3, f4
    fdivs f3, f0, f3
    b lbl_fn_80246C30_00000B10
lbl_fn_80246C30_00000B0C:
    lfs f3, lbl_80883190
lbl_fn_80246C30_00000B10:
    lfs f0, lbl_808831C0
    fcmpo cr0, f3, f0
    bge lbl_fn_80246C30_00000BEC
    li r26, 0x0
    li r30, 0x0
    mr r27, r26
    li r28, 0x1
    li r29, -0x1
    b lbl_fn_80246C30_00000BE0
lbl_fn_80246C30_00000B34:
    add r3, r31, r30
    lwz r25, 0x14ec(r3)
    lwz r0, 0x12a4(r25)
    mr r3, r25
    rlwinm r0, r0, 0, 17, 15
    stw r0, 0x12a4(r25)
    bl fn_80176ACC
    mr r3, r25
    li r4, 0x0
    bl fn_800D246C
    lwz r0, 0x12a4(r25)
    extrwi. r0, r0, 1, 6
    beq lbl_fn_80246C30_00000B74
    lwz r0, 0x12a4(r25)
    rlwinm r0, r0, 0, 7, 5
    stw r0, 0x12a4(r25)
lbl_fn_80246C30_00000B74:
    addi r3, r25, 0x7d4
    bl fn_8012D8B8
    stw r27, 0x58c(r25)
    mr r3, r25
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    bl fn_8015495C
    lfs f2, 0x530(r31)
    mr r3, r25
    psq_l f1, 0x528(r31), 0, 0
    psq_st f1, 0x528(r25), 0, 0
    stfs f2, 0x530(r25)
    lfs f2, 0x53c(r31)
    psq_l f1, 0x534(r31), 0, 0
    psq_st f1, 0x534(r25), 0, 0
    stfs f2, 0x53c(r25)
    bl fn_80145334
    stw r28, 0xd18(r25)
    mr r3, r25
    li r4, 0x0
    stw r31, 0x150c(r25)
    bl fn_80246C30
    stw r29, 0x1558(r25)
    addi r26, r26, 0x1
    addi r30, r30, 0x4
lbl_fn_80246C30_00000BE0:
    lwz r0, 0x14e8(r31)
    cmplw r26, r0
    blt lbl_fn_80246C30_00000B34
lbl_fn_80246C30_00000BEC:
    addi r11, r1, 0x60
    bl _restgpr_25
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80246E48(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    stw r31, 0xac(r1)
    mr r31, r3
    stw r30, 0xa8(r1)
    lwz r0, 0x150c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80246E48_00000C34
    lwz r0, 0x1558(r3)
    cmpwi r0, -0x1
    beq lbl_fn_80246E48_00000E70
lbl_fn_80246E48_00000C34:
    li r30, 0x0
    stw r30, 0x1514(r3)
    stw r30, 0x1518(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0xb
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f0, lbl_8088318C
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80883190
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x1ea
    lfs f2, lbl_808831A0
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r0, 0x150c(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80246E48_00000D30
    mr r3, r31
    addi r4, r31, 0x1558
    addi r5, r31, 0x155c
    addi r6, r31, 0x1568
    bl fn_802470CC
    li r6, 0x0
    b lbl_fn_80246E48_00000D24
lbl_fn_80246E48_00000CC0:
    add r4, r31, r30
    lwz r3, 0x14c8(r31)
    lwz r7, 0x14ec(r4)
    addi r6, r6, 0x1
    addi r30, r30, 0x4
    lwz r4, 0x1558(r7)
    addi r5, r7, 0x155c
    addi r4, r4, 0x1
    divwu r0, r4, r3
    mullw r0, r0, r3
    subf r0, r0, r4
    stw r0, 0x1558(r7)
    slwi r0, r0, 2
    lwz r3, 0x14c4(r31)
    lwzx r3, r3, r0
    lfs f2, 0xc(r3)
    psq_l f1, 0x4(r3), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x1564(r7)
    lwz r0, 0x1558(r7)
    lwz r3, 0x14c4(r31)
    slwi r0, r0, 2
    lwzx r3, r3, r0
    lfs f0, 0x14(r3)
    stfs f0, 0x1568(r7)
lbl_fn_80246E48_00000D24:
    lwz r0, 0x14e8(r31)
    cmplw r6, r0
    blt lbl_fn_80246E48_00000CC0
lbl_fn_80246E48_00000D30:
    lis r4, lbl_8074320C@ha
    lfs f1, lbl_8088318C
    addi r4, r4, lbl_8074320C@l
    addi r3, r1, 0x10
    addi r4, r4, 0x179
    addi r5, r31, 0x528
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    li r0, 0x0
    stw r0, 0x8c(r1)
    lfs f6, lbl_80883190
    addi r5, r31, 0x155c
    lfs f5, lbl_808831C4
    addi r4, r1, 0x58
    stw r0, 0x90(r1)
    addi r6, r1, 0x4c
    addi r8, r31, 0x5b8
    lis r7, 0x8000
    stw r0, 0x94(r1)
    li r9, 0x0
    stw r0, 0x98(r1)
    lfs f4, 0x1564(r31)
    lfs f3, 0x1560(r31)
    lfs f0, 0x155c(r31)
    fadds f4, f6, f4
    psq_l f1, 0x0(r5), 0, 0
    fadds f3, f5, f3
    lfs f2, 0x1564(r31)
    fadds f0, f6, f0
    psq_st f1, 0x528(r31), 0, 0
    stfs f2, 0x530(r31)
    stfs f6, 0x40(r1)
    lwz r3, lbl_8087EE98
    stfs f5, 0x44(r1)
    stfs f6, 0x48(r1)
    stfs f0, 0x4c(r1)
    stfs f3, 0x50(r1)
    stfs f4, 0x54(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_80246E48_00000DF8
    addi r3, r1, 0x68
    lfs f2, 0x70(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x528(r31), 0, 0
    stfs f2, 0x530(r31)
lbl_fn_80246E48_00000DF8:
    lfs f0, 0x1568(r31)
    mr r3, r31
    stfs f0, 0x538(r31)
    li r4, 0x65
    bl fn_80232B7C
    lfs f0, lbl_80883190
    li r3, -0x1
    lfs f1, lbl_8088318C
    li r0, 0x1
    stfs f0, 0x20(r1)
    addi r4, r31, 0x1590
    addi r5, r31, 0xb0
    addi r7, r1, 0x14
    stfs f0, 0x24(r1)
    addi r8, r1, 0x20
    addi r9, r1, 0x30
    li r6, 0x0
    stfs f0, 0x28(r1)
    li r10, -0x1
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f1, 0x30(r1)
    stfs f1, 0x34(r1)
    stfs f1, 0x38(r1)
    stfs f1, 0x3c(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
lbl_fn_80246E48_00000E70:
    lwz r0, 0xb4(r1)
    lwz r31, 0xac(r1)
    lwz r30, 0xa8(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_802470CC(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x40
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    bl _savegpr_24
    lwz r0, 0x14c8(r3)
    mr r28, r3
    mr r29, r4
    mr r30, r5
    cmpwi r0, 0x0
    mr r31, r6
    bne lbl_fn_802470CC_00000EC8
    li r3, 0x0
    b lbl_fn_802470CC_00000FF4
lbl_fn_802470CC_00000EC8:
    li r25, 0x0
    b lbl_fn_802470CC_00000F94
lbl_fn_802470CC_00000ED0:
    slwi r27, r24, 2
    b lbl_fn_802470CC_00000F88
lbl_fn_802470CC_00000ED8:
    lwz r4, 0x14c4(r28)
    addi r3, r1, 0x14
    lfs f0, 0x530(r28)
    lwzx r4, r4, r27
    lfs f4, 0x52c(r28)
    lfs f6, 0xc(r4)
    lfs f5, 0x8(r4)
    fsubs f6, f6, f0
    lfs f3, 0x4(r4)
    lfs f0, 0x528(r28)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x18(r1)
    stfs f0, 0x14(r1)
    stfs f6, 0x1c(r1)
    bl fn_805F9920
    subi r0, r24, 0x1
    lwz r3, 0x14c4(r28)
    slwi r26, r0, 2
    lfs f0, 0x530(r28)
    lwzx r4, r3, r26
    fmr f31, f1
    lfs f4, 0x52c(r28)
    addi r3, r1, 0x8
    lfs f6, 0xc(r4)
    lfs f5, 0x8(r4)
    fsubs f6, f6, f0
    lfs f3, 0x4(r4)
    lfs f0, 0x528(r28)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f6, 0x10(r1)
    bl fn_805F9920
    fcmpo cr0, f31, f1
    ble lbl_fn_802470CC_00000F80
    lwz r4, 0x14c4(r28)
    lwzx r3, r4, r27
    lwzx r0, r4, r26
    stwx r0, r4, r27
    stwx r3, r4, r26
lbl_fn_802470CC_00000F80:
    subi r27, r27, 0x4
    subi r24, r24, 0x1
lbl_fn_802470CC_00000F88:
    cmplw r24, r25
    bgt lbl_fn_802470CC_00000ED8
    addi r25, r25, 0x1
lbl_fn_802470CC_00000F94:
    lwz r27, 0x14c8(r28)
    subi r24, r27, 0x1
    cmplw r25, r24
    blt lbl_fn_802470CC_00000ED0
    cmplwi r27, 0x3
    ble lbl_fn_802470CC_00000FB0
    li r27, 0x3
lbl_fn_802470CC_00000FB0:
    bl fn_80680CF8
    divw r0, r3, r27
    lwz r4, 0x14c4(r28)
    mullw r0, r0, r27
    subf r5, r0, r3
    li r3, 0x1
    slwi r0, r5, 2
    lwzx r4, r4, r0
    psq_l f1, 0x4(r4), 0, 0
    lfs f2, 0xc(r4)
    stfs f2, 0x8(r30)
    psq_st f1, 0x0(r30), 0, 0
    lwz r4, 0x14c4(r28)
    lwzx r4, r4, r0
    lfs f0, 0x14(r4)
    stfs f0, 0x0(r31)
    stw r5, 0x0(r29)
lbl_fn_802470CC_00000FF4:
    addi r11, r1, 0x40
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    bl _restgpr_24
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80247258(void)
{
    nofralloc
    stwu r1, -0x200(r1)
    mflr r0
    stw r0, 0x204(r1)
    addi r11, r1, 0x190
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
    bl _savegpr_15
    lwz r0, 0x14e0(r3)
    mr r19, r3
    li r24, 0x1
    li r23, 0x0
    li r22, 0x0
    li r5, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80247258_000010BC
lbl_fn_80247258_00001084:
    lwz r4, 0x14dc(r3)
    lwzx r4, r4, r5
    cmpwi r4, 0x0
    beq lbl_fn_80247258_000010B4
    lwz r0, 0x7e0(r4)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_80247258_000010B0
    lwz r0, 0xd18(r4)
    cmpwi r0, 0x0
    bne lbl_fn_80247258_000010B4
lbl_fn_80247258_000010B0:
    addi r22, r22, 0x1
lbl_fn_80247258_000010B4:
    addi r5, r5, 0x4
    bdnz lbl_fn_80247258_00001084
lbl_fn_80247258_000010BC:
    lis r3, lbl_807431F0@ha
    li r21, 0x0
    lfd f29, lbl_807431F0@l(r3)
    addi r26, r1, 0x68
    lfs f30, lbl_808831D0
    addi r25, r1, 0x5c
    lfs f31, lbl_808831CC
    mr r31, r21
    lfs f27, lbl_80883190
    mr r15, r21
    lfs f28, lbl_808831C8
    addi r29, r1, 0x44
    lfs f25, lbl_808831D4
    addi r28, r1, 0x38
    lfs f26, lbl_8088318C
    addi r27, r1, 0xec
    li r18, 0x0
    lis r30, 0x4330
    li r16, 0x1
    li r17, -0x1
    b lbl_fn_80247258_00001390
lbl_fn_80247258_00001110:
    lwz r3, 0x14dc(r19)
    lwzx r20, r3, r18
    cmpwi r20, 0x0
    beq lbl_fn_80247258_00001388
    lwz r0, 0x7e0(r20)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_80247258_0000113C
    lwz r0, 0xd18(r20)
    cmpwi r0, 0x0
    bne lbl_fn_80247258_00001388
lbl_fn_80247258_0000113C:
    psq_l f1, 0x528(r19), 0, 0
    cmpwi r22, 0x1
    lfs f2, 0x530(r19)
    stfs f2, 0x70(r1)
    psq_st f1, 0x0(r26), 0, 0
    psq_l f1, 0x534(r19), 0, 0
    lfs f2, 0x53c(r19)
    stfs f2, 0x64(r1)
    psq_st f1, 0x0(r25), 0, 0
    stfs f27, 0x50(r1)
    stfs f27, 0x54(r1)
    stfs f28, 0x58(r1)
    ble lbl_fn_80247258_000011C8
    subi r0, r22, 0x1
    xoris r5, r21, 0x8000
    xoris r0, r0, 0x8000
    stw r0, 0x144(r1)
    lfs f0, 0x538(r19)
    addi r3, r1, 0x78
    stw r30, 0x140(r1)
    li r4, 0x79
    fsubs f0, f0, f31
    lfd f3, 0x140(r1)
    stw r5, 0x13c(r1)
    fsubs f3, f3, f29
    stw r30, 0x138(r1)
    fdivs f3, f30, f3
    lfd f4, 0x138(r1)
    fsubs f4, f4, f29
    fmadds f1, f4, f3, f0
    bl fn_805F8E70
    addi r4, r1, 0x50
    addi r3, r1, 0x78
    mr r5, r4
    bl fn_805F93C0
lbl_fn_80247258_000011C8:
    lfs f5, 0x68(r1)
    mr r5, r29
    lfs f3, 0x50(r1)
    mr r6, r28
    lfs f4, 0x6c(r1)
    addi r4, r1, 0xe8
    fadds f5, f5, f3
    lfs f0, 0x54(r1)
    lfs f3, 0x70(r1)
    lis r7, 0x8000
    fadds f4, f4, f0
    stfs f5, 0x68(r1)
    stfs f4, 0x6c(r1)
    li r8, 0x0
    lfs f0, 0x58(r1)
    li r9, 0x0
    psq_l f1, 0x0(r26), 0, 0
    fadds f2, f3, f0
    psq_st f1, 0x0(r29), 0, 0
    lwz r3, lbl_8087EE98
    psq_st f1, 0x0(r28), 0, 0
    lfs f3, 0x48(r1)
    lfs f0, 0x3c(r1)
    fadds f3, f3, f25
    stfs f2, 0x70(r1)
    fsubs f0, f0, f25
    stw r31, 0x11c(r1)
    stw r31, 0x120(r1)
    stw r31, 0x124(r1)
    stw r31, 0x128(r1)
    stfs f2, 0x4c(r1)
    stfs f3, 0x48(r1)
    stfs f2, 0x40(r1)
    stfs f0, 0x3c(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_80247258_0000126C
    psq_l f1, 0x0(r27), 0, 0
    lfs f2, 0xf4(r1)
    psq_st f1, 0x0(r26), 0, 0
    stfs f2, 0x70(r1)
lbl_fn_80247258_0000126C:
    lwz r0, 0x12a4(r20)
    mr r3, r20
    rlwinm r0, r0, 0, 17, 15
    stw r0, 0x12a4(r20)
    bl fn_80176ACC
    mr r3, r20
    li r4, 0x0
    bl fn_800D246C
    lwz r0, 0x12a4(r20)
    extrwi. r0, r0, 1, 6
    beq lbl_fn_80247258_000012A4
    lwz r0, 0x12a4(r20)
    rlwinm r0, r0, 0, 7, 5
    stw r0, 0x12a4(r20)
lbl_fn_80247258_000012A4:
    addi r3, r20, 0x7d4
    bl fn_8012D8B8
    stw r15, 0x9f8(r20)
    mr r3, r20
    li r4, 0x0
    li r5, 0x1
    stw r15, 0x58c(r20)
    li r6, 0x1
    li r7, 0x1
    bl fn_8015495C
    lfs f2, 0x70(r1)
    mr r3, r20
    psq_l f1, 0x0(r26), 0, 0
    psq_st f1, 0x528(r20), 0, 0
    stfs f2, 0x530(r20)
    lfs f2, 0x64(r1)
    psq_l f1, 0x0(r25), 0, 0
    psq_st f1, 0x534(r20), 0, 0
    stfs f2, 0x53c(r20)
    bl fn_80145334
    stw r16, 0xd18(r20)
    mr r3, r20
    mr r4, r26
    mr r5, r25
    lwz r12, 0x0(r20)
    lwz r12, 0x80(r12)
    mtctr r12
    bctrl
    li r3, 0x0
    li r4, 0x0
    bl fn_80232B7C
    stfs f27, 0x1c(r1)
    fmr f1, f26
    addi r4, r19, 0x159c
    addi r5, r20, 0xb0
    stfs f27, 0x20(r1)
    addi r7, r1, 0x10
    addi r8, r1, 0x1c
    stfs f27, 0x24(r1)
    addi r9, r1, 0x28
    li r6, 0x0
    li r10, -0x1
    stfs f27, 0x10(r1)
    stfs f27, 0x14(r1)
    stfs f27, 0x18(r1)
    stfs f26, 0x28(r1)
    stfs f26, 0x2c(r1)
    stfs f26, 0x30(r1)
    stfs f26, 0x34(r1)
    stw r17, 0x8(r1)
    stw r16, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    cmpwi r23, 0x0
    bne lbl_fn_80247258_00001384
    mr r23, r20
lbl_fn_80247258_00001384:
    addi r24, r24, 0x1
lbl_fn_80247258_00001388:
    addi r21, r21, 0x1
    addi r18, r18, 0x4
lbl_fn_80247258_00001390:
    cmpw r21, r22
    blt lbl_fn_80247258_00001110
    cmplwi r24, 0x1
    ble lbl_fn_80247258_000013E0
    lwz r4, lbl_8087F1E4
    addi r3, r1, 0xa8
    lwz r6, 0x60(r23)
    lwz r4, 0x24c(r4)
    cmpwi r4, 0x0
    beq lbl_fn_80247258_000013BC
    b lbl_fn_80247258_000013C0
lbl_fn_80247258_000013BC:
    la r4, lbl_808813D0
lbl_fn_80247258_000013C0:
    lwz r5, 0x60(r19)
    lwz r6, 0x4(r6)
    lwz r5, 0x4(r5)
    crclr 6
    bl fn_800DD3FC
    lwz r3, lbl_8087F048
    addi r4, r1, 0xa8
    bl fn_80109828
lbl_fn_80247258_000013E0:
    addi r11, r1, 0x190
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
    bl _restgpr_15
    lwz r0, 0x204(r1)
    mtlr r0
    addi r1, r1, 0x200
    blr
}

asm void fn_80247674(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmplw r4, r3
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_fn_80247674_00001470
    mr r3, r31
    bl strlen
    mr r5, r3
    mr r3, r30
    mr r4, r31
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_80247674_00001470:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802476D0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_8035B694
    lis r3, lbl_80783E48@ha
    li r0, 0x0
    addi r3, r3, lbl_80783E48@l
    stw r3, 0x0(r31)
    addi r3, r31, 0x14d0
    stw r0, 0x14b8(r31)
    stw r0, 0x14bc(r31)
    stw r0, 0x14c0(r31)
    stw r0, 0x14c4(r31)
    stw r0, 0x14cc(r31)
    bl fn_802377B8
    lwz r0, 0x14c0(r31)
    lis r4, lbl_80743498@ha
    addi r3, r31, 0x14d0
    subf r0, r0, r0
    stw r0, 0x14c0(r31)
    addi r4, r4, lbl_80743498@l
    bl fn_8023780C
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80247748(void)
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
    beq lbl_fn_80247748_00001598
    addic. r31, r3, 0x14d0
    beq lbl_fn_80247748_0000154C
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_80247748_0000154C
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80247748_0000154C:
    addic. r4, r29, 0x14bc
    beq lbl_fn_80247748_0000157C
    beq lbl_fn_80247748_0000157C
    beq lbl_fn_80247748_0000157C
    beq lbl_fn_80247748_0000157C
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_80247748_0000157C
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_80247748_0000157C:
    mr r3, r29
    li r4, 0x0
    bl fn_8035B78C
    cmpwi r30, 0x0
    ble lbl_fn_80247748_00001598
    mr r3, r29
    bl dtor_80084684
lbl_fn_80247748_00001598:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_802477FC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_8013655C
    cmpwi r3, 0x0
    bne lbl_fn_802477FC_00001664
    addi r3, r30, 0x14d0
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802477FC_00001664
    li r31, 0x0
    stw r31, 0x14b0(r30)
    stw r31, 0x14b4(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r0, 0x7ec(r30)
    li r7, 0x3c
    lwz r5, 0x12a4(r30)
    ori r0, r0, 0x1c0
    lwz r6, 0x14a8(r30)
    oris r0, r0, 0x1
    ori r8, r5, 0x8000
    ori r4, r0, 0xc001
    lwz r9, 0x14c0(r30)
    lwz r0, 0x54c(r30)
    oris r8, r8, 0x200
    stw r3, 0x590(r30)
    rlwinm r6, r6, 0, 6, 4
    subf r5, r9, r9
    oris r4, r4, 0x300
    oris r0, r0, 0x100
    stw r31, 0x58c(r30)
    li r3, 0x1
    stw r8, 0x12a4(r30)
    stw r7, 0x14cc(r30)
    stw r6, 0x14a8(r30)
    stw r5, 0x14c0(r30)
    stw r4, 0x7ec(r30)
    stw r0, 0x54c(r30)
    b lbl_fn_802477FC_00001668
lbl_fn_802477FC_00001664:
    li r3, 0x0
lbl_fn_802477FC_00001668:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802478C4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    bl fn_8014C540
    lwz r0, 0xd18(r31)
    li r30, 0x0
    cmpwi r0, 0x0
    bne lbl_fn_802478C4_00001704
    lfs f2, lbl_808831D8
    addi r4, r1, 0x8
    lfs f0, lbl_808831DC
    mr r3, r31
    stfs f2, 0x8(r1)
    stfs f0, 0xc(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0x10(r1)
    psq_st f1, 0x528(r31), 0, 0
    stfs f2, 0x530(r31)
    bl fn_80144710
    li r0, 0x0
    stw r0, 0x58c(r31)
    mr r3, r31
    li r4, 0x0
    bl fn_8016E970
    lwz r0, 0x14c0(r31)
    subf r0, r0, r0
    stw r0, 0x14c0(r31)
    b lbl_fn_802478C4_000018E4
lbl_fn_802478C4_00001704:
    cmpwi r0, 0x1
    bne lbl_fn_802478C4_000018E4
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_802478C4_0000173C
    cmpwi r0, 0x1
    beq lbl_fn_802478C4_00001748
    cmpwi r0, 0x2
    beq lbl_fn_802478C4_00001820
    cmpwi r0, 0x3
    beq lbl_fn_802478C4_00001830
    cmpwi r0, 0x4
    beq lbl_fn_802478C4_00001840
    b lbl_fn_802478C4_000018E4
lbl_fn_802478C4_0000173C:
    mr r3, r31
    bl fn_80247DA4
    b lbl_fn_802478C4_000018E4
lbl_fn_802478C4_00001748:
    lfs f31, 0x2e4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_802478C4_00001818
    lwz r0, 0x14b8(r31)
    cmpwi r0, 0x0
    beq lbl_fn_802478C4_00001818
    li r0, 0x0
    stw r0, 0x14b0(r31)
    stw r0, 0x14b4(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0x2
    lwz r4, 0x14b8(r31)
    mr r3, r31
    stw r0, 0x58c(r31)
    bl fn_8017547C
    lwz r3, 0x14b8(r31)
    lwz r3, 0x50(r3)
    bl fn_80219558
    cmpwi r3, 0x2
    beq lbl_fn_802478C4_000017CC
    cmpwi r3, 0x6
    beq lbl_fn_802478C4_000017E0
    cmpwi r3, 0x4
    beq lbl_fn_802478C4_000017F4
    cmpwi r3, 0xb
    beq lbl_fn_802478C4_00001808
    b lbl_fn_802478C4_00001818
lbl_fn_802478C4_000017CC:
    lwz r3, lbl_8087F430
    li r4, 0xf0
    li r5, 0x1
    bl fn_80370AE4
    b lbl_fn_802478C4_00001818
lbl_fn_802478C4_000017E0:
    lwz r3, lbl_8087F430
    li r4, 0xf1
    li r5, 0x1
    bl fn_80370AE4
    b lbl_fn_802478C4_00001818
lbl_fn_802478C4_000017F4:
    lwz r3, lbl_8087F430
    li r4, 0xf2
    li r5, 0x1
    bl fn_80370AE4
    b lbl_fn_802478C4_00001818
lbl_fn_802478C4_00001808:
    lwz r3, lbl_8087F430
    li r4, 0xf3
    li r5, 0x1
    bl fn_80370AE4
lbl_fn_802478C4_00001818:
    li r30, 0x1
    b lbl_fn_802478C4_000018E4
lbl_fn_802478C4_00001820:
    mr r3, r31
    bl fn_80247FB0
    li r30, 0x1
    b lbl_fn_802478C4_000018E4
lbl_fn_802478C4_00001830:
    mr r3, r31
    bl fn_8024845C
    li r30, 0x1
    b lbl_fn_802478C4_000018E4
lbl_fn_802478C4_00001840:
    lfs f31, 0x2e4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_802478C4_000018E0
    lwz r3, 0x1434(r31)
    lwz r0, 0x5c0(r31)
    cmpwi r3, 0x0
    clrrwi r0, r0, 1
    stw r0, 0x5c0(r31)
    ble lbl_fn_802478C4_000018AC
    subi r0, r3, 0x1
    stw r0, 0x1434(r31)
    cmpwi r0, 0xf
    bne lbl_fn_802478C4_000018E0
    lwz r3, lbl_8087F048
    addi r4, r31, 0xb0
    bl fn_80105BD8
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x1
    lwz r12, 0x9c(r12)
    mtctr r12
    bctrl
    b lbl_fn_802478C4_000018E0
lbl_fn_802478C4_000018AC:
    li r30, 0x0
    stw r30, 0x14b0(r31)
    stw r30, 0x14b4(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r4, 0x12a4(r31)
    li r0, 0x3c
    stw r3, 0x590(r31)
    ori r3, r4, 0x8000
    oris r3, r3, 0x200
    stw r30, 0x58c(r31)
    stw r3, 0x12a4(r31)
    stw r0, 0x14cc(r31)
lbl_fn_802478C4_000018E0:
    li r30, 0x1
lbl_fn_802478C4_000018E4:
    addi r3, r31, 0x7d4
    li r4, 0x20
    bl fn_8013322C
    lwz r3, lbl_8087F430
    mr r5, r30
    li r4, 0x7
    bl fn_80370AE4
    cmpwi r30, 0x0
    beq lbl_fn_802478C4_00001918
    lwz r0, 0x54c(r31)
    rlwinm r0, r0, 0, 19, 17
    stw r0, 0x54c(r31)
    b lbl_fn_802478C4_00001924
lbl_fn_802478C4_00001918:
    lwz r0, 0x54c(r31)
    ori r0, r0, 0x2000
    stw r0, 0x54c(r31)
lbl_fn_802478C4_00001924:
    lwz r30, 0x14bc(r31)
    b lbl_fn_802478C4_00001984
lbl_fn_802478C4_0000192C:
    lwz r3, 0x0(r30)
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_802478C4_00001980
    lwz r0, 0x14c0(r31)
    mr r3, r30
    lwz r5, 0x14bc(r31)
    addi r4, r30, 0x4
    slwi r0, r0, 2
    add r0, r5, r0
    subf r0, r30, r0
    srawi r0, r0, 2
    addze r5, r0
    subi r0, r5, 0x1
    slwi r5, r0, 2
    bl memmove
    lwz r3, 0x14c0(r31)
    subi r0, r3, 0x1
    stw r0, 0x14c0(r31)
    b lbl_fn_802478C4_00001984
lbl_fn_802478C4_00001980:
    addi r30, r30, 0x4
lbl_fn_802478C4_00001984:
    lwz r0, 0x14c0(r31)
    lwz r3, 0x14bc(r31)
    slwi r0, r0, 2
    add r0, r3, r0
    cmplw r30, r0
    bne lbl_fn_802478C4_0000192C
    mr r3, r31
    bl fn_80145334
    lwz r0, 0x34(r1)
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}
