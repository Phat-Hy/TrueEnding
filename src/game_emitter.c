#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void __register_global_object(void);
extern void dtor_80084684(void);
extern void fn_80044C50(void);
extern void fn_80044CCC(void);
extern void fn_80044E0C(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_8008BBD8(void);
extern void fn_800D2338(void);
extern void fn_800D246C(void);
extern void fn_800E0B18(void);
extern void fn_800E3E78(void);
extern void fn_800E3EA4(void);
extern void fn_800E589C(void);
extern void fn_800E932C(void);
extern void fn_800E9ED8(void);
extern void fn_80105DCC(void);
extern void fn_8010AB94(void);
extern void fn_8011CD84(void);
extern void fn_8011D1FC(void);
extern void fn_8011D21C(void);
extern void fn_801354B4(void);
extern void fn_80136138(void);
extern void fn_8013655C(void);
extern void fn_80139560(void);
extern void fn_80145334(void);
extern void fn_80148B38(void);
extern void fn_8014C540(void);
extern void fn_8014F2B4(void);
extern void fn_8014FB60(void);
extern void fn_80155A88(void);
extern void fn_8015E7A0(void);
extern void fn_801603CC(void);
extern void fn_80161570(void);
extern void fn_80164B00(void);
extern void fn_80170A20(void);
extern void fn_80178208(void);
extern void fn_80179A34(void);
extern void fn_80179AB4(void);
extern void fn_801A59F4(void);
extern void fn_801A6750(void);
extern void fn_80210220(void);
extern void fn_8021446C(void);
extern void fn_80219344(void);
extern void fn_80219E6C(void);
extern void fn_8036DAA8(void);
extern void fn_80370174(void);
extern void fn_803EA77C(void);
extern void fn_80481668(void);
extern void fn_8059B670(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F9920(void);
extern void fn_80680770(void);
extern void fn_80686EA4(void);
extern void fn_8068AEA4(void);
extern void fn_8068B770(void);
extern void fn_8068BC30(void);
extern void fn_8068BD60(void);
extern void fn_8068C240(void);
extern void memmove(void);

/* External data declarations */
extern u8 jumptable_80779AE4[];
extern u8 lbl_80735164[];
extern u8 lbl_80735250[];
extern u8 lbl_80735324[];
extern u8 lbl_80775AC0[];
extern u8 lbl_80779AD8[];
extern u8 lbl_80779B68[];
extern u8 lbl_807C7030[];
extern u8 lbl_807C7810[];
extern u8 lbl_807C781C[];
extern u8 lbl_807C7838[];

/* Small data declarations */
extern u32 lbl_8087D960;
extern u32 lbl_8087D961;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F020;
extern u32 lbl_8087F024;
extern u32 lbl_8087F028;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F430;
extern u32 lbl_8087F498;
extern u32 lbl_8087F4A0;
extern u32 lbl_8087F540;
extern u32 lbl_8087F610;
extern u32 lbl_8087F8A0;
extern u32 lbl_8087F9E8;
extern u32 lbl_8087F9F8;
extern u32 lbl_808812D0;
extern u32 lbl_808812D8;
extern u32 lbl_808812DC;
extern u32 lbl_808812E0;
extern u32 lbl_808812E4;
extern u32 lbl_808812E8;
extern u32 lbl_808812EC;
extern u32 lbl_808812F0;
extern u32 lbl_808812F4;
extern u32 lbl_808812F8;
extern u32 lbl_808812FC;
extern u32 lbl_80881300;
extern u32 lbl_80881304;
extern u32 lbl_80881308;

/* Function declarations */
void fn_800E22E8(void);
void fn_800E24CC(void);
void fn_800E24D0(void);
void fn_800E24D4(void);
void fn_800E24EC(void);
void fn_800E2504(void);
void fn_800E250C(void);
void fn_800E2608(void);
void fn_800E2610(void);
void fn_800E2668(void);
void fn_800E2670(void);
void fn_800E2778(void);
void fn_800E29B4(void);
void fn_800E2A10(void);
void fn_800E2A24(void);
void fn_800E2AF8(void);
void fn_800E2D4C(void);
void fn_800E2DD4(void);
void fn_800E2FDC(void);
void fn_800E2FE0(void);

asm void fn_800E22E8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    rlwinm. r0, r6, 0, 27, 28
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    bne lbl_fn_800E22E8_0000002C
    li r4, -0x1
    li r0, 0x0
    stw r4, 0x4(r3)
    stw r4, 0x0(r3)
    stw r0, 0x8(r3)
    b lbl_fn_800E22E8_000001D4
lbl_fn_800E22E8_0000002C:
    rlwinm. r0, r6, 0, 28, 28
    beq lbl_fn_800E22E8_00000040
    lbz r7, 0x24(r4)
    rlwinm. r7, r7, 0, 28, 28
    beq lbl_fn_800E22E8_00000054
lbl_fn_800E22E8_00000040:
    rlwinm. r6, r6, 0, 27, 27
    beq lbl_fn_800E22E8_0000006C
    lbz r7, 0x24(r4)
    rlwinm. r7, r7, 0, 27, 27
    bne lbl_fn_800E22E8_0000006C
lbl_fn_800E22E8_00000054:
    li r4, -0x1
    li r0, 0x0
    stw r4, 0x4(r3)
    stw r4, 0x0(r3)
    stw r0, 0x8(r3)
    b lbl_fn_800E22E8_000001D4
lbl_fn_800E22E8_0000006C:
    cmpwi r0, 0x0
    beq lbl_fn_800E22E8_00000080
    lwz r7, 0x8(r4)
    cmpwi r7, 0x0
    beq lbl_fn_800E22E8_00000094
lbl_fn_800E22E8_00000080:
    cmpwi r6, 0x0
    beq lbl_fn_800E22E8_000000AC
    lwz r7, 0x14(r4)
    cmpwi r7, 0x0
    bne lbl_fn_800E22E8_000000AC
lbl_fn_800E22E8_00000094:
    li r4, -0x1
    li r0, 0x0
    stw r4, 0x4(r3)
    stw r4, 0x0(r3)
    stw r0, 0x8(r3)
    b lbl_fn_800E22E8_000001D4
lbl_fn_800E22E8_000000AC:
    lwz r8, 0x14(r4)
    lwz r7, 0x28(r4)
    cmplw r7, r8
    bge lbl_fn_800E22E8_000000C0
    stw r8, 0x28(r4)
lbl_fn_800E22E8_000000C0:
    lwz r7, 0xc(r4)
    cmpwi r7, 0x0
    beq lbl_fn_800E22E8_000000DC
    lwz r9, 0x28(r4)
    cmplw r7, r9
    bge lbl_fn_800E22E8_000000DC
    stw r9, 0xc(r4)
lbl_fn_800E22E8_000000DC:
    cmpwi r6, 0x0
    lwz r12, 0x0(r5)
    lwz r31, 0x4(r5)
    beq lbl_fn_800E22E8_000000FC
    lwz r8, 0x10(r4)
    lwz r7, 0x28(r4)
    subf r11, r8, r7
    b lbl_fn_800E22E8_00000108
lbl_fn_800E22E8_000000FC:
    lwz r8, 0x4(r4)
    lwz r7, 0x28(r4)
    subf r11, r8, r7
lbl_fn_800E22E8_00000108:
    li r10, 0x0
    srawi r30, r11, 31
    xoris r9, r12, 0x8000
    xoris r8, r10, 0x8000
    subfc r7, r10, r31
    subfe r8, r8, r9
    subfe r8, r9, r9
    neg. r8, r8
    bne lbl_fn_800E22E8_00000144
    xoris r7, r30, 0x8000
    subfc r8, r31, r11
    subfe r8, r9, r7
    subfe r8, r7, r7
    neg. r8, r8
    beq lbl_fn_800E22E8_0000015C
lbl_fn_800E22E8_00000144:
    li r4, -0x1
    li r0, 0x0
    stw r4, 0x4(r3)
    stw r4, 0x0(r3)
    stw r0, 0x8(r3)
    b lbl_fn_800E22E8_000001D4
lbl_fn_800E22E8_0000015C:
    lbz r7, 0x24(r4)
    clrlwi. r7, r7, 31
    beq lbl_fn_800E22E8_00000194
    cmpwi r6, 0x0
    beq lbl_fn_800E22E8_00000194
    xor r8, r31, r11
    xor r7, r12, r30
    or. r7, r8, r7
    beq lbl_fn_800E22E8_00000194
    li r0, -0x1
    stw r0, 0x4(r3)
    stw r0, 0x0(r3)
    stw r10, 0x8(r3)
    b lbl_fn_800E22E8_000001D4
lbl_fn_800E22E8_00000194:
    cmpwi r0, 0x0
    beq lbl_fn_800E22E8_000001A8
    lwz r8, 0x4(r4)
    add r0, r8, r31
    stw r0, 0x8(r4)
lbl_fn_800E22E8_000001A8:
    cmpwi r6, 0x0
    beq lbl_fn_800E22E8_000001BC
    lwz r6, 0x10(r4)
    add r0, r6, r31
    stw r0, 0x14(r4)
lbl_fn_800E22E8_000001BC:
    lwz r0, 0x0(r5)
    lwz r4, 0x4(r5)
    stw r4, 0x4(r3)
    stw r0, 0x0(r3)
    lwz r0, 0x8(r5)
    stw r0, 0x8(r3)
lbl_fn_800E22E8_000001D4:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    addi r1, r1, 0x10
    blr
}

asm void fn_800E24CC(void)
{
    nofralloc
    blr
}

asm void fn_800E24D0(void)
{
    nofralloc
    blr
}

asm void fn_800E24D4(void)
{
    nofralloc
    li r4, -0x1
    li r0, 0x0
    stw r4, 0x4(r3)
    stw r4, 0x0(r3)
    stw r0, 0x8(r3)
    blr
}

asm void fn_800E24EC(void)
{
    nofralloc
    li r4, -0x1
    li r0, 0x0
    stw r4, 0x4(r3)
    stw r4, 0x0(r3)
    stw r0, 0x8(r3)
    blr
}

asm void fn_800E2504(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_800E250C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    addi r4, r1, 0x8
    stw r29, 0x14(r1)
    mr r29, r3
    stw r5, 0x8(r1)
    lwz r6, 0x8(r3)
    lwz r0, 0xc(r3)
    subf r0, r6, r0
    stw r0, 0xc(r1)
    cmpw r0, r5
    bge lbl_fn_800E250C_00000268
    addi r4, r1, 0xc
lbl_fn_800E250C_00000268:
    lwz r31, 0x0(r4)
    cmpwi r31, 0x0
    ble lbl_fn_800E250C_000002F8
    lwz r4, 0x8(r29)
    mr r3, r30
    mr r5, r31
    bl memcpy
    lwz r0, 0x8(r29)
    add r30, r30, r31
    add r0, r0, r31
    stw r0, 0x8(r29)
    lwz r0, 0x8(r1)
    subf r5, r31, r0
    stw r5, 0x8(r1)
    b lbl_fn_800E250C_000002F8
lbl_fn_800E250C_000002A4:
    lwz r3, 0x8(r29)
    lwz r0, 0xc(r29)
    cmplw r3, r0
    bge lbl_fn_800E250C_000002C4
    addi r0, r3, 0x1
    stw r0, 0x8(r29)
    lbz r3, 0x0(r3)
    b lbl_fn_800E250C_000002D8
lbl_fn_800E250C_000002C4:
    lwz r12, 0x0(r29)
    mr r3, r29
    lwz r12, 0x2c(r12)
    mtctr r12
    bctrl
lbl_fn_800E250C_000002D8:
    cmpwi r3, -0x1
    beq lbl_fn_800E250C_00000300
    stb r3, 0x0(r30)
    addi r31, r31, 0x1
    addi r30, r30, 0x1
    lwz r3, 0x8(r1)
    subi r5, r3, 0x1
    stw r5, 0x8(r1)
lbl_fn_800E250C_000002F8:
    cmpwi r5, 0x0
    bgt lbl_fn_800E250C_000002A4
lbl_fn_800E250C_00000300:
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800E2608(void)
{
    nofralloc
    li r3, -0x1
    blr
}

asm void fn_800E2610(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r12, 0x0(r3)
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
    cmpwi r3, -0x1
    bne lbl_fn_800E2610_0000035C
    li r3, -0x1
    b lbl_fn_800E2610_0000036C
lbl_fn_800E2610_0000035C:
    lwz r3, 0x8(r31)
    addi r0, r3, 0x1
    stw r0, 0x8(r31)
    lbz r3, 0x0(r3)
lbl_fn_800E2610_0000036C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800E2668(void)
{
    nofralloc
    li r3, -0x1
    blr
}

asm void fn_800E2670(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    addi r4, r1, 0x8
    stw r29, 0x14(r1)
    mr r29, r3
    stw r5, 0x8(r1)
    lwz r6, 0x14(r3)
    lwz r0, 0x18(r3)
    subf r0, r6, r0
    stw r0, 0xc(r1)
    cmpw r0, r5
    bge lbl_fn_800E2670_000003CC
    addi r4, r1, 0xc
lbl_fn_800E2670_000003CC:
    lwz r31, 0x0(r4)
    cmpwi r31, 0x0
    ble lbl_fn_800E2670_00000468
    lwz r3, 0x14(r3)
    mr r4, r30
    mr r5, r31
    bl memcpy
    lwz r0, 0x14(r29)
    add r30, r30, r31
    add r0, r0, r31
    stw r0, 0x14(r29)
    lwz r0, 0x8(r1)
    subf r5, r31, r0
    stw r5, 0x8(r1)
    b lbl_fn_800E2670_00000468
lbl_fn_800E2670_00000408:
    lwz r3, 0x14(r29)
    lwz r0, 0x18(r29)
    lbz r4, 0x0(r30)
    addi r30, r30, 0x1
    cmplw r3, r0
    extsb r0, r4
    bge lbl_fn_800E2670_00000438
    stb r0, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x14(r29)
    lbz r3, 0x0(r3)
    b lbl_fn_800E2670_00000450
lbl_fn_800E2670_00000438:
    lwz r12, 0x0(r29)
    mr r3, r29
    clrlwi r4, r0, 24
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
lbl_fn_800E2670_00000450:
    cmpwi r3, -0x1
    beq lbl_fn_800E2670_00000470
    lwz r3, 0x8(r1)
    addi r31, r31, 0x1
    subi r5, r3, 0x1
    stw r5, 0x8(r1)
lbl_fn_800E2670_00000468:
    cmpwi r5, 0x0
    bgt lbl_fn_800E2670_00000408
lbl_fn_800E2670_00000470:
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800E2778(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stmw r20, 0x10(r1)
    mr r22, r3
    mr r23, r4
    mr r24, r6
    mr r25, r7
    stw r5, 0x8(r1)
    lwz r0, 0x0(r3)
    srwi. r31, r0, 31
    bne lbl_fn_800E2778_000004D4
    lbz r0, 0x0(r3)
    addi r29, r3, 0x1
    li r27, 0xb
    clrlwi r28, r0, 25
    b lbl_fn_800E2778_000004E0
lbl_fn_800E2778_000004D4:
    lwz r29, 0x8(r3)
    clrlwi r27, r0, 1
    lwz r28, 0x4(r3)
lbl_fn_800E2778_000004E0:
    cmplw r4, r28
    ble lbl_fn_800E2778_0000050C
    lis r4, lbl_80735164@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80735164@l
    addi r3, r3, __files@l
    addi r4, r4, 0x58
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_800E2778_0000050C:
    lwz r0, 0x8(r1)
    subf r3, r23, r28
    stw r3, 0xc(r1)
    addi r4, r1, 0x8
    cmplw r3, r0
    bge lbl_fn_800E2778_00000528
    addi r4, r1, 0xc
lbl_fn_800E2778_00000528:
    lis r3, 0x8000
    lwz r26, 0x0(r4)
    subi r0, r3, 0x2
    cmplw r24, r0
    bgt lbl_fn_800E2778_0000054C
    subf r30, r26, r28
    subf r0, r24, r0
    cmplw r30, r0
    ble lbl_fn_800E2778_00000570
lbl_fn_800E2778_0000054C:
    lis r4, lbl_80735164@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80735164@l
    addi r3, r3, __files@l
    addi r4, r4, 0x73
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_800E2778_00000570:
    add r30, r24, r30
    add r0, r23, r26
    cmplw r30, r27
    subf r28, r0, r28
    blt lbl_fn_800E2778_00000664
    addi r3, r27, 0xf
    addi r0, r30, 0x1
    clrrwi r27, r3, 4
    b lbl_fn_800E2778_000005A0
lbl_fn_800E2778_00000594:
    slwi r3, r27, 1
    addi r3, r3, 0xf
    clrrwi r27, r3, 4
lbl_fn_800E2778_000005A0:
    cmplw r27, r0
    blt lbl_fn_800E2778_00000594
    mr r3, r27
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r21, r3
    bne lbl_fn_800E2778_000005DC
    lis r3, __files@ha
    lis r4, lbl_80775AC0@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80775AC0@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_800E2778_000005DC:
    cmpwi r23, 0x0
    beq lbl_fn_800E2778_000005F4
    mr r3, r21
    mr r4, r29
    mr r5, r23
    bl memcpy
lbl_fn_800E2778_000005F4:
    add r20, r21, r23
    mr r5, r24
    mr r3, r20
    clrlwi r4, r25, 24
    bl memset
    cmpwi r28, 0x0
    beq lbl_fn_800E2778_00000624
    add r0, r29, r23
    mr r5, r28
    add r3, r20, r24
    add r4, r26, r0
    bl memcpy
lbl_fn_800E2778_00000624:
    lbz r0, lbl_8087D960
    cmpwi r31, 0x0
    stbx r0, r21, r30
    beq lbl_fn_800E2778_00000640
    mr r3, r29
    bl dtor_80084684
    b lbl_fn_800E2778_0000064C
lbl_fn_800E2778_00000640:
    lwz r0, 0x0(r22)
    oris r0, r0, 0x8000
    stw r0, 0x0(r22)
lbl_fn_800E2778_0000064C:
    lwz r0, 0x0(r22)
    rlwimi r0, r27, 0, 1, 31
    stw r21, 0x8(r22)
    stw r30, 0x4(r22)
    stw r0, 0x0(r22)
    b lbl_fn_800E2778_000006B4
lbl_fn_800E2778_00000664:
    cmpwi r28, 0x0
    beq lbl_fn_800E2778_00000680
    add r0, r29, r23
    mr r5, r28
    add r3, r0, r24
    add r4, r0, r26
    bl memmove
lbl_fn_800E2778_00000680:
    mr r5, r24
    add r3, r29, r23
    clrlwi r4, r25, 24
    bl memset
    lbz r0, lbl_8087D961
    cmpwi r31, 0x0
    stbx r0, r29, r30
    bne lbl_fn_800E2778_000006B0
    lbz r0, 0x0(r22)
    rlwimi r0, r30, 0, 25, 31
    stb r0, 0x0(r22)
    b lbl_fn_800E2778_000006B4
lbl_fn_800E2778_000006B0:
    stw r30, 0x4(r22)
lbl_fn_800E2778_000006B4:
    mr r3, r22
    lmw r20, 0x10(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_800E29B4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    la r3, lbl_8087F020
    stw r0, 0x14(r1)
    bl fn_8068B770
    lis r4, fn_8068BC30@ha
    lis r5, lbl_807C7810@ha
    addi r4, r4, fn_8068BC30@l
    la r3, lbl_8087F020
    addi r5, r5, lbl_807C7810@l
    bl __register_global_object
    la r3, lbl_8087F024
    bl fn_8068BD60
    lis r4, fn_8068C240@ha
    lis r5, lbl_807C781C@ha
    addi r4, r4, fn_8068C240@l
    la r3, lbl_8087F024
    addi r5, r5, lbl_807C781C@l
    bl __register_global_object
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800E2A10(void)
{
    nofralloc
    li r11, 0x3c
    lwzx r11, r3, r11
    add r3, r3, r11
    subi r3, r3, 0x8
    b fn_800E0B18
}

asm void fn_800E2A24(void)
{
    nofralloc
    li r9, 0x0
    lis r10, lbl_807C7030@ha
    stw r9, 0x0(r3)
    addi r10, r10, lbl_807C7030@l
    lwz r0, 0x80(r3)
    li r8, 0x3
    stw r9, 0x4(r3)
    li r7, -0x1
    clrlwi r4, r0, 4
    lfs f0, lbl_808812D0
    stw r9, 0x8(r3)
    li r6, 0x4
    li r5, 0x1
    li r0, 0x2
    stw r9, 0xc(r3)
    psq_l f1, 0x0(r10), 0, 0
    lfs f2, 0x8(r10)
    stfs f2, 0x24(r3)
    psq_st f1, 0x1c(r3), 0, 0
    psq_l f1, 0x0(r10), 0, 0
    lfs f2, 0x8(r10)
    stfs f2, 0x30(r3)
    psq_st f1, 0x28(r3), 0, 0
    psq_l f1, 0x0(r10), 0, 0
    lfs f2, 0x8(r10)
    stfs f2, 0x18(r3)
    psq_st f1, 0x10(r3), 0, 0
    stw r9, 0x34(r3)
    stw r9, 0x38(r3)
    stw r8, 0x3c(r3)
    stw r7, 0x40(r3)
    stw r6, 0x44(r3)
    stw r9, 0x48(r3)
    stw r5, 0x4c(r3)
    stw r9, 0x50(r3)
    stw r7, 0x54(r3)
    stw r7, 0x58(r3)
    stfs f0, 0x5c(r3)
    stfs f0, 0x60(r3)
    stw r9, 0x64(r3)
    stw r9, 0x68(r3)
    stw r9, 0x6c(r3)
    stw r9, 0x70(r3)
    stw r9, 0x74(r3)
    stw r7, 0x78(r3)
    stw r4, 0x80(r3)
    stw r7, 0x7c(r3)
    stw r8, 0x84(r3)
    stw r0, 0x88(r3)
    stw r9, 0x8c(r3)
    stw r9, 0x90(r3)
    stw r9, 0x94(r3)
    blr
}

asm void fn_800E2AF8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r6
    bl fn_801354B4
    lwz r0, 0x14a8(r31)
    li r5, 0x0
    lfs f0, lbl_808812DC
    lis r6, lbl_80779B68@ha
    clrlwi r3, r0, 3
    lwz r0, 0x5c(r31)
    rlwinm r3, r3, 0, 5, 3
    lfs f3, lbl_808812D8
    oris r3, r3, 0x400
    cmpwi r0, 0x0
    rlwinm r0, r3, 0, 8, 5
    addi r6, r6, lbl_80779B68@l
    li r4, 0x1
    li r3, 0x96
    stw r6, 0x0(r31)
    stw r5, 0x1424(r31)
    stw r5, 0x1428(r31)
    stw r5, 0x142c(r31)
    stw r5, 0x1430(r31)
    stw r5, 0x1434(r31)
    stw r5, 0x1438(r31)
    stw r5, 0x143c(r31)
    stw r5, 0x1440(r31)
    stw r5, 0x1450(r31)
    stw r4, 0x1454(r31)
    stfs f3, 0x1458(r31)
    stw r5, 0x145c(r31)
    stw r5, 0x1460(r31)
    stw r5, 0x1464(r31)
    stw r5, 0x146c(r31)
    sth r5, 0x1470(r31)
    sth r5, 0x1472(r31)
    stw r5, 0x1474(r31)
    stw r3, 0x1478(r31)
    stfs f0, 0x147c(r31)
    stfs f0, 0x1480(r31)
    stfs f0, 0x1484(r31)
    stw r5, 0x1488(r31)
    stfs f0, 0x149c(r31)
    stw r5, 0x14a0(r31)
    stw r5, 0x14a4(r31)
    stw r0, 0x14a8(r31)
    beq lbl_fn_800E2AF8_00000974
    li r29, 0x0
    li r30, 0x0
lbl_fn_800E2AF8_000008EC:
    lwz r0, 0x5c(r31)
    mr r3, r31
    mr r6, r29
    add r4, r0, r29
    add r5, r0, r30
    lbz r4, 0xd4(r4)
    lwz r5, 0xd8(r5)
    extsb r4, r4
    bl fn_8014F2B4
    addi r29, r29, 0x1
    addi r30, r30, 0x4
    cmpwi r29, 0x4
    blt lbl_fn_800E2AF8_000008EC
    subis r0, r28, 0x1
    cmplwi r0, 0x8705
    bne lbl_fn_800E2AF8_00000974
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_800E2AF8_00000974
    lwz r3, 0x10d0(r3)
    subis r0, r3, 0x6
    cmplwi r0, 0x2e08
    bne lbl_fn_800E2AF8_00000974
    lwz r0, 0x12a8(r31)
    li r3, 0x4
    li r4, 0x1
    oris r0, r0, 0x2
    stw r0, 0x12a8(r31)
    bl fn_8021446C
    mr r5, r3
    mr r3, r31
    li r4, 0x1
    li r6, -0x1
    bl fn_8014F2B4
lbl_fn_800E2AF8_00000974:
    lfs f0, 0x60c(r31)
    addi r3, r31, 0x148c
    psq_l f1, 0x5f4(r31), 0, 0
    lfs f2, 0x5fc(r31)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x1494(r31)
    stfs f0, 0x1498(r31)
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    beq lbl_fn_800E2AF8_00000A20
    lwz r0, 0x650(r31)
    mr r4, r31
    li r5, 0x1
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_800E2AF8_000009D0
lbl_fn_800E2AF8_000009B4:
    lwz r3, 0x654(r4)
    lwz r0, 0x4(r3)
    cmpwi r0, 0x1
    bne lbl_fn_800E2AF8_000009C8
    li r5, 0x0
lbl_fn_800E2AF8_000009C8:
    addi r4, r4, 0x4
    bdnz lbl_fn_800E2AF8_000009B4
lbl_fn_800E2AF8_000009D0:
    cmpwi r5, 0x0
    beq lbl_fn_800E2AF8_00000A20
    lwz r3, 0x50(r31)
    subis r0, r3, 0xa
    cmplwi r0, 0xae77
    bne lbl_fn_800E2AF8_00000A00
    mr r3, r31
    li r4, 0x1
    li r5, 0x76
    li r6, -0x1
    bl fn_8014F2B4
    b lbl_fn_800E2AF8_00000A14
lbl_fn_800E2AF8_00000A00:
    mr r3, r31
    li r4, 0x1
    li r5, 0x245
    li r6, -0x1
    bl fn_8014F2B4
lbl_fn_800E2AF8_00000A14:
    lwz r0, 0x12a8(r31)
    oris r0, r0, 0x2
    stw r0, 0x12a8(r31)
lbl_fn_800E2AF8_00000A20:
    lwz r3, 0x50(r31)
    subis r3, r3, 0xb
    addi r0, r3, 0x518f
    cmplwi r0, 0x1
    bgt lbl_fn_800E2AF8_00000A40
    lwz r0, 0x12a8(r31)
    ori r0, r0, 0x20
    stw r0, 0x12a8(r31)
lbl_fn_800E2AF8_00000A40:
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800E2D4C(void)
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
    beq lbl_fn_800E2D4C_00000AD0
    lwz r5, 0x1438(r3)
    lis r4, lbl_80779B68@ha
    addi r4, r4, lbl_80779B68@l
    stw r4, 0x0(r3)
    cmpwi r5, 0x0
    beq lbl_fn_800E2D4C_00000AB4
    lwz r0, lbl_8087F4A0
    cmpwi r0, 0x0
    beq lbl_fn_800E2D4C_00000AB4
    mr r3, r5
    bl fn_800D2338
lbl_fn_800E2D4C_00000AB4:
    mr r3, r30
    li r4, 0x0
    bl fn_80136138
    cmpwi r31, 0x0
    ble lbl_fn_800E2D4C_00000AD0
    mr r3, r30
    bl dtor_80084684
lbl_fn_800E2D4C_00000AD0:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800E2DD4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x1
    stw r30, 0x18(r1)
    mr r30, r3
    bl fn_8013655C
    cmpwi r3, 0x0
    beq lbl_fn_800E2DD4_00000B18
    li r31, 0x0
lbl_fn_800E2DD4_00000B18:
    lwz r3, 0x1438(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800E2DD4_00000B38
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_800E2DD4_00000B38
    li r31, 0x0
lbl_fn_800E2DD4_00000B38:
    cmpwi r31, 0x0
    beq lbl_fn_800E2DD4_00000CD8
    lwz r0, 0x48(r30)
    li r4, 0x0
    cmpwi r0, 0x2
    bne lbl_fn_800E2DD4_00000B60
    lwz r0, 0x146c(r30)
    cmpwi r0, 0x0
    bne lbl_fn_800E2DD4_00000B60
    li r4, 0x1
lbl_fn_800E2DD4_00000B60:
    lwz r3, 0x1438(r30)
    lwz r0, 0x14a8(r30)
    rlwimi r0, r4, 24, 7, 7
    cmpwi r3, 0x0
    stw r0, 0x14a8(r30)
    beq lbl_fn_800E2DD4_00000C14
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x1438(r30)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r0, 0x137c(r30)
    rlwinm r0, r0, 0, 21, 21
    cmplwi r0, 0x400
    bne lbl_fn_800E2DD4_00000BCC
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    bne lbl_fn_800E2DD4_00000BCC
    lwz r3, 0x1438(r30)
    li r4, 0x2724
    li r5, 0x1
    lwz r12, 0x0(r3)
    lwz r12, 0x68(r12)
    mtctr r12
    bctrl
    b lbl_fn_800E2DD4_00000C14
lbl_fn_800E2DD4_00000BCC:
    lwz r3, 0x50(r30)
    subis r0, r3, 0x3
    cmplwi r0, 0xed4
    bne lbl_fn_800E2DD4_00000C14
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_800E2DD4_00000C14
    li r4, 0x11b
    bl fn_80370174
    cmpwi r3, 0x0
    ble lbl_fn_800E2DD4_00000C14
    lwz r3, 0x1438(r30)
    li r4, 0x2747
    li r5, 0x1
    lwz r12, 0x0(r3)
    lwz r12, 0x68(r12)
    mtctr r12
    bctrl
lbl_fn_800E2DD4_00000C14:
    lwz r3, 0x50(r30)
    subis r0, r3, 0x1
    cmplwi r0, 0x895d
    beq lbl_fn_800E2DD4_00000C38
    cmplwi r0, 0x89c1
    beq lbl_fn_800E2DD4_00000C38
    subis r0, r3, 0x3
    cmplwi r0, 0x1289
    bne lbl_fn_800E2DD4_00000C64
lbl_fn_800E2DD4_00000C38:
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x8
    bl memset
    li r3, 0x1785
    stw r3, 0x8(r1)
    lwz r0, 0xc(r1)
    lfs f0, lbl_808812E0
    stw r3, 0xabc(r30)
    stw r0, 0xac0(r30)
    stfs f0, 0xad0(r30)
lbl_fn_800E2DD4_00000C64:
    mr r3, r30
    bl fn_80179AB4
    cmpwi r3, 0x1
    bne lbl_fn_800E2DD4_00000CD8
    mr r3, r30
    bl fn_80179A34
    lis r4, 0x68dc
    subi r0, r4, 0x7453
    mulhw r0, r0, r3
    srawi r0, r0, 12
    srwi r3, r0, 31
    add r0, r0, r3
    cmpwi r0, 0x131
    bne lbl_fn_800E2DD4_00000CD8
    lwz r0, 0x54c(r30)
    li r5, 0x0
    li r3, 0x0
    ori r0, r0, 0x4
    stw r0, 0x54c(r30)
    b lbl_fn_800E2DD4_00000CCC
lbl_fn_800E2DD4_00000CB4:
    lwz r4, 0x62c(r30)
    addi r5, r5, 0x1
    lwzx r0, r4, r3
    ori r0, r0, 0x8
    stwx r0, r4, r3
    addi r3, r3, 0x14
lbl_fn_800E2DD4_00000CCC:
    lwz r0, 0x624(r30)
    cmplw r5, r0
    blt lbl_fn_800E2DD4_00000CB4
lbl_fn_800E2DD4_00000CD8:
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800E2FDC(void)
{
    nofralloc
    blr
}

asm void fn_800E2FE0(void)
{
    nofralloc
    stwu r1, -0x310(r1)
    mflr r0
    stw r0, 0x314(r1)
    stfd f31, 0x300(r1)
    psq_st f31, 0x308(r1), 0, 0
    stfd f30, 0x2f0(r1)
    psq_st f30, 0x2f8(r1), 0, 0
    stw r31, 0x2ec(r1)
    stw r30, 0x2e8(r1)
    mr r30, r3
    stw r29, 0x2e4(r1)
    lwz r4, 0x14a4(r3)
    lha r0, 0x1470(r3)
    subi r6, r4, 0x1
    lwz r5, 0x14a0(r3)
    cmpwi r0, 0x0
    subi r0, r5, 0x1
    srawi r4, r6, 31
    stw r0, 0x14a0(r3)
    andc r0, r6, r4
    stw r0, 0x14a4(r3)
    beq lbl_fn_800E2FE0_000016E0
    lwz r4, 0x1474(r3)
    subic. r0, r4, 0x1
    stw r0, 0x1474(r3)
    bge lbl_fn_800E2FE0_000016E0
    lwz r4, 0x48(r3)
    cmpwi r4, 0x0
    bne lbl_fn_800E2FE0_00000D78
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x1
    beq lbl_fn_800E2FE0_00000DB8
lbl_fn_800E2FE0_00000D78:
    cmpwi r4, 0x3
    beq lbl_fn_800E2FE0_00000D88
    cmpwi r4, 0x2
    bne lbl_fn_800E2FE0_000016B0
lbl_fn_800E2FE0_00000D88:
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x2
    beq lbl_fn_800E2FE0_00000DB8
    cmpwi r0, 0x7
    bne lbl_fn_800E2FE0_000016B0
    addi r3, r3, 0xd74
    bl fn_8011D1FC
    cmpwi r3, 0x0
    beq lbl_fn_800E2FE0_000016B0
    lha r0, 0x1470(r30)
    cmpwi r0, 0xc
    bne lbl_fn_800E2FE0_000016B0
lbl_fn_800E2FE0_00000DB8:
    lha r0, 0x1470(r30)
    cmplwi r0, 0xc
    bgt lbl_fn_800E2FE0_000016E0
    lis r3, jumptable_80779AE4@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_80779AE4@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lha r5, 0x1472(r30)
    mr r3, r30
    addi r4, r30, 0x147c
    subi r0, r5, 0x8
    cntlzw r0, r0
    srwi r5, r0, 5
    bl fn_80155A88
    lha r8, 0x1472(r30)
    li r4, 0x0
    sth r4, 0x1470(r30)
    cmpwi r8, 0x0
    ble lbl_fn_800E2FE0_000016E0
    lfs f0, lbl_808812DC
    li r3, 0x96
    addi r6, r30, 0x147c
    stfs f0, 0x214(r1)
    lwz r0, 0x1488(r30)
    addi r5, r1, 0x214
    lfs f2, 0x1484(r30)
    addi r7, r30, 0x147c
    psq_l f1, 0x0(r6), 0, 0
    stfs f0, 0x218(r1)
    sth r8, 0x208(r1)
    sth r4, 0x20a(r1)
    stw r4, 0x20c(r1)
    stw r3, 0x210(r1)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x21c(r1)
    stw r0, 0x220(r1)
    sth r8, 0x1470(r30)
    sth r4, 0x1472(r30)
    stw r4, 0x1474(r30)
    stw r3, 0x1478(r30)
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0x1484(r30)
    stw r0, 0x1488(r30)
    b lbl_fn_800E2FE0_000016E0
    lfs f1, lbl_808812E4
    mr r3, r30
    li r4, 0x153
    li r5, 0x1
    fmr f2, f1
    li r6, 0x78
    bl fn_80161570
    li r0, 0x0
    sth r0, 0x1470(r30)
    b lbl_fn_800E2FE0_000016E0
    li r0, 0x0
    sth r0, 0x1470(r30)
    b lbl_fn_800E2FE0_000016E0
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_800E2FE0_000016E0
    lwz r0, 0x54e4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_800E2FE0_000016E0
    lwz r31, lbl_8087F0A8
    lwz r3, 0x3cc(r31)
    bl fn_80210220
    lfs f4, lbl_808812DC
    lis r0, 0x4330
    lfs f0, lbl_808812D8
    li r5, 0x0
    stfs f4, 0x1f8(r1)
    lis r4, lbl_80735250@ha
    lfd f3, lbl_80735250@l(r4)
    addi r4, r1, 0x1f4
    stfs f4, 0x1fc(r1)
    stfs f4, 0x200(r1)
    stw r5, 0x204(r1)
    stfs f0, 0x1f4(r1)
    lwz r5, 0x48(r3)
    stw r0, 0x2c8(r1)
    xoris r5, r5, 0x8000
    stw r5, 0x2cc(r1)
    lfd f0, 0x2c8(r1)
    stw r0, 0x2d0(r1)
    fsubs f0, f0, f3
    stw r0, 0x2d8(r1)
    stfs f0, 0x1f8(r1)
    lwz r0, 0x4c(r3)
    mr r3, r30
    xoris r0, r0, 0x8000
    stw r0, 0x2d4(r1)
    lfd f0, 0x2d0(r1)
    fsubs f0, f0, f3
    stfs f0, 0x1fc(r1)
    lwz r0, 0x254(r31)
    xoris r0, r0, 0x8000
    stw r0, 0x2dc(r1)
    lfd f0, 0x2d8(r1)
    fsubs f0, f0, f3
    stfs f0, 0x200(r1)
    bl fn_80164B00
    lwz r0, 0x14a8(r30)
    stw r30, 0x1428(r30)
    oris r0, r0, 0x800
    stw r0, 0x14a8(r30)
    lwz r0, 0x3f8(r31)
    stw r0, 0x1430(r30)
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_800E2FE0_00000F7C
    bl fn_8010AB94
lbl_fn_800E2FE0_00000F7C:
    lwz r3, lbl_8087F048
    mr r4, r30
    addi r5, r30, 0xb0
    li r6, 0x1
    bl fn_80105DCC
    li r0, 0x0
    sth r0, 0x1470(r30)
    b lbl_fn_800E2FE0_000016E0
    mr r3, r30
    li r4, 0x1
    bl fn_80219344
    lwz r0, 0x638(r30)
    lis r5, lbl_80735324@ha
    addi r5, r5, lbl_80735324@l
    stw r0, 0x63c(r30)
    mr r6, r5
    li r4, 0x0
    stw r3, 0x638(r30)
    li r3, 0x2c
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_800E2FE0_00000FF0
    mr r4, r30
    addi r5, r30, 0x147c
    li r6, 0x1
    bl fn_801A59F4
    mr r4, r3
lbl_fn_800E2FE0_00000FF0:
    mr r3, r30
    bl fn_80178208
    li r0, 0x0
    sth r0, 0x1470(r30)
    b lbl_fn_800E2FE0_000016E0
    lwz r0, lbl_8087F9E8
    cmpwi r0, 0x0
    beq lbl_fn_800E2FE0_00001084
    lwz r3, 0x1488(r30)
    bl fn_80219E6C
    mr r4, r3
    li r0, 0x0
    lis r7, lbl_807C7030@ha
    stw r0, 0x1e0(r1)
    lwz r3, lbl_8087F9E8
    mr r5, r30
    lfs f1, lbl_808812D8
    mr r6, r30
    addi r7, r7, lbl_807C7030@l
    addi r8, r30, 0x534
    addi r9, r1, 0x1e0
    bl fn_8059B670
    addic. r3, r1, 0x1e0
    beq lbl_fn_800E2FE0_00001084
    lwz r4, 0x1e0(r1)
    cmpwi r4, 0x0
    beq lbl_fn_800E2FE0_00001084
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_800E2FE0_0000107C
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_800E2FE0_0000107C:
    li r0, 0x0
    stw r0, 0x1e0(r1)
lbl_fn_800E2FE0_00001084:
    li r0, 0x0
    sth r0, 0x1470(r30)
    b lbl_fn_800E2FE0_000016E0
    lwz r0, lbl_8087F9E8
    cmpwi r0, 0x0
    beq lbl_fn_800E2FE0_00001300
    lwz r3, 0x1488(r30)
    bl fn_80219E6C
    lbz r0, lbl_8087F028
    lis r4, lbl_80779AD8@ha
    lwzu r10, lbl_80779AD8@l(r4)
    mr r31, r3
    extsb. r0, r0
    lwz r7, lbl_8087F9F8
    lwz r9, 0x4(r4)
    li r0, 0x0
    lwz r8, 0x8(r4)
    stw r10, 0x17c(r1)
    stw r9, 0x180(r1)
    stw r8, 0x184(r1)
    stw r10, 0x38(r1)
    stw r9, 0x3c(r1)
    stw r8, 0x40(r1)
    stw r10, 0x18(r1)
    stw r9, 0x1c(r1)
    stw r8, 0x20(r1)
    stw r10, 0x128(r1)
    stw r9, 0x12c(r1)
    stw r8, 0x130(r1)
    stw r10, 0x11c(r1)
    stw r9, 0x120(r1)
    stw r8, 0x124(r1)
    stw r10, 0x110(r1)
    stw r9, 0x114(r1)
    stw r8, 0x118(r1)
    stw r10, 0x188(r1)
    stw r9, 0x18c(r1)
    stw r8, 0x190(r1)
    stw r7, 0x194(r1)
    stw r10, 0x8(r1)
    stw r9, 0xc(r1)
    stw r8, 0x10(r1)
    stw r7, 0x14(r1)
    stw r10, 0x198(r1)
    stw r9, 0x19c(r1)
    stw r8, 0x1a0(r1)
    stw r7, 0x1a4(r1)
    stw r10, 0x28(r1)
    stw r9, 0x2c(r1)
    stw r8, 0x30(r1)
    stw r7, 0x34(r1)
    stw r10, 0x90(r1)
    stw r9, 0x94(r1)
    stw r8, 0x98(r1)
    stw r7, 0x9c(r1)
    stw r0, 0x1cc(r1)
    stw r10, 0x100(r1)
    stw r9, 0x104(r1)
    stw r8, 0x108(r1)
    stw r7, 0x10c(r1)
    bne lbl_fn_800E2FE0_000011D0
    lis r6, lbl_807C7838@ha
    lis r4, fn_800E3E78@ha
    lis r3, fn_800E3EA4@ha
    li r0, 0x1
    addi r3, r3, fn_800E3EA4@l
    addi r5, r6, lbl_807C7838@l
    addi r4, r4, fn_800E3E78@l
    stw r10, 0xa0(r1)
    stw r9, 0xa4(r1)
    stw r8, 0xa8(r1)
    stw r7, 0xac(r1)
    stw r10, 0xd0(r1)
    stw r9, 0xd4(r1)
    stw r8, 0xd8(r1)
    stw r7, 0xdc(r1)
    stw r10, 0xc0(r1)
    stw r9, 0xc4(r1)
    stw r8, 0xc8(r1)
    stw r7, 0xcc(r1)
    stw r4, 0x4(r5)
    stw r3, lbl_807C7838@l(r6)
    stb r0, lbl_8087F028
lbl_fn_800E2FE0_000011D0:
    lwz r6, 0x28(r1)
    addi r3, r1, 0xf0
    lwz r5, 0x2c(r1)
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r6, 0xb0(r1)
    stw r5, 0xb4(r1)
    stw r4, 0xb8(r1)
    stw r0, 0xbc(r1)
    stw r6, 0xf0(r1)
    stw r5, 0xf4(r1)
    stw r4, 0xf8(r1)
    stw r0, 0xfc(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_800E2FE0_00001254
    addic. r0, r1, 0x1d0
    lwz r5, 0xf0(r1)
    lwz r4, 0xf4(r1)
    lwz r3, 0xf8(r1)
    lwz r0, 0xfc(r1)
    stw r5, 0xe0(r1)
    stw r4, 0xe4(r1)
    stw r3, 0xe8(r1)
    stw r0, 0xec(r1)
    beq lbl_fn_800E2FE0_0000124C
    stw r5, 0x1d0(r1)
    stw r4, 0x1d4(r1)
    stw r3, 0x1d8(r1)
    stw r0, 0x1dc(r1)
lbl_fn_800E2FE0_0000124C:
    li r0, 0x1
    b lbl_fn_800E2FE0_00001258
lbl_fn_800E2FE0_00001254:
    li r0, 0x0
lbl_fn_800E2FE0_00001258:
    cmpwi r0, 0x0
    beq lbl_fn_800E2FE0_00001270
    lis r3, lbl_807C7838@ha
    addi r3, r3, lbl_807C7838@l
    stw r3, 0x1cc(r1)
    b lbl_fn_800E2FE0_00001278
lbl_fn_800E2FE0_00001270:
    li r0, 0x0
    stw r0, 0x1cc(r1)
lbl_fn_800E2FE0_00001278:
    lis r7, lbl_807C7030@ha
    lwz r3, lbl_8087F9E8
    lfs f1, lbl_808812D8
    mr r4, r31
    mr r5, r30
    mr r6, r30
    addi r7, r7, lbl_807C7030@l
    addi r8, r30, 0x534
    addi r9, r1, 0x1cc
    bl fn_8059B670
    addic. r3, r1, 0x1cc
    beq lbl_fn_800E2FE0_000012DC
    lwz r4, 0x1cc(r1)
    cmpwi r4, 0x0
    beq lbl_fn_800E2FE0_000012DC
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_800E2FE0_000012D4
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_800E2FE0_000012D4:
    li r0, 0x0
    stw r0, 0x1cc(r1)
lbl_fn_800E2FE0_000012DC:
    lwz r3, lbl_8087F498
    cmpwi r3, 0x0
    beq lbl_fn_800E2FE0_00001300
    lfs f1, lbl_808812D8
    mr r4, r30
    lfs f2, lbl_808812E8
    li r5, 0x20
    li r6, 0x0
    bl fn_803EA77C
lbl_fn_800E2FE0_00001300:
    lwz r0, 0x12a8(r30)
    oris r0, r0, 0x1
    stw r0, 0x12a8(r30)
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_800E2FE0_00001320
    lwz r3, 0x5744(r3)
    b lbl_fn_800E2FE0_00001324
lbl_fn_800E2FE0_00001320:
    li r3, 0x0
lbl_fn_800E2FE0_00001324:
    li r0, 0x0
    stw r3, 0x138c(r30)
    sth r0, 0x1470(r30)
    b lbl_fn_800E2FE0_000016E0
    lwz r0, 0x55c(r30)
    cmpwi r0, 0x2
    bne lbl_fn_800E2FE0_000016E0
    lwz r0, 0x12a4(r30)
    srwi. r0, r0, 31
    bne lbl_fn_800E2FE0_000016E0
    lwz r4, lbl_8087F8A0
    mr r3, r30
    lfs f1, lbl_808812EC
    li r5, 0x0
    lwz r4, 0x48(r4)
    bl fn_80170A20
    li r0, 0x0
    sth r0, 0x1470(r30)
    b lbl_fn_800E2FE0_000016E0
    lwz r3, lbl_8087F430
    mr r4, r30
    bl fn_8036DAA8
    cmpwi r3, 0x0
    beq lbl_fn_800E2FE0_000016E0
    mr r3, r30
    li r4, 0x5
    bl fn_80219344
    lwz r0, 0x638(r30)
    lis r5, lbl_80735324@ha
    addi r5, r5, lbl_80735324@l
    stw r0, 0x63c(r30)
    mr r6, r5
    li r4, 0x0
    stw r3, 0x638(r30)
    li r3, 0x30
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_800E2FE0_000013DC
    lfs f1, lbl_808812F0
    mr r4, r30
    addi r5, r30, 0x147c
    li r6, 0x1
    bl fn_801A6750
    mr r4, r3
lbl_fn_800E2FE0_000013DC:
    mr r3, r30
    bl fn_80178208
    li r0, 0x0
    sth r0, 0x1470(r30)
    b lbl_fn_800E2FE0_000016E0
    lwz r3, lbl_8087F430
    mr r4, r30
    bl fn_8036DAA8
    cmpwi r3, 0x0
    beq lbl_fn_800E2FE0_000016E0
    mr r3, r30
    li r4, 0x5
    bl fn_80219344
    addi r5, r30, 0x147c
    lwz r0, 0x638(r30)
    lfs f2, 0x1484(r30)
    addi r4, r30, 0xf6c
    psq_l f1, 0x0(r5), 0, 0
    lfs f5, 0x530(r30)
    psq_st f1, 0x0(r4), 0, 0
    fsubs f7, f2, f5
    lfs f0, 0x528(r30)
    lfs f3, 0xf6c(r30)
    lfs f4, 0x52c(r30)
    fsubs f8, f3, f0
    lfs f0, lbl_808812F4
    fmuls f3, f7, f7
    stw r0, 0x63c(r30)
    fadds f6, f4, f0
    lfs f4, 0xf70(r30)
    fmadds f3, f8, f8, f3
    lfs f0, lbl_808812F8
    fsubs f4, f4, f6
    stw r3, 0x638(r30)
    fcmpo cr0, f3, f0
    stfs f6, 0x52c(r30)
    stw r30, 0xf7c(r30)
    stfs f2, 0xf74(r30)
    stfs f8, 0x170(r1)
    stfs f4, 0x174(r1)
    stfs f7, 0x178(r1)
    ble lbl_fn_800E2FE0_0000164C
    frsp f3, f2
    stfs f4, 0x15c(r1)
    lfs f0, lbl_808812FC
    addi r3, r1, 0x158
    stfs f8, 0x158(r1)
    addi r31, r1, 0x164
    fsubs f2, f3, f5
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    frsp f3, f2
    stfs f2, 0x160(r1)
    stfs f2, 0x16c(r1)
    fabs f4, f3
    frsp f4, f4
    fcmpo cr0, f4, f0
    bge lbl_fn_800E2FE0_000014E8
    lfs f3, 0x164(r1)
    lfs f0, lbl_808812DC
    fcmpo cr0, f3, f0
    ble lbl_fn_800E2FE0_000014DC
    lfs f0, lbl_80881300
    b lbl_fn_800E2FE0_000014E0
lbl_fn_800E2FE0_000014DC:
    lfs f0, lbl_80881304
lbl_fn_800E2FE0_000014E0:
    stfs f0, 0x84(r1)
    b lbl_fn_800E2FE0_000014FC
lbl_fn_800E2FE0_000014E8:
    fmr f2, f3
    lfs f1, 0x164(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x84(r1)
lbl_fn_800E2FE0_000014FC:
    lfs f0, 0x84(r1)
    addi r3, r1, 0x258
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808812DC
    addi r4, r1, 0x74
    lfs f30, 0x260(r1)
    mr r5, r4
    lfs f31, 0x25c(r1)
    addi r3, r1, 0x288
    lfs f13, 0x258(r1)
    lfs f12, 0x270(r1)
    lfs f11, 0x26c(r1)
    lfs f10, 0x268(r1)
    lfs f9, 0x280(r1)
    lfs f8, 0x27c(r1)
    lfs f7, 0x278(r1)
    lfs f6, 0x284(r1)
    lfs f5, 0x274(r1)
    lfs f4, 0x264(r1)
    lfs f0, lbl_808812D8
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x16c(r1)
    stfs f3, 0x2b8(r1)
    stfs f3, 0x2bc(r1)
    stfs f3, 0x2c0(r1)
    stfs f0, 0x2c4(r1)
    stfs f13, 0x44(r1)
    stfs f31, 0x48(r1)
    stfs f30, 0x4c(r1)
    stfs f13, 0x288(r1)
    stfs f31, 0x28c(r1)
    stfs f30, 0x290(r1)
    stfs f10, 0x50(r1)
    stfs f11, 0x54(r1)
    stfs f12, 0x58(r1)
    stfs f10, 0x298(r1)
    stfs f11, 0x29c(r1)
    stfs f12, 0x2a0(r1)
    stfs f7, 0x5c(r1)
    stfs f8, 0x60(r1)
    stfs f9, 0x64(r1)
    stfs f7, 0x2a8(r1)
    stfs f8, 0x2ac(r1)
    stfs f9, 0x2b0(r1)
    stfs f4, 0x68(r1)
    stfs f5, 0x6c(r1)
    stfs f6, 0x70(r1)
    stfs f4, 0x294(r1)
    stfs f5, 0x2a4(r1)
    stfs f6, 0x2b4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x7c(r1)
    bl fn_805F9750
    lfs f2, 0x7c(r1)
    lfs f0, lbl_808812FC
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_800E2FE0_00001618
    lfs f3, 0x78(r1)
    lfs f0, lbl_808812DC
    fcmpo cr0, f3, f0
    ble lbl_fn_800E2FE0_00001608
    lfs f0, lbl_80881300
    b lbl_fn_800E2FE0_0000160C
lbl_fn_800E2FE0_00001608:
    lfs f0, lbl_80881304
lbl_fn_800E2FE0_0000160C:
    fneg f0, f0
    stfs f0, 0x80(r1)
    b lbl_fn_800E2FE0_0000162C
lbl_fn_800E2FE0_00001618:
    lfs f1, 0x78(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x80(r1)
lbl_fn_800E2FE0_0000162C:
    addi r3, r1, 0x80
    lfs f2, lbl_808812DC
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    lfs f0, 0x168(r1)
    stfs f2, 0x88(r1)
    stfs f2, 0x16c(r1)
    stfs f0, 0x538(r30)
lbl_fn_800E2FE0_0000164C:
    lfs f1, lbl_808812D8
    mr r3, r30
    li r4, 0x1
    bl fn_801603CC
    li r0, 0x0
    sth r0, 0x1470(r30)
    b lbl_fn_800E2FE0_000016E0
    addi r3, r30, 0xd74
    bl fn_8011D1FC
    cmpwi r3, 0x0
    beq lbl_fn_800E2FE0_000016A4
    addi r3, r30, 0xd74
    bl fn_8011D21C
    cmpwi r3, 0x0
    beq lbl_fn_800E2FE0_00001694
    lwz r0, 0x1488(r30)
    cmpwi r0, 0x1
    bne lbl_fn_800E2FE0_000016A4
lbl_fn_800E2FE0_00001694:
    lwz r5, 0x1488(r30)
    mr r4, r30
    addi r3, r30, 0xd74
    bl fn_8011CD84
lbl_fn_800E2FE0_000016A4:
    li r0, 0x0
    sth r0, 0x1470(r30)
    b lbl_fn_800E2FE0_000016E0
lbl_fn_800E2FE0_000016B0:
    lha r3, 0x1470(r30)
    subi r0, r3, 0x3
    cmplwi r0, 0x2
    ble lbl_fn_800E2FE0_000016E0
    cmpwi r3, 0xc
    beq lbl_fn_800E2FE0_000016E0
    lwz r3, 0x1478(r30)
    subic. r0, r3, 0x1
    stw r0, 0x1478(r30)
    bge lbl_fn_800E2FE0_000016E0
    li r0, 0x0
    sth r0, 0x1470(r30)
lbl_fn_800E2FE0_000016E0:
    mr r3, r30
    bl fn_8014C540
    lwz r3, lbl_8087F540
    cmpwi r3, 0x0
    beq lbl_fn_800E2FE0_00001700
    bl fn_80481668
    cmpwi r3, 0x0
    bne lbl_fn_800E2FE0_000017BC
lbl_fn_800E2FE0_00001700:
    lwz r29, 0x648(r30)
    cmpwi r29, 0x0
    beq lbl_fn_800E2FE0_0000175C
    lwz r0, 0x274(r29)
    cmpwi r0, 0x0
    beq lbl_fn_800E2FE0_0000175C
    mr r3, r30
    li r31, 0x0
    bl fn_8014FB60
    cmpwi r3, 0x0
    beq lbl_fn_800E2FE0_0000173C
    mr r3, r29
    mr r4, r30
    bl fn_80044C50
    mr r31, r3
lbl_fn_800E2FE0_0000173C:
    cmpwi r31, 0x0
    beq lbl_fn_800E2FE0_00001750
    mr r3, r29
    bl fn_80044CCC
    b lbl_fn_800E2FE0_0000175C
lbl_fn_800E2FE0_00001750:
    mr r3, r29
    li r4, 0x1
    bl fn_80044E0C
lbl_fn_800E2FE0_0000175C:
    lwz r29, 0x64c(r30)
    cmpwi r29, 0x0
    beq lbl_fn_800E2FE0_000017BC
    beq lbl_fn_800E2FE0_000017BC
    lwz r0, 0x274(r29)
    cmpwi r0, 0x0
    beq lbl_fn_800E2FE0_000017BC
    mr r3, r30
    li r31, 0x0
    bl fn_8014FB60
    cmpwi r3, 0x0
    beq lbl_fn_800E2FE0_0000179C
    mr r3, r29
    mr r4, r30
    bl fn_80044C50
    mr r31, r3
lbl_fn_800E2FE0_0000179C:
    cmpwi r31, 0x0
    beq lbl_fn_800E2FE0_000017B0
    mr r3, r29
    bl fn_80044CCC
    b lbl_fn_800E2FE0_000017BC
lbl_fn_800E2FE0_000017B0:
    mr r3, r29
    li r4, 0x1
    bl fn_80044E0C
lbl_fn_800E2FE0_000017BC:
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    beq lbl_fn_800E2FE0_000017DC
    lwz r0, 0x58c(r30)
    cmpwi r0, 0x2
    beq lbl_fn_800E2FE0_000017DC
    li r0, 0x0
    stw r0, 0x1450(r30)
lbl_fn_800E2FE0_000017DC:
    lwz r0, 0x48(r30)
    cmpwi r0, 0x0
    bne lbl_fn_800E2FE0_00001898
    lwz r3, 0x7e0(r30)
    rlwinm r0, r3, 0, 23, 23
    cmplwi r0, 0x100
    beq lbl_fn_800E2FE0_00001898
    rlwinm r0, r3, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_800E2FE0_00001824
    lwz r0, 0x58c(r30)
    cmpwi r0, 0x2
    beq lbl_fn_800E2FE0_00001824
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
lbl_fn_800E2FE0_00001824:
    lwz r0, 0x648(r30)
    cmpwi r0, 0x0
    beq lbl_fn_800E2FE0_0000183C
    mr r3, r30
    bl fn_800E589C
    b lbl_fn_800E2FE0_00001868
lbl_fn_800E2FE0_0000183C:
    lwz r0, 0x58c(r30)
    cmpwi r0, 0x2
    bne lbl_fn_800E2FE0_00001860
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0xec(r12)
    mtctr r12
    bctrl
    b lbl_fn_800E2FE0_00001868
lbl_fn_800E2FE0_00001860:
    mr r3, r30
    bl fn_80139560
lbl_fn_800E2FE0_00001868:
    mr r3, r30
    addi r4, r1, 0x1c0
    addi r5, r1, 0x1b4
    li r6, 0x0
    bl fn_800E932C
    addi r3, r1, 0x1b4
    lfs f2, 0x1bc(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r30, 0xfa4
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0xfac(r30)
    b lbl_fn_800E2FE0_0000193C
lbl_fn_800E2FE0_00001898:
    lwz r0, 0x7e0(r30)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_800E2FE0_000018C8
    lwz r0, 0x58c(r30)
    cmpwi r0, 0x2
    beq lbl_fn_800E2FE0_000018C8
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
lbl_fn_800E2FE0_000018C8:
    lwz r0, 0x12a4(r30)
    extrwi. r0, r0, 1, 29
    beq lbl_fn_800E2FE0_000018F8
    lwz r0, 0x58c(r30)
    cmpwi r0, 0x2
    bne lbl_fn_800E2FE0_0000193C
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0xf0(r12)
    mtctr r12
    bctrl
    b lbl_fn_800E2FE0_0000193C
lbl_fn_800E2FE0_000018F8:
    lwz r0, 0x648(r30)
    cmpwi r0, 0x0
    beq lbl_fn_800E2FE0_00001910
    mr r3, r30
    bl fn_800E9ED8
    b lbl_fn_800E2FE0_0000193C
lbl_fn_800E2FE0_00001910:
    lwz r0, 0x58c(r30)
    cmpwi r0, 0x2
    bne lbl_fn_800E2FE0_00001934
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0xf0(r12)
    mtctr r12
    bctrl
    b lbl_fn_800E2FE0_0000193C
lbl_fn_800E2FE0_00001934:
    mr r3, r30
    bl fn_80139560
lbl_fn_800E2FE0_0000193C:
    lwz r0, 0x48(r30)
    cmpwi r0, 0x2
    beq lbl_fn_800E2FE0_00001964
    lwz r0, 0x38(r30)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_800E2FE0_000019D0
    mr r3, r30
    bl fn_80145334
    b lbl_fn_800E2FE0_000019D0
lbl_fn_800E2FE0_00001964:
    lwz r0, 0x38(r30)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_800E2FE0_0000198C
    lwz r0, 0x12a4(r30)
    extrwi. r0, r0, 1, 6
    bne lbl_fn_800E2FE0_0000198C
    mr r3, r30
    bl fn_80145334
    b lbl_fn_800E2FE0_000019D0
lbl_fn_800E2FE0_0000198C:
    lwz r4, lbl_8087EFB4
    addi r3, r1, 0x14c
    lfs f0, 0x530(r30)
    lfs f3, 0x114(r4)
    lfs f5, 0x110(r4)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r30)
    lfs f3, 0x10c(r4)
    lfs f0, 0x528(r30)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x150(r1)
    stfs f0, 0x14c(r1)
    stfs f6, 0x154(r1)
    bl fn_805F9920
    mr r3, r30
    bl fn_80148B38
lbl_fn_800E2FE0_000019D0:
    lwz r0, 0x48(r30)
    cmpwi r0, 0x2
    bne lbl_fn_800E2FE0_00001B64
    lwz r6, 0x38(r30)
    li r4, 0x0
    li r3, 0x0
    li r5, 0x0
    rlwinm r0, r6, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_800E2FE0_00001A08
    clrlwi r0, r6, 31
    cmplwi r0, 0x1
    beq lbl_fn_800E2FE0_00001A08
    li r5, 0x1
lbl_fn_800E2FE0_00001A08:
    cmpwi r5, 0x0
    beq lbl_fn_800E2FE0_00001A24
    lwz r0, 0x7e0(r30)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_800E2FE0_00001A24
    li r3, 0x1
lbl_fn_800E2FE0_00001A24:
    cmpwi r3, 0x0
    beq lbl_fn_800E2FE0_00001A58
    lwz r0, 0x55c(r30)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_800E2FE0_00001A4C
    lwz r0, 0x560(r30)
    cmpwi r0, 0x1c
    bne lbl_fn_800E2FE0_00001A4C
    li r3, 0x1
lbl_fn_800E2FE0_00001A4C:
    cmpwi r3, 0x0
    bne lbl_fn_800E2FE0_00001A58
    li r4, 0x1
lbl_fn_800E2FE0_00001A58:
    cmpwi r4, 0x0
    beq lbl_fn_800E2FE0_00001B64
    lwz r0, 0x54c(r30)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    beq lbl_fn_800E2FE0_00001B64
    lwz r0, 0xd18(r30)
    cmpwi r0, 0x0
    beq lbl_fn_800E2FE0_00001B64
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_800E2FE0_00001A90
    lwz r3, 0x48(r3)
    b lbl_fn_800E2FE0_00001A94
lbl_fn_800E2FE0_00001A90:
    li r3, 0x0
lbl_fn_800E2FE0_00001A94:
    cmpwi r3, 0x0
    beq lbl_fn_800E2FE0_00001B64
    lfs f3, 0x52c(r30)
    lfs f0, 0x52c(r3)
    lfs f5, 0x530(r30)
    fsubs f6, f3, f0
    lfs f4, 0x530(r3)
    lfs f3, 0x528(r30)
    fsubs f4, f5, f4
    lfs f0, 0x528(r3)
    fabs f5, f6
    fsubs f3, f3, f0
    lfs f0, lbl_80881308
    stfs f6, 0x1ac(r1)
    frsp f5, f5
    stfs f3, 0x1a8(r1)
    fcmpo cr0, f5, f0
    stfs f4, 0x1b0(r1)
    cror eq, gt, eq
    bne lbl_fn_800E2FE0_00001B64
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
    lfs f3, lbl_808812DC
    addi r3, r1, 0x228
    lfs f0, lbl_808812D8
    li r4, 0x79
    stfs f3, 0x134(r1)
    stfs f3, 0x138(r1)
    stfs f0, 0x13c(r1)
    lfs f1, 0x538(r30)
    bl fn_805F8E70
    addi r4, r1, 0x134
    addi r3, r1, 0x228
    mr r5, r4
    bl fn_805F93C0
    lfs f4, 0x13c(r1)
    mr r3, r30
    lfs f3, 0x138(r1)
    addi r4, r1, 0x140
    lfs f0, 0x134(r1)
    fneg f4, f4
    fneg f3, f3
    li r5, -0x1
    fneg f0, f0
    stfs f4, 0x148(r1)
    li r6, 0x0
    stfs f0, 0x140(r1)
    stfs f3, 0x144(r1)
    bl fn_8015E7A0
lbl_fn_800E2FE0_00001B64:
    lwz r0, 0x314(r1)
    psq_l f31, 0x308(r1), 0, 0
    lfd f31, 0x300(r1)
    psq_l f30, 0x2f8(r1), 0, 0
    lfd f30, 0x2f0(r1)
    lwz r31, 0x2ec(r1)
    lwz r30, 0x2e8(r1)
    lwz r29, 0x2e4(r1)
    mtlr r0
    addi r1, r1, 0x310
    blr
}
