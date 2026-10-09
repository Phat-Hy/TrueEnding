#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void fn_8004ED34(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_8008BBD8(void);
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800CB5C8(void);
extern void fn_800F8548(void);
extern void fn_800FAB80(void);
extern void fn_8013A258(void);
extern void fn_8013CB68(void);
extern void fn_80148990(void);
extern void fn_80151448(void);
extern void fn_8016E970(void);
extern void fn_801CB100(void);
extern void fn_801CB130(void);
extern void fn_801CB434(void);
extern void fn_80219E6C(void);
extern void fn_80232B7C(void);
extern void fn_80239DAC(void);
extern void fn_8023A8B4(void);
extern void fn_802E10D8(void);
extern void fn_802E1290(void);
extern void fn_802E1414(void);
extern void fn_802E1624(void);
extern void fn_802E177C(void);
extern void fn_80370AE4(void);
extern void fn_80680770(void);
extern void fn_80686EA4(void);
extern void fn_80695720(void);

/* External data declarations */
extern u8 lbl_80747AF8[];
extern u8 lbl_80747B10[];
extern u8 lbl_8078249C[];
extern u8 lbl_80786F90[];
extern u8 lbl_807C7030[];
extern u8 lbl_807C7C90[];
extern u8 lbl_807C8410[];

/* Small data declarations */
extern u32 lbl_8087D9E0;
extern u32 lbl_8087D9E4;
extern u32 lbl_8087EE98;
extern u32 lbl_8087F048;
extern u32 lbl_8087F119;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F408;
extern u32 lbl_8087F430;
extern u32 lbl_8087F4A0;
extern u32 lbl_8088467C;
extern u32 lbl_80884684;
extern u32 lbl_8088468C;
extern u32 lbl_80884690;
extern u32 lbl_80884694;
extern u32 lbl_80884698;
extern u32 lbl_8088469C;
extern u32 lbl_808846A4;
extern u32 lbl_808846A8;
extern u32 lbl_808846AC;
extern u32 lbl_808846B0;
extern u32 lbl_808846B4;
extern u32 lbl_808846B8;
extern u32 lbl_808846BC;
extern u32 lbl_808846C0;
extern u32 lbl_808846C4;
extern u32 lbl_808846C8;

/* Function declarations */
void fn_802DF570(void);
void fn_802DF968(void);
void fn_802DF96C(void);
void fn_802DFA78(void);
void fn_802DFA9C(void);
void fn_802DFF3C(void);
void fn_802DFFF4(void);
void fn_802E0100(void);
void fn_802E01A0(void);
void fn_802E03F0(void);
void fn_802E0890(void);
void fn_802E094C(void);
void fn_802E0C60(void);
void fn_802E0EC8(void);

asm void fn_802DF570(void)
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
    lwz r0, 0xd18(r3)
    cmpwi r0, 0x0
    beq lbl_fn_802DF570_00000038
    lwz r0, 0xd1c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802DF570_0000012C
lbl_fn_802DF570_00000038:
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lwz r0, 0x7e0(r31)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_802DF570_00000068
    lwz r0, 0x14dc(r31)
    cmpwi r0, 0x1
    beq lbl_fn_802DF570_00000068
    mr r3, r31
    bl fn_802E03F0
lbl_fn_802DF570_00000068:
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x7
    bne lbl_fn_802DF570_0000010C
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_8088467C
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_802DF570_000003CC
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x1
    lwz r12, 0x9c(r12)
    mtctr r12
    bctrl
    li r30, 0x0
    li r0, 0x1
    stw r0, 0x151c(r31)
    stw r30, 0x14ec(r31)
    stw r30, 0x14e8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r3, r31
    li r4, 0x3
    stw r30, 0x58c(r31)
    bl fn_8016E970
    addi r3, r31, 0x1560
    li r4, 0x0
    li r5, 0x0
    bl fn_800CB5C8
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x64
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x65
    li r6, 0x1
    bl fn_80239DAC
    b lbl_fn_802DF570_000003CC
lbl_fn_802DF570_0000010C:
    cmpwi r0, 0x2
    bne lbl_fn_802DF570_000003CC
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0xec(r12)
    mtctr r12
    bctrl
    b lbl_fn_802DF570_000003CC
lbl_fn_802DF570_0000012C:
    lwz r0, 0x15b0(r3)
    cmpwi r0, 0x0
    ble lbl_fn_802DF570_00000154
    subic. r0, r0, 0x1
    stw r0, 0x15b0(r3)
    bne lbl_fn_802DF570_00000154
    lwz r0, 0x154c(r3)
    cntlzw r0, r0
    srwi r0, r0, 5
    stw r0, 0x154c(r3)
lbl_fn_802DF570_00000154:
    lwz r0, 0x58c(r3)
    lwz r4, 0x14e8(r3)
    cmpwi r0, 0x6
    addi r4, r4, 0x1
    stw r4, 0x14e8(r3)
    beq lbl_fn_802DF570_000001A0
    cmpwi r0, 0x7
    beq lbl_fn_802DF570_00000220
    cmpwi r0, 0x8
    beq lbl_fn_802DF570_000002B8
    cmpwi r0, 0x9
    beq lbl_fn_802DF570_000002C4
    cmpwi r0, 0xa
    beq lbl_fn_802DF570_0000033C
    cmpwi r0, 0xb
    beq lbl_fn_802DF570_00000348
    cmpwi r0, 0x2
    beq lbl_fn_802DF570_00000354
    b lbl_fn_802DF570_0000036C
lbl_fn_802DF570_000001A0:
    lfs f31, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_802DF570_000003CC
    li r30, 0x0
    stw r30, 0x14ec(r31)
    stw r30, 0x14e8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r3, r31
    li r4, 0x3
    stw r30, 0x58c(r31)
    bl fn_8016E970
    addi r3, r31, 0x1560
    li r4, 0x0
    li r5, 0x0
    bl fn_800CB5C8
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x64
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x65
    li r6, 0x1
    bl fn_80239DAC
    b lbl_fn_802DF570_000003CC
lbl_fn_802DF570_00000220:
    lfs f3, 0x2e4(r3)
    lfs f0, lbl_8088467C
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_802DF570_000003CC
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x1
    lwz r12, 0x9c(r12)
    mtctr r12
    bctrl
    li r30, 0x0
    li r0, 0x1
    stw r0, 0x151c(r31)
    stw r30, 0x14ec(r31)
    stw r30, 0x14e8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r3, r31
    li r4, 0x3
    stw r30, 0x58c(r31)
    bl fn_8016E970
    addi r3, r31, 0x1560
    li r4, 0x0
    li r5, 0x0
    bl fn_800CB5C8
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x64
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x65
    li r6, 0x1
    bl fn_80239DAC
    b lbl_fn_802DF570_000003CC
lbl_fn_802DF570_000002B8:
    mr r3, r31
    bl fn_802E094C
    b lbl_fn_802DF570_000003CC
lbl_fn_802DF570_000002C4:
    lwz r0, 0x2dc(r3)
    cmpwi r0, 0x145
    bne lbl_fn_802DF570_0000030C
    lfs f0, lbl_80884698
    li r0, 0x1
    stw r0, 0x3fc(r3)
    li r4, 0x0
    lfs f1, lbl_8088467C
    li r5, 0x146
    stfs f0, 0x2fc(r3)
    li r6, 0x1
    lfs f2, lbl_8088469C
    li r7, 0x0
    stfs f0, 0x2e8(r3)
    li r8, 0x1
    addi r3, r3, 0xb0
    bl fn_80097C08
    b lbl_fn_802DF570_000003CC
lbl_fn_802DF570_0000030C:
    cmpwi r4, 0x14
    bge lbl_fn_802DF570_00000328
    xoris r3, r4, 0x8000
    lis r0, 0x4330
    stw r3, 0x1c(r1)
    stw r0, 0x18(r1)
    b lbl_fn_802DF570_000003CC
lbl_fn_802DF570_00000328:
    cmpwi r4, 0x2d
    blt lbl_fn_802DF570_000003CC
    mr r3, r31
    bl fn_802E1624
    b lbl_fn_802DF570_000003CC
lbl_fn_802DF570_0000033C:
    mr r3, r31
    bl fn_802E0C60
    b lbl_fn_802DF570_000003CC
lbl_fn_802DF570_00000348:
    mr r3, r31
    bl fn_802E0EC8
    b lbl_fn_802DF570_000003CC
lbl_fn_802DF570_00000354:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0xec(r12)
    mtctr r12
    bctrl
    b lbl_fn_802DF570_000003CC
lbl_fn_802DF570_0000036C:
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    psq_l f1, 0x534(r31), 0, 0
    addi r4, r1, 0x8
    lfs f2, 0x53c(r31)
    stfs f2, 0x10(r1)
    lfs f3, lbl_8088467C
    psq_st f1, 0x0(r4), 0, 0
    lfs f4, lbl_80884698
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x6
    bne lbl_fn_802DF570_000003AC
    mr r3, r31
    bl fn_8013A258
    b lbl_fn_802DF570_000003C4
lbl_fn_802DF570_000003AC:
    lfs f0, 0x568(r31)
    fmr f1, f3
    mr r3, r31
    li r5, 0x0
    fmuls f2, f0, f4
    bl fn_8013CB68
lbl_fn_802DF570_000003C4:
    mr r3, r31
    bl fn_802E03F0
lbl_fn_802DF570_000003CC:
    lwz r3, 0x14f8(r31)
    addi r0, r3, 0x1
    stw r0, 0x14f8(r31)
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_802DF968(void)
{
    nofralloc
    blr
}

asm void fn_802DF96C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x14dc(r3)
    cmpwi r0, 0x3
    bne lbl_fn_802DF96C_00000478
    li r6, 0x0
    stw r6, 0x68(r4)
    lwz r5, 0x8(r4)
    li r0, 0x1
    lwz r5, 0xc4(r5)
    stw r5, 0x88(r4)
    stw r0, 0x84(r4)
    stw r6, 0x90(r4)
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 29
    bne lbl_fn_802DF96C_00000464
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    b lbl_fn_802DF96C_000004F0
lbl_fn_802DF96C_00000464:
    lwz r12, 0x0(r3)
    lwz r12, 0x118(r12)
    mtctr r12
    bctrl
    b lbl_fn_802DF96C_000004F0
lbl_fn_802DF96C_00000478:
    lfs f2, 0x10(r4)
    lfs f3, lbl_8088467C
    lfs f1, 0x14(r4)
    lfs f0, 0x18(r4)
    fmuls f2, f2, f3
    fmuls f1, f1, f3
    lwz r0, 0x50(r4)
    fmuls f0, f0, f3
    stfs f2, 0x10(r4)
    ori r0, r0, 0x10
    stw r0, 0x50(r4)
    stfs f1, 0x14(r4)
    stfs f0, 0x18(r4)
    bl fn_80151448
    lwz r0, 0x12a4(r30)
    extrwi. r0, r0, 1, 29
    bne lbl_fn_802DF96C_000004D8
    lwz r12, 0x0(r30)
    mr r3, r30
    mr r4, r31
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    b lbl_fn_802DF96C_000004F0
lbl_fn_802DF96C_000004D8:
    lwz r12, 0x0(r30)
    mr r3, r30
    mr r4, r31
    lwz r12, 0x118(r12)
    mtctr r12
    bctrl
lbl_fn_802DF96C_000004F0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802DFA78(void)
{
    nofralloc
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bnelr
    lbz r0, 0x1650(r3)
    cmpwi r0, 0x0
    bnelr
    b fn_802E177C
    blr
}

asm void fn_802DFA9C(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    lfs f2, lbl_8088467C
    lis r4, lbl_80747B10@ha
    stw r0, 0x54(r1)
    addi r4, r4, lbl_80747B10@l
    li r0, 0x0
    lfs f3, lbl_808846A4
    stw r31, 0x4c(r1)
    addi r5, r1, 0x8
    addi r6, r1, 0x30
    mr r31, r3
    stw r30, 0x48(r1)
    addi r4, r4, 0x199
    stw r29, 0x44(r1)
    lfs f0, 0x5b0(r3)
    addi r3, r3, 0xb0
    stfs f2, 0x8(r1)
    fsubs f0, f0, f3
    stfs f2, 0xc(r1)
    psq_l f1, 0x0(r5), 0, 0
    li r5, 0x0
    stw r0, 0x2c(r1)
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x38(r1)
    stfs f0, 0x3c(r1)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802DFA9C_000005AC
    li r5, 0x0
    b lbl_fn_802DFA9C_000005B8
lbl_fn_802DFA9C_000005AC:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r5, r3, r0
lbl_fn_802DFA9C_000005B8:
    lfs f4, 0x2c(r5)
    addi r4, r1, 0x20
    lfs f0, 0x5ac(r31)
    addi r3, r1, 0x30
    lfs f5, 0x1c(r5)
    fadds f2, f4, f0
    lfs f6, 0xc(r5)
    lfs f3, 0x5a8(r31)
    lfs f0, 0x5a4(r31)
    fadds f3, f5, f3
    lwz r0, 0x62c(r31)
    fadds f0, f6, f0
    stfs f6, 0x14(r1)
    cmpwi r0, 0x0
    stfs f0, 0x20(r1)
    stfs f3, 0x24(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f5, 0x18(r1)
    stfs f4, 0x1c(r1)
    stfs f2, 0x28(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x38(r1)
    beq lbl_fn_802DFA9C_00000620
    lwz r0, 0x628(r31)
    cmpwi r0, 0x0
    bne lbl_fn_802DFA9C_000007C0
lbl_fn_802DFA9C_00000620:
    lwz r0, 0x628(r31)
    li r30, 0x8
    cmplwi r0, 0x8
    bgt lbl_fn_802DFA9C_00000968
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
    beq lbl_fn_802DFA9C_000007B4
    lwz r0, 0x624(r31)
    li r5, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_802DFA9C_00000684
    mr r5, r0
lbl_fn_802DFA9C_00000684:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_802DFA9C_000007A0
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_802DFA9C_00000768
lbl_fn_802DFA9C_0000069C:
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
    bdnz lbl_fn_802DFA9C_0000069C
    andi. r5, r5, 0x3
    beq lbl_fn_802DFA9C_000007A0
lbl_fn_802DFA9C_00000768:
    mtctr r5
lbl_fn_802DFA9C_0000076C:
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
    bdnz lbl_fn_802DFA9C_0000076C
lbl_fn_802DFA9C_000007A0:
    lwz r3, 0x62c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802DFA9C_000007B4
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_802DFA9C_000007B4:
    stw r29, 0x62c(r31)
    stw r30, 0x628(r31)
    b lbl_fn_802DFA9C_00000968
lbl_fn_802DFA9C_000007C0:
    lwz r3, 0x624(r31)
    cmplw r3, r0
    blt lbl_fn_802DFA9C_00000968
    slwi r30, r3, 1
    cmplw r0, r30
    bgt lbl_fn_802DFA9C_00000968
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
    beq lbl_fn_802DFA9C_00000960
    lwz r0, 0x624(r31)
    mr r5, r30
    cmplw r30, r0
    ble lbl_fn_802DFA9C_00000830
    mr r5, r0
lbl_fn_802DFA9C_00000830:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_802DFA9C_0000094C
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_802DFA9C_00000914
lbl_fn_802DFA9C_00000848:
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
    bdnz lbl_fn_802DFA9C_00000848
    andi. r5, r5, 0x3
    beq lbl_fn_802DFA9C_0000094C
lbl_fn_802DFA9C_00000914:
    mtctr r5
lbl_fn_802DFA9C_00000918:
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
    bdnz lbl_fn_802DFA9C_00000918
lbl_fn_802DFA9C_0000094C:
    lwz r3, 0x62c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802DFA9C_00000960
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_802DFA9C_00000960:
    stw r29, 0x62c(r31)
    stw r30, 0x628(r31)
lbl_fn_802DFA9C_00000968:
    lwz r0, 0x624(r31)
    addi r5, r1, 0x30
    lwz r4, 0x62c(r31)
    mulli r3, r0, 0x14
    lwz r0, 0x2c(r1)
    stwux r0, r3, r4
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x4(r3), 0, 0
    lfs f2, 0x38(r1)
    stfs f2, 0xc(r3)
    lfs f0, 0x3c(r1)
    stfs f0, 0x10(r3)
    lwz r3, 0x624(r31)
    lwz r0, 0x12a8(r31)
    addi r3, r3, 0x1
    stw r3, 0x624(r31)
    rlwinm r0, r0, 0, 3, 1
    stw r0, 0x12a8(r31)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_802DFF3C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    lwz r0, 0x624(r3)
    cmpwi r0, 0x0
    beq lbl_fn_802DFF3C_00000A70
    lis r4, lbl_80747B10@ha
    li r5, 0x0
    addi r4, r4, lbl_80747B10@l
    addi r3, r3, 0xb0
    addi r4, r4, 0x199
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802DFF3C_00000A14
    li r4, 0x0
    b lbl_fn_802DFF3C_00000A20
lbl_fn_802DFF3C_00000A14:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r4, r3, r0
lbl_fn_802DFF3C_00000A20:
    lfs f4, 0x1c(r4)
    addi r3, r1, 0x14
    lfs f5, 0xc(r4)
    lfs f3, 0x5a8(r31)
    lfs f0, 0x5a4(r31)
    fadds f6, f4, f3
    lfs f3, 0x2c(r4)
    fadds f7, f5, f0
    lfs f0, 0x5ac(r31)
    stfs f6, 0x18(r1)
    fadds f2, f3, f0
    stfs f7, 0x14(r1)
    lwz r4, 0x62c(r31)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x4(r4), 0, 0
    stfs f5, 0x8(r1)
    stfs f4, 0xc(r1)
    stfs f3, 0x10(r1)
    stfs f2, 0x1c(r1)
    stfs f2, 0xc(r4)
lbl_fn_802DFF3C_00000A70:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_802DFFF4(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    lis r4, lbl_80747B10@ha
    lfs f0, lbl_808846A8
    stw r0, 0x44(r1)
    addi r4, r4, lbl_80747B10@l
    li r5, 0x0
    stw r31, 0x3c(r1)
    mr r31, r3
    addi r4, r4, 0x199
    lfs f3, 0x5b0(r3)
    fsubs f0, f3, f0
    stfs f0, 0x620(r3)
    addi r3, r3, 0xb0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802DFFF4_00000AD0
    li r6, 0x0
    b lbl_fn_802DFFF4_00000ADC
lbl_fn_802DFFF4_00000AD0:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r6, r3, r0
lbl_fn_802DFFF4_00000ADC:
    lfs f5, 0x1c(r6)
    addi r3, r1, 0x14
    lfs f6, 0xc(r6)
    addi r5, r1, 0x20
    lfs f3, 0x5a8(r31)
    addi r4, r1, 0x2c
    lfs f0, 0x5a4(r31)
    fadds f3, f5, f3
    lfs f4, 0x2c(r6)
    fadds f8, f6, f0
    lfs f0, 0x5ac(r31)
    stfs f3, 0x18(r1)
    fadds f7, f4, f0
    stfs f8, 0x14(r1)
    lfs f0, 0x5b4(r31)
    psq_l f1, 0x0(r3), 0, 0
    fmr f2, f7
    psq_st f1, 0x0(r5), 0, 0
    lfs f8, 0x620(r31)
    lfs f3, 0x24(r1)
    stfs f2, 0x61c(r31)
    frsp f2, f2
    fadds f0, f3, f0
    stfs f2, 0x34(r1)
    stfs f2, 0x28(r1)
    frsp f2, f2
    stfs f2, 0x5fc(r31)
    lfs f2, 0x28(r1)
    stfs f0, 0x24(r1)
    psq_st f1, 0x614(r31), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    psq_st f1, 0x5f4(r31), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x600(r31), 0, 0
    stfs f2, 0x608(r31)
    stfs f8, 0x60c(r31)
    lwz r31, 0x3c(r1)
    lwz r0, 0x44(r1)
    stfs f6, 0x8(r1)
    stfs f5, 0xc(r1)
    stfs f4, 0x10(r1)
    stfs f7, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_802E0100(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    lwz r0, 0x14dc(r3)
    cmpwi r0, 0x1
    beq lbl_fn_802E0100_00000BA8
    li r3, 0x0
    b lbl_fn_802E0100_00000C28
lbl_fn_802E0100_00000BA8:
    lfs f6, lbl_8088467C
    addi r5, r1, 0x2c
    lfs f3, 0x60c(r3)
    lfs f5, lbl_80884698
    fmuls f7, f6, f3
    lfs f0, lbl_808846AC
    fmuls f8, f5, f3
    lwz r6, 0x62c(r3)
    stfs f6, 0x8(r1)
    li r3, 0x1
    fmuls f9, f7, f0
    lfs f3, 0x8(r6)
    fmuls f10, f8, f0
    lfs f0, 0x4(r6)
    lfs f4, 0xc(r6)
    fadds f0, f0, f9
    fadds f2, f4, f9
    stfs f5, 0xc(r1)
    fadds f3, f3, f10
    stfs f0, 0x2c(r1)
    stfs f3, 0x30(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f6, 0x10(r1)
    stfs f7, 0x14(r1)
    stfs f8, 0x18(r1)
    stfs f7, 0x1c(r1)
    stfs f9, 0x20(r1)
    stfs f10, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f2, 0x34(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x8(r4)
lbl_fn_802E0100_00000C28:
    addi r1, r1, 0x40
    blr
}

asm void fn_802E01A0(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    lfs f4, lbl_8088467C
    lis r6, lbl_80747B10@ha
    stw r0, 0xa4(r1)
    addi r6, r6, lbl_80747B10@l
    lfs f3, lbl_80884698
    li r7, 0x0
    stw r31, 0x9c(r1)
    mr r31, r3
    lfs f0, lbl_808846AC
    stw r30, 0x98(r1)
    mr r30, r5
    addi r5, r6, 0x2b
    lfs f1, 0x60c(r4)
    mr r6, r5
    lwz r3, 0x62c(r4)
    li r4, 0x0
    fmuls f5, f4, f1
    stfs f4, 0x28(r1)
    fmuls f6, f3, f1
    lfs f2, 0xc(r3)
    lfs f1, 0x8(r3)
    fmuls f7, f5, f0
    fmuls f8, f6, f0
    lfs f0, 0x4(r3)
    stfs f3, 0x2c(r1)
    li r3, 0x44
    fadds f2, f2, f7
    fadds f1, f1, f8
    fadds f0, f0, f7
    stfs f4, 0x30(r1)
    stfs f5, 0x34(r1)
    stfs f6, 0x38(r1)
    stfs f5, 0x3c(r1)
    stfs f7, 0x40(r1)
    stfs f8, 0x44(r1)
    stfs f7, 0x48(r1)
    stfs f0, 0x4c(r1)
    stfs f1, 0x50(r1)
    stfs f2, 0x54(r1)
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_802E01A0_00000CF0
    mr r4, r30
    addi r5, r1, 0x4c
    li r6, 0x0
    bl fn_801CB434
lbl_fn_802E01A0_00000CF0:
    lis r4, lbl_80786F90@ha
    lwzu r6, lbl_80786F90@l(r4)
    li r0, 0x0
    stw r30, 0x8(r1)
    lwz r5, 0x4(r4)
    lwz r4, 0x8(r4)
    stw r3, 0xc(r1)
    stw r0, 0x0(r31)
    lbz r0, lbl_8087F119
    stw r6, 0x1c(r1)
    extsb. r0, r0
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r6, 0x10(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r6, 0x80(r1)
    stw r5, 0x84(r1)
    stw r4, 0x88(r1)
    stw r30, 0x8c(r1)
    stw r3, 0x90(r1)
    bne lbl_fn_802E01A0_00000D70
    lis r6, lbl_807C7C90@ha
    lis r4, fn_801CB100@ha
    lis r3, fn_801CB130@ha
    li r0, 0x1
    addi r3, r3, fn_801CB130@l
    addi r5, r6, lbl_807C7C90@l
    addi r4, r4, fn_801CB100@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C7C90@l(r6)
    stb r0, lbl_8087F119
lbl_fn_802E01A0_00000D70:
    lwz r7, 0x80(r1)
    addi r3, r1, 0x6c
    lwz r6, 0x84(r1)
    lwz r5, 0x88(r1)
    lwz r4, 0x8c(r1)
    lwz r0, 0x90(r1)
    stw r7, 0x6c(r1)
    stw r6, 0x70(r1)
    stw r5, 0x74(r1)
    stw r4, 0x78(r1)
    stw r0, 0x7c(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_802E01A0_00000E44
    lwz r7, 0x6c(r1)
    li r3, 0x14
    lwz r6, 0x70(r1)
    lwz r5, 0x74(r1)
    lwz r4, 0x78(r1)
    lwz r0, 0x7c(r1)
    stw r7, 0x58(r1)
    stw r6, 0x5c(r1)
    stw r5, 0x60(r1)
    stw r4, 0x64(r1)
    stw r0, 0x68(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_802E01A0_00000E08
    lis r3, __files@ha
    lis r4, lbl_8078249C@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8078249C@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802E01A0_00000E08:
    cmpwi r30, 0x0
    beq lbl_fn_802E01A0_00000E38
    lwz r0, 0x58(r1)
    stw r0, 0x0(r30)
    lwz r0, 0x5c(r1)
    stw r0, 0x4(r30)
    lwz r0, 0x60(r1)
    stw r0, 0x8(r30)
    lwz r0, 0x64(r1)
    stw r0, 0xc(r30)
    lwz r0, 0x68(r1)
    stw r0, 0x10(r30)
lbl_fn_802E01A0_00000E38:
    stw r30, 0x4(r31)
    li r0, 0x1
    b lbl_fn_802E01A0_00000E48
lbl_fn_802E01A0_00000E44:
    li r0, 0x0
lbl_fn_802E01A0_00000E48:
    cmpwi r0, 0x0
    beq lbl_fn_802E01A0_00000E60
    lis r3, lbl_807C7C90@ha
    addi r3, r3, lbl_807C7C90@l
    stw r3, 0x0(r31)
    b lbl_fn_802E01A0_00000E68
lbl_fn_802E01A0_00000E60:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_802E01A0_00000E68:
    lwz r0, 0xa4(r1)
    lwz r31, 0x9c(r1)
    lwz r30, 0x98(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_802E03F0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r30, 0x28(r1)
    lwz r8, 0x14dc(r3)
    cmpwi r8, 0x0
    beq lbl_fn_802E03F0_00000EC8
    cmpwi r8, 0x1
    beq lbl_fn_802E03F0_00000FF4
    cmpwi r8, 0x2
    beq lbl_fn_802E03F0_00001134
    cmpwi r8, 0x3
    beq lbl_fn_802E03F0_000011CC
    cmpwi r8, 0x4
    beq lbl_fn_802E03F0_0000123C
    b lbl_fn_802E03F0_000012FC
lbl_fn_802E03F0_00000EC8:
    lwz r0, 0x14e4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802E03F0_00000FC8
    lwz r5, 0x15ec(r3)
    cmpwi r5, 0x0
    beq lbl_fn_802E03F0_00000FBC
    lwz r4, 0x15e4(r3)
    addi r0, r4, 0x1
    stw r0, 0x15e4(r3)
    cmpw r5, r0
    bgt lbl_fn_802E03F0_00000EFC
    li r0, 0x0
    stw r0, 0x15e4(r3)
lbl_fn_802E03F0_00000EFC:
    lwz r0, 0x15e4(r3)
    lwz r4, 0x15e8(r3)
    slwi r0, r0, 2
    lwzx r4, r4, r0
    stw r4, 0x15e0(r3)
    cmpwi r4, 0x0
    beq lbl_fn_802E03F0_00000F3C
    psq_l f1, 0x4(r4), 0, 0
    lfs f2, 0xc(r4)
    stfs f2, 0x530(r3)
    lfs f3, lbl_8088468C
    psq_st f1, 0x528(r3), 0, 0
    lfs f0, 0x14(r4)
    fadds f0, f3, f0
    stfs f0, 0x538(r3)
    b lbl_fn_802E03F0_00000F60
lbl_fn_802E03F0_00000F3C:
    lfs f2, lbl_8088467C
    addi r4, r1, 0xc
    lfs f0, lbl_80884690
    stfs f2, 0xc(r1)
    stfs f0, 0x10(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0x14(r1)
    psq_st f1, 0x528(r3), 0, 0
    stfs f2, 0x530(r3)
lbl_fn_802E03F0_00000F60:
    lfs f3, 0x52c(r3)
    lfs f0, 0x15a4(r3)
    lwz r0, 0x14dc(r3)
    fadds f3, f3, f0
    lfs f0, 0x14f0(r3)
    lfs f5, 0x528(r3)
    cmpwi r0, 0x3
    lfs f4, 0x15a0(r3)
    fadds f3, f3, f0
    fadds f5, f5, f4
    lfs f4, 0x530(r3)
    lfs f0, 0x15a8(r3)
    stfs f5, 0x528(r3)
    fadds f0, f4, f0
    stfs f3, 0x52c(r3)
    stfs f0, 0x530(r3)
    bne lbl_fn_802E03F0_00000FBC
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x7
    beq lbl_fn_802E03F0_00000FBC
    lfs f0, lbl_80884694
    fsubs f0, f3, f0
    stfs f0, 0x52c(r3)
lbl_fn_802E03F0_00000FBC:
    mr r3, r31
    li r4, 0x0
    bl fn_802E10D8
lbl_fn_802E03F0_00000FC8:
    lwz r0, 0x14e4(r31)
    cmpwi r0, 0x1
    bne lbl_fn_802E03F0_000012FC
    lwz r4, 0x14dc(r31)
    li r0, 0x0
    li r3, 0x4
    stw r4, 0x14e0(r31)
    stw r3, 0x14dc(r31)
    stw r0, 0x14e4(r31)
    stw r0, 0x14f8(r31)
    b lbl_fn_802E03F0_00001308
lbl_fn_802E03F0_00000FF4:
    lwz r0, 0x153c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802E03F0_0000100C
    lwz r0, 0x14f4(r3)
    cmpwi r0, 0x5
    blt lbl_fn_802E03F0_00001084
lbl_fn_802E03F0_0000100C:
    lwz r4, 0x940(r3)
    lis r0, 0x4330
    lis r5, lbl_80747AF8@ha
    lwz r6, 0x1548(r3)
    xoris r4, r4, 0x8000
    stw r4, 0x1c(r1)
    li r7, 0x3
    lfd f4, lbl_80747AF8@l(r5)
    stw r0, 0x18(r1)
    li r4, 0x0
    lfs f3, 0x7d8(r3)
    lfd f0, 0x18(r1)
    stw r8, 0x14e0(r3)
    fsubs f4, f0, f4
    lfs f0, lbl_808846B0
    stw r7, 0x14dc(r3)
    fdivs f3, f3, f4
    stw r4, 0x14e4(r3)
    stw r6, 0x1540(r3)
    fcmpo cr0, f3, f0
    bge lbl_fn_802E03F0_0000106C
    li r0, 0x4
    stw r0, 0x1548(r3)
    b lbl_fn_802E03F0_00001308
lbl_fn_802E03F0_0000106C:
    cmpwi r6, 0x1
    li r0, 0x1
    bne lbl_fn_802E03F0_0000107C
    li r0, 0x2
lbl_fn_802E03F0_0000107C:
    stw r0, 0x1548(r3)
    b lbl_fn_802E03F0_00001308
lbl_fn_802E03F0_00001084:
    lwz r0, 0x14e4(r3)
    cmpwi r0, 0x12c
    ble lbl_fn_802E03F0_000010AC
    li r4, 0x3
    li r0, 0x0
    stw r8, 0x14e0(r3)
    li r5, 0x0
    stw r4, 0x14dc(r3)
    stw r0, 0x14e4(r3)
    b lbl_fn_802E03F0_00001128
lbl_fn_802E03F0_000010AC:
    lwz r0, 0x14f8(r3)
    cmpwi r0, 0x0
    ble lbl_fn_802E03F0_00001124
    li r30, 0x0
    stw r30, 0x14ec(r3)
    stw r30, 0x14e8(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0x8
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lis r4, lbl_80747B10@ha
    lfs f1, lbl_80884698
    addi r4, r4, lbl_80747B10@l
    addi r3, r1, 0x8
    addi r4, r4, 0x18c
    addi r5, r31, 0x614
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    lwz r3, 0x14f4(r31)
    stw r30, 0x14f8(r31)
    addi r0, r3, 0x1
    stw r0, 0x14f4(r31)
lbl_fn_802E03F0_00001124:
    li r5, 0x1
lbl_fn_802E03F0_00001128:
    cmpwi r5, 0x0
    bne lbl_fn_802E03F0_000012FC
    b lbl_fn_802E03F0_00001308
lbl_fn_802E03F0_00001134:
    lwz r0, 0x14e4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802E03F0_00001144
    bl fn_802E1290
lbl_fn_802E03F0_00001144:
    lwz r0, 0x14e4(r31)
    cmpwi r0, 0x1
    bne lbl_fn_802E03F0_000012FC
    lwz r3, 0x940(r31)
    lis r0, 0x4330
    lis r4, lbl_80747AF8@ha
    lwz r5, 0x1548(r31)
    xoris r3, r3, 0x8000
    stw r3, 0x1c(r1)
    lfd f5, lbl_80747AF8@l(r4)
    stw r0, 0x18(r1)
    lfs f3, 0x7d8(r31)
    lfd f4, 0x18(r1)
    lfs f0, lbl_808846B0
    fsubs f4, f4, f5
    stw r5, 0x1540(r31)
    fdivs f3, f3, f4
    fcmpo cr0, f3, f0
    bge lbl_fn_802E03F0_0000119C
    li r0, 0x4
    stw r0, 0x1548(r31)
    b lbl_fn_802E03F0_000011B0
lbl_fn_802E03F0_0000119C:
    cmpwi r5, 0x1
    li r0, 0x1
    bne lbl_fn_802E03F0_000011AC
    li r0, 0x2
lbl_fn_802E03F0_000011AC:
    stw r0, 0x1548(r31)
lbl_fn_802E03F0_000011B0:
    lwz r4, 0x14dc(r31)
    li r3, 0x3
    li r0, 0x0
    stw r4, 0x14e0(r31)
    stw r3, 0x14dc(r31)
    stw r0, 0x14e4(r31)
    b lbl_fn_802E03F0_00001308
lbl_fn_802E03F0_000011CC:
    lwz r0, 0x1628(r3)
    li r5, 0x0
    li r6, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_802E03F0_00001204
lbl_fn_802E03F0_000011E4:
    lwz r4, 0x1624(r3)
    lwzx r4, r4, r6
    lwz r0, 0x58c(r4)
    cmpwi r0, 0xc
    beq lbl_fn_802E03F0_000011FC
    addi r5, r5, 0x1
lbl_fn_802E03F0_000011FC:
    addi r6, r6, 0x4
    bdnz lbl_fn_802E03F0_000011E4
lbl_fn_802E03F0_00001204:
    cmpwi r5, 0x0
    bgt lbl_fn_802E03F0_00001228
    lwz r0, 0x14dc(r3)
    li r4, 0x0
    stw r4, 0x15e0(r3)
    stw r0, 0x14e0(r3)
    stw r4, 0x14dc(r3)
    stw r4, 0x14e4(r3)
    b lbl_fn_802E03F0_00001308
lbl_fn_802E03F0_00001228:
    mr r3, r31
    bl fn_802E0890
    cmpwi r3, 0x0
    bne lbl_fn_802E03F0_000012FC
    b lbl_fn_802E03F0_00001308
lbl_fn_802E03F0_0000123C:
    lwz r0, 0x14e4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802E03F0_0000125C
    lwz r0, 0x14e0(r3)
    cmpwi r0, 0x3
    bne lbl_fn_802E03F0_0000125C
    li r4, 0x1
    bl fn_802E10D8
lbl_fn_802E03F0_0000125C:
    lwz r0, 0x14e4(r31)
    cmpwi r0, 0x1
    bne lbl_fn_802E03F0_00001280
    lwz r3, lbl_8087F430
    li r4, 0xcc
    li r5, 0x1
    bl fn_80370AE4
    mr r3, r31
    bl fn_802E1414
lbl_fn_802E03F0_00001280:
    lwz r0, 0x14e4(r31)
    cmpwi r0, 0x2
    bne lbl_fn_802E03F0_000012FC
    lwz r4, 0x940(r31)
    lis r0, 0x4330
    stw r0, 0x18(r1)
    lis r3, lbl_80747AF8@ha
    xoris r0, r4, 0x8000
    lfd f5, lbl_80747AF8@l(r3)
    stw r0, 0x1c(r1)
    lfs f3, 0x7d8(r31)
    lfd f4, 0x18(r1)
    lfs f0, lbl_808846B0
    fsubs f4, f4, f5
    fdivs f3, f3, f4
    fcmpo cr0, f3, f0
    bge lbl_fn_802E03F0_000012D4
    lwz r3, 0x1548(r31)
    li r0, 0x3
    stw r3, 0x1540(r31)
    stw r0, 0x1548(r31)
lbl_fn_802E03F0_000012D4:
    lwz r4, 0x14dc(r31)
    li r0, 0x0
    li r3, 0x1
    stw r4, 0x14e0(r31)
    stw r3, 0x14dc(r31)
    stw r0, 0x14e4(r31)
    stw r0, 0x14f8(r31)
    stw r0, 0x14f4(r31)
    stw r0, 0x153c(r31)
    b lbl_fn_802E03F0_00001308
lbl_fn_802E03F0_000012FC:
    lwz r3, 0x14e4(r31)
    addi r0, r3, 0x1
    stw r0, 0x14e4(r31)
lbl_fn_802E03F0_00001308:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_802E0890(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, 0x14e4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802E0890_00001344
    bl fn_802E1290
    li r3, 0x1
    b lbl_fn_802E0890_000013CC
lbl_fn_802E0890_00001344:
    lwz r4, lbl_8087F408
    li r5, 0x0
    lwz r4, 0x48(r4)
    b lbl_fn_802E0890_00001380
lbl_fn_802E0890_00001354:
    lwz r0, 0x48(r4)
    cmpwi r0, 0x2
    bne lbl_fn_802E0890_0000137C
    cmplw r4, r3
    beq lbl_fn_802E0890_0000137C
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_802E0890_0000137C
    addi r5, r5, 0x1
lbl_fn_802E0890_0000137C:
    lwz r4, 0x14ac(r4)
lbl_fn_802E0890_00001380:
    cmpwi r4, 0x0
    bne lbl_fn_802E0890_00001354
    cmpwi r5, 0x0
    bgt lbl_fn_802E0890_0000139C
    lwz r4, 0x14e4(r3)
    addi r0, r4, 0x4
    stw r0, 0x14e4(r3)
lbl_fn_802E0890_0000139C:
    lwz r0, 0x14e4(r3)
    cmpwi r0, 0x384
    ble lbl_fn_802E0890_000013C8
    lwz r0, 0x14dc(r3)
    li r4, 0x0
    stw r4, 0x15e0(r3)
    stw r0, 0x14e0(r3)
    stw r4, 0x14dc(r3)
    stw r4, 0x14e4(r3)
    li r3, 0x0
    b lbl_fn_802E0890_000013CC
lbl_fn_802E0890_000013C8:
    li r3, 0x1
lbl_fn_802E0890_000013CC:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802E094C(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    stw r0, 0xd4(r1)
    addi r11, r1, 0xc0
    stfd f31, 0xc0(r1)
    psq_st f31, 0xc8(r1), 0, 0
    bl _savegpr_26
    mr r30, r3
    lwz r3, 0x1500(r3)
    bl fn_80219E6C
    lwz r0, 0x14e8(r30)
    mr r31, r3
    cmpwi r0, 0x78
    ble lbl_fn_802E094C_00001474
    li r27, 0x0
    stw r27, 0x14ec(r30)
    stw r27, 0x14e8(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    mr r3, r30
    li r4, 0x3
    stw r27, 0x58c(r30)
    bl fn_8016E970
    addi r3, r30, 0x1560
    li r4, 0x0
    li r5, 0x0
    bl fn_800CB5C8
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x64
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x65
    li r6, 0x1
    bl fn_80239DAC
lbl_fn_802E094C_00001474:
    lwz r0, 0x14e8(r30)
    cmpwi r0, 0xf
    bne lbl_fn_802E094C_00001604
    lwz r3, 0xd1c(r30)
    addi r5, r30, 0x1504
    lfs f3, lbl_8088469C
    addi r6, r1, 0x40
    lfs f2, 0x530(r3)
    li r0, 0x0
    psq_l f1, 0x528(r3), 0, 0
    addi r8, r3, 0x5b8
    psq_st f1, 0x0(r5), 0, 0
    addi r4, r1, 0x50
    lfs f0, lbl_808846B4
    li r7, 0x0
    lfs f4, 0x1508(r30)
    li r9, 0x0
    stfs f2, 0x150c(r30)
    fadds f3, f4, f3
    stfs f3, 0x1508(r30)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    lwz r3, lbl_8087EE98
    lfs f3, 0x44(r1)
    stfs f2, 0x48(r1)
    fsubs f0, f3, f0
    stw r0, 0x84(r1)
    stfs f0, 0x44(r1)
    stw r0, 0x88(r1)
    stw r0, 0x8c(r1)
    stw r0, 0x90(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_802E094C_00001514
    addi r3, r1, 0x60
    lfs f2, 0x68(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r30, 0x1504
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x150c(r30)
lbl_fn_802E094C_00001514:
    lfs f3, 0x1504(r30)
    lis r3, lbl_807C8410@ha
    lfs f4, lbl_808846B8
    addi r3, r3, lbl_807C8410@l
    lfs f0, 0x150c(r30)
    li r27, -0x1
    fadds f3, f3, f4
    lfs f5, 0x1508(r30)
    fadds f0, f0, f4
    lfs f31, lbl_80884698
    stfs f3, 0x1504(r30)
    li r28, 0x1
    stfs f0, 0x150c(r30)
    frsp f7, f0
    frsp f3, f3
    lis r29, lbl_807C7030@ha
    lfs f6, 0x8(r3)
    lfs f4, 0x4(r3)
    lfs f0, 0x0(r3)
    fadds f6, f7, f6
    fadds f4, f5, f4
    lwz r26, lbl_8087F048
    fadds f0, f3, f0
    stfs f6, 0x3c(r1)
    li r3, 0x716
    stfs f0, 0x34(r1)
    stfs f4, 0x38(r1)
    bl fn_80219E6C
    stw r27, 0x8(r1)
    mr r5, r3
    lfs f1, lbl_8088467C
    mr r3, r26
    stw r27, 0xc(r1)
    mr r4, r30
    lfs f2, lbl_80884698
    addi r7, r1, 0x34
    addi r8, r30, 0x534
    li r6, 0x0
    li r9, 0x0
    li r10, 0x1e
    bl fn_800FAB80
    mr r3, r30
    li r4, 0x1f4
    bl fn_80232B7C
    stfs f31, 0x18(r1)
    fmr f1, f31
    addi r4, r30, 0x152c
    addi r7, r30, 0x1504
    stfs f31, 0x1c(r1)
    addi r8, r29, lbl_807C7030@l
    addi r9, r1, 0x18
    stfs f31, 0x20(r1)
    li r5, 0x0
    li r6, 0x0
    li r10, -0x1
    stfs f31, 0x24(r1)
    stw r27, 0x8(r1)
    stw r28, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
lbl_fn_802E094C_00001604:
    lwz r0, 0x14e8(r30)
    cmpwi r0, 0x1e
    bne lbl_fn_802E094C_00001624
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x1f4
    li r6, 0x1
    bl fn_80239DAC
lbl_fn_802E094C_00001624:
    lwz r0, 0x14e8(r30)
    cmpwi r0, 0x41
    bne lbl_fn_802E094C_000016D0
    lis r3, lbl_807C8410@ha
    lfs f6, 0x150c(r30)
    addi r3, r3, lbl_807C8410@l
    lfs f5, 0x1508(r30)
    lfs f0, 0x8(r3)
    li r0, -0x1
    lfs f4, 0x4(r3)
    mr r4, r30
    fadds f6, f6, f0
    lfs f3, 0x1504(r30)
    lfs f0, 0x0(r3)
    fadds f4, f5, f4
    lfs f1, lbl_8088467C
    mr r5, r31
    fadds f0, f3, f0
    stfs f4, 0x2c(r1)
    lfs f2, lbl_80884698
    addi r7, r1, 0x28
    stfs f0, 0x28(r1)
    addi r8, r30, 0x534
    stfs f6, 0x30(r1)
    li r9, 0x0
    li r10, 0x1e
    stw r0, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F048
    lwz r6, 0x590(r30)
    bl fn_800FAB80
    lis r4, lbl_80747B10@ha
    lfs f1, lbl_80884698
    addi r4, r4, lbl_80747B10@l
    addi r3, r1, 0x10
    addi r4, r4, 0x19e
    addi r5, r30, 0x1504
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_802E094C_000016D0:
    addi r11, r1, 0xc0
    psq_l f31, 0xc8(r1), 0, 0
    lfd f31, 0xc0(r1)
    bl _restgpr_26
    lwz r0, 0xd4(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

asm void fn_802E0C60(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r11, r1, 0x60
    stfd f31, 0x60(r1)
    psq_st f31, 0x68(r1), 0, 0
    bl _savegpr_27
    lfs f31, 0x2e4(r3)
    mr r31, r3
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_802E0C60_00001798
    lwz r0, 0x14e8(r31)
    cmpwi r0, 0xb4
    ble lbl_fn_802E0C60_00001798
    li r28, 0x0
    stw r28, 0x14ec(r31)
    stw r28, 0x14e8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r3, r31
    li r4, 0x3
    stw r28, 0x58c(r31)
    bl fn_8016E970
    addi r3, r31, 0x1560
    li r4, 0x0
    li r5, 0x0
    bl fn_800CB5C8
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x64
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x65
    li r6, 0x1
    bl fn_80239DAC
lbl_fn_802E0C60_00001798:
    lwz r0, 0x14e8(r31)
    cmpwi r0, 0x14
    bne lbl_fn_802E0C60_00001844
    lwz r5, lbl_8087F430
    li r0, 0x78
    lfs f0, lbl_80884698
    li r28, 0x2
    lwz r3, 0x96c(r5)
    li r29, 0x0
    lfs f31, lbl_8088467C
    li r30, 0x12c
    srwi r4, r3, 31
    clrlwi r3, r3, 31
    xor r3, r3, r4
    subf r3, r4, r3
    stw r3, 0x96c(r5)
    stw r0, 0x970(r5)
    stfs f0, 0x974(r5)
    stfs f0, 0x978(r5)
    lwz r3, lbl_8087F4A0
    lwz r27, 0x48(r3)
    b lbl_fn_802E0C60_0000183C
lbl_fn_802E0C60_000017F0:
    lwz r0, 0x48(r27)
    cmpwi r0, 0x444
    bne lbl_fn_802E0C60_00001838
    stw r28, 0x20(r1)
    mr r3, r27
    addi r4, r1, 0x20
    stw r29, 0x24(r1)
    stw r29, 0x28(r1)
    stw r29, 0x2c(r1)
    stw r29, 0x30(r1)
    stfs f31, 0x34(r1)
    stfs f31, 0x38(r1)
    stfs f31, 0x3c(r1)
    lwz r12, 0x0(r27)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    stw r30, 0x15b0(r31)
lbl_fn_802E0C60_00001838:
    lwz r27, 0x5c(r27)
lbl_fn_802E0C60_0000183C:
    cmpwi r27, 0x0
    bne lbl_fn_802E0C60_000017F0
lbl_fn_802E0C60_00001844:
    lwz r3, 0x14e8(r31)
    subi r0, r3, 0x64
    cmplwi r0, 0xe
    bgt lbl_fn_802E0C60_00001938
    lwz r3, 0x155c(r31)
    bl fn_80219E6C
    li r30, -0x1
    stw r30, 0x8(r1)
    mr r27, r3
    lfs f1, lbl_8088467C
    stw r30, 0xc(r1)
    mr r4, r31
    lfs f2, lbl_80884698
    mr r5, r27
    lwz r3, lbl_8087F048
    addi r7, r31, 0x15b4
    lwz r6, 0x590(r31)
    addi r8, r31, 0x534
    li r9, 0x0
    li r10, 0x1e
    bl fn_800FAB80
    lfs f1, lbl_808846BC
    mr r4, r31
    lfs f2, lbl_80884684
    mr r5, r27
    lfs f0, lbl_808846C0
    addi r7, r1, 0x10
    stfs f1, 0x10(r1)
    addi r8, r31, 0x534
    lfs f1, lbl_8088467C
    li r9, 0x0
    stfs f2, 0x14(r1)
    li r10, 0x1e
    lfs f2, lbl_80884698
    stfs f0, 0x18(r1)
    stw r30, 0x8(r1)
    stw r30, 0xc(r1)
    lwz r3, lbl_8087F048
    lwz r6, 0x590(r31)
    bl fn_800FAB80
    lfs f1, lbl_808846C4
    mr r4, r31
    lfs f2, lbl_80884684
    mr r5, r27
    lfs f0, lbl_808846C8
    addi r7, r1, 0x10
    stfs f1, 0x10(r1)
    addi r8, r31, 0x534
    lfs f1, lbl_8088467C
    li r9, 0x0
    stfs f2, 0x14(r1)
    li r10, 0x1e
    lfs f2, lbl_80884698
    stfs f0, 0x18(r1)
    stw r30, 0x8(r1)
    stw r30, 0xc(r1)
    lwz r3, lbl_8087F048
    lwz r6, 0x590(r31)
    bl fn_800FAB80
    li r0, 0x2
    stw r0, 0x1554(r31)
lbl_fn_802E0C60_00001938:
    addi r11, r1, 0x60
    psq_l f31, 0x68(r1), 0, 0
    lfd f31, 0x60(r1)
    bl _restgpr_27
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_802E0EC8(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    lwz r0, 0x14e8(r3)
    cmpwi r0, 0x32
    bne lbl_fn_802E0EC8_000019B4
    lis r4, lbl_80747B10@ha
    lfs f1, lbl_80884698
    addi r4, r4, lbl_80747B10@l
    addi r3, r1, 0x8
    addi r4, r4, 0x1ab
    addi r5, r30, 0x614
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_802E0EC8_000019B4:
    lwz r0, 0x2dc(r30)
    cmpwi r0, 0x14d
    bne lbl_fn_802E0EC8_00001A48
    lfs f31, 0x2e4(r30)
    addi r3, r30, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_802E0EC8_00001AC4
    li r31, 0x0
    li r0, 0x1
    stw r0, 0x153c(r30)
    stw r31, 0x14ec(r30)
    stw r31, 0x14e8(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    mr r3, r30
    li r4, 0x3
    stw r31, 0x58c(r30)
    bl fn_8016E970
    addi r3, r30, 0x1560
    li r4, 0x0
    li r5, 0x0
    bl fn_800CB5C8
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x64
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x65
    li r6, 0x1
    bl fn_80239DAC
    b lbl_fn_802E0EC8_00001AC4
lbl_fn_802E0EC8_00001A48:
    lwz r0, 0x14e8(r30)
    cmpwi r0, 0x2d
    ble lbl_fn_802E0EC8_00001AC4
    addi r3, r30, 0x1560
    li r4, 0x0
    li r5, 0x0
    bl fn_800CB5C8
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x64
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x65
    li r6, 0x1
    bl fn_80239DAC
    lfs f0, lbl_80884698
    li r0, 0x1
    stw r0, 0x3fc(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_8088467C
    li r4, 0x0
    stfs f0, 0x2fc(r30)
    li r5, 0x14d
    lfs f2, lbl_8088469C
    li r6, 0x0
    stfs f0, 0x2e8(r30)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
lbl_fn_802E0EC8_00001AC4:
    lwz r0, 0x34(r1)
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}
