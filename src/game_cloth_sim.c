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
extern void fn_80087994(void);
extern void fn_8008937C(void);
extern void fn_80092814(void);
extern void fn_800CB360(void);
extern void fn_800CB3A0(void);
extern void fn_800CB5C8(void);
extern void fn_800D246C(void);
extern void fn_800DC12C(void);
extern void fn_800DC288(void);
extern void fn_8011FC10(void);
extern void fn_80133130(void);
extern void fn_8013655C(void);
extern void fn_80145334(void);
extern void fn_8014C540(void);
extern void fn_80151448(void);
extern void fn_8015C6A0(void);
extern void fn_8015E4B0(void);
extern void fn_8016E970(void);
extern void fn_801789D8(void);
extern void fn_8021A888(void);
extern void fn_802376D0(void);
extern void fn_802377B8(void);
extern void fn_8023780C(void);
extern void fn_8023781C(void);
extern void fn_80237874(void);
extern void fn_8027278C(void);
extern void fn_80272E0C(void);
extern void fn_80277B84(void);
extern void fn_80277BC0(void);
extern void fn_80279054(void);
extern void fn_80279280(void);
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

/* External data declarations */
extern u8 jumptable_80785290[];
extern u8 lbl_80744AA4[];
extern u8 lbl_80744D2C[];
extern u8 lbl_80775A88[];
extern u8 lbl_807772B0[];
extern u8 lbl_807772D0[];
extern u8 lbl_807852E8[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087D708;
extern u32 lbl_8087EF10;
extern u32 lbl_8087F408;
extern u32 lbl_8087F430;
extern u32 lbl_8087F4A0;
extern u32 lbl_8087F8A0;
extern u32 lbl_80883820;
extern u32 lbl_8088389C;
extern u32 lbl_808838C8;
extern u32 lbl_808838CC;
extern u32 lbl_808838D0;
extern u32 lbl_808838D4;
extern u32 lbl_808838D8;
extern u32 lbl_808838DC;
extern u32 lbl_808838E0;
extern u32 lbl_808838E4;
extern u32 lbl_808838E8;
extern u32 lbl_808838EC;
extern u32 lbl_808838F0;
extern u32 lbl_808838F4;
extern u32 lbl_808838F8;
extern u32 lbl_808838FC;
extern u32 lbl_80883900;
extern u32 lbl_80883904;
extern u32 lbl_80883908;
extern u32 lbl_8088390C;

/* Function declarations */
void fn_80279788(void);
void fn_80279790(void);
void fn_80279798(void);
void fn_802797A0(void);
void fn_802797A8(void);
void fn_802797D4(void);
void fn_802797DC(void);
void fn_80279858(void);
void fn_80279860(void);
void fn_80279930(void);
void fn_802799C0(void);
void fn_8027A478(void);
void fn_8027AC38(void);
void fn_8027AF4C(void);

asm void fn_80279788(void)
{
    nofralloc
    lwz r3, 0x48(r3)
    blr
}

asm void fn_80279790(void)
{
    nofralloc
    lwz r3, lbl_8087F4A0
    blr
}

asm void fn_80279798(void)
{
    nofralloc
    lwz r3, 0x50(r3)
    blr
}

asm void fn_802797A0(void)
{
    nofralloc
    addi r3, r3, 0x6c
    blr
}

asm void fn_802797A8(void)
{
    nofralloc
    lfs f0, lbl_80883820
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
    stw r0, 0x10(r3)
    stfs f0, 0x14(r3)
    stfs f0, 0x18(r3)
    stfs f0, 0x1c(r3)
    blr
}

asm void fn_802797D4(void)
{
    nofralloc
    lwz r3, 0x5c(r3)
    blr
}

asm void fn_802797DC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_80744AA4@ha
    stw r0, 0x14(r1)
    addi r4, r4, lbl_80744AA4@l
    addi r4, r4, 0x1fd
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x1960(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802797DC_0000009C
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_802797DC_0000009C
    addi r3, r3, 0x10
    bl fn_8008937C
    stw r3, 0x1960(r31)
    b lbl_fn_802797DC_000000A0
lbl_fn_802797DC_0000009C:
    li r3, 0x0
lbl_fn_802797DC_000000A0:
    lis r4, lbl_80744AA4@ha
    addi r5, r31, 0x1964
    addi r4, r4, lbl_80744AA4@l
    li r6, 0x0
    addi r4, r4, 0x20b
    li r7, 0x0
    bl fn_80087994
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80279858(void)
{
    nofralloc
    lfs f1, lbl_8088389C
    blr
}

asm void fn_80279860(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    bl fn_8027278C
    lfs f0, lbl_808838C8
    lis r3, lbl_807852E8@ha
    addi r3, r3, lbl_807852E8@l
    li r31, 0x0
    li r4, 0x5
    li r0, 0x12c
    stw r3, 0x0(r30)
    addi r3, r30, 0x19b4
    stw r31, 0x1968(r30)
    stfs f0, 0x19a8(r30)
    stw r4, 0x19ac(r30)
    stw r0, 0x19b0(r30)
    bl fn_802377B8
    addi r3, r30, 0x19c0
    bl fn_800CB360
    lfs f3, lbl_808838D0
    li r0, 0x1c2
    lfs f2, lbl_808838D4
    lis r4, lbl_80744D2C@ha
    lfs f1, lbl_808838D8
    addi r3, r30, 0x19b4
    lfs f0, lbl_808838DC
    addi r4, r4, lbl_80744D2C@l
    lfs f4, lbl_808838CC
    stw r31, 0x199c(r30)
    stfs f4, 0x18fc(r30)
    stw r31, 0x1900(r30)
    stw r31, 0x19a4(r30)
    stfs f3, 0x8(r1)
    stfs f2, 0xc(r1)
    stfs f1, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f3, 0x1950(r30)
    stfs f2, 0x1954(r30)
    stfs f1, 0x1958(r30)
    stfs f0, 0x195c(r30)
    stw r0, 0x14e0(r30)
    bl fn_8023780C
    mr r3, r30
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80279930(void)
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
    beq lbl_fn_80279930_00000218
    li r4, -0x1
    addi r3, r3, 0x19c0
    bl fn_800CB3A0
    addic. r31, r29, 0x19b4
    beq lbl_fn_80279930_000001FC
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_80279930_000001FC
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80279930_000001FC:
    mr r3, r29
    li r4, 0x0
    bl fn_80272E0C
    cmpwi r30, 0x0
    ble lbl_fn_80279930_00000218
    mr r3, r29
    bl dtor_80084684
lbl_fn_80279930_00000218:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_802799C0(void)
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
lbl_fn_802799C0_00000290:
    mr r3, r16
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802799C0_00000310
    mr r3, r17
    bl fn_802376D0
    cmpwi r3, 0x0
    bne lbl_fn_802799C0_00000310
    mr r3, r18
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802799C0_00000310
    mr r3, r19
    bl fn_802376D0
    cmpwi r3, 0x0
    bne lbl_fn_802799C0_00000310
    mr r3, r20
    bl fn_802376D0
    cmpwi r3, 0x0
    bne lbl_fn_802799C0_00000310
    mr r3, r21
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802799C0_00000310
    mr r3, r22
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802799C0_00000310
    mr r3, r23
    bl fn_80237874
    cmpwi r3, 0x0
    beq lbl_fn_802799C0_00000318
lbl_fn_802799C0_00000310:
    li r24, 0x1
    b lbl_fn_802799C0_00000344
lbl_fn_802799C0_00000318:
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
    blt lbl_fn_802799C0_00000290
lbl_fn_802799C0_00000344:
    mr r3, r29
    bl fn_8013655C
    cmpwi r3, 0x0
    bne lbl_fn_802799C0_00000CBC
    lwz r3, 0x1438(r29)
    cmpwi r3, 0x0
    beq lbl_fn_802799C0_00000370
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_802799C0_00000CBC
lbl_fn_802799C0_00000370:
    addi r3, r29, 0x1914
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802799C0_00000CBC
    addi r3, r29, 0x1920
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802799C0_00000CBC
    addi r3, r29, 0x19b4
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802799C0_00000CBC
    addi r3, r29, 0x1938
    bl fn_80473F50
    cmpwi r3, 0x0
    bne lbl_fn_802799C0_00000CBC
    cmpwi r24, 0x0
    bne lbl_fn_802799C0_00000CBC
    addi r3, r29, 0x1938
    bl fn_80470580
    cmpwi r3, 0x0
    beq lbl_fn_802799C0_00000C64
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_802799C0_00000C64
    lwz r0, 0x10d8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_802799C0_00000C64
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
    lis r4, lbl_80744D2C@ha
    lfs f31, lbl_808838E8
    addi r21, r4, lbl_80744D2C@l
    lfs f29, lbl_808838E0
    addi r22, r3, __files@l
    lfs f30, lbl_808838E4
    addi r18, r1, 0x34
    addi r31, r1, 0x20
    lis r24, 0xcccd
    lis r20, 0x4000
    lis r23, 0x1555
    lis r25, 0x2aab
    lis r26, lbl_80775A88@ha
lbl_fn_802799C0_000004A4:
    addi r3, r1, 0x48
    bl fn_8005B3CC
    mr r16, r3
    addi r4, r21, 0x16
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802799C0_000004D4
    addi r3, r1, 0x48
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x1504(r29)
    b lbl_fn_802799C0_00000C54
lbl_fn_802799C0_000004D4:
    mr r3, r16
    addi r4, r21, 0x21
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802799C0_000004FC
    addi r3, r1, 0x48
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x1510(r29)
    b lbl_fn_802799C0_00000C54
lbl_fn_802799C0_000004FC:
    mr r3, r16
    addi r4, r21, 0x2a
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802799C0_00000540
    addi r3, r1, 0x48
    bl fn_8005B3CC
    bl fn_800DC288
    frsp f0, f1
    stfs f1, 0x1514(r29)
    fsubs f0, f0, f29
    fabs f0, f0
    frsp f0, f0
    fcmpo cr0, f0, f30
    bge lbl_fn_802799C0_00000C54
    stfs f31, 0x1514(r29)
    b lbl_fn_802799C0_00000C54
lbl_fn_802799C0_00000540:
    mr r3, r16
    addi r4, r21, 0x35
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802799C0_00000568
    addi r3, r1, 0x48
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x150c(r29)
    b lbl_fn_802799C0_00000C54
lbl_fn_802799C0_00000568:
    mr r3, r16
    addi r4, r21, 0x3e
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802799C0_00000590
    addi r3, r1, 0x48
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x1508(r29)
    b lbl_fn_802799C0_00000C54
lbl_fn_802799C0_00000590:
    mr r3, r16
    addi r4, r21, 0x47
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802799C0_000005B8
    addi r3, r1, 0x48
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x1518(r29)
    b lbl_fn_802799C0_00000C54
lbl_fn_802799C0_000005B8:
    mr r3, r16
    addi r4, r21, 0x51
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802799C0_000005E0
    addi r3, r1, 0x48
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x1520(r29)
    b lbl_fn_802799C0_00000C54
lbl_fn_802799C0_000005E0:
    mr r3, r16
    addi r4, r21, 0x5b
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802799C0_00000608
    addi r3, r1, 0x48
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x1524(r29)
    b lbl_fn_802799C0_00000C54
lbl_fn_802799C0_00000608:
    mr r3, r16
    addi r4, r21, 0x64
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802799C0_00000630
    addi r3, r1, 0x48
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x19a8(r29)
    b lbl_fn_802799C0_00000C54
lbl_fn_802799C0_00000630:
    mr r3, r16
    addi r4, r21, 0x6f
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802799C0_00000658
    addi r3, r1, 0x48
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x19ac(r29)
    b lbl_fn_802799C0_00000C54
lbl_fn_802799C0_00000658:
    mr r3, r16
    addi r4, r21, 0x7a
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802799C0_00000680
    addi r3, r1, 0x48
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x19b0(r29)
    b lbl_fn_802799C0_00000C54
lbl_fn_802799C0_00000680:
    mr r3, r16
    addi r4, r21, 0x86
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802799C0_000006A8
    addi r3, r1, 0x48
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x152c(r29)
    b lbl_fn_802799C0_00000C54
lbl_fn_802799C0_000006A8:
    mr r3, r16
    addi r4, r21, 0x95
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802799C0_000006D0
    addi r3, r1, 0x48
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x14bc(r29)
    b lbl_fn_802799C0_00000C54
lbl_fn_802799C0_000006D0:
    mr r3, r16
    addi r4, r21, 0xa5
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802799C0_00000744
    addi r3, r1, 0x48
    bl fn_8005B3CC
    bl fn_800DC12C
    lwz r4, lbl_8087F430
    li r5, 0x0
    li r6, 0x0
    lwz r4, 0x10d8(r4)
    lwz r0, 0x78(r4)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_802799C0_00000738
lbl_fn_802799C0_00000710:
    lwz r7, 0x7c(r4)
    lwzx r0, r7, r6
    cmpw r3, r0
    bne lbl_fn_802799C0_0000072C
    mulli r0, r5, 0x28
    add r0, r7, r0
    b lbl_fn_802799C0_0000073C
lbl_fn_802799C0_0000072C:
    addi r6, r6, 0x28
    addi r5, r5, 0x1
    bdnz lbl_fn_802799C0_00000710
lbl_fn_802799C0_00000738:
    li r0, 0x0
lbl_fn_802799C0_0000073C:
    stw r0, 0x1968(r29)
    b lbl_fn_802799C0_00000C54
lbl_fn_802799C0_00000744:
    mr r3, r16
    addi r4, r21, 0xb2
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802799C0_000009EC
lbl_fn_802799C0_00000758:
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
    ble lbl_fn_802799C0_000007B0
lbl_fn_802799C0_00000788:
    lwz r7, 0x7c(r4)
    lwzx r0, r7, r6
    cmpw r3, r0
    bne lbl_fn_802799C0_000007A4
    mulli r0, r5, 0x28
    add r30, r7, r0
    b lbl_fn_802799C0_000007B4
lbl_fn_802799C0_000007A4:
    addi r6, r6, 0x28
    addi r5, r5, 0x1
    bdnz lbl_fn_802799C0_00000788
lbl_fn_802799C0_000007B0:
    li r30, 0x0
lbl_fn_802799C0_000007B4:
    cmpwi r30, 0x0
    beq lbl_fn_802799C0_000009E0
    lwz r4, 0x14c4(r29)
    lwz r3, 0x14c8(r29)
    cmplw r4, r3
    bge lbl_fn_802799C0_000007E8
    addi r4, r4, 0x1
    lwz r3, 0x14c0(r29)
    slwi r0, r4, 2
    stw r4, 0x14c4(r29)
    add r3, r3, r0
    stw r30, -0x4(r3)
    b lbl_fn_802799C0_000009E0
lbl_fn_802799C0_000007E8:
    subi r0, r20, 0x1
    subf r0, r3, r0
    cmplwi r0, 0x1
    bge lbl_fn_802799C0_0000080C
    addi r4, r21, 0xbe
    addi r3, r22, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802799C0_0000080C:
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
    ble lbl_fn_802799C0_0000085C
    addi r4, r21, 0xbe
    addi r3, r22, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802799C0_0000085C:
    addi r0, r23, 0x5555
    cmplw r27, r0
    bge lbl_fn_802799C0_000008A4
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
    bge lbl_fn_802799C0_00000898
    addi r3, r1, 0x14
lbl_fn_802799C0_00000898:
    lwz r0, 0x0(r3)
    add r27, r27, r0
    b lbl_fn_802799C0_000008E0
lbl_fn_802799C0_000008A4:
    subi r0, r25, 0x5556
    cmplw r27, r0
    bge lbl_fn_802799C0_000008DC
    addi r3, r27, 0x1
    lwz r0, 0x14(r1)
    srwi r3, r3, 1
    stw r3, 0x18(r1)
    cmplw r3, r0
    addi r3, r1, 0x18
    bge lbl_fn_802799C0_000008D0
    addi r3, r1, 0x14
lbl_fn_802799C0_000008D0:
    lwz r0, 0x0(r3)
    add r27, r27, r0
    b lbl_fn_802799C0_000008E0
lbl_fn_802799C0_000008DC:
    subi r27, r20, 0x1
lbl_fn_802799C0_000008E0:
    subi r0, r20, 0x1
    cmplw r27, r0
    ble lbl_fn_802799C0_00000900
    addi r4, r21, 0xbe
    addi r3, r22, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802799C0_00000900:
    slwi r3, r27, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r17, r3
    bne lbl_fn_802799C0_00000928
    addi r3, r22, 0xa0
    addi r4, r26, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802799C0_00000928:
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
    beq lbl_fn_802799C0_000009E0
    cmpwi r3, 0x0
    beq lbl_fn_802799C0_000009E0
    stw r19, 0x38(r1)
    bl dtor_80084684
lbl_fn_802799C0_000009E0:
    cmpwi r28, 0x0
    bne lbl_fn_802799C0_00000758
    b lbl_fn_802799C0_00000C54
lbl_fn_802799C0_000009EC:
    mr r3, r16
    addi r4, r21, 0xd2
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802799C0_00000C54
lbl_fn_802799C0_00000A00:
    addi r3, r1, 0x48
    bl fn_8005B3CC
    bl fn_800DC12C
    mr r30, r3
    lwz r3, lbl_8087F408
    mr r4, r30
    bl fn_8011FC10
    cmpwi r3, 0x0
    mr r27, r3
    beq lbl_fn_802799C0_00000C4C
    lwz r5, 0x14b4(r29)
    lwz r4, 0x14b8(r29)
    cmplw r5, r4
    bge lbl_fn_802799C0_00000A54
    addi r5, r5, 0x1
    lwz r4, 0x14b0(r29)
    slwi r0, r5, 2
    stw r5, 0x14b4(r29)
    add r4, r4, r0
    stw r3, -0x4(r4)
    b lbl_fn_802799C0_00000C4C
lbl_fn_802799C0_00000A54:
    subi r0, r20, 0x1
    subf r0, r4, r0
    cmplwi r0, 0x1
    bge lbl_fn_802799C0_00000A78
    addi r4, r21, 0xbe
    addi r3, r22, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802799C0_00000A78:
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
    ble lbl_fn_802799C0_00000AC8
    addi r4, r21, 0xbe
    addi r3, r22, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802799C0_00000AC8:
    addi r0, r23, 0x5555
    cmplw r28, r0
    bge lbl_fn_802799C0_00000B10
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
    bge lbl_fn_802799C0_00000B04
    addi r3, r1, 0x8
lbl_fn_802799C0_00000B04:
    lwz r0, 0x0(r3)
    add r17, r28, r0
    b lbl_fn_802799C0_00000B4C
lbl_fn_802799C0_00000B10:
    subi r0, r25, 0x5556
    cmplw r28, r0
    bge lbl_fn_802799C0_00000B48
    addi r3, r28, 0x1
    lwz r0, 0x8(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_802799C0_00000B3C
    addi r3, r1, 0x8
lbl_fn_802799C0_00000B3C:
    lwz r0, 0x0(r3)
    add r17, r28, r0
    b lbl_fn_802799C0_00000B4C
lbl_fn_802799C0_00000B48:
    subi r17, r20, 0x1
lbl_fn_802799C0_00000B4C:
    subi r0, r20, 0x1
    cmplw r17, r0
    ble lbl_fn_802799C0_00000B6C
    addi r4, r21, 0xbe
    addi r3, r22, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802799C0_00000B6C:
    slwi r3, r17, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r28, r3
    bne lbl_fn_802799C0_00000B94
    addi r3, r22, 0xa0
    addi r4, r26, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802799C0_00000B94:
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
    beq lbl_fn_802799C0_00000C4C
    cmpwi r3, 0x0
    beq lbl_fn_802799C0_00000C4C
    stw r19, 0x24(r1)
    bl dtor_80084684
lbl_fn_802799C0_00000C4C:
    cmpwi r30, 0x0
    bne lbl_fn_802799C0_00000A00
lbl_fn_802799C0_00000C54:
    addi r3, r1, 0x48
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_802799C0_000004A4
lbl_fn_802799C0_00000C64:
    lwz r4, 0x7ec(r29)
    mr r3, r29
    lwz r0, 0x12a8(r29)
    ori r4, r4, 0x1c0
    oris r4, r4, 0x1
    ori r0, r0, 0x800
    ori r4, r4, 0xc219
    stw r0, 0x12a8(r29)
    oris r0, r4, 0x380
    stw r0, 0x7ec(r29)
    bl fn_802797DC
    lwz r3, 0x1438(r29)
    cmpwi r3, 0x0
    beq lbl_fn_802799C0_00000CB4
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x1438(r29)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_802799C0_00000CB4:
    li r3, 0x1
    b lbl_fn_802799C0_00000CC0
lbl_fn_802799C0_00000CBC:
    li r3, 0x0
lbl_fn_802799C0_00000CC0:
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

asm void fn_8027A478(void)
{
    nofralloc
    stwu r1, -0x170(r1)
    mflr r0
    stw r0, 0x174(r1)
    addi r11, r1, 0x140
    stfd f31, 0x160(r1)
    psq_st f31, 0x168(r1), 0, 0
    stfd f30, 0x150(r1)
    psq_st f30, 0x158(r1), 0, 0
    stfd f29, 0x140(r1)
    psq_st f29, 0x148(r1), 0, 0
    bl _savegpr_19
    lwz r12, 0x0(r3)
    mr r21, r3
    lwz r12, 0xf8(r12)
    mtctr r12
    bctrl
    lwz r0, 0x7e0(r21)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_8027A478_00000DEC
    lwz r3, lbl_8087F8A0
    li r4, 0x5
    bl fn_8054A340
    cmpwi r3, 0x0
    beq lbl_fn_8027A478_00000DEC
    lwz r7, 0x38(r3)
    li r5, 0x0
    li r0, 0x0
    li r4, 0x0
    rlwinm r6, r7, 0, 29, 29
    cmplwi r6, 0x4
    beq lbl_fn_8027A478_00000D80
    clrlwi r6, r7, 31
    cmplwi r6, 0x1
    beq lbl_fn_8027A478_00000D80
    li r4, 0x1
lbl_fn_8027A478_00000D80:
    cmpwi r4, 0x0
    beq lbl_fn_8027A478_00000D9C
    lwz r4, 0x7e0(r3)
    rlwinm r4, r4, 0, 26, 26
    cmplwi r4, 0x20
    beq lbl_fn_8027A478_00000D9C
    li r0, 0x1
lbl_fn_8027A478_00000D9C:
    cmpwi r0, 0x0
    beq lbl_fn_8027A478_00000DD0
    lwz r0, 0x55c(r3)
    li r4, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_8027A478_00000DC4
    lwz r0, 0x560(r3)
    cmpwi r0, 0x1c
    bne lbl_fn_8027A478_00000DC4
    li r4, 0x1
lbl_fn_8027A478_00000DC4:
    cmpwi r4, 0x0
    bne lbl_fn_8027A478_00000DD0
    li r5, 0x1
lbl_fn_8027A478_00000DD0:
    cmpwi r5, 0x0
    beq lbl_fn_8027A478_00000DEC
    addi r3, r21, 0x7d4
    li r4, 0x4
    li r5, 0xa
    li r6, 0x0
    bl fn_80133130
lbl_fn_8027A478_00000DEC:
    lwz r0, 0x18f0(r21)
    cmpwi r0, 0x0
    ble lbl_fn_8027A478_0000100C
    lwz r3, lbl_8087F8A0
    lwz r24, 0x48(r3)
    cmpwi r24, 0x0
    beq lbl_fn_8027A478_00001014
    lwz r0, 0x638(r24)
    cmpwi r0, 0x0
    beq lbl_fn_8027A478_00001014
    lwz r0, 0x55c(r24)
    cmpwi r0, 0x6
    bne lbl_fn_8027A478_00001000
    lwz r0, 0x560(r24)
    cmpwi r0, 0xe
    bne lbl_fn_8027A478_00001000
    lwz r3, 0xf80(r24)
    cmpwi r3, 0x0
    beq lbl_fn_8027A478_00001014
    lwz r12, 0x0(r3)
    lwz r12, 0x54(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8027A478_00001014
    lwz r0, 0x1904(r21)
    cmpwi r0, 0x0
    beq lbl_fn_8027A478_00001014
    li r31, 0x0
    lis r3, lbl_80744D2C@ha
    stw r31, 0x1904(r21)
    addi r20, r3, lbl_80744D2C@l
    lfs f30, lbl_808838EC
    addi r30, r1, 0x60
    lfs f31, lbl_808838F0
    addi r28, r1, 0x78
    addi r29, r1, 0x88
    addi r26, r1, 0x6c
    addi r27, r1, 0x94
    addi r25, r1, 0x50
    li r23, 0x0
    li r22, 0x0
lbl_fn_8027A478_00000E94:
    add r3, r21, r31
    lwz r0, 0x1538(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8027A478_00000FA0
    lwz r6, 0x638(r24)
    addi r4, r20, 0xe1
    lwz r3, 0x15c0(r3)
    li r5, 0x0
    lfs f0, 0x58(r6)
    addi r19, r3, 0xb0
    fmuls f29, f30, f0
    mr r3, r19
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8027A478_00000ED8
    li r5, 0x0
    b lbl_fn_8027A478_00000EE4
lbl_fn_8027A478_00000ED8:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r19)
    add r5, r3, r0
lbl_fn_8027A478_00000EE4:
    lfs f0, 0x2c(r5)
    addi r4, r20, 0xe7
    lfs f7, 0x1c(r5)
    addi r3, r21, 0xb0
    lfs f8, 0xc(r5)
    li r5, 0x0
    stfs f8, 0x78(r1)
    stfs f7, 0x7c(r1)
    stfs f0, 0x80(r1)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8027A478_00000F1C
    li r5, 0x0
    b lbl_fn_8027A478_00000F28
lbl_fn_8027A478_00000F1C:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r21)
    add r5, r3, r0
lbl_fn_8027A478_00000F28:
    psq_l f1, 0x528(r24), 0, 0
    mr r3, r29
    psq_st f1, 0x0(r30), 0, 0
    mr r4, r25
    lfs f0, 0x2c(r5)
    stfs f31, 0x7c(r1)
    lfs f7, 0xc(r5)
    lfs f2, 0x530(r24)
    stfs f2, 0x68(r1)
    lfs f2, 0x80(r1)
    stfs f2, 0x90(r1)
    fmr f2, f0
    psq_l f1, 0x0(r28), 0, 0
    stfs f2, 0x9c(r1)
    lfs f2, 0x68(r1)
    stfs f7, 0x6c(r1)
    stfs f31, 0x70(r1)
    psq_st f1, 0x0(r29), 0, 0
    psq_l f1, 0x0(r26), 0, 0
    stfs f31, 0x64(r1)
    psq_st f1, 0x0(r27), 0, 0
    psq_l f1, 0x0(r30), 0, 0
    stfs f0, 0x74(r1)
    psq_st f1, 0x0(r25), 0, 0
    stfs f2, 0x58(r1)
    stfs f29, 0x5c(r1)
    bl fn_80051B70
    cmpwi r3, 0x0
    beq lbl_fn_8027A478_00000FA0
    li r23, 0x1
lbl_fn_8027A478_00000FA0:
    addi r22, r22, 0x1
    addi r31, r31, 0xec
    cmpwi r22, 0x4
    blt lbl_fn_8027A478_00000E94
    cmpwi r23, 0x0
    beq lbl_fn_8027A478_00001014
    lwz r3, 0x18ec(r21)
    li r0, 0x0
    stw r0, 0x18f0(r21)
    cmpwi r3, 0x0
    beq lbl_fn_8027A478_00000FD0
    bl fn_8015C6A0
lbl_fn_8027A478_00000FD0:
    li r3, 0x0
    li r0, 0x1c2
    stw r3, 0x18ec(r21)
    mr r3, r21
    stw r0, 0x14e0(r21)
    bl fn_80279054
    lwz r12, 0x0(r21)
    mr r3, r21
    lwz r12, 0x150(r12)
    mtctr r12
    bctrl
    b lbl_fn_8027A478_00001014
lbl_fn_8027A478_00001000:
    li r0, 0x1
    stw r0, 0x1904(r21)
    b lbl_fn_8027A478_00001014
lbl_fn_8027A478_0000100C:
    li r0, 0x1
    stw r0, 0x1904(r21)
lbl_fn_8027A478_00001014:
    lwz r0, 0xd18(r21)
    cmpwi r0, 0x0
    beq lbl_fn_8027A478_0000102C
    lwz r0, 0x14d4(r21)
    cmpwi r0, 0x0
    bne lbl_fn_8027A478_00001058
lbl_fn_8027A478_0000102C:
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
    b lbl_fn_8027A478_0000122C
lbl_fn_8027A478_00001058:
    lwz r0, 0x58c(r21)
    cmpwi r0, 0x0
    bne lbl_fn_8027A478_0000106C
    li r0, 0x6
    stw r0, 0x58c(r21)
lbl_fn_8027A478_0000106C:
    lwz r0, 0x58c(r21)
    cmplwi r0, 0x14
    bgt lbl_fn_8027A478_000011F8
    lis r3, jumptable_80785290@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_80785290@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lwz r12, 0x0(r21)
    mr r3, r21
    lwz r12, 0x108(r12)
    mtctr r12
    bctrl
    b lbl_fn_8027A478_0000122C
    lwz r12, 0x0(r21)
    mr r3, r21
    lwz r12, 0x10c(r12)
    mtctr r12
    bctrl
    b lbl_fn_8027A478_0000122C
    lwz r12, 0x0(r21)
    mr r3, r21
    lwz r12, 0x110(r12)
    mtctr r12
    bctrl
    b lbl_fn_8027A478_0000122C
    lwz r12, 0x0(r21)
    mr r3, r21
    lwz r12, 0x114(r12)
    mtctr r12
    bctrl
    b lbl_fn_8027A478_0000122C
    lwz r12, 0x0(r21)
    mr r3, r21
    lwz r12, 0x118(r12)
    mtctr r12
    bctrl
    b lbl_fn_8027A478_0000122C
    lwz r12, 0x0(r21)
    mr r3, r21
    lwz r12, 0x11c(r12)
    mtctr r12
    bctrl
    b lbl_fn_8027A478_0000122C
    lwz r12, 0x0(r21)
    mr r3, r21
    lwz r12, 0x120(r12)
    mtctr r12
    bctrl
    b lbl_fn_8027A478_0000122C
    lwz r12, 0x0(r21)
    mr r3, r21
    lwz r12, 0x124(r12)
    mtctr r12
    bctrl
    b lbl_fn_8027A478_0000122C
    lwz r12, 0x0(r21)
    mr r3, r21
    lwz r12, 0x128(r12)
    mtctr r12
    bctrl
    b lbl_fn_8027A478_0000122C
    lwz r12, 0x0(r21)
    mr r3, r21
    lwz r12, 0x12c(r12)
    mtctr r12
    bctrl
    b lbl_fn_8027A478_0000122C
    lwz r12, 0x0(r21)
    mr r3, r21
    lwz r12, 0x17c(r12)
    mtctr r12
    bctrl
    b lbl_fn_8027A478_0000122C
    lwz r12, 0x0(r21)
    mr r3, r21
    lwz r12, 0x184(r12)
    mtctr r12
    bctrl
    b lbl_fn_8027A478_0000122C
    lwz r12, 0x0(r21)
    mr r3, r21
    lwz r12, 0xec(r12)
    mtctr r12
    bctrl
    b lbl_fn_8027A478_0000122C
    lwz r12, 0x0(r21)
    mr r3, r21
    lwz r12, 0x130(r12)
    mtctr r12
    bctrl
    b lbl_fn_8027A478_0000122C
    lwz r12, 0x0(r21)
    mr r3, r21
    lwz r12, 0x134(r12)
    mtctr r12
    bctrl
    b lbl_fn_8027A478_0000122C
lbl_fn_8027A478_000011F8:
    lwz r12, 0x0(r21)
    mr r3, r21
    lwz r12, 0x104(r12)
    mtctr r12
    bctrl
    lwz r0, 0x58c(r21)
    cmpwi r0, 0x6
    bne lbl_fn_8027A478_0000122C
    lwz r12, 0x0(r21)
    mr r3, r21
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_8027A478_0000122C:
    li r20, 0x0
    li r19, 0x0
    b lbl_fn_8027A478_00001290
lbl_fn_8027A478_00001238:
    lwz r3, 0x1908(r21)
    li r4, 0x9c
    li r5, 0x0
    lwzx r3, r3, r19
    bl fn_801789D8
    cmpwi r3, 0x0
    bne lbl_fn_8027A478_00001288
    lwz r3, 0x1908(r21)
    li r4, 0xa0
    li r5, 0x0
    lwzx r3, r3, r19
    bl fn_801789D8
    cmpwi r3, 0x0
    bne lbl_fn_8027A478_00001288
    lwz r3, 0x1908(r21)
    lfs f0, 0x19a8(r21)
    lwzx r3, r3, r19
    lfs f7, 0x948(r3)
    fsubs f0, f7, f0
    stfs f0, 0x948(r3)
lbl_fn_8027A478_00001288:
    addi r19, r19, 0x4
    addi r20, r20, 0x1
lbl_fn_8027A478_00001290:
    lwz r0, 0x190c(r21)
    cmplw r20, r0
    blt lbl_fn_8027A478_00001238
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
    ble lbl_fn_8027A478_000012D4
    subi r0, r3, 0x1
    stw r0, 0x14e0(r21)
lbl_fn_8027A478_000012D4:
    lfs f7, 0x5b0(r21)
    addi r5, r1, 0x38
    psq_l f1, 0x528(r21), 0, 0
    addi r4, r1, 0x44
    lfs f2, 0x530(r21)
    lfs f0, 0x52c(r21)
    lwz r3, 0x1500(r21)
    psq_st f1, 0x0(r5), 0, 0
    fadds f0, f0, f7
    addi r0, r3, 0x1
    stfs f2, 0x4c(r1)
    cmpwi r0, 0xa
    stfs f2, 0x40(r1)
    frsp f2, f2
    stfs f2, 0x5fc(r21)
    lfs f2, 0x40(r1)
    stfs f0, 0x3c(r1)
    psq_st f1, 0x0(r4), 0, 0
    psq_st f1, 0x5f4(r21), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x600(r21), 0, 0
    stfs f2, 0x608(r21)
    stfs f7, 0x60c(r21)
    stw r0, 0x1500(r21)
    ble lbl_fn_8027A478_0000135C
    lwz r0, 0x58c(r21)
    cmpwi r0, 0x6
    beq lbl_fn_8027A478_0000134C
    cmpwi r0, 0x10
    bne lbl_fn_8027A478_0000135C
lbl_fn_8027A478_0000134C:
    mr r3, r21
    bl fn_80277BC0
    li r0, 0x0
    stw r0, 0x1500(r21)
lbl_fn_8027A478_0000135C:
    psq_l f1, 0x528(r21), 0, 0
    addi r20, r1, 0x14
    lfs f2, 0x530(r21)
    addi r3, r1, 0xa0
    lfs f7, lbl_808838F0
    li r4, 0x79
    lfs f0, lbl_808838DC
    psq_st f1, 0x0(r20), 0, 0
    stfs f2, 0x1c(r1)
    stfs f7, 0x8(r1)
    stfs f7, 0xc(r1)
    stfs f0, 0x10(r1)
    lfs f1, 0x538(r21)
    bl fn_805F8E70
    addi r4, r1, 0x8
    addi r3, r1, 0xa0
    mr r5, r4
    bl fn_805F93C0
    lfs f7, lbl_808838F4
    mr r3, r20
    lfs f0, 0x5b0(r21)
    addi r4, r1, 0x8
    lfs f2, lbl_808838F8
    li r5, 0x3e8
    fmuls f1, f7, f0
    bl fn_805A507C
    lfs f1, 0x538(r21)
    addi r3, r1, 0xd0
    li r4, 0x79
    bl fn_805F8E70
    addi r6, r1, 0xd0
    addi r4, r1, 0x20
    psq_l f1, 0x0(r6), 0, 0
    addi r3, r21, 0x196c
    psq_l f2, 0x8(r6), 0, 0
    addi r7, r1, 0x2c
    psq_l f3, 0x10(r6), 0, 0
    mr r5, r4
    psq_l f4, 0x18(r6), 0, 0
    psq_l f5, 0x20(r6), 0, 0
    psq_l f6, 0x28(r6), 0, 0
    psq_st f6, 0x28(r3), 0, 0
    lfs f8, lbl_808838F0
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x528(r21), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    lfs f2, 0x530(r21)
    psq_st f3, 0x10(r3), 0, 0
    lfs f7, lbl_808838FC
    psq_st f4, 0x18(r3), 0, 0
    lfs f0, lbl_80883900
    psq_st f5, 0x20(r3), 0, 0
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0x34(r1)
    stfs f8, 0x20(r1)
    stfs f7, 0x24(r1)
    stfs f0, 0x28(r1)
    bl fn_805F93C0
    lfs f9, 0x2c(r1)
    lfs f0, 0x20(r1)
    lfs f8, 0x30(r1)
    fadds f9, f9, f0
    lfs f7, 0x24(r1)
    lfs f0, 0x28(r1)
    fadds f8, f8, f7
    lfs f7, 0x34(r1)
    stfs f9, 0x1978(r21)
    fadds f0, f7, f0
    stfs f8, 0x1988(r21)
    stfs f0, 0x1998(r21)
    psq_l f31, 0x168(r1), 0, 0
    lfd f31, 0x160(r1)
    psq_l f30, 0x158(r1), 0, 0
    lfd f30, 0x150(r1)
    psq_l f29, 0x148(r1), 0, 0
    lfd f29, 0x140(r1)
    addi r11, r1, 0x140
    stfs f9, 0x2c(r1)
    stfs f8, 0x30(r1)
    stfs f0, 0x34(r1)
    bl _restgpr_19
    lwz r0, 0x174(r1)
    mtlr r0
    addi r1, r1, 0x170
    blr
}

asm void fn_8027AC38(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stfd f31, 0x60(r1)
    psq_st f31, 0x68(r1), 0, 0
    stw r31, 0x5c(r1)
    mr r31, r4
    stw r30, 0x58(r1)
    mr r30, r3
    stw r29, 0x54(r1)
    lwz r3, 0x8(r4)
    bl fn_8021A888
    cmpwi r3, 0x0
    beq lbl_fn_8027AC38_0000153C
    lwz r4, 0x0(r31)
    lwz r0, 0x48(r4)
    cmpwi r0, 0x3
    bne lbl_fn_8027AC38_0000153C
    mr r3, r30
    bl fn_80277B84
    cmpwi r3, 0x0
    bne lbl_fn_8027AC38_0000153C
    lwz r3, 0x8(r31)
    lfs f0, lbl_808838F0
    lfs f3, 0x84(r3)
    fcmpo cr0, f3, f0
    ble lbl_fn_8027AC38_0000153C
    li r4, 0x0
    stw r4, 0x68(r31)
    li r0, 0x1
    lwz r3, 0xc4(r3)
    stw r3, 0x88(r31)
    stw r0, 0x84(r31)
    stw r4, 0x90(r31)
    b lbl_fn_8027AC38_000017A0
lbl_fn_8027AC38_0000153C:
    lwz r5, 0x7e0(r30)
    li r4, 0x1
    rlwinm r3, r5, 0, 12, 12
    subis r0, r3, 0x8
    cmplwi r0, 0x0
    beq lbl_fn_8027AC38_00001568
    rlwinm r3, r5, 0, 7, 7
    subis r0, r3, 0x100
    cmplwi r0, 0x0
    beq lbl_fn_8027AC38_00001568
    li r4, 0x0
lbl_fn_8027AC38_00001568:
    cmpwi r4, 0x0
    bne lbl_fn_8027AC38_0000168C
    lwz r0, 0x58c(r30)
    cmpwi r0, 0x11
    beq lbl_fn_8027AC38_0000168C
    cmpwi r0, 0x6
    beq lbl_fn_8027AC38_0000159C
    lis r3, lbl_807C7030@ha
    addi r3, r3, lbl_807C7030@l
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x8(r3)
    stfs f2, 0x18(r31)
    psq_st f1, 0x10(r31), 0, 0
lbl_fn_8027AC38_0000159C:
    lwz r3, 0x8(r31)
    lbz r0, 0x1(r3)
    cmpwi r0, 0x1
    beq lbl_fn_8027AC38_00001670
    lfs f3, lbl_808838F0
    addi r3, r1, 0x20
    lfs f0, lbl_808838DC
    li r29, 0x0
    stfs f3, 0x8(r1)
    li r4, 0x79
    stfs f3, 0xc(r1)
    stfs f0, 0x10(r1)
    lfs f1, 0x538(r30)
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
    lfs f0, lbl_80883904
    fmuls f1, f3, f0
    bl fn_8068A850
    frsp f0, f1
    fcmpo cr0, f31, f0
    ble lbl_fn_8027AC38_00001644
    li r29, 0x1
lbl_fn_8027AC38_00001644:
    cmpwi r29, 0x0
    beq lbl_fn_8027AC38_0000168C
    lis r3, lbl_807C7030@ha
    li r0, 0x1
    addi r3, r3, lbl_807C7030@l
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x8(r3)
    stfs f2, 0x18(r31)
    psq_st f1, 0x10(r31), 0, 0
    stw r0, 0x48(r31)
    b lbl_fn_8027AC38_0000168C
lbl_fn_8027AC38_00001670:
    lwz r3, 0x1534(r30)
    addi r0, r3, 0x1
    stw r0, 0x1534(r30)
    cmpwi r0, 0x2
    blt lbl_fn_8027AC38_0000168C
    li r0, 0x1
    stw r0, 0x1530(r30)
lbl_fn_8027AC38_0000168C:
    lwz r3, 0x0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8027AC38_000016E4
    lwz r0, 0x12a8(r3)
    extrwi. r0, r0, 1, 22
    beq lbl_fn_8027AC38_000016E4
    lwz r0, 0xc(r31)
    li r3, 0x0
    stw r3, 0x48(r31)
    ori r0, r0, 0x800
    lwz r3, 0x8(r31)
    oris r0, r0, 0x10
    stw r0, 0xc(r31)
    lbz r0, 0x1(r3)
    cmpwi r0, 0x1
    bne lbl_fn_8027AC38_000016E4
    lis r3, lbl_807C7030@ha
    addi r3, r3, lbl_807C7030@l
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x8(r3)
    stfs f2, 0x18(r31)
    psq_st f1, 0x10(r31), 0, 0
lbl_fn_8027AC38_000016E4:
    addi r3, r31, 0x10
    bl fn_805F9920
    fabs f3, f1
    lfs f0, lbl_808838E4
    frsp f3, f3
    fcmpo cr0, f3, f0
    blt lbl_fn_8027AC38_00001744
    lfs f0, lbl_80883908
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_8027AC38_00001744
    addi r3, r31, 0x10
    mr r4, r3
    bl fn_805F98D0
    lfs f4, 0x10(r31)
    lfs f5, lbl_8088390C
    lfs f3, 0x14(r31)
    lfs f0, 0x18(r31)
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    fmuls f0, f0, f5
    stfs f4, 0x10(r31)
    stfs f3, 0x14(r31)
    stfs f0, 0x18(r31)
lbl_fn_8027AC38_00001744:
    lwz r3, 0x58c(r30)
    subi r0, r3, 0x13
    cmplwi r0, 0x1
    bgt lbl_fn_8027AC38_0000177C
    lfs f4, 0x10(r31)
    lfs f5, lbl_808838F0
    lfs f3, 0x14(r31)
    lfs f0, 0x18(r31)
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    fmuls f0, f0, f5
    stfs f4, 0x10(r31)
    stfs f3, 0x14(r31)
    stfs f0, 0x18(r31)
lbl_fn_8027AC38_0000177C:
    mr r3, r30
    mr r4, r31
    bl fn_80151448
    lwz r12, 0x0(r30)
    mr r3, r30
    mr r4, r31
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
lbl_fn_8027AC38_000017A0:
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

asm void fn_8027AF4C(void)
{
    nofralloc
    stwu r1, -0xf0(r1)
    mflr r0
    stw r0, 0xf4(r1)
    stw r31, 0xec(r1)
    mr r31, r3
    stw r30, 0xe8(r1)
    mr r30, r4
    lwz r0, 0x190c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8027AF4C_00001910
    lwz r4, 0x0(r4)
    cmpwi r4, 0x0
    beq lbl_fn_8027AF4C_00001894
    lwz r0, 0x12a8(r4)
    extrwi. r0, r0, 1, 22
    beq lbl_fn_8027AF4C_00001894
    lwz r0, 0x199c(r3)
    lwz r4, 0x19a4(r3)
    cmpwi r0, 0x0
    addi r4, r4, 0x1
    stw r4, 0x19a4(r3)
    bne lbl_fn_8027AF4C_00001894
    lwz r0, 0x19ac(r3)
    cmpw r4, r0
    ble lbl_fn_8027AF4C_00001894
    lfs f1, lbl_808838F0
    li r4, 0x79
    lfs f0, lbl_808838DC
    stfs f1, 0x14(r1)
    stfs f1, 0x18(r1)
    stfs f0, 0x1c(r1)
    lfs f1, 0x538(r3)
    addi r3, r1, 0x50
    bl fn_805F8E70
    addi r4, r1, 0x14
    addi r3, r1, 0x50
    mr r5, r4
    bl fn_805F93C0
    lfs f1, lbl_808838F8
    addi r3, r1, 0xb0
    li r4, 0x79
    bl fn_805F8E70
    addi r4, r1, 0x14
    addi r3, r1, 0xb0
    mr r5, r4
    bl fn_805F93C0
    mr r3, r31
    addi r4, r1, 0x14
    li r5, -0x1
    bl fn_8015E4B0
    li r0, 0x1
    stw r0, 0x199c(r31)
lbl_fn_8027AF4C_00001894:
    lwz r3, 0x8(r30)
    lbz r0, 0x1(r3)
    cmpwi r0, 0x1
    bne lbl_fn_8027AF4C_00001910
    lfs f1, lbl_808838F0
    addi r3, r1, 0x20
    lfs f0, lbl_808838DC
    li r4, 0x79
    stfs f1, 0x8(r1)
    stfs f1, 0xc(r1)
    stfs f0, 0x10(r1)
    lfs f1, 0x538(r31)
    bl fn_805F8E70
    addi r4, r1, 0x8
    addi r3, r1, 0x20
    mr r5, r4
    bl fn_805F93C0
    lfs f1, lbl_808838F8
    addi r3, r1, 0x80
    li r4, 0x79
    bl fn_805F8E70
    addi r4, r1, 0x8
    addi r3, r1, 0x80
    mr r5, r4
    bl fn_805F93C0
    mr r3, r31
    addi r4, r1, 0x8
    li r5, -0x1
    bl fn_8015E4B0
    li r0, 0x1
    stw r0, 0x199c(r31)
lbl_fn_8027AF4C_00001910:
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x12
    bne lbl_fn_8027AF4C_00001944
    lfs f2, 0x10(r30)
    lfs f3, lbl_808838F0
    lfs f1, 0x14(r30)
    lfs f0, 0x18(r30)
    fmuls f2, f2, f3
    fmuls f1, f1, f3
    fmuls f0, f0, f3
    stfs f2, 0x10(r30)
    stfs f1, 0x14(r30)
    stfs f0, 0x18(r30)
lbl_fn_8027AF4C_00001944:
    lwz r0, 0x7e0(r31)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_8027AF4C_00001978
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x164(r12)
    mtctr r12
    bctrl
    addi r3, r31, 0x19c0
    li r4, 0x0
    li r5, 0x0
    bl fn_800CB5C8
lbl_fn_8027AF4C_00001978:
    lwz r0, 0xf4(r1)
    lwz r31, 0xec(r1)
    lwz r30, 0xe8(r1)
    mtlr r0
    addi r1, r1, 0xf0
    blr
}
