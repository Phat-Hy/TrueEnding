#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void fn_80094958(void);
extern void fn_80094B6C(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800F8C6C(void);
extern void fn_80103F60(void);
extern void fn_80108378(void);
extern void fn_80133130(void);
extern void fn_80133EE8(void);
extern void fn_80139560(void);
extern void fn_80145334(void);
extern void fn_80149A30(void);
extern void fn_8014C540(void);
extern void fn_80151448(void);
extern void fn_8015E4B0(void);
extern void fn_8016DA4C(void);
extern void fn_8016E970(void);
extern void fn_80170A20(void);
extern void fn_80232B7C(void);
extern void fn_80239DAC(void);
extern void fn_8023A680(void);
extern void fn_8023A8B4(void);
extern void fn_8024D120(void);
extern void fn_8024E7E4(void);
extern void fn_8024ED68(void);
extern void fn_8024F1DC(void);
extern void fn_8024FCDC(void);
extern void fn_8024FE18(void);
extern void fn_80370174(void);
extern void fn_80370A78(void);
extern void fn_80370AE4(void);
extern void fn_803E6850(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_805F9990(void);
extern void fn_8068A850(void);
extern void fn_8068AD58(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);

/* External data declarations */
extern u8 jumptable_807841D8[];
extern u8 lbl_80743540[];
extern u8 lbl_807435A0[];
extern u8 lbl_807435D8[];
extern u8 lbl_8074367C[];

/* Small data declarations */
extern u32 lbl_8087EFA8;
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F408;
extern u32 lbl_8087F430;
extern u32 lbl_8087F490;
extern u32 lbl_8087F8A0;
extern u32 lbl_80883268;
extern u32 lbl_8088326C;
extern u32 lbl_80883280;
extern u32 lbl_80883284;
extern u32 lbl_80883288;
extern u32 lbl_8088328C;
extern u32 lbl_80883290;
extern u32 lbl_80883294;
extern u32 lbl_80883298;
extern u32 lbl_8088329C;
extern u32 lbl_808832A0;
extern u32 lbl_808832A4;
extern u32 lbl_808832A8;
extern u32 lbl_808832AC;
extern u32 lbl_808832B0;
extern u32 lbl_808832B4;
extern u32 lbl_808832B8;
extern u32 lbl_808832BC;
extern u32 lbl_808832C0;
extern u32 lbl_808832C4;
extern u32 lbl_808832C8;
extern u32 lbl_808832CC;
extern u32 lbl_808832D0;
extern u32 lbl_808832D4;
extern u32 lbl_808832D8;
extern u32 lbl_808832DC;
extern u32 lbl_808832E0;
extern u32 lbl_808832E4;
extern u32 lbl_808832E8;
extern u32 lbl_808832EC;

/* Function declarations */
void fn_8024B4F0(void);
void fn_8024BE90(void);
void fn_8024BE94(void);
void fn_8024C468(void);
void fn_8024C46C(void);
void fn_8024CC78(void);
void fn_8024CD24(void);

asm void fn_8024B4F0(void)
{
    nofralloc
    stwu r1, -0x1a0(r1)
    mflr r0
    stw r0, 0x1a4(r1)
    stfd f31, 0x190(r1)
    psq_st f31, 0x198(r1), 0, 0
    stfd f30, 0x180(r1)
    psq_st f30, 0x188(r1), 0, 0
    stw r31, 0x17c(r1)
    mr r31, r3
    mr r4, r31
    stw r30, 0x178(r1)
    stw r29, 0x174(r1)
    lwz r3, lbl_8087F048
    bl fn_80103F60
    cmpwi r3, 0x0
    mr r29, r3
    beq lbl_fn_8024B4F0_00000080
    lwz r3, lbl_8087F408
    lfs f31, lbl_80883268
    lwz r30, 0x48(r3)
    b lbl_fn_8024B4F0_00000078
lbl_fn_8024B4F0_00000054:
    mr r3, r29
    mr r4, r30
    bl fn_80108378
    cmpwi r3, 0x0
    blt lbl_fn_8024B4F0_00000074
    slwi r0, r3, 2
    add r3, r29, r0
    stfs f31, 0x128(r3)
lbl_fn_8024B4F0_00000074:
    lwz r30, 0x14ac(r30)
lbl_fn_8024B4F0_00000078:
    cmpwi r30, 0x0
    bne lbl_fn_8024B4F0_00000054
lbl_fn_8024B4F0_00000080:
    lwz r0, 0x14dc(r31)
    li r4, 0x0
    lwz r3, 0xd1c(r31)
    cmpwi r0, 0x0
    stw r4, 0x14b4(r31)
    stw r3, 0xd20(r31)
    beq lbl_fn_8024B4F0_000000A8
    stw r4, 0x1454(r31)
    stw r0, 0x14b0(r31)
    b lbl_fn_8024B4F0_000000B4
lbl_fn_8024B4F0_000000A8:
    li r0, 0x1
    stw r0, 0x1454(r31)
    stw r3, 0x14b0(r31)
lbl_fn_8024B4F0_000000B4:
    lwz r0, 0x14b0(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8024B4F0_000000CC
    lwz r3, lbl_8087F8A0
    lwz r0, 0x48(r3)
    stw r0, 0x14b0(r31)
lbl_fn_8024B4F0_000000CC:
    lwz r3, 0x14b0(r31)
    lwz r0, 0xd20(r31)
    stw r3, 0xd1c(r31)
    cmplw r0, r3
    beq lbl_fn_8024B4F0_000000E8
    li r0, 0x1
    stw r0, 0x14b4(r31)
lbl_fn_8024B4F0_000000E8:
    lwz r0, 0x16c4(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8024B4F0_00000200
    lwz r4, 0x16cc(r31)
    cmpwi r4, 0x0
    blt lbl_fn_8024B4F0_00000200
    lwz r3, lbl_8087F430
    bl fn_80370174
    cmpwi r3, 0x1
    bne lbl_fn_8024B4F0_00000200
    lwz r0, 0x7e0(r31)
    li r30, 0x1
    stw r30, 0x16c4(r31)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_8024B4F0_00000140
    mr r3, r31
    bl fn_8024FCDC
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    b lbl_fn_8024B4F0_00000200
lbl_fn_8024B4F0_00000140:
    lwz r0, 0x1624(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8024B4F0_000001CC
    lwz r3, lbl_8087F3C0
    addi r4, r31, 0x1504
    li r5, 0x0
    li r6, 0x0
    bl fn_80239DAC
    addi r3, r31, 0x1504
    li r4, 0x0
    bl fn_80232B7C
    lfs f0, lbl_80883268
    li r0, -0x1
    lfs f1, lbl_8088326C
    addi r4, r31, 0x1504
    stfs f0, 0xdc(r1)
    addi r5, r31, 0xb0
    lwz r3, lbl_8087F3C0
    addi r7, r1, 0xd0
    stfs f0, 0xe0(r1)
    addi r8, r1, 0xdc
    addi r9, r1, 0xe8
    li r6, 0x0
    stfs f0, 0xe4(r1)
    li r10, -0x1
    stfs f0, 0xd0(r1)
    stfs f0, 0xd4(r1)
    stfs f0, 0xd8(r1)
    stfs f1, 0xe8(r1)
    stfs f1, 0xec(r1)
    stfs f1, 0xf0(r1)
    stfs f1, 0xf4(r1)
    stw r0, 0x8(r1)
    stw r30, 0xc(r1)
    bl fn_8023A8B4
lbl_fn_8024B4F0_000001CC:
    mr r3, r31
    bl fn_8016DA4C
    li r30, 0x0
    stw r30, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    stw r30, 0x14b8(r31)
    mr r3, r31
    li r4, 0x3
    stw r30, 0x14bc(r31)
    stw r30, 0x14dc(r31)
    bl fn_8016E970
lbl_fn_8024B4F0_00000200:
    lwz r0, 0xd18(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8024B4F0_00000224
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8024B4F0_0000095C
    cmpwi r0, 0x2
    beq lbl_fn_8024B4F0_0000095C
    b lbl_fn_8024B4F0_00000974
lbl_fn_8024B4F0_00000224:
    lwz r0, 0x1624(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8024B4F0_00000254
    lwz r0, 0x14c0(r31)
    mr r4, r31
    lwz r3, lbl_8087F490
    li r7, 0x0
    slwi r0, r0, 2
    lwz r5, 0x1624(r31)
    add r6, r31, r0
    lwz r6, 0x1628(r6)
    bl fn_803E6850
lbl_fn_8024B4F0_00000254:
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x2
    bne lbl_fn_8024B4F0_0000026C
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
lbl_fn_8024B4F0_0000026C:
    lwz r0, 0x1624(r31)
    lwz r3, 0x14bc(r31)
    cntlzw r0, r0
    srwi. r0, r0, 5
    addi r0, r3, 0x1
    stw r0, 0x14bc(r31)
    beq lbl_fn_8024B4F0_00000298
    lwz r3, 0x1670(r31)
    addi r0, r3, 0x1
    stw r0, 0x1670(r31)
    b lbl_fn_8024B4F0_000002A0
lbl_fn_8024B4F0_00000298:
    li r0, 0x0
    stw r0, 0x1670(r31)
lbl_fn_8024B4F0_000002A0:
    lwz r0, 0x58c(r31)
    cmplwi r0, 0xc
    bgt lbl_fn_8024B4F0_000006EC
    lis r3, jumptable_807841D8@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_807841D8@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lfs f4, 0x2e4(r31)
    lfs f3, lbl_80883280
    fcmpo cr0, f4, f3
    cror eq, gt, eq
    bne lbl_fn_8024B4F0_0000035C
    lfs f0, lbl_80883284
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_8024B4F0_0000035C
    fsubs f5, f4, f3
    lfs f4, lbl_8088328C
    lis r3, lbl_80743540@ha
    lfs f3, lbl_80883288
    lfs f0, lbl_80883290
    fdivs f4, f5, f4
    lfd f2, lbl_80743540@l(r3)
    fmsubs f1, f3, f4, f0
    bl fn_8068AEA8
    frsp f1, f1
    lfs f0, lbl_80883294
    fcmpo cr0, f1, f0
    ble lbl_fn_8024B4F0_00000324
    lfs f0, lbl_80883288
    fsubs f1, f1, f0
lbl_fn_8024B4F0_00000324:
    lfs f0, lbl_80883298
    fcmpo cr0, f1, f0
    bge lbl_fn_8024B4F0_00000338
    lfs f0, lbl_80883288
    fadds f1, f1, f0
lbl_fn_8024B4F0_00000338:
    lwz r3, lbl_8087F048
    mr r6, r31
    lwz r7, 0x14c8(r31)
    li r4, 0x0
    lwz r8, 0x590(r31)
    li r5, 0x0
    li r9, 0x1e
    li r10, -0x1
    bl fn_800F8C6C
lbl_fn_8024B4F0_0000035C:
    lfs f30, 0x2e4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f30, f1
    cror eq, gt, eq
    bne lbl_fn_8024B4F0_0000095C
    li r30, 0x0
    stw r30, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    stw r30, 0x14b8(r31)
    stw r30, 0x14bc(r31)
    stw r30, 0x14dc(r31)
    b lbl_fn_8024B4F0_0000095C
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0xec(r12)
    mtctr r12
    bctrl
    b lbl_fn_8024B4F0_0000095C
    mr r3, r31
    bl fn_8024E7E4
    b lbl_fn_8024B4F0_0000095C
    mr r3, r31
    bl fn_8024ED68
    b lbl_fn_8024B4F0_0000095C
    mr r3, r31
    bl fn_8024F1DC
    b lbl_fn_8024B4F0_0000095C
    lfs f30, 0x2e4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f30, f1
    cror eq, gt, eq
    bne lbl_fn_8024B4F0_000004FC
    addi r3, r31, 0x1504
    li r4, 0x0
    bl fn_80232B7C
    lfs f0, lbl_80883268
    li r11, -0x1
    lfs f1, lbl_8088326C
    li r0, 0x1
    stfs f0, 0xa0(r1)
    addi r4, r31, 0x1504
    lwz r3, lbl_8087F3C0
    addi r5, r31, 0xb0
    stfs f0, 0xa4(r1)
    addi r7, r1, 0xac
    addi r8, r1, 0xa0
    addi r9, r1, 0x90
    stfs f0, 0xa8(r1)
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0xac(r1)
    stfs f0, 0xb0(r1)
    stfs f0, 0xb4(r1)
    stfs f1, 0x90(r1)
    stfs f1, 0x94(r1)
    stfs f1, 0x98(r1)
    stfs f1, 0x9c(r1)
    stw r11, 0x8(r1)
    stw r0, 0xc(r1)
    bl fn_8023A8B4
    li r30, 0x0
    stw r30, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lwz r0, 0x12a4(r31)
    stw r30, 0x14b8(r31)
    extrwi r0, r0, 1, 9
    cmplwi r0, 0x1
    stw r30, 0x14bc(r31)
    stw r30, 0x14dc(r31)
    bne lbl_fn_8024B4F0_000004CC
    lwz r0, 0x1640(r31)
    cmpwi r0, 0x2
    blt lbl_fn_8024B4F0_000004CC
    lwz r4, 0x16d0(r31)
    cmpwi r4, 0x0
    blt lbl_fn_8024B4F0_000004CC
    lwz r3, lbl_8087F430
    bl fn_80370A78
    cmpwi r3, 0x0
    bne lbl_fn_8024B4F0_000004CC
    lwz r3, lbl_8087F430
    li r5, 0x1
    lwz r4, 0x16d0(r31)
    bl fn_80370AE4
lbl_fn_8024B4F0_000004CC:
    lis r4, lbl_8074367C@ha
    lfs f1, lbl_8088326C
    addi r4, r4, lbl_8074367C@l
    addi r3, r1, 0x10
    addi r4, r4, 0x2c9
    addi r5, r31, 0x528
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_8024B4F0_000004FC:
    lfs f4, 0x2e4(r31)
    lfs f3, lbl_8088329C
    lfs f0, lbl_808832A0
    fsubs f3, f4, f3
    lfs f4, lbl_80883268
    fdivs f0, f3, f0
    fcmpo cr0, f4, f0
    ble lbl_fn_8024B4F0_00000520
    b lbl_fn_8024B4F0_00000524
lbl_fn_8024B4F0_00000520:
    fmr f4, f0
lbl_fn_8024B4F0_00000524:
    lfs f9, lbl_8088326C
    fcmpo cr0, f9, f4
    bge lbl_fn_8024B4F0_00000534
    b lbl_fn_8024B4F0_0000055C
lbl_fn_8024B4F0_00000534:
    lfs f4, 0x2e4(r31)
    lfs f3, lbl_8088329C
    lfs f0, lbl_808832A0
    fsubs f3, f4, f3
    lfs f9, lbl_80883268
    fdivs f0, f3, f0
    fcmpo cr0, f9, f0
    ble lbl_fn_8024B4F0_00000558
    b lbl_fn_8024B4F0_0000055C
lbl_fn_8024B4F0_00000558:
    fmr f9, f0
lbl_fn_8024B4F0_0000055C:
    lfs f3, 0x15fc(r31)
    frsp f10, f9
    lfs f5, 0x1608(r31)
    addi r3, r1, 0x80
    lfs f0, 0x15f8(r31)
    fsubs f6, f3, f5
    lfs f4, 0x1604(r31)
    lfs f3, 0x15f4(r31)
    fsubs f7, f0, f4
    lfs f0, 0x1600(r31)
    fmuls f8, f6, f10
    fsubs f3, f3, f0
    stfs f9, 0x160c(r31)
    fmuls f9, f7, f10
    stfs f3, 0xb8(r1)
    fadds f2, f8, f5
    fmuls f3, f3, f10
    fadds f4, f9, f4
    stfs f7, 0xbc(r1)
    fadds f0, f3, f0
    stfs f4, 0x84(r1)
    stfs f0, 0x80(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f6, 0xc0(r1)
    stfs f3, 0xc4(r1)
    stfs f9, 0xc8(r1)
    stfs f8, 0xcc(r1)
    stfs f2, 0x88(r1)
    psq_st f1, 0x528(r31), 0, 0
    stfs f2, 0x530(r31)
    b lbl_fn_8024B4F0_0000095C
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x6
    beq lbl_fn_8024B4F0_0000068C
    cmpwi r0, 0x7
    bne lbl_fn_8024B4F0_0000066C
    lfs f3, 0x15fc(r31)
    addi r3, r1, 0x74
    lfs f0, 0x530(r31)
    lfs f5, 0x15f8(r31)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r31)
    lfs f3, 0x15f4(r31)
    lfs f0, 0x528(r31)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x78(r1)
    stfs f0, 0x74(r1)
    stfs f6, 0x7c(r1)
    bl fn_805F9940
    lfs f0, lbl_808832A4
    fcmpo cr0, f1, f0
    blt lbl_fn_8024B4F0_0000063C
    lwz r0, 0x14bc(r31)
    cmpwi r0, 0x258
    ble lbl_fn_8024B4F0_0000068C
lbl_fn_8024B4F0_0000063C:
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    li r30, 0x0
    stw r30, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    stw r30, 0x14b8(r31)
    stw r30, 0x14bc(r31)
    stw r30, 0x14dc(r31)
    b lbl_fn_8024B4F0_0000068C
lbl_fn_8024B4F0_0000066C:
    li r30, 0x0
    stw r30, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    stw r30, 0x14b8(r31)
    stw r30, 0x14bc(r31)
    stw r30, 0x14dc(r31)
lbl_fn_8024B4F0_0000068C:
    lwz r0, 0x12a4(r31)
    mr r3, r31
    ori r0, r0, 0x10
    stw r0, 0x12a4(r31)
    bl fn_80139560
    b lbl_fn_8024B4F0_0000095C
    lwz r3, 0x55c(r31)
    subi r0, r3, 0x6
    cmplwi r0, 0x1
    ble lbl_fn_8024B4F0_000006D4
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lwz r4, 0x14b0(r31)
    mr r3, r31
    lfs f1, lbl_808832A8
    li r5, 0x0
    bl fn_80170A20
lbl_fn_8024B4F0_000006D4:
    lwz r0, 0x12a4(r31)
    mr r3, r31
    ori r0, r0, 0x10
    stw r0, 0x12a4(r31)
    bl fn_80139560
    b lbl_fn_8024B4F0_0000095C
lbl_fn_8024B4F0_000006EC:
    lwz r3, 0x55c(r31)
    subi r0, r3, 0x6
    cmplwi r0, 0x1
    ble lbl_fn_8024B4F0_00000940
    lwz r4, 0x14b0(r31)
    cmpwi r4, 0x0
    beq lbl_fn_8024B4F0_00000940
    lfs f3, 0x530(r4)
    addi r3, r1, 0x14
    lfs f0, 0x530(r31)
    addi r29, r1, 0x20
    lfs f5, 0x52c(r4)
    fsubs f2, f3, f0
    lfs f4, 0x52c(r31)
    lfs f3, 0x528(r4)
    fsubs f5, f5, f4
    lfs f0, 0x528(r31)
    stfs f2, 0x1c(r1)
    fsubs f4, f3, f0
    lfs f0, lbl_808832AC
    frsp f3, f2
    stfs f4, 0x14(r1)
    fabs f4, f3
    stfs f5, 0x18(r1)
    psq_l f1, 0x0(r3), 0, 0
    frsp f4, f4
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x28(r1)
    fcmpo cr0, f4, f0
    bge lbl_fn_8024B4F0_00000788
    lfs f3, 0x20(r1)
    lfs f0, lbl_80883268
    fcmpo cr0, f3, f0
    ble lbl_fn_8024B4F0_0000077C
    lfs f0, lbl_808832B0
    b lbl_fn_8024B4F0_00000780
lbl_fn_8024B4F0_0000077C:
    lfs f0, lbl_808832B4
lbl_fn_8024B4F0_00000780:
    stfs f0, 0x30(r1)
    b lbl_fn_8024B4F0_0000079C
lbl_fn_8024B4F0_00000788:
    fmr f2, f3
    lfs f1, 0x20(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x30(r1)
lbl_fn_8024B4F0_0000079C:
    lfs f0, 0x30(r1)
    addi r3, r1, 0x138
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883268
    addi r4, r1, 0x38
    lfs f4, 0x140(r1)
    mr r5, r4
    lfs f5, 0x13c(r1)
    addi r3, r1, 0xf8
    lfs f6, 0x138(r1)
    lfs f7, 0x150(r1)
    lfs f8, 0x14c(r1)
    lfs f9, 0x148(r1)
    lfs f10, 0x160(r1)
    lfs f11, 0x15c(r1)
    lfs f12, 0x158(r1)
    lfs f13, 0x164(r1)
    lfs f31, 0x154(r1)
    lfs f30, 0x144(r1)
    lfs f0, lbl_8088326C
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x28(r1)
    stfs f3, 0x128(r1)
    stfs f3, 0x12c(r1)
    stfs f3, 0x130(r1)
    stfs f0, 0x134(r1)
    stfs f6, 0x68(r1)
    stfs f5, 0x6c(r1)
    stfs f4, 0x70(r1)
    stfs f6, 0xf8(r1)
    stfs f5, 0xfc(r1)
    stfs f4, 0x100(r1)
    stfs f9, 0x5c(r1)
    stfs f8, 0x60(r1)
    stfs f7, 0x64(r1)
    stfs f9, 0x108(r1)
    stfs f8, 0x10c(r1)
    stfs f7, 0x110(r1)
    stfs f12, 0x50(r1)
    stfs f11, 0x54(r1)
    stfs f10, 0x58(r1)
    stfs f12, 0x118(r1)
    stfs f11, 0x11c(r1)
    stfs f10, 0x120(r1)
    stfs f30, 0x44(r1)
    stfs f31, 0x48(r1)
    stfs f13, 0x4c(r1)
    stfs f30, 0x104(r1)
    stfs f31, 0x114(r1)
    stfs f13, 0x124(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_808832AC
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8024B4F0_000008B8
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80883268
    fcmpo cr0, f3, f0
    ble lbl_fn_8024B4F0_000008A8
    lfs f0, lbl_808832B0
    b lbl_fn_8024B4F0_000008AC
lbl_fn_8024B4F0_000008A8:
    lfs f0, lbl_808832B4
lbl_fn_8024B4F0_000008AC:
    fneg f0, f0
    stfs f0, 0x2c(r1)
    b lbl_fn_8024B4F0_000008CC
lbl_fn_8024B4F0_000008B8:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x2c(r1)
lbl_fn_8024B4F0_000008CC:
    addi r3, r1, 0x2c
    lfs f3, lbl_80883268
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_80743540@ha
    psq_st f1, 0x0(r29), 0, 0
    fmr f2, f3
    lfs f0, 0x538(r31)
    lfs f4, 0x24(r1)
    stfs f2, 0x28(r1)
    fsubs f1, f4, f0
    lfd f2, lbl_80743540@l(r3)
    stfs f3, 0x34(r1)
    bl fn_8068AEA8
    frsp f4, f1
    lfs f0, lbl_80883294
    fcmpo cr0, f4, f0
    ble lbl_fn_8024B4F0_00000918
    lfs f0, lbl_80883288
    fsubs f4, f4, f0
lbl_fn_8024B4F0_00000918:
    lfs f0, lbl_80883298
    fcmpo cr0, f4, f0
    bge lbl_fn_8024B4F0_0000092C
    lfs f0, lbl_80883288
    fadds f4, f4, f0
lbl_fn_8024B4F0_0000092C:
    lfs f3, lbl_808832B8
    lfs f0, 0x538(r31)
    fmuls f3, f4, f3
    fadds f0, f0, f3
    stfs f0, 0x538(r31)
lbl_fn_8024B4F0_00000940:
    lwz r0, 0x12a4(r31)
    mr r3, r31
    ori r0, r0, 0x10
    stw r0, 0x12a4(r31)
    bl fn_80139560
    mr r3, r31
    bl fn_8024D120
lbl_fn_8024B4F0_0000095C:
    mr r3, r31
    bl fn_8014C540
    mr r3, r31
    bl fn_80145334
    mr r3, r31
    bl fn_8024BE94
lbl_fn_8024B4F0_00000974:
    lwz r0, 0x1a4(r1)
    psq_l f31, 0x198(r1), 0, 0
    lfd f31, 0x190(r1)
    psq_l f30, 0x188(r1), 0, 0
    lfd f30, 0x180(r1)
    lwz r31, 0x17c(r1)
    lwz r30, 0x178(r1)
    lwz r29, 0x174(r1)
    mtlr r0
    addi r1, r1, 0x1a0
    blr
}

asm void fn_8024BE90(void)
{
    nofralloc
    b fn_8024FCDC
}

asm void fn_8024BE94(void)
{
    nofralloc
    stwu r1, -0x100(r1)
    mflr r0
    lis r4, 0x4330
    stw r0, 0x104(r1)
    stfd f31, 0xf0(r1)
    psq_st f31, 0xf8(r1), 0, 0
    stfd f30, 0xe0(r1)
    psq_st f30, 0xe8(r1), 0, 0
    stfd f29, 0xd0(r1)
    psq_st f29, 0xd8(r1), 0, 0
    stw r31, 0xcc(r1)
    mr r31, r3
    stw r30, 0xc8(r1)
    stw r29, 0xc4(r1)
    lwz r0, 0xd18(r3)
    stw r4, 0xb0(r1)
    cmpwi r0, 0x0
    stw r4, 0xb8(r1)
    beq lbl_fn_8024BE94_00000F44
    lwz r0, 0x1624(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8024BE94_00000A38
    lwz r0, 0x58c(r3)
    cmpwi r0, 0xc
    beq lbl_fn_8024BE94_00000A38
    lwz r4, lbl_8087EFA8
    lfs f1, lbl_808832C8
    lfs f2, 0x3a4(r4)
    lfs f0, 0x1648(r3)
    lfs f3, lbl_808832C4
    fnmsubs f0, f1, f2, f0
    fcmpo cr0, f3, f0
    ble lbl_fn_8024BE94_00000A2C
    b lbl_fn_8024BE94_00000A30
lbl_fn_8024BE94_00000A2C:
    fmr f3, f0
lbl_fn_8024BE94_00000A30:
    stfs f3, 0x1648(r3)
    b lbl_fn_8024BE94_00000A64
lbl_fn_8024BE94_00000A38:
    lwz r4, lbl_8087EFA8
    lfs f1, lbl_808832C8
    lfs f2, 0x3a4(r4)
    lfs f0, 0x1648(r3)
    lfs f3, lbl_8088326C
    fmadds f0, f1, f2, f0
    fcmpo cr0, f3, f0
    bge lbl_fn_8024BE94_00000A5C
    b lbl_fn_8024BE94_00000A60
lbl_fn_8024BE94_00000A5C:
    fmr f3, f0
lbl_fn_8024BE94_00000A60:
    stfs f3, 0x1648(r3)
lbl_fn_8024BE94_00000A64:
    lis r3, lbl_807435D8@ha
    lis r30, lbl_807435A0@ha
    lfs f29, lbl_8088326C
    addi r30, r30, lbl_807435A0@l
    lfd f30, lbl_807435D8@l(r3)
    li r29, 0x0
    lfs f31, lbl_808832CC
lbl_fn_8024BE94_00000A80:
    lwz r4, 0x0(r30)
    addi r3, r31, 0xb0
    bl fn_80094B6C
    lfs f0, 0x1648(r31)
    addi r5, r1, 0xa0
    stfs f0, 0xa0(r1)
    addi r6, r1, 0x70
    lwz r4, 0x0(r30)
    addi r7, r1, 0x60
    stfs f0, 0xa4(r1)
    stfs f0, 0xa8(r1)
    stfs f29, 0xac(r1)
    lwz r0, 0x1c(r3)
    stw r0, 0x18(r1)
    lbz r8, 0x18(r1)
    stw r8, 0xb4(r1)
    lbz r0, 0x19(r1)
    lfd f0, 0xb0(r1)
    stw r0, 0xbc(r1)
    fsubs f1, f0, f30
    lbz r8, 0x1a(r1)
    lfd f0, 0xb8(r1)
    lbz r0, 0x1b(r1)
    fsubs f2, f0, f30
    stw r0, 0xbc(r1)
    fdivs f3, f1, f31
    stw r8, 0xb4(r1)
    lfd f0, 0xb8(r1)
    lfd f1, 0xb0(r1)
    stfs f3, 0x60(r1)
    fsubs f1, f1, f30
    fsubs f0, f0, f30
    fdivs f2, f2, f31
    stfs f2, 0x64(r1)
    fdivs f1, f1, f31
    stfs f1, 0x68(r1)
    fdivs f0, f0, f31
    stfs f0, 0x6c(r1)
    lwz r0, 0x20(r3)
    addi r3, r31, 0xb0
    stw r0, 0x1c(r1)
    lbz r8, 0x1c(r1)
    stw r8, 0xb4(r1)
    lbz r0, 0x1d(r1)
    lfd f0, 0xb0(r1)
    stw r0, 0xbc(r1)
    fsubs f1, f0, f30
    lbz r8, 0x1e(r1)
    lfd f0, 0xb8(r1)
    lbz r0, 0x1f(r1)
    fsubs f2, f0, f30
    stw r0, 0xbc(r1)
    fdivs f3, f1, f31
    stw r8, 0xb4(r1)
    lfd f0, 0xb8(r1)
    lfd f1, 0xb0(r1)
    stfs f3, 0x70(r1)
    fsubs f1, f1, f30
    fsubs f0, f0, f30
    fdivs f2, f2, f31
    stfs f2, 0x74(r1)
    fdivs f1, f1, f31
    stfs f1, 0x78(r1)
    fdivs f0, f0, f31
    stfs f0, 0x7c(r1)
    bl fn_80094958
    addi r29, r29, 0x1
    addi r30, r30, 0x4
    cmplwi r29, 0x6
    blt lbl_fn_8024BE94_00000A80
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x2
    bne lbl_fn_8024BE94_00000BF0
    lfs f1, 0x1644(r31)
    lfs f0, lbl_808832D0
    fmuls f1, f0, f1
    bl fn_8068AD58
    lfs f3, 0x2e4(r31)
    frsp f2, f1
    lfs f0, lbl_808832A4
    lfs f1, lbl_808832D4
    fdivs f0, f3, f0
    lfs f3, lbl_8088326C
    fcmpo cr0, f3, f0
    fmadds f29, f1, f2, f1
    bge lbl_fn_8024BE94_00000BDC
    b lbl_fn_8024BE94_00000BE0
lbl_fn_8024BE94_00000BDC:
    fmr f3, f0
lbl_fn_8024BE94_00000BE0:
    lfs f0, lbl_8088326C
    fsubs f0, f0, f3
    fmuls f29, f29, f0
    b lbl_fn_8024BE94_00000C94
lbl_fn_8024BE94_00000BF0:
    cmpwi r0, 0xc
    bne lbl_fn_8024BE94_00000C48
    lwz r3, lbl_8087EFA8
    lfs f2, lbl_808832A4
    lfs f3, 0x3a4(r3)
    lfs f1, 0x1644(r31)
    lfs f0, lbl_808832D8
    fmadds f1, f2, f3, f1
    stfs f1, 0x1644(r31)
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_8024BE94_00000C28
    fsubs f0, f1, f0
    stfs f0, 0x1644(r31)
lbl_fn_8024BE94_00000C28:
    lfs f1, 0x1644(r31)
    lfs f0, lbl_808832D0
    fmuls f1, f0, f1
    bl fn_8068AD58
    frsp f1, f1
    lfs f0, lbl_808832D4
    fmadds f29, f0, f1, f0
    b lbl_fn_8024BE94_00000C94
lbl_fn_8024BE94_00000C48:
    lwz r3, lbl_8087EFA8
    lfs f2, lbl_808832DC
    lfs f3, 0x3a4(r3)
    lfs f1, 0x1644(r31)
    lfs f0, lbl_808832D8
    fmadds f1, f2, f3, f1
    stfs f1, 0x1644(r31)
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_8024BE94_00000C78
    fsubs f0, f1, f0
    stfs f0, 0x1644(r31)
lbl_fn_8024BE94_00000C78:
    lfs f1, 0x1644(r31)
    lfs f0, lbl_808832D0
    fmuls f1, f0, f1
    bl fn_8068AD58
    frsp f1, f1
    lfs f0, lbl_808832D4
    fmadds f29, f0, f1, f0
lbl_fn_8024BE94_00000C94:
    lwz r30, lbl_808832BC
    addi r3, r31, 0xb0
    mr r4, r30
    bl fn_80094B6C
    lfs f0, lbl_8088326C
    lis r5, lbl_807435D8@ha
    stfs f29, 0x90(r1)
    mr r4, r30
    lfd f5, lbl_807435D8@l(r5)
    addi r5, r1, 0x90
    stfs f29, 0x94(r1)
    addi r6, r1, 0x50
    lfs f4, lbl_808832CC
    addi r7, r1, 0x40
    stfs f29, 0x98(r1)
    stfs f0, 0x9c(r1)
    lwz r0, 0x1c(r3)
    stw r0, 0x10(r1)
    lbz r8, 0x10(r1)
    stw r8, 0xb4(r1)
    lbz r0, 0x11(r1)
    lfd f0, 0xb0(r1)
    stw r0, 0xbc(r1)
    fsubs f1, f0, f5
    lbz r8, 0x12(r1)
    lfd f0, 0xb8(r1)
    lbz r0, 0x13(r1)
    fsubs f2, f0, f5
    stw r0, 0xbc(r1)
    fdivs f3, f1, f4
    stw r8, 0xb4(r1)
    lfd f0, 0xb8(r1)
    lfd f1, 0xb0(r1)
    stfs f3, 0x40(r1)
    fsubs f1, f1, f5
    fsubs f0, f0, f5
    fdivs f2, f2, f4
    stfs f2, 0x44(r1)
    fdivs f1, f1, f4
    stfs f1, 0x48(r1)
    fdivs f0, f0, f4
    stfs f0, 0x4c(r1)
    lwz r0, 0x20(r3)
    addi r3, r31, 0xb0
    stw r0, 0x14(r1)
    lbz r8, 0x14(r1)
    stw r8, 0xb4(r1)
    lbz r0, 0x15(r1)
    lfd f0, 0xb0(r1)
    stw r0, 0xbc(r1)
    fsubs f1, f0, f5
    lbz r8, 0x16(r1)
    lfd f0, 0xb8(r1)
    lbz r0, 0x17(r1)
    fsubs f2, f0, f5
    stw r0, 0xbc(r1)
    fdivs f3, f1, f4
    stw r8, 0xb4(r1)
    lfd f0, 0xb8(r1)
    lfd f1, 0xb0(r1)
    stfs f3, 0x50(r1)
    fsubs f1, f1, f5
    fsubs f0, f0, f5
    fdivs f2, f2, f4
    stfs f2, 0x54(r1)
    fdivs f1, f1, f4
    stfs f1, 0x58(r1)
    fdivs f0, f0, f4
    stfs f0, 0x5c(r1)
    bl fn_80094958
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x1
    beq lbl_fn_8024BE94_00000DC0
    cmpwi r0, 0xc
    bne lbl_fn_8024BE94_00000DD4
lbl_fn_8024BE94_00000DC0:
    lfs f1, 0x16c8(r31)
    lfs f0, lbl_808832E0
    fadds f0, f1, f0
    stfs f0, 0x16c8(r31)
    b lbl_fn_8024BE94_00000DE4
lbl_fn_8024BE94_00000DD4:
    lfs f1, 0x16c8(r31)
    lfs f0, lbl_808832E0
    fsubs f0, f1, f0
    stfs f0, 0x16c8(r31)
lbl_fn_8024BE94_00000DE4:
    lfs f1, lbl_8088326C
    lfs f0, 0x16c8(r31)
    fcmpo cr0, f1, f0
    bge lbl_fn_8024BE94_00000DF8
    b lbl_fn_8024BE94_00000DFC
lbl_fn_8024BE94_00000DF8:
    fmr f1, f0
lbl_fn_8024BE94_00000DFC:
    lfs f2, lbl_80883268
    fcmpo cr0, f2, f1
    ble lbl_fn_8024BE94_00000E0C
    b lbl_fn_8024BE94_00000E24
lbl_fn_8024BE94_00000E0C:
    lfs f2, lbl_8088326C
    lfs f0, 0x16c8(r31)
    fcmpo cr0, f2, f0
    bge lbl_fn_8024BE94_00000E20
    b lbl_fn_8024BE94_00000E24
lbl_fn_8024BE94_00000E20:
    fmr f2, f0
lbl_fn_8024BE94_00000E24:
    lwz r30, lbl_808832C0
    addi r3, r31, 0xb0
    stfs f2, 0x16c8(r31)
    mr r4, r30
    bl fn_80094B6C
    lfs f1, 0x16c8(r31)
    lis r6, lbl_807435D8@ha
    lfs f0, lbl_8088326C
    mr r4, r30
    stfs f1, 0x80(r1)
    addi r5, r1, 0x80
    lfd f5, lbl_807435D8@l(r6)
    addi r6, r1, 0x30
    stfs f1, 0x84(r1)
    addi r7, r1, 0x20
    lfs f4, lbl_808832CC
    stfs f1, 0x88(r1)
    stfs f0, 0x8c(r1)
    lwz r0, 0x1c(r3)
    stw r0, 0x8(r1)
    lbz r8, 0x8(r1)
    stw r8, 0xb4(r1)
    lbz r0, 0x9(r1)
    lfd f0, 0xb0(r1)
    stw r0, 0xbc(r1)
    fsubs f1, f0, f5
    lbz r8, 0xa(r1)
    lfd f0, 0xb8(r1)
    lbz r0, 0xb(r1)
    fsubs f2, f0, f5
    stw r0, 0xbc(r1)
    fdivs f3, f1, f4
    stw r8, 0xb4(r1)
    lfd f0, 0xb8(r1)
    lfd f1, 0xb0(r1)
    stfs f3, 0x20(r1)
    fsubs f1, f1, f5
    fsubs f0, f0, f5
    fdivs f2, f2, f4
    stfs f2, 0x24(r1)
    fdivs f1, f1, f4
    stfs f1, 0x28(r1)
    fdivs f0, f0, f4
    stfs f0, 0x2c(r1)
    lwz r0, 0x20(r3)
    addi r3, r31, 0xb0
    stw r0, 0xc(r1)
    lbz r8, 0xc(r1)
    stw r8, 0xb4(r1)
    lbz r0, 0xd(r1)
    lfd f0, 0xb0(r1)
    stw r0, 0xbc(r1)
    fsubs f1, f0, f5
    lbz r8, 0xe(r1)
    lfd f0, 0xb8(r1)
    lbz r0, 0xf(r1)
    fsubs f2, f0, f5
    stw r0, 0xbc(r1)
    fdivs f3, f1, f4
    stw r8, 0xb4(r1)
    lfd f0, 0xb8(r1)
    lfd f1, 0xb0(r1)
    stfs f3, 0x30(r1)
    fsubs f1, f1, f5
    fsubs f0, f0, f5
    fdivs f2, f2, f4
    stfs f2, 0x34(r1)
    fdivs f1, f1, f4
    stfs f1, 0x38(r1)
    fdivs f0, f0, f4
    stfs f0, 0x3c(r1)
    bl fn_80094958
lbl_fn_8024BE94_00000F44:
    lwz r0, 0x104(r1)
    psq_l f31, 0xf8(r1), 0, 0
    lfd f31, 0xf0(r1)
    psq_l f30, 0xe8(r1), 0, 0
    lfd f30, 0xe0(r1)
    psq_l f29, 0xd8(r1), 0, 0
    lfd f29, 0xd0(r1)
    lwz r31, 0xcc(r1)
    lwz r30, 0xc8(r1)
    lwz r29, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0x100
    blr
}

asm void fn_8024C468(void)
{
    nofralloc
    b fn_80149A30
}

asm void fn_8024C46C(void)
{
    nofralloc
    stwu r1, -0x190(r1)
    mflr r0
    stw r0, 0x194(r1)
    stfd f31, 0x180(r1)
    psq_st f31, 0x188(r1), 0, 0
    stfd f30, 0x170(r1)
    psq_st f30, 0x178(r1), 0, 0
    stw r31, 0x16c(r1)
    stw r30, 0x168(r1)
    mr r30, r4
    stw r29, 0x164(r1)
    mr r29, r3
    stw r28, 0x160(r1)
    lwz r0, 0x58c(r3)
    cmpwi r0, 0xc
    beq lbl_fn_8024C46C_00001758
    lwz r0, 0x1624(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8024C46C_0000163C
    lwz r4, 0x0(r4)
    stw r4, 0x14e4(r3)
    lfs f0, 0x530(r3)
    lfs f3, 0x530(r4)
    lfs f5, 0x52c(r4)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r3)
    lfs f0, 0x528(r3)
    addi r3, r1, 0xd8
    lfs f3, 0x528(r4)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0xdc(r1)
    stfs f0, 0xd8(r1)
    stfs f6, 0xe0(r1)
    bl fn_805F9940
    lfs f0, 0x1660(r29)
    fcmpo cr0, f1, f0
    bge lbl_fn_8024C46C_00001020
    li r0, 0x1
    stw r0, 0x14e8(r29)
    b lbl_fn_8024C46C_00001028
lbl_fn_8024C46C_00001020:
    li r0, 0x6
    stw r0, 0x14e8(r29)
lbl_fn_8024C46C_00001028:
    lwz r0, 0x1624(r29)
    li r31, 0x0
    cmpwi r0, 0x0
    ble lbl_fn_8024C46C_000010FC
    lwz r0, 0x44(r30)
    cmpwi r0, 0x2
    bne lbl_fn_8024C46C_0000104C
    li r31, 0xa
    b lbl_fn_8024C46C_0000105C
lbl_fn_8024C46C_0000104C:
    cmpwi r0, 0x1
    li r31, 0x3
    bne lbl_fn_8024C46C_0000105C
    li r31, 0x1
lbl_fn_8024C46C_0000105C:
    lwz r0, 0x8(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8024C46C_000010F0
    lwz r3, 0x0(r30)
    li r28, 0x0
    cmpwi r3, 0x0
    beq lbl_fn_8024C46C_000010C8
    addi r3, r3, 0x7d4
    li r4, 0x3f
    bl fn_80133EE8
    cmpwi r3, 0x0
    beq lbl_fn_8024C46C_000010C8
    lwz r3, 0x0(r30)
    lwz r0, 0xad8(r3)
    addi r3, r3, 0xadc
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8024C46C_000010C8
lbl_fn_8024C46C_000010A4:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x3f
    bne lbl_fn_8024C46C_000010C0
    lwz r0, 0x4(r3)
    cmpwi r0, 0x7
    bne lbl_fn_8024C46C_000010C0
    li r28, 0x1
lbl_fn_8024C46C_000010C0:
    addi r3, r3, 0x14
    bdnz lbl_fn_8024C46C_000010A4
lbl_fn_8024C46C_000010C8:
    lwz r3, 0x8(r30)
    lfs f0, lbl_80883268
    lfs f3, 0x8c(r3)
    fcmpo cr0, f3, f0
    bgt lbl_fn_8024C46C_000010E4
    cmpwi r28, 0x0
    beq lbl_fn_8024C46C_000010F0
lbl_fn_8024C46C_000010E4:
    li r0, 0x6
    stw r0, 0x78(r30)
    slwi r31, r31, 1
lbl_fn_8024C46C_000010F0:
    lwz r0, 0x1624(r29)
    subf r0, r31, r0
    stw r0, 0x1624(r29)
lbl_fn_8024C46C_000010FC:
    psq_l f1, 0x1c(r30), 0, 0
    addi r3, r1, 0xcc
    lfs f2, 0x24(r30)
    addi r28, r1, 0xc0
    stfs f2, 0xd4(r1)
    lfs f0, lbl_808832AC
    psq_st f1, 0x0(r3), 0, 0
    lfs f2, 0x30(r30)
    psq_l f1, 0x28(r30), 0, 0
    fabs f3, f2
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0xc8(r1)
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8024C46C_0000115C
    lfs f3, 0xc0(r1)
    lfs f0, lbl_80883268
    fcmpo cr0, f3, f0
    ble lbl_fn_8024C46C_00001150
    lfs f0, lbl_808832B0
    b lbl_fn_8024C46C_00001154
lbl_fn_8024C46C_00001150:
    lfs f0, lbl_808832B4
lbl_fn_8024C46C_00001154:
    stfs f0, 0xb8(r1)
    b lbl_fn_8024C46C_00001170
lbl_fn_8024C46C_0000115C:
    frsp f2, f2
    lfs f1, 0xc0(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0xb8(r1)
lbl_fn_8024C46C_00001170:
    lfs f0, 0xb8(r1)
    addi r3, r1, 0xe8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883268
    addi r4, r1, 0xa8
    lfs f30, 0xf0(r1)
    mr r5, r4
    lfs f31, 0xec(r1)
    addi r3, r1, 0x118
    lfs f13, 0xe8(r1)
    lfs f12, 0x100(r1)
    lfs f11, 0xfc(r1)
    lfs f10, 0xf8(r1)
    lfs f9, 0x110(r1)
    lfs f8, 0x10c(r1)
    lfs f7, 0x108(r1)
    lfs f6, 0x114(r1)
    lfs f5, 0x104(r1)
    lfs f4, 0xf4(r1)
    lfs f0, lbl_8088326C
    psq_l f1, 0x0(r28), 0, 0
    lfs f2, 0xc8(r1)
    stfs f3, 0x148(r1)
    stfs f3, 0x14c(r1)
    stfs f3, 0x150(r1)
    stfs f0, 0x154(r1)
    stfs f13, 0x78(r1)
    stfs f31, 0x7c(r1)
    stfs f30, 0x80(r1)
    stfs f13, 0x118(r1)
    stfs f31, 0x11c(r1)
    stfs f30, 0x120(r1)
    stfs f10, 0x84(r1)
    stfs f11, 0x88(r1)
    stfs f12, 0x8c(r1)
    stfs f10, 0x128(r1)
    stfs f11, 0x12c(r1)
    stfs f12, 0x130(r1)
    stfs f7, 0x90(r1)
    stfs f8, 0x94(r1)
    stfs f9, 0x98(r1)
    stfs f7, 0x138(r1)
    stfs f8, 0x13c(r1)
    stfs f9, 0x140(r1)
    stfs f4, 0x9c(r1)
    stfs f5, 0xa0(r1)
    stfs f6, 0xa4(r1)
    stfs f4, 0x124(r1)
    stfs f5, 0x134(r1)
    stfs f6, 0x144(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xb0(r1)
    bl fn_805F9750
    lfs f2, 0xb0(r1)
    lfs f0, lbl_808832AC
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8024C46C_0000128C
    lfs f3, 0xac(r1)
    lfs f0, lbl_80883268
    fcmpo cr0, f3, f0
    ble lbl_fn_8024C46C_0000127C
    lfs f0, lbl_808832B0
    b lbl_fn_8024C46C_00001280
lbl_fn_8024C46C_0000127C:
    lfs f0, lbl_808832B4
lbl_fn_8024C46C_00001280:
    fneg f0, f0
    stfs f0, 0xb4(r1)
    b lbl_fn_8024C46C_000012A0
lbl_fn_8024C46C_0000128C:
    lfs f1, 0xac(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0xb4(r1)
lbl_fn_8024C46C_000012A0:
    addi r3, r1, 0xb4
    lfs f2, lbl_80883268
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0xc8(r1)
    lwz r0, 0x1624(r29)
    stfs f2, 0xbc(r1)
    cmpwi r0, 0x0
    bgt lbl_fn_8024C46C_00001480
    lwz r3, 0x6d0(r29)
    li r0, 0x0
    stw r0, 0x1624(r29)
    slwi r0, r3, 3
    add r0, r29, r0
    lwz r3, 0x34(r30)
    addic. r4, r0, 0x6d4
    lwz r0, 0x38(r30)
    stw r3, 0x28(r1)
    stw r0, 0x2c(r1)
    beq lbl_fn_8024C46C_000012F8
    stw r3, 0x0(r4)
    stw r0, 0x4(r4)
lbl_fn_8024C46C_000012F8:
    lwz r3, 0x6d0(r29)
    addi r4, r29, 0x1504
    li r5, 0x0
    li r6, 0x0
    addi r0, r3, 0x1
    stw r0, 0x6d0(r29)
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    li r3, 0x0
    li r4, 0x0
    bl fn_80232B7C
    lfs f0, lbl_80883268
    li r3, -0x1
    lfs f1, lbl_8088326C
    li r0, 0x1
    stfs f0, 0x5c(r1)
    addi r4, r29, 0x1540
    addi r5, r29, 0xb0
    addi r7, r1, 0x50
    stfs f0, 0x60(r1)
    addi r8, r1, 0x5c
    addi r9, r1, 0x68
    li r6, 0x0
    stfs f0, 0x64(r1)
    li r10, -0x1
    stfs f0, 0x50(r1)
    stfs f0, 0x54(r1)
    stfs f0, 0x58(r1)
    stfs f1, 0x68(r1)
    stfs f1, 0x6c(r1)
    stfs f1, 0x70(r1)
    stfs f1, 0x74(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lis r4, lbl_8074367C@ha
    lfs f1, lbl_8088326C
    addi r4, r4, lbl_8074367C@l
    addi r3, r1, 0x1c
    addi r4, r4, 0x2d6
    addi r5, r29, 0x528
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x1c
    li r4, -0x1
    bl fn_800CB3A0
    lwz r4, 0x16d4(r29)
    lwz r3, 0x1640(r29)
    cmpwi r4, 0x0
    addi r0, r3, 0x1
    stw r0, 0x1640(r29)
    ble lbl_fn_8024C46C_000013DC
    lwz r3, lbl_8087F430
    li r5, 0x1
    bl fn_80370AE4
lbl_fn_8024C46C_000013DC:
    mr r28, r29
    li r31, 0x0
    b lbl_fn_8024C46C_00001408
lbl_fn_8024C46C_000013E8:
    lwz r3, 0x16dc(r28)
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x2
    beq lbl_fn_8024C46C_00001400
    li r4, 0x0
    bl fn_8024FE18
lbl_fn_8024C46C_00001400:
    addi r28, r28, 0x4
    addi r31, r31, 0x1
lbl_fn_8024C46C_00001408:
    lwz r0, 0x16d8(r29)
    cmplw r31, r0
    blt lbl_fn_8024C46C_000013E8
    li r0, 0x0
    stw r0, 0x8(r1)
    li r3, -0x1
    lfs f1, lbl_8088326C
    stw r3, 0xc(r1)
    li r0, 0x1
    addi r4, r29, 0x1528
    addi r8, r1, 0xcc
    stw r0, 0x10(r1)
    addi r9, r1, 0xc0
    li r5, -0x1
    li r6, 0x0
    lwz r3, lbl_8087F3C0
    li r7, 0x0
    li r10, 0x0
    bl fn_8023A680
    lwz r0, 0x16bc(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8024C46C_00001758
    lwz r3, 0x8(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8024C46C_00001758
    lwz r0, 0x90(r3)
    rlwinm r0, r0, 0, 17, 17
    cmplwi r0, 0x4000
    beq lbl_fn_8024C46C_0000163C
    b lbl_fn_8024C46C_00001758
lbl_fn_8024C46C_00001480:
    lwz r0, 0x6d0(r29)
    lwz r4, 0x34(r30)
    slwi r0, r0, 3
    lwz r3, 0x38(r30)
    add r0, r29, r0
    stw r4, 0x20(r1)
    addic. r5, r0, 0x6d4
    stw r3, 0x24(r1)
    beq lbl_fn_8024C46C_000014AC
    stw r4, 0x0(r5)
    stw r3, 0x4(r5)
lbl_fn_8024C46C_000014AC:
    lwz r3, 0x6d0(r29)
    addi r0, r3, 0x1
    stw r0, 0x6d0(r29)
    lwz r0, 0x44(r30)
    cmplwi r0, 0x1
    ble lbl_fn_8024C46C_000014D0
    cmpwi r0, 0x2
    beq lbl_fn_8024C46C_00001528
    b lbl_fn_8024C46C_0000157C
lbl_fn_8024C46C_000014D0:
    li r3, 0x0
    li r4, 0x0
    bl fn_80232B7C
    lfs f1, lbl_8088326C
    li r3, -0x1
    stfs f1, 0x40(r1)
    li r0, 0x1
    addi r4, r29, 0x1510
    addi r7, r29, 0x528
    stfs f1, 0x44(r1)
    addi r8, r29, 0x534
    addi r9, r1, 0x40
    li r5, 0x0
    stfs f1, 0x48(r1)
    li r6, 0x0
    li r10, -0x1
    stfs f1, 0x4c(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    b lbl_fn_8024C46C_0000157C
lbl_fn_8024C46C_00001528:
    li r3, 0x0
    li r4, 0x0
    bl fn_80232B7C
    lfs f1, lbl_8088326C
    li r3, -0x1
    stfs f1, 0x30(r1)
    li r0, 0x1
    addi r4, r29, 0x151c
    addi r7, r29, 0x528
    stfs f1, 0x34(r1)
    addi r8, r29, 0x534
    addi r9, r1, 0x30
    li r5, 0x0
    stfs f1, 0x38(r1)
    li r6, 0x0
    li r10, -0x1
    stfs f1, 0x3c(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
lbl_fn_8024C46C_0000157C:
    li r0, 0x0
    stw r0, 0x8(r1)
    li r0, -0x1
    li r28, 0x1
    stw r0, 0xc(r1)
    addi r4, r29, 0x1534
    lfs f1, lbl_8088326C
    addi r8, r1, 0xcc
    stw r28, 0x10(r1)
    addi r9, r1, 0xc0
    li r5, -0x1
    li r6, 0x0
    lwz r3, lbl_8087F3C0
    li r7, 0x0
    li r10, 0x0
    bl fn_8023A680
    lis r4, lbl_8074367C@ha
    lfs f1, lbl_8088326C
    addi r4, r4, lbl_8074367C@l
    addi r3, r1, 0x18
    addi r4, r4, 0x2e3
    addi r5, r29, 0x528
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x18
    li r4, -0x1
    bl fn_800CB3A0
    lfs f4, 0x10(r30)
    mulli r3, r31, 0xa
    lfs f5, lbl_80883268
    li r4, 0x4
    lfs f3, 0x14(r30)
    lfs f0, 0x18(r30)
    fmuls f4, f4, f5
    lwz r0, 0x94(r30)
    fmuls f3, f3, f5
    fmuls f0, f0, f5
    stw r4, 0x64(r30)
    oris r0, r0, 0x4000
    stfs f4, 0x10(r30)
    stfs f3, 0x14(r30)
    stfs f0, 0x18(r30)
    stw r28, 0x90(r30)
    stw r28, 0x84(r30)
    stw r3, 0x68(r30)
    stw r0, 0x94(r30)
    b lbl_fn_8024C46C_00001758
lbl_fn_8024C46C_0000163C:
    lwz r0, 0x58c(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8024C46C_00001654
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x7
    bne lbl_fn_8024C46C_0000167C
lbl_fn_8024C46C_00001654:
    lfs f4, 0x10(r30)
    lfs f5, lbl_80883268
    lfs f3, 0x14(r30)
    lfs f0, 0x18(r30)
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    fmuls f0, f0, f5
    stfs f4, 0x10(r30)
    stfs f3, 0x14(r30)
    stfs f0, 0x18(r30)
lbl_fn_8024C46C_0000167C:
    addi r3, r30, 0x10
    bl fn_805F9920
    fabs f3, f1
    lfs f0, lbl_808832AC
    frsp f3, f3
    fcmpo cr0, f3, f0
    blt lbl_fn_8024C46C_000016DC
    lfs f0, lbl_808832E4
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_8024C46C_000016DC
    addi r3, r30, 0x10
    mr r4, r3
    bl fn_805F98D0
    lfs f4, 0x10(r30)
    lfs f5, lbl_808832E8
    lfs f3, 0x14(r30)
    lfs f0, 0x18(r30)
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    fmuls f0, f0, f5
    stfs f4, 0x10(r30)
    stfs f3, 0x14(r30)
    stfs f0, 0x18(r30)
lbl_fn_8024C46C_000016DC:
    lwz r0, 0x16e4(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8024C46C_00001734
    li r0, 0xc
    stw r0, 0x58c(r29)
    mr r3, r29
    li r4, 0x3
    bl fn_8016E970
    li r0, 0x0
    stw r0, 0x14b8(r29)
    lwz r4, 0x14b0(r29)
    mr r3, r29
    stw r0, 0x14bc(r29)
    li r5, 0x0
    lfs f1, lbl_808832A8
    bl fn_80170A20
    addi r3, r29, 0x7d4
    lis r4, 0x8000
    li r5, 0x64
    li r6, 0x0
    bl fn_80133130
    b lbl_fn_8024C46C_00001758
lbl_fn_8024C46C_00001734:
    mr r3, r29
    mr r4, r30
    bl fn_80151448
    lwz r12, 0x0(r29)
    mr r3, r29
    mr r4, r30
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
lbl_fn_8024C46C_00001758:
    lwz r0, 0x194(r1)
    psq_l f31, 0x188(r1), 0, 0
    lfd f31, 0x180(r1)
    psq_l f30, 0x178(r1), 0, 0
    lfd f30, 0x170(r1)
    lwz r31, 0x16c(r1)
    lwz r30, 0x168(r1)
    lwz r29, 0x164(r1)
    lwz r28, 0x160(r1)
    mtlr r0
    addi r1, r1, 0x190
    blr
}

asm void fn_8024CC78(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_8024CC78_000017B8
    bl fn_8024FCDC
    b lbl_fn_8024CC78_0000181C
lbl_fn_8024CC78_000017B8:
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_8024CC78_0000181C
    lwz r0, 0x560(r3)
    cmpwi r0, 0x16
    beq lbl_fn_8024CC78_000017F0
    cmpwi r0, 0x17
    beq lbl_fn_8024CC78_000017E4
    cmpwi r0, 0x36
    beq lbl_fn_8024CC78_000017F0
    b lbl_fn_8024CC78_0000181C
lbl_fn_8024CC78_000017E4:
    addi r4, r3, 0x6b8
    li r5, -0x1
    bl fn_8015E4B0
lbl_fn_8024CC78_000017F0:
    lwz r4, 0x14bc(r30)
    li r31, 0x0
    stw r31, 0x58c(r30)
    mr r3, r30
    addi r0, r4, 0x1e
    li r4, 0x3
    stw r0, 0x14bc(r30)
    bl fn_8016E970
    stw r31, 0x14b8(r30)
    stw r31, 0x14bc(r30)
    stw r31, 0x14dc(r30)
lbl_fn_8024CC78_0000181C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8024CD24(void)
{
    nofralloc
    stwu r1, -0x150(r1)
    mflr r0
    stw r0, 0x154(r1)
    stfd f31, 0x140(r1)
    psq_st f31, 0x148(r1), 0, 0
    stfd f30, 0x130(r1)
    psq_st f30, 0x138(r1), 0, 0
    stw r31, 0x12c(r1)
    lis r31, lbl_80743540@ha
    addi r31, r31, lbl_80743540@l
    stw r30, 0x128(r1)
    stw r29, 0x124(r1)
    stw r28, 0x120(r1)
    mr r28, r3
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    beq lbl_fn_8024CD24_00001C00
    lfs f0, lbl_8088326C
    li r0, 0x1
    stw r0, 0x3fc(r3)
    stfs f0, 0x2fc(r3)
    addi r3, r3, 0x574
    bl fn_805F9940
    lfs f3, 0x570(r28)
    lfs f0, lbl_808832EC
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    beq lbl_fn_8024CD24_000018B0
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_8024CD24_000018E0
lbl_fn_8024CD24_000018B0:
    lfs f1, lbl_80883268
    addi r3, r28, 0xb0
    lfs f2, lbl_808832C4
    li r4, 0x0
    li r5, 0x2
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_8088326C
    stfs f0, 0x2e8(r28)
    b lbl_fn_8024CD24_00001C00
lbl_fn_8024CD24_000018E0:
    lfs f3, lbl_80883268
    addi r3, r1, 0xe8
    lfs f0, lbl_8088326C
    li r4, 0x79
    stfs f3, 0x68(r1)
    stfs f3, 0x6c(r1)
    stfs f0, 0x70(r1)
    lfs f1, 0x538(r28)
    bl fn_805F8E70
    addi r4, r1, 0x68
    addi r3, r1, 0xe8
    mr r5, r4
    bl fn_805F93C0
    psq_l f1, 0x574(r28), 0, 0
    addi r30, r1, 0x5c
    lfs f2, 0x57c(r28)
    mr r3, r30
    stfs f2, 0x64(r1)
    mr r4, r30
    psq_st f1, 0x0(r30), 0, 0
    bl fn_805F98D0
    mr r4, r30
    addi r3, r1, 0x68
    bl fn_805F9990
    fmr f31, f1
    lfd f1, 0xa0(r31)
    bl fn_8068A850
    frsp f0, f1
    fcmpo cr0, f31, f0
    ble lbl_fn_8024CD24_00001980
    lfs f1, lbl_80883268
    addi r3, r28, 0xb0
    lfs f2, lbl_808832C4
    li r4, 0x0
    li r5, 0x1c6
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_8024CD24_00001BF8
lbl_fn_8024CD24_00001980:
    lfd f1, 0xa8(r31)
    bl fn_8068A850
    frsp f0, f1
    fcmpo cr0, f31, f0
    ble lbl_fn_8024CD24_00001BD4
    lfs f2, 0x64(r1)
    addi r29, r1, 0x50
    psq_l f1, 0x0(r30), 0, 0
    fabs f3, f2
    lfs f0, lbl_808832AC
    psq_st f1, 0x0(r29), 0, 0
    frsp f3, f3
    stfs f2, 0x58(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_8024CD24_000019E0
    lfs f3, 0x50(r1)
    lfs f0, lbl_80883268
    fcmpo cr0, f3, f0
    ble lbl_fn_8024CD24_000019D4
    lfs f0, lbl_808832B0
    b lbl_fn_8024CD24_000019D8
lbl_fn_8024CD24_000019D4:
    lfs f0, lbl_808832B4
lbl_fn_8024CD24_000019D8:
    stfs f0, 0x48(r1)
    b lbl_fn_8024CD24_000019F4
lbl_fn_8024CD24_000019E0:
    frsp f2, f2
    lfs f1, 0x50(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_8024CD24_000019F4:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x78
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883268
    addi r4, r1, 0x38
    lfs f30, 0x80(r1)
    mr r5, r4
    lfs f31, 0x7c(r1)
    addi r3, r1, 0xa8
    lfs f13, 0x78(r1)
    lfs f12, 0x90(r1)
    lfs f11, 0x8c(r1)
    lfs f10, 0x88(r1)
    lfs f9, 0xa0(r1)
    lfs f8, 0x9c(r1)
    lfs f7, 0x98(r1)
    lfs f6, 0xa4(r1)
    lfs f5, 0x94(r1)
    lfs f4, 0x84(r1)
    lfs f0, lbl_8088326C
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x58(r1)
    stfs f3, 0xd8(r1)
    stfs f3, 0xdc(r1)
    stfs f3, 0xe0(r1)
    stfs f0, 0xe4(r1)
    stfs f13, 0x8(r1)
    stfs f31, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f13, 0xa8(r1)
    stfs f31, 0xac(r1)
    stfs f30, 0xb0(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xb8(r1)
    stfs f11, 0xbc(r1)
    stfs f12, 0xc0(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0xc8(r1)
    stfs f8, 0xcc(r1)
    stfs f9, 0xd0(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xb4(r1)
    stfs f5, 0xc4(r1)
    stfs f6, 0xd4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_808832AC
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8024CD24_00001B10
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80883268
    fcmpo cr0, f3, f0
    ble lbl_fn_8024CD24_00001B00
    lfs f0, lbl_808832B0
    b lbl_fn_8024CD24_00001B04
lbl_fn_8024CD24_00001B00:
    lfs f0, lbl_808832B4
lbl_fn_8024CD24_00001B04:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_8024CD24_00001B24
lbl_fn_8024CD24_00001B10:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_8024CD24_00001B24:
    addi r3, r1, 0x44
    lfs f3, lbl_80883268
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    fmr f2, f3
    lfs f0, 0x538(r28)
    lfs f4, 0x54(r1)
    stfs f2, 0x58(r1)
    fsubs f1, f4, f0
    lfd f2, 0x0(r31)
    stfs f3, 0x4c(r1)
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_80883294
    fcmpo cr0, f3, f0
    ble lbl_fn_8024CD24_00001B6C
    lfs f0, lbl_80883288
    fsubs f3, f3, f0
lbl_fn_8024CD24_00001B6C:
    lfs f0, lbl_80883298
    fcmpo cr0, f3, f0
    bge lbl_fn_8024CD24_00001B80
    lfs f0, lbl_80883288
    fadds f3, f3, f0
lbl_fn_8024CD24_00001B80:
    lfs f1, lbl_80883268
    fcmpo cr0, f3, f1
    ble lbl_fn_8024CD24_00001BB0
    lfs f2, lbl_808832C4
    addi r3, r28, 0xb0
    li r4, 0x0
    li r5, 0x1c8
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_8024CD24_00001BF8
lbl_fn_8024CD24_00001BB0:
    lfs f2, lbl_808832C4
    addi r3, r28, 0xb0
    li r4, 0x0
    li r5, 0x1c9
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_8024CD24_00001BF8
lbl_fn_8024CD24_00001BD4:
    lfs f1, lbl_80883268
    addi r3, r28, 0xb0
    lfs f2, lbl_808832C4
    li r4, 0x0
    li r5, 0x1c7
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
lbl_fn_8024CD24_00001BF8:
    lfs f0, lbl_8088326C
    stfs f0, 0x2e8(r28)
lbl_fn_8024CD24_00001C00:
    lwz r0, 0x154(r1)
    psq_l f31, 0x148(r1), 0, 0
    lfd f31, 0x140(r1)
    psq_l f30, 0x138(r1), 0, 0
    lfd f30, 0x130(r1)
    lwz r31, 0x12c(r1)
    lwz r30, 0x128(r1)
    lwz r29, 0x124(r1)
    lwz r28, 0x120(r1)
    mtlr r0
    addi r1, r1, 0x150
    blr
}
