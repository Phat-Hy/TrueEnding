#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void fn_8004B378(void);
extern void fn_8004D388(void);
extern void fn_8004ED34(void);
extern void fn_80050900(void);
extern void fn_80051B70(void);
extern void fn_800A56A8(void);
extern void fn_800A58D0(void);
extern void fn_801002DC(void);
extern void fn_80116BD4(void);
extern void fn_801231D0(void);
extern void fn_801240B4(void);
extern void fn_80370174(void);
extern void fn_80383F7C(void);
extern void fn_803918EC(void);
extern void fn_803920C8(void);
extern void fn_803928C0(void);
extern void fn_80392A04(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_805F9990(void);
extern void fn_805F99B0(void);
extern void fn_8068AEA4(void);

/* External data declarations */
extern u8 lbl_8074E008[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087EF70;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F430;
extern u32 lbl_8087F9C0;
extern u32 lbl_808858E8;
extern u32 lbl_808858F8;
extern u32 lbl_80885904;
extern u32 lbl_80885914;
extern u32 lbl_80885938;
extern u32 lbl_8088593C;
extern u32 lbl_80885948;
extern u32 lbl_80885958;
extern u32 lbl_80885990;
extern u32 lbl_808859C4;
extern u32 lbl_808859C8;
extern u32 lbl_808859CC;
extern u32 lbl_808859D0;
extern u32 lbl_808859DC;
extern u32 lbl_808859E4;
extern u32 lbl_80885A24;
extern u32 lbl_80885A3C;
extern u32 lbl_80885A40;
extern u32 lbl_80885A44;
extern u32 lbl_80885A58;
extern u32 lbl_80885A5C;
extern u32 lbl_80885A60;
extern u32 lbl_80885A64;

/* Function declarations */
void fn_80385B40(void);
void fn_80385B48(void);

asm void fn_80385B40(void)
{
    nofralloc
    lfs f1, 0x4c(r3)
    blr
}

asm void fn_80385B48(void)
{
    nofralloc
    stwu r1, -0x900(r1)
    mflr r0
    stw r0, 0x904(r1)
    li r0, 0x8f8
    addi r11, r1, 0x8a0
    stfd f31, 0x8f0(r1)
    psq_stx f31, r1, r0, 0, 0
    li r0, 0x8e8
    stfd f30, 0x8e0(r1)
    psq_stx f30, r1, r0, 0, 0
    li r0, 0x8d8
    stfd f29, 0x8d0(r1)
    psq_stx f29, r1, r0, 0, 0
    li r0, 0x8c8
    stfd f28, 0x8c0(r1)
    psq_stx f28, r1, r0, 0, 0
    li r0, 0x8b8
    stfd f27, 0x8b0(r1)
    psq_stx f27, r1, r0, 0, 0
    li r0, 0x8a8
    stfd f26, 0x8a0(r1)
    psq_stx f26, r1, r0, 0, 0
    bl _savegpr_27
    lwz r5, 0x808(r3)
    mr r28, r3
    mr r29, r4
    addic. r0, r5, 0x1
    stw r0, 0x808(r3)
    blt lbl_fn_80385B48_000019A0
    lwz r0, 0x858(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80385B48_00000094
    lwz r0, 0x55c(r4)
    cmpwi r0, 0x5
    bne lbl_fn_80385B48_000001B8
lbl_fn_80385B48_00000094:
    lwz r0, 0x838(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80385B48_000019A0
    lwz r4, 0x83c(r3)
    addi r0, r4, 0x1
    stw r0, 0x83c(r3)
    cmpwi r0, 0x6
    ble lbl_fn_80385B48_000000BC
    li r0, 0x6
    stw r0, 0x83c(r3)
lbl_fn_80385B48_000000BC:
    lwz r5, 0x83c(r3)
    lis r0, 0x4330
    stw r0, 0x880(r1)
    lis r4, lbl_8074E008@ha
    xoris r0, r5, 0x8000
    lfd f9, lbl_8074E008@l(r4)
    stw r0, 0x884(r1)
    addi r4, r1, 0x8c
    lfs f7, lbl_80885A40
    lfd f8, 0x880(r1)
    lfs f0, 0x848(r3)
    fsubs f11, f8, f9
    lfs f10, 0x854(r3)
    lfs f9, 0x844(r3)
    fsubs f30, f0, f10
    lfs f8, 0x850(r3)
    fdivs f29, f11, f7
    stfs f30, 0xa0(r1)
    lfs f7, 0x840(r3)
    lfs f0, 0x84c(r3)
    lfs f13, lbl_80885A24
    lfs f12, 0x610(r3)
    fsubs f7, f7, f0
    lfs f11, 0x85c(r3)
    fmuls f30, f30, f29
    fsubs f9, f9, f8
    stfs f7, 0x98(r1)
    fmuls f31, f7, f29
    fadds f2, f30, f10
    stfs f9, 0x9c(r1)
    fmuls f9, f9, f29
    fmuls f10, f13, f12
    stfs f31, 0xa4(r1)
    fadds f7, f9, f8
    stfs f9, 0xa8(r1)
    fadds f8, f31, f0
    fsubs f0, f10, f11
    stfs f7, 0x90(r1)
    stfs f8, 0x8c(r1)
    fmadds f0, f29, f0, f11
    psq_l f1, 0x0(r4), 0, 0
    stfs f30, 0xac(r1)
    stfs f2, 0x94(r1)
    stfs f0, 0x50(r3)
    psq_st f1, 0x14(r3), 0, 0
    stfs f2, 0x1c(r3)
    mr r3, r28
    bl fn_8004B378
    mr r4, r28
    addi r3, r28, 0x1f4
    bl fn_80392A04
    mr r3, r28
    bl fn_803918EC
    mr r3, r28
    bl fn_803920C8
    mr r3, r28
    bl fn_803928C0
    addi r3, r28, 0x1f4
    bl fn_8004B378
    lwz r3, lbl_8087EFB4
    addi r4, r28, 0x1f4
    bl fn_80116BD4
    b lbl_fn_80385B48_000019A0
lbl_fn_80385B48_000001B8:
    lwz r3, lbl_8087F0A8
    li r31, 0x0
    li r4, 0x24
    addi r3, r3, 0x48c
    bl fn_801240B4
    cmpwi r3, 0x0
    beq lbl_fn_80385B48_000001F0
    lwz r3, lbl_8087F0A8
    li r4, 0x24
    addi r3, r3, 0x48c
    bl fn_801231D0
    cmpwi r3, 0x0
    bne lbl_fn_80385B48_000001F0
    li r31, 0x1
lbl_fn_80385B48_000001F0:
    psq_l f1, 0x8(r28), 0, 0
    addi r27, r1, 0x310
    lfs f2, 0x10(r28)
    addi r3, r1, 0x334
    stfs f2, 0x33c(r1)
    addi r5, r1, 0x328
    addi r30, r1, 0x31c
    addi r6, r1, 0x80
    psq_st f1, 0x0(r3), 0, 0
    mr r3, r27
    mr r4, r27
    psq_l f1, 0x14(r28), 0, 0
    lfs f2, 0x1c(r28)
    stfs f2, 0x330(r1)
    psq_st f1, 0x0(r5), 0, 0
    psq_l f1, 0x20(r28), 0, 0
    lfs f2, 0x28(r28)
    stfs f2, 0x324(r1)
    psq_st f1, 0x0(r30), 0, 0
    lfs f7, 0x1c(r28)
    lfs f0, 0x10(r28)
    lfs f9, 0x18(r28)
    fsubs f2, f7, f0
    lfs f8, 0xc(r28)
    lfs f7, 0x14(r28)
    lfs f0, 0x8(r28)
    fsubs f8, f9, f8
    stfs f2, 0x88(r1)
    fsubs f0, f7, f0
    stfs f8, 0x84(r1)
    stfs f0, 0x80(r1)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0x318(r1)
    bl fn_805F98D0
    mr r3, r27
    mr r4, r30
    addi r5, r1, 0x304
    bl fn_805F99B0
    lfs f7, 0x820(r28)
    addi r3, r1, 0x2f8
    lfs f0, 0x814(r28)
    mr r4, r3
    lfs f9, 0x81c(r28)
    fsubs f10, f7, f0
    lfs f8, 0x810(r28)
    lfs f7, 0x818(r28)
    lfs f0, 0x80c(r28)
    fsubs f8, f9, f8
    fsubs f0, f7, f0
    stfs f8, 0x2fc(r1)
    stfs f0, 0x2f8(r1)
    stfs f10, 0x300(r1)
    bl fn_805F98D0
    addi r3, r1, 0x304
    bl fn_805F9920
    lfs f0, lbl_80885958
    fcmpo cr0, f1, f0
    bge lbl_fn_80385B48_000002F0
    lfs f7, lbl_808858E8
    lfs f0, lbl_808858F8
    stfs f7, 0x304(r1)
    stfs f7, 0x308(r1)
    stfs f0, 0x30c(r1)
lbl_fn_80385B48_000002F0:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_800A56A8
    fmr f26, f1
    lwz r3, lbl_8087EF70
    li r4, 0x0
    bl fn_800A58D0
    cmpwi r3, 0x0
    beq lbl_fn_80385B48_00000334
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x2
    li r6, 0x0
    bl fn_800A56A8
    fadds f26, f26, f1
lbl_fn_80385B48_00000334:
    lwz r3, lbl_8087F9C0
    lwz r0, 0x50(r3)
    rlwinm r0, r0, 0, 28, 28
    cmplwi r0, 0x8
    bne lbl_fn_80385B48_00000350
    lfs f0, lbl_80885904
    fmuls f26, f26, f0
lbl_fn_80385B48_00000350:
    lwz r0, lbl_8087F9C0
    cmpwi r0, 0x0
    beq lbl_fn_80385B48_00000374
    lfs f7, 0x4c(r3)
    lfs f8, lbl_808858F8
    lfs f0, lbl_80885938
    fsubs f7, f7, f8
    fmadds f0, f0, f7, f8
    fmuls f26, f26, f0
lbl_fn_80385B48_00000374:
    lfs f0, lbl_80885904
    fcmpo cr0, f0, f26
    ble lbl_fn_80385B48_00000384
    b lbl_fn_80385B48_00000388
lbl_fn_80385B48_00000384:
    fmr f0, f26
lbl_fn_80385B48_00000388:
    lfs f31, lbl_808858F8
    fcmpo cr0, f31, f0
    bge lbl_fn_80385B48_00000398
    b lbl_fn_80385B48_000003AC
lbl_fn_80385B48_00000398:
    lfs f31, lbl_80885904
    fcmpo cr0, f31, f26
    ble lbl_fn_80385B48_000003A8
    b lbl_fn_80385B48_000003AC
lbl_fn_80385B48_000003A8:
    fmr f31, f26
lbl_fn_80385B48_000003AC:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x1
    li r6, 0x0
    bl fn_800A56A8
    fmr f27, f1
    lwz r3, lbl_8087EF70
    li r4, 0x0
    bl fn_800A58D0
    cmpwi r3, 0x0
    beq lbl_fn_80385B48_000003F0
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x3
    li r6, 0x0
    bl fn_800A56A8
    fadds f27, f27, f1
lbl_fn_80385B48_000003F0:
    lwz r3, lbl_8087F9C0
    lwz r0, 0x50(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_80385B48_0000040C
    lfs f0, lbl_80885904
    fmuls f27, f27, f0
lbl_fn_80385B48_0000040C:
    lwz r0, lbl_8087F9C0
    cmpwi r0, 0x0
    beq lbl_fn_80385B48_00000430
    lfs f7, 0x4c(r3)
    lfs f8, lbl_808858F8
    lfs f0, lbl_80885938
    fsubs f7, f7, f8
    fmadds f0, f0, f7, f8
    fmuls f27, f27, f0
lbl_fn_80385B48_00000430:
    lfs f0, lbl_80885904
    fcmpo cr0, f0, f27
    ble lbl_fn_80385B48_00000440
    b lbl_fn_80385B48_00000444
lbl_fn_80385B48_00000440:
    fmr f0, f27
lbl_fn_80385B48_00000444:
    lfs f26, lbl_808858F8
    fcmpo cr0, f26, f0
    bge lbl_fn_80385B48_00000454
    b lbl_fn_80385B48_00000468
lbl_fn_80385B48_00000454:
    lfs f26, lbl_80885904
    fcmpo cr0, f26, f27
    ble lbl_fn_80385B48_00000464
    b lbl_fn_80385B48_00000468
lbl_fn_80385B48_00000464:
    fmr f26, f27
lbl_fn_80385B48_00000468:
    lwz r0, 0x55c(r29)
    li r4, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_80385B48_000004B4
    lwz r0, 0x560(r29)
    cmpwi r0, 0x1e
    beq lbl_fn_80385B48_00000490
    cmpwi r0, 0x1f
    beq lbl_fn_80385B48_000004B0
    b lbl_fn_80385B48_000004B4
lbl_fn_80385B48_00000490:
    lwz r3, 0xf80(r29)
    cmpwi r3, 0x0
    beq lbl_fn_80385B48_000004B4
    lbz r0, 0x1d(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80385B48_000004B4
    li r4, 0x1
    b lbl_fn_80385B48_000004B4
lbl_fn_80385B48_000004B0:
    li r4, 0x1
lbl_fn_80385B48_000004B4:
    cmpwi r4, 0x0
    beq lbl_fn_80385B48_000004C8
    lfs f31, lbl_808858E8
    li r31, 0x0
    fmr f26, f31
lbl_fn_80385B48_000004C8:
    fmuls f9, f26, f26
    lfs f8, 0x324(r1)
    lfs f7, 0x320(r1)
    fmr f1, f31
    lfs f0, 0x31c(r1)
    fneg f8, f8
    fmadds f27, f31, f31, f9
    stfs f8, 0x268(r1)
    fneg f7, f7
    mr r8, r31
    fneg f0, f0
    addi r3, r28, 0xa18
    fmr f2, f27
    stfs f0, 0x260(r1)
    addi r4, r1, 0x328
    addi r5, r1, 0x334
    stfs f7, 0x264(r1)
    addi r6, r1, 0x260
    addi r7, r28, 0x60c
    bl fn_80383F7C
    fmr f1, f26
    mr r8, r31
    fmr f2, f27
    addi r3, r28, 0xa1c
    addi r4, r1, 0x328
    addi r5, r1, 0x334
    addi r6, r1, 0x304
    addi r7, r28, 0x60c
    bl fn_80383F7C
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80385B48_0000060C
    lwz r0, 0x560(r29)
    cmpwi r0, 0x1d
    bne lbl_fn_80385B48_0000060C
    lwz r0, lbl_8087F048
    cmpwi r0, 0x0
    beq lbl_fn_80385B48_0000060C
    lwz r3, lbl_8087F0A8
    li r4, 0x24
    addi r3, r3, 0x48c
    bl fn_801231D0
    cmpwi r3, 0x0
    beq lbl_fn_80385B48_0000060C
    lwz r3, lbl_8087F048
    mr r4, r29
    lfs f1, lbl_80885A58
    addi r5, r1, 0x334
    lfs f2, lbl_80885A5C
    addi r6, r1, 0x310
    li r7, 0x1
    bl fn_801002DC
    cmpwi r3, 0x0
    stw r3, 0x860(r28)
    beq lbl_fn_80385B48_0000060C
    lfs f9, 0x5fc(r3)
    addi r5, r1, 0x254
    lfs f7, 0x608(r3)
    addi r4, r28, 0x840
    lfs f8, 0x5f8(r3)
    fadds f10, f9, f7
    lfs f0, 0x604(r3)
    lfs f9, 0x5f4(r3)
    fadds f11, f8, f0
    lfs f8, 0x600(r3)
    lfs f7, lbl_808859E4
    fadds f8, f9, f8
    lfs f0, lbl_808858E8
    fmuls f2, f10, f7
    fmuls f9, f11, f7
    stfs f11, 0x24c(r1)
    fmuls f7, f8, f7
    stfs f9, 0x258(r1)
    stfs f7, 0x254(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f8, 0x248(r1)
    stfs f10, 0x250(r1)
    stfs f2, 0x25c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x848(r28)
    stfs f0, 0x864(r28)
lbl_fn_80385B48_0000060C:
    lwz r0, 0x860(r28)
    cmpwi r0, 0x0
    beq lbl_fn_80385B48_000006C8
    lfs f7, 0x864(r28)
    lfs f0, lbl_8088593C
    lfs f26, lbl_808858F8
    fadds f0, f7, f0
    stfs f0, 0x864(r28)
    fcmpo cr0, f26, f0
    bge lbl_fn_80385B48_00000638
    b lbl_fn_80385B48_0000063C
lbl_fn_80385B48_00000638:
    fmr f26, f0
lbl_fn_80385B48_0000063C:
    lfs f0, 0x848(r28)
    addi r4, r1, 0x23c
    lfs f9, 0x330(r1)
    addi r3, r1, 0x328
    lfs f7, 0x844(r28)
    fsubs f29, f0, f9
    lfs f8, 0x32c(r1)
    lfs f0, 0x840(r28)
    fsubs f13, f7, f8
    lfs f7, 0x328(r1)
    fmuls f11, f29, f26
    fsubs f12, f0, f7
    lfs f0, lbl_808858F8
    fmuls f10, f13, f26
    fadds f2, f11, f9
    stfs f12, 0x74(r1)
    fmuls f9, f12, f26
    fadds f8, f10, f8
    stfs f2, 0x330(r1)
    fadds f7, f9, f7
    stfs f8, 0x240(r1)
    stfs f7, 0x23c(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lfs f7, 0x864(r28)
    stfs f13, 0x78(r1)
    fcmpo cr0, f7, f0
    stfs f29, 0x7c(r1)
    stfs f9, 0x68(r1)
    stfs f10, 0x6c(r1)
    stfs f11, 0x70(r1)
    stfs f2, 0x244(r1)
    ble lbl_fn_80385B48_000006C8
    li r0, 0x0
    stw r0, 0x860(r28)
lbl_fn_80385B48_000006C8:
    lfs f7, 0x330(r1)
    addi r27, r1, 0x310
    lfs f0, 0x33c(r1)
    addi r5, r1, 0x230
    lfs f9, 0x32c(r1)
    mr r3, r27
    fsubs f2, f7, f0
    lfs f8, 0x338(r1)
    lfs f7, 0x328(r1)
    mr r4, r27
    lfs f0, 0x334(r1)
    fsubs f8, f9, f8
    fsubs f0, f7, f0
    stfs f8, 0x234(r1)
    stfs f0, 0x230(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0x238(r1)
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0x318(r1)
    bl fn_805F98D0
    lfs f2, 0x318(r1)
    addi r30, r1, 0x2ec
    psq_l f1, 0x0(r27), 0, 0
    fabs f7, f2
    lfs f0, lbl_808859C8
    psq_st f1, 0x0(r30), 0, 0
    frsp f7, f7
    stfs f2, 0x2f4(r1)
    fcmpo cr0, f7, f0
    bge lbl_fn_80385B48_00000764
    lfs f7, 0x2ec(r1)
    lfs f0, lbl_808858E8
    fcmpo cr0, f7, f0
    ble lbl_fn_80385B48_00000758
    lfs f0, lbl_808859CC
    b lbl_fn_80385B48_0000075C
lbl_fn_80385B48_00000758:
    lfs f0, lbl_808859D0
lbl_fn_80385B48_0000075C:
    stfs f0, 0x60(r1)
    b lbl_fn_80385B48_00000778
lbl_fn_80385B48_00000764:
    frsp f2, f2
    lfs f1, 0x2ec(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x60(r1)
lbl_fn_80385B48_00000778:
    lfs f0, 0x60(r1)
    addi r3, r1, 0x700
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f7, lbl_808858E8
    addi r4, r1, 0x50
    lfs f26, 0x708(r1)
    mr r5, r4
    lfs f27, 0x704(r1)
    addi r3, r1, 0x730
    lfs f28, 0x700(r1)
    lfs f31, 0x718(r1)
    lfs f30, 0x714(r1)
    lfs f29, 0x710(r1)
    lfs f13, 0x728(r1)
    lfs f12, 0x724(r1)
    lfs f11, 0x720(r1)
    lfs f10, 0x72c(r1)
    lfs f9, 0x71c(r1)
    lfs f8, 0x70c(r1)
    lfs f0, lbl_808858F8
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x2f4(r1)
    stfs f7, 0x760(r1)
    stfs f7, 0x764(r1)
    stfs f7, 0x768(r1)
    stfs f0, 0x76c(r1)
    stfs f28, 0x20(r1)
    stfs f27, 0x24(r1)
    stfs f26, 0x28(r1)
    stfs f28, 0x730(r1)
    stfs f27, 0x734(r1)
    stfs f26, 0x738(r1)
    stfs f29, 0x2c(r1)
    stfs f30, 0x30(r1)
    stfs f31, 0x34(r1)
    stfs f29, 0x740(r1)
    stfs f30, 0x744(r1)
    stfs f31, 0x748(r1)
    stfs f11, 0x38(r1)
    stfs f12, 0x3c(r1)
    stfs f13, 0x40(r1)
    stfs f11, 0x750(r1)
    stfs f12, 0x754(r1)
    stfs f13, 0x758(r1)
    stfs f8, 0x44(r1)
    stfs f9, 0x48(r1)
    stfs f10, 0x4c(r1)
    stfs f8, 0x73c(r1)
    stfs f9, 0x74c(r1)
    stfs f10, 0x75c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x58(r1)
    bl fn_805F9750
    lfs f2, 0x58(r1)
    lfs f0, lbl_808859C8
    fabs f7, f2
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_80385B48_00000894
    lfs f7, 0x54(r1)
    lfs f0, lbl_808858E8
    fcmpo cr0, f7, f0
    ble lbl_fn_80385B48_00000884
    lfs f0, lbl_808859CC
    b lbl_fn_80385B48_00000888
lbl_fn_80385B48_00000884:
    lfs f0, lbl_808859D0
lbl_fn_80385B48_00000888:
    fneg f0, f0
    stfs f0, 0x5c(r1)
    b lbl_fn_80385B48_000008A8
lbl_fn_80385B48_00000894:
    lfs f1, 0x54(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x5c(r1)
lbl_fn_80385B48_000008A8:
    addi r3, r1, 0x5c
    lfs f2, lbl_808858E8
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    lfs f8, lbl_80885990
    lfs f0, 0x2ec(r1)
    stfs f2, 0x64(r1)
    fabs f7, f0
    stfs f2, 0x2f4(r1)
    frsp f7, f7
    fcmpo cr0, f7, f8
    ble lbl_fn_80385B48_00000A9C
    fcmpo cr0, f0, f2
    ble lbl_fn_80385B48_000008E4
    b lbl_fn_80385B48_000008E8
lbl_fn_80385B48_000008E4:
    fneg f8, f8
lbl_fn_80385B48_000008E8:
    lfs f7, lbl_808858E8
    addi r27, r1, 0x800
    lfs f1, 0x2f4(r1)
    lfs f0, lbl_808858F8
    fcmpu cr0, f7, f1
    stfs f8, 0x2ec(r1)
    stfs f7, 0x310(r1)
    stfs f7, 0x314(r1)
    stfs f0, 0x318(r1)
    stfs f7, 0x82c(r1)
    stfs f7, 0x824(r1)
    stfs f7, 0x820(r1)
    stfs f7, 0x81c(r1)
    stfs f7, 0x818(r1)
    stfs f7, 0x810(r1)
    stfs f7, 0x80c(r1)
    stfs f7, 0x808(r1)
    stfs f7, 0x804(r1)
    stfs f0, 0x828(r1)
    stfs f0, 0x814(r1)
    stfs f0, 0x800(r1)
    beq lbl_fn_80385B48_00000990
    addi r3, r1, 0x610
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r27
    addi r4, r1, 0x610
    addi r5, r1, 0x5e0
    bl fn_805F89F0
    addi r3, r1, 0x5e0
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    psq_st f2, 0x8(r27), 0, 0
    psq_st f3, 0x10(r27), 0, 0
    psq_st f4, 0x18(r27), 0, 0
    psq_st f5, 0x20(r27), 0, 0
    psq_st f6, 0x28(r27), 0, 0
lbl_fn_80385B48_00000990:
    lfs f0, lbl_808858E8
    lfs f1, 0x2f0(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_80385B48_000009F0
    addi r3, r1, 0x670
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r27
    addi r4, r1, 0x670
    addi r5, r1, 0x640
    bl fn_805F89F0
    addi r3, r1, 0x640
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    psq_st f2, 0x8(r27), 0, 0
    psq_st f3, 0x10(r27), 0, 0
    psq_st f4, 0x18(r27), 0, 0
    psq_st f5, 0x20(r27), 0, 0
    psq_st f6, 0x28(r27), 0, 0
lbl_fn_80385B48_000009F0:
    lfs f0, lbl_808858E8
    lfs f1, 0x2ec(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_80385B48_00000A50
    addi r3, r1, 0x6d0
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r27
    addi r4, r1, 0x6d0
    addi r5, r1, 0x6a0
    bl fn_805F89F0
    addi r3, r1, 0x6a0
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    psq_st f2, 0x8(r27), 0, 0
    psq_st f3, 0x10(r27), 0, 0
    psq_st f4, 0x18(r27), 0, 0
    psq_st f5, 0x20(r27), 0, 0
    psq_st f6, 0x28(r27), 0, 0
lbl_fn_80385B48_00000A50:
    addi r4, r1, 0x310
    addi r3, r1, 0x800
    mr r5, r4
    bl fn_805F93C0
    lfs f8, 0x4c(r28)
    addi r4, r1, 0x224
    lfs f0, 0x318(r1)
    addi r3, r1, 0x328
    lfs f7, 0x314(r1)
    fmuls f2, f0, f8
    lfs f0, 0x310(r1)
    fmuls f7, f7, f8
    fmuls f0, f0, f8
    stfs f2, 0x22c(r1)
    stfs f0, 0x224(r1)
    stfs f7, 0x228(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x330(r1)
lbl_fn_80385B48_00000A9C:
    lwz r0, 0x12a4(r29)
    addi r30, r29, 0x528
    lfs f31, 0x874(r28)
    extrwi. r0, r0, 1, 25
    lfs f30, 0x878(r28)
    beq lbl_fn_80385B48_00000AC8
    lwz r0, 0x674(r29)
    cmpwi r0, 0x0
    blt lbl_fn_80385B48_00000AC8
    lfs f0, 0x624(r28)
    fsubs f30, f30, f0
lbl_fn_80385B48_00000AC8:
    lwz r3, lbl_8087F430
    lfs f0, 0x87c(r28)
    cmpwi r3, 0x0
    stfs f0, 0x2e8(r1)
    lfs f26, lbl_80885A60
    stfs f31, 0x2e0(r1)
    stfs f30, 0x2e4(r1)
    beq lbl_fn_80385B48_00000AFC
    li r4, 0x6a
    bl fn_80370174
    cmpwi r3, 0x0
    beq lbl_fn_80385B48_00000AFC
    lfs f26, lbl_80885A44
lbl_fn_80385B48_00000AFC:
    lfs f0, 0xc1c(r28)
    lfs f7, lbl_808858E8
    fadds f0, f0, f26
    stfs f0, 0xc1c(r28)
    fcmpo cr0, f7, f0
    ble lbl_fn_80385B48_00000B18
    b lbl_fn_80385B48_00000B1C
lbl_fn_80385B48_00000B18:
    fmr f7, f0
lbl_fn_80385B48_00000B1C:
    lfs f8, lbl_80885914
    fcmpo cr0, f7, f8
    bge lbl_fn_80385B48_00000B40
    lfs f8, lbl_808858E8
    lfs f0, 0xc1c(r28)
    fcmpo cr0, f8, f0
    ble lbl_fn_80385B48_00000B3C
    b lbl_fn_80385B48_00000B40
lbl_fn_80385B48_00000B3C:
    fmr f8, f0
lbl_fn_80385B48_00000B40:
    stfs f8, 0xc1c(r28)
    frsp f0, f8
    lfs f1, lbl_808858E8
    addi r27, r1, 0x7d0
    lfs f7, 0x2e8(r1)
    lfs f8, lbl_808859E4
    fcmpu cr0, f1, f1
    fadds f9, f7, f0
    lfs f7, 0x2ec(r1)
    lfs f0, lbl_808858F8
    stfs f9, 0x2e8(r1)
    fmuls f7, f8, f7
    lfs f8, 0x538(r29)
    stfs f7, 0x14(r1)
    stfs f8, 0x18(r1)
    stfs f1, 0x1c(r1)
    stfs f1, 0x7fc(r1)
    stfs f1, 0x7f4(r1)
    stfs f1, 0x7f0(r1)
    stfs f1, 0x7ec(r1)
    stfs f1, 0x7e8(r1)
    stfs f1, 0x7e0(r1)
    stfs f1, 0x7dc(r1)
    stfs f1, 0x7d8(r1)
    stfs f1, 0x7d4(r1)
    stfs f0, 0x7f8(r1)
    stfs f0, 0x7e4(r1)
    stfs f0, 0x7d0(r1)
    beq lbl_fn_80385B48_00000C04
    addi r3, r1, 0x580
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r27
    addi r4, r1, 0x580
    addi r5, r1, 0x5b0
    bl fn_805F89F0
    addi r3, r1, 0x5b0
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    psq_st f2, 0x8(r27), 0, 0
    psq_st f3, 0x10(r27), 0, 0
    psq_st f4, 0x18(r27), 0, 0
    psq_st f5, 0x20(r27), 0, 0
    psq_st f6, 0x28(r27), 0, 0
lbl_fn_80385B48_00000C04:
    lfs f0, lbl_808858E8
    lfs f1, 0x18(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_80385B48_00000C64
    addi r3, r1, 0x520
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r27
    addi r4, r1, 0x520
    addi r5, r1, 0x550
    bl fn_805F89F0
    addi r3, r1, 0x550
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    psq_st f2, 0x8(r27), 0, 0
    psq_st f3, 0x10(r27), 0, 0
    psq_st f4, 0x18(r27), 0, 0
    psq_st f5, 0x20(r27), 0, 0
    psq_st f6, 0x28(r27), 0, 0
lbl_fn_80385B48_00000C64:
    lfs f0, lbl_808858E8
    lfs f1, 0x14(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_80385B48_00000CC4
    addi r3, r1, 0x4c0
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r27
    addi r4, r1, 0x4c0
    addi r5, r1, 0x4f0
    bl fn_805F89F0
    addi r3, r1, 0x4f0
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    psq_st f2, 0x8(r27), 0, 0
    psq_st f3, 0x10(r27), 0, 0
    psq_st f4, 0x18(r27), 0, 0
    psq_st f5, 0x20(r27), 0, 0
    psq_st f6, 0x28(r27), 0, 0
lbl_fn_80385B48_00000CC4:
    addi r4, r1, 0x2e0
    addi r3, r1, 0x7d0
    mr r5, r4
    bl fn_805F93C0
    lfs f7, 0x8(r30)
    addi r4, r1, 0x218
    lfs f0, 0x2e8(r1)
    addi r3, r1, 0x334
    lfs f9, 0x4(r30)
    addi r6, r1, 0x20c
    fadds f10, f7, f0
    lfs f8, 0x2e4(r1)
    lfs f7, 0x0(r30)
    addi r5, r1, 0x328
    fadds f8, f9, f8
    lfs f0, 0x2e0(r1)
    fadds f7, f7, f0
    stfs f8, 0x21c(r1)
    fmr f2, f10
    lfs f0, lbl_808858E8
    stfs f7, 0x218(r1)
    li r0, 0x0
    psq_l f1, 0x0(r4), 0, 0
    fcmpo cr0, f31, f0
    stfs f2, 0x33c(r1)
    frsp f8, f2
    lfs f7, 0x318(r1)
    addi r7, r1, 0x2d4
    psq_st f1, 0x0(r3), 0, 0
    lfs f0, 0x314(r1)
    lfs f11, 0x60c(r28)
    lfs f9, 0x310(r1)
    fmuls f12, f7, f11
    lfs f7, 0x338(r1)
    fmuls f13, f0, f11
    lfs f0, 0x334(r1)
    fmuls f9, f9, f11
    stw r0, 0x864(r1)
    fadds f8, f12, f8
    stw r0, 0x868(r1)
    fadds f7, f13, f7
    fadds f0, f9, f0
    stw r0, 0x86c(r1)
    fmr f2, f8
    stfs f0, 0x20c(r1)
    stfs f7, 0x210(r1)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x330(r1)
    stw r0, 0x870(r1)
    lfs f2, 0x8(r30)
    psq_l f1, 0x0(r30), 0, 0
    psq_st f1, 0x0(r7), 0, 0
    lfs f0, 0x2d8(r1)
    stfs f10, 0x220(r1)
    fadds f0, f0, f30
    stfs f9, 0x200(r1)
    stfs f13, 0x204(r1)
    stfs f12, 0x208(r1)
    stfs f8, 0x214(r1)
    stfs f2, 0x2dc(r1)
    stfs f0, 0x2d8(r1)
    ble lbl_fn_80385B48_00000DCC
    lfs f0, lbl_80885A3C
    fadds f7, f0, f31
    b lbl_fn_80385B48_00000DD4
lbl_fn_80385B48_00000DCC:
    lfs f0, lbl_80885A3C
    fsubs f7, f31, f0
lbl_fn_80385B48_00000DD4:
    lfs f0, lbl_808858E8
    addi r3, r1, 0x7a0
    stfs f7, 0x2c8(r1)
    li r4, 0x79
    stfs f0, 0x2cc(r1)
    stfs f0, 0x2d0(r1)
    lfs f1, 0x538(r29)
    bl fn_805F8E70
    addi r4, r1, 0x2c8
    addi r3, r1, 0x7a0
    mr r5, r4
    bl fn_805F93C0
    lfs f7, 0x2dc(r1)
    lis r7, 0x8000
    lfs f0, 0x2d0(r1)
    addi r4, r1, 0x830
    lfs f9, 0x2d8(r1)
    addi r5, r1, 0x2d4
    fadds f10, f7, f0
    lfs f8, 0x2cc(r1)
    lfs f7, 0x2d4(r1)
    addi r6, r1, 0x2bc
    lfs f0, 0x2c8(r1)
    fadds f8, f9, f8
    fadds f0, f7, f0
    stfs f10, 0x2c4(r1)
    lwz r3, lbl_8087EE98
    addi r7, r7, 0x8
    stfs f8, 0x2c0(r1)
    li r8, 0x0
    stfs f0, 0x2bc(r1)
    li r9, 0x0
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_80385B48_00001150
    lfs f7, 0x83c(r1)
    addi r3, r1, 0x1f4
    lfs f0, 0x2dc(r1)
    lfs f9, 0x838(r1)
    fsubs f10, f7, f0
    lfs f8, 0x2d8(r1)
    lfs f7, 0x834(r1)
    lfs f0, 0x2d4(r1)
    fsubs f8, f9, f8
    stfs f10, 0x1fc(r1)
    fsubs f0, f7, f0
    stfs f8, 0x1f8(r1)
    stfs f0, 0x1f4(r1)
    bl fn_805F9940
    lfs f0, lbl_80885A3C
    lfs f10, lbl_80885958
    fsubs f0, f1, f0
    fcmpo cr0, f10, f0
    ble lbl_fn_80385B48_00000EB0
    b lbl_fn_80385B48_00000EF0
lbl_fn_80385B48_00000EB0:
    lfs f7, 0x83c(r1)
    addi r3, r1, 0x1e8
    lfs f0, 0x2dc(r1)
    lfs f9, 0x838(r1)
    fsubs f10, f7, f0
    lfs f8, 0x2d8(r1)
    lfs f7, 0x834(r1)
    lfs f0, 0x2d4(r1)
    fsubs f8, f9, f8
    stfs f10, 0x1f0(r1)
    fsubs f0, f7, f0
    stfs f8, 0x1ec(r1)
    stfs f0, 0x1e8(r1)
    bl fn_805F9940
    lfs f0, lbl_80885A3C
    fsubs f10, f1, f0
lbl_fn_80385B48_00000EF0:
    fdivs f9, f10, f31
    lfs f0, lbl_808858E8
    lfs f8, 0x87c(r28)
    lfs f7, 0xc1c(r28)
    fabs f9, f9
    fcmpo cr0, f31, f0
    fadds f7, f8, f7
    frsp f0, f9
    fmuls f0, f7, f0
    ble lbl_fn_80385B48_00000F1C
    b lbl_fn_80385B48_00000F20
lbl_fn_80385B48_00000F1C:
    fneg f10, f10
lbl_fn_80385B48_00000F20:
    stfs f0, 0x2e8(r1)
    addi r27, r1, 0x770
    lfs f1, lbl_808858E8
    stfs f10, 0x2e0(r1)
    lfs f8, lbl_808859E4
    fcmpu cr0, f1, f1
    stfs f30, 0x2e4(r1)
    lfs f7, 0x2ec(r1)
    lfs f9, 0x538(r29)
    lfs f0, lbl_808858F8
    fmuls f7, f8, f7
    stfs f9, 0xc(r1)
    stfs f7, 0x8(r1)
    stfs f1, 0x10(r1)
    stfs f1, 0x79c(r1)
    stfs f1, 0x794(r1)
    stfs f1, 0x790(r1)
    stfs f1, 0x78c(r1)
    stfs f1, 0x788(r1)
    stfs f1, 0x780(r1)
    stfs f1, 0x77c(r1)
    stfs f1, 0x778(r1)
    stfs f1, 0x774(r1)
    stfs f0, 0x798(r1)
    stfs f0, 0x784(r1)
    stfs f0, 0x770(r1)
    beq lbl_fn_80385B48_00000FDC
    addi r3, r1, 0x460
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r27
    addi r4, r1, 0x460
    addi r5, r1, 0x490
    bl fn_805F89F0
    addi r3, r1, 0x490
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    psq_st f2, 0x8(r27), 0, 0
    psq_st f3, 0x10(r27), 0, 0
    psq_st f4, 0x18(r27), 0, 0
    psq_st f5, 0x20(r27), 0, 0
    psq_st f6, 0x28(r27), 0, 0
lbl_fn_80385B48_00000FDC:
    lfs f0, lbl_808858E8
    lfs f1, 0xc(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_80385B48_0000103C
    addi r3, r1, 0x400
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r27
    addi r4, r1, 0x400
    addi r5, r1, 0x430
    bl fn_805F89F0
    addi r3, r1, 0x430
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    psq_st f2, 0x8(r27), 0, 0
    psq_st f3, 0x10(r27), 0, 0
    psq_st f4, 0x18(r27), 0, 0
    psq_st f5, 0x20(r27), 0, 0
    psq_st f6, 0x28(r27), 0, 0
lbl_fn_80385B48_0000103C:
    lfs f0, lbl_808858E8
    lfs f1, 0x8(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_80385B48_0000109C
    addi r3, r1, 0x3a0
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r27
    addi r4, r1, 0x3a0
    addi r5, r1, 0x3d0
    bl fn_805F89F0
    addi r3, r1, 0x3d0
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    psq_st f2, 0x8(r27), 0, 0
    psq_st f3, 0x10(r27), 0, 0
    psq_st f4, 0x18(r27), 0, 0
    psq_st f5, 0x20(r27), 0, 0
    psq_st f6, 0x28(r27), 0, 0
lbl_fn_80385B48_0000109C:
    addi r4, r1, 0x2e0
    addi r3, r1, 0x770
    mr r5, r4
    bl fn_805F93C0
    lfs f7, 0x8(r30)
    addi r4, r1, 0x1dc
    lfs f0, 0x2e8(r1)
    addi r3, r1, 0x334
    lfs f9, 0x4(r30)
    addi r6, r1, 0x1d0
    fadds f2, f7, f0
    lfs f8, 0x2e4(r1)
    lfs f7, 0x0(r30)
    addi r5, r1, 0x328
    fadds f8, f9, f8
    lfs f0, 0x2e0(r1)
    fadds f7, f7, f0
    stfs f8, 0x1e0(r1)
    lfs f10, 0x314(r1)
    frsp f8, f2
    stfs f7, 0x1dc(r1)
    lfs f9, 0x310(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lfs f0, 0x318(r1)
    stfs f2, 0x33c(r1)
    lfs f7, 0x338(r1)
    lfs f11, 0x60c(r28)
    stfs f2, 0x1e4(r1)
    fmuls f12, f0, f11
    lfs f0, 0x334(r1)
    fmuls f10, f10, f11
    fmuls f9, f9, f11
    stfs f12, 0x1cc(r1)
    fadds f2, f12, f8
    fadds f7, f10, f7
    stfs f9, 0x1c4(r1)
    fadds f0, f9, f0
    stfs f7, 0x1d4(r1)
    stfs f0, 0x1d0(r1)
    psq_l f1, 0x0(r6), 0, 0
    stfs f10, 0x1c8(r1)
    stfs f2, 0x1d8(r1)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x330(r1)
lbl_fn_80385B48_00001150:
    lfs f8, 0x318(r1)
    addi r3, r1, 0x2b0
    lfs f7, 0x310(r1)
    lfs f0, lbl_808858E8
    stfs f7, 0x2b0(r1)
    stfs f0, 0x2b4(r1)
    stfs f8, 0x2b8(r1)
    bl fn_805F9920
    lfs f0, lbl_808859C4
    fcmpo cr0, f1, f0
    ble lbl_fn_80385B48_0000135C
    addi r3, r1, 0x2b0
    mr r4, r3
    bl fn_805F98D0
    addi r27, r1, 0x334
    lfs f2, 0x33c(r1)
    addi r4, r1, 0x358
    psq_l f1, 0x0(r27), 0, 0
    stfs f2, 0x360(r1)
    addi r5, r1, 0x2b0
    lfs f2, 0x2b8(r1)
    addi r6, r1, 0x364
    psq_st f1, 0x0(r4), 0, 0
    mr r3, r30
    psq_l f1, 0x0(r5), 0, 0
    addi r5, r1, 0x2a4
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x36c(r1)
    bl fn_80050900
    addi r3, r1, 0x2a4
    lfs f2, 0x2ac(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r5, r1, 0x2d4
    lis r3, 0x8000
    psq_st f1, 0x0(r5), 0, 0
    addi r7, r3, 0x8
    addi r6, r1, 0x2bc
    psq_l f1, 0x0(r27), 0, 0
    addi r4, r1, 0x830
    stfs f2, 0x2dc(r1)
    li r8, 0x0
    lfs f2, 0x33c(r1)
    li r9, 0x0
    psq_st f1, 0x0(r6), 0, 0
    lwz r3, lbl_8087EE98
    stfs f2, 0x2c4(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_80385B48_000012B4
    lfs f7, 0x83c(r1)
    addi r3, r1, 0x1b8
    lfs f0, 0x860(r1)
    addi r5, r1, 0x1ac
    lfs f9, 0x838(r1)
    addi r4, r1, 0x328
    fadds f2, f7, f0
    lfs f8, 0x85c(r1)
    lfs f7, 0x834(r1)
    fadds f8, f9, f8
    lfs f0, 0x858(r1)
    stfs f2, 0x33c(r1)
    fadds f0, f7, f0
    lfs f10, 0x314(r1)
    stfs f8, 0x1bc(r1)
    lfs f9, 0x310(r1)
    frsp f8, f2
    stfs f0, 0x1b8(r1)
    lfs f11, 0x318(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    lfs f12, 0x60c(r28)
    lfs f7, 0x338(r1)
    fmuls f10, f10, f12
    lfs f0, 0x334(r1)
    fmuls f9, f9, f12
    stfs f2, 0x1c0(r1)
    fmuls f11, f11, f12
    fadds f7, f10, f7
    fadds f0, f9, f0
    stfs f11, 0x1a8(r1)
    fadds f2, f11, f8
    stfs f7, 0x1b0(r1)
    stfs f0, 0x1ac(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f9, 0x1a0(r1)
    stfs f10, 0x1a4(r1)
    stfs f2, 0x1b4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x330(r1)
lbl_fn_80385B48_000012B4:
    lis r6, lbl_807C7030@ha
    lis r7, 0x8000
    lwz r3, lbl_8087EE98
    addi r4, r1, 0x830
    lfs f1, lbl_80885A44
    addi r5, r1, 0x334
    addi r6, r6, lbl_807C7030@l
    addi r7, r7, 0x8
    li r8, 0x0
    li r9, 0x0
    bl fn_8004D388
    cmpwi r3, 0x0
    beq lbl_fn_80385B48_0000135C
    addi r4, r1, 0x840
    lfs f2, 0x848(r1)
    psq_l f1, 0x0(r4), 0, 0
    addi r3, r1, 0x334
    psq_st f1, 0x0(r3), 0, 0
    addi r4, r1, 0x194
    lfs f0, 0x314(r1)
    addi r3, r1, 0x328
    stfs f2, 0x33c(r1)
    lfs f8, 0x310(r1)
    lfs f9, 0x60c(r28)
    lfs f7, 0x318(r1)
    fmuls f11, f0, f9
    lfs f0, 0x334(r1)
    fmuls f10, f7, f9
    lfs f7, 0x338(r1)
    fmuls f8, f8, f9
    stfs f11, 0x18c(r1)
    fadds f2, f10, f2
    stfs f10, 0x190(r1)
    fadds f7, f11, f7
    fadds f0, f8, f0
    stfs f8, 0x188(r1)
    stfs f0, 0x194(r1)
    stfs f7, 0x198(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0x19c(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x330(r1)
lbl_fn_80385B48_0000135C:
    addi r3, r1, 0x334
    lfs f2, 0x33c(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r5, r1, 0x2d4
    psq_st f1, 0x0(r5), 0, 0
    lis r3, 0x8000
    addi r7, r3, 0x8
    lfs f11, 0x318(r1)
    stfs f2, 0x2dc(r1)
    addi r10, r1, 0x17c
    lfs f10, 0x314(r1)
    addi r6, r1, 0x2bc
    lfs f7, 0x87c(r28)
    addi r27, r1, 0x298
    lfs f0, 0xc1c(r28)
    addi r4, r1, 0x830
    lfs f9, 0x310(r1)
    li r8, 0x0
    fadds f12, f7, f0
    lfs f8, 0x33c(r1)
    lfs f7, 0x338(r1)
    li r9, 0x0
    lfs f0, 0x334(r1)
    fneg f12, f12
    lwz r3, lbl_8087EE98
    fmuls f11, f11, f12
    fmuls f10, f10, f12
    fmuls f9, f9, f12
    stfs f11, 0x178(r1)
    fadds f8, f11, f8
    fadds f7, f10, f7
    stfs f9, 0x170(r1)
    fadds f0, f9, f0
    fmr f2, f8
    stfs f7, 0x180(r1)
    stfs f0, 0x17c(r1)
    psq_l f1, 0x0(r10), 0, 0
    stfs f2, 0x2c4(r1)
    frsp f2, f2
    stfs f10, 0x174(r1)
    stfs f8, 0x184(r1)
    psq_st f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0x2a0(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_80385B48_00001458
    lfs f7, 0x83c(r1)
    addi r3, r1, 0x164
    lfs f0, 0x860(r1)
    lfs f9, 0x838(r1)
    fadds f2, f7, f0
    lfs f8, 0x85c(r1)
    lfs f7, 0x834(r1)
    lfs f0, 0x858(r1)
    fadds f8, f9, f8
    stfs f2, 0x16c(r1)
    fadds f0, f7, f0
    stfs f8, 0x168(r1)
    stfs f0, 0x164(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0x2a0(r1)
lbl_fn_80385B48_00001458:
    addi r3, r1, 0x298
    lfs f2, 0x2a0(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r5, r1, 0x2d4
    lis r3, 0x8000
    stfs f2, 0x2dc(r1)
    lfs f2, 0x33c(r1)
    addi r7, r3, 0x8
    addi r27, r1, 0x334
    psq_st f1, 0x0(r5), 0, 0
    addi r6, r1, 0x2bc
    psq_l f1, 0x0(r27), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    addi r4, r1, 0x830
    lwz r3, lbl_8087EE98
    li r8, 0x0
    stfs f2, 0x2c4(r1)
    li r9, 0x0
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_80385B48_0000154C
    lfs f7, 0x83c(r1)
    addi r3, r1, 0x158
    lfs f0, 0x860(r1)
    addi r5, r1, 0x14c
    lfs f9, 0x838(r1)
    addi r4, r1, 0x328
    fadds f2, f7, f0
    lfs f8, 0x85c(r1)
    lfs f7, 0x834(r1)
    fadds f8, f9, f8
    lfs f0, 0x858(r1)
    stfs f2, 0x33c(r1)
    fadds f0, f7, f0
    lfs f10, 0x314(r1)
    stfs f8, 0x15c(r1)
    lfs f9, 0x310(r1)
    frsp f8, f2
    stfs f0, 0x158(r1)
    lfs f11, 0x318(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    lfs f12, 0x60c(r28)
    lfs f7, 0x338(r1)
    fmuls f10, f10, f12
    lfs f0, 0x334(r1)
    fmuls f9, f9, f12
    stfs f2, 0x160(r1)
    fmuls f11, f11, f12
    fadds f7, f10, f7
    fadds f0, f9, f0
    stfs f11, 0x148(r1)
    fadds f2, f11, f8
    stfs f7, 0x150(r1)
    stfs f0, 0x14c(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f9, 0x140(r1)
    stfs f10, 0x144(r1)
    stfs f2, 0x154(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x330(r1)
lbl_fn_80385B48_0000154C:
    lis r6, lbl_807C7030@ha
    lis r7, 0x8000
    lwz r3, lbl_8087EE98
    addi r4, r1, 0x830
    lfs f1, lbl_80885A3C
    addi r5, r1, 0x334
    addi r6, r6, lbl_807C7030@l
    addi r7, r7, 0x8
    li r8, 0x0
    li r9, 0x0
    bl fn_8004D388
    cmpwi r3, 0x0
    beq lbl_fn_80385B48_000015F4
    addi r4, r1, 0x840
    lfs f2, 0x848(r1)
    psq_l f1, 0x0(r4), 0, 0
    addi r3, r1, 0x334
    psq_st f1, 0x0(r3), 0, 0
    addi r4, r1, 0x134
    lfs f0, 0x314(r1)
    addi r3, r1, 0x328
    stfs f2, 0x33c(r1)
    lfs f8, 0x310(r1)
    lfs f9, 0x60c(r28)
    lfs f7, 0x318(r1)
    fmuls f11, f0, f9
    lfs f0, 0x334(r1)
    fmuls f10, f7, f9
    lfs f7, 0x338(r1)
    fmuls f8, f8, f9
    stfs f11, 0x12c(r1)
    fadds f2, f10, f2
    stfs f10, 0x130(r1)
    fadds f7, f11, f7
    fadds f0, f8, f0
    stfs f8, 0x128(r1)
    stfs f0, 0x134(r1)
    stfs f7, 0x138(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0x13c(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x330(r1)
lbl_fn_80385B48_000015F4:
    lwz r0, 0x520(r29)
    cmpwi r0, 0x0
    blt lbl_fn_80385B48_000018DC
    addi r4, r1, 0x334
    lfs f2, 0x33c(r1)
    psq_l f1, 0x0(r4), 0, 0
    addi r3, r1, 0x340
    stfs f2, 0x348(r1)
    addi r5, r1, 0x328
    lfs f2, 0x330(r1)
    addi r4, r1, 0x34c
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x354(r1)
    bge lbl_fn_80385B48_0000163C
    li r3, 0x0
    b lbl_fn_80385B48_00001648
lbl_fn_80385B48_0000163C:
    mulli r0, r0, 0x30
    lwz r3, 0xec(r29)
    add r3, r3, r0
lbl_fn_80385B48_00001648:
    lfs f7, 0x1c(r3)
    addi r5, r1, 0x11c
    lfs f8, 0xc(r3)
    addi r4, r1, 0x288
    lfs f2, 0x2c(r3)
    addi r3, r1, 0x340
    lfs f0, lbl_80885A64
    stfs f8, 0x11c(r1)
    stfs f7, 0x120(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0x124(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x290(r1)
    stfs f0, 0x294(r1)
    bl fn_80051B70
    cmpwi r3, 0x0
    beq lbl_fn_80385B48_000018DC
    lfs f7, lbl_808858E8
    addi r3, r1, 0x370
    lfs f0, lbl_808858F8
    li r4, 0x79
    stfs f7, 0x104(r1)
    lfs f26, 0x294(r1)
    stfs f7, 0x108(r1)
    stfs f0, 0x10c(r1)
    lfs f1, 0x538(r29)
    bl fn_805F8E70
    addi r4, r1, 0x104
    addi r3, r1, 0x370
    mr r5, r4
    bl fn_805F93C0
    lfs f8, 0x10c(r1)
    addi r3, r1, 0x26c
    lfs f7, 0x108(r1)
    fmuls f9, f8, f26
    lfs f0, 0x104(r1)
    fmuls f10, f7, f26
    lfs f8, 0x290(r1)
    fmuls f11, f0, f26
    lfs f7, 0x28c(r1)
    fadds f12, f8, f9
    lfs f0, 0x288(r1)
    fadds f13, f7, f10
    lfs f8, 0x33c(r1)
    fadds f26, f0, f11
    lfs f7, 0x338(r1)
    lfs f0, 0x334(r1)
    fsubs f8, f12, f8
    fsubs f7, f13, f7
    stfs f11, 0x110(r1)
    fsubs f0, f26, f0
    stfs f10, 0x114(r1)
    stfs f9, 0x118(r1)
    stfs f26, 0x278(r1)
    stfs f13, 0x27c(r1)
    stfs f12, 0x280(r1)
    stfs f0, 0x26c(r1)
    stfs f7, 0x270(r1)
    stfs f8, 0x274(r1)
    bl fn_805F9940
    lfs f0, lbl_808859DC
    fmr f31, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_80385B48_000018DC
    addi r3, r1, 0x26c
    mr r4, r3
    bl fn_805F98D0
    addi r3, r1, 0x334
    lfs f2, 0x33c(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r27, r1, 0x2d4
    psq_st f1, 0x0(r27), 0, 0
    addi r3, r1, 0x310
    addi r4, r1, 0x26c
    stfs f2, 0x2dc(r1)
    bl fn_805F9990
    lfs f0, lbl_80885A3C
    addi r3, r1, 0xf8
    lfs f7, 0x318(r1)
    addi r6, r1, 0x2bc
    fadds f10, f0, f31
    lfs f0, 0x314(r1)
    lfs f9, 0x310(r1)
    lfs f8, 0x2dc(r1)
    fmuls f11, f7, f10
    lfs f7, 0x2d8(r1)
    fmuls f12, f0, f10
    lfs f0, 0x2d4(r1)
    fmuls f9, f9, f10
    stfs f11, 0xe8(r1)
    fmuls f10, f11, f1
    stfs f9, 0xe0(r1)
    fmuls f11, f12, f1
    fmuls f9, f9, f1
    stfs f12, 0xe4(r1)
    fadds f2, f8, f10
    fadds f7, f7, f11
    stfs f9, 0xec(r1)
    fadds f0, f0, f9
    stfs f7, 0xfc(r1)
    stfs f0, 0xf8(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x2c4(r1)
    lwz r0, 0x674(r29)
    stfs f11, 0xf0(r1)
    cmpwi r0, 0x0
    stfs f10, 0xf4(r1)
    stfs f2, 0x100(r1)
    bge lbl_fn_80385B48_00001828
    lis r7, 0x8000
    lwz r3, lbl_8087EE98
    mr r5, r27
    addi r4, r1, 0x830
    addi r7, r7, 0x8
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ED34
    cmpwi r3, 0x0
    bne lbl_fn_80385B48_000018DC
lbl_fn_80385B48_00001828:
    addi r3, r1, 0x310
    addi r4, r1, 0x26c
    bl fn_805F9990
    lfs f11, 0x318(r1)
    addi r4, r1, 0xbc
    lfs f10, 0x314(r1)
    addi r3, r1, 0x328
    fmuls f12, f11, f31
    lfs f9, 0x310(r1)
    fmuls f13, f10, f31
    lfs f8, 0x334(r1)
    fmuls f26, f9, f31
    lfs f7, 0x338(r1)
    fmuls f28, f13, f1
    stfs f26, 0xc8(r1)
    fmuls f26, f26, f1
    lfs f0, 0x33c(r1)
    fmuls f27, f12, f1
    stfs f13, 0xcc(r1)
    fadds f7, f7, f28
    stfs f12, 0xd0(r1)
    fadds f0, f0, f27
    fadds f8, f8, f26
    stfs f7, 0x338(r1)
    stfs f8, 0x334(r1)
    stfs f0, 0x33c(r1)
    lfs f13, 0x60c(r28)
    stfs f26, 0xd4(r1)
    fmuls f11, f11, f13
    fmuls f10, f10, f13
    stfs f28, 0xd8(r1)
    fmuls f9, f9, f13
    fadds f2, f11, f0
    stfs f27, 0xdc(r1)
    fadds f0, f10, f7
    fadds f7, f9, f8
    stfs f9, 0xb0(r1)
    stfs f7, 0xbc(r1)
    stfs f0, 0xc0(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f10, 0xb4(r1)
    stfs f11, 0xb8(r1)
    stfs f2, 0xc4(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x330(r1)
lbl_fn_80385B48_000018DC:
    addi r3, r1, 0x334
    lfs f2, 0x33c(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x328
    psq_st f1, 0x8(r28), 0, 0
    lfs f8, 0x50(r28)
    stfs f2, 0x10(r28)
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x330(r1)
    stfs f2, 0x1c(r28)
    psq_st f1, 0x14(r28), 0, 0
    lwz r0, 0x12a4(r29)
    extrwi. r0, r0, 1, 25
    bne lbl_fn_80385B48_0000191C
    lfs f9, lbl_80885948
    b lbl_fn_80385B48_00001920
lbl_fn_80385B48_0000191C:
    lfs f9, 0x610(r28)
lbl_fn_80385B48_00001920:
    cmpwi r31, 0x0
    beq lbl_fn_80385B48_00001948
    lfs f7, lbl_8088593C
    lfs f0, lbl_80885A24
    fnmsubs f7, f7, f9, f8
    fmuls f0, f0, f9
    fcmpo cr0, f7, f0
    bge lbl_fn_80385B48_0000195C
    fmr f7, f0
    b lbl_fn_80385B48_0000195C
lbl_fn_80385B48_00001948:
    lfs f0, lbl_8088593C
    fmadds f7, f0, f9, f8
    fcmpo cr0, f7, f9
    ble lbl_fn_80385B48_0000195C
    fmr f7, f9
lbl_fn_80385B48_0000195C:
    stfs f7, 0x50(r28)
    mr r3, r28
    bl fn_8004B378
    mr r4, r28
    addi r3, r28, 0x1f4
    bl fn_80392A04
    mr r3, r28
    bl fn_803918EC
    mr r3, r28
    bl fn_803920C8
    mr r3, r28
    bl fn_803928C0
    addi r3, r28, 0x1f4
    bl fn_8004B378
    lwz r3, lbl_8087EFB4
    addi r4, r28, 0x1f4
    bl fn_80116BD4
lbl_fn_80385B48_000019A0:
    li r0, 0x8f8
    addi r11, r1, 0x8a0
    psq_lx f31, r1, r0, 0, 0
    lfd f31, 0x8f0(r1)
    li r0, 0x8e8
    psq_lx f30, r1, r0, 0, 0
    lfd f30, 0x8e0(r1)
    li r0, 0x8d8
    psq_lx f29, r1, r0, 0, 0
    lfd f29, 0x8d0(r1)
    li r0, 0x8c8
    psq_lx f28, r1, r0, 0, 0
    lfd f28, 0x8c0(r1)
    li r0, 0x8b8
    psq_lx f27, r1, r0, 0, 0
    lfd f27, 0x8b0(r1)
    li r0, 0x8a8
    psq_lx f26, r1, r0, 0, 0
    lfd f26, 0x8a0(r1)
    bl _restgpr_27
    lwz r0, 0x904(r1)
    mtlr r0
    addi r1, r1, 0x900
    blr
}
