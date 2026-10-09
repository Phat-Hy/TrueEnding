#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __register_global_object(void);
extern void _restgpr_25(void);
extern void _restgpr_27(void);
extern void _savegpr_25(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_8000D430(void);
extern void fn_8003EFB0(void);
extern void fn_8004ECC0(void);
extern void fn_8005B9CC(void);
extern void fn_8005BBF8(void);
extern void fn_8005BCE8(void);
extern void fn_8009076C(void);
extern void fn_80092A4C(void);
extern void fn_80096E94(void);
extern void fn_800971D4(void);
extern void fn_80097C08(void);
extern void fn_80097E80(void);
extern void fn_800BFAC8(void);
extern void fn_800C31F4(void);
extern void fn_800CB3A0(void);
extern void fn_800DD3FC(void);
extern void fn_800EF73C(void);
extern void fn_8014F698(void);
extern void fn_801F6D7C(void);
extern void fn_801F791C(void);
extern void fn_801F837C(void);
extern void fn_80206B9C(void);
extern void fn_80206C50(void);
extern void fn_8020EF04(void);
extern void fn_8020EFEC(void);
extern void fn_80211480(void);
extern void fn_8021E4E4(void);
extern void fn_80232B7C(void);
extern void fn_8023780C(void);
extern void fn_8023781C(void);
extern void fn_80237874(void);
extern void fn_80239D58(void);
extern void fn_80239DAC(void);
extern void fn_8023A8B4(void);
extern void fn_803EC69C(void);
extern void fn_803ED774(void);
extern void fn_8040BE88(void);
extern void fn_8040C058(void);
extern void fn_8040C610(void);
extern void fn_80444CF8(void);
extern void fn_80444EFC(void);
extern void fn_80445130(void);
extern void fn_80448F9C(void);
extern void fn_8044909C(void);
extern void fn_8044D884(void);
extern void fn_8044E418(void);
extern void fn_8044E610(void);
extern void fn_8044EEC0(void);
extern void fn_8044F96C(void);
extern void fn_80450778(void);
extern void fn_80450A78(void);
extern void fn_80450B60(void);
extern void fn_80450B84(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473E8C(void);
extern void fn_804DB1C8(void);
extern void fn_805F89F0(void);
extern void fn_805F8CA0(void);
extern void fn_805F8E70(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_80680CF8(void);
extern void fn_80682428(void);
extern void fn_8068A850(void);
extern void fn_8068AD58(void);
extern void fn_8068B100(void);
extern void fn_806959D8(void);

/* External data declarations */
extern u8 lbl_80752A18[];
extern u8 lbl_80752A40[];
extern u8 lbl_80752A5C[];
extern u8 lbl_80752AD0[];
extern u8 lbl_807774B8[];
extern u8 lbl_807774D8[];
extern u8 lbl_8078D4F0[];
extern u8 lbl_807C6BB8[];
extern u8 lbl_807C7030[];
extern u8 lbl_807C8888[];

/* Small data declarations */
extern u32 lbl_8087D710;
extern u32 lbl_8087EE74;
extern u32 lbl_8087EE98;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F4A0;
extern u32 lbl_8087F4F0;
extern u32 lbl_8087F610;
extern u32 lbl_8087F8A0;
extern u32 lbl_808862B8;
extern u32 lbl_808862BC;
extern u32 lbl_808862C0;
extern u32 lbl_808862D0;
extern u32 lbl_808862D4;
extern u32 lbl_808862F8;
extern u32 lbl_80886308;
extern u32 lbl_8088630C;
extern u32 lbl_80886310;
extern u32 lbl_80886314;
extern u32 lbl_80886318;
extern u32 lbl_80886320;
extern u32 lbl_80886324;
extern u32 lbl_80886328;
extern u32 lbl_8088632C;
extern u32 lbl_80886330;
extern u32 lbl_80886334;
extern u32 lbl_80886338;
extern u32 lbl_8088633C;

/* Function declarations */
void fn_8040A32C(void);
void fn_8040A994(void);
void fn_8040AA10(void);
void fn_8040AB64(void);
void fn_8040B1F8(void);
void fn_8040B200(void);
void fn_8040B394(void);
void fn_8040B4B4(void);
void fn_8040B4B8(void);
void fn_8040B560(void);
void fn_8040B60C(void);
void fn_8040B668(void);
void fn_8040BC38(void);

asm void fn_8040A32C(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    addi r11, r1, 0xf0
    stfd f31, 0x100(r1)
    psq_st f31, 0x108(r1), 0, 0
    stfd f30, 0xf0(r1)
    psq_st f30, 0xf8(r1), 0, 0
    bl _savegpr_25
    lwz r12, 0x0(r3)
    mr r30, r3
    lwz r12, 0x60(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8040A32C_00000640
    lwz r0, 0x160(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8040A32C_00000640
    lwz r0, lbl_8087F430
    cmpwi r0, 0x0
    bne lbl_fn_8040A32C_0000005C
    b lbl_fn_8040A32C_00000640
lbl_fn_8040A32C_0000005C:
    lwz r3, lbl_8087F4A0
    cmpwi r3, 0x0
    beq lbl_fn_8040A32C_00000098
    lwz r0, 0x38(r3)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_8040A32C_00000098
    lwz r0, 0x288(r30)
    extrwi. r0, r0, 1, 5
    beq lbl_fn_8040A32C_00000098
    lwz r0, 0x288(r30)
    addi r3, r30, 0x19c
    rlwinm r0, r0, 0, 6, 4
    stw r0, 0x288(r30)
    bl fn_8044F96C
lbl_fn_8040A32C_00000098:
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8040A32C_000000D4
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r30
    bl fn_803ED774
lbl_fn_8040A32C_000000D4:
    addi r4, r30, 0x294
    b lbl_fn_8040A32C_000000F8
lbl_fn_8040A32C_000000DC:
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8040A32C_000000F4
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_8040A32C_000000F4:
    addi r4, r4, 0x4
lbl_fn_8040A32C_000000F8:
    lwz r0, 0x290(r30)
    slwi r0, r0, 2
    add r3, r30, r0
    addi r0, r3, 0x294
    cmplw r4, r0
    bne lbl_fn_8040A32C_000000DC
    lfs f0, lbl_80886308
    addi r4, r30, 0x294
    b lbl_fn_8040A32C_00000130
lbl_fn_8040A32C_0000011C:
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8040A32C_0000012C
    stfs f0, 0x50(r3)
lbl_fn_8040A32C_0000012C:
    addi r4, r4, 0x4
lbl_fn_8040A32C_00000130:
    lwz r0, 0x290(r30)
    slwi r0, r0, 2
    add r3, r30, r0
    addi r0, r3, 0x294
    cmplw r4, r0
    bne lbl_fn_8040A32C_0000011C
    lfs f0, lbl_808862C0
    addi r4, r30, 0x294
    b lbl_fn_8040A32C_00000168
lbl_fn_8040A32C_00000154:
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8040A32C_00000164
    stfs f0, 0x54(r3)
lbl_fn_8040A32C_00000164:
    addi r4, r4, 0x4
lbl_fn_8040A32C_00000168:
    lwz r0, 0x290(r30)
    slwi r0, r0, 2
    add r3, r30, r0
    addi r0, r3, 0x294
    cmplw r4, r0
    bne lbl_fn_8040A32C_00000154
    lwz r4, lbl_8087F610
    cmpwi r4, 0x0
    beq lbl_fn_8040A32C_000001B4
    lwz r0, 0x4fc(r4)
    li r3, 0x0
    cmpwi r0, 0x1e
    bne lbl_fn_8040A32C_000001AC
    lwz r0, 0x50c(r4)
    cmpwi r0, 0x5
    bge lbl_fn_8040A32C_000001AC
    li r3, 0x1
lbl_fn_8040A32C_000001AC:
    cmpwi r3, 0x0
    beq lbl_fn_8040A32C_00000640
lbl_fn_8040A32C_000001B4:
    lfs f1, 0x164(r30)
    lfs f0, lbl_808862C0
    fcmpo cr0, f1, f0
    ble lbl_fn_8040A32C_00000640
    lwz r31, lbl_8087F430
    addi r3, r1, 0x20
    lfs f1, 0x74(r30)
    lfs f0, 0x7c(r31)
    lfs f3, 0x70(r30)
    fsubs f4, f1, f0
    lfs f2, 0x78(r31)
    lfs f1, 0x6c(r30)
    lfs f0, 0x74(r31)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0x24(r1)
    stfs f0, 0x20(r1)
    stfs f4, 0x28(r1)
    bl fn_805F9940
    lfs f2, 0x74(r30)
    lfs f1, 0x18c(r30)
    lfs f3, 0x70(r30)
    fadds f4, f2, f1
    lfs f0, 0x188(r30)
    lfs f2, 0x6c(r30)
    lfs f1, 0x184(r30)
    fadds f3, f3, f0
    lfs f0, lbl_808862F8
    fadds f1, f2, f1
    stfs f3, 0x48(r1)
    lfs f2, lbl_808862C0
    stfs f1, 0x44(r1)
    stfs f4, 0x4c(r1)
    lfs f1, 0x16c(r30)
    lfs f3, 0x9c(r31)
    fcmpo cr0, f1, f0
    stfs f2, 0x38(r1)
    stfs f3, 0xc(r1)
    stfs f2, 0x1c(r1)
    cror eq, gt, eq
    beq lbl_fn_8040A32C_00000260
    fcmpo cr0, f1, f2
    cror eq, lt, eq
lbl_fn_8040A32C_00000260:
    lfs f1, 0x170(r30)
    lfs f0, lbl_808862F8
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    beq lbl_fn_8040A32C_00000280
    lfs f0, lbl_808862C0
    fcmpo cr0, f1, f0
    cror eq, lt, eq
lbl_fn_8040A32C_00000280:
    lfs f1, 0x174(r30)
    lfs f0, lbl_808862F8
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    beq lbl_fn_8040A32C_000002A0
    lfs f0, lbl_808862C0
    fcmpo cr0, f1, f0
    cror eq, lt, eq
lbl_fn_8040A32C_000002A0:
    lfs f1, 0x178(r30)
    lfs f0, lbl_808862F8
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    beq lbl_fn_8040A32C_000002C0
    lfs f0, lbl_808862C0
    fcmpo cr0, f1, f0
    cror eq, lt, eq
lbl_fn_8040A32C_000002C0:
    lfs f30, lbl_808862F8
    addi r3, r30, 0x19c
    bl fn_8044E610
    cmpwi r3, 0x0
    beq lbl_fn_8040A32C_000002F4
    lis r4, lbl_8078D4F0@ha
    addi r3, r1, 0x50
    addi r4, r4, lbl_8078D4F0@l
    crclr 6
    bl fn_800DD3FC
    lfs f0, lbl_808862D4
    fmuls f30, f30, f0
    b lbl_fn_8040A32C_00000360
lbl_fn_8040A32C_000002F4:
    lwz r4, 0x1a0(r30)
    li r0, 0x1
    li r3, 0x0
    cmpwi r4, 0x3
    blt lbl_fn_8040A32C_00000314
    cmpwi r4, 0x5
    bge lbl_fn_8040A32C_00000314
    li r3, 0x1
lbl_fn_8040A32C_00000314:
    cmpwi r3, 0x0
    bne lbl_fn_8040A32C_00000328
    cmpwi r4, 0x7
    beq lbl_fn_8040A32C_00000328
    li r0, 0x0
lbl_fn_8040A32C_00000328:
    cmpwi r0, 0x0
    beq lbl_fn_8040A32C_0000034C
    lis r4, lbl_8078D4F0@ha
    addi r3, r1, 0x50
    addi r4, r4, lbl_8078D4F0@l
    addi r4, r4, 0x6
    crclr 6
    bl fn_800DD3FC
    b lbl_fn_8040A32C_00000360
lbl_fn_8040A32C_0000034C:
    lwz r4, 0x158(r30)
    addi r3, r1, 0x50
    lwz r5, 0x15c(r30)
    lwz r6, 0x17c(r30)
    bl fn_80444CF8
lbl_fn_8040A32C_00000360:
    lwz r4, lbl_8087EFB4
    addi r3, r1, 0x2c
    addi r5, r1, 0x44
    bl fn_800BFAC8
    lfs f0, lbl_808862C0
    lfs f1, 0x34(r1)
    fcmpo cr0, f0, f1
    cror eq, lt, eq
    bne lbl_fn_8040A32C_00000640
    lfs f0, lbl_808862F8
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_8040A32C_00000640
    addi r3, r30, 0x19c
    bl fn_80450A78
    cmpwi r3, 0x0
    beq lbl_fn_8040A32C_00000404
    lwz r0, 0x288(r30)
    srwi. r0, r0, 31
    beq lbl_fn_8040A32C_000003E4
    lwz r3, 0x1a0(r30)
    li r0, 0x1
    cmpwi r3, 0x5
    beq lbl_fn_8040A32C_000003CC
    cmpwi r3, 0x6
    beq lbl_fn_8040A32C_000003CC
    li r0, 0x0
lbl_fn_8040A32C_000003CC:
    cmpwi r0, 0x0
    bne lbl_fn_8040A32C_000003F0
    addi r3, r30, 0x19c
    bl fn_8044EEC0
    cmpwi r3, 0x0
    bne lbl_fn_8040A32C_000003F0
lbl_fn_8040A32C_000003E4:
    lwz r0, 0x288(r30)
    srwi. r0, r0, 31
    bne lbl_fn_8040A32C_00000404
lbl_fn_8040A32C_000003F0:
    lwz r3, 0x298(r30)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    b lbl_fn_8040A32C_00000414
lbl_fn_8040A32C_00000404:
    lwz r3, 0x294(r30)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
lbl_fn_8040A32C_00000414:
    lfs f31, 0x2c(r1)
    addi r29, r30, 0x294
    lwz r31, lbl_808862BC
    b lbl_fn_8040A32C_00000444
lbl_fn_8040A32C_00000424:
    lwz r3, 0x0(r29)
    cmpwi r3, 0x0
    beq lbl_fn_8040A32C_00000440
    fmr f1, f31
    mr r4, r31
    li r5, 0x0
    bl fn_801F6D7C
lbl_fn_8040A32C_00000440:
    addi r29, r29, 0x4
lbl_fn_8040A32C_00000444:
    lwz r0, 0x290(r30)
    slwi r0, r0, 2
    add r3, r30, r0
    addi r0, r3, 0x294
    cmplw r29, r0
    bne lbl_fn_8040A32C_00000424
    lfs f31, 0x30(r1)
    addi r29, r30, 0x294
    b lbl_fn_8040A32C_00000488
lbl_fn_8040A32C_00000468:
    lwz r3, 0x0(r29)
    cmpwi r3, 0x0
    beq lbl_fn_8040A32C_00000484
    fmr f1, f31
    mr r4, r31
    li r5, 0x1
    bl fn_801F6D7C
lbl_fn_8040A32C_00000484:
    addi r29, r29, 0x4
lbl_fn_8040A32C_00000488:
    lwz r0, 0x290(r30)
    slwi r0, r0, 2
    add r3, r30, r0
    addi r0, r3, 0x294
    cmplw r29, r0
    bne lbl_fn_8040A32C_00000468
    addi r29, r30, 0x294
    b lbl_fn_8040A32C_000004C8
lbl_fn_8040A32C_000004A8:
    lwz r3, 0x0(r29)
    cmpwi r3, 0x0
    beq lbl_fn_8040A32C_000004C4
    fmr f1, f30
    mr r4, r31
    li r5, 0x2
    bl fn_801F6D7C
lbl_fn_8040A32C_000004C4:
    addi r29, r29, 0x4
lbl_fn_8040A32C_000004C8:
    lwz r0, 0x290(r30)
    slwi r0, r0, 2
    add r3, r30, r0
    addi r0, r3, 0x294
    cmplw r29, r0
    bne lbl_fn_8040A32C_000004A8
    addi r29, r30, 0x294
    b lbl_fn_8040A32C_00000508
lbl_fn_8040A32C_000004E8:
    lwz r3, 0x0(r29)
    cmpwi r3, 0x0
    beq lbl_fn_8040A32C_00000504
    fmr f1, f30
    mr r4, r31
    li r5, 0x3
    bl fn_801F6D7C
lbl_fn_8040A32C_00000504:
    addi r29, r29, 0x4
lbl_fn_8040A32C_00000508:
    lwz r0, 0x290(r30)
    slwi r0, r0, 2
    add r3, r30, r0
    addi r0, r3, 0x294
    cmplw r29, r0
    bne lbl_fn_8040A32C_000004E8
    lis r26, lbl_80752A18@ha
    lis r31, lbl_8078D4F0@ha
    addi r26, r26, lbl_80752A18@l
    li r25, 0x0
    addi r31, r31, lbl_8078D4F0@l
lbl_fn_8040A32C_00000534:
    cmpwi r25, 0x0
    bne lbl_fn_8040A32C_00000580
    lwz r29, 0x0(r26)
    addi r28, r30, 0x294
    b lbl_fn_8040A32C_00000564
lbl_fn_8040A32C_00000548:
    lwz r3, 0x0(r28)
    cmpwi r3, 0x0
    beq lbl_fn_8040A32C_00000560
    mr r4, r29
    addi r5, r1, 0x50
    bl fn_801F837C
lbl_fn_8040A32C_00000560:
    addi r28, r28, 0x4
lbl_fn_8040A32C_00000564:
    lwz r0, 0x290(r30)
    slwi r0, r0, 2
    add r3, r30, r0
    addi r0, r3, 0x294
    cmplw r28, r0
    bne lbl_fn_8040A32C_00000548
    b lbl_fn_8040A32C_000005C4
lbl_fn_8040A32C_00000580:
    lwz r28, 0x0(r26)
    addi r29, r31, 0xa
    addi r27, r30, 0x294
    b lbl_fn_8040A32C_000005AC
lbl_fn_8040A32C_00000590:
    lwz r3, 0x0(r27)
    cmpwi r3, 0x0
    beq lbl_fn_8040A32C_000005A8
    mr r4, r28
    mr r5, r29
    bl fn_801F837C
lbl_fn_8040A32C_000005A8:
    addi r27, r27, 0x4
lbl_fn_8040A32C_000005AC:
    lwz r0, 0x290(r30)
    slwi r0, r0, 2
    add r3, r30, r0
    addi r0, r3, 0x294
    cmplw r27, r0
    bne lbl_fn_8040A32C_00000590
lbl_fn_8040A32C_000005C4:
    addi r25, r25, 0x1
    addi r26, r26, 0x4
    cmplwi r25, 0x3
    blt lbl_fn_8040A32C_00000534
    lis r29, lbl_80752A40@ha
    lfs f31, lbl_8088630C
    addi r29, r29, lbl_80752A40@l
    li r25, 0x0
lbl_fn_8040A32C_000005E4:
    lfs f0, 0x164(r30)
    addi r28, r30, 0x294
    lwz r27, 0x0(r29)
    fmuls f30, f31, f0
    b lbl_fn_8040A32C_00000618
lbl_fn_8040A32C_000005F8:
    lwz r3, 0x0(r28)
    cmpwi r3, 0x0
    beq lbl_fn_8040A32C_00000614
    fmr f1, f30
    mr r4, r27
    li r5, 0x0
    bl fn_801F791C
lbl_fn_8040A32C_00000614:
    addi r28, r28, 0x4
lbl_fn_8040A32C_00000618:
    lwz r0, 0x290(r30)
    slwi r0, r0, 2
    add r3, r30, r0
    addi r0, r3, 0x294
    cmplw r28, r0
    bne lbl_fn_8040A32C_000005F8
    addi r25, r25, 0x1
    addi r29, r29, 0x4
    cmplwi r25, 0x3
    blt lbl_fn_8040A32C_000005E4
lbl_fn_8040A32C_00000640:
    addi r11, r1, 0xf0
    psq_l f31, 0x108(r1), 0, 0
    lfd f31, 0x100(r1)
    psq_l f30, 0xf8(r1), 0, 0
    lfd f30, 0xf0(r1)
    bl _restgpr_25
    lwz r0, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_8040A994(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    addi r31, r3, 0xf4
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    mr r29, r3
lbl_fn_8040A994_0000068C:
    mr r3, r31
    bl fn_80237874
    cmpwi r3, 0x0
    beq lbl_fn_8040A994_000006A4
    li r3, 0x1
    b lbl_fn_8040A994_000006C8
lbl_fn_8040A994_000006A4:
    addi r30, r30, 0x1
    addi r31, r31, 0xc
    cmpwi r30, 0x7
    blt lbl_fn_8040A994_0000068C
    addi r3, r29, 0x148
    bl fn_80237874
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
lbl_fn_8040A994_000006C8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8040AA10(void)
{
    nofralloc
    stwu r1, -0x650(r1)
    mflr r0
    stw r0, 0x654(r1)
    stw r31, 0x64c(r1)
    stw r30, 0x648(r1)
    stw r29, 0x644(r1)
    stw r28, 0x640(r1)
    mr r28, r3
    addi r3, r3, 0x60
    bl fn_8047059C
    mr r30, r3
    addi r3, r28, 0x60
    bl fn_80470580
    lis r4, lbl_807774D8@ha
    li r0, 0x0
    addi r4, r4, lbl_807774D8@l
    stw r4, 0x8(r1)
    mr r31, r3
    addi r3, r1, 0x18
    stw r0, 0xc(r1)
    li r4, 0x0
    li r5, 0x400
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x638(r1)
    bl memset
    addi r3, r1, 0x618
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x8(r1)
    mr r4, r31
    mr r5, r30
    addi r3, r1, 0x8
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807774B8@ha
    addi r3, r1, 0x8
    addi r4, r4, lbl_807774B8@l
    stw r4, 0x8(r1)
    la r4, lbl_8087D710
    bl fn_8005BCE8
    lis r31, lbl_80752A5C@ha
    addi r30, r28, 0xf4
    addi r31, r31, lbl_80752A5C@l
lbl_fn_8040AA10_0000079C:
    addi r3, r1, 0x8
    bl fn_8005B9CC
    lbz r0, 0x0(r3)
    mr r29, r3
    cmpwi r0, 0x3b
    beq lbl_fn_8040AA10_00000808
    addi r4, r31, 0x40
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8040AA10_000007E0
    addi r3, r1, 0x8
    bl fn_8005B9CC
    mr r4, r3
    mr r3, r30
    bl fn_8023780C
    addi r30, r30, 0xc
    b lbl_fn_8040AA10_00000808
lbl_fn_8040AA10_000007E0:
    mr r3, r29
    addi r4, r31, 0x44
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8040AA10_00000808
    addi r3, r1, 0x8
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r28, 0x148
    bl fn_8023780C
lbl_fn_8040AA10_00000808:
    addi r3, r1, 0x8
    bl fn_8005BBF8
    cmpwi r3, 0x0
    bne lbl_fn_8040AA10_0000079C
    lwz r0, 0x654(r1)
    lwz r31, 0x64c(r1)
    lwz r30, 0x648(r1)
    lwz r29, 0x644(r1)
    lwz r28, 0x640(r1)
    mtlr r0
    addi r1, r1, 0x650
    blr
}

asm void fn_8040AB64(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    addi r11, r1, 0x90
    bl _savegpr_27
    cmpwi r4, 0x0
    mr r28, r3
    mr r29, r4
    bne lbl_fn_8040AB64_00000864
    li r3, 0x0
    b lbl_fn_8040AB64_00000EB4
lbl_fn_8040AB64_00000864:
    lwz r5, 0x0(r4)
    subi r0, r5, 0x3
    cmplwi r0, 0x1
    ble lbl_fn_8040AB64_00000888
    cmpwi r5, 0x5
    beq lbl_fn_8040AB64_00000D10
    cmpwi r5, 0x6
    beq lbl_fn_8040AB64_00000DAC
    b lbl_fn_8040AB64_00000DE8
lbl_fn_8040AB64_00000888:
    lfs f0, lbl_808862F8
    li r31, 0x0
    stfs f0, 0x16c(r3)
    stfs f0, 0x170(r3)
    stfs f0, 0x174(r3)
    stfs f0, 0x178(r3)
    stw r31, 0x160(r3)
    lwz r0, 0xc(r4)
    cmpwi r0, 0x0
    bne lbl_fn_8040AB64_000008F4
    lwz r3, lbl_8087F4F0
    cmpwi r3, 0x0
    beq lbl_fn_8040AB64_000008C4
    bl fn_8044909C
    b lbl_fn_8040AB64_000008C8
lbl_fn_8040AB64_000008C4:
    li r3, 0x0
lbl_fn_8040AB64_000008C8:
    lwz r5, 0x154(r28)
    mr r6, r3
    addi r3, r28, 0x158
    addi r4, r28, 0x15c
    bl fn_8021E4E4
    cmpwi r3, 0x0
    bne lbl_fn_8040AB64_0000090C
    li r0, 0x0
    stw r0, 0x158(r28)
    stw r0, 0x15c(r28)
    b lbl_fn_8040AB64_0000090C
lbl_fn_8040AB64_000008F4:
    lwz r5, 0x4(r4)
    li r0, 0x0
    stw r5, 0x158(r3)
    lwz r4, 0x8(r4)
    stw r4, 0x15c(r3)
    stw r0, 0x154(r3)
lbl_fn_8040AB64_0000090C:
    lwz r3, lbl_8087F4F0
    lwz r30, 0x158(r28)
    cmpwi r3, 0x0
    beq lbl_fn_8040AB64_0000092C
    addi r4, r28, 0x158
    addi r5, r28, 0x15c
    li r6, 0x0
    bl fn_80445130
lbl_fn_8040AB64_0000092C:
    lwz r3, 0x158(r28)
    bl fn_80211480
    cmpwi r3, 0x0
    stw r3, 0x160(r28)
    beq lbl_fn_8040AB64_000009F8
    lwz r3, 0x158(r28)
    bl fn_8040B394
    lfs f3, lbl_808862F8
    li r31, 0x1
    lfs f0, lbl_80886310
    stw r3, 0x168(r28)
    lwz r3, 0x158(r28)
    stfs f3, 0x16c(r28)
    stfs f3, 0x170(r28)
    stfs f3, 0x174(r28)
    stfs f3, 0x178(r28)
    stfs f0, 0x188(r28)
    stw r31, 0x17c(r28)
    bl fn_80206B9C
    cmpwi r3, 0x0
    beq lbl_fn_8040AB64_000009CC
    li r0, 0x0
    stw r0, 0x17c(r28)
    lwz r4, 0x158(r28)
    lwz r3, lbl_8087F4F0
    bl fn_80448F9C
    mr r27, r3
    bl fn_80680CF8
    lis r4, 0x51ec
    subi r0, r4, 0x7ae1
    mulhw r0, r0, r3
    srawi r0, r0, 5
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x64
    subf r0, r0, r3
    cmpw r27, r0
    ble lbl_fn_8040AB64_000009F4
    stw r31, 0x17c(r28)
    b lbl_fn_8040AB64_000009F4
lbl_fn_8040AB64_000009CC:
    lwz r3, 0x158(r28)
    bl fn_8020EF04
    cmpwi r3, 0x0
    bne lbl_fn_8040AB64_000009F4
    lwz r0, 0x158(r28)
    cmpwi r0, 0x2714
    bne lbl_fn_8040AB64_000009F4
    lwz r3, 0x10(r29)
    bl fn_80444EFC
    stw r3, 0x15c(r28)
lbl_fn_8040AB64_000009F4:
    li r31, 0x1
lbl_fn_8040AB64_000009F8:
    lwz r0, 0xc(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8040AB64_00000A48
    lwz r3, 0x10(r29)
    cmpwi r3, 0x0
    beq lbl_fn_8040AB64_00000A88
    lfs f2, 0x530(r3)
    psq_l f1, 0x528(r3), 0, 0
    psq_st f1, 0x6c(r28), 0, 0
    lfs f0, lbl_808862D0
    lfs f3, 0x70(r28)
    stfs f2, 0x74(r28)
    fadds f0, f3, f0
    stfs f0, 0x70(r28)
    lwz r3, 0x10(r29)
    psq_l f1, 0x534(r3), 0, 0
    lfs f2, 0x53c(r3)
    stfs f2, 0x80(r28)
    psq_st f1, 0x78(r28), 0, 0
    b lbl_fn_8040AB64_00000A88
lbl_fn_8040AB64_00000A48:
    lfs f2, 0x1c(r29)
    lis r3, lbl_807C7030@ha
    psq_l f1, 0x14(r29), 0, 0
    addi r3, r3, lbl_807C7030@l
    psq_st f1, 0x6c(r28), 0, 0
    li r0, 0x1
    lfs f0, lbl_808862D0
    lfs f3, 0x70(r28)
    stfs f2, 0x74(r28)
    fadds f0, f3, f0
    stfs f0, 0x70(r28)
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x8(r3)
    stfs f2, 0x80(r28)
    psq_st f1, 0x78(r28), 0, 0
    stw r0, 0x17c(r28)
lbl_fn_8040AB64_00000A88:
    lwz r0, 0x180(r28)
    cmpwi r0, 0x0
    beq lbl_fn_8040AB64_00000B38
    lfs f6, lbl_808862C0
    addi r4, r1, 0x4c
    lfs f3, 0x74(r28)
    addi r5, r1, 0x40
    lfs f5, lbl_80886314
    addi r6, r1, 0x28
    lfs f4, 0x70(r28)
    fadds f7, f3, f6
    lfs f3, 0x6c(r28)
    lis r7, 0x8000
    lfs f0, lbl_80886308
    fadds f8, f4, f5
    fadds f3, f3, f6
    fadds f4, f4, f0
    stfs f6, 0x1c(r1)
    lwz r3, lbl_8087EE98
    li r8, 0x0
    stfs f5, 0x20(r1)
    li r9, 0x0
    stfs f6, 0x24(r1)
    stfs f3, 0x28(r1)
    stfs f8, 0x2c(r1)
    stfs f7, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f0, 0x38(r1)
    stfs f6, 0x3c(r1)
    stfs f3, 0x40(r1)
    stfs f4, 0x44(r1)
    stfs f7, 0x48(r1)
    bl fn_8004ECC0
    cmpwi r3, 0x0
    beq lbl_fn_8040AB64_00000B38
    addi r3, r1, 0x4c
    lfs f2, 0x54(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x6c(r28), 0, 0
    lfs f0, lbl_808862D0
    lfs f3, 0x70(r28)
    stfs f2, 0x74(r28)
    fadds f0, f3, f0
    stfs f0, 0x70(r28)
lbl_fn_8040AB64_00000B38:
    li r0, 0x0
    stw r0, 0x190(r28)
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    beq lbl_fn_8040AB64_00000B94
    lwz r3, 0x160(r28)
    cmpwi r3, 0x0
    beq lbl_fn_8040AB64_00000B94
    lwz r3, 0x4(r3)
    bl fn_80206B9C
    cmpwi r3, 0x0
    beq lbl_fn_8040AB64_00000B94
    li r27, 0x1
    stw r27, 0x17c(r28)
    lwz r3, 0x160(r28)
    lwz r3, 0x4(r3)
    bl fn_80206C50
    cmpwi r3, 0x0
    beq lbl_fn_8040AB64_00000B94
    lwz r0, 0x78(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8040AB64_00000B94
    stw r27, 0x190(r28)
lbl_fn_8040AB64_00000B94:
    cmpwi r31, 0x0
    beq lbl_fn_8040AB64_00000CC8
    lwz r3, 0x154(r28)
    cmpwi r3, 0x0
    ble lbl_fn_8040AB64_00000BC4
    lwz r4, 0x158(r28)
    li r5, 0x0
    bl fn_80450B84
    lwz r0, 0x288(r28)
    rlwimi r0, r3, 31, 0, 0
    stw r0, 0x288(r28)
    b lbl_fn_8040AB64_00000BD8
lbl_fn_8040AB64_00000BC4:
    mr r3, r30
    bl fn_80450B60
    lwz r0, 0x288(r28)
    rlwimi r0, r3, 31, 0, 0
    stw r0, 0x288(r28)
lbl_fn_8040AB64_00000BD8:
    lfs f3, 0x74(r28)
    li r0, 0xff
    lfs f0, 0x18c(r28)
    addi r3, r28, 0x19c
    lwz r7, 0x0(r29)
    addi r4, r1, 0x10
    fadds f7, f3, f0
    lfs f6, lbl_808862C0
    lfs f5, 0x70(r28)
    li r5, 0x19
    lfs f4, 0x188(r28)
    li r6, 0x19
    lfs f3, 0x6c(r28)
    fadds f4, f5, f4
    lfs f0, 0x184(r28)
    stw r7, 0x54(r28)
    fadds f0, f3, f0
    stb r0, 0x29c(r28)
    stfs f6, 0x164(r28)
    stfs f0, 0x10(r1)
    stfs f4, 0x14(r1)
    stfs f7, 0x18(r1)
    lwz r7, 0x160(r28)
    lwz r8, 0x15c(r28)
    lwz r9, 0x17c(r28)
    lwz r10, 0x154(r28)
    bl fn_8044E418
    lwz r3, lbl_8087F3C0
    mr r4, r28
    li r5, 0x0
    bl fn_80239D58
    cmpwi r3, 0x0
    bne lbl_fn_8040AB64_00000DE8
    lwz r5, lbl_8087F3C0
    li r30, 0x1
    mr r3, r28
    li r4, 0x0
    stw r30, 0xb8(r5)
    bl fn_80232B7C
    lwz r4, 0x168(r28)
    lis r8, lbl_807C7030@ha
    lwz r3, lbl_8087F3C0
    li r0, -0x1
    mulli r4, r4, 0xc
    lfs f1, lbl_808862F8
    stw r0, 0x8(r1)
    addi r7, r28, 0x6c
    addi r8, r8, lbl_807C7030@l
    add r4, r28, r4
    stw r30, 0xc(r1)
    addi r4, r4, 0xf4
    addi r9, r28, 0x16c
    li r5, 0x0
    li r6, 0x0
    li r10, -0x1
    bl fn_8023A8B4
    lwz r3, lbl_8087F3C0
    li r0, 0x0
    stw r0, 0xb8(r3)
    b lbl_fn_8040AB64_00000DE8
lbl_fn_8040AB64_00000CC8:
    lfs f0, lbl_808862C0
    li r0, 0x0
    li r3, 0x6
    stw r3, 0x58(r1)
    mr r3, r28
    addi r4, r1, 0x58
    stw r0, 0x5c(r1)
    stw r0, 0x60(r1)
    stw r0, 0x64(r1)
    stw r0, 0x68(r1)
    stfs f0, 0x6c(r1)
    stfs f0, 0x70(r1)
    stfs f0, 0x74(r1)
    lwz r12, 0x0(r28)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    b lbl_fn_8040AB64_00000DE8
lbl_fn_8040AB64_00000D10:
    lfs f0, lbl_808862C0
    mr r4, r28
    stw r5, 0x54(r3)
    li r5, 0x0
    stfs f0, 0x164(r3)
    lwz r3, lbl_8087F3C0
    bl fn_80239D58
    cmpwi r3, 0x0
    beq lbl_fn_8040AB64_00000D48
    lwz r3, lbl_8087F3C0
    mr r4, r28
    li r5, 0x0
    li r6, 0x0
    bl fn_80239DAC
lbl_fn_8040AB64_00000D48:
    lwz r0, 0xc(r29)
    cmpwi r0, 0x1
    bne lbl_fn_8040AB64_00000DE8
    lwz r0, 0x288(r28)
    mr r3, r28
    li r4, 0x1
    rlwinm r0, r0, 0, 6, 4
    stw r0, 0x288(r28)
    bl fn_80232B7C
    lwz r3, lbl_8087F3C0
    li r0, -0x1
    lis r8, lbl_807C7030@ha
    lfs f1, lbl_808862F8
    stw r0, 0x8(r1)
    li r0, 0x1
    addi r4, r28, 0x148
    addi r7, r28, 0x6c
    stw r0, 0xc(r1)
    addi r8, r8, lbl_807C7030@l
    addi r9, r28, 0x16c
    li r5, 0x0
    li r6, 0x0
    li r10, -0x1
    bl fn_8023A8B4
    b lbl_fn_8040AB64_00000DE8
lbl_fn_8040AB64_00000DAC:
    lwz r3, lbl_8087F3C0
    mr r4, r28
    li r5, 0x0
    bl fn_80239D58
    cmpwi r3, 0x0
    beq lbl_fn_8040AB64_00000DD8
    lwz r3, lbl_8087F3C0
    mr r4, r28
    li r5, 0x0
    li r6, 0x0
    bl fn_80239DAC
lbl_fn_8040AB64_00000DD8:
    lfs f0, lbl_808862C0
    stfs f0, 0x164(r28)
    lwz r0, 0x0(r29)
    stw r0, 0x54(r28)
lbl_fn_8040AB64_00000DE8:
    lwz r0, 0x158(r28)
    stw r0, 0x4(r29)
    lwz r0, 0x15c(r28)
    stw r0, 0x8(r29)
    psq_l f1, 0x6c(r28), 0, 0
    lfs f2, 0x74(r28)
    stfs f2, 0x1c(r29)
    psq_st f1, 0x14(r29), 0, 0
    lbz r0, lbl_8087EE74
    extsb. r0, r0
    bne lbl_fn_8040AB64_00000E48
    lis r3, lbl_807C6BB8@ha
    li r0, 0x0
    stwu r0, lbl_807C6BB8@l(r3)
    lis r4, fn_8003EFB0@ha
    li r30, 0x1
    lis r5, lbl_807C8888@ha
    stw r0, 0x4(r3)
    addi r4, r4, fn_8003EFB0@l
    addi r5, r5, lbl_807C8888@l
    stw r0, 0x8(r3)
    stw r30, 0xc(r3)
    bl __register_global_object
    stb r30, lbl_8087EE74
lbl_fn_8040AB64_00000E48:
    lis r27, lbl_807C6BB8@ha
    addi r27, r27, lbl_807C6BB8@l
    lwz r0, 0xc(r27)
    cmpwi r0, 0x0
    beq lbl_fn_8040AB64_00000EB0
    li r31, 0x0
    li r30, 0x0
    b lbl_fn_8040AB64_00000EA4
lbl_fn_8040AB64_00000E68:
    lwz r0, 0x0(r27)
    add r3, r0, r30
    lwzx r0, r30, r0
    cmpwi r0, -0x1
    beq lbl_fn_8040AB64_00000E84
    cmpwi r0, 0xb
    bne lbl_fn_8040AB64_00000E9C
lbl_fn_8040AB64_00000E84:
    lwz r12, 0x4(r3)
    mr r4, r28
    mr r5, r29
    li r3, 0xb
    mtctr r12
    bctrl
lbl_fn_8040AB64_00000E9C:
    addi r31, r31, 0x1
    addi r30, r30, 0x8
lbl_fn_8040AB64_00000EA4:
    lwz r0, 0x4(r27)
    cmpw r31, r0
    blt lbl_fn_8040AB64_00000E68
lbl_fn_8040AB64_00000EB0:
    lwz r3, 0x54(r28)
lbl_fn_8040AB64_00000EB4:
    addi r11, r1, 0x90
    bl _restgpr_27
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_8040B1F8(void)
{
    nofralloc
    stw r4, 0x154(r3)
    blr
}

asm void fn_8040B200(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    mr r29, r3
    lwz r4, 0x160(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8040B200_0000104C
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_8040B200_00000F10
    lwz r30, 0x48(r3)
    b lbl_fn_8040B200_00000F14
lbl_fn_8040B200_00000F10:
    li r30, 0x0
lbl_fn_8040B200_00000F14:
    lwz r3, 0x4(r4)
    bl fn_80206C50
    mr r31, r3
    lwz r3, lbl_8087F3C0
    mr r4, r29
    li r5, 0x0
    li r6, 0x0
    bl fn_80239DAC
    lwz r4, lbl_808862B8
    addi r3, r1, 0x10
    lfs f1, lbl_808862F8
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    mr r3, r29
    li r4, 0x1
    bl fn_80232B7C
    li r0, -0x1
    stw r0, 0x8(r1)
    li r0, 0x1
    lis r8, lbl_807C7030@ha
    stw r0, 0xc(r1)
    addi r4, r29, 0x148
    lfs f1, lbl_808862F8
    addi r7, r29, 0x6c
    lwz r3, lbl_8087F3C0
    addi r8, r8, lbl_807C7030@l
    addi r9, r29, 0x16c
    li r5, 0x0
    li r6, 0x0
    li r10, -0x1
    bl fn_8023A8B4
    addi r3, r29, 0x19c
    bl fn_80450778
    lwz r0, 0x190(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8040B200_00000FD8
    cmpwi r30, 0x0
    beq lbl_fn_8040B200_00000FD8
    cmpwi r31, 0x0
    beq lbl_fn_8040B200_00000FD8
    lwz r4, 0x78(r31)
    mr r3, r30
    lwz r5, 0x80(r31)
    li r6, 0x1
    bl fn_8014F698
lbl_fn_8040B200_00000FD8:
    lwz r3, lbl_8087F610
    cmpwi r3, 0x0
    beq lbl_fn_8040B200_0000104C
    lwz r4, 0x160(r29)
    lwz r0, 0x4(r4)
    cmpwi r0, 0x44d
    beq lbl_fn_8040B200_00001010
    cmpwi r0, 0x44e
    beq lbl_fn_8040B200_00001020
    cmpwi r0, 0x44f
    beq lbl_fn_8040B200_00001030
    cmpwi r0, 0x450
    beq lbl_fn_8040B200_00001040
    b lbl_fn_8040B200_0000104C
lbl_fn_8040B200_00001010:
    mr r4, r30
    li r5, 0x1
    bl fn_804DB1C8
    b lbl_fn_8040B200_0000104C
lbl_fn_8040B200_00001020:
    mr r4, r30
    li r5, 0x3
    bl fn_804DB1C8
    b lbl_fn_8040B200_0000104C
lbl_fn_8040B200_00001030:
    mr r4, r30
    li r5, 0x5
    bl fn_804DB1C8
    b lbl_fn_8040B200_0000104C
lbl_fn_8040B200_00001040:
    mr r4, r30
    li r5, 0xa
    bl fn_804DB1C8
lbl_fn_8040B200_0000104C:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8040B394(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    li r30, 0x6
    stw r29, 0x14(r1)
    mr r29, r3
    ble lbl_fn_8040B394_0000109C
    bl fn_80211480
    mr r31, r3
    b lbl_fn_8040B394_000010A0
lbl_fn_8040B394_0000109C:
    li r31, 0x0
lbl_fn_8040B394_000010A0:
    mr r3, r29
    bl fn_80206B9C
    cmpwi r3, 0x0
    beq lbl_fn_8040B394_000010DC
    mr r3, r29
    bl fn_80206C50
    cmpwi r3, 0x0
    beq lbl_fn_8040B394_00001150
    lwz r0, 0x78(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8040B394_000010D4
    li r30, 0x0
    b lbl_fn_8040B394_00001150
lbl_fn_8040B394_000010D4:
    li r30, 0x1
    b lbl_fn_8040B394_00001150
lbl_fn_8040B394_000010DC:
    mr r3, r29
    bl fn_8020EF04
    cmpwi r3, 0x0
    beq lbl_fn_8040B394_00001120
    mr r3, r29
    bl fn_8020EFEC
    cmpwi r3, 0x0
    beq lbl_fn_8040B394_00001150
    lwz r0, 0x78(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8040B394_00001110
    cmpwi r0, 0x2
    bne lbl_fn_8040B394_00001118
lbl_fn_8040B394_00001110:
    li r30, 0x2
    b lbl_fn_8040B394_00001150
lbl_fn_8040B394_00001118:
    li r30, 0x3
    b lbl_fn_8040B394_00001150
lbl_fn_8040B394_00001120:
    cmpwi r29, 0x2714
    beq lbl_fn_8040B394_00001130
    cmpwi r29, 0x2719
    bne lbl_fn_8040B394_00001138
lbl_fn_8040B394_00001130:
    li r30, 0x5
    b lbl_fn_8040B394_00001150
lbl_fn_8040B394_00001138:
    cmpwi r31, 0x0
    beq lbl_fn_8040B394_00001150
    lha r0, 0xbc(r31)
    cmpwi r0, 0x5
    bne lbl_fn_8040B394_00001150
    li r30, 0x4
lbl_fn_8040B394_00001150:
    cmpwi r31, 0x0
    beq lbl_fn_8040B394_00001168
    lwz r0, 0x4(r31)
    cmpwi r0, 0x19b
    bne lbl_fn_8040B394_00001168
    li r30, 0x5
lbl_fn_8040B394_00001168:
    mr r3, r30
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8040B4B4(void)
{
    nofralloc
    blr
}

asm void fn_8040B4B8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_fn_8040B4B8_00001214
    li r4, -0x1
    addi r3, r3, 0x19c
    bl fn_8044D884
    addic. r31, r29, 0x148
    beq lbl_fn_8040B4B8_000011E0
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_8040B4B8_000011E0
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8040B4B8_000011E0:
    lis r4, fn_800EF73C@ha
    addi r3, r29, 0xf4
    addi r4, r4, fn_800EF73C@l
    li r5, 0xc
    li r6, 0x7
    bl fn_806959D8
    mr r3, r29
    li r4, 0x0
    bl fn_803EC69C
    cmpwi r30, 0x0
    ble lbl_fn_8040B4B8_00001214
    mr r3, r29
    bl dtor_80084684
lbl_fn_8040B4B8_00001214:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8040B560(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x100
    li r5, 0x20
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    addi r3, r3, 0x4
    bl fn_80096E94
    lfs f0, lbl_80886318
    li r4, 0x0
    li r0, 0x3
    stfs f0, 0x3d4(r31)
    mr r3, r31
    stfs f0, 0x3d8(r31)
    stfs f0, 0x3dc(r31)
    stfs f0, 0x3e0(r31)
    stfs f0, 0x3e4(r31)
    stfs f0, 0x3e8(r31)
    stfs f0, 0x3ec(r31)
    stfs f0, 0x3f0(r31)
    stfs f0, 0x3f4(r31)
    stfs f0, 0x3f8(r31)
    stfs f0, 0x3fc(r31)
    stfs f0, 0x400(r31)
    stfs f0, 0x404(r31)
    stfs f0, 0x408(r31)
    stfs f0, 0x40c(r31)
    stfs f0, 0x410(r31)
    stfs f0, 0x414(r31)
    stw r4, 0x418(r31)
    stw r4, 0x41c(r31)
    stw r4, 0x420(r31)
    stw r4, 0x424(r31)
    stw r0, 0x428(r31)
    stw r4, 0x42c(r31)
    stb r4, 0x430(r31)
    stb r4, 0x431(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8040B60C(void)
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
    beq lbl_fn_8040B60C_00001320
    li r4, -0x1
    addi r3, r3, 0x4
    bl fn_800971D4
    cmpwi r31, 0x0
    ble lbl_fn_8040B60C_00001320
    mr r3, r30
    bl dtor_80084684
lbl_fn_8040B60C_00001320:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8040B668(void)
{
    nofralloc
    stwu r1, -0x230(r1)
    mflr r0
    stw r0, 0x234(r1)
    stfd f31, 0x220(r1)
    psq_st f31, 0x228(r1), 0, 0
    stfd f30, 0x210(r1)
    psq_st f30, 0x218(r1), 0, 0
    stw r31, 0x20c(r1)
    mr r31, r3
    stw r30, 0x208(r1)
    lwz r0, 0x424(r3)
    cmpwi r0, 0x1
    beq lbl_fn_8040B668_0000138C
    cmpwi r0, 0x2
    beq lbl_fn_8040B668_00001394
    cmpwi r0, 0x3
    beq lbl_fn_8040B668_000013D4
    cmpwi r0, 0x4
    beq lbl_fn_8040B668_0000140C
    b lbl_fn_8040B668_00001440
lbl_fn_8040B668_0000138C:
    bl fn_8040BE88
    b lbl_fn_8040B668_00001440
lbl_fn_8040B668_00001394:
    lfs f1, lbl_80886318
    li r4, 0x0
    lfs f2, lbl_80886320
    li r5, 0x0
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    addi r3, r3, 0x4
    bl fn_80097C08
    lfs f0, lbl_80886324
    li r0, 0x0
    stfs f0, 0x23c(r31)
    mr r3, r31
    stw r0, 0x42c(r31)
    bl fn_8040C058
    b lbl_fn_8040B668_00001440
lbl_fn_8040B668_000013D4:
    lfs f1, lbl_80886318
    li r4, 0x0
    lfs f2, lbl_80886320
    li r5, 0x0
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    addi r3, r3, 0x4
    bl fn_80097C08
    lfs f0, lbl_80886328
    mr r3, r31
    stfs f0, 0x23c(r31)
    bl fn_8040C058
    b lbl_fn_8040B668_00001440
lbl_fn_8040B668_0000140C:
    lfs f1, lbl_80886318
    li r4, 0x0
    lfs f2, lbl_80886320
    li r5, 0x2
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    addi r3, r3, 0x4
    bl fn_80097C08
    lfs f0, lbl_8088632C
    mr r3, r31
    stfs f0, 0x23c(r31)
    bl fn_8040C610
lbl_fn_8040B668_00001440:
    lwz r0, 0x8(r31)
    addi r30, r1, 0x1d8
    lfs f7, lbl_80886318
    ori r0, r0, 0x40
    stw r0, 0x8(r31)
    lfs f0, lbl_8088632C
    stfs f7, 0x204(r1)
    stfs f7, 0x1fc(r1)
    stfs f7, 0x1f8(r1)
    stfs f7, 0x1f4(r1)
    stfs f7, 0x1f0(r1)
    stfs f7, 0x1e8(r1)
    stfs f7, 0x1e4(r1)
    stfs f7, 0x1e0(r1)
    stfs f7, 0x1dc(r1)
    stfs f0, 0x200(r1)
    stfs f0, 0x1ec(r1)
    stfs f0, 0x1d8(r1)
    lfs f1, 0x3e8(r31)
    fcmpu cr0, f7, f1
    beq lbl_fn_8040B668_000014E4
    addi r3, r1, 0xb8
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0xb8
    addi r5, r1, 0x88
    bl fn_805F89F0
    addi r3, r1, 0x88
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
lbl_fn_8040B668_000014E4:
    lfs f0, lbl_80886318
    lfs f1, 0x3e4(r31)
    fcmpu cr0, f0, f1
    beq lbl_fn_8040B668_00001544
    addi r3, r1, 0x118
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x118
    addi r5, r1, 0xe8
    bl fn_805F89F0
    addi r3, r1, 0xe8
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
lbl_fn_8040B668_00001544:
    lfs f0, lbl_80886318
    lfs f1, 0x3e0(r31)
    fcmpu cr0, f0, f1
    beq lbl_fn_8040B668_000015A4
    addi r3, r1, 0x178
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x178
    addi r5, r1, 0x148
    bl fn_805F89F0
    addi r3, r1, 0x148
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
lbl_fn_8040B668_000015A4:
    lfs f8, 0x3dc(r31)
    addi r3, r31, 0x4
    lfs f7, 0x3d8(r31)
    lfs f0, 0x3d4(r31)
    stfs f0, 0x1e4(r1)
    stfs f7, 0x1f4(r1)
    stfs f8, 0x204(r1)
    bl fn_80092A4C
    lwz r4, lbl_8087EFB4
    addi r3, r1, 0x68
    lfs f0, 0x3dc(r31)
    li r30, 0x1
    lfs f7, 0x114(r4)
    lfs f9, 0x110(r4)
    fsubs f10, f7, f0
    lfs f8, 0x3d8(r31)
    lfs f7, 0x10c(r4)
    lfs f0, 0x3d4(r31)
    fsubs f8, f9, f8
    fsubs f0, f7, f0
    stfs f8, 0x6c(r1)
    stfs f0, 0x68(r1)
    stfs f10, 0x70(r1)
    bl fn_805F9920
    lwz r3, lbl_8087EFA8
    lfs f0, 0x21c(r3)
    fmuls f0, f0, f0
    fcmpo cr0, f1, f0
    ble lbl_fn_8040B668_00001650
    lfs f0, 0x218(r3)
    fmuls f0, f0, f0
    fcmpo cr0, f1, f0
    ble lbl_fn_8040B668_00001630
    li r30, 0x0
    b lbl_fn_8040B668_00001650
lbl_fn_8040B668_00001630:
    lwz r0, 0x220(r3)
    lwz r4, 0x418(r31)
    slwi r3, r0, 1
    divw r0, r4, r3
    mullw r0, r0, r3
    subf. r0, r0, r4
    beq lbl_fn_8040B668_00001650
    li r30, 0x0
lbl_fn_8040B668_00001650:
    cmpwi r30, 0x0
    bne lbl_fn_8040B668_00001664
    lwz r0, 0x424(r31)
    cmpwi r0, 0x4
    bne lbl_fn_8040B668_000017B0
lbl_fn_8040B668_00001664:
    addi r4, r1, 0x1d8
    addi r3, r1, 0x44
    psq_l f1, 0x0(r4), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_st f6, 0x34(r31), 0, 0
    psq_st f1, 0xc(r31), 0, 0
    psq_st f2, 0x14(r31), 0, 0
    psq_st f3, 0x1c(r31), 0, 0
    psq_st f4, 0x24(r31), 0, 0
    psq_st f5, 0x2c(r31), 0, 0
    lfs f8, 0x200(r1)
    lfs f7, 0x1f0(r1)
    lfs f0, 0x1e0(r1)
    stfs f0, 0x44(r1)
    stfs f7, 0x48(r1)
    stfs f8, 0x4c(r1)
    bl fn_805F9940
    lfs f8, 0x1fc(r1)
    fmr f31, f1
    lfs f7, 0x1ec(r1)
    addi r3, r1, 0x50
    lfs f0, 0x1dc(r1)
    stfs f0, 0x50(r1)
    stfs f7, 0x54(r1)
    stfs f8, 0x58(r1)
    bl fn_805F9940
    lfs f8, 0x1f8(r1)
    fmr f30, f1
    lfs f7, 0x1e8(r1)
    addi r3, r1, 0x5c
    lfs f0, 0x1d8(r1)
    stfs f0, 0x5c(r1)
    stfs f7, 0x60(r1)
    stfs f8, 0x64(r1)
    bl fn_805F9940
    frsp f7, f30
    stfs f1, 0x38(r1)
    frsp f0, f31
    stfs f30, 0x3c(r1)
    fcmpo cr0, f7, f0
    stfs f31, 0x40(r1)
    ble lbl_fn_8040B668_00001720
    b lbl_fn_8040B668_00001724
lbl_fn_8040B668_00001720:
    fmr f7, f0
lbl_fn_8040B668_00001724:
    lfs f8, 0x38(r1)
    fcmpo cr0, f8, f7
    ble lbl_fn_8040B668_00001734
    b lbl_fn_8040B668_0000174C
lbl_fn_8040B668_00001734:
    lfs f8, 0x3c(r1)
    lfs f0, 0x40(r1)
    fcmpo cr0, f8, f0
    ble lbl_fn_8040B668_00001748
    b lbl_fn_8040B668_0000174C
lbl_fn_8040B668_00001748:
    fmr f8, f0
lbl_fn_8040B668_0000174C:
    stfs f8, 0x58(r31)
    addi r3, r31, 0x4
    li r4, 0x1
    bl fn_80097E80
    li r0, 0x0
    stw r0, 0x74(r1)
    addi r3, r31, 0x4
    addi r4, r1, 0x74
    bl fn_8000D430
    addic. r3, r1, 0x74
    beq lbl_fn_8040B668_000018E4
    lwz r4, 0x74(r1)
    cmpwi r4, 0x0
    beq lbl_fn_8040B668_000018E4
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_8040B668_000017A4
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8040B668_000017A4:
    li r0, 0x0
    stw r0, 0x74(r1)
    b lbl_fn_8040B668_000018E4
lbl_fn_8040B668_000017B0:
    psq_l f1, 0xc(r31), 0, 0
    addi r3, r1, 0x1a8
    psq_l f2, 0x14(r31), 0, 0
    mr r4, r3
    psq_l f3, 0x1c(r31), 0, 0
    psq_l f4, 0x24(r31), 0, 0
    psq_l f5, 0x2c(r31), 0, 0
    psq_l f6, 0x34(r31), 0, 0
    psq_st f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f4, 0x18(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    bl fn_805F8CA0
    addi r4, r1, 0x1d8
    addi r3, r1, 0x14
    psq_l f1, 0x0(r4), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_st f6, 0x34(r31), 0, 0
    psq_st f1, 0xc(r31), 0, 0
    psq_st f2, 0x14(r31), 0, 0
    psq_st f3, 0x1c(r31), 0, 0
    psq_st f4, 0x24(r31), 0, 0
    psq_st f5, 0x2c(r31), 0, 0
    lfs f8, 0x200(r1)
    lfs f7, 0x1f0(r1)
    lfs f0, 0x1e0(r1)
    stfs f0, 0x14(r1)
    stfs f7, 0x18(r1)
    stfs f8, 0x1c(r1)
    bl fn_805F9940
    lfs f8, 0x1fc(r1)
    fmr f30, f1
    lfs f7, 0x1ec(r1)
    addi r3, r1, 0x20
    lfs f0, 0x1dc(r1)
    stfs f0, 0x20(r1)
    stfs f7, 0x24(r1)
    stfs f8, 0x28(r1)
    bl fn_805F9940
    lfs f8, 0x1f8(r1)
    fmr f31, f1
    lfs f7, 0x1e8(r1)
    addi r3, r1, 0x2c
    lfs f0, 0x1d8(r1)
    stfs f0, 0x2c(r1)
    stfs f7, 0x30(r1)
    stfs f8, 0x34(r1)
    bl fn_805F9940
    frsp f7, f31
    stfs f1, 0x8(r1)
    frsp f0, f30
    stfs f31, 0xc(r1)
    fcmpo cr0, f7, f0
    stfs f30, 0x10(r1)
    ble lbl_fn_8040B668_000018A8
    b lbl_fn_8040B668_000018AC
lbl_fn_8040B668_000018A8:
    fmr f7, f0
lbl_fn_8040B668_000018AC:
    lfs f8, 0x8(r1)
    fcmpo cr0, f8, f7
    ble lbl_fn_8040B668_000018BC
    b lbl_fn_8040B668_000018D4
lbl_fn_8040B668_000018BC:
    lfs f8, 0xc(r1)
    lfs f0, 0x10(r1)
    fcmpo cr0, f8, f0
    ble lbl_fn_8040B668_000018D0
    b lbl_fn_8040B668_000018D4
lbl_fn_8040B668_000018D0:
    fmr f8, f0
lbl_fn_8040B668_000018D4:
    stfs f8, 0x58(r31)
    addi r3, r31, 0x4
    addi r4, r1, 0x1a8
    bl fn_8009076C
lbl_fn_8040B668_000018E4:
    lwz r0, 0x234(r1)
    psq_l f31, 0x228(r1), 0, 0
    lfd f31, 0x220(r1)
    psq_l f30, 0x218(r1), 0, 0
    lfd f30, 0x210(r1)
    lwz r31, 0x20c(r1)
    lwz r30, 0x208(r1)
    mtlr r0
    addi r1, r1, 0x230
    blr
}

asm void fn_8040BC38(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x40
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    bl _savegpr_27
    lfs f1, 0x410(r3)
    li r31, 0x1
    lfs f0, lbl_80886330
    mr r30, r3
    fmuls f1, f1, f1
    stw r31, 0x424(r3)
    fmuls f1, f1, f0
    bl fn_8068B100
    frsp f31, f1
    bl fn_80680CF8
    lis r27, 0x4178
    lis r29, 0x4330
    addi r0, r27, 0x749f
    lis r28, lbl_80752AD0@ha
    mulhw r0, r0, r3
    lfs f0, 0x408(r30)
    lfs f1, lbl_80886334
    stw r29, 0x8(r1)
    fmuls f2, f1, f31
    lfd f4, lbl_80752AD0@l(r28)
    srawi r0, r0, 8
    stfs f0, 0x3d8(r30)
    srwi r4, r0, 31
    lfs f3, lbl_80886338
    add r0, r0, r4
    lfs f1, 0x404(r30)
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f4
    fdivs f0, f0, f3
    fmsubs f0, f2, f0, f31
    fadds f0, f1, f0
    stfs f0, 0x3d4(r30)
    bl fn_80680CF8
    addi r0, r27, 0x749f
    lfs f0, lbl_80886334
    mulhw r0, r0, r3
    stw r29, 0x10(r1)
    fmuls f1, f0, f31
    lfd f4, lbl_80752AD0@l(r28)
    lfs f2, lbl_80886338
    lfs f0, 0x40c(r30)
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f3, 0x10(r1)
    fsubs f3, f3, f4
    fdivs f2, f3, f2
    fmsubs f1, f1, f2, f31
    fadds f0, f0, f1
    stfs f0, 0x3dc(r30)
    bl fn_80680CF8
    lis r4, 0xb60b
    stw r29, 0x18(r1)
    addi r0, r4, 0x60b7
    lfd f2, lbl_80752AD0@l(r28)
    mulhw r0, r0, r3
    lfs f0, lbl_8088633C
    add r0, r0, r3
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x168
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x1c(r1)
    lfd f1, 0x18(r1)
    fsubs f1, f1, f2
    fmuls f1, f0, f1
    stfs f1, 0x3e4(r30)
    bl fn_8068AD58
    lfs f0, 0x3e4(r30)
    frsp f2, f1
    fneg f1, f0
    stfs f2, 0x3ec(r30)
    bl fn_8068A850
    frsp f0, f1
    addi r3, r30, 0x3ec
    mr r4, r3
    stfs f0, 0x3f4(r30)
    bl fn_805F98D0
    lfs f0, lbl_8088632C
    addi r3, r30, 0x4
    lfs f1, lbl_80886318
    li r4, 0x0
    stw r31, 0x350(r30)
    li r5, 0x2
    lfs f2, lbl_80886320
    li r6, 0x1
    stfs f0, 0x250(r30)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x23c(r30)
    stfs f1, 0x238(r30)
    bl fn_80097C08
    lwz r0, 0x8(r30)
    lfs f0, lbl_80886318
    ori r0, r0, 0x100
    stfs f0, 0x414(r30)
    rlwinm r0, r0, 0, 29, 27
    stw r0, 0x8(r30)
    bl fn_80680CF8
    lis r4, 0x8889
    li r29, 0x0
    subi r0, r4, 0x7777
    stb r29, 0x430(r30)
    mulhw r0, r0, r3
    add r0, r0, r3
    srawi r0, r0, 5
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3c
    subf r3, r0, r3
    addi r0, r3, 0x1e
    stw r0, 0x41c(r30)
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    subf. r0, r4, r0
    bne lbl_fn_8040BC38_00001B30
    stw r29, 0x420(r30)
    b lbl_fn_8040BC38_00001B34
lbl_fn_8040BC38_00001B30:
    stw r31, 0x420(r30)
lbl_fn_8040BC38_00001B34:
    li r0, 0x0
    stw r0, 0x418(r30)
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    addi r11, r1, 0x40
    bl _restgpr_27
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}
