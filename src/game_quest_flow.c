#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __register_global_object(void);
extern void _restgpr_26(void);
extern void _savegpr_26(void);
extern void fn_8000D430(void);
extern void fn_8003EFB0(void);
extern void fn_8004B290(void);
extern void fn_8004B338(void);
extern void fn_8004B378(void);
extern void fn_8004D388(void);
extern void fn_8007A7BC(void);
extern void fn_8009076C(void);
extern void fn_80092A4C(void);
extern void fn_80093F1C(void);
extern void fn_80094778(void);
extern void fn_80095F10(void);
extern void fn_8009757C(void);
extern void fn_80097C08(void);
extern void fn_80097CCC(void);
extern void fn_80097D7C(void);
extern void fn_80097E80(void);
extern void fn_80098698(void);
extern void fn_800C31F4(void);
extern void fn_800CB3A0(void);
extern void fn_80106728(void);
extern void fn_8010743C(void);
extern void fn_80107574(void);
extern void fn_8012111C(void);
extern void fn_80129A48(void);
extern void fn_80129A6C(void);
extern void fn_80147A18(void);
extern void fn_80148B38(void);
extern void fn_8014DEE4(void);
extern void fn_80154C08(void);
extern void fn_80164D24(void);
extern void fn_80175B18(void);
extern void fn_80176E30(void);
extern void fn_80179D44(void);
extern void fn_802185FC(void);
extern void fn_80219558(void);
extern void fn_80373148(void);
extern void fn_80376150(void);
extern void fn_80418318(void);
extern void fn_804188A0(void);
extern void fn_80473F18(void);
extern void fn_805663FC(void);
extern void fn_8056640C(void);
extern void fn_805F89F0(void);
extern void fn_805F8CA0(void);
extern void fn_805F8E70(void);
extern void fn_805F90D0(void);
extern void fn_805F9160(void);
extern void fn_805F9190(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_805F9990(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);
extern void fn_80695AD0(void);

/* External data declarations */
extern u8 lbl_80737490[];
extern u8 lbl_80737808[];
extern u8 lbl_80737810[];
extern u8 lbl_80737A9C[];
extern u8 lbl_80766768[];
extern u8 lbl_8077A980[];
extern u8 lbl_8077A98C[];
extern u8 lbl_807C6BB8[];
extern u8 lbl_807C7030[];
extern u8 lbl_807C7B10[];

/* Small data declarations */
extern u32 lbl_8087EE74;
extern u32 lbl_8087EE98;
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F430;
extern u32 lbl_8087F558;
extern u32 lbl_8087F610;
extern u32 lbl_8087FA20;
extern u32 lbl_80881964;
extern u32 lbl_8088196C;
extern u32 lbl_80881974;
extern u32 lbl_80881978;
extern u32 lbl_80881980;
extern u32 lbl_80881994;
extern u32 lbl_808819A0;
extern u32 lbl_808819A8;
extern u32 lbl_808819B0;
extern u32 lbl_808819B4;
extern u32 lbl_808819C4;
extern u32 lbl_808819C8;
extern u32 lbl_808819CC;
extern u32 lbl_808819DC;
extern u32 lbl_808819F4;
extern u32 lbl_80881A00;
extern u32 lbl_80881A0C;
extern u32 lbl_80881A10;
extern u32 lbl_80881A14;
extern u32 lbl_80881A1C;
extern u32 lbl_80881A40;
extern u32 lbl_80881A4C;
extern u32 lbl_80881A50;
extern u32 lbl_80881A5C;
extern u32 lbl_80881A74;
extern u32 lbl_80881A78;
extern u32 lbl_80881A7C;
extern u32 lbl_80881A80;
extern u32 lbl_80881A84;
extern u32 lbl_80881A88;
extern u32 lbl_80881A8C;
extern u32 lbl_80881A90;
extern u32 lbl_80881A94;
extern u32 lbl_80881A98;
extern u32 lbl_80881A9C;
extern u32 lbl_80881AA0;
extern u32 lbl_80881AA4;
extern u32 lbl_80881AA8;

/* Function declarations */
void fn_801446E8(void);
void fn_801446F0(void);
void fn_80144710(void);
void fn_80144ED4(void);
void fn_80144F4C(void);
void fn_80145334(void);

asm void fn_801446E8(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_801446F0(void)
{
    nofralloc
    lfs f0, lbl_8088196C
    stfs f0, 0x574(r3)
    stfs f0, 0x578(r3)
    stfs f0, 0x57c(r3)
    stfs f0, 0x570(r3)
    stfs f0, 0x580(r3)
    stfs f0, 0x584(r3)
    blr
}

asm void fn_80144710(void)
{
    nofralloc
    stwu r1, -0x450(r1)
    mflr r0
    stw r0, 0x454(r1)
    stfd f31, 0x440(r1)
    psq_st f31, 0x448(r1), 0, 0
    stfd f30, 0x430(r1)
    psq_st f30, 0x438(r1), 0, 0
    stfd f29, 0x420(r1)
    psq_st f29, 0x428(r1), 0, 0
    stfd f28, 0x410(r1)
    psq_st f28, 0x418(r1), 0, 0
    stfd f27, 0x400(r1)
    psq_st f27, 0x408(r1), 0, 0
    stfd f26, 0x3f0(r1)
    psq_st f26, 0x3f8(r1), 0, 0
    stw r31, 0x3ec(r1)
    mr r31, r3
    stw r30, 0x3e8(r1)
    stw r29, 0x3e4(r1)
    lwz r5, 0xf1c(r3)
    cmpwi r5, 0x0
    beq lbl_fn_80144710_00000320
    psq_l f1, 0x0(r5), 0, 0
    addi r30, r1, 0xbc
    psq_l f2, 0x8(r5), 0, 0
    addi r6, r1, 0x3a8
    psq_l f3, 0x10(r5), 0, 0
    addi r7, r1, 0xb0
    psq_l f4, 0x18(r5), 0, 0
    addi r8, r1, 0xa4
    psq_l f5, 0x20(r5), 0, 0
    mr r4, r30
    psq_l f6, 0x28(r5), 0, 0
    mr r5, r30
    lfs f7, lbl_8088196C
    psq_st f2, 0x8(r6), 0, 0
    lfs f0, lbl_80881964
    psq_st f4, 0x18(r6), 0, 0
    lfs f10, 0x3b4(r1)
    psq_st f6, 0x28(r6), 0, 0
    lfs f9, 0x3c4(r1)
    lfs f8, 0x3d4(r1)
    stfs f10, 0xb0(r1)
    fmr f2, f8
    stfs f9, 0xb4(r1)
    psq_st f1, 0x0(r6), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    psq_st f3, 0x10(r6), 0, 0
    psq_st f5, 0x20(r6), 0, 0
    stfs f2, 0x530(r3)
    fmr f2, f0
    psq_st f1, 0x528(r3), 0, 0
    mr r3, r6
    stfs f7, 0xa4(r1)
    stfs f7, 0xa8(r1)
    psq_l f1, 0x0(r8), 0, 0
    stfs f8, 0xb8(r1)
    stfs f7, 0x3b4(r1)
    stfs f7, 0x3c4(r1)
    stfs f7, 0x3d4(r1)
    stfs f0, 0xac(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0xc4(r1)
    bl fn_805F93C0
    lfs f2, 0xc4(r1)
    addi r29, r1, 0x98
    lfs f7, lbl_8088196C
    fabs f8, f2
    stfs f7, 0xc0(r1)
    lfs f0, lbl_808819C4
    psq_l f1, 0x0(r30), 0, 0
    frsp f8, f8
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0xa0(r1)
    fcmpo cr0, f8, f0
    bge lbl_fn_80144710_00000178
    lfs f0, 0x98(r1)
    fcmpo cr0, f0, f7
    ble lbl_fn_80144710_0000016C
    lfs f0, lbl_808819C8
    b lbl_fn_80144710_00000170
lbl_fn_80144710_0000016C:
    lfs f0, lbl_808819CC
lbl_fn_80144710_00000170:
    stfs f0, 0x90(r1)
    b lbl_fn_80144710_0000018C
lbl_fn_80144710_00000178:
    frsp f2, f2
    lfs f1, 0x98(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x90(r1)
lbl_fn_80144710_0000018C:
    lfs f0, 0x90(r1)
    addi r3, r1, 0x308
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f7, lbl_8088196C
    addi r4, r1, 0x80
    lfs f26, 0x310(r1)
    mr r5, r4
    lfs f27, 0x30c(r1)
    addi r3, r1, 0x338
    lfs f28, 0x308(r1)
    lfs f29, 0x320(r1)
    lfs f31, 0x31c(r1)
    lfs f30, 0x318(r1)
    lfs f13, 0x330(r1)
    lfs f12, 0x32c(r1)
    lfs f11, 0x328(r1)
    lfs f10, 0x334(r1)
    lfs f9, 0x324(r1)
    lfs f8, 0x314(r1)
    lfs f0, lbl_80881964
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0xa0(r1)
    stfs f7, 0x368(r1)
    stfs f7, 0x36c(r1)
    stfs f7, 0x370(r1)
    stfs f0, 0x374(r1)
    stfs f28, 0x50(r1)
    stfs f27, 0x54(r1)
    stfs f26, 0x58(r1)
    stfs f28, 0x338(r1)
    stfs f27, 0x33c(r1)
    stfs f26, 0x340(r1)
    stfs f30, 0x5c(r1)
    stfs f31, 0x60(r1)
    stfs f29, 0x64(r1)
    stfs f30, 0x348(r1)
    stfs f31, 0x34c(r1)
    stfs f29, 0x350(r1)
    stfs f11, 0x68(r1)
    stfs f12, 0x6c(r1)
    stfs f13, 0x70(r1)
    stfs f11, 0x358(r1)
    stfs f12, 0x35c(r1)
    stfs f13, 0x360(r1)
    stfs f8, 0x74(r1)
    stfs f9, 0x78(r1)
    stfs f10, 0x7c(r1)
    stfs f8, 0x344(r1)
    stfs f9, 0x354(r1)
    stfs f10, 0x364(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x88(r1)
    bl fn_805F9750
    lfs f2, 0x88(r1)
    lfs f0, lbl_808819C4
    fabs f7, f2
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_80144710_000002A8
    lfs f7, 0x84(r1)
    lfs f0, lbl_8088196C
    fcmpo cr0, f7, f0
    ble lbl_fn_80144710_00000298
    lfs f0, lbl_808819C8
    b lbl_fn_80144710_0000029C
lbl_fn_80144710_00000298:
    lfs f0, lbl_808819CC
lbl_fn_80144710_0000029C:
    fneg f0, f0
    stfs f0, 0x8c(r1)
    b lbl_fn_80144710_000002BC
lbl_fn_80144710_000002A8:
    lfs f1, 0x84(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x8c(r1)
lbl_fn_80144710_000002BC:
    lfs f0, lbl_8088196C
    addi r3, r1, 0x8c
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x3a8
    fmr f2, f0
    psq_st f1, 0x534(r31), 0, 0
    lwz r4, 0xf1c(r31)
    stfs f2, 0xa0(r1)
    frsp f2, f2
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x53c(r31)
    psq_l f1, 0x0(r4), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    stfs f0, 0x94(r1)
    psq_st f1, 0x0(r3), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f4, 0x18(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    psq_st f6, 0x28(r3), 0, 0
    b lbl_fn_80144710_000006B4
lbl_fn_80144710_00000320:
    lfs f0, 0x52c(r3)
    stfs f0, 0x1c(r1)
    lwz r0, 0x1c(r1)
    rlwinm r4, r0, 0, 1, 8
    subis r0, r4, 0x7f80
    cmplwi r0, 0x0
    beq lbl_fn_80144710_00000374
    lfs f0, 0x528(r3)
    stfs f0, 0x18(r1)
    lwz r0, 0x18(r1)
    rlwinm r4, r0, 0, 1, 8
    subis r0, r4, 0x7f80
    cmplwi r0, 0x0
    beq lbl_fn_80144710_00000374
    lfs f2, 0x530(r3)
    stfs f2, 0x14(r1)
    lwz r0, 0x14(r1)
    rlwinm r4, r0, 0, 1, 8
    subis r0, r4, 0x7f80
    cmplwi r0, 0x0
    bne lbl_fn_80144710_00000388
lbl_fn_80144710_00000374:
    psq_l f1, 0x550(r3), 0, 0
    lfs f2, 0x558(r3)
    psq_st f1, 0x528(r3), 0, 0
    stfs f2, 0x530(r3)
    b lbl_fn_80144710_00000394
lbl_fn_80144710_00000388:
    psq_l f1, 0x528(r3), 0, 0
    psq_st f1, 0x550(r3), 0, 0
    stfs f2, 0x558(r3)
lbl_fn_80144710_00000394:
    lfs f1, 0x528(r31)
    addi r3, r1, 0x378
    lfs f2, 0x52c(r31)
    lfs f3, 0x530(r31)
    bl fn_805F90D0
    addi r4, r1, 0x378
    addi r3, r1, 0x3a8
    psq_l f1, 0x0(r4), 0, 0
    psq_l f2, 0x8(r4), 0, 0
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
    lfs f0, 0x538(r31)
    stfs f0, 0x10(r1)
    lwz r0, 0x10(r1)
    rlwinm r3, r0, 0, 1, 8
    subis r0, r3, 0x7f80
    cmplwi r0, 0x0
    beq lbl_fn_80144710_00000434
    lfs f0, 0x534(r31)
    stfs f0, 0xc(r1)
    lwz r0, 0xc(r1)
    rlwinm r3, r0, 0, 1, 8
    subis r0, r3, 0x7f80
    cmplwi r0, 0x0
    beq lbl_fn_80144710_00000434
    lfs f0, 0x53c(r31)
    stfs f0, 0x8(r1)
    lwz r0, 0x8(r1)
    rlwinm r3, r0, 0, 1, 8
    subis r0, r3, 0x7f80
    cmplwi r0, 0x0
    bne lbl_fn_80144710_00000444
lbl_fn_80144710_00000434:
    lfs f0, lbl_8088196C
    stfs f0, 0x534(r31)
    stfs f0, 0x538(r31)
    stfs f0, 0x53c(r31)
lbl_fn_80144710_00000444:
    lfs f7, lbl_8088196C
    addi r29, r1, 0x3a8
    lfs f0, lbl_80881964
    addi r30, r1, 0x1b8
    stfs f7, 0x1e4(r1)
    stfs f7, 0x1dc(r1)
    stfs f7, 0x1d8(r1)
    stfs f7, 0x1d4(r1)
    stfs f7, 0x1d0(r1)
    stfs f7, 0x1c8(r1)
    stfs f7, 0x1c4(r1)
    stfs f7, 0x1c0(r1)
    stfs f7, 0x1bc(r1)
    stfs f0, 0x1e0(r1)
    stfs f0, 0x1cc(r1)
    stfs f0, 0x1b8(r1)
    lfs f1, 0x538(r31)
    fcmpu cr0, f7, f1
    beq lbl_fn_80144710_000004E0
    addi r3, r1, 0x2a8
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x2a8
    addi r5, r1, 0x2d8
    bl fn_805F89F0
    addi r3, r1, 0x2d8
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
lbl_fn_80144710_000004E0:
    lfs f0, lbl_8088196C
    lfs f1, 0x534(r31)
    fcmpu cr0, f0, f1
    beq lbl_fn_80144710_00000540
    addi r3, r1, 0x248
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x248
    addi r5, r1, 0x278
    bl fn_805F89F0
    addi r3, r1, 0x278
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
lbl_fn_80144710_00000540:
    lfs f0, lbl_8088196C
    lfs f1, 0x53c(r31)
    fcmpu cr0, f0, f1
    beq lbl_fn_80144710_000005A0
    addi r3, r1, 0x1e8
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x1e8
    addi r5, r1, 0x218
    bl fn_805F89F0
    addi r3, r1, 0x218
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
lbl_fn_80144710_000005A0:
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x188
    bl fn_805F89F0
    addi r3, r1, 0x188
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
    lwz r0, 0x958(r31)
    rlwinm r0, r0, 0, 25, 25
    cmplwi r0, 0x40
    bne lbl_fn_80144710_00000658
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x8
    beq lbl_fn_80144710_00000658
    lfs f1, lbl_80881A0C
    addi r3, r1, 0x158
    li r4, 0x7a
    bl fn_805F8E70
    addi r3, r1, 0x3a8
    addi r4, r1, 0x158
    addi r5, r1, 0x128
    bl fn_805F89F0
    addi r3, r1, 0x128
    addi r4, r1, 0x3a8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    psq_st f2, 0x8(r4), 0, 0
    psq_st f3, 0x10(r4), 0, 0
    psq_st f4, 0x18(r4), 0, 0
    psq_st f5, 0x20(r4), 0, 0
    psq_st f6, 0x28(r4), 0, 0
lbl_fn_80144710_00000658:
    lfs f1, 0x540(r31)
    addi r3, r1, 0xf8
    lfs f2, 0x544(r31)
    lfs f3, 0x548(r31)
    bl fn_805F9160
    addi r3, r1, 0x3a8
    addi r4, r1, 0xf8
    addi r5, r1, 0xc8
    bl fn_805F89F0
    addi r3, r1, 0xc8
    addi r4, r1, 0x3a8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    psq_st f2, 0x8(r4), 0, 0
    psq_st f3, 0x10(r4), 0, 0
    psq_st f4, 0x18(r4), 0, 0
    psq_st f5, 0x20(r4), 0, 0
    psq_st f6, 0x28(r4), 0, 0
lbl_fn_80144710_000006B4:
    addi r4, r1, 0x3a8
    addi r3, r1, 0x2c
    psq_l f1, 0x0(r4), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_st f6, 0xe0(r31), 0, 0
    psq_st f1, 0xb8(r31), 0, 0
    psq_st f2, 0xc0(r31), 0, 0
    psq_st f3, 0xc8(r31), 0, 0
    psq_st f4, 0xd0(r31), 0, 0
    psq_st f5, 0xd8(r31), 0, 0
    lfs f8, 0x3d0(r1)
    lfs f7, 0x3c0(r1)
    lfs f0, 0x3b0(r1)
    stfs f0, 0x2c(r1)
    stfs f7, 0x30(r1)
    stfs f8, 0x34(r1)
    bl fn_805F9940
    lfs f8, 0x3cc(r1)
    fmr f30, f1
    lfs f7, 0x3bc(r1)
    addi r3, r1, 0x38
    lfs f0, 0x3ac(r1)
    stfs f0, 0x38(r1)
    stfs f7, 0x3c(r1)
    stfs f8, 0x40(r1)
    bl fn_805F9940
    lfs f8, 0x3c8(r1)
    fmr f31, f1
    lfs f7, 0x3b8(r1)
    addi r3, r1, 0x44
    lfs f0, 0x3a8(r1)
    stfs f0, 0x44(r1)
    stfs f7, 0x48(r1)
    stfs f8, 0x4c(r1)
    bl fn_805F9940
    frsp f7, f31
    stfs f1, 0x20(r1)
    frsp f0, f30
    stfs f31, 0x24(r1)
    fcmpo cr0, f7, f0
    stfs f30, 0x28(r1)
    ble lbl_fn_80144710_00000770
    b lbl_fn_80144710_00000774
lbl_fn_80144710_00000770:
    fmr f7, f0
lbl_fn_80144710_00000774:
    lfs f8, 0x20(r1)
    fcmpo cr0, f8, f7
    ble lbl_fn_80144710_00000784
    b lbl_fn_80144710_0000079C
lbl_fn_80144710_00000784:
    lfs f8, 0x24(r1)
    lfs f0, 0x28(r1)
    fcmpo cr0, f8, f0
    ble lbl_fn_80144710_00000798
    b lbl_fn_80144710_0000079C
lbl_fn_80144710_00000798:
    fmr f8, f0
lbl_fn_80144710_0000079C:
    stfs f8, 0x104(r31)
    psq_l f31, 0x448(r1), 0, 0
    lfd f31, 0x440(r1)
    psq_l f30, 0x438(r1), 0, 0
    lfd f30, 0x430(r1)
    psq_l f29, 0x428(r1), 0, 0
    lfd f29, 0x420(r1)
    psq_l f28, 0x418(r1), 0, 0
    lfd f28, 0x410(r1)
    psq_l f27, 0x408(r1), 0, 0
    lfd f27, 0x400(r1)
    psq_l f26, 0x3f8(r1), 0, 0
    lfd f26, 0x3f0(r1)
    lwz r31, 0x3ec(r1)
    lwz r30, 0x3e8(r1)
    lwz r29, 0x3e4(r1)
    lwz r0, 0x454(r1)
    mtlr r0
    addi r1, r1, 0x450
    blr
}

asm void fn_80144ED4(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    li r4, 0x7a
    stw r0, 0x74(r1)
    stw r31, 0x6c(r1)
    mr r31, r3
    addi r3, r1, 0x8
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0x8
    addi r5, r1, 0x38
    bl fn_805F89F0
    addi r3, r1, 0x38
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f6, 0x28(r31), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    lwz r31, 0x6c(r1)
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_80144F4C(void)
{
    nofralloc
    stwu r1, -0x450(r1)
    mflr r0
    stw r0, 0x454(r1)
    stfd f31, 0x440(r1)
    psq_st f31, 0x448(r1), 0, 0
    stfd f30, 0x430(r1)
    psq_st f30, 0x438(r1), 0, 0
    fmr f30, f1
    stfd f29, 0x420(r1)
    psq_st f29, 0x428(r1), 0, 0
    fmr f29, f2
    stfd f28, 0x410(r1)
    psq_st f28, 0x418(r1), 0, 0
    stw r31, 0x40c(r1)
    mr r31, r5
    li r5, 0x1
    stw r30, 0x408(r1)
    mr r30, r4
    li r4, 0x0
    stw r29, 0x404(r1)
    mr r29, r3
    addi r3, r1, 0x204
    bl fn_8004B290
    fadds f9, f29, f30
    lfs f28, lbl_8088196C
    lfs f0, lbl_808819A8
    fsubs f10, f30, f29
    lfs f13, lbl_80881964
    addi r3, r1, 0x204
    fmuls f12, f0, f9
    lfs f11, lbl_80881A7C
    lfs f9, lbl_80881A80
    lfs f0, lbl_808819DC
    stfs f28, 0x224(r1)
    stfs f13, 0x228(r1)
    stfs f28, 0x22c(r1)
    stfs f28, 0x20c(r1)
    stfs f12, 0x210(r1)
    stfs f11, 0x214(r1)
    stfs f28, 0x218(r1)
    stfs f12, 0x21c(r1)
    stfs f28, 0x220(r1)
    stfs f10, 0x240(r1)
    stfs f28, 0x244(r1)
    stfs f9, 0x248(r1)
    stfs f0, 0x24c(r1)
    bl fn_8004B378
    li r0, 0x0
    stw r0, 0x8(r1)
    addi r3, r1, 0x10
    li r4, 0x0
    li r5, 0x0
    bl fn_8004B290
    addi r4, r1, 0x20c
    addi r3, r1, 0x25c
    lfs f2, 0x214(r1)
    addi r5, r1, 0x18
    psq_l f1, 0x0(r4), 0, 0
    addi r4, r1, 0x218
    psq_st f1, 0x0(r5), 0, 0
    addi r6, r1, 0x24
    psq_l f1, 0x0(r4), 0, 0
    addi r5, r1, 0x224
    psq_st f1, 0x0(r6), 0, 0
    addi r4, r1, 0x28c
    psq_l f1, 0x0(r5), 0, 0
    addi r9, r1, 0x30
    stfs f2, 0x20(r1)
    addi r7, r1, 0x230
    lfs f2, 0x220(r1)
    addi r8, r1, 0x3c
    stfs f2, 0x2c(r1)
    addi r6, r1, 0x68
    lfs f2, 0x22c(r1)
    addi r5, r1, 0x98
    psq_st f1, 0x0(r9), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    stfs f2, 0x38(r1)
    lfs f2, 0x238(r1)
    psq_st f1, 0x0(r8), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x44(r1)
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    lwz r3, 0x204(r1)
    psq_st f2, 0x8(r6), 0, 0
    lwz r0, 0x208(r1)
    psq_st f3, 0x10(r6), 0, 0
    lfs f28, 0x23c(r1)
    psq_st f4, 0x18(r6), 0, 0
    lfs f29, 0x240(r1)
    psq_st f5, 0x20(r6), 0, 0
    lfs f30, 0x244(r1)
    psq_st f6, 0x28(r6), 0, 0
    lfs f31, 0x248(r1)
    lfs f13, 0x24c(r1)
    lfs f12, 0x250(r1)
    lfs f11, 0x254(r1)
    lfs f10, 0x258(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_l f7, 0x30(r4), 0, 0
    psq_l f8, 0x38(r4), 0, 0
    lfs f9, 0x2cc(r1)
    lfs f0, 0x2d0(r1)
    stw r3, 0x10(r1)
    stw r0, 0x14(r1)
    stfs f28, 0x48(r1)
    stfs f29, 0x4c(r1)
    stfs f30, 0x50(r1)
    stfs f31, 0x54(r1)
    stfs f13, 0x58(r1)
    stfs f12, 0x5c(r1)
    stfs f11, 0x60(r1)
    stfs f10, 0x64(r1)
    psq_st f1, 0x0(r5), 0, 0
    psq_st f2, 0x8(r5), 0, 0
    psq_st f3, 0x10(r5), 0, 0
    psq_st f4, 0x18(r5), 0, 0
    psq_st f5, 0x20(r5), 0, 0
    psq_st f6, 0x28(r5), 0, 0
    psq_st f7, 0x30(r5), 0, 0
    psq_st f8, 0x38(r5), 0, 0
    stfs f9, 0xd8(r1)
    stfs f0, 0xdc(r1)
    addi r3, r1, 0x2d4
    addi r7, r1, 0x110
    addi r6, r1, 0x304
    addi r8, r1, 0xe0
    psq_l f1, 0x0(r3), 0, 0
    addi r4, r7, 0x94
    psq_l f2, 0x8(r3), 0, 0
    addi r5, r6, 0x94
    psq_st f1, 0x0(r8), 0, 0
    addi r0, r7, 0xf4
    psq_l f1, 0x0(r6), 0, 0
    psq_st f2, 0x8(r8), 0, 0
    psq_l f2, 0x8(r6), 0, 0
    psq_st f1, 0x0(r7), 0, 0
    psq_l f1, 0x3c(r6), 0, 0
    psq_st f2, 0x8(r7), 0, 0
    lfs f2, 0x348(r1)
    psq_st f1, 0x3c(r7), 0, 0
    psq_l f1, 0x4c(r6), 0, 0
    stfs f2, 0x154(r1)
    lfs f2, 0x358(r1)
    psq_st f1, 0x4c(r7), 0, 0
    psq_l f1, 0x5c(r6), 0, 0
    stfs f2, 0x164(r1)
    lfs f2, 0x368(r1)
    psq_st f1, 0x5c(r7), 0, 0
    psq_l f1, 0x6c(r6), 0, 0
    stfs f2, 0x174(r1)
    lfs f2, 0x378(r1)
    psq_st f1, 0x6c(r7), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    stfs f2, 0x184(r1)
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_l f1, 0x7c(r6), 0, 0
    lfs f2, 0x388(r1)
    psq_st f3, 0x10(r8), 0, 0
    psq_l f3, 0x10(r6), 0, 0
    psq_st f4, 0x18(r8), 0, 0
    psq_l f4, 0x18(r6), 0, 0
    psq_st f5, 0x20(r8), 0, 0
    psq_l f5, 0x20(r6), 0, 0
    psq_st f6, 0x28(r8), 0, 0
    psq_l f6, 0x28(r6), 0, 0
    psq_st f1, 0x7c(r7), 0, 0
    lwz r3, 0x334(r1)
    stfs f2, 0x194(r1)
    lfs f13, 0x338(r1)
    lfs f12, 0x33c(r1)
    lfs f11, 0x34c(r1)
    lfs f10, 0x35c(r1)
    lfs f9, 0x36c(r1)
    lfs f0, 0x37c(r1)
    psq_l f1, 0x88(r6), 0, 0
    lfs f2, 0x394(r1)
    psq_st f3, 0x10(r7), 0, 0
    psq_st f4, 0x18(r7), 0, 0
    psq_st f5, 0x20(r7), 0, 0
    psq_st f6, 0x28(r7), 0, 0
    stw r3, 0x140(r1)
    stfs f13, 0x144(r1)
    stfs f12, 0x148(r1)
    stfs f11, 0x158(r1)
    stfs f10, 0x168(r1)
    stfs f9, 0x178(r1)
    stfs f0, 0x188(r1)
    psq_st f1, 0x88(r7), 0, 0
    stfs f2, 0x1a0(r1)
lbl_fn_80144F4C_00000B8C:
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r5)
    stfs f2, 0x8(r4)
    lfs f0, 0xc(r5)
    addi r5, r5, 0x10
    stfs f0, 0xc(r4)
    addi r4, r4, 0x10
    cmplw r4, r0
    blt lbl_fn_80144F4C_00000B8C
    stw r31, 0xc(r1)
    addi r3, r29, 0xb0
    addi r4, r1, 0x8
    stw r30, 0x8(r1)
    bl fn_80095F10
    addi r29, r29, 0x680
    li r30, 0x0
lbl_fn_80144F4C_00000BD0:
    lwz r3, 0x0(r29)
    cmpwi r3, 0x0
    beq lbl_fn_80144F4C_00000BE8
    addi r3, r3, 0x24
    addi r4, r1, 0x8
    bl fn_80095F10
lbl_fn_80144F4C_00000BE8:
    addi r30, r30, 0x1
    addi r29, r29, 0x4
    cmplwi r30, 0x8
    blt lbl_fn_80144F4C_00000BD0
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_8004B338
    addi r3, r1, 0x204
    li r4, -0x1
    bl fn_8004B338
    lwz r0, 0x454(r1)
    psq_l f31, 0x448(r1), 0, 0
    lfd f31, 0x440(r1)
    psq_l f30, 0x438(r1), 0, 0
    lfd f30, 0x430(r1)
    psq_l f29, 0x428(r1), 0, 0
    lfd f29, 0x420(r1)
    psq_l f28, 0x418(r1), 0, 0
    lfd f28, 0x410(r1)
    lwz r31, 0x40c(r1)
    lwz r30, 0x408(r1)
    lwz r29, 0x404(r1)
    mtlr r0
    addi r1, r1, 0x450
    blr
}

asm void fn_80145334(void)
{
    nofralloc
    stwu r1, -0x740(r1)
    mflr r0
    stw r0, 0x744(r1)
    addi r11, r1, 0x6d0
    stfd f31, 0x730(r1)
    psq_st f31, 0x738(r1), 0, 0
    stfd f30, 0x720(r1)
    psq_st f30, 0x728(r1), 0, 0
    stfd f29, 0x710(r1)
    psq_st f29, 0x718(r1), 0, 0
    stfd f28, 0x700(r1)
    psq_st f28, 0x708(r1), 0, 0
    stfd f27, 0x6f0(r1)
    psq_st f27, 0x6f8(r1), 0, 0
    stfd f26, 0x6e0(r1)
    psq_st f26, 0x6e8(r1), 0, 0
    stfd f25, 0x6d0(r1)
    psq_st f25, 0x6d8(r1), 0, 0
    bl _savegpr_26
    lfs f25, lbl_8088196C
    lis r0, 0x4330
    lwz r4, 0x48(r3)
    mr r26, r3
    fmr f30, f25
    stw r0, 0x690(r1)
    cmpwi r4, 0x0
    lfs f31, lbl_808819DC
    stw r0, 0x698(r1)
    li r5, 0x0
    li r6, 0x0
    bne lbl_fn_80145334_00000D9C
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_80145334_00000D4C
    lwz r4, 0x560(r3)
    subi r0, r4, 0x4
    cmplwi r0, 0x1
    ble lbl_fn_80145334_00000D00
    cmpwi r4, 0x2
    beq lbl_fn_80145334_00000D00
    cmpwi r4, 0xe
    beq lbl_fn_80145334_00000D08
    cmpwi r4, 0x62
    beq lbl_fn_80145334_00000D30
    b lbl_fn_80145334_00000D9C
lbl_fn_80145334_00000D00:
    li r5, 0x1
    b lbl_fn_80145334_00000D9C
lbl_fn_80145334_00000D08:
    lwz r4, 0x50(r3)
    subis r0, r4, 0xa
    cmplwi r0, 0xae76
    beq lbl_fn_80145334_00000D20
    cmplwi r0, 0xae77
    bne lbl_fn_80145334_00000D9C
lbl_fn_80145334_00000D20:
    lfs f30, lbl_808819B0
    li r5, 0x1
    lfs f31, lbl_80881974
    b lbl_fn_80145334_00000D9C
lbl_fn_80145334_00000D30:
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 25
    beq lbl_fn_80145334_00000D9C
    lfs f25, lbl_80881A50
    li r5, 0x1
    li r6, 0x1
    b lbl_fn_80145334_00000D9C
lbl_fn_80145334_00000D4C:
    cmpwi r0, 0x1
    bne lbl_fn_80145334_00000D9C
    lwz r0, 0x12a4(r3)
    extrwi. r4, r0, 1, 25
    beq lbl_fn_80145334_00000D7C
    lwz r0, 0x674(r3)
    cmpwi r0, 0x0
    blt lbl_fn_80145334_00000D9C
    lfs f25, lbl_80881A50
    li r5, 0x1
    li r6, 0x1
    b lbl_fn_80145334_00000D9C
lbl_fn_80145334_00000D7C:
    srwi. r0, r0, 31
    bne lbl_fn_80145334_00000D9C
    lfs f7, 0x570(r3)
    lfs f0, lbl_80881A1C
    fcmpo cr0, f7, f0
    mfcr r5
    lfs f31, lbl_80881978
    extrwi r5, r5, 1, 1
lbl_fn_80145334_00000D9C:
    cmpwi r5, 0x0
    beq lbl_fn_80145334_0000124C
    lwz r0, 0x520(r3)
    cmpwi r0, 0x0
    blt lbl_fn_80145334_0000124C
    cmpwi r6, 0x0
    li r31, 0x1
    beq lbl_fn_80145334_00000E2C
    lfs f7, lbl_8088196C
    li r4, 0x79
    lfs f0, lbl_80881964
    stfs f7, 0x1d8(r1)
    stfs f7, 0x1dc(r1)
    stfs f0, 0x1e0(r1)
    lfs f1, 0x538(r3)
    addi r3, r1, 0x4c0
    bl fn_805F8E70
    addi r4, r1, 0x1d8
    addi r3, r1, 0x4c0
    mr r5, r4
    bl fn_805F93C0
    lfs f0, 0x1e0(r1)
    addi r4, r1, 0x1e4
    lfs f7, 0x1dc(r1)
    addi r3, r1, 0x270
    fmuls f2, f0, f25
    lfs f0, 0x1d8(r1)
    fmuls f7, f7, f25
    fmuls f0, f0, f25
    stfs f2, 0x1ec(r1)
    stfs f0, 0x1e4(r1)
    stfs f7, 0x1e8(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x278(r1)
    b lbl_fn_80145334_00000ED4
lbl_fn_80145334_00000E2C:
    lwz r0, 0x524(r3)
    cmpwi r0, 0x0
    bge lbl_fn_80145334_00000E40
    li r4, 0x0
    b lbl_fn_80145334_00000E4C
lbl_fn_80145334_00000E40:
    mulli r0, r0, 0x30
    lwz r4, 0xec(r3)
    add r4, r4, r0
lbl_fn_80145334_00000E4C:
    lwz r0, 0x520(r3)
    lfs f0, 0x2c(r4)
    lfs f7, 0x1c(r4)
    cmpwi r0, 0x0
    lfs f8, 0xc(r4)
    stfs f8, 0x264(r1)
    stfs f7, 0x268(r1)
    stfs f0, 0x26c(r1)
    bge lbl_fn_80145334_00000E78
    li r5, 0x0
    b lbl_fn_80145334_00000E84
lbl_fn_80145334_00000E78:
    mulli r0, r0, 0x30
    lwz r3, 0xec(r3)
    add r5, r3, r0
lbl_fn_80145334_00000E84:
    lfs f8, 0x2c(r5)
    addi r4, r1, 0x1cc
    lfs f0, 0x26c(r1)
    addi r3, r1, 0x270
    lfs f9, 0x1c(r5)
    fsubs f2, f8, f0
    lfs f10, 0xc(r5)
    lfs f7, 0x268(r1)
    lfs f0, 0x264(r1)
    fsubs f7, f9, f7
    stfs f10, 0x258(r1)
    fsubs f0, f10, f0
    stfs f7, 0x1d0(r1)
    stfs f0, 0x1cc(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f9, 0x25c(r1)
    stfs f8, 0x260(r1)
    stfs f2, 0x1d4(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x278(r1)
lbl_fn_80145334_00000ED4:
    lfs f0, lbl_8088196C
    addi r3, r1, 0x270
    stfs f0, 0x274(r1)
    bl fn_805F9920
    lfs f0, lbl_808819F4
    fcmpo cr0, f1, f0
    ble lbl_fn_80145334_0000114C
    addi r3, r1, 0x270
    addi r27, r1, 0x1c0
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r27
    lfs f2, 0x278(r1)
    mr r4, r27
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0x1c8(r1)
    bl fn_805F98D0
    lfs f7, lbl_8088196C
    addi r3, r1, 0x490
    lfs f0, lbl_80881964
    li r4, 0x79
    stfs f7, 0x1b4(r1)
    stfs f7, 0x1b8(r1)
    stfs f0, 0x1bc(r1)
    lfs f1, 0x538(r26)
    bl fn_805F8E70
    addi r4, r1, 0x1b4
    addi r3, r1, 0x490
    mr r5, r4
    bl fn_805F93C0
    mr r3, r27
    addi r4, r1, 0x1b4
    bl fn_805F9990
    lfs f0, lbl_808819A8
    fcmpo cr0, f1, f0
    ble lbl_fn_80145334_0000114C
    li r0, 0x0
    stw r0, 0x674(r1)
    mr r3, r26
    stw r0, 0x678(r1)
    stw r0, 0x67c(r1)
    stw r0, 0x680(r1)
    bl fn_80179D44
    psq_l f1, 0x614(r26), 0, 0
    addi r4, r1, 0x248
    lfs f2, 0x61c(r26)
    addi r5, r1, 0xb4
    stfs f2, 0x250(r1)
    oris r7, r3, 0x8000
    psq_st f1, 0x0(r4), 0, 0
    lfs f10, 0x620(r26)
    stfs f10, 0x254(r1)
    lfs f7, 0x530(r26)
    lfs f0, 0x5ac(r26)
    lfs f9, 0x52c(r26)
    fadds f2, f7, f0
    lfs f8, 0x5a8(r26)
    lfs f7, 0x528(r26)
    lfs f0, 0x5a4(r26)
    fadds f8, f9, f8
    stfs f2, 0xbc(r1)
    fadds f0, f7, f0
    stfs f8, 0xb8(r1)
    stfs f0, 0xb4(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x250(r1)
    lwz r0, 0x958(r26)
    rlwinm r0, r0, 0, 25, 25
    cmplwi r0, 0x40
    bne lbl_fn_80145334_00000FFC
    lfs f0, 0x24c(r1)
    fsubs f0, f0, f10
    stfs f0, 0x24c(r1)
    b lbl_fn_80145334_00001008
lbl_fn_80145334_00000FFC:
    lfs f0, 0x24c(r1)
    fadds f0, f0, f10
    stfs f0, 0x24c(r1)
lbl_fn_80145334_00001008:
    lwz r0, 0x12a4(r26)
    extrwi. r0, r0, 1, 25
    beq lbl_fn_80145334_0000101C
    lfs f0, lbl_80881A84
    b lbl_fn_80145334_00001020
lbl_fn_80145334_0000101C:
    lfs f0, lbl_80881978
lbl_fn_80145334_00001020:
    frsp f0, f0
    lwz r3, lbl_8087EE98
    addi r4, r1, 0x640
    addi r5, r1, 0x248
    addi r6, r1, 0x270
    addi r8, r26, 0x5b8
    fadds f1, f0, f30
    li r9, 0x0
    stfs f1, 0x254(r1)
    bl fn_8004D388
    cmpwi r3, 0x0
    beq lbl_fn_80145334_0000114C
    lfs f9, 0x250(r1)
    addi r3, r1, 0x238
    lfs f0, 0x278(r1)
    lfs f8, 0x248(r1)
    fadds f10, f9, f0
    lfs f7, 0x270(r1)
    lfs f0, 0x658(r1)
    fadds f11, f8, f7
    lfs f7, 0x650(r1)
    fsubs f12, f0, f10
    lfs f0, lbl_8088196C
    fsubs f13, f7, f11
    lfs f9, 0x24c(r1)
    lfs f8, 0x274(r1)
    stfs f11, 0x1a8(r1)
    fadds f7, f9, f8
    stfs f10, 0x1b0(r1)
    stfs f7, 0x1ac(r1)
    stfs f13, 0x238(r1)
    stfs f12, 0x240(r1)
    stfs f0, 0x23c(r1)
    bl fn_805F9920
    lfs f0, lbl_808819F4
    fcmpo cr0, f1, f0
    ble lbl_fn_80145334_0000114C
    addi r3, r1, 0x270
    addi r27, r1, 0x19c
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r27
    lfs f2, 0x278(r1)
    mr r4, r27
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0x1a4(r1)
    bl fn_805F98D0
    addi r29, r1, 0x238
    addi r28, r1, 0x190
    psq_l f1, 0x0(r29), 0, 0
    mr r3, r28
    lfs f2, 0x240(r1)
    mr r4, r28
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x198(r1)
    bl fn_805F98D0
    mr r3, r27
    mr r4, r28
    bl fn_805F9990
    lfs f0, lbl_80881A5C
    fcmpo cr0, f1, f0
    bge lbl_fn_80145334_0000114C
    lwz r0, 0x67c(r1)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80145334_0000114C
    mr r3, r29
    bl fn_805F9940
    fcmpo cr0, f31, f1
    bge lbl_fn_80145334_00001138
    b lbl_fn_80145334_00001144
lbl_fn_80145334_00001138:
    mr r3, r29
    bl fn_805F9940
    fmr f31, f1
lbl_fn_80145334_00001144:
    stfs f31, 0x588(r26)
    li r31, 0x0
lbl_fn_80145334_0000114C:
    cmpwi r31, 0x0
    beq lbl_fn_80145334_00001200
    lfs f7, 0x588(r26)
    lfs f0, lbl_808819F4
    fcmpo cr0, f7, f0
    ble lbl_fn_80145334_000011AC
    lwz r0, 0x12a4(r26)
    extrwi. r0, r0, 1, 25
    beq lbl_fn_80145334_00001178
    lfs f0, lbl_808819A0
    b lbl_fn_80145334_0000117C
lbl_fn_80145334_00001178:
    lfs f0, lbl_80881980
lbl_fn_80145334_0000117C:
    lfs f7, 0x588(r26)
    fcmpo cr0, f7, f0
    bge lbl_fn_80145334_0000118C
    b lbl_fn_80145334_000011A0
lbl_fn_80145334_0000118C:
    cmpwi r0, 0x0
    beq lbl_fn_80145334_0000119C
    lfs f7, lbl_808819A0
    b lbl_fn_80145334_000011A0
lbl_fn_80145334_0000119C:
    lfs f7, lbl_80881980
lbl_fn_80145334_000011A0:
    lfs f0, 0x588(r26)
    fsubs f0, f0, f7
    stfs f0, 0x588(r26)
lbl_fn_80145334_000011AC:
    lwz r0, 0x12a4(r26)
    extrwi. r0, r0, 1, 25
    beq lbl_fn_80145334_00001290
    lwz r0, 0x55c(r26)
    cmpwi r0, 0x1
    bne lbl_fn_80145334_00001290
    lwz r0, 0x2dc(r26)
    cmpwi r0, 0x25
    bne lbl_fn_80145334_00001290
    lwz r5, 0x494(r26)
    cmpw r0, r5
    beq lbl_fn_80145334_00001290
    lfs f1, lbl_8088196C
    addi r3, r26, 0xb0
    lfs f2, lbl_80881994
    li r4, 0x0
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_80145334_00001290
lbl_fn_80145334_00001200:
    lwz r0, 0x12a4(r26)
    extrwi. r0, r0, 1, 25
    beq lbl_fn_80145334_00001290
    lwz r0, 0x55c(r26)
    cmpwi r0, 0x1
    bne lbl_fn_80145334_00001290
    lwz r0, 0x2dc(r26)
    cmpwi r0, 0x26
    bne lbl_fn_80145334_00001290
    lfs f1, lbl_8088196C
    addi r3, r26, 0xb0
    lfs f2, lbl_80881994
    li r4, 0x0
    li r5, 0x25
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_80145334_00001290
lbl_fn_80145334_0000124C:
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x8
    bne lbl_fn_80145334_00001260
    lfs f0, lbl_8088196C
    stfs f0, 0x588(r3)
lbl_fn_80145334_00001260:
    lfs f7, 0x588(r3)
    lfs f0, lbl_808819F4
    fcmpo cr0, f7, f0
    ble lbl_fn_80145334_00001290
    lfs f0, lbl_808819A8
    fcmpo cr0, f7, f0
    bge lbl_fn_80145334_00001280
    b lbl_fn_80145334_00001284
lbl_fn_80145334_00001280:
    fmr f7, f0
lbl_fn_80145334_00001284:
    lfs f0, 0x588(r3)
    fsubs f0, f0, f7
    stfs f0, 0x588(r3)
lbl_fn_80145334_00001290:
    lis r3, lbl_80737810@ha
    lfs f1, 0x534(r26)
    lfd f2, lbl_80737810@l(r3)
    bl fn_8068AEA8
    frsp f7, f1
    lfs f0, lbl_80881A0C
    fcmpo cr0, f7, f0
    ble lbl_fn_80145334_000012B8
    lfs f0, lbl_80881A10
    fsubs f7, f7, f0
lbl_fn_80145334_000012B8:
    lfs f0, lbl_80881A14
    fcmpo cr0, f7, f0
    bge lbl_fn_80145334_000012CC
    lfs f0, lbl_80881A10
    fadds f7, f7, f0
lbl_fn_80145334_000012CC:
    lis r3, lbl_80737810@ha
    lfs f1, 0x538(r26)
    stfs f7, 0x534(r26)
    lfd f2, lbl_80737810@l(r3)
    bl fn_8068AEA8
    frsp f7, f1
    lfs f0, lbl_80881A0C
    fcmpo cr0, f7, f0
    ble lbl_fn_80145334_000012F8
    lfs f0, lbl_80881A10
    fsubs f7, f7, f0
lbl_fn_80145334_000012F8:
    lfs f0, lbl_80881A14
    fcmpo cr0, f7, f0
    bge lbl_fn_80145334_0000130C
    lfs f0, lbl_80881A10
    fadds f7, f7, f0
lbl_fn_80145334_0000130C:
    lis r3, lbl_80737810@ha
    lfs f1, 0x53c(r26)
    stfs f7, 0x538(r26)
    lfd f2, lbl_80737810@l(r3)
    bl fn_8068AEA8
    frsp f7, f1
    lfs f0, lbl_80881A0C
    fcmpo cr0, f7, f0
    ble lbl_fn_80145334_00001338
    lfs f0, lbl_80881A10
    fsubs f7, f7, f0
lbl_fn_80145334_00001338:
    lfs f0, lbl_80881A14
    fcmpo cr0, f7, f0
    bge lbl_fn_80145334_0000134C
    lfs f0, lbl_80881A10
    fadds f7, f7, f0
lbl_fn_80145334_0000134C:
    lwz r3, 0x13f8(r26)
    stfs f7, 0x53c(r26)
    subic. r0, r3, 0x1
    stw r0, 0x13f8(r26)
    bge lbl_fn_80145334_00001368
    li r0, 0x0
    stw r0, 0x13f8(r26)
lbl_fn_80145334_00001368:
    lwz r3, lbl_8087EFA8
    lwz r0, 0x410(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80145334_000013C0
    lwz r0, 0x2bc(r26)
    extlwi r0, r0, 2, 26
    srawi. r0, r0, 31
    beq lbl_fn_80145334_00001404
    lwz r0, 0x2bc(r26)
    addi r28, r26, 0x680
    li r27, 0x0
    ori r0, r0, 0x10
    stw r0, 0x2bc(r26)
lbl_fn_80145334_0000139C:
    lwz r3, 0x0(r28)
    cmpwi r3, 0x0
    beq lbl_fn_80145334_000013AC
    bl fn_805663FC
lbl_fn_80145334_000013AC:
    addi r27, r27, 0x1
    addi r28, r28, 0x4
    cmplwi r27, 0x8
    blt lbl_fn_80145334_0000139C
    b lbl_fn_80145334_00001404
lbl_fn_80145334_000013C0:
    lwz r0, 0x2bc(r26)
    extlwi r0, r0, 2, 26
    srawi. r0, r0, 31
    beq lbl_fn_80145334_00001404
    lwz r0, 0x2bc(r26)
    addi r28, r26, 0x680
    li r27, 0x0
    rlwinm r0, r0, 0, 28, 26
    stw r0, 0x2bc(r26)
lbl_fn_80145334_000013E4:
    lwz r3, 0x0(r28)
    cmpwi r3, 0x0
    beq lbl_fn_80145334_000013F4
    bl fn_8056640C
lbl_fn_80145334_000013F4:
    addi r27, r27, 0x1
    addi r28, r28, 0x4
    cmplwi r27, 0x8
    blt lbl_fn_80145334_000013E4
lbl_fn_80145334_00001404:
    addi r4, r26, 0x6d4
    b lbl_fn_80145334_0000146C
lbl_fn_80145334_0000140C:
    lwz r3, 0x4(r4)
    subic. r0, r3, 0x1
    stw r0, 0x4(r4)
    bgt lbl_fn_80145334_00001468
    addi r0, r26, 0x6d4
    subf r0, r0, r4
    srawi r0, r0, 3
    addze r6, r0
    slwi r0, r6, 3
    add r5, r26, r0
    b lbl_fn_80145334_00001450
lbl_fn_80145334_00001438:
    lwz r0, 0x6dc(r5)
    addi r6, r6, 0x1
    stw r0, 0x6d4(r5)
    lwz r0, 0x6e0(r5)
    stw r0, 0x6d8(r5)
    addi r5, r5, 0x8
lbl_fn_80145334_00001450:
    lwz r3, 0x6d0(r26)
    subi r0, r3, 0x1
    cmplw r6, r0
    blt lbl_fn_80145334_00001438
    stw r0, 0x6d0(r26)
    b lbl_fn_80145334_0000146C
lbl_fn_80145334_00001468:
    addi r4, r4, 0x8
lbl_fn_80145334_0000146C:
    lwz r0, 0x6d0(r26)
    slwi r0, r0, 3
    add r3, r26, r0
    addi r0, r3, 0x6d4
    cmplw r4, r0
    bne lbl_fn_80145334_0000140C
    lwz r0, 0x12a4(r26)
    extrwi. r0, r0, 1, 26
    beq lbl_fn_80145334_000014A8
    lwz r3, 0xf58(r26)
    li r0, 0x0
    stw r0, 0xf5c(r26)
    addi r0, r3, 0x1
    stw r0, 0xf58(r26)
    b lbl_fn_80145334_000014BC
lbl_fn_80145334_000014A8:
    lwz r3, 0xf5c(r26)
    li r0, 0x0
    stw r0, 0xf58(r26)
    addi r0, r3, 0x1
    stw r0, 0xf5c(r26)
lbl_fn_80145334_000014BC:
    lwz r0, 0x7e0(r26)
    rlwinm r0, r0, 0, 25, 25
    cmplwi r0, 0x40
    beq lbl_fn_80145334_000014D8
    lwz r3, 0x12a4(r26)
    extrwi. r0, r3, 1, 8
    beq lbl_fn_80145334_000015E0
lbl_fn_80145334_000014D8:
    lwz r0, 0xf94(r26)
    lfs f10, 0x1420(r26)
    cmpwi r0, 0x0
    ble lbl_fn_80145334_000015C4
    lwz r5, 0xf98(r26)
    lis r4, lbl_80737808@ha
    lwz r6, 0xf94(r26)
    xoris r0, r5, 0x8000
    stw r0, 0x69c(r1)
    xoris r3, r6, 0x8000
    lfd f9, lbl_80737808@l(r4)
    stw r3, 0x694(r1)
    lfd f0, 0x698(r1)
    lfd f7, 0x690(r1)
    fsubs f0, f0, f9
    lfs f8, lbl_80881964
    fsubs f7, f7, f9
    lfs f11, lbl_808819F4
    fdivs f0, f7, f0
    fsubs f0, f8, f0
    fcmpo cr0, f0, f11
    ble lbl_fn_80145334_00001550
    stw r3, 0x694(r1)
    stw r0, 0x69c(r1)
    lfd f7, 0x690(r1)
    lfd f0, 0x698(r1)
    fsubs f7, f7, f9
    fsubs f0, f0, f9
    fdivs f0, f7, f0
    fsubs f11, f8, f0
lbl_fn_80145334_00001550:
    lfs f12, lbl_808819B4
    fcmpo cr0, f12, f11
    bge lbl_fn_80145334_00001560
    b lbl_fn_80145334_000015C0
lbl_fn_80145334_00001560:
    xoris r3, r6, 0x8000
    stw r3, 0x694(r1)
    xoris r0, r5, 0x8000
    lis r4, lbl_80737808@ha
    stw r0, 0x69c(r1)
    lfd f9, lbl_80737808@l(r4)
    lfd f7, 0x690(r1)
    lfd f0, 0x698(r1)
    fsubs f7, f7, f9
    lfs f8, lbl_80881964
    fsubs f0, f0, f9
    lfs f12, lbl_808819F4
    fdivs f0, f7, f0
    fsubs f0, f8, f0
    fcmpo cr0, f0, f12
    ble lbl_fn_80145334_000015C0
    stw r3, 0x694(r1)
    stw r0, 0x69c(r1)
    lfd f7, 0x690(r1)
    lfd f0, 0x698(r1)
    fsubs f7, f7, f9
    fsubs f0, f0, f9
    fdivs f0, f7, f0
    fsubs f12, f8, f0
lbl_fn_80145334_000015C0:
    fmuls f10, f10, f12
lbl_fn_80145334_000015C4:
    lfs f2, 0x52c(r26)
    mr r3, r26
    li r4, 0x0
    li r5, 0x0
    fadds f1, f2, f10
    bl fn_80144F4C
    b lbl_fn_80145334_00001778
lbl_fn_80145334_000015E0:
    extrwi. r0, r3, 1, 23
    beq lbl_fn_80145334_00001674
    lwz r0, 0xfa0(r26)
    lis r4, lbl_80737808@ha
    lwz r3, 0xf9c(r26)
    xoris r0, r0, 0x8000
    stw r0, 0x69c(r1)
    xoris r3, r3, 0x8000
    lfd f9, lbl_80737808@l(r4)
    stw r3, 0x694(r1)
    lfd f0, 0x698(r1)
    lfd f7, 0x690(r1)
    fsubs f0, f0, f9
    lfs f8, lbl_80881964
    fsubs f7, f7, f9
    lfs f11, lbl_808819F4
    lfs f10, lbl_80881A74
    fdivs f0, f7, f0
    fsubs f0, f8, f0
    fcmpo cr0, f0, f11
    ble lbl_fn_80145334_00001654
    stw r3, 0x694(r1)
    stw r0, 0x69c(r1)
    lfd f7, 0x690(r1)
    lfd f0, 0x698(r1)
    fsubs f7, f7, f9
    fsubs f0, f0, f9
    fdivs f0, f7, f0
    fsubs f11, f8, f0
lbl_fn_80145334_00001654:
    fmuls f10, f10, f11
    lfs f1, 0x52c(r26)
    mr r3, r26
    li r4, 0x3
    li r5, 0x0
    fadds f2, f1, f10
    bl fn_80144F4C
    b lbl_fn_80145334_00001778
lbl_fn_80145334_00001674:
    lwz r0, 0x12a8(r26)
    extrwi. r0, r0, 1, 30
    beq lbl_fn_80145334_000016AC
    lfs f7, lbl_80881974
    mr r3, r26
    lfs f0, 0x52c(r26)
    li r4, 0x1
    lwz r5, lbl_8087EEB0
    fadds f1, f7, f0
    lfs f0, lbl_80881A78
    addi r5, r5, 0x70
    fadds f2, f1, f0
    bl fn_80144F4C
    b lbl_fn_80145334_00001778
lbl_fn_80145334_000016AC:
    lwz r0, 0xb4(r26)
    rlwinm r0, r0, 0, 13, 11
    stw r0, 0xb4(r26)
    lwz r3, 0x680(r26)
    cmpwi r3, 0x0
    beq lbl_fn_80145334_000016D0
    lwz r0, 0x28(r3)
    rlwinm r0, r0, 0, 13, 11
    stw r0, 0x28(r3)
lbl_fn_80145334_000016D0:
    lwz r3, 0x684(r26)
    cmpwi r3, 0x0
    beq lbl_fn_80145334_000016E8
    lwz r0, 0x28(r3)
    rlwinm r0, r0, 0, 13, 11
    stw r0, 0x28(r3)
lbl_fn_80145334_000016E8:
    lwz r3, 0x688(r26)
    cmpwi r3, 0x0
    beq lbl_fn_80145334_00001700
    lwz r0, 0x28(r3)
    rlwinm r0, r0, 0, 13, 11
    stw r0, 0x28(r3)
lbl_fn_80145334_00001700:
    lwz r3, 0x68c(r26)
    cmpwi r3, 0x0
    beq lbl_fn_80145334_00001718
    lwz r0, 0x28(r3)
    rlwinm r0, r0, 0, 13, 11
    stw r0, 0x28(r3)
lbl_fn_80145334_00001718:
    lwz r3, 0x690(r26)
    cmpwi r3, 0x0
    beq lbl_fn_80145334_00001730
    lwz r0, 0x28(r3)
    rlwinm r0, r0, 0, 13, 11
    stw r0, 0x28(r3)
lbl_fn_80145334_00001730:
    lwz r3, 0x694(r26)
    cmpwi r3, 0x0
    beq lbl_fn_80145334_00001748
    lwz r0, 0x28(r3)
    rlwinm r0, r0, 0, 13, 11
    stw r0, 0x28(r3)
lbl_fn_80145334_00001748:
    lwz r3, 0x698(r26)
    cmpwi r3, 0x0
    beq lbl_fn_80145334_00001760
    lwz r0, 0x28(r3)
    rlwinm r0, r0, 0, 13, 11
    stw r0, 0x28(r3)
lbl_fn_80145334_00001760:
    lwz r3, 0x69c(r26)
    cmpwi r3, 0x0
    beq lbl_fn_80145334_00001778
    lwz r0, 0x28(r3)
    rlwinm r0, r0, 0, 13, 11
    stw r0, 0x28(r3)
lbl_fn_80145334_00001778:
    lwz r3, 0x12a4(r26)
    extrwi. r0, r3, 1, 24
    beq lbl_fn_80145334_00001794
    lfs f0, lbl_80881964
    rlwinm r0, r3, 0, 25, 23
    stw r0, 0x12a4(r26)
    stfs f0, 0x2ec(r26)
lbl_fn_80145334_00001794:
    lwz r0, 0x7e0(r26)
    rlwinm r0, r0, 0, 23, 23
    cmplwi r0, 0x100
    bne lbl_fn_80145334_000017D0
    lfs f7, lbl_80881994
    lfs f0, lbl_80881964
    stfs f7, 0x180(r1)
    stfs f7, 0x184(r1)
    stfs f7, 0x188(r1)
    stfs f0, 0x18c(r1)
    stfs f7, 0xf0(r26)
    stfs f7, 0xf4(r26)
    stfs f7, 0xf8(r26)
    stfs f0, 0xfc(r26)
    b lbl_fn_80145334_000017F4
lbl_fn_80145334_000017D0:
    lfs f0, lbl_80881964
    stfs f0, 0x170(r1)
    stfs f0, 0x174(r1)
    stfs f0, 0x178(r1)
    stfs f0, 0x17c(r1)
    stfs f0, 0xf0(r26)
    stfs f0, 0xf4(r26)
    stfs f0, 0xf8(r26)
    stfs f0, 0xfc(r26)
lbl_fn_80145334_000017F4:
    addi r3, r26, 0x1154
    addi r4, r26, 0xb0
    bl fn_8007A7BC
    lwz r0, 0xf50(r26)
    cmpwi r0, 0x0
    beq lbl_fn_80145334_000019E8
    lwz r3, 0xf50(r26)
    addi r27, r1, 0x580
    lfs f8, lbl_8088196C
    psq_l f1, 0x528(r3), 0, 0
    lfs f2, 0x530(r3)
    stfs f2, 0x530(r26)
    lfs f7, lbl_80881A88
    psq_st f1, 0x528(r26), 0, 0
    lfs f0, lbl_80881964
    lfs f2, 0x53c(r3)
    psq_l f1, 0x534(r3), 0, 0
    psq_st f1, 0x534(r26), 0, 0
    fcmpu cr0, f8, f2
    stfs f2, 0x53c(r26)
    stfs f8, 0x22c(r1)
    stfs f8, 0x230(r1)
    stfs f7, 0x234(r1)
    stfs f8, 0x5ac(r1)
    stfs f8, 0x5a4(r1)
    stfs f8, 0x5a0(r1)
    stfs f8, 0x59c(r1)
    stfs f8, 0x598(r1)
    stfs f8, 0x590(r1)
    stfs f8, 0x58c(r1)
    stfs f8, 0x588(r1)
    stfs f8, 0x584(r1)
    stfs f0, 0x5a8(r1)
    stfs f0, 0x594(r1)
    stfs f0, 0x580(r1)
    beq lbl_fn_80145334_000018D8
    frsp f1, f2
    addi r3, r1, 0x3a0
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r27
    addi r4, r1, 0x3a0
    addi r5, r1, 0x370
    bl fn_805F89F0
    addi r3, r1, 0x370
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
lbl_fn_80145334_000018D8:
    lfs f0, lbl_8088196C
    lfs f1, 0x538(r26)
    fcmpu cr0, f0, f1
    beq lbl_fn_80145334_00001938
    addi r3, r1, 0x400
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r27
    addi r4, r1, 0x400
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
lbl_fn_80145334_00001938:
    lfs f0, lbl_8088196C
    lfs f1, 0x534(r26)
    fcmpu cr0, f0, f1
    beq lbl_fn_80145334_00001998
    addi r3, r1, 0x460
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r27
    addi r4, r1, 0x460
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
lbl_fn_80145334_00001998:
    addi r4, r1, 0x22c
    addi r3, r1, 0x580
    mr r5, r4
    bl fn_805F93C0
    lfs f7, 0x528(r26)
    lfs f0, 0x22c(r1)
    lfs f10, 0x52c(r26)
    fadds f0, f7, f0
    lfs f7, 0x538(r26)
    lfs f8, 0x530(r26)
    stfs f0, 0x528(r26)
    lfs f0, lbl_80881A0C
    lfs f9, 0x230(r1)
    fadds f0, f7, f0
    fadds f7, f10, f9
    stfs f7, 0x52c(r26)
    lfs f7, 0x234(r1)
    fadds f7, f8, f7
    stfs f0, 0x538(r26)
    stfs f7, 0x530(r26)
lbl_fn_80145334_000019E8:
    lwz r0, 0x54c(r26)
    rlwinm r3, r0, 0, 10, 10
    subis r0, r3, 0x20
    cmplwi r0, 0x0
    bne lbl_fn_80145334_00001B04
    bl fn_80418318
    cmpwi r3, 0x0
    beq lbl_fn_80145334_00001B04
    lwz r0, 0x520(r26)
    cmpwi r0, 0x0
    bge lbl_fn_80145334_00001A1C
    li r28, 0x0
    b lbl_fn_80145334_00001A28
lbl_fn_80145334_00001A1C:
    mulli r0, r0, 0x30
    lwz r3, 0xec(r26)
    add r28, r3, r0
lbl_fn_80145334_00001A28:
    cmpwi r28, 0x0
    beq lbl_fn_80145334_00001B04
    psq_l f1, 0xb8(r26), 0, 0
    addi r27, r1, 0x610
    psq_l f2, 0xc0(r26), 0, 0
    mr r3, r27
    psq_l f3, 0xc8(r26), 0, 0
    mr r4, r27
    psq_l f4, 0xd0(r26), 0, 0
    psq_l f5, 0xd8(r26), 0, 0
    psq_l f6, 0xe0(r26), 0, 0
    psq_st f6, 0x28(r27), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    psq_st f2, 0x8(r27), 0, 0
    psq_st f3, 0x10(r27), 0, 0
    psq_st f4, 0x18(r27), 0, 0
    psq_st f5, 0x20(r27), 0, 0
    bl fn_805F8CA0
    mr r3, r26
    bl fn_80144710
    mr r4, r27
    addi r3, r26, 0xb0
    bl fn_8009076C
    bl fn_80418318
    lfs f8, 0x1c(r28)
    mr r4, r3
    lfs f0, 0x52c(r26)
    addi r5, r1, 0x158
    lfs f7, 0x2c(r28)
    addi r3, r1, 0x220
    lfs f9, 0xc(r28)
    fsubs f25, f8, f0
    psq_l f1, 0x528(r26), 0, 0
    lfs f2, 0x530(r26)
    stfs f9, 0x164(r1)
    stfs f8, 0x168(r1)
    stfs f7, 0x16c(r1)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x160(r1)
    bl fn_804188A0
    lfs f7, 0x224(r1)
    addi r3, r1, 0x220
    lfs f0, lbl_80881978
    fsubs f9, f7, f25
    lfs f2, 0x228(r1)
    stfs f9, 0x224(r1)
    lfs f8, 0x13bc(r26)
    lfs f7, 0x13c8(r26)
    fadds f7, f8, f7
    fadds f7, f9, f7
    fdivs f0, f7, f0
    stfs f0, 0x224(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x528(r26), 0, 0
    stfs f2, 0x530(r26)
lbl_fn_80145334_00001B04:
    lwz r3, 0x12a4(r26)
    extrwi. r0, r3, 1, 29
    beq lbl_fn_80145334_00001C60
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    beq lbl_fn_80145334_00001C60
    extrwi. r0, r3, 1, 30
    bne lbl_fn_80145334_00001C58
    lfs f7, 0x528(r26)
    lfs f0, 0x13d8(r26)
    lfs f9, 0x52c(r26)
    fadds f10, f7, f0
    lfs f8, 0x13dc(r26)
    lfs f7, 0x530(r26)
    fadds f8, f9, f8
    lfs f0, 0x13e0(r26)
    stfs f10, 0x528(r26)
    fadds f0, f7, f0
    lfs f9, 0x13d8(r26)
    stfs f8, 0x52c(r26)
    lfs f8, 0x13dc(r26)
    stfs f0, 0x530(r26)
    lfs f7, 0x13e0(r26)
    lwz r3, lbl_8087F610
    lfs f11, 0x13e4(r26)
    lfs f10, 0x5c8(r3)
    lfs f0, lbl_80881A8C
    fmuls f9, f9, f10
    fmuls f8, f8, f10
    fmuls f7, f7, f10
    stfs f9, 0x13d8(r26)
    fcmpo cr0, f11, f0
    stfs f8, 0x13dc(r26)
    stfs f7, 0x13e0(r26)
    ble lbl_fn_80145334_00001B94
    b lbl_fn_80145334_00001B98
lbl_fn_80145334_00001B94:
    fmr f11, f0
lbl_fn_80145334_00001B98:
    lfs f7, lbl_80881A90
    fcmpo cr0, f11, f7
    bge lbl_fn_80145334_00001BBC
    lfs f7, 0x13e4(r26)
    lfs f0, lbl_80881A8C
    fcmpo cr0, f7, f0
    ble lbl_fn_80145334_00001BB8
    b lbl_fn_80145334_00001BBC
lbl_fn_80145334_00001BB8:
    fmr f7, f0
lbl_fn_80145334_00001BBC:
    lfs f0, 0x538(r26)
    lis r3, lbl_80737810@ha
    lfd f2, lbl_80737810@l(r3)
    fadds f1, f0, f7
    stfs f1, 0x538(r26)
    bl fn_8068AEA8
    frsp f7, f1
    lfs f0, lbl_80881A0C
    fcmpo cr0, f7, f0
    ble lbl_fn_80145334_00001BEC
    lfs f0, lbl_80881A10
    fsubs f7, f7, f0
lbl_fn_80145334_00001BEC:
    lfs f0, lbl_80881A14
    fcmpo cr0, f7, f0
    bge lbl_fn_80145334_00001C00
    lfs f0, lbl_80881A10
    fadds f7, f7, f0
lbl_fn_80145334_00001C00:
    stfs f7, 0x538(r26)
    lis r3, lbl_80737810@ha
    lfs f0, 0x13e4(r26)
    lwz r4, lbl_8087F610
    lfd f2, lbl_80737810@l(r3)
    lfs f7, 0x5c8(r4)
    fmuls f1, f0, f7
    stfs f1, 0x13e4(r26)
    bl fn_8068AEA8
    frsp f7, f1
    lfs f0, lbl_80881A0C
    fcmpo cr0, f7, f0
    ble lbl_fn_80145334_00001C3C
    lfs f0, lbl_80881A10
    fsubs f7, f7, f0
lbl_fn_80145334_00001C3C:
    lfs f0, lbl_80881A14
    fcmpo cr0, f7, f0
    bge lbl_fn_80145334_00001C50
    lfs f0, lbl_80881A10
    fadds f7, f7, f0
lbl_fn_80145334_00001C50:
    stfs f7, 0x13e4(r26)
    b lbl_fn_80145334_00001C60
lbl_fn_80145334_00001C58:
    rlwinm r0, r3, 0, 31, 29
    stw r0, 0x12a4(r26)
lbl_fn_80145334_00001C60:
    addi r6, r26, 0x13b8
    lfs f7, 0x13d0(r26)
    lfs f2, 0x13c0(r26)
    addi r5, r26, 0x13c4
    psq_l f1, 0x0(r6), 0, 0
    addi r3, r1, 0x5b0
    psq_st f1, 0x0(r5), 0, 0
    addi r7, r1, 0x5e0
    psq_l f1, 0x528(r26), 0, 0
    mr r4, r3
    stfs f2, 0x13cc(r26)
    lfs f2, 0x530(r26)
    lfs f0, 0x538(r26)
    psq_st f1, 0x0(r6), 0, 0
    psq_l f1, 0xb8(r26), 0, 0
    stfs f2, 0x13c0(r26)
    psq_l f2, 0xc0(r26), 0, 0
    psq_l f3, 0xc8(r26), 0, 0
    psq_l f4, 0xd0(r26), 0, 0
    psq_l f5, 0xd8(r26), 0, 0
    psq_l f6, 0xe0(r26), 0, 0
    stfs f7, 0x13d4(r26)
    stfs f0, 0x13d0(r26)
    psq_st f1, 0x0(r7), 0, 0
    psq_st f2, 0x8(r7), 0, 0
    psq_st f3, 0x10(r7), 0, 0
    psq_st f4, 0x18(r7), 0, 0
    psq_st f5, 0x20(r7), 0, 0
    psq_st f6, 0x28(r7), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f4, 0x18(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    psq_st f6, 0x28(r3), 0, 0
    bl fn_805F8CA0
    mr r3, r26
    bl fn_80144710
    lwz r0, 0x55c(r26)
    lwz r27, 0x100(r26)
    cmpwi r0, 0x8
    bne lbl_fn_80145334_00001D24
    lwz r4, 0x100(r26)
    li r0, 0x0
    lwz r3, 0x2bc(r26)
    rlwimi r3, r4, 8, 16, 23
    stw r3, 0x2bc(r26)
    stw r0, 0x100(r26)
    b lbl_fn_80145334_00001D2C
lbl_fn_80145334_00001D24:
    addi r3, r26, 0xb0
    bl fn_80092A4C
lbl_fn_80145334_00001D2C:
    lwz r0, 0x100(r26)
    cmpw r27, r0
    subf r3, r27, r0
    subf r0, r0, r27
    or r0, r3, r0
    srwi r31, r0, 31
    bne lbl_fn_80145334_00001D9C
    lfs f9, 0x60c(r1)
    addi r3, r1, 0x14c
    lfs f10, 0x5fc(r1)
    lfs f11, 0x5ec(r1)
    lfs f8, 0x530(r26)
    lfs f7, 0x52c(r26)
    lfs f0, 0x528(r26)
    fsubs f8, f9, f8
    fsubs f7, f10, f7
    stfs f11, 0x140(r1)
    fsubs f0, f11, f0
    stfs f10, 0x144(r1)
    stfs f9, 0x148(r1)
    stfs f0, 0x14c(r1)
    stfs f7, 0x150(r1)
    stfs f8, 0x154(r1)
    bl fn_805F9920
    lfs f0, lbl_80881A94
    fcmpo cr0, f1, f0
    ble lbl_fn_80145334_00001D9C
    li r31, 0x1
lbl_fn_80145334_00001D9C:
    lwz r0, 0x7e0(r26)
    rlwinm r0, r0, 0, 25, 25
    cmplwi r0, 0x40
    bne lbl_fn_80145334_00001E14
    lwz r0, 0xf94(r26)
    cmpwi r0, 0x0
    bne lbl_fn_80145334_00001E14
    addi r4, r26, 0xf88
    lfs f11, 0xe4(r26)
    addi r3, r1, 0x134
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lfs f2, 0xf90(r26)
    lfs f10, 0xd4(r26)
    lfs f9, 0xc4(r26)
    fadds f8, f11, f2
    lfs f7, 0x138(r1)
    lfs f0, 0x134(r1)
    fadds f7, f10, f7
    stfs f2, 0x13c(r1)
    fadds f0, f9, f0
    stfs f9, 0xa8(r1)
    stfs f10, 0xac(r1)
    stfs f11, 0xb0(r1)
    stfs f0, 0x9c(r1)
    stfs f7, 0xa0(r1)
    stfs f8, 0xa4(r1)
    stfs f0, 0xc4(r26)
    stfs f7, 0xd4(r26)
    stfs f8, 0xe4(r26)
lbl_fn_80145334_00001E14:
    lwz r3, 0x524(r26)
    li r30, 0x0
    lwz r0, 0x1254(r26)
    mulli r3, r3, 0x2c
    lwz r4, 0x2d0(r26)
    cmpwi r0, 0x0
    add r29, r4, r3
    beq lbl_fn_80145334_00002094
    lwz r3, 0x2e0(r26)
    lwz r0, 0x518(r26)
    cmplw r3, r0
    beq lbl_fn_80145334_00001E48
    li r30, 0x1
lbl_fn_80145334_00001E48:
    lfs f7, 0x2e4(r26)
    lfs f0, 0x51c(r26)
    stw r3, 0x518(r26)
    fcmpo cr0, f7, f0
    bge lbl_fn_80145334_00001E60
    li r30, 0x1
lbl_fn_80145334_00001E60:
    stfs f7, 0x51c(r26)
    addi r3, r1, 0x214
    lfs f8, lbl_8088196C
    psq_l f1, 0x4(r29), 0, 0
    lfs f2, 0xc(r29)
    lfs f7, lbl_80881964
    stfs f8, 0x208(r1)
    lfs f0, lbl_808819C4
    stfs f8, 0x20c(r1)
    stfs f7, 0x210(r1)
    lfs f7, 0x10(r29)
    psq_st f1, 0x0(r3), 0, 0
    fabs f7, f7
    stfs f2, 0x21c(r1)
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_80145334_00001EE0
    lfs f7, 0x14(r29)
    fabs f7, f7
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_80145334_00001EE0
    lfs f7, 0x18(r29)
    fabs f7, f7
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_80145334_00001EE0
    lfs f7, 0x1c(r29)
    fabs f7, f7
    frsp f7, f7
    fcmpo cr0, f7, f0
    blt lbl_fn_80145334_00001EFC
lbl_fn_80145334_00001EE0:
    addi r3, r1, 0x550
    addi r4, r29, 0x10
    bl fn_805F9190
    addi r4, r1, 0x208
    addi r3, r1, 0x550
    mr r5, r4
    bl fn_805F93C0
lbl_fn_80145334_00001EFC:
    lfs f2, 0x210(r1)
    addi r27, r1, 0x208
    lfs f0, lbl_808819C4
    fabs f7, f2
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_80145334_00001F3C
    lfs f7, 0x208(r1)
    lfs f0, lbl_8088196C
    fcmpo cr0, f7, f0
    ble lbl_fn_80145334_00001F30
    lfs f0, lbl_808819C8
    b lbl_fn_80145334_00001F34
lbl_fn_80145334_00001F30:
    lfs f0, lbl_808819CC
lbl_fn_80145334_00001F34:
    stfs f0, 0x58(r1)
    b lbl_fn_80145334_00001F4C
lbl_fn_80145334_00001F3C:
    lfs f1, 0x208(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x58(r1)
lbl_fn_80145334_00001F4C:
    lfs f0, 0x58(r1)
    addi r3, r1, 0x340
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f7, lbl_8088196C
    addi r4, r1, 0x60
    lfs f8, 0x348(r1)
    mr r5, r4
    lfs f9, 0x344(r1)
    addi r3, r1, 0x300
    lfs f10, 0x340(r1)
    lfs f11, 0x358(r1)
    lfs f12, 0x354(r1)
    lfs f13, 0x350(r1)
    lfs f30, 0x368(r1)
    lfs f31, 0x364(r1)
    lfs f29, 0x360(r1)
    lfs f28, 0x36c(r1)
    lfs f27, 0x35c(r1)
    lfs f26, 0x34c(r1)
    lfs f0, lbl_80881964
    psq_l f1, 0x0(r27), 0, 0
    lfs f2, 0x210(r1)
    stfs f7, 0x330(r1)
    stfs f7, 0x334(r1)
    stfs f7, 0x338(r1)
    stfs f0, 0x33c(r1)
    stfs f10, 0x90(r1)
    stfs f9, 0x94(r1)
    stfs f8, 0x98(r1)
    stfs f10, 0x300(r1)
    stfs f9, 0x304(r1)
    stfs f8, 0x308(r1)
    stfs f13, 0x84(r1)
    stfs f12, 0x88(r1)
    stfs f11, 0x8c(r1)
    stfs f13, 0x310(r1)
    stfs f12, 0x314(r1)
    stfs f11, 0x318(r1)
    stfs f29, 0x78(r1)
    stfs f31, 0x7c(r1)
    stfs f30, 0x80(r1)
    stfs f29, 0x320(r1)
    stfs f31, 0x324(r1)
    stfs f30, 0x328(r1)
    stfs f26, 0x6c(r1)
    stfs f27, 0x70(r1)
    stfs f28, 0x74(r1)
    stfs f26, 0x30c(r1)
    stfs f27, 0x31c(r1)
    stfs f28, 0x32c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x68(r1)
    bl fn_805F9750
    lfs f2, 0x68(r1)
    lfs f0, lbl_808819C4
    fabs f7, f2
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_80145334_00002068
    lfs f7, 0x64(r1)
    lfs f0, lbl_8088196C
    fcmpo cr0, f7, f0
    ble lbl_fn_80145334_00002058
    lfs f0, lbl_808819C8
    b lbl_fn_80145334_0000205C
lbl_fn_80145334_00002058:
    lfs f0, lbl_808819CC
lbl_fn_80145334_0000205C:
    fneg f0, f0
    stfs f0, 0x54(r1)
    b lbl_fn_80145334_0000207C
lbl_fn_80145334_00002068:
    lfs f1, 0x64(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x54(r1)
lbl_fn_80145334_0000207C:
    addi r3, r1, 0x54
    lfs f2, lbl_8088196C
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x5c(r1)
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0x210(r1)
lbl_fn_80145334_00002094:
    lwz r4, lbl_8087EFB4
    addi r3, r1, 0x128
    lfs f0, 0x530(r26)
    li r28, 0x1
    lfs f7, 0x114(r4)
    lfs f9, 0x110(r4)
    fsubs f10, f7, f0
    lfs f8, 0x52c(r26)
    lfs f7, 0x10c(r4)
    lfs f0, 0x528(r26)
    fsubs f8, f9, f8
    fsubs f0, f7, f0
    stfs f8, 0x12c(r1)
    stfs f0, 0x128(r1)
    stfs f10, 0x130(r1)
    bl fn_805F9920
    lwz r0, 0x12a8(r26)
    fmr f30, f1
    extrwi r0, r0, 1, 28
    cntlzw r0, r0
    srwi. r4, r0, 5
    beq lbl_fn_80145334_00002188
    lwz r3, 0x48(r26)
    subi r0, r3, 0x1
    cntlzw r0, r0
    srwi. r4, r0, 5
    bne lbl_fn_80145334_0000210C
    subi r0, r3, 0x4
    cntlzw r0, r0
    srwi r4, r0, 5
lbl_fn_80145334_0000210C:
    cmpwi r4, 0x0
    bne lbl_fn_80145334_00002130
    neg r0, r3
    or r0, r0, r3
    srwi. r4, r0, 31
    beq lbl_fn_80145334_00002130
    lwz r0, 0x648(r26)
    cntlzw r0, r0
    srwi r4, r0, 5
lbl_fn_80145334_00002130:
    cmpwi r4, 0x0
    bne lbl_fn_80145334_00002188
    lwz r0, lbl_8087FA20
    cmpwi r0, 0x0
    beq lbl_fn_80145334_0000214C
    li r4, 0x1
    b lbl_fn_80145334_00002188
lbl_fn_80145334_0000214C:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80145334_00002184
    lwz r0, 0x48(r3)
    cmpwi r0, 0x2
    bne lbl_fn_80145334_00002184
    lwz r0, 0x4c(r3)
    cmpwi r0, 0x2a
    bne lbl_fn_80145334_00002184
    lwz r0, 0x50(r3)
    cmpwi r0, 0x2
    bne lbl_fn_80145334_00002184
    li r4, 0x1
    b lbl_fn_80145334_00002188
lbl_fn_80145334_00002184:
    li r4, 0x0
lbl_fn_80145334_00002188:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80145334_000021A4
    lwz r0, 0x56d4(r3)
    cmplw r0, r26
    bne lbl_fn_80145334_000021A4
    li r4, 0x0
lbl_fn_80145334_000021A4:
    cmpwi r4, 0x0
    beq lbl_fn_80145334_000021E8
    lwz r0, 0xc54(r26)
    cmpwi r0, 0x0
    beq lbl_fn_80145334_000021C4
    lfs f0, lbl_80881A98
    fcmpo cr0, f1, f0
    ble lbl_fn_80145334_000021E8
lbl_fn_80145334_000021C4:
    cmpwi r31, 0x0
    bne lbl_fn_80145334_000021E8
    lwz r0, 0x55c(r26)
    cmpwi r0, 0x8
    beq lbl_fn_80145334_000021E8
    lwz r0, 0xb4(r26)
    ori r0, r0, 0x40
    stw r0, 0xb4(r26)
    b lbl_fn_80145334_000021F4
lbl_fn_80145334_000021E8:
    lwz r0, 0xb4(r26)
    rlwinm r0, r0, 0, 26, 24
    stw r0, 0xb4(r26)
lbl_fn_80145334_000021F4:
    lwz r3, 0x1390(r26)
    cmpwi r4, 0x0
    addi r0, r3, 0x1
    stw r0, 0x1390(r26)
    beq lbl_fn_80145334_00002308
    cmpwi r31, 0x0
    bne lbl_fn_80145334_00002308
    lwz r4, 0x48(r26)
    li r0, 0x1
    lwz r3, lbl_8087EFA8
    cmpwi r4, 0x1
    lfs f7, 0x218(r3)
    beq lbl_fn_80145334_00002234
    cmpwi r4, 0x4
    beq lbl_fn_80145334_00002234
    li r0, 0x0
lbl_fn_80145334_00002234:
    cmpwi r0, 0x0
    beq lbl_fn_80145334_00002268
    lwz r0, 0xc54(r26)
    cmpwi r0, 0x0
    bne lbl_fn_80145334_00002268
    lwz r0, 0x1400(r26)
    cmpwi r0, 0x0
    beq lbl_fn_80145334_00002260
    lwz r0, 0x140c(r26)
    cmpwi r0, -0x1
    bne lbl_fn_80145334_00002268
lbl_fn_80145334_00002260:
    lfs f0, lbl_808819B4
    fmuls f7, f7, f0
lbl_fn_80145334_00002268:
    lwz r5, 0x55c(r26)
    cmpwi r5, 0x8
    bne lbl_fn_80145334_0000227C
    lfs f0, lbl_80881A4C
    fmuls f7, f7, f0
lbl_fn_80145334_0000227C:
    fmuls f0, f7, f7
    fcmpo cr0, f1, f0
    ble lbl_fn_80145334_00002290
    li r28, 0x0
    b lbl_fn_80145334_00002308
lbl_fn_80145334_00002290:
    cmpwi r4, 0x1
    lfs f7, 0x21c(r3)
    li r0, 0x0
    beq lbl_fn_80145334_000022A8
    cmpwi r4, 0x4
    bne lbl_fn_80145334_000022AC
lbl_fn_80145334_000022A8:
    li r0, 0x1
lbl_fn_80145334_000022AC:
    cmpwi r0, 0x0
    beq lbl_fn_80145334_000022C8
    lwz r0, 0xc54(r26)
    cmpwi r0, 0x0
    bne lbl_fn_80145334_000022C8
    lfs f0, lbl_808819B4
    fmuls f7, f7, f0
lbl_fn_80145334_000022C8:
    cmpwi r5, 0x8
    bne lbl_fn_80145334_000022D8
    lfs f0, lbl_80881A4C
    fmuls f7, f7, f0
lbl_fn_80145334_000022D8:
    fmuls f0, f7, f7
    fcmpo cr0, f1, f0
    ble lbl_fn_80145334_00002308
    lwz r0, 0x80(r26)
    lwz r4, 0x1390(r26)
    lwz r3, 0x220(r3)
    add r4, r4, r0
    divw r0, r4, r3
    mullw r0, r0, r3
    subf. r0, r0, r4
    beq lbl_fn_80145334_00002308
    li r28, 0x0
lbl_fn_80145334_00002308:
    lwz r0, 0x55c(r26)
    li r27, 0x1
    cmpwi r0, 0x8
    bne lbl_fn_80145334_00002324
    lwz r0, 0x12a4(r26)
    extrwi. r0, r0, 1, 8
    bne lbl_fn_80145334_00002350
lbl_fn_80145334_00002324:
    lwz r0, 0x7e0(r26)
    rlwinm r0, r0, 0, 25, 25
    cmplwi r0, 0x40
    bne lbl_fn_80145334_00002350
    lwz r0, 0xf94(r26)
    cmpwi r0, 0x0
    bne lbl_fn_80145334_00002350
    cmpwi r31, 0x0
    li r27, 0x0
    bne lbl_fn_80145334_00002350
    li r28, 0x0
lbl_fn_80145334_00002350:
    lwz r0, 0x12a8(r26)
    extrwi. r0, r0, 1, 4
    beq lbl_fn_80145334_00002380
    lwz r3, 0x2e0(r26)
    cmpwi r3, 0x0
    beq lbl_fn_80145334_00002380
    bl fn_80473F18
    bl fn_802185FC
    cntlzw r3, r3
    lwz r0, 0x12a8(r26)
    rlwimi r0, r3, 21, 5, 5
    stw r0, 0x12a8(r26)
lbl_fn_80145334_00002380:
    lwz r3, 0x48(r26)
    mr r4, r28
    li r0, 0x1
    cmpwi r3, 0x1
    beq lbl_fn_80145334_000023A0
    cmpwi r3, 0x4
    beq lbl_fn_80145334_000023A0
    li r0, 0x0
lbl_fn_80145334_000023A0:
    cmpwi r0, 0x0
    beq lbl_fn_80145334_000023BC
    lfs f0, lbl_80881A9C
    fcmpo cr0, f30, f0
    ble lbl_fn_80145334_000023EC
    li r4, 0x0
    b lbl_fn_80145334_000023EC
lbl_fn_80145334_000023BC:
    cmpwi r3, 0x3
    beq lbl_fn_80145334_000023EC
    cmpwi r3, 0x2
    bne lbl_fn_80145334_000023EC
    lwz r0, 0x12a4(r26)
    extrwi r0, r0, 1, 9
    cmplwi r0, 0x1
    beq lbl_fn_80145334_000023EC
    lfs f0, lbl_80881AA0
    fcmpo cr0, f30, f0
    ble lbl_fn_80145334_000023EC
    li r4, 0x0
lbl_fn_80145334_000023EC:
    cmpwi r4, 0x0
    beq lbl_fn_80145334_000023FC
    addi r3, r26, 0x1220
    bl fn_8012111C
lbl_fn_80145334_000023FC:
    cmpwi r28, 0x0
    beq lbl_fn_80145334_00002B34
    fmr f1, f30
    mr r3, r26
    bl fn_80175B18
    addi r3, r26, 0x10d8
    bl fn_80129A6C
    lwz r4, 0x680(r26)
    cmpwi r4, 0x0
    beq lbl_fn_80145334_00002578
    lis r3, 0x1062
    lwz r5, 0x4(r4)
    addi r0, r3, 0x4dd3
    mulhw r0, r0, r5
    lis r3, 0x6666
    addi r4, r3, 0x6667
    srawi r0, r0, 6
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r0, r0, 0x3e8
    subf r0, r0, r5
    mulhw r0, r4, r0
    srawi r0, r0, 2
    srwi r3, r0, 31
    add r0, r0, r3
    cmpwi r0, 0x2e
    bne lbl_fn_80145334_00002578
    lwz r0, 0x648(r26)
    cmpwi r0, 0x0
    bne lbl_fn_80145334_00002480
    lwz r0, 0x55c(r26)
    cmpwi r0, 0x8
    bne lbl_fn_80145334_00002540
lbl_fn_80145334_00002480:
    lfs f0, lbl_80881964
    lis r31, lbl_80737A9C@ha
    lis r28, lbl_807C7030@ha
    stfs f0, 0x11c(r1)
    addi r31, r31, lbl_80737A9C@l
    addi r3, r26, 0xb0
    addi r5, r28, lbl_807C7030@l
    stfs f0, 0x120(r1)
    mr r6, r5
    addi r4, r31, 0x303
    stfs f0, 0x124(r1)
    addi r7, r1, 0x11c
    li r8, 0x8
    bl fn_80093F1C
    lfs f0, lbl_80881964
    addi r5, r28, lbl_807C7030@l
    stfs f0, 0x110(r1)
    mr r6, r5
    addi r3, r26, 0xb0
    addi r4, r31, 0x30d
    stfs f0, 0x114(r1)
    addi r7, r1, 0x110
    li r8, 0x8
    stfs f0, 0x118(r1)
    bl fn_80093F1C
    lfs f0, lbl_80881964
    addi r5, r28, lbl_807C7030@l
    stfs f0, 0x104(r1)
    mr r6, r5
    addi r3, r26, 0xb0
    addi r4, r31, 0x317
    stfs f0, 0x108(r1)
    addi r7, r1, 0x104
    li r8, 0x8
    stfs f0, 0x10c(r1)
    bl fn_80093F1C
    lfs f0, lbl_80881964
    addi r5, r28, lbl_807C7030@l
    stfs f0, 0xf8(r1)
    mr r6, r5
    addi r3, r26, 0xb0
    addi r4, r31, 0x322
    stfs f0, 0xfc(r1)
    addi r7, r1, 0xf8
    li r8, 0x8
    stfs f0, 0x100(r1)
    bl fn_80093F1C
    b lbl_fn_80145334_00002578
lbl_fn_80145334_00002540:
    lis r28, lbl_80737A9C@ha
    addi r3, r26, 0xb0
    addi r28, r28, lbl_80737A9C@l
    addi r4, r28, 0x303
    bl fn_80094778
    addi r3, r26, 0xb0
    addi r4, r28, 0x30d
    bl fn_80094778
    addi r3, r26, 0xb0
    addi r4, r28, 0x317
    bl fn_80094778
    addi r3, r26, 0xb0
    addi r4, r28, 0x322
    bl fn_80094778
lbl_fn_80145334_00002578:
    mr r4, r27
    addi r3, r26, 0xb0
    bl fn_80097E80
    lwz r0, 0x55c(r26)
    mr r31, r3
    cmpwi r0, 0x6
    bne lbl_fn_80145334_00002618
    lwz r0, 0xf80(r26)
    cmpwi r0, 0x0
    bne lbl_fn_80145334_000025C0
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x6a0(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x6a4(r1)
    stw r0, 0x6a8(r1)
    b lbl_fn_80145334_000025DC
lbl_fn_80145334_000025C0:
    lis r5, lbl_8077A980@ha
    lwzu r4, lbl_8077A980@l(r5)
    stw r4, 0x6a0(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x6a4(r1)
    stw r0, 0x6a8(r1)
lbl_fn_80145334_000025DC:
    lwz r5, 0x6a0(r1)
    addi r3, r1, 0xec
    lwz r4, 0x6a4(r1)
    lwz r0, 0x6a8(r1)
    stw r5, 0xec(r1)
    stw r4, 0xf0(r1)
    stw r0, 0xf4(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80145334_00002618
    lwz r3, 0xf80(r26)
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
lbl_fn_80145334_00002618:
    lwz r0, 0x12a8(r26)
    extrwi. r0, r0, 1, 19
    beq lbl_fn_80145334_00002638
    lwz r12, 0x0(r26)
    mr r3, r26
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
lbl_fn_80145334_00002638:
    lwz r0, 0x12a4(r26)
    extrwi. r0, r0, 1, 29
    beq lbl_fn_80145334_00002668
    lwz r0, 0x524(r26)
    addi r3, r26, 0x13e8
    lwz r4, 0x2d0(r26)
    mulli r0, r0, 0x2c
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x13f0(r26)
    add r3, r4, r0
    psq_st f1, 0x4(r3), 0, 0
    stfs f2, 0xc(r3)
lbl_fn_80145334_00002668:
    cmpwi r30, 0x0
    bne lbl_fn_80145334_000029EC
    lwz r0, 0x1254(r26)
    cmpwi r0, 0x0
    beq lbl_fn_80145334_000029EC
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_80145334_00002754
    lwz r0, 0x0(r29)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_80145334_00002754
    lfs f7, 0xc(r29)
    addi r4, r1, 0x1fc
    lfs f0, 0x21c(r1)
    addi r3, r1, 0x520
    lfs f9, 0x8(r29)
    mr r5, r4
    fsubs f10, f7, f0
    lfs f8, 0x218(r1)
    lfs f7, 0x4(r29)
    lfs f0, 0x214(r1)
    fsubs f8, f9, f8
    stfs f10, 0x204(r1)
    fsubs f7, f7, f0
    lfs f0, lbl_8088196C
    stfs f8, 0x200(r1)
    stfs f7, 0x1fc(r1)
    psq_l f1, 0xb8(r26), 0, 0
    psq_l f2, 0xc0(r26), 0, 0
    psq_l f3, 0xc8(r26), 0, 0
    psq_l f4, 0xd0(r26), 0, 0
    psq_l f5, 0xd8(r26), 0, 0
    psq_l f6, 0xe0(r26), 0, 0
    psq_st f6, 0x28(r3), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    psq_st f4, 0x18(r3), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    stfs f0, 0x52c(r1)
    stfs f0, 0x53c(r1)
    stfs f0, 0x54c(r1)
    bl fn_805F93C0
    lfs f7, 0x528(r26)
    lfs f0, 0x1fc(r1)
    lfs f8, 0x52c(r26)
    fadds f0, f7, f0
    lfs f7, 0x530(r26)
    stfs f0, 0x528(r26)
    lfs f0, 0x200(r1)
    fadds f0, f8, f0
    stfs f0, 0x52c(r26)
    lfs f0, 0x204(r1)
    fadds f0, f7, f0
    stfs f0, 0x530(r26)
    lwz r0, 0x0(r29)
    clrrwi r0, r0, 1
    stw r0, 0x0(r29)
lbl_fn_80145334_00002754:
    lwz r0, 0x1254(r26)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_80145334_000029A8
    lwz r0, 0x0(r29)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_80145334_000029A8
    lfs f7, 0x534(r26)
    addi r3, r1, 0x4f0
    lfs f0, 0x208(r1)
    addi r4, r29, 0x10
    lfs f10, 0x538(r26)
    fsubs f0, f7, f0
    lfs f9, 0x53c(r26)
    lfs f7, lbl_8088196C
    stfs f0, 0x534(r26)
    lfs f0, lbl_80881964
    lfs f8, 0x20c(r1)
    fsubs f8, f10, f8
    stfs f8, 0x538(r26)
    lfs f8, 0x210(r1)
    fsubs f8, f9, f8
    stfs f8, 0x53c(r26)
    stfs f7, 0x1f0(r1)
    stfs f7, 0x1f4(r1)
    stfs f0, 0x1f8(r1)
    bl fn_805F9190
    addi r4, r1, 0x1f0
    addi r3, r1, 0x4f0
    mr r5, r4
    bl fn_805F93C0
    lfs f2, 0x1f8(r1)
    addi r27, r1, 0x1f0
    lfs f0, lbl_808819C4
    fabs f7, f2
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_80145334_00002814
    lfs f7, 0x1f0(r1)
    lfs f0, lbl_8088196C
    fcmpo cr0, f7, f0
    ble lbl_fn_80145334_00002808
    lfs f0, lbl_808819C8
    b lbl_fn_80145334_0000280C
lbl_fn_80145334_00002808:
    lfs f0, lbl_808819CC
lbl_fn_80145334_0000280C:
    stfs f0, 0x10(r1)
    b lbl_fn_80145334_00002824
lbl_fn_80145334_00002814:
    lfs f1, 0x1f0(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x10(r1)
lbl_fn_80145334_00002824:
    lfs f0, 0x10(r1)
    addi r3, r1, 0x2d0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f7, lbl_8088196C
    addi r4, r1, 0x18
    lfs f8, 0x2d8(r1)
    mr r5, r4
    lfs f9, 0x2d4(r1)
    addi r3, r1, 0x290
    lfs f10, 0x2d0(r1)
    lfs f11, 0x2e8(r1)
    lfs f12, 0x2e4(r1)
    lfs f13, 0x2e0(r1)
    lfs f26, 0x2f8(r1)
    lfs f27, 0x2f4(r1)
    lfs f28, 0x2f0(r1)
    lfs f29, 0x2fc(r1)
    lfs f31, 0x2ec(r1)
    lfs f25, 0x2dc(r1)
    lfs f0, lbl_80881964
    psq_l f1, 0x0(r27), 0, 0
    lfs f2, 0x1f8(r1)
    stfs f7, 0x2c0(r1)
    stfs f7, 0x2c4(r1)
    stfs f7, 0x2c8(r1)
    stfs f0, 0x2cc(r1)
    stfs f10, 0x48(r1)
    stfs f9, 0x4c(r1)
    stfs f8, 0x50(r1)
    stfs f10, 0x290(r1)
    stfs f9, 0x294(r1)
    stfs f8, 0x298(r1)
    stfs f13, 0x3c(r1)
    stfs f12, 0x40(r1)
    stfs f11, 0x44(r1)
    stfs f13, 0x2a0(r1)
    stfs f12, 0x2a4(r1)
    stfs f11, 0x2a8(r1)
    stfs f28, 0x30(r1)
    stfs f27, 0x34(r1)
    stfs f26, 0x38(r1)
    stfs f28, 0x2b0(r1)
    stfs f27, 0x2b4(r1)
    stfs f26, 0x2b8(r1)
    stfs f25, 0x24(r1)
    stfs f31, 0x28(r1)
    stfs f29, 0x2c(r1)
    stfs f25, 0x29c(r1)
    stfs f31, 0x2ac(r1)
    stfs f29, 0x2bc(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x20(r1)
    bl fn_805F9750
    lfs f2, 0x20(r1)
    lfs f0, lbl_808819C4
    fabs f7, f2
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_80145334_00002940
    lfs f7, 0x1c(r1)
    lfs f0, lbl_8088196C
    fcmpo cr0, f7, f0
    ble lbl_fn_80145334_00002930
    lfs f0, lbl_808819C8
    b lbl_fn_80145334_00002934
lbl_fn_80145334_00002930:
    lfs f0, lbl_808819CC
lbl_fn_80145334_00002934:
    fneg f0, f0
    stfs f0, 0xc(r1)
    b lbl_fn_80145334_00002954
lbl_fn_80145334_00002940:
    lfs f1, 0x1c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0xc(r1)
lbl_fn_80145334_00002954:
    addi r3, r1, 0xc
    lfs f2, lbl_8088196C
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0x1f8(r1)
    lfs f0, 0x1f0(r1)
    lfs f7, 0x534(r26)
    lfs f8, 0x538(r26)
    fadds f0, f7, f0
    lfs f7, 0x53c(r26)
    stfs f2, 0x14(r1)
    stfs f0, 0x534(r26)
    lfs f0, 0x1f4(r1)
    fadds f0, f8, f0
    stfs f0, 0x538(r26)
    lfs f0, 0x1f8(r1)
    fadds f0, f7, f0
    stfs f0, 0x53c(r26)
    lwz r0, 0x0(r29)
    rlwinm r0, r0, 0, 31, 29
    stw r0, 0x0(r29)
lbl_fn_80145334_000029A8:
    lwz r0, 0x1254(r26)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_80145334_000029E4
    lwz r0, 0x0(r29)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_80145334_000029E4
    psq_l f1, 0x20(r29), 0, 0
    lfs f2, 0x28(r29)
    stfs f2, 0x548(r26)
    psq_st f1, 0x540(r26), 0, 0
    lwz r0, 0x0(r29)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x0(r29)
lbl_fn_80145334_000029E4:
    mr r3, r26
    bl fn_80144710
lbl_fn_80145334_000029EC:
    cmpwi r31, 0x0
    beq lbl_fn_80145334_00002AA0
    lfs f7, 0x588(r26)
    lfs f0, lbl_808819F4
    fcmpo cr0, f7, f0
    ble lbl_fn_80145334_00002A20
    lwz r0, 0x524(r26)
    lwz r3, 0x2d0(r26)
    mulli r0, r0, 0x2c
    add r3, r3, r0
    lfs f0, 0xc(r3)
    fsubs f0, f0, f7
    stfs f0, 0xc(r3)
lbl_fn_80145334_00002A20:
    li r0, 0x0
    stw r0, 0x27c(r1)
    addi r3, r26, 0xb0
    addi r4, r1, 0x27c
    bl fn_8000D430
    addic. r3, r1, 0x27c
    beq lbl_fn_80145334_00002A70
    lwz r4, 0x27c(r1)
    cmpwi r4, 0x0
    beq lbl_fn_80145334_00002A70
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_80145334_00002A68
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80145334_00002A68:
    li r0, 0x0
    stw r0, 0x27c(r1)
lbl_fn_80145334_00002A70:
    lfs f7, 0x588(r26)
    lfs f0, lbl_808819F4
    fcmpo cr0, f7, f0
    ble lbl_fn_80145334_00002AE8
    lwz r0, 0x524(r26)
    lwz r3, 0x2d0(r26)
    mulli r0, r0, 0x2c
    add r3, r3, r0
    lfs f0, 0xc(r3)
    fadds f0, f0, f7
    stfs f0, 0xc(r3)
    b lbl_fn_80145334_00002AE8
lbl_fn_80145334_00002AA0:
    lwz r3, 0x48(r26)
    li r0, 0x1
    cmpwi r3, 0x1
    beq lbl_fn_80145334_00002ABC
    cmpwi r3, 0x4
    beq lbl_fn_80145334_00002ABC
    li r0, 0x0
lbl_fn_80145334_00002ABC:
    cmpwi r0, 0x0
    beq lbl_fn_80145334_00002ADC
    lwz r0, 0xc54(r26)
    cmpwi r0, 0x0
    bne lbl_fn_80145334_00002ADC
    lwz r0, 0x55c(r26)
    cmpwi r0, 0x2
    beq lbl_fn_80145334_00002AE8
lbl_fn_80145334_00002ADC:
    addi r3, r26, 0xb0
    addi r4, r1, 0x5b0
    bl fn_8009076C
lbl_fn_80145334_00002AE8:
    addi r3, r26, 0xb0
    bl fn_8009757C
    lwz r0, 0x12bc(r26)
    cmpwi r0, 0x0
    blt lbl_fn_80145334_00002BA0
    lfs f25, 0x374(r26)
    addi r3, r26, 0xb0
    li r4, 0x3
    bl fn_80097D7C
    fcmpo cr0, f25, f1
    cror eq, gt, eq
    bne lbl_fn_80145334_00002BA0
    li r0, -0x1
    stw r0, 0x12bc(r26)
    lfs f1, lbl_80881964
    addi r3, r26, 0xb0
    li r4, 0x3
    bl fn_80097CCC
    b lbl_fn_80145334_00002BA0
lbl_fn_80145334_00002B34:
    lfs f1, lbl_80881A00
    addi r3, r26, 0x10d8
    bl fn_80129A48
    addi r3, r26, 0x10d8
    bl fn_80129A6C
    cmpwi r27, 0x0
    beq lbl_fn_80145334_00002B58
    addi r3, r26, 0xb0
    bl fn_80098698
lbl_fn_80145334_00002B58:
    lwz r3, 0x48(r26)
    li r0, 0x1
    cmpwi r3, 0x1
    beq lbl_fn_80145334_00002B74
    cmpwi r3, 0x4
    beq lbl_fn_80145334_00002B74
    li r0, 0x0
lbl_fn_80145334_00002B74:
    cmpwi r0, 0x0
    beq lbl_fn_80145334_00002B94
    lwz r0, 0xc54(r26)
    cmpwi r0, 0x0
    bne lbl_fn_80145334_00002B94
    lwz r0, 0x55c(r26)
    cmpwi r0, 0x2
    beq lbl_fn_80145334_00002BA0
lbl_fn_80145334_00002B94:
    addi r3, r26, 0xb0
    addi r4, r1, 0x5b0
    bl fn_8009076C
lbl_fn_80145334_00002BA0:
    lwz r3, lbl_8087F430
    li r27, 0x0
    cmpwi r3, 0x0
    beq lbl_fn_80145334_00002BC8
    bl fn_80373148
    cmpwi r3, 0x0
    beq lbl_fn_80145334_00002BC8
    lwz r3, lbl_8087F430
    bl fn_80373148
    mr r27, r3
lbl_fn_80145334_00002BC8:
    cmpwi r27, 0x0
    bne lbl_fn_80145334_00002BEC
    lwz r3, lbl_8087F558
    cmpwi r3, 0x0
    beq lbl_fn_80145334_00002BEC
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80145334_00002BEC
    lwz r27, 0x4c(r3)
lbl_fn_80145334_00002BEC:
    lwz r0, 0x12a8(r26)
    extrwi. r0, r0, 1, 6
    beq lbl_fn_80145334_00002C0C
    cmpwi r27, 0x0
    beq lbl_fn_80145334_00002C0C
    lwz r4, 0x104(r27)
    mr r3, r26
    bl fn_80147A18
lbl_fn_80145334_00002C0C:
    fmr f1, f30
    mr r3, r26
    bl fn_80148B38
    lwz r12, 0x0(r26)
    mr r3, r26
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r26)
    mr r3, r26
    lwz r12, 0x54(r12)
    mtctr r12
    bctrl
    lwz r3, 0x48(r26)
    li r0, 0x1
    cmpwi r3, 0x1
    beq lbl_fn_80145334_00002C5C
    cmpwi r3, 0x4
    beq lbl_fn_80145334_00002C5C
    li r0, 0x0
lbl_fn_80145334_00002C5C:
    cmpwi r0, 0x0
    bne lbl_fn_80145334_00002C70
    lwz r0, lbl_8087FA20
    cmpwi r0, 0x0
    beq lbl_fn_80145334_00002D08
lbl_fn_80145334_00002C70:
    lwz r0, 0x55c(r26)
    cmpwi r0, 0x6
    bne lbl_fn_80145334_00002C88
    lwz r0, 0x560(r26)
    cmpwi r0, 0x45
    beq lbl_fn_80145334_00002CD4
lbl_fn_80145334_00002C88:
    lwz r3, 0x60(r26)
    cmpwi r3, 0x0
    beq lbl_fn_80145334_00002CD4
    lwz r0, 0x24(r3)
    cmpwi r0, 0x35
    beq lbl_fn_80145334_00002CD4
    lfs f0, lbl_80881AA4
    fcmpo cr0, f30, f0
    bge lbl_fn_80145334_00002CC8
    lwz r0, 0x12a4(r26)
    extrwi. r0, r0, 1, 19
    bne lbl_fn_80145334_00002CC8
    lwz r0, 0x5c0(r26)
    ori r0, r0, 0x1
    stw r0, 0x5c0(r26)
    b lbl_fn_80145334_00002CD4
lbl_fn_80145334_00002CC8:
    lwz r0, 0x5c0(r26)
    clrrwi r0, r0, 1
    stw r0, 0x5c0(r26)
lbl_fn_80145334_00002CD4:
    lhz r0, 0xd38(r26)
    extrwi. r0, r0, 1, 16
    bne lbl_fn_80145334_00002D08
    lfs f0, lbl_80881A40
    fcmpo cr0, f30, f0
    bge lbl_fn_80145334_00002CFC
    lwz r0, 0x54c(r26)
    ori r0, r0, 0x20
    stw r0, 0x54c(r26)
    b lbl_fn_80145334_00002D08
lbl_fn_80145334_00002CFC:
    lwz r0, 0x54c(r26)
    rlwinm r0, r0, 0, 27, 25
    stw r0, 0x54c(r26)
lbl_fn_80145334_00002D08:
    lwz r0, 0x48(r26)
    cmpwi r0, 0x0
    bne lbl_fn_80145334_00002F64
    lwz r0, 0x55c(r26)
    li r27, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_80145334_00002EB4
    lwz r0, 0x560(r26)
    cmpwi r0, 0x1d
    beq lbl_fn_80145334_00002D4C
    cmpwi r0, 0xd
    beq lbl_fn_80145334_00002E34
    cmpwi r0, 0x21
    beq lbl_fn_80145334_00002E5C
    cmpwi r0, 0xf
    beq lbl_fn_80145334_00002E88
    b lbl_fn_80145334_00002EB4
lbl_fn_80145334_00002D4C:
    lwz r0, 0xf80(r26)
    cmpwi r0, 0x0
    bne lbl_fn_80145334_00002D78
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x6ac(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x6b0(r1)
    stw r0, 0x6b4(r1)
    b lbl_fn_80145334_00002D94
lbl_fn_80145334_00002D78:
    lis r5, lbl_8077A98C@ha
    lwzu r4, lbl_8077A98C@l(r5)
    stw r4, 0x6ac(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x6b0(r1)
    stw r0, 0x6b4(r1)
lbl_fn_80145334_00002D94:
    lwz r5, 0x6ac(r1)
    addi r3, r1, 0xe0
    lwz r4, 0x6b0(r1)
    lwz r0, 0x6b4(r1)
    stw r5, 0xe0(r1)
    stw r4, 0xe4(r1)
    stw r0, 0xe8(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80145334_00002EB4
    lwz r3, 0xf80(r26)
    lwz r12, 0x0(r3)
    lwz r12, 0x58(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_80145334_00002EB4
    lwz r3, lbl_8087F048
    addi r4, r26, 0xf6c
    lfs f0, lbl_80881964
    addis r3, r3, 0x4
    stfs f0, 0xd0(r1)
    stfs f0, -0x1cfc(r3)
    stfs f0, -0x1cf8(r3)
    stfs f0, -0x1cf4(r3)
    stfs f0, -0x1cf0(r3)
    lwz r5, 0x638(r26)
    lwz r0, 0x63c(r26)
    stfs f0, 0xd4(r1)
    subf r3, r5, r0
    subf r0, r0, r5
    or r0, r3, r0
    stfs f0, 0xd8(r1)
    lwz r3, lbl_8087F048
    srwi r5, r0, 31
    stfs f0, 0xdc(r1)
    lfs f1, 0xf78(r26)
    bl fn_8010743C
    li r27, 0x1
    b lbl_fn_80145334_00002EB4
lbl_fn_80145334_00002E34:
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    bne lbl_fn_80145334_00002E5C
    lwz r3, lbl_8087F0A8
    lwz r0, 0x314(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80145334_00002E5C
    lwz r0, 0x50(r26)
    cmpwi r0, 0x1
    beq lbl_fn_80145334_00002EB4
lbl_fn_80145334_00002E5C:
    lwz r3, lbl_8087F048
    lfs f0, lbl_80881964
    addis r3, r3, 0x4
    stfs f0, 0xc0(r1)
    stfs f0, -0x1cfc(r3)
    stfs f0, -0x1cf8(r3)
    stfs f0, -0x1cf4(r3)
    stfs f0, 0xc4(r1)
    stfs f0, 0xc8(r1)
    stfs f0, 0xcc(r1)
    stfs f0, -0x1cf0(r3)
lbl_fn_80145334_00002E88:
    lwz r6, 0x638(r26)
    addi r4, r26, 0xf6c
    lwz r0, 0x63c(r26)
    lwz r3, lbl_8087F048
    subf r5, r6, r0
    subf r0, r0, r6
    or r0, r5, r0
    lfs f1, 0xf78(r26)
    srwi r5, r0, 31
    bl fn_8010743C
    li r27, 0x1
lbl_fn_80145334_00002EB4:
    cmpwi r27, 0x0
    bne lbl_fn_80145334_00002ECC
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_80145334_00002ECC
    bl fn_80107574
lbl_fn_80145334_00002ECC:
    lwz r0, 0x12a8(r26)
    rlwimi r0, r27, 24, 7, 7
    stw r0, 0x12a8(r26)
    lwz r0, lbl_8087F430
    cmpwi r0, 0x0
    beq lbl_fn_80145334_00002F64
    lwz r3, 0x50(r26)
    bl fn_80219558
    cmpwi r3, 0x0
    bne lbl_fn_80145334_00002F64
    lwz r3, lbl_8087F430
    bl fn_80376150
    cmpwi r3, 0x0
    beq lbl_fn_80145334_00002F34
    lwz r0, 0x12a4(r26)
    extrwi. r0, r0, 1, 14
    bne lbl_fn_80145334_00002F64
    lwz r12, 0x0(r26)
    mr r3, r26
    lwz r12, 0x98(r12)
    mtctr r12
    bctrl
    lwz r0, 0x12a4(r26)
    oris r0, r0, 0x2
    stw r0, 0x12a4(r26)
    b lbl_fn_80145334_00002F64
lbl_fn_80145334_00002F34:
    lwz r0, 0x12a4(r26)
    extrwi. r0, r0, 1, 14
    beq lbl_fn_80145334_00002F64
    lwz r12, 0x0(r26)
    mr r3, r26
    li r4, 0x0
    lwz r12, 0x9c(r12)
    mtctr r12
    bctrl
    lwz r0, 0x12a4(r26)
    rlwinm r0, r0, 0, 15, 13
    stw r0, 0x12a4(r26)
lbl_fn_80145334_00002F64:
    lwz r3, 0x50(r26)
    subis r0, r3, 0xa
    cmplwi r0, 0xae77
    bne lbl_fn_80145334_00002FB0
    lwz r0, 0x12a4(r26)
    extrwi. r0, r0, 1, 26
    beq lbl_fn_80145334_00002F98
    lwz r12, 0x0(r26)
    mr r3, r26
    lwz r12, 0x98(r12)
    mtctr r12
    bctrl
    b lbl_fn_80145334_00002FB0
lbl_fn_80145334_00002F98:
    lwz r12, 0x0(r26)
    mr r3, r26
    li r4, 0x0
    lwz r12, 0x9c(r12)
    mtctr r12
    bctrl
lbl_fn_80145334_00002FB0:
    mr r3, r26
    bl fn_80154C08
    lwz r3, 0x48(r26)
    li r0, 0x1
    cmpwi r3, 0x1
    beq lbl_fn_80145334_00002FD4
    cmpwi r3, 0x4
    beq lbl_fn_80145334_00002FD4
    li r0, 0x0
lbl_fn_80145334_00002FD4:
    cmpwi r0, 0x0
    bne lbl_fn_80145334_00003058
    mr r3, r26
    bl fn_80164D24
    mr r3, r26
    bl fn_80176E30
    lwz r4, 0x12c4(r26)
    cmpwi r4, 0x0
    ble lbl_fn_80145334_00003018
    lwz r3, 0xd1c(r26)
    subi r4, r4, 0x1
    lwz r0, 0xd20(r26)
    stw r4, 0x12c4(r26)
    cmplw r3, r0
    beq lbl_fn_80145334_00003018
    li r0, 0x0
    stw r0, 0x12c4(r26)
lbl_fn_80145334_00003018:
    lwz r3, 0x12c8(r26)
    cmpwi r3, 0x0
    ble lbl_fn_80145334_0000302C
    subi r0, r3, 0x1
    stw r0, 0x12c8(r26)
lbl_fn_80145334_0000302C:
    lfs f8, 0x12cc(r26)
    lfs f7, lbl_8088196C
    fcmpo cr0, f8, f7
    ble lbl_fn_80145334_00003058
    lfs f0, lbl_80881AA8
    fsubs f0, f8, f0
    stfs f0, 0x12cc(r26)
    fcmpo cr0, f0, f7
    cror eq, lt, eq
    bne lbl_fn_80145334_00003058
    stfs f7, 0x12cc(r26)
lbl_fn_80145334_00003058:
    lwz r3, 0x1380(r26)
    cmpwi r3, 0x0
    ble lbl_fn_80145334_0000306C
    subi r0, r3, 0x1
    stw r0, 0x1380(r26)
lbl_fn_80145334_0000306C:
    lha r3, 0x1388(r26)
    cmpwi r3, 0x0
    ble lbl_fn_80145334_00003080
    subi r0, r3, 0x1
    sth r0, 0x1388(r26)
lbl_fn_80145334_00003080:
    lha r3, 0x138a(r26)
    cmpwi r3, 0x0
    ble lbl_fn_80145334_00003094
    subi r0, r3, 0x1
    sth r0, 0x138a(r26)
lbl_fn_80145334_00003094:
    lwz r3, 0x678(r26)
    cmpwi r3, 0x0
    beq lbl_fn_80145334_000032A0
    lwz r0, 0x12a8(r26)
    extrwi. r0, r0, 1, 10
    beq lbl_fn_80145334_00003114
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_80145334_00003114
    lwz r3, 0x67c(r26)
    cmpwi r3, 0x0
    beq lbl_fn_80145334_000030E8
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_80145334_00003114
lbl_fn_80145334_000030E8:
    lwz r0, 0x674(r26)
    cmpwi r0, 0x0
    bne lbl_fn_80145334_00003108
    mr r3, r26
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8014DEE4
lbl_fn_80145334_00003108:
    lwz r0, 0x12a8(r26)
    rlwinm r0, r0, 0, 11, 9
    stw r0, 0x12a8(r26)
lbl_fn_80145334_00003114:
    lwz r3, 0x678(r26)
    li r4, 0x0
    lwz r0, 0x28c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80145334_00003138
    lwz r0, 0x288(r3)
    cmpwi r0, 0x0
    bgt lbl_fn_80145334_00003138
    li r4, 0x1
lbl_fn_80145334_00003138:
    cmpwi r4, 0x0
    beq lbl_fn_80145334_000032A0
    cmpwi r3, 0x0
    beq lbl_fn_80145334_0000325C
    beq lbl_fn_80145334_00003160
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80145334_00003160:
    lwz r3, 0x67c(r26)
    li r0, 0x0
    stw r0, 0x678(r26)
    cmpwi r3, 0x0
    beq lbl_fn_80145334_00003194
    beq lbl_fn_80145334_0000318C
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80145334_0000318C:
    li r0, 0x0
    stw r0, 0x67c(r26)
lbl_fn_80145334_00003194:
    lwz r0, 0x674(r26)
    cmpwi r0, 0x0
    bne lbl_fn_80145334_000031B4
    mr r3, r26
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8014DEE4
lbl_fn_80145334_000031B4:
    lbz r0, lbl_8087EE74
    extsb. r0, r0
    bne lbl_fn_80145334_000031F4
    lis r3, lbl_807C6BB8@ha
    li r0, 0x0
    stwu r0, lbl_807C6BB8@l(r3)
    lis r4, fn_8003EFB0@ha
    li r27, 0x1
    lis r5, lbl_807C7B10@ha
    stw r0, 0x4(r3)
    addi r4, r4, fn_8003EFB0@l
    addi r5, r5, lbl_807C7B10@l
    stw r0, 0x8(r3)
    stw r27, 0xc(r3)
    bl __register_global_object
    stb r27, lbl_8087EE74
lbl_fn_80145334_000031F4:
    lis r29, lbl_807C6BB8@ha
    addi r29, r29, lbl_807C6BB8@l
    lwz r0, 0xc(r29)
    cmpwi r0, 0x0
    beq lbl_fn_80145334_0000325C
    li r28, 0x0
    li r27, 0x0
    b lbl_fn_80145334_00003250
lbl_fn_80145334_00003214:
    lwz r0, 0x0(r29)
    add r3, r0, r27
    lwzx r0, r27, r0
    cmpwi r0, -0x1
    beq lbl_fn_80145334_00003230
    cmpwi r0, 0x9
    bne lbl_fn_80145334_00003248
lbl_fn_80145334_00003230:
    lwz r12, 0x4(r3)
    mr r4, r26
    li r3, 0x9
    li r5, 0x0
    mtctr r12
    bctrl
lbl_fn_80145334_00003248:
    addi r28, r28, 0x1
    addi r27, r27, 0x8
lbl_fn_80145334_00003250:
    lwz r0, 0x4(r29)
    cmpw r28, r0
    blt lbl_fn_80145334_00003214
lbl_fn_80145334_0000325C:
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_80145334_00003274
    addi r5, r26, 0xb0
    li r4, 0x0
    bl fn_80106728
lbl_fn_80145334_00003274:
    lis r4, lbl_80737490@ha
    lfs f1, lbl_80881964
    addi r4, r4, lbl_80737490@l
    addi r3, r1, 0x8
    lwz r4, 0x1c(r4)
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_80145334_000032A0:
    addi r11, r1, 0x6d0
    psq_l f31, 0x738(r1), 0, 0
    lfd f31, 0x730(r1)
    psq_l f30, 0x728(r1), 0, 0
    lfd f30, 0x720(r1)
    psq_l f29, 0x718(r1), 0, 0
    lfd f29, 0x710(r1)
    psq_l f28, 0x708(r1), 0, 0
    lfd f28, 0x700(r1)
    psq_l f27, 0x6f8(r1), 0, 0
    lfd f27, 0x6f0(r1)
    psq_l f26, 0x6e8(r1), 0, 0
    lfd f26, 0x6e0(r1)
    psq_l f25, 0x6d8(r1), 0, 0
    lfd f25, 0x6d0(r1)
    bl _restgpr_26
    lwz r0, 0x744(r1)
    mtlr r0
    addi r1, r1, 0x740
    blr
}
