#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_26(void);
extern void _savegpr_26(void);
extern void fn_8003EA3C(void);
extern void fn_80041A28(void);
extern void fn_80084320(void);
extern void fn_8010CD3C(void);
extern void fn_8010CF28(void);
extern void fn_8011D21C(void);
extern void fn_80133E24(void);
extern void fn_80133EE8(void);
extern void fn_80133F6C(void);
extern void fn_80134134(void);
extern void fn_80134168(void);
extern void fn_801346C8(void);
extern void fn_80150460(void);
extern void fn_8015076C(void);
extern void fn_80164DCC(void);
extern void fn_8016E970(void);
extern void fn_801C8938(void);
extern void fn_80219E6C(void);
extern void fn_8021AA48(void);
extern void fn_80370174(void);
extern void fn_803E2110(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9990(void);
extern void fn_8068A850(void);
extern void fn_80695AD0(void);

/* External data declarations */
extern u8 lbl_80737808[];
extern u8 lbl_80737A9C[];
extern u8 lbl_80766768[];
extern u8 lbl_8077A720[];
extern u8 lbl_807C6B90[];

/* Small data declarations */
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F430;
extern u32 lbl_8087F490;
extern u32 lbl_8087F610;
extern u32 lbl_80881964;
extern u32 lbl_80881968;
extern u32 lbl_8088196C;
extern u32 lbl_808819A8;
extern u32 lbl_808819C4;
extern u32 lbl_80881B04;
extern u32 lbl_80881B18;

/* Function declarations */
void fn_801511C4(void);
void fn_80151204(void);
void fn_80151210(void);
void fn_80151218(void);
void fn_8015121C(void);
void fn_8015123C(void);
void fn_80151270(void);
void fn_801513D0(void);
void fn_80151448(void);
void fn_80152A20(void);
void fn_80152A24(void);

asm void fn_801511C4(void)
{
    nofralloc
    lha r8, 0x0(r4)
    addi r9, r3, 0x147c
    lha r7, 0x2(r4)
    lwz r6, 0x4(r4)
    lwz r5, 0x8(r4)
    psq_l f1, 0xc(r4), 0, 0
    lfs f2, 0x14(r4)
    lwz r0, 0x18(r4)
    sth r8, 0x1470(r3)
    sth r7, 0x1472(r3)
    stw r6, 0x1474(r3)
    stw r5, 0x1478(r3)
    psq_st f1, 0x0(r9), 0, 0
    stfs f2, 0x1484(r3)
    stw r0, 0x1488(r3)
    blr
}

asm void fn_80151204(void)
{
    nofralloc
    mr r5, r4
    li r4, 0x1
    b fn_803E2110
}

asm void fn_80151210(void)
{
    nofralloc
    lwz r3, lbl_8087F490
    blr
}

asm void fn_80151218(void)
{
    nofralloc
    blr
}

asm void fn_8015121C(void)
{
    nofralloc
    lwz r4, 0x0(r3)
    li r3, 0x20
    subi r0, r4, 0x20
    orc r3, r4, r3
    srwi r0, r0, 1
    subf r0, r0, r3
    srwi r3, r0, 31
    blr
}

asm void fn_8015123C(void)
{
    nofralloc
    lwz r0, 0x0(r3)
    slwi r0, r0, 3
    add r0, r3, r0
    addic. r5, r0, 0x4
    beq lbl_fn_8015123C_0000009C
    lwz r0, 0x0(r4)
    stw r0, 0x0(r5)
    lwz r0, 0x4(r4)
    stw r0, 0x4(r5)
lbl_fn_8015123C_0000009C:
    lwz r4, 0x0(r3)
    addi r0, r4, 0x1
    stw r0, 0x0(r3)
    blr
}

asm void fn_80151270(void)
{
    nofralloc
    cmpwi r3, 0x0
    beq lbl_fn_80151270_000000C4
    lwz r5, 0x7e0(r3)
    rlwinm r0, r5, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_80151270_000000CC
lbl_fn_80151270_000000C4:
    li r3, 0x0
    blr
lbl_fn_80151270_000000CC:
    lwz r0, 0x54c(r3)
    rlwinm r4, r0, 0, 7, 7
    subis r0, r4, 0x100
    cmplwi r0, 0x0
    beq lbl_fn_80151270_000000F0
    lwz r4, 0x137c(r3)
    rlwinm r0, r4, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_80151270_000000F8
lbl_fn_80151270_000000F0:
    li r3, 0x0
    blr
lbl_fn_80151270_000000F8:
    rlwinm r4, r4, 0, 15, 15
    subis r0, r4, 0x1
    cmplwi r0, 0x0
    bne lbl_fn_80151270_00000110
    li r3, 0x0
    blr
lbl_fn_80151270_00000110:
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 28
    beq lbl_fn_80151270_00000124
    li r3, 0x0
    blr
lbl_fn_80151270_00000124:
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x5
    beq lbl_fn_80151270_0000014C
    cmpwi r0, 0x6
    beq lbl_fn_80151270_00000154
    cmpwi r0, 0x7
    beq lbl_fn_80151270_000001B0
    cmpwi r0, 0xa
    beq lbl_fn_80151270_000001C4
    b lbl_fn_80151270_000001CC
lbl_fn_80151270_0000014C:
    li r3, 0x0
    blr
lbl_fn_80151270_00000154:
    lwz r4, 0x560(r3)
    subi r0, r4, 0x18
    cmplwi r0, 0x2
    ble lbl_fn_80151270_000001A0
    subi r0, r4, 0x28
    cmplwi r0, 0x1
    ble lbl_fn_80151270_000001A0
    cmpwi r4, 0x2
    beq lbl_fn_80151270_0000018C
    cmpwi r4, 0x2c
    beq lbl_fn_80151270_000001A0
    cmpwi r4, 0x44
    beq lbl_fn_80151270_000001A8
    b lbl_fn_80151270_000001CC
lbl_fn_80151270_0000018C:
    lwz r0, 0x2dc(r3)
    cmpwi r0, 0x1ea
    bne lbl_fn_80151270_000001CC
    li r3, 0x0
    blr
lbl_fn_80151270_000001A0:
    li r3, 0x0
    blr
lbl_fn_80151270_000001A8:
    li r3, 0x0
    blr
lbl_fn_80151270_000001B0:
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80151270_000001CC
    li r3, 0x0
    blr
lbl_fn_80151270_000001C4:
    li r3, 0x0
    blr
lbl_fn_80151270_000001CC:
    rlwinm r0, r5, 0, 27, 27
    cmplwi r0, 0x10
    beq lbl_fn_80151270_000001FC
    rlwinm r0, r5, 0, 25, 25
    cmplwi r0, 0x40
    beq lbl_fn_80151270_000001FC
    rlwinm r0, r5, 0, 17, 17
    cmplwi r0, 0x4000
    beq lbl_fn_80151270_000001FC
    rlwinm r0, r5, 0, 24, 24
    cmplwi r0, 0x80
    bne lbl_fn_80151270_00000204
lbl_fn_80151270_000001FC:
    li r3, 0x0
    blr
lbl_fn_80151270_00000204:
    li r3, 0x1
    blr
}

asm void fn_801513D0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x38(r3)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_801513D0_00000248
    lwz r3, 0x8(r4)
    bl fn_8021AA48
    cmpwi r3, 0x0
    beq lbl_fn_801513D0_0000026C
lbl_fn_801513D0_00000248:
    mr r3, r30
    mr r4, r31
    bl fn_80151448
    lwz r12, 0x0(r30)
    mr r3, r30
    mr r4, r31
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
lbl_fn_801513D0_0000026C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80151448(void)
{
    nofralloc
    stwu r1, -0x200(r1)
    mflr r0
    stw r0, 0x204(r1)
    addi r11, r1, 0x1f0
    stfd f31, 0x1f0(r1)
    psq_st f31, 0x1f8(r1), 0, 0
    bl _savegpr_26
    lwz r28, 0x50(r4)
    lis r30, lbl_8077A720@ha
    lwz r5, 0x12a4(r3)
    mr r26, r3
    rlwinm r0, r28, 0, 25, 25
    lwz r29, 0xc(r4)
    cmplwi r0, 0x40
    rlwinm r5, r5, 0, 23, 21
    stw r5, 0x12a4(r3)
    mr r27, r4
    addi r30, r30, lbl_8077A720@l
    beq lbl_fn_80151448_000002DC
    extrwi. r0, r5, 1, 21
    beq lbl_fn_80151448_000002DC
    ori r29, r29, 0x40
lbl_fn_80151448_000002DC:
    rlwinm r0, r28, 0, 21, 21
    cmplwi r0, 0x400
    beq lbl_fn_80151448_00000308
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_80151448_00000308
    lwz r4, 0x560(r3)
    subi r0, r4, 0x1
    cmplwi r0, 0x1
    bgt lbl_fn_80151448_00000308
    ori r29, r29, 0x400
lbl_fn_80151448_00000308:
    rlwinm r0, r28, 0, 19, 19
    cmplwi r0, 0x1000
    beq lbl_fn_80151448_00000364
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_80151448_00000330
    lwz r0, 0x560(r3)
    cmpwi r0, 0x60
    bne lbl_fn_80151448_00000330
    ori r29, r29, 0x1000
lbl_fn_80151448_00000330:
    addi r3, r3, 0xd74
    bl fn_8011D21C
    cmpwi r3, 0x0
    bne lbl_fn_80151448_00000350
    lwz r0, 0xd94(r26)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_80151448_00000360
lbl_fn_80151448_00000350:
    lwz r0, 0xd94(r26)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_80151448_00000364
lbl_fn_80151448_00000360:
    ori r29, r29, 0x1000
lbl_fn_80151448_00000364:
    lwz r3, 0x8(r27)
    lwz r0, 0xac(r3)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x4
    bne lbl_fn_80151448_0000037C
    ori r28, r28, 0x8
lbl_fn_80151448_0000037C:
    lwz r3, 0x0(r27)
    cmpwi r3, 0x0
    beq lbl_fn_80151448_000003A0
    addi r3, r3, 0x7d4
    li r4, 0x48
    bl fn_80133EE8
    cmpwi r3, 0x0
    beq lbl_fn_80151448_000003A0
    ori r28, r28, 0x8
lbl_fn_80151448_000003A0:
    rlwinm r31, r28, 0, 28, 28
    cmplwi r31, 0x8
    beq lbl_fn_80151448_000003BC
    lwz r0, 0x48(r27)
    cmpwi r0, 0x0
    beq lbl_fn_80151448_000003BC
    ori r29, r29, 0x8
lbl_fn_80151448_000003BC:
    cmplwi r31, 0x8
    bne lbl_fn_80151448_000003C8
    oris r29, r29, 0x40
lbl_fn_80151448_000003C8:
    rlwinm r0, r28, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_80151448_000003F8
    lwz r3, 0x8(r27)
    lwz r0, 0xac(r3)
    rlwinm r0, r0, 0, 21, 21
    cmpwi r0, 0x400
    bne lbl_fn_80151448_000003F8
    lwz r0, 0x12a4(r26)
    srwi. r0, r0, 31
    beq lbl_fn_80151448_000003F8
    ori r29, r29, 0x20
lbl_fn_80151448_000003F8:
    rlwinm r3, r28, 0, 14, 14
    subis r0, r3, 0x2
    cmplwi r0, 0x0
    beq lbl_fn_80151448_00000418
    lwz r0, 0x12a8(r26)
    extrwi. r0, r0, 1, 1
    beq lbl_fn_80151448_00000418
    oris r29, r29, 0x2
lbl_fn_80151448_00000418:
    lwz r0, 0x44(r27)
    cmpwi r0, 0x0
    bne lbl_fn_80151448_00000AB8
    lwz r0, 0x12a4(r26)
    srwi. r0, r0, 31
    beq lbl_fn_80151448_00000438
    lfs f1, lbl_80881964
    b lbl_fn_80151448_0000043C
lbl_fn_80151448_00000438:
    lfs f1, lbl_80881968
lbl_fn_80151448_0000043C:
    lfs f0, lbl_8088196C
    addi r3, r1, 0x138
    stfs f0, 0x74(r1)
    li r4, 0x79
    stfs f0, 0x78(r1)
    stfs f1, 0x7c(r1)
    lfs f1, 0x538(r26)
    bl fn_805F8E70
    addi r4, r1, 0x74
    addi r3, r1, 0x138
    mr r5, r4
    bl fn_805F93C0
    addi r3, r1, 0x74
    addi r4, r27, 0x28
    bl fn_805F9990
    rlwinm r0, r28, 0, 27, 27
    fmr f31, f1
    cmplwi r0, 0x10
    bne lbl_fn_80151448_000004DC
    lwz r3, 0x0(r27)
    rlwinm r29, r29, 0, 28, 26
    cmpwi r3, 0x0
    beq lbl_fn_80151448_000004DC
    addi r3, r3, 0x7d4
    li r4, -0x1
    li r5, 0x10
    bl fn_80133E24
    lwz r3, 0x0(r27)
    li r4, -0x1
    li r5, -0x1
    addi r3, r3, 0x7d4
    bl fn_80133F6C
    cmpwi r3, 0x0
    bgt lbl_fn_80151448_000004DC
    lwz r3, 0xc(r27)
    lwz r0, 0x94(r27)
    rlwinm r3, r3, 0, 7, 5
    stw r3, 0xc(r27)
    rlwinm r0, r0, 0, 7, 5
    stw r0, 0x94(r27)
lbl_fn_80151448_000004DC:
    cmplwi r31, 0x8
    beq lbl_fn_80151448_0000058C
    lwz r0, 0x12a4(r26)
    extrwi. r0, r0, 1, 26
    beq lbl_fn_80151448_0000058C
    lwz r3, lbl_8087F0A8
    lfs f1, lbl_808819A8
    lfs f0, 0x334(r3)
    fmuls f1, f1, f0
    bl fn_8068A850
    frsp f0, f1
    fcmpo cr0, f31, f0
    bgt lbl_fn_80151448_00000534
    lwz r0, 0x12a8(r26)
    extrwi. r0, r0, 1, 15
    bne lbl_fn_80151448_00000534
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    beq lbl_fn_80151448_0000058C
    lwz r0, 0x48(r26)
    cmpwi r0, 0x0
    bne lbl_fn_80151448_0000058C
lbl_fn_80151448_00000534:
    lwz r5, 0x7e0(r26)
    li r4, 0x1
    rlwinm r3, r5, 0, 12, 12
    subis r0, r3, 0x8
    cmplwi r0, 0x0
    beq lbl_fn_80151448_00000560
    rlwinm r3, r5, 0, 7, 7
    subis r0, r3, 0x100
    cmplwi r0, 0x0
    beq lbl_fn_80151448_00000560
    li r4, 0x0
lbl_fn_80151448_00000560:
    cmpwi r4, 0x0
    bne lbl_fn_80151448_0000058C
    lfs f1, 0x8d8(r26)
    lfs f0, lbl_808819C4
    fabs f1, f1
    frsp f1, f1
    fcmpo cr0, f1, f0
    mfcr r0
    srwi. r0, r0, 31
    bne lbl_fn_80151448_0000058C
    ori r29, r29, 0x8
lbl_fn_80151448_0000058C:
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_80151448_000005C8
    mr r5, r26
    mr r6, r26
    li r4, 0x5
    bl fn_8010CD3C
    cmpwi r3, 0x0
    beq lbl_fn_80151448_000005C8
    lwz r3, lbl_8087F048
    mr r5, r26
    mr r6, r26
    li r4, 0x5
    bl fn_8010CF28
    ori r29, r29, 0x20
lbl_fn_80151448_000005C8:
    rlwinm r0, r28, 0, 24, 24
    cmplwi r0, 0x80
    beq lbl_fn_80151448_00000608
    lwz r3, 0x4(r27)
    cmpwi r3, 0x0
    beq lbl_fn_80151448_00000608
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 27, 27
    cmplwi r0, 0x10
    bne lbl_fn_80151448_000005F4
    ori r29, r29, 0x80
lbl_fn_80151448_000005F4:
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 17, 17
    cmplwi r0, 0x4000
    bne lbl_fn_80151448_00000608
    ori r29, r29, 0x80
lbl_fn_80151448_00000608:
    lwz r31, 0x0(r27)
    li r28, 0x0
    cmpwi r31, 0x0
    beq lbl_fn_80151448_000007D0
    lwz r0, 0xf80(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80151448_00000644
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x168(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x16c(r1)
    stw r0, 0x170(r1)
    b lbl_fn_80151448_00000660
lbl_fn_80151448_00000644:
    addi r3, r30, 0x5c4
    lwz r5, 0x5c4(r30)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x168(r1)
    stw r4, 0x16c(r1)
    stw r0, 0x170(r1)
lbl_fn_80151448_00000660:
    lwz r5, 0x168(r1)
    addi r3, r1, 0x5c
    lwz r4, 0x16c(r1)
    lwz r0, 0x170(r1)
    stw r5, 0x5c(r1)
    stw r4, 0x60(r1)
    stw r0, 0x64(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80151448_000006A0
    lwz r3, 0xf80(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x30(r12)
    mtctr r12
    bctrl
    b lbl_fn_80151448_000006A4
lbl_fn_80151448_000006A0:
    li r3, 0x0
lbl_fn_80151448_000006A4:
    cmpwi r3, 0x0
    bne lbl_fn_80151448_000006B0
    li r28, 0x1
lbl_fn_80151448_000006B0:
    lwz r31, 0x0(r27)
    lwz r0, 0xf80(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80151448_000006E0
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x174(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x178(r1)
    stw r0, 0x17c(r1)
    b lbl_fn_80151448_000006FC
lbl_fn_80151448_000006E0:
    addi r3, r30, 0x5d0
    lwz r5, 0x5d0(r30)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x174(r1)
    stw r4, 0x178(r1)
    stw r0, 0x17c(r1)
lbl_fn_80151448_000006FC:
    lwz r5, 0x174(r1)
    addi r3, r1, 0x50
    lwz r4, 0x178(r1)
    lwz r0, 0x17c(r1)
    stw r5, 0x50(r1)
    stw r4, 0x54(r1)
    stw r0, 0x58(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80151448_0000073C
    lwz r3, 0xf80(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x30(r12)
    mtctr r12
    bctrl
    b lbl_fn_80151448_00000740
lbl_fn_80151448_0000073C:
    li r3, 0x0
lbl_fn_80151448_00000740:
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    subf. r0, r4, r0
    bne lbl_fn_80151448_000007B0
    lwz r3, 0x0(r27)
    lwz r0, 0x12d0(r3)
    addi r4, r3, 0x12d4
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80151448_000007A0
lbl_fn_80151448_0000076C:
    lwz r5, 0x0(r4)
    lwz r0, 0xac(r5)
    rlwinm r3, r0, 0, 5, 5
    subis r0, r3, 0x400
    cmplwi r0, 0x0
    bne lbl_fn_80151448_00000798
    lwz r3, 0x4(r5)
    cmpwi r3, 0x0
    ble lbl_fn_80151448_00000798
    bl fn_80219E6C
    b lbl_fn_80151448_000007A4
lbl_fn_80151448_00000798:
    addi r4, r4, 0x14
    bdnz lbl_fn_80151448_0000076C
lbl_fn_80151448_000007A0:
    li r3, 0x0
lbl_fn_80151448_000007A4:
    cmpwi r3, 0x0
    beq lbl_fn_80151448_000007B0
    li r28, 0x1
lbl_fn_80151448_000007B0:
    lwz r31, 0x0(r27)
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x6
    bne lbl_fn_80151448_000007D0
    lwz r0, 0x560(r31)
    cmpwi r0, 0x9
    bne lbl_fn_80151448_000007D0
    li r28, 0x1
lbl_fn_80151448_000007D0:
    cmpwi r28, 0x0
    beq lbl_fn_80151448_000007FC
    lwz r12, 0x0(r26)
    mr r3, r26
    mr r4, r31
    lwz r12, 0x5c(r12)
    mtctr r12
    bctrl
    lwz r0, 0xfe4(r26)
    stw r0, 0x74(r27)
    b lbl_fn_80151448_00000804
lbl_fn_80151448_000007FC:
    li r0, 0x0
    stw r0, 0x74(r27)
lbl_fn_80151448_00000804:
    lwz r3, lbl_8087F430
    li r4, 0x548
    bl fn_80370174
    cmpwi r3, 0x1
    bne lbl_fn_80151448_00000854
    lwz r0, 0x48(r26)
    cmpwi r0, 0x0
    beq lbl_fn_80151448_00000854
    lwz r3, 0x8(r27)
    lwz r0, 0x4(r3)
    cmpwi r0, 0xd0
    beq lbl_fn_80151448_00000854
    lwz r3, 0x0(r27)
    ori r29, r29, 0x2008
    li r4, 0x1
    lwz r12, 0x0(r3)
    lwz r12, 0x7c(r12)
    mtctr r12
    bctrl
    b lbl_fn_80151448_00000964
lbl_fn_80151448_00000854:
    lwz r3, lbl_8087F430
    li r4, 0x28
    bl fn_80370174
    cmpwi r3, 0x0
    bne lbl_fn_80151448_00000964
    lwz r3, 0x0(r27)
    cmpwi r3, 0x0
    beq lbl_fn_80151448_00000964
    lwz r0, 0x958(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80151448_00000964
    rlwinm r0, r29, 0, 28, 28
    li r28, 0x0
    cmplwi r0, 0x8
    bne lbl_fn_80151448_000008B8
    lwz r3, 0x12a4(r26)
    extrwi. r0, r3, 1, 26
    beq lbl_fn_80151448_000008B8
    srwi. r0, r3, 31
    bne lbl_fn_80151448_000008B8
    lwz r0, 0x80(r27)
    srwi. r0, r0, 31
    bne lbl_fn_80151448_000008B8
    li r28, 0x1
lbl_fn_80151448_000008B8:
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    bne lbl_fn_80151448_000008F8
    addi r3, r26, 0x7d4
    li r4, 0x2
    li r5, 0x0
    bl fn_801346C8
    cmpwi r3, 0x0
    bne lbl_fn_80151448_000008F8
    addi r3, r26, 0x7d4
    li r4, 0x3
    li r5, 0x0
    bl fn_801346C8
    cmpwi r3, 0x0
    bne lbl_fn_80151448_000008F8
    li r28, 0x0
lbl_fn_80151448_000008F8:
    cmpwi r28, 0x0
    beq lbl_fn_80151448_00000964
    lwz r5, 0x0(r27)
    mr r4, r26
    li r3, 0x1
    bl fn_80041A28
    cmpwi r3, 0x3
    bne lbl_fn_80151448_00000938
    lwz r3, 0x0(r27)
    ori r29, r29, 0x2008
    li r4, 0x1
    lwz r12, 0x0(r3)
    lwz r12, 0x7c(r12)
    mtctr r12
    bctrl
    b lbl_fn_80151448_00000964
lbl_fn_80151448_00000938:
    lwz r0, 0x12a4(r26)
    li r3, 0x0
    extrwi. r0, r0, 1, 26
    beq lbl_fn_80151448_00000958
    lwz r0, 0xf58(r26)
    cmpwi r0, 0xf
    blt lbl_fn_80151448_00000958
    li r3, 0x1
lbl_fn_80151448_00000958:
    lwz r0, 0x12a4(r26)
    rlwimi r0, r3, 9, 22, 22
    stw r0, 0x12a4(r26)
lbl_fn_80151448_00000964:
    lfs f0, lbl_80881964
    li r0, 0x0
    li r3, 0x1
    stw r3, 0xf0(r1)
    mr r7, r29
    addi r8, r1, 0xf0
    stfs f0, 0xf4(r1)
    addi r3, r27, 0x64
    li r9, 0x0
    li r10, 0x0
    stfs f0, 0xf8(r1)
    stw r0, 0xfc(r1)
    stfs f0, 0x100(r1)
    stw r0, 0x104(r1)
    lwz r0, 0x74(r27)
    stw r0, 0xf0(r1)
    lfs f0, 0x5c(r27)
    stfs f0, 0xf4(r1)
    lfs f0, 0x60(r27)
    stfs f0, 0xf8(r1)
    lwz r0, 0x12a4(r26)
    extrwi r0, r0, 1, 9
    stw r0, 0x104(r1)
    lwz r4, 0x8(r27)
    lwz r5, 0x0(r27)
    lwz r6, 0x4(r27)
    bl fn_8003EA3C
    lwz r0, 0x80(r27)
    extrwi. r0, r0, 1, 1
    beq lbl_fn_80151448_000009E4
    rlwinm r29, r29, 0, 29, 27
    oris r29, r29, 0x20
lbl_fn_80151448_000009E4:
    lwz r0, 0x80(r27)
    extrwi. r0, r0, 1, 2
    beq lbl_fn_80151448_000009F4
    rlwinm r29, r29, 0, 7, 5
lbl_fn_80151448_000009F4:
    lwz r0, 0x80(r27)
    extrwi. r0, r0, 1, 3
    beq lbl_fn_80151448_00000A04
    rlwinm r29, r29, 0, 17, 15
lbl_fn_80151448_00000A04:
    lwz r3, 0x4(r27)
    cmpwi r3, 0x0
    beq lbl_fn_80151448_00000A38
    lwz r0, 0x48(r3)
    cmpwi r0, 0x2
    bne lbl_fn_80151448_00000A38
    lwz r0, 0x68(r27)
    cmpwi r0, 0x0
    bge lbl_fn_80151448_00000A38
    lwz r4, 0x0(r27)
    mr r3, r26
    li r5, 0x1
    bl fn_80150460
lbl_fn_80151448_00000A38:
    lwz r0, 0x64(r27)
    cmpwi r0, 0x1
    bne lbl_fn_80151448_00000A64
    lwz r4, 0x34(r27)
    mr r3, r26
    lwz r7, 0x38(r27)
    mr r8, r29
    mr r9, r27
    addi r5, r27, 0x10
    addi r6, r27, 0x1c
    bl fn_8015076C
lbl_fn_80151448_00000A64:
    lwz r3, 0x8(r27)
    rlwinm r0, r29, 0, 26, 26
    cmplwi r0, 0x20
    lwz r0, 0xc4(r3)
    stw r0, 0x88(r27)
    bne lbl_fn_80151448_00000A88
    li r0, 0x2
    stw r0, 0x84(r27)
    b lbl_fn_80151448_00000AA8
lbl_fn_80151448_00000A88:
    rlwinm r0, r29, 0, 28, 28
    cmplwi r0, 0x8
    bne lbl_fn_80151448_00000AA0
    li r0, 0x1
    stw r0, 0x84(r27)
    b lbl_fn_80151448_00000AA8
lbl_fn_80151448_00000AA0:
    li r0, 0x0
    stw r0, 0x84(r27)
lbl_fn_80151448_00000AA8:
    li r0, 0x1
    stw r0, 0x8c(r27)
    stw r0, 0x90(r27)
    b lbl_fn_80151448_0000172C
lbl_fn_80151448_00000AB8:
    cmpwi r0, 0x1
    bne lbl_fn_80151448_000010DC
    cmplwi r31, 0x8
    beq lbl_fn_80151448_00000BB8
    lwz r3, 0x12a4(r26)
    lwz r31, lbl_8087F0A8
    extrwi. r0, r3, 1, 26
    beq lbl_fn_80151448_00000BB8
    srwi. r0, r3, 31
    beq lbl_fn_80151448_00000AE8
    lfs f1, lbl_80881964
    b lbl_fn_80151448_00000AEC
lbl_fn_80151448_00000AE8:
    lfs f1, lbl_80881968
lbl_fn_80151448_00000AEC:
    lfs f0, lbl_8088196C
    addi r3, r1, 0x108
    stfs f0, 0x68(r1)
    li r4, 0x79
    stfs f0, 0x6c(r1)
    stfs f1, 0x70(r1)
    lfs f1, 0x538(r26)
    bl fn_805F8E70
    addi r4, r1, 0x68
    addi r3, r1, 0x108
    mr r5, r4
    bl fn_805F93C0
    addi r3, r1, 0x68
    addi r4, r27, 0x28
    bl fn_805F9990
    lfs f2, lbl_808819A8
    fmr f31, f1
    lfs f0, 0x334(r31)
    fmuls f1, f2, f0
    bl fn_8068A850
    frsp f0, f1
    fcmpo cr0, f31, f0
    bgt lbl_fn_80151448_00000B60
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    beq lbl_fn_80151448_00000BB8
    lwz r0, 0x48(r26)
    cmpwi r0, 0x0
    bne lbl_fn_80151448_00000BB8
lbl_fn_80151448_00000B60:
    lwz r5, 0x7e0(r26)
    li r4, 0x1
    rlwinm r3, r5, 0, 12, 12
    subis r0, r3, 0x8
    cmplwi r0, 0x0
    beq lbl_fn_80151448_00000B8C
    rlwinm r3, r5, 0, 7, 7
    subis r0, r3, 0x100
    cmplwi r0, 0x0
    beq lbl_fn_80151448_00000B8C
    li r4, 0x0
lbl_fn_80151448_00000B8C:
    cmpwi r4, 0x0
    bne lbl_fn_80151448_00000BB8
    lfs f1, 0x8d8(r26)
    lfs f0, lbl_808819C4
    fabs f1, f1
    frsp f1, f1
    fcmpo cr0, f1, f0
    mfcr r0
    srwi. r0, r0, 31
    bne lbl_fn_80151448_00000BB8
    ori r29, r29, 0x8
lbl_fn_80151448_00000BB8:
    clrlwi r0, r28, 31
    cmplwi r0, 0x1
    beq lbl_fn_80151448_00000C0C
    lwz r0, 0x48(r26)
    cmpwi r0, 0x0
    beq lbl_fn_80151448_00000BDC
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    beq lbl_fn_80151448_00000C0C
lbl_fn_80151448_00000BDC:
    lwz r0, 0x12a4(r26)
    srwi. r0, r0, 31
    beq lbl_fn_80151448_00000C0C
    li r3, 0x0
    beq lbl_fn_80151448_00000C00
    lwz r0, 0xc48(r26)
    cmpwi r0, 0x0
    beq lbl_fn_80151448_00000C00
    li r3, 0x1
lbl_fn_80151448_00000C00:
    cmpwi r3, 0x0
    bne lbl_fn_80151448_00000C0C
    ori r29, r29, 0x1
lbl_fn_80151448_00000C0C:
    lfs f0, lbl_80881964
    li r0, 0x0
    stw r0, 0xe4(r1)
    lwz r3, lbl_8087F430
    stfs f0, 0xe8(r1)
    cmpwi r3, 0x0
    stw r0, 0xec(r1)
    stw r0, 0xd8(r1)
    stfs f0, 0xdc(r1)
    stfs f0, 0xe0(r1)
    lwz r0, 0x12a4(r26)
    extrwi r0, r0, 1, 9
    stw r0, 0xec(r1)
    beq lbl_fn_80151448_00000C80
    lwz r4, 0x0(r27)
    cmpwi r4, 0x0
    beq lbl_fn_80151448_00000C80
    lwz r0, 0x48(r4)
    cmpwi r0, 0x0
    bne lbl_fn_80151448_00000C80
    lwz r4, 0x8(r27)
    cmpwi r4, 0x0
    beq lbl_fn_80151448_00000C80
    lwz r0, 0x4(r4)
    cmpwi r0, 0x133
    bne lbl_fn_80151448_00000C80
    li r4, 0xda
    bl fn_80370174
    stw r3, 0xe4(r1)
lbl_fn_80151448_00000C80:
    lwz r3, 0x0(r27)
    cmpwi r3, 0x0
    beq lbl_fn_80151448_00000CE4
    addi r3, r3, 0x7d4
    li r4, 0x43
    bl fn_80134134
    cmpwi r3, 0x0
    beq lbl_fn_80151448_00000CE4
    lwz r3, 0x0(r27)
    li r4, 0x43
    li r5, -0x1
    addi r3, r3, 0x7d4
    bl fn_80134168
    xoris r3, r3, 0x8000
    lis r0, 0x4330
    lis r4, lbl_80737808@ha
    stw r3, 0x184(r1)
    lfd f2, lbl_80737808@l(r4)
    stw r0, 0x180(r1)
    lfs f1, lbl_80881B04
    lfd f0, 0x180(r1)
    fsubs f0, f0, f2
    fadds f0, f1, f0
    fdivs f0, f1, f0
    stfs f0, 0xe8(r1)
lbl_fn_80151448_00000CE4:
    lwz r4, 0x8(r27)
    mr r7, r29
    lwz r5, 0x0(r27)
    addi r3, r27, 0x64
    lwz r6, 0x4(r27)
    addi r8, r1, 0xd8
    li r9, 0x0
    li r10, 0x0
    bl fn_8003EA3C
    lwz r0, 0x80(r27)
    extrwi. r0, r0, 1, 1
    beq lbl_fn_80151448_00000D1C
    rlwinm r29, r29, 0, 29, 27
    oris r29, r29, 0x20
lbl_fn_80151448_00000D1C:
    lwz r0, 0x80(r27)
    extrwi. r0, r0, 1, 2
    beq lbl_fn_80151448_00000D2C
    rlwinm r29, r29, 0, 7, 5
lbl_fn_80151448_00000D2C:
    lwz r0, 0x80(r27)
    extrwi. r0, r0, 1, 3
    beq lbl_fn_80151448_00000D3C
    rlwinm r29, r29, 0, 17, 15
lbl_fn_80151448_00000D3C:
    lwz r0, 0x64(r27)
    cmpwi r0, 0x1
    bne lbl_fn_80151448_00000D68
    lwz r4, 0x34(r27)
    mr r3, r26
    lwz r7, 0x38(r27)
    mr r8, r29
    mr r9, r27
    addi r5, r27, 0x10
    addi r6, r27, 0x1c
    bl fn_8015076C
lbl_fn_80151448_00000D68:
    lwz r5, 0x8(r27)
    extrwi r3, r29, 1, 28
    li r0, 0x1
    lwz r4, 0xc4(r5)
    stw r4, 0x88(r27)
    stw r3, 0x84(r27)
    stw r0, 0x8c(r27)
    stw r0, 0x90(r27)
    lwz r0, 0xac(r5)
    rlwinm r3, r0, 0, 16, 16
    addis r0, r3, 0x0
    cmplwi r0, 0x8000
    bne lbl_fn_80151448_0000172C
    mr r3, r26
    bl fn_80151270
    cmpwi r3, 0x0
    beq lbl_fn_80151448_000010C0
    lwz r0, 0x12a4(r26)
    extrwi. r0, r0, 1, 29
    bne lbl_fn_80151448_000010C0
    lwz r3, 0x1208(r26)
    cmpwi r3, 0x0
    beq lbl_fn_80151448_00000E14
    lfs f0, lbl_8088196C
    li r28, 0x0
    li r0, 0x3
    stw r28, 0xa4(r1)
    addi r4, r1, 0xa0
    stw r28, 0xa8(r1)
    stw r28, 0xac(r1)
    stfs f0, 0xb4(r1)
    stfs f0, 0xb8(r1)
    stfs f0, 0xbc(r1)
    stw r0, 0xa0(r1)
    stw r26, 0xb0(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r3, 0x1208(r26)
    li r0, 0xff
    stb r0, 0x520(r3)
    stw r28, 0x1208(r26)
lbl_fn_80151448_00000E14:
    lis r5, lbl_80737A9C@ha
    li r3, 0x18
    addi r5, r5, lbl_80737A9C@l
    li r4, 0x0
    addi r5, r5, 0x24
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_80151448_00000E50
    mr r4, r26
    li r5, 0x1
    bl fn_801C8938
    mr r31, r3
lbl_fn_80151448_00000E50:
    lwz r0, 0x55c(r26)
    cmpwi r0, 0x6
    bne lbl_fn_80151448_00000EE0
    lwz r0, 0xf80(r26)
    cmpwi r0, 0x0
    bne lbl_fn_80151448_00000E88
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x188(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x18c(r1)
    stw r0, 0x190(r1)
    b lbl_fn_80151448_00000EA4
lbl_fn_80151448_00000E88:
    addi r3, r30, 0x5dc
    lwz r5, 0x5dc(r30)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x188(r1)
    stw r4, 0x18c(r1)
    stw r0, 0x190(r1)
lbl_fn_80151448_00000EA4:
    lwz r5, 0x188(r1)
    addi r3, r1, 0x44
    lwz r4, 0x18c(r1)
    lwz r0, 0x190(r1)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80151448_00000EE0
    lwz r3, 0xf80(r26)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80151448_00000EE0:
    lwz r0, 0x55c(r26)
    cmpwi r0, 0x6
    beq lbl_fn_80151448_00001094
    cmpwi r0, 0x8
    beq lbl_fn_80151448_00000EF8
    stw r0, 0x564(r26)
lbl_fn_80151448_00000EF8:
    lwz r0, 0x55c(r26)
    cmpwi r0, 0x6
    bne lbl_fn_80151448_00001094
    lwz r0, 0xf80(r26)
    cmpwi r0, 0x0
    bne lbl_fn_80151448_00000F30
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x194(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x198(r1)
    stw r0, 0x19c(r1)
    b lbl_fn_80151448_00000F4C
lbl_fn_80151448_00000F30:
    addi r3, r30, 0x5e8
    lwz r5, 0x5e8(r30)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x194(r1)
    stw r4, 0x198(r1)
    stw r0, 0x19c(r1)
lbl_fn_80151448_00000F4C:
    lwz r5, 0x194(r1)
    addi r3, r1, 0x2c
    lwz r4, 0x198(r1)
    lwz r0, 0x19c(r1)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80151448_00000F88
    lwz r3, 0xf80(r26)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80151448_00000F88:
    lwz r0, 0x55c(r26)
    cmpwi r0, 0x6
    beq lbl_fn_80151448_00001064
    cmpwi r0, 0x8
    beq lbl_fn_80151448_00000FA0
    stw r0, 0x564(r26)
lbl_fn_80151448_00000FA0:
    lwz r0, 0x55c(r26)
    cmpwi r0, 0x6
    bne lbl_fn_80151448_00001064
    lwz r0, 0xf80(r26)
    cmpwi r0, 0x0
    bne lbl_fn_80151448_00000FD8
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x1a0(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x1a4(r1)
    stw r0, 0x1a8(r1)
    b lbl_fn_80151448_00000FF4
lbl_fn_80151448_00000FD8:
    addi r3, r30, 0x5f4
    lwz r5, 0x5f4(r30)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x1a0(r1)
    stw r4, 0x1a4(r1)
    stw r0, 0x1a8(r1)
lbl_fn_80151448_00000FF4:
    lwz r5, 0x1a0(r1)
    addi r3, r1, 0x38
    lwz r4, 0x1a4(r1)
    lwz r0, 0x1a8(r1)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80151448_00001030
    lwz r3, 0xf80(r26)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80151448_00001030:
    mr r3, r26
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r26)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r26)
    beq lbl_fn_80151448_00001064
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80151448_00001064:
    lwz r3, 0xf80(r26)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r26)
    cmpwi r3, 0x0
    stw r0, 0xf80(r26)
    beq lbl_fn_80151448_00001094
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80151448_00001094:
    lwz r3, 0xf80(r26)
    li r0, 0x6
    stw r0, 0x55c(r26)
    cmpwi r3, 0x0
    stw r31, 0xf80(r26)
    beq lbl_fn_80151448_000010C0
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80151448_000010C0:
    lwz r3, 0x8(r27)
    lwz r0, 0x4(r3)
    cmpwi r0, 0x147
    bne lbl_fn_80151448_0000172C
    li r0, 0x0
    stw r0, 0x90(r27)
    b lbl_fn_80151448_0000172C
lbl_fn_80151448_000010DC:
    cmpwi r0, 0x2
    bne lbl_fn_80151448_00001664
    cmplwi r31, 0x8
    beq lbl_fn_80151448_00001214
    lwz r3, 0x8(r27)
    lbz r0, 0x1(r3)
    cmpwi r0, 0x1
    bne lbl_fn_80151448_000011B0
    lwz r0, 0x48(r26)
    cmpwi r0, 0x0
    beq lbl_fn_80151448_00001114
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    beq lbl_fn_80151448_0000114C
lbl_fn_80151448_00001114:
    lwz r0, 0x12a4(r26)
    srwi. r0, r0, 31
    beq lbl_fn_80151448_0000114C
    li r3, 0x0
    beq lbl_fn_80151448_00001138
    lwz r0, 0xc48(r26)
    cmpwi r0, 0x0
    beq lbl_fn_80151448_00001138
    li r3, 0x1
lbl_fn_80151448_00001138:
    cmpwi r3, 0x0
    bne lbl_fn_80151448_0000114C
    oris r29, r29, 0x8
    ori r29, r29, 0x9
    b lbl_fn_80151448_00001214
lbl_fn_80151448_0000114C:
    lwz r0, 0x12a4(r26)
    extrwi. r0, r0, 1, 26
    beq lbl_fn_80151448_00001214
    lwz r5, 0x7e0(r26)
    li r4, 0x1
    rlwinm r3, r5, 0, 12, 12
    subis r0, r3, 0x8
    cmplwi r0, 0x0
    beq lbl_fn_80151448_00001184
    rlwinm r3, r5, 0, 7, 7
    subis r0, r3, 0x100
    cmplwi r0, 0x0
    beq lbl_fn_80151448_00001184
    li r4, 0x0
lbl_fn_80151448_00001184:
    cmpwi r4, 0x0
    bne lbl_fn_80151448_00001214
    lfs f1, 0x8d8(r26)
    lfs f0, lbl_808819C4
    fabs f1, f1
    frsp f1, f1
    fcmpo cr0, f1, f0
    blt lbl_fn_80151448_00001214
    oris r29, r29, 0x8
    ori r29, r29, 0x8
    b lbl_fn_80151448_00001214
lbl_fn_80151448_000011B0:
    lwz r0, 0x12a4(r26)
    extrwi. r0, r0, 1, 26
    beq lbl_fn_80151448_00001214
    lwz r5, 0x7e0(r26)
    li r4, 0x1
    rlwinm r3, r5, 0, 12, 12
    subis r0, r3, 0x8
    cmplwi r0, 0x0
    beq lbl_fn_80151448_000011E8
    rlwinm r3, r5, 0, 7, 7
    subis r0, r3, 0x100
    cmplwi r0, 0x0
    beq lbl_fn_80151448_000011E8
    li r4, 0x0
lbl_fn_80151448_000011E8:
    cmpwi r4, 0x0
    bne lbl_fn_80151448_00001214
    lfs f1, 0x8d8(r26)
    lfs f0, lbl_808819C4
    fabs f1, f1
    frsp f1, f1
    fcmpo cr0, f1, f0
    mfcr r0
    srwi. r0, r0, 31
    bne lbl_fn_80151448_00001214
    ori r29, r29, 0x8
lbl_fn_80151448_00001214:
    lfs f0, lbl_80881964
    li r0, 0x0
    li r3, 0x1
    stw r3, 0xc0(r1)
    mr r7, r29
    addi r8, r1, 0xc0
    stfs f0, 0xc4(r1)
    addi r3, r27, 0x64
    li r9, 0x0
    li r10, 0x0
    stfs f0, 0xc8(r1)
    stw r0, 0xcc(r1)
    stfs f0, 0xd0(r1)
    stw r0, 0xd4(r1)
    lfs f0, 0x5c(r27)
    stfs f0, 0xc4(r1)
    lwz r4, 0x8(r27)
    lwz r5, 0x0(r27)
    lwz r6, 0x4(r27)
    bl fn_8003EA3C
    lwz r0, 0x80(r27)
    extrwi. r0, r0, 1, 1
    beq lbl_fn_80151448_00001278
    rlwinm r29, r29, 0, 29, 27
    oris r29, r29, 0x20
lbl_fn_80151448_00001278:
    lwz r0, 0x80(r27)
    extrwi. r0, r0, 1, 2
    beq lbl_fn_80151448_00001288
    rlwinm r29, r29, 0, 7, 5
lbl_fn_80151448_00001288:
    lwz r0, 0x80(r27)
    extrwi. r0, r0, 1, 3
    beq lbl_fn_80151448_00001298
    rlwinm r29, r29, 0, 17, 15
lbl_fn_80151448_00001298:
    lwz r0, 0x64(r27)
    cmpwi r0, 0x1
    bne lbl_fn_80151448_000012C4
    lwz r4, 0x34(r27)
    mr r3, r26
    lwz r7, 0x38(r27)
    mr r8, r29
    mr r9, r27
    addi r5, r27, 0x10
    addi r6, r27, 0x1c
    bl fn_8015076C
lbl_fn_80151448_000012C4:
    lwz r3, 0x8(r27)
    li r0, -0x1
    stw r0, 0x88(r27)
    cmpwi r3, 0x0
    beq lbl_fn_80151448_000012EC
    lwz r0, 0x4(r3)
    cmpwi r0, 0xa4
    bne lbl_fn_80151448_000012EC
    li r0, 0x2
    stw r0, 0x88(r27)
lbl_fn_80151448_000012EC:
    lwz r5, 0x0(r27)
    li r31, 0x0
    li r0, 0x1
    stw r31, 0x84(r27)
    neg r4, r5
    lwz r3, 0x8(r27)
    or r4, r4, r5
    stw r0, 0x90(r27)
    srwi r0, r4, 31
    stw r0, 0x8c(r27)
    lwz r0, 0xac(r3)
    rlwinm r3, r0, 0, 16, 16
    addis r0, r3, 0x0
    cmplwi r0, 0x8000
    bne lbl_fn_80151448_0000172C
    mr r3, r26
    bl fn_80151270
    cmpwi r3, 0x0
    beq lbl_fn_80151448_00001648
    lwz r0, 0x12a4(r26)
    extrwi. r0, r0, 1, 29
    bne lbl_fn_80151448_00001648
    lwz r3, 0x1208(r26)
    cmpwi r3, 0x0
    beq lbl_fn_80151448_0000139C
    lfs f0, lbl_8088196C
    li r0, 0x3
    stw r31, 0x84(r1)
    addi r4, r1, 0x80
    stw r31, 0x88(r1)
    stw r31, 0x8c(r1)
    stfs f0, 0x94(r1)
    stfs f0, 0x98(r1)
    stfs f0, 0x9c(r1)
    stw r0, 0x80(r1)
    stw r26, 0x90(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r3, 0x1208(r26)
    li r0, 0xff
    stb r0, 0x520(r3)
    stw r31, 0x1208(r26)
lbl_fn_80151448_0000139C:
    lis r5, lbl_80737A9C@ha
    li r3, 0x18
    addi r5, r5, lbl_80737A9C@l
    li r4, 0x0
    addi r5, r5, 0x24
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_80151448_000013D8
    mr r4, r26
    li r5, 0x1
    bl fn_801C8938
    mr r31, r3
lbl_fn_80151448_000013D8:
    lwz r0, 0x55c(r26)
    cmpwi r0, 0x6
    bne lbl_fn_80151448_00001468
    lwz r0, 0xf80(r26)
    cmpwi r0, 0x0
    bne lbl_fn_80151448_00001410
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x1ac(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x1b0(r1)
    stw r0, 0x1b4(r1)
    b lbl_fn_80151448_0000142C
lbl_fn_80151448_00001410:
    addi r3, r30, 0x600
    lwz r5, 0x600(r30)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x1ac(r1)
    stw r4, 0x1b0(r1)
    stw r0, 0x1b4(r1)
lbl_fn_80151448_0000142C:
    lwz r5, 0x1ac(r1)
    addi r3, r1, 0x20
    lwz r4, 0x1b0(r1)
    lwz r0, 0x1b4(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80151448_00001468
    lwz r3, 0xf80(r26)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80151448_00001468:
    lwz r0, 0x55c(r26)
    cmpwi r0, 0x6
    beq lbl_fn_80151448_0000161C
    cmpwi r0, 0x8
    beq lbl_fn_80151448_00001480
    stw r0, 0x564(r26)
lbl_fn_80151448_00001480:
    lwz r0, 0x55c(r26)
    cmpwi r0, 0x6
    bne lbl_fn_80151448_0000161C
    lwz r0, 0xf80(r26)
    cmpwi r0, 0x0
    bne lbl_fn_80151448_000014B8
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x1b8(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x1bc(r1)
    stw r0, 0x1c0(r1)
    b lbl_fn_80151448_000014D4
lbl_fn_80151448_000014B8:
    addi r3, r30, 0x60c
    lwz r5, 0x60c(r30)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x1b8(r1)
    stw r4, 0x1bc(r1)
    stw r0, 0x1c0(r1)
lbl_fn_80151448_000014D4:
    lwz r5, 0x1b8(r1)
    addi r3, r1, 0x8
    lwz r4, 0x1bc(r1)
    lwz r0, 0x1c0(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80151448_00001510
    lwz r3, 0xf80(r26)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80151448_00001510:
    lwz r0, 0x55c(r26)
    cmpwi r0, 0x6
    beq lbl_fn_80151448_000015EC
    cmpwi r0, 0x8
    beq lbl_fn_80151448_00001528
    stw r0, 0x564(r26)
lbl_fn_80151448_00001528:
    lwz r0, 0x55c(r26)
    cmpwi r0, 0x6
    bne lbl_fn_80151448_000015EC
    lwz r0, 0xf80(r26)
    cmpwi r0, 0x0
    bne lbl_fn_80151448_00001560
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x1c4(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x1c8(r1)
    stw r0, 0x1cc(r1)
    b lbl_fn_80151448_0000157C
lbl_fn_80151448_00001560:
    addi r3, r30, 0x618
    lwz r5, 0x618(r30)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x1c4(r1)
    stw r4, 0x1c8(r1)
    stw r0, 0x1cc(r1)
lbl_fn_80151448_0000157C:
    lwz r5, 0x1c4(r1)
    addi r3, r1, 0x14
    lwz r4, 0x1c8(r1)
    lwz r0, 0x1cc(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80151448_000015B8
    lwz r3, 0xf80(r26)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80151448_000015B8:
    mr r3, r26
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r26)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r26)
    beq lbl_fn_80151448_000015EC
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80151448_000015EC:
    lwz r3, 0xf80(r26)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r26)
    cmpwi r3, 0x0
    stw r0, 0xf80(r26)
    beq lbl_fn_80151448_0000161C
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80151448_0000161C:
    lwz r3, 0xf80(r26)
    li r0, 0x6
    stw r0, 0x55c(r26)
    cmpwi r3, 0x0
    stw r31, 0xf80(r26)
    beq lbl_fn_80151448_00001648
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80151448_00001648:
    lwz r3, 0x8(r27)
    lwz r0, 0x4(r3)
    cmpwi r0, 0x147
    bne lbl_fn_80151448_0000172C
    li r0, 0x0
    stw r0, 0x90(r27)
    b lbl_fn_80151448_0000172C
lbl_fn_80151448_00001664:
    cmpwi r0, 0x3
    bne lbl_fn_80151448_0000172C
    lis r8, lbl_807C6B90@ha
    lwz r4, 0x8(r27)
    lwz r5, 0x0(r27)
    mr r7, r29
    lwz r6, 0x4(r27)
    addi r3, r27, 0x64
    addi r8, r8, lbl_807C6B90@l
    li r9, 0x0
    li r10, 0x0
    bl fn_8003EA3C
    lwz r0, 0x80(r27)
    extrwi. r0, r0, 1, 1
    beq lbl_fn_80151448_000016A8
    rlwinm r29, r29, 0, 29, 27
    oris r29, r29, 0x20
lbl_fn_80151448_000016A8:
    lwz r0, 0x80(r27)
    extrwi. r0, r0, 1, 2
    beq lbl_fn_80151448_000016B8
    rlwinm r29, r29, 0, 7, 5
lbl_fn_80151448_000016B8:
    lwz r0, 0x80(r27)
    extrwi. r0, r0, 1, 3
    beq lbl_fn_80151448_000016C8
    rlwinm r29, r29, 0, 17, 15
lbl_fn_80151448_000016C8:
    lwz r4, 0x0(r27)
    li r6, -0x1
    lwz r0, 0x68(r27)
    li r5, 0x0
    neg r3, r4
    stw r6, 0x88(r27)
    or r3, r3, r4
    cmpwi r0, 0x0
    srwi r0, r3, 31
    stw r5, 0x84(r27)
    stw r0, 0x8c(r27)
    bne lbl_fn_80151448_00001724
    lwz r0, 0x6c(r27)
    cmpwi r0, 0x0
    bne lbl_fn_80151448_00001724
    lwz r0, 0x70(r27)
    cmpwi r0, 0x0
    bne lbl_fn_80151448_00001724
    lwz r0, 0x80(r27)
    srwi. r0, r0, 31
    bne lbl_fn_80151448_00001724
    stw r5, 0x90(r27)
    b lbl_fn_80151448_0000172C
lbl_fn_80151448_00001724:
    li r0, 0x1
    stw r0, 0x90(r27)
lbl_fn_80151448_0000172C:
    lwz r0, 0x68(r27)
    stw r29, 0x94(r27)
    cmpwi r0, 0x0
    ble lbl_fn_80151448_00001744
    li r0, 0x0
    stw r0, 0xc4c(r26)
lbl_fn_80151448_00001744:
    lwz r0, 0x12a4(r26)
    extrwi. r0, r0, 1, 3
    beq lbl_fn_80151448_0000183C
    lwz r6, 0x38(r26)
    li r4, 0x0
    li r3, 0x0
    li r5, 0x0
    rlwinm r0, r6, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80151448_0000177C
    clrlwi r0, r6, 31
    cmplwi r0, 0x1
    beq lbl_fn_80151448_0000177C
    li r5, 0x1
lbl_fn_80151448_0000177C:
    cmpwi r5, 0x0
    beq lbl_fn_80151448_00001798
    lwz r0, 0x7e0(r26)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_80151448_00001798
    li r3, 0x1
lbl_fn_80151448_00001798:
    cmpwi r3, 0x0
    beq lbl_fn_80151448_000017CC
    lwz r0, 0x55c(r26)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_80151448_000017C0
    lwz r0, 0x560(r26)
    cmpwi r0, 0x1c
    bne lbl_fn_80151448_000017C0
    li r3, 0x1
lbl_fn_80151448_000017C0:
    cmpwi r3, 0x0
    bne lbl_fn_80151448_000017CC
    li r4, 0x1
lbl_fn_80151448_000017CC:
    cmpwi r4, 0x0
    bne lbl_fn_80151448_000017DC
    li r0, 0x0
    b lbl_fn_80151448_00001828
lbl_fn_80151448_000017DC:
    lwz r0, 0x7e0(r26)
    rlwinm r0, r0, 0, 25, 25
    cmplwi r0, 0x40
    bne lbl_fn_80151448_00001800
    lwz r0, 0xf94(r26)
    cmpwi r0, 0x0
    bne lbl_fn_80151448_00001800
    li r0, 0x0
    b lbl_fn_80151448_00001828
lbl_fn_80151448_00001800:
    lwz r0, 0x55c(r26)
    cmpwi r0, 0x6
    bne lbl_fn_80151448_00001824
    lwz r3, 0x560(r26)
    subi r0, r3, 0x11
    cmplwi r0, 0x2
    bgt lbl_fn_80151448_00001824
    li r0, 0x0
    b lbl_fn_80151448_00001828
lbl_fn_80151448_00001824:
    li r0, 0x1
lbl_fn_80151448_00001828:
    cmpwi r0, 0x0
    bne lbl_fn_80151448_0000183C
    mr r3, r26
    li r4, 0x1
    bl fn_80164DCC
lbl_fn_80151448_0000183C:
    addi r11, r1, 0x1f0
    psq_l f31, 0x1f8(r1), 0, 0
    lfd f31, 0x1f0(r1)
    bl _restgpr_26
    lwz r0, 0x204(r1)
    mtlr r0
    addi r1, r1, 0x200
    blr
}

asm void fn_80152A20(void)
{
    nofralloc
    blr
}

asm void fn_80152A24(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    stw r31, 0xac(r1)
    mr r31, r7
    stw r30, 0xa8(r1)
    mr r30, r3
    stw r29, 0xa4(r1)
    lwz r0, 0x12a4(r3)
    srwi. r0, r0, 31
    beq lbl_fn_80152A24_00001894
    li r3, 0x0
    b lbl_fn_80152A24_00001B30
lbl_fn_80152A24_00001894:
    lwz r8, 0x7e0(r3)
    li r7, 0x1
    rlwinm r6, r8, 0, 12, 12
    subis r0, r6, 0x8
    cmplwi r0, 0x0
    beq lbl_fn_80152A24_000018C0
    rlwinm r6, r8, 0, 7, 7
    subis r0, r6, 0x100
    cmplwi r0, 0x0
    beq lbl_fn_80152A24_000018C0
    li r7, 0x0
lbl_fn_80152A24_000018C0:
    cmpwi r7, 0x0
    beq lbl_fn_80152A24_000018D0
    li r3, 0x0
    b lbl_fn_80152A24_00001B30
lbl_fn_80152A24_000018D0:
    lbz r0, 0x1(r5)
    cmpwi r0, 0x1
    bne lbl_fn_80152A24_00001B2C
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80152A24_00001A00
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 26
    beq lbl_fn_80152A24_00001B2C
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    beq lbl_fn_80152A24_00001B2C
    lwz r0, 0xf58(r3)
    li r29, 0x1
    cmpwi r0, 0x1e
    blt lbl_fn_80152A24_00001924
    lwz r0, 0x7e8(r3)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_80152A24_00001924
    li r29, 0x0
lbl_fn_80152A24_00001924:
    lfs f1, lbl_8088196C
    li r4, 0x79
    lfs f0, lbl_80881964
    stfs f1, 0x20(r1)
    stfs f1, 0x24(r1)
    stfs f0, 0x28(r1)
    lfs f1, 0x538(r3)
    addi r3, r1, 0x68
    bl fn_805F8E70
    addi r4, r1, 0x20
    addi r3, r1, 0x68
    mr r5, r4
    bl fn_805F93C0
    lfs f2, 0x28(r1)
    mr r3, r31
    lfs f1, 0x24(r1)
    addi r4, r1, 0x2c
    lfs f0, 0x20(r1)
    fneg f2, f2
    fneg f1, f1
    fneg f0, f0
    stfs f2, 0x34(r1)
    stfs f0, 0x2c(r1)
    stfs f1, 0x30(r1)
    bl fn_805F9990
    lfs f0, lbl_80881B18
    fcmpo cr0, f1, f0
    ble lbl_fn_80152A24_00001B2C
    cmpwi r29, 0x0
    beq lbl_fn_80152A24_00001B2C
    addi r3, r30, 0x7d4
    li r4, 0x2
    li r5, 0x0
    bl fn_801346C8
    cmpwi r3, 0x0
    bne lbl_fn_80152A24_000019F0
    addi r3, r30, 0x7d4
    li r4, 0x3
    li r5, 0x0
    bl fn_801346C8
    cmpwi r3, 0x0
    bne lbl_fn_80152A24_000019F0
    addi r3, r30, 0x7d4
    li r4, 0x2e
    li r5, 0x0
    bl fn_801346C8
    cmpwi r3, 0x0
    bne lbl_fn_80152A24_000019F0
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    beq lbl_fn_80152A24_000019F8
lbl_fn_80152A24_000019F0:
    li r3, 0x2
    b lbl_fn_80152A24_00001B30
lbl_fn_80152A24_000019F8:
    li r3, 0x1
    b lbl_fn_80152A24_00001B30
lbl_fn_80152A24_00001A00:
    cmpwi r0, 0x3
    bne lbl_fn_80152A24_00001B2C
    lwz r5, lbl_8087F048
    cmpwi r5, 0x0
    beq lbl_fn_80152A24_00001B2C
    lwz r0, 0x12a4(r3)
    li r29, 0x0
    extrwi. r0, r0, 1, 26
    beq lbl_fn_80152A24_00001A44
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    beq lbl_fn_80152A24_00001A44
    lwz r0, 0x7e8(r3)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_80152A24_00001A44
    li r29, 0x1
lbl_fn_80152A24_00001A44:
    mr r3, r5
    mr r6, r4
    mr r5, r30
    li r4, 0x8
    bl fn_8010CD3C
    cmpwi r3, 0x0
    beq lbl_fn_80152A24_00001A64
    li r29, 0x1
lbl_fn_80152A24_00001A64:
    lfs f1, lbl_8088196C
    addi r3, r1, 0x38
    lfs f0, lbl_80881964
    li r4, 0x79
    stfs f1, 0x8(r1)
    stfs f1, 0xc(r1)
    stfs f0, 0x10(r1)
    lfs f1, 0x538(r30)
    bl fn_805F8E70
    addi r4, r1, 0x8
    addi r3, r1, 0x38
    mr r5, r4
    bl fn_805F93C0
    lfs f2, 0x10(r1)
    mr r3, r31
    lfs f1, 0xc(r1)
    addi r4, r1, 0x14
    lfs f0, 0x8(r1)
    fneg f2, f2
    fneg f1, f1
    fneg f0, f0
    stfs f2, 0x1c(r1)
    stfs f0, 0x14(r1)
    stfs f1, 0x18(r1)
    bl fn_805F9990
    lfs f0, lbl_80881B18
    fcmpo cr0, f1, f0
    ble lbl_fn_80152A24_00001B2C
    cmpwi r29, 0x0
    beq lbl_fn_80152A24_00001B2C
    lwz r0, 0x12d0(r30)
    addi r4, r30, 0x12d4
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80152A24_00001B10
lbl_fn_80152A24_00001AF0:
    lwz r3, 0x0(r4)
    lwz r3, 0x4(r3)
    cmpwi r3, 0x1789
    bne lbl_fn_80152A24_00001B08
    bl fn_80219E6C
    b lbl_fn_80152A24_00001B14
lbl_fn_80152A24_00001B08:
    addi r4, r4, 0x14
    bdnz lbl_fn_80152A24_00001AF0
lbl_fn_80152A24_00001B10:
    li r3, 0x0
lbl_fn_80152A24_00001B14:
    cmpwi r3, 0x0
    beq lbl_fn_80152A24_00001B24
    li r3, 0x2
    b lbl_fn_80152A24_00001B30
lbl_fn_80152A24_00001B24:
    li r3, 0x1
    b lbl_fn_80152A24_00001B30
lbl_fn_80152A24_00001B2C:
    li r3, 0x0
lbl_fn_80152A24_00001B30:
    lwz r0, 0xb4(r1)
    lwz r31, 0xac(r1)
    lwz r30, 0xa8(r1)
    lwz r29, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}
