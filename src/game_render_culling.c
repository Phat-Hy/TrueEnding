#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_8004203C(void);
extern void fn_80056DB8(void);
extern void fn_8005B3CC(void);
extern void fn_8005B5F8(void);
extern void fn_800844D8(void);
extern void fn_8008771C(void);
extern void fn_8008937C(void);
extern void fn_80092814(void);
extern void fn_800A555C(void);
extern void fn_800C31F4(void);
extern void fn_800CB3A0(void);
extern void fn_800D246C(void);
extern void fn_800DC12C(void);
extern void fn_800DC288(void);
extern void fn_8013655C(void);
extern void fn_80145334(void);
extern void fn_80149A30(void);
extern void fn_8014C540(void);
extern void fn_801588A0(void);
extern void fn_8020A780(void);
extern void fn_80219E6C(void);
extern void fn_802376D0(void);
extern void fn_80237874(void);
extern void fn_802AE954(void);
extern void fn_80370320(void);
extern void fn_803E3384(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473F50(void);
extern void fn_805A4984(void);
extern void fn_805F9940(void);
extern void fn_80680770(void);
extern void fn_80682428(void);
extern void fn_80684600(void);
extern void fn_80686EA4(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 lbl_80746288[];
extern u8 lbl_807462A8[];
extern u8 lbl_80777630[];
extern u8 lbl_80786068[];
extern u8 lbl_80786084[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087EF70;
extern u32 lbl_8087F430;
extern u32 lbl_8087F490;
extern u32 lbl_8087F8A0;
extern u32 lbl_80883F34;
extern u32 lbl_80883F40;
extern u32 lbl_80883F48;
extern u32 lbl_80883F4C;
extern u32 lbl_80883F50;
extern u32 lbl_80883F54;
extern u32 lbl_80883F58;

/* Function declarations */
void fn_802AC550(void);
void fn_802AC590(void);
void fn_802AC8E8(void);
void fn_802ACC94(void);
void fn_802ACCB4(void);
void fn_802ACD3C(void);
void fn_802AD358(void);
void fn_802AD36C(void);
void fn_802AD3D4(void);
void fn_802AD930(void);
void fn_802ADE54(void);
void fn_802ADE58(void);

asm void fn_802AC550(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x1
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80056DB8
    lis r4, lbl_80777630@ha
    mr r3, r31
    addi r4, r4, lbl_80777630@l
    stw r4, 0x0(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802AC590(void)
{
    nofralloc
    stwu r1, -0x230(r1)
    mflr r0
    stw r0, 0x234(r1)
    addi r11, r1, 0x230
    bl _savegpr_27
    mr r31, r3
    bl fn_8013655C
    cmpwi r3, 0x0
    beq lbl_fn_802AC590_0000006C
    li r3, 0x0
    b lbl_fn_802AC590_00000380
lbl_fn_802AC590_0000006C:
    lwz r3, 0x1438(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802AC590_00000090
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_802AC590_00000090
    li r3, 0x0
    b lbl_fn_802AC590_00000380
lbl_fn_802AC590_00000090:
    addi r3, r31, 0x14b4
    bl fn_80473F50
    cmpwi r3, 0x0
    beq lbl_fn_802AC590_000000A8
    li r3, 0x0
    b lbl_fn_802AC590_00000380
lbl_fn_802AC590_000000A8:
    addi r3, r31, 0x1a6c
    bl fn_802376D0
    cmpwi r3, 0x0
    bne lbl_fn_802AC590_000000D8
    addi r3, r31, 0x1a60
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802AC590_000000D8
    addi r3, r31, 0x1a78
    bl fn_80237874
    cmpwi r3, 0x0
    beq lbl_fn_802AC590_000000E0
lbl_fn_802AC590_000000D8:
    li r3, 0x0
    b lbl_fn_802AC590_00000380
lbl_fn_802AC590_000000E0:
    addi r3, r31, 0x14b4
    bl fn_8047059C
    mr r30, r3
    addi r3, r31, 0x14b4
    bl fn_80470580
    mr r4, r3
    mr r3, r31
    mr r5, r30
    bl fn_802AC8E8
    lwz r3, 0x1a9c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802AC590_0000024C
    lis r4, lbl_807462A8@ha
    addi r30, r4, lbl_807462A8@l
    addi r4, r30, 0x89
    bl fn_8008937C
    mr r28, r3
    li r27, 0x0
    li r29, 0x0
    b lbl_fn_802AC590_000001AC
lbl_fn_802AC590_00000130:
    lwz r0, 0x1558(r31)
    add r5, r0, r29
    lwz r0, 0xc(r5)
    srwi. r0, r0, 31
    bne lbl_fn_802AC590_0000014C
    addi r6, r5, 0xd
    b lbl_fn_802AC590_00000150
lbl_fn_802AC590_0000014C:
    lwz r6, 0x14(r5)
lbl_fn_802AC590_00000150:
    lwz r0, 0x0(r5)
    addi r3, r1, 0x118
    addi r4, r30, 0x94
    srwi. r0, r0, 31
    bne lbl_fn_802AC590_0000016C
    addi r5, r5, 0x1
    b lbl_fn_802AC590_00000170
lbl_fn_802AC590_0000016C:
    lwz r5, 0x8(r5)
lbl_fn_802AC590_00000170:
    crclr 6
    bl sprintf
    lwz r0, 0x1558(r31)
    mr r3, r28
    lfs f1, lbl_80883F40
    addi r4, r1, 0x118
    add r5, r0, r29
    lfs f2, lbl_80883F48
    lfs f3, lbl_80883F4C
    li r6, 0x0
    li r7, 0x0
    addi r5, r5, 0x18
    bl fn_8008771C
    addi r29, r29, 0x1c
    addi r27, r27, 0x1
lbl_fn_802AC590_000001AC:
    lwz r0, 0x155c(r31)
    cmplw r27, r0
    blt lbl_fn_802AC590_00000130
    lis r4, lbl_807462A8@ha
    lwz r3, 0x1a9c(r31)
    addi r30, r4, lbl_807462A8@l
    addi r4, r30, 0x9b
    bl fn_8008937C
    mr r27, r3
    li r28, 0x0
    li r29, 0x0
    b lbl_fn_802AC590_00000240
lbl_fn_802AC590_000001DC:
    lwz r0, 0x1a34(r31)
    addi r3, r1, 0x18
    addi r4, r30, 0xa7
    add r5, r0, r29
    lwzx r0, r29, r0
    srwi. r0, r0, 31
    bne lbl_fn_802AC590_00000200
    addi r5, r5, 0x1
    b lbl_fn_802AC590_00000204
lbl_fn_802AC590_00000200:
    lwz r5, 0x8(r5)
lbl_fn_802AC590_00000204:
    crclr 6
    bl sprintf
    lwz r0, 0x1a34(r31)
    mr r3, r27
    lfs f1, lbl_80883F40
    addi r4, r1, 0x18
    add r5, r0, r29
    lfs f2, lbl_80883F48
    lfs f3, lbl_80883F4C
    li r6, 0x0
    li r7, 0x0
    addi r5, r5, 0xc
    bl fn_8008771C
    addi r29, r29, 0x20
    addi r28, r28, 0x1
lbl_fn_802AC590_00000240:
    lwz r0, 0x1a38(r31)
    cmplw r28, r0
    blt lbl_fn_802AC590_000001DC
lbl_fn_802AC590_0000024C:
    lwz r4, 0x7ec(r31)
    mr r3, r31
    lwz r0, 0x5c0(r31)
    ori r4, r4, 0x1c0
    oris r4, r4, 0x1
    clrlwi r0, r0, 1
    ori r4, r4, 0xc219
    stw r0, 0x5c0(r31)
    oris r0, r4, 0x180
    ori r0, r0, 0x4
    rlwinm r0, r0, 0, 7, 5
    stw r0, 0x7ec(r31)
    lwz r12, 0x0(r31)
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    mr r3, r31
    li r4, 0x0
    b lbl_fn_802AC590_000002B8
lbl_fn_802AC590_00000298:
    lwz r0, 0x156c(r3)
    addi r4, r4, 0x1
    clrrwi r0, r0, 1
    stw r31, 0x1570(r3)
    ori r0, r0, 0x2
    clrlwi r0, r0, 1
    stw r0, 0x156c(r3)
    addi r3, r3, 0x58
lbl_fn_802AC590_000002B8:
    lwz r0, 0x155c(r31)
    cmplw r4, r0
    blt lbl_fn_802AC590_00000298
    lwz r0, 0x54c(r31)
    mr r3, r31
    ori r0, r0, 0x200
    stw r0, 0x54c(r31)
    lwz r12, 0x0(r31)
    lwz r12, 0x50(r12)
    mtctr r12
    bctrl
    lwz r3, 0x1438(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802AC590_00000308
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x1438(r31)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_802AC590_00000308:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0xfc(r12)
    mtctr r12
    bctrl
    li r0, 0x64
    stw r0, 0x14e4(r31)
    mr r4, r31
    li r3, 0x0
    b lbl_fn_802AC590_00000344
lbl_fn_802AC590_00000330:
    lwz r0, 0x156c(r4)
    addi r3, r3, 0x1
    clrrwi r0, r0, 1
    stw r0, 0x156c(r4)
    addi r4, r4, 0x58
lbl_fn_802AC590_00000344:
    lwz r0, 0x155c(r31)
    cmplw r3, r0
    blt lbl_fn_802AC590_00000330
    lfs f2, lbl_80883F50
    addi r4, r1, 0x8
    stfs f2, 0x8(r1)
    li r3, 0x1
    lwz r0, 0x5c0(r31)
    stfs f2, 0xc(r1)
    clrrwi r0, r0, 1
    psq_l f1, 0x0(r4), 0, 0
    stw r0, 0x5c0(r31)
    stfs f2, 0x10(r1)
    psq_st f1, 0x540(r31), 0, 0
    stfs f2, 0x548(r31)
lbl_fn_802AC590_00000380:
    addi r11, r1, 0x230
    bl _restgpr_27
    lwz r0, 0x234(r1)
    mtlr r0
    addi r1, r1, 0x230
    blr
}

asm void fn_802AC8E8(void)
{
    nofralloc
    stwu r1, -0x690(r1)
    mflr r0
    stw r0, 0x694(r1)
    stw r31, 0x68c(r1)
    stw r30, 0x688(r1)
    stw r29, 0x684(r1)
    mr r29, r3
    addi r3, r1, 0x44
    bl fn_8004203C
    lis r31, lbl_807462A8@ha
    addi r31, r31, lbl_807462A8@l
lbl_fn_802AC8E8_000003C4:
    addi r3, r1, 0x44
    bl fn_8005B3CC
    mr r30, r3
    addi r4, r31, 0xab
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802AC8E8_000003F8
    addi r3, r1, 0x44
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x152c(r29)
    b lbl_fn_802AC8E8_00000718
lbl_fn_802AC8E8_000003F8:
    mr r3, r30
    addi r4, r31, 0xb2
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802AC8E8_00000424
    addi r3, r1, 0x44
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x1530(r29)
    b lbl_fn_802AC8E8_00000718
lbl_fn_802AC8E8_00000424:
    mr r3, r30
    addi r4, r31, 0xba
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802AC8E8_00000450
    addi r3, r1, 0x44
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x1534(r29)
    b lbl_fn_802AC8E8_00000718
lbl_fn_802AC8E8_00000450:
    mr r3, r30
    addi r4, r31, 0xc1
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802AC8E8_0000047C
    addi r3, r1, 0x44
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x1538(r29)
    b lbl_fn_802AC8E8_00000718
lbl_fn_802AC8E8_0000047C:
    mr r3, r30
    addi r4, r31, 0xca
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802AC8E8_000004A8
    addi r3, r1, 0x44
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x153c(r29)
    b lbl_fn_802AC8E8_00000718
lbl_fn_802AC8E8_000004A8:
    mr r3, r30
    addi r4, r31, 0xd6
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802AC8E8_000004D4
    addi r3, r1, 0x44
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x1540(r29)
    b lbl_fn_802AC8E8_00000718
lbl_fn_802AC8E8_000004D4:
    mr r3, r30
    addi r4, r31, 0xde
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802AC8E8_00000500
    addi r3, r1, 0x44
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x1544(r29)
    b lbl_fn_802AC8E8_00000718
lbl_fn_802AC8E8_00000500:
    mr r3, r30
    addi r4, r31, 0xea
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802AC8E8_00000528
    addi r3, r1, 0x44
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x1510(r29)
    b lbl_fn_802AC8E8_00000718
lbl_fn_802AC8E8_00000528:
    mr r3, r30
    addi r4, r31, 0xf4
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802AC8E8_00000550
    addi r3, r1, 0x44
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x14fc(r29)
    b lbl_fn_802AC8E8_00000718
lbl_fn_802AC8E8_00000550:
    mr r3, r30
    addi r4, r31, 0x103
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802AC8E8_00000578
    addi r3, r1, 0x44
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x1514(r29)
    b lbl_fn_802AC8E8_00000718
lbl_fn_802AC8E8_00000578:
    mr r3, r30
    addi r4, r31, 0x115
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802AC8E8_000005A0
    addi r3, r1, 0x44
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x1518(r29)
    b lbl_fn_802AC8E8_00000718
lbl_fn_802AC8E8_000005A0:
    mr r3, r30
    addi r4, r31, 0x121
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802AC8E8_000005C8
    addi r3, r1, 0x44
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x151c(r29)
    b lbl_fn_802AC8E8_00000718
lbl_fn_802AC8E8_000005C8:
    mr r3, r30
    addi r4, r31, 0x12e
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802AC8E8_000005F0
    addi r3, r1, 0x44
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x154c(r29)
    b lbl_fn_802AC8E8_00000718
lbl_fn_802AC8E8_000005F0:
    mr r3, r30
    addi r4, r31, 0x13f
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802AC8E8_00000618
    mr r3, r29
    addi r4, r29, 0x1a84
    addi r5, r1, 0x44
    bl fn_805A4984
    b lbl_fn_802AC8E8_00000718
lbl_fn_802AC8E8_00000618:
    mr r3, r30
    addi r4, r31, 0x151
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802AC8E8_00000640
    mr r3, r29
    addi r4, r29, 0x1a8c
    addi r5, r1, 0x44
    bl fn_805A4984
    b lbl_fn_802AC8E8_00000718
lbl_fn_802AC8E8_00000640:
    mr r3, r30
    addi r4, r31, 0x162
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802AC8E8_000006B0
    addi r3, r1, 0x28
    bl fn_802ACC94
    addi r3, r1, 0x44
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r1, 0x28
    bl fn_8020A780
    addi r3, r1, 0x44
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r1, 0x34
    bl fn_8020A780
    addi r3, r1, 0x44
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x40(r1)
    addi r3, r29, 0x1558
    addi r4, r1, 0x28
    bl fn_802ACD3C
    addi r3, r1, 0x28
    li r4, -0x1
    bl fn_802ACCB4
    b lbl_fn_802AC8E8_00000718
lbl_fn_802AC8E8_000006B0:
    mr r3, r30
    addi r4, r31, 0x16c
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802AC8E8_00000718
    addi r3, r1, 0x8
    bl fn_802AD358
    addi r3, r1, 0x44
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r1, 0x8
    bl fn_8020A780
    addi r3, r1, 0x44
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x14(r1)
    addi r3, r1, 0x44
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x18(r1)
    addi r3, r29, 0x1a34
    addi r4, r1, 0x8
    bl fn_802AD3D4
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_802AD36C
lbl_fn_802AC8E8_00000718:
    addi r3, r1, 0x44
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_802AC8E8_000003C4
    lwz r0, 0x694(r1)
    lwz r31, 0x68c(r1)
    lwz r30, 0x688(r1)
    lwz r29, 0x684(r1)
    mtlr r0
    addi r1, r1, 0x690
    blr
}

asm void fn_802ACC94(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
    stw r0, 0x10(r3)
    stw r0, 0x14(r3)
    blr
}

asm void fn_802ACCB4(void)
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
    beq lbl_fn_802ACCB4_000007D0
    addic. r0, r3, 0xc
    beq lbl_fn_802ACCB4_000007A4
    lwz r0, 0xc(r3)
    srwi. r0, r0, 31
    beq lbl_fn_802ACCB4_000007A4
    lwz r3, 0x14(r3)
    bl dtor_80084684
lbl_fn_802ACCB4_000007A4:
    cmpwi r30, 0x0
    beq lbl_fn_802ACCB4_000007C0
    lwz r0, 0x0(r30)
    srwi. r0, r0, 31
    beq lbl_fn_802ACCB4_000007C0
    lwz r3, 0x8(r30)
    bl dtor_80084684
lbl_fn_802ACCB4_000007C0:
    cmpwi r31, 0x0
    ble lbl_fn_802ACCB4_000007D0
    mr r3, r30
    bl dtor_80084684
lbl_fn_802ACCB4_000007D0:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802ACD3C(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r11, r1, 0x70
    bl _savegpr_27
    lwz r0, 0x4(r3)
    mr r28, r3
    lwz r5, 0x8(r3)
    mr r29, r4
    cmplw r0, r5
    bge lbl_fn_802ACD3C_00000910
    mulli r0, r0, 0x1c
    lwz r3, 0x0(r3)
    add. r27, r3, r0
    beq lbl_fn_802ACD3C_00000900
    lwz r3, 0x0(r4)
    srwi. r0, r3, 31
    bne lbl_fn_802ACD3C_0000084C
    stw r3, 0x0(r27)
    lwz r0, 0x4(r4)
    stw r0, 0x4(r27)
    lwz r0, 0x8(r4)
    stw r0, 0x8(r27)
    b lbl_fn_802ACD3C_00000890
lbl_fn_802ACD3C_0000084C:
    li r0, 0x0
    stw r0, 0x0(r27)
    lwz r4, 0x4(r4)
    mr r3, r27
    stw r0, 0x4(r27)
    stw r0, 0x8(r27)
    bl fn_80013DC4
    lbz r5, 0x34(r1)
    mr r3, r27
    stb r5, 0x30(r1)
    addi r8, r1, 0x30
    lwz r6, 0x8(r29)
    li r4, 0x0
    lwz r0, 0x4(r29)
    li r5, 0x0
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_802ACD3C_00000890:
    lwz r3, 0xc(r29)
    srwi. r0, r3, 31
    bne lbl_fn_802ACD3C_000008B4
    stw r3, 0xc(r27)
    lwz r0, 0x10(r29)
    stw r0, 0x10(r27)
    lwz r0, 0x14(r29)
    stw r0, 0x14(r27)
    b lbl_fn_802ACD3C_000008F8
lbl_fn_802ACD3C_000008B4:
    li r0, 0x0
    stw r0, 0xc(r27)
    lwz r4, 0x10(r29)
    addi r3, r27, 0xc
    stw r0, 0x10(r27)
    stw r0, 0x14(r27)
    bl fn_80013DC4
    lbz r5, 0x2c(r1)
    addi r3, r27, 0xc
    stb r5, 0x28(r1)
    addi r8, r1, 0x28
    lwz r6, 0x14(r29)
    li r4, 0x0
    lwz r0, 0x10(r29)
    li r5, 0x0
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_802ACD3C_000008F8:
    lfs f0, 0x18(r29)
    stfs f0, 0x18(r27)
lbl_fn_802ACD3C_00000900:
    lwz r3, 0x4(r28)
    addi r0, r3, 0x1
    stw r0, 0x4(r28)
    b lbl_fn_802ACD3C_00000DF0
lbl_fn_802ACD3C_00000910:
    lis r3, 0x925
    subi r0, r3, 0x6db7
    subf r0, r5, r0
    cmplwi r0, 0x1
    bge lbl_fn_802ACD3C_00000948
    lis r4, lbl_807462A8@ha
    lis r3, __files@ha
    addi r4, r4, lbl_807462A8@l
    addi r3, r3, __files@l
    addi r4, r4, 0x179
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802ACD3C_00000948:
    lwz r4, 0x4(r28)
    li r6, 0x0
    lis r3, 0x925
    lwz r31, 0x8(r28)
    subi r0, r3, 0x6db7
    addi r4, r4, 0x1
    subf r3, r31, r4
    addi r5, r28, 0x8
    subf r0, r31, r0
    stw r6, 0x44(r1)
    cmplw r3, r0
    stw r6, 0x48(r1)
    stw r6, 0x4c(r1)
    stw r5, 0x50(r1)
    stw r6, 0x54(r1)
    stw r3, 0x38(r1)
    ble lbl_fn_802ACD3C_000009B0
    lis r4, lbl_807462A8@ha
    lis r3, __files@ha
    addi r4, r4, lbl_807462A8@l
    addi r3, r3, __files@l
    addi r4, r4, 0x179
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802ACD3C_000009B0:
    lis r3, 0x30c
    addi r0, r3, 0x30c3
    cmplw r31, r0
    bge lbl_fn_802ACD3C_00000A00
    addi r5, r31, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x38(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x40
    srwi r4, r4, 2
    stw r4, 0x40(r1)
    cmplw r4, r0
    bge lbl_fn_802ACD3C_000009F4
    addi r3, r1, 0x38
lbl_fn_802ACD3C_000009F4:
    lwz r0, 0x0(r3)
    add r31, r31, r0
    b lbl_fn_802ACD3C_00000A44
lbl_fn_802ACD3C_00000A00:
    lis r3, 0x618
    addi r0, r3, 0x6186
    cmplw r31, r0
    bge lbl_fn_802ACD3C_00000A3C
    addi r3, r31, 0x1
    lwz r0, 0x38(r1)
    srwi r3, r3, 1
    stw r3, 0x3c(r1)
    cmplw r3, r0
    addi r3, r1, 0x3c
    bge lbl_fn_802ACD3C_00000A30
    addi r3, r1, 0x38
lbl_fn_802ACD3C_00000A30:
    lwz r0, 0x0(r3)
    add r31, r31, r0
    b lbl_fn_802ACD3C_00000A44
lbl_fn_802ACD3C_00000A3C:
    lis r3, 0x925
    subi r31, r3, 0x6db7
lbl_fn_802ACD3C_00000A44:
    lis r3, 0x925
    subi r0, r3, 0x6db7
    cmplw r31, r0
    ble lbl_fn_802ACD3C_00000A78
    lis r4, lbl_807462A8@ha
    lis r3, __files@ha
    addi r4, r4, lbl_807462A8@l
    addi r3, r3, __files@l
    addi r4, r4, 0x179
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802ACD3C_00000A78:
    mulli r3, r31, 0x1c
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_802ACD3C_00000AAC
    lis r3, __files@ha
    lis r4, lbl_80786068@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80786068@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802ACD3C_00000AAC:
    lwz r5, 0x4(r28)
    li r27, 0x0
    lwz r0, 0x48(r1)
    mulli r4, r5, 0x1c
    stw r30, 0x44(r1)
    stw r31, 0x4c(r1)
    mulli r3, r0, 0x1c
    add r0, r30, r4
    stw r5, 0x54(r1)
    add. r30, r3, r0
    beq lbl_fn_802ACD3C_00000BA8
    lwz r3, 0x0(r29)
    srwi. r0, r3, 31
    bne lbl_fn_802ACD3C_00000AFC
    stw r3, 0x0(r30)
    lwz r0, 0x4(r29)
    stw r0, 0x4(r30)
    lwz r0, 0x8(r29)
    stw r0, 0x8(r30)
    b lbl_fn_802ACD3C_00000B3C
lbl_fn_802ACD3C_00000AFC:
    stw r27, 0x0(r30)
    mr r3, r30
    lwz r4, 0x4(r29)
    stw r27, 0x4(r30)
    stw r27, 0x8(r30)
    bl fn_80013DC4
    lbz r5, 0x8(r1)
    mr r3, r30
    stb r5, 0xc(r1)
    addi r8, r1, 0xc
    lwz r6, 0x8(r29)
    li r4, 0x0
    lwz r0, 0x4(r29)
    li r5, 0x0
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_802ACD3C_00000B3C:
    lwz r3, 0xc(r29)
    srwi. r0, r3, 31
    bne lbl_fn_802ACD3C_00000B60
    stw r3, 0xc(r30)
    lwz r0, 0x10(r29)
    stw r0, 0x10(r30)
    lwz r0, 0x14(r29)
    stw r0, 0x14(r30)
    b lbl_fn_802ACD3C_00000BA0
lbl_fn_802ACD3C_00000B60:
    stw r27, 0xc(r30)
    addi r3, r30, 0xc
    lwz r4, 0x10(r29)
    stw r27, 0x10(r30)
    stw r27, 0x14(r30)
    bl fn_80013DC4
    lbz r5, 0x10(r1)
    addi r3, r30, 0xc
    stb r5, 0x14(r1)
    addi r8, r1, 0x14
    lwz r6, 0x14(r29)
    li r4, 0x0
    lwz r0, 0x10(r29)
    li r5, 0x0
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_802ACD3C_00000BA0:
    lfs f0, 0x18(r29)
    stfs f0, 0x18(r30)
lbl_fn_802ACD3C_00000BA8:
    lwz r3, 0x4(r28)
    li r27, 0x0
    lwz r0, 0x54(r1)
    lwz r5, 0x48(r1)
    mulli r4, r3, 0x1c
    lwz r29, 0x0(r28)
    addi r5, r5, 0x1
    lwz r3, 0x44(r1)
    mulli r0, r0, 0x1c
    stw r5, 0x48(r1)
    add r31, r29, r4
    add r30, r3, r0
    b lbl_fn_802ACD3C_00000CD0
lbl_fn_802ACD3C_00000BDC:
    subic. r30, r30, 0x1c
    subi r31, r31, 0x1c
    beq lbl_fn_802ACD3C_00000CB8
    lwz r3, 0x0(r31)
    srwi. r0, r3, 31
    bne lbl_fn_802ACD3C_00000C0C
    lwz r0, 0x4(r31)
    stw r3, 0x0(r30)
    stw r0, 0x4(r30)
    lwz r0, 0x8(r31)
    stw r0, 0x8(r30)
    b lbl_fn_802ACD3C_00000C4C
lbl_fn_802ACD3C_00000C0C:
    stw r27, 0x0(r30)
    mr r3, r30
    stw r27, 0x4(r30)
    stw r27, 0x8(r30)
    lwz r4, 0x4(r31)
    bl fn_80013DC4
    lbz r0, 0x18(r1)
    mr r3, r30
    stb r0, 0x1c(r1)
    addi r8, r1, 0x1c
    li r4, 0x0
    li r5, 0x0
    lwz r6, 0x8(r31)
    lwz r0, 0x4(r31)
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_802ACD3C_00000C4C:
    lwz r3, 0xc(r31)
    srwi. r0, r3, 31
    bne lbl_fn_802ACD3C_00000C70
    lwz r0, 0x10(r31)
    stw r3, 0xc(r30)
    stw r0, 0x10(r30)
    lwz r0, 0x14(r31)
    stw r0, 0x14(r30)
    b lbl_fn_802ACD3C_00000CB0
lbl_fn_802ACD3C_00000C70:
    stw r27, 0xc(r30)
    addi r3, r30, 0xc
    stw r27, 0x10(r30)
    stw r27, 0x14(r30)
    lwz r4, 0x10(r31)
    bl fn_80013DC4
    lbz r0, 0x20(r1)
    addi r3, r30, 0xc
    stb r0, 0x24(r1)
    addi r8, r1, 0x24
    li r4, 0x0
    li r5, 0x0
    lwz r6, 0x14(r31)
    lwz r0, 0x10(r31)
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_802ACD3C_00000CB0:
    lfs f0, 0x18(r31)
    stfs f0, 0x18(r30)
lbl_fn_802ACD3C_00000CB8:
    lwz r4, 0x54(r1)
    lwz r3, 0x48(r1)
    subi r0, r4, 0x1
    stw r0, 0x54(r1)
    addi r0, r3, 0x1
    stw r0, 0x48(r1)
lbl_fn_802ACD3C_00000CD0:
    cmplw r31, r29
    bgt lbl_fn_802ACD3C_00000BDC
    lwz r0, 0x54(r1)
    addi r30, r1, 0x44
    lwz r7, 0x4(r28)
    mulli r3, r0, 0x1c
    lwz r4, 0x48(r1)
    lwz r8, 0x0(r28)
    lwz r5, 0x44(r1)
    mulli r0, r7, 0x1c
    lwz r9, 0x8(r28)
    lwz r6, 0x4c(r1)
    add r27, r8, r3
    stw r6, 0x8(r28)
    add r29, r27, r0
    stw r9, 0x4c(r1)
    stw r5, 0x0(r28)
    stw r8, 0x44(r1)
    stw r4, 0x4(r28)
    stw r7, 0x48(r1)
    b lbl_fn_802ACD3C_00000D64
lbl_fn_802ACD3C_00000D24:
    subic. r29, r29, 0x1c
    beq lbl_fn_802ACD3C_00000D64
    addic. r0, r29, 0xc
    beq lbl_fn_802ACD3C_00000D48
    lwz r0, 0xc(r29)
    srwi. r0, r0, 31
    beq lbl_fn_802ACD3C_00000D48
    lwz r3, 0x14(r29)
    bl dtor_80084684
lbl_fn_802ACD3C_00000D48:
    cmpwi r29, 0x0
    beq lbl_fn_802ACD3C_00000D64
    lwz r0, 0x0(r29)
    srwi. r0, r0, 31
    beq lbl_fn_802ACD3C_00000D64
    lwz r3, 0x8(r29)
    bl dtor_80084684
lbl_fn_802ACD3C_00000D64:
    cmplw r29, r27
    bgt lbl_fn_802ACD3C_00000D24
    cmpwi r30, 0x0
    li r0, 0x0
    stw r0, 0x48(r1)
    beq lbl_fn_802ACD3C_00000DF0
    lwz r3, 0x44(r1)
    cmpwi r3, 0x0
    beq lbl_fn_802ACD3C_00000DF0
    mulli r0, r0, 0x1c
    li r28, 0x0
    stw r28, 0x48(r1)
    add r27, r3, r0
    b lbl_fn_802ACD3C_00000DE0
lbl_fn_802ACD3C_00000D9C:
    subic. r27, r27, 0x1c
    beq lbl_fn_802ACD3C_00000DDC
    addic. r0, r27, 0xc
    beq lbl_fn_802ACD3C_00000DC0
    lwz r0, 0xc(r27)
    srwi. r0, r0, 31
    beq lbl_fn_802ACD3C_00000DC0
    lwz r3, 0x14(r27)
    bl dtor_80084684
lbl_fn_802ACD3C_00000DC0:
    cmpwi r27, 0x0
    beq lbl_fn_802ACD3C_00000DDC
    lwz r0, 0x0(r27)
    srwi. r0, r0, 31
    beq lbl_fn_802ACD3C_00000DDC
    lwz r3, 0x8(r27)
    bl dtor_80084684
lbl_fn_802ACD3C_00000DDC:
    subi r28, r28, 0x1
lbl_fn_802ACD3C_00000DE0:
    cmpwi r28, 0x0
    bne lbl_fn_802ACD3C_00000D9C
    lwz r3, 0x44(r1)
    bl dtor_80084684
lbl_fn_802ACD3C_00000DF0:
    addi r11, r1, 0x70
    bl _restgpr_27
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_802AD358(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    blr
}

asm void fn_802AD36C(void)
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
    beq lbl_fn_802AD36C_00000E68
    beq lbl_fn_802AD36C_00000E58
    lwz r0, 0x0(r3)
    srwi. r0, r0, 31
    beq lbl_fn_802AD36C_00000E58
    lwz r3, 0x8(r3)
    bl dtor_80084684
lbl_fn_802AD36C_00000E58:
    cmpwi r31, 0x0
    ble lbl_fn_802AD36C_00000E68
    mr r3, r30
    bl dtor_80084684
lbl_fn_802AD36C_00000E68:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802AD3D4(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r11, r1, 0x70
    bl _savegpr_27
    lwz r0, 0x4(r3)
    mr r29, r3
    lwz r31, 0x8(r3)
    mr r30, r4
    cmplw r0, r31
    bge lbl_fn_802AD3D4_00000F68
    lwz r3, 0x0(r3)
    slwi r0, r0, 5
    add. r31, r3, r0
    beq lbl_fn_802AD3D4_00000F58
    lwz r3, 0x0(r4)
    srwi r0, r3, 31
    cntlzw r0, r0
    srwi r0, r0, 5
    cntlzw r0, r0
    srwi. r0, r0, 5
    bne lbl_fn_802AD3D4_00000EF4
    stw r3, 0x0(r31)
    lwz r0, 0x4(r4)
    stw r0, 0x4(r31)
    lwz r0, 0x8(r4)
    stw r0, 0x8(r31)
    b lbl_fn_802AD3D4_00000F38
lbl_fn_802AD3D4_00000EF4:
    li r0, 0x0
    stw r0, 0x0(r31)
    lwz r4, 0x4(r4)
    mr r3, r31
    stw r0, 0x4(r31)
    stw r0, 0x8(r31)
    bl fn_80013DC4
    lbz r5, 0x1c(r1)
    mr r3, r31
    stb r5, 0x18(r1)
    addi r8, r1, 0x18
    lwz r6, 0x8(r30)
    li r4, 0x0
    lwz r0, 0x4(r30)
    li r5, 0x0
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_802AD3D4_00000F38:
    lfs f0, 0xc(r30)
    stfs f0, 0xc(r31)
    lfs f0, 0x10(r30)
    stfs f0, 0x10(r31)
    psq_l f1, 0x14(r30), 0, 0
    psq_st f1, 0x14(r31), 0, 0
    lfs f2, 0x1c(r30)
    stfs f2, 0x1c(r31)
lbl_fn_802AD3D4_00000F58:
    lwz r3, 0x4(r29)
    addi r0, r3, 0x1
    stw r0, 0x4(r29)
    b lbl_fn_802AD3D4_000013C8
lbl_fn_802AD3D4_00000F68:
    lis r3, 0x800
    li r4, 0x1
    subi r0, r3, 0x1
    stw r4, 0x34(r1)
    subf r0, r31, r0
    cmplwi r0, 0x1
    bge lbl_fn_802AD3D4_00000FA8
    lis r4, lbl_807462A8@ha
    lis r3, __files@ha
    addi r4, r4, lbl_807462A8@l
    addi r3, r3, __files@l
    addi r4, r4, 0x179
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802AD3D4_00000FA8:
    lis r3, 0x2ab
    subi r0, r3, 0x5556
    cmplw r31, r0
    bge lbl_fn_802AD3D4_00000FE0
    addi r4, r31, 0x1
    lis r3, 0xcccd
    slwi r0, r4, 2
    subf r0, r4, r0
    subi r3, r3, 0x3333
    mulhwu r0, r3, r0
    srwi r0, r0, 2
    stw r0, 0x2c(r1)
    cmplwi r0, 0x1
    b lbl_fn_802AD3D4_00001000
lbl_fn_802AD3D4_00000FE0:
    lis r3, 0x555
    addi r0, r3, 0x5554
    cmplw r31, r0
    bge lbl_fn_802AD3D4_00001000
    addi r0, r31, 0x1
    srwi r0, r0, 1
    stw r0, 0x30(r1)
    cmplwi r0, 0x1
lbl_fn_802AD3D4_00001000:
    lwz r4, 0x4(r29)
    li r5, 0x0
    lis r3, 0x800
    lwz r31, 0x8(r29)
    subi r0, r3, 0x1
    addi r4, r4, 0x1
    subf r3, r31, r4
    addi r6, r29, 0x8
    subf r0, r31, r0
    stw r5, 0x38(r1)
    cmplw r3, r0
    stw r5, 0x3c(r1)
    stw r5, 0x40(r1)
    stw r6, 0x44(r1)
    stw r5, 0x48(r1)
    stw r3, 0x20(r1)
    ble lbl_fn_802AD3D4_00001068
    lis r4, lbl_807462A8@ha
    lis r3, __files@ha
    addi r4, r4, lbl_807462A8@l
    addi r3, r3, __files@l
    addi r4, r4, 0x179
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802AD3D4_00001068:
    lis r3, 0x2ab
    subi r0, r3, 0x5556
    cmplw r31, r0
    bge lbl_fn_802AD3D4_000010B8
    addi r5, r31, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x20(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x28
    srwi r4, r4, 2
    stw r4, 0x28(r1)
    cmplw r4, r0
    bge lbl_fn_802AD3D4_000010AC
    addi r3, r1, 0x20
lbl_fn_802AD3D4_000010AC:
    lwz r0, 0x0(r3)
    add r28, r31, r0
    b lbl_fn_802AD3D4_000010FC
lbl_fn_802AD3D4_000010B8:
    lis r3, 0x555
    addi r0, r3, 0x5554
    cmplw r31, r0
    bge lbl_fn_802AD3D4_000010F4
    addi r3, r31, 0x1
    lwz r0, 0x20(r1)
    srwi r3, r3, 1
    stw r3, 0x24(r1)
    cmplw r3, r0
    addi r3, r1, 0x24
    bge lbl_fn_802AD3D4_000010E8
    addi r3, r1, 0x20
lbl_fn_802AD3D4_000010E8:
    lwz r0, 0x0(r3)
    add r28, r31, r0
    b lbl_fn_802AD3D4_000010FC
lbl_fn_802AD3D4_000010F4:
    lis r3, 0x800
    subi r28, r3, 0x1
lbl_fn_802AD3D4_000010FC:
    lis r3, 0x800
    subi r0, r3, 0x1
    cmplw r28, r0
    ble lbl_fn_802AD3D4_00001130
    lis r4, lbl_807462A8@ha
    lis r3, __files@ha
    addi r4, r4, lbl_807462A8@l
    addi r3, r3, __files@l
    addi r4, r4, 0x179
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802AD3D4_00001130:
    slwi r3, r28, 5
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_fn_802AD3D4_00001164
    lis r3, __files@ha
    lis r4, lbl_80786084@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80786084@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802AD3D4_00001164:
    lwz r6, 0x4(r29)
    li r0, 0x0
    lwz r3, 0x3c(r1)
    slwi r5, r6, 5
    stw r27, 0x38(r1)
    slwi r4, r3, 5
    add r3, r27, r5
    stw r28, 0x40(r1)
    add. r27, r4, r3
    stw r6, 0x48(r1)
    beq lbl_fn_802AD3D4_00001214
    lwz r4, 0x0(r30)
    srwi. r3, r4, 31
    bne lbl_fn_802AD3D4_000011B4
    stw r4, 0x0(r27)
    lwz r0, 0x4(r30)
    stw r0, 0x4(r27)
    lwz r0, 0x8(r30)
    stw r0, 0x8(r27)
    b lbl_fn_802AD3D4_000011F4
lbl_fn_802AD3D4_000011B4:
    stw r0, 0x0(r27)
    mr r3, r27
    lwz r4, 0x4(r30)
    stw r0, 0x4(r27)
    stw r0, 0x8(r27)
    bl fn_80013DC4
    lbz r5, 0x8(r1)
    mr r3, r27
    stb r5, 0xc(r1)
    addi r8, r1, 0xc
    lwz r6, 0x8(r30)
    li r4, 0x0
    lwz r0, 0x4(r30)
    li r5, 0x0
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_802AD3D4_000011F4:
    lfs f0, 0xc(r30)
    stfs f0, 0xc(r27)
    lfs f0, 0x10(r30)
    stfs f0, 0x10(r27)
    psq_l f1, 0x14(r30), 0, 0
    psq_st f1, 0x14(r27), 0, 0
    lfs f2, 0x1c(r30)
    stfs f2, 0x1c(r27)
lbl_fn_802AD3D4_00001214:
    lwz r4, 0x3c(r1)
    li r30, 0x0
    lwz r0, 0x48(r1)
    addi r5, r4, 0x1
    lwz r3, 0x4(r29)
    lwz r31, 0x0(r29)
    slwi r0, r0, 5
    slwi r4, r3, 5
    lwz r3, 0x38(r1)
    stw r5, 0x3c(r1)
    add r28, r31, r4
    add r27, r3, r0
    b lbl_fn_802AD3D4_000012F0
lbl_fn_802AD3D4_00001248:
    subic. r27, r27, 0x20
    subi r28, r28, 0x20
    beq lbl_fn_802AD3D4_000012D8
    lwz r3, 0x0(r28)
    srwi. r0, r3, 31
    bne lbl_fn_802AD3D4_00001278
    lwz r0, 0x4(r28)
    stw r3, 0x0(r27)
    stw r0, 0x4(r27)
    lwz r0, 0x8(r28)
    stw r0, 0x8(r27)
    b lbl_fn_802AD3D4_000012B8
lbl_fn_802AD3D4_00001278:
    stw r30, 0x0(r27)
    mr r3, r27
    stw r30, 0x4(r27)
    stw r30, 0x8(r27)
    lwz r4, 0x4(r28)
    bl fn_80013DC4
    lbz r0, 0x10(r1)
    mr r3, r27
    stb r0, 0x14(r1)
    addi r8, r1, 0x14
    li r4, 0x0
    li r5, 0x0
    lwz r6, 0x8(r28)
    lwz r0, 0x4(r28)
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_802AD3D4_000012B8:
    lfs f0, 0xc(r28)
    stfs f0, 0xc(r27)
    lfs f0, 0x10(r28)
    stfs f0, 0x10(r27)
    lfs f2, 0x1c(r28)
    psq_l f1, 0x14(r28), 0, 0
    psq_st f1, 0x14(r27), 0, 0
    stfs f2, 0x1c(r27)
lbl_fn_802AD3D4_000012D8:
    lwz r4, 0x48(r1)
    lwz r3, 0x3c(r1)
    subi r0, r4, 0x1
    stw r0, 0x48(r1)
    addi r0, r3, 0x1
    stw r0, 0x3c(r1)
lbl_fn_802AD3D4_000012F0:
    cmplw r31, r28
    blt lbl_fn_802AD3D4_00001248
    lwz r0, 0x48(r1)
    addi r28, r1, 0x38
    lwz r7, 0x0(r29)
    slwi r3, r0, 5
    lwz r5, 0x38(r1)
    lwz r6, 0x4(r29)
    add r30, r7, r3
    lwz r4, 0x3c(r1)
    slwi r0, r6, 5
    lwz r8, 0x8(r29)
    lwz r3, 0x40(r1)
    add r31, r30, r0
    stw r3, 0x8(r29)
    stw r8, 0x40(r1)
    stw r5, 0x0(r29)
    stw r7, 0x38(r1)
    stw r4, 0x4(r29)
    stw r6, 0x3c(r1)
    b lbl_fn_802AD3D4_00001364
lbl_fn_802AD3D4_00001344:
    subic. r31, r31, 0x20
    beq lbl_fn_802AD3D4_00001364
    beq lbl_fn_802AD3D4_00001364
    lwz r0, 0x0(r31)
    srwi. r0, r0, 31
    beq lbl_fn_802AD3D4_00001364
    lwz r3, 0x8(r31)
    bl dtor_80084684
lbl_fn_802AD3D4_00001364:
    cmplw r31, r30
    bgt lbl_fn_802AD3D4_00001344
    cmpwi r28, 0x0
    li r0, 0x0
    stw r0, 0x3c(r1)
    beq lbl_fn_802AD3D4_000013C8
    lwz r29, 0x38(r1)
    cmpwi r29, 0x0
    beq lbl_fn_802AD3D4_000013C8
    li r30, 0x0
    stw r30, 0x3c(r1)
    b lbl_fn_802AD3D4_000013B8
lbl_fn_802AD3D4_00001394:
    subic. r29, r29, 0x20
    beq lbl_fn_802AD3D4_000013B4
    beq lbl_fn_802AD3D4_000013B4
    lwz r0, 0x0(r29)
    srwi. r0, r0, 31
    beq lbl_fn_802AD3D4_000013B4
    lwz r3, 0x8(r29)
    bl dtor_80084684
lbl_fn_802AD3D4_000013B4:
    subi r30, r30, 0x1
lbl_fn_802AD3D4_000013B8:
    cmpwi r30, 0x0
    bne lbl_fn_802AD3D4_00001394
    lwz r3, 0x38(r1)
    bl dtor_80084684
lbl_fn_802AD3D4_000013C8:
    addi r11, r1, 0x70
    bl _restgpr_27
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_802AD930(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stw r31, 0x7c(r1)
    stw r30, 0x78(r1)
    mr r30, r3
    stw r29, 0x74(r1)
    stw r28, 0x70(r1)
    lbz r0, 0x14e8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802AD930_00001454
    li r0, 0x1
    stb r0, 0x14e8(r3)
    mr r5, r30
    li r4, 0x0
    b lbl_fn_802AD930_00001434
lbl_fn_802AD930_00001420:
    lwz r0, 0x156c(r5)
    addi r4, r4, 0x1
    ori r0, r0, 0x1
    stw r0, 0x156c(r5)
    addi r5, r5, 0x58
lbl_fn_802AD930_00001434:
    lwz r0, 0x155c(r3)
    cmplw r4, r0
    blt lbl_fn_802AD930_00001420
    lwz r3, lbl_8087F430
    li r4, 0x68
    li r5, 0x1
    li r6, 0x0
    bl fn_80370320
lbl_fn_802AD930_00001454:
    lwz r0, 0x12a4(r30)
    extrwi. r0, r0, 1, 29
    beq lbl_fn_802AD930_000014E4
    lwz r6, 0x38(r30)
    li r4, 0x0
    li r0, 0x0
    li r3, 0x0
    rlwinm r5, r6, 0, 29, 29
    cmplwi r5, 0x4
    beq lbl_fn_802AD930_0000148C
    clrlwi r5, r6, 31
    cmplwi r5, 0x1
    beq lbl_fn_802AD930_0000148C
    li r3, 0x1
lbl_fn_802AD930_0000148C:
    cmpwi r3, 0x0
    beq lbl_fn_802AD930_000014A8
    lwz r3, 0x7e0(r30)
    rlwinm r3, r3, 0, 26, 26
    cmplwi r3, 0x20
    beq lbl_fn_802AD930_000014A8
    li r0, 0x1
lbl_fn_802AD930_000014A8:
    cmpwi r0, 0x0
    beq lbl_fn_802AD930_000014DC
    lwz r0, 0x55c(r30)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_802AD930_000014D0
    lwz r0, 0x560(r30)
    cmpwi r0, 0x1c
    bne lbl_fn_802AD930_000014D0
    li r3, 0x1
lbl_fn_802AD930_000014D0:
    cmpwi r3, 0x0
    bne lbl_fn_802AD930_000014DC
    li r4, 0x1
lbl_fn_802AD930_000014DC:
    cmpwi r4, 0x0
    bne lbl_fn_802AD930_000015BC
lbl_fn_802AD930_000014E4:
    lwz r6, 0x38(r30)
    li r4, 0x0
    li r0, 0x0
    li r3, 0x0
    rlwinm r5, r6, 0, 29, 29
    cmplwi r5, 0x4
    beq lbl_fn_802AD930_00001510
    clrlwi r5, r6, 31
    cmplwi r5, 0x1
    beq lbl_fn_802AD930_00001510
    li r3, 0x1
lbl_fn_802AD930_00001510:
    cmpwi r3, 0x0
    beq lbl_fn_802AD930_0000152C
    lwz r3, 0x7e0(r30)
    rlwinm r3, r3, 0, 26, 26
    cmplwi r3, 0x20
    beq lbl_fn_802AD930_0000152C
    li r0, 0x1
lbl_fn_802AD930_0000152C:
    cmpwi r0, 0x0
    beq lbl_fn_802AD930_00001560
    lwz r0, 0x55c(r30)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_802AD930_00001554
    lwz r0, 0x560(r30)
    cmpwi r0, 0x1c
    bne lbl_fn_802AD930_00001554
    li r3, 0x1
lbl_fn_802AD930_00001554:
    cmpwi r3, 0x0
    bne lbl_fn_802AD930_00001560
    li r4, 0x1
lbl_fn_802AD930_00001560:
    cmpwi r4, 0x0
    beq lbl_fn_802AD930_000015A8
    lwz r0, 0x58c(r30)
    cmpwi r0, 0x6
    beq lbl_fn_802AD930_000015A8
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0xf8(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_802AD930_000015A8
    lwz r12, 0x0(r30)
    mr r3, r30
    li r4, 0x6
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_802AD930_000015A8:
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x104(r12)
    mtctr r12
    bctrl
lbl_fn_802AD930_000015BC:
    lwz r4, 0x940(r30)
    lis r0, 0x4330
    stw r0, 0x68(r1)
    lis r3, lbl_80746288@ha
    xoris r0, r4, 0x8000
    lfd f5, lbl_80746288@l(r3)
    stw r0, 0x6c(r1)
    lfs f3, 0x7d8(r30)
    lfd f4, 0x68(r1)
    lfs f0, lbl_80883F34
    fsubs f4, f4, f5
    fdivs f3, f3, f4
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_802AD930_00001604
    li r0, 0x1
    stw r0, 0x14d4(r30)
    b lbl_fn_802AD930_0000160C
lbl_fn_802AD930_00001604:
    li r0, 0x0
    stw r0, 0x14d4(r30)
lbl_fn_802AD930_0000160C:
    lwz r0, 0x12a4(r30)
    extrwi. r0, r0, 1, 29
    bne lbl_fn_802AD930_000016D0
    lbz r0, 0x1a40(r30)
    cmpwi r0, 0x0
    beq lbl_fn_802AD930_000016D0
    lwz r0, 0xd18(r30)
    cmpwi r0, 0x0
    ble lbl_fn_802AD930_000016D0
    mr r3, r30
    bl fn_802AE954
    addi r29, r1, 0xc
    li r28, 0x0
    li r31, 0x0
    b lbl_fn_802AD930_000016C4
lbl_fn_802AD930_00001648:
    lwz r0, 0x1a34(r30)
    addi r3, r30, 0xb0
    add r4, r0, r31
    lwzx r0, r31, r0
    srwi. r0, r0, 31
    bne lbl_fn_802AD930_00001668
    addi r4, r4, 0x1
    b lbl_fn_802AD930_0000166C
lbl_fn_802AD930_00001668:
    lwz r4, 0x8(r4)
lbl_fn_802AD930_0000166C:
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802AD930_00001684
    li r3, 0x0
    b lbl_fn_802AD930_00001690
lbl_fn_802AD930_00001684:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r3, r3, r0
lbl_fn_802AD930_00001690:
    lfs f3, 0x1c(r3)
    addi r28, r28, 0x1
    lfs f0, 0xc(r3)
    lfs f2, 0x2c(r3)
    lwz r0, 0x1a34(r30)
    stfs f0, 0xc(r1)
    add r3, r0, r31
    addi r31, r31, 0x20
    stfs f3, 0x10(r1)
    psq_l f1, 0x0(r29), 0, 0
    psq_st f1, 0x14(r3), 0, 0
    stfs f2, 0x14(r1)
    stfs f2, 0x1c(r3)
lbl_fn_802AD930_000016C4:
    lwz r0, 0x1a38(r30)
    cmplw r28, r0
    blt lbl_fn_802AD930_00001648
lbl_fn_802AD930_000016D0:
    mr r3, r30
    bl fn_8014C540
    lwz r0, 0x38(r30)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_802AD930_000016FC
    lwz r0, 0x12a4(r30)
    extrwi. r0, r0, 1, 6
    bne lbl_fn_802AD930_000016FC
    mr r3, r30
    bl fn_80145334
lbl_fn_802AD930_000016FC:
    lwz r0, 0x58c(r30)
    cmpwi r0, 0xe
    bne lbl_fn_802AD930_000018E4
    lwz r0, 0x14bc(r30)
    cmpwi r0, 0x4
    bne lbl_fn_802AD930_000018E4
    lwz r4, lbl_8087F8A0
    addi r3, r1, 0x18
    lfs f6, 0x530(r30)
    lwz r31, 0x48(r4)
    lfs f5, 0x52c(r30)
    lfs f0, 0x530(r31)
    lfs f4, 0x52c(r31)
    fsubs f6, f6, f0
    lfs f3, 0x528(r30)
    lfs f0, 0x528(r31)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x1c(r1)
    stfs f0, 0x18(r1)
    stfs f6, 0x20(r1)
    bl fn_805F9940
    lfs f0, lbl_80883F54
    fcmpo cr0, f1, f0
    bge lbl_fn_802AD930_000018E4
    lwz r0, 0x12a4(r31)
    extrwi. r3, r0, 1, 25
    bne lbl_fn_802AD930_000018E4
    srwi. r0, r0, 31
    bne lbl_fn_802AD930_000018E4
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x6
    bne lbl_fn_802AD930_0000178C
    lwz r0, 0x560(r31)
    cmpwi r0, 0x4
    bne lbl_fn_802AD930_000018E4
lbl_fn_802AD930_0000178C:
    lwz r7, lbl_8087F490
    cmpwi r7, 0x0
    beq lbl_fn_802AD930_000017E4
    li r4, 0x6
    stw r4, 0x764(r7)
    li r5, 0x0
    li r3, 0x11
    stw r3, 0x768(r7)
    li r6, -0x1
    li r0, 0x1
    stw r6, 0x76c(r7)
    stw r5, 0x770(r7)
    stw r5, 0x774(r7)
    stw r5, 0x778(r7)
    stw r6, 0x54(r1)
    stw r5, 0x58(r1)
    stw r5, 0x5c(r1)
    stw r5, 0x60(r1)
    stw r4, 0x4c(r1)
    stw r3, 0x50(r1)
    stw r0, 0x64(r1)
    stw r0, 0x77c(r7)
lbl_fn_802AD930_000017E4:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x4
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_802AD930_000018E4
    li r7, 0x5
    stw r7, 0x14bc(r30)
    lwz r3, 0x62c(r30)
    li r6, 0x0
    lfs f0, lbl_80883F40
    li r4, 0x1
    lfs f2, 0xc(r3)
    addi r5, r1, 0x24
    psq_l f1, 0x4(r3), 0, 0
    li r0, 0x5a
    psq_st f1, 0x0(r5), 0, 0
    addi r8, r30, 0x1a48
    lfs f3, lbl_80883F58
    addi r10, r31, 0x147c
    lfs f4, 0x28(r1)
    addi r9, r1, 0x3c
    stfs f2, 0x2c(r1)
    mr r3, r31
    fadds f3, f4, f3
    stfs f0, 0x3c(r1)
    stfs f3, 0x28(r1)
    lfs f2, 0x530(r31)
    psq_l f1, 0x528(r31), 0, 0
    psq_st f1, 0x0(r8), 0, 0
    stfs f2, 0x1a50(r30)
    sth r4, 0x1470(r31)
    sth r6, 0x1472(r31)
    stw r7, 0x1474(r31)
    stw r0, 0x1478(r31)
    stfs f2, 0x44(r1)
    frsp f2, f2
    psq_st f1, 0x0(r10), 0, 0
    stfs f2, 0x1484(r31)
    stfs f0, 0x40(r1)
    stw r6, 0x1488(r31)
    sth r4, 0x30(r1)
    lwz r4, 0x1544(r30)
    sth r6, 0x32(r1)
    stw r6, 0x48(r1)
    psq_st f1, 0x0(r9), 0, 0
    stw r0, 0x38(r1)
    stw r7, 0x34(r1)
    bl fn_801588A0
    lis r4, lbl_807462A8@ha
    lfs f1, lbl_80883F4C
    addi r4, r4, lbl_807462A8@l
    addi r3, r1, 0x8
    addi r4, r4, 0x18d
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    lwz r3, lbl_8087F490
    cmpwi r3, 0x0
    beq lbl_fn_802AD930_000018E4
    bl fn_803E3384
lbl_fn_802AD930_000018E4:
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    lwz r29, 0x74(r1)
    lwz r28, 0x70(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_802ADE54(void)
{
    nofralloc
    b fn_80149A30
}

asm void fn_802ADE58(void)
{
    nofralloc
    lis r5, lbl_807C7030@ha
    lwz r0, 0x50(r4)
    addi r5, r5, lbl_807C7030@l
    psq_l f1, 0x0(r5), 0, 0
    ori r0, r0, 0x10
    lfs f2, 0x8(r5)
    stfs f2, 0x18(r4)
    psq_st f1, 0x10(r4), 0, 0
    stw r0, 0x50(r4)
    lwz r0, 0x58c(r3)
    cmpwi r0, 0xc
    bne lbl_fn_802ADE58_0000194C
    lwz r0, 0x1a44(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802ADE58_0000194C
    li r0, 0x1
    stw r0, 0x1a44(r3)
lbl_fn_802ADE58_0000194C:
    lwz r0, 0x58c(r3)
    cmpwi r0, 0xe
    bne lbl_fn_802ADE58_00001998
    lwz r0, 0x14bc(r3)
    cmpwi r0, 0x7
    bne lbl_fn_802ADE58_00001970
    li r0, 0x1
    stw r0, 0x48(r4)
    b lbl_fn_802ADE58_000019A0
lbl_fn_802ADE58_00001970:
    cmpwi r0, 0x5
    bne lbl_fn_802ADE58_000019A0
    lwz r5, 0x8(r4)
    lwz r0, 0x1544(r3)
    cmplw r5, r0
    bne lbl_fn_802ADE58_000019A0
    lwz r0, 0xc(r4)
    ori r0, r0, 0x80
    stw r0, 0xc(r4)
    b lbl_fn_802ADE58_000019A0
lbl_fn_802ADE58_00001998:
    li r0, 0x1
    stw r0, 0x48(r4)
lbl_fn_802ADE58_000019A0:
    lwz r6, 0x7e0(r3)
    li r5, 0x1
    rlwinm r3, r6, 0, 12, 12
    subis r0, r3, 0x8
    cmplwi r0, 0x0
    beq lbl_fn_802ADE58_000019CC
    rlwinm r3, r6, 0, 7, 7
    subis r0, r3, 0x100
    cmplwi r0, 0x0
    beq lbl_fn_802ADE58_000019CC
    li r5, 0x0
lbl_fn_802ADE58_000019CC:
    cmpwi r5, 0x0
    beq lbl_fn_802ADE58_000019DC
    li r0, 0x0
    stw r0, 0x48(r4)
lbl_fn_802ADE58_000019DC:
    li r3, 0x1
    blr
}
