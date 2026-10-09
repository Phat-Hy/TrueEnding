#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_25(void);
extern void _restgpr_27(void);
extern void _savegpr_25(void);
extern void _savegpr_27(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_80084A78(void);
extern void fn_80084C24(void);
extern void fn_80097D40(void);
extern void fn_80097D7C(void);
extern void fn_800C31F4(void);
extern void fn_800CB3A0(void);
extern void fn_800DCA6C(void);
extern void fn_800E70EC(void);
extern void fn_800E7214(void);
extern void fn_800E73EC(void);
extern void fn_800E7BB0(void);
extern void fn_800E8688(void);
extern void fn_800E8FB8(void);
extern void fn_800E9110(void);
extern void fn_800F8548(void);
extern void fn_800F8C6C(void);
extern void fn_800FFE68(void);
extern void fn_80108A54(void);
extern void fn_8010CA34(void);
extern void fn_8011E81C(void);
extern void fn_801231D0(void);
extern void fn_801237F0(void);
extern void fn_801240B4(void);
extern void fn_80134134(void);
extern void fn_80139560(void);
extern void fn_80144710(void);
extern void fn_80155790(void);
extern void fn_80155DAC(void);
extern void fn_80158BB4(void);
extern void fn_80158CA4(void);
extern void fn_8016AFE8(void);
extern void fn_8016D74C(void);
extern void fn_8016DA4C(void);
extern void fn_8016DC14(void);
extern void fn_8016DCD4(void);
extern void fn_8016E484(void);
extern void fn_8016E970(void);
extern void fn_80178018(void);
extern void fn_80178078(void);
extern void fn_80178208(void);
extern void fn_801A72EC(void);
extern void fn_801E97DC(void);
extern void fn_801E9ECC(void);
extern void fn_8021921C(void);
extern void fn_80219344(void);
extern void fn_80219558(void);
extern void fn_80219E6C(void);
extern void fn_8021AF98(void);
extern void fn_80370174(void);
extern void fn_80373FC4(void);
extern void fn_803748E0(void);
extern void fn_80375184(void);
extern void fn_803761AC(void);
extern void fn_8037EF30(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9990(void);
extern void fn_8068A850(void);
extern void fn_806952C4(void);
extern void fn_80695AD0(void);
extern char* strcpy(char* dest, const char* src);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80735238[];
extern u8 lbl_80735250[];
extern u8 lbl_80735260[];
extern u8 lbl_80735324[];
extern u8 lbl_80766768[];
extern u8 lbl_80775B30[];
extern u8 lbl_80775B60[];
extern u8 lbl_80775B98[];
extern u8 lbl_80775BC8[];
extern u8 lbl_80779B18[];
extern u8 lbl_80779B24[];
extern u8 lbl_80779B30[];

/* Small data declarations */
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F120;
extern u32 lbl_8087F430;
extern u32 lbl_8087F610;
extern u32 lbl_8087F9C0;
extern u32 lbl_808812D8;
extern u32 lbl_808812DC;
extern u32 lbl_808812E0;
extern u32 lbl_808812E4;
extern u32 lbl_808812E8;
extern u32 lbl_808812F4;
extern u32 lbl_808812FC;
extern u32 lbl_80881318;
extern u32 lbl_8088131C;
extern u32 lbl_80881330;
extern u32 lbl_80881348;
extern u32 lbl_80881350;
extern u32 lbl_80881354;
extern u32 lbl_80881358;
extern u32 lbl_8088135C;
extern u32 lbl_80881360;
extern u32 lbl_80881364;
extern u32 lbl_80881368;
extern u32 lbl_8088136C;
extern u32 lbl_80881370;
extern u32 lbl_80881374;

/* Function declarations */
void fn_800E589C(void);
void fn_800E60FC(void);
void fn_800E6104(void);
void fn_800E610C(void);
void fn_800E62AC(void);

asm void fn_800E589C(void)
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
    bl _savegpr_27
    lwz r4, 0x55c(r3)
    mr r30, r3
    lwz r31, lbl_8087F0A8
    li r29, 0x0
    cmpwi r4, 0x6
    bne lbl_fn_800E589C_0000004C
    lwz r0, 0x560(r3)
    cmpwi r0, 0x1c
    bne lbl_fn_800E589C_0000004C
    li r29, 0x1
lbl_fn_800E589C_0000004C:
    lwz r5, 0x58c(r3)
    subi r0, r5, 0x3
    cmplwi r0, 0x1
    ble lbl_fn_800E589C_00000830
    cmpwi r5, 0x0
    beq lbl_fn_800E589C_00000078
    cmpwi r5, 0x1
    beq lbl_fn_800E589C_0000010C
    cmpwi r5, 0x2
    beq lbl_fn_800E589C_00000818
    b lbl_fn_800E589C_00000838
lbl_fn_800E589C_00000078:
    cmpwi r4, 0x1
    bne lbl_fn_800E589C_000000B4
    li r4, 0xc8
    addi r3, r3, 0xb0
    bl fn_80097D40
    cmpwi r3, 0x0
    beq lbl_fn_800E589C_000000B4
    lfs f1, lbl_808812D8
    addi r3, r30, 0x1188
    lfs f2, lbl_808812DC
    li r4, 0xc8
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    bl fn_8011E81C
lbl_fn_800E589C_000000B4:
    mr r3, r30
    bl fn_80139560
    cmpwi r29, 0x0
    beq lbl_fn_800E589C_00000838
    lwz r0, 0x55c(r30)
    cmpwi r0, 0x6
    bne lbl_fn_800E589C_000000DC
    lwz r0, 0x560(r30)
    cmpwi r0, 0x1c
    beq lbl_fn_800E589C_00000838
lbl_fn_800E589C_000000DC:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_800E589C_00000838
    lwz r0, 0x868(r3)
    cmpwi r0, 0x6
    bne lbl_fn_800E589C_00000838
    li r4, 0x1
    bl fn_803748E0
    lwz r3, lbl_8087F430
    li r0, 0x1
    stw r0, 0x94c(r3)
    b lbl_fn_800E589C_00000838
lbl_fn_800E589C_0000010C:
    lfs f2, 0x53c(r3)
    addi r4, r1, 0x2c
    psq_l f1, 0x534(r3), 0, 0
    mr r3, r30
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x34(r1)
    bl fn_80158BB4
    cmpwi r3, 0x0
    beq lbl_fn_800E589C_000001AC
    lwz r0, 0x55c(r30)
    cmpwi r0, 0x6
    bne lbl_fn_800E589C_00000150
    lwz r0, 0x560(r30)
    cmpwi r0, 0xd
    beq lbl_fn_800E589C_00000158
    cmpwi r0, 0x1d
    beq lbl_fn_800E589C_00000158
lbl_fn_800E589C_00000150:
    mr r3, r30
    bl fn_8016DA4C
lbl_fn_800E589C_00000158:
    lwz r0, 0x55c(r30)
    li r4, 0x0
    lwz r3, 0x14a8(r30)
    cmpwi r0, 0x6
    stw r4, 0x1424(r30)
    rlwinm r3, r3, 0, 2, 0
    stw r3, 0x14a8(r30)
    stw r4, 0x58c(r30)
    bne lbl_fn_800E589C_00000194
    lwz r0, 0x560(r30)
    cmpwi r0, 0x4
    blt lbl_fn_800E589C_00000194
    cmpwi r0, 0xc
    bge lbl_fn_800E589C_00000194
    li r4, 0x1
lbl_fn_800E589C_00000194:
    cmpwi r4, 0x0
    beq lbl_fn_800E589C_00000590
    mr r3, r30
    li r4, 0x1
    bl fn_8016E970
    b lbl_fn_800E589C_00000590
lbl_fn_800E589C_000001AC:
    lwz r3, 0x560(r30)
    subi r0, r3, 0x4
    cmplwi r0, 0x1
    bgt lbl_fn_800E589C_00000590
    lwz r3, 0x50(r30)
    lfs f3, lbl_80881318
    subis r0, r3, 0xa
    cmplwi r0, 0xae76
    beq lbl_fn_800E589C_000001D8
    cmplwi r0, 0xae77
    bne lbl_fn_800E589C_000001EC
lbl_fn_800E589C_000001D8:
    addi r3, r30, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    lfs f0, lbl_80881330
    fsubs f3, f1, f0
lbl_fn_800E589C_000001EC:
    lwz r4, 0x1424(r30)
    cmpwi r4, 0x0
    ble lbl_fn_800E589C_00000588
    lfs f0, 0x2e4(r30)
    fcmpo cr0, f0, f3
    cror eq, gt, eq
    bne lbl_fn_800E589C_00000588
    lfs f0, lbl_808812DC
    li r3, 0x0
    stw r3, 0x38(r1)
    subi r0, r4, 0x1
    stw r3, 0x3c(r1)
    stw r3, 0x40(r1)
    stfs f0, 0x44(r1)
    stfs f0, 0x48(r1)
    stfs f0, 0x4c(r1)
    lwz r3, 0x2dc(r30)
    stw r0, 0x1424(r30)
    cmpwi r3, 0x158
    beq lbl_fn_800E589C_00000268
    cmpwi r3, 0x159
    beq lbl_fn_800E589C_00000270
    cmpwi r3, 0x15a
    beq lbl_fn_800E589C_00000278
    cmpwi r3, 0x15b
    beq lbl_fn_800E589C_00000280
    cmpwi r3, 0x16a
    beq lbl_fn_800E589C_00000288
    cmpwi r3, 0x161
    beq lbl_fn_800E589C_00000290
    b lbl_fn_800E589C_00000298
lbl_fn_800E589C_00000268:
    lfs f31, lbl_80881348
    b lbl_fn_800E589C_0000029C
lbl_fn_800E589C_00000270:
    lfs f31, lbl_80881350
    b lbl_fn_800E589C_0000029C
lbl_fn_800E589C_00000278:
    lfs f31, lbl_80881354
    b lbl_fn_800E589C_0000029C
lbl_fn_800E589C_00000280:
    lfs f31, lbl_80881354
    b lbl_fn_800E589C_0000029C
lbl_fn_800E589C_00000288:
    lfs f31, lbl_80881358
    b lbl_fn_800E589C_0000029C
lbl_fn_800E589C_00000290:
    lfs f31, lbl_8088135C
    b lbl_fn_800E589C_0000029C
lbl_fn_800E589C_00000298:
    lfs f31, lbl_80881350
lbl_fn_800E589C_0000029C:
    lwz r0, 0x560(r30)
    cmpwi r0, 0x4
    bne lbl_fn_800E589C_00000314
    lwz r0, 0x2b0(r31)
    cmpwi r0, 0x0
    beq lbl_fn_800E589C_00000314
    lfs f0, 0x2e4(r30)
    fcmpo cr0, f0, f31
    cror eq, gt, eq
    bne lbl_fn_800E589C_00000314
    lwz r5, 0x638(r30)
    lis r3, 0x4330
    lis r4, lbl_80735250@ha
    lwz r0, 0x7e8(r30)
    lwz r5, 0x68(r5)
    stw r3, 0xc0(r1)
    rlwinm r0, r0, 0, 18, 18
    xoris r3, r5, 0x8000
    lfd f4, lbl_80735250@l(r4)
    stw r3, 0xc4(r1)
    cmplwi r0, 0x2000
    lfs f0, lbl_80881360
    lfd f3, 0xc0(r1)
    fsubs f3, f3, f4
    fdivs f30, f0, f3
    bne lbl_fn_800E589C_00000310
    lwz r3, lbl_8087F048
    bl fn_8010CA34
    fmuls f30, f30, f1
lbl_fn_800E589C_00000310:
    stfs f30, 0x2e8(r30)
lbl_fn_800E589C_00000314:
    mr r3, r30
    li r4, 0x1
    li r5, -0x1
    li r6, 0x0
    bl fn_800E70EC
    lfs f3, 0x2e4(r30)
    mr r29, r3
    lfs f0, lbl_80881364
    fcmpo cr0, f3, f0
    ble lbl_fn_800E589C_00000498
    lwz r0, 0x12a4(r30)
    srwi. r0, r0, 31
    bne lbl_fn_800E589C_00000498
    lwz r27, 0x1424(r30)
    li r0, 0x0
    stw r0, 0x1424(r30)
    lwz r4, lbl_8087F9C0
    lwz r0, 0x28(r4)
    cmpwi r0, 0x0
    beq lbl_fn_800E589C_0000036C
    cmpwi r3, 0x0
    beq lbl_fn_800E589C_00000494
lbl_fn_800E589C_0000036C:
    mr r3, r30
    addi r4, r1, 0x38
    li r5, 0x1
    bl fn_800E7214
    cmpwi r3, 0x0
    beq lbl_fn_800E589C_000003AC
    lwz r0, 0x14a8(r30)
    addi r4, r1, 0x44
    addi r3, r30, 0x1444
    oris r0, r0, 0x4000
    stw r0, 0x14a8(r30)
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x4c(r1)
    stfs f2, 0x144c(r30)
    psq_st f1, 0x0(r3), 0, 0
    b lbl_fn_800E589C_00000494
lbl_fn_800E589C_000003AC:
    cmpwi r29, 0x0
    beq lbl_fn_800E589C_00000494
    lwz r0, 0x14a8(r30)
    mr r4, r30
    addi r3, r1, 0x20
    oris r0, r0, 0x4000
    stw r0, 0x14a8(r30)
    lwz r28, lbl_8087F048
    bl fn_80178018
    lfs f3, lbl_80881368
    mr r3, r28
    lfs f0, 0x2a8(r31)
    mr r4, r30
    lfs f1, 0x2a4(r31)
    addi r5, r1, 0x20
    fmuls f2, f3, f0
    li r6, 0x0
    li r7, 0x0
    bl fn_800FFE68
    cmpwi r3, 0x0
    beq lbl_fn_800E589C_0000041C
    stw r3, 0x38(r1)
    addi r4, r30, 0x1444
    psq_l f1, 0x528(r3), 0, 0
    lfs f2, 0x530(r3)
    stfs f2, 0x144c(r30)
    psq_st f1, 0x0(r4), 0, 0
    b lbl_fn_800E589C_00000494
lbl_fn_800E589C_0000041C:
    li r0, 0x0
    stw r0, 0x38(r1)
    lfs f3, lbl_808812DC
    mr r4, r30
    lfs f0, lbl_808812E8
    addi r3, r1, 0x14
    stfs f3, 0x1444(r30)
    stfs f3, 0x1448(r30)
    stfs f0, 0x144c(r30)
    bl fn_80178018
    lfs f1, 0x18(r1)
    addi r3, r1, 0x50
    li r4, 0x79
    bl fn_805F8E70
    addi r4, r30, 0x1444
    addi r3, r1, 0x50
    mr r5, r4
    bl fn_805F93C0
    lfs f3, 0x1444(r30)
    lfs f0, 0x528(r30)
    lfs f5, 0x1448(r30)
    fadds f6, f3, f0
    lfs f4, 0x52c(r30)
    lfs f3, 0x144c(r30)
    lfs f0, 0x530(r30)
    fadds f4, f5, f4
    stfs f6, 0x1444(r30)
    fadds f0, f3, f0
    stfs f4, 0x1448(r30)
    stfs f0, 0x144c(r30)
lbl_fn_800E589C_00000494:
    stw r27, 0x1424(r30)
lbl_fn_800E589C_00000498:
    lwz r0, 0x14a8(r30)
    extrwi. r0, r0, 1, 2
    beq lbl_fn_800E589C_000004EC
    lfs f3, 0x2b4(r31)
    lfs f0, lbl_808812DC
    fcmpo cr0, f3, f0
    ble lbl_fn_800E589C_000004EC
    lwz r0, 0x2dc(r30)
    cmpwi r0, 0x162
    bne lbl_fn_800E589C_000004D8
    addi r3, r30, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    lfs f0, lbl_80881330
    fsubs f31, f1, f0
    b lbl_fn_800E589C_000004EC
lbl_fn_800E589C_000004D8:
    addi r3, r30, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    lfs f0, lbl_808812E0
    fsubs f31, f1, f0
lbl_fn_800E589C_000004EC:
    lwz r3, lbl_8087F9C0
    lwz r0, 0x28(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800E589C_00000528
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    beq lbl_fn_800E589C_00000528
    lwz r0, 0x2dc(r30)
    cmpwi r0, 0x162
    bne lbl_fn_800E589C_0000051C
    lfs f31, lbl_808812F4
    b lbl_fn_800E589C_00000528
lbl_fn_800E589C_0000051C:
    cmpwi r0, 0x163
    bne lbl_fn_800E589C_00000528
    lfs f31, lbl_808812F4
lbl_fn_800E589C_00000528:
    lwz r0, 0x14a8(r30)
    extrwi. r0, r0, 1, 1
    beq lbl_fn_800E589C_00000590
    lfs f0, 0x2e4(r30)
    fcmpo cr0, f0, f31
    cror eq, gt, eq
    bne lbl_fn_800E589C_00000590
    cmpwi r29, 0x0
    bne lbl_fn_800E589C_00000564
    lwz r3, lbl_8087F0A8
    li r4, 0x7
    addi r3, r3, 0x48c
    bl fn_801240B4
    cmpwi r3, 0x0
    bne lbl_fn_800E589C_00000590
lbl_fn_800E589C_00000564:
    lwz r6, 0x38(r1)
    mr r3, r30
    addi r7, r30, 0x1444
    li r4, 0xc8
    li r5, 0x0
    li r8, 0x0
    li r9, 0x0
    bl fn_800E8688
    b lbl_fn_800E589C_00000590
lbl_fn_800E589C_00000588:
    lfs f0, lbl_808812DC
    stfs f0, 0x13b4(r30)
lbl_fn_800E589C_00000590:
    lwz r0, 0x2dc(r30)
    lwz r31, lbl_8087F0A8
    cmpwi r0, 0x158
    beq lbl_fn_800E589C_000005CC
    cmpwi r0, 0x159
    beq lbl_fn_800E589C_000005D4
    cmpwi r0, 0x15a
    beq lbl_fn_800E589C_000005DC
    cmpwi r0, 0x15b
    beq lbl_fn_800E589C_000005E4
    cmpwi r0, 0x16a
    beq lbl_fn_800E589C_000005EC
    cmpwi r0, 0x161
    beq lbl_fn_800E589C_000005F4
    b lbl_fn_800E589C_000005FC
lbl_fn_800E589C_000005CC:
    lfs f31, lbl_80881348
    b lbl_fn_800E589C_00000600
lbl_fn_800E589C_000005D4:
    lfs f31, lbl_80881350
    b lbl_fn_800E589C_00000600
lbl_fn_800E589C_000005DC:
    lfs f31, lbl_80881354
    b lbl_fn_800E589C_00000600
lbl_fn_800E589C_000005E4:
    lfs f31, lbl_80881354
    b lbl_fn_800E589C_00000600
lbl_fn_800E589C_000005EC:
    lfs f31, lbl_80881358
    b lbl_fn_800E589C_00000600
lbl_fn_800E589C_000005F4:
    lfs f31, lbl_8088135C
    b lbl_fn_800E589C_00000600
lbl_fn_800E589C_000005FC:
    lfs f31, lbl_80881350
lbl_fn_800E589C_00000600:
    lwz r0, 0x14a8(r30)
    extrwi. r0, r0, 1, 2
    beq lbl_fn_800E589C_00000668
    lfs f3, 0x2b4(r31)
    lfs f0, lbl_808812DC
    fcmpo cr0, f3, f0
    ble lbl_fn_800E589C_00000668
    lfs f0, 0x2e4(r30)
    fcmpo cr0, f0, f31
    cror eq, gt, eq
    bne lbl_fn_800E589C_00000668
    addi r3, r30, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fsubs f3, f1, f31
    lfs f0, 0x2b4(r31)
    lwz r0, 0x7e8(r30)
    fadds f0, f3, f0
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    fdivs f31, f3, f0
    bne lbl_fn_800E589C_00000664
    lwz r3, lbl_8087F048
    bl fn_8010CA34
    fmuls f31, f31, f1
lbl_fn_800E589C_00000664:
    stfs f31, 0x2e8(r30)
lbl_fn_800E589C_00000668:
    mr r3, r30
    bl fn_80139560
    lwz r0, lbl_8087F048
    cmpwi r0, 0x0
    beq lbl_fn_800E589C_00000838
    mr r3, r30
    bl fn_80158CA4
    cmpwi r3, 0x0
    beq lbl_fn_800E589C_00000838
    lwz r0, 0x560(r30)
    cmpwi r0, 0xb
    beq lbl_fn_800E589C_00000838
    lwz r0, 0xf80(r30)
    cmpwi r0, 0x0
    bne lbl_fn_800E589C_000006C4
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0xc8(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0xcc(r1)
    stw r0, 0xd0(r1)
    b lbl_fn_800E589C_000006E0
lbl_fn_800E589C_000006C4:
    lis r5, lbl_80779B18@ha
    lwzu r4, lbl_80779B18@l(r5)
    stw r4, 0xc8(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0xcc(r1)
    stw r0, 0xd0(r1)
lbl_fn_800E589C_000006E0:
    lwz r5, 0xc8(r1)
    addi r3, r1, 0x8
    lwz r4, 0xcc(r1)
    lwz r0, 0xd0(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_800E589C_00000754
    lwz r3, 0xf80(r30)
    lwz r12, 0x0(r3)
    lwz r12, 0x30(r12)
    mtctr r12
    bctrl
    lwz r0, 0x598(r30)
    cmpw r3, r0
    ble lbl_fn_800E589C_00000754
    lwz r3, 0xf80(r30)
    lwz r12, 0x0(r3)
    lwz r12, 0x30(r12)
    mtctr r12
    bctrl
    li r0, 0x1
    stw r3, 0x598(r30)
    stw r0, 0x594(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
lbl_fn_800E589C_00000754:
    lwz r0, 0x594(r30)
    cmpwi r0, 0x0
    beq lbl_fn_800E589C_00000838
    mr r3, r30
    bl fn_80144710
    lwz r0, 0x12a4(r30)
    mr r6, r30
    lwz r3, lbl_8087F048
    addi r4, r1, 0x80
    srwi. r0, r0, 31
    lwz r7, 0x638(r30)
    lwz r8, 0x590(r30)
    li r5, 0x8
    beq lbl_fn_800E589C_00000794
    lfs f1, lbl_8088131C
    b lbl_fn_800E589C_00000798
lbl_fn_800E589C_00000794:
    lfs f1, lbl_808812DC
lbl_fn_800E589C_00000798:
    lwz r10, 0x594(r30)
    li r9, 0x1e
    bl fn_800F8C6C
    cmpwi r3, 0x0
    ble lbl_fn_800E589C_00000838
    lwz r0, 0x594(r30)
    cmpwi r0, 0x0
    ble lbl_fn_800E589C_000007C0
    subf r0, r3, r0
    stw r0, 0x594(r30)
lbl_fn_800E589C_000007C0:
    addi r5, r1, 0x80
    li r4, 0x0
    mtctr r3
    cmpwi r3, 0x0
    ble lbl_fn_800E589C_000007F0
lbl_fn_800E589C_000007D4:
    lwz r0, 0x4(r5)
    rlwinm r0, r0, 0, 28, 28
    cmplwi r0, 0x8
    bne lbl_fn_800E589C_000007E8
    li r4, 0x1
lbl_fn_800E589C_000007E8:
    addi r5, r5, 0x8
    bdnz lbl_fn_800E589C_000007D4
lbl_fn_800E589C_000007F0:
    cmpwi r4, 0x0
    beq lbl_fn_800E589C_00000838
    lwz r3, 0x560(r30)
    subi r0, r3, 0x4
    cmplwi r0, 0x1
    bgt lbl_fn_800E589C_00000838
    lwz r0, 0x14a8(r30)
    oris r0, r0, 0x2000
    stw r0, 0x14a8(r30)
    b lbl_fn_800E589C_00000838
lbl_fn_800E589C_00000818:
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0xec(r12)
    mtctr r12
    bctrl
    b lbl_fn_800E589C_00000838
lbl_fn_800E589C_00000830:
    mr r3, r30
    bl fn_80139560
lbl_fn_800E589C_00000838:
    addi r11, r1, 0xf0
    psq_l f31, 0x108(r1), 0, 0
    lfd f31, 0x100(r1)
    psq_l f30, 0xf8(r1), 0, 0
    lfd f30, 0xf0(r1)
    bl _restgpr_27
    lwz r0, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_800E60FC(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_800E6104(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    blr
}

asm void fn_800E610C(void)
{
    nofralloc
    stwu r1, -0xf0(r1)
    mflr r0
    lfs f1, lbl_808812DC
    stw r0, 0xf4(r1)
    lfs f0, lbl_808812D8
    stfd f31, 0xe0(r1)
    psq_st f31, 0xe8(r1), 0, 0
    stw r31, 0xdc(r1)
    stw r30, 0xd8(r1)
    mr r30, r3
    mr r4, r30
    addi r3, r1, 0x14
    stfs f1, 0x38(r1)
    stfs f1, 0x3c(r1)
    stfs f0, 0x40(r1)
    bl fn_80178018
    lfs f1, 0x18(r1)
    addi r3, r1, 0xa8
    li r4, 0x79
    bl fn_805F8E70
    addi r4, r1, 0x38
    addi r3, r1, 0xa8
    mr r5, r4
    bl fn_805F93C0
    lfs f1, lbl_808812DC
    addi r3, r1, 0x48
    lfs f0, lbl_808812D8
    li r4, 0x79
    stfs f1, 0x2c(r1)
    stfs f1, 0x30(r1)
    stfs f0, 0x34(r1)
    lfs f1, 0x538(r30)
    bl fn_805F8E70
    addi r4, r1, 0x2c
    addi r3, r1, 0x48
    mr r5, r4
    bl fn_805F93C0
    lis r3, lbl_80735260@ha
    lfd f1, lbl_80735260@l(r3)
    bl fn_8068A850
    frsp f31, f1
    addi r3, r1, 0x2c
    addi r4, r1, 0x38
    bl fn_805F9990
    fcmpo cr0, f1, f31
    blt lbl_fn_800E610C_0000093C
    mr r3, r30
    addi r4, r1, 0x2c
    bl fn_8016AFE8
    cmpwi r3, 0x0
    bne lbl_fn_800E610C_000009F0
lbl_fn_800E610C_0000093C:
    lwz r0, 0x12a4(r30)
    lwz r3, lbl_8087F0A8
    extrwi. r0, r0, 1, 21
    lwz r31, 0x458(r3)
    beq lbl_fn_800E610C_00000958
    cmpwi r31, 0x1
    beq lbl_fn_800E610C_000009F0
lbl_fn_800E610C_00000958:
    lfs f1, lbl_808812DC
    mr r4, r30
    lfs f0, lbl_808812D8
    addi r3, r1, 0x8
    stfs f1, 0x20(r1)
    stfs f1, 0x24(r1)
    stfs f0, 0x28(r1)
    bl fn_80178018
    lfs f1, 0xc(r1)
    addi r3, r1, 0x78
    li r4, 0x79
    bl fn_805F8E70
    addi r4, r1, 0x20
    addi r3, r1, 0x78
    mr r5, r4
    bl fn_805F93C0
    mr r3, r30
    addi r4, r1, 0x20
    bl fn_80155790
    lwz r0, 0x12a4(r30)
    extrwi r0, r0, 1, 21
    cmpwi cr1, r0, 0x0
    beq cr1, lbl_fn_800E610C_000009F0
    cmpwi r31, 0x2
    bne lbl_fn_800E610C_000009F0
    beq cr1, lbl_fn_800E610C_000009F0
    addi r31, r30, 0x1260
    b lbl_fn_800E610C_000009D8
lbl_fn_800E610C_000009C8:
    lwz r3, 0x4(r31)
    addi r4, r1, 0x20
    bl fn_80155790
    addi r31, r31, 0x8
lbl_fn_800E610C_000009D8:
    lwz r0, 0x125c(r30)
    slwi r0, r0, 3
    add r3, r30, r0
    addi r0, r3, 0x1260
    cmplw r31, r0
    bne lbl_fn_800E610C_000009C8
lbl_fn_800E610C_000009F0:
    lwz r0, 0xf4(r1)
    psq_l f31, 0xe8(r1), 0, 0
    lfd f31, 0xe0(r1)
    lwz r31, 0xdc(r1)
    lwz r30, 0xd8(r1)
    mtlr r0
    addi r1, r1, 0xf0
    blr
}

asm void fn_800E62AC(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    addi r11, r1, 0xb0
    bl _savegpr_25
    lwz r0, lbl_8087F610
    lis r7, 0x4330
    stw r7, 0x68(r1)
    mr r25, r3
    cmpwi r0, 0x0
    lwz r31, lbl_8087F0A8
    stw r7, 0x70(r1)
    mr r26, r4
    mr r27, r5
    mr r28, r6
    li r29, 0x1
    bne lbl_fn_800E62AC_00000DB8
    lwz r3, lbl_8087F430
    bl fn_80375184
    cmpwi r3, 0x0
    beq lbl_fn_800E62AC_00000DB8
    lwz r0, 0x944(r25)
    cmpwi r0, 0x0
    ble lbl_fn_800E62AC_00000A94
    xoris r0, r0, 0x8000
    stw r0, 0x6c(r1)
    lis r3, lbl_80735250@ha
    lfs f0, 0x7dc(r25)
    lfd f2, lbl_80735250@l(r3)
    lfd f1, 0x68(r1)
    fsubs f1, f1, f2
    fdivs f2, f0, f1
    b lbl_fn_800E62AC_00000A98
lbl_fn_800E62AC_00000A94:
    lfs f2, lbl_808812DC
lbl_fn_800E62AC_00000A98:
    lfs f1, lbl_808812D8
    lfs f0, lbl_808812FC
    fsubs f1, f2, f1
    fabs f1, f1
    frsp f1, f1
    fcmpo cr0, f1, f0
    bge lbl_fn_800E62AC_00000DB8
    lwz r3, lbl_8087F430
    li r4, 0x88
    bl fn_80370174
    cmpwi r3, 0x0
    bne lbl_fn_800E62AC_00000DB8
    lwz r3, lbl_8087F0A8
    li r4, 0x31
    addi r3, r3, 0x48c
    bl fn_801231D0
    cmpwi r3, 0x0
    beq lbl_fn_800E62AC_00000DB8
    lwz r0, 0x55c(r25)
    li r3, 0x0
    cmpwi r0, 0x1
    bne lbl_fn_800E62AC_00000AF8
    li r3, 0x1
    b lbl_fn_800E62AC_00000D7C
lbl_fn_800E62AC_00000AF8:
    cmpwi r0, 0x6
    bne lbl_fn_800E62AC_00000D7C
    lwz r0, 0x560(r25)
    cmpwi r0, 0x4
    beq lbl_fn_800E62AC_00000B1C
    cmpwi r0, 0x2
    beq lbl_fn_800E62AC_00000B1C
    cmpwi r0, 0x61
    bne lbl_fn_800E62AC_00000D7C
lbl_fn_800E62AC_00000B1C:
    lwz r0, 0xf80(r25)
    cmpwi r0, 0x0
    bne lbl_fn_800E62AC_00000B48
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x78(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x7c(r1)
    stw r0, 0x80(r1)
    b lbl_fn_800E62AC_00000B64
lbl_fn_800E62AC_00000B48:
    lis r5, lbl_80779B24@ha
    lwzu r4, lbl_80779B24@l(r5)
    stw r4, 0x78(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x7c(r1)
    stw r0, 0x80(r1)
lbl_fn_800E62AC_00000B64:
    lwz r5, 0x78(r1)
    addi r3, r1, 0x44
    lwz r4, 0x7c(r1)
    lwz r0, 0x80(r1)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_800E62AC_00000D78
    lwz r3, 0xf80(r25)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    lwz r4, 0xf80(r25)
    addi r3, r1, 0x50
    lwz r12, 0x0(r4)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    lwz r3, 0xf80(r25)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r25)
    beq lbl_fn_800E62AC_00000BE0
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_800E62AC_00000BE0:
    lwz r0, 0x50(r1)
    cmpwi r0, 0x0
    bne lbl_fn_800E62AC_00000C0C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x84(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x88(r1)
    stw r0, 0x8c(r1)
    b lbl_fn_800E62AC_00000C28
lbl_fn_800E62AC_00000C0C:
    lis r5, lbl_80779B30@ha
    lwzu r4, lbl_80779B30@l(r5)
    stw r4, 0x84(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x88(r1)
    stw r0, 0x8c(r1)
lbl_fn_800E62AC_00000C28:
    lwz r5, 0x84(r1)
    addi r3, r1, 0x38
    lwz r4, 0x88(r1)
    lwz r0, 0x8c(r1)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_800E62AC_00000D3C
    lwz r0, 0x50(r1)
    cmpwi r0, 0x0
    bne lbl_fn_800E62AC_00000D28
    lis r4, lbl_80775B60@ha
    li r0, 0x0
    addi r4, r4, lbl_80775B60@l
    lis r3, lbl_80775BC8@ha
    stw r4, 0x20(r1)
    addi r3, r3, lbl_80775BC8@l
    stb r0, 0x8(r1)
    bl strlen
    addi r3, r3, 0x1
    slwi r0, r3, 1
    subf r3, r3, r0
    bl fn_80084A78
    addi r0, r1, 0x8
    stw r3, 0x24(r1)
    mr r30, r3
    stw r3, 0x18(r1)
    li r3, 0x10
    stw r0, 0x1c(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    beq lbl_fn_800E62AC_00000CCC
    li r0, 0x1
    stw r0, 0x4(r3)
    lis r4, lbl_80775B98@ha
    stw r0, 0x8(r3)
    addi r4, r4, lbl_80775B98@l
    stw r4, 0x0(r3)
    stw r30, 0xc(r3)
lbl_fn_800E62AC_00000CCC:
    li r0, 0x0
    stw r3, 0x28(r1)
    stw r0, 0x18(r1)
    b lbl_fn_800E62AC_00000CE0
    bl fn_80084C24
lbl_fn_800E62AC_00000CE0:
    lis r4, lbl_80775BC8@ha
    lwz r3, 0x24(r1)
    addi r4, r4, lbl_80775BC8@l
    bl strcpy
    lis r4, lbl_80775B30@ha
    addi r3, r1, 0x20
    addi r4, r4, lbl_80775B30@l
    stw r4, 0x20(r1)
    bl fn_800DCA6C
    addic. r3, r1, 0x20
    beq lbl_fn_800E62AC_00000D28
    addic. r3, r3, 0x4
    beq lbl_fn_800E62AC_00000D28
    beq lbl_fn_800E62AC_00000D28
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_800E62AC_00000D28
    bl fn_806952C4
lbl_fn_800E62AC_00000D28:
    lwz r4, 0x50(r1)
    addi r3, r1, 0x54
    lwz r12, 0x4(r4)
    mtctr r12
    bctrl
lbl_fn_800E62AC_00000D3C:
    addic. r3, r1, 0x50
    beq lbl_fn_800E62AC_00000D78
    lwz r4, 0x50(r1)
    cmpwi r4, 0x0
    beq lbl_fn_800E62AC_00000D78
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_800E62AC_00000D70
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_800E62AC_00000D70:
    li r0, 0x0
    stw r0, 0x50(r1)
lbl_fn_800E62AC_00000D78:
    li r3, 0x1
lbl_fn_800E62AC_00000D7C:
    lwz r0, 0x12a4(r25)
    extrwi. r0, r0, 1, 28
    bne lbl_fn_800E62AC_00000DA0
    lwz r0, 0x139c(r25)
    cmpwi r0, 0x0
    bne lbl_fn_800E62AC_00000DA0
    lwz r0, 0x1208(r25)
    cmpwi r0, 0x0
    beq lbl_fn_800E62AC_00000DA4
lbl_fn_800E62AC_00000DA0:
    li r3, 0x0
lbl_fn_800E62AC_00000DA4:
    cmpwi r3, 0x0
    beq lbl_fn_800E62AC_00000DB8
    lwz r3, lbl_8087F430
    bl fn_80373FC4
    b lbl_fn_800E62AC_000017F4
lbl_fn_800E62AC_00000DB8:
    lwz r0, 0x55c(r25)
    cmpwi r0, 0x1
    beq lbl_fn_800E62AC_00000F34
    cmpwi r0, 0x6
    li r27, 0x0
    bne lbl_fn_800E62AC_00000E74
    lwz r0, 0x560(r25)
    cmpwi r0, 0x14
    bne lbl_fn_800E62AC_00000DE4
    li r27, 0x1
    b lbl_fn_800E62AC_00000E74
lbl_fn_800E62AC_00000DE4:
    cmpwi r0, 0xa
    bne lbl_fn_800E62AC_00000E74
    lfs f1, 0x2e4(r25)
    li r27, 0x1
    lfs f0, lbl_8088136C
    fcmpo cr0, f1, f0
    ble lbl_fn_800E62AC_00000E74
    lfs f0, lbl_80881318
    fcmpo cr0, f1, f0
    bge lbl_fn_800E62AC_00000E74
    lwz r4, 0xf80(r25)
    li r0, 0x1
    mr r3, r25
    stw r0, 0x1c(r4)
    bl fn_8016E484
    cmpwi r3, 0x0
    beq lbl_fn_800E62AC_00000E54
    li r3, 0x2
    bl fn_8021AF98
    mr r4, r3
    mr r3, r25
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    li r9, 0x0
    bl fn_800E8688
    b lbl_fn_800E62AC_00000E74
lbl_fn_800E62AC_00000E54:
    mr r3, r25
    li r4, 0xd0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    li r9, 0x0
    bl fn_800E8688
lbl_fn_800E62AC_00000E74:
    lwz r0, 0x12a4(r25)
    rlwimi r0, r27, 5, 26, 26
    stw r0, 0x12a4(r25)
    li r4, 0x7
    lwz r3, lbl_8087F0A8
    addi r3, r3, 0x48c
    bl fn_801240B4
    lwz r0, 0x55c(r25)
    cntlzw r3, r3
    srwi r4, r3, 5
    cmpwi r0, 0x6
    bne lbl_fn_800E62AC_00000EDC
    lwz r3, 0x560(r25)
    subi r0, r3, 0x14
    cmplwi r0, 0x3
    ble lbl_fn_800E62AC_00000ED8
    subi r0, r3, 0x1c
    cmplwi r0, 0x1
    ble lbl_fn_800E62AC_00000ED8
    cmpwi r3, 0x3b
    beq lbl_fn_800E62AC_00000ED8
    cmpwi r3, 0xf
    beq lbl_fn_800E62AC_00000ED8
    cmpwi r3, 0xa
    bne lbl_fn_800E62AC_00000EDC
lbl_fn_800E62AC_00000ED8:
    li r4, 0x1
lbl_fn_800E62AC_00000EDC:
    cmpwi r4, 0x0
    beq lbl_fn_800E62AC_00000EEC
    li r0, 0x0
    stw r0, 0xfc0(r25)
lbl_fn_800E62AC_00000EEC:
    lwz r0, 0x55c(r25)
    cmpwi r0, 0x6
    bne lbl_fn_800E62AC_000017F4
    lwz r3, 0x560(r25)
    subi r0, r3, 0x4
    cmplwi r0, 0x1
    ble lbl_fn_800E62AC_00000F18
    cmpwi r3, 0x9
    beq lbl_fn_800E62AC_00000F18
    b lbl_fn_800E62AC_000017F4
    b lbl_fn_800E62AC_000017F4
lbl_fn_800E62AC_00000F18:
    lfs f1, 0x2e4(r25)
    lfs f0, 0x2b8(r31)
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    mfcr r29
    extrwi r29, r29, 1, 2
    b lbl_fn_800E62AC_00001390
lbl_fn_800E62AC_00000F34:
    lwz r3, 0x1424(r25)
    cmpwi r3, 0x0
    ble lbl_fn_800E62AC_00000F48
    subi r0, r3, 0x1
    stw r0, 0x1424(r25)
lbl_fn_800E62AC_00000F48:
    lwz r3, 0x12a4(r25)
    addi r30, r26, 0x6c
    extrwi. r0, r3, 1, 4
    beq lbl_fn_800E62AC_00000F74
    lwz r0, 0x12a4(r25)
    li r3, 0x0
    stw r3, 0xfc0(r25)
    li r29, 0x0
    rlwinm r0, r0, 0, 27, 25
    stw r0, 0x12a4(r25)
    b lbl_fn_800E62AC_00001390
lbl_fn_800E62AC_00000F74:
    srwi. r0, r3, 31
    li r3, 0x0
    beq lbl_fn_800E62AC_00000F90
    lwz r0, 0xc48(r25)
    cmpwi r0, 0x0
    beq lbl_fn_800E62AC_00000F90
    li r3, 0x1
lbl_fn_800E62AC_00000F90:
    cmpwi r3, 0x0
    beq lbl_fn_800E62AC_00000FD0
    lwz r0, 0x12a4(r25)
    li r3, 0x0
    stw r3, 0xfc0(r25)
    mr r3, r25
    rlwinm r0, r0, 0, 27, 25
    mr r5, r27
    stw r0, 0x12a4(r25)
    mr r6, r28
    li r4, 0x0
    bl fn_800E70EC
    cmpwi r3, 0x0
    beq lbl_fn_800E62AC_00001390
    li r29, 0x0
    b lbl_fn_800E62AC_00001390
lbl_fn_800E62AC_00000FD0:
    lwz r3, 0x12a4(r25)
    extrwi. r0, r3, 1, 25
    beq lbl_fn_800E62AC_00001184
    lwz r0, 0x12a4(r25)
    li r3, 0x0
    stw r3, 0xfc0(r25)
    li r4, 0x12
    rlwinm r0, r0, 0, 27, 25
    stw r0, 0x12a4(r25)
    lwz r3, lbl_8087F0A8
    addi r3, r3, 0x48c
    bl fn_801240B4
    cmpwi r3, 0x0
    bne lbl_fn_800E62AC_00001018
    mr r3, r25
    li r4, 0x0
    bl fn_80155DAC
    b lbl_fn_800E62AC_00001390
lbl_fn_800E62AC_00001018:
    lwz r3, 0x50(r25)
    subis r3, r3, 0xb
    addi r0, r3, 0x518a
    cmplwi r0, 0x1
    bgt lbl_fn_800E62AC_00001390
    lwz r3, lbl_8087F0A8
    li r4, 0x17
    addi r3, r3, 0x48c
    bl fn_801237F0
    cmpwi r3, 0x0
    beq lbl_fn_800E62AC_00001084
    lwz r3, lbl_8087F120
    li r4, -0x1
    li r5, 0x1
    bl fn_801E9ECC
    lis r4, lbl_80735238@ha
    lfs f1, lbl_808812D8
    addi r4, r4, lbl_80735238@l
    addi r3, r1, 0x14
    lwz r4, 0x10(r4)
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x14
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_800E62AC_0000113C
lbl_fn_800E62AC_00001084:
    lwz r3, lbl_8087F0A8
    li r4, 0x18
    addi r3, r3, 0x48c
    bl fn_801237F0
    cmpwi r3, 0x0
    beq lbl_fn_800E62AC_000010DC
    lwz r3, lbl_8087F120
    li r4, 0x1
    li r5, 0x1
    bl fn_801E9ECC
    lis r4, lbl_80735238@ha
    lfs f1, lbl_808812D8
    addi r4, r4, lbl_80735238@l
    addi r3, r1, 0x10
    lwz r4, 0x10(r4)
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_800E62AC_0000113C
lbl_fn_800E62AC_000010DC:
    lwz r3, lbl_8087F0A8
    li r4, 0x1a
    addi r3, r3, 0x48c
    bl fn_801237F0
    cmpwi r3, 0x0
    beq lbl_fn_800E62AC_0000112C
    lwz r3, lbl_8087F120
    bl fn_801E97DC
    lis r4, lbl_80735238@ha
    lfs f1, lbl_808812D8
    addi r4, r4, lbl_80735238@l
    addi r3, r1, 0xc
    lwz r4, 0x10(r4)
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_800E62AC_0000113C
lbl_fn_800E62AC_0000112C:
    lwz r3, lbl_8087F0A8
    li r4, 0x1b
    addi r3, r3, 0x48c
    bl fn_801237F0
lbl_fn_800E62AC_0000113C:
    lwz r3, lbl_8087F0A8
    li r4, 0x6
    addi r3, r3, 0x48c
    bl fn_801231D0
    cmpwi r3, 0x0
    beq lbl_fn_800E62AC_00001390
    lwz r0, 0x640(r25)
    cmpwi r0, 0x0
    bgt lbl_fn_800E62AC_00001390
    lwz r0, 0xfb0(r25)
    cmpwi r0, 0x0
    bgt lbl_fn_800E62AC_00001390
    lwz r0, 0x12a8(r25)
    mr r3, r25
    rlwinm r0, r0, 0, 24, 22
    stw r0, 0x12a8(r25)
    bl fn_800E8FB8
    b lbl_fn_800E62AC_00001390
lbl_fn_800E62AC_00001184:
    lwz r0, 0x1208(r25)
    cmpwi r0, 0x0
    bne lbl_fn_800E62AC_000011B0
    extrwi. r0, r3, 1, 28
    bne lbl_fn_800E62AC_000011B0
    lwz r0, 0xf54(r25)
    cmpwi r0, 0x0
    bne lbl_fn_800E62AC_000011B0
    lwz r0, 0x139c(r25)
    cmpwi r0, 0x0
    beq lbl_fn_800E62AC_000011F8
lbl_fn_800E62AC_000011B0:
    lwz r0, 0x12a4(r25)
    li r3, 0x0
    stw r3, 0xfc0(r25)
    li r29, 0x0
    rlwinm r0, r0, 0, 27, 25
    li r4, 0x11
    stw r0, 0x12a4(r25)
    lwz r3, lbl_8087F0A8
    addi r3, r3, 0x48c
    bl fn_801231D0
    cmpwi r3, 0x0
    beq lbl_fn_800E62AC_00001390
    lfs f1, lbl_808812E4
    mr r3, r30
    li r4, 0x0
    li r5, 0x1
    bl fn_8037EF30
    b lbl_fn_800E62AC_00001390
lbl_fn_800E62AC_000011F8:
    extrwi. r0, r3, 1, 26
    beq lbl_fn_800E62AC_00001328
    lwz r3, lbl_8087F0A8
    li r4, 0x16
    addi r3, r3, 0x48c
    bl fn_801231D0
    cmpwi r3, 0x0
    beq lbl_fn_800E62AC_00001220
    mr r3, r25
    bl fn_800E610C
lbl_fn_800E62AC_00001220:
    lwz r0, 0x12a4(r25)
    srwi. r0, r0, 31
    beq lbl_fn_800E62AC_00001238
    li r0, 0x0
    stw r0, 0xfc0(r25)
    b lbl_fn_800E62AC_000012C8
lbl_fn_800E62AC_00001238:
    lwz r3, lbl_8087F0A8
    li r4, 0x1e
    addi r3, r3, 0x48c
    bl fn_801231D0
    cmpwi r3, 0x0
    beq lbl_fn_800E62AC_000012BC
    lwz r0, 0xfc4(r25)
    cmpwi r0, 0x0
    beq lbl_fn_800E62AC_000012A8
    lwz r30, lbl_8087F048
    mr r4, r25
    addi r3, r1, 0x2c
    bl fn_80178018
    lfs f1, 0x264(r31)
    mr r3, r30
    lfs f2, 0x26c(r31)
    mr r4, r25
    addi r5, r1, 0x2c
    li r6, 0x0
    li r7, 0x1
    bl fn_800FFE68
    mr r4, r3
    mr r3, r25
    li r5, 0x0
    bl fn_8016DC14
    lwz r0, 0xfc4(r25)
    stw r0, 0xfc0(r25)
    b lbl_fn_800E62AC_000012C8
lbl_fn_800E62AC_000012A8:
    lwz r4, 0xfc0(r25)
    mr r3, r25
    li r5, 0x0
    bl fn_8016DC14
    b lbl_fn_800E62AC_000012C8
lbl_fn_800E62AC_000012BC:
    lwz r3, lbl_8087F048
    mr r4, r25
    bl fn_80108A54
lbl_fn_800E62AC_000012C8:
    lwz r0, 0x12a4(r25)
    mr r3, r25
    mr r5, r27
    mr r6, r28
    ori r0, r0, 0x20
    stw r0, 0x12a4(r25)
    li r4, 0x0
    bl fn_800E70EC
    cmpwi r3, 0x0
    beq lbl_fn_800E62AC_000012F4
    li r29, 0x0
lbl_fn_800E62AC_000012F4:
    lwz r3, lbl_8087F0A8
    li r4, 0x7
    addi r3, r3, 0x48c
    bl fn_801240B4
    cmpwi r3, 0x0
    bne lbl_fn_800E62AC_00001390
    lwz r0, 0x12a8(r25)
    extrwi. r0, r0, 1, 15
    bne lbl_fn_800E62AC_00001390
    lwz r0, 0x12a4(r25)
    rlwinm r0, r0, 0, 27, 25
    stw r0, 0x12a4(r25)
    b lbl_fn_800E62AC_00001390
lbl_fn_800E62AC_00001328:
    lwz r3, lbl_8087F0A8
    li r4, 0x16
    addi r3, r3, 0x48c
    bl fn_801231D0
    cmpwi r3, 0x0
    beq lbl_fn_800E62AC_00001378
    cmpwi r28, 0x0
    bne lbl_fn_800E62AC_00001350
    cmpwi r27, -0x1
    beq lbl_fn_800E62AC_00001368
lbl_fn_800E62AC_00001350:
    lwz r3, lbl_8087F0A8
    li r4, 0x2
    addi r3, r3, 0x48c
    bl fn_801231D0
    cmpwi r3, 0x0
    bne lbl_fn_800E62AC_00001378
lbl_fn_800E62AC_00001368:
    mr r3, r25
    bl fn_800E610C
    li r29, 0x0
    b lbl_fn_800E62AC_00001390
lbl_fn_800E62AC_00001378:
    mr r3, r25
    mr r4, r26
    mr r5, r27
    mr r6, r28
    bl fn_800E73EC
    mr r29, r3
lbl_fn_800E62AC_00001390:
    cmpwi r29, 0x0
    li r30, 0x0
    beq lbl_fn_800E62AC_000013B4
    mr r3, r25
    bl fn_80178078
    lfs f0, lbl_80881370
    fcmpo cr0, f1, f0
    bge lbl_fn_800E62AC_000013B4
    li r30, 0x1
lbl_fn_800E62AC_000013B4:
    lwz r3, 0x5c(r25)
    lwz r0, 0x11c(r3)
    cmplwi r0, 0x2
    ble lbl_fn_800E62AC_000013D8
    cmpwi r0, 0x3
    blt lbl_fn_800E62AC_00001418
    cmpwi r0, 0x4
    ble lbl_fn_800E62AC_000013F8
    b lbl_fn_800E62AC_00001418
lbl_fn_800E62AC_000013D8:
    cmpwi r30, 0x0
    li r30, 0x0
    beq lbl_fn_800E62AC_00001418
    lwz r0, 0x12a4(r25)
    extrwi. r0, r0, 1, 25
    bne lbl_fn_800E62AC_00001418
    li r30, 0x1
    b lbl_fn_800E62AC_00001418
lbl_fn_800E62AC_000013F8:
    cmpwi r30, 0x0
    li r30, 0x0
    beq lbl_fn_800E62AC_00001418
    lwz r0, 0x7e0(r25)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_800E62AC_00001418
    li r30, 0x1
lbl_fn_800E62AC_00001418:
    cmpwi r30, 0x0
    beq lbl_fn_800E62AC_000017CC
    lwz r0, 0x12a4(r25)
    li r27, 0x6
    srwi. r0, r0, 31
    beq lbl_fn_800E62AC_00001434
    li r27, 0xc
lbl_fn_800E62AC_00001434:
    lwz r3, lbl_8087F0A8
    li r4, 0x9
    addi r3, r3, 0x48c
    bl fn_801240B4
    cmpwi r3, 0x0
    beq lbl_fn_800E62AC_000017C8
    mr r3, r26
    bl fn_803761AC
    cmpwi r3, 0x0
    beq lbl_fn_800E62AC_000017C8
    mr r3, r25
    bl fn_8016DCD4
    cmpwi r3, 0x0
    beq lbl_fn_800E62AC_000017C8
    addi r3, r25, 0x7d4
    li r4, 0x2e
    bl fn_80134134
    cmpwi r3, 0x0
    bne lbl_fn_800E62AC_000017C8
    lwz r0, 0x5674(r26)
    cmpwi r0, 0x0
    beq lbl_fn_800E62AC_000017C8
    xoris r0, r27, 0x8000
    stw r0, 0x74(r1)
    lis r31, lbl_80735250@ha
    lfs f2, 0xfb8(r25)
    lfd f1, lbl_80735250@l(r31)
    lfd f0, 0x70(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_800E62AC_000017B4
    lwz r3, 0x50(r25)
    bl fn_80219558
    subi r0, r3, 0x2
    cmplwi r0, 0x1
    ble lbl_fn_800E62AC_000015C0
    subi r0, r3, 0x4
    cmplwi r0, 0x1
    ble lbl_fn_800E62AC_00001688
    cmpwi r3, 0x0
    beq lbl_fn_800E62AC_000014F0
    cmpwi r3, 0x6
    beq lbl_fn_800E62AC_00001658
    cmpwi r3, 0x1
    beq lbl_fn_800E62AC_00001688
    b lbl_fn_800E62AC_00001694
lbl_fn_800E62AC_000014F0:
    mr r3, r25
    li r4, 0x1
    bl fn_80219344
    cmpwi r3, 0x0
    beq lbl_fn_800E62AC_000017B4
    mr r3, r26
    bl fn_80375184
    cmpwi r3, 0x0
    beq lbl_fn_800E62AC_000017B4
    lwz r0, 0x944(r25)
    cmpwi r0, 0x0
    ble lbl_fn_800E62AC_00001540
    xoris r0, r0, 0x8000
    stw r0, 0x6c(r1)
    lfd f2, lbl_80735250@l(r31)
    lfd f1, 0x68(r1)
    lfs f0, 0x7dc(r25)
    fsubs f1, f1, f2
    fdivs f1, f0, f1
    b lbl_fn_800E62AC_00001544
lbl_fn_800E62AC_00001540:
    lfs f1, lbl_808812DC
lbl_fn_800E62AC_00001544:
    lfs f0, lbl_80881374
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_800E62AC_000017B4
    lwz r0, 0x7e0(r25)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_800E62AC_000017B4
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    bne lbl_fn_800E62AC_00001594
    mr r3, r25
    li r4, 0x1
    bl fn_80219344
    mr r4, r3
    mr r3, r25
    li r5, 0x0
    li r6, 0x0
    bl fn_8016D74C
    b lbl_fn_800E62AC_000017B4
lbl_fn_800E62AC_00001594:
    lwz r0, 0x145c(r25)
    slwi r0, r0, 3
    add r3, r25, r0
    lwz r3, 0xaa4(r3)
    bl fn_80219E6C
    mr r4, r3
    mr r3, r25
    li r5, 0x0
    li r6, 0x0
    bl fn_8016D74C
    b lbl_fn_800E62AC_000017B4
lbl_fn_800E62AC_000015C0:
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    beq lbl_fn_800E62AC_000017B4
    lwz r0, 0x145c(r25)
    slwi r4, r0, 3
    add r3, r25, r4
    lwz r0, 0xaa4(r3)
    cmpwi r0, 0x0
    ble lbl_fn_800E62AC_000017B4
    lwz r0, 0x944(r25)
    cmpwi r0, 0x0
    ble lbl_fn_800E62AC_00001610
    xoris r0, r0, 0x8000
    stw r0, 0x74(r1)
    lfd f2, lbl_80735250@l(r31)
    lfd f1, 0x70(r1)
    lfs f0, 0x7dc(r25)
    fsubs f1, f1, f2
    fdivs f1, f0, f1
    b lbl_fn_800E62AC_00001614
lbl_fn_800E62AC_00001610:
    lfs f1, lbl_808812DC
lbl_fn_800E62AC_00001614:
    lfs f0, lbl_80881374
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_800E62AC_000017B4
    lwz r0, 0x7e0(r25)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_800E62AC_000017B4
    add r3, r25, r4
    lwz r3, 0xaa4(r3)
    bl fn_80219E6C
    mr r4, r3
    mr r3, r25
    li r5, 0x0
    li r6, 0x0
    bl fn_8016D74C
    b lbl_fn_800E62AC_000017B4
lbl_fn_800E62AC_00001658:
    lwz r0, 0x145c(r25)
    mr r3, r25
    li r4, 0x4
    slwi r0, r0, 3
    add r26, r25, r0
    bl fn_8021921C
    lwz r0, 0xaa4(r26)
    cmpw r0, r3
    beq lbl_fn_800E62AC_000017B4
    mr r3, r25
    bl fn_800E9110
    b lbl_fn_800E62AC_000017B4
lbl_fn_800E62AC_00001688:
    mr r3, r25
    bl fn_800E9110
    b lbl_fn_800E62AC_000017B4
lbl_fn_800E62AC_00001694:
    lwz r0, 0x145c(r25)
    slwi r4, r0, 3
    add r3, r25, r4
    lwz r0, 0xaa4(r3)
    cmpwi r0, 0x0
    ble lbl_fn_800E62AC_000017B4
    lwz r3, 0x5c(r25)
    lwz r0, 0x11c(r3)
    cmplwi r0, 0x2
    bgt lbl_fn_800E62AC_000017AC
    lwz r3, 0x50(r25)
    subis r0, r3, 0xa
    cmplwi r0, 0xae72
    bne lbl_fn_800E62AC_000016E8
    lwz r0, 0x7e0(r25)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_800E62AC_000017B4
    mr r3, r25
    bl fn_800E9110
    b lbl_fn_800E62AC_000017B4
lbl_fn_800E62AC_000016E8:
    subis r3, r3, 0xb
    addi r0, r3, 0x518a
    cmplwi r0, 0x1
    bgt lbl_fn_800E62AC_00001738
    lis r5, lbl_80735324@ha
    li r3, 0x10
    addi r5, r5, lbl_80735324@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_800E62AC_0000172C
    mr r4, r25
    bl fn_801A72EC
    mr r4, r3
lbl_fn_800E62AC_0000172C:
    mr r3, r25
    bl fn_80178208
    b lbl_fn_800E62AC_000017B4
lbl_fn_800E62AC_00001738:
    lwz r0, 0x944(r25)
    cmpwi r0, 0x0
    ble lbl_fn_800E62AC_00001764
    xoris r0, r0, 0x8000
    stw r0, 0x6c(r1)
    lfd f2, lbl_80735250@l(r31)
    lfd f1, 0x68(r1)
    lfs f0, 0x7dc(r25)
    fsubs f1, f1, f2
    fdivs f1, f0, f1
    b lbl_fn_800E62AC_00001768
lbl_fn_800E62AC_00001764:
    lfs f1, lbl_808812DC
lbl_fn_800E62AC_00001768:
    lfs f0, lbl_80881374
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_800E62AC_000017B4
    lwz r0, 0x7e0(r25)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_800E62AC_000017B4
    add r3, r25, r4
    lwz r3, 0xaa4(r3)
    bl fn_80219E6C
    mr r4, r3
    mr r3, r25
    li r5, 0x0
    li r6, 0x0
    bl fn_8016D74C
    b lbl_fn_800E62AC_000017B4
lbl_fn_800E62AC_000017AC:
    mr r3, r25
    bl fn_800E9110
lbl_fn_800E62AC_000017B4:
    lfs f1, 0xfb8(r25)
    lfs f0, lbl_808812D8
    fadds f0, f1, f0
    stfs f0, 0xfb8(r25)
    b lbl_fn_800E62AC_000017CC
lbl_fn_800E62AC_000017C8:
    li r30, 0x0
lbl_fn_800E62AC_000017CC:
    cmpwi r30, 0x0
    bne lbl_fn_800E62AC_000017EC
    lfs f1, 0xfb8(r25)
    lfs f0, lbl_808812DC
    fcmpo cr0, f1, f0
    ble lbl_fn_800E62AC_000017EC
    mr r3, r25
    bl fn_8016DA4C
lbl_fn_800E62AC_000017EC:
    mr r3, r25
    bl fn_800E7BB0
lbl_fn_800E62AC_000017F4:
    addi r11, r1, 0xb0
    bl _restgpr_25
    lwz r0, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}
