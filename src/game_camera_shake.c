#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_14(void);
extern void _restgpr_26(void);
extern void _savegpr_14(void);
extern void _savegpr_26(void);
extern void dtor_80084684(void);
extern void fn_800844D8(void);
extern void fn_80097C08(void);
extern void fn_80097CCC(void);
extern void fn_80097D7C(void);
extern void fn_800C31F4(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800CB440(void);
extern void fn_800CB5C8(void);
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
extern void fn_80133130(void);
extern void fn_80145334(void);
extern void fn_8015495C(void);
extern void fn_80166760(void);
extern void fn_80166D3C(void);
extern void fn_80167F1C(void);
extern void fn_8016DA4C(void);
extern void fn_8016E970(void);
extern void fn_80178A6C(void);
extern void fn_80232B7C(void);
extern void fn_80239DAC(void);
extern void fn_8023A8B4(void);
extern void fn_802E2328(void);
extern void fn_802E3D60(void);
extern void fn_802E55B0(void);
extern void fn_80375184(void);
extern void fn_803EEE10(void);
extern void fn_80680770(void);
extern void fn_80680CF8(void);
extern void fn_80686EA4(void);

/* External data declarations */
extern u8 lbl_80747550[];
extern u8 lbl_80747558[];
extern u8 lbl_80747570[];
extern u8 lbl_80747588[];
extern u8 lbl_80747654[];
extern u8 lbl_80775A88[];
extern u8 lbl_80786DC0[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087EFA8;
extern u32 lbl_8087F048;
extern u32 lbl_8087F1E4;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F4A0;
extern u32 lbl_8087F8A0;
extern u32 lbl_808813D0;
extern u32 lbl_808845EC;
extern u32 lbl_808845F0;
extern u32 lbl_80884600;
extern u32 lbl_80884604;
extern u32 lbl_80884610;
extern u32 lbl_80884660;
extern u32 lbl_80884664;

/* Function declarations */
void fn_802DC1C0(void);
void fn_802DC3D0(void);
void fn_802DC5B4(void);
void fn_802DC618(void);
void fn_802DC8B0(void);
void fn_802DCA34(void);
void fn_802DD1B4(void);
void fn_802DDA90(void);

asm void fn_802DC1C0(void)
{
    nofralloc
    stwu r1, -0x280(r1)
    mflr r0
    stw r0, 0x284(r1)
    li r0, 0x0
    stw r31, 0x27c(r1)
    stw r30, 0x278(r1)
    stw r29, 0x274(r1)
    mr r29, r3
    stw r0, 0x14c8(r3)
    stw r0, 0x14c4(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r29)
    li r0, 0xb
    mr r3, r29
    li r4, 0x3
    stw r0, 0x58c(r29)
    bl fn_8016E970
    lfs f0, lbl_80884600
    li r30, 0x1
    stw r30, 0x3fc(r29)
    addi r3, r29, 0xb0
    lfs f1, lbl_808845F0
    li r4, 0x0
    stfs f0, 0x2fc(r29)
    li r5, 0x145
    lfs f2, lbl_80884604
    li r6, 0x0
    stfs f0, 0x2e8(r29)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lis r4, lbl_80747654@ha
    lfs f1, lbl_80884600
    addi r4, r4, lbl_80747654@l
    addi r3, r1, 0x10
    addi r4, r4, 0x2f8
    addi r5, r29, 0x614
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r29, 0x1588
    addi r4, r1, 0x10
    bl fn_800CB440
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    mr r3, r29
    li r4, 0x64
    bl fn_80232B7C
    lfs f0, lbl_808845F0
    li r31, -0x1
    lfs f1, lbl_80884600
    addi r4, r29, 0x158c
    stfs f0, 0x4c(r1)
    addi r5, r29, 0xb0
    lwz r3, lbl_8087F3C0
    addi r7, r1, 0x40
    stfs f0, 0x50(r1)
    addi r8, r1, 0x4c
    addi r9, r1, 0x58
    li r6, 0x0
    stfs f0, 0x54(r1)
    li r10, -0x1
    stfs f0, 0x40(r1)
    stfs f0, 0x44(r1)
    stfs f0, 0x48(r1)
    stfs f1, 0x58(r1)
    stfs f1, 0x5c(r1)
    stfs f1, 0x60(r1)
    stfs f1, 0x64(r1)
    stw r31, 0x8(r1)
    stw r30, 0xc(r1)
    bl fn_8023A8B4
    mr r3, r29
    li r4, 0x65
    bl fn_80232B7C
    lfs f0, lbl_808845F0
    addi r4, r29, 0x15b0
    lfs f1, lbl_80884600
    addi r5, r29, 0xb0
    stfs f0, 0x20(r1)
    addi r7, r1, 0x14
    lwz r3, lbl_8087F3C0
    addi r8, r1, 0x20
    stfs f0, 0x24(r1)
    addi r9, r1, 0x30
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x28(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f1, 0x30(r1)
    stfs f1, 0x34(r1)
    stfs f1, 0x38(r1)
    stfs f1, 0x3c(r1)
    stw r31, 0x8(r1)
    stw r30, 0xc(r1)
    bl fn_8023A8B4
    lis r5, lbl_807C7030@ha
    addi r6, r29, 0x15c8
    addi r5, r5, lbl_807C7030@l
    addi r3, r1, 0x68
    psq_l f1, 0x0(r5), 0, 0
    li r4, 0x0
    lfs f2, 0x8(r5)
    li r5, 0x200
    stfs f2, 0x15d0(r29)
    psq_st f1, 0x0(r6), 0, 0
    bl memset
    lwz r4, lbl_8087F1E4
    addi r3, r1, 0x68
    lwz r4, 0x4dc(r4)
    cmpwi r4, 0x0
    beq lbl_fn_802DC1C0_000001D4
    b lbl_fn_802DC1C0_000001D8
lbl_fn_802DC1C0_000001D4:
    la r4, lbl_808813D0
lbl_fn_802DC1C0_000001D8:
    lwz r5, 0x60(r29)
    lwz r5, 0x4(r5)
    crclr 6
    bl fn_800DD3FC
    lwz r3, lbl_8087F048
    addi r4, r1, 0x68
    bl fn_80109828
    lwz r0, 0x284(r1)
    lwz r31, 0x27c(r1)
    lwz r30, 0x278(r1)
    lwz r29, 0x274(r1)
    mtlr r0
    addi r1, r1, 0x280
    blr
}

asm void fn_802DC3D0(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stw r31, 0x6c(r1)
    stw r30, 0x68(r1)
    li r30, 0x0
    stw r29, 0x64(r1)
    stw r28, 0x60(r1)
    mr r28, r3
    stw r30, 0x14c8(r3)
    stw r30, 0x14c4(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r28)
    li r0, 0xc
    mr r3, r28
    li r4, 0x3
    stw r0, 0x58c(r28)
    bl fn_8016E970
    lfs f0, lbl_80884600
    li r31, 0x1
    stw r31, 0x3fc(r28)
    addi r3, r28, 0xb0
    lfs f1, lbl_808845F0
    li r4, 0x0
    stfs f0, 0x2fc(r28)
    li r5, 0x147
    lfs f2, lbl_80884604
    li r6, 0x0
    stfs f0, 0x2e8(r28)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lis r4, lbl_80747654@ha
    lfs f1, lbl_80884600
    addi r4, r4, lbl_80747654@l
    addi r3, r1, 0x10
    addi r4, r4, 0x305
    addi r5, r28, 0x614
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    addi r3, r28, 0x1588
    li r4, 0x0
    li r5, 0x0
    bl fn_800CB5C8
    lwz r3, lbl_8087F3C0
    mr r4, r28
    li r5, 0x64
    li r6, 0x1
    bl fn_80239DAC
    li r3, 0x0
    li r4, 0x0
    bl fn_80232B7C
    lfs f0, lbl_808845F0
    li r0, -0x1
    lfs f1, lbl_80884600
    addi r4, r28, 0x1598
    stfs f0, 0x20(r1)
    addi r5, r28, 0xb0
    addi r7, r1, 0x14
    addi r8, r1, 0x20
    stfs f0, 0x24(r1)
    addi r9, r1, 0x30
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x28(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f1, 0x30(r1)
    stfs f1, 0x34(r1)
    stfs f1, 0x38(r1)
    stfs f1, 0x3c(r1)
    stw r0, 0x8(r1)
    stw r31, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r0, 0x164c(r28)
    lwz r3, 0x1638(r28)
    cmpwi r0, 0x0
    bne lbl_fn_802DC3D0_0000036C
    li r29, 0x0
    b lbl_fn_802DC3D0_000003D0
lbl_fn_802DC3D0_0000036C:
    lwz r5, 0x1648(r28)
    slwi r0, r3, 2
    lwz r3, lbl_8087F4A0
    li r4, 0x6dd6
    lwzx r5, r5, r0
    bl fn_803EEE10
    cmpwi r3, 0x0
    mr r29, r3
    beq lbl_fn_802DC3D0_000003CC
    lfs f0, lbl_808845F0
    addi r4, r1, 0x40
    stw r31, 0x40(r1)
    stw r30, 0x44(r1)
    stw r30, 0x48(r1)
    stw r30, 0x4c(r1)
    stw r30, 0x50(r1)
    stfs f0, 0x54(r1)
    stfs f0, 0x58(r1)
    stfs f0, 0x5c(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    b lbl_fn_802DC3D0_000003D0
lbl_fn_802DC3D0_000003CC:
    li r29, 0x0
lbl_fn_802DC3D0_000003D0:
    stw r29, 0x1654(r28)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    lwz r29, 0x64(r1)
    lwz r28, 0x60(r1)
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_802DC5B4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    stw r0, 0x14c8(r3)
    stw r0, 0x14c4(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    li r0, 0xf
    mr r3, r30
    li r4, 0x3
    stw r0, 0x58c(r30)
    bl fn_8016E970
    stw r31, 0x1600(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802DC618(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    li r0, 0x0
    stw r31, 0x5c(r1)
    stw r30, 0x58(r1)
    stw r29, 0x54(r1)
    stw r28, 0x50(r1)
    mr r28, r3
    stw r0, 0x14c8(r3)
    stw r0, 0x14c4(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r28)
    mr r3, r28
    lwz r12, 0x0(r28)
    lwz r12, 0x48(r12)
    mtctr r12
    bctrl
    mr r3, r28
    bl fn_80178A6C
    mr r3, r28
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    bl fn_8015495C
    mr r3, r28
    bl fn_8016DA4C
    li r0, 0x2
    stw r0, 0x58c(r28)
    mr r3, r28
    li r4, 0x3
    bl fn_8016E970
    lfs f1, lbl_808845F0
    addi r3, r28, 0xb0
    li r4, 0x0
    bl fn_80097CCC
    lfs f2, lbl_80884600
    li r0, 0x1
    lfs f0, lbl_80884660
    addi r3, r28, 0xb0
    stfs f2, 0x2fc(r28)
    li r4, 0x0
    lfs f1, lbl_808845F0
    li r5, 0x2e
    stw r0, 0x3fc(r28)
    li r6, 0x0
    lfs f2, lbl_80884604
    li r7, 0x0
    stfs f0, 0x2e8(r28)
    li r8, 0x1
    bl fn_80097C08
    addi r3, r28, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    stfs f1, 0x2e4(r28)
    li r30, 0x0
    li r31, 0x0
    b lbl_fn_802DC618_00000578
lbl_fn_802DC618_00000548:
    lwz r3, 0x1678(r28)
    lwzx r29, r3, r31
    lwz r12, 0x0(r29)
    mr r3, r29
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
    mr r3, r29
    li r4, 0x3
    bl fn_802E55B0
    addi r31, r31, 0x4
    addi r30, r30, 0x1
lbl_fn_802DC618_00000578:
    lwz r0, 0x167c(r28)
    cmplw r30, r0
    blt lbl_fn_802DC618_00000548
    li r3, 0x0
    li r4, 0x0
    bl fn_80232B7C
    lfs f0, lbl_808845F0
    li r3, -0x1
    lfs f1, lbl_80884600
    li r0, 0x1
    stfs f0, 0x20(r1)
    addi r4, r28, 0x15e8
    addi r5, r28, 0xb0
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
    addi r3, r28, 0x1588
    li r4, 0x0
    li r5, 0x0
    bl fn_800CB5C8
    lwz r3, lbl_8087F3C0
    mr r4, r28
    li r5, 0x64
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r28
    li r5, 0x65
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_802DC618_00000668
    bl fn_80375184
    cmpwi r3, 0x0
    beq lbl_fn_802DC618_00000668
    lwz r0, 0x48(r28)
    cmpwi r0, 0x2
    bne lbl_fn_802DC618_00000668
    lwz r3, lbl_8087F048
    mr r5, r28
    li r4, 0x6
    li r6, 0x0
    li r7, 0x0
    bl fn_801092C8
lbl_fn_802DC618_00000668:
    lwz r8, lbl_8087EFA8
    li r0, 0x0
    lfs f0, 0x16a0(r28)
    lis r4, lbl_80747654@ha
    lwz r7, 0x2b0(r8)
    addi r4, r4, lbl_80747654@l
    lfs f2, 0x2b4(r8)
    addi r3, r1, 0x10
    stw r7, 0x44(r1)
    addi r4, r4, 0x312
    lfs f1, lbl_80884600
    li r5, 0x0
    stw r0, 0x2ac(r8)
    li r6, -0x1
    stw r7, 0x2b0(r8)
    stfs f2, 0x2b4(r8)
    stfs f2, 0x48(r1)
    stw r0, 0x40(r1)
    stfs f0, 0x4c(r1)
    stfs f0, 0x2b8(r8)
    bl fn_800C31F4
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    mr r3, r28
    bl fn_800EB7A0
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    lwz r28, 0x50(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_802DC8B0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    lwz r0, 0x1690(r3)
    mr r31, r3
    cmpwi r0, 0x0
    bne lbl_fn_802DC8B0_0000071C
    li r3, 0x0
    b lbl_fn_802DC8B0_0000085C
lbl_fn_802DC8B0_0000071C:
    li r29, 0x0
    li r28, 0x0
    li r27, 0x0
    li r30, 0x0
    b lbl_fn_802DC8B0_00000790
lbl_fn_802DC8B0_00000730:
    lwz r3, 0x1678(r31)
    lwzx r26, r3, r30
    mr r3, r26
    bl fn_802E2328
    cmpwi r3, 0x0
    bne lbl_fn_802DC8B0_0000074C
    addi r28, r28, 0x1
lbl_fn_802DC8B0_0000074C:
    lwz r0, 0x7e0(r26)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_802DC8B0_00000788
    lwz r3, 0x58c(r26)
    subi r0, r3, 0x8
    cmplwi r0, 0x3
    bgt lbl_fn_802DC8B0_00000774
    addi r29, r29, 0x1
    b lbl_fn_802DC8B0_00000788
lbl_fn_802DC8B0_00000774:
    lwz r3, 0x14c4(r26)
    subi r0, r3, 0x8
    cmplwi r0, 0x3
    bgt lbl_fn_802DC8B0_00000788
    addi r29, r29, 0x1
lbl_fn_802DC8B0_00000788:
    addi r30, r30, 0x4
    addi r27, r27, 0x1
lbl_fn_802DC8B0_00000790:
    lwz r0, 0x167c(r31)
    cmplw r27, r0
    blt lbl_fn_802DC8B0_00000730
    lwz r4, 0x940(r31)
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lis r3, lbl_80747550@ha
    xoris r0, r4, 0x8000
    lfd f3, lbl_80747550@l(r3)
    stw r0, 0xc(r1)
    lfs f1, 0x7d8(r31)
    lfd f2, 0x8(r1)
    lfs f0, lbl_808845EC
    fsubs f2, f2, f3
    fdivs f1, f1, f2
    fcmpo cr0, f1, f0
    bge lbl_fn_802DC8B0_000007DC
    li r0, 0x8
    b lbl_fn_802DC8B0_000007F4
lbl_fn_802DC8B0_000007DC:
    lfs f0, lbl_80884664
    fcmpo cr0, f1, f0
    bge lbl_fn_802DC8B0_000007F0
    li r0, 0x6
    b lbl_fn_802DC8B0_000007F4
lbl_fn_802DC8B0_000007F0:
    li r0, 0x4
lbl_fn_802DC8B0_000007F4:
    cmpw r28, r0
    blt lbl_fn_802DC8B0_00000804
    li r3, 0x0
    b lbl_fn_802DC8B0_0000085C
lbl_fn_802DC8B0_00000804:
    cmpwi r29, 0x1
    bge lbl_fn_802DC8B0_0000082C
    lwz r0, 0x169c(r31)
    cmpwi r0, 0x0
    bgt lbl_fn_802DC8B0_0000082C
    li r0, 0x0
    lis r3, lbl_80786DC0@ha
    stw r0, 0x169c(r31)
    addi r3, r3, lbl_80786DC0@l
    b lbl_fn_802DC8B0_0000085C
lbl_fn_802DC8B0_0000082C:
    lwz r3, 0x1690(r31)
    lwz r0, 0x1698(r31)
    cmplw r3, r0
    bgt lbl_fn_802DC8B0_00000844
    li r0, 0x0
    stw r0, 0x1698(r31)
lbl_fn_802DC8B0_00000844:
    lwz r5, 0x1698(r31)
    lwz r3, 0x168c(r31)
    addi r4, r5, 0x1
    slwi r0, r5, 3
    stw r4, 0x1698(r31)
    add r3, r3, r0
lbl_fn_802DC8B0_0000085C:
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_802DCA34(void)
{
    nofralloc
    stwu r1, -0x2b0(r1)
    mflr r0
    lis r6, __files@ha
    lis r7, lbl_80747654@ha
    stw r0, 0x2b4(r1)
    stmw r14, 0x268(r1)
    li r27, 0x0
    mr r14, r3
    mr r23, r4
    mr r15, r5
    addi r25, r7, lbl_80747654@l
    addi r24, r6, __files@l
    addi r22, r1, 0x34
    addi r28, r1, 0x4c
    lis r19, 0xcccd
    lis r26, 0x4000
    lis r20, 0x1555
    lis r18, 0x2aab
    lis r17, lbl_80775A88@ha
    stw r27, 0x2c(r1)
    lwz r8, lbl_8087F8A0
    stw r27, 0x34(r1)
    stw r27, 0x30(r1)
    lwz r16, 0x48(r8)
    b lbl_fn_802DCA34_00000B44
lbl_fn_802DCA34_000008D8:
    lwz r3, 0x7e0(r16)
    clrlwi r0, r3, 31
    cmplwi r0, 0x1
    beq lbl_fn_802DCA34_00000B40
    rlwinm r0, r3, 0, 25, 25
    cmplwi r0, 0x40
    beq lbl_fn_802DCA34_00000B40
    rlwinm r0, r3, 0, 23, 23
    cmplwi r0, 0x100
    beq lbl_fn_802DCA34_00000B40
    rlwinm r0, r3, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_802DCA34_00000B40
    lwz r4, 0x30(r1)
    lwz r3, 0x34(r1)
    cmplw r4, r3
    bge lbl_fn_802DCA34_00000938
    addi r4, r4, 0x1
    lwz r3, 0x2c(r1)
    slwi r0, r4, 2
    stw r4, 0x30(r1)
    add r3, r3, r0
    stw r16, -0x4(r3)
    b lbl_fn_802DCA34_00000B40
lbl_fn_802DCA34_00000938:
    subi r0, r26, 0x1
    subf r0, r3, r0
    cmplwi r0, 0x1
    bge lbl_fn_802DCA34_0000095C
    addi r4, r25, 0x28c
    addi r3, r24, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802DCA34_0000095C:
    lwz r3, 0x30(r1)
    subi r0, r26, 0x1
    lwz r21, 0x34(r1)
    addi r3, r3, 0x1
    stw r27, 0x4c(r1)
    subf r3, r21, r3
    subf r0, r21, r0
    cmplw r3, r0
    stw r27, 0x50(r1)
    stw r27, 0x54(r1)
    stw r22, 0x58(r1)
    stw r27, 0x5c(r1)
    stw r3, 0x14(r1)
    ble lbl_fn_802DCA34_000009A8
    addi r4, r25, 0x28c
    addi r3, r24, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802DCA34_000009A8:
    addi r0, r20, 0x5555
    cmplw r21, r0
    bge lbl_fn_802DCA34_000009F0
    addi r4, r21, 0x1
    subi r5, r19, 0x3333
    slwi r3, r4, 2
    lwz r0, 0x14(r1)
    subf r4, r4, r3
    mulhwu r4, r5, r4
    addi r3, r1, 0x1c
    srwi r4, r4, 2
    stw r4, 0x1c(r1)
    cmplw r4, r0
    bge lbl_fn_802DCA34_000009E4
    addi r3, r1, 0x14
lbl_fn_802DCA34_000009E4:
    lwz r0, 0x0(r3)
    add r29, r21, r0
    b lbl_fn_802DCA34_00000A2C
lbl_fn_802DCA34_000009F0:
    subi r0, r18, 0x5556
    cmplw r21, r0
    bge lbl_fn_802DCA34_00000A28
    addi r3, r21, 0x1
    lwz r0, 0x14(r1)
    srwi r3, r3, 1
    stw r3, 0x18(r1)
    cmplw r3, r0
    addi r3, r1, 0x18
    bge lbl_fn_802DCA34_00000A1C
    addi r3, r1, 0x14
lbl_fn_802DCA34_00000A1C:
    lwz r0, 0x0(r3)
    add r29, r21, r0
    b lbl_fn_802DCA34_00000A2C
lbl_fn_802DCA34_00000A28:
    subi r29, r26, 0x1
lbl_fn_802DCA34_00000A2C:
    subi r0, r26, 0x1
    cmplw r29, r0
    ble lbl_fn_802DCA34_00000A4C
    addi r4, r25, 0x28c
    addi r3, r24, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802DCA34_00000A4C:
    slwi r3, r29, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r21, r3
    bne lbl_fn_802DCA34_00000A74
    addi r3, r24, 0xa0
    addi r4, r17, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802DCA34_00000A74:
    lwz r5, 0x30(r1)
    lwz r0, 0x50(r1)
    slwi r4, r5, 2
    stw r21, 0x4c(r1)
    slwi r3, r0, 2
    stw r29, 0x54(r1)
    add r0, r21, r4
    stw r5, 0x5c(r1)
    stwx r16, r3, r0
    lwz r0, 0x30(r1)
    lwz r4, 0x50(r1)
    lwz r30, 0x2c(r1)
    slwi r0, r0, 2
    addi r5, r4, 0x1
    stw r5, 0x50(r1)
    add r3, r30, r0
    lwz r0, 0x5c(r1)
    subf r3, r30, r3
    srawi r4, r3, 2
    lwz r3, 0x4c(r1)
    addze r21, r4
    subf r0, r21, r0
    stw r0, 0x5c(r1)
    slwi r29, r21, 2
    mr r4, r30
    slwi r0, r0, 2
    mr r5, r29
    add r3, r3, r0
    bl memcpy
    mr r3, r30
    mr r5, r29
    li r4, 0x0
    bl memset
    lwz r0, 0x50(r1)
    cmpwi r28, 0x0
    lwz r6, 0x34(r1)
    lwz r4, 0x54(r1)
    add r5, r0, r21
    lwz r3, 0x2c(r1)
    lwz r0, 0x4c(r1)
    stw r4, 0x34(r1)
    stw r6, 0x54(r1)
    stw r0, 0x2c(r1)
    stw r3, 0x4c(r1)
    stw r5, 0x30(r1)
    stw r27, 0x50(r1)
    beq lbl_fn_802DCA34_00000B40
    cmpwi r3, 0x0
    beq lbl_fn_802DCA34_00000B40
    stw r27, 0x50(r1)
    bl dtor_80084684
lbl_fn_802DCA34_00000B40:
    lwz r16, 0x14ac(r16)
lbl_fn_802DCA34_00000B44:
    cmpwi r16, 0x0
    bne lbl_fn_802DCA34_000008D8
    bl fn_80680CF8
    lis r4, 0x6666
    lwz r24, 0x30(r1)
    addi r0, r4, 0x6667
    mulhw r0, r0, r3
    cmpw r15, r24
    srawi r0, r0, 1
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x5
    subf r25, r0, r3
    bge lbl_fn_802DCA34_00000B80
    mr r24, r15
lbl_fn_802DCA34_00000B80:
    li r30, 0x0
    lis r18, __files@ha
    lis r17, lbl_80747654@ha
    lis r31, lbl_80747558@ha
    stw r30, 0x20(r1)
    addi r17, r17, lbl_80747654@l
    addi r18, r18, __files@l
    addi r19, r1, 0x28
    stw r30, 0x28(r1)
    addi r29, r1, 0x38
    addi r31, r31, lbl_80747558@l
    lis r21, 0xcccd
    stw r30, 0x24(r1)
    lis r16, 0x4000
    lis r20, 0x1555
    lis r22, 0x2aab
    b lbl_fn_802DCA34_00000E20
lbl_fn_802DCA34_00000BC4:
    slwi r3, r25, 2
    lwz r0, 0x30(r1)
    lwzx r3, r31, r3
    cmpw r3, r0
    bge lbl_fn_802DCA34_00000E10
    slwi r26, r3, 2
    lwz r4, 0x24(r1)
    lwz r3, 0x28(r1)
    lwz r15, 0x2c(r1)
    cmplw r4, r3
    bge lbl_fn_802DCA34_00000C10
    addi r0, r4, 0x1
    stw r0, 0x24(r1)
    lwz r3, 0x20(r1)
    slwi r0, r0, 2
    lwzx r4, r15, r26
    add r3, r3, r0
    stw r4, -0x4(r3)
    b lbl_fn_802DCA34_00000E0C
lbl_fn_802DCA34_00000C10:
    subi r0, r16, 0x1
    subf r0, r3, r0
    cmplwi r0, 0x1
    bge lbl_fn_802DCA34_00000C34
    addi r4, r17, 0x28c
    addi r3, r18, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802DCA34_00000C34:
    lwz r3, 0x24(r1)
    subi r0, r16, 0x1
    lwz r27, 0x28(r1)
    addi r3, r3, 0x1
    stw r30, 0x38(r1)
    subf r3, r27, r3
    subf r0, r27, r0
    cmplw r3, r0
    stw r30, 0x3c(r1)
    stw r30, 0x40(r1)
    stw r19, 0x44(r1)
    stw r30, 0x48(r1)
    stw r3, 0x8(r1)
    ble lbl_fn_802DCA34_00000C80
    addi r4, r17, 0x28c
    addi r3, r18, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802DCA34_00000C80:
    addi r0, r20, 0x5555
    cmplw r27, r0
    bge lbl_fn_802DCA34_00000CC8
    addi r4, r27, 0x1
    subi r5, r21, 0x3333
    slwi r3, r4, 2
    lwz r0, 0x8(r1)
    subf r4, r4, r3
    mulhwu r4, r5, r4
    addi r3, r1, 0x10
    srwi r4, r4, 2
    stw r4, 0x10(r1)
    cmplw r4, r0
    bge lbl_fn_802DCA34_00000CBC
    addi r3, r1, 0x8
lbl_fn_802DCA34_00000CBC:
    lwz r0, 0x0(r3)
    add r27, r27, r0
    b lbl_fn_802DCA34_00000D04
lbl_fn_802DCA34_00000CC8:
    subi r0, r22, 0x5556
    cmplw r27, r0
    bge lbl_fn_802DCA34_00000D00
    addi r3, r27, 0x1
    lwz r0, 0x8(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_802DCA34_00000CF4
    addi r3, r1, 0x8
lbl_fn_802DCA34_00000CF4:
    lwz r0, 0x0(r3)
    add r27, r27, r0
    b lbl_fn_802DCA34_00000D04
lbl_fn_802DCA34_00000D00:
    subi r27, r16, 0x1
lbl_fn_802DCA34_00000D04:
    subi r0, r16, 0x1
    cmplw r27, r0
    ble lbl_fn_802DCA34_00000D24
    addi r4, r17, 0x28c
    addi r3, r18, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802DCA34_00000D24:
    slwi r3, r27, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r28, r3
    bne lbl_fn_802DCA34_00000D50
    lis r4, lbl_80775A88@ha
    addi r3, r18, 0xa0
    addi r4, r4, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802DCA34_00000D50:
    lwz r0, 0x24(r1)
    lwz r3, 0x3c(r1)
    slwi r6, r0, 2
    lwzx r7, r15, r26
    addi r5, r3, 0x1
    slwi r4, r3, 2
    add r3, r28, r6
    stw r27, 0x40(r1)
    stwx r7, r4, r3
    lwz r3, 0x24(r1)
    lwz r26, 0x20(r1)
    slwi r3, r3, 2
    stw r5, 0x3c(r1)
    add r3, r26, r3
    mr r4, r26
    subf r3, r26, r3
    srawi r3, r3, 2
    addze r15, r3
    subf r0, r15, r0
    stw r0, 0x48(r1)
    slwi r27, r15, 2
    slwi r0, r0, 2
    mr r5, r27
    add r3, r28, r0
    bl memcpy
    mr r3, r26
    mr r5, r27
    li r4, 0x0
    bl memset
    lwz r0, 0x3c(r1)
    cmpwi r29, 0x0
    lwz r3, 0x20(r1)
    add r5, r0, r15
    mr r0, r28
    lwz r6, 0x28(r1)
    lwz r4, 0x40(r1)
    stw r4, 0x28(r1)
    stw r6, 0x40(r1)
    stw r0, 0x20(r1)
    stw r3, 0x38(r1)
    stw r5, 0x24(r1)
    stw r30, 0x3c(r1)
    beq lbl_fn_802DCA34_00000E0C
    cmpwi r3, 0x0
    beq lbl_fn_802DCA34_00000E0C
    stw r30, 0x3c(r1)
    bl dtor_80084684
lbl_fn_802DCA34_00000E0C:
    subi r24, r24, 0x1
lbl_fn_802DCA34_00000E10:
    addi r25, r25, 0x1
    cmpwi r25, 0x5
    blt lbl_fn_802DCA34_00000E20
    li r25, 0x0
lbl_fn_802DCA34_00000E20:
    cmpwi r24, 0x0
    bgt lbl_fn_802DCA34_00000BC4
    addi r3, r1, 0x60
    li r4, 0x0
    li r5, 0x200
    bl memset
    cmpwi r23, 0x2
    beq lbl_fn_802DCA34_00000E54
    cmpwi r23, 0x0
    beq lbl_fn_802DCA34_00000EBC
    cmpwi r23, 0x3
    beq lbl_fn_802DCA34_00000F40
    b lbl_fn_802DCA34_00000F88
lbl_fn_802DCA34_00000E54:
    li r16, 0x0
    li r15, 0x0
    b lbl_fn_802DCA34_00000E74
lbl_fn_802DCA34_00000E60:
    lwz r3, 0x20(r1)
    lwzx r3, r3, r15
    bl fn_80166760
    addi r15, r15, 0x4
    addi r16, r16, 0x1
lbl_fn_802DCA34_00000E74:
    lwz r0, 0x24(r1)
    cmplw r16, r0
    blt lbl_fn_802DCA34_00000E60
    lwz r4, lbl_8087F1E4
    addi r3, r1, 0x60
    lwz r4, 0x4e4(r4)
    cmpwi r4, 0x0
    beq lbl_fn_802DCA34_00000E98
    b lbl_fn_802DCA34_00000E9C
lbl_fn_802DCA34_00000E98:
    la r4, lbl_808813D0
lbl_fn_802DCA34_00000E9C:
    lwz r5, 0x60(r14)
    lwz r5, 0x4(r5)
    crclr 6
    bl fn_800DD3FC
    lwz r3, lbl_8087F048
    addi r4, r1, 0x60
    bl fn_80109828
    b lbl_fn_802DCA34_00000F88
lbl_fn_802DCA34_00000EBC:
    li r16, 0x0
    li r15, 0x0
    b lbl_fn_802DCA34_00000EF8
lbl_fn_802DCA34_00000EC8:
    lwz r3, 0x20(r1)
    li r4, 0x1
    li r5, 0x384
    li r6, 0x0
    lwzx r3, r3, r15
    addi r3, r3, 0x7d4
    bl fn_80133130
    lwz r3, 0x20(r1)
    lwzx r3, r3, r15
    bl fn_80167F1C
    addi r15, r15, 0x4
    addi r16, r16, 0x1
lbl_fn_802DCA34_00000EF8:
    lwz r0, 0x24(r1)
    cmplw r16, r0
    blt lbl_fn_802DCA34_00000EC8
    lwz r4, lbl_8087F1E4
    addi r3, r1, 0x60
    lwz r4, 0x4ec(r4)
    cmpwi r4, 0x0
    beq lbl_fn_802DCA34_00000F1C
    b lbl_fn_802DCA34_00000F20
lbl_fn_802DCA34_00000F1C:
    la r4, lbl_808813D0
lbl_fn_802DCA34_00000F20:
    lwz r5, 0x60(r14)
    lwz r5, 0x4(r5)
    crclr 6
    bl fn_800DD3FC
    lwz r3, lbl_8087F048
    addi r4, r1, 0x60
    bl fn_80109828
    b lbl_fn_802DCA34_00000F88
lbl_fn_802DCA34_00000F40:
    li r15, 0x0
    li r14, 0x0
    b lbl_fn_802DCA34_00000F7C
lbl_fn_802DCA34_00000F4C:
    lwz r3, 0x20(r1)
    li r4, 0x100
    li r5, 0x0
    lwzx r3, r3, r14
    addi r3, r3, 0x7d4
    bl fn_8013310C
    lwz r3, 0x20(r1)
    li r4, 0x1
    lwzx r3, r3, r14
    bl fn_80166D3C
    addi r14, r14, 0x4
    addi r15, r15, 0x1
lbl_fn_802DCA34_00000F7C:
    lwz r0, 0x24(r1)
    cmplw r15, r0
    blt lbl_fn_802DCA34_00000F4C
lbl_fn_802DCA34_00000F88:
    addic. r0, r1, 0x20
    beq lbl_fn_802DCA34_00000FB4
    beq lbl_fn_802DCA34_00000FB4
    beq lbl_fn_802DCA34_00000FB4
    lwz r3, 0x20(r1)
    cmpwi r3, 0x0
    beq lbl_fn_802DCA34_00000FB4
    lwz r0, 0x24(r1)
    subf r0, r0, r0
    stw r0, 0x24(r1)
    bl dtor_80084684
lbl_fn_802DCA34_00000FB4:
    addic. r0, r1, 0x2c
    beq lbl_fn_802DCA34_00000FE0
    beq lbl_fn_802DCA34_00000FE0
    beq lbl_fn_802DCA34_00000FE0
    lwz r3, 0x2c(r1)
    cmpwi r3, 0x0
    beq lbl_fn_802DCA34_00000FE0
    lwz r0, 0x30(r1)
    subf r0, r0, r0
    stw r0, 0x30(r1)
    bl dtor_80084684
lbl_fn_802DCA34_00000FE0:
    lmw r14, 0x268(r1)
    lwz r0, 0x2b4(r1)
    mtlr r0
    addi r1, r1, 0x2b0
    blr
}

asm void fn_802DD1B4(void)
{
    nofralloc
    stwu r1, -0x320(r1)
    mflr r0
    stw r0, 0x324(r1)
    addi r11, r1, 0x300
    stfd f31, 0x310(r1)
    psq_st f31, 0x318(r1), 0, 0
    stfd f30, 0x300(r1)
    psq_st f30, 0x308(r1), 0, 0
    bl _savegpr_14
    cmpwi r4, 0x0
    mr r15, r3
    blt lbl_fn_802DD1B4_000018A8
    cmpwi r4, 0x3
    blt lbl_fn_802DD1B4_00001030
    b lbl_fn_802DD1B4_000018A8
lbl_fn_802DD1B4_00001030:
    lis r5, lbl_80747570@ha
    slwi r0, r4, 3
    addi r5, r5, lbl_80747570@l
    add r3, r5, r0
    lfsx f30, r5, r0
    lfs f31, 0x4(r3)
    bl fn_80680CF8
    lis r4, 0x4178
    lis r0, 0x4330
    addi r4, r4, 0x749f
    lis r5, lbl_80747550@ha
    mulhw r6, r4, r3
    lfd f6, lbl_80747550@l(r5)
    lis r4, lbl_80747588@ha
    lwz r7, 0x1670(r15)
    lfd f3, lbl_80747588@l(r4)
    fsubs f4, f31, f30
    srawi r5, r6, 8
    stw r7, 0x2ac(r1)
    srwi r6, r5, 31
    lfs f5, lbl_80884610
    add r5, r5, r6
    stw r0, 0x2a8(r1)
    mulli r4, r5, 0x3e9
    stw r0, 0x2a0(r1)
    lfd f0, 0x2a8(r1)
    subf r0, r4, r3
    xoris r0, r0, 0x8000
    stw r0, 0x2a4(r1)
    fsubs f0, f0, f3
    lfd f3, 0x2a0(r1)
    fsubs f3, f3, f6
    fdivs f3, f3, f5
    fmadds f3, f4, f3, f30
    fmuls f0, f3, f0
    fctiwz f0, f0
    stfd f0, 0x2b0(r1)
    lwz r17, 0x2b4(r1)
    cmpwi r17, 0x0
    ble lbl_fn_802DD1B4_000018A8
    li r28, 0x0
    lis r3, __files@ha
    lis r4, lbl_80747654@ha
    stw r28, 0x68(r1)
    addi r25, r4, lbl_80747654@l
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
    b lbl_fn_802DD1B4_000013B0
lbl_fn_802DD1B4_00001118:
    lwz r3, 0x6c(r1)
    lwz r20, 0x70(r1)
    lwz r27, 0x166c(r15)
    cmplw r3, r20
    bge lbl_fn_802DD1B4_0000114C
    addi r0, r3, 0x1
    stw r0, 0x6c(r1)
    lwz r3, 0x68(r1)
    slwi r0, r0, 2
    lwzx r4, r27, r14
    add r3, r3, r0
    stw r4, -0x4(r3)
    b lbl_fn_802DD1B4_000013A8
lbl_fn_802DD1B4_0000114C:
    subi r0, r26, 0x1
    subf r0, r20, r0
    cmplwi r0, 0x1
    bge lbl_fn_802DD1B4_00001170
    addi r4, r25, 0x28c
    addi r3, r24, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802DD1B4_00001170:
    addi r0, r23, 0x5555
    cmplw r20, r0
    bge lbl_fn_802DD1B4_000011A4
    addi r3, r20, 0x1
    subi r4, r19, 0x3333
    slwi r0, r3, 2
    subf r0, r3, r0
    mulhwu r0, r4, r0
    srwi r0, r0, 2
    cmplwi r0, 0x1
    bge lbl_fn_802DD1B4_000011C0
    b lbl_fn_802DD1B4_000011C0
    b lbl_fn_802DD1B4_000011C0
lbl_fn_802DD1B4_000011A4:
    subi r0, r22, 0x5556
    cmplw r20, r0
    bge lbl_fn_802DD1B4_000011C0
    addi r0, r20, 0x1
    srwi r0, r0, 1
    cmplwi r0, 0x1
    cmplwi r0, 0x1
lbl_fn_802DD1B4_000011C0:
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
    ble lbl_fn_802DD1B4_0000120C
    addi r4, r25, 0x28c
    addi r3, r24, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802DD1B4_0000120C:
    addi r0, r23, 0x5555
    cmplw r20, r0
    bge lbl_fn_802DD1B4_00001254
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
    bge lbl_fn_802DD1B4_00001248
    addi r3, r1, 0x1c
lbl_fn_802DD1B4_00001248:
    lwz r0, 0x0(r3)
    add r30, r20, r0
    b lbl_fn_802DD1B4_00001290
lbl_fn_802DD1B4_00001254:
    subi r0, r22, 0x5556
    cmplw r20, r0
    bge lbl_fn_802DD1B4_0000128C
    addi r3, r20, 0x1
    lwz r0, 0x1c(r1)
    srwi r3, r3, 1
    stw r3, 0x20(r1)
    cmplw r3, r0
    addi r3, r1, 0x20
    bge lbl_fn_802DD1B4_00001280
    addi r3, r1, 0x1c
lbl_fn_802DD1B4_00001280:
    lwz r0, 0x0(r3)
    add r30, r20, r0
    b lbl_fn_802DD1B4_00001290
lbl_fn_802DD1B4_0000128C:
    subi r30, r26, 0x1
lbl_fn_802DD1B4_00001290:
    subi r0, r26, 0x1
    cmplw r30, r0
    ble lbl_fn_802DD1B4_000012B0
    addi r4, r25, 0x28c
    addi r3, r24, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802DD1B4_000012B0:
    slwi r3, r30, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r20, r3
    bne lbl_fn_802DD1B4_000012D8
    addi r3, r24, 0xa0
    addi r4, r18, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802DD1B4_000012D8:
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
    beq lbl_fn_802DD1B4_000013A8
    cmpwi r3, 0x0
    beq lbl_fn_802DD1B4_000013A8
    stw r28, 0x8c(r1)
    bl dtor_80084684
lbl_fn_802DD1B4_000013A8:
    addi r14, r14, 0x4
    addi r16, r16, 0x1
lbl_fn_802DD1B4_000013B0:
    cmplw r16, r17
    blt lbl_fn_802DD1B4_00001118
    li r24, 0x0
    lis r3, __files@ha
    lis r4, lbl_80747654@ha
    stw r24, 0x5c(r1)
    addi r26, r4, lbl_80747654@l
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
    b lbl_fn_802DD1B4_00001690
lbl_fn_802DD1B4_00001400:
    lwz r0, 0x1664(r15)
    cmplw r0, r16
    ble lbl_fn_802DD1B4_00001698
    lwz r3, 0x60(r1)
    lwz r19, 0x64(r1)
    lwz r18, 0x1660(r15)
    cmplw r3, r19
    bge lbl_fn_802DD1B4_00001440
    addi r0, r3, 0x1
    stw r0, 0x60(r1)
    lwz r3, 0x5c(r1)
    slwi r0, r0, 2
    lwzx r4, r18, r20
    add r3, r3, r0
    stw r4, -0x4(r3)
    b lbl_fn_802DD1B4_00001688
lbl_fn_802DD1B4_00001440:
    subi r0, r25, 0x1
    subf r0, r19, r0
    cmplwi r0, 0x1
    bge lbl_fn_802DD1B4_00001464
    addi r4, r26, 0x28c
    addi r3, r27, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802DD1B4_00001464:
    addi r0, r28, 0x5555
    cmplw r19, r0
    bge lbl_fn_802DD1B4_00001498
    addi r3, r19, 0x1
    subi r4, r31, 0x3333
    slwi r0, r3, 2
    subf r0, r3, r0
    mulhwu r0, r4, r0
    srwi r0, r0, 2
    cmplwi r0, 0x1
    bge lbl_fn_802DD1B4_000014B4
    b lbl_fn_802DD1B4_000014B4
    b lbl_fn_802DD1B4_000014B4
lbl_fn_802DD1B4_00001498:
    subi r0, r29, 0x5556
    cmplw r19, r0
    bge lbl_fn_802DD1B4_000014B4
    addi r0, r19, 0x1
    srwi r0, r0, 1
    cmplwi r0, 0x1
    cmplwi r0, 0x1
lbl_fn_802DD1B4_000014B4:
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
    ble lbl_fn_802DD1B4_00001500
    addi r4, r26, 0x28c
    addi r3, r27, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802DD1B4_00001500:
    addi r0, r28, 0x5555
    cmplw r19, r0
    bge lbl_fn_802DD1B4_00001548
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
    bge lbl_fn_802DD1B4_0000153C
    addi r3, r1, 0x10
lbl_fn_802DD1B4_0000153C:
    lwz r0, 0x0(r3)
    add r19, r19, r0
    b lbl_fn_802DD1B4_00001584
lbl_fn_802DD1B4_00001548:
    subi r0, r29, 0x5556
    cmplw r19, r0
    bge lbl_fn_802DD1B4_00001580
    addi r3, r19, 0x1
    lwz r0, 0x10(r1)
    srwi r3, r3, 1
    stw r3, 0x14(r1)
    cmplw r3, r0
    addi r3, r1, 0x14
    bge lbl_fn_802DD1B4_00001574
    addi r3, r1, 0x10
lbl_fn_802DD1B4_00001574:
    lwz r0, 0x0(r3)
    add r19, r19, r0
    b lbl_fn_802DD1B4_00001584
lbl_fn_802DD1B4_00001580:
    subi r19, r25, 0x1
lbl_fn_802DD1B4_00001584:
    subi r0, r25, 0x1
    cmplw r19, r0
    ble lbl_fn_802DD1B4_000015A4
    addi r4, r26, 0x28c
    addi r3, r27, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802DD1B4_000015A4:
    slwi r3, r19, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r21, r3
    bne lbl_fn_802DD1B4_000015CC
    addi r3, r27, 0xa0
    addi r4, r14, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802DD1B4_000015CC:
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
    beq lbl_fn_802DD1B4_00001688
    cmpwi r3, 0x0
    beq lbl_fn_802DD1B4_00001688
    stw r24, 0x78(r1)
    bl dtor_80084684
lbl_fn_802DD1B4_00001688:
    addi r20, r20, 0x4
    addi r16, r16, 0x1
lbl_fn_802DD1B4_00001690:
    cmplw r16, r17
    blt lbl_fn_802DD1B4_00001400
lbl_fn_802DD1B4_00001698:
    lfs f30, lbl_808845F0
    addi r19, r1, 0x50
    lfs f31, lbl_80884600
    li r20, 0x0
    li r14, 0x0
    li r18, -0x1
    li r17, 0x1
    li r16, 0x0
    b lbl_fn_802DD1B4_000017FC
lbl_fn_802DD1B4_000016BC:
    lwz r0, 0x60(r1)
    cmplw r0, r20
    ble lbl_fn_802DD1B4_00001808
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
    addi r4, r15, 0x14ec
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
    li r4, 0x0
    rlwinm r0, r0, 0, 17, 15
    stw r0, 0x12a4(r22)
    lwz r0, 0x38(r22)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r22)
    bl fn_800D246C
    lwz r0, 0x12a4(r22)
    extrwi. r0, r0, 1, 6
    beq lbl_fn_802DD1B4_00001794
    lwz r0, 0x12a4(r22)
    rlwinm r0, r0, 0, 7, 5
    stw r0, 0x12a4(r22)
lbl_fn_802DD1B4_00001794:
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
lbl_fn_802DD1B4_000017FC:
    lwz r0, 0x6c(r1)
    cmplw r20, r0
    blt lbl_fn_802DD1B4_000016BC
lbl_fn_802DD1B4_00001808:
    addi r3, r1, 0xa0
    li r4, 0x0
    li r5, 0x200
    bl memset
    lwz r4, lbl_8087F1E4
    addi r3, r1, 0xa0
    lwz r4, 0x4f4(r4)
    cmpwi r4, 0x0
    beq lbl_fn_802DD1B4_00001830
    b lbl_fn_802DD1B4_00001834
lbl_fn_802DD1B4_00001830:
    la r4, lbl_808813D0
lbl_fn_802DD1B4_00001834:
    lwz r5, 0x60(r15)
    lwz r5, 0x4(r5)
    crclr 6
    bl fn_800DD3FC
    lwz r3, lbl_8087F048
    addi r4, r1, 0xa0
    bl fn_80109828
    addic. r0, r1, 0x5c
    beq lbl_fn_802DD1B4_0000187C
    beq lbl_fn_802DD1B4_0000187C
    beq lbl_fn_802DD1B4_0000187C
    lwz r3, 0x5c(r1)
    cmpwi r3, 0x0
    beq lbl_fn_802DD1B4_0000187C
    lwz r0, 0x60(r1)
    subf r0, r0, r0
    stw r0, 0x60(r1)
    bl dtor_80084684
lbl_fn_802DD1B4_0000187C:
    addic. r0, r1, 0x68
    beq lbl_fn_802DD1B4_000018A8
    beq lbl_fn_802DD1B4_000018A8
    beq lbl_fn_802DD1B4_000018A8
    lwz r3, 0x68(r1)
    cmpwi r3, 0x0
    beq lbl_fn_802DD1B4_000018A8
    lwz r0, 0x6c(r1)
    subf r0, r0, r0
    stw r0, 0x6c(r1)
    bl dtor_80084684
lbl_fn_802DD1B4_000018A8:
    addi r11, r1, 0x300
    psq_l f31, 0x318(r1), 0, 0
    lfd f31, 0x310(r1)
    psq_l f30, 0x308(r1), 0, 0
    lfd f30, 0x300(r1)
    bl _restgpr_14
    lwz r0, 0x324(r1)
    mtlr r0
    addi r1, r1, 0x320
    blr
}

asm void fn_802DDA90(void)
{
    nofralloc
    stwu r1, -0x220(r1)
    mflr r0
    stw r0, 0x224(r1)
    stmw r27, 0x20c(r1)
    mr r27, r3
    li r29, 0x0
    li r30, 0x0
    li r31, 0x1
    b lbl_fn_802DDA90_00001988
lbl_fn_802DDA90_000018F4:
    lwz r3, 0x1678(r27)
    lwzx r28, r3, r30
    lwz r0, 0x7e0(r28)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_802DDA90_00001918
    lwz r0, 0xd18(r28)
    cmpwi r0, 0x1
    beq lbl_fn_802DDA90_00001980
lbl_fn_802DDA90_00001918:
    lwz r0, 0x12a4(r28)
    mr r3, r28
    li r4, 0x0
    rlwinm r0, r0, 0, 17, 15
    stw r0, 0x12a4(r28)
    lwz r0, 0x38(r28)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r28)
    bl fn_800D246C
    lwz r0, 0x12a4(r28)
    extrwi. r0, r0, 1, 6
    beq lbl_fn_802DDA90_00001954
    lwz r0, 0x12a4(r28)
    rlwinm r0, r0, 0, 7, 5
    stw r0, 0x12a4(r28)
lbl_fn_802DDA90_00001954:
    addi r3, r28, 0x7d4
    bl fn_8012D8B8
    stw r31, 0xd18(r28)
    mr r3, r28
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    bl fn_8015495C
    mr r3, r28
    bl fn_802E3D60
lbl_fn_802DDA90_00001980:
    addi r30, r30, 0x4
    addi r29, r29, 0x1
lbl_fn_802DDA90_00001988:
    lwz r0, 0x167c(r27)
    cmplw r29, r0
    blt lbl_fn_802DDA90_000018F4
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x200
    bl memset
    lwz r4, lbl_8087F1E4
    addi r3, r1, 0x8
    lwz r4, 0x4fc(r4)
    cmpwi r4, 0x0
    beq lbl_fn_802DDA90_000019BC
    b lbl_fn_802DDA90_000019C0
lbl_fn_802DDA90_000019BC:
    la r4, lbl_808813D0
lbl_fn_802DDA90_000019C0:
    lwz r5, 0x60(r27)
    lwz r5, 0x4(r5)
    crclr 6
    bl fn_800DD3FC
    lwz r3, lbl_8087F048
    addi r4, r1, 0x8
    bl fn_80109828
    lmw r27, 0x20c(r1)
    lwz r0, 0x224(r1)
    mtlr r0
    addi r1, r1, 0x220
    blr
}
