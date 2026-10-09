#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void fn_80017064(void);
extern void fn_80044E0C(void);
extern void fn_8004ED34(void);
extern void fn_80084320(void);
extern void fn_80097D40(void);
extern void fn_801059F8(void);
extern void fn_80105B3C(void);
extern void fn_8011BEB8(void);
extern void fn_8011C044(void);
extern void fn_801255C8(void);
extern void fn_80127EF4(void);
extern void fn_80128A30(void);
extern void fn_80128B20(void);
extern void fn_8014C228(void);
extern void fn_8014DEE4(void);
extern void fn_8016E970(void);
extern void fn_801B192C(void);
extern void fn_801C0D80(void);
extern void fn_8036DBC0(void);
extern void fn_80370174(void);
extern void fn_803AB37C(void);
extern void fn_803CC198(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_805F9990(void);
extern void fn_80695AD0(void);

/* External data declarations */
extern u8 lbl_80737A9C[];
extern u8 lbl_80766768[];
extern u8 lbl_8077A720[];
extern u8 lbl_8077C184[];
extern u8 lbl_8077C190[];
extern u8 lbl_8077C19C[];
extern u8 lbl_8077C1A8[];
extern u8 lbl_8077C1B4[];
extern u8 lbl_8077C1C0[];

/* Small data declarations */
extern u32 lbl_8087EE68;
extern u32 lbl_8087EE98;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F430;
extern u32 lbl_8087F610;
extern u32 lbl_80881964;
extern u32 lbl_8088196C;
extern u32 lbl_80881978;
extern u32 lbl_80881980;
extern u32 lbl_80881994;
extern u32 lbl_808819A8;
extern u32 lbl_808819C0;
extern u32 lbl_808819DC;
extern u32 lbl_808819F8;
extern u32 lbl_808819FC;
extern u32 lbl_80881B30;
extern u32 lbl_80881B34;

/* Function declarations */
void fn_80170F20(void);
void fn_80171420(void);
void fn_801718F8(void);
void fn_80171DB0(void);
void fn_80171F3C(void);
void fn_801720AC(void);
void fn_801725EC(void);

asm void fn_80170F20(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    mr r6, r5
    stw r0, 0x74(r1)
    stfd f31, 0x60(r1)
    psq_st f31, 0x68(r1), 0, 0
    fmr f31, f2
    stw r31, 0x5c(r1)
    mr r31, r3
    addi r3, r3, 0x1030
    stw r30, 0x58(r1)
    addi r5, r31, 0x528
    bl fn_80128A30
    lfs f0, lbl_80881964
    fcmpo cr0, f31, f0
    cror eq, gt, eq
    bne lbl_fn_80170F20_00000048
    stfs f31, 0x1058(r31)
lbl_fn_80170F20_00000048:
    addi r3, r31, 0x1030
    bl fn_801255C8
    cmpwi r3, 0x0
    beq lbl_fn_80170F20_000004E0
    addi r3, r31, 0xc58
    li r4, 0x0
    bl fn_8011BEB8
    lwz r0, 0x12a4(r31)
    srwi. r0, r0, 31
    beq lbl_fn_80170F20_000001AC
    lwz r0, 0x12a4(r31)
    clrlwi r0, r0, 2
    stw r0, 0x12a4(r31)
    lwz r3, lbl_8087F430
    lwz r4, 0x10d8(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80170F20_000000D4
    lwz r3, 0xc38(r31)
    cmpwi r3, 0x0
    ble lbl_fn_80170F20_000000D4
    lwz r0, 0xc3c(r31)
    cmpwi r0, 0x0
    ble lbl_fn_80170F20_000000D4
    subi r0, r3, 0x1
    lwz r3, 0xb0(r4)
    slwi r0, r0, 6
    li r5, 0x0
    add r3, r3, r0
    stw r5, 0x3c(r3)
    lwz r3, 0xc3c(r31)
    lwz r4, 0xb0(r4)
    subi r0, r3, 0x1
    slwi r0, r0, 6
    add r3, r4, r0
    stw r5, 0x3c(r3)
lbl_fn_80170F20_000000D4:
    lwz r4, 0x48(r31)
    cmpwi r4, 0x0
    bne lbl_fn_80170F20_00000108
    lwz r3, lbl_8087F0A8
    lwz r0, 0x278(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80170F20_00000108
    lwz r3, 0x5c(r31)
    lwz r0, 0x11c(r3)
    cmpwi r0, 0x1
    bne lbl_fn_80170F20_00000108
    li r0, 0x1
    b lbl_fn_80170F20_00000128
lbl_fn_80170F20_00000108:
    cmpwi r4, 0x0
    bne lbl_fn_80170F20_00000124
    lwz r0, 0x12a8(r31)
    extrwi. r0, r0, 1, 14
    beq lbl_fn_80170F20_00000124
    li r0, 0x1
    b lbl_fn_80170F20_00000128
lbl_fn_80170F20_00000124:
    li r0, 0x0
lbl_fn_80170F20_00000128:
    cmpwi r0, 0x0
    beq lbl_fn_80170F20_000001AC
    lwz r3, lbl_8087F430
    li r4, 0x25
    bl fn_80370174
    cmpwi r3, 0x1
    blt lbl_fn_80170F20_0000018C
    lwz r3, 0x648(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80170F20_00000158
    li r4, 0x1
    bl fn_80044E0C
lbl_fn_80170F20_00000158:
    lwz r3, 0x64c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80170F20_0000016C
    li r4, 0x1
    bl fn_80044E0C
lbl_fn_80170F20_0000016C:
    li r0, 0x0
    li r3, -0x1
    stw r3, 0x674(r31)
    mr r3, r31
    stw r0, 0x648(r31)
    stw r0, 0x64c(r31)
    bl fn_8014C228
    b lbl_fn_80170F20_000001AC
lbl_fn_80170F20_0000018C:
    lwz r0, 0x674(r31)
    cmpwi r0, 0x0
    blt lbl_fn_80170F20_000001AC
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8014DEE4
lbl_fn_80170F20_000001AC:
    lwz r0, 0x12a4(r31)
    extrwi. r0, r0, 1, 26
    beq lbl_fn_80170F20_000001C4
    lwz r0, 0x12a4(r31)
    rlwinm r0, r0, 0, 27, 25
    stw r0, 0x12a4(r31)
lbl_fn_80170F20_000001C4:
    lwz r7, 0xd1c(r31)
    cmpwi r7, 0x0
    beq lbl_fn_80170F20_0000026C
    lwz r0, 0x12a8(r7)
    mr r5, r7
    lwz r6, 0x1028(r7)
    li r4, 0x0
    extrwi r0, r0, 1, 15
    cntlzw r0, r0
    srwi r3, r0, 5
    b lbl_fn_80170F20_0000020C
lbl_fn_80170F20_000001F0:
    lwz r0, 0xfe8(r5)
    cmplw r0, r31
    bne lbl_fn_80170F20_00000204
    li r0, 0x1
    b lbl_fn_80170F20_00000228
lbl_fn_80170F20_00000204:
    addi r5, r5, 0x4
    addi r4, r4, 0x1
lbl_fn_80170F20_0000020C:
    cmpwi r3, 0x0
    mr r0, r6
    bne lbl_fn_80170F20_0000021C
    slwi r0, r6, 1
lbl_fn_80170F20_0000021C:
    cmpw r4, r0
    blt lbl_fn_80170F20_000001F0
    li r0, 0x0
lbl_fn_80170F20_00000228:
    cmpwi r0, 0x0
    beq lbl_fn_80170F20_0000026C
    li r0, 0x10
    mr r4, r7
    li r3, 0x0
    mtctr r0
lbl_fn_80170F20_00000240:
    lwz r0, 0xfe8(r4)
    cmplw r0, r31
    bne lbl_fn_80170F20_00000260
    slwi r0, r3, 2
    li r4, 0x0
    add r3, r7, r0
    stw r4, 0xfe8(r3)
    b lbl_fn_80170F20_0000026C
lbl_fn_80170F20_00000260:
    addi r4, r4, 0x4
    addi r3, r3, 0x1
    bdnz lbl_fn_80170F20_00000240
lbl_fn_80170F20_0000026C:
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_80170F20_0000028C
    mr r4, r31
    bl fn_801059F8
    lwz r3, lbl_8087F048
    mr r4, r31
    bl fn_80105B3C
lbl_fn_80170F20_0000028C:
    lwz r0, 0x12a8(r31)
    addi r3, r31, 0xc58
    lfs f0, lbl_8088196C
    li r4, 0x0
    rlwinm r0, r0, 0, 24, 22
    stw r0, 0x12a8(r31)
    stfs f0, 0xfb8(r31)
    stfs f0, 0xfbc(r31)
    bl fn_8011C044
    lwz r3, lbl_8087EE68
    mr r4, r31
    bl fn_80017064
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x7
    beq lbl_fn_80170F20_00000478
    cmpwi r0, 0x6
    beq lbl_fn_80170F20_000002DC
    cmpwi r0, 0x8
    beq lbl_fn_80170F20_000002DC
    stw r0, 0x564(r31)
lbl_fn_80170F20_000002DC:
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x6
    bne lbl_fn_80170F20_00000478
    lwz r0, 0xf80(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80170F20_00000314
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x40(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x44(r1)
    stw r0, 0x48(r1)
    b lbl_fn_80170F20_00000330
lbl_fn_80170F20_00000314:
    lis r5, lbl_8077C184@ha
    lwzu r4, lbl_8077C184@l(r5)
    stw r4, 0x40(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x44(r1)
    stw r0, 0x48(r1)
lbl_fn_80170F20_00000330:
    lwz r5, 0x40(r1)
    addi r3, r1, 0x14
    lwz r4, 0x44(r1)
    lwz r0, 0x48(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80170F20_0000036C
    lwz r3, 0xf80(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80170F20_0000036C:
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x6
    beq lbl_fn_80170F20_00000448
    cmpwi r0, 0x8
    beq lbl_fn_80170F20_00000384
    stw r0, 0x564(r31)
lbl_fn_80170F20_00000384:
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x6
    bne lbl_fn_80170F20_00000448
    lwz r0, 0xf80(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80170F20_000003BC
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x4c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x50(r1)
    stw r0, 0x54(r1)
    b lbl_fn_80170F20_000003D8
lbl_fn_80170F20_000003BC:
    lis r5, lbl_8077C190@ha
    lwzu r4, lbl_8077C190@l(r5)
    stw r4, 0x4c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x50(r1)
    stw r0, 0x54(r1)
lbl_fn_80170F20_000003D8:
    lwz r5, 0x4c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x50(r1)
    lwz r0, 0x54(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80170F20_00000414
    lwz r3, 0xf80(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80170F20_00000414:
    mr r3, r31
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r31)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r31)
    beq lbl_fn_80170F20_00000448
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80170F20_00000448:
    lwz r3, 0xf80(r31)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r31)
    cmpwi r3, 0x0
    stw r0, 0xf80(r31)
    beq lbl_fn_80170F20_00000478
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80170F20_00000478:
    lwz r3, 0x1208(r31)
    li r0, 0x7
    stw r0, 0x55c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80170F20_000004E0
    beq lbl_fn_80170F20_000004E0
    lfs f0, lbl_8088196C
    li r30, 0x0
    li r0, 0x3
    stw r30, 0x24(r1)
    addi r4, r1, 0x20
    stw r30, 0x28(r1)
    stw r30, 0x2c(r1)
    stfs f0, 0x34(r1)
    stfs f0, 0x38(r1)
    stfs f0, 0x3c(r1)
    stw r0, 0x20(r1)
    stw r31, 0x30(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r3, 0x1208(r31)
    li r0, 0xff
    stb r0, 0x520(r3)
    stw r30, 0x1208(r31)
lbl_fn_80170F20_000004E0:
    lwz r0, 0x74(r1)
    psq_l f31, 0x68(r1), 0, 0
    lfd f31, 0x60(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_80171420(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    mr r6, r5
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    mr r31, r3
    addi r3, r3, 0x1030
    stw r30, 0x58(r1)
    addi r5, r31, 0x528
    bl fn_80128B20
    addi r3, r31, 0x1030
    bl fn_801255C8
    cmpwi r3, 0x0
    beq lbl_fn_80171420_000009C0
    addi r3, r31, 0xc58
    li r4, 0x0
    bl fn_8011BEB8
    lwz r0, 0x12a4(r31)
    srwi. r0, r0, 31
    beq lbl_fn_80171420_0000068C
    lwz r0, 0x12a4(r31)
    clrlwi r0, r0, 2
    stw r0, 0x12a4(r31)
    lwz r3, lbl_8087F430
    lwz r4, 0x10d8(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80171420_000005B4
    lwz r3, 0xc38(r31)
    cmpwi r3, 0x0
    ble lbl_fn_80171420_000005B4
    lwz r0, 0xc3c(r31)
    cmpwi r0, 0x0
    ble lbl_fn_80171420_000005B4
    subi r0, r3, 0x1
    lwz r3, 0xb0(r4)
    slwi r0, r0, 6
    li r5, 0x0
    add r3, r3, r0
    stw r5, 0x3c(r3)
    lwz r3, 0xc3c(r31)
    lwz r4, 0xb0(r4)
    subi r0, r3, 0x1
    slwi r0, r0, 6
    add r3, r4, r0
    stw r5, 0x3c(r3)
lbl_fn_80171420_000005B4:
    lwz r4, 0x48(r31)
    cmpwi r4, 0x0
    bne lbl_fn_80171420_000005E8
    lwz r3, lbl_8087F0A8
    lwz r0, 0x278(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80171420_000005E8
    lwz r3, 0x5c(r31)
    lwz r0, 0x11c(r3)
    cmpwi r0, 0x1
    bne lbl_fn_80171420_000005E8
    li r0, 0x1
    b lbl_fn_80171420_00000608
lbl_fn_80171420_000005E8:
    cmpwi r4, 0x0
    bne lbl_fn_80171420_00000604
    lwz r0, 0x12a8(r31)
    extrwi. r0, r0, 1, 14
    beq lbl_fn_80171420_00000604
    li r0, 0x1
    b lbl_fn_80171420_00000608
lbl_fn_80171420_00000604:
    li r0, 0x0
lbl_fn_80171420_00000608:
    cmpwi r0, 0x0
    beq lbl_fn_80171420_0000068C
    lwz r3, lbl_8087F430
    li r4, 0x25
    bl fn_80370174
    cmpwi r3, 0x1
    blt lbl_fn_80171420_0000066C
    lwz r3, 0x648(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80171420_00000638
    li r4, 0x1
    bl fn_80044E0C
lbl_fn_80171420_00000638:
    lwz r3, 0x64c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80171420_0000064C
    li r4, 0x1
    bl fn_80044E0C
lbl_fn_80171420_0000064C:
    li r0, 0x0
    li r3, -0x1
    stw r3, 0x674(r31)
    mr r3, r31
    stw r0, 0x648(r31)
    stw r0, 0x64c(r31)
    bl fn_8014C228
    b lbl_fn_80171420_0000068C
lbl_fn_80171420_0000066C:
    lwz r0, 0x674(r31)
    cmpwi r0, 0x0
    blt lbl_fn_80171420_0000068C
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8014DEE4
lbl_fn_80171420_0000068C:
    lwz r0, 0x12a4(r31)
    extrwi. r0, r0, 1, 26
    beq lbl_fn_80171420_000006A4
    lwz r0, 0x12a4(r31)
    rlwinm r0, r0, 0, 27, 25
    stw r0, 0x12a4(r31)
lbl_fn_80171420_000006A4:
    lwz r7, 0xd1c(r31)
    cmpwi r7, 0x0
    beq lbl_fn_80171420_0000074C
    lwz r0, 0x12a8(r7)
    mr r5, r7
    lwz r6, 0x1028(r7)
    li r4, 0x0
    extrwi r0, r0, 1, 15
    cntlzw r0, r0
    srwi r3, r0, 5
    b lbl_fn_80171420_000006EC
lbl_fn_80171420_000006D0:
    lwz r0, 0xfe8(r5)
    cmplw r0, r31
    bne lbl_fn_80171420_000006E4
    li r0, 0x1
    b lbl_fn_80171420_00000708
lbl_fn_80171420_000006E4:
    addi r5, r5, 0x4
    addi r4, r4, 0x1
lbl_fn_80171420_000006EC:
    cmpwi r3, 0x0
    mr r0, r6
    bne lbl_fn_80171420_000006FC
    slwi r0, r6, 1
lbl_fn_80171420_000006FC:
    cmpw r4, r0
    blt lbl_fn_80171420_000006D0
    li r0, 0x0
lbl_fn_80171420_00000708:
    cmpwi r0, 0x0
    beq lbl_fn_80171420_0000074C
    li r0, 0x10
    mr r4, r7
    li r3, 0x0
    mtctr r0
lbl_fn_80171420_00000720:
    lwz r0, 0xfe8(r4)
    cmplw r0, r31
    bne lbl_fn_80171420_00000740
    slwi r0, r3, 2
    li r4, 0x0
    add r3, r7, r0
    stw r4, 0xfe8(r3)
    b lbl_fn_80171420_0000074C
lbl_fn_80171420_00000740:
    addi r4, r4, 0x4
    addi r3, r3, 0x1
    bdnz lbl_fn_80171420_00000720
lbl_fn_80171420_0000074C:
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_80171420_0000076C
    mr r4, r31
    bl fn_801059F8
    lwz r3, lbl_8087F048
    mr r4, r31
    bl fn_80105B3C
lbl_fn_80171420_0000076C:
    lwz r0, 0x12a8(r31)
    addi r3, r31, 0xc58
    lfs f0, lbl_8088196C
    li r4, 0x0
    rlwinm r0, r0, 0, 24, 22
    stw r0, 0x12a8(r31)
    stfs f0, 0xfb8(r31)
    stfs f0, 0xfbc(r31)
    bl fn_8011C044
    lwz r3, lbl_8087EE68
    mr r4, r31
    bl fn_80017064
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x7
    beq lbl_fn_80171420_00000958
    cmpwi r0, 0x6
    beq lbl_fn_80171420_000007BC
    cmpwi r0, 0x8
    beq lbl_fn_80171420_000007BC
    stw r0, 0x564(r31)
lbl_fn_80171420_000007BC:
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x6
    bne lbl_fn_80171420_00000958
    lwz r0, 0xf80(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80171420_000007F4
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x40(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x44(r1)
    stw r0, 0x48(r1)
    b lbl_fn_80171420_00000810
lbl_fn_80171420_000007F4:
    lis r5, lbl_8077C19C@ha
    lwzu r4, lbl_8077C19C@l(r5)
    stw r4, 0x40(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x44(r1)
    stw r0, 0x48(r1)
lbl_fn_80171420_00000810:
    lwz r5, 0x40(r1)
    addi r3, r1, 0x14
    lwz r4, 0x44(r1)
    lwz r0, 0x48(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80171420_0000084C
    lwz r3, 0xf80(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80171420_0000084C:
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x6
    beq lbl_fn_80171420_00000928
    cmpwi r0, 0x8
    beq lbl_fn_80171420_00000864
    stw r0, 0x564(r31)
lbl_fn_80171420_00000864:
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x6
    bne lbl_fn_80171420_00000928
    lwz r0, 0xf80(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80171420_0000089C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x4c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x50(r1)
    stw r0, 0x54(r1)
    b lbl_fn_80171420_000008B8
lbl_fn_80171420_0000089C:
    lis r5, lbl_8077C1A8@ha
    lwzu r4, lbl_8077C1A8@l(r5)
    stw r4, 0x4c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x50(r1)
    stw r0, 0x54(r1)
lbl_fn_80171420_000008B8:
    lwz r5, 0x4c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x50(r1)
    lwz r0, 0x54(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80171420_000008F4
    lwz r3, 0xf80(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80171420_000008F4:
    mr r3, r31
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r31)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r31)
    beq lbl_fn_80171420_00000928
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80171420_00000928:
    lwz r3, 0xf80(r31)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r31)
    cmpwi r3, 0x0
    stw r0, 0xf80(r31)
    beq lbl_fn_80171420_00000958
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80171420_00000958:
    lwz r3, 0x1208(r31)
    li r0, 0x7
    stw r0, 0x55c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80171420_000009C0
    beq lbl_fn_80171420_000009C0
    lfs f0, lbl_8088196C
    li r30, 0x0
    li r0, 0x3
    stw r30, 0x24(r1)
    addi r4, r1, 0x20
    stw r30, 0x28(r1)
    stw r30, 0x2c(r1)
    stfs f0, 0x34(r1)
    stfs f0, 0x38(r1)
    stfs f0, 0x3c(r1)
    stw r0, 0x20(r1)
    stw r31, 0x30(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r3, 0x1208(r31)
    li r0, 0xff
    stb r0, 0x520(r3)
    stw r30, 0x1208(r31)
lbl_fn_80171420_000009C0:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_801718F8(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    mr r31, r3
    addi r3, r3, 0xc58
    stw r30, 0x58(r1)
    bl fn_8011BEB8
    lwz r0, 0x12a4(r31)
    srwi. r0, r0, 31
    beq lbl_fn_801718F8_00000B44
    lwz r0, 0x12a4(r31)
    clrlwi r0, r0, 2
    stw r0, 0x12a4(r31)
    lwz r3, lbl_8087F430
    lwz r4, 0x10d8(r3)
    cmpwi r4, 0x0
    beq lbl_fn_801718F8_00000A6C
    lwz r3, 0xc38(r31)
    cmpwi r3, 0x0
    ble lbl_fn_801718F8_00000A6C
    lwz r0, 0xc3c(r31)
    cmpwi r0, 0x0
    ble lbl_fn_801718F8_00000A6C
    subi r0, r3, 0x1
    lwz r3, 0xb0(r4)
    slwi r0, r0, 6
    li r5, 0x0
    add r3, r3, r0
    stw r5, 0x3c(r3)
    lwz r3, 0xc3c(r31)
    lwz r4, 0xb0(r4)
    subi r0, r3, 0x1
    slwi r0, r0, 6
    add r3, r4, r0
    stw r5, 0x3c(r3)
lbl_fn_801718F8_00000A6C:
    lwz r4, 0x48(r31)
    cmpwi r4, 0x0
    bne lbl_fn_801718F8_00000AA0
    lwz r3, lbl_8087F0A8
    lwz r0, 0x278(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801718F8_00000AA0
    lwz r3, 0x5c(r31)
    lwz r0, 0x11c(r3)
    cmpwi r0, 0x1
    bne lbl_fn_801718F8_00000AA0
    li r0, 0x1
    b lbl_fn_801718F8_00000AC0
lbl_fn_801718F8_00000AA0:
    cmpwi r4, 0x0
    bne lbl_fn_801718F8_00000ABC
    lwz r0, 0x12a8(r31)
    extrwi. r0, r0, 1, 14
    beq lbl_fn_801718F8_00000ABC
    li r0, 0x1
    b lbl_fn_801718F8_00000AC0
lbl_fn_801718F8_00000ABC:
    li r0, 0x0
lbl_fn_801718F8_00000AC0:
    cmpwi r0, 0x0
    beq lbl_fn_801718F8_00000B44
    lwz r3, lbl_8087F430
    li r4, 0x25
    bl fn_80370174
    cmpwi r3, 0x1
    blt lbl_fn_801718F8_00000B24
    lwz r3, 0x648(r31)
    cmpwi r3, 0x0
    beq lbl_fn_801718F8_00000AF0
    li r4, 0x1
    bl fn_80044E0C
lbl_fn_801718F8_00000AF0:
    lwz r3, 0x64c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_801718F8_00000B04
    li r4, 0x1
    bl fn_80044E0C
lbl_fn_801718F8_00000B04:
    li r0, 0x0
    li r3, -0x1
    stw r3, 0x674(r31)
    mr r3, r31
    stw r0, 0x648(r31)
    stw r0, 0x64c(r31)
    bl fn_8014C228
    b lbl_fn_801718F8_00000B44
lbl_fn_801718F8_00000B24:
    lwz r0, 0x674(r31)
    cmpwi r0, 0x0
    blt lbl_fn_801718F8_00000B44
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8014DEE4
lbl_fn_801718F8_00000B44:
    lwz r0, 0x12a4(r31)
    extrwi. r0, r0, 1, 26
    beq lbl_fn_801718F8_00000B5C
    lwz r0, 0x12a4(r31)
    rlwinm r0, r0, 0, 27, 25
    stw r0, 0x12a4(r31)
lbl_fn_801718F8_00000B5C:
    lwz r7, 0xd1c(r31)
    cmpwi r7, 0x0
    beq lbl_fn_801718F8_00000C04
    lwz r0, 0x12a8(r7)
    mr r5, r7
    lwz r6, 0x1028(r7)
    li r4, 0x0
    extrwi r0, r0, 1, 15
    cntlzw r0, r0
    srwi r3, r0, 5
    b lbl_fn_801718F8_00000BA4
lbl_fn_801718F8_00000B88:
    lwz r0, 0xfe8(r5)
    cmplw r0, r31
    bne lbl_fn_801718F8_00000B9C
    li r0, 0x1
    b lbl_fn_801718F8_00000BC0
lbl_fn_801718F8_00000B9C:
    addi r5, r5, 0x4
    addi r4, r4, 0x1
lbl_fn_801718F8_00000BA4:
    cmpwi r3, 0x0
    mr r0, r6
    bne lbl_fn_801718F8_00000BB4
    slwi r0, r6, 1
lbl_fn_801718F8_00000BB4:
    cmpw r4, r0
    blt lbl_fn_801718F8_00000B88
    li r0, 0x0
lbl_fn_801718F8_00000BC0:
    cmpwi r0, 0x0
    beq lbl_fn_801718F8_00000C04
    li r0, 0x10
    mr r4, r7
    li r3, 0x0
    mtctr r0
lbl_fn_801718F8_00000BD8:
    lwz r0, 0xfe8(r4)
    cmplw r0, r31
    bne lbl_fn_801718F8_00000BF8
    slwi r0, r3, 2
    li r4, 0x0
    add r3, r7, r0
    stw r4, 0xfe8(r3)
    b lbl_fn_801718F8_00000C04
lbl_fn_801718F8_00000BF8:
    addi r4, r4, 0x4
    addi r3, r3, 0x1
    bdnz lbl_fn_801718F8_00000BD8
lbl_fn_801718F8_00000C04:
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_801718F8_00000C24
    mr r4, r31
    bl fn_801059F8
    lwz r3, lbl_8087F048
    mr r4, r31
    bl fn_80105B3C
lbl_fn_801718F8_00000C24:
    lwz r0, 0x12a8(r31)
    addi r3, r31, 0xc58
    lfs f0, lbl_8088196C
    li r4, 0x0
    rlwinm r0, r0, 0, 24, 22
    stw r0, 0x12a8(r31)
    stfs f0, 0xfb8(r31)
    stfs f0, 0xfbc(r31)
    bl fn_8011C044
    lwz r3, lbl_8087EE68
    mr r4, r31
    bl fn_80017064
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x7
    beq lbl_fn_801718F8_00000E10
    cmpwi r0, 0x6
    beq lbl_fn_801718F8_00000C74
    cmpwi r0, 0x8
    beq lbl_fn_801718F8_00000C74
    stw r0, 0x564(r31)
lbl_fn_801718F8_00000C74:
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x6
    bne lbl_fn_801718F8_00000E10
    lwz r0, 0xf80(r31)
    cmpwi r0, 0x0
    bne lbl_fn_801718F8_00000CAC
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x40(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x44(r1)
    stw r0, 0x48(r1)
    b lbl_fn_801718F8_00000CC8
lbl_fn_801718F8_00000CAC:
    lis r5, lbl_8077C1B4@ha
    lwzu r4, lbl_8077C1B4@l(r5)
    stw r4, 0x40(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x44(r1)
    stw r0, 0x48(r1)
lbl_fn_801718F8_00000CC8:
    lwz r5, 0x40(r1)
    addi r3, r1, 0x8
    lwz r4, 0x44(r1)
    lwz r0, 0x48(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801718F8_00000D04
    lwz r3, 0xf80(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801718F8_00000D04:
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x6
    beq lbl_fn_801718F8_00000DE0
    cmpwi r0, 0x8
    beq lbl_fn_801718F8_00000D1C
    stw r0, 0x564(r31)
lbl_fn_801718F8_00000D1C:
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x6
    bne lbl_fn_801718F8_00000DE0
    lwz r0, 0xf80(r31)
    cmpwi r0, 0x0
    bne lbl_fn_801718F8_00000D54
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x4c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x50(r1)
    stw r0, 0x54(r1)
    b lbl_fn_801718F8_00000D70
lbl_fn_801718F8_00000D54:
    lis r5, lbl_8077C1C0@ha
    lwzu r4, lbl_8077C1C0@l(r5)
    stw r4, 0x4c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x50(r1)
    stw r0, 0x54(r1)
lbl_fn_801718F8_00000D70:
    lwz r5, 0x4c(r1)
    addi r3, r1, 0x14
    lwz r4, 0x50(r1)
    lwz r0, 0x54(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801718F8_00000DAC
    lwz r3, 0xf80(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801718F8_00000DAC:
    mr r3, r31
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r31)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r31)
    beq lbl_fn_801718F8_00000DE0
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801718F8_00000DE0:
    lwz r3, 0xf80(r31)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r31)
    cmpwi r3, 0x0
    stw r0, 0xf80(r31)
    beq lbl_fn_801718F8_00000E10
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801718F8_00000E10:
    lwz r3, 0x1208(r31)
    li r0, 0x7
    stw r0, 0x55c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_801718F8_00000E78
    beq lbl_fn_801718F8_00000E78
    lfs f0, lbl_8088196C
    li r30, 0x0
    li r0, 0x3
    stw r30, 0x24(r1)
    addi r4, r1, 0x20
    stw r30, 0x28(r1)
    stw r30, 0x2c(r1)
    stfs f0, 0x34(r1)
    stfs f0, 0x38(r1)
    stfs f0, 0x3c(r1)
    stw r0, 0x20(r1)
    stw r31, 0x30(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r3, 0x1208(r31)
    li r0, 0xff
    stb r0, 0x520(r3)
    stw r30, 0x1208(r31)
lbl_fn_801718F8_00000E78:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80171DB0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x105c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80171DB0_00001008
    addi r3, r3, 0x1030
    bl fn_80127EF4
    cmpwi r3, 0x0
    beq lbl_fn_80171DB0_00001008
    addi r3, r31, 0xc58
    li r4, 0x0
    bl fn_8011BEB8
    lwz r0, 0x12a4(r31)
    extrwi. r0, r0, 1, 26
    beq lbl_fn_80171DB0_00000EE4
    lwz r0, 0x12a4(r31)
    rlwinm r0, r0, 0, 27, 25
    stw r0, 0x12a4(r31)
lbl_fn_80171DB0_00000EE4:
    lwz r7, 0xd1c(r31)
    cmpwi r7, 0x0
    beq lbl_fn_80171DB0_00000F8C
    lwz r0, 0x12a8(r7)
    mr r5, r7
    lwz r6, 0x1028(r7)
    li r4, 0x0
    extrwi r0, r0, 1, 15
    cntlzw r0, r0
    srwi r3, r0, 5
    b lbl_fn_80171DB0_00000F2C
lbl_fn_80171DB0_00000F10:
    lwz r0, 0xfe8(r5)
    cmplw r0, r31
    bne lbl_fn_80171DB0_00000F24
    li r0, 0x1
    b lbl_fn_80171DB0_00000F48
lbl_fn_80171DB0_00000F24:
    addi r5, r5, 0x4
    addi r4, r4, 0x1
lbl_fn_80171DB0_00000F2C:
    cmpwi r3, 0x0
    mr r0, r6
    bne lbl_fn_80171DB0_00000F3C
    slwi r0, r6, 1
lbl_fn_80171DB0_00000F3C:
    cmpw r4, r0
    blt lbl_fn_80171DB0_00000F10
    li r0, 0x0
lbl_fn_80171DB0_00000F48:
    cmpwi r0, 0x0
    beq lbl_fn_80171DB0_00000F8C
    li r0, 0x10
    mr r4, r7
    li r3, 0x0
    mtctr r0
lbl_fn_80171DB0_00000F60:
    lwz r0, 0xfe8(r4)
    cmplw r0, r31
    bne lbl_fn_80171DB0_00000F80
    slwi r0, r3, 2
    li r4, 0x0
    add r3, r7, r0
    stw r4, 0xfe8(r3)
    b lbl_fn_80171DB0_00000F8C
lbl_fn_80171DB0_00000F80:
    addi r4, r4, 0x4
    addi r3, r3, 0x1
    bdnz lbl_fn_80171DB0_00000F60
lbl_fn_80171DB0_00000F8C:
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_80171DB0_00000FAC
    mr r4, r31
    bl fn_801059F8
    lwz r3, lbl_8087F048
    mr r4, r31
    bl fn_80105B3C
lbl_fn_80171DB0_00000FAC:
    lwz r0, 0x12a8(r31)
    addi r3, r31, 0xc58
    lfs f0, lbl_8088196C
    li r4, 0x0
    rlwinm r0, r0, 0, 24, 22
    stw r0, 0x12a8(r31)
    stfs f0, 0xfb8(r31)
    stfs f0, 0xfbc(r31)
    bl fn_8011C044
    lwz r3, lbl_8087EE68
    mr r4, r31
    bl fn_80017064
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80171DB0_00000FF0
    lwz r3, 0x10d8(r3)
    b lbl_fn_80171DB0_00000FF4
lbl_fn_80171DB0_00000FF0:
    li r3, 0x0
lbl_fn_80171DB0_00000FF4:
    cmpwi r3, 0x0
    beq lbl_fn_80171DB0_00001008
    lwz r3, 0x134(r3)
    mr r4, r31
    bl fn_803AB37C
lbl_fn_80171DB0_00001008:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80171F3C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r0, lbl_8087F430
    cmpwi r0, 0x0
    bne lbl_fn_80171F3C_00001054
    li r3, 0x0
    b lbl_fn_80171F3C_00001170
lbl_fn_80171F3C_00001054:
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_80171F3C_0000106C
    li r3, 0x0
    b lbl_fn_80171F3C_00001170
lbl_fn_80171F3C_0000106C:
    lwz r6, 0x48(r3)
    li r0, 0x1
    cmpwi r6, 0x1
    beq lbl_fn_80171F3C_00001088
    cmpwi r6, 0x4
    beq lbl_fn_80171F3C_00001088
    li r0, 0x0
lbl_fn_80171F3C_00001088:
    cmpwi r0, 0x0
    beq lbl_fn_80171F3C_000010F8
    lwz r0, 0xc54(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80171F3C_000010A4
    li r3, 0x0
    b lbl_fn_80171F3C_00001170
lbl_fn_80171F3C_000010A4:
    lwz r0, 0x5c0(r3)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_80171F3C_000010BC
    li r3, 0x0
    b lbl_fn_80171F3C_00001170
lbl_fn_80171F3C_000010BC:
    lhz r0, 0xd38(r3)
    extrwi. r0, r0, 1, 16
    bne lbl_fn_80171F3C_000010F8
    lwz r4, 0x80(r3)
    lwz r3, lbl_8087EE68
    slwi r0, r4, 30
    srwi r5, r4, 31
    subf r4, r5, r0
    lwz r0, 0x90(r3)
    rotlwi r3, r4, 2
    add r3, r3, r5
    cmpw r3, r0
    bne lbl_fn_80171F3C_000010F8
    li r3, 0x0
    b lbl_fn_80171F3C_00001170
lbl_fn_80171F3C_000010F8:
    cmpwi r6, 0x0
    bne lbl_fn_80171F3C_0000111C
    mr r3, r31
    bl fn_805F9920
    lfs f0, lbl_80881B30
    fcmpo cr0, f1, f0
    bge lbl_fn_80171F3C_0000115C
    li r3, 0x0
    b lbl_fn_80171F3C_00001170
lbl_fn_80171F3C_0000111C:
    cmpwi r6, 0x2
    bne lbl_fn_80171F3C_00001140
    mr r3, r31
    bl fn_805F9920
    lfs f0, lbl_80881B34
    fcmpo cr0, f1, f0
    bge lbl_fn_80171F3C_0000115C
    li r3, 0x0
    b lbl_fn_80171F3C_00001170
lbl_fn_80171F3C_00001140:
    mr r3, r31
    bl fn_805F9920
    lfs f0, lbl_80881994
    fcmpo cr0, f1, f0
    bge lbl_fn_80171F3C_0000115C
    li r3, 0x0
    b lbl_fn_80171F3C_00001170
lbl_fn_80171F3C_0000115C:
    lwz r3, lbl_8087F430
    mr r4, r30
    mr r5, r31
    mr r6, r29
    bl fn_8036DBC0
lbl_fn_80171F3C_00001170:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801720AC(void)
{
    nofralloc
    stwu r1, -0x100(r1)
    mflr r0
    stw r0, 0x104(r1)
    addi r11, r1, 0x100
    bl _savegpr_26
    lwz r0, 0x48(r3)
    lis r31, lbl_8077A720@ha
    mr r29, r3
    mr r26, r4
    cmpwi r0, 0x0
    mr r27, r5
    addi r31, r31, lbl_8077A720@l
    beq lbl_fn_801720AC_000011C8
    li r3, 0x0
    b lbl_fn_801720AC_000016B4
lbl_fn_801720AC_000011C8:
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    beq lbl_fn_801720AC_000011DC
    cmpwi r0, 0x8
    bne lbl_fn_801720AC_000011E4
lbl_fn_801720AC_000011DC:
    li r3, 0x0
    b lbl_fn_801720AC_000016B4
lbl_fn_801720AC_000011E4:
    lwz r0, 0x12a4(r3)
    extrwi. r4, r0, 1, 26
    bne lbl_fn_801720AC_00001200
    extrwi. r0, r0, 1, 27
    bne lbl_fn_801720AC_00001200
    li r3, 0x0
    b lbl_fn_801720AC_000016B4
lbl_fn_801720AC_00001200:
    lwz r0, 0x1208(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801720AC_00001218
    lwz r0, 0x139c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801720AC_00001220
lbl_fn_801720AC_00001218:
    li r3, 0x0
    b lbl_fn_801720AC_000016B4
lbl_fn_801720AC_00001220:
    lfs f4, 0x8(r5)
    addi r3, r1, 0x5c
    lfs f3, 0x0(r5)
    lfs f0, lbl_8088196C
    stfs f3, 0x5c(r1)
    stfs f0, 0x60(r1)
    stfs f4, 0x64(r1)
    bl fn_805F9920
    lfs f0, lbl_80881994
    fcmpo cr0, f1, f0
    bge lbl_fn_801720AC_00001254
    li r3, 0x0
    b lbl_fn_801720AC_000016B4
lbl_fn_801720AC_00001254:
    addi r3, r1, 0x5c
    mr r4, r3
    bl fn_805F98D0
    lfs f2, 0x8(r26)
    addi r30, r1, 0x50
    psq_l f1, 0x0(r26), 0, 0
    addi r28, r1, 0x44
    psq_st f1, 0x0(r28), 0, 0
    li r0, 0x0
    lfs f3, lbl_808819DC
    mr r5, r30
    psq_st f1, 0x0(r30), 0, 0
    mr r6, r28
    lfs f0, 0x48(r1)
    addi r4, r1, 0x68
    lfs f4, 0x54(r1)
    lis r7, 0x8000
    fadds f7, f0, f3
    stfs f2, 0x58(r1)
    fadds f0, f4, f3
    lfs f6, lbl_80881978
    stfs f2, 0x4c(r1)
    li r8, 0x0
    stfs f0, 0x54(r1)
    li r9, 0x0
    lfs f5, 0x64(r1)
    stfs f7, 0x48(r1)
    lfs f3, 0x60(r1)
    lfs f4, 0x620(r29)
    lfs f0, 0x5c(r1)
    fadds f6, f6, f4
    lfs f4, 0x44(r1)
    stw r0, 0x9c(r1)
    lwz r3, lbl_8087EE98
    fmuls f8, f3, f6
    stw r0, 0xa0(r1)
    fmuls f5, f5, f6
    fmuls f6, f0, f6
    stfs f8, 0x3c(r1)
    fadds f3, f7, f8
    fadds f0, f2, f5
    stfs f5, 0x40(r1)
    fadds f4, f4, f6
    stfs f6, 0x38(r1)
    stfs f4, 0x44(r1)
    stfs f3, 0x48(r1)
    stfs f0, 0x4c(r1)
    stw r0, 0xa4(r1)
    stw r0, 0xa8(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    bne lbl_fn_801720AC_000016A0
    lfs f2, 0x8(r26)
    mr r5, r30
    psq_l f1, 0x0(r26), 0, 0
    mr r6, r28
    psq_st f1, 0x0(r28), 0, 0
    addi r4, r1, 0x68
    lfs f3, lbl_808819F8
    lis r7, 0x8000
    psq_st f1, 0x0(r30), 0, 0
    li r8, 0x0
    lfs f0, 0x48(r1)
    li r9, 0x0
    lfs f4, 0x54(r1)
    fadds f8, f0, f3
    stfs f2, 0x58(r1)
    fadds f0, f4, f3
    lfs f7, lbl_80881978
    stfs f2, 0x4c(r1)
    lfs f5, 0x64(r1)
    stfs f0, 0x54(r1)
    lfs f3, 0x60(r1)
    stfs f8, 0x48(r1)
    lfs f0, 0x5c(r1)
    lfs f6, 0x620(r29)
    lfs f4, 0x44(r1)
    fadds f6, f7, f6
    lwz r3, lbl_8087EE98
    fmuls f7, f3, f6
    fmuls f5, f5, f6
    fmuls f6, f0, f6
    stfs f7, 0x30(r1)
    fadds f3, f8, f7
    fadds f0, f2, f5
    stfs f5, 0x34(r1)
    fadds f4, f4, f6
    stfs f6, 0x2c(r1)
    stfs f4, 0x44(r1)
    stfs f3, 0x48(r1)
    stfs f0, 0x4c(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_801720AC_000016A0
    lwz r3, lbl_8087F430
    mr r4, r26
    mr r6, r29
    addi r5, r1, 0x5c
    lwz r3, 0x10d8(r3)
    bl fn_803CC198
    cmpwi r3, 0x0
    beq lbl_fn_801720AC_000016A0
    lis r5, lbl_80737A9C@ha
    li r3, 0x28
    addi r5, r5, lbl_80737A9C@l
    li r4, 0x0
    addi r5, r5, 0x24
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_801720AC_00001428
    mr r4, r29
    addi r5, r1, 0x5c
    bl fn_801C0D80
    mr r30, r3
lbl_fn_801720AC_00001428:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_801720AC_000014B8
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_801720AC_00001460
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0xb8(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0xbc(r1)
    stw r0, 0xc0(r1)
    b lbl_fn_801720AC_0000147C
lbl_fn_801720AC_00001460:
    addi r3, r31, 0x1aac
    lwz r5, 0x1aac(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0xb8(r1)
    stw r4, 0xbc(r1)
    stw r0, 0xc0(r1)
lbl_fn_801720AC_0000147C:
    lwz r5, 0xb8(r1)
    addi r3, r1, 0x20
    lwz r4, 0xbc(r1)
    lwz r0, 0xc0(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801720AC_000014B8
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801720AC_000014B8:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_801720AC_0000166C
    cmpwi r0, 0x8
    beq lbl_fn_801720AC_000014D0
    stw r0, 0x564(r29)
lbl_fn_801720AC_000014D0:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_801720AC_0000166C
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_801720AC_00001508
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0xc4(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0xc8(r1)
    stw r0, 0xcc(r1)
    b lbl_fn_801720AC_00001524
lbl_fn_801720AC_00001508:
    addi r3, r31, 0x1ab8
    lwz r5, 0x1ab8(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0xc4(r1)
    stw r4, 0xc8(r1)
    stw r0, 0xcc(r1)
lbl_fn_801720AC_00001524:
    lwz r5, 0xc4(r1)
    addi r3, r1, 0x8
    lwz r4, 0xc8(r1)
    lwz r0, 0xcc(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801720AC_00001560
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801720AC_00001560:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_801720AC_0000163C
    cmpwi r0, 0x8
    beq lbl_fn_801720AC_00001578
    stw r0, 0x564(r29)
lbl_fn_801720AC_00001578:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_801720AC_0000163C
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_801720AC_000015B0
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0xd0(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0xd4(r1)
    stw r0, 0xd8(r1)
    b lbl_fn_801720AC_000015CC
lbl_fn_801720AC_000015B0:
    addi r3, r31, 0x1ac4
    lwz r5, 0x1ac4(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0xd0(r1)
    stw r4, 0xd4(r1)
    stw r0, 0xd8(r1)
lbl_fn_801720AC_000015CC:
    lwz r5, 0xd0(r1)
    addi r3, r1, 0x14
    lwz r4, 0xd4(r1)
    lwz r0, 0xd8(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801720AC_00001608
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801720AC_00001608:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_801720AC_0000163C
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801720AC_0000163C:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_801720AC_0000166C
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801720AC_0000166C:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_801720AC_00001698
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801720AC_00001698:
    li r3, 0x1
    b lbl_fn_801720AC_000016B4
lbl_fn_801720AC_000016A0:
    mr r3, r29
    mr r4, r26
    mr r5, r27
    li r6, 0x0
    bl fn_801725EC
lbl_fn_801720AC_000016B4:
    addi r11, r1, 0x100
    bl _restgpr_26
    lwz r0, 0x104(r1)
    mtlr r0
    addi r1, r1, 0x100
    blr
}

asm void fn_801725EC(void)
{
    nofralloc
    stwu r1, -0x1a0(r1)
    mflr r0
    stw r0, 0x1a4(r1)
    addi r11, r1, 0x190
    stfd f31, 0x190(r1)
    psq_st f31, 0x198(r1), 0, 0
    bl _savegpr_27
    lfs f4, 0x8(r5)
    lis r31, lbl_8077A720@ha
    lfs f3, 0x0(r5)
    mr r27, r3
    lfs f0, lbl_8088196C
    mr r29, r4
    stfs f3, 0x98(r1)
    mr r28, r6
    addi r31, r31, lbl_8077A720@l
    addi r3, r1, 0x98
    stfs f0, 0x9c(r1)
    stfs f4, 0xa0(r1)
    bl fn_805F9940
    lfs f0, lbl_80881994
    fmr f31, f1
    fcmpo cr0, f1, f0
    bge lbl_fn_801725EC_00001734
    li r3, 0x0
    b lbl_fn_801725EC_00001FBC
lbl_fn_801725EC_00001734:
    addi r3, r1, 0x98
    mr r4, r3
    bl fn_805F98D0
    lwz r0, 0x48(r27)
    cmpwi r0, 0x0
    beq lbl_fn_801725EC_000017A0
    lfs f3, lbl_8088196C
    addi r3, r1, 0xa8
    lfs f0, lbl_80881964
    li r4, 0x79
    stfs f3, 0x68(r1)
    stfs f3, 0x6c(r1)
    stfs f0, 0x70(r1)
    lfs f1, 0x538(r27)
    bl fn_805F8E70
    addi r4, r1, 0x68
    addi r3, r1, 0xa8
    mr r5, r4
    bl fn_805F93C0
    addi r3, r1, 0x98
    addi r4, r1, 0x68
    bl fn_805F9990
    lfs f0, lbl_80881980
    fcmpo cr0, f1, f0
    bge lbl_fn_801725EC_000017A0
    li r3, 0x0
    b lbl_fn_801725EC_00001FBC
lbl_fn_801725EC_000017A0:
    addi r3, r27, 0xb0
    li r4, 0x41
    bl fn_80097D40
    cmpwi r3, 0x0
    bne lbl_fn_801725EC_000017BC
    li r3, 0x0
    b lbl_fn_801725EC_00001FBC
lbl_fn_801725EC_000017BC:
    lwz r0, 0x12a4(r27)
    extrwi. r0, r0, 1, 28
    beq lbl_fn_801725EC_000017D0
    li r3, 0x0
    b lbl_fn_801725EC_00001FBC
lbl_fn_801725EC_000017D0:
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    beq lbl_fn_801725EC_000017E4
    li r3, 0x0
    b lbl_fn_801725EC_00001FBC
lbl_fn_801725EC_000017E4:
    addi r5, r1, 0x8c
    psq_l f1, 0x0(r29), 0, 0
    addi r6, r1, 0x80
    psq_st f1, 0x0(r5), 0, 0
    lfs f2, 0x8(r29)
    li r30, 0x0
    psq_st f1, 0x0(r6), 0, 0
    addi r4, r1, 0xd8
    lfs f3, lbl_808819F8
    addi r8, r27, 0x5b8
    lfs f0, 0x84(r1)
    li r7, 0x0
    lfs f4, 0x90(r1)
    li r9, 0x0
    fadds f8, f0, f3
    stfs f2, 0x94(r1)
    fadds f0, f4, f3
    lfs f7, lbl_80881978
    stfs f2, 0x88(r1)
    lfs f5, 0xa0(r1)
    stfs f0, 0x90(r1)
    lfs f3, 0x9c(r1)
    stfs f8, 0x84(r1)
    lfs f0, 0x98(r1)
    lfs f6, 0x620(r27)
    lfs f4, 0x80(r1)
    fadds f6, f7, f6
    stw r30, 0x10c(r1)
    lwz r3, lbl_8087EE98
    stw r30, 0x110(r1)
    fmuls f5, f5, f6
    fmuls f3, f3, f6
    stw r30, 0x114(r1)
    fmuls f6, f0, f6
    fadds f0, f2, f5
    stfs f3, 0x60(r1)
    fadds f3, f8, f3
    fadds f4, f4, f6
    stfs f6, 0x5c(r1)
    stfs f5, 0x64(r1)
    stfs f4, 0x80(r1)
    stfs f3, 0x84(r1)
    stfs f0, 0x88(r1)
    stw r30, 0x118(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_801725EC_00001FB8
    lwz r3, 0x110(r1)
    cmpwi r3, 0x0
    beq lbl_fn_801725EC_00001FB8
    lwz r0, 0x8(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_801725EC_00001FB8
    lwz r29, 0xc(r3)
    li r4, 0x1
    lwz r3, 0x48(r27)
    li r0, 0x1
    lwz r5, 0x48(r29)
    cmpw r5, r3
    beq lbl_fn_801725EC_000018F8
    cmpwi r5, 0x0
    bne lbl_fn_801725EC_000018EC
    cmpwi r3, 0x3
    bne lbl_fn_801725EC_000018EC
    li r30, 0x1
lbl_fn_801725EC_000018EC:
    cmpwi r30, 0x0
    bne lbl_fn_801725EC_000018F8
    li r0, 0x0
lbl_fn_801725EC_000018F8:
    cmpwi r0, 0x0
    bne lbl_fn_801725EC_00001924
    cmpwi r5, 0x3
    li r0, 0x0
    bne lbl_fn_801725EC_00001918
    cmpwi r3, 0x0
    bne lbl_fn_801725EC_00001918
    li r0, 0x1
lbl_fn_801725EC_00001918:
    cmpwi r0, 0x0
    bne lbl_fn_801725EC_00001924
    li r4, 0x0
lbl_fn_801725EC_00001924:
    cmpwi r4, 0x0
    bne lbl_fn_801725EC_00001934
    li r3, 0x0
    b lbl_fn_801725EC_00001FBC
lbl_fn_801725EC_00001934:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x1
    bne lbl_fn_801725EC_00001954
    lwz r0, 0x12a4(r29)
    extrwi. r0, r0, 1, 25
    bne lbl_fn_801725EC_0000197C
    li r3, 0x0
    b lbl_fn_801725EC_00001FBC
lbl_fn_801725EC_00001954:
    cmpwi r0, 0x7
    bne lbl_fn_801725EC_0000196C
    cmpwi r5, 0x0
    bne lbl_fn_801725EC_0000197C
    li r3, 0x0
    b lbl_fn_801725EC_00001FBC
lbl_fn_801725EC_0000196C:
    cmpwi r0, 0x2
    beq lbl_fn_801725EC_0000197C
    li r3, 0x0
    b lbl_fn_801725EC_00001FBC
lbl_fn_801725EC_0000197C:
    lwz r0, 0x12a4(r29)
    srwi. r3, r0, 31
    bne lbl_fn_801725EC_00001990
    extrwi. r0, r0, 1, 28
    beq lbl_fn_801725EC_00001998
lbl_fn_801725EC_00001990:
    li r3, 0x0
    b lbl_fn_801725EC_00001FBC
lbl_fn_801725EC_00001998:
    lwz r4, 0x494(r27)
    addi r3, r29, 0xb0
    bl fn_80097D40
    cmpwi r3, 0x0
    bne lbl_fn_801725EC_000019B4
    li r3, 0x0
    b lbl_fn_801725EC_00001FBC
lbl_fn_801725EC_000019B4:
    lfs f4, 0x578(r29)
    addi r3, r1, 0x74
    lfs f3, 0x574(r29)
    lfs f0, lbl_8088196C
    stfs f3, 0x74(r1)
    stfs f0, 0x78(r1)
    stfs f4, 0x7c(r1)
    bl fn_805F9940
    lfs f0, lbl_808819A8
    fmuls f0, f0, f31
    fcmpo cr0, f1, f0
    ble lbl_fn_801725EC_00001A28
    addi r3, r1, 0x74
    addi r30, r1, 0x50
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r30
    lfs f2, 0x7c(r1)
    mr r4, r30
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x58(r1)
    bl fn_805F98D0
    mr r4, r30
    addi r3, r1, 0x98
    bl fn_805F9990
    lfs f0, lbl_808819FC
    fcmpo cr0, f1, f0
    ble lbl_fn_801725EC_00001A28
    li r3, 0x0
    b lbl_fn_801725EC_00001FBC
lbl_fn_801725EC_00001A28:
    lfs f4, 0x52c(r29)
    lfs f3, 0x52c(r27)
    lfs f0, lbl_808819C0
    fsubs f3, f4, f3
    fabs f3, f3
    frsp f3, f3
    fcmpo cr0, f3, f0
    ble lbl_fn_801725EC_00001A50
    li r3, 0x0
    b lbl_fn_801725EC_00001FBC
lbl_fn_801725EC_00001A50:
    lis r5, lbl_80737A9C@ha
    li r3, 0x28
    addi r5, r5, lbl_80737A9C@l
    li r4, 0x0
    addi r5, r5, 0x24
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_801725EC_00001A8C
    mr r4, r27
    addi r5, r1, 0x98
    bl fn_801C0D80
    mr r30, r3
lbl_fn_801725EC_00001A8C:
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x6
    bne lbl_fn_801725EC_00001B1C
    lwz r0, 0xf80(r27)
    cmpwi r0, 0x0
    bne lbl_fn_801725EC_00001AC4
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x128(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x12c(r1)
    stw r0, 0x130(r1)
    b lbl_fn_801725EC_00001AE0
lbl_fn_801725EC_00001AC4:
    addi r3, r31, 0x1ad0
    lwz r5, 0x1ad0(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x128(r1)
    stw r4, 0x12c(r1)
    stw r0, 0x130(r1)
lbl_fn_801725EC_00001AE0:
    lwz r5, 0x128(r1)
    addi r3, r1, 0x44
    lwz r4, 0x12c(r1)
    lwz r0, 0x130(r1)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801725EC_00001B1C
    lwz r3, 0xf80(r27)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801725EC_00001B1C:
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x6
    beq lbl_fn_801725EC_00001CD0
    cmpwi r0, 0x8
    beq lbl_fn_801725EC_00001B34
    stw r0, 0x564(r27)
lbl_fn_801725EC_00001B34:
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x6
    bne lbl_fn_801725EC_00001CD0
    lwz r0, 0xf80(r27)
    cmpwi r0, 0x0
    bne lbl_fn_801725EC_00001B6C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x134(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x138(r1)
    stw r0, 0x13c(r1)
    b lbl_fn_801725EC_00001B88
lbl_fn_801725EC_00001B6C:
    addi r3, r31, 0x1adc
    lwz r5, 0x1adc(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x134(r1)
    stw r4, 0x138(r1)
    stw r0, 0x13c(r1)
lbl_fn_801725EC_00001B88:
    lwz r5, 0x134(r1)
    addi r3, r1, 0x2c
    lwz r4, 0x138(r1)
    lwz r0, 0x13c(r1)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801725EC_00001BC4
    lwz r3, 0xf80(r27)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801725EC_00001BC4:
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x6
    beq lbl_fn_801725EC_00001CA0
    cmpwi r0, 0x8
    beq lbl_fn_801725EC_00001BDC
    stw r0, 0x564(r27)
lbl_fn_801725EC_00001BDC:
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x6
    bne lbl_fn_801725EC_00001CA0
    lwz r0, 0xf80(r27)
    cmpwi r0, 0x0
    bne lbl_fn_801725EC_00001C14
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x140(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x144(r1)
    stw r0, 0x148(r1)
    b lbl_fn_801725EC_00001C30
lbl_fn_801725EC_00001C14:
    addi r3, r31, 0x1ae8
    lwz r5, 0x1ae8(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x140(r1)
    stw r4, 0x144(r1)
    stw r0, 0x148(r1)
lbl_fn_801725EC_00001C30:
    lwz r5, 0x140(r1)
    addi r3, r1, 0x38
    lwz r4, 0x144(r1)
    lwz r0, 0x148(r1)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801725EC_00001C6C
    lwz r3, 0xf80(r27)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801725EC_00001C6C:
    mr r3, r27
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r27)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r27)
    beq lbl_fn_801725EC_00001CA0
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801725EC_00001CA0:
    lwz r3, 0xf80(r27)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r27)
    cmpwi r3, 0x0
    stw r0, 0xf80(r27)
    beq lbl_fn_801725EC_00001CD0
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801725EC_00001CD0:
    lwz r3, 0xf80(r27)
    li r0, 0x6
    stw r0, 0x55c(r27)
    cmpwi r3, 0x0
    stw r30, 0xf80(r27)
    beq lbl_fn_801725EC_00001CFC
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801725EC_00001CFC:
    lis r5, lbl_80737A9C@ha
    li r3, 0xc
    addi r5, r5, lbl_80737A9C@l
    li r4, 0x0
    addi r5, r5, 0x24
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_801725EC_00001D34
    mr r4, r29
    bl fn_801B192C
    mr r30, r3
lbl_fn_801725EC_00001D34:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_801725EC_00001DC4
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_801725EC_00001D6C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x14c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x150(r1)
    stw r0, 0x154(r1)
    b lbl_fn_801725EC_00001D88
lbl_fn_801725EC_00001D6C:
    addi r3, r31, 0x1af4
    lwz r5, 0x1af4(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x14c(r1)
    stw r4, 0x150(r1)
    stw r0, 0x154(r1)
lbl_fn_801725EC_00001D88:
    lwz r5, 0x14c(r1)
    addi r3, r1, 0x20
    lwz r4, 0x150(r1)
    lwz r0, 0x154(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801725EC_00001DC4
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801725EC_00001DC4:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_801725EC_00001F78
    cmpwi r0, 0x8
    beq lbl_fn_801725EC_00001DDC
    stw r0, 0x564(r29)
lbl_fn_801725EC_00001DDC:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_801725EC_00001F78
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_801725EC_00001E14
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x158(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x15c(r1)
    stw r0, 0x160(r1)
    b lbl_fn_801725EC_00001E30
lbl_fn_801725EC_00001E14:
    addi r3, r31, 0x1b00
    lwz r5, 0x1b00(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x158(r1)
    stw r4, 0x15c(r1)
    stw r0, 0x160(r1)
lbl_fn_801725EC_00001E30:
    lwz r5, 0x158(r1)
    addi r3, r1, 0x8
    lwz r4, 0x15c(r1)
    lwz r0, 0x160(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801725EC_00001E6C
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801725EC_00001E6C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_801725EC_00001F48
    cmpwi r0, 0x8
    beq lbl_fn_801725EC_00001E84
    stw r0, 0x564(r29)
lbl_fn_801725EC_00001E84:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_801725EC_00001F48
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_801725EC_00001EBC
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x164(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x168(r1)
    stw r0, 0x16c(r1)
    b lbl_fn_801725EC_00001ED8
lbl_fn_801725EC_00001EBC:
    addi r3, r31, 0x1b0c
    lwz r5, 0x1b0c(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x164(r1)
    stw r4, 0x168(r1)
    stw r0, 0x16c(r1)
lbl_fn_801725EC_00001ED8:
    lwz r5, 0x164(r1)
    addi r3, r1, 0x14
    lwz r4, 0x168(r1)
    lwz r0, 0x16c(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801725EC_00001F14
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801725EC_00001F14:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_801725EC_00001F48
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801725EC_00001F48:
    li r0, 0x6
    stw r0, 0x55c(r29)
    li r0, 0x0
    lwz r3, 0xf80(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_801725EC_00001F78
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801725EC_00001F78:
    li r0, 0x6
    stw r0, 0x55c(r29)
    lwz r3, 0xf80(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_801725EC_00001FA4
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801725EC_00001FA4:
    cmpwi r28, 0x0
    beq lbl_fn_801725EC_00001FB0
    stw r29, 0x0(r28)
lbl_fn_801725EC_00001FB0:
    li r3, 0x1
    b lbl_fn_801725EC_00001FBC
lbl_fn_801725EC_00001FB8:
    li r3, 0x0
lbl_fn_801725EC_00001FBC:
    addi r11, r1, 0x190
    psq_l f31, 0x198(r1), 0, 0
    lfd f31, 0x190(r1)
    bl _restgpr_27
    lwz r0, 0x1a4(r1)
    mtlr r0
    addi r1, r1, 0x1a0
    blr
}
