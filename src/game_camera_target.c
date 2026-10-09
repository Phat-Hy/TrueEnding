#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void dtor_80084684(void);
extern void fn_8005B3CC(void);
extern void fn_8005B5F8(void);
extern void fn_8005B6E8(void);
extern void fn_80087994(void);
extern void fn_8008937C(void);
extern void fn_800897D8(void);
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_80097CCC(void);
extern void fn_80097D7C(void);
extern void fn_800C31F4(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800CB440(void);
extern void fn_800CB5C8(void);
extern void fn_800D246C(void);
extern void fn_800DC12C(void);
extern void fn_800DC288(void);
extern void fn_800DD3FC(void);
extern void fn_800EB7A0(void);
extern void fn_800EE360(void);
extern void fn_800F8548(void);
extern void fn_800F8C6C(void);
extern void fn_801092C8(void);
extern void fn_80109828(void);
extern void fn_8013655C(void);
extern void fn_80145334(void);
extern void fn_8014C540(void);
extern void fn_8015495C(void);
extern void fn_8016DA4C(void);
extern void fn_8016E970(void);
extern void fn_8017039C(void);
extern void fn_80170A20(void);
extern void fn_801765D8(void);
extern void fn_80178A6C(void);
extern void fn_80219E6C(void);
extern void fn_80232B7C(void);
extern void fn_802377B8(void);
extern void fn_8023780C(void);
extern void fn_8023781C(void);
extern void fn_80237874(void);
extern void fn_80239DAC(void);
extern void fn_8023A8B4(void);
extern void fn_802E3604(void);
extern void fn_802E37DC(void);
extern void fn_802E3B24(void);
extern void fn_802E3EE8(void);
extern void fn_802E470C(void);
extern void fn_802E8084(void);
extern void fn_8035B694(void);
extern void fn_8035B78C(void);
extern void fn_80375184(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473E74(void);
extern void fn_80473E8C(void);
extern void fn_80473F50(void);
extern void fn_804DA490(void);
extern void fn_805A3D00(void);
extern void fn_805F9940(void);
extern void fn_80682428(void);
extern void fn_806827C4(void);
extern void fn_80684600(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 jumptable_80787120[];
extern u8 lbl_80747B10[];
extern u8 lbl_80747D90[];
extern u8 lbl_807772B0[];
extern u8 lbl_807772D0[];
extern u8 lbl_80787114[];
extern u8 lbl_80787160[];
extern u8 lbl_8078FBB0[];
extern u8 lbl_807C7030[];
extern u8 lbl_807C8410[];

/* Small data declarations */
extern u32 lbl_8087D708;
extern u32 lbl_8087EF10;
extern u32 lbl_8087F048;
extern u32 lbl_8087F1E4;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F610;
extern u32 lbl_8087F8A0;
extern u32 lbl_808813D0;
extern u32 lbl_8088467C;
extern u32 lbl_80884698;
extern u32 lbl_8088469C;
extern u32 lbl_808846A0;
extern u32 lbl_808846CC;
extern u32 lbl_808846D0;
extern u32 lbl_808846D4;
extern u32 lbl_808846D8;
extern u32 lbl_808846DC;
extern u32 lbl_808846E0;
extern u32 lbl_808846E8;
extern u32 lbl_808846EC;
extern u32 lbl_808846F0;
extern u32 lbl_808846F4;
extern u32 lbl_808846F8;
extern u32 lbl_808846FC;
extern u32 lbl_80884700;
extern u32 lbl_80884704;
extern u32 lbl_80884708;
extern u32 lbl_8088470C;
extern u32 lbl_80884710;
extern u32 lbl_80884714;
extern u32 lbl_80884718;
extern u32 lbl_8088471C;

/* Function declarations */
void fn_802E1054(void);
void fn_802E10D8(void);
void fn_802E1290(void);
void fn_802E1414(void);
void fn_802E1624(void);
void fn_802E177C(void);
void fn_802E1A0C(void);
void fn_802E1A88(void);
void fn_802E1ACC(void);
void fn_802E1CA0(void);
void fn_802E1D30(void);
void fn_802E1D48(void);
void fn_802E1D50(void);
void fn_802E1DF0(void);
void fn_802E20FC(void);
void fn_802E211C(void);
void fn_802E2270(void);
void fn_802E2328(void);
void fn_802E2360(void);
void fn_802E2468(void);
void fn_802E2470(void);
void fn_802E2640(void);
void fn_802E289C(void);

asm void fn_802E1054(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lfs f0, lbl_8088467C
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lfs f1, 0x2e4(r3)
    lwz r4, 0x1654(r3)
    fcmpo cr0, f1, f0
    subi r0, r4, 0x1
    stw r0, 0x1654(r3)
    cror eq, lt, eq
    beq lbl_fn_802E1054_0000003C
    cmpwi r0, 0x0
    bge lbl_fn_802E1054_00000070
lbl_fn_802E1054_0000003C:
    lwz r4, 0x12a4(r3)
    lwz r0, 0x5c0(r3)
    oris r4, r4, 0x200
    stw r4, 0x12a4(r3)
    clrrwi r0, r0, 1
    stw r0, 0x5c0(r3)
    mr r3, r31
    bl fn_800EE360
    lwz r0, 0x12a4(r31)
    mr r3, r31
    ori r0, r0, 0x8000
    stw r0, 0x12a4(r31)
    bl fn_801765D8
lbl_fn_802E1054_00000070:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802E10D8(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    li r31, 0x0
    stw r30, 0x48(r1)
    mr r30, r4
    stw r29, 0x44(r1)
    mr r29, r3
    stw r31, 0x14ec(r3)
    stw r31, 0x14e8(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r29)
    li r0, 0x6
    mr r3, r29
    li r4, 0x3
    stw r0, 0x58c(r29)
    bl fn_8016E970
    stw r30, 0x1538(r29)
    mr r3, r29
    lwz r12, 0x0(r29)
    lwz r12, 0x98(r12)
    mtctr r12
    bctrl
    lwz r3, 0x1538(r29)
    li r0, 0x1
    lfs f0, lbl_80884698
    cmpwi r3, 0x0
    stw r31, 0x151c(r29)
    stw r0, 0x3fc(r29)
    stfs f0, 0x2fc(r29)
    stfs f0, 0x2e8(r29)
    beq lbl_fn_802E10D8_00000118
    cmpwi r3, 0x1
    beq lbl_fn_802E10D8_00000140
    b lbl_fn_802E10D8_00000164
lbl_fn_802E10D8_00000118:
    lfs f1, lbl_8088467C
    addi r3, r29, 0xb0
    lfs f2, lbl_8088469C
    li r4, 0x0
    li r5, 0x2b
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_802E10D8_00000164
lbl_fn_802E10D8_00000140:
    lfs f1, lbl_8088467C
    addi r3, r29, 0xb0
    lfs f2, lbl_8088469C
    li r4, 0x0
    li r5, 0x2d
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
lbl_fn_802E10D8_00000164:
    lis r31, lbl_807C7030@ha
    lfs f6, lbl_8088467C
    addi r31, r31, lbl_807C7030@l
    lfs f5, lbl_808846CC
    lfs f4, 0x530(r29)
    addi r5, r29, 0x15a0
    lfs f3, 0x52c(r29)
    li r3, 0x0
    lfs f0, 0x528(r29)
    fadds f4, f4, f6
    psq_l f1, 0x0(r31), 0, 0
    fadds f3, f3, f5
    lfs f2, 0x8(r31)
    fadds f0, f0, f6
    stfs f2, 0x15a8(r29)
    li r4, 0x0
    psq_st f1, 0x0(r5), 0, 0
    stfs f6, 0x20(r1)
    stfs f5, 0x24(r1)
    stfs f6, 0x28(r1)
    stfs f0, 0x2c(r1)
    stfs f3, 0x30(r1)
    stfs f4, 0x34(r1)
    bl fn_80232B7C
    lfs f1, lbl_80884698
    li r3, -0x1
    stfs f1, 0x10(r1)
    li r0, 0x1
    mr r8, r31
    addi r4, r29, 0x1520
    stfs f1, 0x14(r1)
    addi r7, r1, 0x2c
    addi r9, r1, 0x10
    li r5, 0x0
    stfs f1, 0x18(r1)
    li r6, 0x0
    li r10, -0x1
    stfs f1, 0x1c(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r3, lbl_8087F610
    cmpwi r3, 0x0
    beq lbl_fn_802E10D8_00000220
    li r4, 0x0
    bl fn_804DA490
lbl_fn_802E10D8_00000220:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_802E1290(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    li r0, 0x0
    stw r31, 0x4c(r1)
    stw r30, 0x48(r1)
    mr r30, r3
    stw r0, 0x14ec(r3)
    stw r0, 0x14e8(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    li r0, 0x7
    mr r3, r30
    li r4, 0x3
    stw r0, 0x58c(r30)
    bl fn_8016E970
    lfs f2, lbl_80884698
    li r31, 0x1
    lfs f0, lbl_808846D0
    addi r3, r30, 0xb0
    stfs f2, 0x2fc(r30)
    li r4, 0x0
    lfs f1, lbl_8088467C
    li r5, 0x2d
    stw r31, 0x3fc(r30)
    li r6, 0x0
    lfs f2, lbl_8088469C
    li r7, 0x0
    stfs f0, 0x2e8(r30)
    li r8, 0x1
    bl fn_80097C08
    addi r3, r30, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    lis r4, lbl_80747B10@ha
    stfs f1, 0x2e4(r30)
    addi r4, r4, lbl_80747B10@l
    lfs f1, lbl_80884698
    addi r3, r1, 0x10
    addi r5, r30, 0x614
    addi r4, r4, 0x1b8
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    lfs f4, lbl_8088467C
    li r3, 0x0
    lfs f3, lbl_808846CC
    li r4, 0x0
    lfs f2, 0x530(r30)
    lfs f1, 0x52c(r30)
    lfs f0, 0x528(r30)
    fadds f2, f2, f4
    fadds f1, f1, f3
    stfs f4, 0x28(r1)
    fadds f0, f0, f4
    stfs f3, 0x2c(r1)
    stfs f4, 0x30(r1)
    stfs f0, 0x34(r1)
    stfs f1, 0x38(r1)
    stfs f2, 0x3c(r1)
    bl fn_80232B7C
    lfs f1, lbl_80884698
    lis r8, lbl_807C7030@ha
    stfs f1, 0x18(r1)
    li r0, -0x1
    addi r4, r30, 0x152c
    addi r7, r1, 0x34
    stfs f1, 0x1c(r1)
    addi r8, r8, lbl_807C7030@l
    addi r9, r1, 0x18
    li r5, 0x0
    stfs f1, 0x20(r1)
    li r6, 0x0
    li r10, -0x1
    stfs f1, 0x24(r1)
    stw r0, 0x8(r1)
    stw r31, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r0, 0x14fc(r30)
    cmpwi r0, 0x96
    blt lbl_fn_802E1290_000003A8
    lwz r3, lbl_8087F610
    cmpwi r3, 0x0
    beq lbl_fn_802E1290_000003A8
    li r4, 0x1
    bl fn_804DA490
lbl_fn_802E1290_000003A8:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_802E1414(void)
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
    stw r0, 0x14ec(r3)
    stw r0, 0x14e8(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r29)
    li r0, 0x9
    mr r3, r29
    li r4, 0x3
    stw r0, 0x58c(r29)
    bl fn_8016E970
    lfs f0, lbl_80884698
    li r30, 0x1
    stw r30, 0x3fc(r29)
    addi r3, r29, 0xb0
    lfs f1, lbl_8088467C
    li r4, 0x0
    stfs f0, 0x2fc(r29)
    li r5, 0x145
    lfs f2, lbl_8088469C
    li r6, 0x0
    stfs f0, 0x2e8(r29)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lis r4, lbl_80747B10@ha
    lfs f1, lbl_80884698
    addi r4, r4, lbl_80747B10@l
    addi r3, r1, 0x10
    addi r4, r4, 0x1c5
    addi r5, r29, 0x614
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r29, 0x1560
    addi r4, r1, 0x10
    bl fn_800CB440
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    mr r3, r29
    li r4, 0x64
    bl fn_80232B7C
    lfs f0, lbl_8088467C
    li r31, -0x1
    lfs f1, lbl_80884698
    addi r4, r29, 0x1564
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
    lfs f0, lbl_8088467C
    addi r4, r29, 0x1588
    lfs f1, lbl_80884698
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
    addi r6, r29, 0x15a0
    addi r5, r5, lbl_807C7030@l
    addi r3, r1, 0x68
    psq_l f1, 0x0(r5), 0, 0
    li r4, 0x0
    lfs f2, 0x8(r5)
    li r5, 0x200
    stfs f2, 0x15a8(r29)
    psq_st f1, 0x0(r6), 0, 0
    bl memset
    lwz r4, lbl_8087F1E4
    addi r3, r1, 0x68
    lwz r4, 0x4dc(r4)
    cmpwi r4, 0x0
    beq lbl_fn_802E1414_00000594
    b lbl_fn_802E1414_00000598
lbl_fn_802E1414_00000594:
    la r4, lbl_808813D0
lbl_fn_802E1414_00000598:
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

asm void fn_802E1624(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    li r0, 0x0
    stw r31, 0x4c(r1)
    stw r30, 0x48(r1)
    mr r30, r3
    stw r0, 0x14ec(r3)
    stw r0, 0x14e8(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    li r0, 0xa
    mr r3, r30
    li r4, 0x3
    stw r0, 0x58c(r30)
    bl fn_8016E970
    lfs f0, lbl_80884698
    li r31, 0x1
    stw r31, 0x3fc(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_8088467C
    li r4, 0x0
    stfs f0, 0x2fc(r30)
    li r5, 0x147
    lfs f2, lbl_8088469C
    li r6, 0x0
    stfs f0, 0x2e8(r30)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lis r4, lbl_80747B10@ha
    lfs f1, lbl_80884698
    addi r4, r4, lbl_80747B10@l
    addi r3, r1, 0x10
    addi r4, r4, 0x1d2
    addi r5, r30, 0x614
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    addi r3, r30, 0x1560
    li r4, 0x0
    li r5, 0x0
    bl fn_800CB5C8
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x64
    li r6, 0x1
    bl fn_80239DAC
    li r3, 0x0
    li r4, 0x0
    bl fn_80232B7C
    lfs f0, lbl_8088467C
    li r0, -0x1
    lfs f1, lbl_80884698
    addi r4, r30, 0x1570
    stfs f0, 0x20(r1)
    addi r5, r30, 0xb0
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
    stw r31, 0x1554(r30)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_802E177C(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    li r0, 0x0
    stw r31, 0x5c(r1)
    li r31, 0x1
    stw r30, 0x58(r1)
    stw r29, 0x54(r1)
    stw r28, 0x50(r1)
    mr r28, r3
    stb r31, 0x1650(r3)
    stw r0, 0x14ec(r3)
    stw r0, 0x14e8(r3)
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
    li r4, 0x6
    bl fn_8016E970
    li r0, 0x17
    stw r0, 0x560(r28)
    lfs f1, lbl_8088467C
    addi r3, r28, 0xb0
    li r4, 0x0
    bl fn_80097CCC
    lfs f2, lbl_80884698
    addi r3, r28, 0xb0
    lfs f0, lbl_808846D4
    li r4, 0x0
    stfs f2, 0x2fc(r28)
    li r5, 0x2e
    lfs f1, lbl_8088467C
    li r6, 0x0
    stw r31, 0x3fc(r28)
    li r7, 0x0
    lfs f2, lbl_8088469C
    li r8, 0x1
    stfs f0, 0x2e8(r28)
    bl fn_80097C08
    addi r3, r28, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    stfs f1, 0x2e4(r28)
    addi r3, r28, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fctiwz f0, f1
    li r30, 0x0
    li r31, 0x0
    stfd f0, 0x40(r1)
    lwz r3, 0x44(r1)
    addi r0, r3, 0x1e
    stw r0, 0x1654(r28)
    b lbl_fn_802E177C_00000874
lbl_fn_802E177C_00000844:
    lwz r3, 0x1624(r28)
    lwzx r29, r3, r31
    lwz r12, 0x0(r29)
    mr r3, r29
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
    mr r3, r29
    li r4, 0x3
    bl fn_802E8084
    addi r31, r31, 0x4
    addi r30, r30, 0x1
lbl_fn_802E177C_00000874:
    lwz r0, 0x1628(r28)
    cmplw r30, r0
    blt lbl_fn_802E177C_00000844
    li r3, 0x0
    li r4, 0x0
    bl fn_80232B7C
    lfs f0, lbl_8088467C
    li r3, -0x1
    lfs f1, lbl_80884698
    li r0, 0x1
    stfs f0, 0x20(r1)
    addi r4, r28, 0x15cc
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
    addi r3, r28, 0x1560
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
    beq lbl_fn_802E177C_00000964
    bl fn_80375184
    cmpwi r3, 0x0
    beq lbl_fn_802E177C_00000964
    lwz r0, 0x48(r28)
    cmpwi r0, 0x2
    bne lbl_fn_802E177C_00000964
    lwz r3, lbl_8087F048
    mr r5, r28
    li r4, 0x6
    li r6, 0x0
    li r7, 0x0
    bl fn_801092C8
lbl_fn_802E177C_00000964:
    lis r4, lbl_80747B10@ha
    lfs f1, lbl_80884698
    addi r4, r4, lbl_80747B10@l
    addi r3, r1, 0x10
    addi r4, r4, 0x1df
    li r5, 0x0
    li r6, -0x1
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

asm void fn_802E1A0C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_80747B10@ha
    stw r0, 0x14(r1)
    addi r4, r4, lbl_80747B10@l
    addi r4, r4, 0x1ec
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x1658(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802E1A0C_00000A00
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_802E1A0C_00000A00
    addi r3, r3, 0x10
    bl fn_8008937C
    stw r3, 0x1658(r31)
    b lbl_fn_802E1A0C_00000A04
lbl_fn_802E1A0C_00000A00:
    li r3, 0x0
lbl_fn_802E1A0C_00000A04:
    lis r4, lbl_80747B10@ha
    addi r5, r31, 0x165c
    addi r4, r4, lbl_80747B10@l
    li r6, 0x0
    addi r4, r4, 0x1fa
    li r7, 0x0
    bl fn_80087994
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802E1A88(void)
{
    nofralloc
    lwz r0, 0x58c(r3)
    stw r0, 0x0(r4)
    lwz r0, 0x14bc(r3)
    stw r0, 0x4(r4)
    lwz r0, 0x151c(r3)
    sth r0, 0x8(r4)
    lwz r0, 0x14dc(r3)
    stb r0, 0xc(r4)
    lwz r0, 0x1540(r3)
    stb r0, 0xd(r4)
    lwz r0, 0x154c(r3)
    stb r0, 0xe(r4)
    lwz r0, 0x1554(r3)
    stb r0, 0xf(r4)
    lwz r0, 0x15e4(r3)
    sth r0, 0xa(r4)
    blr
}

asm void fn_802E1ACC(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    lwz r0, 0x0(r4)
    stw r31, 0x3c(r1)
    mr r31, r4
    cmpwi r0, 0xa
    stw r30, 0x38(r1)
    mr r30, r3
    bne lbl_fn_802E1ACC_00000B4C
    lwz r0, 0x58c(r3)
    cmpwi r0, 0xa
    beq lbl_fn_802E1ACC_00000B4C
    li r3, 0x0
    li r4, 0x0
    bl fn_80232B7C
    lfs f0, lbl_8088467C
    li r3, -0x1
    lfs f1, lbl_80884698
    li r0, 0x1
    stfs f0, 0x1c(r1)
    addi r4, r30, 0x1570
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
    lwz r5, lbl_8087F430
    li r0, 0x8c
    lfs f0, lbl_80884698
    lwz r3, 0x96c(r5)
    srwi r4, r3, 31
    clrlwi r3, r3, 31
    xor r3, r3, r4
    subf r3, r4, r3
    stw r3, 0x96c(r5)
    stw r0, 0x970(r5)
    stfs f0, 0x974(r5)
    stfs f0, 0x978(r5)
lbl_fn_802E1ACC_00000B4C:
    lwz r3, 0x0(r31)
    cmpwi r3, 0x2
    bne lbl_fn_802E1ACC_00000B84
    lbz r0, 0x1650(r30)
    cmpwi r0, 0x0
    bne lbl_fn_802E1ACC_00000B84
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
    mr r3, r30
    bl fn_802E177C
    b lbl_fn_802E1ACC_00000C34
lbl_fn_802E1ACC_00000B84:
    cmpwi r3, 0x6
    bne lbl_fn_802E1ACC_00000BAC
    lwz r0, 0x58c(r30)
    cmpwi r0, 0x6
    beq lbl_fn_802E1ACC_00000BAC
    lwz r3, lbl_8087F610
    cmpwi r3, 0x0
    beq lbl_fn_802E1ACC_00000BAC
    li r4, 0x0
    bl fn_804DA490
lbl_fn_802E1ACC_00000BAC:
    lwz r0, 0x0(r31)
    cmpwi r0, 0x7
    bne lbl_fn_802E1ACC_00000BE4
    lwz r0, 0x58c(r30)
    cmpwi r0, 0x7
    beq lbl_fn_802E1ACC_00000BE4
    lwz r0, 0x14fc(r30)
    cmpwi r0, 0x96
    blt lbl_fn_802E1ACC_00000BE4
    lwz r3, lbl_8087F610
    cmpwi r3, 0x0
    beq lbl_fn_802E1ACC_00000BE4
    li r4, 0x1
    bl fn_804DA490
lbl_fn_802E1ACC_00000BE4:
    lbz r0, 0xc(r31)
    lbz r4, 0xd(r31)
    extsb r6, r0
    lbz r3, 0xe(r31)
    lbz r0, 0xf(r31)
    extsb r5, r4
    extsb r4, r3
    lwz r9, 0x0(r31)
    extsb r3, r0
    lwz r8, 0x4(r31)
    lha r7, 0x8(r31)
    lha r0, 0xa(r31)
    stw r9, 0x58c(r30)
    stw r8, 0x14bc(r30)
    stw r7, 0x151c(r30)
    stw r6, 0x14dc(r30)
    stw r5, 0x1540(r30)
    stw r4, 0x154c(r30)
    stw r3, 0x1554(r30)
    stw r0, 0x15e4(r30)
lbl_fn_802E1ACC_00000C34:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_802E1CA0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    lwz r0, 0x624(r4)
    cmpwi r0, 0x0
    bne lbl_fn_802E1CA0_00000C98
    lfs f4, lbl_8088467C
    lfs f3, lbl_808846A0
    lfs f2, 0x530(r4)
    lfs f1, 0x52c(r4)
    lfs f0, 0x528(r4)
    fadds f2, f2, f4
    fadds f1, f1, f3
    stfs f4, 0x8(r1)
    fadds f0, f0, f4
    stfs f3, 0xc(r1)
    stfs f4, 0x10(r1)
    stfs f0, 0x0(r3)
    stfs f1, 0x4(r3)
    stfs f2, 0x8(r3)
    b lbl_fn_802E1CA0_00000CD4
lbl_fn_802E1CA0_00000C98:
    lwz r4, 0x62c(r4)
    lfs f4, lbl_8088467C
    lfs f3, lbl_808846A0
    lfs f2, 0xc(r4)
    lfs f1, 0x8(r4)
    lfs f0, 0x4(r4)
    fadds f2, f2, f4
    fadds f1, f1, f3
    stfs f4, 0x14(r1)
    fadds f0, f0, f4
    stfs f3, 0x18(r1)
    stfs f4, 0x1c(r1)
    stfs f0, 0x0(r3)
    stfs f1, 0x4(r3)
    stfs f2, 0x8(r3)
lbl_fn_802E1CA0_00000CD4:
    addi r1, r1, 0x20
    blr
}

asm void fn_802E1D30(void)
{
    nofralloc
    lfs f1, lbl_8088467C
    lfs f0, lbl_808846D8
    stfs f1, 0x0(r3)
    stfs f0, 0x4(r3)
    stfs f1, 0x8(r3)
    blr
}

asm void fn_802E1D48(void)
{
    nofralloc
    lfs f1, lbl_808846DC
    blr
}

asm void fn_802E1D50(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r5, lbl_80787114@ha
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    addi r3, r4, 0xb0
    addi r4, r5, lbl_80787114@l
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802E1D50_00000D3C
    li r3, 0x0
    b lbl_fn_802E1D50_00000D48
lbl_fn_802E1D50_00000D3C:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r3, r3, r0
lbl_fn_802E1D50_00000D48:
    lfs f3, 0x2c(r3)
    lfs f4, 0x1c(r3)
    lfs f5, 0xc(r3)
    lfs f2, 0x5ac(r31)
    lfs f1, 0x5a8(r31)
    lfs f0, 0x5a4(r31)
    fadds f2, f3, f2
    fadds f1, f4, f1
    stfs f5, 0x8(r1)
    fadds f0, f5, f0
    stfs f1, 0x4(r30)
    stfs f0, 0x0(r30)
    stfs f2, 0x8(r30)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    stfs f4, 0xc(r1)
    stfs f3, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_802E1DF0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    beq lbl_fn_802E1DF0_00001088
    addic. r0, r3, 0x1658
    beq lbl_fn_802E1DF0_00000DE8
    lwz r4, 0x1658(r3)
    cmpwi r4, 0x0
    beq lbl_fn_802E1DF0_00000DE8
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_802E1DF0_00000DE8
    bl fn_800897D8
lbl_fn_802E1DF0_00000DE8:
    addic. r4, r30, 0x1638
    beq lbl_fn_802E1DF0_00000E14
    beq lbl_fn_802E1DF0_00000E14
    beq lbl_fn_802E1DF0_00000E14
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_802E1DF0_00000E14
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_802E1DF0_00000E14:
    addic. r3, r30, 0x1630
    beq lbl_fn_802E1DF0_00000E24
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802E1DF0_00000E24:
    addic. r4, r30, 0x1624
    beq lbl_fn_802E1DF0_00000E54
    beq lbl_fn_802E1DF0_00000E54
    beq lbl_fn_802E1DF0_00000E54
    beq lbl_fn_802E1DF0_00000E54
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_802E1DF0_00000E54
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_802E1DF0_00000E54:
    addic. r4, r30, 0x1618
    beq lbl_fn_802E1DF0_00000E84
    beq lbl_fn_802E1DF0_00000E84
    beq lbl_fn_802E1DF0_00000E84
    beq lbl_fn_802E1DF0_00000E84
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_802E1DF0_00000E84
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_802E1DF0_00000E84:
    addic. r4, r30, 0x160c
    beq lbl_fn_802E1DF0_00000EB4
    beq lbl_fn_802E1DF0_00000EB4
    beq lbl_fn_802E1DF0_00000EB4
    beq lbl_fn_802E1DF0_00000EB4
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_802E1DF0_00000EB4
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_802E1DF0_00000EB4:
    addic. r4, r30, 0x15f4
    beq lbl_fn_802E1DF0_00000EE4
    beq lbl_fn_802E1DF0_00000EE4
    beq lbl_fn_802E1DF0_00000EE4
    beq lbl_fn_802E1DF0_00000EE4
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_802E1DF0_00000EE4
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_802E1DF0_00000EE4:
    addic. r4, r30, 0x15e8
    beq lbl_fn_802E1DF0_00000F14
    beq lbl_fn_802E1DF0_00000F14
    beq lbl_fn_802E1DF0_00000F14
    beq lbl_fn_802E1DF0_00000F14
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_802E1DF0_00000F14
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_802E1DF0_00000F14:
    addic. r29, r30, 0x15cc
    beq lbl_fn_802E1DF0_00000F34
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_802E1DF0_00000F34
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802E1DF0_00000F34:
    addic. r29, r30, 0x15c0
    beq lbl_fn_802E1DF0_00000F54
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_802E1DF0_00000F54
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802E1DF0_00000F54:
    addic. r4, r30, 0x1594
    beq lbl_fn_802E1DF0_00000F80
    beq lbl_fn_802E1DF0_00000F80
    beq lbl_fn_802E1DF0_00000F80
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_802E1DF0_00000F80
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_802E1DF0_00000F80:
    addic. r29, r30, 0x1588
    beq lbl_fn_802E1DF0_00000FA0
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_802E1DF0_00000FA0
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802E1DF0_00000FA0:
    addic. r29, r30, 0x157c
    beq lbl_fn_802E1DF0_00000FC0
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_802E1DF0_00000FC0
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802E1DF0_00000FC0:
    addic. r29, r30, 0x1570
    beq lbl_fn_802E1DF0_00000FE0
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_802E1DF0_00000FE0
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802E1DF0_00000FE0:
    addic. r29, r30, 0x1564
    beq lbl_fn_802E1DF0_00001000
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_802E1DF0_00001000
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802E1DF0_00001000:
    addi r3, r30, 0x1560
    li r4, -0x1
    bl fn_800CB3A0
    addic. r29, r30, 0x152c
    beq lbl_fn_802E1DF0_0000102C
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_802E1DF0_0000102C
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802E1DF0_0000102C:
    addic. r29, r30, 0x1520
    beq lbl_fn_802E1DF0_0000104C
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_802E1DF0_0000104C
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802E1DF0_0000104C:
    addic. r29, r30, 0x1510
    beq lbl_fn_802E1DF0_0000106C
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_802E1DF0_0000106C
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802E1DF0_0000106C:
    mr r3, r30
    li r4, 0x0
    bl fn_805A3D00
    cmpwi r31, 0x0
    ble lbl_fn_802E1DF0_00001088
    mr r3, r30
    bl dtor_80084684
lbl_fn_802E1DF0_00001088:
    mr r3, r30
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_802E20FC(void)
{
    nofralloc
    lis r4, lbl_807C8410@ha
    lfs f1, lbl_8088467C
    addi r3, r4, lbl_807C8410@l
    lfs f0, lbl_808846E0
    stfs f1, lbl_807C8410@l(r4)
    stfs f0, 0x4(r3)
    stfs f1, 0x8(r3)
    blr
}

asm void fn_802E211C(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    stw r31, 0x11c(r1)
    stw r30, 0x118(r1)
    stw r29, 0x114(r1)
    mr r29, r5
    stw r28, 0x110(r1)
    mr r28, r3
    lwz r5, 0x20(r5)
    bl fn_8035B694
    lis r3, lbl_80787160@ha
    addi r31, r28, 0x14b0
    addi r3, r3, lbl_80787160@l
    stw r3, 0x0(r28)
    mr r3, r31
    bl fn_80473E74
    lfs f1, lbl_808846E8
    lis r3, lbl_8078FBB0@ha
    li r30, 0x0
    lfs f0, lbl_808846EC
    addi r3, r3, lbl_8078FBB0@l
    li r0, -0x1
    stw r3, 0x0(r31)
    addi r3, r28, 0x14f8
    stw r30, 0x14b8(r28)
    stw r30, 0x14bc(r28)
    stw r30, 0x14c0(r28)
    stfs f1, 0x14c8(r28)
    stw r30, 0x14cc(r28)
    stw r30, 0x14d0(r28)
    stw r30, 0x14d8(r28)
    stw r30, 0x14dc(r28)
    stw r30, 0x14e0(r28)
    stfs f0, 0x14e4(r28)
    stw r30, 0x14e8(r28)
    stw r30, 0x14ec(r28)
    stw r0, 0x14f0(r28)
    stw r30, 0x14f4(r28)
    bl fn_802377B8
    lwz r0, 0x958(r28)
    lis r31, lbl_80747D90@ha
    stw r30, 0x1504(r28)
    addi r3, r29, 0x2c
    ori r0, r0, 0x200
    addi r4, r31, lbl_80747D90@l
    stw r30, 0x1508(r28)
    stw r30, 0x150c(r28)
    stw r0, 0x958(r28)
    bl fn_806827C4
    cmpwi r3, 0x0
    mr r5, r3
    beq lbl_fn_802E211C_000011B8
    addi r4, r31, lbl_80747D90@l
    addi r3, r1, 0x8
    addi r4, r4, 0x9
    addi r5, r5, 0x8
    crclr 6
    bl sprintf
    b lbl_fn_802E211C_000011CC
lbl_fn_802E211C_000011B8:
    addi r4, r31, lbl_80747D90@l
    addi r3, r1, 0x8
    addi r4, r4, 0x25
    crclr 6
    bl sprintf
lbl_fn_802E211C_000011CC:
    lwz r12, 0x14b0(r28)
    addi r3, r28, 0x14b0
    addi r4, r1, 0x8
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lis r4, lbl_80747D90@ha
    addi r3, r28, 0x14f8
    addi r4, r4, lbl_80747D90@l
    addi r4, r4, 0x51
    bl fn_8023780C
    lwz r31, 0x11c(r1)
    mr r3, r28
    lwz r30, 0x118(r1)
    lwz r29, 0x114(r1)
    lwz r28, 0x110(r1)
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_802E2270(void)
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
    beq lbl_fn_802E2270_000012B4
    addic. r0, r3, 0x1508
    beq lbl_fn_802E2270_00001268
    lwz r4, 0x1508(r3)
    cmpwi r4, 0x0
    beq lbl_fn_802E2270_00001268
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_802E2270_00001268
    bl fn_800897D8
lbl_fn_802E2270_00001268:
    addic. r31, r29, 0x14f8
    beq lbl_fn_802E2270_00001288
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_802E2270_00001288
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802E2270_00001288:
    addic. r3, r29, 0x14b0
    beq lbl_fn_802E2270_00001298
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802E2270_00001298:
    mr r3, r29
    li r4, 0x0
    bl fn_8035B78C
    cmpwi r30, 0x0
    ble lbl_fn_802E2270_000012B4
    mr r3, r29
    bl dtor_80084684
lbl_fn_802E2270_000012B4:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_802E2328(void)
{
    nofralloc
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_802E2328_000012EC
    li r3, 0x1
    blr
lbl_fn_802E2328_000012EC:
    lwz r0, 0x14c0(r3)
    li r3, 0x0
    cmpwi r0, 0x1
    beqlr
    cmpwi r0, 0x2
    beqlr
    li r3, 0x1
    blr
}

asm void fn_802E2360(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    lfs f31, lbl_808846EC
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r4, lbl_8087F8A0
    lfs f1, 0x530(r3)
    lwz r4, 0x48(r4)
    lfs f2, 0x52c(r3)
    lfs f4, 0x530(r4)
    lfs f3, 0x52c(r4)
    lfs f0, 0x528(r3)
    fsubs f4, f4, f1
    lfs f1, 0x528(r4)
    fsubs f2, f3, f2
    addi r3, r1, 0x8
    fsubs f0, f1, f0
    stfs f2, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f4, 0x10(r1)
    bl fn_805F9940
    lfs f2, lbl_808846F0
    lfs f0, lbl_808846EC
    fsubs f1, f2, f1
    fdivs f2, f1, f2
    fcmpo cr0, f2, f0
    ble lbl_fn_802E2360_000013F4
    lwz r3, 0x58c(r31)
    cmpwi r3, 0x2
    bne lbl_fn_802E2360_000013C0
    lwz r0, 0x2dc(r31)
    cmpwi r0, 0x2f
    bne lbl_fn_802E2360_000013C0
    lfs f1, 0x2e4(r31)
    lfs f0, lbl_808846F4
    fcmpo cr0, f0, f1
    bge lbl_fn_802E2360_000013C0
    lfs f0, lbl_808846E8
    fcmpo cr0, f1, f0
    bge lbl_fn_802E2360_000013C0
    lfs f0, lbl_808846F8
    fmadds f31, f0, f2, f31
lbl_fn_802E2360_000013C0:
    cmpwi r3, 0xd
    bne lbl_fn_802E2360_000013F4
    lfs f1, 0x2e4(r31)
    lfs f0, lbl_808846FC
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_802E2360_000013F4
    lfs f0, lbl_80884700
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_802E2360_000013F4
    lfs f0, lbl_808846F8
    fmadds f31, f0, f2, f31
lbl_fn_802E2360_000013F4:
    fmr f1, f31
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_802E2468(void)
{
    nofralloc
    stw r4, 0x1504(r3)
    blr
}

asm void fn_802E2470(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    bl fn_8013655C
    cmpwi r3, 0x0
    beq lbl_fn_802E2470_00001448
    li r3, 0x0
    b lbl_fn_802E2470_000015D4
lbl_fn_802E2470_00001448:
    lwz r3, 0x1438(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802E2470_0000146C
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_802E2470_0000146C
    li r3, 0x0
    b lbl_fn_802E2470_000015D4
lbl_fn_802E2470_0000146C:
    addi r3, r31, 0x14b0
    bl fn_80473F50
    cmpwi r3, 0x0
    beq lbl_fn_802E2470_00001484
    li r3, 0x0
    b lbl_fn_802E2470_000015D4
lbl_fn_802E2470_00001484:
    addi r3, r31, 0x14f8
    bl fn_80237874
    cmpwi r3, 0x0
    beq lbl_fn_802E2470_0000149C
    li r3, 0x0
    b lbl_fn_802E2470_000015D4
lbl_fn_802E2470_0000149C:
    lwz r0, 0x1508(r31)
    lis r3, lbl_80747D90@ha
    addi r3, r3, lbl_80747D90@l
    cmpwi r0, 0x0
    addi r4, r3, 0x66
    bne lbl_fn_802E2470_000014D0
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_802E2470_000014D0
    addi r3, r3, 0x10
    bl fn_8008937C
    stw r3, 0x1508(r31)
    b lbl_fn_802E2470_000014D4
lbl_fn_802E2470_000014D0:
    li r3, 0x0
lbl_fn_802E2470_000014D4:
    lis r4, lbl_80747D90@ha
    addi r5, r31, 0x150c
    addi r4, r4, lbl_80747D90@l
    li r6, 0x0
    addi r4, r4, 0x76
    li r7, 0x0
    bl fn_80087994
    lwz r3, 0x1438(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802E2470_00001514
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x1438(r31)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_802E2470_00001514:
    lwz r0, 0x7ec(r31)
    addi r3, r31, 0x14b0
    ori r0, r0, 0x1c0
    oris r0, r0, 0x1
    ori r0, r0, 0xc21d
    oris r0, r0, 0x380
    stw r0, 0x7ec(r31)
    bl fn_8047059C
    mr r30, r3
    addi r3, r31, 0x14b0
    bl fn_80470580
    mr r4, r3
    mr r3, r31
    mr r5, r30
    bl fn_802E2640
    lis r4, lbl_80747D90@ha
    addi r3, r31, 0xb0
    addi r4, r4, lbl_80747D90@l
    li r5, 0x0
    addi r4, r4, 0x80
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802E2470_00001578
    li r5, 0x0
    b lbl_fn_802E2470_00001584
lbl_fn_802E2470_00001578:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r5, r3, r0
lbl_fn_802E2470_00001584:
    lwz r3, 0x958(r31)
    li r30, 0x0
    lwz r4, 0x54c(r31)
    li r0, 0x1
    ori r3, r3, 0x2a
    stw r5, 0x14d4(r31)
    ori r4, r4, 0x200
    stw r4, 0x54c(r31)
    stw r3, 0x958(r31)
    stw r0, 0x10d0(r31)
    stw r30, 0x14b8(r31)
    stw r30, 0x14bc(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r3, r31
    li r4, 0x3
    stw r30, 0x58c(r31)
    bl fn_8016E970
    li r3, 0x1
lbl_fn_802E2470_000015D4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802E2640(void)
{
    nofralloc
    stwu r1, -0x650(r1)
    mflr r0
    lis r6, lbl_807772D0@ha
    stw r0, 0x654(r1)
    li r0, 0x0
    addi r6, r6, lbl_807772D0@l
    stw r31, 0x64c(r1)
    mr r31, r3
    addi r3, r1, 0x18
    stw r30, 0x648(r1)
    mr r30, r4
    li r4, 0x0
    stw r29, 0x644(r1)
    mr r29, r5
    li r5, 0x400
    stw r6, 0x8(r1)
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x638(r1)
    bl memset
    addi r3, r1, 0x618
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x8(r1)
    mr r4, r30
    mr r5, r29
    addi r3, r1, 0x8
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0x8
    addi r4, r4, lbl_807772B0@l
    stw r4, 0x8(r1)
    la r4, lbl_8087D708
    bl fn_8005B6E8
    lis r30, lbl_80747D90@ha
    addi r30, r30, lbl_80747D90@l
lbl_fn_802E2640_0000168C:
    addi r3, r1, 0x8
    bl fn_8005B3CC
    mr r29, r3
    addi r4, r30, 0x8c
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802E2640_000016C0
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x14d8(r31)
    b lbl_fn_802E2640_0000181C
lbl_fn_802E2640_000016C0:
    mr r3, r29
    addi r4, r30, 0x99
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802E2640_000016EC
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x14dc(r31)
    b lbl_fn_802E2640_0000181C
lbl_fn_802E2640_000016EC:
    mr r3, r29
    addi r4, r30, 0xa6
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802E2640_00001714
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x14e0(r31)
    b lbl_fn_802E2640_0000181C
lbl_fn_802E2640_00001714:
    mr r3, r29
    addi r4, r30, 0xb9
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802E2640_0000173C
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x14e4(r31)
    b lbl_fn_802E2640_0000181C
lbl_fn_802E2640_0000173C:
    mr r3, r29
    addi r4, r30, 0xc7
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802E2640_00001764
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x14c8(r31)
    b lbl_fn_802E2640_0000181C
lbl_fn_802E2640_00001764:
    mr r3, r29
    addi r4, r30, 0xcf
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802E2640_000017D8
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_800DC12C
    lwz r4, lbl_8087F430
    li r5, 0x0
    li r6, 0x0
    lwz r4, 0x10d8(r4)
    lwz r0, 0x78(r4)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_802E2640_000017CC
lbl_fn_802E2640_000017A4:
    lwz r7, 0x7c(r4)
    lwzx r0, r7, r6
    cmpw r3, r0
    bne lbl_fn_802E2640_000017C0
    mulli r0, r5, 0x28
    add r0, r7, r0
    b lbl_fn_802E2640_000017D0
lbl_fn_802E2640_000017C0:
    addi r6, r6, 0x28
    addi r5, r5, 0x1
    bdnz lbl_fn_802E2640_000017A4
lbl_fn_802E2640_000017CC:
    li r0, 0x0
lbl_fn_802E2640_000017D0:
    stw r0, 0x14e8(r31)
    b lbl_fn_802E2640_0000181C
lbl_fn_802E2640_000017D8:
    mr r3, r29
    addi r4, r30, 0xd9
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802E2640_0000181C
    addi r3, r1, 0x8
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    addi r3, r1, 0x8
    extsb r4, r0
    subi r0, r4, 0x47
    cntlzw r0, r0
    srwi r0, r0, 5
    stw r0, 0x14f0(r31)
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x14f4(r31)
lbl_fn_802E2640_0000181C:
    addi r3, r1, 0x8
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_802E2640_0000168C
    lwz r0, 0x654(r1)
    lwz r31, 0x64c(r1)
    lwz r30, 0x648(r1)
    lwz r29, 0x644(r1)
    mtlr r0
    addi r1, r1, 0x650
    blr
}

asm void fn_802E289C(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stfd f31, 0x50(r1)
    psq_st f31, 0x58(r1), 0, 0
    stw r31, 0x4c(r1)
    mr r31, r3
    stw r30, 0x48(r1)
    bl fn_802E3604
    lwz r0, 0xd18(r31)
    lwz r3, 0x14bc(r31)
    cmpwi r0, 0x0
    addi r0, r3, 0x1
    stw r0, 0x14bc(r31)
    beq lbl_fn_802E289C_00001890
    lwz r4, 0x14cc(r31)
    cmpwi r4, 0x0
    bne lbl_fn_802E289C_000018A0
lbl_fn_802E289C_00001890:
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    b lbl_fn_802E289C_00001CCC
lbl_fn_802E289C_000018A0:
    lwz r0, 0x58c(r31)
    cmplwi r0, 0xf
    bgt lbl_fn_802E289C_00001C38
    lis r3, jumptable_80787120@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_80787120@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lfs f31, 0x2e4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_802E289C_00001CCC
    li r30, 0x0
    stw r30, 0x14b8(r31)
    stw r30, 0x14bc(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r3, r31
    li r4, 0x3
    stw r30, 0x58c(r31)
    bl fn_8016E970
    stw r30, 0x14c0(r31)
    b lbl_fn_802E289C_00001CCC
    mr r3, r31
    bl fn_802E3EE8
    b lbl_fn_802E289C_00001CCC
    lfs f31, 0x2e4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_802E289C_00001CCC
    li r30, 0x0
    stw r30, 0x14b8(r31)
    stw r30, 0x14bc(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r3, r31
    li r4, 0x3
    stw r30, 0x58c(r31)
    bl fn_8016E970
    b lbl_fn_802E289C_00001CCC
    mr r3, r31
    bl fn_802E470C
    b lbl_fn_802E289C_00001CCC
    lfs f31, 0x2e4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_802E289C_00001CCC
    li r30, 0x0
    stw r30, 0x14b8(r31)
    stw r30, 0x14bc(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r3, r31
    li r4, 0x3
    stw r30, 0x58c(r31)
    bl fn_8016E970
    b lbl_fn_802E289C_00001CCC
    lfs f31, 0x2e4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_802E289C_00001A44
    lwz r0, 0x14c0(r31)
    cmpwi r0, 0x0
    bne lbl_fn_802E289C_00001A18
    li r0, 0x0
    stw r0, 0x14b8(r31)
    stw r0, 0x14bc(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0xf
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    li r0, 0xa
    stw r0, 0x14ec(r31)
    b lbl_fn_802E289C_00001CCC
lbl_fn_802E289C_00001A18:
    li r30, 0x0
    stw r30, 0x14b8(r31)
    stw r30, 0x14bc(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r3, r31
    li r4, 0x3
    stw r30, 0x58c(r31)
    bl fn_8016E970
    b lbl_fn_802E289C_00001CCC
lbl_fn_802E289C_00001A44:
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_80884704
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_802E289C_00001CCC
    lfs f0, lbl_80884708
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_802E289C_00001CCC
    lwz r8, 0x590(r31)
    mr r6, r31
    lwz r7, 0x14d8(r31)
    li r4, 0x0
    lwz r3, lbl_8087F048
    li r5, 0x0
    lfs f1, lbl_808846EC
    li r9, 0x1e
    li r10, -0x1
    bl fn_800F8C6C
    b lbl_fn_802E289C_00001CCC
    lfs f31, 0x2e4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_802E289C_00001ADC
    li r30, 0x0
    stw r30, 0x14b8(r31)
    stw r30, 0x14bc(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r3, r31
    li r4, 0x3
    stw r30, 0x58c(r31)
    bl fn_8016E970
    b lbl_fn_802E289C_00001CCC
lbl_fn_802E289C_00001ADC:
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_8088470C
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_802E289C_00001CCC
    lfs f0, lbl_80884710
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_802E289C_00001CCC
    lwz r8, 0x590(r31)
    mr r6, r31
    lwz r7, 0x14dc(r31)
    li r4, 0x0
    lwz r3, lbl_8087F048
    li r5, 0x0
    lfs f1, lbl_808846EC
    li r9, 0x1e
    li r10, -0x1
    bl fn_800F8C6C
    b lbl_fn_802E289C_00001CCC
    lfs f31, 0x2e4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_802E289C_00001B74
    li r30, 0x0
    stw r30, 0x14b8(r31)
    stw r30, 0x14bc(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r3, r31
    li r4, 0x3
    stw r30, 0x58c(r31)
    bl fn_8016E970
    b lbl_fn_802E289C_00001CCC
lbl_fn_802E289C_00001B74:
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_80884704
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_802E289C_00001CCC
    lfs f0, lbl_80884714
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_802E289C_00001CCC
    lwz r8, 0x590(r31)
    mr r6, r31
    lwz r7, 0x14dc(r31)
    li r4, 0x0
    lwz r3, lbl_8087F048
    li r5, 0x0
    lfs f1, lbl_808846EC
    li r9, 0x1e
    li r10, -0x1
    bl fn_800F8C6C
    b lbl_fn_802E289C_00001CCC
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x6
    beq lbl_fn_802E289C_00001BDC
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
lbl_fn_802E289C_00001BDC:
    mr r3, r31
    bl fn_802E37DC
    lwz r3, 0x14bc(r31)
    lwz r0, 0x14ec(r31)
    cmpw r3, r0
    blt lbl_fn_802E289C_00001CCC
    li r30, 0x0
    stw r30, 0x14b8(r31)
    stw r30, 0x14bc(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r3, r31
    li r4, 0x3
    stw r30, 0x58c(r31)
    bl fn_8016E970
    b lbl_fn_802E289C_00001CCC
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0xec(r12)
    mtctr r12
    bctrl
    b lbl_fn_802E289C_00001CCC
lbl_fn_802E289C_00001C38:
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x6
    beq lbl_fn_802E289C_00001CBC
    cmpwi r0, 0x7
    bne lbl_fn_802E289C_00001C74
    lwz r0, 0x14c0(r31)
    cmpwi r0, 0x1
    bne lbl_fn_802E289C_00001CBC
    lwz r0, 0x1054(r31)
    cmplw r4, r0
    beq lbl_fn_802E289C_00001CBC
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    b lbl_fn_802E289C_00001CBC
lbl_fn_802E289C_00001C74:
    lwz r0, 0x14c0(r31)
    cmpwi r0, 0x1
    beq lbl_fn_802E289C_00001C8C
    cmpwi r0, 0x3
    beq lbl_fn_802E289C_00001CA0
    b lbl_fn_802E289C_00001CBC
lbl_fn_802E289C_00001C8C:
    lfs f1, lbl_80884718
    mr r3, r31
    li r5, 0x0
    bl fn_80170A20
    b lbl_fn_802E289C_00001CBC
lbl_fn_802E289C_00001CA0:
    lwz r3, 0x14e8(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802E289C_00001CBC
    lwz r4, 0x0(r3)
    mr r3, r31
    li r5, 0x0
    bl fn_8017039C
lbl_fn_802E289C_00001CBC:
    mr r3, r31
    bl fn_802E37DC
    mr r3, r31
    bl fn_802E3B24
lbl_fn_802E289C_00001CCC:
    lfs f0, 0x14c8(r31)
    mr r3, r31
    stfs f0, 0x52c(r31)
    bl fn_8014C540
    mr r3, r31
    bl fn_80145334
    lfs f2, 0x530(r31)
    lis r3, lbl_80747D90@ha
    addi r3, r3, lbl_80747D90@l
    addi r5, r1, 0x8
    psq_l f1, 0x528(r31), 0, 0
    addi r4, r3, 0xe9
    psq_st f1, 0x0(r5), 0, 0
    addi r3, r31, 0xb0
    li r5, 0x0
    stfs f2, 0x10(r1)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802E289C_00001D20
    li r5, 0x0
    b lbl_fn_802E289C_00001D2C
lbl_fn_802E289C_00001D20:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r5, r3, r0
lbl_fn_802E289C_00001D2C:
    cmpwi r5, 0x0
    beq lbl_fn_802E289C_00001D60
    lfs f3, 0x1c(r5)
    addi r3, r1, 0x2c
    lfs f0, 0xc(r5)
    addi r4, r1, 0x8
    stfs f0, 0x2c(r1)
    lfs f2, 0x2c(r5)
    stfs f3, 0x30(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x34(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x10(r1)
lbl_fn_802E289C_00001D60:
    lfs f5, 0xc(r1)
    addi r5, r1, 0x38
    lfs f4, 0x5a8(r31)
    addi r3, r1, 0x20
    lfs f3, 0x8(r1)
    addi r4, r1, 0x14
    fadds f4, f5, f4
    lfs f0, 0x5a4(r31)
    lfs f5, 0x5b0(r31)
    fadds f0, f3, f0
    stfs f4, 0x3c(r1)
    lfs f3, 0x10(r1)
    stfs f0, 0x38(r1)
    lfs f0, 0x5ac(r31)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x614(r31), 0, 0
    fadds f6, f3, f0
    lfs f3, lbl_8088471C
    lfs f4, 0x618(r31)
    lfs f0, 0x5b4(r31)
    fmr f2, f6
    fadds f4, f4, f5
    stfs f5, 0x620(r31)
    fnmsubs f3, f3, f5, f0
    stfs f4, 0x618(r31)
    psq_l f1, 0x614(r31), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lfs f0, 0x24(r1)
    stfs f2, 0x61c(r31)
    frsp f2, f2
    fadds f0, f0, f3
    stfs f2, 0x1c(r1)
    stfs f2, 0x28(r1)
    frsp f2, f2
    stfs f2, 0x5fc(r31)
    lfs f2, 0x28(r1)
    stfs f0, 0x24(r1)
    psq_st f1, 0x0(r4), 0, 0
    psq_st f1, 0x5f4(r31), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x600(r31), 0, 0
    stfs f2, 0x608(r31)
    stfs f5, 0x60c(r31)
    psq_l f31, 0x58(r1), 0, 0
    lfd f31, 0x50(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r0, 0x64(r1)
    stfs f6, 0x40(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}
