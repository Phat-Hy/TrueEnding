#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_20(void);
extern void _savegpr_20(void);
extern void dtor_80084684(void);
extern void fn_8000D124(void);
extern void fn_8000D3A4(void);
extern void fn_8001047C(void);
extern void fn_80011034(void);
extern void fn_80011220(void);
extern void fn_80013338(void);
extern void fn_80013410(void);
extern void fn_80057A64(void);
extern void fn_8005B3CC(void);
extern void fn_8005B5F8(void);
extern void fn_8005B6E8(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800D246C(void);
extern void fn_800DC288(void);
extern void fn_800EAECC(void);
extern void fn_800F72CC(void);
extern void fn_800F7FD8(void);
extern void fn_800F7FF0(void);
extern void fn_800F8548(void);
extern void fn_801162A0(void);
extern void fn_8011FC10(void);
extern void fn_801255C8(void);
extern void fn_80126214(void);
extern void fn_80128930(void);
extern void fn_8012F440(void);
extern void fn_8013310C(void);
extern void fn_8013655C(void);
extern void fn_80139550(void);
extern void fn_80139F58(void);
extern void fn_8013A194(void);
extern void fn_8013C38C(void);
extern void fn_8013C3F4(void);
extern void fn_8013C478(void);
extern void fn_8013C480(void);
extern void fn_8013CB68(void);
extern void fn_8014052C(void);
extern void fn_80140588(void);
extern void fn_80145334(void);
extern void fn_80149A30(void);
extern void fn_8014C540(void);
extern void fn_8016E970(void);
extern void fn_80219E6C(void);
extern void fn_80232B7C(void);
extern void fn_8023781C(void);
extern void fn_80237874(void);
extern void fn_80239D58(void);
extern void fn_80239DAC(void);
extern void fn_8023A8B4(void);
extern void fn_802F0964(void);
extern void fn_8030FEAC(void);
extern void fn_8030FFF0(void);
extern void fn_80310084(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473E8C(void);
extern void fn_80473F50(void);
extern void fn_805A3D00(void);
extern void fn_805A4258(void);
extern void fn_805A4F20(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_80680CF8(void);
extern void fn_80682428(void);
extern void fn_806827C4(void);
extern void fn_80684600(void);

/* External data declarations */
extern u8 jumptable_80788200[];
extern u8 lbl_80749090[];
extern u8 lbl_807490AC[];
extern u8 lbl_807772B0[];
extern u8 lbl_807772D0[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087D708;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F408;
extern u32 lbl_8087F8A0;
extern u32 lbl_80884C44;
extern u32 lbl_80884C5C;
extern u32 lbl_80884C60;
extern u32 lbl_80884C64;
extern u32 lbl_80884C68;
extern u32 lbl_80884C6C;
extern u32 lbl_80884C70;
extern u32 lbl_80884C74;
extern u32 lbl_80884C78;
extern u32 lbl_80884C7C;
extern u32 lbl_80884C80;
extern u32 lbl_80884C84;
extern u32 lbl_80884C88;
extern u32 lbl_80884C8C;
extern u32 lbl_80884C90;
extern u32 lbl_80884C94;
extern u32 lbl_80884C98;

/* Function declarations */
void fn_8030DC9C(void);
void fn_8030DD40(void);
void fn_8030DEB0(void);
void fn_8030E160(void);
void fn_8030E258(void);
void fn_8030E26C(void);
void fn_8030E36C(void);
void fn_8030E490(void);
void fn_8030E4AC(void);
void fn_8030E530(void);
void fn_8030E5C8(void);
void fn_8030E6C0(void);
void fn_8030E710(void);
void fn_8030EA28(void);
void fn_8030F380(void);
void fn_8030F564(void);

asm void fn_8030DC9C(void)
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
    beq lbl_fn_8030DC9C_00000084
    addic. r31, r3, 0x158c
    beq lbl_fn_8030DC9C_00000048
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_8030DC9C_00000048
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8030DC9C_00000048:
    addic. r31, r29, 0x1580
    beq lbl_fn_8030DC9C_00000068
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_8030DC9C_00000068
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8030DC9C_00000068:
    mr r3, r29
    li r4, 0x0
    bl fn_805A3D00
    cmpwi r30, 0x0
    ble lbl_fn_8030DC9C_00000084
    mr r3, r29
    bl dtor_80084684
lbl_fn_8030DC9C_00000084:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8030DD40(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_8013655C
    cmpwi r3, 0x0
    beq lbl_fn_8030DD40_000000D0
    li r3, 0x0
    b lbl_fn_8030DD40_000001FC
lbl_fn_8030DD40_000000D0:
    lwz r3, 0x1438(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8030DD40_000000F4
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_8030DD40_000000F4
    li r3, 0x0
    b lbl_fn_8030DD40_000001FC
lbl_fn_8030DD40_000000F4:
    addi r3, r30, 0x14b4
    bl fn_80473F50
    cmpwi r3, 0x0
    beq lbl_fn_8030DD40_0000010C
    li r3, 0x0
    b lbl_fn_8030DD40_000001FC
lbl_fn_8030DD40_0000010C:
    addi r3, r30, 0x1580
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_8030DD40_0000012C
    addi r3, r30, 0x158c
    bl fn_80237874
    cmpwi r3, 0x0
    beq lbl_fn_8030DD40_00000134
lbl_fn_8030DD40_0000012C:
    li r3, 0x0
    b lbl_fn_8030DD40_000001FC
lbl_fn_8030DD40_00000134:
    addi r3, r30, 0x14b4
    bl fn_8047059C
    mr r31, r3
    addi r3, r30, 0x14b4
    bl fn_80470580
    mr r4, r3
    mr r3, r30
    mr r5, r31
    bl fn_8030DEB0
    lwz r0, 0x7ec(r30)
    lwz r3, 0x1438(r30)
    ori r0, r0, 0x100
    oris r0, r0, 0x1
    cmpwi r3, 0x0
    ori r0, r0, 0xc218
    oris r0, r0, 0x280
    stw r0, 0x7ec(r30)
    beq lbl_fn_8030DD40_00000194
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x1438(r30)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_8030DD40_00000194:
    lwz r3, 0x14b0(r30)
    lis r4, lbl_807490AC@ha
    addi r4, r4, lbl_807490AC@l
    addi r3, r3, 0x2c
    addi r4, r4, 0x74
    bl fn_806827C4
    cmpwi r3, 0x0
    beq lbl_fn_8030DD40_000001E4
    lwz r31, lbl_8087F408
    cmpwi r31, 0x0
    beq lbl_fn_8030DD40_000001E4
    addi r3, r3, 0x7
    bl fn_80684600
    mr r4, r3
    mr r3, r31
    bl fn_8011FC10
    lwz r0, 0x146c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_8030DD40_000001E4
    stw r3, 0x14d4(r30)
lbl_fn_8030DD40_000001E4:
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0xfc(r12)
    mtctr r12
    bctrl
    li r3, 0x1
lbl_fn_8030DD40_000001FC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8030DEB0(void)
{
    nofralloc
    stwu r1, -0x650(r1)
    mflr r0
    lis r6, lbl_807772D0@ha
    stw r0, 0x654(r1)
    li r0, 0x0
    addi r6, r6, lbl_807772D0@l
    stw r31, 0x64c(r1)
    mr r31, r4
    li r4, 0x0
    stw r30, 0x648(r1)
    mr r30, r5
    li r5, 0x400
    stw r29, 0x644(r1)
    mr r29, r3
    addi r3, r1, 0x18
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
    mr r4, r31
    mr r5, r30
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
    lis r31, lbl_807490AC@ha
    addi r31, r31, lbl_807490AC@l
lbl_fn_8030DEB0_000002B4:
    addi r3, r1, 0x8
    bl fn_8005B3CC
    mr r30, r3
    addi r4, r31, 0x7c
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8030DEB0_000002E4
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x14e4(r29)
    b lbl_fn_8030DEB0_00000498
lbl_fn_8030DEB0_000002E4:
    mr r3, r30
    addi r4, r31, 0x87
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8030DEB0_0000030C
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x14e8(r29)
    b lbl_fn_8030DEB0_00000498
lbl_fn_8030DEB0_0000030C:
    mr r3, r30
    addi r4, r31, 0x94
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8030DEB0_00000334
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x1570(r29)
    b lbl_fn_8030DEB0_00000498
lbl_fn_8030DEB0_00000334:
    mr r3, r30
    addi r4, r31, 0xa7
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8030DEB0_0000035C
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x1574(r29)
    b lbl_fn_8030DEB0_00000498
lbl_fn_8030DEB0_0000035C:
    mr r3, r30
    addi r4, r31, 0xb6
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8030DEB0_00000384
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x1578(r29)
    b lbl_fn_8030DEB0_00000498
lbl_fn_8030DEB0_00000384:
    mr r3, r30
    addi r4, r31, 0xc5
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8030DEB0_000003AC
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x157c(r29)
    b lbl_fn_8030DEB0_00000498
lbl_fn_8030DEB0_000003AC:
    mr r3, r30
    addi r4, r31, 0xd4
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8030DEB0_000003D4
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x14ec(r29)
    b lbl_fn_8030DEB0_00000498
lbl_fn_8030DEB0_000003D4:
    mr r3, r30
    addi r4, r31, 0xe0
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8030DEB0_000003FC
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x14f4(r29)
    b lbl_fn_8030DEB0_00000498
lbl_fn_8030DEB0_000003FC:
    mr r3, r30
    addi r4, r31, 0xf2
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8030DEB0_00000424
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x14fc(r29)
    b lbl_fn_8030DEB0_00000498
lbl_fn_8030DEB0_00000424:
    mr r3, r30
    addi r4, r31, 0xfe
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8030DEB0_0000044C
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x1504(r29)
    b lbl_fn_8030DEB0_00000498
lbl_fn_8030DEB0_0000044C:
    mr r3, r30
    addi r4, r31, 0x110
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8030DEB0_00000474
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x150c(r29)
    b lbl_fn_8030DEB0_00000498
lbl_fn_8030DEB0_00000474:
    mr r3, r30
    addi r4, r31, 0x121
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8030DEB0_00000498
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x151c(r29)
lbl_fn_8030DEB0_00000498:
    addi r3, r1, 0x8
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_8030DEB0_000002B4
    lwz r0, 0x654(r1)
    lwz r31, 0x64c(r1)
    lwz r30, 0x648(r1)
    lwz r29, 0x644(r1)
    mtlr r0
    addi r1, r1, 0x650
    blr
}

asm void fn_8030E160(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 29
    beq lbl_fn_8030E160_00000568
    lwz r7, 0x38(r3)
    li r5, 0x0
    li r4, 0x0
    li r6, 0x0
    rlwinm r0, r7, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_8030E160_00000510
    clrlwi r0, r7, 31
    cmplwi r0, 0x1
    beq lbl_fn_8030E160_00000510
    li r6, 0x1
lbl_fn_8030E160_00000510:
    cmpwi r6, 0x0
    beq lbl_fn_8030E160_0000052C
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_8030E160_0000052C
    li r4, 0x1
lbl_fn_8030E160_0000052C:
    cmpwi r4, 0x0
    beq lbl_fn_8030E160_00000560
    lwz r0, 0x55c(r3)
    li r4, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_8030E160_00000554
    lwz r0, 0x560(r3)
    cmpwi r0, 0x1c
    bne lbl_fn_8030E160_00000554
    li r4, 0x1
lbl_fn_8030E160_00000554:
    cmpwi r4, 0x0
    bne lbl_fn_8030E160_00000560
    li r5, 0x1
lbl_fn_8030E160_00000560:
    cmpwi r5, 0x0
    bne lbl_fn_8030E160_0000057C
lbl_fn_8030E160_00000568:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x104(r12)
    mtctr r12
    bctrl
lbl_fn_8030E160_0000057C:
    mr r3, r31
    bl fn_8014C540
    lwz r0, 0x38(r31)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_8030E160_000005A8
    lwz r0, 0x12a4(r31)
    extrwi. r0, r0, 1, 6
    bne lbl_fn_8030E160_000005A8
    mr r3, r31
    bl fn_80145334
lbl_fn_8030E160_000005A8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8030E258(void)
{
    nofralloc
    lwz r0, 0x14d8(r3)
    cmpwi r0, 0x0
    beqlr
    b fn_80149A30
    blr
}

asm void fn_8030E26C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r5, 0x58c(r3)
    subi r0, r5, 0x9
    cmplwi r0, 0x2
    ble lbl_fn_8030E26C_00000608
    cmpwi r5, 0xc
    beq lbl_fn_8030E26C_00000634
    b lbl_fn_8030E26C_0000066C
lbl_fn_8030E26C_00000608:
    lfs f2, 0x10(r4)
    lfs f3, lbl_80884C5C
    lfs f1, 0x14(r4)
    lfs f0, 0x18(r4)
    fmuls f2, f2, f3
    fmuls f1, f1, f3
    fmuls f0, f0, f3
    stfs f2, 0x10(r4)
    stfs f1, 0x14(r4)
    stfs f0, 0x18(r4)
    b lbl_fn_8030E26C_000006B4
lbl_fn_8030E26C_00000634:
    lwz r0, 0x14c0(r3)
    cmpwi r0, 0x19
    blt lbl_fn_8030E26C_0000066C
    lfs f2, 0x10(r4)
    lfs f3, lbl_80884C5C
    lfs f1, 0x14(r4)
    lfs f0, 0x18(r4)
    fmuls f2, f2, f3
    fmuls f1, f1, f3
    fmuls f0, f0, f3
    stfs f2, 0x10(r4)
    stfs f1, 0x14(r4)
    stfs f0, 0x18(r4)
    b lbl_fn_8030E26C_000006B4
lbl_fn_8030E26C_0000066C:
    addi r3, r4, 0x10
    bl fn_805F9920
    lfs f0, lbl_80884C60
    fcmpo cr0, f1, f0
    ble lbl_fn_8030E26C_000006B4
    addi r3, r31, 0x10
    mr r4, r3
    bl fn_805F98D0
    lfs f2, 0x10(r31)
    lfs f3, lbl_80884C60
    lfs f1, 0x14(r31)
    lfs f0, 0x18(r31)
    fmuls f2, f2, f3
    fmuls f1, f1, f3
    fmuls f0, f0, f3
    stfs f2, 0x10(r31)
    stfs f1, 0x14(r31)
    stfs f0, 0x18(r31)
lbl_fn_8030E26C_000006B4:
    lwz r3, 0x14d8(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8030E36C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_8030E36C_0000070C
    lwz r12, 0x0(r3)
    li r4, 0x2
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    b lbl_fn_8030E36C_000007E0
lbl_fn_8030E36C_0000070C:
    lwz r0, 0x44(r4)
    cmpwi r0, 0x1
    beq lbl_fn_8030E36C_00000724
    lwz r4, 0x14e0(r3)
    addi r0, r4, 0x1
    stw r0, 0x14e0(r3)
lbl_fn_8030E36C_00000724:
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 17, 17
    cmplwi r0, 0x4000
    bne lbl_fn_8030E36C_0000073C
    lwz r0, 0x157c(r3)
    stw r0, 0x14e0(r3)
lbl_fn_8030E36C_0000073C:
    lwz r4, 0x14e0(r3)
    lwz r0, 0x157c(r3)
    cmpw r4, r0
    blt lbl_fn_8030E36C_000007B0
    lwz r0, 0x58c(r3)
    lwz r4, 0x157c(r3)
    cmpwi r0, 0xd
    stw r4, 0x14e0(r3)
    beq lbl_fn_8030E36C_000007E0
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0xd
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x1
    li r6, 0x1
    bl fn_80239DAC
    lwz r0, 0x7e0(r31)
    rlwinm r0, r0, 0, 17, 17
    cmplwi r0, 0x4000
    beq lbl_fn_8030E36C_000007E0
    addi r3, r31, 0x7d4
    li r4, 0x4000
    li r5, 0x0
    bl fn_8013310C
    b lbl_fn_8030E36C_000007E0
lbl_fn_8030E36C_000007B0:
    lwz r0, 0x58c(r3)
    cmpwi r0, 0xc
    bne lbl_fn_8030E36C_000007E0
    lwz r0, 0x14c0(r3)
    cmpwi r0, 0x19
    bge lbl_fn_8030E36C_000007E0
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x6
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_8030E36C_000007E0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8030E490(void)
{
    nofralloc
    lwz r5, 0x14e0(r3)
    lwz r0, 0x157c(r3)
    srawi r4, r5, 31
    srwi r3, r0, 31
    subfc r0, r0, r5
    adde r3, r4, r3
    blr
}

asm void fn_8030E4AC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x58c(r3)
    lwz r4, 0x157c(r3)
    cmpwi r0, 0xd
    stw r4, 0x14e0(r3)
    beq lbl_fn_8030E4AC_00000880
    lwz r12, 0x0(r3)
    li r4, 0xd
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x1
    li r6, 0x1
    bl fn_80239DAC
    lwz r0, 0x7e0(r31)
    rlwinm r0, r0, 0, 17, 17
    cmplwi r0, 0x4000
    beq lbl_fn_8030E4AC_00000880
    addi r3, r31, 0x7d4
    li r4, 0x4000
    li r5, 0x0
    bl fn_8013310C
lbl_fn_8030E4AC_00000880:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8030E530(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x7e0(r3)
    stw r4, 0x14e0(r3)
    rlwinm r0, r0, 0, 17, 17
    cmplwi r0, 0x4000
    bne lbl_fn_8030E530_000008E4
    li r4, 0x4000
    li r5, 0x0
    li r6, 0x1
    li r7, 0x0
    li r8, 0x0
    li r9, 0x0
    li r10, 0x1
    addi r3, r3, 0x7d4
    bl fn_8012F440
lbl_fn_8030E530_000008E4:
    lwz r0, 0x14d8(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8030E530_00000918
    lwz r0, 0x54c(r31)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    bne lbl_fn_8030E530_00000918
    lwz r3, 0x14a8(r31)
    lwz r0, 0x54c(r31)
    oris r3, r3, 0x400
    stw r3, 0x14a8(r31)
    rlwinm r0, r0, 0, 19, 17
    stw r0, 0x54c(r31)
lbl_fn_8030E530_00000918:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8030E5C8(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r22, 0x8(r1)
    lwz r0, 0x14dc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8030E5C8_00000A10
    lwz r4, 0x14d4(r3)
    li r30, 0x0
    stw r30, 0x14dc(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8030E5C8_00000A10
    addi r27, r4, 0x14d8
    li r31, 0x0
    mr r24, r27
    b lbl_fn_8030E5C8_00000A04
lbl_fn_8030E5C8_0000096C:
    lwz r3, 0x4(r24)
    lwz r0, 0x14dc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8030E5C8_000009FC
    stw r30, 0x14dc(r3)
    lwz r3, 0x14d4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8030E5C8_000009FC
    addi r26, r3, 0x14d8
    li r29, 0x0
    mr r23, r26
    b lbl_fn_8030E5C8_000009F0
lbl_fn_8030E5C8_0000099C:
    lwz r3, 0x4(r23)
    lwz r0, 0x14dc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8030E5C8_000009E8
    stw r30, 0x14dc(r3)
    lwz r3, 0x14d4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8030E5C8_000009E8
    addi r25, r3, 0x14d8
    li r28, 0x0
    mr r22, r25
    b lbl_fn_8030E5C8_000009DC
lbl_fn_8030E5C8_000009CC:
    lwz r3, 0x4(r22)
    bl fn_8030E5C8
    addi r22, r22, 0x4
    addi r28, r28, 0x1
lbl_fn_8030E5C8_000009DC:
    lwz r0, 0x0(r25)
    cmplw r28, r0
    blt lbl_fn_8030E5C8_000009CC
lbl_fn_8030E5C8_000009E8:
    addi r23, r23, 0x4
    addi r29, r29, 0x1
lbl_fn_8030E5C8_000009F0:
    lwz r0, 0x0(r26)
    cmplw r29, r0
    blt lbl_fn_8030E5C8_0000099C
lbl_fn_8030E5C8_000009FC:
    addi r24, r24, 0x4
    addi r31, r31, 0x1
lbl_fn_8030E5C8_00000A04:
    lwz r0, 0x0(r27)
    cmplw r31, r0
    blt lbl_fn_8030E5C8_0000096C
lbl_fn_8030E5C8_00000A10:
    lmw r22, 0x8(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8030E6C0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x2
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_8016E970
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x6
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    lwz r0, 0x1570(r31)
    stw r0, 0x156c(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8030E710(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_20
    lwz r0, 0x12a4(r3)
    mr r29, r3
    extrwi. r0, r0, 1, 29
    bne lbl_fn_8030E710_00000D74
    lwz r5, 0x14cc(r3)
    li r31, 0x0
    subi r0, r4, 0x9
    lwz r30, 0x58c(r3)
    clrlwi r5, r5, 4
    stw r31, 0x14bc(r3)
    oris r5, r5, 0x800
    cmplwi r0, 0x3
    stw r31, 0x14c0(r3)
    stw r31, 0x14c4(r3)
    stw r31, 0x14c8(r3)
    stw r5, 0x14cc(r3)
    stw r31, 0x14d0(r3)
    stw r4, 0x58c(r3)
    ble lbl_fn_8030E710_00000B44
    cmpwi r4, 0x6
    beq lbl_fn_8030E710_00000B00
    cmpwi r4, 0x7
    beq lbl_fn_8030E710_00000B0C
    cmpwi r4, 0x8
    beq lbl_fn_8030E710_00000B18
    cmpwi r4, 0xd
    beq lbl_fn_8030E710_00000C94
    cmpwi r4, 0x2
    beq lbl_fn_8030E710_00000CF0
    b lbl_fn_8030E710_00000D38
lbl_fn_8030E710_00000B00:
    oris r0, r5, 0x4000
    stw r0, 0x14cc(r3)
    b lbl_fn_8030E710_00000D38
lbl_fn_8030E710_00000B0C:
    oris r0, r5, 0x4000
    stw r0, 0x14cc(r3)
    b lbl_fn_8030E710_00000D38
lbl_fn_8030E710_00000B18:
    lwz r4, 0xd1c(r3)
    addi r5, r3, 0x528
    li r6, 0x0
    addi r3, r3, 0xc64
    bl fn_80128930
    addi r3, r29, 0xc64
    bl fn_801255C8
    lwz r0, 0x14cc(r29)
    oris r0, r0, 0x4000
    stw r0, 0x14cc(r29)
    b lbl_fn_8030E710_00000D38
lbl_fn_8030E710_00000B44:
    slwi r0, r0, 4
    lfs f1, lbl_80884C64
    add r4, r3, r0
    lfs f2, lbl_80884C5C
    lwz r4, 0x152c(r4)
    li r5, 0x0
    li r6, 0x1
    bl fn_805A4F20
    lwz r3, 0x58c(r29)
    subi r0, r3, 0x9
    slwi r0, r0, 4
    add r3, r29, r0
    lwz r0, 0x14f4(r3)
    stw r0, 0x14f8(r3)
    lwz r0, 0x58c(r29)
    cmpwi r0, 0xb
    bne lbl_fn_8030E710_00000C5C
    lwz r0, 0x14dc(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8030E710_00000C84
    lwz r3, 0x14d4(r29)
    stw r31, 0x14dc(r29)
    cmpwi r3, 0x0
    beq lbl_fn_8030E710_00000C84
    addi r25, r3, 0x14d8
    li r26, 0x0
    mr r22, r25
    b lbl_fn_8030E710_00000C4C
lbl_fn_8030E710_00000BB4:
    lwz r3, 0x4(r22)
    lwz r0, 0x14dc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8030E710_00000C44
    stw r31, 0x14dc(r3)
    lwz r3, 0x14d4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8030E710_00000C44
    addi r24, r3, 0x14d8
    li r27, 0x0
    mr r21, r24
    b lbl_fn_8030E710_00000C38
lbl_fn_8030E710_00000BE4:
    lwz r3, 0x4(r21)
    lwz r0, 0x14dc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8030E710_00000C30
    stw r31, 0x14dc(r3)
    lwz r3, 0x14d4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8030E710_00000C30
    addi r23, r3, 0x14d8
    li r28, 0x0
    mr r20, r23
    b lbl_fn_8030E710_00000C24
lbl_fn_8030E710_00000C14:
    lwz r3, 0x4(r20)
    bl fn_8030E5C8
    addi r20, r20, 0x4
    addi r28, r28, 0x1
lbl_fn_8030E710_00000C24:
    lwz r0, 0x0(r23)
    cmplw r28, r0
    blt lbl_fn_8030E710_00000C14
lbl_fn_8030E710_00000C30:
    addi r21, r21, 0x4
    addi r27, r27, 0x1
lbl_fn_8030E710_00000C38:
    lwz r0, 0x0(r24)
    cmplw r27, r0
    blt lbl_fn_8030E710_00000BE4
lbl_fn_8030E710_00000C44:
    addi r22, r22, 0x4
    addi r26, r26, 0x1
lbl_fn_8030E710_00000C4C:
    lwz r0, 0x0(r25)
    cmplw r26, r0
    blt lbl_fn_8030E710_00000BB4
    b lbl_fn_8030E710_00000C84
lbl_fn_8030E710_00000C5C:
    cmpwi r0, 0xc
    bne lbl_fn_8030E710_00000C6C
    lwz r0, 0x1574(r29)
    stw r0, 0x156c(r29)
lbl_fn_8030E710_00000C6C:
    lwz r0, 0x14d8(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8030E710_00000C84
    lwz r3, 0x14dc(r29)
    addi r0, r3, 0x1
    stw r0, 0x14dc(r29)
lbl_fn_8030E710_00000C84:
    lwz r0, 0x14cc(r29)
    rlwinm r0, r0, 0, 2, 0
    stw r0, 0x14cc(r29)
    b lbl_fn_8030E710_00000D38
lbl_fn_8030E710_00000C94:
    lfs f1, lbl_80884C64
    li r4, 0x1e1
    lfs f2, lbl_80884C5C
    li r5, 0x0
    li r6, 0x1
    bl fn_805A4F20
    lwz r0, 0x14d8(r29)
    lwz r3, 0x14cc(r29)
    cmpwi r0, 0x0
    rlwinm r3, r3, 0, 2, 0
    stw r3, 0x14cc(r29)
    beq lbl_fn_8030E710_00000D38
    lwz r0, 0x54c(r29)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    beq lbl_fn_8030E710_00000D38
    lwz r3, 0x14a8(r29)
    lwz r0, 0x54c(r29)
    rlwinm r3, r3, 0, 6, 4
    stw r3, 0x14a8(r29)
    ori r0, r0, 0x2000
    stw r0, 0x54c(r29)
    b lbl_fn_8030E710_00000D38
lbl_fn_8030E710_00000CF0:
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_8030E710_00000D18
    cmpwi r30, 0x2
    beq lbl_fn_8030E710_00000D18
    lwz r12, 0x0(r3)
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
lbl_fn_8030E710_00000D18:
    lwz r0, 0x14cc(r29)
    mr r4, r29
    li r5, 0x1
    li r6, 0x1
    rlwinm r0, r0, 0, 2, 0
    stw r0, 0x14cc(r29)
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
lbl_fn_8030E710_00000D38:
    cmpwi r30, 0x7
    beq lbl_fn_8030E710_00000D58
    lwz r0, 0x58c(r29)
    cmpwi r0, 0x7
    bne lbl_fn_8030E710_00000D58
    lwz r0, 0xd1c(r29)
    stw r0, 0xfc0(r29)
    b lbl_fn_8030E710_00000D74
lbl_fn_8030E710_00000D58:
    cmpwi r30, 0x7
    bne lbl_fn_8030E710_00000D74
    lwz r0, 0x58c(r29)
    cmpwi r0, 0x7
    beq lbl_fn_8030E710_00000D74
    li r0, 0x0
    stw r0, 0xfc0(r29)
lbl_fn_8030E710_00000D74:
    addi r11, r1, 0x40
    bl _restgpr_20
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8030EA28(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    lis r5, 0x4330
    li r6, 0x0
    stw r0, 0x84(r1)
    stfd f31, 0x70(r1)
    psq_st f31, 0x78(r1), 0, 0
    stw r31, 0x6c(r1)
    mr r31, r3
    stw r30, 0x68(r1)
    stw r29, 0x64(r1)
    lwz r7, 0x38(r3)
    lwz r4, 0x14c0(r3)
    rlwinm r0, r7, 0, 29, 29
    stw r5, 0x50(r1)
    cmplwi r0, 0x4
    addi r0, r4, 0x1
    stw r5, 0x58(r1)
    li r5, 0x0
    li r4, 0x0
    stw r0, 0x14c0(r3)
    beq lbl_fn_8030EA28_00000DF4
    clrlwi r0, r7, 31
    cmplwi r0, 0x1
    beq lbl_fn_8030EA28_00000DF4
    li r6, 0x1
lbl_fn_8030EA28_00000DF4:
    cmpwi r6, 0x0
    beq lbl_fn_8030EA28_00000E10
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_8030EA28_00000E10
    li r4, 0x1
lbl_fn_8030EA28_00000E10:
    cmpwi r4, 0x0
    beq lbl_fn_8030EA28_00000E44
    lwz r0, 0x55c(r3)
    li r4, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_8030EA28_00000E38
    lwz r0, 0x560(r3)
    cmpwi r0, 0x1c
    bne lbl_fn_8030EA28_00000E38
    li r4, 0x1
lbl_fn_8030EA28_00000E38:
    cmpwi r4, 0x0
    bne lbl_fn_8030EA28_00000E44
    li r5, 0x1
lbl_fn_8030EA28_00000E44:
    cmpwi r5, 0x0
    beq lbl_fn_8030EA28_00001058
    lwz r4, 0x14f8(r3)
    cmpwi r4, 0x0
    ble lbl_fn_8030EA28_00000E60
    subi r0, r4, 0x1
    stw r0, 0x14f8(r3)
lbl_fn_8030EA28_00000E60:
    lwz r4, 0x1508(r3)
    cmpwi r4, 0x0
    ble lbl_fn_8030EA28_00000E74
    subi r0, r4, 0x1
    stw r0, 0x1508(r3)
lbl_fn_8030EA28_00000E74:
    lwz r4, 0x1518(r3)
    addi r5, r3, 0x20
    cmpwi r4, 0x0
    ble lbl_fn_8030EA28_00000E8C
    subi r0, r4, 0x1
    stw r0, 0x14f8(r5)
lbl_fn_8030EA28_00000E8C:
    lwz r4, 0x1508(r5)
    cmpwi r4, 0x0
    ble lbl_fn_8030EA28_00000EA0
    subi r0, r4, 0x1
    stw r0, 0x1508(r5)
lbl_fn_8030EA28_00000EA0:
    lwz r0, 0x14d8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8030EA28_00000EC0
    lwz r4, 0x156c(r3)
    cmpwi r4, 0x0
    ble lbl_fn_8030EA28_00000EC0
    subi r0, r4, 0x1
    stw r0, 0x156c(r3)
lbl_fn_8030EA28_00000EC0:
    mr r3, r31
    bl fn_8030F380
    lwz r0, 0x14d8(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8030EA28_00000FF4
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x0
    bl fn_80239D58
    cmpwi r3, 0x0
    bne lbl_fn_8030EA28_00000FF4
    mr r3, r31
    li r4, 0x0
    bl fn_80232B7C
    bl fn_80680CF8
    lis r29, 0x4178
    lis r30, lbl_80749090@ha
    addi r0, r29, 0x749f
    lfd f3, lbl_80749090@l(r30)
    mulhw r0, r0, r3
    lfs f1, lbl_80884C6C
    lfs f0, lbl_80884C68
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x54(r1)
    lfd f2, 0x50(r1)
    fsubs f2, f2, f3
    fdivs f1, f2, f1
    fadds f31, f0, f1
    bl fn_80680CF8
    addi r0, r29, 0x749f
    lis r8, lbl_807C7030@ha
    mulhw r4, r0, r3
    lfd f6, lbl_80749090@l(r30)
    lfs f1, 0x5b4(r31)
    li r11, -0x1
    lfs f0, lbl_80884C64
    li r0, 0x1
    srawi r4, r4, 8
    lfs f2, lbl_80884C5C
    srwi r5, r4, 31
    lfs f3, lbl_80884C70
    add r4, r4, r5
    stfs f2, 0x20(r1)
    mulli r4, r4, 0x3e9
    fmuls f3, f3, f1
    stfs f2, 0x28(r1)
    fmr f1, f31
    lfs f4, lbl_80884C6C
    addi r5, r31, 0xb0
    subf r3, r4, r3
    stfs f0, 0x10(r1)
    xoris r3, r3, 0x8000
    addi r4, r31, 0x1580
    stw r3, 0x5c(r1)
    addi r7, r1, 0x20
    addi r8, r8, lbl_807C7030@l
    addi r9, r1, 0x10
    lfd f5, 0x58(r1)
    li r6, 0x0
    stfs f0, 0x14(r1)
    li r10, -0x1
    fsubs f2, f5, f6
    stfs f0, 0x18(r1)
    fdivs f2, f2, f4
    stfs f0, 0x1c(r1)
    fmuls f0, f3, f2
    fneg f0, f0
    stfs f0, 0x24(r1)
    stw r11, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
lbl_fn_8030EA28_00000FF4:
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x9
    beq lbl_fn_8030EA28_00001024
    lwz r0, 0x14d8(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8030EA28_00001024
    lwz r3, 0x14d4(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8030EA28_00001024
    lwz r0, 0xd1c(r3)
    stw r0, 0xd1c(r31)
    stw r0, 0xd20(r31)
lbl_fn_8030EA28_00001024:
    lwz r3, 0x14d4(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8030EA28_00001058
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_8030EA28_00001058
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x2
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_8030EA28_00001058:
    lwz r6, 0x38(r31)
    li r4, 0x0
    li r3, 0x0
    li r5, 0x0
    rlwinm r0, r6, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_8030EA28_00001084
    clrlwi r0, r6, 31
    cmplwi r0, 0x1
    beq lbl_fn_8030EA28_00001084
    li r5, 0x1
lbl_fn_8030EA28_00001084:
    cmpwi r5, 0x0
    beq lbl_fn_8030EA28_000010A0
    lwz r0, 0x7e0(r31)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_8030EA28_000010A0
    li r3, 0x1
lbl_fn_8030EA28_000010A0:
    cmpwi r3, 0x0
    beq lbl_fn_8030EA28_000010D4
    lwz r0, 0x55c(r31)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_8030EA28_000010C8
    lwz r0, 0x560(r31)
    cmpwi r0, 0x1c
    bne lbl_fn_8030EA28_000010C8
    li r3, 0x1
lbl_fn_8030EA28_000010C8:
    cmpwi r3, 0x0
    bne lbl_fn_8030EA28_000010D4
    li r4, 0x1
lbl_fn_8030EA28_000010D4:
    cmpwi r4, 0x0
    beq lbl_fn_8030EA28_00001150
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x6
    beq lbl_fn_8030EA28_00001150
    cmpwi r0, 0xb
    beq lbl_fn_8030EA28_00001150
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0xf8(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_8030EA28_00001128
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x6
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    b lbl_fn_8030EA28_00001150
lbl_fn_8030EA28_00001128:
    lwz r3, 0xd1c(r31)
    lwz r0, 0xd20(r31)
    cmplw r3, r0
    beq lbl_fn_8030EA28_00001150
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x6
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_8030EA28_00001150:
    lwz r3, 0x58c(r31)
    subi r0, r3, 0x9
    cmplwi r0, 0x3
    ble lbl_fn_8030EA28_0000160C
    cmpwi r3, 0x6
    beq lbl_fn_8030EA28_0000118C
    cmpwi r3, 0x7
    beq lbl_fn_8030EA28_00001278
    cmpwi r3, 0x8
    beq lbl_fn_8030EA28_000013F0
    cmpwi r3, 0xd
    beq lbl_fn_8030EA28_00001648
    cmpwi r3, 0x2
    beq lbl_fn_8030EA28_00001684
    b lbl_fn_8030EA28_000016A8
lbl_fn_8030EA28_0000118C:
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x2
    bne lbl_fn_8030EA28_00001260
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0xf8(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8030EA28_00001260
    lwz r3, 0x14e0(r31)
    lwz r0, 0x157c(r31)
    cmpw r3, r0
    blt lbl_fn_8030EA28_000011E0
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0xd
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    b lbl_fn_8030EA28_00001260
lbl_fn_8030EA28_000011E0:
    lwz r4, 0x14d4(r31)
    cmpwi r4, 0x0
    beq lbl_fn_8030EA28_00001248
    lwz r0, 0x940(r4)
    cmpwi r0, 0x0
    ble lbl_fn_8030EA28_0000121C
    xoris r0, r0, 0x8000
    stw r0, 0x54(r1)
    lis r3, lbl_80749090@ha
    lfs f0, 0x7d8(r4)
    lfd f2, lbl_80749090@l(r3)
    lfd f1, 0x50(r1)
    fsubs f1, f1, f2
    fdivs f1, f0, f1
    b lbl_fn_8030EA28_00001220
lbl_fn_8030EA28_0000121C:
    lfs f1, lbl_80884C5C
lbl_fn_8030EA28_00001220:
    lfs f0, lbl_80884C70
    fcmpo cr0, f1, f0
    bge lbl_fn_8030EA28_00001248
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x7
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    b lbl_fn_8030EA28_00001260
lbl_fn_8030EA28_00001248:
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x8
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_8030EA28_00001260:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x108(r12)
    mtctr r12
    bctrl
    b lbl_fn_8030EA28_000016C0
lbl_fn_8030EA28_00001278:
    lwz r3, 0x14e0(r31)
    lwz r0, 0x157c(r31)
    cmpw r3, r0
    blt lbl_fn_8030EA28_000012A4
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0xd
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    b lbl_fn_8030EA28_000016C0
lbl_fn_8030EA28_000012A4:
    lwz r3, 0xd1c(r31)
    lfs f0, 0x530(r31)
    lfs f1, 0x530(r3)
    lfs f3, 0x52c(r3)
    fsubs f4, f1, f0
    lfs f2, 0x52c(r31)
    lfs f1, 0x528(r3)
    lfs f0, 0x528(r31)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0x48(r1)
    stfs f0, 0x44(r1)
    stfs f4, 0x4c(r1)
    lwz r0, 0x14cc(r31)
    srwi. r0, r0, 31
    bne lbl_fn_8030EA28_00001308
    lwz r0, 0x14bc(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8030EA28_00001308
    addi r3, r1, 0x44
    bl fn_805F9920
    lfs f0, 0x14e8(r31)
    fmuls f0, f0, f0
    fcmpo cr0, f1, f0
    bge lbl_fn_8030EA28_000013D8
lbl_fn_8030EA28_00001308:
    lwz r0, 0x156c(r31)
    cmpwi r0, 0x0
    bgt lbl_fn_8030EA28_00001340
    lwz r0, 0x7e0(r31)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_8030EA28_00001340
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0xc
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    b lbl_fn_8030EA28_000013D8
lbl_fn_8030EA28_00001340:
    lwz r3, 0x14dc(r31)
    lwz r0, 0x1578(r31)
    cmpw r3, r0
    blt lbl_fn_8030EA28_00001378
    lwz r0, 0x14d8(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8030EA28_00001378
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0xb
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    b lbl_fn_8030EA28_000013D8
lbl_fn_8030EA28_00001378:
    lfs f1, 0x14e8(r31)
    mr r3, r31
    bl fn_8030FEAC
    cmpwi r3, 0x2
    blt lbl_fn_8030EA28_000013B4
    lwz r0, 0x1508(r31)
    cmpwi r0, 0x0
    bgt lbl_fn_8030EA28_000013B4
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0xa
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    b lbl_fn_8030EA28_000013D8
lbl_fn_8030EA28_000013B4:
    lwz r0, 0x14f8(r31)
    cmpwi r0, 0x0
    bgt lbl_fn_8030EA28_000013D8
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x9
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_8030EA28_000013D8:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x108(r12)
    mtctr r12
    bctrl
    b lbl_fn_8030EA28_000016C0
lbl_fn_8030EA28_000013F0:
    lwz r3, 0x14e0(r31)
    lwz r0, 0x157c(r31)
    cmpw r3, r0
    blt lbl_fn_8030EA28_0000141C
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0xd
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    b lbl_fn_8030EA28_000016C0
lbl_fn_8030EA28_0000141C:
    lwz r3, 0xd1c(r31)
    lfs f0, 0x530(r31)
    lfs f1, 0x530(r3)
    lfs f3, 0x52c(r3)
    fsubs f4, f1, f0
    lfs f2, 0x52c(r31)
    lfs f1, 0x528(r3)
    lfs f0, 0x528(r31)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0x3c(r1)
    stfs f0, 0x38(r1)
    stfs f4, 0x40(r1)
    lwz r0, 0x14cc(r31)
    srwi. r0, r0, 31
    bne lbl_fn_8030EA28_00001474
    addi r3, r1, 0x38
    bl fn_805F9920
    lfs f0, 0x14e8(r31)
    fmuls f0, f0, f0
    fcmpo cr0, f1, f0
    bge lbl_fn_8030EA28_00001548
lbl_fn_8030EA28_00001474:
    lwz r0, 0x156c(r31)
    cmpwi r0, 0x0
    bgt lbl_fn_8030EA28_000014AC
    lwz r0, 0x7e0(r31)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_8030EA28_000014AC
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0xc
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    b lbl_fn_8030EA28_000015F4
lbl_fn_8030EA28_000014AC:
    lwz r3, 0x14dc(r31)
    lwz r0, 0x1578(r31)
    cmpw r3, r0
    blt lbl_fn_8030EA28_000014E4
    lwz r0, 0x14d8(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8030EA28_000014E4
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0xb
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    b lbl_fn_8030EA28_000015F4
lbl_fn_8030EA28_000014E4:
    lfs f1, 0x14e8(r31)
    mr r3, r31
    bl fn_8030FEAC
    cmpwi r3, 0x2
    blt lbl_fn_8030EA28_00001520
    lwz r0, 0x1508(r31)
    cmpwi r0, 0x0
    bgt lbl_fn_8030EA28_00001520
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0xa
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    b lbl_fn_8030EA28_000015F4
lbl_fn_8030EA28_00001520:
    lwz r0, 0x14f8(r31)
    cmpwi r0, 0x0
    bgt lbl_fn_8030EA28_000015F4
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x9
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    b lbl_fn_8030EA28_000015F4
lbl_fn_8030EA28_00001548:
    lwz r4, 0x14d4(r31)
    cmpwi r4, 0x0
    beq lbl_fn_8030EA28_000015F4
    lwz r0, 0x940(r4)
    cmpwi r0, 0x0
    ble lbl_fn_8030EA28_00001584
    xoris r0, r0, 0x8000
    stw r0, 0x5c(r1)
    lis r3, lbl_80749090@ha
    lfs f0, 0x7d8(r4)
    lfd f2, lbl_80749090@l(r3)
    lfd f1, 0x58(r1)
    fsubs f1, f1, f2
    fdivs f1, f0, f1
    b lbl_fn_8030EA28_00001588
lbl_fn_8030EA28_00001584:
    lfs f1, lbl_80884C5C
lbl_fn_8030EA28_00001588:
    lfs f0, lbl_80884C70
    fcmpo cr0, f1, f0
    bge lbl_fn_8030EA28_000015F4
    lfs f1, 0x530(r4)
    addi r3, r1, 0x2c
    lfs f0, 0x530(r31)
    lfs f3, 0x52c(r4)
    fsubs f4, f1, f0
    lfs f2, 0x52c(r31)
    lfs f1, 0x528(r4)
    lfs f0, 0x528(r31)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0x30(r1)
    stfs f0, 0x2c(r1)
    stfs f4, 0x34(r1)
    bl fn_805F9920
    lfs f0, 0x14e4(r31)
    fmuls f0, f0, f0
    fcmpo cr0, f1, f0
    ble lbl_fn_8030EA28_000015F4
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x7
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_8030EA28_000015F4:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x108(r12)
    mtctr r12
    bctrl
    b lbl_fn_8030EA28_000016C0
lbl_fn_8030EA28_0000160C:
    lwz r0, 0x14cc(r31)
    srwi. r0, r0, 31
    beq lbl_fn_8030EA28_00001630
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x6
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_8030EA28_00001630:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x108(r12)
    mtctr r12
    bctrl
    b lbl_fn_8030EA28_000016C0
lbl_fn_8030EA28_00001648:
    lwz r0, 0x14cc(r31)
    srwi. r0, r0, 31
    beq lbl_fn_8030EA28_0000166C
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x6
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_8030EA28_0000166C:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x108(r12)
    mtctr r12
    bctrl
    b lbl_fn_8030EA28_000016C0
lbl_fn_8030EA28_00001684:
    lwz r4, 0x5c0(r31)
    mr r3, r31
    lwz r0, 0x12a4(r31)
    clrrwi r4, r4, 1
    stw r4, 0x5c0(r31)
    oris r0, r0, 0x200
    stw r0, 0x12a4(r31)
    bl fn_800EAECC
    b lbl_fn_8030EA28_000016C0
lbl_fn_8030EA28_000016A8:
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x6
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_8030EA28_000016C0:
    lwz r0, 0x84(r1)
    psq_l f31, 0x78(r1), 0, 0
    lfd f31, 0x70(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    lwz r29, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_8030F380(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    li r5, 0x0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r3
    lwz r4, lbl_8087F8A0
    cmpwi r4, 0x0
    beq lbl_fn_8030F380_00001710
    lwz r4, 0x48(r4)
    b lbl_fn_8030F380_00001714
lbl_fn_8030F380_00001710:
    li r4, 0x0
lbl_fn_8030F380_00001714:
    cmpwi r4, 0x0
    beq lbl_fn_8030F380_00001724
    lwz r0, 0x12a4(r4)
    extrwi r5, r0, 1, 3
lbl_fn_8030F380_00001724:
    cmpwi r5, 0x0
    bne lbl_fn_8030F380_00001754
    lwz r4, 0x154c(r3)
    lwz r0, 0x2dc(r3)
    cmpw r4, r0
    bne lbl_fn_8030F380_00001754
    lfs f1, 0x2e4(r3)
    lfs f0, lbl_80884C74
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_8030F380_00001754
    li r5, 0x1
lbl_fn_8030F380_00001754:
    cmpwi r5, 0x0
    beq lbl_fn_8030F380_00001838
    lwz r0, 0x14d8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8030F380_00001838
    lwz r0, 0x58c(r3)
    li r4, 0x1
    stw r4, 0x14d8(r3)
    cmpwi r0, 0xd
    beq lbl_fn_8030F380_00001794
    lwz r4, 0x14a8(r3)
    lwz r0, 0x54c(r3)
    oris r4, r4, 0x400
    stw r4, 0x14a8(r3)
    rlwinm r0, r0, 0, 19, 17
    stw r0, 0x54c(r3)
lbl_fn_8030F380_00001794:
    mr r3, r31
    li r4, 0x0
    bl fn_80232B7C
    lfs f0, lbl_80884C5C
    li r3, -0x1
    lfs f1, lbl_80884C64
    li r0, 0x1
    stfs f0, 0x20(r1)
    addi r4, r31, 0x1580
    addi r5, r31, 0xb0
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
    lis r4, lbl_807490AC@ha
    lfs f1, lbl_80884C64
    addi r4, r4, lbl_807490AC@l
    addi r3, r1, 0x10
    addi r4, r4, 0x12f
    addi r5, r31, 0x528
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_8030F380_000018B4
lbl_fn_8030F380_00001838:
    cmpwi r5, 0x0
    bne lbl_fn_8030F380_000018B4
    lwz r0, 0x14d8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8030F380_000018B4
    lwz r0, 0x58c(r3)
    li r6, 0x0
    lwz r5, 0x14a8(r3)
    lwz r4, 0x54c(r3)
    cmpwi r0, 0xb
    rlwinm r5, r5, 0, 6, 4
    stw r6, 0x14d8(r3)
    ori r0, r4, 0x2000
    stw r5, 0x14a8(r3)
    stw r0, 0x54c(r3)
    bne lbl_fn_8030F380_000018A0
    lfs f1, 0x2e4(r3)
    lfs f0, lbl_80884C74
    fcmpo cr0, f1, f0
    bge lbl_fn_8030F380_000018A0
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x6
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_8030F380_000018A0:
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x1
    li r6, 0x1
    bl fn_80239DAC
lbl_fn_8030F380_000018B4:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8030F564(void)
{
    nofralloc
    stwu r1, -0x190(r1)
    mflr r0
    stw r0, 0x194(r1)
    stfd f31, 0x180(r1)
    psq_st f31, 0x188(r1), 0, 0
    lfs f31, lbl_80884C5C
    stfd f30, 0x170(r1)
    psq_st f30, 0x178(r1), 0, 0
    lfs f30, lbl_80884C64
    stfd f29, 0x160(r1)
    psq_st f29, 0x168(r1), 0, 0
    stfd f28, 0x150(r1)
    psq_st f28, 0x158(r1), 0, 0
    stw r31, 0x14c(r1)
    stw r30, 0x148(r1)
    mr r30, r3
    addi r3, r1, 0x134
    stw r29, 0x144(r1)
    addi r4, r30, 0x534
    stw r28, 0x140(r1)
    bl fn_8001047C
    lwz r0, 0x55c(r30)
    li r31, 0x0
    cmpwi r0, 0x2
    bne lbl_fn_8030F564_00002174
    lwz r3, 0x58c(r30)
    subi r0, r3, 0x6
    cmplwi r0, 0x7
    bgt lbl_fn_8030F564_00002180
    lis r3, jumptable_80788200@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_80788200@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lwz r0, 0x14cc(r30)
    oris r0, r0, 0x8000
    stw r0, 0x14cc(r30)
    b lbl_fn_8030F564_00002180
    lwz r0, 0x14bc(r30)
    li r31, 0x1
    lfs f2, lbl_80884C78
    lfs f1, 0x14e4(r30)
    cmpwi r0, 0x0
    lfs f0, lbl_80884C7C
    fmuls f28, f2, f1
    fmuls f29, f0, f1
    bne lbl_fn_8030F564_00001B4C
    addi r3, r1, 0x128
    bl fn_80057A64
    lwz r0, 0xd1c(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8030F564_000019D0
    lwz r3, 0x14d4(r30)
    bl fn_8013C38C
    mr r29, r3
    lwz r3, 0xd1c(r30)
    bl fn_8013C38C
    mr r4, r3
    mr r5, r29
    addi r3, r1, 0xd4
    bl fn_80013338
    addi r3, r1, 0x128
    addi r4, r1, 0xd4
    bl fn_8000D124
    b lbl_fn_8030F564_000019F4
lbl_fn_8030F564_000019D0:
    lwz r3, 0x14d4(r30)
    bl fn_8013C38C
    mr r5, r3
    addi r3, r1, 0xc8
    addi r4, r30, 0x528
    bl fn_80013338
    addi r3, r1, 0x128
    addi r4, r1, 0xc8
    bl fn_8000D124
lbl_fn_8030F564_000019F4:
    addi r3, r1, 0x128
    bl fn_8000D3A4
    lfs f0, lbl_80884C5C
    fmr f29, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_8030F564_00001A14
    addi r3, r1, 0x128
    bl fn_800F7FF0
lbl_fn_8030F564_00001A14:
    lfs f0, lbl_80884C70
    fmuls f1, f29, f0
    fcmpo cr0, f1, f28
    ble lbl_fn_8030F564_00001A28
    fmr f1, f28
lbl_fn_8030F564_00001A28:
    addi r3, r1, 0xbc
    addi r4, r1, 0x128
    bl fn_800F72CC
    lwz r3, 0x14d4(r30)
    bl fn_8013C38C
    mr r4, r3
    addi r3, r1, 0x11c
    addi r5, r1, 0xbc
    bl fn_80013410
    lfs f0, 0x52c(r30)
    addi r3, r1, 0x110
    stfs f0, 0x120(r1)
    addi r4, r1, 0x11c
    addi r5, r30, 0x528
    bl fn_80013338
    addi r3, r1, 0x110
    bl fn_8000D3A4
    lfs f0, lbl_80884C5C
    fmr f31, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_8030F564_00001A84
    addi r3, r1, 0x110
    bl fn_800F7FF0
lbl_fn_8030F564_00001A84:
    lfs f0, lbl_80884C80
    fcmpo cr0, f31, f0
    bge lbl_fn_8030F564_00001AA4
    lfs f31, lbl_80884C5C
    addi r3, r1, 0x134
    addi r4, r30, 0x534
    bl fn_8000D124
    b lbl_fn_8030F564_00001BF0
lbl_fn_8030F564_00001AA4:
    lfs f0, lbl_80884C84
    fcmpo cr0, f31, f0
    bge lbl_fn_8030F564_00001AD0
    lfs f31, lbl_80884C5C
    addi r3, r1, 0xb0
    addi r4, r1, 0x110
    bl fn_80011034
    addi r3, r1, 0x134
    addi r4, r1, 0xb0
    bl fn_8000D124
    b lbl_fn_8030F564_00001BF0
lbl_fn_8030F564_00001AD0:
    lfs f0, lbl_80884C44
    fcmpo cr0, f31, f0
    bge lbl_fn_8030F564_00001AF8
    addi r3, r1, 0xa4
    addi r4, r1, 0x110
    bl fn_80011034
    addi r3, r1, 0x134
    addi r4, r1, 0xa4
    bl fn_8000D124
    b lbl_fn_8030F564_00001BF0
lbl_fn_8030F564_00001AF8:
    lfs f0, lbl_80884C88
    fcmpo cr0, f31, f0
    bge lbl_fn_8030F564_00001B24
    addi r3, r1, 0x98
    addi r4, r1, 0x110
    bl fn_80011034
    addi r3, r1, 0x134
    addi r4, r1, 0x98
    bl fn_8000D124
    lfs f30, lbl_80884C8C
    b lbl_fn_8030F564_00001BF0
lbl_fn_8030F564_00001B24:
    li r0, 0x1
    stw r0, 0x14bc(r30)
    lwz r4, 0x14d4(r30)
    addi r3, r30, 0xc64
    addi r5, r30, 0x528
    li r6, 0x0
    bl fn_80128930
    addi r3, r30, 0xc64
    bl fn_801255C8
    b lbl_fn_8030F564_00001BF0
lbl_fn_8030F564_00001B4C:
    cmpwi r0, 0x1
    bne lbl_fn_8030F564_00001BF0
    addi r3, r30, 0xc64
    bl fn_80126214
    addi r3, r30, 0xc64
    bl fn_80139F58
    mr r4, r3
    addi r3, r1, 0x104
    bl fn_8001047C
    addi r3, r1, 0x104
    bl fn_801162A0
    lfs f0, lbl_80884C5C
    fcmpo cr0, f1, f0
    ble lbl_fn_8030F564_00001BB0
    addi r3, r1, 0x104
    bl fn_8000D3A4
    fmr f31, f1
    addi r3, r1, 0x104
    bl fn_800F7FF0
    addi r3, r1, 0x8c
    addi r4, r1, 0x104
    bl fn_80011034
    addi r3, r1, 0x134
    addi r4, r1, 0x8c
    bl fn_8000D124
lbl_fn_8030F564_00001BB0:
    addi r3, r30, 0xc64
    bl fn_8013C3F4
    cmpwi r3, 0x0
    bne lbl_fn_8030F564_00001BE4
    addi r3, r1, 0x80
    addi r4, r30, 0x528
    addi r5, r30, 0xd50
    bl fn_80013338
    addi r3, r1, 0x80
    bl fn_801162A0
    fmuls f0, f29, f29
    fcmpo cr0, f1, f0
    bge lbl_fn_8030F564_00001BEC
lbl_fn_8030F564_00001BE4:
    li r0, 0x0
    stw r0, 0x14bc(r30)
lbl_fn_8030F564_00001BEC:
    lfs f30, lbl_80884C90
lbl_fn_8030F564_00001BF0:
    lwz r3, 0x14d4(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8030F564_00001C08
    bl fn_8013C480
    cmpwi r3, 0x0
    bne lbl_fn_8030F564_00002180
lbl_fn_8030F564_00001C08:
    lwz r0, 0x14cc(r30)
    li r3, -0x1
    stw r3, 0x14bc(r30)
    oris r0, r0, 0x8000
    stw r0, 0x14cc(r30)
    b lbl_fn_8030F564_00002180
    addi r3, r30, 0xc64
    bl fn_80126214
    addi r3, r30, 0xc64
    bl fn_80139F58
    mr r4, r3
    addi r3, r1, 0xf8
    bl fn_8001047C
    addi r3, r1, 0xf8
    bl fn_8000D3A4
    lfs f0, lbl_80884C94
    fmr f31, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_8030F564_00001C78
    addi r3, r1, 0x68
    addi r4, r1, 0xf8
    bl fn_800F7FD8
    addi r3, r1, 0x74
    addi r4, r1, 0x68
    bl fn_80011034
    addi r3, r1, 0x134
    addi r4, r1, 0x74
    bl fn_8000D124
lbl_fn_8030F564_00001C78:
    addi r3, r30, 0xc64
    bl fn_8013C3F4
    cmpwi r3, 0x0
    beq lbl_fn_8030F564_00002180
    lwz r0, 0x14cc(r30)
    oris r0, r0, 0x8000
    stw r0, 0x14cc(r30)
    b lbl_fn_8030F564_00002180
    lwz r0, 0xd1c(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8030F564_00001DFC
    addi r3, r30, 0xb0
    li r4, 0x0
    bl fn_80139550
    lwz r4, 0x58c(r30)
    fmr f29, f1
    lwz r3, 0xd1c(r30)
    subi r0, r4, 0x9
    slwi r0, r0, 4
    add r29, r30, r0
    bl fn_8013C38C
    mr r4, r3
    addi r3, r1, 0xec
    addi r5, r30, 0x528
    bl fn_80013338
    addi r3, r1, 0xec
    bl fn_801162A0
    bl fn_80011220
    lfs f0, lbl_80884C98
    fcmpo cr0, f1, f0
    blt lbl_fn_8030F564_00001CFC
    addi r3, r1, 0xec
    bl fn_800F7FF0
lbl_fn_8030F564_00001CFC:
    lwz r0, 0x1538(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8030F564_00001D14
    lwz r0, 0x14c0(r30)
    cmpwi r0, 0xf
    bge lbl_fn_8030F564_00001D2C
lbl_fn_8030F564_00001D14:
    addi r3, r1, 0x5c
    addi r4, r1, 0xec
    bl fn_80011034
    addi r3, r1, 0x134
    addi r4, r1, 0x5c
    bl fn_8000D124
lbl_fn_8030F564_00001D2C:
    lwz r0, 0x14bc(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8030F564_00001DC4
    lwz r0, 0x1538(r29)
    cmpwi r0, 0x1
    bne lbl_fn_8030F564_00001D5C
    addi r3, r1, 0x50
    addi r4, r1, 0xec
    bl fn_80011034
    addi r3, r1, 0x134
    addi r4, r1, 0x50
    bl fn_8000D124
lbl_fn_8030F564_00001D5C:
    lfs f0, 0x1530(r29)
    fcmpo cr0, f29, f0
    cror eq, gt, eq
    bne lbl_fn_8030F564_00002180
    lwz r28, 0x1534(r29)
    cmpwi r28, 0x0
    blt lbl_fn_8030F564_00001D7C
    b lbl_fn_8030F564_00001D88
lbl_fn_8030F564_00001D7C:
    bl fn_8013A194
    bl fn_800F8548
    mr r28, r3
lbl_fn_8030F564_00001D88:
    lwz r3, 0x14ec(r29)
    bl fn_80219E6C
    mr r29, r3
    bl fn_8013A194
    lfs f1, lbl_80884C5C
    mr r4, r30
    mr r5, r29
    mr r6, r28
    li r7, 0x1e
    li r8, -0x1
    bl fn_802F0964
    lwz r3, 0x14bc(r30)
    addi r0, r3, 0x1
    stw r0, 0x14bc(r30)
    b lbl_fn_8030F564_00002180
lbl_fn_8030F564_00001DC4:
    addi r3, r30, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fmr f29, f1
    addi r3, r30, 0xb0
    li r4, 0x0
    bl fn_80139550
    fcmpo cr0, f1, f29
    cror eq, gt, eq
    bne lbl_fn_8030F564_00002180
    lwz r0, 0x14cc(r30)
    oris r0, r0, 0x8000
    stw r0, 0x14cc(r30)
    b lbl_fn_8030F564_00002180
lbl_fn_8030F564_00001DFC:
    lwz r0, 0x14cc(r30)
    oris r0, r0, 0x8000
    stw r0, 0x14cc(r30)
    b lbl_fn_8030F564_00002180
    addi r3, r30, 0xb0
    li r4, 0x0
    bl fn_80139550
    lwz r4, 0x58c(r30)
    fmr f29, f1
    addi r3, r1, 0xe0
    subi r0, r4, 0x9
    slwi r0, r0, 4
    add r29, r30, r0
    bl fn_80057A64
    lwz r3, 0xd1c(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8030F564_00001E78
    bl fn_8013C38C
    mr r4, r3
    addi r3, r1, 0x44
    addi r5, r30, 0x528
    bl fn_80013338
    addi r3, r1, 0xe0
    bl fn_801162A0
    bl fn_80011220
    lfs f0, lbl_80884C98
    fcmpo cr0, f1, f0
    blt lbl_fn_8030F564_00001E90
    addi r3, r1, 0xe0
    bl fn_800F7FF0
    b lbl_fn_8030F564_00001E90
lbl_fn_8030F564_00001E78:
    mr r4, r30
    addi r3, r1, 0x38
    bl fn_8014052C
    addi r3, r1, 0xe0
    addi r4, r1, 0x38
    bl fn_8000D124
lbl_fn_8030F564_00001E90:
    lwz r0, 0x1538(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8030F564_00001EA8
    lwz r0, 0x14c0(r30)
    cmpwi r0, 0xf
    bge lbl_fn_8030F564_00001EC0
lbl_fn_8030F564_00001EA8:
    addi r3, r1, 0x2c
    addi r4, r1, 0xe0
    bl fn_80011034
    addi r3, r1, 0x134
    addi r4, r1, 0x2c
    bl fn_8000D124
lbl_fn_8030F564_00001EC0:
    lwz r0, 0x14bc(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8030F564_00001F44
    lwz r0, 0x1538(r29)
    cmpwi r0, 0x1
    bne lbl_fn_8030F564_00001EF0
    addi r3, r1, 0x20
    addi r4, r1, 0xe0
    bl fn_80011034
    addi r3, r1, 0x134
    addi r4, r1, 0x20
    bl fn_8000D124
lbl_fn_8030F564_00001EF0:
    addi r3, r30, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f29, f1
    cror eq, gt, eq
    bne lbl_fn_8030F564_00002180
    lwz r5, 0x14bc(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80884C5C
    li r4, 0x0
    addi r0, r5, 0x1
    stw r0, 0x14bc(r30)
    lfs f2, lbl_80884C80
    li r5, 0x146
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    mr r3, r30
    bl fn_8030FFF0
    b lbl_fn_8030F564_00002180
lbl_fn_8030F564_00001F44:
    cmpwi r0, 0x1
    bne lbl_fn_8030F564_00001FC0
    lwz r0, 0x1538(r29)
    cmpwi r0, 0x1
    bne lbl_fn_8030F564_00001F70
    addi r3, r1, 0x14
    addi r4, r1, 0xe0
    bl fn_80011034
    addi r3, r1, 0x134
    addi r4, r1, 0x14
    bl fn_8000D124
lbl_fn_8030F564_00001F70:
    lwz r3, 0x14d0(r30)
    addi r0, r3, 0x1
    stw r0, 0x14d0(r30)
    cmpwi r0, 0x3c
    blt lbl_fn_8030F564_00002180
    lwz r5, 0x14bc(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80884C5C
    li r4, 0x0
    addi r0, r5, 0x1
    stw r0, 0x14bc(r30)
    lfs f2, lbl_80884C80
    li r5, 0x147
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    mr r3, r30
    bl fn_80310084
    b lbl_fn_8030F564_00002180
lbl_fn_8030F564_00001FC0:
    cmpwi r0, 0x2
    bne lbl_fn_8030F564_00002054
    lwz r0, 0x1538(r29)
    cmpwi r0, 0x1
    bne lbl_fn_8030F564_00001FEC
    addi r3, r1, 0x8
    addi r4, r1, 0xe0
    bl fn_80011034
    addi r3, r1, 0x134
    addi r4, r1, 0x8
    bl fn_8000D124
lbl_fn_8030F564_00001FEC:
    lfs f0, 0x1530(r29)
    fcmpo cr0, f29, f0
    cror eq, gt, eq
    bne lbl_fn_8030F564_00002180
    lwz r28, 0x1534(r29)
    cmpwi r28, 0x0
    blt lbl_fn_8030F564_0000200C
    b lbl_fn_8030F564_00002018
lbl_fn_8030F564_0000200C:
    bl fn_8013A194
    bl fn_800F8548
    mr r28, r3
lbl_fn_8030F564_00002018:
    lwz r3, 0x14ec(r29)
    bl fn_80219E6C
    mr r29, r3
    bl fn_8013A194
    lfs f1, lbl_80884C5C
    mr r4, r30
    mr r5, r29
    mr r6, r28
    li r7, 0x1e
    li r8, -0x1
    bl fn_802F0964
    lwz r3, 0x14bc(r30)
    addi r0, r3, 0x1
    stw r0, 0x14bc(r30)
    b lbl_fn_8030F564_00002180
lbl_fn_8030F564_00002054:
    addi r3, r30, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fmr f29, f1
    addi r3, r30, 0xb0
    li r4, 0x0
    bl fn_80139550
    fcmpo cr0, f1, f29
    cror eq, gt, eq
    bne lbl_fn_8030F564_00002180
    lwz r0, 0x14cc(r30)
    oris r0, r0, 0x8000
    stw r0, 0x14cc(r30)
    b lbl_fn_8030F564_00002180
    addi r3, r30, 0xb0
    li r4, 0x0
    bl fn_80139550
    lwz r0, 0x14bc(r30)
    fmr f29, f1
    cmpwi r0, 0x0
    bne lbl_fn_8030F564_000020F4
    addi r3, r30, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f29, f1
    cror eq, gt, eq
    bne lbl_fn_8030F564_00002180
    lwz r5, 0x14bc(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80884C5C
    li r4, 0x0
    addi r0, r5, 0x1
    stw r0, 0x14bc(r30)
    lfs f2, lbl_80884C80
    li r5, 0x1e2
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_8030F564_00002180
lbl_fn_8030F564_000020F4:
    cmpwi r0, 0x1
    bne lbl_fn_8030F564_00002140
    mr r3, r30
    bl fn_8030E490
    cmpwi r3, 0x0
    bne lbl_fn_8030F564_00002180
    lwz r5, 0x14bc(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80884C5C
    li r4, 0x0
    addi r0, r5, 0x1
    stw r0, 0x14bc(r30)
    lfs f2, lbl_80884C80
    li r5, 0x1e3
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_8030F564_00002180
lbl_fn_8030F564_00002140:
    addi r3, r30, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f29, f1
    cror eq, gt, eq
    bne lbl_fn_8030F564_00002180
    lwz r3, 0x14bc(r30)
    lwz r0, 0x14cc(r30)
    addi r3, r3, 0x1
    stw r3, 0x14bc(r30)
    oris r0, r0, 0x8000
    stw r0, 0x14cc(r30)
    b lbl_fn_8030F564_00002180
lbl_fn_8030F564_00002174:
    mr r3, r30
    bl fn_805A4258
    b lbl_fn_8030F564_000021D0
lbl_fn_8030F564_00002180:
    cmpwi r31, 0x0
    beq lbl_fn_8030F564_000021B4
    mr r3, r30
    bl fn_8013C478
    cmpwi r3, 0x0
    beq lbl_fn_8030F564_000021B4
    lfs f0, 0x568(r30)
    fmr f1, f31
    mr r3, r30
    addi r4, r1, 0x134
    fmuls f2, f0, f30
    bl fn_80140588
    b lbl_fn_8030F564_000021D0
lbl_fn_8030F564_000021B4:
    lfs f0, 0x568(r30)
    fmr f1, f31
    mr r3, r30
    addi r4, r1, 0x134
    fmuls f2, f0, f30
    li r5, 0x0
    bl fn_8013CB68
lbl_fn_8030F564_000021D0:
    lwz r0, 0x194(r1)
    psq_l f31, 0x188(r1), 0, 0
    lfd f31, 0x180(r1)
    psq_l f30, 0x178(r1), 0, 0
    lfd f30, 0x170(r1)
    psq_l f29, 0x168(r1), 0, 0
    lfd f29, 0x160(r1)
    psq_l f28, 0x158(r1), 0, 0
    lfd f28, 0x150(r1)
    lwz r31, 0x14c(r1)
    lwz r30, 0x148(r1)
    lwz r29, 0x144(r1)
    lwz r28, 0x140(r1)
    mtlr r0
    addi r1, r1, 0x190
    blr
}
