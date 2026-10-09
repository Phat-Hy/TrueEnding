#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_21(void);
extern void _savegpr_21(void);
extern void dtor_80084684(void);
extern void fn_80051CD8(void);
extern void fn_8005B3CC(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_800897D8(void);
extern void fn_800D03AC(void);
extern void fn_800D1D3C(void);
extern void fn_800D1E9C(void);
extern void fn_8011F91C(void);
extern void fn_8011FC10(void);
extern void fn_8011FE3C(void);
extern void fn_80124B60(void);
extern void fn_8016E4C4(void);
extern void fn_80370174(void);
extern void fn_80373148(void);
extern void fn_80375184(void);
extern void fn_803761FC(void);
extern void fn_8037D4C0(void);
extern void fn_803AC230(void);
extern void fn_803AC3D8(void);
extern void fn_803AC708(void);
extern void fn_803AC978(void);
extern void fn_803ACD08(void);
extern void fn_805F8E70(void);
extern void fn_805F9920(void);
extern void fn_80680770(void);
extern void fn_80684600(void);
extern void fn_80686EA4(void);

/* External data declarations */
extern u8 lbl_80750518[];
extern u8 lbl_80750544[];
extern u8 lbl_8078BCB8[];
extern u8 lbl_8078BDD0[];

/* Small data declarations */
extern u32 lbl_8087EE90;
extern u32 lbl_8087EF10;
extern u32 lbl_8087EFE8;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F3CC;
extern u32 lbl_8087F3CD;
extern u32 lbl_8087F408;
extern u32 lbl_8087F418;
extern u32 lbl_8087F430;
extern u32 lbl_8087F448;
extern u32 lbl_8087F480;
extern u32 lbl_8087F540;
extern u32 lbl_8087F890;
extern u32 lbl_8087F8A0;
extern u32 lbl_80885CBC;
extern u32 lbl_80885CD8;
extern u32 lbl_80885D48;
extern u32 lbl_80885D4C;
extern u32 lbl_80885D50;
extern u32 lbl_80885D54;

/* Function declarations */
void fn_803CC900(void);
void fn_803CCA34(void);
void fn_803CCA4C(void);
void fn_803CCA64(void);
void fn_803CCA84(void);
void fn_803CCC4C(void);
void fn_803CCC70(void);
void fn_803CCC84(void);
void fn_803CCCC0(void);
void fn_803CCD98(void);
void fn_803CCDAC(void);
void fn_803CCF38(void);
void fn_803CCF64(void);
void fn_803CCF68(void);
void fn_803CD598(void);
void fn_803CD918(void);
void fn_803CD958(void);
void fn_803CD9A8(void);
void fn_803CDA5C(void);
void fn_803CDAE4(void);
void fn_803CDB64(void);
void fn_803CDB68(void);
void fn_803CDC48(void);
void fn_803CDCA0(void);
void fn_803CDF84(void);
void fn_803CE070(void);
void fn_803CE074(void);
void fn_803CE0B4(void);
void fn_803CE148(void);
void fn_803CE154(void);
void fn_803CE160(void);

asm void fn_803CC900(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lwz r3, 0x134(r3)
    stw r0, 0x14(r1)
    cmpwi r3, 0x0
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    beq lbl_fn_803CC900_0000002C
    bl fn_803AC230
    mr r31, r3
lbl_fn_803CC900_0000002C:
    lwz r3, lbl_8087F408
    cmpwi r3, 0x0
    beq lbl_fn_803CC900_000000F8
    lwz r30, 0x48(r3)
    b lbl_fn_803CC900_000000F0
lbl_fn_803CC900_00000040:
    lwz r6, 0x38(r30)
    li r4, 0x0
    li r3, 0x0
    li r5, 0x0
    rlwinm r0, r6, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_803CC900_0000006C
    clrlwi r0, r6, 31
    cmplwi r0, 0x1
    beq lbl_fn_803CC900_0000006C
    li r5, 0x1
lbl_fn_803CC900_0000006C:
    cmpwi r5, 0x0
    beq lbl_fn_803CC900_00000088
    lwz r0, 0x7e0(r30)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_803CC900_00000088
    li r3, 0x1
lbl_fn_803CC900_00000088:
    cmpwi r3, 0x0
    beq lbl_fn_803CC900_000000BC
    lwz r0, 0x55c(r30)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_803CC900_000000B0
    lwz r0, 0x560(r30)
    cmpwi r0, 0x1c
    bne lbl_fn_803CC900_000000B0
    li r3, 0x1
lbl_fn_803CC900_000000B0:
    cmpwi r3, 0x0
    bne lbl_fn_803CC900_000000BC
    li r4, 0x1
lbl_fn_803CC900_000000BC:
    cmpwi r4, 0x0
    beq lbl_fn_803CC900_000000EC
    lwz r0, 0x54c(r30)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    beq lbl_fn_803CC900_000000EC
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0xf4(r12)
    mtctr r12
    bctrl
    add r31, r31, r3
lbl_fn_803CC900_000000EC:
    lwz r30, 0x14ac(r30)
lbl_fn_803CC900_000000F0:
    cmpwi r30, 0x0
    bne lbl_fn_803CC900_00000040
lbl_fn_803CC900_000000F8:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803CC900_00000118
    li r4, 0xa1e
    bl fn_80370174
    cmpwi r3, 0x0
    ble lbl_fn_803CC900_00000118
    li r31, 0x0
lbl_fn_803CC900_00000118:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803CCA34(void)
{
    nofralloc
    lwz r3, 0x134(r3)
    cmpwi r3, 0x0
    beq lbl_fn_803CCA34_00000144
    b fn_803AC708
lbl_fn_803CCA34_00000144:
    li r3, 0x0
    blr
}

asm void fn_803CCA4C(void)
{
    nofralloc
    lwz r3, 0x134(r3)
    cmpwi r3, 0x0
    beq lbl_fn_803CCA4C_0000015C
    b fn_803AC978
lbl_fn_803CCA4C_0000015C:
    li r3, 0x0
    blr
}

asm void fn_803CCA64(void)
{
    nofralloc
    lwz r3, 0x134(r3)
    cmpwi r3, 0x0
    beq lbl_fn_803CCA64_0000017C
    mr r6, r5
    li r5, 0x0
    b fn_803AC3D8
lbl_fn_803CCA64_0000017C:
    li r3, 0x0
    blr
}

asm void fn_803CCA84(void)
{
    nofralloc
    cmpwi r4, 0x0
    stwu r1, -0x30(r1)
    bne lbl_fn_803CCA84_00000198
    li r3, 0x0
    b lbl_fn_803CCA84_00000344
lbl_fn_803CCA84_00000198:
    lwz r0, 0x48(r4)
    cmpwi r0, 0x1
    beq lbl_fn_803CCA84_000001B8
    cmpwi r0, 0x2
    beq lbl_fn_803CCA84_0000023C
    cmpwi r0, 0x3
    beq lbl_fn_803CCA84_000002C0
    b lbl_fn_803CCA84_00000340
lbl_fn_803CCA84_000001B8:
    lwz r0, 0x80(r3)
    li r9, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_803CCA84_00000340
lbl_fn_803CCA84_000001CC:
    lwz r7, 0x84(r3)
    lwz r0, 0x58(r4)
    add r8, r7, r9
    lwzx r7, r7, r9
    cmpw r7, r0
    bne lbl_fn_803CCA84_00000230
    cmpwi r5, 0x0
    beq lbl_fn_803CCA84_000001FC
    psq_l f1, 0x4(r8), 0, 0
    lfs f2, 0xc(r8)
    stfs f2, 0x8(r5)
    psq_st f1, 0x0(r5), 0, 0
lbl_fn_803CCA84_000001FC:
    cmpwi r6, 0x0
    beq lbl_fn_803CCA84_00000228
    lfs f2, lbl_80885CBC
    addi r3, r1, 0x20
    lfs f0, 0x14(r8)
    stfs f2, 0x20(r1)
    stfs f0, 0x24(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x28(r1)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x8(r6)
lbl_fn_803CCA84_00000228:
    li r3, 0x1
    b lbl_fn_803CCA84_00000344
lbl_fn_803CCA84_00000230:
    addi r9, r9, 0x148
    bdnz lbl_fn_803CCA84_000001CC
    b lbl_fn_803CCA84_00000340
lbl_fn_803CCA84_0000023C:
    lwz r0, 0x88(r3)
    li r9, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_803CCA84_00000340
lbl_fn_803CCA84_00000250:
    lwz r7, 0x8c(r3)
    lwz r0, 0x58(r4)
    add r8, r7, r9
    lwzx r7, r7, r9
    cmpw r7, r0
    bne lbl_fn_803CCA84_000002B4
    cmpwi r5, 0x0
    beq lbl_fn_803CCA84_00000280
    psq_l f1, 0x4(r8), 0, 0
    lfs f2, 0xc(r8)
    stfs f2, 0x8(r5)
    psq_st f1, 0x0(r5), 0, 0
lbl_fn_803CCA84_00000280:
    cmpwi r6, 0x0
    beq lbl_fn_803CCA84_000002AC
    lfs f2, lbl_80885CBC
    addi r3, r1, 0x14
    lfs f0, 0x14(r8)
    stfs f2, 0x14(r1)
    stfs f0, 0x18(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x1c(r1)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x8(r6)
lbl_fn_803CCA84_000002AC:
    li r3, 0x1
    b lbl_fn_803CCA84_00000344
lbl_fn_803CCA84_000002B4:
    addi r9, r9, 0x148
    bdnz lbl_fn_803CCA84_00000250
    b lbl_fn_803CCA84_00000340
lbl_fn_803CCA84_000002C0:
    lwz r0, 0x90(r3)
    li r9, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_803CCA84_00000340
lbl_fn_803CCA84_000002D4:
    lwz r7, 0x94(r3)
    lwz r0, 0x58(r4)
    add r8, r7, r9
    lwzx r7, r7, r9
    cmpw r7, r0
    bne lbl_fn_803CCA84_00000338
    cmpwi r5, 0x0
    beq lbl_fn_803CCA84_00000304
    psq_l f1, 0x4(r8), 0, 0
    lfs f2, 0xc(r8)
    stfs f2, 0x8(r5)
    psq_st f1, 0x0(r5), 0, 0
lbl_fn_803CCA84_00000304:
    cmpwi r6, 0x0
    beq lbl_fn_803CCA84_00000330
    lfs f2, lbl_80885CBC
    addi r3, r1, 0x8
    lfs f0, 0x14(r8)
    stfs f2, 0x8(r1)
    stfs f0, 0xc(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x8(r6)
lbl_fn_803CCA84_00000330:
    li r3, 0x1
    b lbl_fn_803CCA84_00000344
lbl_fn_803CCA84_00000338:
    addi r9, r9, 0x148
    bdnz lbl_fn_803CCA84_000002D4
lbl_fn_803CCA84_00000340:
    li r3, 0x0
lbl_fn_803CCA84_00000344:
    addi r1, r1, 0x30
    blr
}

asm void fn_803CCC4C(void)
{
    nofralloc
    lwz r4, 0x134(r3)
    li r3, 0x0
    cmpwi r4, 0x0
    beqlr
    lwz r0, 0x8c(r4)
    cmpwi r0, 0x0
    beqlr
    li r3, 0x1
    blr
}

asm void fn_803CCC70(void)
{
    nofralloc
    lwz r3, 0x134(r3)
    cmpwi r3, 0x0
    beqlr
    stw r4, 0xb4(r3)
    blr
}

asm void fn_803CCC84(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    lwz r0, 0x190(r3)
    stw r4, 0x8(r1)
    slwi r0, r0, 3
    add r0, r3, r0
    stw r5, 0xc(r1)
    addic. r6, r0, 0x194
    beq lbl_fn_803CCC84_000003AC
    stw r4, 0x0(r6)
    stw r5, 0x4(r6)
lbl_fn_803CCC84_000003AC:
    lwz r4, 0x190(r3)
    addi r0, r4, 0x1
    stw r0, 0x190(r3)
    addi r1, r1, 0x10
    blr
}

asm void fn_803CCCC0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    mr r29, r3
    mr r31, r29
    b lbl_fn_803CCCC0_00000468
lbl_fn_803CCCC0_000003E8:
    lwz r0, 0x194(r31)
    li r3, 0x0
    cmpwi r0, 0x0
    beq lbl_fn_803CCCC0_00000414
    cmpwi r0, 0x1
    beq lbl_fn_803CCCC0_00000424
    cmpwi r0, 0x2
    beq lbl_fn_803CCCC0_00000434
    cmpwi r0, 0x3
    beq lbl_fn_803CCCC0_00000444
    b lbl_fn_803CCCC0_00000450
lbl_fn_803CCCC0_00000414:
    lwz r3, lbl_8087F8A0
    lwz r4, 0x198(r31)
    bl fn_8011F91C
    b lbl_fn_803CCCC0_00000450
lbl_fn_803CCCC0_00000424:
    lwz r3, lbl_8087F890
    lwz r4, 0x198(r31)
    bl fn_8011FE3C
    b lbl_fn_803CCCC0_00000450
lbl_fn_803CCCC0_00000434:
    lwz r3, lbl_8087F408
    lwz r4, 0x198(r31)
    bl fn_8011FC10
    b lbl_fn_803CCCC0_00000450
lbl_fn_803CCCC0_00000444:
    lwz r3, lbl_8087F8A0
    lwz r4, 0x198(r31)
    bl fn_8011F91C
lbl_fn_803CCCC0_00000450:
    cmpwi r3, 0x0
    beq lbl_fn_803CCCC0_00000460
    li r4, 0x1
    bl fn_8016E4C4
lbl_fn_803CCCC0_00000460:
    addi r31, r31, 0x8
    addi r30, r30, 0x1
lbl_fn_803CCCC0_00000468:
    lwz r0, 0x190(r29)
    cmplw r30, r0
    blt lbl_fn_803CCCC0_000003E8
    li r0, 0x0
    stw r0, 0x190(r29)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803CCD98(void)
{
    nofralloc
    lwz r3, 0x134(r3)
    cmpwi r3, 0x0
    beqlr
    b fn_803ACD08
    blr
}

asm void fn_803CCDAC(void)
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
    bne lbl_fn_803CCDAC_000004E8
    li r3, 0x0
    b lbl_fn_803CCDAC_00000610
lbl_fn_803CCDAC_000004E8:
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
    b lbl_fn_803CCDAC_00000600
lbl_fn_803CCDAC_00000514:
    lwz r0, 0x4(r21)
    add r23, r0, r31
    lwz r0, 0x4c(r23)
    cmpwi r0, 0x0
    beq lbl_fn_803CCDAC_000005F8
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
    beq lbl_fn_803CCDAC_000005F8
    addi r3, r23, 0x18
    bl fn_805F9920
    fcmpo cr0, f1, f30
    bge lbl_fn_803CCDAC_000005F8
    fmr f30, f1
    mr r25, r23
lbl_fn_803CCDAC_000005F8:
    addi r24, r24, 0x1
    addi r31, r31, 0x50
lbl_fn_803CCDAC_00000600:
    lwz r0, 0x0(r21)
    cmplw r24, r0
    blt lbl_fn_803CCDAC_00000514
    mr r3, r25
lbl_fn_803CCDAC_00000610:
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

asm void fn_803CCF38(void)
{
    nofralloc
    lbz r0, lbl_8087F3CC
    extsb. r0, r0
    bne lbl_fn_803CCF38_0000064C
    li r0, 0x1
    stb r0, lbl_8087F3CC
lbl_fn_803CCF38_0000064C:
    lbz r0, lbl_8087F3CD
    extsb. r0, r0
    bnelr
    li r0, 0x1
    stb r0, lbl_8087F3CD
    blr
}

asm void fn_803CCF64(void)
{
    nofralloc
    b fn_803CCF68
}

asm void fn_803CCF68(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0xa4(r1)
    stmw r14, 0x58(r1)
    mr r15, r3
    mr r16, r5
    beq lbl_fn_803CCF68_00000C84
    sth r5, 0x0(r3)
    li r24, 0x0
    lis r3, __files@ha
    mr r18, r4
    stw r24, 0x20(r1)
    addi r27, r3, __files@l
    addi r28, r1, 0x28
    addi r21, r1, 0x40
    stw r24, 0x24(r1)
    li r17, 0x0
    lis r30, 0xcccd
    lis r26, lbl_80750518@ha
    stw r24, 0x28(r1)
    lis r25, 0x4000
    lis r29, 0x1555
    lis r31, 0x2aab
    lis r14, lbl_8078BCB8@ha
    b lbl_fn_803CCF68_00000954
lbl_fn_803CCF68_000006D0:
    cmpwi r17, 0x0
    bne lbl_fn_803CCF68_000006E4
    lhz r19, 0x0(r18)
    li r20, 0x1
    b lbl_fn_803CCF68_0000094C
lbl_fn_803CCF68_000006E4:
    lhz r0, 0x0(r18)
    cmplw r19, r0
    beq lbl_fn_803CCF68_00000948
    lwz r4, 0x24(r1)
    lwz r3, 0x28(r1)
    cmplw r4, r3
    bge lbl_fn_803CCF68_00000720
    addi r4, r4, 0x1
    lwz r3, 0x20(r1)
    subi r0, r4, 0x1
    stw r4, 0x24(r1)
    slwi r0, r0, 2
    sthux r20, r3, r0
    sth r19, 0x2(r3)
    b lbl_fn_803CCF68_0000093C
lbl_fn_803CCF68_00000720:
    subi r0, r25, 0x1
    subf r0, r3, r0
    cmplwi r0, 0x1
    bge lbl_fn_803CCF68_00000744
    addi r4, r26, lbl_80750518@l
    addi r3, r27, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_803CCF68_00000744:
    lwz r3, 0x24(r1)
    subi r0, r25, 0x1
    lwz r22, 0x28(r1)
    addi r3, r3, 0x1
    stw r24, 0x40(r1)
    subf r3, r22, r3
    subf r0, r22, r0
    cmplw r3, r0
    stw r24, 0x44(r1)
    stw r24, 0x48(r1)
    stw r28, 0x4c(r1)
    stw r24, 0x50(r1)
    stw r3, 0x1c(r1)
    ble lbl_fn_803CCF68_00000790
    addi r4, r26, lbl_80750518@l
    addi r3, r27, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_803CCF68_00000790:
    addi r0, r29, 0x5555
    cmplw r22, r0
    bge lbl_fn_803CCF68_000007D8
    addi r4, r22, 0x1
    subi r5, r30, 0x3333
    slwi r3, r4, 2
    lwz r0, 0x1c(r1)
    subf r4, r4, r3
    mulhwu r4, r5, r4
    addi r3, r1, 0x14
    srwi r4, r4, 2
    stw r4, 0x14(r1)
    cmplw r4, r0
    bge lbl_fn_803CCF68_000007CC
    addi r3, r1, 0x1c
lbl_fn_803CCF68_000007CC:
    lwz r0, 0x0(r3)
    add r23, r22, r0
    b lbl_fn_803CCF68_00000814
lbl_fn_803CCF68_000007D8:
    subi r0, r31, 0x5556
    cmplw r22, r0
    bge lbl_fn_803CCF68_00000810
    addi r3, r22, 0x1
    lwz r0, 0x1c(r1)
    srwi r3, r3, 1
    stw r3, 0x18(r1)
    cmplw r3, r0
    addi r3, r1, 0x18
    bge lbl_fn_803CCF68_00000804
    addi r3, r1, 0x1c
lbl_fn_803CCF68_00000804:
    lwz r0, 0x0(r3)
    add r23, r22, r0
    b lbl_fn_803CCF68_00000814
lbl_fn_803CCF68_00000810:
    subi r23, r25, 0x1
lbl_fn_803CCF68_00000814:
    subi r0, r25, 0x1
    cmplw r23, r0
    ble lbl_fn_803CCF68_00000834
    addi r4, r26, lbl_80750518@l
    addi r3, r27, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_803CCF68_00000834:
    slwi r3, r23, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r22, r3
    bne lbl_fn_803CCF68_0000085C
    addi r3, r27, 0xa0
    addi r4, r14, lbl_8078BCB8@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_803CCF68_0000085C:
    lwz r5, 0x24(r1)
    lwz r0, 0x44(r1)
    slwi r4, r5, 2
    stw r22, 0x40(r1)
    slwi r3, r0, 2
    stw r23, 0x48(r1)
    add r0, r22, r4
    stw r5, 0x50(r1)
    sthux r20, r3, r0
    sth r19, 0x2(r3)
    lwz r3, 0x24(r1)
    lwz r0, 0x50(r1)
    slwi r5, r3, 2
    lwz r6, 0x44(r1)
    slwi r3, r0, 2
    lwz r7, 0x20(r1)
    addi r0, r6, 0x1
    stw r0, 0x44(r1)
    add r6, r7, r5
    lwz r4, 0x40(r1)
    addi r0, r6, 0x3
    subf r0, r7, r0
    add r5, r4, r3
    srwi r0, r0, 2
    mtctr r0
    cmplw r6, r7
    ble lbl_fn_803CCF68_000008F8
lbl_fn_803CCF68_000008C8:
    subic. r5, r5, 0x4
    subi r6, r6, 0x4
    beq lbl_fn_803CCF68_000008DC
    lwz r0, 0x0(r6)
    stw r0, 0x0(r5)
lbl_fn_803CCF68_000008DC:
    lwz r4, 0x50(r1)
    lwz r3, 0x44(r1)
    subi r0, r4, 0x1
    stw r0, 0x50(r1)
    addi r0, r3, 0x1
    stw r0, 0x44(r1)
    bdnz lbl_fn_803CCF68_000008C8
lbl_fn_803CCF68_000008F8:
    lwz r0, 0x44(r1)
    cmpwi r21, 0x0
    lwz r6, 0x28(r1)
    lwz r5, 0x48(r1)
    lwz r3, 0x20(r1)
    lwz r4, 0x40(r1)
    stw r5, 0x28(r1)
    stw r6, 0x48(r1)
    stw r4, 0x20(r1)
    stw r3, 0x40(r1)
    stw r0, 0x24(r1)
    stw r24, 0x44(r1)
    beq lbl_fn_803CCF68_0000093C
    cmpwi r3, 0x0
    beq lbl_fn_803CCF68_0000093C
    stw r24, 0x44(r1)
    bl dtor_80084684
lbl_fn_803CCF68_0000093C:
    lhz r19, 0x0(r18)
    li r20, 0x1
    b lbl_fn_803CCF68_0000094C
lbl_fn_803CCF68_00000948:
    addi r20, r20, 0x1
lbl_fn_803CCF68_0000094C:
    addi r18, r18, 0x2
    addi r17, r17, 0x1
lbl_fn_803CCF68_00000954:
    cmplw r17, r16
    blt lbl_fn_803CCF68_000006D0
    lwz r3, 0x24(r1)
    lwz r4, 0x28(r1)
    cmplw r3, r4
    bge lbl_fn_803CCF68_0000098C
    addi r4, r3, 0x1
    lwz r3, 0x20(r1)
    subi r0, r4, 0x1
    stw r4, 0x24(r1)
    slwi r0, r0, 2
    sthux r20, r3, r0
    sth r19, 0x2(r3)
    b lbl_fn_803CCF68_00000BF0
lbl_fn_803CCF68_0000098C:
    lis r3, 0x4000
    subi r0, r3, 0x1
    subf r0, r4, r0
    cmplwi r0, 0x1
    bge lbl_fn_803CCF68_000009C0
    lis r3, __files@ha
    lis r4, lbl_80750518@ha
    addi r3, r3, __files@l
    addi r4, r4, lbl_80750518@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_803CCF68_000009C0:
    lwz r4, 0x24(r1)
    li r6, 0x0
    lis r3, 0x4000
    lwz r14, 0x28(r1)
    subi r0, r3, 0x1
    addi r4, r4, 0x1
    subf r3, r14, r4
    addi r5, r1, 0x28
    subf r0, r14, r0
    stw r6, 0x2c(r1)
    cmplw r3, r0
    stw r6, 0x30(r1)
    stw r6, 0x34(r1)
    stw r5, 0x38(r1)
    stw r6, 0x3c(r1)
    stw r3, 0x10(r1)
    ble lbl_fn_803CCF68_00000A24
    lis r3, __files@ha
    lis r4, lbl_80750518@ha
    addi r3, r3, __files@l
    addi r4, r4, lbl_80750518@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_803CCF68_00000A24:
    lis r3, 0x1555
    addi r0, r3, 0x5555
    cmplw r14, r0
    bge lbl_fn_803CCF68_00000A74
    addi r5, r14, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x10(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x8
    srwi r4, r4, 2
    stw r4, 0x8(r1)
    cmplw r4, r0
    bge lbl_fn_803CCF68_00000A68
    addi r3, r1, 0x10
lbl_fn_803CCF68_00000A68:
    lwz r0, 0x0(r3)
    add r14, r14, r0
    b lbl_fn_803CCF68_00000AB8
lbl_fn_803CCF68_00000A74:
    lis r3, 0x2aab
    subi r0, r3, 0x5556
    cmplw r14, r0
    bge lbl_fn_803CCF68_00000AB0
    addi r3, r14, 0x1
    lwz r0, 0x10(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_803CCF68_00000AA4
    addi r3, r1, 0x10
lbl_fn_803CCF68_00000AA4:
    lwz r0, 0x0(r3)
    add r14, r14, r0
    b lbl_fn_803CCF68_00000AB8
lbl_fn_803CCF68_00000AB0:
    lis r3, 0x4000
    subi r14, r3, 0x1
lbl_fn_803CCF68_00000AB8:
    lis r3, 0x4000
    subi r0, r3, 0x1
    cmplw r14, r0
    ble lbl_fn_803CCF68_00000AE8
    lis r3, __files@ha
    lis r4, lbl_80750518@ha
    addi r3, r3, __files@l
    addi r4, r4, lbl_80750518@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_803CCF68_00000AE8:
    slwi r3, r14, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r16, r3
    bne lbl_fn_803CCF68_00000B1C
    lis r3, __files@ha
    lis r4, lbl_8078BCB8@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8078BCB8@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_803CCF68_00000B1C:
    lwz r4, 0x24(r1)
    lwz r3, 0x30(r1)
    slwi r0, r4, 2
    stw r16, 0x2c(r1)
    add r6, r16, r0
    slwi r0, r3, 2
    addi r3, r3, 0x1
    sthx r20, r6, r0
    add r5, r0, r6
    sth r19, 0x2(r5)
    lwz r0, 0x24(r1)
    lwz r7, 0x20(r1)
    slwi r0, r0, 2
    stw r14, 0x34(r1)
    add r5, r7, r0
    addi r0, r5, 0x3
    stw r4, 0x3c(r1)
    subf r0, r7, r0
    srwi r0, r0, 2
    stw r3, 0x30(r1)
    mtctr r0
    cmplw r5, r7
    ble lbl_fn_803CCF68_00000BA8
lbl_fn_803CCF68_00000B78:
    subic. r6, r6, 0x4
    subi r5, r5, 0x4
    beq lbl_fn_803CCF68_00000B8C
    lwz r0, 0x0(r5)
    stw r0, 0x0(r6)
lbl_fn_803CCF68_00000B8C:
    lwz r4, 0x3c(r1)
    lwz r3, 0x30(r1)
    subi r0, r4, 0x1
    stw r0, 0x3c(r1)
    addi r0, r3, 0x1
    stw r0, 0x30(r1)
    bdnz lbl_fn_803CCF68_00000B78
lbl_fn_803CCF68_00000BA8:
    addic. r0, r1, 0x2c
    lwz r0, 0x30(r1)
    lwz r7, 0x28(r1)
    li r6, 0x0
    lwz r5, 0x34(r1)
    lwz r3, 0x20(r1)
    lwz r4, 0x2c(r1)
    stw r5, 0x28(r1)
    stw r7, 0x34(r1)
    stw r4, 0x20(r1)
    stw r3, 0x2c(r1)
    stw r0, 0x24(r1)
    stw r6, 0x30(r1)
    beq lbl_fn_803CCF68_00000BF0
    cmpwi r3, 0x0
    beq lbl_fn_803CCF68_00000BF0
    stw r6, 0x30(r1)
    bl dtor_80084684
lbl_fn_803CCF68_00000BF0:
    lis r3, lbl_80750518@ha
    lwz r0, 0x24(r1)
    addi r3, r3, lbl_80750518@l
    sth r0, 0x2(r15)
    addi r5, r3, 0x14
    li r4, 0x3
    clrlslwi r3, r0, 16, 2
    li r7, 0x0
    mr r6, r5
    bl fn_800846FC
    stw r3, 0x4(r15)
    li r6, 0x0
    b lbl_fn_803CCF68_00000C4C
lbl_fn_803CCF68_00000C24:
    lwz r3, 0x20(r1)
    clrlslwi r5, r6, 16, 2
    lwz r0, 0x4(r15)
    addi r6, r6, 0x1
    add r4, r3, r5
    add r3, r0, r5
    lhz r0, 0x0(r4)
    sth r0, 0x0(r3)
    lhz r0, 0x2(r4)
    sth r0, 0x2(r3)
lbl_fn_803CCF68_00000C4C:
    lhz r0, 0x2(r15)
    clrlwi r3, r6, 16
    cmplw r3, r0
    blt lbl_fn_803CCF68_00000C24
    addic. r0, r1, 0x20
    beq lbl_fn_803CCF68_00000C84
    beq lbl_fn_803CCF68_00000C84
    lwz r3, 0x20(r1)
    cmpwi r3, 0x0
    beq lbl_fn_803CCF68_00000C84
    lwz r0, 0x24(r1)
    subf r0, r0, r0
    stw r0, 0x24(r1)
    bl dtor_80084684
lbl_fn_803CCF68_00000C84:
    lmw r14, 0x58(r1)
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_803CD598(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x84(r1)
    stmw r16, 0x40(r1)
    mr r16, r3
    mr r17, r4
    beq lbl_fn_803CD598_00001004
    sth r5, 0x0(r3)
    li r22, 0x0
    lis r3, __files@ha
    addi r26, r1, 0x1c
    stw r22, 0x14(r1)
    addi r25, r3, __files@l
    addi r20, r1, 0x20
    lis r29, 0xcccd
    stw r22, 0x18(r1)
    lis r24, lbl_80750518@ha
    lis r23, 0x4000
    lis r28, 0x1555
    stw r22, 0x1c(r1)
    lis r30, 0x2aab
    lis r31, lbl_8078BCB8@ha
lbl_fn_803CD598_00000CF4:
    mr r3, r17
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    extsb. r0, r0
    beq lbl_fn_803CD598_00000F70
    bl fn_80684600
    clrlwi r19, r3, 16
    mr r3, r17
    bl fn_8005B3CC
    bl fn_80684600
    clrlwi r18, r3, 16
    lwz r4, 0x18(r1)
    lwz r3, 0x1c(r1)
    cmplw r4, r3
    bge lbl_fn_803CD598_00000D50
    addi r4, r4, 0x1
    lwz r3, 0x14(r1)
    subi r0, r4, 0x1
    stw r4, 0x18(r1)
    slwi r0, r0, 2
    sthux r18, r3, r0
    sth r19, 0x2(r3)
    b lbl_fn_803CD598_00000CF4
lbl_fn_803CD598_00000D50:
    subi r0, r23, 0x1
    subf r0, r3, r0
    cmplwi r0, 0x1
    bge lbl_fn_803CD598_00000D74
    addi r4, r24, lbl_80750518@l
    addi r3, r25, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_803CD598_00000D74:
    lwz r3, 0x18(r1)
    subi r0, r23, 0x1
    lwz r27, 0x1c(r1)
    addi r3, r3, 0x1
    stw r22, 0x20(r1)
    subf r3, r27, r3
    subf r0, r27, r0
    cmplw r3, r0
    stw r22, 0x24(r1)
    stw r22, 0x28(r1)
    stw r26, 0x2c(r1)
    stw r22, 0x30(r1)
    stw r3, 0x10(r1)
    ble lbl_fn_803CD598_00000DC0
    addi r4, r24, lbl_80750518@l
    addi r3, r25, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_803CD598_00000DC0:
    addi r0, r28, 0x5555
    cmplw r27, r0
    bge lbl_fn_803CD598_00000E08
    addi r4, r27, 0x1
    subi r5, r29, 0x3333
    slwi r3, r4, 2
    lwz r0, 0x10(r1)
    subf r4, r4, r3
    mulhwu r4, r5, r4
    addi r3, r1, 0x8
    srwi r4, r4, 2
    stw r4, 0x8(r1)
    cmplw r4, r0
    bge lbl_fn_803CD598_00000DFC
    addi r3, r1, 0x10
lbl_fn_803CD598_00000DFC:
    lwz r0, 0x0(r3)
    add r27, r27, r0
    b lbl_fn_803CD598_00000E44
lbl_fn_803CD598_00000E08:
    subi r0, r30, 0x5556
    cmplw r27, r0
    bge lbl_fn_803CD598_00000E40
    addi r3, r27, 0x1
    lwz r0, 0x10(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_803CD598_00000E34
    addi r3, r1, 0x10
lbl_fn_803CD598_00000E34:
    lwz r0, 0x0(r3)
    add r27, r27, r0
    b lbl_fn_803CD598_00000E44
lbl_fn_803CD598_00000E40:
    subi r27, r23, 0x1
lbl_fn_803CD598_00000E44:
    subi r0, r23, 0x1
    cmplw r27, r0
    ble lbl_fn_803CD598_00000E64
    addi r4, r24, lbl_80750518@l
    addi r3, r25, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_803CD598_00000E64:
    slwi r3, r27, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r21, r3
    bne lbl_fn_803CD598_00000E8C
    addi r3, r25, 0xa0
    addi r4, r31, lbl_8078BCB8@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_803CD598_00000E8C:
    lwz r5, 0x18(r1)
    lwz r0, 0x24(r1)
    slwi r4, r5, 2
    stw r21, 0x20(r1)
    slwi r3, r0, 2
    stw r27, 0x28(r1)
    add r0, r21, r4
    stw r5, 0x30(r1)
    sthux r18, r3, r0
    sth r19, 0x2(r3)
    lwz r3, 0x18(r1)
    lwz r0, 0x30(r1)
    slwi r5, r3, 2
    lwz r6, 0x24(r1)
    slwi r3, r0, 2
    lwz r7, 0x14(r1)
    addi r0, r6, 0x1
    stw r0, 0x24(r1)
    add r6, r7, r5
    lwz r4, 0x20(r1)
    addi r0, r6, 0x3
    subf r0, r7, r0
    add r5, r4, r3
    srwi r0, r0, 2
    mtctr r0
    cmplw r6, r7
    ble lbl_fn_803CD598_00000F28
lbl_fn_803CD598_00000EF8:
    subic. r5, r5, 0x4
    subi r6, r6, 0x4
    beq lbl_fn_803CD598_00000F0C
    lwz r0, 0x0(r6)
    stw r0, 0x0(r5)
lbl_fn_803CD598_00000F0C:
    lwz r4, 0x30(r1)
    lwz r3, 0x24(r1)
    subi r0, r4, 0x1
    stw r0, 0x30(r1)
    addi r0, r3, 0x1
    stw r0, 0x24(r1)
    bdnz lbl_fn_803CD598_00000EF8
lbl_fn_803CD598_00000F28:
    lwz r0, 0x24(r1)
    cmpwi r20, 0x0
    lwz r6, 0x1c(r1)
    lwz r5, 0x28(r1)
    lwz r3, 0x14(r1)
    lwz r4, 0x20(r1)
    stw r5, 0x1c(r1)
    stw r6, 0x28(r1)
    stw r4, 0x14(r1)
    stw r3, 0x20(r1)
    stw r0, 0x18(r1)
    stw r22, 0x24(r1)
    beq lbl_fn_803CD598_00000CF4
    cmpwi r3, 0x0
    beq lbl_fn_803CD598_00000CF4
    stw r22, 0x24(r1)
    bl dtor_80084684
    b lbl_fn_803CD598_00000CF4
lbl_fn_803CD598_00000F70:
    lis r3, lbl_80750518@ha
    lwz r0, 0x18(r1)
    addi r3, r3, lbl_80750518@l
    sth r0, 0x2(r16)
    addi r5, r3, 0x14
    li r4, 0x3
    clrlslwi r3, r0, 16, 2
    li r7, 0x0
    mr r6, r5
    bl fn_800846FC
    stw r3, 0x4(r16)
    li r6, 0x0
    b lbl_fn_803CD598_00000FCC
lbl_fn_803CD598_00000FA4:
    lwz r3, 0x14(r1)
    clrlslwi r5, r6, 16, 2
    lwz r0, 0x4(r16)
    addi r6, r6, 0x1
    add r4, r3, r5
    add r3, r0, r5
    lhz r0, 0x0(r4)
    sth r0, 0x0(r3)
    lhz r0, 0x2(r4)
    sth r0, 0x2(r3)
lbl_fn_803CD598_00000FCC:
    lhz r0, 0x2(r16)
    clrlwi r3, r6, 16
    cmplw r3, r0
    blt lbl_fn_803CD598_00000FA4
    addic. r0, r1, 0x14
    beq lbl_fn_803CD598_00001004
    beq lbl_fn_803CD598_00001004
    lwz r3, 0x14(r1)
    cmpwi r3, 0x0
    beq lbl_fn_803CD598_00001004
    lwz r0, 0x18(r1)
    subf r0, r0, r0
    stw r0, 0x18(r1)
    bl dtor_80084684
lbl_fn_803CD598_00001004:
    lmw r16, 0x40(r1)
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_803CD918(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r3, 0x4(r3)
    bl fn_80084C24
    li r0, 0x0
    stw r0, 0x4(r31)
    sth r0, 0x0(r31)
    sth r0, 0x2(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803CD958(void)
{
    nofralloc
    lhz r6, 0x2(r3)
    li r8, 0x0
    li r9, 0x0
    b lbl_fn_803CD958_00001094
lbl_fn_803CD958_00001068:
    lwz r5, 0x4(r3)
    clrlslwi r7, r9, 16, 2
    lhzx r0, r5, r7
    add r8, r8, r0
    clrlwi r0, r8, 16
    cmplw r4, r0
    bge lbl_fn_803CD958_00001090
    add r3, r5, r7
    lhz r3, 0x2(r3)
    blr
lbl_fn_803CD958_00001090:
    addi r9, r9, 0x1
lbl_fn_803CD958_00001094:
    clrlwi r0, r9, 16
    cmplw r0, r6
    blt lbl_fn_803CD958_00001068
    li r3, 0x0
    blr
}

asm void fn_803CD9A8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_fn_803CD9A8_00001140
    lwz r0, lbl_8087F480
    cmpwi r0, 0x0
    bne lbl_fn_803CD9A8_00001140
    lis r5, lbl_80750544@ha
    li r3, 0x88
    addi r5, r5, lbl_80750544@l
    li r4, 0xa
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_803CD9A8_0000113C
    mr r4, r30
    bl fn_800D1D3C
    lis r4, lbl_8078BDD0@ha
    li r3, 0x0
    addi r4, r4, lbl_8078BDD0@l
    stw r4, 0x0(r31)
    lfs f0, lbl_80885D48
    li r0, 0xf
    stw r3, 0x48(r31)
    stw r3, 0x4c(r31)
    stw r3, 0x50(r31)
    stw r3, 0x54(r31)
    stw r3, 0x58(r31)
    stfs f0, 0x5c(r31)
    stw r0, 0x60(r31)
    stw r3, 0x64(r31)
lbl_fn_803CD9A8_0000113C:
    stw r31, lbl_8087F480
lbl_fn_803CD9A8_00001140:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    lwz r3, lbl_8087F480
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803CDA5C(void)
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
    beq lbl_fn_803CDA5C_000011C8
    addic. r0, r3, 0x48
    li r0, 0x0
    stw r0, lbl_8087F480
    beq lbl_fn_803CDA5C_000011AC
    lwz r4, 0x48(r3)
    cmpwi r4, 0x0
    beq lbl_fn_803CDA5C_000011AC
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_803CDA5C_000011AC
    bl fn_800897D8
lbl_fn_803CDA5C_000011AC:
    mr r3, r30
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r31, 0x0
    ble lbl_fn_803CDA5C_000011C8
    mr r3, r30
    bl dtor_80084684
lbl_fn_803CDA5C_000011C8:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803CDAE4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803CDAE4_00001254
    bl fn_803761FC
    cmpwi r3, 0x0
    beq lbl_fn_803CDAE4_00001254
    lwz r3, lbl_8087F448
    cmpwi r3, 0x0
    beq lbl_fn_803CDAE4_00001254
    lwz r0, 0x84(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803CDAE4_00001228
    lwz r0, 0xc4(r3)
    b lbl_fn_803CDAE4_0000122C
lbl_fn_803CDAE4_00001228:
    lwz r0, 0x8c(r3)
lbl_fn_803CDAE4_0000122C:
    cmpwi r0, 0x0
    ble lbl_fn_803CDAE4_0000123C
    cmpwi r0, 0x67
    bne lbl_fn_803CDAE4_00001254
lbl_fn_803CDAE4_0000123C:
    lfs f1, lbl_80885D4C
    li r4, 0x65
    li r5, 0x0
    li r6, 0x1
    li r7, 0x0
    bl fn_8037D4C0
lbl_fn_803CDAE4_00001254:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803CDB64(void)
{
    nofralloc
    blr
}

asm void fn_803CDB68(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803CDB68_00001338
    bl fn_803761FC
    cmpwi r3, 0x0
    beq lbl_fn_803CDB68_00001338
    lwz r3, lbl_8087F448
    cmpwi r3, 0x0
    beq lbl_fn_803CDB68_00001338
    lwz r4, lbl_8087F048
    addis r5, r4, 0x4
    lbz r0, -0x7360(r5)
    cmpwi r0, 0x0
    bne lbl_fn_803CDB68_00001320
    lwz r0, -0x7364(r5)
    cmpwi r0, 0x3
    blt lbl_fn_803CDB68_00001304
    lwz r4, -0x7370(r5)
    lwz r0, -0x736c(r5)
    slwi r4, r4, 1
    cmpw r4, r0
    bgt lbl_fn_803CDB68_000012E8
    lfs f1, lbl_80885D4C
    li r4, 0x6b
    li r5, 0x0
    li r6, 0x1
    li r7, 0x0
    bl fn_8037D4C0
    b lbl_fn_803CDB68_00001338
lbl_fn_803CDB68_000012E8:
    lfs f1, lbl_80885D4C
    li r4, 0x66
    li r5, 0x0
    li r6, 0x1
    li r7, 0x0
    bl fn_8037D4C0
    b lbl_fn_803CDB68_00001338
lbl_fn_803CDB68_00001304:
    lfs f1, lbl_80885D4C
    li r4, 0x65
    li r5, 0x0
    li r6, 0x1
    li r7, 0x0
    bl fn_8037D4C0
    b lbl_fn_803CDB68_00001338
lbl_fn_803CDB68_00001320:
    lfs f1, lbl_80885D4C
    li r4, 0xc9
    li r5, 0x0
    li r6, 0x1
    li r7, 0x0
    bl fn_8037D4C0
lbl_fn_803CDB68_00001338:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803CDC48(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803CDC48_00001390
    bl fn_803761FC
    cmpwi r3, 0x0
    beq lbl_fn_803CDC48_00001390
    lwz r3, lbl_8087F448
    cmpwi r3, 0x0
    beq lbl_fn_803CDC48_00001390
    lfs f1, lbl_80885D4C
    li r4, 0x67
    li r5, 0x0
    li r6, 0x1
    li r7, 0x0
    bl fn_8037D4C0
lbl_fn_803CDC48_00001390:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803CDCA0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    bl fn_803CDF84
    lwz r3, lbl_8087F430
    li r31, 0x0
    cmpwi r3, 0x0
    beq lbl_fn_803CDCA0_00001404
    bl fn_80373148
    cmpwi r3, 0x0
    beq lbl_fn_803CDCA0_00001404
    lwz r3, lbl_8087F430
    bl fn_80373148
    lwz r0, 0x48(r3)
    cmpwi r0, 0x2
    bne lbl_fn_803CDCA0_00001404
    lwz r0, 0x4c(r3)
    cmpwi r0, 0x36
    bne lbl_fn_803CDCA0_00001404
    lwz r0, 0x50(r3)
    cmpwi r0, 0x1
    bne lbl_fn_803CDCA0_00001404
    li r31, 0x1
lbl_fn_803CDCA0_00001404:
    lwz r3, lbl_8087F430
    li r30, 0x0
    cmpwi r3, 0x0
    beq lbl_fn_803CDCA0_000015CC
    lwz r0, 0x54e4(r3)
    cmpwi r0, 0x8
    bne lbl_fn_803CDCA0_00001514
    lwz r4, lbl_8087F540
    cmpwi r4, 0x0
    beq lbl_fn_803CDCA0_00001514
    lwz r4, 0x70(r4)
    cmpwi r4, 0x0
    beq lbl_fn_803CDCA0_00001514
    lwz r0, 0x194(r4)
    cmpwi r0, 0xa
    beq lbl_fn_803CDCA0_00001514
    lwz r5, 0x5620(r3)
    lwz r0, 0x48(r5)
    cmpwi r0, 0x0
    beq lbl_fn_803CDCA0_000014AC
    lwz r4, 0x70(r5)
    lwz r0, 0x6c(r5)
    srwi r6, r4, 24
    srwi r7, r0, 24
    cmplw r7, r6
    ble lbl_fn_803CDCA0_0000147C
    lwz r4, 0x58(r5)
    lwz r0, 0x4c(r5)
    subf. r0, r4, r0
    ble lbl_fn_803CDCA0_000014A8
lbl_fn_803CDCA0_0000147C:
    xor r0, r7, r6
    cntlzw r0, r0
    slw r0, r7, r0
    srwi. r0, r0, 31
    bne lbl_fn_803CDCA0_000014AC
    lwz r4, 0x54(r5)
    lwz r0, 0x4c(r5)
    lwz r5, 0x58(r5)
    subf r0, r4, r0
    subf. r0, r5, r0
    blt lbl_fn_803CDCA0_000014AC
lbl_fn_803CDCA0_000014A8:
    li r30, 0x1
lbl_fn_803CDCA0_000014AC:
    lwz r5, 0x5624(r3)
    lwz r0, 0x48(r5)
    cmpwi r0, 0x0
    beq lbl_fn_803CDCA0_00001514
    lwz r4, 0x70(r5)
    lwz r0, 0x6c(r5)
    srwi r6, r4, 24
    srwi r7, r0, 24
    cmplw r7, r6
    ble lbl_fn_803CDCA0_000014E4
    lwz r4, 0x58(r5)
    lwz r0, 0x4c(r5)
    subf. r0, r4, r0
    ble lbl_fn_803CDCA0_00001510
lbl_fn_803CDCA0_000014E4:
    xor r0, r7, r6
    cntlzw r0, r0
    slw r0, r7, r0
    srwi. r0, r0, 31
    bne lbl_fn_803CDCA0_00001514
    lwz r4, 0x54(r5)
    lwz r0, 0x4c(r5)
    lwz r5, 0x58(r5)
    subf r0, r4, r0
    subf. r0, r5, r0
    blt lbl_fn_803CDCA0_00001514
lbl_fn_803CDCA0_00001510:
    li r30, 0x1
lbl_fn_803CDCA0_00001514:
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_803CDCA0_00001530
    lwz r0, 0x5538(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803CDCA0_00001534
lbl_fn_803CDCA0_00001530:
    li r30, 0x1
lbl_fn_803CDCA0_00001534:
    lwz r3, lbl_8087F0A8
    addi r3, r3, 0x48c
    bl fn_80124B60
    cmpwi r3, 0x0
    beq lbl_fn_803CDCA0_000015CC
    lwz r3, lbl_8087F430
    lwz r4, 0x5620(r3)
    lwz r0, 0x48(r4)
    cmpwi r0, 0x0
    beq lbl_fn_803CDCA0_000015CC
    lfs f1, 0x74(r4)
    lfs f0, lbl_80885D50
    fcmpo cr0, f1, f0
    blt lbl_fn_803CDCA0_00001574
    cmpwi r31, 0x0
    beq lbl_fn_803CDCA0_000015CC
lbl_fn_803CDCA0_00001574:
    lwz r3, 0x70(r4)
    lwz r0, 0x6c(r4)
    srwi r5, r3, 24
    srwi r6, r0, 24
    cmplw r6, r5
    ble lbl_fn_803CDCA0_0000159C
    lwz r3, 0x58(r4)
    lwz r0, 0x4c(r4)
    subf. r0, r3, r0
    ble lbl_fn_803CDCA0_000015C8
lbl_fn_803CDCA0_0000159C:
    xor r0, r6, r5
    cntlzw r0, r0
    slw r0, r6, r0
    srwi. r0, r0, 31
    bne lbl_fn_803CDCA0_000015CC
    lwz r3, 0x54(r4)
    lwz r0, 0x4c(r4)
    lwz r4, 0x58(r4)
    subf r0, r3, r0
    subf. r0, r4, r0
    blt lbl_fn_803CDCA0_000015CC
lbl_fn_803CDCA0_000015C8:
    li r30, 0x1
lbl_fn_803CDCA0_000015CC:
    lwz r0, lbl_8087EFE8
    cmpwi r0, 0x0
    beq lbl_fn_803CDCA0_0000166C
    cmpwi r30, 0x0
    beq lbl_fn_803CDCA0_00001628
    li r30, 0x0
lbl_fn_803CDCA0_000015E4:
    subi r0, r30, 0x1
    cmplwi r0, 0x1
    ble lbl_fn_803CDCA0_00001618
    subi r0, r30, 0x4
    cmplwi r0, 0x1
    ble lbl_fn_803CDCA0_00001618
    cmpwi r30, 0x7
    beq lbl_fn_803CDCA0_00001618
    lwz r3, lbl_8087EFE8
    mr r4, r30
    lfs f1, lbl_80885D54
    li r5, 0x5
    bl fn_800D03AC
lbl_fn_803CDCA0_00001618:
    addi r30, r30, 0x1
    cmpwi r30, 0x9
    blt lbl_fn_803CDCA0_000015E4
    b lbl_fn_803CDCA0_0000166C
lbl_fn_803CDCA0_00001628:
    li r30, 0x0
lbl_fn_803CDCA0_0000162C:
    subi r0, r30, 0x1
    cmplwi r0, 0x1
    ble lbl_fn_803CDCA0_00001660
    subi r0, r30, 0x4
    cmplwi r0, 0x1
    ble lbl_fn_803CDCA0_00001660
    cmpwi r30, 0x7
    beq lbl_fn_803CDCA0_00001660
    lwz r3, lbl_8087EFE8
    mr r4, r30
    lfs f1, lbl_80885D4C
    li r5, 0x5
    bl fn_800D03AC
lbl_fn_803CDCA0_00001660:
    addi r30, r30, 0x1
    cmpwi r30, 0x9
    blt lbl_fn_803CDCA0_0000162C
lbl_fn_803CDCA0_0000166C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803CDF84(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, lbl_8087EE90
    cmpwi r0, 0x0
    beq lbl_fn_803CDF84_00001760
    lwz r0, lbl_8087EFE8
    cmpwi r0, 0x0
    bne lbl_fn_803CDF84_000016AC
    b lbl_fn_803CDF84_00001760
lbl_fn_803CDF84_000016AC:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803CDF84_00001760
    lwz r0, lbl_8087F448
    cmpwi r0, 0x0
    beq lbl_fn_803CDF84_00001760
    lwz r0, lbl_8087F418
    cmpwi r0, 0x0
    bne lbl_fn_803CDF84_000016D4
    b lbl_fn_803CDF84_00001760
lbl_fn_803CDF84_000016D4:
    bl fn_80375184
    cmpwi r3, 0x0
    beq lbl_fn_803CDF84_00001760
    lwz r3, lbl_8087F430
    bl fn_803761FC
    cmpwi r3, 0x0
    beq lbl_fn_803CDF84_00001760
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_803CDF84_00001760
    addis r3, r3, 0x4
    lwz r0, -0x7334(r3)
    lwz r3, -0x7330(r3)
    cmpw r0, r3
    beq lbl_fn_803CDF84_00001760
    cmpwi r0, 0x1
    beq lbl_fn_803CDF84_00001724
    cmpwi r0, 0x3
    beq lbl_fn_803CDF84_00001744
    b lbl_fn_803CDF84_00001760
lbl_fn_803CDF84_00001724:
    lwz r3, lbl_8087F448
    li r4, 0x6c
    lfs f1, lbl_80885D4C
    li r5, 0x0
    li r6, 0x1
    li r7, 0x0
    bl fn_8037D4C0
    b lbl_fn_803CDF84_00001760
lbl_fn_803CDF84_00001744:
    lwz r3, lbl_8087F448
    li r4, 0x6b
    lfs f1, lbl_80885D4C
    li r5, 0x0
    li r6, 0x1
    li r7, 0x0
    bl fn_8037D4C0
lbl_fn_803CDF84_00001760:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803CE070(void)
{
    nofralloc
    blr
}

asm void fn_803CE074(void)
{
    nofralloc
    lwz r0, 0x64(r3)
    addi r5, r3, 0x68
    slwi r0, r0, 3
    add r3, r3, r0
    addi r3, r3, 0x68
    b lbl_fn_803CE074_000017A4
lbl_fn_803CE074_0000178C:
    lwz r0, 0x0(r5)
    cmplw r0, r4
    bne lbl_fn_803CE074_000017A0
    lwz r3, 0x4(r5)
    blr
lbl_fn_803CE074_000017A0:
    addi r5, r5, 0x8
lbl_fn_803CE074_000017A4:
    cmplw r5, r3
    bne lbl_fn_803CE074_0000178C
    li r3, -0x1
    blr
}

asm void fn_803CE0B4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    lwz r0, 0x64(r3)
    cmplwi r0, 0x4
    blt lbl_fn_803CE0B4_000017CC
    li r3, 0x0
    b lbl_fn_803CE0B4_00001840
lbl_fn_803CE0B4_000017CC:
    cmpwi r5, 0x0
    blt lbl_fn_803CE0B4_0000183C
    lwz r0, 0x64(r3)
    addi r7, r3, 0x68
    slwi r0, r0, 3
    add r6, r3, r0
    addi r6, r6, 0x68
    b lbl_fn_803CE0B4_00001808
lbl_fn_803CE0B4_000017EC:
    lwz r0, 0x0(r7)
    cmplw r0, r4
    bne lbl_fn_803CE0B4_00001804
    stw r5, 0x4(r7)
    li r3, 0x1
    b lbl_fn_803CE0B4_00001840
lbl_fn_803CE0B4_00001804:
    addi r7, r7, 0x8
lbl_fn_803CE0B4_00001808:
    cmplw r7, r6
    bne lbl_fn_803CE0B4_000017EC
    cmpwi r6, 0x0
    stw r4, 0x8(r1)
    stw r5, 0xc(r1)
    beq lbl_fn_803CE0B4_00001828
    stw r4, 0x0(r6)
    stw r5, 0x4(r6)
lbl_fn_803CE0B4_00001828:
    lwz r4, 0x64(r3)
    addi r0, r4, 0x1
    stw r0, 0x64(r3)
    li r3, 0x1
    b lbl_fn_803CE0B4_00001840
lbl_fn_803CE0B4_0000183C:
    li r3, 0x0
lbl_fn_803CE0B4_00001840:
    addi r1, r1, 0x10
    blr
}

asm void fn_803CE148(void)
{
    nofralloc
    lis r3, 0x2d
    addi r3, r3, 0x5000
    blr
}

asm void fn_803CE154(void)
{
    nofralloc
    lis r3, 0x2d
    addi r3, r3, 0x5000
    blr
}

asm void fn_803CE160(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    li r31, 0x0
    stw r30, 0x28(r1)
    mr r30, r5
    stw r29, 0x24(r1)
    mr r29, r4
    stw r28, 0x20(r1)
    mr r28, r3
    ble lbl_fn_803CE160_0000189C
    cmpwi r4, 0x0
    bgt lbl_fn_803CE160_0000191C
lbl_fn_803CE160_0000189C:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803CE160_000018DC
    bl fn_80373148
    cmpwi r3, 0x0
    beq lbl_fn_803CE160_000018DC
    lwz r3, lbl_8087F430
    bl fn_80373148
    lwz r28, 0x48(r3)
    lwz r3, lbl_8087F430
    bl fn_80373148
    lwz r29, 0x4c(r3)
    lwz r3, lbl_8087F430
    bl fn_80373148
    lwz r30, 0x50(r3)
    b lbl_fn_803CE160_0000191C
lbl_fn_803CE160_000018DC:
    lwz r3, lbl_8087F540
    cmpwi r3, 0x0
    beq lbl_fn_803CE160_0000191C
    lwz r3, 0x70(r3)
    cmpwi r3, 0x0
    beq lbl_fn_803CE160_00001914
    lwz r0, 0x58(r3)
    stw r0, 0x10(r1)
    stw r0, 0xc(r1)
    lbz r28, 0x12(r1)
    stw r0, 0x8(r1)
    lhz r29, 0xc(r1)
    lbz r30, 0xb(r1)
    b lbl_fn_803CE160_0000191C
lbl_fn_803CE160_00001914:
    li r3, 0x0
    b lbl_fn_803CE160_00001958
lbl_fn_803CE160_0000191C:
    cmpwi r28, 0x1
    bne lbl_fn_803CE160_00001928
    li r31, 0x1
lbl_fn_803CE160_00001928:
    cmpwi r28, 0x2
    bne lbl_fn_803CE160_00001954
    cmpwi r29, 0x10
    bne lbl_fn_803CE160_00001940
    li r31, 0x1
    b lbl_fn_803CE160_00001954
lbl_fn_803CE160_00001940:
    cmpwi r29, 0x44
    bne lbl_fn_803CE160_00001954
    cmpwi r30, 0x1
    bne lbl_fn_803CE160_00001954
    li r31, 0x1
lbl_fn_803CE160_00001954:
    mr r3, r31
lbl_fn_803CE160_00001958:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}
