#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void fn_80040B40(void);
extern void fn_8004D314(void);
extern void fn_8004ED34(void);
extern void fn_80092954(void);
extern void fn_80097C08(void);
extern void fn_80097CCC(void);
extern void fn_80097D7C(void);
extern void fn_800CB5C8(void);
extern void fn_800F8548(void);
extern void fn_800F8C6C(void);
extern void fn_80108F38(void);
extern void fn_80126214(void);
extern void fn_8012DB04(void);
extern void fn_8013A258(void);
extern void fn_8013CB68(void);
extern void fn_801426A4(void);
extern void fn_80145334(void);
extern void fn_80149A30(void);
extern void fn_8014C540(void);
extern void fn_80151448(void);
extern void fn_80158BB4(void);
extern void fn_8016E970(void);
extern void fn_8017039C(void);
extern void fn_80170A20(void);
extern void fn_801781B0(void);
extern void fn_80232B7C(void);
extern void fn_80239DAC(void);
extern void fn_8023A8B4(void);
extern void fn_802F97B8(void);
extern void fn_802F9F3C(void);
extern void fn_802FA2F4(void);
extern void fn_802FA764(void);
extern void fn_802FB0C4(void);
extern void fn_802FBA30(void);
extern void fn_802FBE00(void);
extern void fn_802FC188(void);
extern void fn_802FC2E0(void);
extern void fn_8059B670(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9940(void);
extern void fn_805F9990(void);
extern void fn_8068A850(void);
extern void fn_8068AEA4(void);
extern void fn_8068B100(void);

/* External data declarations */
extern u8 jumptable_80787A68[];
extern u8 lbl_80748760[];
extern u8 lbl_80748780[];
extern u8 lbl_807C6B90[];
extern u8 lbl_807C7030[];
extern u8 lbl_807C8398[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F8A0;
extern u32 lbl_8087F9E8;
extern u32 lbl_80884978;
extern u32 lbl_80884980;
extern u32 lbl_80884990;
extern u32 lbl_80884994;
extern u32 lbl_80884998;
extern u32 lbl_8088499C;
extern u32 lbl_808849A0;
extern u32 lbl_808849A4;
extern u32 lbl_808849A8;
extern u32 lbl_808849AC;
extern u32 lbl_808849B0;
extern u32 lbl_808849B4;
extern u32 lbl_808849B8;
extern u32 lbl_808849BC;
extern u32 lbl_808849C0;
extern u32 lbl_808849C4;
extern u32 lbl_808849C8;
extern u32 lbl_808849CC;
extern u32 lbl_808849D0;
extern u32 lbl_808849D4;
extern u32 lbl_808849D8;
extern u32 lbl_808849DC;
extern u32 lbl_808849E0;

/* Function declarations */
void fn_802F7E0C(void);
void fn_802F83E4(void);
void fn_802F8678(void);
void fn_802F87E0(void);
void fn_802F8A60(void);
void fn_802F8CA4(void);
void fn_802F8EBC(void);
void fn_802F93F0(void);

asm void fn_802F7E0C(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    stw r31, 0xbc(r1)
    mr r31, r3
    stw r30, 0xb8(r1)
    lwz r0, 0x58c(r3)
    lwz r4, 0xd1c(r3)
    cmpwi r0, 0x9
    stw r4, 0xd20(r3)
    bne lbl_fn_802F7E0C_00000038
    li r0, 0x0
    stw r0, 0x1454(r3)
    b lbl_fn_802F7E0C_00000044
lbl_fn_802F7E0C_00000038:
    li r0, 0x1
    stw r0, 0x1454(r3)
    stw r4, 0x15bc(r3)
lbl_fn_802F7E0C_00000044:
    lwz r0, 0x15bc(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802F7E0C_0000005C
    lwz r4, lbl_8087F8A0
    lwz r0, 0x48(r4)
    stw r0, 0x15bc(r3)
lbl_fn_802F7E0C_0000005C:
    lwz r0, 0xd18(r3)
    li r30, 0x0
    lwz r4, 0x14b0(r3)
    lwz r6, 0x15bc(r3)
    cmpwi r0, 0x0
    addi r5, r4, 0x1
    stw r6, 0xd1c(r3)
    stw r5, 0x14b0(r3)
    stw r30, 0x1538(r3)
    beq lbl_fn_802F7E0C_0000008C
    cmpwi r6, 0x0
    bne lbl_fn_802F7E0C_000000C8
lbl_fn_802F7E0C_0000008C:
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x2
    bne lbl_fn_802F7E0C_000000BC
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0xec(r12)
    mtctr r12
    bctrl
    b lbl_fn_802F7E0C_0000041C
lbl_fn_802F7E0C_000000BC:
    mr r3, r31
    bl fn_802F8EBC
    b lbl_fn_802F7E0C_0000041C
lbl_fn_802F7E0C_000000C8:
    lwz r0, 0x58c(r3)
    cmplwi r0, 0xe
    bgt lbl_fn_802F7E0C_000003A0
    lis r4, jumptable_80787A68@ha
    slwi r0, r0, 2
    addi r4, r4, jumptable_80787A68@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    mr r3, r31
    bl fn_80158BB4
    cmpwi r3, 0x0
    beq lbl_fn_802F7E0C_00000168
    lwz r3, 0x14f4(r31)
    stw r30, 0x14b0(r31)
    cmpwi r3, 0x0
    stw r30, 0x15cc(r31)
    beq lbl_fn_802F7E0C_00000118
    lwz r0, 0x68(r3)
    b lbl_fn_802F7E0C_0000011C
lbl_fn_802F7E0C_00000118:
    li r0, 0x5a
lbl_fn_802F7E0C_0000011C:
    stw r0, 0x15d4(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    addi r3, r31, 0x151c
    li r4, 0xf
    li r5, 0x0
    bl fn_800CB5C8
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0xc8
    li r6, 0x0
    bl fn_80239DAC
    li r0, 0x6
    stw r0, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    b lbl_fn_802F7E0C_0000041C
lbl_fn_802F7E0C_00000168:
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_808849A0
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_802F7E0C_0000041C
    lfs f0, lbl_808849A4
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_802F7E0C_0000041C
    lwz r8, 0x590(r31)
    mr r6, r31
    lwz r7, 0x1530(r31)
    li r4, 0x0
    lwz r3, lbl_8087F048
    li r5, 0x0
    lfs f1, lbl_80884980
    li r9, 0x1e
    li r10, -0x1
    bl fn_800F8C6C
    b lbl_fn_802F7E0C_0000041C
    mr r3, r31
    bl fn_802F97B8
    b lbl_fn_802F7E0C_0000041C
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0xec(r12)
    mtctr r12
    bctrl
    b lbl_fn_802F7E0C_0000041C
    mr r3, r31
    bl fn_802F9F3C
    b lbl_fn_802F7E0C_0000041C
    mr r3, r31
    bl fn_802FA2F4
    b lbl_fn_802F7E0C_0000041C
    mr r3, r31
    bl fn_802FA764
    b lbl_fn_802F7E0C_0000041C
    mr r3, r31
    bl fn_802FB0C4
    b lbl_fn_802F7E0C_0000041C
    lwz r0, 0x15cc(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802F7E0C_0000041C
    lwz r4, 0x15d0(r3)
    lwz r0, 0x15dc(r3)
    addi r4, r4, 0x1
    stw r4, 0x15d0(r3)
    cmpw r4, r0
    blt lbl_fn_802F7E0C_000002A8
    lwz r4, 0x14f4(r3)
    stw r30, 0x14b0(r3)
    cmpwi r4, 0x0
    stw r30, 0x15cc(r3)
    beq lbl_fn_802F7E0C_0000024C
    lwz r0, 0x68(r4)
    b lbl_fn_802F7E0C_00000250
lbl_fn_802F7E0C_0000024C:
    li r0, 0x5a
lbl_fn_802F7E0C_00000250:
    stw r0, 0x15d4(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    addi r3, r31, 0x151c
    li r4, 0xf
    li r5, 0x0
    bl fn_800CB5C8
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0xc8
    li r6, 0x0
    bl fn_80239DAC
    li r0, 0x6
    stw r0, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lwz r0, 0x5c0(r31)
    ori r0, r0, 0x1
    stw r0, 0x5c0(r31)
    b lbl_fn_802F7E0C_0000041C
lbl_fn_802F7E0C_000002A8:
    lfs f4, 0x528(r3)
    lis r0, 0x4330
    lfs f3, 0x154c(r3)
    lis r4, lbl_80748760@ha
    lfs f2, 0x530(r3)
    addi r5, r1, 0x8
    fadds f5, f4, f3
    lfs f0, 0x1554(r3)
    psq_l f1, 0x528(r3), 0, 0
    fadds f0, f2, f0
    lfs f4, 0x52c(r3)
    lfs f3, 0x1550(r3)
    stfs f5, 0x528(r3)
    fadds f4, f4, f3
    lfd f5, lbl_80748760@l(r4)
    stfs f0, 0x530(r3)
    lfs f3, lbl_808849A8
    stfs f4, 0x52c(r3)
    lfs f0, 0x1550(r3)
    lwz r4, lbl_8087F0A8
    stw r0, 0xb0(r1)
    lwz r0, 0x30(r4)
    psq_st f1, 0x0(r5), 0, 0
    mullw r0, r0, r0
    stfs f2, 0x10(r1)
    xoris r0, r0, 0x8000
    stw r0, 0xb4(r1)
    lfd f4, 0xb0(r1)
    fsubs f4, f4, f5
    fdivs f3, f3, f4
    fadds f0, f0, f3
    stfs f0, 0x1550(r3)
    b lbl_fn_802F7E0C_0000041C
    cmpwi r5, 0x1c2
    blt lbl_fn_802F7E0C_0000041C
    lwz r4, 0x14f4(r3)
    stw r30, 0x14b0(r3)
    cmpwi r4, 0x0
    stw r30, 0x15cc(r3)
    beq lbl_fn_802F7E0C_00000350
    lwz r0, 0x68(r4)
    b lbl_fn_802F7E0C_00000354
lbl_fn_802F7E0C_00000350:
    li r0, 0x5a
lbl_fn_802F7E0C_00000354:
    stw r0, 0x15d4(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    addi r3, r31, 0x151c
    li r4, 0xf
    li r5, 0x0
    bl fn_800CB5C8
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0xc8
    li r6, 0x0
    bl fn_80239DAC
    li r0, 0x6
    stw r0, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    b lbl_fn_802F7E0C_0000041C
lbl_fn_802F7E0C_000003A0:
    lwz r4, 0x55c(r3)
    subi r0, r4, 0x6
    cmplwi r0, 0x1
    ble lbl_fn_802F7E0C_0000040C
    lwz r0, 0x58c(r3)
    li r4, 0x3
    stw r4, 0x55c(r3)
    cmpwi r0, 0xc
    bne lbl_fn_802F7E0C_000003DC
    lwz r4, 0x1564(r31)
    mr r3, r31
    li r5, 0x8
    lwz r4, 0x0(r4)
    bl fn_8017039C
    b lbl_fn_802F7E0C_0000040C
lbl_fn_802F7E0C_000003DC:
    lfs f3, lbl_808849AC
    mr r3, r31
    lfs f0, 0x152c(r31)
    lfs f1, lbl_80884978
    fmuls f0, f3, f0
    lwz r4, 0x15bc(r31)
    fcmpo cr0, f1, f0
    bge lbl_fn_802F7E0C_00000400
    b lbl_fn_802F7E0C_00000404
lbl_fn_802F7E0C_00000400:
    fmr f1, f0
lbl_fn_802F7E0C_00000404:
    li r5, 0x0
    bl fn_80170A20
lbl_fn_802F7E0C_0000040C:
    mr r3, r31
    bl fn_802F8EBC
    mr r3, r31
    bl fn_802F93F0
lbl_fn_802F7E0C_0000041C:
    lwz r0, 0x15b8(r31)
    li r30, 0x0
    rlwinm r0, r0, 0, 28, 28
    cmpwi r0, 0x8
    bne lbl_fn_802F7E0C_000005B0
    lwz r0, 0x7e0(r31)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_802F7E0C_000005B0
    lfs f2, 0x530(r31)
    addi r5, r1, 0x48
    psq_l f1, 0x528(r31), 0, 0
    addi r6, r1, 0x54
    psq_st f1, 0x0(r5), 0, 0
    li r0, 0x0
    lfs f4, lbl_808849B0
    addi r4, r1, 0x60
    psq_st f1, 0x0(r6), 0, 0
    lis r7, 0x8000
    lfs f3, 0x4c(r1)
    li r8, 0x0
    lfs f0, 0x58(r1)
    li r9, 0x0
    fadds f3, f3, f4
    stfs f2, 0x50(r1)
    fsubs f0, f0, f4
    lwz r3, lbl_8087EE98
    stfs f3, 0x4c(r1)
    stfs f2, 0x5c(r1)
    stfs f0, 0x58(r1)
    stw r0, 0x94(r1)
    stw r0, 0x98(r1)
    stw r0, 0x9c(r1)
    stw r0, 0xa0(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_802F7E0C_000004E0
    lwz r3, 0x94(r1)
    cmpwi r3, 0x0
    beq lbl_fn_802F7E0C_000004E0
    lwz r3, 0x0(r3)
    cmplwi r3, 0x14
    beq lbl_fn_802F7E0C_000004DC
    cmplwi r3, 0x15
    beq lbl_fn_802F7E0C_000004DC
    subi r0, r3, 0x1a
    cmplwi r0, 0x3
    bgt lbl_fn_802F7E0C_000004E0
lbl_fn_802F7E0C_000004DC:
    li r30, 0x1
lbl_fn_802F7E0C_000004E0:
    cmpwi r30, 0x0
    beq lbl_fn_802F7E0C_000005B0
    lwz r0, 0x44(r1)
    li r5, 0x0
    li r3, -0x1
    stw r5, 0x28(r1)
    clrlwi r0, r0, 4
    stw r5, 0x2c(r1)
    stw r5, 0x30(r1)
    stw r5, 0x34(r1)
    stw r5, 0x38(r1)
    stw r3, 0x3c(r1)
    stw r0, 0x44(r1)
    stw r3, 0x40(r1)
    lwz r4, 0x1578(r31)
    lbz r3, 0x1(r4)
    subi r0, r3, 0x4
    clrlwi r0, r0, 24
    cmplwi r0, 0x2
    bgt lbl_fn_802F7E0C_00000594
    stw r5, 0x14(r1)
    mr r5, r31
    lwz r3, lbl_8087F9E8
    mr r6, r31
    lfs f1, lbl_80884994
    addi r7, r31, 0x528
    addi r8, r31, 0x534
    addi r9, r1, 0x14
    bl fn_8059B670
    addic. r3, r1, 0x14
    beq lbl_fn_802F7E0C_000005B0
    lwz r4, 0x14(r1)
    cmpwi r4, 0x0
    beq lbl_fn_802F7E0C_000005B0
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_802F7E0C_00000588
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_802F7E0C_00000588:
    li r0, 0x0
    stw r0, 0x14(r1)
    b lbl_fn_802F7E0C_000005B0
lbl_fn_802F7E0C_00000594:
    addi r5, r31, 0x7d4
    lis r8, lbl_807C6B90@ha
    addi r3, r1, 0x28
    li r7, 0x0
    mr r6, r5
    addi r8, r8, lbl_807C6B90@l
    bl fn_80040B40
lbl_fn_802F7E0C_000005B0:
    mr r3, r31
    bl fn_8014C540
    mr r3, r31
    bl fn_80145334
    lwz r0, 0xc4(r1)
    lwz r31, 0xbc(r1)
    lwz r30, 0xb8(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

asm void fn_802F83E4(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    stw r31, 0x9c(r1)
    mr r31, r3
    addi r3, r3, 0xb0
    stw r30, 0x98(r1)
    lis r30, lbl_80748780@ha
    addi r30, r30, lbl_80748780@l
    addi r4, r30, 0x201
    bl fn_80092954
    cmpwi r3, 0x0
    beq lbl_fn_802F83E4_0000084C
    addi r3, r31, 0xb0
    addi r4, r30, 0x20c
    bl fn_80092954
    cmpwi r3, 0x0
    beq lbl_fn_802F83E4_0000084C
    lwz r5, 0x7e0(r31)
    li r4, 0x1
    lfs f0, lbl_80884994
    rlwinm r3, r5, 0, 12, 12
    stfs f0, 0x48(r1)
    subis r0, r3, 0x8
    cmplwi r0, 0x0
    stfs f0, 0x4c(r1)
    stfs f0, 0x50(r1)
    stfs f0, 0x54(r1)
    beq lbl_fn_802F83E4_00000660
    rlwinm r3, r5, 0, 7, 7
    subis r0, r3, 0x100
    cmplwi r0, 0x0
    beq lbl_fn_802F83E4_00000660
    li r4, 0x0
lbl_fn_802F83E4_00000660:
    cmpwi r4, 0x0
    beq lbl_fn_802F83E4_00000690
    lis r4, lbl_807C8398@ha
    addi r3, r4, lbl_807C8398@l
    lfs f3, lbl_807C8398@l(r4)
    lfs f2, 0x4(r3)
    lfs f1, 0x8(r3)
    lfs f0, 0xc(r3)
    stfs f3, 0x48(r1)
    stfs f2, 0x4c(r1)
    stfs f1, 0x50(r1)
    stfs f0, 0x54(r1)
lbl_fn_802F83E4_00000690:
    lfs f1, 0x50(r1)
    lis r30, lbl_80748780@ha
    lfs f5, 0x15ec(r31)
    addi r30, r30, lbl_80748780@l
    lfs f0, 0x54(r1)
    addi r3, r31, 0xb0
    fsubs f12, f1, f5
    lfs f3, 0x15f0(r31)
    lfs f2, 0x4c(r1)
    addi r4, r30, 0x201
    fsubs f13, f0, f3
    lfs f0, lbl_808849B4
    fmuls f10, f12, f0
    lfs f4, 0x15e8(r31)
    lfs f1, 0x48(r1)
    fmuls f11, f13, f0
    fsubs f8, f2, f4
    lfs f2, 0x15e4(r31)
    fadds f6, f10, f5
    stfs f8, 0x2c(r1)
    fsubs f5, f1, f2
    fadds f7, f11, f3
    lfs f3, lbl_808849B8
    fmuls f9, f8, f0
    fmuls f8, f5, f0
    stfs f5, 0x28(r1)
    fmuls f1, f3, f6
    fadds f5, f9, f4
    stfs f12, 0x30(r1)
    fadds f4, f8, f2
    fmuls f0, f3, f7
    stfs f13, 0x34(r1)
    fmuls f2, f3, f5
    fctiwz f1, f1
    stfs f8, 0x18(r1)
    fctiwz f0, f0
    fctiwz f2, f2
    stfd f1, 0x68(r1)
    fmuls f3, f3, f4
    stfd f2, 0x60(r1)
    lwz r5, 0x6c(r1)
    fctiwz f1, f3
    stfd f0, 0x70(r1)
    lwz r6, 0x64(r1)
    stfd f1, 0x58(r1)
    lwz r0, 0x74(r1)
    lwz r7, 0x5c(r1)
    stb r7, 0xc(r1)
    stb r6, 0xd(r1)
    stb r5, 0xe(r1)
    stb r0, 0xf(r1)
    lwz r0, 0xc(r1)
    stfs f9, 0x1c(r1)
    stfs f10, 0x20(r1)
    stfs f11, 0x24(r1)
    stfs f4, 0x38(r1)
    stfs f5, 0x3c(r1)
    stfs f6, 0x40(r1)
    stfs f7, 0x44(r1)
    stfs f4, 0x15e4(r31)
    stfs f5, 0x15e8(r31)
    stfs f6, 0x15ec(r31)
    stfs f7, 0x15f0(r31)
    stw r0, 0x14(r1)
    bl fn_80092954
    lbz r0, 0x14(r1)
    addi r4, r30, 0x20c
    stb r0, 0x18(r3)
    lbz r0, 0x15(r1)
    stb r0, 0x19(r3)
    lbz r0, 0x16(r1)
    stb r0, 0x1a(r3)
    lbz r0, 0x17(r1)
    stb r0, 0x1b(r3)
    addi r3, r31, 0xb0
    lfs f4, lbl_808849B8
    lfs f0, 0x15e4(r31)
    lfs f2, 0x15e8(r31)
    fmuls f3, f4, f0
    lfs f1, 0x15ec(r31)
    lfs f0, 0x15f0(r31)
    fmuls f2, f4, f2
    fmuls f1, f4, f1
    fmuls f0, f4, f0
    fctiwz f3, f3
    fctiwz f2, f2
    fctiwz f1, f1
    stfd f3, 0x78(r1)
    fctiwz f0, f0
    stfd f2, 0x80(r1)
    lwz r7, 0x7c(r1)
    stfd f1, 0x88(r1)
    lwz r6, 0x84(r1)
    stfd f0, 0x90(r1)
    lwz r5, 0x8c(r1)
    lwz r0, 0x94(r1)
    stb r7, 0x8(r1)
    stb r6, 0x9(r1)
    stb r5, 0xa(r1)
    stb r0, 0xb(r1)
    lwz r0, 0x8(r1)
    stw r0, 0x10(r1)
    bl fn_80092954
    lbz r0, 0x10(r1)
    stb r0, 0x18(r3)
    lbz r0, 0x11(r1)
    stb r0, 0x19(r3)
    lbz r0, 0x12(r1)
    stb r0, 0x1a(r3)
    lbz r0, 0x13(r1)
    stb r0, 0x1b(r3)
lbl_fn_802F83E4_0000084C:
    mr r3, r31
    bl fn_80149A30
    lwz r0, 0xa4(r1)
    lwz r31, 0x9c(r1)
    lwz r30, 0x98(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_802F8678(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    lfs f3, lbl_80884980
    stw r0, 0x84(r1)
    addi r4, r1, 0x38
    lfs f0, lbl_808849BC
    stw r31, 0x7c(r1)
    mr r31, r3
    psq_l f1, 0x528(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lwz r0, 0x58c(r3)
    lfs f4, 0x3c(r1)
    lfs f2, 0x530(r3)
    cmpwi r0, 0x8
    fsubs f0, f4, f0
    stfs f2, 0x40(r1)
    stfs f0, 0x3c(r1)
    stfs f3, 0x2c(r1)
    stfs f3, 0x30(r1)
    stfs f3, 0x34(r1)
    bne lbl_fn_802F8678_0000092C
    lfs f0, lbl_80884994
    li r4, 0x79
    stfs f3, 0x8(r1)
    stfs f3, 0xc(r1)
    stfs f0, 0x10(r1)
    lfs f1, 0x538(r3)
    addi r3, r1, 0x48
    bl fn_805F8E70
    addi r4, r1, 0x8
    addi r3, r1, 0x48
    mr r5, r4
    bl fn_805F93C0
    lfs f0, 0x10(r1)
    addi r4, r1, 0x14
    lfs f4, lbl_808849C0
    addi r3, r1, 0x2c
    lfs f3, 0xc(r1)
    fmuls f2, f0, f4
    lfs f0, 0x8(r1)
    fmuls f3, f3, f4
    fmuls f0, f0, f4
    stfs f2, 0x1c(r1)
    stfs f0, 0x14(r1)
    stfs f3, 0x18(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x34(r1)
lbl_fn_802F8678_0000092C:
    lfs f5, 0x38(r1)
    addi r3, r1, 0x38
    lfs f3, 0x2c(r1)
    addi r4, r1, 0x20
    lfs f4, 0x3c(r1)
    fadds f5, f5, f3
    lfs f0, 0x30(r1)
    lfs f3, 0x40(r1)
    fadds f4, f4, f0
    lfs f0, 0x34(r1)
    stfs f5, 0x38(r1)
    fadds f7, f3, f0
    lfs f6, lbl_808849C4
    stfs f4, 0x3c(r1)
    lfs f5, 0x5b0(r31)
    psq_l f1, 0x0(r3), 0, 0
    fmr f2, f7
    fmuls f4, f6, f5
    lfs f0, 0x52c(r31)
    psq_st f1, 0x614(r31), 0, 0
    fmadds f0, f6, f5, f0
    psq_st f1, 0x0(r4), 0, 0
    lfs f3, 0x618(r31)
    stfs f0, 0x24(r1)
    fmadds f0, f6, f5, f3
    psq_st f1, 0x5f4(r31), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0x61c(r31)
    stfs f2, 0x28(r1)
    stfs f2, 0x5fc(r31)
    frsp f2, f2
    stfs f4, 0x620(r31)
    stfs f0, 0x618(r31)
    psq_st f1, 0x600(r31), 0, 0
    stfs f2, 0x608(r31)
    stfs f4, 0x60c(r31)
    lwz r31, 0x7c(r1)
    lwz r0, 0x84(r1)
    stfs f7, 0x40(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_802F87E0(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    li r6, 0x1
    stw r0, 0x84(r1)
    stfd f31, 0x70(r1)
    psq_st f31, 0x78(r1), 0, 0
    stw r31, 0x6c(r1)
    mr r31, r4
    stw r30, 0x68(r1)
    mr r30, r3
    lwz r7, 0x7e0(r3)
    rlwinm r5, r7, 0, 12, 12
    subis r0, r5, 0x8
    cmplwi r0, 0x0
    beq lbl_fn_802F87E0_00000A24
    rlwinm r5, r7, 0, 7, 7
    subis r0, r5, 0x100
    cmplwi r0, 0x0
    beq lbl_fn_802F87E0_00000A24
    li r6, 0x0
lbl_fn_802F87E0_00000A24:
    cmpwi r6, 0x0
    bne lbl_fn_802F87E0_00000B94
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x8
    bne lbl_fn_802F87E0_00000A50
    lis r5, lbl_807C7030@ha
    addi r5, r5, lbl_807C7030@l
    psq_l f1, 0x0(r5), 0, 0
    lfs f2, 0x8(r5)
    stfs f2, 0x18(r4)
    psq_st f1, 0x10(r4), 0, 0
lbl_fn_802F87E0_00000A50:
    lfs f3, 0x1534(r3)
    lfs f0, lbl_80884998
    fabs f3, f3
    frsp f3, f3
    fcmpo cr0, f3, f0
    blt lbl_fn_802F87E0_00000B94
    lwz r5, 0x8(r4)
    lwz r0, 0x4(r5)
    cmpwi r0, 0xd1
    beq lbl_fn_802F87E0_00000B94
    lfs f3, 0x24(r4)
    addi r6, r1, 0x14
    lfs f0, 0x530(r3)
    addi r5, r1, 0x20
    lfs f5, 0x20(r4)
    fsubs f2, f3, f0
    lfs f4, 0x52c(r3)
    lfs f3, 0x1c(r4)
    mr r4, r5
    lfs f0, 0x528(r3)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x18(r1)
    mr r3, r5
    stfs f0, 0x14(r1)
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x1c(r1)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x28(r1)
    bl fn_805F98D0
    lwz r0, 0x1538(r30)
    cmpwi r0, 0x0
    beq lbl_fn_802F87E0_00000AFC
    lfs f4, 0x20(r1)
    lfs f5, lbl_808849C8
    lfs f3, 0x24(r1)
    lfs f0, 0x28(r1)
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    fmuls f0, f0, f5
    stfs f4, 0x20(r1)
    stfs f3, 0x24(r1)
    stfs f0, 0x28(r1)
lbl_fn_802F87E0_00000AFC:
    lwz r3, 0x8(r31)
    lbz r0, 0x1(r3)
    cmpwi r0, 0x1
    beq lbl_fn_802F87E0_00000B94
    lfs f3, lbl_80884980
    addi r3, r1, 0x30
    lfs f0, lbl_80884994
    li r4, 0x79
    stfs f3, 0x8(r1)
    stfs f3, 0xc(r1)
    stfs f0, 0x10(r1)
    lfs f1, 0x538(r30)
    bl fn_805F8E70
    addi r4, r1, 0x8
    addi r3, r1, 0x30
    mr r5, r4
    bl fn_805F93C0
    addi r3, r1, 0x20
    addi r4, r1, 0x8
    bl fn_805F9990
    lfs f4, 0x1534(r30)
    fmr f31, f1
    lfs f3, lbl_80884990
    lfs f0, lbl_8088499C
    fmuls f3, f4, f3
    fmuls f1, f0, f3
    bl fn_8068A850
    frsp f0, f1
    fcmpo cr0, f31, f0
    ble lbl_fn_802F87E0_00000B94
    li r0, 0x1
    lis r3, lbl_807C7030@ha
    stw r0, 0x48(r31)
    addi r3, r3, lbl_807C7030@l
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x8(r3)
    stfs f2, 0x18(r31)
    psq_st f1, 0x10(r31), 0, 0
lbl_fn_802F87E0_00000B94:
    lwz r0, 0x48(r31)
    cmpwi r0, 0x0
    bne lbl_fn_802F87E0_00000BDC
    lwz r0, 0x58c(r30)
    cmpwi r0, 0x8
    bne lbl_fn_802F87E0_00000BDC
    lwz r0, 0x15cc(r30)
    cmpwi r0, 0x1
    bne lbl_fn_802F87E0_00000BDC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x0
    li r6, 0x0
    bl fn_80239DAC
    addi r3, r30, 0x151c
    li r4, 0x0
    li r5, 0x0
    bl fn_800CB5C8
lbl_fn_802F87E0_00000BDC:
    lwz r0, 0x58c(r30)
    cmpwi r0, 0xe
    bne lbl_fn_802F87E0_00000C10
    lfs f4, 0x10(r31)
    lfs f5, lbl_80884980
    lfs f3, 0x14(r31)
    lfs f0, 0x18(r31)
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    fmuls f0, f0, f5
    stfs f4, 0x10(r31)
    stfs f3, 0x14(r31)
    stfs f0, 0x18(r31)
lbl_fn_802F87E0_00000C10:
    mr r3, r30
    mr r4, r31
    bl fn_80151448
    lwz r12, 0x0(r30)
    mr r3, r30
    mr r4, r31
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r0, 0x84(r1)
    psq_l f31, 0x78(r1), 0, 0
    lfd f31, 0x70(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_802F8A60(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r3
    stw r30, 0x48(r1)
    mr r30, r4
    lwz r0, 0x55c(r3)
    lwz r5, 0x1590(r3)
    cmpwi r0, 0x6
    addi r0, r5, 0x1
    stw r0, 0x1590(r3)
    bne lbl_fn_802F8A60_00000D1C
    lwz r4, 0x560(r3)
    subi r0, r4, 0x16
    cmplwi r0, 0x1
    bgt lbl_fn_802F8A60_00000D1C
    lwz r5, 0x14f4(r3)
    li r0, 0x0
    li r4, 0x6
    stw r4, 0x58c(r3)
    cmpwi r5, 0x0
    stw r0, 0x14b0(r3)
    stw r0, 0x15cc(r3)
    beq lbl_fn_802F8A60_00000CC0
    lwz r0, 0x68(r5)
    b lbl_fn_802F8A60_00000CC4
lbl_fn_802F8A60_00000CC0:
    li r0, 0x5a
lbl_fn_802F8A60_00000CC4:
    stw r0, 0x15d4(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    addi r3, r31, 0x151c
    li r4, 0xf
    li r5, 0x0
    bl fn_800CB5C8
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0xc8
    li r6, 0x0
    bl fn_80239DAC
    addi r3, r31, 0x151c
    li r4, 0xf
    li r5, 0x0
    bl fn_800CB5C8
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0xc8
    li r6, 0x0
    bl fn_80239DAC
lbl_fn_802F8A60_00000D1C:
    lwz r0, 0x7e0(r31)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_802F8A60_00000D38
    mr r3, r31
    bl fn_802FC188
    b lbl_fn_802F8A60_00000E80
lbl_fn_802F8A60_00000D38:
    lwz r3, 0x8(r30)
    cmpwi r3, 0x0
    beq lbl_fn_802F8A60_00000E80
    lwz r0, 0x4(r3)
    cmpwi r0, 0x1791
    bne lbl_fn_802F8A60_00000E80
    lwz r3, 0x14f4(r31)
    li r0, 0x0
    stw r0, 0x14b0(r31)
    cmpwi r3, 0x0
    stw r0, 0x15cc(r31)
    beq lbl_fn_802F8A60_00000D70
    lwz r0, 0x68(r3)
    b lbl_fn_802F8A60_00000D74
lbl_fn_802F8A60_00000D70:
    li r0, 0x5a
lbl_fn_802F8A60_00000D74:
    stw r0, 0x15d4(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    addi r3, r31, 0x151c
    li r4, 0xf
    li r5, 0x0
    bl fn_800CB5C8
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0xc8
    li r6, 0x0
    bl fn_80239DAC
    li r0, 0xe
    stw r0, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lfs f1, lbl_80884980
    li r30, 0x1
    lfs f0, lbl_80884994
    addi r3, r31, 0xb0
    stw r30, 0x3fc(r31)
    li r4, 0x0
    lfs f2, lbl_808849CC
    li r5, 0x2
    stfs f0, 0x2fc(r31)
    li r6, 0x1
    li r7, 0x1
    li r8, 0x1
    stfs f1, 0x2e8(r31)
    bl fn_80097C08
    mr r3, r31
    li r4, 0xc8
    bl fn_80232B7C
    lfs f0, lbl_80884980
    li r0, -0x1
    lfs f1, lbl_80884994
    addi r4, r31, 0x1600
    stfs f0, 0x30(r1)
    addi r5, r31, 0xb0
    addi r7, r1, 0x3c
    addi r8, r1, 0x30
    stfs f0, 0x34(r1)
    addi r9, r1, 0x20
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x38(r1)
    stfs f0, 0x3c(r1)
    stfs f0, 0x40(r1)
    stfs f0, 0x44(r1)
    stfs f1, 0x20(r1)
    stfs f1, 0x24(r1)
    stfs f1, 0x28(r1)
    stfs f1, 0x2c(r1)
    stw r0, 0x8(r1)
    stw r30, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r30, lbl_8087F048
    mr r4, r31
    addi r3, r1, 0x10
    bl fn_801781B0
    mr r3, r30
    addi r4, r1, 0x10
    li r5, 0x80
    bl fn_80108F38
lbl_fn_802F8A60_00000E80:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_802F8CA4(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    li r0, 0x0
    stw r31, 0x5c(r1)
    mr r31, r3
    stw r30, 0x58(r1)
    mr r30, r5
    stw r29, 0x54(r1)
    mr r29, r4
    lwz r6, 0x14f4(r3)
    stw r0, 0x14b0(r3)
    cmpwi r6, 0x0
    stw r0, 0x15cc(r3)
    beq lbl_fn_802F8CA4_00000EDC
    lwz r0, 0x68(r6)
    b lbl_fn_802F8CA4_00000EE0
lbl_fn_802F8CA4_00000EDC:
    li r0, 0x5a
lbl_fn_802F8CA4_00000EE0:
    stw r0, 0x15d4(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    addi r3, r31, 0x151c
    li r4, 0xf
    li r5, 0x0
    bl fn_800CB5C8
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0xc8
    li r6, 0x0
    bl fn_80239DAC
    li r0, 0xd
    stw r0, 0x58c(r31)
    lfs f1, lbl_80884980
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097CCC
    lfs f0, lbl_80884994
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80884980
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x68
    lfs f2, lbl_808849CC
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f3, 0x8(r29)
    addi r3, r31, 0xb0
    lfs f0, 0x8(r30)
    li r4, 0x0
    lfs f5, 0x4(r29)
    fadds f6, f3, f0
    lfs f4, 0x4(r30)
    lfs f3, 0x0(r29)
    lfs f0, 0x0(r30)
    fadds f4, f5, f4
    stfs f6, 0x10(r1)
    fadds f0, f3, f0
    stfs f4, 0xc(r1)
    stfs f0, 0x8(r1)
    bl fn_80097D7C
    fctiwz f0, f1
    lis r4, 0x4330
    lis r3, lbl_80748760@ha
    lwz r0, 0x5c0(r31)
    stfd f0, 0x30(r1)
    addi r7, r1, 0x14
    lwz r6, 0x34(r1)
    addi r8, r31, 0x154c
    lfd f7, lbl_80748760@l(r3)
    li r3, 0x0
    xoris r5, r6, 0x8000
    stw r4, 0x38(r1)
    lfs f0, lbl_80884994
    clrrwi r0, r0, 1
    stw r5, 0x3c(r1)
    lfs f5, 0x10(r1)
    lfd f3, 0x38(r1)
    lfs f6, 0xc(r1)
    fsubs f8, f3, f7
    lfs f3, 0x530(r31)
    lfs f4, 0x52c(r31)
    fsubs f11, f5, f3
    lfs f3, 0x8(r1)
    fdivs f8, f0, f8
    lfs f0, 0x528(r31)
    stw r6, 0x15dc(r31)
    lfs f5, lbl_808849A8
    stw r4, 0x40(r1)
    stw r4, 0x48(r1)
    fsubs f10, f6, f4
    stw r5, 0x4c(r1)
    fsubs f9, f3, f0
    lfs f3, lbl_80884990
    fmuls f2, f11, f8
    lfd f0, 0x48(r1)
    fmuls f6, f10, f8
    stfs f2, 0x1554(r31)
    fmuls f4, f9, f8
    stfs f6, 0x18(r1)
    stfs f4, 0x14(r1)
    fsubs f4, f0, f7
    psq_l f1, 0x0(r7), 0, 0
    psq_st f1, 0x0(r8), 0, 0
    lwz r4, lbl_8087F0A8
    lfs f0, 0x1550(r31)
    lwz r4, 0x30(r4)
    stfs f9, 0x20(r1)
    mullw r4, r4, r4
    stw r3, 0x15d0(r31)
    stw r0, 0x5c0(r31)
    xoris r3, r4, 0x8000
    stw r3, 0x44(r1)
    lfd f6, 0x40(r1)
    stfs f10, 0x24(r1)
    fsubs f6, f6, f7
    stfs f11, 0x28(r1)
    fdivs f5, f5, f6
    stfs f2, 0x1c(r1)
    fmuls f4, f4, f5
    fnmsubs f0, f3, f4, f0
    stfs f0, 0x1550(r31)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_802F8EBC(void)
{
    nofralloc
    stwu r1, -0x210(r1)
    mflr r0
    stw r0, 0x214(r1)
    stfd f31, 0x200(r1)
    psq_st f31, 0x208(r1), 0, 0
    stfd f30, 0x1f0(r1)
    psq_st f30, 0x1f8(r1), 0, 0
    lfs f30, lbl_80884994
    stfd f29, 0x1e0(r1)
    psq_st f29, 0x1e8(r1), 0, 0
    stfd f28, 0x1d0(r1)
    psq_st f28, 0x1d8(r1), 0, 0
    lfs f28, lbl_80884980
    stw r31, 0x1cc(r1)
    stw r30, 0x1c8(r1)
    stw r29, 0x1c4(r1)
    mr r29, r3
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 16, 16
    cmplwi r0, 0x8000
    bne lbl_fn_802F8EBC_0000110C
    lfs f0, lbl_80884990
    fmuls f30, f30, f0
lbl_fn_802F8EBC_0000110C:
    addi r3, r3, 0x7d4
    bl fn_8012DB04
    lwz r0, 0x55c(r29)
    fmuls f30, f30, f1
    cmpwi r0, 0x7
    bne lbl_fn_802F8EBC_00001568
    addi r3, r29, 0x1030
    bl fn_80126214
    addi r4, r29, 0x1088
    addi r31, r1, 0xbc
    psq_l f1, 0x0(r4), 0, 0
    mr r3, r31
    lfs f2, 0x1090(r29)
    stfs f2, 0xc4(r1)
    psq_st f1, 0x0(r31), 0, 0
    bl fn_805F9940
    lfs f0, lbl_808849D0
    fmr f31, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_802F8EBC_00001334
    addi r30, r1, 0xa4
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0xc4(r1)
    mr r3, r30
    psq_st f1, 0x0(r30), 0, 0
    mr r4, r30
    stfs f2, 0xac(r1)
    bl fn_805F98D0
    lfs f2, 0xac(r1)
    addi r31, r1, 0xb0
    psq_l f1, 0x0(r30), 0, 0
    fabs f3, f2
    lfs f0, lbl_80884998
    psq_st f1, 0x0(r31), 0, 0
    frsp f3, f3
    stfs f2, 0xb8(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_802F8EBC_000011C8
    lfs f3, 0xb0(r1)
    lfs f0, lbl_80884980
    fcmpo cr0, f3, f0
    ble lbl_fn_802F8EBC_000011BC
    lfs f0, lbl_808849D4
    b lbl_fn_802F8EBC_000011C0
lbl_fn_802F8EBC_000011BC:
    lfs f0, lbl_808849D8
lbl_fn_802F8EBC_000011C0:
    stfs f0, 0x90(r1)
    b lbl_fn_802F8EBC_000011DC
lbl_fn_802F8EBC_000011C8:
    frsp f2, f2
    lfs f1, 0xb0(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x90(r1)
lbl_fn_802F8EBC_000011DC:
    lfs f0, 0x90(r1)
    addi r3, r1, 0x148
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80884980
    addi r4, r1, 0x80
    lfs f28, 0x150(r1)
    mr r5, r4
    lfs f29, 0x14c(r1)
    addi r3, r1, 0x178
    lfs f13, 0x148(r1)
    lfs f12, 0x160(r1)
    lfs f11, 0x15c(r1)
    lfs f10, 0x158(r1)
    lfs f9, 0x170(r1)
    lfs f8, 0x16c(r1)
    lfs f7, 0x168(r1)
    lfs f6, 0x174(r1)
    lfs f5, 0x164(r1)
    lfs f4, 0x154(r1)
    lfs f0, lbl_80884994
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0xb8(r1)
    stfs f3, 0x1a8(r1)
    stfs f3, 0x1ac(r1)
    stfs f3, 0x1b0(r1)
    stfs f0, 0x1b4(r1)
    stfs f13, 0x50(r1)
    stfs f29, 0x54(r1)
    stfs f28, 0x58(r1)
    stfs f13, 0x178(r1)
    stfs f29, 0x17c(r1)
    stfs f28, 0x180(r1)
    stfs f10, 0x5c(r1)
    stfs f11, 0x60(r1)
    stfs f12, 0x64(r1)
    stfs f10, 0x188(r1)
    stfs f11, 0x18c(r1)
    stfs f12, 0x190(r1)
    stfs f7, 0x68(r1)
    stfs f8, 0x6c(r1)
    stfs f9, 0x70(r1)
    stfs f7, 0x198(r1)
    stfs f8, 0x19c(r1)
    stfs f9, 0x1a0(r1)
    stfs f4, 0x74(r1)
    stfs f5, 0x78(r1)
    stfs f6, 0x7c(r1)
    stfs f4, 0x184(r1)
    stfs f5, 0x194(r1)
    stfs f6, 0x1a4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x88(r1)
    bl fn_805F9750
    lfs f2, 0x88(r1)
    lfs f0, lbl_80884998
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802F8EBC_000012F8
    lfs f3, 0x84(r1)
    lfs f0, lbl_80884980
    fcmpo cr0, f3, f0
    ble lbl_fn_802F8EBC_000012E8
    lfs f0, lbl_808849D4
    b lbl_fn_802F8EBC_000012EC
lbl_fn_802F8EBC_000012E8:
    lfs f0, lbl_808849D8
lbl_fn_802F8EBC_000012EC:
    fneg f0, f0
    stfs f0, 0x8c(r1)
    b lbl_fn_802F8EBC_0000130C
lbl_fn_802F8EBC_000012F8:
    lfs f1, 0x84(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x8c(r1)
lbl_fn_802F8EBC_0000130C:
    lfs f2, lbl_80884980
    addi r3, r1, 0x8c
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0xc8
    stfs f2, 0x94(r1)
    stfs f2, 0xb8(r1)
    frsp f2, f2
    psq_st f1, 0x0(r31), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0xd0(r1)
lbl_fn_802F8EBC_00001334:
    lwz r6, 0x15bc(r29)
    addi r30, r1, 0xbc
    lfs f4, 0x52c(r29)
    addi r5, r1, 0x98
    lfs f5, 0x52c(r6)
    mr r3, r30
    lfs f3, 0x528(r6)
    mr r4, r30
    fsubs f5, f5, f4
    lfs f0, 0x528(r29)
    lfs f4, 0x530(r6)
    fsubs f3, f3, f0
    stfs f5, 0x9c(r1)
    lfs f0, 0x530(r29)
    stfs f3, 0x98(r1)
    fsubs f2, f4, f0
    lfs f0, lbl_80884980
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0xa0(r1)
    stfs f2, 0xc4(r1)
    stfs f0, 0xc0(r1)
    bl fn_805F98D0
    lfs f2, 0xc4(r1)
    lfs f0, lbl_80884998
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802F8EBC_000013CC
    lfs f3, 0xbc(r1)
    lfs f0, lbl_80884980
    fcmpo cr0, f3, f0
    ble lbl_fn_802F8EBC_000013C0
    lfs f0, lbl_808849D4
    b lbl_fn_802F8EBC_000013C4
lbl_fn_802F8EBC_000013C0:
    lfs f0, lbl_808849D8
lbl_fn_802F8EBC_000013C4:
    stfs f0, 0xc(r1)
    b lbl_fn_802F8EBC_000013DC
lbl_fn_802F8EBC_000013CC:
    lfs f1, 0xbc(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0xc(r1)
lbl_fn_802F8EBC_000013DC:
    lfs f0, 0xc(r1)
    addi r3, r1, 0x118
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80884980
    addi r4, r1, 0x14
    lfs f4, 0x120(r1)
    mr r5, r4
    lfs f5, 0x11c(r1)
    addi r3, r1, 0xd8
    lfs f6, 0x118(r1)
    lfs f7, 0x130(r1)
    lfs f8, 0x12c(r1)
    lfs f9, 0x128(r1)
    lfs f10, 0x140(r1)
    lfs f11, 0x13c(r1)
    lfs f12, 0x138(r1)
    lfs f13, 0x144(r1)
    lfs f28, 0x134(r1)
    lfs f29, 0x124(r1)
    lfs f0, lbl_80884994
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0xc4(r1)
    stfs f3, 0x108(r1)
    stfs f3, 0x10c(r1)
    stfs f3, 0x110(r1)
    stfs f0, 0x114(r1)
    stfs f6, 0x44(r1)
    stfs f5, 0x48(r1)
    stfs f4, 0x4c(r1)
    stfs f6, 0xd8(r1)
    stfs f5, 0xdc(r1)
    stfs f4, 0xe0(r1)
    stfs f9, 0x38(r1)
    stfs f8, 0x3c(r1)
    stfs f7, 0x40(r1)
    stfs f9, 0xe8(r1)
    stfs f8, 0xec(r1)
    stfs f7, 0xf0(r1)
    stfs f12, 0x2c(r1)
    stfs f11, 0x30(r1)
    stfs f10, 0x34(r1)
    stfs f12, 0xf8(r1)
    stfs f11, 0xfc(r1)
    stfs f10, 0x100(r1)
    stfs f29, 0x20(r1)
    stfs f28, 0x24(r1)
    stfs f13, 0x28(r1)
    stfs f29, 0xe4(r1)
    stfs f28, 0xf4(r1)
    stfs f13, 0x104(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x1c(r1)
    bl fn_805F9750
    lfs f2, 0x1c(r1)
    lfs f0, lbl_80884998
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802F8EBC_000014F8
    lfs f3, 0x18(r1)
    lfs f0, lbl_80884980
    fcmpo cr0, f3, f0
    ble lbl_fn_802F8EBC_000014E8
    lfs f0, lbl_808849D4
    b lbl_fn_802F8EBC_000014EC
lbl_fn_802F8EBC_000014E8:
    lfs f0, lbl_808849D8
lbl_fn_802F8EBC_000014EC:
    fneg f0, f0
    stfs f0, 0x8(r1)
    b lbl_fn_802F8EBC_0000150C
lbl_fn_802F8EBC_000014F8:
    lfs f1, 0x18(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x8(r1)
lbl_fn_802F8EBC_0000150C:
    addi r3, r1, 0x8
    lfs f2, lbl_80884980
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0xc4(r1)
    lfs f0, 0xc0(r1)
    lwz r0, 0x58c(r29)
    stfs f2, 0x10(r1)
    cmpwi r0, 0xc
    stfs f0, 0x538(r29)
    bne lbl_fn_802F8EBC_00001540
    lfs f0, 0x1598(r29)
    fmuls f30, f30, f0
lbl_fn_802F8EBC_00001540:
    addi r3, r29, 0x7d4
    bl fn_8012DB04
    fmuls f30, f30, f1
    lfs f0, 0x568(r29)
    fmr f1, f31
    mr r3, r29
    addi r4, r1, 0xc8
    fmuls f2, f0, f30
    bl fn_801426A4
    b lbl_fn_802F8EBC_000015A8
lbl_fn_802F8EBC_00001568:
    cmpwi r0, 0x6
    bne lbl_fn_802F8EBC_0000157C
    mr r3, r29
    bl fn_8013A258
    b lbl_fn_802F8EBC_000015A8
lbl_fn_802F8EBC_0000157C:
    psq_l f1, 0x534(r29), 0, 0
    addi r4, r1, 0xc8
    lfs f2, 0x53c(r29)
    mr r3, r29
    stfs f2, 0xd0(r1)
    li r5, 0x0
    psq_st f1, 0x0(r4), 0, 0
    fmr f1, f28
    lfs f0, 0x568(r29)
    fmuls f2, f0, f30
    bl fn_8013CB68
lbl_fn_802F8EBC_000015A8:
    lwz r0, 0x214(r1)
    psq_l f31, 0x208(r1), 0, 0
    lfd f31, 0x200(r1)
    psq_l f30, 0x1f8(r1), 0, 0
    lfd f30, 0x1f0(r1)
    psq_l f29, 0x1e8(r1), 0, 0
    lfd f29, 0x1e0(r1)
    psq_l f28, 0x1d8(r1), 0, 0
    lfd f28, 0x1d0(r1)
    lwz r31, 0x1cc(r1)
    lwz r30, 0x1c8(r1)
    lwz r29, 0x1c4(r1)
    mtlr r0
    addi r1, r1, 0x210
    blr
}

asm void fn_802F93F0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    stw r31, 0x2c(r1)
    mr r31, r3
    lwz r0, 0x15b0(r3)
    lwz r4, 0x15d4(r3)
    cmpwi r0, 0x0
    subi r0, r4, 0x1
    stw r0, 0x15d4(r3)
    beq lbl_fn_802F93F0_0000166C
    lwz r5, 0x940(r3)
    lis r0, 0x4330
    stw r0, 0x20(r1)
    lis r4, lbl_80748760@ha
    xoris r0, r5, 0x8000
    lfd f3, lbl_80748760@l(r4)
    stw r0, 0x24(r1)
    lfs f1, 0x7d8(r3)
    lfd f2, 0x20(r1)
    lfs f0, 0x1594(r3)
    fsubs f2, f2, f3
    fdivs f1, f1, f2
    fcmpo cr0, f1, f0
    bge lbl_fn_802F93F0_0000166C
    lwz r4, 0x15bc(r3)
    cmpwi r4, 0x0
    beq lbl_fn_802F93F0_0000166C
    lwz r0, 0x12a4(r4)
    extrwi. r0, r0, 1, 3
    bne lbl_fn_802F93F0_0000166C
    bl fn_802FC2E0
lbl_fn_802F93F0_0000166C:
    lwz r3, 0x15bc(r31)
    lwz r0, 0xd20(r31)
    cmplw r3, r0
    beq lbl_fn_802F93F0_000016BC
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lwz r3, 0x14f4(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802F93F0_0000169C
    lwz r0, 0x68(r3)
    b lbl_fn_802F93F0_000016A0
lbl_fn_802F93F0_0000169C:
    li r0, 0x5a
lbl_fn_802F93F0_000016A0:
    stw r0, 0x15d4(r31)
    mr r3, r31
    lwz r4, 0x15bc(r31)
    li r5, 0x6
    bl fn_802FBE00
    cmpwi r3, 0x0
    bne lbl_fn_802F93F0_00001990
lbl_fn_802F93F0_000016BC:
    lwz r3, 0x15bc(r31)
    lfs f0, 0x530(r31)
    lfs f2, 0x530(r3)
    lfs f1, 0x528(r3)
    fsubs f3, f2, f0
    lfs f0, 0x528(r31)
    lfs f2, 0x52c(r3)
    fsubs f4, f1, f0
    lfs f1, 0x52c(r31)
    fmuls f0, f3, f3
    fsubs f2, f2, f1
    stfs f4, 0x14(r1)
    fmadds f1, f4, f4, f0
    stfs f2, 0x18(r1)
    stfs f3, 0x1c(r1)
    bl fn_8068B100
    lwz r0, 0x15d4(r31)
    frsp f31, f1
    cmpwi r0, 0x0
    bge lbl_fn_802F93F0_00001770
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lfs f0, 0x14f0(r31)
    fcmpo cr0, f31, f0
    cror eq, lt, eq
    bne lbl_fn_802F93F0_00001750
    lwz r4, 0x15bc(r31)
    mr r3, r31
    li r5, 0x8
    bl fn_802FBE00
    cmpwi r3, 0x0
    bne lbl_fn_802F93F0_00001990
    lwz r4, 0x15bc(r31)
    mr r3, r31
    bl fn_802FBA30
    b lbl_fn_802F93F0_00001990
lbl_fn_802F93F0_00001750:
    lwz r3, 0x14f4(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802F93F0_00001764
    lwz r0, 0x68(r3)
    b lbl_fn_802F93F0_00001768
lbl_fn_802F93F0_00001764:
    li r0, 0x5a
lbl_fn_802F93F0_00001768:
    stw r0, 0x15d4(r31)
    b lbl_fn_802F93F0_00001990
lbl_fn_802F93F0_00001770:
    lfs f2, lbl_80884980
    addi r5, r31, 0x528
    lfs f0, lbl_808849DC
    addi r6, r1, 0x8
    stfs f2, 0x8(r1)
    li r4, 0x0
    lwz r3, lbl_8087EE98
    lis r7, 0x8000
    stfs f0, 0xc(r1)
    li r8, 0x0
    lfs f1, lbl_808849E0
    li r9, 0x0
    stfs f2, 0x10(r1)
    bl fn_8004D314
    cmpwi r3, 0x0
    beq lbl_fn_802F93F0_00001990
    lwz r3, 0x1530(r31)
    lfs f0, lbl_80884978
    cmpwi r3, 0x0
    beq lbl_fn_802F93F0_000017C4
    lfs f0, 0x40(r3)
lbl_fn_802F93F0_000017C4:
    fcmpo cr0, f31, f0
    bge lbl_fn_802F93F0_000018B8
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lwz r4, 0x15bc(r31)
    mr r3, r31
    li r5, 0xb
    bl fn_802FBE00
    cmpwi r3, 0x0
    bne lbl_fn_802F93F0_00001990
    lwz r3, 0x14f4(r31)
    li r0, 0x0
    stw r0, 0x14b0(r31)
    cmpwi r3, 0x0
    stw r0, 0x15cc(r31)
    beq lbl_fn_802F93F0_00001810
    lwz r0, 0x68(r3)
    b lbl_fn_802F93F0_00001814
lbl_fn_802F93F0_00001810:
    li r0, 0x5a
lbl_fn_802F93F0_00001814:
    stw r0, 0x15d4(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    addi r3, r31, 0x151c
    li r4, 0xf
    li r5, 0x0
    bl fn_800CB5C8
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0xc8
    li r6, 0x0
    bl fn_80239DAC
    li r0, 0xb
    stw r0, 0x58c(r31)
    lfs f1, lbl_80884980
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097CCC
    lfs f0, lbl_80884994
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80884980
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x14
    lfs f2, lbl_808849CC
    li r6, 0x1
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r3, 0x1530(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802F93F0_000018AC
    lwz r0, 0x68(r3)
    b lbl_fn_802F93F0_000018B0
lbl_fn_802F93F0_000018AC:
    li r0, 0x3c
lbl_fn_802F93F0_000018B0:
    stw r0, 0x15d0(r31)
    b lbl_fn_802F93F0_00001990
lbl_fn_802F93F0_000018B8:
    lfs f0, 0x152c(r31)
    fcmpo cr0, f31, f0
    bge lbl_fn_802F93F0_00001990
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lwz r4, 0x15bc(r31)
    mr r3, r31
    li r5, 0xa
    bl fn_802FBE00
    cmpwi r3, 0x0
    bne lbl_fn_802F93F0_00001990
    lwz r3, 0x14f4(r31)
    li r0, 0x0
    stw r0, 0x14b0(r31)
    cmpwi r3, 0x0
    stw r0, 0x15cc(r31)
    beq lbl_fn_802F93F0_00001908
    lwz r0, 0x68(r3)
    b lbl_fn_802F93F0_0000190C
lbl_fn_802F93F0_00001908:
    li r0, 0x5a
lbl_fn_802F93F0_0000190C:
    stw r0, 0x15d4(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    addi r3, r31, 0x151c
    li r4, 0xf
    li r5, 0x0
    bl fn_800CB5C8
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0xc8
    li r6, 0x0
    bl fn_80239DAC
    li r0, 0xa
    stw r0, 0x58c(r31)
    lfs f1, lbl_80884980
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097CCC
    lfs f0, lbl_80884994
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80884980
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x14
    lfs f2, lbl_808849CC
    li r6, 0x1
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
lbl_fn_802F93F0_00001990:
    lwz r0, 0x44(r1)
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}
