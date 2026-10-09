#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_14(void);
extern void _restgpr_24(void);
extern void _restgpr_25(void);
extern void _savegpr_14(void);
extern void _savegpr_24(void);
extern void _savegpr_25(void);
extern void dtor_80084684(void);
extern void fn_8000FAE4(void);
extern void fn_80012934(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_8004B338(void);
extern void fn_80069BF4(void);
extern void fn_8006AA20(void);
extern void fn_8006B174(void);
extern void fn_8006EF48(void);
extern void fn_8006F72C(void);
extern void fn_8007A748(void);
extern void fn_80084320(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_8008B130(void);
extern void fn_80097D40(void);
extern void fn_800D1D3C(void);
extern void fn_800D246C(void);
extern void fn_800D5738(void);
extern void fn_800D5908(void);
extern void fn_800DAA3C(void);
extern void fn_800DAB68(void);
extern void fn_800DC980(void);
extern void fn_8011D320(void);
extern void fn_8011E81C(void);
extern void fn_8011EB18(void);
extern void fn_8011EEA0(void);
extern void fn_80136138(void);
extern void fn_80179A34(void);
extern void fn_80179AB4(void);
extern void fn_801F3FF8(void);
extern void fn_802180A8(void);
extern void fn_802251F8(void);
extern void fn_802253E4(void);
extern void fn_80225C80(void);
extern void fn_80226320(void);
extern void fn_80226B28(void);
extern void fn_80226B48(void);
extern void fn_80473E74(void);
extern void fn_80473E8C(void);
extern void fn_80686A48(void);
extern void fn_80695720(void);
extern void fn_806959D8(void);
extern void fn_80695A50(void);
extern void fn_80695AD0(void);
extern int sprintf(char* str, const char* format, ...);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80742D7C[];
extern u8 lbl_80742E58[];
extern u8 lbl_80742E88[];
extern u8 lbl_80742E90[];
extern u8 lbl_80742EA8[];
extern u8 lbl_80766768[];
extern u8 lbl_80783894[];
extern u8 lbl_807839E0[];
extern u8 lbl_8078FBB0[];

/* Small data declarations */
extern u32 lbl_8087D6DC;
extern u32 lbl_8087D6E0;
extern u32 lbl_8087D760;
extern u32 lbl_8087D764;
extern u32 lbl_8087DBD8;
extern u32 lbl_8087EEC8;
extern u32 lbl_8087EEE0;
extern u32 lbl_8087F008;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F430;
extern u32 lbl_80883020;
extern u32 lbl_80883028;
extern u32 lbl_8088307C;
extern u32 lbl_80883080;
extern u32 lbl_80883084;
extern u32 lbl_80883088;
extern u32 lbl_8088308C;
extern u32 lbl_80883090;
extern u32 lbl_80883094;
extern u32 lbl_80883098;
extern u32 lbl_8088309C;
extern u32 lbl_808830A0;
extern u32 lbl_808830A4;
extern u32 lbl_808830A8;
extern u32 lbl_808830AC;
extern u32 lbl_808830B0;
extern u32 lbl_808830B4;

/* Function declarations */
void fn_80227434(void);
void fn_80227A94(void);
void fn_80227D2C(void);
void fn_80227F78(void);
void fn_80227F98(void);
void fn_80227FA8(void);
void fn_80227FB8(void);
void fn_80227FC0(void);
void fn_8022808C(void);
void fn_80228094(void);
void fn_8022809C(void);
void fn_802280A4(void);
void fn_802280AC(void);
void fn_802280B4(void);
void fn_802288D0(void);
void fn_80228928(void);
void fn_80228AF4(void);
void fn_80228AF8(void);
void fn_80228CA0(void);

asm void fn_80227434(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    addi r11, r1, 0x90
    stfd f31, 0x90(r1)
    psq_st f31, 0x98(r1), 0, 0
    bl _savegpr_24
    lwz r7, lbl_8087F0A8
    mr r26, r3
    mr r27, r4
    mr r28, r5
    lwz r0, 0x1134(r7)
    mr r29, r6
    cmpwi r0, 0x0
    beq lbl_fn_80227434_00000044
    lfs f31, lbl_80883020
    b lbl_fn_80227434_00000048
lbl_fn_80227434_00000044:
    lfs f31, lbl_80883028
lbl_fn_80227434_00000048:
    slwi r0, r4, 6
    slwi r4, r5, 3
    add r3, r3, r0
    slwi r31, r6, 2
    addi r0, r3, 0x1840
    add r30, r0, r4
    lwzx r0, r30, r31
    cmpwi r0, 0x0
    bne lbl_fn_80227434_0000008C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x5c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x60(r1)
    stw r0, 0x64(r1)
    b lbl_fn_80227434_000000A8
lbl_fn_80227434_0000008C:
    lis r5, lbl_80783894@ha
    lwzu r4, lbl_80783894@l(r5)
    stw r4, 0x5c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x60(r1)
    stw r0, 0x64(r1)
lbl_fn_80227434_000000A8:
    lwz r5, 0x5c(r1)
    addi r3, r1, 0x50
    lwz r4, 0x60(r1)
    lwz r0, 0x64(r1)
    stw r5, 0x50(r1)
    stw r4, 0x54(r1)
    stw r0, 0x58(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80227434_0000034C
    lwzx r4, r30, r31
    fmr f2, f31
    lfs f1, lbl_80883028
    addi r3, r26, 0x1188
    addi r4, r4, 0x8
    li r5, 0x1
    li r6, 0x1
    bl fn_8011EB18
    lwz r3, 0x11e4(r26)
    addi r4, r26, 0x1188
    lwzx r30, r30, r31
    li r0, 0x0
    mulli r3, r3, 0xc
    add r31, r4, r3
    stw r0, 0x44(r31)
    stw r0, 0x48(r31)
    lwz r3, 0x4c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80227434_00000130
    beq lbl_fn_80227434_00000128
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80227434_00000128:
    li r0, 0x0
    stw r0, 0x4c(r31)
lbl_fn_80227434_00000130:
    lwz r25, 0x10(r30)
    cmpwi r25, 0x0
    beq lbl_fn_80227434_00000178
    mulli r3, r25, 0x2c
    li r4, 0x0
    la r5, lbl_8087D6E0
    la r6, lbl_8087D6DC
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_8000FAE4@ha
    mr r7, r25
    addi r4, r4, fn_8000FAE4@l
    li r5, 0x0
    li r6, 0x2c
    bl fn_80695720
    mr r27, r3
    b lbl_fn_80227434_0000017C
lbl_fn_80227434_00000178:
    li r27, 0x0
lbl_fn_80227434_0000017C:
    lwz r0, 0x4c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80227434_000002CC
    lwz r0, 0x44(r31)
    mr r4, r25
    cmplw r25, r0
    ble lbl_fn_80227434_0000019C
    mr r4, r0
lbl_fn_80227434_0000019C:
    cmplwi r4, 0x0
    li r3, 0x0
    ble lbl_fn_80227434_000002B8
    srwi. r0, r4, 1
    mtctr r0
    beq lbl_fn_80227434_00000260
lbl_fn_80227434_000001B4:
    lwz r0, 0x4c(r31)
    add r6, r27, r3
    add r5, r0, r3
    lwzx r0, r3, r0
    stwx r0, r27, r3
    addi r3, r3, 0x2c
    lwz r0, 0x4(r5)
    stw r0, 0x4(r6)
    lfs f2, 0x10(r5)
    psq_l f1, 0x8(r5), 0, 0
    psq_st f1, 0x8(r6), 0, 0
    stfs f2, 0x10(r6)
    lfs f2, 0x1c(r5)
    psq_l f1, 0x14(r5), 0, 0
    psq_st f1, 0x14(r6), 0, 0
    stfs f2, 0x1c(r6)
    lfs f2, 0x28(r5)
    psq_l f1, 0x20(r5), 0, 0
    psq_st f1, 0x20(r6), 0, 0
    stfs f2, 0x28(r6)
    add r6, r27, r3
    lwz r0, 0x4c(r31)
    add r5, r0, r3
    lwzx r0, r3, r0
    stwx r0, r27, r3
    addi r3, r3, 0x2c
    lwz r0, 0x4(r5)
    stw r0, 0x4(r6)
    lfs f2, 0x10(r5)
    psq_l f1, 0x8(r5), 0, 0
    psq_st f1, 0x8(r6), 0, 0
    stfs f2, 0x10(r6)
    lfs f2, 0x1c(r5)
    psq_l f1, 0x14(r5), 0, 0
    psq_st f1, 0x14(r6), 0, 0
    stfs f2, 0x1c(r6)
    lfs f2, 0x28(r5)
    psq_l f1, 0x20(r5), 0, 0
    psq_st f1, 0x20(r6), 0, 0
    stfs f2, 0x28(r6)
    bdnz lbl_fn_80227434_000001B4
    andi. r4, r4, 0x1
    beq lbl_fn_80227434_000002B8
lbl_fn_80227434_00000260:
    mtctr r4
lbl_fn_80227434_00000264:
    lwz r0, 0x4c(r31)
    add r6, r27, r3
    add r5, r0, r3
    lwzx r0, r3, r0
    stwx r0, r27, r3
    addi r3, r3, 0x2c
    lwz r0, 0x4(r5)
    stw r0, 0x4(r6)
    lfs f2, 0x10(r5)
    psq_l f1, 0x8(r5), 0, 0
    psq_st f1, 0x8(r6), 0, 0
    stfs f2, 0x10(r6)
    lfs f2, 0x1c(r5)
    psq_l f1, 0x14(r5), 0, 0
    psq_st f1, 0x14(r6), 0, 0
    stfs f2, 0x1c(r6)
    lfs f2, 0x28(r5)
    psq_l f1, 0x20(r5), 0, 0
    psq_st f1, 0x20(r6), 0, 0
    stfs f2, 0x28(r6)
    bdnz lbl_fn_80227434_00000264
lbl_fn_80227434_000002B8:
    lwz r3, 0x4c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80227434_000002CC
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80227434_000002CC:
    stw r27, 0x4c(r31)
    li r5, 0x0
    li r3, 0x0
    stw r25, 0x44(r31)
    stw r25, 0x48(r31)
    b lbl_fn_80227434_0000033C
lbl_fn_80227434_000002E4:
    lwz r4, 0x18(r30)
    addi r5, r5, 0x1
    lwz r0, 0x4c(r31)
    add r6, r4, r3
    add r4, r0, r3
    lwz r0, 0x0(r6)
    stw r0, 0x0(r4)
    addi r3, r3, 0x2c
    lwz r0, 0x4(r6)
    stw r0, 0x4(r4)
    lfs f2, 0x10(r6)
    psq_l f1, 0x8(r6), 0, 0
    psq_st f1, 0x8(r4), 0, 0
    stfs f2, 0x10(r4)
    lfs f2, 0x1c(r6)
    psq_l f1, 0x14(r6), 0, 0
    psq_st f1, 0x14(r4), 0, 0
    stfs f2, 0x1c(r4)
    lfs f2, 0x28(r6)
    psq_l f1, 0x20(r6), 0, 0
    psq_st f1, 0x20(r4), 0, 0
    stfs f2, 0x28(r4)
lbl_fn_80227434_0000033C:
    lwz r0, 0x44(r31)
    cmplw r5, r0
    blt lbl_fn_80227434_000002E4
    b lbl_fn_80227434_00000634
lbl_fn_80227434_0000034C:
    lis r30, lbl_80742D7C@ha
    li r0, 0x0
    addi r30, r30, lbl_80742D7C@l
    stw r0, 0x38(r1)
    addi r25, r30, 0x14
    addi r31, r1, 0x38
    stw r0, 0x3c(r1)
    mr r3, r25
    stw r0, 0x40(r1)
    bl strlen
    mr r24, r3
    mr r3, r31
    mr r4, r24
    bl fn_80013DC4
    lbz r0, 0x8(r1)
    mr r3, r31
    stb r0, 0xc(r1)
    mr r6, r25
    add r7, r25, r24
    addi r8, r1, 0xc
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    cmpwi r27, 0x0
    beq lbl_fn_80227434_000003CC
    cmpwi r27, 0x1
    beq lbl_fn_80227434_00000420
    cmpwi r27, 0x2
    beq lbl_fn_80227434_00000474
    cmpwi r27, 0x3
    beq lbl_fn_80227434_000004C8
    b lbl_fn_80227434_00000518
lbl_fn_80227434_000003CC:
    lwz r0, 0x38(r1)
    addi r27, r30, 0x1d
    srwi. r0, r0, 31
    bne lbl_fn_80227434_000003E8
    lbz r0, 0x38(r1)
    clrlwi r24, r0, 25
    b lbl_fn_80227434_000003EC
lbl_fn_80227434_000003E8:
    lwz r24, 0x3c(r1)
lbl_fn_80227434_000003EC:
    lbz r0, 0x10(r1)
    mr r3, r27
    stb r0, 0x14(r1)
    bl strlen
    mr r0, r3
    mr r4, r24
    mr r6, r27
    addi r3, r1, 0x38
    add r7, r27, r0
    addi r8, r1, 0x14
    li r5, 0x0
    bl fn_80013F78
    b lbl_fn_80227434_00000518
lbl_fn_80227434_00000420:
    lwz r0, 0x38(r1)
    addi r27, r30, 0x21
    srwi. r0, r0, 31
    bne lbl_fn_80227434_0000043C
    lbz r0, 0x38(r1)
    clrlwi r24, r0, 25
    b lbl_fn_80227434_00000440
lbl_fn_80227434_0000043C:
    lwz r24, 0x3c(r1)
lbl_fn_80227434_00000440:
    lbz r0, 0x18(r1)
    mr r3, r27
    stb r0, 0x1c(r1)
    bl strlen
    mr r0, r3
    mr r4, r24
    mr r6, r27
    addi r3, r1, 0x38
    add r7, r27, r0
    addi r8, r1, 0x1c
    li r5, 0x0
    bl fn_80013F78
    b lbl_fn_80227434_00000518
lbl_fn_80227434_00000474:
    lwz r0, 0x38(r1)
    addi r27, r30, 0x25
    srwi. r0, r0, 31
    bne lbl_fn_80227434_00000490
    lbz r0, 0x38(r1)
    clrlwi r24, r0, 25
    b lbl_fn_80227434_00000494
lbl_fn_80227434_00000490:
    lwz r24, 0x3c(r1)
lbl_fn_80227434_00000494:
    lbz r0, 0x20(r1)
    mr r3, r27
    stb r0, 0x24(r1)
    bl strlen
    mr r0, r3
    mr r4, r24
    mr r6, r27
    addi r3, r1, 0x38
    add r7, r27, r0
    addi r8, r1, 0x24
    li r5, 0x0
    bl fn_80013F78
    b lbl_fn_80227434_00000518
lbl_fn_80227434_000004C8:
    lwz r0, 0x38(r1)
    addi r27, r30, 0x29
    srwi. r0, r0, 31
    bne lbl_fn_80227434_000004E4
    lbz r0, 0x38(r1)
    clrlwi r24, r0, 25
    b lbl_fn_80227434_000004E8
lbl_fn_80227434_000004E4:
    lwz r24, 0x3c(r1)
lbl_fn_80227434_000004E8:
    lbz r0, 0x28(r1)
    mr r3, r27
    stb r0, 0x2c(r1)
    bl strlen
    mr r0, r3
    mr r4, r24
    mr r6, r27
    addi r3, r1, 0x38
    add r7, r27, r0
    addi r8, r1, 0x2c
    li r5, 0x0
    bl fn_80013F78
lbl_fn_80227434_00000518:
    lis r4, lbl_80742D7C@ha
    mr r5, r28
    addi r4, r4, lbl_80742D7C@l
    addi r3, r1, 0x44
    addi r4, r4, 0x2d
    crclr 6
    bl fn_800DC980
    lwz r0, 0x38(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80227434_0000054C
    lbz r0, 0x38(r1)
    clrlwi r4, r0, 25
    b lbl_fn_80227434_00000550
lbl_fn_80227434_0000054C:
    lwz r4, 0x3c(r1)
lbl_fn_80227434_00000550:
    lwz r0, 0x44(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80227434_0000056C
    lbz r0, 0x44(r1)
    addi r6, r1, 0x45
    clrlwi r5, r0, 25
    b lbl_fn_80227434_00000574
lbl_fn_80227434_0000056C:
    lwz r6, 0x4c(r1)
    lwz r5, 0x48(r1)
lbl_fn_80227434_00000574:
    lbz r0, 0x30(r1)
    add r7, r6, r5
    stb r0, 0x34(r1)
    addi r3, r1, 0x38
    addi r8, r1, 0x34
    li r5, 0x0
    bl fn_80013F78
    lwz r0, 0x44(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80227434_000005A4
    lwz r3, 0x4c(r1)
    bl dtor_80084684
lbl_fn_80227434_000005A4:
    lwz r0, 0x38(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80227434_000005B8
    addi r3, r1, 0x39
    b lbl_fn_80227434_000005BC
lbl_fn_80227434_000005B8:
    lwz r3, 0x40(r1)
lbl_fn_80227434_000005BC:
    bl fn_802180A8
    lwz r0, 0x38(r1)
    mr r24, r3
    srwi. r0, r0, 31
    beq lbl_fn_80227434_000005D8
    lwz r3, 0x40(r1)
    bl dtor_80084684
lbl_fn_80227434_000005D8:
    cmpwi r24, 0x0
    blt lbl_fn_80227434_000005F4
    mr r4, r24
    addi r3, r26, 0xb0
    bl fn_80097D40
    cmpwi r3, 0x0
    bne lbl_fn_80227434_000005F8
lbl_fn_80227434_000005F4:
    li r24, 0xb4
lbl_fn_80227434_000005F8:
    lwz r3, 0x1428(r26)
    lwz r0, 0x50(r3)
    cmpwi r0, 0x1
    bne lbl_fn_80227434_00000614
    cmpwi r24, 0xa3
    bne lbl_fn_80227434_00000614
    li r24, 0xa6
lbl_fn_80227434_00000614:
    fmr f2, f31
    lfs f1, lbl_80883028
    mr r4, r24
    addi r3, r26, 0x1188
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    bl fn_8011E81C
lbl_fn_80227434_00000634:
    mr r3, r26
    mr r4, r29
    bl fn_80225C80
    addi r11, r1, 0x90
    psq_l f31, 0x98(r1), 0, 0
    lfd f31, 0x90(r1)
    bl _restgpr_24
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_80227A94(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stmw r23, 0x5c(r1)
    li r27, 0x0
    lis r26, lbl_80742D7C@ha
    mr r23, r3
    addi r26, r26, lbl_80742D7C@l
    mr r28, r4
    mr r29, r5
    mr r30, r6
    mr r31, r7
    mr r3, r26
    addi r25, r1, 0x44
    stw r27, 0x44(r1)
    stw r27, 0x48(r1)
    stw r27, 0x4c(r1)
    bl strlen
    mr r24, r3
    mr r3, r25
    mr r4, r24
    bl fn_80013DC4
    lbz r0, 0x1c(r1)
    mr r3, r25
    stb r0, 0x18(r1)
    mr r6, r26
    add r7, r26, r24
    addi r8, r1, 0x18
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    lwz r3, 0x1428(r23)
    cmpwi r3, 0x0
    beq lbl_fn_80227A94_0000082C
    addi r3, r3, 0xb0
    lwz r0, 0x16c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80227A94_0000082C
    bl fn_8008B130
    stw r27, 0x38(r1)
    mr r25, r3
    addi r26, r1, 0x38
    stw r27, 0x3c(r1)
    stw r27, 0x40(r1)
    bl strlen
    mr r24, r3
    mr r3, r26
    mr r4, r24
    bl fn_80013DC4
    lbz r0, 0x14(r1)
    mr r3, r26
    stb r0, 0x10(r1)
    mr r6, r25
    add r7, r25, r24
    addi r8, r1, 0x10
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    mr r4, r26
    addi r3, r1, 0x2c
    bl fn_8006B174
    addi r3, r1, 0x20
    addi r4, r1, 0x2c
    li r5, 0x0
    li r6, 0x5
    bl fn_80069BF4
    lwz r0, 0x44(r1)
    srwi. r3, r0, 31
    bne lbl_fn_80227A94_00000798
    lwz r4, 0x20(r1)
    srwi. r0, r4, 31
    bne lbl_fn_80227A94_00000798
    lwz r3, 0x24(r1)
    lwz r0, 0x28(r1)
    stw r4, 0x44(r1)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    b lbl_fn_80227A94_000007F0
lbl_fn_80227A94_00000798:
    cmpwi r3, 0x0
    beq lbl_fn_80227A94_000007A8
    lwz r5, 0x48(r1)
    b lbl_fn_80227A94_000007B0
lbl_fn_80227A94_000007A8:
    lbz r0, 0x44(r1)
    clrlwi r5, r0, 25
lbl_fn_80227A94_000007B0:
    lwz r0, 0x20(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80227A94_000007CC
    lbz r0, 0x20(r1)
    addi r6, r1, 0x21
    clrlwi r4, r0, 25
    b lbl_fn_80227A94_000007D4
lbl_fn_80227A94_000007CC:
    lwz r6, 0x28(r1)
    lwz r4, 0x24(r1)
lbl_fn_80227A94_000007D4:
    lbz r0, 0xc(r1)
    add r7, r6, r4
    stb r0, 0x8(r1)
    addi r3, r1, 0x44
    addi r8, r1, 0x8
    li r4, 0x0
    bl fn_80013F78
lbl_fn_80227A94_000007F0:
    lwz r0, 0x20(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80227A94_00000804
    lwz r3, 0x28(r1)
    bl dtor_80084684
lbl_fn_80227A94_00000804:
    lwz r0, 0x2c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80227A94_00000818
    lwz r3, 0x34(r1)
    bl dtor_80084684
lbl_fn_80227A94_00000818:
    lwz r0, 0x38(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80227A94_0000082C
    lwz r3, 0x40(r1)
    bl dtor_80084684
lbl_fn_80227A94_0000082C:
    cmpwi r29, 0x0
    lis r6, lbl_80742D7C@ha
    addi r6, r6, lbl_80742D7C@l
    beq lbl_fn_80227A94_00000858
    cmpwi r29, 0x1
    beq lbl_fn_80227A94_00000860
    cmpwi r29, 0x2
    beq lbl_fn_80227A94_00000868
    cmpwi r29, 0x3
    beq lbl_fn_80227A94_00000870
    b lbl_fn_80227A94_00000874
lbl_fn_80227A94_00000858:
    addi r6, r6, 0x32
    b lbl_fn_80227A94_00000874
lbl_fn_80227A94_00000860:
    addi r6, r6, 0x36
    b lbl_fn_80227A94_00000874
lbl_fn_80227A94_00000868:
    addi r6, r6, 0x3a
    b lbl_fn_80227A94_00000874
lbl_fn_80227A94_00000870:
    addi r6, r6, 0x3e
lbl_fn_80227A94_00000874:
    lis r3, lbl_80742D7C@ha
    cmpwi r31, 0x0
    addi r3, r3, lbl_80742D7C@l
    addi r8, r3, 0x44
    beq lbl_fn_80227A94_0000088C
    addi r8, r3, 0x42
lbl_fn_80227A94_0000088C:
    lwz r0, 0x44(r1)
    lis r4, lbl_80742D7C@ha
    addi r4, r4, lbl_80742D7C@l
    mr r3, r28
    srwi. r0, r0, 31
    addi r4, r4, 0x46
    bne lbl_fn_80227A94_000008B0
    addi r5, r1, 0x45
    b lbl_fn_80227A94_000008B4
lbl_fn_80227A94_000008B0:
    lwz r5, 0x4c(r1)
lbl_fn_80227A94_000008B4:
    mr r7, r30
    crclr 6
    bl sprintf
    mr r3, r28
    bl fn_8006AA20
    lwz r0, 0x44(r1)
    mr r27, r3
    srwi. r0, r0, 31
    beq lbl_fn_80227A94_000008E0
    lwz r3, 0x4c(r1)
    bl dtor_80084684
lbl_fn_80227A94_000008E0:
    mr r3, r27
    lmw r23, 0x5c(r1)
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_80227D2C(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    stmw r24, 0x110(r1)
    slwi r29, r4, 6
    slwi r30, r5, 3
    mr r26, r3
    add r0, r3, r29
    mr r27, r4
    add r31, r0, r30
    mr r28, r5
    lwz r0, 0x1840(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80227D2C_00000B30
    lwz r0, 0x1844(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80227D2C_00000B30
    mr r5, r27
    mr r6, r28
    addi r4, r1, 0x8
    li r7, 0x0
    bl fn_80227A94
    cmpwi r3, 0x0
    beq lbl_fn_80227D2C_00000A34
    lis r5, lbl_80742D7C@ha
    li r3, 0x1c
    addi r5, r5, lbl_80742D7C@l
    li r4, 0x4
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r25, r3
    beq lbl_fn_80227D2C_000009A8
    bl fn_80473E74
    lis r3, lbl_8078FBB0@ha
    li r0, 0x0
    addi r3, r3, lbl_8078FBB0@l
    stw r3, 0x0(r25)
    stw r0, 0x8(r25)
    stw r0, 0xc(r25)
    stw r0, 0x10(r25)
    stw r0, 0x14(r25)
    stw r0, 0x18(r25)
lbl_fn_80227D2C_000009A8:
    add r0, r26, r29
    add r3, r0, r30
    lwz r24, 0x1840(r3)
    cmpwi r24, 0x0
    stw r25, 0x1840(r3)
    beq lbl_fn_80227D2C_00000A28
    addic. r0, r24, 0x10
    beq lbl_fn_80227D2C_000009E0
    lwz r3, 0x18(r24)
    cmpwi r3, 0x0
    beq lbl_fn_80227D2C_000009E0
    beq lbl_fn_80227D2C_000009E0
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80227D2C_000009E0:
    addic. r0, r24, 0x8
    beq lbl_fn_80227D2C_00000A0C
    lwz r3, 0xc(r24)
    cmpwi r3, 0x0
    beq lbl_fn_80227D2C_00000A00
    lis r4, fn_8011D320@ha
    addi r4, r4, fn_8011D320@l
    bl fn_80695A50
lbl_fn_80227D2C_00000A00:
    li r0, 0x0
    stw r0, 0xc(r24)
    stw r0, 0x8(r24)
lbl_fn_80227D2C_00000A0C:
    cmpwi r24, 0x0
    beq lbl_fn_80227D2C_00000A20
    mr r3, r24
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80227D2C_00000A20:
    mr r3, r24
    bl dtor_80084684
lbl_fn_80227D2C_00000A28:
    lwz r3, 0x1840(r31)
    addi r4, r1, 0x8
    bl fn_8011EEA0
lbl_fn_80227D2C_00000A34:
    mr r3, r26
    mr r5, r27
    mr r6, r28
    addi r4, r1, 0x8
    li r7, 0x1
    bl fn_80227A94
    cmpwi r3, 0x0
    beq lbl_fn_80227D2C_00000B30
    lis r5, lbl_80742D7C@ha
    li r3, 0x1c
    addi r5, r5, lbl_80742D7C@l
    li r4, 0x4
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r24, r3
    beq lbl_fn_80227D2C_00000AA4
    bl fn_80473E74
    lis r3, lbl_8078FBB0@ha
    li r0, 0x0
    addi r3, r3, lbl_8078FBB0@l
    stw r3, 0x0(r24)
    stw r0, 0x8(r24)
    stw r0, 0xc(r24)
    stw r0, 0x10(r24)
    stw r0, 0x14(r24)
    stw r0, 0x18(r24)
lbl_fn_80227D2C_00000AA4:
    add r0, r26, r29
    add r3, r0, r30
    lwz r25, 0x1844(r3)
    cmpwi r25, 0x0
    stw r24, 0x1844(r3)
    beq lbl_fn_80227D2C_00000B24
    addic. r0, r25, 0x10
    beq lbl_fn_80227D2C_00000ADC
    lwz r3, 0x18(r25)
    cmpwi r3, 0x0
    beq lbl_fn_80227D2C_00000ADC
    beq lbl_fn_80227D2C_00000ADC
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80227D2C_00000ADC:
    addic. r0, r25, 0x8
    beq lbl_fn_80227D2C_00000B08
    lwz r3, 0xc(r25)
    cmpwi r3, 0x0
    beq lbl_fn_80227D2C_00000AFC
    lis r4, fn_8011D320@ha
    addi r4, r4, fn_8011D320@l
    bl fn_80695A50
lbl_fn_80227D2C_00000AFC:
    li r0, 0x0
    stw r0, 0xc(r25)
    stw r0, 0x8(r25)
lbl_fn_80227D2C_00000B08:
    cmpwi r25, 0x0
    beq lbl_fn_80227D2C_00000B1C
    mr r3, r25
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80227D2C_00000B1C:
    mr r3, r25
    bl dtor_80084684
lbl_fn_80227D2C_00000B24:
    lwz r3, 0x1844(r31)
    addi r4, r1, 0x8
    bl fn_8011EEA0
lbl_fn_80227D2C_00000B30:
    lmw r24, 0x110(r1)
    lwz r0, 0x134(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

asm void fn_80227F78(void)
{
    nofralloc
    lwz r5, lbl_8087F0A8
    lwz r0, 0x1138(r5)
    cmpwi r0, 0x0
    beqlr
    lfs f0, lbl_80883020
    stw r4, 0x1154(r3)
    stfs f0, 0x1158(r3)
    blr
}

asm void fn_80227F98(void)
{
    nofralloc
    lwzu r12, 0xb0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctr
}

asm void fn_80227FA8(void)
{
    nofralloc
    lwzu r12, 0xb0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctr
}

asm void fn_80227FB8(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    blr
}

asm void fn_80227FC0(void)
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
    beq lbl_fn_80227FC0_00000C38
    addic. r31, r3, 0x1a00
    beq lbl_fn_80227FC0_00000BE4
    beq lbl_fn_80227FC0_00000BE4
    lwz r3, 0x4(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80227FC0_00000BD8
    beq lbl_fn_80227FC0_00000BD8
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80227FC0_00000BD8:
    li r0, 0x0
    stw r0, 0x4(r31)
    stw r0, 0x0(r31)
lbl_fn_80227FC0_00000BE4:
    lis r4, fn_802253E4@ha
    addi r3, r29, 0x1840
    addi r4, r4, fn_802253E4@l
    li r5, 0x4
    li r6, 0x70
    bl fn_806959D8
    addic. r3, r29, 0x1624
    beq lbl_fn_80227FC0_00000C10
    addi r3, r3, 0x8
    li r4, -0x1
    bl fn_8004B338
lbl_fn_80227FC0_00000C10:
    addi r3, r29, 0x142c
    li r4, -0x1
    bl fn_8004B338
    mr r3, r29
    li r4, 0x0
    bl fn_80136138
    cmpwi r30, 0x0
    ble lbl_fn_80227FC0_00000C38
    mr r3, r29
    bl dtor_80084684
lbl_fn_80227FC0_00000C38:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8022808C(void)
{
    nofralloc
    subi r3, r3, 0x1424
    b fn_80227FA8
}

asm void fn_80228094(void)
{
    nofralloc
    subi r3, r3, 0x1424
    b fn_80226320
}

asm void fn_8022809C(void)
{
    nofralloc
    subi r3, r3, 0x1424
    b fn_80226B48
}

asm void fn_802280A4(void)
{
    nofralloc
    subi r3, r3, 0x1424
    b fn_80227F98
}

asm void fn_802280AC(void)
{
    nofralloc
    subi r3, r3, 0x1424
    b fn_80227FC0
}

asm void fn_802280B4(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    addi r11, r1, 0x90
    bl _savegpr_14
    mr r21, r3
    bl fn_800D1D3C
    addi r5, r21, 0x54
    addi r3, r21, 0xcc
    lis r4, lbl_807839E0@ha
    li r0, 0x0
    addi r4, r4, lbl_807839E0@l
    cmplw r5, r3
    stw r4, 0x0(r21)
    stw r0, 0x4c(r21)
    bge lbl_fn_802280B4_00000D60
    addi r0, r21, 0x54
    addi r4, r21, 0x8c
    cmplw r0, r3
    li r3, 0x0
    li r0, 0x0
    bgt lbl_fn_802280B4_00000CDC
    li r3, 0x1
lbl_fn_802280B4_00000CDC:
    cmpwi r3, 0x0
    beq lbl_fn_802280B4_00000CE8
    li r0, 0x1
lbl_fn_802280B4_00000CE8:
    cmpwi r0, 0x0
    beq lbl_fn_802280B4_00000D34
    addi r0, r4, 0x3f
    li r3, 0x0
    subf r0, r5, r0
    srwi r0, r0, 6
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_802280B4_00000D34
lbl_fn_802280B4_00000D0C:
    stw r3, 0x0(r5)
    stw r3, 0x8(r5)
    stw r3, 0x10(r5)
    stw r3, 0x18(r5)
    stw r3, 0x20(r5)
    stw r3, 0x28(r5)
    stw r3, 0x30(r5)
    stw r3, 0x38(r5)
    addi r5, r5, 0x40
    bdnz lbl_fn_802280B4_00000D0C
lbl_fn_802280B4_00000D34:
    addi r3, r21, 0xcc
    li r4, 0x0
    addi r0, r3, 0x7
    subf r0, r5, r0
    srwi r0, r0, 3
    mtctr r0
    cmplw r5, r3
    bge lbl_fn_802280B4_00000D60
lbl_fn_802280B4_00000D54:
    stw r4, 0x0(r5)
    addi r5, r5, 0x8
    bdnz lbl_fn_802280B4_00000D54
lbl_fn_802280B4_00000D60:
    li r16, 0x0
    li r14, -0x1
    stw r16, 0x110(r21)
    addi r3, r21, 0x120
    stw r14, 0x114(r21)
    stw r16, 0x118(r21)
    stw r14, 0x11c(r21)
    bl fn_800D5738
    lis r7, lbl_80742E58@ha
    lfs f0, lbl_8088308C
    addi r6, r7, lbl_80742E58@l
    lfs f4, lbl_8088307C
    li r5, 0x1
    lfs f3, lbl_80883080
    lfs f2, lbl_80883084
    addi r8, r6, 0xc
    lfs f1, lbl_80883088
    addi r9, r6, 0x18
    addi r10, r6, 0x24
    li r4, 0x140
    li r3, 0xe0
    li r0, 0x1e
    stw r14, 0x150(r21)
    stw r5, 0x154(r21)
    stw r5, 0x160(r21)
    stfs f4, 0x164(r21)
    stfs f3, 0x168(r21)
    stfs f2, 0x16c(r21)
    stfs f1, 0x170(r21)
    stw r4, 0x174(r21)
    stw r3, 0x178(r21)
    stfs f0, 0x17c(r21)
    stfs f0, 0x180(r21)
    stw r0, 0x18c(r21)
    stw r6, 0xcc(r21)
    stw r8, 0xdc(r21)
    stw r9, 0xec(r21)
    stw r10, 0xfc(r21)
    stw r16, 0x158(r21)
    stw r16, 0x15c(r21)
    stw r16, 0x184(r21)
    stw r16, 0x188(r21)
    stw r16, 0x190(r21)
    stw r16, 0x194(r21)
    stb r16, 0x198(r21)
    stb r16, 0x199(r21)
    stw r16, 0xd8(r21)
    stw r16, 0xe8(r21)
    stw r16, 0xf8(r21)
    stw r16, 0x108(r21)
    stw r16, 0x50(r21)
    stw r16, 0x58(r21)
    stw r16, 0x60(r21)
    stw r16, 0x68(r21)
    stw r16, 0x70(r21)
    stw r16, 0x78(r21)
    stw r16, 0x80(r21)
    stw r16, 0x88(r21)
    stw r16, 0x90(r21)
    stw r16, 0x98(r21)
    stw r16, 0xa0(r21)
    stw r16, 0xa8(r21)
    stw r16, 0xb0(r21)
    stw r16, 0xb8(r21)
    stw r16, 0xc0(r21)
    stw r16, 0xc8(r21)
    lwz r11, lbl_8087EEE0
    lis r3, 0x4330
    lis r5, lbl_80742E88@ha
    stw r3, 0x28(r1)
    lwz r4, 0x3c(r11)
    addi r27, r1, 0x1d
    lwz r0, 0x40(r11)
    lis r17, 0x68dc
    xoris r4, r4, 0x8000
    stw r4, 0x2c(r1)
    xoris r0, r0, 0x8000
    lfd f3, lbl_80742E88@l(r5)
    lfd f0, 0x28(r1)
    li r20, 0x10
    stw r0, 0x34(r1)
    li r0, 0x0
    fsubs f7, f0, f3
    lfs f1, lbl_80742E58@l(r7)
    stw r3, 0x30(r1)
    lfs f0, 0x0(r8)
    fmuls f5, f7, f1
    lfd f2, 0x30(r1)
    lfs f1, 0x0(r9)
    fmuls f9, f7, f0
    fsubs f6, f2, f3
    lfs f0, 0x0(r10)
    fmuls f8, f7, f1
    lfs f4, 0x4(r6)
    lfs f3, 0x10(r6)
    fmuls f0, f7, f0
    lfs f2, 0x1c(r6)
    fmuls f4, f6, f4
    lfs f1, 0x28(r6)
    fmuls f3, f6, f3
    fmuls f2, f6, f2
    stw r0, 0x38(r1)
    fmuls f1, f6, f1
    li r0, 0x0
    stw r0, 0x40(r1)
    lwz r25, 0x20(r21)
    stfs f5, 0xd0(r21)
    stfs f4, 0xd4(r21)
    stfs f9, 0xe0(r21)
    stfs f3, 0xe4(r21)
    stfs f8, 0xf0(r21)
    stfs f2, 0xf4(r21)
    stfs f0, 0x100(r21)
    stfs f1, 0x104(r21)
    stb r16, 0x198(r21)
    stw r16, 0x48(r21)
    b lbl_fn_802280B4_000012F4
lbl_fn_802280B4_00000F34:
    lwz r0, 0x38(r1)
    li r3, 0x0
    cmpwi r0, 0x0
    blt lbl_fn_802280B4_00000F50
    cmpw r0, r4
    bge lbl_fn_802280B4_00000F50
    li r3, 0x1
lbl_fn_802280B4_00000F50:
    cmpwi r3, 0x0
    beq lbl_fn_802280B4_00000F6C
    lwz r3, 0xb8(r25)
    lwz r0, 0x40(r1)
    lwzx r0, r3, r0
    stw r0, 0x3c(r1)
    b lbl_fn_802280B4_00000F74
lbl_fn_802280B4_00000F6C:
    li r0, 0x0
    stw r0, 0x3c(r1)
lbl_fn_802280B4_00000F74:
    li r24, 0x0
    li r14, 0x0
    b lbl_fn_802280B4_000012CC
lbl_fn_802280B4_00000F80:
    cmpwi r24, 0x0
    li r0, 0x0
    blt lbl_fn_802280B4_00000F98
    cmpw r24, r3
    bge lbl_fn_802280B4_00000F98
    li r0, 0x1
lbl_fn_802280B4_00000F98:
    cmpwi r0, 0x0
    beq lbl_fn_802280B4_00000FB0
    lwz r3, 0x3c(r1)
    lwz r3, 0x3c(r3)
    lwzx r31, r3, r14
    b lbl_fn_802280B4_00000FB4
lbl_fn_802280B4_00000FB0:
    li r31, 0x0
lbl_fn_802280B4_00000FB4:
    lwz r0, 0xc(r31)
    cmpwi r0, 0x4
    bne lbl_fn_802280B4_000012C4
    li r23, 0x0
    li r19, 0x0
    b lbl_fn_802280B4_000012B8
lbl_fn_802280B4_00000FCC:
    cmpwi r23, 0x0
    li r0, 0x0
    blt lbl_fn_802280B4_00000FE4
    cmpw r23, r3
    bge lbl_fn_802280B4_00000FE4
    li r0, 0x1
lbl_fn_802280B4_00000FE4:
    cmpwi r0, 0x0
    beq lbl_fn_802280B4_00000FF8
    lwz r3, 0x18(r31)
    lwzx r30, r3, r19
    b lbl_fn_802280B4_00000FFC
lbl_fn_802280B4_00000FF8:
    li r30, 0x0
lbl_fn_802280B4_00000FFC:
    lwz r0, 0xc(r30)
    cmpwi r0, 0x29
    bne lbl_fn_802280B4_000012B0
    li r22, 0x0
    li r18, 0x0
    b lbl_fn_802280B4_000012A4
lbl_fn_802280B4_00001014:
    cmpwi r22, 0x0
    li r0, 0x0
    blt lbl_fn_802280B4_0000102C
    cmpw r22, r3
    bge lbl_fn_802280B4_0000102C
    li r0, 0x1
lbl_fn_802280B4_0000102C:
    cmpwi r0, 0x0
    beq lbl_fn_802280B4_00001040
    lwz r3, 0x14(r30)
    lwzx r5, r3, r18
    b lbl_fn_802280B4_00001044
lbl_fn_802280B4_00001040:
    li r5, 0x0
lbl_fn_802280B4_00001044:
    lwz r6, 0x30(r5)
    cmpwi r6, 0x0
    ble lbl_fn_802280B4_00001058
    lwz r4, 0x2c(r5)
    b lbl_fn_802280B4_0000105C
lbl_fn_802280B4_00001058:
    li r4, 0x0
lbl_fn_802280B4_0000105C:
    lwz r0, 0x168(r25)
    li r3, 0x0
    lwz r4, 0x4(r4)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_802280B4_00001094
lbl_fn_802280B4_00001074:
    lwz r0, 0x164(r25)
    add r26, r0, r3
    lwz r0, 0x14(r26)
    cmpw r4, r0
    bne lbl_fn_802280B4_0000108C
    b lbl_fn_802280B4_00001098
lbl_fn_802280B4_0000108C:
    addi r3, r3, 0x1c0
    bdnz lbl_fn_802280B4_00001074
lbl_fn_802280B4_00001094:
    li r26, 0x0
lbl_fn_802280B4_00001098:
    cmpwi r26, 0x0
    beq lbl_fn_802280B4_0000129C
    cmpwi r6, 0x1
    ble lbl_fn_802280B4_000010B4
    lwz r3, 0x2c(r5)
    addi r3, r3, 0x8
    b lbl_fn_802280B4_000010B8
lbl_fn_802280B4_000010B4:
    li r3, 0x0
lbl_fn_802280B4_000010B8:
    cmpwi r6, 0x3
    lwz r29, 0x4(r3)
    ble lbl_fn_802280B4_000010D0
    lwz r3, 0x2c(r5)
    addi r4, r3, 0x18
    b lbl_fn_802280B4_000010D4
lbl_fn_802280B4_000010D0:
    li r4, 0x0
lbl_fn_802280B4_000010D4:
    stw r16, 0xc(r1)
    mr r3, r26
    lwz r28, 0x4(r4)
    bl fn_80012934
    cmpwi r3, 0x0
    mr r15, r3
    beq lbl_fn_802280B4_0000111C
    bl fn_80179AB4
    stb r3, 0xe(r1)
    mr r3, r15
    bl fn_80179A34
    subi r0, r17, 0x7453
    stb r29, 0xf(r1)
    mulhw r0, r0, r3
    srawi r0, r0, 12
    srwi r3, r0, 31
    add r0, r0, r3
    sth r0, 0xc(r1)
lbl_fn_802280B4_0000111C:
    mr r5, r21
    lwz r3, 0xc(r1)
    li r4, 0x0
    mtctr r20
lbl_fn_802280B4_0000112C:
    lwz r0, 0x4c(r5)
    cmplw r3, r0
    bne lbl_fn_802280B4_00001148
    slwi r0, r4, 3
    add r3, r21, r0
    addi r15, r3, 0x4c
    b lbl_fn_802280B4_0000117C
lbl_fn_802280B4_00001148:
    addi r5, r5, 0x8
    addi r4, r4, 0x1
    bdnz lbl_fn_802280B4_0000112C
    mr r4, r26
    mr r5, r29
    addi r3, r1, 0x10
    bl fn_80228928
    lwz r0, 0x10(r1)
    srwi. r0, r0, 31
    beq lbl_fn_802280B4_00001178
    lwz r3, 0x18(r1)
    bl dtor_80084684
lbl_fn_802280B4_00001178:
    li r15, 0x0
lbl_fn_802280B4_0000117C:
    cmpwi r15, 0x0
    bne lbl_fn_802280B4_00001284
    lwz r0, 0x48(r21)
    cmpwi r0, 0x10
    bge lbl_fn_802280B4_000012B0
    stw r16, 0x8(r1)
    mr r3, r26
    bl fn_80012934
    cmpwi r3, 0x0
    mr r15, r3
    beq lbl_fn_802280B4_000011D4
    bl fn_80179AB4
    stb r3, 0xa(r1)
    mr r3, r15
    bl fn_80179A34
    subi r0, r17, 0x7453
    stb r29, 0xb(r1)
    mulhw r0, r0, r3
    srawi r0, r0, 12
    srwi r3, r0, 31
    add r0, r0, r3
    sth r0, 0x8(r1)
lbl_fn_802280B4_000011D4:
    lwz r0, 0x48(r21)
    mr r4, r26
    lwz r7, 0x8(r1)
    mr r5, r29
    slwi r0, r0, 3
    addi r3, r1, 0x1c
    add r6, r21, r0
    stw r7, 0x4c(r6)
    bl fn_80228928
    lwz r0, 0x1c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_802280B4_0000120C
    mr r3, r27
    b lbl_fn_802280B4_00001210
lbl_fn_802280B4_0000120C:
    lwz r3, 0x24(r1)
lbl_fn_802280B4_00001210:
    bl fn_8006AA20
    cmpwi r3, 0x0
    beq lbl_fn_802280B4_00001258
    mr r3, r26
    bl fn_80012934
    mr r4, r3
    mr r3, r21
    bl fn_802251F8
    lwz r0, 0x48(r21)
    li r4, 0x1
    slwi r0, r0, 3
    add r5, r21, r0
    stw r3, 0x50(r5)
    lwz r0, 0x48(r21)
    slwi r0, r0, 3
    add r3, r21, r0
    lwz r3, 0x50(r3)
    bl fn_800D246C
lbl_fn_802280B4_00001258:
    lwz r3, 0x48(r21)
    addi r0, r3, 0x1
    stw r0, 0x48(r21)
    slwi r3, r3, 3
    lwz r0, 0x1c(r1)
    add r3, r21, r3
    addi r15, r3, 0x4c
    srwi. r0, r0, 31
    beq lbl_fn_802280B4_00001284
    lwz r3, 0x24(r1)
    bl dtor_80084684
lbl_fn_802280B4_00001284:
    lwz r3, 0x4(r15)
    cmpwi r3, 0x0
    beq lbl_fn_802280B4_0000129C
    mr r4, r29
    mr r5, r28
    bl fn_80227D2C
lbl_fn_802280B4_0000129C:
    addi r22, r22, 0x1
    addi r18, r18, 0x8
lbl_fn_802280B4_000012A4:
    lwz r3, 0x18(r30)
    cmpw r22, r3
    blt lbl_fn_802280B4_00001014
lbl_fn_802280B4_000012B0:
    addi r23, r23, 0x1
    addi r19, r19, 0x8
lbl_fn_802280B4_000012B8:
    lwz r3, 0x1c(r31)
    cmpw r23, r3
    blt lbl_fn_802280B4_00000FCC
lbl_fn_802280B4_000012C4:
    addi r24, r24, 0x1
    addi r14, r14, 0x8
lbl_fn_802280B4_000012CC:
    lwz r3, 0x3c(r1)
    lwz r3, 0x40(r3)
    cmpw r24, r3
    blt lbl_fn_802280B4_00000F80
    lwz r3, 0x38(r1)
    addi r3, r3, 0x1
    stw r3, 0x38(r1)
    lwz r3, 0x40(r1)
    addi r3, r3, 0x8
    stw r3, 0x40(r1)
lbl_fn_802280B4_000012F4:
    lwz r4, 0xbc(r25)
    lwz r0, 0x38(r1)
    cmpw r0, r4
    blt lbl_fn_802280B4_00000F34
    lis r14, lbl_80742EA8@ha
    mr r3, r21
    addi r4, r14, lbl_80742EA8@l
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x10c(r21)
    li r4, 0x1
    bl fn_800D246C
    addi r4, r14, lbl_80742EA8@l
    addi r3, r21, 0x120
    addi r4, r4, 0x24
    bl fn_800D5908
    lwz r3, 0x194(r21)
    li r0, 0x0
    stb r0, 0x14d(r21)
    cmpwi r3, 0x0
    stb r0, 0x14e(r21)
    beq lbl_fn_802280B4_00001358
    beq lbl_fn_802280B4_00001358
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_802280B4_00001358:
    li r0, 0x8
    stw r0, 0x190(r21)
    li r3, 0x50
    li r4, 0x4
    la r5, lbl_8087D764
    la r6, lbl_8087D760
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_8007A748@ha
    li r5, 0x0
    addi r4, r4, fn_8007A748@l
    li r6, 0x8
    li r7, 0x8
    bl fn_80695720
    stw r3, 0x194(r21)
    b lbl_fn_802280B4_0000139C
    stw r0, 0x194(r21)
lbl_fn_802280B4_0000139C:
    lfs f0, lbl_80883090
    li r6, 0x0
    li r5, 0x0
    li r4, 0x5
    b lbl_fn_802280B4_000013CC
lbl_fn_802280B4_000013B0:
    lwz r3, 0x194(r21)
    addi r6, r6, 0x1
    stwx r4, r3, r5
    lwz r0, 0x194(r21)
    add r3, r0, r5
    addi r5, r5, 0x8
    stfs f0, 0x4(r3)
lbl_fn_802280B4_000013CC:
    lwz r14, 0x190(r21)
    cmplw r6, r14
    blt lbl_fn_802280B4_000013B0
    lwz r3, 0x188(r21)
    cmpwi r3, 0x0
    beq lbl_fn_802280B4_000013F0
    beq lbl_fn_802280B4_000013F0
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_802280B4_000013F0:
    cmpwi r14, 0x0
    stw r14, 0x184(r21)
    beq lbl_fn_802280B4_00001438
    slwi r3, r14, 3
    li r4, 0x0
    addi r3, r3, 0x10
    la r5, lbl_8087D764
    la r6, lbl_8087D760
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_8007A748@ha
    mr r7, r14
    addi r4, r4, fn_8007A748@l
    li r5, 0x0
    li r6, 0x8
    bl fn_80695720
    stw r3, 0x188(r21)
    b lbl_fn_802280B4_00001440
lbl_fn_802280B4_00001438:
    li r0, 0x0
    stw r0, 0x188(r21)
lbl_fn_802280B4_00001440:
    li r4, 0x0
    li r6, 0x0
    b lbl_fn_802280B4_00001474
lbl_fn_802280B4_0000144C:
    lwz r3, 0x194(r21)
    addi r4, r4, 0x1
    lwz r0, 0x188(r21)
    add r5, r3, r6
    add r3, r0, r6
    lwz r0, 0x0(r5)
    stw r0, 0x0(r3)
    addi r6, r6, 0x8
    lfs f0, 0x4(r5)
    stfs f0, 0x4(r3)
lbl_fn_802280B4_00001474:
    lwz r0, 0x184(r21)
    cmplw r4, r0
    blt lbl_fn_802280B4_0000144C
    addi r11, r1, 0x90
    mr r3, r21
    bl _restgpr_14
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_802288D0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_80742EA8@ha
    li r7, 0x0
    stw r0, 0x14(r1)
    addi r4, r4, lbl_80742EA8@l
    addi r5, r4, 0x52
    stw r31, 0xc(r1)
    mr r31, r3
    li r3, 0x1a0
    li r4, 0x1
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_802288D0_000014E0
    mr r4, r31
    bl fn_802280B4
lbl_fn_802288D0_000014E0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80228928(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stmw r27, 0x3c(r1)
    mr r31, r3
    mr r3, r4
    bl fn_80012934
    cmpwi r3, 0x0
    bne lbl_fn_80228928_00001574
    lis r3, lbl_80742EA8@ha
    li r0, 0x0
    addi r3, r3, lbl_80742EA8@l
    stw r0, 0x0(r31)
    addi r30, r3, 0x52
    stw r0, 0x4(r31)
    mr r3, r30
    stw r0, 0x8(r31)
    bl strlen
    mr r28, r3
    mr r3, r31
    mr r4, r28
    bl fn_80013DC4
    lbz r0, 0x24(r1)
    mr r3, r31
    stb r0, 0x20(r1)
    mr r6, r30
    add r7, r30, r28
    addi r8, r1, 0x20
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    b lbl_fn_80228928_000016AC
lbl_fn_80228928_00001574:
    lwz r0, 0x21c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80228928_000015DC
    lis r3, lbl_80742EA8@ha
    li r0, 0x0
    addi r3, r3, lbl_80742EA8@l
    stw r0, 0x0(r31)
    addi r30, r3, 0x52
    stw r0, 0x4(r31)
    mr r3, r30
    stw r0, 0x8(r31)
    bl strlen
    mr r28, r3
    mr r3, r31
    mr r4, r28
    bl fn_80013DC4
    lbz r0, 0x1c(r1)
    mr r3, r31
    stb r0, 0x18(r1)
    mr r6, r30
    add r7, r30, r28
    addi r8, r1, 0x18
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    b lbl_fn_80228928_000016AC
lbl_fn_80228928_000015DC:
    addi r3, r3, 0xb0
    bl fn_8008B130
    li r30, 0x0
    stw r30, 0x28(r1)
    mr r29, r3
    addi r28, r1, 0x28
    stw r30, 0x2c(r1)
    stw r30, 0x30(r1)
    bl strlen
    mr r27, r3
    mr r3, r28
    mr r4, r27
    bl fn_80013DC4
    lbz r0, 0x14(r1)
    mr r3, r28
    stb r0, 0x10(r1)
    mr r6, r29
    add r7, r29, r27
    addi r8, r1, 0x10
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    lwz r3, 0x28(r1)
    srwi. r0, r3, 31
    bne lbl_fn_80228928_00001658
    lwz r0, 0x2c(r1)
    stw r0, 0x4(r31)
    stw r3, 0x0(r31)
    lwz r0, 0x30(r1)
    stw r0, 0x8(r31)
    b lbl_fn_80228928_00001698
lbl_fn_80228928_00001658:
    stw r30, 0x0(r31)
    mr r3, r31
    stw r30, 0x4(r31)
    stw r30, 0x8(r31)
    lwz r4, 0x2c(r1)
    bl fn_80013DC4
    lbz r5, 0xc(r1)
    mr r3, r31
    stb r5, 0x8(r1)
    addi r8, r1, 0x8
    lwz r6, 0x30(r1)
    li r4, 0x0
    lwz r0, 0x2c(r1)
    li r5, 0x0
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_80228928_00001698:
    lwz r0, 0x28(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80228928_000016AC
    lwz r3, 0x30(r1)
    bl dtor_80084684
lbl_fn_80228928_000016AC:
    lmw r27, 0x3c(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80228AF4(void)
{
    nofralloc
    b fn_80228AF8
}

asm void fn_80228AF8(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    li r0, 0x0
    stmw r26, 0x18(r1)
    mr r29, r5
    mr r27, r3
    mr r28, r4
    stw r0, 0x8(r1)
    mr r30, r6
    mr r31, r7
    mr r3, r29
    bl fn_80012934
    cmpwi r3, 0x0
    mr r26, r3
    beq lbl_fn_80228AF8_00001734
    bl fn_80179AB4
    stb r3, 0xa(r1)
    mr r3, r26
    bl fn_80179A34
    lis r4, 0x68dc
    stb r30, 0xb(r1)
    subi r0, r4, 0x7453
    mulhw r0, r0, r3
    srawi r0, r0, 12
    srwi r3, r0, 31
    add r0, r0, r3
    sth r0, 0x8(r1)
lbl_fn_80228AF8_00001734:
    li r0, 0x10
    mr r5, r27
    lwz r3, 0x8(r1)
    li r4, 0x0
    mtctr r0
lbl_fn_80228AF8_00001748:
    lwz r0, 0x4c(r5)
    cmplw r3, r0
    bne lbl_fn_80228AF8_00001764
    slwi r0, r4, 3
    add r3, r27, r0
    addi r4, r3, 0x4c
    b lbl_fn_80228AF8_00001798
lbl_fn_80228AF8_00001764:
    addi r5, r5, 0x8
    addi r4, r4, 0x1
    bdnz lbl_fn_80228AF8_00001748
    mr r4, r29
    mr r5, r30
    addi r3, r1, 0xc
    bl fn_80228928
    lwz r0, 0xc(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80228AF8_00001794
    lwz r3, 0x14(r1)
    bl dtor_80084684
lbl_fn_80228AF8_00001794:
    li r4, 0x0
lbl_fn_80228AF8_00001798:
    cmpwi r4, 0x0
    beq lbl_fn_80228AF8_00001858
    slwi r0, r28, 4
    add r3, r27, r0
    lwz r5, 0xd8(r3)
    cmpwi r5, 0x0
    beq lbl_fn_80228AF8_000017C0
    lwz r0, 0x38(r5)
    ori r0, r0, 0x4
    stw r0, 0x38(r5)
lbl_fn_80228AF8_000017C0:
    lwz r26, 0x4(r4)
    cmpwi r26, 0x0
    beq lbl_fn_80228AF8_00001858
    subi r0, r28, 0x1
    stw r26, 0xd8(r3)
    cntlzw r0, r0
    mr r3, r26
    mr r4, r30
    mr r5, r31
    srwi r6, r0, 5
    bl fn_80227434
    lwz r3, lbl_8087F430
    li r4, 0x0
    cmpwi r3, 0x0
    beq lbl_fn_80228AF8_0000182C
    lwz r5, 0x4c(r3)
    cmpwi r5, 0xe
    bne lbl_fn_80228AF8_00001814
    lwz r0, 0x50(r3)
    cmpwi r0, 0x6
    beq lbl_fn_80228AF8_00001828
lbl_fn_80228AF8_00001814:
    cmpwi r5, 0x1d
    bne lbl_fn_80228AF8_0000182C
    lwz r0, 0x50(r3)
    cmpwi r0, 0x6
    bne lbl_fn_80228AF8_0000182C
lbl_fn_80228AF8_00001828:
    li r4, 0x1
lbl_fn_80228AF8_0000182C:
    subi r0, r28, 0x1
    mr r3, r26
    cntlzw r0, r0
    srwi r5, r0, 5
    bl fn_80226B28
    lwz r0, 0x38(r26)
    mr r3, r26
    li r4, 0x0
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r26)
    bl fn_800D246C
lbl_fn_80228AF8_00001858:
    lmw r26, 0x18(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80228CA0(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    stw r0, 0xd4(r1)
    addi r11, r1, 0xa0
    stfd f31, 0xc0(r1)
    psq_st f31, 0xc8(r1), 0, 0
    stfd f30, 0xb0(r1)
    psq_st f30, 0xb8(r1), 0, 0
    stfd f29, 0xa0(r1)
    psq_st f29, 0xa8(r1), 0, 0
    bl _savegpr_25
    fmr f29, f1
    cmpwi r7, 0x0
    lis r0, 0x4330
    fmr f30, f2
    stw r0, 0x68(r1)
    mr r26, r3
    stw r0, 0x70(r1)
    mr r31, r4
    lwz r30, 0xd8(r1)
    mr r27, r5
    mr r28, r6
    mr r29, r9
    bne lbl_fn_80228CA0_000018D4
    lfs f31, lbl_80883098
    b lbl_fn_80228CA0_000018E8
lbl_fn_80228CA0_000018D4:
    cmpwi r7, 0x1
    bne lbl_fn_80228CA0_000018E4
    lfs f31, lbl_8088309C
    b lbl_fn_80228CA0_000018E8
lbl_fn_80228CA0_000018E4:
    lfs f31, lbl_808830A0
lbl_fn_80228CA0_000018E8:
    cmpwi r10, 0x0
    bne lbl_fn_80228CA0_00001984
    lwz r6, lbl_8087EEE0
    slwi r4, r4, 4
    lis r5, lbl_80742E88@ha
    lfs f0, lbl_808830A4
    lwz r0, 0x3c(r6)
    add r4, r3, r4
    lwz r3, 0xcc(r4)
    cmpwi r30, 0x0
    xoris r0, r0, 0x8000
    stw r0, 0x6c(r1)
    lfd f4, lbl_80742E88@l(r5)
    lfd f3, 0x68(r1)
    lfs f2, 0x0(r3)
    fsubs f3, f3, f4
    fmuls f2, f3, f2
    stfs f2, 0xd0(r4)
    lfs f2, 0xd4(r4)
    fadds f0, f2, f0
    stfs f0, 0xd4(r4)
    bne lbl_fn_80228CA0_00001950
    lfs f2, 0xd4(r4)
    lfs f0, lbl_808830A8
    fadds f0, f2, f0
    stfs f0, 0xd4(r4)
lbl_fn_80228CA0_00001950:
    cmpwi r30, 0x1
    bne lbl_fn_80228CA0_00001968
    lfs f2, 0xd4(r4)
    lfs f0, lbl_808830AC
    fadds f0, f2, f0
    stfs f0, 0xd4(r4)
lbl_fn_80228CA0_00001968:
    cmpwi r30, 0x2
    bne lbl_fn_80228CA0_000019BC
    lfs f2, 0xd4(r4)
    lfs f0, lbl_808830B0
    fadds f0, f2, f0
    stfs f0, 0xd4(r4)
    b lbl_fn_80228CA0_000019BC
lbl_fn_80228CA0_00001984:
    cmpwi r10, 0x2
    bne lbl_fn_80228CA0_000019BC
    fmr f1, f31
    lwz r3, lbl_8087EEC8
    lfs f2, lbl_80883094
    la r4, lbl_8087DBD8
    li r5, 0x1
    li r6, 0x1
    bl fn_8006EF48
    slwi r0, r31, 4
    add r3, r26, r0
    lfs f0, 0xd0(r3)
    fadds f0, f0, f1
    stfs f0, 0xd0(r3)
lbl_fn_80228CA0_000019BC:
    lwz r0, 0x11c(r26)
    cmpw r0, r31
    beq lbl_fn_80228CA0_000019D4
    lwz r3, lbl_8087F008
    li r4, 0x0
    bl fn_800DAA3C
lbl_fn_80228CA0_000019D4:
    li r3, 0x0
    stw r31, 0x11c(r26)
    cntlzw r0, r3
    srwi r0, r0, 5
    stw r3, 0x28(r1)
    cntlzw r0, r0
    srwi. r0, r0, 5
    stw r3, 0x2c(r1)
    stw r3, 0x30(r1)
    stw r31, 0x20(r1)
    stfs f29, 0x24(r1)
    bne lbl_fn_80228CA0_00001A10
    lbz r0, 0x28(r1)
    clrlwi r25, r0, 25
    b lbl_fn_80228CA0_00001A14
lbl_fn_80228CA0_00001A10:
    li r25, 0x0
lbl_fn_80228CA0_00001A14:
    lbz r0, 0xc(r1)
    mr r3, r27
    stb r0, 0x8(r1)
    bl fn_80686A48
    slwi r0, r3, 1
    mr r5, r25
    mr r6, r27
    addi r3, r1, 0x28
    addi r8, r1, 0x8
    add r7, r27, r0
    li r4, 0x0
    bl fn_8006F72C
    slwi r31, r31, 4
    addi r4, r1, 0x34
    add r3, r26, r31
    psq_l f1, 0xd0(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stw r28, 0x3c(r1)
    lwz r3, 0xcc(r3)
    lwz r0, 0x8(r3)
    stw r0, 0x40(r1)
    cmpwi r0, 0x1
    beq lbl_fn_80228CA0_00001A7C
    cmpwi r0, 0x2
    beq lbl_fn_80228CA0_00001A88
    b lbl_fn_80228CA0_00001A90
lbl_fn_80228CA0_00001A7C:
    li r0, 0x1
    stw r0, 0x3c(r1)
    b lbl_fn_80228CA0_00001A90
lbl_fn_80228CA0_00001A88:
    li r0, 0x2
    stw r0, 0x3c(r1)
lbl_fn_80228CA0_00001A90:
    extrwi r0, r29, 8, 8
    stw r0, 0x74(r1)
    extrwi r0, r29, 8, 16
    lis r5, lbl_80742E90@ha
    stw r0, 0x6c(r1)
    li r6, 0x1
    lfd f0, 0x70(r1)
    clrlwi r3, r29, 24
    lfd f6, lbl_80742E90@l(r5)
    srwi r0, r29, 24
    lfd f3, 0x68(r1)
    addi r4, r1, 0x20
    stw r3, 0x74(r1)
    fsubs f4, f0, f6
    lfs f5, lbl_808830B4
    fsubs f3, f3, f6
    stw r0, 0x6c(r1)
    lfd f2, 0x70(r1)
    fmuls f4, f5, f4
    lfd f0, 0x68(r1)
    fmuls f3, f5, f3
    fsubs f2, f2, f6
    stw r6, 0x44(r1)
    fsubs f0, f0, f6
    lwz r3, lbl_8087F008
    fmuls f2, f5, f2
    stfs f4, 0x10(r1)
    fmuls f0, f5, f0
    stfs f3, 0x14(r1)
    stfs f2, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f4, 0x48(r1)
    stfs f3, 0x4c(r1)
    stfs f2, 0x50(r1)
    stfs f0, 0x54(r1)
    stfs f31, 0x58(r1)
    stfs f30, 0x5c(r1)
    stw r30, 0x60(r1)
    bl fn_800DAB68
    fmr f1, f31
    lwz r3, lbl_8087EEC8
    lfs f2, lbl_80883094
    mr r4, r27
    li r5, 0x1
    li r6, 0x1
    bl fn_8006EF48
    add r3, r26, r31
    addic. r0, r1, 0x28
    lfs f0, 0xd0(r3)
    fadds f0, f0, f1
    stfs f0, 0xd0(r3)
    beq lbl_fn_80228CA0_00001B74
    lwz r0, 0x28(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80228CA0_00001B74
    lwz r3, 0x30(r1)
    bl dtor_80084684
lbl_fn_80228CA0_00001B74:
    addi r11, r1, 0xa0
    psq_l f31, 0xc8(r1), 0, 0
    lfd f31, 0xc0(r1)
    psq_l f30, 0xb8(r1), 0, 0
    lfd f30, 0xb0(r1)
    psq_l f29, 0xa8(r1), 0, 0
    lfd f29, 0xa0(r1)
    bl _restgpr_25
    lwz r0, 0xd4(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}
