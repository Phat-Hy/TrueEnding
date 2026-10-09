#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_80012054(void);
extern void fn_800128FC(void);
extern void fn_80012934(void);
extern void fn_8005E7F4(void);
extern void fn_80084C24(void);
extern void fn_800A555C(void);
extern void fn_800C31F4(void);
extern void fn_800CB3A0(void);
extern void fn_800D1E9C(void);
extern void fn_800D246C(void);
extern void fn_800D5808(void);
extern void fn_800D59B8(void);
extern void fn_800D9560(void);
extern void fn_800DAA3C(void);
extern void fn_800DBC1C(void);
extern void fn_800DBCC8(void);
extern void fn_80122330(void);
extern void fn_80124C6C(void);
extern void fn_80155DAC(void);
extern void fn_8016EB48(void);
extern void fn_801750FC(void);
extern void fn_801F48C8(void);
extern void fn_80227F78(void);
extern void fn_8022ADD4(void);
extern void fn_8022B114(void);
extern void fn_80370174(void);
extern void fn_80370320(void);
extern void fn_80389838(void);
extern void fn_803EBAC8(void);
extern void fn_80489C98(void);
extern void fn_80686EA4(void);
extern void fn_80695D84(void);

/* External data declarations */
extern u8 lbl_80742E58[];
extern u8 lbl_80742E88[];
extern u8 lbl_80742EA8[];
extern u8 lbl_807C80B0[];
extern u8 lbl_807C80C8[];

/* Small data declarations */
extern u32 lbl_8087DBB8;
extern u32 lbl_8087DBBC;
extern u32 lbl_8087DBC0;
extern u32 lbl_8087DBC4;
extern u32 lbl_8087DBC8;
extern u32 lbl_8087DBCC;
extern u32 lbl_8087DBD0;
extern u32 lbl_8087DBD4;
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EEE0;
extern u32 lbl_8087EF70;
extern u32 lbl_8087EF8C;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087F008;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F430;
extern u32 lbl_8087F498;
extern u32 lbl_8087F540;
extern u32 lbl_80880348;
extern u32 lbl_80883078;
extern u32 lbl_80883084;
extern u32 lbl_80883090;
extern u32 lbl_80883094;
extern u32 lbl_808830B8;
extern u32 lbl_808830BC;
extern u32 lbl_808830C0;
extern u32 lbl_808830C4;
extern u32 lbl_808830C8;
extern u32 lbl_808830CC;

/* Function declarations */
void fn_80228FD8(void);
void fn_802291BC(void);
void fn_80229240(void);
void fn_802292AC(void);
void fn_80229414(void);
void fn_8022960C(void);
void fn_802296BC(void);
void fn_802297AC(void);
void fn_80229AC0(void);
void fn_80229D20(void);
void fn_80229DEC(void);
void fn_80229DF0(void);
void fn_80229F4C(void);
void fn_80229FF0(void);
void fn_8022A054(void);
void fn_8022A618(void);
void fn_8022A930(void);

asm void fn_80228FD8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lwz r28, 0x20(r3)
    mr r31, r3
    li r27, 0x0
    li r30, 0x0
    b lbl_fn_80228FD8_000000E8
lbl_fn_80228FD8_00000028:
    lwz r0, 0x164(r28)
    li r3, 0x1
    add r29, r0, r30
    lwz r0, 0x20(r29)
    cmpwi r0, 0x1
    beq lbl_fn_80228FD8_0000004C
    cmpwi r0, 0x7
    beq lbl_fn_80228FD8_0000004C
    li r3, 0x0
lbl_fn_80228FD8_0000004C:
    cmpwi r3, 0x0
    beq lbl_fn_80228FD8_000000E0
    mr r3, r29
    bl fn_800128FC
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_80228FD8_00000080
    mr r3, r29
    bl fn_800128FC
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8016EB48
lbl_fn_80228FD8_00000080:
    mr r3, r29
    bl fn_800128FC
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 25
    beq lbl_fn_80228FD8_000000A4
    mr r3, r29
    bl fn_800128FC
    li r4, 0x0
    bl fn_80155DAC
lbl_fn_80228FD8_000000A4:
    mr r3, r29
    bl fn_800128FC
    lwz r0, 0x1208(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80228FD8_000000C4
    mr r3, r29
    bl fn_800128FC
    bl fn_801750FC
lbl_fn_80228FD8_000000C4:
    lfs f1, lbl_80883090
    mr r3, r29
    lfs f2, lbl_80883094
    li r4, 0x0
    li r5, 0x1
    li r6, 0x14
    bl fn_80012054
lbl_fn_80228FD8_000000E0:
    addi r27, r27, 0x1
    addi r30, r30, 0x1c0
lbl_fn_80228FD8_000000E8:
    lwz r0, 0x168(r28)
    cmpw r27, r0
    blt lbl_fn_80228FD8_00000028
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80228FD8_0000013C
    li r4, 0x3
    bl fn_80370174
    stw r3, 0x118(r31)
    li r4, 0x3
    li r5, 0x1
    li r6, 0x0
    lwz r3, lbl_8087F430
    bl fn_80370320
    lwz r3, lbl_8087F430
    addi r3, r3, 0x6c
    lwz r0, 0x7fc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80228FD8_0000013C
    li r4, 0x0
    bl fn_80389838
lbl_fn_80228FD8_0000013C:
    lwz r3, lbl_8087F008
    li r4, 0x0
    bl fn_800DAA3C
    lwz r3, lbl_8087EF8C
    li r4, 0x11
    li r5, 0x0
    li r0, 0x1
    stw r4, 0x778(r3)
    addi r11, r1, 0x20
    stw r5, 0x150(r31)
    lwz r4, lbl_8087EFA8
    lwz r3, 0xd4(r4)
    stw r3, 0x154(r31)
    lwz r3, 0xd8(r4)
    stw r3, 0x158(r31)
    lwz r3, 0xdc(r4)
    stw r3, 0x15c(r31)
    lwz r3, 0xe0(r4)
    stw r3, 0x160(r31)
    lfs f0, 0xe4(r4)
    stfs f0, 0x164(r31)
    lfs f0, 0xe8(r4)
    stfs f0, 0x168(r31)
    lfs f0, 0xec(r4)
    stfs f0, 0x16c(r31)
    lfs f0, 0xf0(r4)
    stfs f0, 0x170(r31)
    lwz r3, 0xf4(r4)
    stw r3, 0x174(r31)
    lwz r3, 0xf8(r4)
    stw r3, 0x178(r31)
    lfs f0, 0xfc(r4)
    stfs f0, 0x17c(r31)
    lfs f0, 0x100(r4)
    stfs f0, 0x180(r31)
    stb r5, 0x198(r31)
    stb r0, 0x199(r31)
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_802291BC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r4, lbl_8087F008
    lwz r4, 0xa4(r4)
    cmpwi r4, 0x0
    bne lbl_fn_802291BC_00000210
    li r3, 0x0
    b lbl_fn_802291BC_00000254
lbl_fn_802291BC_00000210:
    lwz r5, 0x10c(r3)
    lwz r0, 0x38(r5)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_802291BC_00000250
    cmpwi r4, -0x1
    bgt lbl_fn_802291BC_00000250
    lfs f0, lbl_80883090
    li r4, 0x0
    stfs f0, 0x104(r5)
    lwz r3, 0x10c(r3)
    bl fn_800D246C
    lwz r3, 0x10c(r31)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
lbl_fn_802291BC_00000250:
    li r3, 0x1
lbl_fn_802291BC_00000254:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80229240(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0xe
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r4, lbl_8087EF8C
    stw r0, 0x778(r4)
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80229240_000002A4
    lwz r5, 0x118(r31)
    li r4, 0x3
    li r6, 0x0
    bl fn_80370320
lbl_fn_80229240_000002A4:
    li r0, -0x1
    stw r0, 0x150(r31)
    mr r3, r31
    li r4, 0x1
    bl fn_802292AC
    li r0, 0x0
    stb r0, 0x199(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802292AC(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    beq lbl_fn_802292AC_00000330
    mr r30, r31
    li r29, 0x0
lbl_fn_802292AC_00000300:
    lwz r3, 0xd8(r30)
    cmpwi r3, 0x0
    beq lbl_fn_802292AC_00000320
    lwz r0, 0x38(r3)
    li r4, 0x1
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    bl fn_800D246C
lbl_fn_802292AC_00000320:
    addi r29, r29, 0x1
    addi r30, r30, 0x10
    cmpwi r29, 0x4
    blt lbl_fn_802292AC_00000300
lbl_fn_802292AC_00000330:
    lwz r8, lbl_8087EEE0
    lis r6, 0x4330
    lis r7, lbl_80742E88@ha
    lis r5, lbl_80742E58@ha
    lwz r4, 0x3c(r8)
    addi r3, r5, lbl_80742E58@l
    lwz r0, 0x40(r8)
    li r30, 0x0
    xoris r4, r4, 0x8000
    stw r4, 0xc(r1)
    xoris r0, r0, 0x8000
    lfd f3, lbl_80742E88@l(r7)
    stw r6, 0x8(r1)
    li r4, 0x0
    lfs f4, 0x4(r3)
    lfd f0, 0x8(r1)
    stw r0, 0x14(r1)
    fsubs f7, f0, f3
    lfs f0, lbl_80742E58@l(r5)
    stw r6, 0x10(r1)
    lfs f1, 0xc(r3)
    fmuls f5, f7, f0
    lfd f2, 0x10(r1)
    fmuls f9, f7, f1
    lfs f0, 0x18(r3)
    fsubs f6, f2, f3
    lfs f3, 0x10(r3)
    fmuls f8, f7, f0
    lfs f2, 0x1c(r3)
    lfs f1, 0x28(r3)
    fmuls f4, f6, f4
    lfs f0, 0x24(r3)
    fmuls f3, f6, f3
    fmuls f2, f6, f2
    stfs f4, 0xd4(r31)
    fmuls f4, f7, f0
    lwz r3, 0x10c(r31)
    fmuls f1, f6, f1
    stfs f5, 0xd0(r31)
    stfs f9, 0xe0(r31)
    lfs f0, lbl_808830B8
    stfs f3, 0xe4(r31)
    stfs f8, 0xf0(r31)
    stfs f2, 0xf4(r31)
    stfs f4, 0x100(r31)
    stfs f1, 0x104(r31)
    stb r30, 0x198(r31)
    stfs f0, 0x104(r3)
    lwz r3, 0x10c(r31)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, 0x10c(r31)
    bl fn_800D246C
    lwz r3, lbl_8087F008
    li r4, 0xa
    bl fn_800DAA3C
    lwz r3, lbl_8087F540
    stw r30, 0x2390(r3)
    stw r30, 0x110(r31)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80229414(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x4
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    lwz r3, lbl_8087EF70
    bl fn_800A555C
    cmpwi r3, 0x0
    bne lbl_fn_80229414_00000480
    lwz r3, lbl_8087F540
    lwz r0, 0x2448(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80229414_00000568
lbl_fn_80229414_00000480:
    lwz r0, 0x110(r31)
    cmpwi r0, 0x1
    bne lbl_fn_80229414_000004E8
    lwz r3, lbl_8087F008
    lwz r0, 0xa4(r3)
    cmpwi r0, -0x1
    bgt lbl_fn_80229414_000004E8
    bl fn_800DBCC8
    cmpwi r3, 0x0
    beq lbl_fn_80229414_000004C4
    lwz r3, lbl_8087F540
    bl fn_80489C98
    lwz r3, lbl_8087F008
    bl fn_800DBC1C
    li r0, 0x3
    stw r0, 0x110(r31)
    b lbl_fn_80229414_000004E8
lbl_fn_80229414_000004C4:
    lwz r3, lbl_8087F540
    bl fn_80489C98
    lwz r3, lbl_8087F008
    bl fn_800DBC1C
    li r3, 0x2
    li r0, 0x1
    stw r3, 0x110(r31)
    stw r3, 0x114(r31)
    stb r0, 0x198(r31)
lbl_fn_80229414_000004E8:
    lwz r0, 0x110(r31)
    cmpwi r0, 0x3
    bne lbl_fn_80229414_00000568
    lwz r4, lbl_80883078
    addi r3, r1, 0x8
    lfs f1, lbl_80883090
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    mr r3, r31
    li r4, 0x0
    bl fn_802292AC
    mr r30, r31
    li r29, 0x0
lbl_fn_80229414_0000052C:
    lwz r3, 0xd8(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80229414_00000540
    addi r4, r31, 0x184
    bl fn_80227F78
lbl_fn_80229414_00000540:
    addi r29, r29, 0x1
    addi r30, r30, 0x10
    cmpwi r29, 0x4
    blt lbl_fn_80229414_0000052C
    lwz r3, lbl_8087F498
    cmpwi r3, 0x0
    beq lbl_fn_80229414_00000568
    li r4, 0xf
    li r5, 0x1
    bl fn_803EBAC8
lbl_fn_80229414_00000568:
    lwz r0, 0x110(r31)
    cmpwi r0, 0x1
    bne lbl_fn_80229414_000005B4
    lwz r3, lbl_8087F008
    lwz r0, 0xa4(r3)
    cmpwi r0, -0x1
    bgt lbl_fn_80229414_000005B4
    bl fn_800DBCC8
    cmpwi r3, 0x0
    beq lbl_fn_80229414_000005B4
    lwz r3, lbl_8087F540
    bl fn_80489C98
    lwz r3, lbl_8087F008
    bl fn_800DBC1C
    li r3, 0x2
    li r0, 0x1
    stw r3, 0x110(r31)
    stw r3, 0x114(r31)
    stb r0, 0x198(r31)
lbl_fn_80229414_000005B4:
    lwz r0, 0x110(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80229414_000005E4
    lwz r3, lbl_8087F540
    lwz r3, 0x70(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80229414_000005E4
    lwz r0, 0x194(r3)
    cmpwi r0, 0xa
    bne lbl_fn_80229414_000005E4
    li r0, 0x1
    stw r0, 0x110(r31)
lbl_fn_80229414_000005E4:
    lwz r0, 0x110(r31)
    cmpwi r0, 0x2
    bne lbl_fn_80229414_00000618
    lwz r0, 0x114(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80229414_00000604
    li r0, 0x3
    stw r0, 0x110(r31)
lbl_fn_80229414_00000604:
    lwz r3, 0x114(r31)
    cmpwi r3, 0x0
    ble lbl_fn_80229414_00000618
    subi r0, r3, 0x1
    stw r0, 0x114(r31)
lbl_fn_80229414_00000618:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8022960C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r27, r3
    mr r28, r4
    beq lbl_fn_8022960C_00000664
    mr r3, r28
    bl fn_80012934
    cmpwi r3, 0x0
    bne lbl_fn_8022960C_0000066C
lbl_fn_8022960C_00000664:
    li r3, 0x0
    b lbl_fn_8022960C_000006D0
lbl_fn_8022960C_0000066C:
    mr r30, r27
    li r29, 0x0
    b lbl_fn_8022960C_000006C0
lbl_fn_8022960C_00000678:
    lwz r3, 0x50(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8022960C_000006B8
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_8022960C_000006B8
    lwz r31, 0x1428(r3)
    mr r3, r28
    bl fn_80012934
    cmplw r31, r3
    bne lbl_fn_8022960C_000006B8
    slwi r0, r29, 3
    add r3, r27, r0
    lwz r3, 0x50(r3)
    b lbl_fn_8022960C_000006D0
lbl_fn_8022960C_000006B8:
    addi r30, r30, 0x8
    addi r29, r29, 0x1
lbl_fn_8022960C_000006C0:
    lwz r0, 0x48(r27)
    cmpw r29, r0
    blt lbl_fn_8022960C_00000678
    li r3, 0x0
lbl_fn_8022960C_000006D0:
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_802296BC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    mr r29, r3
    mr r31, r29
    b lbl_fn_802296BC_00000754
lbl_fn_802296BC_0000070C:
    lwz r3, 0x50(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802296BC_0000074C
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_802296BC_00000744
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x50(r31)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    b lbl_fn_802296BC_0000074C
lbl_fn_802296BC_00000744:
    li r3, 0x0
    b lbl_fn_802296BC_000007B8
lbl_fn_802296BC_0000074C:
    addi r31, r31, 0x8
    addi r30, r30, 0x1
lbl_fn_802296BC_00000754:
    lwz r0, 0x48(r29)
    cmpw r30, r0
    blt lbl_fn_802296BC_0000070C
    lwz r3, 0x10c(r29)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_802296BC_0000077C
    li r3, 0x0
    b lbl_fn_802296BC_000007B8
lbl_fn_802296BC_0000077C:
    addi r3, r29, 0x120
    bl fn_800D59B8
    cmpwi r3, 0x0
    beq lbl_fn_802296BC_00000794
    li r3, 0x0
    b lbl_fn_802296BC_000007B8
lbl_fn_802296BC_00000794:
    lwz r4, 0x10c(r29)
    li r3, 0x1
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x10c(r29)
    lwz r0, 0xfc(r4)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r4)
lbl_fn_802296BC_000007B8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_802297AC(void)
{
    nofralloc
    stwu r1, -0xe0(r1)
    mflr r0
    stw r0, 0xe4(r1)
    stw r31, 0xdc(r1)
    mr r31, r3
    stw r30, 0xd8(r1)
    stw r29, 0xd4(r1)
    lwz r4, 0x10c(r3)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_802297AC_00000834
    lfs f3, 0x104(r4)
    lfs f0, lbl_80883094
    fcmpo cr0, f3, f0
    bge lbl_fn_802297AC_00000834
    lfs f3, 0x100(r4)
    lfs f0, lbl_80883090
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_802297AC_00000834
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
lbl_fn_802297AC_00000834:
    lwz r3, lbl_8087F0A8
    cmpwi r3, 0x0
    beq lbl_fn_802297AC_0000089C
    addi r4, r3, 0x48c
    addi r3, r1, 0x28
    li r5, 0x0
    bl fn_80124C6C
    addi r29, r1, 0x28
    lis r30, lbl_80742EA8@ha
    addi r5, r1, 0x18
    psq_l f1, 0x0(r29), 0, 0
    psq_l f2, 0x8(r29), 0, 0
    addi r30, r30, lbl_80742EA8@l
    psq_st f1, 0x0(r5), 0, 0
    addi r4, r30, 0x53
    psq_st f2, 0x8(r5), 0, 0
    lwz r3, 0x10c(r31)
    bl fn_801F48C8
    addi r5, r1, 0x8
    psq_l f1, 0x0(r29), 0, 0
    psq_l f2, 0x8(r29), 0, 0
    addi r4, r30, 0x59
    psq_st f1, 0x0(r5), 0, 0
    psq_st f2, 0x8(r5), 0, 0
    lwz r3, 0x10c(r31)
    bl fn_801F48C8
lbl_fn_802297AC_0000089C:
    mr r3, r31
    bl fn_80229414
    lwz r3, lbl_8087F008
    bl fn_800D9560
    lwz r3, lbl_8087F0A8
    cmpwi r3, 0x0
    beq lbl_fn_802297AC_000008C4
    addi r3, r3, 0x48c
    li r4, 0x0
    bl fn_80122330
lbl_fn_802297AC_000008C4:
    lwz r3, 0x150(r31)
    cmpwi r3, 0x0
    blt lbl_fn_802297AC_00000ACC
    addi r0, r3, 0x1
    stw r0, 0x150(r31)
    cmpwi r0, 0x1e
    bgt lbl_fn_802297AC_00000ACC
    xoris r3, r0, 0x8000
    lis r0, 0x4330
    lis r4, lbl_80742E88@ha
    stw r3, 0xbc(r1)
    lfd f4, lbl_80742E88@l(r4)
    stw r0, 0xb8(r1)
    lfs f3, lbl_80883084
    lfd f0, 0xb8(r1)
    lfs f9, lbl_80883090
    fsubs f0, f0, f4
    fdivs f0, f0, f3
    fcmpo cr0, f9, f0
    bge lbl_fn_802297AC_00000918
    b lbl_fn_802297AC_0000092C
lbl_fn_802297AC_00000918:
    stw r3, 0xc4(r1)
    stw r0, 0xc0(r1)
    lfd f0, 0xc0(r1)
    fsubs f0, f0, f4
    fdivs f9, f0, f3
lbl_fn_802297AC_0000092C:
    lfs f6, 0x164(r31)
    li r3, 0x1
    lfs f3, lbl_8087DBB8
    lfs f8, 0x168(r31)
    fsubs f5, f3, f6
    lfs f0, lbl_8087DBBC
    lfs f7, 0x16c(r31)
    fsubs f4, f0, f8
    lfs f3, lbl_8087DBC0
    fmadds f10, f9, f5, f6
    fsubs f3, f3, f7
    lwz r7, 0x158(r31)
    lwz r6, 0x15c(r31)
    lwz r5, 0x160(r31)
    fmadds f8, f9, f4, f8
    fmadds f7, f9, f3, f7
    lwz r4, 0x174(r31)
    lwz r0, 0x178(r31)
    lfs f6, 0x170(r31)
    lfs f0, lbl_8087DBC4
    lfs f5, 0x17c(r31)
    fsubs f4, f0, f6
    lfs f3, lbl_8087DBC8
    lfs f0, lbl_8087DBCC
    lwz r8, lbl_8087EFA8
    fsubs f3, f3, f5
    fmadds f4, f9, f4, f6
    stw r3, 0xd4(r8)
    fsubs f0, f0, f5
    fmadds f3, f9, f3, f5
    stw r7, 0xd8(r8)
    fmadds f0, f9, f0, f5
    stw r6, 0xdc(r8)
    stw r5, 0xe0(r8)
    stfs f10, 0xe4(r8)
    stfs f8, 0xe8(r8)
    stfs f7, 0xec(r8)
    stfs f4, 0xf0(r8)
    stw r4, 0xf4(r8)
    stw r0, 0xf8(r8)
    stfs f3, 0xfc(r8)
    stfs f0, 0x100(r8)
    stw r7, 0x3c(r1)
    lwz r8, lbl_8087EFA8
    stw r6, 0x40(r1)
    stw r5, 0x44(r1)
    stw r4, 0x58(r1)
    stw r0, 0x5c(r1)
    stw r3, 0x38(r1)
    stfs f10, 0x48(r1)
    stfs f8, 0x4c(r1)
    stfs f7, 0x50(r1)
    stfs f4, 0x54(r1)
    stfs f3, 0x60(r1)
    stfs f0, 0x64(r1)
    addi r7, r1, 0x6c
    psq_l f1, 0x328(r8), 0, 0
    psq_l f2, 0x330(r8), 0, 0
    addi r6, r1, 0x7c
    psq_st f1, 0x0(r7), 0, 0
    addi r5, r1, 0x8c
    psq_l f1, 0x338(r8), 0, 0
    addi r4, r1, 0x9c
    psq_st f2, 0x8(r7), 0, 0
    psq_l f2, 0x340(r8), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    psq_l f1, 0x348(r8), 0, 0
    psq_st f2, 0x8(r6), 0, 0
    psq_l f2, 0x350(r8), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    psq_l f1, 0x358(r8), 0, 0
    psq_st f2, 0x8(r5), 0, 0
    psq_l f2, 0x360(r8), 0, 0
    lwz r0, 0x368(r8)
    psq_st f1, 0x0(r4), 0, 0
    lfs f0, lbl_8087DBD4
    lfs f3, lbl_8087DBD0
    psq_st f2, 0x8(r4), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    fsubs f0, f0, f3
    stw r3, 0x324(r8)
    psq_l f2, 0x8(r7), 0, 0
    psq_st f1, 0x328(r8), 0, 0
    fmadds f0, f9, f0, f3
    psq_l f1, 0x0(r6), 0, 0
    psq_st f2, 0x330(r8), 0, 0
    psq_l f2, 0x8(r6), 0, 0
    psq_st f1, 0x338(r8), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    psq_st f2, 0x340(r8), 0, 0
    psq_l f2, 0x8(r5), 0, 0
    psq_st f1, 0x348(r8), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    psq_st f2, 0x350(r8), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    psq_st f1, 0x358(r8), 0, 0
    psq_st f2, 0x360(r8), 0, 0
    stw r0, 0x368(r8)
    stw r3, 0x36c(r8)
    stw r0, 0xac(r1)
    stw r3, 0x68(r1)
    stw r3, 0xb0(r1)
    stfs f0, 0xb4(r1)
    stfs f0, 0x370(r8)
lbl_fn_802297AC_00000ACC:
    lwz r0, 0xe4(r1)
    lwz r31, 0xdc(r1)
    lwz r30, 0xd8(r1)
    lwz r29, 0xd4(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}

asm void fn_80229AC0(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    lis r0, 0x4330
    stfd f31, 0x50(r1)
    psq_st f31, 0x58(r1), 0, 0
    stfd f30, 0x40(r1)
    psq_st f30, 0x48(r1), 0, 0
    stw r31, 0x3c(r1)
    mr r31, r3
    stw r30, 0x38(r1)
    stw r29, 0x34(r1)
    stw r28, 0x30(r1)
    lwz r4, 0x150(r3)
    stw r0, 0x20(r1)
    cmpwi r4, 0x0
    stw r0, 0x28(r1)
    blt lbl_fn_80229AC0_00000D18
    lwz r5, lbl_8087EEE0
    xoris r0, r4, 0x8000
    lis r3, lbl_80742E88@ha
    lfs f1, lbl_80883084
    lwz r4, 0x3c(r5)
    lfd f3, lbl_80742E88@l(r3)
    xoris r4, r4, 0x8000
    stw r4, 0x24(r1)
    lwz r3, 0x40(r5)
    lfd f0, 0x20(r1)
    xoris r3, r3, 0x8000
    stw r3, 0x2c(r1)
    fsubs f31, f0, f3
    lfs f4, lbl_80883090
    stw r0, 0x24(r1)
    lfd f2, 0x28(r1)
    lfd f0, 0x20(r1)
    fsubs f30, f2, f3
    fsubs f0, f0, f3
    fdivs f0, f0, f1
    fcmpo cr0, f4, f0
    bge lbl_fn_80229AC0_00000B8C
    b lbl_fn_80229AC0_00000B9C
lbl_fn_80229AC0_00000B8C:
    stw r0, 0x2c(r1)
    lfd f0, 0x28(r1)
    fsubs f0, f0, f3
    fdivs f4, f0, f1
lbl_fn_80229AC0_00000B9C:
    lfs f2, lbl_80883094
    lfs f1, lbl_808830BC
    lfs f0, lbl_80883090
    fmuls f1, f1, f4
    stfs f2, 0x10(r1)
    fcmpo cr0, f2, f0
    stfs f2, 0x14(r1)
    stfs f2, 0x18(r1)
    stfs f1, 0x1c(r1)
    cror eq, gt, eq
    bne lbl_fn_80229AC0_00000BD0
    li r28, 0xff
    b lbl_fn_80229AC0_00000BF8
lbl_fn_80229AC0_00000BD0:
    fcmpo cr0, f2, f2
    cror eq, lt, eq
    bne lbl_fn_80229AC0_00000BE4
    li r3, 0x0
    b lbl_fn_80229AC0_00000BF4
lbl_fn_80229AC0_00000BE4:
    lfs f1, lbl_808830C4
    lfs f0, lbl_808830C0
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_80229AC0_00000BF4:
    mr r28, r3
lbl_fn_80229AC0_00000BF8:
    lfs f2, 0x14(r1)
    lfs f0, lbl_80883090
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_80229AC0_00000C14
    li r29, 0xff
    b lbl_fn_80229AC0_00000C40
lbl_fn_80229AC0_00000C14:
    lfs f0, lbl_80883094
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_80229AC0_00000C2C
    li r3, 0x0
    b lbl_fn_80229AC0_00000C3C
lbl_fn_80229AC0_00000C2C:
    lfs f1, lbl_808830C4
    lfs f0, lbl_808830C0
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_80229AC0_00000C3C:
    mr r29, r3
lbl_fn_80229AC0_00000C40:
    lfs f2, 0x18(r1)
    lfs f0, lbl_80883090
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_80229AC0_00000C5C
    li r30, 0xff
    b lbl_fn_80229AC0_00000C88
lbl_fn_80229AC0_00000C5C:
    lfs f0, lbl_80883094
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_80229AC0_00000C74
    li r3, 0x0
    b lbl_fn_80229AC0_00000C84
lbl_fn_80229AC0_00000C74:
    lfs f1, lbl_808830C4
    lfs f0, lbl_808830C0
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_80229AC0_00000C84:
    mr r30, r3
lbl_fn_80229AC0_00000C88:
    lfs f2, 0x1c(r1)
    lfs f0, lbl_80883090
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_80229AC0_00000CA4
    li r3, 0xff
    b lbl_fn_80229AC0_00000CCC
lbl_fn_80229AC0_00000CA4:
    lfs f0, lbl_80883094
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_80229AC0_00000CBC
    li r3, 0x0
    b lbl_fn_80229AC0_00000CCC
lbl_fn_80229AC0_00000CBC:
    lfs f1, lbl_808830C4
    lfs f0, lbl_808830C0
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_80229AC0_00000CCC:
    lfs f1, lbl_80883094
    slwi r4, r29, 8
    lfs f8, lbl_80883090
    fmr f4, f31
    lfs f5, lbl_808830C8
    fmr f6, f1
    stfs f8, 0x8(r1)
    fmr f7, f1
    slwi r3, r3, 24
    slwi r0, r28, 16
    fsubs f2, f30, f5
    or r0, r3, r0
    or r4, r30, r4
    lwz r3, lbl_8087EEB0
    or r4, r4, r0
    lfs f3, lbl_808830CC
    addi r6, r31, 0x120
    li r5, 0x0
    bl fn_8005E7F4
lbl_fn_80229AC0_00000D18:
    lwz r0, 0x64(r1)
    psq_l f31, 0x58(r1), 0, 0
    lfd f31, 0x50(r1)
    psq_l f30, 0x48(r1), 0, 0
    lfd f30, 0x40(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80229D20(void)
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
    beq lbl_fn_80229D20_00000DF4
    addic. r0, r3, 0x190
    beq lbl_fn_80229D20_00000D9C
    lwz r3, 0x194(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80229D20_00000D90
    beq lbl_fn_80229D20_00000D90
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80229D20_00000D90:
    li r0, 0x0
    stw r0, 0x194(r29)
    stw r0, 0x190(r29)
lbl_fn_80229D20_00000D9C:
    addic. r31, r29, 0x184
    beq lbl_fn_80229D20_00000DCC
    beq lbl_fn_80229D20_00000DCC
    lwz r3, 0x4(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80229D20_00000DC0
    beq lbl_fn_80229D20_00000DC0
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80229D20_00000DC0:
    li r0, 0x0
    stw r0, 0x4(r31)
    stw r0, 0x0(r31)
lbl_fn_80229D20_00000DCC:
    addi r3, r29, 0x120
    li r4, -0x1
    bl fn_800D5808
    mr r3, r29
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r30, 0x0
    ble lbl_fn_80229D20_00000DF4
    mr r3, r29
    bl dtor_80084684
lbl_fn_80229D20_00000DF4:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80229DEC(void)
{
    nofralloc
    blr
}

asm void fn_80229DF0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    li r0, 0x0
    lwz r7, 0x18(r4)
    stw r0, 0x8(r1)
    cmpwi r7, 0x0
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stw r0, 0x1c(r1)
    stw r0, 0x20(r1)
    stw r0, 0x24(r1)
    stw r0, 0x28(r1)
    stw r0, 0x2c(r1)
    beq lbl_fn_80229DF0_00000F1C
    lwz r5, 0xc(r4)
    addi r12, r4, 0x1b8
    li r9, 0x1
    addi r10, r5, 0x28
    mr r11, r10
    b lbl_fn_80229DF0_00000EE4
lbl_fn_80229DF0_00000E6C:
    lwz r8, 0x0(r12)
    addi r0, r8, 0x8
    clrlwi r6, r0, 29
    cntlzw r0, r6
    extrwi r5, r0, 1, 26
    subfic r0, r6, 0x8
    neg r5, r5
    clrlwi r0, r0, 29
    andc r0, r0, r5
    add r6, r8, r0
    b lbl_fn_80229DF0_00000EB4
lbl_fn_80229DF0_00000E98:
    rlwinm. r0, r5, 0, 30, 30
    clrrwi r0, r5, 2
    add r11, r11, r0
    bne lbl_fn_80229DF0_00000EB0
    add r10, r10, r0
    addi r9, r9, 0x1
lbl_fn_80229DF0_00000EB0:
    add r6, r6, r0
lbl_fn_80229DF0_00000EB4:
    cmplw r6, r8
    blt lbl_fn_80229DF0_00000EE0
    lwz r0, 0x4(r12)
    add r0, r8, r0
    cmplw r6, r0
    bge lbl_fn_80229DF0_00000EE0
    cmplw r6, r7
    beq lbl_fn_80229DF0_00000EE0
    lwz r5, 0x4(r6)
    cmplwi r5, 0x7
    bne lbl_fn_80229DF0_00000E98
lbl_fn_80229DF0_00000EE0:
    lwz r12, 0x8(r12)
lbl_fn_80229DF0_00000EE4:
    cmpwi r12, 0x0
    bne lbl_fn_80229DF0_00000E6C
    lwz r7, 0x1ac(r4)
    lwz r5, 0x1b0(r4)
    lwz r0, 0xc(r4)
    subf r6, r11, r7
    subf r4, r10, r7
    stw r11, 0x8(r1)
    stw r9, 0xc(r1)
    stw r6, 0x18(r1)
    stw r5, 0x1c(r1)
    stw r4, 0x24(r1)
    stw r10, 0x28(r1)
    stw r0, 0x2c(r1)
lbl_fn_80229DF0_00000F1C:
    lwz r12, 0x8(r1)
    lwz r11, 0xc(r1)
    lwz r10, 0x10(r1)
    lwz r9, 0x14(r1)
    lwz r8, 0x18(r1)
    lwz r7, 0x1c(r1)
    lwz r6, 0x20(r1)
    lwz r5, 0x24(r1)
    lwz r4, 0x28(r1)
    lwz r0, 0x2c(r1)
    stw r12, 0x0(r3)
    stw r11, 0x4(r3)
    stw r10, 0x8(r3)
    stw r9, 0xc(r3)
    stw r8, 0x10(r3)
    stw r7, 0x14(r3)
    stw r6, 0x18(r3)
    stw r5, 0x1c(r3)
    stw r4, 0x20(r3)
    stw r0, 0x24(r3)
    addi r1, r1, 0x30
    blr
}

asm void fn_80229F4C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r7, lbl_807C80B0@ha
    stw r0, 0x14(r1)
    addi r6, r7, lbl_807C80B0@l
    lwz r0, 0x4(r6)
    cmpwi r0, 0x0
    bne lbl_fn_80229F4C_00000FFC
    lwz r0, lbl_807C80B0@l(r7)
    li r4, -0x1
    lis r3, 0x20
    li r5, 0x4
    cmpwi r0, 0x0
    stw r4, 0xc(r6)
    stw r3, 0x10(r6)
    stw r5, 0x14(r6)
    bne lbl_fn_80229F4C_00000FD0
    lis r3, lbl_807C80C8@ha
    lis r4, 0x5858
    addi r3, r3, lbl_807C80C8@l
    addi r0, r4, 0x5858
    stw r0, lbl_807C80B0@l(r7)
    stw r5, 0x1b4(r3)
lbl_fn_80229F4C_00000FD0:
    lis r3, 0x1
    lis r4, lbl_807C80B0@ha
    subi r0, r3, 0x1
    li r5, 0x1000
    addi r4, r4, lbl_807C80B0@l
    rlwinm. r0, r0, 0, 15, 15
    stw r5, 0x4(r4)
    stw r3, 0x8(r4)
    bne lbl_fn_80229F4C_00000FF8
    b lbl_fn_80229F4C_00000FFC
lbl_fn_80229F4C_00000FF8:
    bl fn_80686EA4
lbl_fn_80229F4C_00000FFC:
    li r0, 0xc
    stw r0, lbl_80880348
    li r3, 0x0
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80229FF0(void)
{
    nofralloc
    li r0, -0x40
    cmplw r4, r0
    bge lbl_fn_80229FF0_00001074
    lwz r6, 0x18(r3)
    cmpwi r6, 0x0
    beq lbl_fn_80229FF0_00001074
    lwz r5, 0xc(r3)
    addi r0, r4, 0x28
    cmplw r5, r0
    ble lbl_fn_80229FF0_0000106C
    addi r4, r3, 0x1b8
lbl_fn_80229FF0_00001044:
    lwz r5, 0x0(r4)
    cmplw r6, r5
    blt lbl_fn_80229FF0_00001060
    lwz r0, 0x4(r4)
    add r0, r5, r0
    cmplw r6, r0
    blt lbl_fn_80229FF0_0000106C
lbl_fn_80229FF0_00001060:
    lwz r4, 0x8(r4)
    cmpwi r4, 0x0
    bne lbl_fn_80229FF0_00001044
lbl_fn_80229FF0_0000106C:
    li r0, -0x1
    stw r0, 0x1c(r3)
lbl_fn_80229FF0_00001074:
    li r3, 0x0
    blr
}

asm void fn_8022A054(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    srwi. r5, r4, 8
    stw r0, 0x34(r1)
    stmw r24, 0x10(r1)
    mr r25, r3
    mr r26, r4
    neg r30, r4
    li r31, 0x0
    bne lbl_fn_8022A054_000010AC
    li r8, 0x0
    b lbl_fn_8022A054_00001108
lbl_fn_8022A054_000010AC:
    cmplwi r5, 0xffff
    ble lbl_fn_8022A054_000010BC
    li r8, 0x1f
    b lbl_fn_8022A054_00001108
lbl_fn_8022A054_000010BC:
    subi r0, r5, 0x100
    rlwinm r6, r0, 16, 28, 28
    slw r5, r5, r6
    subi r0, r5, 0x1000
    rlwinm r7, r0, 16, 29, 29
    slw r5, r5, r7
    subi r0, r5, 0x4000
    add r6, r6, r7
    rlwinm r0, r0, 16, 30, 30
    add r6, r6, r0
    slw r0, r5, r0
    subfic r5, r6, 0xe
    srwi r0, r0, 15
    add r5, r5, r0
    addi r0, r5, 0x7
    srw r0, r4, r0
    slwi r5, r5, 1
    clrlwi r0, r0, 31
    add r8, r5, r0
lbl_fn_8022A054_00001108:
    slwi r0, r8, 2
    add r5, r3, r0
    lwz r7, 0x12c(r5)
    cmpwi r7, 0x0
    beq lbl_fn_8022A054_000011A4
    subi r5, r8, 0x1f
    subfic r0, r8, 0x1f
    nor r0, r5, r0
    li r9, 0x0
    srwi r5, r8, 1
    srawi r6, r0, 31
    addi r0, r5, 0x6
    subfic r0, r0, 0x1f
    andc r0, r0, r6
    slw r6, r4, r0
lbl_fn_8022A054_00001144:
    lwz r0, 0x4(r7)
    clrrwi r0, r0, 2
    subf r0, r4, r0
    cmplw r0, r30
    bge lbl_fn_8022A054_00001168
    cmpwi r0, 0x0
    mr r31, r7
    mr r30, r0
    beq lbl_fn_8022A054_000011A4
lbl_fn_8022A054_00001168:
    lwz r10, 0x14(r7)
    rlwinm r0, r6, 3, 29, 29
    add r5, r7, r0
    cmpwi r10, 0x0
    lwz r7, 0x10(r5)
    beq lbl_fn_8022A054_0000118C
    cmplw r10, r7
    beq lbl_fn_8022A054_0000118C
    mr r9, r10
lbl_fn_8022A054_0000118C:
    cmpwi r7, 0x0
    bne lbl_fn_8022A054_0000119C
    mr r7, r9
    b lbl_fn_8022A054_000011A4
lbl_fn_8022A054_0000119C:
    slwi r6, r6, 1
    b lbl_fn_8022A054_00001144
lbl_fn_8022A054_000011A4:
    cmpwi r7, 0x0
    bne lbl_fn_8022A054_00001260
    cmpwi r31, 0x0
    bne lbl_fn_8022A054_00001260
    li r0, 0x1
    lwz r5, 0x4(r3)
    slw r0, r0, r8
    slwi r6, r0, 1
    neg r0, r6
    or r0, r6, r0
    and. r5, r5, r0
    beq lbl_fn_8022A054_00001260
    neg r0, r5
    and r5, r5, r0
    subi r6, r5, 0x1
    rlwinm r7, r6, 20, 27, 27
    srw r6, r6, r7
    rlwinm r5, r6, 27, 28, 28
    srw r6, r6, r5
    rlwinm r0, r6, 30, 29, 29
    add r7, r7, r5
    srw r6, r6, r0
    rlwinm r5, r6, 31, 30, 30
    add r7, r7, r0
    srw r6, r6, r5
    extrwi r0, r6, 1, 30
    add r7, r7, r5
    add r7, r7, r0
    srw r6, r6, r0
    add r0, r7, r6
    slwi r0, r0, 2
    add r5, r3, r0
    lwz r7, 0x12c(r5)
    b lbl_fn_8022A054_00001260
lbl_fn_8022A054_0000122C:
    lwz r0, 0x4(r7)
    clrrwi r0, r0, 2
    subf r0, r4, r0
    cmplw r0, r30
    bge lbl_fn_8022A054_00001248
    mr r30, r0
    mr r31, r7
lbl_fn_8022A054_00001248:
    lwz r0, 0x10(r7)
    cmpwi r0, 0x0
    beq lbl_fn_8022A054_0000125C
    mr r7, r0
    b lbl_fn_8022A054_00001260
lbl_fn_8022A054_0000125C:
    lwz r7, 0x14(r7)
lbl_fn_8022A054_00001260:
    cmpwi r7, 0x0
    bne lbl_fn_8022A054_0000122C
    cmpwi r31, 0x0
    beq lbl_fn_8022A054_00001628
    lwz r0, 0x8(r3)
    subf r0, r4, r0
    cmplw r30, r0
    bge lbl_fn_8022A054_00001628
    lwz r24, 0x10(r3)
    cmplw r31, r24
    blt lbl_fn_8022A054_00001624
    add r29, r31, r4
    cmplw r31, r29
    bge lbl_fn_8022A054_00001624
    lwz r27, 0xc(r31)
    lwz r28, 0x18(r31)
    cmplw r27, r31
    beq lbl_fn_8022A054_000012C4
    lwz r3, 0x8(r31)
    cmplw r3, r24
    blt lbl_fn_8022A054_000012C0
    stw r27, 0xc(r3)
    stw r3, 0x8(r27)
    b lbl_fn_8022A054_00001328
lbl_fn_8022A054_000012C0:
    bl fn_80686EA4
lbl_fn_8022A054_000012C4:
    lwz r27, 0x14(r31)
    addi r3, r31, 0x14
    cmpwi r27, 0x0
    bne lbl_fn_8022A054_000012F0
    lwz r27, 0x10(r31)
    addi r3, r31, 0x10
    cmpwi r27, 0x0
    beq lbl_fn_8022A054_00001328
    b lbl_fn_8022A054_000012F0
lbl_fn_8022A054_000012E8:
    mr r3, r4
    lwz r27, 0x0(r4)
lbl_fn_8022A054_000012F0:
    lwz r0, 0x14(r27)
    addi r4, r27, 0x14
    cmpwi r0, 0x0
    bne lbl_fn_8022A054_000012E8
    lwz r0, 0x10(r27)
    addi r4, r27, 0x10
    cmpwi r0, 0x0
    bne lbl_fn_8022A054_000012E8
    cmplw r3, r24
    blt lbl_fn_8022A054_00001324
    li r0, 0x0
    stw r0, 0x0(r3)
    b lbl_fn_8022A054_00001328
lbl_fn_8022A054_00001324:
    bl fn_80686EA4
lbl_fn_8022A054_00001328:
    cmpwi r28, 0x0
    beq lbl_fn_8022A054_00001408
    lwz r0, 0x1c(r31)
    slwi r0, r0, 2
    add r3, r25, r0
    lwz r0, 0x12c(r3)
    cmplw r31, r0
    bne lbl_fn_8022A054_00001370
    cmpwi r27, 0x0
    stw r27, 0x12c(r3)
    bne lbl_fn_8022A054_0000139C
    lwz r0, 0x1c(r31)
    li r3, 0x1
    lwz r4, 0x4(r25)
    slw r0, r3, r0
    andc r0, r4, r0
    stw r0, 0x4(r25)
    b lbl_fn_8022A054_0000139C
lbl_fn_8022A054_00001370:
    lwz r0, 0x10(r25)
    cmplw r28, r0
    blt lbl_fn_8022A054_00001398
    lwz r0, 0x10(r28)
    cmplw r0, r31
    bne lbl_fn_8022A054_00001390
    stw r27, 0x10(r28)
    b lbl_fn_8022A054_0000139C
lbl_fn_8022A054_00001390:
    stw r27, 0x14(r28)
    b lbl_fn_8022A054_0000139C
lbl_fn_8022A054_00001398:
    bl fn_80686EA4
lbl_fn_8022A054_0000139C:
    cmpwi r27, 0x0
    beq lbl_fn_8022A054_00001408
    lwz r0, 0x10(r25)
    cmplw r27, r0
    blt lbl_fn_8022A054_00001404
    stw r28, 0x18(r27)
    lwz r3, 0x10(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8022A054_000013DC
    lwz r0, 0x10(r25)
    cmplw r3, r0
    blt lbl_fn_8022A054_000013D8
    stw r3, 0x10(r27)
    stw r27, 0x18(r3)
    b lbl_fn_8022A054_000013DC
lbl_fn_8022A054_000013D8:
    bl fn_80686EA4
lbl_fn_8022A054_000013DC:
    lwz r3, 0x14(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8022A054_00001408
    lwz r0, 0x10(r25)
    cmplw r3, r0
    blt lbl_fn_8022A054_00001400
    stw r3, 0x14(r27)
    stw r27, 0x18(r3)
    b lbl_fn_8022A054_00001408
lbl_fn_8022A054_00001400:
    bl fn_80686EA4
lbl_fn_8022A054_00001404:
    bl fn_80686EA4
lbl_fn_8022A054_00001408:
    cmplwi r30, 0x10
    bge lbl_fn_8022A054_00001430
    add r3, r30, r26
    ori r0, r3, 0x3
    stw r0, 0x4(r31)
    add r3, r31, r3
    lwz r0, 0x4(r3)
    ori r0, r0, 0x1
    stw r0, 0x4(r3)
    b lbl_fn_8022A054_0000161C
lbl_fn_8022A054_00001430:
    ori r0, r26, 0x3
    stw r0, 0x4(r31)
    ori r0, r30, 0x1
    srwi r4, r30, 3
    stw r0, 0x4(r29)
    cmplwi r4, 0x20
    stwx r30, r29, r30
    bge lbl_fn_8022A054_000014B0
    li r0, 0x1
    lwz r3, 0x0(r25)
    slw r5, r0, r4
    slwi r4, r4, 3
    add r4, r25, r4
    addi r24, r4, 0x24
    and. r0, r3, r5
    mr r26, r24
    bne lbl_fn_8022A054_00001480
    or r0, r3, r5
    stw r0, 0x0(r25)
    b lbl_fn_8022A054_0000149C
lbl_fn_8022A054_00001480:
    lwz r3, 0x8(r24)
    lwz r0, 0x10(r25)
    cmplw r3, r0
    blt lbl_fn_8022A054_00001498
    mr r26, r3
    b lbl_fn_8022A054_0000149C
lbl_fn_8022A054_00001498:
    bl fn_80686EA4
lbl_fn_8022A054_0000149C:
    stw r29, 0x8(r24)
    stw r29, 0xc(r26)
    stw r26, 0x8(r29)
    stw r24, 0xc(r29)
    b lbl_fn_8022A054_0000161C
lbl_fn_8022A054_000014B0:
    srwi. r3, r30, 8
    bne lbl_fn_8022A054_000014C0
    li r7, 0x0
    b lbl_fn_8022A054_0000151C
lbl_fn_8022A054_000014C0:
    cmplwi r3, 0xffff
    ble lbl_fn_8022A054_000014D0
    li r7, 0x1f
    b lbl_fn_8022A054_0000151C
lbl_fn_8022A054_000014D0:
    subi r0, r3, 0x100
    rlwinm r4, r0, 16, 28, 28
    slw r3, r3, r4
    subi r0, r3, 0x1000
    rlwinm r5, r0, 16, 29, 29
    slw r3, r3, r5
    subi r0, r3, 0x4000
    add r4, r4, r5
    rlwinm r0, r0, 16, 30, 30
    add r4, r4, r0
    slw r0, r3, r0
    subfic r3, r4, 0xe
    srwi r0, r0, 15
    add r3, r3, r0
    addi r0, r3, 0x7
    srw r0, r30, r0
    slwi r3, r3, 1
    clrlwi r0, r0, 31
    add r7, r3, r0
lbl_fn_8022A054_0000151C:
    stw r7, 0x1c(r29)
    li r3, 0x0
    li r0, 0x1
    slwi r4, r7, 2
    stw r3, 0x14(r29)
    add r4, r25, r4
    slw r5, r0, r7
    stw r3, 0x10(r29)
    addi r6, r4, 0x12c
    lwz r3, 0x4(r25)
    and. r0, r3, r5
    bne lbl_fn_8022A054_00001568
    or r0, r3, r5
    stw r0, 0x4(r25)
    stw r29, 0x0(r6)
    stw r6, 0x18(r29)
    stw r29, 0xc(r29)
    stw r29, 0x8(r29)
    b lbl_fn_8022A054_0000161C
lbl_fn_8022A054_00001568:
    subi r3, r7, 0x1f
    subfic r0, r7, 0x1f
    nor r0, r3, r0
    lwz r27, 0x0(r6)
    srwi r3, r7, 1
    srawi r4, r0, 31
    addi r0, r3, 0x6
    subfic r0, r0, 0x1f
    andc r0, r0, r4
    slw r4, r30, r0
lbl_fn_8022A054_00001590:
    lwz r0, 0x4(r27)
    clrrwi r0, r0, 2
    cmplw r0, r30
    beq lbl_fn_8022A054_000015E4
    rlwinm r0, r4, 3, 29, 29
    slwi r4, r4, 1
    add r3, r27, r0
    lwzu r0, 0x10(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8022A054_000015C0
    mr r27, r0
    b lbl_fn_8022A054_00001590
lbl_fn_8022A054_000015C0:
    lwz r0, 0x10(r25)
    cmplw r3, r0
    blt lbl_fn_8022A054_000015E0
    stw r29, 0x0(r3)
    stw r27, 0x18(r29)
    stw r29, 0xc(r29)
    stw r29, 0x8(r29)
    b lbl_fn_8022A054_0000161C
lbl_fn_8022A054_000015E0:
    bl fn_80686EA4
lbl_fn_8022A054_000015E4:
    lwz r0, 0x10(r25)
    lwz r3, 0x8(r27)
    cmplw r27, r0
    blt lbl_fn_8022A054_00001618
    cmplw r3, r0
    blt lbl_fn_8022A054_00001618
    stw r29, 0xc(r3)
    li r0, 0x0
    stw r29, 0x8(r27)
    stw r3, 0x8(r29)
    stw r27, 0xc(r29)
    stw r0, 0x18(r29)
    b lbl_fn_8022A054_0000161C
lbl_fn_8022A054_00001618:
    bl fn_80686EA4
lbl_fn_8022A054_0000161C:
    addi r3, r31, 0x8
    b lbl_fn_8022A054_0000162C
lbl_fn_8022A054_00001624:
    bl fn_80686EA4
lbl_fn_8022A054_00001628:
    li r3, 0x0
lbl_fn_8022A054_0000162C:
    lmw r24, 0x10(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8022A618(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r24, 0x10(r1)
    mr r25, r3
    mr r26, r4
    lwz r5, 0x4(r3)
    neg r0, r5
    and r5, r5, r0
    subi r6, r5, 0x1
    rlwinm r7, r6, 20, 27, 27
    srw r6, r6, r7
    rlwinm r5, r6, 27, 28, 28
    srw r6, r6, r5
    rlwinm r0, r6, 30, 29, 29
    add r7, r7, r5
    srw r6, r6, r0
    rlwinm r5, r6, 31, 30, 30
    add r7, r7, r0
    srw r6, r6, r5
    extrwi r0, r6, 1, 30
    add r7, r7, r5
    add r7, r7, r0
    srw r6, r6, r0
    add r0, r7, r6
    slwi r0, r0, 2
    add r5, r3, r0
    lwz r6, 0x12c(r5)
    lwz r0, 0x4(r6)
    mr r31, r6
    clrrwi r0, r0, 2
    subf r30, r4, r0
    b lbl_fn_8022A618_000016E0
lbl_fn_8022A618_000016C4:
    lwz r0, 0x4(r5)
    clrrwi r0, r0, 2
    subf r0, r4, r0
    cmplw r0, r30
    bge lbl_fn_8022A618_000016E0
    mr r30, r0
    mr r31, r5
lbl_fn_8022A618_000016E0:
    lwz r5, 0x10(r6)
    cmpwi r5, 0x0
    bne lbl_fn_8022A618_000016F0
    lwz r5, 0x14(r6)
lbl_fn_8022A618_000016F0:
    cmpwi r5, 0x0
    mr r6, r5
    bne lbl_fn_8022A618_000016C4
    lwz r24, 0x10(r3)
    cmplw r31, r24
    blt lbl_fn_8022A618_00001940
    add r29, r31, r4
    cmplw r31, r29
    bge lbl_fn_8022A618_00001940
    lwz r27, 0xc(r31)
    lwz r28, 0x18(r31)
    cmplw r27, r31
    beq lbl_fn_8022A618_00001740
    lwz r3, 0x8(r31)
    cmplw r3, r24
    blt lbl_fn_8022A618_0000173C
    stw r27, 0xc(r3)
    stw r3, 0x8(r27)
    b lbl_fn_8022A618_000017A4
lbl_fn_8022A618_0000173C:
    bl fn_80686EA4
lbl_fn_8022A618_00001740:
    lwz r27, 0x14(r31)
    addi r3, r31, 0x14
    cmpwi r27, 0x0
    bne lbl_fn_8022A618_0000176C
    lwz r27, 0x10(r31)
    addi r3, r31, 0x10
    cmpwi r27, 0x0
    beq lbl_fn_8022A618_000017A4
    b lbl_fn_8022A618_0000176C
lbl_fn_8022A618_00001764:
    mr r3, r4
    lwz r27, 0x0(r4)
lbl_fn_8022A618_0000176C:
    lwz r0, 0x14(r27)
    addi r4, r27, 0x14
    cmpwi r0, 0x0
    bne lbl_fn_8022A618_00001764
    lwz r0, 0x10(r27)
    addi r4, r27, 0x10
    cmpwi r0, 0x0
    bne lbl_fn_8022A618_00001764
    cmplw r3, r24
    blt lbl_fn_8022A618_000017A0
    li r0, 0x0
    stw r0, 0x0(r3)
    b lbl_fn_8022A618_000017A4
lbl_fn_8022A618_000017A0:
    bl fn_80686EA4
lbl_fn_8022A618_000017A4:
    cmpwi r28, 0x0
    beq lbl_fn_8022A618_00001884
    lwz r0, 0x1c(r31)
    slwi r0, r0, 2
    add r3, r25, r0
    lwz r0, 0x12c(r3)
    cmplw r31, r0
    bne lbl_fn_8022A618_000017EC
    cmpwi r27, 0x0
    stw r27, 0x12c(r3)
    bne lbl_fn_8022A618_00001818
    lwz r0, 0x1c(r31)
    li r3, 0x1
    lwz r4, 0x4(r25)
    slw r0, r3, r0
    andc r0, r4, r0
    stw r0, 0x4(r25)
    b lbl_fn_8022A618_00001818
lbl_fn_8022A618_000017EC:
    lwz r0, 0x10(r25)
    cmplw r28, r0
    blt lbl_fn_8022A618_00001814
    lwz r0, 0x10(r28)
    cmplw r0, r31
    bne lbl_fn_8022A618_0000180C
    stw r27, 0x10(r28)
    b lbl_fn_8022A618_00001818
lbl_fn_8022A618_0000180C:
    stw r27, 0x14(r28)
    b lbl_fn_8022A618_00001818
lbl_fn_8022A618_00001814:
    bl fn_80686EA4
lbl_fn_8022A618_00001818:
    cmpwi r27, 0x0
    beq lbl_fn_8022A618_00001884
    lwz r0, 0x10(r25)
    cmplw r27, r0
    blt lbl_fn_8022A618_00001880
    stw r28, 0x18(r27)
    lwz r3, 0x10(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8022A618_00001858
    lwz r0, 0x10(r25)
    cmplw r3, r0
    blt lbl_fn_8022A618_00001854
    stw r3, 0x10(r27)
    stw r27, 0x18(r3)
    b lbl_fn_8022A618_00001858
lbl_fn_8022A618_00001854:
    bl fn_80686EA4
lbl_fn_8022A618_00001858:
    lwz r3, 0x14(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8022A618_00001884
    lwz r0, 0x10(r25)
    cmplw r3, r0
    blt lbl_fn_8022A618_0000187C
    stw r3, 0x14(r27)
    stw r27, 0x18(r3)
    b lbl_fn_8022A618_00001884
lbl_fn_8022A618_0000187C:
    bl fn_80686EA4
lbl_fn_8022A618_00001880:
    bl fn_80686EA4
lbl_fn_8022A618_00001884:
    cmplwi r30, 0x10
    bge lbl_fn_8022A618_000018AC
    add r3, r30, r26
    ori r0, r3, 0x3
    stw r0, 0x4(r31)
    add r3, r31, r3
    lwz r0, 0x4(r3)
    ori r0, r0, 0x1
    stw r0, 0x4(r3)
    b lbl_fn_8022A618_00001938
lbl_fn_8022A618_000018AC:
    ori r0, r26, 0x3
    stw r0, 0x4(r31)
    ori r0, r30, 0x1
    stw r0, 0x4(r29)
    stwx r30, r29, r30
    lwz r4, 0x8(r25)
    cmpwi r4, 0x0
    beq lbl_fn_8022A618_00001930
    srwi r5, r4, 3
    li r0, 0x1
    clrrwi r4, r4, 3
    lwz r3, 0x0(r25)
    slw r5, r0, r5
    lwz r24, 0x14(r25)
    add r4, r25, r4
    addi r26, r4, 0x24
    and. r0, r3, r5
    mr r27, r26
    bne lbl_fn_8022A618_00001904
    or r0, r3, r5
    stw r0, 0x0(r25)
    b lbl_fn_8022A618_00001920
lbl_fn_8022A618_00001904:
    lwz r3, 0x8(r26)
    lwz r0, 0x10(r25)
    cmplw r3, r0
    blt lbl_fn_8022A618_0000191C
    mr r27, r3
    b lbl_fn_8022A618_00001920
lbl_fn_8022A618_0000191C:
    bl fn_80686EA4
lbl_fn_8022A618_00001920:
    stw r24, 0x8(r26)
    stw r24, 0xc(r27)
    stw r27, 0x8(r24)
    stw r26, 0xc(r24)
lbl_fn_8022A618_00001930:
    stw r30, 0x8(r25)
    stw r29, 0x14(r25)
lbl_fn_8022A618_00001938:
    addi r3, r31, 0x8
    b lbl_fn_8022A618_00001944
lbl_fn_8022A618_00001940:
    bl fn_80686EA4
lbl_fn_8022A618_00001944:
    lmw r24, 0x10(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8022A930(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmplwi r4, 0x8
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r27, r3
    mr r28, r4
    bgt lbl_fn_8022A930_00001984
    mr r4, r5
    bl fn_8022ADD4
    b lbl_fn_8022A930_00001B2C
lbl_fn_8022A930_00001984:
    cmplwi r4, 0x10
    bge lbl_fn_8022A930_00001990
    li r28, 0x10
lbl_fn_8022A930_00001990:
    subi r0, r28, 0x1
    and. r0, r28, r0
    beq lbl_fn_8022A930_000019B4
    li r0, 0x10
    b lbl_fn_8022A930_000019A8
lbl_fn_8022A930_000019A4:
    slwi r0, r0, 1
lbl_fn_8022A930_000019A8:
    cmplw r0, r28
    blt lbl_fn_8022A930_000019A4
    mr r28, r0
lbl_fn_8022A930_000019B4:
    subfic r0, r28, -0x40
    cmplw r5, r0
    blt lbl_fn_8022A930_000019D4
    cmpwi r3, 0x0
    beq lbl_fn_8022A930_00001B28
    li r0, 0xc
    stw r0, lbl_80880348
    b lbl_fn_8022A930_00001B28
lbl_fn_8022A930_000019D4:
    cmplwi r5, 0xb
    li r31, 0x10
    blt lbl_fn_8022A930_000019E8
    addi r0, r5, 0xb
    clrrwi r31, r0, 3
lbl_fn_8022A930_000019E8:
    add r4, r31, r28
    mr r3, r27
    addi r4, r4, 0xc
    bl fn_8022ADD4
    cmpwi r3, 0x0
    beq lbl_fn_8022A930_00001B28
    divwu r0, r3, r28
    subi r29, r3, 0x8
    li r4, 0x0
    li r30, 0x0
    mullw r0, r0, r28
    subf. r0, r0, r3
    beq lbl_fn_8022A930_00001AA4
    add r3, r3, r28
    neg r4, r28
    subi r0, r3, 0x1
    and r3, r4, r0
    subi r7, r3, 0x8
    subf r0, r29, r7
    cmplwi r0, 0x10
    blt lbl_fn_8022A930_00001A40
    b lbl_fn_8022A930_00001A44
lbl_fn_8022A930_00001A40:
    add r7, r7, r28
lbl_fn_8022A930_00001A44:
    lwz r3, 0x4(r29)
    subf r6, r29, r7
    lwz r4, 0x4(r7)
    ori r0, r6, 0x2
    clrrwi r5, r3, 2
    add r3, r29, r6
    subf r8, r6, r5
    clrlwi r6, r4, 31
    ori r5, r8, 0x2
    addi r4, r29, 0x8
    or r5, r6, r5
    stw r5, 0x4(r7)
    add r6, r7, r8
    lwz r5, 0x4(r6)
    ori r5, r5, 0x1
    stw r5, 0x4(r6)
    lwz r5, 0x4(r29)
    clrlwi r5, r5, 31
    or r0, r5, r0
    stw r0, 0x4(r29)
    mr r29, r7
    lwz r0, 0x4(r3)
    ori r0, r0, 0x1
    stw r0, 0x4(r3)
lbl_fn_8022A930_00001AA4:
    lwz r3, 0x4(r29)
    addi r0, r31, 0x10
    clrrwi r5, r3, 2
    cmplw r5, r0
    ble lbl_fn_8022A930_00001AFC
    clrlwi r3, r3, 31
    ori r0, r31, 0x2
    or r0, r3, r0
    stw r0, 0x4(r29)
    add r6, r29, r31
    subf r3, r31, r5
    lwz r5, 0x4(r6)
    ori r0, r3, 0x2
    add r3, r6, r3
    addi r30, r6, 0x8
    ori r5, r5, 0x1
    clrlwi r5, r5, 31
    or r0, r5, r0
    stw r0, 0x4(r6)
    lwz r0, 0x4(r3)
    ori r0, r0, 0x1
    stw r0, 0x4(r3)
lbl_fn_8022A930_00001AFC:
    cmpwi r4, 0x0
    beq lbl_fn_8022A930_00001B0C
    mr r3, r27
    bl fn_8022B114
lbl_fn_8022A930_00001B0C:
    cmpwi r30, 0x0
    beq lbl_fn_8022A930_00001B20
    mr r3, r27
    mr r4, r30
    bl fn_8022B114
lbl_fn_8022A930_00001B20:
    addi r3, r29, 0x8
    b lbl_fn_8022A930_00001B2C
lbl_fn_8022A930_00001B28:
    li r3, 0x0
lbl_fn_8022A930_00001B2C:
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
