#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void fn_8005B3CC(void);
extern void fn_8005B5F8(void);
extern void fn_8005B6E8(void);
extern void fn_80084320(void);
extern void fn_80092814(void);
extern void fn_80093C8C(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800CB6B0(void);
extern void fn_800D246C(void);
extern void fn_800DC288(void);
extern void fn_800F8548(void);
extern void fn_800F8574(void);
extern void fn_800F8C6C(void);
extern void fn_801255C8(void);
extern void fn_80126214(void);
extern void fn_80128930(void);
extern void fn_80128A30(void);
extern void fn_8012DB04(void);
extern void fn_8013655C(void);
extern void fn_8013CB68(void);
extern void fn_80145334(void);
extern void fn_80149A30(void);
extern void fn_8014C540(void);
extern void fn_8015DBC8(void);
extern void fn_8016E970(void);
extern void fn_80219E6C(void);
extern void fn_80232B7C(void);
extern void fn_80237518(void);
extern void fn_802375C4(void);
extern void fn_80237654(void);
extern void fn_802376D0(void);
extern void fn_80239DAC(void);
extern void fn_8023A680(void);
extern void fn_802B98B0(void);
extern void fn_802B9C5C(void);
extern void fn_80373148(void);
extern void fn_803EEE10(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473F50(void);
extern void fn_805A3C58(void);
extern void fn_805A3D6C(void);
extern void fn_805A40BC(void);
extern void fn_805A418C(void);
extern void fn_805A4258(void);
extern void fn_805A4F20(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_80680CF8(void);
extern void fn_80682428(void);
extern void fn_80684600(void);
extern void fn_8068AEA4(void);
extern void fn_80695AD0(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 jumptable_8078636C[];
extern u8 lbl_80746808[];
extern u8 lbl_8074681C[];
extern u8 lbl_80766768[];
extern u8 lbl_807772B0[];
extern u8 lbl_807772D0[];
extern u8 lbl_80786360[];
extern u8 lbl_8078639C[];
extern u8 lbl_807863B4[];

/* Small data declarations */
extern u32 lbl_8087D708;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F4A0;
extern u32 lbl_80884100;
extern u32 lbl_80884104;
extern u32 lbl_80884108;
extern u32 lbl_8088410C;
extern u32 lbl_80884110;
extern u32 lbl_80884114;
extern u32 lbl_80884118;
extern u32 lbl_8088411C;
extern u32 lbl_80884120;
extern u32 lbl_80884124;
extern u32 lbl_80884128;
extern u32 lbl_8088412C;
extern u32 lbl_80884130;
extern u32 lbl_80884134;
extern u32 lbl_80884138;
extern u32 lbl_8088413C;
extern u32 lbl_80884140;
extern u32 lbl_80884144;
extern u32 lbl_80884148;
extern u32 lbl_8088414C;
extern u32 lbl_80884150;
extern u32 lbl_80884154;
extern u32 lbl_80884158;
extern u32 lbl_8088415C;
extern u32 lbl_80884160;
extern u32 lbl_80884164;

/* Function declarations */
void fn_802B77AC(void);
void fn_802B7970(void);
void fn_802B7AF8(void);
void fn_802B7CE0(void);
void fn_802B7DE8(void);
void fn_802B7DEC(void);
void fn_802B7E60(void);
void fn_802B7F04(void);
void fn_802B7F4C(void);
void fn_802B7F94(void);
void fn_802B8398(void);
void fn_802B8AA4(void);

asm void fn_802B77AC(void)
{
    nofralloc
    stwu r1, -0x210(r1)
    mflr r0
    stw r0, 0x214(r1)
    stw r31, 0x20c(r1)
    mr r31, r3
    stw r30, 0x208(r1)
    mr r30, r5
    bl fn_805A3C58
    lwz r0, 0x7ec(r31)
    li r7, 0x0
    lfs f1, lbl_80884100
    lis r3, lbl_807863B4@ha
    lfs f0, lbl_80884104
    addi r3, r3, lbl_807863B4@l
    rlwinm r0, r0, 0, 26, 24
    li r11, 0x410
    li r10, 0x411
    li r9, 0x412
    li r8, 0x5a
    li r6, 0x64
    stw r3, 0x0(r31)
    mr r3, r31
    addi r4, r1, 0x108
    addi r5, r30, 0x2c
    stfs f1, 0x14d8(r31)
    stfs f1, 0x14dc(r31)
    stfs f1, 0x14e0(r31)
    stfs f0, 0x14e4(r31)
    stw r11, 0x14e8(r31)
    stw r10, 0x14ec(r31)
    stw r9, 0x14f0(r31)
    stw r8, 0x14f4(r31)
    stw r7, 0x14f8(r31)
    stw r7, 0x14fc(r31)
    stw r7, 0x1500(r31)
    stw r6, 0x1504(r31)
    stw r7, 0x1508(r31)
    stw r7, 0x150c(r31)
    stw r7, 0x1514(r31)
    stw r0, 0x7ec(r31)
    bl fn_805A3D6C
    cmpwi r3, 0x0
    beq lbl_fn_802B77AC_000000C8
    lis r4, lbl_8074681C@ha
    addi r3, r1, 0x8
    addi r4, r4, lbl_8074681C@l
    addi r5, r1, 0x108
    crclr 6
    bl sprintf
    b lbl_fn_802B77AC_000000E0
lbl_fn_802B77AC_000000C8:
    lis r4, lbl_8074681C@ha
    addi r3, r1, 0x8
    addi r4, r4, lbl_8074681C@l
    addi r4, r4, 0x1c
    crclr 6
    bl sprintf
lbl_fn_802B77AC_000000E0:
    lwz r12, 0x14b4(r31)
    addi r3, r31, 0x14b4
    addi r4, r1, 0x8
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_802B77AC_00000194
    bl fn_80373148
    cmpwi r3, 0x0
    beq lbl_fn_802B77AC_00000194
    lwz r3, lbl_8087F430
    bl fn_80373148
    lwz r0, 0x48(r3)
    cmpwi r0, 0x2
    bne lbl_fn_802B77AC_00000194
    lwz r0, 0x4c(r3)
    cmpwi r0, 0xa
    bne lbl_fn_802B77AC_00000194
    lwz r0, 0x50(r3)
    cmpwi r0, 0x2
    bne lbl_fn_802B77AC_00000194
    lis r5, lbl_8074681C@ha
    li r3, 0xc
    addi r5, r5, lbl_8074681C@l
    li r4, 0x3
    addi r5, r5, 0x48
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    mr r0, r3
    beq lbl_fn_802B77AC_00000170
    bl fn_80237518
    mr r0, r3
lbl_fn_802B77AC_00000170:
    lwz r3, 0x1514(r31)
    li r4, 0x1
    stw r0, 0x1514(r31)
    bl fn_802375C4
    lis r4, lbl_8074681C@ha
    lwz r3, 0x1514(r31)
    addi r4, r4, lbl_8074681C@l
    addi r4, r4, 0x49
    bl fn_80237654
lbl_fn_802B77AC_00000194:
    lwz r0, 0x12a8(r31)
    mr r3, r31
    lfs f0, lbl_80884108
    ori r0, r0, 0x10
    stw r0, 0x12a8(r31)
    stfs f0, 0x149c(r31)
    lwz r31, 0x20c(r1)
    lwz r30, 0x208(r1)
    lwz r0, 0x214(r1)
    mtlr r0
    addi r1, r1, 0x210
    blr
}

asm void fn_802B7970(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r30, 0x28(r1)
    bl fn_8013655C
    cmpwi r3, 0x0
    beq lbl_fn_802B7970_000001F0
    li r3, 0x0
    b lbl_fn_802B7970_00000334
lbl_fn_802B7970_000001F0:
    lwz r3, 0x1438(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802B7970_00000214
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_802B7970_00000214
    li r3, 0x0
    b lbl_fn_802B7970_00000334
lbl_fn_802B7970_00000214:
    addi r3, r31, 0x14b4
    bl fn_80473F50
    cmpwi r3, 0x0
    beq lbl_fn_802B7970_0000022C
    li r3, 0x0
    b lbl_fn_802B7970_00000334
lbl_fn_802B7970_0000022C:
    lwz r0, 0x1514(r31)
    cmpwi r0, 0x0
    bne lbl_fn_802B7970_00000258
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x14(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
    b lbl_fn_802B7970_00000274
lbl_fn_802B7970_00000258:
    lis r5, lbl_80786360@ha
    lwzu r4, lbl_80786360@l(r5)
    stw r4, 0x14(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
lbl_fn_802B7970_00000274:
    lwz r5, 0x14(r1)
    addi r3, r1, 0x8
    lwz r4, 0x18(r1)
    lwz r0, 0x1c(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_802B7970_000002B4
    lwz r3, 0x1514(r31)
    bl fn_802376D0
    cmpwi r3, 0x0
    beq lbl_fn_802B7970_000002B4
    li r3, 0x0
    b lbl_fn_802B7970_00000334
lbl_fn_802B7970_000002B4:
    addi r3, r31, 0x14b4
    bl fn_8047059C
    mr r30, r3
    addi r3, r31, 0x14b4
    bl fn_80470580
    mr r4, r3
    mr r3, r31
    mr r5, r30
    bl fn_802B7AF8
    lfs f1, lbl_8088410C
    lfs f0, 0x544(r31)
    lwz r3, 0x1438(r31)
    fmuls f0, f1, f0
    cmpwi r3, 0x0
    stfs f0, 0x149c(r31)
    beq lbl_fn_802B7970_0000030C
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x1438(r31)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_802B7970_0000030C:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0xfc(r12)
    mtctr r12
    bctrl
    lwz r0, 0x7ec(r31)
    li r3, 0x1
    ori r0, r0, 0x8208
    oris r0, r0, 0x380
    stw r0, 0x7ec(r31)
lbl_fn_802B7970_00000334:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_802B7AF8(void)
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
    lis r31, lbl_8074681C@ha
    addi r31, r31, lbl_8074681C@l
lbl_fn_802B7AF8_000003EC:
    addi r3, r1, 0x8
    bl fn_8005B3CC
    mr r30, r3
    addi r4, r31, 0x64
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802B7AF8_0000041C
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x14e8(r29)
    b lbl_fn_802B7AF8_00000508
lbl_fn_802B7AF8_0000041C:
    mr r3, r30
    addi r4, r31, 0x6c
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802B7AF8_00000444
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x14ec(r29)
    b lbl_fn_802B7AF8_00000508
lbl_fn_802B7AF8_00000444:
    mr r3, r30
    addi r4, r31, 0x79
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802B7AF8_0000046C
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x14f0(r29)
    b lbl_fn_802B7AF8_00000508
lbl_fn_802B7AF8_0000046C:
    mr r3, r30
    addi r4, r31, 0x85
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802B7AF8_00000494
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x14f4(r29)
    b lbl_fn_802B7AF8_00000508
lbl_fn_802B7AF8_00000494:
    mr r3, r30
    addi r4, r31, 0x8f
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802B7AF8_000004BC
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x14e4(r29)
    b lbl_fn_802B7AF8_00000508
lbl_fn_802B7AF8_000004BC:
    mr r3, r30
    addi r4, r31, 0x9e
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802B7AF8_000004E4
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x1500(r29)
    b lbl_fn_802B7AF8_00000508
lbl_fn_802B7AF8_000004E4:
    mr r3, r30
    addi r4, r31, 0xb2
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802B7AF8_00000508
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x1504(r29)
lbl_fn_802B7AF8_00000508:
    addi r3, r1, 0x8
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_802B7AF8_000003EC
    lwz r0, 0x654(r1)
    lwz r31, 0x64c(r1)
    lwz r30, 0x648(r1)
    lwz r29, 0x644(r1)
    mtlr r0
    addi r1, r1, 0x650
    blr
}

asm void fn_802B7CE0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 29
    beq lbl_fn_802B7CE0_000005D8
    lwz r7, 0x38(r3)
    li r5, 0x0
    li r4, 0x0
    li r6, 0x0
    rlwinm r0, r7, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_802B7CE0_00000580
    clrlwi r0, r7, 31
    cmplwi r0, 0x1
    beq lbl_fn_802B7CE0_00000580
    li r6, 0x1
lbl_fn_802B7CE0_00000580:
    cmpwi r6, 0x0
    beq lbl_fn_802B7CE0_0000059C
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_802B7CE0_0000059C
    li r4, 0x1
lbl_fn_802B7CE0_0000059C:
    cmpwi r4, 0x0
    beq lbl_fn_802B7CE0_000005D0
    lwz r0, 0x55c(r3)
    li r4, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_802B7CE0_000005C4
    lwz r0, 0x560(r3)
    cmpwi r0, 0x1c
    bne lbl_fn_802B7CE0_000005C4
    li r4, 0x1
lbl_fn_802B7CE0_000005C4:
    cmpwi r4, 0x0
    bne lbl_fn_802B7CE0_000005D0
    li r5, 0x1
lbl_fn_802B7CE0_000005D0:
    cmpwi r5, 0x0
    bne lbl_fn_802B7CE0_000005F4
lbl_fn_802B7CE0_000005D8:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x104(r12)
    mtctr r12
    bctrl
    mr r3, r31
    bl fn_802B9C5C
lbl_fn_802B7CE0_000005F4:
    mr r3, r31
    bl fn_8014C540
    lwz r0, 0x38(r31)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_802B7CE0_00000620
    lwz r0, 0x12a4(r31)
    extrwi. r0, r0, 1, 6
    bne lbl_fn_802B7CE0_00000620
    mr r3, r31
    bl fn_80145334
lbl_fn_802B7CE0_00000620:
    mr r3, r31
    bl fn_802B98B0
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802B7DE8(void)
{
    nofralloc
    b fn_80149A30
}

asm void fn_802B7DEC(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x1510(r3)
    lwz r0, 0x40(r4)
    cmpwi r0, 0x1
    bne lbl_fn_802B7DEC_0000066C
    lwz r5, 0xc(r4)
    li r0, 0x1
    ori r5, r5, 0x80
    stw r5, 0xc(r4)
    stw r0, 0x1510(r3)
    b lbl_fn_802B7DEC_000006AC
lbl_fn_802B7DEC_0000066C:
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x9
    bne lbl_fn_802B7DEC_000006AC
    lwz r0, 0x14bc(r3)
    cmpwi r0, 0x1
    bgt lbl_fn_802B7DEC_000006AC
    lfs f2, 0x10(r4)
    lfs f3, lbl_80884100
    lfs f1, 0x14(r4)
    lfs f0, 0x18(r4)
    fmuls f2, f2, f3
    fmuls f1, f1, f3
    fmuls f0, f0, f3
    stfs f2, 0x10(r4)
    stfs f1, 0x14(r4)
    stfs f0, 0x18(r4)
lbl_fn_802B7DEC_000006AC:
    li r3, 0x1
    blr
}

asm void fn_802B7E60(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_802B7E60_000006F8
    lwz r12, 0x0(r3)
    li r4, 0x2
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    b lbl_fn_802B7E60_00000740
lbl_fn_802B7E60_000006F8:
    lwz r0, 0x1510(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802B7E60_0000071C
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x9
    bne lbl_fn_802B7E60_0000071C
    lwz r0, 0x14bc(r3)
    cmpwi r0, 0x1
    ble lbl_fn_802B7E60_00000734
lbl_fn_802B7E60_0000071C:
    lwz r12, 0x0(r30)
    mr r3, r30
    li r4, 0x6
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_802B7E60_00000734:
    mr r3, r30
    mr r4, r31
    bl fn_805A418C
lbl_fn_802B7E60_00000740:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802B7F04(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x6
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r12, 0x0(r3)
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    mr r3, r31
    li r4, 0x1
    bl fn_8015DBC8
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802B7F4C(void)
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
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802B7F94(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    stw r31, 0x8c(r1)
    mr r31, r3
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 29
    bne lbl_fn_802B7F94_00000BD8
    lwz r0, 0x14cc(r3)
    li r5, 0x0
    lwz r6, 0x58c(r3)
    cmpwi r4, 0x6
    clrlwi r0, r0, 4
    stw r5, 0x14bc(r3)
    oris r0, r0, 0x800
    stw r5, 0x14c0(r3)
    stw r5, 0x14c4(r3)
    stw r5, 0x14c8(r3)
    stw r0, 0x14cc(r3)
    stw r5, 0x14d0(r3)
    stw r4, 0x58c(r3)
    beq lbl_fn_802B7F94_00000874
    cmpwi r4, 0x7
    beq lbl_fn_802B7F94_00000880
    cmpwi r4, 0x8
    beq lbl_fn_802B7F94_00000894
    cmpwi r4, 0x9
    beq lbl_fn_802B7F94_000008FC
    cmpwi r4, 0xa
    beq lbl_fn_802B7F94_000009F8
    cmpwi r4, 0xb
    beq lbl_fn_802B7F94_00000AF4
    cmpwi r4, 0x2
    beq lbl_fn_802B7F94_00000B7C
    b lbl_fn_802B7F94_00000BD8
lbl_fn_802B7F94_00000874:
    oris r0, r0, 0x4000
    stw r0, 0x14cc(r3)
    b lbl_fn_802B7F94_00000BD8
lbl_fn_802B7F94_00000880:
    oris r0, r0, 0x4000
    stw r0, 0x14cc(r3)
    li r4, 0x2
    bl fn_8016E970
    b lbl_fn_802B7F94_00000BD8
lbl_fn_802B7F94_00000894:
    lwz r4, 0xd1c(r3)
    addi r5, r3, 0x528
    stw r4, 0x14d4(r3)
    li r6, 0x0
    addi r3, r3, 0xc64
    bl fn_80128930
    lfs f4, lbl_80884110
    lfs f3, 0x5b0(r31)
    lfs f0, 0x14e4(r31)
    fmuls f3, f4, f3
    fcmpo cr0, f3, f0
    ble lbl_fn_802B7F94_000008C8
    b lbl_fn_802B7F94_000008CC
lbl_fn_802B7F94_000008C8:
    fmr f3, f0
lbl_fn_802B7F94_000008CC:
    lfs f0, lbl_80884114
    addi r3, r31, 0xc64
    fmuls f0, f0, f3
    stfs f0, 0xc8c(r31)
    bl fn_801255C8
    lwz r0, 0x14cc(r31)
    mr r3, r31
    li r4, 0x2
    oris r0, r0, 0x4000
    stw r0, 0x14cc(r31)
    bl fn_8016E970
    b lbl_fn_802B7F94_00000BD8
lbl_fn_802B7F94_000008FC:
    lwz r4, 0xd1c(r3)
    stw r4, 0x14d4(r3)
    cmpwi r4, 0x0
    beq lbl_fn_802B7F94_00000984
    lfs f5, 0x52c(r4)
    addi r5, r1, 0x14
    lfs f4, 0x52c(r3)
    addi r6, r3, 0x14d8
    lfs f3, 0x528(r4)
    fsubs f5, f5, f4
    lfs f0, 0x528(r3)
    lfs f4, 0x530(r4)
    fsubs f3, f3, f0
    lfs f0, 0x530(r3)
    stfs f5, 0x18(r1)
    fsubs f2, f4, f0
    lfs f0, lbl_80884100
    stfs f3, 0x14(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f0, 0x14dc(r3)
    mr r3, r6
    stfs f2, 0x1c(r1)
    stfs f2, 0x8(r6)
    bl fn_805F9920
    fabs f3, f1
    lfs f0, lbl_80884118
    frsp f3, f3
    fcmpo cr0, f3, f0
    blt lbl_fn_802B7F94_000009B8
    addi r3, r31, 0x14d8
    mr r4, r3
    bl fn_805F98D0
    b lbl_fn_802B7F94_000009B8
lbl_fn_802B7F94_00000984:
    lfs f3, lbl_80884100
    li r4, 0x79
    lfs f0, lbl_8088411C
    lfs f1, 0x538(r3)
    stfs f3, 0x14d8(r3)
    stfs f3, 0x14dc(r3)
    stfs f0, 0x14e0(r3)
    addi r3, r1, 0x50
    bl fn_805F8E70
    addi r4, r31, 0x14d8
    addi r3, r1, 0x50
    mr r5, r4
    bl fn_805F93C0
lbl_fn_802B7F94_000009B8:
    lfs f1, lbl_8088411C
    mr r3, r31
    lfs f2, lbl_80884100
    li r4, 0x15c
    li r5, 0x0
    li r6, 0x1
    bl fn_805A4F20
    lwz r0, 0x14cc(r31)
    mr r3, r31
    li r4, 0x6
    rlwinm r0, r0, 0, 2, 0
    stw r0, 0x14cc(r31)
    bl fn_8016E970
    li r0, 0x4
    stw r0, 0x560(r31)
    b lbl_fn_802B7F94_00000BD8
lbl_fn_802B7F94_000009F8:
    lwz r4, 0xd1c(r3)
    stw r4, 0x14d4(r3)
    cmpwi r4, 0x0
    beq lbl_fn_802B7F94_00000A80
    lfs f5, 0x52c(r4)
    addi r5, r1, 0x8
    lfs f4, 0x52c(r3)
    addi r6, r3, 0x14d8
    lfs f3, 0x528(r4)
    fsubs f5, f5, f4
    lfs f0, 0x528(r3)
    lfs f4, 0x530(r4)
    fsubs f3, f3, f0
    lfs f0, 0x530(r3)
    stfs f5, 0xc(r1)
    fsubs f2, f4, f0
    lfs f0, lbl_80884100
    stfs f3, 0x8(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f0, 0x14dc(r3)
    mr r3, r6
    stfs f2, 0x10(r1)
    stfs f2, 0x8(r6)
    bl fn_805F9920
    fabs f3, f1
    lfs f0, lbl_80884118
    frsp f3, f3
    fcmpo cr0, f3, f0
    blt lbl_fn_802B7F94_00000AB4
    addi r3, r31, 0x14d8
    mr r4, r3
    bl fn_805F98D0
    b lbl_fn_802B7F94_00000AB4
lbl_fn_802B7F94_00000A80:
    lfs f3, lbl_80884100
    li r4, 0x79
    lfs f0, lbl_8088411C
    lfs f1, 0x538(r3)
    stfs f3, 0x14d8(r3)
    stfs f3, 0x14dc(r3)
    stfs f0, 0x14e0(r3)
    addi r3, r1, 0x20
    bl fn_805F8E70
    addi r4, r31, 0x14d8
    addi r3, r1, 0x20
    mr r5, r4
    bl fn_805F93C0
lbl_fn_802B7F94_00000AB4:
    lfs f1, lbl_8088411C
    mr r3, r31
    lfs f2, lbl_80884100
    li r4, 0x13f
    li r5, 0x0
    li r6, 0x1
    bl fn_805A4F20
    lwz r0, 0x14cc(r31)
    mr r3, r31
    li r4, 0x6
    rlwinm r0, r0, 0, 2, 0
    stw r0, 0x14cc(r31)
    bl fn_8016E970
    li r0, 0x4
    stw r0, 0x560(r31)
    b lbl_fn_802B7F94_00000BD8
lbl_fn_802B7F94_00000AF4:
    lwz r4, 0x14f8(r3)
    cmpwi r4, 0x0
    beq lbl_fn_802B7F94_00000B48
    lfs f1, lbl_80884100
    addi r5, r3, 0x528
    addi r4, r4, 0x10
    li r6, 0x8
    addi r3, r3, 0xc64
    bl fn_80128A30
    lwz r4, 0x14f8(r31)
    addi r3, r31, 0xc64
    lfs f0, lbl_80884120
    lfs f4, 0x5c(r4)
    lfs f3, 0x28(r4)
    fmuls f3, f4, f3
    fmuls f0, f0, f3
    stfs f0, 0xc8c(r31)
    bl fn_801255C8
    li r0, 0x1
    stw r0, 0x14fc(r31)
    b lbl_fn_802B7F94_00000B60
lbl_fn_802B7F94_00000B48:
    lwz r12, 0x0(r3)
    li r4, 0x6
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    b lbl_fn_802B7F94_00000BD8
lbl_fn_802B7F94_00000B60:
    lwz r0, 0x14cc(r31)
    mr r3, r31
    li r4, 0x2
    oris r0, r0, 0x4000
    stw r0, 0x14cc(r31)
    bl fn_8016E970
    b lbl_fn_802B7F94_00000BD8
lbl_fn_802B7F94_00000B7C:
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_802B7F94_00000BA4
    cmpwi r6, 0x2
    beq lbl_fn_802B7F94_00000BA4
    lwz r12, 0x0(r3)
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
lbl_fn_802B7F94_00000BA4:
    lfs f1, lbl_8088411C
    mr r3, r31
    lfs f2, lbl_80884100
    li r4, 0x2e
    li r5, 0x0
    li r6, 0x1
    bl fn_805A4F20
    lwz r0, 0x14cc(r31)
    mr r3, r31
    li r4, 0x2
    rlwinm r0, r0, 0, 2, 0
    stw r0, 0x14cc(r31)
    bl fn_8016E970
lbl_fn_802B7F94_00000BD8:
    lwz r0, 0x94(r1)
    lwz r31, 0x8c(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_802B8398(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    li r5, 0x0
    li r6, 0x0
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    stw r31, 0x3c(r1)
    mr r31, r3
    lwz r7, 0x38(r3)
    lwz r4, 0x14c0(r3)
    rlwinm r0, r7, 0, 29, 29
    cmplwi r0, 0x4
    addi r0, r4, 0x1
    stw r0, 0x14c0(r3)
    li r4, 0x0
    beq lbl_fn_802B8398_00000C40
    clrlwi r0, r7, 31
    cmplwi r0, 0x1
    beq lbl_fn_802B8398_00000C40
    li r4, 0x1
lbl_fn_802B8398_00000C40:
    cmpwi r4, 0x0
    beq lbl_fn_802B8398_00000C5C
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_802B8398_00000C5C
    li r6, 0x1
lbl_fn_802B8398_00000C5C:
    cmpwi r6, 0x0
    beq lbl_fn_802B8398_00000C90
    lwz r0, 0x55c(r3)
    li r4, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_802B8398_00000C84
    lwz r0, 0x560(r3)
    cmpwi r0, 0x1c
    bne lbl_fn_802B8398_00000C84
    li r4, 0x1
lbl_fn_802B8398_00000C84:
    cmpwi r4, 0x0
    bne lbl_fn_802B8398_00000C90
    li r5, 0x1
lbl_fn_802B8398_00000C90:
    cmpwi r5, 0x0
    beq lbl_fn_802B8398_00000CFC
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x6
    beq lbl_fn_802B8398_00000CFC
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0xf8(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_802B8398_00000CFC
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x6
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    lwz r0, 0xf80(r31)
    cmpwi r0, 0x0
    bne lbl_fn_802B8398_00000CFC
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x6
    bne lbl_fn_802B8398_00000CFC
    mr r3, r31
    li r4, 0x2
    bl fn_8016E970
lbl_fn_802B8398_00000CFC:
    lwz r6, 0x38(r31)
    li r4, 0x0
    li r3, 0x0
    li r5, 0x0
    rlwinm r0, r6, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_802B8398_00000D28
    clrlwi r0, r6, 31
    cmplwi r0, 0x1
    beq lbl_fn_802B8398_00000D28
    li r5, 0x1
lbl_fn_802B8398_00000D28:
    cmpwi r5, 0x0
    beq lbl_fn_802B8398_00000D44
    lwz r0, 0x7e0(r31)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_802B8398_00000D44
    li r3, 0x1
lbl_fn_802B8398_00000D44:
    cmpwi r3, 0x0
    beq lbl_fn_802B8398_00000D78
    lwz r0, 0x55c(r31)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_802B8398_00000D6C
    lwz r0, 0x560(r31)
    cmpwi r0, 0x1c
    bne lbl_fn_802B8398_00000D6C
    li r3, 0x1
lbl_fn_802B8398_00000D6C:
    cmpwi r3, 0x0
    bne lbl_fn_802B8398_00000D78
    li r4, 0x1
lbl_fn_802B8398_00000D78:
    cmpwi r4, 0x0
    beq lbl_fn_802B8398_00000F74
    lwz r0, 0xd18(r31)
    cmpwi r0, 0x0
    beq lbl_fn_802B8398_00000F74
    lwz r0, 0x14fc(r31)
    cmpwi r0, 0x0
    bne lbl_fn_802B8398_00000E84
    lwz r0, 0x940(r31)
    cmpwi r0, 0x0
    ble lbl_fn_802B8398_00000DD0
    xoris r3, r0, 0x8000
    lis r0, 0x4330
    lis r4, lbl_80746808@ha
    stw r3, 0x24(r1)
    lfd f2, lbl_80746808@l(r4)
    stw r0, 0x20(r1)
    lfs f0, 0x7d8(r31)
    lfd f1, 0x20(r1)
    fsubs f1, f1, f2
    fdivs f1, f0, f1
    b lbl_fn_802B8398_00000DD4
lbl_fn_802B8398_00000DD0:
    lfs f1, lbl_80884100
lbl_fn_802B8398_00000DD4:
    lfs f0, lbl_80884124
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x28(r1)
    lwz r3, 0x2c(r1)
    cmpwi r3, 0x0
    bgt lbl_fn_802B8398_00000E04
    lfs f1, 0x7d8(r31)
    lfs f0, lbl_80884100
    fcmpo cr0, f1, f0
    ble lbl_fn_802B8398_00000E04
    li r3, 0x1
lbl_fn_802B8398_00000E04:
    lwz r0, 0x14fc(r31)
    cmpwi r0, 0x0
    beq lbl_fn_802B8398_00000E24
    lwz r0, 0x1504(r31)
    cmpw r3, r0
    blt lbl_fn_802B8398_00000E50
    li r0, 0x0
    b lbl_fn_802B8398_00000E60
lbl_fn_802B8398_00000E24:
    lwz r0, 0x1374(r31)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_802B8398_00000E3C
    li r0, 0x0
    b lbl_fn_802B8398_00000E60
lbl_fn_802B8398_00000E3C:
    lwz r0, 0x1500(r31)
    cmpw r3, r0
    blt lbl_fn_802B8398_00000E50
    li r0, 0x0
    b lbl_fn_802B8398_00000E60
lbl_fn_802B8398_00000E50:
    lwz r3, 0x14f8(r31)
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
lbl_fn_802B8398_00000E60:
    cmpwi r0, 0x0
    beq lbl_fn_802B8398_00000F74
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0xb
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    b lbl_fn_802B8398_00000F74
lbl_fn_802B8398_00000E84:
    lwz r0, 0x940(r31)
    cmpwi r0, 0x0
    ble lbl_fn_802B8398_00000EBC
    xoris r3, r0, 0x8000
    lis r0, 0x4330
    lis r4, lbl_80746808@ha
    stw r3, 0x2c(r1)
    lfd f2, lbl_80746808@l(r4)
    stw r0, 0x28(r1)
    lfs f0, 0x7d8(r31)
    lfd f1, 0x28(r1)
    fsubs f1, f1, f2
    fdivs f1, f0, f1
    b lbl_fn_802B8398_00000EC0
lbl_fn_802B8398_00000EBC:
    lfs f1, lbl_80884100
lbl_fn_802B8398_00000EC0:
    lfs f0, lbl_80884124
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x20(r1)
    lwz r3, 0x24(r1)
    cmpwi r3, 0x0
    bgt lbl_fn_802B8398_00000EF0
    lfs f1, 0x7d8(r31)
    lfs f0, lbl_80884100
    fcmpo cr0, f1, f0
    ble lbl_fn_802B8398_00000EF0
    li r3, 0x1
lbl_fn_802B8398_00000EF0:
    lwz r0, 0x14fc(r31)
    cmpwi r0, 0x0
    beq lbl_fn_802B8398_00000F10
    lwz r0, 0x1504(r31)
    cmpw r3, r0
    blt lbl_fn_802B8398_00000F3C
    li r0, 0x0
    b lbl_fn_802B8398_00000F4C
lbl_fn_802B8398_00000F10:
    lwz r0, 0x1374(r31)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_802B8398_00000F28
    li r0, 0x0
    b lbl_fn_802B8398_00000F4C
lbl_fn_802B8398_00000F28:
    lwz r0, 0x1500(r31)
    cmpw r3, r0
    blt lbl_fn_802B8398_00000F3C
    li r0, 0x0
    b lbl_fn_802B8398_00000F4C
lbl_fn_802B8398_00000F3C:
    lwz r3, 0x14f8(r31)
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
lbl_fn_802B8398_00000F4C:
    cmpwi r0, 0x0
    bne lbl_fn_802B8398_00000F74
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x6
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x14fc(r31)
lbl_fn_802B8398_00000F74:
    lwz r0, 0x58c(r31)
    cmplwi r0, 0xb
    bgt lbl_fn_802B8398_000012C4
    lis r3, jumptable_8078636C@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_8078636C@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x2
    bne lbl_fn_802B8398_00000FD8
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0xf8(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_802B8398_00000FD8
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x8
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_802B8398_00000FD8:
    lwz r0, 0xf80(r31)
    cmpwi r0, 0x0
    bne lbl_fn_802B8398_00000FFC
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x6
    bne lbl_fn_802B8398_00000FFC
    mr r3, r31
    li r4, 0x2
    bl fn_8016E970
lbl_fn_802B8398_00000FFC:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x108(r12)
    mtctr r12
    bctrl
    b lbl_fn_802B8398_000012DC
    lwz r4, 0xd1c(r31)
    addi r3, r1, 0x14
    lfs f0, 0x530(r31)
    lfs f1, 0x530(r4)
    lfs f3, 0x52c(r4)
    fsubs f4, f1, f0
    lfs f2, 0x52c(r31)
    lfs f1, 0x528(r4)
    lfs f0, 0x528(r31)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0x18(r1)
    stfs f0, 0x14(r1)
    stfs f4, 0x1c(r1)
    bl fn_805F9920
    lfs f0, 0x14e4(r31)
    fmuls f0, f0, f0
    fcmpo cr0, f1, f0
    bge lbl_fn_802B8398_0000107C
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x9
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    b lbl_fn_802B8398_000010AC
lbl_fn_802B8398_0000107C:
    lwz r0, 0x14fc(r31)
    cmpwi r0, 0x0
    bne lbl_fn_802B8398_000010AC
    lwz r0, 0x14cc(r31)
    srwi. r0, r0, 31
    beq lbl_fn_802B8398_000010AC
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x8
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_802B8398_000010AC:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x108(r12)
    mtctr r12
    bctrl
    b lbl_fn_802B8398_000012DC
    lwz r3, 0x14d4(r31)
    lwz r0, 0xd1c(r31)
    cmplw r0, r3
    beq lbl_fn_802B8398_000010F0
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x8
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    b lbl_fn_802B8398_00001210
lbl_fn_802B8398_000010F0:
    lfs f1, 0x530(r3)
    lfs f0, 0x530(r31)
    lfs f3, 0x52c(r3)
    fsubs f4, f1, f0
    lfs f2, 0x52c(r31)
    lfs f1, 0x528(r3)
    lfs f0, 0x528(r31)
    fsubs f3, f3, f2
    lfs f2, lbl_80884110
    fsubs f0, f1, f0
    stfs f3, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f4, 0x10(r1)
    lfs f1, 0x5b0(r31)
    lfs f0, 0x14e4(r31)
    fmuls f31, f2, f1
    fcmpo cr0, f31, f0
    ble lbl_fn_802B8398_0000113C
    b lbl_fn_802B8398_00001140
lbl_fn_802B8398_0000113C:
    fmr f31, f0
lbl_fn_802B8398_00001140:
    addi r3, r1, 0x8
    bl fn_805F9920
    fmuls f0, f31, f31
    fcmpo cr0, f1, f0
    bge lbl_fn_802B8398_00001170
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x9
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    b lbl_fn_802B8398_00001210
lbl_fn_802B8398_00001170:
    lis r4, lbl_8074681C@ha
    addi r3, r31, 0xb0
    addi r4, r4, lbl_8074681C@l
    addi r4, r4, 0xc6
    bl fn_80093C8C
    cmpwi r3, 0x0
    bne lbl_fn_802B8398_000011EC
    lis r3, 0x8889
    lwz r4, 0x14c0(r31)
    subi r0, r3, 0x7777
    mulhw r0, r0, r4
    add r0, r0, r4
    srawi r0, r0, 4
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r0, r0, 0x1e
    subf. r0, r0, r4
    bne lbl_fn_802B8398_000011EC
    bl fn_80680CF8
    slwi r0, r3, 30
    srwi r3, r3, 31
    subf r0, r3, r0
    rotlwi r0, r0, 2
    add. r0, r0, r3
    bne lbl_fn_802B8398_000011EC
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0xa
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_802B8398_000011EC:
    lwz r0, 0x14cc(r31)
    srwi. r0, r0, 31
    beq lbl_fn_802B8398_00001210
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x8
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_802B8398_00001210:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x108(r12)
    mtctr r12
    bctrl
    b lbl_fn_802B8398_000012DC
    lwz r0, 0x14cc(r31)
    srwi. r0, r0, 31
    beq lbl_fn_802B8398_0000124C
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x7
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_802B8398_0000124C:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x108(r12)
    mtctr r12
    bctrl
    b lbl_fn_802B8398_000012DC
    lwz r0, 0x14cc(r31)
    srwi. r0, r0, 31
    beq lbl_fn_802B8398_00001288
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x7
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_802B8398_00001288:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x108(r12)
    mtctr r12
    bctrl
    b lbl_fn_802B8398_000012DC
    mr r3, r31
    bl fn_805A40BC
    b lbl_fn_802B8398_000012DC
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x108(r12)
    mtctr r12
    bctrl
    b lbl_fn_802B8398_000012DC
lbl_fn_802B8398_000012C4:
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x6
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_802B8398_000012DC:
    lwz r0, 0x54(r1)
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    lwz r31, 0x3c(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_802B8AA4(void)
{
    nofralloc
    stwu r1, -0x3e0(r1)
    mflr r0
    stw r0, 0x3e4(r1)
    addi r4, r1, 0x1b4
    stfd f31, 0x3d0(r1)
    psq_st f31, 0x3d8(r1), 0, 0
    stfd f30, 0x3c0(r1)
    psq_st f30, 0x3c8(r1), 0, 0
    lfs f30, lbl_80884100
    stfd f29, 0x3b0(r1)
    psq_st f29, 0x3b8(r1), 0, 0
    lfs f29, lbl_8088411C
    stfd f28, 0x3a0(r1)
    psq_st f28, 0x3a8(r1), 0, 0
    stfd f27, 0x390(r1)
    psq_st f27, 0x398(r1), 0, 0
    stw r31, 0x38c(r1)
    mr r31, r3
    stw r30, 0x388(r1)
    stw r29, 0x384(r1)
    psq_l f1, 0x534(r3), 0, 0
    lfs f2, 0x53c(r3)
    addi r3, r3, 0x7d4
    stfs f2, 0x1bc(r1)
    psq_st f1, 0x0(r4), 0, 0
    bl fn_8012DB04
    lfs f31, lbl_80884128
    fcmpo cr0, f1, f31
    ble lbl_fn_802B8AA4_00001378
    addi r3, r31, 0x7d4
    bl fn_8012DB04
    fmr f31, f1
lbl_fn_802B8AA4_00001378:
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x2
    bne lbl_fn_802B8AA4_00001638
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x6
    beq lbl_fn_802B8AA4_000013AC
    cmpwi r0, 0x7
    beq lbl_fn_802B8AA4_000013B8
    cmpwi r0, 0x8
    beq lbl_fn_802B8AA4_000013D8
    cmpwi r0, 0xb
    beq lbl_fn_802B8AA4_000013D8
    b lbl_fn_802B8AA4_0000209C
lbl_fn_802B8AA4_000013AC:
    mr r3, r31
    bl fn_805A4258
    b lbl_fn_802B8AA4_0000209C
lbl_fn_802B8AA4_000013B8:
    lwz r3, 0x14c0(r31)
    lwz r0, 0x14f4(r31)
    cmpw r3, r0
    ble lbl_fn_802B8AA4_0000209C
    lwz r0, 0x14cc(r31)
    oris r0, r0, 0x8000
    stw r0, 0x14cc(r31)
    b lbl_fn_802B8AA4_0000209C
lbl_fn_802B8AA4_000013D8:
    addi r3, r31, 0xc64
    bl fn_80126214
    lwz r0, 0xc90(r31)
    cmpwi r0, 0x0
    beq lbl_fn_802B8AA4_000013F8
    lwz r0, 0x14cc(r31)
    oris r0, r0, 0x8000
    stw r0, 0x14cc(r31)
lbl_fn_802B8AA4_000013F8:
    addi r4, r31, 0xcbc
    addi r30, r1, 0x1a8
    psq_l f1, 0x0(r4), 0, 0
    mr r3, r30
    lfs f2, 0xcc4(r31)
    stfs f2, 0x1b0(r1)
    psq_st f1, 0x0(r30), 0, 0
    bl fn_805F9920
    lfs f0, lbl_8088412C
    fmr f30, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_802B8AA4_00001604
    addi r29, r1, 0x160
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x1b0(r1)
    mr r3, r29
    psq_st f1, 0x0(r29), 0, 0
    mr r4, r29
    stfs f2, 0x168(r1)
    bl fn_805F98D0
    lfs f2, 0x168(r1)
    addi r30, r1, 0x16c
    psq_l f1, 0x0(r29), 0, 0
    fabs f3, f2
    lfs f0, lbl_80884118
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0x174(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_802B8AA4_00001494
    lfs f3, 0x16c(r1)
    lfs f0, lbl_80884100
    fcmpo cr0, f3, f0
    ble lbl_fn_802B8AA4_00001488
    lfs f0, lbl_80884130
    b lbl_fn_802B8AA4_0000148C
lbl_fn_802B8AA4_00001488:
    lfs f0, lbl_80884134
lbl_fn_802B8AA4_0000148C:
    stfs f0, 0xf8(r1)
    b lbl_fn_802B8AA4_000014A8
lbl_fn_802B8AA4_00001494:
    frsp f2, f2
    lfs f1, 0x16c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0xf8(r1)
lbl_fn_802B8AA4_000014A8:
    lfs f0, 0xf8(r1)
    addi r3, r1, 0x2d0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80884100
    addi r4, r1, 0xe8
    lfs f28, 0x2d8(r1)
    mr r5, r4
    lfs f31, 0x2d4(r1)
    addi r3, r1, 0x300
    lfs f13, 0x2d0(r1)
    lfs f12, 0x2e8(r1)
    lfs f11, 0x2e4(r1)
    lfs f10, 0x2e0(r1)
    lfs f9, 0x2f8(r1)
    lfs f8, 0x2f4(r1)
    lfs f7, 0x2f0(r1)
    lfs f6, 0x2fc(r1)
    lfs f5, 0x2ec(r1)
    lfs f4, 0x2dc(r1)
    lfs f0, lbl_8088411C
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x174(r1)
    stfs f3, 0x330(r1)
    stfs f3, 0x334(r1)
    stfs f3, 0x338(r1)
    stfs f0, 0x33c(r1)
    stfs f13, 0xb8(r1)
    stfs f31, 0xbc(r1)
    stfs f28, 0xc0(r1)
    stfs f13, 0x300(r1)
    stfs f31, 0x304(r1)
    stfs f28, 0x308(r1)
    stfs f10, 0xc4(r1)
    stfs f11, 0xc8(r1)
    stfs f12, 0xcc(r1)
    stfs f10, 0x310(r1)
    stfs f11, 0x314(r1)
    stfs f12, 0x318(r1)
    stfs f7, 0xd0(r1)
    stfs f8, 0xd4(r1)
    stfs f9, 0xd8(r1)
    stfs f7, 0x320(r1)
    stfs f8, 0x324(r1)
    stfs f9, 0x328(r1)
    stfs f4, 0xdc(r1)
    stfs f5, 0xe0(r1)
    stfs f6, 0xe4(r1)
    stfs f4, 0x30c(r1)
    stfs f5, 0x31c(r1)
    stfs f6, 0x32c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xf0(r1)
    bl fn_805F9750
    lfs f2, 0xf0(r1)
    lfs f0, lbl_80884118
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802B8AA4_000015C4
    lfs f3, 0xec(r1)
    lfs f0, lbl_80884100
    fcmpo cr0, f3, f0
    ble lbl_fn_802B8AA4_000015B4
    lfs f0, lbl_80884130
    b lbl_fn_802B8AA4_000015B8
lbl_fn_802B8AA4_000015B4:
    lfs f0, lbl_80884134
lbl_fn_802B8AA4_000015B8:
    fneg f0, f0
    stfs f0, 0xf4(r1)
    b lbl_fn_802B8AA4_000015D8
lbl_fn_802B8AA4_000015C4:
    lfs f1, 0xec(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0xf4(r1)
lbl_fn_802B8AA4_000015D8:
    lfs f2, lbl_80884100
    addi r3, r1, 0xf4
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x1b4
    stfs f2, 0xfc(r1)
    stfs f2, 0x174(r1)
    frsp f2, f2
    psq_st f1, 0x0(r30), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x1bc(r1)
    b lbl_fn_802B8AA4_00001618
lbl_fn_802B8AA4_00001604:
    psq_l f1, 0x534(r31), 0, 0
    addi r3, r1, 0x1b4
    lfs f2, 0x53c(r31)
    stfs f2, 0x1bc(r1)
    psq_st f1, 0x0(r3), 0, 0
lbl_fn_802B8AA4_00001618:
    lwz r0, 0x58c(r31)
    cmpwi r0, 0xb
    bne lbl_fn_802B8AA4_00001628
    lfs f29, lbl_80884138
lbl_fn_802B8AA4_00001628:
    addi r3, r31, 0x7d4
    bl fn_8012DB04
    fmuls f29, f29, f1
    b lbl_fn_802B8AA4_0000209C
lbl_fn_802B8AA4_00001638:
    lwz r0, 0x560(r31)
    cmpwi r0, 0x4
    bne lbl_fn_802B8AA4_00002090
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x9
    beq lbl_fn_802B8AA4_0000165C
    cmpwi r0, 0xa
    beq lbl_fn_802B8AA4_00001D00
    b lbl_fn_802B8AA4_00002080
lbl_fn_802B8AA4_0000165C:
    lfs f2, 0x14e0(r31)
    addi r3, r31, 0x14d8
    lfs f0, lbl_80884118
    addi r29, r1, 0x154
    fabs f3, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    frsp f3, f3
    stfs f2, 0x15c(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_802B8AA4_000016AC
    lfs f3, 0x154(r1)
    lfs f0, lbl_80884100
    fcmpo cr0, f3, f0
    ble lbl_fn_802B8AA4_000016A0
    lfs f0, lbl_80884130
    b lbl_fn_802B8AA4_000016A4
lbl_fn_802B8AA4_000016A0:
    lfs f0, lbl_80884134
lbl_fn_802B8AA4_000016A4:
    stfs f0, 0xb0(r1)
    b lbl_fn_802B8AA4_000016C0
lbl_fn_802B8AA4_000016AC:
    frsp f2, f2
    lfs f1, 0x154(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0xb0(r1)
lbl_fn_802B8AA4_000016C0:
    lfs f0, 0xb0(r1)
    addi r3, r1, 0x260
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80884100
    addi r4, r1, 0xa0
    lfs f27, 0x268(r1)
    mr r5, r4
    lfs f28, 0x264(r1)
    addi r3, r1, 0x290
    lfs f13, 0x260(r1)
    lfs f12, 0x278(r1)
    lfs f11, 0x274(r1)
    lfs f10, 0x270(r1)
    lfs f9, 0x288(r1)
    lfs f8, 0x284(r1)
    lfs f7, 0x280(r1)
    lfs f6, 0x28c(r1)
    lfs f5, 0x27c(r1)
    lfs f4, 0x26c(r1)
    lfs f0, lbl_8088411C
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x15c(r1)
    stfs f3, 0x2c0(r1)
    stfs f3, 0x2c4(r1)
    stfs f3, 0x2c8(r1)
    stfs f0, 0x2cc(r1)
    stfs f13, 0x70(r1)
    stfs f28, 0x74(r1)
    stfs f27, 0x78(r1)
    stfs f13, 0x290(r1)
    stfs f28, 0x294(r1)
    stfs f27, 0x298(r1)
    stfs f10, 0x7c(r1)
    stfs f11, 0x80(r1)
    stfs f12, 0x84(r1)
    stfs f10, 0x2a0(r1)
    stfs f11, 0x2a4(r1)
    stfs f12, 0x2a8(r1)
    stfs f7, 0x88(r1)
    stfs f8, 0x8c(r1)
    stfs f9, 0x90(r1)
    stfs f7, 0x2b0(r1)
    stfs f8, 0x2b4(r1)
    stfs f9, 0x2b8(r1)
    stfs f4, 0x94(r1)
    stfs f5, 0x98(r1)
    stfs f6, 0x9c(r1)
    stfs f4, 0x29c(r1)
    stfs f5, 0x2ac(r1)
    stfs f6, 0x2bc(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xa8(r1)
    bl fn_805F9750
    lfs f2, 0xa8(r1)
    lfs f0, lbl_80884118
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802B8AA4_000017DC
    lfs f3, 0xa4(r1)
    lfs f0, lbl_80884100
    fcmpo cr0, f3, f0
    ble lbl_fn_802B8AA4_000017CC
    lfs f0, lbl_80884130
    b lbl_fn_802B8AA4_000017D0
lbl_fn_802B8AA4_000017CC:
    lfs f0, lbl_80884134
lbl_fn_802B8AA4_000017D0:
    fneg f0, f0
    stfs f0, 0xac(r1)
    b lbl_fn_802B8AA4_000017F0
lbl_fn_802B8AA4_000017DC:
    lfs f1, 0xa4(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0xac(r1)
lbl_fn_802B8AA4_000017F0:
    lfs f3, lbl_80884100
    addi r3, r1, 0xac
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x1b4
    fmr f2, f3
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x15c(r1)
    frsp f2, f2
    stfs f3, 0xb4(r1)
    stfs f2, 0x1bc(r1)
    lwz r0, 0x14bc(r31)
    psq_st f1, 0x0(r29), 0, 0
    cmpwi r0, 0x2
    blt lbl_fn_802B8AA4_000018BC
    lfs f4, 0x568(r31)
    addi r3, r1, 0x340
    lfs f0, lbl_8088413C
    li r4, 0x79
    stfs f3, 0x19c(r1)
    fmuls f0, f0, f4
    stfs f3, 0x1a0(r1)
    stfs f0, 0x1a4(r1)
    lfs f1, 0x538(r31)
    bl fn_805F8E70
    addi r4, r1, 0x19c
    addi r3, r1, 0x340
    mr r5, r4
    bl fn_805F93C0
    lwz r3, lbl_8087EFA8
    lfs f3, 0x400(r31)
    lfs f0, 0x3a4(r3)
    lfs f7, 0x1a4(r1)
    fmuls f8, f0, f3
    lfs f6, 0x1a0(r1)
    lfs f5, 0x19c(r1)
    lfs f4, 0x528(r31)
    fmuls f8, f8, f31
    lfs f3, 0x52c(r31)
    lfs f0, 0x530(r31)
    fmuls f7, f7, f8
    fmuls f6, f6, f8
    fmuls f5, f5, f8
    stfs f7, 0x150(r1)
    fadds f0, f0, f7
    fadds f3, f3, f6
    stfs f5, 0x148(r1)
    fadds f4, f4, f5
    stfs f6, 0x14c(r1)
    stfs f4, 0x528(r31)
    stfs f3, 0x52c(r31)
    stfs f0, 0x530(r31)
lbl_fn_802B8AA4_000018BC:
    lwz r3, 0x14bc(r31)
    stfs f31, 0x2e8(r31)
    cmpwi r3, 0x0
    bne lbl_fn_802B8AA4_00001A9C
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_80884140
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_802B8AA4_0000209C
    addi r0, r3, 0x1
    stw r0, 0x14bc(r31)
    lwz r3, 0x14e8(r31)
    bl fn_80219E6C
    mr r29, r3
    lwz r3, lbl_8087F048
    bl fn_800F8548
    mr r8, r3
    lwz r3, lbl_8087F048
    lfs f1, lbl_80884100
    mr r6, r31
    mr r7, r29
    li r4, 0x0
    li r5, 0x0
    li r9, 0x1e
    li r10, -0x1
    bl fn_800F8C6C
    lwz r0, 0x1514(r31)
    cmpwi r0, 0x0
    bne lbl_fn_802B8AA4_00001950
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x370(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x374(r1)
    stw r0, 0x378(r1)
    b lbl_fn_802B8AA4_0000196C
lbl_fn_802B8AA4_00001950:
    lis r5, lbl_8078639C@ha
    lwzu r4, lbl_8078639C@l(r5)
    stw r4, 0x370(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x374(r1)
    stw r0, 0x378(r1)
lbl_fn_802B8AA4_0000196C:
    lwz r5, 0x370(r1)
    addi r3, r1, 0x13c
    lwz r4, 0x374(r1)
    lwz r0, 0x378(r1)
    stw r5, 0x13c(r1)
    stw r4, 0x140(r1)
    stw r0, 0x144(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_802B8AA4_0000209C
    lwz r3, lbl_8087F4A0
    cmpwi r3, 0x0
    beq lbl_fn_802B8AA4_000019B4
    li r4, 0x41b
    li r5, 0x1
    bl fn_803EEE10
    mr r30, r3
    b lbl_fn_802B8AA4_000019B8
lbl_fn_802B8AA4_000019B4:
    li r30, 0x0
lbl_fn_802B8AA4_000019B8:
    cmpwi r30, 0x0
    beq lbl_fn_802B8AA4_0000209C
    lwz r12, 0x0(r30)
    mr r4, r30
    addi r3, r1, 0x190
    lwz r12, 0x54(r12)
    mtctr r12
    bctrl
    lfs f0, 0x70(r30)
    mr r4, r31
    stfs f0, 0x194(r1)
    li r5, 0x0
    lwz r3, lbl_8087F3C0
    li r6, 0x1
    bl fn_80239DAC
    mr r3, r31
    li r4, 0x0
    bl fn_80232B7C
    li r0, 0x0
    stw r0, 0x8(r1)
    li r3, -0x1
    lfs f1, lbl_8088411C
    stw r3, 0xc(r1)
    li r0, 0x1
    addi r8, r1, 0x190
    li r5, -0x1
    stw r0, 0x10(r1)
    li r6, 0x0
    li r7, 0x0
    li r9, 0x0
    lwz r3, lbl_8087F3C0
    li r10, 0x0
    lwz r4, 0x1514(r31)
    bl fn_8023A680
    lwz r12, 0x0(r30)
    mr r4, r30
    addi r3, r1, 0x130
    lwz r12, 0x54(r12)
    mtctr r12
    bctrl
    lis r4, lbl_8074681C@ha
    lfs f1, lbl_80884144
    addi r4, r4, lbl_8074681C@l
    addi r3, r1, 0x18
    addi r4, r4, 0xd1
    addi r5, r1, 0x130
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    lfs f1, lbl_80884148
    addi r3, r1, 0x18
    li r4, 0x1
    bl fn_800CB6B0
    addi r3, r1, 0x18
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_802B8AA4_0000209C
lbl_fn_802B8AA4_00001A9C:
    cmpwi r3, 0x1
    bne lbl_fn_802B8AA4_00001BC0
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_8088414C
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_802B8AA4_0000209C
    lwz r5, 0xd1c(r31)
    cmpwi r5, 0x0
    beq lbl_fn_802B8AA4_00001B74
    stw r5, 0x14d4(r31)
    beq lbl_fn_802B8AA4_00001B40
    lfs f5, 0x52c(r5)
    addi r4, r1, 0x64
    lfs f4, 0x52c(r31)
    addi r3, r31, 0x14d8
    lfs f3, 0x528(r5)
    fsubs f5, f5, f4
    lfs f0, 0x528(r31)
    lfs f4, 0x530(r5)
    fsubs f3, f3, f0
    lfs f0, 0x530(r31)
    stfs f5, 0x68(r1)
    fsubs f2, f4, f0
    lfs f0, lbl_80884100
    stfs f3, 0x64(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x6c(r1)
    stfs f2, 0x14e0(r31)
    stfs f0, 0x14dc(r31)
    bl fn_805F9920
    fabs f3, f1
    lfs f0, lbl_80884118
    frsp f3, f3
    fcmpo cr0, f3, f0
    blt lbl_fn_802B8AA4_00001B74
    addi r3, r31, 0x14d8
    mr r4, r3
    bl fn_805F98D0
    b lbl_fn_802B8AA4_00001B74
lbl_fn_802B8AA4_00001B40:
    lfs f3, lbl_80884100
    addi r3, r1, 0x230
    lfs f0, lbl_8088411C
    li r4, 0x79
    lfs f1, 0x538(r31)
    stfs f3, 0x14d8(r31)
    stfs f3, 0x14dc(r31)
    stfs f0, 0x14e0(r31)
    bl fn_805F8E70
    addi r4, r31, 0x14d8
    addi r3, r1, 0x230
    mr r5, r4
    bl fn_805F93C0
lbl_fn_802B8AA4_00001B74:
    lwz r0, 0x14d4(r31)
    cmpwi r0, 0x0
    beq lbl_fn_802B8AA4_00001BB4
    lfs f1, lbl_80884100
    addi r3, r31, 0xb0
    lfs f2, lbl_80884150
    li r4, 0x0
    li r5, 0x15d
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    lwz r3, 0x14bc(r31)
    addi r0, r3, 0x1
    stw r0, 0x14bc(r31)
    b lbl_fn_802B8AA4_0000209C
lbl_fn_802B8AA4_00001BB4:
    li r0, -0x1
    stw r0, 0x14bc(r31)
    b lbl_fn_802B8AA4_0000209C
lbl_fn_802B8AA4_00001BC0:
    cmpwi r3, 0x2
    bne lbl_fn_802B8AA4_00001BF8
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_80884154
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_802B8AA4_0000209C
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r4, 0x14bc(r31)
    stw r3, 0x14c8(r31)
    addi r0, r4, 0x1
    stw r0, 0x14bc(r31)
    b lbl_fn_802B8AA4_0000209C
lbl_fn_802B8AA4_00001BF8:
    cmpwi r3, 0x3
    bne lbl_fn_802B8AA4_00001CB8
    lwz r3, 0x14ec(r31)
    bl fn_80219E6C
    lfs f4, 0x2e4(r31)
    lfs f0, lbl_80884154
    lfs f3, lbl_80884158
    fsubs f4, f4, f0
    lfs f0, lbl_80884100
    fdivs f3, f4, f3
    fcmpo cr0, f3, f0
    ble lbl_fn_802B8AA4_00001C2C
    b lbl_fn_802B8AA4_00001C30
lbl_fn_802B8AA4_00001C2C:
    fmr f3, f0
lbl_fn_802B8AA4_00001C30:
    lfs f4, lbl_8088411C
    fcmpo cr0, f3, f4
    bge lbl_fn_802B8AA4_00001C64
    lfs f4, 0x2e4(r31)
    lfs f0, lbl_80884154
    lfs f3, lbl_80884158
    fsubs f4, f4, f0
    lfs f0, lbl_80884100
    fdivs f4, f4, f3
    fcmpo cr0, f4, f0
    ble lbl_fn_802B8AA4_00001C60
    b lbl_fn_802B8AA4_00001C64
lbl_fn_802B8AA4_00001C60:
    fmr f4, f0
lbl_fn_802B8AA4_00001C64:
    lfs f3, lbl_8088415C
    mr r7, r3
    lfs f0, lbl_80884130
    mr r6, r31
    lwz r3, lbl_8087F048
    li r4, 0x0
    fnmsubs f1, f4, f3, f0
    lwz r8, 0x14c8(r31)
    li r5, 0x0
    li r9, 0x1e
    li r10, -0x1
    bl fn_800F8C6C
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_80884160
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_802B8AA4_0000209C
    lwz r3, 0x14bc(r31)
    addi r0, r3, 0x1
    stw r0, 0x14bc(r31)
    b lbl_fn_802B8AA4_0000209C
lbl_fn_802B8AA4_00001CB8:
    lbz r0, 0x2f4(r31)
    cmpwi r0, 0x0
    bne lbl_fn_802B8AA4_00001CF0
    lfs f27, 0x2e4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f27, f1
    cror eq, gt, eq
    bne lbl_fn_802B8AA4_0000209C
    lwz r0, 0x14cc(r31)
    oris r0, r0, 0x8000
    stw r0, 0x14cc(r31)
    b lbl_fn_802B8AA4_0000209C
lbl_fn_802B8AA4_00001CF0:
    lwz r0, 0x14cc(r31)
    oris r0, r0, 0x8000
    stw r0, 0x14cc(r31)
    b lbl_fn_802B8AA4_0000209C
lbl_fn_802B8AA4_00001D00:
    lfs f2, 0x14e0(r31)
    addi r3, r31, 0x14d8
    lfs f0, lbl_80884118
    addi r29, r1, 0x124
    fabs f3, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    frsp f3, f3
    stfs f2, 0x12c(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_802B8AA4_00001D50
    lfs f3, 0x124(r1)
    lfs f0, lbl_80884100
    fcmpo cr0, f3, f0
    ble lbl_fn_802B8AA4_00001D44
    lfs f0, lbl_80884130
    b lbl_fn_802B8AA4_00001D48
lbl_fn_802B8AA4_00001D44:
    lfs f0, lbl_80884134
lbl_fn_802B8AA4_00001D48:
    stfs f0, 0x5c(r1)
    b lbl_fn_802B8AA4_00001D64
lbl_fn_802B8AA4_00001D50:
    frsp f2, f2
    lfs f1, 0x124(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x5c(r1)
lbl_fn_802B8AA4_00001D64:
    lfs f0, 0x5c(r1)
    addi r3, r1, 0x1c0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80884100
    addi r4, r1, 0x4c
    lfs f28, 0x1c8(r1)
    mr r5, r4
    lfs f27, 0x1c4(r1)
    addi r3, r1, 0x1f0
    lfs f13, 0x1c0(r1)
    lfs f12, 0x1d8(r1)
    lfs f11, 0x1d4(r1)
    lfs f10, 0x1d0(r1)
    lfs f9, 0x1e8(r1)
    lfs f8, 0x1e4(r1)
    lfs f7, 0x1e0(r1)
    lfs f6, 0x1ec(r1)
    lfs f5, 0x1dc(r1)
    lfs f4, 0x1cc(r1)
    lfs f0, lbl_8088411C
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x12c(r1)
    stfs f3, 0x220(r1)
    stfs f3, 0x224(r1)
    stfs f3, 0x228(r1)
    stfs f0, 0x22c(r1)
    stfs f13, 0x1c(r1)
    stfs f27, 0x20(r1)
    stfs f28, 0x24(r1)
    stfs f13, 0x1f0(r1)
    stfs f27, 0x1f4(r1)
    stfs f28, 0x1f8(r1)
    stfs f10, 0x28(r1)
    stfs f11, 0x2c(r1)
    stfs f12, 0x30(r1)
    stfs f10, 0x200(r1)
    stfs f11, 0x204(r1)
    stfs f12, 0x208(r1)
    stfs f7, 0x34(r1)
    stfs f8, 0x38(r1)
    stfs f9, 0x3c(r1)
    stfs f7, 0x210(r1)
    stfs f8, 0x214(r1)
    stfs f9, 0x218(r1)
    stfs f4, 0x40(r1)
    stfs f5, 0x44(r1)
    stfs f6, 0x48(r1)
    stfs f4, 0x1fc(r1)
    stfs f5, 0x20c(r1)
    stfs f6, 0x21c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x54(r1)
    bl fn_805F9750
    lfs f2, 0x54(r1)
    lfs f0, lbl_80884118
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802B8AA4_00001E80
    lfs f3, 0x50(r1)
    lfs f0, lbl_80884100
    fcmpo cr0, f3, f0
    ble lbl_fn_802B8AA4_00001E70
    lfs f0, lbl_80884130
    b lbl_fn_802B8AA4_00001E74
lbl_fn_802B8AA4_00001E70:
    lfs f0, lbl_80884134
lbl_fn_802B8AA4_00001E74:
    fneg f0, f0
    stfs f0, 0x58(r1)
    b lbl_fn_802B8AA4_00001E94
lbl_fn_802B8AA4_00001E80:
    lfs f1, 0x50(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x58(r1)
lbl_fn_802B8AA4_00001E94:
    lfs f0, lbl_80884100
    addi r3, r1, 0x58
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x1b4
    fmr f2, f0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x12c(r1)
    frsp f2, f2
    stfs f0, 0x60(r1)
    stfs f2, 0x1bc(r1)
    lwz r3, 0x14bc(r31)
    psq_st f1, 0x0(r29), 0, 0
    cmpwi r3, 0x0
    stfs f31, 0x2e8(r31)
    bne lbl_fn_802B8AA4_00002054
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_80884154
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_802B8AA4_0000209C
    addi r0, r3, 0x1
    stw r0, 0x14bc(r31)
    lwz r3, 0x14f0(r31)
    bl fn_80219E6C
    lfs f6, lbl_80884100
    lis r4, lbl_8074681C@ha
    lfs f5, lbl_80884164
    addi r4, r4, lbl_8074681C@l
    lfs f4, 0x530(r31)
    mr r30, r3
    lfs f3, 0x52c(r31)
    addi r4, r4, 0xde
    lfs f0, 0x528(r31)
    fadds f4, f4, f6
    fadds f3, f3, f5
    stfs f6, 0x118(r1)
    fadds f0, f0, f6
    addi r3, r31, 0xb0
    stfs f5, 0x11c(r1)
    li r5, 0x0
    stfs f6, 0x120(r1)
    stfs f0, 0x184(r1)
    stfs f3, 0x188(r1)
    stfs f4, 0x18c(r1)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802B8AA4_00001F58
    li r5, 0x0
    b lbl_fn_802B8AA4_00001F64
lbl_fn_802B8AA4_00001F58:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r5, r3, r0
lbl_fn_802B8AA4_00001F64:
    cmpwi r5, 0x0
    beq lbl_fn_802B8AA4_00001F98
    lfs f0, 0x1c(r5)
    addi r4, r1, 0x10c
    lfs f3, 0xc(r5)
    addi r3, r1, 0x184
    lfs f2, 0x2c(r5)
    stfs f3, 0x10c(r1)
    stfs f0, 0x110(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0x114(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x18c(r1)
lbl_fn_802B8AA4_00001F98:
    addi r3, r31, 0x14d8
    lfs f2, 0x14e0(r31)
    psq_l f1, 0x0(r3), 0, 0
    addi r29, r1, 0x178
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x180(r1)
    lwz r5, 0x14d4(r31)
    cmpwi r5, 0x0
    beq lbl_fn_802B8AA4_00002024
    lfs f3, 0x608(r5)
    addi r4, r1, 0x100
    lfs f0, 0x18c(r1)
    mr r3, r29
    lfs f5, 0x604(r5)
    fsubs f2, f3, f0
    lfs f4, 0x188(r1)
    lfs f3, 0x600(r5)
    lfs f0, 0x184(r1)
    fsubs f4, f5, f4
    stfs f2, 0x108(r1)
    fsubs f0, f3, f0
    stfs f4, 0x104(r1)
    stfs f0, 0x100(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x180(r1)
    bl fn_805F9920
    fabs f3, f1
    lfs f0, lbl_80884118
    frsp f3, f3
    fcmpo cr0, f3, f0
    blt lbl_fn_802B8AA4_00002024
    mr r3, r29
    mr r4, r29
    bl fn_805F98D0
lbl_fn_802B8AA4_00002024:
    lwz r3, lbl_8087F048
    mr r4, r31
    lfs f1, lbl_80884100
    mr r5, r30
    lfs f2, lbl_8088411C
    addi r6, r1, 0x184
    addi r7, r1, 0x178
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_800F8574
    b lbl_fn_802B8AA4_0000209C
lbl_fn_802B8AA4_00002054:
    lfs f27, 0x2e4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f27, f1
    cror eq, gt, eq
    bne lbl_fn_802B8AA4_0000209C
    lwz r0, 0x14cc(r31)
    oris r0, r0, 0x8000
    stw r0, 0x14cc(r31)
    b lbl_fn_802B8AA4_0000209C
lbl_fn_802B8AA4_00002080:
    lwz r0, 0x14cc(r31)
    oris r0, r0, 0x8000
    stw r0, 0x14cc(r31)
    b lbl_fn_802B8AA4_0000209C
lbl_fn_802B8AA4_00002090:
    mr r3, r31
    bl fn_805A4258
    b lbl_fn_802B8AA4_000020B8
lbl_fn_802B8AA4_0000209C:
    lfs f0, 0x568(r31)
    fmr f1, f30
    mr r3, r31
    addi r4, r1, 0x1b4
    fmuls f2, f0, f29
    li r5, 0x0
    bl fn_8013CB68
lbl_fn_802B8AA4_000020B8:
    lwz r0, 0x3e4(r1)
    psq_l f31, 0x3d8(r1), 0, 0
    lfd f31, 0x3d0(r1)
    psq_l f30, 0x3c8(r1), 0, 0
    lfd f30, 0x3c0(r1)
    psq_l f29, 0x3b8(r1), 0, 0
    lfd f29, 0x3b0(r1)
    psq_l f28, 0x3a8(r1), 0, 0
    lfd f28, 0x3a0(r1)
    psq_l f27, 0x398(r1), 0, 0
    lfd f27, 0x390(r1)
    lwz r31, 0x38c(r1)
    lwz r30, 0x388(r1)
    lwz r29, 0x384(r1)
    mtlr r0
    addi r1, r1, 0x3e0
    blr
}
