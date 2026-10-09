#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_21(void);
extern void _savegpr_21(void);
extern void fn_8010B180(void);
extern void fn_801789D8(void);
extern void fn_80373148(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F98D0(void);
extern void fn_805F9940(void);
extern void fn_805F9990(void);
extern void fn_8068A850(void);

/* External data declarations */

/* Small data declarations */
extern u32 lbl_8087F430;
extern u32 lbl_80881478;
extern u32 lbl_80881494;
extern u32 lbl_808814B8;
extern u32 lbl_808814F8;
extern u32 lbl_80881500;
extern u32 lbl_80881518;
extern u32 lbl_80881548;
extern u32 lbl_8088154C;
extern u32 lbl_80881550;

/* Function declarations */
void fn_800FFE68(void);

asm void fn_800FFE68(void)
{
    nofralloc
    stwu r1, -0x150(r1)
    mflr r0
    stw r0, 0x154(r1)
    addi r11, r1, 0xa0
    stfd f31, 0x140(r1)
    psq_st f31, 0x148(r1), 0, 0
    stfd f30, 0x130(r1)
    psq_st f30, 0x138(r1), 0, 0
    stfd f29, 0x120(r1)
    psq_st f29, 0x128(r1), 0, 0
    stfd f28, 0x110(r1)
    psq_st f28, 0x118(r1), 0, 0
    stfd f27, 0x100(r1)
    psq_st f27, 0x108(r1), 0, 0
    stfd f26, 0xf0(r1)
    psq_st f26, 0xf8(r1), 0, 0
    stfd f25, 0xe0(r1)
    psq_st f25, 0xe8(r1), 0, 0
    stfd f24, 0xd0(r1)
    psq_st f24, 0xd8(r1), 0, 0
    stfd f23, 0xc0(r1)
    psq_st f23, 0xc8(r1), 0, 0
    stfd f22, 0xb0(r1)
    psq_st f22, 0xb8(r1), 0, 0
    stfd f21, 0xa0(r1)
    psq_st f21, 0xa8(r1), 0, 0
    bl _savegpr_21
    fmr f25, f1
    cmpwi r4, 0x0
    mr r22, r3
    mr r23, r4
    mr r21, r5
    mr r24, r6
    mr r25, r7
    bne lbl_fn_800FFE68_00000094
    li r3, 0x0
    b lbl_fn_800FFE68_00000404
lbl_fn_800FFE68_00000094:
    lfs f0, lbl_80881500
    fmuls f1, f0, f2
    bl fn_8068A850
    frsp f28, f1
    lfs f27, lbl_808814B8
    mr r3, r23
    li r28, 0x0
    li r4, 0x0
    lis r5, 0x44
    bl fn_801789D8
    lfs f3, lbl_80881478
    mr r31, r3
    lfs f0, lbl_80881494
    addi r3, r1, 0x38
    lfs f1, 0x4(r21)
    li r4, 0x79
    stfs f3, 0x2c(r1)
    stfs f3, 0x30(r1)
    stfs f0, 0x34(r1)
    bl fn_805F8E70
    addi r4, r1, 0x2c
    addi r3, r1, 0x38
    mr r5, r4
    bl fn_805F93C0
    addi r3, r1, 0x20
    psq_l f1, 0x528(r23), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lwz r0, 0x12a8(r23)
    lfs f3, 0x5b0(r23)
    lfs f0, 0x24(r1)
    extrwi. r0, r0, 1, 22
    lfs f2, 0x530(r23)
    fadds f3, f0, f3
    stfs f2, 0x28(r1)
    stfs f3, 0x24(r1)
    beq lbl_fn_800FFE68_0000015C
    frsp f0, f2
    lfs f6, lbl_80881548
    lfs f5, lbl_8088154C
    lfs f7, lbl_80881478
    fsubs f3, f3, f6
    lfs f4, 0x20(r1)
    fsubs f0, f0, f5
    stfs f7, 0x8(r1)
    fsubs f4, f4, f7
    stfs f6, 0xc(r1)
    stfs f5, 0x10(r1)
    stfs f4, 0x20(r1)
    stfs f3, 0x24(r1)
    stfs f0, 0x28(r1)
lbl_fn_800FFE68_0000015C:
    lfs f22, lbl_80881478
    mr r30, r22
    lfs f23, lbl_80881518
    li r27, 0x0
    lfs f24, lbl_80881494
    lfs f31, lbl_80881500
    lfs f30, lbl_808814F8
    lfs f29, lbl_80881550
    b lbl_fn_800FFE68_000003F4
lbl_fn_800FFE68_00000180:
    cmpwi r24, 0x0
    bne lbl_fn_800FFE68_000001B0
    lwz r3, 0x4c(r30)
    li r0, 0x1
    lwz r3, 0x48(r3)
    cmpwi r3, 0x1
    beq lbl_fn_800FFE68_000001A8
    cmpwi r3, 0x4
    beq lbl_fn_800FFE68_000001A8
    li r0, 0x0
lbl_fn_800FFE68_000001A8:
    cmpwi r0, 0x0
    bne lbl_fn_800FFE68_000003EC
lbl_fn_800FFE68_000001B0:
    lwz r5, 0x4c(r30)
    mr r3, r22
    mr r4, r23
    bl fn_8010B180
    cmpwi r3, 0x0
    beq lbl_fn_800FFE68_000003EC
    cmpwi r25, 0x0
    beq lbl_fn_800FFE68_000001E0
    lwz r3, 0x4c(r30)
    lwz r0, 0x12a8(r3)
    extrwi. r0, r0, 1, 25
    bne lbl_fn_800FFE68_000003EC
lbl_fn_800FFE68_000001E0:
    lwz r3, lbl_8087F430
    bl fn_80373148
    cmpwi r3, 0x0
    beq lbl_fn_800FFE68_00000294
    lwz r3, lbl_8087F430
    bl fn_80373148
    lwz r21, 0x48(r3)
    lwz r3, lbl_8087F430
    bl fn_80373148
    lwz r26, 0x4c(r3)
    lwz r3, lbl_8087F430
    bl fn_80373148
    cmpwi r21, 0x2
    lwz r0, 0x50(r3)
    bne lbl_fn_800FFE68_0000024C
    cmpwi r26, 0x11
    bne lbl_fn_800FFE68_0000024C
    cmpwi r0, 0x2
    bne lbl_fn_800FFE68_0000024C
    lwz r3, 0x4c(r30)
    lfs f3, 0x52c(r23)
    lfs f0, 0x52c(r3)
    fsubs f0, f3, f0
    fabs f0, f0
    frsp f0, f0
    fcmpo cr0, f0, f29
    bgt lbl_fn_800FFE68_000003EC
lbl_fn_800FFE68_0000024C:
    cmpwi r21, 0x2
    bne lbl_fn_800FFE68_00000294
    cmpwi r26, 0xa
    bne lbl_fn_800FFE68_00000294
    cmpwi r0, 0x2
    bne lbl_fn_800FFE68_00000294
    lwz r4, 0x4c(r30)
    lwz r3, 0x60(r4)
    lwz r0, 0x24(r3)
    cmpwi r0, 0x27
    bne lbl_fn_800FFE68_00000294
    lfs f3, 0x52c(r23)
    lfs f0, 0x52c(r4)
    fsubs f0, f3, f0
    fabs f0, f0
    frsp f0, f0
    fcmpo cr0, f0, f30
    bgt lbl_fn_800FFE68_000003EC
lbl_fn_800FFE68_00000294:
    fmr f26, f25
    cmpwi r31, 0x0
    lwz r29, 0x4c(r30)
    beq lbl_fn_800FFE68_000002B8
    lwz r0, 0x12a4(r29)
    extrwi r0, r0, 1, 9
    cmplwi r0, 0x1
    beq lbl_fn_800FFE68_000002B8
    fmuls f26, f25, f31
lbl_fn_800FFE68_000002B8:
    li r26, 0x0
    li r21, 0x0
    b lbl_fn_800FFE68_000003E0
lbl_fn_800FFE68_000002C4:
    lwz r0, 0x62c(r29)
    add r4, r0, r21
    lwzx r0, r21, r0
    rlwinm r0, r0, 0, 28, 28
    cmpwi r0, 0x8
    beq lbl_fn_800FFE68_000003D8
    lfs f3, 0xc(r4)
    addi r3, r1, 0x14
    lfs f0, 0x28(r1)
    lfs f5, 0x8(r4)
    fsubs f6, f3, f0
    lfs f4, 0x24(r1)
    lfs f3, 0x4(r4)
    lfs f0, 0x20(r1)
    fsubs f4, f5, f4
    stfs f6, 0x1c(r1)
    fsubs f0, f3, f0
    stfs f4, 0x18(r1)
    stfs f0, 0x14(r1)
    bl fn_805F9940
    fcmpu cr0, f22, f1
    fmr f21, f1
    bne lbl_fn_800FFE68_0000032C
    fmr f27, f21
    lwz r28, 0x4c(r30)
    b lbl_fn_800FFE68_000003D8
lbl_fn_800FFE68_0000032C:
    lwz r0, 0x62c(r29)
    cmpwi r25, 0x0
    add r3, r0, r21
    lfs f0, 0x10(r3)
    fsubs f21, f1, f0
    beq lbl_fn_800FFE68_00000398
    lwz r4, 0x4c(r30)
    li r0, 0x1
    lwz r3, 0x48(r4)
    cmpwi r3, 0x1
    beq lbl_fn_800FFE68_00000364
    cmpwi r3, 0x4
    beq lbl_fn_800FFE68_00000364
    li r0, 0x0
lbl_fn_800FFE68_00000364:
    cmpwi r0, 0x0
    bne lbl_fn_800FFE68_00000398
    lwz r0, 0xd1c(r4)
    cmplw r0, r23
    bne lbl_fn_800FFE68_00000398
    lwz r3, 0x4c(r30)
    lwz r12, 0x0(r3)
    lwz r12, 0xe4(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_800FFE68_00000398
    fmuls f21, f21, f23
lbl_fn_800FFE68_00000398:
    addi r3, r1, 0x14
    mr r4, r3
    bl fn_805F98D0
    addi r3, r1, 0x14
    addi r4, r1, 0x2c
    bl fn_805F9990
    fcmpo cr0, f1, f28
    ble lbl_fn_800FFE68_000003D8
    fcmpo cr0, f21, f26
    bge lbl_fn_800FFE68_000003D8
    fsubs f0, f24, f1
    fmadds f21, f21, f0, f21
    fcmpo cr0, f21, f27
    bge lbl_fn_800FFE68_000003D8
    fmr f27, f21
    lwz r28, 0x4c(r30)
lbl_fn_800FFE68_000003D8:
    addi r26, r26, 0x1
    addi r21, r21, 0x14
lbl_fn_800FFE68_000003E0:
    lwz r0, 0x624(r29)
    cmplw r26, r0
    blt lbl_fn_800FFE68_000002C4
lbl_fn_800FFE68_000003EC:
    addi r30, r30, 0x4
    addi r27, r27, 0x1
lbl_fn_800FFE68_000003F4:
    lwz r0, 0x48(r22)
    cmplw r27, r0
    blt lbl_fn_800FFE68_00000180
    mr r3, r28
lbl_fn_800FFE68_00000404:
    addi r11, r1, 0xa0
    psq_l f31, 0x148(r1), 0, 0
    lfd f31, 0x140(r1)
    psq_l f30, 0x138(r1), 0, 0
    lfd f30, 0x130(r1)
    psq_l f29, 0x128(r1), 0, 0
    lfd f29, 0x120(r1)
    psq_l f28, 0x118(r1), 0, 0
    lfd f28, 0x110(r1)
    psq_l f27, 0x108(r1), 0, 0
    lfd f27, 0x100(r1)
    psq_l f26, 0xf8(r1), 0, 0
    lfd f26, 0xf0(r1)
    psq_l f25, 0xe8(r1), 0, 0
    lfd f25, 0xe0(r1)
    psq_l f24, 0xd8(r1), 0, 0
    lfd f24, 0xd0(r1)
    psq_l f23, 0xc8(r1), 0, 0
    lfd f23, 0xc0(r1)
    psq_l f22, 0xb8(r1), 0, 0
    lfd f22, 0xb0(r1)
    psq_l f21, 0xa8(r1), 0, 0
    lfd f21, 0xa0(r1)
    bl _restgpr_21
    lwz r0, 0x154(r1)
    mtlr r0
    addi r1, r1, 0x150
    blr
}
