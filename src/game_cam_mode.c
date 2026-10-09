#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_26(void);
extern void _savegpr_26(void);
extern void dtor_80084684(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_80044C50(void);
extern void fn_80044CCC(void);
extern void fn_80044E0C(void);
extern void fn_8004D388(void);
extern void fn_8004ED34(void);
extern void fn_800846FC(void);
extern void fn_800E2FE0(void);
extern void fn_800EC7F0(void);
extern void fn_800EF7F8(void);
extern void fn_8011F970(void);
extern void fn_8014FB60(void);
extern void fn_8016F3D0(void);
extern void fn_80179D44(void);
extern void fn_80207C00(void);
extern void fn_80207C08(void);
extern void fn_80207C34(void);
extern void fn_80219E6C(void);
extern void fn_8021A984(void);
extern void fn_80237518(void);
extern void fn_80237654(void);
extern void fn_802377B8(void);
extern void fn_8023780C(void);
extern void fn_8023781C(void);
extern void fn_80370174(void);
extern void fn_80373148(void);
extern void fn_803761BC(void);
extern void fn_80473E74(void);
extern void fn_80473E8C(void);
extern void fn_804EB1B0(void);
extern void fn_805F8E70(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_80680CF8(void);
extern void fn_80682428(void);
extern void fn_8068AEA4(void);
extern void fn_80695720(void);
extern void fn_80695A50(void);
extern void fn_80695AD0(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 lbl_80735268[];
extern u8 lbl_80735428[];
extern u8 lbl_80766768[];
extern u8 lbl_80779B54[];
extern u8 lbl_80790000[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087D968;
extern u32 lbl_8087EE98;
extern u32 lbl_8087F030;
extern u32 lbl_8087F034;
extern u32 lbl_8087F038;
extern u32 lbl_8087F040;
extern u32 lbl_8087F430;
extern u32 lbl_8087F610;
extern u32 lbl_8087F8A0;
extern u32 lbl_8087F9E8;
extern u32 lbl_808812D8;
extern u32 lbl_808812DC;
extern u32 lbl_808812E8;
extern u32 lbl_808812FC;
extern u32 lbl_80881300;
extern u32 lbl_80881304;
extern u32 lbl_80881330;
extern u32 lbl_80881348;
extern u32 lbl_80881368;
extern u32 lbl_80881384;
extern u32 lbl_808813A0;
extern u32 lbl_808813A4;
extern u32 lbl_808813A8;
extern u32 lbl_808813AC;
extern u32 lbl_808813B0;

/* Function declarations */
void fn_800EDFE8(void);
void fn_800EE180(void);
void fn_800EE360(void);
void fn_800EE494(void);
void fn_800EE4D8(void);
void fn_800EE5A4(void);
void fn_800EE5AC(void);
void fn_800EE640(void);
void fn_800EE794(void);
void fn_800EEFDC(void);
void fn_800EF080(void);
void fn_800EF270(void);
void fn_800EF2AC(void);
void fn_800EF2B4(void);
void fn_800EF2F0(void);
void fn_800EF304(void);
void fn_800EF308(void);
void fn_800EF310(void);
void fn_800EF31C(void);
void fn_800EF324(void);
void fn_800EF368(void);
void fn_800EF370(void);
void fn_800EF38C(void);
void fn_800EF394(void);
void fn_800EF3D8(void);
void fn_800EF3DC(void);
void fn_800EF3E0(void);
void fn_800EF3E8(void);
void fn_800EF3EC(void);
void fn_800EF588(void);
void fn_800EF6BC(void);
void fn_800EF73C(void);

asm void fn_800EDFE8(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    lwz r5, 0x8(r4)
    stw r0, 0x64(r1)
    srwi. r0, r5, 31
    stw r31, 0x5c(r1)
    mr r31, r4
    stw r30, 0x58(r1)
    mr r30, r3
    stw r29, 0x54(r1)
    addi r29, r1, 0x20
    stw r28, 0x50(r1)
    bne lbl_fn_800EDFE8_0000004C
    lwz r3, 0xc(r4)
    lwz r0, 0x10(r4)
    stw r5, 0x20(r1)
    stw r3, 0x24(r1)
    stw r0, 0x28(r1)
    b lbl_fn_800EDFE8_00000090
lbl_fn_800EDFE8_0000004C:
    li r0, 0x0
    stw r0, 0x20(r1)
    lwz r4, 0xc(r4)
    mr r3, r29
    stw r0, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80013DC4
    lbz r5, 0x8(r1)
    mr r3, r29
    stb r5, 0xc(r1)
    addi r8, r1, 0xc
    lwz r6, 0x10(r31)
    li r4, 0x0
    lwz r0, 0xc(r31)
    li r5, 0x0
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_800EDFE8_00000090:
    lwz r4, 0x14(r31)
    srwi. r0, r4, 31
    bne lbl_fn_800EDFE8_000000B4
    lwz r3, 0x18(r31)
    lwz r0, 0x1c(r31)
    stw r4, 0x2c(r1)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_800EDFE8_000000FC
lbl_fn_800EDFE8_000000B4:
    li r0, 0x0
    stw r0, 0xc(r29)
    lwz r4, 0x18(r31)
    addi r3, r29, 0xc
    stw r0, 0x10(r29)
    addi r28, r31, 0x18
    stw r0, 0x14(r29)
    bl fn_80013DC4
    lbz r5, 0x10(r1)
    addi r3, r29, 0xc
    stb r5, 0x14(r1)
    addi r8, r1, 0x14
    lwz r6, 0x1c(r31)
    li r4, 0x0
    lwz r0, 0x0(r28)
    li r5, 0x0
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_800EDFE8_000000FC:
    lwz r0, 0x4(r31)
    mr r3, r30
    lbz r10, 0x20(r31)
    addi r4, r1, 0x20
    lbz r9, 0x21(r31)
    addi r5, r1, 0x1c
    lwz r8, 0x24(r31)
    addi r6, r1, 0x18
    lbz r7, 0x28(r31)
    stb r10, 0x38(r1)
    stb r9, 0x39(r1)
    stw r8, 0x3c(r1)
    stb r7, 0x40(r1)
    stw r0, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_800EC7F0
    addi r29, r1, 0x20
    addic. r0, r29, 0xc
    beq lbl_fn_800EDFE8_0000015C
    lwz r0, 0x2c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_800EDFE8_0000015C
    lwz r3, 0x34(r1)
    bl dtor_80084684
lbl_fn_800EDFE8_0000015C:
    cmpwi r29, 0x0
    beq lbl_fn_800EDFE8_00000178
    lwz r0, 0x20(r1)
    srwi. r0, r0, 31
    beq lbl_fn_800EDFE8_00000178
    lwz r3, 0x28(r1)
    bl dtor_80084684
lbl_fn_800EDFE8_00000178:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    lwz r28, 0x50(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_800EE180(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, 0x14a8(r3)
    extrwi. r0, r0, 1, 5
    bne lbl_fn_800EE180_000001B8
    li r3, 0x0
    b lbl_fn_800EE180_00000368
lbl_fn_800EE180_000001B8:
    lwz r7, 0x38(r3)
    li r5, 0x0
    li r4, 0x0
    li r6, 0x0
    rlwinm r0, r7, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_800EE180_000001E4
    clrlwi r0, r7, 31
    cmplwi r0, 0x1
    beq lbl_fn_800EE180_000001E4
    li r6, 0x1
lbl_fn_800EE180_000001E4:
    cmpwi r6, 0x0
    beq lbl_fn_800EE180_00000200
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_800EE180_00000200
    li r4, 0x1
lbl_fn_800EE180_00000200:
    cmpwi r4, 0x0
    beq lbl_fn_800EE180_00000234
    lwz r0, 0x55c(r3)
    li r4, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_800EE180_00000228
    lwz r0, 0x560(r3)
    cmpwi r0, 0x1c
    bne lbl_fn_800EE180_00000228
    li r4, 0x1
lbl_fn_800EE180_00000228:
    cmpwi r4, 0x0
    bne lbl_fn_800EE180_00000234
    li r5, 0x1
lbl_fn_800EE180_00000234:
    cmpwi r5, 0x0
    beq lbl_fn_800EE180_00000254
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800EE180_0000025C
    lwz r0, 0xd18(r3)
    cmpwi r0, 0x0
    bne lbl_fn_800EE180_0000025C
lbl_fn_800EE180_00000254:
    li r3, 0x0
    b lbl_fn_800EE180_00000368
lbl_fn_800EE180_0000025C:
    lwz r0, 0x54c(r3)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    beq lbl_fn_800EE180_00000278
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 16
    beq lbl_fn_800EE180_00000280
lbl_fn_800EE180_00000278:
    li r3, 0x0
    b lbl_fn_800EE180_00000368
lbl_fn_800EE180_00000280:
    lwz r7, 0xd1c(r3)
    cmpwi r7, 0x0
    beq lbl_fn_800EE180_00000310
    lwz r8, 0x38(r7)
    li r5, 0x0
    li r4, 0x0
    li r6, 0x0
    rlwinm r0, r8, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_800EE180_000002B8
    clrlwi r0, r8, 31
    cmplwi r0, 0x1
    beq lbl_fn_800EE180_000002B8
    li r6, 0x1
lbl_fn_800EE180_000002B8:
    cmpwi r6, 0x0
    beq lbl_fn_800EE180_000002D4
    lwz r0, 0x7e0(r7)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_800EE180_000002D4
    li r4, 0x1
lbl_fn_800EE180_000002D4:
    cmpwi r4, 0x0
    beq lbl_fn_800EE180_00000308
    lwz r0, 0x55c(r7)
    li r4, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_800EE180_000002FC
    lwz r0, 0x560(r7)
    cmpwi r0, 0x1c
    bne lbl_fn_800EE180_000002FC
    li r4, 0x1
lbl_fn_800EE180_000002FC:
    cmpwi r4, 0x0
    bne lbl_fn_800EE180_00000308
    li r5, 0x1
lbl_fn_800EE180_00000308:
    cmpwi r5, 0x0
    bne lbl_fn_800EE180_00000318
lbl_fn_800EE180_00000310:
    li r3, 0x0
    b lbl_fn_800EE180_00000368
lbl_fn_800EE180_00000318:
    lwz r0, 0xc58(r3)
    cmpwi r0, 0xe
    bne lbl_fn_800EE180_0000032C
    li r3, 0x0
    b lbl_fn_800EE180_00000368
lbl_fn_800EE180_0000032C:
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    bne lbl_fn_800EE180_00000344
    li r3, 0x0
    b lbl_fn_800EE180_00000368
lbl_fn_800EE180_00000344:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_800EE180_00000364
    bl fn_803761BC
    cmpwi r3, 0x0
    bne lbl_fn_800EE180_00000364
    li r3, 0x0
    b lbl_fn_800EE180_00000368
lbl_fn_800EE180_00000364:
    li r3, 0x1
lbl_fn_800EE180_00000368:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800EE360(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    beq lbl_fn_800EE360_000003A8
    mr r3, r0
    bl fn_804EB1B0
    cmpwi r3, 0x0
    beq lbl_fn_800EE360_00000498
lbl_fn_800EE360_000003A8:
    lwz r0, 0x12a4(r31)
    extrwi r0, r0, 1, 9
    cmplwi r0, 0x1
    beq lbl_fn_800EE360_000003D4
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_800EE360_000003D4
    li r4, 0x399
    bl fn_80370174
    cmpwi r3, 0x0
    bgt lbl_fn_800EE360_00000498
lbl_fn_800EE360_000003D4:
    lwz r3, 0x5c(r31)
    lwz r0, 0x9c(r3)
    rlwinm r0, r0, 0, 17, 17
    cmplwi r0, 0x4000
    bne lbl_fn_800EE360_0000042C
    lwz r5, lbl_8087F040
    cmpwi r5, 0x0
    beq lbl_fn_800EE360_00000498
    lwz r0, 0x170(r5)
    lwz r3, 0xd0(r3)
    cmplwi r0, 0x2
    bge lbl_fn_800EE360_00000498
    lwz r0, 0x170(r5)
    slwi r0, r0, 2
    add r0, r5, r0
    addic. r4, r0, 0x174
    beq lbl_fn_800EE360_0000041C
    stw r3, 0x0(r4)
lbl_fn_800EE360_0000041C:
    lwz r3, 0x170(r5)
    addi r0, r3, 0x1
    stw r0, 0x170(r5)
    b lbl_fn_800EE360_00000498
lbl_fn_800EE360_0000042C:
    lwz r5, 0x1438(r31)
    cmpwi r5, 0x0
    beq lbl_fn_800EE360_00000498
    lwz r0, 0x38(r5)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_800EE360_00000498
    lwz r4, 0x38(r5)
    li r3, 0x0
    lfs f0, lbl_808812DC
    li r0, 0x3
    rlwinm r4, r4, 0, 30, 28
    stw r4, 0x38(r5)
    addi r4, r1, 0x8
    stw r3, 0xc(r1)
    stw r3, 0x10(r1)
    stw r3, 0x14(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    stw r0, 0x8(r1)
    stw r31, 0x18(r1)
    lwz r3, 0x1438(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
lbl_fn_800EE360_00000498:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_800EE494(void)
{
    nofralloc
    lwz r6, 0x1464(r3)
    cmpwi r6, 0x0
    beq lbl_fn_800EE494_000004E8
    psq_l f1, 0x4(r6), 0, 0
    lfs f2, 0xc(r6)
    stfs f2, 0x8(r4)
    lfs f0, lbl_808812DC
    psq_st f1, 0x0(r4), 0, 0
    lwz r4, 0x1464(r3)
    li r3, 0x1
    lfs f3, 0x14(r4)
    stfs f3, 0x4(r5)
    stfs f0, 0x0(r5)
    stfs f0, 0x8(r5)
    blr
lbl_fn_800EE494_000004E8:
    li r3, 0x0
    blr
}

asm void fn_800EE4D8(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_800EE4D8_000005A4
    lwz r0, 0xf80(r3)
    cmpwi r0, 0x0
    bne lbl_fn_800EE4D8_0000053C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x14(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
    b lbl_fn_800EE4D8_00000558
lbl_fn_800EE4D8_0000053C:
    lis r5, lbl_80779B54@ha
    lwzu r4, lbl_80779B54@l(r5)
    stw r4, 0x14(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
lbl_fn_800EE4D8_00000558:
    lwz r5, 0x14(r1)
    addi r3, r1, 0x8
    lwz r4, 0x18(r1)
    lwz r0, 0x1c(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_800EE4D8_000005A4
    lwz r3, 0xf80(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x50(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_800EE4D8_000005A4
    li r3, 0x1
    b lbl_fn_800EE4D8_000005A8
lbl_fn_800EE4D8_000005A4:
    li r3, 0x0
lbl_fn_800EE4D8_000005A8:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_800EE5A4(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_800EE5AC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_fn_800EE5AC_0000063C
    lwz r0, 0x274(r4)
    cmpwi r0, 0x0
    bne lbl_fn_800EE5AC_000005FC
    b lbl_fn_800EE5AC_0000063C
lbl_fn_800EE5AC_000005FC:
    li r31, 0x0
    bl fn_8014FB60
    cmpwi r3, 0x0
    beq lbl_fn_800EE5AC_0000061C
    mr r3, r30
    mr r4, r29
    bl fn_80044C50
    mr r31, r3
lbl_fn_800EE5AC_0000061C:
    cmpwi r31, 0x0
    beq lbl_fn_800EE5AC_00000630
    mr r3, r30
    bl fn_80044CCC
    b lbl_fn_800EE5AC_0000063C
lbl_fn_800EE5AC_00000630:
    mr r3, r30
    li r4, 0x1
    bl fn_80044E0C
lbl_fn_800EE5AC_0000063C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800EE640(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bne lbl_fn_800EE640_00000684
    li r3, 0x0
    b lbl_fn_800EE640_00000794
lbl_fn_800EE640_00000684:
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_800EE640_000006C8
    lwz r0, 0x54c(r4)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    beq lbl_fn_800EE640_000006C8
    lwz r0, 0x954(r4)
    cmpwi r0, 0x0
    ble lbl_fn_800EE640_000006BC
    lwz r0, 0x9f8(r4)
    cmpwi r0, 0x0
    ble lbl_fn_800EE640_000006C8
lbl_fn_800EE640_000006BC:
    lwz r0, 0x5c(r4)
    cmpwi r0, 0x0
    bne lbl_fn_800EE640_000006D0
lbl_fn_800EE640_000006C8:
    li r3, 0x0
    b lbl_fn_800EE640_00000794
lbl_fn_800EE640_000006D0:
    lwz r0, 0x55c(r4)
    cmpwi r0, 0x6
    bne lbl_fn_800EE640_00000740
    lwz r0, 0x560(r4)
    cmpwi r0, 0x5a
    bge lbl_fn_800EE640_00000718
    cmpwi r0, 0x52
    bge lbl_fn_800EE640_00000704
    cmpwi r0, 0x13
    bge lbl_fn_800EE640_00000740
    cmpwi r0, 0x11
    bge lbl_fn_800EE640_00000738
    b lbl_fn_800EE640_00000740
lbl_fn_800EE640_00000704:
    cmpwi r0, 0x58
    bge lbl_fn_800EE640_00000738
    cmpwi r0, 0x54
    bge lbl_fn_800EE640_00000740
    b lbl_fn_800EE640_00000738
lbl_fn_800EE640_00000718:
    cmpwi r0, 0x7a
    beq lbl_fn_800EE640_00000738
    bge lbl_fn_800EE640_00000740
    cmpwi r0, 0x78
    bge lbl_fn_800EE640_00000740
    cmpwi r0, 0x6d
    bge lbl_fn_800EE640_00000738
    b lbl_fn_800EE640_00000740
lbl_fn_800EE640_00000738:
    li r3, 0x0
    b lbl_fn_800EE640_00000794
lbl_fn_800EE640_00000740:
    cmpwi r3, 0x0
    beq lbl_fn_800EE640_00000790
    mr r3, r31
    mr r4, r30
    li r5, 0x1
    bl fn_8016F3D0
    cmpwi r3, 0x0
    bne lbl_fn_800EE640_00000768
    li r3, 0x0
    b lbl_fn_800EE640_00000794
lbl_fn_800EE640_00000768:
    lwz r3, 0xd0c(r30)
    cmpwi r3, 0x0
    ble lbl_fn_800EE640_00000790
    lwz r0, 0xd0c(r31)
    cmpwi r0, 0x0
    ble lbl_fn_800EE640_00000790
    cmpw r3, r0
    beq lbl_fn_800EE640_00000790
    li r3, 0x0
    b lbl_fn_800EE640_00000794
lbl_fn_800EE640_00000790:
    li r3, 0x1
lbl_fn_800EE640_00000794:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800EE794(void)
{
    nofralloc
    stwu r1, -0x150(r1)
    mflr r0
    stw r0, 0x154(r1)
    addi r11, r1, 0x130
    stfd f31, 0x140(r1)
    psq_st f31, 0x148(r1), 0, 0
    stfd f30, 0x130(r1)
    psq_st f30, 0x138(r1), 0, 0
    bl _savegpr_26
    lwz r7, 0x38(r3)
    mr r30, r3
    mr r31, r4
    li r6, 0x0
    rlwinm r5, r7, 0, 29, 29
    li r0, 0x0
    cmplwi r5, 0x4
    li r5, 0x0
    beq lbl_fn_800EE794_00000804
    clrlwi r7, r7, 31
    cmplwi r7, 0x1
    beq lbl_fn_800EE794_00000804
    li r5, 0x1
lbl_fn_800EE794_00000804:
    cmpwi r5, 0x0
    beq lbl_fn_800EE794_00000820
    lwz r5, 0x7e0(r3)
    rlwinm r5, r5, 0, 26, 26
    cmplwi r5, 0x20
    beq lbl_fn_800EE794_00000820
    li r0, 0x1
lbl_fn_800EE794_00000820:
    cmpwi r0, 0x0
    beq lbl_fn_800EE794_00000854
    lwz r0, 0x55c(r3)
    li r5, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_800EE794_00000848
    lwz r0, 0x560(r3)
    cmpwi r0, 0x1c
    bne lbl_fn_800EE794_00000848
    li r5, 0x1
lbl_fn_800EE794_00000848:
    cmpwi r5, 0x0
    bne lbl_fn_800EE794_00000854
    li r6, 0x1
lbl_fn_800EE794_00000854:
    cmpwi r6, 0x0
    bne lbl_fn_800EE794_00000864
    li r3, 0x0
    b lbl_fn_800EE794_00000FCC
lbl_fn_800EE794_00000864:
    lfs f0, lbl_808812DC
    cmpwi r4, 0x0
    stfs f0, 0xa0(r1)
    stfs f0, 0xa4(r1)
    stfs f0, 0xa8(r1)
    bne lbl_fn_800EE794_000009DC
    lwz r0, lbl_8087F9E8
    cmpwi r0, 0x0
    beq lbl_fn_800EE794_000009DC
    lfs f30, lbl_808813A0
    li r27, 0x0
    li r29, 0x0
lbl_fn_800EE794_00000894:
    cmplwi r27, 0x20
    lwz r0, lbl_8087F9E8
    blt lbl_fn_800EE794_000008A8
    li r28, 0x0
    b lbl_fn_800EE794_000008B0
lbl_fn_800EE794_000008A8:
    add r3, r0, r29
    addi r28, r3, 0x48
lbl_fn_800EE794_000008B0:
    lwz r4, 0x8(r28)
    mr r3, r30
    bl fn_800EE640
    cmpwi r3, 0x0
    beq lbl_fn_800EE794_0000093C
    lwz r26, 0x4(r28)
    cmpwi r26, 0x0
    beq lbl_fn_800EE794_0000093C
    mr r3, r26
    bl fn_8021A984
    cmpwi r3, 0x0
    beq lbl_fn_800EE794_0000093C
    lwz r0, 0xac(r26)
    rlwinm r3, r0, 0, 7, 7
    subis r0, r3, 0x100
    cmplwi r0, 0x0
    beq lbl_fn_800EE794_0000093C
    lfs f3, 0x18(r28)
    addi r3, r1, 0x5c
    lfs f0, 0x530(r30)
    lfs f5, 0x14(r28)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r30)
    lfs f3, 0x10(r28)
    lfs f0, 0x528(r30)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x60(r1)
    stfs f0, 0x5c(r1)
    stfs f6, 0x64(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f30
    bge lbl_fn_800EE794_0000093C
    fmr f30, f1
    mr r31, r28
lbl_fn_800EE794_0000093C:
    addi r27, r27, 0x1
    addi r29, r29, 0x140
    cmpwi r27, 0x20
    blt lbl_fn_800EE794_00000894
    li r27, 0x0
    li r29, 0x0
lbl_fn_800EE794_00000954:
    cmplwi r27, 0x20
    lwz r0, lbl_8087F9E8
    blt lbl_fn_800EE794_00000968
    li r28, 0x0
    b lbl_fn_800EE794_00000970
lbl_fn_800EE794_00000968:
    add r3, r0, r29
    addi r28, r3, 0x48
lbl_fn_800EE794_00000970:
    lwz r4, 0x8(r28)
    mr r3, r30
    bl fn_800EE640
    cmpwi r3, 0x0
    beq lbl_fn_800EE794_000009CC
    lwz r26, 0x4(r28)
    cmpwi r26, 0x0
    beq lbl_fn_800EE794_000009CC
    mr r3, r26
    bl fn_8021A984
    cmpwi r3, 0x0
    beq lbl_fn_800EE794_000009CC
    lwz r4, 0xac(r26)
    rlwinm r3, r4, 0, 9, 9
    subis r0, r3, 0x40
    cmplwi r0, 0x0
    bne lbl_fn_800EE794_000009CC
    rlwinm r3, r4, 0, 7, 7
    subis r0, r3, 0x100
    cmplwi r0, 0x0
    beq lbl_fn_800EE794_000009CC
    mr r31, r28
    b lbl_fn_800EE794_000009DC
lbl_fn_800EE794_000009CC:
    addi r27, r27, 0x1
    addi r29, r29, 0x140
    cmpwi r27, 0x20
    blt lbl_fn_800EE794_00000954
lbl_fn_800EE794_000009DC:
    cmpwi r31, 0x0
    beq lbl_fn_800EE794_00000A08
    lfs f3, 0x5c(r31)
    addi r3, r1, 0xa0
    lfs f0, 0x28(r31)
    psq_l f1, 0x10(r31), 0, 0
    lfs f2, 0x18(r31)
    fmuls f30, f3, f0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0xa8(r1)
    b lbl_fn_800EE794_00000C04
lbl_fn_800EE794_00000A08:
    lwz r3, lbl_8087F8A0
    li r27, 0x0
    cmpwi r3, 0x0
    beq lbl_fn_800EE794_00000BD0
    lfs f30, lbl_808813A0
    lwz r26, 0x48(r3)
    b lbl_fn_800EE794_00000AB0
lbl_fn_800EE794_00000A24:
    mr r3, r30
    mr r4, r26
    bl fn_800EE640
    cmpwi r3, 0x0
    beq lbl_fn_800EE794_00000AAC
    lwz r3, 0xaa4(r26)
    cmpwi r3, 0x0
    ble lbl_fn_800EE794_00000A4C
    bl fn_80219E6C
    b lbl_fn_800EE794_00000A50
lbl_fn_800EE794_00000A4C:
    li r3, 0x0
lbl_fn_800EE794_00000A50:
    cmpwi r3, 0x0
    beq lbl_fn_800EE794_00000AAC
    bl fn_8021A984
    cmpwi r3, 0x0
    beq lbl_fn_800EE794_00000AAC
    lfs f3, 0x530(r30)
    addi r3, r1, 0x50
    lfs f0, 0x530(r26)
    lfs f5, 0x52c(r30)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r26)
    lfs f3, 0x528(r30)
    lfs f0, 0x528(r26)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x54(r1)
    stfs f0, 0x50(r1)
    stfs f6, 0x58(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f30
    bge lbl_fn_800EE794_00000AAC
    fmr f30, f1
    mr r27, r26
lbl_fn_800EE794_00000AAC:
    lwz r26, 0x14ac(r26)
lbl_fn_800EE794_00000AB0:
    cmpwi r26, 0x0
    bne lbl_fn_800EE794_00000A24
    cmpwi r27, 0x0
    bne lbl_fn_800EE794_00000B28
    lis r6, lbl_80735268@ha
    lwzu r5, lbl_80735268@l(r6)
    stw r5, 0x90(r1)
    addi r26, r1, 0x90
    lwz r4, 0x4(r6)
    li r28, 0x0
    lwz r3, 0x8(r6)
    lwz r0, 0xc(r6)
    stw r4, 0x94(r1)
    stw r3, 0x98(r1)
    stw r0, 0x9c(r1)
lbl_fn_800EE794_00000AEC:
    lwz r3, lbl_8087F8A0
    lwz r4, 0x0(r26)
    bl fn_8011F970
    mr r29, r3
    mr r3, r30
    mr r4, r29
    bl fn_800EE640
    cmpwi r3, 0x0
    beq lbl_fn_800EE794_00000B18
    mr r27, r29
    b lbl_fn_800EE794_00000B28
lbl_fn_800EE794_00000B18:
    addi r28, r28, 0x1
    addi r26, r26, 0x4
    cmplwi r28, 0x4
    blt lbl_fn_800EE794_00000AEC
lbl_fn_800EE794_00000B28:
    cmpwi r27, 0x0
    bne lbl_fn_800EE794_00000BC0
    lwz r3, lbl_8087F8A0
    lfs f30, lbl_808813A0
    lwz r26, 0x48(r3)
    b lbl_fn_800EE794_00000BB8
lbl_fn_800EE794_00000B40:
    mr r3, r30
    mr r4, r26
    bl fn_800EE640
    cmpwi r3, 0x0
    beq lbl_fn_800EE794_00000BB4
    lwz r3, 0x5c(r26)
    lbz r3, 0x122(r3)
    subi r0, r3, 0x2
    clrlwi r0, r0, 24
    cmplwi r0, 0x1
    bgt lbl_fn_800EE794_00000BB4
    lfs f3, 0x530(r30)
    addi r3, r1, 0x44
    lfs f0, 0x530(r26)
    lfs f5, 0x52c(r30)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r26)
    lfs f3, 0x528(r30)
    lfs f0, 0x528(r26)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x48(r1)
    stfs f0, 0x44(r1)
    stfs f6, 0x4c(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f30
    bge lbl_fn_800EE794_00000BB4
    fmr f30, f1
    mr r27, r26
lbl_fn_800EE794_00000BB4:
    lwz r26, 0x14ac(r26)
lbl_fn_800EE794_00000BB8:
    cmpwi r26, 0x0
    bne lbl_fn_800EE794_00000B40
lbl_fn_800EE794_00000BC0:
    cmpwi r27, 0x0
    bne lbl_fn_800EE794_00000BD0
    lwz r3, lbl_8087F8A0
    lwz r27, 0x48(r3)
lbl_fn_800EE794_00000BD0:
    cmpwi r27, 0x0
    beq lbl_fn_800EE794_00000BFC
    cmplw r27, r30
    beq lbl_fn_800EE794_00000BFC
    lfs f2, 0x530(r27)
    addi r3, r1, 0xa0
    psq_l f1, 0x528(r27), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lfs f30, lbl_80881384
    stfs f2, 0xa8(r1)
    b lbl_fn_800EE794_00000C04
lbl_fn_800EE794_00000BFC:
    li r3, 0x0
    b lbl_fn_800EE794_00000FCC
lbl_fn_800EE794_00000C04:
    lfs f5, 0x530(r30)
    addi r3, r1, 0x80
    lfs f0, 0xa8(r1)
    lfs f4, 0x528(r30)
    fsubs f5, f5, f0
    lfs f3, 0xa0(r1)
    lfs f0, lbl_808812DC
    fsubs f3, f4, f3
    stfs f5, 0x88(r1)
    stfs f3, 0x80(r1)
    stfs f0, 0x84(r1)
    bl fn_805F9940
    fcmpo cr0, f1, f30
    ble lbl_fn_800EE794_00000FC8
    addi r3, r1, 0x80
    mr r4, r3
    bl fn_805F98D0
    lfs f0, lbl_808812DC
    li r29, 0x0
    li r3, 0x1
    li r0, 0x96
    sth r3, 0xac(r1)
    sth r29, 0xae(r1)
    stw r0, 0xb4(r1)
    stfs f0, 0xb8(r1)
    stfs f0, 0xbc(r1)
    stfs f0, 0xc0(r1)
    stw r29, 0xc4(r1)
    bl fn_80680CF8
    lfs f4, 0x88(r1)
    lis r4, 0x6666
    lfs f0, 0x84(r1)
    addi r0, r4, 0x6667
    lfs f3, 0x80(r1)
    fmuls f8, f4, f30
    fmuls f9, f0, f30
    lfs f0, lbl_808813A4
    fmuls f10, f3, f30
    lfs f7, lbl_808812DC
    fmuls f11, f8, f0
    fmuls f12, f9, f0
    fmuls f13, f10, f0
    lfs f0, 0xa8(r1)
    lfs f3, 0xa4(r1)
    mulhw r0, r0, r3
    fadds f31, f0, f11
    lfs f0, 0xa0(r1)
    fadds f3, f3, f12
    lfs f6, lbl_808813A8
    fadds f0, f0, f13
    stfs f0, 0x38(r1)
    fmr f2, f31
    srawi r0, r0, 2
    addi r5, r1, 0x38
    stfs f3, 0x3c(r1)
    srwi r4, r0, 31
    add r0, r0, r4
    stfs f2, 0xc0(r1)
    frsp f2, f2
    mulli r0, r0, 0xa
    addi r27, r1, 0x74
    psq_l f1, 0x0(r5), 0, 0
    addi r28, r1, 0xb8
    psq_st f1, 0x0(r27), 0, 0
    subf r0, r0, r3
    lfs f5, 0x78(r1)
    fadds f30, f2, f7
    lfs f4, 0x74(r1)
    mr r3, r30
    fadds f5, f5, f6
    lfs f0, lbl_808812E8
    lfs f3, 0x78(r1)
    fadds f4, f4, f7
    lwz r26, lbl_8087EE98
    fadds f0, f3, f0
    stw r0, 0xb0(r1)
    stfs f10, 0x20(r1)
    stfs f9, 0x24(r1)
    stfs f8, 0x28(r1)
    stfs f13, 0x2c(r1)
    stfs f12, 0x30(r1)
    stfs f11, 0x34(r1)
    stfs f31, 0x40(r1)
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x7c(r1)
    stfs f7, 0x14(r1)
    stfs f6, 0x18(r1)
    stfs f7, 0x1c(r1)
    stfs f4, 0x68(r1)
    stfs f5, 0x6c(r1)
    stfs f30, 0x70(r1)
    stfs f0, 0x78(r1)
    stw r29, 0xfc(r1)
    stw r29, 0x100(r1)
    stw r29, 0x104(r1)
    stw r29, 0x108(r1)
    bl fn_80179D44
    oris r7, r3, 0x8000
    mr r3, r26
    mr r5, r27
    addi r4, r1, 0xc8
    addi r6, r1, 0x68
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_800EE794_00000DC4
    addi r3, r1, 0xcc
    lfs f2, 0xd4(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0xc0(r1)
lbl_fn_800EE794_00000DC4:
    addi r3, r1, 0xa0
    lfs f2, 0xa8(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r27, r1, 0x74
    psq_st f1, 0x0(r27), 0, 0
    addi r29, r1, 0xb8
    addi r28, r1, 0x68
    psq_l f1, 0x0(r29), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    mr r3, r30
    lfs f3, 0x78(r1)
    lfs f4, lbl_808812E8
    lfs f0, 0x6c(r1)
    fadds f3, f3, f4
    stfs f2, 0x7c(r1)
    fadds f0, f0, f4
    lfs f2, 0xc0(r1)
    stfs f2, 0x70(r1)
    lwz r26, lbl_8087EE98
    stfs f3, 0x78(r1)
    stfs f0, 0x6c(r1)
    bl fn_80179D44
    oris r7, r3, 0x8000
    mr r3, r26
    mr r5, r27
    mr r6, r28
    addi r4, r1, 0xc8
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_800EE794_00000E58
    addi r3, r1, 0xcc
    lfs f2, 0xd4(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0xc0(r1)
lbl_fn_800EE794_00000E58:
    addi r28, r1, 0xb8
    lfs f2, 0xc0(r1)
    addi r27, r1, 0x74
    psq_l f1, 0x0(r28), 0, 0
    addi r29, r1, 0x68
    psq_st f1, 0x0(r27), 0, 0
    lfs f4, lbl_808812E8
    mr r3, r30
    psq_st f1, 0x0(r29), 0, 0
    lfs f3, 0x78(r1)
    lfs f0, 0x6c(r1)
    fadds f3, f3, f4
    stfs f2, 0x7c(r1)
    fsubs f0, f0, f4
    lwz r26, lbl_8087EE98
    stfs f2, 0x70(r1)
    stfs f3, 0x78(r1)
    stfs f0, 0x6c(r1)
    bl fn_80179D44
    oris r7, r3, 0x8000
    mr r3, r26
    mr r5, r27
    mr r6, r29
    addi r4, r1, 0xc8
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_800EE794_00000EE0
    addi r3, r1, 0xcc
    lfs f2, 0xd4(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0xc0(r1)
lbl_fn_800EE794_00000EE0:
    addi r28, r1, 0xb8
    lfs f0, lbl_808812DC
    addi r27, r1, 0x74
    psq_l f1, 0x0(r28), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    mr r3, r30
    lfs f2, 0xc0(r1)
    lfs f4, 0x78(r1)
    lfs f3, lbl_80881330
    stfs f2, 0x7c(r1)
    fadds f3, f4, f3
    lwz r26, lbl_8087EE98
    stfs f0, 0x8(r1)
    stfs f3, 0x78(r1)
    stfs f0, 0xc(r1)
    stfs f0, 0x10(r1)
    bl fn_80179D44
    lfs f1, lbl_80881330
    oris r7, r3, 0x8000
    mr r3, r26
    mr r5, r27
    addi r4, r1, 0xc8
    addi r6, r1, 0x8
    li r8, 0x0
    li r9, 0x0
    bl fn_8004D388
    cmpwi r3, 0x0
    beq lbl_fn_800EE794_00000F74
    addi r3, r1, 0xd8
    lfs f2, 0xe0(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    lfs f0, lbl_80881330
    lfs f3, 0xbc(r1)
    stfs f2, 0xc0(r1)
    fsubs f0, f3, f0
    stfs f0, 0xbc(r1)
lbl_fn_800EE794_00000F74:
    addi r4, r1, 0xb8
    lha r8, 0xac(r1)
    lha r7, 0xae(r1)
    addi r9, r30, 0x147c
    psq_l f1, 0x0(r4), 0, 0
    li r0, 0x96
    lwz r6, 0xb0(r1)
    li r3, 0x1
    lwz r5, 0xb4(r1)
    lfs f2, 0xc0(r1)
    lwz r4, 0xc4(r1)
    sth r8, 0x1470(r30)
    sth r7, 0x1472(r30)
    stw r6, 0x1474(r30)
    stw r5, 0x1478(r30)
    psq_st f1, 0x0(r9), 0, 0
    stfs f2, 0x1484(r30)
    stw r4, 0x1488(r30)
    stw r31, 0xd68(r30)
    stw r0, 0xf10(r30)
    b lbl_fn_800EE794_00000FCC
lbl_fn_800EE794_00000FC8:
    li r3, 0x0
lbl_fn_800EE794_00000FCC:
    addi r11, r1, 0x130
    psq_l f31, 0x148(r1), 0, 0
    lfd f31, 0x140(r1)
    psq_l f30, 0x138(r1), 0, 0
    lfd f30, 0x130(r1)
    bl _restgpr_26
    lwz r0, 0x154(r1)
    mtlr r0
    addi r1, r1, 0x150
    blr
}

asm void fn_800EEFDC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r4, 0x50(r3)
    subis r0, r4, 0x1
    cmplwi r0, 0x89c1
    bne lbl_fn_800EEFDC_00001058
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_800EEFDC_00001058
    bl fn_80373148
    cmpwi r3, 0x0
    beq lbl_fn_800EEFDC_00001058
    lwz r3, lbl_8087F430
    bl fn_80373148
    lwz r0, 0x48(r3)
    cmpwi r0, 0x2
    bne lbl_fn_800EEFDC_00001058
    lwz r0, 0x4c(r3)
    cmpwi r0, 0xd
    bne lbl_fn_800EEFDC_00001058
    li r3, 0x0
    b lbl_fn_800EEFDC_00001084
lbl_fn_800EEFDC_00001058:
    lwz r0, 0x12a4(r31)
    li r3, 0x0
    extrwi. r0, r0, 1, 3
    bne lbl_fn_800EEFDC_00001084
    lwz r0, 0x12a8(r31)
    extrwi. r0, r0, 1, 15
    bne lbl_fn_800EEFDC_00001084
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    bne lbl_fn_800EEFDC_00001084
    li r3, 0x1
lbl_fn_800EEFDC_00001084:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800EF080(void)
{
    nofralloc
    stwu r1, -0x100(r1)
    mflr r0
    lfs f2, 0x8(r4)
    stw r0, 0x104(r1)
    fabs f3, f2
    lfs f0, lbl_808812FC
    stfd f31, 0xf0(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f31, 0xf8(r1), 0, 0
    frsp f3, f3
    stfd f30, 0xe0(r1)
    fcmpo cr0, f3, f0
    psq_st f30, 0xe8(r1), 0, 0
    stw r31, 0xdc(r1)
    addi r31, r1, 0x50
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x58(r1)
    bge lbl_fn_800EF080_00001104
    lfs f3, 0x50(r1)
    lfs f0, lbl_808812DC
    fcmpo cr0, f3, f0
    ble lbl_fn_800EF080_000010F8
    lfs f0, lbl_80881300
    b lbl_fn_800EF080_000010FC
lbl_fn_800EF080_000010F8:
    lfs f0, lbl_80881304
lbl_fn_800EF080_000010FC:
    stfs f0, 0x48(r1)
    b lbl_fn_800EF080_00001118
lbl_fn_800EF080_00001104:
    frsp f2, f2
    lfs f1, 0x50(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_800EF080_00001118:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x60
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808812DC
    addi r4, r1, 0x38
    lfs f30, 0x68(r1)
    mr r5, r4
    lfs f31, 0x64(r1)
    addi r3, r1, 0x90
    lfs f13, 0x60(r1)
    lfs f12, 0x78(r1)
    lfs f11, 0x74(r1)
    lfs f10, 0x70(r1)
    lfs f9, 0x88(r1)
    lfs f8, 0x84(r1)
    lfs f7, 0x80(r1)
    lfs f6, 0x8c(r1)
    lfs f5, 0x7c(r1)
    lfs f4, 0x6c(r1)
    lfs f0, lbl_808812D8
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x58(r1)
    stfs f3, 0xc0(r1)
    stfs f3, 0xc4(r1)
    stfs f3, 0xc8(r1)
    stfs f0, 0xcc(r1)
    stfs f13, 0x8(r1)
    stfs f31, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f13, 0x90(r1)
    stfs f31, 0x94(r1)
    stfs f30, 0x98(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xa0(r1)
    stfs f11, 0xa4(r1)
    stfs f12, 0xa8(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0xb0(r1)
    stfs f8, 0xb4(r1)
    stfs f9, 0xb8(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0x9c(r1)
    stfs f5, 0xac(r1)
    stfs f6, 0xbc(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_808812FC
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_800EF080_00001234
    lfs f3, 0x3c(r1)
    lfs f0, lbl_808812DC
    fcmpo cr0, f3, f0
    ble lbl_fn_800EF080_00001224
    lfs f0, lbl_80881300
    b lbl_fn_800EF080_00001228
lbl_fn_800EF080_00001224:
    lfs f0, lbl_80881304
lbl_fn_800EF080_00001228:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_800EF080_00001248
lbl_fn_800EF080_00001234:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_800EF080_00001248:
    addi r3, r1, 0x44
    lfs f2, lbl_808812DC
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_l f31, 0xf8(r1), 0, 0
    lfd f31, 0xf0(r1)
    psq_l f30, 0xe8(r1), 0, 0
    lfd f30, 0xe0(r1)
    lwz r31, 0xdc(r1)
    lwz r0, 0x104(r1)
    stfs f2, 0x4c(r1)
    lfs f1, 0x54(r1)
    stfs f2, 0x58(r1)
    mtlr r0
    addi r1, r1, 0x100
    blr
}

asm void fn_800EF270(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x90(r12)
    mtctr r12
    bctrl
    lfs f2, lbl_808812D8
    lfs f0, lbl_80881368
    fsubs f1, f1, f2
    lwz r0, 0x14(r1)
    fmuls f1, f0, f1
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800EF2AC(void)
{
    nofralloc
    lfs f1, lbl_808812D8
    blr
}

asm void fn_800EF2B4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x90(r12)
    mtctr r12
    bctrl
    lfs f2, lbl_808812D8
    lfs f0, lbl_808813A4
    fsubs f1, f1, f2
    lwz r0, 0x14(r1)
    fmuls f1, f0, f1
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800EF2F0(void)
{
    nofralloc
    psq_l f1, 0x528(r4), 0, 0
    lfs f2, 0x530(r4)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
    blr
}

asm void fn_800EF304(void)
{
    nofralloc
    blr
}

asm void fn_800EF308(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_800EF310(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    blr
}

asm void fn_800EF31C(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_800EF324(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    lfs f4, lbl_808812DC
    lfs f3, lbl_80881348
    lfs f2, 0x530(r4)
    lfs f1, 0x52c(r4)
    lfs f0, 0x528(r4)
    fadds f2, f2, f4
    fadds f1, f1, f3
    stfs f4, 0x8(r1)
    fadds f0, f0, f4
    stfs f3, 0xc(r1)
    stfs f4, 0x10(r1)
    stfs f0, 0x0(r3)
    stfs f1, 0x4(r3)
    stfs f2, 0x8(r3)
    addi r1, r1, 0x20
    blr
}

asm void fn_800EF368(void)
{
    nofralloc
    lfs f1, lbl_808813AC
    blr
}

asm void fn_800EF370(void)
{
    nofralloc
    lis r4, lbl_807C7030@ha
    addi r4, r4, lbl_807C7030@l
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
    blr
}

asm void fn_800EF38C(void)
{
    nofralloc
    lfs f1, lbl_808812D8
    blr
}

asm void fn_800EF394(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    lfs f4, lbl_808812DC
    lfs f3, lbl_808813B0
    lfs f2, 0x530(r4)
    lfs f1, 0x52c(r4)
    lfs f0, 0x528(r4)
    fadds f2, f2, f4
    fadds f1, f1, f3
    stfs f4, 0x8(r1)
    fadds f0, f0, f4
    stfs f3, 0xc(r1)
    stfs f4, 0x10(r1)
    stfs f0, 0x0(r3)
    stfs f1, 0x4(r3)
    stfs f2, 0x8(r3)
    addi r1, r1, 0x20
    blr
}

asm void fn_800EF3D8(void)
{
    nofralloc
    blr
}

asm void fn_800EF3DC(void)
{
    nofralloc
    blr
}

asm void fn_800EF3E0(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_800EF3E8(void)
{
    nofralloc
    b fn_800E2FE0
}

asm void fn_800EF3EC(void)
{
    nofralloc
    stwu r1, -0x220(r1)
    mflr r0
    stw r0, 0x224(r1)
    stw r31, 0x21c(r1)
    mr r31, r3
    stw r30, 0x218(r1)
    stw r29, 0x214(r1)
    lwz r0, 0x44(r3)
    cmpwi r0, 0x0
    bne lbl_fn_800EF3EC_00001584
    lwz r5, 0x0(r3)
    li r0, 0x1
    lis r4, lbl_80735428@ha
    stw r0, 0x44(r3)
    addi r30, r5, 0x4
    mr r3, r30
    addi r4, r4, lbl_80735428@l
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_800EF3EC_00001460
    mr r4, r30
    addi r3, r31, 0x4
    bl fn_8023780C
lbl_fn_800EF3EC_00001460:
    lwz r3, 0x0(r31)
    lis r4, lbl_80735428@ha
    addi r4, r4, lbl_80735428@l
    addi r30, r3, 0x24
    mr r3, r30
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_800EF3EC_0000148C
    mr r4, r30
    addi r3, r31, 0x10
    bl fn_8023780C
lbl_fn_800EF3EC_0000148C:
    lwz r3, 0x0(r31)
    lis r4, lbl_80735428@ha
    addi r4, r4, lbl_80735428@l
    addi r30, r3, 0x44
    mr r3, r30
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_800EF3EC_000014B8
    mr r4, r30
    addi r3, r31, 0x1c
    bl fn_80237654
lbl_fn_800EF3EC_000014B8:
    lwz r3, 0x0(r31)
    lis r4, lbl_80735428@ha
    addi r4, r4, lbl_80735428@l
    addi r30, r3, 0x64
    mr r3, r30
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_800EF3EC_000014E4
    mr r4, r30
    addi r3, r31, 0x28
    bl fn_8023780C
lbl_fn_800EF3EC_000014E4:
    lwz r3, 0x0(r31)
    lis r30, lbl_80735428@ha
    addi r4, r30, lbl_80735428@l
    addi r29, r3, 0xe4
    mr r3, r29
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_800EF3EC_00001534
    addi r4, r30, lbl_80735428@l
    mr r5, r29
    addi r3, r1, 0x108
    addi r4, r4, 0x1
    crclr 6
    bl sprintf
    lwz r12, 0x34(r31)
    addi r3, r31, 0x34
    addi r4, r1, 0x108
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
lbl_fn_800EF3EC_00001534:
    lwz r3, 0x0(r31)
    lis r30, lbl_80735428@ha
    addi r4, r30, lbl_80735428@l
    addi r29, r3, 0x104
    mr r3, r29
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_800EF3EC_00001584
    addi r4, r30, lbl_80735428@l
    mr r5, r29
    addi r3, r1, 0x8
    addi r4, r4, 0x1
    crclr 6
    bl sprintf
    lwz r12, 0x3c(r31)
    addi r3, r31, 0x3c
    addi r4, r1, 0x8
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
lbl_fn_800EF3EC_00001584:
    lwz r0, 0x224(r1)
    lwz r31, 0x21c(r1)
    lwz r30, 0x218(r1)
    lwz r29, 0x214(r1)
    mtlr r0
    addi r1, r1, 0x220
    blr
}

asm void fn_800EF588(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    mr r29, r4
    lwz r0, lbl_8087F030
    cmpwi r0, 0x0
    beq lbl_fn_800EF588_000015E8
    lis r4, fn_800EF7F8@ha
    mr r3, r0
    addi r4, r4, fn_800EF7F8@l
    bl fn_80695A50
    li r0, 0x0
    stw r0, lbl_8087F030
    stw r0, lbl_8087F034
lbl_fn_800EF588_000015E8:
    stw r30, lbl_8087D968
    stw r29, lbl_8087F038
    bl fn_80207C00
    mulli r4, r3, 0x48
    lis r5, lbl_80735428@ha
    stw r3, lbl_8087F034
    mr r31, r3
    addi r5, r5, lbl_80735428@l
    addi r3, r4, 0x10
    mr r6, r5
    li r4, 0x1
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_800EF6BC@ha
    lis r5, fn_800EF7F8@ha
    mr r7, r31
    li r6, 0x48
    addi r4, r4, fn_800EF6BC@l
    addi r5, r5, fn_800EF7F8@l
    bl fn_80695720
    stw r3, lbl_8087F030
    li r30, 0x0
    li r31, 0x0
    b lbl_fn_800EF588_000016AC
lbl_fn_800EF588_00001648:
    lwz r0, lbl_8087F030
    mr r3, r30
    add r29, r0, r31
    bl fn_80207C08
    stw r3, 0x0(r29)
    lwz r4, lbl_8087D968
    cmpwi r4, 0x1
    bne lbl_fn_800EF588_00001678
    lwz r3, 0x0(r29)
    lwz r0, 0x124(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800EF588_000016A4
lbl_fn_800EF588_00001678:
    cmpwi r4, 0x2
    bne lbl_fn_800EF588_0000169C
    lwz r4, lbl_8087F038
    cmpwi r4, 0xff
    bge lbl_fn_800EF588_0000169C
    lwz r3, 0x0(r29)
    bl fn_80207C34
    cmpwi r3, 0x0
    beq lbl_fn_800EF588_000016A4
lbl_fn_800EF588_0000169C:
    mr r3, r29
    bl fn_800EF3EC
lbl_fn_800EF588_000016A4:
    addi r31, r31, 0x48
    addi r30, r30, 0x1
lbl_fn_800EF588_000016AC:
    lwz r0, lbl_8087F034
    cmplw r30, r0
    blt lbl_fn_800EF588_00001648
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800EF6BC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    li r30, 0x0
    mr r27, r3
    stw r30, 0x0(r3)
    addi r3, r3, 0x4
    bl fn_802377B8
    addi r3, r27, 0x10
    bl fn_802377B8
    addi r3, r27, 0x1c
    bl fn_80237518
    addi r3, r27, 0x28
    bl fn_802377B8
    addi r29, r27, 0x34
    mr r3, r29
    bl fn_80473E74
    lis r31, lbl_80790000@ha
    addi r28, r27, 0x3c
    addi r31, r31, lbl_80790000@l
    stw r31, 0x0(r29)
    mr r3, r28
    bl fn_80473E74
    stw r31, 0x0(r28)
    mr r3, r27
    stw r30, 0x44(r27)
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800EF73C(void)
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
    beq lbl_fn_800EF73C_0000179C
    bl fn_8023781C
    addic. r3, r30, 0x4
    beq lbl_fn_800EF73C_0000178C
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_800EF73C_0000178C:
    cmpwi r31, 0x0
    ble lbl_fn_800EF73C_0000179C
    mr r3, r30
    bl dtor_80084684
lbl_fn_800EF73C_0000179C:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
