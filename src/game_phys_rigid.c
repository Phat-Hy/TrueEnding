#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_17(void);
extern void _restgpr_19(void);
extern void _restgpr_24(void);
extern void _restgpr_26(void);
extern void _savegpr_17(void);
extern void _savegpr_19(void);
extern void _savegpr_24(void);
extern void _savegpr_26(void);
extern void dtor_80084684(void);
extern void fn_80044E98(void);
extern void fn_80044FBC(void);
extern void fn_8004ED34(void);
extern void fn_80092814(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_80105510(void);
extern void fn_80109864(void);
extern void fn_8011D1FC(void);
extern void fn_80133E24(void);
extern void fn_80133EE8(void);
extern void fn_80134134(void);
extern void fn_80134168(void);
extern void fn_801341B8(void);
extern void fn_8014FCE8(void);
extern void fn_8016F3D0(void);
extern void fn_80171DB0(void);
extern void fn_80211480(void);
extern void fn_80232B7C(void);
extern void fn_80239D58(void);
extern void fn_80239DAC(void);
extern void fn_8023A8B4(void);
extern void fn_80370174(void);
extern void fn_80373148(void);
extern void fn_803750E4(void);
extern void fn_80375184(void);
extern void fn_80376210(void);
extern void fn_803C1884(void);
extern void fn_8054E100(void);
extern void fn_805F9920(void);
extern void fn_80680CF8(void);
extern void fn_806846C4(void);
extern void fn_80686A48(void);

/* External data declarations */
extern u8 lbl_80735DD0[];
extern u8 lbl_80735EB0[];
extern u8 lbl_80735ED0[];
extern u8 lbl_80736040[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087F120;
extern u32 lbl_8087F1E4;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F408;
extern u32 lbl_8087F430;
extern u32 lbl_8087F8A0;
extern u32 lbl_8087F8A8;
extern u32 lbl_8087FA20;
extern u32 lbl_808813D0;
extern u32 lbl_80881478;
extern u32 lbl_80881494;
extern u32 lbl_8088149C;
extern u32 lbl_808814B4;
extern u32 lbl_8088151C;
extern u32 lbl_8088159C;
extern u32 lbl_808815DC;
extern u32 lbl_808815E0;
extern u32 lbl_808815E4;

/* Function declarations */
void fn_80109F7C(void);
void fn_8010A308(void);
void fn_8010A4A8(void);
void fn_8010A828(void);
void fn_8010A868(void);
void fn_8010AB34(void);
void fn_8010AB94(void);
void fn_8010ABF4(void);
void fn_8010AC60(void);
void fn_8010ACCC(void);
void fn_8010AEF4(void);
void fn_8010B180(void);
void fn_8010B250(void);
void fn_8010B398(void);

asm void fn_80109F7C(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    addi r11, r1, 0x60
    stfd f31, 0x70(r1)
    psq_st f31, 0x78(r1), 0, 0
    stfd f30, 0x60(r1)
    psq_st f30, 0x68(r1), 0, 0
    bl _savegpr_19
    lwz r4, lbl_8087F430
    mr r22, r3
    cmpwi r4, 0x0
    beq lbl_fn_80109F7C_00000050
    lwz r0, 0x54e4(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80109F7C_00000050
    mr r3, r4
    bl fn_80375184
    cmpwi r3, 0x0
    bne lbl_fn_80109F7C_00000364
lbl_fn_80109F7C_00000050:
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_80109F7C_00000064
    lwz r31, 0x48(r3)
    b lbl_fn_80109F7C_00000068
lbl_fn_80109F7C_00000064:
    li r31, 0x0
lbl_fn_80109F7C_00000068:
    cmpwi r31, 0x0
    beq lbl_fn_80109F7C_00000364
    lis r3, lbl_80735EB0@ha
    lfs f31, lbl_8088149C
    lfd f30, lbl_80735EB0@l(r3)
    mr r29, r22
    addis r21, r22, 0x3
    li r27, 0x0
    lis r19, 0x4330
    b lbl_fn_80109F7C_00000358
lbl_fn_80109F7C_00000090:
    addis r3, r29, 0x1
    li r4, 0x0
    lwz r26, -0x3410(r3)
    li r3, 0x0
    li r5, 0x0
    lwz r6, 0x38(r26)
    lwz r30, 0x64(r26)
    rlwinm r0, r6, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80109F7C_000000C8
    clrlwi r0, r6, 31
    cmplwi r0, 0x1
    beq lbl_fn_80109F7C_000000C8
    li r5, 0x1
lbl_fn_80109F7C_000000C8:
    cmpwi r5, 0x0
    beq lbl_fn_80109F7C_000000E4
    lwz r0, 0x7e0(r26)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_80109F7C_000000E4
    li r3, 0x1
lbl_fn_80109F7C_000000E4:
    cmpwi r3, 0x0
    beq lbl_fn_80109F7C_00000118
    lwz r0, 0x55c(r26)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_80109F7C_0000010C
    lwz r0, 0x560(r26)
    cmpwi r0, 0x1c
    bne lbl_fn_80109F7C_0000010C
    li r3, 0x1
lbl_fn_80109F7C_0000010C:
    cmpwi r3, 0x0
    bne lbl_fn_80109F7C_00000118
    li r4, 0x1
lbl_fn_80109F7C_00000118:
    cmpwi r4, 0x0
    beq lbl_fn_80109F7C_00000350
    lwz r0, 0x48(r26)
    cmpwi r0, 0x2
    bne lbl_fn_80109F7C_00000350
    lwz r0, 0xd18(r26)
    cmpwi r0, 0x0
    bgt lbl_fn_80109F7C_00000350
    cmpwi r30, 0x0
    beq lbl_fn_80109F7C_00000350
    addi r3, r26, 0xd74
    bl fn_8011D1FC
    cmpwi r3, 0x0
    bne lbl_fn_80109F7C_00000350
    lwz r0, 0x146c(r26)
    cmpwi r0, 0x17
    beq lbl_fn_80109F7C_00000190
    bge lbl_fn_80109F7C_00000178
    cmpwi r0, 0x2
    beq lbl_fn_80109F7C_00000190
    bge lbl_fn_80109F7C_00000350
    cmpwi r0, 0x1
    bge lbl_fn_80109F7C_00000350
    b lbl_fn_80109F7C_00000190
lbl_fn_80109F7C_00000178:
    cmpwi r0, 0x48
    beq lbl_fn_80109F7C_00000190
    bge lbl_fn_80109F7C_00000350
    cmpwi r0, 0x45
    beq lbl_fn_80109F7C_00000190
    b lbl_fn_80109F7C_00000350
lbl_fn_80109F7C_00000190:
    lfs f1, 0x530(r31)
    addi r3, r1, 0x14
    lfs f0, 0x530(r26)
    li r25, 0x0
    lfs f3, 0x52c(r31)
    fsubs f4, f1, f0
    lfs f2, 0x52c(r26)
    lfs f1, 0x528(r31)
    lfs f0, 0x528(r26)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0x18(r1)
    stfs f0, 0x14(r1)
    stfs f4, 0x1c(r1)
    bl fn_805F9920
    lfs f0, 0x2c(r30)
    fmuls f0, f0, f0
    fcmpo cr0, f1, f0
    bge lbl_fn_80109F7C_000001E0
    li r25, 0x1
lbl_fn_80109F7C_000001E0:
    lwz r0, 0x940(r26)
    stw r19, 0x20(r1)
    xoris r0, r0, 0x8000
    lfs f0, 0x7d8(r26)
    stw r0, 0x24(r1)
    lfd f1, 0x20(r1)
    fsubs f1, f1, f30
    fsubs f0, f1, f0
    fcmpo cr0, f0, f31
    ble lbl_fn_80109F7C_0000020C
    li r25, 0x1
lbl_fn_80109F7C_0000020C:
    cmpwi r25, 0x0
    bgt lbl_fn_80109F7C_0000033C
    mr r28, r22
    addis r20, r22, 0x3
    li r24, 0x0
    b lbl_fn_80109F7C_00000330
lbl_fn_80109F7C_00000224:
    addis r3, r28, 0x1
    lwz r23, -0x3410(r3)
    cmplw r23, r26
    beq lbl_fn_80109F7C_00000328
    lwz r0, 0x38(r23)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80109F7C_00000328
    lwz r0, 0xd18(r23)
    cmpwi r0, 0x0
    beq lbl_fn_80109F7C_00000328
    lfs f1, 0x530(r26)
    addi r3, r1, 0x8
    lfs f0, 0x530(r23)
    lfs f3, 0x52c(r26)
    fsubs f4, f1, f0
    lfs f2, 0x52c(r23)
    lfs f1, 0x528(r26)
    lfs f0, 0x528(r23)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f4, 0x10(r1)
    bl fn_805F9920
    lfs f0, 0x28(r30)
    fmuls f0, f0, f0
    fcmpo cr0, f1, f0
    bge lbl_fn_80109F7C_00000328
    lwz r0, 0x55c(r23)
    lwz r3, 0x560(r23)
    cmpwi r0, 0x6
    bne lbl_fn_80109F7C_000002E0
    li r0, 0x0
    bne lbl_fn_80109F7C_000002C4
    cmpwi r3, 0x4
    blt lbl_fn_80109F7C_000002C4
    cmpwi r3, 0xc
    bge lbl_fn_80109F7C_000002C4
    li r0, 0x1
lbl_fn_80109F7C_000002C4:
    cmpwi r0, 0x0
    bne lbl_fn_80109F7C_000002D8
    subi r0, r3, 0x1d
    cmplwi r0, 0x1
    bgt lbl_fn_80109F7C_000002E0
lbl_fn_80109F7C_000002D8:
    li r25, 0x1
    b lbl_fn_80109F7C_0000033C
lbl_fn_80109F7C_000002E0:
    mr r3, r26
    mr r4, r23
    li r5, 0x1
    bl fn_8016F3D0
    cmpwi r3, 0x0
    beq lbl_fn_80109F7C_00000328
    lwz r0, 0x940(r23)
    stw r19, 0x20(r1)
    xoris r0, r0, 0x8000
    lfs f0, 0x7d8(r23)
    stw r0, 0x24(r1)
    lfd f1, 0x20(r1)
    fsubs f1, f1, f30
    fsubs f0, f1, f0
    fcmpo cr0, f0, f31
    ble lbl_fn_80109F7C_00000328
    lwz r25, 0xd18(r23)
    b lbl_fn_80109F7C_0000033C
lbl_fn_80109F7C_00000328:
    addi r28, r28, 0x934
    addi r24, r24, 0x1
lbl_fn_80109F7C_00000330:
    lwz r0, 0x63b0(r20)
    cmpw r24, r0
    blt lbl_fn_80109F7C_00000224
lbl_fn_80109F7C_0000033C:
    cmpwi r25, 0x0
    ble lbl_fn_80109F7C_00000350
    stw r25, 0xd18(r26)
    mr r3, r26
    bl fn_80171DB0
lbl_fn_80109F7C_00000350:
    addi r29, r29, 0x934
    addi r27, r27, 0x1
lbl_fn_80109F7C_00000358:
    lwz r0, 0x63b0(r21)
    cmpw r27, r0
    blt lbl_fn_80109F7C_00000090
lbl_fn_80109F7C_00000364:
    addi r11, r1, 0x60
    psq_l f31, 0x78(r1), 0, 0
    lfd f31, 0x70(r1)
    psq_l f30, 0x68(r1), 0, 0
    lfd f30, 0x60(r1)
    bl _restgpr_19
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_8010A308(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    mr r6, r5
    mr r5, r4
    stw r0, 0xa4(r1)
    li r0, 0x0
    addi r4, r1, 0x28
    lis r7, 0x8000
    stfd f31, 0x90(r1)
    li r8, 0x0
    li r9, 0x0
    psq_st f31, 0x98(r1), 0, 0
    stfd f30, 0x80(r1)
    psq_st f30, 0x88(r1), 0, 0
    fmr f30, f1
    stw r31, 0x7c(r1)
    stw r30, 0x78(r1)
    mr r30, r3
    stw r0, 0x5c(r1)
    lwz r3, lbl_8087EE98
    stw r0, 0x60(r1)
    stw r0, 0x64(r1)
    stw r0, 0x68(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_8010A308_00000504
    lwz r3, 0x5c(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8010A308_00000504
    lwz r0, 0x0(r3)
    cmplwi r0, 0x1b
    bne lbl_fn_8010A308_00000504
    lfs f0, lbl_808814B4
    fcmpo cr0, f30, f0
    bge lbl_fn_8010A308_00000420
    li r31, 0x0
    b lbl_fn_8010A308_00000424
lbl_fn_8010A308_00000420:
    li r31, 0x1
lbl_fn_8010A308_00000424:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_8010A308_00000454
    bl fn_80373148
    cmpwi r3, 0x0
    beq lbl_fn_8010A308_00000454
    lwz r3, lbl_8087F430
    bl fn_80373148
    lwz r0, 0x48(r3)
    cmpwi r0, 0x1
    bne lbl_fn_8010A308_00000454
    li r31, 0x2
lbl_fn_8010A308_00000454:
    lfs f0, lbl_808815E0
    lfs f31, lbl_80881494
    fcmpo cr0, f30, f0
    ble lbl_fn_8010A308_0000046C
    lfs f0, lbl_808815DC
    fmuls f31, f30, f0
lbl_fn_8010A308_0000046C:
    li r3, 0x0
    li r4, 0x0
    bl fn_80232B7C
    lfs f0, lbl_80881494
    lis r8, lbl_807C7030@ha
    stfs f0, 0x18(r1)
    li r10, -0x1
    mulli r0, r31, 0xc
    addis r3, r30, 0x3
    stfs f0, 0x1c(r1)
    li r11, 0x1
    fmr f1, f31
    addi r7, r1, 0x2c
    add r3, r3, r0
    stfs f0, 0x20(r1)
    addi r4, r3, 0x64f8
    addi r8, r8, lbl_807C7030@l
    stfs f0, 0x24(r1)
    addi r9, r1, 0x18
    li r5, 0x0
    li r6, 0x0
    stw r10, 0x8(r1)
    li r10, -0x1
    stw r11, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lis r4, lbl_80735DD0@ha
    lfs f1, lbl_80881494
    addi r4, r4, lbl_80735DD0@l
    addi r3, r1, 0x10
    lwz r4, 0x5c(r4)
    addi r5, r1, 0x2c
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_8010A308_00000504:
    lwz r0, 0xa4(r1)
    psq_l f31, 0x98(r1), 0, 0
    lfd f31, 0x90(r1)
    psq_l f30, 0x88(r1), 0, 0
    lfd f30, 0x80(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_8010A4A8(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    addi r11, r1, 0x100
    stfd f31, 0x100(r1)
    psq_st f31, 0x108(r1), 0, 0
    bl _savegpr_26
    addis r5, r3, 0x4
    mr r29, r3
    lwz r7, -0x1cec(r5)
    mr r30, r4
    mr r6, r29
    li r8, 0x0
    mtctr r7
    cmplwi r7, 0x0
    ble lbl_fn_8010A4A8_000005A0
lbl_fn_8010A4A8_0000056C:
    addis r5, r6, 0x4
    lwz r0, -0x1ce8(r5)
    cmplw r0, r4
    bne lbl_fn_8010A4A8_00000594
    mulli r0, r8, 0xc
    addis r3, r3, 0x4
    li r4, 0x1
    add r3, r3, r0
    stw r4, -0x1ce4(r3)
    b lbl_fn_8010A4A8_0000088C
lbl_fn_8010A4A8_00000594:
    addi r6, r6, 0xc
    addi r8, r8, 0x1
    bdnz lbl_fn_8010A4A8_0000056C
lbl_fn_8010A4A8_000005A0:
    cmplwi r7, 0x4
    bge lbl_fn_8010A4A8_0000088C
    addis r5, r3, 0x4
    li r7, 0x1
    lwz r0, -0x1cec(r5)
    li r6, 0x0
    stw r4, 0x20(r1)
    mulli r0, r0, 0xc
    stw r7, 0x24(r1)
    add r0, r5, r0
    stw r6, 0x28(r1)
    subic. r5, r0, 0x1ce8
    beq lbl_fn_8010A4A8_000005E0
    stw r4, 0x0(r5)
    stw r7, 0x4(r5)
    stw r6, 0x8(r5)
lbl_fn_8010A4A8_000005E0:
    addis r5, r3, 0x4
    lwz r3, -0x1cec(r5)
    addi r0, r3, 0x1
    stw r0, -0x1cec(r5)
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_8010A4A8_00000624
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8010A4A8_00000624
    mr r3, r30
    mr r4, r0
    li r5, 0x1
    bl fn_8016F3D0
    cntlzw r0, r3
    srwi r31, r0, 5
    b lbl_fn_8010A4A8_00000634
lbl_fn_8010A4A8_00000624:
    lwz r3, 0x48(r4)
    subi r0, r3, 0x2
    cntlzw r0, r0
    srwi r31, r0, 5
lbl_fn_8010A4A8_00000634:
    lwz r4, 0x7e0(r30)
    rlwinm r3, r4, 0, 15, 15
    subis r0, r3, 0x1
    cmplwi r0, 0x0
    beq lbl_fn_8010A4A8_00000654
    rlwinm r0, r4, 0, 23, 23
    cmplwi r0, 0x100
    bne lbl_fn_8010A4A8_0000065C
lbl_fn_8010A4A8_00000654:
    cntlzw r0, r31
    srwi r31, r0, 5
lbl_fn_8010A4A8_0000065C:
    lfs f1, 0x60c(r30)
    cntlzw r0, r31
    lfs f0, lbl_8088159C
    srwi r26, r0, 5
    lfs f31, lbl_80881494
    fdivs f0, f1, f0
    fcmpo cr0, f31, f0
    ble lbl_fn_8010A4A8_00000680
    b lbl_fn_8010A4A8_00000684
lbl_fn_8010A4A8_00000680:
    fmr f31, f0
lbl_fn_8010A4A8_00000684:
    mr r3, r30
    li r4, 0x3e9
    bl fn_80232B7C
    lfs f0, lbl_80881494
    lis r7, lbl_807C7030@ha
    stfs f0, 0x10(r1)
    addi r7, r7, lbl_807C7030@l
    li r27, -0x1
    li r28, 0x1
    stfs f0, 0x14(r1)
    mulli r0, r26, 0x24
    addis r3, r29, 0x4
    fmr f1, f31
    stfs f0, 0x18(r1)
    mr r8, r7
    add r3, r3, r0
    stfs f0, 0x1c(r1)
    subi r4, r3, 0x1cb8
    addi r5, r30, 0xb0
    addi r9, r1, 0x10
    stw r27, 0x8(r1)
    li r6, 0x0
    li r10, -0x1
    stw r28, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lfs f0, lbl_80881478
    li r3, 0x0
    li r0, 0x5
    stw r3, 0x2c(r1)
    lwz r4, lbl_8087F1E4
    stfs f0, 0x30(r1)
    stfs f0, 0x34(r1)
    stw r3, 0x38(r1)
    stw r3, 0x40(r1)
    stw r3, 0x44(r1)
    stw r28, 0x48(r1)
    sth r3, 0x4c(r1)
    stfs f0, 0x8c(r1)
    stfs f0, 0x90(r1)
    stfs f0, 0x94(r1)
    stfs f0, 0x98(r1)
    stfs f0, 0x9c(r1)
    stfs f0, 0xa0(r1)
    stw r3, 0xa4(r1)
    stw r27, 0xa8(r1)
    stw r27, 0xac(r1)
    stw r3, 0xb0(r1)
    stw r3, 0xb4(r1)
    stw r3, 0xb8(r1)
    stw r3, 0xbc(r1)
    stw r3, 0xc0(r1)
    stw r3, 0xc4(r1)
    stw r3, 0xc8(r1)
    stw r3, 0xcc(r1)
    stw r3, 0xd0(r1)
    stw r3, 0xd4(r1)
    stw r3, 0xd8(r1)
    stw r3, 0xdc(r1)
    stw r0, 0x3c(r1)
    lwz r26, 0x1f4(r4)
    cmpwi r26, 0x0
    beq lbl_fn_8010A4A8_00000784
    b lbl_fn_8010A4A8_00000788
lbl_fn_8010A4A8_00000784:
    la r26, lbl_808813D0
lbl_fn_8010A4A8_00000788:
    addi r29, r1, 0x4c
    cmplw r26, r29
    beq lbl_fn_8010A4A8_000007B0
    mr r3, r26
    bl fn_80686A48
    mr r5, r3
    mr r3, r29
    mr r4, r26
    addi r5, r5, 0x1
    bl fn_806846C4
lbl_fn_8010A4A8_000007B0:
    lfs f1, lbl_80881478
    lis r4, lbl_80736040@ha
    lfs f0, lbl_8088151C
    addi r4, r4, lbl_80736040@l
    addi r26, r30, 0xb0
    stfs f1, 0x8c(r1)
    mr r3, r26
    addi r4, r4, 0x3f6
    stfs f0, 0x90(r1)
    li r5, 0x0
    stfs f1, 0x94(r1)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8010A4A8_000007F0
    li r0, 0x0
    b lbl_fn_8010A4A8_000007FC
lbl_fn_8010A4A8_000007F0:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r26)
    add r0, r3, r0
lbl_fn_8010A4A8_000007FC:
    cmpwi r0, 0x0
    stw r0, 0xdc(r1)
    bne lbl_fn_8010A4A8_00000820
    addi r0, r30, 0xb8
    stw r0, 0xdc(r1)
    lfs f0, 0x90(r1)
    lfs f1, 0x5b4(r30)
    fadds f0, f0, f1
    stfs f0, 0x90(r1)
lbl_fn_8010A4A8_00000820:
    lfs f0, lbl_808815E4
    cmpwi r31, 0x0
    lis r3, 0xffff
    stfs f0, 0x30(r1)
    addi r3, r3, 0x2020
    beq lbl_fn_8010A4A8_00000840
    lis r3, 0xff65
    subi r3, r3, 0x691a
lbl_fn_8010A4A8_00000840:
    li r0, 0x2
    stw r3, 0xa4(r1)
    lwz r3, lbl_8087F8A8
    addi r4, r1, 0x2c
    stw r0, 0x48(r1)
    bl fn_8054E100
    lwz r0, 0x48(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8010A4A8_0000088C
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_8010A4A8_0000088C
    li r4, 0x442
    bl fn_80370174
    cmpwi r3, 0x7
    blt lbl_fn_8010A4A8_0000088C
    lwz r3, lbl_8087F430
    li r4, 0xb4
    bl fn_803750E4
lbl_fn_8010A4A8_0000088C:
    addi r11, r1, 0x100
    psq_l f31, 0x108(r1), 0, 0
    lfd f31, 0x100(r1)
    bl _restgpr_26
    lwz r0, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_8010A828(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_8010A828_000008D4
    cmpwi r4, 0x0
    ble lbl_fn_8010A828_000008D4
    bl dtor_80084684
lbl_fn_8010A828_000008D4:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8010A868(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    addi r11, r1, 0x50
    stfd f31, 0x70(r1)
    psq_st f31, 0x78(r1), 0, 0
    stfd f30, 0x60(r1)
    psq_st f30, 0x68(r1), 0, 0
    stfd f29, 0x50(r1)
    psq_st f29, 0x58(r1), 0, 0
    bl _savegpr_24
    addis r27, r3, 0x4
    lfs f30, lbl_80881494
    mr r25, r27
    lfs f31, lbl_8088159C
    mr r26, r3
    li r28, -0x1
    li r29, 0x1
    lis r30, lbl_807C7030@ha
    lis r31, 0x2aab
    subi r27, r27, 0x1ce8
    b lbl_fn_8010A868_00000B70
lbl_fn_8010A868_00000944:
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_8010A868_00000974
    lwz r4, 0x48(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8010A868_00000974
    lwz r3, 0x0(r27)
    li r5, 0x1
    bl fn_8016F3D0
    cntlzw r0, r3
    srwi r24, r0, 5
    b lbl_fn_8010A868_00000988
lbl_fn_8010A868_00000974:
    lwz r3, 0x0(r27)
    lwz r3, 0x48(r3)
    subi r0, r3, 0x2
    cntlzw r0, r0
    srwi r24, r0, 5
lbl_fn_8010A868_00000988:
    lwz r4, 0x0(r27)
    lwz r5, 0x7e0(r4)
    rlwinm r3, r5, 0, 15, 15
    subis r0, r3, 0x1
    cmplwi r0, 0x0
    beq lbl_fn_8010A868_000009AC
    rlwinm r0, r5, 0, 23, 23
    cmplwi r0, 0x100
    bne lbl_fn_8010A868_000009B4
lbl_fn_8010A868_000009AC:
    cntlzw r0, r24
    srwi r24, r0, 5
lbl_fn_8010A868_000009B4:
    lwz r3, 0x4(r27)
    cmpwi r3, 0x0
    bgt lbl_fn_8010A868_00000AC4
    lfs f0, 0x60c(r4)
    cntlzw r0, r24
    srwi r24, r0, 5
    fdivs f29, f0, f31
    fcmpo cr0, f30, f29
    ble lbl_fn_8010A868_000009DC
    fmr f29, f30
lbl_fn_8010A868_000009DC:
    lwz r3, lbl_8087F3C0
    li r5, 0x3e9
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    li r5, 0x3ea
    lwz r4, 0x0(r27)
    li r6, 0x0
    bl fn_80239DAC
    li r3, 0x0
    li r4, 0x0
    bl fn_80232B7C
    lwz r4, 0x0(r27)
    addi r7, r30, lbl_807C7030@l
    mulli r0, r24, 0x24
    addis r3, r26, 0x4
    stfs f30, 0x20(r1)
    fmr f1, f29
    addi r5, r4, 0xb0
    stfs f30, 0x24(r1)
    add r3, r3, r0
    mr r8, r7
    stfs f30, 0x28(r1)
    subi r4, r3, 0x1ca0
    addi r9, r1, 0x20
    li r6, 0x0
    stfs f30, 0x2c(r1)
    li r10, -0x1
    stw r28, 0x8(r1)
    stw r29, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    addis r4, r26, 0x4
    subi r3, r31, 0x5555
    subi r0, r4, 0x1ce8
    subf r0, r0, r27
    mulhw r0, r3, r0
    srawi r0, r0, 1
    srwi r3, r0, 31
    add r5, r0, r3
    mulli r0, r5, 0xc
    add r6, r26, r0
    b lbl_fn_8010A868_00000AAC
lbl_fn_8010A868_00000A88:
    addis r3, r6, 0x4
    addi r6, r6, 0xc
    lwz r0, -0x1cdc(r3)
    addi r5, r5, 0x1
    stw r0, -0x1ce8(r3)
    lwz r0, -0x1cd8(r3)
    stw r0, -0x1ce4(r3)
    lwz r0, -0x1cd4(r3)
    stw r0, -0x1ce0(r3)
lbl_fn_8010A868_00000AAC:
    lwz r3, -0x1cec(r4)
    subi r0, r3, 0x1
    cmplw r5, r0
    blt lbl_fn_8010A868_00000A88
    stw r0, -0x1cec(r4)
    b lbl_fn_8010A868_00000B70
lbl_fn_8010A868_00000AC4:
    subi r0, r3, 0x1
    stw r0, 0x4(r27)
    lwz r0, 0x8(r27)
    cmpwi r0, 0x0
    bne lbl_fn_8010A868_00000B6C
    lwz r3, lbl_8087F3C0
    li r5, 0x3e9
    lwz r4, 0x0(r27)
    bl fn_80239D58
    cmpwi r3, 0x0
    bne lbl_fn_8010A868_00000B6C
    lwz r3, 0x0(r27)
    cntlzw r0, r24
    srwi r24, r0, 5
    lfs f0, 0x60c(r3)
    fdivs f29, f0, f31
    fcmpo cr0, f30, f29
    ble lbl_fn_8010A868_00000B10
    fmr f29, f30
lbl_fn_8010A868_00000B10:
    li r4, 0x3ea
    bl fn_80232B7C
    lwz r4, 0x0(r27)
    addi r7, r30, lbl_807C7030@l
    mulli r0, r24, 0x24
    addis r3, r26, 0x4
    stfs f30, 0x10(r1)
    fmr f1, f29
    addi r5, r4, 0xb0
    stfs f30, 0x14(r1)
    add r3, r3, r0
    mr r8, r7
    stfs f30, 0x18(r1)
    subi r4, r3, 0x1cac
    addi r9, r1, 0x10
    li r6, 0x0
    stfs f30, 0x1c(r1)
    li r10, -0x1
    stw r28, 0x8(r1)
    stw r29, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    stw r29, 0x8(r27)
lbl_fn_8010A868_00000B6C:
    addi r27, r27, 0xc
lbl_fn_8010A868_00000B70:
    lwz r0, -0x1cec(r25)
    mulli r0, r0, 0xc
    add r3, r25, r0
    subi r0, r3, 0x1ce8
    cmplw r27, r0
    bne lbl_fn_8010A868_00000944
    addi r11, r1, 0x50
    psq_l f31, 0x78(r1), 0, 0
    lfd f31, 0x70(r1)
    psq_l f30, 0x68(r1), 0, 0
    lfd f30, 0x60(r1)
    psq_l f29, 0x58(r1), 0, 0
    lfd f29, 0x50(r1)
    bl _restgpr_24
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_8010AB34(void)
{
    nofralloc
    addis r4, r3, 0x4
    lfs f2, -0x75d8(r4)
    lfs f1, -0x75fc(r4)
    lfs f0, -0x75f4(r4)
    fadds f1, f1, f2
    fcmpo cr0, f1, f0
    bge lbl_fn_8010AB34_00000BD8
    b lbl_fn_8010AB34_00000BDC
lbl_fn_8010AB34_00000BD8:
    fmr f1, f0
lbl_fn_8010AB34_00000BDC:
    lfs f3, lbl_80881478
    fcmpo cr0, f3, f1
    ble lbl_fn_8010AB34_00000BEC
    b lbl_fn_8010AB34_00000C0C
lbl_fn_8010AB34_00000BEC:
    addis r4, r3, 0x4
    lfs f1, -0x75fc(r4)
    lfs f0, -0x75f4(r4)
    fadds f3, f1, f2
    fcmpo cr0, f3, f0
    bge lbl_fn_8010AB34_00000C08
    b lbl_fn_8010AB34_00000C0C
lbl_fn_8010AB34_00000C08:
    fmr f3, f0
lbl_fn_8010AB34_00000C0C:
    addis r3, r3, 0x4
    stfs f3, -0x75fc(r3)
    blr
}

asm void fn_8010AB94(void)
{
    nofralloc
    addis r4, r3, 0x4
    lfs f2, -0x75d4(r4)
    lfs f1, -0x75fc(r4)
    lfs f0, -0x75f4(r4)
    fadds f1, f1, f2
    fcmpo cr0, f1, f0
    bge lbl_fn_8010AB94_00000C38
    b lbl_fn_8010AB94_00000C3C
lbl_fn_8010AB94_00000C38:
    fmr f1, f0
lbl_fn_8010AB94_00000C3C:
    lfs f3, lbl_80881478
    fcmpo cr0, f3, f1
    ble lbl_fn_8010AB94_00000C4C
    b lbl_fn_8010AB94_00000C6C
lbl_fn_8010AB94_00000C4C:
    addis r4, r3, 0x4
    lfs f1, -0x75fc(r4)
    lfs f0, -0x75f4(r4)
    fadds f3, f1, f2
    fcmpo cr0, f3, f0
    bge lbl_fn_8010AB94_00000C68
    b lbl_fn_8010AB94_00000C6C
lbl_fn_8010AB94_00000C68:
    fmr f3, f0
lbl_fn_8010AB94_00000C6C:
    addis r3, r3, 0x4
    stfs f3, -0x75fc(r3)
    blr
}

asm void fn_8010ABF4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    addis r4, r3, 0x4
    lfs f0, lbl_80881478
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stfs f0, -0x75fc(r4)
    bl fn_8010ACCC
    addis r8, r31, 0x4
    mr r3, r31
    lwz r7, -0x7370(r8)
    lwz r6, -0x736c(r8)
    lwz r5, -0x7368(r8)
    lwz r4, -0x7364(r8)
    lbz r0, -0x7360(r8)
    stw r7, -0x7348(r8)
    stw r6, -0x7344(r8)
    stw r5, -0x7340(r8)
    stw r4, -0x733c(r8)
    stb r0, -0x7338(r8)
    bl fn_8010AEF4
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8010AC60(void)
{
    nofralloc
    addis r5, r3, 0x4
    li r6, 0x0
    addis r7, r3, 0x1
    stw r6, -0x7348(r5)
    addis r4, r3, 0x3
    li r8, 0x0
    stw r6, -0x7344(r5)
    subi r7, r7, 0x3410
    stw r6, -0x7340(r5)
    stw r6, -0x733c(r5)
    stb r6, -0x7338(r5)
    b lbl_fn_8010AC60_00000D3C
lbl_fn_8010AC60_00000D14:
    lwz r5, 0x0(r7)
    cmpwi r5, 0x0
    beq lbl_fn_8010AC60_00000D30
    lwz r0, 0xd28(r5)
    cmpwi r0, 0x0
    beq lbl_fn_8010AC60_00000D30
    stw r6, 0xd28(r5)
lbl_fn_8010AC60_00000D30:
    stb r6, 0x92e(r7)
    addi r7, r7, 0x934
    addi r8, r8, 0x1
lbl_fn_8010AC60_00000D3C:
    lwz r0, 0x63b0(r4)
    cmpw r8, r0
    blt lbl_fn_8010AC60_00000D14
    li r4, 0x28
    b fn_80105510
}

asm void fn_8010ACCC(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    addis r11, r3, 0x4
    lis r4, lbl_80735EB0@ha
    li r0, 0x0
    lwz r10, -0x7370(r11)
    lis r8, 0x4330
    lwz r9, -0x736c(r11)
    lwz r7, -0x7368(r11)
    lwz r6, -0x7364(r11)
    lbz r5, -0x7360(r11)
    stw r10, -0x735c(r11)
    lfd f2, lbl_80735EB0@l(r4)
    stw r9, -0x7358(r11)
    stw r7, -0x7354(r11)
    stw r6, -0x7350(r11)
    stb r5, -0x734c(r11)
    stw r0, -0x7370(r11)
    stw r0, -0x736c(r11)
    stw r0, -0x7368(r11)
    stw r0, -0x7364(r11)
    stb r0, -0x7360(r11)
    lwz r4, lbl_8087F8A0
    lwz r9, 0x48(r4)
    b lbl_fn_8010ACCC_00000E60
lbl_fn_8010ACCC_00000DB0:
    lwz r0, 0x38(r9)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_8010ACCC_00000E5C
    lwz r5, 0x9f8(r9)
    cmpwi r5, 0x0
    ble lbl_fn_8010ACCC_00000E5C
    lwz r0, 0x54c(r9)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    beq lbl_fn_8010ACCC_00000E5C
    lwz r0, 0xc54(r9)
    cmpwi r0, 0x0
    beq lbl_fn_8010ACCC_00000E5C
    lwz r4, 0x954(r9)
    xoris r5, r5, 0x8000
    stw r5, 0xc(r1)
    addis r6, r3, 0x4
    xoris r7, r4, 0x8000
    lwz r0, 0x934(r9)
    stw r8, 0x8(r1)
    xoris r5, r0, 0x8000
    lwz r4, -0x7368(r6)
    lfd f0, 0x8(r1)
    stw r7, 0x14(r1)
    addi r0, r4, 0x1
    fsubs f1, f0, f2
    lwz r4, -0x7370(r6)
    stw r8, 0x10(r1)
    lfd f0, 0x10(r1)
    stw r5, 0x1c(r1)
    fsubs f0, f0, f2
    stw r8, 0x18(r1)
    fdivs f1, f1, f0
    lfd f0, 0x18(r1)
    stw r0, -0x7368(r6)
    fsubs f0, f0, f2
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x20(r1)
    lwz r0, 0x24(r1)
    add r0, r4, r0
    stw r0, -0x7370(r6)
lbl_fn_8010ACCC_00000E5C:
    lwz r9, 0x14ac(r9)
lbl_fn_8010ACCC_00000E60:
    cmpwi r9, 0x0
    bne lbl_fn_8010ACCC_00000DB0
    lwz r4, lbl_8087F408
    li r7, 0x1
    lwz r4, 0x48(r4)
    b lbl_fn_8010ACCC_00000F68
lbl_fn_8010ACCC_00000E78:
    lwz r9, 0x38(r4)
    li r6, 0x0
    li r5, 0x0
    li r8, 0x0
    rlwinm r0, r9, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_8010ACCC_00000EA4
    clrlwi r0, r9, 31
    cmplwi r0, 0x1
    beq lbl_fn_8010ACCC_00000EA4
    li r8, 0x1
lbl_fn_8010ACCC_00000EA4:
    cmpwi r8, 0x0
    beq lbl_fn_8010ACCC_00000EC0
    lwz r0, 0x7e0(r4)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_8010ACCC_00000EC0
    li r5, 0x1
lbl_fn_8010ACCC_00000EC0:
    cmpwi r5, 0x0
    beq lbl_fn_8010ACCC_00000EF4
    lwz r0, 0x55c(r4)
    li r5, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_8010ACCC_00000EE8
    lwz r0, 0x560(r4)
    cmpwi r0, 0x1c
    bne lbl_fn_8010ACCC_00000EE8
    li r5, 0x1
lbl_fn_8010ACCC_00000EE8:
    cmpwi r5, 0x0
    bne lbl_fn_8010ACCC_00000EF4
    li r6, 0x1
lbl_fn_8010ACCC_00000EF4:
    cmpwi r6, 0x0
    bne lbl_fn_8010ACCC_00000F10
    lwz r0, 0x54c(r4)
    rlwinm r5, r0, 0, 12, 12
    subis r0, r5, 0x8
    cmplwi r0, 0x0
    bne lbl_fn_8010ACCC_00000F64
lbl_fn_8010ACCC_00000F10:
    lwz r0, 0x54c(r4)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    beq lbl_fn_8010ACCC_00000F64
    lwz r0, 0xc54(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8010ACCC_00000F64
    addis r6, r3, 0x4
    lwz r0, 0x934(r4)
    lwz r5, -0x736c(r6)
    add r0, r5, r0
    stw r0, -0x736c(r6)
    lwz r0, 0x12a4(r4)
    extrwi r0, r0, 1, 9
    cmplwi r0, 0x1
    bne lbl_fn_8010ACCC_00000F54
    stb r7, -0x7360(r6)
lbl_fn_8010ACCC_00000F54:
    addis r6, r3, 0x4
    lwz r5, -0x7364(r6)
    addi r0, r5, 0x1
    stw r0, -0x7364(r6)
lbl_fn_8010ACCC_00000F64:
    lwz r4, 0x14ac(r4)
lbl_fn_8010ACCC_00000F68:
    cmpwi r4, 0x0
    bne lbl_fn_8010ACCC_00000E78
    addi r1, r1, 0x30
    blr
}

asm void fn_8010AEF4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    addis r4, r3, 0x4
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, -0x7334(r4)
    stw r0, -0x7330(r4)
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_8010AEF4_000011A0
    bl fn_80375184
    cmpwi r3, 0x0
    beq lbl_fn_8010AEF4_000011A0
    addis r3, r31, 0x4
    li r4, 0x0
    lwz r0, -0x7370(r3)
    cmpwi r0, 0x0
    ble lbl_fn_8010AEF4_00000FD4
    lwz r0, -0x736c(r3)
    cmpwi r0, 0x0
    ble lbl_fn_8010AEF4_00000FD4
    li r4, 0x1
lbl_fn_8010AEF4_00000FD4:
    cmpwi r4, 0x0
    beq lbl_fn_8010AEF4_000011F0
    addis r3, r31, 0x4
    li r4, 0x0
    lwz r0, -0x7348(r3)
    cmpwi r0, 0x0
    ble lbl_fn_8010AEF4_00001000
    lwz r0, -0x7344(r3)
    cmpwi r0, 0x0
    ble lbl_fn_8010AEF4_00001000
    li r4, 0x1
lbl_fn_8010AEF4_00001000:
    cmpwi r4, 0x0
    beq lbl_fn_8010AEF4_000011F0
    addis r3, r31, 0x4
    lbz r0, -0x7360(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8010AEF4_000011F0
    lwz r6, -0x733c(r3)
    cmpwi r6, 0x3
    blt lbl_fn_8010AEF4_00001040
    lwz r4, -0x7344(r3)
    lwz r0, -0x736c(r3)
    srwi r3, r4, 31
    add r3, r3, r4
    srawi r3, r3, 1
    cmpw r3, r0
    bge lbl_fn_8010AEF4_00001064
lbl_fn_8010AEF4_00001040:
    addis r4, r31, 0x4
    lwz r5, -0x7340(r4)
    cmpwi r5, 0x2
    blt lbl_fn_8010AEF4_0000109C
    lwz r3, -0x7348(r4)
    lwz r0, -0x7370(r4)
    slwi r3, r3, 1
    cmpw r3, r0
    bgt lbl_fn_8010AEF4_0000109C
lbl_fn_8010AEF4_00001064:
    addis r7, r31, 0x4
    li r8, 0x1
    lwz r6, -0x7370(r7)
    lwz r5, -0x736c(r7)
    lwz r4, -0x7368(r7)
    lwz r3, -0x7364(r7)
    lbz r0, -0x7360(r7)
    stw r8, -0x7334(r7)
    stw r6, -0x7348(r7)
    stw r5, -0x7344(r7)
    stw r4, -0x7340(r7)
    stw r3, -0x733c(r7)
    stb r0, -0x7338(r7)
    b lbl_fn_8010AEF4_00001118
lbl_fn_8010AEF4_0000109C:
    cmpwi r5, 0x3
    blt lbl_fn_8010AEF4_000010C4
    addis r3, r31, 0x4
    lwz r4, -0x7348(r3)
    lwz r0, -0x7370(r3)
    srwi r3, r4, 31
    add r3, r3, r4
    srawi r3, r3, 1
    cmpw r3, r0
    bge lbl_fn_8010AEF4_000010E4
lbl_fn_8010AEF4_000010C4:
    cmpwi r6, 0x2
    blt lbl_fn_8010AEF4_00001118
    addis r4, r31, 0x4
    lwz r3, -0x7344(r4)
    lwz r0, -0x736c(r4)
    slwi r3, r3, 1
    cmpw r3, r0
    bgt lbl_fn_8010AEF4_00001118
lbl_fn_8010AEF4_000010E4:
    addis r7, r31, 0x4
    li r8, 0x3
    lwz r6, -0x7370(r7)
    lwz r5, -0x736c(r7)
    lwz r4, -0x7368(r7)
    lwz r3, -0x7364(r7)
    lbz r0, -0x7360(r7)
    stw r8, -0x7334(r7)
    stw r6, -0x7348(r7)
    stw r5, -0x7344(r7)
    stw r4, -0x7340(r7)
    stw r3, -0x733c(r7)
    stb r0, -0x7338(r7)
lbl_fn_8010AEF4_00001118:
    addis r3, r31, 0x4
    li r4, 0x0
    lwz r0, -0x7348(r3)
    cmpwi r0, 0x0
    ble lbl_fn_8010AEF4_0000113C
    lwz r0, -0x7344(r3)
    cmpwi r0, 0x0
    ble lbl_fn_8010AEF4_0000113C
    li r4, 0x1
lbl_fn_8010AEF4_0000113C:
    cmpwi r4, 0x0
    bne lbl_fn_8010AEF4_000011F0
    addis r3, r31, 0x4
    li r4, 0x0
    lwz r0, -0x7370(r3)
    cmpwi r0, 0x0
    ble lbl_fn_8010AEF4_00001168
    lwz r0, -0x736c(r3)
    cmpwi r0, 0x0
    ble lbl_fn_8010AEF4_00001168
    li r4, 0x1
lbl_fn_8010AEF4_00001168:
    cmpwi r4, 0x0
    beq lbl_fn_8010AEF4_000011F0
    addis r7, r31, 0x4
    lwz r6, -0x7370(r7)
    lwz r5, -0x736c(r7)
    lwz r4, -0x7368(r7)
    lwz r3, -0x7364(r7)
    lbz r0, -0x7360(r7)
    stw r6, -0x7348(r7)
    stw r5, -0x7344(r7)
    stw r4, -0x7340(r7)
    stw r3, -0x733c(r7)
    stb r0, -0x7338(r7)
    b lbl_fn_8010AEF4_000011F0
lbl_fn_8010AEF4_000011A0:
    addis r4, r31, 0x4
    li r5, 0x2
    lwz r0, -0x7348(r4)
    li r3, 0x0
    stw r5, -0x7334(r4)
    cmpwi r0, 0x0
    ble lbl_fn_8010AEF4_000011CC
    lwz r0, -0x7344(r4)
    cmpwi r0, 0x0
    ble lbl_fn_8010AEF4_000011CC
    li r3, 0x1
lbl_fn_8010AEF4_000011CC:
    cmpwi r3, 0x0
    beq lbl_fn_8010AEF4_000011F0
    addis r3, r31, 0x4
    li r0, 0x0
    stw r0, -0x7348(r3)
    stw r0, -0x7344(r3)
    stw r0, -0x7340(r3)
    stw r0, -0x733c(r3)
    stb r0, -0x7338(r3)
lbl_fn_8010AEF4_000011F0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8010B180(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    stw r30, 0x8(r1)
    mr r30, r4
    beq lbl_fn_8010B180_00001240
    cmpwi r5, 0x0
    beq lbl_fn_8010B180_00001240
    lwz r3, lbl_8087F430
    bl fn_80376210
    cmpwi r3, 0x0
    bne lbl_fn_8010B180_00001248
lbl_fn_8010B180_00001240:
    li r3, 0x1
    b lbl_fn_8010B180_000012BC
lbl_fn_8010B180_00001248:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_8010B180_0000125C
    lwz r3, 0x10d8(r3)
    b lbl_fn_8010B180_00001260
lbl_fn_8010B180_0000125C:
    li r3, 0x0
lbl_fn_8010B180_00001260:
    cmpwi r3, 0x0
    bne lbl_fn_8010B180_00001270
    li r3, 0x1
    b lbl_fn_8010B180_000012BC
lbl_fn_8010B180_00001270:
    lwz r4, 0xd0c(r30)
    lwz r31, 0xd0c(r31)
    cmpwi r4, 0x0
    ble lbl_fn_8010B180_000012B8
    cmpwi r31, 0x0
    ble lbl_fn_8010B180_000012B8
    cmpw r4, r31
    beq lbl_fn_8010B180_000012B8
    bl fn_803C1884
    cmpwi r3, 0x0
    beq lbl_fn_8010B180_000012B8
    lwz r0, 0x28(r3)
    cmpwi r0, 0x0
    blt lbl_fn_8010B180_000012B8
    cmpw r0, r31
    beq lbl_fn_8010B180_000012B8
    li r3, 0x0
    b lbl_fn_8010B180_000012BC
lbl_fn_8010B180_000012B8:
    li r3, 0x1
lbl_fn_8010B180_000012BC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8010B250(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    beq lbl_fn_8010B250_000013CC
    lwz r0, 0x8(r5)
    cmpwi r0, 0x0
    beq lbl_fn_8010B250_000013CC
    lwz r0, 0x0(r5)
    cmpwi r0, 0x0
    beq lbl_fn_8010B250_000013CC
    lwz r3, 0x4(r5)
    cmpwi r3, 0x0
    beq lbl_fn_8010B250_000013CC
    lwz r0, 0x44(r5)
    cmpwi r0, 0x1
    beq lbl_fn_8010B250_000013CC
    addi r3, r3, 0x7d4
    li r4, 0x37
    li r5, -0x1
    bl fn_80134168
    cmpwi r3, 0x0
    mr r30, r3
    ble lbl_fn_8010B250_00001394
    bl fn_80680CF8
    lis r4, 0x51ec
    subi r0, r4, 0x7ae1
    mulhw r0, r0, r3
    srawi r0, r0, 5
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x64
    subf r0, r0, r3
    cmpw r30, r0
    ble lbl_fn_8010B250_000013CC
    cmpwi r31, 0x0
    ble lbl_fn_8010B250_0000138C
    subi r0, r31, 0x1
    li r31, 0x1
    cmpwi r0, 0x1
    ble lbl_fn_8010B250_000013CC
    mr r31, r0
    b lbl_fn_8010B250_000013CC
lbl_fn_8010B250_0000138C:
    li r31, 0x0
    b lbl_fn_8010B250_000013CC
lbl_fn_8010B250_00001394:
    bge lbl_fn_8010B250_000013CC
    bl fn_80680CF8
    lis r4, 0x51ec
    neg r0, r30
    subi r4, r4, 0x7ae1
    mulhw r4, r4, r3
    srawi r4, r4, 5
    srwi r5, r4, 31
    add r4, r4, r5
    mulli r4, r4, 0x64
    subf r3, r4, r3
    cmpw r0, r3
    ble lbl_fn_8010B250_000013CC
    addi r31, r31, 0x2
lbl_fn_8010B250_000013CC:
    neg r0, r31
    andc r3, r0, r31
    srawi r0, r3, 31
    and r0, r31, r0
    cmpwi r0, 0xf
    bge lbl_fn_8010B250_000013F0
    srawi r0, r3, 31
    and r0, r31, r0
    b lbl_fn_8010B250_000013F4
lbl_fn_8010B250_000013F0:
    li r0, 0xf
lbl_fn_8010B250_000013F4:
    lis r3, lbl_80735ED0@ha
    lwz r31, 0xc(r1)
    slwi r0, r0, 2
    lwz r30, 0x8(r1)
    addi r3, r3, lbl_80735ED0@l
    lfsx f1, r3, r0
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8010B398(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r11, r1, 0x70
    bl _savegpr_17
    lwz r30, 0x0(r4)
    mr r23, r3
    lwz r29, 0x4(r4)
    mr r24, r4
    cmpwi cr1, r30, 0x0
    li r31, 0x0
    beq cr1, lbl_fn_8010B398_00001454
    cmpwi r29, 0x0
    bne lbl_fn_8010B398_0000145C
lbl_fn_8010B398_00001454:
    li r3, 0x0
    b lbl_fn_8010B398_00002078
lbl_fn_8010B398_0000145C:
    lwz r28, 0x44(r4)
    addi r3, r1, 0x8
    psq_l f1, 0x1c(r4), 0, 0
    lfs f2, 0x24(r4)
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r3), 0, 0
    lwz r27, 0xc(r4)
    beq cr1, lbl_fn_8010B398_00001488
    lwz r26, 0x648(r30)
    cmpwi r26, 0x0
    bne lbl_fn_8010B398_00001490
lbl_fn_8010B398_00001488:
    li r26, 0x0
    b lbl_fn_8010B398_000014EC
lbl_fn_8010B398_00001490:
    lwz r0, 0x55c(r30)
    cmpwi r0, 0x6
    bne lbl_fn_8010B398_000014EC
    lwz r0, 0x560(r30)
    cmpwi r0, 0x4
    bne lbl_fn_8010B398_000014EC
    lwz r0, 0x64c(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8010B398_000014EC
    lwz r3, 0xf80(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8010B398_000014EC
    lwz r12, 0x0(r3)
    lwz r12, 0x30(r12)
    mtctr r12
    bctrl
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    subf r0, r4, r0
    cmpwi r0, 0x1
    bne lbl_fn_8010B398_000014EC
    lwz r26, 0x64c(r30)
lbl_fn_8010B398_000014EC:
    cmpwi r26, 0x0
    beq lbl_fn_8010B398_00001500
    lwz r0, 0x274(r26)
    cmpwi r0, 0x0
    bne lbl_fn_8010B398_00001508
lbl_fn_8010B398_00001500:
    li r3, 0x0
    b lbl_fn_8010B398_00002078
lbl_fn_8010B398_00001508:
    addis r3, r23, 0x4
    lwz r25, 0x8(r24)
    lwz r18, -0x1c68(r3)
    addi r20, r30, 0x7d4
    addi r19, r29, 0x7d4
    cmpwi r18, 0x0
    beq lbl_fn_8010B398_0000159C
    mr r30, r18
    beq lbl_fn_8010B398_00001538
    lwz r26, 0x648(r18)
    cmpwi r26, 0x0
    bne lbl_fn_8010B398_00001540
lbl_fn_8010B398_00001538:
    li r26, 0x0
    b lbl_fn_8010B398_0000159C
lbl_fn_8010B398_00001540:
    lwz r0, 0x55c(r18)
    cmpwi r0, 0x6
    bne lbl_fn_8010B398_0000159C
    lwz r0, 0x560(r18)
    cmpwi r0, 0x4
    bne lbl_fn_8010B398_0000159C
    lwz r0, 0x64c(r18)
    cmpwi r0, 0x0
    beq lbl_fn_8010B398_0000159C
    lwz r3, 0xf80(r18)
    cmpwi r3, 0x0
    beq lbl_fn_8010B398_0000159C
    lwz r12, 0x0(r3)
    lwz r12, 0x30(r12)
    mtctr r12
    bctrl
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    subf r0, r4, r0
    cmpwi r0, 0x1
    bne lbl_fn_8010B398_0000159C
    lwz r26, 0x64c(r18)
lbl_fn_8010B398_0000159C:
    li r0, 0x0
    stw r0, 0x304(r20)
    addis r3, r23, 0x4
    lwz r0, -0x1c64(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8010B398_000015BC
    li r3, 0x0
    b lbl_fn_8010B398_00002078
lbl_fn_8010B398_000015BC:
    lwz r4, 0x8(r24)
    cmpwi r4, 0x0
    beq lbl_fn_8010B398_000015F8
    lwz r0, 0xac(r4)
    rlwinm r3, r0, 0, 16, 16
    addis r0, r3, 0x0
    cmplwi r0, 0x8000
    bne lbl_fn_8010B398_000015F8
    lwz r0, 0x90(r4)
    rlwinm r3, r0, 0, 6, 6
    subis r0, r3, 0x200
    cmplwi r0, 0x0
    beq lbl_fn_8010B398_000015F8
    li r3, 0x0
    b lbl_fn_8010B398_00002078
lbl_fn_8010B398_000015F8:
    lwz r0, lbl_8087FA20
    cmpwi r0, 0x0
    beq lbl_fn_8010B398_0000160C
    li r3, 0x0
    b lbl_fn_8010B398_00002078
lbl_fn_8010B398_0000160C:
    mr r3, r20
    li r4, 0x30
    bl fn_80134134
    cmpwi r3, 0x0
    beq lbl_fn_8010B398_00001684
    mr r3, r20
    li r4, 0x30
    bl fn_80134134
    lwz r0, 0x304(r20)
    lwz r3, 0x0(r3)
    cmplwi r0, 0x6
    bge lbl_fn_8010B398_00001684
    lwz r0, 0x304(r20)
    mulli r0, r0, 0x14
    add r0, r20, r0
    addic. r4, r0, 0x308
    beq lbl_fn_8010B398_00001678
    lwz r0, 0x0(r3)
    stw r0, 0x0(r4)
    lwz r0, 0x4(r3)
    stw r0, 0x4(r4)
    lwz r0, 0x8(r3)
    stw r0, 0x8(r4)
    lwz r0, 0xc(r3)
    stw r0, 0xc(r4)
    lwz r0, 0x10(r3)
    stw r0, 0x10(r4)
lbl_fn_8010B398_00001678:
    lwz r3, 0x304(r20)
    addi r0, r3, 0x1
    stw r0, 0x304(r20)
lbl_fn_8010B398_00001684:
    mr r3, r20
    li r4, 0x3e
    bl fn_80134134
    cmpwi r3, 0x0
    beq lbl_fn_8010B398_000016FC
    mr r3, r20
    li r4, 0x3e
    bl fn_80134134
    lwz r0, 0x304(r20)
    lwz r3, 0x0(r3)
    cmplwi r0, 0x6
    bge lbl_fn_8010B398_000016FC
    lwz r0, 0x304(r20)
    mulli r0, r0, 0x14
    add r0, r20, r0
    addic. r4, r0, 0x308
    beq lbl_fn_8010B398_000016F0
    lwz r0, 0x0(r3)
    stw r0, 0x0(r4)
    lwz r0, 0x4(r3)
    stw r0, 0x4(r4)
    lwz r0, 0x8(r3)
    stw r0, 0x8(r4)
    lwz r0, 0xc(r3)
    stw r0, 0xc(r4)
    lwz r0, 0x10(r3)
    stw r0, 0x10(r4)
lbl_fn_8010B398_000016F0:
    lwz r3, 0x304(r20)
    addi r0, r3, 0x1
    stw r0, 0x304(r20)
lbl_fn_8010B398_000016FC:
    mr r3, r20
    li r4, 0x3f
    bl fn_80134134
    cmpwi r3, 0x0
    beq lbl_fn_8010B398_000017C4
    cmpwi r28, 0x0
    beq lbl_fn_8010B398_00001760
    cmpwi r25, 0x0
    beq lbl_fn_8010B398_00001754
    lwz r0, 0x4(r25)
    cmpwi r0, 0xcc
    beq lbl_fn_8010B398_0000174C
    cmpwi r0, 0xd1
    beq lbl_fn_8010B398_0000174C
    cmpwi r0, 0xd5
    beq lbl_fn_8010B398_0000174C
    cmpwi r0, 0x5bc
    beq lbl_fn_8010B398_0000174C
    cmpwi r0, 0x658
    bne lbl_fn_8010B398_00001754
lbl_fn_8010B398_0000174C:
    li r0, 0x1
    b lbl_fn_8010B398_00001758
lbl_fn_8010B398_00001754:
    li r0, 0x0
lbl_fn_8010B398_00001758:
    cmpwi r0, 0x0
    beq lbl_fn_8010B398_000017C4
lbl_fn_8010B398_00001760:
    mr r3, r20
    li r4, 0x3f
    bl fn_80134134
    lwz r0, 0x304(r20)
    lwz r3, 0x0(r3)
    cmplwi r0, 0x6
    bge lbl_fn_8010B398_000017C4
    lwz r0, 0x304(r20)
    mulli r0, r0, 0x14
    add r0, r20, r0
    addic. r4, r0, 0x308
    beq lbl_fn_8010B398_000017B8
    lwz r0, 0x0(r3)
    stw r0, 0x0(r4)
    lwz r0, 0x4(r3)
    stw r0, 0x4(r4)
    lwz r0, 0x8(r3)
    stw r0, 0x8(r4)
    lwz r0, 0xc(r3)
    stw r0, 0xc(r4)
    lwz r0, 0x10(r3)
    stw r0, 0x10(r4)
lbl_fn_8010B398_000017B8:
    lwz r3, 0x304(r20)
    addi r0, r3, 0x1
    stw r0, 0x304(r20)
lbl_fn_8010B398_000017C4:
    mr r3, r20
    li r4, 0x42
    bl fn_80134134
    cmpwi r3, 0x0
    beq lbl_fn_8010B398_00001858
    cmpwi r25, 0x0
    beq lbl_fn_8010B398_00001858
    lwz r0, 0xac(r25)
    rlwinm r3, r0, 0, 6, 6
    subis r0, r3, 0x200
    cmplwi r0, 0x0
    bne lbl_fn_8010B398_00001858
    mr r3, r20
    li r4, 0x42
    bl fn_80134134
    lwz r0, 0x304(r20)
    lwz r3, 0x0(r3)
    cmplwi r0, 0x6
    bge lbl_fn_8010B398_00001858
    lwz r0, 0x304(r20)
    mulli r0, r0, 0x14
    add r0, r20, r0
    addic. r4, r0, 0x308
    beq lbl_fn_8010B398_0000184C
    lwz r0, 0x0(r3)
    stw r0, 0x0(r4)
    lwz r0, 0x4(r3)
    stw r0, 0x4(r4)
    lwz r0, 0x8(r3)
    stw r0, 0x8(r4)
    lwz r0, 0xc(r3)
    stw r0, 0xc(r4)
    lwz r0, 0x10(r3)
    stw r0, 0x10(r4)
lbl_fn_8010B398_0000184C:
    lwz r3, 0x304(r20)
    addi r0, r3, 0x1
    stw r0, 0x304(r20)
lbl_fn_8010B398_00001858:
    mr r3, r19
    li r4, 0x40
    bl fn_80134134
    cmpwi r3, 0x0
    beq lbl_fn_8010B398_0000192C
    mr r3, r19
    li r4, 0x40
    bl fn_80134134
    mr r22, r3
    mr r3, r19
    li r4, 0x40
    li r5, -0x1
    bl fn_801341B8
    mr r21, r3
    bl fn_80680CF8
    lis r4, 0x51ec
    subi r0, r4, 0x7ae1
    mulhw r0, r0, r3
    srawi r0, r0, 5
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x64
    subf r0, r0, r3
    cmpw r21, r0
    ble lbl_fn_8010B398_0000192C
    cmpwi r25, 0x0
    beq lbl_fn_8010B398_0000192C
    lwz r0, 0xac(r25)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x4
    beq lbl_fn_8010B398_0000192C
    lwz r0, 0x304(r20)
    lwz r3, 0x0(r22)
    cmplwi r0, 0x6
    bge lbl_fn_8010B398_0000192C
    lwz r0, 0x304(r20)
    mulli r0, r0, 0x14
    add r0, r20, r0
    addic. r4, r0, 0x308
    beq lbl_fn_8010B398_00001920
    lwz r0, 0x0(r3)
    stw r0, 0x0(r4)
    lwz r0, 0x4(r3)
    stw r0, 0x4(r4)
    lwz r0, 0x8(r3)
    stw r0, 0x8(r4)
    lwz r0, 0xc(r3)
    stw r0, 0xc(r4)
    lwz r0, 0x10(r3)
    stw r0, 0x10(r4)
lbl_fn_8010B398_00001920:
    lwz r3, 0x304(r20)
    addi r0, r3, 0x1
    stw r0, 0x304(r20)
lbl_fn_8010B398_0000192C:
    mr r3, r19
    li r4, 0x23
    bl fn_80134134
    cmpwi r3, 0x0
    beq lbl_fn_8010B398_00001A14
    li r17, 0x0
    li r18, 0x0
    lis r21, 0x51ec
    b lbl_fn_8010B398_00001A08
lbl_fn_8010B398_00001950:
    add r3, r19, r18
    lwz r22, 0x384(r3)
    lwz r0, 0x0(r22)
    cmpwi r0, 0x23
    bne lbl_fn_8010B398_00001A00
    bl fn_80680CF8
    subi r4, r21, 0x7ae1
    lwz r0, 0x10(r22)
    mulhw r4, r4, r3
    srawi r4, r4, 5
    srwi r5, r4, 31
    add r4, r4, r5
    mulli r4, r4, 0x64
    subf r3, r4, r3
    cmpw r0, r3
    ble lbl_fn_8010B398_00001A00
    lwz r0, 0x8(r22)
    cmpwi r0, 0x9
    bne lbl_fn_8010B398_000019AC
    lwz r0, 0xac(r25)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x4
    beq lbl_fn_8010B398_00001A00
lbl_fn_8010B398_000019AC:
    lwz r0, 0x304(r20)
    cmplwi r0, 0x6
    bge lbl_fn_8010B398_00001A00
    lwz r0, 0x304(r20)
    mulli r0, r0, 0x14
    add r0, r20, r0
    addic. r3, r0, 0x308
    beq lbl_fn_8010B398_000019F4
    lwz r0, 0x0(r22)
    stw r0, 0x0(r3)
    lwz r0, 0x4(r22)
    stw r0, 0x4(r3)
    lwz r0, 0x8(r22)
    stw r0, 0x8(r3)
    lwz r0, 0xc(r22)
    stw r0, 0xc(r3)
    lwz r0, 0x10(r22)
    stw r0, 0x10(r3)
lbl_fn_8010B398_000019F4:
    lwz r3, 0x304(r20)
    addi r0, r3, 0x1
    stw r0, 0x304(r20)
lbl_fn_8010B398_00001A00:
    addi r18, r18, 0x14
    addi r17, r17, 0x1
lbl_fn_8010B398_00001A08:
    lwz r0, 0x380(r19)
    cmplw r17, r0
    blt lbl_fn_8010B398_00001950
lbl_fn_8010B398_00001A14:
    li r17, 0x0
    li r18, 0x0
    lis r22, 0x51ec
lbl_fn_8010B398_00001A20:
    mr r3, r26
    mr r4, r17
    mr r5, r28
    mr r7, r27
    mr r8, r30
    mr r9, r29
    mr r10, r25
    addi r6, r1, 0x8
    bl fn_80044E98
    cmpwi r3, 0x0
    beq lbl_fn_8010B398_00001AD4
    lwz r0, 0x274(r26)
    add r21, r0, r18
    bl fn_80680CF8
    subi r4, r22, 0x7ae1
    lwz r0, 0xd4(r21)
    mulhw r4, r4, r3
    srawi r4, r4, 5
    srwi r5, r4, 31
    add r4, r4, r5
    mulli r4, r4, 0x64
    subf r3, r4, r3
    cmpw r0, r3
    ble lbl_fn_8010B398_00001AD4
    lwz r0, 0x304(r20)
    cmplwi r0, 0x6
    bge lbl_fn_8010B398_00001AD4
    lwz r0, 0x304(r20)
    mulli r0, r0, 0x14
    add r0, r20, r0
    addic. r3, r0, 0x308
    beq lbl_fn_8010B398_00001AC8
    lwz r0, 0xc4(r21)
    stw r0, 0x0(r3)
    lwz r0, 0xc8(r21)
    stw r0, 0x4(r3)
    lwz r0, 0xcc(r21)
    stw r0, 0x8(r3)
    lwz r0, 0xd0(r21)
    stw r0, 0xc(r3)
    lwz r0, 0xd4(r21)
    stw r0, 0x10(r3)
lbl_fn_8010B398_00001AC8:
    lwz r3, 0x304(r20)
    addi r0, r3, 0x1
    stw r0, 0x304(r20)
lbl_fn_8010B398_00001AD4:
    addi r17, r17, 0x1
    addi r18, r18, 0x14
    cmpwi r17, 0x2
    blt lbl_fn_8010B398_00001A20
    lwz r0, 0x48(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8010B398_00001BEC
    mr r3, r30
    bl fn_8014FCE8
    cmpwi r3, 0x0
    beq lbl_fn_8010B398_00001BEC
    lwz r3, lbl_8087F120
    cmpwi r3, 0x0
    beq lbl_fn_8010B398_00001BEC
    lwz r0, 0x150(r3)
    slwi r0, r0, 2
    add r3, r3, r0
    lwz r3, 0x50(r3)
    bl fn_80211480
    cmpwi r3, 0x0
    beq lbl_fn_8010B398_00001BEC
    addi r21, r3, 0xec
    li r17, 0x0
    lis r22, 0x51ec
lbl_fn_8010B398_00001B34:
    mr r3, r21
    mr r4, r28
    mr r6, r27
    mr r7, r30
    mr r8, r29
    addi r5, r1, 0x8
    li r9, 0x0
    bl fn_80044FBC
    cmpwi r3, 0x0
    beq lbl_fn_8010B398_00001BDC
    bl fn_80680CF8
    subi r4, r22, 0x7ae1
    lwz r0, 0x10(r21)
    mulhw r4, r4, r3
    srawi r4, r4, 5
    srwi r5, r4, 31
    add r4, r4, r5
    mulli r4, r4, 0x64
    subf r3, r4, r3
    cmpw r0, r3
    ble lbl_fn_8010B398_00001BDC
    lwz r0, 0x304(r20)
    cmplwi r0, 0x6
    bge lbl_fn_8010B398_00001BDC
    lwz r0, 0x304(r20)
    mulli r0, r0, 0x14
    add r0, r20, r0
    addic. r3, r0, 0x308
    beq lbl_fn_8010B398_00001BD0
    lwz r0, 0x0(r21)
    stw r0, 0x0(r3)
    lwz r0, 0x4(r21)
    stw r0, 0x4(r3)
    lwz r0, 0x8(r21)
    stw r0, 0x8(r3)
    lwz r0, 0xc(r21)
    stw r0, 0xc(r3)
    lwz r0, 0x10(r21)
    stw r0, 0x10(r3)
lbl_fn_8010B398_00001BD0:
    lwz r3, 0x304(r20)
    addi r0, r3, 0x1
    stw r0, 0x304(r20)
lbl_fn_8010B398_00001BDC:
    addi r17, r17, 0x1
    addi r21, r21, 0x14
    cmpwi r17, 0x2
    blt lbl_fn_8010B398_00001B34
lbl_fn_8010B398_00001BEC:
    lwz r4, 0x274(r26)
    lwz r0, 0x78(r4)
    cmpwi r0, 0x0
    bne lbl_fn_8010B398_00001CD4
    lis r3, 0x1062
    lwz r4, 0x80(r4)
    addi r0, r3, 0x4dd3
    mulhw r0, r0, r4
    srawi r0, r0, 6
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r0, r0, 0x3e8
    subf r0, r0, r4
    cmpwi r0, 0x18f
    blt lbl_fn_8010B398_00001CD4
    cmpwi r0, 0x195
    bgt lbl_fn_8010B398_00001CD4
    li r10, 0x0
    li r4, 0x3f
    li r5, 0x7
    li r3, 0x2
    li r0, 0x64
    stw r4, 0x14(r1)
    mr r4, r28
    mr r6, r27
    stw r5, 0x18(r1)
    mr r7, r30
    mr r8, r29
    mr r9, r25
    stw r3, 0x1c(r1)
    addi r3, r1, 0x14
    addi r5, r1, 0x8
    stw r10, 0x20(r1)
    stw r0, 0x24(r1)
    bl fn_80044FBC
    cmpwi r3, 0x0
    beq lbl_fn_8010B398_00001CD4
    lwz r0, 0x304(r20)
    cmplwi r0, 0x6
    bge lbl_fn_8010B398_00001CD4
    lwz r0, 0x304(r20)
    mulli r0, r0, 0x14
    add r0, r20, r0
    addic. r3, r0, 0x308
    beq lbl_fn_8010B398_00001CC8
    lwz r0, 0x14(r1)
    stw r0, 0x0(r3)
    lwz r0, 0x18(r1)
    stw r0, 0x4(r3)
    lwz r0, 0x1c(r1)
    stw r0, 0x8(r3)
    lwz r0, 0x20(r1)
    stw r0, 0xc(r3)
    lwz r0, 0x24(r1)
    stw r0, 0x10(r3)
lbl_fn_8010B398_00001CC8:
    lwz r3, 0x304(r20)
    addi r0, r3, 0x1
    stw r0, 0x304(r20)
lbl_fn_8010B398_00001CD4:
    mr r3, r20
    li r4, 0x11
    bl fn_80133EE8
    cmpwi r3, 0x0
    beq lbl_fn_8010B398_00001D04
    lwz r0, 0x18(r19)
    rlwinm. r0, r0, 0, 15, 15
    beq lbl_fn_8010B398_00001D04
    mr r3, r20
    li r4, 0x11
    li r5, -0x1
    bl fn_80133E24
lbl_fn_8010B398_00001D04:
    mr r3, r20
    li r4, 0x12
    bl fn_80133EE8
    cmpwi r3, 0x0
    beq lbl_fn_8010B398_00001D4C
    lwz r3, 0x18(r19)
    rlwinm. r0, r3, 0, 9, 9
    bne lbl_fn_8010B398_00001D3C
    clrlwi. r0, r3, 31
    bne lbl_fn_8010B398_00001D3C
    lwz r0, 0x12a4(r29)
    extrwi r0, r0, 1, 9
    cmplwi r0, 0x1
    bne lbl_fn_8010B398_00001D4C
lbl_fn_8010B398_00001D3C:
    mr r3, r20
    li r4, 0x12
    li r5, -0x1
    bl fn_80133E24
lbl_fn_8010B398_00001D4C:
    mr r3, r20
    li r4, 0x13
    bl fn_80133EE8
    cmpwi r3, 0x0
    beq lbl_fn_8010B398_00001D7C
    lwz r0, 0x18(r19)
    rlwinm. r0, r0, 0, 24, 24
    beq lbl_fn_8010B398_00001D7C
    mr r3, r20
    li r4, 0x13
    li r5, -0x1
    bl fn_80133E24
lbl_fn_8010B398_00001D7C:
    mr r3, r20
    li r4, 0x14
    bl fn_80133EE8
    cmpwi r3, 0x0
    beq lbl_fn_8010B398_00001DBC
    lwz r0, 0x18(r19)
    clrlwi. r0, r0, 31
    bne lbl_fn_8010B398_00001DAC
    lwz r0, 0x12a4(r29)
    extrwi r0, r0, 1, 9
    cmplwi r0, 0x1
    bne lbl_fn_8010B398_00001DBC
lbl_fn_8010B398_00001DAC:
    mr r3, r20
    li r4, 0x14
    li r5, -0x1
    bl fn_80133E24
lbl_fn_8010B398_00001DBC:
    mr r3, r20
    li r4, 0x15
    bl fn_80133EE8
    cmpwi r3, 0x0
    beq lbl_fn_8010B398_00001DEC
    lwz r0, 0x18(r19)
    rlwinm. r0, r0, 0, 25, 25
    beq lbl_fn_8010B398_00001DEC
    mr r3, r20
    li r4, 0x15
    li r5, -0x1
    bl fn_80133E24
lbl_fn_8010B398_00001DEC:
    mr r3, r20
    li r4, 0x16
    bl fn_80133EE8
    cmpwi r3, 0x0
    beq lbl_fn_8010B398_00001E1C
    lwz r0, 0x18(r19)
    rlwinm. r0, r0, 0, 27, 27
    beq lbl_fn_8010B398_00001E1C
    mr r3, r20
    li r4, 0x16
    li r5, -0x1
    bl fn_80133E24
lbl_fn_8010B398_00001E1C:
    mr r3, r20
    li r4, 0x17
    bl fn_80133EE8
    cmpwi r3, 0x0
    beq lbl_fn_8010B398_00001E4C
    lwz r0, 0x18(r19)
    rlwinm. r0, r0, 0, 16, 16
    beq lbl_fn_8010B398_00001E4C
    mr r3, r20
    li r4, 0x17
    li r5, -0x1
    bl fn_80133E24
lbl_fn_8010B398_00001E4C:
    mr r3, r20
    li r4, 0x19
    bl fn_80133EE8
    cmpwi r3, 0x0
    beq lbl_fn_8010B398_00001E7C
    lwz r0, 0x18(r19)
    rlwinm. r0, r0, 0, 29, 29
    beq lbl_fn_8010B398_00001E7C
    mr r3, r20
    li r4, 0x19
    li r5, -0x1
    bl fn_80133E24
lbl_fn_8010B398_00001E7C:
    mr r3, r20
    li r4, 0x18
    bl fn_80133EE8
    cmpwi r3, 0x0
    beq lbl_fn_8010B398_00001EAC
    lwz r0, 0x18(r19)
    rlwinm. r0, r0, 0, 17, 17
    beq lbl_fn_8010B398_00001EAC
    mr r3, r20
    li r4, 0x18
    li r5, -0x1
    bl fn_80133E24
lbl_fn_8010B398_00001EAC:
    mr r3, r20
    li r4, 0x13
    bl fn_80133EE8
    cmpwi r3, 0x0
    beq lbl_fn_8010B398_00001F14
    lwz r4, 0xc(r19)
    rlwinm r0, r4, 0, 25, 25
    cmplwi r0, 0x40
    beq lbl_fn_8010B398_00001F04
    rlwinm r0, r4, 0, 23, 23
    cmplwi r0, 0x100
    beq lbl_fn_8010B398_00001F04
    rlwinm r0, r4, 0, 17, 17
    cmplwi r0, 0x4000
    beq lbl_fn_8010B398_00001F04
    rlwinm r3, r4, 0, 15, 15
    subis r0, r3, 0x1
    cmplwi r0, 0x0
    beq lbl_fn_8010B398_00001F04
    rlwinm r0, r4, 0, 27, 27
    cmplwi r0, 0x10
    bne lbl_fn_8010B398_00001F14
lbl_fn_8010B398_00001F04:
    mr r3, r20
    li r4, 0x13
    li r5, -0x1
    bl fn_80133E24
lbl_fn_8010B398_00001F14:
    mr r3, r20
    li r4, 0x11
    bl fn_80133EE8
    cmpwi r3, 0x0
    beq lbl_fn_8010B398_00001F78
    lwz r3, 0xc(r19)
    rlwinm r0, r3, 0, 25, 25
    cmplwi r0, 0x40
    beq lbl_fn_8010B398_00001F68
    rlwinm r0, r3, 0, 23, 23
    cmplwi r0, 0x100
    beq lbl_fn_8010B398_00001F68
    rlwinm r0, r3, 0, 17, 17
    cmplwi r0, 0x4000
    beq lbl_fn_8010B398_00001F68
    rlwinm r0, r3, 0, 24, 24
    cmplwi r0, 0x80
    beq lbl_fn_8010B398_00001F68
    rlwinm r0, r3, 0, 27, 27
    cmplwi r0, 0x10
    bne lbl_fn_8010B398_00001F78
lbl_fn_8010B398_00001F68:
    mr r3, r20
    li r4, 0x11
    li r5, -0x1
    bl fn_80133E24
lbl_fn_8010B398_00001F78:
    mr r3, r20
    li r4, 0x1
    bl fn_80133EE8
    cmpwi r3, 0x0
    beq lbl_fn_8010B398_00001FAC
    lwz r0, 0x12a4(r29)
    extrwi r0, r0, 1, 9
    cmplwi r0, 0x1
    bne lbl_fn_8010B398_00001FAC
    mr r3, r20
    li r4, 0x1
    li r5, -0x1
    bl fn_80133E24
lbl_fn_8010B398_00001FAC:
    li r18, 0x0
    li r17, 0x0
    b lbl_fn_8010B398_00002068
lbl_fn_8010B398_00001FB8:
    add r3, r20, r17
    li r7, 0x1
    lwz r6, 0x310(r3)
    addi r4, r3, 0x308
    cmpwi r6, 0x13
    bne lbl_fn_8010B398_00001FD4
    li r7, 0x0
lbl_fn_8010B398_00001FD4:
    lwz r5, 0x0(r4)
    cmpwi r5, 0x22
    bne lbl_fn_8010B398_00001FE4
    li r7, 0x0
lbl_fn_8010B398_00001FE4:
    cmpwi r5, 0x3f
    bne lbl_fn_8010B398_00001FF0
    li r7, 0x0
lbl_fn_8010B398_00001FF0:
    cmpwi r6, 0x11
    bne lbl_fn_8010B398_00001FFC
    li r7, 0x0
lbl_fn_8010B398_00001FFC:
    cmpwi r5, 0x3c
    bne lbl_fn_8010B398_00002008
    li r7, 0x0
lbl_fn_8010B398_00002008:
    cmpwi r5, 0x42
    bne lbl_fn_8010B398_00002034
    lwz r3, 0x8(r24)
    cmpwi r3, 0x0
    beq lbl_fn_8010B398_00002030
    lwz r0, 0xac(r3)
    rlwinm r3, r0, 0, 6, 6
    subis r0, r3, 0x200
    cmplwi r0, 0x0
    beq lbl_fn_8010B398_00002034
lbl_fn_8010B398_00002030:
    li r7, 0x0
lbl_fn_8010B398_00002034:
    cmpwi r6, 0x1a
    bne lbl_fn_8010B398_00002040
    li r7, 0x0
lbl_fn_8010B398_00002040:
    cmpwi r7, 0x0
    beq lbl_fn_8010B398_0000204C
    li r31, 0x1
lbl_fn_8010B398_0000204C:
    cmpwi r5, 0x3c
    beq lbl_fn_8010B398_00002060
    mr r3, r23
    mr r5, r30
    bl fn_80109864
lbl_fn_8010B398_00002060:
    addi r17, r17, 0x14
    addi r18, r18, 0x1
lbl_fn_8010B398_00002068:
    lwz r0, 0x304(r20)
    cmplw r18, r0
    blt lbl_fn_8010B398_00001FB8
    mr r3, r31
lbl_fn_8010B398_00002078:
    addi r11, r1, 0x70
    bl _restgpr_17
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}
