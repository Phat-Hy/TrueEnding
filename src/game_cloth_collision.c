#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_15(void);
extern void _savegpr_15(void);
extern void dtor_80084684(void);
extern void fn_8005B3CC(void);
extern void fn_8005B5F8(void);
extern void fn_8005B6E8(void);
extern void fn_800844D8(void);
extern void fn_80092954(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800CB3A0(void);
extern void fn_800CB5C8(void);
extern void fn_800D246C(void);
extern void fn_800DC12C(void);
extern void fn_800F8548(void);
extern void fn_800F8C6C(void);
extern void fn_80108F38(void);
extern void fn_8013655C(void);
extern void fn_80145334(void);
extern void fn_80149A30(void);
extern void fn_8014C540(void);
extern void fn_80151448(void);
extern void fn_8016E970(void);
extern void fn_8017039C(void);
extern void fn_80170A20(void);
extern void fn_801781B0(void);
extern void fn_80219E6C(void);
extern void fn_80232B7C(void);
extern void fn_802375C4(void);
extern void fn_802376D0(void);
extern void fn_8023781C(void);
extern void fn_80237874(void);
extern void fn_80239DAC(void);
extern void fn_8023A8B4(void);
extern void fn_8027EB14(void);
extern void fn_8027F504(void);
extern void fn_8027F69C(void);
extern void fn_8027F8A8(void);
extern void fn_8027FA7C(void);
extern void fn_80280184(void);
extern void fn_802805C8(void);
extern void fn_80281924(void);
extern void fn_802826A0(void);
extern void fn_802829DC(void);
extern void fn_8035B78C(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473E8C(void);
extern void fn_80473F50(void);
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

/* External data declarations */
extern u8 jumptable_807854B0[];
extern u8 lbl_80744E78[];
extern u8 lbl_80744E80[];
extern u8 lbl_80744EFC[];
extern u8 lbl_80775A88[];
extern u8 lbl_807772B0[];
extern u8 lbl_807772D0[];
extern u8 lbl_807C7030[];
extern u8 lbl_807C8398[];

/* Small data declarations */
extern u32 lbl_8087D708;
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F8A0;
extern u32 lbl_80883948;
extern u32 lbl_8088394C;
extern u32 lbl_80883950;
extern u32 lbl_80883954;
extern u32 lbl_80883958;
extern u32 lbl_8088395C;
extern u32 lbl_80883960;
extern u32 lbl_80883964;
extern u32 lbl_80883968;
extern u32 lbl_8088396C;
extern u32 lbl_80883970;
extern u32 lbl_80883974;
extern u32 lbl_80883978;
extern u32 lbl_8088397C;
extern u32 lbl_80883980;
extern u32 lbl_80883984;
extern u32 lbl_80883988;
extern u32 lbl_8088398C;

/* Function declarations */
void fn_8027CD9C(void);
void fn_8027CF28(void);
void fn_8027D838(void);
void fn_8027E19C(void);
void fn_8027E410(void);
void fn_8027E678(void);

asm void fn_8027CD9C(void)
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
    beq lbl_fn_8027CD9C_0000016C
    li r4, -0x1
    addi r3, r3, 0x15a8
    bl fn_800CB3A0
    addic. r31, r29, 0x158c
    beq lbl_fn_8027CD9C_00000054
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_8027CD9C_00000054
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8027CD9C_00000054:
    addic. r31, r29, 0x1580
    beq lbl_fn_8027CD9C_00000074
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_8027CD9C_00000074
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8027CD9C_00000074:
    addic. r31, r29, 0x1574
    beq lbl_fn_8027CD9C_00000094
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_8027CD9C_00000094
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8027CD9C_00000094:
    addic. r31, r29, 0x1568
    beq lbl_fn_8027CD9C_000000B4
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_8027CD9C_000000B4
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8027CD9C_000000B4:
    addi r3, r29, 0x155c
    li r4, -0x1
    bl fn_802375C4
    addic. r31, r29, 0x1550
    beq lbl_fn_8027CD9C_000000E0
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_8027CD9C_000000E0
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8027CD9C_000000E0:
    addic. r4, r29, 0x14cc
    beq lbl_fn_8027CD9C_00000110
    beq lbl_fn_8027CD9C_00000110
    beq lbl_fn_8027CD9C_00000110
    beq lbl_fn_8027CD9C_00000110
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8027CD9C_00000110
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_8027CD9C_00000110:
    addic. r4, r29, 0x14c0
    beq lbl_fn_8027CD9C_00000140
    beq lbl_fn_8027CD9C_00000140
    beq lbl_fn_8027CD9C_00000140
    beq lbl_fn_8027CD9C_00000140
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8027CD9C_00000140
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_8027CD9C_00000140:
    addic. r3, r29, 0x14b0
    beq lbl_fn_8027CD9C_00000150
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8027CD9C_00000150:
    mr r3, r29
    li r4, 0x0
    bl fn_8035B78C
    cmpwi r30, 0x0
    ble lbl_fn_8027CD9C_0000016C
    mr r3, r29
    bl dtor_80084684
lbl_fn_8027CD9C_0000016C:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8027CF28(void)
{
    nofralloc
    stwu r1, -0x6d0(r1)
    mflr r0
    stw r0, 0x6d4(r1)
    addi r11, r1, 0x6d0
    bl _savegpr_15
    mr r27, r3
    bl fn_8013655C
    cmpwi r3, 0x0
    bne lbl_fn_8027CF28_00000A80
    lwz r3, 0x1438(r27)
    cmpwi r3, 0x0
    beq lbl_fn_8027CF28_000001CC
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_8027CF28_00000A80
lbl_fn_8027CF28_000001CC:
    addi r3, r27, 0x1550
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_8027CF28_00000A80
    addi r3, r27, 0x155c
    bl fn_802376D0
    cmpwi r3, 0x0
    bne lbl_fn_8027CF28_00000A80
    addi r3, r27, 0x1568
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_8027CF28_00000A80
    addi r3, r27, 0x1574
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_8027CF28_00000A80
    addi r3, r27, 0x1580
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_8027CF28_00000A80
    addi r3, r27, 0x158c
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_8027CF28_00000A80
    addi r3, r27, 0x14b0
    bl fn_80473F50
    cmpwi r3, 0x0
    bne lbl_fn_8027CF28_00000A80
    addi r3, r27, 0x14b0
    bl fn_80470580
    cmpwi r3, 0x0
    beq lbl_fn_8027CF28_00000A2C
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_8027CF28_00000A2C
    lwz r0, 0x10d8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8027CF28_00000A2C
    addi r3, r27, 0x14b0
    bl fn_8047059C
    mr r16, r3
    addi r3, r27, 0x14b0
    bl fn_80470580
    lis r4, lbl_807772D0@ha
    li r30, 0x0
    addi r4, r4, lbl_807772D0@l
    stw r4, 0x48(r1)
    mr r15, r3
    addi r3, r1, 0x58
    stw r30, 0x4c(r1)
    li r4, 0x0
    li r5, 0x400
    stw r30, 0x50(r1)
    stw r30, 0x54(r1)
    stw r30, 0x678(r1)
    bl memset
    addi r3, r1, 0x658
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x48(r1)
    mr r4, r15
    mr r5, r16
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
    lis r4, lbl_80744EFC@ha
    addi r29, r1, 0x34
    addi r28, r1, 0x20
    addi r19, r4, lbl_80744EFC@l
    addi r20, r3, __files@l
    lis r22, 0xcccd
    lis r18, 0x4000
    lis r21, 0x1555
    lis r23, 0x2aab
    lis r24, lbl_80775A88@ha
    li r31, 0x1
lbl_fn_8027CF28_00000320:
    addi r3, r1, 0x48
    bl fn_8005B3CC
    mr r15, r3
    addi r4, r19, 0xb9
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8027CF28_0000037C
    addi r3, r1, 0x48
    bl fn_8005B3CC
    mr r15, r3
    addi r4, r19, 0xc5
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8027CF28_00000360
    stw r30, 0x14e4(r27)
    b lbl_fn_8027CF28_00000A1C
lbl_fn_8027CF28_00000360:
    mr r3, r15
    addi r4, r19, 0xc9
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8027CF28_00000A1C
    stw r31, 0x14e4(r27)
    b lbl_fn_8027CF28_00000A1C
lbl_fn_8027CF28_0000037C:
    mr r3, r15
    addi r4, r19, 0xcd
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8027CF28_000003A4
    addi r3, r1, 0x48
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x14b8(r27)
    b lbl_fn_8027CF28_00000A1C
lbl_fn_8027CF28_000003A4:
    mr r3, r15
    addi r4, r19, 0xde
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8027CF28_000003CC
    addi r3, r1, 0x48
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x1534(r27)
    b lbl_fn_8027CF28_00000A1C
lbl_fn_8027CF28_000003CC:
    mr r3, r15
    addi r4, r19, 0xef
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8027CF28_000003F4
    addi r3, r1, 0x48
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x14bc(r27)
    b lbl_fn_8027CF28_00000A1C
lbl_fn_8027CF28_000003F4:
    mr r3, r15
    addi r4, r19, 0xfc
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8027CF28_00000420
    addi r3, r1, 0x48
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x1508(r27)
    b lbl_fn_8027CF28_00000A1C
lbl_fn_8027CF28_00000420:
    mr r3, r15
    addi r4, r19, 0x108
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8027CF28_0000044C
    addi r3, r1, 0x48
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x150c(r27)
    b lbl_fn_8027CF28_00000A1C
lbl_fn_8027CF28_0000044C:
    mr r3, r15
    addi r4, r19, 0x11a
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8027CF28_00000478
    addi r3, r1, 0x48
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x1510(r27)
    b lbl_fn_8027CF28_00000A1C
lbl_fn_8027CF28_00000478:
    mr r3, r15
    addi r4, r19, 0x128
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8027CF28_000004A4
    addi r3, r1, 0x48
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x1514(r27)
    b lbl_fn_8027CF28_00000A1C
lbl_fn_8027CF28_000004A4:
    mr r3, r15
    addi r4, r19, 0x134
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8027CF28_000004D0
    addi r3, r1, 0x48
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x1518(r27)
    b lbl_fn_8027CF28_00000A1C
lbl_fn_8027CF28_000004D0:
    mr r3, r15
    addi r4, r19, 0x142
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8027CF28_00000778
lbl_fn_8027CF28_000004E4:
    addi r3, r1, 0x48
    bl fn_8005B3CC
    bl fn_800DC12C
    lwz r4, lbl_8087F430
    mr r26, r3
    li r5, 0x0
    li r6, 0x0
    lwz r4, 0x10d8(r4)
    lwz r0, 0x78(r4)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8027CF28_0000053C
lbl_fn_8027CF28_00000514:
    lwz r7, 0x7c(r4)
    lwzx r0, r7, r6
    cmpw r3, r0
    bne lbl_fn_8027CF28_00000530
    mulli r0, r5, 0x28
    add r17, r7, r0
    b lbl_fn_8027CF28_00000540
lbl_fn_8027CF28_00000530:
    addi r6, r6, 0x28
    addi r5, r5, 0x1
    bdnz lbl_fn_8027CF28_00000514
lbl_fn_8027CF28_0000053C:
    li r17, 0x0
lbl_fn_8027CF28_00000540:
    cmpwi r17, 0x0
    beq lbl_fn_8027CF28_0000076C
    lwz r4, 0x14c4(r27)
    lwz r3, 0x14c8(r27)
    cmplw r4, r3
    bge lbl_fn_8027CF28_00000574
    addi r4, r4, 0x1
    lwz r3, 0x14c0(r27)
    slwi r0, r4, 2
    stw r4, 0x14c4(r27)
    add r3, r3, r0
    stw r17, -0x4(r3)
    b lbl_fn_8027CF28_0000076C
lbl_fn_8027CF28_00000574:
    subi r0, r18, 0x1
    subf r0, r3, r0
    cmplwi r0, 0x1
    bge lbl_fn_8027CF28_00000598
    addi r4, r19, 0x14f
    addi r3, r20, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8027CF28_00000598:
    lwz r3, 0x14c4(r27)
    addi r4, r27, 0x14c8
    lwz r25, 0x14c8(r27)
    subi r0, r18, 0x1
    addi r3, r3, 0x1
    stw r30, 0x34(r1)
    subf r3, r25, r3
    subf r0, r25, r0
    cmplw r3, r0
    stw r30, 0x38(r1)
    stw r30, 0x3c(r1)
    stw r4, 0x40(r1)
    stw r30, 0x44(r1)
    stw r3, 0x14(r1)
    ble lbl_fn_8027CF28_000005E8
    addi r4, r19, 0x14f
    addi r3, r20, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8027CF28_000005E8:
    addi r0, r21, 0x5555
    cmplw r25, r0
    bge lbl_fn_8027CF28_00000630
    addi r4, r25, 0x1
    subi r5, r22, 0x3333
    slwi r3, r4, 2
    lwz r0, 0x14(r1)
    subf r4, r4, r3
    mulhwu r4, r5, r4
    addi r3, r1, 0x1c
    srwi r4, r4, 2
    stw r4, 0x1c(r1)
    cmplw r4, r0
    bge lbl_fn_8027CF28_00000624
    addi r3, r1, 0x14
lbl_fn_8027CF28_00000624:
    lwz r0, 0x0(r3)
    add r16, r25, r0
    b lbl_fn_8027CF28_0000066C
lbl_fn_8027CF28_00000630:
    subi r0, r23, 0x5556
    cmplw r25, r0
    bge lbl_fn_8027CF28_00000668
    addi r3, r25, 0x1
    lwz r0, 0x14(r1)
    srwi r3, r3, 1
    stw r3, 0x18(r1)
    cmplw r3, r0
    addi r3, r1, 0x18
    bge lbl_fn_8027CF28_0000065C
    addi r3, r1, 0x14
lbl_fn_8027CF28_0000065C:
    lwz r0, 0x0(r3)
    add r16, r25, r0
    b lbl_fn_8027CF28_0000066C
lbl_fn_8027CF28_00000668:
    subi r16, r18, 0x1
lbl_fn_8027CF28_0000066C:
    subi r0, r18, 0x1
    cmplw r16, r0
    ble lbl_fn_8027CF28_0000068C
    addi r4, r19, 0x14f
    addi r3, r20, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8027CF28_0000068C:
    slwi r3, r16, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r25, r3
    bne lbl_fn_8027CF28_000006B4
    addi r3, r20, 0xa0
    addi r4, r24, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8027CF28_000006B4:
    lwz r0, 0x14c4(r27)
    lwz r3, 0x38(r1)
    slwi r6, r0, 2
    stw r16, 0x3c(r1)
    addi r4, r3, 0x1
    slwi r5, r3, 2
    add r3, r25, r6
    stw r4, 0x38(r1)
    stwx r17, r5, r3
    lwz r3, 0x14c4(r27)
    lwz r16, 0x14c0(r27)
    slwi r3, r3, 2
    add r3, r16, r3
    mr r4, r16
    subf r3, r16, r3
    srawi r3, r3, 2
    addze r17, r3
    subf r0, r17, r0
    stw r0, 0x44(r1)
    slwi r15, r17, 2
    slwi r0, r0, 2
    mr r5, r15
    add r3, r25, r0
    bl memcpy
    mr r3, r16
    mr r5, r15
    li r4, 0x0
    bl memset
    lwz r0, 0x38(r1)
    cmpwi r29, 0x0
    lwz r3, 0x14c0(r27)
    add r5, r0, r17
    mr r0, r25
    lwz r6, 0x14c8(r27)
    lwz r4, 0x3c(r1)
    stw r4, 0x14c8(r27)
    stw r6, 0x3c(r1)
    stw r0, 0x14c0(r27)
    stw r3, 0x34(r1)
    stw r5, 0x14c4(r27)
    stw r30, 0x38(r1)
    beq lbl_fn_8027CF28_0000076C
    cmpwi r3, 0x0
    beq lbl_fn_8027CF28_0000076C
    stw r30, 0x38(r1)
    bl dtor_80084684
lbl_fn_8027CF28_0000076C:
    cmpwi r26, 0x0
    bne lbl_fn_8027CF28_000004E4
    b lbl_fn_8027CF28_00000A1C
lbl_fn_8027CF28_00000778:
    mr r3, r15
    addi r4, r19, 0x163
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8027CF28_00000A1C
lbl_fn_8027CF28_0000078C:
    addi r3, r1, 0x48
    bl fn_8005B3CC
    bl fn_800DC12C
    lwz r4, lbl_8087F430
    mr r25, r3
    li r5, 0x0
    li r6, 0x0
    lwz r4, 0x10d8(r4)
    lwz r0, 0x78(r4)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8027CF28_000007E4
lbl_fn_8027CF28_000007BC:
    lwz r7, 0x7c(r4)
    lwzx r0, r7, r6
    cmpw r3, r0
    bne lbl_fn_8027CF28_000007D8
    mulli r0, r5, 0x28
    add r16, r7, r0
    b lbl_fn_8027CF28_000007E8
lbl_fn_8027CF28_000007D8:
    addi r6, r6, 0x28
    addi r5, r5, 0x1
    bdnz lbl_fn_8027CF28_000007BC
lbl_fn_8027CF28_000007E4:
    li r16, 0x0
lbl_fn_8027CF28_000007E8:
    cmpwi r16, 0x0
    beq lbl_fn_8027CF28_00000A14
    lwz r4, 0x14d0(r27)
    lwz r3, 0x14d4(r27)
    cmplw r4, r3
    bge lbl_fn_8027CF28_0000081C
    addi r4, r4, 0x1
    lwz r3, 0x14cc(r27)
    slwi r0, r4, 2
    stw r4, 0x14d0(r27)
    add r3, r3, r0
    stw r16, -0x4(r3)
    b lbl_fn_8027CF28_00000A14
lbl_fn_8027CF28_0000081C:
    subi r0, r18, 0x1
    subf r0, r3, r0
    cmplwi r0, 0x1
    bge lbl_fn_8027CF28_00000840
    addi r4, r19, 0x14f
    addi r3, r20, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8027CF28_00000840:
    lwz r3, 0x14d0(r27)
    addi r4, r27, 0x14d4
    lwz r26, 0x14d4(r27)
    subi r0, r18, 0x1
    addi r3, r3, 0x1
    stw r30, 0x20(r1)
    subf r3, r26, r3
    subf r0, r26, r0
    cmplw r3, r0
    stw r30, 0x24(r1)
    stw r30, 0x28(r1)
    stw r4, 0x2c(r1)
    stw r30, 0x30(r1)
    stw r3, 0x8(r1)
    ble lbl_fn_8027CF28_00000890
    addi r4, r19, 0x14f
    addi r3, r20, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8027CF28_00000890:
    addi r0, r21, 0x5555
    cmplw r26, r0
    bge lbl_fn_8027CF28_000008D8
    addi r4, r26, 0x1
    subi r5, r22, 0x3333
    slwi r3, r4, 2
    lwz r0, 0x8(r1)
    subf r4, r4, r3
    mulhwu r4, r5, r4
    addi r3, r1, 0x10
    srwi r4, r4, 2
    stw r4, 0x10(r1)
    cmplw r4, r0
    bge lbl_fn_8027CF28_000008CC
    addi r3, r1, 0x8
lbl_fn_8027CF28_000008CC:
    lwz r0, 0x0(r3)
    add r26, r26, r0
    b lbl_fn_8027CF28_00000914
lbl_fn_8027CF28_000008D8:
    subi r0, r23, 0x5556
    cmplw r26, r0
    bge lbl_fn_8027CF28_00000910
    addi r3, r26, 0x1
    lwz r0, 0x8(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_8027CF28_00000904
    addi r3, r1, 0x8
lbl_fn_8027CF28_00000904:
    lwz r0, 0x0(r3)
    add r26, r26, r0
    b lbl_fn_8027CF28_00000914
lbl_fn_8027CF28_00000910:
    subi r26, r18, 0x1
lbl_fn_8027CF28_00000914:
    subi r0, r18, 0x1
    cmplw r26, r0
    ble lbl_fn_8027CF28_00000934
    addi r4, r19, 0x14f
    addi r3, r20, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8027CF28_00000934:
    slwi r3, r26, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r17, r3
    bne lbl_fn_8027CF28_0000095C
    addi r3, r20, 0xa0
    addi r4, r24, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8027CF28_0000095C:
    lwz r0, 0x14d0(r27)
    lwz r3, 0x24(r1)
    slwi r6, r0, 2
    stw r26, 0x28(r1)
    addi r4, r3, 0x1
    slwi r5, r3, 2
    add r3, r17, r6
    stw r4, 0x24(r1)
    stwx r16, r5, r3
    lwz r3, 0x14d0(r27)
    lwz r15, 0x14cc(r27)
    slwi r3, r3, 2
    add r3, r15, r3
    mr r4, r15
    subf r3, r15, r3
    srawi r3, r3, 2
    addze r16, r3
    subf r0, r16, r0
    stw r0, 0x30(r1)
    slwi r26, r16, 2
    slwi r0, r0, 2
    mr r5, r26
    add r3, r17, r0
    bl memcpy
    mr r3, r15
    mr r5, r26
    li r4, 0x0
    bl memset
    lwz r0, 0x24(r1)
    cmpwi r28, 0x0
    lwz r3, 0x14cc(r27)
    add r5, r0, r16
    mr r0, r17
    lwz r6, 0x14d4(r27)
    lwz r4, 0x28(r1)
    stw r4, 0x14d4(r27)
    stw r6, 0x28(r1)
    stw r0, 0x14cc(r27)
    stw r3, 0x20(r1)
    stw r5, 0x14d0(r27)
    stw r30, 0x24(r1)
    beq lbl_fn_8027CF28_00000A14
    cmpwi r3, 0x0
    beq lbl_fn_8027CF28_00000A14
    stw r30, 0x24(r1)
    bl dtor_80084684
lbl_fn_8027CF28_00000A14:
    cmpwi r25, 0x0
    bne lbl_fn_8027CF28_0000078C
lbl_fn_8027CF28_00000A1C:
    addi r3, r1, 0x48
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_8027CF28_00000320
lbl_fn_8027CF28_00000A2C:
    lwz r0, 0x7ec(r27)
    lwz r3, 0x1438(r27)
    ori r0, r0, 0x1c0
    lfs f1, 0x5b0(r27)
    oris r0, r0, 0x1
    lfs f0, lbl_80883950
    ori r0, r0, 0xc219
    cmpwi r3, 0x0
    oris r0, r0, 0x380
    stw r0, 0x7ec(r27)
    stfs f1, 0x14e0(r27)
    stfs f0, 0x5b0(r27)
    beq lbl_fn_8027CF28_00000A78
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x1438(r27)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_8027CF28_00000A78:
    li r3, 0x1
    b lbl_fn_8027CF28_00000A84
lbl_fn_8027CF28_00000A80:
    li r3, 0x0
lbl_fn_8027CF28_00000A84:
    addi r11, r1, 0x6d0
    bl _restgpr_15
    lwz r0, 0x6d4(r1)
    mtlr r0
    addi r1, r1, 0x6d0
    blr
}

asm void fn_8027D838(void)
{
    nofralloc
    stwu r1, -0xe0(r1)
    mflr r0
    stw r0, 0xe4(r1)
    stfd f31, 0xd0(r1)
    psq_st f31, 0xd8(r1), 0, 0
    stw r31, 0xcc(r1)
    mr r31, r3
    stw r30, 0xc8(r1)
    stw r29, 0xc4(r1)
    lwz r0, 0x58c(r3)
    lwz r4, 0xd1c(r3)
    cmpwi r0, 0x6
    stw r4, 0xd20(r3)
    beq lbl_fn_8027D838_00000ADC
    cmpwi r0, 0x9
    bne lbl_fn_8027D838_00000AE8
lbl_fn_8027D838_00000ADC:
    li r0, 0x0
    stw r0, 0x1454(r3)
    b lbl_fn_8027D838_00000BFC
lbl_fn_8027D838_00000AE8:
    lwz r0, 0x14e4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8027D838_00000BF0
    li r0, 0x0
    stw r0, 0x1454(r3)
    lfs f31, lbl_80883954
    li r30, 0x0
    lwz r3, lbl_8087F8A0
    lwz r29, 0x48(r3)
    b lbl_fn_8027D838_00000BE0
lbl_fn_8027D838_00000B10:
    lwz r6, 0x38(r29)
    li r4, 0x0
    li r3, 0x0
    li r5, 0x0
    rlwinm r0, r6, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_8027D838_00000B3C
    clrlwi r0, r6, 31
    cmplwi r0, 0x1
    beq lbl_fn_8027D838_00000B3C
    li r5, 0x1
lbl_fn_8027D838_00000B3C:
    cmpwi r5, 0x0
    beq lbl_fn_8027D838_00000B58
    lwz r0, 0x7e0(r29)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_8027D838_00000B58
    li r3, 0x1
lbl_fn_8027D838_00000B58:
    cmpwi r3, 0x0
    beq lbl_fn_8027D838_00000B8C
    lwz r0, 0x55c(r29)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_8027D838_00000B80
    lwz r0, 0x560(r29)
    cmpwi r0, 0x1c
    bne lbl_fn_8027D838_00000B80
    li r3, 0x1
lbl_fn_8027D838_00000B80:
    cmpwi r3, 0x0
    bne lbl_fn_8027D838_00000B8C
    li r4, 0x1
lbl_fn_8027D838_00000B8C:
    cmpwi r4, 0x0
    beq lbl_fn_8027D838_00000BDC
    lfs f3, 0x530(r29)
    addi r3, r1, 0x50
    lfs f0, 0x530(r31)
    lfs f5, 0x52c(r29)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r31)
    lfs f3, 0x528(r29)
    lfs f0, 0x528(r31)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x54(r1)
    stfs f0, 0x50(r1)
    stfs f6, 0x58(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f31
    bge lbl_fn_8027D838_00000BDC
    fmr f31, f1
    mr r30, r29
lbl_fn_8027D838_00000BDC:
    lwz r29, 0x14ac(r29)
lbl_fn_8027D838_00000BE0:
    cmpwi r29, 0x0
    bne lbl_fn_8027D838_00000B10
    stw r30, 0x14ec(r31)
    b lbl_fn_8027D838_00000BFC
lbl_fn_8027D838_00000BF0:
    li r0, 0x1
    stw r0, 0x1454(r3)
    stw r4, 0x14ec(r3)
lbl_fn_8027D838_00000BFC:
    lwz r0, 0xd18(r31)
    lwz r3, 0x14d8(r31)
    lwz r4, 0x14ec(r31)
    cmpwi r0, 0x0
    addi r0, r3, 0x1
    stw r4, 0xd1c(r31)
    stw r0, 0x14d8(r31)
    beq lbl_fn_8027D838_00000C24
    cmpwi r4, 0x0
    bne lbl_fn_8027D838_00000C34
lbl_fn_8027D838_00000C24:
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    b lbl_fn_8027D838_00001260
lbl_fn_8027D838_00000C34:
    lwz r0, 0x154c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8027D838_00000CB8
    li r0, 0x0
    stw r0, 0x154c(r31)
    mr r3, r31
    li r4, 0x3e8
    bl fn_80232B7C
    lfs f0, lbl_80883948
    li r11, -0x1
    lfs f1, lbl_8088394C
    li r0, 0x1
    stfs f0, 0x34(r1)
    addi r4, r31, 0x1550
    lwz r3, lbl_8087F3C0
    addi r5, r31, 0xb0
    stfs f0, 0x38(r1)
    addi r7, r1, 0x28
    addi r8, r1, 0x34
    addi r9, r1, 0x40
    stfs f0, 0x3c(r1)
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x28(r1)
    stfs f0, 0x2c(r1)
    stfs f0, 0x30(r1)
    stfs f1, 0x40(r1)
    stfs f1, 0x44(r1)
    stfs f1, 0x48(r1)
    stfs f1, 0x4c(r1)
    stw r11, 0x8(r1)
    stw r0, 0xc(r1)
    bl fn_8023A8B4
lbl_fn_8027D838_00000CB8:
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x2
    bne lbl_fn_8027D838_00000CD0
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
lbl_fn_8027D838_00000CD0:
    lwz r0, 0x58c(r31)
    cmplwi r0, 0xc
    bgt lbl_fn_8027D838_000011BC
    lis r3, jumptable_807854B0@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_807854B0@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lfs f31, 0x2e4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_8027D838_00000D5C
    li r30, 0x0
    stw r30, 0x14d8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r3, r31
    li r4, 0x3
    stw r30, 0x58c(r31)
    bl fn_8016E970
    addi r3, r31, 0x15a8
    li r4, 0xf
    li r5, 0x0
    bl fn_800CB5C8
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0xc8
    li r6, 0x0
    bl fn_80239DAC
    b lbl_fn_8027D838_00001260
lbl_fn_8027D838_00000D5C:
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_80883958
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_8027D838_00001260
    lfs f0, lbl_8088395C
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_8027D838_00001260
    lwz r8, 0x590(r31)
    mr r6, r31
    lwz r7, 0x1508(r31)
    li r4, 0x0
    lwz r3, lbl_8087F048
    li r5, 0x0
    lfs f1, lbl_80883948
    li r9, 0x1e
    li r10, -0x1
    bl fn_800F8C6C
    b lbl_fn_8027D838_00001260
    lfs f31, 0x2e4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_8027D838_00000E14
    li r30, 0x0
    stw r30, 0x14d8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r3, r31
    li r4, 0x3
    stw r30, 0x58c(r31)
    bl fn_8016E970
    addi r3, r31, 0x15a8
    li r4, 0xf
    li r5, 0x0
    bl fn_800CB5C8
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0xc8
    li r6, 0x0
    bl fn_80239DAC
    b lbl_fn_8027D838_00001260
lbl_fn_8027D838_00000E14:
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_80883960
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_8027D838_00001260
    lfs f0, lbl_80883964
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_8027D838_00001260
    lwz r8, 0x590(r31)
    mr r6, r31
    lwz r7, 0x150c(r31)
    li r4, 0x0
    lwz r3, lbl_8087F048
    li r5, 0x0
    lfs f1, lbl_80883948
    li r9, 0x1e
    li r10, -0x1
    bl fn_800F8C6C
    b lbl_fn_8027D838_00001260
    lfs f31, 0x2e4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_8027D838_00000ECC
    li r30, 0x0
    stw r30, 0x14d8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r3, r31
    li r4, 0x3
    stw r30, 0x58c(r31)
    bl fn_8016E970
    addi r3, r31, 0x15a8
    li r4, 0xf
    li r5, 0x0
    bl fn_800CB5C8
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0xc8
    li r6, 0x0
    bl fn_80239DAC
    b lbl_fn_8027D838_00001260
lbl_fn_8027D838_00000ECC:
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_80883968
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_8027D838_00001260
    lfs f0, lbl_80883958
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_8027D838_00001260
    lwz r8, 0x590(r31)
    mr r6, r31
    lwz r7, 0x1510(r31)
    li r4, 0x0
    lwz r3, lbl_8087F048
    li r5, 0x0
    lfs f1, lbl_80883948
    li r9, 0x1e
    li r10, -0x1
    bl fn_800F8C6C
    b lbl_fn_8027D838_00001260
    mr r3, r31
    bl fn_8027F8A8
    b lbl_fn_8027D838_00001260
    mr r3, r31
    bl fn_8027FA7C
    b lbl_fn_8027D838_00001260
    lwz r3, lbl_8087F430
    li r4, 0x0
    lwz r5, 0x1504(r31)
    li r7, 0x0
    lwz r6, 0x10d8(r3)
    lwz r0, 0x78(r6)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8027D838_00000F80
lbl_fn_8027D838_00000F58:
    lwz r3, 0x7c(r6)
    lwzx r0, r3, r7
    cmpw r5, r0
    bne lbl_fn_8027D838_00000F74
    mulli r0, r4, 0x28
    add r4, r3, r0
    b lbl_fn_8027D838_00000F84
lbl_fn_8027D838_00000F74:
    addi r7, r7, 0x28
    addi r4, r4, 0x1
    bdnz lbl_fn_8027D838_00000F58
lbl_fn_8027D838_00000F80:
    li r4, 0x0
lbl_fn_8027D838_00000F84:
    lfs f5, 0x530(r31)
    addi r3, r1, 0x1c
    lfs f0, 0xc(r4)
    lfs f4, 0x528(r31)
    lfs f3, 0x4(r4)
    fsubs f5, f5, f0
    lfs f0, lbl_80883948
    fsubs f3, f4, f3
    stfs f5, 0x24(r1)
    stfs f3, 0x1c(r1)
    stfs f0, 0x20(r1)
    bl fn_805F9920
    lfs f0, lbl_8088396C
    fcmpo cr0, f1, f0
    bge lbl_fn_8027D838_00000FD8
    li r0, 0x0
    stw r0, 0x151c(r31)
    lwz r4, 0x14ec(r31)
    mr r3, r31
    bl fn_80281924
    b lbl_fn_8027D838_00001260
lbl_fn_8027D838_00000FD8:
    mr r3, r31
    bl fn_8027EB14
    b lbl_fn_8027D838_00001260
    lwz r3, lbl_8087F430
    li r4, 0x0
    lwz r5, 0x1504(r31)
    li r7, 0x0
    lwz r6, 0x10d8(r3)
    lwz r0, 0x78(r6)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8027D838_00001030
lbl_fn_8027D838_00001008:
    lwz r3, 0x7c(r6)
    lwzx r0, r3, r7
    cmpw r5, r0
    bne lbl_fn_8027D838_00001024
    mulli r0, r4, 0x28
    add r4, r3, r0
    b lbl_fn_8027D838_00001034
lbl_fn_8027D838_00001024:
    addi r7, r7, 0x28
    addi r4, r4, 0x1
    bdnz lbl_fn_8027D838_00001008
lbl_fn_8027D838_00001030:
    li r4, 0x0
lbl_fn_8027D838_00001034:
    lfs f5, 0x530(r31)
    addi r3, r1, 0x10
    lfs f0, 0xc(r4)
    lfs f4, 0x528(r31)
    lfs f3, 0x4(r4)
    fsubs f5, f5, f0
    lfs f0, lbl_80883948
    fsubs f3, f4, f3
    stfs f5, 0x18(r1)
    stfs f3, 0x10(r1)
    stfs f0, 0x14(r1)
    bl fn_805F9920
    lfs f0, lbl_8088396C
    fcmpo cr0, f1, f0
    bge lbl_fn_8027D838_000010C0
    lwz r0, 0x14f0(r31)
    cmpwi r0, 0x2
    bge lbl_fn_8027D838_000010A8
    slwi r0, r0, 2
    mr r3, r31
    add r4, r31, r0
    li r5, 0x2
    lwz r4, 0x14f4(r4)
    stw r4, 0x1504(r31)
    bl fn_8017039C
    lwz r3, 0x14f0(r31)
    addi r0, r3, 0x1
    stw r0, 0x14f0(r31)
    b lbl_fn_8027D838_00001260
lbl_fn_8027D838_000010A8:
    li r0, 0x0
    stw r0, 0x151c(r31)
    lwz r4, 0x14ec(r31)
    mr r3, r31
    bl fn_80281924
    b lbl_fn_8027D838_00001260
lbl_fn_8027D838_000010C0:
    mr r3, r31
    bl fn_8027EB14
    b lbl_fn_8027D838_00001260
    mr r3, r31
    bl fn_80280184
    b lbl_fn_8027D838_00001260
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0xec(r12)
    mtctr r12
    bctrl
    b lbl_fn_8027D838_00001260
    mr r3, r31
    bl fn_802805C8
    b lbl_fn_8027D838_00001260
    lfs f31, 0x2e4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_8027D838_00001260
    li r30, 0x0
    stw r30, 0x14d8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r3, r31
    li r4, 0x3
    stw r30, 0x58c(r31)
    bl fn_8016E970
    addi r3, r31, 0x15a8
    li r4, 0xf
    li r5, 0x0
    bl fn_800CB5C8
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0xc8
    li r6, 0x0
    bl fn_80239DAC
    b lbl_fn_8027D838_00001260
    lwz r0, 0x14d8(r31)
    cmpwi r0, 0x1c2
    blt lbl_fn_8027D838_00001260
    li r30, 0x0
    stw r30, 0x14d8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r3, r31
    li r4, 0x3
    stw r30, 0x58c(r31)
    bl fn_8016E970
    addi r3, r31, 0x15a8
    li r4, 0xf
    li r5, 0x0
    bl fn_800CB5C8
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0xc8
    li r6, 0x0
    bl fn_80239DAC
    b lbl_fn_8027D838_00001260
lbl_fn_8027D838_000011BC:
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x6
    beq lbl_fn_8027D838_000011D0
    mr r3, r31
    bl fn_8027F504
lbl_fn_8027D838_000011D0:
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8027D838_00001260
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x6
    beq lbl_fn_8027D838_00001258
    cmpwi r0, 0x7
    bne lbl_fn_8027D838_00001224
    lwz r4, 0x14ec(r31)
    lwz r0, 0x1054(r31)
    cmplw r4, r0
    beq lbl_fn_8027D838_00001258
    mr r3, r31
    li r5, 0x0
    bl fn_802826A0
    cmpwi r3, 0x0
    bne lbl_fn_8027D838_00001260
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    b lbl_fn_8027D838_00001258
lbl_fn_8027D838_00001224:
    lwz r4, 0x14ec(r31)
    mr r3, r31
    li r5, 0x0
    bl fn_802826A0
    cmpwi r3, 0x0
    bne lbl_fn_8027D838_00001260
    li r0, 0x3
    stw r0, 0x55c(r31)
    lwz r4, 0x14ec(r31)
    mr r3, r31
    lfs f1, lbl_80883970
    li r5, 0x0
    bl fn_80170A20
lbl_fn_8027D838_00001258:
    mr r3, r31
    bl fn_8027EB14
lbl_fn_8027D838_00001260:
    lfs f0, 0x14e0(r31)
    mr r3, r31
    stfs f0, 0x5b0(r31)
    bl fn_8014C540
    mr r3, r31
    bl fn_80145334
    addi r29, r1, 0x80
    psq_l f1, 0x528(r31), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    lwz r0, 0x58c(r31)
    lfs f3, 0x84(r1)
    lfs f0, lbl_80883974
    cmpwi r0, 0x5
    lfs f2, 0x530(r31)
    fsubs f0, f3, f0
    stfs f2, 0x88(r1)
    stfs f0, 0x84(r1)
    bne lbl_fn_8027D838_00001348
    lfs f3, lbl_80883948
    addi r3, r1, 0x90
    lfs f0, lbl_8088394C
    li r4, 0x79
    stfs f3, 0x5c(r1)
    stfs f3, 0x60(r1)
    stfs f0, 0x64(r1)
    lfs f1, 0x538(r31)
    bl fn_805F8E70
    addi r4, r1, 0x5c
    addi r3, r1, 0x90
    mr r5, r4
    bl fn_805F93C0
    lfs f5, lbl_80883964
    lfs f0, 0x60(r1)
    lfs f3, 0x5c(r1)
    fmuls f7, f0, f5
    lfs f0, 0x84(r1)
    fmuls f8, f3, f5
    lfs f3, 0x80(r1)
    lfs f6, 0x64(r1)
    fadds f0, f0, f7
    fadds f4, f3, f8
    lfs f3, 0x5b0(r31)
    stfs f0, 0x84(r1)
    fmuls f5, f6, f5
    lfs f0, 0x88(r1)
    stfs f4, 0x80(r1)
    fadds f2, f0, f5
    psq_l f1, 0x0(r29), 0, 0
    psq_st f1, 0x614(r31), 0, 0
    lfs f0, 0x618(r31)
    stfs f8, 0x74(r1)
    fadds f0, f0, f3
    stfs f7, 0x78(r1)
    stfs f5, 0x7c(r1)
    stfs f2, 0x88(r1)
    stfs f3, 0x620(r31)
    stfs f2, 0x61c(r31)
    stfs f0, 0x618(r31)
lbl_fn_8027D838_00001348:
    addi r3, r1, 0x80
    lfs f3, 0x5b0(r31)
    psq_l f1, 0x0(r3), 0, 0
    addi r4, r1, 0x68
    lfs f0, 0x52c(r31)
    psq_st f1, 0x0(r4), 0, 0
    fadds f0, f0, f3
    lwz r0, 0x58c(r31)
    lwz r3, 0x1548(r31)
    lfs f2, 0x88(r1)
    cmpwi r0, 0x6
    addi r3, r3, 0x1
    stfs f0, 0x6c(r1)
    psq_st f1, 0x5f4(r31), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0x70(r1)
    stfs f2, 0x5fc(r31)
    psq_st f1, 0x600(r31), 0, 0
    stfs f2, 0x608(r31)
    stfs f3, 0x60c(r31)
    stw r3, 0x1548(r31)
    bne lbl_fn_8027D838_000013A8
    addi r0, r3, 0x1
    stw r0, 0x1548(r31)
lbl_fn_8027D838_000013A8:
    lwz r0, 0x1548(r31)
    cmpwi r0, 0xa
    ble lbl_fn_8027D838_000013DC
    lwz r3, 0x58c(r31)
    subi r0, r3, 0x6
    cmplwi r0, 0x3
    ble lbl_fn_8027D838_000013CC
    cmpwi r3, 0x0
    bne lbl_fn_8027D838_000013DC
lbl_fn_8027D838_000013CC:
    mr r3, r31
    bl fn_8027F69C
    li r0, 0x0
    stw r0, 0x1548(r31)
lbl_fn_8027D838_000013DC:
    lwz r0, 0xe4(r1)
    psq_l f31, 0xd8(r1), 0, 0
    lfd f31, 0xd0(r1)
    lwz r31, 0xcc(r1)
    lwz r30, 0xc8(r1)
    lwz r29, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}

asm void fn_8027E19C(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    lfs f0, lbl_8088394C
    li r5, 0x1
    stw r0, 0xb4(r1)
    stfd f31, 0xa0(r1)
    psq_st f31, 0xa8(r1), 0, 0
    stw r31, 0x9c(r1)
    mr r31, r3
    stw r30, 0x98(r1)
    lwz r6, 0x7e0(r3)
    stfs f0, 0x48(r1)
    rlwinm r4, r6, 0, 12, 12
    subis r0, r4, 0x8
    stfs f0, 0x4c(r1)
    cmplwi r0, 0x0
    stfs f0, 0x50(r1)
    stfs f0, 0x54(r1)
    beq lbl_fn_8027E19C_00001460
    rlwinm r4, r6, 0, 7, 7
    subis r0, r4, 0x100
    cmplwi r0, 0x0
    beq lbl_fn_8027E19C_00001460
    li r5, 0x0
lbl_fn_8027E19C_00001460:
    cmpwi r5, 0x0
    beq lbl_fn_8027E19C_00001490
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
lbl_fn_8027E19C_00001490:
    lfs f1, 0x50(r1)
    lis r30, lbl_80744EFC@ha
    lfs f5, 0x15a0(r3)
    addi r30, r30, lbl_80744EFC@l
    lfs f2, 0x4c(r1)
    addi r4, r30, 0x16f
    fsubs f13, f1, f5
    lfs f4, 0x159c(r3)
    lfs f0, 0x54(r1)
    fsubs f12, f2, f4
    lfs f3, 0x15a4(r3)
    lfs f1, 0x48(r1)
    fsubs f31, f0, f3
    lfs f0, lbl_80883978
    lfs f2, 0x1598(r3)
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
    lfs f3, lbl_8088397C
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
    stfs f4, 0x1598(r3)
    stfs f5, 0x159c(r3)
    stfs f6, 0x15a0(r3)
    stfs f7, 0x15a4(r3)
    addi r3, r3, 0xb0
    stw r0, 0x14(r1)
    bl fn_80092954
    lbz r0, 0x14(r1)
    addi r4, r30, 0x17a
    stb r0, 0x18(r3)
    lbz r0, 0x15(r1)
    stb r0, 0x19(r3)
    lbz r0, 0x16(r1)
    stb r0, 0x1a(r3)
    lbz r0, 0x17(r1)
    stb r0, 0x1b(r3)
    addi r3, r31, 0xb0
    lfs f4, lbl_8088397C
    lfs f0, 0x1598(r31)
    lfs f2, 0x159c(r31)
    fmuls f3, f4, f0
    lfs f1, 0x15a0(r31)
    lfs f0, 0x15a4(r31)
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

asm void fn_8027E410(void)
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
    beq lbl_fn_8027E410_000016C8
    rlwinm r5, r7, 0, 7, 7
    subis r0, r5, 0x100
    cmplwi r0, 0x0
    beq lbl_fn_8027E410_000016C8
    li r6, 0x0
lbl_fn_8027E410_000016C8:
    cmpwi r6, 0x0
    bne lbl_fn_8027E410_00001800
    lwz r5, 0x58c(r3)
    cmpwi r5, 0xb
    beq lbl_fn_8027E410_00001800
    subi r0, r5, 0x4
    cmplwi r0, 0x1
    bgt lbl_fn_8027E410_00001700
    lis r5, lbl_807C7030@ha
    addi r5, r5, lbl_807C7030@l
    psq_l f1, 0x0(r5), 0, 0
    lfs f2, 0x8(r5)
    stfs f2, 0x18(r4)
    psq_st f1, 0x10(r4), 0, 0
lbl_fn_8027E410_00001700:
    lwz r4, 0x8(r4)
    lbz r0, 0x1(r4)
    cmpwi r0, 0x1
    beq lbl_fn_8027E410_00001800
    lfs f3, lbl_80883948
    li r29, 0x0
    lfs f0, lbl_8088394C
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
    lwz r3, 0x58c(r30)
    fmr f31, f1
    subi r0, r3, 0x4
    cmplwi r0, 0x1
    bgt lbl_fn_8027E410_000017BC
    lis r3, lbl_80744E78@ha
    lfd f1, lbl_80744E78@l(r3)
    bl fn_8068A850
    frsp f0, f1
    fneg f0, f0
    fcmpo cr0, f31, f0
    bge lbl_fn_8027E410_000017D8
    li r29, 0x1
    b lbl_fn_8027E410_000017D8
lbl_fn_8027E410_000017BC:
    lis r3, lbl_80744E78@ha
    lfd f1, lbl_80744E78@l(r3)
    bl fn_8068A850
    frsp f0, f1
    fcmpo cr0, f31, f0
    ble lbl_fn_8027E410_000017D8
    li r29, 0x1
lbl_fn_8027E410_000017D8:
    cmpwi r29, 0x0
    beq lbl_fn_8027E410_00001800
    lis r3, lbl_807C7030@ha
    li r0, 0x1
    addi r3, r3, lbl_807C7030@l
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x8(r3)
    stfs f2, 0x18(r31)
    psq_st f1, 0x10(r31), 0, 0
    stw r0, 0x48(r31)
lbl_fn_8027E410_00001800:
    lwz r0, 0x58c(r30)
    cmpwi r0, 0xc
    bne lbl_fn_8027E410_00001834
    lfs f4, 0x10(r31)
    lfs f5, lbl_80883948
    lfs f3, 0x14(r31)
    lfs f0, 0x18(r31)
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    fmuls f0, f0, f5
    stfs f4, 0x10(r31)
    stfs f3, 0x14(r31)
    stfs f0, 0x18(r31)
lbl_fn_8027E410_00001834:
    addi r3, r31, 0x10
    bl fn_805F9920
    fabs f3, f1
    lfs f0, lbl_80883980
    frsp f3, f3
    fcmpo cr0, f3, f0
    blt lbl_fn_8027E410_00001894
    lfs f0, lbl_80883950
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_8027E410_00001894
    addi r3, r31, 0x10
    mr r4, r3
    bl fn_805F98D0
    lfs f4, 0x10(r31)
    lfs f5, lbl_80883984
    lfs f3, 0x14(r31)
    lfs f0, 0x18(r31)
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    fmuls f0, f0, f5
    stfs f4, 0x10(r31)
    stfs f3, 0x14(r31)
    stfs f0, 0x18(r31)
lbl_fn_8027E410_00001894:
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

asm void fn_8027E678(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    mr r31, r4
    stw r30, 0x58(r1)
    mr r30, r3
    stw r29, 0x54(r1)
    lwz r0, 0x55c(r3)
    lwz r5, 0x14fc(r3)
    lwz r4, 0x68(r4)
    cmpwi r0, 0x6
    add r0, r5, r4
    stw r0, 0x14fc(r3)
    bne lbl_fn_8027E678_00001964
    lwz r4, 0x560(r3)
    subi r0, r4, 0x16
    cmplwi r0, 0x1
    bgt lbl_fn_8027E678_00001964
    li r0, 0x0
    stw r0, 0x58c(r3)
    stw r0, 0x14d8(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    addi r3, r30, 0x15a8
    li r4, 0xf
    li r5, 0x0
    bl fn_800CB5C8
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0xc8
    li r6, 0x0
    bl fn_80239DAC
lbl_fn_8027E678_00001964:
    lwz r0, 0x7e0(r30)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_8027E678_00001980
    mr r3, r30
    bl fn_802829DC
    b lbl_fn_8027E678_00001B34
lbl_fn_8027E678_00001980:
    lwz r3, 0x8(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8027E678_00001A84
    lwz r0, 0x4(r3)
    cmpwi r0, 0x1791
    bne lbl_fn_8027E678_00001A84
    li r0, 0x0
    stw r0, 0x14d8(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    li r0, 0xc
    mr r3, r30
    li r4, 0x3
    stw r0, 0x58c(r30)
    bl fn_8016E970
    lfs f1, lbl_80883948
    li r29, 0x1
    lfs f0, lbl_8088394C
    addi r3, r30, 0xb0
    stw r29, 0x3fc(r30)
    li r4, 0x0
    lfs f2, lbl_80883988
    li r5, 0x2
    stfs f0, 0x2fc(r30)
    li r6, 0x1
    li r7, 0x1
    li r8, 0x1
    stfs f1, 0x2e8(r30)
    bl fn_80097C08
    mr r3, r30
    li r4, 0xc8
    bl fn_80232B7C
    lfs f0, lbl_80883948
    li r0, -0x1
    lfs f1, lbl_8088394C
    addi r4, r30, 0x158c
    stfs f0, 0x30(r1)
    addi r5, r30, 0xb0
    addi r7, r1, 0x3c
    addi r8, r1, 0x30
    stfs f0, 0x34(r1)
    addi r9, r1, 0x20
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x38(r1)
    stfs f0, 0x3c(r1)
    stfs f0, 0x40(r1)
    stfs f0, 0x44(r1)
    stfs f1, 0x20(r1)
    stfs f1, 0x24(r1)
    stfs f1, 0x28(r1)
    stfs f1, 0x2c(r1)
    stw r0, 0x8(r1)
    stw r29, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r29, lbl_8087F048
    mr r4, r30
    addi r3, r1, 0x10
    bl fn_801781B0
    mr r3, r29
    addi r4, r1, 0x10
    li r5, 0x80
    bl fn_80108F38
lbl_fn_8027E678_00001A84:
    lwz r0, 0x14e4(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8027E678_00001A9C
    cmpwi r0, 0x1
    beq lbl_fn_8027E678_00001AEC
    b lbl_fn_8027E678_00001B34
lbl_fn_8027E678_00001A9C:
    lwz r3, 0x8(r31)
    lbz r0, 0x1(r3)
    cmpwi r0, 0x1
    beq lbl_fn_8027E678_00001AE0
    lwz r4, 0x14fc(r30)
    lis r0, 0x4330
    stw r0, 0x48(r1)
    lis r3, lbl_80744E80@ha
    xoris r0, r4, 0x8000
    lfd f2, lbl_80744E80@l(r3)
    stw r0, 0x4c(r1)
    lfs f0, lbl_8088398C
    lfd f1, 0x48(r1)
    fsubs f1, f1, f2
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_8027E678_00001B34
lbl_fn_8027E678_00001AE0:
    li r0, 0x1
    stw r0, 0x14e8(r30)
    b lbl_fn_8027E678_00001B34
lbl_fn_8027E678_00001AEC:
    lwz r0, 0x58c(r30)
    cmpwi r0, 0x4
    beq lbl_fn_8027E678_00001B20
    cmpwi r0, 0x5
    beq lbl_fn_8027E678_00001B20
    lwz r3, 0x8(r31)
    lbz r0, 0x1(r3)
    cmpwi r0, 0x1
    bne lbl_fn_8027E678_00001B18
    li r0, 0x1
    stw r0, 0x1500(r30)
lbl_fn_8027E678_00001B18:
    li r0, 0x0
    stw r0, 0x14fc(r30)
lbl_fn_8027E678_00001B20:
    lwz r0, 0x14fc(r30)
    cmpwi r0, 0x78
    blt lbl_fn_8027E678_00001B34
    li r0, 0x1
    stw r0, 0x1500(r30)
lbl_fn_8027E678_00001B34:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}
