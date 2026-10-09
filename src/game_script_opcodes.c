#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_26(void);
extern void _savegpr_26(void);
extern void dtor_80084684(void);
extern void fn_8004203C(void);
extern void fn_8005B3CC(void);
extern void fn_8005B5F8(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_800897D8(void);
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800A2D20(void);
extern void fn_800BFAC8(void);
extern void fn_800D246C(void);
extern void fn_800DC12C(void);
extern void fn_800DC288(void);
extern void fn_800DC6B4(void);
extern void fn_800EB7A0(void);
extern void fn_800EC204(void);
extern void fn_800EE360(void);
extern void fn_800F8548(void);
extern void fn_800FAB80(void);
extern void fn_80105BD8(void);
extern void fn_8011FC10(void);
extern void fn_80121F00(void);
extern void fn_80126214(void);
extern void fn_8013322C(void);
extern void fn_8013655C(void);
extern void fn_8013A258(void);
extern void fn_8013C504(void);
extern void fn_8013CB68(void);
extern void fn_80145334(void);
extern void fn_80149A30(void);
extern void fn_8014C540(void);
extern void fn_80151448(void);
extern void fn_8015495C(void);
extern void fn_8016DA4C(void);
extern void fn_8016E970(void);
extern void fn_801765D8(void);
extern void fn_80178208(void);
extern void fn_80178A6C(void);
extern void fn_801A03E0(void);
extern void fn_801C02F4(void);
extern void fn_801FED24(void);
extern void fn_801FEE08(void);
extern void fn_80219E6C(void);
extern void fn_8023780C(void);
extern void fn_8023781C(void);
extern void fn_80237874(void);
extern void fn_80246244(void);
extern void fn_80246594(void);
extern void fn_80246C30(void);
extern void fn_80246E48(void);
extern void fn_80247258(void);
extern void fn_80247674(void);
extern void fn_8035B78C(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473E8C(void);
extern void fn_80473F50(void);
extern void fn_8059B670(void);
extern void fn_805F8E70(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_80680770(void);
extern void fn_80682428(void);
extern void fn_80684600(void);
extern void fn_80686EA4(void);
extern void fn_8068AEA4(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 jumptable_80783CC8[];
extern u8 lbl_8074320C[];
extern u8 lbl_80775A88[];

/* Small data declarations */
extern u32 lbl_8087EF10;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F048;
extern u32 lbl_8087F1E4;
extern u32 lbl_8087F8A0;
extern u32 lbl_8087F9E8;
extern u32 lbl_808813D0;
extern u32 lbl_80883184;
extern u32 lbl_80883188;
extern u32 lbl_8088318C;
extern u32 lbl_80883190;
extern u32 lbl_80883194;
extern u32 lbl_80883198;
extern u32 lbl_8088319C;
extern u32 lbl_808831A0;
extern u32 lbl_808831A4;
extern u32 lbl_808831A8;
extern u32 lbl_808831AC;

/* Function declarations */
void fn_80244674(void);
void fn_802446F0(void);
void fn_80244898(void);
void fn_80244CA0(void);
void fn_80244CAC(void);
void fn_80244CBC(void);
void fn_80244CCC(void);
void fn_80244FC0(void);
void fn_802452B4(void);
void fn_80245310(void);
void fn_8024533C(void);
void fn_80245340(void);
void fn_802458BC(void);
void fn_80245ADC(void);
void fn_80245BBC(void);
void fn_80245F14(void);

asm void fn_80244674(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_fn_80244674_00000060
    beq lbl_fn_80244674_00000050
    beq lbl_fn_80244674_00000050
    beq lbl_fn_80244674_00000050
    lwz r4, 0x0(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80244674_00000050
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    mr r3, r4
    bl dtor_80084684
lbl_fn_80244674_00000050:
    cmpwi r31, 0x0
    ble lbl_fn_80244674_00000060
    mr r3, r30
    bl dtor_80084684
lbl_fn_80244674_00000060:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802446F0(void)
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
    beq lbl_fn_802446F0_00000204
    addic. r0, r3, 0x15c0
    beq lbl_fn_802446F0_000000C8
    lwz r4, 0x15c0(r3)
    cmpwi r4, 0x0
    beq lbl_fn_802446F0_000000C8
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_802446F0_000000C8
    bl fn_800897D8
lbl_fn_802446F0_000000C8:
    addic. r31, r29, 0x159c
    beq lbl_fn_802446F0_000000E8
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_802446F0_000000E8
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802446F0_000000E8:
    addic. r31, r29, 0x1590
    beq lbl_fn_802446F0_00000108
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_802446F0_00000108
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802446F0_00000108:
    addic. r31, r29, 0x1584
    beq lbl_fn_802446F0_00000128
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_802446F0_00000128
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802446F0_00000128:
    addic. r31, r29, 0x1578
    beq lbl_fn_802446F0_00000148
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_802446F0_00000148
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802446F0_00000148:
    addic. r4, r29, 0x14dc
    beq lbl_fn_802446F0_00000178
    beq lbl_fn_802446F0_00000178
    beq lbl_fn_802446F0_00000178
    beq lbl_fn_802446F0_00000178
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_802446F0_00000178
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_802446F0_00000178:
    addic. r4, r29, 0x14d0
    beq lbl_fn_802446F0_000001A8
    beq lbl_fn_802446F0_000001A8
    beq lbl_fn_802446F0_000001A8
    beq lbl_fn_802446F0_000001A8
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_802446F0_000001A8
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_802446F0_000001A8:
    addic. r4, r29, 0x14c4
    beq lbl_fn_802446F0_000001D8
    beq lbl_fn_802446F0_000001D8
    beq lbl_fn_802446F0_000001D8
    beq lbl_fn_802446F0_000001D8
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_802446F0_000001D8
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_802446F0_000001D8:
    addic. r3, r29, 0x14b0
    beq lbl_fn_802446F0_000001E8
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802446F0_000001E8:
    mr r3, r29
    li r4, 0x0
    bl fn_8035B78C
    cmpwi r30, 0x0
    ble lbl_fn_802446F0_00000204
    mr r3, r29
    bl dtor_80084684
lbl_fn_802446F0_00000204:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80244898(void)
{
    nofralloc
    stwu r1, -0x760(r1)
    mflr r0
    stw r0, 0x764(r1)
    stw r31, 0x75c(r1)
    stw r30, 0x758(r1)
    stw r29, 0x754(r1)
    stw r28, 0x750(r1)
    mr r28, r3
    lwz r0, 0x15a8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80244898_00000558
    addi r3, r3, 0x14b0
    bl fn_80473F50
    cmpwi r3, 0x0
    bne lbl_fn_80244898_00000608
    lis r4, lbl_8074320C@ha
    addi r3, r1, 0x18
    addi r30, r4, lbl_8074320C@l
    addi r4, r30, 0xa4
    bl fn_80247674
    addi r3, r28, 0x14b0
    bl fn_80470580
    cmpwi r3, 0x0
    beq lbl_fn_80244898_0000052C
    bl fn_80121F00
    cmpwi r3, 0x0
    beq lbl_fn_80244898_0000052C
    bl fn_80121F00
    bl fn_8013C504
    cmpwi r3, 0x0
    beq lbl_fn_80244898_0000052C
    addi r3, r28, 0x14b0
    bl fn_8047059C
    mr r31, r3
    addi r3, r28, 0x14b0
    bl fn_80470580
    mr r4, r3
    mr r5, r31
    addi r3, r1, 0x118
    bl fn_8004203C
lbl_fn_80244898_000002C4:
    addi r3, r1, 0x118
    bl fn_8005B3CC
    mr r31, r3
    addi r4, r30, 0xba
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80244898_000002F4
    addi r3, r1, 0x118
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x14bc(r28)
    b lbl_fn_80244898_0000051C
lbl_fn_80244898_000002F4:
    mr r3, r31
    addi r4, r30, 0xc5
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80244898_0000031C
    addi r3, r1, 0x118
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x14c0(r28)
    b lbl_fn_80244898_0000051C
lbl_fn_80244898_0000031C:
    mr r3, r31
    addi r4, r30, 0xd5
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80244898_00000374
lbl_fn_80244898_00000330:
    addi r3, r1, 0x118
    bl fn_8005B3CC
    bl fn_800DC12C
    mr r31, r3
    bl fn_80121F00
    bl fn_8013C504
    mr r4, r31
    bl fn_800EC204
    cmpwi r3, 0x0
    stw r3, 0x14(r1)
    beq lbl_fn_80244898_00000368
    addi r3, r28, 0x14c4
    addi r4, r1, 0x14
    bl fn_80244CCC
lbl_fn_80244898_00000368:
    cmpwi r31, 0x0
    bne lbl_fn_80244898_00000330
    b lbl_fn_80244898_0000051C
lbl_fn_80244898_00000374:
    mr r3, r31
    addi r4, r30, 0xe0
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80244898_000003CC
lbl_fn_80244898_00000388:
    addi r3, r1, 0x118
    bl fn_8005B3CC
    bl fn_800DC12C
    mr r31, r3
    bl fn_80121F00
    bl fn_8013C504
    mr r4, r31
    bl fn_800EC204
    cmpwi r3, 0x0
    stw r3, 0x10(r1)
    beq lbl_fn_80244898_000003C0
    addi r3, r28, 0x14d0
    addi r4, r1, 0x10
    bl fn_80244CCC
lbl_fn_80244898_000003C0:
    cmpwi r31, 0x0
    bne lbl_fn_80244898_00000388
    b lbl_fn_80244898_0000051C
lbl_fn_80244898_000003CC:
    mr r3, r31
    addi r4, r30, 0xf0
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80244898_00000420
lbl_fn_80244898_000003E0:
    addi r3, r1, 0x118
    bl fn_8005B3CC
    bl fn_800DC12C
    mr r31, r3
    bl fn_801A03E0
    mr r4, r31
    bl fn_8011FC10
    cmpwi r3, 0x0
    stw r3, 0xc(r1)
    beq lbl_fn_80244898_00000414
    addi r3, r28, 0x14dc
    addi r4, r1, 0xc
    bl fn_80244FC0
lbl_fn_80244898_00000414:
    cmpwi r31, 0x0
    bne lbl_fn_80244898_000003E0
    b lbl_fn_80244898_0000051C
lbl_fn_80244898_00000420:
    mr r3, r31
    addi r4, r30, 0x100
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80244898_0000044C
    addi r3, r1, 0x118
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r1, 0x18
    bl fn_802452B4
    b lbl_fn_80244898_0000051C
lbl_fn_80244898_0000044C:
    mr r3, r31
    addi r4, r30, 0x10e
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80244898_00000488
    addi r3, r1, 0x118
    bl fn_8005B3CC
    bl fn_80684600
    cmpwi r3, 0x2
    stw r3, 0x14b8(r28)
    bne lbl_fn_80244898_0000051C
    lwz r0, 0x12a4(r28)
    rlwinm r0, r0, 0, 10, 8
    stw r0, 0x12a4(r28)
    b lbl_fn_80244898_0000051C
lbl_fn_80244898_00000488:
    mr r3, r31
    addi r4, r30, 0x119
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80244898_000004DC
lbl_fn_80244898_0000049C:
    addi r3, r1, 0x118
    bl fn_8005B3CC
    bl fn_800DC12C
    mr r31, r3
    bl fn_801A03E0
    mr r4, r31
    bl fn_8011FC10
    cmpwi r3, 0x0
    stw r3, 0x8(r1)
    beq lbl_fn_80244898_000004D0
    addi r3, r28, 0x14e8
    addi r4, r1, 0x8
    bl fn_80245310
lbl_fn_80244898_000004D0:
    cmpwi r31, 0x0
    bne lbl_fn_80244898_0000049C
    b lbl_fn_80244898_0000051C
lbl_fn_80244898_000004DC:
    mr r3, r31
    addi r4, r30, 0x11f
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80244898_0000051C
    mr r31, r28
    li r29, 0x0
lbl_fn_80244898_000004F8:
    addi r3, r1, 0x118
    bl fn_8005B3CC
    bl fn_800DC12C
    bl fn_80219E6C
    addi r29, r29, 0x1
    stw r3, 0x1520(r31)
    cmpwi r29, 0x3
    addi r31, r31, 0x4
    blt lbl_fn_80244898_000004F8
lbl_fn_80244898_0000051C:
    addi r3, r1, 0x118
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_80244898_000002C4
lbl_fn_80244898_0000052C:
    li r0, 0x1
    stw r0, 0x15a8(r28)
    addi r3, r1, 0x18
    bl fn_8024533C
    mr r4, r3
    addi r3, r28, 0x159c
    bl fn_8023780C
    addi r3, r1, 0x18
    li r4, -0x1
    bl fn_800A2D20
    b lbl_fn_80244898_00000608
lbl_fn_80244898_00000558:
    cmpwi r0, 0x1
    bne lbl_fn_80244898_00000608
    bl fn_8013655C
    cmpwi r3, 0x0
    bne lbl_fn_80244898_00000608
    lwz r3, 0x1438(r28)
    cmpwi r3, 0x0
    beq lbl_fn_80244898_00000584
    bl fn_80244CA0
    cmpwi r3, 0x0
    beq lbl_fn_80244898_00000608
lbl_fn_80244898_00000584:
    addi r3, r28, 0x1578
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_80244898_00000608
    addi r3, r28, 0x1590
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_80244898_00000608
    addi r3, r28, 0x159c
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_80244898_00000608
    lwz r3, 0x15bc(r28)
    bl fn_80244CA0
    cmpwi r3, 0x0
    beq lbl_fn_80244898_00000608
    lwz r3, 0x15bc(r28)
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x15bc(r28)
    bl fn_80244CAC
    lwz r3, 0x15bc(r28)
    li r4, 0x0
    bl fn_80244CBC
    lwz r3, 0x1438(r28)
    cmpwi r3, 0x0
    beq lbl_fn_80244898_00000600
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x1438(r28)
    bl fn_80244CAC
lbl_fn_80244898_00000600:
    li r3, 0x1
    b lbl_fn_80244898_0000060C
lbl_fn_80244898_00000608:
    li r3, 0x0
lbl_fn_80244898_0000060C:
    lwz r0, 0x764(r1)
    lwz r31, 0x75c(r1)
    lwz r30, 0x758(r1)
    lwz r29, 0x754(r1)
    lwz r28, 0x750(r1)
    mtlr r0
    addi r1, r1, 0x760
    blr
}

asm void fn_80244CA0(void)
{
    nofralloc
    lwz r0, 0x38(r3)
    extrwi r3, r0, 1, 30
    blr
}

asm void fn_80244CAC(void)
{
    nofralloc
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    blr
}

asm void fn_80244CBC(void)
{
    nofralloc
    lwz r0, 0xfc(r3)
    rlwimi r0, r4, 28, 3, 3
    stw r0, 0xfc(r3)
    blr
}

asm void fn_80244CCC(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r4
    stw r29, 0x34(r1)
    mr r29, r3
    stw r28, 0x30(r1)
    lwz r6, 0x4(r3)
    lwz r5, 0x8(r3)
    cmplw r6, r5
    bge lbl_fn_80244CCC_000006AC
    addi r5, r6, 0x1
    stw r5, 0x4(r3)
    subi r0, r5, 0x1
    lwz r3, 0x0(r3)
    slwi r0, r0, 2
    lwz r4, 0x0(r4)
    stwx r4, r3, r0
    b lbl_fn_80244CCC_0000092C
lbl_fn_80244CCC_000006AC:
    lis r3, 0x4000
    subi r0, r3, 0x1
    subf r0, r5, r0
    cmplwi r0, 0x1
    bge lbl_fn_80244CCC_000006E4
    lis r4, lbl_8074320C@ha
    lis r3, __files@ha
    addi r4, r4, lbl_8074320C@l
    addi r3, r3, __files@l
    addi r4, r4, 0x12b
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80244CCC_000006E4:
    li r5, 0x0
    addi r4, r29, 0x8
    lis r3, 0x4000
    stw r5, 0x14(r1)
    subi r0, r3, 0x1
    stw r5, 0x18(r1)
    stw r5, 0x1c(r1)
    stw r4, 0x20(r1)
    stw r5, 0x24(r1)
    lwz r3, 0x4(r29)
    lwz r31, 0x8(r29)
    addi r3, r3, 0x1
    subf r3, r31, r3
    subf r0, r31, r0
    cmplw r3, r0
    stw r3, 0x10(r1)
    ble lbl_fn_80244CCC_0000074C
    lis r4, lbl_8074320C@ha
    lis r3, __files@ha
    addi r4, r4, lbl_8074320C@l
    addi r3, r3, __files@l
    addi r4, r4, 0x12b
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80244CCC_0000074C:
    lis r3, 0x1555
    addi r0, r3, 0x5555
    cmplw r31, r0
    bge lbl_fn_80244CCC_0000079C
    addi r5, r31, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x10(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x8
    srwi r4, r4, 2
    stw r4, 0x8(r1)
    cmplw r4, r0
    bge lbl_fn_80244CCC_00000790
    addi r3, r1, 0x10
lbl_fn_80244CCC_00000790:
    lwz r0, 0x0(r3)
    add r31, r31, r0
    b lbl_fn_80244CCC_000007E0
lbl_fn_80244CCC_0000079C:
    lis r3, 0x2aab
    subi r0, r3, 0x5556
    cmplw r31, r0
    bge lbl_fn_80244CCC_000007D8
    addi r3, r31, 0x1
    lwz r0, 0x10(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_80244CCC_000007CC
    addi r3, r1, 0x10
lbl_fn_80244CCC_000007CC:
    lwz r0, 0x0(r3)
    add r31, r31, r0
    b lbl_fn_80244CCC_000007E0
lbl_fn_80244CCC_000007D8:
    lis r3, 0x4000
    subi r31, r3, 0x1
lbl_fn_80244CCC_000007E0:
    lis r3, 0x4000
    subi r0, r3, 0x1
    cmplw r31, r0
    ble lbl_fn_80244CCC_00000814
    lis r4, lbl_8074320C@ha
    lis r3, __files@ha
    addi r4, r4, lbl_8074320C@l
    addi r3, r3, __files@l
    addi r4, r4, 0x12b
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80244CCC_00000814:
    slwi r3, r31, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r28, r3
    bne lbl_fn_80244CCC_00000848
    lis r3, __files@ha
    lis r4, lbl_80775A88@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80244CCC_00000848:
    lwz r0, 0x18(r1)
    stw r28, 0x14(r1)
    slwi r3, r0, 2
    lwz r4, 0x0(r30)
    stw r31, 0x1c(r1)
    lwz r0, 0x4(r29)
    stw r0, 0x24(r1)
    slwi r0, r0, 2
    add r0, r28, r0
    stwx r4, r3, r0
    lwz r3, 0x18(r1)
    lwz r0, 0x24(r1)
    addi r3, r3, 0x1
    stw r3, 0x18(r1)
    lwz r3, 0x14(r1)
    lwz r4, 0x4(r29)
    lwz r30, 0x0(r29)
    slwi r4, r4, 2
    add r5, r30, r4
    subf r5, r30, r5
    mr r4, r30
    srawi r5, r5, 2
    addze r28, r5
    subf r0, r28, r0
    stw r0, 0x24(r1)
    slwi r31, r28, 2
    slwi r0, r0, 2
    mr r5, r31
    add r3, r3, r0
    bl memcpy
    mr r3, r30
    mr r5, r31
    li r4, 0x0
    bl memset
    lwz r0, 0x18(r1)
    li r4, 0x0
    addic. r3, r1, 0x14
    add r0, r0, r28
    stw r0, 0x18(r1)
    stw r4, 0x4(r29)
    lwz r3, 0x8(r29)
    lwz r0, 0x1c(r1)
    stw r0, 0x8(r29)
    stw r3, 0x1c(r1)
    lwz r0, 0x14(r1)
    lwz r3, 0x0(r29)
    stw r0, 0x0(r29)
    stw r3, 0x14(r1)
    lwz r0, 0x18(r1)
    stw r0, 0x4(r29)
    stw r4, 0x18(r1)
    beq lbl_fn_80244CCC_0000092C
    lwz r3, 0x14(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80244CCC_0000092C
    stw r4, 0x18(r1)
    bl dtor_80084684
lbl_fn_80244CCC_0000092C:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80244FC0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r4
    stw r29, 0x34(r1)
    mr r29, r3
    stw r28, 0x30(r1)
    lwz r6, 0x4(r3)
    lwz r5, 0x8(r3)
    cmplw r6, r5
    bge lbl_fn_80244FC0_000009A0
    addi r5, r6, 0x1
    stw r5, 0x4(r3)
    subi r0, r5, 0x1
    lwz r3, 0x0(r3)
    slwi r0, r0, 2
    lwz r4, 0x0(r4)
    stwx r4, r3, r0
    b lbl_fn_80244FC0_00000C20
lbl_fn_80244FC0_000009A0:
    lis r3, 0x4000
    subi r0, r3, 0x1
    subf r0, r5, r0
    cmplwi r0, 0x1
    bge lbl_fn_80244FC0_000009D8
    lis r4, lbl_8074320C@ha
    lis r3, __files@ha
    addi r4, r4, lbl_8074320C@l
    addi r3, r3, __files@l
    addi r4, r4, 0x12b
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80244FC0_000009D8:
    li r5, 0x0
    addi r4, r29, 0x8
    lis r3, 0x4000
    stw r5, 0x14(r1)
    subi r0, r3, 0x1
    stw r5, 0x18(r1)
    stw r5, 0x1c(r1)
    stw r4, 0x20(r1)
    stw r5, 0x24(r1)
    lwz r3, 0x4(r29)
    lwz r31, 0x8(r29)
    addi r3, r3, 0x1
    subf r3, r31, r3
    subf r0, r31, r0
    cmplw r3, r0
    stw r3, 0x10(r1)
    ble lbl_fn_80244FC0_00000A40
    lis r4, lbl_8074320C@ha
    lis r3, __files@ha
    addi r4, r4, lbl_8074320C@l
    addi r3, r3, __files@l
    addi r4, r4, 0x12b
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80244FC0_00000A40:
    lis r3, 0x1555
    addi r0, r3, 0x5555
    cmplw r31, r0
    bge lbl_fn_80244FC0_00000A90
    addi r5, r31, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x10(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x8
    srwi r4, r4, 2
    stw r4, 0x8(r1)
    cmplw r4, r0
    bge lbl_fn_80244FC0_00000A84
    addi r3, r1, 0x10
lbl_fn_80244FC0_00000A84:
    lwz r0, 0x0(r3)
    add r31, r31, r0
    b lbl_fn_80244FC0_00000AD4
lbl_fn_80244FC0_00000A90:
    lis r3, 0x2aab
    subi r0, r3, 0x5556
    cmplw r31, r0
    bge lbl_fn_80244FC0_00000ACC
    addi r3, r31, 0x1
    lwz r0, 0x10(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_80244FC0_00000AC0
    addi r3, r1, 0x10
lbl_fn_80244FC0_00000AC0:
    lwz r0, 0x0(r3)
    add r31, r31, r0
    b lbl_fn_80244FC0_00000AD4
lbl_fn_80244FC0_00000ACC:
    lis r3, 0x4000
    subi r31, r3, 0x1
lbl_fn_80244FC0_00000AD4:
    lis r3, 0x4000
    subi r0, r3, 0x1
    cmplw r31, r0
    ble lbl_fn_80244FC0_00000B08
    lis r4, lbl_8074320C@ha
    lis r3, __files@ha
    addi r4, r4, lbl_8074320C@l
    addi r3, r3, __files@l
    addi r4, r4, 0x12b
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80244FC0_00000B08:
    slwi r3, r31, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r28, r3
    bne lbl_fn_80244FC0_00000B3C
    lis r3, __files@ha
    lis r4, lbl_80775A88@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80244FC0_00000B3C:
    lwz r0, 0x18(r1)
    stw r28, 0x14(r1)
    slwi r3, r0, 2
    lwz r4, 0x0(r30)
    stw r31, 0x1c(r1)
    lwz r0, 0x4(r29)
    stw r0, 0x24(r1)
    slwi r0, r0, 2
    add r0, r28, r0
    stwx r4, r3, r0
    lwz r3, 0x18(r1)
    lwz r0, 0x24(r1)
    addi r3, r3, 0x1
    stw r3, 0x18(r1)
    lwz r3, 0x14(r1)
    lwz r4, 0x4(r29)
    lwz r30, 0x0(r29)
    slwi r4, r4, 2
    add r5, r30, r4
    subf r5, r30, r5
    mr r4, r30
    srawi r5, r5, 2
    addze r28, r5
    subf r0, r28, r0
    stw r0, 0x24(r1)
    slwi r31, r28, 2
    slwi r0, r0, 2
    mr r5, r31
    add r3, r3, r0
    bl memcpy
    mr r3, r30
    mr r5, r31
    li r4, 0x0
    bl memset
    lwz r0, 0x18(r1)
    li r4, 0x0
    addic. r3, r1, 0x14
    add r0, r0, r28
    stw r0, 0x18(r1)
    stw r4, 0x4(r29)
    lwz r3, 0x8(r29)
    lwz r0, 0x1c(r1)
    stw r0, 0x8(r29)
    stw r3, 0x1c(r1)
    lwz r0, 0x14(r1)
    lwz r3, 0x0(r29)
    stw r0, 0x0(r29)
    stw r3, 0x14(r1)
    lwz r0, 0x18(r1)
    stw r0, 0x4(r29)
    stw r4, 0x18(r1)
    beq lbl_fn_80244FC0_00000C20
    lwz r3, 0x14(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80244FC0_00000C20
    stw r4, 0x18(r1)
    bl dtor_80084684
lbl_fn_80244FC0_00000C20:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_802452B4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmplw r4, r3
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_fn_802452B4_00000C80
    mr r3, r31
    bl strlen
    mr r5, r3
    mr r3, r30
    mr r4, r31
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_802452B4_00000C80:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80245310(void)
{
    nofralloc
    lwz r0, 0x0(r3)
    slwi r0, r0, 2
    add r0, r3, r0
    addic. r5, r0, 0x4
    beq lbl_fn_80245310_00000CB8
    lwz r0, 0x0(r4)
    stw r0, 0x0(r5)
lbl_fn_80245310_00000CB8:
    lwz r4, 0x0(r3)
    addi r0, r4, 0x1
    stw r0, 0x0(r3)
    blr
}

asm void fn_8024533C(void)
{
    nofralloc
    blr
}

asm void fn_80245340(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    stfd f31, 0x80(r1)
    psq_st f31, 0x88(r1), 0, 0
    stfd f30, 0x70(r1)
    psq_st f30, 0x78(r1), 0, 0
    stfd f29, 0x60(r1)
    psq_st f29, 0x68(r1), 0, 0
    stfd f28, 0x50(r1)
    psq_st f28, 0x58(r1), 0, 0
    stw r31, 0x4c(r1)
    mr r31, r3
    stw r30, 0x48(r1)
    stw r29, 0x44(r1)
    lwz r4, 0x1550(r3)
    lwz r5, 0x1518(r3)
    lwz r6, 0xd1c(r3)
    cmpwi r4, 0x0
    addi r0, r5, 0x1
    stw r6, 0x1510(r3)
    stw r0, 0x1518(r3)
    blt lbl_fn_80245340_00000D30
    subi r0, r4, 0x1
    stw r0, 0x1550(r3)
lbl_fn_80245340_00000D30:
    lwz r0, 0x58c(r3)
    cmpwi r0, 0xa
    beq lbl_fn_80245340_00000DFC
    cmpwi r0, 0xb
    beq lbl_fn_80245340_00000DFC
    lwz r0, 0x1570(r3)
    lfs f0, 0x14c0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80245340_00000D68
    lwz r0, 0x14b8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80245340_00000D68
    li r29, 0x0
    b lbl_fn_80245340_00000DF0
lbl_fn_80245340_00000D68:
    lfs f2, 0x530(r3)
    addi r4, r1, 0x8
    psq_l f1, 0x528(r3), 0, 0
    fmuls f31, f0, f0
    psq_st f1, 0x0(r4), 0, 0
    frsp f28, f2
    lwz r3, lbl_8087F8A0
    li r29, 0x0
    stfs f2, 0x10(r1)
    lwz r30, 0x48(r3)
    lfs f29, 0xc(r1)
    lfs f30, 0x8(r1)
    b lbl_fn_80245340_00000DE8
lbl_fn_80245340_00000D9C:
    lwz r0, 0x7e0(r30)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_80245340_00000DE4
    lfs f4, 0x530(r30)
    addi r3, r1, 0x14
    lfs f3, 0x52c(r30)
    lfs f0, 0x528(r30)
    fsubs f4, f4, f28
    fsubs f3, f3, f29
    fsubs f0, f0, f30
    stfs f4, 0x1c(r1)
    stfs f0, 0x14(r1)
    stfs f3, 0x18(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f31
    bge lbl_fn_80245340_00000DE4
    addi r29, r29, 0x1
lbl_fn_80245340_00000DE4:
    lwz r30, 0x14ac(r30)
lbl_fn_80245340_00000DE8:
    cmpwi r30, 0x0
    bne lbl_fn_80245340_00000D9C
lbl_fn_80245340_00000DF0:
    lwz r0, 0x1554(r31)
    add r0, r0, r29
    stw r0, 0x1554(r31)
lbl_fn_80245340_00000DFC:
    lwz r0, 0xd18(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80245340_00000E20
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80245340_000011FC
    cmpwi r0, 0x2
    beq lbl_fn_80245340_000011FC
    b lbl_fn_80245340_0000120C
lbl_fn_80245340_00000E20:
    lwz r0, 0x1510(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80245340_000011FC
    lwz r0, 0x58c(r31)
    cmplwi r0, 0xe
    bgt lbl_fn_80245340_000011C8
    lis r3, jumptable_80783CC8@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_80783CC8@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0xec(r12)
    mtctr r12
    bctrl
    b lbl_fn_80245340_000011FC
    lfs f28, 0x2e4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f28, f1
    cror eq, gt, eq
    bne lbl_fn_80245340_000011FC
    lwz r3, 0x1434(r31)
    lwz r4, 0x12a4(r31)
    lwz r0, 0x5c0(r31)
    cmpwi r3, 0x0
    oris r4, r4, 0x200
    stw r4, 0x12a4(r31)
    clrrwi r0, r0, 1
    stw r0, 0x5c0(r31)
    ble lbl_fn_80245340_00000EC8
    subi r0, r3, 0x1
    stw r0, 0x1434(r31)
    cmpwi r0, 0x28
    bne lbl_fn_80245340_000011FC
    lwz r3, lbl_8087F048
    addi r4, r31, 0xb0
    bl fn_80105BD8
    b lbl_fn_80245340_000011FC
lbl_fn_80245340_00000EC8:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
    lwz r0, 0x12a4(r31)
    mr r3, r31
    ori r0, r0, 0x8000
    stw r0, 0x12a4(r31)
    bl fn_801765D8
    lwz r0, 0x14b8(r31)
    cmpwi r0, 0x2
    beq lbl_fn_80245340_000011FC
    mr r3, r31
    bl fn_800EE360
    b lbl_fn_80245340_000011FC
    mr r3, r31
    bl fn_80246594
    b lbl_fn_80245340_000011FC
    lfs f28, 0x2e4(r31)
    lfs f0, lbl_80883184
    lwz r0, 0x152c(r31)
    fsubs f3, f28, f0
    lfs f0, lbl_80883188
    slwi r0, r0, 2
    add r3, r31, r0
    fabs f3, f3
    lwz r4, 0x1520(r3)
    stw r4, 0x638(r31)
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80245340_00000FC4
    li r0, 0x0
    stw r0, 0x20(r1)
    lwz r3, lbl_8087F9E8
    mr r5, r31
    lfs f1, lbl_8088318C
    addi r7, r31, 0x1534
    addi r8, r31, 0x534
    addi r9, r1, 0x20
    li r6, 0x0
    bl fn_8059B670
    addic. r3, r1, 0x20
    beq lbl_fn_80245340_00000FAC
    lwz r4, 0x20(r1)
    cmpwi r4, 0x0
    beq lbl_fn_80245340_00000FAC
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_80245340_00000FA4
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80245340_00000FA4:
    li r0, 0x0
    stw r0, 0x20(r1)
lbl_fn_80245340_00000FAC:
    lwz r0, 0x152c(r31)
    cmpwi r0, 0x1
    bne lbl_fn_80245340_000011FC
    li r0, 0x384
    stw r0, 0x1550(r31)
    b lbl_fn_80245340_000011FC
lbl_fn_80245340_00000FC4:
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f28, f1
    cror eq, gt, eq
    bne lbl_fn_80245340_000011FC
    lfs f0, lbl_80883190
    li r30, 0x0
    stfs f0, 0xfb8(r31)
    stw r30, 0x1514(r31)
    stw r30, 0x1518(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r3, r31
    li r4, 0x3
    stw r30, 0x58c(r31)
    bl fn_8016E970
    lis r5, lbl_8074320C@ha
    li r3, 0x34
    addi r5, r5, lbl_8074320C@l
    li r4, 0x0
    addi r5, r5, 0x2b
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_80245340_00001044
    mr r4, r31
    bl fn_801C02F4
    mr r4, r3
lbl_fn_80245340_00001044:
    mr r3, r31
    bl fn_80178208
    b lbl_fn_80245340_000011FC
    lwz r0, 0x1574(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80245340_00001084
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_80883190
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_80245340_00001084
    mr r3, r31
    bl fn_80247258
    li r0, 0x1
    stw r0, 0x1574(r31)
    b lbl_fn_80245340_000011FC
lbl_fn_80245340_00001084:
    lfs f28, 0x2e4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f28, f1
    cror eq, gt, eq
    bne lbl_fn_80245340_000011FC
    li r30, 0x0
    stw r30, 0x1514(r31)
    stw r30, 0x1518(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r3, r31
    li r4, 0x3
    stw r30, 0x58c(r31)
    bl fn_8016E970
    b lbl_fn_80245340_000011FC
    lfs f28, 0x2e4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f28, f1
    cror eq, gt, eq
    bne lbl_fn_80245340_000011FC
    mr r3, r31
    bl fn_80246E48
    b lbl_fn_80245340_000011FC
    lfs f28, 0x2e4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f28, f1
    cror eq, gt, eq
    bne lbl_fn_80245340_000011FC
    li r30, 0x0
    stw r30, 0x1514(r31)
    stw r30, 0x1518(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r3, r31
    li r4, 0x3
    stw r30, 0x58c(r31)
    bl fn_8016E970
    b lbl_fn_80245340_000011FC
    lwz r3, lbl_8087EFA8
    lfs f3, 0x156c(r31)
    lfs f4, 0x3a4(r3)
    lfs f0, lbl_80883190
    fadds f3, f3, f4
    stfs f3, 0x156c(r31)
    fcmpo cr0, f3, f0
    ble lbl_fn_80245340_000011FC
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    lfs f3, lbl_80883184
    addi r3, r31, 0xb0
    lfs f0, 0x52c(r31)
    li r4, 0x0
    fdivs f3, f3, f1
    fadds f0, f0, f3
    stfs f0, 0x52c(r31)
    bl fn_80097D7C
    lfs f3, lbl_80883194
    addi r3, r31, 0xb0
    lfs f0, 0x538(r31)
    li r4, 0x0
    fdivs f3, f3, f1
    fadds f0, f0, f3
    stfs f0, 0x538(r31)
    bl fn_80097D7C
    lfs f0, 0x156c(r31)
    fcmpo cr0, f0, f1
    cror eq, gt, eq
    bne lbl_fn_80245340_000011FC
    mr r3, r31
    li r4, 0x0
    bl fn_80246C30
    b lbl_fn_80245340_000011FC
lbl_fn_80245340_000011C8:
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x6
    beq lbl_fn_80245340_000011E0
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
lbl_fn_80245340_000011E0:
    mr r3, r31
    bl fn_80245F14
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x3
    bne lbl_fn_80245340_000011FC
    mr r3, r31
    bl fn_80246244
lbl_fn_80245340_000011FC:
    mr r3, r31
    bl fn_8014C540
    mr r3, r31
    bl fn_80145334
lbl_fn_80245340_0000120C:
    lwz r0, 0x94(r1)
    psq_l f31, 0x88(r1), 0, 0
    lfd f31, 0x80(r1)
    psq_l f30, 0x78(r1), 0, 0
    lfd f30, 0x70(r1)
    psq_l f29, 0x68(r1), 0, 0
    lfd f29, 0x60(r1)
    psq_l f28, 0x58(r1), 0, 0
    lfd f28, 0x50(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_802458BC(void)
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
    stw r29, 0x24(r1)
    stw r28, 0x20(r1)
    bl fn_80149A30
    lwz r3, 0x15bc(r31)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_802458BC_00001290
    lfs f0, lbl_80883190
    stfs f0, 0x100(r3)
lbl_fn_802458BC_00001290:
    lwz r3, 0x15bc(r31)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r0, 0x7e0(r31)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_802458BC_00001440
    lwz r0, 0x15ac(r31)
    cmpwi r0, 0x0
    beq lbl_fn_802458BC_00001440
    lwz r0, 0x58c(r31)
    cmpwi r0, 0xe
    beq lbl_fn_802458BC_00001440
    lis r4, lbl_8074320C@ha
    addi r3, r31, 0xb0
    addi r4, r4, lbl_8074320C@l
    li r5, 0x0
    addi r4, r4, 0x13f
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802458BC_000012F0
    li r4, 0x0
    b lbl_fn_802458BC_000012FC
lbl_fn_802458BC_000012F0:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r4, r3, r0
lbl_fn_802458BC_000012FC:
    lfs f2, 0x1c(r4)
    addi r3, r1, 0x8
    lfs f0, lbl_80883198
    addi r5, r1, 0x14
    lfs f1, 0x2c(r4)
    lfs f3, 0xc(r4)
    fadds f0, f2, f0
    stfs f3, 0x14(r1)
    lwz r4, lbl_8087EFB4
    stfs f1, 0x1c(r1)
    stfs f0, 0x18(r1)
    bl fn_800BFAC8
    lfs f0, lbl_80883190
    lfs f1, 0x10(r1)
    fcmpo cr0, f0, f1
    cror eq, lt, eq
    bne lbl_fn_802458BC_00001440
    lfs f0, lbl_8088318C
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_802458BC_00001440
    lwz r4, 0x15bc(r31)
    lis r30, lbl_8074320C@ha
    addi r30, r30, lbl_8074320C@l
    lwz r0, 0x38(r4)
    addi r3, r30, 0x144
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0x15bc(r31)
    lfs f31, 0x8(r1)
    addi r29, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r29
    li r5, 0x0
    bl fn_801FED24
    lwz r4, 0x15bc(r31)
    addi r3, r30, 0x144
    lfs f31, 0xc(r1)
    addi r29, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r29
    li r5, 0x1
    bl fn_801FED24
    lwz r3, lbl_8087F1E4
    lwz r29, 0xb64(r3)
    cmpwi r29, 0x0
    beq lbl_fn_802458BC_000013CC
    b lbl_fn_802458BC_000013D0
lbl_fn_802458BC_000013CC:
    la r29, lbl_808813D0
lbl_fn_802458BC_000013D0:
    cmpwi r29, 0x0
    beq lbl_fn_802458BC_00001440
    lwz r4, 0x15bc(r31)
    lis r30, lbl_8074320C@ha
    addi r30, r30, lbl_8074320C@l
    addi r3, r30, 0x14f
    addi r28, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r28
    mr r5, r29
    bl fn_801FEE08
    lwz r4, 0x15bc(r31)
    addi r3, r30, 0x15d
    addi r28, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r28
    mr r5, r29
    bl fn_801FEE08
    lwz r4, 0x15bc(r31)
    addi r3, r30, 0x16b
    addi r28, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r28
    mr r5, r29
    bl fn_801FEE08
lbl_fn_802458BC_00001440:
    lwz r0, 0x44(r1)
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80245ADC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x15ac(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80245ADC_000014AC
    lwz r5, 0x58c(r3)
    subi r0, r5, 0x9
    cmplwi r0, 0x3
    ble lbl_fn_80245ADC_000014AC
    cmpwi r5, 0x0
    beq lbl_fn_80245ADC_000014C4
    b lbl_fn_80245ADC_0000150C
lbl_fn_80245ADC_000014AC:
    li r0, 0x0
    stw r0, 0x90(r4)
    stw r0, 0x84(r4)
    stw r0, 0x68(r4)
    stw r0, 0x8c(r4)
    b lbl_fn_80245ADC_00001530
lbl_fn_80245ADC_000014C4:
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_80245ADC_0000150C
    lwz r0, 0x560(r3)
    cmpwi r0, 0x17
    beq lbl_fn_80245ADC_000014E4
    cmpwi r0, 0x1b
    bne lbl_fn_80245ADC_0000150C
lbl_fn_80245ADC_000014E4:
    lfs f2, 0x10(r4)
    lfs f3, lbl_80883190
    lfs f1, 0x14(r4)
    lfs f0, 0x18(r4)
    fmuls f2, f2, f3
    fmuls f1, f1, f3
    fmuls f0, f0, f3
    stfs f2, 0x10(r4)
    stfs f1, 0x14(r4)
    stfs f0, 0x18(r4)
lbl_fn_80245ADC_0000150C:
    mr r3, r30
    mr r4, r31
    bl fn_80151448
    lwz r12, 0x0(r30)
    mr r3, r30
    mr r4, r31
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
lbl_fn_80245ADC_00001530:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80245BBC(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x40
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    bl _savegpr_26
    lwz r0, 0x58c(r3)
    mr r31, r3
    cmpwi r0, 0xe
    beq lbl_fn_80245BBC_000015A0
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_80245BBC_000015A0
    lwz r5, 0x560(r3)
    subi r0, r5, 0x16
    cmplwi r0, 0x1
    bgt lbl_fn_80245BBC_000015A0
    li r0, 0x0
    stw r0, 0x58c(r3)
    stw r0, 0x1514(r3)
    stw r0, 0x1518(r3)
lbl_fn_80245BBC_000015A0:
    lwz r0, 0x14b8(r3)
    li r29, 0x1
    stw r29, 0x1570(r3)
    cmpwi r0, 0x2
    bne lbl_fn_80245BBC_00001744
    lwz r4, 0x0(r4)
    cmpwi r4, 0x0
    beq lbl_fn_80245BBC_00001880
    lfs f3, 0x530(r4)
    lfs f0, 0x530(r3)
    lfs f5, 0x52c(r4)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r3)
    lfs f0, 0x528(r3)
    addi r3, r1, 0x10
    lfs f3, 0x528(r4)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x14(r1)
    stfs f0, 0x10(r1)
    stfs f6, 0x18(r1)
    bl fn_805F9940
    lfs f0, lbl_80883184
    fcmpo cr0, f1, f0
    bge lbl_fn_80245BBC_00001880
    addi r3, r1, 0x1c
    psq_l f1, 0x528(r31), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lfs f2, 0x530(r31)
    lfs f3, 0x20(r1)
    lfs f0, lbl_8088319C
    lwz r28, lbl_8087F048
    fadds f0, f3, f0
    stfs f2, 0x24(r1)
    mr r3, r28
    stfs f0, 0x20(r1)
    bl fn_800F8548
    mr r30, r3
    li r3, 0x69d
    bl fn_80219E6C
    li r0, -0x1
    stw r0, 0x8(r1)
    lfs f1, lbl_80883190
    mr r5, r3
    stw r0, 0xc(r1)
    mr r3, r28
    lfs f2, lbl_8088318C
    mr r4, r31
    mr r6, r30
    addi r7, r31, 0x528
    addi r8, r31, 0x534
    li r9, 0x0
    li r10, 0x1e
    bl fn_800FAB80
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x48(r12)
    mtctr r12
    bctrl
    mr r3, r31
    bl fn_80178A6C
    mr r3, r31
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    bl fn_8015495C
    mr r3, r31
    bl fn_8016DA4C
    lwz r0, 0x14b8(r31)
    li r3, 0x2
    lfs f0, lbl_8088318C
    cmpwi r0, 0x2
    stw r3, 0x58c(r31)
    stw r29, 0x3fc(r31)
    stfs f0, 0x2fc(r31)
    stfs f0, 0x2e8(r31)
    bne lbl_fn_80245BBC_00001714
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
    lfs f1, lbl_80883190
    addi r3, r31, 0xb0
    lfs f2, lbl_808831A0
    li r4, 0x0
    li r5, 0x33
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_80245BBC_00001880
lbl_fn_80245BBC_00001714:
    lfs f1, lbl_80883190
    addi r3, r31, 0xb0
    lfs f2, lbl_808831A0
    li r4, 0x0
    li r5, 0x2e
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    mr r3, r31
    bl fn_800EB7A0
    b lbl_fn_80245BBC_00001880
lbl_fn_80245BBC_00001744:
    lfs f31, lbl_8088318C
    mr r28, r31
    li r26, 0x0
    li r30, 0x2
    b lbl_fn_80245BBC_00001848
lbl_fn_80245BBC_00001758:
    lwz r27, 0x14ec(r28)
    cmpwi r27, 0x0
    beq lbl_fn_80245BBC_00001840
    lwz r0, 0x7e0(r27)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_80245BBC_00001840
    lwz r0, 0xd18(r27)
    cmpwi r0, 0x0
    beq lbl_fn_80245BBC_00001840
    lwz r12, 0x0(r27)
    mr r3, r27
    lwz r12, 0x48(r12)
    mtctr r12
    bctrl
    mr r3, r27
    bl fn_80178A6C
    mr r3, r27
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    bl fn_8015495C
    mr r3, r27
    bl fn_8016DA4C
    stw r30, 0x58c(r27)
    stw r29, 0x3fc(r27)
    stfs f31, 0x2fc(r27)
    stfs f31, 0x2e8(r27)
    lwz r0, 0x14b8(r27)
    cmpwi r0, 0x2
    bne lbl_fn_80245BBC_00001814
    lwz r12, 0x0(r27)
    mr r3, r27
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
    lfs f1, lbl_80883190
    addi r3, r27, 0xb0
    lfs f2, lbl_808831A0
    li r4, 0x0
    li r5, 0x33
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_80245BBC_00001840
lbl_fn_80245BBC_00001814:
    lfs f1, lbl_80883190
    addi r3, r27, 0xb0
    lfs f2, lbl_808831A0
    li r4, 0x0
    li r5, 0x2e
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    mr r3, r27
    bl fn_800EB7A0
lbl_fn_80245BBC_00001840:
    addi r28, r28, 0x4
    addi r26, r26, 0x1
lbl_fn_80245BBC_00001848:
    lwz r0, 0x14e8(r31)
    cmplw r26, r0
    blt lbl_fn_80245BBC_00001758
    lwz r0, 0x7e0(r31)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_80245BBC_00001880
    lfs f0, lbl_8088318C
    addi r3, r31, 0x7d4
    stfs f0, 0x7d8(r31)
    li r4, 0x20
    bl fn_8013322C
    li r0, 0x1
    stw r0, 0x15ac(r31)
lbl_fn_80245BBC_00001880:
    addi r11, r1, 0x40
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    bl _restgpr_26
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80245F14(void)
{
    nofralloc
    stwu r1, -0x160(r1)
    mflr r0
    stw r0, 0x164(r1)
    addi r4, r1, 0x8c
    addi r5, r1, 0x80
    stfd f31, 0x150(r1)
    psq_st f31, 0x158(r1), 0, 0
    lfs f31, lbl_80883190
    stfd f30, 0x140(r1)
    psq_st f30, 0x148(r1), 0, 0
    lfs f30, lbl_8088318C
    stfd f29, 0x130(r1)
    psq_st f29, 0x138(r1), 0, 0
    stfd f28, 0x120(r1)
    psq_st f28, 0x128(r1), 0, 0
    stw r31, 0x11c(r1)
    stw r30, 0x118(r1)
    stw r29, 0x114(r1)
    mr r29, r3
    psq_l f1, 0x534(r3), 0, 0
    lfs f2, 0x53c(r3)
    stfs f2, 0x94(r1)
    psq_st f1, 0x0(r4), 0, 0
    lwz r4, 0x1510(r3)
    lfs f0, 0x530(r3)
    lfs f2, 0x530(r4)
    psq_l f1, 0x528(r4), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    fsubs f6, f2, f0
    lfs f4, 0x52c(r3)
    lfs f0, 0x528(r3)
    addi r3, r1, 0x74
    lfs f5, 0x84(r1)
    lfs f3, 0x80(r1)
    fsubs f4, f5, f4
    stfs f2, 0x88(r1)
    fsubs f0, f3, f0
    stfs f4, 0x78(r1)
    stfs f0, 0x74(r1)
    stfs f6, 0x7c(r1)
    bl fn_805F9940
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x7
    bne lbl_fn_80245F14_00001B64
    addi r3, r29, 0x1030
    bl fn_80126214
    addi r4, r29, 0x1088
    addi r31, r1, 0x68
    psq_l f1, 0x0(r4), 0, 0
    mr r3, r31
    lfs f2, 0x1090(r29)
    stfs f2, 0x70(r1)
    psq_st f1, 0x0(r31), 0, 0
    bl fn_805F9940
    lfs f0, lbl_808831A4
    fmr f31, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_80245F14_00001B78
    addi r30, r1, 0x50
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x70(r1)
    mr r3, r30
    psq_st f1, 0x0(r30), 0, 0
    mr r4, r30
    stfs f2, 0x58(r1)
    bl fn_805F98D0
    lfs f2, 0x58(r1)
    addi r31, r1, 0x5c
    psq_l f1, 0x0(r30), 0, 0
    fabs f3, f2
    lfs f0, lbl_80883188
    psq_st f1, 0x0(r31), 0, 0
    frsp f3, f3
    stfs f2, 0x64(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_80245F14_000019F4
    lfs f3, 0x5c(r1)
    lfs f0, lbl_80883190
    fcmpo cr0, f3, f0
    ble lbl_fn_80245F14_000019E8
    lfs f0, lbl_808831A8
    b lbl_fn_80245F14_000019EC
lbl_fn_80245F14_000019E8:
    lfs f0, lbl_808831AC
lbl_fn_80245F14_000019EC:
    stfs f0, 0x48(r1)
    b lbl_fn_80245F14_00001A08
lbl_fn_80245F14_000019F4:
    frsp f2, f2
    lfs f1, 0x5c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_80245F14_00001A08:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x98
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883190
    addi r4, r1, 0x38
    lfs f28, 0xa0(r1)
    mr r5, r4
    lfs f29, 0x9c(r1)
    addi r3, r1, 0xc8
    lfs f13, 0x98(r1)
    lfs f12, 0xb0(r1)
    lfs f11, 0xac(r1)
    lfs f10, 0xa8(r1)
    lfs f9, 0xc0(r1)
    lfs f8, 0xbc(r1)
    lfs f7, 0xb8(r1)
    lfs f6, 0xc4(r1)
    lfs f5, 0xb4(r1)
    lfs f4, 0xa4(r1)
    lfs f0, lbl_8088318C
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x64(r1)
    stfs f3, 0xf8(r1)
    stfs f3, 0xfc(r1)
    stfs f3, 0x100(r1)
    stfs f0, 0x104(r1)
    stfs f13, 0x8(r1)
    stfs f29, 0xc(r1)
    stfs f28, 0x10(r1)
    stfs f13, 0xc8(r1)
    stfs f29, 0xcc(r1)
    stfs f28, 0xd0(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xd8(r1)
    stfs f11, 0xdc(r1)
    stfs f12, 0xe0(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0xe8(r1)
    stfs f8, 0xec(r1)
    stfs f9, 0xf0(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xd4(r1)
    stfs f5, 0xe4(r1)
    stfs f6, 0xf4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80883188
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80245F14_00001B24
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80883190
    fcmpo cr0, f3, f0
    ble lbl_fn_80245F14_00001B14
    lfs f0, lbl_808831A8
    b lbl_fn_80245F14_00001B18
lbl_fn_80245F14_00001B14:
    lfs f0, lbl_808831AC
lbl_fn_80245F14_00001B18:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_80245F14_00001B38
lbl_fn_80245F14_00001B24:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_80245F14_00001B38:
    lfs f2, lbl_80883190
    addi r3, r1, 0x44
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x8c
    stfs f2, 0x4c(r1)
    stfs f2, 0x64(r1)
    frsp f2, f2
    psq_st f1, 0x0(r31), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x94(r1)
    b lbl_fn_80245F14_00001B78
lbl_fn_80245F14_00001B64:
    cmpwi r0, 0x6
    bne lbl_fn_80245F14_00001B78
    mr r3, r29
    bl fn_8013A258
    b lbl_fn_80245F14_00001B94
lbl_fn_80245F14_00001B78:
    lfs f0, 0x568(r29)
    fmr f1, f31
    mr r3, r29
    addi r4, r1, 0x8c
    fmuls f2, f0, f30
    li r5, 0x1
    bl fn_8013CB68
lbl_fn_80245F14_00001B94:
    lwz r0, 0x164(r1)
    psq_l f31, 0x158(r1), 0, 0
    lfd f31, 0x150(r1)
    psq_l f30, 0x148(r1), 0, 0
    lfd f30, 0x140(r1)
    psq_l f29, 0x138(r1), 0, 0
    lfd f29, 0x130(r1)
    psq_l f28, 0x128(r1), 0, 0
    lfd f28, 0x120(r1)
    lwz r31, 0x11c(r1)
    lwz r30, 0x118(r1)
    lwz r29, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x160
    blr
}
