#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_23(void);
extern void _restgpr_25(void);
extern void _restgpr_27(void);
extern void _savegpr_23(void);
extern void _savegpr_25(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_8000D430(void);
extern void fn_80056DB8(void);
extern void fn_80056E40(void);
extern void fn_8005B9CC(void);
extern void fn_8005BBF8(void);
extern void fn_8005BCE8(void);
extern void fn_80084320(void);
extern void fn_800846FC(void);
extern void fn_800874C8(void);
extern void fn_80087994(void);
extern void fn_80087E9C(void);
extern void fn_80088724(void);
extern void fn_8008937C(void);
extern void fn_8008AD4C(void);
extern void fn_8008B140(void);
extern void fn_8008CD60(void);
extern void fn_80092A4C(void);
extern void fn_80094F98(void);
extern void fn_80096E94(void);
extern void fn_800971D4(void);
extern void fn_80097A88(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_80097E80(void);
extern void fn_800DC288(void);
extern void fn_802180A8(void);
extern void fn_803C1560(void);
extern void fn_803EC568(void);
extern void fn_803EC69C(void);
extern void fn_803EC758(void);
extern void fn_803EC91C(void);
extern void fn_803F11F8(void);
extern void fn_8042952C(void);
extern void fn_804491F4(void);
extern void fn_80449A18(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_8054D798(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_80680CF8(void);
extern void fn_80682428(void);
extern void fn_806868C4(void);
extern void fn_8068AEA4(void);
extern void fn_80695720(void);
extern void fn_80695A50(void);
extern char* strcpy(char* dest, const char* src);

/* External data declarations */
extern u8 lbl_80753688[];
extern u8 lbl_80753700[];
extern u8 lbl_8075371C[];
extern u8 lbl_80753750[];
extern u8 lbl_807774B8[];
extern u8 lbl_807774D8[];
extern u8 lbl_80777668[];
extern u8 lbl_8078E508[];
extern u8 lbl_8078E5A0[];
extern u8 lbl_8078E5A8[];
extern u8 lbl_807C7060[];

/* Small data declarations */
extern u32 lbl_8087D710;
extern u32 lbl_8087DFA8;
extern u32 lbl_8087DFAC;
extern u32 lbl_8087EF10;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F430;
extern u32 lbl_8087F4F0;
extern u32 lbl_8087F610;
extern u32 lbl_8087F8A8;
extern u32 lbl_808866A0;
extern u32 lbl_808866B8;
extern u32 lbl_808866BC;
extern u32 lbl_808866C0;
extern u32 lbl_808866C4;
extern u32 lbl_808866C8;
extern u32 lbl_808866CC;
extern u32 lbl_808866D0;
extern u32 lbl_808866D4;
extern u32 lbl_808866D8;
extern u32 lbl_808866DC;
extern u32 lbl_808866E0;
extern u32 lbl_808866E4;
extern u32 lbl_808866E8;
extern u32 lbl_808866EC;
extern u32 lbl_808866F0;
extern u32 lbl_808866F4;
extern u32 lbl_808866F8;
extern u32 lbl_808866FC;
extern u32 lbl_80886700;

/* Function declarations */
void fn_804273A4(void);
void fn_804274C8(void);
void fn_80427520(void);
void fn_80427550(void);
void fn_80427568(void);
void fn_80427570(void);
void fn_8042758C(void);
void fn_804275BC(void);
void fn_804275D0(void);
void fn_80427730(void);
void fn_80427804(void);
void fn_80427870(void);
void fn_80427EB4(void);
void fn_80427F28(void);
void fn_804280B4(void);
void fn_8042813C(void);
void fn_804282B8(void);
void fn_80428338(void);
void fn_804283EC(void);
void fn_8042856C(void);
void fn_80428928(void);
void fn_80428B0C(void);
void fn_80428BC8(void);
void fn_80428C20(void);
void fn_80428C68(void);

asm void fn_804273A4(void)
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
    bne lbl_fn_804273A4_0000002C
    li r3, 0x0
    b lbl_fn_804273A4_0000010C
lbl_fn_804273A4_0000002C:
    lwz r12, 0x0(r3)
    lwz r12, 0x5c(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_804273A4_0000004C
    li r3, 0x0
    b lbl_fn_804273A4_0000010C
lbl_fn_804273A4_0000004C:
    lwz r3, 0x48(r30)
    addis r0, r3, 0x0
    cmplwi r0, 0xbb80
    beq lbl_fn_804273A4_000000E4
    lwz r3, 0x28(r31)
    cmpwi r3, 0x0
    beq lbl_fn_804273A4_00000080
    lwz r0, 0x48(r3)
    cmpwi r0, 0x2
    beq lbl_fn_804273A4_00000088
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    bne lbl_fn_804273A4_00000088
lbl_fn_804273A4_00000080:
    li r3, 0x0
    b lbl_fn_804273A4_0000010C
lbl_fn_804273A4_00000088:
    lwz r4, 0x2c(r31)
    cmpwi r4, 0x0
    beq lbl_fn_804273A4_000000E4
    lwz r3, 0x4(r4)
    subi r0, r3, 0x78d
    cmplwi r0, 0x2
    ble lbl_fn_804273A4_000000AC
    cmpwi r3, 0x785
    bne lbl_fn_804273A4_000000B4
lbl_fn_804273A4_000000AC:
    li r3, 0x0
    b lbl_fn_804273A4_0000010C
lbl_fn_804273A4_000000B4:
    lwz r0, 0xac(r4)
    rlwinm r3, r0, 0, 6, 6
    subis r0, r3, 0x200
    cmplwi r0, 0x0
    bne lbl_fn_804273A4_000000D0
    li r3, 0x0
    b lbl_fn_804273A4_0000010C
lbl_fn_804273A4_000000D0:
    lwz r0, 0x3c(r4)
    cmpwi r0, 0x2
    bge lbl_fn_804273A4_000000E4
    li r3, 0x0
    b lbl_fn_804273A4_0000010C
lbl_fn_804273A4_000000E4:
    lwz r0, 0x54(r30)
    cmpwi r0, 0x1
    bne lbl_fn_804273A4_00000108
    lwz r12, 0x0(r30)
    mr r3, r30
    li r4, 0x2
    lwz r12, 0x70(r12)
    mtctr r12
    bctrl
lbl_fn_804273A4_00000108:
    lwz r3, 0x54(r30)
lbl_fn_804273A4_0000010C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804274C8(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lfs f0, lbl_808866A0
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

asm void fn_80427520(void)
{
    nofralloc
    lwz r0, 0x894(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80427520_000001A4
    lwz r0, 0x54(r3)
    cmpwi r0, 0x3
    bge lbl_fn_80427520_0000019C
    addi r3, r3, 0xf4
    blr
lbl_fn_80427520_0000019C:
    addi r3, r3, 0x4c4
    blr
lbl_fn_80427520_000001A4:
    addi r3, r3, 0xf4
    blr
}

asm void fn_80427550(void)
{
    nofralloc
    lwz r4, 0x54(r3)
    subfic r3, r4, 0x3
    subi r0, r4, 0x3
    or r0, r3, r0
    srwi r3, r0, 31
    blr
}

asm void fn_80427568(void)
{
    nofralloc
    addi r3, r3, 0x898
    blr
}

asm void fn_80427570(void)
{
    nofralloc
    lfs f0, 0x128(r4)
    lfs f1, 0x118(r4)
    lfs f2, 0x108(r4)
    stfs f2, 0x0(r3)
    stfs f1, 0x4(r3)
    stfs f0, 0x8(r3)
    blr
}

asm void fn_8042758C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    mr r4, r3
    stw r0, 0x24(r1)
    addi r3, r1, 0x8
    addi r4, r4, 0xf4
    bl fn_80094F98
    lwz r0, 0x24(r1)
    lfs f1, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804275BC(void)
{
    nofralloc
    lwz r3, 0x54(r3)
    subi r0, r3, 0x1
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

asm void fn_804275D0(void)
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
    bne lbl_fn_804275D0_0000028C
    cmpwi r30, 0x0
    beq lbl_fn_804275D0_0000028C
    lwz r0, lbl_8087EF10
    cmpwi r0, 0x0
    beq lbl_fn_804275D0_0000028C
    mr r3, r30
    addi r4, r1, 0x8
    bl fn_8008937C
    stw r3, 0xf0(r29)
    mr r30, r3
    b lbl_fn_804275D0_00000290
lbl_fn_804275D0_0000028C:
    li r30, 0x0
lbl_fn_804275D0_00000290:
    lis r31, lbl_80753688@ha
    mr r3, r30
    addi r31, r31, lbl_80753688@l
    addi r5, r29, 0x54
    addi r4, r31, 0x56
    li r6, 0x0
    li r7, 0x63
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_808866B8
    mr r3, r30
    lfs f2, lbl_808866BC
    addi r4, r31, 0x5c
    lfs f3, lbl_808866C0
    addi r5, r29, 0x6c
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    lfs f1, lbl_808866C4
    mr r3, r30
    lfs f2, lbl_808866C8
    addi r4, r31, 0x60
    lfs f3, lbl_808866CC
    addi r5, r29, 0x78
    li r6, 0x0
    li r7, 0x0
    bl fn_80088724
    lfs f1, lbl_808866B8
    mr r3, r30
    lfs f2, lbl_808866BC
    addi r4, r31, 0x64
    lfs f3, lbl_808866C0
    addi r5, r29, 0x90
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    mr r3, r30
    addi r4, r31, 0x68
    addi r5, r29, 0x9c
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r30
    addi r4, r31, 0x6f
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

asm void fn_80427730(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    addi r31, r3, 0x4
    stw r30, 0x8(r1)
    mr r30, r3
    mr r3, r31
    bl fn_80056DB8
    lfs f0, lbl_808866D0
    lis r3, lbl_80777668@ha
    addi r3, r3, lbl_80777668@l
    stw r3, 0x0(r31)
    addi r3, r30, 0x54
    li r4, 0x8
    stfs f0, 0x50(r30)
    li r5, 0x20
    bl fn_80096E94
    lfs f3, lbl_808866D4
    li r6, 0x18
    lwz r0, 0xc(r30)
    li r5, 0x1
    fmr f2, f3
    stfs f3, 0x424(r30)
    lfs f0, lbl_808866D8
    clrrwi r0, r0, 1
    stfs f3, 0x428(r30)
    ori r4, r0, 0x8
    stfs f2, 0x42c(r30)
    fmr f2, f0
    psq_l f1, 0x424(r30), 0, 0
    mr r3, r30
    lwz r0, 0x0(r30)
    stfs f3, 0x43c(r30)
    stfs f3, 0x440(r30)
    psq_st f1, 0x424(r30), 0, 0
    psq_l f1, 0x43c(r30), 0, 0
    stfs f3, 0x430(r30)
    stfs f3, 0x434(r30)
    stfs f3, 0x438(r30)
    stw r6, 0x24(r30)
    stw r5, 0x448(r30)
    psq_st f1, 0x43c(r30), 0, 0
    stfs f2, 0x444(r30)
    stw r4, 0xc(r30)
    stw r0, 0x10(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80427804(void)
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
    beq lbl_fn_80427804_000004B0
    li r4, -0x1
    addi r3, r3, 0x54
    bl fn_800971D4
    addic. r3, r30, 0x4
    beq lbl_fn_80427804_000004A0
    li r4, 0x0
    bl fn_80056E40
lbl_fn_80427804_000004A0:
    cmpwi r31, 0x0
    ble lbl_fn_80427804_000004B0
    mr r3, r30
    bl dtor_80084684
lbl_fn_80427804_000004B0:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80427870(void)
{
    nofralloc
    stwu r1, -0x330(r1)
    mflr r0
    stw r0, 0x334(r1)
    stfd f31, 0x320(r1)
    psq_st f31, 0x328(r1), 0, 0
    stfd f30, 0x310(r1)
    psq_st f30, 0x318(r1), 0, 0
    stfd f29, 0x300(r1)
    psq_st f29, 0x308(r1), 0, 0
    stfd f28, 0x2f0(r1)
    psq_st f28, 0x2f8(r1), 0, 0
    stfd f27, 0x2e0(r1)
    psq_st f27, 0x2e8(r1), 0, 0
    stfd f26, 0x2d0(r1)
    psq_st f26, 0x2d8(r1), 0, 0
    stw r31, 0x2cc(r1)
    mr r31, r3
    stw r30, 0x2c8(r1)
    lwz r0, 0x448(r3)
    cmpwi r0, 0x1
    ble lbl_fn_80427870_00000AC8
    cmpwi r0, 0x2
    bne lbl_fn_80427870_00000710
    lfs f2, 0x444(r3)
    addi r30, r1, 0x98
    psq_l f1, 0x43c(r3), 0, 0
    fabs f0, f2
    lfs f10, 0x424(r3)
    lfs f9, 0x43c(r3)
    lfs f8, 0x428(r3)
    frsp f11, f0
    lfs f7, 0x440(r3)
    fadds f10, f10, f9
    lfs f0, lbl_808866DC
    fadds f9, f8, f7
    lfs f8, 0x42c(r3)
    lfs f7, 0x444(r3)
    fcmpo cr0, f11, f0
    stfs f10, 0x424(r3)
    fadds f0, f8, f7
    stfs f9, 0x428(r3)
    stfs f0, 0x42c(r3)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0xa0(r1)
    bge lbl_fn_80427870_000005A4
    lfs f7, 0x98(r1)
    lfs f0, lbl_808866D4
    fcmpo cr0, f7, f0
    ble lbl_fn_80427870_00000598
    lfs f0, lbl_808866E0
    b lbl_fn_80427870_0000059C
lbl_fn_80427870_00000598:
    lfs f0, lbl_808866E4
lbl_fn_80427870_0000059C:
    stfs f0, 0x78(r1)
    b lbl_fn_80427870_000005B8
lbl_fn_80427870_000005A4:
    frsp f2, f2
    lfs f1, 0x98(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x78(r1)
lbl_fn_80427870_000005B8:
    lfs f0, 0x78(r1)
    addi r3, r1, 0x1f8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f7, lbl_808866D4
    addi r4, r1, 0x68
    lfs f26, 0x200(r1)
    mr r5, r4
    lfs f27, 0x1fc(r1)
    addi r3, r1, 0x228
    lfs f28, 0x1f8(r1)
    lfs f29, 0x210(r1)
    lfs f31, 0x20c(r1)
    lfs f30, 0x208(r1)
    lfs f13, 0x220(r1)
    lfs f12, 0x21c(r1)
    lfs f11, 0x218(r1)
    lfs f10, 0x224(r1)
    lfs f9, 0x214(r1)
    lfs f8, 0x204(r1)
    lfs f0, lbl_808866D8
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0xa0(r1)
    stfs f7, 0x258(r1)
    stfs f7, 0x25c(r1)
    stfs f7, 0x260(r1)
    stfs f0, 0x264(r1)
    stfs f28, 0x38(r1)
    stfs f27, 0x3c(r1)
    stfs f26, 0x40(r1)
    stfs f28, 0x228(r1)
    stfs f27, 0x22c(r1)
    stfs f26, 0x230(r1)
    stfs f30, 0x44(r1)
    stfs f31, 0x48(r1)
    stfs f29, 0x4c(r1)
    stfs f30, 0x238(r1)
    stfs f31, 0x23c(r1)
    stfs f29, 0x240(r1)
    stfs f11, 0x50(r1)
    stfs f12, 0x54(r1)
    stfs f13, 0x58(r1)
    stfs f11, 0x248(r1)
    stfs f12, 0x24c(r1)
    stfs f13, 0x250(r1)
    stfs f8, 0x5c(r1)
    stfs f9, 0x60(r1)
    stfs f10, 0x64(r1)
    stfs f8, 0x234(r1)
    stfs f9, 0x244(r1)
    stfs f10, 0x254(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x70(r1)
    bl fn_805F9750
    lfs f2, 0x70(r1)
    lfs f0, lbl_808866DC
    fabs f7, f2
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_80427870_000006D4
    lfs f7, 0x6c(r1)
    lfs f0, lbl_808866D4
    fcmpo cr0, f7, f0
    ble lbl_fn_80427870_000006C4
    lfs f0, lbl_808866E0
    b lbl_fn_80427870_000006C8
lbl_fn_80427870_000006C4:
    lfs f0, lbl_808866E4
lbl_fn_80427870_000006C8:
    fneg f0, f0
    stfs f0, 0x74(r1)
    b lbl_fn_80427870_000006E8
lbl_fn_80427870_000006D4:
    lfs f1, 0x6c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x74(r1)
lbl_fn_80427870_000006E8:
    lfs f2, lbl_808866D4
    addi r3, r1, 0x74
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x7c(r1)
    stfs f2, 0xa0(r1)
    frsp f2, f2
    psq_st f1, 0x0(r30), 0, 0
    psq_st f1, 0x430(r31), 0, 0
    stfs f2, 0x438(r31)
    b lbl_fn_80427870_00000784
lbl_fn_80427870_00000710:
    cmpwi r0, 0x3
    bne lbl_fn_80427870_00000784
    lwz r4, 0x44c(r3)
    subic. r0, r4, 0x1
    stw r0, 0x44c(r3)
    blt lbl_fn_80427870_00000AC8
    lfs f2, lbl_808866D4
    addi r4, r1, 0x80
    stfs f2, 0x80(r1)
    lfs f10, lbl_808866E8
    stfs f2, 0x84(r1)
    lfs f8, 0x424(r3)
    psq_l f1, 0x0(r4), 0, 0
    fadds f9, f8, f2
    lfs f7, 0x428(r3)
    lfs f0, 0x42c(r3)
    fadds f8, f7, f10
    psq_st f1, 0x430(r3), 0, 0
    fadds f7, f0, f2
    lfs f0, lbl_808866E0
    stfs f2, 0x8c(r1)
    stfs f10, 0x90(r1)
    stfs f2, 0x94(r1)
    stfs f9, 0x424(r3)
    stfs f8, 0x428(r3)
    stfs f7, 0x42c(r3)
    stfs f2, 0x88(r1)
    stfs f2, 0x438(r3)
    stfs f0, 0x430(r3)
lbl_fn_80427870_00000784:
    addi r3, r31, 0x54
    bl fn_80092A4C
    lis r4, lbl_807C7060@ha
    lfs f7, lbl_808866D4
    addi r4, r4, lbl_807C7060@l
    lfs f0, lbl_808866D8
    addi r3, r1, 0x298
    psq_l f1, 0x0(r4), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    addi r30, r1, 0x268
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f4, 0x18(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    psq_st f6, 0x28(r3), 0, 0
    stfs f7, 0x294(r1)
    stfs f7, 0x28c(r1)
    stfs f7, 0x288(r1)
    stfs f7, 0x284(r1)
    stfs f7, 0x280(r1)
    stfs f7, 0x278(r1)
    stfs f7, 0x274(r1)
    stfs f7, 0x270(r1)
    stfs f7, 0x26c(r1)
    stfs f0, 0x290(r1)
    stfs f0, 0x27c(r1)
    stfs f0, 0x268(r1)
    lfs f1, 0x438(r31)
    fcmpu cr0, f7, f1
    beq lbl_fn_80427870_00000860
    addi r3, r1, 0x108
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x108
    addi r5, r1, 0xd8
    bl fn_805F89F0
    addi r3, r1, 0xd8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_80427870_00000860:
    lfs f0, lbl_808866D4
    lfs f1, 0x434(r31)
    fcmpu cr0, f0, f1
    beq lbl_fn_80427870_000008C0
    addi r3, r1, 0x168
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x168
    addi r5, r1, 0x138
    bl fn_805F89F0
    addi r3, r1, 0x138
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_80427870_000008C0:
    lfs f0, lbl_808866D4
    lfs f1, 0x430(r31)
    fcmpu cr0, f0, f1
    beq lbl_fn_80427870_00000920
    addi r3, r1, 0x1c8
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x1c8
    addi r5, r1, 0x198
    bl fn_805F89F0
    addi r3, r1, 0x198
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_80427870_00000920:
    addi r4, r1, 0x298
    addi r3, r1, 0x268
    mr r5, r4
    bl fn_805F89F0
    lfs f8, 0x42c(r31)
    addi r4, r1, 0x298
    lfs f7, 0x428(r31)
    addi r3, r1, 0x14
    lfs f0, 0x424(r31)
    stfs f0, 0x2a4(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f7, 0x2b4(r1)
    psq_l f2, 0x8(r4), 0, 0
    stfs f8, 0x2c4(r1)
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_st f6, 0x84(r31), 0, 0
    psq_st f1, 0x5c(r31), 0, 0
    psq_st f2, 0x64(r31), 0, 0
    psq_st f3, 0x6c(r31), 0, 0
    psq_st f4, 0x74(r31), 0, 0
    psq_st f5, 0x7c(r31), 0, 0
    lfs f8, 0x2c0(r1)
    lfs f7, 0x2b0(r1)
    lfs f0, 0x2a0(r1)
    stfs f0, 0x14(r1)
    stfs f7, 0x18(r1)
    stfs f8, 0x1c(r1)
    bl fn_805F9940
    lfs f8, 0x2bc(r1)
    fmr f30, f1
    lfs f7, 0x2ac(r1)
    addi r3, r1, 0x20
    lfs f0, 0x29c(r1)
    stfs f0, 0x20(r1)
    stfs f7, 0x24(r1)
    stfs f8, 0x28(r1)
    bl fn_805F9940
    lfs f8, 0x2b8(r1)
    fmr f31, f1
    lfs f7, 0x2a8(r1)
    addi r3, r1, 0x2c
    lfs f0, 0x298(r1)
    stfs f0, 0x2c(r1)
    stfs f7, 0x30(r1)
    stfs f8, 0x34(r1)
    bl fn_805F9940
    frsp f7, f31
    stfs f1, 0x8(r1)
    frsp f0, f30
    stfs f31, 0xc(r1)
    fcmpo cr0, f7, f0
    stfs f30, 0x10(r1)
    ble lbl_fn_80427870_00000A04
    b lbl_fn_80427870_00000A08
lbl_fn_80427870_00000A04:
    fmr f7, f0
lbl_fn_80427870_00000A08:
    lfs f8, 0x8(r1)
    fcmpo cr0, f8, f7
    ble lbl_fn_80427870_00000A18
    b lbl_fn_80427870_00000A30
lbl_fn_80427870_00000A18:
    lfs f8, 0xc(r1)
    lfs f0, 0x10(r1)
    fcmpo cr0, f8, f0
    ble lbl_fn_80427870_00000A2C
    b lbl_fn_80427870_00000A30
lbl_fn_80427870_00000A2C:
    fmr f8, f0
lbl_fn_80427870_00000A30:
    stfs f8, 0xa8(r31)
    li r0, 0x0
    addi r3, r31, 0x54
    addi r4, r1, 0xc0
    stw r0, 0xc0(r1)
    bl fn_8000D430
    addic. r3, r1, 0xc0
    beq lbl_fn_80427870_00000A84
    lwz r4, 0xc0(r1)
    cmpwi r4, 0x0
    beq lbl_fn_80427870_00000A84
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_80427870_00000A7C
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80427870_00000A7C:
    li r0, 0x0
    stw r0, 0xc0(r1)
lbl_fn_80427870_00000A84:
    addi r3, r31, 0x54
    li r4, 0x1
    bl fn_80097E80
    lfs f2, 0x42c(r31)
    addi r3, r1, 0xa4
    psq_l f1, 0x424(r31), 0, 0
    addi r4, r1, 0xb0
    stfs f2, 0xac(r1)
    lfs f0, 0x50(r31)
    stfs f2, 0xb8(r1)
    frsp f2, f2
    psq_st f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f0, 0xbc(r1)
    psq_st f1, 0x40(r31), 0, 0
    stfs f2, 0x48(r31)
    stfs f0, 0x4c(r31)
lbl_fn_80427870_00000AC8:
    lwz r0, 0x334(r1)
    psq_l f31, 0x328(r1), 0, 0
    lfd f31, 0x320(r1)
    psq_l f30, 0x318(r1), 0, 0
    lfd f30, 0x310(r1)
    psq_l f29, 0x308(r1), 0, 0
    lfd f29, 0x300(r1)
    psq_l f28, 0x2f8(r1), 0, 0
    lfd f28, 0x2f0(r1)
    psq_l f27, 0x2e8(r1), 0, 0
    lfd f27, 0x2e0(r1)
    psq_l f26, 0x2d8(r1), 0, 0
    lfd f26, 0x2d0(r1)
    lwz r31, 0x2cc(r1)
    lwz r30, 0x2c8(r1)
    mtlr r0
    addi r1, r1, 0x330
    blr
}

asm void fn_80427EB4(void)
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
    beq lbl_fn_80427EB4_00000B68
    lis r5, lbl_8075371C@ha
    li r3, 0x620
    addi r5, r5, lbl_8075371C@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_80427EB4_00000B6C
    mr r4, r30
    mr r5, r31
    bl fn_80427F28
    b lbl_fn_80427EB4_00000B6C
lbl_fn_80427EB4_00000B68:
    li r3, 0x0
lbl_fn_80427EB4_00000B6C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80427F28(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    mr r31, r5
    stw r30, 0x58(r1)
    mr r30, r3
    lwz r5, 0x18(r5)
    lwz r6, 0x1c(r31)
    bl fn_803EC568
    lfs f0, lbl_808866D0
    lis r3, lbl_8078E508@ha
    li r0, 0x0
    stw r0, 0x5f4(r30)
    addi r3, r3, lbl_8078E508@l
    stw r3, 0x0(r30)
    stw r0, 0x5f8(r30)
    stfs f0, 0x600(r30)
    stw r31, 0x614(r30)
    stw r0, 0x618(r30)
    stw r0, 0x61c(r30)
    lwz r31, 0x20(r31)
    stw r31, 0x5fc(r30)
    b lbl_fn_80427F28_00000BE8
    bl fn_80695A50
lbl_fn_80427F28_00000BE8:
    cmpwi r31, 0x0
    stw r31, 0x5f4(r30)
    beq lbl_fn_80427F28_00000C34
    mulli r3, r31, 0x450
    li r4, 0x0
    la r5, lbl_8087DFAC
    la r6, lbl_8087DFA8
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_80427730@ha
    lis r5, fn_80427804@ha
    mr r7, r31
    li r6, 0x450
    addi r4, r4, fn_80427730@l
    addi r5, r5, fn_80427804@l
    bl fn_80695720
    stw r3, 0x5f8(r30)
    b lbl_fn_80427F28_00000C3C
lbl_fn_80427F28_00000C34:
    li r0, 0x0
    stw r0, 0x5f8(r30)
lbl_fn_80427F28_00000C3C:
    lwz r5, 0x614(r30)
    addi r3, r1, 0x20
    li r4, 0x79
    lfs f0, 0x40(r5)
    stfs f0, 0x604(r30)
    psq_l f1, 0x4(r5), 0, 0
    lfs f2, 0xc(r5)
    stfs f2, 0x74(r30)
    psq_st f1, 0x6c(r30), 0, 0
    lfs f1, 0x14(r5)
    bl fn_805F8E70
    lfs f0, lbl_808866D4
    addi r31, r1, 0x14
    stfs f0, 0x8(r1)
    addi r6, r1, 0x8
    lfs f2, lbl_808866D8
    mr r4, r31
    stfs f0, 0xc(r1)
    mr r5, r31
    addi r3, r1, 0x20
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x1c(r1)
    bl fn_805F93C0
    psq_l f1, 0x0(r31), 0, 0
    addi r3, r30, 0x608
    lfs f2, 0x1c(r1)
    mr r4, r3
    stfs f2, 0x610(r30)
    lwz r5, 0x614(r30)
    psq_st f1, 0x0(r3), 0, 0
    lfs f0, 0x48(r5)
    stfs f0, 0x60c(r30)
    bl fn_805F98D0
    lwz r4, 0x614(r30)
    mr r3, r30
    lfs f4, 0x608(r30)
    lfs f5, 0x44(r4)
    lfs f3, 0x60c(r30)
    lfs f0, 0x610(r30)
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    fmuls f0, f0, f5
    stfs f4, 0x608(r30)
    stfs f3, 0x60c(r30)
    stfs f0, 0x610(r30)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_804280B4(void)
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
    beq lbl_fn_804280B4_00000D7C
    addic. r0, r3, 0x5f4
    beq lbl_fn_804280B4_00000D60
    lwz r3, 0x5f8(r3)
    cmpwi r3, 0x0
    beq lbl_fn_804280B4_00000D54
    lis r4, fn_80427804@ha
    addi r4, r4, fn_80427804@l
    bl fn_80695A50
lbl_fn_804280B4_00000D54:
    li r0, 0x0
    stw r0, 0x5f8(r30)
    stw r0, 0x5f4(r30)
lbl_fn_804280B4_00000D60:
    mr r3, r30
    li r4, 0x0
    bl fn_803EC69C
    cmpwi r31, 0x0
    ble lbl_fn_804280B4_00000D7C
    mr r3, r30
    bl dtor_80084684
lbl_fn_804280B4_00000D7C:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8042813C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    lwz r0, 0x618(r3)
    mr r31, r3
    cmpwi r0, 0x0
    bne lbl_fn_8042813C_00000E54
    bl fn_803EC91C
    cmpwi r3, 0x0
    bne lbl_fn_8042813C_00000EF8
    li r26, 0x0
    li r29, 0x0
    b lbl_fn_8042813C_00000E3C
lbl_fn_8042813C_00000DD4:
    lwz r3, 0x5f8(r31)
    addi r4, r31, 0xf4
    li r5, 0x0
    stwx r31, r3, r29
    lwz r0, 0x5f8(r31)
    add r3, r0, r29
    addi r3, r3, 0x54
    bl fn_8008AD4C
    addi r28, r31, 0x1f4
    addi r27, r31, 0x3f4
    li r25, 0x0
lbl_fn_8042813C_00000E00:
    lwz r0, 0x5f8(r31)
    mr r3, r27
    add r30, r0, r29
    bl fn_802180A8
    mr r4, r3
    mr r5, r28
    addi r3, r30, 0x54
    bl fn_80097A88
    addi r25, r25, 0x1
    addi r27, r27, 0x100
    cmpwi r25, 0x2
    addi r28, r28, 0x100
    blt lbl_fn_8042813C_00000E00
    addi r29, r29, 0x450
    addi r26, r26, 0x1
lbl_fn_8042813C_00000E3C:
    lwz r0, 0x5fc(r31)
    cmplw r26, r0
    blt lbl_fn_8042813C_00000DD4
    li r0, 0x1
    stw r0, 0x618(r31)
    b lbl_fn_8042813C_00000EF8
lbl_fn_8042813C_00000E54:
    cmpwi r0, 0x1
    bne lbl_fn_8042813C_00000EB0
    li r25, 0x0
    li r30, 0x0
    b lbl_fn_8042813C_00000E98
lbl_fn_8042813C_00000E68:
    lwz r0, 0x5f8(r31)
    add r3, r0, r30
    addi r3, r3, 0x54
    bl fn_8008B140
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_fn_8042813C_00000E90
    li r3, 0x0
    b lbl_fn_8042813C_00000EFC
lbl_fn_8042813C_00000E90:
    addi r30, r30, 0x450
    addi r25, r25, 0x1
lbl_fn_8042813C_00000E98:
    lwz r0, 0x5fc(r31)
    cmplw r25, r0
    blt lbl_fn_8042813C_00000E68
    li r0, 0x2
    stw r0, 0x618(r31)
    b lbl_fn_8042813C_00000EF8
lbl_fn_8042813C_00000EB0:
    cmpwi r0, 0x2
    bne lbl_fn_8042813C_00000EF8
    li r6, 0x0
    li r5, 0x0
    b lbl_fn_8042813C_00000EDC
lbl_fn_8042813C_00000EC4:
    lwz r0, 0x5f8(r3)
    addi r6, r6, 0x1
    lfs f0, 0x600(r3)
    add r4, r0, r5
    addi r5, r5, 0x450
    stfs f0, 0x50(r4)
lbl_fn_8042813C_00000EDC:
    lwz r0, 0x5fc(r3)
    cmplw r6, r0
    blt lbl_fn_8042813C_00000EC4
    li r0, 0x1
    stw r0, 0x61c(r3)
    li r3, 0x1
    b lbl_fn_8042813C_00000EFC
lbl_fn_8042813C_00000EF8:
    li r3, 0x0
lbl_fn_8042813C_00000EFC:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_804282B8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r4, 0x614(r3)
    lwz r0, 0x7c(r4)
    cmpwi r0, 0x0
    beq lbl_fn_804282B8_00000F78
    lwz r0, 0x61c(r3)
    cmpwi r0, 0x3
    bne lbl_fn_804282B8_00000F78
    li r30, 0x0
    li r31, 0x0
    b lbl_fn_804282B8_00000F6C
lbl_fn_804282B8_00000F58:
    lwz r0, 0x5f8(r29)
    add r3, r0, r31
    bl fn_80427870
    addi r31, r31, 0x450
    addi r30, r30, 0x1
lbl_fn_804282B8_00000F6C:
    lwz r0, 0x5fc(r29)
    cmplw r30, r0
    blt lbl_fn_804282B8_00000F58
lbl_fn_804282B8_00000F78:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80428338(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r4, 0x614(r3)
    lwz r0, 0x7c(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80428338_0000102C
    lwz r0, 0x61c(r3)
    cmpwi r0, 0x3
    bne lbl_fn_80428338_0000102C
    li r30, 0x0
    li r31, 0x0
    b lbl_fn_80428338_00001020
lbl_fn_80428338_00000FD8:
    lwz r0, 0x5f8(r29)
    add r4, r0, r31
    lwz r0, 0x448(r4)
    cmpwi r0, 0x1
    ble lbl_fn_80428338_00001018
    cmpwi r0, 0x3
    bne lbl_fn_80428338_00001000
    lwz r0, 0x44c(r4)
    cmpwi r0, 0x0
    blt lbl_fn_80428338_00001018
lbl_fn_80428338_00001000:
    lwz r3, lbl_8087F0A8
    lwz r0, 0x18(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80428338_00001018
    addi r3, r4, 0x54
    bl fn_8008CD60
lbl_fn_80428338_00001018:
    addi r31, r31, 0x450
    addi r30, r30, 0x1
lbl_fn_80428338_00001020:
    lwz r0, 0x5fc(r29)
    cmplw r30, r0
    blt lbl_fn_80428338_00000FD8
lbl_fn_80428338_0000102C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804283EC(void)
{
    nofralloc
    stwu r1, -0x660(r1)
    mflr r0
    stw r0, 0x664(r1)
    stmw r27, 0x64c(r1)
    mr r27, r3
    addi r3, r3, 0x60
    bl fn_8047059C
    mr r30, r3
    addi r3, r27, 0x60
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
    lis r31, lbl_8075371C@ha
    addi r30, r27, 0x1f4
    addi r29, r27, 0x3f4
    addi r31, r31, lbl_8075371C@l
lbl_fn_804283EC_000010F8:
    addi r3, r1, 0x8
    bl fn_8005B9CC
    lbz r0, 0x0(r3)
    mr r28, r3
    cmpwi r0, 0x3b
    beq lbl_fn_804283EC_000011A4
    addi r4, r31, 0x1
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_804283EC_00001138
    addi r3, r1, 0x8
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r27, 0xf4
    bl strcpy
    b lbl_fn_804283EC_000011A4
lbl_fn_804283EC_00001138:
    mr r3, r28
    addi r4, r31, 0x7
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_804283EC_00001180
    addi r3, r1, 0x8
    bl fn_8005B9CC
    mr r4, r3
    mr r3, r30
    bl strcpy
    addi r3, r1, 0x8
    bl fn_8005B9CC
    mr r4, r3
    mr r3, r29
    bl strcpy
    addi r30, r30, 0x100
    addi r29, r29, 0x100
    b lbl_fn_804283EC_000011A4
lbl_fn_804283EC_00001180:
    mr r3, r28
    addi r4, r31, 0xe
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_804283EC_000011A4
    addi r3, r1, 0x8
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x600(r27)
lbl_fn_804283EC_000011A4:
    addi r3, r1, 0x8
    bl fn_8005BBF8
    cmpwi r3, 0x0
    bne lbl_fn_804283EC_000010F8
    lmw r27, 0x64c(r1)
    lwz r0, 0x664(r1)
    mtlr r0
    addi r1, r1, 0x660
    blr
}

asm void fn_8042856C(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    stw r0, 0xd4(r1)
    addi r11, r1, 0x50
    stfd f31, 0xc0(r1)
    psq_st f31, 0xc8(r1), 0, 0
    stfd f30, 0xb0(r1)
    psq_st f30, 0xb8(r1), 0, 0
    stfd f29, 0xa0(r1)
    psq_st f29, 0xa8(r1), 0, 0
    stfd f28, 0x90(r1)
    psq_st f28, 0x98(r1), 0, 0
    stfd f27, 0x80(r1)
    psq_st f27, 0x88(r1), 0, 0
    stfd f26, 0x70(r1)
    psq_st f26, 0x78(r1), 0, 0
    stfd f25, 0x60(r1)
    psq_st f25, 0x68(r1), 0, 0
    stfd f24, 0x50(r1)
    psq_st f24, 0x58(r1), 0, 0
    bl _savegpr_23
    cmpwi r4, 0x0
    lis r0, 0x4330
    stw r0, 0x18(r1)
    mr r26, r3
    mr r27, r4
    stw r0, 0x20(r1)
    bne lbl_fn_8042856C_00001240
    li r3, 0x0
    b lbl_fn_8042856C_0000152C
lbl_fn_8042856C_00001240:
    lwz r0, 0x0(r4)
    cmplwi r0, 0x1
    ble lbl_fn_8042856C_00001258
    cmpwi r0, 0x2
    beq lbl_fn_8042856C_000012C4
    b lbl_fn_8042856C_00001524
lbl_fn_8042856C_00001258:
    li r7, 0x0
    li r4, 0x0
    li r5, 0x1
    b lbl_fn_8042856C_000012B4
lbl_fn_8042856C_00001268:
    lwz r0, 0x5f8(r3)
    addi r7, r7, 0x1
    add r6, r0, r4
    addi r4, r4, 0x450
    stw r5, 0x448(r6)
    lfs f2, 0x74(r3)
    psq_l f1, 0x6c(r3), 0, 0
    psq_st f1, 0x424(r6), 0, 0
    stfs f2, 0x42c(r6)
    lfs f2, 0x610(r3)
    psq_l f1, 0x608(r3), 0, 0
    psq_st f1, 0x43c(r6), 0, 0
    stfs f2, 0x444(r6)
    lwz r0, 0xc(r6)
    clrrwi r0, r0, 1
    ori r0, r0, 0x8
    stw r0, 0xc(r6)
    lwz r0, 0x0(r6)
    stw r0, 0x10(r6)
lbl_fn_8042856C_000012B4:
    lwz r0, 0x5fc(r3)
    cmplw r7, r0
    blt lbl_fn_8042856C_00001268
    b lbl_fn_8042856C_00001524
lbl_fn_8042856C_000012C4:
    lis r3, lbl_80753700@ha
    lis r4, 0x4178
    lfd f27, lbl_80753700@l(r3)
    addi r30, r4, 0x749f
    lfs f28, lbl_808866F0
    addi r29, r1, 0x8
    lfs f29, lbl_808866F8
    li r28, 0x0
    lfs f30, lbl_808866F4
    li r25, 0x0
    lfs f31, lbl_808866D4
    li r31, 0x1
    lfs f25, lbl_808866D8
    li r24, 0x2
    b lbl_fn_8042856C_00001510
lbl_fn_8042856C_00001300:
    bl fn_80680CF8
    mulhw r0, r30, r3
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x1c(r1)
    lfd f0, 0x18(r1)
    fsubs f0, f0, f27
    fdivs f0, f0, f28
    fmadds f26, f29, f0, f30
    bl fn_80680CF8
    mulhw r0, r30, r3
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x24(r1)
    lfd f0, 0x20(r1)
    fsubs f0, f0, f27
    fdivs f0, f0, f28
    fmadds f24, f29, f0, f30
    bl fn_80680CF8
    mulhw r0, r30, r3
    stfs f24, 0xc(r1)
    stfs f26, 0x10(r1)
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    addi r3, r1, 0x8
    xoris r0, r0, 0x8000
    stw r0, 0x1c(r1)
    mr r4, r3
    lfd f0, 0x18(r1)
    fsubs f0, f0, f27
    fdivs f0, f0, f28
    fmadds f0, f29, f0, f30
    stfs f0, 0x8(r1)
    bl fn_805F98D0
    lfs f26, 0x604(r26)
    bl fn_80680CF8
    mulhw r0, r30, r3
    fsubs f5, f26, f31
    lfs f4, 0x8(r1)
    li r4, 0x0
    lfs f3, 0xc(r1)
    li r5, 0x0
    srawi r0, r0, 8
    lfs f0, 0x10(r1)
    srwi r7, r0, 31
    li r6, 0x1
    add r0, r0, r7
    li r8, 0x1
    mulli r0, r0, 0x3e9
    li r7, 0x1
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x24(r1)
    lfd f6, 0x20(r1)
    fsubs f6, f6, f27
    fdivs f6, f6, f28
    fmadds f6, f5, f6, f31
    fmuls f5, f4, f6
    fmuls f4, f3, f6
    fmuls f3, f0, f6
    stfs f5, 0x8(r1)
    stfs f4, 0xc(r1)
    stfs f3, 0x10(r1)
    lfs f0, 0x6c(r26)
    fadds f0, f5, f0
    stfs f0, 0x8(r1)
    lfs f0, 0x70(r26)
    fadds f0, f4, f0
    stfs f0, 0xc(r1)
    lfs f0, 0x74(r26)
    fadds f0, f3, f0
    stfs f0, 0x10(r1)
    lwz r0, 0x5f8(r26)
    add r3, r0, r25
    stw r31, 0x448(r3)
    lfs f2, 0x10(r1)
    psq_l f1, 0x0(r29), 0, 0
    psq_st f1, 0x424(r3), 0, 0
    stfs f2, 0x42c(r3)
    lfs f2, 0x610(r26)
    psq_l f1, 0x608(r26), 0, 0
    psq_st f1, 0x43c(r3), 0, 0
    fmr f1, f25
    stfs f2, 0x444(r3)
    lfs f2, lbl_808866EC
    lwz r0, 0xc(r3)
    clrrwi r0, r0, 1
    ori r0, r0, 0x8
    stw r0, 0xc(r3)
    lwz r0, 0x0(r3)
    stw r0, 0x10(r3)
    lwz r0, 0x5f8(r26)
    add r23, r0, r25
    stw r24, 0x448(r23)
    addi r3, r23, 0x54
    stw r31, 0x3a0(r23)
    stfs f25, 0x2a0(r23)
    bl fn_80097C08
    stfs f25, 0x28c(r23)
    addi r3, r23, 0x54
    li r4, 0x0
    bl fn_80097D7C
    fmr f26, f1
    bl fn_80680CF8
    mulhw r0, r30, r3
    fsubs f0, f26, f25
    addi r28, r28, 0x1
    addi r25, r25, 0x450
    fsubs f0, f0, f31
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x1c(r1)
    lfd f3, 0x18(r1)
    fsubs f3, f3, f27
    fdivs f3, f3, f28
    fmadds f0, f0, f3, f31
    stfs f0, 0x288(r23)
lbl_fn_8042856C_00001510:
    lwz r0, 0x5fc(r26)
    cmplw r28, r0
    blt lbl_fn_8042856C_00001300
    li r0, 0x3
    stw r0, 0x0(r27)
lbl_fn_8042856C_00001524:
    lwz r3, 0x0(r27)
    stw r3, 0x61c(r26)
lbl_fn_8042856C_0000152C:
    addi r11, r1, 0x50
    psq_l f31, 0xc8(r1), 0, 0
    lfd f31, 0xc0(r1)
    psq_l f30, 0xb8(r1), 0, 0
    lfd f30, 0xb0(r1)
    psq_l f29, 0xa8(r1), 0, 0
    lfd f29, 0xa0(r1)
    psq_l f28, 0x98(r1), 0, 0
    lfd f28, 0x90(r1)
    psq_l f27, 0x88(r1), 0, 0
    lfd f27, 0x80(r1)
    psq_l f26, 0x78(r1), 0, 0
    lfd f26, 0x70(r1)
    psq_l f25, 0x68(r1), 0, 0
    lfd f25, 0x60(r1)
    psq_l f24, 0x58(r1), 0, 0
    lfd f24, 0x50(r1)
    bl _restgpr_23
    lwz r0, 0xd4(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

asm void fn_80428928(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    addi r11, r1, 0x90
    stfd f31, 0x90(r1)
    psq_st f31, 0x98(r1), 0, 0
    bl _savegpr_27
    cmpwi r4, 0x0
    mr r27, r3
    mr r28, r4
    bne lbl_fn_80428928_000015B8
    li r3, 0x0
    b lbl_fn_80428928_00001748
lbl_fn_80428928_000015B8:
    lfs f31, lbl_808866FC
    li r29, -0x1
    li r30, 0x0
    li r31, 0x0
    b lbl_fn_80428928_0000162C
lbl_fn_80428928_000015CC:
    lwz r0, 0x5f8(r27)
    addi r3, r1, 0x28
    lfs f4, 0x18(r28)
    add r4, r0, r31
    lfs f3, 0x14(r28)
    lfs f0, 0x42c(r4)
    lfs f2, 0x428(r4)
    fsubs f4, f4, f0
    lfs f1, 0x10(r28)
    lfs f0, 0x424(r4)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0x2c(r1)
    stfs f0, 0x28(r1)
    stfs f4, 0x30(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f31
    bge lbl_fn_80428928_00001624
    addi r3, r1, 0x28
    bl fn_805F9920
    mr r29, r30
    fmr f31, f1
lbl_fn_80428928_00001624:
    addi r30, r30, 0x1
    addi r31, r31, 0x450
lbl_fn_80428928_0000162C:
    lwz r0, 0x5fc(r27)
    cmpw r30, r0
    blt lbl_fn_80428928_000015CC
    cmpwi r29, 0x0
    blt lbl_fn_80428928_00001744
    cmpw r29, r0
    bge lbl_fn_80428928_00001744
    mulli r3, r29, 0x450
    lwz r4, 0x5f8(r27)
    li r0, 0x3
    lfs f0, lbl_808866D8
    li r30, 0x1
    lfs f1, lbl_808866D4
    add r29, r4, r3
    lfs f2, lbl_808866EC
    stw r0, 0x448(r29)
    addi r3, r29, 0x54
    li r4, 0x0
    li r5, 0x1
    stw r30, 0x3a0(r29)
    li r6, 0x1
    li r7, 0x1
    li r8, 0x1
    stfs f0, 0x2a0(r29)
    bl fn_80097C08
    lfs f1, lbl_808866D8
    li r0, 0x3c
    stfs f1, 0x28c(r29)
    li r4, 0x0
    li r5, 0x1
    li r6, 0x0
    stw r0, 0x44c(r29)
    li r7, 0x0
    lwz r3, lbl_8087F4F0
    bl fn_80449A18
    li r31, 0x0
    stw r31, 0x20(r1)
    lfs f1, lbl_808866D8
    addi r3, r1, 0x20
    stw r31, 0x24(r1)
    addi r4, r1, 0x24
    li r5, 0x1
    li r6, 0x0
    li r7, 0x0
    bl fn_804491F4
    lwz r0, lbl_8087F8A8
    cmpwi r0, 0x0
    beq lbl_fn_80428928_00001744
    lis r5, lbl_8078E5A0@ha
    lwz r6, 0x20(r1)
    addi r3, r1, 0x38
    li r4, 0x20
    addi r5, r5, lbl_8078E5A0@l
    crclr 6
    bl fn_806868C4
    stw r31, 0x8(r1)
    li r0, -0x1
    addi r5, r1, 0x38
    addi r6, r29, 0x424
    stw r31, 0xc(r1)
    li r4, 0x2
    li r7, 0x0
    li r8, 0x0
    stw r30, 0x10(r1)
    li r9, 0x1
    li r10, 0x0
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    lwz r3, lbl_8087F8A8
    bl fn_8054D798
lbl_fn_80428928_00001744:
    li r3, 0x0
lbl_fn_80428928_00001748:
    addi r11, r1, 0x90
    psq_l f31, 0x98(r1), 0, 0
    lfd f31, 0x90(r1)
    bl _restgpr_27
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_80428B0C(void)
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
    beq lbl_fn_80428B0C_00001804
    lis r5, lbl_80753750@ha
    li r3, 0x120
    addi r5, r5, lbl_80753750@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_80428B0C_000017FC
    lwz r5, 0x18(r30)
    mr r4, r29
    lwz r6, 0x1c(r30)
    bl fn_803EC568
    lis r4, lbl_8078E5A8@ha
    li r3, 0x0
    addi r4, r4, lbl_8078E5A8@l
    stw r4, 0x0(r31)
    li r0, 0x1
    stw r30, 0xf4(r31)
    stw r3, 0x10c(r31)
    stw r3, 0x54(r31)
    stw r0, 0x68(r31)
    stw r3, 0xf8(r31)
    stw r3, 0x100(r31)
    stw r3, 0xfc(r31)
    stw r3, 0x104(r31)
lbl_fn_80428B0C_000017FC:
    mr r3, r31
    b lbl_fn_80428B0C_00001808
lbl_fn_80428B0C_00001804:
    li r3, 0x0
lbl_fn_80428B0C_00001808:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80428BC8(void)
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
    beq lbl_fn_80428BC8_00001860
    li r4, 0x0
    bl fn_803EC69C
    cmpwi r31, 0x0
    ble lbl_fn_80428BC8_00001860
    mr r3, r30
    bl dtor_80084684
lbl_fn_80428BC8_00001860:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80428C20(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_803EC91C
    cmpwi r3, 0x0
    bne lbl_fn_80428C20_000018AC
    li r0, 0x2
    stw r0, 0x54(r31)
    li r3, 0x1
    b lbl_fn_80428C20_000018B0
lbl_fn_80428C20_000018AC:
    li r3, 0x0
lbl_fn_80428C20_000018B0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80428C68(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r6, 0x0
    li r8, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r5, 0xf4(r3)
    psq_l f1, 0x4(r5), 0, 0
    lfs f2, 0xc(r5)
    stfs f2, 0x74(r3)
    psq_st f1, 0x6c(r3), 0, 0
    lfs f0, 0x14(r5)
    stfs f0, 0x7c(r3)
    lwz r4, lbl_8087F430
    lwz r5, 0x20(r5)
    lwz r7, 0x10d8(r4)
    lwz r0, 0xc4(r7)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80428C68_00001940
lbl_fn_80428C68_00001918:
    lwz r4, 0xc8(r7)
    lwzx r0, r4, r8
    cmpw r5, r0
    bne lbl_fn_80428C68_00001934
    mulli r0, r6, 0x30
    add r5, r4, r0
    b lbl_fn_80428C68_00001944
lbl_fn_80428C68_00001934:
    addi r8, r8, 0x30
    addi r6, r6, 0x1
    bdnz lbl_fn_80428C68_00001918
lbl_fn_80428C68_00001940:
    li r5, 0x0
lbl_fn_80428C68_00001944:
    stw r5, 0x114(r3)
    li r8, 0x0
    lwz r0, 0xcc(r7)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80428C68_00001994
lbl_fn_80428C68_0000195C:
    lwz r0, 0xd0(r7)
    lwz r4, 0x10(r5)
    add r6, r0, r8
    lwzx r0, r8, r0
    subi r4, r4, 0x1
    cmpw r4, r0
    bne lbl_fn_80428C68_0000198C
    lwz r0, 0x4(r6)
    lwz r4, 0xc8(r7)
    mulli r0, r0, 0x30
    add r0, r4, r0
    b lbl_fn_80428C68_00001998
lbl_fn_80428C68_0000198C:
    addi r8, r8, 0x8
    bdnz lbl_fn_80428C68_0000195C
lbl_fn_80428C68_00001994:
    li r0, 0x0
lbl_fn_80428C68_00001998:
    cmpwi r0, 0x0
    stw r0, 0x118(r3)
    bne lbl_fn_80428C68_000019FC
    lwz r0, 0xcc(r7)
    li r8, 0x0
    lwz r5, 0x114(r3)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80428C68_000019F4
lbl_fn_80428C68_000019BC:
    lwz r0, 0xd0(r7)
    lwz r4, 0x10(r5)
    add r6, r0, r8
    lwz r0, 0x4(r6)
    subi r4, r4, 0x1
    cmpw r4, r0
    bne lbl_fn_80428C68_000019EC
    lwz r0, 0x0(r6)
    lwz r4, 0xc8(r7)
    mulli r0, r0, 0x30
    add r0, r4, r0
    b lbl_fn_80428C68_000019F8
lbl_fn_80428C68_000019EC:
    addi r8, r8, 0x8
    bdnz lbl_fn_80428C68_000019BC
lbl_fn_80428C68_000019F4:
    li r0, 0x0
lbl_fn_80428C68_000019F8:
    stw r0, 0x118(r3)
lbl_fn_80428C68_000019FC:
    lwz r4, 0x114(r31)
    mr r3, r7
    lfs f1, lbl_80886700
    li r5, 0x0
    addi r4, r4, 0x4
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_803C1560
    stw r3, 0x10c(r31)
    mr r3, r31
    li r4, 0x0
    bl fn_8042952C
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
