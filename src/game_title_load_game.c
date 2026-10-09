#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_14(void);
extern void _savegpr_14(void);
extern void fn_8004ECC0(void);
extern void fn_800BFAC8(void);
extern void fn_800CB3A0(void);
extern void fn_801231D0(void);
extern void fn_8013655C(void);
extern void fn_80370174(void);
extern void fn_8037F690(void);
extern void fn_803935FC(void);
extern void fn_8039BC0C(void);
extern void fn_8039CF8C(void);
extern void fn_803AC3D8(void);
extern void fn_803AD148(void);
extern void fn_803E3050(void);
extern void fn_803E3384(void);
extern void fn_803E6ADC(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);

/* External data declarations */
extern u8 jumptable_8078B214[];
extern u8 jumptable_8078B244[];
extern u8 jumptable_8078B268[];
extern u8 jumptable_8078B298[];
extern u8 lbl_8074EEE0[];

/* Small data declarations */
extern u32 lbl_8087DD38;
extern u32 lbl_8087EE98;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F430;
extern u32 lbl_8087F490;
extern u32 lbl_8087F8A0;
extern u32 lbl_80885B10;
extern u32 lbl_80885B20;
extern u32 lbl_80885B24;
extern u32 lbl_80885B28;
extern u32 lbl_80885B2C;
extern u32 lbl_80885B30;
extern u32 lbl_80885B34;
extern u32 lbl_80885B38;
extern u32 lbl_80885B78;
extern u32 lbl_80885BF8;

/* Function declarations */
void fn_803B0808(void);
void fn_803B17C4(void);

asm void fn_803B0808(void)
{
    nofralloc
    stwu r1, -0x350(r1)
    mflr r0
    stw r0, 0x354(r1)
    addi r11, r1, 0x2b0
    stfd f31, 0x340(r1)
    psq_st f31, 0x348(r1), 0, 0
    stfd f30, 0x330(r1)
    psq_st f30, 0x338(r1), 0, 0
    stfd f29, 0x320(r1)
    psq_st f29, 0x328(r1), 0, 0
    stfd f28, 0x310(r1)
    psq_st f28, 0x318(r1), 0, 0
    stfd f27, 0x300(r1)
    psq_st f27, 0x308(r1), 0, 0
    stfd f26, 0x2f0(r1)
    psq_st f26, 0x2f8(r1), 0, 0
    stfd f25, 0x2e0(r1)
    psq_st f25, 0x2e8(r1), 0, 0
    stfd f24, 0x2d0(r1)
    psq_st f24, 0x2d8(r1), 0, 0
    stfd f23, 0x2c0(r1)
    psq_st f23, 0x2c8(r1), 0, 0
    stfd f22, 0x2b0(r1)
    psq_st f22, 0x2b8(r1), 0, 0
    bl _savegpr_14
    li r14, 0x0
    stw r14, 0x98(r3)
    mr r24, r4
    mr r25, r5
    stw r7, 0x9c(r3)
    mr r23, r3
    lfs f7, lbl_80885B10
    mr r26, r6
    lwz r5, lbl_8087F8A0
    addi r3, r1, 0x1c0
    lfs f0, lbl_80885B30
    li r4, 0x79
    lwz r16, 0x48(r5)
    stfs f7, 0x110(r1)
    stfs f7, 0x114(r1)
    stfs f0, 0x118(r1)
    lfs f1, 0x538(r16)
    bl fn_805F8E70
    addi r4, r1, 0x110
    addi r3, r1, 0x1c0
    mr r5, r4
    bl fn_805F93C0
    lwz r0, 0xf8(r23)
    li r3, -0x1
    stw r3, 0x1a0(r1)
    cmpwi r0, 0x0
    stw r3, 0x1a4(r1)
    stw r3, 0x1a8(r1)
    stw r14, 0x1ac(r1)
    stw r14, 0x1b0(r1)
    stw r14, 0x1b4(r1)
    stw r14, 0x1b8(r1)
    bgt lbl_fn_803B0808_000003BC
    addi r4, r1, 0x22c
    addi r3, r1, 0x264
    cmplw r4, r3
    stw r14, 0x220(r1)
    stw r14, 0x224(r1)
    stw r14, 0x228(r1)
    bge lbl_fn_803B0808_00000128
    addi r0, r3, 0x7
    subf r0, r4, r0
    srwi r0, r0, 3
    mtctr r0
    bge lbl_fn_803B0808_00000128
lbl_fn_803B0808_00000118:
    stw r14, 0x0(r4)
    stw r14, 0x4(r4)
    addi r4, r4, 0x8
    bdnz lbl_fn_803B0808_00000118
lbl_fn_803B0808_00000128:
    li r18, 0x0
    li r15, 0x0
    li r17, 0x0
    lis r14, 0x68dc
    b lbl_fn_803B0808_0000030C
lbl_fn_803B0808_0000013C:
    lwz r4, 0x4(r26)
    lwz r3, 0x4(r25)
    lwzx r0, r4, r17
    add r20, r3, r15
    cmpwi r0, 0x0
    blt lbl_fn_803B0808_00000300
    lwz r19, 0x48(r24)
    b lbl_fn_803B0808_00000170
lbl_fn_803B0808_0000015C:
    lwz r3, 0x58(r19)
    lwz r0, 0x0(r20)
    cmpw r0, r3
    beq lbl_fn_803B0808_00000178
    lwz r19, 0x14ac(r19)
lbl_fn_803B0808_00000170:
    cmpwi r19, 0x0
    bne lbl_fn_803B0808_0000015C
lbl_fn_803B0808_00000178:
    cmpwi r19, 0x0
    beq lbl_fn_803B0808_00000300
    mr r3, r19
    bl fn_8013655C
    cmpwi r3, 0x0
    bne lbl_fn_803B0808_00000300
    lwz r0, 0x38(r19)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_803B0808_00000300
    lwz r4, 0x4(r26)
    addi r6, r23, 0x80
    lwz r3, 0x144(r20)
    lwzx r0, r4, r17
    lwz r5, 0x80(r23)
    slwi r0, r0, 2
    lwzx r4, r3, r0
    b lbl_fn_803B0808_000001DC
lbl_fn_803B0808_000001C0:
    lwz r0, 0xc(r5)
    cmpw r0, r4
    blt lbl_fn_803B0808_000001D8
    mr r6, r5
    lwz r5, 0x0(r5)
    b lbl_fn_803B0808_000001DC
lbl_fn_803B0808_000001D8:
    lwz r5, 0x4(r5)
lbl_fn_803B0808_000001DC:
    cmpwi r5, 0x0
    bne lbl_fn_803B0808_000001C0
    addi r0, r23, 0x80
    cmplw r6, r0
    beq lbl_fn_803B0808_000001FC
    lwz r0, 0xc(r6)
    cmpw r4, r0
    bge lbl_fn_803B0808_00000200
lbl_fn_803B0808_000001FC:
    addi r6, r23, 0x80
lbl_fn_803B0808_00000200:
    addi r0, r23, 0x80
    cmplw r6, r0
    beq lbl_fn_803B0808_00000238
    subi r3, r14, 0x7453
    lwz r0, 0x10(r6)
    mulhw r3, r3, r4
    srawi r3, r3, 12
    srwi r4, r3, 31
    add r3, r3, r4
    slwi r3, r3, 2
    add r3, r23, r3
    lwz r3, 0x64(r3)
    add r20, r3, r0
    b lbl_fn_803B0808_0000023C
lbl_fn_803B0808_00000238:
    li r20, 0x0
lbl_fn_803B0808_0000023C:
    cmpwi r20, 0x0
    beq lbl_fn_803B0808_00000300
    lwz r0, 0xc(r20)
    cmpwi r0, 0x7
    bne lbl_fn_803B0808_00000300
    lwz r3, lbl_8087F430
    lwz r0, 0x868(r3)
    cmpwi r0, 0x3
    beq lbl_fn_803B0808_00000270
    cmpwi r0, 0x1
    beq lbl_fn_803B0808_00000270
    cmpwi r0, 0x4
    bne lbl_fn_803B0808_00000294
lbl_fn_803B0808_00000270:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803B0808_0000028C
    li r4, 0xa1e
    bl fn_80370174
    cmpwi r3, 0x0
    bgt lbl_fn_803B0808_00000294
lbl_fn_803B0808_0000028C:
    li r0, 0x1
    b lbl_fn_803B0808_00000298
lbl_fn_803B0808_00000294:
    li r0, 0x0
lbl_fn_803B0808_00000298:
    cmpwi r0, 0x0
    beq lbl_fn_803B0808_00000300
    lfs f1, lbl_80885B2C
    mr r3, r23
    mr r4, r19
    addi r5, r1, 0x188
    li r6, 0x1
    bl fn_803AC3D8
    cmpwi r3, 0x0
    beq lbl_fn_803B0808_000002F4
    lwz r0, 0x220(r1)
    addi r4, r1, 0x224
    lwz r3, 0x0(r20)
    slwi r0, r0, 3
    stw r3, 0x20(r1)
    add. r4, r4, r0
    stw r19, 0x24(r1)
    beq lbl_fn_803B0808_000002E8
    stw r3, 0x0(r4)
    stw r19, 0x4(r4)
lbl_fn_803B0808_000002E8:
    lwz r3, 0x220(r1)
    addi r0, r3, 0x1
    stw r0, 0x220(r1)
lbl_fn_803B0808_000002F4:
    lwz r0, 0x220(r1)
    cmplwi r0, 0x8
    bge lbl_fn_803B0808_00000318
lbl_fn_803B0808_00000300:
    addi r15, r15, 0x148
    addi r17, r17, 0xc
    addi r18, r18, 0x1
lbl_fn_803B0808_0000030C:
    lwz r0, 0x0(r25)
    cmplw r18, r0
    blt lbl_fn_803B0808_0000013C
lbl_fn_803B0808_00000318:
    lwz r0, 0x220(r1)
    lwz r3, 0x220(r1)
    cmpwi r0, 0x0
    beq lbl_fn_803B0808_000003BC
    cmplwi r0, 0x1
    ble lbl_fn_803B0808_000003B4
    cmpwi r3, 0x0
    lwz r15, lbl_8087F430
    lfs f22, lbl_80885BF8
    li r17, 0x0
    beq lbl_fn_803B0808_000003BC
    addi r14, r1, 0x220
    b lbl_fn_803B0808_000003A4
lbl_fn_803B0808_0000034C:
    lwz r4, 0x8(r14)
    addi r3, r1, 0xbc
    lfs f7, 0x7c(r15)
    lfs f0, 0x530(r4)
    lfs f9, 0x78(r15)
    fsubs f10, f7, f0
    lfs f8, 0x52c(r4)
    lfs f7, 0x74(r15)
    lfs f0, 0x528(r4)
    fsubs f8, f9, f8
    fsubs f0, f7, f0
    stfs f8, 0xc0(r1)
    stfs f0, 0xbc(r1)
    stfs f10, 0xc4(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f22
    bge lbl_fn_803B0808_0000039C
    lwz r0, 0x4(r14)
    fmr f22, f1
    stw r0, 0xf8(r23)
lbl_fn_803B0808_0000039C:
    addi r14, r14, 0x8
    addi r17, r17, 0x1
lbl_fn_803B0808_000003A4:
    lwz r0, 0x220(r1)
    cmplw r17, r0
    blt lbl_fn_803B0808_0000034C
    b lbl_fn_803B0808_000003BC
lbl_fn_803B0808_000003B4:
    lwz r0, 0x224(r1)
    stw r0, 0xf8(r23)
lbl_fn_803B0808_000003BC:
    lis r14, lbl_8074EEE0@ha
    lfs f24, lbl_80885B24
    lfs f25, lbl_80885B78
    addi r18, r1, 0x1f0
    lfs f26, lbl_80885B10
    addi r17, r1, 0x12c
    lfs f28, lbl_80885B34
    addi r14, r14, lbl_8074EEE0@l
    lfs f27, lbl_80885B38
    li r31, 0x0
    lfs f31, lbl_80885B28
    li r22, 0x0
    lfs f29, lbl_80885B20
    li r21, 0x0
    li r19, 0x1
    b lbl_fn_803B0808_00000F48
lbl_fn_803B0808_000003FC:
    lwz r0, 0x4(r25)
    li r30, 0x0
    add r15, r0, r22
    lwzx r0, r22, r0
    stw r0, 0xa0(r23)
    lwz r3, 0x4(r26)
    lwzx r0, r3, r21
    cmpwi r0, 0x0
    blt lbl_fn_803B0808_00000F34
    stw r0, 0xa4(r23)
    lwz r28, 0x48(r24)
    b lbl_fn_803B0808_00000440
lbl_fn_803B0808_0000042C:
    lwz r3, 0x0(r15)
    lwz r0, 0x58(r28)
    cmpw r3, r0
    beq lbl_fn_803B0808_00000448
    lwz r28, 0x14ac(r28)
lbl_fn_803B0808_00000440:
    cmpwi r28, 0x0
    bne lbl_fn_803B0808_0000042C
lbl_fn_803B0808_00000448:
    cmpwi r28, 0x0
    bne lbl_fn_803B0808_00000468
    lwz r0, 0x4(r26)
    add r3, r0, r21
    lwz r0, 0x4(r3)
    rlwinm r0, r0, 0, 31, 29
    stw r0, 0x4(r3)
    b lbl_fn_803B0808_00000F3C
lbl_fn_803B0808_00000468:
    mr r3, r28
    bl fn_8013655C
    cmpwi r3, 0x0
    bne lbl_fn_803B0808_00000F34
    lwz r0, 0x38(r28)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_803B0808_00000F34
    lwz r4, 0x4(r26)
    addi r6, r23, 0x80
    lwz r3, 0x144(r15)
    lwzx r0, r4, r21
    lwz r5, 0x80(r23)
    slwi r0, r0, 2
    lwzx r4, r3, r0
    b lbl_fn_803B0808_000004C4
lbl_fn_803B0808_000004A8:
    lwz r0, 0xc(r5)
    cmpw r0, r4
    blt lbl_fn_803B0808_000004C0
    mr r6, r5
    lwz r5, 0x0(r5)
    b lbl_fn_803B0808_000004C4
lbl_fn_803B0808_000004C0:
    lwz r5, 0x4(r5)
lbl_fn_803B0808_000004C4:
    cmpwi r5, 0x0
    bne lbl_fn_803B0808_000004A8
    addi r0, r23, 0x80
    cmplw r6, r0
    beq lbl_fn_803B0808_000004E4
    lwz r0, 0xc(r6)
    cmpw r4, r0
    bge lbl_fn_803B0808_000004E8
lbl_fn_803B0808_000004E4:
    addi r6, r23, 0x80
lbl_fn_803B0808_000004E8:
    addi r0, r23, 0x80
    cmplw r6, r0
    beq lbl_fn_803B0808_00000524
    lis r3, 0x68dc
    lwz r0, 0x10(r6)
    subi r3, r3, 0x7453
    mulhw r3, r3, r4
    srawi r3, r3, 12
    srwi r4, r3, 31
    add r3, r3, r4
    slwi r3, r3, 2
    add r3, r23, r3
    lwz r3, 0x64(r3)
    add r29, r3, r0
    b lbl_fn_803B0808_00000528
lbl_fn_803B0808_00000524:
    li r29, 0x0
lbl_fn_803B0808_00000528:
    cmpwi r29, 0x0
    beq lbl_fn_803B0808_00000F24
    lfs f7, 0x530(r28)
    addi r3, r1, 0x104
    lfs f0, 0x530(r16)
    lfs f9, 0x52c(r28)
    fsubs f10, f7, f0
    lfs f8, 0x52c(r16)
    lfs f7, 0x528(r28)
    lfs f0, 0x528(r16)
    fsubs f8, f9, f8
    fsubs f0, f7, f0
    stfs f8, 0x108(r1)
    stfs f0, 0x104(r1)
    stfs f10, 0x10c(r1)
    bl fn_805F9920
    fabs f0, f1
    fmr f22, f1
    frsp f0, f0
    fcmpo cr0, f0, f24
    blt lbl_fn_803B0808_00000588
    addi r3, r1, 0x104
    mr r4, r3
    bl fn_805F98D0
lbl_fn_803B0808_00000588:
    lwz r0, 0xc(r29)
    li r27, 0x0
    cmplwi r0, 0x8
    bgt lbl_fn_803B0808_00000E68
    lis r3, jumptable_8078B244@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_8078B244@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lwz r0, 0x4(r26)
    add r3, r0, r21
    lwz r0, 0x4(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_803B0808_00000E68
    lwz r0, 0xf4(r23)
    cmplw r0, r3
    bne lbl_fn_803B0808_00000E68
    lwz r0, 0x55c(r28)
    cmpwi r0, 0x6
    bne lbl_fn_803B0808_000005EC
    lwz r0, 0x560(r28)
    cmpwi r0, 0x44
    beq lbl_fn_803B0808_00000E68
lbl_fn_803B0808_000005EC:
    lwz r4, 0xc4(r29)
    li r0, 0x6
    stw r19, 0x1b4(r1)
    cmplwi r4, 0xb
    stw r0, 0x1a0(r1)
    bgt lbl_fn_803B0808_0000069C
    lis r3, jumptable_8078B214@ha
    slwi r0, r4, 2
    addi r3, r3, jumptable_8078B214@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    stw r19, 0x1a4(r1)
    b lbl_fn_803B0808_000006A4
    li r0, 0x6
    stw r0, 0x1a4(r1)
    b lbl_fn_803B0808_000006A4
    li r0, 0x7
    stw r0, 0x1a4(r1)
    b lbl_fn_803B0808_000006A4
    li r0, 0x8
    stw r0, 0x1a4(r1)
    b lbl_fn_803B0808_000006A4
    li r0, 0x9
    stw r0, 0x1a4(r1)
    b lbl_fn_803B0808_000006A4
    li r0, 0x2
    stw r0, 0x1a4(r1)
    b lbl_fn_803B0808_000006A4
    li r0, 0xa
    stw r0, 0x1a4(r1)
    b lbl_fn_803B0808_000006A4
    li r0, 0xb
    stw r0, 0x1a4(r1)
    b lbl_fn_803B0808_000006A4
    li r0, 0x12
    stw r0, 0x1a4(r1)
    b lbl_fn_803B0808_000006A4
    li r0, 0x15
    stw r0, 0x1a4(r1)
    b lbl_fn_803B0808_000006A4
    li r0, 0x16
    stw r0, 0x1a4(r1)
    b lbl_fn_803B0808_000006A4
lbl_fn_803B0808_0000069C:
    li r0, 0x2
    stw r0, 0x1a4(r1)
lbl_fn_803B0808_000006A4:
    lwz r3, lbl_8087F490
    li r20, 0x1
    lwz r0, 0x1a0(r1)
    stw r0, 0x764(r3)
    lwz r0, 0x1a4(r1)
    stw r0, 0x768(r3)
    lwz r0, 0x1a8(r1)
    stw r0, 0x76c(r3)
    lwz r0, 0x1ac(r1)
    stw r0, 0x770(r3)
    lwz r0, 0x1b0(r1)
    stw r0, 0x774(r3)
    lwz r0, 0x1b4(r1)
    stw r0, 0x778(r3)
    lwz r0, 0x1b8(r1)
    stw r0, 0x77c(r3)
    lwz r0, 0xe0(r23)
    cmpwi r0, 0x0
    bgt lbl_fn_803B0808_00000720
    lwz r3, lbl_8087F430
    li r15, 0x0
    cmpwi r3, 0x0
    beq lbl_fn_803B0808_00000714
    li r4, 0xa1e
    bl fn_80370174
    cmpwi r3, 0x0
    beq lbl_fn_803B0808_00000714
    li r15, 0x1
lbl_fn_803B0808_00000714:
    cmpwi r15, 0x0
    bne lbl_fn_803B0808_00000720
    li r20, 0x0
lbl_fn_803B0808_00000720:
    cmpwi r20, 0x0
    beq lbl_fn_803B0808_00000730
    li r3, 0x0
    b lbl_fn_803B0808_00000740
lbl_fn_803B0808_00000730:
    lwz r3, lbl_8087F0A8
    li r4, 0x0
    addi r3, r3, 0x48c
    bl fn_801231D0
lbl_fn_803B0808_00000740:
    cmpwi r3, 0x0
    beq lbl_fn_803B0808_00000E68
    li r0, 0x24
    stw r0, 0xe0(r23)
    li r27, 0x1
    lwz r3, lbl_8087F490
    cmpwi r3, 0x0
    beq lbl_fn_803B0808_00000E68
    bl fn_803E3384
    b lbl_fn_803B0808_00000E68
    fcmpo cr0, f22, f25
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_803B0808_000007A4
    lwz r0, 0x4(r26)
    add r3, r0, r21
    lwz r0, 0x4(r3)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_803B0808_00000794
    li r27, 0x1
lbl_fn_803B0808_00000794:
    lwz r0, 0x4(r3)
    ori r0, r0, 0x1
    stw r0, 0x4(r3)
    b lbl_fn_803B0808_00000E68
lbl_fn_803B0808_000007A4:
    lwz r0, 0x4(r26)
    add r3, r0, r21
    lwz r0, 0x4(r3)
    clrrwi r0, r0, 1
    stw r0, 0x4(r3)
    b lbl_fn_803B0808_00000E68
    fcmpo cr0, f22, f25
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_803B0808_000007E4
    lwz r0, 0x4(r26)
    add r3, r0, r21
    lwz r0, 0x4(r3)
    ori r0, r0, 0x8
    stw r0, 0x4(r3)
    b lbl_fn_803B0808_00000E68
lbl_fn_803B0808_000007E4:
    lwz r0, 0x4(r26)
    add r3, r0, r21
    lwz r0, 0x4(r3)
    rlwinm r0, r0, 0, 28, 28
    cmplwi r0, 0x8
    bne lbl_fn_803B0808_00000800
    li r27, 0x1
lbl_fn_803B0808_00000800:
    lwz r0, 0x4(r3)
    rlwinm r0, r0, 0, 29, 27
    stw r0, 0x4(r3)
    b lbl_fn_803B0808_00000E68
    fcmpo cr0, f22, f25
    mfcr r0
    srwi. r0, r0, 31
    bne lbl_fn_803B0808_00000E68
    li r27, 0x1
    b lbl_fn_803B0808_00000E68
    li r27, 0x1
    b lbl_fn_803B0808_00000E68
    lwz r3, lbl_8087F430
    lwz r0, 0x868(r3)
    cmpwi r0, 0x3
    beq lbl_fn_803B0808_00000850
    cmpwi r0, 0x1
    beq lbl_fn_803B0808_00000850
    cmpwi r0, 0x4
    bne lbl_fn_803B0808_00000874
lbl_fn_803B0808_00000850:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803B0808_0000086C
    li r4, 0xa1e
    bl fn_80370174
    cmpwi r3, 0x0
    bgt lbl_fn_803B0808_00000874
lbl_fn_803B0808_0000086C:
    li r0, 0x1
    b lbl_fn_803B0808_00000878
lbl_fn_803B0808_00000874:
    li r0, 0x0
lbl_fn_803B0808_00000878:
    cmpwi r0, 0x0
    beq lbl_fn_803B0808_00000E68
    lfs f1, lbl_80885B2C
    mr r3, r23
    mr r4, r28
    addi r5, r1, 0x170
    li r6, 0x1
    bl fn_803AC3D8
    cmpwi r3, 0x0
    beq lbl_fn_803B0808_00000E68
    li r27, 0x1
    b lbl_fn_803B0808_00000E68
    lwz r3, 0x0(r29)
    lwz r0, 0xf8(r23)
    cmpw r0, r3
    bne lbl_fn_803B0808_00000E68
    lwz r0, 0xd4(r23)
    cmpw r0, r3
    beq lbl_fn_803B0808_000008CC
    li r0, 0x0
    stw r0, 0xd8(r23)
lbl_fn_803B0808_000008CC:
    lwz r3, 0xd8(r23)
    li r4, 0x121
    lwz r0, 0x0(r29)
    stw r0, 0xd4(r23)
    addi r0, r3, 0x1
    stw r0, 0xd8(r23)
    lwz r3, lbl_8087F430
    bl fn_80370174
    slwi r0, r3, 2
    lwz r3, 0xd8(r23)
    lwzx r0, r14, r0
    cmpw r3, r0
    ble lbl_fn_803B0808_00000E68
    li r0, 0x0
    stw r0, 0xd8(r23)
    lfs f1, lbl_80885B30
    addi r3, r1, 0x14
    li r27, 0x1
    li r4, 0x5
    bl fn_803935FC
    addi r3, r1, 0x14
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_803B0808_00000E68
    lwz r3, lbl_8087F430
    lwz r0, 0x868(r3)
    addi r15, r3, 0x6c
    cmpwi r0, 0x3
    beq lbl_fn_803B0808_00000950
    cmpwi r0, 0x1
    beq lbl_fn_803B0808_00000950
    cmpwi r0, 0x4
    bne lbl_fn_803B0808_00000974
lbl_fn_803B0808_00000950:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803B0808_0000096C
    li r4, 0xa1e
    bl fn_80370174
    cmpwi r3, 0x0
    bgt lbl_fn_803B0808_00000974
lbl_fn_803B0808_0000096C:
    li r0, 0x1
    b lbl_fn_803B0808_00000978
lbl_fn_803B0808_00000974:
    li r0, 0x0
lbl_fn_803B0808_00000978:
    cmpwi r0, 0x0
    beq lbl_fn_803B0808_00000E68
    lfs f1, lbl_80885B20
    mr r3, r23
    mr r4, r28
    addi r5, r1, 0x158
    li r6, 0x1
    bl fn_803AC3D8
    mr r20, r3
    psq_l f1, 0x5f4(r28), 0, 0
    addi r3, r1, 0x138
    lfs f2, 0x5fc(r28)
    psq_st f1, 0x0(r3), 0, 0
    addi r4, r1, 0x138
    psq_l f1, 0x600(r28), 0, 0
    addi r3, r1, 0x44
    psq_st f1, 0xc(r4), 0, 0
    lfs f0, 0x10(r15)
    stfs f2, 0x140(r1)
    lfs f2, 0x608(r28)
    lfs f10, 0x60c(r28)
    fsubs f11, f2, f0
    lfs f9, 0x148(r1)
    lfs f8, 0xc(r15)
    lfs f0, 0x8(r15)
    lfs f7, 0x144(r1)
    fsubs f8, f9, f8
    stfs f2, 0x14c(r1)
    fsubs f0, f7, f0
    stfs f10, 0x150(r1)
    stfs f0, 0x44(r1)
    stfs f8, 0x48(r1)
    stfs f11, 0x4c(r1)
    bl fn_805F9940
    lfs f0, 0x150(r1)
    addi r4, r1, 0xf8
    stfs f26, 0x100(r1)
    fmr f22, f1
    fneg f7, f0
    mr r3, r18
    stfs f0, 0xec(r1)
    mr r5, r4
    stfs f7, 0xf8(r1)
    stfs f7, 0xfc(r1)
    stfs f0, 0xf0(r1)
    stfs f26, 0xf4(r1)
    psq_l f1, 0xd0(r15), 0, 0
    psq_l f2, 0xd8(r15), 0, 0
    psq_l f3, 0xe0(r15), 0, 0
    psq_l f4, 0xe8(r15), 0, 0
    psq_l f5, 0xf0(r15), 0, 0
    psq_l f6, 0xf8(r15), 0, 0
    psq_st f6, 0x28(r18), 0, 0
    psq_st f2, 0x8(r18), 0, 0
    psq_st f4, 0x18(r18), 0, 0
    psq_st f1, 0x0(r18), 0, 0
    psq_st f3, 0x10(r18), 0, 0
    psq_st f5, 0x20(r18), 0, 0
    stfs f26, 0x1fc(r1)
    stfs f26, 0x20c(r1)
    stfs f26, 0x21c(r1)
    bl fn_805F93C0
    addi r4, r1, 0xec
    mr r3, r18
    mr r5, r4
    bl fn_805F93C0
    lfs f7, 0x140(r1)
    addi r3, r1, 0xb0
    lfs f0, 0x100(r1)
    addi r5, r1, 0xe0
    lfs f9, 0x13c(r1)
    fadds f10, f7, f0
    lfs f8, 0xfc(r1)
    lfs f7, 0x138(r1)
    lfs f0, 0xf8(r1)
    fadds f8, f9, f8
    stfs f10, 0xe8(r1)
    fadds f0, f7, f0
    lwz r4, lbl_8087EFB4
    stfs f8, 0xe4(r1)
    stfs f0, 0xe0(r1)
    bl fn_800BFAC8
    lfs f9, 0x14c(r1)
    addi r4, r1, 0xb0
    lfs f8, 0xf4(r1)
    addi r3, r1, 0xa4
    lfs f7, 0x148(r1)
    addi r5, r1, 0xd4
    fadds f8, f9, f8
    lfs f0, 0xf0(r1)
    psq_l f1, 0x0(r4), 0, 0
    addi r4, r1, 0xe0
    fadds f9, f7, f0
    lfs f2, 0xb8(r1)
    psq_st f1, 0x0(r4), 0, 0
    lfs f7, 0x144(r1)
    lfs f0, 0xec(r1)
    lwz r4, lbl_8087EFB4
    fadds f0, f7, f0
    stfs f2, 0xe8(r1)
    stfs f0, 0xd4(r1)
    stfs f9, 0xd8(r1)
    stfs f8, 0xdc(r1)
    bl fn_800BFAC8
    addi r3, r1, 0xa4
    lfs f2, 0xac(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0xd4
    psq_st f1, 0x0(r3), 0, 0
    cmpwi r20, 0x0
    lfs f9, 0xe4(r1)
    lfs f8, 0xd8(r1)
    lfs f7, 0xe0(r1)
    fsubs f10, f9, f8
    lfs f0, 0xd4(r1)
    fadds f8, f9, f8
    stfs f2, 0xdc(r1)
    fsubs f9, f7, f0
    fabs f10, f10
    fadds f0, f7, f0
    fabs f11, f9
    fmuls f7, f28, f8
    frsp f9, f10
    frsp f8, f11
    stfs f7, 0x34(r1)
    fmuls f7, f28, f0
    fmuls f9, f28, f9
    fmuls f8, f28, f8
    stfs f7, 0x30(r1)
    fadds f0, f9, f27
    fadds f7, f8, f27
    stfs f0, 0x2c(r1)
    stfs f7, 0x28(r1)
    beq lbl_fn_803B0808_00000C74
    lfs f9, 0x14c(r1)
    addi r4, r1, 0x98
    lfs f8, 0xf4(r1)
    addi r5, r1, 0x8c
    lfs f7, 0x148(r1)
    fadds f11, f9, f8
    lfs f0, 0xf0(r1)
    lfs f9, 0x144(r1)
    fadds f12, f7, f0
    lfs f8, 0xec(r1)
    lfs f7, 0x140(r1)
    fadds f13, f9, f8
    lfs f0, 0x100(r1)
    lfs f9, 0x13c(r1)
    fadds f10, f7, f0
    lfs f8, 0xfc(r1)
    lfs f7, 0x138(r1)
    lfs f0, 0xf8(r1)
    fadds f8, f9, f8
    stfs f13, 0x8c(r1)
    fadds f0, f7, f0
    lwz r3, lbl_8087F490
    stfs f12, 0x90(r1)
    stfs f11, 0x94(r1)
    stfs f0, 0x98(r1)
    stfs f8, 0x9c(r1)
    stfs f10, 0xa0(r1)
    bl fn_803E6ADC
    lfs f7, 0x140(r1)
    mr r3, r15
    lfs f0, 0x14c(r1)
    addi r4, r1, 0x80
    lfs f8, 0x13c(r1)
    li r27, 0x1
    fadds f9, f7, f0
    lfs f0, 0x148(r1)
    lfs f7, 0x138(r1)
    fadds f8, f8, f0
    lfs f0, 0x144(r1)
    fmuls f10, f9, f28
    fadds f0, f7, f0
    stfs f8, 0x78(r1)
    fmuls f7, f8, f28
    stfs f0, 0x74(r1)
    fmuls f0, f0, f28
    stfs f9, 0x7c(r1)
    stfs f0, 0x80(r1)
    stfs f7, 0x84(r1)
    stfs f10, 0x88(r1)
    bl fn_8037F690
    lfs f1, lbl_80885B30
    addi r3, r1, 0x10
    li r4, 0x5
    bl fn_803935FC
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_803B0808_00000C74:
    cmpwi r20, 0x0
    bne lbl_fn_803B0808_00000E68
    fcmpo cr0, f22, f29
    bge lbl_fn_803B0808_00000E68
    addi r3, r1, 0x158
    lfs f2, 0x160(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r4, r1, 0x120
    psq_st f1, 0x0(r4), 0, 0
    addi r4, r1, 0x144
    psq_l f1, 0x0(r4), 0, 0
    addi r3, r1, 0x38
    stfs f2, 0x128(r1)
    lfs f2, 0x14c(r1)
    psq_st f1, 0x0(r17), 0, 0
    lfs f0, 0x128(r1)
    lfs f9, 0x130(r1)
    fsubs f10, f2, f0
    lfs f8, 0x124(r1)
    lfs f7, 0x12c(r1)
    lfs f0, 0x120(r1)
    fsubs f8, f9, f8
    stfs f2, 0x134(r1)
    fsubs f0, f7, f0
    lfs f23, 0x150(r1)
    stfs f8, 0x3c(r1)
    stfs f0, 0x38(r1)
    stfs f10, 0x40(r1)
    bl fn_805F9940
    fabs f0, f1
    fmr f30, f1
    frsp f0, f0
    fcmpo cr0, f0, f24
    blt lbl_fn_803B0808_00000D78
    lfs f7, 0x12c(r1)
    mr r3, r17
    lfs f0, 0x120(r1)
    mr r4, r17
    lfs f9, 0x130(r1)
    fsubs f10, f7, f0
    lfs f8, 0x124(r1)
    lfs f7, 0x134(r1)
    lfs f0, 0x128(r1)
    fsubs f8, f9, f8
    stfs f10, 0x12c(r1)
    fsubs f0, f7, f0
    stfs f8, 0x130(r1)
    stfs f0, 0x134(r1)
    bl fn_805F98D0
    fsubs f9, f30, f23
    lfs f8, 0x12c(r1)
    lfs f7, 0x130(r1)
    lfs f0, 0x134(r1)
    fmuls f11, f8, f9
    lfs f8, 0x120(r1)
    fmuls f10, f7, f9
    lfs f7, 0x124(r1)
    fmuls f9, f0, f9
    lfs f0, 0x128(r1)
    fadds f8, f11, f8
    fadds f7, f10, f7
    fadds f0, f9, f0
    stfs f8, 0x12c(r1)
    stfs f7, 0x130(r1)
    stfs f0, 0x134(r1)
lbl_fn_803B0808_00000D78:
    fmuls f0, f31, f23
    fcmpo cr0, f30, f0
    ble lbl_fn_803B0808_00000DB8
    lis r4, 0x8000
    lwz r3, lbl_8087EE98
    addi r7, r4, 0x10
    addi r5, r1, 0x120
    addi r6, r1, 0x12c
    li r4, 0x0
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ECC0
    cmpwi r3, 0x0
    bne lbl_fn_803B0808_00000DB8
    li r0, 0x1
    b lbl_fn_803B0808_00000DBC
lbl_fn_803B0808_00000DB8:
    li r0, 0x0
lbl_fn_803B0808_00000DBC:
    cmpwi r0, 0x0
    bne lbl_fn_803B0808_00000DE0
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803B0808_00000E68
    li r4, 0xce
    bl fn_80370174
    cmpwi r3, 0x0
    beq lbl_fn_803B0808_00000E68
lbl_fn_803B0808_00000DE0:
    lfs f7, 0x140(r1)
    addi r7, r1, 0xc8
    lfs f0, 0x14c(r1)
    addi r5, r1, 0x50
    lfs f8, 0x13c(r1)
    addi r4, r1, 0x68
    fadds f11, f7, f0
    lfs f0, 0x148(r1)
    lfs f7, 0x138(r1)
    addi r6, r1, 0x28
    fadds f8, f8, f0
    lfs f0, 0x144(r1)
    fadds f0, f7, f0
    lfs f10, 0x34(r1)
    lfs f9, 0x30(r1)
    fmuls f12, f11, f28
    stfs f9, 0xc8(r1)
    fmuls f7, f8, f28
    lfs f2, 0xe8(r1)
    fmuls f9, f0, f28
    stfs f10, 0xcc(r1)
    lwz r3, lbl_8087F490
    psq_l f1, 0x0(r7), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    fmr f1, f22
    stfs f2, 0xd0(r1)
    stfs f2, 0x58(r1)
    stfs f0, 0x5c(r1)
    stfs f8, 0x60(r1)
    stfs f11, 0x64(r1)
    stfs f9, 0x68(r1)
    stfs f7, 0x6c(r1)
    stfs f12, 0x70(r1)
    bl fn_803E3050
lbl_fn_803B0808_00000E68:
    cmpwi r27, 0x0
    beq lbl_fn_803B0808_00000F24
    stw r28, 0x98(r23)
    mr r3, r29
    lwz r0, 0xb0(r29)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_803B0808_00000F04
lbl_fn_803B0808_00000E88:
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    bge lbl_fn_803B0808_00000EFC
    mr r4, r29
    addi r3, r23, 0x138
    addi r5, r1, 0xc
    addi r6, r1, 0x9
    addi r7, r1, 0x8
    bl fn_8039BC0C
    lwz r4, 0xc(r1)
    cmpwi r4, 0x0
    beq lbl_fn_803B0808_00000EC8
    lwz r0, 0x0(r29)
    lwzu r5, 0xc(r4)
    cmpw r5, r0
    bge lbl_fn_803B0808_00000EF4
lbl_fn_803B0808_00000EC8:
    lwz r5, 0x0(r29)
    mr r4, r3
    lbz r0, lbl_8087DD38
    addi r3, r23, 0x138
    stw r5, 0x18(r1)
    addi r7, r1, 0x18
    lbz r5, 0x9(r1)
    stb r0, 0x1c(r1)
    lbz r6, 0x8(r1)
    bl fn_803AD148
    addi r4, r3, 0xc
lbl_fn_803B0808_00000EF4:
    stb r19, 0x4(r4)
    b lbl_fn_803B0808_00000F04
lbl_fn_803B0808_00000EFC:
    addi r3, r3, 0x14
    bdnz lbl_fn_803B0808_00000E88
lbl_fn_803B0808_00000F04:
    mr r3, r23
    mr r4, r29
    addi r5, r29, 0xd0
    bl fn_8039CF8C
    cmpwi r3, 0x0
    bne lbl_fn_803B0808_00000F24
    stw r19, 0x8c(r23)
    li r30, 0x1
lbl_fn_803B0808_00000F24:
    lwz r0, 0x8c(r23)
    cmpwi r0, 0x0
    beq lbl_fn_803B0808_00000F34
    li r30, 0x1
lbl_fn_803B0808_00000F34:
    cmpwi r30, 0x0
    bne lbl_fn_803B0808_00000F54
lbl_fn_803B0808_00000F3C:
    addi r31, r31, 0x1
    addi r22, r22, 0x148
    addi r21, r21, 0xc
lbl_fn_803B0808_00000F48:
    lwz r0, 0x0(r25)
    cmplw r31, r0
    blt lbl_fn_803B0808_000003FC
lbl_fn_803B0808_00000F54:
    addi r11, r1, 0x2b0
    psq_l f31, 0x348(r1), 0, 0
    lfd f31, 0x340(r1)
    psq_l f30, 0x338(r1), 0, 0
    lfd f30, 0x330(r1)
    psq_l f29, 0x328(r1), 0, 0
    lfd f29, 0x320(r1)
    psq_l f28, 0x318(r1), 0, 0
    lfd f28, 0x310(r1)
    psq_l f27, 0x308(r1), 0, 0
    lfd f27, 0x300(r1)
    psq_l f26, 0x2f8(r1), 0, 0
    lfd f26, 0x2f0(r1)
    psq_l f25, 0x2e8(r1), 0, 0
    lfd f25, 0x2e0(r1)
    psq_l f24, 0x2d8(r1), 0, 0
    lfd f24, 0x2d0(r1)
    psq_l f23, 0x2c8(r1), 0, 0
    lfd f23, 0x2c0(r1)
    psq_l f22, 0x2b8(r1), 0, 0
    lfd f22, 0x2b0(r1)
    bl _restgpr_14
    lwz r0, 0x354(r1)
    mtlr r0
    addi r1, r1, 0x350
    blr
}

asm void fn_803B17C4(void)
{
    nofralloc
    stwu r1, -0x350(r1)
    mflr r0
    stw r0, 0x354(r1)
    addi r11, r1, 0x2b0
    stfd f31, 0x340(r1)
    psq_st f31, 0x348(r1), 0, 0
    stfd f30, 0x330(r1)
    psq_st f30, 0x338(r1), 0, 0
    stfd f29, 0x320(r1)
    psq_st f29, 0x328(r1), 0, 0
    stfd f28, 0x310(r1)
    psq_st f28, 0x318(r1), 0, 0
    stfd f27, 0x300(r1)
    psq_st f27, 0x308(r1), 0, 0
    stfd f26, 0x2f0(r1)
    psq_st f26, 0x2f8(r1), 0, 0
    stfd f25, 0x2e0(r1)
    psq_st f25, 0x2e8(r1), 0, 0
    stfd f24, 0x2d0(r1)
    psq_st f24, 0x2d8(r1), 0, 0
    stfd f23, 0x2c0(r1)
    psq_st f23, 0x2c8(r1), 0, 0
    stfd f22, 0x2b0(r1)
    psq_st f22, 0x2b8(r1), 0, 0
    bl _savegpr_14
    li r14, 0x0
    stw r14, 0x98(r3)
    mr r24, r4
    mr r25, r5
    stw r7, 0x9c(r3)
    mr r23, r3
    lfs f7, lbl_80885B10
    mr r26, r6
    lwz r5, lbl_8087F8A0
    addi r3, r1, 0x1c0
    lfs f0, lbl_80885B30
    li r4, 0x79
    lwz r16, 0x48(r5)
    stfs f7, 0x110(r1)
    stfs f7, 0x114(r1)
    stfs f0, 0x118(r1)
    lfs f1, 0x538(r16)
    bl fn_805F8E70
    addi r4, r1, 0x110
    addi r3, r1, 0x1c0
    mr r5, r4
    bl fn_805F93C0
    lwz r0, 0xf8(r23)
    li r3, -0x1
    stw r3, 0x1a0(r1)
    cmpwi r0, 0x0
    stw r3, 0x1a4(r1)
    stw r3, 0x1a8(r1)
    stw r14, 0x1ac(r1)
    stw r14, 0x1b0(r1)
    stw r14, 0x1b4(r1)
    stw r14, 0x1b8(r1)
    bgt lbl_fn_803B17C4_00001378
    addi r4, r1, 0x22c
    addi r3, r1, 0x264
    cmplw r4, r3
    stw r14, 0x220(r1)
    stw r14, 0x224(r1)
    stw r14, 0x228(r1)
    bge lbl_fn_803B17C4_000010E4
    addi r0, r3, 0x7
    subf r0, r4, r0
    srwi r0, r0, 3
    mtctr r0
    bge lbl_fn_803B17C4_000010E4
lbl_fn_803B17C4_000010D4:
    stw r14, 0x0(r4)
    stw r14, 0x4(r4)
    addi r4, r4, 0x8
    bdnz lbl_fn_803B17C4_000010D4
lbl_fn_803B17C4_000010E4:
    li r18, 0x0
    li r15, 0x0
    li r17, 0x0
    lis r14, 0x68dc
    b lbl_fn_803B17C4_000012C8
lbl_fn_803B17C4_000010F8:
    lwz r4, 0x4(r26)
    lwz r3, 0x4(r25)
    lwzx r0, r4, r17
    add r20, r3, r15
    cmpwi r0, 0x0
    blt lbl_fn_803B17C4_000012BC
    lwz r19, 0x48(r24)
    b lbl_fn_803B17C4_0000112C
lbl_fn_803B17C4_00001118:
    lwz r3, 0x58(r19)
    lwz r0, 0x0(r20)
    cmpw r0, r3
    beq lbl_fn_803B17C4_00001134
    lwz r19, 0x1424(r19)
lbl_fn_803B17C4_0000112C:
    cmpwi r19, 0x0
    bne lbl_fn_803B17C4_00001118
lbl_fn_803B17C4_00001134:
    cmpwi r19, 0x0
    beq lbl_fn_803B17C4_000012BC
    mr r3, r19
    bl fn_8013655C
    cmpwi r3, 0x0
    bne lbl_fn_803B17C4_000012BC
    lwz r0, 0x38(r19)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_803B17C4_000012BC
    lwz r4, 0x4(r26)
    addi r6, r23, 0x80
    lwz r3, 0x144(r20)
    lwzx r0, r4, r17
    lwz r5, 0x80(r23)
    slwi r0, r0, 2
    lwzx r4, r3, r0
    b lbl_fn_803B17C4_00001198
lbl_fn_803B17C4_0000117C:
    lwz r0, 0xc(r5)
    cmpw r0, r4
    blt lbl_fn_803B17C4_00001194
    mr r6, r5
    lwz r5, 0x0(r5)
    b lbl_fn_803B17C4_00001198
lbl_fn_803B17C4_00001194:
    lwz r5, 0x4(r5)
lbl_fn_803B17C4_00001198:
    cmpwi r5, 0x0
    bne lbl_fn_803B17C4_0000117C
    addi r0, r23, 0x80
    cmplw r6, r0
    beq lbl_fn_803B17C4_000011B8
    lwz r0, 0xc(r6)
    cmpw r4, r0
    bge lbl_fn_803B17C4_000011BC
lbl_fn_803B17C4_000011B8:
    addi r6, r23, 0x80
lbl_fn_803B17C4_000011BC:
    addi r0, r23, 0x80
    cmplw r6, r0
    beq lbl_fn_803B17C4_000011F4
    subi r3, r14, 0x7453
    lwz r0, 0x10(r6)
    mulhw r3, r3, r4
    srawi r3, r3, 12
    srwi r4, r3, 31
    add r3, r3, r4
    slwi r3, r3, 2
    add r3, r23, r3
    lwz r3, 0x64(r3)
    add r20, r3, r0
    b lbl_fn_803B17C4_000011F8
lbl_fn_803B17C4_000011F4:
    li r20, 0x0
lbl_fn_803B17C4_000011F8:
    cmpwi r20, 0x0
    beq lbl_fn_803B17C4_000012BC
    lwz r0, 0xc(r20)
    cmpwi r0, 0x7
    bne lbl_fn_803B17C4_000012BC
    lwz r3, lbl_8087F430
    lwz r0, 0x868(r3)
    cmpwi r0, 0x3
    beq lbl_fn_803B17C4_0000122C
    cmpwi r0, 0x1
    beq lbl_fn_803B17C4_0000122C
    cmpwi r0, 0x4
    bne lbl_fn_803B17C4_00001250
lbl_fn_803B17C4_0000122C:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803B17C4_00001248
    li r4, 0xa1e
    bl fn_80370174
    cmpwi r3, 0x0
    bgt lbl_fn_803B17C4_00001250
lbl_fn_803B17C4_00001248:
    li r0, 0x1
    b lbl_fn_803B17C4_00001254
lbl_fn_803B17C4_00001250:
    li r0, 0x0
lbl_fn_803B17C4_00001254:
    cmpwi r0, 0x0
    beq lbl_fn_803B17C4_000012BC
    lfs f1, lbl_80885B2C
    mr r3, r23
    mr r4, r19
    addi r5, r1, 0x188
    li r6, 0x1
    bl fn_803AC3D8
    cmpwi r3, 0x0
    beq lbl_fn_803B17C4_000012B0
    lwz r0, 0x220(r1)
    addi r4, r1, 0x224
    lwz r3, 0x0(r20)
    slwi r0, r0, 3
    stw r3, 0x20(r1)
    add. r4, r4, r0
    stw r19, 0x24(r1)
    beq lbl_fn_803B17C4_000012A4
    stw r3, 0x0(r4)
    stw r19, 0x4(r4)
lbl_fn_803B17C4_000012A4:
    lwz r3, 0x220(r1)
    addi r0, r3, 0x1
    stw r0, 0x220(r1)
lbl_fn_803B17C4_000012B0:
    lwz r0, 0x220(r1)
    cmplwi r0, 0x8
    bge lbl_fn_803B17C4_000012D4
lbl_fn_803B17C4_000012BC:
    addi r15, r15, 0x148
    addi r17, r17, 0xc
    addi r18, r18, 0x1
lbl_fn_803B17C4_000012C8:
    lwz r0, 0x0(r25)
    cmplw r18, r0
    blt lbl_fn_803B17C4_000010F8
lbl_fn_803B17C4_000012D4:
    lwz r0, 0x220(r1)
    lwz r3, 0x220(r1)
    cmpwi r0, 0x0
    beq lbl_fn_803B17C4_00001378
    cmplwi r0, 0x1
    ble lbl_fn_803B17C4_00001370
    cmpwi r3, 0x0
    lwz r15, lbl_8087F430
    lfs f22, lbl_80885BF8
    li r17, 0x0
    beq lbl_fn_803B17C4_00001378
    addi r14, r1, 0x220
    b lbl_fn_803B17C4_00001360
lbl_fn_803B17C4_00001308:
    lwz r4, 0x8(r14)
    addi r3, r1, 0xbc
    lfs f7, 0x7c(r15)
    lfs f0, 0x530(r4)
    lfs f9, 0x78(r15)
    fsubs f10, f7, f0
    lfs f8, 0x52c(r4)
    lfs f7, 0x74(r15)
    lfs f0, 0x528(r4)
    fsubs f8, f9, f8
    fsubs f0, f7, f0
    stfs f8, 0xc0(r1)
    stfs f0, 0xbc(r1)
    stfs f10, 0xc4(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f22
    bge lbl_fn_803B17C4_00001358
    lwz r0, 0x4(r14)
    fmr f22, f1
    stw r0, 0xf8(r23)
lbl_fn_803B17C4_00001358:
    addi r14, r14, 0x8
    addi r17, r17, 0x1
lbl_fn_803B17C4_00001360:
    lwz r0, 0x220(r1)
    cmplw r17, r0
    blt lbl_fn_803B17C4_00001308
    b lbl_fn_803B17C4_00001378
lbl_fn_803B17C4_00001370:
    lwz r0, 0x224(r1)
    stw r0, 0xf8(r23)
lbl_fn_803B17C4_00001378:
    lis r14, lbl_8074EEE0@ha
    lfs f24, lbl_80885B24
    lfs f25, lbl_80885B78
    addi r18, r1, 0x1f0
    lfs f26, lbl_80885B10
    addi r17, r1, 0x12c
    lfs f28, lbl_80885B34
    addi r14, r14, lbl_8074EEE0@l
    lfs f27, lbl_80885B38
    li r31, 0x0
    lfs f31, lbl_80885B28
    li r22, 0x0
    lfs f29, lbl_80885B20
    li r21, 0x0
    li r19, 0x1
    b lbl_fn_803B17C4_00001F04
lbl_fn_803B17C4_000013B8:
    lwz r0, 0x4(r25)
    li r30, 0x0
    add r15, r0, r22
    lwzx r0, r22, r0
    stw r0, 0xa0(r23)
    lwz r3, 0x4(r26)
    lwzx r0, r3, r21
    cmpwi r0, 0x0
    blt lbl_fn_803B17C4_00001EF0
    stw r0, 0xa4(r23)
    lwz r28, 0x48(r24)
    b lbl_fn_803B17C4_000013FC
lbl_fn_803B17C4_000013E8:
    lwz r3, 0x0(r15)
    lwz r0, 0x58(r28)
    cmpw r3, r0
    beq lbl_fn_803B17C4_00001404
    lwz r28, 0x1424(r28)
lbl_fn_803B17C4_000013FC:
    cmpwi r28, 0x0
    bne lbl_fn_803B17C4_000013E8
lbl_fn_803B17C4_00001404:
    cmpwi r28, 0x0
    bne lbl_fn_803B17C4_00001424
    lwz r0, 0x4(r26)
    add r3, r0, r21
    lwz r0, 0x4(r3)
    rlwinm r0, r0, 0, 31, 29
    stw r0, 0x4(r3)
    b lbl_fn_803B17C4_00001EF8
lbl_fn_803B17C4_00001424:
    mr r3, r28
    bl fn_8013655C
    cmpwi r3, 0x0
    bne lbl_fn_803B17C4_00001EF0
    lwz r0, 0x38(r28)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_803B17C4_00001EF0
    lwz r4, 0x4(r26)
    addi r6, r23, 0x80
    lwz r3, 0x144(r15)
    lwzx r0, r4, r21
    lwz r5, 0x80(r23)
    slwi r0, r0, 2
    lwzx r4, r3, r0
    b lbl_fn_803B17C4_00001480
lbl_fn_803B17C4_00001464:
    lwz r0, 0xc(r5)
    cmpw r0, r4
    blt lbl_fn_803B17C4_0000147C
    mr r6, r5
    lwz r5, 0x0(r5)
    b lbl_fn_803B17C4_00001480
lbl_fn_803B17C4_0000147C:
    lwz r5, 0x4(r5)
lbl_fn_803B17C4_00001480:
    cmpwi r5, 0x0
    bne lbl_fn_803B17C4_00001464
    addi r0, r23, 0x80
    cmplw r6, r0
    beq lbl_fn_803B17C4_000014A0
    lwz r0, 0xc(r6)
    cmpw r4, r0
    bge lbl_fn_803B17C4_000014A4
lbl_fn_803B17C4_000014A0:
    addi r6, r23, 0x80
lbl_fn_803B17C4_000014A4:
    addi r0, r23, 0x80
    cmplw r6, r0
    beq lbl_fn_803B17C4_000014E0
    lis r3, 0x68dc
    lwz r0, 0x10(r6)
    subi r3, r3, 0x7453
    mulhw r3, r3, r4
    srawi r3, r3, 12
    srwi r4, r3, 31
    add r3, r3, r4
    slwi r3, r3, 2
    add r3, r23, r3
    lwz r3, 0x64(r3)
    add r29, r3, r0
    b lbl_fn_803B17C4_000014E4
lbl_fn_803B17C4_000014E0:
    li r29, 0x0
lbl_fn_803B17C4_000014E4:
    cmpwi r29, 0x0
    beq lbl_fn_803B17C4_00001EE0
    lfs f7, 0x530(r28)
    addi r3, r1, 0x104
    lfs f0, 0x530(r16)
    lfs f9, 0x52c(r28)
    fsubs f10, f7, f0
    lfs f8, 0x52c(r16)
    lfs f7, 0x528(r28)
    lfs f0, 0x528(r16)
    fsubs f8, f9, f8
    fsubs f0, f7, f0
    stfs f8, 0x108(r1)
    stfs f0, 0x104(r1)
    stfs f10, 0x10c(r1)
    bl fn_805F9920
    fabs f0, f1
    fmr f22, f1
    frsp f0, f0
    fcmpo cr0, f0, f24
    blt lbl_fn_803B17C4_00001544
    addi r3, r1, 0x104
    mr r4, r3
    bl fn_805F98D0
lbl_fn_803B17C4_00001544:
    lwz r0, 0xc(r29)
    li r27, 0x0
    cmplwi r0, 0x8
    bgt lbl_fn_803B17C4_00001E24
    lis r3, jumptable_8078B298@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_8078B298@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lwz r0, 0x4(r26)
    add r3, r0, r21
    lwz r0, 0x4(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_803B17C4_00001E24
    lwz r0, 0xf4(r23)
    cmplw r0, r3
    bne lbl_fn_803B17C4_00001E24
    lwz r0, 0x55c(r28)
    cmpwi r0, 0x6
    bne lbl_fn_803B17C4_000015A8
    lwz r0, 0x560(r28)
    cmpwi r0, 0x44
    beq lbl_fn_803B17C4_00001E24
lbl_fn_803B17C4_000015A8:
    lwz r4, 0xc4(r29)
    li r0, 0x6
    stw r19, 0x1b4(r1)
    cmplwi r4, 0xb
    stw r0, 0x1a0(r1)
    bgt lbl_fn_803B17C4_00001658
    lis r3, jumptable_8078B268@ha
    slwi r0, r4, 2
    addi r3, r3, jumptable_8078B268@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    stw r19, 0x1a4(r1)
    b lbl_fn_803B17C4_00001660
    li r0, 0x6
    stw r0, 0x1a4(r1)
    b lbl_fn_803B17C4_00001660
    li r0, 0x7
    stw r0, 0x1a4(r1)
    b lbl_fn_803B17C4_00001660
    li r0, 0x8
    stw r0, 0x1a4(r1)
    b lbl_fn_803B17C4_00001660
    li r0, 0x9
    stw r0, 0x1a4(r1)
    b lbl_fn_803B17C4_00001660
    li r0, 0x2
    stw r0, 0x1a4(r1)
    b lbl_fn_803B17C4_00001660
    li r0, 0xa
    stw r0, 0x1a4(r1)
    b lbl_fn_803B17C4_00001660
    li r0, 0xb
    stw r0, 0x1a4(r1)
    b lbl_fn_803B17C4_00001660
    li r0, 0x12
    stw r0, 0x1a4(r1)
    b lbl_fn_803B17C4_00001660
    li r0, 0x15
    stw r0, 0x1a4(r1)
    b lbl_fn_803B17C4_00001660
    li r0, 0x16
    stw r0, 0x1a4(r1)
    b lbl_fn_803B17C4_00001660
lbl_fn_803B17C4_00001658:
    li r0, 0x2
    stw r0, 0x1a4(r1)
lbl_fn_803B17C4_00001660:
    lwz r3, lbl_8087F490
    li r20, 0x1
    lwz r0, 0x1a0(r1)
    stw r0, 0x764(r3)
    lwz r0, 0x1a4(r1)
    stw r0, 0x768(r3)
    lwz r0, 0x1a8(r1)
    stw r0, 0x76c(r3)
    lwz r0, 0x1ac(r1)
    stw r0, 0x770(r3)
    lwz r0, 0x1b0(r1)
    stw r0, 0x774(r3)
    lwz r0, 0x1b4(r1)
    stw r0, 0x778(r3)
    lwz r0, 0x1b8(r1)
    stw r0, 0x77c(r3)
    lwz r0, 0xe0(r23)
    cmpwi r0, 0x0
    bgt lbl_fn_803B17C4_000016DC
    lwz r3, lbl_8087F430
    li r15, 0x0
    cmpwi r3, 0x0
    beq lbl_fn_803B17C4_000016D0
    li r4, 0xa1e
    bl fn_80370174
    cmpwi r3, 0x0
    beq lbl_fn_803B17C4_000016D0
    li r15, 0x1
lbl_fn_803B17C4_000016D0:
    cmpwi r15, 0x0
    bne lbl_fn_803B17C4_000016DC
    li r20, 0x0
lbl_fn_803B17C4_000016DC:
    cmpwi r20, 0x0
    beq lbl_fn_803B17C4_000016EC
    li r3, 0x0
    b lbl_fn_803B17C4_000016FC
lbl_fn_803B17C4_000016EC:
    lwz r3, lbl_8087F0A8
    li r4, 0x0
    addi r3, r3, 0x48c
    bl fn_801231D0
lbl_fn_803B17C4_000016FC:
    cmpwi r3, 0x0
    beq lbl_fn_803B17C4_00001E24
    li r0, 0x24
    stw r0, 0xe0(r23)
    li r27, 0x1
    lwz r3, lbl_8087F490
    cmpwi r3, 0x0
    beq lbl_fn_803B17C4_00001E24
    bl fn_803E3384
    b lbl_fn_803B17C4_00001E24
    fcmpo cr0, f22, f25
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_803B17C4_00001760
    lwz r0, 0x4(r26)
    add r3, r0, r21
    lwz r0, 0x4(r3)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_803B17C4_00001750
    li r27, 0x1
lbl_fn_803B17C4_00001750:
    lwz r0, 0x4(r3)
    ori r0, r0, 0x1
    stw r0, 0x4(r3)
    b lbl_fn_803B17C4_00001E24
lbl_fn_803B17C4_00001760:
    lwz r0, 0x4(r26)
    add r3, r0, r21
    lwz r0, 0x4(r3)
    clrrwi r0, r0, 1
    stw r0, 0x4(r3)
    b lbl_fn_803B17C4_00001E24
    fcmpo cr0, f22, f25
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_803B17C4_000017A0
    lwz r0, 0x4(r26)
    add r3, r0, r21
    lwz r0, 0x4(r3)
    ori r0, r0, 0x8
    stw r0, 0x4(r3)
    b lbl_fn_803B17C4_00001E24
lbl_fn_803B17C4_000017A0:
    lwz r0, 0x4(r26)
    add r3, r0, r21
    lwz r0, 0x4(r3)
    rlwinm r0, r0, 0, 28, 28
    cmplwi r0, 0x8
    bne lbl_fn_803B17C4_000017BC
    li r27, 0x1
lbl_fn_803B17C4_000017BC:
    lwz r0, 0x4(r3)
    rlwinm r0, r0, 0, 29, 27
    stw r0, 0x4(r3)
    b lbl_fn_803B17C4_00001E24
    fcmpo cr0, f22, f25
    mfcr r0
    srwi. r0, r0, 31
    bne lbl_fn_803B17C4_00001E24
    li r27, 0x1
    b lbl_fn_803B17C4_00001E24
    li r27, 0x1
    b lbl_fn_803B17C4_00001E24
    lwz r3, lbl_8087F430
    lwz r0, 0x868(r3)
    cmpwi r0, 0x3
    beq lbl_fn_803B17C4_0000180C
    cmpwi r0, 0x1
    beq lbl_fn_803B17C4_0000180C
    cmpwi r0, 0x4
    bne lbl_fn_803B17C4_00001830
lbl_fn_803B17C4_0000180C:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803B17C4_00001828
    li r4, 0xa1e
    bl fn_80370174
    cmpwi r3, 0x0
    bgt lbl_fn_803B17C4_00001830
lbl_fn_803B17C4_00001828:
    li r0, 0x1
    b lbl_fn_803B17C4_00001834
lbl_fn_803B17C4_00001830:
    li r0, 0x0
lbl_fn_803B17C4_00001834:
    cmpwi r0, 0x0
    beq lbl_fn_803B17C4_00001E24
    lfs f1, lbl_80885B2C
    mr r3, r23
    mr r4, r28
    addi r5, r1, 0x170
    li r6, 0x1
    bl fn_803AC3D8
    cmpwi r3, 0x0
    beq lbl_fn_803B17C4_00001E24
    li r27, 0x1
    b lbl_fn_803B17C4_00001E24
    lwz r3, 0x0(r29)
    lwz r0, 0xf8(r23)
    cmpw r0, r3
    bne lbl_fn_803B17C4_00001E24
    lwz r0, 0xd4(r23)
    cmpw r0, r3
    beq lbl_fn_803B17C4_00001888
    li r0, 0x0
    stw r0, 0xd8(r23)
lbl_fn_803B17C4_00001888:
    lwz r3, 0xd8(r23)
    li r4, 0x121
    lwz r0, 0x0(r29)
    stw r0, 0xd4(r23)
    addi r0, r3, 0x1
    stw r0, 0xd8(r23)
    lwz r3, lbl_8087F430
    bl fn_80370174
    slwi r0, r3, 2
    lwz r3, 0xd8(r23)
    lwzx r0, r14, r0
    cmpw r3, r0
    ble lbl_fn_803B17C4_00001E24
    li r0, 0x0
    stw r0, 0xd8(r23)
    lfs f1, lbl_80885B30
    addi r3, r1, 0x14
    li r27, 0x1
    li r4, 0x5
    bl fn_803935FC
    addi r3, r1, 0x14
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_803B17C4_00001E24
    lwz r3, lbl_8087F430
    lwz r0, 0x868(r3)
    addi r15, r3, 0x6c
    cmpwi r0, 0x3
    beq lbl_fn_803B17C4_0000190C
    cmpwi r0, 0x1
    beq lbl_fn_803B17C4_0000190C
    cmpwi r0, 0x4
    bne lbl_fn_803B17C4_00001930
lbl_fn_803B17C4_0000190C:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803B17C4_00001928
    li r4, 0xa1e
    bl fn_80370174
    cmpwi r3, 0x0
    bgt lbl_fn_803B17C4_00001930
lbl_fn_803B17C4_00001928:
    li r0, 0x1
    b lbl_fn_803B17C4_00001934
lbl_fn_803B17C4_00001930:
    li r0, 0x0
lbl_fn_803B17C4_00001934:
    cmpwi r0, 0x0
    beq lbl_fn_803B17C4_00001E24
    lfs f1, lbl_80885B20
    mr r3, r23
    mr r4, r28
    addi r5, r1, 0x158
    li r6, 0x1
    bl fn_803AC3D8
    mr r20, r3
    psq_l f1, 0x5f4(r28), 0, 0
    addi r3, r1, 0x138
    lfs f2, 0x5fc(r28)
    psq_st f1, 0x0(r3), 0, 0
    addi r4, r1, 0x138
    psq_l f1, 0x600(r28), 0, 0
    addi r3, r1, 0x44
    psq_st f1, 0xc(r4), 0, 0
    lfs f0, 0x10(r15)
    stfs f2, 0x140(r1)
    lfs f2, 0x608(r28)
    lfs f10, 0x60c(r28)
    fsubs f11, f2, f0
    lfs f9, 0x148(r1)
    lfs f8, 0xc(r15)
    lfs f0, 0x8(r15)
    lfs f7, 0x144(r1)
    fsubs f8, f9, f8
    stfs f2, 0x14c(r1)
    fsubs f0, f7, f0
    stfs f10, 0x150(r1)
    stfs f0, 0x44(r1)
    stfs f8, 0x48(r1)
    stfs f11, 0x4c(r1)
    bl fn_805F9940
    lfs f0, 0x150(r1)
    addi r4, r1, 0xf8
    stfs f26, 0x100(r1)
    fmr f22, f1
    fneg f7, f0
    mr r3, r18
    stfs f0, 0xec(r1)
    mr r5, r4
    stfs f7, 0xf8(r1)
    stfs f7, 0xfc(r1)
    stfs f0, 0xf0(r1)
    stfs f26, 0xf4(r1)
    psq_l f1, 0xd0(r15), 0, 0
    psq_l f2, 0xd8(r15), 0, 0
    psq_l f3, 0xe0(r15), 0, 0
    psq_l f4, 0xe8(r15), 0, 0
    psq_l f5, 0xf0(r15), 0, 0
    psq_l f6, 0xf8(r15), 0, 0
    psq_st f6, 0x28(r18), 0, 0
    psq_st f2, 0x8(r18), 0, 0
    psq_st f4, 0x18(r18), 0, 0
    psq_st f1, 0x0(r18), 0, 0
    psq_st f3, 0x10(r18), 0, 0
    psq_st f5, 0x20(r18), 0, 0
    stfs f26, 0x1fc(r1)
    stfs f26, 0x20c(r1)
    stfs f26, 0x21c(r1)
    bl fn_805F93C0
    addi r4, r1, 0xec
    mr r3, r18
    mr r5, r4
    bl fn_805F93C0
    lfs f7, 0x140(r1)
    addi r3, r1, 0xb0
    lfs f0, 0x100(r1)
    addi r5, r1, 0xe0
    lfs f9, 0x13c(r1)
    fadds f10, f7, f0
    lfs f8, 0xfc(r1)
    lfs f7, 0x138(r1)
    lfs f0, 0xf8(r1)
    fadds f8, f9, f8
    stfs f10, 0xe8(r1)
    fadds f0, f7, f0
    lwz r4, lbl_8087EFB4
    stfs f8, 0xe4(r1)
    stfs f0, 0xe0(r1)
    bl fn_800BFAC8
    lfs f9, 0x14c(r1)
    addi r4, r1, 0xb0
    lfs f8, 0xf4(r1)
    addi r3, r1, 0xa4
    lfs f7, 0x148(r1)
    addi r5, r1, 0xd4
    fadds f8, f9, f8
    lfs f0, 0xf0(r1)
    psq_l f1, 0x0(r4), 0, 0
    addi r4, r1, 0xe0
    fadds f9, f7, f0
    lfs f2, 0xb8(r1)
    psq_st f1, 0x0(r4), 0, 0
    lfs f7, 0x144(r1)
    lfs f0, 0xec(r1)
    lwz r4, lbl_8087EFB4
    fadds f0, f7, f0
    stfs f2, 0xe8(r1)
    stfs f0, 0xd4(r1)
    stfs f9, 0xd8(r1)
    stfs f8, 0xdc(r1)
    bl fn_800BFAC8
    addi r3, r1, 0xa4
    lfs f2, 0xac(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0xd4
    psq_st f1, 0x0(r3), 0, 0
    cmpwi r20, 0x0
    lfs f9, 0xe4(r1)
    lfs f8, 0xd8(r1)
    lfs f7, 0xe0(r1)
    fsubs f10, f9, f8
    lfs f0, 0xd4(r1)
    fadds f8, f9, f8
    stfs f2, 0xdc(r1)
    fsubs f9, f7, f0
    fabs f10, f10
    fadds f0, f7, f0
    fabs f11, f9
    fmuls f7, f28, f8
    frsp f9, f10
    frsp f8, f11
    stfs f7, 0x34(r1)
    fmuls f7, f28, f0
    fmuls f9, f28, f9
    fmuls f8, f28, f8
    stfs f7, 0x30(r1)
    fadds f0, f9, f27
    fadds f7, f8, f27
    stfs f0, 0x2c(r1)
    stfs f7, 0x28(r1)
    beq lbl_fn_803B17C4_00001C30
    lfs f9, 0x14c(r1)
    addi r4, r1, 0x98
    lfs f8, 0xf4(r1)
    addi r5, r1, 0x8c
    lfs f7, 0x148(r1)
    fadds f11, f9, f8
    lfs f0, 0xf0(r1)
    lfs f9, 0x144(r1)
    fadds f12, f7, f0
    lfs f8, 0xec(r1)
    lfs f7, 0x140(r1)
    fadds f13, f9, f8
    lfs f0, 0x100(r1)
    lfs f9, 0x13c(r1)
    fadds f10, f7, f0
    lfs f8, 0xfc(r1)
    lfs f7, 0x138(r1)
    lfs f0, 0xf8(r1)
    fadds f8, f9, f8
    stfs f13, 0x8c(r1)
    fadds f0, f7, f0
    lwz r3, lbl_8087F490
    stfs f12, 0x90(r1)
    stfs f11, 0x94(r1)
    stfs f0, 0x98(r1)
    stfs f8, 0x9c(r1)
    stfs f10, 0xa0(r1)
    bl fn_803E6ADC
    lfs f7, 0x140(r1)
    mr r3, r15
    lfs f0, 0x14c(r1)
    addi r4, r1, 0x80
    lfs f8, 0x13c(r1)
    li r27, 0x1
    fadds f9, f7, f0
    lfs f0, 0x148(r1)
    lfs f7, 0x138(r1)
    fadds f8, f8, f0
    lfs f0, 0x144(r1)
    fmuls f10, f9, f28
    fadds f0, f7, f0
    stfs f8, 0x78(r1)
    fmuls f7, f8, f28
    stfs f0, 0x74(r1)
    fmuls f0, f0, f28
    stfs f9, 0x7c(r1)
    stfs f0, 0x80(r1)
    stfs f7, 0x84(r1)
    stfs f10, 0x88(r1)
    bl fn_8037F690
    lfs f1, lbl_80885B30
    addi r3, r1, 0x10
    li r4, 0x5
    bl fn_803935FC
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_803B17C4_00001C30:
    cmpwi r20, 0x0
    bne lbl_fn_803B17C4_00001E24
    fcmpo cr0, f22, f29
    bge lbl_fn_803B17C4_00001E24
    addi r3, r1, 0x158
    lfs f2, 0x160(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r4, r1, 0x120
    psq_st f1, 0x0(r4), 0, 0
    addi r4, r1, 0x144
    psq_l f1, 0x0(r4), 0, 0
    addi r3, r1, 0x38
    stfs f2, 0x128(r1)
    lfs f2, 0x14c(r1)
    psq_st f1, 0x0(r17), 0, 0
    lfs f0, 0x128(r1)
    lfs f9, 0x130(r1)
    fsubs f10, f2, f0
    lfs f8, 0x124(r1)
    lfs f7, 0x12c(r1)
    lfs f0, 0x120(r1)
    fsubs f8, f9, f8
    stfs f2, 0x134(r1)
    fsubs f0, f7, f0
    lfs f23, 0x150(r1)
    stfs f8, 0x3c(r1)
    stfs f0, 0x38(r1)
    stfs f10, 0x40(r1)
    bl fn_805F9940
    fabs f0, f1
    fmr f30, f1
    frsp f0, f0
    fcmpo cr0, f0, f24
    blt lbl_fn_803B17C4_00001D34
    lfs f7, 0x12c(r1)
    mr r3, r17
    lfs f0, 0x120(r1)
    mr r4, r17
    lfs f9, 0x130(r1)
    fsubs f10, f7, f0
    lfs f8, 0x124(r1)
    lfs f7, 0x134(r1)
    lfs f0, 0x128(r1)
    fsubs f8, f9, f8
    stfs f10, 0x12c(r1)
    fsubs f0, f7, f0
    stfs f8, 0x130(r1)
    stfs f0, 0x134(r1)
    bl fn_805F98D0
    fsubs f9, f30, f23
    lfs f8, 0x12c(r1)
    lfs f7, 0x130(r1)
    lfs f0, 0x134(r1)
    fmuls f11, f8, f9
    lfs f8, 0x120(r1)
    fmuls f10, f7, f9
    lfs f7, 0x124(r1)
    fmuls f9, f0, f9
    lfs f0, 0x128(r1)
    fadds f8, f11, f8
    fadds f7, f10, f7
    fadds f0, f9, f0
    stfs f8, 0x12c(r1)
    stfs f7, 0x130(r1)
    stfs f0, 0x134(r1)
lbl_fn_803B17C4_00001D34:
    fmuls f0, f31, f23
    fcmpo cr0, f30, f0
    ble lbl_fn_803B17C4_00001D74
    lis r4, 0x8000
    lwz r3, lbl_8087EE98
    addi r7, r4, 0x10
    addi r5, r1, 0x120
    addi r6, r1, 0x12c
    li r4, 0x0
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ECC0
    cmpwi r3, 0x0
    bne lbl_fn_803B17C4_00001D74
    li r0, 0x1
    b lbl_fn_803B17C4_00001D78
lbl_fn_803B17C4_00001D74:
    li r0, 0x0
lbl_fn_803B17C4_00001D78:
    cmpwi r0, 0x0
    bne lbl_fn_803B17C4_00001D9C
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803B17C4_00001E24
    li r4, 0xce
    bl fn_80370174
    cmpwi r3, 0x0
    beq lbl_fn_803B17C4_00001E24
lbl_fn_803B17C4_00001D9C:
    lfs f7, 0x140(r1)
    addi r7, r1, 0xc8
    lfs f0, 0x14c(r1)
    addi r5, r1, 0x50
    lfs f8, 0x13c(r1)
    addi r4, r1, 0x68
    fadds f11, f7, f0
    lfs f0, 0x148(r1)
    lfs f7, 0x138(r1)
    addi r6, r1, 0x28
    fadds f8, f8, f0
    lfs f0, 0x144(r1)
    fadds f0, f7, f0
    lfs f10, 0x34(r1)
    lfs f9, 0x30(r1)
    fmuls f12, f11, f28
    stfs f9, 0xc8(r1)
    fmuls f7, f8, f28
    lfs f2, 0xe8(r1)
    fmuls f9, f0, f28
    stfs f10, 0xcc(r1)
    lwz r3, lbl_8087F490
    psq_l f1, 0x0(r7), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    fmr f1, f22
    stfs f2, 0xd0(r1)
    stfs f2, 0x58(r1)
    stfs f0, 0x5c(r1)
    stfs f8, 0x60(r1)
    stfs f11, 0x64(r1)
    stfs f9, 0x68(r1)
    stfs f7, 0x6c(r1)
    stfs f12, 0x70(r1)
    bl fn_803E3050
lbl_fn_803B17C4_00001E24:
    cmpwi r27, 0x0
    beq lbl_fn_803B17C4_00001EE0
    stw r28, 0x98(r23)
    mr r3, r29
    lwz r0, 0xb0(r29)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_803B17C4_00001EC0
lbl_fn_803B17C4_00001E44:
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    bge lbl_fn_803B17C4_00001EB8
    mr r4, r29
    addi r3, r23, 0x138
    addi r5, r1, 0xc
    addi r6, r1, 0x9
    addi r7, r1, 0x8
    bl fn_8039BC0C
    lwz r4, 0xc(r1)
    cmpwi r4, 0x0
    beq lbl_fn_803B17C4_00001E84
    lwz r0, 0x0(r29)
    lwzu r5, 0xc(r4)
    cmpw r5, r0
    bge lbl_fn_803B17C4_00001EB0
lbl_fn_803B17C4_00001E84:
    lwz r5, 0x0(r29)
    mr r4, r3
    lbz r0, lbl_8087DD38
    addi r3, r23, 0x138
    stw r5, 0x18(r1)
    addi r7, r1, 0x18
    lbz r5, 0x9(r1)
    stb r0, 0x1c(r1)
    lbz r6, 0x8(r1)
    bl fn_803AD148
    addi r4, r3, 0xc
lbl_fn_803B17C4_00001EB0:
    stb r19, 0x4(r4)
    b lbl_fn_803B17C4_00001EC0
lbl_fn_803B17C4_00001EB8:
    addi r3, r3, 0x14
    bdnz lbl_fn_803B17C4_00001E44
lbl_fn_803B17C4_00001EC0:
    mr r3, r23
    mr r4, r29
    addi r5, r29, 0xd0
    bl fn_8039CF8C
    cmpwi r3, 0x0
    bne lbl_fn_803B17C4_00001EE0
    stw r19, 0x8c(r23)
    li r30, 0x1
lbl_fn_803B17C4_00001EE0:
    lwz r0, 0x8c(r23)
    cmpwi r0, 0x0
    beq lbl_fn_803B17C4_00001EF0
    li r30, 0x1
lbl_fn_803B17C4_00001EF0:
    cmpwi r30, 0x0
    bne lbl_fn_803B17C4_00001F10
lbl_fn_803B17C4_00001EF8:
    addi r31, r31, 0x1
    addi r22, r22, 0x148
    addi r21, r21, 0xc
lbl_fn_803B17C4_00001F04:
    lwz r0, 0x0(r25)
    cmplw r31, r0
    blt lbl_fn_803B17C4_000013B8
lbl_fn_803B17C4_00001F10:
    addi r11, r1, 0x2b0
    psq_l f31, 0x348(r1), 0, 0
    lfd f31, 0x340(r1)
    psq_l f30, 0x338(r1), 0, 0
    lfd f30, 0x330(r1)
    psq_l f29, 0x328(r1), 0, 0
    lfd f29, 0x320(r1)
    psq_l f28, 0x318(r1), 0, 0
    lfd f28, 0x310(r1)
    psq_l f27, 0x308(r1), 0, 0
    lfd f27, 0x300(r1)
    psq_l f26, 0x2f8(r1), 0, 0
    lfd f26, 0x2f0(r1)
    psq_l f25, 0x2e8(r1), 0, 0
    lfd f25, 0x2e0(r1)
    psq_l f24, 0x2d8(r1), 0, 0
    lfd f24, 0x2d0(r1)
    psq_l f23, 0x2c8(r1), 0, 0
    lfd f23, 0x2c0(r1)
    psq_l f22, 0x2b8(r1), 0, 0
    lfd f22, 0x2b0(r1)
    bl _restgpr_14
    lwz r0, 0x354(r1)
    mtlr r0
    addi r1, r1, 0x350
    blr
}
