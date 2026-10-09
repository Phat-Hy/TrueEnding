#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_14(void);
extern void _savegpr_14(void);
extern void fn_8004ECC0(void);
extern void fn_8004ED34(void);
extern void fn_80051B70(void);
extern void fn_800BFAC8(void);
extern void fn_800CB3A0(void);
extern void fn_801231D0(void);
extern void fn_801240B4(void);
extern void fn_80370174(void);
extern void fn_8037F690(void);
extern void fn_803935FC(void);
extern void fn_8039BC0C(void);
extern void fn_8039CF8C(void);
extern void fn_803ACE18(void);
extern void fn_803ACF88(void);
extern void fn_803AD148(void);
extern void fn_803E3050(void);
extern void fn_803E3384(void);
extern void fn_803E6ADC(void);
extern void fn_805F93C0(void);
extern void fn_805F98D0(void);
extern void fn_805F9940(void);

/* External data declarations */
extern u8 jumptable_8078A788[];
extern u8 jumptable_8078A7B8[];
extern u8 jumptable_8078A7E8[];
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
extern u32 lbl_80885B1C;
extern u32 lbl_80885B20;
extern u32 lbl_80885B24;
extern u32 lbl_80885B28;
extern u32 lbl_80885B2C;
extern u32 lbl_80885B30;
extern u32 lbl_80885B34;
extern u32 lbl_80885B38;

/* Function declarations */
void fn_80399148(void);
void fn_80399734(void);

asm void fn_80399148(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    addi r11, r1, 0x110
    bl _savegpr_14
    li r9, 0x0
    li r0, 0x5
    stw r9, 0x98(r3)
    mr r15, r3
    addi r14, r1, 0x48
    stw r0, 0x9c(r3)
    lwz r3, lbl_8087F8A0
    lwz r3, 0x48(r3)
    psq_l f1, 0x614(r3), 0, 0
    lfs f2, 0x61c(r3)
    stfs f2, 0x50(r1)
    psq_st f1, 0x0(r14), 0, 0
    lfs f0, 0x620(r3)
    stfs f0, 0x54(r1)
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_80399148_0000011C
    lwz r0, 0x560(r3)
    cmpwi r0, 0xb
    bne lbl_fn_80399148_0000011C
    frsp f4, f2
    lfs f6, lbl_80885B10
    lfs f5, lbl_80885B1C
    mr r5, r14
    lfs f3, 0x4c(r1)
    addi r4, r1, 0x78
    lfs f0, 0x48(r1)
    fadds f4, f4, f6
    fadds f3, f3, f5
    stw r9, 0xac(r1)
    fadds f0, f0, f6
    lwz r3, lbl_8087EE98
    stw r9, 0xb0(r1)
    addi r6, r1, 0x18
    stw r9, 0xb4(r1)
    lis r7, 0x8000
    li r8, 0x0
    stw r9, 0xb8(r1)
    li r9, 0x0
    stfs f6, 0x24(r1)
    stfs f5, 0x28(r1)
    stfs f6, 0x2c(r1)
    stfs f0, 0x18(r1)
    stfs f3, 0x1c(r1)
    stfs f4, 0x20(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_80399148_0000011C
    lfs f4, lbl_80885B10
    addi r3, r1, 0x30
    lfs f0, 0x90(r1)
    lfs f5, 0x54(r1)
    fadds f2, f0, f4
    lfs f3, 0x8c(r1)
    lfs f0, 0x88(r1)
    fadds f3, f3, f5
    stfs f4, 0x3c(r1)
    fadds f0, f0, f4
    stfs f3, 0x34(r1)
    stfs f0, 0x30(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f5, 0x40(r1)
    stfs f4, 0x44(r1)
    stfs f2, 0x38(r1)
    psq_st f1, 0x0(r14), 0, 0
    stfs f2, 0x50(r1)
lbl_fn_80399148_0000011C:
    li r0, 0x0
    li r3, -0x1
    stw r3, 0x58(r1)
    li r18, 0x0
    lwz r23, 0x88(r15)
    li r19, 0x0
    stw r3, 0x5c(r1)
    lis r24, 0x68dc
    lis r27, jumptable_8078A788@ha
    li r25, 0x1
    stw r3, 0x60(r1)
    li r26, 0x6
    li r14, 0xa
    li r31, 0x2
    stw r0, 0x64(r1)
    li r30, 0x9
    li r29, 0x8
    li r28, 0x7
    stw r0, 0x68(r1)
    stw r0, 0x6c(r1)
    stw r0, 0x70(r1)
    b lbl_fn_80399148_000005C8
lbl_fn_80399148_00000174:
    lwz r0, 0xe8(r23)
    mr r4, r18
    li r17, 0x0
    add r3, r0, r19
    lwzx r0, r19, r0
    stw r0, 0xa0(r15)
    lwz r0, 0x2c(r3)
    cmpwi r0, 0x0
    blt lbl_fn_80399148_0000019C
    mr r4, r0
lbl_fn_80399148_0000019C:
    mulli r0, r4, 0xc
    lwz r3, 0x100(r15)
    add r20, r3, r0
    lwzx r0, r3, r0
    cmpwi r0, 0x0
    blt lbl_fn_80399148_000005B8
    stw r0, 0xa4(r15)
    mulli r4, r4, 0x48
    lwz r6, 0x80(r15)
    addi r3, r15, 0x80
    lwz r5, 0xe8(r23)
    lwz r0, 0x0(r20)
    add r4, r5, r4
    lwz r4, 0x28(r4)
    slwi r0, r0, 2
    lwzx r5, r4, r0
    b lbl_fn_80399148_000001FC
lbl_fn_80399148_000001E0:
    lwz r0, 0xc(r6)
    cmpw r0, r5
    blt lbl_fn_80399148_000001F8
    mr r3, r6
    lwz r6, 0x0(r6)
    b lbl_fn_80399148_000001FC
lbl_fn_80399148_000001F8:
    lwz r6, 0x4(r6)
lbl_fn_80399148_000001FC:
    cmpwi r6, 0x0
    bne lbl_fn_80399148_000001E0
    addi r0, r15, 0x80
    cmplw r3, r0
    beq lbl_fn_80399148_0000021C
    lwz r0, 0xc(r3)
    cmpw r5, r0
    bge lbl_fn_80399148_00000220
lbl_fn_80399148_0000021C:
    addi r3, r15, 0x80
lbl_fn_80399148_00000220:
    addi r0, r15, 0x80
    cmplw r3, r0
    beq lbl_fn_80399148_00000258
    subi r4, r24, 0x7453
    lwz r0, 0x10(r3)
    mulhw r3, r4, r5
    srawi r3, r3, 12
    srwi r4, r3, 31
    add r3, r3, r4
    slwi r3, r3, 2
    add r3, r15, r3
    lwz r3, 0x64(r3)
    add r22, r3, r0
    b lbl_fn_80399148_0000025C
lbl_fn_80399148_00000258:
    li r22, 0x0
lbl_fn_80399148_0000025C:
    cmpwi r22, 0x0
    beq lbl_fn_80399148_000005A8
    lwz r0, 0xc(r22)
    li r16, 0x0
    cmpwi r0, 0x0
    bne lbl_fn_80399148_000003E8
    lwz r0, 0x4(r20)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_80399148_000004EC
    lwz r0, 0xf4(r15)
    cmplw r0, r20
    bne lbl_fn_80399148_000004EC
    lwz r0, 0xc4(r22)
    stw r25, 0x6c(r1)
    cmplwi r0, 0xb
    stw r26, 0x58(r1)
    bgt lbl_fn_80399148_00000320
    addi r3, r27, jumptable_8078A788@l
    slwi r0, r0, 2
    lwzx r3, r3, r0
    mtctr r3
    bctr
    stw r25, 0x5c(r1)
    b lbl_fn_80399148_00000324
    stw r26, 0x5c(r1)
    b lbl_fn_80399148_00000324
    stw r28, 0x5c(r1)
    b lbl_fn_80399148_00000324
    stw r29, 0x5c(r1)
    b lbl_fn_80399148_00000324
    stw r30, 0x5c(r1)
    b lbl_fn_80399148_00000324
    stw r31, 0x5c(r1)
    b lbl_fn_80399148_00000324
    stw r14, 0x5c(r1)
    b lbl_fn_80399148_00000324
    li r0, 0xb
    stw r0, 0x5c(r1)
    b lbl_fn_80399148_00000324
    li r0, 0x12
    stw r0, 0x5c(r1)
    b lbl_fn_80399148_00000324
    li r0, 0x15
    stw r0, 0x5c(r1)
    b lbl_fn_80399148_00000324
    li r0, 0x16
    stw r0, 0x5c(r1)
    b lbl_fn_80399148_00000324
lbl_fn_80399148_00000320:
    stw r25, 0x5c(r1)
lbl_fn_80399148_00000324:
    lwz r3, lbl_8087F490
    li r21, 0x1
    lwz r0, 0x58(r1)
    stw r0, 0x764(r3)
    lwz r0, 0x5c(r1)
    stw r0, 0x768(r3)
    lwz r0, 0x60(r1)
    stw r0, 0x76c(r3)
    lwz r0, 0x64(r1)
    stw r0, 0x770(r3)
    lwz r0, 0x68(r1)
    stw r0, 0x774(r3)
    lwz r0, 0x6c(r1)
    stw r0, 0x778(r3)
    lwz r0, 0x70(r1)
    stw r0, 0x77c(r3)
    lwz r0, 0xe0(r15)
    cmpwi r0, 0x0
    bgt lbl_fn_80399148_000003A0
    lwz r3, lbl_8087F430
    li r20, 0x0
    cmpwi r3, 0x0
    beq lbl_fn_80399148_00000394
    li r4, 0xa1e
    bl fn_80370174
    cmpwi r3, 0x0
    beq lbl_fn_80399148_00000394
    li r20, 0x1
lbl_fn_80399148_00000394:
    cmpwi r20, 0x0
    bne lbl_fn_80399148_000003A0
    li r21, 0x0
lbl_fn_80399148_000003A0:
    cmpwi r21, 0x0
    beq lbl_fn_80399148_000003B0
    li r3, 0x0
    b lbl_fn_80399148_000003C0
lbl_fn_80399148_000003B0:
    lwz r3, lbl_8087F0A8
    li r4, 0x0
    addi r3, r3, 0x48c
    bl fn_801231D0
lbl_fn_80399148_000003C0:
    cmpwi r3, 0x0
    beq lbl_fn_80399148_000004EC
    li r0, 0x24
    stw r0, 0xe0(r15)
    li r16, 0x1
    lwz r3, lbl_8087F490
    cmpwi r3, 0x0
    beq lbl_fn_80399148_000004EC
    bl fn_803E3384
    b lbl_fn_80399148_000004EC
lbl_fn_80399148_000003E8:
    cmpwi r0, 0x1
    bne lbl_fn_80399148_00000440
    mr r3, r15
    mr r4, r18
    addi r5, r1, 0x48
    li r6, 0x1
    bl fn_803ACE18
    cmpwi r3, 0x0
    beq lbl_fn_80399148_00000430
    lwz r0, 0x4(r20)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_80399148_00000420
    li r16, 0x1
lbl_fn_80399148_00000420:
    lwz r0, 0x4(r20)
    ori r0, r0, 0x1
    stw r0, 0x4(r20)
    b lbl_fn_80399148_000004EC
lbl_fn_80399148_00000430:
    lwz r0, 0x4(r20)
    clrrwi r0, r0, 1
    stw r0, 0x4(r20)
    b lbl_fn_80399148_000004EC
lbl_fn_80399148_00000440:
    cmpwi r0, 0x8
    bne lbl_fn_80399148_00000498
    mr r3, r15
    mr r4, r18
    addi r5, r1, 0x48
    li r6, 0x1
    bl fn_803ACE18
    cmpwi r3, 0x0
    beq lbl_fn_80399148_00000474
    lwz r0, 0x4(r20)
    ori r0, r0, 0x8
    stw r0, 0x4(r20)
    b lbl_fn_80399148_000004EC
lbl_fn_80399148_00000474:
    lwz r0, 0x4(r20)
    rlwinm r0, r0, 0, 28, 28
    cmplwi r0, 0x8
    bne lbl_fn_80399148_00000488
    li r16, 0x1
lbl_fn_80399148_00000488:
    lwz r0, 0x4(r20)
    rlwinm r0, r0, 0, 29, 27
    stw r0, 0x4(r20)
    b lbl_fn_80399148_000004EC
lbl_fn_80399148_00000498:
    cmpwi r0, 0x6
    bne lbl_fn_80399148_000004E0
    mr r3, r15
    mr r4, r18
    addi r5, r1, 0x48
    li r6, 0x1
    bl fn_803ACE18
    cmpwi r3, 0x0
    bne lbl_fn_80399148_000004EC
    lwz r0, 0x4(r20)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80399148_000004D0
    li r16, 0x1
lbl_fn_80399148_000004D0:
    lwz r0, 0x4(r20)
    ori r0, r0, 0x4
    stw r0, 0x4(r20)
    b lbl_fn_80399148_000004EC
lbl_fn_80399148_000004E0:
    cmpwi r0, 0x2
    bne lbl_fn_80399148_000004EC
    li r16, 0x1
lbl_fn_80399148_000004EC:
    cmpwi r16, 0x0
    beq lbl_fn_80399148_000005A8
    lwz r0, 0xb0(r22)
    mr r3, r22
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80399148_00000588
lbl_fn_80399148_00000508:
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    bge lbl_fn_80399148_00000580
    mr r4, r22
    addi r3, r15, 0x138
    addi r5, r1, 0xc
    addi r6, r1, 0x9
    addi r7, r1, 0x8
    bl fn_8039BC0C
    lwz r4, 0xc(r1)
    cmpwi r4, 0x0
    beq lbl_fn_80399148_0000054C
    addi r5, r4, 0xc
    lwz r0, 0x0(r22)
    lwz r4, 0xc(r4)
    cmpw r4, r0
    bge lbl_fn_80399148_00000578
lbl_fn_80399148_0000054C:
    lwz r5, 0x0(r22)
    mr r4, r3
    lbz r0, lbl_8087DD38
    addi r3, r15, 0x138
    stw r5, 0x10(r1)
    addi r7, r1, 0x10
    lbz r5, 0x9(r1)
    stb r0, 0x14(r1)
    lbz r6, 0x8(r1)
    bl fn_803AD148
    addi r5, r3, 0xc
lbl_fn_80399148_00000578:
    stb r25, 0x4(r5)
    b lbl_fn_80399148_00000588
lbl_fn_80399148_00000580:
    addi r3, r3, 0x14
    bdnz lbl_fn_80399148_00000508
lbl_fn_80399148_00000588:
    mr r3, r15
    mr r4, r22
    addi r5, r22, 0xd0
    bl fn_8039CF8C
    cmpwi r3, 0x0
    bne lbl_fn_80399148_000005A8
    stw r25, 0x8c(r15)
    li r17, 0x1
lbl_fn_80399148_000005A8:
    lwz r0, 0x8c(r15)
    cmpwi r0, 0x0
    beq lbl_fn_80399148_000005B8
    li r17, 0x1
lbl_fn_80399148_000005B8:
    cmpwi r17, 0x0
    bne lbl_fn_80399148_000005D4
    addi r19, r19, 0x48
    addi r18, r18, 0x1
lbl_fn_80399148_000005C8:
    lwz r0, 0xe4(r23)
    cmplw r18, r0
    blt lbl_fn_80399148_00000174
lbl_fn_80399148_000005D4:
    addi r11, r1, 0x110
    bl _restgpr_14
    lwz r0, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_80399734(void)
{
    nofralloc
    stwu r1, -0x3d0(r1)
    mflr r0
    stw r0, 0x3d4(r1)
    addi r11, r1, 0x330
    stfd f31, 0x3c0(r1)
    psq_st f31, 0x3c8(r1), 0, 0
    stfd f30, 0x3b0(r1)
    psq_st f30, 0x3b8(r1), 0, 0
    stfd f29, 0x3a0(r1)
    psq_st f29, 0x3a8(r1), 0, 0
    stfd f28, 0x390(r1)
    psq_st f28, 0x398(r1), 0, 0
    stfd f27, 0x380(r1)
    psq_st f27, 0x388(r1), 0, 0
    stfd f26, 0x370(r1)
    psq_st f26, 0x378(r1), 0, 0
    stfd f25, 0x360(r1)
    psq_st f25, 0x368(r1), 0, 0
    stfd f24, 0x350(r1)
    psq_st f24, 0x358(r1), 0, 0
    stfd f23, 0x340(r1)
    psq_st f23, 0x348(r1), 0, 0
    stfd f22, 0x330(r1)
    psq_st f22, 0x338(r1), 0, 0
    bl _savegpr_14
    li r9, 0x0
    li r0, 0x4
    stw r9, 0x98(r3)
    mr r27, r3
    addi r14, r1, 0x180
    stw r0, 0x9c(r3)
    lwz r3, lbl_8087F8A0
    lwz r3, 0x48(r3)
    psq_l f1, 0x614(r3), 0, 0
    lfs f2, 0x61c(r3)
    stfs f2, 0x188(r1)
    psq_st f1, 0x0(r14), 0, 0
    lfs f0, 0x620(r3)
    stfs f0, 0x18c(r1)
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_80399734_00000758
    lwz r0, 0x560(r3)
    cmpwi r0, 0xb
    bne lbl_fn_80399734_00000758
    frsp f8, f2
    lfs f10, lbl_80885B10
    lfs f9, lbl_80885B1C
    mr r5, r14
    lfs f7, 0x184(r1)
    addi r4, r1, 0x288
    lfs f0, 0x180(r1)
    fadds f8, f8, f10
    fadds f7, f7, f9
    stw r9, 0x2bc(r1)
    fadds f0, f0, f10
    lwz r3, lbl_8087EE98
    stw r9, 0x2c0(r1)
    addi r6, r1, 0x6c
    stw r9, 0x2c4(r1)
    lis r7, 0x8000
    li r8, 0x0
    stw r9, 0x2c8(r1)
    li r9, 0x0
    stfs f10, 0x78(r1)
    stfs f9, 0x7c(r1)
    stfs f10, 0x80(r1)
    stfs f0, 0x6c(r1)
    stfs f7, 0x70(r1)
    stfs f8, 0x74(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_80399734_00000758
    lfs f8, lbl_80885B10
    addi r3, r1, 0x84
    lfs f0, 0x2a0(r1)
    lfs f9, 0x18c(r1)
    fadds f2, f0, f8
    lfs f7, 0x29c(r1)
    lfs f0, 0x298(r1)
    fadds f7, f7, f9
    stfs f8, 0x90(r1)
    fadds f0, f0, f8
    stfs f7, 0x88(r1)
    stfs f0, 0x84(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f9, 0x94(r1)
    stfs f8, 0x98(r1)
    stfs f2, 0x8c(r1)
    psq_st f1, 0x0(r14), 0, 0
    stfs f2, 0x188(r1)
lbl_fn_80399734_00000758:
    lis r0, lbl_8074EEE0@ha
    li r23, 0x0
    li r3, -0x1
    stw r3, 0x238(r1)
    lwz r15, 0x88(r27)
    addi r22, r1, 0x1f0
    stw r3, 0x23c(r1)
    addi r14, r1, 0x1fc
    lfs f24, lbl_80885B20
    addi r21, r1, 0x120
    stw r3, 0x240(r1)
    mr r3, r0
    addi r3, r3, lbl_8074EEE0@l
    lfs f25, lbl_80885B24
    stw r23, 0x244(r1)
    addi r20, r1, 0x258
    lfs f26, lbl_80885B28
    addi r19, r1, 0x1b4
    stw r23, 0x248(r1)
    addi r18, r1, 0x19c
    lfs f27, lbl_80885B2C
    li r31, 0x0
    stw r23, 0x24c(r1)
    li r26, 0x0
    lfs f28, lbl_80885B10
    li r24, 0x1
    stw r23, 0x250(r1)
    lis r25, 0x8000
    lfs f29, lbl_80885B34
    stw r3, 0x2d8(r1)
    lfs f30, lbl_80885B38
    b lbl_fn_80399734_00001954
lbl_fn_80399734_000007D8:
    lwz r0, 0xf0(r15)
    mr r5, r31
    li r30, 0x0
    add r3, r0, r26
    lwzx r0, r26, r0
    stw r0, 0xa0(r27)
    lwz r0, 0x20(r3)
    cmpwi r0, 0x0
    blt lbl_fn_80399734_00000800
    mr r5, r0
lbl_fn_80399734_00000800:
    mulli r0, r5, 0xc
    lwz r4, 0x110(r27)
    add r16, r4, r0
    lwzx r0, r4, r0
    cmpwi r0, 0x0
    blt lbl_fn_80399734_00001944
    stw r0, 0xa4(r27)
    mulli r4, r5, 0x28
    lwz r6, 0x80(r27)
    addi r7, r27, 0x80
    lwz r5, 0xf0(r15)
    lwz r0, 0x0(r16)
    add r4, r5, r4
    lwz r4, 0x1c(r4)
    slwi r0, r0, 2
    lwzx r5, r4, r0
    b lbl_fn_80399734_00000860
lbl_fn_80399734_00000844:
    lwz r0, 0xc(r6)
    cmpw r0, r5
    blt lbl_fn_80399734_0000085C
    mr r7, r6
    lwz r6, 0x0(r6)
    b lbl_fn_80399734_00000860
lbl_fn_80399734_0000085C:
    lwz r6, 0x4(r6)
lbl_fn_80399734_00000860:
    cmpwi r6, 0x0
    bne lbl_fn_80399734_00000844
    addi r0, r27, 0x80
    cmplw r7, r0
    beq lbl_fn_80399734_00000880
    lwz r0, 0xc(r7)
    cmpw r5, r0
    bge lbl_fn_80399734_00000884
lbl_fn_80399734_00000880:
    addi r7, r27, 0x80
lbl_fn_80399734_00000884:
    addi r0, r27, 0x80
    cmplw r7, r0
    beq lbl_fn_80399734_000008C0
    lis r4, 0x68dc
    lwz r0, 0x10(r7)
    subi r4, r4, 0x7453
    mulhw r4, r4, r5
    srawi r4, r4, 12
    srwi r5, r4, 31
    add r4, r4, r5
    slwi r4, r4, 2
    add r4, r27, r4
    lwz r4, 0x64(r4)
    add r29, r4, r0
    b lbl_fn_80399734_000008C4
lbl_fn_80399734_000008C0:
    li r29, 0x0
lbl_fn_80399734_000008C4:
    cmpwi r29, 0x0
    beq lbl_fn_80399734_00001934
    lwz r0, 0xc(r29)
    li r28, 0x0
    cmplwi r0, 0x8
    bgt lbl_fn_80399734_0000187C
    lis r4, jumptable_8078A7E8@ha
    slwi r0, r0, 2
    addi r4, r4, jumptable_8078A7E8@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    lwz r0, 0x4(r16)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_80399734_0000187C
    lwz r0, 0xf4(r27)
    cmplw r0, r16
    bne lbl_fn_80399734_0000187C
    lwz r4, 0xc4(r29)
    li r0, 0x6
    stw r24, 0x24c(r1)
    cmplwi r4, 0xb
    stw r0, 0x238(r1)
    bgt lbl_fn_80399734_000009C0
    lis r3, jumptable_8078A7B8@ha
    slwi r0, r4, 2
    addi r3, r3, jumptable_8078A7B8@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    stw r24, 0x23c(r1)
    b lbl_fn_80399734_000009C4
    li r0, 0x6
    stw r0, 0x23c(r1)
    b lbl_fn_80399734_000009C4
    li r0, 0x7
    stw r0, 0x23c(r1)
    b lbl_fn_80399734_000009C4
    li r0, 0x8
    stw r0, 0x23c(r1)
    b lbl_fn_80399734_000009C4
    li r0, 0x9
    stw r0, 0x23c(r1)
    b lbl_fn_80399734_000009C4
    li r0, 0x2
    stw r0, 0x23c(r1)
    b lbl_fn_80399734_000009C4
    li r0, 0xa
    stw r0, 0x23c(r1)
    b lbl_fn_80399734_000009C4
    li r0, 0xb
    stw r0, 0x23c(r1)
    b lbl_fn_80399734_000009C4
    li r0, 0x12
    stw r0, 0x23c(r1)
    b lbl_fn_80399734_000009C4
    li r0, 0x15
    stw r0, 0x23c(r1)
    b lbl_fn_80399734_000009C4
    li r0, 0x16
    stw r0, 0x23c(r1)
    b lbl_fn_80399734_000009C4
lbl_fn_80399734_000009C0:
    stw r24, 0x23c(r1)
lbl_fn_80399734_000009C4:
    lwz r3, lbl_8087F490
    li r17, 0x1
    lwz r0, 0x238(r1)
    stw r0, 0x764(r3)
    lwz r0, 0x23c(r1)
    stw r0, 0x768(r3)
    lwz r0, 0x240(r1)
    stw r0, 0x76c(r3)
    lwz r0, 0x244(r1)
    stw r0, 0x770(r3)
    lwz r0, 0x248(r1)
    stw r0, 0x774(r3)
    lwz r0, 0x24c(r1)
    stw r0, 0x778(r3)
    lwz r0, 0x250(r1)
    stw r0, 0x77c(r3)
    lwz r0, 0xe0(r27)
    cmpwi r0, 0x0
    bgt lbl_fn_80399734_00000A40
    lwz r3, lbl_8087F430
    li r16, 0x0
    cmpwi r3, 0x0
    beq lbl_fn_80399734_00000A34
    li r4, 0xa1e
    bl fn_80370174
    cmpwi r3, 0x0
    beq lbl_fn_80399734_00000A34
    li r16, 0x1
lbl_fn_80399734_00000A34:
    cmpwi r16, 0x0
    bne lbl_fn_80399734_00000A40
    li r17, 0x0
lbl_fn_80399734_00000A40:
    cmpwi r17, 0x0
    beq lbl_fn_80399734_00000A50
    li r3, 0x0
    b lbl_fn_80399734_00000A60
lbl_fn_80399734_00000A50:
    lwz r3, lbl_8087F0A8
    li r4, 0x0
    addi r3, r3, 0x48c
    bl fn_801231D0
lbl_fn_80399734_00000A60:
    cmpwi r3, 0x0
    beq lbl_fn_80399734_0000187C
    li r0, 0x24
    stw r0, 0xe0(r27)
    li r28, 0x1
    lwz r3, lbl_8087F490
    cmpwi r3, 0x0
    beq lbl_fn_80399734_0000187C
    bl fn_803E3384
    b lbl_fn_80399734_0000187C
    mr r3, r27
    mr r4, r31
    addi r5, r1, 0x180
    li r6, 0x1
    bl fn_803ACF88
    cmpwi r3, 0x0
    beq lbl_fn_80399734_00000AC8
    lwz r0, 0x4(r16)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_80399734_00000AB8
    li r28, 0x1
lbl_fn_80399734_00000AB8:
    lwz r0, 0x4(r16)
    ori r0, r0, 0x1
    stw r0, 0x4(r16)
    b lbl_fn_80399734_0000187C
lbl_fn_80399734_00000AC8:
    lwz r0, 0x4(r16)
    clrrwi r0, r0, 1
    stw r0, 0x4(r16)
    b lbl_fn_80399734_0000187C
    mr r3, r27
    mr r4, r31
    addi r5, r1, 0x180
    li r6, 0x1
    bl fn_803ACF88
    cmpwi r3, 0x0
    beq lbl_fn_80399734_00000B04
    lwz r0, 0x4(r16)
    ori r0, r0, 0x8
    stw r0, 0x4(r16)
    b lbl_fn_80399734_0000187C
lbl_fn_80399734_00000B04:
    lwz r0, 0x4(r16)
    rlwinm r0, r0, 0, 28, 28
    cmplwi r0, 0x8
    bne lbl_fn_80399734_00000B18
    li r28, 0x1
lbl_fn_80399734_00000B18:
    lwz r0, 0x4(r16)
    rlwinm r0, r0, 0, 29, 27
    stw r0, 0x4(r16)
    b lbl_fn_80399734_0000187C
    mr r3, r27
    mr r4, r31
    addi r5, r1, 0x180
    li r6, 0x1
    bl fn_803ACF88
    cmpwi r3, 0x0
    bne lbl_fn_80399734_0000187C
    lwz r0, 0x4(r16)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80399734_00000B58
    li r28, 0x1
lbl_fn_80399734_00000B58:
    lwz r0, 0x4(r16)
    ori r0, r0, 0x4
    stw r0, 0x4(r16)
    b lbl_fn_80399734_0000187C
    li r28, 0x1
    b lbl_fn_80399734_0000187C
    lwz r16, lbl_8087F430
    lfs f2, 0xc(r3)
    lwz r0, 0x868(r16)
    lfs f0, 0x14(r3)
    psq_l f1, 0x4(r3), 0, 0
    addi r3, r1, 0x170
    cmpwi r0, 0x3
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x178(r1)
    stfs f0, 0x17c(r1)
    beq lbl_fn_80399734_00000BAC
    cmpwi r0, 0x1
    beq lbl_fn_80399734_00000BAC
    cmpwi r0, 0x4
    bne lbl_fn_80399734_00000BD0
lbl_fn_80399734_00000BAC:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80399734_00000BC8
    li r4, 0xa1e
    bl fn_80370174
    cmpwi r3, 0x0
    bgt lbl_fn_80399734_00000BD0
lbl_fn_80399734_00000BC8:
    li r0, 0x1
    b lbl_fn_80399734_00000BD4
lbl_fn_80399734_00000BD0:
    li r0, 0x0
lbl_fn_80399734_00000BD4:
    cmpwi r0, 0x0
    beq lbl_fn_80399734_0000187C
    lfs f2, 0x7c(r16)
    addi r3, r1, 0x22c
    psq_l f1, 0x74(r16), 0, 0
    addi r5, r1, 0x220
    psq_st f1, 0x0(r5), 0, 0
    frsp f0, f2
    mr r5, r3
    mr r4, r3
    stfs f2, 0x228(r1)
    lfs f9, 0x220(r1)
    lfs f2, 0x88(r16)
    psq_l f1, 0x80(r16), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    fsubs f0, f2, f0
    lfs f7, 0x224(r1)
    lfs f10, 0x22c(r1)
    lfs f8, 0x230(r1)
    fsubs f9, f10, f9
    stfs f0, 0x234(r1)
    fsubs f0, f8, f7
    stfs f9, 0x22c(r1)
    stfs f0, 0x230(r1)
    bl fn_805F98D0
    lfs f8, 0x22c(r1)
    addi r5, r1, 0x170
    lfs f7, 0x230(r1)
    addi r4, r1, 0x160
    lfs f0, 0x234(r1)
    fmuls f9, f8, f24
    fmuls f11, f7, f24
    lfs f8, 0x220(r1)
    fmuls f10, f0, f24
    lfs f7, 0x224(r1)
    fadds f9, f9, f8
    fadds f8, f11, f7
    lfs f0, 0x228(r1)
    addi r3, r1, 0x220
    psq_l f1, 0x0(r5), 0, 0
    mr r5, r4
    fadds f7, f10, f0
    lfs f2, 0x178(r1)
    lfs f0, 0x17c(r1)
    stfs f9, 0x22c(r1)
    stfs f8, 0x230(r1)
    stfs f7, 0x234(r1)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x168(r1)
    stfs f0, 0x16c(r1)
    bl fn_80051B70
    cmpwi r3, 0x0
    beq lbl_fn_80399734_0000187C
    addi r3, r1, 0x220
    lfs f2, 0x228(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r4, r1, 0x1d8
    psq_st f1, 0x0(r4), 0, 0
    addi r4, r1, 0x160
    psq_l f1, 0x0(r4), 0, 0
    addi r4, r1, 0x1e4
    stfs f2, 0x1e0(r1)
    addi r3, r1, 0x60
    lfs f2, 0x168(r1)
    psq_st f1, 0x0(r4), 0, 0
    lfs f0, 0x1e0(r1)
    lfs f9, 0x1e8(r1)
    fsubs f10, f2, f0
    lfs f8, 0x1dc(r1)
    lfs f7, 0x1e4(r1)
    lfs f0, 0x1d8(r1)
    fsubs f8, f9, f8
    stfs f2, 0x1ec(r1)
    fsubs f0, f7, f0
    lfs f23, 0x16c(r1)
    stfs f8, 0x64(r1)
    stfs f0, 0x60(r1)
    stfs f10, 0x68(r1)
    bl fn_805F9940
    fabs f0, f1
    fmr f31, f1
    frsp f0, f0
    fcmpo cr0, f0, f25
    blt lbl_fn_80399734_00000DA0
    lfs f7, 0x1e4(r1)
    addi r3, r1, 0x1e4
    lfs f0, 0x1d8(r1)
    mr r4, r3
    lfs f9, 0x1e8(r1)
    fsubs f10, f7, f0
    lfs f8, 0x1dc(r1)
    lfs f7, 0x1ec(r1)
    lfs f0, 0x1e0(r1)
    fsubs f8, f9, f8
    stfs f10, 0x1e4(r1)
    fsubs f0, f7, f0
    stfs f8, 0x1e8(r1)
    stfs f0, 0x1ec(r1)
    bl fn_805F98D0
    fsubs f9, f31, f23
    lfs f8, 0x1e4(r1)
    lfs f7, 0x1e8(r1)
    lfs f0, 0x1ec(r1)
    fmuls f11, f8, f9
    lfs f8, 0x1d8(r1)
    fmuls f10, f7, f9
    lfs f7, 0x1dc(r1)
    fmuls f9, f0, f9
    lfs f0, 0x1e0(r1)
    fadds f8, f11, f8
    fadds f7, f10, f7
    fadds f0, f9, f0
    stfs f8, 0x1e4(r1)
    stfs f7, 0x1e8(r1)
    stfs f0, 0x1ec(r1)
lbl_fn_80399734_00000DA0:
    fmuls f0, f26, f23
    fcmpo cr0, f31, f0
    ble lbl_fn_80399734_00000DDC
    lwz r3, lbl_8087EE98
    addi r5, r1, 0x1d8
    addi r6, r1, 0x1e4
    addi r7, r25, 0x10
    li r4, 0x0
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ECC0
    cmpwi r3, 0x0
    bne lbl_fn_80399734_00000DDC
    li r0, 0x1
    b lbl_fn_80399734_00000DE0
lbl_fn_80399734_00000DDC:
    li r0, 0x0
lbl_fn_80399734_00000DE0:
    cmpwi r0, 0x0
    beq lbl_fn_80399734_0000187C
    lwz r3, lbl_8087F0A8
    lwz r0, 0xb0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80399734_00000E08
    addi r3, r3, 0x48c
    li r4, 0x24
    bl fn_801240B4
    b lbl_fn_80399734_00000E34
lbl_fn_80399734_00000E08:
    lwz r4, lbl_8087F430
    lwz r0, 0x86c(r4)
    lwz r3, 0x868(r4)
    cmpw r3, r0
    bne lbl_fn_80399734_00000E28
    lwz r0, 0x874(r4)
    cmpwi r0, 0xf
    bge lbl_fn_80399734_00000E30
lbl_fn_80399734_00000E28:
    li r3, 0x0
    b lbl_fn_80399734_00000E34
lbl_fn_80399734_00000E30:
    li r3, 0x1
lbl_fn_80399734_00000E34:
    cmpwi r3, 0x0
    beq lbl_fn_80399734_0000187C
    li r28, 0x1
    b lbl_fn_80399734_0000187C
    lwz r16, lbl_8087F430
    li r17, 0x0
    lfs f2, 0xc(r3)
    lwz r0, 0x868(r16)
    lfs f0, 0x14(r3)
    psq_l f1, 0x4(r3), 0, 0
    addi r3, r1, 0x150
    cmpwi r0, 0x3
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x158(r1)
    stfs f0, 0x15c(r1)
    beq lbl_fn_80399734_00000E84
    cmpwi r0, 0x1
    beq lbl_fn_80399734_00000E84
    cmpwi r0, 0x4
    bne lbl_fn_80399734_00000EA8
lbl_fn_80399734_00000E84:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80399734_00000EA0
    li r4, 0xa1e
    bl fn_80370174
    cmpwi r3, 0x0
    bgt lbl_fn_80399734_00000EA8
lbl_fn_80399734_00000EA0:
    li r0, 0x1
    b lbl_fn_80399734_00000EAC
lbl_fn_80399734_00000EA8:
    li r0, 0x0
lbl_fn_80399734_00000EAC:
    cmpwi r0, 0x0
    beq lbl_fn_80399734_00001198
    lfs f2, 0x7c(r16)
    addi r3, r1, 0x214
    psq_l f1, 0x74(r16), 0, 0
    addi r5, r1, 0x208
    psq_st f1, 0x0(r5), 0, 0
    frsp f0, f2
    mr r5, r3
    mr r4, r3
    stfs f2, 0x210(r1)
    lfs f9, 0x208(r1)
    lfs f2, 0x88(r16)
    psq_l f1, 0x80(r16), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    fsubs f0, f2, f0
    lfs f7, 0x20c(r1)
    lfs f10, 0x214(r1)
    lfs f8, 0x218(r1)
    fsubs f9, f10, f9
    stfs f0, 0x21c(r1)
    fsubs f0, f8, f7
    stfs f9, 0x214(r1)
    stfs f0, 0x218(r1)
    bl fn_805F98D0
    lfs f8, 0x214(r1)
    addi r5, r1, 0x150
    lfs f7, 0x218(r1)
    addi r4, r1, 0x140
    lfs f0, 0x21c(r1)
    fmuls f9, f8, f27
    fmuls f11, f7, f27
    lfs f8, 0x208(r1)
    fmuls f10, f0, f27
    lfs f7, 0x20c(r1)
    fadds f9, f9, f8
    fadds f8, f11, f7
    lfs f0, 0x210(r1)
    addi r3, r1, 0x208
    psq_l f1, 0x0(r5), 0, 0
    mr r5, r4
    fadds f7, f10, f0
    lfs f2, 0x158(r1)
    lfs f0, 0x15c(r1)
    stfs f9, 0x214(r1)
    stfs f8, 0x218(r1)
    stfs f7, 0x21c(r1)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x148(r1)
    stfs f0, 0x14c(r1)
    bl fn_80051B70
    cmpwi r3, 0x0
    beq lbl_fn_80399734_00001198
    addi r3, r1, 0x208
    lfs f2, 0x210(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r4, r1, 0x1c0
    psq_st f1, 0x0(r4), 0, 0
    addi r4, r1, 0x140
    psq_l f1, 0x0(r4), 0, 0
    addi r4, r1, 0x1cc
    stfs f2, 0x1c8(r1)
    addi r3, r1, 0x54
    lfs f2, 0x148(r1)
    psq_st f1, 0x0(r4), 0, 0
    lfs f0, 0x1c8(r1)
    lfs f9, 0x1d0(r1)
    fsubs f10, f2, f0
    lfs f8, 0x1c4(r1)
    lfs f7, 0x1cc(r1)
    lfs f0, 0x1c0(r1)
    fsubs f8, f9, f8
    stfs f2, 0x1d4(r1)
    fsubs f0, f7, f0
    lfs f23, 0x14c(r1)
    stfs f8, 0x58(r1)
    stfs f0, 0x54(r1)
    stfs f10, 0x5c(r1)
    bl fn_805F9940
    fabs f0, f1
    fmr f31, f1
    frsp f0, f0
    fcmpo cr0, f0, f25
    blt lbl_fn_80399734_00001078
    lfs f7, 0x1cc(r1)
    addi r3, r1, 0x1cc
    lfs f0, 0x1c0(r1)
    mr r4, r3
    lfs f9, 0x1d0(r1)
    fsubs f10, f7, f0
    lfs f8, 0x1c4(r1)
    lfs f7, 0x1d4(r1)
    lfs f0, 0x1c8(r1)
    fsubs f8, f9, f8
    stfs f10, 0x1cc(r1)
    fsubs f0, f7, f0
    stfs f8, 0x1d0(r1)
    stfs f0, 0x1d4(r1)
    bl fn_805F98D0
    fsubs f9, f31, f23
    lfs f8, 0x1cc(r1)
    lfs f7, 0x1d0(r1)
    lfs f0, 0x1d4(r1)
    fmuls f11, f8, f9
    lfs f8, 0x1c0(r1)
    fmuls f10, f7, f9
    lfs f7, 0x1c4(r1)
    fmuls f9, f0, f9
    lfs f0, 0x1c8(r1)
    fadds f8, f11, f8
    fadds f7, f10, f7
    fadds f0, f9, f0
    stfs f8, 0x1cc(r1)
    stfs f7, 0x1d0(r1)
    stfs f0, 0x1d4(r1)
lbl_fn_80399734_00001078:
    fmuls f0, f26, f23
    fcmpo cr0, f31, f0
    ble lbl_fn_80399734_000010B4
    lwz r3, lbl_8087EE98
    addi r5, r1, 0x1c0
    addi r6, r1, 0x1cc
    addi r7, r25, 0x10
    li r4, 0x0
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ECC0
    cmpwi r3, 0x0
    bne lbl_fn_80399734_000010B4
    li r0, 0x1
    b lbl_fn_80399734_000010B8
lbl_fn_80399734_000010B4:
    li r0, 0x0
lbl_fn_80399734_000010B8:
    cmpwi r0, 0x0
    beq lbl_fn_80399734_00001198
    lwz r3, lbl_8087F0A8
    lwz r0, 0xb0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80399734_000010E0
    addi r3, r3, 0x48c
    li r4, 0x24
    bl fn_801240B4
    b lbl_fn_80399734_0000110C
lbl_fn_80399734_000010E0:
    lwz r4, lbl_8087F430
    lwz r0, 0x86c(r4)
    lwz r3, 0x868(r4)
    cmpw r3, r0
    bne lbl_fn_80399734_00001100
    lwz r0, 0x874(r4)
    cmpwi r0, 0xf
    bge lbl_fn_80399734_00001108
lbl_fn_80399734_00001100:
    li r3, 0x0
    b lbl_fn_80399734_0000110C
lbl_fn_80399734_00001108:
    li r3, 0x1
lbl_fn_80399734_0000110C:
    cmpwi r3, 0x0
    beq lbl_fn_80399734_00001198
    lwz r3, 0xd4(r27)
    li r17, 0x1
    lwz r0, 0x0(r29)
    cmpw r3, r0
    beq lbl_fn_80399734_0000112C
    stw r23, 0xd8(r27)
lbl_fn_80399734_0000112C:
    lwz r0, 0xf8(r27)
    lwz r3, 0x0(r29)
    cmpwi r0, 0x0
    stw r3, 0xd4(r27)
    bne lbl_fn_80399734_00001144
    stw r3, 0xf8(r27)
lbl_fn_80399734_00001144:
    lwz r3, 0xd8(r27)
    li r4, 0x121
    addi r0, r3, 0x1
    stw r0, 0xd8(r27)
    lwz r3, lbl_8087F430
    bl fn_80370174
    slwi r0, r3, 2
    lwz r3, 0x2d8(r1)
    lwz r4, 0xd8(r27)
    lwzx r0, r3, r0
    cmpw r4, r0
    ble lbl_fn_80399734_00001198
    stw r23, 0xd8(r27)
    addi r3, r1, 0x14
    lfs f1, lbl_80885B30
    li r28, 0x1
    li r4, 0x5
    bl fn_803935FC
    addi r3, r1, 0x14
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_80399734_00001198:
    cmpwi r17, 0x0
    bne lbl_fn_80399734_0000187C
    lwz r3, 0xd4(r27)
    lwz r0, 0x0(r29)
    cmpw r3, r0
    bne lbl_fn_80399734_0000187C
    stw r23, 0xd8(r27)
    b lbl_fn_80399734_0000187C
    psq_l f1, 0x4(r3), 0, 0
    addi r4, r1, 0x130
    lfs f2, 0xc(r3)
    stfs f2, 0x138(r1)
    lwz r5, lbl_8087F430
    psq_st f1, 0x0(r4), 0, 0
    addi r16, r5, 0x6c
    lfs f0, 0x14(r3)
    stfs f0, 0x13c(r1)
    lwz r0, 0x868(r5)
    cmpwi r0, 0x3
    beq lbl_fn_80399734_000011F8
    cmpwi r0, 0x1
    beq lbl_fn_80399734_000011F8
    cmpwi r0, 0x4
    bne lbl_fn_80399734_0000121C
lbl_fn_80399734_000011F8:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80399734_00001214
    li r4, 0xa1e
    bl fn_80370174
    cmpwi r3, 0x0
    bgt lbl_fn_80399734_0000121C
lbl_fn_80399734_00001214:
    li r0, 0x1
    b lbl_fn_80399734_00001220
lbl_fn_80399734_0000121C:
    li r0, 0x0
lbl_fn_80399734_00001220:
    cmpwi r0, 0x0
    beq lbl_fn_80399734_0000187C
    lfs f2, 0x10(r16)
    mr r3, r14
    psq_l f1, 0x8(r16), 0, 0
    mr r4, r14
    psq_st f1, 0x0(r22), 0, 0
    frsp f0, f2
    stfs f2, 0x1f8(r1)
    lfs f9, 0x1f0(r1)
    lfs f2, 0x1c(r16)
    psq_l f1, 0x14(r16), 0, 0
    psq_st f1, 0x0(r14), 0, 0
    fsubs f0, f2, f0
    lfs f7, 0x1f4(r1)
    lfs f10, 0x1fc(r1)
    lfs f8, 0x200(r1)
    fsubs f9, f10, f9
    stfs f0, 0x204(r1)
    fsubs f0, f8, f7
    stfs f9, 0x1fc(r1)
    stfs f0, 0x200(r1)
    bl fn_805F98D0
    lfs f8, 0x1fc(r1)
    addi r4, r1, 0x130
    lfs f7, 0x200(r1)
    addi r3, r1, 0x48
    lfs f0, 0x204(r1)
    fmuls f9, f8, f24
    fmuls f11, f7, f24
    lfs f8, 0x1f0(r1)
    fmuls f10, f0, f24
    lfs f7, 0x1f4(r1)
    fadds f9, f9, f8
    lfs f0, 0x1f8(r1)
    fadds f7, f11, f7
    psq_l f1, 0x0(r4), 0, 0
    fadds f8, f10, f0
    lfs f2, 0x138(r1)
    lfs f0, 0x13c(r1)
    psq_st f1, 0x0(r21), 0, 0
    stfs f9, 0x1fc(r1)
    lfs f9, 0x124(r1)
    stfs f7, 0x200(r1)
    lfs f7, 0x120(r1)
    stfs f8, 0x204(r1)
    stfs f2, 0x128(r1)
    stfs f0, 0x12c(r1)
    lfs f10, 0x10(r16)
    lfs f8, 0xc(r16)
    lfs f0, 0x8(r16)
    fsubs f10, f2, f10
    fsubs f8, f9, f8
    fsubs f0, f7, f0
    stfs f10, 0x50(r1)
    stfs f0, 0x48(r1)
    stfs f8, 0x4c(r1)
    bl fn_805F9940
    lfs f0, 0x13c(r1)
    addi r4, r1, 0x114
    stfs f28, 0x11c(r1)
    fmr f22, f1
    fneg f7, f0
    mr r3, r20
    stfs f0, 0x108(r1)
    mr r5, r4
    stfs f7, 0x114(r1)
    stfs f7, 0x118(r1)
    stfs f0, 0x10c(r1)
    stfs f28, 0x110(r1)
    psq_l f1, 0xd0(r16), 0, 0
    psq_l f2, 0xd8(r16), 0, 0
    psq_l f3, 0xe0(r16), 0, 0
    psq_l f4, 0xe8(r16), 0, 0
    psq_l f5, 0xf0(r16), 0, 0
    psq_l f6, 0xf8(r16), 0, 0
    psq_st f6, 0x28(r20), 0, 0
    psq_st f2, 0x8(r20), 0, 0
    psq_st f4, 0x18(r20), 0, 0
    psq_st f1, 0x0(r20), 0, 0
    psq_st f3, 0x10(r20), 0, 0
    psq_st f5, 0x20(r20), 0, 0
    stfs f28, 0x264(r1)
    stfs f28, 0x274(r1)
    stfs f28, 0x284(r1)
    bl fn_805F93C0
    addi r4, r1, 0x108
    mr r3, r20
    mr r5, r4
    bl fn_805F93C0
    lfs f7, 0x138(r1)
    addi r3, r1, 0xd8
    lfs f0, 0x11c(r1)
    addi r5, r1, 0xfc
    lfs f9, 0x134(r1)
    fadds f10, f7, f0
    lfs f8, 0x118(r1)
    lfs f7, 0x130(r1)
    lfs f0, 0x114(r1)
    fadds f8, f9, f8
    stfs f10, 0x104(r1)
    fadds f0, f7, f0
    lwz r4, lbl_8087EFB4
    stfs f8, 0x100(r1)
    stfs f0, 0xfc(r1)
    bl fn_800BFAC8
    lfs f9, 0x138(r1)
    addi r4, r1, 0xd8
    lfs f8, 0x110(r1)
    addi r3, r1, 0xcc
    lfs f7, 0x134(r1)
    addi r5, r1, 0xf0
    fadds f8, f9, f8
    lfs f0, 0x10c(r1)
    psq_l f1, 0x0(r4), 0, 0
    addi r4, r1, 0xfc
    fadds f9, f7, f0
    lfs f2, 0xe0(r1)
    psq_st f1, 0x0(r4), 0, 0
    lfs f7, 0x130(r1)
    lfs f0, 0x108(r1)
    lwz r4, lbl_8087EFB4
    fadds f0, f7, f0
    stfs f2, 0x104(r1)
    stfs f0, 0xf0(r1)
    stfs f9, 0xf4(r1)
    stfs f8, 0xf8(r1)
    bl fn_800BFAC8
    addi r3, r1, 0xcc
    lfs f2, 0xd4(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r4, r1, 0xf0
    psq_st f1, 0x0(r4), 0, 0
    mr r3, r22
    lfs f9, 0x100(r1)
    mr r4, r21
    lfs f8, 0xf4(r1)
    li r17, 0x0
    lfs f7, 0xfc(r1)
    fsubs f10, f9, f8
    lfs f0, 0xf0(r1)
    fadds f8, f9, f8
    stfs f2, 0xf8(r1)
    fsubs f9, f7, f0
    fabs f10, f10
    fadds f0, f7, f0
    fabs f11, f9
    fmuls f7, f29, f8
    frsp f9, f10
    frsp f8, f11
    stfs f7, 0x2c(r1)
    fmuls f7, f29, f0
    fmuls f9, f29, f9
    fmuls f8, f29, f8
    stfs f7, 0x28(r1)
    fadds f0, f9, f30
    fadds f7, f8, f30
    stfs f0, 0x24(r1)
    stfs f7, 0x20(r1)
    bl fn_80051B70
    cmpwi r3, 0x0
    beq lbl_fn_80399734_000016C4
    lfs f2, 0x1f8(r1)
    addi r4, r1, 0x1a8
    stfs f2, 0x1b0(r1)
    addi r3, r1, 0x3c
    psq_l f1, 0x0(r22), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x0(r21), 0, 0
    psq_st f1, 0x0(r19), 0, 0
    lfs f2, 0x128(r1)
    lfs f0, 0x1b0(r1)
    lfs f9, 0x1b8(r1)
    fsubs f10, f2, f0
    lfs f8, 0x1ac(r1)
    lfs f7, 0x1b4(r1)
    lfs f0, 0x1a8(r1)
    fsubs f8, f9, f8
    stfs f2, 0x1bc(r1)
    fsubs f0, f7, f0
    lfs f23, 0x12c(r1)
    stfs f8, 0x40(r1)
    stfs f0, 0x3c(r1)
    stfs f10, 0x44(r1)
    bl fn_805F9940
    fabs f0, f1
    fmr f31, f1
    frsp f0, f0
    fcmpo cr0, f0, f25
    blt lbl_fn_80399734_00001594
    lfs f7, 0x1b4(r1)
    mr r3, r19
    lfs f0, 0x1a8(r1)
    mr r4, r19
    lfs f9, 0x1b8(r1)
    fsubs f10, f7, f0
    lfs f8, 0x1ac(r1)
    lfs f7, 0x1bc(r1)
    lfs f0, 0x1b0(r1)
    fsubs f8, f9, f8
    stfs f10, 0x1b4(r1)
    fsubs f0, f7, f0
    stfs f8, 0x1b8(r1)
    stfs f0, 0x1bc(r1)
    bl fn_805F98D0
    fsubs f9, f31, f23
    lfs f8, 0x1b4(r1)
    lfs f7, 0x1b8(r1)
    lfs f0, 0x1bc(r1)
    fmuls f11, f8, f9
    lfs f8, 0x1a8(r1)
    fmuls f10, f7, f9
    lfs f7, 0x1ac(r1)
    fmuls f9, f0, f9
    lfs f0, 0x1b0(r1)
    fadds f8, f11, f8
    fadds f7, f10, f7
    fadds f0, f9, f0
    stfs f8, 0x1b4(r1)
    stfs f7, 0x1b8(r1)
    stfs f0, 0x1bc(r1)
lbl_fn_80399734_00001594:
    fmuls f0, f26, f23
    fcmpo cr0, f31, f0
    ble lbl_fn_80399734_000015D0
    lwz r3, lbl_8087EE98
    addi r5, r1, 0x1a8
    addi r6, r1, 0x1b4
    addi r7, r25, 0x10
    li r4, 0x0
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ECC0
    cmpwi r3, 0x0
    bne lbl_fn_80399734_000015D0
    li r0, 0x1
    b lbl_fn_80399734_000015D4
lbl_fn_80399734_000015D0:
    li r0, 0x0
lbl_fn_80399734_000015D4:
    cmpwi r0, 0x0
    beq lbl_fn_80399734_000016C4
    lwz r3, lbl_8087F0A8
    lwz r0, 0xb0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80399734_000015FC
    addi r3, r3, 0x48c
    li r4, 0x24
    bl fn_801240B4
    b lbl_fn_80399734_00001628
lbl_fn_80399734_000015FC:
    lwz r4, lbl_8087F430
    lwz r0, 0x86c(r4)
    lwz r3, 0x868(r4)
    cmpw r3, r0
    bne lbl_fn_80399734_0000161C
    lwz r0, 0x874(r4)
    cmpwi r0, 0xf
    bge lbl_fn_80399734_00001624
lbl_fn_80399734_0000161C:
    li r3, 0x0
    b lbl_fn_80399734_00001628
lbl_fn_80399734_00001624:
    li r3, 0x1
lbl_fn_80399734_00001628:
    cmpwi r3, 0x0
    beq lbl_fn_80399734_000016C4
    lfs f9, 0x138(r1)
    addi r4, r1, 0xc0
    lfs f7, 0x110(r1)
    addi r5, r1, 0xb4
    lfs f0, 0x11c(r1)
    li r17, 0x1
    fadds f11, f9, f7
    lfs f8, 0x134(r1)
    fadds f9, f9, f0
    lfs f7, 0x10c(r1)
    lfs f0, 0x118(r1)
    fadds f12, f8, f7
    fadds f10, f8, f0
    lfs f8, 0x130(r1)
    lfs f7, 0x108(r1)
    lfs f0, 0x114(r1)
    fadds f7, f8, f7
    stfs f12, 0xb8(r1)
    fadds f0, f8, f0
    lwz r3, lbl_8087F490
    stfs f7, 0xb4(r1)
    stfs f11, 0xbc(r1)
    stfs f0, 0xc0(r1)
    stfs f10, 0xc4(r1)
    stfs f9, 0xc8(r1)
    bl fn_803E6ADC
    mr r3, r16
    addi r4, r1, 0x130
    li r28, 0x1
    bl fn_8037F690
    lfs f1, lbl_80885B30
    addi r3, r1, 0x10
    li r4, 0x5
    bl fn_803935FC
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_80399734_000016C4:
    cmpwi r17, 0x0
    bne lbl_fn_80399734_0000187C
    fcmpo cr0, f22, f24
    bge lbl_fn_80399734_0000187C
    lfs f2, 0x1f8(r1)
    addi r4, r1, 0x190
    stfs f2, 0x198(r1)
    addi r3, r1, 0x30
    psq_l f1, 0x0(r22), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x0(r21), 0, 0
    psq_st f1, 0x0(r18), 0, 0
    lfs f2, 0x128(r1)
    lfs f0, 0x198(r1)
    lfs f9, 0x1a0(r1)
    fsubs f10, f2, f0
    lfs f8, 0x194(r1)
    lfs f7, 0x19c(r1)
    lfs f0, 0x190(r1)
    fsubs f8, f9, f8
    stfs f2, 0x1a4(r1)
    fsubs f0, f7, f0
    lfs f23, 0x12c(r1)
    stfs f8, 0x34(r1)
    stfs f0, 0x30(r1)
    stfs f10, 0x38(r1)
    bl fn_805F9940
    fabs f0, f1
    fmr f31, f1
    frsp f0, f0
    fcmpo cr0, f0, f25
    blt lbl_fn_80399734_000017C0
    lfs f7, 0x19c(r1)
    mr r3, r18
    lfs f0, 0x190(r1)
    mr r4, r18
    lfs f9, 0x1a0(r1)
    fsubs f10, f7, f0
    lfs f8, 0x194(r1)
    lfs f7, 0x1a4(r1)
    lfs f0, 0x198(r1)
    fsubs f8, f9, f8
    stfs f10, 0x19c(r1)
    fsubs f0, f7, f0
    stfs f8, 0x1a0(r1)
    stfs f0, 0x1a4(r1)
    bl fn_805F98D0
    fsubs f9, f31, f23
    lfs f8, 0x19c(r1)
    lfs f7, 0x1a0(r1)
    lfs f0, 0x1a4(r1)
    fmuls f11, f8, f9
    lfs f8, 0x190(r1)
    fmuls f10, f7, f9
    lfs f7, 0x194(r1)
    fmuls f9, f0, f9
    lfs f0, 0x198(r1)
    fadds f8, f11, f8
    fadds f7, f10, f7
    fadds f0, f9, f0
    stfs f8, 0x19c(r1)
    stfs f7, 0x1a0(r1)
    stfs f0, 0x1a4(r1)
lbl_fn_80399734_000017C0:
    fmuls f0, f26, f23
    fcmpo cr0, f31, f0
    ble lbl_fn_80399734_000017FC
    lwz r3, lbl_8087EE98
    addi r5, r1, 0x190
    addi r6, r1, 0x19c
    addi r7, r25, 0x10
    li r4, 0x0
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ECC0
    cmpwi r3, 0x0
    bne lbl_fn_80399734_000017FC
    li r0, 0x1
    b lbl_fn_80399734_00001800
lbl_fn_80399734_000017FC:
    li r0, 0x0
lbl_fn_80399734_00001800:
    cmpwi r0, 0x0
    bne lbl_fn_80399734_00001824
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80399734_0000187C
    li r4, 0xce
    bl fn_80370174
    cmpwi r3, 0x0
    beq lbl_fn_80399734_0000187C
lbl_fn_80399734_00001824:
    lfs f7, 0x2c(r1)
    addi r3, r1, 0x130
    lfs f0, 0x28(r1)
    addi r4, r1, 0xa8
    psq_l f1, 0x0(r3), 0, 0
    addi r7, r1, 0xe4
    lfs f8, 0x104(r1)
    addi r5, r1, 0x9c
    lfs f2, 0x138(r1)
    addi r6, r1, 0x20
    stfs f2, 0xb0(r1)
    fmr f2, f8
    lwz r3, lbl_8087F490
    stfs f0, 0xe4(r1)
    stfs f7, 0xe8(r1)
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    fmr f1, f22
    stfs f8, 0xec(r1)
    stfs f2, 0xa4(r1)
    bl fn_803E3050
lbl_fn_80399734_0000187C:
    cmpwi r28, 0x0
    beq lbl_fn_80399734_00001934
    lwz r0, 0xb0(r29)
    mr r3, r29
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80399734_00001914
lbl_fn_80399734_00001898:
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    bge lbl_fn_80399734_0000190C
    mr r4, r29
    addi r3, r27, 0x138
    addi r5, r1, 0xc
    addi r6, r1, 0x9
    addi r7, r1, 0x8
    bl fn_8039BC0C
    lwz r4, 0xc(r1)
    cmpwi r4, 0x0
    beq lbl_fn_80399734_000018D8
    lwz r0, 0x0(r29)
    lwzu r5, 0xc(r4)
    cmpw r5, r0
    bge lbl_fn_80399734_00001904
lbl_fn_80399734_000018D8:
    lwz r5, 0x0(r29)
    mr r4, r3
    lbz r0, lbl_8087DD38
    addi r3, r27, 0x138
    stw r5, 0x18(r1)
    addi r7, r1, 0x18
    lbz r5, 0x9(r1)
    stb r0, 0x1c(r1)
    lbz r6, 0x8(r1)
    bl fn_803AD148
    addi r4, r3, 0xc
lbl_fn_80399734_00001904:
    stb r24, 0x4(r4)
    b lbl_fn_80399734_00001914
lbl_fn_80399734_0000190C:
    addi r3, r3, 0x14
    bdnz lbl_fn_80399734_00001898
lbl_fn_80399734_00001914:
    mr r3, r27
    mr r4, r29
    addi r5, r29, 0xd0
    bl fn_8039CF8C
    cmpwi r3, 0x0
    bne lbl_fn_80399734_00001934
    stw r24, 0x8c(r27)
    li r30, 0x1
lbl_fn_80399734_00001934:
    lwz r0, 0x8c(r27)
    cmpwi r0, 0x0
    beq lbl_fn_80399734_00001944
    li r30, 0x1
lbl_fn_80399734_00001944:
    cmpwi r30, 0x0
    bne lbl_fn_80399734_00001960
    addi r31, r31, 0x1
    addi r26, r26, 0x28
lbl_fn_80399734_00001954:
    lwz r0, 0xec(r15)
    cmplw r31, r0
    blt lbl_fn_80399734_000007D8
lbl_fn_80399734_00001960:
    addi r11, r1, 0x330
    psq_l f31, 0x3c8(r1), 0, 0
    lfd f31, 0x3c0(r1)
    psq_l f30, 0x3b8(r1), 0, 0
    lfd f30, 0x3b0(r1)
    psq_l f29, 0x3a8(r1), 0, 0
    lfd f29, 0x3a0(r1)
    psq_l f28, 0x398(r1), 0, 0
    lfd f28, 0x390(r1)
    psq_l f27, 0x388(r1), 0, 0
    lfd f27, 0x380(r1)
    psq_l f26, 0x378(r1), 0, 0
    lfd f26, 0x370(r1)
    psq_l f25, 0x368(r1), 0, 0
    lfd f25, 0x360(r1)
    psq_l f24, 0x358(r1), 0, 0
    lfd f24, 0x350(r1)
    psq_l f23, 0x348(r1), 0, 0
    lfd f23, 0x340(r1)
    psq_l f22, 0x338(r1), 0, 0
    lfd f22, 0x330(r1)
    bl _restgpr_14
    lwz r0, 0x3d4(r1)
    mtlr r0
    addi r1, r1, 0x3d0
    blr
}
