#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_16(void);
extern void _restgpr_19(void);
extern void _savegpr_16(void);
extern void _savegpr_19(void);
extern void dtor_80084684(void);
extern void fn_80051B70(void);
extern void fn_8005B3CC(void);
extern void fn_8005B5F8(void);
extern void fn_8005B6E8(void);
extern void fn_800844D8(void);
extern void fn_800897D8(void);
extern void fn_80092814(void);
extern void fn_80092954(void);
extern void fn_800CB3A0(void);
extern void fn_800D246C(void);
extern void fn_800DC12C(void);
extern void fn_800DC288(void);
extern void fn_8011FC10(void);
extern void fn_80133130(void);
extern void fn_80134270(void);
extern void fn_80134290(void);
extern void fn_8013655C(void);
extern void fn_80145334(void);
extern void fn_80149A30(void);
extern void fn_8014C540(void);
extern void fn_80151448(void);
extern void fn_8015C6A0(void);
extern void fn_8016E970(void);
extern void fn_80237518(void);
extern void fn_802375C4(void);
extern void fn_802376D0(void);
extern void fn_802377B8(void);
extern void fn_8023781C(void);
extern void fn_80237874(void);
extern void fn_80277BC0(void);
extern void fn_802790A0(void);
extern void fn_80279280(void);
extern void fn_8035B78C(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473E8C(void);
extern void fn_80473F50(void);
extern void fn_8054A340(void);
extern void fn_805A507C(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9990(void);
extern void fn_80680770(void);
extern void fn_80682428(void);
extern void fn_80684600(void);
extern void fn_80686EA4(void);
extern void fn_8068A850(void);
extern void fn_806959D8(void);

/* External data declarations */
extern u8 jumptable_80785078[];
extern u8 lbl_80744AA4[];
extern u8 lbl_80775A88[];
extern u8 lbl_807772B0[];
extern u8 lbl_807772D0[];
extern u8 lbl_807C7030[];
extern u8 lbl_807C8398[];

/* Small data declarations */
extern u32 lbl_8087D708;
extern u32 lbl_8087EF10;
extern u32 lbl_8087F408;
extern u32 lbl_8087F430;
extern u32 lbl_8087F8A0;
extern u32 lbl_80883820;
extern u32 lbl_8088382C;
extern u32 lbl_80883830;
extern u32 lbl_80883838;
extern u32 lbl_8088383C;
extern u32 lbl_80883840;
extern u32 lbl_80883844;
extern u32 lbl_80883848;
extern u32 lbl_8088384C;
extern u32 lbl_80883850;
extern u32 lbl_80883854;
extern u32 lbl_80883858;
extern u32 lbl_8088385C;
extern u32 lbl_80883860;

/* Function declarations */
void fn_80272C6C(void);
void fn_80272CF0(void);
void fn_80272E0C(void);
void fn_80272FB8(void);
void fn_80273970(void);
void fn_80273FE8(void);
void fn_80274268(void);
void fn_802744BC(void);
void fn_80274508(void);
void fn_80274518(void);
void fn_802745A0(void);

asm void fn_80272C6C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r31, 0xc(r1)
    mr r31, r3
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
    stw r0, 0x88(r3)
    addi r3, r3, 0x8c
    bl fn_802377B8
    addi r3, r31, 0x98
    bl fn_80237518
    addi r3, r31, 0xa4
    bl fn_802377B8
    addi r3, r31, 0xb0
    bl fn_80237518
    addi r3, r31, 0xbc
    bl fn_80237518
    addi r3, r31, 0xc8
    bl fn_802377B8
    addi r3, r31, 0xd4
    bl fn_802377B8
    addi r3, r31, 0xe0
    bl fn_802377B8
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80272CF0(void)
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
    beq lbl_fn_80272CF0_00000180
    addic. r31, r3, 0xe0
    beq lbl_fn_80272CF0_000000CC
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_80272CF0_000000CC
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80272CF0_000000CC:
    addic. r31, r29, 0xd4
    beq lbl_fn_80272CF0_000000EC
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_80272CF0_000000EC
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80272CF0_000000EC:
    addic. r31, r29, 0xc8
    beq lbl_fn_80272CF0_0000010C
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_80272CF0_0000010C
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80272CF0_0000010C:
    addi r3, r29, 0xbc
    li r4, -0x1
    bl fn_802375C4
    addi r3, r29, 0xb0
    li r4, -0x1
    bl fn_802375C4
    addic. r31, r29, 0xa4
    beq lbl_fn_80272CF0_00000144
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_80272CF0_00000144
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80272CF0_00000144:
    addi r3, r29, 0x98
    li r4, -0x1
    bl fn_802375C4
    addic. r31, r29, 0x8c
    beq lbl_fn_80272CF0_00000170
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_80272CF0_00000170
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80272CF0_00000170:
    cmpwi r30, 0x0
    ble lbl_fn_80272CF0_00000180
    mr r3, r29
    bl dtor_80084684
lbl_fn_80272CF0_00000180:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80272E0C(void)
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
    beq lbl_fn_80272E0C_0000032C
    addic. r0, r3, 0x1960
    beq lbl_fn_80272E0C_000001EC
    lwz r4, 0x1960(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80272E0C_000001EC
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_80272E0C_000001EC
    bl fn_800897D8
lbl_fn_80272E0C_000001EC:
    addic. r3, r29, 0x1938
    beq lbl_fn_80272E0C_000001FC
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80272E0C_000001FC:
    addic. r31, r29, 0x192c
    beq lbl_fn_80272E0C_0000021C
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_80272E0C_0000021C
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80272E0C_0000021C:
    addic. r31, r29, 0x1920
    beq lbl_fn_80272E0C_0000023C
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_80272E0C_0000023C
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80272E0C_0000023C:
    addic. r31, r29, 0x1914
    beq lbl_fn_80272E0C_0000025C
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_80272E0C_0000025C
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80272E0C_0000025C:
    addic. r4, r29, 0x1908
    beq lbl_fn_80272E0C_0000028C
    beq lbl_fn_80272E0C_0000028C
    beq lbl_fn_80272E0C_0000028C
    beq lbl_fn_80272E0C_0000028C
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_80272E0C_0000028C
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_80272E0C_0000028C:
    addi r3, r29, 0x18f4
    li r4, -0x1
    bl fn_800CB3A0
    lis r4, fn_80272CF0@ha
    addi r3, r29, 0x1538
    addi r4, r4, fn_80272CF0@l
    li r5, 0xec
    li r6, 0x4
    bl fn_806959D8
    addic. r4, r29, 0x14c0
    beq lbl_fn_80272E0C_000002E0
    beq lbl_fn_80272E0C_000002E0
    beq lbl_fn_80272E0C_000002E0
    beq lbl_fn_80272E0C_000002E0
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_80272E0C_000002E0
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_80272E0C_000002E0:
    addic. r4, r29, 0x14b0
    beq lbl_fn_80272E0C_00000310
    beq lbl_fn_80272E0C_00000310
    beq lbl_fn_80272E0C_00000310
    beq lbl_fn_80272E0C_00000310
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_80272E0C_00000310
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_80272E0C_00000310:
    mr r3, r29
    li r4, 0x0
    bl fn_8035B78C
    cmpwi r30, 0x0
    ble lbl_fn_80272E0C_0000032C
    mr r3, r29
    bl dtor_80084684
lbl_fn_80272E0C_0000032C:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80272FB8(void)
{
    nofralloc
    stwu r1, -0x6f0(r1)
    mflr r0
    stw r0, 0x6f4(r1)
    addi r11, r1, 0x6c0
    stfd f31, 0x6e0(r1)
    psq_st f31, 0x6e8(r1), 0, 0
    stfd f30, 0x6d0(r1)
    psq_st f30, 0x6d8(r1), 0, 0
    stfd f29, 0x6c0(r1)
    psq_st f29, 0x6c8(r1), 0, 0
    bl _savegpr_16
    mr r29, r3
    addi r16, r3, 0x15c4
    addi r17, r3, 0x15d0
    addi r18, r3, 0x15dc
    addi r19, r3, 0x15e8
    addi r20, r3, 0x15f4
    addi r21, r3, 0x1600
    addi r22, r3, 0x160c
    addi r23, r3, 0x1618
    li r24, 0x0
    li r25, 0x0
lbl_fn_80272FB8_000003A4:
    mr r3, r16
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_80272FB8_00000424
    mr r3, r17
    bl fn_802376D0
    cmpwi r3, 0x0
    bne lbl_fn_80272FB8_00000424
    mr r3, r18
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_80272FB8_00000424
    mr r3, r19
    bl fn_802376D0
    cmpwi r3, 0x0
    bne lbl_fn_80272FB8_00000424
    mr r3, r20
    bl fn_802376D0
    cmpwi r3, 0x0
    bne lbl_fn_80272FB8_00000424
    mr r3, r21
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_80272FB8_00000424
    mr r3, r22
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_80272FB8_00000424
    mr r3, r23
    bl fn_80237874
    cmpwi r3, 0x0
    beq lbl_fn_80272FB8_0000042C
lbl_fn_80272FB8_00000424:
    li r24, 0x1
    b lbl_fn_80272FB8_00000458
lbl_fn_80272FB8_0000042C:
    addi r25, r25, 0x1
    addi r17, r17, 0xec
    cmpwi r25, 0x4
    addi r18, r18, 0xec
    addi r19, r19, 0xec
    addi r20, r20, 0xec
    addi r21, r21, 0xec
    addi r22, r22, 0xec
    addi r23, r23, 0xec
    addi r16, r16, 0xec
    blt lbl_fn_80272FB8_000003A4
lbl_fn_80272FB8_00000458:
    mr r3, r29
    bl fn_8013655C
    cmpwi r3, 0x0
    bne lbl_fn_80272FB8_00000CD0
    lwz r3, 0x1438(r29)
    cmpwi r3, 0x0
    beq lbl_fn_80272FB8_00000484
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_80272FB8_00000CD0
lbl_fn_80272FB8_00000484:
    addi r3, r29, 0x1914
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_80272FB8_00000CD0
    addi r3, r29, 0x1920
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_80272FB8_00000CD0
    addi r3, r29, 0x192c
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_80272FB8_00000CD0
    addi r3, r29, 0x1938
    bl fn_80473F50
    cmpwi r3, 0x0
    bne lbl_fn_80272FB8_00000CD0
    cmpwi r24, 0x0
    bne lbl_fn_80272FB8_00000CD0
    addi r3, r29, 0x1938
    bl fn_80470580
    cmpwi r3, 0x0
    beq lbl_fn_80272FB8_00000C8C
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80272FB8_00000C8C
    lwz r0, 0x10d8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80272FB8_00000C8C
    addi r3, r29, 0x1938
    bl fn_8047059C
    mr r17, r3
    addi r3, r29, 0x1938
    bl fn_80470580
    lis r4, lbl_807772D0@ha
    li r19, 0x0
    addi r4, r4, lbl_807772D0@l
    stw r4, 0x48(r1)
    mr r16, r3
    addi r3, r1, 0x58
    stw r19, 0x4c(r1)
    li r4, 0x0
    li r5, 0x400
    stw r19, 0x50(r1)
    stw r19, 0x54(r1)
    stw r19, 0x678(r1)
    bl memset
    addi r3, r1, 0x658
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x48(r1)
    mr r4, r16
    mr r5, r17
    addi r3, r1, 0x48
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0x48
    addi r4, r4, lbl_807772B0@l
    stw r4, 0x48(r1)
    la r4, lbl_8087D708
    bl fn_8005B6E8
    lis r3, __files@ha
    lis r4, lbl_80744AA4@ha
    lfs f31, lbl_8088383C
    addi r21, r4, lbl_80744AA4@l
    lfs f29, lbl_8088382C
    addi r22, r3, __files@l
    lfs f30, lbl_80883838
    addi r18, r1, 0x34
    addi r31, r1, 0x20
    lis r24, 0xcccd
    lis r20, 0x4000
    lis r23, 0x1555
    lis r25, 0x2aab
    lis r26, lbl_80775A88@ha
lbl_fn_80272FB8_000005B8:
    addi r3, r1, 0x48
    bl fn_8005B3CC
    mr r16, r3
    addi r4, r21, 0x12d
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80272FB8_000005E8
    addi r3, r1, 0x48
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x1504(r29)
    b lbl_fn_80272FB8_00000C7C
lbl_fn_80272FB8_000005E8:
    mr r3, r16
    addi r4, r21, 0x138
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80272FB8_00000610
    addi r3, r1, 0x48
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x1510(r29)
    b lbl_fn_80272FB8_00000C7C
lbl_fn_80272FB8_00000610:
    mr r3, r16
    addi r4, r21, 0x141
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80272FB8_00000654
    addi r3, r1, 0x48
    bl fn_8005B3CC
    bl fn_800DC288
    frsp f0, f1
    stfs f1, 0x1514(r29)
    fsubs f0, f0, f29
    fabs f0, f0
    frsp f0, f0
    fcmpo cr0, f0, f30
    bge lbl_fn_80272FB8_00000C7C
    stfs f31, 0x1514(r29)
    b lbl_fn_80272FB8_00000C7C
lbl_fn_80272FB8_00000654:
    mr r3, r16
    addi r4, r21, 0x14c
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80272FB8_0000067C
    addi r3, r1, 0x48
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x150c(r29)
    b lbl_fn_80272FB8_00000C7C
lbl_fn_80272FB8_0000067C:
    mr r3, r16
    addi r4, r21, 0x155
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80272FB8_000006A4
    addi r3, r1, 0x48
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x1508(r29)
    b lbl_fn_80272FB8_00000C7C
lbl_fn_80272FB8_000006A4:
    mr r3, r16
    addi r4, r21, 0x15e
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80272FB8_000006CC
    addi r3, r1, 0x48
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x1518(r29)
    b lbl_fn_80272FB8_00000C7C
lbl_fn_80272FB8_000006CC:
    mr r3, r16
    addi r4, r21, 0x168
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80272FB8_000006F4
    addi r3, r1, 0x48
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x1520(r29)
    b lbl_fn_80272FB8_00000C7C
lbl_fn_80272FB8_000006F4:
    mr r3, r16
    addi r4, r21, 0x172
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80272FB8_0000071C
    addi r3, r1, 0x48
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x1524(r29)
    b lbl_fn_80272FB8_00000C7C
lbl_fn_80272FB8_0000071C:
    mr r3, r16
    addi r4, r21, 0x17b
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80272FB8_00000744
    addi r3, r1, 0x48
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x152c(r29)
    b lbl_fn_80272FB8_00000C7C
lbl_fn_80272FB8_00000744:
    mr r3, r16
    addi r4, r21, 0x18a
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80272FB8_0000076C
    addi r3, r1, 0x48
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x14bc(r29)
    b lbl_fn_80272FB8_00000C7C
lbl_fn_80272FB8_0000076C:
    mr r3, r16
    addi r4, r21, 0x19a
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80272FB8_00000A14
lbl_fn_80272FB8_00000780:
    addi r3, r1, 0x48
    bl fn_8005B3CC
    bl fn_800DC12C
    lwz r4, lbl_8087F430
    mr r28, r3
    li r5, 0x0
    li r6, 0x0
    lwz r4, 0x10d8(r4)
    lwz r0, 0x78(r4)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80272FB8_000007D8
lbl_fn_80272FB8_000007B0:
    lwz r7, 0x7c(r4)
    lwzx r0, r7, r6
    cmpw r3, r0
    bne lbl_fn_80272FB8_000007CC
    mulli r0, r5, 0x28
    add r30, r7, r0
    b lbl_fn_80272FB8_000007DC
lbl_fn_80272FB8_000007CC:
    addi r6, r6, 0x28
    addi r5, r5, 0x1
    bdnz lbl_fn_80272FB8_000007B0
lbl_fn_80272FB8_000007D8:
    li r30, 0x0
lbl_fn_80272FB8_000007DC:
    cmpwi r30, 0x0
    beq lbl_fn_80272FB8_00000A08
    lwz r4, 0x14c4(r29)
    lwz r3, 0x14c8(r29)
    cmplw r4, r3
    bge lbl_fn_80272FB8_00000810
    addi r4, r4, 0x1
    lwz r3, 0x14c0(r29)
    slwi r0, r4, 2
    stw r4, 0x14c4(r29)
    add r3, r3, r0
    stw r30, -0x4(r3)
    b lbl_fn_80272FB8_00000A08
lbl_fn_80272FB8_00000810:
    subi r0, r20, 0x1
    subf r0, r3, r0
    cmplwi r0, 0x1
    bge lbl_fn_80272FB8_00000834
    addi r4, r21, 0x1a6
    addi r3, r22, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80272FB8_00000834:
    lwz r3, 0x14c4(r29)
    addi r4, r29, 0x14c8
    lwz r27, 0x14c8(r29)
    subi r0, r20, 0x1
    addi r3, r3, 0x1
    stw r19, 0x34(r1)
    subf r3, r27, r3
    subf r0, r27, r0
    cmplw r3, r0
    stw r19, 0x38(r1)
    stw r19, 0x3c(r1)
    stw r4, 0x40(r1)
    stw r19, 0x44(r1)
    stw r3, 0x14(r1)
    ble lbl_fn_80272FB8_00000884
    addi r4, r21, 0x1a6
    addi r3, r22, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80272FB8_00000884:
    addi r0, r23, 0x5555
    cmplw r27, r0
    bge lbl_fn_80272FB8_000008CC
    addi r4, r27, 0x1
    subi r5, r24, 0x3333
    slwi r3, r4, 2
    lwz r0, 0x14(r1)
    subf r4, r4, r3
    mulhwu r4, r5, r4
    addi r3, r1, 0x1c
    srwi r4, r4, 2
    stw r4, 0x1c(r1)
    cmplw r4, r0
    bge lbl_fn_80272FB8_000008C0
    addi r3, r1, 0x14
lbl_fn_80272FB8_000008C0:
    lwz r0, 0x0(r3)
    add r27, r27, r0
    b lbl_fn_80272FB8_00000908
lbl_fn_80272FB8_000008CC:
    subi r0, r25, 0x5556
    cmplw r27, r0
    bge lbl_fn_80272FB8_00000904
    addi r3, r27, 0x1
    lwz r0, 0x14(r1)
    srwi r3, r3, 1
    stw r3, 0x18(r1)
    cmplw r3, r0
    addi r3, r1, 0x18
    bge lbl_fn_80272FB8_000008F8
    addi r3, r1, 0x14
lbl_fn_80272FB8_000008F8:
    lwz r0, 0x0(r3)
    add r27, r27, r0
    b lbl_fn_80272FB8_00000908
lbl_fn_80272FB8_00000904:
    subi r27, r20, 0x1
lbl_fn_80272FB8_00000908:
    subi r0, r20, 0x1
    cmplw r27, r0
    ble lbl_fn_80272FB8_00000928
    addi r4, r21, 0x1a6
    addi r3, r22, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80272FB8_00000928:
    slwi r3, r27, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r17, r3
    bne lbl_fn_80272FB8_00000950
    addi r3, r22, 0xa0
    addi r4, r26, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80272FB8_00000950:
    lwz r5, 0x14c4(r29)
    lwz r3, 0x38(r1)
    slwi r0, r5, 2
    stw r27, 0x3c(r1)
    slwi r4, r3, 2
    addi r3, r3, 0x1
    add r0, r17, r0
    stw r3, 0x38(r1)
    stwx r30, r4, r0
    lwz r0, 0x14c4(r29)
    lwz r30, 0x14c0(r29)
    slwi r0, r0, 2
    add r0, r30, r0
    mr r4, r30
    subf r0, r30, r0
    srawi r0, r0, 2
    addze r27, r0
    subf r0, r27, r5
    stw r0, 0x44(r1)
    slwi r16, r27, 2
    slwi r0, r0, 2
    mr r5, r16
    add r3, r17, r0
    bl memcpy
    mr r3, r30
    mr r5, r16
    li r4, 0x0
    bl memset
    lwz r0, 0x38(r1)
    cmpwi r18, 0x0
    lwz r3, 0x14c0(r29)
    add r5, r0, r27
    mr r0, r17
    lwz r6, 0x14c8(r29)
    lwz r4, 0x3c(r1)
    stw r4, 0x14c8(r29)
    stw r6, 0x3c(r1)
    stw r0, 0x14c0(r29)
    stw r3, 0x34(r1)
    stw r5, 0x14c4(r29)
    stw r19, 0x38(r1)
    beq lbl_fn_80272FB8_00000A08
    cmpwi r3, 0x0
    beq lbl_fn_80272FB8_00000A08
    stw r19, 0x38(r1)
    bl dtor_80084684
lbl_fn_80272FB8_00000A08:
    cmpwi r28, 0x0
    bne lbl_fn_80272FB8_00000780
    b lbl_fn_80272FB8_00000C7C
lbl_fn_80272FB8_00000A14:
    mr r3, r16
    addi r4, r21, 0x1ba
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80272FB8_00000C7C
lbl_fn_80272FB8_00000A28:
    addi r3, r1, 0x48
    bl fn_8005B3CC
    bl fn_800DC12C
    mr r30, r3
    lwz r3, lbl_8087F408
    mr r4, r30
    bl fn_8011FC10
    cmpwi r3, 0x0
    mr r27, r3
    beq lbl_fn_80272FB8_00000C74
    lwz r5, 0x14b4(r29)
    lwz r4, 0x14b8(r29)
    cmplw r5, r4
    bge lbl_fn_80272FB8_00000A7C
    addi r5, r5, 0x1
    lwz r4, 0x14b0(r29)
    slwi r0, r5, 2
    stw r5, 0x14b4(r29)
    add r4, r4, r0
    stw r3, -0x4(r4)
    b lbl_fn_80272FB8_00000C74
lbl_fn_80272FB8_00000A7C:
    subi r0, r20, 0x1
    subf r0, r4, r0
    cmplwi r0, 0x1
    bge lbl_fn_80272FB8_00000AA0
    addi r4, r21, 0x1a6
    addi r3, r22, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80272FB8_00000AA0:
    lwz r3, 0x14b4(r29)
    addi r4, r29, 0x14b8
    lwz r28, 0x14b8(r29)
    subi r0, r20, 0x1
    addi r3, r3, 0x1
    stw r19, 0x20(r1)
    subf r3, r28, r3
    subf r0, r28, r0
    cmplw r3, r0
    stw r19, 0x24(r1)
    stw r19, 0x28(r1)
    stw r4, 0x2c(r1)
    stw r19, 0x30(r1)
    stw r3, 0x8(r1)
    ble lbl_fn_80272FB8_00000AF0
    addi r4, r21, 0x1a6
    addi r3, r22, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80272FB8_00000AF0:
    addi r0, r23, 0x5555
    cmplw r28, r0
    bge lbl_fn_80272FB8_00000B38
    addi r4, r28, 0x1
    subi r5, r24, 0x3333
    slwi r3, r4, 2
    lwz r0, 0x8(r1)
    subf r4, r4, r3
    mulhwu r4, r5, r4
    addi r3, r1, 0x10
    srwi r4, r4, 2
    stw r4, 0x10(r1)
    cmplw r4, r0
    bge lbl_fn_80272FB8_00000B2C
    addi r3, r1, 0x8
lbl_fn_80272FB8_00000B2C:
    lwz r0, 0x0(r3)
    add r17, r28, r0
    b lbl_fn_80272FB8_00000B74
lbl_fn_80272FB8_00000B38:
    subi r0, r25, 0x5556
    cmplw r28, r0
    bge lbl_fn_80272FB8_00000B70
    addi r3, r28, 0x1
    lwz r0, 0x8(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_80272FB8_00000B64
    addi r3, r1, 0x8
lbl_fn_80272FB8_00000B64:
    lwz r0, 0x0(r3)
    add r17, r28, r0
    b lbl_fn_80272FB8_00000B74
lbl_fn_80272FB8_00000B70:
    subi r17, r20, 0x1
lbl_fn_80272FB8_00000B74:
    subi r0, r20, 0x1
    cmplw r17, r0
    ble lbl_fn_80272FB8_00000B94
    addi r4, r21, 0x1a6
    addi r3, r22, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80272FB8_00000B94:
    slwi r3, r17, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r28, r3
    bne lbl_fn_80272FB8_00000BBC
    addi r3, r22, 0xa0
    addi r4, r26, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80272FB8_00000BBC:
    lwz r5, 0x14b4(r29)
    lwz r3, 0x24(r1)
    slwi r0, r5, 2
    stw r17, 0x28(r1)
    slwi r4, r3, 2
    addi r3, r3, 0x1
    add r0, r28, r0
    stw r3, 0x24(r1)
    stwx r27, r4, r0
    lwz r0, 0x14b4(r29)
    lwz r16, 0x14b0(r29)
    slwi r0, r0, 2
    add r0, r16, r0
    mr r4, r16
    subf r0, r16, r0
    srawi r0, r0, 2
    addze r17, r0
    subf r0, r17, r5
    stw r0, 0x30(r1)
    slwi r27, r17, 2
    slwi r0, r0, 2
    mr r5, r27
    add r3, r28, r0
    bl memcpy
    mr r3, r16
    mr r5, r27
    li r4, 0x0
    bl memset
    lwz r0, 0x24(r1)
    cmpwi r31, 0x0
    lwz r3, 0x14b0(r29)
    add r5, r0, r17
    mr r0, r28
    lwz r6, 0x14b8(r29)
    lwz r4, 0x28(r1)
    stw r4, 0x14b8(r29)
    stw r6, 0x28(r1)
    stw r0, 0x14b0(r29)
    stw r3, 0x20(r1)
    stw r5, 0x14b4(r29)
    stw r19, 0x24(r1)
    beq lbl_fn_80272FB8_00000C74
    cmpwi r3, 0x0
    beq lbl_fn_80272FB8_00000C74
    stw r19, 0x24(r1)
    bl dtor_80084684
lbl_fn_80272FB8_00000C74:
    cmpwi r30, 0x0
    bne lbl_fn_80272FB8_00000A28
lbl_fn_80272FB8_00000C7C:
    addi r3, r1, 0x48
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_80272FB8_000005B8
lbl_fn_80272FB8_00000C8C:
    lwz r0, 0x7ec(r29)
    lwz r3, 0x1438(r29)
    ori r0, r0, 0x1c0
    oris r0, r0, 0x1
    cmpwi r3, 0x0
    ori r0, r0, 0xc219
    oris r0, r0, 0x380
    stw r0, 0x7ec(r29)
    beq lbl_fn_80272FB8_00000CC8
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x1438(r29)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_80272FB8_00000CC8:
    li r3, 0x1
    b lbl_fn_80272FB8_00000CD4
lbl_fn_80272FB8_00000CD0:
    li r3, 0x0
lbl_fn_80272FB8_00000CD4:
    addi r11, r1, 0x6c0
    psq_l f31, 0x6e8(r1), 0, 0
    lfd f31, 0x6e0(r1)
    psq_l f30, 0x6d8(r1), 0, 0
    lfd f30, 0x6d0(r1)
    psq_l f29, 0x6c8(r1), 0, 0
    lfd f29, 0x6c0(r1)
    bl _restgpr_16
    lwz r0, 0x6f4(r1)
    mtlr r0
    addi r1, r1, 0x6f0
    blr
}

asm void fn_80273970(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    addi r11, r1, 0xf0
    stfd f31, 0x110(r1)
    psq_st f31, 0x118(r1), 0, 0
    stfd f30, 0x100(r1)
    psq_st f30, 0x108(r1), 0, 0
    stfd f29, 0xf0(r1)
    psq_st f29, 0xf8(r1), 0, 0
    bl _savegpr_19
    lwz r12, 0x0(r3)
    mr r21, r3
    lwz r12, 0xf8(r12)
    mtctr r12
    bctrl
    lwz r0, 0x7e0(r21)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_80273970_00000E00
    lwz r3, lbl_8087F8A0
    li r4, 0x5
    bl fn_8054A340
    cmpwi r3, 0x0
    beq lbl_fn_80273970_00000E00
    lwz r7, 0x38(r3)
    li r5, 0x0
    li r0, 0x0
    li r4, 0x0
    rlwinm r6, r7, 0, 29, 29
    cmplwi r6, 0x4
    beq lbl_fn_80273970_00000D94
    clrlwi r6, r7, 31
    cmplwi r6, 0x1
    beq lbl_fn_80273970_00000D94
    li r4, 0x1
lbl_fn_80273970_00000D94:
    cmpwi r4, 0x0
    beq lbl_fn_80273970_00000DB0
    lwz r4, 0x7e0(r3)
    rlwinm r4, r4, 0, 26, 26
    cmplwi r4, 0x20
    beq lbl_fn_80273970_00000DB0
    li r0, 0x1
lbl_fn_80273970_00000DB0:
    cmpwi r0, 0x0
    beq lbl_fn_80273970_00000DE4
    lwz r0, 0x55c(r3)
    li r4, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_80273970_00000DD8
    lwz r0, 0x560(r3)
    cmpwi r0, 0x1c
    bne lbl_fn_80273970_00000DD8
    li r4, 0x1
lbl_fn_80273970_00000DD8:
    cmpwi r4, 0x0
    bne lbl_fn_80273970_00000DE4
    li r5, 0x1
lbl_fn_80273970_00000DE4:
    cmpwi r5, 0x0
    beq lbl_fn_80273970_00000E00
    addi r3, r21, 0x7d4
    li r4, 0x4
    li r5, 0xa
    li r6, 0x0
    bl fn_80133130
lbl_fn_80273970_00000E00:
    lwz r0, 0x18f0(r21)
    cmpwi r0, 0x0
    ble lbl_fn_80273970_00001034
    lwz r3, lbl_8087F8A0
    lwz r24, 0x48(r3)
    cmpwi r24, 0x0
    beq lbl_fn_80273970_0000103C
    lwz r0, 0x638(r24)
    cmpwi r0, 0x0
    beq lbl_fn_80273970_0000103C
    lwz r0, 0x55c(r24)
    cmpwi r0, 0x6
    bne lbl_fn_80273970_00001028
    lwz r0, 0x560(r24)
    cmpwi r0, 0xe
    bne lbl_fn_80273970_00001028
    lwz r3, 0xf80(r24)
    cmpwi r3, 0x0
    beq lbl_fn_80273970_0000103C
    lwz r12, 0x0(r3)
    lwz r12, 0x54(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80273970_0000103C
    lwz r0, 0x1904(r21)
    cmpwi r0, 0x0
    beq lbl_fn_80273970_0000103C
    li r31, 0x0
    lis r3, lbl_80744AA4@ha
    stw r31, 0x1904(r21)
    addi r20, r3, lbl_80744AA4@l
    lfs f30, lbl_80883840
    addi r30, r1, 0x48
    lfs f31, lbl_80883820
    addi r28, r1, 0x60
    addi r29, r1, 0x70
    addi r26, r1, 0x54
    addi r27, r1, 0x7c
    addi r25, r1, 0x38
    li r23, 0x0
    li r22, 0x0
lbl_fn_80273970_00000EA8:
    add r3, r21, r31
    lwz r0, 0x1538(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80273970_00000FB4
    lwz r6, 0x638(r24)
    addi r4, r20, 0x1c9
    lwz r3, 0x15c0(r3)
    li r5, 0x0
    lfs f0, 0x58(r6)
    addi r19, r3, 0xb0
    fmuls f29, f30, f0
    mr r3, r19
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80273970_00000EEC
    li r5, 0x0
    b lbl_fn_80273970_00000EF8
lbl_fn_80273970_00000EEC:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r19)
    add r5, r3, r0
lbl_fn_80273970_00000EF8:
    lfs f0, 0x2c(r5)
    addi r4, r20, 0x1cf
    lfs f3, 0x1c(r5)
    addi r3, r21, 0xb0
    lfs f4, 0xc(r5)
    li r5, 0x0
    stfs f4, 0x60(r1)
    stfs f3, 0x64(r1)
    stfs f0, 0x68(r1)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80273970_00000F30
    li r5, 0x0
    b lbl_fn_80273970_00000F3C
lbl_fn_80273970_00000F30:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r21)
    add r5, r3, r0
lbl_fn_80273970_00000F3C:
    psq_l f1, 0x528(r24), 0, 0
    mr r3, r29
    psq_st f1, 0x0(r30), 0, 0
    mr r4, r25
    lfs f0, 0x2c(r5)
    stfs f31, 0x64(r1)
    lfs f3, 0xc(r5)
    lfs f2, 0x530(r24)
    stfs f2, 0x50(r1)
    lfs f2, 0x68(r1)
    stfs f2, 0x78(r1)
    fmr f2, f0
    psq_l f1, 0x0(r28), 0, 0
    stfs f2, 0x84(r1)
    lfs f2, 0x50(r1)
    stfs f3, 0x54(r1)
    stfs f31, 0x58(r1)
    psq_st f1, 0x0(r29), 0, 0
    psq_l f1, 0x0(r26), 0, 0
    stfs f31, 0x4c(r1)
    psq_st f1, 0x0(r27), 0, 0
    psq_l f1, 0x0(r30), 0, 0
    stfs f0, 0x5c(r1)
    psq_st f1, 0x0(r25), 0, 0
    stfs f2, 0x40(r1)
    stfs f29, 0x44(r1)
    bl fn_80051B70
    cmpwi r3, 0x0
    beq lbl_fn_80273970_00000FB4
    li r23, 0x1
lbl_fn_80273970_00000FB4:
    addi r22, r22, 0x1
    addi r31, r31, 0xec
    cmpwi r22, 0x4
    blt lbl_fn_80273970_00000EA8
    cmpwi r23, 0x0
    beq lbl_fn_80273970_0000103C
    lwz r3, 0x18ec(r21)
    li r0, 0x0
    stw r0, 0x18f0(r21)
    cmpwi r3, 0x0
    beq lbl_fn_80273970_00000FE4
    bl fn_8015C6A0
lbl_fn_80273970_00000FE4:
    li r3, 0x0
    li r0, 0x258
    stw r3, 0x18ec(r21)
    li r20, 0x0
    stw r0, 0x14e0(r21)
lbl_fn_80273970_00000FF8:
    mr r3, r21
    mr r4, r20
    bl fn_802790A0
    addi r20, r20, 0x1
    cmpwi r20, 0x4
    blt lbl_fn_80273970_00000FF8
    lwz r12, 0x0(r21)
    mr r3, r21
    lwz r12, 0x150(r12)
    mtctr r12
    bctrl
    b lbl_fn_80273970_0000103C
lbl_fn_80273970_00001028:
    li r0, 0x1
    stw r0, 0x1904(r21)
    b lbl_fn_80273970_0000103C
lbl_fn_80273970_00001034:
    li r0, 0x1
    stw r0, 0x1904(r21)
lbl_fn_80273970_0000103C:
    lwz r0, 0xd18(r21)
    cmpwi r0, 0x0
    beq lbl_fn_80273970_00001054
    lwz r0, 0x14d4(r21)
    cmpwi r0, 0x0
    bne lbl_fn_80273970_00001080
lbl_fn_80273970_00001054:
    mr r3, r21
    li r4, 0x3
    bl fn_8016E970
    li r0, 0x6
    stw r0, 0x58c(r21)
    mr r3, r21
    lwz r12, 0x0(r21)
    lwz r12, 0xfc(r12)
    mtctr r12
    bctrl
    b lbl_fn_80273970_00001224
lbl_fn_80273970_00001080:
    lwz r0, 0x58c(r21)
    cmpwi r0, 0x0
    bne lbl_fn_80273970_00001094
    li r0, 0x6
    stw r0, 0x58c(r21)
lbl_fn_80273970_00001094:
    lwz r0, 0x58c(r21)
    cmplwi r0, 0x12
    bgt lbl_fn_80273970_000011F0
    lis r3, jumptable_80785078@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_80785078@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lwz r12, 0x0(r21)
    mr r3, r21
    lwz r12, 0x108(r12)
    mtctr r12
    bctrl
    b lbl_fn_80273970_00001224
    lwz r12, 0x0(r21)
    mr r3, r21
    lwz r12, 0x10c(r12)
    mtctr r12
    bctrl
    b lbl_fn_80273970_00001224
    lwz r12, 0x0(r21)
    mr r3, r21
    lwz r12, 0x110(r12)
    mtctr r12
    bctrl
    b lbl_fn_80273970_00001224
    lwz r12, 0x0(r21)
    mr r3, r21
    lwz r12, 0x114(r12)
    mtctr r12
    bctrl
    b lbl_fn_80273970_00001224
    lwz r12, 0x0(r21)
    mr r3, r21
    lwz r12, 0x118(r12)
    mtctr r12
    bctrl
    b lbl_fn_80273970_00001224
    lwz r12, 0x0(r21)
    mr r3, r21
    lwz r12, 0x11c(r12)
    mtctr r12
    bctrl
    b lbl_fn_80273970_00001224
    lwz r12, 0x0(r21)
    mr r3, r21
    lwz r12, 0x120(r12)
    mtctr r12
    bctrl
    b lbl_fn_80273970_00001224
    lwz r12, 0x0(r21)
    mr r3, r21
    lwz r12, 0x124(r12)
    mtctr r12
    bctrl
    b lbl_fn_80273970_00001224
    lwz r12, 0x0(r21)
    mr r3, r21
    lwz r12, 0x128(r12)
    mtctr r12
    bctrl
    b lbl_fn_80273970_00001224
    lwz r12, 0x0(r21)
    mr r3, r21
    lwz r12, 0x12c(r12)
    mtctr r12
    bctrl
    b lbl_fn_80273970_00001224
    lwz r12, 0x0(r21)
    mr r3, r21
    lwz r12, 0xec(r12)
    mtctr r12
    bctrl
    b lbl_fn_80273970_00001224
    lwz r12, 0x0(r21)
    mr r3, r21
    lwz r12, 0x130(r12)
    mtctr r12
    bctrl
    b lbl_fn_80273970_00001224
    lwz r12, 0x0(r21)
    mr r3, r21
    lwz r12, 0x134(r12)
    mtctr r12
    bctrl
    b lbl_fn_80273970_00001224
lbl_fn_80273970_000011F0:
    lwz r12, 0x0(r21)
    mr r3, r21
    lwz r12, 0x104(r12)
    mtctr r12
    bctrl
    lwz r0, 0x58c(r21)
    cmpwi r0, 0x6
    bne lbl_fn_80273970_00001224
    lwz r12, 0x0(r21)
    mr r3, r21
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_80273970_00001224:
    mr r3, r21
    bl fn_8014C540
    mr r3, r21
    bl fn_80145334
    mr r3, r21
    bl fn_80279280
    lwz r3, 0x14e0(r21)
    lwz r4, 0x14dc(r21)
    cmpwi r3, 0x0
    addi r0, r4, 0x1
    stw r0, 0x14dc(r21)
    ble lbl_fn_80273970_0000125C
    subi r0, r3, 0x1
    stw r0, 0x14e0(r21)
lbl_fn_80273970_0000125C:
    lfs f3, 0x5b0(r21)
    addi r5, r1, 0x20
    psq_l f1, 0x528(r21), 0, 0
    addi r4, r1, 0x2c
    lfs f2, 0x530(r21)
    lfs f0, 0x52c(r21)
    lwz r3, 0x1500(r21)
    psq_st f1, 0x0(r5), 0, 0
    fadds f0, f0, f3
    addi r0, r3, 0x1
    stfs f2, 0x34(r1)
    cmpwi r0, 0xa
    stfs f2, 0x28(r1)
    frsp f2, f2
    stfs f2, 0x5fc(r21)
    lfs f2, 0x28(r1)
    stfs f0, 0x24(r1)
    psq_st f1, 0x0(r4), 0, 0
    psq_st f1, 0x5f4(r21), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x600(r21), 0, 0
    stfs f2, 0x608(r21)
    stfs f3, 0x60c(r21)
    stw r0, 0x1500(r21)
    ble lbl_fn_80273970_000012E4
    lwz r0, 0x58c(r21)
    cmpwi r0, 0x6
    beq lbl_fn_80273970_000012D4
    cmpwi r0, 0x10
    bne lbl_fn_80273970_000012E4
lbl_fn_80273970_000012D4:
    mr r3, r21
    bl fn_80277BC0
    li r0, 0x0
    stw r0, 0x1500(r21)
lbl_fn_80273970_000012E4:
    psq_l f1, 0x528(r21), 0, 0
    addi r20, r1, 0x14
    lfs f2, 0x530(r21)
    addi r3, r1, 0x88
    lfs f3, lbl_80883820
    li r4, 0x79
    lfs f0, lbl_80883830
    psq_st f1, 0x0(r20), 0, 0
    stfs f2, 0x1c(r1)
    stfs f3, 0x8(r1)
    stfs f3, 0xc(r1)
    stfs f0, 0x10(r1)
    lfs f1, 0x538(r21)
    bl fn_805F8E70
    addi r4, r1, 0x8
    addi r3, r1, 0x88
    mr r5, r4
    bl fn_805F93C0
    lfs f3, lbl_80883844
    mr r3, r20
    lfs f0, 0x5b0(r21)
    addi r4, r1, 0x8
    lfs f2, lbl_80883848
    li r5, 0x3e8
    fmuls f1, f3, f0
    bl fn_805A507C
    addi r11, r1, 0xf0
    psq_l f31, 0x118(r1), 0, 0
    lfd f31, 0x110(r1)
    psq_l f30, 0x108(r1), 0, 0
    lfd f30, 0x100(r1)
    psq_l f29, 0xf8(r1), 0, 0
    lfd f29, 0xf0(r1)
    bl _restgpr_19
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_80273FE8(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    li r5, 0x1
    stw r0, 0xb4(r1)
    stfd f31, 0xa0(r1)
    psq_st f31, 0xa8(r1), 0, 0
    stw r31, 0x9c(r1)
    mr r31, r3
    stw r30, 0x98(r1)
    lwz r6, 0x7e0(r3)
    lfs f3, 0x1950(r3)
    rlwinm r4, r6, 0, 12, 12
    lfs f2, 0x1954(r3)
    subis r0, r4, 0x8
    lfs f1, 0x1958(r3)
    lfs f0, 0x195c(r3)
    cmplwi r0, 0x0
    stfs f3, 0x48(r1)
    stfs f2, 0x4c(r1)
    stfs f1, 0x50(r1)
    stfs f0, 0x54(r1)
    beq lbl_fn_80273FE8_000013E8
    rlwinm r4, r6, 0, 7, 7
    subis r0, r4, 0x100
    cmplwi r0, 0x0
    beq lbl_fn_80273FE8_000013E8
    li r5, 0x0
lbl_fn_80273FE8_000013E8:
    cmpwi r5, 0x0
    beq lbl_fn_80273FE8_00001418
    lis r5, lbl_807C8398@ha
    addi r4, r5, lbl_807C8398@l
    lfs f3, lbl_807C8398@l(r5)
    lfs f2, 0x4(r4)
    lfs f1, 0x8(r4)
    lfs f0, 0xc(r4)
    stfs f3, 0x48(r1)
    stfs f2, 0x4c(r1)
    stfs f1, 0x50(r1)
    stfs f0, 0x54(r1)
lbl_fn_80273FE8_00001418:
    lfs f1, 0x50(r1)
    lis r30, lbl_80744AA4@ha
    lfs f5, 0x1948(r3)
    addi r30, r30, lbl_80744AA4@l
    lfs f2, 0x4c(r1)
    addi r4, r30, 0x1d4
    fsubs f13, f1, f5
    lfs f4, 0x1944(r3)
    lfs f0, 0x54(r1)
    fsubs f12, f2, f4
    lfs f3, 0x194c(r3)
    lfs f1, 0x48(r1)
    fsubs f31, f0, f3
    lfs f0, lbl_8088384C
    lfs f2, 0x1940(r3)
    fmuls f10, f13, f0
    stfs f12, 0x2c(r1)
    fsubs f1, f1, f2
    fmuls f11, f31, f0
    stfs f13, 0x30(r1)
    fadds f6, f10, f5
    fmuls f9, f12, f0
    stfs f1, 0x28(r1)
    fadds f7, f11, f3
    fmuls f8, f1, f0
    lfs f3, lbl_80883850
    fadds f5, f9, f4
    fmuls f1, f3, f6
    stfs f31, 0x34(r1)
    fadds f4, f8, f2
    fmuls f0, f3, f7
    stfs f8, 0x18(r1)
    fmuls f2, f3, f5
    fmuls f3, f3, f4
    stfs f9, 0x1c(r1)
    fctiwz f1, f1
    fctiwz f2, f2
    stfs f10, 0x20(r1)
    fctiwz f3, f3
    fctiwz f0, f0
    stfd f1, 0x68(r1)
    stfd f3, 0x58(r1)
    lwz r5, 0x6c(r1)
    stfd f2, 0x60(r1)
    lwz r7, 0x5c(r1)
    stfd f0, 0x70(r1)
    lwz r6, 0x64(r1)
    lwz r0, 0x74(r1)
    stb r7, 0xc(r1)
    stb r6, 0xd(r1)
    stb r5, 0xe(r1)
    stb r0, 0xf(r1)
    lwz r0, 0xc(r1)
    stfs f11, 0x24(r1)
    stfs f4, 0x38(r1)
    stfs f5, 0x3c(r1)
    stfs f6, 0x40(r1)
    stfs f7, 0x44(r1)
    stfs f4, 0x1940(r3)
    stfs f5, 0x1944(r3)
    stfs f6, 0x1948(r3)
    stfs f7, 0x194c(r3)
    addi r3, r3, 0xb0
    stw r0, 0x14(r1)
    bl fn_80092954
    lbz r0, 0x14(r1)
    addi r4, r30, 0x1df
    stb r0, 0x18(r3)
    lbz r0, 0x15(r1)
    stb r0, 0x19(r3)
    lbz r0, 0x16(r1)
    stb r0, 0x1a(r3)
    lbz r0, 0x17(r1)
    stb r0, 0x1b(r3)
    addi r3, r31, 0xb0
    lfs f4, lbl_80883850
    lfs f0, 0x1940(r31)
    lfs f2, 0x1944(r31)
    fmuls f3, f4, f0
    lfs f1, 0x1948(r31)
    lfs f0, 0x194c(r31)
    fmuls f2, f4, f2
    fmuls f1, f4, f1
    fmuls f0, f4, f0
    fctiwz f3, f3
    fctiwz f2, f2
    fctiwz f1, f1
    stfd f3, 0x78(r1)
    fctiwz f0, f0
    stfd f2, 0x80(r1)
    lwz r7, 0x7c(r1)
    stfd f1, 0x88(r1)
    lwz r6, 0x84(r1)
    stfd f0, 0x90(r1)
    lwz r5, 0x8c(r1)
    lwz r0, 0x94(r1)
    stb r7, 0x8(r1)
    stb r6, 0x9(r1)
    stb r5, 0xa(r1)
    stb r0, 0xb(r1)
    lwz r0, 0x8(r1)
    stw r0, 0x10(r1)
    bl fn_80092954
    lbz r0, 0x10(r1)
    stb r0, 0x18(r3)
    lbz r0, 0x11(r1)
    stb r0, 0x19(r3)
    lbz r0, 0x12(r1)
    stb r0, 0x1a(r3)
    lbz r0, 0x13(r1)
    stb r0, 0x1b(r3)
    mr r3, r31
    bl fn_80149A30
    lwz r0, 0xb4(r1)
    psq_l f31, 0xa8(r1), 0, 0
    lfd f31, 0xa0(r1)
    lwz r31, 0x9c(r1)
    lwz r30, 0x98(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_80274268(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    li r6, 0x1
    stw r0, 0x74(r1)
    stfd f31, 0x60(r1)
    psq_st f31, 0x68(r1), 0, 0
    stw r31, 0x5c(r1)
    mr r31, r4
    stw r30, 0x58(r1)
    mr r30, r3
    stw r29, 0x54(r1)
    lwz r7, 0x7e0(r3)
    rlwinm r5, r7, 0, 12, 12
    subis r0, r5, 0x8
    cmplwi r0, 0x0
    beq lbl_fn_80274268_00001650
    rlwinm r5, r7, 0, 7, 7
    subis r0, r5, 0x100
    cmplwi r0, 0x0
    beq lbl_fn_80274268_00001650
    li r6, 0x0
lbl_fn_80274268_00001650:
    cmpwi r6, 0x0
    bne lbl_fn_80274268_00001774
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x11
    beq lbl_fn_80274268_00001774
    cmpwi r0, 0x6
    beq lbl_fn_80274268_00001684
    lis r5, lbl_807C7030@ha
    addi r5, r5, lbl_807C7030@l
    psq_l f1, 0x0(r5), 0, 0
    lfs f2, 0x8(r5)
    stfs f2, 0x18(r4)
    psq_st f1, 0x10(r4), 0, 0
lbl_fn_80274268_00001684:
    lwz r4, 0x8(r4)
    lbz r0, 0x1(r4)
    cmpwi r0, 0x1
    beq lbl_fn_80274268_00001758
    lfs f3, lbl_80883820
    li r29, 0x0
    lfs f0, lbl_80883830
    li r4, 0x79
    stfs f3, 0x8(r1)
    stfs f3, 0xc(r1)
    stfs f0, 0x10(r1)
    lfs f1, 0x538(r3)
    addi r3, r1, 0x20
    bl fn_805F8E70
    addi r4, r1, 0x8
    addi r3, r1, 0x20
    mr r5, r4
    bl fn_805F93C0
    lfs f3, 0x24(r31)
    addi r3, r1, 0x14
    lfs f0, 0x530(r30)
    addi r4, r1, 0x8
    lfs f5, 0x20(r31)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r30)
    lfs f3, 0x1c(r31)
    lfs f0, 0x528(r30)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x18(r1)
    stfs f0, 0x14(r1)
    stfs f6, 0x1c(r1)
    bl fn_805F9990
    lfs f3, 0x1514(r30)
    fmr f31, f1
    lfs f0, lbl_80883854
    fmuls f1, f3, f0
    bl fn_8068A850
    frsp f0, f1
    fcmpo cr0, f31, f0
    ble lbl_fn_80274268_0000172C
    li r29, 0x1
lbl_fn_80274268_0000172C:
    cmpwi r29, 0x0
    beq lbl_fn_80274268_00001774
    lis r3, lbl_807C7030@ha
    li r0, 0x1
    addi r3, r3, lbl_807C7030@l
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x8(r3)
    stfs f2, 0x18(r31)
    psq_st f1, 0x10(r31), 0, 0
    stw r0, 0x48(r31)
    b lbl_fn_80274268_00001774
lbl_fn_80274268_00001758:
    lwz r4, 0x1534(r3)
    addi r0, r4, 0x1
    stw r0, 0x1534(r3)
    cmpwi r0, 0x2
    blt lbl_fn_80274268_00001774
    li r0, 0x1
    stw r0, 0x1530(r3)
lbl_fn_80274268_00001774:
    lwz r0, 0x58c(r30)
    cmpwi r0, 0x12
    bne lbl_fn_80274268_000017A8
    lfs f4, 0x10(r31)
    lfs f5, lbl_80883820
    lfs f3, 0x14(r31)
    lfs f0, 0x18(r31)
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    fmuls f0, f0, f5
    stfs f4, 0x10(r31)
    stfs f3, 0x14(r31)
    stfs f0, 0x18(r31)
lbl_fn_80274268_000017A8:
    addi r3, r31, 0x10
    bl fn_805F9920
    fabs f3, f1
    lfs f0, lbl_80883838
    frsp f3, f3
    fcmpo cr0, f3, f0
    blt lbl_fn_80274268_00001808
    lfs f0, lbl_80883858
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_80274268_00001808
    addi r3, r31, 0x10
    mr r4, r3
    bl fn_805F98D0
    lfs f4, 0x10(r31)
    lfs f5, lbl_8088385C
    lfs f3, 0x14(r31)
    lfs f0, 0x18(r31)
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    fmuls f0, f0, f5
    stfs f4, 0x10(r31)
    stfs f3, 0x14(r31)
    stfs f0, 0x18(r31)
lbl_fn_80274268_00001808:
    mr r3, r30
    mr r4, r31
    bl fn_80151448
    lwz r12, 0x0(r30)
    mr r3, r30
    mr r4, r31
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r0, 0x74(r1)
    psq_l f31, 0x68(r1), 0, 0
    lfd f31, 0x60(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_802744BC(void)
{
    nofralloc
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_802744BC_00001870
    lwz r12, 0x0(r3)
    lwz r12, 0x164(r12)
    mtctr r12
    bctr
lbl_fn_802744BC_00001870:
    lwz r4, 0x8(r4)
    cmpwi r4, 0x0
    beqlr
    lwz r0, 0x4(r4)
    cmpwi r0, 0x1791
    bnelr
    lwz r12, 0x0(r3)
    lwz r12, 0x16c(r12)
    mtctr r12
    bctr
    blr
}

asm void fn_80274508(void)
{
    nofralloc
    lwz r12, 0x0(r3)
    lwz r12, 0x168(r12)
    mtctr r12
    bctr
}

asm void fn_80274518(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    lwz r0, 0x624(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80274518_0000192C
    lfs f3, lbl_80883860
    addi r4, r1, 0x8
    lfs f0, 0x5b0(r3)
    lwz r5, 0x62c(r3)
    fmuls f0, f3, f0
    lfs f4, lbl_80883854
    stfs f0, 0x10(r5)
    lfs f6, 0x52c(r3)
    lfs f5, 0x5a8(r3)
    lfs f3, 0x528(r3)
    fadds f6, f6, f5
    lfs f0, 0x5a4(r3)
    lfs f5, 0x530(r3)
    fadds f3, f3, f0
    lfs f0, 0x5ac(r3)
    stfs f6, 0xc(r1)
    fadds f2, f5, f0
    lwz r5, 0x62c(r3)
    stfs f3, 0x8(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x4(r5), 0, 0
    stfs f2, 0xc(r5)
    lwz r3, 0x62c(r3)
    stfs f2, 0x10(r1)
    lfs f3, 0x10(r3)
    lfs f0, 0x8(r3)
    fmadds f0, f4, f3, f0
    stfs f0, 0x8(r3)
lbl_fn_80274518_0000192C:
    addi r1, r1, 0x20
    blr
}

asm void fn_802745A0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r5, 0x58c(r3)
    lwz r4, 0xd1c(r3)
    subi r0, r5, 0x9
    stw r4, 0xd20(r3)
    cmplwi r0, 0x2
    ble lbl_fn_802745A0_0000197C
    cmpwi r5, 0xf
    blt lbl_fn_802745A0_0000199C
    cmpwi r5, 0x10
    ble lbl_fn_802745A0_00001990
    b lbl_fn_802745A0_0000199C
lbl_fn_802745A0_0000197C:
    lwz r0, 0x18e8(r3)
    li r4, 0x0
    stw r4, 0x1454(r3)
    stw r0, 0x14d4(r3)
    b lbl_fn_802745A0_00001B40
lbl_fn_802745A0_00001990:
    li r0, 0x0
    stw r0, 0x1454(r3)
    b lbl_fn_802745A0_00001B40
lbl_fn_802745A0_0000199C:
    lwz r4, lbl_8087F8A0
    lwz r30, 0x48(r4)
    lwz r0, 0x12a4(r30)
    extrwi. r0, r0, 1, 3
    beq lbl_fn_802745A0_000019C0
    li r0, 0x0
    stw r0, 0x1454(r3)
    stw r30, 0x14d4(r3)
    b lbl_fn_802745A0_00001B40
lbl_fn_802745A0_000019C0:
    li r31, 0x0
    b lbl_fn_802745A0_00001B10
lbl_fn_802745A0_000019C8:
    lwz r0, 0x1530(r29)
    cmpwi r0, 0x0
    beq lbl_fn_802745A0_00001A70
    lwz r6, 0x38(r30)
    li r4, 0x0
    li r3, 0x0
    li r5, 0x0
    rlwinm r0, r6, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_802745A0_00001A00
    clrlwi r0, r6, 31
    cmplwi r0, 0x1
    beq lbl_fn_802745A0_00001A00
    li r5, 0x1
lbl_fn_802745A0_00001A00:
    cmpwi r5, 0x0
    beq lbl_fn_802745A0_00001A1C
    lwz r0, 0x7e0(r30)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_802745A0_00001A1C
    li r3, 0x1
lbl_fn_802745A0_00001A1C:
    cmpwi r3, 0x0
    beq lbl_fn_802745A0_00001A50
    lwz r0, 0x55c(r30)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_802745A0_00001A44
    lwz r0, 0x560(r30)
    cmpwi r0, 0x1c
    bne lbl_fn_802745A0_00001A44
    li r3, 0x1
lbl_fn_802745A0_00001A44:
    cmpwi r3, 0x0
    bne lbl_fn_802745A0_00001A50
    li r4, 0x1
lbl_fn_802745A0_00001A50:
    cmpwi r4, 0x0
    beq lbl_fn_802745A0_00001B0C
    addi r3, r30, 0x7d4
    bl fn_80134270
    cmpwi r3, 0x0
    beq lbl_fn_802745A0_00001B0C
    mr r31, r30
    b lbl_fn_802745A0_00001B18
lbl_fn_802745A0_00001A70:
    lwz r6, 0x38(r30)
    li r4, 0x0
    li r3, 0x0
    li r5, 0x0
    rlwinm r0, r6, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_802745A0_00001A9C
    clrlwi r0, r6, 31
    cmplwi r0, 0x1
    beq lbl_fn_802745A0_00001A9C
    li r5, 0x1
lbl_fn_802745A0_00001A9C:
    cmpwi r5, 0x0
    beq lbl_fn_802745A0_00001AB8
    lwz r0, 0x7e0(r30)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_802745A0_00001AB8
    li r3, 0x1
lbl_fn_802745A0_00001AB8:
    cmpwi r3, 0x0
    beq lbl_fn_802745A0_00001AEC
    lwz r0, 0x55c(r30)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_802745A0_00001AE0
    lwz r0, 0x560(r30)
    cmpwi r0, 0x1c
    bne lbl_fn_802745A0_00001AE0
    li r3, 0x1
lbl_fn_802745A0_00001AE0:
    cmpwi r3, 0x0
    bne lbl_fn_802745A0_00001AEC
    li r4, 0x1
lbl_fn_802745A0_00001AEC:
    cmpwi r4, 0x0
    beq lbl_fn_802745A0_00001B0C
    addi r3, r30, 0x7d4
    bl fn_80134290
    cmpwi r3, 0x0
    beq lbl_fn_802745A0_00001B0C
    mr r31, r30
    b lbl_fn_802745A0_00001B18
lbl_fn_802745A0_00001B0C:
    lwz r30, 0x14ac(r30)
lbl_fn_802745A0_00001B10:
    cmpwi r30, 0x0
    bne lbl_fn_802745A0_000019C8
lbl_fn_802745A0_00001B18:
    cmpwi r31, 0x0
    beq lbl_fn_802745A0_00001B30
    li r0, 0x0
    stw r0, 0x1454(r29)
    stw r31, 0x14d4(r29)
    b lbl_fn_802745A0_00001B40
lbl_fn_802745A0_00001B30:
    lwz r0, 0xd1c(r29)
    li r3, 0x1
    stw r3, 0x1454(r29)
    stw r0, 0x14d4(r29)
lbl_fn_802745A0_00001B40:
    lwz r0, 0x14d4(r29)
    stw r0, 0xd1c(r29)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
