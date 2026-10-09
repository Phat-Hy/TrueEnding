#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_19(void);
extern void _restgpr_26(void);
extern void _savegpr_19(void);
extern void _savegpr_26(void);
extern void dtor_80084684(void);
extern void fn_8004D388(void);
extern void fn_8004ED34(void);
extern void fn_800844D8(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800F8548(void);
extern void fn_800FAB80(void);
extern void fn_800FB4B0(void);
extern void fn_8010653C(void);
extern void fn_80133130(void);
extern void fn_801446F0(void);
extern void fn_801539E0(void);
extern void fn_8016DA4C(void);
extern void fn_80178864(void);
extern void fn_801789D8(void);
extern void fn_80179D44(void);
extern void fn_80219E6C(void);
extern void fn_80373148(void);
extern void fn_803CC1A4(void);
extern void fn_803EA77C(void);
extern void fn_805F8E70(void);
extern void fn_805F9050(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_805F9990(void);
extern void fn_805F99B0(void);
extern void fn_80680770(void);
extern void fn_80680CF8(void);
extern void fn_80682428(void);
extern void fn_80686EA4(void);
extern void fn_8068AEA4(void);
extern void fn_8068B100(void);
extern void fn_80695B00(void);

/* External data declarations */
extern u8 lbl_8073A170[];
extern u8 lbl_8077F2F0[];
extern u8 lbl_8077F2F8[];
extern u8 lbl_8077F300[];
extern u8 lbl_8077F400[];
extern u8 lbl_8077F480[];
extern u8 lbl_8077F500[];
extern u8 lbl_8077F634[];
extern u8 lbl_8077F650[];
extern u8 lbl_8077F66C[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087F048;
extern u32 lbl_8087F430;
extern u32 lbl_8087F498;
extern u32 lbl_8087F610;
extern u32 lbl_80882178;
extern u32 lbl_8088217C;
extern u32 lbl_80882180;
extern u32 lbl_80882184;
extern u32 lbl_80882188;
extern u32 lbl_8088218C;
extern u32 lbl_80882190;
extern u32 lbl_80882194;
extern u32 lbl_808821A0;
extern u32 lbl_808821AC;
extern u32 lbl_808821B8;
extern u32 lbl_808821C0;
extern u32 lbl_808821C4;
extern u32 lbl_808821C8;
extern u32 lbl_808821CC;
extern u32 lbl_808821D0;
extern u32 lbl_808821D4;
extern u32 lbl_808821D8;
extern u32 lbl_808821DC;
extern u32 lbl_808821E0;
extern u32 lbl_808821E4;
extern u32 lbl_808821E8;
extern u32 lbl_808821EC;
extern u32 lbl_808821F0;
extern u32 lbl_808821F4;
extern u32 lbl_808821F8;
extern u32 lbl_808821FC;
extern u32 lbl_80882200;
extern u32 lbl_80882204;

/* Function declarations */
void fn_801A471C(void);
void fn_801A474C(void);
void fn_801A4868(void);
void fn_801A4898(void);
void fn_801A49B4(void);
void fn_801A49E4(void);
void fn_801A4B00(void);
void fn_801A4DB0(void);
void fn_801A4DC4(void);
void fn_801A4DDC(void);
void fn_801A4E08(void);
void fn_801A59F4(void);
void fn_801A5B9C(void);
void fn_801A5BDC(void);
void fn_801A5E90(void);

asm void fn_801A471C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r12, 0x0(r3)
    lwz r3, 0xc(r12)
    lwz r4, 0x10(r12)
    bl fn_80695B00
    nop
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801A474C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r5, 0x3
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    mr r29, r4
    bne lbl_fn_801A474C_00000068
    lis r3, lbl_8077F2F0@ha
    addi r3, r3, lbl_8077F2F0@l
    stw r3, 0x0(r4)
    b lbl_fn_801A474C_00000130
lbl_fn_801A474C_00000068:
    cmpwi r5, 0x0
    bne lbl_fn_801A474C_000000E0
    lwz r31, 0x0(r3)
    li r3, 0x14
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_801A474C_000000A8
    lis r3, __files@ha
    lis r4, lbl_8077F66C@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077F66C@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801A474C_000000A8:
    cmpwi r30, 0x0
    beq lbl_fn_801A474C_000000D8
    lwz r0, 0x4(r31)
    lwz r3, 0x0(r31)
    stw r3, 0x0(r30)
    stw r0, 0x4(r30)
    lwz r0, 0x8(r31)
    stw r0, 0x8(r30)
    lwz r0, 0xc(r31)
    stw r0, 0xc(r30)
    lwz r0, 0x10(r31)
    stw r0, 0x10(r30)
lbl_fn_801A474C_000000D8:
    stw r30, 0x0(r29)
    b lbl_fn_801A474C_00000130
lbl_fn_801A474C_000000E0:
    cmpwi r5, 0x1
    bne lbl_fn_801A474C_000000FC
    lwz r3, 0x0(r4)
    bl dtor_80084684
    li r0, 0x0
    stw r0, 0x0(r29)
    b lbl_fn_801A474C_00000130
lbl_fn_801A474C_000000FC:
    lwz r5, 0x0(r4)
    lis r3, lbl_8077F2F0@ha
    lwz r4, lbl_8077F2F0@l(r3)
    lwz r3, 0x0(r5)
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_801A474C_00000128
    lwz r0, 0x0(r30)
    stw r0, 0x0(r29)
    b lbl_fn_801A474C_00000130
lbl_fn_801A474C_00000128:
    li r0, 0x0
    stw r0, 0x0(r29)
lbl_fn_801A474C_00000130:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801A4868(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r12, 0x0(r3)
    lwz r3, 0xc(r12)
    lwz r4, 0x10(r12)
    bl fn_80695B00
    nop
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801A4898(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r5, 0x3
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    mr r29, r4
    bne lbl_fn_801A4898_000001B4
    lis r3, lbl_8077F2F8@ha
    addi r3, r3, lbl_8077F2F8@l
    stw r3, 0x0(r4)
    b lbl_fn_801A4898_0000027C
lbl_fn_801A4898_000001B4:
    cmpwi r5, 0x0
    bne lbl_fn_801A4898_0000022C
    lwz r31, 0x0(r3)
    li r3, 0x14
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_801A4898_000001F4
    lis r3, __files@ha
    lis r4, lbl_8077F650@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077F650@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801A4898_000001F4:
    cmpwi r30, 0x0
    beq lbl_fn_801A4898_00000224
    lwz r0, 0x4(r31)
    lwz r3, 0x0(r31)
    stw r3, 0x0(r30)
    stw r0, 0x4(r30)
    lwz r0, 0x8(r31)
    stw r0, 0x8(r30)
    lwz r0, 0xc(r31)
    stw r0, 0xc(r30)
    lwz r0, 0x10(r31)
    stw r0, 0x10(r30)
lbl_fn_801A4898_00000224:
    stw r30, 0x0(r29)
    b lbl_fn_801A4898_0000027C
lbl_fn_801A4898_0000022C:
    cmpwi r5, 0x1
    bne lbl_fn_801A4898_00000248
    lwz r3, 0x0(r4)
    bl dtor_80084684
    li r0, 0x0
    stw r0, 0x0(r29)
    b lbl_fn_801A4898_0000027C
lbl_fn_801A4898_00000248:
    lwz r5, 0x0(r4)
    lis r3, lbl_8077F2F8@ha
    lwz r4, lbl_8077F2F8@l(r3)
    lwz r3, 0x0(r5)
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_801A4898_00000274
    lwz r0, 0x0(r30)
    stw r0, 0x0(r29)
    b lbl_fn_801A4898_0000027C
lbl_fn_801A4898_00000274:
    li r0, 0x0
    stw r0, 0x0(r29)
lbl_fn_801A4898_0000027C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801A49B4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r12, 0x0(r3)
    lwz r3, 0xc(r12)
    lwz r4, 0x10(r12)
    bl fn_80695B00
    nop
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801A49E4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r5, 0x3
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    mr r29, r4
    bne lbl_fn_801A49E4_00000300
    lis r3, lbl_8077F300@ha
    addi r3, r3, lbl_8077F300@l
    stw r3, 0x0(r4)
    b lbl_fn_801A49E4_000003C8
lbl_fn_801A49E4_00000300:
    cmpwi r5, 0x0
    bne lbl_fn_801A49E4_00000378
    lwz r31, 0x0(r3)
    li r3, 0x14
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_801A49E4_00000340
    lis r3, __files@ha
    lis r4, lbl_8077F634@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077F634@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801A49E4_00000340:
    cmpwi r30, 0x0
    beq lbl_fn_801A49E4_00000370
    lwz r0, 0x4(r31)
    lwz r3, 0x0(r31)
    stw r3, 0x0(r30)
    stw r0, 0x4(r30)
    lwz r0, 0x8(r31)
    stw r0, 0x8(r30)
    lwz r0, 0xc(r31)
    stw r0, 0xc(r30)
    lwz r0, 0x10(r31)
    stw r0, 0x10(r30)
lbl_fn_801A49E4_00000370:
    stw r30, 0x0(r29)
    b lbl_fn_801A49E4_000003C8
lbl_fn_801A49E4_00000378:
    cmpwi r5, 0x1
    bne lbl_fn_801A49E4_00000394
    lwz r3, 0x0(r4)
    bl dtor_80084684
    li r0, 0x0
    stw r0, 0x0(r29)
    b lbl_fn_801A49E4_000003C8
lbl_fn_801A49E4_00000394:
    lwz r5, 0x0(r4)
    lis r3, lbl_8077F300@ha
    lwz r4, lbl_8077F300@l(r3)
    lwz r3, 0x0(r5)
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_801A49E4_000003C0
    lwz r0, 0x0(r30)
    stw r0, 0x0(r29)
    b lbl_fn_801A49E4_000003C8
lbl_fn_801A49E4_000003C0:
    li r0, 0x0
    stw r0, 0x0(r29)
lbl_fn_801A49E4_000003C8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801A4B00(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    lis r7, lbl_8077F500@ha
    stw r0, 0x114(r1)
    li r0, 0x0
    addi r7, r7, lbl_8077F500@l
    stfd f31, 0x100(r1)
    psq_st f31, 0x108(r1), 0, 0
    stfd f30, 0xf0(r1)
    psq_st f30, 0xf8(r1), 0, 0
    stw r31, 0xec(r1)
    mr r31, r6
    stw r30, 0xe8(r1)
    mr r30, r5
    stw r29, 0xe4(r1)
    mr r29, r3
    stw r4, 0x4(r3)
    stw r7, 0x0(r3)
    stfs f1, 0x20(r3)
    stfs f1, 0x24(r3)
    stw r0, 0x28(r3)
    lwz r0, 0x12a4(r4)
    srwi. r0, r0, 31
    beq lbl_fn_801A4B00_0000044C
    mr r3, r4
    bl fn_801539E0
lbl_fn_801A4B00_0000044C:
    lwz r3, 0x4(r29)
    addi r4, r29, 0x14
    cmpwi r31, 0x0
    addi r5, r29, 0x8
    psq_l f1, 0x528(r3), 0, 0
    lfs f2, 0x530(r3)
    stfs f2, 0x1c(r29)
    lfs f2, 0x8(r30)
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x0(r30), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x10(r29)
    beq lbl_fn_801A4B00_00000484
    bl fn_801A4E08
lbl_fn_801A4B00_00000484:
    lfs f4, 0x10(r29)
    addi r3, r1, 0x5c
    lfs f0, 0x1c(r29)
    addi r31, r1, 0x50
    lfs f3, lbl_80882178
    fsubs f2, f4, f0
    lfs f5, 0x8(r29)
    lfs f4, 0x14(r29)
    stfs f3, 0x60(r1)
    fsubs f4, f5, f4
    lfs f0, lbl_8088217C
    frsp f5, f2
    stfs f2, 0x64(r1)
    stfs f4, 0x5c(r1)
    fabs f4, f5
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    frsp f4, f4
    stfs f2, 0x58(r1)
    fcmpo cr0, f4, f0
    bge lbl_fn_801A4B00_000004F8
    lfs f0, 0x50(r1)
    fcmpo cr0, f0, f3
    ble lbl_fn_801A4B00_000004EC
    lfs f0, lbl_80882180
    b lbl_fn_801A4B00_000004F0
lbl_fn_801A4B00_000004EC:
    lfs f0, lbl_80882184
lbl_fn_801A4B00_000004F0:
    stfs f0, 0x48(r1)
    b lbl_fn_801A4B00_0000050C
lbl_fn_801A4B00_000004F8:
    fmr f2, f5
    lfs f1, 0x50(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_801A4B00_0000050C:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x68
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80882178
    addi r4, r1, 0x38
    lfs f30, 0x70(r1)
    mr r5, r4
    lfs f31, 0x6c(r1)
    addi r3, r1, 0x98
    lfs f13, 0x68(r1)
    lfs f12, 0x80(r1)
    lfs f11, 0x7c(r1)
    lfs f10, 0x78(r1)
    lfs f9, 0x90(r1)
    lfs f8, 0x8c(r1)
    lfs f7, 0x88(r1)
    lfs f6, 0x94(r1)
    lfs f5, 0x84(r1)
    lfs f4, 0x74(r1)
    lfs f0, lbl_80882188
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x58(r1)
    stfs f3, 0xc8(r1)
    stfs f3, 0xcc(r1)
    stfs f3, 0xd0(r1)
    stfs f0, 0xd4(r1)
    stfs f13, 0x8(r1)
    stfs f31, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f13, 0x98(r1)
    stfs f31, 0x9c(r1)
    stfs f30, 0xa0(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xa8(r1)
    stfs f11, 0xac(r1)
    stfs f12, 0xb0(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0xb8(r1)
    stfs f8, 0xbc(r1)
    stfs f9, 0xc0(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xa4(r1)
    stfs f5, 0xb4(r1)
    stfs f6, 0xc4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_8088217C
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801A4B00_00000628
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80882178
    fcmpo cr0, f3, f0
    ble lbl_fn_801A4B00_00000618
    lfs f0, lbl_80882180
    b lbl_fn_801A4B00_0000061C
lbl_fn_801A4B00_00000618:
    lfs f0, lbl_80882184
lbl_fn_801A4B00_0000061C:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_801A4B00_0000063C
lbl_fn_801A4B00_00000628:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_801A4B00_0000063C:
    lfs f2, lbl_80882178
    addi r3, r1, 0x44
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r29
    lwz r4, 0x4(r29)
    stfs f2, 0x4c(r1)
    stfs f2, 0x58(r1)
    frsp f2, f2
    psq_st f1, 0x534(r4), 0, 0
    stfs f2, 0x53c(r4)
    psq_l f31, 0x108(r1), 0, 0
    lfd f31, 0x100(r1)
    psq_l f30, 0xf8(r1), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    lfd f30, 0xf0(r1)
    lwz r31, 0xec(r1)
    lwz r30, 0xe8(r1)
    lwz r29, 0xe4(r1)
    lwz r0, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_801A4DB0(void)
{
    nofralloc
    psq_l f1, 0x8(r4), 0, 0
    lfs f2, 0x10(r4)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x8(r3)
    blr
}

asm void fn_801A4DC4(void)
{
    nofralloc
    lfs f1, 0x20(r3)
    lfs f0, lbl_8088218C
    fcmpo cr0, f1, f0
    mfcr r3
    srwi r3, r3, 31
    blr
}

asm void fn_801A4DDC(void)
{
    nofralloc
    lwz r0, 0x28(r3)
    li r4, 0x0
    cmpwi r0, 0x0
    beq lbl_fn_801A4DDC_000006E4
    lfs f1, 0x20(r3)
    lfs f0, lbl_808821C0
    fcmpo cr0, f1, f0
    ble lbl_fn_801A4DDC_000006E4
    li r4, 0x1
lbl_fn_801A4DDC_000006E4:
    mr r3, r4
    blr
}

asm void fn_801A4E08(void)
{
    nofralloc
    stwu r1, -0x440(r1)
    mflr r0
    stw r0, 0x444(r1)
    addi r11, r1, 0x3a0
    stfd f31, 0x430(r1)
    psq_st f31, 0x438(r1), 0, 0
    stfd f30, 0x420(r1)
    psq_st f30, 0x428(r1), 0, 0
    stfd f29, 0x410(r1)
    psq_st f29, 0x418(r1), 0, 0
    stfd f28, 0x400(r1)
    psq_st f28, 0x408(r1), 0, 0
    stfd f27, 0x3f0(r1)
    psq_st f27, 0x3f8(r1), 0, 0
    stfd f26, 0x3e0(r1)
    psq_st f26, 0x3e8(r1), 0, 0
    stfd f25, 0x3d0(r1)
    psq_st f25, 0x3d8(r1), 0, 0
    stfd f24, 0x3c0(r1)
    psq_st f24, 0x3c8(r1), 0, 0
    stfd f23, 0x3b0(r1)
    psq_st f23, 0x3b8(r1), 0, 0
    stfd f22, 0x3a0(r1)
    psq_st f22, 0x3a8(r1), 0, 0
    bl _savegpr_19
    lfs f4, 0x8(r5)
    mr r28, r3
    lfs f0, 0x8(r4)
    mr r29, r4
    lfs f3, 0x0(r5)
    mr r30, r5
    fsubs f5, f4, f0
    lfs f0, 0x0(r4)
    lfs f4, 0x4(r5)
    fsubs f6, f3, f0
    lfs f0, 0x4(r4)
    fmuls f3, f5, f5
    fsubs f4, f4, f0
    lfs f0, lbl_808821C4
    stfs f6, 0x188(r1)
    fmadds f3, f6, f6, f3
    stfs f4, 0x18c(r1)
    fcmpo cr0, f3, f0
    stfs f5, 0x190(r1)
    bge lbl_fn_801A4E08_00000824
    lfs f3, lbl_80882178
    li r4, 0x79
    lfs f0, lbl_80882188
    stfs f3, 0x110(r1)
    stfs f3, 0x114(r1)
    stfs f0, 0x118(r1)
    lfs f1, 0x538(r3)
    addi r3, r1, 0x228
    bl fn_805F8E70
    addi r4, r1, 0x110
    addi r3, r1, 0x228
    mr r5, r4
    bl fn_805F93C0
    lfs f5, 0x118(r1)
    lfs f4, lbl_808821C8
    lfs f3, 0x114(r1)
    lfs f0, 0x110(r1)
    fmuls f5, f5, f4
    fmuls f6, f3, f4
    lfs f3, 0x4(r30)
    fmuls f7, f0, f4
    lfs f4, 0x0(r30)
    lfs f0, 0x8(r30)
    fadds f3, f3, f6
    fadds f4, f4, f7
    stfs f7, 0x11c(r1)
    fadds f0, f0, f5
    stfs f6, 0x120(r1)
    stfs f5, 0x124(r1)
    stfs f4, 0x0(r30)
    stfs f3, 0x4(r30)
    stfs f0, 0x8(r30)
    b lbl_fn_801A4E08_00001270
lbl_fn_801A4E08_00000824:
    addi r3, r1, 0x188
    mr r4, r3
    bl fn_805F98D0
    li r0, 0x0
    stw r0, 0x33c(r1)
    mr r3, r28
    stw r0, 0x340(r1)
    stw r0, 0x344(r1)
    stw r0, 0x348(r1)
    bl fn_80179D44
    lfs f2, 0x8(r29)
    addi r27, r1, 0x17c
    psq_l f1, 0x0(r29), 0, 0
    addi r4, r1, 0x170
    psq_st f1, 0x0(r27), 0, 0
    oris r31, r3, 0x8000
    lfs f26, lbl_808821CC
    addi r26, r1, 0x104
    stfs f2, 0x184(r1)
    li r20, 0x1
    lfs f0, 0x180(r1)
    li r21, 0x0
    lfs f2, 0x8(r30)
    psq_l f1, 0x0(r30), 0, 0
    fadds f3, f0, f26
    psq_st f1, 0x0(r4), 0, 0
    lfs f25, lbl_80882194
    lfs f0, 0x174(r1)
    stfs f2, 0x178(r1)
    fadds f0, f0, f26
    lfs f24, lbl_80882178
    stfs f3, 0x180(r1)
    lfs f23, lbl_80882188
    stfs f0, 0x174(r1)
    lfs f22, lbl_808821D8
    b lbl_fn_801A4E08_00000A90
lbl_fn_801A4E08_000008B4:
    lwz r3, lbl_8087EE98
    mr r7, r31
    addi r4, r1, 0x308
    addi r5, r1, 0x17c
    addi r6, r1, 0x170
    li r20, 0x0
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_801A4E08_00000A90
    lwz r3, lbl_8087F430
    addi r4, r1, 0x30c
    lfs f1, lbl_808821D0
    addi r5, r1, 0x188
    lwz r3, 0x10d8(r3)
    lfs f2, lbl_808821D4
    bl fn_803CC1A4
    cmpwi r3, 0x0
    beq lbl_fn_801A4E08_000009A0
    lfs f4, 0x190(r1)
    addi r3, r1, 0xec
    lfs f0, 0x18c(r1)
    fmuls f6, f4, f25
    lfs f3, 0x188(r1)
    fmuls f7, f0, f25
    lfs f0, 0x314(r1)
    fmuls f8, f3, f25
    lfs f3, 0x310(r1)
    fadds f2, f0, f6
    lfs f0, 0x30c(r1)
    fadds f5, f3, f7
    lfs f3, 0x178(r1)
    fadds f0, f0, f8
    lfs f4, 0x174(r1)
    stfs f5, 0x108(r1)
    frsp f5, f2
    stfs f0, 0x104(r1)
    fsubs f9, f5, f3
    lfs f0, 0x170(r1)
    psq_l f1, 0x0(r26), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    lfs f5, 0x180(r1)
    lfs f3, 0x17c(r1)
    fsubs f4, f5, f4
    stfs f8, 0xf8(r1)
    fsubs f0, f3, f0
    stfs f7, 0xfc(r1)
    stfs f6, 0x100(r1)
    stfs f2, 0x10c(r1)
    stfs f2, 0x184(r1)
    stfs f0, 0xec(r1)
    stfs f4, 0xf0(r1)
    stfs f9, 0xf4(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f23
    mfcr r20
    extrwi r20, r20, 1, 1
    b lbl_fn_801A4E08_00000A90
lbl_fn_801A4E08_000009A0:
    stfs f24, 0xe0(r1)
    addi r3, r1, 0x330
    addi r4, r1, 0xe0
    stfs f23, 0xe4(r1)
    stfs f24, 0xe8(r1)
    bl fn_805F9990
    fcmpo cr0, f1, f22
    ble lbl_fn_801A4E08_000009F4
    lfs f3, 0x180(r1)
    xori r0, r21, 0x2
    lfs f0, 0x174(r1)
    srawi r3, r0, 1
    fadds f3, f3, f26
    rlwinm r0, r0, 0, 30, 30
    fadds f0, f0, f26
    subf r0, r0, r3
    stfs f3, 0x180(r1)
    srwi r20, r0, 31
    stfs f0, 0x174(r1)
    addi r21, r21, 0x1
    b lbl_fn_801A4E08_00000A90
lbl_fn_801A4E08_000009F4:
    lfs f3, 0x314(r1)
    addi r3, r1, 0x158
    lfs f0, 0x184(r1)
    lfs f5, 0x310(r1)
    fsubs f6, f3, f0
    lfs f4, 0x180(r1)
    lfs f3, 0x30c(r1)
    lfs f0, 0x17c(r1)
    fsubs f4, f5, f4
    stfs f6, 0x160(r1)
    fsubs f0, f3, f0
    stfs f4, 0x15c(r1)
    stfs f0, 0x158(r1)
    bl fn_805F9940
    lfs f0, 0x620(r28)
    addi r3, r1, 0xd4
    lfs f5, 0x188(r1)
    fsubs f6, f1, f0
    lfs f0, 0x18c(r1)
    lfs f3, 0x190(r1)
    lfs f4, 0x8(r29)
    fmuls f8, f0, f6
    lfs f0, 0x0(r29)
    fmuls f7, f3, f6
    lfs f3, 0x4(r29)
    fmuls f5, f5, f6
    stfs f8, 0xcc(r1)
    fadds f3, f3, f8
    stfs f7, 0xd0(r1)
    fadds f0, f0, f5
    fadds f2, f4, f7
    stfs f3, 0xd8(r1)
    stfs f0, 0xd4(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f5, 0xc8(r1)
    stfs f2, 0xdc(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x8(r30)
    b lbl_fn_801A4E08_00000A98
lbl_fn_801A4E08_00000A90:
    cmpwi r20, 0x0
    bne lbl_fn_801A4E08_000008B4
lbl_fn_801A4E08_00000A98:
    lis r3, lbl_8073A170@ha
    lfs f24, lbl_808821DC
    lfs f25, lbl_80882178
    addi r25, r1, 0xbc
    lfs f31, lbl_80882188
    addi r26, r1, 0x164
    lfd f30, lbl_8073A170@l(r3)
    addi r23, r1, 0xa4
    lfs f29, lbl_808821E4
    addi r24, r1, 0x17c
    lfs f28, lbl_808821E0
    addi r21, r1, 0x98
    lfs f27, lbl_808821E8
    addi r22, r1, 0x170
    lfs f26, lbl_8088218C
    li r20, 0x0
    li r19, 0x0
    lis r27, 0x4330
lbl_fn_801A4E08_00000AE0:
    cmpwi r19, 0x0
    bne lbl_fn_801A4E08_00000AF8
    stfs f25, 0x164(r1)
    stfs f25, 0x168(r1)
    stfs f25, 0x16c(r1)
    b lbl_fn_801A4E08_00000B84
lbl_fn_801A4E08_00000AF8:
    stfs f25, 0xb0(r1)
    addi r3, r1, 0x188
    addi r4, r1, 0xb0
    addi r5, r1, 0xbc
    stfs f31, 0xb4(r1)
    stfs f25, 0xb8(r1)
    bl fn_805F99B0
    addi r0, r19, 0x1
    psq_l f1, 0x0(r25), 0, 0
    xoris r0, r0, 0x8000
    stw r0, 0x35c(r1)
    lfs f2, 0xc4(r1)
    addi r3, r1, 0x288
    stw r27, 0x358(r1)
    addi r4, r1, 0x188
    lfd f0, 0x358(r1)
    psq_st f1, 0x0(r26), 0, 0
    fsubs f0, f0, f30
    stfs f2, 0x16c(r1)
    fmuls f0, f29, f0
    fmuls f1, f28, f0
    bl fn_805F9050
    mr r4, r26
    mr r5, r26
    addi r3, r1, 0x288
    bl fn_805F93C0
    lfs f4, 0x164(r1)
    lfs f3, 0x168(r1)
    lfs f0, 0x16c(r1)
    fmuls f4, f4, f27
    fmuls f3, f3, f27
    fmuls f0, f0, f27
    stfs f4, 0x164(r1)
    stfs f3, 0x168(r1)
    stfs f0, 0x16c(r1)
lbl_fn_801A4E08_00000B84:
    lfs f0, 0x8(r29)
    mr r5, r24
    lfs f8, 0x16c(r1)
    mr r6, r22
    lfs f3, 0x4(r29)
    mr r7, r31
    fadds f2, f0, f8
    lfs f7, 0x168(r1)
    lfs f0, 0x0(r29)
    addi r4, r1, 0x308
    lfs f6, 0x164(r1)
    fadds f3, f3, f7
    fadds f0, f0, f6
    stfs f3, 0xa8(r1)
    lwz r3, lbl_8087EE98
    li r8, 0x0
    stfs f0, 0xa4(r1)
    li r9, 0x0
    psq_l f1, 0x0(r23), 0, 0
    psq_st f1, 0x0(r24), 0, 0
    stfs f2, 0x184(r1)
    lfs f0, 0x180(r1)
    lfs f5, 0x4(r30)
    lfs f4, 0x0(r30)
    fadds f3, f0, f26
    fadds f5, f5, f7
    lfs f0, 0x8(r30)
    fadds f4, f4, f6
    stfs f2, 0xac(r1)
    fadds f2, f0, f8
    stfs f4, 0x98(r1)
    stfs f5, 0x9c(r1)
    psq_l f1, 0x0(r21), 0, 0
    psq_st f1, 0x0(r22), 0, 0
    lfs f0, 0x174(r1)
    stfs f2, 0xa0(r1)
    fadds f0, f0, f26
    stfs f2, 0x178(r1)
    stfs f3, 0x180(r1)
    stfs f0, 0x174(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_801A4E08_00000C7C
    lfs f3, 0x314(r1)
    addi r3, r1, 0x14c
    lfs f0, 0x184(r1)
    li r20, 0x1
    lfs f5, 0x310(r1)
    fsubs f6, f3, f0
    lfs f4, 0x180(r1)
    lfs f3, 0x30c(r1)
    lfs f0, 0x17c(r1)
    fsubs f4, f5, f4
    stfs f6, 0x154(r1)
    fsubs f0, f3, f0
    stfs f4, 0x150(r1)
    stfs f0, 0x14c(r1)
    bl fn_805F9940
    fcmpo cr0, f1, f24
    bge lbl_fn_801A4E08_00000C7C
    lfs f0, 0x620(r28)
    fsubs f24, f1, f0
lbl_fn_801A4E08_00000C7C:
    addi r19, r19, 0x1
    cmpwi r19, 0x4
    blt lbl_fn_801A4E08_00000AE0
    cmpwi r20, 0x0
    beq lbl_fn_801A4E08_00000CE8
    lfs f4, 0x190(r1)
    addi r3, r1, 0x8c
    lfs f0, 0x18c(r1)
    lfs f3, 0x188(r1)
    fmuls f4, f4, f24
    fmuls f5, f0, f24
    lfs f0, 0x8(r29)
    fmuls f6, f3, f24
    lfs f3, 0x4(r29)
    fadds f2, f0, f4
    lfs f0, 0x0(r29)
    fadds f3, f3, f5
    stfs f6, 0x80(r1)
    fadds f0, f0, f6
    stfs f3, 0x90(r1)
    stfs f0, 0x8c(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f5, 0x84(r1)
    stfs f4, 0x88(r1)
    stfs f2, 0x94(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x8(r30)
lbl_fn_801A4E08_00000CE8:
    psq_l f1, 0x0(r30), 0, 0
    lis r6, lbl_807C7030@ha
    lfs f2, 0x8(r30)
    addi r5, r1, 0x17c
    stfs f2, 0x184(r1)
    mr r7, r31
    lwz r3, lbl_8087EE98
    addi r4, r1, 0x308
    psq_st f1, 0x0(r5), 0, 0
    addi r6, r6, lbl_807C7030@l
    li r8, 0x0
    li r9, 0x0
    lfs f1, 0x620(r28)
    lfs f0, 0x180(r1)
    fadds f0, f0, f1
    stfs f0, 0x180(r1)
    bl fn_8004D388
    cmpwi r3, 0x0
    beq lbl_fn_801A4E08_00000D68
    lfs f0, 0x318(r1)
    stfs f0, 0x0(r30)
    lfs f4, 0x4(r30)
    lfs f0, 0x320(r1)
    stfs f0, 0x8(r30)
    lfs f3, 0x31c(r1)
    lfs f0, 0x620(r28)
    fsubs f0, f3, f0
    fcmpo cr0, f4, f0
    ble lbl_fn_801A4E08_00000D60
    b lbl_fn_801A4E08_00000D64
lbl_fn_801A4E08_00000D60:
    fmr f4, f0
lbl_fn_801A4E08_00000D64:
    stfs f4, 0x4(r30)
lbl_fn_801A4E08_00000D68:
    lwz r0, lbl_8087F610
    lfs f23, 0x4(r30)
    cmpwi r0, 0x0
    beq lbl_fn_801A4E08_00000D80
    lfs f25, lbl_808821EC
    b lbl_fn_801A4E08_00000D84
lbl_fn_801A4E08_00000D80:
    lfs f25, lbl_808821F0
lbl_fn_801A4E08_00000D84:
    lfs f0, 0x4(r30)
    lis r3, lbl_8073A170@ha
    lfs f26, lbl_80882178
    addi r22, r1, 0x74
    fsubs f24, f0, f25
    lfs f27, lbl_80882188
    lfd f28, lbl_8073A170@l(r3)
    addi r21, r1, 0x164
    lfs f29, lbl_808821E4
    addi r24, r1, 0x68
    lfs f30, lbl_808821E8
    addi r23, r1, 0x17c
    lfs f31, lbl_808821CC
    addi r26, r1, 0x5c
    lfs f22, lbl_8088218C
    addi r25, r1, 0x170
    li r20, 0x0
    li r19, 0x0
    lis r27, 0x4330
lbl_fn_801A4E08_00000DD0:
    cmpwi r19, 0x0
    bne lbl_fn_801A4E08_00000DE8
    stfs f26, 0x164(r1)
    stfs f26, 0x168(r1)
    stfs f26, 0x16c(r1)
    b lbl_fn_801A4E08_00000E84
lbl_fn_801A4E08_00000DE8:
    stfs f26, 0x74(r1)
    addi r3, r1, 0x1f8
    li r4, 0x79
    stfs f26, 0x78(r1)
    stfs f27, 0x7c(r1)
    lfs f1, 0x538(r28)
    bl fn_805F8E70
    addi r4, r1, 0x74
    addi r3, r1, 0x1f8
    mr r5, r4
    bl fn_805F93C0
    xoris r0, r19, 0x8000
    stw r0, 0x35c(r1)
    psq_l f1, 0x0(r22), 0, 0
    addi r3, r1, 0x258
    stw r27, 0x358(r1)
    li r4, 0x79
    lfs f2, 0x7c(r1)
    lfd f0, 0x358(r1)
    psq_st f1, 0x0(r21), 0, 0
    fsubs f0, f0, f28
    stfs f2, 0x16c(r1)
    fmuls f0, f29, f0
    fmuls f0, f30, f0
    fdivs f1, f0, f31
    bl fn_805F8E70
    mr r4, r21
    mr r5, r21
    addi r3, r1, 0x258
    bl fn_805F93C0
    lfs f4, 0x164(r1)
    lfs f3, 0x168(r1)
    lfs f0, 0x16c(r1)
    fmuls f4, f4, f30
    fmuls f3, f3, f30
    fmuls f0, f0, f30
    stfs f4, 0x164(r1)
    stfs f3, 0x168(r1)
    stfs f0, 0x16c(r1)
lbl_fn_801A4E08_00000E84:
    lfs f4, 0x4(r30)
    mr r5, r23
    lfs f0, 0x168(r1)
    mr r6, r25
    lfs f3, 0x0(r30)
    mr r7, r31
    fadds f5, f4, f0
    lfs f0, 0x164(r1)
    lfs f4, 0x8(r30)
    addi r4, r1, 0x308
    fadds f3, f3, f0
    lfs f0, 0x16c(r1)
    stfs f5, 0x6c(r1)
    fadds f2, f4, f0
    lwz r3, lbl_8087EE98
    li r8, 0x0
    stfs f3, 0x68(r1)
    li r9, 0x0
    psq_l f1, 0x0(r24), 0, 0
    psq_st f1, 0x0(r23), 0, 0
    stfs f3, 0x5c(r1)
    lfs f0, 0x180(r1)
    stfs f5, 0x60(r1)
    fadds f3, f0, f22
    psq_l f1, 0x0(r26), 0, 0
    psq_st f1, 0x0(r25), 0, 0
    lfs f0, 0x174(r1)
    stfs f2, 0x70(r1)
    fsubs f0, f0, f25
    stfs f2, 0x184(r1)
    stfs f2, 0x64(r1)
    stfs f2, 0x178(r1)
    stfs f3, 0x180(r1)
    stfs f0, 0x174(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_801A4E08_00000F2C
    lfs f0, 0x310(r1)
    fcmpo cr0, f24, f0
    bge lbl_fn_801A4E08_00000F28
    fmr f24, f0
lbl_fn_801A4E08_00000F28:
    li r20, 0x1
lbl_fn_801A4E08_00000F2C:
    addi r19, r19, 0x1
    cmpwi r19, 0x4
    blt lbl_fn_801A4E08_00000DD0
    cmpwi r20, 0x0
    beq lbl_fn_801A4E08_00000FF4
    fsubs f3, f23, f24
    lfs f0, lbl_80882190
    stfs f24, 0x4(r30)
    fcmpo cr0, f3, f0
    ble lbl_fn_801A4E08_00000FF4
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    bne lbl_fn_801A4E08_00000FF4
    lfs f2, 0x8(r29)
    addi r5, r1, 0x17c
    psq_l f1, 0x0(r29), 0, 0
    addi r6, r1, 0x170
    psq_st f1, 0x0(r5), 0, 0
    mr r7, r31
    lfs f4, lbl_808821CC
    addi r4, r1, 0x308
    stfs f2, 0x184(r1)
    li r8, 0x0
    lfs f0, 0x180(r1)
    li r9, 0x0
    lfs f2, 0x8(r30)
    psq_l f1, 0x0(r30), 0, 0
    fadds f3, f0, f4
    psq_st f1, 0x0(r6), 0, 0
    lwz r3, lbl_8087EE98
    lfs f0, 0x174(r1)
    stfs f2, 0x178(r1)
    fadds f0, f0, f4
    stfs f3, 0x180(r1)
    stfs f0, 0x174(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_801A4E08_00000FF4
    lfs f3, lbl_80882178
    addi r3, r1, 0x330
    lfs f0, lbl_80882188
    addi r4, r1, 0x50
    stfs f3, 0x50(r1)
    stfs f0, 0x54(r1)
    stfs f3, 0x58(r1)
    bl fn_805F9990
    lfs f0, lbl_808821F4
    fcmpo cr0, f1, f0
    ble lbl_fn_801A4E08_00000FF4
    stfs f23, 0x4(r30)
lbl_fn_801A4E08_00000FF4:
    lfs f5, 0x8(r30)
    addi r3, r1, 0x140
    lfs f0, 0x8(r29)
    lfs f4, 0x0(r30)
    fsubs f5, f5, f0
    lfs f3, 0x0(r29)
    lfs f0, lbl_80882178
    fsubs f3, f4, f3
    stfs f5, 0x148(r1)
    stfs f3, 0x140(r1)
    stfs f0, 0x144(r1)
    bl fn_805F9920
    lfs f0, lbl_808821C4
    fcmpo cr0, f1, f0
    bge lbl_fn_801A4E08_000010B4
    lfs f3, lbl_80882178
    addi r3, r1, 0x1c8
    lfs f0, lbl_80882188
    li r4, 0x79
    stfs f3, 0x38(r1)
    stfs f3, 0x3c(r1)
    stfs f0, 0x40(r1)
    lfs f1, 0x538(r28)
    bl fn_805F8E70
    addi r4, r1, 0x38
    addi r3, r1, 0x1c8
    mr r5, r4
    bl fn_805F93C0
    lfs f5, 0x40(r1)
    lfs f4, lbl_808821C8
    lfs f3, 0x3c(r1)
    lfs f0, 0x38(r1)
    fmuls f5, f5, f4
    fmuls f6, f3, f4
    lfs f3, 0x4(r30)
    fmuls f7, f0, f4
    lfs f4, 0x0(r30)
    lfs f0, 0x8(r30)
    fadds f3, f3, f6
    fadds f4, f4, f7
    stfs f7, 0x44(r1)
    fadds f0, f0, f5
    stfs f6, 0x48(r1)
    stfs f5, 0x4c(r1)
    stfs f4, 0x0(r30)
    stfs f3, 0x4(r30)
    stfs f0, 0x8(r30)
    b lbl_fn_801A4E08_0000117C
lbl_fn_801A4E08_000010B4:
    addi r3, r1, 0x140
    addi r21, r1, 0x2c
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r21
    lfs f2, 0x148(r1)
    mr r4, r21
    psq_st f1, 0x0(r21), 0, 0
    stfs f2, 0x34(r1)
    bl fn_805F98D0
    mr r3, r21
    addi r4, r1, 0x188
    bl fn_805F9990
    lfs f3, lbl_80882178
    fcmpo cr0, f1, f3
    bge lbl_fn_801A4E08_0000117C
    lfs f0, lbl_80882188
    addi r3, r1, 0x198
    stfs f3, 0x8(r1)
    li r4, 0x79
    stfs f3, 0xc(r1)
    stfs f0, 0x10(r1)
    lfs f1, 0x538(r28)
    bl fn_805F8E70
    addi r4, r1, 0x8
    addi r3, r1, 0x198
    mr r5, r4
    bl fn_805F93C0
    lfs f5, 0x10(r1)
    addi r3, r1, 0x20
    lfs f4, lbl_808821F8
    lfs f0, 0xc(r1)
    fmuls f5, f5, f4
    lfs f3, 0x8(r1)
    fmuls f6, f0, f4
    lfs f0, 0x8(r29)
    fmuls f4, f3, f4
    lfs f3, 0x4(r29)
    fadds f2, f0, f5
    lfs f0, 0x0(r29)
    fadds f3, f3, f6
    stfs f4, 0x14(r1)
    fadds f0, f0, f4
    stfs f3, 0x24(r1)
    stfs f0, 0x20(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f6, 0x18(r1)
    stfs f5, 0x1c(r1)
    stfs f2, 0x28(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x8(r30)
lbl_fn_801A4E08_0000117C:
    lwz r3, lbl_8087F610
    li r0, 0x0
    cmpwi r3, 0x0
    beq lbl_fn_801A4E08_000011B4
    lwz r4, 0x540(r3)
    li r3, 0x1
    cmpwi r4, 0x0
    beq lbl_fn_801A4E08_000011A8
    cmpwi r4, 0x1
    beq lbl_fn_801A4E08_000011A8
    li r3, 0x0
lbl_fn_801A4E08_000011A8:
    cmpwi r3, 0x0
    beq lbl_fn_801A4E08_000011B4
    li r0, 0x1
lbl_fn_801A4E08_000011B4:
    cmpwi r0, 0x0
    beq lbl_fn_801A4E08_00001270
    lwz r3, lbl_8087F430
    bl fn_80373148
    lwz r0, 0x4c(r3)
    cmpwi r0, 0x1
    bne lbl_fn_801A4E08_00001270
    lwz r3, lbl_8087F430
    bl fn_80373148
    lwz r0, 0x50(r3)
    cmpwi r0, 0x5
    bne lbl_fn_801A4E08_00001270
    li r0, 0x0
    stw r0, 0x2ec(r1)
    addi r21, r1, 0x134
    addi r22, r1, 0x128
    stw r0, 0x2f0(r1)
    mr r3, r28
    lfs f4, lbl_808821CC
    stw r0, 0x2f4(r1)
    lfs f0, lbl_808821A0
    stw r0, 0x2f8(r1)
    lfs f2, 0x8(r30)
    psq_l f1, 0x0(r30), 0, 0
    psq_st f1, 0x0(r21), 0, 0
    psq_st f1, 0x0(r22), 0, 0
    lfs f5, 0x138(r1)
    lfs f3, 0x12c(r1)
    fadds f4, f5, f4
    stfs f2, 0x13c(r1)
    fsubs f0, f3, f0
    stfs f2, 0x130(r1)
    stfs f4, 0x138(r1)
    stfs f0, 0x12c(r1)
    bl fn_80179D44
    oris r7, r3, 0x8000
    lwz r3, lbl_8087EE98
    mr r5, r21
    mr r6, r22
    addi r4, r1, 0x2b8
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_801A4E08_00001270
    lfs f0, 0x2c0(r1)
    stfs f0, 0x4(r30)
lbl_fn_801A4E08_00001270:
    addi r11, r1, 0x3a0
    psq_l f31, 0x438(r1), 0, 0
    lfd f31, 0x430(r1)
    psq_l f30, 0x428(r1), 0, 0
    lfd f30, 0x420(r1)
    psq_l f29, 0x418(r1), 0, 0
    lfd f29, 0x410(r1)
    psq_l f28, 0x408(r1), 0, 0
    lfd f28, 0x400(r1)
    psq_l f27, 0x3f8(r1), 0, 0
    lfd f27, 0x3f0(r1)
    psq_l f26, 0x3e8(r1), 0, 0
    lfd f26, 0x3e0(r1)
    psq_l f25, 0x3d8(r1), 0, 0
    lfd f25, 0x3d0(r1)
    psq_l f24, 0x3c8(r1), 0, 0
    lfd f24, 0x3c0(r1)
    psq_l f23, 0x3b8(r1), 0, 0
    lfd f23, 0x3b0(r1)
    psq_l f22, 0x3a8(r1), 0, 0
    lfd f22, 0x3a0(r1)
    bl _restgpr_19
    lwz r0, 0x444(r1)
    mtlr r0
    addi r1, r1, 0x440
    blr
}

asm void fn_801A59F4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lfs f1, lbl_80882190
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    mr r30, r3
    bl fn_801A4B00
    lis r3, lbl_8077F480@ha
    lwz r4, 0x4(r30)
    addi r3, r3, lbl_8077F480@l
    stw r3, 0x0(r30)
    li r3, 0xe
    li r0, 0x1
    stw r3, 0x560(r4)
    li r4, 0x0
    lfs f0, lbl_80882188
    li r5, 0x15d
    lwz r3, 0x4(r30)
    li r6, 0x0
    lfs f1, lbl_80882178
    li r7, 0x0
    stw r0, 0x3fc(r3)
    addi r31, r3, 0xb0
    lfs f2, lbl_80882194
    mr r3, r31
    stfs f0, 0x24c(r31)
    li r8, 0x1
    bl fn_80097C08
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    bne lbl_fn_801A59F4_00001408
    lfs f4, 0x10(r30)
    lfs f0, 0x1c(r30)
    lfs f3, 0x8(r30)
    fsubs f5, f4, f0
    lfs f0, 0x14(r30)
    lfs f4, 0xc(r30)
    fsubs f6, f3, f0
    lfs f3, 0x18(r30)
    fmuls f0, f5, f5
    fsubs f3, f4, f3
    stfs f6, 0x14(r1)
    fmadds f1, f6, f6, f0
    stfs f3, 0x18(r1)
    stfs f5, 0x1c(r1)
    bl fn_8068B100
    frsp f3, f1
    lfs f0, lbl_80882190
    lfs f4, lbl_80882188
    fdivs f0, f3, f0
    fcmpo cr0, f4, f0
    bge lbl_fn_801A59F4_000013B0
    b lbl_fn_801A59F4_000013F8
lbl_fn_801A59F4_000013B0:
    lfs f4, 0x10(r30)
    lfs f0, 0x1c(r30)
    lfs f3, 0x8(r30)
    fsubs f5, f4, f0
    lfs f0, 0x14(r30)
    lfs f4, 0xc(r30)
    fsubs f6, f3, f0
    lfs f3, 0x18(r30)
    fmuls f0, f5, f5
    fsubs f3, f4, f3
    stfs f6, 0x8(r1)
    fmadds f1, f6, f6, f0
    stfs f3, 0xc(r1)
    stfs f5, 0x10(r1)
    bl fn_8068B100
    frsp f3, f1
    lfs f0, lbl_80882190
    fdivs f4, f3, f0
lbl_fn_801A59F4_000013F8:
    lfs f3, lbl_808821B8
    lfs f0, 0x18(r30)
    fmadds f0, f3, f4, f0
    stfs f0, 0x18(r30)
lbl_fn_801A59F4_00001408:
    lwz r3, 0x4(r30)
    lfs f2, 0x1c(r30)
    psq_l f1, 0x14(r30), 0, 0
    psq_st f1, 0x528(r3), 0, 0
    lfs f0, lbl_80882188
    stfs f2, 0x530(r3)
    stfs f0, 0x238(r31)
    lwz r0, lbl_8087F498
    cmpwi r0, 0x0
    beq lbl_fn_801A59F4_00001464
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    subf. r0, r4, r0
    bne lbl_fn_801A59F4_00001464
    lwz r3, lbl_8087F498
    li r5, 0x20
    lwz r4, 0x4(r30)
    li r6, 0x0
    lfs f1, lbl_80882188
    lfs f2, lbl_8088218C
    bl fn_803EA77C
lbl_fn_801A59F4_00001464:
    mr r3, r30
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_801A5B9C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801A5B9C_000014A8
    cmpwi r4, 0x0
    ble lbl_fn_801A5B9C_000014A8
    bl dtor_80084684
lbl_fn_801A5B9C_000014A8:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801A5BDC(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r11, r1, 0x60
    stfd f31, 0x60(r1)
    psq_st f31, 0x68(r1), 0, 0
    bl _savegpr_26
    lwz r4, lbl_8087EFA8
    mr r30, r3
    lwz r5, 0x4(r3)
    lfs f4, 0x3a4(r4)
    lfs f3, 0x20(r3)
    addi r31, r5, 0xb0
    lfs f0, lbl_80882190
    fsubs f3, f3, f4
    lfs f10, lbl_80882178
    stfs f3, 0x20(r3)
    fdivs f0, f3, f0
    fcmpo cr0, f10, f0
    ble lbl_fn_801A5BDC_00001514
    b lbl_fn_801A5BDC_00001518
lbl_fn_801A5BDC_00001514:
    fmr f10, f0
lbl_fn_801A5BDC_00001518:
    lfs f0, 0x18(r3)
    addi r4, r1, 0x28
    lfs f4, 0xc(r3)
    lfs f3, 0x14(r3)
    fsubs f8, f0, f4
    lfs f0, 0x8(r3)
    lfs f5, 0x1c(r3)
    fsubs f7, f3, f0
    lfs f3, 0x10(r3)
    fmuls f6, f8, f10
    fsubs f9, f5, f3
    stfs f7, 0x1c(r1)
    fmuls f5, f7, f10
    fadds f4, f6, f4
    lwz r5, 0x4(r3)
    fmuls f7, f9, f10
    fadds f0, f5, f0
    stfs f4, 0x2c(r1)
    stfs f0, 0x28(r1)
    fadds f2, f7, f3
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x528(r5), 0, 0
    stfs f2, 0x530(r5)
    lwz r0, 0x28(r3)
    stfs f8, 0x20(r1)
    cmpwi r0, 0x0
    stfs f9, 0x24(r1)
    stfs f5, 0x10(r1)
    stfs f6, 0x14(r1)
    stfs f7, 0x18(r1)
    stfs f2, 0x30(r1)
    bne lbl_fn_801A5BDC_00001700
    lfs f3, 0x20(r3)
    lfs f0, lbl_80882178
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_801A5BDC_00001700
    li r29, 0x1
    stw r29, 0x28(r3)
    lwz r3, 0x4(r3)
    bl fn_8016DA4C
    lwz r27, 0x4(r30)
    lwz r26, lbl_8087F048
    lwz r28, 0x638(r27)
    mr r3, r26
    bl fn_800F8548
    li r0, -0x1
    stw r0, 0x8(r1)
    mr r6, r3
    lfs f1, lbl_80882178
    stw r0, 0xc(r1)
    mr r3, r26
    lfs f2, lbl_80882188
    mr r5, r28
    lwz r4, 0x4(r30)
    addi r7, r27, 0x528
    addi r8, r27, 0x534
    li r9, 0x0
    li r10, 0x1e
    bl fn_800FAB80
    lwz r3, 0x4(r30)
    lfs f0, lbl_80882178
    lfs f3, 0xac8(r3)
    fcmpo cr0, f3, f0
    mfcr r0
    extrwi. r0, r0, 1, 1
    beq lbl_fn_801A5BDC_0000168C
    li r3, 0x1395
    bl fn_80219E6C
    lwz r26, lbl_8087F048
    mr r27, r3
    mr r3, r26
    bl fn_800F8548
    stw r29, 0x8(r1)
    mr r6, r3
    mr r3, r26
    mr r5, r27
    lwz r4, 0x4(r30)
    li r8, 0x0
    li r9, 0x1e
    li r10, -0x1
    addi r7, r4, 0x528
    bl fn_800FB4B0
    lwz r3, 0x4(r30)
    li r4, 0x1395
    li r5, 0x0
    bl fn_801789D8
    cmpwi r3, 0x0
    beq lbl_fn_801A5BDC_0000168C
    lwz r3, 0x4(r30)
    mr r4, r27
    mr r5, r3
    bl fn_80178864
lbl_fn_801A5BDC_0000168C:
    lwz r5, 0x4(r30)
    lis r3, lbl_8073A170@ha
    lis r0, 0x4330
    stw r0, 0x38(r1)
    lwz r4, 0x944(r5)
    lfd f5, lbl_8073A170@l(r3)
    xoris r3, r4, 0x8000
    stw r3, 0x3c(r1)
    lfs f4, lbl_808821FC
    lfd f0, 0x38(r1)
    lfs f3, 0x7dc(r5)
    fsubs f0, f0, f5
    lfs f6, lbl_80882178
    fnmsubs f0, f4, f0, f3
    fcmpo cr0, f6, f0
    ble lbl_fn_801A5BDC_000016D0
    b lbl_fn_801A5BDC_000016E4
lbl_fn_801A5BDC_000016D0:
    stw r3, 0x44(r1)
    stw r0, 0x40(r1)
    lfd f0, 0x40(r1)
    fsubs f0, f0, f5
    fnmsubs f6, f4, f0, f3
lbl_fn_801A5BDC_000016E4:
    stfs f6, 0x7dc(r5)
    lis r4, 0x400
    li r5, 0x96
    li r6, 0x0
    lwz r3, 0x4(r30)
    addi r3, r3, 0x7d4
    bl fn_80133130
lbl_fn_801A5BDC_00001700:
    lfs f31, 0x234(r31)
    mr r3, r31
    li r4, 0x0
    bl fn_80097D7C
    lfs f0, lbl_808821AC
    fsubs f0, f1, f0
    fcmpo cr0, f31, f0
    cror eq, gt, eq
    bne lbl_fn_801A5BDC_0000172C
    lfs f0, lbl_80882200
    stfs f0, 0x238(r31)
lbl_fn_801A5BDC_0000172C:
    lfs f31, 0x234(r31)
    mr r3, r31
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_801A5BDC_00001750
    li r3, 0x1
    b lbl_fn_801A5BDC_00001754
lbl_fn_801A5BDC_00001750:
    li r3, 0x0
lbl_fn_801A5BDC_00001754:
    addi r11, r1, 0x60
    psq_l f31, 0x68(r1), 0, 0
    lfd f31, 0x60(r1)
    bl _restgpr_26
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_801A5E90(void)
{
    nofralloc
    stwu r1, -0x1d0(r1)
    mflr r0
    lfs f0, lbl_80882190
    stw r0, 0x1d4(r1)
    fcmpo cr0, f1, f0
    stfd f31, 0x1c0(r1)
    psq_st f31, 0x1c8(r1), 0, 0
    stfd f30, 0x1b0(r1)
    psq_st f30, 0x1b8(r1), 0, 0
    fmr f30, f1
    stw r31, 0x1ac(r1)
    mr r31, r3
    stw r30, 0x1a8(r1)
    mr r30, r6
    stw r29, 0x1a4(r1)
    ble lbl_fn_801A5E90_000017BC
    lfs f1, lbl_808821EC
    b lbl_fn_801A5E90_000017C0
lbl_fn_801A5E90_000017BC:
    fmr f1, f0
lbl_fn_801A5E90_000017C0:
    li r6, 0x0
    bl fn_801A4B00
    lis r3, lbl_8077F400@ha
    stfs f30, 0x2c(r31)
    addi r3, r3, lbl_8077F400@l
    lwz r4, 0x4(r31)
    stw r3, 0x0(r31)
    li r3, 0xe
    li r0, 0x1
    lfs f0, lbl_80882188
    stw r3, 0x560(r4)
    li r4, 0x0
    lfs f1, lbl_80882178
    li r5, 0x1d2
    lwz r3, 0x4(r31)
    li r6, 0x0
    lfs f2, lbl_80882194
    li r7, 0x0
    stw r0, 0x3fc(r3)
    addi r29, r3, 0xb0
    li r8, 0x1
    stfs f0, 0x24c(r29)
    mr r3, r29
    bl fn_80097C08
    lfs f0, lbl_808821E0
    stfs f0, 0x238(r29)
    lfs f0, lbl_80882204
    stfs f0, 0x234(r29)
    lwz r3, 0x4(r31)
    bl fn_801446F0
    cmpwi r30, 0x0
    beq lbl_fn_801A5E90_000019C8
    lwz r3, 0x4(r31)
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801A5E90_00001858
    cmpwi r0, 0x3
    bne lbl_fn_801A5E90_00001868
lbl_fn_801A5E90_00001858:
    addi r4, r31, 0x14
    addi r5, r31, 0x8
    bl fn_801A4E08
    b lbl_fn_801A5E90_000019C8
lbl_fn_801A5E90_00001868:
    lfs f2, 0x10(r31)
    addi r30, r1, 0xa4
    psq_l f1, 0x8(r31), 0, 0
    li r0, 0x0
    psq_st f1, 0x0(r30), 0, 0
    addi r29, r1, 0x98
    lfs f3, lbl_8088218C
    lfs f4, 0xa8(r1)
    lfs f0, lbl_808821F0
    fadds f3, f4, f3
    stfs f2, 0xac(r1)
    stfs f3, 0xa8(r1)
    psq_l f1, 0x0(r30), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    lfs f3, 0x9c(r1)
    stfs f2, 0xa0(r1)
    fsubs f0, f3, f0
    stw r0, 0x184(r1)
    stfs f0, 0x9c(r1)
    stw r0, 0x188(r1)
    stw r0, 0x18c(r1)
    stw r0, 0x190(r1)
    bl fn_80179D44
    oris r7, r3, 0x8000
    lwz r3, lbl_8087EE98
    mr r5, r30
    mr r6, r29
    addi r4, r1, 0x150
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_801A5E90_00001900
    addi r3, r1, 0x154
    lfs f2, 0x15c(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x8(r31), 0, 0
    stfs f2, 0x10(r31)
lbl_fn_801A5E90_00001900:
    lfs f4, 0x10(r31)
    lfs f0, 0x1c(r31)
    lfs f3, 0x8(r31)
    fsubs f5, f4, f0
    lfs f0, 0x14(r31)
    lfs f4, 0xc(r31)
    fsubs f6, f3, f0
    lfs f0, 0x18(r31)
    fmuls f3, f5, f5
    fsubs f4, f4, f0
    lfs f0, lbl_808821C4
    stfs f6, 0x80(r1)
    fmadds f3, f6, f6, f3
    stfs f4, 0x84(r1)
    fcmpo cr0, f3, f0
    stfs f5, 0x88(r1)
    bge lbl_fn_801A5E90_000019C8
    lwz r5, 0x4(r31)
    addi r3, r1, 0x120
    lfs f3, lbl_80882178
    li r4, 0x79
    lfs f0, lbl_80882188
    stfs f3, 0x68(r1)
    stfs f3, 0x6c(r1)
    stfs f0, 0x70(r1)
    lfs f1, 0x538(r5)
    bl fn_805F8E70
    addi r4, r1, 0x68
    addi r3, r1, 0x120
    mr r5, r4
    bl fn_805F93C0
    lfs f5, 0x70(r1)
    lfs f4, lbl_808821C8
    lfs f3, 0x6c(r1)
    lfs f0, 0x68(r1)
    fmuls f5, f5, f4
    fmuls f6, f3, f4
    lfs f3, 0xc(r31)
    fmuls f7, f0, f4
    lfs f4, 0x8(r31)
    lfs f0, 0x10(r31)
    fadds f3, f3, f6
    fadds f4, f4, f7
    stfs f7, 0x74(r1)
    fadds f0, f0, f5
    stfs f6, 0x78(r1)
    stfs f5, 0x7c(r1)
    stfs f4, 0x8(r31)
    stfs f3, 0xc(r31)
    stfs f0, 0x10(r31)
lbl_fn_801A5E90_000019C8:
    lfs f3, 0x10(r31)
    addi r3, r1, 0x8c
    lfs f0, 0x1c(r31)
    lfs f5, 0xc(r31)
    fsubs f6, f3, f0
    lfs f4, 0x18(r31)
    lfs f3, 0x8(r31)
    lfs f0, 0x14(r31)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x90(r1)
    stfs f0, 0x8c(r1)
    stfs f6, 0x94(r1)
    bl fn_805F9920
    lfs f0, lbl_808821C4
    fcmpo cr0, f1, f0
    ble lbl_fn_801A5E90_00001BDC
    lfs f2, 0x94(r1)
    addi r3, r1, 0x8c
    lfs f0, lbl_8088217C
    addi r29, r1, 0x50
    fabs f3, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    frsp f3, f3
    stfs f2, 0x58(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_801A5E90_00001A5C
    lfs f3, 0x50(r1)
    lfs f0, lbl_80882178
    fcmpo cr0, f3, f0
    ble lbl_fn_801A5E90_00001A50
    lfs f0, lbl_80882180
    b lbl_fn_801A5E90_00001A54
lbl_fn_801A5E90_00001A50:
    lfs f0, lbl_80882184
lbl_fn_801A5E90_00001A54:
    stfs f0, 0x48(r1)
    b lbl_fn_801A5E90_00001A70
lbl_fn_801A5E90_00001A5C:
    frsp f2, f2
    lfs f1, 0x50(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_801A5E90_00001A70:
    lfs f0, 0x48(r1)
    addi r3, r1, 0xb0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80882178
    addi r4, r1, 0x38
    lfs f30, 0xb8(r1)
    mr r5, r4
    lfs f31, 0xb4(r1)
    addi r3, r1, 0xe0
    lfs f13, 0xb0(r1)
    lfs f12, 0xc8(r1)
    lfs f11, 0xc4(r1)
    lfs f10, 0xc0(r1)
    lfs f9, 0xd8(r1)
    lfs f8, 0xd4(r1)
    lfs f7, 0xd0(r1)
    lfs f6, 0xdc(r1)
    lfs f5, 0xcc(r1)
    lfs f4, 0xbc(r1)
    lfs f0, lbl_80882188
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x58(r1)
    stfs f3, 0x110(r1)
    stfs f3, 0x114(r1)
    stfs f3, 0x118(r1)
    stfs f0, 0x11c(r1)
    stfs f13, 0x8(r1)
    stfs f31, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f13, 0xe0(r1)
    stfs f31, 0xe4(r1)
    stfs f30, 0xe8(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xf0(r1)
    stfs f11, 0xf4(r1)
    stfs f12, 0xf8(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0x100(r1)
    stfs f8, 0x104(r1)
    stfs f9, 0x108(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xec(r1)
    stfs f5, 0xfc(r1)
    stfs f6, 0x10c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_8088217C
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801A5E90_00001B8C
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80882178
    fcmpo cr0, f3, f0
    ble lbl_fn_801A5E90_00001B7C
    lfs f0, lbl_80882180
    b lbl_fn_801A5E90_00001B80
lbl_fn_801A5E90_00001B7C:
    lfs f0, lbl_80882184
lbl_fn_801A5E90_00001B80:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_801A5E90_00001BA0
lbl_fn_801A5E90_00001B8C:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_801A5E90_00001BA0:
    addi r3, r1, 0x44
    lfs f2, lbl_80882178
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x5c
    psq_st f1, 0x0(r29), 0, 0
    lwz r4, 0x4(r31)
    lfs f0, 0x54(r1)
    stfs f2, 0x5c(r1)
    stfs f0, 0x60(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x534(r4), 0, 0
    stfs f2, 0x4c(r1)
    stfs f2, 0x58(r1)
    stfs f2, 0x64(r1)
    stfs f2, 0x53c(r4)
lbl_fn_801A5E90_00001BDC:
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_801A5E90_00001BF4
    lwz r4, 0x4(r31)
    addi r5, r4, 0xb0
    bl fn_8010653C
lbl_fn_801A5E90_00001BF4:
    lwz r3, lbl_8087F498
    cmpwi r3, 0x0
    beq lbl_fn_801A5E90_00001C18
    lwz r4, 0x4(r31)
    li r5, 0x20
    lfs f1, lbl_80882188
    li r6, 0x0
    lfs f2, lbl_8088218C
    bl fn_803EA77C
lbl_fn_801A5E90_00001C18:
    psq_l f31, 0x1c8(r1), 0, 0
    mr r3, r31
    lfd f31, 0x1c0(r1)
    psq_l f30, 0x1b8(r1), 0, 0
    lfd f30, 0x1b0(r1)
    lwz r31, 0x1ac(r1)
    lwz r30, 0x1a8(r1)
    lwz r29, 0x1a4(r1)
    lwz r0, 0x1d4(r1)
    mtlr r0
    addi r1, r1, 0x1d0
    blr
}
