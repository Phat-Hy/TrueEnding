#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void fn_8004D388(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800EE360(void);
extern void fn_800F8548(void);
extern void fn_800F8C6C(void);
extern void fn_8015F568(void);
extern void fn_8016E970(void);
extern void fn_80170A20(void);
extern void fn_80176548(void);
extern void fn_801765D8(void);
extern void fn_80232B7C(void);
extern void fn_8023A8B4(void);
extern void fn_8024F9B8(void);
extern void fn_8024FFE8(void);
extern void fn_802506AC(void);
extern void fn_80250884(void);
extern void fn_805F8E70(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_80680CF8(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);

/* External data declarations */
extern u8 lbl_80743540[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_80883268;
extern u32 lbl_8088326C;
extern u32 lbl_80883288;
extern u32 lbl_80883294;
extern u32 lbl_80883298;
extern u32 lbl_808832A8;
extern u32 lbl_808832AC;
extern u32 lbl_808832B0;
extern u32 lbl_808832B4;
extern u32 lbl_808832B8;
extern u32 lbl_808832C4;
extern u32 lbl_808832F0;
extern u32 lbl_808832F4;
extern u32 lbl_808832F8;

/* Function declarations */
void fn_8024D120(void);
void fn_8024E1C0(void);
void fn_8024E690(void);
void fn_8024E7E4(void);

asm void fn_8024D120(void)
{
    nofralloc
    stwu r1, -0x1e0(r1)
    mflr r0
    stw r0, 0x1e4(r1)
    stfd f31, 0x1d0(r1)
    psq_st f31, 0x1d8(r1), 0, 0
    stw r31, 0x1cc(r1)
    mr r31, r3
    stw r30, 0x1c8(r1)
    stw r29, 0x1c4(r1)
    stw r28, 0x1c0(r1)
    lwz r0, 0x14b0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8024D120_00001078
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    beq lbl_fn_8024D120_00001078
    lwz r0, 0x14e4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8024D120_00000050
    stw r0, 0x14b0(r3)
lbl_fn_8024D120_00000050:
    lwz r5, 0x14b0(r3)
    addi r4, r1, 0x1b0
    lfs f0, 0x530(r3)
    psq_l f1, 0x528(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lfs f2, 0x530(r5)
    lfs f5, 0x1b4(r1)
    lfs f4, 0x52c(r3)
    fsubs f6, f2, f0
    lfs f0, 0x528(r3)
    addi r3, r1, 0x1a4
    lfs f3, 0x1b0(r1)
    fsubs f4, f5, f4
    stfs f2, 0x1b8(r1)
    fsubs f0, f3, f0
    stfs f4, 0x1a8(r1)
    stfs f0, 0x1a4(r1)
    stfs f6, 0x1ac(r1)
    bl fn_805F9940
    lwz r0, 0x1654(r31)
    fmr f31, f1
    cmpwi r0, 0xb
    beq lbl_fn_8024D120_000000F0
    lwz r3, 0x14e4(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8024D120_000000F0
    lfs f0, 0x1660(r31)
    lwz r0, 0x14e8(r31)
    fcmpo cr0, f1, f0
    stw r3, 0x14dc(r31)
    stw r0, 0x14e0(r31)
    bge lbl_fn_8024D120_000000DC
    li r0, 0x1
    stw r0, 0x1654(r31)
    b lbl_fn_8024D120_000000E4
lbl_fn_8024D120_000000DC:
    li r0, 0x6
    stw r0, 0x1654(r31)
lbl_fn_8024D120_000000E4:
    li r0, 0x0
    stw r0, 0x14e4(r31)
    b lbl_fn_8024D120_0000010C
lbl_fn_8024D120_000000F0:
    lfs f1, lbl_808832F0
    mr r3, r31
    bl fn_80250884
    cmpwi r3, 0x3
    blt lbl_fn_8024D120_0000010C
    li r0, 0xd
    stw r0, 0x1654(r31)
lbl_fn_8024D120_0000010C:
    lwz r0, 0x1624(r31)
    cntlzw r0, r0
    srwi. r6, r0, 5
    beq lbl_fn_8024D120_00000130
    lwz r0, 0x14c0(r31)
    slwi r4, r0, 2
    add r3, r31, r4
    lwz r5, 0x16a4(r3)
    b lbl_fn_8024D120_00000140
lbl_fn_8024D120_00000130:
    lwz r0, 0x14c0(r31)
    slwi r4, r0, 2
    add r3, r31, r4
    lwz r5, 0x168c(r3)
lbl_fn_8024D120_00000140:
    cmpwi r0, 0x0
    beq lbl_fn_8024D120_00000174
    cmpwi r0, 0x2
    beq lbl_fn_8024D120_00000174
    cmpwi r0, 0x4
    beq lbl_fn_8024D120_00000174
    cmpwi r0, 0x1
    beq lbl_fn_8024D120_000001C4
    cmpwi r0, 0x3
    beq lbl_fn_8024D120_000005C4
    cmpwi r0, 0x5
    beq lbl_fn_8024D120_00000BCC
    b lbl_fn_8024D120_00001078
lbl_fn_8024D120_00000174:
    lwz r0, 0x1620(r31)
    lwz r3, 0x14c0(r31)
    cmpwi r0, 0x0
    addi r0, r3, 0x1
    stw r0, 0x14c0(r31)
    beq lbl_fn_8024D120_00001078
    cmpwi r0, 0x2
    bne lbl_fn_8024D120_000001A0
    li r0, 0x7
    stw r0, 0x1654(r31)
    b lbl_fn_8024D120_000001B0
lbl_fn_8024D120_000001A0:
    cmpwi r0, 0x4
    bne lbl_fn_8024D120_000001B0
    li r0, 0x6
    stw r0, 0x1654(r31)
lbl_fn_8024D120_000001B0:
    mr r3, r31
    bl fn_8024FFE8
    li r0, 0x0
    stw r0, 0x14c4(r31)
    b lbl_fn_8024D120_00001078
lbl_fn_8024D120_000001C4:
    lwz r0, 0x1654(r31)
    cmpwi r0, 0x0
    blt lbl_fn_8024D120_000001DC
    mr r3, r31
    bl fn_8024E1C0
    b lbl_fn_8024D120_00001078
lbl_fn_8024D120_000001DC:
    add r3, r31, r4
    lwz r4, 0x1670(r31)
    lwz r0, 0x1674(r3)
    cmpw r4, r0
    ble lbl_fn_8024D120_00000208
    mr r3, r31
    bl fn_802506AC
    lwz r3, 0x14c0(r31)
    addi r0, r3, 0x1
    stw r0, 0x14c0(r31)
    b lbl_fn_8024D120_00001078
lbl_fn_8024D120_00000208:
    lwz r0, 0x14bc(r31)
    li r29, 0x0
    stw r29, 0x14dc(r31)
    cmpw r0, r5
    stw r29, 0x14e4(r31)
    ble lbl_fn_8024D120_00001078
    lwz r3, 0x14c4(r31)
    lwz r0, 0x161c(r31)
    cmpw r3, r0
    blt lbl_fn_8024D120_0000033C
    lfs f31, lbl_80883268
    addi r28, r31, 0x1594
    li r30, -0x1
    li r29, 0x0
    b lbl_fn_8024D120_00000294
lbl_fn_8024D120_00000244:
    lfs f3, 0x530(r31)
    addi r3, r1, 0x198
    lfs f0, 0x8(r28)
    lfs f5, 0x52c(r31)
    fsubs f6, f3, f0
    lfs f4, 0x4(r28)
    lfs f3, 0x528(r31)
    lfs f0, 0x0(r28)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x19c(r1)
    stfs f0, 0x198(r1)
    stfs f6, 0x1a0(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f31
    ble lbl_fn_8024D120_0000028C
    mr r30, r29
    fmr f31, f1
lbl_fn_8024D120_0000028C:
    addi r28, r28, 0xc
    addi r29, r29, 0x1
lbl_fn_8024D120_00000294:
    lwz r0, 0x1590(r31)
    cmplw r29, r0
    blt lbl_fn_8024D120_00000244
    cmpwi r30, 0x0
    blt lbl_fn_8024D120_00000330
    cmpw r30, r0
    bge lbl_fn_8024D120_00000330
    mulli r4, r30, 0xc
    addi r6, r31, 0x15f4
    li r0, 0x6
    mr r3, r31
    add r5, r31, r4
    addi r5, r5, 0x1594
    li r4, 0x3
    psq_l f1, 0x0(r5), 0, 0
    lfs f2, 0x8(r5)
    stfs f2, 0x15fc(r31)
    psq_st f1, 0x0(r6), 0, 0
    stw r0, 0x58c(r31)
    bl fn_8016E970
    li r0, 0x0
    stw r0, 0x14b8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_8088326C
    li r0, 0x1
    stw r3, 0x590(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80883268
    li r4, 0x0
    stw r0, 0x3fc(r31)
    li r5, 0x14a
    lfs f2, lbl_808832C4
    li r6, 0x0
    stfs f0, 0x2fc(r31)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
lbl_fn_8024D120_00000330:
    li r0, 0x0
    stw r0, 0x14c4(r31)
    b lbl_fn_8024D120_00001078
lbl_fn_8024D120_0000033C:
    lfs f0, 0x1660(r31)
    fcmpo cr0, f31, f0
    bge lbl_fn_8024D120_0000041C
    li r30, 0x1
    stw r30, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    stw r29, 0x14b8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_8088326C
    li r4, 0x0
    stw r3, 0x590(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80883268
    li r5, 0x156
    stw r30, 0x3fc(r31)
    li r6, 0x0
    lfs f2, lbl_808832C4
    li r7, 0x0
    stfs f0, 0x2fc(r31)
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    li r3, 0x0
    li r4, 0x0
    bl fn_80232B7C
    lfs f0, lbl_80883268
    li r0, -0x1
    lfs f1, lbl_8088326C
    addi r4, r31, 0x1564
    stfs f0, 0x180(r1)
    addi r5, r31, 0xb0
    addi r7, r1, 0x18c
    addi r8, r1, 0x180
    stfs f0, 0x184(r1)
    addi r9, r1, 0x170
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x188(r1)
    stfs f0, 0x18c(r1)
    stfs f0, 0x190(r1)
    stfs f0, 0x194(r1)
    stfs f1, 0x170(r1)
    stfs f1, 0x174(r1)
    stfs f1, 0x178(r1)
    stfs f1, 0x17c(r1)
    stw r0, 0x8(r1)
    stw r30, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r3, 0x14c4(r31)
    addi r0, r3, 0x1
    stw r0, 0x14c4(r31)
    b lbl_fn_8024D120_00001078
lbl_fn_8024D120_0000041C:
    lfs f0, 0x1664(r31)
    fcmpo cr0, f31, f0
    bge lbl_fn_8024D120_00000458
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x7
    bne lbl_fn_8024D120_00000440
    lwz r0, 0x14b4(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8024D120_00001078
lbl_fn_8024D120_00000440:
    lwz r4, 0x14b0(r31)
    mr r3, r31
    lfs f1, lbl_808832A8
    li r5, 0x0
    bl fn_80170A20
    b lbl_fn_8024D120_00001078
lbl_fn_8024D120_00000458:
    lwz r0, 0x1624(r31)
    li r28, 0x1
    cmpwi r0, 0x0
    bne lbl_fn_8024D120_0000046C
    li r28, 0x2
lbl_fn_8024D120_0000046C:
    bl fn_80680CF8
    divw r0, r3, r28
    mullw r0, r0, r28
    subf. r0, r0, r3
    bne lbl_fn_8024D120_00000560
    li r0, 0x8
    stw r0, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lfs f0, lbl_8088326C
    li r0, 0x0
    li r30, 0x1
    stw r0, 0x14b8(r31)
    lfs f1, lbl_80883268
    addi r3, r31, 0xb0
    stw r30, 0x3fc(r31)
    li r4, 0x0
    lfs f2, lbl_808832C4
    li r5, 0x145
    stfs f0, 0x2fc(r31)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    li r3, 0x0
    li r4, 0x0
    bl fn_80232B7C
    lfs f0, lbl_80883268
    li r0, -0x1
    lfs f1, lbl_8088326C
    addi r4, r31, 0x154c
    stfs f0, 0x158(r1)
    addi r5, r31, 0xb0
    addi r7, r1, 0x164
    addi r8, r1, 0x158
    stfs f0, 0x15c(r1)
    addi r9, r1, 0x148
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x160(r1)
    stfs f0, 0x164(r1)
    stfs f0, 0x168(r1)
    stfs f0, 0x16c(r1)
    stfs f1, 0x148(r1)
    stfs f1, 0x14c(r1)
    stfs f1, 0x150(r1)
    stfs f1, 0x154(r1)
    stw r0, 0x8(r1)
    stw r30, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r0, 0x1624(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8024D120_00000550
    li r30, 0x3
lbl_fn_8024D120_00000550:
    li r0, -0x1
    stw r30, 0x164c(r31)
    stw r0, 0x1650(r31)
    b lbl_fn_8024D120_00001078
lbl_fn_8024D120_00000560:
    li r0, 0x6
    stw r0, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    li r0, 0x0
    stw r0, 0x14b8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_8088326C
    li r0, 0x1
    stw r3, 0x590(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80883268
    li r4, 0x0
    stw r0, 0x3fc(r31)
    li r5, 0x14a
    lfs f2, lbl_808832C4
    li r6, 0x0
    stfs f0, 0x2fc(r31)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    b lbl_fn_8024D120_00001078
lbl_fn_8024D120_000005C4:
    lwz r0, 0x1654(r31)
    cmpwi r0, 0x0
    blt lbl_fn_8024D120_000005DC
    mr r3, r31
    bl fn_8024E1C0
    b lbl_fn_8024D120_00001078
lbl_fn_8024D120_000005DC:
    add r3, r31, r4
    lwz r4, 0x1670(r31)
    lwz r0, 0x1674(r3)
    cmpw r4, r0
    ble lbl_fn_8024D120_00000608
    mr r3, r31
    bl fn_802506AC
    lwz r3, 0x14c0(r31)
    addi r0, r3, 0x1
    stw r0, 0x14c0(r31)
    b lbl_fn_8024D120_00001078
lbl_fn_8024D120_00000608:
    lwz r0, 0x14bc(r31)
    cmpw r0, r5
    ble lbl_fn_8024D120_00001078
    lwz r3, 0x14c4(r31)
    lwz r0, 0x161c(r31)
    cmpw r3, r0
    blt lbl_fn_8024D120_00000730
    lfs f31, lbl_80883268
    addi r28, r31, 0x1594
    li r30, -0x1
    li r29, 0x0
    b lbl_fn_8024D120_00000688
lbl_fn_8024D120_00000638:
    lfs f3, 0x530(r31)
    addi r3, r1, 0x138
    lfs f0, 0x8(r28)
    lfs f5, 0x52c(r31)
    fsubs f6, f3, f0
    lfs f4, 0x4(r28)
    lfs f3, 0x528(r31)
    lfs f0, 0x0(r28)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x13c(r1)
    stfs f0, 0x138(r1)
    stfs f6, 0x140(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f31
    ble lbl_fn_8024D120_00000680
    mr r30, r29
    fmr f31, f1
lbl_fn_8024D120_00000680:
    addi r28, r28, 0xc
    addi r29, r29, 0x1
lbl_fn_8024D120_00000688:
    lwz r0, 0x1590(r31)
    cmplw r29, r0
    blt lbl_fn_8024D120_00000638
    cmpwi r30, 0x0
    blt lbl_fn_8024D120_00000724
    cmpw r30, r0
    bge lbl_fn_8024D120_00000724
    mulli r4, r30, 0xc
    addi r6, r31, 0x15f4
    li r0, 0x6
    mr r3, r31
    add r5, r31, r4
    addi r5, r5, 0x1594
    li r4, 0x3
    psq_l f1, 0x0(r5), 0, 0
    lfs f2, 0x8(r5)
    stfs f2, 0x15fc(r31)
    psq_st f1, 0x0(r6), 0, 0
    stw r0, 0x58c(r31)
    bl fn_8016E970
    li r0, 0x0
    stw r0, 0x14b8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_8088326C
    li r0, 0x1
    stw r3, 0x590(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80883268
    li r4, 0x0
    stw r0, 0x3fc(r31)
    li r5, 0x14a
    lfs f2, lbl_808832C4
    li r6, 0x0
    stfs f0, 0x2fc(r31)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
lbl_fn_8024D120_00000724:
    li r0, 0x0
    stw r0, 0x14c4(r31)
    b lbl_fn_8024D120_00001078
lbl_fn_8024D120_00000730:
    lfs f0, 0x1660(r31)
    fcmpo cr0, f31, f0
    bge lbl_fn_8024D120_00000814
    li r30, 0x1
    stw r30, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    li r0, 0x0
    stw r0, 0x14b8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_8088326C
    li r4, 0x0
    stw r3, 0x590(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80883268
    li r5, 0x156
    stw r30, 0x3fc(r31)
    li r6, 0x0
    lfs f2, lbl_808832C4
    li r7, 0x0
    stfs f0, 0x2fc(r31)
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    li r3, 0x0
    li r4, 0x0
    bl fn_80232B7C
    lfs f0, lbl_80883268
    li r0, -0x1
    lfs f1, lbl_8088326C
    addi r4, r31, 0x1564
    stfs f0, 0x120(r1)
    addi r5, r31, 0xb0
    addi r7, r1, 0x12c
    addi r8, r1, 0x120
    stfs f0, 0x124(r1)
    addi r9, r1, 0x110
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x128(r1)
    stfs f0, 0x12c(r1)
    stfs f0, 0x130(r1)
    stfs f0, 0x134(r1)
    stfs f1, 0x110(r1)
    stfs f1, 0x114(r1)
    stfs f1, 0x118(r1)
    stfs f1, 0x11c(r1)
    stw r0, 0x8(r1)
    stw r30, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r3, 0x14c4(r31)
    addi r0, r3, 0x1
    stw r0, 0x14c4(r31)
    b lbl_fn_8024D120_00001078
lbl_fn_8024D120_00000814:
    lfs f0, 0x1664(r31)
    fcmpo cr0, f31, f0
    bge lbl_fn_8024D120_00000850
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x7
    bne lbl_fn_8024D120_00000838
    lwz r0, 0x14b4(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8024D120_00001078
lbl_fn_8024D120_00000838:
    lwz r4, 0x14b0(r31)
    mr r3, r31
    lfs f1, lbl_808832A8
    li r5, 0x0
    bl fn_80170A20
    b lbl_fn_8024D120_00001078
lbl_fn_8024D120_00000850:
    lfs f0, 0x1668(r31)
    fcmpo cr0, f31, f0
    bge lbl_fn_8024D120_00000AA0
    cmpwi r6, 0x0
    li r28, 0x2
    beq lbl_fn_8024D120_0000086C
    li r28, 0x4
lbl_fn_8024D120_0000086C:
    bl fn_80680CF8
    divw r0, r3, r28
    mullw r0, r0, r28
    subf. r0, r0, r3
    bne lbl_fn_8024D120_00000960
    li r0, 0x8
    stw r0, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lfs f0, lbl_8088326C
    li r0, 0x0
    li r30, 0x1
    stw r0, 0x14b8(r31)
    lfs f1, lbl_80883268
    addi r3, r31, 0xb0
    stw r30, 0x3fc(r31)
    li r4, 0x0
    lfs f2, lbl_808832C4
    li r5, 0x145
    stfs f0, 0x2fc(r31)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    li r3, 0x0
    li r4, 0x0
    bl fn_80232B7C
    lfs f0, lbl_80883268
    li r0, -0x1
    lfs f1, lbl_8088326C
    addi r4, r31, 0x154c
    stfs f0, 0xf8(r1)
    addi r5, r31, 0xb0
    addi r7, r1, 0x104
    addi r8, r1, 0xf8
    stfs f0, 0xfc(r1)
    addi r9, r1, 0xe8
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x100(r1)
    stfs f0, 0x104(r1)
    stfs f0, 0x108(r1)
    stfs f0, 0x10c(r1)
    stfs f1, 0xe8(r1)
    stfs f1, 0xec(r1)
    stfs f1, 0xf0(r1)
    stfs f1, 0xf4(r1)
    stw r0, 0x8(r1)
    stw r30, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r0, 0x1624(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8024D120_00000950
    li r30, 0x3
lbl_fn_8024D120_00000950:
    li r0, -0x1
    stw r30, 0x164c(r31)
    stw r0, 0x1650(r31)
    b lbl_fn_8024D120_000009C0
lbl_fn_8024D120_00000960:
    li r0, 0x6
    stw r0, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    li r0, 0x0
    stw r0, 0x14b8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_8088326C
    li r0, 0x1
    stw r3, 0x590(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80883268
    li r4, 0x0
    stw r0, 0x3fc(r31)
    li r5, 0x14a
    lfs f2, lbl_808832C4
    li r6, 0x0
    stfs f0, 0x2fc(r31)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
lbl_fn_8024D120_000009C0:
    li r0, 0x8
    stw r0, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lfs f0, lbl_8088326C
    li r0, 0x0
    li r30, 0x1
    stw r0, 0x14b8(r31)
    lfs f1, lbl_80883268
    addi r3, r31, 0xb0
    stw r30, 0x3fc(r31)
    li r4, 0x0
    lfs f2, lbl_808832C4
    li r5, 0x145
    stfs f0, 0x2fc(r31)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    li r3, 0x0
    li r4, 0x0
    bl fn_80232B7C
    lfs f0, lbl_80883268
    li r0, -0x1
    lfs f1, lbl_8088326C
    addi r4, r31, 0x154c
    stfs f0, 0xd0(r1)
    addi r5, r31, 0xb0
    addi r7, r1, 0xdc
    addi r8, r1, 0xd0
    stfs f0, 0xd4(r1)
    addi r9, r1, 0xc0
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0xd8(r1)
    stfs f0, 0xdc(r1)
    stfs f0, 0xe0(r1)
    stfs f0, 0xe4(r1)
    stfs f1, 0xc0(r1)
    stfs f1, 0xc4(r1)
    stfs f1, 0xc8(r1)
    stfs f1, 0xcc(r1)
    stw r0, 0x8(r1)
    stw r30, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r0, 0x1624(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8024D120_00000A90
    li r30, 0x3
lbl_fn_8024D120_00000A90:
    li r0, -0x1
    stw r30, 0x164c(r31)
    stw r0, 0x1650(r31)
    b lbl_fn_8024D120_00001078
lbl_fn_8024D120_00000AA0:
    cmpwi r6, 0x0
    li r28, 0x1
    beq lbl_fn_8024D120_00000AB0
    li r28, 0x2
lbl_fn_8024D120_00000AB0:
    bl fn_80680CF8
    divw r0, r3, r28
    mullw r0, r0, r28
    subf. r0, r0, r3
    bne lbl_fn_8024D120_00000B68
    li r0, 0x7
    stw r0, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lwz r5, 0xd1c(r31)
    li r0, 0x0
    stw r0, 0x14b8(r31)
    mr r3, r31
    lwz r6, 0x14d0(r31)
    addi r4, r5, 0x528
    bl fn_8015F568
    mr r3, r31
    li r4, 0x0
    bl fn_80232B7C
    lfs f0, lbl_80883268
    li r3, -0x1
    lfs f1, lbl_8088326C
    li r0, 0x1
    stfs f0, 0xa8(r1)
    addi r4, r31, 0x1558
    addi r5, r31, 0xb0
    addi r7, r1, 0xb4
    stfs f0, 0xac(r1)
    addi r8, r1, 0xa8
    addi r9, r1, 0x98
    li r6, 0x0
    stfs f0, 0xb0(r1)
    li r10, -0x1
    stfs f0, 0xb4(r1)
    stfs f0, 0xb8(r1)
    stfs f0, 0xbc(r1)
    stfs f1, 0x98(r1)
    stfs f1, 0x9c(r1)
    stfs f1, 0xa0(r1)
    stfs f1, 0xa4(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    b lbl_fn_8024D120_00001078
lbl_fn_8024D120_00000B68:
    li r0, 0x6
    stw r0, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    li r0, 0x0
    stw r0, 0x14b8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_8088326C
    li r0, 0x1
    stw r3, 0x590(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80883268
    li r4, 0x0
    stw r0, 0x3fc(r31)
    li r5, 0x14a
    lfs f2, lbl_808832C4
    li r6, 0x0
    stfs f0, 0x2fc(r31)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    b lbl_fn_8024D120_00001078
lbl_fn_8024D120_00000BCC:
    lwz r0, 0x1654(r31)
    cmpwi r0, 0x0
    blt lbl_fn_8024D120_00000BE4
    mr r3, r31
    bl fn_8024E1C0
    b lbl_fn_8024D120_00001078
lbl_fn_8024D120_00000BE4:
    add r3, r31, r4
    lwz r4, 0x1670(r31)
    lwz r0, 0x1674(r3)
    cmpw r4, r0
    ble lbl_fn_8024D120_00000C0C
    mr r3, r31
    bl fn_802506AC
    li r0, 0x4
    stw r0, 0x14c0(r31)
    b lbl_fn_8024D120_00001078
lbl_fn_8024D120_00000C0C:
    lwz r0, 0x14bc(r31)
    cmpw r0, r5
    ble lbl_fn_8024D120_00001078
    lwz r3, 0x14c4(r31)
    lwz r0, 0x161c(r31)
    cmpw r3, r0
    blt lbl_fn_8024D120_00000D34
    lfs f31, lbl_80883268
    addi r28, r31, 0x1594
    li r30, -0x1
    li r29, 0x0
    b lbl_fn_8024D120_00000C8C
lbl_fn_8024D120_00000C3C:
    lfs f3, 0x530(r31)
    addi r3, r1, 0x88
    lfs f0, 0x8(r28)
    lfs f5, 0x52c(r31)
    fsubs f6, f3, f0
    lfs f4, 0x4(r28)
    lfs f3, 0x528(r31)
    lfs f0, 0x0(r28)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x8c(r1)
    stfs f0, 0x88(r1)
    stfs f6, 0x90(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f31
    ble lbl_fn_8024D120_00000C84
    mr r30, r29
    fmr f31, f1
lbl_fn_8024D120_00000C84:
    addi r28, r28, 0xc
    addi r29, r29, 0x1
lbl_fn_8024D120_00000C8C:
    lwz r0, 0x1590(r31)
    cmplw r29, r0
    blt lbl_fn_8024D120_00000C3C
    cmpwi r30, 0x0
    blt lbl_fn_8024D120_00000D28
    cmpw r30, r0
    bge lbl_fn_8024D120_00000D28
    mulli r4, r30, 0xc
    addi r6, r31, 0x15f4
    li r0, 0x6
    mr r3, r31
    add r5, r31, r4
    addi r5, r5, 0x1594
    li r4, 0x3
    psq_l f1, 0x0(r5), 0, 0
    lfs f2, 0x8(r5)
    stfs f2, 0x15fc(r31)
    psq_st f1, 0x0(r6), 0, 0
    stw r0, 0x58c(r31)
    bl fn_8016E970
    li r0, 0x0
    stw r0, 0x14b8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_8088326C
    li r0, 0x1
    stw r3, 0x590(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80883268
    li r4, 0x0
    stw r0, 0x3fc(r31)
    li r5, 0x14a
    lfs f2, lbl_808832C4
    li r6, 0x0
    stfs f0, 0x2fc(r31)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
lbl_fn_8024D120_00000D28:
    li r0, 0x0
    stw r0, 0x14c4(r31)
    b lbl_fn_8024D120_00001078
lbl_fn_8024D120_00000D34:
    lfs f0, 0x1660(r31)
    fcmpo cr0, f31, f0
    bge lbl_fn_8024D120_00000E18
    li r30, 0x1
    stw r30, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    li r0, 0x0
    stw r0, 0x14b8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_8088326C
    li r4, 0x0
    stw r3, 0x590(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80883268
    li r5, 0x156
    stw r30, 0x3fc(r31)
    li r6, 0x0
    lfs f2, lbl_808832C4
    li r7, 0x0
    stfs f0, 0x2fc(r31)
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    li r3, 0x0
    li r4, 0x0
    bl fn_80232B7C
    lfs f0, lbl_80883268
    li r0, -0x1
    lfs f1, lbl_8088326C
    addi r4, r31, 0x1564
    stfs f0, 0x70(r1)
    addi r5, r31, 0xb0
    addi r7, r1, 0x7c
    addi r8, r1, 0x70
    stfs f0, 0x74(r1)
    addi r9, r1, 0x60
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x78(r1)
    stfs f0, 0x7c(r1)
    stfs f0, 0x80(r1)
    stfs f0, 0x84(r1)
    stfs f1, 0x60(r1)
    stfs f1, 0x64(r1)
    stfs f1, 0x68(r1)
    stfs f1, 0x6c(r1)
    stw r0, 0x8(r1)
    stw r30, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r3, 0x14c4(r31)
    addi r0, r3, 0x1
    stw r0, 0x14c4(r31)
    b lbl_fn_8024D120_00001078
lbl_fn_8024D120_00000E18:
    lfs f0, 0x1664(r31)
    fcmpo cr0, f31, f0
    bge lbl_fn_8024D120_00000E54
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x7
    bne lbl_fn_8024D120_00000E3C
    lwz r0, 0x14b4(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8024D120_00001078
lbl_fn_8024D120_00000E3C:
    lwz r4, 0x14b0(r31)
    mr r3, r31
    lfs f1, lbl_808832A8
    li r5, 0x0
    bl fn_80170A20
    b lbl_fn_8024D120_00001078
lbl_fn_8024D120_00000E54:
    cmpwi r6, 0x0
    li r28, 0x2
    beq lbl_fn_8024D120_00000E74
    mr r3, r31
    bl fn_8024F9B8
    cmpwi r3, 0x0
    beq lbl_fn_8024D120_00000E74
    li r28, 0x5
lbl_fn_8024D120_00000E74:
    bl fn_80680CF8
    divw r0, r3, r28
    mullw r0, r0, r28
    subf. r0, r0, r3
    beq lbl_fn_8024D120_00000E94
    cmpwi r0, 0x1
    beq lbl_fn_8024D120_00000F74
    b lbl_fn_8024D120_00001018
lbl_fn_8024D120_00000E94:
    li r0, 0x8
    stw r0, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lfs f0, lbl_8088326C
    li r0, 0x0
    li r30, 0x1
    stw r0, 0x14b8(r31)
    lfs f1, lbl_80883268
    addi r3, r31, 0xb0
    stw r30, 0x3fc(r31)
    li r4, 0x0
    lfs f2, lbl_808832C4
    li r5, 0x145
    stfs f0, 0x2fc(r31)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    li r3, 0x0
    li r4, 0x0
    bl fn_80232B7C
    lfs f0, lbl_80883268
    li r0, -0x1
    lfs f1, lbl_8088326C
    addi r4, r31, 0x154c
    stfs f0, 0x48(r1)
    addi r5, r31, 0xb0
    addi r7, r1, 0x54
    addi r8, r1, 0x48
    stfs f0, 0x4c(r1)
    addi r9, r1, 0x38
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x50(r1)
    stfs f0, 0x54(r1)
    stfs f0, 0x58(r1)
    stfs f0, 0x5c(r1)
    stfs f1, 0x38(r1)
    stfs f1, 0x3c(r1)
    stfs f1, 0x40(r1)
    stfs f1, 0x44(r1)
    stw r0, 0x8(r1)
    stw r30, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r0, 0x1624(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8024D120_00000F64
    li r30, 0x3
lbl_fn_8024D120_00000F64:
    li r0, -0x1
    stw r30, 0x164c(r31)
    stw r0, 0x1650(r31)
    b lbl_fn_8024D120_00001078
lbl_fn_8024D120_00000F74:
    li r0, 0x7
    stw r0, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lwz r5, 0xd1c(r31)
    li r0, 0x0
    stw r0, 0x14b8(r31)
    mr r3, r31
    lwz r6, 0x14d0(r31)
    addi r4, r5, 0x528
    bl fn_8015F568
    mr r3, r31
    li r4, 0x0
    bl fn_80232B7C
    lfs f0, lbl_80883268
    li r3, -0x1
    lfs f1, lbl_8088326C
    li r0, 0x1
    stfs f0, 0x20(r1)
    addi r4, r31, 0x1558
    addi r5, r31, 0xb0
    addi r7, r1, 0x2c
    stfs f0, 0x24(r1)
    addi r8, r1, 0x20
    addi r9, r1, 0x10
    li r6, 0x0
    stfs f0, 0x28(r1)
    li r10, -0x1
    stfs f0, 0x2c(r1)
    stfs f0, 0x30(r1)
    stfs f0, 0x34(r1)
    stfs f1, 0x10(r1)
    stfs f1, 0x14(r1)
    stfs f1, 0x18(r1)
    stfs f1, 0x1c(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    b lbl_fn_8024D120_00001078
lbl_fn_8024D120_00001018:
    li r0, 0x6
    stw r0, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    li r0, 0x0
    stw r0, 0x14b8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_8088326C
    li r0, 0x1
    stw r3, 0x590(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80883268
    li r4, 0x0
    stw r0, 0x3fc(r31)
    li r5, 0x14a
    lfs f2, lbl_808832C4
    li r6, 0x0
    stfs f0, 0x2fc(r31)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
lbl_fn_8024D120_00001078:
    lwz r0, 0x1e4(r1)
    psq_l f31, 0x1d8(r1), 0, 0
    lfd f31, 0x1d0(r1)
    lwz r31, 0x1cc(r1)
    lwz r30, 0x1c8(r1)
    lwz r29, 0x1c4(r1)
    lwz r28, 0x1c0(r1)
    mtlr r0
    addi r1, r1, 0x1e0
    blr
}

asm void fn_8024E1C0(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    stfd f31, 0xb0(r1)
    psq_st f31, 0xb8(r1), 0, 0
    stw r31, 0xac(r1)
    mr r31, r3
    stw r30, 0xa8(r1)
    stw r29, 0xa4(r1)
    stw r28, 0xa0(r1)
    lwz r0, 0x1654(r3)
    cmpwi r0, 0x7
    beq lbl_fn_8024E1C0_00001100
    cmpwi r0, 0x8
    beq lbl_fn_8024E1C0_000011A0
    cmpwi r0, 0x6
    beq lbl_fn_8024E1C0_0000127C
    cmpwi r0, 0xb
    beq lbl_fn_8024E1C0_000012EC
    cmpwi r0, 0xd
    beq lbl_fn_8024E1C0_00001364
    cmpwi r0, 0x1
    beq lbl_fn_8024E1C0_00001468
    b lbl_fn_8024E1C0_00001538
lbl_fn_8024E1C0_00001100:
    li r0, 0x7
    stw r0, 0x58c(r3)
    li r4, 0x3
    bl fn_8016E970
    lwz r5, 0xd1c(r31)
    li r0, 0x0
    stw r0, 0x14b8(r31)
    mr r3, r31
    lwz r6, 0x14d0(r31)
    addi r4, r5, 0x528
    bl fn_8015F568
    mr r3, r31
    li r4, 0x0
    bl fn_80232B7C
    lfs f0, lbl_80883268
    li r3, -0x1
    lfs f1, lbl_8088326C
    li r0, 0x1
    stfs f0, 0x80(r1)
    addi r4, r31, 0x1558
    addi r5, r31, 0xb0
    addi r7, r1, 0x8c
    stfs f0, 0x84(r1)
    addi r8, r1, 0x80
    addi r9, r1, 0x70
    li r6, 0x0
    stfs f0, 0x88(r1)
    li r10, -0x1
    stfs f0, 0x8c(r1)
    stfs f0, 0x90(r1)
    stfs f0, 0x94(r1)
    stfs f1, 0x70(r1)
    stfs f1, 0x74(r1)
    stfs f1, 0x78(r1)
    stfs f1, 0x7c(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    b lbl_fn_8024E1C0_00001538
lbl_fn_8024E1C0_000011A0:
    li r0, 0x8
    stw r0, 0x58c(r3)
    li r4, 0x3
    bl fn_8016E970
    lfs f0, lbl_8088326C
    li r0, 0x0
    li r30, 0x1
    stw r0, 0x14b8(r31)
    lfs f1, lbl_80883268
    addi r3, r31, 0xb0
    stw r30, 0x3fc(r31)
    li r4, 0x0
    lfs f2, lbl_808832C4
    li r5, 0x145
    stfs f0, 0x2fc(r31)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    li r3, 0x0
    li r4, 0x0
    bl fn_80232B7C
    lfs f0, lbl_80883268
    li r0, -0x1
    lfs f1, lbl_8088326C
    addi r4, r31, 0x154c
    stfs f0, 0x58(r1)
    addi r5, r31, 0xb0
    addi r7, r1, 0x64
    addi r8, r1, 0x58
    stfs f0, 0x5c(r1)
    addi r9, r1, 0x48
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x60(r1)
    stfs f0, 0x64(r1)
    stfs f0, 0x68(r1)
    stfs f0, 0x6c(r1)
    stfs f1, 0x48(r1)
    stfs f1, 0x4c(r1)
    stfs f1, 0x50(r1)
    stfs f1, 0x54(r1)
    stw r0, 0x8(r1)
    stw r30, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r0, 0x1624(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8024E1C0_0000126C
    li r30, 0x3
lbl_fn_8024E1C0_0000126C:
    li r0, -0x1
    stw r30, 0x164c(r31)
    stw r0, 0x1650(r31)
    b lbl_fn_8024E1C0_00001538
lbl_fn_8024E1C0_0000127C:
    bl fn_8024F9B8
    cmpwi r3, 0x0
    beq lbl_fn_8024E1C0_00001538
    li r0, 0x6
    stw r0, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    li r0, 0x0
    stw r0, 0x14b8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_8088326C
    li r0, 0x1
    stw r3, 0x590(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80883268
    li r4, 0x0
    stw r0, 0x3fc(r31)
    li r5, 0x14a
    lfs f2, lbl_808832C4
    li r6, 0x0
    stfs f0, 0x2fc(r31)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    b lbl_fn_8024E1C0_00001538
lbl_fn_8024E1C0_000012EC:
    addi r4, r3, 0x1610
    lfs f2, 0x1618(r3)
    psq_l f1, 0x0(r4), 0, 0
    addi r5, r3, 0x15f4
    li r0, 0x6
    psq_st f1, 0x0(r5), 0, 0
    li r4, 0x3
    stfs f2, 0x15fc(r3)
    stw r0, 0x58c(r3)
    bl fn_8016E970
    li r0, 0x0
    stw r0, 0x14b8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_8088326C
    li r0, 0x1
    stw r3, 0x590(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80883268
    li r4, 0x0
    stw r0, 0x3fc(r31)
    li r5, 0x14a
    lfs f2, lbl_808832C4
    li r6, 0x0
    stfs f0, 0x2fc(r31)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    b lbl_fn_8024E1C0_00001538
lbl_fn_8024E1C0_00001364:
    lfs f31, lbl_80883268
    addi r28, r3, 0x1594
    li r29, -0x1
    li r30, 0x0
    b lbl_fn_8024E1C0_000013C8
lbl_fn_8024E1C0_00001378:
    lfs f3, 0x530(r31)
    addi r3, r1, 0x38
    lfs f0, 0x8(r28)
    lfs f5, 0x52c(r31)
    fsubs f6, f3, f0
    lfs f4, 0x4(r28)
    lfs f3, 0x528(r31)
    lfs f0, 0x0(r28)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x3c(r1)
    stfs f0, 0x38(r1)
    stfs f6, 0x40(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f31
    ble lbl_fn_8024E1C0_000013C0
    mr r29, r30
    fmr f31, f1
lbl_fn_8024E1C0_000013C0:
    addi r28, r28, 0xc
    addi r30, r30, 0x1
lbl_fn_8024E1C0_000013C8:
    lwz r0, 0x1590(r31)
    cmplw r30, r0
    blt lbl_fn_8024E1C0_00001378
    cmpwi r29, 0x0
    blt lbl_fn_8024E1C0_00001538
    cmpw r29, r0
    bge lbl_fn_8024E1C0_00001538
    mulli r4, r29, 0xc
    addi r6, r31, 0x15f4
    li r0, 0x6
    mr r3, r31
    add r5, r31, r4
    addi r5, r5, 0x1594
    li r4, 0x3
    psq_l f1, 0x0(r5), 0, 0
    lfs f2, 0x8(r5)
    stfs f2, 0x15fc(r31)
    psq_st f1, 0x0(r6), 0, 0
    stw r0, 0x58c(r31)
    bl fn_8016E970
    li r0, 0x0
    stw r0, 0x14b8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_8088326C
    li r0, 0x1
    stw r3, 0x590(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80883268
    li r4, 0x0
    stw r0, 0x3fc(r31)
    li r5, 0x14a
    lfs f2, lbl_808832C4
    li r6, 0x0
    stfs f0, 0x2fc(r31)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    b lbl_fn_8024E1C0_00001538
lbl_fn_8024E1C0_00001468:
    li r30, 0x1
    stw r30, 0x58c(r3)
    li r4, 0x3
    bl fn_8016E970
    li r0, 0x0
    stw r0, 0x14b8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_8088326C
    li r4, 0x0
    stw r3, 0x590(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80883268
    li r5, 0x156
    stw r30, 0x3fc(r31)
    li r6, 0x0
    lfs f2, lbl_808832C4
    li r7, 0x0
    stfs f0, 0x2fc(r31)
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    li r3, 0x0
    li r4, 0x0
    bl fn_80232B7C
    lfs f0, lbl_80883268
    li r0, -0x1
    lfs f1, lbl_8088326C
    addi r4, r31, 0x1564
    stfs f0, 0x20(r1)
    addi r5, r31, 0xb0
    addi r7, r1, 0x2c
    addi r8, r1, 0x20
    stfs f0, 0x24(r1)
    addi r9, r1, 0x10
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x28(r1)
    stfs f0, 0x2c(r1)
    stfs f0, 0x30(r1)
    stfs f0, 0x34(r1)
    stfs f1, 0x10(r1)
    stfs f1, 0x14(r1)
    stfs f1, 0x18(r1)
    stfs f1, 0x1c(r1)
    stw r0, 0x8(r1)
    stw r30, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r3, 0x14c4(r31)
    addi r0, r3, 0x1
    stw r0, 0x14c4(r31)
lbl_fn_8024E1C0_00001538:
    lwz r3, 0x1658(r31)
    li r0, -0x1
    stw r3, 0x1654(r31)
    stw r0, 0x1658(r31)
    psq_l f31, 0xb8(r1), 0, 0
    lfd f31, 0xb0(r1)
    lwz r31, 0xac(r1)
    lwz r30, 0xa8(r1)
    lwz r29, 0xa4(r1)
    lwz r28, 0xa0(r1)
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

asm void fn_8024E690(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    stw r31, 0x3c(r1)
    mr r31, r3
    lwz r0, 0x16e4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8024E690_000015C0
    lfs f31, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_8024E690_000016A8
    mr r3, r31
    bl fn_801765D8
    b lbl_fn_8024E690_000016A8
lbl_fn_8024E690_000015C0:
    lfs f31, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_8024E690_000016A0
    lwz r3, 0x1434(r31)
    lwz r4, 0x12a4(r31)
    lwz r0, 0x5c0(r31)
    cmpwi r3, 0x0
    oris r4, r4, 0x200
    stw r4, 0x12a4(r31)
    clrrwi r0, r0, 1
    stw r0, 0x5c0(r31)
    ble lbl_fn_8024E690_00001684
    subi r0, r3, 0x1
    stw r0, 0x1434(r31)
    cmpwi r0, 0x1d
    bne lbl_fn_8024E690_000016A8
    li r3, 0x0
    li r4, 0x0
    bl fn_80232B7C
    lfs f0, lbl_80883268
    li r3, -0x1
    lfs f1, lbl_8088326C
    li r0, 0x1
    stfs f0, 0x1c(r1)
    addi r4, r31, 0x14ec
    addi r5, r31, 0xb0
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
    b lbl_fn_8024E690_000016A8
lbl_fn_8024E690_00001684:
    ori r0, r4, 0x8000
    stw r0, 0x12a4(r31)
    mr r3, r31
    bl fn_801765D8
    mr r3, r31
    bl fn_800EE360
    b lbl_fn_8024E690_000016A8
lbl_fn_8024E690_000016A0:
    li r0, 0x1e
    stw r0, 0x1434(r31)
lbl_fn_8024E690_000016A8:
    lwz r0, 0x54(r1)
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    lwz r31, 0x3c(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8024E7E4(void)
{
    nofralloc
    stwu r1, -0x1c0(r1)
    mflr r0
    stw r0, 0x1c4(r1)
    stfd f31, 0x1b0(r1)
    psq_st f31, 0x1b8(r1), 0, 0
    stfd f30, 0x1a0(r1)
    psq_st f30, 0x1a8(r1), 0, 0
    stw r31, 0x19c(r1)
    mr r31, r3
    stw r30, 0x198(r1)
    lwz r0, 0x14b8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8024E7E4_0000170C
    cmpwi r0, 0x1
    beq lbl_fn_8024E7E4_00001A20
    cmpwi r0, 0x2
    beq lbl_fn_8024E7E4_00001BE4
    b lbl_fn_8024E7E4_00001C20
lbl_fn_8024E7E4_0000170C:
    lwz r0, 0x14b0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8024E7E4_00001968
    lfs f2, 0x15fc(r3)
    addi r5, r3, 0x15f4
    lfs f0, 0x530(r3)
    addi r4, r1, 0xcc
    psq_l f1, 0x0(r5), 0, 0
    addi r5, r1, 0xc0
    fsubs f6, f2, f0
    psq_st f1, 0x0(r4), 0, 0
    lfs f3, 0x528(r3)
    addi r30, r1, 0x80
    stfs f2, 0xd4(r1)
    fmr f2, f6
    lfs f4, 0xcc(r1)
    lfs f0, 0x52c(r3)
    frsp f7, f2
    lfs f5, 0xd0(r1)
    fsubs f3, f4, f3
    stfs f6, 0xc8(r1)
    fsubs f5, f5, f0
    lfs f0, lbl_808832AC
    fabs f4, f7
    stfs f3, 0xc0(r1)
    stfs f5, 0xc4(r1)
    frsp f3, f4
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    fcmpo cr0, f3, f0
    stfs f2, 0x88(r1)
    bge lbl_fn_8024E7E4_000017B0
    lfs f3, 0x80(r1)
    lfs f0, lbl_80883268
    fcmpo cr0, f3, f0
    ble lbl_fn_8024E7E4_000017A4
    lfs f0, lbl_808832B0
    b lbl_fn_8024E7E4_000017A8
lbl_fn_8024E7E4_000017A4:
    lfs f0, lbl_808832B4
lbl_fn_8024E7E4_000017A8:
    stfs f0, 0x78(r1)
    b lbl_fn_8024E7E4_000017C4
lbl_fn_8024E7E4_000017B0:
    fmr f2, f7
    lfs f1, 0x80(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x78(r1)
lbl_fn_8024E7E4_000017C4:
    lfs f0, 0x78(r1)
    addi r3, r1, 0xd8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883268
    addi r4, r1, 0x68
    lfs f30, 0xe0(r1)
    mr r5, r4
    lfs f31, 0xdc(r1)
    addi r3, r1, 0x108
    lfs f13, 0xd8(r1)
    lfs f12, 0xf0(r1)
    lfs f11, 0xec(r1)
    lfs f10, 0xe8(r1)
    lfs f9, 0x100(r1)
    lfs f8, 0xfc(r1)
    lfs f7, 0xf8(r1)
    lfs f6, 0x104(r1)
    lfs f5, 0xf4(r1)
    lfs f4, 0xe4(r1)
    lfs f0, lbl_8088326C
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x88(r1)
    stfs f3, 0x138(r1)
    stfs f3, 0x13c(r1)
    stfs f3, 0x140(r1)
    stfs f0, 0x144(r1)
    stfs f13, 0x38(r1)
    stfs f31, 0x3c(r1)
    stfs f30, 0x40(r1)
    stfs f13, 0x108(r1)
    stfs f31, 0x10c(r1)
    stfs f30, 0x110(r1)
    stfs f10, 0x44(r1)
    stfs f11, 0x48(r1)
    stfs f12, 0x4c(r1)
    stfs f10, 0x118(r1)
    stfs f11, 0x11c(r1)
    stfs f12, 0x120(r1)
    stfs f7, 0x50(r1)
    stfs f8, 0x54(r1)
    stfs f9, 0x58(r1)
    stfs f7, 0x128(r1)
    stfs f8, 0x12c(r1)
    stfs f9, 0x130(r1)
    stfs f4, 0x5c(r1)
    stfs f5, 0x60(r1)
    stfs f6, 0x64(r1)
    stfs f4, 0x114(r1)
    stfs f5, 0x124(r1)
    stfs f6, 0x134(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x70(r1)
    bl fn_805F9750
    lfs f2, 0x70(r1)
    lfs f0, lbl_808832AC
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8024E7E4_000018E0
    lfs f3, 0x6c(r1)
    lfs f0, lbl_80883268
    fcmpo cr0, f3, f0
    ble lbl_fn_8024E7E4_000018D0
    lfs f0, lbl_808832B0
    b lbl_fn_8024E7E4_000018D4
lbl_fn_8024E7E4_000018D0:
    lfs f0, lbl_808832B4
lbl_fn_8024E7E4_000018D4:
    fneg f0, f0
    stfs f0, 0x74(r1)
    b lbl_fn_8024E7E4_000018F4
lbl_fn_8024E7E4_000018E0:
    lfs f1, 0x6c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x74(r1)
lbl_fn_8024E7E4_000018F4:
    addi r3, r1, 0x74
    lfs f3, lbl_80883268
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_80743540@ha
    psq_st f1, 0x0(r30), 0, 0
    fmr f2, f3
    lfs f0, 0x538(r31)
    lfs f4, 0x84(r1)
    stfs f2, 0x88(r1)
    fsubs f1, f4, f0
    lfd f2, lbl_80743540@l(r3)
    stfs f3, 0x7c(r1)
    bl fn_8068AEA8
    frsp f4, f1
    lfs f0, lbl_80883294
    fcmpo cr0, f4, f0
    ble lbl_fn_8024E7E4_00001940
    lfs f0, lbl_80883288
    fsubs f4, f4, f0
lbl_fn_8024E7E4_00001940:
    lfs f0, lbl_80883298
    fcmpo cr0, f4, f0
    bge lbl_fn_8024E7E4_00001954
    lfs f0, lbl_80883288
    fadds f4, f4, f0
lbl_fn_8024E7E4_00001954:
    lfs f3, lbl_808832B8
    lfs f0, 0x538(r31)
    fmuls f3, f4, f3
    fadds f0, f0, f3
    stfs f0, 0x538(r31)
lbl_fn_8024E7E4_00001968:
    lfs f30, 0x2e4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f30, f1
    cror eq, gt, eq
    bne lbl_fn_8024E7E4_00001C20
    lfs f1, lbl_8088326C
    addi r3, r31, 0xb0
    lfs f2, lbl_808832C4
    li r4, 0x0
    li r5, 0x14b
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    li r30, 0x1
    stw r30, 0x14b8(r31)
    li r3, 0x0
    li r4, 0x0
    bl fn_80232B7C
    lfs f0, lbl_80883268
    li r0, -0x1
    lfs f1, lbl_8088326C
    addi r4, r31, 0x1570
    stfs f0, 0x1c(r1)
    addi r5, r31, 0xb0
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
    stw r30, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    b lbl_fn_8024E7E4_00001C20
lbl_fn_8024E7E4_00001A20:
    addi r5, r3, 0x15f4
    lfs f2, 0x15fc(r3)
    addi r4, r1, 0xb4
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lfs f0, 0x530(r3)
    lfs f5, 0xb8(r1)
    lfs f4, 0x52c(r3)
    fsubs f6, f2, f0
    lfs f0, 0x528(r3)
    addi r3, r1, 0xa8
    lfs f3, 0xb4(r1)
    fsubs f4, f5, f4
    stfs f2, 0xbc(r1)
    fsubs f0, f3, f0
    stfs f4, 0xac(r1)
    stfs f0, 0xa8(r1)
    stfs f6, 0xb0(r1)
    bl fn_805F9940
    lfs f0, lbl_808832F4
    fmr f30, f1
    fcmpo cr0, f1, f0
    blt lbl_fn_8024E7E4_00001A88
    lwz r0, 0x14bc(r31)
    cmpwi r0, 0x5a
    blt lbl_fn_8024E7E4_00001AB8
lbl_fn_8024E7E4_00001A88:
    lfs f1, lbl_8088326C
    addi r3, r31, 0xb0
    lfs f2, lbl_808832C4
    li r4, 0x0
    li r5, 0x14c
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    li r0, 0x2
    stw r0, 0x14b8(r31)
    b lbl_fn_8024E7E4_00001C20
lbl_fn_8024E7E4_00001AB8:
    addi r3, r1, 0xa8
    mr r4, r3
    bl fn_805F98D0
    lfs f3, lbl_808832F8
    fcmpo cr0, f30, f3
    bge lbl_fn_8024E7E4_00001AD4
    fmr f3, f30
lbl_fn_8024E7E4_00001AD4:
    lfs f0, 0xa8(r1)
    lfs f4, lbl_808832F8
    fmuls f0, f0, f3
    fcmpo cr0, f30, f4
    stfs f0, 0xa8(r1)
    bge lbl_fn_8024E7E4_00001AF0
    fmr f4, f30
lbl_fn_8024E7E4_00001AF0:
    lfs f3, 0xac(r1)
    lfs f0, lbl_808832F8
    fmuls f3, f3, f4
    fcmpo cr0, f30, f0
    stfs f3, 0xac(r1)
    bge lbl_fn_8024E7E4_00001B0C
    b lbl_fn_8024E7E4_00001B10
lbl_fn_8024E7E4_00001B0C:
    fmr f30, f0
lbl_fn_8024E7E4_00001B10:
    lfs f0, 0xb0(r1)
    li r0, 0x0
    stw r0, 0x17c(r1)
    mr r4, r31
    fmuls f0, f0, f30
    addi r3, r1, 0x98
    stw r0, 0x180(r1)
    addi r5, r31, 0x528
    stfs f0, 0xb0(r1)
    stw r0, 0x184(r1)
    stw r0, 0x188(r1)
    bl fn_80176548
    lwz r3, lbl_8087EE98
    addi r4, r1, 0x148
    lfs f1, 0xa4(r1)
    addi r5, r1, 0x98
    addi r6, r1, 0xa8
    addi r8, r31, 0x5b8
    lis r7, 0x8000
    li r9, 0x0
    bl fn_8004D388
    addi r4, r1, 0x158
    addi r3, r1, 0x8c
    psq_l f1, 0x0(r4), 0, 0
    mr r6, r31
    psq_st f1, 0x0(r3), 0, 0
    li r4, 0x0
    lfs f0, 0x5a8(r31)
    li r5, 0x0
    lfs f3, 0x90(r1)
    li r9, 0x1e
    lfs f2, 0x160(r1)
    li r10, -0x1
    fsubs f4, f3, f0
    lfs f3, 0x5ac(r31)
    lfs f0, 0xa4(r1)
    fsubs f2, f2, f3
    lfs f5, 0x8c(r1)
    lfs f3, 0x5a4(r31)
    fsubs f0, f4, f0
    stfs f2, 0x530(r31)
    fsubs f3, f5, f3
    stfs f0, 0x90(r1)
    lwz r7, 0x14cc(r31)
    stfs f3, 0x8c(r1)
    lwz r8, 0x590(r31)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x528(r31), 0, 0
    lfs f1, lbl_80883268
    stfs f2, 0x94(r1)
    lwz r3, lbl_8087F048
    bl fn_800F8C6C
    b lbl_fn_8024E7E4_00001C20
lbl_fn_8024E7E4_00001BE4:
    lfs f30, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f30, f1
    cror eq, gt, eq
    bne lbl_fn_8024E7E4_00001C20
    li r30, 0x0
    stw r30, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    stw r30, 0x14b8(r31)
    stw r30, 0x14bc(r31)
    stw r30, 0x14dc(r31)
lbl_fn_8024E7E4_00001C20:
    lwz r0, 0x1c4(r1)
    psq_l f31, 0x1b8(r1), 0, 0
    lfd f31, 0x1b0(r1)
    psq_l f30, 0x1a8(r1), 0, 0
    lfd f30, 0x1a0(r1)
    lwz r31, 0x19c(r1)
    lwz r30, 0x198(r1)
    mtlr r0
    addi r1, r1, 0x1c0
    blr
}
