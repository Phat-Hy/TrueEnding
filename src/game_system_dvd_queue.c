#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_20(void);
extern void _restgpr_25(void);
extern void _savegpr_20(void);
extern void _savegpr_25(void);
extern void fn_8000D430(void);
extern void fn_8004B378(void);
extern void fn_8004ED34(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_80097E80(void);
extern void fn_800A56A8(void);
extern void fn_8012111C(void);
extern void fn_801231D0(void);
extern void fn_80148B38(void);
extern void fn_80378D34(void);
extern void fn_8037F744(void);
extern void fn_803903E0(void);
extern void fn_80392CE0(void);
extern void fn_803933F4(void);
extern void fn_803E41AC(void);
extern void fn_803E43A4(void);
extern void fn_803EA77C(void);
extern void fn_804A5E40(void);
extern void fn_805BDCC0(void);
extern void fn_805BF1EC(void);
extern void fn_805BF208(void);
extern void fn_805BF414(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_805F99B0(void);
extern void fn_80680CF8(void);
extern void fn_8068A4A8(void);
extern void fn_8068AD58(void);
extern void fn_8068AE24(void);
extern void fn_8068AEA4(void);

/* External data declarations */
extern u8 lbl_8074DF88[];
extern u8 lbl_8074DF90[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087DCE0;
extern u32 lbl_8087DCE4;
extern u32 lbl_8087DCE8;
extern u32 lbl_8087DCEC;
extern u32 lbl_8087EE98;
extern u32 lbl_8087EF70;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F490;
extern u32 lbl_8087F498;
extern u32 lbl_8087F580;
extern u32 lbl_8087F610;
extern u32 lbl_8087F8A0;
extern u32 lbl_80885830;
extern u32 lbl_8088583C;
extern u32 lbl_80885844;
extern u32 lbl_80885848;
extern u32 lbl_8088584C;
extern u32 lbl_80885858;
extern u32 lbl_80885868;
extern u32 lbl_8088586C;
extern u32 lbl_80885870;
extern u32 lbl_80885878;
extern u32 lbl_8088587C;
extern u32 lbl_80885880;
extern u32 lbl_80885884;
extern u32 lbl_80885888;
extern u32 lbl_8088588C;
extern u32 lbl_80885890;
extern u32 lbl_80885894;
extern u32 lbl_80885898;
extern u32 lbl_8088589C;
extern u32 lbl_808858A0;
extern u32 lbl_808858A4;
extern u32 lbl_808858A8;
extern u32 lbl_808858AC;
extern u32 lbl_808858B0;
extern u32 lbl_808858B4;
extern u32 lbl_808858B8;
extern u32 lbl_808858BC;
extern u32 lbl_808858C0;
extern u32 lbl_808858C4;
extern u32 lbl_808858C8;
extern u32 lbl_808858CC;
extern u32 lbl_808858D0;
extern u32 lbl_808858D4;

/* Function declarations */
void fn_80379104(void);
void fn_803792F0(void);

asm void fn_80379104(void)
{
    nofralloc
    stwu r1, -0x170(r1)
    mflr r0
    stw r0, 0x174(r1)
    addi r11, r1, 0x110
    stfd f31, 0x160(r1)
    psq_st f31, 0x168(r1), 0, 0
    stfd f30, 0x150(r1)
    psq_st f30, 0x158(r1), 0, 0
    stfd f29, 0x140(r1)
    psq_st f29, 0x148(r1), 0, 0
    stfd f28, 0x130(r1)
    psq_st f28, 0x138(r1), 0, 0
    stfd f27, 0x120(r1)
    psq_st f27, 0x128(r1), 0, 0
    stfd f26, 0x110(r1)
    psq_st f26, 0x118(r1), 0, 0
    bl _savegpr_20
    lis r5, lbl_8074DF90@ha
    fmr f29, f1
    li r0, 0x0
    fmr f30, f2
    stw r0, 0xb4(r1)
    mr r20, r3
    lfd f31, lbl_8074DF90@l(r5)
    stw r0, 0xb8(r1)
    mr r21, r4
    lfs f27, lbl_80885868
    addi r29, r1, 0x44
    stw r0, 0xbc(r1)
    addi r28, r1, 0x38
    lfs f28, lbl_8088586C
    addi r26, r1, 0x50
    stw r0, 0xc0(r1)
    addi r27, r1, 0x14
    addi r25, r1, 0x8
    addi r24, r1, 0x2c
    addi r23, r1, 0x20
    li r22, 0x0
    lis r30, 0x4330
    lis r31, 0x8000
lbl_fn_80379104_000000A0:
    stw r22, 0xd4(r1)
    addi r3, r1, 0x50
    psq_l f1, 0x0(r21), 0, 0
    li r4, 0x79
    stw r30, 0xd0(r1)
    lfs f2, 0x8(r21)
    lfd f0, 0xd0(r1)
    psq_st f1, 0x0(r29), 0, 0
    fsubs f0, f0, f31
    psq_st f1, 0x0(r28), 0, 0
    fmuls f0, f27, f0
    stfs f2, 0x4c(r1)
    stfs f2, 0x40(r1)
    fmuls f26, f0, f28
    fadds f1, f30, f26
    bl fn_805F8E70
    fmr f1, f29
    mr r3, r20
    addi r4, r1, 0x8
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl fn_805BF414
    psq_l f1, 0x0(r25), 0, 0
    mr r3, r26
    lfs f2, 0x10(r1)
    mr r4, r27
    psq_st f1, 0x0(r27), 0, 0
    mr r5, r27
    stfs f2, 0x1c(r1)
    bl fn_805F93C0
    lfs f5, 0x38(r1)
    mr r5, r24
    lfs f4, 0x14(r1)
    mr r6, r23
    lfs f3, 0x3c(r1)
    addi r4, r1, 0x80
    fadds f5, f5, f4
    lfs f0, 0x18(r1)
    lfs f2, 0x4c(r1)
    addi r7, r31, 0x8
    fadds f4, f3, f0
    lfs f3, 0x40(r1)
    lfs f0, 0x1c(r1)
    li r8, 0x0
    psq_l f1, 0x0(r29), 0, 0
    li r9, 0x0
    fadds f0, f3, f0
    stfs f2, 0x34(r1)
    lwz r3, lbl_8087EE98
    stfs f5, 0x38(r1)
    fmr f2, f0
    stfs f4, 0x3c(r1)
    psq_st f1, 0x0(r24), 0, 0
    psq_l f1, 0x0(r28), 0, 0
    stfs f0, 0x40(r1)
    psq_st f1, 0x0(r23), 0, 0
    stfs f2, 0x28(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_80379104_000001A0
    addi r22, r22, 0x1
    cmplwi r22, 0x8
    blt lbl_fn_80379104_000000A0
lbl_fn_80379104_000001A0:
    psq_l f31, 0x168(r1), 0, 0
    fmr f1, f26
    lfd f31, 0x160(r1)
    psq_l f30, 0x158(r1), 0, 0
    lfd f30, 0x150(r1)
    psq_l f29, 0x148(r1), 0, 0
    lfd f29, 0x140(r1)
    psq_l f28, 0x138(r1), 0, 0
    lfd f28, 0x130(r1)
    psq_l f27, 0x128(r1), 0, 0
    lfd f27, 0x120(r1)
    psq_l f26, 0x118(r1), 0, 0
    lfd f26, 0x110(r1)
    addi r11, r1, 0x110
    bl _restgpr_20
    lwz r0, 0x174(r1)
    mtlr r0
    addi r1, r1, 0x170
    blr
}

asm void fn_803792F0(void)
{
    nofralloc
    stwu r1, -0xd50(r1)
    mflr r0
    stw r0, 0xd54(r1)
    li r0, 0xd48
    addi r11, r1, 0xc90
    stfd f31, 0xd40(r1)
    psq_stx f31, r1, r0, 0, 0
    li r0, 0xd38
    stfd f30, 0xd30(r1)
    psq_stx f30, r1, r0, 0, 0
    li r0, 0xd28
    stfd f29, 0xd20(r1)
    psq_stx f29, r1, r0, 0, 0
    li r0, 0xd18
    stfd f28, 0xd10(r1)
    psq_stx f28, r1, r0, 0, 0
    li r0, 0xd08
    stfd f27, 0xd00(r1)
    psq_stx f27, r1, r0, 0, 0
    li r0, 0xcf8
    stfd f26, 0xcf0(r1)
    psq_stx f26, r1, r0, 0, 0
    li r0, 0xce8
    stfd f25, 0xce0(r1)
    psq_stx f25, r1, r0, 0, 0
    li r0, 0xcd8
    stfd f24, 0xcd0(r1)
    psq_stx f24, r1, r0, 0, 0
    li r0, 0xcc8
    stfd f23, 0xcc0(r1)
    psq_stx f23, r1, r0, 0, 0
    li r0, 0xcb8
    stfd f22, 0xcb0(r1)
    psq_stx f22, r1, r0, 0, 0
    li r0, 0xca8
    stfd f21, 0xca0(r1)
    psq_stx f21, r1, r0, 0, 0
    li r0, 0xc98
    stfd f20, 0xc90(r1)
    psq_stx f20, r1, r0, 0, 0
    bl _savegpr_25
    lwz r0, 0x0(r3)
    lis r4, 0x4330
    stw r4, 0xc60(r1)
    mr r28, r3
    cmpwi r0, 0x0
    stw r4, 0xc68(r1)
    beq lbl_fn_803792F0_000034E4
    lfs f21, lbl_80885830
    lfs f0, lbl_80885848
    stfs f21, 0x50c(r1)
    stfs f0, 0x510(r1)
    stfs f21, 0x514(r1)
    lwz r4, 0x350(r3)
    lfs f31, 0x204(r3)
    cmpwi r4, 0x0
    ble lbl_fn_803792F0_00000870
    lwz r0, 0x354(r3)
    cmpw r4, r0
    bne lbl_fn_803792F0_000006AC
    lwz r6, lbl_8087F8A0
    addi r4, r1, 0x428
    lfs f13, 0x20c(r3)
    addi r5, r1, 0x41c
    lwz r6, 0x48(r6)
    addi r29, r1, 0x500
    lwz r7, 0x210(r3)
    lfs f0, 0xd4(r6)
    lfs f9, 0xc4(r6)
    lfs f2, 0xe4(r6)
    stfs f9, 0x428(r1)
    lfs f12, 0x334(r3)
    stfs f0, 0x42c(r1)
    lfs f10, 0x32c(r3)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x338(r3), 0, 0
    lfs f11, 0x330(r3)
    lfs f0, 0x33c(r3)
    stfs f2, 0x340(r3)
    fadds f9, f0, f13
    lfs f0, lbl_80885878
    stfs f2, 0x430(r1)
    stfs f9, 0x33c(r3)
    lfs f2, 0xe4(r7)
    lfs f9, 0xc4(r7)
    lfs f22, 0xd4(r7)
    stfs f9, 0x41c(r1)
    frsp f9, f2
    stfs f22, 0x420(r1)
    fsubs f22, f12, f9
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x344(r3), 0, 0
    fabs f20, f22
    lfs f12, 0x348(r3)
    lfs f9, 0x344(r3)
    fadds f12, f12, f13
    stfs f2, 0x34c(r3)
    fsubs f1, f10, f9
    stfs f12, 0x348(r3)
    frsp f10, f20
    fsubs f9, f11, f12
    stfs f2, 0x424(r1)
    fcmpo cr0, f10, f0
    stfs f1, 0x500(r1)
    stfs f9, 0x504(r1)
    stfs f22, 0x508(r1)
    bge lbl_fn_803792F0_000003B4
    fcmpo cr0, f1, f21
    ble lbl_fn_803792F0_000003A8
    lfs f0, lbl_8088587C
    b lbl_fn_803792F0_000003AC
lbl_fn_803792F0_000003A8:
    lfs f0, lbl_80885880
lbl_fn_803792F0_000003AC:
    stfs f0, 0xe4(r1)
    b lbl_fn_803792F0_000003C4
lbl_fn_803792F0_000003B4:
    fmr f2, f22
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0xe4(r1)
lbl_fn_803792F0_000003C4:
    lfs f0, 0xe4(r1)
    addi r3, r1, 0x798
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f9, lbl_80885830
    addi r4, r1, 0xec
    lfs f10, 0x7a0(r1)
    mr r5, r4
    lfs f11, 0x79c(r1)
    addi r3, r1, 0x758
    lfs f12, 0x798(r1)
    lfs f13, 0x7b0(r1)
    lfs f21, 0x7ac(r1)
    lfs f22, 0x7a8(r1)
    lfs f23, 0x7c0(r1)
    lfs f24, 0x7bc(r1)
    lfs f25, 0x7b8(r1)
    lfs f26, 0x7c4(r1)
    lfs f27, 0x7b4(r1)
    lfs f28, 0x7a4(r1)
    lfs f0, lbl_80885848
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x508(r1)
    stfs f9, 0x788(r1)
    stfs f9, 0x78c(r1)
    stfs f9, 0x790(r1)
    stfs f0, 0x794(r1)
    stfs f12, 0x11c(r1)
    stfs f11, 0x120(r1)
    stfs f10, 0x124(r1)
    stfs f12, 0x758(r1)
    stfs f11, 0x75c(r1)
    stfs f10, 0x760(r1)
    stfs f22, 0x110(r1)
    stfs f21, 0x114(r1)
    stfs f13, 0x118(r1)
    stfs f22, 0x768(r1)
    stfs f21, 0x76c(r1)
    stfs f13, 0x770(r1)
    stfs f25, 0x104(r1)
    stfs f24, 0x108(r1)
    stfs f23, 0x10c(r1)
    stfs f25, 0x778(r1)
    stfs f24, 0x77c(r1)
    stfs f23, 0x780(r1)
    stfs f28, 0xf8(r1)
    stfs f27, 0xfc(r1)
    stfs f26, 0x100(r1)
    stfs f28, 0x764(r1)
    stfs f27, 0x774(r1)
    stfs f26, 0x784(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xf4(r1)
    bl fn_805F9750
    lfs f2, 0xf4(r1)
    lfs f0, lbl_80885878
    fabs f9, f2
    frsp f9, f9
    fcmpo cr0, f9, f0
    bge lbl_fn_803792F0_000004E0
    lfs f9, 0xf0(r1)
    lfs f0, lbl_80885830
    fcmpo cr0, f9, f0
    ble lbl_fn_803792F0_000004D0
    lfs f0, lbl_8088587C
    b lbl_fn_803792F0_000004D4
lbl_fn_803792F0_000004D0:
    lfs f0, lbl_80885880
lbl_fn_803792F0_000004D4:
    fneg f0, f0
    stfs f0, 0xe0(r1)
    b lbl_fn_803792F0_000004F4
lbl_fn_803792F0_000004E0:
    lfs f1, 0xf0(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0xe0(r1)
lbl_fn_803792F0_000004F4:
    addi r3, r1, 0xe0
    lfs f2, lbl_80885830
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x508(r1)
    lfs f0, 0x200(r28)
    stfs f2, 0xe8(r1)
    stfs f2, 0x320(r28)
    stfs f2, 0x324(r28)
    stfs f0, 0x328(r28)
    bl fn_80680CF8
    lis r5, 0x4178
    lis r4, lbl_8074DF88@ha
    addi r0, r5, 0x749f
    lfd f13, lbl_8074DF88@l(r4)
    mulhw r0, r0, r3
    lfs f11, lbl_80885844
    lfs f10, lbl_80885888
    li r4, 0x79
    lfs f9, 0x504(r1)
    lfs f0, lbl_80885884
    srawi r0, r0, 8
    srwi r5, r0, 31
    add r0, r0, r5
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    addi r3, r1, 0xb28
    xoris r0, r0, 0x8000
    stw r0, 0xc64(r1)
    lfd f12, 0xc60(r1)
    fsubs f12, f12, f13
    fdivs f11, f12, f11
    fmadds f9, f10, f11, f9
    fadds f1, f0, f9
    bl fn_805F8E70
    addi r4, r28, 0x320
    addi r3, r1, 0xb28
    mr r5, r4
    bl fn_805F93C0
    lfs f9, 0x320(r28)
    lfs f0, 0x338(r28)
    lfs f11, 0x324(r28)
    fadds f12, f9, f0
    lfs f10, 0x33c(r28)
    lwz r0, 0x398(r28)
    fadds f10, f11, f10
    lfs f9, 0x328(r28)
    lfs f0, 0x340(r28)
    cmpwi r0, 0x0
    stfs f12, 0x320(r28)
    fadds f0, f9, f0
    stfs f10, 0x324(r28)
    stfs f0, 0x328(r28)
    bne lbl_fn_803792F0_000006AC
    lfs f9, lbl_80885830
    addi r4, r1, 0x500
    lfs f0, lbl_80885848
    addi r3, r1, 0xc30
    stfs f9, 0x500(r1)
    mr r5, r4
    stfs f9, 0x504(r1)
    stfs f0, 0x508(r1)
    lwz r6, 0x210(r28)
    psq_l f1, 0xb8(r6), 0, 0
    psq_l f2, 0xc0(r6), 0, 0
    psq_l f3, 0xc8(r6), 0, 0
    psq_l f4, 0xd0(r6), 0, 0
    psq_l f5, 0xd8(r6), 0, 0
    psq_l f6, 0xe0(r6), 0, 0
    psq_st f6, 0x28(r3), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    psq_st f4, 0x18(r3), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    stfs f9, 0xc3c(r1)
    stfs f9, 0xc4c(r1)
    stfs f9, 0xc5c(r1)
    bl fn_805F93C0
    lfs f9, 0x508(r1)
    lfs f0, 0x500(r1)
    fabs f10, f9
    lfs f1, lbl_80885830
    fabs f11, f0
    stfs f1, 0x504(r1)
    frsp f10, f10
    frsp f11, f11
    fcmpo cr0, f11, f10
    ble lbl_fn_803792F0_0000067C
    fcmpo cr0, f0, f1
    cror eq, gt, eq
    bne lbl_fn_803792F0_0000066C
    lfs f9, lbl_8088588C
    b lbl_fn_803792F0_00000670
lbl_fn_803792F0_0000066C:
    lfs f9, lbl_80885848
lbl_fn_803792F0_00000670:
    lfs f0, lbl_8088587C
    fmuls f1, f0, f9
    b lbl_fn_803792F0_00000688
lbl_fn_803792F0_0000067C:
    fcmpo cr0, f9, f1
    bge lbl_fn_803792F0_00000688
    lfs f1, lbl_80885868
lbl_fn_803792F0_00000688:
    lfs f0, lbl_80885888
    li r5, 0x1
    lwz r3, 0x368(r28)
    fsubs f1, f1, f0
    addi r4, r3, 0x8a4
    stfs f1, 0x39c(r28)
    bl fn_803903E0
    li r0, 0x1
    stw r0, 0x398(r28)
lbl_fn_803792F0_000006AC:
    lwz r5, 0x210(r28)
    lis r3, lbl_8074DF88@ha
    addi r4, r1, 0x410
    addi r29, r1, 0x518
    lfs f0, 0xd4(r5)
    lfs f9, 0xc4(r5)
    lfs f2, 0xe4(r5)
    stfs f9, 0x410(r1)
    lfd f21, lbl_8074DF88@l(r3)
    stfs f0, 0x414(r1)
    lfs f11, lbl_80885890
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    lfs f10, lbl_80885848
    stfs f2, 0x520(r1)
    lfs f12, 0x51c(r1)
    lfs f0, 0x20c(r28)
    lfs f9, lbl_80885868
    fadds f12, f12, f0
    lfs f0, lbl_8088583C
    stfs f2, 0x418(r1)
    stfs f12, 0x51c(r1)
    lwz r4, 0x354(r28)
    lwz r3, 0x350(r28)
    xoris r0, r4, 0x8000
    stw r0, 0xc64(r1)
    subf r0, r3, r4
    xoris r0, r0, 0x8000
    stw r0, 0xc6c(r1)
    lfd f12, 0xc60(r1)
    lfd f13, 0xc68(r1)
    fsubs f12, f12, f21
    fsubs f13, f13, f21
    fdivs f12, f13, f12
    fmsubs f10, f11, f12, f10
    fmuls f9, f9, f10
    fmuls f1, f0, f9
    bl fn_8068AD58
    lfs f0, 0x334(r28)
    frsp f11, f1
    lfs f25, 0x328(r28)
    addi r4, r1, 0x404
    lfs f10, lbl_8088583C
    addi r3, r1, 0x524
    fsubs f13, f0, f25
    fmadds f26, f10, f11, f10
    lfs f9, 0x330(r28)
    lfs f22, 0x324(r28)
    addi r6, r1, 0x3f8
    lfs f0, 0x32c(r28)
    fsubs f12, f9, f22
    lfs f21, 0x320(r28)
    fmuls f11, f13, f26
    lfs f23, 0x520(r1)
    li r5, 0x1
    fsubs f27, f0, f21
    fadds f0, f11, f25
    lfs f29, 0x51c(r1)
    fmuls f10, f12, f26
    lfs f28, 0x518(r1)
    fmuls f9, f27, f26
    fmr f2, f0
    fadds f22, f10, f22
    stfs f27, 0xd4(r1)
    fadds f21, f9, f21
    lfs f24, lbl_80885848
    stfs f22, 0x408(r1)
    lfs f25, lbl_80885888
    stfs f21, 0x404(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x52c(r1)
    lfs f21, 0x340(r28)
    lfs f22, 0x33c(r28)
    fsubs f27, f23, f21
    lfs f23, 0x338(r28)
    fsubs f30, f29, f22
    stfs f12, 0xd8(r1)
    fsubs f29, f28, f23
    fmuls f28, f27, f26
    fmuls f12, f30, f26
    stfs f13, 0xdc(r1)
    fmuls f26, f29, f26
    fadds f2, f28, f21
    stfs f9, 0xc8(r1)
    fadds f13, f12, f22
    fadds f9, f26, f23
    stfs f2, 0x520(r1)
    stfs f9, 0x3f8(r1)
    stfs f13, 0x3fc(r1)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    stfs f10, 0xcc(r1)
    lfs f10, 0x3a0(r28)
    lwz r3, 0x368(r28)
    fsubs f10, f24, f10
    lfs f9, 0x39c(r28)
    stfs f11, 0xd0(r1)
    addi r4, r3, 0x8a4
    fmadds f1, f25, f10, f9
    stfs f0, 0x40c(r1)
    stfs f29, 0xbc(r1)
    stfs f30, 0xc0(r1)
    stfs f27, 0xc4(r1)
    stfs f26, 0xb0(r1)
    stfs f12, 0xb4(r1)
    stfs f28, 0xb8(r1)
    stfs f2, 0x400(r1)
    bl fn_803903E0
    lwz r3, 0x350(r28)
    subi r0, r3, 0x1
    stw r0, 0x350(r28)
    b lbl_fn_803792F0_00002FEC
lbl_fn_803792F0_00000870:
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803792F0_000008A8
    cmpwi r0, 0x1
    beq lbl_fn_803792F0_00000AD4
    cmpwi r0, 0x2
    beq lbl_fn_803792F0_00000FC4
    cmpwi r0, 0x3
    beq lbl_fn_803792F0_00001B94
    cmpwi r0, 0x5
    beq lbl_fn_803792F0_00002004
    cmpwi r0, 0x6
    beq lbl_fn_803792F0_000028F8
    b lbl_fn_803792F0_00002FEC
lbl_fn_803792F0_000008A8:
    lwz r4, 0x358(r3)
    cmpwi r4, 0x14
    bge lbl_fn_803792F0_0000091C
    lwz r7, 0x210(r3)
    addi r5, r1, 0x3ec
    addi r4, r1, 0x518
    addi r6, r1, 0x524
    lfs f0, 0xd4(r7)
    lfs f9, 0xc4(r7)
    lfs f2, 0xe4(r7)
    stfs f9, 0x3ec(r1)
    stfs f0, 0x3f0(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x520(r1)
    lfs f9, 0x51c(r1)
    lfs f0, 0x20c(r3)
    stfs f2, 0x3f4(r1)
    fadds f0, f9, f0
    stfs f0, 0x51c(r1)
    psq_l f1, 0x10(r3), 0, 0
    lfs f2, 0x18(r3)
    stfs f2, 0x52c(r1)
    lfs f2, 0x520(r1)
    psq_st f1, 0x0(r6), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x338(r3), 0, 0
    stfs f2, 0x340(r3)
    b lbl_fn_803792F0_00000AC4
lbl_fn_803792F0_0000091C:
    cmpwi r4, 0x32
    bge lbl_fn_803792F0_00000A90
    subi r0, r4, 0x14
    lis r4, lbl_8074DF88@ha
    xoris r0, r0, 0x8000
    stw r0, 0xc6c(r1)
    lfd f10, lbl_8074DF88@l(r4)
    addi r5, r1, 0x3e0
    lfd f9, 0xc68(r1)
    addi r4, r1, 0x518
    lfs f0, lbl_80885894
    addi r29, r1, 0x524
    fsubs f9, f9, f10
    lfs f13, 0x304(r3)
    lfs f12, 0x340(r3)
    lfs f11, 0x300(r3)
    fdivs f21, f9, f0
    lfs f10, 0x33c(r3)
    lfs f9, 0x2fc(r3)
    lfs f0, 0x338(r3)
    fsubs f13, f13, f12
    fsubs f23, f11, f10
    fsubs f9, f9, f0
    stfs f13, 0xac(r1)
    fmuls f22, f13, f21
    fmuls f13, f23, f21
    stfs f9, 0xa4(r1)
    fmuls f11, f9, f21
    fadds f12, f22, f12
    stfs f23, 0xa8(r1)
    fadds f9, f13, f10
    fadds f0, f11, f0
    stfs f11, 0x98(r1)
    fmr f2, f12
    stfs f0, 0x3e0(r1)
    stfs f9, 0x3e4(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x520(r1)
    lfs f11, 0x51c(r1)
    lfs f2, 0x18(r3)
    psq_l f1, 0x10(r3), 0, 0
    addi r3, r1, 0x4f4
    psq_st f1, 0x0(r29), 0, 0
    lfs f0, 0x520(r1)
    lfs f10, 0x528(r1)
    fsubs f21, f0, f2
    lfs f9, 0x518(r1)
    lfs f0, 0x524(r1)
    fsubs f10, f11, f10
    stfs f13, 0x9c(r1)
    fsubs f0, f9, f0
    stfs f22, 0xa0(r1)
    stfs f12, 0x3e8(r1)
    stfs f2, 0x52c(r1)
    stfs f0, 0x4f4(r1)
    stfs f10, 0x4f8(r1)
    stfs f21, 0x4fc(r1)
    bl fn_805F9940
    lfs f0, lbl_80885898
    fmr f26, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_803792F0_00000AC4
    addi r3, r1, 0x4f4
    mr r4, r3
    bl fn_805F98D0
    lfs f9, lbl_80885898
    addi r3, r1, 0x3d4
    lfs f0, lbl_8088583C
    fadds f9, f9, f26
    lfs f12, 0x4f8(r1)
    lfs f11, 0x4f4(r1)
    lfs f13, 0x4fc(r1)
    fmuls f20, f0, f9
    lfs f9, 0x51c(r1)
    lfs f0, 0x518(r1)
    lfs f10, 0x520(r1)
    fmuls f12, f12, f20
    fmuls f11, f11, f20
    fmuls f13, f13, f20
    stfs f12, 0x3cc(r1)
    fsubs f9, f9, f12
    fsubs f0, f0, f11
    stfs f13, 0x3d0(r1)
    fsubs f2, f10, f13
    stfs f9, 0x3d8(r1)
    stfs f0, 0x3d4(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f11, 0x3c8(r1)
    stfs f2, 0x3dc(r1)
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x52c(r1)
    b lbl_fn_803792F0_00000AC4
lbl_fn_803792F0_00000A90:
    psq_l f1, 0x1c(r3), 0, 0
    addi r4, r1, 0x518
    lfs f2, 0x24(r3)
    addi r5, r1, 0x524
    stfs f2, 0x520(r1)
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x10(r3), 0, 0
    lfs f2, 0x18(r3)
    stfs f2, 0x52c(r1)
    psq_st f1, 0x0(r5), 0, 0
    lwz r0, 0x394(r3)
    cmpwi r0, 0x0
    bne lbl_fn_803792F0_000034E4
lbl_fn_803792F0_00000AC4:
    lwz r3, 0x358(r28)
    addi r0, r3, 0x1
    stw r0, 0x358(r28)
    b lbl_fn_803792F0_00002FEC
lbl_fn_803792F0_00000AD4:
    lwz r0, 0x358(r3)
    cmpwi r0, 0xa0
    bge lbl_fn_803792F0_00000FA8
    lwz r9, 0x210(r3)
    addi r8, r1, 0x3bc
    addi r7, r1, 0x518
    li r4, 0x0
    lfs f0, 0xd4(r9)
    li r5, 0x0
    lfs f9, 0xc4(r9)
    li r6, 0x0
    lfs f2, 0xe4(r9)
    stfs f9, 0x3bc(r1)
    stfs f0, 0x3c0(r1)
    psq_l f1, 0x0(r8), 0, 0
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0x520(r1)
    lfs f9, 0x51c(r1)
    lfs f0, 0x20c(r3)
    stfs f2, 0x3c4(r1)
    fadds f0, f9, f0
    lwz r3, lbl_8087EF70
    stfs f0, 0x51c(r1)
    bl fn_800A56A8
    fmr f28, f1
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x1
    li r6, 0x0
    bl fn_800A56A8
    lfs f2, 0x18(r28)
    fmr f29, f1
    psq_l f1, 0x10(r28), 0, 0
    addi r3, r1, 0x524
    psq_st f1, 0x0(r3), 0, 0
    addi r3, r1, 0x4e8
    lfs f0, 0x520(r1)
    lfs f11, 0x51c(r1)
    fsubs f12, f0, f2
    lfs f10, 0x528(r1)
    lfs f9, 0x518(r1)
    lfs f0, 0x524(r1)
    fsubs f10, f11, f10
    stfs f2, 0x52c(r1)
    fsubs f0, f9, f0
    stfs f10, 0x4ec(r1)
    stfs f0, 0x4e8(r1)
    stfs f12, 0x4f0(r1)
    bl fn_805F9940
    fmr f30, f1
    addi r3, r1, 0x4e8
    mr r4, r3
    bl fn_805F98D0
    lfs f2, 0x4f0(r1)
    addi r3, r1, 0x4e8
    lfs f0, lbl_80885878
    addi r29, r1, 0x4dc
    fabs f9, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    frsp f9, f9
    stfs f2, 0x4e4(r1)
    fcmpo cr0, f9, f0
    bge lbl_fn_803792F0_00000BF8
    lfs f9, 0x4dc(r1)
    lfs f0, lbl_80885830
    fcmpo cr0, f9, f0
    ble lbl_fn_803792F0_00000BEC
    lfs f0, lbl_8088587C
    b lbl_fn_803792F0_00000BF0
lbl_fn_803792F0_00000BEC:
    lfs f0, lbl_80885880
lbl_fn_803792F0_00000BF0:
    stfs f0, 0x90(r1)
    b lbl_fn_803792F0_00000C0C
lbl_fn_803792F0_00000BF8:
    frsp f2, f2
    lfs f1, 0x4dc(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x90(r1)
lbl_fn_803792F0_00000C0C:
    lfs f0, 0x90(r1)
    addi r3, r1, 0x6e8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f9, lbl_80885830
    addi r4, r1, 0x80
    lfs f20, 0x6f0(r1)
    mr r5, r4
    lfs f27, 0x6ec(r1)
    addi r3, r1, 0x718
    lfs f26, 0x6e8(r1)
    lfs f25, 0x700(r1)
    lfs f24, 0x6fc(r1)
    lfs f23, 0x6f8(r1)
    lfs f22, 0x710(r1)
    lfs f21, 0x70c(r1)
    lfs f13, 0x708(r1)
    lfs f12, 0x714(r1)
    lfs f11, 0x704(r1)
    lfs f10, 0x6f4(r1)
    lfs f0, lbl_80885848
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x4e4(r1)
    stfs f9, 0x748(r1)
    stfs f9, 0x74c(r1)
    stfs f9, 0x750(r1)
    stfs f0, 0x754(r1)
    stfs f26, 0x50(r1)
    stfs f27, 0x54(r1)
    stfs f20, 0x58(r1)
    stfs f26, 0x718(r1)
    stfs f27, 0x71c(r1)
    stfs f20, 0x720(r1)
    stfs f23, 0x5c(r1)
    stfs f24, 0x60(r1)
    stfs f25, 0x64(r1)
    stfs f23, 0x728(r1)
    stfs f24, 0x72c(r1)
    stfs f25, 0x730(r1)
    stfs f13, 0x68(r1)
    stfs f21, 0x6c(r1)
    stfs f22, 0x70(r1)
    stfs f13, 0x738(r1)
    stfs f21, 0x73c(r1)
    stfs f22, 0x740(r1)
    stfs f10, 0x74(r1)
    stfs f11, 0x78(r1)
    stfs f12, 0x7c(r1)
    stfs f10, 0x724(r1)
    stfs f11, 0x734(r1)
    stfs f12, 0x744(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x88(r1)
    bl fn_805F9750
    lfs f2, 0x88(r1)
    lfs f0, lbl_80885878
    fabs f9, f2
    frsp f9, f9
    fcmpo cr0, f9, f0
    bge lbl_fn_803792F0_00000D28
    lfs f9, 0x84(r1)
    lfs f0, lbl_80885830
    fcmpo cr0, f9, f0
    ble lbl_fn_803792F0_00000D18
    lfs f0, lbl_8088587C
    b lbl_fn_803792F0_00000D1C
lbl_fn_803792F0_00000D18:
    lfs f0, lbl_80885880
lbl_fn_803792F0_00000D1C:
    fneg f0, f0
    stfs f0, 0x8c(r1)
    b lbl_fn_803792F0_00000D3C
lbl_fn_803792F0_00000D28:
    lfs f1, 0x84(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x8c(r1)
lbl_fn_803792F0_00000D3C:
    fabs f9, f28
    lfs f2, lbl_80885830
    addi r3, r1, 0x8c
    lfs f0, lbl_8088589C
    psq_l f1, 0x0(r3), 0, 0
    frsp f9, f9
    stfs f2, 0x94(r1)
    fcmpo cr0, f9, f0
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x4e4(r1)
    ble lbl_fn_803792F0_00000D90
    lfs f0, lbl_808858A0
    fcmpo cr0, f28, f2
    fmuls f9, f9, f0
    fmuls f9, f9, f9
    ble lbl_fn_803792F0_00000D80
    b lbl_fn_803792F0_00000D84
lbl_fn_803792F0_00000D80:
    fneg f9, f9
lbl_fn_803792F0_00000D84:
    lfs f0, 0x4e0(r1)
    fadds f0, f0, f9
    stfs f0, 0x4e0(r1)
lbl_fn_803792F0_00000D90:
    fabs f9, f29
    lfs f0, lbl_8088589C
    frsp f10, f9
    fcmpo cr0, f10, f0
    ble lbl_fn_803792F0_00000DD0
    lfs f9, lbl_808858A0
    lfs f0, lbl_80885830
    fmuls f9, f10, f9
    fcmpo cr0, f29, f0
    fmuls f9, f9, f9
    ble lbl_fn_803792F0_00000DC0
    b lbl_fn_803792F0_00000DC4
lbl_fn_803792F0_00000DC0:
    fneg f9, f9
lbl_fn_803792F0_00000DC4:
    lfs f0, 0x4dc(r1)
    fadds f0, f0, f9
    stfs f0, 0x4dc(r1)
lbl_fn_803792F0_00000DD0:
    lfs f9, lbl_80885830
    addi r29, r1, 0xaf8
    lfs f1, 0x4e4(r1)
    lfs f0, lbl_80885848
    fcmpu cr0, f9, f1
    stfs f9, 0x4e8(r1)
    stfs f9, 0x4ec(r1)
    stfs f0, 0x4f0(r1)
    stfs f9, 0xb24(r1)
    stfs f9, 0xb1c(r1)
    stfs f9, 0xb18(r1)
    stfs f9, 0xb14(r1)
    stfs f9, 0xb10(r1)
    stfs f9, 0xb08(r1)
    stfs f9, 0xb04(r1)
    stfs f9, 0xb00(r1)
    stfs f9, 0xafc(r1)
    stfs f0, 0xb20(r1)
    stfs f0, 0xb0c(r1)
    stfs f0, 0xaf8(r1)
    beq lbl_fn_803792F0_00000E74
    addi r3, r1, 0x5f8
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0x5f8
    addi r5, r1, 0x5c8
    bl fn_805F89F0
    addi r3, r1, 0x5c8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
lbl_fn_803792F0_00000E74:
    lfs f0, lbl_80885830
    lfs f1, 0x4e0(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_803792F0_00000ED4
    addi r3, r1, 0x658
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0x658
    addi r5, r1, 0x628
    bl fn_805F89F0
    addi r3, r1, 0x628
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
lbl_fn_803792F0_00000ED4:
    lfs f0, lbl_80885830
    lfs f1, 0x4dc(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_803792F0_00000F34
    addi r3, r1, 0x6b8
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0x6b8
    addi r5, r1, 0x688
    bl fn_805F89F0
    addi r3, r1, 0x688
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
lbl_fn_803792F0_00000F34:
    addi r4, r1, 0x4e8
    addi r3, r1, 0xaf8
    mr r5, r4
    bl fn_805F93C0
    fneg f11, f30
    lfs f10, 0x4f0(r1)
    lfs f9, 0x4ec(r1)
    addi r4, r1, 0x3b0
    lfs f0, 0x4e8(r1)
    addi r3, r1, 0x524
    fmuls f12, f10, f11
    lfs f10, 0x520(r1)
    fmuls f13, f9, f11
    lfs f9, 0x51c(r1)
    fmuls f11, f0, f11
    lfs f0, 0x518(r1)
    fadds f9, f13, f9
    stfs f11, 0x3a4(r1)
    fadds f2, f12, f10
    fadds f0, f11, f0
    stfs f9, 0x3b4(r1)
    stfs f0, 0x3b0(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f13, 0x3a8(r1)
    stfs f12, 0x3ac(r1)
    stfs f2, 0x3b8(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x52c(r1)
    b lbl_fn_803792F0_00000FB4
lbl_fn_803792F0_00000FA8:
    lwz r0, 0x394(r3)
    cmpwi r0, 0x0
    bne lbl_fn_803792F0_000034E4
lbl_fn_803792F0_00000FB4:
    lwz r3, 0x358(r28)
    addi r0, r3, 0x1
    stw r0, 0x358(r28)
    b lbl_fn_803792F0_00002FEC
lbl_fn_803792F0_00000FC4:
    lwz r0, 0x35c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803792F0_000013F0
    psq_l f1, 0x10(r3), 0, 0
    addi r5, r1, 0x4d0
    lfs f2, 0x18(r3)
    mr r3, r0
    stfs f2, 0x4d8(r1)
    li r4, 0x0
    psq_st f1, 0x0(r5), 0, 0
    bl fn_805BDCC0
    lwz r0, 0x358(r28)
    lis r4, lbl_8074DF88@ha
    lfd f9, lbl_8074DF88@l(r4)
    mr r31, r3
    xoris r0, r0, 0x8000
    stw r0, 0xc64(r1)
    lfs f26, 0x14(r3)
    lfd f0, 0xc60(r1)
    fsubs f0, f0, f9
    fcmpo cr0, f0, f26
    ble lbl_fn_803792F0_00001020
    b lbl_fn_803792F0_0000102C
lbl_fn_803792F0_00001020:
    stw r0, 0xc6c(r1)
    lfd f0, 0xc68(r1)
    fsubs f26, f0, f9
lbl_fn_803792F0_0000102C:
    lwz r0, 0x3b4(r28)
    cmpwi r0, 0x0
    beq lbl_fn_803792F0_00001054
    lfs f1, lbl_808858A4
    mr r3, r31
    lfs f2, 0x318(r28)
    addi r4, r28, 0x308
    bl fn_80379104
    fmr f30, f1
    b lbl_fn_803792F0_00001058
lbl_fn_803792F0_00001054:
    lfs f30, lbl_80885830
lbl_fn_803792F0_00001058:
    psq_l f1, 0x308(r28), 0, 0
    addi r5, r1, 0x518
    lfs f2, 0x310(r28)
    addi r6, r1, 0x524
    stfs f2, 0x520(r1)
    addi r3, r1, 0xac8
    li r4, 0x79
    psq_st f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x52c(r1)
    lfs f0, 0x318(r28)
    fadds f1, f0, f30
    bl fn_805F8E70
    fmr f1, f26
    mr r3, r31
    addi r29, r1, 0xac8
    addi r4, r1, 0x38c
    li r5, 0x7
    li r6, 0x8
    li r7, 0x9
    bl fn_805BF414
    addi r3, r1, 0x38c
    addi r4, r1, 0x398
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r29
    lfs f2, 0x394(r1)
    mr r5, r4
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x3a0(r1)
    bl fn_805F93C0
    lfs f9, 0x518(r1)
    addi r3, r1, 0xa98
    lfs f0, 0x398(r1)
    li r4, 0x79
    lfs f11, 0x51c(r1)
    fadds f12, f9, f0
    lfs f10, 0x39c(r1)
    lfs f9, 0x520(r1)
    lfs f0, 0x3a0(r1)
    fadds f10, f11, f10
    stfs f12, 0x518(r1)
    fadds f0, f9, f0
    stfs f10, 0x51c(r1)
    stfs f0, 0x520(r1)
    lfs f0, 0x318(r28)
    fadds f1, f0, f30
    bl fn_805F8E70
    fmr f1, f26
    mr r3, r31
    addi r29, r1, 0xa98
    addi r4, r1, 0x374
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl fn_805BF414
    addi r3, r1, 0x374
    addi r4, r1, 0x380
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r29
    lfs f2, 0x37c(r1)
    mr r5, r4
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x388(r1)
    bl fn_805F93C0
    lfs f9, 0x524(r1)
    mr r3, r31
    lfs f0, 0x380(r1)
    li r4, 0x0
    lfs f11, 0x528(r1)
    fadds f12, f9, f0
    lfs f10, 0x384(r1)
    lfs f9, 0x52c(r1)
    lfs f0, 0x388(r1)
    fadds f10, f11, f10
    stfs f12, 0x524(r1)
    fadds f0, f9, f0
    stfs f10, 0x528(r1)
    stfs f0, 0x52c(r1)
    bl fn_805BF1EC
    cmpwi r3, 0x0
    beq lbl_fn_803792F0_000011DC
    fmr f1, f26
    mr r3, r31
    li r4, 0x0
    bl fn_805BF208
    lfs f9, lbl_808858A8
    lfs f0, lbl_8088583C
    fmuls f9, f9, f1
    lfs f20, 0x5c(r28)
    fmuls f1, f0, f9
    bl fn_8068AE24
    frsp f0, f1
    fdivs f1, f0, f20
    bl fn_8068A4A8
    frsp f9, f1
    lfs f0, lbl_80885890
    fmuls f31, f0, f9
lbl_fn_803792F0_000011DC:
    lfs f0, lbl_808858AC
    fcmpo cr0, f26, f0
    ble lbl_fn_803792F0_00001264
    lwz r3, 0x210(r28)
    lwz r3, 0x638(r3)
    cmpwi r3, 0x0
    beq lbl_fn_803792F0_00001264
    lwz r0, 0x4(r3)
    cmpwi r0, 0x179a
    bne lbl_fn_803792F0_00001264
    fsubs f9, f26, f0
    lfs f0, lbl_8088586C
    lfs f20, lbl_80885848
    fmuls f0, f9, f0
    fcmpo cr0, f20, f0
    bge lbl_fn_803792F0_00001220
    b lbl_fn_803792F0_00001224
lbl_fn_803792F0_00001220:
    fmr f20, f0
lbl_fn_803792F0_00001224:
    lfs f0, lbl_8087DCE4
    lfs f13, lbl_8087DCE0
    lfs f11, lbl_80885890
    fsubs f12, f0, f13
    lfs f10, 0x528(r1)
    lfs f9, lbl_808858B0
    fmadds f10, f11, f20, f10
    lfs f0, 0x51c(r1)
    fmadds f11, f20, f12, f13
    fmadds f0, f9, f20, f0
    stfs f10, 0x528(r1)
    lwz r3, lbl_8087EFA8
    stfs f0, 0x51c(r1)
    fmuls f31, f31, f11
    lfs f0, lbl_8088583C
    stfs f0, 0x3a4(r3)
lbl_fn_803792F0_00001264:
    lfs f12, lbl_80885830
    addi r3, r1, 0x524
    lfs f11, lbl_808858A4
    addi r4, r1, 0x368
    lfs f10, 0x310(r28)
    addi r5, r1, 0x4d0
    lfs f9, 0x30c(r28)
    lfs f0, 0x308(r28)
    fadds f10, f10, f12
    fadds f9, f9, f11
    stfs f12, 0x35c(r1)
    fadds f0, f0, f12
    stfs f9, 0x36c(r1)
    stfs f0, 0x368(r1)
    stfs f10, 0x370(r1)
    lwz r6, 0x358(r28)
    stfs f11, 0x360(r1)
    neg r0, r6
    andc r0, r0, r6
    stfs f12, 0x364(r1)
    srwi r6, r0, 31
    bl fn_80378D34
    fmr f1, f26
    mr r3, r31
    addi r4, r1, 0x350
    li r5, 0x4
    li r6, 0x5
    li r7, 0x6
    bl fn_805BF414
    lfs f9, 0x358(r1)
    addi r3, r1, 0xa68
    lfs f0, lbl_808858A8
    li r4, 0x7a
    fmuls f1, f0, f9
    bl fn_805F8E70
    addi r4, r1, 0x50c
    addi r3, r1, 0xa68
    mr r5, r4
    bl fn_805F93C0
    lwz r4, 0x360(r28)
    cmpwi r4, 0x0
    beq lbl_fn_803792F0_0000133C
    lwz r0, 0x358(r28)
    lis r3, lbl_8074DF88@ha
    lfs f11, 0x14(r31)
    xoris r0, r0, 0x8000
    stw r0, 0xc64(r1)
    lfs f0, lbl_80885894
    lfd f10, lbl_8074DF88@l(r3)
    lfd f9, 0xc60(r1)
    fsubs f0, f11, f0
    fsubs f9, f9, f10
    fcmpo cr0, f9, f0
    bgt lbl_fn_803792F0_0000136C
lbl_fn_803792F0_0000133C:
    cmpwi r4, 0x0
    bne lbl_fn_803792F0_00001B84
    lwz r0, 0x358(r28)
    lis r3, lbl_8074DF88@ha
    lfd f9, lbl_8074DF88@l(r3)
    xoris r0, r0, 0x8000
    stw r0, 0xc6c(r1)
    lfs f10, 0x14(r31)
    lfd f0, 0xc68(r1)
    fsubs f0, f0, f9
    fcmpo cr0, f0, f10
    ble lbl_fn_803792F0_00001B84
lbl_fn_803792F0_0000136C:
    lwz r3, 0x210(r28)
    lwz r3, 0x638(r3)
    cmpwi r3, 0x0
    beq lbl_fn_803792F0_00001394
    lwz r0, 0x4(r3)
    cmpwi r0, 0x179a
    bne lbl_fn_803792F0_00001394
    lwz r3, lbl_8087EFA8
    lfs f0, lbl_80885848
    stfs f0, 0x3a4(r3)
lbl_fn_803792F0_00001394:
    lwz r0, 0x360(r28)
    cmpwi r0, 0x0
    beq lbl_fn_803792F0_000013B4
    li r3, 0x0
    li r0, -0x1
    stw r3, 0x35c(r28)
    stw r0, 0x358(r28)
    b lbl_fn_803792F0_00001B84
lbl_fn_803792F0_000013B4:
    lwz r0, 0x394(r28)
    li r29, 0x0
    lfs f0, lbl_80885830
    cmpwi r0, 0x0
    stw r29, 0x0(r28)
    stw r29, 0x35c(r28)
    stw r29, 0x360(r28)
    stfs f0, 0x3ac(r28)
    stfs f0, 0x3b0(r28)
    beq lbl_fn_803792F0_00001B84
    lwz r3, 0x368(r28)
    addi r4, r28, 0x36c
    bl fn_80392CE0
    stw r29, 0x394(r28)
    b lbl_fn_803792F0_00001B84
lbl_fn_803792F0_000013F0:
    lwz r0, 0x360(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803792F0_00001B84
    psq_l f1, 0x10(r3), 0, 0
    addi r5, r1, 0x4c4
    lfs f2, 0x18(r3)
    mr r3, r0
    stfs f2, 0x4cc(r1)
    li r4, 0x0
    psq_st f1, 0x0(r5), 0, 0
    bl fn_805BDCC0
    lwz r0, 0x358(r28)
    lis r4, lbl_8074DF88@ha
    lfd f9, lbl_8074DF88@l(r4)
    mr r31, r3
    xoris r0, r0, 0x8000
    stw r0, 0xc64(r1)
    lfs f26, 0x14(r3)
    lfd f0, 0xc60(r1)
    fsubs f0, f0, f9
    fcmpo cr0, f0, f26
    ble lbl_fn_803792F0_0000144C
    b lbl_fn_803792F0_00001458
lbl_fn_803792F0_0000144C:
    stw r0, 0xc6c(r1)
    lfd f0, 0xc68(r1)
    fsubs f26, f0, f9
lbl_fn_803792F0_00001458:
    lfs f11, lbl_80885830
    mr r3, r31
    lfs f1, lbl_808858A4
    addi r4, r1, 0x344
    lfs f10, 0x304(r28)
    lfs f9, 0x300(r28)
    lfs f0, 0x2fc(r28)
    fadds f10, f10, f11
    fadds f12, f9, f1
    lfs f9, lbl_80885868
    fadds f0, f0, f11
    stfs f10, 0x34c(r1)
    stfs f0, 0x344(r1)
    stfs f12, 0x348(r1)
    lfs f0, 0x318(r28)
    stfs f11, 0x338(r1)
    fadds f2, f9, f0
    stfs f1, 0x33c(r1)
    stfs f11, 0x340(r1)
    bl fn_80379104
    lfs f0, lbl_8088583C
    fmr f30, f1
    fmuls f1, f0, f1
    bl fn_8068AD58
    lwz r3, 0x210(r28)
    frsp f9, f1
    lfs f0, lbl_808858B4
    lwz r3, 0x638(r3)
    fmuls f27, f0, f9
    cmpwi r3, 0x0
    beq lbl_fn_803792F0_00001524
    lwz r0, 0x4(r3)
    cmpwi r0, 0x179a
    bne lbl_fn_803792F0_00001524
    lwz r0, 0x358(r28)
    lis r3, lbl_8074DF88@ha
    lfd f10, lbl_8074DF88@l(r3)
    xoris r0, r0, 0x8000
    stw r0, 0xc64(r1)
    lfs f9, lbl_808858B8
    lfd f0, 0xc60(r1)
    lfs f26, 0x14(r31)
    fsubs f0, f0, f10
    fmuls f0, f9, f0
    fcmpo cr0, f26, f0
    bge lbl_fn_803792F0_00001514
    b lbl_fn_803792F0_00001524
lbl_fn_803792F0_00001514:
    stw r0, 0xc6c(r1)
    lfd f0, 0xc68(r1)
    fsubs f0, f0, f10
    fmuls f26, f9, f0
lbl_fn_803792F0_00001524:
    psq_l f1, 0x2fc(r28), 0, 0
    addi r5, r1, 0x518
    lfs f2, 0x304(r28)
    addi r6, r1, 0x524
    stfs f2, 0x520(r1)
    addi r3, r1, 0xa38
    lfs f9, lbl_80885868
    li r4, 0x79
    psq_st f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x52c(r1)
    lfs f0, 0x318(r28)
    fadds f0, f9, f0
    fadds f1, f30, f0
    bl fn_805F8E70
    fmr f1, f26
    mr r3, r31
    addi r29, r1, 0xa38
    addi r4, r1, 0x320
    li r5, 0x7
    li r6, 0x8
    li r7, 0x9
    bl fn_805BF414
    addi r3, r1, 0x320
    addi r4, r1, 0x32c
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r29
    lfs f2, 0x328(r1)
    mr r5, r4
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x334(r1)
    bl fn_805F93C0
    lfs f9, 0x518(r1)
    addi r3, r1, 0xa08
    lfs f0, 0x32c(r1)
    li r4, 0x79
    lfs f11, 0x51c(r1)
    fadds f12, f9, f0
    lfs f10, 0x330(r1)
    lfs f9, 0x520(r1)
    lfs f0, 0x334(r1)
    fadds f10, f11, f10
    stfs f12, 0x518(r1)
    fadds f0, f9, f0
    lfs f9, lbl_80885868
    stfs f10, 0x51c(r1)
    stfs f0, 0x520(r1)
    lfs f0, 0x318(r28)
    fadds f0, f9, f0
    fadds f1, f30, f0
    bl fn_805F8E70
    fmr f1, f26
    mr r3, r31
    addi r29, r1, 0xa08
    addi r4, r1, 0x308
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl fn_805BF414
    addi r3, r1, 0x308
    addi r4, r1, 0x314
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r29
    lfs f2, 0x310(r1)
    mr r5, r4
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x31c(r1)
    bl fn_805F93C0
    lfs f10, 0x524(r1)
    mr r3, r31
    lfs f9, 0x314(r1)
    li r4, 0x0
    lfs f11, 0x528(r1)
    fadds f13, f10, f9
    lfs f0, 0x318(r1)
    lfs f10, 0x52c(r1)
    fadds f12, f11, f0
    lfs f9, 0x31c(r1)
    lfs f0, 0x518(r1)
    fadds f11, f10, f9
    stfs f13, 0x524(r1)
    lfs f10, 0x520(r1)
    fsubs f20, f0, f13
    stfs f12, 0x528(r1)
    fsubs f10, f10, f11
    stfs f11, 0x52c(r1)
    lfs f9, lbl_80885830
    lfs f0, 0x3ac(r28)
    stfs f20, 0x4b8(r1)
    fadds f0, f0, f27
    stfs f10, 0x4c0(r1)
    fmuls f10, f10, f0
    stfs f9, 0x4bc(r1)
    fmuls f21, f9, f0
    fmuls f20, f20, f0
    stfs f10, 0x304(r1)
    fsubs f0, f11, f10
    fsubs f9, f12, f21
    stfs f20, 0x2fc(r1)
    fsubs f10, f13, f20
    stfs f21, 0x300(r1)
    stfs f10, 0x524(r1)
    stfs f9, 0x528(r1)
    stfs f0, 0x52c(r1)
    bl fn_805BF1EC
    cmpwi r3, 0x0
    beq lbl_fn_803792F0_00001710
    fmr f1, f26
    mr r3, r31
    li r4, 0x0
    bl fn_805BF208
    lfs f9, lbl_808858A8
    lfs f0, lbl_8088583C
    fmuls f9, f9, f1
    lfs f20, 0x5c(r28)
    fmuls f1, f0, f9
    bl fn_8068AE24
    frsp f0, f1
    fdivs f1, f0, f20
    bl fn_8068A4A8
    frsp f9, f1
    lfs f0, lbl_80885890
    fmuls f31, f0, f9
lbl_fn_803792F0_00001710:
    lwz r3, 0x210(r28)
    lwz r3, 0x638(r3)
    cmpwi r3, 0x0
    beq lbl_fn_803792F0_00001734
    lwz r0, 0x4(r3)
    cmpwi r0, 0x179a
    bne lbl_fn_803792F0_00001734
    lfs f0, lbl_808858BC
    fmuls f31, f31, f0
lbl_fn_803792F0_00001734:
    lfs f12, lbl_80885830
    addi r3, r1, 0x524
    lfs f11, lbl_808858A4
    addi r4, r1, 0x2f0
    lfs f10, 0x304(r28)
    addi r5, r1, 0x4c4
    lfs f9, 0x300(r28)
    lfs f0, 0x2fc(r28)
    fadds f10, f10, f12
    fadds f9, f9, f11
    stfs f12, 0x2e4(r1)
    fadds f0, f0, f12
    stfs f9, 0x2f4(r1)
    stfs f0, 0x2f0(r1)
    stfs f10, 0x2f8(r1)
    lwz r6, 0x358(r28)
    stfs f11, 0x2e8(r1)
    neg r0, r6
    andc r0, r0, r6
    stfs f12, 0x2ec(r1)
    srwi r6, r0, 31
    bl fn_80378D34
    fmr f1, f26
    mr r3, r31
    addi r4, r1, 0x2d8
    li r5, 0x4
    li r6, 0x5
    li r7, 0x6
    bl fn_805BF414
    lfs f9, 0x2e0(r1)
    addi r3, r1, 0x9d8
    lfs f0, lbl_808858A8
    li r4, 0x7a
    fmuls f1, f0, f9
    bl fn_805F8E70
    addi r4, r1, 0x50c
    addi r3, r1, 0x9d8
    mr r5, r4
    bl fn_805F93C0
    lfs f9, lbl_80885868
    addi r3, r1, 0x9a8
    lfs f0, 0x318(r28)
    li r4, 0x79
    fadds f1, f9, f0
    bl fn_805F8E70
    addi r4, r1, 0x50c
    addi r3, r1, 0x9a8
    mr r5, r4
    bl fn_805F93C0
    lwz r3, 0x368(r28)
    addi r4, r3, 0x900
    lwz r0, 0x904(r3)
    lwz r3, 0x900(r3)
    cmpw r3, r0
    bge lbl_fn_803792F0_00001A6C
    addi r3, r1, 0x4ac
    bl fn_803933F4
    lfs f9, 0x520(r1)
    addi r3, r1, 0x4a0
    lfs f0, 0x52c(r1)
    lfs f11, 0x51c(r1)
    fsubs f12, f9, f0
    lfs f10, 0x528(r1)
    lfs f9, 0x518(r1)
    lfs f0, 0x524(r1)
    fsubs f10, f11, f10
    stfs f12, 0x4a8(r1)
    fsubs f0, f9, f0
    stfs f10, 0x4a4(r1)
    stfs f0, 0x4a0(r1)
    bl fn_805F9920
    fabs f9, f1
    lfs f0, lbl_80885878
    frsp f9, f9
    fcmpo cr0, f9, f0
    blt lbl_fn_803792F0_00001870
    addi r3, r1, 0x4a0
    mr r4, r3
    bl fn_805F98D0
lbl_fn_803792F0_00001870:
    lfs f2, 0x4a8(r1)
    addi r3, r1, 0x4a0
    lfs f0, lbl_80885878
    addi r29, r1, 0x2cc
    fabs f9, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    frsp f9, f9
    stfs f2, 0x2d4(r1)
    fcmpo cr0, f9, f0
    bge lbl_fn_803792F0_000018C0
    lfs f9, 0x2cc(r1)
    lfs f0, lbl_80885830
    fcmpo cr0, f9, f0
    ble lbl_fn_803792F0_000018B4
    lfs f0, lbl_8088587C
    b lbl_fn_803792F0_000018B8
lbl_fn_803792F0_000018B4:
    lfs f0, lbl_80885880
lbl_fn_803792F0_000018B8:
    stfs f0, 0x48(r1)
    b lbl_fn_803792F0_000018D4
lbl_fn_803792F0_000018C0:
    frsp f2, f2
    lfs f1, 0x2cc(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_803792F0_000018D4:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x558
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f9, lbl_80885830
    addi r4, r1, 0x38
    lfs f27, 0x560(r1)
    mr r5, r4
    lfs f26, 0x55c(r1)
    addi r3, r1, 0x588
    lfs f25, 0x558(r1)
    lfs f24, 0x570(r1)
    lfs f23, 0x56c(r1)
    lfs f22, 0x568(r1)
    lfs f21, 0x580(r1)
    lfs f20, 0x57c(r1)
    lfs f13, 0x578(r1)
    lfs f12, 0x584(r1)
    lfs f11, 0x574(r1)
    lfs f10, 0x564(r1)
    lfs f0, lbl_80885848
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x2d4(r1)
    stfs f9, 0x5b8(r1)
    stfs f9, 0x5bc(r1)
    stfs f9, 0x5c0(r1)
    stfs f0, 0x5c4(r1)
    stfs f25, 0x8(r1)
    stfs f26, 0xc(r1)
    stfs f27, 0x10(r1)
    stfs f25, 0x588(r1)
    stfs f26, 0x58c(r1)
    stfs f27, 0x590(r1)
    stfs f22, 0x14(r1)
    stfs f23, 0x18(r1)
    stfs f24, 0x1c(r1)
    stfs f22, 0x598(r1)
    stfs f23, 0x59c(r1)
    stfs f24, 0x5a0(r1)
    stfs f13, 0x20(r1)
    stfs f20, 0x24(r1)
    stfs f21, 0x28(r1)
    stfs f13, 0x5a8(r1)
    stfs f20, 0x5ac(r1)
    stfs f21, 0x5b0(r1)
    stfs f10, 0x2c(r1)
    stfs f11, 0x30(r1)
    stfs f12, 0x34(r1)
    stfs f10, 0x594(r1)
    stfs f11, 0x5a4(r1)
    stfs f12, 0x5b4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80885878
    fabs f9, f2
    frsp f9, f9
    fcmpo cr0, f9, f0
    bge lbl_fn_803792F0_000019F0
    lfs f9, 0x3c(r1)
    lfs f0, lbl_80885830
    fcmpo cr0, f9, f0
    ble lbl_fn_803792F0_000019E0
    lfs f0, lbl_8088587C
    b lbl_fn_803792F0_000019E4
lbl_fn_803792F0_000019E0:
    lfs f0, lbl_80885880
lbl_fn_803792F0_000019E4:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_803792F0_00001A04
lbl_fn_803792F0_000019F0:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_803792F0_00001A04:
    addi r3, r1, 0x44
    lfs f2, lbl_80885830
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x978
    psq_st f1, 0x0(r29), 0, 0
    li r4, 0x79
    lfs f1, 0x2d0(r1)
    stfs f2, 0x4c(r1)
    stfs f2, 0x2d4(r1)
    bl fn_805F8E70
    addi r4, r1, 0x4ac
    addi r3, r1, 0x978
    mr r5, r4
    bl fn_805F93C0
    lfs f9, 0x518(r1)
    lfs f0, 0x4ac(r1)
    lfs f11, 0x51c(r1)
    fadds f12, f9, f0
    lfs f10, 0x4b0(r1)
    lfs f9, 0x520(r1)
    lfs f0, 0x4b4(r1)
    fadds f10, f11, f10
    stfs f12, 0x518(r1)
    fadds f0, f9, f0
    stfs f10, 0x51c(r1)
    stfs f0, 0x520(r1)
lbl_fn_803792F0_00001A6C:
    lwz r3, 0x210(r28)
    lwz r3, 0x638(r3)
    cmpwi r3, 0x0
    beq lbl_fn_803792F0_00001B0C
    lwz r0, 0x4(r3)
    cmpwi r0, 0x179a
    bne lbl_fn_803792F0_00001B0C
    lwz r0, 0x358(r28)
    lis r3, lbl_8074DF88@ha
    lfd f10, lbl_8074DF88@l(r3)
    xoris r0, r0, 0x8000
    stw r0, 0xc64(r1)
    lfs f0, lbl_808858B8
    lfd f9, 0xc60(r1)
    lfs f11, 0x14(r31)
    fsubs f9, f9, f10
    fmuls f0, f0, f9
    fcmpo cr0, f0, f11
    ble lbl_fn_803792F0_00001B84
    stw r0, 0xc6c(r1)
    lfs f0, 0x3b0(r28)
    lfd f9, 0xc68(r1)
    fsubs f9, f9, f10
    fcmpo cr0, f9, f0
    ble lbl_fn_803792F0_00001B84
    lwz r0, 0x394(r28)
    li r29, 0x0
    lfs f0, lbl_80885830
    cmpwi r0, 0x0
    stw r29, 0x0(r28)
    stw r29, 0x35c(r28)
    stw r29, 0x360(r28)
    stfs f0, 0x3ac(r28)
    stfs f0, 0x3b0(r28)
    beq lbl_fn_803792F0_00001B84
    lwz r3, 0x368(r28)
    addi r4, r28, 0x36c
    bl fn_80392CE0
    stw r29, 0x394(r28)
    b lbl_fn_803792F0_00001B84
lbl_fn_803792F0_00001B0C:
    lwz r0, 0x358(r28)
    lis r3, lbl_8074DF88@ha
    lfd f10, lbl_8074DF88@l(r3)
    xoris r0, r0, 0x8000
    stw r0, 0xc64(r1)
    lfs f9, 0x14(r31)
    lfd f0, 0xc60(r1)
    fsubs f0, f0, f10
    fcmpo cr0, f0, f9
    ble lbl_fn_803792F0_00001B84
    stw r0, 0xc6c(r1)
    lfs f0, 0x3b0(r28)
    lfd f9, 0xc68(r1)
    fsubs f9, f9, f10
    fcmpo cr0, f9, f0
    ble lbl_fn_803792F0_00001B84
    lwz r0, 0x394(r28)
    li r29, 0x0
    lfs f0, lbl_80885830
    cmpwi r0, 0x0
    stw r29, 0x0(r28)
    stw r29, 0x35c(r28)
    stw r29, 0x360(r28)
    stfs f0, 0x3ac(r28)
    stfs f0, 0x3b0(r28)
    beq lbl_fn_803792F0_00001B84
    lwz r3, 0x368(r28)
    addi r4, r28, 0x36c
    bl fn_80392CE0
    stw r29, 0x394(r28)
lbl_fn_803792F0_00001B84:
    lwz r3, 0x358(r28)
    addi r0, r3, 0x1
    stw r0, 0x358(r28)
    b lbl_fn_803792F0_00002FEC
lbl_fn_803792F0_00001B94:
    lwz r0, 0x35c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803792F0_00001FF4
    psq_l f1, 0x10(r3), 0, 0
    addi r5, r1, 0x494
    lfs f2, 0x18(r3)
    mr r3, r0
    stfs f2, 0x49c(r1)
    li r4, 0x0
    psq_st f1, 0x0(r5), 0, 0
    bl fn_805BDCC0
    lwz r0, 0x358(r28)
    lis r4, lbl_8074DF88@ha
    lfd f9, lbl_8074DF88@l(r4)
    mr r31, r3
    xoris r0, r0, 0x8000
    stw r0, 0xc64(r1)
    lfs f27, 0x14(r3)
    lfd f0, 0xc60(r1)
    fsubs f0, f0, f9
    fcmpo cr0, f0, f27
    ble lbl_fn_803792F0_00001BF0
    b lbl_fn_803792F0_00001BFC
lbl_fn_803792F0_00001BF0:
    stw r0, 0xc6c(r1)
    lfd f0, 0xc68(r1)
    fsubs f27, f0, f9
lbl_fn_803792F0_00001BFC:
    lfs f0, lbl_808858C0
    fcmpo cr0, f27, f0
    cror eq, gt, eq
    bne lbl_fn_803792F0_00001C3C
    lwz r4, 0x210(r28)
    cmpwi r4, 0x0
    beq lbl_fn_803792F0_00001C20
    addi r4, r4, 0x528
    b lbl_fn_803792F0_00001C24
lbl_fn_803792F0_00001C20:
    addi r4, r28, 0x308
lbl_fn_803792F0_00001C24:
    lfs f1, 0x14(r3)
    mr r3, r31
    lfs f2, 0x318(r28)
    bl fn_80379104
    fmr f26, f1
    b lbl_fn_803792F0_00001C68
lbl_fn_803792F0_00001C3C:
    lwz r3, 0x210(r28)
    cmpwi r3, 0x0
    beq lbl_fn_803792F0_00001C50
    addi r4, r3, 0x528
    b lbl_fn_803792F0_00001C54
lbl_fn_803792F0_00001C50:
    addi r4, r28, 0x308
lbl_fn_803792F0_00001C54:
    lfs f1, lbl_808858A4
    mr r3, r31
    lfs f2, 0x318(r28)
    bl fn_80379104
    fmr f26, f1
lbl_fn_803792F0_00001C68:
    lwz r3, 0x210(r28)
    cmpwi r3, 0x0
    beq lbl_fn_803792F0_00001C7C
    addi r4, r3, 0x528
    b lbl_fn_803792F0_00001C80
lbl_fn_803792F0_00001C7C:
    addi r4, r28, 0x308
lbl_fn_803792F0_00001C80:
    psq_l f1, 0x0(r4), 0, 0
    addi r3, r1, 0x518
    lfs f2, 0x8(r4)
    stfs f2, 0x520(r1)
    psq_st f1, 0x0(r3), 0, 0
    lwz r3, 0x210(r28)
    cmpwi r3, 0x0
    beq lbl_fn_803792F0_00001CA8
    addi r3, r3, 0x528
    b lbl_fn_803792F0_00001CAC
lbl_fn_803792F0_00001CA8:
    addi r3, r28, 0x308
lbl_fn_803792F0_00001CAC:
    psq_l f1, 0x0(r3), 0, 0
    addi r5, r1, 0x524
    lfs f2, 0x8(r3)
    addi r3, r1, 0x948
    stfs f2, 0x52c(r1)
    li r4, 0x79
    psq_st f1, 0x0(r5), 0, 0
    lfs f0, 0x318(r28)
    fadds f1, f0, f26
    bl fn_805F8E70
    fmr f1, f27
    mr r3, r31
    addi r29, r1, 0x948
    addi r4, r1, 0x2b4
    li r5, 0x7
    li r6, 0x8
    li r7, 0x9
    bl fn_805BF414
    addi r3, r1, 0x2b4
    addi r4, r1, 0x2c0
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r29
    lfs f2, 0x2bc(r1)
    mr r5, r4
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x2c8(r1)
    bl fn_805F93C0
    lfs f9, 0x518(r1)
    addi r3, r1, 0x918
    lfs f0, 0x2c0(r1)
    li r4, 0x79
    lfs f11, 0x51c(r1)
    fadds f12, f9, f0
    lfs f10, 0x2c4(r1)
    lfs f9, 0x520(r1)
    lfs f0, 0x2c8(r1)
    fadds f10, f11, f10
    stfs f12, 0x518(r1)
    fadds f0, f9, f0
    stfs f10, 0x51c(r1)
    stfs f0, 0x520(r1)
    lfs f0, 0x318(r28)
    fadds f1, f0, f26
    bl fn_805F8E70
    fmr f1, f27
    mr r3, r31
    addi r29, r1, 0x918
    addi r4, r1, 0x29c
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl fn_805BF414
    addi r3, r1, 0x29c
    addi r4, r1, 0x2a8
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r29
    lfs f2, 0x2a4(r1)
    mr r5, r4
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x2b0(r1)
    bl fn_805F93C0
    lfs f0, lbl_808858C0
    lfs f12, 0x524(r1)
    lfs f9, 0x2a8(r1)
    fcmpo cr0, f27, f0
    lfs f11, 0x528(r1)
    fadds f12, f12, f9
    lfs f10, 0x2ac(r1)
    lfs f9, 0x52c(r1)
    fadds f11, f11, f10
    lfs f0, 0x2b0(r1)
    stfs f12, 0x524(r1)
    fadds f10, f9, f0
    stfs f11, 0x528(r1)
    stfs f10, 0x52c(r1)
    cror eq, gt, eq
    bne lbl_fn_803792F0_00001E34
    lfs f9, 0x520(r1)
    lfs f0, 0x518(r1)
    fsubs f13, f9, f10
    lfs f9, lbl_80885830
    fsubs f0, f0, f12
    lfs f20, 0x3ac(r28)
    stfs f13, 0x490(r1)
    fmuls f13, f13, f20
    fmuls f21, f9, f20
    stfs f9, 0x48c(r1)
    fmuls f20, f0, f20
    stfs f0, 0x488(r1)
    fsubs f0, f10, f13
    fsubs f9, f11, f21
    fsubs f10, f12, f20
    stfs f20, 0x290(r1)
    stfs f21, 0x294(r1)
    stfs f13, 0x298(r1)
    stfs f10, 0x524(r1)
    stfs f9, 0x528(r1)
    stfs f0, 0x52c(r1)
lbl_fn_803792F0_00001E34:
    mr r3, r31
    li r4, 0x0
    bl fn_805BF1EC
    cmpwi r3, 0x0
    beq lbl_fn_803792F0_00001E88
    fmr f1, f27
    mr r3, r31
    li r4, 0x0
    bl fn_805BF208
    lfs f9, lbl_808858A8
    lfs f0, lbl_8088583C
    fmuls f9, f9, f1
    lfs f20, 0x5c(r28)
    fmuls f1, f0, f9
    bl fn_8068AE24
    frsp f0, f1
    fdivs f1, f0, f20
    bl fn_8068A4A8
    frsp f9, f1
    lfs f0, lbl_80885890
    fmuls f31, f0, f9
lbl_fn_803792F0_00001E88:
    lfs f0, lbl_808858C0
    fcmpo cr0, f27, f0
    bge lbl_fn_803792F0_00001ED4
    lfs f0, lbl_808858AC
    fcmpo cr0, f27, f0
    ble lbl_fn_803792F0_00001ED4
    fsubs f9, f27, f0
    lfs f0, lbl_808858A4
    lfs f10, lbl_80885848
    fdivs f0, f9, f0
    fcmpo cr0, f10, f0
    bge lbl_fn_803792F0_00001EBC
    b lbl_fn_803792F0_00001EC0
lbl_fn_803792F0_00001EBC:
    fmr f10, f0
lbl_fn_803792F0_00001EC0:
    lfs f0, lbl_8087DCEC
    lfs f9, lbl_8087DCE8
    fsubs f0, f0, f9
    fmadds f0, f10, f0, f9
    fmuls f31, f31, f0
lbl_fn_803792F0_00001ED4:
    lwz r3, 0x210(r28)
    lfs f9, lbl_80885830
    lfs f0, lbl_808858A4
    cmpwi r3, 0x0
    stfs f9, 0x278(r1)
    stfs f0, 0x27c(r1)
    stfs f9, 0x280(r1)
    beq lbl_fn_803792F0_00001EFC
    addi r6, r3, 0x528
    b lbl_fn_803792F0_00001F00
lbl_fn_803792F0_00001EFC:
    addi r6, r28, 0x308
lbl_fn_803792F0_00001F00:
    lfs f9, 0x8(r6)
    addi r3, r1, 0x524
    lfs f0, 0x280(r1)
    addi r4, r1, 0x284
    lfs f11, 0x4(r6)
    addi r5, r1, 0x494
    fadds f12, f9, f0
    lfs f10, 0x27c(r1)
    lfs f9, 0x0(r6)
    lfs f0, 0x278(r1)
    fadds f10, f11, f10
    stfs f12, 0x28c(r1)
    fadds f0, f9, f0
    stfs f10, 0x288(r1)
    stfs f0, 0x284(r1)
    lwz r6, 0x358(r28)
    neg r0, r6
    andc r0, r0, r6
    srwi r6, r0, 31
    bl fn_80378D34
    fmr f1, f27
    mr r3, r31
    addi r4, r1, 0x26c
    li r5, 0x4
    li r6, 0x5
    li r7, 0x6
    bl fn_805BF414
    lfs f9, 0x274(r1)
    addi r3, r1, 0x8e8
    lfs f0, lbl_808858A8
    li r4, 0x7a
    fmuls f1, f0, f9
    bl fn_805F8E70
    addi r4, r1, 0x50c
    addi r3, r1, 0x8e8
    mr r5, r4
    bl fn_805F93C0
    lwz r0, 0x358(r28)
    lis r3, lbl_8074DF88@ha
    lfd f9, lbl_8074DF88@l(r3)
    xoris r0, r0, 0x8000
    stw r0, 0xc64(r1)
    lfs f10, 0x14(r31)
    lfd f0, 0xc60(r1)
    fsubs f0, f0, f9
    fcmpo cr0, f0, f10
    ble lbl_fn_803792F0_00001FF4
    lwz r0, 0x394(r28)
    li r29, 0x0
    lfs f0, lbl_80885830
    cmpwi r0, 0x0
    stw r29, 0x0(r28)
    stw r29, 0x35c(r28)
    stw r29, 0x360(r28)
    stfs f0, 0x3ac(r28)
    stfs f0, 0x3b0(r28)
    beq lbl_fn_803792F0_00001FF4
    lwz r3, 0x368(r28)
    addi r4, r28, 0x36c
    bl fn_80392CE0
    stw r29, 0x394(r28)
lbl_fn_803792F0_00001FF4:
    lwz r3, 0x358(r28)
    addi r0, r3, 0x1
    stw r0, 0x358(r28)
    b lbl_fn_803792F0_00002FEC
lbl_fn_803792F0_00002004:
    lwz r31, 0x3a4(r3)
    addi r5, r1, 0x47c
    psq_l f1, 0x10(r3), 0, 0
    addi r7, r1, 0x470
    lfs f2, 0x18(r3)
    addi r8, r1, 0x464
    stfs f2, 0x484(r1)
    li r4, 0x0
    psq_st f1, 0x0(r5), 0, 0
    lwz r0, 0x2f8(r3)
    slwi r0, r0, 5
    add r6, r3, r0
    lwz r0, 0x234(r6)
    psq_l f1, 0x21c(r6), 0, 0
    lfs f2, 0x224(r6)
    mulli r5, r0, 0x1e
    stfs f2, 0x478(r1)
    psq_st f1, 0x0(r7), 0, 0
    addi r30, r5, 0x78
    psq_l f1, 0x228(r6), 0, 0
    lfs f2, 0x230(r6)
    psq_st f1, 0x0(r8), 0, 0
    lwz r3, 0x35c(r3)
    stfs f2, 0x46c(r1)
    bl fn_805BDCC0
    lwz r0, 0x2f8(r28)
    mr r29, r3
    lfs f26, 0x14(r3)
    slwi r0, r0, 5
    add r3, r28, r0
    lwz r0, 0x234(r3)
    cmpwi r0, 0x0
    ble lbl_fn_803792F0_000020B0
    lwz r0, 0x358(r28)
    lis r3, lbl_8074DF88@ha
    lfd f10, lbl_8074DF88@l(r3)
    xoris r0, r0, 0x8000
    stw r0, 0xc6c(r1)
    lfs f0, lbl_808858C4
    lfd f9, 0xc68(r1)
    fsubs f9, f9, f10
    fmuls f0, f0, f9
    b lbl_fn_803792F0_000020CC
lbl_fn_803792F0_000020B0:
    lwz r0, 0x358(r28)
    lis r3, lbl_8074DF88@ha
    lfd f9, lbl_8074DF88@l(r3)
    xoris r0, r0, 0x8000
    stw r0, 0xc64(r1)
    lfd f0, 0xc60(r1)
    fsubs f0, f0, f9
lbl_fn_803792F0_000020CC:
    fcmpo cr0, f0, f26
    ble lbl_fn_803792F0_000020D8
    b lbl_fn_803792F0_000020DC
lbl_fn_803792F0_000020D8:
    fmr f26, f0
lbl_fn_803792F0_000020DC:
    addi r27, r1, 0x470
    lfs f0, 0x468(r1)
    addi r3, r1, 0x518
    psq_l f1, 0x0(r27), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    fmr f1, f0
    lfs f2, 0x478(r1)
    addi r3, r1, 0x8b8
    stfs f2, 0x520(r1)
    li r4, 0x79
    bl fn_805F8E70
    fmr f1, f26
    mr r3, r29
    addi r26, r1, 0x8b8
    addi r4, r1, 0x254
    li r5, 0x7
    li r6, 0x8
    li r7, 0x9
    bl fn_805BF414
    addi r3, r1, 0x254
    addi r4, r1, 0x260
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r26
    lfs f2, 0x25c(r1)
    mr r5, r4
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x268(r1)
    bl fn_805F93C0
    lfs f9, 0x518(r1)
    addi r26, r1, 0x524
    lfs f0, 0x260(r1)
    addi r3, r1, 0x888
    lfs f11, 0x51c(r1)
    li r4, 0x79
    fadds f12, f9, f0
    lfs f10, 0x264(r1)
    psq_l f1, 0x0(r27), 0, 0
    fadds f10, f11, f10
    lfs f2, 0x478(r1)
    lfs f9, 0x520(r1)
    lfs f0, 0x268(r1)
    lfs f11, 0x468(r1)
    fadds f0, f9, f0
    psq_st f1, 0x0(r26), 0, 0
    fmr f1, f11
    stfs f12, 0x518(r1)
    stfs f10, 0x51c(r1)
    stfs f0, 0x520(r1)
    stfs f2, 0x52c(r1)
    bl fn_805F8E70
    fmr f1, f26
    mr r3, r29
    addi r25, r1, 0x888
    addi r4, r1, 0x23c
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl fn_805BF414
    addi r3, r1, 0x23c
    addi r4, r1, 0x248
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r25
    lfs f2, 0x244(r1)
    mr r5, r4
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x250(r1)
    bl fn_805F93C0
    lfs f9, 0x524(r1)
    fmr f1, f26
    lfs f0, 0x248(r1)
    mr r3, r29
    lfs f11, 0x528(r1)
    addi r4, r1, 0x230
    fadds f12, f9, f0
    lfs f10, 0x24c(r1)
    li r5, 0x4
    lfs f9, 0x52c(r1)
    li r6, 0x5
    lfs f0, 0x250(r1)
    fadds f10, f11, f10
    stfs f12, 0x524(r1)
    fadds f0, f9, f0
    li r7, 0x6
    stfs f10, 0x528(r1)
    stfs f0, 0x52c(r1)
    bl fn_805BF414
    lfs f1, 0x238(r1)
    addi r3, r1, 0x858
    li r4, 0x7a
    bl fn_805F8E70
    addi r4, r1, 0x50c
    addi r3, r1, 0x858
    mr r5, r4
    bl fn_805F93C0
    lfs f9, 0x520(r1)
    addi r25, r1, 0x218
    lfs f0, 0x52c(r1)
    addi r29, r1, 0x458
    lfs f10, 0x518(r1)
    mr r3, r25
    fsubs f2, f9, f0
    lfs f9, 0x524(r1)
    lfs f0, lbl_80885830
    mr r4, r25
    fsubs f9, f10, f9
    stfs f0, 0x45c(r1)
    stfs f9, 0x458(r1)
    psq_l f1, 0x0(r29), 0, 0
    stfs f2, 0x460(r1)
    psq_st f1, 0x0(r25), 0, 0
    stfs f2, 0x220(r1)
    bl fn_805F98D0
    mr r3, r25
    addi r4, r1, 0x50c
    addi r5, r1, 0x224
    bl fn_805F99B0
    lwz r4, 0x358(r28)
    addi r3, r1, 0x224
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r26
    neg r0, r4
    lfs f2, 0x22c(r1)
    andc r0, r0, r4
    psq_st f1, 0x0(r29), 0, 0
    mr r4, r27
    addi r5, r1, 0x47c
    stfs f2, 0x460(r1)
    srwi r6, r0, 31
    bl fn_80378D34
    lwz r3, 0x358(r28)
    cmpwi r3, 0x3
    bge lbl_fn_803792F0_00002400
    subfic r0, r3, 0x3
    lis r3, lbl_8074DF88@ha
    xoris r0, r0, 0x8000
    stw r0, 0xc6c(r1)
    li r0, 0x1
    lfd f10, lbl_8074DF88@l(r3)
    lfd f9, 0xc68(r1)
    lfs f0, lbl_80885870
    fsubs f9, f9, f10
    lfs f26, 0x460(r1)
    lfs f13, 0x45c(r1)
    lfs f12, 0x458(r1)
    fdivs f22, f9, f0
    lfs f11, lbl_80885858
    lfs f10, 0x518(r1)
    lfs f9, 0x51c(r1)
    lfs f0, 0x520(r1)
    lwz r7, lbl_8087EFA8
    fmuls f13, f13, f22
    stw r0, 0xc0c(r1)
    fmuls f20, f26, f22
    fmuls f12, f12, f22
    stfs f13, 0x1f8(r1)
    fmuls f21, f13, f22
    stfs f20, 0x1fc(r1)
    fmuls f20, f20, f22
    fmuls f13, f21, f11
    stfs f12, 0x1f4(r1)
    fmuls f12, f12, f22
    fmuls f22, f20, f11
    stfs f21, 0x204(r1)
    fsubs f9, f9, f13
    fmuls f23, f12, f11
    stfs f12, 0x200(r1)
    fsubs f0, f0, f22
    stfs f9, 0x51c(r1)
    fsubs f10, f10, f23
    stfs f0, 0x520(r1)
    stfs f10, 0x518(r1)
    lwz r6, 0x244(r7)
    lwz r5, 0x248(r7)
    lfs f11, 0x24c(r7)
    lfs f10, 0x250(r7)
    lwz r4, 0x254(r7)
    lwz r3, 0x258(r7)
    lfs f9, 0x25c(r7)
    lfs f0, 0x260(r7)
    stfs f20, 0x208(r1)
    stw r0, 0x240(r7)
    stw r6, 0x244(r7)
    stw r5, 0x248(r7)
    stfs f11, 0x24c(r7)
    stfs f10, 0x250(r7)
    stw r4, 0x254(r7)
    stw r3, 0x258(r7)
    stfs f9, 0x25c(r7)
    stfs f23, 0x20c(r1)
    stfs f13, 0x210(r1)
    stfs f22, 0x214(r1)
    stw r6, 0xc10(r1)
    stw r5, 0xc14(r1)
    stfs f11, 0xc18(r1)
    stfs f10, 0xc1c(r1)
    stw r4, 0xc20(r1)
    stw r3, 0xc24(r1)
    stfs f9, 0xc28(r1)
    stfs f0, 0xc2c(r1)
    stfs f0, 0x260(r7)
    b lbl_fn_803792F0_000025B0
lbl_fn_803792F0_00002400:
    subi r0, r30, 0x5
    cmpw r3, r0
    ble lbl_fn_803792F0_00002520
    subf r0, r0, r3
    lis r3, lbl_8074DF88@ha
    xoris r0, r0, 0x8000
    stw r0, 0xc64(r1)
    li r0, 0x1
    lfd f10, lbl_8074DF88@l(r3)
    lfd f9, 0xc60(r1)
    lfs f0, lbl_808858A4
    fsubs f9, f9, f10
    lfs f26, 0x460(r1)
    lfs f13, 0x45c(r1)
    lfs f12, 0x458(r1)
    fdivs f22, f9, f0
    lfs f11, lbl_808858C8
    lfs f10, 0x518(r1)
    lfs f9, 0x51c(r1)
    lfs f0, 0x520(r1)
    lwz r7, lbl_8087EFA8
    fmuls f13, f13, f22
    stw r0, 0xbe8(r1)
    fmuls f20, f26, f22
    fmuls f12, f12, f22
    stfs f13, 0x1d4(r1)
    fmuls f21, f13, f22
    stfs f20, 0x1d8(r1)
    fmuls f20, f20, f22
    fmuls f13, f21, f11
    stfs f12, 0x1d0(r1)
    fmuls f12, f12, f22
    fmuls f22, f20, f11
    stfs f21, 0x1e0(r1)
    fadds f9, f9, f13
    fmuls f23, f12, f11
    stfs f12, 0x1dc(r1)
    fadds f0, f0, f22
    stfs f9, 0x51c(r1)
    fadds f10, f10, f23
    stfs f0, 0x520(r1)
    stfs f10, 0x518(r1)
    lwz r6, 0x244(r7)
    lwz r5, 0x248(r7)
    lfs f11, 0x24c(r7)
    lfs f10, 0x250(r7)
    lwz r4, 0x254(r7)
    lwz r3, 0x258(r7)
    lfs f9, 0x25c(r7)
    lfs f0, 0x260(r7)
    stfs f20, 0x1e4(r1)
    stw r0, 0x240(r7)
    stw r6, 0x244(r7)
    stw r5, 0x248(r7)
    stfs f11, 0x24c(r7)
    stfs f10, 0x250(r7)
    stw r4, 0x254(r7)
    stw r3, 0x258(r7)
    stfs f9, 0x25c(r7)
    stfs f23, 0x1e8(r1)
    stfs f13, 0x1ec(r1)
    stfs f22, 0x1f0(r1)
    stw r6, 0xbec(r1)
    stw r5, 0xbf0(r1)
    stfs f11, 0xbf4(r1)
    stfs f10, 0xbf8(r1)
    stw r4, 0xbfc(r1)
    stw r3, 0xc00(r1)
    stfs f9, 0xc04(r1)
    stfs f0, 0xc08(r1)
    stfs f0, 0x260(r7)
    b lbl_fn_803792F0_000025B0
lbl_fn_803792F0_00002520:
    lwz r7, lbl_8087EFA8
    li r0, 0x0
    stw r0, 0xbc4(r1)
    lwz r6, 0x244(r7)
    lwz r5, 0x248(r7)
    lfs f11, 0x24c(r7)
    lfs f10, 0x250(r7)
    lwz r4, 0x254(r7)
    lwz r3, 0x258(r7)
    lfs f9, 0x25c(r7)
    lfs f0, 0x260(r7)
    stw r6, 0xbc8(r1)
    stw r0, 0x240(r7)
    stw r6, 0x244(r7)
    stw r5, 0x248(r7)
    stfs f11, 0x24c(r7)
    stfs f10, 0x250(r7)
    stw r4, 0x254(r7)
    stw r3, 0x258(r7)
    stfs f9, 0x25c(r7)
    stfs f0, 0x260(r7)
    lwz r0, 0x3a4(r28)
    stw r5, 0xbcc(r1)
    cmpwi r0, 0x0
    stfs f11, 0xbd0(r1)
    stfs f10, 0xbd4(r1)
    stw r4, 0xbd8(r1)
    stw r3, 0xbdc(r1)
    stfs f9, 0xbe0(r1)
    stfs f0, 0xbe4(r1)
    bne lbl_fn_803792F0_000025B0
    li r0, 0x1
    stw r0, 0x3a4(r28)
    lwz r4, 0x210(r28)
    lwz r3, lbl_8087F490
    bl fn_803E41AC
lbl_fn_803792F0_000025B0:
    lwz r3, 0x210(r28)
    li r4, 0x0
    stw r3, 0x3a8(r28)
    addi r3, r3, 0xb0
    lfs f20, 0x234(r3)
    bl fn_80097D7C
    fcmpo cr0, f20, f1
    cror eq, gt, eq
    bne lbl_fn_803792F0_000026A0
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    beq lbl_fn_803792F0_0000260C
    lwz r3, 0x3a8(r28)
    li r4, 0x0
    lfs f1, lbl_80885830
    li r6, 0x1
    lwz r5, 0x484(r3)
    addi r3, r3, 0xb0
    lfs f2, lbl_8088584C
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_803792F0_000026A0
lbl_fn_803792F0_0000260C:
    lwz r4, 0x3a8(r28)
    lwz r3, 0x5c(r4)
    lwz r0, 0x11c(r3)
    cmpwi r0, 0x2
    bne lbl_fn_803792F0_00002648
    lfs f1, lbl_80885848
    addi r3, r4, 0xb0
    lfs f2, lbl_8088584C
    li r4, 0x0
    li r5, 0x4
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_803792F0_000026A0
lbl_fn_803792F0_00002648:
    lwz r0, 0x50(r4)
    cmpwi r0, 0x1
    bne lbl_fn_803792F0_0000267C
    lfs f1, lbl_80885848
    addi r3, r4, 0xb0
    lfs f2, lbl_8088584C
    li r4, 0x0
    li r5, 0x5
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_803792F0_000026A0
lbl_fn_803792F0_0000267C:
    lfs f1, lbl_80885848
    addi r3, r4, 0xb0
    lfs f2, lbl_8088584C
    li r4, 0x0
    li r5, 0x3
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
lbl_fn_803792F0_000026A0:
    lwz r3, 0x3a8(r28)
    addi r3, r3, 0x1220
    bl fn_8012111C
    lwz r3, 0x3a8(r28)
    li r4, 0x1
    lfs f0, lbl_80885848
    stfs f0, 0x2e8(r3)
    lwz r3, 0x3a8(r28)
    addi r3, r3, 0xb0
    bl fn_80097E80
    li r0, 0x0
    stw r0, 0x544(r1)
    addi r4, r1, 0x544
    lwz r3, 0x3a8(r28)
    addi r3, r3, 0xb0
    bl fn_8000D430
    addic. r3, r1, 0x544
    beq lbl_fn_803792F0_0000271C
    lwz r4, 0x544(r1)
    cmpwi r4, 0x0
    beq lbl_fn_803792F0_0000271C
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_803792F0_00002714
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_803792F0_00002714:
    li r0, 0x0
    stw r0, 0x544(r1)
lbl_fn_803792F0_0000271C:
    lwz r3, 0x3a8(r28)
    lfs f1, lbl_808858C8
    bl fn_80148B38
    cmpwi r31, 0x0
    bne lbl_fn_803792F0_00002760
    lwz r0, 0x3a4(r28)
    cmpwi r0, 0x0
    beq lbl_fn_803792F0_00002760
    lwz r3, lbl_8087F498
    cmpwi r3, 0x0
    beq lbl_fn_803792F0_00002760
    lwz r4, 0x3a8(r28)
    li r5, 0x28
    lfs f1, lbl_80885848
    li r6, 0xf
    lfs f2, lbl_808858C8
    bl fn_803EA77C
lbl_fn_803792F0_00002760:
    lwz r3, 0x358(r28)
    cmpw r3, r30
    ble lbl_fn_803792F0_000027E0
    lwz r3, 0x2f8(r28)
    lwz r4, 0x214(r28)
    addi r0, r3, 0x1
    stw r0, 0x2f8(r28)
    cmpw r0, r4
    blt lbl_fn_803792F0_000027C0
    lwz r0, 0x394(r28)
    li r29, 0x0
    lfs f0, lbl_80885830
    cmpwi r0, 0x0
    stw r29, 0x0(r28)
    stw r29, 0x35c(r28)
    stw r29, 0x360(r28)
    stfs f0, 0x3ac(r28)
    stfs f0, 0x3b0(r28)
    beq lbl_fn_803792F0_00002FEC
    lwz r3, 0x368(r28)
    addi r4, r28, 0x36c
    bl fn_80392CE0
    stw r29, 0x394(r28)
    b lbl_fn_803792F0_00002FEC
lbl_fn_803792F0_000027C0:
    slwi r0, r0, 5
    li r4, 0x0
    stw r4, 0x358(r28)
    add r3, r28, r0
    lwz r0, 0x218(r3)
    stw r0, 0x210(r28)
    stw r4, 0x3a4(r28)
    b lbl_fn_803792F0_00002FEC
lbl_fn_803792F0_000027E0:
    addi r3, r3, 0x1
    stw r3, 0x358(r28)
    cmpwi r3, 0x3
    blt lbl_fn_803792F0_00002840
    subi r0, r30, 0x5
    cmpw r3, r0
    bge lbl_fn_803792F0_00002840
    lwz r0, 0x2f8(r28)
    slwi r0, r0, 5
    add r3, r28, r0
    lwz r0, 0x234(r3)
    cmpwi r0, 0x0
    bgt lbl_fn_803792F0_00002840
    lwz r3, lbl_8087F0A8
    li r4, 0x0
    addi r3, r3, 0x48c
    bl fn_801231D0
    cmpwi r3, 0x0
    beq lbl_fn_803792F0_00002840
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    bne lbl_fn_803792F0_00002840
    subi r0, r30, 0x5
    stw r0, 0x358(r28)
lbl_fn_803792F0_00002840:
    lwz r3, lbl_8087F490
    bl fn_803E43A4
    cmpwi r3, 0x0
    beq lbl_fn_803792F0_00002FEC
    lwz r3, 0x358(r28)
    subi r0, r30, 0x5
    cmpw r3, r0
    bne lbl_fn_803792F0_000028E4
    lwz r3, lbl_8087F490
    bl fn_803E43A4
    cmpwi r3, 0x0
    beq lbl_fn_803792F0_00002FEC
    lwz r3, lbl_8087F0A8
    li r4, 0x0
    addi r3, r3, 0x48c
    bl fn_801231D0
    cmpwi r3, 0x0
    bne lbl_fn_803792F0_00002894
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    beq lbl_fn_803792F0_000028A0
lbl_fn_803792F0_00002894:
    subi r0, r30, 0x5
    stw r0, 0x358(r28)
    b lbl_fn_803792F0_00002FEC
lbl_fn_803792F0_000028A0:
    subi r0, r30, 0x6
    stw r0, 0x358(r28)
    lis r3, lbl_807C7030@ha
    addi r5, r1, 0x1c4
    lwz r6, lbl_8087F490
    li r0, 0x1
    addi r3, r3, lbl_807C7030@l
    li r4, 0xe
    stw r0, 0x112c(r6)
    li r6, 0x0
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x8(r3)
    psq_st f1, 0x0(r5), 0, 0
    lwz r3, lbl_8087F580
    stfs f2, 0x1cc(r1)
    bl fn_804A5E40
    b lbl_fn_803792F0_00002FEC
lbl_fn_803792F0_000028E4:
    bge lbl_fn_803792F0_00002FEC
    lwz r3, lbl_8087F490
    li r0, 0x1
    stw r0, 0x112c(r3)
    b lbl_fn_803792F0_00002FEC
lbl_fn_803792F0_000028F8:
    lwz r0, 0x2f8(r3)
    addi r6, r1, 0x44c
    addi r7, r1, 0x440
    lwz r29, 0x3a4(r3)
    slwi r0, r0, 5
    li r4, 0x0
    add r5, r3, r0
    lwz r3, 0x35c(r3)
    psq_l f1, 0x21c(r5), 0, 0
    lfs f2, 0x224(r5)
    psq_st f1, 0x0(r6), 0, 0
    psq_l f1, 0x228(r5), 0, 0
    stfs f2, 0x454(r1)
    lfs f2, 0x230(r5)
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0x448(r1)
    bl fn_805BDCC0
    lwz r0, 0x358(r28)
    lis r4, lbl_8074DF88@ha
    lfd f10, lbl_8074DF88@l(r4)
    mr r27, r3
    xoris r0, r0, 0x8000
    stw r0, 0xc6c(r1)
    lfs f0, lbl_808858B8
    lfd f9, 0xc68(r1)
    lfs f27, 0x14(r3)
    fsubs f9, f9, f10
    fmuls f0, f0, f9
    fcmpo cr0, f0, f27
    ble lbl_fn_803792F0_00002974
    b lbl_fn_803792F0_00002978
lbl_fn_803792F0_00002974:
    fmr f27, f0
lbl_fn_803792F0_00002978:
    addi r25, r1, 0x44c
    lfs f0, 0x444(r1)
    addi r3, r1, 0x518
    psq_l f1, 0x0(r25), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    fmr f1, f0
    lfs f2, 0x454(r1)
    addi r3, r1, 0x828
    stfs f2, 0x520(r1)
    li r4, 0x79
    bl fn_805F8E70
    fmr f1, f27
    mr r3, r27
    addi r26, r1, 0x828
    addi r4, r1, 0x1ac
    li r5, 0x7
    li r6, 0x8
    li r7, 0x9
    bl fn_805BF414
    addi r3, r1, 0x1ac
    addi r4, r1, 0x1b8
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r26
    lfs f2, 0x1b4(r1)
    mr r5, r4
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x1c0(r1)
    bl fn_805F93C0
    lfs f9, 0x518(r1)
    addi r5, r1, 0x524
    lfs f0, 0x1b8(r1)
    addi r3, r1, 0x7f8
    lfs f11, 0x51c(r1)
    li r4, 0x79
    fadds f12, f9, f0
    lfs f10, 0x1bc(r1)
    psq_l f1, 0x0(r25), 0, 0
    fadds f10, f11, f10
    lfs f2, 0x454(r1)
    lfs f9, 0x520(r1)
    lfs f0, 0x1c0(r1)
    lfs f11, 0x444(r1)
    fadds f0, f9, f0
    psq_st f1, 0x0(r5), 0, 0
    fmr f1, f11
    stfs f12, 0x518(r1)
    stfs f10, 0x51c(r1)
    stfs f0, 0x520(r1)
    stfs f2, 0x52c(r1)
    bl fn_805F8E70
    fmr f1, f27
    mr r3, r27
    addi r25, r1, 0x7f8
    addi r4, r1, 0x194
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl fn_805BF414
    addi r3, r1, 0x194
    addi r4, r1, 0x1a0
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r25
    lfs f2, 0x19c(r1)
    mr r5, r4
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x1a8(r1)
    bl fn_805F93C0
    lfs f9, 0x524(r1)
    fmr f1, f27
    lfs f0, 0x1a0(r1)
    mr r3, r27
    lfs f11, 0x528(r1)
    addi r4, r1, 0x188
    fadds f12, f9, f0
    lfs f10, 0x1a4(r1)
    li r5, 0x4
    lfs f9, 0x52c(r1)
    li r6, 0x5
    lfs f0, 0x1a8(r1)
    fadds f10, f11, f10
    stfs f12, 0x524(r1)
    fadds f0, f9, f0
    li r7, 0x6
    stfs f10, 0x528(r1)
    stfs f0, 0x52c(r1)
    bl fn_805BF414
    lfs f1, 0x190(r1)
    addi r3, r1, 0x7c8
    li r4, 0x7a
    bl fn_805F8E70
    addi r4, r1, 0x50c
    addi r3, r1, 0x7c8
    mr r5, r4
    bl fn_805F93C0
    lfs f9, 0x520(r1)
    addi r25, r1, 0x170
    lfs f0, 0x52c(r1)
    addi r26, r1, 0x434
    lfs f10, 0x518(r1)
    mr r3, r25
    fsubs f2, f9, f0
    lfs f9, 0x524(r1)
    lfs f0, lbl_80885830
    mr r4, r25
    fsubs f9, f10, f9
    stfs f0, 0x438(r1)
    stfs f9, 0x434(r1)
    psq_l f1, 0x0(r26), 0, 0
    stfs f2, 0x43c(r1)
    psq_st f1, 0x0(r25), 0, 0
    stfs f2, 0x178(r1)
    bl fn_805F98D0
    mr r3, r25
    addi r4, r1, 0x50c
    addi r5, r1, 0x17c
    bl fn_805F99B0
    addi r3, r1, 0x17c
    lfs f2, 0x184(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r26), 0, 0
    stfs f2, 0x43c(r1)
    lwz r3, 0x358(r28)
    cmpwi r3, 0x3
    bge lbl_fn_803792F0_00002C7C
    subfic r0, r3, 0x3
    lis r3, lbl_8074DF88@ha
    xoris r0, r0, 0x8000
    stw r0, 0xc64(r1)
    li r0, 0x1
    lfd f10, lbl_8074DF88@l(r3)
    lfd f9, 0xc60(r1)
    frsp f26, f2
    lfs f0, lbl_80885870
    fsubs f9, f9, f10
    lfs f13, 0x438(r1)
    lfs f12, 0x434(r1)
    lfs f11, lbl_80885858
    fdivs f22, f9, f0
    lfs f10, 0x518(r1)
    lfs f9, 0x51c(r1)
    lfs f0, 0x520(r1)
    lwz r7, lbl_8087EFA8
    stw r0, 0xba0(r1)
    fmuls f13, f13, f22
    fmuls f20, f26, f22
    fmuls f12, f12, f22
    stfs f13, 0x150(r1)
    fmuls f21, f13, f22
    stfs f20, 0x154(r1)
    fmuls f20, f20, f22
    fmuls f13, f21, f11
    stfs f12, 0x14c(r1)
    fmuls f12, f12, f22
    fmuls f22, f20, f11
    stfs f21, 0x15c(r1)
    fsubs f9, f9, f13
    fmuls f23, f12, f11
    stfs f12, 0x158(r1)
    fsubs f0, f0, f22
    stfs f9, 0x51c(r1)
    fsubs f10, f10, f23
    stfs f0, 0x520(r1)
    stfs f10, 0x518(r1)
    lwz r6, 0x244(r7)
    lwz r5, 0x248(r7)
    lfs f11, 0x24c(r7)
    lfs f10, 0x250(r7)
    lwz r4, 0x254(r7)
    lwz r3, 0x258(r7)
    lfs f9, 0x25c(r7)
    lfs f0, 0x260(r7)
    stfs f20, 0x160(r1)
    stw r0, 0x240(r7)
    stw r6, 0x244(r7)
    stw r5, 0x248(r7)
    stfs f11, 0x24c(r7)
    stfs f10, 0x250(r7)
    stw r4, 0x254(r7)
    stw r3, 0x258(r7)
    stfs f9, 0x25c(r7)
    stfs f23, 0x164(r1)
    stfs f13, 0x168(r1)
    stfs f22, 0x16c(r1)
    stw r6, 0xba4(r1)
    stw r5, 0xba8(r1)
    stfs f11, 0xbac(r1)
    stfs f10, 0xbb0(r1)
    stw r4, 0xbb4(r1)
    stw r3, 0xbb8(r1)
    stfs f9, 0xbbc(r1)
    stfs f0, 0xbc0(r1)
    stfs f0, 0x260(r7)
    b lbl_fn_803792F0_00002EB8
lbl_fn_803792F0_00002C7C:
    cmpwi r3, 0x28
    ble lbl_fn_803792F0_00002E28
    subi r0, r3, 0x28
    lis r3, lbl_8074DF88@ha
    xoris r0, r0, 0x8000
    stw r0, 0xc6c(r1)
    lfd f10, lbl_8074DF88@l(r3)
    lfd f0, 0xc68(r1)
    lfs f9, lbl_808858CC
    fsubs f0, f0, f10
    lfs f11, lbl_80885848
    fdivs f0, f0, f9
    fcmpo cr0, f11, f0
    bge lbl_fn_803792F0_00002CB8
    b lbl_fn_803792F0_00002CC8
lbl_fn_803792F0_00002CB8:
    stw r0, 0xc64(r1)
    lfd f0, 0xc60(r1)
    fsubs f0, f0, f10
    fdivs f11, f0, f9
lbl_fn_803792F0_00002CC8:
    lfs f9, lbl_80885868
    lfs f0, lbl_8088587C
    fmsubs f1, f9, f11, f0
    bl fn_8068AD58
    lfs f9, 0x52c(r1)
    addi r3, r1, 0x434
    lfs f0, 0x520(r1)
    frsp f11, f1
    lfs f10, lbl_80885848
    addi r5, r1, 0x140
    fsubs f2, f9, f0
    lfs f9, 0x528(r1)
    lfs f0, 0x51c(r1)
    fadds f11, f10, f11
    lfs f10, lbl_8088583C
    fsubs f12, f9, f0
    lfs f9, 0x524(r1)
    mr r4, r3
    lfs f0, 0x518(r1)
    stfs f12, 0x144(r1)
    fmuls f26, f10, f11
    fsubs f0, f9, f0
    stfs f2, 0x148(r1)
    stfs f0, 0x140(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x43c(r1)
    bl fn_805F98D0
    lfs f9, 0x438(r1)
    lfs f0, lbl_808858D0
    fneg f13, f9
    lfs f9, 0x43c(r1)
    lfs f12, lbl_80885894
    fcmpo cr0, f26, f0
    lfs f0, 0x434(r1)
    frsp f11, f13
    fmuls f20, f9, f12
    lfs f10, 0x524(r1)
    fmuls f21, f0, f12
    lfs f9, 0x528(r1)
    fmuls f12, f11, f12
    fmuls f22, f20, f26
    fmuls f24, f21, f26
    lfs f0, 0x52c(r1)
    fmuls f23, f12, f26
    stfs f13, 0x438(r1)
    fadds f0, f0, f22
    fadds f10, f10, f24
    fadds f9, f9, f23
    stfs f0, 0x52c(r1)
    lwz r7, lbl_8087EFA8
    stfs f10, 0x524(r1)
    stfs f9, 0x528(r1)
    lwz r6, 0x244(r7)
    lwz r5, 0x248(r7)
    lfs f11, 0x24c(r7)
    lfs f10, 0x250(r7)
    lwz r4, 0x254(r7)
    lwz r3, 0x258(r7)
    lfs f9, 0x25c(r7)
    lfs f0, 0x260(r7)
    stfs f21, 0x128(r1)
    stfs f12, 0x12c(r1)
    stfs f20, 0x130(r1)
    stfs f24, 0x134(r1)
    stfs f23, 0x138(r1)
    stfs f22, 0x13c(r1)
    stw r6, 0xb80(r1)
    stw r5, 0xb84(r1)
    stfs f11, 0xb88(r1)
    stfs f10, 0xb8c(r1)
    stw r4, 0xb90(r1)
    stw r3, 0xb94(r1)
    stfs f9, 0xb98(r1)
    stfs f0, 0xb9c(r1)
    mfcr r0
    srwi r0, r0, 31
    stw r0, 0x240(r7)
    stw r6, 0x244(r7)
    stw r5, 0x248(r7)
    stfs f11, 0x24c(r7)
    stfs f10, 0x250(r7)
    stw r4, 0x254(r7)
    stw r3, 0x258(r7)
    stfs f9, 0x25c(r7)
    stw r0, 0xb7c(r1)
    stfs f0, 0x260(r7)
    b lbl_fn_803792F0_00002EB8
lbl_fn_803792F0_00002E28:
    lwz r7, lbl_8087EFA8
    li r0, 0x0
    stw r0, 0xb58(r1)
    lwz r6, 0x244(r7)
    lwz r5, 0x248(r7)
    lfs f11, 0x24c(r7)
    lfs f10, 0x250(r7)
    lwz r4, 0x254(r7)
    lwz r3, 0x258(r7)
    lfs f9, 0x25c(r7)
    lfs f0, 0x260(r7)
    stw r6, 0xb5c(r1)
    stw r0, 0x240(r7)
    stw r6, 0x244(r7)
    stw r5, 0x248(r7)
    stfs f11, 0x24c(r7)
    stfs f10, 0x250(r7)
    stw r4, 0x254(r7)
    stw r3, 0x258(r7)
    stfs f9, 0x25c(r7)
    stfs f0, 0x260(r7)
    lwz r0, 0x3a4(r28)
    stw r5, 0xb60(r1)
    cmpwi r0, 0x0
    stfs f11, 0xb64(r1)
    stfs f10, 0xb68(r1)
    stw r4, 0xb6c(r1)
    stw r3, 0xb70(r1)
    stfs f9, 0xb74(r1)
    stfs f0, 0xb78(r1)
    bne lbl_fn_803792F0_00002EB8
    li r0, 0x1
    stw r0, 0x3a4(r28)
    lwz r4, 0x210(r28)
    lwz r3, lbl_8087F490
    bl fn_803E41AC
lbl_fn_803792F0_00002EB8:
    lwz r0, 0x214(r28)
    li r27, 0x0
    cmpwi r0, 0x0
    beq lbl_fn_803792F0_00002FE0
    lfs f26, lbl_80885848
    mr r26, r28
    addi r25, r1, 0x530
    li r30, 0x0
    b lbl_fn_803792F0_00002FD4
lbl_fn_803792F0_00002EDC:
    lwz r31, 0x218(r26)
    li r4, 0x0
    lfs f20, 0x2e4(r31)
    addi r3, r31, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f20, f1
    cror eq, gt, eq
    bne lbl_fn_803792F0_00002F20
    lwz r5, 0x484(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80885830
    li r4, 0x0
    lfs f2, lbl_808858D4
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
lbl_fn_803792F0_00002F20:
    addi r3, r31, 0x1220
    bl fn_8012111C
    stfs f26, 0x2e8(r31)
    addi r3, r31, 0xb0
    li r4, 0x1
    bl fn_80097E80
    stw r30, 0x530(r1)
    addi r3, r31, 0xb0
    addi r4, r1, 0x530
    bl fn_8000D430
    cmpwi r25, 0x0
    beq lbl_fn_803792F0_00002F80
    lwz r3, 0x530(r1)
    cmpwi r3, 0x0
    beq lbl_fn_803792F0_00002F80
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_803792F0_00002F7C
    addi r3, r25, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_803792F0_00002F7C:
    stw r30, 0x530(r1)
lbl_fn_803792F0_00002F80:
    lfs f1, lbl_808858C8
    mr r3, r31
    bl fn_80148B38
    cmpwi r27, 0x0
    bne lbl_fn_803792F0_00002FCC
    cmpwi r29, 0x0
    bne lbl_fn_803792F0_00002FCC
    lwz r0, 0x3a4(r28)
    cmpwi r0, 0x0
    beq lbl_fn_803792F0_00002FCC
    lwz r3, lbl_8087F498
    cmpwi r3, 0x0
    beq lbl_fn_803792F0_00002FCC
    lfs f1, lbl_80885848
    mr r4, r31
    lfs f2, lbl_808858C8
    li r5, 0x28
    li r6, 0xf
    bl fn_803EA77C
lbl_fn_803792F0_00002FCC:
    addi r26, r26, 0x20
    addi r27, r27, 0x1
lbl_fn_803792F0_00002FD4:
    lwz r0, 0x214(r28)
    cmplw r27, r0
    blt lbl_fn_803792F0_00002EDC
lbl_fn_803792F0_00002FE0:
    lwz r3, 0x358(r28)
    addi r0, r3, 0x1
    stw r0, 0x358(r28)
lbl_fn_803792F0_00002FEC:
    addi r3, r1, 0x524
    lfs f2, 0x52c(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r25, r1, 0x518
    psq_st f1, 0x10(r28), 0, 0
    addi r4, r1, 0x50c
    addi r3, r28, 0x8
    stfs f2, 0x18(r28)
    psq_l f1, 0x0(r25), 0, 0
    lfs f2, 0x520(r1)
    stfs f2, 0x24(r28)
    psq_st f1, 0x1c(r28), 0, 0
    stfs f31, 0x58(r28)
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x514(r1)
    stfs f2, 0x30(r28)
    psq_st f1, 0x28(r28), 0, 0
    bl fn_8004B378
    lwz r0, 0x394(r28)
    cmpwi r0, 0x0
    beq lbl_fn_803792F0_000032A4
    lwz r3, 0x368(r28)
    mr r4, r25
    li r5, 0x1
    lfs f1, 0x8a0(r3)
    bl fn_803903E0
    lwz r3, 0x368(r28)
    bl fn_8037F744
    lwz r6, 0x368(r28)
    lwz r7, lbl_8087EFB4
    lwz r0, 0x0(r6)
    stw r0, 0x104(r7)
    lwz r0, 0x4(r6)
    stw r0, 0x108(r7)
    lfs f2, 0x10(r6)
    psq_l f1, 0x8(r6), 0, 0
    psq_st f1, 0x10c(r7), 0, 0
    stfs f2, 0x114(r7)
    lfs f2, 0x1c(r6)
    psq_l f1, 0x14(r6), 0, 0
    psq_st f1, 0x118(r7), 0, 0
    stfs f2, 0x120(r7)
    lfs f2, 0x28(r6)
    psq_l f1, 0x20(r6), 0, 0
    psq_st f1, 0x124(r7), 0, 0
    stfs f2, 0x12c(r7)
    lfs f2, 0x34(r6)
    psq_l f1, 0x2c(r6), 0, 0
    psq_st f1, 0x130(r7), 0, 0
    stfs f2, 0x138(r7)
    lfs f0, 0x38(r6)
    stfs f0, 0x13c(r7)
    lfs f0, 0x3c(r6)
    stfs f0, 0x140(r7)
    lfs f0, 0x40(r6)
    stfs f0, 0x144(r7)
    lfs f0, 0x44(r6)
    stfs f0, 0x148(r7)
    lfs f0, 0x48(r6)
    stfs f0, 0x14c(r7)
    lfs f0, 0x4c(r6)
    stfs f0, 0x150(r7)
    lfs f0, 0x50(r6)
    stfs f0, 0x154(r7)
    lfs f0, 0x54(r6)
    stfs f0, 0x158(r7)
    psq_l f2, 0x60(r6), 0, 0
    psq_l f3, 0x68(r6), 0, 0
    psq_l f4, 0x70(r6), 0, 0
    psq_l f5, 0x78(r6), 0, 0
    psq_l f6, 0x80(r6), 0, 0
    psq_l f1, 0x58(r6), 0, 0
    psq_st f1, 0x15c(r7), 0, 0
    psq_st f2, 0x164(r7), 0, 0
    psq_st f3, 0x16c(r7), 0, 0
    psq_st f4, 0x174(r7), 0, 0
    psq_st f5, 0x17c(r7), 0, 0
    psq_st f6, 0x184(r7), 0, 0
    psq_l f2, 0x90(r6), 0, 0
    psq_l f3, 0x98(r6), 0, 0
    psq_l f4, 0xa0(r6), 0, 0
    psq_l f5, 0xa8(r6), 0, 0
    psq_l f6, 0xb0(r6), 0, 0
    psq_l f7, 0xb8(r6), 0, 0
    psq_l f8, 0xc0(r6), 0, 0
    psq_l f1, 0x88(r6), 0, 0
    psq_st f1, 0x18c(r7), 0, 0
    psq_st f2, 0x194(r7), 0, 0
    psq_st f3, 0x19c(r7), 0, 0
    psq_st f4, 0x1a4(r7), 0, 0
    psq_st f5, 0x1ac(r7), 0, 0
    psq_st f6, 0x1b4(r7), 0, 0
    psq_st f7, 0x1bc(r7), 0, 0
    psq_st f8, 0x1c4(r7), 0, 0
    lfs f0, 0xc8(r6)
    addi r5, r7, 0x298
    stfs f0, 0x1cc(r7)
    addi r4, r6, 0x194
    addi r0, r7, 0x2f8
    lfs f0, 0xcc(r6)
    stfs f0, 0x1d0(r7)
    psq_l f2, 0xd8(r6), 0, 0
    psq_l f3, 0xe0(r6), 0, 0
    psq_l f4, 0xe8(r6), 0, 0
    psq_l f5, 0xf0(r6), 0, 0
    psq_l f6, 0xf8(r6), 0, 0
    psq_l f1, 0xd0(r6), 0, 0
    psq_st f1, 0x1d4(r7), 0, 0
    psq_st f2, 0x1dc(r7), 0, 0
    psq_st f3, 0x1e4(r7), 0, 0
    psq_st f4, 0x1ec(r7), 0, 0
    psq_st f5, 0x1f4(r7), 0, 0
    psq_st f6, 0x1fc(r7), 0, 0
    psq_l f2, 0x108(r6), 0, 0
    psq_l f3, 0x110(r6), 0, 0
    psq_l f4, 0x118(r6), 0, 0
    psq_l f5, 0x120(r6), 0, 0
    psq_l f6, 0x128(r6), 0, 0
    psq_l f1, 0x100(r6), 0, 0
    psq_st f1, 0x204(r7), 0, 0
    psq_st f2, 0x20c(r7), 0, 0
    psq_st f3, 0x214(r7), 0, 0
    psq_st f4, 0x21c(r7), 0, 0
    psq_st f5, 0x224(r7), 0, 0
    psq_st f6, 0x22c(r7), 0, 0
    lwz r3, 0x130(r6)
    stw r3, 0x234(r7)
    lfs f0, 0x134(r6)
    stfs f0, 0x238(r7)
    lfs f0, 0x138(r6)
    stfs f0, 0x23c(r7)
    lfs f2, 0x144(r6)
    psq_l f1, 0x13c(r6), 0, 0
    psq_st f1, 0x240(r7), 0, 0
    stfs f2, 0x248(r7)
    lfs f0, 0x148(r6)
    stfs f0, 0x24c(r7)
    lfs f2, 0x154(r6)
    psq_l f1, 0x14c(r6), 0, 0
    psq_st f1, 0x250(r7), 0, 0
    stfs f2, 0x258(r7)
    lfs f0, 0x158(r6)
    stfs f0, 0x25c(r7)
    lfs f2, 0x164(r6)
    psq_l f1, 0x15c(r6), 0, 0
    psq_st f1, 0x260(r7), 0, 0
    stfs f2, 0x268(r7)
    lfs f0, 0x168(r6)
    stfs f0, 0x26c(r7)
    lfs f2, 0x174(r6)
    psq_l f1, 0x16c(r6), 0, 0
    psq_st f1, 0x270(r7), 0, 0
    stfs f2, 0x278(r7)
    lfs f0, 0x178(r6)
    stfs f0, 0x27c(r7)
    lfs f2, 0x184(r6)
    psq_l f1, 0x17c(r6), 0, 0
    psq_st f1, 0x280(r7), 0, 0
    stfs f2, 0x288(r7)
    lfs f2, 0x190(r6)
    psq_l f1, 0x188(r6), 0, 0
    psq_st f1, 0x28c(r7), 0, 0
    stfs f2, 0x294(r7)
lbl_fn_803792F0_00003278:
    lfs f2, 0x8(r4)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x8(r5)
    lfs f0, 0xc(r4)
    addi r4, r4, 0x10
    stfs f0, 0xc(r5)
    addi r5, r5, 0x10
    cmplw r5, r0
    blt lbl_fn_803792F0_00003278
    b lbl_fn_803792F0_000034E4
lbl_fn_803792F0_000032A4:
    lwz r6, lbl_8087EFB4
    lwz r0, 0x8(r28)
    stw r0, 0x104(r6)
    lwz r0, 0xc(r28)
    stw r0, 0x108(r6)
    lfs f2, 0x18(r28)
    psq_l f1, 0x10(r28), 0, 0
    psq_st f1, 0x10c(r6), 0, 0
    stfs f2, 0x114(r6)
    lfs f2, 0x24(r28)
    psq_l f1, 0x1c(r28), 0, 0
    psq_st f1, 0x118(r6), 0, 0
    stfs f2, 0x120(r6)
    lfs f2, 0x30(r28)
    psq_l f1, 0x28(r28), 0, 0
    psq_st f1, 0x124(r6), 0, 0
    stfs f2, 0x12c(r6)
    lfs f2, 0x3c(r28)
    psq_l f1, 0x34(r28), 0, 0
    psq_st f1, 0x130(r6), 0, 0
    stfs f2, 0x138(r6)
    lfs f0, 0x40(r28)
    stfs f0, 0x13c(r6)
    lfs f0, 0x44(r28)
    stfs f0, 0x140(r6)
    lfs f0, 0x48(r28)
    stfs f0, 0x144(r6)
    lfs f0, 0x4c(r28)
    stfs f0, 0x148(r6)
    lfs f0, 0x50(r28)
    stfs f0, 0x14c(r6)
    lfs f0, 0x54(r28)
    stfs f0, 0x150(r6)
    lfs f0, 0x58(r28)
    stfs f0, 0x154(r6)
    lfs f0, 0x5c(r28)
    stfs f0, 0x158(r6)
    psq_l f2, 0x68(r28), 0, 0
    psq_l f3, 0x70(r28), 0, 0
    psq_l f4, 0x78(r28), 0, 0
    psq_l f5, 0x80(r28), 0, 0
    psq_l f6, 0x88(r28), 0, 0
    psq_l f1, 0x60(r28), 0, 0
    psq_st f1, 0x15c(r6), 0, 0
    psq_st f2, 0x164(r6), 0, 0
    psq_st f3, 0x16c(r6), 0, 0
    psq_st f4, 0x174(r6), 0, 0
    psq_st f5, 0x17c(r6), 0, 0
    psq_st f6, 0x184(r6), 0, 0
    psq_l f2, 0x98(r28), 0, 0
    psq_l f3, 0xa0(r28), 0, 0
    psq_l f4, 0xa8(r28), 0, 0
    psq_l f5, 0xb0(r28), 0, 0
    psq_l f6, 0xb8(r28), 0, 0
    psq_l f7, 0xc0(r28), 0, 0
    psq_l f8, 0xc8(r28), 0, 0
    psq_l f1, 0x90(r28), 0, 0
    psq_st f1, 0x18c(r6), 0, 0
    psq_st f2, 0x194(r6), 0, 0
    psq_st f3, 0x19c(r6), 0, 0
    psq_st f4, 0x1a4(r6), 0, 0
    psq_st f5, 0x1ac(r6), 0, 0
    psq_st f6, 0x1b4(r6), 0, 0
    psq_st f7, 0x1bc(r6), 0, 0
    psq_st f8, 0x1c4(r6), 0, 0
    lfs f0, 0xd0(r28)
    addi r5, r6, 0x298
    stfs f0, 0x1cc(r6)
    addi r4, r28, 0x19c
    addi r0, r6, 0x2f8
    lfs f0, 0xd4(r28)
    stfs f0, 0x1d0(r6)
    psq_l f2, 0xe0(r28), 0, 0
    psq_l f3, 0xe8(r28), 0, 0
    psq_l f4, 0xf0(r28), 0, 0
    psq_l f5, 0xf8(r28), 0, 0
    psq_l f6, 0x100(r28), 0, 0
    psq_l f1, 0xd8(r28), 0, 0
    psq_st f1, 0x1d4(r6), 0, 0
    psq_st f2, 0x1dc(r6), 0, 0
    psq_st f3, 0x1e4(r6), 0, 0
    psq_st f4, 0x1ec(r6), 0, 0
    psq_st f5, 0x1f4(r6), 0, 0
    psq_st f6, 0x1fc(r6), 0, 0
    psq_l f2, 0x110(r28), 0, 0
    psq_l f3, 0x118(r28), 0, 0
    psq_l f4, 0x120(r28), 0, 0
    psq_l f5, 0x128(r28), 0, 0
    psq_l f6, 0x130(r28), 0, 0
    psq_l f1, 0x108(r28), 0, 0
    psq_st f1, 0x204(r6), 0, 0
    psq_st f2, 0x20c(r6), 0, 0
    psq_st f3, 0x214(r6), 0, 0
    psq_st f4, 0x21c(r6), 0, 0
    psq_st f5, 0x224(r6), 0, 0
    psq_st f6, 0x22c(r6), 0, 0
    lwz r3, 0x138(r28)
    stw r3, 0x234(r6)
    lfs f0, 0x13c(r28)
    stfs f0, 0x238(r6)
    lfs f0, 0x140(r28)
    stfs f0, 0x23c(r6)
    lfs f2, 0x14c(r28)
    psq_l f1, 0x144(r28), 0, 0
    psq_st f1, 0x240(r6), 0, 0
    stfs f2, 0x248(r6)
    lfs f0, 0x150(r28)
    stfs f0, 0x24c(r6)
    lfs f2, 0x15c(r28)
    psq_l f1, 0x154(r28), 0, 0
    psq_st f1, 0x250(r6), 0, 0
    stfs f2, 0x258(r6)
    lfs f0, 0x160(r28)
    stfs f0, 0x25c(r6)
    lfs f2, 0x16c(r28)
    psq_l f1, 0x164(r28), 0, 0
    psq_st f1, 0x260(r6), 0, 0
    stfs f2, 0x268(r6)
    lfs f0, 0x170(r28)
    stfs f0, 0x26c(r6)
    lfs f2, 0x17c(r28)
    psq_l f1, 0x174(r28), 0, 0
    psq_st f1, 0x270(r6), 0, 0
    stfs f2, 0x278(r6)
    lfs f0, 0x180(r28)
    stfs f0, 0x27c(r6)
    lfs f2, 0x18c(r28)
    psq_l f1, 0x184(r28), 0, 0
    psq_st f1, 0x280(r6), 0, 0
    stfs f2, 0x288(r6)
    lfs f2, 0x198(r28)
    psq_l f1, 0x190(r28), 0, 0
    psq_st f1, 0x28c(r6), 0, 0
    stfs f2, 0x294(r6)
lbl_fn_803792F0_000034BC:
    lfs f2, 0x8(r4)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x8(r5)
    lfs f0, 0xc(r4)
    addi r4, r4, 0x10
    stfs f0, 0xc(r5)
    addi r5, r5, 0x10
    cmplw r5, r0
    blt lbl_fn_803792F0_000034BC
lbl_fn_803792F0_000034E4:
    li r0, 0xd48
    addi r11, r1, 0xc90
    psq_lx f31, r1, r0, 0, 0
    lfd f31, 0xd40(r1)
    li r0, 0xd38
    psq_lx f30, r1, r0, 0, 0
    lfd f30, 0xd30(r1)
    li r0, 0xd28
    psq_lx f29, r1, r0, 0, 0
    lfd f29, 0xd20(r1)
    li r0, 0xd18
    psq_lx f28, r1, r0, 0, 0
    lfd f28, 0xd10(r1)
    li r0, 0xd08
    psq_lx f27, r1, r0, 0, 0
    lfd f27, 0xd00(r1)
    li r0, 0xcf8
    psq_lx f26, r1, r0, 0, 0
    lfd f26, 0xcf0(r1)
    li r0, 0xce8
    psq_lx f25, r1, r0, 0, 0
    lfd f25, 0xce0(r1)
    li r0, 0xcd8
    psq_lx f24, r1, r0, 0, 0
    lfd f24, 0xcd0(r1)
    li r0, 0xcc8
    psq_lx f23, r1, r0, 0, 0
    lfd f23, 0xcc0(r1)
    li r0, 0xcb8
    psq_lx f22, r1, r0, 0, 0
    lfd f22, 0xcb0(r1)
    li r0, 0xca8
    psq_lx f21, r1, r0, 0, 0
    lfd f21, 0xca0(r1)
    li r0, 0xc98
    psq_lx f20, r1, r0, 0, 0
    lfd f20, 0xc90(r1)
    bl _restgpr_25
    lwz r0, 0xd54(r1)
    mtlr r0
    addi r1, r1, 0xd50
    blr
}
