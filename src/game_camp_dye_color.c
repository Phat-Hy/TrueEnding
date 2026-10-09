#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_15(void);
extern void _restgpr_21(void);
extern void _restgpr_27(void);
extern void _savegpr_15(void);
extern void _savegpr_21(void);
extern void _savegpr_27(void);
extern void fn_8004FF58(void);
extern void fn_800502A8(void);
extern void fn_80051CD8(void);
extern void fn_800629F0(void);
extern void fn_80062F7C(void);
extern void fn_80063200(void);
extern void fn_80063764(void);
extern void fn_800638B0(void);
extern void fn_80063D3C(void);
extern void fn_8008CD60(void);
extern void fn_80370174(void);
extern void fn_80370A78(void);
extern void fn_8037D4C0(void);
extern void fn_803CCDAC(void);
extern void fn_803CD958(void);
extern void fn_804A04AC(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);

/* External data declarations */
extern u8 lbl_807500B8[];
extern u8 lbl_807C8600[];
extern u8 lbl_807C8610[];

/* Small data declarations */
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F430;
extern u32 lbl_8087F448;
extern u32 lbl_8087F478;
extern u32 lbl_8087F479;
extern u32 lbl_8087F8A0;
extern u32 lbl_80885CB8;
extern u32 lbl_80885CBC;
extern u32 lbl_80885CD8;
extern u32 lbl_80885CDC;
extern u32 lbl_80885CE0;
extern u32 lbl_80885CE4;
extern u32 lbl_80885CE8;
extern u32 lbl_80885CEC;

/* Function declarations */
void fn_803C1CAC(void);
void fn_803C1E2C(void);
void fn_803C1E3C(void);
void fn_803C2038(void);
void fn_803C2048(void);
void fn_803C2090(void);
void fn_803C221C(void);

asm void fn_803C1CAC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r27, r3
    lwz r4, lbl_8087F8A0
    cmpwi r4, 0x0
    beq lbl_fn_803C1CAC_00000028
    lwz r31, 0x48(r4)
    b lbl_fn_803C1CAC_0000002C
lbl_fn_803C1CAC_00000028:
    li r31, 0x0
lbl_fn_803C1CAC_0000002C:
    cmpwi r31, 0x0
    beq lbl_fn_803C1CAC_0000016C
    li r28, 0x0
    li r29, 0x0
    b lbl_fn_803C1CAC_000000F4
lbl_fn_803C1CAC_00000040:
    lwz r0, 0x110(r27)
    li r3, 0x1
    add r30, r0, r29
    lwz r0, 0x38(r30)
    cmpwi r0, 0x0
    beq lbl_fn_803C1CAC_00000090
    lwz r0, 0x3c(r30)
    cmpwi r0, 0x1
    bne lbl_fn_803C1CAC_00000074
    lwz r3, lbl_8087F430
    lwz r4, 0x40(r30)
    bl fn_80370174
    b lbl_fn_803C1CAC_00000080
lbl_fn_803C1CAC_00000074:
    lwz r3, lbl_8087F430
    lwz r4, 0x40(r30)
    bl fn_80370A78
lbl_fn_803C1CAC_00000080:
    lwz r0, 0x44(r30)
    subf r0, r3, r0
    cntlzw r0, r0
    srwi r3, r0, 5
lbl_fn_803C1CAC_00000090:
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_fn_803C1CAC_000000E8
    lwz r0, 0x48(r30)
    li r4, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_803C1CAC_000000DC
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803C1CAC_000000DC
    lwz r3, 0x10d0(r3)
    lwz r0, 0x4c(r30)
    cmpw r3, r0
    blt lbl_fn_803C1CAC_000000D8
    lwz r0, 0x50(r30)
    cmpw r0, r3
    bge lbl_fn_803C1CAC_000000DC
lbl_fn_803C1CAC_000000D8:
    li r4, 0x0
lbl_fn_803C1CAC_000000DC:
    neg r0, r4
    or r0, r0, r4
    srwi r0, r0, 31
lbl_fn_803C1CAC_000000E8:
    stw r0, 0x54(r30)
    addi r29, r29, 0x58
    addi r28, r28, 0x1
lbl_fn_803C1CAC_000000F4:
    lwz r0, 0x10c(r27)
    cmplw r28, r0
    blt lbl_fn_803C1CAC_00000040
    mr r3, r27
    mr r5, r31
    addi r4, r27, 0x10c
    bl fn_803C2090
    cmpwi r3, 0x0
    mr r7, r3
    beq lbl_fn_803C1CAC_00000144
    lwz r6, 0x64(r27)
    lwz r4, 0x24(r3)
    lwz r0, 0xe0(r6)
    cmpw r4, r0
    beq lbl_fn_803C1CAC_0000016C
    mr r3, r6
    lwz r5, 0x28(r7)
    lwz r6, 0x2c(r7)
    bl fn_804A04AC
    b lbl_fn_803C1CAC_0000016C
lbl_fn_803C1CAC_00000144:
    lwz r3, 0x64(r27)
    lwz r4, 0xe0(r3)
    lwz r0, 0xe8(r3)
    cmpw r4, r0
    beq lbl_fn_803C1CAC_0000016C
    lwz r4, 0xe8(r3)
    li r5, -0x1
    li r6, -0x1
    li r7, 0x0
    bl fn_804A04AC
lbl_fn_803C1CAC_0000016C:
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803C1E2C(void)
{
    nofralloc
    mulli r0, r4, 0x58
    lwz r3, 0x4(r3)
    add r3, r3, r0
    blr
}

asm void fn_803C1E3C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lwz r4, lbl_8087F8A0
    mr r27, r3
    cmpwi r4, 0x0
    beq lbl_fn_803C1E3C_000001BC
    lwz r31, 0x48(r4)
    b lbl_fn_803C1E3C_000001C0
lbl_fn_803C1E3C_000001BC:
    li r31, 0x0
lbl_fn_803C1E3C_000001C0:
    cmpwi r31, 0x0
    beq lbl_fn_803C1E3C_00000374
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803C1E3C_000001E0
    lwz r0, 0x54e4(r3)
    cmpwi r0, 0x8
    beq lbl_fn_803C1E3C_00000374
lbl_fn_803C1E3C_000001E0:
    li r28, 0x0
    li r29, 0x0
    b lbl_fn_803C1E3C_000002A0
lbl_fn_803C1E3C_000001EC:
    lwz r0, 0x118(r27)
    li r3, 0x1
    add r30, r0, r29
    lwz r0, 0x30(r30)
    cmpwi r0, 0x0
    beq lbl_fn_803C1E3C_0000023C
    lwz r0, 0x34(r30)
    cmpwi r0, 0x1
    bne lbl_fn_803C1E3C_00000220
    lwz r3, lbl_8087F430
    lwz r4, 0x38(r30)
    bl fn_80370174
    b lbl_fn_803C1E3C_0000022C
lbl_fn_803C1E3C_00000220:
    lwz r3, lbl_8087F430
    lwz r4, 0x38(r30)
    bl fn_80370A78
lbl_fn_803C1E3C_0000022C:
    lwz r0, 0x3c(r30)
    subf r0, r3, r0
    cntlzw r0, r0
    srwi r3, r0, 5
lbl_fn_803C1E3C_0000023C:
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_fn_803C1E3C_00000294
    lwz r0, 0x40(r30)
    li r4, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_803C1E3C_00000288
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803C1E3C_00000288
    lwz r3, 0x10d0(r3)
    lwz r0, 0x44(r30)
    cmpw r3, r0
    blt lbl_fn_803C1E3C_00000284
    lwz r0, 0x48(r30)
    cmpw r0, r3
    bge lbl_fn_803C1E3C_00000288
lbl_fn_803C1E3C_00000284:
    li r4, 0x0
lbl_fn_803C1E3C_00000288:
    neg r0, r4
    or r0, r0, r4
    srwi r0, r0, 31
lbl_fn_803C1E3C_00000294:
    stw r0, 0x4c(r30)
    addi r29, r29, 0x50
    addi r28, r28, 0x1
lbl_fn_803C1E3C_000002A0:
    lwz r0, 0x114(r27)
    cmplw r28, r0
    blt lbl_fn_803C1E3C_000001EC
    lwz r0, lbl_8087F448
    cmpwi r0, 0x0
    beq lbl_fn_803C1E3C_00000374
    mr r3, r27
    mr r5, r31
    addi r4, r27, 0x114
    bl fn_803CCDAC
    cmpwi r3, 0x0
    mr r28, r3
    beq lbl_fn_803C1E3C_00000324
    lwz r0, 0x140(r27)
    cmplw r3, r0
    beq lbl_fn_803C1E3C_00000370
    lwz r5, lbl_8087F448
    lwz r0, 0x84(r5)
    cmpwi r0, 0x0
    beq lbl_fn_803C1E3C_000002F8
    lwz r0, 0xc4(r5)
    b lbl_fn_803C1E3C_000002FC
lbl_fn_803C1E3C_000002F8:
    lwz r0, 0x8c(r5)
lbl_fn_803C1E3C_000002FC:
    lwz r4, 0x24(r3)
    cmpw r4, r0
    beq lbl_fn_803C1E3C_00000370
    mr r3, r5
    lfs f1, 0x28(r28)
    lwz r5, 0x2c(r28)
    li r6, 0x1
    li r7, 0x0
    bl fn_8037D4C0
    b lbl_fn_803C1E3C_00000370
lbl_fn_803C1E3C_00000324:
    lwz r4, 0x140(r27)
    cmpwi r4, 0x0
    beq lbl_fn_803C1E3C_00000370
    lwz r3, lbl_8087F448
    lwz r4, 0x24(r4)
    lwz r0, 0x84(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803C1E3C_0000034C
    lwz r0, 0xc4(r3)
    b lbl_fn_803C1E3C_00000350
lbl_fn_803C1E3C_0000034C:
    lwz r0, 0x8c(r3)
lbl_fn_803C1E3C_00000350:
    cmpw r4, r0
    bne lbl_fn_803C1E3C_00000370
    lfs f1, lbl_80885CB8
    li r4, 0x0
    li r5, 0x3c
    li r6, 0x1
    li r7, 0x0
    bl fn_8037D4C0
lbl_fn_803C1E3C_00000370:
    stw r28, 0x140(r27)
lbl_fn_803C1E3C_00000374:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803C2038(void)
{
    nofralloc
    mulli r0, r4, 0x50
    lwz r3, 0x4(r3)
    add r3, r3, r0
    blr
}

asm void fn_803C2048(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    mr r5, r4
    addi r4, r3, 0x10c
    stw r0, 0x14(r1)
    bl fn_803C2090
    cmpwi r3, 0x0
    beq lbl_fn_803C2048_000003D0
    lwz r4, 0x2c(r3)
    subi r0, r4, 0x1
    cmplwi r0, 0x1
    bgt lbl_fn_803C2048_000003D0
    b lbl_fn_803C2048_000003D4
lbl_fn_803C2048_000003D0:
    li r3, 0x0
lbl_fn_803C2048_000003D4:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803C2090(void)
{
    nofralloc
    stwu r1, -0xf0(r1)
    mflr r0
    stw r0, 0xf4(r1)
    addi r11, r1, 0xd0
    stfd f31, 0xe0(r1)
    psq_st f31, 0xe8(r1), 0, 0
    stfd f30, 0xd0(r1)
    psq_st f30, 0xd8(r1), 0, 0
    bl _savegpr_21
    cmpwi r5, 0x0
    mr r21, r4
    mr r22, r5
    bne lbl_fn_803C2090_00000420
    li r3, 0x0
    b lbl_fn_803C2090_00000548
lbl_fn_803C2090_00000420:
    lfs f30, lbl_80885CD8
    addi r29, r1, 0x28
    lfs f31, lbl_80885CBC
    addi r30, r1, 0x64
    addi r28, r1, 0x18
    addi r27, r1, 0x58
    addi r26, r1, 0x8
    li r25, 0x0
    li r24, 0x0
    li r31, 0x0
    b lbl_fn_803C2090_00000538
lbl_fn_803C2090_0000044C:
    lwz r0, 0x4(r21)
    add r23, r0, r31
    lwz r0, 0x54(r23)
    cmpwi r0, 0x0
    beq lbl_fn_803C2090_00000530
    lfs f1, 0x14(r23)
    addi r3, r1, 0x28
    li r4, 0x79
    bl fn_805F8E70
    psq_l f1, 0x0(r29), 0, 0
    mr r3, r26
    psq_l f2, 0x8(r29), 0, 0
    mr r4, r27
    psq_l f3, 0x10(r29), 0, 0
    psq_l f4, 0x18(r29), 0, 0
    psq_l f5, 0x20(r29), 0, 0
    psq_l f6, 0x28(r29), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
    psq_l f1, 0x4(r23), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    lfs f2, 0xc(r23)
    lfs f7, 0x1c(r23)
    lfs f8, 0x1c(r1)
    lfs f0, 0x18(r1)
    fadds f7, f8, f7
    stfs f0, 0x70(r1)
    stfs f7, 0x80(r1)
    stfs f2, 0x90(r1)
    stfs f2, 0x20(r1)
    psq_l f1, 0x18(r23), 0, 0
    lfs f2, 0x20(r23)
    stfs f2, 0x60(r1)
    psq_st f1, 0x0(r27), 0, 0
    psq_l f1, 0x528(r22), 0, 0
    lfs f2, 0x530(r22)
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r26), 0, 0
    lfs f8, 0x5b0(r22)
    lfs f0, 0xc(r1)
    stfs f7, 0x1c(r1)
    fadds f0, f0, f8
    stfs f31, 0x14(r1)
    stfs f0, 0xc(r1)
    bl fn_80051CD8
    cmpwi r3, 0x0
    beq lbl_fn_803C2090_00000530
    addi r3, r23, 0x18
    bl fn_805F9920
    fcmpo cr0, f1, f30
    bge lbl_fn_803C2090_00000530
    fmr f30, f1
    mr r25, r23
lbl_fn_803C2090_00000530:
    addi r24, r24, 0x1
    addi r31, r31, 0x58
lbl_fn_803C2090_00000538:
    lwz r0, 0x0(r21)
    cmplw r24, r0
    blt lbl_fn_803C2090_0000044C
    mr r3, r25
lbl_fn_803C2090_00000548:
    addi r11, r1, 0xd0
    psq_l f31, 0xe8(r1), 0, 0
    lfd f31, 0xe0(r1)
    psq_l f30, 0xd8(r1), 0, 0
    lfd f30, 0xd0(r1)
    bl _restgpr_21
    lwz r0, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0xf0
    blr
}

asm void fn_803C221C(void)
{
    nofralloc
    stwu r1, -0x2f0(r1)
    mflr r0
    stw r0, 0x2f4(r1)
    addi r11, r1, 0x2c0
    stfd f31, 0x2e0(r1)
    psq_st f31, 0x2e8(r1), 0, 0
    stfd f30, 0x2d0(r1)
    psq_st f30, 0x2d8(r1), 0, 0
    stfd f29, 0x2c0(r1)
    psq_st f29, 0x2c8(r1), 0, 0
    bl _savegpr_15
    lwz r16, lbl_8087F0A8
    mr r30, r3
    lwz r15, 0x214(r16)
    lwz r12, 0x218(r16)
    lwz r11, 0x21c(r16)
    cmpwi r15, 0x0
    lwz r10, 0x220(r16)
    lwz r9, 0x224(r16)
    lwz r8, 0x228(r16)
    lwz r7, 0x22c(r16)
    lwz r6, 0x230(r16)
    lwz r5, 0x234(r16)
    lwz r4, 0x238(r16)
    lwz r3, 0x23c(r16)
    lwz r0, 0x240(r16)
    stw r15, 0x240(r1)
    stw r12, 0x244(r1)
    stw r11, 0x248(r1)
    stw r10, 0x24c(r1)
    stw r9, 0x250(r1)
    stw r8, 0x254(r1)
    stw r7, 0x258(r1)
    stw r6, 0x25c(r1)
    stw r5, 0x260(r1)
    stw r4, 0x264(r1)
    stw r3, 0x268(r1)
    stw r0, 0x26c(r1)
    beq lbl_fn_803C221C_00001924
    lwz r24, lbl_8087EFB4
    cmpwi r8, 0x0
    lfs f31, lbl_80885CE0
    addi r31, r24, 0x204
    beq lbl_fn_803C221C_00000708
    lis r18, lbl_807C8600@ha
    li r21, 0x0
    addi r18, r18, lbl_807C8600@l
    li r15, 0x0
    li r17, 0x1
    lis r16, 0xff01
    b lbl_fn_803C221C_000006FC
lbl_fn_803C221C_0000063C:
    lwz r0, 0x100(r30)
    add r4, r0, r15
    lwz r0, 0x38(r4)
    cmpwi r0, 0x0
    beq lbl_fn_803C221C_000006F4
    lfs f3, 0xc(r4)
    addi r3, r1, 0xb0
    lfs f0, 0x114(r24)
    lfs f5, 0x8(r4)
    fsubs f6, f3, f0
    lfs f4, 0x110(r24)
    lfs f3, 0x4(r4)
    lfs f0, 0x10c(r24)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0xb4(r1)
    stfs f0, 0xb0(r1)
    stfs f6, 0xb8(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f31
    bge lbl_fn_803C221C_000006F4
    lbz r0, lbl_8087F478
    lwz r3, 0x100(r30)
    extsb. r0, r0
    add r4, r3, r15
    lfs f0, 0x14(r4)
    bne lbl_fn_803C221C_000006AC
    stb r17, lbl_8087F478
lbl_fn_803C221C_000006AC:
    psq_l f1, 0x4(r4), 0, 0
    mr r3, r31
    lfs f2, 0xc(r4)
    mr r4, r18
    stfs f2, 0x8(r18)
    psq_st f1, 0x0(r18), 0, 0
    stfs f0, 0xc(r18)
    bl fn_8004FF58
    cmpwi r3, 0x0
    beq lbl_fn_803C221C_000006F4
    lwz r0, 0x100(r30)
    subi r5, r16, 0x100
    lwz r3, lbl_8087EEB0
    add r4, r0, r15
    lfs f2, lbl_80885CBC
    lfs f1, 0x14(r4)
    addi r4, r4, 0x4
    bl fn_80063D3C
lbl_fn_803C221C_000006F4:
    addi r21, r21, 0x1
    addi r15, r15, 0x40
lbl_fn_803C221C_000006FC:
    lwz r0, 0xfc(r30)
    cmplw r21, r0
    blt lbl_fn_803C221C_0000063C
lbl_fn_803C221C_00000708:
    lwz r0, 0x24c(r1)
    cmpwi r0, 0x0
    beq lbl_fn_803C221C_000007C4
    lis r17, lbl_807C8600@ha
    lfs f30, lbl_80885CE4
    addi r17, r17, lbl_807C8600@l
    li r18, 0x0
    li r15, 0x0
    li r16, 0x1
    b lbl_fn_803C221C_000007B8
lbl_fn_803C221C_00000730:
    lwz r0, 0x7c(r30)
    add r4, r0, r15
    lwz r0, 0x24(r4)
    cmpwi r0, 0x0
    beq lbl_fn_803C221C_000007B0
    lbz r0, lbl_8087F478
    extsb. r0, r0
    bne lbl_fn_803C221C_00000754
    stb r16, lbl_8087F478
lbl_fn_803C221C_00000754:
    psq_l f1, 0x4(r4), 0, 0
    mr r3, r31
    lfs f2, 0xc(r4)
    mr r4, r17
    stfs f2, 0x8(r17)
    psq_st f1, 0x0(r17), 0, 0
    stfs f30, 0xc(r17)
    bl fn_8004FF58
    cmpwi r3, 0x0
    beq lbl_fn_803C221C_000007B0
    lwz r0, 0x7c(r30)
    li r4, 0xa
    lwz r3, lbl_8087EEB0
    li r5, -0x8000
    add r6, r0, r15
    lfs f4, lbl_80885CBC
    lfs f1, 0x4(r6)
    lfs f2, 0x8(r6)
    lfs f3, 0xc(r6)
    lfs f5, lbl_80885CE4
    lfs f6, lbl_80885CDC
    lfs f7, 0x14(r6)
    bl fn_80062F7C
lbl_fn_803C221C_000007B0:
    addi r18, r18, 0x1
    addi r15, r15, 0x28
lbl_fn_803C221C_000007B8:
    lwz r0, 0x78(r30)
    cmplw r18, r0
    blt lbl_fn_803C221C_00000730
lbl_fn_803C221C_000007C4:
    lwz r0, 0x258(r1)
    cmpwi r0, 0x0
    beq lbl_fn_803C221C_000009EC
    lis r28, lbl_807C8600@ha
    lfs f30, lbl_80885CBC
    addi r26, r1, 0x170
    addi r27, r1, 0x164
    addi r28, r28, lbl_807C8600@l
    li r21, 0x0
    li r15, 0x0
    li r25, 0x1
    lis r18, 0xff01
    lis r19, 0xff00
    lis r16, 0x7701
    lis r17, 0x7700
    b lbl_fn_803C221C_000009E0
lbl_fn_803C221C_00000804:
    lwz r0, 0xe8(r30)
    addi r3, r1, 0x210
    li r4, 0x79
    add r5, r0, r15
    lfs f1, 0x14(r5)
    bl fn_805F8E70
    lwz r0, 0xe8(r30)
    mr r20, r21
    add r3, r0, r15
    psq_l f1, 0x4(r3), 0, 0
    lfs f2, 0xc(r3)
    stfs f2, 0x178(r1)
    psq_st f1, 0x0(r26), 0, 0
    lfs f2, 0x20(r3)
    psq_l f1, 0x18(r3), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    lfs f3, 0x174(r1)
    lfs f0, 0x168(r1)
    stfs f2, 0x16c(r1)
    fadds f0, f3, f0
    stfs f0, 0x174(r1)
    lwz r0, 0x2c(r3)
    cmpwi r0, 0x0
    blt lbl_fn_803C221C_00000868
    mr r20, r0
lbl_fn_803C221C_00000868:
    addi r3, r1, 0x164
    bl fn_805F9940
    lbz r0, lbl_8087F478
    fmr f0, f1
    extsb. r0, r0
    bne lbl_fn_803C221C_00000884
    stb r25, lbl_8087F478
lbl_fn_803C221C_00000884:
    psq_l f1, 0x0(r26), 0, 0
    mr r3, r31
    lfs f2, 0x178(r1)
    mr r4, r28
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x8(r28)
    stfs f0, 0xc(r28)
    bl fn_8004FF58
    cmpwi r3, 0x0
    beq lbl_fn_803C221C_000009D8
    lwz r5, 0x134(r30)
    mulli r0, r20, 0xc
    lwz r3, lbl_8087EEB0
    addi r4, r1, 0x170
    lwz r6, 0x100(r5)
    addi r5, r1, 0x164
    lfs f1, lbl_80885CBC
    lwzx r0, r6, r0
    addi r6, r19, 0x407f
    srwi r0, r0, 31
    xori r20, r0, 0x1
    cmpwi r20, 0x0
    beq lbl_fn_803C221C_000008E4
    subi r6, r18, 0x7f01
lbl_fn_803C221C_000008E4:
    addi r7, r1, 0x210
    bl fn_800629F0
    lwz r0, 0xe8(r30)
    add r3, r0, r15
    lwz r0, 0x40(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803C221C_000009D8
    lfs f0, 0x16c(r1)
    addi r4, r1, 0x158
    stfs f30, 0x158(r1)
    mr r5, r4
    fneg f3, f0
    addi r3, r1, 0x210
    stfs f30, 0x15c(r1)
    stfs f0, 0x160(r1)
    stfs f30, 0x14c(r1)
    stfs f30, 0x150(r1)
    stfs f3, 0x154(r1)
    bl fn_805F93C0
    addi r4, r1, 0x14c
    addi r3, r1, 0x210
    mr r5, r4
    bl fn_805F93C0
    lfs f3, 0x15c(r1)
    cmpwi r20, 0x0
    lfs f4, 0x168(r1)
    addi r6, r17, 0x407f
    lfs f0, 0x150(r1)
    fadds f3, f3, f4
    fadds f0, f0, f4
    stfs f3, 0x15c(r1)
    stfs f0, 0x150(r1)
    beq lbl_fn_803C221C_0000096C
    subi r6, r16, 0x7f01
lbl_fn_803C221C_0000096C:
    lfs f3, 0x154(r1)
    addi r4, r1, 0xa4
    lfs f5, 0x178(r1)
    addi r5, r1, 0x98
    lfs f0, 0x160(r1)
    fadds f7, f3, f5
    lfs f4, 0x150(r1)
    fadds f5, f0, f5
    lfs f3, 0x174(r1)
    lfs f0, 0x15c(r1)
    fadds f8, f4, f3
    fadds f6, f0, f3
    lfs f4, 0x14c(r1)
    lfs f3, 0x170(r1)
    lfs f0, 0x158(r1)
    fadds f4, f4, f3
    stfs f8, 0x9c(r1)
    fadds f0, f0, f3
    lwz r3, lbl_8087EEB0
    stfs f4, 0x98(r1)
    lfs f1, lbl_80885CBC
    stfs f7, 0xa0(r1)
    lfs f2, lbl_80885CE8
    stfs f0, 0xa4(r1)
    stfs f6, 0xa8(r1)
    stfs f5, 0xac(r1)
    bl fn_800638B0
lbl_fn_803C221C_000009D8:
    addi r21, r21, 0x1
    addi r15, r15, 0x48
lbl_fn_803C221C_000009E0:
    lwz r0, 0xe4(r30)
    cmplw r21, r0
    blt lbl_fn_803C221C_00000804
lbl_fn_803C221C_000009EC:
    lwz r0, 0x25c(r1)
    cmpwi r0, 0x0
    beq lbl_fn_803C221C_00000AC0
    lis r20, lbl_807C8600@ha
    li r21, 0x0
    addi r20, r20, lbl_807C8600@l
    li r15, 0x0
    li r18, 0x1
    lis r16, 0xff01
    lis r17, 0xff00
    b lbl_fn_803C221C_00000AB4
lbl_fn_803C221C_00000A18:
    lwz r0, 0xf0(r30)
    mr r19, r21
    add r4, r0, r15
    lwz r0, 0x20(r4)
    cmpwi r0, 0x0
    blt lbl_fn_803C221C_00000A34
    mr r19, r0
lbl_fn_803C221C_00000A34:
    lbz r0, lbl_8087F478
    lfs f0, 0x14(r4)
    extsb. r0, r0
    bne lbl_fn_803C221C_00000A48
    stb r18, lbl_8087F478
lbl_fn_803C221C_00000A48:
    psq_l f1, 0x4(r4), 0, 0
    mr r3, r31
    lfs f2, 0xc(r4)
    mr r4, r20
    stfs f2, 0x8(r20)
    psq_st f1, 0x0(r20), 0, 0
    stfs f0, 0xc(r20)
    bl fn_8004FF58
    cmpwi r3, 0x0
    beq lbl_fn_803C221C_00000AAC
    lwz r3, 0x134(r30)
    mulli r0, r19, 0xc
    addi r5, r17, 0x407f
    lwz r3, 0x110(r3)
    lwzx r0, r3, r0
    cmpwi r0, 0x0
    blt lbl_fn_803C221C_00000A90
    subi r5, r16, 0x7f01
lbl_fn_803C221C_00000A90:
    lwz r0, 0xf0(r30)
    lwz r3, lbl_8087EEB0
    add r4, r0, r15
    lfs f2, lbl_80885CBC
    lfs f1, 0x14(r4)
    addi r4, r4, 0x4
    bl fn_80063D3C
lbl_fn_803C221C_00000AAC:
    addi r21, r21, 0x1
    addi r15, r15, 0x28
lbl_fn_803C221C_00000AB4:
    lwz r0, 0xec(r30)
    cmplw r21, r0
    blt lbl_fn_803C221C_00000A18
lbl_fn_803C221C_00000AC0:
    lwz r0, 0x244(r1)
    lis r5, lbl_807500B8@ha
    lwzu r4, lbl_807500B8@l(r5)
    cmpwi r0, 0x0
    stw r4, 0x140(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x144(r1)
    stw r0, 0x148(r1)
    beq lbl_fn_803C221C_00000E3C
    lis r27, lbl_807C8600@ha
    lfs f30, lbl_80885CEC
    addi r27, r27, lbl_807C8600@l
    addi r16, r1, 0x140
    li r21, 0x0
    li r15, 0x0
    li r26, 0x1
    lis r17, 0x5555
    lis r25, 0xff00
    b lbl_fn_803C221C_00000C20
lbl_fn_803C221C_00000B10:
    lwz r0, 0x9c(r30)
    add r4, r0, r15
    lwz r0, 0x2c(r4)
    cmpwi r0, 0x0
    beq lbl_fn_803C221C_00000C18
    lfs f3, 0xc(r4)
    addi r3, r1, 0x8c
    lfs f0, 0x114(r24)
    lfs f5, 0x8(r4)
    fsubs f6, f3, f0
    lfs f4, 0x110(r24)
    lfs f3, 0x4(r4)
    lfs f0, 0x10c(r24)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x90(r1)
    stfs f0, 0x8c(r1)
    stfs f6, 0x94(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f31
    bge lbl_fn_803C221C_00000C18
    lbz r0, lbl_8087F478
    lwz r3, 0x9c(r30)
    extsb. r0, r0
    add r4, r3, r15
    lfs f0, 0x14(r4)
    bne lbl_fn_803C221C_00000B80
    stb r26, lbl_8087F478
lbl_fn_803C221C_00000B80:
    psq_l f1, 0x4(r4), 0, 0
    mr r3, r31
    lfs f2, 0xc(r4)
    mr r4, r27
    stfs f2, 0x8(r27)
    psq_st f1, 0x0(r27), 0, 0
    stfs f0, 0xc(r27)
    bl fn_8004FF58
    cmpwi r3, 0x0
    beq lbl_fn_803C221C_00000C18
    lwz r0, 0x260(r1)
    addi r5, r25, 0xff
    cmpwi r0, 0x0
    beq lbl_fn_803C221C_00000BEC
    lwz r0, 0x9c(r30)
    add r3, r0, r15
    lwz r4, 0x20(r3)
    cmpwi r4, 0x0
    ble lbl_fn_803C221C_00000BEC
    addi r0, r17, 0x5556
    mulhw r3, r0, r4
    srwi r0, r3, 31
    add r0, r3, r0
    mulli r0, r0, 0x3
    subf r0, r0, r4
    slwi r0, r0, 2
    lwzx r5, r16, r0
lbl_fn_803C221C_00000BEC:
    lwz r0, 0x9c(r30)
    li r4, 0xc
    lwz r3, lbl_8087EEB0
    add r6, r0, r15
    lfs f4, lbl_80885CBC
    lfs f0, 0x8(r6)
    lfs f1, 0x4(r6)
    fadds f2, f30, f0
    lfs f3, 0xc(r6)
    lfs f5, 0x14(r6)
    bl fn_80063200
lbl_fn_803C221C_00000C18:
    addi r21, r21, 0x1
    addi r15, r15, 0x30
lbl_fn_803C221C_00000C20:
    lwz r0, 0x98(r30)
    cmplw r21, r0
    blt lbl_fn_803C221C_00000B10
    lis r23, lbl_807C8610@ha
    lwz r26, 0x260(r1)
    lfs f30, lbl_80885CB8
    addi r28, r1, 0x140
    addi r23, r23, lbl_807C8610@l
    addi r22, r1, 0x134
    addi r21, r1, 0x128
    li r20, 0x0
    li r17, 0x0
    li r16, 0x0
    lis r27, 0x5555
    lis r25, 0xff00
    li r29, 0x1
    b lbl_fn_803C221C_00000E30
lbl_fn_803C221C_00000C64:
    li r19, 0x0
    li r15, 0x0
    b lbl_fn_803C221C_00000E10
lbl_fn_803C221C_00000C70:
    lwz r0, 0x9c(r30)
    cmpwi r26, 0x0
    addi r18, r25, 0xff
    add r5, r0, r17
    add r4, r0, r15
    lwz r5, 0x20(r5)
    lwz r0, 0x20(r4)
    beq lbl_fn_803C221C_00000CC8
    cmpwi r5, 0x0
    ble lbl_fn_803C221C_00000CC8
    cmpwi r0, 0x0
    ble lbl_fn_803C221C_00000CC8
    cmpw r5, r0
    bne lbl_fn_803C221C_00000CC8
    addi r0, r27, 0x5556
    mulhw r4, r0, r5
    srwi r0, r4, 31
    add r0, r4, r0
    mulli r0, r0, 0x3
    subf r0, r0, r5
    slwi r0, r0, 2
    lwzx r18, r28, r0
lbl_fn_803C221C_00000CC8:
    mr r4, r19
    bl fn_803CD958
    clrlwi r3, r3, 16
    addi r0, r19, 0x1
    cmplw r0, r3
    bne lbl_fn_803C221C_00000E08
    lbz r0, lbl_8087F479
    lwz r3, 0x9c(r30)
    extsb. r0, r0
    add r5, r3, r15
    add r4, r3, r17
    bne lbl_fn_803C221C_00000CFC
    stb r29, lbl_8087F479
lbl_fn_803C221C_00000CFC:
    psq_l f1, 0x4(r4), 0, 0
    mr r3, r31
    lfs f2, 0xc(r4)
    mr r4, r23
    stfs f2, 0x8(r23)
    psq_st f1, 0x0(r23), 0, 0
    psq_l f1, 0x4(r5), 0, 0
    lfs f2, 0xc(r5)
    stfs f2, 0x14(r23)
    psq_st f1, 0xc(r23), 0, 0
    bl fn_800502A8
    cmpwi r3, 0x0
    beq lbl_fn_803C221C_00000E08
    lwz r0, 0x9c(r30)
    addi r3, r1, 0x80
    add r4, r0, r17
    add r5, r0, r15
    lfs f2, 0xc(r4)
    psq_l f1, 0x4(r4), 0, 0
    psq_st f1, 0x0(r22), 0, 0
    frsp f6, f2
    stfs f2, 0x13c(r1)
    lfs f3, 0x138(r1)
    lfs f2, 0xc(r5)
    psq_l f1, 0x4(r5), 0, 0
    fadds f7, f3, f30
    psq_st f1, 0x0(r21), 0, 0
    lfs f3, 0x134(r1)
    lfs f0, 0x12c(r1)
    stfs f2, 0x130(r1)
    fadds f0, f0, f30
    stfs f7, 0x138(r1)
    stfs f0, 0x12c(r1)
    lfs f5, 0x114(r24)
    lfs f4, 0x110(r24)
    lfs f0, 0x10c(r24)
    fsubs f5, f6, f5
    fsubs f4, f7, f4
    fsubs f0, f3, f0
    stfs f5, 0x88(r1)
    stfs f0, 0x80(r1)
    stfs f4, 0x84(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f31
    bge lbl_fn_803C221C_00000E08
    lfs f3, 0x130(r1)
    addi r3, r1, 0x74
    lfs f0, 0x114(r24)
    lfs f5, 0x12c(r1)
    fsubs f6, f3, f0
    lfs f4, 0x110(r24)
    lfs f0, 0x10c(r24)
    lfs f3, 0x128(r1)
    fsubs f4, f5, f4
    stfs f6, 0x7c(r1)
    fsubs f0, f3, f0
    stfs f4, 0x78(r1)
    stfs f0, 0x74(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f31
    bge lbl_fn_803C221C_00000E08
    lwz r3, lbl_8087EEB0
    mr r4, r22
    lfs f1, lbl_80885CBC
    mr r5, r21
    mr r6, r18
    bl fn_80063764
lbl_fn_803C221C_00000E08:
    addi r19, r19, 0x1
    addi r15, r15, 0x30
lbl_fn_803C221C_00000E10:
    lwz r0, 0xa4(r30)
    add r3, r0, r16
    lhzx r0, r16, r0
    cmplw r19, r0
    blt lbl_fn_803C221C_00000C70
    addi r20, r20, 0x1
    addi r17, r17, 0x30
    addi r16, r16, 0x8
lbl_fn_803C221C_00000E30:
    lwz r0, 0xa0(r30)
    cmplw r20, r0
    blt lbl_fn_803C221C_00000C64
lbl_fn_803C221C_00000E3C:
    lwz r0, 0x248(r1)
    cmpwi r0, 0x0
    beq lbl_fn_803C221C_00001274
    lis r17, lbl_807C8600@ha
    lfs f29, lbl_80885CDC
    lfs f30, lbl_80885CB8
    addi r17, r17, lbl_807C8600@l
    li r18, 0x0
    li r19, 0x0
    li r16, 0x1
    lis r15, 0xffff
    b lbl_fn_803C221C_00000F38
lbl_fn_803C221C_00000E6C:
    lwz r0, 0xb0(r30)
    add r4, r0, r19
    lwz r0, 0x38(r4)
    cmpwi r0, 0x0
    beq lbl_fn_803C221C_00000F30
    lfs f3, 0xc(r4)
    addi r3, r1, 0x68
    lfs f0, 0x114(r24)
    lfs f5, 0x8(r4)
    fsubs f6, f3, f0
    lfs f4, 0x110(r24)
    lfs f3, 0x4(r4)
    lfs f0, 0x10c(r24)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x6c(r1)
    stfs f0, 0x68(r1)
    stfs f6, 0x70(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f31
    bge lbl_fn_803C221C_00000F30
    lbz r0, lbl_8087F478
    lwz r3, 0xb0(r30)
    extsb. r0, r0
    add r4, r3, r19
    bne lbl_fn_803C221C_00000ED8
    stb r16, lbl_8087F478
lbl_fn_803C221C_00000ED8:
    psq_l f1, 0x4(r4), 0, 0
    mr r3, r31
    lfs f2, 0xc(r4)
    mr r4, r17
    stfs f2, 0x8(r17)
    psq_st f1, 0x0(r17), 0, 0
    stfs f29, 0xc(r17)
    bl fn_8004FF58
    cmpwi r3, 0x0
    beq lbl_fn_803C221C_00000F30
    lwz r0, 0xb0(r30)
    addi r5, r15, 0xff
    lwz r3, lbl_8087EEB0
    li r4, 0x8
    add r6, r0, r19
    lfs f4, lbl_80885CBC
    lfs f0, 0x8(r6)
    lfs f1, 0x4(r6)
    fadds f2, f30, f0
    lfs f3, 0xc(r6)
    lfs f5, lbl_80885CDC
    bl fn_80063200
lbl_fn_803C221C_00000F30:
    addi r18, r18, 0x1
    addi r19, r19, 0x40
lbl_fn_803C221C_00000F38:
    lwz r0, 0xac(r30)
    cmplw r18, r0
    blt lbl_fn_803C221C_00000E6C
    lis r17, lbl_807C8610@ha
    lfs f30, lbl_80885CB8
    addi r17, r17, lbl_807C8610@l
    addi r20, r1, 0x11c
    addi r21, r1, 0x110
    li r18, 0x0
    li r19, 0x0
    li r16, 0x1
    lis r15, 0xffff
    b lbl_fn_803C221C_000010D0
lbl_fn_803C221C_00000F6C:
    lwz r0, 0xb8(r30)
    add r22, r0, r19
    lwz r0, 0x8(r22)
    cmpwi r0, 0x0
    beq lbl_fn_803C221C_000010C8
    lbz r0, lbl_8087F479
    lwz r3, 0x4(r22)
    extsb. r0, r0
    lwz r4, 0x0(r22)
    lwz r0, 0xb0(r30)
    slwi r3, r3, 6
    slwi r4, r4, 6
    add r5, r0, r3
    add r4, r0, r4
    bne lbl_fn_803C221C_00000FAC
    stb r16, lbl_8087F479
lbl_fn_803C221C_00000FAC:
    psq_l f1, 0x4(r4), 0, 0
    mr r3, r31
    lfs f2, 0xc(r4)
    mr r4, r17
    stfs f2, 0x8(r17)
    psq_st f1, 0x0(r17), 0, 0
    psq_l f1, 0x4(r5), 0, 0
    lfs f2, 0xc(r5)
    stfs f2, 0x14(r17)
    psq_st f1, 0xc(r17), 0, 0
    bl fn_800502A8
    cmpwi r3, 0x0
    beq lbl_fn_803C221C_000010C8
    lwz r0, 0x0(r22)
    addi r3, r1, 0x5c
    lwz r4, 0xb0(r30)
    slwi r0, r0, 6
    add r5, r4, r0
    lfs f2, 0xc(r5)
    psq_l f1, 0x4(r5), 0, 0
    psq_st f1, 0x0(r20), 0, 0
    frsp f6, f2
    stfs f2, 0x124(r1)
    lfs f0, 0x120(r1)
    lwz r0, 0x4(r22)
    fadds f7, f0, f30
    lfs f3, 0x11c(r1)
    slwi r0, r0, 6
    add r4, r4, r0
    lfs f2, 0xc(r4)
    psq_l f1, 0x4(r4), 0, 0
    psq_st f1, 0x0(r21), 0, 0
    lfs f0, 0x114(r1)
    stfs f2, 0x118(r1)
    fadds f0, f0, f30
    stfs f7, 0x120(r1)
    stfs f0, 0x114(r1)
    lfs f5, 0x114(r24)
    lfs f4, 0x110(r24)
    lfs f0, 0x10c(r24)
    fsubs f5, f6, f5
    fsubs f4, f7, f4
    fsubs f0, f3, f0
    stfs f5, 0x64(r1)
    stfs f0, 0x5c(r1)
    stfs f4, 0x60(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f31
    bge lbl_fn_803C221C_000010C8
    lfs f3, 0x118(r1)
    addi r3, r1, 0x50
    lfs f0, 0x114(r24)
    lfs f5, 0x114(r1)
    fsubs f6, f3, f0
    lfs f4, 0x110(r24)
    lfs f0, 0x10c(r24)
    lfs f3, 0x110(r1)
    fsubs f4, f5, f4
    stfs f6, 0x58(r1)
    fsubs f0, f3, f0
    stfs f4, 0x54(r1)
    stfs f0, 0x50(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f31
    bge lbl_fn_803C221C_000010C8
    lwz r3, lbl_8087EEB0
    mr r4, r20
    lfs f1, lbl_80885CBC
    mr r5, r21
    addi r6, r15, 0xff
    bl fn_80063764
lbl_fn_803C221C_000010C8:
    addi r18, r18, 0x1
    addi r19, r19, 0x18
lbl_fn_803C221C_000010D0:
    lwz r0, 0xb4(r30)
    cmplw r18, r0
    blt lbl_fn_803C221C_00000F6C
    lis r17, lbl_807C8610@ha
    lfs f30, lbl_80885CB8
    addi r17, r17, lbl_807C8610@l
    addi r20, r1, 0x104
    addi r21, r1, 0xf8
    li r18, 0x0
    li r19, 0x0
    li r16, 0x1
    lis r15, 0xff01
    b lbl_fn_803C221C_00001268
lbl_fn_803C221C_00001104:
    lwz r0, 0xc0(r30)
    add r22, r0, r19
    lwz r0, 0x8(r22)
    cmpwi r0, 0x0
    beq lbl_fn_803C221C_00001260
    lbz r0, lbl_8087F479
    lwz r3, 0x4(r22)
    extsb. r0, r0
    lwz r4, 0x0(r22)
    lwz r0, 0xb0(r30)
    slwi r3, r3, 6
    slwi r4, r4, 6
    add r5, r0, r3
    add r4, r0, r4
    bne lbl_fn_803C221C_00001144
    stb r16, lbl_8087F479
lbl_fn_803C221C_00001144:
    psq_l f1, 0x4(r4), 0, 0
    mr r3, r31
    lfs f2, 0xc(r4)
    mr r4, r17
    stfs f2, 0x8(r17)
    psq_st f1, 0x0(r17), 0, 0
    psq_l f1, 0x4(r5), 0, 0
    lfs f2, 0xc(r5)
    stfs f2, 0x14(r17)
    psq_st f1, 0xc(r17), 0, 0
    bl fn_800502A8
    cmpwi r3, 0x0
    beq lbl_fn_803C221C_00001260
    lwz r0, 0x0(r22)
    addi r3, r1, 0x44
    lwz r4, 0xb0(r30)
    slwi r0, r0, 6
    add r5, r4, r0
    lfs f2, 0xc(r5)
    psq_l f1, 0x4(r5), 0, 0
    psq_st f1, 0x0(r20), 0, 0
    frsp f6, f2
    stfs f2, 0x10c(r1)
    lfs f0, 0x108(r1)
    lwz r0, 0x4(r22)
    fadds f7, f0, f30
    lfs f3, 0x104(r1)
    slwi r0, r0, 6
    add r4, r4, r0
    lfs f2, 0xc(r4)
    psq_l f1, 0x4(r4), 0, 0
    psq_st f1, 0x0(r21), 0, 0
    lfs f0, 0xfc(r1)
    stfs f2, 0x100(r1)
    fadds f0, f0, f30
    stfs f7, 0x108(r1)
    stfs f0, 0xfc(r1)
    lfs f5, 0x114(r24)
    lfs f4, 0x110(r24)
    lfs f0, 0x10c(r24)
    fsubs f5, f6, f5
    fsubs f4, f7, f4
    fsubs f0, f3, f0
    stfs f5, 0x4c(r1)
    stfs f0, 0x44(r1)
    stfs f4, 0x48(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f31
    bge lbl_fn_803C221C_00001260
    lfs f3, 0x100(r1)
    addi r3, r1, 0x38
    lfs f0, 0x114(r24)
    lfs f5, 0xfc(r1)
    fsubs f6, f3, f0
    lfs f4, 0x110(r24)
    lfs f0, 0x10c(r24)
    lfs f3, 0xf8(r1)
    fsubs f4, f5, f4
    stfs f6, 0x40(r1)
    fsubs f0, f3, f0
    stfs f4, 0x3c(r1)
    stfs f0, 0x38(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f31
    bge lbl_fn_803C221C_00001260
    lwz r3, lbl_8087EEB0
    mr r4, r20
    lfs f1, lbl_80885CBC
    mr r5, r21
    subi r6, r15, 0x100
    bl fn_80063764
lbl_fn_803C221C_00001260:
    addi r18, r18, 0x1
    addi r19, r19, 0xc
lbl_fn_803C221C_00001268:
    lwz r0, 0xbc(r30)
    cmplw r18, r0
    blt lbl_fn_803C221C_00001104
lbl_fn_803C221C_00001274:
    lwz r0, 0x250(r1)
    cmpwi r0, 0x0
    beq lbl_fn_803C221C_00001514
    lis r17, lbl_807C8600@ha
    lfs f29, lbl_80885CDC
    lfs f30, lbl_80885CB8
    addi r17, r17, lbl_807C8600@l
    li r18, 0x0
    li r19, 0x0
    li r16, 0x1
    lis r15, 0xff80
    b lbl_fn_803C221C_00001370
lbl_fn_803C221C_000012A4:
    lwz r0, 0xc8(r30)
    add r4, r0, r19
    lwz r0, 0x2c(r4)
    cmpwi r0, 0x0
    beq lbl_fn_803C221C_00001368
    lfs f3, 0xc(r4)
    addi r3, r1, 0x2c
    lfs f0, 0x114(r24)
    lfs f5, 0x8(r4)
    fsubs f6, f3, f0
    lfs f4, 0x110(r24)
    lfs f3, 0x4(r4)
    lfs f0, 0x10c(r24)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x30(r1)
    stfs f0, 0x2c(r1)
    stfs f6, 0x34(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f31
    bge lbl_fn_803C221C_00001368
    lbz r0, lbl_8087F478
    lwz r3, 0xc8(r30)
    extsb. r0, r0
    add r4, r3, r19
    bne lbl_fn_803C221C_00001310
    stb r16, lbl_8087F478
lbl_fn_803C221C_00001310:
    psq_l f1, 0x4(r4), 0, 0
    mr r3, r31
    lfs f2, 0xc(r4)
    mr r4, r17
    stfs f2, 0x8(r17)
    psq_st f1, 0x0(r17), 0, 0
    stfs f29, 0xc(r17)
    bl fn_8004FF58
    cmpwi r3, 0x0
    beq lbl_fn_803C221C_00001368
    lwz r0, 0xc8(r30)
    addi r5, r15, 0x4000
    lwz r3, lbl_8087EEB0
    li r4, 0x8
    add r6, r0, r19
    lfs f4, lbl_80885CBC
    lfs f0, 0x8(r6)
    lfs f1, 0x4(r6)
    fadds f2, f30, f0
    lfs f3, 0xc(r6)
    lfs f5, lbl_80885CDC
    bl fn_80063200
lbl_fn_803C221C_00001368:
    addi r18, r18, 0x1
    addi r19, r19, 0x30
lbl_fn_803C221C_00001370:
    lwz r0, 0xc4(r30)
    cmplw r18, r0
    blt lbl_fn_803C221C_000012A4
    lis r17, lbl_807C8610@ha
    lfs f30, lbl_80885CB8
    addi r17, r17, lbl_807C8610@l
    addi r20, r1, 0xec
    addi r21, r1, 0xe0
    li r18, 0x0
    li r19, 0x0
    li r16, 0x1
    lis r15, 0xff80
    b lbl_fn_803C221C_00001508
lbl_fn_803C221C_000013A4:
    lwz r0, 0xd0(r30)
    lwz r3, 0xc8(r30)
    add r22, r0, r19
    lwzx r0, r19, r0
    mulli r0, r0, 0x30
    add r4, r3, r0
    lwz r0, 0x2c(r4)
    cmpwi r0, 0x0
    beq lbl_fn_803C221C_00001500
    lwz r5, 0x4(r22)
    lbz r0, lbl_8087F479
    mulli r5, r5, 0x30
    extsb. r0, r0
    add r5, r3, r5
    bne lbl_fn_803C221C_000013E4
    stb r16, lbl_8087F479
lbl_fn_803C221C_000013E4:
    psq_l f1, 0x4(r4), 0, 0
    mr r3, r31
    lfs f2, 0xc(r4)
    mr r4, r17
    stfs f2, 0x8(r17)
    psq_st f1, 0x0(r17), 0, 0
    psq_l f1, 0x4(r5), 0, 0
    lfs f2, 0xc(r5)
    stfs f2, 0x14(r17)
    psq_st f1, 0xc(r17), 0, 0
    bl fn_800502A8
    cmpwi r3, 0x0
    beq lbl_fn_803C221C_00001500
    lwz r0, 0x0(r22)
    addi r3, r1, 0x20
    lwz r4, 0xc8(r30)
    mulli r0, r0, 0x30
    add r5, r4, r0
    lfs f2, 0xc(r5)
    psq_l f1, 0x4(r5), 0, 0
    psq_st f1, 0x0(r20), 0, 0
    frsp f6, f2
    stfs f2, 0xf4(r1)
    lfs f0, 0xf0(r1)
    lwz r0, 0x4(r22)
    fadds f7, f0, f30
    lfs f3, 0xec(r1)
    mulli r0, r0, 0x30
    add r4, r4, r0
    lfs f2, 0xc(r4)
    psq_l f1, 0x4(r4), 0, 0
    psq_st f1, 0x0(r21), 0, 0
    lfs f0, 0xe4(r1)
    stfs f2, 0xe8(r1)
    fadds f0, f0, f30
    stfs f7, 0xf0(r1)
    stfs f0, 0xe4(r1)
    lfs f5, 0x114(r24)
    lfs f4, 0x110(r24)
    lfs f0, 0x10c(r24)
    fsubs f5, f6, f5
    fsubs f4, f7, f4
    fsubs f0, f3, f0
    stfs f5, 0x28(r1)
    stfs f0, 0x20(r1)
    stfs f4, 0x24(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f31
    bge lbl_fn_803C221C_00001500
    lfs f3, 0xe8(r1)
    addi r3, r1, 0x14
    lfs f0, 0x114(r24)
    lfs f5, 0xe4(r1)
    fsubs f6, f3, f0
    lfs f4, 0x110(r24)
    lfs f0, 0x10c(r24)
    lfs f3, 0xe0(r1)
    fsubs f4, f5, f4
    stfs f6, 0x1c(r1)
    fsubs f0, f3, f0
    stfs f4, 0x18(r1)
    stfs f0, 0x14(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f31
    bge lbl_fn_803C221C_00001500
    lwz r3, lbl_8087EEB0
    mr r4, r20
    lfs f1, lbl_80885CBC
    mr r5, r21
    addi r6, r15, 0x4000
    bl fn_80063764
lbl_fn_803C221C_00001500:
    addi r18, r18, 0x1
    addi r19, r19, 0x8
lbl_fn_803C221C_00001508:
    lwz r0, 0xcc(r30)
    cmplw r18, r0
    blt lbl_fn_803C221C_000013A4
lbl_fn_803C221C_00001514:
    lwz r0, 0x260(r1)
    cmpwi r0, 0x0
    beq lbl_fn_803C221C_00001638
    lis r3, 0x5555
    lis r22, lbl_807C8600@ha
    addi r21, r1, 0xd4
    addi r17, r1, 0x140
    addi r29, r3, 0x5556
    addi r22, r22, lbl_807C8600@l
    li r18, 0x0
    li r19, 0x0
    lis r16, 0xffb0
    li r15, 0x1
    b lbl_fn_803C221C_0000162C
lbl_fn_803C221C_0000154C:
    lwz r0, 0xf8(r30)
    addi r3, r1, 0x1e0
    li r4, 0x79
    add r5, r0, r19
    lfs f1, 0x14(r5)
    bl fn_805F8E70
    lwz r0, 0xf8(r30)
    add r5, r0, r19
    psq_l f1, 0x4(r5), 0, 0
    lfs f2, 0xc(r5)
    stfs f2, 0xdc(r1)
    psq_st f1, 0x0(r21), 0, 0
    lfs f3, 0xd8(r1)
    lfs f0, 0x1c(r5)
    fadds f0, f3, f0
    stfs f0, 0xd8(r1)
    lwz r4, 0x24(r5)
    lwz r0, 0x2c(r5)
    mulhw r3, r29, r4
    cmpwi r0, 0x0
    srwi r0, r3, 31
    add r0, r3, r0
    mulli r0, r0, 0x3
    subf r0, r0, r4
    slwi r0, r0, 2
    lwzx r20, r17, r0
    beq lbl_fn_803C221C_000015BC
    subi r20, r16, 0x100
lbl_fn_803C221C_000015BC:
    addi r3, r5, 0x18
    bl fn_805F9940
    lbz r0, lbl_8087F478
    fmr f0, f1
    extsb. r0, r0
    bne lbl_fn_803C221C_000015D8
    stb r15, lbl_8087F478
lbl_fn_803C221C_000015D8:
    psq_l f1, 0x0(r21), 0, 0
    mr r3, r31
    lfs f2, 0xdc(r1)
    mr r4, r22
    psq_st f1, 0x0(r22), 0, 0
    stfs f2, 0x8(r22)
    stfs f0, 0xc(r22)
    bl fn_8004FF58
    cmpwi r3, 0x0
    beq lbl_fn_803C221C_00001624
    lwz r0, 0xf8(r30)
    mr r6, r20
    lwz r3, lbl_8087EEB0
    addi r4, r1, 0xd4
    add r5, r0, r19
    lfs f1, lbl_80885CBC
    addi r7, r1, 0x1e0
    addi r5, r5, 0x18
    bl fn_800629F0
lbl_fn_803C221C_00001624:
    addi r18, r18, 0x1
    addi r19, r19, 0x30
lbl_fn_803C221C_0000162C:
    lwz r0, 0xf4(r30)
    cmplw r18, r0
    blt lbl_fn_803C221C_0000154C
lbl_fn_803C221C_00001638:
    lwz r0, 0x264(r1)
    cmpwi r0, 0x0
    beq lbl_fn_803C221C_00001740
    lis r17, lbl_807C8600@ha
    lfs f29, lbl_80885CE4
    addi r17, r17, lbl_807C8600@l
    li r18, 0x0
    li r19, 0x0
    li r16, 0x1
    lis r15, 0xff80
    b lbl_fn_803C221C_00001734
lbl_fn_803C221C_00001664:
    lwz r0, 0x108(r30)
    add r4, r0, r19
    lwz r0, 0x7c(r4)
    cmpwi r0, 0x0
    beq lbl_fn_803C221C_0000172C
    lfs f3, 0xc(r4)
    addi r3, r1, 0x8
    lfs f0, 0x114(r24)
    lfs f5, 0x8(r4)
    fsubs f6, f3, f0
    lfs f4, 0x110(r24)
    lfs f3, 0x4(r4)
    lfs f0, 0x10c(r24)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f6, 0x10(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f31
    bge lbl_fn_803C221C_0000172C
    lbz r0, lbl_8087F478
    lwz r3, 0x108(r30)
    extsb. r0, r0
    add r4, r3, r19
    bne lbl_fn_803C221C_000016D0
    stb r16, lbl_8087F478
lbl_fn_803C221C_000016D0:
    psq_l f1, 0x4(r4), 0, 0
    mr r3, r31
    lfs f2, 0xc(r4)
    mr r4, r17
    stfs f2, 0x8(r17)
    psq_st f1, 0x0(r17), 0, 0
    stfs f29, 0xc(r17)
    bl fn_8004FF58
    cmpwi r3, 0x0
    beq lbl_fn_803C221C_0000172C
    lwz r0, 0x108(r30)
    addi r5, r15, 0xff
    lwz r3, lbl_8087EEB0
    li r4, 0xc
    add r6, r0, r19
    lfs f4, lbl_80885CBC
    lfs f1, 0x4(r6)
    lfs f2, 0x8(r6)
    lfs f3, 0xc(r6)
    lfs f5, lbl_80885CE4
    lfs f6, lbl_80885CDC
    lfs f7, 0x14(r6)
    bl fn_80062F7C
lbl_fn_803C221C_0000172C:
    addi r18, r18, 0x1
    addi r19, r19, 0x80
lbl_fn_803C221C_00001734:
    lwz r0, 0x104(r30)
    cmplw r18, r0
    blt lbl_fn_803C221C_00001664
lbl_fn_803C221C_00001740:
    lwz r0, 0x268(r1)
    cmpwi r0, 0x0
    beq lbl_fn_803C221C_00001830
    lis r17, lbl_807C8600@ha
    addi r16, r1, 0xc8
    addi r17, r17, lbl_807C8600@l
    li r19, 0x0
    li r18, 0x0
    li r15, 0x1
    b lbl_fn_803C221C_00001824
lbl_fn_803C221C_00001768:
    lwz r0, 0x110(r30)
    add r3, r0, r18
    lwz r0, 0x54(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803C221C_0000181C
    lfs f1, 0x14(r3)
    addi r3, r1, 0x1b0
    li r4, 0x79
    bl fn_805F8E70
    lwz r0, 0x110(r30)
    add r3, r0, r18
    psq_l f1, 0x4(r3), 0, 0
    lfs f2, 0xc(r3)
    stfs f2, 0xd0(r1)
    psq_st f1, 0x0(r16), 0, 0
    lfs f0, 0x1c(r3)
    addi r3, r3, 0x18
    lfs f3, 0xcc(r1)
    fadds f0, f3, f0
    stfs f0, 0xcc(r1)
    bl fn_805F9940
    lbz r0, lbl_8087F478
    fmr f0, f1
    extsb. r0, r0
    bne lbl_fn_803C221C_000017D0
    stb r15, lbl_8087F478
lbl_fn_803C221C_000017D0:
    psq_l f1, 0x0(r16), 0, 0
    mr r3, r31
    lfs f2, 0xd0(r1)
    mr r4, r17
    psq_st f1, 0x0(r17), 0, 0
    stfs f2, 0x8(r17)
    stfs f0, 0xc(r17)
    bl fn_8004FF58
    cmpwi r3, 0x0
    beq lbl_fn_803C221C_0000181C
    lwz r0, 0x110(r30)
    addi r4, r1, 0xc8
    lwz r3, lbl_8087EEB0
    addi r7, r1, 0x1b0
    add r5, r0, r18
    lfs f1, lbl_80885CBC
    li r6, -0x8000
    addi r5, r5, 0x18
    bl fn_800629F0
lbl_fn_803C221C_0000181C:
    addi r19, r19, 0x1
    addi r18, r18, 0x58
lbl_fn_803C221C_00001824:
    lwz r0, 0x10c(r30)
    cmplw r19, r0
    blt lbl_fn_803C221C_00001768
lbl_fn_803C221C_00001830:
    lwz r0, 0x26c(r1)
    cmpwi r0, 0x0
    beq lbl_fn_803C221C_00001924
    lis r19, lbl_807C8600@ha
    addi r17, r1, 0xbc
    addi r19, r19, lbl_807C8600@l
    li r20, 0x0
    li r18, 0x0
    li r16, 0x1
    lis r15, 0xff81
    b lbl_fn_803C221C_00001918
lbl_fn_803C221C_0000185C:
    lwz r0, 0x118(r30)
    add r3, r0, r18
    lwz r0, 0x4c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803C221C_00001910
    lfs f1, 0x14(r3)
    addi r3, r1, 0x180
    li r4, 0x79
    bl fn_805F8E70
    lwz r0, 0x118(r30)
    add r3, r0, r18
    psq_l f1, 0x4(r3), 0, 0
    lfs f2, 0xc(r3)
    stfs f2, 0xc4(r1)
    psq_st f1, 0x0(r17), 0, 0
    lfs f0, 0x1c(r3)
    addi r3, r3, 0x18
    lfs f3, 0xc0(r1)
    fadds f0, f3, f0
    stfs f0, 0xc0(r1)
    bl fn_805F9940
    lbz r0, lbl_8087F478
    fmr f0, f1
    extsb. r0, r0
    bne lbl_fn_803C221C_000018C4
    stb r16, lbl_8087F478
lbl_fn_803C221C_000018C4:
    psq_l f1, 0x0(r17), 0, 0
    mr r3, r31
    lfs f2, 0xc4(r1)
    mr r4, r19
    psq_st f1, 0x0(r19), 0, 0
    stfs f2, 0x8(r19)
    stfs f0, 0xc(r19)
    bl fn_8004FF58
    cmpwi r3, 0x0
    beq lbl_fn_803C221C_00001910
    lwz r0, 0x118(r30)
    addi r4, r1, 0xbc
    lwz r3, lbl_8087EEB0
    subi r6, r15, 0x100
    add r5, r0, r18
    lfs f1, lbl_80885CBC
    addi r7, r1, 0x180
    addi r5, r5, 0x18
    bl fn_800629F0
lbl_fn_803C221C_00001910:
    addi r20, r20, 0x1
    addi r18, r18, 0x50
lbl_fn_803C221C_00001918:
    lwz r0, 0x114(r30)
    cmplw r20, r0
    blt lbl_fn_803C221C_0000185C
lbl_fn_803C221C_00001924:
    li r16, 0x0
    li r15, 0x0
    b lbl_fn_803C221C_0000197C
lbl_fn_803C221C_00001930:
    lwz r0, 0xe0(r30)
    add r3, r0, r15
    lwz r0, 0x1c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803C221C_00001974
    lwz r4, 0x8(r3)
    cmpwi r4, 0x0
    beq lbl_fn_803C221C_00001974
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_803C221C_00001974
    lwz r0, 0xc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803C221C_00001974
    lwz r3, 0x4(r3)
    bl fn_8008CD60
lbl_fn_803C221C_00001974:
    addi r15, r15, 0x20
    addi r16, r16, 0x1
lbl_fn_803C221C_0000197C:
    lwz r0, 0xdc(r30)
    cmplw r16, r0
    blt lbl_fn_803C221C_00001930
    addi r11, r1, 0x2c0
    psq_l f31, 0x2e8(r1), 0, 0
    lfd f31, 0x2e0(r1)
    psq_l f30, 0x2d8(r1), 0, 0
    lfd f30, 0x2d0(r1)
    psq_l f29, 0x2c8(r1), 0, 0
    lfd f29, 0x2c0(r1)
    bl _restgpr_15
    lwz r0, 0x2f4(r1)
    mtlr r0
    addi r1, r1, 0x2f0
    blr
}
