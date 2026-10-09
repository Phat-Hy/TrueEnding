#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_16(void);
extern void _savegpr_16(void);
extern void dtor_80084684(void);
extern void fn_800844D8(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_8011F91C(void);
extern void fn_8011FC10(void);
extern void fn_8021ECD0(void);
extern void fn_80370174(void);
extern void fn_80370320(void);
extern void fn_80370A78(void);
extern void fn_803BF898(void);
extern void fn_803EC16C(void);
extern void fn_803EC374(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_80680770(void);
extern void fn_80686EA4(void);
extern void fn_80695720(void);
extern void fn_80695A50(void);

/* External data declarations */
extern u8 lbl_807500DC[];
extern u8 lbl_8078BC80[];
extern u8 lbl_8078BC9C[];

/* Small data declarations */
extern u32 lbl_8087DDA8;
extern u32 lbl_8087DDAC;
extern u32 lbl_8087DDB0;
extern u32 lbl_8087DDB4;
extern u32 lbl_8087DDB8;
extern u32 lbl_8087DDBC;
extern u32 lbl_8087DDC0;
extern u32 lbl_8087DDC4;
extern u32 lbl_8087DDC8;
extern u32 lbl_8087DDCC;
extern u32 lbl_8087DDD0;
extern u32 lbl_8087DDD4;
extern u32 lbl_8087DDD8;
extern u32 lbl_8087DDDC;
extern u32 lbl_8087DDE0;
extern u32 lbl_8087DDE4;
extern u32 lbl_8087DDE8;
extern u32 lbl_8087DDEC;
extern u32 lbl_8087F408;
extern u32 lbl_8087F430;
extern u32 lbl_8087F8A0;
extern u32 lbl_80885CB8;
extern u32 lbl_80885CBC;
extern u32 lbl_80885CF0;
extern u32 lbl_80885CF4;
extern u32 lbl_80885CF8;
extern u32 lbl_80885CFC;

/* Function declarations */
void fn_803C9304(void);
void fn_803C9318(void);
void fn_803C9378(void);
void fn_803C93F4(void);
void fn_803C940C(void);
void fn_803C94BC(void);
void fn_803C94D0(void);
void fn_803C94E4(void);
void fn_803C955C(void);
void fn_803C9570(void);
void fn_803C95E8(void);
void fn_803C95EC(void);
void fn_803C99A8(void);
void fn_803C9CDC(void);
void fn_803C9CE4(void);
void fn_803C9D8C(void);
void fn_803C9D9C(void);
void fn_803C9DC8(void);
void fn_803C9DD0(void);
void fn_803C9E58(void);
void fn_803C9E68(void);
void fn_803C9E84(void);
void fn_803C9E98(void);
void fn_803C9EF8(void);
void fn_803C9F70(void);
void fn_803C9F84(void);
void fn_803CA00C(void);
void fn_803CA014(void);
void fn_803CA0F4(void);
void fn_803CA530(void);
void fn_803CA604(void);
void fn_803CAABC(void);

asm void fn_803C9304(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    blr
}

asm void fn_803C9318(void)
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
    beq lbl_fn_803C9318_00000058
    lwz r3, 0x0(r3)
    cmpwi r3, 0x0
    beq lbl_fn_803C9318_00000048
    bl fn_80084C24
lbl_fn_803C9318_00000048:
    cmpwi r31, 0x0
    ble lbl_fn_803C9318_00000058
    mr r3, r30
    bl dtor_80084684
lbl_fn_803C9318_00000058:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803C9378(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803C9378_000000AC
    mr r3, r0
    bl fn_80084C24
lbl_fn_803C9378_000000AC:
    mullw r0, r30, r31
    stw r30, 0x4(r29)
    li r4, 0x0
    stw r31, 0x8(r29)
    la r5, lbl_8087DDEC
    la r6, lbl_8087DDE8
    slwi r3, r0, 1
    li r7, 0x0
    bl fn_800846FC
    stw r3, 0x0(r29)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803C93F4(void)
{
    nofralloc
    lwz r0, 0x8(r3)
    lwz r3, 0x0(r3)
    mullw r0, r4, r0
    slwi r0, r0, 1
    add r3, r3, r0
    blr
}

asm void fn_803C940C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803C940C_00000148
    lis r4, fn_803BF898@ha
    mr r3, r0
    addi r4, r4, fn_803BF898@l
    bl fn_80695A50
lbl_fn_803C940C_00000148:
    cmpwi r30, 0x0
    stw r30, 0x0(r29)
    beq lbl_fn_803C940C_00000194
    slwi r3, r30, 3
    mr r4, r31
    addi r3, r3, 0x10
    la r5, lbl_8087DDE4
    la r6, lbl_8087DDE0
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_803C94BC@ha
    lis r5, fn_803BF898@ha
    mr r7, r30
    li r6, 0x8
    addi r4, r4, fn_803C94BC@l
    addi r5, r5, fn_803BF898@l
    bl fn_80695720
    stw r3, 0x4(r29)
    b lbl_fn_803C940C_0000019C
lbl_fn_803C940C_00000194:
    li r0, 0x0
    stw r0, 0x4(r29)
lbl_fn_803C940C_0000019C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803C94BC(void)
{
    nofralloc
    li r0, 0x0
    sth r0, 0x0(r3)
    sth r0, 0x2(r3)
    stw r0, 0x4(r3)
    blr
}

asm void fn_803C94D0(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    blr
}

asm void fn_803C94E4(void)
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
    beq lbl_fn_803C94E4_0000023C
    beq lbl_fn_803C94E4_0000022C
    beq lbl_fn_803C94E4_0000022C
    lwz r4, 0x0(r3)
    cmpwi r4, 0x0
    beq lbl_fn_803C94E4_0000022C
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    mr r3, r4
    bl dtor_80084684
lbl_fn_803C94E4_0000022C:
    cmpwi r31, 0x0
    ble lbl_fn_803C94E4_0000023C
    mr r3, r30
    bl dtor_80084684
lbl_fn_803C94E4_0000023C:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803C955C(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    blr
}

asm void fn_803C9570(void)
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
    beq lbl_fn_803C9570_000002C8
    beq lbl_fn_803C9570_000002B8
    beq lbl_fn_803C9570_000002B8
    lwz r4, 0x0(r3)
    cmpwi r4, 0x0
    beq lbl_fn_803C9570_000002B8
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    mr r3, r4
    bl dtor_80084684
lbl_fn_803C9570_000002B8:
    cmpwi r31, 0x0
    ble lbl_fn_803C9570_000002C8
    mr r3, r30
    bl dtor_80084684
lbl_fn_803C9570_000002C8:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803C95E8(void)
{
    nofralloc
    blr
}

asm void fn_803C95EC(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    stw r30, 0x48(r1)
    mr r30, r4
    stw r29, 0x44(r1)
    mr r29, r3
    stw r28, 0x40(r1)
    lwz r0, 0x4(r3)
    lwz r31, 0x8(r3)
    cmplw r0, r31
    bge lbl_fn_803C95EC_00000364
    mulli r0, r0, 0x18
    lwz r5, 0x0(r3)
    add. r5, r5, r0
    beq lbl_fn_803C95EC_00000354
    lwz r0, 0x0(r4)
    stw r0, 0x0(r5)
    lwz r0, 0x4(r4)
    stw r0, 0x4(r5)
    lwz r0, 0x8(r4)
    stw r0, 0x8(r5)
    psq_l f1, 0xc(r4), 0, 0
    psq_st f1, 0xc(r5), 0, 0
    lfs f2, 0x14(r4)
    stfs f2, 0x14(r5)
lbl_fn_803C95EC_00000354:
    lwz r4, 0x4(r3)
    addi r0, r4, 0x1
    stw r0, 0x4(r3)
    b lbl_fn_803C95EC_00000684
lbl_fn_803C95EC_00000364:
    lis r3, 0xaab
    li r4, 0x1
    subi r0, r3, 0x5556
    stw r4, 0x1c(r1)
    subf r0, r31, r0
    cmplwi r0, 0x1
    bge lbl_fn_803C95EC_000003A4
    lis r4, lbl_807500DC@ha
    lis r3, __files@ha
    addi r4, r4, lbl_807500DC@l
    addi r3, r3, __files@l
    addi r4, r4, 0x39f
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_803C95EC_000003A4:
    lis r3, 0x38e
    addi r0, r3, 0x38e3
    cmplw r31, r0
    bge lbl_fn_803C95EC_000003DC
    addi r4, r31, 0x1
    lis r3, 0xcccd
    slwi r0, r4, 2
    subf r0, r4, r0
    subi r3, r3, 0x3333
    mulhwu r0, r3, r0
    srwi r0, r0, 2
    stw r0, 0x14(r1)
    cmplwi r0, 0x1
    b lbl_fn_803C95EC_000003FC
lbl_fn_803C95EC_000003DC:
    lis r3, 0x71c
    addi r0, r3, 0x71c6
    cmplw r31, r0
    bge lbl_fn_803C95EC_000003FC
    addi r0, r31, 0x1
    srwi r0, r0, 1
    stw r0, 0x18(r1)
    cmplwi r0, 0x1
lbl_fn_803C95EC_000003FC:
    li r4, 0x0
    addi r5, r29, 0x8
    lis r3, 0xaab
    stw r4, 0x20(r1)
    subi r0, r3, 0x5556
    stw r4, 0x24(r1)
    stw r4, 0x28(r1)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    lwz r3, 0x4(r29)
    lwz r31, 0x8(r29)
    addi r3, r3, 0x1
    subf r3, r31, r3
    subf r0, r31, r0
    cmplw r3, r0
    stw r3, 0x8(r1)
    ble lbl_fn_803C95EC_00000464
    lis r4, lbl_807500DC@ha
    lis r3, __files@ha
    addi r4, r4, lbl_807500DC@l
    addi r3, r3, __files@l
    addi r4, r4, 0x39f
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_803C95EC_00000464:
    lis r3, 0x38e
    addi r0, r3, 0x38e3
    cmplw r31, r0
    bge lbl_fn_803C95EC_000004B4
    addi r5, r31, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x8(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x10
    srwi r4, r4, 2
    stw r4, 0x10(r1)
    cmplw r4, r0
    bge lbl_fn_803C95EC_000004A8
    addi r3, r1, 0x8
lbl_fn_803C95EC_000004A8:
    lwz r0, 0x0(r3)
    add r28, r31, r0
    b lbl_fn_803C95EC_000004F8
lbl_fn_803C95EC_000004B4:
    lis r3, 0x71c
    addi r0, r3, 0x71c6
    cmplw r31, r0
    bge lbl_fn_803C95EC_000004F0
    addi r3, r31, 0x1
    lwz r0, 0x8(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_803C95EC_000004E4
    addi r3, r1, 0x8
lbl_fn_803C95EC_000004E4:
    lwz r0, 0x0(r3)
    add r28, r31, r0
    b lbl_fn_803C95EC_000004F8
lbl_fn_803C95EC_000004F0:
    lis r3, 0xaab
    subi r28, r3, 0x5556
lbl_fn_803C95EC_000004F8:
    lis r3, 0xaab
    subi r0, r3, 0x5556
    cmplw r28, r0
    ble lbl_fn_803C95EC_0000052C
    lis r4, lbl_807500DC@ha
    lis r3, __files@ha
    addi r4, r4, lbl_807500DC@l
    addi r3, r3, __files@l
    addi r4, r4, 0x39f
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_803C95EC_0000052C:
    mulli r3, r28, 0x18
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_803C95EC_00000560
    lis r3, __files@ha
    lis r4, lbl_8078BC80@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8078BC80@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_803C95EC_00000560:
    lwz r0, 0x24(r1)
    stw r31, 0x20(r1)
    mulli r3, r0, 0x18
    stw r28, 0x28(r1)
    lwz r0, 0x4(r29)
    stw r0, 0x30(r1)
    mulli r0, r0, 0x18
    add r0, r31, r0
    add. r3, r3, r0
    beq lbl_fn_803C95EC_000005B0
    lwz r0, 0x0(r30)
    stw r0, 0x0(r3)
    lwz r0, 0x4(r30)
    stw r0, 0x4(r3)
    lwz r0, 0x8(r30)
    stw r0, 0x8(r3)
    psq_l f1, 0xc(r30), 0, 0
    psq_st f1, 0xc(r3), 0, 0
    lfs f2, 0x14(r30)
    stfs f2, 0x14(r3)
lbl_fn_803C95EC_000005B0:
    lwz r3, 0x24(r1)
    lwz r0, 0x30(r1)
    addi r3, r3, 0x1
    stw r3, 0x24(r1)
    mulli r0, r0, 0x18
    lwz r3, 0x20(r1)
    lwz r4, 0x4(r29)
    lwz r7, 0x0(r29)
    mulli r4, r4, 0x18
    add r6, r3, r0
    add r5, r7, r4
    b lbl_fn_803C95EC_0000062C
lbl_fn_803C95EC_000005E0:
    subic. r6, r6, 0x18
    subi r5, r5, 0x18
    beq lbl_fn_803C95EC_00000614
    lwz r0, 0x4(r5)
    lwz r3, 0x0(r5)
    stw r3, 0x0(r6)
    stw r0, 0x4(r6)
    lwz r0, 0x8(r5)
    stw r0, 0x8(r6)
    lfs f2, 0x14(r5)
    psq_l f1, 0xc(r5), 0, 0
    psq_st f1, 0xc(r6), 0, 0
    stfs f2, 0x14(r6)
lbl_fn_803C95EC_00000614:
    lwz r4, 0x30(r1)
    lwz r3, 0x24(r1)
    subi r0, r4, 0x1
    stw r0, 0x30(r1)
    addi r0, r3, 0x1
    stw r0, 0x24(r1)
lbl_fn_803C95EC_0000062C:
    cmplw r7, r5
    blt lbl_fn_803C95EC_000005E0
    li r4, 0x0
    stw r4, 0x4(r29)
    addic. r0, r1, 0x20
    lwz r3, 0x8(r29)
    lwz r0, 0x28(r1)
    stw r0, 0x8(r29)
    stw r3, 0x28(r1)
    lwz r0, 0x20(r1)
    lwz r3, 0x0(r29)
    stw r0, 0x0(r29)
    stw r3, 0x20(r1)
    lwz r0, 0x24(r1)
    stw r0, 0x4(r29)
    stw r4, 0x24(r1)
    beq lbl_fn_803C95EC_00000684
    lwz r3, 0x20(r1)
    cmpwi r3, 0x0
    beq lbl_fn_803C95EC_00000684
    stw r4, 0x24(r1)
    bl dtor_80084684
lbl_fn_803C95EC_00000684:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    lwz r28, 0x40(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_803C99A8(void)
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
    bge lbl_fn_803C99A8_0000070C
    addi r5, r6, 0x1
    lwz r7, 0x0(r3)
    subi r0, r5, 0x1
    stw r5, 0x4(r3)
    mulli r6, r0, 0xc
    lwz r5, 0x0(r4)
    lwz r3, 0x4(r4)
    lwz r0, 0x8(r4)
    stwx r5, r7, r6
    add r4, r7, r6
    stw r3, 0x4(r4)
    stw r0, 0x8(r4)
    b lbl_fn_803C99A8_000009B8
lbl_fn_803C99A8_0000070C:
    lis r3, 0x1555
    addi r0, r3, 0x5555
    subf r0, r5, r0
    cmplwi r0, 0x1
    bge lbl_fn_803C99A8_00000744
    lis r4, lbl_807500DC@ha
    lis r3, __files@ha
    addi r4, r4, lbl_807500DC@l
    addi r3, r3, __files@l
    addi r4, r4, 0x39f
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_803C99A8_00000744:
    li r5, 0x0
    addi r4, r29, 0x8
    lis r3, 0x1555
    stw r5, 0x14(r1)
    addi r0, r3, 0x5555
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
    stw r3, 0x8(r1)
    ble lbl_fn_803C99A8_000007AC
    lis r4, lbl_807500DC@ha
    lis r3, __files@ha
    addi r4, r4, lbl_807500DC@l
    addi r3, r3, __files@l
    addi r4, r4, 0x39f
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_803C99A8_000007AC:
    lis r3, 0x71c
    addi r0, r3, 0x71c7
    cmplw r31, r0
    bge lbl_fn_803C99A8_000007FC
    addi r5, r31, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x8(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x10
    srwi r4, r4, 2
    stw r4, 0x10(r1)
    cmplw r4, r0
    bge lbl_fn_803C99A8_000007F0
    addi r3, r1, 0x8
lbl_fn_803C99A8_000007F0:
    lwz r0, 0x0(r3)
    add r28, r31, r0
    b lbl_fn_803C99A8_00000840
lbl_fn_803C99A8_000007FC:
    lis r3, 0xe39
    subi r0, r3, 0x1c72
    cmplw r31, r0
    bge lbl_fn_803C99A8_00000838
    addi r3, r31, 0x1
    lwz r0, 0x8(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_803C99A8_0000082C
    addi r3, r1, 0x8
lbl_fn_803C99A8_0000082C:
    lwz r0, 0x0(r3)
    add r28, r31, r0
    b lbl_fn_803C99A8_00000840
lbl_fn_803C99A8_00000838:
    lis r3, 0x1555
    addi r28, r3, 0x5555
lbl_fn_803C99A8_00000840:
    lis r3, 0x1555
    addi r0, r3, 0x5555
    cmplw r28, r0
    ble lbl_fn_803C99A8_00000874
    lis r4, lbl_807500DC@ha
    lis r3, __files@ha
    addi r4, r4, lbl_807500DC@l
    addi r3, r3, __files@l
    addi r4, r4, 0x39f
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_803C99A8_00000874:
    mulli r3, r28, 0xc
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_803C99A8_000008A8
    lis r3, __files@ha
    lis r4, lbl_8078BC9C@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8078BC9C@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_803C99A8_000008A8:
    lwz r3, 0x18(r1)
    li r0, 0xc
    stw r31, 0x14(r1)
    mulli r7, r3, 0xc
    lwz r5, 0x0(r30)
    stw r28, 0x1c(r1)
    lwz r4, 0x4(r30)
    lwz r3, 0x4(r29)
    stw r3, 0x24(r1)
    mulli r6, r3, 0xc
    lwz r3, 0x8(r30)
    add r6, r31, r6
    stwux r5, r6, r7
    stw r4, 0x4(r6)
    stw r3, 0x8(r6)
    lwz r4, 0x18(r1)
    lwz r3, 0x24(r1)
    addi r4, r4, 0x1
    stw r4, 0x18(r1)
    mulli r3, r3, 0xc
    lwz r4, 0x14(r1)
    lwz r5, 0x4(r29)
    lwz r7, 0x0(r29)
    mulli r5, r5, 0xc
    add r6, r4, r3
    add r5, r7, r5
    addi r3, r5, 0xb
    subf r3, r7, r3
    divwu r3, r3, r0
    mtctr r3
    cmplw r5, r7
    ble lbl_fn_803C99A8_00000968
lbl_fn_803C99A8_00000928:
    subic. r6, r6, 0xc
    subi r5, r5, 0xc
    beq lbl_fn_803C99A8_0000094C
    lwz r0, 0x4(r5)
    lwz r3, 0x0(r5)
    stw r3, 0x0(r6)
    stw r0, 0x4(r6)
    lwz r0, 0x8(r5)
    stw r0, 0x8(r6)
lbl_fn_803C99A8_0000094C:
    lwz r4, 0x24(r1)
    lwz r3, 0x18(r1)
    subi r0, r4, 0x1
    stw r0, 0x24(r1)
    addi r0, r3, 0x1
    stw r0, 0x18(r1)
    bdnz lbl_fn_803C99A8_00000928
lbl_fn_803C99A8_00000968:
    li r4, 0x0
    stw r4, 0x4(r29)
    addic. r0, r1, 0x14
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
    beq lbl_fn_803C99A8_000009B8
    lwz r3, 0x14(r1)
    cmpwi r3, 0x0
    beq lbl_fn_803C99A8_000009B8
    stw r4, 0x18(r1)
    bl dtor_80084684
lbl_fn_803C99A8_000009B8:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_803C9CDC(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    blr
}

asm void fn_803C9CE4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r6, 0x4(r3)
    cmpwi r6, 0x0
    beq lbl_fn_803C9CE4_00000A1C
    beq lbl_fn_803C9CE4_00000A1C
    subi r3, r6, 0x10
    bl fn_80084C24
lbl_fn_803C9CE4_00000A1C:
    cmpwi r30, 0x0
    stw r30, 0x0(r29)
    beq lbl_fn_803C9CE4_00000A64
    mulli r3, r30, 0x18
    mr r4, r31
    la r5, lbl_8087DDDC
    la r6, lbl_8087DDD8
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_803C95E8@ha
    mr r7, r30
    addi r4, r4, fn_803C95E8@l
    li r5, 0x0
    li r6, 0x18
    bl fn_80695720
    stw r3, 0x4(r29)
    b lbl_fn_803C9CE4_00000A6C
lbl_fn_803C9CE4_00000A64:
    li r0, 0x0
    stw r0, 0x4(r29)
lbl_fn_803C9CE4_00000A6C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803C9D8C(void)
{
    nofralloc
    mulli r0, r4, 0x18
    lwz r3, 0x0(r3)
    add r3, r3, r0
    blr
}

asm void fn_803C9D9C(void)
{
    nofralloc
    lwz r6, 0x0(r4)
    lwz r5, 0x4(r4)
    lwz r0, 0x8(r4)
    psq_l f1, 0xc(r4), 0, 0
    lfs f2, 0x14(r4)
    stw r6, 0x0(r3)
    stw r5, 0x4(r3)
    stw r0, 0x8(r3)
    psq_st f1, 0xc(r3), 0, 0
    stfs f2, 0x14(r3)
    blr
}

asm void fn_803C9DC8(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    blr
}

asm void fn_803C9DD0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803C9DD0_00000B04
    mr r3, r0
    bl fn_80084C24
lbl_fn_803C9DD0_00000B04:
    cmpwi r30, 0x0
    stw r30, 0x0(r29)
    beq lbl_fn_803C9DD0_00000B30
    mulli r3, r30, 0xc
    mr r4, r31
    la r5, lbl_8087DDD4
    la r6, lbl_8087DDD0
    li r7, 0x0
    bl fn_800846FC
    stw r3, 0x4(r29)
    b lbl_fn_803C9DD0_00000B38
lbl_fn_803C9DD0_00000B30:
    li r0, 0x0
    stw r0, 0x4(r29)
lbl_fn_803C9DD0_00000B38:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803C9E58(void)
{
    nofralloc
    mulli r0, r4, 0xc
    lwz r3, 0x0(r3)
    add r3, r3, r0
    blr
}

asm void fn_803C9E68(void)
{
    nofralloc
    lwz r6, 0x0(r4)
    lwz r5, 0x4(r4)
    lwz r0, 0x8(r4)
    stw r6, 0x0(r3)
    stw r5, 0x4(r3)
    stw r0, 0x8(r3)
    blr
}

asm void fn_803C9E84(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    blr
}

asm void fn_803C9E98(void)
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
    beq lbl_fn_803C9E98_00000BD8
    lwz r3, 0x0(r3)
    cmpwi r3, 0x0
    beq lbl_fn_803C9E98_00000BC8
    bl fn_80084C24
lbl_fn_803C9E98_00000BC8:
    cmpwi r31, 0x0
    ble lbl_fn_803C9E98_00000BD8
    mr r3, r30
    bl dtor_80084684
lbl_fn_803C9E98_00000BD8:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803C9EF8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803C9EF8_00000C2C
    mr r3, r0
    bl fn_80084C24
lbl_fn_803C9EF8_00000C2C:
    mullw r3, r30, r31
    stw r30, 0x4(r29)
    li r4, 0x0
    stw r31, 0x8(r29)
    la r5, lbl_8087DDCC
    la r6, lbl_8087DDC8
    li r7, 0x0
    bl fn_800846FC
    stw r3, 0x0(r29)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803C9F70(void)
{
    nofralloc
    lwz r0, 0x8(r3)
    lwz r3, 0x0(r3)
    mullw r0, r4, r0
    add r3, r3, r0
    blr
}

asm void fn_803C9F84(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803C9F84_00000CB8
    mr r3, r0
    bl fn_80084C24
lbl_fn_803C9F84_00000CB8:
    cmpwi r30, 0x0
    stw r30, 0x0(r29)
    beq lbl_fn_803C9F84_00000CE4
    mr r4, r31
    slwi r3, r30, 3
    la r5, lbl_8087DDC4
    la r6, lbl_8087DDC0
    li r7, 0x0
    bl fn_800846FC
    stw r3, 0x4(r29)
    b lbl_fn_803C9F84_00000CEC
lbl_fn_803C9F84_00000CE4:
    li r0, 0x0
    stw r0, 0x4(r29)
lbl_fn_803C9F84_00000CEC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803CA00C(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    blr
}

asm void fn_803CA014(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r30, 0x0(r3)
    cmplw r4, r30
    beq lbl_fn_803CA014_00000DD4
    cmpwi r4, 0x0
    stw r4, 0x0(r3)
    lwz r31, 0x4(r3)
    beq lbl_fn_803CA014_00000DBC
    slwi r3, r4, 2
    mr r4, r5
    la r5, lbl_8087DDBC
    la r6, lbl_8087DDB8
    li r7, 0x0
    bl fn_800846FC
    cmpwi r31, 0x0
    stw r3, 0x4(r29)
    beq lbl_fn_803CA014_00000DC4
    cmpwi r30, 0x0
    beq lbl_fn_803CA014_00000DC4
    mr r4, r31
    li r6, 0x0
    li r5, 0x0
    b lbl_fn_803CA014_00000D9C
lbl_fn_803CA014_00000D84:
    lwz r3, 0x4(r29)
    addi r6, r6, 0x1
    lwz r0, 0x0(r4)
    addi r4, r4, 0x4
    stwx r0, r3, r5
    addi r5, r5, 0x4
lbl_fn_803CA014_00000D9C:
    lwz r3, 0x0(r29)
    mr r0, r30
    cmplw r30, r3
    blt lbl_fn_803CA014_00000DB0
    mr r0, r3
lbl_fn_803CA014_00000DB0:
    cmplw r6, r0
    blt lbl_fn_803CA014_00000D84
    b lbl_fn_803CA014_00000DC4
lbl_fn_803CA014_00000DBC:
    li r0, 0x0
    stw r0, 0x4(r3)
lbl_fn_803CA014_00000DC4:
    cmpwi r31, 0x0
    beq lbl_fn_803CA014_00000DD4
    mr r3, r31
    bl fn_80084C24
lbl_fn_803CA014_00000DD4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803CA0F4(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    li r5, 0x0
    stw r0, 0x44(r1)
    stmw r21, 0x14(r1)
    mr r28, r3
    li r27, 0x0
    li r22, 0x0
    lwz r0, 0x170(r3)
    lwz r6, lbl_8087F430
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_803CA0F4_00000E74
lbl_fn_803CA0F4_00000E24:
    lwz r0, 0x174(r3)
    add r4, r0, r5
    lwz r4, 0x9c(r4)
    cmpwi r4, 0x0
    beq lbl_fn_803CA0F4_00000E5C
    cmpwi r6, 0x0
    beq lbl_fn_803CA0F4_00000E5C
    lwz r0, 0x5694(r6)
    cmpwi r0, 0x0
    bne lbl_fn_803CA0F4_00000E54
    clrlwi r0, r4, 31
    b lbl_fn_803CA0F4_00000E60
lbl_fn_803CA0F4_00000E54:
    extrwi r0, r4, 1, 30
    b lbl_fn_803CA0F4_00000E60
lbl_fn_803CA0F4_00000E5C:
    li r0, 0x1
lbl_fn_803CA0F4_00000E60:
    cmpwi r0, 0x0
    beq lbl_fn_803CA0F4_00000E6C
    addi r22, r22, 0x1
lbl_fn_803CA0F4_00000E6C:
    addi r5, r5, 0xa0
    bdnz lbl_fn_803CA0F4_00000E24
lbl_fn_803CA0F4_00000E74:
    lwz r3, 0x14c(r3)
    cmpwi r3, 0x0
    beq lbl_fn_803CA0F4_00000E84
    bl fn_80084C24
lbl_fn_803CA0F4_00000E84:
    cmpwi r22, 0x0
    stw r22, 0x148(r28)
    beq lbl_fn_803CA0F4_00000EB0
    mulli r3, r22, 0x90
    li r4, 0x3
    la r5, lbl_8087DDB4
    la r6, lbl_8087DDB0
    li r7, 0x0
    bl fn_800846FC
    stw r3, 0x14c(r28)
    b lbl_fn_803CA0F4_00000EB8
lbl_fn_803CA0F4_00000EB0:
    li r0, 0x0
    stw r0, 0x14c(r28)
lbl_fn_803CA0F4_00000EB8:
    li r29, 0x0
    li r31, 0x0
    li r25, 0x3
    li r26, 0x0
    b lbl_fn_803CA0F4_00000FD8
lbl_fn_803CA0F4_00000ECC:
    lwz r0, 0x174(r28)
    add r30, r0, r31
    lwz r4, 0x9c(r30)
    cmpwi r4, 0x0
    beq lbl_fn_803CA0F4_00000F08
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803CA0F4_00000F08
    lwz r0, 0x5694(r3)
    cmpwi r0, 0x0
    bne lbl_fn_803CA0F4_00000F00
    clrlwi r0, r4, 31
    b lbl_fn_803CA0F4_00000F0C
lbl_fn_803CA0F4_00000F00:
    extrwi r0, r4, 1, 30
    b lbl_fn_803CA0F4_00000F0C
lbl_fn_803CA0F4_00000F08:
    li r0, 0x1
lbl_fn_803CA0F4_00000F0C:
    cmpwi r0, 0x0
    beq lbl_fn_803CA0F4_00000FD0
    lwz r0, 0x14c(r28)
    li r4, 0x0
    li r5, 0x80
    stwx r25, r27, r0
    add r24, r0, r27
    addi r3, r24, 0xc
    lwz r0, 0x0(r30)
    stw r0, 0x4(r24)
    bl memset
    mr r23, r30
    mr r22, r24
    li r21, 0x0
    b lbl_fn_803CA0F4_00000F64
lbl_fn_803CA0F4_00000F48:
    lwz r3, lbl_8087F8A0
    lwz r4, 0x0(r4)
    bl fn_8011F91C
    stw r3, 0xc(r22)
    addi r23, r23, 0x4
    addi r22, r22, 0x4
    addi r21, r21, 0x1
lbl_fn_803CA0F4_00000F64:
    lwz r4, 0x10(r23)
    cmpwi r4, 0x0
    bne lbl_fn_803CA0F4_00000F48
    lwz r4, 0x94(r30)
    cmpwi r4, 0x0
    beq lbl_fn_803CA0F4_00000F90
    lwz r3, lbl_8087F8A0
    lwz r4, 0x0(r4)
    bl fn_8011F91C
    stw r3, 0x8c(r24)
    b lbl_fn_803CA0F4_00000FC4
lbl_fn_803CA0F4_00000F90:
    lwz r0, 0x90(r30)
    cmpwi r0, -0x1
    bne lbl_fn_803CA0F4_00000FC0
    lwz r3, lbl_8087F8A0
    cmplwi r21, 0x20
    lwz r4, 0x48(r3)
    bge lbl_fn_803CA0F4_00000FC4
    slwi r0, r21, 2
    add r3, r24, r0
    stw r4, 0xc(r3)
    stw r4, 0x8c(r24)
    b lbl_fn_803CA0F4_00000FC4
lbl_fn_803CA0F4_00000FC0:
    stw r26, 0x8c(r24)
lbl_fn_803CA0F4_00000FC4:
    lwz r0, 0x98(r30)
    addi r27, r27, 0x90
    stw r0, 0x8(r24)
lbl_fn_803CA0F4_00000FD0:
    addi r31, r31, 0xa0
    addi r29, r29, 0x1
lbl_fn_803CA0F4_00000FD8:
    lwz r0, 0x170(r28)
    cmplw r29, r0
    blt lbl_fn_803CA0F4_00000ECC
    lwz r0, 0x148(r28)
    cmpwi r0, 0x0
    bne lbl_fn_803CA0F4_00001070
    lwz r3, 0x14c(r28)
    cmpwi r3, 0x0
    beq lbl_fn_803CA0F4_00001000
    bl fn_80084C24
lbl_fn_803CA0F4_00001000:
    li r0, 0x1
    stw r0, 0x148(r28)
    mulli r3, r0, 0x90
    li r4, 0x3
    la r5, lbl_8087DDB4
    la r6, lbl_8087DDB0
    li r7, 0x0
    bl fn_800846FC
    stw r3, 0x14c(r28)
    b lbl_fn_803CA0F4_0000102C
    stw r0, 0x14c(r28)
lbl_fn_803CA0F4_0000102C:
    lwz r3, 0x14c(r28)
    li r5, 0x3
    li r0, 0x1
    li r4, 0x0
    stw r5, 0x0(r3)
    li r5, 0x80
    lwz r3, 0x14c(r28)
    stw r0, 0x4(r3)
    lwz r3, 0x14c(r28)
    addi r3, r3, 0xc
    bl memset
    lwz r4, lbl_8087F8A0
    lwz r3, 0x14c(r28)
    lwz r0, 0x48(r4)
    stw r0, 0xc(r3)
    lwz r3, 0x14c(r28)
    stw r0, 0x8c(r3)
lbl_fn_803CA0F4_00001070:
    lwz r0, 0x178(r28)
    li r30, 0x0
    lwz r5, lbl_8087F430
    li r22, 0x0
    li r4, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_803CA0F4_000010E0
lbl_fn_803CA0F4_00001090:
    lwz r0, 0x17c(r28)
    add r3, r0, r4
    lwz r3, 0x9c(r3)
    cmpwi r3, 0x0
    beq lbl_fn_803CA0F4_000010C8
    cmpwi r5, 0x0
    beq lbl_fn_803CA0F4_000010C8
    lwz r0, 0x5694(r5)
    cmpwi r0, 0x0
    bne lbl_fn_803CA0F4_000010C0
    clrlwi r0, r3, 31
    b lbl_fn_803CA0F4_000010CC
lbl_fn_803CA0F4_000010C0:
    extrwi r0, r3, 1, 30
    b lbl_fn_803CA0F4_000010CC
lbl_fn_803CA0F4_000010C8:
    li r0, 0x1
lbl_fn_803CA0F4_000010CC:
    cmpwi r0, 0x0
    beq lbl_fn_803CA0F4_000010D8
    addi r22, r22, 0x1
lbl_fn_803CA0F4_000010D8:
    addi r4, r4, 0xa0
    bdnz lbl_fn_803CA0F4_00001090
lbl_fn_803CA0F4_000010E0:
    lwz r3, 0x154(r28)
    cmpwi r3, 0x0
    beq lbl_fn_803CA0F4_000010F0
    bl fn_80084C24
lbl_fn_803CA0F4_000010F0:
    cmpwi r22, 0x0
    stw r22, 0x150(r28)
    beq lbl_fn_803CA0F4_0000111C
    mulli r3, r22, 0x90
    li r4, 0x3
    la r5, lbl_8087DDB4
    la r6, lbl_8087DDB0
    li r7, 0x0
    bl fn_800846FC
    stw r3, 0x154(r28)
    b lbl_fn_803CA0F4_00001124
lbl_fn_803CA0F4_0000111C:
    li r0, 0x0
    stw r0, 0x154(r28)
lbl_fn_803CA0F4_00001124:
    li r29, 0x0
    li r25, 0x0
    li r31, 0x2
    li r27, 0x0
    b lbl_fn_803CA0F4_0000120C
lbl_fn_803CA0F4_00001138:
    lwz r0, 0x17c(r28)
    add r22, r0, r25
    lwz r4, 0x9c(r22)
    cmpwi r4, 0x0
    beq lbl_fn_803CA0F4_00001174
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803CA0F4_00001174
    lwz r0, 0x5694(r3)
    cmpwi r0, 0x0
    bne lbl_fn_803CA0F4_0000116C
    clrlwi r0, r4, 31
    b lbl_fn_803CA0F4_00001178
lbl_fn_803CA0F4_0000116C:
    extrwi r0, r4, 1, 30
    b lbl_fn_803CA0F4_00001178
lbl_fn_803CA0F4_00001174:
    li r0, 0x1
lbl_fn_803CA0F4_00001178:
    cmpwi r0, 0x0
    beq lbl_fn_803CA0F4_00001204
    lwz r0, 0x154(r28)
    li r4, 0x0
    li r5, 0x80
    stwx r31, r30, r0
    add r24, r0, r30
    addi r3, r24, 0xc
    lwz r0, 0x0(r22)
    stw r0, 0x4(r24)
    bl memset
    mr r26, r22
    mr r23, r24
    b lbl_fn_803CA0F4_000011C8
lbl_fn_803CA0F4_000011B0:
    lwz r3, lbl_8087F408
    lwz r4, 0x0(r4)
    bl fn_8011FC10
    stw r3, 0xc(r23)
    addi r26, r26, 0x4
    addi r23, r23, 0x4
lbl_fn_803CA0F4_000011C8:
    lwz r4, 0x10(r26)
    cmpwi r4, 0x0
    bne lbl_fn_803CA0F4_000011B0
    lwz r4, 0x94(r22)
    cmpwi r4, 0x0
    beq lbl_fn_803CA0F4_000011F4
    lwz r3, lbl_8087F408
    lwz r4, 0x0(r4)
    bl fn_8011FC10
    stw r3, 0x8c(r24)
    b lbl_fn_803CA0F4_000011F8
lbl_fn_803CA0F4_000011F4:
    stw r27, 0x8c(r24)
lbl_fn_803CA0F4_000011F8:
    lwz r0, 0x98(r22)
    addi r30, r30, 0x90
    stw r0, 0x8(r24)
lbl_fn_803CA0F4_00001204:
    addi r25, r25, 0xa0
    addi r29, r29, 0x1
lbl_fn_803CA0F4_0000120C:
    lwz r0, 0x178(r28)
    cmplw r29, r0
    blt lbl_fn_803CA0F4_00001138
    lmw r21, 0x14(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_803CA530(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r0, 0x64(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803CA530_000012E4
    li r30, 0x0
    li r31, 0x0
    b lbl_fn_803CA530_00001278
lbl_fn_803CA530_00001260:
    lwz r0, 0x108(r29)
    mr r3, r29
    add r4, r0, r31
    bl fn_803EC374
    addi r31, r31, 0x80
    addi r30, r30, 0x1
lbl_fn_803CA530_00001278:
    lwz r0, 0x104(r29)
    cmplw r30, r0
    blt lbl_fn_803CA530_00001260
    lwz r3, 0x64(r29)
    lwz r0, 0x48(r3)
    cmpwi r0, 0x1
    bne lbl_fn_803CA530_000012E4
    lwz r0, lbl_8087F430
    cmpwi r0, 0x0
    beq lbl_fn_803CA530_000012E4
    lwz r0, 0x4c(r3)
    cmpwi r0, 0x3
    beq lbl_fn_803CA530_000012C0
    lis r4, 0x1
    mr r3, r29
    subi r4, r4, 0x15a0
    li r5, 0x1
    bl fn_803EC16C
lbl_fn_803CA530_000012C0:
    lis r31, 0x1
    mr r3, r29
    subi r4, r31, 0x11b8
    li r5, 0x1
    bl fn_803EC16C
    mr r3, r29
    subi r4, r31, 0x600
    li r5, 0x1
    bl fn_803EC16C
lbl_fn_803CA530_000012E4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803CA604(void)
{
    nofralloc
    stwu r1, -0x150(r1)
    mflr r0
    stw r0, 0x154(r1)
    addi r11, r1, 0xf0
    stfd f31, 0x140(r1)
    psq_st f31, 0x148(r1), 0, 0
    stfd f30, 0x130(r1)
    psq_st f30, 0x138(r1), 0, 0
    stfd f29, 0x120(r1)
    psq_st f29, 0x128(r1), 0, 0
    stfd f28, 0x110(r1)
    psq_st f28, 0x118(r1), 0, 0
    stfd f27, 0x100(r1)
    psq_st f27, 0x108(r1), 0, 0
    stfd f26, 0xf0(r1)
    psq_st f26, 0xf8(r1), 0, 0
    bl _savegpr_16
    lwz r4, lbl_8087F430
    mr r20, r3
    li r23, 0x0
    cmpwi r4, 0x0
    beq lbl_fn_803CA604_00001478
    lwz r0, 0x5694(r4)
    cmpwi r0, 0x0
    beq lbl_fn_803CA604_00001464
    mr r3, r4
    li r23, 0x1
    li r4, 0x392
    bl fn_80370174
    lwz r4, 0x64(r20)
    clrlwi r0, r3, 28
    lwz r17, 0x50(r4)
    cmpw r17, r0
    bne lbl_fn_803CA604_00001390
    li r23, 0x0
    b lbl_fn_803CA604_00001434
lbl_fn_803CA604_00001390:
    extrwi r0, r3, 4, 24
    srawi r4, r3, 4
    cmpw r17, r0
    bne lbl_fn_803CA604_000013A8
    li r23, 0x0
    b lbl_fn_803CA604_00001434
lbl_fn_803CA604_000013A8:
    srawi r4, r4, 4
    clrlwi r0, r4, 28
    cmpw r17, r0
    bne lbl_fn_803CA604_000013C0
    li r23, 0x0
    b lbl_fn_803CA604_00001434
lbl_fn_803CA604_000013C0:
    srawi r4, r4, 4
    clrlwi r0, r4, 28
    cmpw r17, r0
    bne lbl_fn_803CA604_000013D8
    li r23, 0x0
    b lbl_fn_803CA604_00001434
lbl_fn_803CA604_000013D8:
    srawi r4, r4, 4
    clrlwi r0, r4, 28
    cmpw r17, r0
    bne lbl_fn_803CA604_000013F0
    li r23, 0x0
    b lbl_fn_803CA604_00001434
lbl_fn_803CA604_000013F0:
    srawi r4, r4, 4
    clrlwi r0, r4, 28
    cmpw r17, r0
    bne lbl_fn_803CA604_00001408
    li r23, 0x0
    b lbl_fn_803CA604_00001434
lbl_fn_803CA604_00001408:
    srawi r4, r4, 4
    clrlwi r0, r4, 28
    cmpw r17, r0
    bne lbl_fn_803CA604_00001420
    li r23, 0x0
    b lbl_fn_803CA604_00001434
lbl_fn_803CA604_00001420:
    srawi r4, r4, 4
    clrlwi r0, r4, 28
    cmpw r17, r0
    bne lbl_fn_803CA604_00001434
    li r23, 0x0
lbl_fn_803CA604_00001434:
    cmpwi r23, 0x0
    beq lbl_fn_803CA604_00001478
    lwz r3, lbl_8087F430
    li r4, 0x392
    bl fn_80370174
    clrlwi r5, r17, 28
    li r4, 0x392
    rlwimi r5, r3, 4, 0, 27
    lwz r3, lbl_8087F430
    li r6, 0x1
    bl fn_80370320
    b lbl_fn_803CA604_00001478
lbl_fn_803CA604_00001464:
    mr r3, r4
    li r4, 0x392
    li r5, 0x0
    li r6, 0x1
    bl fn_80370320
lbl_fn_803CA604_00001478:
    lwz r0, 0xe4(r20)
    li r17, 0x0
    li r4, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_803CA604_000014BC
lbl_fn_803CA604_00001490:
    lwz r0, 0xe8(r20)
    add r3, r0, r4
    lwz r0, 0x2c(r3)
    cmpwi r0, 0x0
    bgt lbl_fn_803CA604_000014B4
    lwz r0, 0x30(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803CA604_000014B4
    addi r17, r17, 0x1
lbl_fn_803CA604_000014B4:
    addi r4, r4, 0x48
    bdnz lbl_fn_803CA604_00001490
lbl_fn_803CA604_000014BC:
    lwz r3, 0x18c(r20)
    cmpwi r3, 0x0
    beq lbl_fn_803CA604_000014CC
    bl fn_80084C24
lbl_fn_803CA604_000014CC:
    cmpwi r17, 0x0
    stw r17, 0x188(r20)
    beq lbl_fn_803CA604_000014F8
    slwi r3, r17, 2
    li r4, 0x3
    la r5, lbl_8087DDAC
    la r6, lbl_8087DDA8
    li r7, 0x0
    bl fn_800846FC
    stw r3, 0x18c(r20)
    b lbl_fn_803CA604_00001500
lbl_fn_803CA604_000014F8:
    li r0, 0x0
    stw r0, 0x18c(r20)
lbl_fn_803CA604_00001500:
    lfs f31, lbl_80885CBC
    addi r30, r1, 0x38
    lfs f30, lbl_80885CF0
    addi r29, r1, 0x2c
    lfs f26, lbl_80885CB8
    addi r28, r1, 0x8
    lfs f27, lbl_80885CF4
    addi r27, r1, 0x14
    lfs f28, lbl_80885CF8
    addi r26, r1, 0x20
    lfs f29, lbl_80885CFC
    li r24, 0x0
    li r19, 0x0
    li r22, 0x0
    li r18, 0x0
    lis r17, 0x1062
    b lbl_fn_803CA604_00001764
lbl_fn_803CA604_00001544:
    lwz r0, 0xe8(r20)
    add r25, r0, r18
    lwz r0, 0x2c(r25)
    cmpwi r0, 0x0
    bgt lbl_fn_803CA604_0000175C
    lwz r0, 0x30(r25)
    cmpwi r0, 0x0
    beq lbl_fn_803CA604_0000175C
    lwz r16, 0x0(r25)
    li r21, 0x5208
    lwz r3, 0x34(r25)
    bl fn_8021ECD0
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_803CA604_00001588
    lwz r3, 0x4(r3)
    addi r21, r3, 0x5208
lbl_fn_803CA604_00001588:
    mr r3, r20
    mr r4, r21
    mr r5, r16
    bl fn_803EC16C
    cmpwi r3, 0x0
    mr r16, r3
    beq lbl_fn_803CA604_0000175C
    lfs f0, 0x20(r25)
    addi r3, r1, 0x78
    li r4, 0x79
    fneg f0, f0
    stfs f31, 0x38(r1)
    stfs f31, 0x3c(r1)
    fadds f0, f30, f0
    stfs f0, 0x40(r1)
    lfs f1, 0x14(r25)
    bl fn_805F8E70
    addi r4, r1, 0x38
    addi r3, r1, 0x78
    mr r5, r4
    bl fn_805F93C0
    lfs f3, 0x38(r1)
    mr r3, r16
    lfs f0, 0x4(r25)
    li r4, 0x0
    lfs f4, 0x3c(r1)
    fadds f0, f3, f0
    lfs f3, 0x40(r1)
    stfs f31, 0x2c(r1)
    stfs f0, 0x38(r1)
    lfs f0, 0x8(r25)
    stfs f26, 0x8(r1)
    fadds f0, f4, f0
    stfs f26, 0xc(r1)
    stfs f0, 0x3c(r1)
    lfs f0, 0xc(r25)
    psq_l f1, 0x0(r30), 0, 0
    fadds f2, f3, f0
    stfs f31, 0x34(r1)
    stfs f2, 0x40(r1)
    lfs f0, 0x14(r25)
    stfs f0, 0x30(r1)
    psq_st f1, 0x6c(r16), 0, 0
    psq_l f1, 0x0(r29), 0, 0
    stfs f2, 0x74(r16)
    fmr f2, f31
    psq_st f1, 0x78(r16), 0, 0
    psq_l f1, 0x0(r28), 0, 0
    stfs f2, 0x80(r16)
    fmr f2, f26
    psq_st f1, 0x90(r16), 0, 0
    stfs f2, 0x98(r16)
    lwz r12, 0x0(r16)
    stfs f26, 0x10(r1)
    lwz r12, 0x68(r12)
    lwz r5, 0x34(r25)
    mtctr r12
    bctrl
    fsubs f0, f29, f30
    lwz r5, 0x18c(r20)
    stfs f27, 0x20(r1)
    addi r3, r1, 0x48
    li r4, 0x79
    stwx r16, r5, r19
    fadds f0, f26, f0
    addi r19, r19, 0x4
    stfs f31, 0x14(r1)
    stfs f31, 0x18(r1)
    stfs f0, 0x1c(r1)
    lfs f1, 0x14(r25)
    stfs f28, 0x24(r1)
    stfs f29, 0x28(r1)
    bl fn_805F8E70
    addi r4, r1, 0x14
    addi r3, r1, 0x48
    mr r5, r4
    bl fn_805F93C0
    lfs f3, 0x14(r1)
    addi r0, r17, 0x4dd3
    lfs f0, 0x38(r1)
    mulhw r0, r0, r21
    lfs f5, 0x18(r1)
    fadds f6, f3, f0
    lfs f4, 0x3c(r1)
    lfs f3, 0x1c(r1)
    lfs f0, 0x40(r1)
    fadds f2, f3, f0
    stfs f6, 0x14(r1)
    fadds f0, f5, f4
    srawi r0, r0, 6
    stfs f2, 0x1c(r1)
    srwi r3, r0, 31
    stfs f0, 0x18(r1)
    add r0, r0, r3
    mulli r0, r0, 0x3e8
    psq_l f1, 0x0(r27), 0, 0
    psq_st f1, 0x4(r25), 0, 0
    subf r0, r0, r21
    psq_l f1, 0x0(r26), 0, 0
    stfs f2, 0xc(r25)
    frsp f2, f29
    cmpwi r0, 0x1
    psq_st f1, 0x18(r25), 0, 0
    stfs f2, 0x20(r25)
    stw r24, 0x40(r25)
    bne lbl_fn_803CA604_0000175C
    cmpwi r23, 0x0
    beq lbl_fn_803CA604_0000175C
    cmpwi r31, 0x0
    beq lbl_fn_803CA604_0000175C
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803CA604_0000175C
    lwz r4, 0xc(r31)
    li r5, 0x0
    li r6, 0x1
    bl fn_80370320
lbl_fn_803CA604_0000175C:
    addi r22, r22, 0x1
    addi r18, r18, 0x48
lbl_fn_803CA604_00001764:
    lwz r0, 0xe4(r20)
    cmplw r22, r0
    blt lbl_fn_803CA604_00001544
    addi r11, r1, 0xf0
    psq_l f31, 0x148(r1), 0, 0
    lfd f31, 0x140(r1)
    psq_l f30, 0x138(r1), 0, 0
    lfd f30, 0x130(r1)
    psq_l f29, 0x128(r1), 0, 0
    lfd f29, 0x120(r1)
    psq_l f28, 0x118(r1), 0, 0
    lfd f28, 0x110(r1)
    psq_l f27, 0x108(r1), 0, 0
    lfd f27, 0x100(r1)
    psq_l f26, 0xf8(r1), 0, 0
    lfd f26, 0xf0(r1)
    bl _restgpr_16
    lwz r0, 0x154(r1)
    mtlr r0
    addi r1, r1, 0x150
    blr
}

asm void fn_803CAABC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r0, lbl_8087F430
    cmpwi r0, 0x0
    beq lbl_fn_803CAABC_00001BAC
    li r31, 0x0
    li r30, 0x0
    b lbl_fn_803CAABC_0000184C
lbl_fn_803CAABC_000017F0:
    lwz r0, 0xb0(r28)
    li r3, 0x1
    add r29, r0, r30
    lwz r0, 0x28(r29)
    cmpwi r0, 0x0
    beq lbl_fn_803CAABC_00001840
    lwz r0, 0x2c(r29)
    cmpwi r0, 0x1
    bne lbl_fn_803CAABC_00001824
    lwz r3, lbl_8087F430
    lwz r4, 0x30(r29)
    bl fn_80370174
    b lbl_fn_803CAABC_00001830
lbl_fn_803CAABC_00001824:
    lwz r3, lbl_8087F430
    lwz r4, 0x30(r29)
    bl fn_80370A78
lbl_fn_803CAABC_00001830:
    lwz r0, 0x34(r29)
    subf r0, r3, r0
    cntlzw r0, r0
    srwi r3, r0, 5
lbl_fn_803CAABC_00001840:
    stw r3, 0x38(r29)
    addi r30, r30, 0x40
    addi r31, r31, 0x1
lbl_fn_803CAABC_0000184C:
    lwz r0, 0xac(r28)
    cmplw r31, r0
    blt lbl_fn_803CAABC_000017F0
    li r9, 0x0
    li r7, 0x0
    li r3, 0x0
    li r4, 0x1
    b lbl_fn_803CAABC_000018BC
lbl_fn_803CAABC_0000186C:
    lwz r0, 0xb8(r28)
    lwz r8, 0xb0(r28)
    add r6, r0, r7
    lwzx r0, r7, r0
    slwi r0, r0, 6
    add r5, r8, r0
    lwz r0, 0x38(r5)
    cmpwi r0, 0x0
    beq lbl_fn_803CAABC_000018B0
    lwz r0, 0x4(r6)
    slwi r0, r0, 6
    add r5, r8, r0
    lwz r0, 0x38(r5)
    cmpwi r0, 0x0
    beq lbl_fn_803CAABC_000018B0
    stw r4, 0x8(r6)
    b lbl_fn_803CAABC_000018B4
lbl_fn_803CAABC_000018B0:
    stw r3, 0x8(r6)
lbl_fn_803CAABC_000018B4:
    addi r7, r7, 0x18
    addi r9, r9, 0x1
lbl_fn_803CAABC_000018BC:
    lwz r0, 0xb4(r28)
    cmplw r9, r0
    blt lbl_fn_803CAABC_0000186C
    li r9, 0x0
    li r7, 0x0
    li r3, 0x0
    li r4, 0x1
    b lbl_fn_803CAABC_0000192C
lbl_fn_803CAABC_000018DC:
    lwz r0, 0xc0(r28)
    lwz r8, 0xb0(r28)
    add r6, r0, r7
    lwzx r0, r7, r0
    slwi r0, r0, 6
    add r5, r8, r0
    lwz r0, 0x38(r5)
    cmpwi r0, 0x0
    beq lbl_fn_803CAABC_00001920
    lwz r0, 0x4(r6)
    slwi r0, r0, 6
    add r5, r8, r0
    lwz r0, 0x38(r5)
    cmpwi r0, 0x0
    beq lbl_fn_803CAABC_00001920
    stw r4, 0x8(r6)
    b lbl_fn_803CAABC_00001924
lbl_fn_803CAABC_00001920:
    stw r3, 0x8(r6)
lbl_fn_803CAABC_00001924:
    addi r7, r7, 0xc
    addi r9, r9, 0x1
lbl_fn_803CAABC_0000192C:
    lwz r0, 0xbc(r28)
    cmplw r9, r0
    blt lbl_fn_803CAABC_000018DC
    li r7, 0x0
    li r6, 0x0
    b lbl_fn_803CAABC_00001994
lbl_fn_803CAABC_00001944:
    lwz r0, 0x7c(r28)
    li r4, 0x1
    add r5, r0, r6
    lwz r0, 0x18(r5)
    cmpwi r0, 0x0
    beq lbl_fn_803CAABC_00001988
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803CAABC_00001988
    lwz r3, 0x10d0(r3)
    lwz r0, 0x1c(r5)
    cmpw r3, r0
    blt lbl_fn_803CAABC_00001984
    lwz r0, 0x20(r5)
    cmpw r0, r3
    bge lbl_fn_803CAABC_00001988
lbl_fn_803CAABC_00001984:
    li r4, 0x0
lbl_fn_803CAABC_00001988:
    stw r4, 0x24(r5)
    addi r6, r6, 0x28
    addi r7, r7, 0x1
lbl_fn_803CAABC_00001994:
    lwz r0, 0x78(r28)
    cmplw r7, r0
    blt lbl_fn_803CAABC_00001944
    li r31, 0x0
    li r30, 0x0
    b lbl_fn_803CAABC_00001A08
lbl_fn_803CAABC_000019AC:
    lwz r0, 0xc8(r28)
    li r3, 0x1
    add r29, r0, r30
    lwz r0, 0x1c(r29)
    cmpwi r0, 0x0
    beq lbl_fn_803CAABC_000019FC
    lwz r0, 0x20(r29)
    cmpwi r0, 0x1
    bne lbl_fn_803CAABC_000019E0
    lwz r3, lbl_8087F430
    lwz r4, 0x24(r29)
    bl fn_80370174
    b lbl_fn_803CAABC_000019EC
lbl_fn_803CAABC_000019E0:
    lwz r3, lbl_8087F430
    lwz r4, 0x24(r29)
    bl fn_80370A78
lbl_fn_803CAABC_000019EC:
    lwz r0, 0x28(r29)
    subf r0, r3, r0
    cntlzw r0, r0
    srwi r3, r0, 5
lbl_fn_803CAABC_000019FC:
    stw r3, 0x2c(r29)
    addi r30, r30, 0x30
    addi r31, r31, 0x1
lbl_fn_803CAABC_00001A08:
    lwz r0, 0xc4(r28)
    cmplw r31, r0
    blt lbl_fn_803CAABC_000019AC
    li r29, 0x0
    li r30, 0x0
    b lbl_fn_803CAABC_00001AD4
lbl_fn_803CAABC_00001A20:
    lwz r0, 0x100(r28)
    li r3, 0x1
    add r31, r0, r30
    lwz r0, 0x1c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_803CAABC_00001A70
    lwz r0, 0x20(r31)
    cmpwi r0, 0x1
    bne lbl_fn_803CAABC_00001A54
    lwz r3, lbl_8087F430
    lwz r4, 0x24(r31)
    bl fn_80370174
    b lbl_fn_803CAABC_00001A60
lbl_fn_803CAABC_00001A54:
    lwz r3, lbl_8087F430
    lwz r4, 0x24(r31)
    bl fn_80370A78
lbl_fn_803CAABC_00001A60:
    lwz r0, 0x28(r31)
    subf r0, r3, r0
    cntlzw r0, r0
    srwi r3, r0, 5
lbl_fn_803CAABC_00001A70:
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_fn_803CAABC_00001AC8
    lwz r0, 0x2c(r31)
    li r4, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_803CAABC_00001ABC
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803CAABC_00001ABC
    lwz r3, 0x10d0(r3)
    lwz r0, 0x30(r31)
    cmpw r3, r0
    blt lbl_fn_803CAABC_00001AB8
    lwz r0, 0x34(r31)
    cmpw r0, r3
    bge lbl_fn_803CAABC_00001ABC
lbl_fn_803CAABC_00001AB8:
    li r4, 0x0
lbl_fn_803CAABC_00001ABC:
    neg r0, r4
    or r0, r0, r4
    srwi r0, r0, 31
lbl_fn_803CAABC_00001AC8:
    stw r0, 0x38(r31)
    addi r30, r30, 0x40
    addi r29, r29, 0x1
lbl_fn_803CAABC_00001AD4:
    lwz r0, 0xfc(r28)
    cmplw r29, r0
    blt lbl_fn_803CAABC_00001A20
    li r29, 0x0
    li r30, 0x0
    b lbl_fn_803CAABC_00001BA0
lbl_fn_803CAABC_00001AEC:
    lwz r0, 0x108(r28)
    li r3, 0x1
    add r31, r0, r30
    lwz r0, 0x60(r31)
    cmpwi r0, 0x0
    beq lbl_fn_803CAABC_00001B3C
    lwz r0, 0x64(r31)
    cmpwi r0, 0x1
    bne lbl_fn_803CAABC_00001B20
    lwz r3, lbl_8087F430
    lwz r4, 0x68(r31)
    bl fn_80370174
    b lbl_fn_803CAABC_00001B2C
lbl_fn_803CAABC_00001B20:
    lwz r3, lbl_8087F430
    lwz r4, 0x68(r31)
    bl fn_80370A78
lbl_fn_803CAABC_00001B2C:
    lwz r0, 0x6c(r31)
    subf r0, r3, r0
    cntlzw r0, r0
    srwi r3, r0, 5
lbl_fn_803CAABC_00001B3C:
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_fn_803CAABC_00001B94
    lwz r0, 0x70(r31)
    li r4, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_803CAABC_00001B88
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803CAABC_00001B88
    lwz r3, 0x10d0(r3)
    lwz r0, 0x74(r31)
    cmpw r3, r0
    blt lbl_fn_803CAABC_00001B84
    lwz r0, 0x78(r31)
    cmpw r0, r3
    bge lbl_fn_803CAABC_00001B88
lbl_fn_803CAABC_00001B84:
    li r4, 0x0
lbl_fn_803CAABC_00001B88:
    neg r0, r4
    or r0, r0, r4
    srwi r0, r0, 31
lbl_fn_803CAABC_00001B94:
    stw r0, 0x7c(r31)
    addi r30, r30, 0x80
    addi r29, r29, 0x1
lbl_fn_803CAABC_00001BA0:
    lwz r0, 0x104(r28)
    cmplw r29, r0
    blt lbl_fn_803CAABC_00001AEC
lbl_fn_803CAABC_00001BAC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
