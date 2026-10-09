#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void fn_8004B338(void);
extern void fn_8004B378(void);
extern void fn_8004ED34(void);
extern void fn_80063764(void);
extern void fn_80097C08(void);
extern void fn_80097CCC(void);
extern void fn_80097D7C(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800DD3FC(void);
extern void fn_800EE360(void);
extern void fn_800F8548(void);
extern void fn_80109828(void);
extern void fn_80144710(void);
extern void fn_8016E4C4(void);
extern void fn_8016E970(void);
extern void fn_801765D8(void);
extern void fn_8017A300(void);
extern void fn_80219E6C(void);
extern void fn_80232B7C(void);
extern void fn_80239DAC(void);
extern void fn_8023A8B4(void);
extern void fn_80370320(void);
extern void fn_80370AE4(void);
extern void fn_804786F8(void);
extern void fn_805BDCC0(void);
extern void fn_805BF208(void);
extern void fn_805BF414(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_8068A4A8(void);
extern void fn_8068AE24(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);
extern void fn_80695D84(void);

/* External data declarations */
extern u8 lbl_807489F8[];
extern u8 lbl_80748A14[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F048;
extern u32 lbl_8087F1E4;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_808813D0;
extern u32 lbl_80884A20;
extern u32 lbl_80884A5C;
extern u32 lbl_80884A60;
extern u32 lbl_80884A64;
extern u32 lbl_80884A68;
extern u32 lbl_80884A6C;
extern u32 lbl_80884A74;
extern u32 lbl_80884A88;
extern u32 lbl_80884A8C;
extern u32 lbl_80884A90;
extern u32 lbl_80884A9C;
extern u32 lbl_80884AC0;
extern u32 lbl_80884AC4;
extern u32 lbl_80884AC8;
extern u32 lbl_80884ACC;
extern u32 lbl_80884AD0;
extern u32 lbl_80884AD4;
extern u32 lbl_80884AD8;
extern u32 lbl_80884ADC;

/* Function declarations */
void fn_80300654(void);
void fn_8030073C(void);
void fn_803009F4(void);
void fn_80300AD8(void);
void fn_80300DF4(void);
void fn_803010BC(void);
void fn_80301200(void);
void fn_803012AC(void);
void fn_80301DDC(void);

asm void fn_80300654(void)
{
    nofralloc
    stwu r1, -0x210(r1)
    mflr r0
    stw r0, 0x214(r1)
    li r0, 0x0
    stw r31, 0x20c(r1)
    stw r30, 0x208(r1)
    mr r30, r3
    stw r0, 0x14f0(r3)
    stw r0, 0x14f4(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80884A20
    li r4, 0x2
    bl fn_80097CCC
    li r31, 0x1
    stw r31, 0x58c(r30)
    mr r3, r30
    li r4, 0x3
    bl fn_8016E970
    lfs f0, lbl_80884A5C
    addi r3, r30, 0xb0
    stw r31, 0x3fc(r30)
    li r4, 0x0
    lfs f1, lbl_80884A20
    li r5, 0x156
    stfs f0, 0x2fc(r30)
    li r6, 0x0
    lfs f2, lbl_80884A60
    li r7, 0x0
    stfs f0, 0x2e8(r30)
    li r8, 0x1
    bl fn_80097C08
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x200
    bl memset
    lwz r4, lbl_8087F1E4
    addi r3, r1, 0x8
    lwz r4, 0x504(r4)
    cmpwi r4, 0x0
    beq lbl_fn_80300654_000000B0
    b lbl_fn_80300654_000000B4
lbl_fn_80300654_000000B0:
    la r4, lbl_808813D0
lbl_fn_80300654_000000B4:
    lwz r5, 0x60(r30)
    lwz r5, 0x4(r5)
    crclr 6
    bl fn_800DD3FC
    lwz r3, lbl_8087F048
    addi r4, r1, 0x8
    bl fn_80109828
    lwz r0, 0x214(r1)
    lwz r31, 0x20c(r1)
    lwz r30, 0x208(r1)
    mtlr r0
    addi r1, r1, 0x210
    blr
}

asm void fn_8030073C(void)
{
    nofralloc
    stwu r1, -0x100(r1)
    mflr r0
    stw r0, 0x104(r1)
    li r0, 0x0
    stfd f31, 0xf0(r1)
    psq_st f31, 0xf8(r1), 0, 0
    stfd f30, 0xe0(r1)
    psq_st f30, 0xe8(r1), 0, 0
    stw r31, 0xdc(r1)
    stw r30, 0xd8(r1)
    mr r30, r3
    stw r0, 0x14f0(r3)
    stw r0, 0x14f4(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80884A20
    li r4, 0x2
    bl fn_80097CCC
    li r0, 0x6
    stw r0, 0x58c(r30)
    mr r3, r30
    li r4, 0x3
    bl fn_8016E970
    lfs f0, lbl_80884A5C
    li r0, 0x1
    stw r0, 0x3fc(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80884A20
    li r4, 0x0
    stfs f0, 0x2fc(r30)
    li r5, 0x145
    lfs f2, lbl_80884A60
    li r6, 0x0
    stfs f0, 0x2e8(r30)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r4, 0x14ec(r30)
    cmpwi r4, 0x0
    beq lbl_fn_8030073C_00000378
    lfs f3, 0x530(r4)
    addi r3, r1, 0x50
    lfs f0, 0x530(r30)
    addi r31, r1, 0x5c
    lfs f5, 0x52c(r4)
    fsubs f2, f3, f0
    lfs f4, 0x52c(r30)
    lfs f3, 0x528(r4)
    fsubs f4, f5, f4
    lfs f0, 0x528(r30)
    stfs f2, 0x58(r1)
    fsubs f3, f3, f0
    lfs f0, lbl_80884A64
    stfs f4, 0x54(r1)
    frsp f4, f2
    stfs f3, 0x50(r1)
    fabs f3, f4
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    frsp f3, f3
    stfs f2, 0x64(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_8030073C_00000210
    lfs f3, 0x5c(r1)
    lfs f0, lbl_80884A20
    fcmpo cr0, f3, f0
    ble lbl_fn_8030073C_00000204
    lfs f0, lbl_80884A68
    b lbl_fn_8030073C_00000208
lbl_fn_8030073C_00000204:
    lfs f0, lbl_80884A6C
lbl_fn_8030073C_00000208:
    stfs f0, 0x48(r1)
    b lbl_fn_8030073C_00000224
lbl_fn_8030073C_00000210:
    fmr f2, f4
    lfs f1, 0x5c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_8030073C_00000224:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x68
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80884A20
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
    lfs f0, lbl_80884A5C
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
    lfs f0, lbl_80884A64
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8030073C_00000340
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80884A20
    fcmpo cr0, f3, f0
    ble lbl_fn_8030073C_00000330
    lfs f0, lbl_80884A68
    b lbl_fn_8030073C_00000334
lbl_fn_8030073C_00000330:
    lfs f0, lbl_80884A6C
lbl_fn_8030073C_00000334:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_8030073C_00000354
lbl_fn_8030073C_00000340:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_8030073C_00000354:
    lfs f2, lbl_80884A20
    addi r3, r1, 0x44
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x4c(r1)
    stfs f2, 0x64(r1)
    frsp f2, f2
    psq_st f1, 0x0(r31), 0, 0
    psq_st f1, 0x534(r30), 0, 0
    stfs f2, 0x53c(r30)
lbl_fn_8030073C_00000378:
    lwz r0, 0x104(r1)
    psq_l f31, 0xf8(r1), 0, 0
    lfd f31, 0xf0(r1)
    psq_l f30, 0xe8(r1), 0, 0
    lfd f30, 0xe0(r1)
    lwz r31, 0xdc(r1)
    lwz r30, 0xd8(r1)
    mtlr r0
    addi r1, r1, 0x100
    blr
}

asm void fn_803009F4(void)
{
    nofralloc
    stwu r1, -0x210(r1)
    mflr r0
    stw r0, 0x214(r1)
    li r0, 0x0
    stw r31, 0x20c(r1)
    mr r31, r3
    stw r0, 0x14f0(r3)
    stw r0, 0x14f4(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80884A20
    li r4, 0x2
    bl fn_80097CCC
    li r0, 0x9
    stw r0, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lfs f0, lbl_80884A5C
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80884A20
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x143
    lfs f2, lbl_80884A60
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x200
    bl memset
    lwz r4, lbl_8087F1E4
    addi r3, r1, 0x8
    lwz r4, 0x514(r4)
    cmpwi r4, 0x0
    beq lbl_fn_803009F4_00000450
    b lbl_fn_803009F4_00000454
lbl_fn_803009F4_00000450:
    la r4, lbl_808813D0
lbl_fn_803009F4_00000454:
    lwz r5, 0x60(r31)
    lwz r5, 0x4(r5)
    crclr 6
    bl fn_800DD3FC
    lwz r3, lbl_8087F048
    addi r4, r1, 0x8
    bl fn_80109828
    lwz r0, 0x214(r1)
    lwz r31, 0x20c(r1)
    mtlr r0
    addi r1, r1, 0x210
    blr
}

asm void fn_80300AD8(void)
{
    nofralloc
    stwu r1, -0x390(r1)
    mflr r0
    stw r0, 0x394(r1)
    li r0, 0x0
    stw r31, 0x38c(r1)
    stw r30, 0x388(r1)
    mr r30, r3
    stw r0, 0x14f0(r3)
    stw r0, 0x14f4(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80884A20
    li r4, 0x2
    bl fn_80097CCC
    li r0, 0xa
    stw r0, 0x58c(r30)
    mr r3, r30
    li r4, 0x3
    bl fn_8016E970
    lfs f0, lbl_80884A5C
    li r0, 0x1
    stw r0, 0x3fc(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80884A20
    li r4, 0x0
    stfs f0, 0x2fc(r30)
    li r5, 0x14a
    lfs f2, lbl_80884A60
    li r6, 0x0
    stfs f0, 0x2e8(r30)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f7, lbl_80884A20
    addi r31, r1, 0x158
    lfs f8, 0x16bc(r30)
    stfs f7, 0x15d8(r30)
    lfs f0, lbl_80884A5C
    stfs f7, 0x15dc(r30)
    stfs f8, 0x15e0(r30)
    stfs f7, 0x184(r1)
    stfs f7, 0x17c(r1)
    stfs f7, 0x178(r1)
    stfs f7, 0x174(r1)
    stfs f7, 0x170(r1)
    stfs f7, 0x168(r1)
    stfs f7, 0x164(r1)
    stfs f7, 0x160(r1)
    stfs f7, 0x15c(r1)
    stfs f0, 0x180(r1)
    stfs f0, 0x16c(r1)
    stfs f0, 0x158(r1)
    lfs f1, 0x15d4(r30)
    fcmpu cr0, f7, f1
    beq lbl_fn_80300AD8_000005B8
    addi r3, r1, 0x68
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0x68
    addi r5, r1, 0x38
    bl fn_805F89F0
    addi r3, r1, 0x38
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_80300AD8_000005B8:
    lfs f0, lbl_80884A20
    lfs f1, 0x15d0(r30)
    fcmpu cr0, f0, f1
    beq lbl_fn_80300AD8_00000618
    addi r3, r1, 0xc8
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0xc8
    addi r5, r1, 0x98
    bl fn_805F89F0
    addi r3, r1, 0x98
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_80300AD8_00000618:
    lfs f0, lbl_80884A20
    lfs f1, 0x15cc(r30)
    fcmpu cr0, f0, f1
    beq lbl_fn_80300AD8_00000678
    addi r3, r1, 0x128
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0x128
    addi r5, r1, 0xf8
    bl fn_805F89F0
    addi r3, r1, 0xf8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_80300AD8_00000678:
    addi r4, r30, 0x15d8
    addi r3, r1, 0x158
    mr r5, r4
    bl fn_805F93C0
    addi r3, r30, 0x15cc
    lfs f2, 0x15d4(r30)
    psq_l f1, 0x0(r3), 0, 0
    li r0, 0x1
    psq_st f1, 0x534(r30), 0, 0
    li r4, 0xa4
    li r5, 0x1
    stfs f2, 0x53c(r30)
    stw r0, 0x15c8(r30)
    lwz r3, lbl_8087F430
    bl fn_80370AE4
    addi r3, r1, 0x188
    li r4, 0x0
    li r5, 0x200
    bl memset
    lwz r4, lbl_8087F1E4
    addi r3, r1, 0x188
    lwz r4, 0x51c(r4)
    cmpwi r4, 0x0
    beq lbl_fn_80300AD8_000006DC
    b lbl_fn_80300AD8_000006E0
lbl_fn_80300AD8_000006DC:
    la r4, lbl_808813D0
lbl_fn_80300AD8_000006E0:
    lwz r5, 0x60(r30)
    lwz r5, 0x4(r5)
    crclr 6
    bl fn_800DD3FC
    lwz r3, lbl_8087F048
    addi r4, r1, 0x188
    bl fn_80109828
    lwz r0, 0x12a4(r30)
    extrwi. r0, r0, 1, 9
    beq lbl_fn_80300AD8_00000718
    lwz r3, lbl_8087F430
    li r4, 0xa7
    li r5, 0x1
    bl fn_80370AE4
lbl_fn_80300AD8_00000718:
    mr r3, r30
    li r4, 0x190
    bl fn_80232B7C
    lfs f0, lbl_80884A20
    li r3, -0x1
    lfs f1, lbl_80884A5C
    li r0, 0x1
    stfs f0, 0x1c(r1)
    addi r4, r30, 0x15a0
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
    lwz r0, 0x394(r1)
    lwz r31, 0x38c(r1)
    lwz r30, 0x388(r1)
    mtlr r0
    addi r1, r1, 0x390
    blr
}

asm void fn_80300DF4(void)
{
    nofralloc
    stwu r1, -0x190(r1)
    mflr r0
    stw r0, 0x194(r1)
    li r0, 0x0
    stw r31, 0x18c(r1)
    stw r30, 0x188(r1)
    mr r30, r3
    stw r0, 0x14f0(r3)
    stw r0, 0x14f4(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80884A20
    li r4, 0x2
    bl fn_80097CCC
    li r0, 0xb
    stw r0, 0x58c(r30)
    mr r3, r30
    li r4, 0x3
    bl fn_8016E970
    lfs f0, lbl_80884A5C
    li r0, 0x1
    stw r0, 0x3fc(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80884A20
    li r4, 0x0
    stfs f0, 0x2fc(r30)
    li r5, 0x14a
    lfs f2, lbl_80884A60
    li r6, 0x0
    stfs f0, 0x2e8(r30)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f7, lbl_80884A20
    addi r31, r1, 0x158
    stfs f7, 0x15d8(r30)
    lfs f0, lbl_80884A5C
    stfs f7, 0x15dc(r30)
    stfs f7, 0x15e0(r30)
    stfs f7, 0x184(r1)
    stfs f7, 0x17c(r1)
    stfs f7, 0x178(r1)
    stfs f7, 0x174(r1)
    stfs f7, 0x170(r1)
    stfs f7, 0x168(r1)
    stfs f7, 0x164(r1)
    stfs f7, 0x160(r1)
    stfs f7, 0x15c(r1)
    stfs f0, 0x180(r1)
    stfs f0, 0x16c(r1)
    stfs f0, 0x158(r1)
    lfs f1, 0x53c(r30)
    fcmpu cr0, f7, f1
    beq lbl_fn_80300DF4_000008D0
    addi r3, r1, 0x68
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0x68
    addi r5, r1, 0x38
    bl fn_805F89F0
    addi r3, r1, 0x38
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_80300DF4_000008D0:
    lfs f0, lbl_80884A20
    lfs f1, 0x538(r30)
    fcmpu cr0, f0, f1
    beq lbl_fn_80300DF4_00000930
    addi r3, r1, 0xc8
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0xc8
    addi r5, r1, 0x98
    bl fn_805F89F0
    addi r3, r1, 0x98
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_80300DF4_00000930:
    lfs f0, lbl_80884A20
    lfs f1, 0x534(r30)
    fcmpu cr0, f0, f1
    beq lbl_fn_80300DF4_00000990
    addi r3, r1, 0x128
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0x128
    addi r5, r1, 0xf8
    bl fn_805F89F0
    addi r3, r1, 0xf8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_80300DF4_00000990:
    addi r4, r30, 0x15d8
    addi r3, r1, 0x158
    mr r5, r4
    bl fn_805F93C0
    lfs f2, 0x53c(r30)
    addi r3, r30, 0x15cc
    li r0, 0x0
    psq_l f1, 0x534(r30), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    li r4, 0xa4
    li r5, 0x1
    stfs f2, 0x15d4(r30)
    stw r0, 0x15c8(r30)
    stb r0, 0x15c4(r30)
    lwz r3, lbl_8087F430
    bl fn_80370AE4
    lwz r3, lbl_8087F430
    li r4, 0xa5
    li r5, 0x1
    bl fn_80370AE4
    mr r3, r30
    li r4, 0x190
    bl fn_80232B7C
    lfs f0, lbl_80884A20
    li r3, -0x1
    lfs f1, lbl_80884A5C
    li r0, 0x1
    stfs f0, 0x1c(r1)
    addi r4, r30, 0x15a0
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
    lwz r0, 0x194(r1)
    lwz r31, 0x18c(r1)
    lwz r30, 0x188(r1)
    mtlr r0
    addi r1, r1, 0x190
    blr
}

asm void fn_803010BC(void)
{
    nofralloc
    stwu r1, -0x210(r1)
    mflr r0
    stw r0, 0x214(r1)
    li r0, 0x0
    stw r31, 0x20c(r1)
    mr r31, r3
    stw r0, 0x14f0(r3)
    stw r0, 0x14f4(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80884A20
    li r4, 0x2
    bl fn_80097CCC
    li r0, 0xc
    stw r0, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lfs f0, lbl_80884A5C
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80884A20
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x14d
    lfs f2, lbl_80884A60
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r4, 0x1670(r31)
    mr r3, r31
    bl fn_8017A300
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x200
    bl memset
    lwz r4, lbl_8087F1E4
    addi r3, r1, 0x8
    lwz r4, 0x524(r4)
    cmpwi r4, 0x0
    beq lbl_fn_803010BC_00000B24
    b lbl_fn_803010BC_00000B28
lbl_fn_803010BC_00000B24:
    la r4, lbl_808813D0
lbl_fn_803010BC_00000B28:
    lwz r5, 0x60(r31)
    lwz r5, 0x4(r5)
    crclr 6
    bl fn_800DD3FC
    lwz r3, lbl_8087F048
    addi r4, r1, 0x8
    bl fn_80109828
    lwz r4, lbl_8087F1E4
    addi r3, r1, 0x8
    lwz r4, 0x52c(r4)
    cmpwi r4, 0x0
    beq lbl_fn_803010BC_00000B5C
    b lbl_fn_803010BC_00000B60
lbl_fn_803010BC_00000B5C:
    la r4, lbl_808813D0
lbl_fn_803010BC_00000B60:
    lwz r5, 0x60(r31)
    lwz r5, 0x4(r5)
    crclr 6
    bl fn_800DD3FC
    lwz r3, lbl_8087F048
    addi r4, r1, 0x8
    bl fn_80109828
    lwz r0, 0x12a4(r31)
    extrwi. r0, r0, 1, 9
    beq lbl_fn_803010BC_00000B98
    lwz r3, lbl_8087F430
    li r4, 0xa8
    li r5, 0x1
    bl fn_80370AE4
lbl_fn_803010BC_00000B98:
    lwz r0, 0x214(r1)
    lwz r31, 0x20c(r1)
    mtlr r0
    addi r1, r1, 0x210
    blr
}

asm void fn_80301200(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r31, 0xc(r1)
    mr r31, r3
    stw r0, 0x14f0(r3)
    stw r0, 0x14f4(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80884A20
    li r4, 0x2
    bl fn_80097CCC
    li r0, 0xd
    stw r0, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lfs f0, lbl_80884A5C
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80884A20
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x2
    lfs f2, lbl_80884A60
    li r6, 0x1
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r3, lbl_8087F430
    li r4, 0xa3
    li r5, 0x1
    bl fn_80370AE4
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803012AC(void)
{
    nofralloc
    stwu r1, -0x3d0(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x3d4(r1)
    stfd f31, 0x3c0(r1)
    psq_st f31, 0x3c8(r1), 0, 0
    stw r31, 0x3bc(r1)
    stw r30, 0x3b8(r1)
    mr r30, r3
    stw r29, 0x3b4(r1)
    stw r28, 0x3b0(r1)
    lfs f31, 0x2e4(r3)
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_803012AC_00000DF8
    lwz r3, 0x1434(r30)
    lwz r4, 0x5c0(r30)
    lwz r0, 0x12a4(r30)
    cmpwi r3, 0x0
    clrrwi r4, r4, 1
    stw r4, 0x5c0(r30)
    oris r0, r0, 0x200
    stw r0, 0x12a4(r30)
    ble lbl_fn_803012AC_00000DB8
    subi r0, r3, 0x1
    stw r0, 0x1434(r30)
    cmpwi r0, 0x3c
    bne lbl_fn_803012AC_00000DA0
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x12c
    li r6, 0x1
    bl fn_80239DAC
    li r3, 0xfa2
    bl fn_80219E6C
    cmpwi r3, 0x0
    beq lbl_fn_803012AC_00001010
    li r3, 0x0
    li r4, 0x0
    bl fn_80232B7C
    lfs f0, lbl_80884A20
    li r11, -0x1
    lfs f1, lbl_80884A5C
    li r0, 0x1
    stfs f0, 0x5c(r1)
    addi r4, r30, 0x1534
    lwz r3, lbl_8087F3C0
    addi r5, r30, 0xb0
    stfs f0, 0x60(r1)
    addi r7, r1, 0x50
    addi r8, r1, 0x5c
    addi r9, r1, 0x68
    stfs f0, 0x64(r1)
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x50(r1)
    stfs f0, 0x54(r1)
    stfs f0, 0x58(r1)
    stfs f1, 0x68(r1)
    stfs f1, 0x6c(r1)
    stfs f1, 0x70(r1)
    stfs f1, 0x74(r1)
    stw r11, 0x8(r1)
    stw r0, 0xc(r1)
    bl fn_8023A8B4
    lis r4, lbl_80748A14@ha
    lfs f1, lbl_80884A5C
    addi r4, r4, lbl_80748A14@l
    addi r3, r1, 0x10
    addi r4, r4, 0x170
    addi r5, r30, 0x528
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    lwz r3, lbl_8087F048
    bl fn_800F8548
    b lbl_fn_803012AC_00001010
lbl_fn_803012AC_00000DA0:
    cmpwi r0, 0x32
    bne lbl_fn_803012AC_00001010
    mr r3, r30
    li r4, 0x0
    bl fn_8016E4C4
    b lbl_fn_803012AC_00001010
lbl_fn_803012AC_00000DB8:
    lwz r3, lbl_8087F430
    li r4, 0xd0
    li r5, 0x0
    li r6, 0x0
    bl fn_80370320
    lwz r4, lbl_8087EFA8
    mr r3, r30
    lfs f0, lbl_80884A5C
    stfs f0, 0x3a4(r4)
    lwz r0, 0x12a4(r30)
    ori r0, r0, 0x8000
    stw r0, 0x12a4(r30)
    bl fn_801765D8
    mr r3, r30
    bl fn_800EE360
    b lbl_fn_803012AC_00001010
lbl_fn_803012AC_00000DF8:
    lwz r3, lbl_8087EFA8
    lfs f0, lbl_80884A9C
    stfs f0, 0x3a4(r3)
    lwz r0, 0x15b0(r30)
    cmpwi r0, 0x0
    ble lbl_fn_803012AC_00000E8C
    subic. r0, r0, 0x1
    stw r0, 0x15b0(r30)
    bne lbl_fn_803012AC_00000E8C
    mr r3, r30
    li r4, 0x12c
    bl fn_80232B7C
    lfs f0, lbl_80884A20
    li r11, -0x1
    lfs f1, lbl_80884A5C
    li r0, 0x1
    stfs f0, 0x34(r1)
    addi r4, r30, 0x1528
    lwz r3, lbl_8087F3C0
    addi r5, r30, 0xb0
    stfs f0, 0x38(r1)
    addi r7, r1, 0x28
    addi r8, r1, 0x34
    addi r9, r1, 0x40
    stfs f0, 0x3c(r1)
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x28(r1)
    stfs f0, 0x2c(r1)
    stfs f0, 0x30(r1)
    stfs f1, 0x40(r1)
    stfs f1, 0x44(r1)
    stfs f1, 0x48(r1)
    stfs f1, 0x4c(r1)
    stw r11, 0x8(r1)
    stw r0, 0xc(r1)
    bl fn_8023A8B4
lbl_fn_803012AC_00000E8C:
    lbz r0, 0x1684(r30)
    cmpwi r0, 0x0
    beq lbl_fn_803012AC_00000F14
    lfs f9, 0x2e4(r30)
    lfs f0, lbl_80884AC4
    fcmpo cr0, f9, f0
    cror eq, gt, eq
    bne lbl_fn_803012AC_00001010
    lfs f0, lbl_80884AC8
    fcmpo cr0, f9, f0
    bge lbl_fn_803012AC_00001010
    mr r3, r30
    li r4, 0x12d
    bl fn_80232B7C
    lfs f1, lbl_80884A5C
    lis r8, lbl_807C7030@ha
    stfs f1, 0x18(r1)
    li r11, -0x1
    lwz r3, lbl_8087F3C0
    li r0, 0x1
    stfs f1, 0x1c(r1)
    addi r4, r30, 0x157c
    addi r7, r30, 0x528
    addi r8, r8, lbl_807C7030@l
    stfs f1, 0x20(r1)
    addi r9, r1, 0x18
    li r5, 0x0
    li r6, 0x0
    stfs f1, 0x24(r1)
    li r10, -0x1
    stw r11, 0x8(r1)
    stw r0, 0xc(r1)
    bl fn_8023A8B4
    b lbl_fn_803012AC_00001010
lbl_fn_803012AC_00000F14:
    lfs f9, 0x528(r30)
    lfs f0, lbl_80884AD0
    lfs f11, lbl_80884ACC
    lfs f10, lbl_80884A20
    fcmpo cr0, f9, f0
    stfs f11, 0x530(r30)
    stfs f10, 0x52c(r30)
    bge lbl_fn_803012AC_00000F40
    lfs f0, lbl_80884A68
    stfs f0, 0x538(r30)
    b lbl_fn_803012AC_00000FFC
lbl_fn_803012AC_00000F40:
    lfs f0, lbl_80884AD4
    fcmpo cr0, f9, f0
    ble lbl_fn_803012AC_00000F58
    lfs f0, lbl_80884A6C
    stfs f0, 0x538(r30)
    b lbl_fn_803012AC_00000FFC
lbl_fn_803012AC_00000F58:
    lfs f9, lbl_80884A68
    lis r3, lbl_807489F8@ha
    lfs f0, 0x538(r30)
    lfd f2, lbl_807489F8@l(r3)
    fsubs f1, f9, f0
    bl fn_8068AEA8
    frsp f31, f1
    lfs f0, lbl_80884A88
    fcmpo cr0, f31, f0
    ble lbl_fn_803012AC_00000F88
    lfs f0, lbl_80884A8C
    fsubs f31, f31, f0
lbl_fn_803012AC_00000F88:
    lfs f0, lbl_80884A90
    fcmpo cr0, f31, f0
    bge lbl_fn_803012AC_00000F9C
    lfs f0, lbl_80884A8C
    fadds f31, f31, f0
lbl_fn_803012AC_00000F9C:
    lfs f9, lbl_80884A6C
    lis r3, lbl_807489F8@ha
    lfs f0, 0x538(r30)
    lfd f2, lbl_807489F8@l(r3)
    fsubs f1, f9, f0
    bl fn_8068AEA8
    frsp f9, f1
    lfs f0, lbl_80884A88
    fcmpo cr0, f9, f0
    ble lbl_fn_803012AC_00000FCC
    lfs f0, lbl_80884A8C
    fsubs f9, f9, f0
lbl_fn_803012AC_00000FCC:
    lfs f0, lbl_80884A90
    fcmpo cr0, f9, f0
    bge lbl_fn_803012AC_00000FE0
    lfs f0, lbl_80884A8C
    fadds f9, f9, f0
lbl_fn_803012AC_00000FE0:
    fcmpo cr0, f31, f9
    bge lbl_fn_803012AC_00000FF4
    lfs f0, lbl_80884A68
    stfs f0, 0x538(r30)
    b lbl_fn_803012AC_00000FFC
lbl_fn_803012AC_00000FF4:
    lfs f0, lbl_80884A6C
    stfs f0, 0x538(r30)
lbl_fn_803012AC_00000FFC:
    lfs f0, lbl_80884A20
    mr r3, r30
    stfs f0, 0x534(r30)
    stfs f0, 0x53c(r30)
    bl fn_80144710
lbl_fn_803012AC_00001010:
    lbz r0, 0x1684(r30)
    slwi r0, r0, 3
    add r3, r30, r0
    addi r3, r3, 0x1674
    bl fn_804786F8
    li r4, 0x0
    bl fn_805BDCC0
    lwz r10, lbl_8087F430
    addi r9, r1, 0x1c0
    addi r8, r1, 0x1cc
    addi r7, r1, 0x1d8
    lwz r0, 0x260(r10)
    addi r6, r1, 0x1e4
    stw r0, 0x1b8(r1)
    addi r5, r1, 0x210
    addi r4, r1, 0x240
    mr r31, r3
    lwz r0, 0x264(r10)
    stw r0, 0x1bc(r1)
    psq_l f1, 0x268(r10), 0, 0
    lfs f2, 0x270(r10)
    stfs f2, 0x1c8(r1)
    psq_st f1, 0x0(r9), 0, 0
    psq_l f1, 0x274(r10), 0, 0
    lfs f2, 0x27c(r10)
    stfs f2, 0x1d4(r1)
    psq_st f1, 0x0(r8), 0, 0
    psq_l f1, 0x280(r10), 0, 0
    lfs f2, 0x288(r10)
    stfs f2, 0x1e0(r1)
    psq_st f1, 0x0(r7), 0, 0
    psq_l f1, 0x28c(r10), 0, 0
    lfs f2, 0x294(r10)
    stfs f2, 0x1ec(r1)
    psq_st f1, 0x0(r6), 0, 0
    lfs f0, 0x298(r10)
    stfs f0, 0x1f0(r1)
    lfs f0, 0x29c(r10)
    stfs f0, 0x1f4(r1)
    lfs f0, 0x2a0(r10)
    stfs f0, 0x1f8(r1)
    lfs f0, 0x2a4(r10)
    stfs f0, 0x1fc(r1)
    lfs f0, 0x2a8(r10)
    stfs f0, 0x200(r1)
    lfs f0, 0x2ac(r10)
    stfs f0, 0x204(r1)
    lfs f0, 0x2b0(r10)
    stfs f0, 0x208(r1)
    lfs f0, 0x2b4(r10)
    stfs f0, 0x20c(r1)
    psq_l f1, 0x2b8(r10), 0, 0
    psq_l f2, 0x2c0(r10), 0, 0
    psq_l f3, 0x2c8(r10), 0, 0
    psq_l f4, 0x2d0(r10), 0, 0
    psq_l f5, 0x2d8(r10), 0, 0
    psq_l f6, 0x2e0(r10), 0, 0
    psq_st f6, 0x28(r5), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    psq_st f2, 0x8(r5), 0, 0
    psq_st f3, 0x10(r5), 0, 0
    psq_st f4, 0x18(r5), 0, 0
    psq_st f5, 0x20(r5), 0, 0
    psq_l f1, 0x2e8(r10), 0, 0
    psq_l f2, 0x2f0(r10), 0, 0
    psq_l f3, 0x2f8(r10), 0, 0
    psq_l f4, 0x300(r10), 0, 0
    psq_l f5, 0x308(r10), 0, 0
    psq_l f6, 0x310(r10), 0, 0
    psq_l f7, 0x318(r10), 0, 0
    psq_l f8, 0x320(r10), 0, 0
    psq_st f8, 0x38(r4), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    psq_st f2, 0x8(r4), 0, 0
    psq_st f3, 0x10(r4), 0, 0
    psq_st f4, 0x18(r4), 0, 0
    psq_st f5, 0x20(r4), 0, 0
    psq_st f6, 0x28(r4), 0, 0
    psq_st f7, 0x30(r4), 0, 0
    lfs f0, 0x328(r10)
    addi r6, r1, 0x2b8
    stfs f0, 0x280(r1)
    addi r3, r1, 0x288
    addi r4, r6, 0x94
    addi r5, r10, 0x3f4
    lfs f0, 0x32c(r10)
    addi r0, r6, 0xf4
    stfs f0, 0x284(r1)
    psq_l f1, 0x330(r10), 0, 0
    psq_l f2, 0x338(r10), 0, 0
    psq_l f3, 0x340(r10), 0, 0
    psq_l f4, 0x348(r10), 0, 0
    psq_l f5, 0x350(r10), 0, 0
    psq_l f6, 0x358(r10), 0, 0
    psq_st f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f4, 0x18(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    psq_l f1, 0x360(r10), 0, 0
    psq_l f2, 0x368(r10), 0, 0
    psq_l f3, 0x370(r10), 0, 0
    psq_l f4, 0x378(r10), 0, 0
    psq_l f5, 0x380(r10), 0, 0
    psq_l f6, 0x388(r10), 0, 0
    psq_st f6, 0x28(r6), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    psq_st f2, 0x8(r6), 0, 0
    psq_st f3, 0x10(r6), 0, 0
    psq_st f4, 0x18(r6), 0, 0
    psq_st f5, 0x20(r6), 0, 0
    lwz r3, 0x390(r10)
    stw r3, 0x2e8(r1)
    lfs f0, 0x394(r10)
    stfs f0, 0x2ec(r1)
    lfs f0, 0x398(r10)
    stfs f0, 0x2f0(r1)
    psq_l f1, 0x39c(r10), 0, 0
    lfs f2, 0x3a4(r10)
    stfs f2, 0x2fc(r1)
    psq_st f1, 0x3c(r6), 0, 0
    lfs f0, 0x3a8(r10)
    stfs f0, 0x300(r1)
    psq_l f1, 0x3ac(r10), 0, 0
    lfs f2, 0x3b4(r10)
    stfs f2, 0x30c(r1)
    psq_st f1, 0x4c(r6), 0, 0
    lfs f0, 0x3b8(r10)
    stfs f0, 0x310(r1)
    psq_l f1, 0x3bc(r10), 0, 0
    lfs f2, 0x3c4(r10)
    stfs f2, 0x31c(r1)
    psq_st f1, 0x5c(r6), 0, 0
    lfs f0, 0x3c8(r10)
    stfs f0, 0x320(r1)
    psq_l f1, 0x3cc(r10), 0, 0
    lfs f2, 0x3d4(r10)
    stfs f2, 0x32c(r1)
    psq_st f1, 0x6c(r6), 0, 0
    lfs f0, 0x3d8(r10)
    stfs f0, 0x330(r1)
    psq_l f1, 0x3dc(r10), 0, 0
    lfs f2, 0x3e4(r10)
    stfs f2, 0x33c(r1)
    psq_st f1, 0x7c(r6), 0, 0
    psq_l f1, 0x3e8(r10), 0, 0
    lfs f2, 0x3f0(r10)
    stfs f2, 0x348(r1)
    psq_st f1, 0x88(r6), 0, 0
lbl_fn_803012AC_00001268:
    lfs f2, 0x8(r5)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x8(r4)
    lfs f0, 0xc(r5)
    addi r5, r5, 0x10
    stfs f0, 0xc(r4)
    addi r4, r4, 0x10
    cmplw r4, r0
    blt lbl_fn_803012AC_00001268
    lfs f1, 0x1688(r30)
    mr r3, r31
    addi r4, r1, 0x9c
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl fn_805BF414
    lfs f1, 0x1688(r30)
    mr r3, r31
    addi r4, r1, 0x90
    li r5, 0x7
    li r6, 0x8
    li r7, 0x9
    bl fn_805BF414
    psq_l f1, 0xb8(r30), 0, 0
    addi r29, r1, 0x138
    psq_l f2, 0xc0(r30), 0, 0
    psq_l f3, 0xc8(r30), 0, 0
    psq_l f4, 0xd0(r30), 0, 0
    psq_l f5, 0xd8(r30), 0, 0
    psq_l f6, 0xe0(r30), 0, 0
    psq_st f6, 0x28(r29), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    lbz r0, 0x1684(r30)
    cmpwi r0, 0x0
    beq lbl_fn_803012AC_0000135C
    lfs f1, lbl_80884A88
    addi r3, r1, 0xd8
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0xd8
    addi r5, r1, 0xa8
    bl fn_805F89F0
    addi r3, r1, 0xa8
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
lbl_fn_803012AC_0000135C:
    addi r4, r1, 0x9c
    addi r3, r1, 0x138
    mr r5, r4
    bl fn_805F93C0
    addi r4, r1, 0x90
    addi r3, r1, 0x138
    mr r5, r4
    bl fn_805F93C0
    li r0, 0x0
    lis r7, 0x8000
    stw r0, 0x19c(r1)
    addi r4, r1, 0x168
    lwz r3, lbl_8087EE98
    addi r5, r1, 0x90
    stw r0, 0x1a0(r1)
    addi r6, r1, 0x9c
    addi r7, r7, 0x8
    li r8, 0x0
    stw r0, 0x1a4(r1)
    li r9, 0x0
    stw r0, 0x1a8(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_803012AC_000013D8
    addi r4, r1, 0x16c
    lfs f2, 0x174(r1)
    addi r3, r1, 0x9c
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0xa4(r1)
    b lbl_fn_803012AC_00001414
lbl_fn_803012AC_000013D8:
    lfs f0, 0x2e4(r30)
    fcmpo cr0, f0, f0
    ble lbl_fn_803012AC_00001400
    lwz r3, lbl_8087EFA8
    lfs f9, lbl_80884A9C
    lfs f10, 0x3a4(r3)
    lfs f0, 0x1688(r30)
    fmadds f0, f9, f10, f0
    stfs f0, 0x1688(r30)
    b lbl_fn_803012AC_00001414
lbl_fn_803012AC_00001400:
    lwz r3, lbl_8087EFA8
    lfs f0, 0x1688(r30)
    lfs f9, 0x3a4(r3)
    fadds f0, f0, f9
    stfs f0, 0x1688(r30)
lbl_fn_803012AC_00001414:
    addi r3, r1, 0x9c
    lfs f2, 0xa4(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r29, r1, 0x1c0
    stfs f2, 0x1c8(r1)
    addi r4, r1, 0x90
    lfs f2, 0x98(r1)
    addi r28, r1, 0x1cc
    psq_st f1, 0x0(r29), 0, 0
    mr r3, r31
    psq_l f1, 0x0(r4), 0, 0
    li r4, 0x0
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x1d4(r1)
    lfs f1, 0x1688(r30)
    bl fn_805BF208
    lfs f9, lbl_80884AC0
    lfs f0, lbl_80884A9C
    fmuls f9, f9, f1
    lfs f31, 0x20c(r1)
    fmuls f1, f0, f9
    bl fn_8068AE24
    frsp f0, f1
    fdivs f1, f0, f31
    bl fn_8068A4A8
    frsp f11, f1
    lfs f9, lbl_80884A20
    lfs f10, lbl_80884AD8
    mr r3, r31
    lfs f0, lbl_80884A5C
    addi r4, r1, 0x78
    fmuls f10, f10, f11
    stfs f9, 0x84(r1)
    li r5, 0x4
    li r6, 0x5
    stfs f10, 0x208(r1)
    li r7, 0x6
    stfs f0, 0x88(r1)
    stfs f9, 0x8c(r1)
    lfs f1, 0x1688(r30)
    bl fn_805BF414
    lfs f9, 0x80(r1)
    addi r3, r1, 0x108
    lfs f0, lbl_80884AC0
    li r4, 0x7a
    fmuls f1, f0, f9
    bl fn_805F8E70
    addi r4, r1, 0x84
    addi r3, r1, 0x108
    mr r5, r4
    bl fn_805F93C0
    addi r3, r1, 0x84
    lfs f2, 0x8c(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r30, r1, 0x1d8
    psq_st f1, 0x0(r30), 0, 0
    addi r3, r1, 0x1b8
    stfs f2, 0x1e0(r1)
    bl fn_8004B378
    lwz r7, lbl_8087EFB4
    addi r3, r1, 0x1e4
    lwz r0, 0x1b8(r1)
    addi r4, r1, 0x210
    stw r0, 0x104(r7)
    addi r5, r1, 0x240
    lwz r0, 0x1bc(r1)
    stw r0, 0x108(r7)
    lfs f2, 0x1c8(r1)
    psq_l f1, 0x0(r29), 0, 0
    psq_st f1, 0x10c(r7), 0, 0
    stfs f2, 0x114(r7)
    lfs f2, 0x1d4(r1)
    psq_l f1, 0x0(r28), 0, 0
    psq_st f1, 0x118(r7), 0, 0
    stfs f2, 0x120(r7)
    lfs f2, 0x1e0(r1)
    psq_l f1, 0x0(r30), 0, 0
    psq_st f1, 0x124(r7), 0, 0
    stfs f2, 0x12c(r7)
    lfs f2, 0x1ec(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x130(r7), 0, 0
    stfs f2, 0x138(r7)
    lfs f0, 0x1f0(r1)
    stfs f0, 0x13c(r7)
    lfs f0, 0x1f4(r1)
    stfs f0, 0x140(r7)
    lfs f0, 0x1f8(r1)
    stfs f0, 0x144(r7)
    lfs f0, 0x1fc(r1)
    stfs f0, 0x148(r7)
    lfs f0, 0x200(r1)
    stfs f0, 0x14c(r7)
    lfs f0, 0x204(r1)
    stfs f0, 0x150(r7)
    lfs f0, 0x208(r1)
    stfs f0, 0x154(r7)
    lfs f0, 0x20c(r1)
    stfs f0, 0x158(r7)
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x15c(r7), 0, 0
    psq_st f2, 0x164(r7), 0, 0
    psq_st f3, 0x16c(r7), 0, 0
    psq_st f4, 0x174(r7), 0, 0
    psq_st f5, 0x17c(r7), 0, 0
    psq_st f6, 0x184(r7), 0, 0
    psq_l f2, 0x8(r5), 0, 0
    psq_l f3, 0x10(r5), 0, 0
    psq_l f4, 0x18(r5), 0, 0
    psq_l f5, 0x20(r5), 0, 0
    psq_l f6, 0x28(r5), 0, 0
    psq_l f7, 0x30(r5), 0, 0
    psq_l f8, 0x38(r5), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x18c(r7), 0, 0
    psq_st f2, 0x194(r7), 0, 0
    psq_st f3, 0x19c(r7), 0, 0
    psq_st f4, 0x1a4(r7), 0, 0
    psq_st f5, 0x1ac(r7), 0, 0
    psq_st f6, 0x1b4(r7), 0, 0
    psq_st f7, 0x1bc(r7), 0, 0
    psq_st f8, 0x1c4(r7), 0, 0
    lfs f0, 0x280(r1)
    addi r4, r1, 0x2b8
    stfs f0, 0x1cc(r7)
    addi r3, r1, 0x288
    addi r6, r7, 0x298
    addi r5, r4, 0x94
    lfs f0, 0x284(r1)
    addi r0, r7, 0x2f8
    stfs f0, 0x1d0(r7)
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x1d4(r7), 0, 0
    psq_st f2, 0x1dc(r7), 0, 0
    psq_st f3, 0x1e4(r7), 0, 0
    psq_st f4, 0x1ec(r7), 0, 0
    psq_st f5, 0x1f4(r7), 0, 0
    psq_st f6, 0x1fc(r7), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x204(r7), 0, 0
    psq_st f2, 0x20c(r7), 0, 0
    psq_st f3, 0x214(r7), 0, 0
    psq_st f4, 0x21c(r7), 0, 0
    psq_st f5, 0x224(r7), 0, 0
    psq_st f6, 0x22c(r7), 0, 0
    lwz r3, 0x2e8(r1)
    stw r3, 0x234(r7)
    lfs f0, 0x2ec(r1)
    stfs f0, 0x238(r7)
    lfs f0, 0x2f0(r1)
    stfs f0, 0x23c(r7)
    lfs f2, 0x2fc(r1)
    psq_l f1, 0x3c(r4), 0, 0
    psq_st f1, 0x240(r7), 0, 0
    stfs f2, 0x248(r7)
    lfs f0, 0x300(r1)
    stfs f0, 0x24c(r7)
    lfs f2, 0x30c(r1)
    psq_l f1, 0x4c(r4), 0, 0
    psq_st f1, 0x250(r7), 0, 0
    stfs f2, 0x258(r7)
    lfs f0, 0x310(r1)
    stfs f0, 0x25c(r7)
    lfs f2, 0x31c(r1)
    psq_l f1, 0x5c(r4), 0, 0
    psq_st f1, 0x260(r7), 0, 0
    stfs f2, 0x268(r7)
    lfs f0, 0x320(r1)
    stfs f0, 0x26c(r7)
    lfs f2, 0x32c(r1)
    psq_l f1, 0x6c(r4), 0, 0
    psq_st f1, 0x270(r7), 0, 0
    stfs f2, 0x278(r7)
    lfs f0, 0x330(r1)
    stfs f0, 0x27c(r7)
    lfs f2, 0x33c(r1)
    psq_l f1, 0x7c(r4), 0, 0
    psq_st f1, 0x280(r7), 0, 0
    stfs f2, 0x288(r7)
    lfs f2, 0x348(r1)
    psq_l f1, 0x88(r4), 0, 0
    psq_st f1, 0x28c(r7), 0, 0
    stfs f2, 0x294(r7)
lbl_fn_803012AC_0000172C:
    lfs f2, 0x8(r5)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x8(r6)
    lfs f0, 0xc(r5)
    addi r5, r5, 0x10
    stfs f0, 0xc(r6)
    addi r6, r6, 0x10
    cmplw r6, r0
    blt lbl_fn_803012AC_0000172C
    addi r3, r1, 0x1b8
    li r4, -0x1
    bl fn_8004B338
    lwz r0, 0x3d4(r1)
    psq_l f31, 0x3c8(r1), 0, 0
    lfd f31, 0x3c0(r1)
    lwz r31, 0x3bc(r1)
    lwz r30, 0x3b8(r1)
    lwz r29, 0x3b4(r1)
    lwz r28, 0x3b0(r1)
    mtlr r0
    addi r1, r1, 0x3d0
    blr
}

asm void fn_80301DDC(void)
{
    nofralloc
    stwu r1, -0x5e0(r1)
    mflr r0
    stw r0, 0x5e4(r1)
    stfd f31, 0x5d0(r1)
    psq_st f31, 0x5d8(r1), 0, 0
    stw r31, 0x5cc(r1)
    mr r31, r3
    stw r30, 0x5c8(r1)
    stw r29, 0x5c4(r1)
    stw r28, 0x5c0(r1)
    lwz r0, 0x14f0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80301DDC_00001990
    lwz r4, 0x14f4(r3)
    lwz r0, 0x16a0(r3)
    cmpw r4, r0
    ble lbl_fn_80301DDC_0000192C
    lfs f0, lbl_80884A5C
    li r29, 0x1
    li r0, 0x0
    stw r0, 0x14f4(r3)
    lfs f1, lbl_80884A20
    li r4, 0x0
    stw r29, 0x14f0(r3)
    li r5, 0x147
    lfs f2, lbl_80884A60
    li r6, 0x0
    stw r29, 0x3fc(r3)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2fc(r3)
    stfs f0, 0x2e8(r3)
    addi r3, r3, 0xb0
    bl fn_80097C08
    mr r3, r31
    li r4, 0x12e
    bl fn_80232B7C
    lfs f0, lbl_80884A20
    li r28, -0x1
    lfs f1, lbl_80884A5C
    addi r4, r31, 0x1540
    stfs f0, 0x44(r1)
    addi r5, r31, 0xb0
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
    stw r28, 0x8(r1)
    stw r29, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    mr r3, r31
    li r4, 0x140
    bl fn_80232B7C
    lfs f0, lbl_80884A20
    addi r4, r31, 0x1558
    lfs f1, lbl_80884A5C
    addi r5, r31, 0xb0
    stfs f0, 0x1c(r1)
    addi r7, r1, 0x10
    addi r8, r1, 0x1c
    addi r9, r1, 0x28
    stfs f0, 0x20(r1)
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
    stw r28, 0x8(r1)
    stw r29, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    addi r3, r1, 0x3b8
    li r4, 0x0
    li r5, 0x200
    bl memset
    lwz r4, lbl_8087F1E4
    addi r3, r1, 0x3b8
    lwz r4, 0x534(r4)
    cmpwi r4, 0x0
    beq lbl_fn_80301DDC_0000190C
    b lbl_fn_80301DDC_00001910
lbl_fn_80301DDC_0000190C:
    la r4, lbl_808813D0
lbl_fn_80301DDC_00001910:
    lwz r5, 0x60(r31)
    lwz r5, 0x4(r5)
    crclr 6
    bl fn_800DD3FC
    lwz r3, lbl_8087F048
    addi r4, r1, 0x3b8
    bl fn_80109828
lbl_fn_80301DDC_0000192C:
    lwz r0, 0x2dc(r31)
    cmpwi r0, 0x145
    bne lbl_fn_80301DDC_00002074
    lfs f31, 0x2e4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_80301DDC_00002074
    lfs f0, lbl_80884A5C
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80884A20
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x146
    lfs f2, lbl_80884A60
    li r6, 0x1
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_80301DDC_00002074
lbl_fn_80301DDC_00001990:
    cmpwi r0, 0x1
    bne lbl_fn_80301DDC_00002074
    lfs f31, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_80301DDC_000019F8
    li r28, 0x0
    stw r28, 0x14f0(r31)
    stw r28, 0x14f4(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80884A20
    li r4, 0x2
    bl fn_80097CCC
    stw r28, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lwz r3, 0x15f0(r31)
    addi r0, r3, 0x1
    stw r0, 0x15f0(r31)
lbl_fn_80301DDC_000019F8:
    lwz r0, 0x14f4(r31)
    cmpwi r0, 0x28
    bne lbl_fn_80301DDC_00001A0C
    li r0, 0x1
    stb r0, 0x15b8(r31)
lbl_fn_80301DDC_00001A0C:
    lwz r0, 0x1690(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80301DDC_00002074
    lfs f8, 0x16ac(r31)
    addi r28, r1, 0x388
    lfs f7, lbl_80884A20
    lfs f0, lbl_80884A5C
    stfs f7, 0xa8(r1)
    stfs f7, 0xac(r1)
    stfs f8, 0xb0(r1)
    stfs f7, 0x3b4(r1)
    stfs f7, 0x3ac(r1)
    stfs f7, 0x3a8(r1)
    stfs f7, 0x3a4(r1)
    stfs f7, 0x3a0(r1)
    stfs f7, 0x398(r1)
    stfs f7, 0x394(r1)
    stfs f7, 0x390(r1)
    stfs f7, 0x38c(r1)
    stfs f0, 0x3b0(r1)
    stfs f0, 0x39c(r1)
    stfs f0, 0x388(r1)
    lfs f1, 0x53c(r31)
    fcmpu cr0, f7, f1
    beq lbl_fn_80301DDC_00001AC0
    addi r3, r1, 0x208
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r28
    addi r4, r1, 0x208
    addi r5, r1, 0x1d8
    bl fn_805F89F0
    addi r3, r1, 0x1d8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    psq_st f2, 0x8(r28), 0, 0
    psq_st f3, 0x10(r28), 0, 0
    psq_st f4, 0x18(r28), 0, 0
    psq_st f5, 0x20(r28), 0, 0
    psq_st f6, 0x28(r28), 0, 0
lbl_fn_80301DDC_00001AC0:
    lfs f0, lbl_80884A20
    lfs f1, 0x538(r31)
    fcmpu cr0, f0, f1
    beq lbl_fn_80301DDC_00001B20
    addi r3, r1, 0x268
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r28
    addi r4, r1, 0x268
    addi r5, r1, 0x238
    bl fn_805F89F0
    addi r3, r1, 0x238
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    psq_st f2, 0x8(r28), 0, 0
    psq_st f3, 0x10(r28), 0, 0
    psq_st f4, 0x18(r28), 0, 0
    psq_st f5, 0x20(r28), 0, 0
    psq_st f6, 0x28(r28), 0, 0
lbl_fn_80301DDC_00001B20:
    lfs f0, lbl_80884A20
    lfs f1, 0x534(r31)
    fcmpu cr0, f0, f1
    beq lbl_fn_80301DDC_00001B80
    addi r3, r1, 0x2c8
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r28
    addi r4, r1, 0x2c8
    addi r5, r1, 0x298
    bl fn_805F89F0
    addi r3, r1, 0x298
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    psq_st f2, 0x8(r28), 0, 0
    psq_st f3, 0x10(r28), 0, 0
    psq_st f4, 0x18(r28), 0, 0
    psq_st f5, 0x20(r28), 0, 0
    psq_st f6, 0x28(r28), 0, 0
lbl_fn_80301DDC_00001B80:
    addi r4, r1, 0xa8
    addi r3, r1, 0x388
    mr r5, r4
    bl fn_805F93C0
    lfs f0, 0x16a4(r31)
    addi r3, r1, 0x358
    lfs f7, lbl_80884A9C
    li r4, 0x79
    fneg f8, f0
    lfs f0, lbl_80884AC0
    fmuls f7, f8, f7
    fmuls f1, f0, f7
    bl fn_805F8E70
    addi r4, r1, 0xa8
    addi r3, r1, 0x358
    mr r5, r4
    bl fn_805F93C0
    lfs f8, 0x16ac(r31)
    addi r28, r1, 0x328
    lfs f7, lbl_80884A20
    lfs f0, lbl_80884A5C
    stfs f7, 0x9c(r1)
    stfs f7, 0xa0(r1)
    stfs f8, 0xa4(r1)
    stfs f7, 0x354(r1)
    stfs f7, 0x34c(r1)
    stfs f7, 0x348(r1)
    stfs f7, 0x344(r1)
    stfs f7, 0x340(r1)
    stfs f7, 0x338(r1)
    stfs f7, 0x334(r1)
    stfs f7, 0x330(r1)
    stfs f7, 0x32c(r1)
    stfs f0, 0x350(r1)
    stfs f0, 0x33c(r1)
    stfs f0, 0x328(r1)
    lfs f1, 0x53c(r31)
    fcmpu cr0, f7, f1
    beq lbl_fn_80301DDC_00001C6C
    addi r3, r1, 0xe8
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r28
    addi r4, r1, 0xe8
    addi r5, r1, 0xb8
    bl fn_805F89F0
    addi r3, r1, 0xb8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    psq_st f2, 0x8(r28), 0, 0
    psq_st f3, 0x10(r28), 0, 0
    psq_st f4, 0x18(r28), 0, 0
    psq_st f5, 0x20(r28), 0, 0
    psq_st f6, 0x28(r28), 0, 0
lbl_fn_80301DDC_00001C6C:
    lfs f0, lbl_80884A20
    lfs f1, 0x538(r31)
    fcmpu cr0, f0, f1
    beq lbl_fn_80301DDC_00001CCC
    addi r3, r1, 0x148
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r28
    addi r4, r1, 0x148
    addi r5, r1, 0x118
    bl fn_805F89F0
    addi r3, r1, 0x118
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    psq_st f2, 0x8(r28), 0, 0
    psq_st f3, 0x10(r28), 0, 0
    psq_st f4, 0x18(r28), 0, 0
    psq_st f5, 0x20(r28), 0, 0
    psq_st f6, 0x28(r28), 0, 0
lbl_fn_80301DDC_00001CCC:
    lfs f0, lbl_80884A20
    lfs f1, 0x534(r31)
    fcmpu cr0, f0, f1
    beq lbl_fn_80301DDC_00001D2C
    addi r3, r1, 0x1a8
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r28
    addi r4, r1, 0x1a8
    addi r5, r1, 0x178
    bl fn_805F89F0
    addi r3, r1, 0x178
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    psq_st f2, 0x8(r28), 0, 0
    psq_st f3, 0x10(r28), 0, 0
    psq_st f4, 0x18(r28), 0, 0
    psq_st f5, 0x20(r28), 0, 0
    psq_st f6, 0x28(r28), 0, 0
lbl_fn_80301DDC_00001D2C:
    addi r4, r1, 0x9c
    addi r3, r1, 0x328
    mr r5, r4
    bl fn_805F93C0
    lfs f8, 0x16a4(r31)
    addi r3, r1, 0x2f8
    lfs f7, lbl_80884A9C
    li r4, 0x79
    lfs f0, lbl_80884AC0
    fmuls f7, f8, f7
    fmuls f1, f0, f7
    bl fn_805F8E70
    addi r4, r1, 0x9c
    addi r3, r1, 0x2f8
    mr r5, r4
    bl fn_805F93C0
    lfs f8, lbl_80884A5C
    stfs f8, 0x80(r1)
    fcmpo cr0, f8, f8
    stfs f8, 0x84(r1)
    stfs f8, 0x88(r1)
    stfs f8, 0x8c(r1)
    cror eq, gt, eq
    bne lbl_fn_80301DDC_00001D94
    li r30, 0xff
    b lbl_fn_80301DDC_00001DC0
lbl_fn_80301DDC_00001D94:
    lfs f0, lbl_80884A20
    fcmpo cr0, f8, f0
    cror eq, lt, eq
    bne lbl_fn_80301DDC_00001DAC
    li r3, 0x0
    b lbl_fn_80301DDC_00001DBC
lbl_fn_80301DDC_00001DAC:
    lfs f7, lbl_80884ADC
    lfs f0, lbl_80884A9C
    fmadds f1, f7, f8, f0
    bl fn_80695D84
lbl_fn_80301DDC_00001DBC:
    mr r30, r3
lbl_fn_80301DDC_00001DC0:
    lfs f8, 0x84(r1)
    lfs f0, lbl_80884A5C
    fcmpo cr0, f8, f0
    cror eq, gt, eq
    bne lbl_fn_80301DDC_00001DDC
    li r29, 0xff
    b lbl_fn_80301DDC_00001E08
lbl_fn_80301DDC_00001DDC:
    lfs f0, lbl_80884A20
    fcmpo cr0, f8, f0
    cror eq, lt, eq
    bne lbl_fn_80301DDC_00001DF4
    li r3, 0x0
    b lbl_fn_80301DDC_00001E04
lbl_fn_80301DDC_00001DF4:
    lfs f7, lbl_80884ADC
    lfs f0, lbl_80884A9C
    fmadds f1, f7, f8, f0
    bl fn_80695D84
lbl_fn_80301DDC_00001E04:
    mr r29, r3
lbl_fn_80301DDC_00001E08:
    lfs f8, 0x88(r1)
    lfs f0, lbl_80884A5C
    fcmpo cr0, f8, f0
    cror eq, gt, eq
    bne lbl_fn_80301DDC_00001E24
    li r28, 0xff
    b lbl_fn_80301DDC_00001E50
lbl_fn_80301DDC_00001E24:
    lfs f0, lbl_80884A20
    fcmpo cr0, f8, f0
    cror eq, lt, eq
    bne lbl_fn_80301DDC_00001E3C
    li r3, 0x0
    b lbl_fn_80301DDC_00001E4C
lbl_fn_80301DDC_00001E3C:
    lfs f7, lbl_80884ADC
    lfs f0, lbl_80884A9C
    fmadds f1, f7, f8, f0
    bl fn_80695D84
lbl_fn_80301DDC_00001E4C:
    mr r28, r3
lbl_fn_80301DDC_00001E50:
    lfs f8, 0x8c(r1)
    lfs f0, lbl_80884A5C
    fcmpo cr0, f8, f0
    cror eq, gt, eq
    bne lbl_fn_80301DDC_00001E6C
    li r3, 0xff
    b lbl_fn_80301DDC_00001E94
lbl_fn_80301DDC_00001E6C:
    lfs f0, lbl_80884A20
    fcmpo cr0, f8, f0
    cror eq, lt, eq
    bne lbl_fn_80301DDC_00001E84
    li r3, 0x0
    b lbl_fn_80301DDC_00001E94
lbl_fn_80301DDC_00001E84:
    lfs f7, lbl_80884ADC
    lfs f0, lbl_80884A9C
    fmadds f1, f7, f8, f0
    bl fn_80695D84
lbl_fn_80301DDC_00001E94:
    lfs f7, 0xb0(r1)
    slwi r4, r29, 8
    lfs f0, 0x530(r31)
    or r6, r28, r4
    lfs f9, 0xac(r1)
    slwi r3, r3, 24
    fadds f10, f7, f0
    lfs f8, 0x52c(r31)
    lfs f0, 0x528(r31)
    slwi r0, r30, 16
    lfs f7, 0xa8(r1)
    fadds f8, f9, f8
    or r0, r3, r0
    fadds f0, f7, f0
    stfs f8, 0x94(r1)
    addi r4, r31, 0x528
    lwz r3, lbl_8087EEB0
    addi r5, r1, 0x90
    stfs f0, 0x90(r1)
    lfs f1, lbl_80884A74
    or r6, r6, r0
    stfs f10, 0x98(r1)
    bl fn_80063764
    lfs f8, lbl_80884A5C
    stfs f8, 0x60(r1)
    fcmpo cr0, f8, f8
    stfs f8, 0x64(r1)
    stfs f8, 0x68(r1)
    stfs f8, 0x6c(r1)
    cror eq, gt, eq
    bne lbl_fn_80301DDC_00001F18
    li r28, 0xff
    b lbl_fn_80301DDC_00001F44
lbl_fn_80301DDC_00001F18:
    lfs f0, lbl_80884A20
    fcmpo cr0, f8, f0
    cror eq, lt, eq
    bne lbl_fn_80301DDC_00001F30
    li r3, 0x0
    b lbl_fn_80301DDC_00001F40
lbl_fn_80301DDC_00001F30:
    lfs f7, lbl_80884ADC
    lfs f0, lbl_80884A9C
    fmadds f1, f7, f8, f0
    bl fn_80695D84
lbl_fn_80301DDC_00001F40:
    mr r28, r3
lbl_fn_80301DDC_00001F44:
    lfs f8, 0x64(r1)
    lfs f0, lbl_80884A5C
    fcmpo cr0, f8, f0
    cror eq, gt, eq
    bne lbl_fn_80301DDC_00001F60
    li r29, 0xff
    b lbl_fn_80301DDC_00001F8C
lbl_fn_80301DDC_00001F60:
    lfs f0, lbl_80884A20
    fcmpo cr0, f8, f0
    cror eq, lt, eq
    bne lbl_fn_80301DDC_00001F78
    li r3, 0x0
    b lbl_fn_80301DDC_00001F88
lbl_fn_80301DDC_00001F78:
    lfs f7, lbl_80884ADC
    lfs f0, lbl_80884A9C
    fmadds f1, f7, f8, f0
    bl fn_80695D84
lbl_fn_80301DDC_00001F88:
    mr r29, r3
lbl_fn_80301DDC_00001F8C:
    lfs f8, 0x68(r1)
    lfs f0, lbl_80884A5C
    fcmpo cr0, f8, f0
    cror eq, gt, eq
    bne lbl_fn_80301DDC_00001FA8
    li r30, 0xff
    b lbl_fn_80301DDC_00001FD4
lbl_fn_80301DDC_00001FA8:
    lfs f0, lbl_80884A20
    fcmpo cr0, f8, f0
    cror eq, lt, eq
    bne lbl_fn_80301DDC_00001FC0
    li r3, 0x0
    b lbl_fn_80301DDC_00001FD0
lbl_fn_80301DDC_00001FC0:
    lfs f7, lbl_80884ADC
    lfs f0, lbl_80884A9C
    fmadds f1, f7, f8, f0
    bl fn_80695D84
lbl_fn_80301DDC_00001FD0:
    mr r30, r3
lbl_fn_80301DDC_00001FD4:
    lfs f8, 0x6c(r1)
    lfs f0, lbl_80884A5C
    fcmpo cr0, f8, f0
    cror eq, gt, eq
    bne lbl_fn_80301DDC_00001FF0
    li r3, 0xff
    b lbl_fn_80301DDC_00002018
lbl_fn_80301DDC_00001FF0:
    lfs f0, lbl_80884A20
    fcmpo cr0, f8, f0
    cror eq, lt, eq
    bne lbl_fn_80301DDC_00002008
    li r3, 0x0
    b lbl_fn_80301DDC_00002018
lbl_fn_80301DDC_00002008:
    lfs f7, lbl_80884ADC
    lfs f0, lbl_80884A9C
    fmadds f1, f7, f8, f0
    bl fn_80695D84
lbl_fn_80301DDC_00002018:
    lfs f7, 0xa4(r1)
    slwi r4, r29, 8
    lfs f0, 0x530(r31)
    or r6, r30, r4
    lfs f9, 0xa0(r1)
    slwi r3, r3, 24
    fadds f10, f7, f0
    lfs f8, 0x52c(r31)
    lfs f0, 0x528(r31)
    slwi r0, r28, 16
    lfs f7, 0x9c(r1)
    fadds f8, f9, f8
    or r0, r3, r0
    fadds f0, f7, f0
    stfs f8, 0x74(r1)
    addi r4, r31, 0x528
    lwz r3, lbl_8087EEB0
    addi r5, r1, 0x70
    stfs f0, 0x70(r1)
    lfs f1, lbl_80884A74
    or r6, r6, r0
    stfs f10, 0x78(r1)
    bl fn_80063764
lbl_fn_80301DDC_00002074:
    lwz r0, 0x5e4(r1)
    psq_l f31, 0x5d8(r1), 0, 0
    lfd f31, 0x5d0(r1)
    lwz r31, 0x5cc(r1)
    lwz r30, 0x5c8(r1)
    lwz r29, 0x5c4(r1)
    lwz r28, 0x5c0(r1)
    mtlr r0
    addi r1, r1, 0x5e0
    blr
}
