#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __register_global_object(void);
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_8003EFB0(void);
extern void fn_8004D388(void);
extern void fn_8004FF58(void);
extern void fn_80058078(void);
extern void fn_800580BC(void);
extern void fn_800588FC(void);
extern void fn_8005B9CC(void);
extern void fn_8005BBF8(void);
extern void fn_8005BCE8(void);
extern void fn_80063D3C(void);
extern void fn_80084320(void);
extern void fn_8008AD4C(void);
extern void fn_8008B140(void);
extern void fn_80096E94(void);
extern void fn_800971D4(void);
extern void fn_80097A88(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800CB440(void);
extern void fn_800CB5C8(void);
extern void fn_800DC288(void);
extern void fn_800F8548(void);
extern void fn_800FAB80(void);
extern void fn_802180A8(void);
extern void fn_80219E6C(void);
extern void fn_80232B7C(void);
extern void fn_802377B8(void);
extern void fn_8023780C(void);
extern void fn_8023781C(void);
extern void fn_80237874(void);
extern void fn_80239DAC(void);
extern void fn_8023A8B4(void);
extern void fn_803EC568(void);
extern void fn_803EC69C(void);
extern void fn_803EC91C(void);
extern void fn_803ED0D4(void);
extern void fn_803ED5D0(void);
extern void fn_803ED774(void);
extern void fn_803EDB18(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473E8C(void);
extern void fn_805F8E70(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_80682428(void);
extern void fn_80684600(void);
extern void fn_8068AEA4(void);
extern char* strcpy(char* dest, const char* src);

/* External data declarations */
extern u8 lbl_807528E0[];
extern u8 lbl_807528E8[];
extern u8 lbl_80752900[];
extern u8 lbl_80752954[];
extern u8 lbl_807774B8[];
extern u8 lbl_807774D8[];
extern u8 lbl_8078D3C0[];
extern u8 lbl_807C6BB8[];
extern u8 lbl_807C7030[];
extern u8 lbl_807C8878[];

/* Small data declarations */
extern u32 lbl_8087D710;
extern u32 lbl_8087EE74;
extern u32 lbl_8087EE98;
extern u32 lbl_8087EEB0;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F408;
extern u32 lbl_8087F430;
extern u32 lbl_8087F610;
extern u32 lbl_8087F8A0;
extern u32 lbl_80886258;
extern u32 lbl_8088625C;
extern u32 lbl_80886264;
extern u32 lbl_80886268;
extern u32 lbl_80886270;
extern u32 lbl_80886274;
extern u32 lbl_80886278;
extern u32 lbl_8088627C;
extern u32 lbl_80886280;
extern u32 lbl_80886284;
extern u32 lbl_80886288;
extern u32 lbl_8088628C;
extern u32 lbl_80886290;
extern u32 lbl_80886294;

/* Function declarations */
void fn_80406EC4(void);
void fn_80407010(void);
void fn_804070B4(void);
void fn_8040736C(void);
void fn_80407408(void);
void fn_80407C0C(void);
void fn_80407D24(void);
void fn_80407E8C(void);
void fn_804082C4(void);
void fn_80408308(void);
void fn_80408324(void);
void fn_804083A8(void);
void fn_80408464(void);
void fn_80408520(void);
void fn_80408578(void);

asm void fn_80406EC4(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r3
    lwz r4, 0x964(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80406EC4_0000002C
    lwz r0, 0x7c(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80406EC4_00000138
lbl_fn_80406EC4_0000002C:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80406EC4_00000068
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    bl fn_803ED774
lbl_fn_80406EC4_00000068:
    lwz r3, lbl_8087F0A8
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80406EC4_00000138
    psq_l f1, 0x6c(r31), 0, 0
    addi r4, r1, 0x2c
    lfs f2, 0x74(r31)
    addi r7, r31, 0x944
    stfs f2, 0x34(r1)
    addi r6, r1, 0x20
    lfs f0, lbl_80886258
    li r5, -0x100
    psq_st f1, 0x0(r4), 0, 0
    lwz r3, lbl_8087EEB0
    lfs f3, 0x30(r1)
    lfs f4, 0x954(r31)
    fadds f3, f3, f4
    stfs f3, 0x30(r1)
    psq_l f1, 0x0(r7), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    fmr f1, f4
    lfs f2, 0x94c(r31)
    stfs f2, 0x28(r1)
    fmr f2, f0
    stfs f0, 0x24(r1)
    bl fn_80063D3C
    lfs f6, 0x954(r31)
    addi r4, r1, 0x14
    lfs f4, 0x28(r1)
    li r5, -0x100
    lfs f3, 0x24(r1)
    fmuls f7, f4, f6
    lfs f0, 0x20(r1)
    fmuls f8, f3, f6
    lfs f5, 0x34(r1)
    fmuls f9, f0, f6
    lfs f4, 0x30(r1)
    lfs f3, 0x2c(r1)
    fadds f5, f5, f7
    lfs f0, lbl_80886268
    fadds f4, f4, f8
    fadds f3, f3, f9
    stfs f9, 0x8(r1)
    fmuls f1, f0, f6
    lwz r3, lbl_8087EEB0
    stfs f8, 0xc(r1)
    lfs f2, lbl_80886258
    stfs f7, 0x10(r1)
    stfs f3, 0x14(r1)
    stfs f4, 0x18(r1)
    stfs f5, 0x1c(r1)
    bl fn_80063D3C
lbl_fn_80406EC4_00000138:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80407010(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    addi r3, r3, 0xf4
    bl fn_8008B140
    cmpwi r3, 0x0
    bne lbl_fn_80407010_00000188
    addi r3, r30, 0x4c4
    bl fn_8008B140
    cmpwi r3, 0x0
    beq lbl_fn_80407010_0000018C
lbl_fn_80407010_00000188:
    li r31, 0x1
lbl_fn_80407010_0000018C:
    addi r3, r30, 0x894
    bl fn_800580BC
    cmpwi r3, 0x0
    beq lbl_fn_80407010_000001A0
    li r31, 0x1
lbl_fn_80407010_000001A0:
    addi r3, r30, 0x91c
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_80407010_000001D0
    addi r3, r30, 0x928
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_80407010_000001D0
    addi r3, r30, 0x934
    bl fn_80237874
    cmpwi r3, 0x0
    beq lbl_fn_80407010_000001D4
lbl_fn_80407010_000001D0:
    li r31, 0x1
lbl_fn_80407010_000001D4:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804070B4(void)
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
    lis r31, lbl_80752900@ha
    addi r31, r31, lbl_80752900@l
lbl_fn_804070B4_000002A0:
    addi r3, r1, 0x108
    bl fn_8005B9CC
    lbz r0, 0x0(r3)
    mr r30, r3
    cmpwi r0, 0x3b
    beq lbl_fn_804070B4_0000047C
    addi r4, r31, 0x1
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_804070B4_000002E4
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r29, 0xf4
    li r5, 0x0
    bl fn_8008AD4C
    b lbl_fn_804070B4_0000047C
lbl_fn_804070B4_000002E4:
    mr r3, r30
    addi r4, r31, 0x7
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_804070B4_00000314
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r29, 0x4c4
    li r5, 0x0
    bl fn_8008AD4C
    b lbl_fn_804070B4_0000047C
lbl_fn_804070B4_00000314:
    mr r3, r30
    addi r4, r31, 0x13
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_804070B4_00000378
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r1, 0x8
    bl strcpy
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_802180A8
    cmpwi r3, 0x2
    beq lbl_fn_804070B4_00000364
    mr r4, r3
    addi r3, r29, 0xf4
    addi r5, r1, 0x8
    bl fn_80097A88
    b lbl_fn_804070B4_0000047C
lbl_fn_804070B4_00000364:
    mr r4, r3
    addi r3, r29, 0x4c4
    addi r5, r1, 0x8
    bl fn_80097A88
    b lbl_fn_804070B4_0000047C
lbl_fn_804070B4_00000378:
    mr r3, r30
    addi r4, r31, 0x1a
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_804070B4_000003A4
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r29, 0x894
    bl fn_80058078
    b lbl_fn_804070B4_0000047C
lbl_fn_804070B4_000003A4:
    mr r3, r30
    addi r4, r31, 0x27
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_804070B4_000003D0
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r29, 0x91c
    bl fn_8023780C
    b lbl_fn_804070B4_0000047C
lbl_fn_804070B4_000003D0:
    mr r3, r30
    addi r4, r31, 0x2b
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_804070B4_000003FC
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r29, 0x928
    bl fn_8023780C
    b lbl_fn_804070B4_0000047C
lbl_fn_804070B4_000003FC:
    mr r3, r30
    addi r4, r31, 0x34
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_804070B4_00000428
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r29, 0x934
    bl fn_8023780C
    b lbl_fn_804070B4_0000047C
lbl_fn_804070B4_00000428:
    mr r3, r30
    addi r4, r31, 0x3e
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_804070B4_0000047C
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x950(r29)
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x954(r29)
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_80684600
    stw r3, 0x958(r29)
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_80684600
    stw r3, 0x95c(r29)
lbl_fn_804070B4_0000047C:
    addi r3, r1, 0x108
    bl fn_8005BBF8
    cmpwi r3, 0x0
    bne lbl_fn_804070B4_000002A0
    lwz r0, 0x754(r1)
    lwz r31, 0x74c(r1)
    lwz r30, 0x748(r1)
    lwz r29, 0x744(r1)
    mtlr r0
    addi r1, r1, 0x750
    blr
}

asm void fn_8040736C(void)
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
    lfs f0, lbl_80886258
    li r0, 0x0
    li r3, 0x1
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    lwz r3, 0x964(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8040736C_00000518
    lwz r0, 0x20(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8040736C_00000518
    li r0, 0x6
    stw r0, 0x8(r1)
lbl_fn_8040736C_00000518:
    lwz r12, 0x0(r31)
    mr r3, r31
    addi r4, r1, 0x8
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80407408(void)
{
    nofralloc
    stwu r1, -0x1e0(r1)
    mflr r0
    stw r0, 0x1e4(r1)
    addi r11, r1, 0x180
    stfd f31, 0x1d0(r1)
    psq_st f31, 0x1d8(r1), 0, 0
    stfd f30, 0x1c0(r1)
    psq_st f30, 0x1c8(r1), 0, 0
    stfd f29, 0x1b0(r1)
    psq_st f29, 0x1b8(r1), 0, 0
    stfd f28, 0x1a0(r1)
    psq_st f28, 0x1a8(r1), 0, 0
    stfd f27, 0x190(r1)
    psq_st f27, 0x198(r1), 0, 0
    stfd f26, 0x180(r1)
    psq_st f26, 0x188(r1), 0, 0
    bl _savegpr_27
    cmpwi r4, 0x0
    mr r30, r3
    mr r31, r4
    bne lbl_fn_80407408_000005A0
    li r3, 0x0
    b lbl_fn_80407408_00000D00
lbl_fn_80407408_000005A0:
    lwz r5, 0x0(r4)
    subi r0, r5, 0x3
    cmplwi r0, 0x1
    ble lbl_fn_80407408_000007A0
    cmpwi r5, 0x1
    beq lbl_fn_80407408_000005CC
    cmpwi r5, 0x6
    beq lbl_fn_80407408_000005CC
    cmpwi r5, 0x5
    beq lbl_fn_80407408_00000AC8
    b lbl_fn_80407408_00000C4C
lbl_fn_80407408_000005CC:
    lwz r4, 0x964(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80407408_000005E0
    addi r4, r4, 0x4
    b lbl_fn_80407408_000005E8
lbl_fn_80407408_000005E0:
    lis r4, lbl_807C7030@ha
    addi r4, r4, lbl_807C7030@l
lbl_fn_80407408_000005E8:
    lwz r5, 0x964(r3)
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    cmpwi r5, 0x0
    stfs f2, 0x74(r3)
    psq_st f1, 0x6c(r3), 0, 0
    beq lbl_fn_80407408_0000060C
    lfs f7, 0x14(r5)
    b lbl_fn_80407408_00000610
lbl_fn_80407408_0000060C:
    lfs f7, lbl_80886258
lbl_fn_80407408_00000610:
    lfs f0, lbl_80886258
    addi r9, r1, 0xe4
    stfs f0, 0xe4(r1)
    li r4, 0x0
    fmr f2, f0
    li r5, 0x0
    stfs f7, 0xe8(r1)
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    psq_l f1, 0x0(r9), 0, 0
    psq_st f1, 0x78(r3), 0, 0
    lfs f1, lbl_8088625C
    stfs f2, 0x80(r3)
    addi r3, r3, 0xf4
    lfs f2, lbl_80886264
    stfs f0, 0xec(r1)
    bl fn_80097C08
    lfs f1, lbl_8088625C
    addi r3, r30, 0x4c4
    lfs f2, lbl_80886264
    li r4, 0x0
    li r5, 0x2
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    mr r3, r30
    addi r4, r30, 0xf4
    li r5, 0x1
    bl fn_803ED0D4
    mr r3, r30
    addi r4, r30, 0x4c4
    li r5, 0x1
    bl fn_803ED0D4
    mr r3, r30
    addi r4, r30, 0xf4
    bl fn_803ED5D0
    mr r3, r30
    addi r4, r30, 0x4c4
    bl fn_803ED5D0
    lfs f0, lbl_80886258
    addi r3, r30, 0x894
    psq_l f1, 0xfc(r30), 0, 0
    psq_l f2, 0x104(r30), 0, 0
    psq_l f3, 0x10c(r30), 0, 0
    psq_l f4, 0x114(r30), 0, 0
    psq_l f5, 0x11c(r30), 0, 0
    psq_l f6, 0x124(r30), 0, 0
    stfs f0, 0x328(r30)
    stfs f0, 0x6f8(r30)
    psq_st f1, 0x48(r3), 0, 0
    psq_st f2, 0x50(r3), 0, 0
    psq_st f3, 0x58(r3), 0, 0
    psq_st f4, 0x60(r3), 0, 0
    psq_st f5, 0x68(r3), 0, 0
    psq_st f6, 0x70(r3), 0, 0
    bl fn_800588FC
    lwz r0, 0x89c(r30)
    li r29, 0x1
    mr r4, r30
    li r5, 0x1
    ori r0, r0, 0x1
    stw r0, 0x89c(r30)
    li r6, 0x0
    lwz r3, lbl_8087F3C0
    stw r29, 0xb8(r3)
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    mr r3, r30
    li r4, 0x1
    bl fn_80232B7C
    lfs f0, lbl_80886258
    li r0, -0x1
    lfs f1, lbl_8088625C
    addi r4, r30, 0x91c
    stfs f0, 0xbc(r1)
    addi r5, r30, 0xf4
    addi r7, r1, 0xb0
    addi r8, r1, 0xbc
    stfs f0, 0xc0(r1)
    addi r9, r1, 0xc8
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0xc4(r1)
    stfs f0, 0xb0(r1)
    stfs f0, 0xb4(r1)
    stfs f0, 0xb8(r1)
    stfs f1, 0xc8(r1)
    stfs f1, 0xcc(r1)
    stfs f1, 0xd0(r1)
    stfs f1, 0xd4(r1)
    stw r0, 0x8(r1)
    stw r29, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r3, lbl_8087F3C0
    li r0, 0x0
    stw r0, 0xb8(r3)
    b lbl_fn_80407408_00000C4C
lbl_fn_80407408_000007A0:
    psq_l f1, 0x14(r4), 0, 0
    addi r3, r3, 0x944
    lfs f2, 0x1c(r4)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
    bl fn_805F9920
    fabs f7, f1
    lfs f0, lbl_80886270
    frsp f7, f7
    fcmpo cr0, f7, f0
    blt lbl_fn_80407408_000007DC
    addi r3, r30, 0x944
    mr r4, r3
    bl fn_805F98D0
    b lbl_fn_80407408_000007F0
lbl_fn_80407408_000007DC:
    lfs f7, lbl_80886258
    lfs f0, lbl_8088625C
    stfs f7, 0x944(r30)
    stfs f7, 0x948(r30)
    stfs f0, 0x94c(r30)
lbl_fn_80407408_000007F0:
    lfs f2, 0x94c(r30)
    addi r3, r30, 0x944
    lfs f0, lbl_80886270
    addi r29, r1, 0xd8
    fabs f7, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    frsp f7, f7
    stfs f2, 0xe0(r1)
    fcmpo cr0, f7, f0
    bge lbl_fn_80407408_00000840
    lfs f7, 0xd8(r1)
    lfs f0, lbl_80886258
    fcmpo cr0, f7, f0
    ble lbl_fn_80407408_00000834
    lfs f0, lbl_80886274
    b lbl_fn_80407408_00000838
lbl_fn_80407408_00000834:
    lfs f0, lbl_80886278
lbl_fn_80407408_00000838:
    stfs f0, 0xa8(r1)
    b lbl_fn_80407408_00000854
lbl_fn_80407408_00000840:
    frsp f2, f2
    lfs f1, 0xd8(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0xa8(r1)
lbl_fn_80407408_00000854:
    lfs f0, 0xa8(r1)
    addi r3, r1, 0xf0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f7, lbl_80886258
    addi r4, r1, 0x98
    lfs f26, 0xf8(r1)
    mr r5, r4
    lfs f27, 0xf4(r1)
    addi r3, r1, 0x120
    lfs f28, 0xf0(r1)
    lfs f29, 0x108(r1)
    lfs f30, 0x104(r1)
    lfs f31, 0x100(r1)
    lfs f13, 0x118(r1)
    lfs f12, 0x114(r1)
    lfs f11, 0x110(r1)
    lfs f10, 0x11c(r1)
    lfs f9, 0x10c(r1)
    lfs f8, 0xfc(r1)
    lfs f0, lbl_8088625C
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0xe0(r1)
    stfs f7, 0x150(r1)
    stfs f7, 0x154(r1)
    stfs f7, 0x158(r1)
    stfs f0, 0x15c(r1)
    stfs f28, 0x68(r1)
    stfs f27, 0x6c(r1)
    stfs f26, 0x70(r1)
    stfs f28, 0x120(r1)
    stfs f27, 0x124(r1)
    stfs f26, 0x128(r1)
    stfs f31, 0x74(r1)
    stfs f30, 0x78(r1)
    stfs f29, 0x7c(r1)
    stfs f31, 0x130(r1)
    stfs f30, 0x134(r1)
    stfs f29, 0x138(r1)
    stfs f11, 0x80(r1)
    stfs f12, 0x84(r1)
    stfs f13, 0x88(r1)
    stfs f11, 0x140(r1)
    stfs f12, 0x144(r1)
    stfs f13, 0x148(r1)
    stfs f8, 0x8c(r1)
    stfs f9, 0x90(r1)
    stfs f10, 0x94(r1)
    stfs f8, 0x12c(r1)
    stfs f9, 0x13c(r1)
    stfs f10, 0x14c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xa0(r1)
    bl fn_805F9750
    lfs f2, 0xa0(r1)
    lfs f0, lbl_80886270
    fabs f7, f2
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_80407408_00000970
    lfs f7, 0x9c(r1)
    lfs f0, lbl_80886258
    fcmpo cr0, f7, f0
    ble lbl_fn_80407408_00000960
    lfs f0, lbl_80886274
    b lbl_fn_80407408_00000964
lbl_fn_80407408_00000960:
    lfs f0, lbl_80886278
lbl_fn_80407408_00000964:
    fneg f0, f0
    stfs f0, 0xa4(r1)
    b lbl_fn_80407408_00000984
lbl_fn_80407408_00000970:
    lfs f1, 0x9c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0xa4(r1)
lbl_fn_80407408_00000984:
    addi r3, r1, 0xa4
    lfs f2, lbl_80886258
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    lfs f0, 0xdc(r1)
    stfs f0, 0x7c(r30)
    lwz r0, 0x0(r31)
    stfs f2, 0xac(r1)
    cmpwi r0, 0x3
    stfs f2, 0xe0(r1)
    bne lbl_fn_80407408_000009D8
    fmr f1, f2
    lfs f2, lbl_80886264
    addi r3, r30, 0xf4
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_80407408_000009FC
lbl_fn_80407408_000009D8:
    fmr f1, f2
    lfs f2, lbl_80886264
    addi r3, r30, 0xf4
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
lbl_fn_80407408_000009FC:
    lwz r0, 0x89c(r30)
    mr r4, r30
    li r5, 0x1
    li r6, 0x1
    clrrwi r0, r0, 1
    stw r0, 0x89c(r30)
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    mr r3, r30
    li r4, 0x1
    bl fn_80232B7C
    lfs f0, lbl_80886258
    li r3, -0x1
    lfs f1, lbl_8088625C
    li r0, 0x1
    stfs f0, 0x4c(r1)
    addi r4, r30, 0x928
    addi r5, r30, 0xf4
    addi r7, r1, 0x40
    stfs f0, 0x50(r1)
    addi r8, r1, 0x4c
    addi r9, r1, 0x58
    li r6, 0x0
    stfs f0, 0x54(r1)
    li r10, -0x1
    stfs f0, 0x40(r1)
    stfs f0, 0x44(r1)
    stfs f0, 0x48(r1)
    stfs f1, 0x58(r1)
    stfs f1, 0x5c(r1)
    stfs f1, 0x60(r1)
    stfs f1, 0x64(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lis r3, lbl_807528E0@ha
    lfs f1, lbl_8088625C
    lwz r4, lbl_807528E0@l(r3)
    addi r3, r1, 0x14
    addi r5, r30, 0x6c
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r30, 0x940
    addi r4, r1, 0x14
    bl fn_800CB440
    addi r3, r1, 0x14
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_80407408_00000C4C
lbl_fn_80407408_00000AC8:
    lfs f1, lbl_80886258
    li r4, 0x0
    lfs f2, lbl_80886264
    li r5, 0x2
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    addi r3, r3, 0x4c4
    bl fn_80097C08
    lfs f0, lbl_8088625C
    mr r4, r30
    stfs f0, 0x6fc(r30)
    li r5, 0x1
    li r6, 0x1
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    mr r3, r30
    li r4, 0x1
    bl fn_80232B7C
    lfs f0, lbl_80886258
    li r3, -0x1
    lfs f1, lbl_8088625C
    li r0, 0x1
    stfs f0, 0x24(r1)
    addi r4, r30, 0x934
    addi r5, r30, 0x4c4
    addi r7, r1, 0x18
    stfs f0, 0x28(r1)
    addi r8, r1, 0x24
    addi r9, r1, 0x30
    li r6, 0x0
    stfs f0, 0x2c(r1)
    li r10, -0x1
    stfs f0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f1, 0x30(r1)
    stfs f1, 0x34(r1)
    stfs f1, 0x38(r1)
    stfs f1, 0x3c(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    addi r3, r30, 0x940
    li r4, 0x0
    li r5, 0x0
    bl fn_800CB5C8
    lis r4, lbl_807528E0@ha
    lfs f1, lbl_8088625C
    addi r4, r4, lbl_807528E0@l
    addi r3, r1, 0x10
    lwz r4, 0x4(r4)
    addi r5, r30, 0x6c
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    lwz r3, lbl_8087F8A0
    li r28, 0x0
    cmpwi r3, 0x0
    beq lbl_fn_80407408_00000BCC
    lwz r28, 0x48(r3)
lbl_fn_80407408_00000BCC:
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_80407408_00000C44
    addis r3, r3, 0x4
    li r0, 0x1
    stw r0, -0x1c64(r3)
    lwz r27, lbl_8087F048
    mr r3, r27
    bl fn_800F8548
    mr r29, r3
    lwz r3, 0x958(r30)
    bl fn_80219E6C
    li r0, -0x1
    stw r0, 0x8(r1)
    lfs f1, lbl_8088627C
    mr r5, r3
    stw r0, 0xc(r1)
    mr r3, r27
    lfs f2, lbl_8088625C
    mr r4, r28
    mr r6, r29
    addi r7, r30, 0x6c
    addi r8, r30, 0x78
    li r9, 0x0
    li r10, 0x1e
    bl fn_800FAB80
    lwz r3, lbl_8087F048
    li r0, 0x0
    addis r3, r3, 0x4
    stw r0, -0x1c64(r3)
lbl_fn_80407408_00000C44:
    lwz r0, 0x95c(r30)
    stw r0, 0x960(r30)
lbl_fn_80407408_00000C4C:
    lwz r0, 0x0(r31)
    stw r0, 0x54(r30)
    lbz r0, lbl_8087EE74
    extsb. r0, r0
    bne lbl_fn_80407408_00000C94
    lis r3, lbl_807C6BB8@ha
    li r0, 0x0
    stwu r0, lbl_807C6BB8@l(r3)
    lis r4, fn_8003EFB0@ha
    li r29, 0x1
    lis r5, lbl_807C8878@ha
    stw r0, 0x4(r3)
    addi r4, r4, fn_8003EFB0@l
    addi r5, r5, lbl_807C8878@l
    stw r0, 0x8(r3)
    stw r29, 0xc(r3)
    bl __register_global_object
    stb r29, lbl_8087EE74
lbl_fn_80407408_00000C94:
    lis r28, lbl_807C6BB8@ha
    addi r28, r28, lbl_807C6BB8@l
    lwz r0, 0xc(r28)
    cmpwi r0, 0x0
    beq lbl_fn_80407408_00000CFC
    li r27, 0x0
    li r29, 0x0
    b lbl_fn_80407408_00000CF0
lbl_fn_80407408_00000CB4:
    lwz r0, 0x0(r28)
    add r3, r0, r29
    lwzx r0, r29, r0
    cmpwi r0, -0x1
    beq lbl_fn_80407408_00000CD0
    cmpwi r0, 0xb
    bne lbl_fn_80407408_00000CE8
lbl_fn_80407408_00000CD0:
    lwz r12, 0x4(r3)
    mr r4, r30
    mr r5, r31
    li r3, 0xb
    mtctr r12
    bctrl
lbl_fn_80407408_00000CE8:
    addi r27, r27, 0x1
    addi r29, r29, 0x8
lbl_fn_80407408_00000CF0:
    lwz r0, 0x4(r28)
    cmpw r27, r0
    blt lbl_fn_80407408_00000CB4
lbl_fn_80407408_00000CFC:
    lwz r3, 0x54(r30)
lbl_fn_80407408_00000D00:
    addi r11, r1, 0x180
    psq_l f31, 0x1d8(r1), 0, 0
    lfd f31, 0x1d0(r1)
    psq_l f30, 0x1c8(r1), 0, 0
    lfd f30, 0x1c0(r1)
    psq_l f29, 0x1b8(r1), 0, 0
    lfd f29, 0x1b0(r1)
    psq_l f28, 0x1a8(r1), 0, 0
    lfd f28, 0x1a0(r1)
    psq_l f27, 0x198(r1), 0, 0
    lfd f27, 0x190(r1)
    psq_l f26, 0x188(r1), 0, 0
    lfd f26, 0x180(r1)
    bl _restgpr_27
    lwz r0, 0x1e4(r1)
    mtlr r0
    addi r1, r1, 0x1e0
    blr
}

asm void fn_80407C0C(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r3
    bne lbl_fn_80407C0C_00000D70
    li r3, 0x0
    b lbl_fn_80407C0C_00000E48
lbl_fn_80407C0C_00000D70:
    lwz r5, 0x964(r3)
    cmpwi r5, 0x0
    beq lbl_fn_80407C0C_00000D90
    lwz r0, 0x7c(r5)
    cmpwi r0, 0x0
    bne lbl_fn_80407C0C_00000D90
    li r3, 0x0
    b lbl_fn_80407C0C_00000E48
lbl_fn_80407C0C_00000D90:
    lwz r0, 0x54(r3)
    cmpwi r0, 0x6
    bne lbl_fn_80407C0C_00000DA4
    li r3, 0x0
    b lbl_fn_80407C0C_00000E48
lbl_fn_80407C0C_00000DA4:
    lfs f2, 0x24(r4)
    addi r31, r1, 0x8
    psq_l f1, 0x1c(r4), 0, 0
    mr r3, r31
    psq_st f1, 0x0(r31), 0, 0
    lfs f0, lbl_80886258
    stfs f2, 0x10(r1)
    stfs f0, 0xc(r1)
    bl fn_805F9920
    fabs f3, f1
    lfs f0, lbl_80886270
    frsp f3, f3
    fcmpo cr0, f3, f0
    blt lbl_fn_80407C0C_00000E44
    lwz r0, 0x54(r30)
    cmpwi r0, 0x5
    bge lbl_fn_80407C0C_00000E44
    lfs f0, lbl_80886258
    li r0, 0x0
    stfs f0, 0x2c(r1)
    li r5, 0x3
    lfs f2, 0x10(r1)
    addi r6, r1, 0x2c
    stfs f0, 0x30(r1)
    mr r3, r30
    psq_l f1, 0x0(r31), 0, 0
    addi r4, r1, 0x18
    stw r5, 0x18(r1)
    stw r0, 0x1c(r1)
    stw r0, 0x20(r1)
    stw r0, 0x24(r1)
    stw r0, 0x28(r1)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x34(r1)
    lwz r12, 0x0(r30)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    li r3, 0x1
    b lbl_fn_80407C0C_00000E48
lbl_fn_80407C0C_00000E44:
    li r3, 0x0
lbl_fn_80407C0C_00000E48:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80407D24(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    stw r31, 0x8c(r1)
    mr r31, r3
    lwz r0, 0x54(r3)
    cmpwi r0, 0x3
    beq lbl_fn_80407D24_00000E88
    cmpwi r0, 0x4
    bne lbl_fn_80407D24_00000FB4
lbl_fn_80407D24_00000E88:
    lfs f5, 0x950(r3)
    li r0, 0x0
    lfs f4, 0x94c(r3)
    addi r5, r1, 0x18
    lfs f3, 0x948(r3)
    addi r4, r1, 0x28
    fmuls f6, f4, f5
    lfs f0, 0x944(r3)
    fmuls f7, f3, f5
    lfs f3, 0x70(r3)
    fmuls f5, f0, f5
    lfs f0, 0x74(r3)
    fadds f3, f3, f7
    lfs f4, 0x6c(r3)
    fadds f2, f0, f6
    stfs f5, 0x8(r1)
    fadds f0, f4, f5
    addi r6, r31, 0x944
    stfs f3, 0x70(r3)
    li r7, 0x0
    li r8, 0x0
    li r9, 0x0
    stfs f0, 0x6c(r3)
    stfs f2, 0x74(r3)
    stw r0, 0x5c(r1)
    stw r0, 0x60(r1)
    stw r0, 0x64(r1)
    stw r0, 0x68(r1)
    psq_l f1, 0x6c(r3), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x20(r1)
    lfs f0, 0x1c(r1)
    lfs f1, 0x954(r3)
    stfs f7, 0xc(r1)
    fadds f0, f0, f1
    lwz r3, lbl_8087EE98
    stfs f6, 0x10(r1)
    stfs f0, 0x1c(r1)
    stfs f1, 0x24(r1)
    bl fn_8004D388
    cmpwi r3, 0x0
    beq lbl_fn_80407D24_00000F3C
    lfs f0, lbl_80886258
    stfs f0, 0x948(r31)
    b lbl_fn_80407D24_00000F7C
lbl_fn_80407D24_00000F3C:
    lwz r4, lbl_8087F0A8
    lis r0, 0x4330
    stw r0, 0x78(r1)
    lis r3, lbl_807528E8@ha
    lwz r0, 0x30(r4)
    lfd f5, lbl_807528E8@l(r3)
    mullw r0, r0, r0
    lfs f3, lbl_80886280
    lfs f0, 0x948(r31)
    xoris r0, r0, 0x8000
    stw r0, 0x7c(r1)
    lfd f4, 0x78(r1)
    fsubs f4, f4, f5
    fdivs f3, f3, f4
    fadds f0, f0, f3
    stfs f0, 0x948(r31)
lbl_fn_80407D24_00000F7C:
    addi r3, r1, 0x38
    lfs f2, 0x40(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x6c(r31), 0, 0
    lwz r0, 0x964(r31)
    lfs f3, 0x70(r31)
    lfs f0, 0x954(r31)
    cmpwi r0, 0x0
    stfs f2, 0x74(r31)
    fsubs f0, f3, f0
    stfs f0, 0x70(r31)
    bne lbl_fn_80407D24_00000FB4
    lfs f0, lbl_80886258
    stfs f0, 0x70(r31)
lbl_fn_80407D24_00000FB4:
    lwz r0, 0x94(r1)
    lwz r31, 0x8c(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_80407E8C(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    stfd f31, 0x90(r1)
    psq_st f31, 0x98(r1), 0, 0
    stw r31, 0x8c(r1)
    stw r30, 0x88(r1)
    stw r29, 0x84(r1)
    lwz r6, lbl_8087F430
    cmpwi r6, 0x0
    bne lbl_fn_80407E8C_00000FFC
    li r3, 0x0
    b lbl_fn_80407E8C_000013DC
lbl_fn_80407E8C_00000FFC:
    lwz r0, 0x95c(r3)
    cmpwi r0, 0x0
    bgt lbl_fn_80407E8C_00001010
    li r3, 0x0
    b lbl_fn_80407E8C_000013DC
lbl_fn_80407E8C_00001010:
    lwz r4, 0x960(r3)
    cmpwi r4, 0x0
    ble lbl_fn_80407E8C_0000102C
    subi r0, r4, 0x1
    stw r0, 0x960(r3)
    li r3, 0x0
    b lbl_fn_80407E8C_000013DC
lbl_fn_80407E8C_0000102C:
    lfs f2, 0x74(r3)
    addi r5, r1, 0x5c
    psq_l f1, 0x6c(r3), 0, 0
    addi r30, r1, 0x68
    lwz r7, 0x964(r3)
    addi r31, r1, 0x50
    psq_st f1, 0x0(r5), 0, 0
    addi r29, r6, 0x16c
    psq_l f1, 0x4(r7), 0, 0
    mr r3, r29
    stfs f2, 0x64(r1)
    mr r4, r30
    lfs f2, 0xc(r7)
    psq_st f1, 0x0(r31), 0, 0
    lfs f31, lbl_80886284
    stfs f2, 0x58(r1)
    psq_l f1, 0x0(r5), 0, 0
    lfs f2, 0x64(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x70(r1)
    stfs f31, 0x74(r1)
    bl fn_8004FF58
    cmpwi r3, 0x0
    beq lbl_fn_80407E8C_00001094
    li r3, 0x0
    b lbl_fn_80407E8C_000013DC
lbl_fn_80407E8C_00001094:
    psq_l f1, 0x0(r31), 0, 0
    mr r3, r29
    lfs f2, 0x58(r1)
    mr r4, r30
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x70(r1)
    stfs f31, 0x74(r1)
    bl fn_8004FF58
    cmpwi r3, 0x0
    beq lbl_fn_80407E8C_000010C4
    li r3, 0x0
    b lbl_fn_80407E8C_000013DC
lbl_fn_80407E8C_000010C4:
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_80407E8C_0000118C
    lwz r29, 0x48(r3)
    b lbl_fn_80407E8C_00001184
lbl_fn_80407E8C_000010D8:
    lwz r0, 0x38(r29)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80407E8C_00001180
    lfs f3, 0x64(r1)
    addi r3, r1, 0x44
    lfs f0, 0x530(r29)
    lfs f5, 0x60(r1)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r29)
    lfs f0, 0x528(r29)
    lfs f3, 0x5c(r1)
    fsubs f4, f5, f4
    stfs f6, 0x4c(r1)
    fsubs f0, f3, f0
    stfs f4, 0x48(r1)
    stfs f0, 0x44(r1)
    bl fn_805F9920
    fmuls f0, f31, f31
    fcmpo cr0, f1, f0
    bge lbl_fn_80407E8C_00001134
    li r3, 0x0
    b lbl_fn_80407E8C_000013DC
lbl_fn_80407E8C_00001134:
    lfs f3, 0x58(r1)
    addi r3, r1, 0x38
    lfs f0, 0x530(r29)
    lfs f5, 0x54(r1)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r29)
    lfs f0, 0x528(r29)
    lfs f3, 0x50(r1)
    fsubs f4, f5, f4
    stfs f6, 0x40(r1)
    fsubs f0, f3, f0
    stfs f4, 0x3c(r1)
    stfs f0, 0x38(r1)
    bl fn_805F9920
    fmuls f0, f31, f31
    fcmpo cr0, f1, f0
    bge lbl_fn_80407E8C_00001180
    li r3, 0x0
    b lbl_fn_80407E8C_000013DC
lbl_fn_80407E8C_00001180:
    lwz r29, 0x14ac(r29)
lbl_fn_80407E8C_00001184:
    cmpwi r29, 0x0
    bne lbl_fn_80407E8C_000010D8
lbl_fn_80407E8C_0000118C:
    lwz r3, lbl_8087F408
    cmpwi r3, 0x0
    beq lbl_fn_80407E8C_000012C8
    lwz r29, 0x48(r3)
    b lbl_fn_80407E8C_000012C0
lbl_fn_80407E8C_000011A0:
    lwz r6, 0x38(r29)
    li r4, 0x0
    li r3, 0x0
    li r5, 0x0
    rlwinm r0, r6, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80407E8C_000011CC
    clrlwi r0, r6, 31
    cmplwi r0, 0x1
    beq lbl_fn_80407E8C_000011CC
    li r5, 0x1
lbl_fn_80407E8C_000011CC:
    cmpwi r5, 0x0
    beq lbl_fn_80407E8C_000011E8
    lwz r0, 0x7e0(r29)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_80407E8C_000011E8
    li r3, 0x1
lbl_fn_80407E8C_000011E8:
    cmpwi r3, 0x0
    beq lbl_fn_80407E8C_0000121C
    lwz r0, 0x55c(r29)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_80407E8C_00001210
    lwz r0, 0x560(r29)
    cmpwi r0, 0x1c
    bne lbl_fn_80407E8C_00001210
    li r3, 0x1
lbl_fn_80407E8C_00001210:
    cmpwi r3, 0x0
    bne lbl_fn_80407E8C_0000121C
    li r4, 0x1
lbl_fn_80407E8C_0000121C:
    cmpwi r4, 0x0
    beq lbl_fn_80407E8C_000012BC
    lfs f3, 0x64(r1)
    addi r3, r1, 0x2c
    lfs f0, 0x530(r29)
    lfs f5, 0x60(r1)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r29)
    lfs f0, 0x528(r29)
    lfs f3, 0x5c(r1)
    fsubs f4, f5, f4
    stfs f6, 0x34(r1)
    fsubs f0, f3, f0
    stfs f4, 0x30(r1)
    stfs f0, 0x2c(r1)
    bl fn_805F9920
    fmuls f0, f31, f31
    fcmpo cr0, f1, f0
    bge lbl_fn_80407E8C_00001270
    li r3, 0x0
    b lbl_fn_80407E8C_000013DC
lbl_fn_80407E8C_00001270:
    lfs f3, 0x58(r1)
    addi r3, r1, 0x20
    lfs f0, 0x530(r29)
    lfs f5, 0x54(r1)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r29)
    lfs f0, 0x528(r29)
    lfs f3, 0x50(r1)
    fsubs f4, f5, f4
    stfs f6, 0x28(r1)
    fsubs f0, f3, f0
    stfs f4, 0x24(r1)
    stfs f0, 0x20(r1)
    bl fn_805F9920
    fmuls f0, f31, f31
    fcmpo cr0, f1, f0
    bge lbl_fn_80407E8C_000012BC
    li r3, 0x0
    b lbl_fn_80407E8C_000013DC
lbl_fn_80407E8C_000012BC:
    lwz r29, 0x14ac(r29)
lbl_fn_80407E8C_000012C0:
    cmpwi r29, 0x0
    bne lbl_fn_80407E8C_000011A0
lbl_fn_80407E8C_000012C8:
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    beq lbl_fn_80407E8C_000013D8
    li r29, 0x0
    li r31, 0x0
    b lbl_fn_80407E8C_000013C8
lbl_fn_80407E8C_000012E0:
    cmpwi r29, 0x0
    lwz r3, lbl_8087F610
    blt lbl_fn_80407E8C_00001304
    lwz r0, 0x5e8(r3)
    cmpw r29, r0
    bge lbl_fn_80407E8C_00001304
    lwz r0, 0x5e4(r3)
    add r3, r0, r31
    b lbl_fn_80407E8C_00001308
lbl_fn_80407E8C_00001304:
    li r3, 0x0
lbl_fn_80407E8C_00001308:
    cmpwi r3, 0x0
    beq lbl_fn_80407E8C_000013C0
    lwz r30, 0x0(r3)
    cmpwi r30, 0x0
    beq lbl_fn_80407E8C_000013C0
    lwz r0, 0xd0(r3)
    srwi. r0, r0, 31
    beq lbl_fn_80407E8C_000013C0
    lfs f3, 0x64(r1)
    addi r3, r1, 0x14
    lfs f0, 0x530(r30)
    lfs f5, 0x60(r1)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r30)
    lfs f0, 0x528(r30)
    lfs f3, 0x5c(r1)
    fsubs f4, f5, f4
    stfs f6, 0x1c(r1)
    fsubs f0, f3, f0
    stfs f4, 0x18(r1)
    stfs f0, 0x14(r1)
    bl fn_805F9920
    fmuls f0, f31, f31
    fcmpo cr0, f1, f0
    bge lbl_fn_80407E8C_00001374
    li r3, 0x0
    b lbl_fn_80407E8C_000013DC
lbl_fn_80407E8C_00001374:
    lfs f3, 0x58(r1)
    addi r3, r1, 0x8
    lfs f0, 0x530(r30)
    lfs f5, 0x54(r1)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r30)
    lfs f0, 0x528(r30)
    lfs f3, 0x50(r1)
    fsubs f4, f5, f4
    stfs f6, 0x10(r1)
    fsubs f0, f3, f0
    stfs f4, 0xc(r1)
    stfs f0, 0x8(r1)
    bl fn_805F9920
    fmuls f0, f31, f31
    fcmpo cr0, f1, f0
    bge lbl_fn_80407E8C_000013C0
    li r3, 0x0
    b lbl_fn_80407E8C_000013DC
lbl_fn_80407E8C_000013C0:
    addi r29, r29, 0x1
    addi r31, r31, 0xd5c
lbl_fn_80407E8C_000013C8:
    lwz r3, lbl_8087F610
    lwz r0, 0x5e8(r3)
    cmpw r29, r0
    blt lbl_fn_80407E8C_000012E0
lbl_fn_80407E8C_000013D8:
    li r3, 0x1
lbl_fn_80407E8C_000013DC:
    lwz r0, 0xa4(r1)
    psq_l f31, 0x98(r1), 0, 0
    lfd f31, 0x90(r1)
    lwz r31, 0x8c(r1)
    lwz r30, 0x88(r1)
    lwz r29, 0x84(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_804082C4(void)
{
    nofralloc
    lwz r6, 0x964(r3)
    li r4, 0x0
    li r5, 0x1
    cmpwi r6, 0x0
    beq lbl_fn_804082C4_00001424
    lwz r0, 0x7c(r6)
    cmpwi r0, 0x0
    bne lbl_fn_804082C4_00001424
    li r5, 0x0
lbl_fn_804082C4_00001424:
    cmpwi r5, 0x0
    beq lbl_fn_804082C4_0000143C
    lwz r0, 0x54(r3)
    cmpwi r0, 0x1
    bne lbl_fn_804082C4_0000143C
    li r4, 0x1
lbl_fn_804082C4_0000143C:
    mr r3, r4
    blr
}

asm void fn_80408308(void)
{
    nofralloc
    lwz r0, 0x54(r3)
    cmpwi r0, 0x5
    beq lbl_fn_80408308_00001458
    addi r3, r3, 0xf4
    blr
lbl_fn_80408308_00001458:
    addi r3, r3, 0x4c4
    blr
}

asm void fn_80408324(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_fn_80408324_000014C4
    lis r5, lbl_80752954@ha
    li r3, 0x930
    addi r5, r5, lbl_80752954@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_80408324_000014C8
    mr r4, r29
    mr r5, r30
    mr r6, r31
    bl fn_804083A8
    b lbl_fn_80408324_000014C8
lbl_fn_80408324_000014C4:
    li r3, 0x0
lbl_fn_80408324_000014C8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804083A8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_803EC568
    lis r4, lbl_8078D3C0@ha
    addi r3, r31, 0xf4
    addi r4, r4, lbl_8078D3C0@l
    stw r4, 0x0(r31)
    li r4, 0x8
    li r5, 0x20
    bl fn_80096E94
    addi r3, r31, 0x4c4
    li r4, 0x8
    li r5, 0x20
    bl fn_80096E94
    addi r3, r31, 0x894
    bl fn_802377B8
    addi r3, r31, 0x8a0
    bl fn_802377B8
    lfs f0, lbl_80886294
    li r4, 0x0
    lfs f3, lbl_80886288
    li r5, -0x1
    lfs f2, lbl_8088628C
    li r0, 0x1e
    lfs f1, lbl_80886290
    mr r3, r31
    stw r5, 0x8ac(r31)
    stw r4, 0x8b0(r31)
    stw r4, 0x8b4(r31)
    stb r4, 0x8b8(r31)
    stb r4, 0x8d8(r31)
    stb r4, 0x8f8(r31)
    stw r0, 0x918(r31)
    stfs f3, 0x91c(r31)
    stfs f2, 0x920(r31)
    stfs f1, 0x924(r31)
    stfs f0, 0x928(r31)
    stfs f0, 0x92c(r31)
    stw r4, 0x54(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80408464(void)
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
    beq lbl_fn_80408464_0000163C
    addic. r31, r3, 0x8a0
    beq lbl_fn_80408464_000015E8
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_80408464_000015E8
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80408464_000015E8:
    addic. r31, r29, 0x894
    beq lbl_fn_80408464_00001608
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_80408464_00001608
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80408464_00001608:
    addi r3, r29, 0x4c4
    li r4, -0x1
    bl fn_800971D4
    addi r3, r29, 0xf4
    li r4, -0x1
    bl fn_800971D4
    mr r3, r29
    li r4, 0x0
    bl fn_803EC69C
    cmpwi r30, 0x0
    ble lbl_fn_80408464_0000163C
    mr r3, r29
    bl dtor_80084684
lbl_fn_80408464_0000163C:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80408520(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_803EC91C
    cmpwi r3, 0x0
    bne lbl_fn_80408520_0000169C
    mr r3, r31
    addi r4, r31, 0xf4
    bl fn_803EDB18
    mr r3, r31
    addi r4, r31, 0x4c4
    bl fn_803EDB18
    li r3, 0x1
    b lbl_fn_80408520_000016A0
lbl_fn_80408520_0000169C:
    li r3, 0x0
lbl_fn_80408520_000016A0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80408578(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    addi r4, r3, 0xf4
    li r5, 0x1
    stw r0, 0xc4(r1)
    stfd f31, 0xb0(r1)
    psq_st f31, 0xb8(r1), 0, 0
    stw r31, 0xac(r1)
    mr r31, r3
    bl fn_803ED0D4
    mr r3, r31
    addi r4, r31, 0x4c4
    li r5, 0x1
    bl fn_803ED0D4
    lwz r0, 0x54(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80408578_00001724
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x1
    li r6, 0x1
    bl fn_80239DAC
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
    b lbl_fn_80408578_000017D4
lbl_fn_80408578_00001724:
    cmpwi r0, 0x2
    bne lbl_fn_80408578_000017D4
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x1
    li r6, 0x1
    bl fn_80239DAC
    lfs f0, lbl_80886294
    li r4, 0x0
    li r0, 0x3
    stw r0, 0x88(r1)
    lis r3, 0x1062
    stw r4, 0x8c(r1)
    addi r0, r3, 0x4dd3
    stw r4, 0x90(r1)
    stw r4, 0x94(r1)
    stw r4, 0x98(r1)
    stfs f0, 0x9c(r1)
    stfs f0, 0xa0(r1)
    stfs f0, 0xa4(r1)
    lwz r4, 0x48(r31)
    mulhw r0, r0, r4
    srawi r0, r0, 6
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r0, r0, 0x3e8
    subf. r0, r0, r4
    beq lbl_fn_80408578_0000179C
    li r0, 0x4
    stw r0, 0x88(r1)
lbl_fn_80408578_0000179C:
    lwz r12, 0x0(r31)
    mr r3, r31
    addi r4, r1, 0x88
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    mr r3, r31
    addi r4, r31, 0xf4
    li r5, 0x1
    bl fn_803ED0D4
    mr r3, r31
    addi r4, r31, 0x4c4
    li r5, 0x1
    bl fn_803ED0D4
lbl_fn_80408578_000017D4:
    lwz r0, 0x54(r31)
    cmpwi r0, 0x3
    beq lbl_fn_80408578_000017FC
    cmpwi r0, 0x4
    beq lbl_fn_80408578_0000189C
    cmpwi r0, 0x5
    beq lbl_fn_80408578_000018FC
    cmpwi r0, 0x6
    beq lbl_fn_80408578_0000199C
    b lbl_fn_80408578_000019E0
lbl_fn_80408578_000017FC:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80408578_00001838
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    bl fn_803ED5D0
lbl_fn_80408578_00001838:
    lfs f31, 0x328(r31)
    addi r3, r31, 0xf4
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_80408578_000019E0
    lfs f0, lbl_80886294
    li r0, 0x0
    li r3, 0x4
    stw r3, 0x68(r1)
    mr r3, r31
    addi r4, r1, 0x68
    stw r0, 0x6c(r1)
    stw r0, 0x70(r1)
    stw r0, 0x74(r1)
    stw r0, 0x78(r1)
    stfs f0, 0x7c(r1)
    stfs f0, 0x80(r1)
    stfs f0, 0x84(r1)
    lwz r12, 0x0(r31)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    b lbl_fn_80408578_000019E0
lbl_fn_80408578_0000189C:
    lwz r3, 0x8b4(r31)
    cmpwi r3, 0x0
    ble lbl_fn_80408578_000019E0
    subic. r0, r3, 0x1
    stw r0, 0x8b4(r31)
    bgt lbl_fn_80408578_000019E0
    lfs f0, lbl_80886294
    li r0, 0x0
    li r3, 0x5
    stw r3, 0x48(r1)
    mr r3, r31
    addi r4, r1, 0x48
    stw r0, 0x4c(r1)
    stw r0, 0x50(r1)
    stw r0, 0x54(r1)
    stw r0, 0x58(r1)
    stfs f0, 0x5c(r1)
    stfs f0, 0x60(r1)
    stfs f0, 0x64(r1)
    lwz r12, 0x0(r31)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    b lbl_fn_80408578_000019E0
lbl_fn_80408578_000018FC:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80408578_00001938
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    bl fn_803ED5D0
lbl_fn_80408578_00001938:
    lfs f31, 0x328(r31)
    addi r3, r31, 0xf4
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_80408578_000019E0
    lfs f0, lbl_80886294
    li r0, 0x0
    li r3, 0x4
    stw r3, 0x28(r1)
    mr r3, r31
    addi r4, r1, 0x28
    stw r0, 0x2c(r1)
    stw r0, 0x30(r1)
    stw r0, 0x34(r1)
    stw r0, 0x38(r1)
    stfs f0, 0x3c(r1)
    stfs f0, 0x40(r1)
    stfs f0, 0x44(r1)
    lwz r12, 0x0(r31)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    b lbl_fn_80408578_000019E0
lbl_fn_80408578_0000199C:
    lfs f0, lbl_80886294
    li r0, 0x0
    li r3, 0x7
    stw r3, 0x8(r1)
    mr r3, r31
    addi r4, r1, 0x8
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
lbl_fn_80408578_000019E0:
    lwz r0, 0xc4(r1)
    psq_l f31, 0xb8(r1), 0, 0
    lfd f31, 0xb0(r1)
    lwz r31, 0xac(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}
