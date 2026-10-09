#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __register_global_object(void);
extern void _restgpr_17(void);
extern void _restgpr_19(void);
extern void _restgpr_27(void);
extern void _savegpr_17(void);
extern void _savegpr_19(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_8000D114(void);
extern void fn_8000D124(void);
extern void fn_8000D3A4(void);
extern void fn_8000D3A8(void);
extern void fn_8000D430(void);
extern void fn_8000D9E8(void);
extern void fn_8001047C(void);
extern void fn_80011034(void);
extern void fn_80011410(void);
extern void fn_80012C88(void);
extern void fn_80013338(void);
extern void fn_80013410(void);
extern void fn_8003EFB0(void);
extern void fn_8004CCA0(void);
extern void fn_8004ED34(void);
extern void fn_80057A64(void);
extern void fn_8005B9CC(void);
extern void fn_8005BBF8(void);
extern void fn_8005BCE8(void);
extern void fn_80084320(void);
extern void fn_8008AD4C(void);
extern void fn_8008B140(void);
extern void fn_8008CD60(void);
extern void fn_80092F1C(void);
extern void fn_80096E94(void);
extern void fn_800971D4(void);
extern void fn_80097A88(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_80097E80(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800CB688(void);
extern void fn_800D8814(void);
extern void fn_800D8BB4(void);
extern void fn_800DC288(void);
extern void fn_800EC204(void);
extern void fn_800EF73C(void);
extern void fn_800F52F8(void);
extern void fn_800F72CC(void);
extern void fn_800F7FA0(void);
extern void fn_800F7FA8(void);
extern void fn_800F7FF0(void);
extern void fn_800F80A8(void);
extern void fn_800F80B8(void);
extern void fn_80116E64(void);
extern void fn_80121F00(void);
extern void fn_8012A190(void);
extern void fn_80139550(void);
extern void fn_80139F3C(void);
extern void fn_8013A13C(void);
extern void fn_8013C38C(void);
extern void fn_8013C504(void);
extern void fn_801404F8(void);
extern void fn_80140500(void);
extern void fn_801A03E0(void);
extern void fn_801A03E8(void);
extern void fn_801A03F4(void);
extern void fn_80219E6C(void);
extern void fn_802377B8(void);
extern void fn_8023780C(void);
extern void fn_8023781C(void);
extern void fn_80237874(void);
extern void fn_80239DAC(void);
extern void fn_8026607C(void);
extern void fn_80276AE4(void);
extern void fn_802F0998(void);
extern void fn_80316E38(void);
extern void fn_80317034(void);
extern void fn_80372574(void);
extern void fn_803D6EDC(void);
extern void fn_803EC568(void);
extern void fn_803EC69C(void);
extern void fn_803EC91C(void);
extern void fn_803ED0D4(void);
extern void fn_80417E88(void);
extern void fn_80417F14(void);
extern void fn_80417F1C(void);
extern void fn_80417F40(void);
extern void fn_80417FF8(void);
extern void fn_804180B0(void);
extern void fn_804180BC(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473E8C(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9990(void);
extern void fn_80680CF8(void);
extern void fn_80682428(void);
extern void fn_806958E0(void);
extern void fn_806959D8(void);
extern char* strcpy(char* dest, const char* src);

/* External data declarations */
extern u8 lbl_80752E90[];
extern u8 lbl_80752EC0[];
extern u8 lbl_80752ED4[];
extern u8 lbl_80752F18[];
extern u8 lbl_80752F28[];
extern u8 lbl_80752F44[];
extern u8 lbl_807774B8[];
extern u8 lbl_807774D8[];
extern u8 lbl_8078DA78[];
extern u8 lbl_8078DB10[];
extern u8 lbl_807C6BB8[];
extern u8 lbl_807C88E0[];

/* Small data declarations */
extern u32 lbl_8087D710;
extern u32 lbl_8087EE74;
extern u32 lbl_8087EE98;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F0A8;
extern u32 lbl_80886438;
extern u32 lbl_80886448;
extern u32 lbl_8088644C;
extern u32 lbl_80886450;
extern u32 lbl_80886454;
extern u32 lbl_80886458;
extern u32 lbl_8088645C;
extern u32 lbl_80886460;
extern u32 lbl_80886464;
extern u32 lbl_80886468;
extern u32 lbl_8088646C;
extern u32 lbl_80886470;
extern u32 lbl_80886474;
extern u32 lbl_80886478;
extern u32 lbl_8088647C;
extern u32 lbl_80886480;
extern u32 lbl_80886484;
extern u32 lbl_80886488;
extern u32 lbl_80886490;
extern u32 lbl_80886494;
extern u32 lbl_80886498;
extern u32 lbl_8088649C;
extern u32 lbl_808864A0;
extern u32 lbl_808864A4;
extern u32 lbl_808864A8;
extern u32 lbl_808864AC;
extern u32 lbl_808864B0;

/* Function declarations */
void fn_80415E40(void);
void fn_80415F6C(void);
void fn_80416268(void);
void fn_80416698(void);
void fn_8041669C(void);
void fn_804166B0(void);
void fn_80416764(void);
void fn_804167CC(void);
void fn_804167FC(void);
void fn_80416960(void);
void fn_80416A34(void);
void fn_80416A7C(void);
void fn_80416AA8(void);
void fn_80416C84(void);
void fn_80416CB8(void);
void fn_80416F40(void);
void fn_80416F6C(void);
void fn_80416F74(void);
void fn_80417098(void);
void fn_804170D8(void);
void fn_80417130(void);
void fn_80417224(void);
void fn_8041726C(void);
void fn_80417530(void);
void fn_80417628(void);
void fn_8041762C(void);
void fn_8041766C(void);

asm void fn_80415E40(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    bne lbl_fn_80415E40_00000024
    li r3, 0x0
    b lbl_fn_80415E40_00000118
lbl_fn_80415E40_00000024:
    lwz r5, 0x0(r4)
    subi r0, r5, 0x1
    cmplwi r0, 0x1
    ble lbl_fn_80415E40_00000064
    cmpwi r5, 0x0
    beq lbl_fn_80415E40_00000050
    cmpwi r5, 0x4
    beq lbl_fn_80415E40_00000064
    cmpwi r5, 0x3
    beq lbl_fn_80415E40_0000006C
    b lbl_fn_80415E40_00000114
lbl_fn_80415E40_00000050:
    lwz r12, 0x0(r3)
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
    b lbl_fn_80415E40_00000114
lbl_fn_80415E40_00000064:
    stw r5, 0x54(r3)
    b lbl_fn_80415E40_00000114
lbl_fn_80415E40_0000006C:
    li r0, 0x2
    stw r0, 0x54(r3)
    lfs f0, lbl_80886448
    lwz r4, 0x10(r4)
    lfs f2, 0x57c(r4)
    psq_l f1, 0x574(r4), 0, 0
    psq_st f1, 0x17c(r3), 0, 0
    stfs f2, 0x184(r3)
    stfs f0, 0x180(r3)
    bl fn_80680CF8
    lis r4, 0x4178
    lis r0, 0x4330
    addi r5, r4, 0x749f
    stw r0, 0x8(r1)
    mulhw r5, r5, r3
    lis r4, lbl_80752E90@ha
    lfd f10, lbl_80752E90@l(r4)
    lfs f8, lbl_80886458
    lfs f7, lbl_80886454
    lfs f6, lbl_80886450
    srawi r0, r5, 8
    lfs f5, lbl_8088645C
    srwi r4, r0, 31
    lfs f4, 0x17c(r31)
    add r0, r0, r4
    lfs f3, 0x180(r31)
    mulli r0, r0, 0x3e9
    lfs f0, 0x184(r31)
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f9, 0x8(r1)
    fsubs f9, f9, f10
    fdivs f8, f9, f8
    fmadds f6, f7, f8, f6
    fsubs f5, f6, f5
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    fmuls f0, f0, f5
    stfs f4, 0x17c(r31)
    stfs f3, 0x180(r31)
    stfs f0, 0x184(r31)
lbl_fn_80415E40_00000114:
    lwz r3, 0x54(r31)
lbl_fn_80415E40_00000118:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80415F6C(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    stfd f31, 0x120(r1)
    psq_st f31, 0x128(r1), 0, 0
    stw r31, 0x11c(r1)
    mr r31, r3
    lwz r0, 0x54(r3)
    cmpwi r0, 0x2
    bne lbl_fn_80415F6C_0000040C
    lwz r4, lbl_8087F0A8
    lis r0, 0x4330
    lfs f5, lbl_80886438
    lis r6, lbl_80752E90@ha
    lwz r4, 0x30(r4)
    li r10, 0x0
    lfs f4, 0x74(r3)
    addi r7, r1, 0xa8
    mullw r4, r4, r4
    lfs f0, 0x6c(r3)
    fadds f7, f4, f5
    lfd f4, lbl_80752E90@l(r6)
    fadds f9, f0, f5
    lfs f6, 0x188(r3)
    xoris r4, r4, 0x8000
    stw r4, 0x114(r1)
    lfs f3, 0x70(r3)
    addi r9, r1, 0x5c
    stw r0, 0x110(r1)
    addi r8, r1, 0xb4
    fadds f8, f3, f6
    psq_l f1, 0x6c(r3), 0, 0
    lfd f0, 0x110(r1)
    addi r5, r1, 0x98
    lfs f3, lbl_80886460
    addi r4, r1, 0xc0
    fsubs f4, f0, f4
    lfs f2, 0x74(r3)
    stfs f2, 0xb0(r1)
    fmr f2, f7
    lfs f0, 0x180(r3)
    addi r6, r3, 0x17c
    fdivs f3, f3, f4
    stfs f9, 0x5c(r1)
    stfs f8, 0x60(r1)
    psq_st f1, 0x0(r7), 0, 0
    psq_l f1, 0x0(r9), 0, 0
    stfs f2, 0xbc(r1)
    fadds f0, f0, f3
    psq_st f1, 0x0(r8), 0, 0
    stfs f0, 0x180(r3)
    stw r10, 0xf4(r1)
    stw r10, 0xf8(r1)
    stw r10, 0xfc(r1)
    stw r10, 0x100(r1)
    lfs f2, 0x74(r3)
    psq_l f1, 0x6c(r3), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    fmr f1, f6
    lfs f0, 0x9c(r1)
    stfs f5, 0x50(r1)
    fadds f0, f0, f6
    stfs f6, 0x54(r1)
    stfs f5, 0x58(r1)
    stfs f7, 0x64(r1)
    stfs f2, 0xa0(r1)
    stfs f0, 0x9c(r1)
    stfs f6, 0xa4(r1)
    bl fn_80416268
    cmpwi r3, 0x0
    beq lbl_fn_80415F6C_000003DC
    lfs f5, lbl_80886438
    addi r3, r1, 0x80
    lfs f6, 0x188(r31)
    lfs f3, 0xd8(r1)
    lfs f0, 0xd4(r1)
    fsubs f7, f3, f5
    lfs f4, 0xd0(r1)
    fsubs f8, f0, f6
    lfs f3, 0x74(r31)
    fsubs f9, f4, f5
    lfs f0, 0x184(r31)
    fadds f10, f3, f0
    lfs f4, 0x70(r31)
    lfs f0, 0x180(r31)
    lfs f3, 0x6c(r31)
    fadds f4, f4, f0
    lfs f0, 0x17c(r31)
    fsubs f11, f7, f10
    stfs f6, 0x48(r1)
    fadds f0, f3, f0
    fsubs f3, f8, f4
    stfs f5, 0x44(r1)
    fsubs f6, f9, f0
    stfs f5, 0x4c(r1)
    stfs f9, 0x8c(r1)
    stfs f8, 0x90(r1)
    stfs f7, 0x94(r1)
    stfs f0, 0x38(r1)
    stfs f4, 0x3c(r1)
    stfs f10, 0x40(r1)
    stfs f6, 0x80(r1)
    stfs f3, 0x84(r1)
    stfs f11, 0x88(r1)
    bl fn_805F9920
    lfs f0, lbl_80886438
    fcmpo cr0, f1, f0
    ble lbl_fn_80415F6C_000002E8
    addi r3, r1, 0x80
    mr r4, r3
    bl fn_805F98D0
lbl_fn_80415F6C_000002E8:
    addi r3, r1, 0x80
    addi r4, r31, 0x17c
    bl fn_805F9990
    lfs f0, 0x88(r1)
    addi r3, r1, 0x2c
    lfs f3, 0x84(r1)
    addi r4, r1, 0x8c
    fmuls f7, f0, f1
    lfs f0, 0x80(r1)
    fmuls f6, f3, f1
    lfs f4, 0x184(r31)
    fmuls f5, f0, f1
    lfs f3, 0x180(r31)
    fneg f10, f7
    lfs f0, 0x17c(r31)
    fneg f11, f6
    stfs f5, 0x74(r1)
    fneg f12, f5
    lfs f31, 0x190(r31)
    fsubs f8, f4, f7
    lfs f13, 0x18c(r31)
    fsubs f9, f3, f6
    stfs f6, 0x78(r1)
    fsubs f5, f0, f5
    frsp f4, f10
    frsp f3, f11
    stfs f7, 0x7c(r1)
    frsp f0, f12
    fmuls f6, f8, f31
    stfs f5, 0x68(r1)
    fmuls f4, f4, f13
    fmuls f7, f9, f31
    stfs f9, 0x6c(r1)
    fmuls f3, f3, f13
    fadds f9, f4, f6
    stfs f7, 0xc(r1)
    fmuls f5, f5, f31
    fmuls f0, f0, f13
    stfs f8, 0x70(r1)
    fadds f7, f3, f7
    stfs f5, 0x8(r1)
    fmr f2, f9
    fadds f5, f0, f5
    stfs f2, 0x184(r31)
    lfs f2, 0x94(r1)
    stfs f5, 0x2c(r1)
    stfs f7, 0x30(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x17c(r31), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    stfs f6, 0x10(r1)
    stfs f12, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f10, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f3, 0x24(r1)
    stfs f4, 0x28(r1)
    stfs f9, 0x34(r1)
    psq_st f1, 0x6c(r31), 0, 0
    stfs f2, 0x74(r31)
    b lbl_fn_80415F6C_0000040C
lbl_fn_80415F6C_000003DC:
    lfs f3, 0x6c(r31)
    lfs f0, 0x17c(r31)
    lfs f5, 0x70(r31)
    fadds f6, f3, f0
    lfs f4, 0x180(r31)
    lfs f3, 0x74(r31)
    lfs f0, 0x184(r31)
    fadds f4, f5, f4
    stfs f6, 0x6c(r31)
    fadds f0, f3, f0
    stfs f4, 0x70(r31)
    stfs f0, 0x74(r31)
lbl_fn_80415F6C_0000040C:
    lwz r0, 0x134(r1)
    psq_l f31, 0x128(r1), 0, 0
    lfd f31, 0x120(r1)
    lwz r31, 0x11c(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

asm void fn_80416268(void)
{
    nofralloc
    stwu r1, -0x1a0(r1)
    mflr r0
    stw r0, 0x1a4(r1)
    addi r11, r1, 0x150
    stfd f31, 0x190(r1)
    psq_st f31, 0x198(r1), 0, 0
    stfd f30, 0x180(r1)
    psq_st f30, 0x188(r1), 0, 0
    stfd f29, 0x170(r1)
    psq_st f29, 0x178(r1), 0, 0
    stfd f28, 0x160(r1)
    psq_st f28, 0x168(r1), 0, 0
    stfd f27, 0x150(r1)
    psq_st f27, 0x158(r1), 0, 0
    bl _savegpr_17
    fmr f31, f1
    addi r25, r1, 0xa4
    psq_l f1, 0x0(r6), 0, 0
    mr r26, r4
    lfs f2, 0x8(r6)
    addi r7, r1, 0xb0
    lfs f3, lbl_80886438
    mr r17, r5
    lwz r4, lbl_8087EE98
    mr r3, r25
    lfs f0, lbl_80886450
    li r31, 0x0
    psq_st f1, 0x0(r25), 0, 0
    addi r29, r4, 0x4008
    li r30, 0x0
    li r28, 0x0
    stfs f2, 0xac(r1)
    li r27, 0x0
    psq_l f1, 0x0(r5), 0, 0
    lfs f2, 0x8(r5)
    stfs f2, 0xb8(r1)
    psq_st f1, 0x0(r7), 0, 0
    stfs f31, 0xbc(r1)
    stfs f3, 0x98(r1)
    stfs f0, 0xc(r1)
    stfs f3, 0x1c(r1)
    bl fn_805F9920
    fmuls f3, f31, f31
    lfs f0, lbl_80886464
    fmuls f0, f0, f3
    fcmpo cr0, f1, f0
    ble lbl_fn_80416268_000005F0
    li r0, 0x0
    stw r0, 0xf4(r1)
    lfs f7, 0xac(r1)
    mr r5, r17
    stw r0, 0xf8(r1)
    addi r4, r1, 0xc0
    lfs f5, 0xa8(r1)
    addi r6, r1, 0x8c
    stw r0, 0xfc(r1)
    li r7, 0xe
    lfs f3, 0xa4(r1)
    li r8, 0x0
    stw r0, 0x100(r1)
    li r9, 0x0
    lwz r3, lbl_8087EE98
    lfs f6, 0x8(r17)
    lfs f4, 0x4(r17)
    lfs f0, 0x0(r17)
    fadds f6, f7, f6
    fadds f4, f5, f4
    fadds f0, f3, f0
    stfs f6, 0x94(r1)
    stfs f0, 0x8c(r1)
    stfs f4, 0x90(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_80416268_000005F0
    lfs f3, 0xcc(r1)
    addi r3, r1, 0x5c
    lfs f0, 0x8(r17)
    lfs f4, 0xc8(r1)
    fsubs f2, f3, f0
    lfs f3, 0x4(r17)
    lfs f6, 0xc4(r1)
    fsubs f7, f4, f3
    lfs f3, 0xdc(r1)
    lfs f5, 0x0(r17)
    fmuls f10, f3, f31
    lfs f0, 0xe4(r1)
    fsubs f3, f6, f5
    fmuls f8, f0, f31
    lfs f4, 0xe0(r1)
    lfs f0, lbl_8088644C
    fmuls f9, f4, f31
    stfs f7, 0x60(r1)
    fmuls f5, f8, f0
    stfs f3, 0x5c(r1)
    fmuls f7, f10, f0
    fmuls f6, f9, f0
    psq_l f1, 0x0(r3), 0, 0
    frsp f0, f2
    psq_st f1, 0x0(r25), 0, 0
    lfs f4, 0xa4(r1)
    fadds f0, f0, f5
    lfs f3, 0xa8(r1)
    fadds f4, f4, f7
    stfs f2, 0x64(r1)
    fadds f3, f3, f6
    stfs f10, 0x44(r1)
    stfs f9, 0x48(r1)
    stfs f8, 0x4c(r1)
    stfs f7, 0x50(r1)
    stfs f6, 0x54(r1)
    stfs f5, 0x58(r1)
    stfs f4, 0xa4(r1)
    stfs f3, 0xa8(r1)
    stfs f0, 0xac(r1)
lbl_fn_80416268_000005F0:
    lfs f31, lbl_8088646C
    addi r23, r1, 0xb0
    addi r24, r1, 0x80
    addi r21, r1, 0x38
    addi r22, r1, 0xa4
    addi r20, r1, 0x2c
lbl_fn_80416268_00000608:
    lfs f2, 0xb8(r1)
    mr r4, r29
    lfs f0, 0xac(r1)
    mr r6, r23
    psq_l f1, 0x0(r23), 0, 0
    li r5, 0x100
    fadds f0, f2, f0
    lfs f6, 0xb0(r1)
    lfs f5, 0xa4(r1)
    li r7, 0xe
    lfs f4, 0xb4(r1)
    li r8, 0x0
    lfs f3, 0xa8(r1)
    fadds f5, f6, f5
    psq_st f1, 0x0(r24), 0, 0
    li r9, 0x0
    fadds f3, f4, f3
    lwz r3, lbl_8087EE98
    stfs f2, 0x88(r1)
    stfs f5, 0xb0(r1)
    stfs f3, 0xb4(r1)
    stfs f0, 0xb8(r1)
    bl fn_8004CCA0
    cmpwi r3, 0x0
    mr r25, r3
    beq lbl_fn_80416268_000007E0
    lfs f27, lbl_80886468
    mr r19, r29
    lfs f28, 0x88(r1)
    li r18, -0x1
    lfs f29, 0x84(r1)
    li r17, 0x0
    lfs f30, 0x80(r1)
    b lbl_fn_80416268_000006D4
lbl_fn_80416268_00000690:
    lfs f4, 0xc(r19)
    addi r3, r1, 0x20
    lfs f3, 0x8(r19)
    lfs f0, 0x4(r19)
    fsubs f4, f28, f4
    fsubs f3, f29, f3
    fsubs f0, f30, f0
    stfs f4, 0x28(r1)
    stfs f0, 0x20(r1)
    stfs f3, 0x24(r1)
    bl fn_805F9920
    fcmpo cr0, f27, f1
    ble lbl_fn_80416268_000006CC
    fmr f27, f1
    mr r18, r17
lbl_fn_80416268_000006CC:
    addi r19, r19, 0x50
    addi r17, r17, 0x1
lbl_fn_80416268_000006D4:
    cmpw r17, r25
    blt lbl_fn_80416268_00000690
    cmpwi r18, 0x0
    blt lbl_fn_80416268_000007E0
    mulli r0, r18, 0x50
    lfs f6, 0xb8(r1)
    lfs f5, 0xb4(r1)
    mr r3, r22
    lfs f3, 0xb0(r1)
    li r31, 0x1
    add r19, r29, r0
    addi r30, r30, 0x1
    lfs f0, 0x18(r19)
    addi r4, r19, 0x1c
    lfs f4, 0x14(r19)
    fsubs f2, f6, f0
    lfs f0, 0x10(r19)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f2, 0xac(r1)
    stfs f0, 0x38(r1)
    stfs f4, 0x3c(r1)
    psq_l f1, 0x0(r21), 0, 0
    psq_st f1, 0x0(r22), 0, 0
    lfs f4, 0x24(r19)
    lfs f0, 0x20(r19)
    lfs f3, 0x1c(r19)
    fmuls f4, f4, f31
    fmuls f5, f0, f31
    lfs f0, 0x18(r19)
    fmuls f6, f3, f31
    stfs f2, 0x40(r1)
    fadds f2, f0, f4
    lfs f3, 0x14(r19)
    lfs f0, 0x10(r19)
    fadds f3, f3, f5
    stfs f6, 0x74(r1)
    fadds f0, f0, f6
    stfs f3, 0x30(r1)
    stfs f0, 0x2c(r1)
    psq_l f1, 0x0(r20), 0, 0
    stfs f5, 0x78(r1)
    stfs f4, 0x7c(r1)
    stfs f2, 0x34(r1)
    psq_st f1, 0x0(r23), 0, 0
    stfs f2, 0xb8(r1)
    bl fn_805F9990
    lfs f4, 0x24(r19)
    cmpwi r30, 0x1
    lfs f3, 0x20(r19)
    fmuls f5, f4, f1
    lfs f0, 0x1c(r19)
    fmuls f6, f3, f1
    lfs f3, 0xa8(r1)
    fmuls f7, f0, f1
    lfs f4, 0xa4(r1)
    lfs f0, 0xac(r1)
    fsubs f3, f3, f6
    fsubs f4, f4, f7
    stfs f7, 0x68(r1)
    fsubs f0, f0, f5
    stfs f6, 0x6c(r1)
    stfs f5, 0x70(r1)
    stfs f4, 0xa4(r1)
    stfs f3, 0xa8(r1)
    stfs f0, 0xac(r1)
    ble lbl_fn_80416268_00000608
lbl_fn_80416268_000007E0:
    cmpwi r26, 0x0
    beq lbl_fn_80416268_00000814
    addi r3, r1, 0xb0
    lfs f2, 0xb8(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x10(r26), 0, 0
    stfs f2, 0x18(r26)
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0xb8(r1)
    stfs f2, 0xc(r26)
    psq_st f1, 0x4(r26), 0, 0
    stw r28, 0x34(r26)
    stw r27, 0x3c(r26)
lbl_fn_80416268_00000814:
    psq_l f31, 0x198(r1), 0, 0
    mr r3, r31
    lfd f31, 0x190(r1)
    psq_l f30, 0x188(r1), 0, 0
    lfd f30, 0x180(r1)
    psq_l f29, 0x178(r1), 0, 0
    lfd f29, 0x170(r1)
    psq_l f28, 0x168(r1), 0, 0
    lfd f28, 0x160(r1)
    psq_l f27, 0x158(r1), 0, 0
    lfd f27, 0x150(r1)
    addi r11, r1, 0x150
    bl _restgpr_17
    lwz r0, 0x1a4(r1)
    mtlr r0
    addi r1, r1, 0x1a0
    blr
}

asm void fn_80416698(void)
{
    nofralloc
    blr
}

asm void fn_8041669C(void)
{
    nofralloc
    lwz r3, 0x54(r3)
    subi r0, r3, 0x2
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

asm void fn_804166B0(void)
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
    beq lbl_fn_804166B0_00000904
    lis r5, lbl_80752ED4@ha
    li r3, 0x4e8
    addi r5, r5, lbl_80752ED4@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_804166B0_000008FC
    lwz r5, 0x18(r30)
    mr r4, r29
    lwz r6, 0x1c(r30)
    bl fn_803EC568
    lis r4, lbl_8078DA78@ha
    addi r3, r31, 0xf4
    addi r4, r4, lbl_8078DA78@l
    stw r4, 0x0(r31)
    li r4, 0x1
    li r5, 0x20
    bl fn_80096E94
    stw r30, 0x4c4(r31)
    li r0, 0x0
    stw r0, 0x4c8(r31)
    stw r0, 0x54(r31)
lbl_fn_804166B0_000008FC:
    mr r3, r31
    b lbl_fn_804166B0_00000908
lbl_fn_804166B0_00000904:
    li r3, 0x0
lbl_fn_804166B0_00000908:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80416764(void)
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
    beq lbl_fn_80416764_00000970
    li r4, -0x1
    addi r3, r3, 0xf4
    bl fn_800971D4
    mr r3, r30
    li r4, 0x0
    bl fn_803EC69C
    cmpwi r31, 0x0
    ble lbl_fn_80416764_00000970
    mr r3, r30
    bl dtor_80084684
lbl_fn_80416764_00000970:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804167CC(void)
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

asm void fn_804167FC(void)
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
    lis r31, lbl_80752ED4@ha
    addi r31, r31, lbl_80752ED4@l
lbl_fn_804167FC_00000A6C:
    addi r3, r1, 0x108
    bl fn_8005B9CC
    lbz r0, 0x0(r3)
    mr r30, r3
    cmpwi r0, 0x3b
    beq lbl_fn_804167FC_00000AF4
    addi r4, r31, 0x1
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_804167FC_00000AB0
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r29, 0xf4
    li r5, 0x0
    bl fn_8008AD4C
    b lbl_fn_804167FC_00000AF4
lbl_fn_804167FC_00000AB0:
    mr r3, r30
    addi r4, r31, 0x7
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_804167FC_00000AF4
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
lbl_fn_804167FC_00000AF4:
    addi r3, r1, 0x108
    bl fn_8005BBF8
    cmpwi r3, 0x0
    bne lbl_fn_804167FC_00000A6C
    lwz r0, 0x754(r1)
    lwz r31, 0x74c(r1)
    lwz r30, 0x748(r1)
    lwz r29, 0x744(r1)
    mtlr r0
    addi r1, r1, 0x750
    blr
}

asm void fn_80416960(void)
{
    nofralloc
    stwu r1, -0x650(r1)
    mflr r0
    stw r0, 0x654(r1)
    stw r31, 0x64c(r1)
    mr r31, r3
    addi r3, r3, 0x60
    stw r30, 0x648(r1)
    bl fn_8047059C
    mr r30, r3
    addi r3, r31, 0x60
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
lbl_fn_80416960_00000BC4:
    addi r3, r1, 0x8
    bl fn_8005B9CC
    addi r3, r1, 0x8
    bl fn_8005BBF8
    cmpwi r3, 0x0
    bne lbl_fn_80416960_00000BC4
    lwz r0, 0x654(r1)
    lwz r31, 0x64c(r1)
    lwz r30, 0x648(r1)
    mtlr r0
    addi r1, r1, 0x650
    blr
}

asm void fn_80416A34(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_803EC91C
    cmpwi r3, 0x0
    bne lbl_fn_80416A34_00000C24
    li r0, 0x2
    stw r0, 0x54(r31)
    li r3, 0x1
    b lbl_fn_80416A34_00000C28
lbl_fn_80416A34_00000C24:
    li r3, 0x0
lbl_fn_80416A34_00000C28:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80416A7C(void)
{
    nofralloc
    lwz r4, 0x4c4(r3)
    lfs f0, lbl_80886470
    psq_l f1, 0x4(r4), 0, 0
    lfs f2, 0xc(r4)
    stfs f2, 0x74(r3)
    psq_st f1, 0x6c(r3), 0, 0
    lfs f3, 0x14(r4)
    stfs f3, 0x7c(r3)
    stfs f0, 0x78(r3)
    stfs f0, 0x80(r3)
    blr
}

asm void fn_80416AA8(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    lwz r0, 0x54(r3)
    cmpwi r0, 0x1
    beq lbl_fn_80416AA8_00000E30
    lwz r4, 0x4c4(r3)
    lwz r0, 0x7c(r4)
    cmpwi r0, 0x0
    bne lbl_fn_80416AA8_00000C9C
    b lbl_fn_80416AA8_00000E30
lbl_fn_80416AA8_00000C9C:
    lwz r4, lbl_8087EFB4
    lfs f0, 0x74(r3)
    lfs f3, 0x114(r4)
    lfs f5, 0x110(r4)
    fsubs f6, f3, f0
    lfs f4, 0x70(r3)
    lfs f0, 0x6c(r3)
    addi r3, r1, 0x8
    lfs f3, 0x10c(r4)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f6, 0x10(r1)
    bl fn_805F9920
    lfs f0, lbl_80886474
    fcmpo cr0, f1, f0
    ble lbl_fn_80416AA8_00000CF0
    lwz r0, 0x54(r31)
    cmpwi r0, 0x2
    beq lbl_fn_80416AA8_00000E30
lbl_fn_80416AA8_00000CF0:
    lwz r0, 0x54(r31)
    cmpwi r0, 0x3
    beq lbl_fn_80416AA8_00000D08
    cmpwi r0, 0x4
    beq lbl_fn_80416AA8_00000DD0
    b lbl_fn_80416AA8_00000E20
lbl_fn_80416AA8_00000D08:
    lfs f5, 0x6c(r31)
    lis r4, 0x4330
    lfs f4, 0x4cc(r31)
    lis r5, lbl_80752EC0@ha
    lfs f3, 0x70(r31)
    fadds f10, f5, f4
    lfs f0, 0x4d0(r31)
    lfs f5, 0x74(r31)
    fadds f9, f3, f0
    lfs f4, 0x4d4(r31)
    lfs f3, 0x78(r31)
    fadds f8, f5, f4
    lfs f0, 0x4d8(r31)
    lwz r3, 0x4c8(r31)
    fadds f7, f3, f0
    lfs f5, 0x7c(r31)
    lfs f4, 0x4dc(r31)
    addi r0, r3, 0x1
    lfs f3, 0x80(r31)
    fadds f6, f5, f4
    lfs f0, 0x4e0(r31)
    cmpwi r0, 0x2d
    stfs f10, 0x6c(r31)
    fadds f4, f3, f0
    lfd f5, lbl_80752EC0@l(r5)
    stfs f9, 0x70(r31)
    lfs f3, lbl_80886478
    stfs f8, 0x74(r31)
    lfs f0, 0x4d0(r31)
    stfs f7, 0x78(r31)
    stfs f6, 0x7c(r31)
    stfs f4, 0x80(r31)
    lwz r3, lbl_8087F0A8
    stw r4, 0x18(r1)
    lwz r3, 0x30(r3)
    mullw r3, r3, r3
    stw r0, 0x4c8(r31)
    xoris r0, r3, 0x8000
    stw r0, 0x1c(r1)
    lfd f4, 0x18(r1)
    fsubs f4, f4, f5
    fdivs f3, f3, f4
    fadds f0, f0, f3
    stfs f0, 0x4d0(r31)
    ble lbl_fn_80416AA8_00000E20
    li r3, 0x4
    li r0, 0x0
    stw r3, 0x54(r31)
    stw r0, 0x4c8(r31)
    b lbl_fn_80416AA8_00000E20
lbl_fn_80416AA8_00000DD0:
    lwz r3, 0x4c8(r31)
    lwz r4, 0x4c4(r31)
    addi r3, r3, 0x1
    stw r3, 0x4c8(r31)
    lwz r0, 0x20(r4)
    cmpw r3, r0
    ble lbl_fn_80416AA8_00000E20
    li r3, 0x2
    li r0, 0x0
    stw r3, 0x54(r31)
    lfs f0, lbl_80886470
    stw r0, 0x4c8(r31)
    psq_l f1, 0x4(r4), 0, 0
    lfs f2, 0xc(r4)
    stfs f2, 0x74(r31)
    psq_st f1, 0x6c(r31), 0, 0
    lfs f3, 0x14(r4)
    stfs f3, 0x7c(r31)
    stfs f0, 0x78(r31)
    stfs f0, 0x80(r31)
lbl_fn_80416AA8_00000E20:
    mr r3, r31
    addi r4, r31, 0xf4
    li r5, 0x1
    bl fn_803ED0D4
lbl_fn_80416AA8_00000E30:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80416C84(void)
{
    nofralloc
    lwz r0, 0x54(r3)
    cmpwi r0, 0x1
    beqlr
    cmpwi r0, 0x4
    beqlr
    lwz r4, 0x4c4(r3)
    lwz r0, 0x7c(r4)
    cmpwi r0, 0x0
    bne lbl_fn_80416C84_00000E6C
    blr
lbl_fn_80416C84_00000E6C:
    addi r3, r3, 0xf4
    b fn_8008CD60
    blr
}

asm void fn_80416CB8(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    cmpwi r4, 0x0
    lis r0, 0x4330
    stw r0, 0x8(r1)
    mr r28, r3
    mr r29, r4
    stw r0, 0x10(r1)
    bne lbl_fn_80416CB8_00000EB0
    li r3, 0x0
    b lbl_fn_80416CB8_000010E8
lbl_fn_80416CB8_00000EB0:
    lwz r0, 0x0(r4)
    stw r0, 0x54(r3)
    cmpwi r0, 0x3
    bne lbl_fn_80416CB8_0000103C
    bl fn_80680CF8
    lis r30, 0x4178
    lis r31, lbl_80752EC0@ha
    addi r0, r30, 0x749f
    lfd f4, lbl_80752EC0@l(r31)
    mulhw r0, r0, r3
    lfs f2, lbl_80886480
    lfs f1, lbl_8088647C
    lfs f0, lbl_80886484
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f3, 0x8(r1)
    fsubs f3, f3, f4
    fdivs f2, f3, f2
    fmsubs f0, f1, f2, f0
    stfs f0, 0x4cc(r28)
    bl fn_80680CF8
    addi r0, r30, 0x749f
    lfs f0, lbl_80886484
    mulhw r0, r0, r3
    lfd f4, lbl_80752EC0@l(r31)
    lfs f2, lbl_80886480
    lfs f1, lbl_8088647C
    stfs f0, 0x4d0(r28)
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f3, 0x10(r1)
    fsubs f3, f3, f4
    fdivs f2, f3, f2
    fmsubs f0, f1, f2, f0
    stfs f0, 0x4d4(r28)
    bl fn_80680CF8
    addi r0, r30, 0x749f
    lfd f3, lbl_80752EC0@l(r31)
    mulhw r0, r0, r3
    lfs f1, lbl_80886480
    lfs f0, lbl_80886488
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f2, 0x8(r1)
    fsubs f2, f2, f3
    fdivs f1, f2, f1
    fmuls f0, f0, f1
    stfs f0, 0x4d8(r28)
    bl fn_80680CF8
    addi r0, r30, 0x749f
    lfd f3, lbl_80752EC0@l(r31)
    mulhw r0, r0, r3
    lfs f1, lbl_80886480
    lfs f0, lbl_80886488
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f2, 0x10(r1)
    fsubs f2, f2, f3
    fdivs f1, f2, f1
    fmuls f0, f0, f1
    stfs f0, 0x4dc(r28)
    bl fn_80680CF8
    addi r0, r30, 0x749f
    lfd f3, lbl_80752EC0@l(r31)
    mulhw r0, r0, r3
    lfs f1, lbl_80886480
    lfs f0, lbl_80886488
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f2, 0x8(r1)
    fsubs f2, f2, f3
    fdivs f1, f2, f1
    fmuls f0, f0, f1
    stfs f0, 0x4e0(r28)
lbl_fn_80416CB8_0000103C:
    lbz r0, lbl_8087EE74
    extsb. r0, r0
    bne lbl_fn_80416CB8_0000107C
    lis r3, lbl_807C6BB8@ha
    li r0, 0x0
    stwu r0, lbl_807C6BB8@l(r3)
    lis r4, fn_8003EFB0@ha
    li r30, 0x1
    lis r5, lbl_807C88E0@ha
    stw r0, 0x4(r3)
    addi r4, r4, fn_8003EFB0@l
    addi r5, r5, lbl_807C88E0@l
    stw r0, 0x8(r3)
    stw r30, 0xc(r3)
    bl __register_global_object
    stb r30, lbl_8087EE74
lbl_fn_80416CB8_0000107C:
    lis r31, lbl_807C6BB8@ha
    addi r31, r31, lbl_807C6BB8@l
    lwz r0, 0xc(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80416CB8_000010E4
    li r27, 0x0
    li r30, 0x0
    b lbl_fn_80416CB8_000010D8
lbl_fn_80416CB8_0000109C:
    lwz r0, 0x0(r31)
    add r3, r0, r30
    lwzx r0, r30, r0
    cmpwi r0, -0x1
    beq lbl_fn_80416CB8_000010B8
    cmpwi r0, 0xb
    bne lbl_fn_80416CB8_000010D0
lbl_fn_80416CB8_000010B8:
    lwz r12, 0x4(r3)
    mr r4, r28
    mr r5, r29
    li r3, 0xb
    mtctr r12
    bctrl
lbl_fn_80416CB8_000010D0:
    addi r27, r27, 0x1
    addi r30, r30, 0x8
lbl_fn_80416CB8_000010D8:
    lwz r0, 0x4(r31)
    cmpw r27, r0
    blt lbl_fn_80416CB8_0000109C
lbl_fn_80416CB8_000010E4:
    lwz r3, 0x54(r28)
lbl_fn_80416CB8_000010E8:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80416F40(void)
{
    nofralloc
    lwz r0, 0x54(r3)
    li r4, 0x0
    cmpwi r0, 0x2
    bne lbl_fn_80416F40_00001124
    lwz r3, 0x4c4(r3)
    lwz r0, 0x7c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80416F40_00001124
    li r4, 0x1
lbl_fn_80416F40_00001124:
    mr r3, r4
    blr
}

asm void fn_80416F6C(void)
{
    nofralloc
    addi r3, r3, 0xf4
    blr
}

asm void fn_80416F74(void)
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
    stw r28, 0x10(r1)
    beq lbl_fn_80416F74_00001234
    lis r5, lbl_80752F44@ha
    li r3, 0x2490
    addi r5, r5, lbl_80752F44@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r28, r3
    beq lbl_fn_80416F74_0000122C
    lwz r5, 0x18(r30)
    mr r4, r29
    lwz r6, 0x1c(r30)
    bl fn_803EC568
    lis r3, lbl_8078DB10@ha
    li r29, 0x0
    addi r3, r3, lbl_8078DB10@l
    stw r3, 0x0(r28)
    addi r3, r28, 0xfc
    li r4, 0x8
    stw r30, 0xf4(r28)
    li r5, 0x1
    stw r29, 0xf8(r28)
    bl fn_80096E94
    lis r4, fn_80417098@ha
    lis r5, fn_804170D8@ha
    addi r3, r28, 0x4cc
    li r6, 0x3ec
    addi r4, r4, fn_80417098@l
    addi r5, r5, fn_804170D8@l
    li r7, 0x8
    bl fn_806958E0
    addi r3, r28, 0x242c
    bl fn_802377B8
    addi r3, r28, 0x2438
    bl fn_802377B8
    lis r30, fn_802377B8@ha
    lis r31, fn_800EF73C@ha
    addi r3, r28, 0x2444
    li r6, 0xc
    addi r4, r30, fn_802377B8@l
    addi r5, r31, fn_800EF73C@l
    li r7, 0x3
    bl fn_806958E0
    addi r3, r28, 0x2468
    addi r4, r30, fn_802377B8@l
    addi r5, r31, fn_800EF73C@l
    li r6, 0xc
    li r7, 0x3
    bl fn_806958E0
    stw r29, 0x54(r28)
lbl_fn_80416F74_0000122C:
    mr r3, r28
    b lbl_fn_80416F74_00001238
lbl_fn_80416F74_00001234:
    li r3, 0x0
lbl_fn_80416F74_00001238:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80417098(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x1
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80096E94
    li r0, 0x0
    stw r0, 0x3d0(r31)
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804170D8(void)
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
    beq lbl_fn_804170D8_000012D4
    li r4, -0x1
    bl fn_800971D4
    cmpwi r31, 0x0
    ble lbl_fn_804170D8_000012D4
    mr r3, r30
    bl dtor_80084684
lbl_fn_804170D8_000012D4:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80417130(void)
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
    beq lbl_fn_80417130_000013C4
    lis r31, fn_800EF73C@ha
    li r5, 0xc
    addi r4, r31, fn_800EF73C@l
    li r6, 0x3
    addi r3, r3, 0x2468
    bl fn_806959D8
    addi r3, r29, 0x2444
    addi r4, r31, fn_800EF73C@l
    li r5, 0xc
    li r6, 0x3
    bl fn_806959D8
    addic. r31, r29, 0x2438
    beq lbl_fn_80417130_00001364
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_80417130_00001364
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80417130_00001364:
    addic. r31, r29, 0x242c
    beq lbl_fn_80417130_00001384
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_80417130_00001384
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80417130_00001384:
    lis r4, fn_804170D8@ha
    addi r3, r29, 0x4cc
    addi r4, r4, fn_804170D8@l
    li r5, 0x3ec
    li r6, 0x8
    bl fn_806959D8
    addi r3, r29, 0xfc
    li r4, -0x1
    bl fn_800971D4
    mr r3, r29
    li r4, 0x0
    bl fn_803EC69C
    cmpwi r30, 0x0
    ble lbl_fn_80417130_000013C4
    mr r3, r29
    bl dtor_80084684
lbl_fn_80417130_000013C4:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80417224(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_803EC91C
    cmpwi r3, 0x0
    bne lbl_fn_80417224_00001414
    li r0, 0x2
    stw r0, 0x54(r31)
    li r3, 0x1
    b lbl_fn_80417224_00001418
lbl_fn_80417224_00001414:
    li r3, 0x0
lbl_fn_80417224_00001418:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8041726C(void)
{
    nofralloc
    stwu r1, -0x660(r1)
    mflr r0
    stw r0, 0x664(r1)
    stmw r27, 0x64c(r1)
    mr r31, r3
    addi r3, r3, 0x60
    bl fn_8047059C
    mr r29, r3
    addi r3, r31, 0x60
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
    mr r5, r29
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
    lis r30, lbl_80752F44@ha
    addi r30, r30, lbl_80752F44@l
lbl_fn_8041726C_000014D4:
    addi r3, r1, 0x8
    bl fn_8005B9CC
    lbz r0, 0x0(r3)
    mr r29, r3
    cmpwi r0, 0x3b
    beq lbl_fn_8041726C_000016CC
    addi r4, r30, 0x1
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8041726C_00001518
    addi r3, r1, 0x8
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r31, 0xfc
    li r5, 0x0
    bl fn_8008AD4C
    b lbl_fn_8041726C_000016CC
lbl_fn_8041726C_00001518:
    mr r3, r29
    addi r4, r30, 0xc
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8041726C_00001564
    addi r3, r1, 0x8
    bl fn_8005B9CC
    mr r28, r3
    addi r29, r31, 0x4cc
    li r27, 0x0
lbl_fn_8041726C_00001540:
    mr r3, r29
    mr r4, r28
    li r5, 0x0
    bl fn_8008AD4C
    addi r27, r27, 0x1
    addi r29, r29, 0x3ec
    cmplwi r27, 0x8
    blt lbl_fn_8041726C_00001540
    b lbl_fn_8041726C_000016CC
lbl_fn_8041726C_00001564:
    mr r3, r29
    addi r4, r30, 0x18
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8041726C_00001594
    addi r3, r1, 0x8
    bl fn_8005B9CC
    mr r5, r3
    addi r3, r31, 0xfc
    li r4, 0x0
    bl fn_80097A88
    b lbl_fn_8041726C_000016CC
lbl_fn_8041726C_00001594:
    mr r3, r29
    addi r4, r30, 0x24
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8041726C_000015E0
    addi r3, r1, 0x8
    bl fn_8005B9CC
    mr r27, r3
    addi r29, r31, 0x4cc
    li r28, 0x0
lbl_fn_8041726C_000015BC:
    mr r3, r29
    mr r5, r27
    li r4, 0x0
    bl fn_80097A88
    addi r28, r28, 0x1
    addi r29, r29, 0x3ec
    cmplwi r28, 0x8
    blt lbl_fn_8041726C_000015BC
    b lbl_fn_8041726C_000016CC
lbl_fn_8041726C_000015E0:
    mr r3, r29
    addi r4, r30, 0x31
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8041726C_0000160C
    addi r3, r1, 0x8
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r31, 0x242c
    bl fn_8023780C
    b lbl_fn_8041726C_000016CC
lbl_fn_8041726C_0000160C:
    mr r3, r29
    addi r4, r30, 0x3b
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8041726C_00001638
    addi r3, r1, 0x8
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r31, 0x2438
    bl fn_8023780C
    b lbl_fn_8041726C_000016CC
lbl_fn_8041726C_00001638:
    mr r3, r29
    addi r4, r30, 0x45
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8041726C_0000167C
    addi r29, r31, 0x2444
    li r27, 0x0
lbl_fn_8041726C_00001654:
    addi r3, r1, 0x8
    bl fn_8005B9CC
    mr r4, r3
    mr r3, r29
    bl fn_8023780C
    addi r27, r27, 0x1
    addi r29, r29, 0xc
    cmplwi r27, 0x3
    blt lbl_fn_8041726C_00001654
    b lbl_fn_8041726C_000016CC
lbl_fn_8041726C_0000167C:
    mr r3, r29
    addi r4, r30, 0x51
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8041726C_000016C0
    addi r29, r31, 0x2468
    li r27, 0x0
lbl_fn_8041726C_00001698:
    addi r3, r1, 0x8
    bl fn_8005B9CC
    mr r4, r3
    mr r3, r29
    bl fn_8023780C
    addi r27, r27, 0x1
    addi r29, r29, 0xc
    cmplwi r27, 0x3
    blt lbl_fn_8041726C_00001698
    b lbl_fn_8041726C_000016CC
lbl_fn_8041726C_000016C0:
    mr r3, r29
    addi r4, r30, 0x59
    bl fn_80682428
lbl_fn_8041726C_000016CC:
    addi r3, r1, 0x8
    bl fn_8005BBF8
    cmpwi r3, 0x0
    bne lbl_fn_8041726C_000014D4
    lmw r27, 0x64c(r1)
    lwz r0, 0x664(r1)
    mtlr r0
    addi r1, r1, 0x660
    blr
}

asm void fn_80417530(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    li r29, 0x0
    stw r28, 0x10(r1)
    mr r28, r3
    addi r3, r3, 0xfc
    bl fn_8008B140
    cmpwi r3, 0x0
    beq lbl_fn_80417530_00001728
    li r29, 0x1
lbl_fn_80417530_00001728:
    addi r30, r28, 0x4cc
    li r31, 0x0
lbl_fn_80417530_00001730:
    mr r3, r30
    bl fn_8008B140
    cmpwi r3, 0x0
    beq lbl_fn_80417530_00001744
    li r29, 0x1
lbl_fn_80417530_00001744:
    addi r31, r31, 0x1
    addi r30, r30, 0x3ec
    cmplwi r31, 0x8
    blt lbl_fn_80417530_00001730
    addi r3, r28, 0x242c
    bl fn_80237874
    cmpwi r3, 0x0
    beq lbl_fn_80417530_00001768
    li r29, 0x1
lbl_fn_80417530_00001768:
    addi r3, r28, 0x2438
    bl fn_80237874
    cmpwi r3, 0x0
    beq lbl_fn_80417530_0000177C
    li r29, 0x1
lbl_fn_80417530_0000177C:
    addi r31, r28, 0x2444
    addi r30, r28, 0x2468
    li r28, 0x0
lbl_fn_80417530_00001788:
    mr r3, r31
    bl fn_80237874
    cmpwi r3, 0x0
    beq lbl_fn_80417530_0000179C
    li r29, 0x1
lbl_fn_80417530_0000179C:
    mr r3, r30
    bl fn_80237874
    cmpwi r3, 0x0
    beq lbl_fn_80417530_000017B0
    li r29, 0x1
lbl_fn_80417530_000017B0:
    addi r28, r28, 0x1
    addi r30, r30, 0xc
    cmplwi r28, 0x3
    addi r31, r31, 0xc
    blt lbl_fn_80417530_00001788
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80417628(void)
{
    nofralloc
    blr
}

asm void fn_8041762C(void)
{
    nofralloc
    li r0, 0x8
    mr r4, r3
    li r5, 0x0
    mtctr r0
lbl_fn_8041762C_000017FC:
    lwz r0, 0x89c(r4)
    cmpwi r0, 0x0
    bne lbl_fn_8041762C_00001818
    mulli r0, r5, 0x3ec
    add r3, r3, r0
    addi r3, r3, 0x4cc
    blr
lbl_fn_8041762C_00001818:
    addi r4, r4, 0x3ec
    addi r5, r5, 0x1
    bdnz lbl_fn_8041762C_000017FC
    li r3, 0x0
    blr
}

asm void fn_8041766C(void)
{
    nofralloc
    stwu r1, -0x2e0(r1)
    mflr r0
    stw r0, 0x2e4(r1)
    addi r11, r1, 0x290
    stfd f31, 0x2d0(r1)
    psq_st f31, 0x2d8(r1), 0, 0
    stfd f30, 0x2c0(r1)
    psq_st f30, 0x2c8(r1), 0, 0
    stfd f29, 0x2b0(r1)
    psq_st f29, 0x2b8(r1), 0, 0
    stfd f28, 0x2a0(r1)
    psq_st f28, 0x2a8(r1), 0, 0
    stfd f27, 0x290(r1)
    psq_st f27, 0x298(r1), 0, 0
    bl _savegpr_19
    lwz r12, 0x0(r3)
    mr r24, r3
    lwz r12, 0x60(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8041766C_00002008
    lis r21, lbl_80752F18@ha
    lfs f29, lbl_80886498
    lfs f27, lbl_8088649C
    mr r29, r24
    lfs f30, lbl_808864A0
    addi r28, r24, 0x8a0
    lfs f31, lbl_808864A4
    addi r27, r24, 0x8ac
    addi r26, r24, 0x4cc
    addi r21, r21, lbl_80752F18@l
    li r25, 0x0
    li r31, 0x2
    lis r20, 0x5555
    lis r30, 0x8000
    li r23, 0x0
    li r22, 0x3
lbl_fn_8041766C_000018C4:
    lwz r0, 0x89c(r29)
    cmpwi r0, 0x1
    bne lbl_fn_8041766C_00001B3C
    bl fn_800F52F8
    bl fn_802F0998
    lfs f0, 0x8b0(r29)
    mr r4, r28
    addi r3, r1, 0xd0
    fadds f0, f0, f1
    stfs f0, 0x8b0(r29)
    bl fn_8001047C
    mr r4, r28
    mr r5, r27
    addi r3, r1, 0xc4
    bl fn_80013410
    addi r3, r1, 0x1f0
    bl fn_80140500
    bl fn_801404F8
    addi r4, r1, 0x1f0
    addi r5, r1, 0xd0
    addi r6, r1, 0xc4
    addi r7, r30, 0x4
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_8041766C_00001AD8
    mr r3, r28
    addi r4, r1, 0x1f4
    bl fn_8000D124
    stw r31, 0x89c(r29)
    mr r3, r26
    lfs f1, lbl_80886490
    li r4, 0x0
    lfs f2, lbl_80886494
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    lfs f1, lbl_80886490
    mr r3, r26
    li r4, 0x0
    bl fn_80139F3C
    addi r3, r1, 0xb8
    addi r4, r1, 0x1f4
    bl fn_8001047C
    addi r3, r1, 0x50
    addi r4, r1, 0x218
    bl fn_80011034
    lfs f1, lbl_80886498
    addi r3, r1, 0xac
    lfs f2, 0x54(r1)
    fmr f3, f1
    bl fn_8000D114
    lwz r3, 0x228(r1)
    li r19, 0x1
    cmpwi r3, 0x0
    beq lbl_fn_8041766C_000019C4
    bl fn_801A03F4
    cmpwi r3, 0x0
    beq lbl_fn_8041766C_000019C4
    li r19, 0x2
    b lbl_fn_8041766C_000019F0
lbl_fn_8041766C_000019C4:
    lfs f1, lbl_80886498
    addi r3, r1, 0x44
    lfs f2, lbl_80886490
    fmr f3, f1
    bl fn_8000D114
    mr r4, r3
    addi r3, r1, 0x218
    bl fn_801A03E8
    fcmpo cr0, f1, f27
    ble lbl_fn_8041766C_000019F0
    li r19, 0x0
lbl_fn_8041766C_000019F0:
    bl fn_800F7FA0
    mr r4, r26
    li r5, 0x0
    li r6, 0x1
    bl fn_80239DAC
    bl fn_800F7FA0
    mr r4, r26
    li r5, 0x1
    bl fn_800F7FA8
    mulli r19, r19, 0xc
    bl fn_800F7FA0
    add r4, r24, r19
    mr r5, r26
    addi r4, r4, 0x2444
    li r6, 0x1
    bl fn_8026607C
    bl fn_800F7FA0
    mr r4, r26
    li r5, 0x2
    bl fn_800F7FA8
    bl fn_800F7FA0
    add r4, r24, r19
    lfs f1, lbl_80886490
    addi r4, r4, 0x2468
    addi r6, r1, 0xb8
    addi r7, r1, 0xac
    li r5, 0x0
    li r8, -0x1
    li r9, -0x1
    li r10, 0x1
    bl fn_80276AE4
    bl fn_80680CF8
    addi r0, r20, 0x5556
    lfs f1, lbl_80886490
    mulhw r4, r0, r3
    mr r5, r28
    li r6, 0x0
    li r7, -0x1
    srwi r0, r4, 31
    add r0, r4, r0
    mulli r0, r0, 0x3
    subf r0, r0, r3
    addi r3, r1, 0x8
    slwi r0, r0, 2
    lwzx r4, r21, r0
    bl fn_800C344C
    bl fn_80116E64
    cmpwi r3, 0x0
    beq lbl_fn_8041766C_00001AC8
    bl fn_80116E64
    bl fn_80417E88
    addi r3, r1, 0x8
    li r4, 0x0
    bl fn_800CB688
lbl_fn_8041766C_00001AC8:
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_8041766C_00001AE4
lbl_fn_8041766C_00001AD8:
    mr r3, r28
    addi r4, r1, 0xc4
    bl fn_8000D124
lbl_fn_8041766C_00001AE4:
    mr r4, r27
    addi r3, r1, 0xa0
    bl fn_80011034
    mr r4, r28
    addi r3, r1, 0x178
    bl fn_800F80A8
    addi r3, r1, 0x178
    addi r4, r1, 0xa0
    bl fn_800F80B8
    mr r3, r26
    addi r4, r1, 0x178
    bl fn_80316E38
    addi r3, r1, 0x104
    li r4, 0x0
    bl fn_80317034
    mr r3, r26
    addi r4, r1, 0x104
    bl fn_8000D430
    addi r3, r1, 0x104
    li r4, -0x1
    bl fn_8000D3A8
    b lbl_fn_8041766C_00001C3C
lbl_fn_8041766C_00001B3C:
    cmpwi r0, 0x2
    bne lbl_fn_8041766C_00001BB8
    mr r3, r26
    li r4, 0x1
    bl fn_80097E80
    addi r3, r1, 0xf0
    li r4, 0x0
    bl fn_80317034
    mr r3, r26
    addi r4, r1, 0xf0
    bl fn_8000D430
    addi r3, r1, 0xf0
    li r4, -0x1
    bl fn_8000D3A8
    mr r3, r26
    li r4, 0x0
    bl fn_80097D7C
    fmr f28, f1
    mr r3, r26
    li r4, 0x0
    bl fn_80139550
    fcmpo cr0, f1, f28
    cror eq, gt, eq
    bne lbl_fn_8041766C_00001C3C
    bl fn_800F7FA0
    mr r4, r26
    li r5, 0x1
    li r6, 0x1
    bl fn_80239DAC
    stw r22, 0x89c(r29)
    b lbl_fn_8041766C_00001C3C
lbl_fn_8041766C_00001BB8:
    cmpwi r0, 0x3
    bne lbl_fn_8041766C_00001C3C
    mr r3, r26
    bl fn_80417F14
    mr r4, r3
    addi r3, r1, 0x90
    bl fn_800D8BB4
    lfs f0, 0x90(r1)
    fsubs f1, f0, f30
    fcmpo cr0, f29, f1
    ble lbl_fn_8041766C_00001BE8
    fmr f1, f29
lbl_fn_8041766C_00001BE8:
    lfs f0, 0x94(r1)
    stfs f1, 0x90(r1)
    fsubs f1, f0, f30
    fcmpo cr0, f29, f1
    ble lbl_fn_8041766C_00001C00
    fmr f1, f29
lbl_fn_8041766C_00001C00:
    lfs f0, 0x98(r1)
    stfs f1, 0x94(r1)
    fsubs f0, f0, f30
    fcmpo cr0, f29, f0
    ble lbl_fn_8041766C_00001C18
    fmr f0, f29
lbl_fn_8041766C_00001C18:
    stfs f0, 0x98(r1)
    mr r3, r26
    addi r4, r1, 0x90
    bl fn_80417F1C
    lfs f0, 0x90(r1)
    fcmpo cr0, f0, f31
    cror eq, lt, eq
    bne lbl_fn_8041766C_00001C3C
    stw r23, 0x89c(r29)
lbl_fn_8041766C_00001C3C:
    addi r25, r25, 0x1
    addi r28, r28, 0x3ec
    cmplwi r25, 0x8
    addi r27, r27, 0x3ec
    addi r26, r26, 0x3ec
    addi r29, r29, 0x3ec
    blt lbl_fn_8041766C_000018C4
    lwz r4, 0xf8(r24)
    lwz r3, 0xf4(r24)
    addi r4, r4, 0x1
    stw r4, 0xf8(r24)
    lwz r0, 0x28(r3)
    cmpw r4, r0
    ble lbl_fn_8041766C_00002008
    li r0, 0x0
    stw r0, 0xf8(r24)
    mr r3, r24
    bl fn_8041762C
    cmpwi r3, 0x0
    mr r25, r3
    beq lbl_fn_8041766C_00002008
    lwz r3, 0xf4(r24)
    lwz r3, 0x20(r3)
    bl fn_80219E6C
    mr r31, r3
    bl fn_80121F00
    bl fn_8013C504
    lwz r4, 0xf4(r24)
    lwz r4, 0x24(r4)
    bl fn_800EC204
    mr r26, r3
    addi r3, r1, 0x80
    bl fn_80057A64
    cmpwi r26, 0x0
    beq lbl_fn_8041766C_00001CD8
    addi r3, r1, 0x80
    addi r4, r26, 0x4
    bl fn_8000D124
    b lbl_fn_8041766C_00001D5C
lbl_fn_8041766C_00001CD8:
    addi r3, r1, 0x1a8
    bl fn_804180B0
    lwz r3, 0xf4(r24)
    lwz r0, 0x2c(r3)
    cmpwi r0, 0x2
    bne lbl_fn_8041766C_00001D04
    bl fn_801A03E0
    mr r4, r3
    addi r3, r1, 0x1a8
    bl fn_80417FF8
    b lbl_fn_8041766C_00001D14
lbl_fn_8041766C_00001D04:
    bl fn_8000D9E8
    mr r4, r3
    addi r3, r1, 0x1a8
    bl fn_80417F40
lbl_fn_8041766C_00001D14:
    addi r3, r1, 0x1a8
    bl fn_803D6EDC
    cmpwi r3, 0x0
    bne lbl_fn_8041766C_00002008
    addi r3, r1, 0x1a8
    bl fn_80372574
    mr r26, r3
    bl fn_80680CF8
    divwu r0, r3, r26
    mullw r0, r0, r26
    subf r4, r0, r3
    addi r3, r1, 0x1a8
    bl fn_804180BC
    lwz r3, 0x0(r3)
    bl fn_8013C38C
    mr r4, r3
    addi r3, r1, 0x80
    bl fn_8000D124
lbl_fn_8041766C_00001D5C:
    bl fn_80680CF8
    lis r28, 0x4178
    lis r26, 0x4330
    addi r0, r28, 0x749f
    lis r27, lbl_80752F28@ha
    mulhw r0, r0, r3
    lwz r4, 0xf4(r24)
    lfs f1, lbl_80886498
    stw r26, 0x240(r1)
    lfd f5, lbl_80752F28@l(r27)
    fmr f2, f1
    srawi r0, r0, 8
    lfs f3, lbl_808864A8
    srwi r5, r0, 31
    lfs f0, 0x40(r4)
    add r0, r0, r5
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    addi r3, r1, 0x74
    xoris r0, r0, 0x8000
    stw r0, 0x244(r1)
    lfd f4, 0x240(r1)
    fsubs f4, f4, f5
    fdivs f3, f4, f3
    fmuls f3, f0, f3
    bl fn_8000D114
    bl fn_80680CF8
    addi r0, r28, 0x749f
    stw r26, 0x248(r1)
    mulhw r0, r0, r3
    lfd f3, lbl_80752F28@l(r27)
    lfs f1, lbl_808864A8
    lfs f0, lbl_808864AC
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    addi r3, r1, 0x118
    xoris r0, r0, 0x8000
    stw r0, 0x24c(r1)
    lfd f2, 0x248(r1)
    fsubs f2, f2, f3
    fdivs f1, f2, f1
    fmuls f1, f0, f1
    bl fn_8013A13C
    addi r3, r1, 0x74
    addi r4, r1, 0x118
    bl fn_80011410
    addi r3, r1, 0x80
    addi r4, r1, 0x74
    bl fn_80012C88
    addi r3, r1, 0x68
    bl fn_80057A64
    lbz r0, 0x2(r31)
    lfs f27, 0x4c(r31)
    cmpwi r0, 0x1
    bne lbl_fn_8041766C_00001ED0
    lwz r5, 0xf4(r24)
    addi r3, r1, 0x38
    addi r4, r1, 0x80
    addi r5, r5, 0x4
    bl fn_80013338
    addi r3, r1, 0x68
    addi r4, r1, 0x38
    bl fn_8000D124
    lfs f0, lbl_80886498
    addi r3, r1, 0x68
    stfs f0, 0x6c(r1)
    bl fn_8000D3A4
    fdivs f28, f1, f27
    lwz r3, 0xf4(r24)
    lfs f0, 0x84(r1)
    lfs f1, 0x8(r3)
    fsubs f29, f1, f0
    bl fn_800F52F8
    bl fn_802F0998
    fdivs f0, f29, f28
    lfs f2, lbl_808864B0
    addi r3, r1, 0x68
    fmuls f1, f2, f1
    fmsubs f28, f28, f1, f0
    bl fn_800F7FF0
    fmr f1, f27
    addi r3, r1, 0x68
    bl fn_8012A190
    stfs f28, 0x6c(r1)
    addi r3, r1, 0x68
    bl fn_8000D3A4
    fmr f27, f1
    addi r3, r1, 0x68
    bl fn_800F7FF0
    b lbl_fn_8041766C_00001EF8
lbl_fn_8041766C_00001ED0:
    lwz r5, 0xf4(r24)
    addi r3, r1, 0x2c
    addi r4, r1, 0x80
    addi r5, r5, 0x4
    bl fn_80013338
    addi r3, r1, 0x68
    addi r4, r1, 0x2c
    bl fn_8000D124
    addi r3, r1, 0x68
    bl fn_800F7FF0
lbl_fn_8041766C_00001EF8:
    li r0, 0x1
    stw r0, 0x3d0(r25)
    addi r3, r25, 0x3d4
    lwz r4, 0xf4(r24)
    addi r4, r4, 0x4
    bl fn_8000D124
    fmr f1, f27
    addi r3, r1, 0x20
    addi r4, r1, 0x68
    bl fn_800F72CC
    addi r3, r25, 0x3e0
    addi r4, r1, 0x20
    bl fn_8000D124
    lfs f1, lbl_80886490
    mr r3, r25
    lfs f2, lbl_80886494
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    lfs f1, lbl_80886498
    mr r3, r25
    li r4, 0x0
    bl fn_80139F3C
    mr r3, r25
    li r4, 0x1
    bl fn_80097E80
    addi r3, r1, 0x5c
    addi r4, r25, 0x3e0
    bl fn_80011034
    addi r3, r1, 0x148
    addi r4, r25, 0x3d4
    bl fn_800F80A8
    addi r3, r1, 0x148
    addi r4, r1, 0x5c
    bl fn_800F80B8
    mr r3, r25
    addi r4, r1, 0x148
    bl fn_80316E38
    addi r3, r1, 0xdc
    li r4, 0x0
    bl fn_80317034
    mr r3, r25
    addi r4, r1, 0xdc
    bl fn_8000D430
    addi r3, r1, 0xdc
    li r4, -0x1
    bl fn_8000D3A8
    lfs f1, lbl_80886490
    addi r3, r1, 0x10
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_800D8814
    mr r4, r3
    mr r3, r25
    bl fn_80417F1C
    bl fn_800F7FA0
    mr r4, r25
    li r5, 0x0
    bl fn_800F7FA8
    bl fn_800F7FA0
    mr r5, r25
    addi r4, r24, 0x2438
    li r6, 0x1
    bl fn_8026607C
lbl_fn_8041766C_00002008:
    addi r11, r1, 0x290
    psq_l f31, 0x2d8(r1), 0, 0
    lfd f31, 0x2d0(r1)
    psq_l f30, 0x2c8(r1), 0, 0
    lfd f30, 0x2c0(r1)
    psq_l f29, 0x2b8(r1), 0, 0
    lfd f29, 0x2b0(r1)
    psq_l f28, 0x2a8(r1), 0, 0
    lfd f28, 0x2a0(r1)
    psq_l f27, 0x298(r1), 0, 0
    lfd f27, 0x290(r1)
    bl _restgpr_19
    lwz r0, 0x2e4(r1)
    mtlr r0
    addi r1, r1, 0x2e0
    blr
}
