#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_14(void);
extern void _restgpr_22(void);
extern void _savegpr_14(void);
extern void _savegpr_22(void);
extern void fn_8004D388(void);
extern void fn_8004ED34(void);
extern void fn_800A55D4(void);
extern void fn_800A56A8(void);
extern void fn_800A58D0(void);
extern void fn_80373148(void);
extern void fn_805AA830(void);
extern void fn_805AA950(void);
extern void fn_805BDCC0(void);
extern void fn_805BF414(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_805F9990(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);

/* External data declarations */
extern u8 lbl_8074E008[];
extern u8 lbl_8074E010[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087EF70;
extern u32 lbl_8087F098;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F430;
extern u32 lbl_8087F9C0;
extern u32 lbl_8087F9F8;
extern u32 lbl_808858E8;
extern u32 lbl_808858EC;
extern u32 lbl_808858F8;
extern u32 lbl_80885908;
extern u32 lbl_80885910;
extern u32 lbl_80885914;
extern u32 lbl_8088591C;
extern u32 lbl_80885920;
extern u32 lbl_8088592C;
extern u32 lbl_80885938;
extern u32 lbl_80885954;
extern u32 lbl_80885974;
extern u32 lbl_8088597C;
extern u32 lbl_808859A4;
extern u32 lbl_808859C4;
extern u32 lbl_808859C8;
extern u32 lbl_808859CC;
extern u32 lbl_808859D0;
extern u32 lbl_808859D4;
extern u32 lbl_808859D8;
extern u32 lbl_808859E0;
extern u32 lbl_808859E4;
extern u32 lbl_80885A0C;
extern u32 lbl_80885A44;
extern u32 lbl_80885A8C;
extern u32 lbl_80885AC4;
extern u32 lbl_80885AC8;

/* Function declarations */
void fn_80390374(void);
void fn_803903C4(void);
void fn_803903CC(void);
void fn_803903E0(void);
void fn_80390A88(void);
void fn_803918EC(void);

asm void fn_80390374(void)
{
    nofralloc
    lwz r5, 0x804(r3)
    lwz r0, 0x7fc(r3)
    cmpw r0, r5
    beqlr
    lfs f0, lbl_808858E8
    li r4, 0x0
    stw r0, 0x800(r3)
    li r0, 0x3
    stw r5, 0x7fc(r3)
    stw r4, 0x808(r3)
    stw r4, 0x838(r3)
    stw r4, 0x880(r3)
    stfs f0, 0xa0c(r3)
    stfs f0, 0xa10(r3)
    stfs f0, 0xa14(r3)
    stfs f0, 0xa18(r3)
    stfs f0, 0xa1c(r3)
    lwz r3, lbl_8087F0A8
    stw r0, 0x49c(r3)
    blr
}

asm void fn_803903C4(void)
{
    nofralloc
    lwz r3, lbl_8087F098
    blr
}

asm void fn_803903CC(void)
{
    nofralloc
    lwz r3, 0x48(r3)
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    blr
}

asm void fn_803903E0(void)
{
    nofralloc
    stwu r1, -0x2d0(r1)
    mflr r0
    stw r0, 0x2d4(r1)
    addi r11, r1, 0x250
    stfd f31, 0x2c0(r1)
    psq_st f31, 0x2c8(r1), 0, 0
    stfd f30, 0x2b0(r1)
    psq_st f30, 0x2b8(r1), 0, 0
    stfd f29, 0x2a0(r1)
    psq_st f29, 0x2a8(r1), 0, 0
    stfd f28, 0x290(r1)
    psq_st f28, 0x298(r1), 0, 0
    stfd f27, 0x280(r1)
    psq_st f27, 0x288(r1), 0, 0
    stfd f26, 0x270(r1)
    psq_st f26, 0x278(r1), 0, 0
    stfd f25, 0x260(r1)
    psq_st f25, 0x268(r1), 0, 0
    stfd f24, 0x250(r1)
    psq_st f24, 0x258(r1), 0, 0
    bl _savegpr_14
    fmr f4, f1
    lfs f2, 0x8(r4)
    lfs f3, 0x4(r4)
    addi r6, r3, 0x8a4
    psq_l f1, 0x0(r4), 0, 0
    addi r7, r3, 0x8bc
    addi r8, r1, 0x98
    psq_st f1, 0x0(r6), 0, 0
    mr r15, r3
    li r14, 0x0
    psq_st f1, 0x0(r8), 0, 0
    li r16, 0x0
    stfs f2, 0x8ac(r3)
    lfs f0, 0x9c(r1)
    stfs f4, 0x8a0(r3)
    stw r5, 0x8cc(r3)
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0x8c4(r3)
    stfs f3, 0x8c8(r3)
    lwz r4, lbl_8087F0A8
    lwz r3, lbl_8087F430
    lfs f3, 0x8c(r4)
    cmpwi r3, 0x0
    stfs f2, 0xa0(r1)
    fadds f0, f0, f3
    stfs f0, 0x9c(r1)
    beq lbl_fn_803903E0_0000013C
    bl fn_80373148
    cmpwi r3, 0x0
    beq lbl_fn_803903E0_0000013C
    li r16, 0x1
lbl_fn_803903E0_0000013C:
    cmpwi r16, 0x0
    beq lbl_fn_803903E0_0000015C
    lwz r3, lbl_8087F430
    bl fn_80373148
    lwz r0, 0xec(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803903E0_0000015C
    li r14, 0x1
lbl_fn_803903E0_0000015C:
    cmpwi r14, 0x0
    bne lbl_fn_803903E0_000001C4
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803903E0_000001B4
    bl fn_80373148
    cmpwi r3, 0x0
    beq lbl_fn_803903E0_000001B4
    lwz r3, lbl_8087F430
    bl fn_80373148
    lwz r0, 0x4c(r3)
    cmpwi r0, 0x3
    bne lbl_fn_803903E0_00000198
    lfs f3, lbl_80885914
    b lbl_fn_803903E0_000001B8
lbl_fn_803903E0_00000198:
    cmpwi r0, 0x11
    bne lbl_fn_803903E0_000001B4
    lwz r0, 0x50(r3)
    cmpwi r0, 0x2
    bne lbl_fn_803903E0_000001B4
    lfs f3, lbl_8088597C
    b lbl_fn_803903E0_000001B8
lbl_fn_803903E0_000001B4:
    lfs f3, lbl_80885910
lbl_fn_803903E0_000001B8:
    lfs f0, 0x9c(r1)
    fadds f0, f0, f3
    stfs f0, 0x9c(r1)
lbl_fn_803903E0_000001C4:
    lfs f5, 0x8ac(r15)
    addi r3, r1, 0x8c
    lfs f0, 0xa0(r1)
    lfs f4, 0x8a4(r15)
    fsubs f5, f5, f0
    lfs f3, 0x98(r1)
    lfs f0, lbl_808858E8
    fsubs f3, f4, f3
    stfs f5, 0x94(r1)
    stfs f3, 0x8c(r1)
    stfs f0, 0x90(r1)
    bl fn_805F9940
    lfs f0, lbl_808858E8
    addi r3, r1, 0xd8
    stfs f0, 0x8c(r1)
    li r4, 0x79
    stfs f0, 0x90(r1)
    stfs f1, 0x94(r1)
    lfs f0, 0x8a0(r15)
    fneg f1, f0
    bl fn_805F8E70
    addi r4, r1, 0x8c
    addi r3, r1, 0xd8
    mr r5, r4
    bl fn_805F93C0
    lfs f3, 0xa0(r1)
    addi r4, r1, 0x80
    lfs f0, 0x94(r1)
    addi r3, r15, 0x8a4
    lfs f4, 0x98(r1)
    fadds f2, f3, f0
    lfs f3, 0x8c(r1)
    lfs f0, 0x8a8(r15)
    fadds f3, f4, f3
    lwz r0, 0x8cc(r15)
    stfs f0, 0x84(r1)
    cmpwi r0, 0x0
    stfs f3, 0x80(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0x88(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x8ac(r15)
    beq lbl_fn_803903E0_000006BC
    li r0, 0x0
    stw r0, 0x8cc(r15)
    li r14, 0x0
    li r16, 0x0
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803903E0_0000029C
    bl fn_80373148
    cmpwi r3, 0x0
    beq lbl_fn_803903E0_0000029C
    li r16, 0x1
lbl_fn_803903E0_0000029C:
    cmpwi r16, 0x0
    beq lbl_fn_803903E0_000002BC
    lwz r3, lbl_8087F430
    bl fn_80373148
    lwz r0, 0xec(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803903E0_000002BC
    li r14, 0x1
lbl_fn_803903E0_000002BC:
    cmpwi r14, 0x0
    beq lbl_fn_803903E0_000006BC
    addi r4, r15, 0x8a4
    lwz r5, lbl_8087F0A8
    addi r3, r1, 0x74
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    li r14, 0x0
    lwz r3, lbl_8087F430
    li r16, 0x0
    lfs f27, 0x8c(r5)
    lfs f0, 0x78(r1)
    cmpwi r3, 0x0
    lfs f2, 0x8ac(r15)
    fadds f0, f0, f27
    stfs f2, 0x7c(r1)
    stfs f0, 0x78(r1)
    beq lbl_fn_803903E0_00000314
    bl fn_80373148
    cmpwi r3, 0x0
    beq lbl_fn_803903E0_00000314
    li r16, 0x1
lbl_fn_803903E0_00000314:
    cmpwi r16, 0x0
    beq lbl_fn_803903E0_00000334
    lwz r3, lbl_8087F430
    bl fn_80373148
    lwz r0, 0xec(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803903E0_00000334
    li r14, 0x1
lbl_fn_803903E0_00000334:
    cmpwi r14, 0x0
    bne lbl_fn_803903E0_0000039C
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803903E0_0000038C
    bl fn_80373148
    cmpwi r3, 0x0
    beq lbl_fn_803903E0_0000038C
    lwz r3, lbl_8087F430
    bl fn_80373148
    lwz r0, 0x4c(r3)
    cmpwi r0, 0x3
    bne lbl_fn_803903E0_00000370
    lfs f3, lbl_80885914
    b lbl_fn_803903E0_00000390
lbl_fn_803903E0_00000370:
    cmpwi r0, 0x11
    bne lbl_fn_803903E0_0000038C
    lwz r0, 0x50(r3)
    cmpwi r0, 0x2
    bne lbl_fn_803903E0_0000038C
    lfs f3, lbl_8088597C
    b lbl_fn_803903E0_00000390
lbl_fn_803903E0_0000038C:
    lfs f3, lbl_80885910
lbl_fn_803903E0_00000390:
    lfs f0, 0x78(r1)
    fadds f0, f0, f3
    stfs f0, 0x78(r1)
lbl_fn_803903E0_0000039C:
    lis r3, lbl_8074E008@ha
    li r17, 0x0
    stw r17, 0x1dc(r1)
    addi r28, r15, 0x8a4
    lfs f26, lbl_80885AC4
    addi r29, r1, 0x5c
    stw r17, 0x1e0(r1)
    addi r20, r1, 0x10c
    lfd f28, lbl_8074E008@l(r3)
    addi r19, r1, 0x1ac
    stw r17, 0x1e4(r1)
    addi r22, r1, 0x118
    lfs f29, lbl_80885954
    addi r21, r1, 0x1b8
    stw r17, 0x1e8(r1)
    addi r24, r1, 0x124
    lfs f30, lbl_808858E8
    addi r23, r1, 0x1c4
    lfs f31, lbl_80885910
    addi r26, r1, 0x130
    lfs f25, lbl_808858F8
    addi r25, r1, 0x1d0
    addi r14, r1, 0x14c
    addi r27, r1, 0x1ec
    lis r18, 0x800
    li r16, 0x0
    li r30, 0x0
lbl_fn_803903E0_00000408:
    xoris r0, r16, 0x8000
    stw r0, 0x1fc(r1)
    lis r0, 0x4330
    addi r3, r1, 0xa8
    stw r0, 0x1f8(r1)
    li r4, 0x79
    lfd f0, 0x1f8(r1)
    stfs f30, 0x68(r1)
    fsubs f0, f0, f28
    stfs f30, 0x6c(r1)
    fmuls f1, f29, f0
    stfs f31, 0x70(r1)
    bl fn_805F8E70
    addi r4, r1, 0x68
    addi r3, r1, 0xa8
    mr r5, r4
    bl fn_805F93C0
    stw r30, 0x18c(r1)
    mr r6, r29
    lfs f6, 0x70(r1)
    mr r7, r18
    stw r30, 0x190(r1)
    addi r4, r1, 0x108
    lfs f4, 0x6c(r1)
    addi r5, r1, 0x50
    stw r30, 0x194(r1)
    li r8, 0x0
    lfs f0, 0x68(r1)
    li r9, 0x0
    stw r30, 0x198(r1)
    lwz r3, lbl_8087EE98
    stw r30, 0x13c(r1)
    stw r30, 0x140(r1)
    stw r30, 0x144(r1)
    stw r30, 0x148(r1)
    psq_l f1, 0x0(r28), 0, 0
    lfs f2, 0x8(r28)
    stfs f2, 0x64(r1)
    psq_st f1, 0x0(r29), 0, 0
    lfs f7, 0x8(r28)
    lfs f5, 0x4(r28)
    lfs f3, 0x0(r28)
    fadds f6, f7, f6
    fadds f4, f5, f4
    fadds f0, f3, f0
    stfs f6, 0x58(r1)
    stfs f0, 0x50(r1)
    stfs f4, 0x54(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_803903E0_0000060C
    lwz r3, lbl_8087EE98
    mr r5, r29
    mr r7, r18
    addi r4, r1, 0x158
    addi r6, r1, 0x50
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ED34
    lfs f3, 0x164(r1)
    mr r31, r3
    lfs f0, 0x64(r1)
    addi r3, r1, 0x2c
    lfs f5, 0x160(r1)
    fsubs f6, f3, f0
    lfs f4, 0x60(r1)
    lfs f3, 0x15c(r1)
    lfs f0, 0x5c(r1)
    fsubs f4, f5, f4
    stfs f6, 0x34(r1)
    fsubs f0, f3, f0
    stfs f4, 0x30(r1)
    stfs f0, 0x2c(r1)
    bl fn_805F9940
    lfs f3, 0x114(r1)
    fmr f24, f1
    lfs f0, 0x64(r1)
    addi r3, r1, 0x20
    lfs f5, 0x110(r1)
    fsubs f6, f3, f0
    lfs f4, 0x60(r1)
    lfs f3, 0x10c(r1)
    lfs f0, 0x5c(r1)
    fsubs f4, f5, f4
    stfs f6, 0x28(r1)
    fsubs f0, f3, f0
    stfs f4, 0x24(r1)
    stfs f0, 0x20(r1)
    bl fn_805F9940
    cmpwi r31, 0x0
    fmr f3, f1
    beq lbl_fn_803903E0_00000584
    fsubs f0, f24, f25
    fcmpo cr0, f1, f0
    bge lbl_fn_803903E0_0000060C
lbl_fn_803903E0_00000584:
    fcmpo cr0, f26, f1
    li r17, 0x1
    ble lbl_fn_803903E0_0000060C
    psq_l f1, 0x0(r20), 0, 0
    fmr f26, f3
    lfs f2, 0x114(r1)
    psq_st f1, 0x0(r19), 0, 0
    psq_l f1, 0x0(r22), 0, 0
    stfs f2, 0x1b4(r1)
    lfs f2, 0x120(r1)
    psq_st f1, 0x0(r21), 0, 0
    psq_l f1, 0x0(r24), 0, 0
    stfs f2, 0x1c0(r1)
    lfs f2, 0x12c(r1)
    psq_st f1, 0x0(r23), 0, 0
    psq_l f1, 0x0(r26), 0, 0
    stfs f2, 0x1cc(r1)
    lfs f2, 0x138(r1)
    psq_st f1, 0x0(r25), 0, 0
    lwz r6, 0x108(r1)
    stfs f2, 0x1d8(r1)
    lwz r5, 0x13c(r1)
    lwz r4, 0x140(r1)
    lwz r3, 0x144(r1)
    lwz r0, 0x148(r1)
    psq_l f1, 0x0(r14), 0, 0
    lfs f2, 0x154(r1)
    stw r6, 0x1a8(r1)
    stw r5, 0x1dc(r1)
    stw r4, 0x1e0(r1)
    stw r3, 0x1e4(r1)
    stw r0, 0x1e8(r1)
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0x1f4(r1)
lbl_fn_803903E0_0000060C:
    addi r16, r16, 0x1
    cmpwi r16, 0x8
    blt lbl_fn_803903E0_00000408
    cmpwi r17, 0x0
    beq lbl_fn_803903E0_000006BC
    lfs f4, 0x1d8(r1)
    addi r3, r1, 0x8
    lfs f0, 0x1d0(r1)
    addi r4, r15, 0x8a4
    fmuls f6, f4, f27
    lfs f4, 0x1b4(r1)
    fmuls f8, f0, f27
    lfs f0, 0x1ac(r1)
    lfs f3, 0x1d4(r1)
    fadds f9, f4, f6
    fadds f11, f0, f8
    lfs f4, 0x8ac(r15)
    fmuls f7, f3, f27
    lfs f0, 0x7c(r1)
    lfs f3, 0x1b0(r1)
    fsubs f5, f4, f0
    fadds f10, f3, f7
    lfs f3, lbl_808858E8
    lfs f4, 0x8a4(r15)
    lfs f0, 0x74(r1)
    fadds f2, f9, f5
    fadds f12, f10, f3
    fsubs f0, f4, f0
    stfs f5, 0x4c(r1)
    stfs f12, 0xc(r1)
    fadds f4, f11, f0
    stfs f0, 0x44(r1)
    stfs f4, 0x8(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f3, 0x48(r1)
    stfs f8, 0x14(r1)
    stfs f7, 0x18(r1)
    stfs f6, 0x1c(r1)
    stfs f11, 0x38(r1)
    stfs f10, 0x3c(r1)
    stfs f9, 0x40(r1)
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x8ac(r15)
lbl_fn_803903E0_000006BC:
    addi r11, r1, 0x250
    psq_l f31, 0x2c8(r1), 0, 0
    lfd f31, 0x2c0(r1)
    psq_l f30, 0x2b8(r1), 0, 0
    lfd f30, 0x2b0(r1)
    psq_l f29, 0x2a8(r1), 0, 0
    lfd f29, 0x2a0(r1)
    psq_l f28, 0x298(r1), 0, 0
    lfd f28, 0x290(r1)
    psq_l f27, 0x288(r1), 0, 0
    lfd f27, 0x280(r1)
    psq_l f26, 0x278(r1), 0, 0
    lfd f26, 0x270(r1)
    psq_l f25, 0x268(r1), 0, 0
    lfd f25, 0x260(r1)
    psq_l f24, 0x258(r1), 0, 0
    lfd f24, 0x250(r1)
    bl _restgpr_14
    lwz r0, 0x2d4(r1)
    mtlr r0
    addi r1, r1, 0x2d0
    blr
}

asm void fn_80390A88(void)
{
    nofralloc
    stwu r1, -0x2a0(r1)
    mflr r0
    stw r0, 0x2a4(r1)
    addi r11, r1, 0x220
    stfd f31, 0x290(r1)
    psq_st f31, 0x298(r1), 0, 0
    stfd f30, 0x280(r1)
    psq_st f30, 0x288(r1), 0, 0
    stfd f29, 0x270(r1)
    psq_st f29, 0x278(r1), 0, 0
    stfd f28, 0x260(r1)
    psq_st f28, 0x268(r1), 0, 0
    stfd f27, 0x250(r1)
    psq_st f27, 0x258(r1), 0, 0
    stfd f26, 0x240(r1)
    psq_st f26, 0x248(r1), 0, 0
    stfd f25, 0x230(r1)
    psq_st f25, 0x238(r1), 0, 0
    stfd f24, 0x220(r1)
    psq_st f24, 0x228(r1), 0, 0
    bl _savegpr_22
    lwz r0, 0x8e0(r3)
    mr r29, r3
    cmpwi r0, 0x0
    beq lbl_fn_80390A88_00001520
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_800A56A8
    fneg f3, f1
    lfs f0, lbl_808858E8
    stfs f0, 0x15c(r1)
    li r4, 0x0
    lwz r3, lbl_8087EF70
    li r5, 0x1
    stfs f3, 0x158(r1)
    li r6, 0x0
    bl fn_800A56A8
    lfs f3, 0x158(r1)
    lfs f0, lbl_80885938
    fabs f3, f3
    stfs f1, 0x160(r1)
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80390A88_000007D4
    lfs f0, lbl_808858E8
    stfs f0, 0x158(r1)
lbl_fn_80390A88_000007D4:
    lfs f3, 0x160(r1)
    lfs f0, lbl_80885938
    fabs f3, f3
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80390A88_000007F4
    lfs f0, lbl_808858E8
    stfs f0, 0x160(r1)
lbl_fn_80390A88_000007F4:
    lwz r3, lbl_8087F9F8
    addi r5, r29, 0x8a4
    lwz r6, lbl_8087F0A8
    addi r4, r1, 0x14c
    lwz r0, 0xa70(r3)
    li r22, 0x0
    lfs f25, 0x8c(r6)
    li r23, 0x0
    lfs f2, 0x8ac(r29)
    cntlzw r0, r0
    psq_l f1, 0x0(r5), 0, 0
    srwi r31, r0, 5
    psq_st f1, 0x0(r4), 0, 0
    lwz r3, lbl_8087F430
    lfs f0, 0x150(r1)
    cmpwi r3, 0x0
    stfs f2, 0x154(r1)
    fadds f0, f0, f25
    stfs f0, 0x150(r1)
    beq lbl_fn_80390A88_00000854
    bl fn_80373148
    cmpwi r3, 0x0
    beq lbl_fn_80390A88_00000854
    li r23, 0x1
lbl_fn_80390A88_00000854:
    cmpwi r23, 0x0
    beq lbl_fn_80390A88_00000874
    lwz r3, lbl_8087F430
    bl fn_80373148
    lwz r0, 0xec(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80390A88_00000874
    li r22, 0x1
lbl_fn_80390A88_00000874:
    cmpwi r22, 0x0
    bne lbl_fn_80390A88_000008DC
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80390A88_000008CC
    bl fn_80373148
    cmpwi r3, 0x0
    beq lbl_fn_80390A88_000008CC
    lwz r3, lbl_8087F430
    bl fn_80373148
    lwz r0, 0x4c(r3)
    cmpwi r0, 0x3
    bne lbl_fn_80390A88_000008B0
    lfs f3, lbl_80885914
    b lbl_fn_80390A88_000008D0
lbl_fn_80390A88_000008B0:
    cmpwi r0, 0x11
    bne lbl_fn_80390A88_000008CC
    lwz r0, 0x50(r3)
    cmpwi r0, 0x2
    bne lbl_fn_80390A88_000008CC
    lfs f3, lbl_8088597C
    b lbl_fn_80390A88_000008D0
lbl_fn_80390A88_000008CC:
    lfs f3, lbl_80885910
lbl_fn_80390A88_000008D0:
    lfs f0, 0x150(r1)
    fadds f0, f0, f3
    stfs f0, 0x150(r1)
lbl_fn_80390A88_000008DC:
    lwz r5, lbl_8087F9F8
    cmpwi r5, 0x0
    beq lbl_fn_80390A88_00000948
    lwz r0, 0xa70(r5)
    cmpwi r0, 0x0
    beq lbl_fn_80390A88_00000948
    lwz r0, 0x15d8(r5)
    lwz r4, 0x48(r5)
    lwz r3, 0x4c(r5)
    cmpwi r0, 0x1
    lwz r0, 0x50(r5)
    stw r4, 0x140(r1)
    stw r3, 0xc(r1)
    stw r0, 0x1c(r1)
    bne lbl_fn_80390A88_0000091C
    li r31, 0x1
lbl_fn_80390A88_0000091C:
    lwz r3, lbl_8087F9F8
    mr r6, r31
    lwz r7, 0x8d4(r29)
    addi r4, r29, 0x8a4
    addi r5, r1, 0x158
    bl fn_805AA950
    lwz r0, 0x8d4(r29)
    cmpwi r0, 0x0
    beq lbl_fn_80390A88_00000948
    li r0, 0x0
    stw r0, 0x8d4(r29)
lbl_fn_80390A88_00000948:
    lfs f0, 0x8a0(r29)
    addi r3, r1, 0x168
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    addi r4, r1, 0x158
    addi r3, r1, 0x168
    mr r5, r4
    bl fn_805F93C0
    lwz r3, lbl_8087F0A8
    cmpwi r31, 0x0
    lfs f4, 0x158(r1)
    lfs f5, 0x64(r3)
    lfs f3, 0x15c(r1)
    lfs f0, 0x160(r1)
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    fmuls f0, f0, f5
    stfs f4, 0x158(r1)
    stfs f3, 0x15c(r1)
    stfs f0, 0x160(r1)
    beq lbl_fn_80390A88_00000E58
    lwz r0, 0x8e8(r29)
    lfs f26, lbl_808859A4
    cmpwi r0, 0x0
    beq lbl_fn_80390A88_000009B8
    lfs f27, lbl_80885A8C
    b lbl_fn_80390A88_000009BC
lbl_fn_80390A88_000009B8:
    lfs f27, lbl_8088591C
lbl_fn_80390A88_000009BC:
    cmpwi r0, 0x0
    beq lbl_fn_80390A88_000009CC
    lfs f0, lbl_80885A44
    fmuls f27, f27, f0
lbl_fn_80390A88_000009CC:
    lwz r5, lbl_8087F9F8
    addi r4, r29, 0x8bc
    lfs f2, 0x8c4(r29)
    addi r3, r1, 0x134
    lwz r0, 0x15d8(r5)
    li r6, 0x1
    psq_l f1, 0x0(r4), 0, 0
    cmpwi r0, 0x1
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x13c(r1)
    bne lbl_fn_80390A88_00000A54
    li r3, 0x0
    bne lbl_fn_80390A88_00000A10
    lwz r0, 0x15a8(r5)
    cmpwi r0, 0x0
    ble lbl_fn_80390A88_00000A10
    li r3, 0x1
lbl_fn_80390A88_00000A10:
    cmpwi r3, 0x0
    bne lbl_fn_80390A88_00000A50
    lbz r0, 0x15ed(r5)
    lfs f26, lbl_808859A4
    cmpwi r0, 0x0
    beq lbl_fn_80390A88_00000A30
    lfs f27, lbl_80885AC8
    b lbl_fn_80390A88_00000A34
lbl_fn_80390A88_00000A30:
    lfs f27, lbl_80885908
lbl_fn_80390A88_00000A34:
    addi r4, r5, 0x15dc
    lfs f2, 0x15e4(r5)
    addi r3, r1, 0x134
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x13c(r1)
    b lbl_fn_80390A88_00000A54
lbl_fn_80390A88_00000A50:
    li r6, 0x0
lbl_fn_80390A88_00000A54:
    cmpwi r6, 0x0
    beq lbl_fn_80390A88_00000E58
    lfs f2, 0x8ac(r29)
    addi r4, r29, 0x8a4
    addi r3, r1, 0x128
    psq_l f1, 0x0(r4), 0, 0
    frsp f5, f2
    psq_st f1, 0x0(r3), 0, 0
    lfs f0, 0x160(r1)
    addi r5, r1, 0x158
    stfs f2, 0x130(r1)
    addi r27, r1, 0x11c
    fadds f5, f5, f0
    lfs f0, 0x13c(r1)
    lfs f4, 0x12c(r1)
    addi r3, r1, 0x110
    lfs f3, 0x15c(r1)
    fsubs f0, f5, f0
    fadds f4, f4, f3
    lfs f3, 0x138(r1)
    lfs f6, 0x128(r1)
    lfs f5, 0x158(r1)
    fsubs f3, f4, f3
    lfs f4, 0x134(r1)
    fadds f5, f6, f5
    psq_l f1, 0x0(r5), 0, 0
    lfs f2, 0x160(r1)
    psq_st f1, 0x0(r27), 0, 0
    fsubs f4, f5, f4
    stfs f2, 0x124(r1)
    stfs f3, 0x114(r1)
    stfs f4, 0x110(r1)
    stfs f0, 0x118(r1)
    bl fn_805F9940
    lfs f6, lbl_808858E8
    fcmpo cr0, f1, f6
    ble lbl_fn_80390A88_00000B1C
    lfs f3, 0x128(r1)
    lfs f0, 0x158(r1)
    lfs f5, 0x12c(r1)
    fadds f6, f3, f0
    lfs f4, 0x15c(r1)
    lfs f3, 0x130(r1)
    lfs f0, 0x160(r1)
    fadds f4, f5, f4
    stfs f6, 0x128(r1)
    fadds f0, f3, f0
    stfs f4, 0x12c(r1)
    stfs f0, 0x130(r1)
    b lbl_fn_80390A88_00000C10
lbl_fn_80390A88_00000B1C:
    lfs f5, 0x12c(r1)
    addi r4, r1, 0xbc
    lfs f3, 0x120(r1)
    mr r3, r27
    lfs f4, 0x128(r1)
    fadds f5, f5, f3
    lfs f0, 0x11c(r1)
    lfs f3, 0x138(r1)
    fadds f7, f4, f0
    lfs f0, 0x134(r1)
    fsubs f8, f5, f3
    lfs f4, 0x130(r1)
    fsubs f9, f7, f0
    lfs f3, 0x124(r1)
    stfs f8, 0xc0(r1)
    fadds f3, f4, f3
    lfs f0, 0x13c(r1)
    stfs f9, 0xbc(r1)
    fsubs f2, f3, f0
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    stfs f7, 0xb0(r1)
    stfs f5, 0xb4(r1)
    stfs f3, 0xb8(r1)
    stfs f2, 0xc4(r1)
    stfs f2, 0x124(r1)
    stfs f6, 0x120(r1)
    bl fn_805F9920
    fabs f3, f1
    lfs f0, lbl_808859C8
    frsp f3, f3
    fcmpo cr0, f3, f0
    blt lbl_fn_80390A88_00000BAC
    mr r3, r27
    mr r4, r27
    bl fn_805F98D0
lbl_fn_80390A88_00000BAC:
    lfs f0, lbl_808859C4
    addi r4, r1, 0xa4
    lfs f5, 0x11c(r1)
    addi r3, r1, 0x128
    fadds f6, f0, f26
    lfs f0, 0x120(r1)
    lfs f3, 0x124(r1)
    lfs f4, 0x13c(r1)
    fmuls f8, f0, f6
    lfs f0, 0x134(r1)
    fmuls f7, f3, f6
    lfs f3, 0x138(r1)
    fmuls f5, f5, f6
    stfs f8, 0x9c(r1)
    fadds f3, f8, f3
    stfs f7, 0xa0(r1)
    fadds f0, f5, f0
    fadds f2, f7, f4
    stfs f3, 0xa8(r1)
    stfs f0, 0xa4(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f5, 0x98(r1)
    stfs f2, 0xac(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x130(r1)
lbl_fn_80390A88_00000C10:
    lfs f3, 0x130(r1)
    addi r27, r1, 0x11c
    lfs f0, 0x13c(r1)
    addi r4, r1, 0x8c
    lfs f5, 0x12c(r1)
    mr r3, r27
    fsubs f2, f3, f0
    lfs f4, 0x138(r1)
    lfs f3, 0x128(r1)
    lfs f0, 0x134(r1)
    fsubs f4, f5, f4
    stfs f2, 0x94(r1)
    fsubs f0, f3, f0
    stfs f4, 0x90(r1)
    stfs f0, 0x8c(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0x124(r1)
    bl fn_805F9940
    fcmpo cr0, f27, f1
    bge lbl_fn_80390A88_00000CCC
    mr r3, r27
    mr r4, r27
    bl fn_805F98D0
    lfs f4, 0x124(r1)
    addi r4, r1, 0x80
    lfs f0, 0x120(r1)
    addi r3, r1, 0x128
    lfs f3, 0x11c(r1)
    fmuls f4, f4, f27
    fmuls f5, f0, f27
    lfs f0, 0x13c(r1)
    fmuls f6, f3, f27
    lfs f3, 0x138(r1)
    fadds f2, f0, f4
    lfs f0, 0x134(r1)
    fadds f3, f3, f5
    stfs f6, 0x74(r1)
    fadds f0, f0, f6
    stfs f3, 0x84(r1)
    stfs f0, 0x80(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f5, 0x78(r1)
    stfs f4, 0x7c(r1)
    stfs f2, 0x88(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x130(r1)
lbl_fn_80390A88_00000CCC:
    lfs f4, lbl_80885914
    lfs f3, 0x138(r1)
    lfs f0, 0x12c(r1)
    fadds f4, f4, f3
    fcmpo cr0, f4, f0
    bge lbl_fn_80390A88_00000CE8
    b lbl_fn_80390A88_00000CEC
lbl_fn_80390A88_00000CE8:
    fmr f4, f0
lbl_fn_80390A88_00000CEC:
    lfs f3, 0x138(r1)
    lfs f0, lbl_80885914
    fsubs f5, f3, f0
    fcmpo cr0, f5, f4
    ble lbl_fn_80390A88_00000D04
    b lbl_fn_80390A88_00000D1C
lbl_fn_80390A88_00000D04:
    fadds f5, f0, f3
    lfs f0, 0x12c(r1)
    fcmpo cr0, f5, f0
    bge lbl_fn_80390A88_00000D18
    b lbl_fn_80390A88_00000D1C
lbl_fn_80390A88_00000D18:
    fmr f5, f0
lbl_fn_80390A88_00000D1C:
    addi r5, r29, 0x8a4
    lwz r4, lbl_8087F0A8
    addi r27, r1, 0x68
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    li r22, 0x0
    lwz r3, lbl_8087F430
    li r23, 0x0
    lfs f3, 0x8c(r4)
    lfs f0, 0x6c(r1)
    cmpwi r3, 0x0
    lfs f2, 0x8ac(r29)
    fadds f0, f0, f3
    stfs f5, 0x12c(r1)
    stfs f2, 0x70(r1)
    stfs f0, 0x6c(r1)
    beq lbl_fn_80390A88_00000D70
    bl fn_80373148
    cmpwi r3, 0x0
    beq lbl_fn_80390A88_00000D70
    li r23, 0x1
lbl_fn_80390A88_00000D70:
    cmpwi r23, 0x0
    beq lbl_fn_80390A88_00000D90
    lwz r3, lbl_8087F430
    bl fn_80373148
    lwz r0, 0xec(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80390A88_00000D90
    li r22, 0x1
lbl_fn_80390A88_00000D90:
    cmpwi r22, 0x0
    bne lbl_fn_80390A88_00000DF8
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80390A88_00000DE8
    bl fn_80373148
    cmpwi r3, 0x0
    beq lbl_fn_80390A88_00000DE8
    lwz r3, lbl_8087F430
    bl fn_80373148
    lwz r0, 0x4c(r3)
    cmpwi r0, 0x3
    bne lbl_fn_80390A88_00000DCC
    lfs f3, lbl_80885914
    b lbl_fn_80390A88_00000DEC
lbl_fn_80390A88_00000DCC:
    cmpwi r0, 0x11
    bne lbl_fn_80390A88_00000DE8
    lwz r0, 0x50(r3)
    cmpwi r0, 0x2
    bne lbl_fn_80390A88_00000DE8
    lfs f3, lbl_8088597C
    b lbl_fn_80390A88_00000DEC
lbl_fn_80390A88_00000DE8:
    lfs f3, lbl_80885910
lbl_fn_80390A88_00000DEC:
    lfs f0, 0x6c(r1)
    fadds f0, f0, f3
    stfs f0, 0x6c(r1)
lbl_fn_80390A88_00000DF8:
    addi r3, r1, 0x14c
    psq_l f1, 0x0(r27), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    addi r4, r1, 0x5c
    lfs f2, 0x70(r1)
    addi r3, r1, 0x158
    lfs f3, 0x12c(r1)
    lfs f0, 0x150(r1)
    lfs f4, 0x130(r1)
    fsubs f5, f3, f0
    lfs f3, 0x128(r1)
    lfs f0, 0x14c(r1)
    fsubs f4, f4, f2
    stfs f2, 0x154(r1)
    fsubs f3, f3, f0
    stfs f5, 0x60(r1)
    fmr f2, f4
    lfs f0, lbl_808858E8
    stfs f3, 0x5c(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f4, 0x64(r1)
    stfs f2, 0x160(r1)
    stfs f0, 0x15c(r1)
lbl_fn_80390A88_00000E58:
    lwz r3, lbl_8087F430
    lis r4, 0x8000
    addi r30, r4, 0x8
    li r22, 0x0
    cmpwi r3, 0x0
    li r23, 0x0
    beq lbl_fn_80390A88_00000E84
    bl fn_80373148
    cmpwi r3, 0x0
    beq lbl_fn_80390A88_00000E84
    li r23, 0x1
lbl_fn_80390A88_00000E84:
    cmpwi r23, 0x0
    beq lbl_fn_80390A88_00000EA4
    lwz r3, lbl_8087F430
    bl fn_80373148
    lwz r0, 0xec(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80390A88_00000EA4
    li r22, 0x1
lbl_fn_80390A88_00000EA4:
    cmpwi r22, 0x0
    beq lbl_fn_80390A88_00000EDC
    lfs f3, 0x8c8(r29)
    fneg f4, f25
    lfs f0, 0x8a8(r29)
    lis r30, 0x800
    lfs f5, 0x150(r1)
    fsubs f6, f3, f0
    lfs f3, lbl_808859E4
    lfs f0, 0x15c(r1)
    fadds f5, f5, f6
    fmadds f0, f3, f4, f0
    stfs f5, 0x150(r1)
    stfs f0, 0x15c(r1)
lbl_fn_80390A88_00000EDC:
    cmpwi r31, 0x0
    beq lbl_fn_80390A88_000012FC
    lwz r3, lbl_8087F9F8
    cmpwi r3, 0x0
    beq lbl_fn_80390A88_00000F24
    lwz r0, 0x15d8(r3)
    li r4, 0x0
    cmpwi r0, 0x1
    bne lbl_fn_80390A88_00000F10
    lwz r0, 0x15a8(r3)
    cmpwi r0, 0x0
    ble lbl_fn_80390A88_00000F10
    li r4, 0x1
lbl_fn_80390A88_00000F10:
    cmpwi r4, 0x0
    beq lbl_fn_80390A88_00000F24
    addi r4, r29, 0x8a4
    bl fn_805AA830
    b lbl_fn_80390A88_00001414
lbl_fn_80390A88_00000F24:
    lwz r3, lbl_8087F430
    li r0, 0x0
    stw r0, 0x1cc(r1)
    li r22, 0x0
    cmpwi r3, 0x0
    li r23, 0x0
    stw r0, 0x1d0(r1)
    stw r0, 0x1d4(r1)
    stw r0, 0x1d8(r1)
    beq lbl_fn_80390A88_00000F5C
    bl fn_80373148
    cmpwi r3, 0x0
    beq lbl_fn_80390A88_00000F5C
    li r23, 0x1
lbl_fn_80390A88_00000F5C:
    cmpwi r23, 0x0
    beq lbl_fn_80390A88_00000F7C
    lwz r3, lbl_8087F430
    bl fn_80373148
    lwz r0, 0xec(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80390A88_00000F7C
    li r22, 0x1
lbl_fn_80390A88_00000F7C:
    cmpwi r22, 0x0
    beq lbl_fn_80390A88_00001288
    lwz r3, lbl_8087F9F8
    li r31, 0x0
    li r4, 0x0
    li r0, 0x0
    cmpwi r3, 0x0
    beq lbl_fn_80390A88_00000FAC
    lwz r3, 0x15ac(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80390A88_00000FAC
    li r0, 0x1
lbl_fn_80390A88_00000FAC:
    cmpwi r0, 0x0
    beq lbl_fn_80390A88_00000FD0
    lwz r3, lbl_8087F9F8
    lwz r3, 0x15ac(r3)
    lwz r0, 0x48(r3)
    cntlzw r0, r0
    srwi. r0, r0, 5
    bne lbl_fn_80390A88_00000FD0
    li r4, 0x1
lbl_fn_80390A88_00000FD0:
    cmpwi r4, 0x0
    beq lbl_fn_80390A88_00000FE4
    lwz r3, lbl_8087F9F8
    lfs f0, 0x15e0(r3)
    b lbl_fn_80390A88_00000FE8
lbl_fn_80390A88_00000FE4:
    lfs f0, 0x8c0(r29)
lbl_fn_80390A88_00000FE8:
    fctiwz f0, f0
    lis r3, lbl_8074E008@ha
    lfs f30, lbl_808858E8
    addi r25, r1, 0x1a8
    stfd f0, 0x1e8(r1)
    addi r26, r1, 0xf8
    lwz r0, 0x1ec(r1)
    addi r24, r1, 0xec
    lfd f26, lbl_8074E008@l(r3)
    addi r22, r29, 0x8a4
    lfs f27, lbl_80885974
    xoris r27, r0, 0x8000
    lfs f28, lbl_80885A44
    addi r23, r1, 0x14c
    lfs f29, lbl_808859A4
    lis r28, 0x4330
    lfs f24, lbl_808859E4
    lfs f31, lbl_808859E0
lbl_fn_80390A88_00001030:
    fmr f1, f25
    lwz r3, lbl_8087EE98
    mr r7, r30
    addi r4, r1, 0x198
    addi r5, r1, 0x14c
    addi r6, r1, 0x158
    li r8, 0x0
    li r9, -0x1
    bl fn_8004D388
    cmpwi r3, 0x0
    beq lbl_fn_80390A88_00001224
    stw r27, 0x1ec(r1)
    lfs f0, 0x1ac(r1)
    stw r28, 0x1e8(r1)
    lfs f7, 0x1b0(r1)
    lfd f3, 0x1e8(r1)
    lfs f4, 0x154(r1)
    fsubs f3, f3, f26
    lfs f6, 0x1ac(r1)
    fsubs f7, f7, f4
    lfs f5, 0x150(r1)
    lfs f4, 0x1a8(r1)
    fsubs f0, f0, f3
    lfs f3, 0x14c(r1)
    fsubs f5, f6, f5
    stfs f7, 0x10c(r1)
    fsubs f3, f4, f3
    fcmpo cr0, f0, f27
    stfs f5, 0x108(r1)
    stfs f3, 0x104(r1)
    ble lbl_fn_80390A88_000011D0
    psq_l f1, 0x0(r25), 0, 0
    mr r5, r26
    psq_st f1, 0x0(r24), 0, 0
    mr r6, r24
    lfs f2, 0x1b0(r1)
    mr r7, r30
    lfs f0, 0xf0(r1)
    addi r4, r1, 0x198
    psq_st f1, 0x0(r26), 0, 0
    li r8, 0x0
    fnmsubs f0, f28, f25, f0
    lwz r3, lbl_8087EE98
    stfs f2, 0x100(r1)
    li r9, -0x1
    addi r31, r31, 0x1
    stfs f2, 0xf4(r1)
    stfs f0, 0xf0(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_80390A88_000011A8
    lfs f5, 0x1c8(r1)
    lfs f4, 0x1c0(r1)
    fmuls f0, f5, f5
    fmadds f0, f4, f4, f0
    fcmpo cr0, f0, f29
    ble lbl_fn_80390A88_000011A8
    lfs f3, 0x160(r1)
    lfs f0, 0x158(r1)
    fmuls f3, f3, f3
    fmadds f0, f0, f0, f3
    fcmpo cr0, f0, f29
    ble lbl_fn_80390A88_000011A8
    fneg f0, f5
    addi r3, r1, 0xe0
    fneg f3, f4
    stfs f30, 0xe4(r1)
    mr r4, r3
    stfs f3, 0xe0(r1)
    stfs f0, 0xe8(r1)
    bl fn_805F98D0
    stfs f30, 0x15c(r1)
    addi r3, r1, 0xe0
    addi r4, r1, 0x158
    bl fn_805F9990
    lfs f4, 0xe8(r1)
    fneg f0, f25
    lfs f3, 0xe0(r1)
    fmuls f6, f4, f1
    lfs f5, 0xe4(r1)
    fmuls f7, f3, f1
    lfs f4, 0x158(r1)
    lfs f3, 0x160(r1)
    fmuls f5, f5, f1
    fsubs f4, f4, f7
    stfs f7, 0xd4(r1)
    fsubs f3, f3, f6
    fmuls f0, f31, f0
    stfs f5, 0xd8(r1)
    stfs f6, 0xdc(r1)
    stfs f4, 0x158(r1)
    stfs f3, 0x160(r1)
    stfs f0, 0x15c(r1)
    b lbl_fn_80390A88_00001260
lbl_fn_80390A88_000011A8:
    lfs f4, 0x158(r1)
    lfs f3, 0x15c(r1)
    lfs f0, 0x160(r1)
    fmuls f4, f4, f24
    fmuls f3, f3, f24
    fmuls f0, f0, f24
    stfs f4, 0x158(r1)
    stfs f3, 0x15c(r1)
    stfs f0, 0x160(r1)
    b lbl_fn_80390A88_00001260
lbl_fn_80390A88_000011D0:
    lfs f3, 0x8c8(r29)
    lfs f0, 0x8a8(r29)
    fadds f3, f3, f5
    stfs f3, 0x8c8(r29)
    fcmpo cr0, f3, f0
    bge lbl_fn_80390A88_000011EC
    stfs f0, 0x8c8(r29)
lbl_fn_80390A88_000011EC:
    lfs f7, lbl_808858E8
    lfs f0, 0x8a8(r29)
    lfs f6, 0x8a4(r29)
    fadds f4, f0, f7
    lfs f5, 0x104(r1)
    lfs f3, 0x8ac(r29)
    lfs f0, 0x10c(r1)
    fadds f5, f6, f5
    stfs f7, 0x108(r1)
    fadds f0, f3, f0
    stfs f5, 0x8a4(r29)
    stfs f4, 0x8a8(r29)
    stfs f0, 0x8ac(r29)
    b lbl_fn_80390A88_00001414
lbl_fn_80390A88_00001224:
    lfs f0, lbl_808858E8
    stfs f0, 0x15c(r1)
    lfs f0, 0x158(r1)
    lfs f3, 0x8a4(r29)
    lfs f4, 0x8a8(r29)
    fadds f0, f3, f0
    lfs f3, 0x8ac(r29)
    stfs f0, 0x8a4(r29)
    lfs f0, 0x15c(r1)
    fadds f0, f4, f0
    stfs f0, 0x8a8(r29)
    lfs f0, 0x160(r1)
    fadds f0, f3, f0
    stfs f0, 0x8ac(r29)
    b lbl_fn_80390A88_00001414
lbl_fn_80390A88_00001260:
    psq_l f1, 0x0(r22), 0, 0
    cmpwi r31, 0x3
    lfs f2, 0x8(r22)
    stfs f2, 0x154(r1)
    psq_st f1, 0x0(r23), 0, 0
    lfs f0, 0x8c8(r29)
    fadds f0, f0, f25
    stfs f0, 0x150(r1)
    blt lbl_fn_80390A88_00001030
    b lbl_fn_80390A88_00001414
lbl_fn_80390A88_00001288:
    fmr f1, f25
    lwz r3, lbl_8087EE98
    mr r7, r30
    addi r4, r1, 0x198
    addi r5, r1, 0x14c
    addi r6, r1, 0x158
    li r8, 0x0
    li r9, 0x0
    bl fn_8004D388
    lfs f5, 0x1b0(r1)
    lfs f4, 0x154(r1)
    lfs f3, 0x1a8(r1)
    fsubs f6, f5, f4
    lfs f0, 0x14c(r1)
    lfs f5, lbl_808858E8
    fsubs f7, f3, f0
    lfs f4, 0x8a4(r29)
    lfs f3, 0x8a8(r29)
    lfs f0, 0x8ac(r29)
    fadds f4, f4, f7
    stfs f7, 0xc8(r1)
    fadds f3, f3, f5
    fadds f0, f0, f6
    stfs f6, 0xd0(r1)
    stfs f5, 0xcc(r1)
    stfs f4, 0x8a4(r29)
    stfs f3, 0x8a8(r29)
    stfs f0, 0x8ac(r29)
    b lbl_fn_80390A88_00001414
lbl_fn_80390A88_000012FC:
    lwz r3, lbl_8087F9F8
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80390A88_00001398
    lwz r4, 0x4c(r3)
    addi r3, r1, 0x38
    lwz r12, 0x0(r4)
    lwz r12, 0xc8(r12)
    mtctr r12
    bctrl
    lfs f5, 0x40(r1)
    lfs f4, 0x8ac(r29)
    lfs f3, 0x3c(r1)
    fsubs f6, f5, f4
    lfs f0, 0x8a8(r29)
    lfs f4, 0x38(r1)
    fsubs f7, f3, f0
    lfs f5, lbl_808859E0
    lfs f3, 0x8a4(r29)
    fmuls f9, f6, f5
    lfs f0, 0x8ac(r29)
    fsubs f8, f4, f3
    fmuls f10, f7, f5
    lfs f3, 0x8a8(r29)
    fadds f0, f0, f9
    fmuls f5, f8, f5
    lfs f4, 0x8a4(r29)
    fadds f3, f3, f10
    stfs f8, 0x44(r1)
    fadds f4, f4, f5
    stfs f7, 0x48(r1)
    stfs f6, 0x4c(r1)
    stfs f5, 0x50(r1)
    stfs f10, 0x54(r1)
    stfs f9, 0x58(r1)
    stfs f4, 0x8a4(r29)
    stfs f3, 0x8a8(r29)
    stfs f0, 0x8ac(r29)
    b lbl_fn_80390A88_00001414
lbl_fn_80390A88_00001398:
    cmpwi r0, 0x1
    bne lbl_fn_80390A88_00001414
    lwz r3, 0x50(r3)
    lfs f4, 0x8ac(r29)
    lfs f5, 0x18(r3)
    lfs f3, 0x14(r3)
    fsubs f6, f5, f4
    lfs f0, 0x8a8(r29)
    lfs f4, 0x10(r3)
    fsubs f7, f3, f0
    lfs f3, 0x8a4(r29)
    lfs f5, lbl_808859E0
    fsubs f8, f4, f3
    lfs f0, 0x8ac(r29)
    fmuls f9, f6, f5
    fmuls f10, f7, f5
    lfs f3, 0x8a8(r29)
    fmuls f5, f8, f5
    lfs f4, 0x8a4(r29)
    fadds f0, f0, f9
    fadds f3, f3, f10
    fadds f4, f4, f5
    stfs f8, 0x20(r1)
    stfs f7, 0x24(r1)
    stfs f6, 0x28(r1)
    stfs f5, 0x2c(r1)
    stfs f10, 0x30(r1)
    stfs f9, 0x34(r1)
    stfs f4, 0x8a4(r29)
    stfs f3, 0x8a8(r29)
    stfs f0, 0x8ac(r29)
lbl_fn_80390A88_00001414:
    lfs f24, lbl_808858E8
    li r4, 0x0
    lwz r3, lbl_8087EF70
    bl fn_800A58D0
    cmpwi r3, 0x0
    beq lbl_fn_80390A88_00001464
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x2
    li r6, 0x0
    bl fn_800A56A8
    fneg f4, f1
    lfs f0, lbl_80885938
    fabs f3, f4
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80390A88_0000145C
    lfs f4, lbl_808858E8
lbl_fn_80390A88_0000145C:
    lfs f0, lbl_80885A0C
    fmuls f24, f4, f0
lbl_fn_80390A88_00001464:
    lwz r3, lbl_8087F9F8
    cmpwi r3, 0x0
    beq lbl_fn_80390A88_00001488
    lwz r0, 0xa70(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80390A88_00001488
    lwz r0, 0xa78(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80390A88_00001520
lbl_fn_80390A88_00001488:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x2
    bl fn_800A55D4
    cmpwi r3, 0x0
    beq lbl_fn_80390A88_000014A8
    lfs f0, lbl_8088592C
    fsubs f24, f24, f0
lbl_fn_80390A88_000014A8:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x3
    bl fn_800A55D4
    cmpwi r3, 0x0
    beq lbl_fn_80390A88_000014C8
    lfs f0, lbl_8088592C
    fadds f24, f24, f0
lbl_fn_80390A88_000014C8:
    fabs f3, f24
    lfs f0, lbl_808859A4
    frsp f3, f3
    fcmpo cr0, f3, f0
    ble lbl_fn_80390A88_00001520
    lfs f0, 0x8a0(r29)
    lis r3, lbl_8074E010@ha
    lfd f2, lbl_8074E010@l(r3)
    fadds f1, f24, f0
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_808858EC
    fcmpo cr0, f3, f0
    ble lbl_fn_80390A88_00001508
    lfs f0, lbl_808859D4
    fsubs f3, f3, f0
lbl_fn_80390A88_00001508:
    lfs f0, lbl_808859D8
    fcmpo cr0, f3, f0
    bge lbl_fn_80390A88_0000151C
    lfs f0, lbl_808859D4
    fadds f3, f3, f0
lbl_fn_80390A88_0000151C:
    stfs f3, 0x8a0(r29)
lbl_fn_80390A88_00001520:
    addi r11, r1, 0x220
    psq_l f31, 0x298(r1), 0, 0
    lfd f31, 0x290(r1)
    psq_l f30, 0x288(r1), 0, 0
    lfd f30, 0x280(r1)
    psq_l f29, 0x278(r1), 0, 0
    lfd f29, 0x270(r1)
    psq_l f28, 0x268(r1), 0, 0
    lfd f28, 0x260(r1)
    psq_l f27, 0x258(r1), 0, 0
    lfd f27, 0x250(r1)
    psq_l f26, 0x248(r1), 0, 0
    lfd f26, 0x240(r1)
    psq_l f25, 0x238(r1), 0, 0
    lfd f25, 0x230(r1)
    psq_l f24, 0x228(r1), 0, 0
    lfd f24, 0x220(r1)
    bl _restgpr_22
    lwz r0, 0x2a4(r1)
    mtlr r0
    addi r1, r1, 0x2a0
    blr
}

asm void fn_803918EC(void)
{
    nofralloc
    stwu r1, -0x4b0(r1)
    mflr r0
    stw r0, 0x4b4(r1)
    stfd f31, 0x4a0(r1)
    psq_st f31, 0x4a8(r1), 0, 0
    stfd f30, 0x490(r1)
    psq_st f30, 0x498(r1), 0, 0
    stfd f29, 0x480(r1)
    psq_st f29, 0x488(r1), 0, 0
    stfd f28, 0x470(r1)
    psq_st f28, 0x478(r1), 0, 0
    stfd f27, 0x460(r1)
    psq_st f27, 0x468(r1), 0, 0
    stfd f26, 0x450(r1)
    psq_st f26, 0x458(r1), 0, 0
    stfd f25, 0x440(r1)
    psq_st f25, 0x448(r1), 0, 0
    stfd f24, 0x430(r1)
    psq_st f24, 0x438(r1), 0, 0
    stw r31, 0x42c(r1)
    mr r31, r3
    stw r30, 0x428(r1)
    stw r29, 0x424(r1)
    stw r28, 0x420(r1)
    lwz r0, 0x8f4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803918EC_00001CF4
    lfs f9, 0x210(r3)
    addi r5, r1, 0xd4
    lfs f8, 0x204(r3)
    addi r6, r1, 0x5c
    lfs f7, 0x20c(r3)
    addi r4, r1, 0xc8
    fsubs f9, f9, f8
    lfs f0, 0x200(r3)
    lfs f2, 0x204(r3)
    fsubs f8, f7, f0
    lfs f7, 0x208(r3)
    lfs f0, 0x1fc(r3)
    psq_l f1, 0x1fc(r3), 0, 0
    mr r3, r4
    fsubs f0, f7, f0
    stfs f2, 0xdc(r1)
    fmr f2, f9
    stfs f8, 0x60(r1)
    stfs f0, 0x5c(r1)
    psq_st f1, 0x0(r5), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f9, 0x64(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xd0(r1)
    bl fn_805F98D0
    psq_l f1, 0x214(r31), 0, 0
    addi r3, r1, 0xbc
    lfs f2, 0x21c(r31)
    lwz r4, lbl_8087F9C0
    psq_st f1, 0x0(r3), 0, 0
    cmpwi r4, 0x0
    stfs f2, 0xc4(r1)
    lfs f31, 0x240(r31)
    lfs f30, 0x8fc(r31)
    beq lbl_fn_803918EC_00001684
    lwz r0, 0x50(r4)
    rlwinm r0, r0, 0, 27, 27
    cmplwi r0, 0x10
    beq lbl_fn_803918EC_00001684
    lfs f30, lbl_808858E8
lbl_fn_803918EC_00001684:
    lwz r3, 0x8f4(r31)
    li r4, 0x0
    bl fn_805BDCC0
    lfs f7, 0x14(r3)
    mr r28, r3
    lfs f0, 0x8f8(r31)
    fcmpo cr0, f0, f7
    cror eq, gt, eq
    bne lbl_fn_803918EC_000016B0
    lfs f0, lbl_808858E8
    stfs f0, 0x8f8(r31)
lbl_fn_803918EC_000016B0:
    lfs f1, 0x8f8(r31)
    mr r3, r28
    addi r4, r1, 0xb0
    li r5, 0x4
    li r6, 0x5
    li r7, 0x6
    bl fn_805BF414
    lfs f0, lbl_80885920
    addi r30, r1, 0x3f0
    lfs f7, 0xb8(r1)
    lfs f9, 0xb0(r1)
    fmuls f10, f0, f7
    lfs f8, 0xb4(r1)
    fmuls f9, f0, f9
    lfs f7, lbl_808858E8
    fmuls f8, f0, f8
    lfs f0, lbl_808858F8
    fmuls f1, f10, f30
    stfs f7, 0x41c(r1)
    fmuls f9, f9, f30
    fmuls f8, f8, f30
    stfs f1, 0xb8(r1)
    fcmpu cr0, f7, f1
    stfs f9, 0xb0(r1)
    stfs f8, 0xb4(r1)
    stfs f7, 0x414(r1)
    stfs f7, 0x410(r1)
    stfs f7, 0x40c(r1)
    stfs f7, 0x408(r1)
    stfs f7, 0x400(r1)
    stfs f7, 0x3fc(r1)
    stfs f7, 0x3f8(r1)
    stfs f7, 0x3f4(r1)
    stfs f0, 0x418(r1)
    stfs f0, 0x404(r1)
    stfs f0, 0x3f0(r1)
    beq lbl_fn_803918EC_00001794
    addi r3, r1, 0x2a0
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x2a0
    addi r5, r1, 0x270
    bl fn_805F89F0
    addi r3, r1, 0x270
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
lbl_fn_803918EC_00001794:
    lfs f0, lbl_808858E8
    lfs f1, 0xb4(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_803918EC_000017F4
    addi r3, r1, 0x300
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x300
    addi r5, r1, 0x2d0
    bl fn_805F89F0
    addi r3, r1, 0x2d0
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
lbl_fn_803918EC_000017F4:
    lfs f0, lbl_808858E8
    lfs f1, 0xb0(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_803918EC_00001854
    addi r3, r1, 0x360
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x360
    addi r5, r1, 0x330
    bl fn_805F89F0
    addi r3, r1, 0x330
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
lbl_fn_803918EC_00001854:
    addi r4, r1, 0xbc
    addi r3, r1, 0x3f0
    mr r5, r4
    bl fn_805F93C0
    lfs f2, 0xd0(r1)
    addi r3, r1, 0xc8
    lfs f0, lbl_808859C8
    addi r30, r1, 0x80
    fabs f7, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    frsp f7, f7
    stfs f2, 0x88(r1)
    fcmpo cr0, f7, f0
    bge lbl_fn_803918EC_000018B4
    lfs f7, 0x80(r1)
    lfs f0, lbl_808858E8
    fcmpo cr0, f7, f0
    ble lbl_fn_803918EC_000018A8
    lfs f0, lbl_808859CC
    b lbl_fn_803918EC_000018AC
lbl_fn_803918EC_000018A8:
    lfs f0, lbl_808859D0
lbl_fn_803918EC_000018AC:
    stfs f0, 0x54(r1)
    b lbl_fn_803918EC_000018C8
lbl_fn_803918EC_000018B4:
    frsp f2, f2
    lfs f1, 0x80(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x54(r1)
lbl_fn_803918EC_000018C8:
    lfs f0, 0x54(r1)
    addi r3, r1, 0x200
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f7, lbl_808858E8
    addi r4, r1, 0x44
    lfs f24, 0x208(r1)
    mr r5, r4
    lfs f25, 0x204(r1)
    addi r3, r1, 0x230
    lfs f26, 0x200(r1)
    lfs f27, 0x218(r1)
    lfs f28, 0x214(r1)
    lfs f29, 0x210(r1)
    lfs f13, 0x228(r1)
    lfs f12, 0x224(r1)
    lfs f11, 0x220(r1)
    lfs f10, 0x22c(r1)
    lfs f9, 0x21c(r1)
    lfs f8, 0x20c(r1)
    lfs f0, lbl_808858F8
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x88(r1)
    stfs f7, 0x260(r1)
    stfs f7, 0x264(r1)
    stfs f7, 0x268(r1)
    stfs f0, 0x26c(r1)
    stfs f26, 0x14(r1)
    stfs f25, 0x18(r1)
    stfs f24, 0x1c(r1)
    stfs f26, 0x230(r1)
    stfs f25, 0x234(r1)
    stfs f24, 0x238(r1)
    stfs f29, 0x20(r1)
    stfs f28, 0x24(r1)
    stfs f27, 0x28(r1)
    stfs f29, 0x240(r1)
    stfs f28, 0x244(r1)
    stfs f27, 0x248(r1)
    stfs f11, 0x2c(r1)
    stfs f12, 0x30(r1)
    stfs f13, 0x34(r1)
    stfs f11, 0x250(r1)
    stfs f12, 0x254(r1)
    stfs f13, 0x258(r1)
    stfs f8, 0x38(r1)
    stfs f9, 0x3c(r1)
    stfs f10, 0x40(r1)
    stfs f8, 0x23c(r1)
    stfs f9, 0x24c(r1)
    stfs f10, 0x25c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x4c(r1)
    bl fn_805F9750
    lfs f2, 0x4c(r1)
    lfs f0, lbl_808859C8
    fabs f7, f2
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_803918EC_000019E4
    lfs f7, 0x48(r1)
    lfs f0, lbl_808858E8
    fcmpo cr0, f7, f0
    ble lbl_fn_803918EC_000019D4
    lfs f0, lbl_808859CC
    b lbl_fn_803918EC_000019D8
lbl_fn_803918EC_000019D4:
    lfs f0, lbl_808859D0
lbl_fn_803918EC_000019D8:
    fneg f0, f0
    stfs f0, 0x50(r1)
    b lbl_fn_803918EC_000019F8
lbl_fn_803918EC_000019E4:
    lfs f1, 0x48(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x50(r1)
lbl_fn_803918EC_000019F8:
    addi r3, r1, 0x50
    lfs f2, lbl_808858E8
    psq_l f1, 0x0(r3), 0, 0
    addi r29, r1, 0x3c0
    psq_st f1, 0x0(r30), 0, 0
    frsp f7, f2
    lfs f0, lbl_808858F8
    fcmpu cr0, f2, f2
    lfs f10, 0xb0(r1)
    lfs f9, 0x80(r1)
    lfs f8, 0xb8(r1)
    fadds f11, f10, f9
    lfs f10, 0xb4(r1)
    fadds f7, f8, f7
    lfs f9, 0x84(r1)
    stfs f2, 0x58(r1)
    fadds f8, f10, f9
    stfs f2, 0x88(r1)
    stfs f11, 0xb0(r1)
    stfs f8, 0xb4(r1)
    stfs f7, 0xb8(r1)
    stfs f2, 0xa4(r1)
    stfs f2, 0xa8(r1)
    stfs f0, 0xac(r1)
    stfs f11, 0x8(r1)
    stfs f8, 0xc(r1)
    stfs f2, 0x10(r1)
    stfs f2, 0x3ec(r1)
    stfs f2, 0x3e4(r1)
    stfs f2, 0x3e0(r1)
    stfs f2, 0x3dc(r1)
    stfs f2, 0x3d8(r1)
    stfs f2, 0x3d0(r1)
    stfs f2, 0x3cc(r1)
    stfs f2, 0x3c8(r1)
    stfs f2, 0x3c4(r1)
    stfs f0, 0x3e8(r1)
    stfs f0, 0x3d4(r1)
    stfs f0, 0x3c0(r1)
    beq lbl_fn_803918EC_00001AEC
    fmr f1, f2
    addi r3, r1, 0x1a0
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0x1a0
    addi r5, r1, 0x1d0
    bl fn_805F89F0
    addi r3, r1, 0x1d0
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
lbl_fn_803918EC_00001AEC:
    lfs f0, lbl_808858E8
    lfs f1, 0xc(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_803918EC_00001B4C
    addi r3, r1, 0x140
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0x140
    addi r5, r1, 0x170
    bl fn_805F89F0
    addi r3, r1, 0x170
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
lbl_fn_803918EC_00001B4C:
    lfs f0, lbl_808858E8
    lfs f1, 0x8(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_803918EC_00001BAC
    addi r3, r1, 0xe0
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0xe0
    addi r5, r1, 0x110
    bl fn_805F89F0
    addi r3, r1, 0x110
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
lbl_fn_803918EC_00001BAC:
    addi r4, r1, 0xa4
    addi r3, r1, 0x3c0
    mr r5, r4
    bl fn_805F93C0
    addi r4, r1, 0xa4
    lfs f2, 0xac(r1)
    addi r3, r1, 0xc8
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    mr r4, r3
    stfs f2, 0xd0(r1)
    bl fn_805F98D0
    lfs f1, 0x8f8(r31)
    mr r3, r28
    addi r4, r1, 0x74
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl fn_805BF414
    lfs f8, 0x7c(r1)
    addi r3, r1, 0x390
    lfs f7, 0x78(r1)
    li r4, 0x79
    lfs f0, 0x74(r1)
    fmuls f8, f8, f30
    fmuls f7, f7, f30
    lfs f1, 0xb4(r1)
    fmuls f0, f0, f30
    stfs f8, 0xa0(r1)
    stfs f0, 0x98(r1)
    stfs f7, 0x9c(r1)
    bl fn_805F8E70
    addi r4, r1, 0x98
    addi r3, r1, 0x390
    mr r5, r4
    bl fn_805F93C0
    lfs f8, 0xd0(r1)
    addi r3, r1, 0xd4
    lfs f7, 0xcc(r1)
    addi r4, r1, 0x8c
    fmuls f11, f8, f31
    lfs f0, 0xc8(r1)
    fmuls f12, f7, f31
    lfs f9, 0xd4(r1)
    fmuls f13, f0, f31
    lfs f7, 0x98(r1)
    fadds f10, f9, f7
    lfs f8, 0xd8(r1)
    lfs f0, 0x9c(r1)
    addi r5, r1, 0xbc
    lfs f7, 0xdc(r1)
    fadds f9, f8, f0
    lfs f0, 0xa0(r1)
    fadds f24, f10, f13
    stfs f10, 0xd4(r1)
    fadds f8, f7, f0
    lfs f7, 0x8f8(r31)
    fadds f10, f9, f12
    stfs f9, 0xd8(r1)
    lfs f0, lbl_808858F8
    fadds f9, f8, f11
    fmr f2, f8
    psq_l f1, 0x0(r3), 0, 0
    stfs f24, 0x8c(r1)
    fadds f0, f7, f0
    stfs f2, 0x204(r31)
    fmr f2, f9
    stfs f10, 0x90(r1)
    psq_st f1, 0x1fc(r31), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x208(r31), 0, 0
    stfs f2, 0x210(r31)
    psq_l f1, 0x0(r5), 0, 0
    lfs f2, 0xc4(r1)
    stfs f8, 0xdc(r1)
    stfs f13, 0x68(r1)
    stfs f12, 0x6c(r1)
    stfs f11, 0x70(r1)
    stfs f9, 0x94(r1)
    psq_st f1, 0x214(r31), 0, 0
    stfs f2, 0x21c(r31)
    stfs f0, 0x8f8(r31)
lbl_fn_803918EC_00001CF4:
    lwz r0, 0x4b4(r1)
    psq_l f31, 0x4a8(r1), 0, 0
    lfd f31, 0x4a0(r1)
    psq_l f30, 0x498(r1), 0, 0
    lfd f30, 0x490(r1)
    psq_l f29, 0x488(r1), 0, 0
    lfd f29, 0x480(r1)
    psq_l f28, 0x478(r1), 0, 0
    lfd f28, 0x470(r1)
    psq_l f27, 0x468(r1), 0, 0
    lfd f27, 0x460(r1)
    psq_l f26, 0x458(r1), 0, 0
    lfd f26, 0x450(r1)
    psq_l f25, 0x448(r1), 0, 0
    lfd f25, 0x440(r1)
    psq_l f24, 0x438(r1), 0, 0
    lfd f24, 0x430(r1)
    lwz r31, 0x42c(r1)
    lwz r30, 0x428(r1)
    lwz r29, 0x424(r1)
    lwz r28, 0x420(r1)
    mtlr r0
    addi r1, r1, 0x4b0
    blr
}
