#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void fn_8004ED34(void);
extern void fn_80092814(void);
extern void fn_80097D7C(void);
extern void fn_800C31F4(void);
extern void fn_800CB3A0(void);
extern void fn_801092C8(void);
extern void fn_8011F8F4(void);
extern void fn_8011F91C(void);
extern void fn_8011FC10(void);
extern void fn_8011FE3C(void);
extern void fn_80161570(void);
extern void fn_80161B70(void);
extern void fn_8017039C(void);
extern void fn_80170F20(void);
extern void fn_80171DB0(void);
extern void fn_801781B0(void);
extern void fn_8017A33C(void);
extern void fn_8017A504(void);
extern void fn_8036E6D4(void);
extern void fn_8036EA04(void);
extern void fn_80370174(void);
extern void fn_80370320(void);
extern void fn_80370A78(void);
extern void fn_80370AE4(void);
extern void fn_80373F78(void);
extern void fn_8037EF30(void);
extern void fn_8039BF04(void);
extern void fn_803CE688(void);
extern void fn_803CE6BC(void);
extern void fn_803CE6FC(void);
extern void fn_803CE708(void);
extern void fn_803CE738(void);
extern void fn_803E5E64(void);
extern void fn_803E627C(void);
extern void fn_803E63D0(void);
extern void fn_803E644C(void);
extern void fn_803E64F0(void);
extern void fn_803E656C(void);
extern void fn_803E65F8(void);
extern void fn_803EEE10(void);
extern void fn_80444020(void);
extern void fn_8044D6E0(void);
extern void fn_805A2FD8(void);
extern void fn_805A32CC(void);
extern void fn_805A344C(void);
extern void fn_805A3590(void);
extern void fn_805A3664(void);
extern void fn_805A3738(void);
extern void fn_805A380C(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9990(void);
extern void fn_80680CF8(void);

/* External data declarations */
extern u8 lbl_8074ED24[];
extern u8 lbl_8074EF78[];
extern u8 lbl_8074F5E8[];
extern u8 lbl_8074F8CC[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087F040;
extern u32 lbl_8087F048;
extern u32 lbl_8087F408;
extern u32 lbl_8087F428;
extern u32 lbl_8087F430;
extern u32 lbl_8087F488;
extern u32 lbl_8087F490;
extern u32 lbl_8087F4A0;
extern u32 lbl_8087F4F0;
extern u32 lbl_8087F890;
extern u32 lbl_8087F8A0;
extern u32 lbl_8087F9F0;
extern u32 lbl_8087FA20;
extern u32 lbl_80885B10;
extern u32 lbl_80885B14;
extern u32 lbl_80885B18;
extern u32 lbl_80885B24;
extern u32 lbl_80885B30;
extern u32 lbl_80885B34;
extern u32 lbl_80885B38;
extern u32 lbl_80885B3C;
extern u32 lbl_80885B78;
extern u32 lbl_80885B9C;
extern u32 lbl_80885BA8;
extern u32 lbl_80885BB0;
extern u32 lbl_80885BB4;
extern u32 lbl_80885BB8;
extern u32 lbl_80885BBC;
extern u32 lbl_80885BC0;
extern u32 lbl_80885BC4;
extern u32 lbl_80885BC8;
extern u32 lbl_80885BCC;

/* Function declarations */
void fn_803A6B9C(void);
void fn_803A6CDC(void);
void fn_803A6E24(void);
void fn_803A6F68(void);
void fn_803A6F90(void);
void fn_803A7124(void);
void fn_803A7954(void);
void fn_803A7BB0(void);
void fn_803A7C28(void);
void fn_803A7CC0(void);
void fn_803A7D94(void);
void fn_803A7EB8(void);
void fn_803A7FBC(void);
void fn_803A81F8(void);
void fn_803A8284(void);
void fn_803A83FC(void);
void fn_803A8464(void);
void fn_803A8470(void);

asm void fn_803A6B9C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    li r6, 0x0
    stw r0, 0x34(r1)
    lwz r0, 0xc(r5)
    stw r31, 0x2c(r1)
    mr r31, r5
    clrlwi r0, r0, 31
    stw r30, 0x28(r1)
    cmplwi r0, 0x1
    mr r30, r4
    lwz r3, lbl_8087F4F0
    addis r3, r3, 0x1
    stw r6, -0x24f4(r3)
    beq lbl_fn_803A6B9C_000000B4
    addi r0, r1, 0x14
    stw r0, 0x8(r1)
    lwz r4, 0x8(r5)
    addi r9, r1, 0x1c
    lwz r3, lbl_8087F4F0
    addi r10, r1, 0x18
    li r5, 0x1
    li r6, -0x1
    li r7, 0x0
    li r8, 0x0
    bl fn_80444020
    cmpwi r3, 0x0
    beq lbl_fn_803A6B9C_000000F4
    lwz r3, lbl_8087F490
    lwz r4, 0x1c(r1)
    lwz r5, 0x18(r1)
    lwz r6, 0x14(r1)
    bl fn_803E5E64
    lis r4, lbl_8074EF78@ha
    lfs f1, lbl_80885B30
    addi r4, r4, lbl_8074EF78@l
    addi r3, r1, 0x10
    lwz r4, 0x10(r4)
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_803A6B9C_000000F4
lbl_fn_803A6B9C_000000B4:
    lwz r6, lbl_8087F040
    cmpwi r6, 0x0
    beq lbl_fn_803A6B9C_000000F4
    lwz r0, 0x170(r6)
    lwz r3, 0x8(r5)
    cmplwi r0, 0x2
    bge lbl_fn_803A6B9C_000000F4
    lwz r0, 0x170(r6)
    slwi r0, r0, 2
    add r0, r6, r0
    addic. r4, r0, 0x174
    beq lbl_fn_803A6B9C_000000E8
    stw r3, 0x0(r4)
lbl_fn_803A6B9C_000000E8:
    lwz r3, 0x170(r6)
    addi r0, r3, 0x1
    stw r0, 0x170(r6)
lbl_fn_803A6B9C_000000F4:
    lwz r4, lbl_8087F4F0
    lis r3, lbl_8074ED24@ha
    lwz r0, 0x0(r31)
    addi r3, r3, lbl_8074ED24@l
    addis r4, r4, 0x1
    li r5, 0x1
    slwi r0, r0, 2
    stw r5, -0x24f4(r4)
    lwzx r0, r3, r0
    li r3, 0x0
    stw r3, 0x4(r30)
    add r0, r31, r0
    stw r0, 0x0(r30)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_803A6CDC(void)
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
    bne lbl_fn_803A6CDC_0000017C
    li r31, 0x0
    b lbl_fn_803A6CDC_000001C8
lbl_fn_803A6CDC_0000017C:
    cmpwi r0, 0x2
    bne lbl_fn_803A6CDC_00000194
    mr r4, r31
    bl fn_80370174
    mr r31, r3
    b lbl_fn_803A6CDC_000001C8
lbl_fn_803A6CDC_00000194:
    cmpwi r0, 0x1
    bne lbl_fn_803A6CDC_000001AC
    mr r4, r31
    bl fn_80370A78
    mr r31, r3
    b lbl_fn_803A6CDC_000001C8
lbl_fn_803A6CDC_000001AC:
    cmpwi r0, 0x3
    bne lbl_fn_803A6CDC_000001C8
    bl fn_80680CF8
    divw r0, r3, r31
    mullw r0, r0, r31
    subf r3, r0, r3
    addi r31, r3, 0x1
lbl_fn_803A6CDC_000001C8:
    lwz r3, lbl_8087F488
    cmpwi r3, 0x0
    beq lbl_fn_803A6CDC_00000248
    lwz r0, 0x8(r30)
    cmplwi r0, 0x1
    ble lbl_fn_803A6CDC_00000204
    cmpwi r0, 0x2
    beq lbl_fn_803A6CDC_00000218
    cmpwi r0, 0x3
    beq lbl_fn_803A6CDC_0000022C
    cmpwi r0, 0x4
    beq lbl_fn_803A6CDC_00000234
    cmpwi r0, 0x5
    beq lbl_fn_803A6CDC_00000240
    b lbl_fn_803A6CDC_00000248
lbl_fn_803A6CDC_00000204:
    cntlzw r0, r0
    mr r4, r31
    srwi r5, r0, 5
    bl fn_803CE688
    b lbl_fn_803A6CDC_00000248
lbl_fn_803A6CDC_00000218:
    neg r0, r31
    or r0, r0, r31
    srwi r4, r0, 31
    bl fn_803CE6BC
    b lbl_fn_803A6CDC_00000248
lbl_fn_803A6CDC_0000022C:
    bl fn_803CE6FC
    b lbl_fn_803A6CDC_00000248
lbl_fn_803A6CDC_00000234:
    mr r4, r31
    bl fn_803CE708
    b lbl_fn_803A6CDC_00000248
lbl_fn_803A6CDC_00000240:
    mr r4, r31
    bl fn_803CE738
lbl_fn_803A6CDC_00000248:
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

asm void fn_803A6E24(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    lwz r0, 0x8(r5)
    stw r31, 0x1c(r1)
    li r31, 0x0
    cmpwi r0, 0x0
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    lwz r4, 0xc(r5)
    beq lbl_fn_803A6E24_000002D8
    cmpwi r0, 0x1
    beq lbl_fn_803A6E24_00000304
    cmpwi r0, 0x2
    beq lbl_fn_803A6E24_0000033C
    cmpwi r0, 0x3
    beq lbl_fn_803A6E24_0000034C
    b lbl_fn_803A6E24_00000358
lbl_fn_803A6E24_000002D8:
    lwz r0, 0xdc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803A6E24_000002F0
    lwz r3, lbl_8087F8A0
    lwz r3, 0x48(r3)
    b lbl_fn_803A6E24_000002FC
lbl_fn_803A6E24_000002F0:
    lwz r3, lbl_8087F8A0
    li r4, 0x1
    bl fn_8011F8F4
lbl_fn_803A6E24_000002FC:
    mr r31, r3
    b lbl_fn_803A6E24_00000358
lbl_fn_803A6E24_00000304:
    lwz r3, lbl_8087F890
    bl fn_8011FE3C
    lwz r0, lbl_8087FA20
    mr r31, r3
    cmpwi r0, 0x0
    beq lbl_fn_803A6E24_00000358
    cmpwi r3, 0x0
    beq lbl_fn_803A6E24_00000358
    lwz r0, 0x38(r3)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_803A6E24_00000358
    li r31, 0x0
    b lbl_fn_803A6E24_00000358
lbl_fn_803A6E24_0000033C:
    lwz r3, lbl_8087F408
    bl fn_8011FC10
    mr r31, r3
    b lbl_fn_803A6E24_00000358
lbl_fn_803A6E24_0000034C:
    lwz r3, lbl_8087F8A0
    bl fn_8011F91C
    mr r31, r3
lbl_fn_803A6E24_00000358:
    cmpwi r31, 0x0
    beq lbl_fn_803A6E24_0000038C
    lwz r3, lbl_8087F4A0
    lwz r4, 0x10(r30)
    lwz r5, 0x14(r30)
    bl fn_803EEE10
    cmpwi r3, 0x0
    beq lbl_fn_803A6E24_0000038C
    lwz r12, 0x0(r3)
    mr r4, r31
    lwz r12, 0x4c(r12)
    mtctr r12
    bctrl
lbl_fn_803A6E24_0000038C:
    lwz r4, 0x0(r30)
    lis r3, lbl_8074ED24@ha
    li r0, 0x0
    stw r0, 0x4(r29)
    slwi r0, r4, 2
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

asm void fn_803A6F68(void)
{
    nofralloc
    lwz r6, 0x0(r5)
    lis r3, lbl_8074ED24@ha
    li r0, 0x0
    stw r0, 0x4(r4)
    slwi r0, r6, 2
    addi r3, r3, lbl_8074ED24@l
    lwzx r0, r3, r0
    add r0, r5, r0
    stw r0, 0x0(r4)
    blr
}

asm void fn_803A6F90(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lwz r6, 0x8(r5)
    stw r0, 0x24(r1)
    cmpwi r6, 0x0
    lwz r0, 0xc(r5)
    stw r31, 0x1c(r1)
    mr r31, r5
    li r5, 0x0
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    stw r28, 0x10(r1)
    beq lbl_fn_803A6F90_0000044C
    cmpwi r6, 0x1
    beq lbl_fn_803A6F90_00000478
    cmpwi r6, 0x2
    beq lbl_fn_803A6F90_000004B4
    cmpwi r6, 0x3
    beq lbl_fn_803A6F90_000004C8
    b lbl_fn_803A6F90_000004D8
lbl_fn_803A6F90_0000044C:
    lwz r0, 0xdc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803A6F90_00000464
    lwz r3, lbl_8087F8A0
    lwz r3, 0x48(r3)
    b lbl_fn_803A6F90_00000470
lbl_fn_803A6F90_00000464:
    lwz r3, lbl_8087F8A0
    li r4, 0x1
    bl fn_8011F8F4
lbl_fn_803A6F90_00000470:
    mr r5, r3
    b lbl_fn_803A6F90_000004D8
lbl_fn_803A6F90_00000478:
    lwz r3, lbl_8087F890
    mr r4, r0
    bl fn_8011FE3C
    lwz r0, lbl_8087FA20
    mr r5, r3
    cmpwi r0, 0x0
    beq lbl_fn_803A6F90_000004D8
    cmpwi r3, 0x0
    beq lbl_fn_803A6F90_000004D8
    lwz r0, 0x38(r3)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_803A6F90_000004D8
    li r5, 0x0
    b lbl_fn_803A6F90_000004D8
lbl_fn_803A6F90_000004B4:
    lwz r3, lbl_8087F408
    mr r4, r0
    bl fn_8011FC10
    mr r5, r3
    b lbl_fn_803A6F90_000004D8
lbl_fn_803A6F90_000004C8:
    lwz r3, lbl_8087F8A0
    mr r4, r0
    bl fn_8011F91C
    mr r5, r3
lbl_fn_803A6F90_000004D8:
    cmpwi r5, 0x0
    beq lbl_fn_803A6F90_00000544
    lwz r3, 0x10(r31)
    li r4, 0x1
    lwz r0, 0x7e0(r5)
    slw r5, r4, r3
    lwz r3, lbl_8087F430
    and r0, r5, r0
    lwz r4, 0x18(r31)
    subf r0, r5, r0
    cmpwi r3, 0x0
    cntlzw r0, r0
    lwz r6, 0x14(r31)
    srwi r5, r0, 5
    beq lbl_fn_803A6F90_00000544
    lwz r28, 0x37c(r29)
    li r0, 0x0
    cmpwi r6, 0x1
    stw r0, 0x37c(r29)
    bne lbl_fn_803A6F90_00000534
    li r6, 0x0
    bl fn_80370320
    b lbl_fn_803A6F90_00000538
lbl_fn_803A6F90_00000534:
    bl fn_80370AE4
lbl_fn_803A6F90_00000538:
    li r0, 0x1
    stw r0, 0xf0(r29)
    stw r28, 0x37c(r29)
lbl_fn_803A6F90_00000544:
    lwz r4, 0x0(r31)
    lis r3, lbl_8074ED24@ha
    li r0, 0x0
    stw r0, 0x4(r30)
    slwi r0, r4, 2
    addi r3, r3, lbl_8074ED24@l
    lwzx r0, r3, r0
    add r0, r31, r0
    stw r0, 0x0(r30)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803A7124(void)
{
    nofralloc
    stwu r1, -0xf0(r1)
    mflr r0
    stw r0, 0xf4(r1)
    addi r11, r1, 0xf0
    bl _savegpr_26
    lwz r31, lbl_8087F430
    lis r0, 0x4330
    stw r0, 0xc0(r1)
    mr r27, r3
    cmpwi r31, 0x0
    mr r28, r4
    stw r0, 0xc8(r1)
    mr r29, r5
    beq lbl_fn_803A7124_00000D7C
    lwz r4, 0xc(r5)
    clrlwi r0, r4, 31
    cmplwi r0, 0x1
    bne lbl_fn_803A7124_000005F8
    rlwinm r0, r4, 0, 30, 30
    li r4, 0x0
    cmplwi r0, 0x2
    stb r4, 0x97c(r31)
    bne lbl_fn_803A7124_000005E8
    stw r4, 0x980(r31)
lbl_fn_803A7124_000005E8:
    li r0, 0x0
    stw r0, 0x8a0(r31)
    stw r0, 0xe4(r3)
    b lbl_fn_803A7124_00000D7C
lbl_fn_803A7124_000005F8:
    lwz r0, 0x14(r5)
    lwz r8, 0x10d8(r31)
    cmpwi r0, 0x0
    beq lbl_fn_803A7124_00000624
    cmpwi r0, 0x1
    beq lbl_fn_803A7124_00000704
    cmpwi r0, 0x2
    beq lbl_fn_803A7124_0000092C
    cmpwi r0, 0x3
    beq lbl_fn_803A7124_00000B54
    b lbl_fn_803A7124_00000D7C
lbl_fn_803A7124_00000624:
    cmpwi r8, 0x0
    beq lbl_fn_803A7124_00000678
    lwz r0, 0xfc(r8)
    li r7, 0x0
    lwz r6, 0x8(r5)
    li r9, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_803A7124_00000670
lbl_fn_803A7124_00000648:
    lwz r4, 0x100(r8)
    lwzx r0, r4, r9
    cmpw r6, r0
    bne lbl_fn_803A7124_00000664
    slwi r0, r7, 6
    add r7, r4, r0
    b lbl_fn_803A7124_0000067C
lbl_fn_803A7124_00000664:
    addi r9, r9, 0x40
    addi r7, r7, 0x1
    bdnz lbl_fn_803A7124_00000648
lbl_fn_803A7124_00000670:
    li r7, 0x0
    b lbl_fn_803A7124_0000067C
lbl_fn_803A7124_00000678:
    li r7, 0x0
lbl_fn_803A7124_0000067C:
    cmpwi r7, 0x0
    beq lbl_fn_803A7124_00000D7C
    lwz r4, 0x10(r5)
    lis r6, lbl_8074F5E8@ha
    lbz r0, 0x97c(r31)
    addi r8, r31, 0x97c
    stb r0, 0x97d(r31)
    xoris r4, r4, 0x8000
    li r0, 0x1
    lwz r5, 0xc(r5)
    stb r0, 0x97c(r31)
    lfd f3, lbl_8074F5E8@l(r6)
    rlwinm r5, r5, 0, 30, 30
    stw r4, 0xc4(r1)
    subi r0, r5, 0x2
    lfs f2, 0xc(r7)
    cntlzw r0, r0
    lfd f0, 0xc0(r1)
    srwi. r0, r0, 5
    psq_l f1, 0x4(r7), 0, 0
    fsubs f3, f0, f3
    psq_st f1, 0xc(r8), 0, 0
    lfs f0, lbl_80885BA8
    stfs f2, 0x990(r31)
    fmuls f0, f0, f3
    stfs f0, 0x9a0(r31)
    beq lbl_fn_803A7124_000006F0
    lwz r0, 0x8(r8)
    b lbl_fn_803A7124_000006F4
lbl_fn_803A7124_000006F0:
    li r0, 0x0
lbl_fn_803A7124_000006F4:
    stw r0, 0x4(r8)
    li r0, 0x0
    stw r0, 0xe4(r3)
    b lbl_fn_803A7124_00000D7C
lbl_fn_803A7124_00000704:
    lwz r3, lbl_8087F890
    cmpwi r3, 0x0
    beq lbl_fn_803A7124_00000720
    lwz r4, 0x8(r5)
    bl fn_8011FE3C
    mr r30, r3
    b lbl_fn_803A7124_00000724
lbl_fn_803A7124_00000720:
    li r30, 0x0
lbl_fn_803A7124_00000724:
    cmpwi r30, 0x0
    beq lbl_fn_803A7124_00000D7C
    lis r4, lbl_8074F8CC@ha
    addi r26, r30, 0xb0
    addi r4, r4, lbl_8074F8CC@l
    stw r30, 0x8a0(r31)
    mr r3, r26
    li r5, 0x0
    addi r4, r4, 0x69
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_803A7124_0000075C
    li r3, 0x0
    b lbl_fn_803A7124_00000768
lbl_fn_803A7124_0000075C:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r26)
    add r3, r3, r0
lbl_fn_803A7124_00000768:
    cmpwi r3, 0x0
    beq lbl_fn_803A7124_00000790
    lfs f4, 0x2c(r3)
    addi r5, r1, 0xb0
    lfs f3, 0x1c(r3)
    lfs f0, 0xc(r3)
    stfs f0, 0xb0(r1)
    stfs f3, 0xb4(r1)
    stfs f4, 0xb8(r1)
    b lbl_fn_803A7124_000008B0
lbl_fn_803A7124_00000790:
    lis r4, lbl_8074F8CC@ha
    mr r3, r26
    addi r4, r4, lbl_8074F8CC@l
    li r5, 0x0
    addi r4, r4, 0x6e
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_803A7124_000007B8
    li r3, 0x0
    b lbl_fn_803A7124_000007C4
lbl_fn_803A7124_000007B8:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r26)
    add r3, r3, r0
lbl_fn_803A7124_000007C4:
    cmpwi r3, 0x0
    beq lbl_fn_803A7124_00000818
    lfs f3, lbl_80885B10
    addi r5, r1, 0xb0
    lfs f9, 0x2c(r3)
    lfs f7, 0xc(r3)
    lfs f0, lbl_80885B14
    fsubs f6, f9, f3
    lfs f8, 0x1c(r3)
    fsubs f4, f7, f3
    stfs f3, 0x74(r1)
    fsubs f5, f8, f0
    stfs f0, 0x78(r1)
    stfs f3, 0x7c(r1)
    stfs f7, 0x68(r1)
    stfs f8, 0x6c(r1)
    stfs f9, 0x70(r1)
    stfs f4, 0xb0(r1)
    stfs f5, 0xb4(r1)
    stfs f6, 0xb8(r1)
    b lbl_fn_803A7124_000008B0
lbl_fn_803A7124_00000818:
    lis r4, lbl_8074F8CC@ha
    mr r3, r26
    addi r4, r4, lbl_8074F8CC@l
    li r5, 0x0
    addi r4, r4, 0x73
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_803A7124_00000840
    li r3, 0x0
    b lbl_fn_803A7124_0000084C
lbl_fn_803A7124_00000840:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r26)
    add r3, r3, r0
lbl_fn_803A7124_0000084C:
    cmpwi r3, 0x0
    beq lbl_fn_803A7124_000008A0
    lfs f3, lbl_80885B10
    addi r5, r1, 0xb0
    lfs f9, 0x2c(r3)
    lfs f7, 0xc(r3)
    lfs f0, lbl_80885B18
    fadds f6, f9, f3
    lfs f8, 0x1c(r3)
    fadds f4, f7, f3
    stfs f3, 0x8c(r1)
    fadds f5, f8, f0
    stfs f0, 0x90(r1)
    stfs f3, 0x94(r1)
    stfs f7, 0x80(r1)
    stfs f8, 0x84(r1)
    stfs f9, 0x88(r1)
    stfs f4, 0xb0(r1)
    stfs f5, 0xb4(r1)
    stfs f6, 0xb8(r1)
    b lbl_fn_803A7124_000008B0
lbl_fn_803A7124_000008A0:
    mr r4, r30
    addi r3, r1, 0xb0
    bl fn_801781B0
    addi r5, r1, 0xb0
lbl_fn_803A7124_000008B0:
    lwz r3, 0x10(r29)
    lis r4, lbl_8074F5E8@ha
    lbz r0, 0x97c(r31)
    addi r6, r31, 0x97c
    stb r0, 0x97d(r31)
    xoris r3, r3, 0x8000
    li r0, 0x1
    lfd f3, lbl_8074F5E8@l(r4)
    stb r0, 0x97c(r31)
    lwz r7, 0xc(r29)
    stw r3, 0xcc(r1)
    rlwinm r4, r7, 0, 30, 30
    lfs f2, 0x8(r5)
    lfd f0, 0xc8(r1)
    subi r0, r4, 0x2
    psq_l f1, 0x0(r5), 0, 0
    cntlzw r0, r0
    fsubs f3, f0, f3
    psq_st f1, 0xc(r6), 0, 0
    lfs f0, lbl_80885BA8
    srwi. r0, r0, 5
    stfs f2, 0x990(r31)
    fmuls f0, f0, f3
    stfs f0, 0x9a0(r31)
    beq lbl_fn_803A7124_0000091C
    lwz r0, 0x8(r6)
    b lbl_fn_803A7124_00000920
lbl_fn_803A7124_0000091C:
    li r0, 0x0
lbl_fn_803A7124_00000920:
    stw r0, 0x4(r6)
    stw r30, 0xe4(r27)
    b lbl_fn_803A7124_00000D7C
lbl_fn_803A7124_0000092C:
    lwz r3, lbl_8087F408
    cmpwi r3, 0x0
    beq lbl_fn_803A7124_00000948
    lwz r4, 0x8(r5)
    bl fn_8011FC10
    mr r30, r3
    b lbl_fn_803A7124_0000094C
lbl_fn_803A7124_00000948:
    li r30, 0x0
lbl_fn_803A7124_0000094C:
    cmpwi r30, 0x0
    beq lbl_fn_803A7124_00000D7C
    lis r4, lbl_8074F8CC@ha
    addi r26, r30, 0xb0
    addi r4, r4, lbl_8074F8CC@l
    stw r30, 0x8a0(r31)
    mr r3, r26
    li r5, 0x0
    addi r4, r4, 0x69
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_803A7124_00000984
    li r3, 0x0
    b lbl_fn_803A7124_00000990
lbl_fn_803A7124_00000984:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r26)
    add r3, r3, r0
lbl_fn_803A7124_00000990:
    cmpwi r3, 0x0
    beq lbl_fn_803A7124_000009B8
    lfs f4, 0x2c(r3)
    addi r5, r1, 0xa4
    lfs f3, 0x1c(r3)
    lfs f0, 0xc(r3)
    stfs f0, 0xa4(r1)
    stfs f3, 0xa8(r1)
    stfs f4, 0xac(r1)
    b lbl_fn_803A7124_00000AD8
lbl_fn_803A7124_000009B8:
    lis r4, lbl_8074F8CC@ha
    mr r3, r26
    addi r4, r4, lbl_8074F8CC@l
    li r5, 0x0
    addi r4, r4, 0x6e
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_803A7124_000009E0
    li r3, 0x0
    b lbl_fn_803A7124_000009EC
lbl_fn_803A7124_000009E0:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r26)
    add r3, r3, r0
lbl_fn_803A7124_000009EC:
    cmpwi r3, 0x0
    beq lbl_fn_803A7124_00000A40
    lfs f3, lbl_80885B10
    addi r5, r1, 0xa4
    lfs f9, 0x2c(r3)
    lfs f7, 0xc(r3)
    lfs f0, lbl_80885B14
    fsubs f6, f9, f3
    lfs f8, 0x1c(r3)
    fsubs f4, f7, f3
    stfs f3, 0x44(r1)
    fsubs f5, f8, f0
    stfs f0, 0x48(r1)
    stfs f3, 0x4c(r1)
    stfs f7, 0x38(r1)
    stfs f8, 0x3c(r1)
    stfs f9, 0x40(r1)
    stfs f4, 0xa4(r1)
    stfs f5, 0xa8(r1)
    stfs f6, 0xac(r1)
    b lbl_fn_803A7124_00000AD8
lbl_fn_803A7124_00000A40:
    lis r4, lbl_8074F8CC@ha
    mr r3, r26
    addi r4, r4, lbl_8074F8CC@l
    li r5, 0x0
    addi r4, r4, 0x73
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_803A7124_00000A68
    li r3, 0x0
    b lbl_fn_803A7124_00000A74
lbl_fn_803A7124_00000A68:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r26)
    add r3, r3, r0
lbl_fn_803A7124_00000A74:
    cmpwi r3, 0x0
    beq lbl_fn_803A7124_00000AC8
    lfs f3, lbl_80885B10
    addi r5, r1, 0xa4
    lfs f9, 0x2c(r3)
    lfs f7, 0xc(r3)
    lfs f0, lbl_80885B18
    fadds f6, f9, f3
    lfs f8, 0x1c(r3)
    fadds f4, f7, f3
    stfs f3, 0x5c(r1)
    fadds f5, f8, f0
    stfs f0, 0x60(r1)
    stfs f3, 0x64(r1)
    stfs f7, 0x50(r1)
    stfs f8, 0x54(r1)
    stfs f9, 0x58(r1)
    stfs f4, 0xa4(r1)
    stfs f5, 0xa8(r1)
    stfs f6, 0xac(r1)
    b lbl_fn_803A7124_00000AD8
lbl_fn_803A7124_00000AC8:
    mr r4, r30
    addi r3, r1, 0xa4
    bl fn_801781B0
    addi r5, r1, 0xa4
lbl_fn_803A7124_00000AD8:
    lwz r3, 0x10(r29)
    lis r4, lbl_8074F5E8@ha
    lbz r0, 0x97c(r31)
    addi r6, r31, 0x97c
    stb r0, 0x97d(r31)
    xoris r3, r3, 0x8000
    li r0, 0x1
    lfd f3, lbl_8074F5E8@l(r4)
    stb r0, 0x97c(r31)
    lwz r7, 0xc(r29)
    stw r3, 0xc4(r1)
    rlwinm r4, r7, 0, 30, 30
    lfs f2, 0x8(r5)
    lfd f0, 0xc0(r1)
    subi r0, r4, 0x2
    psq_l f1, 0x0(r5), 0, 0
    cntlzw r0, r0
    fsubs f3, f0, f3
    psq_st f1, 0xc(r6), 0, 0
    lfs f0, lbl_80885BA8
    srwi. r0, r0, 5
    stfs f2, 0x990(r31)
    fmuls f0, f0, f3
    stfs f0, 0x9a0(r31)
    beq lbl_fn_803A7124_00000B44
    lwz r0, 0x8(r6)
    b lbl_fn_803A7124_00000B48
lbl_fn_803A7124_00000B44:
    li r0, 0x0
lbl_fn_803A7124_00000B48:
    stw r0, 0x4(r6)
    stw r30, 0xe4(r27)
    b lbl_fn_803A7124_00000D7C
lbl_fn_803A7124_00000B54:
    lwz r0, lbl_8087F428
    cmpwi r0, 0x0
    beq lbl_fn_803A7124_00000B74
    lwz r4, 0x8(r5)
    lwz r3, lbl_8087F8A0
    bl fn_8011F91C
    mr r30, r3
    b lbl_fn_803A7124_00000B78
lbl_fn_803A7124_00000B74:
    li r30, 0x0
lbl_fn_803A7124_00000B78:
    cmpwi r30, 0x0
    beq lbl_fn_803A7124_00000D7C
    lis r4, lbl_8074F8CC@ha
    addi r26, r30, 0xb0
    addi r4, r4, lbl_8074F8CC@l
    stw r30, 0x8a0(r31)
    mr r3, r26
    li r5, 0x0
    addi r4, r4, 0x69
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_803A7124_00000BB0
    li r3, 0x0
    b lbl_fn_803A7124_00000BBC
lbl_fn_803A7124_00000BB0:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r26)
    add r3, r3, r0
lbl_fn_803A7124_00000BBC:
    cmpwi r3, 0x0
    beq lbl_fn_803A7124_00000BE4
    lfs f4, 0x2c(r3)
    addi r5, r1, 0x98
    lfs f3, 0x1c(r3)
    lfs f0, 0xc(r3)
    stfs f0, 0x98(r1)
    stfs f3, 0x9c(r1)
    stfs f4, 0xa0(r1)
    b lbl_fn_803A7124_00000D04
lbl_fn_803A7124_00000BE4:
    lis r4, lbl_8074F8CC@ha
    mr r3, r26
    addi r4, r4, lbl_8074F8CC@l
    li r5, 0x0
    addi r4, r4, 0x6e
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_803A7124_00000C0C
    li r3, 0x0
    b lbl_fn_803A7124_00000C18
lbl_fn_803A7124_00000C0C:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r26)
    add r3, r3, r0
lbl_fn_803A7124_00000C18:
    cmpwi r3, 0x0
    beq lbl_fn_803A7124_00000C6C
    lfs f3, lbl_80885B10
    addi r5, r1, 0x98
    lfs f9, 0x2c(r3)
    lfs f7, 0xc(r3)
    lfs f0, lbl_80885B14
    fsubs f6, f9, f3
    lfs f8, 0x1c(r3)
    fsubs f4, f7, f3
    stfs f3, 0x14(r1)
    fsubs f5, f8, f0
    stfs f0, 0x18(r1)
    stfs f3, 0x1c(r1)
    stfs f7, 0x8(r1)
    stfs f8, 0xc(r1)
    stfs f9, 0x10(r1)
    stfs f4, 0x98(r1)
    stfs f5, 0x9c(r1)
    stfs f6, 0xa0(r1)
    b lbl_fn_803A7124_00000D04
lbl_fn_803A7124_00000C6C:
    lis r4, lbl_8074F8CC@ha
    mr r3, r26
    addi r4, r4, lbl_8074F8CC@l
    li r5, 0x0
    addi r4, r4, 0x73
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_803A7124_00000C94
    li r3, 0x0
    b lbl_fn_803A7124_00000CA0
lbl_fn_803A7124_00000C94:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r26)
    add r3, r3, r0
lbl_fn_803A7124_00000CA0:
    cmpwi r3, 0x0
    beq lbl_fn_803A7124_00000CF4
    lfs f3, lbl_80885B10
    addi r5, r1, 0x98
    lfs f9, 0x2c(r3)
    lfs f7, 0xc(r3)
    lfs f0, lbl_80885B18
    fadds f6, f9, f3
    lfs f8, 0x1c(r3)
    fadds f4, f7, f3
    stfs f3, 0x2c(r1)
    fadds f5, f8, f0
    stfs f0, 0x30(r1)
    stfs f3, 0x34(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f4, 0x98(r1)
    stfs f5, 0x9c(r1)
    stfs f6, 0xa0(r1)
    b lbl_fn_803A7124_00000D04
lbl_fn_803A7124_00000CF4:
    mr r4, r30
    addi r3, r1, 0x98
    bl fn_801781B0
    addi r5, r1, 0x98
lbl_fn_803A7124_00000D04:
    lwz r3, 0x10(r29)
    lis r4, lbl_8074F5E8@ha
    lbz r0, 0x97c(r31)
    addi r6, r31, 0x97c
    stb r0, 0x97d(r31)
    xoris r3, r3, 0x8000
    li r0, 0x1
    lfd f3, lbl_8074F5E8@l(r4)
    stb r0, 0x97c(r31)
    lwz r7, 0xc(r29)
    stw r3, 0xcc(r1)
    rlwinm r4, r7, 0, 30, 30
    lfs f2, 0x8(r5)
    lfd f0, 0xc8(r1)
    subi r0, r4, 0x2
    psq_l f1, 0x0(r5), 0, 0
    cntlzw r0, r0
    fsubs f3, f0, f3
    psq_st f1, 0xc(r6), 0, 0
    lfs f0, lbl_80885BA8
    srwi. r0, r0, 5
    stfs f2, 0x990(r31)
    fmuls f0, f0, f3
    stfs f0, 0x9a0(r31)
    beq lbl_fn_803A7124_00000D70
    lwz r0, 0x8(r6)
    b lbl_fn_803A7124_00000D74
lbl_fn_803A7124_00000D70:
    li r0, 0x0
lbl_fn_803A7124_00000D74:
    stw r0, 0x4(r6)
    stw r30, 0xe4(r27)
lbl_fn_803A7124_00000D7C:
    lwz r4, 0x0(r29)
    lis r3, lbl_8074ED24@ha
    li r0, 0x0
    stw r0, 0x4(r28)
    slwi r0, r4, 2
    addi r3, r3, lbl_8074ED24@l
    lwzx r0, r3, r0
    addi r11, r1, 0xf0
    add r0, r29, r0
    stw r0, 0x0(r28)
    bl _restgpr_26
    lwz r0, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0xf0
    blr
}

asm void fn_803A7954(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lwz r6, 0xc(r5)
    stw r0, 0x24(r1)
    cmpwi r6, 0x0
    lwz r0, 0x10(r5)
    stmw r27, 0xc(r1)
    mr r27, r3
    mr r30, r4
    mr r31, r5
    li r29, 0x0
    beq lbl_fn_803A7954_00000E04
    cmpwi r6, 0x1
    beq lbl_fn_803A7954_00000E30
    cmpwi r6, 0x2
    beq lbl_fn_803A7954_00000E6C
    cmpwi r6, 0x3
    beq lbl_fn_803A7954_00000E80
    b lbl_fn_803A7954_00000E90
lbl_fn_803A7954_00000E04:
    lwz r0, 0xdc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803A7954_00000E1C
    lwz r3, lbl_8087F8A0
    lwz r3, 0x48(r3)
    b lbl_fn_803A7954_00000E28
lbl_fn_803A7954_00000E1C:
    lwz r3, lbl_8087F8A0
    li r4, 0x1
    bl fn_8011F8F4
lbl_fn_803A7954_00000E28:
    mr r29, r3
    b lbl_fn_803A7954_00000E90
lbl_fn_803A7954_00000E30:
    lwz r3, lbl_8087F890
    mr r4, r0
    bl fn_8011FE3C
    lwz r0, lbl_8087FA20
    mr r29, r3
    cmpwi r0, 0x0
    beq lbl_fn_803A7954_00000E90
    cmpwi r3, 0x0
    beq lbl_fn_803A7954_00000E90
    lwz r0, 0x38(r3)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_803A7954_00000E90
    li r29, 0x0
    b lbl_fn_803A7954_00000E90
lbl_fn_803A7954_00000E6C:
    lwz r3, lbl_8087F408
    mr r4, r0
    bl fn_8011FC10
    mr r29, r3
    b lbl_fn_803A7954_00000E90
lbl_fn_803A7954_00000E80:
    lwz r3, lbl_8087F8A0
    mr r4, r0
    bl fn_8011F91C
    mr r29, r3
lbl_fn_803A7954_00000E90:
    lwz r0, 0x14(r31)
    li r28, 0x0
    lwz r4, 0x18(r31)
    cmpwi r0, 0x0
    beq lbl_fn_803A7954_00000EC0
    cmpwi r0, 0x1
    beq lbl_fn_803A7954_00000EEC
    cmpwi r0, 0x2
    beq lbl_fn_803A7954_00000F24
    cmpwi r0, 0x3
    beq lbl_fn_803A7954_00000F34
    b lbl_fn_803A7954_00000F40
lbl_fn_803A7954_00000EC0:
    lwz r0, 0xdc(r27)
    cmpwi r0, 0x0
    beq lbl_fn_803A7954_00000ED8
    lwz r3, lbl_8087F8A0
    lwz r3, 0x48(r3)
    b lbl_fn_803A7954_00000EE4
lbl_fn_803A7954_00000ED8:
    lwz r3, lbl_8087F8A0
    li r4, 0x1
    bl fn_8011F8F4
lbl_fn_803A7954_00000EE4:
    mr r28, r3
    b lbl_fn_803A7954_00000F40
lbl_fn_803A7954_00000EEC:
    lwz r3, lbl_8087F890
    bl fn_8011FE3C
    lwz r0, lbl_8087FA20
    mr r28, r3
    cmpwi r0, 0x0
    beq lbl_fn_803A7954_00000F40
    cmpwi r3, 0x0
    beq lbl_fn_803A7954_00000F40
    lwz r0, 0x38(r3)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_803A7954_00000F40
    li r28, 0x0
    b lbl_fn_803A7954_00000F40
lbl_fn_803A7954_00000F24:
    lwz r3, lbl_8087F408
    bl fn_8011FC10
    mr r28, r3
    b lbl_fn_803A7954_00000F40
lbl_fn_803A7954_00000F34:
    lwz r3, lbl_8087F8A0
    bl fn_8011F91C
    mr r28, r3
lbl_fn_803A7954_00000F40:
    lwz r3, lbl_8087F430
    lwz r27, 0x20(r31)
    cmpwi r3, 0x0
    lwz r0, 0x1c(r31)
    bne lbl_fn_803A7954_00000F5C
    li r3, 0x0
    b lbl_fn_803A7954_00000FA4
lbl_fn_803A7954_00000F5C:
    cmpwi r0, 0x2
    bne lbl_fn_803A7954_00000F70
    mr r4, r27
    bl fn_80370174
    b lbl_fn_803A7954_00000FA4
lbl_fn_803A7954_00000F70:
    cmpwi r0, 0x1
    bne lbl_fn_803A7954_00000F84
    mr r4, r27
    bl fn_80370A78
    b lbl_fn_803A7954_00000FA4
lbl_fn_803A7954_00000F84:
    cmpwi r0, 0x3
    bne lbl_fn_803A7954_00000FA0
    bl fn_80680CF8
    divw r0, r3, r27
    mullw r0, r0, r27
    subf r3, r0, r3
    addi r27, r3, 0x1
lbl_fn_803A7954_00000FA0:
    mr r3, r27
lbl_fn_803A7954_00000FA4:
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    bne lbl_fn_803A7954_00000FDC
    cmpwi r3, 0x1
    bne lbl_fn_803A7954_00000FCC
    mr r3, r29
    mr r4, r28
    li r5, 0x1
    bl fn_8017A33C
    b lbl_fn_803A7954_00000FDC
lbl_fn_803A7954_00000FCC:
    mr r3, r29
    li r4, 0x0
    li r5, 0x1
    bl fn_8017A33C
lbl_fn_803A7954_00000FDC:
    lwz r4, 0x0(r31)
    lis r3, lbl_8074ED24@ha
    li r0, 0x0
    stw r0, 0x4(r30)
    slwi r0, r4, 2
    addi r3, r3, lbl_8074ED24@l
    lwzx r0, r3, r0
    add r0, r31, r0
    stw r0, 0x0(r30)
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803A7BB0(void)
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
    beq lbl_fn_803A7BB0_00001050
    lwz r4, 0x8(r5)
    addi r3, r3, 0x6c
    lfs f1, lbl_80885B14
    li r5, 0x1
    bl fn_8037EF30
lbl_fn_803A7BB0_00001050:
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

asm void fn_803A7C28(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    stw r30, 0x8(r1)
    mr r30, r4
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_803A7C28_000010BC
    lwz r3, 0x48(r3)
    b lbl_fn_803A7C28_000010C0
lbl_fn_803A7C28_000010BC:
    li r3, 0x0
lbl_fn_803A7C28_000010C0:
    cmpwi r3, 0x0
    beq lbl_fn_803A7C28_000010E8
    lwz r0, 0x8(r5)
    cmpwi r0, 0x0
    beq lbl_fn_803A7C28_000010DC
    bl fn_8017A504
    b lbl_fn_803A7C28_000010E8
lbl_fn_803A7C28_000010DC:
    lwz r0, 0x54c(r3)
    rlwinm r0, r0, 0, 11, 9
    stw r0, 0x54c(r3)
lbl_fn_803A7C28_000010E8:
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

asm void fn_803A7CC0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lwz r3, 0x10(r5)
    stw r0, 0x14(r1)
    rlwinm r0, r3, 0, 30, 30
    stw r31, 0xc(r1)
    cmpwi r0, 0x2
    mr r31, r5
    stw r30, 0x8(r1)
    mr r30, r4
    bne lbl_fn_803A7CC0_00001168
    lwz r3, lbl_8087F490
    cmpwi r3, 0x0
    beq lbl_fn_803A7CC0_000011BC
    lwz r4, 0x14(r5)
    bl fn_803E627C
    b lbl_fn_803A7CC0_000011BC
lbl_fn_803A7CC0_00001168:
    rlwinm r0, r3, 0, 29, 29
    cmpwi r0, 0x4
    bne lbl_fn_803A7CC0_00001188
    lwz r3, lbl_8087F490
    cmpwi r3, 0x0
    beq lbl_fn_803A7CC0_000011BC
    bl fn_803E65F8
    b lbl_fn_803A7CC0_000011BC
lbl_fn_803A7CC0_00001188:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803A7CC0_000011BC
    lwz r4, 0x8(r5)
    cmpwi r4, 0x3
    bne lbl_fn_803A7CC0_000011A8
    bl fn_8036EA04
    b lbl_fn_803A7CC0_000011BC
lbl_fn_803A7CC0_000011A8:
    cmpwi r4, 0x5
    beq lbl_fn_803A7CC0_000011BC
    lwz r5, 0xc(r5)
    lwz r6, 0x14(r31)
    bl fn_8036E6D4
lbl_fn_803A7CC0_000011BC:
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

asm void fn_803A7D94(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lwz r3, 0x10(r5)
    stw r0, 0x24(r1)
    rlwinm r0, r3, 0, 30, 30
    stw r31, 0x1c(r1)
    cmpwi r0, 0x2
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    li r29, 0x1
    bne lbl_fn_803A7D94_0000127C
    lwz r3, lbl_8087F490
    cmpwi r3, 0x0
    beq lbl_fn_803A7D94_000012E0
    bl fn_803E644C
    cmpwi r3, 0x0
    bne lbl_fn_803A7D94_000012E0
    lwz r3, lbl_8087F490
    bl fn_803E64F0
    lwz r3, lbl_8087F490
    bl fn_803E656C
    lwz r3, lbl_8087FA20
    li r29, 0x0
    cmpwi r3, 0x0
    beq lbl_fn_803A7D94_000012E0
    lwz r3, 0x258(r3)
    cmpwi r3, 0x0
    beq lbl_fn_803A7D94_000012E0
    li r0, 0x0
    stw r0, 0x4c(r3)
    b lbl_fn_803A7D94_000012E0
lbl_fn_803A7D94_0000127C:
    rlwinm r0, r3, 0, 29, 29
    cmpwi r0, 0x4
    bne lbl_fn_803A7D94_000012CC
    lwz r3, lbl_8087F490
    cmpwi r3, 0x0
    beq lbl_fn_803A7D94_000012E0
    lwz r0, 0x2638(r3)
    cmpwi r0, 0x0
    bne lbl_fn_803A7D94_000012E0
    bl fn_803E63D0
    lwz r3, lbl_8087FA20
    li r29, 0x0
    cmpwi r3, 0x0
    beq lbl_fn_803A7D94_000012E0
    lwz r3, 0x258(r3)
    cmpwi r3, 0x0
    beq lbl_fn_803A7D94_000012E0
    li r0, 0x1
    stw r0, 0x4c(r3)
    b lbl_fn_803A7D94_000012E0
lbl_fn_803A7D94_000012CC:
    lwz r3, lbl_8087F430
    lwz r0, 0x54e4(r3)
    cmpwi r0, 0x3
    beq lbl_fn_803A7D94_000012E0
    li r29, 0x0
lbl_fn_803A7D94_000012E0:
    lwz r0, 0x0(r31)
    lis r3, lbl_8074ED24@ha
    addi r3, r3, lbl_8074ED24@l
    stw r29, 0x4(r30)
    slwi r0, r0, 2
    lwzx r0, r3, r0
    add r0, r31, r0
    stw r0, 0x0(r30)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803A7EB8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r8, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    lwz r6, lbl_8087F9F0
    cmpwi r6, 0x0
    beq lbl_fn_803A7EB8_000013D0
    lwz r0, 0x8(r5)
    cmpwi r0, 0x0
    beq lbl_fn_803A7EB8_00001378
    cmpwi r0, 0x1
    beq lbl_fn_803A7EB8_00001380
    cmpwi r0, 0x3
    beq lbl_fn_803A7EB8_00001388
    cmpwi r0, 0x4
    beq lbl_fn_803A7EB8_0000139C
    cmpwi r0, 0x5
    beq lbl_fn_803A7EB8_000013B8
    b lbl_fn_803A7EB8_000013D0
lbl_fn_803A7EB8_00001378:
    lwz r8, 0x48(r6)
    b lbl_fn_803A7EB8_000013D0
lbl_fn_803A7EB8_00001380:
    lwz r8, 0x4c(r6)
    b lbl_fn_803A7EB8_000013D0
lbl_fn_803A7EB8_00001388:
    lfs f0, 0xa4(r6)
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r8, 0xc(r1)
    b lbl_fn_803A7EB8_000013D0
lbl_fn_803A7EB8_0000139C:
    lfs f1, 0xc4(r6)
    lfs f0, lbl_80885B78
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r8, 0xc(r1)
    b lbl_fn_803A7EB8_000013D0
lbl_fn_803A7EB8_000013B8:
    lfs f1, 0xe4(r6)
    lfs f0, lbl_80885B78
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r8, 0xc(r1)
lbl_fn_803A7EB8_000013D0:
    lwz r4, 0xc(r5)
    li r6, 0x0
    lwz r5, 0x10(r5)
    li r7, 0x0
    bl fn_8039BF04
    lwz r0, 0x0(r31)
    lis r3, lbl_8074ED24@ha
    li r4, 0x0
    stw r4, 0x4(r30)
    slwi r0, r0, 2
    addi r3, r3, lbl_8074ED24@l
    lwzx r0, r3, r0
    add r0, r31, r0
    stw r0, 0x0(r30)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803A7FBC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    lwz r0, 0xc(r5)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    lwz r29, 0x10(r5)
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    bne lbl_fn_803A7FBC_0000145C
    li r29, 0x0
    b lbl_fn_803A7FBC_000014A8
lbl_fn_803A7FBC_0000145C:
    cmpwi r0, 0x2
    bne lbl_fn_803A7FBC_00001474
    mr r4, r29
    bl fn_80370174
    mr r29, r3
    b lbl_fn_803A7FBC_000014A8
lbl_fn_803A7FBC_00001474:
    cmpwi r0, 0x1
    bne lbl_fn_803A7FBC_0000148C
    mr r4, r29
    bl fn_80370A78
    mr r29, r3
    b lbl_fn_803A7FBC_000014A8
lbl_fn_803A7FBC_0000148C:
    cmpwi r0, 0x3
    bne lbl_fn_803A7FBC_000014A8
    bl fn_80680CF8
    divw r0, r3, r29
    mullw r0, r0, r29
    subf r3, r0, r3
    addi r29, r3, 0x1
lbl_fn_803A7FBC_000014A8:
    lwz r3, lbl_8087F9F0
    cmpwi r3, 0x0
    beq lbl_fn_803A7FBC_0000161C
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    beq lbl_fn_803A7FBC_000014F4
    cmpwi r0, 0x1
    beq lbl_fn_803A7FBC_00001500
    cmpwi r0, 0x2
    beq lbl_fn_803A7FBC_0000150C
    cmpwi r0, 0x3
    beq lbl_fn_803A7FBC_0000158C
    cmpwi r0, 0x4
    beq lbl_fn_803A7FBC_000015B4
    cmpwi r0, 0x5
    beq lbl_fn_803A7FBC_000015E4
    cmpwi r0, 0x6
    beq lbl_fn_803A7FBC_00001614
    b lbl_fn_803A7FBC_0000161C
lbl_fn_803A7FBC_000014F4:
    mr r4, r29
    bl fn_805A2FD8
    b lbl_fn_803A7FBC_0000161C
lbl_fn_803A7FBC_00001500:
    mr r4, r29
    bl fn_805A32CC
    b lbl_fn_803A7FBC_0000161C
lbl_fn_803A7FBC_0000150C:
    lwz r4, lbl_8087F430
    cmpwi r4, 0x0
    beq lbl_fn_803A7FBC_00001520
    lwz r6, 0x10d8(r4)
    b lbl_fn_803A7FBC_00001524
lbl_fn_803A7FBC_00001520:
    li r6, 0x0
lbl_fn_803A7FBC_00001524:
    cmpwi r6, 0x0
    beq lbl_fn_803A7FBC_00001574
    lwz r0, 0x78(r6)
    li r5, 0x0
    li r7, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_803A7FBC_0000156C
lbl_fn_803A7FBC_00001544:
    lwz r4, 0x7c(r6)
    lwzx r0, r4, r7
    cmpw r29, r0
    bne lbl_fn_803A7FBC_00001560
    mulli r0, r5, 0x28
    add r4, r4, r0
    b lbl_fn_803A7FBC_00001578
lbl_fn_803A7FBC_00001560:
    addi r7, r7, 0x28
    addi r5, r5, 0x1
    bdnz lbl_fn_803A7FBC_00001544
lbl_fn_803A7FBC_0000156C:
    li r4, 0x0
    b lbl_fn_803A7FBC_00001578
lbl_fn_803A7FBC_00001574:
    li r4, 0x0
lbl_fn_803A7FBC_00001578:
    cmpwi r4, 0x0
    beq lbl_fn_803A7FBC_0000161C
    addi r4, r4, 0x4
    bl fn_805A344C
    b lbl_fn_803A7FBC_0000161C
lbl_fn_803A7FBC_0000158C:
    xoris r4, r29, 0x8000
    lis r0, 0x4330
    lis r5, lbl_8074F5E8@ha
    stw r4, 0xc(r1)
    lfd f1, lbl_8074F5E8@l(r5)
    stw r0, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f1
    bl fn_805A3590
    b lbl_fn_803A7FBC_0000161C
lbl_fn_803A7FBC_000015B4:
    xoris r4, r29, 0x8000
    lis r0, 0x4330
    lis r5, lbl_8074F5E8@ha
    stw r4, 0xc(r1)
    lfd f2, lbl_8074F5E8@l(r5)
    stw r0, 0x8(r1)
    lfs f0, lbl_80885B78
    lfd f1, 0x8(r1)
    fsubs f1, f1, f2
    fdivs f1, f1, f0
    bl fn_805A3664
    b lbl_fn_803A7FBC_0000161C
lbl_fn_803A7FBC_000015E4:
    xoris r4, r29, 0x8000
    lis r0, 0x4330
    lis r5, lbl_8074F5E8@ha
    stw r4, 0xc(r1)
    lfd f2, lbl_8074F5E8@l(r5)
    stw r0, 0x8(r1)
    lfs f0, lbl_80885B78
    lfd f1, 0x8(r1)
    fsubs f1, f1, f2
    fdivs f1, f1, f0
    bl fn_805A3738
    b lbl_fn_803A7FBC_0000161C
lbl_fn_803A7FBC_00001614:
    mr r4, r29
    bl fn_805A380C
lbl_fn_803A7FBC_0000161C:
    lwz r0, 0x0(r31)
    lis r3, lbl_8074ED24@ha
    li r4, 0x0
    stw r4, 0x4(r30)
    slwi r0, r0, 2
    addi r3, r3, lbl_8074ED24@l
    lwzx r0, r3, r0
    add r0, r31, r0
    stw r0, 0x0(r30)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803A81F8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r8, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    stw r30, 0x8(r1)
    mr r30, r4
    lwz r6, lbl_8087F4F0
    cmpwi r6, 0x0
    beq lbl_fn_803A81F8_00001698
    lwz r0, 0x8(r5)
    cmpwi r0, 0x0
    bne lbl_fn_803A81F8_00001698
    lwz r8, 0x6000(r6)
lbl_fn_803A81F8_00001698:
    lwz r4, 0xc(r5)
    li r6, 0x0
    lwz r5, 0x10(r5)
    li r7, 0x0
    bl fn_8039BF04
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

asm void fn_803A8284(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    lwz r0, 0xc(r5)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    lwz r30, 0x10(r5)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r5
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    bne lbl_fn_803A8284_00001728
    li r30, 0x0
    b lbl_fn_803A8284_00001774
lbl_fn_803A8284_00001728:
    cmpwi r0, 0x2
    bne lbl_fn_803A8284_00001740
    mr r4, r30
    bl fn_80370174
    mr r30, r3
    b lbl_fn_803A8284_00001774
lbl_fn_803A8284_00001740:
    cmpwi r0, 0x1
    bne lbl_fn_803A8284_00001758
    mr r4, r30
    bl fn_80370A78
    mr r30, r3
    b lbl_fn_803A8284_00001774
lbl_fn_803A8284_00001758:
    cmpwi r0, 0x3
    bne lbl_fn_803A8284_00001774
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r3, r0, r3
    addi r30, r3, 0x1
lbl_fn_803A8284_00001774:
    lwz r4, lbl_8087F4F0
    cmpwi r4, 0x0
    beq lbl_fn_803A8284_0000181C
    lwz r0, 0x8(r28)
    cmpwi r0, 0x0
    bne lbl_fn_803A8284_0000181C
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_803A8284_00001810
    lwz r0, 0x6000(r4)
    subf. r29, r0, r30
    blt lbl_fn_803A8284_000017BC
    mr r6, r29
    li r4, 0x3
    li r5, 0x0
    li r7, 0x0
    bl fn_801092C8
    b lbl_fn_803A8284_000017D0
lbl_fn_803A8284_000017BC:
    neg r6, r29
    li r4, 0x4
    li r5, 0x0
    li r7, 0x0
    bl fn_801092C8
lbl_fn_803A8284_000017D0:
    lwz r3, lbl_8087F490
    mr r5, r29
    li r4, 0x2714
    li r6, 0x1
    bl fn_803E5E64
    lis r4, lbl_8074EF78@ha
    lfs f1, lbl_80885B30
    addi r4, r4, lbl_8074EF78@l
    addi r3, r1, 0x8
    lwz r4, 0x10(r4)
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_803A8284_00001810:
    lwz r3, lbl_8087F4F0
    mr r4, r30
    bl fn_8044D6E0
lbl_fn_803A8284_0000181C:
    lwz r0, 0x0(r28)
    lis r3, lbl_8074ED24@ha
    li r4, 0x0
    stw r4, 0x4(r31)
    slwi r0, r0, 2
    addi r3, r3, lbl_8074ED24@l
    lwzx r0, r3, r0
    add r0, r28, r0
    stw r0, 0x0(r31)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803A83FC(void)
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
    beq lbl_fn_803A83FC_0000188C
    bl fn_80373F78
lbl_fn_803A83FC_0000188C:
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

asm void fn_803A8464(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0xb8(r3)
    b fn_803A8470
}

asm void fn_803A8470(void)
{
    nofralloc
    stwu r1, -0x350(r1)
    mflr r0
    stw r0, 0x354(r1)
    addi r11, r1, 0x340
    stfd f31, 0x340(r1)
    psq_st f31, 0x348(r1), 0, 0
    bl _savegpr_25
    lwz r6, 0x10(r5)
    mr r26, r3
    lwz r0, 0x14(r5)
    mr r27, r4
    cmpwi r6, 0x0
    mr r28, r5
    li r31, 0x0
    beq lbl_fn_803A8470_0000192C
    cmpwi r6, 0x1
    beq lbl_fn_803A8470_00001958
    cmpwi r6, 0x2
    beq lbl_fn_803A8470_00001994
    cmpwi r6, 0x3
    beq lbl_fn_803A8470_000019A8
    b lbl_fn_803A8470_000019B8
lbl_fn_803A8470_0000192C:
    lwz r0, 0xdc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803A8470_00001944
    lwz r3, lbl_8087F8A0
    lwz r3, 0x48(r3)
    b lbl_fn_803A8470_00001950
lbl_fn_803A8470_00001944:
    lwz r3, lbl_8087F8A0
    li r4, 0x1
    bl fn_8011F8F4
lbl_fn_803A8470_00001950:
    mr r31, r3
    b lbl_fn_803A8470_000019B8
lbl_fn_803A8470_00001958:
    lwz r3, lbl_8087F890
    mr r4, r0
    bl fn_8011FE3C
    lwz r0, lbl_8087FA20
    mr r31, r3
    cmpwi r0, 0x0
    beq lbl_fn_803A8470_000019B8
    cmpwi r3, 0x0
    beq lbl_fn_803A8470_000019B8
    lwz r0, 0x38(r3)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_803A8470_000019B8
    li r31, 0x0
    b lbl_fn_803A8470_000019B8
lbl_fn_803A8470_00001994:
    lwz r3, lbl_8087F408
    mr r4, r0
    bl fn_8011FC10
    mr r31, r3
    b lbl_fn_803A8470_000019B8
lbl_fn_803A8470_000019A8:
    lwz r3, lbl_8087F8A0
    mr r4, r0
    bl fn_8011F91C
    mr r31, r3
lbl_fn_803A8470_000019B8:
    lwz r3, lbl_8087F4A0
    cmpwi r3, 0x0
    beq lbl_fn_803A8470_000019D8
    lwz r4, 0x18(r28)
    lwz r5, 0x1c(r28)
    bl fn_803EEE10
    mr r30, r3
    b lbl_fn_803A8470_000019DC
lbl_fn_803A8470_000019D8:
    li r30, 0x0
lbl_fn_803A8470_000019DC:
    lwz r0, 0xb8(r26)
    li r29, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_803A8470_00001A18
    cmpwi r0, 0x1
    beq lbl_fn_803A8470_00001EA8
    cmpwi r0, 0x2
    beq lbl_fn_803A8470_00001FEC
    cmpwi r0, 0x3
    beq lbl_fn_803A8470_00002290
    cmpwi r0, 0x4
    beq lbl_fn_803A8470_0000242C
    cmpwi r0, 0x5
    beq lbl_fn_803A8470_00002470
    b lbl_fn_803A8470_000024C8
lbl_fn_803A8470_00001A18:
    lwz r3, 0x20(r28)
    clrlwi r0, r3, 31
    cmplwi r0, 0x1
    beq lbl_fn_803A8470_00001A34
    rlwinm r0, r3, 0, 28, 28
    cmplwi r0, 0x8
    bne lbl_fn_803A8470_00001E60
lbl_fn_803A8470_00001A34:
    cmpwi r31, 0x0
    beq lbl_fn_803A8470_00001E60
    cmpwi r30, 0x0
    beq lbl_fn_803A8470_00001E60
    rlwinm r0, r3, 0, 27, 27
    cmplwi r0, 0x10
    bne lbl_fn_803A8470_00001A64
    lwz r4, 0x24(r28)
    mr r3, r31
    li r5, 0x0
    bl fn_8017039C
    b lbl_fn_803A8470_00001E58
lbl_fn_803A8470_00001A64:
    lfs f3, lbl_80885B10
    addi r3, r1, 0x290
    lfs f0, lbl_80885B30
    li r4, 0x79
    stfs f3, 0x140(r1)
    stfs f3, 0x144(r1)
    stfs f0, 0x148(r1)
    lfs f1, 0x7c(r30)
    bl fn_805F8E70
    addi r4, r1, 0x140
    addi r3, r1, 0x290
    mr r5, r4
    bl fn_805F93C0
    lwz r12, 0x0(r30)
    mr r3, r30
    li r4, 0x9
    lwz r12, 0x64(r12)
    mtctr r12
    bctrl
    xoris r3, r3, 0x8000
    lis r0, 0x4330
    stw r3, 0x314(r1)
    lis r4, lbl_8074F5E8@ha
    lfd f4, lbl_8074F5E8@l(r4)
    addi r3, r1, 0x260
    stw r0, 0x310(r1)
    li r4, 0x79
    lfs f0, lbl_80885B10
    lfd f3, 0x310(r1)
    stfs f0, 0x138(r1)
    fsubs f3, f3, f4
    stfs f0, 0x13c(r1)
    stfs f3, 0x134(r1)
    lfs f1, 0x7c(r30)
    bl fn_805F8E70
    addi r4, r1, 0x134
    addi r3, r1, 0x260
    mr r5, r4
    bl fn_805F93C0
    lfs f5, 0x530(r31)
    addi r3, r1, 0x128
    lfs f0, 0x74(r30)
    lfs f4, 0x528(r31)
    lfs f3, 0x6c(r30)
    fsubs f5, f5, f0
    lfs f0, lbl_80885B10
    fsubs f3, f4, f3
    stfs f5, 0x130(r1)
    stfs f3, 0x128(r1)
    stfs f0, 0x12c(r1)
    bl fn_805F9920
    fabs f3, f1
    lfs f0, lbl_80885B24
    frsp f3, f3
    fcmpo cr0, f3, f0
    blt lbl_fn_803A8470_00001B50
    addi r3, r1, 0x128
    mr r4, r3
    bl fn_805F98D0
lbl_fn_803A8470_00001B50:
    addi r3, r1, 0x140
    addi r4, r1, 0x128
    bl fn_805F9990
    lfs f0, lbl_80885B10
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    mfcr r25
    extrwi. r25, r25, 1, 2
    bne lbl_fn_803A8470_00001B94
    lfs f1, lbl_80885B3C
    addi r3, r1, 0x230
    li r4, 0x79
    bl fn_805F8E70
    addi r4, r1, 0x140
    addi r3, r1, 0x230
    mr r5, r4
    bl fn_805F93C0
lbl_fn_803A8470_00001B94:
    lwz r0, 0x8(r28)
    lfs f31, lbl_80885BB0
    cmpwi r0, 0x4
    beq lbl_fn_803A8470_00001BB0
    cmpwi r0, 0x5
    beq lbl_fn_803A8470_00001BB8
    b lbl_fn_803A8470_00001BBC
lbl_fn_803A8470_00001BB0:
    lfs f31, lbl_80885B9C
    b lbl_fn_803A8470_00001BBC
lbl_fn_803A8470_00001BB8:
    lfs f31, lbl_80885BB4
lbl_fn_803A8470_00001BBC:
    lfs f9, 0x148(r1)
    li r3, 0x0
    lfs f8, 0x144(r1)
    lfs f7, 0x140(r1)
    fmuls f10, f9, f31
    fmuls f11, f8, f31
    lfs f4, 0x74(r30)
    fmuls f12, f7, f31
    lfs f3, 0x70(r30)
    lfs f0, 0x6c(r30)
    lfs f6, lbl_80885B10
    lwz r0, 0x20(r28)
    fadds f4, f4, f10
    fadds f3, f3, f11
    lfs f5, lbl_80885B9C
    fadds f0, f0, f12
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    stfs f12, 0xf8(r1)
    stfs f11, 0xfc(r1)
    stfs f10, 0x100(r1)
    stfs f0, 0x11c(r1)
    stfs f3, 0x120(r1)
    stfs f4, 0x124(r1)
    stw r3, 0x2f4(r1)
    stw r3, 0x2f8(r1)
    stw r3, 0x2fc(r1)
    stw r3, 0x300(r1)
    stfs f6, 0x110(r1)
    stfs f5, 0x114(r1)
    stfs f6, 0x118(r1)
    bne lbl_fn_803A8470_00001D48
    lfs f0, 0x74(r30)
    addi r4, r1, 0x2c0
    lfs f4, 0x70(r30)
    addi r5, r1, 0xec
    lfs f3, 0x6c(r30)
    fadds f10, f0, f6
    lfs f0, lbl_80885B38
    fadds f11, f4, f5
    fadds f3, f3, f6
    stfs f10, 0xd0(r1)
    fmuls f4, f9, f0
    fmuls f8, f8, f0
    stfs f3, 0xc8(r1)
    fmuls f7, f7, f0
    stfs f11, 0xcc(r1)
    addi r6, r1, 0xc8
    lwz r3, lbl_8087EE98
    lfs f0, 0x74(r30)
    lis r7, 0x8000
    lfs f3, 0x70(r30)
    li r8, 0x0
    fadds f9, f0, f4
    lfs f0, 0x6c(r30)
    fadds f3, f3, f8
    stfs f7, 0xd4(r1)
    fadds f0, f0, f7
    li r9, 0x0
    fadds f7, f9, f6
    stfs f8, 0xd8(r1)
    fadds f5, f3, f5
    fadds f6, f0, f6
    stfs f4, 0xdc(r1)
    stfs f0, 0xe0(r1)
    stfs f3, 0xe4(r1)
    stfs f9, 0xe8(r1)
    stfs f6, 0xec(r1)
    stfs f5, 0xf0(r1)
    stfs f7, 0xf4(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_803A8470_00001D3C
    lfs f4, 0x148(r1)
    addi r4, r1, 0xbc
    lfs f0, 0x144(r1)
    addi r3, r1, 0x11c
    lfs f3, 0x140(r1)
    fmuls f4, f4, f31
    fmuls f5, f0, f31
    lfs f0, 0x2d8(r1)
    fmuls f6, f3, f31
    lfs f3, 0x2d4(r1)
    fadds f2, f0, f4
    lfs f0, 0x2d0(r1)
    fadds f3, f3, f5
    stfs f6, 0xb0(r1)
    fadds f0, f0, f6
    stfs f3, 0xc0(r1)
    stfs f0, 0xbc(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f5, 0xb4(r1)
    stfs f4, 0xb8(r1)
    stfs f2, 0xc4(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x124(r1)
lbl_fn_803A8470_00001D3C:
    lfs f0, 0x52c(r31)
    stfs f0, 0x120(r1)
    b lbl_fn_803A8470_00001D5C
lbl_fn_803A8470_00001D48:
    psq_l f1, 0x528(r31), 0, 0
    addi r3, r1, 0x11c
    lfs f2, 0x530(r31)
    stfs f2, 0x124(r1)
    psq_st f1, 0x0(r3), 0, 0
lbl_fn_803A8470_00001D5C:
    lfs f4, lbl_80885B10
    addi r4, r1, 0x2c0
    lfs f3, lbl_80885B38
    addi r5, r1, 0xa4
    lfs f0, lbl_80885B18
    addi r6, r1, 0x98
    lfs f7, 0x11c(r1)
    lis r7, 0x8000
    fmuls f9, f4, f0
    lfs f6, 0x134(r1)
    fmuls f10, f3, f0
    lfs f5, 0x120(r1)
    fadds f7, f7, f6
    lfs f0, 0x138(r1)
    fadds f6, f5, f0
    lfs f5, 0x124(r1)
    lfs f0, 0x13c(r1)
    fsubs f11, f7, f9
    fadds f8, f7, f4
    stfs f7, 0x11c(r1)
    fadds f0, f5, f0
    stfs f6, 0x120(r1)
    fsubs f7, f6, f10
    lwz r3, lbl_8087EE98
    fadds f5, f6, f3
    stfs f0, 0x124(r1)
    fsubs f6, f0, f9
    stfs f4, 0x110(r1)
    fadds f0, f0, f4
    li r8, 0x0
    stfs f3, 0x114(r1)
    li r9, 0x0
    stfs f4, 0x118(r1)
    stfs f9, 0x8c(r1)
    stfs f10, 0x90(r1)
    stfs f9, 0x94(r1)
    stfs f11, 0x98(r1)
    stfs f7, 0x9c(r1)
    stfs f6, 0xa0(r1)
    stfs f8, 0xa4(r1)
    stfs f5, 0xa8(r1)
    stfs f0, 0xac(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_803A8470_00001E28
    addi r4, r1, 0x2d0
    lfs f2, 0x2d8(r1)
    addi r3, r1, 0x11c
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x124(r1)
lbl_fn_803A8470_00001E28:
    cmpwi r25, 0x0
    lfs f3, 0x7c(r30)
    bne lbl_fn_803A8470_00001E3C
    lfs f0, lbl_80885B3C
    fadds f3, f3, f0
lbl_fn_803A8470_00001E3C:
    lfs f0, lbl_80885B3C
    mr r3, r31
    lfs f2, lbl_80885BB8
    addi r4, r1, 0x11c
    fadds f1, f0, f3
    li r5, 0x80
    bl fn_80170F20
lbl_fn_803A8470_00001E58:
    li r0, 0x0
    stw r0, 0xbc(r26)
lbl_fn_803A8470_00001E60:
    lwz r0, 0x20(r28)
    rlwinm r0, r0, 0, 29, 30
    cmplwi r0, 0x6
    bne lbl_fn_803A8470_00001E9C
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_803A8470_00001E84
    lwz r3, 0x48(r3)
    b lbl_fn_803A8470_00001E88
lbl_fn_803A8470_00001E84:
    li r3, 0x0
lbl_fn_803A8470_00001E88:
    cmpwi r3, 0x0
    beq lbl_fn_803A8470_00001E9C
    lwz r0, 0x54c(r3)
    ori r0, r0, 0x10
    stw r0, 0x54c(r3)
lbl_fn_803A8470_00001E9C:
    lwz r3, 0xb8(r26)
    addi r0, r3, 0x1
    stw r0, 0xb8(r26)
lbl_fn_803A8470_00001EA8:
    lwz r3, 0x20(r28)
    clrlwi r0, r3, 31
    cmplwi r0, 0x1
    beq lbl_fn_803A8470_00001EC4
    rlwinm r0, r3, 0, 28, 28
    cmplwi r0, 0x8
    bne lbl_fn_803A8470_00001FE0
lbl_fn_803A8470_00001EC4:
    cmpwi r31, 0x0
    beq lbl_fn_803A8470_00001FE0
    lwz r0, 0x105c(r31)
    cmpwi r0, 0x0
    bne lbl_fn_803A8470_00001FE0
    lwz r4, 0xbc(r26)
    addi r3, r1, 0x104
    addi r0, r4, 0x1
    stw r0, 0xbc(r26)
    lfs f3, 0x1068(r31)
    lfs f0, 0x530(r31)
    lfs f5, 0x1064(r31)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r31)
    lfs f3, 0x1060(r31)
    lfs f0, 0x528(r31)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x108(r1)
    stfs f0, 0x104(r1)
    stfs f6, 0x10c(r1)
    bl fn_805F9920
    lfs f0, lbl_80885B10
    fcmpo cr0, f0, f1
    bge lbl_fn_803A8470_00001FCC
    addi r3, r1, 0x104
    bl fn_805F9920
    lfs f0, lbl_80885BBC
    fcmpo cr0, f1, f0
    bge lbl_fn_803A8470_00001FCC
    addi r4, r1, 0x104
    lfs f2, 0x10c(r1)
    addi r3, r1, 0x68
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    mr r4, r3
    stfs f2, 0x70(r1)
    bl fn_805F98D0
    lfs f7, 0x570(r31)
    lfs f0, lbl_80885B34
    fcmpo cr0, f7, f0
    bge lbl_fn_803A8470_00001F70
    b lbl_fn_803A8470_00001F74
lbl_fn_803A8470_00001F70:
    fmr f7, f0
lbl_fn_803A8470_00001F74:
    lfs f3, 0x6c(r1)
    addi r3, r1, 0x80
    lfs f0, 0x68(r1)
    fmuls f5, f3, f7
    lfs f4, 0x70(r1)
    fmuls f6, f0, f7
    lfs f0, 0x528(r31)
    lfs f3, 0x52c(r31)
    fmuls f4, f4, f7
    fadds f7, f3, f5
    lfs f3, 0x530(r31)
    fadds f0, f0, f6
    stfs f6, 0x74(r1)
    fadds f2, f3, f4
    stfs f0, 0x80(r1)
    stfs f7, 0x84(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x528(r31), 0, 0
    stfs f5, 0x78(r1)
    stfs f4, 0x7c(r1)
    stfs f2, 0x88(r1)
    stfs f2, 0x530(r31)
lbl_fn_803A8470_00001FCC:
    lwz r0, 0xbc(r26)
    cmpwi r0, 0x5a
    blt lbl_fn_803A8470_000024C8
    mr r3, r31
    bl fn_80171DB0
lbl_fn_803A8470_00001FE0:
    lwz r3, 0xb8(r26)
    addi r0, r3, 0x1
    stw r0, 0xb8(r26)
lbl_fn_803A8470_00001FEC:
    cmpwi r31, 0x0
    beq lbl_fn_803A8470_00002284
    lwz r0, 0x8(r28)
    cmpwi r0, 0x1
    beq lbl_fn_803A8470_00002024
    cmpwi r0, 0x2
    beq lbl_fn_803A8470_00002070
    cmpwi r0, 0x3
    beq lbl_fn_803A8470_0000215C
    cmpwi r0, 0x4
    beq lbl_fn_803A8470_000021A8
    cmpwi r0, 0x5
    beq lbl_fn_803A8470_00002218
    b lbl_fn_803A8470_00002284
lbl_fn_803A8470_00002024:
    lwz r0, 0x648(r31)
    cmpwi r0, 0x0
    beq lbl_fn_803A8470_00002050
    lfs f1, lbl_80885B14
    mr r3, r31
    li r4, 0x9
    li r5, 0x0
    fmr f2, f1
    li r6, 0x0
    bl fn_80161570
    b lbl_fn_803A8470_00002284
lbl_fn_803A8470_00002050:
    lfs f1, lbl_80885B14
    mr r3, r31
    li r4, 0xa
    li r5, 0x0
    fmr f2, f1
    li r6, 0x0
    bl fn_80161570
    b lbl_fn_803A8470_00002284
lbl_fn_803A8470_00002070:
    lwz r0, 0x648(r31)
    cmpwi r0, 0x0
    beq lbl_fn_803A8470_000020EC
    lfs f3, lbl_80885B10
    addi r3, r1, 0x200
    lfs f0, lbl_80885B30
    li r4, 0x79
    stfs f3, 0x50(r1)
    stfs f3, 0x54(r1)
    stfs f0, 0x58(r1)
    lfs f1, 0x538(r31)
    bl fn_805F8E70
    addi r4, r1, 0x50
    addi r3, r1, 0x200
    mr r5, r4
    bl fn_805F93C0
    lfs f5, 0x58(r1)
    mr r3, r31
    lfs f4, lbl_80885BC0
    addi r5, r1, 0x5c
    lfs f3, 0x54(r1)
    li r4, 0xd
    lfs f0, 0x50(r1)
    fmuls f5, f5, f4
    fmuls f3, f3, f4
    fmuls f0, f0, f4
    stfs f5, 0x64(r1)
    stfs f0, 0x5c(r1)
    stfs f3, 0x60(r1)
    bl fn_80161B70
    b lbl_fn_803A8470_00002284
lbl_fn_803A8470_000020EC:
    lfs f3, lbl_80885B10
    addi r3, r1, 0x1d0
    lfs f0, lbl_80885B30
    li r4, 0x79
    stfs f3, 0x38(r1)
    stfs f3, 0x3c(r1)
    stfs f0, 0x40(r1)
    lfs f1, 0x538(r31)
    bl fn_805F8E70
    addi r4, r1, 0x38
    addi r3, r1, 0x1d0
    mr r5, r4
    bl fn_805F93C0
    lfs f5, 0x40(r1)
    mr r3, r31
    lfs f4, lbl_80885BC0
    addi r5, r1, 0x44
    lfs f3, 0x3c(r1)
    li r4, 0xe
    lfs f0, 0x38(r1)
    fmuls f5, f5, f4
    fmuls f3, f3, f4
    fmuls f0, f0, f4
    stfs f5, 0x4c(r1)
    stfs f0, 0x44(r1)
    stfs f3, 0x48(r1)
    bl fn_80161B70
    b lbl_fn_803A8470_00002284
lbl_fn_803A8470_0000215C:
    lwz r0, 0x648(r31)
    cmpwi r0, 0x0
    beq lbl_fn_803A8470_00002188
    lfs f1, lbl_80885B14
    mr r3, r31
    li r4, 0xb
    li r5, 0x0
    fmr f2, f1
    li r6, 0x0
    bl fn_80161570
    b lbl_fn_803A8470_00002284
lbl_fn_803A8470_00002188:
    lfs f1, lbl_80885B14
    mr r3, r31
    li r4, 0xc
    li r5, 0x0
    fmr f2, f1
    li r6, 0x0
    bl fn_80161570
    b lbl_fn_803A8470_00002284
lbl_fn_803A8470_000021A8:
    lfs f3, lbl_80885B10
    addi r3, r1, 0x1a0
    lfs f0, lbl_80885B30
    li r4, 0x79
    stfs f3, 0x20(r1)
    stfs f3, 0x24(r1)
    stfs f0, 0x28(r1)
    lfs f1, 0x538(r31)
    bl fn_805F8E70
    addi r4, r1, 0x20
    addi r3, r1, 0x1a0
    mr r5, r4
    bl fn_805F93C0
    lfs f5, 0x28(r1)
    mr r3, r31
    lfs f4, lbl_80885BC4
    addi r5, r1, 0x2c
    lfs f3, 0x24(r1)
    li r4, 0xf
    lfs f0, 0x20(r1)
    fmuls f5, f5, f4
    fmuls f3, f3, f4
    fmuls f0, f0, f4
    stfs f5, 0x34(r1)
    stfs f0, 0x2c(r1)
    stfs f3, 0x30(r1)
    bl fn_80161B70
    b lbl_fn_803A8470_00002284
lbl_fn_803A8470_00002218:
    lfs f3, lbl_80885B10
    addi r3, r1, 0x170
    lfs f0, lbl_80885B30
    li r4, 0x79
    stfs f3, 0x8(r1)
    stfs f3, 0xc(r1)
    stfs f0, 0x10(r1)
    lfs f1, 0x538(r31)
    bl fn_805F8E70
    addi r4, r1, 0x8
    addi r3, r1, 0x170
    mr r5, r4
    bl fn_805F93C0
    lfs f5, 0x10(r1)
    mr r3, r31
    lfs f4, lbl_80885B10
    addi r5, r1, 0x14
    lfs f3, 0xc(r1)
    li r4, 0x10
    lfs f0, 0x8(r1)
    fmuls f5, f5, f4
    fmuls f3, f3, f4
    fmuls f0, f0, f4
    stfs f5, 0x1c(r1)
    stfs f0, 0x14(r1)
    stfs f3, 0x18(r1)
    bl fn_80161B70
lbl_fn_803A8470_00002284:
    lwz r3, 0xb8(r26)
    addi r0, r3, 0x1
    stw r0, 0xb8(r26)
lbl_fn_803A8470_00002290:
    cmpwi r31, 0x0
    li r4, 0x0
    beq lbl_fn_803A8470_00002360
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x6
    bne lbl_fn_803A8470_00002360
    lwz r0, 0x560(r31)
    cmpwi r0, 0x27
    bne lbl_fn_803A8470_00002360
    lwz r3, 0x8(r28)
    subi r0, r3, 0x4
    cmplwi r0, 0x1
    ble lbl_fn_803A8470_00002344
    cmpwi r3, 0x0
    beq lbl_fn_803A8470_000022E8
    cmpwi r3, 0x1
    beq lbl_fn_803A8470_000022F0
    cmpwi r3, 0x2
    beq lbl_fn_803A8470_0000230C
    cmpwi r3, 0x3
    beq lbl_fn_803A8470_00002328
    b lbl_fn_803A8470_00002364
lbl_fn_803A8470_000022E8:
    li r4, 0x1
    b lbl_fn_803A8470_00002364
lbl_fn_803A8470_000022F0:
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_80885BC8
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_803A8470_00002364
    li r4, 0x1
    b lbl_fn_803A8470_00002364
lbl_fn_803A8470_0000230C:
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_80885BCC
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_803A8470_00002364
    li r4, 0x1
    b lbl_fn_803A8470_00002364
lbl_fn_803A8470_00002328:
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_80885BCC
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_803A8470_00002364
    li r4, 0x1
    b lbl_fn_803A8470_00002364
lbl_fn_803A8470_00002344:
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_80885B9C
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_803A8470_00002364
    li r4, 0x1
    b lbl_fn_803A8470_00002364
lbl_fn_803A8470_00002360:
    li r4, 0x1
lbl_fn_803A8470_00002364:
    cmpwi r4, 0x0
    beq lbl_fn_803A8470_000024C8
    cmpwi r30, 0x0
    beq lbl_fn_803A8470_00002420
    lwz r3, 0xc(r28)
    cmpwi r3, 0x2
    beq lbl_fn_803A8470_00002420
    lfs f0, lbl_80885B10
    li r0, 0x0
    stw r0, 0x150(r1)
    stw r0, 0x154(r1)
    stw r0, 0x158(r1)
    stw r0, 0x15c(r1)
    stw r0, 0x160(r1)
    stfs f0, 0x164(r1)
    stfs f0, 0x168(r1)
    stfs f0, 0x16c(r1)
    lwz r0, 0x50(r30)
    cmpwi r0, 0x2
    bne lbl_fn_803A8470_000023D0
    cmpwi r3, 0x1
    li r0, 0x3
    stw r0, 0x150(r1)
    bne lbl_fn_803A8470_00002408
    li r0, 0x4
    stw r0, 0x150(r1)
    b lbl_fn_803A8470_00002408
lbl_fn_803A8470_000023D0:
    cmpwi r0, 0x1c
    bne lbl_fn_803A8470_00002400
    li r0, 0x3
    stw r0, 0x150(r1)
    lwz r0, 0x48(r30)
    cmpwi r0, 0x6db5
    beq lbl_fn_803A8470_000023F4
    cmpwi r0, 0x6db7
    bne lbl_fn_803A8470_00002408
lbl_fn_803A8470_000023F4:
    li r0, 0x2
    stw r0, 0x150(r1)
    b lbl_fn_803A8470_00002408
lbl_fn_803A8470_00002400:
    li r0, 0x3
    stw r0, 0x150(r1)
lbl_fn_803A8470_00002408:
    lwz r12, 0x0(r30)
    mr r3, r30
    addi r4, r1, 0x150
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
lbl_fn_803A8470_00002420:
    lwz r3, 0xb8(r26)
    addi r0, r3, 0x1
    stw r0, 0xb8(r26)
lbl_fn_803A8470_0000242C:
    cmpwi r31, 0x0
    beq lbl_fn_803A8470_00002464
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x6
    bne lbl_fn_803A8470_00002464
    lwz r0, 0x560(r31)
    cmpwi r0, 0x27
    bne lbl_fn_803A8470_00002464
    lfs f31, 0x2e4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    blt lbl_fn_803A8470_000024C8
lbl_fn_803A8470_00002464:
    lwz r3, 0xb8(r26)
    addi r0, r3, 0x1
    stw r0, 0xb8(r26)
lbl_fn_803A8470_00002470:
    lwz r0, 0x20(r28)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_803A8470_000024C4
    lwz r0, 0xc(r28)
    cmpwi r0, 0x2
    beq lbl_fn_803A8470_000024C4
    cmpwi r30, 0x0
    beq lbl_fn_803A8470_000024BC
    lwz r12, 0x0(r30)
    mr r3, r30
    li r4, 0x0
    lwz r12, 0x64(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    ble lbl_fn_803A8470_000024C8
    li r29, 0x0
    b lbl_fn_803A8470_000024C8
lbl_fn_803A8470_000024BC:
    li r29, 0x0
    b lbl_fn_803A8470_000024C8
lbl_fn_803A8470_000024C4:
    li r29, 0x0
lbl_fn_803A8470_000024C8:
    cmpwi r29, 0x0
    bne lbl_fn_803A8470_0000250C
    lwz r0, 0x20(r28)
    rlwinm r0, r0, 0, 29, 30
    cmplwi r0, 0x6
    bne lbl_fn_803A8470_0000250C
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_803A8470_000024F4
    lwz r3, 0x48(r3)
    b lbl_fn_803A8470_000024F8
lbl_fn_803A8470_000024F4:
    li r3, 0x0
lbl_fn_803A8470_000024F8:
    cmpwi r3, 0x0
    beq lbl_fn_803A8470_0000250C
    lwz r0, 0x54c(r3)
    rlwinm r0, r0, 0, 28, 26
    stw r0, 0x54c(r3)
lbl_fn_803A8470_0000250C:
    lwz r0, 0x0(r28)
    lis r3, lbl_8074ED24@ha
    addi r3, r3, lbl_8074ED24@l
    stw r29, 0x4(r27)
    slwi r0, r0, 2
    lwzx r0, r3, r0
    add r0, r28, r0
    stw r0, 0x0(r27)
    psq_l f31, 0x348(r1), 0, 0
    lfd f31, 0x340(r1)
    addi r11, r1, 0x340
    bl _restgpr_25
    lwz r0, 0x354(r1)
    mtlr r0
    addi r1, r1, 0x350
    blr
}
