#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_21(void);
extern void _savegpr_21(void);
extern void dtor_80084684(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_8005B3CC(void);
extern void fn_8005B5F8(void);
extern void fn_8005B6E8(void);
extern void fn_8006AFF8(void);
extern void fn_80084320(void);
extern void fn_800897D8(void);
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800D246C(void);
extern void fn_800DC12C(void);
extern void fn_800E9ED8(void);
extern void fn_800EFC64(void);
extern void fn_800F8548(void);
extern void fn_800F8574(void);
extern void fn_80103F60(void);
extern void fn_80108378(void);
extern void fn_8011F91C(void);
extern void fn_8011FC10(void);
extern void fn_80126214(void);
extern void fn_8012B3E8(void);
extern void fn_8012B988(void);
extern void fn_80133130(void);
extern void fn_8013655C(void);
extern void fn_8013A258(void);
extern void fn_8013CB68(void);
extern void fn_80145334(void);
extern void fn_8014C540(void);
extern void fn_80154654(void);
extern void fn_8015495C(void);
extern void fn_80155A88(void);
extern void fn_801561E4(void);
extern void fn_80158EF0(void);
extern void fn_80161570(void);
extern void fn_801644D4(void);
extern void fn_8016E4C4(void);
extern void fn_8016E970(void);
extern void fn_8016EB48(void);
extern void fn_8016F3D0(void);
extern void fn_80178208(void);
extern void fn_80179AD0(void);
extern void fn_801CCD00(void);
extern void fn_8020A81C(void);
extern void fn_80219558(void);
extern void fn_80219E6C(void);
extern void fn_80232B7C(void);
extern void fn_802377B8(void);
extern void fn_8023780C(void);
extern void fn_8023781C(void);
extern void fn_80237874(void);
extern void fn_80239DAC(void);
extern void fn_8023A02C(void);
extern void fn_8023A8B4(void);
extern void fn_80252E6C(void);
extern void fn_802531F4(void);
extern void fn_80253884(void);
extern void fn_80253C9C(void);
extern void fn_8035B694(void);
extern void fn_8035B78C(void);
extern void fn_80370320(void);
extern void fn_80370A78(void);
extern void fn_80370AE4(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473E74(void);
extern void fn_80473E8C(void);
extern void fn_80473F50(void);
extern void fn_805991E4(void);
extern void fn_8059A268(void);
extern void fn_8059C8EC(void);
extern void fn_8059C990(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_80682428(void);
extern void fn_80682544(void);
extern void fn_80684600(void);
extern void fn_8068AEA4(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80743AA8[];
extern u8 lbl_80743AF4[];
extern u8 lbl_807772B0[];
extern u8 lbl_807772D0[];
extern u8 lbl_80784340[];
extern u8 lbl_807843B8[];
extern u8 lbl_8078FBB0[];
extern u8 lbl_807C7030[];
extern u8 lbl_807C830C[];
extern u8 lbl_807C8318[];

/* Small data declarations */
extern u32 lbl_8087D708;
extern u32 lbl_8087EF10;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F3D8;
extern u32 lbl_8087F408;
extern u32 lbl_8087F430;
extern u32 lbl_8087F8A0;
extern u32 lbl_8087F9E8;
extern u32 lbl_80883338;
extern u32 lbl_8088333C;
extern u32 lbl_80883340;
extern u32 lbl_80883344;
extern u32 lbl_80883348;
extern u32 lbl_8088334C;
extern u32 lbl_80883350;
extern u32 lbl_80883354;
extern u32 lbl_80883358;
extern u32 lbl_8088335C;
extern u32 lbl_80883360;
extern u32 lbl_80883364;
extern u32 lbl_80883368;
extern u32 lbl_8088336C;
extern u32 lbl_80883370;

/* Function declarations */
void fn_80250884(void);
void fn_80250A24(void);
void fn_80250D90(void);
void fn_80250ECC(void);
void fn_80251344(void);

asm void fn_80250884(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    addi r4, r1, 0x20
    stfd f31, 0x80(r1)
    psq_st f31, 0x88(r1), 0, 0
    fmr f31, f1
    stfd f30, 0x70(r1)
    psq_st f30, 0x78(r1), 0, 0
    fmuls f30, f31, f31
    stfd f29, 0x60(r1)
    psq_st f29, 0x68(r1), 0, 0
    stfd f28, 0x50(r1)
    psq_st f28, 0x58(r1), 0, 0
    stfd f27, 0x40(r1)
    psq_st f27, 0x48(r1), 0, 0
    stw r31, 0x3c(r1)
    li r31, 0x0
    stw r30, 0x38(r1)
    stw r29, 0x34(r1)
    mr r29, r3
    lfs f2, 0x530(r3)
    psq_l f1, 0x528(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    frsp f27, f2
    lwz r4, lbl_8087F8A0
    stfs f2, 0x28(r1)
    lwz r30, 0x48(r4)
    lfs f28, 0x24(r1)
    lfs f29, 0x20(r1)
    b lbl_fn_80250884_000000C8
lbl_fn_80250884_0000007C:
    lwz r0, 0x7e0(r30)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_80250884_000000C4
    lfs f4, 0x530(r30)
    addi r3, r1, 0x14
    lfs f3, 0x52c(r30)
    lfs f0, 0x528(r30)
    fsubs f4, f4, f27
    fsubs f3, f3, f28
    fsubs f0, f0, f29
    stfs f4, 0x1c(r1)
    stfs f0, 0x14(r1)
    stfs f3, 0x18(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f30
    bge lbl_fn_80250884_000000C4
    addi r31, r31, 0x1
lbl_fn_80250884_000000C4:
    lwz r30, 0x14ac(r30)
lbl_fn_80250884_000000C8:
    cmpwi r30, 0x0
    bne lbl_fn_80250884_0000007C
    lwz r3, lbl_8087F408
    lwz r30, 0x48(r3)
    b lbl_fn_80250884_00000150
lbl_fn_80250884_000000DC:
    lwz r0, 0x7e0(r30)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_80250884_0000014C
    mr r3, r30
    mr r4, r29
    li r5, 0x1
    bl fn_8016F3D0
    cmpwi r3, 0x0
    bne lbl_fn_80250884_0000014C
    lfs f3, 0x530(r30)
    addi r3, r1, 0x8
    lfs f0, 0x28(r1)
    lfs f5, 0x52c(r30)
    fsubs f6, f3, f0
    lfs f4, 0x24(r1)
    lfs f3, 0x528(r30)
    lfs f0, 0x20(r1)
    fsubs f4, f5, f4
    stfs f6, 0x10(r1)
    fsubs f0, f3, f0
    stfs f4, 0xc(r1)
    stfs f0, 0x8(r1)
    bl fn_805F9920
    fmuls f0, f31, f31
    fcmpo cr0, f1, f0
    bge lbl_fn_80250884_0000014C
    addi r31, r31, 0x1
lbl_fn_80250884_0000014C:
    lwz r30, 0x14ac(r30)
lbl_fn_80250884_00000150:
    cmpwi r30, 0x0
    bne lbl_fn_80250884_000000DC
    psq_l f31, 0x88(r1), 0, 0
    mr r3, r31
    lfd f31, 0x80(r1)
    psq_l f30, 0x78(r1), 0, 0
    lfd f30, 0x70(r1)
    psq_l f29, 0x68(r1), 0, 0
    lfd f29, 0x60(r1)
    psq_l f28, 0x58(r1), 0, 0
    lfd f28, 0x50(r1)
    psq_l f27, 0x48(r1), 0, 0
    lfd f27, 0x40(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_80250A24(void)
{
    nofralloc
    stwu r1, -0x6a0(r1)
    mflr r0
    stw r0, 0x6a4(r1)
    stmw r25, 0x684(r1)
    mr r31, r5
    mr r30, r3
    lwz r5, 0x20(r5)
    bl fn_8035B694
    lis r3, lbl_807843B8@ha
    li r29, 0x0
    addi r3, r3, lbl_807843B8@l
    li r0, 0xf0
    stw r3, 0x0(r30)
    addi r3, r30, 0x14c8
    stw r29, 0x14b0(r30)
    stw r29, 0x14b4(r30)
    stw r29, 0x14b8(r30)
    stw r29, 0x14bc(r30)
    stw r0, 0x14c0(r30)
    stw r29, 0x14c4(r30)
    bl fn_802377B8
    addi r3, r30, 0x14d4
    bl fn_802377B8
    addi r3, r30, 0x14e0
    bl fn_802377B8
    addi r3, r30, 0x14ec
    bl fn_802377B8
    addi r28, r30, 0x1508
    stw r29, 0x14f8(r30)
    mr r3, r28
    stw r29, 0x14fc(r30)
    stw r29, 0x1500(r30)
    stw r29, 0x1504(r30)
    bl fn_80473E74
    lwz r4, 0x12a4(r30)
    lis r7, lbl_8078FBB0@ha
    lwz r0, 0x12a8(r30)
    addi r7, r7, lbl_8078FBB0@l
    oris r4, r4, 0x40
    li r6, 0x1
    ori r0, r0, 0x8000
    li r5, 0x4
    stw r7, 0x0(r28)
    lis r3, lbl_80743AF4@ha
    addi r28, r3, lbl_80743AF4@l
    addi r27, r1, 0x38
    stw r6, 0x151c(r30)
    mr r3, r28
    stw r5, 0x1524(r30)
    stw r4, 0x12a4(r30)
    stw r0, 0x12a8(r30)
    stw r29, 0x1510(r30)
    stw r29, 0x1514(r30)
    stw r29, 0x1518(r30)
    stw r29, 0x1520(r30)
    stw r29, 0x1528(r30)
    stw r29, 0x152c(r30)
    stw r29, 0x1540(r30)
    stw r29, 0x1544(r30)
    stw r29, 0x1548(r30)
    stw r29, 0x154c(r30)
    stw r29, 0x1550(r30)
    stw r29, 0x1554(r30)
    stw r29, 0x38(r1)
    stw r29, 0x3c(r1)
    stw r29, 0x40(r1)
    bl strlen
    mr r26, r3
    mr r3, r27
    mr r4, r26
    bl fn_80013DC4
    lbz r0, 0x1c(r1)
    mr r3, r27
    stb r0, 0x18(r1)
    mr r6, r28
    add r7, r28, r26
    addi r8, r1, 0x18
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    addi r27, r28, 0x18
    stw r29, 0x2c(r1)
    addi r26, r1, 0x2c
    stw r29, 0x30(r1)
    mr r3, r27
    stw r29, 0x34(r1)
    bl strlen
    mr r25, r3
    mr r3, r26
    mr r4, r25
    bl fn_80013DC4
    lbz r0, 0x14(r1)
    mr r3, r26
    stb r0, 0x10(r1)
    mr r6, r27
    add r7, r27, r25
    addi r8, r1, 0x10
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    addi r3, r31, 0x2c
    bl strlen
    lis r4, lbl_807772D0@ha
    mr r26, r3
    addi r4, r4, lbl_807772D0@l
    stw r4, 0x44(r1)
    addi r3, r1, 0x54
    li r5, 0x400
    stw r29, 0x48(r1)
    li r4, 0x0
    stw r29, 0x4c(r1)
    stw r29, 0x50(r1)
    stw r29, 0x674(r1)
    bl memset
    addi r3, r1, 0x654
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x44(r1)
    mr r5, r26
    addi r3, r1, 0x44
    addi r4, r31, 0x2c
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0x44
    addi r4, r4, lbl_807772B0@l
    stw r4, 0x44(r1)
    la r4, lbl_8087D708
    bl fn_8005B6E8
lbl_fn_80250A24_000003AC:
    addi r3, r1, 0x44
    bl fn_8005B3CC
    cmpwi r3, 0x0
    mr r26, r3
    beq lbl_fn_80250A24_00000444
    addi r4, r28, 0x2b
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_80250A24_00000444
    mr r3, r26
    addi r4, r28, 0x2c
    li r5, 0x8
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_80250A24_00000434
    lwz r0, 0x2c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80250A24_00000400
    lbz r0, 0x2c(r1)
    clrlwi r25, r0, 25
    b lbl_fn_80250A24_00000404
lbl_fn_80250A24_00000400:
    lwz r25, 0x30(r1)
lbl_fn_80250A24_00000404:
    lbz r0, 0xc(r1)
    addi r3, r26, 0x8
    stb r0, 0x8(r1)
    bl strlen
    add r4, r26, r3
    mr r5, r25
    addi r7, r4, 0x8
    addi r3, r1, 0x2c
    addi r6, r26, 0x8
    addi r8, r1, 0x8
    li r4, 0x0
    bl fn_80013F78
lbl_fn_80250A24_00000434:
    addi r3, r1, 0x44
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_80250A24_000003AC
lbl_fn_80250A24_00000444:
    addi r3, r1, 0x20
    addi r4, r1, 0x38
    addi r5, r1, 0x2c
    bl fn_8006AFF8
    lwz r0, 0x20(r1)
    addi r3, r30, 0x1508
    srwi. r0, r0, 31
    bne lbl_fn_80250A24_0000046C
    addi r4, r1, 0x21
    b lbl_fn_80250A24_00000470
lbl_fn_80250A24_0000046C:
    lwz r4, 0x28(r1)
lbl_fn_80250A24_00000470:
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lis r31, lbl_80743AF4@ha
    addi r3, r30, 0x14e0
    addi r31, r31, lbl_80743AF4@l
    addi r4, r31, 0x35
    bl fn_8023780C
    addi r3, r30, 0x14c8
    addi r4, r31, 0x4b
    bl fn_8023780C
    addi r3, r30, 0x14ec
    addi r4, r31, 0x60
    bl fn_8023780C
    addi r3, r30, 0x14d4
    addi r4, r31, 0x4b
    bl fn_8023780C
    lwz r0, 0x20(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80250A24_000004CC
    lwz r3, 0x28(r1)
    bl dtor_80084684
lbl_fn_80250A24_000004CC:
    lwz r0, 0x2c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80250A24_000004E0
    lwz r3, 0x34(r1)
    bl dtor_80084684
lbl_fn_80250A24_000004E0:
    lwz r0, 0x38(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80250A24_000004F4
    lwz r3, 0x40(r1)
    bl dtor_80084684
lbl_fn_80250A24_000004F4:
    mr r3, r30
    lmw r25, 0x684(r1)
    lwz r0, 0x6a4(r1)
    mtlr r0
    addi r1, r1, 0x6a0
    blr
}

asm void fn_80250D90(void)
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
    beq lbl_fn_80250D90_00000628
    lis r4, lbl_807843B8@ha
    addi r4, r4, lbl_807843B8@l
    stw r4, 0x0(r3)
    lwz r4, lbl_8087F3C0
    cmpwi r4, 0x0
    beq lbl_fn_80250D90_00000558
    lwz r0, 0xec(r4)
    rlwinm r0, r0, 0, 29, 27
    stw r0, 0xec(r4)
lbl_fn_80250D90_00000558:
    addic. r0, r3, 0x1550
    beq lbl_fn_80250D90_0000057C
    lwz r4, 0x1550(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80250D90_0000057C
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_80250D90_0000057C
    bl fn_800897D8
lbl_fn_80250D90_0000057C:
    addic. r3, r29, 0x1508
    beq lbl_fn_80250D90_0000058C
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80250D90_0000058C:
    addic. r31, r29, 0x14ec
    beq lbl_fn_80250D90_000005AC
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_80250D90_000005AC
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80250D90_000005AC:
    addic. r31, r29, 0x14e0
    beq lbl_fn_80250D90_000005CC
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_80250D90_000005CC
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80250D90_000005CC:
    addic. r31, r29, 0x14d4
    beq lbl_fn_80250D90_000005EC
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_80250D90_000005EC
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80250D90_000005EC:
    addic. r31, r29, 0x14c8
    beq lbl_fn_80250D90_0000060C
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_80250D90_0000060C
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80250D90_0000060C:
    mr r3, r29
    li r4, 0x0
    bl fn_8035B78C
    cmpwi r30, 0x0
    ble lbl_fn_80250D90_00000628
    mr r3, r29
    bl dtor_80084684
lbl_fn_80250D90_00000628:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80250ECC(void)
{
    nofralloc
    stwu r1, -0x650(r1)
    mflr r0
    stw r0, 0x654(r1)
    stw r31, 0x64c(r1)
    stw r30, 0x648(r1)
    mr r30, r3
    stw r29, 0x644(r1)
    stw r28, 0x640(r1)
    bl fn_8013655C
    cmpwi r3, 0x0
    bne lbl_fn_80250ECC_00000A9C
    lwz r3, 0x1438(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80250ECC_00000690
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_80250ECC_00000A9C
lbl_fn_80250ECC_00000690:
    addi r3, r30, 0x1508
    bl fn_80473F50
    cmpwi r3, 0x0
    bne lbl_fn_80250ECC_00000A9C
    addi r3, r30, 0x14c8
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_80250ECC_00000A9C
    addi r3, r30, 0x14e0
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_80250ECC_00000A9C
    addi r3, r30, 0x14ec
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_80250ECC_00000A9C
    addi r3, r30, 0x14d4
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_80250ECC_00000A9C
    lwz r4, 0x7ec(r30)
    addi r3, r30, 0x1508
    lwz r0, 0xc10(r30)
    ori r4, r4, 0x1c0
    oris r4, r4, 0x1
    ori r0, r0, 0x2
    ori r4, r4, 0x4011
    stw r4, 0x7ec(r30)
    stw r0, 0xc10(r30)
    lwz r4, lbl_8087F430
    lwz r31, 0x10d8(r4)
    bl fn_80470580
    cmpwi r3, 0x0
    beq lbl_fn_80250ECC_00000938
    cmpwi r31, 0x0
    beq lbl_fn_80250ECC_00000938
    addi r3, r30, 0x1508
    bl fn_8047059C
    mr r28, r3
    addi r3, r30, 0x1508
    bl fn_80470580
    lis r4, lbl_807772D0@ha
    li r0, 0x0
    addi r4, r4, lbl_807772D0@l
    stw r4, 0x8(r1)
    mr r29, r3
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
    mr r4, r29
    mr r5, r28
    addi r3, r1, 0x8
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0x8
    addi r4, r4, lbl_807772B0@l
    stw r4, 0x8(r1)
    la r4, lbl_8087D708
    bl fn_8005B6E8
    lis r29, lbl_80743AF4@ha
    addi r29, r29, lbl_80743AF4@l
lbl_fn_80250ECC_000007B4:
    addi r3, r1, 0x8
    bl fn_8005B3CC
    mr r28, r3
    addi r4, r29, 0x76
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80250ECC_00000830
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_800DC12C
    lwz r0, 0x78(r31)
    li r4, 0x0
    li r5, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80250ECC_0000081C
lbl_fn_80250ECC_000007F4:
    lwz r6, 0x7c(r31)
    lwzx r0, r6, r5
    cmpw r3, r0
    bne lbl_fn_80250ECC_00000810
    mulli r0, r4, 0x28
    add r0, r6, r0
    b lbl_fn_80250ECC_00000820
lbl_fn_80250ECC_00000810:
    addi r5, r5, 0x28
    addi r4, r4, 0x1
    bdnz lbl_fn_80250ECC_000007F4
lbl_fn_80250ECC_0000081C:
    li r0, 0x0
lbl_fn_80250ECC_00000820:
    cmpwi r0, 0x0
    beq lbl_fn_80250ECC_00000928
    stw r0, 0x1528(r30)
    b lbl_fn_80250ECC_00000928
lbl_fn_80250ECC_00000830:
    mr r3, r28
    addi r4, r29, 0x80
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80250ECC_000008A4
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_800DC12C
    lwz r0, 0x78(r31)
    li r4, 0x0
    li r5, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80250ECC_00000890
lbl_fn_80250ECC_00000868:
    lwz r6, 0x7c(r31)
    lwzx r0, r6, r5
    cmpw r3, r0
    bne lbl_fn_80250ECC_00000884
    mulli r0, r4, 0x28
    add r0, r6, r0
    b lbl_fn_80250ECC_00000894
lbl_fn_80250ECC_00000884:
    addi r5, r5, 0x28
    addi r4, r4, 0x1
    bdnz lbl_fn_80250ECC_00000868
lbl_fn_80250ECC_00000890:
    li r0, 0x0
lbl_fn_80250ECC_00000894:
    cmpwi r0, 0x0
    beq lbl_fn_80250ECC_00000928
    stw r0, 0x152c(r30)
    b lbl_fn_80250ECC_00000928
lbl_fn_80250ECC_000008A4:
    mr r3, r28
    addi r4, r29, 0x8a
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80250ECC_000008F4
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    cmpwi r3, 0x0
    stw r3, 0x1500(r30)
    mr r4, r3
    bge lbl_fn_80250ECC_000008E4
    lwz r3, lbl_8087F8A0
    lwz r0, 0x48(r3)
    stw r0, 0x1504(r30)
    b lbl_fn_80250ECC_00000928
lbl_fn_80250ECC_000008E4:
    lwz r3, lbl_8087F8A0
    bl fn_8011F91C
    stw r3, 0x1504(r30)
    b lbl_fn_80250ECC_00000928
lbl_fn_80250ECC_000008F4:
    mr r3, r28
    addi r4, r29, 0x99
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80250ECC_00000928
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x14f8(r30)
    mr r4, r3
    lwz r3, lbl_8087F408
    bl fn_8011FC10
    stw r3, 0x14fc(r30)
lbl_fn_80250ECC_00000928:
    addi r3, r1, 0x8
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_80250ECC_000007B4
lbl_fn_80250ECC_00000938:
    lwz r3, 0x14fc(r30)
    lwz r0, 0x1504(r30)
    stw r0, 0x14b4(r3)
    lwz r3, 0x1438(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80250ECC_00000968
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x1438(r30)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_80250ECC_00000968:
    lwz r3, 0x1504(r30)
    lwz r3, 0x50(r3)
    bl fn_80219558
    cmpwi r3, 0x1
    beq lbl_fn_80250ECC_000009A8
    cmpwi r3, 0x2
    beq lbl_fn_80250ECC_000009C0
    cmpwi r3, 0x3
    beq lbl_fn_80250ECC_000009D8
    cmpwi r3, 0x4
    beq lbl_fn_80250ECC_000009F0
    cmpwi r3, 0x5
    beq lbl_fn_80250ECC_00000A08
    cmpwi r3, 0x6
    beq lbl_fn_80250ECC_00000A20
    b lbl_fn_80250ECC_00000A34
lbl_fn_80250ECC_000009A8:
    lis r3, lbl_80743AF4@ha
    addi r3, r3, lbl_80743AF4@l
    addi r3, r3, 0xa8
    bl fn_8020A81C
    stw r3, 0x5c(r30)
    b lbl_fn_80250ECC_00000A34
lbl_fn_80250ECC_000009C0:
    lis r3, lbl_80743AF4@ha
    addi r3, r3, lbl_80743AF4@l
    addi r3, r3, 0xb2
    bl fn_8020A81C
    stw r3, 0x5c(r30)
    b lbl_fn_80250ECC_00000A34
lbl_fn_80250ECC_000009D8:
    lis r3, lbl_80743AF4@ha
    addi r3, r3, lbl_80743AF4@l
    addi r3, r3, 0xbc
    bl fn_8020A81C
    stw r3, 0x5c(r30)
    b lbl_fn_80250ECC_00000A34
lbl_fn_80250ECC_000009F0:
    lis r3, lbl_80743AF4@ha
    addi r3, r3, lbl_80743AF4@l
    addi r3, r3, 0xc6
    bl fn_8020A81C
    stw r3, 0x5c(r30)
    b lbl_fn_80250ECC_00000A34
lbl_fn_80250ECC_00000A08:
    lis r3, lbl_80743AF4@ha
    addi r3, r3, lbl_80743AF4@l
    addi r3, r3, 0xd0
    bl fn_8020A81C
    stw r3, 0x5c(r30)
    b lbl_fn_80250ECC_00000A34
lbl_fn_80250ECC_00000A20:
    lis r3, lbl_80743AF4@ha
    addi r3, r3, lbl_80743AF4@l
    addi r3, r3, 0xda
    bl fn_8020A81C
    stw r3, 0x5c(r30)
lbl_fn_80250ECC_00000A34:
    addi r3, r30, 0x7d4
    bl fn_8012B3E8
    addi r3, r30, 0x7d4
    bl fn_8012B988
    lwz r6, 0x5c(r30)
    mr r3, r30
    li r4, 0x0
    lwz r5, 0xe8(r6)
    lwz r0, 0xec(r6)
    stw r0, 0xaa8(r30)
    stw r5, 0xaa4(r30)
    lwz r5, 0xf0(r6)
    lwz r0, 0xf4(r6)
    stw r0, 0xab0(r30)
    stw r5, 0xaac(r30)
    lwz r5, 0xf8(r6)
    lwz r0, 0xfc(r6)
    stw r0, 0xab8(r30)
    stw r5, 0xab4(r30)
    lwz r5, 0x100(r6)
    lwz r0, 0x104(r6)
    stw r0, 0xac0(r30)
    stw r5, 0xabc(r30)
    bl fn_8016E4C4
    li r3, 0x1
    b lbl_fn_80250ECC_00000AA0
lbl_fn_80250ECC_00000A9C:
    li r3, 0x0
lbl_fn_80250ECC_00000AA0:
    lwz r0, 0x654(r1)
    lwz r31, 0x64c(r1)
    lwz r30, 0x648(r1)
    lwz r29, 0x644(r1)
    lwz r28, 0x640(r1)
    mtlr r0
    addi r1, r1, 0x650
    blr
}

asm void fn_80251344(void)
{
    nofralloc
    stwu r1, -0x320(r1)
    mflr r0
    stw r0, 0x324(r1)
    addi r11, r1, 0x2e0
    stfd f31, 0x310(r1)
    psq_st f31, 0x318(r1), 0, 0
    stfd f30, 0x300(r1)
    psq_st f30, 0x308(r1), 0, 0
    stfd f29, 0x2f0(r1)
    psq_st f29, 0x2f8(r1), 0, 0
    stfd f28, 0x2e0(r1)
    psq_st f28, 0x2e8(r1), 0, 0
    bl _savegpr_21
    lwz r0, 0x151c(r3)
    mr r29, r3
    cmpwi r0, 0x0
    beq lbl_fn_80251344_00000BB4
    li r0, 0x0
    stw r0, 0x151c(r3)
    li r4, 0xd9
    li r5, 0x3
    lwz r3, lbl_8087F430
    li r6, 0x0
    bl fn_80370320
    lwz r3, 0x1504(r29)
    lwz r3, 0x50(r3)
    bl fn_80219558
    subi r0, r3, 0x2
    cmplwi r0, 0x1
    ble lbl_fn_80251344_00000B64
    cmpwi r3, 0x0
    beq lbl_fn_80251344_00000B64
    cmpwi r3, 0x1
    beq lbl_fn_80251344_00000B80
    cmpwi r3, 0x5
    beq lbl_fn_80251344_00000B80
    cmpwi r3, 0x4
    beq lbl_fn_80251344_00000B9C
    cmpwi r3, 0x6
    beq lbl_fn_80251344_00000B9C
    b lbl_fn_80251344_00000BB4
lbl_fn_80251344_00000B64:
    lwz r4, 0xc50(r29)
    mr r3, r29
    li r5, 0x238d
    bl fn_80154654
    li r0, 0x4
    stw r0, 0x1524(r29)
    b lbl_fn_80251344_00000BB4
lbl_fn_80251344_00000B80:
    lwz r4, 0xc50(r29)
    mr r3, r29
    li r5, 0x2390
    bl fn_80154654
    li r0, 0x2
    stw r0, 0x1524(r29)
    b lbl_fn_80251344_00000BB4
lbl_fn_80251344_00000B9C:
    lwz r4, 0xc50(r29)
    mr r3, r29
    li r5, 0x238f
    bl fn_80154654
    li r0, 0x3
    stw r0, 0x1524(r29)
lbl_fn_80251344_00000BB4:
    lwz r3, lbl_8087F430
    li r4, 0xc9
    bl fn_80370A78
    cmpwi r3, 0x1
    bne lbl_fn_80251344_00000C64
    lwz r4, 0x1528(r29)
    cmpwi r4, 0x0
    beq lbl_fn_80251344_00000BF8
    psq_l f1, 0x4(r4), 0, 0
    lfs f2, 0xc(r4)
    stfs f2, 0x530(r29)
    lwz r3, 0x1504(r29)
    psq_st f1, 0x528(r29), 0, 0
    lfs f2, 0xc(r4)
    psq_l f1, 0x4(r4), 0, 0
    psq_st f1, 0x528(r3), 0, 0
    stfs f2, 0x530(r3)
lbl_fn_80251344_00000BF8:
    li r0, 0x1
    stw r0, 0x14bc(r29)
    li r4, 0x1
    mr r3, r29
    bl fn_8016E4C4
    li r22, 0x0
    stw r22, 0x14b4(r29)
    stw r22, 0x14b8(r29)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r29)
    addi r4, r1, 0x188
    psq_l f1, 0x528(r29), 0, 0
    mr r3, r29
    stw r22, 0x58c(r29)
    lfs f2, 0x530(r29)
    stfs f2, 0x190(r1)
    psq_st f1, 0x0(r4), 0, 0
    lwz r5, 0x1504(r29)
    bl fn_801644D4
    lfs f1, lbl_80883338
    li r4, 0x1d9
    lwz r3, 0x1504(r29)
    li r5, 0x0
    fmr f2, f1
    li r6, 0x0
    bl fn_80161570
lbl_fn_80251344_00000C64:
    lwz r3, 0x1540(r29)
    li r22, 0x0
    lwz r31, 0x154c(r29)
    cmpwi r3, 0x0
    stw r22, 0x1548(r29)
    stw r22, 0x154c(r29)
    ble lbl_fn_80251344_00000DD8
    lwz r4, 0x14fc(r29)
    subi r0, r3, 0x1
    stw r0, 0x1540(r29)
    cmpwi r4, 0x0
    beq lbl_fn_80251344_00000DB0
    lfs f3, 0x530(r4)
    addi r3, r1, 0x17c
    lfs f0, 0x1538(r29)
    lfs f5, 0x52c(r4)
    fsubs f6, f3, f0
    lfs f4, 0x1534(r29)
    lfs f3, 0x528(r4)
    lfs f0, 0x1530(r29)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x180(r1)
    stfs f0, 0x17c(r1)
    stfs f6, 0x184(r1)
    bl fn_805F9940
    lfs f0, 0x153c(r29)
    fcmpo cr0, f1, f0
    bge lbl_fn_80251344_00000D98
    lwz r4, 0x940(r29)
    lwz r3, 0x1544(r29)
    cmpwi r4, 0x0
    addi r0, r3, 0x1
    stw r0, 0x1544(r29)
    ble lbl_fn_80251344_00000D1C
    xoris r3, r4, 0x8000
    lis r0, 0x4330
    lis r4, lbl_80743AA8@ha
    stw r3, 0x2ac(r1)
    lfd f4, lbl_80743AA8@l(r4)
    stw r0, 0x2a8(r1)
    lfs f0, 0x7d8(r29)
    lfd f3, 0x2a8(r1)
    fsubs f3, f3, f4
    fdivs f3, f0, f3
    b lbl_fn_80251344_00000D20
lbl_fn_80251344_00000D1C:
    lfs f3, lbl_8088333C
lbl_fn_80251344_00000D20:
    lfs f0, lbl_80883340
    fcmpo cr0, f3, f0
    ble lbl_fn_80251344_00000D6C
    lwz r4, 0x940(r29)
    lis r0, 0x4330
    stw r0, 0x2a8(r1)
    lis r3, lbl_80743AA8@ha
    xoris r0, r4, 0x8000
    lfd f5, lbl_80743AA8@l(r3)
    stw r0, 0x2ac(r1)
    lfs f4, lbl_80883344
    lfd f0, 0x2a8(r1)
    lfs f3, lbl_80883348
    fsubs f5, f0, f5
    lfs f0, 0x7d8(r29)
    fmuls f4, f4, f5
    fdivs f3, f4, f3
    fsubs f0, f0, f3
    stfs f0, 0x7d8(r29)
lbl_fn_80251344_00000D6C:
    lwz r0, 0x154c(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80251344_00000D8C
    lwz r0, 0x14fc(r29)
    cmpwi r0, 0x0
    beq lbl_fn_80251344_00000D8C
    li r0, 0x1
    stw r0, 0x154c(r29)
lbl_fn_80251344_00000D8C:
    li r0, 0x1
    stw r0, 0x1548(r29)
    b lbl_fn_80251344_00000DA0
lbl_fn_80251344_00000D98:
    stw r22, 0x1544(r29)
    stw r22, 0x1548(r29)
lbl_fn_80251344_00000DA0:
    lwz r3, 0x1544(r29)
    srawi r0, r3, 31
    andc r0, r3, r0
    stw r0, 0x1544(r29)
lbl_fn_80251344_00000DB0:
    lwz r0, 0x1540(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80251344_00000DD8
    li r0, 0x0
    stw r0, 0x1544(r29)
    addi r4, r29, 0x1530
    li r5, 0x0
    lwz r3, lbl_8087F3C0
    li r6, 0x1
    bl fn_80239DAC
lbl_fn_80251344_00000DD8:
    lwz r0, 0x154c(r29)
    cmpwi r0, 0x0
    beq lbl_fn_80251344_00000E24
    cmpwi r31, 0x0
    bne lbl_fn_80251344_00000E24
    lwz r3, lbl_8087F9E8
    lwz r4, 0x14fc(r29)
    bl fn_8059C8EC
    lwz r3, lbl_8087F3C0
    li r5, 0xb
    lwz r4, 0x14fc(r29)
    li r6, 0x10
    bl fn_8023A02C
    lwz r3, lbl_8087F3C0
    li r5, 0xb
    lwz r4, 0x14fc(r29)
    li r6, 0x8
    bl fn_8023A02C
    b lbl_fn_80251344_00000E40
lbl_fn_80251344_00000E24:
    cmpwi r0, 0x0
    bne lbl_fn_80251344_00000E40
    cmpwi r31, 0x0
    beq lbl_fn_80251344_00000E40
    lwz r3, lbl_8087F9E8
    lwz r4, 0x14fc(r29)
    bl fn_8059C990
lbl_fn_80251344_00000E40:
    lwz r0, 0x14bc(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80251344_0000115C
    lwz r3, lbl_8087F430
    li r4, 0x389
    li r5, 0x1
    li r6, 0x0
    bl fn_80370320
    lwz r3, 0x14fc(r29)
    cmpwi r3, 0x0
    beq lbl_fn_80251344_00000EF8
    li r4, 0x20
    li r5, 0x1
    bl fn_80179AD0
    lwz r3, 0x14fc(r29)
    li r4, 0x10
    li r5, 0x1
    bl fn_80179AD0
    lwz r3, 0x14fc(r29)
    li r4, 0x4
    li r5, 0x1
    bl fn_80179AD0
    lwz r3, 0x14fc(r29)
    li r4, 0x0
    lwz r12, 0x0(r3)
    lwz r12, 0x9c(r12)
    mtctr r12
    bctrl
    lwz r3, 0x14fc(r29)
    stw r29, 0x14b8(r3)
    lwz r3, 0x58c(r29)
    subi r0, r3, 0x9
    cmplwi r0, 0x2
    ble lbl_fn_80251344_00000EDC
    subi r0, r3, 0x5
    cmplwi r0, 0x1
    ble lbl_fn_80251344_00000EDC
    cmpwi r3, 0x1
    bne lbl_fn_80251344_00000EEC
lbl_fn_80251344_00000EDC:
    lwz r3, 0x14fc(r29)
    li r4, 0x1
    bl fn_801CCD00
    b lbl_fn_80251344_00000EF8
lbl_fn_80251344_00000EEC:
    lwz r3, 0x14fc(r29)
    li r4, 0x0
    bl fn_801CCD00
lbl_fn_80251344_00000EF8:
    lis r22, lbl_807C830C@ha
    lfs f30, lbl_8088334C
    lfs f31, lbl_80883350
    addi r22, r22, lbl_807C830C@l
    lfs f28, lbl_80883354
    li r31, 0x0
    lfs f29, lbl_80883358
    li r28, 0x0
    li r23, 0xb4
    lis r24, lbl_807C8318@ha
    li r25, -0x1
    li r26, 0x1
    lis r27, lbl_807C7030@ha
lbl_fn_80251344_00000F2C:
    cmplwi r31, 0x20
    lwz r0, lbl_8087F9E8
    blt lbl_fn_80251344_00000F40
    li r30, 0x0
    b lbl_fn_80251344_00000F48
lbl_fn_80251344_00000F40:
    add r3, r0, r28
    addi r30, r3, 0x48
lbl_fn_80251344_00000F48:
    lwz r4, 0x4(r30)
    li r3, 0x0
    cmpwi r4, 0x0
    beq lbl_fn_80251344_00000F68
    lwz r0, 0x0(r30)
    cmpwi r0, 0x3
    beq lbl_fn_80251344_00000F68
    li r3, 0x1
lbl_fn_80251344_00000F68:
    cmpwi r3, 0x0
    beq lbl_fn_80251344_00001148
    lwz r3, 0x8(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80251344_00000F88
    lwz r0, 0x48(r3)
    cmpwi r0, 0x2
    beq lbl_fn_80251344_00001148
lbl_fn_80251344_00000F88:
    cmpwi r4, 0x0
    beq lbl_fn_80251344_00001148
    lbz r0, 0x1(r4)
    cmpwi r0, 0x4
    bne lbl_fn_80251344_00001148
    lfs f3, 0x18(r30)
    lfs f0, 0x8(r22)
    fcmpo cr0, f3, f0
    ble lbl_fn_80251344_00001140
    lwz r3, 0xb0(r4)
    bl fn_800EFC64
    cmpwi r3, 0x0
    mr r21, r3
    beq lbl_fn_80251344_00001140
    lwz r3, lbl_8087F3C0
    addi r4, r29, 0x1530
    li r5, 0x0
    li r6, 0x1
    bl fn_80239DAC
    stw r23, 0x1540(r29)
    addi r3, r29, 0x1530
    lfs f3, 0x5c(r30)
    lfs f0, 0x28(r30)
    fmuls f0, f3, f0
    fmuls f4, f30, f0
    stfs f4, 0x153c(r29)
    psq_l f1, 0x10(r30), 0, 0
    lfs f2, 0x18(r30)
    stfs f2, 0x1538(r29)
    psq_st f1, 0x0(r3), 0, 0
    lfs f0, 0x8(r22)
    fmsubs f0, f31, f0, f2
    stfs f0, 0x1538(r29)
    fadds f3, f0, f4
    lfs f0, 0x8(r22)
    fcmpo cr0, f3, f0
    ble lbl_fn_80251344_00001024
    fsubs f0, f0, f4
    stfs f0, 0x1538(r29)
lbl_fn_80251344_00001024:
    lwz r4, 0x14fc(r29)
    cmpwi r4, 0x0
    beq lbl_fn_80251344_000010A4
    lfs f3, 0x1538(r29)
    addi r3, r1, 0x170
    lfs f0, 0x530(r4)
    lfs f5, 0x1534(r29)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r4)
    lfs f3, 0x1530(r29)
    lfs f0, 0x528(r4)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x174(r1)
    stfs f0, 0x170(r1)
    stfs f6, 0x178(r1)
    bl fn_805F9940
    lfs f4, 0x153c(r29)
    fcmpo cr0, f1, f4
    cror eq, lt, eq
    bne lbl_fn_80251344_000010A4
    lfs f3, lbl_807C8318@l(r24)
    lfs f0, 0x528(r29)
    fcmpo cr0, f3, f0
    ble lbl_fn_80251344_00001098
    lfs f0, 0x1530(r29)
    fadds f0, f0, f4
    stfs f0, 0x1530(r29)
    b lbl_fn_80251344_000010A4
lbl_fn_80251344_00001098:
    lfs f0, 0x1530(r29)
    fsubs f0, f0, f4
    stfs f0, 0x1530(r29)
lbl_fn_80251344_000010A4:
    addi r3, r29, 0x1530
    li r4, 0x0
    bl fn_80232B7C
    lfs f0, 0x153c(r29)
    mr r4, r21
    addi r7, r29, 0x1530
    addi r8, r27, lbl_807C7030@l
    fdivs f1, f0, f28
    stfs f29, 0x160(r1)
    addi r9, r1, 0x160
    li r5, 0x0
    stfs f29, 0x164(r1)
    li r6, 0x0
    stfs f29, 0x168(r1)
    li r10, -0x1
    stfs f29, 0x16c(r1)
    stw r25, 0x8(r1)
    stw r26, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r3, lbl_8087F3C0
    addi r4, r29, 0x1530
    li r5, 0x0
    li r6, 0x10
    bl fn_8023A02C
    lwz r3, lbl_8087F3C0
    addi r4, r29, 0x1530
    li r5, 0x0
    li r6, 0x8
    bl fn_8023A02C
    lwz r3, lbl_8087F430
    li r4, 0xe6
    bl fn_80370A78
    cmpwi r3, 0x0
    bne lbl_fn_80251344_00001140
    lwz r3, lbl_8087F430
    li r4, 0xe6
    li r5, 0x1
    bl fn_80370AE4
lbl_fn_80251344_00001140:
    mr r3, r30
    bl fn_805991E4
lbl_fn_80251344_00001148:
    addi r31, r31, 0x1
    addi r28, r28, 0x140
    cmpwi r31, 0x20
    blt lbl_fn_80251344_00000F2C
    b lbl_fn_80251344_00001684
lbl_fn_80251344_0000115C:
    cmpwi r0, 0x1
    bne lbl_fn_80251344_000012B8
    lwz r3, lbl_8087F3C0
    addi r4, r29, 0x1530
    li r5, 0x0
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F430
    li r4, 0x389
    li r5, 0x0
    li r6, 0x0
    bl fn_80370320
    lwz r3, 0x14fc(r29)
    li r0, 0x0
    stw r0, 0x1540(r29)
    cmpwi r3, 0x0
    beq lbl_fn_80251344_000011C4
    lwz r0, 0x54c(r3)
    rlwinm r5, r0, 0, 28, 28
    subfic r4, r5, 0x8
    subi r0, r5, 0x8
    or r0, r4, r0
    srwi. r0, r0, 31
    beq lbl_fn_80251344_000011C4
    li r4, 0x0
    bl fn_8016E4C4
lbl_fn_80251344_000011C4:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80251344_000011EC
    lwz r0, 0x560(r29)
    cmpwi r0, 0x7c
    beq lbl_fn_80251344_00001684
    cmpwi r0, 0x7e
    beq lbl_fn_80251344_00001684
    cmpwi r0, 0x7b
    beq lbl_fn_80251344_00001684
lbl_fn_80251344_000011EC:
    lfs f0, lbl_8088333C
    li r11, -0x1
    lfs f1, lbl_80883358
    li r0, 0x1
    stfs f0, 0x144(r1)
    addi r4, r29, 0x14c8
    lwz r3, lbl_8087F3C0
    addi r5, r29, 0xb0
    stfs f0, 0x148(r1)
    addi r7, r1, 0x138
    addi r8, r1, 0x144
    addi r9, r1, 0x150
    stfs f0, 0x14c(r1)
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x138(r1)
    stfs f0, 0x13c(r1)
    stfs f0, 0x140(r1)
    stfs f1, 0x150(r1)
    stfs f1, 0x154(r1)
    stfs f1, 0x158(r1)
    stfs f1, 0x15c(r1)
    stw r11, 0x8(r1)
    stw r0, 0xc(r1)
    bl fn_8023A8B4
    lis r4, lbl_80743AF4@ha
    lfs f1, lbl_80883358
    addi r4, r4, lbl_80743AF4@l
    addi r3, r1, 0x10
    addi r4, r4, 0xe4
    addi r5, r29, 0x528
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    lwz r3, 0x152c(r29)
    cmpwi r3, 0x0
    beq lbl_fn_80251344_0000129C
    psq_l f1, 0x4(r3), 0, 0
    lfs f2, 0xc(r3)
    stfs f2, 0x530(r29)
    psq_st f1, 0x528(r29), 0, 0
lbl_fn_80251344_0000129C:
    li r0, 0x2
    stw r0, 0x14bc(r29)
    li r4, 0x1
    li r4, 0x0
    mr r3, r29
    bl fn_8016E4C4
    b lbl_fn_80251344_00001684
lbl_fn_80251344_000012B8:
    cmpwi r0, 0x2
    bne lbl_fn_80251344_00001640
    lwz r3, lbl_8087F430
    li r4, 0x38a
    li r5, 0x1
    li r6, 0x0
    bl fn_80370320
    lwz r3, 0x14fc(r29)
    cmpwi r3, 0x0
    beq lbl_fn_80251344_00001400
    lwz r4, 0x1520(r29)
    lwz r0, 0x1524(r29)
    cmpw r4, r0
    bge lbl_fn_80251344_00001340
    lwz r0, 0x54c(r3)
    rlwinm r5, r0, 0, 28, 28
    subfic r4, r5, 0x8
    subi r0, r5, 0x8
    or r0, r4, r0
    srwi. r0, r0, 31
    bne lbl_fn_80251344_00001314
    li r4, 0x1
    bl fn_8016E4C4
lbl_fn_80251344_00001314:
    lwz r0, 0x54c(r29)
    rlwinm r4, r0, 0, 28, 28
    subfic r3, r4, 0x8
    subi r0, r4, 0x8
    or r0, r3, r0
    srwi. r0, r0, 31
    beq lbl_fn_80251344_0000138C
    mr r3, r29
    li r4, 0x0
    bl fn_8016E4C4
    b lbl_fn_80251344_0000138C
lbl_fn_80251344_00001340:
    lwz r0, 0x54c(r3)
    rlwinm r5, r0, 0, 28, 28
    subfic r4, r5, 0x8
    subi r0, r5, 0x8
    or r0, r4, r0
    srwi. r0, r0, 31
    beq lbl_fn_80251344_00001364
    li r4, 0x0
    bl fn_8016E4C4
lbl_fn_80251344_00001364:
    lwz r0, 0x54c(r29)
    rlwinm r4, r0, 0, 28, 28
    subfic r3, r4, 0x8
    subi r0, r4, 0x8
    or r0, r3, r0
    srwi. r0, r0, 31
    bne lbl_fn_80251344_0000138C
    mr r3, r29
    li r4, 0x1
    bl fn_8016E4C4
lbl_fn_80251344_0000138C:
    lwz r3, 0x14fc(r29)
    li r4, 0x2
    stw r29, 0x14b8(r3)
    lwz r3, 0x14fc(r29)
    bl fn_801CCD00
    lwz r3, 0x14fc(r29)
    li r4, 0x20
    li r5, 0x0
    bl fn_80179AD0
    lwz r3, 0x14fc(r29)
    li r4, 0x10
    li r5, 0x0
    bl fn_80179AD0
    lwz r3, 0x14fc(r29)
    li r4, 0x4
    li r5, 0x0
    bl fn_80179AD0
    lwz r3, lbl_8087F8A0
    lwz r3, 0x48(r3)
    addi r3, r3, 0x7d4
    lwz r0, 0xc(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_80251344_00001400
    lis r4, 0x3b9b
    li r6, 0x1
    subi r5, r4, 0x3601
    lis r4, 0x20
    bl fn_80133130
lbl_fn_80251344_00001400:
    lha r4, 0x1470(r29)
    cmpwi r4, 0x0
    beq lbl_fn_80251344_00001684
    lwz r3, 0x1474(r29)
    subic. r0, r3, 0x1
    stw r0, 0x1474(r29)
    bge lbl_fn_80251344_00001684
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x2
    bne lbl_fn_80251344_00001624
    cmpwi r4, 0xd
    beq lbl_fn_80251344_0000144C
    cmpwi r4, 0x1
    beq lbl_fn_80251344_000014EC
    cmpwi r4, 0x2
    beq lbl_fn_80251344_00001510
    cmpwi r4, 0xe
    beq lbl_fn_80251344_00001538
    b lbl_fn_80251344_00001684
lbl_fn_80251344_0000144C:
    lis r5, lbl_80743AF4@ha
    li r3, 0x8
    addi r5, r5, lbl_80743AF4@l
    li r4, 0x3
    addi r5, r5, 0x2b
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    mr r22, r3
    beq lbl_fn_80251344_000014D4
    stw r29, 0x4(r3)
    lis r4, lbl_80784340@ha
    addi r4, r4, lbl_80784340@l
    li r5, 0x25
    stw r4, 0x0(r3)
    li r0, 0x1
    lfs f0, lbl_80883358
    li r4, 0x0
    stw r5, 0x560(r29)
    li r5, 0x141
    lfs f1, lbl_8088333C
    li r6, 0x0
    lwz r3, 0x4(r3)
    li r7, 0x0
    lfs f2, lbl_8088335C
    li r8, 0x1
    stw r0, 0x3fc(r3)
    addi r23, r3, 0xb0
    mr r3, r23
    stfs f0, 0x24c(r23)
    bl fn_80097C08
    lfs f0, lbl_80883358
    stfs f0, 0x238(r23)
lbl_fn_80251344_000014D4:
    mr r3, r29
    mr r4, r22
    bl fn_80178208
    li r0, 0x0
    sth r0, 0x1470(r29)
    b lbl_fn_80251344_00001684
lbl_fn_80251344_000014EC:
    mr r3, r29
    addi r4, r29, 0x147c
    li r5, 0x0
    bl fn_80155A88
    li r3, 0x2
    li r0, 0x3c
    sth r3, 0x1470(r29)
    stw r0, 0x1478(r29)
    b lbl_fn_80251344_00001684
lbl_fn_80251344_00001510:
    lfs f1, lbl_80883338
    mr r3, r29
    li r4, 0x140
    li r5, 0x0
    fmr f2, f1
    li r6, 0x0
    bl fn_80161570
    li r0, 0x0
    sth r0, 0x1470(r29)
    b lbl_fn_80251344_00001684
lbl_fn_80251344_00001538:
    li r0, 0x0
    stw r0, 0x14b4(r29)
    stw r0, 0x14b8(r29)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r29)
    li r0, 0x8
    mr r3, r29
    li r4, 0x3
    stw r0, 0x58c(r29)
    bl fn_8016E970
    lfs f0, lbl_80883358
    li r28, 0x1
    stw r28, 0x3fc(r29)
    addi r3, r29, 0xb0
    lfs f1, lbl_8088333C
    li r4, 0x0
    stfs f0, 0x2fc(r29)
    li r5, 0x1ea
    lfs f2, lbl_8088335C
    li r6, 0x0
    stfs f0, 0x2e8(r29)
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    lwz r0, 0x14fc(r29)
    cmpwi r0, 0x0
    beq lbl_fn_80251344_00001618
    li r3, 0x0
    li r4, 0x0
    bl fn_80232B7C
    lwz r3, 0x14fc(r29)
    li r0, -0x1
    lfs f0, lbl_8088333C
    addi r4, r29, 0x14ec
    lfs f1, lbl_80883358
    addi r5, r3, 0xb0
    stfs f0, 0x120(r1)
    addi r7, r1, 0x12c
    lwz r3, lbl_8087F3C0
    addi r8, r1, 0x120
    stfs f0, 0x124(r1)
    addi r9, r1, 0x110
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x128(r1)
    stfs f0, 0x12c(r1)
    stfs f0, 0x130(r1)
    stfs f0, 0x134(r1)
    stfs f1, 0x110(r1)
    stfs f1, 0x114(r1)
    stfs f1, 0x118(r1)
    stfs f1, 0x11c(r1)
    stw r0, 0x8(r1)
    stw r28, 0xc(r1)
    bl fn_8023A8B4
lbl_fn_80251344_00001618:
    li r0, 0x0
    sth r0, 0x1470(r29)
    b lbl_fn_80251344_00001684
lbl_fn_80251344_00001624:
    lwz r3, 0x1478(r29)
    subic. r0, r3, 0x1
    stw r0, 0x1478(r29)
    bge lbl_fn_80251344_00001684
    li r0, 0x0
    sth r0, 0x1470(r29)
    b lbl_fn_80251344_00001684
lbl_fn_80251344_00001640:
    cmpwi r0, 0x3
    bne lbl_fn_80251344_00001684
    lwz r3, 0x14fc(r29)
    cmpwi r3, 0x0
    beq lbl_fn_80251344_00001684
    lwz r0, 0x54c(r3)
    rlwinm r5, r0, 0, 28, 28
    subfic r4, r5, 0x8
    subi r0, r5, 0x8
    or r0, r4, r0
    srwi. r0, r0, 31
    beq lbl_fn_80251344_00001678
    li r4, 0x0
    bl fn_8016E4C4
lbl_fn_80251344_00001678:
    lwz r3, 0x14fc(r29)
    li r4, 0x3
    bl fn_801CCD00
lbl_fn_80251344_00001684:
    lwz r0, 0xd18(r29)
    lwz r3, 0x14b8(r29)
    cmpwi r0, 0x0
    addi r0, r3, 0x1
    stw r0, 0x14b8(r29)
    bne lbl_fn_80251344_000016AC
    mr r3, r29
    li r4, 0x3
    bl fn_8016E970
    b lbl_fn_80251344_00001F44
lbl_fn_80251344_000016AC:
    lwz r0, 0x14bc(r29)
    cmpwi r0, 0x2
    beq lbl_fn_80251344_000016C0
    cmpwi r0, 0x3
    bne lbl_fn_80251344_0000174C
lbl_fn_80251344_000016C0:
    lwz r0, 0x58c(r29)
    cmpwi r0, 0x8
    bne lbl_fn_80251344_000016D8
    mr r3, r29
    bl fn_80253C9C
    b lbl_fn_80251344_00001F44
lbl_fn_80251344_000016D8:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x3
    bne lbl_fn_80251344_00001710
    mr r3, r29
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    bl fn_8015495C
    mr r3, r29
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8016EB48
lbl_fn_80251344_00001710:
    lwz r0, 0x7e0(r29)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_80251344_00001740
    lwz r0, 0x58c(r29)
    cmpwi r0, 0x2
    beq lbl_fn_80251344_00001740
    lwz r12, 0x0(r29)
    mr r3, r29
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
lbl_fn_80251344_00001740:
    mr r3, r29
    bl fn_800E9ED8
    b lbl_fn_80251344_00001F44
lbl_fn_80251344_0000174C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x2
    bne lbl_fn_80251344_00001764
    mr r3, r29
    li r4, 0x3
    bl fn_8016E970
lbl_fn_80251344_00001764:
    lwz r0, 0x58c(r29)
    cmpwi r0, 0x5
    beq lbl_fn_80251344_0000179C
    cmpwi r0, 0x1
    beq lbl_fn_80251344_00001AD8
    cmpwi r0, 0x6
    beq lbl_fn_80251344_00001AE4
    cmpwi r0, 0x9
    beq lbl_fn_80251344_00001B2C
    cmpwi r0, 0xa
    beq lbl_fn_80251344_00001E94
    cmpwi r0, 0xb
    beq lbl_fn_80251344_00001ED4
    b lbl_fn_80251344_00001F1C
lbl_fn_80251344_0000179C:
    lwz r0, 0x2dc(r29)
    cmpwi r0, 0x145
    bne lbl_fn_80251344_000017D8
    lfs f28, 0x2e4(r29)
    addi r3, r29, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f28, f1
    cror eq, gt, eq
    bne lbl_fn_80251344_00001F44
    lwz r4, lbl_8087F0A8
    mr r3, r29
    lwz r4, 0x80(r4)
    bl fn_80158EF0
    b lbl_fn_80251344_00001F44
lbl_fn_80251344_000017D8:
    psq_l f1, 0x534(r29), 0, 0
    addi r3, r1, 0x104
    lfs f2, 0x53c(r29)
    stfs f2, 0x10c(r1)
    lfs f28, lbl_8088333C
    psq_st f1, 0x0(r3), 0, 0
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x7
    bne lbl_fn_80251344_00001A10
    addi r3, r29, 0x1030
    bl fn_80126214
    addi r4, r29, 0x1088
    addi r22, r1, 0xf8
    psq_l f1, 0x0(r4), 0, 0
    mr r3, r22
    lfs f2, 0x1090(r29)
    stfs f2, 0x100(r1)
    psq_st f1, 0x0(r22), 0, 0
    bl fn_805F9940
    lfs f0, lbl_80883360
    fmr f28, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_80251344_00001A24
    addi r23, r1, 0xe0
    psq_l f1, 0x0(r22), 0, 0
    lfs f2, 0x100(r1)
    mr r3, r23
    psq_st f1, 0x0(r23), 0, 0
    mr r4, r23
    stfs f2, 0xe8(r1)
    bl fn_805F98D0
    lfs f2, 0xe8(r1)
    addi r22, r1, 0xec
    psq_l f1, 0x0(r23), 0, 0
    fabs f3, f2
    lfs f0, lbl_80883364
    psq_st f1, 0x0(r22), 0, 0
    frsp f3, f3
    stfs f2, 0xf4(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_80251344_000018A0
    lfs f3, 0xec(r1)
    lfs f0, lbl_8088333C
    fcmpo cr0, f3, f0
    ble lbl_fn_80251344_00001894
    lfs f0, lbl_80883368
    b lbl_fn_80251344_00001898
lbl_fn_80251344_00001894:
    lfs f0, lbl_8088336C
lbl_fn_80251344_00001898:
    stfs f0, 0xd8(r1)
    b lbl_fn_80251344_000018B4
lbl_fn_80251344_000018A0:
    frsp f2, f2
    lfs f1, 0xec(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0xd8(r1)
lbl_fn_80251344_000018B4:
    lfs f0, 0xd8(r1)
    addi r3, r1, 0x238
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_8088333C
    addi r4, r1, 0xc8
    lfs f30, 0x240(r1)
    mr r5, r4
    lfs f29, 0x23c(r1)
    addi r3, r1, 0x268
    lfs f13, 0x238(r1)
    lfs f12, 0x250(r1)
    lfs f11, 0x24c(r1)
    lfs f10, 0x248(r1)
    lfs f9, 0x260(r1)
    lfs f8, 0x25c(r1)
    lfs f7, 0x258(r1)
    lfs f6, 0x264(r1)
    lfs f5, 0x254(r1)
    lfs f4, 0x244(r1)
    lfs f0, lbl_80883358
    psq_l f1, 0x0(r22), 0, 0
    lfs f2, 0xf4(r1)
    stfs f3, 0x298(r1)
    stfs f3, 0x29c(r1)
    stfs f3, 0x2a0(r1)
    stfs f0, 0x2a4(r1)
    stfs f13, 0x98(r1)
    stfs f29, 0x9c(r1)
    stfs f30, 0xa0(r1)
    stfs f13, 0x268(r1)
    stfs f29, 0x26c(r1)
    stfs f30, 0x270(r1)
    stfs f10, 0xa4(r1)
    stfs f11, 0xa8(r1)
    stfs f12, 0xac(r1)
    stfs f10, 0x278(r1)
    stfs f11, 0x27c(r1)
    stfs f12, 0x280(r1)
    stfs f7, 0xb0(r1)
    stfs f8, 0xb4(r1)
    stfs f9, 0xb8(r1)
    stfs f7, 0x288(r1)
    stfs f8, 0x28c(r1)
    stfs f9, 0x290(r1)
    stfs f4, 0xbc(r1)
    stfs f5, 0xc0(r1)
    stfs f6, 0xc4(r1)
    stfs f4, 0x274(r1)
    stfs f5, 0x284(r1)
    stfs f6, 0x294(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xd0(r1)
    bl fn_805F9750
    lfs f2, 0xd0(r1)
    lfs f0, lbl_80883364
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80251344_000019D0
    lfs f3, 0xcc(r1)
    lfs f0, lbl_8088333C
    fcmpo cr0, f3, f0
    ble lbl_fn_80251344_000019C0
    lfs f0, lbl_80883368
    b lbl_fn_80251344_000019C4
lbl_fn_80251344_000019C0:
    lfs f0, lbl_8088336C
lbl_fn_80251344_000019C4:
    fneg f0, f0
    stfs f0, 0xd4(r1)
    b lbl_fn_80251344_000019E4
lbl_fn_80251344_000019D0:
    lfs f1, 0xcc(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0xd4(r1)
lbl_fn_80251344_000019E4:
    lfs f2, lbl_8088333C
    addi r3, r1, 0xd4
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x104
    stfs f2, 0xdc(r1)
    stfs f2, 0xf4(r1)
    frsp f2, f2
    psq_st f1, 0x0(r22), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x10c(r1)
    b lbl_fn_80251344_00001A24
lbl_fn_80251344_00001A10:
    cmpwi r0, 0x6
    bne lbl_fn_80251344_00001A24
    mr r3, r29
    bl fn_8013A258
    b lbl_fn_80251344_00001A3C
lbl_fn_80251344_00001A24:
    fmr f1, f28
    lfs f2, 0x568(r29)
    mr r3, r29
    addi r4, r1, 0x104
    li r5, 0x1
    bl fn_8013CB68
lbl_fn_80251344_00001A3C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80251344_00001AAC
    lwz r0, 0x560(r29)
    cmpwi r0, 0xc
    bne lbl_fn_80251344_00001AAC
    lwz r3, 0xf80(r29)
    lfs f0, lbl_8088333C
    lfs f3, 0x8(r3)
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    mfcr r0
    extrwi. r0, r0, 1, 2
    beq lbl_fn_80251344_00001F44
    li r0, 0x0
    stw r0, 0x14b4(r29)
    stw r0, 0x14b8(r29)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r29)
    li r0, 0x1
    li r3, 0xc8
    stw r0, 0x58c(r29)
    bl fn_80219E6C
    mr r4, r3
    mr r3, r29
    bl fn_801561E4
    b lbl_fn_80251344_00001F44
lbl_fn_80251344_00001AAC:
    li r28, 0x0
    stw r28, 0x14b4(r29)
    stw r28, 0x14b8(r29)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r29)
    mr r3, r29
    li r4, 0x3
    stw r28, 0x58c(r29)
    bl fn_8016E970
    b lbl_fn_80251344_00001F44
lbl_fn_80251344_00001AD8:
    mr r3, r29
    bl fn_80253884
    b lbl_fn_80251344_00001F44
lbl_fn_80251344_00001AE4:
    lfs f28, 0x2e4(r29)
    addi r3, r29, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f28, f1
    cror eq, gt, eq
    bne lbl_fn_80251344_00001F44
    li r28, 0x0
    stw r28, 0x14b4(r29)
    stw r28, 0x14b8(r29)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r29)
    mr r3, r29
    li r4, 0x3
    stw r28, 0x58c(r29)
    bl fn_8016E970
    b lbl_fn_80251344_00001F44
lbl_fn_80251344_00001B2C:
    lwz r4, 0xd1c(r29)
    cmpwi r4, 0x0
    beq lbl_fn_80251344_00001D20
    lfs f3, 0x530(r4)
    addi r3, r1, 0x14
    lfs f0, 0x530(r29)
    addi r22, r1, 0x38
    lfs f5, 0x52c(r4)
    fsubs f2, f3, f0
    lfs f4, 0x52c(r29)
    lfs f3, 0x528(r4)
    fsubs f5, f5, f4
    lfs f0, 0x528(r29)
    stfs f2, 0x1c(r1)
    fsubs f4, f3, f0
    lfs f0, lbl_80883364
    frsp f3, f2
    stfs f4, 0x14(r1)
    fabs f4, f3
    stfs f5, 0x18(r1)
    psq_l f1, 0x0(r3), 0, 0
    frsp f4, f4
    psq_st f1, 0x0(r22), 0, 0
    stfs f2, 0x40(r1)
    fcmpo cr0, f4, f0
    bge lbl_fn_80251344_00001BB8
    lfs f3, 0x38(r1)
    lfs f0, lbl_8088333C
    fcmpo cr0, f3, f0
    ble lbl_fn_80251344_00001BAC
    lfs f0, lbl_80883368
    b lbl_fn_80251344_00001BB0
lbl_fn_80251344_00001BAC:
    lfs f0, lbl_8088336C
lbl_fn_80251344_00001BB0:
    stfs f0, 0x54(r1)
    b lbl_fn_80251344_00001BCC
lbl_fn_80251344_00001BB8:
    fmr f2, f3
    lfs f1, 0x38(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x54(r1)
lbl_fn_80251344_00001BCC:
    lfs f0, 0x54(r1)
    addi r3, r1, 0x1d8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_8088333C
    addi r4, r1, 0x5c
    lfs f4, 0x1e0(r1)
    mr r5, r4
    lfs f5, 0x1dc(r1)
    addi r3, r1, 0x198
    lfs f6, 0x1d8(r1)
    lfs f7, 0x1f0(r1)
    lfs f8, 0x1ec(r1)
    lfs f9, 0x1e8(r1)
    lfs f10, 0x200(r1)
    lfs f11, 0x1fc(r1)
    lfs f12, 0x1f8(r1)
    lfs f13, 0x204(r1)
    lfs f28, 0x1f4(r1)
    lfs f29, 0x1e4(r1)
    lfs f0, lbl_80883358
    psq_l f1, 0x0(r22), 0, 0
    lfs f2, 0x40(r1)
    stfs f3, 0x1c8(r1)
    stfs f3, 0x1cc(r1)
    stfs f3, 0x1d0(r1)
    stfs f0, 0x1d4(r1)
    stfs f6, 0x8c(r1)
    stfs f5, 0x90(r1)
    stfs f4, 0x94(r1)
    stfs f6, 0x198(r1)
    stfs f5, 0x19c(r1)
    stfs f4, 0x1a0(r1)
    stfs f9, 0x80(r1)
    stfs f8, 0x84(r1)
    stfs f7, 0x88(r1)
    stfs f9, 0x1a8(r1)
    stfs f8, 0x1ac(r1)
    stfs f7, 0x1b0(r1)
    stfs f12, 0x74(r1)
    stfs f11, 0x78(r1)
    stfs f10, 0x7c(r1)
    stfs f12, 0x1b8(r1)
    stfs f11, 0x1bc(r1)
    stfs f10, 0x1c0(r1)
    stfs f29, 0x68(r1)
    stfs f28, 0x6c(r1)
    stfs f13, 0x70(r1)
    stfs f29, 0x1a4(r1)
    stfs f28, 0x1b4(r1)
    stfs f13, 0x1c4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x64(r1)
    bl fn_805F9750
    lfs f2, 0x64(r1)
    lfs f0, lbl_80883364
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80251344_00001CE8
    lfs f3, 0x60(r1)
    lfs f0, lbl_8088333C
    fcmpo cr0, f3, f0
    ble lbl_fn_80251344_00001CD8
    lfs f0, lbl_80883368
    b lbl_fn_80251344_00001CDC
lbl_fn_80251344_00001CD8:
    lfs f0, lbl_8088336C
lbl_fn_80251344_00001CDC:
    fneg f0, f0
    stfs f0, 0x50(r1)
    b lbl_fn_80251344_00001CFC
lbl_fn_80251344_00001CE8:
    lfs f1, 0x60(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x50(r1)
lbl_fn_80251344_00001CFC:
    lfs f2, lbl_8088333C
    addi r3, r1, 0x50
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x58(r1)
    stfs f2, 0x40(r1)
    frsp f2, f2
    psq_st f1, 0x0(r22), 0, 0
    psq_st f1, 0x534(r29), 0, 0
    stfs f2, 0x53c(r29)
lbl_fn_80251344_00001D20:
    lfs f28, 0x2e4(r29)
    addi r3, r29, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f28, f1
    cror eq, gt, eq
    bne lbl_fn_80251344_00001D68
    li r28, 0x0
    stw r28, 0x14b4(r29)
    stw r28, 0x14b8(r29)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r29)
    mr r3, r29
    li r4, 0x3
    stw r28, 0x58c(r29)
    bl fn_8016E970
    b lbl_fn_80251344_00001F44
lbl_fn_80251344_00001D68:
    lfs f4, 0x2e4(r29)
    lfs f3, lbl_80883370
    lfs f0, lbl_80883364
    fsubs f3, f4, f3
    fabs f3, f3
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80251344_00001F44
    li r3, 0x6d6
    bl fn_80219E6C
    psq_l f1, 0x528(r29), 0, 0
    addi r4, r1, 0x20
    lfs f2, 0x530(r29)
    mr r22, r3
    stfs f2, 0x28(r1)
    psq_st f1, 0x0(r4), 0, 0
    lwz r3, 0x14fc(r29)
    cmpwi r3, 0x0
    beq lbl_fn_80251344_00001E30
    lis r4, lbl_80743AF4@ha
    addi r23, r3, 0xb0
    addi r4, r4, lbl_80743AF4@l
    li r5, 0x0
    mr r3, r23
    addi r4, r4, 0xf3
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80251344_00001DE0
    li r4, 0x0
    b lbl_fn_80251344_00001DEC
lbl_fn_80251344_00001DE0:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r23)
    add r4, r3, r0
lbl_fn_80251344_00001DEC:
    lfs f2, 0x2c(r4)
    lis r3, lbl_807C830C@ha
    addi r3, r3, lbl_807C830C@l
    lfs f6, 0x1c(r4)
    frsp f0, f2
    lfs f5, 0xc(r4)
    lfs f3, 0x8(r3)
    addi r4, r1, 0x44
    lfs f4, lbl_80883350
    addi r3, r1, 0x20
    fmsubs f0, f4, f3, f0
    stfs f5, 0x44(r1)
    stfs f6, 0x48(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0x4c(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f0, 0x28(r1)
lbl_fn_80251344_00001E30:
    lfs f3, lbl_8088333C
    addi r3, r1, 0x208
    lfs f0, lbl_80883358
    li r4, 0x79
    stfs f3, 0x2c(r1)
    stfs f3, 0x30(r1)
    stfs f0, 0x34(r1)
    lfs f1, 0x538(r29)
    bl fn_805F8E70
    addi r4, r1, 0x2c
    addi r3, r1, 0x208
    mr r5, r4
    bl fn_805F93C0
    lwz r3, lbl_8087F048
    mr r4, r29
    lfs f1, lbl_8088333C
    mr r5, r22
    lfs f2, lbl_80883358
    addi r6, r1, 0x20
    addi r7, r1, 0x2c
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_800F8574
    b lbl_fn_80251344_00001F44
lbl_fn_80251344_00001E94:
    mr r3, r29
    bl fn_802531F4
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_80251344_00001F44
    li r28, 0x0
    stw r28, 0x14b4(r29)
    stw r28, 0x14b8(r29)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r29)
    mr r3, r29
    li r4, 0x3
    stw r28, 0x58c(r29)
    bl fn_8016E970
    b lbl_fn_80251344_00001F44
lbl_fn_80251344_00001ED4:
    lfs f28, 0x2e4(r29)
    addi r3, r29, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f28, f1
    cror eq, gt, eq
    bne lbl_fn_80251344_00001F44
    li r28, 0x0
    stw r28, 0x14b4(r29)
    stw r28, 0x14b8(r29)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r29)
    mr r3, r29
    li r4, 0x3
    stw r28, 0x58c(r29)
    bl fn_8016E970
    b lbl_fn_80251344_00001F44
lbl_fn_80251344_00001F1C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x3
    bne lbl_fn_80251344_00001F30
    mr r3, r29
    bl fn_80252E6C
lbl_fn_80251344_00001F30:
    lwz r0, 0x58c(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80251344_00001F44
    mr r3, r29
    bl fn_802531F4
lbl_fn_80251344_00001F44:
    mr r3, r29
    bl fn_8014C540
    mr r3, r29
    bl fn_80145334
    lwz r0, 0x14bc(r29)
    cmpwi r0, 0x2
    beq lbl_fn_80251344_00001F68
    cmpwi r0, 0x3
    bne lbl_fn_80251344_00001F9C
lbl_fn_80251344_00001F68:
    lwz r3, 0x14fc(r29)
    cmpwi r3, 0x0
    beq lbl_fn_80251344_00001F9C
    psq_l f1, 0x5f4(r3), 0, 0
    lfs f2, 0x5fc(r3)
    stfs f2, 0x5fc(r29)
    psq_st f1, 0x5f4(r29), 0, 0
    psq_l f1, 0x600(r3), 0, 0
    lfs f2, 0x608(r3)
    stfs f2, 0x608(r29)
    psq_st f1, 0x600(r29), 0, 0
    lfs f0, 0x60c(r3)
    stfs f0, 0x60c(r29)
lbl_fn_80251344_00001F9C:
    lwz r3, lbl_8087F048
    mr r4, r29
    bl fn_80103F60
    cmpwi r3, 0x0
    mr r23, r3
    beq lbl_fn_80251344_00002024
    lwz r3, lbl_8087F8A0
    lfs f30, lbl_80883358
    lwz r22, 0x48(r3)
    b lbl_fn_80251344_0000201C
lbl_fn_80251344_00001FC4:
    mr r3, r23
    mr r4, r22
    bl fn_80108378
    cmpwi r3, 0x0
    blt lbl_fn_80251344_00002018
    lwz r0, 0x14bc(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80251344_0000200C
    lwz r0, 0x1504(r29)
    cmplw r22, r0
    bne lbl_fn_80251344_00001FF8
    lfs f0, lbl_80883358
    b lbl_fn_80251344_00001FFC
lbl_fn_80251344_00001FF8:
    lfs f0, lbl_8088333C
lbl_fn_80251344_00001FFC:
    slwi r0, r3, 2
    add r3, r23, r0
    stfs f0, 0x128(r3)
    b lbl_fn_80251344_00002018
lbl_fn_80251344_0000200C:
    slwi r0, r3, 2
    add r3, r23, r0
    stfs f30, 0x128(r3)
lbl_fn_80251344_00002018:
    lwz r22, 0x14ac(r22)
lbl_fn_80251344_0000201C:
    cmpwi r22, 0x0
    bne lbl_fn_80251344_00001FC4
lbl_fn_80251344_00002024:
    lwz r0, lbl_8087F3D8
    cmpwi r0, 0x0
    bne lbl_fn_80251344_000020D0
    lwz r3, lbl_8087F430
    li r4, 0xea
    bl fn_80370A78
    cmpwi r3, 0x0
    bne lbl_fn_80251344_000020C8
    li r21, 0x0
    li r22, 0x0
lbl_fn_80251344_0000204C:
    cmplwi r21, 0x20
    lwz r0, lbl_8087F9E8
    blt lbl_fn_80251344_00002060
    li r3, 0x0
    b lbl_fn_80251344_00002068
lbl_fn_80251344_00002060:
    add r3, r0, r22
    addi r3, r3, 0x48
lbl_fn_80251344_00002068:
    cmpwi r3, 0x0
    beq lbl_fn_80251344_000020B8
    lwz r0, 0x4(r3)
    li r4, 0x0
    cmpwi r0, 0x0
    beq lbl_fn_80251344_00002090
    lwz r0, 0x0(r3)
    cmpwi r0, 0x3
    beq lbl_fn_80251344_00002090
    li r4, 0x1
lbl_fn_80251344_00002090:
    cmpwi r4, 0x0
    beq lbl_fn_80251344_000020B8
    bl fn_8059A268
    cmpwi r3, 0x0
    beq lbl_fn_80251344_000020B8
    lwz r3, lbl_8087F430
    li r4, 0xea
    li r5, 0x1
    bl fn_80370AE4
    b lbl_fn_80251344_000020C8
lbl_fn_80251344_000020B8:
    addi r21, r21, 0x1
    addi r22, r22, 0x140
    cmplwi r21, 0x20
    blt lbl_fn_80251344_0000204C
lbl_fn_80251344_000020C8:
    li r0, 0x1
    stw r0, lbl_8087F3D8
lbl_fn_80251344_000020D0:
    lwz r0, 0x14bc(r29)
    cmpwi r0, 0x0
    beq lbl_fn_80251344_00002110
    lwz r0, 0x7e0(r29)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_80251344_00002110
    lwz r3, lbl_8087F430
    li r4, 0xeb
    bl fn_80370A78
    cmpwi r3, 0x0
    bne lbl_fn_80251344_00002110
    lwz r3, lbl_8087F430
    li r4, 0xeb
    li r5, 0x1
    bl fn_80370AE4
lbl_fn_80251344_00002110:
    addi r11, r1, 0x2e0
    psq_l f31, 0x318(r1), 0, 0
    lfd f31, 0x310(r1)
    psq_l f30, 0x308(r1), 0, 0
    lfd f30, 0x300(r1)
    psq_l f29, 0x2f8(r1), 0, 0
    lfd f29, 0x2f0(r1)
    psq_l f28, 0x2e8(r1), 0, 0
    lfd f28, 0x2e0(r1)
    bl _restgpr_21
    lwz r0, 0x324(r1)
    mtlr r0
    addi r1, r1, 0x320
    blr
}
