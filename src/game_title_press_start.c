#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_8004ECC0(void);
extern void fn_800844D8(void);
extern void fn_8020924C(void);
extern void fn_8020A81C(void);
extern void fn_8020FCE8(void);
extern void fn_8036E430(void);
extern void fn_8036E92C(void);
extern void fn_8036E994(void);
extern void fn_80370174(void);
extern void fn_80370320(void);
extern void fn_80370A78(void);
extern void fn_80371164(void);
extern void fn_80373148(void);
extern void fn_803754F0(void);
extern void fn_80375D0C(void);
extern void fn_8039BF04(void);
extern void fn_803AE718(void);
extern void fn_803AEA24(void);
extern void fn_803DF5B4(void);
extern void fn_803E44C4(void);
extern void fn_803E58CC(void);
extern void fn_803E58E4(void);
extern void fn_803E598C(void);
extern void fn_80449A18(void);
extern void fn_804A0F58(void);
extern void fn_805F98D0(void);
extern void fn_805F9940(void);
extern void fn_80680770(void);
extern void fn_80680CF8(void);
extern void fn_80686EA4(void);
extern void memmove(void);
extern int sprintf(char* str, const char* format, ...);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_8074ECD8[];
extern u8 lbl_8074ED24[];
extern u8 lbl_8074EFC8[];
extern u8 lbl_8074F5E8[];
extern u8 lbl_8074F8CC[];
extern u8 lbl_80778910[];

/* Small data declarations */
extern u32 lbl_8087D990;
extern u32 lbl_8087EE98;
extern u32 lbl_8087F068;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F430;
extern u32 lbl_8087F490;
extern u32 lbl_8087F4F0;
extern u32 lbl_8087F8A0;
extern u32 lbl_80885B10;
extern u32 lbl_80885B24;
extern u32 lbl_80885B28;
extern u32 lbl_80885B30;
extern u32 lbl_80885BD8;
extern u32 lbl_80885BE4;

/* Function declarations */
void fn_803AAA74(void);
void fn_803AAAE4(void);
void fn_803AAC60(void);
void fn_803AAD58(void);
void fn_803AADCC(void);
void fn_803AAF74(void);
void fn_803AB06C(void);
void fn_803AB144(void);
void fn_803AB1B0(void);
void fn_803AB1F4(void);
void fn_803AB26C(void);
void fn_803AB328(void);
void fn_803AB368(void);
void fn_803AB37C(void);
void fn_803AB428(void);
void fn_803AB948(void);
void fn_803AB96C(void);
void fn_803ABE54(void);
void fn_803ABFD4(void);
void fn_803AC088(void);
void fn_803AC230(void);

asm void fn_803AAA74(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    stw r30, 0x8(r1)
    mr r30, r4
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803AAA74_00000034
    lwz r5, 0x8(r5)
    li r4, 0x2
    bl fn_8036E430
lbl_fn_803AAA74_00000034:
    lwz r4, 0x0(r31)
    lis r3, lbl_8074ED24@ha
    li r0, 0x0
    stw r0, 0x4(r30)
    slwi r0, r4, 2
    addi r3, r3, lbl_8074ED24@l
    lwzx r0, r3, r0
    add r0, r31, r0
    stw r0, 0x0(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803AAAE4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    lwz r3, lbl_8087F430
    mr r30, r4
    mr r31, r5
    cmpwi r3, 0x0
    beq lbl_fn_803AAAE4_000001B0
    bl fn_803754F0
    cmpwi r3, 0x0
    bne lbl_fn_803AAAE4_000001B0
    lwz r3, 0x8(r31)
    bl fn_8020924C
    cmpwi r3, 0x0
    beq lbl_fn_803AAAE4_000000C4
    lwz r3, 0x14(r3)
    bl fn_8020A81C
    mr r29, r3
    b lbl_fn_803AAAE4_000000C8
lbl_fn_803AAAE4_000000C4:
    li r29, 0x0
lbl_fn_803AAAE4_000000C8:
    cmpwi r29, 0x0
    beq lbl_fn_803AAAE4_000001B0
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803AAAE4_000000E4
    lwz r28, 0x10d4(r3)
    b lbl_fn_803AAAE4_000000E8
lbl_fn_803AAAE4_000000E4:
    li r28, 0x0
lbl_fn_803AAAE4_000000E8:
    lwz r3, lbl_8087F0A8
    li r27, 0x0
    lwz r0, 0x284(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803AAAE4_00000168
    lwz r3, 0xc8(r29)
    bl fn_8020FCE8
    cmpwi r3, 0x0
    beq lbl_fn_803AAAE4_00000168
    cmpwi r28, 0x0
    beq lbl_fn_803AAAE4_00000168
    lwz r3, 0x58(r28)
    lis r0, 0x4330
    lwz r5, lbl_8087F0A8
    lis r4, lbl_8074F5E8@ha
    xoris r3, r3, 0x8000
    stw r3, 0xc(r1)
    lwz r3, 0xd4(r5)
    stw r0, 0x8(r1)
    slwi r0, r3, 5
    lfd f2, lbl_8074F5E8@l(r4)
    add r3, r5, r0
    lfd f0, 0x8(r1)
    lfs f1, 0xd8(r3)
    fsubs f2, f0, f2
    lfs f0, lbl_80885BD8
    lwz r0, 0xdc(r3)
    fmadds f0, f2, f1, f0
    fctiwz f0, f0
    stfd f0, 0x10(r1)
    lwz r27, 0x14(r1)
    add r27, r27, r0
lbl_fn_803AAAE4_00000168:
    lwz r3, lbl_8087F430
    lwz r4, 0x78(r29)
    cmpwi r3, 0x0
    lwz r28, 0x80(r29)
    beq lbl_fn_803AAAE4_00000194
    lwz r0, 0x10d4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803AAAE4_00000194
    bl fn_80375D0C
    lwz r0, 0x7c(r29)
    add r4, r0, r3
lbl_fn_803AAAE4_00000194:
    lwz r3, lbl_8087F4F0
    add r5, r4, r27
    lfs f1, lbl_80885B30
    mr r6, r28
    li r4, 0x0
    li r7, 0x0
    bl fn_80449A18
lbl_fn_803AAAE4_000001B0:
    lwz r4, 0x0(r31)
    lis r3, lbl_8074ED24@ha
    li r0, 0x0
    stw r0, 0x4(r30)
    slwi r0, r4, 2
    addi r3, r3, lbl_8074ED24@l
    lwzx r0, r3, r0
    addi r11, r1, 0x30
    add r0, r31, r0
    stw r0, 0x0(r30)
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_803AAC60(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803AAC60_00000228
    bl fn_80373148
    b lbl_fn_803AAC60_0000022C
lbl_fn_803AAC60_00000228:
    li r3, 0x0
lbl_fn_803AAC60_0000022C:
    cmpwi r3, 0x0
    beq lbl_fn_803AAC60_0000029C
    lwz r4, 0xa0(r3)
    cmpwi r4, 0x0
    ble lbl_fn_803AAC60_0000029C
    lwz r3, 0x8(r30)
    lwz r5, 0x10(r30)
    divw r0, r3, r4
    lfs f31, lbl_80885B30
    cmpwi r5, 0x0
    mullw r0, r0, r4
    subf r31, r0, r3
    ble lbl_fn_803AAC60_00000284
    xoris r3, r5, 0x8000
    lis r0, 0x4330
    lis r4, lbl_8074F5E8@ha
    stw r3, 0xc(r1)
    lfd f1, lbl_8074F5E8@l(r4)
    stw r0, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f1
    fdivs f31, f31, f0
lbl_fn_803AAC60_00000284:
    lwz r3, lbl_8087F430
    bl fn_80373148
    fmr f2, f31
    lfs f1, 0xc(r30)
    mr r4, r31
    bl fn_804A0F58
lbl_fn_803AAC60_0000029C:
    lwz r4, 0x0(r30)
    lis r3, lbl_8074ED24@ha
    li r0, 0x0
    stw r0, 0x4(r29)
    slwi r0, r4, 2
    addi r3, r3, lbl_8074ED24@l
    lwzx r0, r3, r0
    add r0, r30, r0
    stw r0, 0x0(r29)
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_803AAD58(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r6, 0x2d
    stw r0, 0x14(r1)
    lwz r0, 0xc(r5)
    stw r31, 0xc(r1)
    mr r31, r5
    clrlwi r0, r0, 31
    lwz r5, 0x8(r5)
    stw r30, 0x8(r1)
    mr r30, r4
    xori r4, r0, 0x1
    lwz r3, lbl_8087F490
    bl fn_803E44C4
    lwz r4, 0x0(r31)
    lis r3, lbl_8074ED24@ha
    li r0, 0x0
    stw r0, 0x4(r30)
    slwi r0, r4, 2
    addi r3, r3, lbl_8074ED24@l
    lwzx r0, r3, r0
    add r0, r31, r0
    stw r0, 0x0(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803AADCC(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x4(r4)
    lwz r6, lbl_8087F430
    cmpwi r6, 0x0
    beq lbl_fn_803AADCC_00000374
    lwz r6, 0x10d0(r6)
    b lbl_fn_803AADCC_00000378
lbl_fn_803AADCC_00000374:
    li r6, 0x0
lbl_fn_803AADCC_00000378:
    lwz r0, 0x8(r5)
    cmpw r0, r6
    bgt lbl_fn_803AADCC_000003B0
    lwz r0, 0xc(r5)
    cmpw r6, r0
    bgt lbl_fn_803AADCC_000003B0
    lwz r0, 0x0(r5)
    lis r3, lbl_8074ED24@ha
    addi r3, r3, lbl_8074ED24@l
    slwi r0, r0, 2
    lwzx r0, r3, r0
    add r0, r5, r0
    stw r0, 0x0(r4)
    blr
lbl_fn_803AADCC_000003B0:
    lwz r3, 0x94(r3)
    li r7, 0x0
    lwz r6, 0xcc(r3)
    addi r8, r3, 0xd0
    cmpwi r6, 0x0
    beq lbl_fn_803AADCC_00000488
    cmplwi r6, 0x8
    subi r9, r6, 0x8
    ble lbl_fn_803AADCC_0000045C
    addi r0, r9, 0x7
    lis r3, lbl_8074ED24@ha
    srwi r0, r0, 3
    addi r3, r3, lbl_8074ED24@l
    mtctr r0
    cmplwi r9, 0x0
    ble lbl_fn_803AADCC_0000045C
lbl_fn_803AADCC_000003F0:
    lwz r0, 0x0(r8)
    addi r7, r7, 0x8
    slwi r0, r0, 2
    lwzx r0, r3, r0
    lwzux r0, r8, r0
    slwi r0, r0, 2
    lwzx r0, r3, r0
    lwzux r0, r8, r0
    slwi r0, r0, 2
    lwzx r0, r3, r0
    lwzux r0, r8, r0
    slwi r0, r0, 2
    lwzx r0, r3, r0
    lwzux r0, r8, r0
    slwi r0, r0, 2
    lwzx r0, r3, r0
    lwzux r0, r8, r0
    slwi r0, r0, 2
    lwzx r0, r3, r0
    lwzux r0, r8, r0
    slwi r0, r0, 2
    lwzx r0, r3, r0
    lwzux r0, r8, r0
    slwi r0, r0, 2
    lwzx r0, r3, r0
    add r8, r8, r0
    bdnz lbl_fn_803AADCC_000003F0
lbl_fn_803AADCC_0000045C:
    lis r3, lbl_8074ED24@ha
    subf r0, r7, r6
    addi r3, r3, lbl_8074ED24@l
    mtctr r0
    cmplw r7, r6
    bge lbl_fn_803AADCC_00000488
lbl_fn_803AADCC_00000474:
    lwz r0, 0x0(r8)
    slwi r0, r0, 2
    lwzx r0, r3, r0
    add r8, r8, r0
    bdnz lbl_fn_803AADCC_00000474
lbl_fn_803AADCC_00000488:
    lwz r0, 0x0(r5)
    lis r3, lbl_8074ED24@ha
    addi r3, r3, lbl_8074ED24@l
    li r6, 0x0
    slwi r0, r0, 2
    lwzx r0, r3, r0
    add r5, r5, r0
    b lbl_fn_803AADCC_000004F0
lbl_fn_803AADCC_000004A8:
    lwz r0, 0x4(r5)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_803AADCC_000004E0
    lwz r0, 0x0(r5)
    cmplwi r0, 0x44
    bne lbl_fn_803AADCC_000004CC
    addi r6, r6, 0x1
    b lbl_fn_803AADCC_000004E0
lbl_fn_803AADCC_000004CC:
    cmplwi r0, 0x45
    bne lbl_fn_803AADCC_000004E0
    cmpwi r6, 0x0
    ble lbl_fn_803AADCC_000004F8
    subi r6, r6, 0x1
lbl_fn_803AADCC_000004E0:
    lwz r0, 0x0(r5)
    slwi r0, r0, 2
    lwzx r0, r3, r0
    add r5, r5, r0
lbl_fn_803AADCC_000004F0:
    cmplw r5, r8
    bne lbl_fn_803AADCC_000004A8
lbl_fn_803AADCC_000004F8:
    stw r5, 0x0(r4)
    blr
}

asm void fn_803AAF74(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    lwz r0, 0xc(r5)
    stw r31, 0x1c(r1)
    lwz r31, 0x10(r5)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    bne lbl_fn_803AAF74_0000053C
    li r3, 0x0
    b lbl_fn_803AAF74_00000584
lbl_fn_803AAF74_0000053C:
    cmpwi r0, 0x2
    bne lbl_fn_803AAF74_00000550
    mr r4, r31
    bl fn_80370174
    b lbl_fn_803AAF74_00000584
lbl_fn_803AAF74_00000550:
    cmpwi r0, 0x1
    bne lbl_fn_803AAF74_00000564
    mr r4, r31
    bl fn_80370A78
    b lbl_fn_803AAF74_00000584
lbl_fn_803AAF74_00000564:
    cmpwi r0, 0x3
    bne lbl_fn_803AAF74_00000580
    bl fn_80680CF8
    divw r0, r3, r31
    mullw r0, r0, r31
    subf r3, r0, r3
    addi r31, r3, 0x1
lbl_fn_803AAF74_00000580:
    mr r3, r31
lbl_fn_803AAF74_00000584:
    lwz r0, 0x8(r30)
    cmpwi r0, 0x1
    bne lbl_fn_803AAF74_000005B8
    lwz r0, lbl_8087F490
    cmpwi r0, 0x0
    beq lbl_fn_803AAF74_000005B8
    cmpwi r3, 0x0
    bne lbl_fn_803AAF74_000005B8
    mr r3, r0
    li r4, 0x0
    li r5, 0x1e
    li r6, 0x0
    bl fn_803E598C
lbl_fn_803AAF74_000005B8:
    lwz r0, 0x0(r30)
    lis r3, lbl_8074ED24@ha
    li r4, 0x0
    stw r4, 0x4(r29)
    slwi r0, r0, 2
    addi r3, r3, lbl_8074ED24@l
    lwzx r0, r3, r0
    add r0, r30, r0
    stw r0, 0x0(r29)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803AB06C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, 0x8(r5)
    stw r31, 0xc(r1)
    mr r31, r5
    cmpwi r0, 0x0
    stw r30, 0x8(r1)
    mr r30, r4
    beq lbl_fn_803AB06C_00000644
    cmpwi r0, 0x1
    beq lbl_fn_803AB06C_0000065C
    cmpwi r0, 0x2
    beq lbl_fn_803AB06C_00000668
    cmpwi r0, 0x3
    beq lbl_fn_803AB06C_00000680
    cmpwi r0, 0x4
    beq lbl_fn_803AB06C_0000068C
    b lbl_fn_803AB06C_00000694
lbl_fn_803AB06C_00000644:
    lwz r3, lbl_8087F490
    li r4, 0x1
    li r5, 0x0
    li r6, 0x0
    bl fn_803E598C
    b lbl_fn_803AB06C_00000694
lbl_fn_803AB06C_0000065C:
    lwz r3, lbl_8087F490
    bl fn_803E58CC
    b lbl_fn_803AB06C_00000694
lbl_fn_803AB06C_00000668:
    lwz r3, lbl_8087F490
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_803E598C
    b lbl_fn_803AB06C_00000694
lbl_fn_803AB06C_00000680:
    lwz r3, lbl_8087F490
    bl fn_803E58E4
    b lbl_fn_803AB06C_00000694
lbl_fn_803AB06C_0000068C:
    lwz r3, lbl_8087F490
    bl fn_803DF5B4
lbl_fn_803AB06C_00000694:
    lwz r0, 0x0(r31)
    lis r3, lbl_8074ED24@ha
    li r4, 0x0
    stw r4, 0x4(r30)
    slwi r0, r0, 2
    addi r3, r3, lbl_8074ED24@l
    lwzx r0, r3, r0
    add r0, r31, r0
    stw r0, 0x0(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803AB144(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    lwz r6, 0x10(r31)
    stw r30, 0x8(r1)
    mr r30, r4
    lwz r4, 0x8(r5)
    lwz r3, lbl_8087F430
    lwz r5, 0xc(r5)
    bl fn_8036E994
    lwz r0, 0x0(r31)
    lis r3, lbl_8074ED24@ha
    li r4, 0x1
    stw r4, 0x4(r30)
    slwi r0, r0, 2
    addi r3, r3, lbl_8074ED24@l
    lwzx r0, r3, r0
    add r0, r31, r0
    stw r0, 0x0(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803AB1B0(void)
{
    nofralloc
    lwz r3, lbl_8087F430
    li r6, 0x1
    cmpwi r3, 0x0
    beq lbl_fn_803AB1B0_0000075C
    lwz r0, 0x54e4(r3)
    cmpwi r0, 0x5
    beq lbl_fn_803AB1B0_0000075C
    li r6, 0x0
lbl_fn_803AB1B0_0000075C:
    lwz r0, 0x0(r5)
    lis r3, lbl_8074ED24@ha
    addi r3, r3, lbl_8074ED24@l
    stw r6, 0x4(r4)
    slwi r0, r0, 2
    lwzx r0, r3, r0
    add r0, r5, r0
    stw r0, 0x0(r4)
    blr
}

asm void fn_803AB1F4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r6, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    lwz r5, 0x14(r5)
    stw r30, 0x8(r1)
    mr r30, r4
    li r4, 0x391
    lwz r3, lbl_8087F430
    bl fn_80370320
    lwz r3, lbl_8087F430
    li r4, 0x1
    bl fn_8036E92C
    lwz r0, 0x0(r31)
    lis r3, lbl_8074ED24@ha
    li r4, 0x1
    stw r4, 0x4(r30)
    slwi r0, r0, 2
    addi r3, r3, lbl_8074ED24@l
    lwzx r0, r3, r0
    add r0, r31, r0
    stw r0, 0x0(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803AB26C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    stw r30, 0x8(r1)
    mr r30, r4
    li r4, 0x1
    lwz r0, lbl_8087F068
    cmpwi r0, 0x0
    bne lbl_fn_803AB26C_0000087C
    lwz r0, lbl_8087D990
    cmpwi r0, 0x0
    blt lbl_fn_803AB26C_0000084C
    lwz r4, 0xc(r5)
    li r6, 0x0
    lwz r5, 0x10(r5)
    li r7, 0x0
    li r8, 0x1
    bl fn_8039BF04
    b lbl_fn_803AB26C_00000864
lbl_fn_803AB26C_0000084C:
    lwz r4, 0xc(r5)
    li r6, 0x0
    lwz r5, 0x10(r5)
    li r7, 0x0
    li r8, 0x0
    bl fn_8039BF04
lbl_fn_803AB26C_00000864:
    lwz r3, lbl_8087F430
    li r4, 0x391
    li r5, 0x0
    li r6, 0x0
    bl fn_80370320
    li r4, 0x0
lbl_fn_803AB26C_0000087C:
    lwz r0, 0x0(r31)
    lis r3, lbl_8074ED24@ha
    addi r3, r3, lbl_8074ED24@l
    stw r4, 0x4(r30)
    slwi r0, r0, 2
    lwzx r0, r3, r0
    add r0, r31, r0
    stw r0, 0x0(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803AB328(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    lwz r3, lbl_8087F430
    bl fn_80371164
    li r3, 0x1
    li r0, 0x0
    stw r3, 0x4(r31)
    stw r0, 0x0(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803AB368(void)
{
    nofralloc
    li r3, 0x0
    li r0, 0x1
    stw r3, 0x0(r4)
    stw r0, 0x4(r4)
    blr
}

asm void fn_803AB37C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r7, 0x0
    li r5, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x130(r3)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_803AB37C_000009A0
lbl_fn_803AB37C_00000934:
    lwz r6, 0x12c(r3)
    lwzx r0, r6, r5
    cmplw r0, r4
    bne lbl_fn_803AB37C_00000994
    lwz r0, 0x130(r31)
    lis r3, 0x6666
    mulli r4, r7, 0x14
    addi r5, r3, 0x6667
    mulli r0, r0, 0x14
    add r3, r6, r4
    add r0, r6, r0
    addi r4, r3, 0x14
    subf r0, r3, r0
    mulhw r0, r5, r0
    srawi r0, r0, 3
    srwi r5, r0, 31
    add r5, r0, r5
    subi r0, r5, 0x1
    mulli r5, r0, 0x14
    bl memmove
    lwz r3, 0x130(r31)
    subi r0, r3, 0x1
    stw r0, 0x130(r31)
    b lbl_fn_803AB37C_000009A0
lbl_fn_803AB37C_00000994:
    addi r5, r5, 0x14
    addi r7, r7, 0x1
    bdnz lbl_fn_803AB37C_00000934
lbl_fn_803AB37C_000009A0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803AB428(void)
{
    nofralloc
    stwu r1, -0x2a0(r1)
    mflr r0
    stw r0, 0x2a4(r1)
    stmw r14, 0x258(r1)
    lis r24, lbl_8074F8CC@ha
    lis r27, __files@ha
    lis r25, lbl_8074EFC8@ha
    mr r15, r3
    mr r16, r4
    addi r24, r24, lbl_8074F8CC@l
    addi r25, r25, lbl_8074EFC8@l
    addi r23, r1, 0x2c
    addi r27, r27, __files@l
    addi r21, r1, 0x38
    li r17, 0x0
    li r20, 0x0
    li r30, 0x0
    lis r29, 0xcccd
    lis r26, 0x1555
    lis r28, 0x71c
    lis r14, 0xe39
    lis r31, 0x2aab
    b lbl_fn_803AB428_00000EB4
lbl_fn_803AB428_00000A10:
    lwz r0, 0x4(r16)
    add r18, r0, r20
    lwz r6, 0x14(r18)
    lwz r5, 0x10(r18)
    cmpw r5, r6
    beq lbl_fn_803AB428_00000EAC
    cmpwi r5, -0x1
    bne lbl_fn_803AB428_00000A48
    addi r3, r1, 0x50
    addi r4, r24, 0x1ba
    addi r5, r6, 0x1
    crclr 6
    bl sprintf
    b lbl_fn_803AB428_00000A7C
lbl_fn_803AB428_00000A48:
    cmpwi r6, -0x1
    bne lbl_fn_803AB428_00000A64
    addi r3, r1, 0x50
    addi r4, r24, 0x1c8
    crclr 6
    bl sprintf
    b lbl_fn_803AB428_00000A7C
lbl_fn_803AB428_00000A64:
    addi r3, r1, 0x50
    addi r4, r24, 0x1cd
    addi r5, r5, 0x1
    addi r6, r6, 0x1
    crclr 6
    bl sprintf
lbl_fn_803AB428_00000A7C:
    lwz r0, 0x4(r18)
    addi r3, r1, 0x150
    lwz r5, 0xb0(r15)
    addi r4, r24, 0x1da
    slwi r0, r0, 2
    lwz r7, 0x8(r18)
    lwzx r6, r25, r0
    addi r8, r1, 0x50
    crclr 6
    bl sprintf
    stw r30, 0x2c(r1)
    addi r3, r1, 0x150
    stw r30, 0x30(r1)
    stw r30, 0x34(r1)
    bl strlen
    mr r18, r3
    mr r3, r23
    mr r4, r18
    bl fn_80013DC4
    addi r6, r1, 0x150
    lbz r0, 0x1c(r1)
    mr r7, r6
    stb r0, 0x18(r1)
    mr r3, r23
    addi r8, r1, 0x18
    add r7, r7, r18
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    lwz r0, 0x388(r15)
    lwz r3, 0x38c(r15)
    cmplw r0, r3
    bge lbl_fn_803AB428_00000B84
    mulli r0, r0, 0xc
    lwz r3, 0x384(r15)
    add. r18, r3, r0
    beq lbl_fn_803AB428_00000B74
    lwz r3, 0x2c(r1)
    srwi. r0, r3, 31
    bne lbl_fn_803AB428_00000B34
    lwz r0, 0x30(r1)
    stw r3, 0x0(r18)
    stw r0, 0x4(r18)
    lwz r0, 0x34(r1)
    stw r0, 0x8(r18)
    b lbl_fn_803AB428_00000B74
lbl_fn_803AB428_00000B34:
    stw r30, 0x0(r18)
    mr r3, r18
    stw r30, 0x4(r18)
    stw r30, 0x8(r18)
    lwz r4, 0x30(r1)
    bl fn_80013DC4
    lbz r5, 0xc(r1)
    mr r3, r18
    stb r5, 0x8(r1)
    addi r8, r1, 0x8
    lwz r6, 0x34(r1)
    li r4, 0x0
    lwz r0, 0x30(r1)
    li r5, 0x0
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_803AB428_00000B74:
    lwz r3, 0x388(r15)
    addi r0, r3, 0x1
    stw r0, 0x388(r15)
    b lbl_fn_803AB428_00000E98
lbl_fn_803AB428_00000B84:
    addi r0, r26, 0x5555
    subf r0, r3, r0
    cmplwi r0, 0x1
    bge lbl_fn_803AB428_00000BA8
    addi r4, r24, 0xce
    addi r3, r27, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_803AB428_00000BA8:
    addi r3, r15, 0x38c
    stw r30, 0x38(r1)
    addi r0, r26, 0x5555
    stw r30, 0x3c(r1)
    stw r30, 0x40(r1)
    stw r3, 0x44(r1)
    stw r30, 0x48(r1)
    lwz r3, 0x388(r15)
    lwz r18, 0x38c(r15)
    addi r3, r3, 0x1
    subf r3, r18, r3
    subf r0, r18, r0
    cmplw r3, r0
    stw r3, 0x28(r1)
    ble lbl_fn_803AB428_00000BF8
    addi r4, r24, 0xce
    addi r3, r27, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_803AB428_00000BF8:
    addi r0, r28, 0x71c7
    cmplw r18, r0
    bge lbl_fn_803AB428_00000C40
    addi r4, r18, 0x1
    subi r5, r29, 0x3333
    slwi r3, r4, 2
    lwz r0, 0x28(r1)
    subf r4, r4, r3
    mulhwu r4, r5, r4
    addi r3, r1, 0x20
    srwi r4, r4, 2
    stw r4, 0x20(r1)
    cmplw r4, r0
    bge lbl_fn_803AB428_00000C34
    addi r3, r1, 0x28
lbl_fn_803AB428_00000C34:
    lwz r0, 0x0(r3)
    add r18, r18, r0
    b lbl_fn_803AB428_00000C7C
lbl_fn_803AB428_00000C40:
    subi r0, r14, 0x1c72
    cmplw r18, r0
    bge lbl_fn_803AB428_00000C78
    addi r3, r18, 0x1
    lwz r0, 0x28(r1)
    srwi r3, r3, 1
    stw r3, 0x24(r1)
    cmplw r3, r0
    addi r3, r1, 0x24
    bge lbl_fn_803AB428_00000C6C
    addi r3, r1, 0x28
lbl_fn_803AB428_00000C6C:
    lwz r0, 0x0(r3)
    add r18, r18, r0
    b lbl_fn_803AB428_00000C7C
lbl_fn_803AB428_00000C78:
    addi r18, r26, 0x5555
lbl_fn_803AB428_00000C7C:
    addi r0, r26, 0x5555
    cmplw r18, r0
    ble lbl_fn_803AB428_00000C9C
    addi r4, r24, 0xce
    addi r3, r27, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_803AB428_00000C9C:
    mulli r3, r18, 0xc
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r19, r3
    bne lbl_fn_803AB428_00000CC8
    lis r4, lbl_80778910@ha
    addi r3, r27, 0xa0
    addi r4, r4, lbl_80778910@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_803AB428_00000CC8:
    lwz r0, 0x3c(r1)
    stw r19, 0x38(r1)
    mulli r3, r0, 0xc
    stw r18, 0x40(r1)
    lwz r0, 0x388(r15)
    stw r0, 0x48(r1)
    mulli r0, r0, 0xc
    add r0, r19, r0
    add. r18, r3, r0
    beq lbl_fn_803AB428_00000D54
    lwz r3, 0x2c(r1)
    srwi. r0, r3, 31
    bne lbl_fn_803AB428_00000D14
    lwz r0, 0x30(r1)
    stw r3, 0x0(r18)
    stw r0, 0x4(r18)
    lwz r0, 0x34(r1)
    stw r0, 0x8(r18)
    b lbl_fn_803AB428_00000D54
lbl_fn_803AB428_00000D14:
    stw r30, 0x0(r18)
    mr r3, r18
    stw r30, 0x4(r18)
    stw r30, 0x8(r18)
    lwz r4, 0x30(r1)
    bl fn_80013DC4
    lbz r5, 0x10(r1)
    mr r3, r18
    stb r5, 0x14(r1)
    addi r8, r1, 0x14
    lwz r6, 0x34(r1)
    li r4, 0x0
    lwz r0, 0x30(r1)
    li r5, 0x0
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_803AB428_00000D54:
    lwz r3, 0x3c(r1)
    subi r6, r31, 0x5555
    lwz r0, 0x48(r1)
    addi r3, r3, 0x1
    stw r3, 0x3c(r1)
    lwz r3, 0x38(r1)
    lwz r4, 0x388(r15)
    lwz r19, 0x384(r15)
    mulli r5, r4, 0xc
    mr r4, r19
    add r5, r19, r5
    subf r5, r19, r5
    mulhw r5, r6, r5
    srawi r5, r5, 1
    srwi r6, r5, 31
    add r22, r5, r6
    subf r0, r22, r0
    stw r0, 0x48(r1)
    mulli r18, r22, 0xc
    mulli r0, r0, 0xc
    mr r5, r18
    add r3, r3, r0
    bl memcpy
    mr r3, r19
    mr r5, r18
    li r4, 0x0
    bl memset
    lwz r3, 0x3c(r1)
    lwz r0, 0x40(r1)
    add r3, r3, r22
    stw r3, 0x3c(r1)
    lwz r3, 0x38c(r15)
    stw r0, 0x38c(r15)
    stw r3, 0x40(r1)
    lwz r0, 0x38(r1)
    lwz r3, 0x384(r15)
    stw r0, 0x384(r15)
    stw r3, 0x38(r1)
    lwz r0, 0x3c(r1)
    lwz r5, 0x388(r15)
    stw r0, 0x388(r15)
    mulli r0, r5, 0xc
    lwz r3, 0x48(r1)
    lwz r4, 0x38(r1)
    mulli r3, r3, 0xc
    stw r5, 0x3c(r1)
    add r19, r4, r3
    add r18, r19, r0
    b lbl_fn_803AB428_00000E34
lbl_fn_803AB428_00000E18:
    subic. r18, r18, 0xc
    beq lbl_fn_803AB428_00000E34
    lwz r0, 0x0(r18)
    srwi. r0, r0, 31
    beq lbl_fn_803AB428_00000E34
    lwz r3, 0x8(r18)
    bl dtor_80084684
lbl_fn_803AB428_00000E34:
    cmplw r18, r19
    bgt lbl_fn_803AB428_00000E18
    cmpwi r21, 0x0
    stw r30, 0x3c(r1)
    beq lbl_fn_803AB428_00000E98
    lwz r3, 0x38(r1)
    cmpwi r3, 0x0
    beq lbl_fn_803AB428_00000E98
    mulli r0, r30, 0xc
    stw r30, 0x3c(r1)
    li r18, 0x0
    add r19, r3, r0
    b lbl_fn_803AB428_00000E88
lbl_fn_803AB428_00000E68:
    subic. r19, r19, 0xc
    beq lbl_fn_803AB428_00000E84
    lwz r0, 0x0(r19)
    srwi. r0, r0, 31
    beq lbl_fn_803AB428_00000E84
    lwz r3, 0x8(r19)
    bl dtor_80084684
lbl_fn_803AB428_00000E84:
    subi r18, r18, 0x1
lbl_fn_803AB428_00000E88:
    cmpwi r18, 0x0
    bne lbl_fn_803AB428_00000E68
    lwz r3, 0x38(r1)
    bl dtor_80084684
lbl_fn_803AB428_00000E98:
    lwz r0, 0x2c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_803AB428_00000EAC
    lwz r3, 0x34(r1)
    bl dtor_80084684
lbl_fn_803AB428_00000EAC:
    addi r20, r20, 0x18
    addi r17, r17, 0x1
lbl_fn_803AB428_00000EB4:
    lwz r0, 0x0(r16)
    cmplw r17, r0
    blt lbl_fn_803AB428_00000A10
    lmw r14, 0x258(r1)
    lwz r0, 0x2a4(r1)
    mtlr r0
    addi r1, r1, 0x2a0
    blr
}

asm void fn_803AB948(void)
{
    nofralloc
    li r4, 0x0
    li r0, -0x1
    stw r4, 0x0(r3)
    stw r4, 0x4(r3)
    stw r4, 0x8(r3)
    stw r4, 0xc(r3)
    stw r0, 0x10(r3)
    stw r0, 0x14(r3)
    blr
}

asm void fn_803AB96C(void)
{
    nofralloc
    stwu r1, -0x170(r1)
    mflr r0
    mr r10, r5
    mr r8, r7
    stw r0, 0x174(r1)
    stmw r27, 0x15c(r1)
    mr r30, r3
    lwz r0, 0x37c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803AB96C_000013CC
    stw r6, 0x8(r1)
    lis r3, lbl_8074ECD8@ha
    lis r29, lbl_8074F8CC@ha
    slwi r0, r4, 2
    stw r7, 0xc(r1)
    addi r3, r3, lbl_8074ECD8@l
    lwzx r6, r3, r0
    addi r29, r29, lbl_8074F8CC@l
    lwz r5, 0xb0(r30)
    mr r7, r10
    mr r9, r6
    addi r3, r1, 0x58
    addi r4, r29, 0x1f7
    crclr 6
    bl sprintf
    li r31, 0x0
    stw r31, 0x34(r1)
    addi r28, r1, 0x34
    addi r3, r1, 0x58
    stw r31, 0x38(r1)
    stw r31, 0x3c(r1)
    bl strlen
    mr r27, r3
    mr r3, r28
    mr r4, r27
    bl fn_80013DC4
    addi r6, r1, 0x58
    lbz r0, 0x24(r1)
    mr r7, r6
    stb r0, 0x20(r1)
    mr r3, r28
    addi r8, r1, 0x20
    add r7, r7, r27
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    lwz r0, 0x388(r30)
    lwz r4, 0x38c(r30)
    cmplw r0, r4
    bge lbl_fn_803AB96C_00001044
    mulli r0, r0, 0xc
    lwz r3, 0x384(r30)
    add. r28, r3, r0
    beq lbl_fn_803AB96C_00001034
    lwz r3, 0x34(r1)
    srwi. r0, r3, 31
    bne lbl_fn_803AB96C_00000FF4
    lwz r0, 0x38(r1)
    stw r3, 0x0(r28)
    stw r0, 0x4(r28)
    lwz r0, 0x3c(r1)
    stw r0, 0x8(r28)
    b lbl_fn_803AB96C_00001034
lbl_fn_803AB96C_00000FF4:
    stw r31, 0x0(r28)
    mr r3, r28
    stw r31, 0x4(r28)
    stw r31, 0x8(r28)
    lwz r4, 0x38(r1)
    bl fn_80013DC4
    lbz r5, 0x14(r1)
    mr r3, r28
    stb r5, 0x10(r1)
    addi r8, r1, 0x10
    lwz r6, 0x3c(r1)
    li r4, 0x0
    lwz r0, 0x38(r1)
    li r5, 0x0
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_803AB96C_00001034:
    lwz r3, 0x388(r30)
    addi r0, r3, 0x1
    stw r0, 0x388(r30)
    b lbl_fn_803AB96C_000013B8
lbl_fn_803AB96C_00001044:
    lis r3, 0x1555
    addi r0, r3, 0x5555
    subf r0, r4, r0
    cmplwi r0, 0x1
    bge lbl_fn_803AB96C_00001074
    lis r3, __files@ha
    addi r4, r29, 0xce
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_803AB96C_00001074:
    li r5, 0x0
    addi r4, r30, 0x38c
    lis r3, 0x1555
    stw r5, 0x40(r1)
    addi r0, r3, 0x5555
    stw r5, 0x44(r1)
    stw r5, 0x48(r1)
    stw r4, 0x4c(r1)
    stw r5, 0x50(r1)
    lwz r3, 0x388(r30)
    lwz r31, 0x38c(r30)
    addi r3, r3, 0x1
    subf r3, r31, r3
    subf r0, r31, r0
    cmplw r3, r0
    stw r3, 0x30(r1)
    ble lbl_fn_803AB96C_000010DC
    lis r4, lbl_8074F8CC@ha
    lis r3, __files@ha
    addi r4, r4, lbl_8074F8CC@l
    addi r3, r3, __files@l
    addi r4, r4, 0xce
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_803AB96C_000010DC:
    lis r3, 0x71c
    addi r0, r3, 0x71c7
    cmplw r31, r0
    bge lbl_fn_803AB96C_0000112C
    addi r5, r31, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x30(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x28
    srwi r4, r4, 2
    stw r4, 0x28(r1)
    cmplw r4, r0
    bge lbl_fn_803AB96C_00001120
    addi r3, r1, 0x30
lbl_fn_803AB96C_00001120:
    lwz r0, 0x0(r3)
    add r28, r31, r0
    b lbl_fn_803AB96C_00001170
lbl_fn_803AB96C_0000112C:
    lis r3, 0xe39
    subi r0, r3, 0x1c72
    cmplw r31, r0
    bge lbl_fn_803AB96C_00001168
    addi r3, r31, 0x1
    lwz r0, 0x30(r1)
    srwi r3, r3, 1
    stw r3, 0x2c(r1)
    cmplw r3, r0
    addi r3, r1, 0x2c
    bge lbl_fn_803AB96C_0000115C
    addi r3, r1, 0x30
lbl_fn_803AB96C_0000115C:
    lwz r0, 0x0(r3)
    add r28, r31, r0
    b lbl_fn_803AB96C_00001170
lbl_fn_803AB96C_00001168:
    lis r3, 0x1555
    addi r28, r3, 0x5555
lbl_fn_803AB96C_00001170:
    lis r3, 0x1555
    addi r0, r3, 0x5555
    cmplw r28, r0
    ble lbl_fn_803AB96C_000011A4
    lis r4, lbl_8074F8CC@ha
    lis r3, __files@ha
    addi r4, r4, lbl_8074F8CC@l
    addi r3, r3, __files@l
    addi r4, r4, 0xce
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_803AB96C_000011A4:
    mulli r3, r28, 0xc
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_fn_803AB96C_000011D8
    lis r3, __files@ha
    lis r4, lbl_80778910@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80778910@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_803AB96C_000011D8:
    lwz r3, 0x44(r1)
    li r0, 0x0
    stw r29, 0x40(r1)
    mulli r4, r3, 0xc
    stw r28, 0x48(r1)
    lwz r3, 0x388(r30)
    stw r3, 0x50(r1)
    mulli r3, r3, 0xc
    add r3, r29, r3
    add. r28, r4, r3
    beq lbl_fn_803AB96C_00001268
    lwz r4, 0x34(r1)
    srwi. r3, r4, 31
    bne lbl_fn_803AB96C_00001228
    lwz r0, 0x38(r1)
    stw r4, 0x0(r28)
    stw r0, 0x4(r28)
    lwz r0, 0x3c(r1)
    stw r0, 0x8(r28)
    b lbl_fn_803AB96C_00001268
lbl_fn_803AB96C_00001228:
    stw r0, 0x0(r28)
    mr r3, r28
    stw r0, 0x4(r28)
    stw r0, 0x8(r28)
    lwz r4, 0x38(r1)
    bl fn_80013DC4
    lbz r5, 0x18(r1)
    mr r3, r28
    stb r5, 0x1c(r1)
    addi r8, r1, 0x1c
    lwz r6, 0x3c(r1)
    li r4, 0x0
    lwz r0, 0x38(r1)
    li r5, 0x0
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_803AB96C_00001268:
    lwz r4, 0x44(r1)
    lis r3, 0x2aab
    subi r6, r3, 0x5555
    lwz r0, 0x50(r1)
    addi r3, r4, 0x1
    stw r3, 0x44(r1)
    lwz r3, 0x40(r1)
    lwz r4, 0x388(r30)
    lwz r27, 0x384(r30)
    mulli r5, r4, 0xc
    mr r4, r27
    add r5, r27, r5
    subf r5, r27, r5
    mulhw r5, r6, r5
    srawi r5, r5, 1
    srwi r6, r5, 31
    add r28, r5, r6
    subf r0, r28, r0
    stw r0, 0x50(r1)
    mulli r29, r28, 0xc
    mulli r0, r0, 0xc
    mr r5, r29
    add r3, r3, r0
    bl memcpy
    mr r3, r27
    mr r5, r29
    li r4, 0x0
    bl memset
    lwz r3, 0x44(r1)
    addi r29, r1, 0x40
    lwz r0, 0x48(r1)
    add r3, r3, r28
    stw r3, 0x44(r1)
    lwz r3, 0x38c(r30)
    stw r0, 0x38c(r30)
    stw r3, 0x48(r1)
    lwz r0, 0x40(r1)
    lwz r3, 0x384(r30)
    stw r0, 0x384(r30)
    stw r3, 0x40(r1)
    lwz r0, 0x44(r1)
    lwz r5, 0x388(r30)
    stw r0, 0x388(r30)
    mulli r0, r5, 0xc
    lwz r3, 0x50(r1)
    lwz r4, 0x40(r1)
    mulli r3, r3, 0xc
    stw r5, 0x44(r1)
    add r30, r4, r3
    add r28, r30, r0
    b lbl_fn_803AB96C_00001350
lbl_fn_803AB96C_00001334:
    subic. r28, r28, 0xc
    beq lbl_fn_803AB96C_00001350
    lwz r0, 0x0(r28)
    srwi. r0, r0, 31
    beq lbl_fn_803AB96C_00001350
    lwz r3, 0x8(r28)
    bl dtor_80084684
lbl_fn_803AB96C_00001350:
    cmplw r28, r30
    bgt lbl_fn_803AB96C_00001334
    cmpwi r29, 0x0
    li r0, 0x0
    stw r0, 0x44(r1)
    beq lbl_fn_803AB96C_000013B8
    lwz r3, 0x40(r1)
    cmpwi r3, 0x0
    beq lbl_fn_803AB96C_000013B8
    mulli r0, r0, 0xc
    li r28, 0x0
    stw r28, 0x44(r1)
    add r29, r3, r0
    b lbl_fn_803AB96C_000013A8
lbl_fn_803AB96C_00001388:
    subic. r29, r29, 0xc
    beq lbl_fn_803AB96C_000013A4
    lwz r0, 0x0(r29)
    srwi. r0, r0, 31
    beq lbl_fn_803AB96C_000013A4
    lwz r3, 0x8(r29)
    bl dtor_80084684
lbl_fn_803AB96C_000013A4:
    subi r28, r28, 0x1
lbl_fn_803AB96C_000013A8:
    cmpwi r28, 0x0
    bne lbl_fn_803AB96C_00001388
    lwz r3, 0x40(r1)
    bl dtor_80084684
lbl_fn_803AB96C_000013B8:
    lwz r0, 0x34(r1)
    srwi. r0, r0, 31
    beq lbl_fn_803AB96C_000013CC
    lwz r3, 0x3c(r1)
    bl dtor_80084684
lbl_fn_803AB96C_000013CC:
    lmw r27, 0x15c(r1)
    lwz r0, 0x174(r1)
    mtlr r0
    addi r1, r1, 0x170
    blr
}

asm void fn_803ABE54(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    lfs f2, 0x8(r3)
    stw r0, 0x64(r1)
    addi r5, r1, 0x18
    stfd f31, 0x50(r1)
    psq_st f31, 0x58(r1), 0, 0
    stfd f30, 0x40(r1)
    psq_st f30, 0x48(r1), 0, 0
    fmr f30, f1
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x8
    stw r31, 0x3c(r1)
    addi r31, r1, 0x24
    stfs f2, 0x20(r1)
    lfs f2, 0x8(r4)
    psq_st f1, 0x0(r5), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    lfs f0, 0x20(r1)
    lfs f5, 0x28(r1)
    fsubs f6, f2, f0
    lfs f4, 0x1c(r1)
    lfs f3, 0x24(r1)
    lfs f0, 0x18(r1)
    fsubs f4, f5, f4
    stfs f2, 0x2c(r1)
    fsubs f0, f3, f0
    stfs f4, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f6, 0x10(r1)
    bl fn_805F9940
    fabs f3, f1
    lfs f0, lbl_80885B24
    fmr f31, f1
    frsp f3, f3
    fcmpo cr0, f3, f0
    blt lbl_fn_803ABE54_000014F4
    lfs f3, 0x24(r1)
    mr r3, r31
    lfs f0, 0x18(r1)
    mr r4, r31
    lfs f5, 0x28(r1)
    fsubs f6, f3, f0
    lfs f4, 0x1c(r1)
    lfs f3, 0x2c(r1)
    lfs f0, 0x20(r1)
    fsubs f4, f5, f4
    stfs f6, 0x24(r1)
    fsubs f0, f3, f0
    stfs f4, 0x28(r1)
    stfs f0, 0x2c(r1)
    bl fn_805F98D0
    fsubs f5, f31, f30
    lfs f4, 0x24(r1)
    lfs f3, 0x28(r1)
    lfs f0, 0x2c(r1)
    fmuls f7, f4, f5
    lfs f4, 0x18(r1)
    fmuls f6, f3, f5
    lfs f3, 0x1c(r1)
    fmuls f5, f0, f5
    lfs f0, 0x20(r1)
    fadds f4, f7, f4
    fadds f3, f6, f3
    fadds f0, f5, f0
    stfs f4, 0x24(r1)
    stfs f3, 0x28(r1)
    stfs f0, 0x2c(r1)
lbl_fn_803ABE54_000014F4:
    lfs f0, lbl_80885B28
    fmuls f0, f0, f30
    fcmpo cr0, f31, f0
    ble lbl_fn_803ABE54_00001538
    lis r4, 0x8000
    lwz r3, lbl_8087EE98
    addi r7, r4, 0x10
    addi r5, r1, 0x18
    addi r6, r1, 0x24
    li r4, 0x0
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ECC0
    cmpwi r3, 0x0
    bne lbl_fn_803ABE54_00001538
    li r3, 0x1
    b lbl_fn_803ABE54_0000153C
lbl_fn_803ABE54_00001538:
    li r3, 0x0
lbl_fn_803ABE54_0000153C:
    lwz r0, 0x64(r1)
    psq_l f31, 0x58(r1), 0, 0
    lfd f31, 0x50(r1)
    psq_l f30, 0x48(r1), 0, 0
    lfd f30, 0x40(r1)
    lwz r31, 0x3c(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_803ABFD4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r7, 0x0
    li r5, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x130(r3)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_803ABFD4_000015FC
lbl_fn_803ABFD4_0000158C:
    lwz r6, 0x12c(r3)
    lwzx r0, r6, r5
    cmplw r0, r4
    bne lbl_fn_803ABFD4_000015F0
    lwz r0, 0x130(r31)
    lis r3, 0x6666
    mulli r4, r7, 0x14
    addi r5, r3, 0x6667
    mulli r0, r0, 0x14
    add r3, r6, r4
    add r0, r6, r0
    addi r4, r3, 0x14
    subf r0, r3, r0
    mulhw r0, r5, r0
    srawi r0, r0, 3
    srwi r5, r0, 31
    add r5, r0, r5
    subi r0, r5, 0x1
    mulli r5, r0, 0x14
    bl memmove
    lwz r4, 0x130(r31)
    li r3, 0x1
    subi r0, r4, 0x1
    stw r0, 0x130(r31)
    b lbl_fn_803ABFD4_00001600
lbl_fn_803ABFD4_000015F0:
    addi r5, r5, 0x14
    addi r7, r7, 0x1
    bdnz lbl_fn_803ABFD4_0000158C
lbl_fn_803ABFD4_000015FC:
    li r3, 0x0
lbl_fn_803ABFD4_00001600:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803AC088(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    stw r29, 0x34(r1)
    mr r29, r3
    lwz r4, lbl_8087F8A0
    cmpwi r4, 0x0
    beq lbl_fn_803AC088_0000166C
    lwz r30, 0x48(r4)
    cmpwi r30, 0x0
    beq lbl_fn_803AC088_0000166C
    lwz r4, lbl_8087F430
    cmpwi r4, 0x0
    beq lbl_fn_803AC088_0000166C
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_803AC088_00001674
lbl_fn_803AC088_0000166C:
    li r3, 0x0
    b lbl_fn_803AC088_00001798
lbl_fn_803AC088_00001674:
    psq_l f1, 0x600(r30), 0, 0
    addi r3, r1, 0x20
    lfs f2, 0x608(r30)
    stfs f2, 0x28(r1)
    psq_st f1, 0x0(r3), 0, 0
    lwz r0, 0x55c(r30)
    cmpwi r0, 0x1
    bne lbl_fn_803AC088_000016E8
    lwz r0, 0x868(r4)
    cmpwi r0, 0x0
    bne lbl_fn_803AC088_000016E8
    lfs f4, lbl_80885B10
    addi r4, r1, 0x14
    lfs f0, 0x5fc(r30)
    lfs f5, 0x5b4(r30)
    fadds f2, f0, f4
    lfs f3, 0x5f8(r30)
    lfs f0, 0x5f4(r30)
    fadds f3, f3, f5
    stfs f4, 0x8(r1)
    fadds f0, f0, f4
    stfs f3, 0x18(r1)
    stfs f0, 0x14(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f5, 0xc(r1)
    stfs f4, 0x10(r1)
    stfs f2, 0x1c(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x28(r1)
lbl_fn_803AC088_000016E8:
    lfs f31, lbl_80885BE4
    mr r3, r29
    lwz r4, 0x88(r29)
    mr r7, r30
    fmr f1, f31
    addi r5, r29, 0x114
    addi r4, r4, 0x80
    addi r8, r1, 0x20
    li r6, 0x1
    li r9, 0x10
    bl fn_803AEA24
    lwz r4, 0x88(r29)
    fmr f1, f31
    mr r31, r3
    mr r3, r29
    mr r7, r30
    addi r4, r4, 0x88
    addi r5, r29, 0x11c
    addi r8, r1, 0x20
    li r6, 0x2
    li r9, 0x10
    bl fn_803AEA24
    lwz r4, 0x88(r29)
    fmr f1, f31
    add r31, r31, r3
    mr r3, r29
    mr r7, r30
    addi r4, r4, 0x90
    addi r5, r29, 0x124
    addi r8, r1, 0x20
    li r6, 0x3
    li r9, 0x10
    bl fn_803AEA24
    lwz r4, 0x88(r29)
    fmr f1, f31
    add r31, r31, r3
    mr r3, r29
    mr r6, r30
    addi r4, r4, 0xec
    addi r5, r29, 0x10c
    addi r7, r1, 0x20
    li r8, 0x10
    bl fn_803AE718
    add r3, r31, r3
lbl_fn_803AC088_00001798:
    lwz r0, 0x54(r1)
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_803AC230(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    stw r29, 0x34(r1)
    mr r29, r3
    lwz r4, lbl_8087F8A0
    cmpwi r4, 0x0
    beq lbl_fn_803AC230_00001814
    lwz r30, 0x48(r4)
    cmpwi r30, 0x0
    beq lbl_fn_803AC230_00001814
    lwz r4, lbl_8087F430
    cmpwi r4, 0x0
    beq lbl_fn_803AC230_00001814
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_803AC230_0000181C
lbl_fn_803AC230_00001814:
    li r3, 0x0
    b lbl_fn_803AC230_00001940
lbl_fn_803AC230_0000181C:
    psq_l f1, 0x600(r30), 0, 0
    addi r3, r1, 0x20
    lfs f2, 0x608(r30)
    stfs f2, 0x28(r1)
    psq_st f1, 0x0(r3), 0, 0
    lwz r0, 0x55c(r30)
    cmpwi r0, 0x1
    bne lbl_fn_803AC230_00001890
    lwz r0, 0x868(r4)
    cmpwi r0, 0x0
    bne lbl_fn_803AC230_00001890
    lfs f4, lbl_80885B10
    addi r4, r1, 0x14
    lfs f0, 0x5fc(r30)
    lfs f5, 0x5b4(r30)
    fadds f2, f0, f4
    lfs f3, 0x5f8(r30)
    lfs f0, 0x5f4(r30)
    fadds f3, f3, f5
    stfs f4, 0x8(r1)
    fadds f0, f0, f4
    stfs f3, 0x18(r1)
    stfs f0, 0x14(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f5, 0xc(r1)
    stfs f4, 0x10(r1)
    stfs f2, 0x1c(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x28(r1)
lbl_fn_803AC230_00001890:
    lfs f31, lbl_80885BE4
    mr r3, r29
    lwz r4, 0x88(r29)
    mr r7, r30
    fmr f1, f31
    addi r5, r29, 0x114
    addi r4, r4, 0x80
    addi r8, r1, 0x20
    li r6, 0x1
    li r9, 0x30
    bl fn_803AEA24
    lwz r4, 0x88(r29)
    fmr f1, f31
    mr r31, r3
    mr r3, r29
    mr r7, r30
    addi r4, r4, 0x88
    addi r5, r29, 0x11c
    addi r8, r1, 0x20
    li r6, 0x2
    li r9, 0x30
    bl fn_803AEA24
    lwz r4, 0x88(r29)
    fmr f1, f31
    add r31, r31, r3
    mr r3, r29
    mr r7, r30
    addi r4, r4, 0x90
    addi r5, r29, 0x124
    addi r8, r1, 0x20
    li r6, 0x3
    li r9, 0x30
    bl fn_803AEA24
    lwz r4, 0x88(r29)
    fmr f1, f31
    add r31, r31, r3
    mr r3, r29
    mr r6, r30
    addi r4, r4, 0xec
    addi r5, r29, 0x10c
    addi r7, r1, 0x20
    li r8, 0x30
    bl fn_803AE718
    add r3, r31, r3
lbl_fn_803AC230_00001940:
    lwz r0, 0x54(r1)
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}
