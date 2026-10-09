#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_17(void);
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _savegpr_17(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void dtor_80084684(void);
extern void fn_80017064(void);
extern void fn_80044E0C(void);
extern void fn_8004ED34(void);
extern void fn_80050A1C(void);
extern void fn_8005B3CC(void);
extern void fn_8005B6E8(void);
extern void fn_800697D8(void);
extern void fn_800844D8(void);
extern void fn_80094BD8(void);
extern void fn_800DC12C(void);
extern void fn_801059F8(void);
extern void fn_80105B3C(void);
extern void fn_8011BEB8(void);
extern void fn_8011C044(void);
extern void fn_8011D1FC(void);
extern void fn_8011D21C(void);
extern void fn_801255C8(void);
extern void fn_80128818(void);
extern void fn_8013655C(void);
extern void fn_8014C228(void);
extern void fn_8014DEE4(void);
extern void fn_8016E970(void);
extern void fn_8017039C(void);
extern void fn_801718F8(void);
extern void fn_8035B694(void);
extern void fn_80370174(void);
extern void fn_803C17FC(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_80680770(void);
extern void fn_80680CF8(void);
extern void fn_80682428(void);
extern void fn_80686EA4(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);
extern void fn_80695AD0(void);
extern int sprintf(char* str, const char* format, ...);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80737808[];
extern u8 lbl_80737810[];
extern u8 lbl_80737840[];
extern u8 lbl_80737A9C[];
extern u8 lbl_807380F8[];
extern u8 lbl_80766768[];
extern u8 lbl_80775A88[];
extern u8 lbl_807772B0[];
extern u8 lbl_807772D0[];
extern u8 lbl_8077C43C[];
extern u8 lbl_8077C448[];
extern u8 lbl_8077C968[];
extern u8 lbl_807C7B28[];

/* Small data declarations */
extern u32 lbl_8087D708;
extern u32 lbl_8087EE68;
extern u32 lbl_8087EE98;
extern u32 lbl_8087EEB8;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F430;
extern u32 lbl_80881964;
extern u32 lbl_8088196C;
extern u32 lbl_80881974;
extern u32 lbl_80881988;
extern u32 lbl_80881998;
extern u32 lbl_8088199C;
extern u32 lbl_808819A4;
extern u32 lbl_808819C4;
extern u32 lbl_808819C8;
extern u32 lbl_808819CC;
extern u32 lbl_808819D4;
extern u32 lbl_808819DC;
extern u32 lbl_808819F8;
extern u32 lbl_80881A0C;
extern u32 lbl_80881A10;
extern u32 lbl_80881A14;
extern u32 lbl_80881A1C;
extern u32 lbl_80881A4C;
extern u32 lbl_80881B3C;
extern u32 lbl_80881B60;
extern u32 lbl_80881B64;
extern u32 lbl_80881B68;
extern u32 lbl_80881B6C;
extern u32 lbl_80881B70;
extern u32 lbl_80881B78;
extern u32 lbl_80881B7C;

/* Function declarations */
void fn_8017B3C0(void);
void fn_8017B434(void);
void fn_8017BC4C(void);
void fn_8017BC58(void);
void fn_8017BDDC(void);
void fn_8017C4C4(void);
void fn_8017C52C(void);
void fn_8017C7F8(void);
void fn_8017C904(void);
void fn_8017C974(void);
void fn_8017C9A0(void);
void fn_8017C9AC(void);
void fn_8017CB2C(void);
void fn_8017CB6C(void);
void fn_8017CB74(void);
void fn_8017CB9C(void);

asm void fn_8017B3C0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0xd18(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8017B3C0_00000048
    addi r3, r3, 0xd74
    bl fn_8011D1FC
    cmpwi r3, 0x0
    beq lbl_fn_8017B3C0_00000058
    addi r3, r30, 0xd74
    bl fn_8011D21C
    cmpwi r3, 0x0
    bne lbl_fn_8017B3C0_00000058
lbl_fn_8017B3C0_00000048:
    lwz r0, 0x12a8(r30)
    extrwi. r0, r0, 1, 17
    beq lbl_fn_8017B3C0_00000058
    li r31, 0x1
lbl_fn_8017B3C0_00000058:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8017B434(void)
{
    nofralloc
    stwu r1, -0x2a0(r1)
    mflr r0
    stw r0, 0x2a4(r1)
    addi r11, r1, 0x290
    stfd f31, 0x290(r1)
    psq_st f31, 0x298(r1), 0, 0
    bl _savegpr_26
    lwz r0, 0x1400(r3)
    mr r29, r3
    cmplwi r0, 0x2
    blt lbl_fn_8017B434_0000086C
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_8017B434_000000B4
    lwz r31, 0x10d8(r3)
    b lbl_fn_8017B434_000000B8
lbl_fn_8017B434_000000B4:
    li r31, 0x0
lbl_fn_8017B434_000000B8:
    cmpwi r31, 0x0
    beq lbl_fn_8017B434_0000086C
    lfs f31, lbl_80881B3C
    li r27, 0x0
    li r26, 0x0
    li r30, 0x0
    b lbl_fn_8017B434_0000017C
lbl_fn_8017B434_000000D4:
    lwz r3, 0x1408(r29)
    li r4, 0x0
    lwz r0, 0x78(r31)
    li r5, 0x0
    lwzx r3, r3, r30
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8017B434_0000011C
lbl_fn_8017B434_000000F4:
    lwz r6, 0x7c(r31)
    lwzx r0, r6, r5
    cmpw r3, r0
    bne lbl_fn_8017B434_00000110
    mulli r0, r4, 0x28
    add r28, r6, r0
    b lbl_fn_8017B434_00000120
lbl_fn_8017B434_00000110:
    addi r5, r5, 0x28
    addi r4, r4, 0x1
    bdnz lbl_fn_8017B434_000000F4
lbl_fn_8017B434_0000011C:
    li r28, 0x0
lbl_fn_8017B434_00000120:
    cmpwi r28, 0x0
    beq lbl_fn_8017B434_00000174
    lfs f1, 0xc(r28)
    addi r3, r1, 0x2c
    lfs f0, 0x530(r29)
    lfs f3, 0x8(r28)
    fsubs f4, f1, f0
    lfs f2, 0x52c(r29)
    lfs f1, 0x4(r28)
    lfs f0, 0x528(r29)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0x30(r1)
    stfs f0, 0x2c(r1)
    stfs f4, 0x34(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f31
    bge lbl_fn_8017B434_00000174
    fmr f31, f1
    stw r26, 0x140c(r29)
    mr r27, r28
lbl_fn_8017B434_00000174:
    addi r26, r26, 0x1
    addi r30, r30, 0x4
lbl_fn_8017B434_0000017C:
    lwz r0, 0x1400(r29)
    cmplw r26, r0
    blt lbl_fn_8017B434_000000D4
    lwz r0, 0x140c(r29)
    cmpwi r0, 0x0
    blt lbl_fn_8017B434_0000086C
    lfs f1, 0xc(r27)
    addi r3, r1, 0x20
    lfs f0, 0x530(r29)
    lfs f3, 0x8(r27)
    fsubs f4, f1, f0
    lfs f2, 0x52c(r29)
    lfs f1, 0x4(r27)
    lfs f0, 0x528(r29)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0x24(r1)
    stfs f0, 0x20(r1)
    stfs f4, 0x28(r1)
    bl fn_805F9920
    lfs f2, 0x5b0(r29)
    lfs f0, lbl_8088199C
    fmuls f0, f0, f2
    fmuls f0, f0, f0
    fcmpo cr0, f1, f0
    bge lbl_fn_8017B434_00000200
    lwz r4, 0x140c(r29)
    lwz r3, 0x1400(r29)
    addi r4, r4, 0x1
    divwu r0, r4, r3
    mullw r0, r0, r3
    subf r0, r0, r4
    stw r0, 0x140c(r29)
lbl_fn_8017B434_00000200:
    lwz r0, 0x140c(r29)
    lwz r30, 0x13fc(r29)
    lwz r3, 0x1408(r29)
    slwi r0, r0, 2
    cmpwi r30, 0x0
    lwzx r31, r3, r0
    beq lbl_fn_8017B434_00000314
    lwz r3, 0x13fc(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8017B434_00000238
    mr r4, r31
    li r5, 0x8
    bl fn_8017039C
    b lbl_fn_8017B434_0000086C
lbl_fn_8017B434_00000238:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_8017B434_0000024C
    lwz r0, 0x10d8(r3)
    b lbl_fn_8017B434_00000250
lbl_fn_8017B434_0000024C:
    li r0, 0x0
lbl_fn_8017B434_00000250:
    cmpwi r0, 0x0
    beq lbl_fn_8017B434_0000086C
    cmpwi r31, 0x0
    ble lbl_fn_8017B434_00000290
    mr r4, r31
    addi r3, r30, 0x1030
    addi r5, r30, 0x528
    li r6, 0x8
    bl fn_80128818
    addi r3, r30, 0x1030
    bl fn_801255C8
    cmpwi r3, 0x0
    beq lbl_fn_8017B434_00000290
    mr r3, r30
    bl fn_801718F8
    b lbl_fn_8017B434_0000086C
lbl_fn_8017B434_00000290:
    lwz r0, lbl_8087EEB8
    cmpwi r0, 0x0
    beq lbl_fn_8017B434_0000086C
    lis r3, 0x51ec
    lwz r8, 0x50(r30)
    subi r0, r3, 0x7ae1
    lis r29, lbl_807C7B28@ha
    mulhw r0, r0, r8
    lis r28, lbl_80737A9C@ha
    addi r3, r29, lbl_807C7B28@l
    addi r4, r28, lbl_80737A9C@l
    srawi r6, r0, 5
    srawi r0, r0, 5
    srwi r5, r0, 31
    srwi r7, r6, 31
    add r0, r0, r5
    mulli r0, r0, 0x64
    add r5, r6, r7
    subf r6, r0, r8
    crclr 6
    bl sprintf
    addi r4, r28, lbl_80737A9C@l
    lwz r5, 0x58(r30)
    mr r7, r31
    addi r3, r1, 0x158
    addi r4, r4, 0x571
    addi r6, r29, lbl_807C7B28@l
    crclr 6
    bl sprintf
    lwz r3, lbl_8087EEB8
    addi r4, r1, 0x158
    bl fn_800697D8
    b lbl_fn_8017B434_0000086C
lbl_fn_8017B434_00000314:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_8017B434_00000328
    lwz r0, 0x10d8(r3)
    b lbl_fn_8017B434_0000032C
lbl_fn_8017B434_00000328:
    li r0, 0x0
lbl_fn_8017B434_0000032C:
    cmpwi r0, 0x0
    beq lbl_fn_8017B434_0000086C
    cmpwi r31, 0x0
    ble lbl_fn_8017B434_000007EC
    mr r4, r31
    addi r3, r29, 0x1030
    addi r5, r29, 0x528
    li r6, 0x8
    bl fn_80128818
    addi r3, r29, 0x1030
    bl fn_801255C8
    cmpwi r3, 0x0
    beq lbl_fn_8017B434_000007EC
    addi r3, r29, 0xc58
    li r4, 0x0
    bl fn_8011BEB8
    lwz r0, 0x12a4(r29)
    srwi. r0, r0, 31
    beq lbl_fn_8017B434_000004B4
    lwz r0, 0x12a4(r29)
    clrlwi r0, r0, 2
    stw r0, 0x12a4(r29)
    lwz r3, lbl_8087F430
    lwz r4, 0x10d8(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8017B434_000003DC
    lwz r3, 0xc38(r29)
    cmpwi r3, 0x0
    ble lbl_fn_8017B434_000003DC
    lwz r0, 0xc3c(r29)
    cmpwi r0, 0x0
    ble lbl_fn_8017B434_000003DC
    subi r0, r3, 0x1
    lwz r3, 0xb0(r4)
    slwi r0, r0, 6
    li r5, 0x0
    add r3, r3, r0
    stw r5, 0x3c(r3)
    lwz r3, 0xc3c(r29)
    lwz r4, 0xb0(r4)
    subi r0, r3, 0x1
    slwi r0, r0, 6
    add r3, r4, r0
    stw r5, 0x3c(r3)
lbl_fn_8017B434_000003DC:
    lwz r4, 0x48(r29)
    cmpwi r4, 0x0
    bne lbl_fn_8017B434_00000410
    lwz r3, lbl_8087F0A8
    lwz r0, 0x278(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8017B434_00000410
    lwz r3, 0x5c(r29)
    lwz r0, 0x11c(r3)
    cmpwi r0, 0x1
    bne lbl_fn_8017B434_00000410
    li r0, 0x1
    b lbl_fn_8017B434_00000430
lbl_fn_8017B434_00000410:
    cmpwi r4, 0x0
    bne lbl_fn_8017B434_0000042C
    lwz r0, 0x12a8(r29)
    extrwi. r0, r0, 1, 14
    beq lbl_fn_8017B434_0000042C
    li r0, 0x1
    b lbl_fn_8017B434_00000430
lbl_fn_8017B434_0000042C:
    li r0, 0x0
lbl_fn_8017B434_00000430:
    cmpwi r0, 0x0
    beq lbl_fn_8017B434_000004B4
    lwz r3, lbl_8087F430
    li r4, 0x25
    bl fn_80370174
    cmpwi r3, 0x1
    blt lbl_fn_8017B434_00000494
    lwz r3, 0x648(r29)
    cmpwi r3, 0x0
    beq lbl_fn_8017B434_00000460
    li r4, 0x1
    bl fn_80044E0C
lbl_fn_8017B434_00000460:
    lwz r3, 0x64c(r29)
    cmpwi r3, 0x0
    beq lbl_fn_8017B434_00000474
    li r4, 0x1
    bl fn_80044E0C
lbl_fn_8017B434_00000474:
    li r0, 0x0
    li r3, -0x1
    stw r3, 0x674(r29)
    mr r3, r29
    stw r0, 0x648(r29)
    stw r0, 0x64c(r29)
    bl fn_8014C228
    b lbl_fn_8017B434_000004B4
lbl_fn_8017B434_00000494:
    lwz r0, 0x674(r29)
    cmpwi r0, 0x0
    blt lbl_fn_8017B434_000004B4
    mr r3, r29
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8014DEE4
lbl_fn_8017B434_000004B4:
    lwz r0, 0x12a4(r29)
    extrwi. r0, r0, 1, 26
    beq lbl_fn_8017B434_000004CC
    lwz r0, 0x12a4(r29)
    rlwinm r0, r0, 0, 27, 25
    stw r0, 0x12a4(r29)
lbl_fn_8017B434_000004CC:
    lwz r7, 0xd1c(r29)
    cmpwi r7, 0x0
    beq lbl_fn_8017B434_00000574
    lwz r0, 0x12a8(r7)
    mr r5, r7
    lwz r6, 0x1028(r7)
    li r4, 0x0
    extrwi r0, r0, 1, 15
    cntlzw r0, r0
    srwi r3, r0, 5
    b lbl_fn_8017B434_00000514
lbl_fn_8017B434_000004F8:
    lwz r0, 0xfe8(r5)
    cmplw r0, r29
    bne lbl_fn_8017B434_0000050C
    li r0, 0x1
    b lbl_fn_8017B434_00000530
lbl_fn_8017B434_0000050C:
    addi r5, r5, 0x4
    addi r4, r4, 0x1
lbl_fn_8017B434_00000514:
    cmpwi r3, 0x0
    mr r0, r6
    bne lbl_fn_8017B434_00000524
    slwi r0, r6, 1
lbl_fn_8017B434_00000524:
    cmpw r4, r0
    blt lbl_fn_8017B434_000004F8
    li r0, 0x0
lbl_fn_8017B434_00000530:
    cmpwi r0, 0x0
    beq lbl_fn_8017B434_00000574
    li r0, 0x10
    mr r4, r7
    li r3, 0x0
    mtctr r0
lbl_fn_8017B434_00000548:
    lwz r0, 0xfe8(r4)
    cmplw r0, r29
    bne lbl_fn_8017B434_00000568
    slwi r0, r3, 2
    li r4, 0x0
    add r3, r7, r0
    stw r4, 0xfe8(r3)
    b lbl_fn_8017B434_00000574
lbl_fn_8017B434_00000568:
    addi r4, r4, 0x4
    addi r3, r3, 0x1
    bdnz lbl_fn_8017B434_00000548
lbl_fn_8017B434_00000574:
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_8017B434_00000594
    mr r4, r29
    bl fn_801059F8
    lwz r3, lbl_8087F048
    mr r4, r29
    bl fn_80105B3C
lbl_fn_8017B434_00000594:
    lwz r0, 0x12a8(r29)
    addi r3, r29, 0xc58
    lfs f0, lbl_8088196C
    li r4, 0x0
    rlwinm r0, r0, 0, 24, 22
    stw r0, 0x12a8(r29)
    stfs f0, 0xfb8(r29)
    stfs f0, 0xfbc(r29)
    bl fn_8011C044
    lwz r3, lbl_8087EE68
    mr r4, r29
    bl fn_80017064
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x7
    beq lbl_fn_8017B434_00000780
    cmpwi r0, 0x6
    beq lbl_fn_8017B434_000005E4
    cmpwi r0, 0x8
    beq lbl_fn_8017B434_000005E4
    stw r0, 0x564(r29)
lbl_fn_8017B434_000005E4:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8017B434_00000780
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8017B434_0000061C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x258(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x25c(r1)
    stw r0, 0x260(r1)
    b lbl_fn_8017B434_00000638
lbl_fn_8017B434_0000061C:
    lis r5, lbl_8077C43C@ha
    lwzu r4, lbl_8077C43C@l(r5)
    stw r4, 0x258(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x25c(r1)
    stw r0, 0x260(r1)
lbl_fn_8017B434_00000638:
    lwz r5, 0x258(r1)
    addi r3, r1, 0x8
    lwz r4, 0x25c(r1)
    lwz r0, 0x260(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8017B434_00000674
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8017B434_00000674:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8017B434_00000750
    cmpwi r0, 0x8
    beq lbl_fn_8017B434_0000068C
    stw r0, 0x564(r29)
lbl_fn_8017B434_0000068C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8017B434_00000750
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8017B434_000006C4
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x264(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x268(r1)
    stw r0, 0x26c(r1)
    b lbl_fn_8017B434_000006E0
lbl_fn_8017B434_000006C4:
    lis r5, lbl_8077C448@ha
    lwzu r4, lbl_8077C448@l(r5)
    stw r4, 0x264(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x268(r1)
    stw r0, 0x26c(r1)
lbl_fn_8017B434_000006E0:
    lwz r5, 0x264(r1)
    addi r3, r1, 0x14
    lwz r4, 0x268(r1)
    lwz r0, 0x26c(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8017B434_0000071C
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8017B434_0000071C:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8017B434_00000750
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8017B434_00000750:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8017B434_00000780
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8017B434_00000780:
    lwz r3, 0x1208(r29)
    li r0, 0x7
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    beq lbl_fn_8017B434_0000086C
    beq lbl_fn_8017B434_0000086C
    lfs f0, lbl_8088196C
    li r28, 0x0
    li r0, 0x3
    stw r28, 0x3c(r1)
    addi r4, r1, 0x38
    stw r28, 0x40(r1)
    stw r28, 0x44(r1)
    stfs f0, 0x4c(r1)
    stfs f0, 0x50(r1)
    stfs f0, 0x54(r1)
    stw r0, 0x38(r1)
    stw r29, 0x48(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r3, 0x1208(r29)
    li r0, 0xff
    stb r0, 0x520(r3)
    stw r28, 0x1208(r29)
    b lbl_fn_8017B434_0000086C
lbl_fn_8017B434_000007EC:
    lwz r0, lbl_8087EEB8
    cmpwi r0, 0x0
    beq lbl_fn_8017B434_0000086C
    lis r3, 0x51ec
    lwz r8, 0x50(r29)
    subi r0, r3, 0x7ae1
    lis r28, lbl_807C7B28@ha
    mulhw r0, r0, r8
    lis r30, lbl_80737A9C@ha
    addi r3, r28, lbl_807C7B28@l
    addi r4, r30, lbl_80737A9C@l
    srawi r6, r0, 5
    srawi r0, r0, 5
    srwi r5, r0, 31
    srwi r7, r6, 31
    add r0, r0, r5
    mulli r0, r0, 0x64
    add r5, r6, r7
    subf r6, r0, r8
    crclr 6
    bl sprintf
    addi r4, r30, lbl_80737A9C@l
    lwz r5, 0x58(r29)
    mr r7, r31
    addi r3, r1, 0x58
    addi r4, r4, 0x571
    addi r6, r28, lbl_807C7B28@l
    crclr 6
    bl sprintf
    lwz r3, lbl_8087EEB8
    addi r4, r1, 0x58
    bl fn_800697D8
lbl_fn_8017B434_0000086C:
    addi r11, r1, 0x290
    psq_l f31, 0x298(r1), 0, 0
    lfd f31, 0x290(r1)
    bl _restgpr_26
    lwz r0, 0x2a4(r1)
    mtlr r0
    addi r1, r1, 0x2a0
    blr
}

asm void fn_8017BC4C(void)
{
    nofralloc
    li r0, -0x1
    stw r0, 0x140c(r3)
    blr
}

asm void fn_8017BC58(void)
{
    nofralloc
    lwz r7, 0x38(r3)
    li r5, 0x0
    li r4, 0x0
    li r6, 0x0
    rlwinm r0, r7, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_8017BC58_000008C4
    clrlwi r0, r7, 31
    cmplwi r0, 0x1
    beq lbl_fn_8017BC58_000008C4
    li r6, 0x1
lbl_fn_8017BC58_000008C4:
    cmpwi r6, 0x0
    beq lbl_fn_8017BC58_000008E0
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_8017BC58_000008E0
    li r4, 0x1
lbl_fn_8017BC58_000008E0:
    cmpwi r4, 0x0
    beq lbl_fn_8017BC58_00000914
    lwz r0, 0x55c(r3)
    li r4, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_8017BC58_00000908
    lwz r0, 0x560(r3)
    cmpwi r0, 0x1c
    bne lbl_fn_8017BC58_00000908
    li r4, 0x1
lbl_fn_8017BC58_00000908:
    cmpwi r4, 0x0
    bne lbl_fn_8017BC58_00000914
    li r5, 0x1
lbl_fn_8017BC58_00000914:
    cmpwi r5, 0x0
    bne lbl_fn_8017BC58_00000924
    li r3, 0x0
    blr
lbl_fn_8017BC58_00000924:
    lwz r0, 0x958(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_8017BC58_0000093C
    li r3, 0x0
    blr
lbl_fn_8017BC58_0000093C:
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_8017BC58_00000A14
    lwz r0, 0x560(r3)
    cmpwi r0, 0x3b
    beq lbl_fn_8017BC58_00000A0C
    bge lbl_fn_8017BC58_000009BC
    cmpwi r0, 0x23
    bge lbl_fn_8017BC58_0000098C
    cmpwi r0, 0x1d
    bge lbl_fn_8017BC58_00000980
    cmpwi r0, 0x17
    beq lbl_fn_8017BC58_00000A0C
    blt lbl_fn_8017BC58_00000A14
    cmpwi r0, 0x1b
    bge lbl_fn_8017BC58_00000A0C
    b lbl_fn_8017BC58_00000A14
lbl_fn_8017BC58_00000980:
    cmpwi r0, 0x1f
    beq lbl_fn_8017BC58_00000A0C
    b lbl_fn_8017BC58_00000A14
lbl_fn_8017BC58_0000098C:
    cmpwi r0, 0x34
    bge lbl_fn_8017BC58_000009A8
    cmpwi r0, 0x30
    bge lbl_fn_8017BC58_00000A0C
    cmpwi r0, 0x25
    bge lbl_fn_8017BC58_00000A14
    b lbl_fn_8017BC58_00000A0C
lbl_fn_8017BC58_000009A8:
    cmpwi r0, 0x38
    bge lbl_fn_8017BC58_00000A14
    cmpwi r0, 0x36
    bge lbl_fn_8017BC58_00000A0C
    b lbl_fn_8017BC58_00000A14
lbl_fn_8017BC58_000009BC:
    cmpwi r0, 0x71
    beq lbl_fn_8017BC58_00000A0C
    bge lbl_fn_8017BC58_000009EC
    cmpwi r0, 0x5a
    beq lbl_fn_8017BC58_00000A0C
    bge lbl_fn_8017BC58_000009E0
    cmpwi r0, 0x3f
    beq lbl_fn_8017BC58_00000A0C
    b lbl_fn_8017BC58_00000A14
lbl_fn_8017BC58_000009E0:
    cmpwi r0, 0x6a
    beq lbl_fn_8017BC58_00000A0C
    b lbl_fn_8017BC58_00000A14
lbl_fn_8017BC58_000009EC:
    cmpwi r0, 0x8e
    beq lbl_fn_8017BC58_00000A0C
    bge lbl_fn_8017BC58_00000A14
    cmpwi r0, 0x80
    bge lbl_fn_8017BC58_00000A14
    cmpwi r0, 0x7b
    bge lbl_fn_8017BC58_00000A0C
    b lbl_fn_8017BC58_00000A14
lbl_fn_8017BC58_00000A0C:
    li r3, 0x0
    blr
lbl_fn_8017BC58_00000A14:
    li r3, 0x1
    blr
}

asm void fn_8017BDDC(void)
{
    nofralloc
    stwu r1, -0x270(r1)
    mflr r0
    lfs f4, 0x8(r5)
    stw r0, 0x274(r1)
    lis r0, 0x4330
    lfs f3, 0x0(r5)
    stfd f31, 0x260(r1)
    lfs f0, lbl_8088196C
    psq_st f31, 0x268(r1), 0, 0
    stfd f30, 0x250(r1)
    psq_st f30, 0x258(r1), 0, 0
    stw r31, 0x24c(r1)
    stw r30, 0x248(r1)
    stw r29, 0x244(r1)
    mr r29, r4
    stw r28, 0x240(r1)
    mr r28, r3
    addi r3, r1, 0x11c
    stw r0, 0x228(r1)
    stw r0, 0x230(r1)
    stfs f3, 0x11c(r1)
    stfs f0, 0x120(r1)
    stfs f4, 0x124(r1)
    bl fn_805F9920
    fabs f3, f1
    lfs f0, lbl_808819C4
    frsp f3, f3
    fcmpo cr0, f3, f0
    blt lbl_fn_8017BDDC_00000A9C
    addi r3, r1, 0x11c
    mr r4, r3
    bl fn_805F98D0
lbl_fn_8017BDDC_00000A9C:
    lfs f2, 0x124(r1)
    addi r3, r1, 0x11c
    lfs f0, lbl_808819C4
    addi r30, r1, 0x110
    fabs f3, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0x118(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_8017BDDC_00000AEC
    lfs f3, 0x110(r1)
    lfs f0, lbl_8088196C
    fcmpo cr0, f3, f0
    ble lbl_fn_8017BDDC_00000AE0
    lfs f0, lbl_808819C8
    b lbl_fn_8017BDDC_00000AE4
lbl_fn_8017BDDC_00000AE0:
    lfs f0, lbl_808819CC
lbl_fn_8017BDDC_00000AE4:
    stfs f0, 0x48(r1)
    b lbl_fn_8017BDDC_00000B00
lbl_fn_8017BDDC_00000AEC:
    frsp f2, f2
    lfs f1, 0x110(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_8017BDDC_00000B00:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x128
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_8088196C
    addi r4, r1, 0x38
    lfs f30, 0x130(r1)
    mr r5, r4
    lfs f31, 0x12c(r1)
    addi r3, r1, 0x158
    lfs f13, 0x128(r1)
    lfs f12, 0x140(r1)
    lfs f11, 0x13c(r1)
    lfs f10, 0x138(r1)
    lfs f9, 0x150(r1)
    lfs f8, 0x14c(r1)
    lfs f7, 0x148(r1)
    lfs f6, 0x154(r1)
    lfs f5, 0x144(r1)
    lfs f4, 0x134(r1)
    lfs f0, lbl_80881964
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x118(r1)
    stfs f3, 0x188(r1)
    stfs f3, 0x18c(r1)
    stfs f3, 0x190(r1)
    stfs f0, 0x194(r1)
    stfs f13, 0x8(r1)
    stfs f31, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f13, 0x158(r1)
    stfs f31, 0x15c(r1)
    stfs f30, 0x160(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0x168(r1)
    stfs f11, 0x16c(r1)
    stfs f12, 0x170(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0x178(r1)
    stfs f8, 0x17c(r1)
    stfs f9, 0x180(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0x164(r1)
    stfs f5, 0x174(r1)
    stfs f6, 0x184(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_808819C4
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8017BDDC_00000C1C
    lfs f3, 0x3c(r1)
    lfs f0, lbl_8088196C
    fcmpo cr0, f3, f0
    ble lbl_fn_8017BDDC_00000C0C
    lfs f0, lbl_808819C8
    b lbl_fn_8017BDDC_00000C10
lbl_fn_8017BDDC_00000C0C:
    lfs f0, lbl_808819CC
lbl_fn_8017BDDC_00000C10:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_8017BDDC_00000C30
lbl_fn_8017BDDC_00000C1C:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_8017BDDC_00000C30:
    addi r3, r1, 0x44
    lfs f4, lbl_8088196C
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_80737810@ha
    psq_st f1, 0x0(r30), 0, 0
    fmr f2, f4
    lfs f3, lbl_80881A0C
    lfs f0, 0x114(r1)
    stfs f2, 0x118(r1)
    fadds f1, f3, f0
    lfd f2, lbl_80737810@l(r3)
    stfs f4, 0x4c(r1)
    bl fn_8068AEA8
    frsp f31, f1
    lfs f0, lbl_80881A0C
    fcmpo cr0, f31, f0
    ble lbl_fn_8017BDDC_00000C7C
    lfs f0, lbl_80881A10
    fsubs f31, f31, f0
lbl_fn_8017BDDC_00000C7C:
    lfs f0, lbl_80881A14
    fcmpo cr0, f31, f0
    bge lbl_fn_8017BDDC_00000C90
    lfs f0, lbl_80881A10
    fadds f31, f31, f0
lbl_fn_8017BDDC_00000C90:
    lfs f3, 0x530(r28)
    addi r3, r1, 0x104
    lfs f0, 0x124(r1)
    lfs f5, 0x52c(r28)
    fsubs f2, f3, f0
    lfs f4, 0x120(r1)
    lfs f3, 0x528(r28)
    lfs f0, 0x11c(r1)
    fsubs f4, f5, f4
    stfs f2, 0x10c(r1)
    fsubs f0, f3, f0
    stfs f4, 0x108(r1)
    stfs f0, 0x104(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x24(r29), 0, 0
    stfs f2, 0x2c(r29)
    bl fn_80680CF8
    lis r30, 0x4178
    lis r31, lbl_80737808@ha
    addi r0, r30, 0x749f
    lfs f0, lbl_80881B60
    mulhw r0, r0, r3
    lfd f6, lbl_80737808@l(r31)
    lfs f4, lbl_80881998
    fadds f0, f31, f0
    lfs f3, lbl_80881B64
    li r4, 0x79
    srawi r0, r0, 8
    srwi r5, r0, 31
    add r0, r0, r5
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    addi r3, r1, 0x1f8
    xoris r0, r0, 0x8000
    stw r0, 0x22c(r1)
    lfd f5, 0x228(r1)
    fsubs f5, f5, f6
    fdivs f4, f5, f4
    fnmsubs f1, f3, f4, f0
    bl fn_805F8E70
    addi r28, r1, 0x1f8
    bl fn_80680CF8
    addi r0, r30, 0x749f
    lfs f0, lbl_8088196C
    mulhw r0, r0, r3
    lfd f6, lbl_80737808@l(r31)
    stfs f0, 0xc8(r1)
    addi r6, r1, 0xc8
    lfs f5, lbl_80881998
    addi r4, r1, 0xd4
    srawi r0, r0, 8
    stfs f0, 0xcc(r1)
    srwi r5, r0, 31
    lfs f4, lbl_808819DC
    add r0, r0, r5
    psq_l f1, 0x0(r6), 0, 0
    mulli r0, r0, 0x3e9
    lfs f3, lbl_80881974
    psq_st f1, 0x0(r4), 0, 0
    mr r5, r4
    subf r0, r0, r3
    mr r3, r28
    xoris r0, r0, 0x8000
    stw r0, 0x234(r1)
    lfd f0, 0x230(r1)
    fsubs f0, f0, f6
    fdivs f0, f0, f5
    fmadds f2, f4, f0, f3
    stfs f2, 0xd0(r1)
    stfs f2, 0xdc(r1)
    bl fn_805F93C0
    lfs f4, 0x124(r1)
    addi r3, r1, 0xf8
    lfs f5, lbl_808819D4
    lfs f3, 0x120(r1)
    fmuls f6, f4, f5
    lfs f4, 0x2c(r29)
    fmuls f7, f3, f5
    lfs f0, 0x11c(r1)
    lfs f3, 0x24(r29)
    fmuls f5, f0, f5
    lfs f0, 0x28(r29)
    fsubs f4, f4, f6
    stfs f5, 0xe0(r1)
    fsubs f8, f0, f7
    lfs f0, 0xdc(r1)
    fsubs f9, f3, f5
    lfs f3, 0xd8(r1)
    fadds f2, f4, f0
    lfs f0, 0xd4(r1)
    fadds f3, f8, f3
    stfs f7, 0xe4(r1)
    fadds f0, f9, f0
    stfs f3, 0xfc(r1)
    stfs f0, 0xf8(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f6, 0xe8(r1)
    stfs f9, 0xec(r1)
    stfs f8, 0xf0(r1)
    stfs f4, 0xf4(r1)
    stfs f2, 0x100(r1)
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x8(r29)
    bl fn_80680CF8
    addi r0, r30, 0x749f
    lfs f0, lbl_80881B68
    mulhw r0, r0, r3
    lfd f6, lbl_80737808@l(r31)
    lfs f4, lbl_80881998
    fadds f0, f31, f0
    lfs f3, lbl_80881B64
    li r4, 0x79
    srawi r0, r0, 8
    srwi r5, r0, 31
    add r0, r0, r5
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    addi r3, r1, 0x1c8
    xoris r0, r0, 0x8000
    stw r0, 0x22c(r1)
    lfd f5, 0x228(r1)
    fsubs f5, f5, f6
    fdivs f4, f5, f4
    fnmsubs f1, f3, f4, f0
    bl fn_805F8E70
    addi r28, r1, 0x1c8
    bl fn_80680CF8
    addi r0, r30, 0x749f
    lfs f0, lbl_8088196C
    mulhw r0, r0, r3
    lfd f6, lbl_80737808@l(r31)
    stfs f0, 0x8c(r1)
    addi r6, r1, 0x8c
    lfs f5, lbl_80881998
    addi r4, r1, 0x98
    srawi r0, r0, 8
    stfs f0, 0x90(r1)
    srwi r5, r0, 31
    lfs f4, lbl_808819DC
    add r0, r0, r5
    psq_l f1, 0x0(r6), 0, 0
    mulli r0, r0, 0x3e9
    lfs f3, lbl_80881974
    psq_st f1, 0x0(r4), 0, 0
    mr r5, r4
    subf r0, r0, r3
    mr r3, r28
    xoris r0, r0, 0x8000
    stw r0, 0x234(r1)
    lfd f0, 0x230(r1)
    fsubs f0, f0, f6
    fdivs f0, f0, f5
    fmadds f2, f4, f0, f3
    stfs f2, 0x94(r1)
    stfs f2, 0xa0(r1)
    bl fn_805F93C0
    lfs f4, 0x124(r1)
    addi r3, r1, 0xbc
    lfs f5, lbl_808819D4
    lfs f3, 0x120(r1)
    fmuls f6, f4, f5
    lfs f4, 0x2c(r29)
    fmuls f7, f3, f5
    lfs f0, 0x11c(r1)
    lfs f3, 0x24(r29)
    fmuls f5, f0, f5
    lfs f0, 0x28(r29)
    fsubs f4, f4, f6
    stfs f5, 0xa4(r1)
    fsubs f8, f0, f7
    lfs f0, 0xa0(r1)
    fsubs f9, f3, f5
    lfs f3, 0x9c(r1)
    fadds f2, f4, f0
    lfs f0, 0x98(r1)
    fadds f3, f8, f3
    stfs f7, 0xa8(r1)
    fadds f0, f9, f0
    stfs f3, 0xc0(r1)
    stfs f0, 0xbc(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f6, 0xac(r1)
    stfs f9, 0xb0(r1)
    stfs f8, 0xb4(r1)
    stfs f4, 0xb8(r1)
    stfs f2, 0xc4(r1)
    psq_st f1, 0xc(r29), 0, 0
    stfs f2, 0x14(r29)
    bl fn_80680CF8
    addi r0, r30, 0x749f
    lfs f0, lbl_80881B6C
    mulhw r0, r0, r3
    lfd f6, lbl_80737808@l(r31)
    lfs f4, lbl_80881998
    fsubs f0, f31, f0
    lfs f3, lbl_80881B64
    li r4, 0x79
    srawi r0, r0, 8
    srwi r5, r0, 31
    add r0, r0, r5
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    addi r3, r1, 0x198
    xoris r0, r0, 0x8000
    stw r0, 0x22c(r1)
    lfd f5, 0x228(r1)
    fsubs f5, f5, f6
    fdivs f4, f5, f4
    fnmsubs f1, f3, f4, f0
    bl fn_805F8E70
    addi r28, r1, 0x198
    bl fn_80680CF8
    addi r0, r30, 0x749f
    lfs f0, lbl_8088196C
    mulhw r0, r0, r3
    lfd f6, lbl_80737808@l(r31)
    stfs f0, 0x50(r1)
    addi r6, r1, 0x50
    lfs f5, lbl_80881998
    addi r4, r1, 0x5c
    srawi r0, r0, 8
    stfs f0, 0x54(r1)
    srwi r5, r0, 31
    lfs f4, lbl_808819DC
    add r0, r0, r5
    psq_l f1, 0x0(r6), 0, 0
    mulli r0, r0, 0x3e9
    lfs f3, lbl_80881974
    psq_st f1, 0x0(r4), 0, 0
    mr r5, r4
    subf r0, r0, r3
    mr r3, r28
    xoris r0, r0, 0x8000
    stw r0, 0x234(r1)
    lfd f0, 0x230(r1)
    fsubs f0, f0, f6
    fdivs f0, f0, f5
    fmadds f2, f4, f0, f3
    stfs f2, 0x58(r1)
    stfs f2, 0x64(r1)
    bl fn_805F93C0
    lfs f4, 0x124(r1)
    addi r3, r1, 0x80
    lfs f5, lbl_808819D4
    lfs f3, 0x120(r1)
    fmuls f6, f4, f5
    lfs f4, 0x2c(r29)
    fmuls f7, f3, f5
    lfs f0, 0x11c(r1)
    lfs f3, 0x24(r29)
    fmuls f5, f0, f5
    lfs f0, 0x28(r29)
    fsubs f4, f4, f6
    stfs f5, 0x68(r1)
    fsubs f8, f0, f7
    lfs f0, 0x64(r1)
    fsubs f9, f3, f5
    lfs f3, 0x60(r1)
    fadds f2, f4, f0
    lfs f0, 0x5c(r1)
    fadds f3, f8, f3
    stfs f2, 0x20(r29)
    fadds f0, f9, f0
    stfs f3, 0x84(r1)
    stfs f0, 0x80(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x18(r29), 0, 0
    psq_l f31, 0x268(r1), 0, 0
    lfd f31, 0x260(r1)
    psq_l f30, 0x258(r1), 0, 0
    lfd f30, 0x250(r1)
    lwz r31, 0x24c(r1)
    lwz r30, 0x248(r1)
    lwz r29, 0x244(r1)
    lwz r28, 0x240(r1)
    lwz r0, 0x274(r1)
    stfs f7, 0x6c(r1)
    stfs f6, 0x70(r1)
    stfs f9, 0x74(r1)
    stfs f8, 0x78(r1)
    stfs f4, 0x7c(r1)
    stfs f2, 0x88(r1)
    mtlr r0
    addi r1, r1, 0x270
    blr
}

asm void fn_8017C4C4(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    lfs f4, lbl_8088196C
    stw r0, 0x54(r1)
    lfs f0, lbl_808819A4
    lfs f2, 0x5b4(r4)
    lfs f3, 0x530(r4)
    fmuls f5, f0, f2
    lfs f2, 0x52c(r4)
    lfs f0, 0x528(r4)
    fadds f3, f3, f4
    stfs f4, 0x8(r1)
    li r4, 0x79
    fadds f2, f2, f5
    stfs f5, 0xc(r1)
    fadds f0, f0, f4
    stfs f4, 0x10(r1)
    stfs f0, 0x0(r3)
    stfs f2, 0x4(r3)
    stfs f3, 0x8(r3)
    addi r3, r1, 0x18
    bl fn_805F8E70
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8017C52C(void)
{
    nofralloc
    stwu r1, -0x170(r1)
    mflr r0
    stw r0, 0x174(r1)
    addi r11, r1, 0x120
    stfd f31, 0x160(r1)
    psq_st f31, 0x168(r1), 0, 0
    stfd f30, 0x150(r1)
    psq_st f30, 0x158(r1), 0, 0
    stfd f29, 0x140(r1)
    psq_st f29, 0x148(r1), 0, 0
    stfd f28, 0x130(r1)
    psq_st f28, 0x138(r1), 0, 0
    stfd f27, 0x120(r1)
    psq_st f27, 0x128(r1), 0, 0
    bl _savegpr_25
    lwz r12, 0x0(r4)
    mr r25, r3
    mr r26, r5
    mr r27, r4
    lwz r12, 0x64(r12)
    addi r3, r1, 0x68
    li r5, 0x1
    mtctr r12
    bctrl
    lfs f3, 0x530(r27)
    addi r3, r1, 0x5c
    lfs f0, 0x530(r26)
    lfs f5, 0x52c(r27)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r26)
    lfs f3, 0x528(r27)
    lfs f0, 0x528(r26)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x60(r1)
    stfs f0, 0x5c(r1)
    stfs f6, 0x64(r1)
    bl fn_805F9920
    lfs f0, lbl_80881A1C
    fcmpo cr0, f1, f0
    ble lbl_fn_8017C52C_00001220
    addi r3, r1, 0x5c
    mr r4, r3
    bl fn_805F98D0
    b lbl_fn_8017C52C_00001234
lbl_fn_8017C52C_00001220:
    lfs f3, lbl_8088196C
    lfs f0, lbl_80881964
    stfs f3, 0x5c(r1)
    stfs f3, 0x60(r1)
    stfs f0, 0x64(r1)
lbl_fn_8017C52C_00001234:
    lfs f4, 0x64(r1)
    lis r3, lbl_80737840@ha
    lfs f5, lbl_80881A4C
    li r0, 0x0
    lfs f3, 0x60(r1)
    addi r30, r1, 0x50
    fmuls f6, f4, f5
    lfs f4, 0x70(r1)
    fmuls f7, f3, f5
    lfs f0, 0x5c(r1)
    lfs f3, 0x6c(r1)
    addi r29, r1, 0x5c
    fmuls f5, f0, f5
    lfs f0, 0x68(r1)
    fsubs f4, f4, f6
    lfd f27, lbl_80737840@l(r3)
    fsubs f3, f3, f7
    stfs f5, 0x2c(r1)
    fsubs f0, f0, f5
    stfs f3, 0x4(r25)
    lfs f28, lbl_80881A0C
    addi r27, r1, 0x68
    stfs f0, 0x0(r25)
    addi r28, r1, 0x44
    stfs f4, 0x8(r25)
    li r26, 0x0
    lfs f29, lbl_80881988
    lis r31, 0x4330
    lfs f30, lbl_808819F8
    stfs f7, 0x30(r1)
    lfs f31, lbl_80881974
    stfs f6, 0x34(r1)
    stw r0, 0xdc(r1)
    stw r0, 0xe0(r1)
    stw r0, 0xe4(r1)
    stw r0, 0xe8(r1)
lbl_fn_8017C52C_000012C4:
    stw r26, 0xfc(r1)
    addi r3, r1, 0x78
    li r4, 0x79
    stw r31, 0xf8(r1)
    lfd f0, 0xf8(r1)
    fsubs f0, f0, f27
    fmuls f0, f28, f0
    fmuls f1, f0, f29
    bl fn_805F8E70
    psq_l f1, 0x0(r29), 0, 0
    mr r4, r30
    lfs f2, 0x64(r1)
    mr r5, r30
    psq_st f1, 0x0(r30), 0, 0
    addi r3, r1, 0x78
    stfs f2, 0x58(r1)
    bl fn_805F93C0
    psq_l f1, 0x0(r27), 0, 0
    mr r5, r28
    psq_st f1, 0x0(r28), 0, 0
    addi r4, r1, 0xa8
    lfs f0, 0x58(r1)
    addi r6, r1, 0x38
    lfs f4, 0x48(r1)
    lis r7, 0x8000
    fmuls f5, f0, f31
    lfs f3, 0x54(r1)
    lfs f0, 0x50(r1)
    fadds f4, f4, f30
    fmuls f3, f3, f31
    lfs f2, 0x70(r1)
    fmuls f6, f0, f31
    lfs f0, 0x44(r1)
    fsubs f7, f2, f5
    stfs f2, 0x4c(r1)
    fsubs f8, f4, f3
    lwz r3, lbl_8087EE98
    fsubs f0, f0, f6
    stfs f4, 0x48(r1)
    li r8, 0x0
    li r9, 0x0
    stfs f6, 0x20(r1)
    stfs f3, 0x24(r1)
    stfs f5, 0x28(r1)
    stfs f0, 0x38(r1)
    stfs f8, 0x3c(r1)
    stfs f7, 0x40(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    bne lbl_fn_8017C52C_000013EC
    lfs f5, 0x58(r1)
    addi r3, r1, 0x14
    lfs f4, lbl_80881A4C
    lfs f0, 0x54(r1)
    fmuls f5, f5, f4
    lfs f3, 0x50(r1)
    fmuls f6, f0, f4
    lfs f0, 0x70(r1)
    fmuls f4, f3, f4
    lfs f3, 0x6c(r1)
    fsubs f2, f0, f5
    lfs f0, 0x68(r1)
    fsubs f3, f3, f6
    stfs f4, 0x8(r1)
    fsubs f0, f0, f4
    stfs f3, 0x18(r1)
    stfs f0, 0x14(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f6, 0xc(r1)
    stfs f5, 0x10(r1)
    stfs f2, 0x1c(r1)
    psq_st f1, 0x0(r25), 0, 0
    stfs f2, 0x8(r25)
    b lbl_fn_8017C52C_000013F8
lbl_fn_8017C52C_000013EC:
    addi r26, r26, 0x1
    cmplwi r26, 0x8
    blt lbl_fn_8017C52C_000012C4
lbl_fn_8017C52C_000013F8:
    addi r11, r1, 0x120
    psq_l f31, 0x168(r1), 0, 0
    lfd f31, 0x160(r1)
    psq_l f30, 0x158(r1), 0, 0
    lfd f30, 0x150(r1)
    psq_l f29, 0x148(r1), 0, 0
    lfd f29, 0x140(r1)
    psq_l f28, 0x138(r1), 0, 0
    lfd f28, 0x130(r1)
    psq_l f27, 0x128(r1), 0, 0
    lfd f27, 0x120(r1)
    bl _restgpr_25
    lwz r0, 0x174(r1)
    mtlr r0
    addi r1, r1, 0x170
    blr
}

asm void fn_8017C7F8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r5, 0x12a8(r3)
    extrwi r0, r5, 1, 30
    cmplw r0, r4
    beq lbl_fn_8017C7F8_00001524
    rlwimi r5, r4, 1, 30, 30
    stw r5, 0x12a8(r3)
    extrwi. r0, r5, 1, 30
    li r30, 0x1
    beq lbl_fn_8017C7F8_00001480
    li r30, 0x4
lbl_fn_8017C7F8_00001480:
    mr r4, r30
    addi r3, r3, 0xb0
    bl fn_80094BD8
    mr r31, r28
    li r29, 0x0
    b lbl_fn_8017C7F8_000014B8
lbl_fn_8017C7F8_00001498:
    lwz r3, 0x654(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8017C7F8_000014B0
    mr r4, r30
    addi r3, r3, 0x10
    bl fn_80094BD8
lbl_fn_8017C7F8_000014B0:
    addi r31, r31, 0x4
    addi r29, r29, 0x1
lbl_fn_8017C7F8_000014B8:
    lwz r0, 0x650(r28)
    cmplw r29, r0
    blt lbl_fn_8017C7F8_00001498
    addi r31, r28, 0x680
    li r29, 0x0
lbl_fn_8017C7F8_000014CC:
    lwz r3, 0x0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8017C7F8_000014E4
    mr r4, r30
    addi r3, r3, 0x24
    bl fn_80094BD8
lbl_fn_8017C7F8_000014E4:
    addi r29, r29, 0x1
    addi r31, r31, 0x4
    cmplwi r29, 0x8
    blt lbl_fn_8017C7F8_000014CC
    mr r31, r28
    li r29, 0x0
    b lbl_fn_8017C7F8_00001518
lbl_fn_8017C7F8_00001500:
    lwz r3, 0x6a8(r31)
    mr r4, r30
    addi r3, r3, 0x4
    bl fn_80094BD8
    addi r31, r31, 0x4
    addi r29, r29, 0x1
lbl_fn_8017C7F8_00001518:
    lwz r0, 0x6a4(r28)
    cmplw r29, r0
    blt lbl_fn_8017C7F8_00001500
lbl_fn_8017C7F8_00001524:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8017C904(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, 0x51ec
    stw r0, 0x14(r1)
    subi r0, r4, 0x7ae1
    lis r4, lbl_80737A9C@ha
    stw r31, 0xc(r1)
    lis r31, lbl_807C7B28@ha
    addi r4, r4, lbl_80737A9C@l
    lwz r8, 0x50(r3)
    addi r3, r31, lbl_807C7B28@l
    mulhw r0, r0, r8
    srawi r6, r0, 5
    srawi r0, r0, 5
    srwi r5, r0, 31
    srwi r7, r6, 31
    add r0, r0, r5
    mulli r0, r0, 0x64
    add r5, r6, r7
    subf r6, r0, r8
    crclr 6
    bl sprintf
    addi r3, r31, lbl_807C7B28@l
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8017C974(void)
{
    nofralloc
    lwz r4, lbl_8087F430
    cmpwi r4, 0x0
    beq lbl_fn_8017C974_000015D4
    lwz r0, 0x5760(r4)
    cmpwi r0, 0x0
    ble lbl_fn_8017C974_000015D4
    li r3, 0x1
    blr
lbl_fn_8017C974_000015D4:
    lwz r0, 0x54c(r3)
    extrwi r3, r0, 1, 27
    blr
}

asm void fn_8017C9A0(void)
{
    nofralloc
    lwz r0, 0x54c(r3)
    extrwi r3, r0, 1, 27
    blr
}

asm void fn_8017C9AC(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stw r31, 0x7c(r1)
    stw r30, 0x78(r1)
    mr r30, r4
    stw r29, 0x74(r1)
    mr r29, r3
    lwz r5, lbl_8087F430
    cmpwi r5, 0x0
    beq lbl_fn_8017C9AC_00001620
    addi r31, r5, 0x260
    b lbl_fn_8017C9AC_00001628
lbl_fn_8017C9AC_00001620:
    lwz r3, lbl_8087EFB4
    addi r31, r3, 0x104
lbl_fn_8017C9AC_00001628:
    lfs f3, 0x1c(r31)
    addi r3, r1, 0x44
    lfs f0, 0x10(r31)
    addi r5, r1, 0x8
    lfs f5, 0x18(r31)
    mr r4, r3
    fsubs f2, f3, f0
    lfs f4, 0xc(r31)
    lfs f3, 0x14(r31)
    lfs f0, 0x8(r31)
    fsubs f4, f5, f4
    stfs f2, 0x10(r1)
    fsubs f0, f3, f0
    stfs f4, 0xc(r1)
    stfs f0, 0x8(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x4c(r1)
    bl fn_805F98D0
    lfs f0, 0x4c(r1)
    addi r3, r1, 0x38
    lfs f5, lbl_80881B70
    addi r4, r1, 0x50
    lfs f2, 0x10(r31)
    addi r7, r1, 0x2c
    psq_l f1, 0x8(r31), 0, 0
    fmuls f6, f0, f5
    lfs f3, 0x48(r1)
    frsp f4, f2
    psq_st f1, 0x0(r3), 0, 0
    addi r6, r1, 0x5c
    fmuls f7, f3, f5
    lfs f0, 0x44(r1)
    fadds f4, f4, f6
    lfs f3, 0x3c(r1)
    mr r5, r29
    fmuls f5, f0, f5
    lfs f0, 0x38(r1)
    fadds f3, f3, f7
    stfs f2, 0x40(r1)
    addi r3, r30, 0x528
    fadds f0, f0, f5
    stfs f2, 0x58(r1)
    fmr f2, f4
    stfs f0, 0x2c(r1)
    stfs f3, 0x30(r1)
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    stfs f5, 0x20(r1)
    stfs f7, 0x24(r1)
    stfs f6, 0x28(r1)
    stfs f4, 0x34(r1)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x64(r1)
    bl fn_80050A1C
    lfs f5, 0x4c(r1)
    lfs f4, lbl_808819F8
    lfs f3, 0x48(r1)
    lfs f0, 0x44(r1)
    fmuls f5, f5, f4
    fmuls f6, f3, f4
    lfs f3, 0x4(r29)
    fmuls f7, f0, f4
    lfs f4, 0x0(r29)
    lfs f0, 0x8(r29)
    fadds f3, f3, f6
    fadds f4, f4, f7
    stfs f7, 0x14(r1)
    fadds f0, f0, f5
    stfs f4, 0x0(r29)
    stfs f3, 0x4(r29)
    stfs f0, 0x8(r29)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    lwz r29, 0x74(r1)
    lwz r0, 0x84(r1)
    stfs f6, 0x18(r1)
    stfs f5, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_8017CB2C(void)
{
    nofralloc
    lwz r0, 0x137c(r3)
    li r4, 0x0
    rlwinm r0, r0, 0, 21, 21
    cmplwi r0, 0x400
    beq lbl_fn_8017CB2C_000017A0
    lwz r3, 0x50(r3)
    subis r0, r3, 0x3
    cmplwi r0, 0x138c
    beq lbl_fn_8017CB2C_000017A0
    cmplwi r0, 0x1c9c
    beq lbl_fn_8017CB2C_000017A0
    cmplwi r0, 0x1c7c
    bne lbl_fn_8017CB2C_000017A4
lbl_fn_8017CB2C_000017A0:
    li r4, 0x1
lbl_fn_8017CB2C_000017A4:
    mr r3, r4
    blr
}

asm void fn_8017CB6C(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_8017CB74(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_8013655C
    cntlzw r0, r3
    srwi r3, r0, 5
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8017CB9C(void)
{
    nofralloc
    stwu r1, -0x6a0(r1)
    mflr r0
    stw r0, 0x6a4(r1)
    addi r11, r1, 0x6a0
    bl _savegpr_17
    mr r31, r5
    lwz r5, 0x20(r5)
    mr r30, r3
    bl fn_8035B694
    lfs f3, lbl_80881B78
    lis r3, lbl_8077C968@ha
    li r19, 0x0
    lfs f0, lbl_80881B7C
    addi r3, r3, lbl_8077C968@l
    stw r3, 0x0(r30)
    addi r3, r31, 0x2c
    stw r19, 0x14b0(r30)
    stw r19, 0x14b4(r30)
    stfs f3, 0x14b8(r30)
    stfs f3, 0x14bc(r30)
    stfs f3, 0x14c0(r30)
    stw r19, 0x14d0(r30)
    stw r19, 0x14d4(r30)
    stw r19, 0x14d8(r30)
    stw r19, 0x14ec(r30)
    stw r19, 0x14f0(r30)
    stw r19, 0x14f4(r30)
    stw r19, 0x14f8(r30)
    stw r19, 0x14fc(r30)
    stfs f0, 0x1500(r30)
    stw r19, 0x1504(r30)
    stw r19, 0x1508(r30)
    stfs f3, 0x1510(r30)
    stfs f3, 0x1514(r30)
    stfs f3, 0x1518(r30)
    bl strlen
    lis r4, lbl_807772D0@ha
    mr r17, r3
    addi r4, r4, lbl_807772D0@l
    stw r4, 0x28(r1)
    addi r3, r1, 0x38
    li r5, 0x400
    stw r19, 0x2c(r1)
    li r4, 0x0
    stw r19, 0x30(r1)
    stw r19, 0x34(r1)
    stw r19, 0x658(r1)
    bl memset
    addi r3, r1, 0x638
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x28(r1)
    mr r5, r17
    addi r3, r1, 0x28
    addi r4, r31, 0x2c
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0x28
    addi r4, r4, lbl_807772B0@l
    stw r4, 0x28(r1)
    la r4, lbl_8087D708
    bl fn_8005B6E8
    addi r3, r1, 0x28
    bl fn_8005B3CC
    lis r4, __files@ha
    lis r28, lbl_807380F8@ha
    mr r17, r3
    addi r18, r1, 0x14
    addi r29, r28, lbl_807380F8@l
    addi r22, r4, __files@l
    lis r26, 0xcccd
    lis r21, 0x4000
    lis r23, 0x1555
    lis r24, 0x2aab
    lis r27, lbl_80775A88@ha
    b lbl_fn_8017CB9C_00001BD8
lbl_fn_8017CB9C_00001918:
    mr r3, r17
    bl fn_800DC12C
    lwz r5, lbl_8087F430
    mr r4, r3
    lwz r3, 0x10d8(r5)
    bl fn_803C17FC
    lwz r4, 0x14f0(r30)
    mr r20, r3
    lwz r25, 0x14f4(r30)
    cmplw r4, r25
    bge lbl_fn_8017CB9C_00001960
    addi r5, r4, 0x1
    lwz r4, 0x14ec(r30)
    slwi r0, r5, 2
    stw r5, 0x14f0(r30)
    add r4, r4, r0
    stw r3, -0x4(r4)
    b lbl_fn_8017CB9C_00001BCC
lbl_fn_8017CB9C_00001960:
    subi r0, r21, 0x1
    subf r0, r25, r0
    cmplwi r0, 0x1
    bge lbl_fn_8017CB9C_00001984
    addi r4, r28, lbl_807380F8@l
    addi r3, r22, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8017CB9C_00001984:
    addi r0, r23, 0x5555
    cmplw r25, r0
    bge lbl_fn_8017CB9C_000019B8
    addi r3, r25, 0x1
    subi r4, r26, 0x3333
    slwi r0, r3, 2
    subf r0, r3, r0
    mulhwu r0, r4, r0
    srwi r0, r0, 2
    cmplwi r0, 0x1
    bge lbl_fn_8017CB9C_000019D4
    b lbl_fn_8017CB9C_000019D4
    b lbl_fn_8017CB9C_000019D4
lbl_fn_8017CB9C_000019B8:
    subi r0, r24, 0x5556
    cmplw r25, r0
    bge lbl_fn_8017CB9C_000019D4
    addi r0, r25, 0x1
    srwi r0, r0, 1
    cmplwi r0, 0x1
    cmplwi r0, 0x1
lbl_fn_8017CB9C_000019D4:
    addi r3, r30, 0x14f4
    stw r19, 0x14(r1)
    subi r0, r21, 0x1
    stw r19, 0x18(r1)
    stw r19, 0x1c(r1)
    stw r3, 0x20(r1)
    stw r19, 0x24(r1)
    lwz r3, 0x14f0(r30)
    lwz r25, 0x14f4(r30)
    addi r3, r3, 0x1
    subf r3, r25, r3
    subf r0, r25, r0
    cmplw r3, r0
    stw r3, 0x8(r1)
    ble lbl_fn_8017CB9C_00001A24
    addi r4, r28, lbl_807380F8@l
    addi r3, r22, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8017CB9C_00001A24:
    addi r0, r23, 0x5555
    cmplw r25, r0
    bge lbl_fn_8017CB9C_00001A6C
    addi r4, r25, 0x1
    subi r5, r26, 0x3333
    slwi r3, r4, 2
    lwz r0, 0x8(r1)
    subf r4, r4, r3
    mulhwu r4, r5, r4
    addi r3, r1, 0x10
    srwi r4, r4, 2
    stw r4, 0x10(r1)
    cmplw r4, r0
    bge lbl_fn_8017CB9C_00001A60
    addi r3, r1, 0x8
lbl_fn_8017CB9C_00001A60:
    lwz r0, 0x0(r3)
    add r25, r25, r0
    b lbl_fn_8017CB9C_00001AA8
lbl_fn_8017CB9C_00001A6C:
    subi r0, r24, 0x5556
    cmplw r25, r0
    bge lbl_fn_8017CB9C_00001AA4
    addi r3, r25, 0x1
    lwz r0, 0x8(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_8017CB9C_00001A98
    addi r3, r1, 0x8
lbl_fn_8017CB9C_00001A98:
    lwz r0, 0x0(r3)
    add r25, r25, r0
    b lbl_fn_8017CB9C_00001AA8
lbl_fn_8017CB9C_00001AA4:
    subi r25, r21, 0x1
lbl_fn_8017CB9C_00001AA8:
    subi r0, r21, 0x1
    cmplw r25, r0
    ble lbl_fn_8017CB9C_00001AC8
    addi r4, r28, lbl_807380F8@l
    addi r3, r22, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8017CB9C_00001AC8:
    slwi r3, r25, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r17, r3
    bne lbl_fn_8017CB9C_00001AF0
    addi r3, r22, 0xa0
    addi r4, r27, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8017CB9C_00001AF0:
    lwz r0, 0x18(r1)
    stw r17, 0x14(r1)
    slwi r3, r0, 2
    stw r25, 0x1c(r1)
    lwz r0, 0x14f0(r30)
    stw r0, 0x24(r1)
    slwi r0, r0, 2
    add r4, r17, r0
    stwx r20, r4, r3
    lwz r3, 0x18(r1)
    lwz r0, 0x24(r1)
    addi r3, r3, 0x1
    stw r3, 0x18(r1)
    lwz r3, 0x14(r1)
    lwz r4, 0x14f0(r30)
    lwz r25, 0x14ec(r30)
    slwi r4, r4, 2
    add r5, r25, r4
    subf r5, r25, r5
    mr r4, r25
    srawi r5, r5, 2
    addze r20, r5
    subf r0, r20, r0
    stw r0, 0x24(r1)
    slwi r17, r20, 2
    slwi r0, r0, 2
    mr r5, r17
    add r3, r3, r0
    bl memcpy
    mr r3, r25
    mr r5, r17
    li r4, 0x0
    bl memset
    lwz r0, 0x18(r1)
    cmpwi r18, 0x0
    add r0, r0, r20
    stw r0, 0x18(r1)
    stw r19, 0x14f0(r30)
    lwz r3, 0x14f4(r30)
    lwz r0, 0x1c(r1)
    stw r0, 0x14f4(r30)
    stw r3, 0x1c(r1)
    lwz r0, 0x14(r1)
    lwz r3, 0x14ec(r30)
    stw r0, 0x14ec(r30)
    stw r3, 0x14(r1)
    lwz r0, 0x18(r1)
    stw r0, 0x14f0(r30)
    stw r19, 0x18(r1)
    beq lbl_fn_8017CB9C_00001BCC
    lwz r3, 0x14(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8017CB9C_00001BCC
    stw r19, 0x18(r1)
    bl dtor_80084684
lbl_fn_8017CB9C_00001BCC:
    addi r3, r1, 0x28
    bl fn_8005B3CC
    mr r17, r3
lbl_fn_8017CB9C_00001BD8:
    cmpwi r17, 0x0
    beq lbl_fn_8017CB9C_00001BF4
    mr r4, r17
    addi r3, r29, 0x14
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8017CB9C_00001918
lbl_fn_8017CB9C_00001BF4:
    psq_l f1, 0x4(r31), 0, 0
    addi r5, r30, 0x14dc
    lfs f2, 0xc(r31)
    li r4, 0x0
    stfs f2, 0x14e4(r30)
    addi r11, r1, 0x6a0
    lwz r0, 0x12a4(r30)
    mr r3, r30
    psq_st f1, 0x0(r5), 0, 0
    rlwinm r0, r0, 0, 8, 6
    lfs f0, 0x14(r31)
    stfs f0, 0x14e8(r30)
    stw r0, 0x12a4(r30)
    stw r4, 0x1454(r30)
    bl _restgpr_17
    lwz r0, 0x6a4(r1)
    mtlr r0
    addi r1, r1, 0x6a0
    blr
}
