#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void dtor_80084684(void);
extern void fn_80049B74(void);
extern void fn_8005B3CC(void);
extern void fn_8005B5F8(void);
extern void fn_8005B6E8(void);
extern void fn_8005B710(void);
extern void fn_8005B8F8(void);
extern void fn_8005B9AC(void);
extern void fn_80060D58(void);
extern void fn_800610A4(void);
extern void fn_80061824(void);
extern void fn_8006F420(void);
extern void fn_80084320(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_800C6E60(void);
extern void fn_800C6ED8(void);
extern void fn_800C7568(void);
extern void fn_800CB3A0(void);
extern void fn_800D1D3C(void);
extern void fn_800D1E9C(void);
extern void fn_800DC1DC(void);
extern void fn_800DC6B4(void);
extern void fn_800DD3FC(void);
extern void fn_80117228(void);
extern void fn_801FEE08(void);
extern void fn_80206B9C(void);
extern void fn_80209184(void);
extern void fn_8020C07C(void);
extern void fn_8020C4B0(void);
extern void fn_8021F3E8(void);
extern void fn_803BD49C(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473E74(void);
extern void fn_80473E8C(void);
extern void fn_80473F50(void);
extern void fn_804AC83C(void);
extern void fn_804ACD10(void);
extern void fn_804AD000(void);
extern void fn_804D147C(void);
extern void fn_8050541C(void);
extern void fn_805072C8(void);
extern void fn_80680CF8(void);
extern void fn_80682428(void);
extern void fn_80684600(void);
extern void fn_806846C4(void);
extern void fn_80686A48(void);
extern void fn_80695720(void);
extern void fn_806958E0(void);
extern void fn_806959D8(void);
extern void fn_80695A50(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 lbl_8075AEDC[];
extern u8 lbl_8075B034[];
extern u8 lbl_8075B038[];
extern u8 lbl_807772B0[];
extern u8 lbl_807772D0[];
extern u8 lbl_8077A070[];
extern u8 lbl_8077A090[];
extern u8 lbl_8077A0A8[];
extern u8 lbl_80782FF0[];
extern u8 lbl_807830B8[];
extern u8 lbl_8078FBB0[];
extern u8 lbl_80792DC0[];
extern u8 lbl_80792DF8[];
extern u8 lbl_80792E00[];

/* Small data declarations */
extern u32 lbl_8087D708;
extern u32 lbl_8087E440;
extern u32 lbl_8087E460;
extern u32 lbl_8087E464;
extern u32 lbl_8087EE90;
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EEC8;
extern u32 lbl_8087F1E4;
extern u32 lbl_8087F588;
extern u32 lbl_8087F610;
extern u32 lbl_8087F628;
extern u32 lbl_8087F868;
extern u32 lbl_8087F86C;
extern u32 lbl_808813D0;
extern u32 lbl_80887754;
extern u32 lbl_80887760;
extern u32 lbl_80887764;
extern u32 lbl_80887778;
extern u32 lbl_8088777C;
extern u32 lbl_80887780;
extern u32 lbl_80887784;
extern u32 lbl_80887788;
extern u32 lbl_80887790;

/* Function declarations */
void fn_80505514(void);
void fn_805058E8(void);
void fn_805058EC(void);
void fn_80505974(void);
void fn_80505AB8(void);
void fn_80505BBC(void);
void fn_80505C20(void);
void fn_80505DD4(void);
void fn_80505EA4(void);
void fn_80505F58(void);
void fn_80505FC8(void);
void fn_805061CC(void);
void fn_80506530(void);
void fn_80506560(void);
void fn_80506C14(void);
void fn_80506D98(void);

asm void fn_80505514(void)
{
    nofralloc
    stwu r1, -0xe0(r1)
    mflr r0
    lhz r4, 0x4(r6)
    stw r0, 0xe4(r1)
    cmplwi r4, 0x2193
    stmw r25, 0xc4(r1)
    li r28, 0x0
    mr r31, r3
    mr r25, r6
    stw r28, 0x80(r1)
    stw r28, 0x84(r1)
    stw r28, 0x88(r1)
    stw r28, 0x8c(r1)
    stw r28, 0x90(r1)
    stw r28, 0x94(r1)
    stw r28, 0x98(r1)
    stw r28, 0x9c(r1)
    stw r28, 0xa0(r1)
    stw r28, 0xa4(r1)
    stw r28, 0xa8(r1)
    stw r28, 0xac(r1)
    stw r28, 0xb0(r1)
    stw r28, 0xb4(r1)
    stw r28, 0xb8(r1)
    stw r28, 0xbc(r1)
    stw r28, 0x30(r1)
    stw r28, 0x34(r1)
    stw r28, 0x38(r1)
    stw r28, 0x3c(r1)
    bne lbl_fn_80505514_00000080
    bl fn_80505974
    b lbl_fn_80505514_000003C0
lbl_fn_80505514_00000080:
    cmplwi r4, 0x2190
    bne lbl_fn_80505514_00000154
    addi r3, r3, 0xf8
    bl fn_800C6ED8
    stw r28, 0x40(r1)
    stw r28, 0x44(r1)
    stw r28, 0x48(r1)
    stw r28, 0x4c(r1)
    stw r28, 0x50(r1)
    stw r28, 0x54(r1)
    stw r28, 0x58(r1)
    stw r28, 0x5c(r1)
    stw r28, 0x60(r1)
    stw r28, 0x64(r1)
    stw r28, 0x68(r1)
    stw r28, 0x6c(r1)
    stw r28, 0x70(r1)
    stw r28, 0x74(r1)
    stw r28, 0x78(r1)
    stw r28, 0x7c(r1)
    lwz r0, 0x25b4(r31)
    stw r28, 0x20(r1)
    cmpwi r0, 0x0
    stw r28, 0x24(r1)
    stw r28, 0x28(r1)
    stw r28, 0x2c(r1)
    ble lbl_fn_80505514_000003C0
    addi r3, r1, 0x8
    li r4, 0x8
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    lis r4, lbl_8075AEDC@ha
    lwz r5, 0x25b4(r31)
    addi r4, r4, lbl_8075AEDC@l
    addi r3, r1, 0x40
    addi r4, r4, 0xb0
    crclr 6
    bl sprintf
    lwz r4, 0x4c(r31)
    addi r3, r1, 0x40
    la r28, lbl_8087E440
    addi r29, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r29
    mr r5, r28
    bl fn_801FEE08
    lwz r3, 0x25b4(r31)
    subi r0, r3, 0x1
    stw r0, 0x25b4(r31)
    b lbl_fn_80505514_000003C0
lbl_fn_80505514_00000154:
    cmplwi r4, 0x2b
    bne lbl_fn_80505514_00000324
    bl fn_80680CF8
    lis r4, 0x51ec
    lwz r5, lbl_8087F86C
    subi r0, r4, 0x7ae1
    mulhw r0, r0, r3
    srawi r0, r0, 4
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x32
    subf r3, r0, r3
    addi r0, r3, 0x59
    slwi r0, r0, 3
    add r3, r5, r0
    lwz r27, 0x4c(r3)
    cmpwi r27, 0x0
    beq lbl_fn_80505514_000001A0
    b lbl_fn_80505514_000001A4
lbl_fn_80505514_000001A0:
    la r27, lbl_808813D0
lbl_fn_80505514_000001A4:
    lis r3, lbl_80782FF0@ha
    cmpwi r27, 0x0
    addi r3, r3, lbl_80782FF0@l
    stw r3, 0x18(r1)
    stw r27, 0x1c(r1)
    beq lbl_fn_80505514_000001C4
    mr r3, r27
    b lbl_fn_80505514_000001C8
lbl_fn_80505514_000001C4:
    la r3, lbl_808813D0
lbl_fn_80505514_000001C8:
    bl fn_80686A48
    cmpwi r3, 0x0
    beq lbl_fn_80505514_00000308
    cmpwi r27, 0x0
    beq lbl_fn_80505514_000001E0
    b lbl_fn_80505514_000001E4
lbl_fn_80505514_000001E0:
    la r27, lbl_808813D0
lbl_fn_80505514_000001E4:
    addi r0, r31, 0xfc
    cmplw r27, r0
    beq lbl_fn_80505514_0000020C
    mr r3, r27
    bl fn_80686A48
    mr r5, r3
    mr r4, r27
    addi r3, r31, 0xfc
    addi r5, r5, 0x1
    bl fn_806846C4
lbl_fn_80505514_0000020C:
    lwz r3, 0x1c(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80505514_0000021C
    b lbl_fn_80505514_00000220
lbl_fn_80505514_0000021C:
    la r3, lbl_808813D0
lbl_fn_80505514_00000220:
    bl fn_80686A48
    lwz r26, 0x1c(r1)
    lis r29, lbl_8075AEDC@ha
    stw r3, 0x25b4(r31)
    addi r29, r29, lbl_8075AEDC@l
    mr r30, r26
    li r25, 0x0
    li r28, 0x0
    b lbl_fn_80505514_0000028C
lbl_fn_80505514_00000244:
    addi r3, r1, 0x80
    addi r4, r29, 0xb0
    addi r5, r25, 0x1
    crclr 6
    bl sprintf
    lhz r0, 0x0(r30)
    addi r3, r1, 0x80
    sth r0, 0x30(r1)
    sth r28, 0x32(r1)
    lwz r4, 0x4c(r31)
    addi r27, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r27
    addi r5, r1, 0x30
    bl fn_801FEE08
    addi r30, r30, 0x2
    addi r25, r25, 0x1
lbl_fn_80505514_0000028C:
    cmpwi r26, 0x0
    bne lbl_fn_80505514_0000029C
    la r3, lbl_808813D0
    b lbl_fn_80505514_000002A0
lbl_fn_80505514_0000029C:
    mr r3, r26
lbl_fn_80505514_000002A0:
    bl fn_80686A48
    cmplw r25, r3
    blt lbl_fn_80505514_00000244
    lis r28, lbl_8075AEDC@ha
    li r29, 0x5f
    addi r28, r28, lbl_8075AEDC@l
    li r30, 0x0
    b lbl_fn_80505514_00000300
lbl_fn_80505514_000002C0:
    addi r3, r1, 0x80
    addi r4, r28, 0xb0
    addi r5, r25, 0x1
    crclr 6
    bl sprintf
    sth r29, 0x30(r1)
    addi r3, r1, 0x80
    sth r30, 0x32(r1)
    lwz r4, 0x4c(r31)
    addi r27, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r27
    addi r5, r1, 0x30
    bl fn_801FEE08
    addi r25, r25, 0x1
lbl_fn_80505514_00000300:
    cmplwi r25, 0x8
    blt lbl_fn_80505514_000002C0
lbl_fn_80505514_00000308:
    addi r3, r1, 0x10
    li r4, 0x1
    bl fn_80117228
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_80505514_000003C0
lbl_fn_80505514_00000324:
    lwz r0, 0x25b4(r3)
    cmpwi r0, 0x8
    bge lbl_fn_80505514_000003A8
    addi r3, r3, 0xf8
    bl fn_800C6E60
    lwz r5, 0x25b4(r31)
    lis r4, lbl_8075AEDC@ha
    addi r4, r4, lbl_8075AEDC@l
    addi r3, r1, 0x80
    addi r4, r4, 0xb0
    addi r5, r5, 0x1
    crclr 6
    bl sprintf
    lhz r0, 0x4(r25)
    addi r3, r1, 0x80
    sth r0, 0x30(r1)
    sth r28, 0x32(r1)
    lwz r4, 0x4c(r31)
    addi r27, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r27
    addi r5, r1, 0x30
    bl fn_801FEE08
    lwz r3, 0x25b4(r31)
    addi r0, r3, 0x1
    stw r0, 0x25b4(r31)
    cmpwi r0, 0x8
    blt lbl_fn_80505514_000003A8
    addi r3, r31, 0xf8
    li r4, 0x3
    li r5, 0xa
    bl fn_800C7568
lbl_fn_80505514_000003A8:
    addi r3, r1, 0xc
    li r4, 0x1
    bl fn_80117228
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_80505514_000003C0:
    lmw r25, 0xc4(r1)
    lwz r0, 0xe4(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}

asm void fn_805058E8(void)
{
    nofralloc
    blr
}

asm void fn_805058EC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmplwi r7, 0x1
    stw r0, 0x14(r1)
    bgt lbl_fn_805058EC_00000410
    cmpwi r8, 0xa
    bne lbl_fn_805058EC_00000400
    addi r0, r7, 0xc8
    stw r0, 0x25b0(r3)
    b lbl_fn_805058EC_00000438
lbl_fn_805058EC_00000400:
    mulli r0, r7, 0xa
    add r0, r8, r0
    stw r0, 0x25b0(r3)
    b lbl_fn_805058EC_00000438
lbl_fn_805058EC_00000410:
    cmpwi r8, 0x9
    blt lbl_fn_805058EC_00000424
    addi r0, r7, 0xc8
    stw r0, 0x25b0(r3)
    b lbl_fn_805058EC_00000438
lbl_fn_805058EC_00000424:
    slwi r0, r7, 3
    add r0, r0, r7
    add r4, r8, r0
    addi r0, r4, 0x2
    stw r0, 0x25b0(r3)
lbl_fn_805058EC_00000438:
    addi r3, r1, 0x8
    li r4, 0x3
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80505974(void)
{
    nofralloc
    stwu r1, -0x820(r1)
    mflr r0
    addi r4, r3, 0xf8
    stw r0, 0x824(r1)
    li r0, 0x100
    addi r5, r1, 0xc
    stw r31, 0x81c(r1)
    stw r30, 0x818(r1)
    stw r29, 0x814(r1)
    stw r28, 0x810(r1)
    mr r28, r3
    mtctr r0
lbl_fn_80505974_00000490:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_fn_80505974_00000490
    addi r3, r1, 0x10
    bl fn_80686A48
    cmpwi r3, 0x0
    bne lbl_fn_80505974_000004BC
    li r0, 0x1
    b lbl_fn_80505974_00000510
lbl_fn_80505974_000004BC:
    addi r29, r1, 0x10
    li r30, 0x0
    li r31, 0x0
    b lbl_fn_80505974_000004E4
lbl_fn_80505974_000004CC:
    lhz r0, 0x0(r29)
    cmplwi r0, 0x20
    bne lbl_fn_80505974_000004DC
    addi r30, r30, 0x1
lbl_fn_80505974_000004DC:
    addi r29, r29, 0x2
    addi r31, r31, 0x1
lbl_fn_80505974_000004E4:
    addi r3, r1, 0x10
    bl fn_80686A48
    cmplw r31, r3
    blt lbl_fn_80505974_000004CC
    addi r3, r1, 0x10
    bl fn_80686A48
    subf r0, r3, r30
    orc r3, r30, r3
    srwi r0, r0, 1
    subf r0, r0, r3
    srwi r0, r0, 31
lbl_fn_80505974_00000510:
    cmpwi r0, 0x0
    bne lbl_fn_80505974_0000053C
    addi r3, r1, 0x8
    li r4, 0x1
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    mr r3, r28
    bl fn_8050541C
    b lbl_fn_80505974_00000584
lbl_fn_80505974_0000053C:
    lwz r3, lbl_8087F588
    li r4, 0x0
    lfs f1, lbl_80887764
    li r5, 0x0
    bl fn_804AC83C
    lwz r4, lbl_8087F1E4
    lwz r3, lbl_8087F588
    lwz r4, 0xe64(r4)
    cmpwi r4, 0x0
    beq lbl_fn_80505974_00000568
    b lbl_fn_80505974_0000056C
lbl_fn_80505974_00000568:
    la r4, lbl_808813D0
lbl_fn_80505974_0000056C:
    li r5, 0x0
    bl fn_804AD000
    lwz r3, lbl_8087F588
    bl fn_804ACD10
    li r0, 0x4
    stw r0, 0x25ac(r28)
lbl_fn_80505974_00000584:
    lwz r0, 0x824(r1)
    lwz r31, 0x81c(r1)
    lwz r30, 0x818(r1)
    lwz r29, 0x814(r1)
    lwz r28, 0x810(r1)
    mtlr r0
    addi r1, r1, 0x820
    blr
}

asm void fn_80505AB8(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stw r31, 0x6c(r1)
    stw r30, 0x68(r1)
    stw r29, 0x64(r1)
    mr r29, r3
    addi r3, r3, 0xf8
    bl fn_800C6ED8
    li r3, 0x0
    stw r3, 0x20(r1)
    stw r3, 0x24(r1)
    stw r3, 0x28(r1)
    stw r3, 0x2c(r1)
    stw r3, 0x30(r1)
    stw r3, 0x34(r1)
    stw r3, 0x38(r1)
    stw r3, 0x3c(r1)
    stw r3, 0x40(r1)
    stw r3, 0x44(r1)
    stw r3, 0x48(r1)
    stw r3, 0x4c(r1)
    stw r3, 0x50(r1)
    stw r3, 0x54(r1)
    stw r3, 0x58(r1)
    stw r3, 0x5c(r1)
    lwz r0, 0x25b4(r29)
    stw r3, 0x10(r1)
    cmpwi r0, 0x0
    stw r3, 0x14(r1)
    stw r3, 0x18(r1)
    stw r3, 0x1c(r1)
    ble lbl_fn_80505AB8_0000068C
    addi r3, r1, 0x8
    li r4, 0x8
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    lis r4, lbl_8075AEDC@ha
    lwz r5, 0x25b4(r29)
    addi r4, r4, lbl_8075AEDC@l
    addi r3, r1, 0x20
    addi r4, r4, 0xb0
    crclr 6
    bl sprintf
    lwz r4, 0x4c(r29)
    addi r3, r1, 0x20
    la r31, lbl_8087E440
    addi r30, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r30
    mr r5, r31
    bl fn_801FEE08
    lwz r3, 0x25b4(r29)
    subi r0, r3, 0x1
    stw r0, 0x25b4(r29)
lbl_fn_80505AB8_0000068C:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    lwz r29, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_80505BBC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r4, lbl_8087F628
    addi r3, r4, 0x5f0
    bl fn_80686A48
    cmpwi r3, 0x0
    beq lbl_fn_80505BBC_000006F8
    li r0, 0x0
    stw r0, 0x25b8(r31)
    addi r3, r1, 0x8
    li r4, 0x2
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    mr r3, r31
    bl fn_8050541C
lbl_fn_80505BBC_000006F8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80505C20(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stfd f31, 0x60(r1)
    psq_st f31, 0x68(r1), 0, 0
    stfd f30, 0x50(r1)
    psq_st f30, 0x58(r1), 0, 0
    stfd f29, 0x40(r1)
    psq_st f29, 0x48(r1), 0, 0
    stfd f28, 0x30(r1)
    psq_st f28, 0x38(r1), 0, 0
    stfd f27, 0x20(r1)
    psq_st f27, 0x28(r1), 0, 0
    stfd f26, 0x10(r1)
    psq_st f26, 0x18(r1), 0, 0
    cmpwi r7, 0x0
    bne lbl_fn_80505C20_00000770
    lwz r4, 0x251c(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80505C20_00000770
    lhz r3, 0x4(r6)
    lhz r0, 0x4(r4)
    cmplw r3, r0
    bne lbl_fn_80505C20_00000770
    li r7, 0x1
lbl_fn_80505C20_00000770:
    cmpwi r7, 0x0
    lfs f31, lbl_80887764
    beq lbl_fn_80505C20_00000780
    lfs f31, lbl_80887778
lbl_fn_80505C20_00000780:
    cmpwi r7, 0x0
    lfs f30, lbl_8088777C
    beq lbl_fn_80505C20_00000790
    lfs f30, lbl_80887780
lbl_fn_80505C20_00000790:
    lfs f0, lbl_80887764
    cmpwi r7, 0x0
    lfs f4, lbl_80887754
    li r4, -0x1
    fsubs f5, f31, f0
    lfs f3, 0x8(r6)
    lfs f1, 0x10(r6)
    lfs f2, 0xc(r6)
    lfs f0, 0x14(r6)
    fsubs f1, f1, f3
    fmuls f5, f4, f5
    lfs f4, lbl_80887784
    fsubs f0, f0, f2
    fmuls f27, f31, f1
    fnmsubs f29, f5, f4, f3
    fnmsubs f28, f5, f4, f2
    fmuls f26, f31, f0
    beq lbl_fn_80505C20_000007E0
    lis r3, 0xffcd
    subi r4, r3, 0x3301
lbl_fn_80505C20_000007E0:
    lhz r3, 0x4(r6)
    fmr f1, f29
    li r0, 0x0
    sth r3, 0x8(r1)
    fmr f2, f28
    lwz r3, lbl_8087EEB0
    fmr f3, f30
    fmr f4, f27
    sth r0, 0xa(r1)
    fmr f5, f26
    bl fn_80060D58
    fmr f1, f29
    lwz r3, lbl_8087EEB0
    fmr f2, f28
    lis r4, 0xff00
    fmr f3, f30
    fmr f4, f27
    fmr f5, f26
    bl fn_800610A4
    lfs f0, lbl_80887754
    fmr f3, f30
    lfs f6, lbl_80887760
    addi r4, r1, 0x8
    fmuls f9, f0, f31
    lfs f0, lbl_80887784
    lfs f2, lbl_80887788
    fmr f7, f6
    lwz r3, lbl_8087EEB0
    fmuls f4, f9, f0
    fmadds f1, f9, f2, f29
    lis r5, 0xff00
    fmr f8, f6
    fmr f5, f4
    li r6, 0x1
    fmadds f2, f9, f2, f28
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
    lwz r0, 0x74(r1)
    psq_l f31, 0x68(r1), 0, 0
    lfd f31, 0x60(r1)
    psq_l f30, 0x58(r1), 0, 0
    lfd f30, 0x50(r1)
    psq_l f29, 0x48(r1), 0, 0
    lfd f29, 0x40(r1)
    psq_l f28, 0x38(r1), 0, 0
    lfd f28, 0x30(r1)
    psq_l f27, 0x28(r1), 0, 0
    lfd f27, 0x20(r1)
    psq_l f26, 0x18(r1), 0, 0
    lfd f26, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_80505DD4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, lbl_8087F86C
    cmpwi r0, 0x0
    bne lbl_fn_80505DD4_00000974
    lis r5, lbl_8075B034@ha
    li r3, 0xa18
    addi r5, r5, lbl_8075B034@l
    li r4, 0x1
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_80505DD4_00000970
    mr r4, r30
    bl fn_800D1D3C
    lis r3, lbl_80792DC0@ha
    lis r4, fn_8020C4B0@ha
    addi r3, r3, lbl_80792DC0@l
    lis r5, fn_8020C07C@ha
    stw r3, 0x0(r31)
    addi r3, r31, 0x48
    addi r4, r4, fn_8020C4B0@l
    addi r5, r5, fn_8020C07C@l
    li r6, 0x8
    li r7, 0x139
    bl fn_806958E0
    addi r30, r31, 0xa10
    mr r3, r30
    bl fn_80473E74
    lis r4, lbl_8078FBB0@ha
    mr r3, r30
    addi r4, r4, lbl_8078FBB0@l
    stw r4, 0x0(r30)
    lwz r4, lbl_80887790
    lwz r12, 0x0(r30)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
lbl_fn_80505DD4_00000970:
    stw r31, lbl_8087F86C
lbl_fn_80505DD4_00000974:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    lwz r3, lbl_8087F86C
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80505EA4(void)
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
    beq lbl_fn_80505EA4_00000A24
    lis r4, lbl_80792DC0@ha
    li r31, 0x0
    addi r4, r4, lbl_80792DC0@l
    stw r4, 0x0(r3)
    lwz r3, lbl_8087F868
    stw r31, lbl_8087F86C
    cmpwi r3, 0x0
    beq lbl_fn_80505EA4_000009E0
    bl fn_80084C24
    stw r31, lbl_8087F868
lbl_fn_80505EA4_000009E0:
    addic. r3, r29, 0xa10
    beq lbl_fn_80505EA4_000009F0
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80505EA4_000009F0:
    lis r4, fn_8020C07C@ha
    addi r3, r29, 0x48
    addi r4, r4, fn_8020C07C@l
    li r5, 0x8
    li r6, 0x139
    bl fn_806959D8
    mr r3, r29
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r30, 0x0
    ble lbl_fn_80505EA4_00000A24
    mr r3, r29
    bl dtor_80084684
lbl_fn_80505EA4_00000A24:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80505F58(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    addi r3, r3, 0xa10
    bl fn_80473F50
    cmpwi r3, 0x0
    bne lbl_fn_80505F58_00000A98
    addi r3, r30, 0xa10
    bl fn_8047059C
    mr r31, r3
    addi r3, r30, 0xa10
    bl fn_80470580
    mr r4, r3
    mr r3, r30
    mr r5, r31
    bl fn_80505FC8
    li r3, 0x1
    b lbl_fn_80505F58_00000A9C
lbl_fn_80505F58_00000A98:
    li r3, 0x0
lbl_fn_80505F58_00000A9C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80505FC8(void)
{
    nofralloc
    stwu r1, -0xc80(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0xc84(r1)
    stmw r26, 0xc68(r1)
    mr r31, r3
    mr r28, r4
    mr r26, r5
    beq lbl_fn_80505FC8_00000CA4
    cmpwi r5, 0x0
    bne lbl_fn_80505FC8_00000AE4
    b lbl_fn_80505FC8_00000CA4
lbl_fn_80505FC8_00000AE4:
    lis r3, lbl_8077A090@ha
    li r0, 0x0
    addi r3, r3, lbl_8077A090@l
    stw r3, 0x8(r1)
    addi r3, r1, 0x18
    li r4, 0x0
    stw r0, 0xc(r1)
    li r5, 0x800
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0xc58(r1)
    bl memset
    addi r3, r1, 0xc18
    li r4, 0x0
    li r5, 0x40
    bl memset
    lis r3, lbl_8077A070@ha
    lis r4, lbl_807830B8@ha
    addi r3, r3, lbl_8077A070@l
    stw r3, 0x8(r1)
    addi r3, r1, 0x8
    addi r4, r4, lbl_807830B8@l
    bl fn_8005B9AC
    srwi. r30, r26, 1
    li r26, 0x0
    beq lbl_fn_80505FC8_00000B54
    addi r0, r28, 0x2
    b lbl_fn_80505FC8_00000B58
lbl_fn_80505FC8_00000B54:
    mr r0, r28
lbl_fn_80505FC8_00000B58:
    cmpwi r30, 0x0
    stw r0, 0xc(r1)
    mr r3, r30
    beq lbl_fn_80505FC8_00000B6C
    subi r3, r30, 0x1
lbl_fn_80505FC8_00000B6C:
    li r0, 0x0
    stw r3, 0x10(r1)
    stw r0, 0x14(r1)
    b lbl_fn_80505FC8_00000BB4
lbl_fn_80505FC8_00000B7C:
    addi r3, r1, 0x8
    bl fn_8005B710
    lhz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80505FC8_00000BB4
    cmplwi r0, 0x3b
    beq lbl_fn_80505FC8_00000BB4
    cmplwi r0, 0x23
    beq lbl_fn_80505FC8_00000BB4
    addi r3, r1, 0x8
    bl fn_8005B710
    bl fn_80686A48
    add r3, r3, r26
    addi r26, r3, 0x1
lbl_fn_80505FC8_00000BB4:
    addi r3, r1, 0x8
    bl fn_8005B8F8
    cmpwi r3, 0x0
    bne lbl_fn_80505FC8_00000B7C
    lis r5, lbl_8075B034@ha
    slwi r3, r26, 1
    addi r5, r5, lbl_8075B034@l
    li r4, 0x1
    mr r6, r5
    li r7, 0x0
    bl fn_800846FC
    cmpwi r30, 0x0
    stw r3, lbl_8087F868
    li r27, 0x0
    li r26, 0x0
    beq lbl_fn_80505FC8_00000BF8
    addi r28, r28, 0x2
lbl_fn_80505FC8_00000BF8:
    cmpwi r30, 0x0
    stw r28, 0xc(r1)
    beq lbl_fn_80505FC8_00000C08
    subi r30, r30, 0x1
lbl_fn_80505FC8_00000C08:
    li r0, 0x0
    stw r30, 0x10(r1)
    lis r30, lbl_80792DF8@ha
    stw r0, 0x14(r1)
    b lbl_fn_80505FC8_00000C94
lbl_fn_80505FC8_00000C1C:
    addi r3, r1, 0x8
    bl fn_8005B710
    lhz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80505FC8_00000C94
    cmplwi r0, 0x3b
    beq lbl_fn_80505FC8_00000C94
    cmplwi r0, 0x23
    beq lbl_fn_80505FC8_00000C94
    addi r3, r1, 0x8
    bl fn_8005B710
    lwz r0, lbl_8087F868
    mr r28, r3
    slwi r29, r27, 1
    addi r4, r30, lbl_80792DF8@l
    mr r5, r28
    add r3, r0, r29
    crclr 6
    bl fn_800DD3FC
    lwz r0, lbl_8087F868
    mr r3, r28
    add r0, r0, r29
    stw r0, 0x4c(r31)
    bl fn_80686A48
    addi r26, r26, 0x1
    add r3, r3, r27
    cmpwi r26, 0x139
    addi r31, r31, 0x8
    addi r27, r3, 0x1
    bge lbl_fn_80505FC8_00000CA4
lbl_fn_80505FC8_00000C94:
    addi r3, r1, 0x8
    bl fn_8005B8F8
    cmpwi r3, 0x0
    bne lbl_fn_80505FC8_00000C1C
lbl_fn_80505FC8_00000CA4:
    lmw r26, 0xc68(r1)
    lwz r0, 0xc84(r1)
    mtlr r0
    addi r1, r1, 0xc80
    blr
}

asm void fn_805061CC(void)
{
    nofralloc
    stwu r1, -0x760(r1)
    mflr r0
    lis r6, lbl_807772D0@ha
    stw r0, 0x764(r1)
    li r0, 0x0
    addi r6, r6, lbl_807772D0@l
    stmw r24, 0x740(r1)
    mr r28, r3
    mr r25, r4
    mr r24, r5
    addi r3, r1, 0x11c
    li r4, 0x0
    li r5, 0x400
    stw r6, 0x10c(r1)
    stw r0, 0x110(r1)
    stw r0, 0x114(r1)
    stw r0, 0x118(r1)
    stw r0, 0x73c(r1)
    bl memset
    addi r3, r1, 0x71c
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x10c(r1)
    mr r4, r25
    mr r5, r24
    addi r3, r1, 0x10c
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0x10c
    addi r4, r4, lbl_807772B0@l
    stw r4, 0x10c(r1)
    la r4, lbl_8087D708
    bl fn_8005B6E8
    lis r29, lbl_8075B038@ha
    li r31, 0xa
    li r27, 0x10
    addi r30, r29, lbl_8075B038@l
    b lbl_fn_805061CC_00000FF8
lbl_fn_805061CC_00000D5C:
    addi r3, r1, 0x10c
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    cmpwi r0, 0x3b
    beq lbl_fn_805061CC_00000FF8
    addi r4, r29, lbl_8075B038@l
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_805061CC_00000FF8
    addi r3, r1, 0x10c
    bl fn_8005B3CC
    mr r25, r3
    addi r4, r30, 0x6
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_805061CC_00000E40
    mr r25, r28
    addi r26, r28, 0x2084
    li r24, 0x0
    b lbl_fn_805061CC_00000E2C
lbl_fn_805061CC_00000DAC:
    addi r3, r1, 0x10c
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    cmpwi r0, 0x3b
    beq lbl_fn_805061CC_00000E2C
    addi r4, r30, 0xa
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_805061CC_00000FF8
    cmpwi r24, 0x6
    bge lbl_fn_805061CC_00000FF8
lbl_fn_805061CC_00000DD8:
    addi r3, r1, 0x10c
    bl fn_8005B3CC
    bl fn_80684600
    cmpwi r3, 0x0
    ble lbl_fn_805061CC_00000E20
    lwz r0, 0x2084(r25)
    cmplwi r0, 0x10
    bge lbl_fn_805061CC_00000E20
    lwz r0, 0x2084(r25)
    slwi r0, r0, 2
    add r0, r26, r0
    addic. r4, r0, 0x4
    beq lbl_fn_805061CC_00000E10
    stw r3, 0x0(r4)
lbl_fn_805061CC_00000E10:
    lwz r3, 0x2084(r25)
    addi r0, r3, 0x1
    stw r0, 0x2084(r25)
    b lbl_fn_805061CC_00000DD8
lbl_fn_805061CC_00000E20:
    addi r25, r25, 0x44
    addi r26, r26, 0x44
    addi r24, r24, 0x1
lbl_fn_805061CC_00000E2C:
    addi r3, r1, 0x10c
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_805061CC_00000DAC
    b lbl_fn_805061CC_00000FF8
lbl_fn_805061CC_00000E40:
    mr r3, r25
    addi r4, r30, 0xe
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_805061CC_00000EF8
    mr r26, r28
    addi r25, r28, 0x221c
    li r24, 0x0
    b lbl_fn_805061CC_00000EE4
lbl_fn_805061CC_00000E64:
    addi r3, r1, 0x10c
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    cmpwi r0, 0x3b
    beq lbl_fn_805061CC_00000EE4
    addi r4, r30, 0xa
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_805061CC_00000FF8
    cmpwi r24, 0x6
    bge lbl_fn_805061CC_00000FF8
lbl_fn_805061CC_00000E90:
    addi r3, r1, 0x10c
    bl fn_8005B3CC
    bl fn_80684600
    cmpwi r3, 0x0
    ble lbl_fn_805061CC_00000ED8
    lwz r0, 0x221c(r26)
    cmplwi r0, 0x10
    bge lbl_fn_805061CC_00000ED8
    lwz r0, 0x221c(r26)
    slwi r0, r0, 2
    add r0, r25, r0
    addic. r4, r0, 0x4
    beq lbl_fn_805061CC_00000EC8
    stw r3, 0x0(r4)
lbl_fn_805061CC_00000EC8:
    lwz r3, 0x221c(r26)
    addi r0, r3, 0x1
    stw r0, 0x221c(r26)
    b lbl_fn_805061CC_00000E90
lbl_fn_805061CC_00000ED8:
    addi r26, r26, 0x44
    addi r25, r25, 0x44
    addi r24, r24, 0x1
lbl_fn_805061CC_00000EE4:
    addi r3, r1, 0x10c
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_805061CC_00000E64
    b lbl_fn_805061CC_00000FF8
lbl_fn_805061CC_00000EF8:
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x104
    bl memset
    mr r3, r25
    bl fn_80684600
    stw r3, 0x8(r1)
    addi r26, r1, 0x8
    li r24, 0x0
    b lbl_fn_805061CC_00000F80
lbl_fn_805061CC_00000F20:
    addi r3, r1, 0x10c
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    cmpwi r0, 0x3b
    beq lbl_fn_805061CC_00000F80
    addi r4, r30, 0xa
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_805061CC_00000F90
    cmpwi r24, 0x20
    bge lbl_fn_805061CC_00000F90
    addi r3, r1, 0x10c
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x4(r26)
    addi r3, r1, 0x10c
    bl fn_8005B3CC
    bl fn_80684600
    cmpwi r3, 0x0
    stw r3, 0x84(r26)
    bgt lbl_fn_805061CC_00000F78
    stw r31, 0x84(r26)
lbl_fn_805061CC_00000F78:
    addi r26, r26, 0x4
    addi r24, r24, 0x1
lbl_fn_805061CC_00000F80:
    addi r3, r1, 0x10c
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_805061CC_00000F20
lbl_fn_805061CC_00000F90:
    lwz r0, 0x0(r28)
    mulli r0, r0, 0x104
    add r0, r28, r0
    addic. r6, r0, 0x4
    beq lbl_fn_805061CC_00000FEC
    lwz r0, 0x8(r1)
    mr r5, r6
    stw r0, 0x0(r6)
    addi r4, r1, 0x8
    mtctr r27
lbl_fn_805061CC_00000FB8:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_fn_805061CC_00000FB8
    addi r5, r6, 0x80
    addi r4, r1, 0x88
    mtctr r27
lbl_fn_805061CC_00000FD8:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_fn_805061CC_00000FD8
lbl_fn_805061CC_00000FEC:
    lwz r3, 0x0(r28)
    addi r0, r3, 0x1
    stw r0, 0x0(r28)
lbl_fn_805061CC_00000FF8:
    addi r3, r1, 0x10c
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_805061CC_00000D5C
    lmw r24, 0x740(r1)
    lwz r0, 0x764(r1)
    mtlr r0
    addi r1, r1, 0x760
    blr
}

asm void fn_80506530(void)
{
    nofralloc
    lwz r0, 0x0(r3)
    addi r3, r3, 0x4
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80506530_00001044
lbl_fn_80506530_00001030:
    lwz r0, 0x0(r3)
    cmpw r0, r4
    beqlr
    addi r3, r3, 0x104
    bdnz lbl_fn_80506530_00001030
lbl_fn_80506530_00001044:
    li r3, 0x0
    blr
}

asm void fn_80506560(void)
{
    nofralloc
    stwu r1, -0x1d0(r1)
    mflr r0
    cmplwi r4, 0x1
    stw r0, 0x1d4(r1)
    stmw r19, 0x19c(r1)
    mr r28, r3
    lwz r7, lbl_8087F610
    lwz r4, 0x514(r7)
    lwz r31, 0x48(r4)
    bgt lbl_fn_80506560_000012C8
    mulli r30, r6, 0x44
    lwz r0, 0x0(r3)
    addi r4, r3, 0x4
    li r29, 0x0
    add r5, r3, r30
    li r27, 0x0
    lwz r5, 0x2088(r5)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80506560_000010B4
lbl_fn_80506560_0000109C:
    lwz r0, 0x0(r4)
    cmpw r0, r5
    bne lbl_fn_80506560_000010AC
    b lbl_fn_80506560_000010B8
lbl_fn_80506560_000010AC:
    addi r4, r4, 0x104
    bdnz lbl_fn_80506560_0000109C
lbl_fn_80506560_000010B4:
    li r4, 0x0
lbl_fn_80506560_000010B8:
    add r20, r3, r30
    li r26, 0x0
    b lbl_fn_80506560_000011B0
lbl_fn_80506560_000010C4:
    stw r26, 0x4c(r1)
    addi r3, r1, 0x4c
    bl fn_80506C14
    addi r21, r1, 0x4c
    li r22, 0x0
    b lbl_fn_80506560_00001158
lbl_fn_80506560_000010DC:
    cmpwi r31, 0x0
    beq lbl_fn_80506560_00001150
    lwz r25, 0x4(r21)
    addis r3, r31, 0x1
    subi r3, r3, 0x61a0
    mr r4, r25
    bl fn_803BD49C
    mr r23, r3
    mr r3, r25
    bl fn_80206B9C
    cmpwi r3, 0x0
    beq lbl_fn_80506560_00001138
    addi r24, r25, 0x1
    addi r25, r25, 0x4
    b lbl_fn_80506560_00001130
lbl_fn_80506560_00001118:
    addis r3, r31, 0x1
    mr r4, r24
    subi r3, r3, 0x61a0
    bl fn_803BD49C
    add r23, r23, r3
    addi r24, r24, 0x1
lbl_fn_80506560_00001130:
    cmpw r24, r25
    ble lbl_fn_80506560_00001118
lbl_fn_80506560_00001138:
    cmpwi r23, 0x0
    bgt lbl_fn_80506560_00001150
    slwi r0, r22, 2
    addi r3, r1, 0x50
    lwzx r3, r3, r0
    b lbl_fn_80506560_000016EC
lbl_fn_80506560_00001150:
    addi r21, r21, 0x4
    addi r22, r22, 0x1
lbl_fn_80506560_00001158:
    lwz r0, 0x4c(r1)
    cmplw r22, r0
    blt lbl_fn_80506560_000010DC
    lwz r0, 0x2084(r20)
    addi r29, r29, 0x1
    addi r27, r27, 0x4
    cmplw r29, r0
    bge lbl_fn_80506560_000011B8
    lwz r0, 0x0(r28)
    add r3, r20, r27
    addi r4, r28, 0x4
    lwz r3, 0x2088(r3)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80506560_000011AC
lbl_fn_80506560_00001194:
    lwz r0, 0x0(r4)
    cmpw r0, r3
    bne lbl_fn_80506560_000011A4
    b lbl_fn_80506560_000011B0
lbl_fn_80506560_000011A4:
    addi r4, r4, 0x104
    bdnz lbl_fn_80506560_00001194
lbl_fn_80506560_000011AC:
    li r4, 0x0
lbl_fn_80506560_000011B0:
    cmpwi r4, 0x0
    bne lbl_fn_80506560_000010C4
lbl_fn_80506560_000011B8:
    add r5, r28, r30
    lwzu r3, 0x2084(r5)
    lwz r4, 0x0(r28)
    addi r20, r28, 0x4
    subi r0, r3, 0x1
    slwi r0, r0, 2
    add r3, r5, r0
    lwz r3, 0x4(r3)
    mtctr r4
    cmplwi r4, 0x0
    ble lbl_fn_80506560_000011FC
lbl_fn_80506560_000011E4:
    lwz r0, 0x0(r20)
    cmpw r0, r3
    bne lbl_fn_80506560_000011F4
    b lbl_fn_80506560_00001200
lbl_fn_80506560_000011F4:
    addi r20, r20, 0x104
    bdnz lbl_fn_80506560_000011E4
lbl_fn_80506560_000011FC:
    li r20, 0x0
lbl_fn_80506560_00001200:
    li r0, 0x4
    mr r3, r20
    li r21, 0x0
    li r4, 0x0
    mtctr r0
lbl_fn_80506560_00001214:
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    ble lbl_fn_80506560_00001224
    addi r21, r21, 0x1
lbl_fn_80506560_00001224:
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    ble lbl_fn_80506560_00001234
    addi r21, r21, 0x1
lbl_fn_80506560_00001234:
    lwz r0, 0xc(r3)
    cmpwi r0, 0x0
    ble lbl_fn_80506560_00001244
    addi r21, r21, 0x1
lbl_fn_80506560_00001244:
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    ble lbl_fn_80506560_00001254
    addi r21, r21, 0x1
lbl_fn_80506560_00001254:
    lwz r0, 0x14(r3)
    cmpwi r0, 0x0
    ble lbl_fn_80506560_00001264
    addi r21, r21, 0x1
lbl_fn_80506560_00001264:
    lwz r0, 0x18(r3)
    cmpwi r0, 0x0
    ble lbl_fn_80506560_00001274
    addi r21, r21, 0x1
lbl_fn_80506560_00001274:
    lwz r0, 0x1c(r3)
    cmpwi r0, 0x0
    ble lbl_fn_80506560_00001284
    addi r21, r21, 0x1
lbl_fn_80506560_00001284:
    lwz r0, 0x20(r3)
    cmpwi r0, 0x0
    ble lbl_fn_80506560_00001294
    addi r21, r21, 0x1
lbl_fn_80506560_00001294:
    addi r3, r3, 0x20
    addi r4, r4, 0x7
    bdnz lbl_fn_80506560_00001214
    cmpwi r21, 0x0
    ble lbl_fn_80506560_000016E8
    bl fn_80680CF8
    divw r0, r3, r21
    mullw r0, r0, r21
    subf r0, r0, r3
    slwi r0, r0, 2
    add r3, r20, r0
    lwz r3, 0x4(r3)
    b lbl_fn_80506560_000016EC
lbl_fn_80506560_000012C8:
    cmpwi r6, 0x0
    bne lbl_fn_80506560_000016E8
    mulli r30, r5, 0x44
    lwz r0, 0x0(r3)
    addi r4, r3, 0x4
    li r29, 0x0
    add r5, r3, r30
    li r27, 0x0
    lwz r5, 0x2220(r5)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80506560_00001310
lbl_fn_80506560_000012F8:
    lwz r0, 0x0(r4)
    cmpw r0, r5
    bne lbl_fn_80506560_00001308
    b lbl_fn_80506560_00001314
lbl_fn_80506560_00001308:
    addi r4, r4, 0x104
    bdnz lbl_fn_80506560_000012F8
lbl_fn_80506560_00001310:
    li r4, 0x0
lbl_fn_80506560_00001314:
    add r21, r3, r30
    li r25, 0x0
    b lbl_fn_80506560_00001410
lbl_fn_80506560_00001320:
    stw r25, 0x8(r1)
    addi r3, r1, 0x8
    bl fn_80506C14
    addi r20, r1, 0x8
    li r19, 0x0
    b lbl_fn_80506560_000013B4
lbl_fn_80506560_00001338:
    cmpwi r31, 0x0
    beq lbl_fn_80506560_000013AC
    lwz r23, 0x4(r20)
    addis r3, r31, 0x1
    subi r3, r3, 0x61a0
    mr r4, r23
    bl fn_803BD49C
    mr r22, r3
    mr r3, r23
    bl fn_80206B9C
    cmpwi r3, 0x0
    beq lbl_fn_80506560_00001394
    addi r24, r23, 0x1
    addi r26, r23, 0x4
    b lbl_fn_80506560_0000138C
lbl_fn_80506560_00001374:
    addis r3, r31, 0x1
    mr r4, r24
    subi r3, r3, 0x61a0
    bl fn_803BD49C
    add r22, r22, r3
    addi r24, r24, 0x1
lbl_fn_80506560_0000138C:
    cmpw r24, r26
    ble lbl_fn_80506560_00001374
lbl_fn_80506560_00001394:
    cmpwi r22, 0x0
    bgt lbl_fn_80506560_000013AC
    slwi r0, r19, 2
    addi r3, r1, 0xc
    lwzx r3, r3, r0
    b lbl_fn_80506560_000016EC
lbl_fn_80506560_000013AC:
    addi r20, r20, 0x4
    addi r19, r19, 0x1
lbl_fn_80506560_000013B4:
    lwz r0, 0x8(r1)
    cmplw r19, r0
    blt lbl_fn_80506560_00001338
    lwz r3, 0x221c(r21)
    addi r29, r29, 0x1
    addi r27, r27, 0x4
    subi r0, r3, 0x1
    cmplw r29, r0
    bge lbl_fn_80506560_00001418
    lwz r0, 0x0(r28)
    add r3, r21, r27
    addi r4, r28, 0x4
    lwz r3, 0x2220(r3)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80506560_0000140C
lbl_fn_80506560_000013F4:
    lwz r0, 0x0(r4)
    cmpw r0, r3
    bne lbl_fn_80506560_00001404
    b lbl_fn_80506560_00001410
lbl_fn_80506560_00001404:
    addi r4, r4, 0x104
    bdnz lbl_fn_80506560_000013F4
lbl_fn_80506560_0000140C:
    li r4, 0x0
lbl_fn_80506560_00001410:
    cmpwi r4, 0x0
    bne lbl_fn_80506560_00001320
lbl_fn_80506560_00001418:
    add r6, r28, r30
    lwzu r3, 0x221c(r6)
    li r0, 0x0
    stw r0, 0x90(r1)
    subi r0, r3, 0x1
    lwz r4, 0x0(r28)
    slwi r0, r0, 2
    addi r5, r28, 0x4
    add r3, r6, r0
    lwz r3, 0x4(r3)
    mtctr r4
    cmplwi r4, 0x0
    ble lbl_fn_80506560_00001464
lbl_fn_80506560_0000144C:
    lwz r0, 0x0(r5)
    cmpw r0, r3
    bne lbl_fn_80506560_0000145C
    b lbl_fn_80506560_00001468
lbl_fn_80506560_0000145C:
    addi r5, r5, 0x104
    bdnz lbl_fn_80506560_0000144C
lbl_fn_80506560_00001464:
    li r5, 0x0
lbl_fn_80506560_00001468:
    li r6, 0x0
    li r0, 0x3
lbl_fn_80506560_00001470:
    lwz r7, 0x4(r5)
    cmpwi r7, 0x0
    ble lbl_fn_80506560_000014F0
    li r8, 0x0
    mtctr r0
lbl_fn_80506560_00001484:
    lwz r3, 0x90(r1)
    addi r4, r1, 0x94
    slwi r3, r3, 2
    add. r4, r4, r3
    beq lbl_fn_80506560_0000149C
    stw r7, 0x0(r4)
lbl_fn_80506560_0000149C:
    lwz r3, 0x90(r1)
    addi r4, r1, 0x94
    addi r3, r3, 0x1
    stw r3, 0x90(r1)
    slwi r3, r3, 2
    add. r4, r4, r3
    beq lbl_fn_80506560_000014BC
    stw r7, 0x0(r4)
lbl_fn_80506560_000014BC:
    lwz r3, 0x90(r1)
    addi r4, r1, 0x94
    addi r3, r3, 0x1
    stw r3, 0x90(r1)
    slwi r3, r3, 2
    add. r4, r4, r3
    beq lbl_fn_80506560_000014DC
    stw r7, 0x0(r4)
lbl_fn_80506560_000014DC:
    lwz r3, 0x90(r1)
    addi r8, r8, 0x2
    addi r3, r3, 0x1
    stw r3, 0x90(r1)
    bdnz lbl_fn_80506560_00001484
lbl_fn_80506560_000014F0:
    addi r6, r6, 0x1
    addi r5, r5, 0x4
    cmpwi r6, 0x20
    blt lbl_fn_80506560_00001470
    mr r29, r28
    li r19, 0x1
    li r20, 0x0
lbl_fn_80506560_0000150C:
    lwz r0, 0x0(r28)
    addi r30, r28, 0x4
    lwz r3, 0x2220(r29)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80506560_0000153C
lbl_fn_80506560_00001524:
    lwz r0, 0x0(r30)
    cmpw r0, r3
    bne lbl_fn_80506560_00001534
    b lbl_fn_80506560_00001540
lbl_fn_80506560_00001534:
    addi r30, r30, 0x104
    bdnz lbl_fn_80506560_00001524
lbl_fn_80506560_0000153C:
    li r30, 0x0
lbl_fn_80506560_00001540:
    li r26, 0x0
    li r25, 0x0
lbl_fn_80506560_00001548:
    lwz r24, 0x4(r30)
    cmpwi r24, 0x0
    ble lbl_fn_80506560_000015B0
    addis r3, r31, 0x1
    mr r4, r24
    subi r3, r3, 0x61a0
    bl fn_803BD49C
    mr r22, r3
    mr r3, r24
    bl fn_80206B9C
    cmpwi r3, 0x0
    beq lbl_fn_80506560_000015A4
    addi r23, r24, 0x1
    addi r27, r24, 0x6
    b lbl_fn_80506560_0000159C
lbl_fn_80506560_00001584:
    addis r3, r31, 0x1
    mr r4, r23
    subi r3, r3, 0x61a0
    bl fn_803BD49C
    add r22, r22, r3
    addi r23, r23, 0x1
lbl_fn_80506560_0000159C:
    cmpw r23, r27
    ble lbl_fn_80506560_00001584
lbl_fn_80506560_000015A4:
    cmpwi r22, 0x0
    bgt lbl_fn_80506560_000015B0
    addi r26, r26, 0x1
lbl_fn_80506560_000015B0:
    addi r25, r25, 0x1
    addi r30, r30, 0x4
    cmpwi r25, 0x20
    blt lbl_fn_80506560_00001548
    cmpwi r26, 0x0
    ble lbl_fn_80506560_000015D0
    li r19, 0x0
    b lbl_fn_80506560_000015E0
lbl_fn_80506560_000015D0:
    addi r20, r20, 0x1
    addi r29, r29, 0x44
    cmpwi r20, 0x5
    blt lbl_fn_80506560_0000150C
lbl_fn_80506560_000015E0:
    cmpwi r19, 0x0
    beq lbl_fn_80506560_000016B8
    lwz r0, 0x0(r28)
    addi r24, r28, 0x4
    lwz r3, 0x2374(r28)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80506560_00001618
lbl_fn_80506560_00001600:
    lwz r0, 0x0(r24)
    cmpw r0, r3
    bne lbl_fn_80506560_00001610
    b lbl_fn_80506560_0000161C
lbl_fn_80506560_00001610:
    addi r24, r24, 0x104
    bdnz lbl_fn_80506560_00001600
lbl_fn_80506560_00001618:
    li r24, 0x0
lbl_fn_80506560_0000161C:
    li r19, 0x0
lbl_fn_80506560_00001620:
    lwz r20, 0x4(r24)
    cmpwi r20, 0x0
    ble lbl_fn_80506560_000016A8
    addis r3, r31, 0x1
    mr r4, r20
    subi r3, r3, 0x61a0
    bl fn_803BD49C
    mr r23, r3
    mr r3, r20
    bl fn_80206B9C
    cmpwi r3, 0x0
    beq lbl_fn_80506560_0000167C
    addi r22, r20, 0x1
    addi r27, r20, 0x4
    b lbl_fn_80506560_00001674
lbl_fn_80506560_0000165C:
    addis r3, r31, 0x1
    mr r4, r22
    subi r3, r3, 0x61a0
    bl fn_803BD49C
    add r23, r23, r3
    addi r22, r22, 0x1
lbl_fn_80506560_00001674:
    cmpw r22, r27
    ble lbl_fn_80506560_0000165C
lbl_fn_80506560_0000167C:
    cmpwi r23, 0x0
    bgt lbl_fn_80506560_000016A8
    lwz r0, 0x90(r1)
    addi r3, r1, 0x94
    slwi r0, r0, 2
    add. r3, r3, r0
    beq lbl_fn_80506560_0000169C
    stw r20, 0x0(r3)
lbl_fn_80506560_0000169C:
    lwz r3, 0x90(r1)
    addi r0, r3, 0x1
    stw r0, 0x90(r1)
lbl_fn_80506560_000016A8:
    addi r19, r19, 0x1
    addi r24, r24, 0x4
    cmpwi r19, 0x20
    blt lbl_fn_80506560_00001620
lbl_fn_80506560_000016B8:
    lwz r0, 0x90(r1)
    lwz r20, 0x90(r1)
    cmpwi r0, 0x0
    beq lbl_fn_80506560_000016E8
    bl fn_80680CF8
    divwu r0, r3, r20
    addi r4, r1, 0x94
    mullw r0, r0, r20
    subf r0, r0, r3
    slwi r0, r0, 2
    lwzx r3, r4, r0
    b lbl_fn_80506560_000016EC
lbl_fn_80506560_000016E8:
    li r3, 0x0
lbl_fn_80506560_000016EC:
    lmw r19, 0x19c(r1)
    lwz r0, 0x1d4(r1)
    mtlr r0
    addi r1, r1, 0x1d0
    blr
}

asm void fn_80506C14(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    li r5, 0x0
    li r7, 0x0
    stw r0, 0x74(r1)
    li r0, 0x10
    stmw r27, 0x5c(r1)
    mr r28, r3
    stw r5, 0x8(r1)
    mtctr r0
lbl_fn_80506C14_00001728:
    lwz r5, 0x4(r4)
    cmpwi r5, 0x0
    ble lbl_fn_80506C14_000017AC
    lwz r0, 0x8(r1)
    cmplwi r0, 0x10
    bge lbl_fn_80506C14_00001764
    lwz r0, 0x8(r1)
    addi r6, r1, 0xc
    slwi r0, r0, 2
    add. r6, r6, r0
    beq lbl_fn_80506C14_00001758
    stw r5, 0x0(r6)
lbl_fn_80506C14_00001758:
    lwz r5, 0x8(r1)
    addi r0, r5, 0x1
    stw r0, 0x8(r1)
lbl_fn_80506C14_00001764:
    lwz r5, 0x8(r4)
    cmpwi r5, 0x0
    ble lbl_fn_80506C14_000017AC
    lwz r0, 0x8(r1)
    cmplwi r0, 0x10
    bge lbl_fn_80506C14_000017A0
    lwz r0, 0x8(r1)
    addi r6, r1, 0xc
    slwi r0, r0, 2
    add. r6, r6, r0
    beq lbl_fn_80506C14_00001794
    stw r5, 0x0(r6)
lbl_fn_80506C14_00001794:
    lwz r5, 0x8(r1)
    addi r0, r5, 0x1
    stw r0, 0x8(r1)
lbl_fn_80506C14_000017A0:
    addi r4, r4, 0x8
    addi r7, r7, 0x1
    bdnz lbl_fn_80506C14_00001728
lbl_fn_80506C14_000017AC:
    lwz r0, 0x8(r1)
    cmpwi r0, 0x0
    bne lbl_fn_80506C14_000017C0
    li r3, 0x0
    b lbl_fn_80506C14_00001870
lbl_fn_80506C14_000017C0:
    li r0, 0x0
    stw r0, 0x0(r3)
    addi r31, r1, 0xc
    li r29, 0x0
    lwz r30, 0x8(r1)
    b lbl_fn_80506C14_00001864
lbl_fn_80506C14_000017D8:
    lwz r27, 0x8(r1)
    bl fn_80680CF8
    divwu r4, r3, r27
    lwz r0, 0x0(r28)
    cmplwi r0, 0x10
    mullw r0, r4, r27
    subf r5, r0, r3
    bge lbl_fn_80506C14_00001824
    lwz r0, 0x0(r28)
    slwi r3, r5, 2
    slwi r0, r0, 2
    add r0, r28, r0
    addic. r4, r0, 0x4
    beq lbl_fn_80506C14_00001818
    lwzx r0, r31, r3
    stw r0, 0x0(r4)
lbl_fn_80506C14_00001818:
    lwz r3, 0x0(r28)
    addi r0, r3, 0x1
    stw r0, 0x0(r28)
lbl_fn_80506C14_00001824:
    slwi r0, r5, 2
    addi r5, r1, 0x8
    srawi r0, r0, 2
    addze r4, r0
    slwi r0, r4, 2
    add r5, r5, r0
    b lbl_fn_80506C14_0000184C
lbl_fn_80506C14_00001840:
    lwz r0, 0x8(r5)
    addi r4, r4, 0x1
    stwu r0, 0x4(r5)
lbl_fn_80506C14_0000184C:
    lwz r3, 0x8(r1)
    subi r0, r3, 0x1
    cmplw r4, r0
    blt lbl_fn_80506C14_00001840
    stw r0, 0x8(r1)
    addi r29, r29, 0x1
lbl_fn_80506C14_00001864:
    cmplw r29, r30
    blt lbl_fn_80506C14_000017D8
    li r3, 0x1
lbl_fn_80506C14_00001870:
    lmw r27, 0x5c(r1)
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_80506D98(void)
{
    nofralloc
    stwu r1, -0xdc0(r1)
    mflr r0
    lis r6, lbl_8077A090@ha
    stw r0, 0xdc4(r1)
    li r0, 0x0
    addi r6, r6, lbl_8077A090@l
    stmw r19, 0xd8c(r1)
    mr r19, r3
    mr r22, r4
    mr r21, r5
    addi r20, r1, 0x128
    addi r3, r1, 0x138
    li r4, 0x0
    li r5, 0x800
    stw r6, 0x128(r1)
    stw r0, 0x12c(r1)
    stw r0, 0x130(r1)
    stw r0, 0x134(r1)
    stw r0, 0xd78(r1)
    bl memset
    addi r3, r1, 0xd38
    li r4, 0x0
    li r5, 0x40
    bl memset
    srwi. r21, r21, 1
    mr r5, r21
    beq lbl_fn_80506D98_000018F4
    subi r5, r21, 0x1
lbl_fn_80506D98_000018F4:
    cmpwi r21, 0x0
    mr r3, r20
    beq lbl_fn_80506D98_00001908
    addi r4, r22, 0x2
    b lbl_fn_80506D98_0000190C
lbl_fn_80506D98_00001908:
    mr r4, r22
lbl_fn_80506D98_0000190C:
    lwz r12, 0x0(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r3, lbl_8077A070@ha
    lis r4, lbl_8077A0A8@ha
    addi r3, r3, lbl_8077A070@l
    stw r3, 0x128(r1)
    mr r3, r20
    addi r4, r4, lbl_8077A0A8@l
    bl fn_8005B9AC
    li r20, 0x0
    b lbl_fn_80506D98_0000198C
lbl_fn_80506D98_00001940:
    addi r3, r1, 0x128
    bl fn_8005B710
    lhz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80506D98_0000198C
    addi r3, r1, 0x128
    bl fn_8005B710
    addi r3, r1, 0x128
    bl fn_8005B710
    bl fn_800DC1DC
    subic. r0, r3, 0x1
    blt lbl_fn_80506D98_0000198C
    cmpwi r0, 0x15
    bge lbl_fn_80506D98_0000198C
    addi r3, r1, 0x128
    bl fn_8005B710
    bl fn_80686A48
    add r3, r3, r20
    addi r20, r3, 0x1
lbl_fn_80506D98_0000198C:
    addi r3, r1, 0x128
    bl fn_8005B8F8
    cmpwi r3, 0x0
    bne lbl_fn_80506D98_00001940
    lis r5, lbl_8075B038@ha
    slwi r3, r20, 1
    addi r5, r5, lbl_8075B038@l
    li r4, 0x1
    addi r5, r5, 0x13
    li r7, 0x0
    mr r6, r5
    bl fn_800846FC
    cmpwi r21, 0x0
    stw r3, 0xfc(r19)
    beq lbl_fn_80506D98_000019CC
    addi r22, r22, 0x2
lbl_fn_80506D98_000019CC:
    cmpwi r21, 0x0
    stw r22, 0x12c(r1)
    beq lbl_fn_80506D98_000019DC
    subi r21, r21, 0x1
lbl_fn_80506D98_000019DC:
    li r23, 0x0
    lis r24, lbl_80782FF0@ha
    stw r21, 0x130(r1)
    addi r24, r24, lbl_80782FF0@l
    li r20, 0x0
    li r26, 0x1
    stw r23, 0x134(r1)
    lis r29, fn_805072C8@ha
    lis r30, fn_804D147C@ha
    lis r25, lbl_80792E00@ha
    li r31, 0x8
    b lbl_fn_80506D98_00001D90
lbl_fn_80506D98_00001A0C:
    addi r3, r1, 0x128
    bl fn_8005B710
    lhz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80506D98_00001D90
    stw r24, 0x1c(r1)
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x1c
    stw r23, 0x20(r1)
    bl memset
    lwz r21, lbl_8087EEC8
    addi r3, r1, 0x128
    bl fn_8005B710
    mr r5, r3
    mr r3, r21
    addi r4, r1, 0x28
    li r6, 0x100
    bl fn_8006F420
    lwz r3, lbl_8087EE90
    addi r4, r1, 0x28
    bl fn_80049B74
    stw r3, 0x8(r1)
    addi r3, r1, 0x128
    bl fn_8005B710
    bl fn_800DC1DC
    subic. r21, r3, 0x1
    lwz r0, 0x10(r1)
    rlwimi r0, r21, 24, 0, 7
    stw r0, 0x10(r1)
    blt lbl_fn_80506D98_00001D90
    cmpwi r21, 0x15
    bge lbl_fn_80506D98_00001D90
    addi r3, r1, 0x128
    bl fn_8005B710
    lwz r0, 0xfc(r19)
    mr r27, r3
    slwi r22, r20, 1
    addi r4, r25, lbl_80792E00@l
    mr r5, r27
    add r3, r0, r22
    crclr 6
    bl fn_800DD3FC
    lwz r0, 0xfc(r19)
    mr r3, r27
    add r0, r0, r22
    stw r0, 0x20(r1)
    bl fn_80686A48
    lwz r0, 0xc(r1)
    add r3, r3, r20
    addi r20, r3, 0x1
    li r22, 0x0
    clrlwi r0, r0, 24
    stw r0, 0xc(r1)
lbl_fn_80506D98_00001AE4:
    addi r3, r1, 0x128
    bl fn_8005B710
    lhz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80506D98_00001B10
    lwz r4, 0xc(r1)
    slw r0, r26, r22
    srwi r3, r4, 8
    or r0, r3, r0
    rlwimi r4, r0, 8, 0, 23
    stw r4, 0xc(r1)
lbl_fn_80506D98_00001B10:
    addi r22, r22, 0x1
    cmpwi r22, 0x14
    blt lbl_fn_80506D98_00001AE4
    addi r3, r1, 0x128
    bl fn_8005B710
    bl fn_800DC1DC
    lwz r0, 0xc(r1)
    rlwimi r0, r3, 0, 24, 31
    stw r0, 0xc(r1)
    addi r3, r1, 0x128
    bl fn_8005B710
    bl fn_80209184
    stw r3, 0x18(r1)
    addi r3, r1, 0x28
    bl fn_8021F3E8
    mulli r21, r21, 0xc
    sth r3, 0x14(r1)
    add r27, r19, r21
    lwz r0, 0x8(r27)
    cmpwi r0, 0x0
    beq lbl_fn_80506D98_00001B70
    lwz r0, 0x4(r27)
    cmpwi r0, 0x0
    bne lbl_fn_80506D98_00001C50
lbl_fn_80506D98_00001B70:
    add r28, r19, r21
    lwz r0, 0x4(r28)
    cmplwi r0, 0x8
    bgt lbl_fn_80506D98_00001D38
    li r3, 0xf0
    li r4, 0x0
    la r5, lbl_8087E464
    la r6, lbl_8087E460
    li r7, 0x0
    bl fn_800846FC
    addi r4, r29, fn_805072C8@l
    addi r5, r30, fn_804D147C@l
    li r6, 0x1c
    li r7, 0x8
    bl fn_80695720
    lwz r0, 0x8(r27)
    mr r22, r3
    cmpwi r0, 0x0
    beq lbl_fn_80506D98_00001C44
    lwzx r3, r19, r21
    li r0, 0x8
    cmplwi r3, 0x8
    bge lbl_fn_80506D98_00001BD0
    mr r0, r3
lbl_fn_80506D98_00001BD0:
    mr r6, r22
    li r5, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80506D98_00001C38
lbl_fn_80506D98_00001BE4:
    lwz r0, 0x8(r27)
    add r4, r0, r5
    lwzx r0, r5, r0
    stw r0, 0x0(r6)
    lwz r0, 0x8(r4)
    lwz r3, 0x4(r4)
    stw r3, 0x4(r6)
    stw r0, 0x8(r6)
    lha r0, 0xc(r4)
    sth r0, 0xc(r6)
    lwz r0, 0x10(r4)
    stw r0, 0x10(r6)
    lwz r0, 0x18(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80506D98_00001C24
    b lbl_fn_80506D98_00001C28
lbl_fn_80506D98_00001C24:
    la r0, lbl_808813D0
lbl_fn_80506D98_00001C28:
    stw r0, 0x18(r6)
    addi r5, r5, 0x1c
    addi r6, r6, 0x1c
    bdnz lbl_fn_80506D98_00001BE4
lbl_fn_80506D98_00001C38:
    lwz r3, 0x8(r27)
    addi r4, r30, fn_804D147C@l
    bl fn_80695A50
lbl_fn_80506D98_00001C44:
    stw r22, 0x8(r27)
    stw r31, 0x4(r28)
    b lbl_fn_80506D98_00001D38
lbl_fn_80506D98_00001C50:
    lwz r3, 0x0(r27)
    cmplw r3, r0
    blt lbl_fn_80506D98_00001D38
    slwi r28, r3, 1
    cmplw r0, r28
    bgt lbl_fn_80506D98_00001D38
    mulli r3, r28, 0x1c
    li r4, 0x0
    la r5, lbl_8087E464
    la r6, lbl_8087E460
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    mr r7, r28
    addi r4, r29, fn_805072C8@l
    addi r5, r30, fn_804D147C@l
    li r6, 0x1c
    bl fn_80695720
    lwz r0, 0x8(r27)
    mr r22, r3
    cmpwi r0, 0x0
    beq lbl_fn_80506D98_00001D30
    lwz r3, 0x0(r27)
    mr r0, r28
    cmplw r28, r3
    ble lbl_fn_80506D98_00001CBC
    mr r0, r3
lbl_fn_80506D98_00001CBC:
    mr r6, r22
    li r5, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80506D98_00001D24
lbl_fn_80506D98_00001CD0:
    lwz r0, 0x8(r27)
    add r4, r0, r5
    lwzx r0, r5, r0
    stw r0, 0x0(r6)
    lwz r0, 0x8(r4)
    lwz r3, 0x4(r4)
    stw r3, 0x4(r6)
    stw r0, 0x8(r6)
    lha r0, 0xc(r4)
    sth r0, 0xc(r6)
    lwz r0, 0x10(r4)
    stw r0, 0x10(r6)
    lwz r0, 0x18(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80506D98_00001D10
    b lbl_fn_80506D98_00001D14
lbl_fn_80506D98_00001D10:
    la r0, lbl_808813D0
lbl_fn_80506D98_00001D14:
    stw r0, 0x18(r6)
    addi r5, r5, 0x1c
    addi r6, r6, 0x1c
    bdnz lbl_fn_80506D98_00001CD0
lbl_fn_80506D98_00001D24:
    lwz r3, 0x8(r27)
    addi r4, r30, fn_804D147C@l
    bl fn_80695A50
lbl_fn_80506D98_00001D30:
    stw r22, 0x8(r27)
    stw r28, 0x4(r27)
lbl_fn_80506D98_00001D38:
    lwzx r0, r19, r21
    lwz r4, 0x8(r27)
    mulli r3, r0, 0x1c
    lwz r0, 0x8(r1)
    stwux r0, r4, r3
    lwz r0, 0x10(r1)
    lwz r3, 0xc(r1)
    stw r3, 0x4(r4)
    stw r0, 0x8(r4)
    lha r0, 0x14(r1)
    sth r0, 0xc(r4)
    lwz r0, 0x18(r1)
    stw r0, 0x10(r4)
    lwz r0, 0x20(r1)
    cmpwi r0, 0x0
    beq lbl_fn_80506D98_00001D7C
    b lbl_fn_80506D98_00001D80
lbl_fn_80506D98_00001D7C:
    la r0, lbl_808813D0
lbl_fn_80506D98_00001D80:
    stw r0, 0x18(r4)
    lwzx r3, r19, r21
    addi r0, r3, 0x1
    stwx r0, r19, r21
lbl_fn_80506D98_00001D90:
    addi r3, r1, 0x128
    bl fn_8005B8F8
    cmpwi r3, 0x0
    bne lbl_fn_80506D98_00001A0C
    lmw r19, 0xd8c(r1)
    lwz r0, 0xdc4(r1)
    mtlr r0
    addi r1, r1, 0xdc0
    blr
}
