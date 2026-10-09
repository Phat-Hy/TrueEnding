#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_16(void);
extern void _restgpr_22(void);
extern void _restgpr_26(void);
extern void _savegpr_16(void);
extern void _savegpr_22(void);
extern void _savegpr_26(void);
extern void dtor_80084684(void);
extern void fn_800185B4(void);
extern void fn_80041A28(void);
extern void fn_80044C30(void);
extern void fn_80084320(void);
extern void fn_800C31F4(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800E8FB8(void);
extern void fn_800F8548(void);
extern void fn_800F8574(void);
extern void fn_800FAB80(void);
extern void fn_800FFE68(void);
extern void fn_801004FC(void);
extern void fn_80100BB8(void);
extern void fn_80107168(void);
extern void fn_80107208(void);
extern void fn_80108A54(void);
extern void fn_8010AB94(void);
extern void fn_801231D0(void);
extern void fn_801237F0(void);
extern void fn_801240B4(void);
extern void fn_8012F3D8(void);
extern void fn_80134134(void);
extern void fn_801346C8(void);
extern void fn_80152D10(void);
extern void fn_801539E0(void);
extern void fn_80155790(void);
extern void fn_80155DAC(void);
extern void fn_801562A0(void);
extern void fn_80157444(void);
extern void fn_8015783C(void);
extern void fn_80157C34(void);
extern void fn_8015802C(void);
extern void fn_8015E7A0(void);
extern void fn_8015F568(void);
extern void fn_8016125C(void);
extern void fn_801647BC(void);
extern void fn_80164DCC(void);
extern void fn_8016D74C(void);
extern void fn_8016DDB0(void);
extern void fn_8016F3D0(void);
extern void fn_80178018(void);
extern void fn_80178078(void);
extern void fn_801781B0(void);
extern void fn_80178208(void);
extern void fn_8018E438(void);
extern void fn_801B77DC(void);
extern void fn_801E97DC(void);
extern void fn_801E9ECC(void);
extern void fn_80210220(void);
extern void fn_80219344(void);
extern void fn_80219558(void);
extern void fn_80219E6C(void);
extern void fn_8036DAA8(void);
extern void fn_80370174(void);
extern void fn_80370320(void);
extern void fn_80375184(void);
extern void fn_8037EF30(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F98D0(void);
extern void fn_805F9940(void);
extern void fn_8068AEA8(void);

/* External data declarations */
extern u8 lbl_80735238[];
extern u8 lbl_80735250[];
extern u8 lbl_80735258[];
extern u8 lbl_80735324[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087EE68;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F120;
extern u32 lbl_8087F408;
extern u32 lbl_8087F430;
extern u32 lbl_8087F610;
extern u32 lbl_8087F9C0;
extern u32 lbl_808812D8;
extern u32 lbl_808812DC;
extern u32 lbl_808812E4;
extern u32 lbl_808812E8;
extern u32 lbl_80881300;
extern u32 lbl_80881310;
extern u32 lbl_8088131C;
extern u32 lbl_80881320;
extern u32 lbl_80881324;
extern u32 lbl_80881328;
extern u32 lbl_80881330;
extern u32 lbl_80881334;
extern u32 lbl_80881378;
extern u32 lbl_8088137C;
extern u32 lbl_80881380;

/* Function declarations */
void fn_800E70A8(void);
void fn_800E70AC(void);
void fn_800E70EC(void);
void fn_800E7214(void);
void fn_800E73EC(void);
void fn_800E7650(void);
void fn_800E7BB0(void);
void fn_800E7F04(void);
void fn_800E854C(void);
void fn_800E8630(void);
void fn_800E8688(void);

asm void fn_800E70A8(void)
{
    nofralloc
    blr
}

asm void fn_800E70AC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_800E70AC_0000002C
    cmpwi r4, 0x0
    ble lbl_fn_800E70AC_0000002C
    bl dtor_80084684
lbl_fn_800E70AC_0000002C:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800E70EC(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    mr r30, r4
    stw r29, 0x24(r1)
    mr r29, r3
    lwz r0, 0x1424(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800E70EC_00000078
    cmpwi r4, 0x0
    beq lbl_fn_800E70EC_0000014C
lbl_fn_800E70EC_00000078:
    lwz r4, lbl_8087F9C0
    lwz r31, lbl_8087F0A8
    lwz r0, 0x28(r4)
    cmpwi r0, 0x0
    beq lbl_fn_800E70EC_0000014C
    lwz r0, 0x12a8(r3)
    extrwi. r0, r0, 1, 15
    bne lbl_fn_800E70EC_0000014C
    cmpwi r6, 0x0
    bne lbl_fn_800E70EC_0000014C
    addi r3, r31, 0x48c
    li r4, 0x4
    bl fn_801231D0
    cmpwi r3, 0x0
    beq lbl_fn_800E70EC_0000014C
    lwz r0, 0x12a4(r29)
    srwi. r0, r0, 31
    bne lbl_fn_800E70EC_0000014C
    cmpwi r30, 0x0
    bne lbl_fn_800E70EC_00000144
    lwz r30, lbl_8087F048
    mr r4, r29
    addi r3, r1, 0x8
    bl fn_80178018
    lfs f1, 0x2a4(r31)
    mr r3, r30
    lfs f2, 0x2a8(r31)
    mr r4, r29
    addi r5, r1, 0x8
    li r6, 0x0
    li r7, 0x0
    bl fn_800FFE68
    cmpwi r3, 0x0
    mr r6, r3
    beq lbl_fn_800E70EC_00000124
    mr r3, r29
    addi r7, r6, 0x528
    li r4, 0xc8
    li r5, 0x1
    li r8, 0x0
    li r9, 0x0
    bl fn_800E8688
    b lbl_fn_800E70EC_00000144
lbl_fn_800E70EC_00000124:
    mr r3, r29
    li r4, 0xc8
    li r5, 0x1
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    li r9, 0x0
    bl fn_800E8688
lbl_fn_800E70EC_00000144:
    li r3, 0x1
    b lbl_fn_800E70EC_00000150
lbl_fn_800E70EC_0000014C:
    li r3, 0x0
lbl_fn_800E70EC_00000150:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_800E7214(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    stw r31, 0x2c(r1)
    mr r31, r4
    stw r30, 0x28(r1)
    mr r30, r3
    stw r29, 0x24(r1)
    stw r28, 0x20(r1)
    mr r28, r5
    lwz r0, 0x12a4(r3)
    lwz r29, lbl_8087F0A8
    srwi. r0, r0, 31
    bne lbl_fn_800E7214_000001B8
    lwz r0, 0x12a8(r3)
    extrwi. r0, r0, 1, 15
    beq lbl_fn_800E7214_000001C0
lbl_fn_800E7214_000001B8:
    li r3, 0x0
    b lbl_fn_800E7214_0000031C
lbl_fn_800E7214_000001C0:
    lwz r4, lbl_8087F9C0
    lwz r0, 0x28(r4)
    cmpwi r0, 0x0
    bne lbl_fn_800E7214_000001F4
    bl fn_80178078
    lfs f0, lbl_80881328
    fcmpo cr0, f1, f0
    blt lbl_fn_800E7214_000001EC
    lwz r0, 0x1424(r30)
    cmpwi r0, 0x0
    ble lbl_fn_800E7214_000001FC
lbl_fn_800E7214_000001EC:
    li r3, 0x0
    b lbl_fn_800E7214_0000031C
lbl_fn_800E7214_000001F4:
    li r3, 0x0
    b lbl_fn_800E7214_0000031C
lbl_fn_800E7214_000001FC:
    lfs f31, 0x248(r29)
    mr r4, r30
    addi r3, r1, 0x8
    bl fn_80178018
    lwz r0, 0x12a4(r30)
    li r3, 0x1
    srwi. r0, r0, 31
    beq lbl_fn_800E7214_00000278
    lfs f1, 0xc(r1)
    lis r3, lbl_80735258@ha
    lfs f0, 0x538(r30)
    lfd f2, lbl_80735258@l(r3)
    fsubs f1, f1, f0
    bl fn_8068AEA8
    frsp f1, f1
    lfs f0, lbl_8088131C
    fcmpo cr0, f1, f0
    ble lbl_fn_800E7214_0000024C
    lfs f0, lbl_80881320
    fsubs f1, f1, f0
lbl_fn_800E7214_0000024C:
    lfs f0, lbl_80881324
    fcmpo cr0, f1, f0
    bge lbl_fn_800E7214_00000260
    lfs f0, lbl_80881320
    fadds f1, f1, f0
lbl_fn_800E7214_00000260:
    fabs f1, f1
    lfs f0, lbl_80881300
    frsp f1, f1
    fcmpo cr0, f1, f0
    mfcr r3
    extrwi r3, r3, 1, 1
lbl_fn_800E7214_00000278:
    cmpwi r28, 0x0
    beq lbl_fn_800E7214_00000288
    lfs f0, lbl_80881378
    fmuls f31, f31, f0
lbl_fn_800E7214_00000288:
    cmpwi r3, 0x0
    beq lbl_fn_800E7214_00000318
    fmr f1, f31
    lwz r3, lbl_8087F048
    lfs f2, 0x24c(r29)
    mr r4, r31
    mr r5, r30
    addi r6, r1, 0x8
    bl fn_801004FC
    cmpwi r3, 0x0
    beq lbl_fn_800E7214_000002EC
    cmpwi r28, 0x0
    beq lbl_fn_800E7214_000002DC
    lwz r3, 0x1440(r30)
    lwz r0, 0x0(r31)
    cmplw r3, r0
    bne lbl_fn_800E7214_000002DC
    lwz r3, lbl_8087F9C0
    lwz r0, 0x28(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800E7214_000002EC
lbl_fn_800E7214_000002DC:
    lwz r0, 0x0(r31)
    li r3, 0x1
    stw r0, 0x1440(r30)
    b lbl_fn_800E7214_0000031C
lbl_fn_800E7214_000002EC:
    lwz r3, lbl_8087F048
    mr r4, r31
    lfs f1, 0x248(r29)
    mr r5, r30
    lfs f2, 0x24c(r29)
    addi r6, r1, 0x8
    bl fn_80100BB8
    cmpwi r3, 0x0
    beq lbl_fn_800E7214_00000318
    li r3, 0x1
    b lbl_fn_800E7214_0000031C
lbl_fn_800E7214_00000318:
    li r3, 0x0
lbl_fn_800E7214_0000031C:
    lwz r0, 0x44(r1)
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_800E73EC(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_26
    lwz r31, lbl_8087F0A8
    mr r27, r3
    addi r26, r4, 0x6c
    mr r28, r5
    mr r29, r6
    addi r3, r31, 0x48c
    li r30, 0x1
    li r4, 0x11
    bl fn_801231D0
    cmpwi r3, 0x0
    beq lbl_fn_800E73EC_000003A0
    lfs f1, lbl_808812E4
    mr r3, r26
    li r4, 0x0
    li r5, 0x1
    bl fn_8037EF30
    li r0, 0x0
    stw r0, 0xfc0(r27)
lbl_fn_800E73EC_000003A0:
    lwz r3, lbl_8087F0A8
    li r4, 0x12
    addi r3, r3, 0x48c
    bl fn_801240B4
    cmpwi r3, 0x0
    beq lbl_fn_800E73EC_000003E0
    lwz r0, 0x12a8(r27)
    extrwi. r0, r0, 1, 22
    bne lbl_fn_800E73EC_000003E0
    lwz r0, 0x12a4(r27)
    srwi. r0, r0, 31
    bne lbl_fn_800E73EC_0000058C
    mr r3, r27
    li r4, 0x1
    bl fn_80155DAC
    b lbl_fn_800E73EC_0000058C
lbl_fn_800E73EC_000003E0:
    lwz r3, lbl_8087F0A8
    li r4, 0x7
    addi r3, r3, 0x48c
    bl fn_801240B4
    cmpwi r3, 0x0
    bne lbl_fn_800E73EC_00000404
    lwz r0, 0x12a8(r27)
    extrwi. r0, r0, 1, 15
    beq lbl_fn_800E73EC_000004F0
lbl_fn_800E73EC_00000404:
    lwz r3, 0x12a4(r27)
    srwi. r0, r3, 31
    beq lbl_fn_800E73EC_00000418
    extrwi. r0, r3, 1, 1
    bne lbl_fn_800E73EC_000004F0
lbl_fn_800E73EC_00000418:
    lwz r0, 0x12a8(r27)
    extrwi. r0, r0, 1, 22
    bne lbl_fn_800E73EC_000004F0
    lis r3, lbl_80735238@ha
    lfs f1, lbl_808812D8
    lwz r4, lbl_80735238@l(r3)
    addi r3, r1, 0x8
    addi r5, r27, 0x528
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    lwz r3, lbl_8087F430
    li r4, 0xef
    bl fn_80370174
    cmpwi r3, 0x0
    bne lbl_fn_800E73EC_0000048C
    lwz r3, lbl_8087F430
    li r4, 0xee
    bl fn_80370174
    cmpwi r3, 0x1
    bne lbl_fn_800E73EC_0000048C
    lwz r3, lbl_8087F430
    li r4, 0xef
    li r5, 0x1
    li r6, 0x0
    bl fn_80370320
lbl_fn_800E73EC_0000048C:
    lwz r0, 0xfc0(r27)
    cmpwi r0, 0x0
    bne lbl_fn_800E73EC_000004E0
    lwz r0, 0xfc4(r27)
    cmpwi r0, 0x0
    beq lbl_fn_800E73EC_000004AC
    stw r0, 0xfc0(r27)
    b lbl_fn_800E73EC_000004E0
lbl_fn_800E73EC_000004AC:
    lwz r26, lbl_8087F048
    mr r4, r27
    addi r3, r1, 0xc
    bl fn_80178018
    lfs f1, 0x264(r31)
    mr r3, r26
    lfs f2, 0x26c(r31)
    mr r4, r27
    addi r5, r1, 0xc
    li r6, 0x0
    li r7, 0x1
    bl fn_800FFE68
    stw r3, 0xfc0(r27)
lbl_fn_800E73EC_000004E0:
    lwz r0, 0x12a4(r27)
    ori r0, r0, 0x20
    stw r0, 0x12a4(r27)
    b lbl_fn_800E73EC_0000058C
lbl_fn_800E73EC_000004F0:
    mr r3, r27
    mr r5, r28
    mr r6, r29
    li r4, 0x0
    bl fn_800E70EC
    cmpwi r3, 0x0
    beq lbl_fn_800E73EC_00000514
    li r30, 0x0
    b lbl_fn_800E73EC_0000058C
lbl_fn_800E73EC_00000514:
    lwz r0, 0x12a4(r27)
    li r6, 0x0
    stw r6, 0xfc0(r27)
    mr r3, r27
    rlwinm r0, r0, 0, 27, 25
    lfs f0, lbl_808812DC
    stw r0, 0x12a4(r27)
    addi r4, r1, 0x18
    li r5, 0x0
    stw r6, 0x18(r1)
    stw r6, 0x1c(r1)
    stw r6, 0x20(r1)
    stfs f0, 0x24(r1)
    stfs f0, 0x28(r1)
    stfs f0, 0x2c(r1)
    bl fn_800E7214
    cmpwi r3, 0x0
    beq lbl_fn_800E73EC_0000058C
    lwz r5, 0x18(r1)
    mr r4, r27
    li r3, 0x0
    bl fn_80041A28
    lwz r6, 0x18(r1)
    mr r9, r3
    mr r3, r27
    addi r7, r1, 0x24
    li r4, 0xc8
    li r5, 0x0
    li r8, 0x0
    bl fn_800E8688
lbl_fn_800E73EC_0000058C:
    addi r11, r1, 0x50
    mr r3, r30
    bl _restgpr_26
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_800E7650(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stw r31, 0x7c(r1)
    stw r30, 0x78(r1)
    addi r30, r4, 0x6c
    stw r29, 0x74(r1)
    mr r29, r3
    stw r28, 0x70(r1)
    lwz r0, 0x55c(r3)
    lwz r5, 0x12a4(r3)
    lwz r31, lbl_8087F0A8
    cmpwi r0, 0x1
    rlwinm r5, r5, 0, 27, 25
    stw r5, 0x12a4(r3)
    beq lbl_fn_800E7650_000005FC
    rlwinm r0, r5, 0, 28, 26
    li r4, 0x0
    stw r0, 0x12a4(r3)
    stw r4, 0xfc0(r3)
    b lbl_fn_800E7650_00000AE8
lbl_fn_800E7650_000005FC:
    extrwi. r0, r5, 1, 4
    beq lbl_fn_800E7650_00000618
    rlwinm r0, r5, 0, 28, 26
    li r4, 0x0
    stw r4, 0xfc0(r3)
    stw r0, 0x12a4(r3)
    b lbl_fn_800E7650_00000974
lbl_fn_800E7650_00000618:
    lwz r0, 0x1208(r3)
    cmpwi r0, 0x0
    bne lbl_fn_800E7650_00000644
    extrwi. r0, r5, 1, 28
    bne lbl_fn_800E7650_00000644
    lwz r0, 0xf54(r3)
    cmpwi r0, 0x0
    bne lbl_fn_800E7650_00000644
    lwz r0, 0x139c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800E7650_00000688
lbl_fn_800E7650_00000644:
    lwz r0, 0x12a4(r3)
    li r4, 0x0
    stw r4, 0xfc0(r3)
    li r4, 0x11
    rlwinm r0, r0, 0, 28, 25
    stw r0, 0x12a4(r3)
    lwz r3, lbl_8087F0A8
    addi r3, r3, 0x48c
    bl fn_801231D0
    cmpwi r3, 0x0
    beq lbl_fn_800E7650_00000974
    lfs f1, lbl_808812E4
    mr r3, r30
    li r4, 0x0
    li r5, 0x1
    bl fn_8037EF30
    b lbl_fn_800E7650_00000974
lbl_fn_800E7650_00000688:
    srwi. r0, r5, 31
    beq lbl_fn_800E7650_000006A4
    rlwinm r0, r5, 0, 28, 26
    li r4, 0x0
    stw r4, 0xfc0(r3)
    stw r0, 0x12a4(r3)
    b lbl_fn_800E7650_00000974
lbl_fn_800E7650_000006A4:
    extrwi. r0, r5, 1, 25
    beq lbl_fn_800E7650_000006E4
    rlwinm r0, r5, 0, 28, 26
    li r4, 0x0
    stw r4, 0xfc0(r3)
    li r4, 0x12
    stw r0, 0x12a4(r3)
    lwz r3, lbl_8087F0A8
    addi r3, r3, 0x48c
    bl fn_801240B4
    cmpwi r3, 0x0
    bne lbl_fn_800E7650_00000974
    mr r3, r29
    li r4, 0x0
    bl fn_80155DAC
    b lbl_fn_800E7650_00000974
lbl_fn_800E7650_000006E4:
    extrwi. r0, r5, 1, 27
    beq lbl_fn_800E7650_00000828
    lwz r3, lbl_8087F0A8
    li r4, 0x16
    addi r3, r3, 0x48c
    bl fn_801231D0
    cmpwi r3, 0x0
    beq lbl_fn_800E7650_000007B8
    lwz r0, 0x12a4(r29)
    lwz r3, lbl_8087F0A8
    extrwi. r0, r0, 1, 21
    lwz r28, 0x458(r3)
    beq lbl_fn_800E7650_00000720
    cmpwi r28, 0x1
    beq lbl_fn_800E7650_000007B8
lbl_fn_800E7650_00000720:
    lfs f1, lbl_808812DC
    mr r4, r29
    lfs f0, lbl_808812D8
    addi r3, r1, 0x24
    stfs f1, 0x30(r1)
    stfs f1, 0x34(r1)
    stfs f0, 0x38(r1)
    bl fn_80178018
    lfs f1, 0x28(r1)
    addi r3, r1, 0x40
    li r4, 0x79
    bl fn_805F8E70
    addi r4, r1, 0x30
    addi r3, r1, 0x40
    mr r5, r4
    bl fn_805F93C0
    mr r3, r29
    addi r4, r1, 0x30
    bl fn_80155790
    lwz r0, 0x12a4(r29)
    extrwi r0, r0, 1, 21
    cmpwi cr1, r0, 0x0
    beq cr1, lbl_fn_800E7650_000007B8
    cmpwi r28, 0x2
    bne lbl_fn_800E7650_000007B8
    beq cr1, lbl_fn_800E7650_000007B8
    addi r28, r29, 0x1260
    b lbl_fn_800E7650_000007A0
lbl_fn_800E7650_00000790:
    lwz r3, 0x4(r28)
    addi r4, r1, 0x30
    bl fn_80155790
    addi r28, r28, 0x8
lbl_fn_800E7650_000007A0:
    lwz r0, 0x125c(r29)
    slwi r0, r0, 3
    add r3, r29, r0
    addi r0, r3, 0x1260
    cmplw r28, r0
    bne lbl_fn_800E7650_00000790
lbl_fn_800E7650_000007B8:
    lwz r0, 0x12a4(r29)
    srwi. r0, r0, 31
    beq lbl_fn_800E7650_000007D0
    li r0, 0x0
    stw r0, 0xfc0(r29)
    b lbl_fn_800E7650_000007F4
lbl_fn_800E7650_000007D0:
    lwz r3, lbl_8087F0A8
    li r4, 0x1e
    addi r3, r3, 0x48c
    bl fn_801231D0
    cmpwi r3, 0x0
    bne lbl_fn_800E7650_000007F4
    lwz r3, lbl_8087F048
    mr r4, r29
    bl fn_80108A54
lbl_fn_800E7650_000007F4:
    lwz r0, 0x12a4(r29)
    li r4, 0x7
    ori r0, r0, 0x10
    stw r0, 0x12a4(r29)
    lwz r3, lbl_8087F0A8
    addi r3, r3, 0x48c
    bl fn_801240B4
    cmpwi r3, 0x0
    bne lbl_fn_800E7650_00000974
    lwz r0, 0x12a4(r29)
    rlwinm r0, r0, 0, 28, 26
    stw r0, 0x12a4(r29)
    b lbl_fn_800E7650_00000974
lbl_fn_800E7650_00000828:
    rlwinm r0, r5, 0, 28, 26
    li r28, 0x0
    stw r28, 0xfc0(r3)
    li r4, 0x11
    stw r0, 0x12a4(r3)
    lwz r3, lbl_8087F0A8
    addi r3, r3, 0x48c
    bl fn_801231D0
    cmpwi r3, 0x0
    beq lbl_fn_800E7650_0000086C
    lfs f1, lbl_808812E4
    mr r3, r30
    li r4, 0x0
    li r5, 0x1
    bl fn_8037EF30
    stw r28, 0xfc0(r29)
    b lbl_fn_800E7650_00000974
lbl_fn_800E7650_0000086C:
    lwz r3, lbl_8087F0A8
    li r4, 0x7
    addi r3, r3, 0x48c
    bl fn_801240B4
    cmpwi r3, 0x0
    beq lbl_fn_800E7650_00000950
    lis r3, lbl_80735238@ha
    lfs f1, lbl_808812D8
    lwz r4, lbl_80735238@l(r3)
    addi r3, r1, 0x14
    addi r5, r29, 0x528
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x14
    li r4, -0x1
    bl fn_800CB3A0
    lwz r3, lbl_8087F430
    li r4, 0xef
    bl fn_80370174
    cmpwi r3, 0x0
    bne lbl_fn_800E7650_000008EC
    lwz r3, lbl_8087F430
    li r4, 0xee
    bl fn_80370174
    cmpwi r3, 0x1
    bne lbl_fn_800E7650_000008EC
    lwz r3, lbl_8087F430
    li r4, 0xef
    li r5, 0x1
    li r6, 0x0
    bl fn_80370320
lbl_fn_800E7650_000008EC:
    lwz r0, 0xfc0(r29)
    cmpwi r0, 0x0
    bne lbl_fn_800E7650_0000092C
    lwz r28, lbl_8087F048
    mr r4, r29
    addi r3, r1, 0x18
    bl fn_80178018
    lfs f1, 0x264(r31)
    mr r3, r28
    lfs f2, 0x26c(r31)
    mr r4, r29
    addi r5, r1, 0x18
    li r6, 0x0
    li r7, 0x1
    bl fn_800FFE68
    stw r3, 0xfc0(r29)
lbl_fn_800E7650_0000092C:
    lwz r0, 0x12a4(r29)
    mr r3, r30
    lfs f1, lbl_808812E4
    li r4, 0x0
    ori r0, r0, 0x10
    stw r0, 0x12a4(r29)
    li r5, 0x1
    bl fn_8037EF30
    b lbl_fn_800E7650_00000974
lbl_fn_800E7650_00000950:
    lwz r3, lbl_8087F0A8
    li r4, 0x12
    addi r3, r3, 0x48c
    bl fn_801240B4
    cmpwi r3, 0x0
    beq lbl_fn_800E7650_00000974
    mr r3, r29
    li r4, 0x1
    bl fn_80155DAC
lbl_fn_800E7650_00000974:
    lwz r3, lbl_8087F0A8
    li r4, 0x17
    addi r3, r3, 0x48c
    bl fn_801237F0
    cmpwi r3, 0x0
    beq lbl_fn_800E7650_000009CC
    lwz r3, lbl_8087F120
    li r4, -0x1
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
    b lbl_fn_800E7650_00000A84
lbl_fn_800E7650_000009CC:
    lwz r3, lbl_8087F0A8
    li r4, 0x18
    addi r3, r3, 0x48c
    bl fn_801237F0
    cmpwi r3, 0x0
    beq lbl_fn_800E7650_00000A24
    lwz r3, lbl_8087F120
    li r4, 0x1
    li r5, 0x1
    bl fn_801E9ECC
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
    b lbl_fn_800E7650_00000A84
lbl_fn_800E7650_00000A24:
    lwz r3, lbl_8087F0A8
    li r4, 0x1a
    addi r3, r3, 0x48c
    bl fn_801237F0
    cmpwi r3, 0x0
    beq lbl_fn_800E7650_00000A74
    lwz r3, lbl_8087F120
    bl fn_801E97DC
    lis r4, lbl_80735238@ha
    lfs f1, lbl_808812D8
    addi r4, r4, lbl_80735238@l
    addi r3, r1, 0x8
    lwz r4, 0x10(r4)
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_800E7650_00000A84
lbl_fn_800E7650_00000A74:
    lwz r3, lbl_8087F0A8
    li r4, 0x1b
    addi r3, r3, 0x48c
    bl fn_801237F0
lbl_fn_800E7650_00000A84:
    lwz r3, lbl_8087F0A8
    li r4, 0x6
    addi r3, r3, 0x48c
    bl fn_801231D0
    cmpwi r3, 0x0
    beq lbl_fn_800E7650_00000AE0
    lwz r0, 0x12a4(r29)
    srwi. r0, r0, 31
    beq lbl_fn_800E7650_00000AB4
    lwz r0, 0xc48(r29)
    cmpwi r0, 0x0
    beq lbl_fn_800E7650_00000AE0
lbl_fn_800E7650_00000AB4:
    lwz r0, 0x640(r29)
    cmpwi r0, 0x0
    bgt lbl_fn_800E7650_00000AE0
    lwz r0, 0xfb0(r29)
    cmpwi r0, 0x0
    bgt lbl_fn_800E7650_00000AE0
    lwz r0, 0x12a8(r29)
    mr r3, r29
    rlwinm r0, r0, 0, 24, 22
    stw r0, 0x12a8(r29)
    bl fn_800E8FB8
lbl_fn_800E7650_00000AE0:
    mr r3, r29
    bl fn_800E7BB0
lbl_fn_800E7650_00000AE8:
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    lwz r29, 0x74(r1)
    lwz r28, 0x70(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_800E7BB0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    lwz r0, 0x648(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800E7BB0_00000E40
    lwz r0, 0x48(r3)
    li r31, 0x0
    cmpwi r0, 0x0
    beq lbl_fn_800E7BB0_00000B48
    cmpwi r0, 0x3
    bne lbl_fn_800E7BB0_00000BAC
lbl_fn_800E7BB0_00000B48:
    li r4, 0xd
    addi r3, r3, 0x7d4
    bl fn_80134134
    cmpwi r3, 0x0
    beq lbl_fn_800E7BB0_00000B64
    li r31, 0x179b
    b lbl_fn_800E7BB0_00000BAC
lbl_fn_800E7BB0_00000B64:
    addi r3, r30, 0x7d4
    li r4, 0x29
    bl fn_80134134
    cmpwi r3, 0x0
    beq lbl_fn_800E7BB0_00000B80
    li r31, 0x177b
    b lbl_fn_800E7BB0_00000BAC
lbl_fn_800E7BB0_00000B80:
    lfs f3, 0x9fc(r30)
    lfs f0, lbl_808812D8
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_800E7BB0_00000BAC
    mr r3, r30
    li r4, 0x5
    bl fn_80219344
    cmpwi r3, 0x0
    beq lbl_fn_800E7BB0_00000BAC
    lwz r31, 0xabc(r30)
lbl_fn_800E7BB0_00000BAC:
    mr r3, r30
    li r29, 0x0
    li r4, 0x0
    bl fn_8016DDB0
    cmpwi r3, 0x0
    beq lbl_fn_800E7BB0_00000CB4
    cmpwi r31, 0x0
    ble lbl_fn_800E7BB0_00000CB4
    subi r0, r31, 0x1774
    cmplwi r0, 0x1
    bgt lbl_fn_800E7BB0_00000C48
    lwz r0, 0x48(r30)
    cmpwi r0, 0x0
    beq lbl_fn_800E7BB0_00000BFC
    lwz r0, 0xd18(r30)
    cmpwi r0, 0x0
    ble lbl_fn_800E7BB0_00000CB4
    lwz r0, 0xd1c(r30)
    cmpwi r0, 0x0
    beq lbl_fn_800E7BB0_00000CB4
lbl_fn_800E7BB0_00000BFC:
    mr r3, r31
    bl fn_80219E6C
    lwz r0, lbl_8087EE68
    mr r5, r3
    cmpwi r0, 0x0
    beq lbl_fn_800E7BB0_00000C24
    mr r3, r0
    mr r4, r30
    bl fn_800185B4
    b lbl_fn_800E7BB0_00000C28
lbl_fn_800E7BB0_00000C24:
    li r3, 0x0
lbl_fn_800E7BB0_00000C28:
    lwz r4, lbl_8087F0A8
    lwz r0, 0x16c(r4)
    cmpwi r0, 0x0
    bne lbl_fn_800E7BB0_00000C40
    cmpwi r3, 0x0
    beq lbl_fn_800E7BB0_00000CB4
lbl_fn_800E7BB0_00000C40:
    li r29, 0x1
    b lbl_fn_800E7BB0_00000CB4
lbl_fn_800E7BB0_00000C48:
    lwz r0, 0x48(r30)
    cmpwi r0, 0x0
    beq lbl_fn_800E7BB0_00000C6C
    lwz r0, 0xd18(r30)
    cmpwi r0, 0x0
    ble lbl_fn_800E7BB0_00000CB4
    lwz r0, 0xd1c(r30)
    cmpwi r0, 0x0
    beq lbl_fn_800E7BB0_00000CB4
lbl_fn_800E7BB0_00000C6C:
    mr r3, r31
    bl fn_80219E6C
    lwz r0, lbl_8087EE68
    mr r5, r3
    cmpwi r0, 0x0
    beq lbl_fn_800E7BB0_00000C94
    mr r3, r0
    mr r4, r30
    bl fn_800185B4
    b lbl_fn_800E7BB0_00000C98
lbl_fn_800E7BB0_00000C94:
    li r3, 0x0
lbl_fn_800E7BB0_00000C98:
    lwz r4, lbl_8087F0A8
    lwz r0, 0x16c(r4)
    cmpwi r0, 0x0
    bne lbl_fn_800E7BB0_00000CB0
    cmpwi r3, 0x0
    beq lbl_fn_800E7BB0_00000CB4
lbl_fn_800E7BB0_00000CB0:
    li r29, 0x1
lbl_fn_800E7BB0_00000CB4:
    cmpwi r29, 0x0
    beq lbl_fn_800E7BB0_00000E14
    cmpwi r31, 0x0
    ble lbl_fn_800E7BB0_00000E14
    cmpwi r31, 0x1789
    bge lbl_fn_800E7BB0_00000CEC
    cmpwi r31, 0x1776
    bge lbl_fn_800E7BB0_00000CE0
    cmpwi r31, 0x1774
    bge lbl_fn_800E7BB0_00000D0C
    b lbl_fn_800E7BB0_00000DB8
lbl_fn_800E7BB0_00000CE0:
    cmpwi r31, 0x1785
    bge lbl_fn_800E7BB0_00000D6C
    b lbl_fn_800E7BB0_00000DB8
lbl_fn_800E7BB0_00000CEC:
    cmpwi r31, 0x1791
    bge lbl_fn_800E7BB0_00000D00
    cmpwi r31, 0x178f
    bge lbl_fn_800E7BB0_00000D98
    b lbl_fn_800E7BB0_00000DB8
lbl_fn_800E7BB0_00000D00:
    cmpwi r31, 0x1793
    bge lbl_fn_800E7BB0_00000DB8
    b lbl_fn_800E7BB0_00000D6C
lbl_fn_800E7BB0_00000D0C:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_800E7BB0_00000E40
    mr r4, r30
    bl fn_8036DAA8
    cmpwi r3, 0x0
    beq lbl_fn_800E7BB0_00000E40
    lis r5, lbl_80735324@ha
    li r3, 0x10
    addi r5, r5, lbl_80735324@l
    li r4, 0x0
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_800E7BB0_00000D60
    mr r4, r30
    mr r5, r31
    bl fn_801B77DC
    mr r4, r3
lbl_fn_800E7BB0_00000D60:
    mr r3, r30
    bl fn_80178208
    b lbl_fn_800E7BB0_00000E40
lbl_fn_800E7BB0_00000D6C:
    lwz r0, 0x48(r30)
    cmpwi r0, 0x0
    beq lbl_fn_800E7BB0_00000E40
    mr r3, r31
    bl fn_80219E6C
    mr r4, r3
    mr r3, r30
    li r5, 0x0
    li r6, 0x0
    bl fn_8016D74C
    b lbl_fn_800E7BB0_00000E40
lbl_fn_800E7BB0_00000D98:
    lfs f1, lbl_808812E8
    mr r3, r30
    mr r5, r30
    addi r4, r30, 0xabc
    li r6, 0x173
    li r7, 0x0
    bl fn_8016125C
    b lbl_fn_800E7BB0_00000E40
lbl_fn_800E7BB0_00000DB8:
    lwz r0, 0x7e0(r30)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_800E7BB0_00000E40
    mr r3, r31
    bl fn_80219E6C
    lwz r0, 0x48(r30)
    addi r4, r30, 0xf6c
    lwz r5, 0x638(r30)
    mr r6, r3
    psq_l f1, 0x528(r30), 0, 0
    cmpwi r0, 0x0
    lfs f2, 0x530(r30)
    stw r5, 0x63c(r30)
    stw r3, 0x638(r30)
    stw r30, 0xf7c(r30)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xf74(r30)
    beq lbl_fn_800E7BB0_00000E40
    mr r3, r30
    mr r5, r30
    bl fn_8015F568
    b lbl_fn_800E7BB0_00000E40
lbl_fn_800E7BB0_00000E14:
    lwz r0, 0x48(r30)
    cmpwi r0, 0x0
    bne lbl_fn_800E7BB0_00000E40
    lwz r3, 0x50(r30)
    bl fn_80219558
    cmpwi r3, 0x0
    beq lbl_fn_800E7BB0_00000E38
    cmpwi r3, 0x2
    bne lbl_fn_800E7BB0_00000E40
lbl_fn_800E7BB0_00000E38:
    mr r3, r30
    bl fn_800E7F04
lbl_fn_800E7BB0_00000E40:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800E7F04(void)
{
    nofralloc
    stwu r1, -0x240(r1)
    mflr r0
    stw r0, 0x244(r1)
    addi r11, r1, 0x1b0
    stfd f31, 0x230(r1)
    psq_st f31, 0x238(r1), 0, 0
    stfd f30, 0x220(r1)
    psq_st f30, 0x228(r1), 0, 0
    stfd f29, 0x210(r1)
    psq_st f29, 0x218(r1), 0, 0
    stfd f28, 0x200(r1)
    psq_st f28, 0x208(r1), 0, 0
    stfd f27, 0x1f0(r1)
    psq_st f27, 0x1f8(r1), 0, 0
    stfd f26, 0x1e0(r1)
    psq_st f26, 0x1e8(r1), 0, 0
    stfd f25, 0x1d0(r1)
    psq_st f25, 0x1d8(r1), 0, 0
    stfd f24, 0x1c0(r1)
    psq_st f24, 0x1c8(r1), 0, 0
    stfd f23, 0x1b0(r1)
    psq_st f23, 0x1b8(r1), 0, 0
    bl _savegpr_16
    lwz r16, lbl_8087F0A8
    mr r17, r3
    lwz r3, 0x3cc(r16)
    bl fn_80210220
    lwz r3, 0x1428(r17)
    cmpwi r3, 0x0
    beq lbl_fn_800E7F04_00001380
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 3
    beq lbl_fn_800E7F04_00001380
    lwz r3, lbl_8087F0A8
    li r4, 0x8
    addi r3, r3, 0x48c
    bl fn_801231D0
    cmpwi r3, 0x0
    beq lbl_fn_800E7F04_00001430
    lwz r0, 0x1430(r17)
    cmpwi r0, 0x0
    bgt lbl_fn_800E7F04_00001430
    lwz r0, 0x3d4(r16)
    cmpwi r0, 0x0
    beq lbl_fn_800E7F04_00001430
    lwz r3, 0x50(r17)
    li r20, 0x0
    bl fn_80219558
    lwz r0, 0x408(r16)
    mr r16, r3
    cmpwi r0, 0x0
    beq lbl_fn_800E7F04_00000FC8
    addi r3, r17, 0x7d4
    li r4, 0x3d
    li r5, 0x0
    bl fn_801346C8
    cmpwi r3, 0x0
    beq lbl_fn_800E7F04_00000FC8
    addi r3, r17, 0x7d4
    bl fn_8012F3D8
    cmpwi r3, 0x0
    ble lbl_fn_800E7F04_00000FC8
    lwz r0, lbl_8087F048
    cmpwi r0, 0x0
    beq lbl_fn_800E7F04_00000FC8
    addi r3, r17, 0x7d4
    bl fn_8012F3D8
    cmpwi r3, 0x1
    bne lbl_fn_800E7F04_00000F8C
    cmpwi r16, 0x2
    li r3, 0x1f7
    bne lbl_fn_800E7F04_00000F80
    li r3, 0x201
lbl_fn_800E7F04_00000F80:
    bl fn_80219E6C
    mr r20, r3
    b lbl_fn_800E7F04_00000FC8
lbl_fn_800E7F04_00000F8C:
    cmpwi r3, 0x2
    bne lbl_fn_800E7F04_00000FB0
    cmpwi r16, 0x2
    li r3, 0x1f8
    bne lbl_fn_800E7F04_00000FA4
    li r3, 0x202
lbl_fn_800E7F04_00000FA4:
    bl fn_80219E6C
    mr r20, r3
    b lbl_fn_800E7F04_00000FC8
lbl_fn_800E7F04_00000FB0:
    cmpwi r16, 0x2
    li r3, 0x1f9
    bne lbl_fn_800E7F04_00000FC0
    li r3, 0x203
lbl_fn_800E7F04_00000FC0:
    bl fn_80219E6C
    mr r20, r3
lbl_fn_800E7F04_00000FC8:
    cmpwi r20, 0x0
    beq lbl_fn_800E7F04_00001358
    lwz r16, lbl_8087F048
    mr r3, r16
    bl fn_800F8548
    li r0, -0x1
    stw r0, 0x8(r1)
    lfs f1, lbl_808812DC
    mr r6, r3
    stw r0, 0xc(r1)
    mr r3, r16
    lfs f2, lbl_808812D8
    mr r4, r17
    mr r5, r20
    addi r7, r17, 0x528
    addi r8, r17, 0x534
    li r9, 0x0
    li r10, 0x1e
    bl fn_800FAB80
    lfs f1, lbl_808812D8
    lis r8, lbl_807C7030@ha
    stfs f1, 0x38(r1)
    addi r8, r8, lbl_807C7030@l
    lwz r3, lbl_8087F048
    mr r9, r8
    stfs f1, 0x3c(r1)
    addi r10, r1, 0x38
    li r5, 0x0
    li r6, 0x0
    stfs f1, 0x40(r1)
    stfs f1, 0x44(r1)
    lwz r7, 0x1428(r17)
    lwz r4, 0x4(r20)
    addi r7, r7, 0xb0
    bl fn_80107168
    lwz r5, 0x1428(r17)
    lwz r3, lbl_8087F048
    lwz r4, 0x4(r20)
    addi r5, r5, 0x528
    lfs f1, lbl_808812D8
    bl fn_80107208
    lwz r3, 0x6c(r20)
    cmpwi r3, 0x0
    ble lbl_fn_800E7F04_00001080
    bl fn_80219E6C
    b lbl_fn_800E7F04_00001084
lbl_fn_800E7F04_00001080:
    li r3, 0x0
lbl_fn_800E7F04_00001084:
    cmpwi r3, 0x0
    mr r19, r3
    beq lbl_fn_800E7F04_00001358
    lwz r3, lbl_8087F408
    li r0, 0x0
    stw r0, 0xdc(r1)
    lwz r18, 0x48(r3)
    b lbl_fn_800E7F04_00001184
lbl_fn_800E7F04_000010A4:
    lwz r3, 0x38(r18)
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    rlwinm r0, r3, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_800E7F04_000010D0
    clrlwi r0, r3, 31
    cmplwi r0, 0x1
    beq lbl_fn_800E7F04_000010D0
    li r7, 0x1
lbl_fn_800E7F04_000010D0:
    cmpwi r7, 0x0
    beq lbl_fn_800E7F04_000010EC
    lwz r0, 0x7e0(r18)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_800E7F04_000010EC
    li r6, 0x1
lbl_fn_800E7F04_000010EC:
    cmpwi r6, 0x0
    beq lbl_fn_800E7F04_00001120
    lwz r0, 0x55c(r18)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_800E7F04_00001114
    lwz r0, 0x560(r18)
    cmpwi r0, 0x1c
    bne lbl_fn_800E7F04_00001114
    li r3, 0x1
lbl_fn_800E7F04_00001114:
    cmpwi r3, 0x0
    bne lbl_fn_800E7F04_00001120
    li r5, 0x1
lbl_fn_800E7F04_00001120:
    cmpwi r5, 0x0
    beq lbl_fn_800E7F04_00001180
    lwz r0, 0x54c(r18)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    beq lbl_fn_800E7F04_00001180
    mr r3, r17
    li r5, 0x1
    bl fn_8016F3D0
    cmpwi r3, 0x0
    bne lbl_fn_800E7F04_00001180
    lwz r0, 0x7e0(r18)
    rlwinm r0, r0, 0, 20, 20
    cmplwi r0, 0x800
    bne lbl_fn_800E7F04_00001180
    lwz r0, 0xdc(r1)
    addi r3, r1, 0xe0
    slwi r0, r0, 2
    add. r3, r3, r0
    beq lbl_fn_800E7F04_00001174
    stw r18, 0x0(r3)
lbl_fn_800E7F04_00001174:
    lwz r3, 0xdc(r1)
    addi r0, r3, 0x1
    stw r0, 0xdc(r1)
lbl_fn_800E7F04_00001180:
    lwz r18, 0x14ac(r18)
lbl_fn_800E7F04_00001184:
    cmpwi r18, 0x0
    mr r4, r18
    bne lbl_fn_800E7F04_000010A4
    lwz r21, 0xdc(r1)
    cmplwi r21, 0x7
    bge lbl_fn_800E7F04_000011A0
    li r21, 0x7
lbl_fn_800E7F04_000011A0:
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lis r4, lbl_80735250@ha
    lfs f27, lbl_808812DC
    lfs f28, lbl_808812E4
    mr r27, r3
    lfs f29, lbl_808812E8
    addi r16, r1, 0xe0
    lfs f30, lbl_8088137C
    xoris r29, r21, 0x8000
    lfs f31, lbl_80881380
    addi r25, r1, 0x88
    lfd f23, lbl_80735250@l(r4)
    addi r26, r1, 0x48
    lfs f24, lbl_80881320
    addi r24, r1, 0x28
    lfs f25, lbl_808812D8
    li r18, 0x0
    lfs f26, lbl_80881328
    li r31, 0x0
    lwz r22, 0xdc(r1)
    lis r28, 0x4330
    lwz r30, 0xdc(r1)
    b lbl_fn_800E7F04_00001350
lbl_fn_800E7F04_00001200:
    stw r29, 0x16c(r1)
    xoris r0, r18, 0x8000
    addi r3, r1, 0x88
    li r4, 0x79
    stw r28, 0x168(r1)
    lfd f0, 0x168(r1)
    stw r0, 0x164(r1)
    fsubs f0, f0, f23
    stw r28, 0x160(r1)
    fdivs f0, f24, f0
    lfd f3, 0x160(r1)
    fsubs f3, f3, f23
    fmuls f1, f3, f0
    bl fn_805F8E70
    stfs f27, 0x28(r1)
    addi r3, r1, 0x58
    li r4, 0x79
    stfs f27, 0x2c(r1)
    stfs f25, 0x30(r1)
    lfs f1, 0x538(r17)
    bl fn_805F8E70
    addi r4, r1, 0x28
    addi r3, r1, 0x58
    mr r5, r4
    bl fn_805F93C0
    psq_l f1, 0x0(r24), 0, 0
    mr r3, r25
    lfs f2, 0x30(r1)
    mr r4, r26
    psq_st f1, 0x0(r26), 0, 0
    mr r5, r26
    stfs f2, 0x50(r1)
    bl fn_805F93C0
    lfs f0, 0x4c(r1)
    cmpwi r30, 0x0
    fadds f0, f0, f26
    stfs f0, 0x4c(r1)
    beq lbl_fn_800E7F04_00001310
    divwu r0, r18, r22
    stfs f27, 0xbc(r1)
    lwz r23, lbl_8087F048
    mr r4, r17
    stfs f28, 0xc0(r1)
    addi r3, r1, 0x1c
    mullw r0, r0, r22
    stfs f29, 0xc4(r1)
    stfs f30, 0xcc(r1)
    stw r31, 0xd4(r1)
    subf r0, r0, r18
    slwi r0, r0, 2
    stfs f31, 0xc8(r1)
    lwzx r0, r16, r0
    stw r0, 0xb8(r1)
    stfs f27, 0xd0(r1)
    stw r27, 0xd8(r1)
    bl fn_801781B0
    lfs f1, lbl_808812DC
    mr r3, r23
    lfs f2, lbl_808812D8
    mr r4, r17
    mr r5, r19
    mr r7, r26
    addi r6, r1, 0x1c
    addi r8, r1, 0xb8
    li r9, 0x2006
    li r10, 0x0
    bl fn_800F8574
    b lbl_fn_800E7F04_0000134C
lbl_fn_800E7F04_00001310:
    lwz r23, lbl_8087F048
    mr r4, r17
    addi r3, r1, 0x10
    bl fn_801781B0
    lfs f1, lbl_808812DC
    mr r3, r23
    lfs f2, lbl_808812D8
    mr r4, r17
    mr r5, r19
    mr r7, r26
    addi r6, r1, 0x10
    li r8, 0x0
    li r9, 0x2
    li r10, 0x0
    bl fn_800F8574
lbl_fn_800E7F04_0000134C:
    addi r18, r18, 0x1
lbl_fn_800E7F04_00001350:
    cmpw r18, r21
    blt lbl_fn_800E7F04_00001200
lbl_fn_800E7F04_00001358:
    cntlzw r0, r20
    lwz r3, 0x1428(r17)
    srwi r4, r0, 5
    bl fn_80164DCC
    lwz r0, 0x14a8(r17)
    li r3, 0x0
    stw r3, 0x1428(r17)
    oris r0, r0, 0x800
    stw r0, 0x14a8(r17)
    b lbl_fn_800E7F04_00001430
lbl_fn_800E7F04_00001380:
    cmpwi r3, 0x0
    beq lbl_fn_800E7F04_00001394
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 4
    bne lbl_fn_800E7F04_00001430
lbl_fn_800E7F04_00001394:
    mr r3, r17
    li r4, 0x1
    bl fn_8016DDB0
    cmpwi r3, 0x0
    beq lbl_fn_800E7F04_00001430
    lwz r0, 0x1430(r17)
    cmpwi r0, 0x0
    bgt lbl_fn_800E7F04_00001430
    addi r3, r17, 0x7d4
    li r4, 0xa
    li r5, 0x0
    bl fn_801346C8
    cmpwi r3, 0x0
    beq lbl_fn_800E7F04_00001430
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    bne lbl_fn_800E7F04_00001430
    lwz r3, lbl_8087F0A8
    li r18, 0x0
    li r4, 0x8
    addi r3, r3, 0x48c
    bl fn_801231D0
    cmpwi r3, 0x0
    beq lbl_fn_800E7F04_000013F8
    li r18, 0x1
lbl_fn_800E7F04_000013F8:
    cmpwi r18, 0x0
    beq lbl_fn_800E7F04_00001430
    cmpwi r17, 0x0
    stw r17, 0x1428(r17)
    beq lbl_fn_800E7F04_00001428
    mr r3, r17
    bl fn_801647BC
    lwz r0, 0x14a8(r17)
    oris r0, r0, 0x800
    stw r0, 0x14a8(r17)
    lwz r0, 0x3f8(r16)
    stw r0, 0x1430(r17)
lbl_fn_800E7F04_00001428:
    lwz r3, lbl_8087F048
    bl fn_8010AB94
lbl_fn_800E7F04_00001430:
    lwz r3, 0x1430(r17)
    cmpwi r3, 0x0
    ble lbl_fn_800E7F04_00001444
    subi r0, r3, 0x1
    stw r0, 0x1430(r17)
lbl_fn_800E7F04_00001444:
    addi r11, r1, 0x1b0
    psq_l f31, 0x238(r1), 0, 0
    lfd f31, 0x230(r1)
    psq_l f30, 0x228(r1), 0, 0
    lfd f30, 0x220(r1)
    psq_l f29, 0x218(r1), 0, 0
    lfd f29, 0x210(r1)
    psq_l f28, 0x208(r1), 0, 0
    lfd f28, 0x200(r1)
    psq_l f27, 0x1f8(r1), 0, 0
    lfd f27, 0x1f0(r1)
    psq_l f26, 0x1e8(r1), 0, 0
    lfd f26, 0x1e0(r1)
    psq_l f25, 0x1d8(r1), 0, 0
    lfd f25, 0x1d0(r1)
    psq_l f24, 0x1c8(r1), 0, 0
    lfd f24, 0x1c0(r1)
    psq_l f23, 0x1b8(r1), 0, 0
    lfd f23, 0x1b0(r1)
    bl _restgpr_16
    lwz r0, 0x244(r1)
    mtlr r0
    addi r1, r1, 0x240
    blr
}

asm void fn_800E854C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    bne lbl_fn_800E854C_00001560
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_800E854C_00001570
    li r4, 0x1
    bl fn_80164DCC
    lwz r0, 0x55c(r30)
    cmpwi r0, 0x6
    bne lbl_fn_800E854C_0000150C
    lwz r0, 0x560(r30)
    cmpwi r0, 0x17
    beq lbl_fn_800E854C_00001548
    cmpwi r0, 0x3b
    beq lbl_fn_800E854C_00001548
    cmpwi r0, 0x8e
    beq lbl_fn_800E854C_00001548
lbl_fn_800E854C_0000150C:
    lfs f3, 0x30(r31)
    mr r3, r30
    lfs f2, lbl_80881330
    addi r4, r1, 0x8
    lfs f1, 0x2c(r31)
    li r5, -0x1
    lfs f0, 0x28(r31)
    fmuls f3, f3, f2
    fmuls f1, f1, f2
    li r6, 0x0
    fmuls f0, f0, f2
    stfs f3, 0x10(r1)
    stfs f0, 0x8(r1)
    stfs f1, 0xc(r1)
    bl fn_8015E7A0
lbl_fn_800E854C_00001548:
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
    b lbl_fn_800E854C_00001570
lbl_fn_800E854C_00001560:
    lwz r12, 0x0(r3)
    lwz r12, 0xe8(r12)
    mtctr r12
    bctrl
lbl_fn_800E854C_00001570:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800E8630(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80152D10
    lwz r0, 0x12a4(r31)
    extrwi. r0, r0, 1, 15
    bne lbl_fn_800E8630_000015B4
    li r0, 0x1e
    stw r0, 0x1434(r31)
lbl_fn_800E8630_000015B4:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_800E8630_000015C4
    bl fn_80375184
lbl_fn_800E8630_000015C4:
    li r0, 0x0
    sth r0, 0x1470(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800E8688(void)
{
    nofralloc
    stwu r1, -0x140(r1)
    mflr r0
    stw r0, 0x144(r1)
    addi r11, r1, 0x130
    stfd f31, 0x130(r1)
    psq_st f31, 0x138(r1), 0, 0
    bl _savegpr_22
    lwz r0, 0x12a4(r3)
    mr r23, r3
    mr r24, r4
    mr r25, r5
    extrwi. r0, r0, 1, 25
    mr r26, r6
    mr r22, r7
    mr r27, r8
    mr r28, r9
    bne lbl_fn_800E8688_00001EDC
    cmpwi r6, 0x0
    li r29, 0x0
    stw r29, 0x1460(r3)
    beq lbl_fn_800E8688_0000189C
    cmpwi r4, 0xc8
    bne lbl_fn_800E8688_0000189C
    lfs f3, 0x530(r6)
    lfs f0, 0x530(r3)
    lfs f5, 0x52c(r6)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r3)
    lfs f0, 0x528(r3)
    addi r3, r1, 0x50
    lfs f3, 0x528(r6)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x54(r1)
    stfs f0, 0x50(r1)
    stfs f6, 0x58(r1)
    bl fn_805F9940
    lwz r12, 0x0(r26)
    mr r3, r26
    lfs f0, 0x5b0(r26)
    lwz r12, 0x70(r12)
    fsubs f31, f1, f0
    mtctr r12
    bctrl
    fcmpo cr0, f31, f1
    bge lbl_fn_800E8688_0000189C
    lwz r12, 0x0(r26)
    mr r3, r26
    mr r4, r23
    lwz r12, 0x68(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_800E8688_0000189C
    lwz r12, 0x0(r26)
    mr r3, r26
    mr r4, r30
    mr r5, r23
    lwz r12, 0x6c(r12)
    mtctr r12
    bctrl
    subi r0, r30, 0x9
    cmplwi r0, 0x3
    ble lbl_fn_800E8688_000017C4
    cmpwi r30, 0x8
    bne lbl_fn_800E8688_0000189C
    lfs f5, 0x530(r26)
    addi r3, r1, 0x98
    lfs f0, 0x530(r23)
    mr r4, r3
    lfs f4, 0x528(r26)
    lfs f3, 0x528(r23)
    fsubs f5, f5, f0
    lfs f0, lbl_808812DC
    fsubs f3, f4, f3
    stfs f5, 0xa0(r1)
    stfs f3, 0x98(r1)
    stfs f0, 0x9c(r1)
    bl fn_805F98D0
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_808812D8
    lis r5, lbl_80735324@ha
    li r0, 0x1
    stw r3, 0x590(r23)
    addi r5, r5, lbl_80735324@l
    li r3, 0x38
    stw r0, 0x594(r23)
    mr r6, r5
    li r4, 0x3
    li r7, 0x0
    stw r29, 0x598(r23)
    stb r29, 0x59c(r23)
    stb r29, 0x59d(r23)
    stb r0, 0x59e(r23)
    stb r29, 0x59f(r23)
    stfs f0, 0x5a0(r23)
    bl fn_80084320
    cmpwi r3, 0x0
    mr r24, r3
    beq lbl_fn_800E8688_000017A0
    li r3, 0xe2
    bl fn_80219E6C
    mr r8, r3
    mr r3, r24
    mr r4, r23
    mr r6, r26
    addi r5, r1, 0x98
    li r7, 0x9
    bl fn_8018E438
    mr r24, r3
lbl_fn_800E8688_000017A0:
    mr r3, r23
    mr r4, r24
    bl fn_80178208
    lwz r3, 0x12a4(r23)
    li r0, 0x1
    stw r0, 0x58c(r23)
    rlwinm r3, r3, 0, 27, 25
    stw r3, 0x12a4(r23)
    b lbl_fn_800E8688_00001EDC
lbl_fn_800E8688_000017C4:
    lfs f5, 0x530(r26)
    addi r3, r1, 0x8c
    lfs f0, 0x530(r23)
    mr r4, r3
    lfs f4, 0x528(r26)
    lfs f3, 0x528(r23)
    fsubs f5, f5, f0
    lfs f0, lbl_808812DC
    fsubs f3, f4, f3
    stfs f5, 0x94(r1)
    stfs f3, 0x8c(r1)
    stfs f0, 0x90(r1)
    bl fn_805F98D0
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_808812D8
    lis r5, lbl_80735324@ha
    li r0, 0x1
    stw r3, 0x590(r23)
    addi r5, r5, lbl_80735324@l
    li r3, 0x38
    stw r0, 0x594(r23)
    mr r6, r5
    li r4, 0x3
    li r7, 0x0
    stw r29, 0x598(r23)
    stb r29, 0x59c(r23)
    stb r29, 0x59d(r23)
    stb r0, 0x59e(r23)
    stb r29, 0x59f(r23)
    stfs f0, 0x5a0(r23)
    bl fn_80084320
    cmpwi r3, 0x0
    mr r24, r3
    beq lbl_fn_800E8688_00001878
    li r3, 0xe2
    bl fn_80219E6C
    mr r8, r3
    mr r3, r24
    mr r4, r23
    mr r6, r26
    mr r7, r30
    addi r5, r1, 0x8c
    bl fn_8018E438
    mr r24, r3
lbl_fn_800E8688_00001878:
    mr r3, r23
    mr r4, r24
    bl fn_80178208
    lwz r3, 0x12a4(r23)
    li r0, 0x1
    stw r0, 0x58c(r23)
    rlwinm r3, r3, 0, 27, 25
    stw r3, 0x12a4(r23)
    b lbl_fn_800E8688_00001EDC
lbl_fn_800E8688_0000189C:
    cmpwi r28, 0x1
    bne lbl_fn_800E8688_000018B0
    li r0, 0x1
    stb r0, 0x59e(r23)
    b lbl_fn_800E8688_000018B8
lbl_fn_800E8688_000018B0:
    li r0, 0x0
    stb r0, 0x59e(r23)
lbl_fn_800E8688_000018B8:
    cmpwi r24, 0xcb
    lwz r31, lbl_8087F0A8
    lfs f31, lbl_808812DC
    li r30, 0x0
    beq lbl_fn_800E8688_000018D4
    cmpwi r24, 0xcd
    bne lbl_fn_800E8688_000018D8
lbl_fn_800E8688_000018D4:
    li r30, 0x1
lbl_fn_800E8688_000018D8:
    cmpwi r22, 0x0
    li r29, 0x0
    beq lbl_fn_800E8688_000018FC
    psq_l f1, 0x0(r22), 0, 0
    addi r3, r1, 0x80
    lfs f2, 0x8(r22)
    li r29, 0x1
    stfs f2, 0x88(r1)
    psq_st f1, 0x0(r3), 0, 0
lbl_fn_800E8688_000018FC:
    cmpwi r29, 0x0
    bne lbl_fn_800E8688_00001944
    lwz r4, 0xfc4(r23)
    cmpwi r4, 0x0
    beq lbl_fn_800E8688_00001914
    b lbl_fn_800E8688_00001918
lbl_fn_800E8688_00001914:
    lwz r4, 0xfc0(r23)
lbl_fn_800E8688_00001918:
    cmpwi r4, 0x0
    beq lbl_fn_800E8688_00001944
    psq_l f1, 0x614(r4), 0, 0
    addi r3, r1, 0x80
    lfs f2, 0x61c(r4)
    li r29, 0x1
    stfs f2, 0x88(r1)
    psq_st f1, 0x0(r3), 0, 0
    lfs f0, 0x52c(r4)
    stfs f0, 0x84(r1)
    lfs f31, 0x620(r4)
lbl_fn_800E8688_00001944:
    cmpwi r29, 0x0
    bne lbl_fn_800E8688_00001BF8
    lwz r0, 0x12a4(r23)
    srwi. r0, r0, 31
    beq lbl_fn_800E8688_00001BF8
    lwz r0, 0xc48(r23)
    cmpwi r0, 0x1
    beq lbl_fn_800E8688_00001978
    cmpwi r0, 0x2
    beq lbl_fn_800E8688_000019A8
    cmpwi r0, 0x3
    beq lbl_fn_800E8688_00001AC8
    b lbl_fn_800E8688_00001B90
lbl_fn_800E8688_00001978:
    lfs f5, 0xc1c(r23)
    addi r6, r1, 0x44
    lfs f4, lbl_80881334
    lfs f3, 0xc18(r23)
    lfs f0, 0xc14(r23)
    fmuls f5, f5, f4
    fmuls f3, f3, f4
    fmuls f0, f0, f4
    stfs f5, 0x4c(r1)
    stfs f0, 0x44(r1)
    stfs f3, 0x48(r1)
    b lbl_fn_800E8688_000019D4
lbl_fn_800E8688_000019A8:
    lfs f5, 0xc1c(r23)
    addi r6, r1, 0x38
    lfs f4, lbl_80881330
    lfs f3, 0xc18(r23)
    lfs f0, 0xc14(r23)
    fmuls f5, f5, f4
    fmuls f3, f3, f4
    fmuls f0, f0, f4
    stfs f5, 0x40(r1)
    stfs f0, 0x38(r1)
    stfs f3, 0x3c(r1)
lbl_fn_800E8688_000019D4:
    lfs f3, 0x528(r23)
    addi r3, r1, 0x74
    lfs f0, 0x0(r6)
    addi r5, r1, 0x14
    lfs f4, 0x52c(r23)
    mr r4, r3
    fadds f0, f3, f0
    lfs f3, 0x530(r23)
    stfs f0, 0x528(r23)
    lfs f0, 0x4(r6)
    fadds f0, f4, f0
    stfs f0, 0x52c(r23)
    lfs f0, 0x8(r6)
    fadds f0, f3, f0
    stfs f0, 0x530(r23)
    lwz r6, lbl_8087F430
    lfs f3, 0x88(r6)
    lfs f0, 0x7c(r6)
    lfs f5, 0x84(r6)
    fsubs f2, f3, f0
    lfs f4, 0x78(r6)
    lfs f3, 0x80(r6)
    lfs f0, 0x74(r6)
    fsubs f4, f5, f4
    stfs f2, 0x1c(r1)
    fsubs f0, f3, f0
    stfs f4, 0x18(r1)
    stfs f0, 0x14(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x7c(r1)
    bl fn_805F98D0
    lfs f5, 0x74(r1)
    addi r5, r1, 0x2c
    lfs f4, lbl_80881310
    addi r4, r1, 0x80
    lfs f3, 0x78(r1)
    mr r3, r23
    fmuls f6, f5, f4
    lfs f0, 0x7c(r1)
    fmuls f5, f3, f4
    li r29, 0x1
    fmuls f4, f0, f4
    stfs f6, 0x74(r1)
    stfs f5, 0x78(r1)
    li r30, 0x1
    stfs f4, 0x7c(r1)
    lfs f0, 0x530(r23)
    lfs f3, 0x52c(r23)
    fadds f2, f0, f4
    lfs f0, 0x528(r23)
    fadds f3, f3, f5
    fadds f0, f0, f6
    stfs f2, 0x34(r1)
    stfs f0, 0x2c(r1)
    stfs f3, 0x30(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x88(r1)
    bl fn_801539E0
    b lbl_fn_800E8688_00001BF8
lbl_fn_800E8688_00001AC8:
    lwz r6, lbl_8087F430
    addi r3, r1, 0x68
    addi r5, r1, 0x8
    lfs f3, 0x88(r6)
    mr r4, r3
    lfs f0, 0x7c(r6)
    lfs f5, 0x84(r6)
    fsubs f2, f3, f0
    lfs f4, 0x78(r6)
    lfs f3, 0x80(r6)
    lfs f0, 0x74(r6)
    fsubs f4, f5, f4
    stfs f2, 0x10(r1)
    fsubs f0, f3, f0
    stfs f4, 0xc(r1)
    stfs f0, 0x8(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x70(r1)
    bl fn_805F98D0
    lfs f5, 0x68(r1)
    addi r5, r1, 0x20
    lfs f4, lbl_80881310
    addi r4, r1, 0x80
    lfs f3, 0x6c(r1)
    mr r3, r23
    fmuls f6, f5, f4
    lfs f0, 0x70(r1)
    fmuls f5, f3, f4
    li r29, 0x1
    fmuls f4, f0, f4
    stfs f6, 0x68(r1)
    stfs f5, 0x6c(r1)
    li r27, 0x2
    li r30, 0x1
    stfs f4, 0x70(r1)
    lfs f0, 0x530(r23)
    lfs f3, 0x52c(r23)
    fadds f2, f0, f4
    lfs f0, 0x528(r23)
    fadds f3, f3, f5
    fadds f0, f0, f6
    stfs f2, 0x28(r1)
    stfs f0, 0x20(r1)
    stfs f3, 0x24(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x88(r1)
    bl fn_801539E0
    b lbl_fn_800E8688_00001BF8
lbl_fn_800E8688_00001B90:
    lfs f3, lbl_808812DC
    addi r3, r1, 0xd8
    lfs f0, lbl_808812D8
    li r4, 0x79
    stfs f3, 0x80(r1)
    stfs f3, 0x84(r1)
    stfs f0, 0x88(r1)
    lfs f1, 0x538(r23)
    bl fn_805F8E70
    addi r4, r1, 0x80
    addi r3, r1, 0xd8
    mr r5, r4
    bl fn_805F93C0
    lfs f3, 0x80(r1)
    li r29, 0x1
    lfs f0, 0x528(r23)
    lfs f4, 0x84(r1)
    fadds f0, f3, f0
    lfs f3, 0x88(r1)
    stfs f0, 0x80(r1)
    lfs f0, 0x52c(r23)
    fadds f0, f4, f0
    stfs f0, 0x84(r1)
    lfs f0, 0x530(r23)
    fadds f0, f3, f0
    stfs f0, 0x88(r1)
lbl_fn_800E8688_00001BF8:
    mr r4, r23
    addi r3, r1, 0x5c
    bl fn_80178018
    lwz r0, 0x12a4(r23)
    extrwi. r0, r0, 1, 26
    beq lbl_fn_800E8688_00001C24
    psq_l f1, 0x534(r23), 0, 0
    addi r3, r1, 0x5c
    lfs f2, 0x53c(r23)
    stfs f2, 0x64(r1)
    psq_st f1, 0x0(r3), 0, 0
lbl_fn_800E8688_00001C24:
    cmpwi r29, 0x0
    bne lbl_fn_800E8688_00001CB0
    cmpwi r30, 0x0
    beq lbl_fn_800E8688_00001C4C
    lfs f3, lbl_808812DC
    lfs f0, lbl_80881310
    stfs f3, 0x80(r1)
    stfs f3, 0x84(r1)
    stfs f0, 0x88(r1)
    b lbl_fn_800E8688_00001C60
lbl_fn_800E8688_00001C4C:
    lfs f3, lbl_808812DC
    lfs f0, lbl_808812D8
    stfs f3, 0x80(r1)
    stfs f3, 0x84(r1)
    stfs f0, 0x88(r1)
lbl_fn_800E8688_00001C60:
    lfs f1, 0x60(r1)
    addi r3, r1, 0xa8
    li r4, 0x79
    bl fn_805F8E70
    addi r4, r1, 0x80
    addi r3, r1, 0xa8
    mr r5, r4
    bl fn_805F93C0
    lfs f3, 0x80(r1)
    lfs f0, 0x528(r23)
    lfs f4, 0x84(r1)
    fadds f0, f3, f0
    lfs f3, 0x88(r1)
    stfs f0, 0x80(r1)
    lfs f0, 0x52c(r23)
    fadds f0, f4, f0
    stfs f0, 0x84(r1)
    lfs f0, 0x530(r23)
    fadds f0, f3, f0
    stfs f0, 0x88(r1)
lbl_fn_800E8688_00001CB0:
    lwz r0, 0x12a4(r23)
    srwi. r0, r0, 31
    beq lbl_fn_800E8688_00001CC0
    li r24, 0xc9
lbl_fn_800E8688_00001CC0:
    mr r3, r24
    bl fn_80219E6C
    cmpwi r24, 0xc8
    mr r29, r3
    bne lbl_fn_800E8688_00001CEC
    lwz r3, 0x648(r23)
    cmpwi r3, 0x0
    beq lbl_fn_800E8688_00001CEC
    li r4, 0x0
    bl fn_80044C30
    mr r29, r3
lbl_fn_800E8688_00001CEC:
    li r0, 0x1
    stw r0, 0x58c(r23)
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_800E8688_00001D08
    bl fn_800F8548
    stw r3, 0x590(r23)
lbl_fn_800E8688_00001D08:
    lwz r0, 0x12a4(r23)
    cmpwi r24, 0xd0
    rlwinm r0, r0, 0, 27, 25
    stw r0, 0x12a4(r23)
    beq lbl_fn_800E8688_00001D24
    cmpwi r24, 0xe5
    bne lbl_fn_800E8688_00001D80
lbl_fn_800E8688_00001D24:
    lwz r3, 0x648(r23)
    li r4, 0x0
    li r5, -0x1
    li r0, 0x1
    cmpwi r3, 0x0
    stw r5, 0x594(r23)
    stb r4, 0x59d(r23)
    stb r4, 0x59c(r23)
    stb r0, 0x59f(r23)
    beq lbl_fn_800E8688_00001D70
    lwz r12, 0x0(r3)
    lis r4, lbl_807C7030@ha
    addi r4, r4, lbl_807C7030@l
    li r6, 0x0
    lwz r12, 0x18(r12)
    mr r5, r4
    li r7, 0xc8
    mtctr r12
    bctrl
lbl_fn_800E8688_00001D70:
    lwz r0, 0x638(r23)
    stw r0, 0x63c(r23)
    stw r29, 0x638(r23)
    b lbl_fn_800E8688_00001E4C
lbl_fn_800E8688_00001D80:
    lwz r0, 0x14a8(r23)
    extrwi. r0, r0, 1, 1
    beq lbl_fn_800E8688_00001DAC
    lwz r0, 0x274(r31)
    fmr f1, f31
    stw r0, 0x594(r23)
    mr r3, r23
    mr r4, r29
    addi r5, r1, 0x80
    bl fn_80157444
    b lbl_fn_800E8688_00001E4C
lbl_fn_800E8688_00001DAC:
    cmpwi r24, 0xc8
    bne lbl_fn_800E8688_00001DBC
    lwz r0, 0x270(r31)
    b lbl_fn_800E8688_00001DC0
lbl_fn_800E8688_00001DBC:
    li r0, -0x1
lbl_fn_800E8688_00001DC0:
    cmpwi r28, 0x2
    stw r0, 0x594(r23)
    bne lbl_fn_800E8688_00001DE4
    fmr f1, f31
    mr r3, r23
    mr r4, r29
    addi r5, r1, 0x80
    bl fn_8015783C
    b lbl_fn_800E8688_00001E4C
lbl_fn_800E8688_00001DE4:
    cmpwi r28, 0x4
    bne lbl_fn_800E8688_00001E04
    fmr f1, f31
    mr r3, r23
    mr r4, r29
    addi r5, r1, 0x80
    bl fn_80157C34
    b lbl_fn_800E8688_00001E4C
lbl_fn_800E8688_00001E04:
    cmpwi r26, 0x0
    beq lbl_fn_800E8688_00001E28
    cmpwi r28, 0x5
    bne lbl_fn_800E8688_00001E28
    mr r3, r23
    mr r4, r29
    mr r5, r26
    bl fn_8015802C
    b lbl_fn_800E8688_00001E4C
lbl_fn_800E8688_00001E28:
    fmr f1, f31
    mr r3, r23
    mr r4, r29
    mr r6, r27
    mr r7, r30
    mr r8, r25
    addi r5, r1, 0x80
    li r9, 0x0
    bl fn_801562A0
lbl_fn_800E8688_00001E4C:
    li r4, 0x0
    stw r4, 0x598(r23)
    lwz r0, 0x318(r31)
    cmpwi r0, 0x0
    beq lbl_fn_800E8688_00001EA8
    lwz r0, 0x48(r23)
    cmpwi r0, 0x0
    bne lbl_fn_800E8688_00001E80
    lwz r3, lbl_8087F9C0
    lwz r0, 0x28(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800E8688_00001E80
    li r4, 0x1
lbl_fn_800E8688_00001E80:
    cmpwi r4, 0x0
    beq lbl_fn_800E8688_00001E9C
    cmpwi r24, 0xc8
    bne lbl_fn_800E8688_00001E9C
    lfs f0, 0x31c(r31)
    stfs f0, 0x5a0(r23)
    b lbl_fn_800E8688_00001EB0
lbl_fn_800E8688_00001E9C:
    lfs f0, lbl_808812D8
    stfs f0, 0x5a0(r23)
    b lbl_fn_800E8688_00001EB0
lbl_fn_800E8688_00001EA8:
    lfs f0, lbl_808812D8
    stfs f0, 0x5a0(r23)
lbl_fn_800E8688_00001EB0:
    lwz r0, 0x14a8(r23)
    cmpwi r29, 0x0
    rlwinm r0, r0, 0, 3, 0
    stw r0, 0x14a8(r23)
    beq lbl_fn_800E8688_00001ECC
    lwz r0, 0x68(r29)
    b lbl_fn_800E8688_00001ED8
lbl_fn_800E8688_00001ECC:
    li r3, 0xc8
    bl fn_80219E6C
    lwz r0, 0x68(r3)
lbl_fn_800E8688_00001ED8:
    stw r0, 0x1424(r23)
lbl_fn_800E8688_00001EDC:
    addi r11, r1, 0x130
    psq_l f31, 0x138(r1), 0, 0
    lfd f31, 0x130(r1)
    bl _restgpr_22
    lwz r0, 0x144(r1)
    mtlr r0
    addi r1, r1, 0x140
    blr
}
