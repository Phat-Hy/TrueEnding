#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_23(void);
extern void _restgpr_26(void);
extern void _savegpr_23(void);
extern void _savegpr_26(void);
extern void fn_800185B4(void);
extern void fn_80044E0C(void);
extern void fn_8004ED34(void);
extern void fn_80084320(void);
extern void fn_80097D7C(void);
extern void fn_8014C228(void);
extern void fn_8014DEE4(void);
extern void fn_80153B44(void);
extern void fn_80164DCC(void);
extern void fn_8016E970(void);
extern void fn_80179D44(void);
extern void fn_80196C68(void);
extern void fn_801AC434(void);
extern void fn_801AD34C(void);
extern void fn_801AE41C(void);
extern void fn_801AE77C(void);
extern void fn_801AE978(void);
extern void fn_801AEF7C(void);
extern void fn_801AF81C(void);
extern void fn_801B0260(void);
extern void fn_801BC5B8(void);
extern void fn_801BE10C(void);
extern void fn_8021A8D0(void);
extern void fn_8021A918(void);
extern void fn_80370174(void);
extern void fn_803750E4(void);
extern void fn_803761BC(void);
extern void fn_805ADCC4(void);
extern void fn_805ADD84(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F99B0(void);
extern void fn_8068A850(void);
extern void fn_8068AD58(void);
extern void fn_80695AD0(void);

/* External data declarations */
extern u8 lbl_80737808[];
extern u8 lbl_80737A9C[];
extern u8 lbl_80766768[];
extern u8 lbl_8077A720[];

/* Small data declarations */
extern u32 lbl_8087EE68;
extern u32 lbl_8087EE98;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F430;
extern u32 lbl_8087F9F8;
extern u32 lbl_80881964;
extern u32 lbl_8088196C;
extern u32 lbl_808819B0;
extern u32 lbl_808819D4;
extern u32 lbl_808819F8;
extern u32 lbl_80881A48;
extern u32 lbl_80881AB0;
extern u32 lbl_80881B24;
extern u32 lbl_80881B28;

/* Function declarations */
void fn_8015E4B0(void);
void fn_8015E7A0(void);
void fn_8015EB2C(void);
void fn_8015ECC4(void);
void fn_8015EFAC(void);
void fn_8015F568(void);

asm void fn_8015E4B0(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    lis r6, lbl_80737A9C@ha
    li r7, 0x0
    stw r0, 0x74(r1)
    addi r6, r6, lbl_80737A9C@l
    stmw r27, 0x5c(r1)
    lis r31, lbl_8077A720@ha
    mr r28, r5
    addi r5, r6, 0x24
    mr r29, r3
    mr r27, r4
    addi r31, r31, lbl_8077A720@l
    mr r6, r5
    li r3, 0x18
    li r4, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_8015E4B0_00000064
    mr r4, r29
    mr r5, r27
    mr r6, r28
    bl fn_801AC434
    mr r30, r3
lbl_fn_8015E4B0_00000064:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8015E4B0_000000F4
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8015E4B0_0000009C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_8015E4B0_000000B8
lbl_fn_8015E4B0_0000009C:
    addi r3, r31, 0xf00
    lwz r5, 0xf00(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
lbl_fn_8015E4B0_000000B8:
    lwz r5, 0x2c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8015E4B0_000000F4
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8015E4B0_000000F4:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8015E4B0_000002A8
    cmpwi r0, 0x8
    beq lbl_fn_8015E4B0_0000010C
    stw r0, 0x564(r29)
lbl_fn_8015E4B0_0000010C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8015E4B0_000002A8
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8015E4B0_00000144
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x38(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    b lbl_fn_8015E4B0_00000160
lbl_fn_8015E4B0_00000144:
    addi r3, r31, 0xf0c
    lwz r5, 0xf0c(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_8015E4B0_00000160:
    lwz r5, 0x38(r1)
    addi r3, r1, 0x20
    lwz r4, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8015E4B0_0000019C
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8015E4B0_0000019C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8015E4B0_00000278
    cmpwi r0, 0x8
    beq lbl_fn_8015E4B0_000001B4
    stw r0, 0x564(r29)
lbl_fn_8015E4B0_000001B4:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8015E4B0_00000278
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8015E4B0_000001EC
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    b lbl_fn_8015E4B0_00000208
lbl_fn_8015E4B0_000001EC:
    addi r3, r31, 0xf18
    lwz r5, 0xf18(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
lbl_fn_8015E4B0_00000208:
    lwz r5, 0x44(r1)
    addi r3, r1, 0x14
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8015E4B0_00000244
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8015E4B0_00000244:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8015E4B0_00000278
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8015E4B0_00000278:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8015E4B0_000002A8
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8015E4B0_000002A8:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_8015E4B0_000002D4
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8015E4B0_000002D4:
    li r0, 0x0
    stw r0, 0x638(r29)
    lmw r27, 0x5c(r1)
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_8015E7A0(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    addi r11, r1, 0x90
    bl _savegpr_26
    lis r7, lbl_80737A9C@ha
    lis r31, lbl_8077A720@ha
    addi r7, r7, lbl_80737A9C@l
    mr r27, r5
    addi r5, r7, 0x24
    mr r29, r3
    mr r26, r4
    mr r28, r6
    mr r6, r5
    addi r31, r31, lbl_8077A720@l
    li r3, 0x40
    li r4, 0x0
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_8015E7A0_00000360
    mr r4, r29
    mr r5, r26
    mr r6, r27
    mr r7, r28
    bl fn_801AD34C
    mr r30, r3
lbl_fn_8015E7A0_00000360:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8015E7A0_000003F0
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8015E7A0_00000398
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x50(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x54(r1)
    stw r0, 0x58(r1)
    b lbl_fn_8015E7A0_000003B4
lbl_fn_8015E7A0_00000398:
    addi r3, r31, 0xf24
    lwz r5, 0xf24(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x50(r1)
    stw r4, 0x54(r1)
    stw r0, 0x58(r1)
lbl_fn_8015E7A0_000003B4:
    lwz r5, 0x50(r1)
    addi r3, r1, 0x8
    lwz r4, 0x54(r1)
    lwz r0, 0x58(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8015E7A0_000003F0
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8015E7A0_000003F0:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8015E7A0_000005A4
    cmpwi r0, 0x8
    beq lbl_fn_8015E7A0_00000408
    stw r0, 0x564(r29)
lbl_fn_8015E7A0_00000408:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8015E7A0_000005A4
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8015E7A0_00000440
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x5c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x60(r1)
    stw r0, 0x64(r1)
    b lbl_fn_8015E7A0_0000045C
lbl_fn_8015E7A0_00000440:
    addi r3, r31, 0xf30
    lwz r5, 0xf30(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x5c(r1)
    stw r4, 0x60(r1)
    stw r0, 0x64(r1)
lbl_fn_8015E7A0_0000045C:
    lwz r5, 0x5c(r1)
    addi r3, r1, 0x20
    lwz r4, 0x60(r1)
    lwz r0, 0x64(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8015E7A0_00000498
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8015E7A0_00000498:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8015E7A0_00000574
    cmpwi r0, 0x8
    beq lbl_fn_8015E7A0_000004B0
    stw r0, 0x564(r29)
lbl_fn_8015E7A0_000004B0:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8015E7A0_00000574
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8015E7A0_000004E8
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x68(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x6c(r1)
    stw r0, 0x70(r1)
    b lbl_fn_8015E7A0_00000504
lbl_fn_8015E7A0_000004E8:
    addi r3, r31, 0xf3c
    lwz r5, 0xf3c(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x68(r1)
    stw r4, 0x6c(r1)
    stw r0, 0x70(r1)
lbl_fn_8015E7A0_00000504:
    lwz r5, 0x68(r1)
    addi r3, r1, 0x14
    lwz r4, 0x6c(r1)
    lwz r0, 0x70(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8015E7A0_00000540
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8015E7A0_00000540:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8015E7A0_00000574
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8015E7A0_00000574:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8015E7A0_000005A4
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8015E7A0_000005A4:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_8015E7A0_000005D0
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8015E7A0_000005D0:
    lwz r0, 0x12a4(r29)
    li r3, 0x0
    stw r3, 0x638(r29)
    extrwi. r0, r0, 1, 3
    beq lbl_fn_8015E7A0_000005F8
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_8015E7A0_000005F8
    li r4, 0xb5
    bl fn_803750E4
lbl_fn_8015E7A0_000005F8:
    mr r3, r29
    li r4, 0x1
    bl fn_80164DCC
    lwz r3, 0x1208(r29)
    cmpwi r3, 0x0
    beq lbl_fn_8015E7A0_00000664
    beq lbl_fn_8015E7A0_00000664
    lfs f0, lbl_8088196C
    li r30, 0x0
    li r0, 0x3
    stw r30, 0x34(r1)
    addi r4, r1, 0x30
    stw r30, 0x38(r1)
    stw r30, 0x3c(r1)
    stfs f0, 0x44(r1)
    stfs f0, 0x48(r1)
    stfs f0, 0x4c(r1)
    stw r0, 0x30(r1)
    stw r29, 0x40(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r3, 0x1208(r29)
    li r0, 0xff
    stb r0, 0x520(r3)
    stw r30, 0x1208(r29)
lbl_fn_8015E7A0_00000664:
    addi r11, r1, 0x90
    bl _restgpr_26
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_8015EB2C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    stfd f30, 0x10(r1)
    psq_st f30, 0x18(r1), 0, 0
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    beq lbl_fn_8015EB2C_000006AC
    li r3, 0x1
    b lbl_fn_8015EB2C_000007F4
lbl_fn_8015EB2C_000006AC:
    lwz r4, 0x12a4(r3)
    extrwi. r0, r4, 1, 29
    beq lbl_fn_8015EB2C_00000724
    extrwi. r0, r4, 1, 6
    beq lbl_fn_8015EB2C_000006C8
    li r3, 0x1
    b lbl_fn_8015EB2C_000007F4
lbl_fn_8015EB2C_000006C8:
    lbz r0, 0x2f4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8015EB2C_000006F8
    lfs f31, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    mfcr r3
    extrwi r3, r3, 1, 2
    b lbl_fn_8015EB2C_000007F4
lbl_fn_8015EB2C_000006F8:
    lfs f31, 0x2e8(r3)
    li r4, 0x0
    lfs f30, 0x2e4(r3)
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fsubs f0, f1, f31
    fcmpo cr0, f30, f0
    cror eq, gt, eq
    mfcr r3
    extrwi r3, r3, 1, 2
    b lbl_fn_8015EB2C_000007F4
lbl_fn_8015EB2C_00000724:
    lwz r0, 0xf80(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8015EB2C_00000784
    lwz r4, 0x560(r3)
    cmpwi r4, 0x43
    bne lbl_fn_8015EB2C_00000748
    mr r3, r0
    bl fn_80196C68
    b lbl_fn_8015EB2C_000007F4
lbl_fn_8015EB2C_00000748:
    cmpwi r4, 0x17
    bne lbl_fn_8015EB2C_0000075C
    mr r3, r0
    bl fn_801AE41C
    b lbl_fn_8015EB2C_000007F4
lbl_fn_8015EB2C_0000075C:
    cmpwi r4, 0x3b
    bne lbl_fn_8015EB2C_00000770
    mr r3, r0
    bl fn_801AF81C
    b lbl_fn_8015EB2C_000007F4
lbl_fn_8015EB2C_00000770:
    cmpwi r4, 0x8e
    bne lbl_fn_8015EB2C_00000784
    mr r3, r0
    bl fn_801B0260
    b lbl_fn_8015EB2C_000007F4
lbl_fn_8015EB2C_00000784:
    lfs f1, 0x578(r3)
    lfs f0, lbl_80881B24
    fcmpo cr0, f1, f0
    ble lbl_fn_8015EB2C_000007F0
    lbz r0, 0x2f4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8015EB2C_000007C4
    lfs f30, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f30, f1
    cror eq, gt, eq
    mfcr r3
    extrwi r3, r3, 1, 2
    b lbl_fn_8015EB2C_000007F4
lbl_fn_8015EB2C_000007C4:
    lfs f30, 0x2e8(r3)
    li r4, 0x0
    lfs f31, 0x2e4(r3)
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fsubs f0, f1, f30
    fcmpo cr0, f31, f0
    cror eq, gt, eq
    mfcr r3
    extrwi r3, r3, 1, 2
    b lbl_fn_8015EB2C_000007F4
lbl_fn_8015EB2C_000007F0:
    li r3, 0x0
lbl_fn_8015EB2C_000007F4:
    lwz r0, 0x34(r1)
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    psq_l f30, 0x18(r1), 0, 0
    lfd f30, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8015ECC4(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    lis r4, lbl_80737A9C@ha
    li r7, 0x0
    stw r0, 0x64(r1)
    addi r4, r4, lbl_80737A9C@l
    addi r5, r4, 0x24
    stw r31, 0x5c(r1)
    lis r31, lbl_8077A720@ha
    addi r31, r31, lbl_8077A720@l
    mr r6, r5
    stw r30, 0x58(r1)
    li r4, 0x0
    stw r29, 0x54(r1)
    mr r29, r3
    li r3, 0x8
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_8015ECC4_00000870
    mr r4, r29
    bl fn_801AE77C
    mr r30, r3
lbl_fn_8015ECC4_00000870:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8015ECC4_00000900
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8015ECC4_000008A8
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_8015ECC4_000008C4
lbl_fn_8015ECC4_000008A8:
    addi r3, r31, 0xf48
    lwz r5, 0xf48(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
lbl_fn_8015ECC4_000008C4:
    lwz r5, 0x2c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8015ECC4_00000900
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8015ECC4_00000900:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8015ECC4_00000AB4
    cmpwi r0, 0x8
    beq lbl_fn_8015ECC4_00000918
    stw r0, 0x564(r29)
lbl_fn_8015ECC4_00000918:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8015ECC4_00000AB4
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8015ECC4_00000950
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x38(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    b lbl_fn_8015ECC4_0000096C
lbl_fn_8015ECC4_00000950:
    addi r3, r31, 0xf54
    lwz r5, 0xf54(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_8015ECC4_0000096C:
    lwz r5, 0x38(r1)
    addi r3, r1, 0x20
    lwz r4, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8015ECC4_000009A8
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8015ECC4_000009A8:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8015ECC4_00000A84
    cmpwi r0, 0x8
    beq lbl_fn_8015ECC4_000009C0
    stw r0, 0x564(r29)
lbl_fn_8015ECC4_000009C0:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8015ECC4_00000A84
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8015ECC4_000009F8
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    b lbl_fn_8015ECC4_00000A14
lbl_fn_8015ECC4_000009F8:
    addi r3, r31, 0xf60
    lwz r5, 0xf60(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
lbl_fn_8015ECC4_00000A14:
    lwz r5, 0x44(r1)
    addi r3, r1, 0x14
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8015ECC4_00000A50
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8015ECC4_00000A50:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8015ECC4_00000A84
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8015ECC4_00000A84:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8015ECC4_00000AB4
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8015ECC4_00000AB4:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_8015ECC4_00000AE0
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8015ECC4_00000AE0:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_8015EFAC(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    stw r31, 0xac(r1)
    lis r31, lbl_8077A720@ha
    addi r31, r31, lbl_8077A720@l
    stw r30, 0xa8(r1)
    stw r29, 0xa4(r1)
    mr r29, r3
    stw r28, 0xa0(r1)
    mr r28, r4
    lwz r5, 0x60(r3)
    lwz r3, 0x24(r5)
    subi r0, r3, 0x2
    cmplwi r0, 0x1
    bgt lbl_fn_8015EFAC_00000DEC
    lis r5, lbl_80737A9C@ha
    li r3, 0xc
    addi r5, r5, lbl_80737A9C@l
    li r4, 0x0
    addi r5, r5, 0x24
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_8015EFAC_00000B78
    mr r4, r29
    li r5, 0x3c
    bl fn_801AEF7C
    mr r30, r3
lbl_fn_8015EFAC_00000B78:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8015EFAC_00000C08
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8015EFAC_00000BB0
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x50(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x54(r1)
    stw r0, 0x58(r1)
    b lbl_fn_8015EFAC_00000BCC
lbl_fn_8015EFAC_00000BB0:
    addi r3, r31, 0xf6c
    lwz r5, 0xf6c(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x50(r1)
    stw r4, 0x54(r1)
    stw r0, 0x58(r1)
lbl_fn_8015EFAC_00000BCC:
    lwz r5, 0x50(r1)
    addi r3, r1, 0x2c
    lwz r4, 0x54(r1)
    lwz r0, 0x58(r1)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8015EFAC_00000C08
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8015EFAC_00000C08:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8015EFAC_00000DBC
    cmpwi r0, 0x8
    beq lbl_fn_8015EFAC_00000C20
    stw r0, 0x564(r29)
lbl_fn_8015EFAC_00000C20:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8015EFAC_00000DBC
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8015EFAC_00000C58
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x5c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x60(r1)
    stw r0, 0x64(r1)
    b lbl_fn_8015EFAC_00000C74
lbl_fn_8015EFAC_00000C58:
    addi r3, r31, 0xf78
    lwz r5, 0xf78(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x5c(r1)
    stw r4, 0x60(r1)
    stw r0, 0x64(r1)
lbl_fn_8015EFAC_00000C74:
    lwz r5, 0x5c(r1)
    addi r3, r1, 0x44
    lwz r4, 0x60(r1)
    lwz r0, 0x64(r1)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8015EFAC_00000CB0
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8015EFAC_00000CB0:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8015EFAC_00000D8C
    cmpwi r0, 0x8
    beq lbl_fn_8015EFAC_00000CC8
    stw r0, 0x564(r29)
lbl_fn_8015EFAC_00000CC8:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8015EFAC_00000D8C
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8015EFAC_00000D00
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x68(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x6c(r1)
    stw r0, 0x70(r1)
    b lbl_fn_8015EFAC_00000D1C
lbl_fn_8015EFAC_00000D00:
    addi r3, r31, 0xf84
    lwz r5, 0xf84(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x68(r1)
    stw r4, 0x6c(r1)
    stw r0, 0x70(r1)
lbl_fn_8015EFAC_00000D1C:
    lwz r5, 0x68(r1)
    addi r3, r1, 0x38
    lwz r4, 0x6c(r1)
    lwz r0, 0x70(r1)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8015EFAC_00000D58
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8015EFAC_00000D58:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8015EFAC_00000D8C
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8015EFAC_00000D8C:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8015EFAC_00000DBC
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8015EFAC_00000DBC:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_8015EFAC_00001098
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    b lbl_fn_8015EFAC_00001098
lbl_fn_8015EFAC_00000DEC:
    lis r5, lbl_80737A9C@ha
    li r3, 0xc
    addi r5, r5, lbl_80737A9C@l
    li r4, 0x0
    addi r5, r5, 0x24
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_8015EFAC_00000E28
    mr r4, r29
    mr r5, r28
    bl fn_801AE978
    mr r30, r3
lbl_fn_8015EFAC_00000E28:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8015EFAC_00000EB8
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8015EFAC_00000E60
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x74(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x78(r1)
    stw r0, 0x7c(r1)
    b lbl_fn_8015EFAC_00000E7C
lbl_fn_8015EFAC_00000E60:
    addi r3, r31, 0xf90
    lwz r5, 0xf90(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x74(r1)
    stw r4, 0x78(r1)
    stw r0, 0x7c(r1)
lbl_fn_8015EFAC_00000E7C:
    lwz r5, 0x74(r1)
    addi r3, r1, 0x8
    lwz r4, 0x78(r1)
    lwz r0, 0x7c(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8015EFAC_00000EB8
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8015EFAC_00000EB8:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8015EFAC_0000106C
    cmpwi r0, 0x8
    beq lbl_fn_8015EFAC_00000ED0
    stw r0, 0x564(r29)
lbl_fn_8015EFAC_00000ED0:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8015EFAC_0000106C
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8015EFAC_00000F08
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x80(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x84(r1)
    stw r0, 0x88(r1)
    b lbl_fn_8015EFAC_00000F24
lbl_fn_8015EFAC_00000F08:
    addi r3, r31, 0xf9c
    lwz r5, 0xf9c(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x80(r1)
    stw r4, 0x84(r1)
    stw r0, 0x88(r1)
lbl_fn_8015EFAC_00000F24:
    lwz r5, 0x80(r1)
    addi r3, r1, 0x20
    lwz r4, 0x84(r1)
    lwz r0, 0x88(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8015EFAC_00000F60
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8015EFAC_00000F60:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8015EFAC_0000103C
    cmpwi r0, 0x8
    beq lbl_fn_8015EFAC_00000F78
    stw r0, 0x564(r29)
lbl_fn_8015EFAC_00000F78:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8015EFAC_0000103C
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8015EFAC_00000FB0
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x8c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x90(r1)
    stw r0, 0x94(r1)
    b lbl_fn_8015EFAC_00000FCC
lbl_fn_8015EFAC_00000FB0:
    addi r3, r31, 0xfa8
    lwz r5, 0xfa8(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x8c(r1)
    stw r4, 0x90(r1)
    stw r0, 0x94(r1)
lbl_fn_8015EFAC_00000FCC:
    lwz r5, 0x8c(r1)
    addi r3, r1, 0x14
    lwz r4, 0x90(r1)
    lwz r0, 0x94(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8015EFAC_00001008
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8015EFAC_00001008:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8015EFAC_0000103C
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8015EFAC_0000103C:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8015EFAC_0000106C
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8015EFAC_0000106C:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_8015EFAC_00001098
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8015EFAC_00001098:
    lwz r0, 0xb4(r1)
    lwz r31, 0xac(r1)
    lwz r30, 0xa8(r1)
    lwz r29, 0xa4(r1)
    lwz r28, 0xa0(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_8015F568(void)
{
    nofralloc
    stwu r1, -0x160(r1)
    mflr r0
    stw r0, 0x164(r1)
    addi r11, r1, 0x160
    bl _savegpr_23
    lwz r0, 0x648(r3)
    lis r31, lbl_8077A720@ha
    mr r27, r3
    mr r28, r4
    cmpwi r0, 0x0
    mr r29, r5
    mr r30, r6
    addi r31, r31, lbl_8077A720@l
    beq lbl_fn_8015F568_00001CA8
    lwz r0, 0x12a4(r3)
    srwi. r0, r0, 31
    beq lbl_fn_8015F568_00001454
    bl fn_80153B44
    lfs f2, 0x530(r27)
    cmpwi r3, 0x1
    addi r4, r1, 0xa4
    psq_l f1, 0x528(r27), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xac(r1)
    bne lbl_fn_8015F568_00001158
    lfs f1, 0x538(r27)
    bl fn_8068A850
    frsp f4, f1
    lfs f3, lbl_80881AB0
    lfs f0, 0xa4(r1)
    lfs f1, 0x538(r27)
    fmadds f0, f3, f4, f0
    stfs f0, 0xa4(r1)
    bl fn_8068AD58
    frsp f4, f1
    lfs f3, lbl_808819F8
    lfs f0, 0xac(r1)
    fmadds f0, f3, f4, f0
    stfs f0, 0xac(r1)
    b lbl_fn_8015F568_0000121C
lbl_fn_8015F568_00001158:
    cmpwi r3, 0x2
    bne lbl_fn_8015F568_0000119C
    lfs f1, 0x538(r27)
    bl fn_8068A850
    frsp f4, f1
    lfs f3, lbl_808819F8
    lfs f0, 0xa4(r1)
    lfs f1, 0x538(r27)
    fmadds f0, f3, f4, f0
    stfs f0, 0xa4(r1)
    bl fn_8068AD58
    frsp f4, f1
    lfs f3, lbl_80881AB0
    lfs f0, 0xac(r1)
    fmadds f0, f3, f4, f0
    stfs f0, 0xac(r1)
    b lbl_fn_8015F568_0000121C
lbl_fn_8015F568_0000119C:
    lfs f3, lbl_8088196C
    addi r3, r1, 0xb0
    lfs f0, lbl_80881964
    li r4, 0x79
    stfs f3, 0x74(r1)
    stfs f3, 0x78(r1)
    stfs f0, 0x7c(r1)
    lfs f1, 0x538(r27)
    bl fn_805F8E70
    addi r4, r1, 0x74
    addi r3, r1, 0xb0
    mr r5, r4
    bl fn_805F93C0
    lfs f5, 0x7c(r1)
    lfs f4, lbl_80881B28
    lfs f3, 0x78(r1)
    fmuls f7, f5, f4
    lfs f0, 0x74(r1)
    fmuls f6, f3, f4
    lfs f3, 0xa8(r1)
    fmuls f5, f0, f4
    lfs f4, 0xa4(r1)
    lfs f0, 0xac(r1)
    fadds f3, f3, f6
    fadds f4, f4, f5
    stfs f5, 0x80(r1)
    fadds f0, f0, f7
    stfs f6, 0x84(r1)
    stfs f7, 0x88(r1)
    stfs f4, 0xa4(r1)
    stfs f3, 0xa8(r1)
    stfs f0, 0xac(r1)
lbl_fn_8015F568_0000121C:
    lfs f3, lbl_8088196C
    addi r3, r1, 0x50
    lfs f0, lbl_80881964
    addi r4, r27, 0xc14
    stfs f3, 0x50(r1)
    addi r5, r1, 0x5c
    stfs f0, 0x54(r1)
    stfs f3, 0x58(r1)
    bl fn_805F99B0
    lfs f5, lbl_808819B0
    addi r26, r1, 0x98
    lfs f0, 0x60(r1)
    addi r24, r1, 0xa4
    lfs f3, 0x5c(r1)
    addi r25, r1, 0x8c
    fmuls f7, f0, f5
    lfs f0, 0xa8(r1)
    fmuls f8, f3, f5
    lfs f3, 0xa4(r1)
    lfs f6, 0x64(r1)
    mr r3, r27
    fadds f4, f3, f8
    lfs f2, 0x530(r27)
    fadds f3, f0, f7
    psq_l f1, 0x528(r27), 0, 0
    fmuls f6, f6, f5
    stfs f4, 0xa4(r1)
    lfs f0, 0xac(r1)
    stfs f3, 0xa8(r1)
    fadds f5, f0, f6
    lfs f4, lbl_808819F8
    psq_st f1, 0x0(r26), 0, 0
    psq_l f1, 0x0(r24), 0, 0
    lfs f0, 0x9c(r1)
    stfs f2, 0xa0(r1)
    fmr f2, f5
    fadds f3, f0, f4
    lwz r23, lbl_8087EE98
    psq_st f1, 0x0(r25), 0, 0
    lfs f0, 0x90(r1)
    stfs f8, 0x68(r1)
    fadds f0, f0, f4
    stfs f7, 0x6c(r1)
    stfs f6, 0x70(r1)
    stfs f5, 0xac(r1)
    stfs f2, 0x94(r1)
    stfs f3, 0x9c(r1)
    stfs f0, 0x90(r1)
    bl fn_80179D44
    oris r7, r3, 0x8000
    mr r3, r23
    mr r5, r26
    mr r6, r25
    li r4, 0x0
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ED34
    cmpwi r3, 0x0
    bne lbl_fn_8015F568_00001318
    psq_l f1, 0x0(r24), 0, 0
    lfs f2, 0xac(r1)
    psq_st f1, 0x528(r27), 0, 0
    stfs f2, 0x530(r27)
lbl_fn_8015F568_00001318:
    lwz r0, 0x12a4(r27)
    clrlwi r0, r0, 2
    stw r0, 0x12a4(r27)
    lwz r3, lbl_8087F430
    lwz r5, 0x10d8(r3)
    cmpwi r5, 0x0
    beq lbl_fn_8015F568_0000137C
    lwz r3, 0xc38(r27)
    cmpwi r3, 0x0
    ble lbl_fn_8015F568_0000137C
    lwz r0, 0xc3c(r27)
    cmpwi r0, 0x0
    ble lbl_fn_8015F568_0000137C
    subi r0, r3, 0x1
    lwz r3, 0xb0(r5)
    slwi r0, r0, 6
    li r4, 0x0
    add r3, r3, r0
    stw r4, 0x3c(r3)
    lwz r6, 0xc3c(r27)
    lwz r3, 0xb0(r5)
    subi r0, r6, 0x1
    slwi r0, r0, 6
    add r3, r3, r0
    stw r4, 0x3c(r3)
lbl_fn_8015F568_0000137C:
    lwz r4, 0x48(r27)
    cmpwi r4, 0x0
    bne lbl_fn_8015F568_000013B0
    lwz r3, lbl_8087F0A8
    lwz r0, 0x278(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8015F568_000013B0
    lwz r3, 0x5c(r27)
    lwz r0, 0x11c(r3)
    cmpwi r0, 0x1
    bne lbl_fn_8015F568_000013B0
    li r0, 0x1
    b lbl_fn_8015F568_000013D0
lbl_fn_8015F568_000013B0:
    cmpwi r4, 0x0
    bne lbl_fn_8015F568_000013CC
    lwz r0, 0x12a8(r27)
    extrwi. r0, r0, 1, 14
    beq lbl_fn_8015F568_000013CC
    li r0, 0x1
    b lbl_fn_8015F568_000013D0
lbl_fn_8015F568_000013CC:
    li r0, 0x0
lbl_fn_8015F568_000013D0:
    cmpwi r0, 0x0
    beq lbl_fn_8015F568_00001454
    lwz r3, lbl_8087F430
    li r4, 0x25
    bl fn_80370174
    cmpwi r3, 0x1
    blt lbl_fn_8015F568_00001434
    lwz r3, 0x648(r27)
    cmpwi r3, 0x0
    beq lbl_fn_8015F568_00001400
    li r4, 0x1
    bl fn_80044E0C
lbl_fn_8015F568_00001400:
    lwz r3, 0x64c(r27)
    cmpwi r3, 0x0
    beq lbl_fn_8015F568_00001414
    li r4, 0x1
    bl fn_80044E0C
lbl_fn_8015F568_00001414:
    li r0, 0x0
    li r3, -0x1
    stw r3, 0x674(r27)
    mr r3, r27
    stw r0, 0x648(r27)
    stw r0, 0x64c(r27)
    bl fn_8014C228
    b lbl_fn_8015F568_00001454
lbl_fn_8015F568_00001434:
    lwz r0, 0x674(r27)
    cmpwi r0, 0x0
    blt lbl_fn_8015F568_00001454
    mr r3, r27
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8014DEE4
lbl_fn_8015F568_00001454:
    cmpwi r30, 0x0
    beq lbl_fn_8015F568_00001CA8
    lwz r3, lbl_8087EE68
    cmpwi r3, 0x0
    beq lbl_fn_8015F568_00001478
    mr r4, r27
    mr r5, r30
    bl fn_800185B4
    b lbl_fn_8015F568_0000147C
lbl_fn_8015F568_00001478:
    li r3, 0x0
lbl_fn_8015F568_0000147C:
    cmpwi r3, 0x0
    beq lbl_fn_8015F568_00001578
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8015F568_00001578
    lwz r6, 0xc(r3)
    cmpwi r6, 0x0
    beq lbl_fn_8015F568_00001578
    lwz r0, 0x54c(r6)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    beq lbl_fn_8015F568_00001558
    lwz r7, 0x38(r6)
    li r4, 0x0
    li r0, 0x0
    li r3, 0x0
    rlwinm r5, r7, 0, 29, 29
    cmplwi r5, 0x4
    beq lbl_fn_8015F568_000014D8
    clrlwi r5, r7, 31
    cmplwi r5, 0x1
    beq lbl_fn_8015F568_000014D8
    li r3, 0x1
lbl_fn_8015F568_000014D8:
    cmpwi r3, 0x0
    beq lbl_fn_8015F568_000014F4
    lwz r3, 0x7e0(r6)
    rlwinm r3, r3, 0, 26, 26
    cmplwi r3, 0x20
    beq lbl_fn_8015F568_000014F4
    li r0, 0x1
lbl_fn_8015F568_000014F4:
    cmpwi r0, 0x0
    beq lbl_fn_8015F568_00001528
    lwz r0, 0x55c(r6)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_8015F568_0000151C
    lwz r0, 0x560(r6)
    cmpwi r0, 0x1c
    bne lbl_fn_8015F568_0000151C
    li r3, 0x1
lbl_fn_8015F568_0000151C:
    cmpwi r3, 0x0
    bne lbl_fn_8015F568_00001528
    li r4, 0x1
lbl_fn_8015F568_00001528:
    cmpwi r4, 0x0
    beq lbl_fn_8015F568_00001558
    lwz r3, 0x7e0(r27)
    rlwinm r0, r3, 0, 23, 23
    cmplwi r0, 0x100
    beq lbl_fn_8015F568_00001558
    rlwinm r3, r3, 0, 15, 15
    subis r0, r3, 0x1
    cmplwi r0, 0x0
    beq lbl_fn_8015F568_00001558
    mr r29, r6
    b lbl_fn_8015F568_00001578
lbl_fn_8015F568_00001558:
    cmplw r6, r27
    bne lbl_fn_8015F568_00001568
    mr r29, r6
    b lbl_fn_8015F568_00001578
lbl_fn_8015F568_00001568:
    lwz r0, 0xd1c(r27)
    cmpwi r0, 0x0
    beq lbl_fn_8015F568_00001578
    mr r29, r0
lbl_fn_8015F568_00001578:
    lwz r3, 0x48(r27)
    li r0, 0x0
    li r4, 0x0
    cmpwi r3, 0x3
    bne lbl_fn_8015F568_000015A0
    lwz r3, lbl_8087F0A8
    lwz r3, 0x98(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8015F568_000015A0
    li r4, 0x1
lbl_fn_8015F568_000015A0:
    cmpwi r4, 0x0
    beq lbl_fn_8015F568_000015B8
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_8015F568_000015B8
    li r0, 0x1
lbl_fn_8015F568_000015B8:
    cmpwi r0, 0x0
    beq lbl_fn_8015F568_000015CC
    lwz r3, lbl_8087F430
    bl fn_803761BC
    cmpwi r3, 0x0
lbl_fn_8015F568_000015CC:
    lwz r4, 0x638(r27)
    lis r3, lbl_80737808@ha
    lfs f0, lbl_8088196C
    lis r0, 0x4330
    stfs f0, 0xfb8(r27)
    lwz r5, 0x48(r27)
    stw r4, 0x63c(r27)
    lfd f3, lbl_80737808@l(r3)
    cmpwi r5, 0x2
    stw r30, 0x638(r27)
    lwz r3, 0xc0(r30)
    stw r0, 0xe0(r1)
    xoris r0, r3, 0x8000
    stw r0, 0xe4(r1)
    lfd f0, 0xe0(r1)
    fsubs f0, f0, f3
    stfs f0, 0xfbc(r27)
    bne lbl_fn_8015F568_00001660
    lwz r0, 0x12a4(r27)
    extrwi r0, r0, 1, 9
    cmplwi r0, 0x1
    beq lbl_fn_8015F568_00001660
    lwz r0, 0x12a8(r27)
    extrwi. r0, r0, 1, 21
    beq lbl_fn_8015F568_00001660
    cmpwi r30, 0x0
    beq lbl_fn_8015F568_00001660
    mr r3, r30
    bl fn_8021A8D0
    cmpwi r3, 0x0
    bne lbl_fn_8015F568_00001658
    mr r3, r30
    bl fn_8021A918
    cmpwi r3, 0x0
    beq lbl_fn_8015F568_00001660
lbl_fn_8015F568_00001658:
    lfs f0, lbl_808819D4
    stfs f0, 0xfbc(r27)
lbl_fn_8015F568_00001660:
    lwz r3, lbl_8087F9F8
    cmpwi r3, 0x0
    beq lbl_fn_8015F568_000016B4
    lwz r5, 0x638(r27)
    mr r4, r27
    li r6, 0x0
    bl fn_805ADCC4
    cmpwi r3, 0x0
    beq lbl_fn_8015F568_000016B4
    lwz r3, 0x638(r27)
    lwz r0, 0xac(r3)
    rlwinm r3, r0, 0, 13, 13
    subis r0, r3, 0x4
    cmplwi r0, 0x0
    beq lbl_fn_8015F568_000016A4
    lfs f0, lbl_80881A48
    stfs f0, 0xfbc(r27)
lbl_fn_8015F568_000016A4:
    lwz r3, lbl_8087F9F8
    mr r4, r27
    lwz r5, 0x638(r27)
    bl fn_805ADD84
lbl_fn_8015F568_000016B4:
    lfs f2, 0x530(r27)
    addi r3, r27, 0xf60
    psq_l f1, 0x528(r27), 0, 0
    addi r4, r27, 0xf6c
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x0(r28), 0, 0
    stfs f2, 0xf68(r27)
    lfs f2, 0x8(r28)
    stw r29, 0xf7c(r27)
    lwz r3, 0x638(r27)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xf74(r27)
    lfs f0, 0x58(r3)
    stfs f0, 0xf78(r27)
    lbz r0, 0x2(r3)
    cmpwi r0, 0x4
    bne lbl_fn_8015F568_0000170C
    psq_l f1, 0x528(r27), 0, 0
    lfs f2, 0x530(r27)
    stw r27, 0xf7c(r27)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x8(r4)
lbl_fn_8015F568_0000170C:
    lfs f3, 0xfbc(r27)
    lfs f0, lbl_8088196C
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_8015F568_000019E4
    lis r3, lbl_80737A9C@ha
    lwz r0, 0x638(r27)
    addi r3, r3, lbl_80737A9C@l
    stw r0, 0x63c(r27)
    addi r5, r3, 0x24
    li r4, 0x0
    li r3, 0x24
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_8015F568_00001770
    lwz r5, 0xf7c(r27)
    mr r4, r27
    lfs f1, lbl_80881964
    addi r6, r27, 0xf6c
    li r7, 0x0
    bl fn_801BE10C
    mr r30, r3
lbl_fn_8015F568_00001770:
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x6
    bne lbl_fn_8015F568_00001800
    lwz r0, 0xf80(r27)
    cmpwi r0, 0x0
    bne lbl_fn_8015F568_000017A8
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0xe8(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0xec(r1)
    stw r0, 0xf0(r1)
    b lbl_fn_8015F568_000017C4
lbl_fn_8015F568_000017A8:
    addi r3, r31, 0xfb4
    lwz r5, 0xfb4(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0xe8(r1)
    stw r4, 0xec(r1)
    stw r0, 0xf0(r1)
lbl_fn_8015F568_000017C4:
    lwz r5, 0xe8(r1)
    addi r3, r1, 0x44
    lwz r4, 0xec(r1)
    lwz r0, 0xf0(r1)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8015F568_00001800
    lwz r3, 0xf80(r27)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8015F568_00001800:
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x6
    beq lbl_fn_8015F568_000019B4
    cmpwi r0, 0x8
    beq lbl_fn_8015F568_00001818
    stw r0, 0x564(r27)
lbl_fn_8015F568_00001818:
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x6
    bne lbl_fn_8015F568_000019B4
    lwz r0, 0xf80(r27)
    cmpwi r0, 0x0
    bne lbl_fn_8015F568_00001850
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0xf4(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0xf8(r1)
    stw r0, 0xfc(r1)
    b lbl_fn_8015F568_0000186C
lbl_fn_8015F568_00001850:
    addi r3, r31, 0xfc0
    lwz r5, 0xfc0(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0xf4(r1)
    stw r4, 0xf8(r1)
    stw r0, 0xfc(r1)
lbl_fn_8015F568_0000186C:
    lwz r5, 0xf4(r1)
    addi r3, r1, 0x2c
    lwz r4, 0xf8(r1)
    lwz r0, 0xfc(r1)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8015F568_000018A8
    lwz r3, 0xf80(r27)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8015F568_000018A8:
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x6
    beq lbl_fn_8015F568_00001984
    cmpwi r0, 0x8
    beq lbl_fn_8015F568_000018C0
    stw r0, 0x564(r27)
lbl_fn_8015F568_000018C0:
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x6
    bne lbl_fn_8015F568_00001984
    lwz r0, 0xf80(r27)
    cmpwi r0, 0x0
    bne lbl_fn_8015F568_000018F8
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x100(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x104(r1)
    stw r0, 0x108(r1)
    b lbl_fn_8015F568_00001914
lbl_fn_8015F568_000018F8:
    addi r3, r31, 0xfcc
    lwz r5, 0xfcc(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x100(r1)
    stw r4, 0x104(r1)
    stw r0, 0x108(r1)
lbl_fn_8015F568_00001914:
    lwz r5, 0x100(r1)
    addi r3, r1, 0x38
    lwz r4, 0x104(r1)
    lwz r0, 0x108(r1)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8015F568_00001950
    lwz r3, 0xf80(r27)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8015F568_00001950:
    mr r3, r27
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r27)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r27)
    beq lbl_fn_8015F568_00001984
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8015F568_00001984:
    lwz r3, 0xf80(r27)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r27)
    cmpwi r3, 0x0
    stw r0, 0xf80(r27)
    beq lbl_fn_8015F568_000019B4
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8015F568_000019B4:
    lwz r3, 0xf80(r27)
    li r0, 0x6
    stw r0, 0x55c(r27)
    cmpwi r3, 0x0
    stw r30, 0xf80(r27)
    beq lbl_fn_8015F568_00001CA8
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    b lbl_fn_8015F568_00001CA8
lbl_fn_8015F568_000019E4:
    lis r5, lbl_80737A9C@ha
    li r3, 0x4c
    addi r5, r5, lbl_80737A9C@l
    li r4, 0x0
    addi r5, r5, 0x24
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_8015F568_00001A38
    lfs f0, 0xfbc(r27)
    mr r4, r27
    lwz r5, 0xf7c(r27)
    addi r6, r27, 0xf6c
    fctiwz f0, f0
    lfs f1, 0xf78(r27)
    stfd f0, 0xe0(r1)
    lwz r7, 0xe4(r1)
    bl fn_801BC5B8
    mr r30, r3
lbl_fn_8015F568_00001A38:
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x6
    bne lbl_fn_8015F568_00001AC8
    lwz r0, 0xf80(r27)
    cmpwi r0, 0x0
    bne lbl_fn_8015F568_00001A70
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x10c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x110(r1)
    stw r0, 0x114(r1)
    b lbl_fn_8015F568_00001A8C
lbl_fn_8015F568_00001A70:
    addi r3, r31, 0xfd8
    lwz r5, 0xfd8(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x10c(r1)
    stw r4, 0x110(r1)
    stw r0, 0x114(r1)
lbl_fn_8015F568_00001A8C:
    lwz r5, 0x10c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x110(r1)
    lwz r0, 0x114(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8015F568_00001AC8
    lwz r3, 0xf80(r27)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8015F568_00001AC8:
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x6
    beq lbl_fn_8015F568_00001C7C
    cmpwi r0, 0x8
    beq lbl_fn_8015F568_00001AE0
    stw r0, 0x564(r27)
lbl_fn_8015F568_00001AE0:
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x6
    bne lbl_fn_8015F568_00001C7C
    lwz r0, 0xf80(r27)
    cmpwi r0, 0x0
    bne lbl_fn_8015F568_00001B18
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x118(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x11c(r1)
    stw r0, 0x120(r1)
    b lbl_fn_8015F568_00001B34
lbl_fn_8015F568_00001B18:
    addi r3, r31, 0xfe4
    lwz r5, 0xfe4(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x118(r1)
    stw r4, 0x11c(r1)
    stw r0, 0x120(r1)
lbl_fn_8015F568_00001B34:
    lwz r5, 0x118(r1)
    addi r3, r1, 0x20
    lwz r4, 0x11c(r1)
    lwz r0, 0x120(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8015F568_00001B70
    lwz r3, 0xf80(r27)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8015F568_00001B70:
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x6
    beq lbl_fn_8015F568_00001C4C
    cmpwi r0, 0x8
    beq lbl_fn_8015F568_00001B88
    stw r0, 0x564(r27)
lbl_fn_8015F568_00001B88:
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x6
    bne lbl_fn_8015F568_00001C4C
    lwz r0, 0xf80(r27)
    cmpwi r0, 0x0
    bne lbl_fn_8015F568_00001BC0
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x124(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x128(r1)
    stw r0, 0x12c(r1)
    b lbl_fn_8015F568_00001BDC
lbl_fn_8015F568_00001BC0:
    addi r3, r31, 0xff0
    lwz r5, 0xff0(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x124(r1)
    stw r4, 0x128(r1)
    stw r0, 0x12c(r1)
lbl_fn_8015F568_00001BDC:
    lwz r5, 0x124(r1)
    addi r3, r1, 0x14
    lwz r4, 0x128(r1)
    lwz r0, 0x12c(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8015F568_00001C18
    lwz r3, 0xf80(r27)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8015F568_00001C18:
    mr r3, r27
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r27)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r27)
    beq lbl_fn_8015F568_00001C4C
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8015F568_00001C4C:
    lwz r3, 0xf80(r27)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r27)
    cmpwi r3, 0x0
    stw r0, 0xf80(r27)
    beq lbl_fn_8015F568_00001C7C
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8015F568_00001C7C:
    lwz r3, 0xf80(r27)
    li r0, 0x6
    stw r0, 0x55c(r27)
    cmpwi r3, 0x0
    stw r30, 0xf80(r27)
    beq lbl_fn_8015F568_00001CA8
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8015F568_00001CA8:
    addi r11, r1, 0x160
    bl _restgpr_23
    lwz r0, 0x164(r1)
    mtlr r0
    addi r1, r1, 0x160
    blr
}
