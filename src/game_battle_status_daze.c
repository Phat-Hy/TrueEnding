#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void dtor_80084684(void);
extern void fn_80056DB8(void);
extern void fn_80056E40(void);
extern void fn_800575BC(void);
extern void fn_8005B3CC(void);
extern void fn_8005B5F8(void);
extern void fn_8005B6E8(void);
extern void fn_8005B9CC(void);
extern void fn_8005BBF8(void);
extern void fn_8005BCE8(void);
extern void fn_80084320(void);
extern void fn_800874C8(void);
extern void fn_80087994(void);
extern void fn_80087E9C(void);
extern void fn_80088724(void);
extern void fn_8008937C(void);
extern void fn_8008AD4C(void);
extern void fn_8008B140(void);
extern void fn_80092814(void);
extern void fn_80092F1C(void);
extern void fn_80094F98(void);
extern void fn_80096E94(void);
extern void fn_800971D4(void);
extern void fn_80097A88(void);
extern void fn_80097C08(void);
extern void fn_800C122C(void);
extern void fn_800C2C20(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800DC288(void);
extern void fn_8011F91C(void);
extern void fn_8011FC10(void);
extern void fn_8011FE3C(void);
extern void fn_802180A8(void);
extern void fn_802377B8(void);
extern void fn_8023780C(void);
extern void fn_8023781C(void);
extern void fn_80237874(void);
extern void fn_8023A8B4(void);
extern void fn_80370AE4(void);
extern void fn_803EC568(void);
extern void fn_803EC69C(void);
extern void fn_803EC758(void);
extern void fn_803EC7A0(void);
extern void fn_803EC91C(void);
extern void fn_803ED0D4(void);
extern void fn_803ED5D0(void);
extern void fn_803ED774(void);
extern void fn_803EDB18(void);
extern void fn_803F11F8(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473E74(void);
extern void fn_80473E8C(void);
extern void fn_80473F50(void);
extern void fn_805F8C50(void);
extern void fn_805F8CA0(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9990(void);
extern void fn_80682428(void);
extern char* strcpy(char* dest, const char* src);

/* External data declarations */
extern u8 lbl_80753E98[];
extern u8 lbl_80753ED0[];
extern u8 lbl_80753F3C[];
extern u8 lbl_80753FDC[];
extern u8 lbl_807772B0[];
extern u8 lbl_807772D0[];
extern u8 lbl_807774B8[];
extern u8 lbl_807774D8[];
extern u8 lbl_807775F8[];
extern u8 lbl_8078EAD8[];
extern u8 lbl_8078EB70[];
extern u8 lbl_8078EC08[];
extern u8 lbl_8078FBB0[];

/* Small data declarations */
extern u32 lbl_8087D708;
extern u32 lbl_8087D710;
extern u32 lbl_8087EF10;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F408;
extern u32 lbl_8087F430;
extern u32 lbl_8087F890;
extern u32 lbl_8087F8A0;
extern u32 lbl_808867C4;
extern u32 lbl_808867D8;
extern u32 lbl_808867DC;
extern u32 lbl_808867E0;
extern u32 lbl_808867E4;
extern u32 lbl_808867E8;
extern u32 lbl_808867EC;
extern u32 lbl_808867F0;
extern u32 lbl_808867F4;
extern u32 lbl_808867F8;
extern u32 lbl_808867FC;
extern u32 lbl_80886800;
extern u32 lbl_80886804;
extern u32 lbl_80886808;
extern u32 lbl_8088680C;
extern u32 lbl_80886810;
extern u32 lbl_80886814;
extern u32 lbl_80886818;
extern u32 lbl_8088681C;
extern u32 lbl_80886820;

/* Function declarations */
void fn_8042DFD4(void);
void fn_8042E034(void);
void fn_8042E064(void);
void fn_8042E2C4(void);
void fn_8042E2F4(void);
void fn_8042E34C(void);
void fn_8042E360(void);
void fn_8042E364(void);
void fn_8042E36C(void);
void fn_8042E47C(void);
void fn_8042E51C(void);
void fn_8042E574(void);
void fn_8042E640(void);
void fn_8042E930(void);
void fn_8042E9A0(void);
void fn_8042E9F4(void);
void fn_8042EBDC(void);
void fn_8042EDF4(void);
void fn_8042EEF4(void);
void fn_8042EF4C(void);
void fn_8042F0AC(void);
void fn_8042F0B4(void);
void fn_8042F128(void);
void fn_8042F240(void);
void fn_8042F2AC(void);
void fn_8042F2DC(void);
void fn_8042F48C(void);
void fn_8042F4D4(void);
void fn_8042F5E0(void);
void fn_8042F624(void);
void fn_8042F628(void);
void fn_8042F724(void);
void fn_8042F750(void);
void fn_8042F7EC(void);
void fn_8042F860(void);

asm void fn_8042DFD4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r12, 0x0(r3)
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8042DFD4_0000004C
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    bl fn_803ED774
lbl_fn_8042DFD4_0000004C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8042E034(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    addi r3, r3, 0xf4
    stw r0, 0x14(r1)
    bl fn_8008B140
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8042E064(void)
{
    nofralloc
    stwu r1, -0x650(r1)
    mflr r0
    stw r0, 0x654(r1)
    stw r31, 0x64c(r1)
    stw r30, 0x648(r1)
    stw r29, 0x644(r1)
    stw r28, 0x640(r1)
    mr r28, r3
    addi r3, r3, 0x60
    bl fn_8047059C
    mr r30, r3
    addi r3, r28, 0x60
    bl fn_80470580
    lis r4, lbl_807774D8@ha
    li r0, 0x0
    addi r4, r4, lbl_807774D8@l
    stw r4, 0x8(r1)
    mr r31, r3
    addi r3, r1, 0x18
    stw r0, 0xc(r1)
    li r4, 0x0
    li r5, 0x400
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
    lis r4, lbl_807774B8@ha
    addi r3, r1, 0x8
    addi r4, r4, lbl_807774B8@l
    stw r4, 0x8(r1)
    la r4, lbl_8087D710
    bl fn_8005BCE8
    lis r31, lbl_80753E98@ha
    addi r31, r31, lbl_80753E98@l
lbl_fn_8042E064_00000144:
    addi r3, r1, 0x8
    bl fn_8005B9CC
    lbz r0, 0x0(r3)
    mr r30, r3
    cmpwi r0, 0x3b
    beq lbl_fn_8042E064_000002C0
    addi r4, r31, 0x1
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8042E064_00000198
    addi r3, r1, 0x8
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r28, 0xf4
    li r5, 0x0
    bl fn_8008AD4C
    mr r3, r28
    addi r4, r28, 0xf4
    addi r5, r1, 0x8
    bl fn_803EC7A0
    b lbl_fn_8042E064_000002C0
lbl_fn_8042E064_00000198:
    mr r3, r30
    addi r4, r31, 0x7
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8042E064_00000240
    addi r3, r1, 0x8
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x83c(r28)
    addi r3, r1, 0x8
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x840(r28)
    addi r3, r1, 0x8
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x844(r28)
    addi r3, r1, 0x8
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x848(r28)
    addi r3, r1, 0x8
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x84c(r28)
    addi r3, r1, 0x8
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x850(r28)
    addi r3, r1, 0x8
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x854(r28)
    addi r3, r1, 0x8
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x858(r28)
    addi r3, r1, 0x8
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x85c(r28)
    b lbl_fn_8042E064_000002C0
lbl_fn_8042E064_00000240:
    mr r3, r30
    addi r4, r31, 0x11
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8042E064_00000284
    addi r30, r28, 0x88c
    li r29, 0x0
lbl_fn_8042E064_0000025C:
    addi r3, r1, 0x8
    bl fn_8005B9CC
    mr r4, r3
    mr r3, r30
    bl strcpy
    addi r29, r29, 0x1
    addi r30, r30, 0x40
    cmpwi r29, 0x2
    blt lbl_fn_8042E064_0000025C
    b lbl_fn_8042E064_000002C0
lbl_fn_8042E064_00000284:
    mr r3, r30
    addi r4, r31, 0x1f
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8042E064_000002C0
    mr r30, r28
    li r29, 0x0
lbl_fn_8042E064_000002A0:
    addi r3, r1, 0x8
    bl fn_8005B9CC
    bl fn_800DC288
    addi r29, r29, 0x1
    stfs f1, 0x90c(r30)
    cmpwi r29, 0x5
    addi r30, r30, 0x4
    blt lbl_fn_8042E064_000002A0
lbl_fn_8042E064_000002C0:
    addi r3, r1, 0x8
    bl fn_8005BBF8
    cmpwi r3, 0x0
    bne lbl_fn_8042E064_00000144
    lwz r0, 0x654(r1)
    lwz r31, 0x64c(r1)
    lwz r30, 0x648(r1)
    lwz r29, 0x644(r1)
    lwz r28, 0x640(r1)
    mtlr r0
    addi r1, r1, 0x650
    blr
}

asm void fn_8042E2C4(void)
{
    nofralloc
    cmpwi r4, 0x0
    bne lbl_fn_8042E2C4_00000300
    li r3, 0x0
    blr
lbl_fn_8042E2C4_00000300:
    lwz r0, 0x0(r4)
    stw r0, 0x54(r3)
    cmplwi r0, 0x1
    ble lbl_fn_8042E2C4_00000318
    li r0, 0x0
    stw r0, 0x54(r3)
lbl_fn_8042E2C4_00000318:
    lwz r3, 0x54(r3)
    blr
}

asm void fn_8042E2F4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lfs f0, lbl_808867C4
    stw r0, 0x34(r1)
    li r0, 0x0
    stw r4, 0x8(r1)
    addi r4, r1, 0x8
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8042E34C(void)
{
    nofralloc
    lwz r3, 0x54(r3)
    subi r0, r3, 0x1
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

asm void fn_8042E360(void)
{
    nofralloc
    blr
}

asm void fn_8042E364(void)
{
    nofralloc
    addi r3, r3, 0xf4
    blr
}

asm void fn_8042E36C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    beq lbl_fn_8042E36C_00000484
    lis r5, lbl_80753ED0@ha
    li r3, 0x890
    addi r5, r5, lbl_80753ED0@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_8042E36C_0000047C
    mr r4, r28
    mr r5, r29
    mr r6, r30
    bl fn_803EC568
    lis r4, lbl_8078EAD8@ha
    addi r3, r31, 0xf4
    addi r4, r4, lbl_8078EAD8@l
    stw r4, 0x0(r31)
    li r4, 0x8
    li r5, 0x20
    bl fn_80096E94
    addi r30, r31, 0x4d0
    li r4, 0x2
    mr r3, r30
    bl fn_80056DB8
    lis r3, lbl_807775F8@ha
    lfs f0, lbl_808867D8
    addi r3, r3, lbl_807775F8@l
    stw r3, 0x0(r30)
    addi r3, r31, 0x86c
    stfs f0, 0x848(r31)
    stfs f0, 0x84c(r31)
    stfs f0, 0x850(r31)
    stfs f0, 0x854(r31)
    stfs f0, 0x858(r31)
    stfs f0, 0x85c(r31)
    stfs f0, 0x860(r31)
    stfs f0, 0x864(r31)
    stfs f0, 0x868(r31)
    bl fn_802377B8
    li r3, 0x0
    stw r3, 0x878(r31)
    li r0, -0x1
    stw r0, 0x87c(r31)
    stw r3, 0x54(r31)
lbl_fn_8042E36C_0000047C:
    mr r3, r31
    b lbl_fn_8042E36C_00000488
lbl_fn_8042E36C_00000484:
    li r3, 0x0
lbl_fn_8042E36C_00000488:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8042E47C(void)
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
    beq lbl_fn_8042E47C_00000528
    addic. r31, r3, 0x86c
    beq lbl_fn_8042E47C_000004F0
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_8042E47C_000004F0
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8042E47C_000004F0:
    addic. r3, r29, 0x4d0
    beq lbl_fn_8042E47C_00000500
    li r4, 0x0
    bl fn_80056E40
lbl_fn_8042E47C_00000500:
    addi r3, r29, 0xf4
    li r4, -0x1
    bl fn_800971D4
    mr r3, r29
    li r4, 0x0
    bl fn_803EC69C
    cmpwi r30, 0x0
    ble lbl_fn_8042E47C_00000528
    mr r3, r29
    bl dtor_80084684
lbl_fn_8042E47C_00000528:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8042E51C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_803EC91C
    cmpwi r3, 0x0
    bne lbl_fn_8042E51C_00000588
    mr r3, r31
    addi r4, r31, 0xf4
    bl fn_803EDB18
    li r0, 0x1a
    stw r31, 0x4dc(r31)
    li r3, 0x1
    stw r0, 0x4ec(r31)
    b lbl_fn_8042E51C_0000058C
lbl_fn_8042E51C_00000588:
    li r3, 0x0
lbl_fn_8042E51C_0000058C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8042E574(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    lwz r12, 0x0(r3)
    lwz r12, 0x2c(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8042E574_00000604
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    li r5, 0x1
    bl fn_803ED0D4
lbl_fn_8042E574_00000604:
    psq_l f1, 0x6c(r31), 0, 0
    li r5, 0x1
    lfs f2, 0x74(r31)
    li r0, 0x0
    psq_st f1, 0x4c4(r31), 0, 0
    mr r3, r31
    lfs f0, lbl_808867D8
    addi r4, r1, 0x8
    stfs f2, 0x4cc(r31)
    stw r5, 0x8(r1)
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    lwz r12, 0x0(r31)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8042E640(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    stw r31, 0x8c(r1)
    mr r31, r3
    stw r30, 0x88(r1)
    stw r29, 0x84(r1)
    lwz r0, 0x54(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8042E640_000006A4
    lwz r12, 0x0(r3)
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
lbl_fn_8042E640_000006A4:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8042E640_000006E0
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    bl fn_803ED5D0
lbl_fn_8042E640_000006E0:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8042E640_00000720
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    li r5, 0x1
    bl fn_803ED0D4
lbl_fn_8042E640_00000720:
    lwz r0, 0x87c(r31)
    cmpwi r0, 0x0
    bge lbl_fn_8042E640_00000734
    li r5, 0x0
    b lbl_fn_8042E640_00000740
lbl_fn_8042E640_00000734:
    mulli r0, r0, 0x30
    lwz r3, 0x130(r31)
    add r5, r3, r0
lbl_fn_8042E640_00000740:
    psq_l f1, 0x4c4(r31), 0, 0
    cmpwi r5, 0x0
    lfs f2, 0x4cc(r31)
    addi r4, r1, 0x8
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r4), 0, 0
    beq lbl_fn_8042E640_00000784
    lfs f7, 0x1c(r5)
    addi r3, r1, 0x14
    lfs f0, 0xc(r5)
    lfs f2, 0x2c(r5)
    stfs f0, 0x14(r1)
    stfs f7, 0x18(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x1c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x10(r1)
lbl_fn_8042E640_00000784:
    lfs f7, 0x8(r1)
    addi r3, r31, 0x4d0
    lfs f0, 0x848(r31)
    addi r4, r1, 0x8
    lfs f8, 0xc(r1)
    addi r5, r31, 0x78
    fadds f0, f7, f0
    lfs f7, 0x10(r1)
    addi r6, r31, 0x860
    stfs f0, 0x8(r1)
    lfs f0, 0x84c(r31)
    fadds f0, f8, f0
    stfs f0, 0xc(r1)
    lfs f0, 0x850(r31)
    fadds f0, f7, f0
    stfs f0, 0x10(r1)
    bl fn_800575BC
    lwz r0, 0x878(r31)
    lwz r3, 0x4d8(r31)
    cmpwi r0, 0x0
    ori r0, r3, 0x1
    stw r0, 0x4d8(r31)
    beq lbl_fn_8042E640_00000940
    lwz r0, 0x87c(r31)
    cmpwi r0, -0x1
    beq lbl_fn_8042E640_00000940
    lwz r30, lbl_8087EFB4
    addi r3, r1, 0x20
    addi r4, r31, 0xf4
    bl fn_80094F98
    mr r3, r30
    addi r4, r1, 0x20
    bl fn_800C122C
    cmpwi r3, 0x0
    mr r29, r3
    beq lbl_fn_8042E640_00000940
    addi r4, r31, 0x880
    lfs f2, 0x888(r31)
    psq_l f1, 0x0(r4), 0, 0
    addi r3, r1, 0x40
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x48(r1)
    lfs f0, 0x88c(r31)
    stfs f0, 0x4c(r1)
    lwz r0, 0x87c(r31)
    cmpwi r0, 0x0
    bge lbl_fn_8042E640_00000848
    li r30, 0x0
    b lbl_fn_8042E640_00000854
lbl_fn_8042E640_00000848:
    mulli r0, r0, 0x30
    lwz r3, 0x130(r31)
    add r30, r3, r0
lbl_fn_8042E640_00000854:
    psq_l f1, 0x0(r30), 0, 0
    addi r31, r1, 0x50
    psq_l f2, 0x8(r30), 0, 0
    mr r3, r31
    psq_l f3, 0x10(r30), 0, 0
    mr r4, r31
    psq_l f4, 0x18(r30), 0, 0
    psq_l f5, 0x20(r30), 0, 0
    psq_l f6, 0x28(r30), 0, 0
    psq_st f6, 0x28(r31), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    bl fn_805F8CA0
    mr r3, r31
    mr r4, r31
    bl fn_805F8C50
    addi r3, r1, 0x40
    bl fn_805F9920
    fabs f7, f1
    lfs f0, lbl_808867DC
    frsp f7, f7
    fcmpo cr0, f7, f0
    blt lbl_fn_8042E640_000008C8
    addi r3, r1, 0x40
    mr r4, r3
    bl fn_805F98D0
lbl_fn_8042E640_000008C8:
    addi r4, r1, 0x40
    addi r3, r1, 0x50
    mr r5, r4
    bl fn_805F93C0
    addi r3, r1, 0x40
    bl fn_805F9920
    fabs f7, f1
    lfs f0, lbl_808867DC
    frsp f7, f7
    fcmpo cr0, f7, f0
    blt lbl_fn_8042E640_00000900
    addi r3, r1, 0x40
    mr r4, r3
    bl fn_805F98D0
lbl_fn_8042E640_00000900:
    lfs f0, 0x2c(r30)
    addi r3, r1, 0x40
    lfs f7, 0x1c(r30)
    addi r4, r1, 0x30
    lfs f8, 0xc(r30)
    stfs f8, 0x30(r1)
    stfs f7, 0x34(r1)
    stfs f0, 0x38(r1)
    bl fn_805F9990
    fneg f0, f1
    li r0, 0x0
    mr r3, r29
    addi r4, r1, 0x40
    stfs f0, 0x4c(r1)
    stw r0, 0x120(r29)
    bl fn_800C2C20
lbl_fn_8042E640_00000940:
    lwz r0, 0x94(r1)
    lwz r31, 0x8c(r1)
    lwz r30, 0x88(r1)
    lwz r29, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_8042E930(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r4, lbl_8087F0A8
    lwz r0, 0x18(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8042E930_000009B8
    lwz r12, 0x0(r3)
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8042E930_000009B8
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    bl fn_803ED774
lbl_fn_8042E930_000009B8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8042E9A0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    addi r3, r3, 0xf4
    bl fn_8008B140
    cmpwi r3, 0x0
    beq lbl_fn_8042E9A0_000009F8
    li r3, 0x1
    b lbl_fn_8042E9A0_00000A0C
lbl_fn_8042E9A0_000009F8:
    addi r3, r31, 0x86c
    bl fn_80237874
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
lbl_fn_8042E9A0_00000A0C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8042E9F4(void)
{
    nofralloc
    stwu r1, -0x750(r1)
    mflr r0
    stw r0, 0x754(r1)
    stw r31, 0x74c(r1)
    stw r30, 0x748(r1)
    stw r29, 0x744(r1)
    mr r29, r3
    addi r3, r3, 0x60
    bl fn_8047059C
    mr r30, r3
    addi r3, r29, 0x60
    bl fn_80470580
    lis r4, lbl_807774D8@ha
    li r0, 0x0
    addi r4, r4, lbl_807774D8@l
    stw r4, 0x108(r1)
    mr r31, r3
    addi r3, r1, 0x118
    stw r0, 0x10c(r1)
    li r4, 0x0
    li r5, 0x400
    stw r0, 0x110(r1)
    stw r0, 0x114(r1)
    stw r0, 0x738(r1)
    bl memset
    addi r3, r1, 0x718
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x108(r1)
    mr r4, r31
    mr r5, r30
    addi r3, r1, 0x108
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807774B8@ha
    addi r3, r1, 0x108
    addi r4, r4, lbl_807774B8@l
    stw r4, 0x108(r1)
    la r4, lbl_8087D710
    bl fn_8005BCE8
    lis r31, lbl_80753ED0@ha
    addi r31, r31, lbl_80753ED0@l
lbl_fn_8042E9F4_00000AD0:
    addi r3, r1, 0x108
    bl fn_8005B9CC
    lbz r0, 0x0(r3)
    mr r30, r3
    cmpwi r0, 0x3b
    beq lbl_fn_8042E9F4_00000BDC
    addi r4, r31, 0x1
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8042E9F4_00000B24
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r29, 0xf4
    li r5, 0x0
    bl fn_8008AD4C
    mr r3, r29
    addi r4, r29, 0xf4
    addi r5, r1, 0x108
    bl fn_803EC7A0
    b lbl_fn_8042E9F4_00000BDC
lbl_fn_8042E9F4_00000B24:
    mr r3, r30
    addi r4, r31, 0x7
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8042E9F4_00000B6C
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r1, 0x8
    bl strcpy
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_800DC288
    addi r3, r29, 0xf4
    addi r4, r1, 0x8
    li r5, 0x0
    bl fn_80092F1C
    b lbl_fn_8042E9F4_00000BDC
lbl_fn_8042E9F4_00000B6C:
    mr r3, r30
    addi r4, r31, 0x11
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8042E9F4_00000B98
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r29, 0x86c
    bl fn_8023780C
    b lbl_fn_8042E9F4_00000BDC
lbl_fn_8042E9F4_00000B98:
    mr r3, r30
    addi r4, r31, 0x15
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8042E9F4_00000BDC
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r1, 0x8
    bl strcpy
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_802180A8
    mr r4, r3
    addi r3, r29, 0xf4
    addi r5, r1, 0x8
    bl fn_80097A88
lbl_fn_8042E9F4_00000BDC:
    addi r3, r1, 0x108
    bl fn_8005BBF8
    cmpwi r3, 0x0
    bne lbl_fn_8042E9F4_00000AD0
    lwz r0, 0x754(r1)
    lwz r31, 0x74c(r1)
    lwz r30, 0x748(r1)
    lwz r29, 0x744(r1)
    mtlr r0
    addi r1, r1, 0x750
    blr
}

asm void fn_8042EBDC(void)
{
    nofralloc
    stwu r1, -0x650(r1)
    mflr r0
    stw r0, 0x654(r1)
    stw r31, 0x64c(r1)
    stw r30, 0x648(r1)
    stw r29, 0x644(r1)
    stw r28, 0x640(r1)
    mr r28, r3
    addi r3, r3, 0x60
    bl fn_8047059C
    mr r31, r3
    addi r3, r28, 0x60
    bl fn_80470580
    lis r4, lbl_807774D8@ha
    li r0, 0x0
    addi r4, r4, lbl_807774D8@l
    stw r4, 0x8(r1)
    mr r30, r3
    addi r3, r1, 0x18
    stw r0, 0xc(r1)
    li r4, 0x0
    li r5, 0x400
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x638(r1)
    bl memset
    addi r3, r1, 0x618
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x8(r1)
    mr r4, r30
    mr r5, r31
    addi r3, r1, 0x8
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807774B8@ha
    addi r3, r1, 0x8
    addi r4, r4, lbl_807774B8@l
    stw r4, 0x8(r1)
    la r4, lbl_8087D710
    bl fn_8005BCE8
    lis r30, lbl_80753ED0@ha
    li r31, 0x1
    addi r30, r30, lbl_80753ED0@l
lbl_fn_8042EBDC_00000CC0:
    addi r3, r1, 0x8
    bl fn_8005B9CC
    lbz r0, 0x0(r3)
    mr r29, r3
    cmpwi r0, 0x3b
    beq lbl_fn_8042EBDC_00000DF0
    addi r4, r30, 0x1c
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8042EBDC_00000D7C
    addi r3, r1, 0x8
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x848(r28)
    addi r3, r1, 0x8
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x84c(r28)
    addi r3, r1, 0x8
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x850(r28)
    addi r3, r1, 0x8
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x854(r28)
    addi r3, r1, 0x8
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x858(r28)
    addi r3, r1, 0x8
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x85c(r28)
    addi r3, r1, 0x8
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x860(r28)
    addi r3, r1, 0x8
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x864(r28)
    addi r3, r1, 0x8
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x868(r28)
    b lbl_fn_8042EBDC_00000DF0
lbl_fn_8042EBDC_00000D7C:
    mr r3, r29
    addi r4, r30, 0x26
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8042EBDC_00000DF0
    stw r31, 0x878(r28)
    addi r3, r1, 0x8
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x880(r28)
    addi r3, r1, 0x8
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x884(r28)
    addi r3, r1, 0x8
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x888(r28)
    addi r3, r1, 0x8
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x88c(r28)
    addi r3, r1, 0x8
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r28, 0xf4
    li r5, 0x0
    bl fn_80092814
    stw r3, 0x87c(r28)
lbl_fn_8042EBDC_00000DF0:
    addi r3, r1, 0x8
    bl fn_8005BBF8
    cmpwi r3, 0x0
    bne lbl_fn_8042EBDC_00000CC0
    lwz r0, 0x654(r1)
    lwz r31, 0x64c(r1)
    lwz r30, 0x648(r1)
    lwz r29, 0x644(r1)
    lwz r28, 0x640(r1)
    mtlr r0
    addi r1, r1, 0x650
    blr
}

asm void fn_8042EDF4(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r3
    bne lbl_fn_8042EDF4_00000E48
    li r3, 0x0
    b lbl_fn_8042EDF4_00000F08
lbl_fn_8042EDF4_00000E48:
    lwz r0, 0x0(r4)
    stw r0, 0x54(r3)
    cmplwi r0, 0x3
    ble lbl_fn_8042EDF4_00000E60
    li r0, 0x0
    stw r0, 0x54(r3)
lbl_fn_8042EDF4_00000E60:
    lwz r0, 0x54(r3)
    cmpwi r0, 0x2
    bne lbl_fn_8042EDF4_00000F04
    lfs f0, lbl_808867E0
    li r31, 0x1
    stw r31, 0x440(r3)
    li r4, 0x0
    lfs f1, lbl_808867D8
    li r5, 0x0
    stfs f0, 0x340(r3)
    li r6, 0x0
    lfs f2, lbl_808867E4
    li r7, 0x0
    stfs f0, 0x32c(r3)
    li r8, 0x1
    addi r3, r3, 0xf4
    bl fn_80097C08
    lfs f0, lbl_808867D8
    li r0, -0x1
    lfs f1, lbl_808867E0
    addi r4, r30, 0x86c
    stfs f0, 0x1c(r1)
    addi r5, r30, 0xf4
    addi r7, r1, 0x10
    addi r8, r1, 0x1c
    stfs f0, 0x20(r1)
    addi r9, r1, 0x28
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x24(r1)
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f1, 0x28(r1)
    stfs f1, 0x2c(r1)
    stfs f1, 0x30(r1)
    stfs f1, 0x34(r1)
    stw r0, 0x8(r1)
    stw r31, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
lbl_fn_8042EDF4_00000F04:
    lwz r3, 0x54(r30)
lbl_fn_8042EDF4_00000F08:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8042EEF4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lfs f0, lbl_808867D8
    stw r0, 0x34(r1)
    li r0, 0x0
    stw r4, 0x8(r1)
    addi r4, r1, 0x8
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8042EF4C(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r4
    addi r4, r1, 0x8
    stw r29, 0x34(r1)
    mr r29, r3
    bl fn_803EC758
    lwz r0, 0xf0(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8042EF4C_00000FD8
    cmpwi r30, 0x0
    beq lbl_fn_8042EF4C_00000FD8
    lwz r0, lbl_8087EF10
    cmpwi r0, 0x0
    beq lbl_fn_8042EF4C_00000FD8
    mr r3, r30
    addi r4, r1, 0x8
    bl fn_8008937C
    stw r3, 0xf0(r29)
    mr r30, r3
    b lbl_fn_8042EF4C_00000FDC
lbl_fn_8042EF4C_00000FD8:
    li r30, 0x0
lbl_fn_8042EF4C_00000FDC:
    lis r31, lbl_80753ED0@ha
    mr r3, r30
    addi r31, r31, lbl_80753ED0@l
    addi r5, r29, 0x54
    addi r4, r31, 0x34
    li r6, 0x0
    li r7, 0x63
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_808867E8
    mr r3, r30
    lfs f2, lbl_808867EC
    addi r4, r31, 0x3a
    lfs f3, lbl_808867F0
    addi r5, r29, 0x6c
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    lfs f1, lbl_808867F4
    mr r3, r30
    lfs f2, lbl_808867F8
    addi r4, r31, 0x3e
    lfs f3, lbl_808867FC
    addi r5, r29, 0x78
    li r6, 0x0
    li r7, 0x0
    bl fn_80088724
    lfs f1, lbl_808867E8
    mr r3, r30
    lfs f2, lbl_808867EC
    addi r4, r31, 0x42
    lfs f3, lbl_808867F0
    addi r5, r29, 0x90
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    mr r3, r30
    addi r4, r31, 0x46
    addi r5, r29, 0x9c
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r30
    addi r4, r31, 0x4d
    addi r5, r29, 0x58
    li r6, 0x0
    li r7, 0x63
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r4, r30
    addi r3, r29, 0xb0
    bl fn_803F11F8
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8042F0AC(void)
{
    nofralloc
    addi r3, r3, 0xf4
    blr
}

asm void fn_8042F0B4(void)
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
    beq lbl_fn_8042F0B4_00001138
    lis r5, lbl_80753F3C@ha
    li r3, 0x2118
    addi r5, r5, lbl_80753F3C@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8042F0B4_0000113C
    mr r4, r30
    mr r5, r31
    bl fn_8042F128
    b lbl_fn_8042F0B4_0000113C
lbl_fn_8042F0B4_00001138:
    li r3, 0x0
lbl_fn_8042F0B4_0000113C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8042F128(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r5, 0x18(r5)
    lwz r6, 0x1c(r30)
    bl fn_803EC568
    lis r3, lbl_8078EB70@ha
    addi r31, r29, 0x108
    addi r3, r3, lbl_8078EB70@l
    stw r3, 0x0(r29)
    mr r3, r31
    stw r30, 0xf4(r29)
    bl fn_80473E74
    lis r3, lbl_8078FBB0@ha
    li r0, 0x0
    addi r3, r3, lbl_8078FBB0@l
    stw r3, 0x0(r31)
    lwz r3, 0xf4(r29)
    stw r0, 0x110(r29)
    stw r0, 0x54(r29)
    lwz r0, 0x20(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8042F128_000011E0
    cmpwi r0, 0x1
    beq lbl_fn_8042F128_0000120C
    cmpwi r0, 0x2
    beq lbl_fn_8042F128_00001218
    cmpwi r0, 0x3
    beq lbl_fn_8042F128_00001224
    b lbl_fn_8042F128_0000124C
lbl_fn_8042F128_000011E0:
    li r0, -0x1
    stw r0, 0xfc(r29)
    lis r4, lbl_80753F3C@ha
    mr r3, r31
    lwz r12, 0x0(r31)
    addi r4, r4, lbl_80753F3C@l
    addi r4, r4, 0x1
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    b lbl_fn_8042F128_0000124C
lbl_fn_8042F128_0000120C:
    lwz r0, 0x24(r3)
    stw r0, 0xfc(r29)
    b lbl_fn_8042F128_0000124C
lbl_fn_8042F128_00001218:
    lwz r0, 0x24(r3)
    stw r0, 0xfc(r29)
    b lbl_fn_8042F128_0000124C
lbl_fn_8042F128_00001224:
    lwz r0, 0x24(r3)
    lis r4, lbl_80753F3C@ha
    stw r0, 0xfc(r29)
    addi r4, r4, lbl_80753F3C@l
    mr r3, r31
    lwz r12, 0x0(r31)
    addi r4, r4, 0x2a
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
lbl_fn_8042F128_0000124C:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8042F240(void)
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
    beq lbl_fn_8042F240_000012BC
    addic. r3, r3, 0x108
    beq lbl_fn_8042F240_000012A0
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8042F240_000012A0:
    mr r3, r30
    li r4, 0x0
    bl fn_803EC69C
    cmpwi r31, 0x0
    ble lbl_fn_8042F240_000012BC
    mr r3, r30
    bl dtor_80084684
lbl_fn_8042F240_000012BC:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8042F2AC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    addi r3, r3, 0x108
    stw r0, 0x14(r1)
    bl fn_80473F50
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8042F2DC(void)
{
    nofralloc
    stwu r1, -0x690(r1)
    mflr r0
    stw r0, 0x694(r1)
    stw r31, 0x68c(r1)
    mr r31, r3
    addi r3, r3, 0x108
    stw r30, 0x688(r1)
    stw r29, 0x684(r1)
    bl fn_80470580
    cmpwi r3, 0x0
    beq lbl_fn_8042F2DC_0000149C
    addi r3, r31, 0x108
    bl fn_8047059C
    mr r29, r3
    addi r3, r31, 0x108
    bl fn_80470580
    lis r4, lbl_807772D0@ha
    li r0, 0x0
    addi r4, r4, lbl_807772D0@l
    stw r4, 0x48(r1)
    mr r30, r3
    addi r3, r1, 0x58
    stw r0, 0x4c(r1)
    li r4, 0x0
    li r5, 0x400
    stw r0, 0x50(r1)
    stw r0, 0x54(r1)
    stw r0, 0x678(r1)
    bl memset
    addi r3, r1, 0x658
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x48(r1)
    mr r4, r30
    mr r5, r29
    addi r3, r1, 0x48
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0x48
    addi r4, r4, lbl_807772B0@l
    stw r4, 0x48(r1)
    la r4, lbl_8087D708
    bl fn_8005B6E8
lbl_fn_8042F2DC_000013C0:
    addi r3, r1, 0x48
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    extsb r0, r0
    cmpwi r0, 0x3b
    beq lbl_fn_8042F2DC_0000148C
    cmpwi r0, 0x0
    beq lbl_fn_8042F2DC_0000148C
    mr r4, r3
    addi r3, r1, 0x8
    bl strcpy
    lwz r0, 0x110(r31)
    slwi r0, r0, 6
    add r0, r31, r0
    addic. r4, r0, 0x114
    beq lbl_fn_8042F2DC_00001480
    lwz r0, 0xc(r1)
    lwz r3, 0x8(r1)
    stw r3, 0x0(r4)
    stw r0, 0x4(r4)
    lwz r0, 0x14(r1)
    lwz r3, 0x10(r1)
    stw r3, 0x8(r4)
    stw r0, 0xc(r4)
    lwz r0, 0x1c(r1)
    lwz r3, 0x18(r1)
    stw r3, 0x10(r4)
    stw r0, 0x14(r4)
    lwz r0, 0x24(r1)
    lwz r3, 0x20(r1)
    stw r3, 0x18(r4)
    stw r0, 0x1c(r4)
    lwz r0, 0x2c(r1)
    lwz r3, 0x28(r1)
    stw r3, 0x20(r4)
    stw r0, 0x24(r4)
    lwz r0, 0x34(r1)
    lwz r3, 0x30(r1)
    stw r3, 0x28(r4)
    stw r0, 0x2c(r4)
    lwz r0, 0x3c(r1)
    lwz r3, 0x38(r1)
    stw r3, 0x30(r4)
    stw r0, 0x34(r4)
    lwz r0, 0x44(r1)
    lwz r3, 0x40(r1)
    stw r3, 0x38(r4)
    stw r0, 0x3c(r4)
lbl_fn_8042F2DC_00001480:
    lwz r3, 0x110(r31)
    addi r0, r3, 0x1
    stw r0, 0x110(r31)
lbl_fn_8042F2DC_0000148C:
    addi r3, r1, 0x48
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_8042F2DC_000013C0
lbl_fn_8042F2DC_0000149C:
    lwz r0, 0x694(r1)
    lwz r31, 0x68c(r1)
    lwz r30, 0x688(r1)
    lwz r29, 0x684(r1)
    mtlr r0
    addi r1, r1, 0x690
    blr
}

asm void fn_8042F48C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_803EC91C
    cmpwi r3, 0x0
    bne lbl_fn_8042F48C_000014E8
    li r0, 0x0
    stw r0, 0x54(r31)
    li r3, 0x1
    b lbl_fn_8042F48C_000014EC
lbl_fn_8042F48C_000014E8:
    li r3, 0x0
lbl_fn_8042F48C_000014EC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8042F4D4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    lwz r4, 0xf4(r3)
    psq_l f1, 0x4(r4), 0, 0
    lfs f2, 0xc(r4)
    stfs f2, 0x74(r3)
    psq_st f1, 0x6c(r3), 0, 0
    lfs f0, 0x14(r4)
    stfs f0, 0x7c(r3)
    lwz r0, 0x20(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8042F4D4_00001558
    cmpwi r0, 0x1
    beq lbl_fn_8042F4D4_00001568
    cmpwi r0, 0x2
    beq lbl_fn_8042F4D4_00001580
    cmpwi r0, 0x3
    beq lbl_fn_8042F4D4_00001594
    b lbl_fn_8042F4D4_000015A4
lbl_fn_8042F4D4_00001558:
    lwz r4, lbl_8087F8A0
    lwz r0, 0x48(r4)
    stw r0, 0xf8(r3)
    b lbl_fn_8042F4D4_000015A4
lbl_fn_8042F4D4_00001568:
    lwz r4, 0x24(r4)
    stw r4, 0xfc(r3)
    lwz r3, lbl_8087F890
    bl fn_8011FE3C
    stw r3, 0xf8(r31)
    b lbl_fn_8042F4D4_000015A4
lbl_fn_8042F4D4_00001580:
    lwz r3, lbl_8087F408
    lwz r4, 0xfc(r31)
    bl fn_8011FC10
    stw r3, 0xf8(r31)
    b lbl_fn_8042F4D4_000015A4
lbl_fn_8042F4D4_00001594:
    lwz r3, lbl_8087F8A0
    lwz r4, 0xfc(r31)
    bl fn_8011F91C
    stw r3, 0xf8(r31)
lbl_fn_8042F4D4_000015A4:
    lwz r3, 0xf4(r31)
    li r5, 0x0
    lfs f0, lbl_80886800
    li r0, 0x1
    lwz r4, 0x28(r3)
    mr r3, r31
    stw r4, 0x104(r31)
    addi r4, r1, 0x8
    stw r5, 0x100(r31)
    stw r0, 0x8(r1)
    stw r5, 0xc(r1)
    stw r5, 0x10(r1)
    stw r5, 0x14(r1)
    stw r5, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    lwz r12, 0x0(r31)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8042F5E0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x54(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8042F5E0_0000163C
    lwz r12, 0x0(r3)
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
lbl_fn_8042F5E0_0000163C:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8042F624(void)
{
    nofralloc
    blr
}

asm void fn_8042F628(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    bne lbl_fn_8042F628_00001678
    li r3, 0x0
    b lbl_fn_8042F628_0000173C
lbl_fn_8042F628_00001678:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x1
    beq lbl_fn_8042F628_00001698
    cmpwi r0, 0x2
    beq lbl_fn_8042F628_000016AC
    cmpwi r0, 0x3
    beq lbl_fn_8042F628_000016C0
    b lbl_fn_8042F628_00001738
lbl_fn_8042F628_00001698:
    li r0, 0x0
    stw r0, 0x100(r3)
    lwz r0, 0x0(r4)
    stw r0, 0x54(r3)
    b lbl_fn_8042F628_00001738
lbl_fn_8042F628_000016AC:
    li r0, 0x0
    stw r0, 0x100(r3)
    lwz r0, 0x0(r4)
    stw r0, 0x54(r3)
    b lbl_fn_8042F628_00001738
lbl_fn_8042F628_000016C0:
    lwz r4, 0x10(r4)
    lwz r0, 0xf8(r3)
    cmplw r4, r0
    bne lbl_fn_8042F628_00001738
    lwz r0, 0x54(r3)
    cmpwi r0, 0x2
    bne lbl_fn_8042F628_00001738
    lwz r0, 0x100(r31)
    addi r5, r4, 0x528
    lfs f1, lbl_80886804
    addi r3, r1, 0x8
    slwi r0, r0, 6
    li r6, 0x0
    add r4, r31, r0
    li r7, -0x1
    addi r4, r4, 0x114
    bl fn_800C344C
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    lwz r3, 0x100(r31)
    addi r5, r3, 0x1
    stw r5, 0x100(r31)
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_8042F628_00001738
    lwz r4, 0x104(r31)
    cmpwi r4, 0x0
    ble lbl_fn_8042F628_00001738
    bl fn_80370AE4
lbl_fn_8042F628_00001738:
    lwz r3, 0x54(r31)
lbl_fn_8042F628_0000173C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8042F724(void)
{
    nofralloc
    lwz r0, 0x54(r3)
    li r4, 0x0
    cmpwi r0, 0x2
    blt lbl_fn_8042F724_00001774
    lwz r3, 0xf4(r3)
    lwz r0, 0x7c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8042F724_00001774
    li r4, 0x1
lbl_fn_8042F724_00001774:
    mr r3, r4
    blr
}

asm void fn_8042F750(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r4
    addi r4, r1, 0x8
    stw r30, 0x28(r1)
    mr r30, r3
    bl fn_803EC758
    lwz r0, 0xf0(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8042F750_000017D4
    cmpwi r31, 0x0
    beq lbl_fn_8042F750_000017D4
    lwz r0, lbl_8087EF10
    cmpwi r0, 0x0
    beq lbl_fn_8042F750_000017D4
    mr r3, r31
    addi r4, r1, 0x8
    bl fn_8008937C
    stw r3, 0xf0(r30)
    b lbl_fn_8042F750_000017D8
lbl_fn_8042F750_000017D4:
    li r3, 0x0
lbl_fn_8042F750_000017D8:
    lis r4, lbl_80753F3C@ha
    addi r5, r30, 0x54
    addi r4, r4, lbl_80753F3C@l
    li r6, 0x0
    addi r4, r4, 0x53
    li r7, 0x63
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8042F7EC(void)
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
    beq lbl_fn_8042F7EC_00001870
    lis r5, lbl_80753FDC@ha
    li r3, 0x8d8
    addi r5, r5, lbl_80753FDC@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8042F7EC_00001874
    mr r4, r30
    mr r5, r31
    bl fn_8042F860
    b lbl_fn_8042F7EC_00001874
lbl_fn_8042F7EC_00001870:
    li r3, 0x0
lbl_fn_8042F7EC_00001874:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8042F860(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r5
    stw r30, 0x38(r1)
    mr r30, r3
    lwz r5, 0x18(r5)
    lwz r6, 0x1c(r31)
    bl fn_803EC568
    lis r4, lbl_8078EC08@ha
    stw r31, 0xf4(r30)
    addi r4, r4, lbl_8078EC08@l
    addi r3, r30, 0x104
    stw r4, 0x0(r30)
    li r4, 0x8
    li r5, 0x20
    bl fn_80096E94
    addi r3, r30, 0x4d4
    li r4, 0x8
    li r5, 0x20
    bl fn_80096E94
    lfs f8, lbl_80886808
    li r5, 0x0
    lfs f7, lbl_8088680C
    li r0, 0x6
    lfs f6, lbl_80886810
    addi r3, r1, 0x8
    lfs f5, lbl_80886814
    li r4, 0x79
    lfs f4, lbl_80886818
    lfs f3, lbl_8088681C
    stw r5, 0x8a4(r30)
    lwz r6, 0xf4(r30)
    stw r5, 0x8a8(r30)
    lfs f0, lbl_80886820
    stw r5, 0x8ac(r30)
    stw r5, 0x8b0(r30)
    stw r5, 0x8b4(r30)
    stw r5, 0x8b8(r30)
    stfs f8, 0x8bc(r30)
    stfs f7, 0x8c0(r30)
    stfs f6, 0x8c4(r30)
    stfs f5, 0x8c8(r30)
    stw r5, 0x8cc(r30)
    stfs f4, 0x8d0(r30)
    stfs f3, 0x8d4(r30)
    stw r5, 0x54(r30)
    stw r0, 0xe8(r30)
    stw r5, 0xec(r30)
    psq_l f1, 0x4(r6), 0, 0
    lfs f2, 0xc(r6)
    stfs f2, 0x74(r30)
    psq_st f1, 0x6c(r30), 0, 0
    lfs f1, 0x14(r6)
    stfs f1, 0x7c(r30)
    stfs f4, 0xf8(r30)
    stfs f4, 0xfc(r30)
    stfs f0, 0x100(r30)
    bl fn_805F8E70
    addi r4, r30, 0xf8
    addi r3, r1, 0x8
    mr r5, r4
    bl fn_805F93C0
    mr r3, r30
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}
