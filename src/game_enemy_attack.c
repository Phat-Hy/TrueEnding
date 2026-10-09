#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_21(void);
extern void _restgpr_24(void);
extern void _savegpr_21(void);
extern void _savegpr_24(void);
extern void fn_80040588(void);
extern void fn_800FDE60(void);
extern void fn_801061BC(void);
extern void fn_8010652C(void);
extern void fn_80107FC8(void);
extern void fn_80108C10(void);
extern void fn_801092C8(void);
extern void fn_8010CCD0(void);
extern void fn_8012476C(void);
extern void fn_8012F440(void);
extern void fn_8015E7A0(void);
extern void fn_80166544(void);
extern void fn_80166A54(void);
extern void fn_80167038(void);
extern void fn_80167640(void);
extern void fn_80168190(void);
extern void fn_801687D8(void);
extern void fn_80168E60(void);
extern void fn_80168EA0(void);
extern void fn_80168F3C(void);
extern void fn_80168F94(void);
extern void fn_8016E484(void);
extern void fn_801789D8(void);
extern void fn_8017AC2C(void);
extern void fn_80219344(void);
extern void fn_8021A8D0(void);
extern void fn_8021A960(void);
extern void fn_80375184(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);

/* External data declarations */
extern u8 lbl_80737348[];
extern u8 lbl_80737350[];

/* Small data declarations */
extern u32 lbl_8087EFA8;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F430;
extern u32 lbl_8087F610;
extern u32 lbl_8087F9E8;
extern u32 lbl_80881900;
extern u32 lbl_80881904;
extern u32 lbl_80881910;
extern u32 lbl_80881914;
extern u32 lbl_80881918;
extern u32 lbl_80881930;
extern u32 lbl_80881934;
extern u32 lbl_80881938;
extern u32 lbl_8088193C;
extern u32 lbl_80881940;
extern u32 lbl_80881944;
extern u32 lbl_80881948;

/* Function declarations */
void fn_8012DD70(void);
void fn_8012DF7C(void);
void fn_8012E244(void);
void fn_8012E534(void);
void fn_8012E540(void);
void fn_8012F034(void);
void fn_8012F188(void);

asm void fn_8012DD70(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r4, 0xc(r3)
    rlwinm r0, r4, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_8012DD70_000001F8
    rlwinm r0, r4, 0, 23, 23
    lfs f0, lbl_80881900
    cmplwi r0, 0x100
    stfs f0, 0x4(r3)
    bne lbl_fn_8012DD70_00000040
    lwz r3, 0x2f0(r3)
    bl fn_80167038
lbl_fn_8012DD70_00000040:
    lwz r0, 0xc(r31)
    rlwinm r3, r0, 0, 15, 15
    subis r0, r3, 0x1
    cmplwi r0, 0x0
    bne lbl_fn_8012DD70_0000005C
    lwz r3, 0x2f0(r31)
    bl fn_80167640
lbl_fn_8012DD70_0000005C:
    lwz r0, 0xc(r31)
    rlwinm r0, r0, 0, 25, 25
    cmplwi r0, 0x40
    bne lbl_fn_8012DD70_00000074
    lwz r3, 0x2f0(r31)
    bl fn_80166544
lbl_fn_8012DD70_00000074:
    li r0, 0x4
    li r4, 0x0
    mr r6, r31
    stw r4, 0xc(r31)
    li r5, 0x0
    li r3, 0x1
    stw r4, 0x10(r31)
    mtctr r0
lbl_fn_8012DD70_00000094:
    slw r0, r3, r5
    cmplw r0, r0
    bne lbl_fn_8012DD70_000000A4
    stw r4, 0x24c(r6)
lbl_fn_8012DD70_000000A4:
    addi r5, r5, 0x1
    slw r0, r3, r5
    cmplw r0, r0
    bne lbl_fn_8012DD70_000000B8
    stw r4, 0x250(r6)
lbl_fn_8012DD70_000000B8:
    addi r5, r5, 0x1
    slw r0, r3, r5
    cmplw r0, r0
    bne lbl_fn_8012DD70_000000CC
    stw r4, 0x254(r6)
lbl_fn_8012DD70_000000CC:
    addi r5, r5, 0x1
    slw r0, r3, r5
    cmplw r0, r0
    bne lbl_fn_8012DD70_000000E0
    stw r4, 0x258(r6)
lbl_fn_8012DD70_000000E0:
    addi r5, r5, 0x1
    slw r0, r3, r5
    cmplw r0, r0
    bne lbl_fn_8012DD70_000000F4
    stw r4, 0x25c(r6)
lbl_fn_8012DD70_000000F4:
    addi r5, r5, 0x1
    slw r0, r3, r5
    cmplw r0, r0
    bne lbl_fn_8012DD70_00000108
    stw r4, 0x260(r6)
lbl_fn_8012DD70_00000108:
    addi r5, r5, 0x1
    slw r0, r3, r5
    cmplw r0, r0
    bne lbl_fn_8012DD70_0000011C
    stw r4, 0x264(r6)
lbl_fn_8012DD70_0000011C:
    addi r5, r5, 0x1
    slw r0, r3, r5
    cmplw r0, r0
    bne lbl_fn_8012DD70_00000130
    stw r4, 0x268(r6)
lbl_fn_8012DD70_00000130:
    addi r6, r6, 0x20
    addi r5, r5, 0x1
    bdnz lbl_fn_8012DD70_00000094
    lwz r4, 0x2f0(r31)
    cmpwi r4, 0x0
    beq lbl_fn_8012DD70_000001B4
    lwz r3, 0xc(r31)
    li r5, 0x0
    lwz r0, 0x10(r31)
    li r6, 0x0
    rlwinm r3, r3, 0, 12, 10
    stw r3, 0xc(r31)
    rlwinm r0, r0, 0, 12, 10
    stw r0, 0x10(r31)
    b lbl_fn_8012DD70_000001A8
lbl_fn_8012DD70_0000016C:
    add r3, r4, r6
    lwz r3, 0x654(r3)
    lwz r3, 0x274(r3)
    lwz r0, 0xf0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8012DD70_000001A0
    lwz r3, 0xc(r31)
    lwz r0, 0x10(r31)
    oris r3, r3, 0x10
    stw r3, 0xc(r31)
    oris r0, r0, 0x10
    stw r0, 0x10(r31)
    b lbl_fn_8012DD70_000001B4
lbl_fn_8012DD70_000001A0:
    addi r6, r6, 0x4
    addi r5, r5, 0x1
lbl_fn_8012DD70_000001A8:
    lwz r0, 0x650(r4)
    cmplw r5, r0
    blt lbl_fn_8012DD70_0000016C
lbl_fn_8012DD70_000001B4:
    lwz r0, 0x300(r31)
    lwz r3, 0xc(r31)
    cmpwi r0, 0x0
    ori r0, r3, 0x20
    stw r0, 0xc(r31)
    bgt lbl_fn_8012DD70_000001E0
    lwz r3, 0x224(r31)
    cmpwi r3, 0x0
    ble lbl_fn_8012DD70_000001E0
    subi r0, r3, 0x1
    stw r0, 0x224(r31)
lbl_fn_8012DD70_000001E0:
    lfs f0, lbl_80881900
    li r0, 0x0
    stfs f0, 0x428(r31)
    stw r0, 0x430(r31)
    stfs f0, 0x434(r31)
    stfs f0, 0x438(r31)
lbl_fn_8012DD70_000001F8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8012DF7C(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_24
    cmpwi r6, 0x0
    lis r0, 0x4330
    stw r0, 0x8(r1)
    mr r24, r3
    mr r25, r4
    mr r26, r5
    stw r0, 0x10(r1)
    li r31, 0x0
    li r30, 0x0
    li r29, 0x0
    li r28, 0x0
    li r27, 0x0
    beq lbl_fn_8012DF7C_00000280
    lbz r0, 0x1(r6)
    lwz r5, 0xac(r6)
    extsb r4, r0
    lwz r27, 0x94(r6)
    subi r4, r4, 0x2
    extrwi r0, r5, 1, 10
    cntlzw r4, r4
    extrwi r30, r5, 1, 23
    srwi r31, r4, 5
    extrwi r29, r5, 1, 22
    xori r28, r0, 0x1
lbl_fn_8012DF7C_00000280:
    lwz r0, 0xc(r3)
    rlwinm r0, r0, 0, 19, 19
    cmplwi r0, 0x1000
    bne lbl_fn_8012DF7C_000002A8
    cmpwi r6, 0x0
    beq lbl_fn_8012DF7C_000003E4
    mr r3, r6
    bl fn_8021A8D0
    cmpwi r3, 0x0
    beq lbl_fn_8012DF7C_000003E4
lbl_fn_8012DF7C_000002A8:
    cmpwi r31, 0x0
    bne lbl_fn_8012DF7C_000002D0
    rlwinm r0, r26, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_8012DF7C_000002D0
    cmpwi r30, 0x0
    beq lbl_fn_8012DF7C_000002D0
    lfs f0, lbl_80881900
    stfs f0, 0x4(r24)
    b lbl_fn_8012DF7C_000002F4
lbl_fn_8012DF7C_000002D0:
    xoris r0, r25, 0x8000
    stw r0, 0xc(r1)
    lis r3, lbl_80737348@ha
    lfs f0, 0x4(r24)
    lfd f2, lbl_80737348@l(r3)
    lfd f1, 0x8(r1)
    fsubs f1, f1, f2
    fsubs f0, f0, f1
    stfs f0, 0x4(r24)
lbl_fn_8012DF7C_000002F4:
    lfs f2, 0x4(r24)
    lfs f0, lbl_80881900
    fcmpo cr0, f2, f0
    ble lbl_fn_8012DF7C_00000308
    b lbl_fn_8012DF7C_0000030C
lbl_fn_8012DF7C_00000308:
    fmr f2, f0
lbl_fn_8012DF7C_0000030C:
    lwz r0, 0x16c(r24)
    lis r3, lbl_80737348@ha
    lfd f1, lbl_80737348@l(r3)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    bge lbl_fn_8012DF7C_0000034C
    lfs f1, 0x4(r24)
    lfs f0, lbl_80881900
    fcmpo cr0, f1, f0
    ble lbl_fn_8012DF7C_00000344
    b lbl_fn_8012DF7C_00000358
lbl_fn_8012DF7C_00000344:
    fmr f1, f0
    b lbl_fn_8012DF7C_00000358
lbl_fn_8012DF7C_0000034C:
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f1
lbl_fn_8012DF7C_00000358:
    lfs f2, 0x8(r24)
    lfs f0, lbl_80881900
    stfs f1, 0x4(r24)
    fcmpo cr0, f2, f0
    ble lbl_fn_8012DF7C_00000370
    b lbl_fn_8012DF7C_00000374
lbl_fn_8012DF7C_00000370:
    fmr f2, f0
lbl_fn_8012DF7C_00000374:
    lwz r0, 0x170(r24)
    lis r3, lbl_80737348@ha
    lfd f1, lbl_80737348@l(r3)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    bge lbl_fn_8012DF7C_000003B4
    lfs f2, 0x8(r24)
    lfs f0, lbl_80881900
    fcmpo cr0, f2, f0
    ble lbl_fn_8012DF7C_000003AC
    b lbl_fn_8012DF7C_000003C0
lbl_fn_8012DF7C_000003AC:
    fmr f2, f0
    b lbl_fn_8012DF7C_000003C0
lbl_fn_8012DF7C_000003B4:
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f2, f0, f1
lbl_fn_8012DF7C_000003C0:
    lfs f1, 0x4(r24)
    lfs f0, lbl_80881900
    stfs f2, 0x8(r24)
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_8012DF7C_000003E4
    mr r3, r24
    bl fn_8012DD70
    b lbl_fn_8012DF7C_000004BC
lbl_fn_8012DF7C_000003E4:
    mr r3, r24
    mr r4, r26
    mr r5, r27
    mr r6, r31
    mr r7, r25
    mr r8, r30
    mr r9, r29
    mr r10, r28
    bl fn_8012F440
    cmpwi r3, 0x0
    mr r25, r3
    beq lbl_fn_8012DF7C_000004BC
    lwz r0, 0x2f0(r24)
    cmpwi r0, 0x0
    beq lbl_fn_8012DF7C_000004BC
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_8012DF7C_000004BC
    bl fn_80375184
    cmpwi r3, 0x0
    beq lbl_fn_8012DF7C_000004BC
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_8012DF7C_000004BC
    cmpwi r25, 0x0
    ble lbl_fn_8012DF7C_00000484
    lwz r5, 0x2f0(r24)
    lwz r0, 0x48(r5)
    cmpwi r0, 0x2
    bne lbl_fn_8012DF7C_00000470
    li r4, 0x8
    li r6, 0x0
    li r7, 0x0
    bl fn_801092C8
    b lbl_fn_8012DF7C_000004BC
lbl_fn_8012DF7C_00000470:
    li r4, 0x9
    li r6, 0x0
    li r7, 0x0
    bl fn_801092C8
    b lbl_fn_8012DF7C_000004BC
lbl_fn_8012DF7C_00000484:
    bge lbl_fn_8012DF7C_000004BC
    lwz r5, 0x2f0(r24)
    lwz r0, 0x48(r5)
    cmpwi r0, 0x2
    bne lbl_fn_8012DF7C_000004AC
    li r4, 0xa
    li r6, 0x0
    li r7, 0x0
    bl fn_801092C8
    b lbl_fn_8012DF7C_000004BC
lbl_fn_8012DF7C_000004AC:
    li r4, 0xb
    li r6, 0x0
    li r7, 0x0
    bl fn_801092C8
lbl_fn_8012DF7C_000004BC:
    addi r11, r1, 0x40
    bl _restgpr_24
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8012E244(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    lis r0, 0x4330
    stw r31, 0x2c(r1)
    mr r31, r4
    stw r30, 0x28(r1)
    mr r30, r3
    stw r29, 0x24(r1)
    lwz r5, 0x2f0(r3)
    stw r0, 0x8(r1)
    cmpwi r5, 0x0
    stw r0, 0x10(r1)
    beq lbl_fn_8012E244_000005CC
    lwz r0, 0x12a4(r5)
    extrwi. r0, r0, 1, 29
    beq lbl_fn_8012E244_000005CC
    lwz r0, 0x98(r4)
    lis r5, lbl_80737348@ha
    lfd f2, lbl_80737348@l(r5)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lwz r6, 0xac(r4)
    lfd f1, 0x8(r1)
    rlwinm r0, r6, 0, 26, 26
    lfs f0, lbl_80881918
    fsubs f1, f1, f2
    cmpwi r0, 0x20
    fdivs f2, f1, f0
    fmr f3, f2
    bne lbl_fn_8012E244_00000554
    lfs f2, lbl_80881900
lbl_fn_8012E244_00000554:
    rlwinm r0, r6, 0, 30, 30
    cmpwi r0, 0x2
    bne lbl_fn_8012E244_00000564
    lfs f3, lbl_80881900
lbl_fn_8012E244_00000564:
    lfs f1, 0xe8(r3)
    lis r5, lbl_80737348@ha
    lfs f0, 0xec(r3)
    fmadds f1, f1, f2, f1
    lfd f4, lbl_80737348@l(r5)
    fmadds f0, f0, f3, f0
    lfs f2, lbl_80881918
    stfs f1, 0xe8(r3)
    lfs f1, 0xf0(r3)
    stfs f0, 0xec(r3)
    lfs f0, 0xf4(r3)
    lwz r0, 0x9c(r4)
    lwz r5, 0x14(r3)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f3, 0x10(r1)
    fsubs f3, f3, f4
    fdivs f2, f3, f2
    fmadds f1, f1, f2, f1
    fmadds f0, f0, f2, f0
    stfs f1, 0xf0(r3)
    stfs f0, 0xf4(r3)
    lwz r0, 0xac(r4)
    or r0, r5, r0
    stw r0, 0x14(r3)
    b lbl_fn_8012E244_000007A8
lbl_fn_8012E244_000005CC:
    lwz r0, 0xa0(r4)
    lis r29, lbl_80737348@ha
    lfd f3, lbl_80737348@l(r29)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfs f0, lbl_80881900
    lfd f1, 0x8(r1)
    fsubs f1, f1, f3
    fcmpo cr0, f1, f0
    bge lbl_fn_8012E244_00000670
    lwz r5, 0x5c(r5)
    lwz r0, 0x9c(r5)
    rlwinm r5, r0, 0, 13, 13
    subis r0, r5, 0x4
    cmplwi r0, 0x0
    bne lbl_fn_8012E244_00000620
    lfs f1, 0x174(r3)
    lfs f0, lbl_80881930
    fsubs f0, f1, f0
    stfs f0, 0x174(r3)
    b lbl_fn_8012E244_00000690
lbl_fn_8012E244_00000620:
    addi r3, r4, 0x74
    mr r4, r30
    li r5, 0x0
    bl fn_80040588
    lfs f0, lbl_80881900
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_8012E244_00000690
    lwz r0, 0xa0(r31)
    lfd f3, lbl_80737348@l(r29)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfs f1, lbl_80881918
    lfd f2, 0x10(r1)
    lfs f0, 0x174(r30)
    fsubs f2, f2, f3
    fdivs f1, f2, f1
    fadds f0, f0, f1
    stfs f0, 0x174(r30)
    b lbl_fn_8012E244_00000690
lbl_fn_8012E244_00000670:
    stw r0, 0xc(r1)
    lfs f1, lbl_80881918
    lfd f2, 0x8(r1)
    lfs f0, 0x174(r3)
    fsubs f2, f2, f3
    fdivs f1, f2, f1
    fadds f0, f0, f1
    stfs f0, 0x174(r3)
lbl_fn_8012E244_00000690:
    lwz r0, 0xa4(r31)
    lis r3, lbl_80737348@ha
    lfd f3, lbl_80737348@l(r3)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfs f2, lbl_80881918
    lfd f1, 0x10(r1)
    lfs f0, 0x178(r30)
    fsubs f1, f1, f3
    fdivs f1, f1, f2
    fadds f0, f0, f1
    stfs f0, 0x178(r30)
    lwz r0, 0x98(r31)
    lwz r3, 0xac(r31)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    rlwinm r0, r3, 0, 26, 26
    lfd f0, 0x8(r1)
    cmpwi r0, 0x20
    fsubs f0, f0, f3
    fdivs f2, f0, f2
    fmr f3, f2
    bne lbl_fn_8012E244_000006F0
    lfs f2, lbl_80881900
lbl_fn_8012E244_000006F0:
    rlwinm r0, r3, 0, 30, 30
    cmpwi r0, 0x2
    bne lbl_fn_8012E244_00000700
    lfs f3, lbl_80881900
lbl_fn_8012E244_00000700:
    lfs f1, 0xe8(r30)
    lis r4, lbl_80737348@ha
    lfs f0, 0xec(r30)
    mr r3, r31
    fmadds f1, f1, f2, f1
    lfd f4, lbl_80737348@l(r4)
    fmadds f0, f0, f3, f0
    lfs f2, lbl_80881918
    stfs f1, 0xe8(r30)
    li r29, 0x0
    stfs f0, 0xec(r30)
    lfs f1, 0xf0(r30)
    lwz r0, 0x9c(r31)
    lfs f0, 0xf4(r30)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lwz r4, 0x14(r30)
    lfd f3, 0x10(r1)
    fsubs f3, f3, f4
    fdivs f2, f3, f2
    fmadds f1, f1, f2, f1
    fmadds f0, f0, f2, f0
    stfs f1, 0xf0(r30)
    stfs f0, 0xf4(r30)
    lwz r0, 0xac(r31)
    or r0, r4, r0
    stw r0, 0x14(r30)
    bl fn_8021A8D0
    cmpwi r3, 0x0
    beq lbl_fn_8012E244_0000077C
    li r29, 0x1
lbl_fn_8012E244_0000077C:
    lwz r7, 0xac(r31)
    mr r3, r30
    lwz r4, 0x90(r31)
    mr r6, r29
    extrwi r0, r7, 1, 10
    lwz r5, 0x94(r31)
    extrwi r8, r7, 1, 23
    extrwi r9, r7, 1, 22
    xori r10, r0, 0x1
    li r7, 0x0
    bl fn_8012F440
lbl_fn_8012E244_000007A8:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8012E534(void)
{
    nofralloc
    lwz r0, 0xc(r3)
    extrwi r3, r0, 1, 19
    blr
}

asm void fn_8012E540(void)
{
    nofralloc
    stwu r1, -0x140(r1)
    mflr r0
    stw r0, 0x144(r1)
    addi r11, r1, 0x100
    stfd f31, 0x130(r1)
    psq_st f31, 0x138(r1), 0, 0
    stfd f30, 0x120(r1)
    psq_st f30, 0x128(r1), 0, 0
    stfd f29, 0x110(r1)
    psq_st f29, 0x118(r1), 0, 0
    stfd f28, 0x100(r1)
    psq_st f28, 0x108(r1), 0, 0
    bl _savegpr_21
    lwz r0, 0xc(r3)
    lis r4, 0x4330
    stw r4, 0xb8(r1)
    mr r24, r3
    rlwinm r0, r0, 0, 19, 19
    cmplwi r0, 0x1000
    stw r4, 0xc0(r1)
    beq lbl_fn_8012E540_00000A00
    lwz r0, 0xc(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_8012E540_00000A00
    lwz r5, 0x2f0(r3)
    cmpwi r5, 0x0
    beq lbl_fn_8012E540_00000A00
    lwz r0, 0x12a4(r5)
    extrwi. r0, r0, 1, 29
    bne lbl_fn_8012E540_00000A00
    lwz r0, 0x16c(r3)
    lis r4, lbl_80737348@ha
    lfd f29, lbl_80737348@l(r4)
    xoris r0, r0, 0x8000
    stw r0, 0xbc(r1)
    lfs f3, 0x174(r3)
    lfd f0, 0xb8(r1)
    lfs f2, lbl_80881934
    fsubs f4, f0, f29
    lfs f1, 0x4(r3)
    lfs f0, lbl_80881904
    fmuls f3, f4, f3
    fdivs f2, f3, f2
    fadds f1, f1, f2
    stfs f1, 0x4(r3)
    fcmpo cr0, f1, f0
    bge lbl_fn_8012E540_000009D8
    lfs f28, lbl_80881900
    addi r22, r5, 0x12d0
    addi r23, r5, 0x12d4
    li r21, 0x0
    b lbl_fn_8012E540_000008F0
lbl_fn_8012E540_000008A4:
    lwz r3, 0x0(r23)
    bl fn_8021A960
    cmpwi r3, 0x0
    beq lbl_fn_8012E540_000008EC
    lwz r3, 0x0(r23)
    lwz r0, 0xa0(r3)
    xoris r0, r0, 0x8000
    stw r0, 0xc4(r1)
    lfd f0, 0xc0(r1)
    fsubs f0, f0, f29
    fcmpo cr0, f0, f28
    bge lbl_fn_8012E540_000008EC
    lwz r0, 0xac(r3)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x20
    bne lbl_fn_8012E540_000008EC
    lwz r21, 0x10(r23)
    b lbl_fn_8012E540_00000908
lbl_fn_8012E540_000008EC:
    addi r23, r23, 0x14
lbl_fn_8012E540_000008F0:
    lwz r0, 0x0(r22)
    mulli r0, r0, 0x14
    add r3, r22, r0
    addi r0, r3, 0x4
    cmplw r23, r0
    bne lbl_fn_8012E540_000008A4
lbl_fn_8012E540_00000908:
    cmpwi r21, 0x0
    beq lbl_fn_8012E540_000009CC
    lwz r0, lbl_8087F048
    cmpwi r0, 0x0
    beq lbl_fn_8012E540_000009CC
    lwz r3, lbl_8087F610
    li r22, 0x0
    cmpwi r3, 0x0
    beq lbl_fn_8012E540_00000944
    addis r3, r3, 0x1
    lbz r22, -0x6644(r3)
    cmpwi r22, 0x0
    bne lbl_fn_8012E540_00000944
    li r0, 0x1
    stb r0, -0x6644(r3)
lbl_fn_8012E540_00000944:
    lwz r5, 0x2f0(r24)
    addi r3, r1, 0x58
    lfs f1, lbl_80881900
    li r4, 0x79
    lfs f0, lbl_80881904
    stfs f1, 0x14(r1)
    stfs f1, 0x18(r1)
    stfs f0, 0x1c(r1)
    lfs f1, 0x538(r5)
    bl fn_805F8E70
    addi r4, r1, 0x14
    addi r3, r1, 0x58
    mr r5, r4
    bl fn_805F93C0
    lfs f2, 0x1c(r1)
    mr r4, r21
    lfs f1, 0x18(r1)
    addi r6, r1, 0x20
    lfs f0, 0x14(r1)
    fneg f2, f2
    fneg f1, f1
    lwz r3, lbl_8087F048
    fneg f0, f0
    stfs f2, 0x28(r1)
    stfs f0, 0x20(r1)
    stfs f1, 0x24(r1)
    lwz r5, 0x2f0(r24)
    bl fn_800FDE60
    lwz r3, lbl_8087F610
    cmpwi r3, 0x0
    beq lbl_fn_8012E540_00000A00
    addis r3, r3, 0x1
    stb r22, -0x6644(r3)
    b lbl_fn_8012E540_00000A00
lbl_fn_8012E540_000009CC:
    lfs f0, lbl_80881904
    stfs f0, 0x4(r24)
    b lbl_fn_8012E540_00000A00
lbl_fn_8012E540_000009D8:
    stw r0, 0xbc(r1)
    lfd f0, 0xb8(r1)
    fsubs f0, f0, f29
    fcmpo cr0, f1, f0
    bge lbl_fn_8012E540_000009F0
    b lbl_fn_8012E540_000009FC
lbl_fn_8012E540_000009F0:
    stw r0, 0xc4(r1)
    lfd f0, 0xc0(r1)
    fsubs f1, f0, f29
lbl_fn_8012E540_000009FC:
    stfs f1, 0x4(r3)
lbl_fn_8012E540_00000A00:
    lwz r3, 0xc(r24)
    rlwinm r0, r3, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_8012E540_00000BE4
    rlwinm r3, r3, 0, 5, 5
    subis r0, r3, 0x400
    cmplwi r0, 0x0
    beq lbl_fn_8012E540_00000BE4
    lwz r4, 0x2f0(r24)
    cmpwi r4, 0x0
    beq lbl_fn_8012E540_00000B60
    lwz r0, 0x48(r4)
    cmpwi r0, 0x0
    bne lbl_fn_8012E540_00000B60
    lwz r0, 0xd18(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8012E540_00000B98
    lwz r0, 0x55c(r4)
    li r5, 0x1
    cmpwi r0, 0x6
    bne lbl_fn_8012E540_00000A68
    lwz r3, 0x560(r4)
    subi r0, r3, 0xd
    cmplwi r0, 0x1
    bgt lbl_fn_8012E540_00000A68
    li r5, 0x0
lbl_fn_8012E540_00000A68:
    cmpwi r5, 0x0
    beq lbl_fn_8012E540_00000B98
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_8012E540_00000A84
    bl fn_8010CCD0
    b lbl_fn_8012E540_00000A88
lbl_fn_8012E540_00000A84:
    lfs f1, lbl_80881904
lbl_fn_8012E540_00000A88:
    lwz r5, 0x380(r24)
    addi r4, r24, 0x384
    mtctr r5
    cmplwi r5, 0x0
    ble lbl_fn_8012E540_00000AB8
lbl_fn_8012E540_00000A9C:
    lwz r3, 0x0(r4)
    lwz r0, 0x0(r3)
    cmpwi r0, 0x5
    bne lbl_fn_8012E540_00000AB0
    b lbl_fn_8012E540_00000ABC
lbl_fn_8012E540_00000AB0:
    addi r4, r4, 0x14
    bdnz lbl_fn_8012E540_00000A9C
lbl_fn_8012E540_00000AB8:
    li r4, 0x0
lbl_fn_8012E540_00000ABC:
    cmpwi r4, 0x0
    beq lbl_fn_8012E540_00000B24
    addi r4, r24, 0x384
    li r3, 0x0
    mtctr r5
    cmplwi r5, 0x0
    ble lbl_fn_8012E540_00000AF8
lbl_fn_8012E540_00000AD8:
    lwz r5, 0x0(r4)
    lwz r0, 0x0(r5)
    cmpwi r0, 0x5
    bne lbl_fn_8012E540_00000AF0
    lwz r0, 0x4(r5)
    add r3, r3, r0
lbl_fn_8012E540_00000AF0:
    addi r4, r4, 0x14
    bdnz lbl_fn_8012E540_00000AD8
lbl_fn_8012E540_00000AF8:
    xoris r0, r3, 0x8000
    stw r0, 0xbc(r1)
    lis r3, lbl_80737348@ha
    lfs f2, lbl_80881918
    lfd f4, lbl_80737348@l(r3)
    lfd f3, 0xb8(r1)
    lfs f0, lbl_80881904
    fsubs f3, f3, f4
    fdivs f2, f3, f2
    fadds f0, f0, f2
    fmuls f1, f1, f0
lbl_fn_8012E540_00000B24:
    lwz r0, 0x170(r24)
    lis r3, lbl_80737348@ha
    lfd f4, lbl_80737348@l(r3)
    xoris r0, r0, 0x8000
    stw r0, 0xc4(r1)
    lfs f3, 0x178(r24)
    lfd f0, 0xc0(r1)
    lfs f2, lbl_80881934
    fsubs f4, f0, f4
    lfs f0, 0x8(r24)
    fmuls f3, f4, f3
    fdivs f2, f3, f2
    fmadds f0, f1, f2, f0
    stfs f0, 0x8(r24)
    b lbl_fn_8012E540_00000B98
lbl_fn_8012E540_00000B60:
    lwz r0, 0x170(r24)
    lis r3, lbl_80737348@ha
    lfd f3, lbl_80737348@l(r3)
    xoris r0, r0, 0x8000
    stw r0, 0xbc(r1)
    lfs f2, 0x178(r24)
    lfd f0, 0xb8(r1)
    lfs f1, lbl_80881934
    fsubs f3, f0, f3
    lfs f0, 0x8(r24)
    fmuls f2, f3, f2
    fdivs f1, f2, f1
    fadds f0, f0, f1
    stfs f0, 0x8(r24)
lbl_fn_8012E540_00000B98:
    lwz r0, 0x170(r24)
    lis r3, lbl_80737348@ha
    lfd f1, lbl_80737348@l(r3)
    xoris r0, r0, 0x8000
    stw r0, 0xc4(r1)
    lfs f2, 0x8(r24)
    lfd f0, 0xc0(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    ble lbl_fn_8012E540_00000BD0
    stw r0, 0xbc(r1)
    lfd f0, 0xb8(r1)
    fsubs f0, f0, f1
    stfs f0, 0x8(r24)
lbl_fn_8012E540_00000BD0:
    lfs f1, 0x8(r24)
    lfs f0, lbl_80881900
    fcmpo cr0, f1, f0
    bge lbl_fn_8012E540_00000BE4
    stfs f0, 0x8(r24)
lbl_fn_8012E540_00000BE4:
    lis r3, lbl_80737348@ha
    lfs f28, lbl_80881900
    lfs f29, lbl_80881938
    mr r27, r24
    lfs f31, lbl_80881904
    li r25, 0x0
    lfd f30, lbl_80737348@l(r3)
    li r29, 0x0
    li r28, 0x1
    li r31, -0x1
    lis r22, 0x6666
    lis r30, 0xb60b
    li r23, 0x4
lbl_fn_8012E540_00000C18:
    lwz r0, 0xc(r24)
    slw r26, r28, r25
    and r0, r26, r0
    cmplw r26, r0
    bne lbl_fn_8012E540_000010C8
    lwz r3, 0x24c(r27)
    cmpwi r3, 0x0
    ble lbl_fn_8012E540_000010C8
    subi r0, r3, 0x1
    stw r0, 0x24c(r27)
    lwz r3, 0x2f0(r24)
    cmpwi r3, 0x0
    beq lbl_fn_8012E540_00000CA0
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8012E540_00000CA0
    lwz r3, lbl_8087F0A8
    li r4, 0x22
    addi r3, r3, 0x48c
    bl fn_8012476C
    cmpwi r3, 0x0
    beq lbl_fn_8012E540_00000C88
    rlwinm r0, r26, 0, 24, 24
    cmpw r26, r0
    bne lbl_fn_8012E540_00000C88
    lwz r3, 0x24c(r27)
    subi r0, r3, 0x4
    stw r0, 0x24c(r27)
lbl_fn_8012E540_00000C88:
    lwz r3, 0x24c(r27)
    neg r0, r3
    andc r0, r0, r3
    srawi r0, r0, 31
    and r0, r3, r0
    stw r0, 0x24c(r27)
lbl_fn_8012E540_00000CA0:
    lwz r0, 0x24c(r27)
    cmpwi r0, 0x0
    bne lbl_fn_8012E540_00000F8C
    slw r6, r28, r25
    lwz r3, 0xc(r24)
    nor r5, r6, r6
    lwz r0, 0x10(r24)
    and r3, r3, r5
    stw r3, 0xc(r24)
    and r0, r0, r5
    mr r4, r24
    li r3, 0x0
    stw r0, 0x10(r24)
    mtctr r23
lbl_fn_8012E540_00000CD8:
    slw r5, r28, r3
    and r0, r5, r6
    cmplw r5, r0
    bne lbl_fn_8012E540_00000CEC
    stw r29, 0x24c(r4)
lbl_fn_8012E540_00000CEC:
    addi r3, r3, 0x1
    slw r5, r28, r3
    and r0, r5, r6
    cmplw r5, r0
    bne lbl_fn_8012E540_00000D04
    stw r29, 0x250(r4)
lbl_fn_8012E540_00000D04:
    addi r3, r3, 0x1
    slw r5, r28, r3
    and r0, r5, r6
    cmplw r5, r0
    bne lbl_fn_8012E540_00000D1C
    stw r29, 0x254(r4)
lbl_fn_8012E540_00000D1C:
    addi r3, r3, 0x1
    slw r5, r28, r3
    and r0, r5, r6
    cmplw r5, r0
    bne lbl_fn_8012E540_00000D34
    stw r29, 0x258(r4)
lbl_fn_8012E540_00000D34:
    addi r3, r3, 0x1
    slw r5, r28, r3
    and r0, r5, r6
    cmplw r5, r0
    bne lbl_fn_8012E540_00000D4C
    stw r29, 0x25c(r4)
lbl_fn_8012E540_00000D4C:
    addi r3, r3, 0x1
    slw r5, r28, r3
    and r0, r5, r6
    cmplw r5, r0
    bne lbl_fn_8012E540_00000D64
    stw r29, 0x260(r4)
lbl_fn_8012E540_00000D64:
    addi r3, r3, 0x1
    slw r5, r28, r3
    and r0, r5, r6
    cmplw r5, r0
    bne lbl_fn_8012E540_00000D7C
    stw r29, 0x264(r4)
lbl_fn_8012E540_00000D7C:
    addi r3, r3, 0x1
    slw r5, r28, r3
    and r0, r5, r6
    cmplw r5, r0
    bne lbl_fn_8012E540_00000D94
    stw r29, 0x268(r4)
lbl_fn_8012E540_00000D94:
    addi r4, r4, 0x20
    addi r3, r3, 0x1
    bdnz lbl_fn_8012E540_00000CD8
    lwz r4, 0x2f0(r24)
    cmpwi r4, 0x0
    beq lbl_fn_8012E540_00000E18
    lwz r3, 0xc(r24)
    li r5, 0x0
    lwz r0, 0x10(r24)
    li r6, 0x0
    rlwinm r3, r3, 0, 12, 10
    stw r3, 0xc(r24)
    rlwinm r0, r0, 0, 12, 10
    stw r0, 0x10(r24)
    b lbl_fn_8012E540_00000E0C
lbl_fn_8012E540_00000DD0:
    add r3, r4, r6
    lwz r3, 0x654(r3)
    lwz r3, 0x274(r3)
    lwz r0, 0xf0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8012E540_00000E04
    lwz r3, 0xc(r24)
    lwz r0, 0x10(r24)
    oris r3, r3, 0x10
    stw r3, 0xc(r24)
    oris r0, r0, 0x10
    stw r0, 0x10(r24)
    b lbl_fn_8012E540_00000E18
lbl_fn_8012E540_00000E04:
    addi r6, r6, 0x4
    addi r5, r5, 0x1
lbl_fn_8012E540_00000E0C:
    lwz r0, 0x650(r4)
    cmplw r5, r0
    blt lbl_fn_8012E540_00000DD0
lbl_fn_8012E540_00000E18:
    clrlwi r0, r26, 31
    cmpw r26, r0
    bne lbl_fn_8012E540_00000E80
    stfs f28, 0x2c(r1)
    addi r3, r1, 0x88
    li r4, 0x79
    stfs f28, 0x30(r1)
    stfs f29, 0x34(r1)
    lwz r5, 0x2f0(r24)
    lfs f1, 0x538(r5)
    bl fn_805F8E70
    addi r4, r1, 0x2c
    addi r3, r1, 0x88
    mr r5, r4
    bl fn_805F93C0
    lwz r3, 0x2f0(r24)
    lwz r12, 0x0(r3)
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
    lwz r3, 0x2f0(r24)
    addi r4, r1, 0x2c
    li r5, -0x1
    li r6, 0x0
    bl fn_8015E7A0
    b lbl_fn_8012E540_00000F8C
lbl_fn_8012E540_00000E80:
    clrrwi r0, r26, 31
    cmpw r26, r0
    bne lbl_fn_8012E540_00000EA4
    lwz r3, 0x2f0(r24)
    lwz r12, 0x0(r3)
    lwz r12, 0x88(r12)
    mtctr r12
    bctrl
    b lbl_fn_8012E540_00000F8C
lbl_fn_8012E540_00000EA4:
    rlwinm r0, r26, 0, 24, 24
    cmpw r26, r0
    bne lbl_fn_8012E540_00000EBC
    lwz r3, 0x2f0(r24)
    bl fn_80166A54
    b lbl_fn_8012E540_00000F8C
lbl_fn_8012E540_00000EBC:
    rlwinm r0, r26, 0, 9, 9
    cmpw r26, r0
    bne lbl_fn_8012E540_00000ED4
    lwz r3, 0x2f0(r24)
    bl fn_80168190
    b lbl_fn_8012E540_00000F8C
lbl_fn_8012E540_00000ED4:
    rlwinm r0, r26, 0, 30, 30
    cmpw r26, r0
    bne lbl_fn_8012E540_00000EEC
    lwz r3, 0x2f0(r24)
    bl fn_80168EA0
    b lbl_fn_8012E540_00000F8C
lbl_fn_8012E540_00000EEC:
    rlwinm r0, r26, 0, 16, 16
    cmpw r26, r0
    bne lbl_fn_8012E540_00000F04
    lwz r3, 0x2f0(r24)
    bl fn_801687D8
    b lbl_fn_8012E540_00000F8C
lbl_fn_8012E540_00000F04:
    rlwinm r0, r26, 0, 29, 29
    cmpw r26, r0
    bne lbl_fn_8012E540_00000F1C
    lwz r3, 0x2f0(r24)
    bl fn_80168E60
    b lbl_fn_8012E540_00000F8C
lbl_fn_8012E540_00000F1C:
    rlwinm r0, r26, 0, 15, 15
    cmpw r26, r0
    bne lbl_fn_8012E540_00000F34
    lwz r3, 0x2f0(r24)
    bl fn_80167640
    b lbl_fn_8012E540_00000F8C
lbl_fn_8012E540_00000F34:
    rlwinm r0, r26, 0, 12, 12
    cmpw r26, r0
    bne lbl_fn_8012E540_00000F50
    lwz r3, 0x2f0(r24)
    bl fn_80168F3C
    stfs f28, 0x428(r24)
    b lbl_fn_8012E540_00000F8C
lbl_fn_8012E540_00000F50:
    rlwinm r0, r26, 0, 21, 21
    cmpw r26, r0
    bne lbl_fn_8012E540_00000F68
    lwz r3, 0x2f0(r24)
    bl fn_80168F94
    b lbl_fn_8012E540_00000F8C
lbl_fn_8012E540_00000F68:
    rlwinm r0, r26, 0, 6, 6
    cmpw r26, r0
    bne lbl_fn_8012E540_00000F8C
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_8012E540_00000F8C
    lwz r4, 0x2f0(r24)
    addi r4, r4, 0xb0
    bl fn_80107FC8
lbl_fn_8012E540_00000F8C:
    rlwinm r0, r26, 0, 9, 9
    cmpw r26, r0
    bne lbl_fn_8012E540_000010C8
    lwz r4, 0x24c(r27)
    addi r0, r30, 0x60b7
    mulhw r0, r0, r4
    add r0, r0, r4
    srawi r0, r0, 6
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r0, r0, 0x5a
    subf. r0, r0, r4
    bne lbl_fn_8012E540_000010C8
    lwz r4, 0x54(r1)
    addi r0, r22, 0x6667
    stw r29, 0x3c(r1)
    li r3, 0x1
    clrlwi r4, r4, 4
    stw r29, 0x40(r1)
    stw r29, 0x44(r1)
    stw r29, 0x48(r1)
    stw r31, 0x4c(r1)
    stw r4, 0x54(r1)
    stw r31, 0x50(r1)
    stw r28, 0x38(r1)
    lwz r4, 0x16c(r24)
    mulhw r0, r0, r4
    srawi r0, r0, 3
    srwi r4, r0, 31
    add r0, r0, r4
    cmpwi r0, 0x1
    ble lbl_fn_8012E540_00001010
    mr r3, r0
lbl_fn_8012E540_00001010:
    xoris r0, r3, 0x8000
    stw r0, 0xc4(r1)
    lfd f0, 0xc0(r1)
    stw r3, 0x3c(r1)
    fsubs f0, f0, f30
    lfs f1, 0x4(r24)
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_8012E540_00001048
    fsubs f0, f1, f31
    fctiwz f0, f0
    stfd f0, 0xc8(r1)
    lwz r0, 0xcc(r1)
    stw r0, 0x3c(r1)
lbl_fn_8012E540_00001048:
    lwz r0, 0x3c(r1)
    cmpwi r0, 0x0
    ble lbl_fn_8012E540_000010C8
    lwz r21, lbl_8087F048
    cmpwi r21, 0x0
    beq lbl_fn_8012E540_0000109C
    lwz r26, 0x2f0(r24)
    addi r3, r1, 0x8
    lwz r12, 0x0(r26)
    mr r4, r26
    lwz r12, 0xac(r12)
    mtctr r12
    bctrl
    mr r3, r21
    mr r7, r26
    addi r4, r1, 0x38
    addi r5, r1, 0x8
    li r6, 0x0
    li r8, 0x0
    li r9, 0x0
    bl fn_80108C10
lbl_fn_8012E540_0000109C:
    lwz r3, 0x2f0(r24)
    cmpwi r3, 0x0
    beq lbl_fn_8012E540_000010B4
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 29
    bne lbl_fn_8012E540_000010C8
lbl_fn_8012E540_000010B4:
    lwz r4, 0x3c(r1)
    mr r3, r24
    li r5, 0x0
    li r6, 0x0
    bl fn_8012DF7C
lbl_fn_8012E540_000010C8:
    addi r25, r25, 0x1
    addi r27, r27, 0x4
    cmpwi r25, 0x20
    blt lbl_fn_8012E540_00000C18
    lwz r3, lbl_8087F9E8
    cmpwi r3, 0x0
    beq lbl_fn_8012E540_00001148
    lwz r3, 0x38(r3)
    clrlwi r0, r3, 31
    cmplwi r0, 0x1
    beq lbl_fn_8012E540_00001148
    rlwinm r0, r3, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_8012E540_00001148
    lfs f1, 0x2f4(r24)
    lfs f0, lbl_80881900
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi. r0, r0, 1, 1
    beq lbl_fn_8012E540_00001148
    lwz r3, 0x2f0(r24)
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_8012E540_00001134
    lwz r0, 0x560(r3)
    cmpwi r0, 0x84
    beq lbl_fn_8012E540_00001148
lbl_fn_8012E540_00001134:
    lwz r3, lbl_8087EFA8
    lfs f0, 0x2f4(r24)
    lfs f1, 0x3a4(r3)
    fsubs f0, f0, f1
    stfs f0, 0x2f4(r24)
lbl_fn_8012E540_00001148:
    addi r7, r24, 0x384
    lis r4, 0x6666
    b lbl_fn_8012E540_000011E8
lbl_fn_8012E540_00001154:
    lwz r3, 0xc(r7)
    cmpwi r3, 0x0
    bne lbl_fn_8012E540_000011D0
    addi r3, r24, 0x384
    addi r0, r4, 0x6667
    subf r3, r3, r7
    mulhw r0, r0, r3
    srawi r0, r0, 3
    srwi r3, r0, 31
    add r6, r0, r3
    mulli r0, r6, 0x14
    add r5, r24, r0
    b lbl_fn_8012E540_000011B8
lbl_fn_8012E540_00001188:
    lwz r0, 0x398(r5)
    addi r6, r6, 0x1
    stw r0, 0x384(r5)
    lwz r0, 0x39c(r5)
    stw r0, 0x388(r5)
    lwz r0, 0x3a0(r5)
    stw r0, 0x38c(r5)
    lwz r0, 0x3a4(r5)
    stw r0, 0x390(r5)
    lwz r0, 0x3a8(r5)
    stw r0, 0x394(r5)
    addi r5, r5, 0x14
lbl_fn_8012E540_000011B8:
    lwz r3, 0x380(r24)
    subi r0, r3, 0x1
    cmplw r6, r0
    blt lbl_fn_8012E540_00001188
    stw r0, 0x380(r24)
    b lbl_fn_8012E540_000011E8
lbl_fn_8012E540_000011D0:
    ble lbl_fn_8012E540_000011E4
    subi r0, r3, 0x1
    stw r0, 0xc(r7)
    addi r7, r7, 0x14
    b lbl_fn_8012E540_000011E8
lbl_fn_8012E540_000011E4:
    addi r7, r7, 0x14
lbl_fn_8012E540_000011E8:
    lwz r0, 0x380(r24)
    mulli r0, r0, 0x14
    add r3, r24, r0
    addi r0, r3, 0x384
    cmplw r7, r0
    bne lbl_fn_8012E540_00001154
    lwz r0, 0xc(r24)
    rlwinm r0, r0, 0, 20, 20
    cmplwi r0, 0x800
    bne lbl_fn_8012E540_00001228
    lwz r3, lbl_8087EFA8
    lfs f0, 0x434(r24)
    lfs f1, 0x3a4(r3)
    fadds f0, f0, f1
    stfs f0, 0x434(r24)
    b lbl_fn_8012E540_0000125C
lbl_fn_8012E540_00001228:
    lwz r0, 0x430(r24)
    cmpwi r0, 0x0
    ble lbl_fn_8012E540_0000125C
    lwz r3, lbl_8087EFA8
    lfs f1, 0x438(r24)
    lfs f2, 0x3a4(r3)
    lfs f0, lbl_80881900
    fsubs f1, f1, f2
    stfs f1, 0x438(r24)
    fcmpo cr0, f1, f0
    bge lbl_fn_8012E540_0000125C
    li r0, 0x0
    stw r0, 0x430(r24)
lbl_fn_8012E540_0000125C:
    lfs f2, lbl_80881914
    lfs f1, 0x4(r24)
    lfs f0, 0x244(r24)
    fmuls f2, f2, f1
    fsubs f0, f1, f0
    fcmpo cr0, f2, f0
    bge lbl_fn_8012E540_0000127C
    b lbl_fn_8012E540_00001280
lbl_fn_8012E540_0000127C:
    fmr f2, f0
lbl_fn_8012E540_00001280:
    lfs f0, 0x244(r24)
    fadds f0, f0, f2
    stfs f0, 0x244(r24)
    psq_l f31, 0x138(r1), 0, 0
    lfd f31, 0x130(r1)
    psq_l f30, 0x128(r1), 0, 0
    lfd f30, 0x120(r1)
    psq_l f29, 0x118(r1), 0, 0
    lfd f29, 0x110(r1)
    psq_l f28, 0x108(r1), 0, 0
    lfd f28, 0x100(r1)
    addi r11, r1, 0x100
    bl _restgpr_21
    lwz r0, 0x144(r1)
    mtlr r0
    addi r1, r1, 0x140
    blr
}

asm void fn_8012F034(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    fmr f31, f1
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r3, 0x2f0(r3)
    bl fn_8016E484
    cmpwi r3, 0x0
    beq lbl_fn_8012F034_0000130C
    lwz r3, 0x2f0(r31)
    li r4, 0x5
    bl fn_80219344
    cmpwi r3, 0x0
    bne lbl_fn_8012F034_00001318
    b lbl_fn_8012F034_000013FC
lbl_fn_8012F034_0000130C:
    lwz r0, 0x2e8(r31)
    cmpwi r0, 0x0
    ble lbl_fn_8012F034_000013FC
lbl_fn_8012F034_00001318:
    lfs f0, 0x2fc(r31)
    addi r4, r31, 0x384
    lwz r0, 0x380(r31)
    li r3, 0x0
    fmuls f31, f31, f0
    lfs f3, 0x228(r31)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8012F034_0000135C
lbl_fn_8012F034_0000133C:
    lwz r5, 0x0(r4)
    lwz r0, 0x0(r5)
    cmpwi r0, 0x35
    bne lbl_fn_8012F034_00001354
    lwz r0, 0x4(r5)
    add r3, r3, r0
lbl_fn_8012F034_00001354:
    addi r4, r4, 0x14
    bdnz lbl_fn_8012F034_0000133C
lbl_fn_8012F034_0000135C:
    xoris r3, r3, 0x8000
    lis r0, 0x4330
    stw r3, 0xc(r1)
    lis r4, lbl_80737348@ha
    lfd f2, lbl_80737348@l(r4)
    stw r0, 0x8(r1)
    lwz r3, 0x2f0(r31)
    lfd f0, 0x8(r1)
    lfs f1, lbl_80881918
    cmpwi r3, 0x0
    fsubs f2, f0, f2
    lfs f0, lbl_80881904
    fdivs f1, f2, f1
    fadds f0, f0, f1
    fmuls f31, f31, f0
    beq lbl_fn_8012F034_000013D0
    lwz r0, 0x50(r3)
    cmpwi r0, 0x1
    bne lbl_fn_8012F034_000013D0
    lwz r3, 0x1fc(r31)
    li r0, 0x4
    cmplwi r3, 0x4
    bgt lbl_fn_8012F034_000013BC
    mr r0, r3
lbl_fn_8012F034_000013BC:
    lis r3, lbl_80737350@ha
    slwi r0, r0, 2
    addi r3, r3, lbl_80737350@l
    lfsx f0, r3, r0
    fmuls f31, f31, f0
lbl_fn_8012F034_000013D0:
    lfs f1, 0x228(r31)
    lfs f0, lbl_80881904
    fadds f1, f1, f31
    fcmpo cr0, f3, f0
    stfs f1, 0x228(r31)
    bge lbl_fn_8012F034_000013FC
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_8012F034_000013FC
    lwz r3, 0x2f0(r31)
    bl fn_8017AC2C
lbl_fn_8012F034_000013FC:
    lwz r0, 0x34(r1)
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8012F188(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    stfd f30, 0x30(r1)
    psq_st f30, 0x38(r1), 0, 0
    stfd f29, 0x20(r1)
    psq_st f29, 0x28(r1), 0, 0
    fmr f29, f1
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    lwz r0, lbl_8087F430
    cmpwi r0, 0x0
    beq lbl_fn_8012F188_0000146C
    mr r3, r0
    bl fn_80375184
    cmpwi r3, 0x0
    beq lbl_fn_8012F188_00001634
lbl_fn_8012F188_0000146C:
    lwz r3, 0x2f0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8012F188_00001634
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 3
    bne lbl_fn_8012F188_00001488
    b lbl_fn_8012F188_00001634
lbl_fn_8012F188_00001488:
    lwz r5, 0x1f0(r31)
    rlwinm r4, r5, 0, 2, 2
    subis r0, r4, 0x2000
    cmplwi r0, 0x0
    bne lbl_fn_8012F188_00001634
    clrrwi r4, r5, 31
    lfs f31, lbl_8088193C
    addis r0, r4, 0x8000
    cmplwi r0, 0x0
    beq lbl_fn_8012F188_000014C8
    rlwinm r4, r5, 0, 1, 1
    lfs f31, lbl_80881940
    subis r0, r4, 0x4000
    cmplwi r0, 0x0
    beq lbl_fn_8012F188_000014C8
    lfs f31, lbl_80881944
lbl_fn_8012F188_000014C8:
    lwz r4, 0x2f0(r31)
    cmpwi r4, 0x0
    beq lbl_fn_8012F188_000014E0
    lwz r0, 0x12a4(r4)
    extrwi. r0, r0, 1, 3
    bne lbl_fn_8012F188_000014E8
lbl_fn_8012F188_000014E0:
    li r30, 0x0
    b lbl_fn_8012F188_0000152C
lbl_fn_8012F188_000014E8:
    lfs f1, 0x42c(r31)
    lfs f0, lbl_80881900
    fcmpo cr0, f1, f0
    bge lbl_fn_8012F188_00001500
    li r30, 0x0
    b lbl_fn_8012F188_0000152C
lbl_fn_8012F188_00001500:
    lfs f0, lbl_80881944
    fcmpo cr0, f1, f0
    bge lbl_fn_8012F188_00001514
    li r30, 0x1
    b lbl_fn_8012F188_0000152C
lbl_fn_8012F188_00001514:
    lfs f0, lbl_80881940
    fcmpo cr0, f1, f0
    bge lbl_fn_8012F188_00001528
    li r30, 0x2
    b lbl_fn_8012F188_0000152C
lbl_fn_8012F188_00001528:
    li r30, 0x3
lbl_fn_8012F188_0000152C:
    lfs f30, lbl_80881904
    li r4, 0x0
    li r5, 0x2000
    bl fn_801789D8
    cmpwi r3, 0x0
    beq lbl_fn_8012F188_0000154C
    lfs f0, lbl_80881948
    fmuls f30, f30, f0
lbl_fn_8012F188_0000154C:
    lfs f1, 0x42c(r31)
    lfs f0, lbl_80881900
    fmadds f1, f29, f30, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_8012F188_00001564
    b lbl_fn_8012F188_00001568
lbl_fn_8012F188_00001564:
    fmr f1, f0
lbl_fn_8012F188_00001568:
    lfs f0, lbl_80881910
    fsubs f2, f31, f0
    fcmpo cr0, f1, f2
    bge lbl_fn_8012F188_00001594
    lfs f1, 0x42c(r31)
    lfs f0, lbl_80881900
    fmadds f2, f29, f30, f1
    fcmpo cr0, f2, f0
    ble lbl_fn_8012F188_00001590
    b lbl_fn_8012F188_00001594
lbl_fn_8012F188_00001590:
    fmr f2, f0
lbl_fn_8012F188_00001594:
    lwz r3, 0x2f0(r31)
    stfs f2, 0x42c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8012F188_000015B0
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 3
    bne lbl_fn_8012F188_000015B8
lbl_fn_8012F188_000015B0:
    li r29, 0x0
    b lbl_fn_8012F188_000015FC
lbl_fn_8012F188_000015B8:
    frsp f1, f2
    lfs f0, lbl_80881900
    fcmpo cr0, f1, f0
    bge lbl_fn_8012F188_000015D0
    li r29, 0x0
    b lbl_fn_8012F188_000015FC
lbl_fn_8012F188_000015D0:
    lfs f0, lbl_80881944
    fcmpo cr0, f1, f0
    bge lbl_fn_8012F188_000015E4
    li r29, 0x1
    b lbl_fn_8012F188_000015FC
lbl_fn_8012F188_000015E4:
    lfs f0, lbl_80881940
    fcmpo cr0, f1, f0
    bge lbl_fn_8012F188_000015F8
    li r29, 0x2
    b lbl_fn_8012F188_000015FC
lbl_fn_8012F188_000015F8:
    li r29, 0x3
lbl_fn_8012F188_000015FC:
    cmpw r30, r29
    bge lbl_fn_8012F188_00001634
    cmpwi r29, 0x1
    ble lbl_fn_8012F188_00001634
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_8012F188_00001634
    lwz r4, 0x2f0(r31)
    bl fn_8010652C
    lwz r4, 0x2f0(r31)
    subi r6, r29, 0x1
    lwz r3, lbl_8087F048
    addi r5, r4, 0xb0
    bl fn_801061BC
lbl_fn_8012F188_00001634:
    lwz r0, 0x54(r1)
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    psq_l f30, 0x38(r1), 0, 0
    lfd f30, 0x30(r1)
    psq_l f29, 0x28(r1), 0, 0
    lfd f29, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}
