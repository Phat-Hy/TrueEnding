#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_17(void);
extern void _savegpr_17(void);
extern void dtor_80084684(void);
extern void fn_8006969C(void);
extern void fn_800696B4(void);
extern void fn_80084320(void);
extern void fn_800C31F4(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800F8574(void);
extern void fn_80108C10(void);
extern void fn_8010B250(void);
extern void fn_8010CF28(void);
extern void fn_8010F4BC(void);
extern void fn_80119ECC(void);
extern void fn_8012B0B0(void);
extern void fn_8012B3A8(void);
extern void fn_80148B0C(void);
extern void fn_8015D8C0(void);
extern void fn_80178208(void);
extern void fn_8018D4AC(void);
extern void fn_8020BD3C(void);
extern void fn_8020C000(void);
extern void fn_80210AC4(void);
extern void fn_802114D8(void);
extern void fn_802114E0(void);
extern void fn_8021150C(void);
extern void fn_80219E6C(void);
extern void fn_80370A78(void);
extern void fn_80370AE4(void);
extern void fn_803BB3C0(void);
extern void fn_804439FC(void);
extern void fn_80473E74(void);
extern void fn_80473E8C(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9940(void);
extern void fn_8068AEA4(void);
extern void fn_806958E0(void);
extern void fn_806959D8(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_807545F0[];
extern u8 lbl_80754608[];
extern u8 lbl_80754650[];
extern u8 lbl_807546C0[];
extern u8 lbl_80754760[];
extern u8 lbl_8078FBB0[];

/* Small data declarations */
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F430;
extern u32 lbl_8087F4F0;
extern u32 lbl_8087F8A0;
extern u32 lbl_80886A80;
extern u32 lbl_80886A84;
extern u32 lbl_80886A8C;
extern u32 lbl_80886A90;
extern u32 lbl_80886A94;
extern u32 lbl_80886A98;
extern u32 lbl_80886A9C;
extern u32 lbl_80886AA0;
extern u32 lbl_80886AA4;
extern u32 lbl_80886AA8;
extern u32 lbl_80886AAC;
extern u32 lbl_80886AB0;
extern u32 lbl_80886AB4;
extern u32 lbl_80886AB8;
extern u32 lbl_80886ABC;
extern u32 lbl_80886AC0;
extern u32 lbl_80886AC4;
extern u32 lbl_80886AC8;
extern u32 lbl_80886ACC;
extern u32 lbl_80886AD0;
extern u32 lbl_80886AD4;
extern u32 lbl_80886AD8;
extern u32 lbl_80886ADC;
extern u32 lbl_80886AE0;

/* Function declarations */
void fn_80441E54(void);
void fn_80441E88(void);
void fn_80441E8C(void);
void fn_80441F24(void);
void fn_80442A9C(void);
void fn_80442B48(void);
void fn_80442B50(void);
void fn_80442E64(void);
void fn_80442EA4(void);
void fn_80442EAC(void);
void fn_80442ECC(void);
void fn_80442F10(void);
void fn_80442F68(void);
void fn_80442FF4(void);

asm void fn_80441E54(void)
{
    nofralloc
    psq_l f1, 0x0(r4), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_st f1, 0x2c(r3), 0, 0
    psq_st f2, 0x34(r3), 0, 0
    psq_st f3, 0x3c(r3), 0, 0
    psq_st f4, 0x44(r3), 0, 0
    psq_st f5, 0x4c(r3), 0, 0
    psq_st f6, 0x54(r3), 0, 0
    blr
}

asm void fn_80441E88(void)
{
    nofralloc
    blr
}

asm void fn_80441E8C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lfs f0, 0x8(r4)
    li r7, 0x0
    stw r0, 0x24(r1)
    addi r8, r1, 0x8
    lfs f3, 0x4(r4)
    lfs f4, 0x80(r3)
    lwz r0, 0x4(r3)
    fmuls f2, f0, f4
    lfs f0, 0x0(r4)
    fmuls f5, f3, f4
    stw r7, 0x84(r3)
    fmuls f6, f0, f4
    lfs f4, lbl_80886A80
    stw r5, 0x88(r3)
    rlwinm r0, r0, 0, 11, 9
    lfs f3, lbl_80886A90
    stw r7, 0x8c(r3)
    lfs f0, lbl_80886A94
    lwz r4, 0x48(r5)
    stfs f6, 0x8(r1)
    stfs f5, 0xc(r1)
    psq_l f1, 0x0(r8), 0, 0
    stw r4, 0x90(r3)
    stw r6, 0xa0(r3)
    stfs f2, 0x10(r1)
    psq_st f1, 0x20(r3), 0, 0
    stfs f2, 0x28(r3)
    stfs f4, 0x78(r3)
    stfs f3, 0xb4(r3)
    stfs f0, 0xb8(r3)
    stw r0, 0x4(r3)
    bl fn_8010F4BC
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80441F24(void)
{
    nofralloc
    stwu r1, -0x490(r1)
    mflr r0
    stw r0, 0x494(r1)
    addi r11, r1, 0x3d0
    stfd f31, 0x480(r1)
    psq_st f31, 0x488(r1), 0, 0
    stfd f30, 0x470(r1)
    psq_st f30, 0x478(r1), 0, 0
    stfd f29, 0x460(r1)
    psq_st f29, 0x468(r1), 0, 0
    stfd f28, 0x450(r1)
    psq_st f28, 0x458(r1), 0, 0
    stfd f27, 0x440(r1)
    psq_st f27, 0x448(r1), 0, 0
    stfd f26, 0x430(r1)
    psq_st f26, 0x438(r1), 0, 0
    stfd f25, 0x420(r1)
    psq_st f25, 0x428(r1), 0, 0
    stfd f24, 0x410(r1)
    psq_st f24, 0x418(r1), 0, 0
    stfd f23, 0x400(r1)
    psq_st f23, 0x408(r1), 0, 0
    stfd f22, 0x3f0(r1)
    psq_st f22, 0x3f8(r1), 0, 0
    stfd f21, 0x3e0(r1)
    psq_st f21, 0x3e8(r1), 0, 0
    stfd f20, 0x3d0(r1)
    psq_st f20, 0x3d8(r1), 0, 0
    bl _savegpr_17
    lwz r0, 0x4(r3)
    mr r19, r3
    mr r20, r4
    mr r21, r5
    rlwinm r0, r0, 0, 23, 23
    cmplwi r0, 0x100
    bne lbl_fn_80441F24_00000BCC
    lwz r8, 0x38(r4)
    li r6, 0x0
    li r0, 0x0
    li r5, 0x0
    rlwinm r7, r8, 0, 29, 29
    cmplwi r7, 0x4
    beq lbl_fn_80441F24_0000018C
    clrlwi r7, r8, 31
    cmplwi r7, 0x1
    beq lbl_fn_80441F24_0000018C
    li r5, 0x1
lbl_fn_80441F24_0000018C:
    cmpwi r5, 0x0
    beq lbl_fn_80441F24_000001A8
    lwz r5, 0x7e0(r4)
    rlwinm r5, r5, 0, 26, 26
    cmplwi r5, 0x20
    beq lbl_fn_80441F24_000001A8
    li r0, 0x1
lbl_fn_80441F24_000001A8:
    cmpwi r0, 0x0
    beq lbl_fn_80441F24_000001DC
    lwz r0, 0x55c(r4)
    li r5, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_80441F24_000001D0
    lwz r0, 0x560(r4)
    cmpwi r0, 0x1c
    bne lbl_fn_80441F24_000001D0
    li r5, 0x1
lbl_fn_80441F24_000001D0:
    cmpwi r5, 0x0
    bne lbl_fn_80441F24_000001DC
    li r6, 0x1
lbl_fn_80441F24_000001DC:
    cmpwi r6, 0x0
    beq lbl_fn_80441F24_00000BCC
    lwz r0, 0x12a4(r4)
    extrwi. r0, r0, 1, 26
    bne lbl_fn_80441F24_000001FC
    lwz r0, 0x48(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80441F24_00000BCC
lbl_fn_80441F24_000001FC:
    lfs f2, 0x28(r3)
    addi r18, r1, 0x100
    psq_l f1, 0x20(r3), 0, 0
    mr r3, r18
    psq_st f1, 0x0(r18), 0, 0
    mr r4, r18
    lfs f0, lbl_80886A80
    stfs f2, 0x108(r1)
    stfs f0, 0x104(r1)
    bl fn_805F98D0
    lwz r12, 0x0(r20)
    mr r3, r20
    mr r6, r21
    mr r7, r18
    lwz r12, 0x4c(r12)
    lwz r4, 0x88(r19)
    lwz r5, 0x68(r19)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    mr r18, r3
    beq lbl_fn_80441F24_00000BCC
    mr r3, r20
    li r4, 0x0
    bl fn_80148B0C
    cmpwi r3, 0x0
    beq lbl_fn_80441F24_0000028C
    mr r3, r20
    li r4, 0x0
    bl fn_80148B0C
    psq_l f1, 0x4(r3), 0, 0
    addi r4, r1, 0xf4
    lfs f2, 0xc(r3)
    stfs f2, 0xfc(r1)
    psq_st f1, 0x0(r4), 0, 0
    b lbl_fn_80441F24_000002A0
lbl_fn_80441F24_0000028C:
    psq_l f1, 0x528(r20), 0, 0
    addi r3, r1, 0xf4
    lfs f2, 0x530(r20)
    stfs f2, 0xfc(r1)
    psq_st f1, 0x0(r3), 0, 0
lbl_fn_80441F24_000002A0:
    lfs f10, lbl_80886A80
    li r11, 0x0
    lfs f9, lbl_80886AA8
    li r10, -0x1
    lfs f8, 0xf4(r1)
    li r0, 0x1
    lfs f7, 0xf8(r1)
    lis r8, 0x8
    lfs f0, 0xfc(r1)
    fadds f8, f8, f10
    fadds f7, f7, f9
    lwz r3, 0x12c(r1)
    fadds f0, f0, f10
    stfs f8, 0xf4(r1)
    clrlwi r6, r3, 4
    stfs f7, 0xf8(r1)
    lwz r3, lbl_8087F048
    mr r7, r20
    stfs f0, 0xfc(r1)
    addi r4, r1, 0x110
    addi r5, r1, 0xf4
    addi r8, r8, 0x8
    stw r11, 0x114(r1)
    li r9, 0x0
    stw r11, 0x118(r1)
    stw r11, 0x11c(r1)
    stw r11, 0x120(r1)
    stw r10, 0x124(r1)
    stw r6, 0x12c(r1)
    stw r10, 0x128(r1)
    stw r0, 0x110(r1)
    stfs f10, 0xac(r1)
    lwz r6, 0x88(r19)
    stfs f9, 0xb0(r1)
    stfs f10, 0xb4(r1)
    bl fn_80108C10
    cmpwi r18, 0x2
    bne lbl_fn_80441F24_00000494
    lwz r0, 0x48(r20)
    li r4, 0x2f
    cmpwi r0, 0x0
    bne lbl_fn_80441F24_0000034C
    li r4, 0x2e
lbl_fn_80441F24_0000034C:
    lwz r3, lbl_8087F048
    mr r5, r20
    lwz r6, 0x88(r19)
    bl fn_8010CF28
    lis r5, lbl_80754608@ha
    li r3, 0x40
    addi r5, r5, lbl_80754608@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_80441F24_000003BC
    lfs f8, 0x28(r19)
    mr r4, r20
    lfs f7, 0x24(r19)
    mr r6, r19
    lfs f0, 0x20(r19)
    fneg f8, f8
    fneg f7, f7
    addi r5, r1, 0xa0
    fneg f0, f0
    stfs f8, 0xa8(r1)
    stfs f0, 0xa0(r1)
    stfs f7, 0xa4(r1)
    bl fn_8018D4AC
    mr r4, r3
lbl_fn_80441F24_000003BC:
    mr r3, r20
    bl fn_80178208
    lfs f8, lbl_80886A80
    addi r3, r1, 0x2c0
    lfs f7, lbl_80886AAC
    li r4, 0x79
    stfs f8, 0x20(r19)
    lfs f0, lbl_80886A9C
    stfs f7, 0x24(r19)
    stfs f8, 0x28(r19)
    stfs f8, 0x7c(r1)
    stfs f8, 0x80(r1)
    stfs f0, 0x84(r1)
    lfs f1, 0x538(r20)
    bl fn_805F8E70
    addi r4, r1, 0x7c
    addi r3, r1, 0x2c0
    mr r5, r4
    bl fn_805F93C0
    lfs f8, lbl_80886AB0
    addi r4, r1, 0x94
    lfs f7, 0x80(r1)
    mr r3, r19
    lfs f0, 0x7c(r1)
    fmuls f10, f7, f8
    lfs f7, 0x52c(r20)
    fmuls f11, f0, f8
    lfs f0, 0x528(r20)
    lfs f9, 0x84(r1)
    fadds f12, f7, f10
    fadds f13, f0, f11
    lfs f7, 0x530(r20)
    stfs f12, 0x98(r1)
    fmuls f9, f9, f8
    lfs f0, lbl_80886A80
    stfs f13, 0x94(r1)
    fadds f2, f7, f9
    lfs f7, lbl_80886AB4
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x8(r19), 0, 0
    lfs f8, 0xc(r19)
    stfs f11, 0x88(r1)
    fadds f7, f8, f7
    stfs f10, 0x8c(r1)
    stfs f9, 0x90(r1)
    stfs f2, 0x9c(r1)
    stfs f2, 0x10(r19)
    stfs f7, 0xc(r19)
    stfs f0, 0xb4(r19)
    bl fn_8010F4BC
    lwz r0, 0x4(r19)
    oris r0, r0, 0x20
    stw r0, 0x4(r19)
    b lbl_fn_80441F24_00000BC4
lbl_fn_80441F24_00000494:
    cmpwi r18, 0x4
    bne lbl_fn_80441F24_00000A34
    lwz r3, lbl_8087F8A0
    lwz r23, 0x88(r19)
    cmpwi r3, 0x0
    beq lbl_fn_80441F24_000004BC
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80441F24_000004BC
    mr r23, r0
lbl_fn_80441F24_000004BC:
    cmpwi r23, 0x0
    beq lbl_fn_80441F24_00000BC4
    lfs f2, 0x28(r19)
    addi r31, r1, 0xe8
    psq_l f1, 0x20(r19), 0, 0
    mr r3, r31
    psq_st f1, 0x0(r31), 0, 0
    mr r4, r31
    lfs f0, lbl_80886A80
    stfs f2, 0xf0(r1)
    stfs f0, 0xec(r1)
    bl fn_805F98D0
    lfs f1, lbl_80886AB8
    addi r3, r1, 0x350
    li r4, 0x79
    bl fn_805F8E70
    mr r4, r31
    mr r5, r31
    addi r3, r1, 0x350
    bl fn_805F93C0
    lfs f0, lbl_80886ABC
    mr r3, r31
    stfs f0, 0xec(r1)
    mr r4, r31
    bl fn_805F98D0
    lfs f26, lbl_80886A80
    lis r3, lbl_807545F0@ha
    lfs f10, lbl_80886AA4
    addi r30, r1, 0x70
    lfs f9, lbl_80886AC0
    addi r29, r1, 0x40
    lfs f8, lbl_80886A8C
    addi r24, r1, 0x130
    lfs f7, lbl_80886A90
    addi r28, r1, 0x4c
    lfs f0, lbl_80886AC4
    addi r27, r1, 0x2f0
    stfs f10, 0xa8(r19)
    addi r25, r1, 0x190
    lfs f25, lbl_80886AC8
    addi r26, r1, 0x1f0
    stfs f26, 0xb8(r19)
    li r22, 0x0
    lfs f27, lbl_80886A94
    lis r18, 0x4330
    stfs f9, 0xa4(r19)
    lfs f28, lbl_80886A9C
    stfs f8, 0xb0(r19)
    lfd f29, lbl_807545F0@l(r3)
    stfs f7, 0xb4(r19)
    lfs f30, lbl_80886ACC
    stfs f0, 0xac(r19)
    lfs f31, lbl_80886AD0
    lfs f24, lbl_80886AA0
lbl_fn_80441F24_00000594:
    srwi r3, r22, 31
    clrlwi r0, r22, 31
    xor r0, r0, r3
    subf. r0, r3, r0
    bne lbl_fn_80441F24_000005B0
    stw r23, 0xa0(r19)
    b lbl_fn_80441F24_000005B8
lbl_fn_80441F24_000005B0:
    lwz r0, 0x88(r19)
    stw r0, 0xa0(r19)
lbl_fn_80441F24_000005B8:
    xoris r0, r22, 0x8000
    stw r0, 0x384(r1)
    addi r3, r1, 0x320
    li r4, 0x7a
    stw r18, 0x380(r1)
    lfd f0, 0x380(r1)
    stfs f27, 0xdc(r1)
    fsubs f0, f0, f29
    stfs f26, 0xe0(r1)
    fmuls f0, f25, f0
    stfs f28, 0xe4(r1)
    fmuls f1, f30, f0
    bl fn_805F8E70
    addi r4, r1, 0xdc
    addi r3, r1, 0x320
    mr r5, r4
    bl fn_805F93C0
    lfs f2, 0xf0(r1)
    psq_l f1, 0x0(r31), 0, 0
    fabs f0, f2
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x78(r1)
    frsp f0, f0
    fcmpo cr0, f0, f31
    bge lbl_fn_80441F24_0000063C
    lfs f0, 0x70(r1)
    fcmpo cr0, f0, f26
    ble lbl_fn_80441F24_00000630
    lfs f0, lbl_80886AD4
    b lbl_fn_80441F24_00000634
lbl_fn_80441F24_00000630:
    lfs f0, lbl_80886AD8
lbl_fn_80441F24_00000634:
    stfs f0, 0x50(r1)
    b lbl_fn_80441F24_00000650
lbl_fn_80441F24_0000063C:
    frsp f2, f2
    lfs f1, 0x70(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x50(r1)
lbl_fn_80441F24_00000650:
    lfs f0, 0x50(r1)
    addi r3, r1, 0x250
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f20, 0x258(r1)
    mr r4, r29
    lfs f21, 0x254(r1)
    mr r5, r29
    lfs f22, 0x250(r1)
    addi r3, r1, 0x280
    lfs f23, 0x268(r1)
    lfs f13, 0x264(r1)
    lfs f12, 0x260(r1)
    lfs f11, 0x278(r1)
    lfs f10, 0x274(r1)
    lfs f9, 0x270(r1)
    lfs f8, 0x27c(r1)
    lfs f7, 0x26c(r1)
    lfs f0, 0x25c(r1)
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x78(r1)
    stfs f26, 0x2b0(r1)
    stfs f26, 0x2b4(r1)
    stfs f26, 0x2b8(r1)
    stfs f28, 0x2bc(r1)
    stfs f22, 0x10(r1)
    stfs f21, 0x14(r1)
    stfs f20, 0x18(r1)
    stfs f22, 0x280(r1)
    stfs f21, 0x284(r1)
    stfs f20, 0x288(r1)
    stfs f12, 0x1c(r1)
    stfs f13, 0x20(r1)
    stfs f23, 0x24(r1)
    stfs f12, 0x290(r1)
    stfs f13, 0x294(r1)
    stfs f23, 0x298(r1)
    stfs f9, 0x28(r1)
    stfs f10, 0x2c(r1)
    stfs f11, 0x30(r1)
    stfs f9, 0x2a0(r1)
    stfs f10, 0x2a4(r1)
    stfs f11, 0x2a8(r1)
    stfs f0, 0x34(r1)
    stfs f7, 0x38(r1)
    stfs f8, 0x3c(r1)
    stfs f0, 0x28c(r1)
    stfs f7, 0x29c(r1)
    stfs f8, 0x2ac(r1)
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x48(r1)
    bl fn_805F9750
    lfs f2, 0x48(r1)
    fabs f0, f2
    frsp f0, f0
    fcmpo cr0, f0, f31
    bge lbl_fn_80441F24_0000075C
    lfs f0, 0x44(r1)
    fcmpo cr0, f0, f26
    ble lbl_fn_80441F24_0000074C
    lfs f0, lbl_80886AD4
    b lbl_fn_80441F24_00000750
lbl_fn_80441F24_0000074C:
    lfs f0, lbl_80886AD8
lbl_fn_80441F24_00000750:
    fneg f0, f0
    stfs f0, 0x4c(r1)
    b lbl_fn_80441F24_00000770
lbl_fn_80441F24_0000075C:
    lfs f1, 0x44(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x4c(r1)
lbl_fn_80441F24_00000770:
    fmr f2, f26
    psq_l f1, 0x0(r28), 0, 0
    stfs f26, 0x54(r1)
    frsp f0, f2
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x78(r1)
    fcmpu cr0, f26, f0
    stfs f26, 0x31c(r1)
    stfs f26, 0x314(r1)
    stfs f26, 0x310(r1)
    stfs f26, 0x30c(r1)
    stfs f26, 0x308(r1)
    stfs f26, 0x300(r1)
    stfs f26, 0x2fc(r1)
    stfs f26, 0x2f8(r1)
    stfs f26, 0x2f4(r1)
    stfs f28, 0x318(r1)
    stfs f28, 0x304(r1)
    stfs f28, 0x2f0(r1)
    beq lbl_fn_80441F24_00000810
    fmr f1, f0
    addi r3, r1, 0x160
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r27
    addi r4, r1, 0x160
    addi r5, r1, 0x130
    bl fn_805F89F0
    psq_l f1, 0x0(r24), 0, 0
    psq_l f2, 0x8(r24), 0, 0
    psq_l f3, 0x10(r24), 0, 0
    psq_l f4, 0x18(r24), 0, 0
    psq_l f5, 0x20(r24), 0, 0
    psq_l f6, 0x28(r24), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    psq_st f2, 0x8(r27), 0, 0
    psq_st f3, 0x10(r27), 0, 0
    psq_st f4, 0x18(r27), 0, 0
    psq_st f5, 0x20(r27), 0, 0
    psq_st f6, 0x28(r27), 0, 0
lbl_fn_80441F24_00000810:
    lfs f1, 0x74(r1)
    fcmpu cr0, f26, f1
    beq lbl_fn_80441F24_00000868
    addi r3, r1, 0x1c0
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r27
    addi r4, r1, 0x1c0
    addi r5, r1, 0x190
    bl fn_805F89F0
    psq_l f1, 0x0(r25), 0, 0
    psq_l f2, 0x8(r25), 0, 0
    psq_l f3, 0x10(r25), 0, 0
    psq_l f4, 0x18(r25), 0, 0
    psq_l f5, 0x20(r25), 0, 0
    psq_l f6, 0x28(r25), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    psq_st f2, 0x8(r27), 0, 0
    psq_st f3, 0x10(r27), 0, 0
    psq_st f4, 0x18(r27), 0, 0
    psq_st f5, 0x20(r27), 0, 0
    psq_st f6, 0x28(r27), 0, 0
lbl_fn_80441F24_00000868:
    lfs f1, 0x70(r1)
    fcmpu cr0, f26, f1
    beq lbl_fn_80441F24_000008C0
    addi r3, r1, 0x220
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r27
    addi r4, r1, 0x220
    addi r5, r1, 0x1f0
    bl fn_805F89F0
    psq_l f1, 0x0(r26), 0, 0
    psq_l f2, 0x8(r26), 0, 0
    psq_l f3, 0x10(r26), 0, 0
    psq_l f4, 0x18(r26), 0, 0
    psq_l f5, 0x20(r26), 0, 0
    psq_l f6, 0x28(r26), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    psq_st f2, 0x8(r27), 0, 0
    psq_st f3, 0x10(r27), 0, 0
    psq_st f4, 0x18(r27), 0, 0
    psq_st f5, 0x20(r27), 0, 0
    psq_st f6, 0x28(r27), 0, 0
lbl_fn_80441F24_000008C0:
    addi r4, r1, 0xdc
    addi r3, r1, 0x2f0
    mr r5, r4
    bl fn_805F93C0
    lfs f8, 0xf0(r1)
    li r3, 0x5ed
    lfs f7, 0xec(r1)
    fmuls f9, f8, f27
    lfs f0, 0xe8(r1)
    fmuls f10, f7, f27
    lfs f8, 0x8(r21)
    fmuls f11, f0, f27
    lfs f7, 0x4(r21)
    lfs f0, 0x0(r21)
    fadds f8, f8, f9
    fadds f7, f7, f10
    stfs f11, 0x64(r1)
    fadds f0, f0, f11
    stfs f7, 0xd4(r1)
    stfs f0, 0xd0(r1)
    stfs f8, 0xd8(r1)
    lwz r4, 0x68(r19)
    stfs f10, 0x68(r1)
    lfs f0, 0x74(r4)
    stfs f9, 0x6c(r1)
    fcmpo cr0, f0, f24
    ble lbl_fn_80441F24_00000934
    li r3, 0x5ed
    b lbl_fn_80441F24_0000096C
lbl_fn_80441F24_00000934:
    lfs f0, 0x78(r4)
    fcmpo cr0, f0, f24
    ble lbl_fn_80441F24_00000948
    li r3, 0x5ee
    b lbl_fn_80441F24_0000096C
lbl_fn_80441F24_00000948:
    lfs f0, 0x80(r4)
    fcmpo cr0, f0, f24
    ble lbl_fn_80441F24_0000095C
    li r3, 0x5ef
    b lbl_fn_80441F24_0000096C
lbl_fn_80441F24_0000095C:
    lfs f0, 0x84(r4)
    fcmpo cr0, f0, f24
    ble lbl_fn_80441F24_0000096C
    li r3, 0x5f0
lbl_fn_80441F24_0000096C:
    lwz r17, lbl_8087F048
    bl fn_80219E6C
    lfs f1, lbl_80886A80
    mr r5, r3
    lfs f2, lbl_80886A9C
    mr r3, r17
    mr r4, r20
    addi r6, r1, 0xd0
    addi r7, r1, 0xdc
    addi r8, r19, 0xa0
    li r9, 0x0
    li r10, 0x0
    bl fn_800F8574
    addi r22, r22, 0x1
    cmpwi r22, 0x2
    blt lbl_fn_80441F24_00000594
    lwz r0, 0x12a4(r20)
    extrwi r0, r0, 1, 9
    cmplwi r0, 0x1
    bne lbl_fn_80441F24_000009E8
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80441F24_000009E8
    li r4, 0xcc
    bl fn_80370A78
    cmpwi r3, 0x0
    bne lbl_fn_80441F24_000009E8
    lwz r3, lbl_8087F430
    li r4, 0xcc
    li r5, 0x1
    bl fn_80370AE4
lbl_fn_80441F24_000009E8:
    lis r4, lbl_80754608@ha
    lfs f1, lbl_80886A9C
    addi r4, r4, lbl_80754608@l
    addi r3, r1, 0xc
    addi r4, r4, 0x1
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    lwz r12, 0x0(r19)
    mr r3, r19
    li r4, 0x1
    li r5, 0x0
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    b lbl_fn_80441F24_00000BC4
lbl_fn_80441F24_00000A34:
    lwz r0, 0x48(r20)
    li r4, 0x8
    cmpwi r0, 0x0
    bne lbl_fn_80441F24_00000A48
    li r4, 0x7
lbl_fn_80441F24_00000A48:
    lwz r3, lbl_8087F048
    mr r5, r20
    lwz r6, 0x88(r19)
    bl fn_8010CF28
    psq_l f1, 0x20(r19), 0, 0
    addi r3, r1, 0xc4
    lfs f2, 0x28(r19)
    mr r4, r3
    stfs f2, 0xcc(r1)
    psq_st f1, 0x0(r3), 0, 0
    bl fn_805F98D0
    lfs f7, 0xc4(r1)
    cmpwi r18, 0x3
    lfs f8, lbl_80886A84
    lfs f0, 0xcc(r1)
    fmuls f7, f7, f8
    fmuls f0, f0, f8
    stfs f7, 0xc4(r1)
    stfs f0, 0xcc(r1)
    bne lbl_fn_80441F24_00000AA0
    lfs f0, lbl_80886ADC
    b lbl_fn_80441F24_00000AA4
lbl_fn_80441F24_00000AA0:
    lfs f0, lbl_80886A9C
lbl_fn_80441F24_00000AA4:
    addi r3, r1, 0xc4
    stfs f0, 0xc8(r1)
    mr r4, r3
    bl fn_805F98D0
    addi r3, r19, 0x20
    bl fn_805F9940
    lfs f8, 0xc4(r1)
    addi r4, r1, 0xc4
    lfs f0, 0xc8(r1)
    mr r3, r19
    fmuls f9, f8, f1
    lfs f7, 0xcc(r1)
    fmuls f8, f0, f1
    lfs f0, lbl_80886A80
    fmuls f2, f7, f1
    stfs f9, 0xc4(r1)
    stfs f8, 0xc8(r1)
    stfs f2, 0xcc(r1)
    psq_l f1, 0x0(r4), 0, 0
    lwz r0, 0x4(r19)
    psq_st f1, 0x20(r19), 0, 0
    ori r0, r0, 0x200
    stfs f2, 0x28(r19)
    psq_l f1, 0x0(r21), 0, 0
    lfs f2, 0x8(r21)
    stfs f2, 0x10(r19)
    psq_st f1, 0x8(r19), 0, 0
    stw r0, 0x4(r19)
    stfs f0, 0xb4(r19)
    bl fn_8010F4BC
    cmpwi r18, 0x1
    bne lbl_fn_80441F24_00000BC4
    lwz r3, 0x68(r19)
    li r5, 0x0
    lwz r4, 0x8f0(r20)
    lwz r0, 0x3c(r3)
    lwz r3, lbl_8087F048
    subf r4, r4, r0
    bl fn_8010B250
    lfs f8, 0x108(r1)
    mr r3, r20
    lfs f0, 0x104(r1)
    addi r4, r1, 0xb8
    lfs f7, 0x100(r1)
    fmuls f8, f8, f1
    fmuls f9, f0, f1
    lfs f0, lbl_80886A94
    fmuls f7, f7, f1
    stfs f8, 0x60(r1)
    fmuls f8, f8, f0
    fmuls f10, f9, f0
    fmuls f0, f7, f0
    stfs f8, 0xc0(r1)
    lfs f1, lbl_80886A98
    stfs f0, 0xb8(r1)
    stfs f10, 0xbc(r1)
    stfs f7, 0x58(r1)
    lwz r5, 0x88(r19)
    stfs f9, 0x5c(r1)
    bl fn_8015D8C0
    lis r4, lbl_80754608@ha
    lfs f1, lbl_80886AE0
    addi r4, r4, lbl_80754608@l
    mr r5, r21
    addi r3, r1, 0x8
    li r6, 0x0
    addi r4, r4, 0xe
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_80441F24_00000BC4:
    li r3, 0x1
    b lbl_fn_80441F24_00000BD0
lbl_fn_80441F24_00000BCC:
    li r3, 0x0
lbl_fn_80441F24_00000BD0:
    addi r11, r1, 0x3d0
    psq_l f31, 0x488(r1), 0, 0
    lfd f31, 0x480(r1)
    psq_l f30, 0x478(r1), 0, 0
    lfd f30, 0x470(r1)
    psq_l f29, 0x468(r1), 0, 0
    lfd f29, 0x460(r1)
    psq_l f28, 0x458(r1), 0, 0
    lfd f28, 0x450(r1)
    psq_l f27, 0x448(r1), 0, 0
    lfd f27, 0x440(r1)
    psq_l f26, 0x438(r1), 0, 0
    lfd f26, 0x430(r1)
    psq_l f25, 0x428(r1), 0, 0
    lfd f25, 0x420(r1)
    psq_l f24, 0x418(r1), 0, 0
    lfd f24, 0x410(r1)
    psq_l f23, 0x408(r1), 0, 0
    lfd f23, 0x400(r1)
    psq_l f22, 0x3f8(r1), 0, 0
    lfd f22, 0x3f0(r1)
    psq_l f21, 0x3e8(r1), 0, 0
    lfd f21, 0x3e0(r1)
    psq_l f20, 0x3d8(r1), 0, 0
    lfd f20, 0x3d0(r1)
    bl _restgpr_17
    lwz r0, 0x494(r1)
    mtlr r0
    addi r1, r1, 0x490
    blr
}

asm void fn_80442A9C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r6
    stw r30, 0x28(r1)
    mr r30, r5
    li r5, 0x2
    stw r29, 0x24(r1)
    mr r29, r4
    stw r28, 0x20(r1)
    mr r28, r3
    lwz r4, 0x88(r3)
    addi r3, r1, 0x8
    lwz r12, 0x0(r4)
    lwz r12, 0x64(r12)
    mtctr r12
    bctrl
    lfs f1, lbl_80886AA0
    mr r4, r29
    lfs f0, 0x80(r28)
    mr r6, r30
    lwz r0, 0x88(r28)
    mr r7, r31
    fmuls f0, f1, f0
    stw r0, 0xa0(r28)
    lwz r5, 0x68(r28)
    addi r8, r28, 0xa0
    stfs f0, 0xa8(r28)
    li r9, 0x0
    lwz r3, lbl_8087F048
    li r10, 0x0
    lfs f1, lbl_80886A80
    lfs f2, lbl_80886A9C
    bl fn_800F8574
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80442B48(void)
{
    nofralloc
    lwz r3, 0xa0(r3)
    blr
}

asm void fn_80442B50(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r5, 0x8(r3)
    stw r4, 0xc(r3)
    stw r0, 0x10(r3)
    stw r0, 0x14(r3)
    stw r0, 0x18(r3)
    stw r0, 0x1c(r3)
    lwz r3, 0x0(r4)
    cmplw r3, r5
    bne lbl_fn_80442B50_00000D4C
    li r30, 0x0
    b lbl_fn_80442B50_00000D6C
lbl_fn_80442B50_00000D4C:
    slwi r0, r5, 24
    li r30, 0x2
    rlwimi r0, r5, 8, 24, 31
    rlwimi r0, r5, 24, 16, 23
    rlwimi r0, r5, 8, 8, 15
    cmplw r3, r0
    bne lbl_fn_80442B50_00000D6C
    li r30, 0x1
lbl_fn_80442B50_00000D6C:
    bl fn_800696B4
    cmpwi r3, 0x0
    beq lbl_fn_80442B50_00000D80
    cmpwi r30, 0x0
    beq lbl_fn_80442B50_00000D94
lbl_fn_80442B50_00000D80:
    bl fn_8006969C
    cmpwi r3, 0x0
    beq lbl_fn_80442B50_00000E18
    cmpwi r30, 0x1
    bne lbl_fn_80442B50_00000E18
lbl_fn_80442B50_00000D94:
    lwz r3, 0xc(r31)
    lwz r0, 0x14(r3)
    add r3, r3, r0
    addi r3, r3, 0x14
    stw r3, 0x10(r31)
    lwz r0, 0x4(r3)
    add r3, r3, r0
    addi r4, r3, 0x4
    stw r4, 0x14(r31)
    addi r5, r4, 0x8
    lwz r0, 0x8(r3)
    add r3, r4, r0
    addi r3, r3, 0x4
    stw r3, 0x18(r31)
    lwz r0, 0x0(r3)
    add r0, r3, r0
    stw r0, 0x1c(r31)
    lwz r0, 0x0(r4)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80442B50_00000E0C
lbl_fn_80442B50_00000DE8:
    lwz r0, 0x0(r5)
    add r3, r5, r0
    lwzx r0, r5, r0
    cmpwi r0, 0x0
    beq lbl_fn_80442B50_00000E04
    add r0, r3, r0
    stw r0, 0x0(r3)
lbl_fn_80442B50_00000E04:
    addi r5, r5, 0x4
    bdnz lbl_fn_80442B50_00000DE8
lbl_fn_80442B50_00000E0C:
    li r0, 0x1
    stw r0, 0x0(r31)
    b lbl_fn_80442B50_00000FF4
lbl_fn_80442B50_00000E18:
    li r0, 0x1
    stw r0, 0x4(r31)
    lwz r4, 0xc(r31)
    lwz r3, 0x14(r4)
    slwi r0, r3, 24
    rlwimi r0, r3, 8, 24, 31
    rlwimi r0, r3, 24, 16, 23
    rlwimi r0, r3, 8, 8, 15
    add r3, r4, r0
    addi r3, r3, 0x14
    stw r3, 0x10(r31)
    lwz r4, 0x4(r3)
    slwi r0, r4, 24
    rlwimi r0, r4, 8, 24, 31
    rlwimi r0, r4, 24, 16, 23
    rlwimi r0, r4, 8, 8, 15
    add r3, r3, r0
    addi r4, r3, 0x4
    stw r4, 0x14(r31)
    addi r5, r4, 0x8
    lwz r3, 0x8(r3)
    slwi r0, r3, 24
    rlwimi r0, r3, 8, 24, 31
    rlwimi r0, r3, 24, 16, 23
    rlwimi r0, r3, 8, 8, 15
    add r3, r4, r0
    addi r3, r3, 0x4
    stw r3, 0x18(r31)
    lwz r6, 0x0(r3)
    slwi r0, r6, 24
    rlwimi r0, r6, 8, 24, 31
    rlwimi r0, r6, 24, 16, 23
    rlwimi r0, r6, 8, 8, 15
    add r0, r3, r0
    stw r0, 0x1c(r31)
    lwz r3, 0x0(r4)
    slwi r0, r3, 24
    rlwimi r0, r3, 8, 24, 31
    rlwimi r0, r3, 24, 16, 23
    rlwimi r0, r3, 8, 8, 15
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80442B50_00000F0C
lbl_fn_80442B50_00000EC4:
    lwz r3, 0x0(r5)
    stwbrx r3, r0, r5
    slwi r0, r3, 24
    rlwimi r0, r3, 8, 24, 31
    rlwimi r0, r3, 24, 16, 23
    rlwimi r0, r3, 8, 8, 15
    lwzx r4, r5, r0
    add r3, r5, r0
    cmpwi r4, 0x0
    beq lbl_fn_80442B50_00000F04
    slwi r0, r4, 24
    rlwimi r0, r4, 8, 24, 31
    rlwimi r0, r4, 24, 16, 23
    rlwimi r0, r4, 8, 8, 15
    add r0, r3, r0
    stw r0, 0x0(r3)
lbl_fn_80442B50_00000F04:
    addi r5, r5, 0x4
    bdnz lbl_fn_80442B50_00000EC4
lbl_fn_80442B50_00000F0C:
    lwz r5, 0xc(r31)
    li r3, 0x0
    lwz r4, 0x0(r5)
    stwbrx r4, r0, r5
    lwz r4, 0xc(r31)
    lwz r5, 0x4(r4)
    addi r0, r4, 0x4
    stwbrx r5, r0, r0
    lwz r4, 0xc(r31)
    lwz r5, 0x8(r4)
    addi r0, r4, 0x8
    stwbrx r5, r0, r0
    lwz r4, 0xc(r31)
    lwz r5, 0xc(r4)
    addi r0, r4, 0xc
    stwbrx r5, r0, r0
    lwz r4, 0xc(r31)
    lwz r5, 0x10(r4)
    addi r0, r4, 0x10
    stwbrx r5, r0, r0
    lwz r4, 0xc(r31)
    lwz r0, 0x14(r4)
    addi r5, r4, 0x14
    stwbrx r0, r0, r5
    lwz r4, 0xc(r31)
    lwz r0, 0x18(r4)
    addi r5, r4, 0x18
    stwbrx r0, r0, r5
    lwz r4, 0xc(r31)
    lwz r5, 0x1c(r4)
    addi r0, r4, 0x1c
    stwbrx r5, r0, r0
    lwz r5, 0x10(r31)
    lwz r4, 0x0(r5)
    stwbrx r4, r0, r5
    lwz r4, 0x10(r31)
    lwz r5, 0x4(r4)
    addi r0, r4, 0x4
    stwbrx r5, r0, r0
    lwz r4, 0x10(r31)
    addi r5, r4, 0x8
    b lbl_fn_80442B50_00000FD0
lbl_fn_80442B50_00000FB4:
    lwz r0, 0x0(r5)
    addi r3, r3, 0x1
    stwbrx r0, r0, r5
    addi r0, r5, 0xc
    lwz r4, 0xc(r5)
    addi r5, r5, 0x10
    stwbrx r4, r0, r0
lbl_fn_80442B50_00000FD0:
    lwz r4, 0x10(r31)
    lwz r0, 0x0(r4)
    cmplw r3, r0
    blt lbl_fn_80442B50_00000FB4
    lwz r5, 0x18(r31)
    li r0, 0x1
    lwz r4, 0x0(r5)
    stwbrx r4, r0, r5
    stw r0, 0x0(r31)
lbl_fn_80442B50_00000FF4:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80442E64(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_80442E64_00001038
    cmpwi r4, 0x0
    ble lbl_fn_80442E64_00001038
    bl dtor_80084684
lbl_fn_80442E64_00001038:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80442EA4(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    blr
}

asm void fn_80442EAC(void)
{
    nofralloc
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80442EAC_00001070
    lwz r3, 0x10(r3)
    lwz r3, 0x0(r3)
    blr
lbl_fn_80442EAC_00001070:
    li r3, 0x0
    blr
}

asm void fn_80442ECC(void)
{
    nofralloc
    lwz r3, 0x10(r3)
    li r6, 0x0
    lwz r0, 0x0(r3)
    addi r3, r3, 0x8
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80442ECC_000010B4
lbl_fn_80442ECC_00001094:
    lwz r0, 0x0(r3)
    cmpw r0, r4
    bne lbl_fn_80442ECC_000010AC
    cmplw r6, r5
    beqlr
    addi r6, r6, 0x1
lbl_fn_80442ECC_000010AC:
    addi r3, r3, 0x10
    bdnz lbl_fn_80442ECC_00001094
lbl_fn_80442ECC_000010B4:
    li r3, 0x0
    blr
}

asm void fn_80442F10(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, lbl_8087F4F0
    cmpwi r0, 0x0
    bne lbl_fn_80442F10_00001104
    lis r5, lbl_80754760@ha
    lis r3, 0x1
    addi r5, r5, lbl_80754760@l
    li r4, 0x3
    mr r6, r5
    subi r3, r3, 0x203c
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_80442F10_00001100
    bl fn_80442FF4
lbl_fn_80442F10_00001100:
    stw r3, lbl_8087F4F0
lbl_fn_80442F10_00001104:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80442F68(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lwz r31, lbl_8087F4F0
    cmpwi r31, 0x0
    beq lbl_fn_80442F68_0000118C
    beq lbl_fn_80442F68_00001184
    addis r3, r31, 0x1
    subic. r3, r3, 0x2500
    beq lbl_fn_80442F68_00001148
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80442F68_00001148:
    addis r3, r31, 0x1
    lis r4, fn_80119ECC@ha
    addi r4, r4, fn_80119ECC@l
    li r5, 0x2d4
    li r6, 0x1c
    subi r3, r3, 0x7bb0
    bl fn_806959D8
    lis r4, fn_8012B3A8@ha
    addi r3, r31, 0x64ec
    addi r4, r4, fn_8012B3A8@l
    li r5, 0x43c
    li r6, 0x7
    bl fn_806959D8
    mr r3, r31
    bl dtor_80084684
lbl_fn_80442F68_00001184:
    li r0, 0x0
    stw r0, lbl_8087F4F0
lbl_fn_80442F68_0000118C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80442FF4(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    addi r6, r3, 0x10
    stw r0, 0x44(r1)
    addi r0, r3, 0x6000
    cmplw r6, r0
    stmw r21, 0x14(r1)
    li r0, 0x0
    mr r23, r3
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    sth r0, 0x8(r3)
    stw r0, 0xc(r3)
    bge lbl_fn_80442FF4_000012DC
    addi r5, r3, 0x5f80
    li r0, 0x0
    li r4, 0x0
    bgt lbl_fn_80442FF4_000011EC
    li r4, 0x1
lbl_fn_80442FF4_000011EC:
    cmpwi r4, 0x0
    beq lbl_fn_80442FF4_000011F8
    li r0, 0x1
lbl_fn_80442FF4_000011F8:
    cmpwi r0, 0x0
    beq lbl_fn_80442FF4_000012A4
    addi r0, r5, 0x7f
    li r4, 0x0
    subf r0, r6, r0
    srwi r0, r0, 7
    mtctr r0
    cmplw r6, r5
    bge lbl_fn_80442FF4_000012A4
lbl_fn_80442FF4_0000121C:
    stw r4, 0x0(r6)
    stw r4, 0x4(r6)
    sth r4, 0x8(r6)
    stw r4, 0xc(r6)
    stw r4, 0x10(r6)
    stw r4, 0x14(r6)
    sth r4, 0x18(r6)
    stw r4, 0x1c(r6)
    stw r4, 0x20(r6)
    stw r4, 0x24(r6)
    sth r4, 0x28(r6)
    stw r4, 0x2c(r6)
    stw r4, 0x30(r6)
    stw r4, 0x34(r6)
    sth r4, 0x38(r6)
    stw r4, 0x3c(r6)
    stw r4, 0x40(r6)
    stw r4, 0x44(r6)
    sth r4, 0x48(r6)
    stw r4, 0x4c(r6)
    stw r4, 0x50(r6)
    stw r4, 0x54(r6)
    sth r4, 0x58(r6)
    stw r4, 0x5c(r6)
    stw r4, 0x60(r6)
    stw r4, 0x64(r6)
    sth r4, 0x68(r6)
    stw r4, 0x6c(r6)
    stw r4, 0x70(r6)
    stw r4, 0x74(r6)
    sth r4, 0x78(r6)
    stw r4, 0x7c(r6)
    addi r6, r6, 0x80
    bdnz lbl_fn_80442FF4_0000121C
lbl_fn_80442FF4_000012A4:
    addi r4, r3, 0x6000
    li r5, 0x0
    addi r0, r4, 0xf
    subf r0, r6, r0
    srwi r0, r0, 4
    mtctr r0
    cmplw r6, r4
    bge lbl_fn_80442FF4_000012DC
lbl_fn_80442FF4_000012C4:
    stw r5, 0x0(r6)
    stw r5, 0x4(r6)
    sth r5, 0x8(r6)
    stw r5, 0xc(r6)
    addi r6, r6, 0x10
    bdnz lbl_fn_80442FF4_000012C4
lbl_fn_80442FF4_000012DC:
    li r21, 0x0
    stw r21, 0x601c(r3)
    addi r22, r3, 0x6020
    addi r24, r3, 0x64a0
lbl_fn_80442FF4_000012EC:
    stw r21, 0x0(r22)
    addi r3, r22, 0x4
    li r4, 0x0
    li r5, 0x7c
    bl memset
    stw r21, 0x80(r22)
    stw r21, 0x84(r22)
    stw r21, 0x88(r22)
    stw r21, 0x8c(r22)
    addi r22, r22, 0x90
    cmplw r22, r24
    blt lbl_fn_80442FF4_000012EC
    lis r4, fn_8012B0B0@ha
    lis r5, fn_8012B3A8@ha
    addi r3, r23, 0x64ec
    li r6, 0x43c
    addi r4, r4, fn_8012B0B0@l
    addi r5, r5, fn_8012B3A8@l
    li r7, 0x7
    bl fn_806958E0
    addis r3, r23, 0x1
    lis r4, fn_803BB3C0@ha
    lis r5, fn_80119ECC@ha
    li r6, 0x2d4
    addi r4, r4, fn_803BB3C0@l
    li r7, 0x1c
    addi r5, r5, fn_80119ECC@l
    subi r3, r3, 0x7bb0
    bl fn_806958E0
    addis r22, r23, 0x1
    li r21, -0x1
    subi r24, r22, 0x2ac0
    subi r22, r22, 0x2c80
lbl_fn_80442FF4_00001370:
    stw r21, 0x0(r22)
    addi r3, r22, 0x20
    li r4, 0x0
    li r5, 0x20
    stw r21, 0x4(r22)
    stw r21, 0x8(r22)
    stw r21, 0xc(r22)
    stw r21, 0x10(r22)
    stw r21, 0x14(r22)
    stw r21, 0x18(r22)
    stw r21, 0x1c(r22)
    bl memset
    addi r22, r22, 0x40
    cmplw r22, r24
    blt lbl_fn_80442FF4_00001370
    addis r3, r23, 0x1
    li r21, -0x1
    subi r22, r3, 0x26c0
lbl_fn_80442FF4_000013B8:
    stw r21, 0x0(r24)
    addi r3, r24, 0x20
    li r4, 0x0
    li r5, 0x20
    stw r21, 0x4(r24)
    stw r21, 0x8(r24)
    stw r21, 0xc(r24)
    stw r21, 0x10(r24)
    stw r21, 0x14(r24)
    stw r21, 0x18(r24)
    stw r21, 0x1c(r24)
    bl memset
    addi r24, r24, 0x40
    cmplw r24, r22
    blt lbl_fn_80442FF4_000013B8
    addis r3, r23, 0x1
    li r21, -0x1
    subi r25, r3, 0x2500
lbl_fn_80442FF4_00001400:
    stw r21, 0x0(r22)
    addi r3, r22, 0x20
    li r4, 0x0
    li r5, 0x20
    stw r21, 0x4(r22)
    stw r21, 0x8(r22)
    stw r21, 0xc(r22)
    stw r21, 0x10(r22)
    stw r21, 0x14(r22)
    stw r21, 0x18(r22)
    stw r21, 0x1c(r22)
    bl memset
    addi r22, r22, 0x40
    cmplw r22, r25
    blt lbl_fn_80442FF4_00001400
    mr r3, r25
    bl fn_80473E74
    lis r3, lbl_8078FBB0@ha
    addis r6, r23, 0x1
    li r22, 0x0
    li r24, 0x1
    li r21, -0x1
    addi r3, r3, lbl_8078FBB0@l
    stw r3, 0x0(r25)
    subi r3, r6, 0x20cc
    li r4, 0x0
    li r5, 0x7c
    stw r24, -0x24f8(r6)
    stw r24, -0x24f4(r6)
    stw r24, -0x24f0(r6)
    stw r22, -0x24ec(r6)
    stw r21, -0x24e8(r6)
    stw r21, -0x24e4(r6)
    stw r21, -0x24e0(r6)
    stw r22, -0x24dc(r6)
    stw r22, -0x24d8(r6)
    stw r22, -0x24d4(r6)
    stw r22, -0x20d0(r6)
    bl memset
    addis r6, r23, 0x1
    li r0, 0x3e8
    stw r22, -0x2050(r6)
    addi r3, r23, 0x6004
    li r4, 0x0
    li r5, 0x8
    stw r22, -0x204c(r6)
    stw r22, -0x2048(r6)
    stw r22, -0x2044(r6)
    stw r22, -0x2040(r6)
    stw r0, 0x6000(r23)
    bl memset
    addi r3, r23, 0x600c
    li r4, 0x0
    li r5, 0x8
    bl memset
    stw r22, 0x601c(r23)
    li r6, 0x2
    li r5, 0x3
    li r4, 0x4
    stw r22, 0x6014(r23)
    li r3, 0x5
    li r8, 0x6
    li r7, 0x7
    stw r22, 0x6018(r23)
    li r0, 0x12
    li r26, 0x0
    li r25, 0x0
    stw r22, 0x64a0(r23)
    stw r24, 0x64a4(r23)
    stw r6, 0x64a8(r23)
    li r6, 0x8
    stw r5, 0x64ac(r23)
    li r5, 0x9
    stw r4, 0x64b0(r23)
    li r4, 0xa
    stw r3, 0x64b4(r23)
    li r3, 0xb
    stw r8, 0x64b8(r23)
    li r8, 0xc
    stw r7, 0x64bc(r23)
    li r7, 0xd
    stw r6, 0x64c0(r23)
    li r6, 0xe
    stw r5, 0x64c4(r23)
    li r5, 0xf
    stw r4, 0x64c8(r23)
    li r4, 0x10
    stw r3, 0x64cc(r23)
    li r3, 0x11
    stw r8, 0x64d0(r23)
    stw r7, 0x64d4(r23)
    stw r6, 0x64d8(r23)
    stw r5, 0x64dc(r23)
    stw r4, 0x64e0(r23)
    stw r3, 0x64e4(r23)
    stw r0, 0x64e8(r23)
lbl_fn_80442FF4_00001580:
    mr r3, r26
    bl fn_802114E0
    cmpwi r3, 0x0
    beq lbl_fn_80442FF4_000015A8
    lwz r0, 0x4(r3)
    add r4, r23, r25
    stwx r0, r23, r25
    stw r22, 0x4(r4)
    sth r26, 0x8(r4)
    b lbl_fn_80442FF4_000015B8
lbl_fn_80442FF4_000015A8:
    stwx r21, r23, r25
    add r3, r23, r25
    stw r22, 0x4(r3)
    sth r22, 0x8(r3)
lbl_fn_80442FF4_000015B8:
    addi r26, r26, 0x1
    addi r25, r25, 0x10
    cmpwi r26, 0x600
    blt lbl_fn_80442FF4_00001580
    bl fn_80210AC4
    cmpwi r3, 0x0
    beq lbl_fn_80442FF4_0000172C
    mr r21, r3
    li r22, 0x0
lbl_fn_80442FF4_000015DC:
    lwz r4, 0x0(r21)
    cmpwi r4, 0x0
    ble lbl_fn_80442FF4_00001608
    lwz r5, 0x4(r21)
    mr r3, r23
    li r6, 0x1
    li r7, 0x0
    li r8, 0x0
    li r9, 0x1
    li r10, 0x1
    bl fn_804439FC
lbl_fn_80442FF4_00001608:
    addi r22, r22, 0x1
    addi r21, r21, 0x8
    cmpwi r22, 0x20
    blt lbl_fn_80442FF4_000015DC
    lwz r3, lbl_8087F0A8
    lwz r0, 0x194(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80442FF4_0000172C
    lis r21, 0x2
    mr r3, r23
    subi r4, r21, 0x7827
    li r5, 0x1
    li r6, 0x1
    li r7, 0x0
    li r8, 0x0
    li r9, 0x1
    li r10, 0x1
    bl fn_804439FC
    mr r3, r23
    subi r4, r21, 0x7820
    li r5, 0x1
    li r6, 0x1
    li r7, 0x0
    li r8, 0x0
    li r9, 0x1
    li r10, 0x1
    bl fn_804439FC
    mr r3, r23
    subi r4, r21, 0x76c7
    li r5, 0x1
    li r6, 0x1
    li r7, 0x0
    li r8, 0x0
    li r9, 0x1
    li r10, 0x1
    bl fn_804439FC
    lis r21, 0x3
    mr r3, r23
    addi r4, r21, 0xd7d
    li r5, 0x1
    li r6, 0x1
    li r7, 0x0
    li r8, 0x0
    li r9, 0x1
    li r10, 0x1
    bl fn_804439FC
    mr r3, r23
    addi r4, r21, 0x1165
    li r5, 0x1
    li r6, 0x1
    li r7, 0x0
    li r8, 0x0
    li r9, 0x1
    li r10, 0x1
    bl fn_804439FC
    mr r3, r23
    li r4, 0x1c2
    li r5, 0x1
    li r6, 0x1
    li r7, 0x0
    li r8, 0x0
    li r9, 0x1
    li r10, 0x1
    bl fn_804439FC
    mr r3, r23
    li r4, 0x1c3
    li r5, 0x1
    li r6, 0x1
    li r7, 0x0
    li r8, 0x0
    li r9, 0x1
    li r10, 0x1
    bl fn_804439FC
lbl_fn_80442FF4_0000172C:
    lwz r3, lbl_8087F0A8
    lis r7, lbl_80754650@ha
    addi r7, r7, lbl_80754650@l
    lwz r0, 0x194(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80442FF4_0000174C
    lis r7, lbl_807546C0@ha
    addi r7, r7, lbl_807546C0@l
lbl_fn_80442FF4_0000174C:
    mr r8, r23
    li r12, 0x0
    li r9, 0x0
    li r3, -0x1
    li r0, 0x2
lbl_fn_80442FF4_00001760:
    mr r10, r8
    mr r11, r7
    li r21, 0x0
    mtctr r0
lbl_fn_80442FF4_00001770:
    srwi r6, r21, 31
    clrlwi r4, r21, 31
    xor r4, r4, r6
    addis r5, r10, 0x1
    subf r6, r6, r4
    cmpwi r21, 0x2
    slwi r6, r6, 2
    add r4, r21, r9
    lwzx r6, r7, r6
    stw r6, -0x7d70(r5)
    stw r4, -0x7d6c(r5)
    bge lbl_fn_80442FF4_000017B0
    lwz r4, 0x8(r11)
    stw r4, -0x7d50(r5)
    stw r3, -0x7d4c(r5)
    b lbl_fn_80442FF4_000017B8
lbl_fn_80442FF4_000017B0:
    stw r3, -0x7d50(r5)
    stw r3, -0x7d4c(r5)
lbl_fn_80442FF4_000017B8:
    addi r21, r21, 0x1
    addi r10, r10, 0x8
    srwi r6, r21, 31
    clrlwi r4, r21, 31
    addis r5, r10, 0x1
    xor r4, r4, r6
    cmpwi r21, 0x2
    subf r6, r6, r4
    slwi r6, r6, 2
    add r4, r21, r9
    lwzx r6, r7, r6
    stw r6, -0x7d70(r5)
    stw r4, -0x7d6c(r5)
    bge lbl_fn_80442FF4_00001800
    lwz r4, 0xc(r11)
    stw r4, -0x7d50(r5)
    stw r3, -0x7d4c(r5)
    b lbl_fn_80442FF4_00001808
lbl_fn_80442FF4_00001800:
    stw r3, -0x7d50(r5)
    stw r3, -0x7d4c(r5)
lbl_fn_80442FF4_00001808:
    addi r10, r10, 0x8
    addi r11, r11, 0x8
    addi r21, r21, 0x1
    bdnz lbl_fn_80442FF4_00001770
    addi r12, r12, 0x1
    addi r8, r8, 0x40
    cmpwi r12, 0x7
    addi r9, r9, 0x4
    addi r7, r7, 0x10
    blt lbl_fn_80442FF4_00001760
    li r22, 0x0
    li r21, 0x0
lbl_fn_80442FF4_00001838:
    mr r3, r22
    bl fn_8020C000
    cmpwi r3, 0x0
    beq lbl_fn_80442FF4_00001890
    add r4, r23, r21
    lwz r0, 0x0(r3)
    addis r4, r4, 0x1
    stw r0, -0x26c0(r4)
    lwz r0, 0x4(r3)
    stw r0, -0x26bc(r4)
    lwz r0, 0x8(r3)
    stw r0, -0x26b8(r4)
    lwz r0, 0xc(r3)
    stw r0, -0x26b4(r4)
    lwz r0, 0x10(r3)
    stw r0, -0x26b0(r4)
    lwz r0, 0x14(r3)
    stw r0, -0x26ac(r4)
    lwz r0, 0x18(r3)
    stw r0, -0x26a8(r4)
    lwz r0, 0x1c(r3)
    stw r0, -0x26a4(r4)
lbl_fn_80442FF4_00001890:
    addi r22, r22, 0x1
    addi r21, r21, 0x40
    cmpwi r22, 0x7
    blt lbl_fn_80442FF4_00001838
    addi r29, r1, 0x8
    li r25, 0x0
    li r28, 0x0
    li r21, 0x1
lbl_fn_80442FF4_000018B0:
    mr r3, r25
    bl fn_8020C000
    cmpwi r3, 0x0
    beq lbl_fn_80442FF4_000019F0
    add r4, r28, r23
    mr r27, r3
    addis r3, r4, 0x1
    li r24, 0x0
    subi r22, r3, 0x2c80
    li r26, 0x0
lbl_fn_80442FF4_000018D8:
    lwz r0, 0x0(r27)
    stw r0, 0x0(r22)
    lwz r3, 0x0(r27)
    bl fn_8020BD3C
    cmplw r3, r29
    mr r30, r3
    beq lbl_fn_80442FF4_0000190C
    bl strlen
    mr r5, r3
    mr r3, r29
    mr r4, r30
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_80442FF4_0000190C:
    li r30, 0x0
    b lbl_fn_80442FF4_000019A8
lbl_fn_80442FF4_00001914:
    mr r3, r30
    bl fn_802114E0
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_80442FF4_000019A4
    addi r3, r3, 0x114
    bl strlen
    lbzx r0, r29, r3
    extsb r0, r0
    cntlzw r0, r0
    srwi. r0, r0, 5
    beq lbl_fn_80442FF4_00001994
    add r3, r31, r3
    addi r4, r31, 0x114
    addi r3, r3, 0x114
    mr r5, r29
    subf r0, r4, r3
    mtctr r0
    cmplw r4, r3
    beq lbl_fn_80442FF4_00001990
lbl_fn_80442FF4_00001964:
    lbz r3, 0x0(r4)
    lbz r0, 0x0(r5)
    extsb r3, r3
    extsb r0, r0
    cmpw r3, r0
    beq lbl_fn_80442FF4_00001984
    li r0, 0x0
    b lbl_fn_80442FF4_00001994
lbl_fn_80442FF4_00001984:
    addi r4, r4, 0x1
    addi r5, r5, 0x1
    bdnz lbl_fn_80442FF4_00001964
lbl_fn_80442FF4_00001990:
    li r0, 0x1
lbl_fn_80442FF4_00001994:
    cmpwi r0, 0x0
    beq lbl_fn_80442FF4_000019A4
    lwz r3, 0x4(r31)
    b lbl_fn_80442FF4_000019B8
lbl_fn_80442FF4_000019A4:
    addi r30, r30, 0x1
lbl_fn_80442FF4_000019A8:
    bl fn_802114D8
    cmpw r30, r3
    blt lbl_fn_80442FF4_00001914
    li r3, 0x0
lbl_fn_80442FF4_000019B8:
    bl fn_8021150C
    cmpwi r3, 0x0
    blt lbl_fn_80442FF4_000019D8
    cmpwi r3, 0x600
    bge lbl_fn_80442FF4_000019D8
    slwi r0, r3, 4
    add r3, r23, r0
    stw r21, 0x4(r3)
lbl_fn_80442FF4_000019D8:
    addi r24, r24, 0x1
    addi r26, r26, 0x4
    cmpwi r24, 0x8
    addi r22, r22, 0x4
    addi r27, r27, 0x4
    blt lbl_fn_80442FF4_000018D8
lbl_fn_80442FF4_000019F0:
    addi r25, r25, 0x1
    addi r28, r28, 0x40
    cmpwi r25, 0x7
    blt lbl_fn_80442FF4_000018B0
    mr r3, r23
    lmw r21, 0x14(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}
