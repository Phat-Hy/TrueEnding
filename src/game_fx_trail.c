#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void fn_8000D0F8(void);
extern void fn_8000D114(void);
extern void fn_8000D124(void);
extern void fn_8001047C(void);
extern void fn_800109E0(void);
extern void fn_80011034(void);
extern void fn_80011410(void);
extern void fn_800132EC(void);
extern void fn_80013338(void);
extern void fn_80013410(void);
extern void fn_8004ED34(void);
extern void fn_80057A64(void);
extern void fn_8008CD1C(void);
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800DD3FC(void);
extern void fn_800F72CC(void);
extern void fn_800F7FA0(void);
extern void fn_800F7FA8(void);
extern void fn_800F8524(void);
extern void fn_800F8548(void);
extern void fn_800F8574(void);
extern void fn_800FAB80(void);
extern void fn_80108C10(void);
extern void fn_80109828(void);
extern void fn_801125F8(void);
extern void fn_80121F00(void);
extern void fn_80122550(void);
extern void fn_8012AFE8(void);
extern void fn_80139550(void);
extern void fn_80139F24(void);
extern void fn_80139F3C(void);
extern void fn_8013A194(void);
extern void fn_8013C38C(void);
extern void fn_8013C554(void);
extern void fn_801404F8(void);
extern void fn_80140500(void);
extern void fn_801479E4(void);
extern void fn_8016E970(void);
extern void fn_801C0730(void);
extern void fn_801C3910(void);
extern void fn_80232B7C(void);
extern void fn_80239DAC(void);
extern void fn_8023A680(void);
extern void fn_8023A8B4(void);
extern void fn_8026607C(void);
extern void fn_8028F4AC(void);
extern void fn_80290674(void);
extern void fn_80290AB4(void);
extern void fn_802913B0(void);
extern void fn_80370A78(void);
extern void fn_80370AE4(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_8068AEA4(void);

/* External data declarations */
extern u8 lbl_807452F8[];
extern u8 lbl_80745314[];
extern u8 lbl_8077A708[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087DC38;
extern u32 lbl_8087DC3C;
extern u32 lbl_8087F048;
extern u32 lbl_8087F1E4;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_808813D0;
extern u32 lbl_80883A98;
extern u32 lbl_80883AA0;
extern u32 lbl_80883AA4;
extern u32 lbl_80883AA8;
extern u32 lbl_80883AB0;
extern u32 lbl_80883AB4;
extern u32 lbl_80883AB8;
extern u32 lbl_80883AC0;
extern u32 lbl_80883AD4;
extern u32 lbl_80883AD8;
extern u32 lbl_80883ADC;
extern u32 lbl_80883AF0;
extern u32 lbl_80883AF4;
extern u32 lbl_80883B00;
extern u32 lbl_80883B04;
extern u32 lbl_80883B08;
extern u32 lbl_80883B38;
extern u32 lbl_80883B3C;
extern u32 lbl_80883B40;
extern u32 lbl_80883B44;
extern u32 lbl_80883B48;
extern u32 lbl_80883B4C;
extern u32 lbl_80883B50;
extern u32 lbl_80883B54;
extern u32 lbl_80883B58;
extern u32 lbl_80883B5C;
extern u32 lbl_80883B60;
extern u32 lbl_80883B64;
extern u32 lbl_80883B68;
extern u32 lbl_80883B6C;
extern u32 lbl_80883B70;
extern u32 lbl_80883B74;
extern u32 lbl_80883B78;
extern u32 lbl_80883B7C;
extern u32 lbl_80883B80;
extern u32 lbl_80883B84;
extern u32 lbl_80883B88;
extern u32 lbl_80883B8C;
extern u32 lbl_80883B90;
extern u32 lbl_80883B94;
extern u32 lbl_80883B98;
extern u32 lbl_80883B9C;
extern u32 lbl_80883BA0;
extern u32 lbl_80883BA4;

/* Function declarations */
void fn_8028C834(void);
void fn_8028CB38(void);
void fn_8028CFB0(void);
void fn_8028CFB8(void);
void fn_8028CFE0(void);
void fn_8028D5C8(void);
void fn_8028DF34(void);

asm void fn_8028C834(void)
{
    nofralloc
    stwu r1, -0x260(r1)
    mflr r0
    stw r0, 0x264(r1)
    stfd f31, 0x250(r1)
    psq_st f31, 0x258(r1), 0, 0
    stw r31, 0x24c(r1)
    mr r31, r3
    stw r30, 0x248(r1)
    lwz r0, 0x14b4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8028C834_00000120
    lwz r7, 0x15d0(r3)
    lfs f0, lbl_80883A98
    cmpwi r7, 0x0
    stfs f0, 0xfb8(r3)
    stfs f0, 0xfbc(r3)
    bne lbl_fn_8028C834_0000004C
    li r6, 0x1
    b lbl_fn_8028C834_000000B0
lbl_fn_8028C834_0000004C:
    lwz r4, 0x15d4(r3)
    lwz r0, 0xc0(r7)
    cmpw r4, r0
    ble lbl_fn_8028C834_00000064
    li r6, 0x1
    b lbl_fn_8028C834_000000B0
lbl_fn_8028C834_00000064:
    addi r5, r4, 0x1
    lis r0, 0x4330
    xoris r4, r5, 0x8000
    stw r4, 0x234(r1)
    lis r4, lbl_807452F8@ha
    li r6, 0x0
    stw r0, 0x230(r1)
    lfd f3, lbl_807452F8@l(r4)
    lfd f0, 0x230(r1)
    stw r5, 0x15d4(r3)
    fsubs f0, f0, f3
    stw r0, 0x238(r1)
    stfs f0, 0xfb8(r3)
    lwz r0, 0xc0(r7)
    xoris r0, r0, 0x8000
    stw r0, 0x23c(r1)
    lfd f0, 0x238(r1)
    fsubs f0, f0, f3
    stfs f0, 0xfbc(r3)
lbl_fn_8028C834_000000B0:
    cmpwi r6, 0x0
    beq lbl_fn_8028C834_000002E4
    lfs f3, 0x2e4(r3)
    lfs f0, lbl_80883B38
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_8028C834_000002E4
    mr r3, r31
    li r4, 0x6
    bl fn_8016E970
    lfs f0, lbl_80883AA8
    li r0, 0x1
    li r3, 0x1e
    stw r3, 0x560(r31)
    lfs f1, lbl_80883A98
    addi r3, r31, 0xb0
    stw r0, 0x14b4(r31)
    li r4, 0x0
    lfs f2, lbl_80883AA0
    li r5, 0x145
    stw r0, 0x3fc(r31)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2fc(r31)
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    b lbl_fn_8028C834_000002E4
lbl_fn_8028C834_00000120:
    cmpwi r0, 0x1
    bne lbl_fn_8028C834_0000023C
    lfs f3, 0x2e4(r3)
    lfs f0, lbl_80883B3C
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_8028C834_000002E4
    lwz r3, lbl_8087F1E4
    lwz r4, 0x2f4(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8028C834_00000150
    b lbl_fn_8028C834_00000154
lbl_fn_8028C834_00000150:
    la r4, lbl_808813D0
lbl_fn_8028C834_00000154:
    lwz r5, 0x60(r31)
    addi r3, r1, 0x30
    lwz r5, 0x4(r5)
    crclr 6
    bl fn_800DD3FC
    lwz r3, lbl_8087F048
    addi r4, r1, 0x30
    bl fn_80109828
    lis r4, lbl_80745314@ha
    addi r3, r31, 0xb0
    addi r4, r4, lbl_80745314@l
    li r5, 0x0
    addi r4, r4, 0x33f
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8028C834_0000019C
    li r4, 0x0
    b lbl_fn_8028C834_000001A8
lbl_fn_8028C834_0000019C:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r4, r3, r0
lbl_fn_8028C834_000001A8:
    lfs f5, 0x2c(r4)
    addi r30, r1, 0x14
    lfs f6, 0x1c(r4)
    addi r3, r1, 0x8
    lfs f7, 0xc(r4)
    mr r4, r3
    stfs f7, 0x20(r1)
    stfs f6, 0x24(r1)
    stfs f5, 0x28(r1)
    lwz r5, 0x14b0(r31)
    lfs f3, 0x52c(r5)
    lfs f0, 0x528(r5)
    lfs f4, 0x530(r5)
    fsubs f3, f3, f6
    fsubs f0, f0, f7
    fsubs f2, f4, f5
    stfs f3, 0x18(r1)
    stfs f0, 0x14(r1)
    psq_l f1, 0x0(r30), 0, 0
    stfs f2, 0x1c(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x10(r1)
    bl fn_805F98D0
    lwz r3, lbl_8087F048
    mr r4, r31
    lwz r5, 0x15d0(r31)
    mr r7, r30
    lfs f1, lbl_80883A98
    addi r6, r1, 0x20
    lfs f2, lbl_80883AA8
    li r8, 0x0
    li r9, 0x100
    li r10, 0x0
    bl fn_800F8574
    li r0, 0x2
    stw r0, 0x14b4(r31)
    b lbl_fn_8028C834_000002E4
lbl_fn_8028C834_0000023C:
    lfs f31, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    lfs f0, lbl_80883AD8
    fsubs f0, f1, f0
    fcmpo cr0, f31, f0
    cror eq, gt, eq
    bne lbl_fn_8028C834_000002E4
    li r30, 0x0
    stw r30, 0x14b4(r31)
    stw r30, 0x14b8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883A98
    li r0, 0x6
    stw r3, 0x590(r31)
    mr r3, r31
    li r4, 0x3
    stfs f0, 0x1510(r31)
    stw r30, 0x15d4(r31)
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f0, lbl_80883AA8
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80883A98
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x2
    lfs f2, lbl_80883AA0
    li r6, 0x1
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, -0x2
    li r6, 0x1
    bl fn_80239DAC
lbl_fn_8028C834_000002E4:
    lwz r0, 0x264(r1)
    psq_l f31, 0x258(r1), 0, 0
    lfd f31, 0x250(r1)
    lwz r31, 0x24c(r1)
    lwz r30, 0x248(r1)
    mtlr r0
    addi r1, r1, 0x260
    blr
}

asm void fn_8028CB38(void)
{
    nofralloc
    stwu r1, -0x190(r1)
    mflr r0
    stw r0, 0x194(r1)
    stfd f31, 0x180(r1)
    psq_st f31, 0x188(r1), 0, 0
    stw r31, 0x17c(r1)
    mr r31, r3
    stw r30, 0x178(r1)
    stw r29, 0x174(r1)
    lwz r0, 0x14b4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8028CB38_00000464
    bl fn_802913B0
    cmpwi r3, 0x0
    beq lbl_fn_8028CB38_00000758
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80139550
    lfs f0, lbl_80883B38
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_8028CB38_00000758
    mr r3, r31
    li r4, 0x6
    bl fn_8016E970
    mr r3, r31
    li r4, 0x1e
    bl fn_801C0730
    li r0, 0x1
    stw r0, 0x14b4(r31)
    addi r3, r31, 0xb0
    li r4, 0x1
    bl fn_80139F24
    lfs f1, lbl_80883AA8
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_8013C554
    lfs f1, lbl_80883AA8
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80139F3C
    lfs f1, lbl_80883A98
    addi r3, r31, 0xb0
    lfs f2, lbl_80883AA0
    li r4, 0x0
    li r5, 0x14f
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    mr r3, r31
    bl fn_80290674
    li r0, 0x0
    stw r0, 0x14b8(r31)
    bl fn_8013A194
    bl fn_800F8548
    stw r3, 0x1550(r31)
    bl fn_8013A194
    bl fn_800F8548
    stw r3, 0x1554(r31)
    bl fn_80121F00
    li r4, 0x96
    bl fn_80370A78
    cmpwi r3, 0x0
    bne lbl_fn_8028CB38_00000418
    bl fn_80121F00
    li r4, 0x96
    li r5, 0x1
    bl fn_80370AE4
lbl_fn_8028CB38_00000418:
    lwz r3, 0x14b0(r31)
    bl fn_8013C38C
    mr r4, r3
    addi r3, r1, 0x48
    addi r5, r31, 0x528
    bl fn_80013338
    addi r3, r1, 0x48
    bl fn_801C3910
    stfs f1, 0x1558(r31)
    bl fn_800F7FA0
    mr r4, r31
    li r5, 0x3e8
    bl fn_800F7FA8
    bl fn_800F7FA0
    addi r4, r31, 0x155c
    addi r5, r31, 0xb0
    li r6, 0x1
    bl fn_8026607C
    b lbl_fn_8028CB38_00000758
lbl_fn_8028CB38_00000464:
    cmpwi r0, 0x1
    bne lbl_fn_8028CB38_00000758
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fmr f31, f1
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80139550
    fcmpo cr0, f1, f31
    ble lbl_fn_8028CB38_00000498
    mr r3, r31
    bl fn_8028F4AC
lbl_fn_8028CB38_00000498:
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80139550
    lfs f0, lbl_80883B40
    fcmpo cr0, f0, f1
    cror eq, lt, eq
    bne lbl_fn_8028CB38_00000548
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80139550
    lfs f0, lbl_80883B44
    fcmpo cr0, f1, f0
    bge lbl_fn_8028CB38_00000548
    lwz r0, 0x154c(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8028CB38_00000574
    li r29, 0x1
    li r30, 0x0
    stw r29, 0x154c(r31)
    stw r30, 0x1548(r31)
    bl fn_800F7FA0
    mr r4, r31
    li r5, 0x3e8
    li r6, 0x1
    bl fn_80239DAC
    bl fn_800F7FA0
    mr r4, r31
    li r5, 0x3e8
    bl fn_800F7FA8
    bl fn_800F7FA0
    stw r30, 0x8(r1)
    li r0, -0x1
    lfs f1, lbl_80883AA8
    addi r4, r31, 0x1568
    stw r0, 0xc(r1)
    addi r7, r31, 0x1580
    li r5, -0x1
    li r6, 0x5
    stw r29, 0x10(r1)
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_8023A680
    b lbl_fn_8028CB38_00000574
lbl_fn_8028CB38_00000548:
    lwz r0, 0x154c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8028CB38_00000574
    li r0, 0x0
    stw r0, 0x154c(r31)
    stw r0, 0x1548(r31)
    bl fn_800F7FA0
    mr r4, r31
    li r5, 0x3e8
    li r6, 0x1
    bl fn_80239DAC
lbl_fn_8028CB38_00000574:
    lwz r0, 0x154c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8028CB38_00000758
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80139550
    lfs f4, lbl_80883B40
    addi r3, r1, 0x84
    lfs f2, lbl_80883AC0
    fsubs f0, f1, f4
    lfs f1, lbl_80883A98
    fmr f3, f1
    fdivs f31, f0, f4
    bl fn_8000D114
    fmr f1, f31
    la r3, lbl_8087DC38
    la r4, lbl_8087DC3C
    bl fn_800F8524
    bl fn_801125F8
    addi r3, r1, 0xf0
    bl fn_8028CFB0
    addi r3, r1, 0x84
    addi r4, r1, 0xf0
    bl fn_80011410
    addi r3, r1, 0xc0
    addi r4, r31, 0x534
    bl fn_800109E0
    addi r3, r1, 0x84
    addi r4, r1, 0xc0
    bl fn_80011410
    addi r3, r1, 0x3c
    addi r4, r1, 0x84
    bl fn_80011034
    addi r3, r1, 0x90
    addi r4, r1, 0x3c
    bl fn_800109E0
    addi r3, r31, 0x1580
    addi r4, r1, 0x90
    bl fn_8008CD1C
    lis r4, lbl_80745314@ha
    addi r3, r31, 0xb0
    addi r4, r4, lbl_80745314@l
    addi r4, r4, 0x33f
    bl fn_800132EC
    cmpwi r3, 0x0
    beq lbl_fn_8028CB38_00000640
    mr r4, r3
    addi r3, r1, 0x30
    bl fn_8000D0F8
    addi r4, r1, 0x30
    b lbl_fn_8028CB38_00000644
lbl_fn_8028CB38_00000640:
    addi r4, r31, 0x528
lbl_fn_8028CB38_00000644:
    addi r3, r1, 0x78
    bl fn_8001047C
    addi r3, r31, 0x1580
    addi r4, r1, 0x78
    bl fn_801479E4
    lwz r4, 0x1548(r31)
    lis r3, 0x5555
    addi r0, r3, 0x5556
    addi r4, r4, 0x1
    stw r4, 0x1548(r31)
    mulhw r3, r0, r4
    srwi r0, r3, 31
    add r0, r3, r0
    mulli r0, r0, 0x3
    subf. r0, r0, r4
    bne lbl_fn_8028CB38_00000740
    addi r3, r1, 0x6c
    bl fn_80057A64
    addi r3, r1, 0x60
    bl fn_80057A64
    addi r3, r1, 0x6c
    addi r4, r1, 0x78
    bl fn_8000D124
    lfs f1, lbl_80883AF0
    addi r3, r1, 0x18
    addi r4, r1, 0x84
    bl fn_800F72CC
    addi r3, r1, 0x24
    addi r4, r1, 0x6c
    addi r5, r1, 0x18
    bl fn_80013410
    addi r3, r1, 0x60
    addi r4, r1, 0x24
    bl fn_8000D124
    addi r3, r1, 0x120
    bl fn_80140500
    bl fn_801404F8
    addi r4, r1, 0x120
    addi r5, r1, 0x6c
    addi r6, r1, 0x60
    lis r7, 0x8000
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_8028CB38_00000740
    addi r3, r1, 0x54
    addi r4, r1, 0x124
    bl fn_8001047C
    bl fn_8013A194
    li r0, -0x1
    stw r0, 0x8(r1)
    lfs f1, lbl_80883A98
    mr r4, r31
    stw r0, 0xc(r1)
    addi r7, r1, 0x54
    lfs f2, lbl_80883AA8
    addi r8, r31, 0x534
    lwz r5, 0x14d0(r31)
    li r9, 0x0
    lwz r6, 0x1550(r31)
    li r10, 0x1e
    bl fn_800FAB80
lbl_fn_8028CB38_00000740:
    bl fn_80121F00
    bl fn_80122550
    lfs f1, lbl_80883AA0
    li r4, 0x1
    fmr f2, f1
    bl fn_8028CFB8
lbl_fn_8028CB38_00000758:
    lwz r0, 0x194(r1)
    psq_l f31, 0x188(r1), 0, 0
    lfd f31, 0x180(r1)
    lwz r31, 0x17c(r1)
    lwz r30, 0x178(r1)
    lwz r29, 0x174(r1)
    mtlr r0
    addi r1, r1, 0x190
    blr
}

asm void fn_8028CFB0(void)
{
    nofralloc
    li r4, 0x78
    b fn_805F8E70
}

asm void fn_8028CFB8(void)
{
    nofralloc
    lwz r0, 0x900(r3)
    stw r4, 0x904(r3)
    srwi r4, r0, 31
    clrlwi r0, r0, 31
    xor r0, r0, r4
    stfs f1, 0x908(r3)
    subf r0, r4, r0
    stw r0, 0x900(r3)
    stfs f2, 0x90c(r3)
    blr
}

asm void fn_8028CFE0(void)
{
    nofralloc
    stwu r1, -0x180(r1)
    mflr r0
    stw r0, 0x184(r1)
    stfd f31, 0x170(r1)
    psq_st f31, 0x178(r1), 0, 0
    stfd f30, 0x160(r1)
    psq_st f30, 0x168(r1), 0, 0
    stw r31, 0x15c(r1)
    mr r31, r3
    stw r30, 0x158(r1)
    stw r29, 0x154(r1)
    lwz r0, 0x14b4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8028CFE0_00000D68
    lfs f30, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    lfs f0, lbl_80883AA8
    fsubs f0, f1, f0
    fcmpo cr0, f30, f0
    ble lbl_fn_8028CFE0_00000AA0
    lfs f3, 0x1980(r31)
    addi r30, r1, 0x98
    lfs f0, 0x530(r31)
    addi r5, r1, 0x8c
    lfs f5, 0x197c(r31)
    mr r3, r30
    fsubs f2, f3, f0
    lfs f4, 0x52c(r31)
    lfs f3, 0x1978(r31)
    mr r4, r30
    lfs f0, 0x528(r31)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x90(r1)
    stfs f0, 0x8c(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0x94(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0xa0(r1)
    bl fn_805F98D0
    lfs f2, 0xa0(r1)
    addi r29, r1, 0xa4
    psq_l f1, 0x0(r30), 0, 0
    fabs f3, f2
    lfs f0, lbl_80883AB0
    psq_st f1, 0x0(r29), 0, 0
    frsp f3, f3
    stfs f2, 0xac(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_8028CFE0_000008A0
    lfs f3, 0xa4(r1)
    lfs f0, lbl_80883A98
    fcmpo cr0, f3, f0
    ble lbl_fn_8028CFE0_00000894
    lfs f0, lbl_80883AB4
    b lbl_fn_8028CFE0_00000898
lbl_fn_8028CFE0_00000894:
    lfs f0, lbl_80883AB8
lbl_fn_8028CFE0_00000898:
    stfs f0, 0x78(r1)
    b lbl_fn_8028CFE0_000008B4
lbl_fn_8028CFE0_000008A0:
    frsp f2, f2
    lfs f1, 0xa4(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x78(r1)
lbl_fn_8028CFE0_000008B4:
    lfs f0, 0x78(r1)
    addi r3, r1, 0xc8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883A98
    addi r4, r1, 0x68
    lfs f30, 0xd0(r1)
    mr r5, r4
    lfs f31, 0xcc(r1)
    addi r3, r1, 0xf8
    lfs f13, 0xc8(r1)
    lfs f12, 0xe0(r1)
    lfs f11, 0xdc(r1)
    lfs f10, 0xd8(r1)
    lfs f9, 0xf0(r1)
    lfs f8, 0xec(r1)
    lfs f7, 0xe8(r1)
    lfs f6, 0xf4(r1)
    lfs f5, 0xe4(r1)
    lfs f4, 0xd4(r1)
    lfs f0, lbl_80883AA8
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0xac(r1)
    stfs f3, 0x128(r1)
    stfs f3, 0x12c(r1)
    stfs f3, 0x130(r1)
    stfs f0, 0x134(r1)
    stfs f13, 0x38(r1)
    stfs f31, 0x3c(r1)
    stfs f30, 0x40(r1)
    stfs f13, 0xf8(r1)
    stfs f31, 0xfc(r1)
    stfs f30, 0x100(r1)
    stfs f10, 0x44(r1)
    stfs f11, 0x48(r1)
    stfs f12, 0x4c(r1)
    stfs f10, 0x108(r1)
    stfs f11, 0x10c(r1)
    stfs f12, 0x110(r1)
    stfs f7, 0x50(r1)
    stfs f8, 0x54(r1)
    stfs f9, 0x58(r1)
    stfs f7, 0x118(r1)
    stfs f8, 0x11c(r1)
    stfs f9, 0x120(r1)
    stfs f4, 0x5c(r1)
    stfs f5, 0x60(r1)
    stfs f6, 0x64(r1)
    stfs f4, 0x104(r1)
    stfs f5, 0x114(r1)
    stfs f6, 0x124(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x70(r1)
    bl fn_805F9750
    lfs f2, 0x70(r1)
    lfs f0, lbl_80883AB0
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8028CFE0_000009D0
    lfs f3, 0x6c(r1)
    lfs f0, lbl_80883A98
    fcmpo cr0, f3, f0
    ble lbl_fn_8028CFE0_000009C0
    lfs f0, lbl_80883AB4
    b lbl_fn_8028CFE0_000009C4
lbl_fn_8028CFE0_000009C0:
    lfs f0, lbl_80883AB8
lbl_fn_8028CFE0_000009C4:
    fneg f0, f0
    stfs f0, 0x74(r1)
    b lbl_fn_8028CFE0_000009E4
lbl_fn_8028CFE0_000009D0:
    lfs f1, 0x6c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x74(r1)
lbl_fn_8028CFE0_000009E4:
    addi r3, r1, 0x74
    lfs f2, lbl_80883A98
    psq_l f1, 0x0(r3), 0, 0
    mr r4, r31
    psq_st f1, 0x0(r29), 0, 0
    li r5, 0x0
    li r6, 0x1
    lfs f0, 0xa8(r1)
    stfs f0, 0x538(r31)
    stfs f2, 0x7c(r1)
    lwz r3, lbl_8087F3C0
    stfs f2, 0xac(r1)
    bl fn_80239DAC
    li r30, 0x0
    stw r30, 0x14b4(r31)
    stw r30, 0x14b8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883A98
    li r0, 0x6
    stw r3, 0x590(r31)
    mr r3, r31
    li r4, 0x3
    stfs f0, 0x1510(r31)
    stw r30, 0x15d4(r31)
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f0, lbl_80883AA8
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80883A98
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x2
    lfs f2, lbl_80883AA0
    li r6, 0x1
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, -0x2
    li r6, 0x1
    bl fn_80239DAC
    b lbl_fn_8028CFE0_00000D68
lbl_fn_8028CFE0_00000AA0:
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_80883B08
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_8028CFE0_00000AE4
    lfs f0, lbl_80883B4C
    fcmpo cr0, f3, f0
    bge lbl_fn_8028CFE0_00000AE4
    lwz r3, lbl_8087F430
    li r4, 0x97
    bl fn_80370A78
    cmpwi r3, 0x0
    bne lbl_fn_8028CFE0_00000AE4
    lwz r3, lbl_8087F430
    li r4, 0x97
    li r5, 0x1
    bl fn_80370AE4
lbl_fn_8028CFE0_00000AE4:
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_80883B50
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_8028CFE0_00000B74
    lfs f0, lbl_80883B00
    fcmpo cr0, f3, f0
    bge lbl_fn_8028CFE0_00000B74
    lfs f3, lbl_80883A98
    mr r3, r31
    lfs f0, lbl_80883B54
    li r4, 0x0
    stfs f3, 0xbc(r1)
    stfs f3, 0xc0(r1)
    stfs f0, 0xc4(r1)
    bl fn_80232B7C
    lfs f0, lbl_80883AA8
    lis r8, lbl_807C7030@ha
    stfs f0, 0x28(r1)
    li r3, -0x1
    li r0, 0x1
    lfs f1, lbl_80883AD8
    stfs f0, 0x2c(r1)
    addi r4, r31, 0x15b8
    addi r5, r31, 0xb0
    addi r7, r1, 0xbc
    stfs f0, 0x30(r1)
    addi r8, r8, lbl_807C7030@l
    addi r9, r1, 0x28
    li r6, 0x0
    stfs f0, 0x34(r1)
    li r10, -0x1
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
lbl_fn_8028CFE0_00000B74:
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_80883B58
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_8028CFE0_00000BC4
    lfs f0, lbl_80883B5C
    fcmpo cr0, f3, f0
    bge lbl_fn_8028CFE0_00000BC4
    mr r3, r31
    li r4, 0x6
    bl fn_8016E970
    li r0, 0x1e
    stw r0, 0x560(r31)
    mr r4, r31
    li r5, 0x0
    lwz r3, lbl_8087F3C0
    li r6, 0x1
    bl fn_80239DAC
    mr r3, r31
    bl fn_80290AB4
lbl_fn_8028CFE0_00000BC4:
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_80883ADC
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_8028CFE0_00000C5C
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    lfs f0, lbl_80883B60
    lfs f6, lbl_80883A98
    fdivs f7, f0, f1
    lfs f10, lbl_80883B68
    lfs f4, 0x1524(r31)
    lfs f3, 0x1520(r31)
    lfs f0, 0x151c(r31)
    lfs f11, lbl_80883B64
    fmuls f8, f4, f10
    lfs f5, 0x538(r31)
    fmuls f9, f3, f10
    lfs f3, 0x52c(r31)
    fmuls f10, f0, f10
    lfs f4, 0x528(r31)
    lfs f0, 0x530(r31)
    fadds f5, f5, f11
    fadds f4, f4, f10
    stfs f6, 0xb0(r1)
    fadds f3, f3, f9
    fadds f0, f0, f8
    stfs f6, 0x14(r1)
    stfs f7, 0x24(r1)
    stfs f5, 0x538(r31)
    stfs f10, 0x80(r1)
    stfs f9, 0x84(r1)
    stfs f8, 0x88(r1)
    stfs f4, 0x528(r31)
    stfs f3, 0x52c(r31)
    stfs f0, 0x530(r31)
    b lbl_fn_8028CFE0_00000CD8
lbl_fn_8028CFE0_00000C5C:
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_8028CFE0_00000CD8
    lwz r5, 0x15d0(r31)
    lfs f0, lbl_80883A98
    cmpwi r5, 0x0
    stfs f0, 0xfb8(r31)
    stfs f0, 0xfbc(r31)
    beq lbl_fn_8028CFE0_00000CD8
    lwz r3, 0x15d4(r31)
    lwz r0, 0xc0(r5)
    cmpw r3, r0
    bgt lbl_fn_8028CFE0_00000CD8
    addi r4, r3, 0x1
    lis r0, 0x4330
    xoris r3, r4, 0x8000
    stw r3, 0x13c(r1)
    lis r3, lbl_807452F8@ha
    stw r0, 0x138(r1)
    lfd f3, lbl_807452F8@l(r3)
    lfd f0, 0x138(r1)
    stw r4, 0x15d4(r31)
    fsubs f0, f0, f3
    stw r0, 0x140(r1)
    stfs f0, 0xfb8(r31)
    lwz r0, 0xc0(r5)
    xoris r0, r0, 0x8000
    stw r0, 0x144(r1)
    lfd f0, 0x140(r1)
    fsubs f0, f0, f3
    stfs f0, 0xfbc(r31)
lbl_fn_8028CFE0_00000CD8:
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_80883AD4
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_8028CFE0_00000D20
    lfs f0, lbl_80883B50
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_8028CFE0_00000D20
    lfs f3, 0x52c(r31)
    lfs f0, lbl_80883B54
    lfs f4, lbl_80883B6C
    fcmpo cr0, f3, f0
    ble lbl_fn_8028CFE0_00000D1C
    fadds f0, f3, f4
    stfs f0, 0x52c(r31)
    b lbl_fn_8028CFE0_00000D20
lbl_fn_8028CFE0_00000D1C:
    stfs f0, 0x52c(r31)
lbl_fn_8028CFE0_00000D20:
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_80883B70
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_8028CFE0_00000D68
    lfs f0, lbl_80883B74
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_8028CFE0_00000D68
    lfs f3, 0x52c(r31)
    lfs f0, lbl_80883AF4
    lfs f4, lbl_80883B78
    fcmpo cr0, f3, f0
    bge lbl_fn_8028CFE0_00000D64
    fadds f0, f3, f4
    stfs f0, 0x52c(r31)
    b lbl_fn_8028CFE0_00000D68
lbl_fn_8028CFE0_00000D64:
    stfs f0, 0x52c(r31)
lbl_fn_8028CFE0_00000D68:
    lwz r0, 0x184(r1)
    psq_l f31, 0x178(r1), 0, 0
    lfd f31, 0x170(r1)
    psq_l f30, 0x168(r1), 0, 0
    lfd f30, 0x160(r1)
    lwz r31, 0x15c(r1)
    lwz r30, 0x158(r1)
    lwz r29, 0x154(r1)
    mtlr r0
    addi r1, r1, 0x180
    blr
}

asm void fn_8028D5C8(void)
{
    nofralloc
    stwu r1, -0x360(r1)
    mflr r0
    stw r0, 0x364(r1)
    stfd f31, 0x350(r1)
    psq_st f31, 0x358(r1), 0, 0
    stw r31, 0x34c(r1)
    li r31, 0x1
    stw r30, 0x348(r1)
    mr r30, r3
    stw r29, 0x344(r1)
    lwz r4, 0x162c(r3)
    lwz r0, 0x19ac(r3)
    cmpw r4, r0
    bge lbl_fn_8028D5C8_00001574
    lwz r0, 0x19a8(r3)
    li r31, 0x0
    lwz r4, 0x14b8(r3)
    mulli r0, r0, 0x1e
    cmpw r4, r0
    ble lbl_fn_8028D5C8_00001574
    li r7, 0x0
    stw r7, 0x14b8(r3)
    li r6, -0x1
    lis r4, lbl_8077A708@ha
    lwz r0, 0x94(r1)
    li r5, 0x1
    stw r7, 0x78(r1)
    addi r4, r4, lbl_8077A708@l
    clrlwi r0, r0, 4
    stw r7, 0x7c(r1)
    stw r7, 0x80(r1)
    stw r7, 0x84(r1)
    stw r7, 0x88(r1)
    stw r6, 0x8c(r1)
    stw r0, 0x94(r1)
    stw r6, 0x90(r1)
    lwz r0, 0x19b0(r3)
    stw r0, 0x7c(r1)
    stw r5, 0x78(r1)
    lwz r3, 0x1630(r3)
    stw r4, 0xf0(r1)
    addi r3, r3, 0x7d4
    lfs f0, 0x4(r3)
    stfs f0, 0xf4(r1)
    lfs f1, 0x8(r3)
    stfs f1, 0xf8(r1)
    lwz r4, 0xc(r3)
    stw r4, 0xfc(r1)
    lwz r4, 0x10(r3)
    stw r4, 0x100(r1)
    lwz r4, 0x14(r3)
    stw r4, 0x104(r1)
    lwz r4, 0x18(r3)
    stw r4, 0x108(r1)
    lwz r4, 0x1c(r3)
    stw r4, 0x10c(r1)
    lfs f1, 0x20(r3)
    stfs f1, 0x110(r1)
    lfs f1, 0x24(r3)
    stfs f1, 0x114(r1)
    lfs f1, 0x28(r3)
    stfs f1, 0x118(r1)
    lfs f1, 0x2c(r3)
    stfs f1, 0x11c(r1)
    lfs f1, 0x30(r3)
    stfs f1, 0x120(r1)
    lfs f1, 0x34(r3)
    stfs f1, 0x124(r1)
    lfs f1, 0x38(r3)
    stfs f1, 0x128(r1)
    lfs f1, 0x3c(r3)
    stfs f1, 0x12c(r1)
    lfs f1, 0x40(r3)
    stfs f1, 0x130(r1)
    lfs f1, 0x44(r3)
    stfs f1, 0x134(r1)
    lwz r4, 0x48(r3)
    stw r4, 0x138(r1)
    lwz r4, 0x4c(r3)
    stw r4, 0x13c(r1)
    lfs f1, 0x50(r3)
    stfs f1, 0x140(r1)
    lfs f1, 0x54(r3)
    stfs f1, 0x144(r1)
    lwz r4, 0x58(r3)
    stw r4, 0x148(r1)
    lwz r4, 0x5c(r3)
    stw r4, 0x14c(r1)
    lwz r5, 0x60(r3)
    lwz r4, 0x64(r3)
    stw r4, 0x154(r1)
    stw r5, 0x150(r1)
    lwz r5, 0x68(r3)
    lwz r4, 0x6c(r3)
    stw r4, 0x15c(r1)
    stw r5, 0x158(r1)
    lwz r5, 0x70(r3)
    lwz r4, 0x74(r3)
    stw r4, 0x164(r1)
    stw r5, 0x160(r1)
    lwz r4, 0x78(r3)
    stw r4, 0x168(r1)
    lwz r5, 0x7c(r3)
    lwz r4, 0x80(r3)
    stw r4, 0x170(r1)
    stw r5, 0x16c(r1)
    lwz r5, 0x84(r3)
    lwz r4, 0x88(r3)
    stw r4, 0x178(r1)
    stw r5, 0x174(r1)
    lwz r5, 0x8c(r3)
    lwz r4, 0x90(r3)
    stw r4, 0x180(r1)
    stw r5, 0x17c(r1)
    lwz r4, 0x94(r3)
    stw r4, 0x184(r1)
    lwz r5, 0x98(r3)
    lwz r4, 0x9c(r3)
    stw r4, 0x18c(r1)
    stw r5, 0x188(r1)
    lwz r4, 0xa0(r3)
    stw r4, 0x190(r1)
    lwz r4, 0xa4(r3)
    stw r4, 0x194(r1)
    lwz r4, 0xa8(r3)
    stw r4, 0x198(r1)
    lwz r4, 0xac(r3)
    stw r4, 0x19c(r1)
    lwz r4, 0xb0(r3)
    stw r4, 0x1a0(r1)
    lfs f1, 0xb4(r3)
    stfs f1, 0x1a4(r1)
    lfs f1, 0xb8(r3)
    stfs f1, 0x1a8(r1)
    lwz r4, 0xbc(r3)
    stw r4, 0x1ac(r1)
    lwz r4, 0xc0(r3)
    stw r4, 0x1b0(r1)
    lwz r4, 0xc4(r3)
    stw r4, 0x1b4(r1)
    lwz r5, 0xc8(r3)
    lwz r4, 0xcc(r3)
    stw r4, 0x1bc(r1)
    stw r5, 0x1b8(r1)
    lwz r5, 0xd0(r3)
    lwz r4, 0xd4(r3)
    stw r4, 0x1c4(r1)
    stw r5, 0x1c0(r1)
    lwz r5, 0xd8(r3)
    lwz r4, 0xdc(r3)
    stw r4, 0x1cc(r1)
    stw r5, 0x1c8(r1)
    lwz r5, 0xe0(r3)
    lwz r4, 0xe4(r3)
    stw r4, 0x1d4(r1)
    stw r5, 0x1d0(r1)
    lfs f1, 0xe8(r3)
    stfs f1, 0x1d8(r1)
    lfs f1, 0xec(r3)
    stfs f1, 0x1dc(r1)
    lfs f1, 0xf0(r3)
    stfs f1, 0x1e0(r1)
    lfs f1, 0xf4(r3)
    stfs f1, 0x1e4(r1)
    lfs f1, 0xf8(r3)
    stfs f1, 0x1e8(r1)
    lfs f1, 0xfc(r3)
    stfs f1, 0x1ec(r1)
    lfs f1, 0x100(r3)
    stfs f1, 0x1f0(r1)
    lfs f1, 0x104(r3)
    stfs f1, 0x1f4(r1)
    lwz r4, 0x108(r3)
    stw r4, 0x1f8(r1)
    lwz r4, 0x10c(r3)
    stw r4, 0x1fc(r1)
    lfs f1, 0x110(r3)
    stfs f1, 0x200(r1)
    lfs f1, 0x114(r3)
    stfs f1, 0x204(r1)
    lwz r4, 0x118(r3)
    stw r4, 0x208(r1)
    lwz r4, 0x11c(r3)
    stw r4, 0x20c(r1)
    lwz r5, 0x120(r3)
    lwz r4, 0x124(r3)
    stw r4, 0x214(r1)
    stw r5, 0x210(r1)
    lwz r5, 0x128(r3)
    lwz r4, 0x12c(r3)
    stw r4, 0x21c(r1)
    stw r5, 0x218(r1)
    lwz r5, 0x130(r3)
    lwz r4, 0x134(r3)
    stw r4, 0x224(r1)
    stw r5, 0x220(r1)
    lwz r4, 0x138(r3)
    stw r4, 0x228(r1)
    lwz r5, 0x13c(r3)
    lwz r4, 0x140(r3)
    stw r4, 0x230(r1)
    stw r5, 0x22c(r1)
    lwz r5, 0x144(r3)
    lwz r4, 0x148(r3)
    stw r4, 0x238(r1)
    stw r5, 0x234(r1)
    lwz r5, 0x14c(r3)
    lwz r4, 0x150(r3)
    stw r4, 0x240(r1)
    stw r5, 0x23c(r1)
    lwz r4, 0x154(r3)
    stw r4, 0x244(r1)
    lwz r5, 0x158(r3)
    lwz r4, 0x15c(r3)
    stw r4, 0x24c(r1)
    stw r5, 0x248(r1)
    lwz r4, 0x160(r3)
    stw r4, 0x250(r1)
    lwz r4, 0x164(r3)
    stw r4, 0x254(r1)
    lwz r4, 0x168(r3)
    stw r4, 0x258(r1)
    lwz r4, 0x16c(r3)
    stw r4, 0x25c(r1)
    lwz r4, 0x170(r3)
    stw r4, 0x260(r1)
    lfs f1, 0x174(r3)
    stfs f1, 0x264(r1)
    lfs f1, 0x178(r3)
    stfs f1, 0x268(r1)
    lwz r4, 0x17c(r3)
    stw r4, 0x26c(r1)
    lwz r4, 0x180(r3)
    stw r4, 0x270(r1)
    lwz r4, 0x184(r3)
    stw r4, 0x274(r1)
    lwz r5, 0x188(r3)
    lwz r4, 0x18c(r3)
    stw r4, 0x27c(r1)
    stw r5, 0x278(r1)
    lwz r5, 0x190(r3)
    lwz r4, 0x194(r3)
    stw r4, 0x284(r1)
    stw r5, 0x280(r1)
    lwz r5, 0x198(r3)
    lwz r4, 0x19c(r3)
    stw r4, 0x28c(r1)
    stw r5, 0x288(r1)
    lwz r5, 0x1a0(r3)
    lwz r4, 0x1a4(r3)
    stw r4, 0x294(r1)
    stw r5, 0x290(r1)
    lwz r4, 0x1a8(r3)
    stw r4, 0x298(r1)
    lwz r4, 0x1ac(r3)
    stw r4, 0x29c(r1)
    lfs f1, 0x1b0(r3)
    stfs f1, 0x2a0(r1)
    lfs f1, 0x1b4(r3)
    stfs f1, 0x2a4(r1)
    lfs f1, 0x1b8(r3)
    stfs f1, 0x2a8(r1)
    lfs f1, 0x1bc(r3)
    stfs f1, 0x2ac(r1)
    lfs f1, 0x1c0(r3)
    stfs f1, 0x2b0(r1)
    lfs f1, 0x1c4(r3)
    stfs f1, 0x2b4(r1)
    lwz r4, 0x1c8(r3)
    stw r4, 0x2b8(r1)
    lwz r5, 0x1cc(r3)
    lwz r4, 0x1d0(r3)
    stw r4, 0x2c0(r1)
    stw r5, 0x2bc(r1)
    lwz r5, 0x1d4(r3)
    lwz r4, 0x1d8(r3)
    stw r4, 0x2c8(r1)
    stw r5, 0x2c4(r1)
    lwz r5, 0x1dc(r3)
    lwz r4, 0x1e0(r3)
    stw r4, 0x2d0(r1)
    stw r5, 0x2cc(r1)
    lwz r5, 0x1e4(r3)
    lwz r4, 0x1e8(r3)
    stw r4, 0x2d8(r1)
    stw r5, 0x2d4(r1)
    lwz r5, 0x1ec(r3)
    lwz r4, 0x1f0(r3)
    stw r4, 0x2e0(r1)
    stw r5, 0x2dc(r1)
    lwz r5, 0x1f4(r3)
    lwz r4, 0x1f8(r3)
    stw r4, 0x2e8(r1)
    stw r5, 0x2e4(r1)
    lwz r5, 0x1fc(r3)
    lwz r4, 0x200(r3)
    stw r4, 0x2f0(r1)
    stw r5, 0x2ec(r1)
    lwz r5, 0x204(r3)
    lwz r4, 0x208(r3)
    stw r4, 0x2f8(r1)
    stw r5, 0x2f4(r1)
    lwz r5, 0x20c(r3)
    lwz r4, 0x210(r3)
    stw r4, 0x300(r1)
    stw r5, 0x2fc(r1)
    lwz r5, 0x214(r3)
    lwz r4, 0x218(r3)
    stw r4, 0x308(r1)
    stw r5, 0x304(r1)
    lwz r5, 0x21c(r3)
    lwz r4, 0x220(r3)
    stw r4, 0x310(r1)
    stw r5, 0x30c(r1)
    lwz r4, 0x224(r3)
    xoris r6, r0, 0x8000
    stw r4, 0x314(r1)
    lis r7, lbl_807452F8@ha
    lis r0, 0x4330
    lfd f2, lbl_807452F8@l(r7)
    lfs f1, 0x228(r3)
    addi r4, r1, 0xf0
    stfs f1, 0x318(r1)
    li r5, 0x240
    lwz r7, 0x22c(r3)
    stw r7, 0x31c(r1)
    lbz r7, 0x230(r3)
    stb r7, 0x320(r1)
    lbz r7, 0x231(r3)
    stb r7, 0x321(r1)
    stw r6, 0x334(r1)
    lwz r7, 0x232(r3)
    lwz r6, 0x236(r3)
    stw r0, 0x330(r1)
    lfd f1, 0x330(r1)
    stw r7, 0x322(r1)
    fsubs f1, f1, f2
    stw r6, 0x326(r1)
    lwz r0, 0x23a(r3)
    fsubs f0, f0, f1
    stw r0, 0x32a(r1)
    lhz r0, 0x23e(r3)
    sth r0, 0x32e(r1)
    stfs f0, 0xf4(r1)
    bl memcpy
    lwz r7, 0x1630(r30)
    mr r6, r30
    lfs f4, lbl_80883A98
    addi r4, r1, 0x78
    lfs f3, lbl_80883B7C
    addi r5, r1, 0x44
    lfs f2, 0x530(r7)
    li r8, 0x0
    lfs f1, 0x52c(r7)
    li r9, 0x0
    lfs f0, 0x528(r7)
    fadds f2, f2, f4
    fadds f1, f1, f3
    stfs f4, 0x38(r1)
    fadds f0, f0, f4
    lwz r3, lbl_8087F048
    stfs f3, 0x3c(r1)
    stfs f4, 0x40(r1)
    stfs f0, 0x44(r1)
    stfs f1, 0x48(r1)
    stfs f2, 0x4c(r1)
    bl fn_80108C10
    lwz r3, 0x1630(r30)
    lis r4, lbl_80745314@ha
    addi r4, r4, lbl_80745314@l
    li r5, 0x0
    addi r29, r3, 0xb0
    mr r3, r29
    addi r4, r4, 0x339
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8028D5C8_00001380
    li r3, 0x0
    b lbl_fn_8028D5C8_0000138C
lbl_fn_8028D5C8_00001380:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r29)
    add r3, r3, r0
lbl_fn_8028D5C8_0000138C:
    lfs f0, 0x2c(r3)
    lis r4, lbl_80745314@ha
    lfs f1, 0x1c(r3)
    addi r4, r4, lbl_80745314@l
    lfs f2, 0xc(r3)
    addi r29, r30, 0xb0
    stfs f2, 0x68(r1)
    mr r3, r29
    addi r4, r4, 0x339
    li r5, 0x0
    stfs f1, 0x6c(r1)
    stfs f0, 0x70(r1)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8028D5C8_000013D0
    li r5, 0x0
    b lbl_fn_8028D5C8_000013DC
lbl_fn_8028D5C8_000013D0:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r29)
    add r5, r3, r0
lbl_fn_8028D5C8_000013DC:
    lfs f3, 0x2c(r5)
    addi r3, r1, 0x98
    lfs f4, 0x1c(r5)
    li r4, 0x7a
    lfs f5, 0xc(r5)
    lfs f2, 0x70(r1)
    lfs f1, 0x6c(r1)
    lfs f0, 0x68(r1)
    fsubs f2, f3, f2
    fsubs f6, f4, f1
    stfs f5, 0x5c(r1)
    fsubs f0, f5, f0
    lfs f1, lbl_80883B80
    stfs f4, 0x60(r1)
    stfs f3, 0x64(r1)
    stfs f0, 0x50(r1)
    stfs f6, 0x54(r1)
    stfs f2, 0x58(r1)
    bl fn_805F8E70
    addi r4, r1, 0x50
    addi r3, r1, 0x98
    mr r5, r4
    bl fn_805F93C0
    lfs f4, lbl_80883AC0
    li r4, 0x0
    lfs f0, lbl_80883B08
    li r29, -0x1
    lfs f2, lbl_80883B84
    lis r0, 0x4330
    lfs f1, lbl_80883B88
    lis r3, lbl_807452F8@ha
    lfs f5, lbl_80883B04
    addi r6, r1, 0x68
    lfs f3, lbl_80883B8C
    addi r7, r1, 0x50
    stfs f4, 0xd0(r1)
    addi r8, r1, 0xc8
    lfd f4, lbl_807452F8@l(r3)
    li r9, 0x4
    stfs f0, 0xd4(r1)
    li r10, 0x0
    lfs f0, lbl_80883B48
    stfs f2, 0xd8(r1)
    lwz r3, lbl_8087F048
    stfs f1, 0xdc(r1)
    lfs f1, lbl_80883A98
    stw r4, 0xe4(r1)
    lfs f2, lbl_80883AA8
    stw r29, 0xe8(r1)
    stw r30, 0xc8(r1)
    stfs f5, 0xe0(r1)
    stfs f3, 0xcc(r1)
    lfs f3, 0x199c(r30)
    stfs f3, 0xd4(r1)
    lwz r4, 0x14cc(r30)
    stw r0, 0x338(r1)
    lwz r0, 0x5c(r4)
    xoris r0, r0, 0x8000
    stw r0, 0x33c(r1)
    lfd f3, 0x338(r1)
    fsubs f3, f3, f4
    stfs f3, 0xdc(r1)
    lfs f3, 0x19a0(r30)
    fmuls f0, f0, f3
    stfs f0, 0xd8(r1)
    lwz r4, 0x1630(r30)
    lwz r5, 0x14d8(r30)
    bl fn_800F8574
    li r3, 0x0
    li r4, 0x0
    bl fn_80232B7C
    lwz r3, 0x1630(r30)
    li r0, 0x1
    lfs f0, lbl_80883A98
    addi r4, r30, 0x1634
    lfs f1, lbl_80883AA8
    addi r5, r3, 0xb0
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
    stw r29, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r5, 0x162c(r30)
    addi r3, r1, 0xf0
    li r4, -0x1
    addi r0, r5, 0x1
    stw r0, 0x162c(r30)
    bl fn_8012AFE8
lbl_fn_8028D5C8_00001574:
    lwz r0, 0x2dc(r30)
    cmpwi r0, 0x13f
    bne lbl_fn_8028D5C8_00001628
    lfs f31, 0x2e4(r30)
    addi r3, r30, 0xb0
    li r31, 0x0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_8028D5C8_000015D8
    lfs f0, lbl_80883AA8
    li r0, 0x1
    stw r0, 0x3fc(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80883A98
    li r4, 0x0
    stfs f0, 0x2fc(r30)
    li r5, 0x2
    lfs f2, lbl_80883AA0
    li r6, 0x1
    stfs f0, 0x2e8(r30)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
lbl_fn_8028D5C8_000015D8:
    lfs f1, 0x2e4(r30)
    lfs f0, lbl_80883B90
    fcmpo cr0, f1, f0
    ble lbl_fn_8028D5C8_00001628
    lfs f0, lbl_80883B94
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_8028D5C8_00001628
    lwz r5, lbl_8087F430
    li r0, 0xa
    lfs f0, lbl_80883AA4
    lwz r3, 0x96c(r5)
    srwi r4, r3, 31
    clrlwi r3, r3, 31
    xor r3, r3, r4
    subf r3, r4, r3
    stw r3, 0x96c(r5)
    stw r0, 0x970(r5)
    stfs f0, 0x974(r5)
    stfs f0, 0x978(r5)
lbl_fn_8028D5C8_00001628:
    cmpwi r31, 0x0
    beq lbl_fn_8028D5C8_000016DC
    lfs f31, 0x2e4(r30)
    addi r3, r30, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    lfs f0, lbl_80883AD8
    fsubs f0, f1, f0
    fcmpo cr0, f31, f0
    cror eq, gt, eq
    bne lbl_fn_8028D5C8_000016DC
    li r31, 0x0
    stw r31, 0x162c(r30)
    stw r31, 0x14b4(r30)
    stw r31, 0x14b8(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883A98
    li r0, 0x6
    stw r3, 0x590(r30)
    mr r3, r30
    li r4, 0x3
    stfs f0, 0x1510(r30)
    stw r31, 0x15d4(r30)
    stw r0, 0x58c(r30)
    bl fn_8016E970
    lfs f0, lbl_80883AA8
    li r0, 0x1
    stw r0, 0x3fc(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80883A98
    li r4, 0x0
    stfs f0, 0x2fc(r30)
    li r5, 0x2
    lfs f2, lbl_80883AA0
    li r6, 0x1
    stfs f0, 0x2e8(r30)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, -0x2
    li r6, 0x1
    bl fn_80239DAC
lbl_fn_8028D5C8_000016DC:
    lwz r0, 0x364(r1)
    psq_l f31, 0x358(r1), 0, 0
    lfd f31, 0x350(r1)
    lwz r31, 0x34c(r1)
    lwz r30, 0x348(r1)
    lwz r29, 0x344(r1)
    mtlr r0
    addi r1, r1, 0x360
    blr
}

asm void fn_8028DF34(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r30, 0x28(r1)
    lfs f31, 0x2e4(r3)
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_8028DF34_000017C4
    li r30, 0x0
    li r0, 0xe
    stw r0, 0x58c(r31)
    stw r30, 0x14b4(r31)
    stw r30, 0x14b8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883A98
    li r4, 0x6
    stw r3, 0x590(r31)
    mr r3, r31
    stfs f0, 0x1510(r31)
    stw r30, 0x15d4(r31)
    bl fn_8016E970
    li r0, 0x4
    stw r0, 0x560(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883AA8
    li r0, 0x1
    stw r3, 0x590(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80883A98
    li r4, 0x0
    stw r0, 0x3fc(r31)
    li r5, 0x153
    lfs f2, lbl_80883AA0
    li r6, 0x1
    stfs f0, 0x2fc(r31)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    b lbl_fn_8028DF34_0000194C
lbl_fn_8028DF34_000017C4:
    lfs f1, 0x2e4(r31)
    lfs f0, lbl_80883B98
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_8028DF34_00001824
    lfs f5, lbl_80883B9C
    lfs f2, 0x1524(r31)
    lfs f1, 0x1520(r31)
    fmuls f3, f2, f5
    lfs f0, 0x151c(r31)
    fmuls f4, f1, f5
    lfs f1, 0x52c(r31)
    fmuls f5, f0, f5
    lfs f2, 0x528(r31)
    lfs f0, 0x530(r31)
    fadds f1, f1, f4
    fadds f2, f2, f5
    stfs f5, 0x10(r1)
    fadds f0, f0, f3
    stfs f4, 0x14(r1)
    stfs f3, 0x18(r1)
    stfs f2, 0x528(r31)
    stfs f1, 0x52c(r31)
    stfs f0, 0x530(r31)
lbl_fn_8028DF34_00001824:
    lwz r0, 0x14dc(r31)
    cmpwi cr1, r0, 0x0
    beq cr1, lbl_fn_8028DF34_000018AC
    lfs f1, 0x2e4(r31)
    lfs f0, lbl_80883BA0
    fcmpo cr0, f1, f0
    bge lbl_fn_8028DF34_000018AC
    beq cr1, lbl_fn_8028DF34_000018AC
    lfs f0, lbl_80883B70
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_8028DF34_000018AC
    lwz r6, lbl_8087F430
    li r0, 0xa
    lfs f1, lbl_80883AA8
    li r4, 0xa0
    lwz r3, 0x96c(r6)
    lfs f0, lbl_80883AD8
    srwi r5, r3, 31
    clrlwi r3, r3, 31
    xor r3, r3, r5
    subf r3, r5, r3
    stw r3, 0x96c(r6)
    stw r0, 0x970(r6)
    stfs f1, 0x974(r6)
    stfs f0, 0x978(r6)
    lwz r3, lbl_8087F430
    bl fn_80370A78
    cmpwi r3, 0x0
    bne lbl_fn_8028DF34_000018AC
    lwz r3, lbl_8087F430
    li r4, 0xa0
    li r5, 0x1
    bl fn_80370AE4
lbl_fn_8028DF34_000018AC:
    lwz r0, 0x14dc(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8028DF34_0000194C
    lfs f1, 0x2e4(r31)
    lfs f0, lbl_80883BA4
    fcmpo cr0, f1, f0
    bge lbl_fn_8028DF34_0000194C
    lis r4, lbl_80745314@ha
    addi r3, r31, 0xb0
    addi r4, r4, lbl_80745314@l
    li r5, 0x0
    addi r4, r4, 0x344
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8028DF34_000018F0
    li r3, 0x0
    b lbl_fn_8028DF34_000018FC
lbl_fn_8028DF34_000018F0:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r3, r3, r0
lbl_fn_8028DF34_000018FC:
    lfs f0, 0x2c(r3)
    li r0, -0x1
    lfs f2, 0x1c(r3)
    mr r4, r31
    lfs f1, 0xc(r3)
    addi r7, r1, 0x1c
    stfs f1, 0x1c(r1)
    addi r8, r31, 0x534
    lfs f1, lbl_80883A98
    li r9, 0x0
    stfs f2, 0x20(r1)
    li r10, 0x1e
    lfs f2, lbl_80883AA8
    stfs f0, 0x24(r1)
    stw r0, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F048
    lwz r5, 0x14dc(r31)
    lwz r6, 0x590(r31)
    bl fn_800FAB80
lbl_fn_8028DF34_0000194C:
    lwz r0, 0x44(r1)
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}
