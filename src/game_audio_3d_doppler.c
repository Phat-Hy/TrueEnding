#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void fn_8000D124(void);
extern void fn_8000DD0C(void);
extern void fn_8001047C(void);
extern void fn_80011034(void);
extern void fn_80011220(void);
extern void fn_80013338(void);
extern void fn_8004D388(void);
extern void fn_80057A64(void);
extern void fn_80057A68(void);
extern void fn_80063484(void);
extern void fn_8008CD1C(void);
extern void fn_80097C08(void);
extern void fn_800EB7A0(void);
extern void fn_800EC1F4(void);
extern void fn_800F8548(void);
extern void fn_80103F60(void);
extern void fn_801079C0(void);
extern void fn_80107A68(void);
extern void fn_80108378(void);
extern void fn_801125F8(void);
extern void fn_8011BF3C(void);
extern void fn_80126214(void);
extern void fn_80129978(void);
extern void fn_80129A48(void);
extern void fn_80133130(void);
extern void fn_8013322C(void);
extern void fn_80133EE8(void);
extern void fn_8013A194(void);
extern void fn_8013A258(void);
extern void fn_80145334(void);
extern void fn_801495E8(void);
extern void fn_80149624(void);
extern void fn_80149A30(void);
extern void fn_8014C540(void);
extern void fn_80151448(void);
extern void fn_8015495C(void);
extern void fn_8015B238(void);
extern void fn_8015E4B0(void);
extern void fn_8016D454(void);
extern void fn_8016DA4C(void);
extern void fn_8016E970(void);
extern void fn_8016EB48(void);
extern void fn_80176548(void);
extern void fn_80178A6C(void);
extern void fn_802657FC(void);
extern void fn_80266154(void);
extern void fn_802A4094(void);
extern void fn_803267E8(void);
extern void fn_80326F0C(void);
extern void fn_80327018(void);
extern void fn_80327118(void);
extern void fn_803271A4(void);
extern void fn_80327E1C(void);
extern void fn_80327E78(void);
extern void fn_80327EF0(void);
extern void fn_80328270(void);
extern void fn_8032853C(void);
extern void fn_803288C4(void);
extern void fn_803289EC(void);
extern void fn_80328B74(void);
extern void fn_80328C6C(void);
extern void fn_8032932C(void);
extern void fn_8032943C(void);
extern void fn_80329744(void);
extern void fn_80329A20(void);
extern void fn_80329C7C(void);
extern void fn_80329CFC(void);
extern void fn_80329D7C(void);
extern void fn_80329ED8(void);
extern void fn_8032A650(void);
extern void fn_8032A894(void);
extern void fn_8032C3CC(void);
extern void fn_8036554C(void);
extern void fn_80370AE4(void);
extern void fn_805F8E70(void);
extern void fn_805F90D0(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_80680CF8(void);
extern void fn_80682428(void);
extern void fn_8068A850(void);
extern void fn_8068AD58(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);
extern void fn_80695B00(void);

/* External data declarations */
extern u8 jumptable_80788B58[];
extern u8 lbl_80749B78[];
extern u8 lbl_80749B80[];
extern u8 lbl_80749D10[];
extern u8 lbl_80788BC0[];
extern u8 lbl_80788BC8[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F428;
extern u32 lbl_8087F430;
extern u32 lbl_80884F10;
extern u32 lbl_80884F14;
extern u32 lbl_80884F18;
extern u32 lbl_80884F1C;
extern u32 lbl_80884F20;
extern u32 lbl_80884F28;
extern u32 lbl_80884F2C;
extern u32 lbl_80884F30;
extern u32 lbl_80884F34;
extern u32 lbl_80884F38;
extern u32 lbl_80884F3C;
extern u32 lbl_80884F40;
extern u32 lbl_80884F44;
extern u32 lbl_80884F48;
extern u32 lbl_80884F4C;
extern u32 lbl_80884F50;
extern u32 lbl_80884F54;
extern u32 lbl_80884F58;
extern u32 lbl_80884F5C;
extern u32 lbl_80884F60;
extern u32 lbl_80884F64;
extern u32 lbl_80884F68;
extern u32 lbl_80884F6C;
extern u32 lbl_80884F70;
extern u32 lbl_80884F74;
extern u32 lbl_80884F78;
extern u32 lbl_80884F7C;
extern u32 lbl_80884F80;
extern u32 lbl_80884F84;
extern u32 lbl_80884F88;
extern u32 lbl_80884F8C;
extern u32 lbl_80884F90;
extern u32 lbl_80884F94;
extern u32 lbl_80884F98;
extern u32 lbl_80884F9C;
extern u32 lbl_80884FA0;
extern u32 lbl_80884FA4;
extern u32 lbl_80884FA8;
extern u32 lbl_80884FAC;
extern u32 lbl_80884FB0;
extern u32 lbl_80884FB4;

/* Function declarations */
void fn_803234C8(void);
void fn_803234F4(void);
void fn_803235AC(void);
void fn_803235D8(void);
void fn_80323690(void);
void fn_80323C18(void);
void fn_80323C2C(void);
void fn_80323C34(void);
void fn_80323C6C(void);
void fn_80323CDC(void);
void fn_80323E50(void);
void fn_8032418C(void);
void fn_803241E8(void);
void fn_80324A38(void);

asm void fn_803234C8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    mr r12, r3
    stw r0, 0x14(r1)
    lwz r3, 0xc(r3)
    bl fn_80695B00
    nop
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803234F4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r5, 0x3
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bne lbl_fn_803234F4_00000060
    lis r3, lbl_80788BC0@ha
    addi r3, r3, lbl_80788BC0@l
    stw r3, 0x0(r4)
    b lbl_fn_803234F4_000000CC
lbl_fn_803234F4_00000060:
    cmpwi r5, 0x0
    bne lbl_fn_803234F4_00000094
    cmpwi r4, 0x0
    beq lbl_fn_803234F4_000000CC
    lwz r5, 0x0(r3)
    lwz r0, 0x4(r3)
    stw r0, 0x4(r4)
    stw r5, 0x0(r4)
    lwz r0, 0x8(r3)
    stw r0, 0x8(r4)
    lwz r0, 0xc(r3)
    stw r0, 0xc(r4)
    b lbl_fn_803234F4_000000CC
lbl_fn_803234F4_00000094:
    cmpwi r5, 0x1
    beq lbl_fn_803234F4_000000CC
    lwz r5, 0x0(r4)
    lis r3, lbl_80788BC0@ha
    lwz r4, lbl_80788BC0@l(r3)
    lwz r3, 0x0(r5)
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_803234F4_000000C4
    stw r30, 0x0(r31)
    b lbl_fn_803234F4_000000CC
lbl_fn_803234F4_000000C4:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_803234F4_000000CC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803235AC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    mr r12, r3
    stw r0, 0x14(r1)
    lwz r3, 0xc(r3)
    bl fn_80695B00
    nop
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803235D8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r5, 0x3
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bne lbl_fn_803235D8_00000144
    lis r3, lbl_80788BC8@ha
    addi r3, r3, lbl_80788BC8@l
    stw r3, 0x0(r4)
    b lbl_fn_803235D8_000001B0
lbl_fn_803235D8_00000144:
    cmpwi r5, 0x0
    bne lbl_fn_803235D8_00000178
    cmpwi r4, 0x0
    beq lbl_fn_803235D8_000001B0
    lwz r5, 0x0(r3)
    lwz r0, 0x4(r3)
    stw r0, 0x4(r4)
    stw r5, 0x0(r4)
    lwz r0, 0x8(r3)
    stw r0, 0x8(r4)
    lwz r0, 0xc(r3)
    stw r0, 0xc(r4)
    b lbl_fn_803235D8_000001B0
lbl_fn_803235D8_00000178:
    cmpwi r5, 0x1
    beq lbl_fn_803235D8_000001B0
    lwz r5, 0x0(r4)
    lis r3, lbl_80788BC8@ha
    lwz r4, lbl_80788BC8@l(r3)
    lwz r3, 0x0(r5)
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_803235D8_000001A8
    stw r30, 0x0(r31)
    b lbl_fn_803235D8_000001B0
lbl_fn_803235D8_000001A8:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_803235D8_000001B0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80323690(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    stw r0, 0xd4(r1)
    stfd f31, 0xc0(r1)
    psq_st f31, 0xc8(r1), 0, 0
    stfd f30, 0xb0(r1)
    psq_st f30, 0xb8(r1), 0, 0
    stw r31, 0xac(r1)
    stw r30, 0xa8(r1)
    mr r30, r3
    addi r4, r30, 0x528
    stw r29, 0xa4(r1)
    stw r28, 0xa0(r1)
    lwz r5, 0x14c8(r3)
    lwz r0, 0xd1c(r3)
    addi r5, r5, 0x1
    stw r5, 0x14c8(r3)
    stw r0, 0x14bc(r3)
    addi r3, r1, 0x58
    bl fn_8001047C
    addi r3, r1, 0x4c
    addi r4, r30, 0x534
    bl fn_8001047C
    mr r3, r30
    bl fn_80323C18
    lwz r0, 0xd18(r30)
    mr r31, r3
    li r3, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_80323690_0000024C
    lwz r0, 0xd1c(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80323690_00000250
lbl_fn_80323690_0000024C:
    li r3, 0x0
lbl_fn_80323690_00000250:
    cmpwi r3, 0x0
    bne lbl_fn_80323690_00000274
    mr r3, r30
    li r4, 0x3
    bl fn_8016E970
    mr r3, r30
    li r4, 0x6
    bl fn_802657FC
    b lbl_fn_80323690_000005D4
lbl_fn_80323690_00000274:
    lwz r0, 0x14cc(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80323690_00000428
    lwz r3, 0x58c(r30)
    subi r0, r3, 0x9
    cmplwi r0, 0x2
    ble lbl_fn_80323690_00000428
    subi r0, r3, 0x14
    cmplwi r0, 0x1
    ble lbl_fn_80323690_00000428
    mr r3, r30
    bl fn_80323C18
    cmpwi r3, 0x0
    bne lbl_fn_80323690_00000428
    li r29, 0x0
    stw r29, 0xc(r1)
    addi r3, r1, 0x40
    bl fn_80057A64
    mr r3, r30
    addi r4, r1, 0xc
    addi r5, r1, 0x40
    addi r6, r1, 0x8
    bl fn_80329ED8
    cmpwi r3, 0x0
    beq lbl_fn_80323690_00000428
    lwz r3, 0x14d0(r30)
    addi r0, r3, 0x1
    stw r0, 0x14d0(r30)
    cmpwi r0, 0x8
    blt lbl_fn_80323690_000003A0
    mr r4, r30
    addi r3, r1, 0x28
    addi r5, r30, 0x14fc
    li r6, 0x0
    li r7, 0x1
    bl fn_8032A650
    addi r3, r30, 0x14dc
    addi r4, r1, 0x28
    bl fn_8000D124
    lwz r5, 0x14fc(r30)
    mr r4, r30
    addi r3, r1, 0x34
    li r6, 0x0
    bl fn_8032A894
    addi r3, r1, 0x10
    addi r4, r1, 0x34
    addi r5, r30, 0x14dc
    bl fn_80013338
    addi r3, r1, 0x1c
    addi r4, r1, 0x10
    bl fn_80011034
    addi r3, r30, 0x14e8
    addi r4, r1, 0x1c
    bl fn_8000D124
    li r0, 0x1
    stw r0, 0x14cc(r30)
    bl fn_80680CF8
    lis r4, 0x5555
    lwz r5, 0x14fc(r30)
    addi r0, r4, 0x5556
    mulhw r6, r0, r3
    addi r4, r30, 0x14f8
    srwi r0, r6, 31
    add r0, r6, r0
    mulli r0, r0, 0x3
    subf r6, r0, r3
    mr r3, r30
    addi r0, r6, 0x4
    stw r0, 0x14f8(r30)
    bl fn_8032C3CC
    stw r29, 0x14d0(r30)
    bl fn_8013A194
    bl fn_800F8548
    stw r3, 0x15f8(r30)
    b lbl_fn_80323690_000003C0
lbl_fn_80323690_000003A0:
    addi r3, r30, 0x14dc
    addi r4, r1, 0x40
    bl fn_8000D124
    lfs f1, lbl_80884F10
    addi r3, r30, 0x14e8
    lfs f2, 0x8(r1)
    fmr f3, f1
    bl fn_80057A68
lbl_fn_80323690_000003C0:
    lwz r0, 0x15d4(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80323690_000003E0
    mr r3, r30
    bl fn_80326F0C
    li r0, 0x0
    stw r0, 0x15d4(r30)
    b lbl_fn_80323690_00000428
lbl_fn_80323690_000003E0:
    lwz r0, 0x15d8(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80323690_00000400
    mr r3, r30
    bl fn_80327018
    li r0, 0x0
    stw r0, 0x15d8(r30)
    b lbl_fn_80323690_00000428
lbl_fn_80323690_00000400:
    lwz r0, 0x15dc(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80323690_00000420
    mr r3, r30
    bl fn_80327118
    li r0, 0x0
    stw r0, 0x15dc(r30)
    b lbl_fn_80323690_00000428
lbl_fn_80323690_00000420:
    mr r3, r30
    bl fn_803271A4
lbl_fn_80323690_00000428:
    lwz r0, 0x14bc(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80323690_000005D4
    lwz r0, 0x58c(r30)
    cmplwi r0, 0x15
    bgt lbl_fn_80323690_00000524
    lis r3, jumptable_80788B58@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_80788B58@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    mr r3, r30
    bl fn_80327E78
    b lbl_fn_80323690_0000054C
    mr r3, r30
    bl fn_80327EF0
    b lbl_fn_80323690_0000054C
    mr r3, r30
    bl fn_80328270
    b lbl_fn_80323690_0000054C
    mr r3, r30
    bl fn_8032853C
    b lbl_fn_80323690_0000054C
    mr r3, r30
    bl fn_803288C4
    b lbl_fn_80323690_0000054C
    mr r3, r30
    bl fn_803289EC
    b lbl_fn_80323690_0000054C
    mr r3, r30
    bl fn_80328B74
    b lbl_fn_80323690_0000054C
    mr r3, r30
    bl fn_80328C6C
    b lbl_fn_80323690_0000054C
    mr r3, r30
    bl fn_8032932C
    b lbl_fn_80323690_0000054C
    mr r3, r30
    bl fn_8032943C
    b lbl_fn_80323690_0000054C
    mr r3, r30
    bl fn_80329744
    b lbl_fn_80323690_0000054C
    mr r3, r30
    bl fn_80329A20
    b lbl_fn_80323690_0000054C
    mr r3, r30
    bl fn_80329CFC
    b lbl_fn_80323690_0000054C
    mr r3, r30
    bl fn_80329C7C
    b lbl_fn_80323690_0000054C
    mr r3, r30
    bl fn_80329D7C
    b lbl_fn_80323690_0000054C
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0xec(r12)
    mtctr r12
    bctrl
    b lbl_fn_80323690_0000054C
lbl_fn_80323690_00000524:
    lwz r0, 0x55c(r30)
    cmpwi r0, 0x6
    beq lbl_fn_80323690_00000538
    mr r3, r30
    bl fn_803267E8
lbl_fn_80323690_00000538:
    lwz r0, 0x58c(r30)
    cmpwi r0, 0x6
    bne lbl_fn_80323690_0000054C
    mr r3, r30
    bl fn_80327E1C
lbl_fn_80323690_0000054C:
    lwz r4, 0x58c(r30)
    lwz r3, 0x12a4(r30)
    subi r0, r4, 0x8
    cmplwi r0, 0x7
    rlwinm r3, r3, 0, 8, 6
    stw r3, 0x12a4(r30)
    ble lbl_fn_80323690_0000057C
    subi r0, r4, 0x14
    cmplwi r0, 0x1
    ble lbl_fn_80323690_0000057C
    cmpwi r4, 0x2
    bne lbl_fn_80323690_0000058C
lbl_fn_80323690_0000057C:
    lfs f1, lbl_80884F28
    addi r3, r30, 0x10d8
    bl fn_80129A48
    b lbl_fn_80323690_000005B8
lbl_fn_80323690_0000058C:
    lwz r3, 0x14bc(r30)
    bl fn_8000DD0C
    lis r5, lbl_80749D10@ha
    lis r6, lbl_807C7030@ha
    addi r5, r5, lbl_80749D10@l
    lfs f1, lbl_80884F28
    mr r4, r3
    addi r3, r30, 0x10d8
    addi r5, r5, 0x16
    addi r6, r6, lbl_807C7030@l
    bl fn_80129978
lbl_fn_80323690_000005B8:
    lwz r5, 0x58c(r30)
    mr r3, r30
    subfic r4, r5, 0x14
    subi r0, r5, 0x14
    or r0, r4, r0
    srwi r4, r0, 31
    bl fn_800EC1F4
lbl_fn_80323690_000005D4:
    bl fn_80323C2C
    bl fn_8036554C
    lfs f31, lbl_80884F1C
    mr r29, r3
    lfs f30, lbl_80884F10
    b lbl_fn_80323690_0000064C
lbl_fn_80323690_000005EC:
    bl fn_8013A194
    mr r4, r29
    bl fn_80103F60
    cmpwi r3, 0x0
    mr r28, r3
    beq lbl_fn_80323690_00000640
    mr r4, r30
    bl fn_80108378
    cmpwi r3, 0x0
    blt lbl_fn_80323690_00000640
    lwz r4, 0x14cc(r30)
    subi r0, r4, 0x1
    cmplwi r0, 0x1
    bgt lbl_fn_80323690_00000634
    slwi r0, r3, 2
    add r3, r28, r0
    stfs f30, 0x128(r3)
    b lbl_fn_80323690_00000640
lbl_fn_80323690_00000634:
    slwi r0, r3, 2
    add r3, r28, r0
    stfs f31, 0x128(r3)
lbl_fn_80323690_00000640:
    mr r3, r29
    bl fn_802A4094
    mr r29, r3
lbl_fn_80323690_0000064C:
    cmpwi r29, 0x0
    bne lbl_fn_80323690_000005EC
    lfs f2, 0x14b4(r30)
    lfs f1, lbl_80884F18
    lfs f0, 0x538(r30)
    fmuls f3, f2, f1
    lfs f1, lbl_80884F2C
    stfs f3, 0x14b4(r30)
    lfs f2, 0x50(r1)
    fadds f2, f2, f3
    fsubs f30, f2, f0
    bl fn_801125F8
    fmr f31, f1
    fmr f1, f30
    bl fn_80011220
    fcmpo cr0, f1, f31
    ble lbl_fn_80323690_000006A0
    fmr f1, f30
    bl fn_80011220
    fdivs f0, f30, f1
    fmuls f30, f31, f0
lbl_fn_80323690_000006A0:
    stfs f30, 0x14b4(r30)
    mr r3, r30
    bl fn_8014C540
    mr r3, r30
    bl fn_80145334
    lwz r3, 0x15ec(r30)
    cmpwi r31, 0x0
    subi r0, r3, 0x1
    stw r0, 0x15ec(r30)
    beq lbl_fn_80323690_000006E0
    mr r3, r30
    bl fn_80323C18
    cmpwi r3, 0x0
    bne lbl_fn_80323690_000006E0
    li r0, 0x1
    stw r0, 0x15d4(r30)
lbl_fn_80323690_000006E0:
    lfs f1, lbl_80884F10
    addi r3, r1, 0x68
    lfs f3, lbl_80884F30
    fmr f2, f1
    bl fn_80323C34
    addi r3, r30, 0x159c
    addi r4, r1, 0x68
    bl fn_8008CD1C
    lfs f1, lbl_80884F34
    addi r3, r30, 0x159c
    bl fn_80149624
    addi r3, r30, 0xb0
    bl fn_80266154
    mr r4, r3
    addi r3, r30, 0x159c
    bl fn_801495E8
    lwz r0, 0xd4(r1)
    psq_l f31, 0xc8(r1), 0, 0
    lfd f31, 0xc0(r1)
    psq_l f30, 0xb8(r1), 0, 0
    lfd f30, 0xb0(r1)
    lwz r31, 0xac(r1)
    lwz r30, 0xa8(r1)
    lwz r29, 0xa4(r1)
    lwz r28, 0xa0(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

asm void fn_80323C18(void)
{
    nofralloc
    lwz r3, 0x15ec(r3)
    neg r0, r3
    andc r0, r0, r3
    srwi r3, r0, 31
    blr
}

asm void fn_80323C2C(void)
{
    nofralloc
    lwz r3, lbl_8087F428
    blr
}

asm void fn_80323C34(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stfs f1, 0x8(r1)
    frsp f1, f1
    stfs f2, 0xc(r1)
    frsp f2, f2
    stfs f3, 0x10(r1)
    frsp f3, f3
    stw r0, 0x24(r1)
    bl fn_805F90D0
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80323C6C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80149A30
    lwz r3, lbl_8087F0A8
    lwz r0, 0x34(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80323C6C_00000800
    lfs f1, lbl_80884F44
    li r4, 0x14
    lfs f0, 0x52c(r31)
    lis r5, 0xffff
    lwz r3, lbl_8087EEB0
    fadds f2, f1, f0
    lfs f1, 0x528(r31)
    lfs f3, 0x530(r31)
    lfs f4, 0x538(r31)
    lfs f5, lbl_80884F10
    lfs f6, lbl_80884F48
    lfs f7, lbl_80884F3C
    bl fn_80063484
lbl_fn_80323C6C_00000800:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80323CDC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r5, 0x8(r4)
    lwz r0, 0x4(r5)
    cmpwi r0, 0x2710
    bne lbl_fn_80323CDC_00000860
    bl fn_80151448
    lwz r12, 0x0(r30)
    mr r3, r30
    mr r4, r31
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    b lbl_fn_80323CDC_00000970
lbl_fn_80323CDC_00000860:
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x9
    beq lbl_fn_80323CDC_00000894
    cmpwi r0, 0xa
    beq lbl_fn_80323CDC_00000894
    cmpwi r0, 0x13
    beq lbl_fn_80323CDC_00000894
    cmpwi r0, 0x11
    beq lbl_fn_80323CDC_00000894
    cmpwi r0, 0x10
    beq lbl_fn_80323CDC_00000894
    cmpwi r0, 0x14
    bne lbl_fn_80323CDC_000008BC
lbl_fn_80323CDC_00000894:
    lfs f2, 0x10(r4)
    lfs f3, lbl_80884F10
    lfs f1, 0x14(r4)
    lfs f0, 0x18(r4)
    fmuls f2, f2, f3
    fmuls f1, f1, f3
    fmuls f0, f0, f3
    stfs f2, 0x10(r4)
    stfs f1, 0x14(r4)
    stfs f0, 0x18(r4)
lbl_fn_80323CDC_000008BC:
    lwz r5, 0x8(r4)
    lwz r0, 0x4(r5)
    cmpwi r0, 0xd0
    bne lbl_fn_80323CDC_000008F4
    mr r3, r30
    mr r4, r31
    bl fn_80151448
    lwz r12, 0x0(r30)
    mr r3, r30
    mr r4, r31
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    b lbl_fn_80323CDC_00000970
lbl_fn_80323CDC_000008F4:
    lfs f2, 0x10(r4)
    lfs f3, lbl_80884F10
    lfs f1, 0x14(r4)
    lfs f0, 0x18(r4)
    fmuls f2, f2, f3
    fmuls f1, f1, f3
    fmuls f0, f0, f3
    stfs f2, 0x10(r4)
    stfs f1, 0x14(r4)
    stfs f0, 0x18(r4)
    lwz r0, 0x58c(r3)
    cmpwi r0, 0xb
    bne lbl_fn_80323CDC_0000094C
    lwz r0, 0x90(r5)
    rlwinm r0, r0, 0, 17, 17
    cmplwi r0, 0x4000
    bne lbl_fn_80323CDC_0000094C
    li r3, 0x0
    li r0, 0x1
    stw r3, 0x68(r4)
    stw r0, 0x90(r4)
    b lbl_fn_80323CDC_00000970
lbl_fn_80323CDC_0000094C:
    mr r3, r30
    mr r4, r31
    bl fn_80151448
    lwz r12, 0x0(r30)
    mr r3, r30
    mr r4, r31
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
lbl_fn_80323CDC_00000970:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80323E50(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x11
    bne lbl_fn_80323E50_000009E0
    lwz r0, 0x7e0(r3)
    lwz r4, 0x15cc(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    addi r0, r4, 0x1
    stw r0, 0x15cc(r3)
    beq lbl_fn_80323E50_000009D8
    cmpwi r0, 0x3
    ble lbl_fn_80323E50_00000A28
lbl_fn_80323E50_000009D8:
    li r5, 0x1
    b lbl_fn_80323E50_00000A28
lbl_fn_80323E50_000009E0:
    cmpwi r0, 0x14
    bne lbl_fn_80323E50_000009F8
    lwz r4, 0x15f4(r3)
    addi r0, r4, 0x1
    stw r0, 0x15f4(r3)
    b lbl_fn_80323E50_00000A28
lbl_fn_80323E50_000009F8:
    lwz r0, 0x15ec(r3)
    cmpwi r0, 0x0
    ble lbl_fn_80323E50_00000A28
    lwz r4, 0x15f0(r3)
    addi r0, r4, 0x1
    stw r0, 0x15f0(r3)
    cmpwi r0, 0x5
    ble lbl_fn_80323E50_00000A28
    li r4, 0x1
    li r0, 0x0
    stw r4, 0x15dc(r3)
    stw r0, 0x15f0(r3)
lbl_fn_80323E50_00000A28:
    cmpwi r5, 0x0
    beq lbl_fn_80323E50_00000A6C
    lwz r3, 0x1598(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80323E50_00000A48
    bl fn_8015B238
    li r0, 0x0
    stw r0, 0x1598(r30)
lbl_fn_80323E50_00000A48:
    lwz r0, 0x58c(r30)
    cmpwi r0, 0x9
    beq lbl_fn_80323E50_00000A6C
    cmpwi r0, 0xa
    beq lbl_fn_80323E50_00000A6C
    cmpwi r0, 0x13
    beq lbl_fn_80323E50_00000A6C
    li r0, 0x6
    stw r0, 0x58c(r30)
lbl_fn_80323E50_00000A6C:
    lwz r0, 0x58c(r30)
    cmpwi r0, 0x12
    bne lbl_fn_80323E50_00000A8C
    lwz r0, 0x55c(r30)
    cmpwi r0, 0x6
    bne lbl_fn_80323E50_00000A8C
    li r0, 0x6
    stw r0, 0x58c(r30)
lbl_fn_80323E50_00000A8C:
    lwz r0, 0x55c(r30)
    cmpwi r0, 0x6
    bne lbl_fn_80323E50_00000AB4
    lwz r0, 0x560(r30)
    cmpwi r0, 0x17
    bne lbl_fn_80323E50_00000AB4
    mr r3, r30
    addi r4, r30, 0x6b8
    li r5, -0x1
    bl fn_8015E4B0
lbl_fn_80323E50_00000AB4:
    lwz r3, 0x8(r31)
    lwz r0, 0x90(r3)
    rlwinm r3, r0, 0, 7, 7
    subis r0, r3, 0x100
    cmplwi r0, 0x0
    bne lbl_fn_80323E50_00000AEC
    addi r3, r30, 0x7d4
    li r4, 0x4000
    li r5, 0xa
    li r6, 0x0
    bl fn_80133130
    addi r3, r30, 0x7d4
    lis r4, 0x100
    bl fn_8013322C
lbl_fn_80323E50_00000AEC:
    lwz r0, 0x7e0(r30)
    rlwinm r0, r0, 0, 17, 17
    cmplwi r0, 0x4000
    bne lbl_fn_80323E50_00000BE4
    lwz r3, 0x8(r31)
    lwz r3, 0x90(r3)
    rlwinm r0, r3, 0, 17, 17
    cmplwi r0, 0x4000
    beq lbl_fn_80323E50_00000B40
    rlwinm r3, r3, 0, 7, 7
    subis r0, r3, 0x100
    cmplwi r0, 0x0
    beq lbl_fn_80323E50_00000B40
    lwz r3, 0x0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80323E50_00000BE4
    addi r3, r3, 0x7d4
    li r4, 0x18
    bl fn_80133EE8
    cmpwi r3, 0x0
    beq lbl_fn_80323E50_00000BE4
lbl_fn_80323E50_00000B40:
    li r31, 0x0
    stw r31, 0x14c4(r30)
    stw r31, 0x14c8(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    li r0, 0x14
    mr r3, r30
    li r4, 0x3
    stw r0, 0x58c(r30)
    bl fn_8016E970
    addi r3, r30, 0x7d4
    li r4, 0x4000
    bl fn_8013322C
    lfs f2, lbl_80884F1C
    li r0, 0x1
    lfs f0, lbl_80884F4C
    addi r3, r30, 0xb0
    stfs f2, 0x2fc(r30)
    li r4, 0x0
    lfs f1, lbl_80884F10
    li r5, 0x2e
    stw r0, 0x3fc(r30)
    li r6, 0x0
    lfs f2, lbl_80884F50
    li r7, 0x0
    stfs f0, 0x2e8(r30)
    li r8, 0x1
    bl fn_80097C08
    stw r31, 0x15f4(r30)
    addi r4, r30, 0xb0
    lwz r3, lbl_8087F048
    bl fn_80107A68
    addi r4, r30, 0xb0
    lwz r3, lbl_8087F048
    mr r5, r4
    bl fn_801079C0
    lwz r3, lbl_8087F430
    li r4, 0x5b
    li r5, 0x1
    bl fn_80370AE4
lbl_fn_80323E50_00000BE4:
    lwz r0, 0x7e0(r30)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_80323E50_00000CAC
    li r0, 0x0
    stw r0, 0x14c4(r30)
    stw r0, 0x14c8(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    mr r3, r30
    lwz r12, 0x0(r30)
    lwz r12, 0x48(r12)
    mtctr r12
    bctrl
    mr r3, r30
    bl fn_80178A6C
    mr r3, r30
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    bl fn_8015495C
    mr r3, r30
    bl fn_8016DA4C
    lfs f0, lbl_80884F1C
    li r3, 0x2
    li r0, 0x1
    stw r3, 0x58c(r30)
    lfs f1, lbl_80884F10
    addi r3, r30, 0xb0
    stw r0, 0x3fc(r30)
    li r4, 0x0
    lfs f2, lbl_80884F50
    li r5, 0x2e
    stfs f0, 0x2fc(r30)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r30)
    bl fn_80097C08
    lwz r3, 0x1598(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80323E50_00000CA4
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8016EB48
lbl_fn_80323E50_00000CA4:
    mr r3, r30
    bl fn_800EB7A0
lbl_fn_80323E50_00000CAC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8032418C(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    lfs f1, lbl_80884F10
    stw r0, 0x44(r1)
    lfs f0, lbl_80884F54
    stw r31, 0x3c(r1)
    mr r31, r3
    stfs f1, 0x0(r3)
    stfs f1, 0x4(r3)
    stfs f0, 0x8(r3)
    addi r3, r1, 0x8
    lfs f1, 0x538(r4)
    li r4, 0x79
    bl fn_805F8E70
    mr r4, r31
    mr r5, r31
    addi r3, r1, 0x8
    bl fn_805F93C0
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_803241E8(void)
{
    nofralloc
    stwu r1, -0x2f0(r1)
    mflr r0
    stw r0, 0x2f4(r1)
    stfd f31, 0x2e0(r1)
    psq_st f31, 0x2e8(r1), 0, 0
    lfs f31, lbl_80884F10
    stfd f30, 0x2d0(r1)
    psq_st f30, 0x2d8(r1), 0, 0
    lfs f30, lbl_80884F1C
    stfd f29, 0x2c0(r1)
    psq_st f29, 0x2c8(r1), 0, 0
    stfd f28, 0x2b0(r1)
    psq_st f28, 0x2b8(r1), 0, 0
    stw r31, 0x2ac(r1)
    mr r31, r3
    stw r30, 0x2a8(r1)
    addi r30, r1, 0x140
    stw r29, 0x2a4(r1)
    psq_l f1, 0x534(r3), 0, 0
    lfs f2, 0x53c(r3)
    stfs f2, 0x148(r1)
    psq_st f1, 0x0(r30), 0, 0
    lwz r4, 0x55c(r3)
    cmpwi r4, 0x0
    beq lbl_fn_803241E8_00000DA0
    cmpwi r4, 0x5
    beq lbl_fn_803241E8_00000DA0
    cmpwi r4, 0x9
    beq lbl_fn_803241E8_00000DA0
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 29
    beq lbl_fn_803241E8_00000DB8
lbl_fn_803241E8_00000DA0:
    psq_l f1, 0x534(r3), 0, 0
    addi r4, r1, 0x140
    lfs f2, 0x53c(r3)
    stfs f2, 0x148(r1)
    psq_st f1, 0x0(r4), 0, 0
    b lbl_fn_803241E8_0000151C
lbl_fn_803241E8_00000DB8:
    cmpwi r4, 0x1
    bne lbl_fn_803241E8_00000DCC
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x148(r1)
    b lbl_fn_803241E8_0000151C
lbl_fn_803241E8_00000DCC:
    cmpwi r4, 0x7
    bne lbl_fn_803241E8_00001018
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_803241E8_00000DF0
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x148(r1)
    b lbl_fn_803241E8_0000151C
lbl_fn_803241E8_00000DF0:
    addi r3, r3, 0x1030
    bl fn_80126214
    addi r4, r31, 0x1088
    addi r29, r1, 0x134
    psq_l f1, 0x0(r4), 0, 0
    mr r3, r29
    lfs f2, 0x1090(r31)
    stfs f2, 0x13c(r1)
    psq_st f1, 0x0(r29), 0, 0
    bl fn_805F9940
    lfs f0, lbl_80884F58
    fmr f31, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_803241E8_00001004
    addi r30, r1, 0x104
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x13c(r1)
    mr r3, r30
    psq_st f1, 0x0(r30), 0, 0
    mr r4, r30
    stfs f2, 0x10c(r1)
    bl fn_805F98D0
    lfs f2, 0x10c(r1)
    addi r29, r1, 0x110
    psq_l f1, 0x0(r30), 0, 0
    fabs f3, f2
    lfs f0, lbl_80884F38
    psq_st f1, 0x0(r29), 0, 0
    frsp f3, f3
    stfs f2, 0x118(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_803241E8_00000E94
    lfs f3, 0x110(r1)
    lfs f0, lbl_80884F10
    fcmpo cr0, f3, f0
    ble lbl_fn_803241E8_00000E88
    lfs f0, lbl_80884F3C
    b lbl_fn_803241E8_00000E8C
lbl_fn_803241E8_00000E88:
    lfs f0, lbl_80884F40
lbl_fn_803241E8_00000E8C:
    stfs f0, 0xd8(r1)
    b lbl_fn_803241E8_00000EA8
lbl_fn_803241E8_00000E94:
    frsp f2, f2
    lfs f1, 0x110(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0xd8(r1)
lbl_fn_803241E8_00000EA8:
    lfs f0, 0xd8(r1)
    addi r3, r1, 0x230
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80884F10
    addi r4, r1, 0xc8
    lfs f28, 0x238(r1)
    mr r5, r4
    lfs f29, 0x234(r1)
    addi r3, r1, 0x260
    lfs f13, 0x230(r1)
    lfs f12, 0x248(r1)
    lfs f11, 0x244(r1)
    lfs f10, 0x240(r1)
    lfs f9, 0x258(r1)
    lfs f8, 0x254(r1)
    lfs f7, 0x250(r1)
    lfs f6, 0x25c(r1)
    lfs f5, 0x24c(r1)
    lfs f4, 0x23c(r1)
    lfs f0, lbl_80884F1C
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x118(r1)
    stfs f3, 0x290(r1)
    stfs f3, 0x294(r1)
    stfs f3, 0x298(r1)
    stfs f0, 0x29c(r1)
    stfs f13, 0x98(r1)
    stfs f29, 0x9c(r1)
    stfs f28, 0xa0(r1)
    stfs f13, 0x260(r1)
    stfs f29, 0x264(r1)
    stfs f28, 0x268(r1)
    stfs f10, 0xa4(r1)
    stfs f11, 0xa8(r1)
    stfs f12, 0xac(r1)
    stfs f10, 0x270(r1)
    stfs f11, 0x274(r1)
    stfs f12, 0x278(r1)
    stfs f7, 0xb0(r1)
    stfs f8, 0xb4(r1)
    stfs f9, 0xb8(r1)
    stfs f7, 0x280(r1)
    stfs f8, 0x284(r1)
    stfs f9, 0x288(r1)
    stfs f4, 0xbc(r1)
    stfs f5, 0xc0(r1)
    stfs f6, 0xc4(r1)
    stfs f4, 0x26c(r1)
    stfs f5, 0x27c(r1)
    stfs f6, 0x28c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xd0(r1)
    bl fn_805F9750
    lfs f2, 0xd0(r1)
    lfs f0, lbl_80884F38
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_803241E8_00000FC4
    lfs f3, 0xcc(r1)
    lfs f0, lbl_80884F10
    fcmpo cr0, f3, f0
    ble lbl_fn_803241E8_00000FB4
    lfs f0, lbl_80884F3C
    b lbl_fn_803241E8_00000FB8
lbl_fn_803241E8_00000FB4:
    lfs f0, lbl_80884F40
lbl_fn_803241E8_00000FB8:
    fneg f0, f0
    stfs f0, 0xd4(r1)
    b lbl_fn_803241E8_00000FD8
lbl_fn_803241E8_00000FC4:
    lfs f1, 0xcc(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0xd4(r1)
lbl_fn_803241E8_00000FD8:
    lfs f2, lbl_80884F10
    addi r3, r1, 0xd4
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x140
    stfs f2, 0xdc(r1)
    stfs f2, 0x118(r1)
    frsp f2, f2
    psq_st f1, 0x0(r29), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x148(r1)
    b lbl_fn_803241E8_0000151C
lbl_fn_803241E8_00001004:
    psq_l f1, 0x534(r31), 0, 0
    lfs f2, 0x53c(r31)
    stfs f2, 0x148(r1)
    psq_st f1, 0x0(r30), 0, 0
    b lbl_fn_803241E8_0000151C
lbl_fn_803241E8_00001018:
    cmpwi r4, 0x3
    bne lbl_fn_803241E8_0000150C
    lwz r0, 0x14cc(r3)
    cmpwi r0, 0x0
    bne lbl_fn_803241E8_0000151C
    lwz r4, 0x14bc(r3)
    lfs f0, 0x530(r3)
    lfs f3, 0x530(r4)
    lfs f5, 0x52c(r4)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r3)
    lfs f0, 0x528(r3)
    addi r3, r1, 0x128
    lfs f3, 0x528(r4)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x12c(r1)
    stfs f0, 0x128(r1)
    stfs f6, 0x130(r1)
    bl fn_805F9940
    lfs f0, lbl_80884F5C
    fmr f31, f1
    fcmpo cr0, f1, f0
    bge lbl_fn_803241E8_00001090
    psq_l f1, 0x534(r31), 0, 0
    lfs f2, 0x53c(r31)
    stfs f2, 0x148(r1)
    lfs f31, lbl_80884F10
    psq_st f1, 0x0(r30), 0, 0
    b lbl_fn_803241E8_0000151C
lbl_fn_803241E8_00001090:
    addi r3, r1, 0x128
    mr r4, r3
    bl fn_805F98D0
    lfs f0, lbl_80884F60
    fcmpo cr0, f31, f0
    bge lbl_fn_803241E8_000010B0
    lfs f31, lbl_80884F10
    b lbl_fn_803241E8_0000151C
lbl_fn_803241E8_000010B0:
    lfs f0, lbl_80884F64
    fcmpo cr0, f31, f0
    ble lbl_fn_803241E8_000012D4
    lfs f31, lbl_80884F68
    addi r3, r1, 0xf8
    addi r4, r31, 0xc58
    li r5, 0x0
    bl fn_8011BF3C
    lfs f3, 0x100(r1)
    addi r3, r1, 0x11c
    lfs f0, 0x530(r31)
    addi r29, r1, 0xec
    lfs f5, 0xfc(r1)
    fsubs f2, f3, f0
    lfs f4, 0x52c(r31)
    lfs f3, 0xf8(r1)
    fsubs f4, f5, f4
    lfs f0, 0x528(r31)
    stfs f2, 0x124(r1)
    fsubs f3, f3, f0
    lfs f0, lbl_80884F38
    stfs f4, 0x120(r1)
    frsp f4, f2
    stfs f3, 0x11c(r1)
    fabs f3, f4
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    frsp f3, f3
    stfs f2, 0xf4(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_803241E8_00001150
    lfs f3, 0xec(r1)
    lfs f0, lbl_80884F10
    fcmpo cr0, f3, f0
    ble lbl_fn_803241E8_00001144
    lfs f0, lbl_80884F3C
    b lbl_fn_803241E8_00001148
lbl_fn_803241E8_00001144:
    lfs f0, lbl_80884F40
lbl_fn_803241E8_00001148:
    stfs f0, 0x90(r1)
    b lbl_fn_803241E8_00001164
lbl_fn_803241E8_00001150:
    fmr f2, f4
    lfs f1, 0xec(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x90(r1)
lbl_fn_803241E8_00001164:
    lfs f0, 0x90(r1)
    addi r3, r1, 0x1c0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80884F10
    addi r4, r1, 0x80
    lfs f29, 0x1c8(r1)
    mr r5, r4
    lfs f28, 0x1c4(r1)
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
    lfs f0, lbl_80884F1C
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0xf4(r1)
    stfs f3, 0x220(r1)
    stfs f3, 0x224(r1)
    stfs f3, 0x228(r1)
    stfs f0, 0x22c(r1)
    stfs f13, 0x50(r1)
    stfs f28, 0x54(r1)
    stfs f29, 0x58(r1)
    stfs f13, 0x1f0(r1)
    stfs f28, 0x1f4(r1)
    stfs f29, 0x1f8(r1)
    stfs f10, 0x5c(r1)
    stfs f11, 0x60(r1)
    stfs f12, 0x64(r1)
    stfs f10, 0x200(r1)
    stfs f11, 0x204(r1)
    stfs f12, 0x208(r1)
    stfs f7, 0x68(r1)
    stfs f8, 0x6c(r1)
    stfs f9, 0x70(r1)
    stfs f7, 0x210(r1)
    stfs f8, 0x214(r1)
    stfs f9, 0x218(r1)
    stfs f4, 0x74(r1)
    stfs f5, 0x78(r1)
    stfs f6, 0x7c(r1)
    stfs f4, 0x1fc(r1)
    stfs f5, 0x20c(r1)
    stfs f6, 0x21c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x88(r1)
    bl fn_805F9750
    lfs f2, 0x88(r1)
    lfs f0, lbl_80884F38
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_803241E8_00001280
    lfs f3, 0x84(r1)
    lfs f0, lbl_80884F10
    fcmpo cr0, f3, f0
    ble lbl_fn_803241E8_00001270
    lfs f0, lbl_80884F3C
    b lbl_fn_803241E8_00001274
lbl_fn_803241E8_00001270:
    lfs f0, lbl_80884F40
lbl_fn_803241E8_00001274:
    fneg f0, f0
    stfs f0, 0x8c(r1)
    b lbl_fn_803241E8_00001294
lbl_fn_803241E8_00001280:
    lfs f1, 0x84(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x8c(r1)
lbl_fn_803241E8_00001294:
    addi r3, r1, 0x8c
    lfs f4, lbl_80884F10
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x140
    psq_st f1, 0x0(r3), 0, 0
    fmr f2, f4
    lfs f0, lbl_80884F20
    lfs f3, 0x144(r1)
    stfs f2, 0xf4(r1)
    frsp f2, f2
    fsubs f0, f3, f0
    stfs f4, 0x94(r1)
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x148(r1)
    stfs f0, 0x144(r1)
    b lbl_fn_803241E8_0000151C
lbl_fn_803241E8_000012D4:
    lfs f2, 0x130(r1)
    addi r3, r1, 0x128
    lfs f0, lbl_80884F38
    addi r29, r1, 0xe0
    fabs f3, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    lfs f31, lbl_80884F68
    frsp f3, f3
    stfs f2, 0xe8(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_803241E8_00001328
    lfs f3, 0xe0(r1)
    lfs f0, lbl_80884F10
    fcmpo cr0, f3, f0
    ble lbl_fn_803241E8_0000131C
    lfs f0, lbl_80884F3C
    b lbl_fn_803241E8_00001320
lbl_fn_803241E8_0000131C:
    lfs f0, lbl_80884F40
lbl_fn_803241E8_00001320:
    stfs f0, 0x48(r1)
    b lbl_fn_803241E8_0000133C
lbl_fn_803241E8_00001328:
    frsp f2, f2
    lfs f1, 0xe0(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_803241E8_0000133C:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x150
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80884F10
    addi r4, r1, 0x38
    lfs f29, 0x158(r1)
    mr r5, r4
    lfs f28, 0x154(r1)
    addi r3, r1, 0x180
    lfs f13, 0x150(r1)
    lfs f12, 0x168(r1)
    lfs f11, 0x164(r1)
    lfs f10, 0x160(r1)
    lfs f9, 0x178(r1)
    lfs f8, 0x174(r1)
    lfs f7, 0x170(r1)
    lfs f6, 0x17c(r1)
    lfs f5, 0x16c(r1)
    lfs f4, 0x15c(r1)
    lfs f0, lbl_80884F1C
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0xe8(r1)
    stfs f3, 0x1b0(r1)
    stfs f3, 0x1b4(r1)
    stfs f3, 0x1b8(r1)
    stfs f0, 0x1bc(r1)
    stfs f13, 0x8(r1)
    stfs f28, 0xc(r1)
    stfs f29, 0x10(r1)
    stfs f13, 0x180(r1)
    stfs f28, 0x184(r1)
    stfs f29, 0x188(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0x190(r1)
    stfs f11, 0x194(r1)
    stfs f12, 0x198(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0x1a0(r1)
    stfs f8, 0x1a4(r1)
    stfs f9, 0x1a8(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0x18c(r1)
    stfs f5, 0x19c(r1)
    stfs f6, 0x1ac(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80884F38
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_803241E8_00001458
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80884F10
    fcmpo cr0, f3, f0
    ble lbl_fn_803241E8_00001448
    lfs f0, lbl_80884F3C
    b lbl_fn_803241E8_0000144C
lbl_fn_803241E8_00001448:
    lfs f0, lbl_80884F40
lbl_fn_803241E8_0000144C:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_803241E8_0000146C
lbl_fn_803241E8_00001458:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_803241E8_0000146C:
    addi r3, r1, 0x44
    lfs f4, lbl_80884F10
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x140
    psq_st f1, 0x0(r3), 0, 0
    fmr f2, f4
    lfs f0, lbl_80884F3C
    lis r3, lbl_80749B78@ha
    lfs f3, 0x144(r1)
    stfs f2, 0xe8(r1)
    frsp f2, f2
    fsubs f3, f3, f0
    stfs f2, 0x148(r1)
    lfd f2, lbl_80749B78@l(r3)
    stfs f3, 0x144(r1)
    lfs f0, 0x538(r31)
    psq_st f1, 0x0(r29), 0, 0
    fsubs f1, f3, f0
    stfs f4, 0x4c(r1)
    bl fn_8068AEA8
    frsp f1, f1
    lfs f0, lbl_80884F34
    fcmpo cr0, f1, f0
    ble lbl_fn_803241E8_000014D4
    lfs f0, lbl_80884F6C
    fsubs f1, f1, f0
lbl_fn_803241E8_000014D4:
    lfs f0, lbl_80884F70
    fcmpo cr0, f1, f0
    bge lbl_fn_803241E8_000014E8
    lfs f0, lbl_80884F6C
    fadds f1, f1, f0
lbl_fn_803241E8_000014E8:
    fabs f3, f1
    lfs f0, lbl_80884F74
    frsp f3, f3
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_803241E8_0000151C
    mr r3, r31
    bl fn_8016D454
    b lbl_fn_803241E8_00001534
lbl_fn_803241E8_0000150C:
    cmpwi r4, 0x6
    bne lbl_fn_803241E8_0000151C
    bl fn_8013A258
    b lbl_fn_803241E8_00001534
lbl_fn_803241E8_0000151C:
    fmr f1, f31
    mr r3, r31
    fmr f2, f30
    addi r4, r1, 0x140
    li r5, 0x0
    bl fn_80324A38
lbl_fn_803241E8_00001534:
    lwz r0, 0x2f4(r1)
    psq_l f31, 0x2e8(r1), 0, 0
    lfd f31, 0x2e0(r1)
    psq_l f30, 0x2d8(r1), 0, 0
    lfd f30, 0x2d0(r1)
    psq_l f29, 0x2c8(r1), 0, 0
    lfd f29, 0x2c0(r1)
    psq_l f28, 0x2b8(r1), 0, 0
    lfd f28, 0x2b0(r1)
    lwz r31, 0x2ac(r1)
    lwz r30, 0x2a8(r1)
    lwz r29, 0x2a4(r1)
    mtlr r0
    addi r1, r1, 0x2f0
    blr
}

asm void fn_80324A38(void)
{
    nofralloc
    stwu r1, -0x1d0(r1)
    mflr r0
    lfs f3, 0x4(r4)
    lis r4, lbl_80749B78@ha
    stw r0, 0x1d4(r1)
    addi r6, r1, 0xb4
    stfd f31, 0x1c0(r1)
    psq_st f31, 0x1c8(r1), 0, 0
    stfd f30, 0x1b0(r1)
    psq_st f30, 0x1b8(r1), 0, 0
    fmr f30, f2
    stfd f29, 0x1a0(r1)
    psq_st f29, 0x1a8(r1), 0, 0
    fmr f29, f1
    stw r31, 0x19c(r1)
    stw r30, 0x198(r1)
    mr r30, r3
    stw r29, 0x194(r1)
    stw r28, 0x190(r1)
    mr r28, r5
    psq_l f1, 0x528(r3), 0, 0
    lfs f2, 0x530(r3)
    stfs f2, 0xbc(r1)
    psq_st f1, 0x0(r6), 0, 0
    addi r6, r1, 0xa8
    psq_l f1, 0x534(r3), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    lfs f2, 0x53c(r3)
    lfs f0, 0xac(r1)
    stfs f2, 0xb0(r1)
    fsubs f1, f3, f0
    lfd f2, lbl_80749B78@l(r4)
    bl fn_8068AEA8
    frsp f0, f1
    lfs f3, lbl_80884F34
    fcmpo cr0, f0, f3
    ble lbl_fn_80324A38_0000160C
    lfs f3, lbl_80884F6C
    fsubs f0, f0, f3
lbl_fn_80324A38_0000160C:
    lfs f3, lbl_80884F70
    fcmpo cr0, f0, f3
    bge lbl_fn_80324A38_00001620
    lfs f3, lbl_80884F6C
    fadds f0, f0, f3
lbl_fn_80324A38_00001620:
    lfs f3, lbl_80884F34
    lwz r3, lbl_8087EFA8
    fdivs f3, f0, f3
    lfs f4, 0x570(r30)
    lfs f31, 0x3a4(r3)
    lfs f6, lbl_80884F78
    lfs f5, lbl_80884F1C
    lfs f9, 0x56c(r30)
    fabs f7, f3
    lfs f3, lbl_80884F7C
    lfs f8, 0xac(r1)
    fmuls f30, f30, f31
    fmuls f4, f4, f3
    lfs f3, lbl_80884F80
    frsp f7, f7
    stfs f4, 0x570(r30)
    fcmpo cr0, f4, f3
    fmuls f3, f7, f6
    fadds f3, f5, f3
    fmuls f9, f9, f3
    fmuls f3, f0, f9
    fadds f8, f8, f3
    stfs f8, 0xac(r1)
    bge lbl_fn_80324A38_00001688
    lfs f3, lbl_80884F10
    stfs f3, 0x570(r30)
lbl_fn_80324A38_00001688:
    lfs f3, lbl_80884F1C
    fcmpo cr0, f29, f3
    ble lbl_fn_80324A38_00001698
    fmr f29, f3
lbl_fn_80324A38_00001698:
    lfs f3, lbl_80884F84
    fcmpo cr0, f29, f3
    ble lbl_fn_80324A38_0000171C
    fsubs f6, f29, f3
    lfs f5, lbl_80884F68
    lfs f4, 0x570(r30)
    lfs f3, lbl_80884F8C
    fdivs f29, f6, f5
    lfs f5, lbl_80884F88
    fcmpo cr0, f4, f3
    fmuls f29, f29, f30
    bge lbl_fn_80324A38_000016CC
    lfs f5, lbl_80884F10
lbl_fn_80324A38_000016CC:
    lfs f4, lbl_80884F34
    lfs f3, lbl_80884F10
    fdivs f4, f0, f4
    fabs f4, f4
    frsp f4, f4
    fsubs f7, f4, f5
    fcmpo cr0, f7, f3
    bge lbl_fn_80324A38_000016F0
    fmr f7, f3
lbl_fn_80324A38_000016F0:
    lfs f6, lbl_80884F1C
    lfs f4, lbl_80884F90
    fsubs f5, f6, f5
    lfs f3, lbl_80884F10
    fdivs f7, f7, f5
    fnmsubs f4, f4, f7, f6
    fmuls f29, f29, f4
    fcmpo cr0, f29, f3
    bge lbl_fn_80324A38_00001720
    fmr f29, f3
    b lbl_fn_80324A38_00001720
lbl_fn_80324A38_0000171C:
    lfs f29, lbl_80884F10
lbl_fn_80324A38_00001720:
    lfs f3, lbl_80884F94
    lfs f4, lbl_80884F84
    fmuls f6, f3, f0
    lfs f5, 0x580(r30)
    lfs f3, lbl_80884F88
    fmuls f4, f4, f5
    lfs f0, lbl_80884F80
    fmsubs f3, f3, f6, f4
    fadds f3, f5, f3
    stfs f3, 0x580(r30)
    fabs f3, f3
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80324A38_00001760
    lfs f0, lbl_80884F10
    stfs f0, 0x580(r30)
lbl_fn_80324A38_00001760:
    lfs f3, lbl_80884F14
    mr r3, r30
    lfs f4, 0x570(r30)
    lfs f0, lbl_80884F98
    fmuls f3, f3, f4
    fmsubs f0, f0, f29, f3
    fadds f0, f4, f0
    stfs f0, 0x570(r30)
    lwz r12, 0x0(r30)
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
    lfs f3, 0x574(r30)
    lfs f4, lbl_80884F28
    lfs f0, 0x57c(r30)
    fmuls f3, f3, f4
    lfs f1, 0xac(r1)
    fmuls f0, f0, f4
    stfs f3, 0x574(r30)
    stfs f0, 0x57c(r30)
    bl fn_8068AD58
    frsp f4, f1
    lfs f3, 0x570(r30)
    lfs f0, lbl_80884F10
    lfs f1, 0xac(r1)
    fmuls f3, f3, f4
    stfs f0, 0xa0(r1)
    stfs f3, 0x9c(r1)
    bl fn_8068A850
    frsp f0, f1
    lfs f6, 0x570(r30)
    lfs f4, 0x9c(r1)
    lfs f3, 0xa0(r1)
    fmuls f5, f6, f0
    lfs f0, lbl_80884F1C
    fmuls f4, f4, f31
    fmuls f3, f3, f31
    fmuls f5, f5, f31
    stfs f4, 0x9c(r1)
    fcmpo cr0, f6, f0
    stfs f3, 0xa0(r1)
    stfs f5, 0xa4(r1)
    ble lbl_fn_80324A38_00001828
    lfs f0, lbl_80884F9C
    fmuls f4, f4, f0
    fmuls f3, f3, f0
    fmuls f0, f5, f0
    stfs f4, 0x9c(r1)
    stfs f3, 0xa0(r1)
    stfs f0, 0xa4(r1)
lbl_fn_80324A38_00001828:
    lwz r0, 0x958(r30)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_80324A38_00001878
    lwz r4, lbl_8087F0A8
    lis r0, 0x4330
    stw r0, 0x180(r1)
    lis r3, lbl_80749B80@ha
    lwz r0, 0x30(r4)
    lfd f5, lbl_80749B80@l(r3)
    mullw r0, r0, r0
    lfs f3, lbl_80884FA0
    lfs f0, 0x578(r30)
    xoris r0, r0, 0x8000
    stw r0, 0x184(r1)
    lfd f4, 0x180(r1)
    fsubs f4, f4, f5
    fdivs f3, f3, f4
    fmadds f0, f31, f3, f0
    stfs f0, 0x578(r30)
lbl_fn_80324A38_00001878:
    lfs f3, 0x9c(r1)
    addi r3, r30, 0x6b8
    lfs f0, 0x6b8(r30)
    lfs f6, 0xa0(r1)
    fadds f0, f3, f0
    lfs f4, 0xa4(r1)
    lfs f5, lbl_80884F18
    stfs f0, 0x9c(r1)
    lfs f0, lbl_80884F10
    lfs f3, 0x6bc(r30)
    fadds f3, f6, f3
    stfs f3, 0xa0(r1)
    lfs f3, 0x6c0(r30)
    fadds f3, f4, f3
    stfs f3, 0xa4(r1)
    lfs f4, 0x6b8(r30)
    lfs f3, 0x6c0(r30)
    fmuls f4, f4, f5
    stfs f0, 0x6bc(r30)
    fmuls f0, f3, f5
    stfs f4, 0x6b8(r30)
    stfs f0, 0x6c0(r30)
    bl fn_805F9940
    lfs f0, lbl_80884F50
    fcmpo cr0, f1, f0
    bge lbl_fn_80324A38_000018F0
    lfs f0, lbl_80884F10
    stfs f0, 0x6b8(r30)
    stfs f0, 0x6bc(r30)
    stfs f0, 0x6c0(r30)
lbl_fn_80324A38_000018F0:
    lfs f3, 0x9c(r1)
    lfs f0, 0x574(r30)
    lfs f5, 0xa0(r1)
    fadds f3, f3, f0
    lfs f0, lbl_80884FA4
    lfs f4, 0xa4(r1)
    stfs f3, 0x9c(r1)
    lfs f3, 0x578(r30)
    fadds f3, f5, f3
    stfs f3, 0xa0(r1)
    fcmpo cr0, f3, f0
    lfs f3, 0x57c(r30)
    fadds f3, f4, f3
    stfs f3, 0xa4(r1)
    bge lbl_fn_80324A38_00001930
    stfs f0, 0xa0(r1)
lbl_fn_80324A38_00001930:
    addi r5, r1, 0xb4
    li r0, 0x0
    lfs f2, 0xbc(r1)
    addi r3, r1, 0x90
    psq_l f1, 0x0(r5), 0, 0
    mr r4, r30
    psq_st f1, 0x0(r3), 0, 0
    addi r3, r1, 0x80
    li r31, 0x1
    stfs f2, 0x98(r1)
    stw r0, 0x164(r1)
    stw r0, 0x168(r1)
    stw r0, 0x16c(r1)
    stw r0, 0x170(r1)
    bl fn_80176548
    lwz r4, 0x48(r30)
    neg r0, r28
    or r3, r0, r28
    cmpwi r4, 0x0
    lis r0, 0x8000
    srawi r3, r3, 31
    and r7, r0, r3
    bne lbl_fn_80324A38_00001994
    ori r7, r7, 0x20
    b lbl_fn_80324A38_000019B0
lbl_fn_80324A38_00001994:
    cmpwi r4, 0x3
    bne lbl_fn_80324A38_000019A4
    ori r7, r7, 0x40
    b lbl_fn_80324A38_000019B0
lbl_fn_80324A38_000019A4:
    cmpwi r4, 0x2
    bne lbl_fn_80324A38_000019B0
    ori r7, r7, 0x80
lbl_fn_80324A38_000019B0:
    lwz r3, lbl_8087EE98
    addi r4, r1, 0x130
    lfs f1, 0x8c(r1)
    addi r5, r1, 0x80
    addi r6, r1, 0x9c
    addi r8, r30, 0x5b8
    li r9, 0x0
    bl fn_8004D388
    addi r5, r1, 0x140
    lfs f2, 0x148(r1)
    addi r4, r1, 0xb4
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    cmpwi r3, 0x0
    lfs f0, 0x8c(r1)
    stfs f2, 0xbc(r1)
    lfs f5, 0xb4(r1)
    lfs f3, 0x5a4(r30)
    lfs f4, 0xb8(r1)
    fsubs f3, f5, f3
    stfs f3, 0xb4(r1)
    lfs f3, 0x5a8(r30)
    fsubs f3, f4, f3
    stfs f3, 0xb8(r1)
    fsubs f5, f3, f0
    lfs f0, 0x5ac(r30)
    fsubs f0, f2, f0
    stfs f5, 0xb8(r1)
    stfs f0, 0xbc(r1)
    beq lbl_fn_80324A38_00001A50
    lfs f0, 0xa0(r1)
    lfs f4, 0x94(r1)
    fneg f3, f0
    lfs f0, lbl_80884FA8
    fsubs f4, f4, f5
    fmuls f0, f0, f3
    fcmpo cr0, f4, f0
    bge lbl_fn_80324A38_00001A50
    lfs f0, lbl_80884F10
    stfs f0, 0xa0(r1)
lbl_fn_80324A38_00001A50:
    lwz r4, 0x164(r1)
    li r3, 0x0
    cmpwi r4, 0x0
    beq lbl_fn_80324A38_00001A70
    lwz r0, 0x0(r4)
    cmplwi r0, 0x1a
    bne lbl_fn_80324A38_00001A70
    li r3, 0x1
lbl_fn_80324A38_00001A70:
    lwz r0, 0x12a4(r30)
    rlwimi r0, r3, 3, 28, 28
    stw r0, 0x12a4(r30)
    addi r3, r1, 0x74
    lfs f3, 0x98(r1)
    lfs f5, 0xbc(r1)
    lfs f4, 0xb8(r1)
    fsubs f5, f5, f3
    lfs f0, 0x94(r1)
    lfs f3, 0xa4(r1)
    fsubs f6, f4, f0
    lfs f0, 0xa0(r1)
    fadds f7, f3, f5
    lfs f4, 0xb4(r1)
    lfs f3, 0x90(r1)
    fadds f8, f0, f6
    lfs f0, 0x9c(r1)
    fsubs f3, f4, f3
    stfs f6, 0x6c(r1)
    lfs f30, lbl_80884F10
    stfs f3, 0x68(r1)
    fadds f0, f0, f3
    stfs f5, 0x70(r1)
    stfs f0, 0x74(r1)
    stfs f8, 0x78(r1)
    stfs f7, 0x7c(r1)
    bl fn_805F9920
    lfs f0, lbl_80884F80
    fcmpo cr0, f1, f0
    ble lbl_fn_80324A38_00001D04
    fcmpo cr0, f29, f0
    ble lbl_fn_80324A38_00001D04
    addi r3, r1, 0x74
    addi r29, r1, 0x50
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r29
    lfs f2, 0x7c(r1)
    mr r4, r29
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x58(r1)
    bl fn_805F98D0
    lfs f2, 0x58(r1)
    addi r28, r1, 0x5c
    psq_l f1, 0x0(r29), 0, 0
    fabs f3, f2
    lfs f0, lbl_80884F38
    psq_st f1, 0x0(r28), 0, 0
    frsp f3, f3
    stfs f2, 0x64(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_80324A38_00001B60
    lfs f3, 0x5c(r1)
    lfs f0, lbl_80884F10
    fcmpo cr0, f3, f0
    ble lbl_fn_80324A38_00001B54
    lfs f0, lbl_80884F3C
    b lbl_fn_80324A38_00001B58
lbl_fn_80324A38_00001B54:
    lfs f0, lbl_80884F40
lbl_fn_80324A38_00001B58:
    stfs f0, 0x48(r1)
    b lbl_fn_80324A38_00001B74
lbl_fn_80324A38_00001B60:
    frsp f2, f2
    lfs f1, 0x5c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_80324A38_00001B74:
    lfs f0, 0x48(r1)
    addi r3, r1, 0xc0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80884F10
    addi r4, r1, 0x38
    lfs f30, 0xc8(r1)
    mr r5, r4
    lfs f29, 0xc4(r1)
    addi r3, r1, 0xf0
    lfs f13, 0xc0(r1)
    lfs f12, 0xd8(r1)
    lfs f11, 0xd4(r1)
    lfs f10, 0xd0(r1)
    lfs f9, 0xe8(r1)
    lfs f8, 0xe4(r1)
    lfs f7, 0xe0(r1)
    lfs f6, 0xec(r1)
    lfs f5, 0xdc(r1)
    lfs f4, 0xcc(r1)
    lfs f0, lbl_80884F1C
    psq_l f1, 0x0(r28), 0, 0
    lfs f2, 0x64(r1)
    stfs f3, 0x120(r1)
    stfs f3, 0x124(r1)
    stfs f3, 0x128(r1)
    stfs f0, 0x12c(r1)
    stfs f13, 0x8(r1)
    stfs f29, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f13, 0xf0(r1)
    stfs f29, 0xf4(r1)
    stfs f30, 0xf8(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0x100(r1)
    stfs f11, 0x104(r1)
    stfs f12, 0x108(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0x110(r1)
    stfs f8, 0x114(r1)
    stfs f9, 0x118(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xfc(r1)
    stfs f5, 0x10c(r1)
    stfs f6, 0x11c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80884F38
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80324A38_00001C90
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80884F10
    fcmpo cr0, f3, f0
    ble lbl_fn_80324A38_00001C80
    lfs f0, lbl_80884F3C
    b lbl_fn_80324A38_00001C84
lbl_fn_80324A38_00001C80:
    lfs f0, lbl_80884F40
lbl_fn_80324A38_00001C84:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_80324A38_00001CA4
lbl_fn_80324A38_00001C90:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_80324A38_00001CA4:
    addi r3, r1, 0x44
    lfs f4, lbl_80884F10
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_80749B78@ha
    psq_st f1, 0x0(r28), 0, 0
    fmr f2, f4
    lfs f0, 0x538(r30)
    lfs f3, 0x60(r1)
    stfs f2, 0x64(r1)
    fsubs f1, f3, f0
    lfd f2, lbl_80749B78@l(r3)
    stfs f4, 0x4c(r1)
    bl fn_8068AEA8
    frsp f30, f1
    lfs f0, lbl_80884F34
    fcmpo cr0, f30, f0
    ble lbl_fn_80324A38_00001CF0
    lfs f0, lbl_80884F6C
    fsubs f30, f30, f0
lbl_fn_80324A38_00001CF0:
    lfs f0, lbl_80884F70
    fcmpo cr0, f30, f0
    bge lbl_fn_80324A38_00001D04
    lfs f0, lbl_80884F6C
    fadds f30, f30, f0
lbl_fn_80324A38_00001D04:
    lfs f0, lbl_80884F9C
    lfs f4, lbl_80884F8C
    fmuls f30, f30, f0
    lfs f3, 0x584(r30)
    lfs f0, lbl_80884FAC
    fnmsubs f3, f4, f30, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80324A38_00001D28
    b lbl_fn_80324A38_00001D2C
lbl_fn_80324A38_00001D28:
    fmr f3, f0
lbl_fn_80324A38_00001D2C:
    lfs f4, lbl_80884FB0
    fcmpo cr0, f3, f4
    ble lbl_fn_80324A38_00001D58
    lfs f4, lbl_80884F8C
    lfs f3, 0x584(r30)
    lfs f0, lbl_80884FAC
    fnmsubs f4, f4, f30, f3
    fcmpo cr0, f4, f0
    bge lbl_fn_80324A38_00001D54
    b lbl_fn_80324A38_00001D58
lbl_fn_80324A38_00001D54:
    fmr f4, f0
lbl_fn_80324A38_00001D58:
    frsp f3, f4
    lfs f0, lbl_80884FB4
    lwz r0, 0x54c(r30)
    fmuls f0, f3, f0
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    stfs f0, 0x584(r30)
    bne lbl_fn_80324A38_00001D8C
    lfs f3, 0xb8(r1)
    lfs f0, lbl_80884F10
    fcmpo cr0, f3, f0
    bge lbl_fn_80324A38_00001D8C
    stfs f0, 0xb8(r1)
lbl_fn_80324A38_00001D8C:
    addi r3, r1, 0xb4
    lfs f2, 0xbc(r1)
    psq_l f1, 0x0(r3), 0, 0
    cmpwi r31, 0x0
    psq_st f1, 0x528(r30), 0, 0
    stfs f2, 0x530(r30)
    beq lbl_fn_80324A38_00001DBC
    addi r3, r1, 0xa8
    lfs f2, 0xb0(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x534(r30), 0, 0
    stfs f2, 0x53c(r30)
lbl_fn_80324A38_00001DBC:
    lfs f2, 0xa4(r1)
    addi r3, r1, 0x9c
    psq_l f1, 0x0(r3), 0, 0
    fdivs f0, f2, f31
    psq_st f1, 0x574(r30), 0, 0
    lfs f3, 0x574(r30)
    stfs f0, 0x57c(r30)
    fdivs f0, f3, f31
    stfs f0, 0x574(r30)
    psq_l f31, 0x1c8(r1), 0, 0
    lfd f31, 0x1c0(r1)
    psq_l f30, 0x1b8(r1), 0, 0
    lfd f30, 0x1b0(r1)
    psq_l f29, 0x1a8(r1), 0, 0
    lfd f29, 0x1a0(r1)
    lwz r31, 0x19c(r1)
    lwz r30, 0x198(r1)
    lwz r29, 0x194(r1)
    lwz r28, 0x190(r1)
    lwz r0, 0x1d4(r1)
    mtlr r0
    addi r1, r1, 0x1d0
    blr
}
