#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_17(void);
extern void _restgpr_24(void);
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _savegpr_17(void);
extern void _savegpr_24(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void fn_805F8CA0(void);
extern void fn_805F93C0(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_805F9990(void);
extern void fn_805F99B0(void);
extern void fn_8068B100(void);

/* External data declarations */

/* Small data declarations */
extern u32 lbl_80880934;
extern u32 lbl_80880940;
extern u32 lbl_80880944;
extern u32 lbl_80880948;
extern u32 lbl_8088094C;
extern u32 lbl_80880950;
extern u32 lbl_80880954;
extern u32 lbl_80880958;

/* Function declarations */
void fn_8004FF58(void);
void fn_800500FC(void);
void fn_800502A8(void);
void fn_80050420(void);
void fn_80050900(void);
void fn_80050A1C(void);
void fn_80050C38(void);
void fn_80050E18(void);
void fn_80051684(void);
void fn_80051A88(void);
void fn_80051B14(void);
void fn_80051B70(void);
void fn_80051BC4(void);
void fn_80051C10(void);
void fn_80051C78(void);
void fn_80051CD8(void);
void fn_80051E90(void);
void fn_800520F0(void);
void fn_800523A0(void);
void fn_8005256C(void);
void fn_80052760(void);
void fn_80053254(void);
void fn_8005339C(void);

asm void fn_8004FF58(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    psq_l f1, 0x0(r4), 0, 0
    stw r0, 0x24(r1)
    addi r5, r1, 0x8
    lfs f2, 0x8(r4)
    stw r31, 0x1c(r1)
    mr r31, r4
    mr r4, r5
    stw r30, 0x18(r1)
    mr r30, r3
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x10(r1)
    bl fn_805F93C0
    lfs f6, 0x10(r1)
    lfs f0, 0xc(r31)
    lfs f3, 0x34(r30)
    fsubs f4, f6, f0
    fcmpo cr0, f4, f3
    ble lbl_fn_8004FF58_00000058
    li r3, 0x0
    b lbl_fn_8004FF58_0000018C
lbl_fn_8004FF58_00000058:
    fadds f4, f6, f0
    lfs f3, 0x38(r30)
    fcmpo cr0, f4, f3
    bge lbl_fn_8004FF58_00000070
    li r3, 0x0
    b lbl_fn_8004FF58_0000018C
lbl_fn_8004FF58_00000070:
    lwz r0, 0x30(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8004FF58_00000100
    lfs f4, 0x8(r1)
    lfs f3, 0x48(r30)
    lfs f5, lbl_80880934
    fadds f3, f4, f3
    fadds f3, f0, f3
    fcmpo cr0, f3, f5
    bge lbl_fn_8004FF58_000000A0
    li r3, 0x0
    b lbl_fn_8004FF58_0000018C
lbl_fn_8004FF58_000000A0:
    fneg f4, f4
    lfs f3, 0x58(r30)
    fadds f3, f4, f3
    fadds f3, f0, f3
    fcmpo cr0, f3, f5
    bge lbl_fn_8004FF58_000000C0
    li r3, 0x0
    b lbl_fn_8004FF58_0000018C
lbl_fn_8004FF58_000000C0:
    lfs f4, 0xc(r1)
    lfs f3, 0x68(r30)
    fadds f3, f4, f3
    fadds f3, f0, f3
    fcmpo cr0, f3, f5
    bge lbl_fn_8004FF58_000000E0
    li r3, 0x0
    b lbl_fn_8004FF58_0000018C
lbl_fn_8004FF58_000000E0:
    fneg f4, f4
    lfs f3, 0x78(r30)
    fadds f3, f4, f3
    fadds f0, f0, f3
    fcmpo cr0, f0, f5
    bge lbl_fn_8004FF58_00000188
    li r3, 0x0
    b lbl_fn_8004FF58_0000018C
lbl_fn_8004FF58_00000100:
    lfs f3, 0x44(r30)
    lfs f5, 0x8(r1)
    fmuls f4, f6, f3
    lfs f3, 0x3c(r30)
    fmadds f3, f5, f3, f4
    fcmpo cr0, f3, f0
    ble lbl_fn_8004FF58_00000124
    li r3, 0x0
    b lbl_fn_8004FF58_0000018C
lbl_fn_8004FF58_00000124:
    lfs f4, 0x54(r30)
    lfs f3, 0x4c(r30)
    fmuls f4, f6, f4
    fmadds f3, f5, f3, f4
    fcmpo cr0, f3, f0
    ble lbl_fn_8004FF58_00000144
    li r3, 0x0
    b lbl_fn_8004FF58_0000018C
lbl_fn_8004FF58_00000144:
    lfs f3, 0x64(r30)
    lfs f5, 0xc(r1)
    fmuls f4, f6, f3
    lfs f3, 0x60(r30)
    fmadds f3, f5, f3, f4
    fcmpo cr0, f3, f0
    ble lbl_fn_8004FF58_00000168
    li r3, 0x0
    b lbl_fn_8004FF58_0000018C
lbl_fn_8004FF58_00000168:
    lfs f4, 0x74(r30)
    lfs f3, 0x70(r30)
    fmuls f4, f6, f4
    fmadds f3, f5, f3, f4
    fcmpo cr0, f3, f0
    ble lbl_fn_8004FF58_00000188
    li r3, 0x0
    b lbl_fn_8004FF58_0000018C
lbl_fn_8004FF58_00000188:
    li r3, 0x1
lbl_fn_8004FF58_0000018C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800500FC(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x40
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    bl _savegpr_24
    lfs f1, 0x0(r4)
    mr r24, r4
    lfs f0, 0x88(r3)
    li r29, 0x2
    fcmpo cr0, f1, f0
    bgt lbl_fn_800500FC_00000228
    lfs f1, 0x7c(r3)
    lfs f0, 0xc(r4)
    fcmpo cr0, f1, f0
    bgt lbl_fn_800500FC_00000228
    lfs f1, 0x4(r4)
    lfs f0, 0x8c(r3)
    fcmpo cr0, f1, f0
    bgt lbl_fn_800500FC_00000228
    lfs f1, 0x80(r3)
    lfs f0, 0x10(r4)
    fcmpo cr0, f1, f0
    bgt lbl_fn_800500FC_00000228
    lfs f1, 0x8(r4)
    lfs f0, 0x90(r3)
    fcmpo cr0, f1, f0
    bgt lbl_fn_800500FC_00000228
    lfs f1, 0x84(r3)
    lfs f0, 0x14(r4)
    fcmpo cr0, f1, f0
    ble lbl_fn_800500FC_00000230
lbl_fn_800500FC_00000228:
    li r0, 0x0
    b lbl_fn_800500FC_00000234
lbl_fn_800500FC_00000230:
    li r0, 0x1
lbl_fn_800500FC_00000234:
    cmpwi r0, 0x0
    bne lbl_fn_800500FC_00000244
    li r3, 0x0
    b lbl_fn_800500FC_00000330
lbl_fn_800500FC_00000244:
    lfs f31, lbl_80880934
    mr r30, r3
    addi r31, r3, 0x94
    li r28, 0x0
lbl_fn_800500FC_00000254:
    li r27, 0x0
    li r26, 0x0
    li r25, 0x0
    b lbl_fn_800500FC_000002E4
lbl_fn_800500FC_00000264:
    rlwinm. r0, r25, 0, 29, 29
    beq lbl_fn_800500FC_00000274
    lfs f0, 0x8(r24)
    b lbl_fn_800500FC_00000278
lbl_fn_800500FC_00000274:
    lfs f0, 0x14(r24)
lbl_fn_800500FC_00000278:
    rlwinm. r0, r25, 0, 30, 30
    beq lbl_fn_800500FC_00000288
    lfs f1, 0x4(r24)
    b lbl_fn_800500FC_0000028C
lbl_fn_800500FC_00000288:
    lfs f1, 0x10(r24)
lbl_fn_800500FC_0000028C:
    clrlwi. r0, r25, 31
    beq lbl_fn_800500FC_0000029C
    lfs f2, 0x0(r24)
    b lbl_fn_800500FC_000002A0
lbl_fn_800500FC_0000029C:
    lfs f2, 0xc(r24)
lbl_fn_800500FC_000002A0:
    stfs f2, 0x8(r1)
    mr r3, r31
    addi r4, r1, 0x8
    stfs f1, 0xc(r1)
    stfs f0, 0x10(r1)
    bl fn_805F9990
    lfs f0, 0xa0(r30)
    fadds f0, f0, f1
    fcmpo cr0, f0, f31
    mfcr r0
    extrwi. r0, r0, 1, 1
    beq lbl_fn_800500FC_000002D4
    addi r26, r26, 0x1
lbl_fn_800500FC_000002D4:
    cmpwi r0, 0x0
    bne lbl_fn_800500FC_000002E0
    addi r27, r27, 0x1
lbl_fn_800500FC_000002E0:
    addi r25, r25, 0x1
lbl_fn_800500FC_000002E4:
    cmpwi r25, 0x8
    bge lbl_fn_800500FC_000002FC
    cmpwi r27, 0x0
    beq lbl_fn_800500FC_00000264
    cmpwi r26, 0x0
    beq lbl_fn_800500FC_00000264
lbl_fn_800500FC_000002FC:
    cmpwi r27, 0x0
    bne lbl_fn_800500FC_0000030C
    li r3, 0x0
    b lbl_fn_800500FC_00000330
lbl_fn_800500FC_0000030C:
    cmpwi r26, 0x0
    beq lbl_fn_800500FC_00000318
    li r29, 0x1
lbl_fn_800500FC_00000318:
    addi r28, r28, 0x1
    addi r30, r30, 0x10
    cmpwi r28, 0x6
    addi r31, r31, 0x10
    blt lbl_fn_800500FC_00000254
    mr r3, r29
lbl_fn_800500FC_00000330:
    addi r11, r1, 0x40
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    bl _restgpr_24
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_800502A8(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    lfs f1, 0x0(r4)
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    stw r28, 0x20(r1)
    mr r28, r4
    lfs f0, 0x88(r3)
    fcmpo cr0, f1, f0
    bgt lbl_fn_800502A8_000003D8
    lfs f1, 0x7c(r3)
    lfs f0, 0xc(r4)
    fcmpo cr0, f1, f0
    bgt lbl_fn_800502A8_000003D8
    lfs f1, 0x4(r4)
    lfs f0, 0x8c(r3)
    fcmpo cr0, f1, f0
    bgt lbl_fn_800502A8_000003D8
    lfs f1, 0x80(r3)
    lfs f0, 0x10(r4)
    fcmpo cr0, f1, f0
    bgt lbl_fn_800502A8_000003D8
    lfs f1, 0x8(r4)
    lfs f0, 0x90(r3)
    fcmpo cr0, f1, f0
    bgt lbl_fn_800502A8_000003D8
    lfs f1, 0x84(r3)
    lfs f0, 0x14(r4)
    fcmpo cr0, f1, f0
    ble lbl_fn_800502A8_000003E0
lbl_fn_800502A8_000003D8:
    li r0, 0x0
    b lbl_fn_800502A8_000003E4
lbl_fn_800502A8_000003E0:
    li r0, 0x1
lbl_fn_800502A8_000003E4:
    cmpwi r0, 0x0
    bne lbl_fn_800502A8_000003F4
    li r3, 0x0
    b lbl_fn_800502A8_000004A0
lbl_fn_800502A8_000003F4:
    lfs f31, lbl_80880934
    mr r31, r3
    addi r30, r3, 0x94
    li r29, 0x0
lbl_fn_800502A8_00000404:
    lfs f0, 0x94(r31)
    fcmpo cr0, f0, f31
    cror eq, gt, eq
    bne lbl_fn_800502A8_0000041C
    lfs f0, 0x0(r28)
    b lbl_fn_800502A8_00000420
lbl_fn_800502A8_0000041C:
    lfs f0, 0xc(r28)
lbl_fn_800502A8_00000420:
    stfs f0, 0x8(r1)
    lfs f0, 0x98(r31)
    fcmpo cr0, f0, f31
    cror eq, gt, eq
    bne lbl_fn_800502A8_0000043C
    lfs f0, 0x4(r28)
    b lbl_fn_800502A8_00000440
lbl_fn_800502A8_0000043C:
    lfs f0, 0x10(r28)
lbl_fn_800502A8_00000440:
    stfs f0, 0xc(r1)
    lfs f0, 0x9c(r31)
    fcmpo cr0, f0, f31
    cror eq, gt, eq
    bne lbl_fn_800502A8_0000045C
    lfs f0, 0x8(r28)
    b lbl_fn_800502A8_00000460
lbl_fn_800502A8_0000045C:
    lfs f0, 0x14(r28)
lbl_fn_800502A8_00000460:
    stfs f0, 0x10(r1)
    mr r3, r30
    addi r4, r1, 0x8
    bl fn_805F9990
    lfs f0, 0xa0(r31)
    fadds f0, f0, f1
    fcmpo cr0, f0, f31
    ble lbl_fn_800502A8_00000488
    li r3, 0x0
    b lbl_fn_800502A8_000004A0
lbl_fn_800502A8_00000488:
    addi r29, r29, 0x1
    addi r30, r30, 0x10
    cmpwi r29, 0x6
    addi r31, r31, 0x10
    blt lbl_fn_800502A8_00000404
    li r3, 0x1
lbl_fn_800502A8_000004A0:
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

asm void fn_80050420(void)
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
    bl _savegpr_17
    psq_l f1, 0x0(r4), 0, 0
    mr r26, r3
    lfs f2, 0x8(r4)
    mr r27, r4
    stfs f2, 0x8(r5)
    mr r28, r5
    psq_st f1, 0x0(r5), 0, 0
    psq_l f1, 0xc(r4), 0, 0
    lfs f2, 0x14(r4)
    stfs f2, 0x14(r5)
    psq_st f1, 0xc(r5), 0, 0
    lfs f3, 0x7c(r3)
    lfs f0, 0x0(r4)
    fcmpo cr0, f3, f0
    ble lbl_fn_80050420_0000053C
    lfs f0, 0xc(r4)
    fcmpo cr0, f3, f0
    ble lbl_fn_80050420_0000053C
    li r0, 0x0
    b lbl_fn_80050420_000005F4
lbl_fn_80050420_0000053C:
    lfs f3, 0x80(r3)
    lfs f0, 0x4(r4)
    fcmpo cr0, f3, f0
    ble lbl_fn_80050420_00000560
    lfs f0, 0x10(r4)
    fcmpo cr0, f3, f0
    ble lbl_fn_80050420_00000560
    li r0, 0x0
    b lbl_fn_80050420_000005F4
lbl_fn_80050420_00000560:
    lfs f3, 0x84(r3)
    lfs f0, 0x8(r4)
    fcmpo cr0, f3, f0
    ble lbl_fn_80050420_00000584
    lfs f0, 0x14(r4)
    fcmpo cr0, f3, f0
    ble lbl_fn_80050420_00000584
    li r0, 0x0
    b lbl_fn_80050420_000005F4
lbl_fn_80050420_00000584:
    lfs f3, 0x88(r3)
    lfs f0, 0x0(r4)
    fcmpo cr0, f3, f0
    bge lbl_fn_80050420_000005A8
    lfs f0, 0xc(r4)
    fcmpo cr0, f3, f0
    bge lbl_fn_80050420_000005A8
    li r0, 0x0
    b lbl_fn_80050420_000005F4
lbl_fn_80050420_000005A8:
    lfs f3, 0x8c(r3)
    lfs f0, 0x4(r4)
    fcmpo cr0, f3, f0
    bge lbl_fn_80050420_000005CC
    lfs f0, 0x10(r4)
    fcmpo cr0, f3, f0
    bge lbl_fn_80050420_000005CC
    li r0, 0x0
    b lbl_fn_80050420_000005F4
lbl_fn_80050420_000005CC:
    lfs f3, 0x90(r3)
    lfs f0, 0x8(r4)
    fcmpo cr0, f3, f0
    bge lbl_fn_80050420_000005F0
    lfs f0, 0x14(r4)
    fcmpo cr0, f3, f0
    bge lbl_fn_80050420_000005F0
    li r0, 0x0
    b lbl_fn_80050420_000005F4
lbl_fn_80050420_000005F0:
    li r0, 0x1
lbl_fn_80050420_000005F4:
    cmpwi r0, 0x0
    bne lbl_fn_80050420_00000604
    li r3, 0x0
    b lbl_fn_80050420_00000980
lbl_fn_80050420_00000604:
    lfs f31, lbl_80880934
    addi r22, r1, 0x90
    addi r24, r4, 0xc
    addi r21, r1, 0x24
    addi r20, r1, 0x18
    addi r31, r1, 0x9c
    li r30, 0x0
    li r29, 0x0
    li r25, 0x0
lbl_fn_80050420_00000628:
    add r3, r26, r25
    stw r27, 0x8(r1)
    addi r23, r3, 0x94
    addi r18, r1, 0x8
    stw r24, 0xc(r1)
    addi r17, r1, 0x10
    li r19, 0x0
lbl_fn_80050420_00000644:
    lwz r3, 0x0(r18)
    mr r4, r23
    bl fn_805F9990
    lfs f0, 0xc(r23)
    addi r19, r19, 0x1
    cmpwi r19, 0x2
    addi r18, r18, 0x4
    fadds f0, f0, f1
    stfs f0, 0x0(r17)
    addi r17, r17, 0x4
    blt lbl_fn_80050420_00000644
    lfs f0, 0x10(r1)
    fcmpo cr0, f0, f31
    mfcr r3
    lfs f0, 0x14(r1)
    extrwi r3, r3, 1, 1
    fcmpo cr0, f0, f31
    mfcr r0
    cmpwi r3, 0x0
    extrwi r0, r0, 1, 1
    beq lbl_fn_80050420_000006D0
    cmpwi r0, 0x0
    beq lbl_fn_80050420_000006D0
    lwz r4, 0x8(r1)
    li r0, 0x0
    lwz r3, 0xc(r1)
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    psq_st f1, 0x0(r22), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x98(r1)
    lfs f2, 0x8(r3)
    psq_st f1, 0xc(r22), 0, 0
    stfs f2, 0xa4(r1)
    b lbl_fn_80050420_00000848
lbl_fn_80050420_000006D0:
    cmpwi r3, 0x0
    beq lbl_fn_80050420_00000778
    lfs f3, 0x10(r1)
    li r0, 0x1
    lfs f0, 0x14(r1)
    lwz r3, 0xc(r1)
    fsubs f0, f3, f0
    lwz r4, 0x8(r1)
    lfs f7, 0x8(r3)
    lfs f6, 0x8(r4)
    fdivs f11, f3, f0
    lfs f5, 0x4(r3)
    lfs f4, 0x4(r4)
    lfs f3, 0x0(r3)
    lfs f0, 0x0(r4)
    fsubs f7, f7, f6
    fsubs f10, f5, f4
    fsubs f3, f3, f0
    stfs f7, 0x44(r1)
    fmuls f9, f7, f11
    fmuls f8, f10, f11
    stfs f3, 0x3c(r1)
    fmuls f7, f3, f11
    fadds f5, f6, f9
    stfs f10, 0x40(r1)
    fadds f3, f4, f8
    fadds f0, f0, f7
    stfs f7, 0x30(r1)
    fmr f2, f5
    stfs f0, 0x18(r1)
    stfs f3, 0x1c(r1)
    psq_l f1, 0x0(r20), 0, 0
    psq_st f1, 0x0(r22), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x98(r1)
    lfs f2, 0x8(r3)
    stfs f8, 0x34(r1)
    stfs f9, 0x38(r1)
    stfs f5, 0x20(r1)
    psq_st f1, 0xc(r22), 0, 0
    stfs f2, 0xa4(r1)
    b lbl_fn_80050420_00000848
lbl_fn_80050420_00000778:
    cmpwi r0, 0x0
    beq lbl_fn_80050420_0000081C
    lfs f3, 0x10(r1)
    li r0, 0x1
    lfs f0, 0x14(r1)
    lwz r4, 0x8(r1)
    fsubs f0, f3, f0
    lwz r3, 0xc(r1)
    lfs f2, 0x8(r4)
    psq_l f1, 0x0(r4), 0, 0
    fdivs f11, f3, f0
    lfs f0, 0x8(r3)
    lfs f6, 0x8(r4)
    lfs f5, 0x4(r3)
    lfs f4, 0x4(r4)
    lfs f3, 0x0(r3)
    fsubs f10, f0, f6
    lfs f0, 0x0(r4)
    fsubs f9, f5, f4
    stfs f2, 0x98(r1)
    fsubs f3, f3, f0
    fmuls f8, f10, f11
    fmuls f7, f9, f11
    stfs f3, 0x54(r1)
    fmuls f5, f3, f11
    fadds f2, f6, f8
    psq_st f1, 0x0(r22), 0, 0
    fadds f3, f4, f7
    fadds f0, f0, f5
    stfs f9, 0x58(r1)
    stfs f0, 0x24(r1)
    stfs f3, 0x28(r1)
    psq_l f1, 0x0(r21), 0, 0
    stfs f10, 0x5c(r1)
    stfs f5, 0x48(r1)
    stfs f7, 0x4c(r1)
    stfs f8, 0x50(r1)
    stfs f2, 0x2c(r1)
    psq_st f1, 0xc(r22), 0, 0
    stfs f2, 0xa4(r1)
    b lbl_fn_80050420_00000848
lbl_fn_80050420_0000081C:
    lwz r4, 0x8(r1)
    li r0, 0x1
    lwz r3, 0xc(r1)
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    psq_st f1, 0x0(r22), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x98(r1)
    lfs f2, 0x8(r3)
    psq_st f1, 0xc(r22), 0, 0
    stfs f2, 0xa4(r1)
lbl_fn_80050420_00000848:
    cmpwi r0, 0x0
    beq lbl_fn_80050420_0000096C
    lfs f3, 0x98(r1)
    addi r3, r1, 0x78
    lfs f0, 0x8(r27)
    li r30, 0x1
    lfs f5, 0x94(r1)
    fsubs f6, f3, f0
    lfs f4, 0x4(r27)
    lfs f0, 0x0(r27)
    lfs f3, 0x90(r1)
    fsubs f4, f5, f4
    stfs f6, 0x80(r1)
    fsubs f0, f3, f0
    stfs f4, 0x7c(r1)
    stfs f0, 0x78(r1)
    bl fn_805F9920
    lfs f3, 0x8(r28)
    fmr f30, f1
    lfs f0, 0x8(r27)
    addi r3, r1, 0x84
    lfs f5, 0x4(r28)
    fsubs f6, f3, f0
    lfs f4, 0x4(r27)
    lfs f3, 0x0(r28)
    lfs f0, 0x0(r27)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x88(r1)
    stfs f0, 0x84(r1)
    stfs f6, 0x8c(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f30
    bge lbl_fn_80050420_000008E0
    psq_l f1, 0x0(r22), 0, 0
    lfs f2, 0x98(r1)
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x8(r28)
lbl_fn_80050420_000008E0:
    lfs f3, 0xa4(r1)
    addi r3, r1, 0x60
    lfs f0, 0x14(r27)
    lfs f5, 0xa0(r1)
    fsubs f6, f3, f0
    lfs f4, 0x10(r27)
    lfs f0, 0xc(r27)
    lfs f3, 0x9c(r1)
    fsubs f4, f5, f4
    stfs f6, 0x68(r1)
    fsubs f0, f3, f0
    stfs f4, 0x64(r1)
    stfs f0, 0x60(r1)
    bl fn_805F9920
    lfs f3, 0x14(r28)
    fmr f30, f1
    lfs f0, 0x14(r27)
    addi r3, r1, 0x6c
    lfs f5, 0x10(r28)
    fsubs f6, f3, f0
    lfs f4, 0x10(r27)
    lfs f3, 0xc(r28)
    lfs f0, 0xc(r27)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x70(r1)
    stfs f0, 0x6c(r1)
    stfs f6, 0x74(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f30
    bge lbl_fn_80050420_0000096C
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0xa4(r1)
    psq_st f1, 0xc(r28), 0, 0
    stfs f2, 0x14(r28)
lbl_fn_80050420_0000096C:
    addi r29, r29, 0x1
    addi r25, r25, 0x10
    cmpwi r29, 0x6
    blt lbl_fn_80050420_00000628
    mr r3, r30
lbl_fn_80050420_00000980:
    addi r11, r1, 0xf0
    psq_l f31, 0x108(r1), 0, 0
    lfd f31, 0x100(r1)
    psq_l f30, 0xf8(r1), 0, 0
    lfd f30, 0xf0(r1)
    bl _restgpr_17
    lwz r0, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_80050900(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    lfs f3, 0x8(r3)
    stw r0, 0x44(r1)
    lfs f5, 0x4(r3)
    stw r31, 0x3c(r1)
    mr r31, r5
    stw r30, 0x38(r1)
    mr r30, r4
    stw r29, 0x34(r1)
    mr r29, r3
    lfs f0, 0x8(r4)
    lfs f4, 0x4(r4)
    fsubs f6, f3, f0
    lfs f3, 0x0(r3)
    lfs f0, 0x0(r4)
    fsubs f4, f5, f4
    addi r3, r4, 0xc
    addi r4, r1, 0x20
    fsubs f0, f3, f0
    stfs f4, 0x24(r1)
    stfs f0, 0x20(r1)
    stfs f6, 0x28(r1)
    bl fn_805F9990
    lfs f4, 0x14(r30)
    addi r3, r1, 0x20
    lfs f3, 0x10(r30)
    fmuls f5, f4, f1
    lfs f0, 0xc(r30)
    fmuls f6, f3, f1
    lfs f3, 0x24(r1)
    fmuls f7, f0, f1
    lfs f4, 0x20(r1)
    lfs f0, 0x28(r1)
    fsubs f3, f3, f6
    fsubs f4, f4, f7
    stfs f7, 0x14(r1)
    fsubs f0, f0, f5
    stfs f6, 0x18(r1)
    stfs f5, 0x1c(r1)
    stfs f4, 0x20(r1)
    stfs f3, 0x24(r1)
    stfs f0, 0x28(r1)
    bl fn_805F9920
    cmpwi r31, 0x0
    fmr f6, f1
    beq lbl_fn_80050900_00000AA4
    lfs f3, 0x8(r29)
    addi r3, r1, 0x8
    lfs f0, 0x28(r1)
    lfs f5, 0x4(r29)
    fsubs f2, f3, f0
    lfs f4, 0x24(r1)
    lfs f0, 0x20(r1)
    lfs f3, 0x0(r29)
    fsubs f4, f5, f4
    stfs f2, 0x10(r1)
    fsubs f0, f3, f0
    stfs f4, 0xc(r1)
    stfs f0, 0x8(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x8(r31)
lbl_fn_80050900_00000AA4:
    lwz r31, 0x3c(r1)
    fmr f1, f6
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80050A1C(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    lfs f4, 0x14(r4)
    stw r0, 0x74(r1)
    lfs f3, 0x8(r4)
    stw r31, 0x6c(r1)
    mr r31, r5
    lfs f0, 0x8(r3)
    fsubs f7, f4, f3
    stw r30, 0x68(r1)
    mr r30, r4
    fsubs f9, f0, f3
    lfs f5, 0x10(r4)
    stw r29, 0x64(r1)
    lfs f6, 0x4(r4)
    mr r29, r3
    lfs f3, 0x4(r3)
    fsubs f8, f5, f6
    lfs f0, 0x0(r3)
    fsubs f3, f3, f6
    lfs f4, 0x0(r4)
    lfs f5, 0xc(r4)
    addi r3, r1, 0x50
    fsubs f6, f0, f4
    stfs f8, 0x54(r1)
    fsubs f0, f5, f4
    addi r4, r1, 0x44
    stfs f7, 0x58(r1)
    stfs f0, 0x50(r1)
    stfs f6, 0x44(r1)
    stfs f3, 0x48(r1)
    stfs f9, 0x4c(r1)
    bl fn_805F9990
    lfs f0, lbl_80880940
    fcmpo cr0, f1, f0
    bge lbl_fn_80050A1C_00000B80
    addi r3, r1, 0x44
    bl fn_805F9920
    cmpwi r31, 0x0
    fmr f0, f1
    beq lbl_fn_80050A1C_00000B78
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x8(r30)
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x8(r31)
lbl_fn_80050A1C_00000B78:
    fmr f1, f0
    b lbl_fn_80050A1C_00000CC4
lbl_fn_80050A1C_00000B80:
    lfs f3, 0x8(r30)
    addi r3, r1, 0x38
    lfs f5, 0x14(r30)
    mr r4, r3
    lfs f0, 0x8(r29)
    fsubs f6, f3, f5
    lfs f4, 0x4(r30)
    fsubs f7, f0, f5
    lfs f3, 0x10(r30)
    lfs f0, 0x4(r29)
    fsubs f5, f4, f3
    fsubs f8, f0, f3
    lfs f4, 0x0(r30)
    lfs f3, 0xc(r30)
    lfs f0, 0x0(r29)
    fsubs f4, f4, f3
    stfs f5, 0x3c(r1)
    fsubs f0, f0, f3
    stfs f4, 0x38(r1)
    stfs f6, 0x40(r1)
    stfs f0, 0x2c(r1)
    stfs f8, 0x30(r1)
    stfs f7, 0x34(r1)
    bl fn_805F98D0
    addi r3, r1, 0x38
    addi r4, r1, 0x2c
    bl fn_805F9990
    lfs f0, lbl_80880940
    fcmpo cr0, f1, f0
    bge lbl_fn_80050A1C_00000C24
    addi r3, r1, 0x2c
    bl fn_805F9920
    cmpwi r31, 0x0
    fmr f0, f1
    beq lbl_fn_80050A1C_00000C1C
    psq_l f1, 0xc(r30), 0, 0
    lfs f2, 0x14(r30)
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x8(r31)
lbl_fn_80050A1C_00000C1C:
    fmr f1, f0
    b lbl_fn_80050A1C_00000CC4
lbl_fn_80050A1C_00000C24:
    lfs f4, 0x40(r1)
    addi r3, r1, 0x20
    lfs f3, 0x3c(r1)
    fmuls f5, f4, f1
    lfs f0, 0x38(r1)
    fmuls f6, f3, f1
    lfs f4, 0x34(r1)
    fmuls f7, f0, f1
    lfs f3, 0x30(r1)
    lfs f0, 0x2c(r1)
    fsubs f4, f4, f5
    fsubs f3, f3, f6
    stfs f7, 0x14(r1)
    fsubs f0, f0, f7
    stfs f6, 0x18(r1)
    stfs f5, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f3, 0x24(r1)
    stfs f4, 0x28(r1)
    bl fn_805F9920
    cmpwi r31, 0x0
    fmr f6, f1
    beq lbl_fn_80050A1C_00000CC0
    lfs f3, 0x8(r29)
    addi r3, r1, 0x8
    lfs f0, 0x28(r1)
    lfs f5, 0x4(r29)
    fsubs f2, f3, f0
    lfs f4, 0x24(r1)
    lfs f0, 0x20(r1)
    lfs f3, 0x0(r29)
    fsubs f4, f5, f4
    stfs f2, 0x10(r1)
    fsubs f0, f3, f0
    stfs f4, 0xc(r1)
    stfs f0, 0x8(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x8(r31)
lbl_fn_80050A1C_00000CC0:
    fmr f1, f6
lbl_fn_80050A1C_00000CC4:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    lwz r29, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_80050C38(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stfd f31, 0x70(r1)
    psq_st f31, 0x78(r1), 0, 0
    stfd f30, 0x60(r1)
    psq_st f30, 0x68(r1), 0, 0
    stw r31, 0x5c(r1)
    mr r31, r5
    stw r30, 0x58(r1)
    mr r30, r4
    stw r29, 0x54(r1)
    mr r29, r3
    lfs f3, 0x8(r4)
    lfs f0, 0x8(r3)
    lfs f5, 0x4(r4)
    fsubs f6, f3, f0
    lfs f4, 0x4(r3)
    lfs f3, 0x0(r4)
    addi r4, r4, 0xc
    lfs f0, 0x0(r3)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x48(r1)
    addi r3, r3, 0xc
    stfs f0, 0x44(r1)
    stfs f6, 0x4c(r1)
    bl fn_805F9990
    fmr f30, f1
    addi r3, r1, 0x44
    addi r4, r29, 0xc
    bl fn_805F9990
    fmr f31, f1
    addi r3, r1, 0x44
    addi r4, r30, 0xc
    bl fn_805F9990
    lfs f5, lbl_80880944
    fcmpu cr0, f5, f30
    beq lbl_fn_80050C38_00000D88
    lfs f0, lbl_80880948
    fcmpu cr0, f0, f30
    bne lbl_fn_80050C38_00000D94
lbl_fn_80050C38_00000D88:
    lfs f5, lbl_80880940
    fmr f12, f5
    b lbl_fn_80050C38_00000DAC
lbl_fn_80050C38_00000D94:
    fnmsubs f4, f30, f30, f5
    fnmsubs f3, f30, f1, f31
    fmsubs f0, f30, f31, f1
    fdivs f4, f5, f4
    fmuls f5, f4, f3
    fmuls f12, f4, f0
lbl_fn_80050C38_00000DAC:
    lfs f4, 0x14(r29)
    addi r3, r1, 0x8
    lfs f3, 0x10(r29)
    fmuls f7, f4, f5
    lfs f0, 0xc(r29)
    fmuls f8, f3, f5
    lfs f4, 0x14(r30)
    fmuls f9, f0, f5
    lfs f3, 0x10(r30)
    fmuls f10, f4, f12
    lfs f0, 0xc(r30)
    fmuls f11, f3, f12
    lfs f6, 0x8(r29)
    fmuls f12, f0, f12
    lfs f0, 0x8(r30)
    fadds f13, f0, f10
    lfs f5, 0x4(r29)
    lfs f3, 0x4(r30)
    fadds f6, f6, f7
    lfs f0, 0x0(r30)
    fadds f5, f5, f8
    fadds f30, f3, f11
    lfs f4, 0x0(r29)
    fadds f0, f0, f12
    stfs f8, 0x24(r1)
    fadds f3, f4, f9
    stfs f9, 0x20(r1)
    fsubs f4, f6, f13
    fsubs f8, f5, f30
    stfs f7, 0x28(r1)
    fsubs f9, f3, f0
    stfs f3, 0x38(r1)
    stfs f5, 0x3c(r1)
    stfs f6, 0x40(r1)
    stfs f12, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f10, 0x1c(r1)
    stfs f0, 0x2c(r1)
    stfs f30, 0x30(r1)
    stfs f13, 0x34(r1)
    stfs f9, 0x8(r1)
    stfs f8, 0xc(r1)
    stfs f4, 0x10(r1)
    bl fn_805F9920
    cmpwi r31, 0x0
    fmr f0, f1
    beq lbl_fn_80050C38_00000E90
    addi r3, r1, 0x38
    lfs f2, 0x40(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x2c
    psq_st f1, 0x0(r31), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x8(r31)
    lfs f2, 0x34(r1)
    psq_st f1, 0xc(r31), 0, 0
    stfs f2, 0x14(r31)
lbl_fn_80050C38_00000E90:
    psq_l f31, 0x78(r1), 0, 0
    fmr f1, f0
    lfd f31, 0x70(r1)
    psq_l f30, 0x68(r1), 0, 0
    lfd f30, 0x60(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_80050E18(void)
{
    nofralloc
    stwu r1, -0x1a0(r1)
    mflr r0
    lfs f5, 0x14(r3)
    stw r0, 0x1a4(r1)
    lfs f4, 0x8(r3)
    stfd f31, 0x190(r1)
    fsubs f6, f5, f4
    lfs f3, 0x10(r3)
    psq_st f31, 0x198(r1), 0, 0
    lfs f0, 0x4(r3)
    stfd f30, 0x180(r1)
    fsubs f7, f3, f0
    lfs f5, 0xc(r3)
    psq_st f30, 0x188(r1), 0, 0
    lfs f4, 0x0(r3)
    stfd f29, 0x170(r1)
    fsubs f8, f5, f4
    lfs f3, 0x14(r4)
    psq_st f29, 0x178(r1), 0, 0
    lfs f0, 0x8(r4)
    stfd f28, 0x160(r1)
    fsubs f9, f3, f0
    lfs f5, 0x10(r4)
    psq_st f28, 0x168(r1), 0, 0
    lfs f4, 0x4(r4)
    stfd f27, 0x150(r1)
    lfs f3, 0xc(r4)
    fsubs f4, f5, f4
    psq_st f27, 0x158(r1), 0, 0
    lfs f0, 0x0(r4)
    stw r31, 0x14c(r1)
    mr r31, r5
    fsubs f0, f3, f0
    stw r30, 0x148(r1)
    mr r30, r6
    stw r29, 0x144(r1)
    mr r29, r4
    stw r28, 0x140(r1)
    mr r28, r3
    addi r3, r1, 0x134
    stfs f8, 0x134(r1)
    stfs f7, 0x138(r1)
    stfs f6, 0x13c(r1)
    stfs f0, 0x128(r1)
    stfs f4, 0x12c(r1)
    stfs f9, 0x130(r1)
    bl fn_805F9940
    fmr f31, f1
    addi r3, r1, 0x128
    bl fn_805F9940
    fmr f30, f1
    addi r3, r1, 0x134
    mr r4, r3
    fmr f29, f30
    bl fn_805F98D0
    addi r3, r1, 0x128
    mr r4, r3
    bl fn_805F98D0
    lfs f3, 0x8(r29)
    addi r3, r1, 0x134
    lfs f0, 0x8(r28)
    addi r4, r1, 0x128
    lfs f5, 0x4(r29)
    fsubs f6, f3, f0
    lfs f4, 0x4(r28)
    lfs f3, 0x0(r29)
    lfs f0, 0x0(r28)
    fsubs f4, f5, f4
    stfs f6, 0x124(r1)
    fsubs f0, f3, f0
    stfs f4, 0x120(r1)
    stfs f0, 0x11c(r1)
    bl fn_805F9990
    fmr f27, f1
    addi r3, r1, 0x11c
    addi r4, r1, 0x134
    bl fn_805F9990
    fmr f28, f1
    addi r3, r1, 0x11c
    addi r4, r1, 0x128
    bl fn_805F9990
    lfs f5, lbl_80880944
    li r4, 0x0
    fcmpu cr0, f5, f27
    bne lbl_fn_80050E18_00001024
    lfs f0, lbl_80880940
    li r4, 0x3
    fmr f29, f0
    b lbl_fn_80050E18_00001054
lbl_fn_80050E18_00001024:
    lfs f0, lbl_80880948
    fcmpu cr0, f0, f27
    bne lbl_fn_80050E18_0000103C
    lfs f0, lbl_80880940
    li r4, 0x3
    b lbl_fn_80050E18_00001054
lbl_fn_80050E18_0000103C:
    fnmsubs f4, f27, f27, f5
    fnmsubs f0, f27, f1, f28
    fmsubs f3, f27, f28, f1
    fdivs f4, f5, f4
    fmuls f0, f4, f0
    fmuls f29, f4, f3
lbl_fn_80050E18_00001054:
    lfs f5, 0x13c(r1)
    cmpwi r30, 0x0
    lfs f4, 0x138(r1)
    fmuls f9, f5, f0
    lfs f3, 0x134(r1)
    fmuls f10, f4, f0
    lfs f5, 0x130(r1)
    fmuls f11, f3, f0
    lfs f4, 0x12c(r1)
    fmuls f12, f5, f29
    lfs f3, 0x128(r1)
    fmuls f13, f4, f29
    lfs f8, 0x8(r28)
    fmuls f27, f3, f29
    lfs f7, 0x4(r28)
    lfs f6, 0x0(r28)
    fadds f2, f8, f9
    lfs f5, 0x8(r29)
    fadds f7, f7, f10
    lfs f4, 0x4(r29)
    fadds f6, f6, f11
    lfs f3, 0x0(r29)
    fadds f5, f5, f12
    stfs f11, 0xb0(r1)
    fadds f4, f4, f13
    fadds f3, f3, f27
    stfs f10, 0xb4(r1)
    stfs f9, 0xb8(r1)
    stfs f6, 0x110(r1)
    stfs f7, 0x114(r1)
    stfs f2, 0x118(r1)
    stfs f27, 0xa4(r1)
    stfs f13, 0xa8(r1)
    stfs f12, 0xac(r1)
    stfs f3, 0x104(r1)
    stfs f4, 0x108(r1)
    stfs f5, 0x10c(r1)
    beq lbl_fn_80050E18_00001110
    addi r3, r1, 0x110
    stfs f2, 0x8(r30)
    psq_l f1, 0x0(r3), 0, 0
    fmr f2, f5
    addi r3, r1, 0x104
    psq_st f1, 0x0(r30), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0xc(r30), 0, 0
    stfs f2, 0x14(r30)
lbl_fn_80050E18_00001110:
    lfs f3, lbl_80880940
    fcmpo cr0, f0, f3
    bge lbl_fn_80050E18_00001138
    lfs f2, 0x8(r28)
    addi r3, r1, 0x110
    psq_l f1, 0x0(r28), 0, 0
    addi r4, r4, 0x1
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x118(r1)
    b lbl_fn_80050E18_00001158
lbl_fn_80050E18_00001138:
    fcmpo cr0, f0, f31
    ble lbl_fn_80050E18_00001158
    lfs f2, 0x14(r28)
    addi r3, r1, 0x110
    psq_l f1, 0xc(r28), 0, 0
    addi r4, r4, 0x1
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x118(r1)
lbl_fn_80050E18_00001158:
    lfs f0, lbl_80880940
    fcmpo cr0, f29, f0
    bge lbl_fn_80050E18_00001180
    lfs f2, 0x8(r29)
    addi r3, r1, 0x104
    psq_l f1, 0x0(r29), 0, 0
    addi r4, r4, 0x2
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x10c(r1)
    b lbl_fn_80050E18_000011A0
lbl_fn_80050E18_00001180:
    fcmpo cr0, f29, f30
    ble lbl_fn_80050E18_000011A0
    lfs f2, 0x14(r29)
    addi r3, r1, 0x104
    psq_l f1, 0xc(r29), 0, 0
    addi r4, r4, 0x2
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x10c(r1)
lbl_fn_80050E18_000011A0:
    cmpwi r4, 0x0
    bne lbl_fn_80050E18_000011F8
    lfs f3, 0x118(r1)
    addi r4, r1, 0x98
    lfs f0, 0x10c(r1)
    addi r3, r1, 0xf8
    lfs f5, 0x114(r1)
    fsubs f2, f3, f0
    lfs f4, 0x108(r1)
    lfs f3, 0x110(r1)
    lfs f0, 0x104(r1)
    fsubs f4, f5, f4
    stfs f2, 0xa0(r1)
    fsubs f0, f3, f0
    stfs f4, 0x9c(r1)
    stfs f0, 0x98(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x100(r1)
    bl fn_805F9920
    fmr f29, f1
    b lbl_fn_80050E18_000016B0
lbl_fn_80050E18_000011F8:
    cmpwi r4, 0x1
    bne lbl_fn_80050E18_000012E0
    lfs f3, 0x118(r1)
    addi r30, r1, 0xf8
    lfs f0, 0x8(r29)
    addi r5, r1, 0x8c
    lfs f5, 0x114(r1)
    mr r4, r30
    fsubs f2, f3, f0
    lfs f4, 0x4(r29)
    lfs f3, 0x110(r1)
    addi r3, r1, 0x128
    lfs f0, 0x0(r29)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x90(r1)
    stfs f0, 0x8c(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0x94(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x100(r1)
    bl fn_805F9990
    lfs f3, 0x12c(r1)
    addi r5, r1, 0x74
    lfs f0, 0x128(r1)
    addi r4, r1, 0x104
    fmuls f9, f3, f1
    lfs f4, 0x130(r1)
    fmuls f10, f0, f1
    lfs f3, 0xfc(r1)
    fmuls f8, f4, f1
    lfs f4, 0xf8(r1)
    fsubs f6, f3, f9
    lfs f0, 0x100(r1)
    fsubs f7, f4, f10
    lfs f3, 0x114(r1)
    fsubs f5, f0, f8
    lfs f0, 0x110(r1)
    fsubs f3, f3, f6
    lfs f4, 0x118(r1)
    fsubs f0, f0, f7
    stfs f10, 0x80(r1)
    fsubs f2, f4, f5
    mr r3, r30
    stfs f3, 0x78(r1)
    stfs f0, 0x74(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f9, 0x84(r1)
    stfs f8, 0x88(r1)
    stfs f7, 0xf8(r1)
    stfs f6, 0xfc(r1)
    stfs f5, 0x100(r1)
    stfs f2, 0x7c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x10c(r1)
    bl fn_805F9920
    fmr f29, f1
    b lbl_fn_80050E18_000016B0
lbl_fn_80050E18_000012E0:
    cmpwi r4, 0x2
    bne lbl_fn_80050E18_000013C8
    lfs f3, 0x10c(r1)
    addi r30, r1, 0xf8
    lfs f0, 0x8(r28)
    addi r5, r1, 0x68
    lfs f5, 0x108(r1)
    mr r4, r30
    fsubs f2, f3, f0
    lfs f4, 0x4(r28)
    lfs f3, 0x104(r1)
    addi r3, r1, 0x134
    lfs f0, 0x0(r28)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x6c(r1)
    stfs f0, 0x68(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0x70(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x100(r1)
    bl fn_805F9990
    lfs f3, 0x138(r1)
    addi r5, r1, 0x50
    lfs f0, 0x134(r1)
    addi r4, r1, 0x110
    fmuls f9, f3, f1
    lfs f4, 0x13c(r1)
    fmuls f10, f0, f1
    lfs f3, 0xfc(r1)
    fmuls f8, f4, f1
    lfs f4, 0xf8(r1)
    fsubs f6, f3, f9
    lfs f0, 0x100(r1)
    fsubs f7, f4, f10
    lfs f3, 0x108(r1)
    fsubs f5, f0, f8
    lfs f0, 0x104(r1)
    fsubs f3, f3, f6
    lfs f4, 0x10c(r1)
    fsubs f0, f0, f7
    stfs f10, 0x5c(r1)
    fsubs f2, f4, f5
    mr r3, r30
    stfs f3, 0x54(r1)
    stfs f0, 0x50(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f9, 0x60(r1)
    stfs f8, 0x64(r1)
    stfs f7, 0xf8(r1)
    stfs f6, 0xfc(r1)
    stfs f5, 0x100(r1)
    stfs f2, 0x58(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x118(r1)
    bl fn_805F9920
    fmr f29, f1
    b lbl_fn_80050E18_000016B0
lbl_fn_80050E18_000013C8:
    lfs f3, 0x118(r1)
    addi r3, r1, 0xec
    lfs f0, 0x10c(r1)
    lfs f5, 0x114(r1)
    fsubs f6, f3, f0
    lfs f4, 0x108(r1)
    lfs f3, 0x110(r1)
    lfs f0, 0x104(r1)
    fsubs f4, f5, f4
    stfs f6, 0xf4(r1)
    fsubs f0, f3, f0
    stfs f4, 0xf0(r1)
    stfs f0, 0xec(r1)
    bl fn_805F9920
    lfs f3, 0x118(r1)
    fmr f29, f1
    lfs f0, 0x8(r29)
    addi r3, r1, 0x128
    lfs f5, 0x114(r1)
    addi r4, r1, 0xe0
    fsubs f6, f3, f0
    lfs f4, 0x4(r29)
    lfs f3, 0x110(r1)
    lfs f0, 0x0(r29)
    fsubs f4, f5, f4
    stfs f6, 0xe8(r1)
    fsubs f0, f3, f0
    stfs f4, 0xe4(r1)
    stfs f0, 0xe0(r1)
    bl fn_805F9990
    lfs f4, 0x130(r1)
    addi r3, r1, 0xe0
    lfs f3, 0x12c(r1)
    fmuls f5, f4, f1
    lfs f0, 0x128(r1)
    fmuls f6, f3, f1
    lfs f3, 0xe4(r1)
    fmuls f7, f0, f1
    lfs f4, 0xe0(r1)
    lfs f0, 0xe8(r1)
    fsubs f3, f3, f6
    fsubs f4, f4, f7
    stfs f7, 0x44(r1)
    fsubs f0, f0, f5
    stfs f6, 0x48(r1)
    stfs f5, 0x4c(r1)
    stfs f4, 0xe0(r1)
    stfs f3, 0xe4(r1)
    stfs f0, 0xe8(r1)
    bl fn_805F9920
    lfs f5, 0x118(r1)
    fmr f30, f1
    lfs f4, 0xe8(r1)
    addi r3, r1, 0x38
    lfs f3, 0x114(r1)
    addi r4, r1, 0x2c
    fsubs f7, f5, f4
    lfs f0, 0xe4(r1)
    lfs f5, 0x14(r29)
    fsubs f8, f3, f0
    lfs f4, 0x10(r29)
    fsubs f10, f7, f5
    lfs f0, 0x8(r29)
    lfs f3, 0x4(r29)
    fsubs f11, f8, f4
    fsubs f9, f7, f0
    lfs f6, 0x110(r1)
    lfs f5, 0xe0(r1)
    fsubs f3, f8, f3
    lfs f4, 0xc(r29)
    fsubs f5, f6, f5
    lfs f0, 0x0(r29)
    stfs f8, 0xd8(r1)
    fsubs f4, f5, f4
    fsubs f0, f5, f0
    stfs f5, 0xd4(r1)
    stfs f7, 0xdc(r1)
    stfs f4, 0x2c(r1)
    stfs f11, 0x30(r1)
    stfs f10, 0x34(r1)
    stfs f0, 0x38(r1)
    stfs f3, 0x3c(r1)
    stfs f9, 0x40(r1)
    bl fn_805F9990
    lfs f0, lbl_80880940
    fcmpo cr0, f1, f0
    ble lbl_fn_80050E18_00001528
    lfs f30, lbl_8088094C
lbl_fn_80050E18_00001528:
    lfs f3, 0x10c(r1)
    addi r3, r1, 0x134
    lfs f0, 0x8(r28)
    addi r4, r1, 0xc8
    lfs f5, 0x108(r1)
    fsubs f6, f3, f0
    lfs f4, 0x4(r28)
    lfs f3, 0x104(r1)
    lfs f0, 0x0(r28)
    fsubs f4, f5, f4
    stfs f6, 0xd0(r1)
    fsubs f0, f3, f0
    stfs f4, 0xcc(r1)
    stfs f0, 0xc8(r1)
    bl fn_805F9990
    lfs f4, 0x13c(r1)
    addi r3, r1, 0xc8
    lfs f3, 0x138(r1)
    fmuls f5, f4, f1
    lfs f0, 0x134(r1)
    fmuls f6, f3, f1
    lfs f3, 0xcc(r1)
    fmuls f7, f0, f1
    lfs f4, 0xc8(r1)
    lfs f0, 0xd0(r1)
    fsubs f3, f3, f6
    fsubs f4, f4, f7
    stfs f7, 0x20(r1)
    fsubs f0, f0, f5
    stfs f6, 0x24(r1)
    stfs f5, 0x28(r1)
    stfs f4, 0xc8(r1)
    stfs f3, 0xcc(r1)
    stfs f0, 0xd0(r1)
    bl fn_805F9920
    lfs f5, 0x10c(r1)
    fmr f27, f1
    lfs f4, 0xd0(r1)
    addi r3, r1, 0x14
    lfs f3, 0x108(r1)
    addi r4, r1, 0x8
    fsubs f7, f5, f4
    lfs f0, 0xcc(r1)
    lfs f5, 0x14(r28)
    fsubs f8, f3, f0
    lfs f4, 0x10(r28)
    fsubs f10, f7, f5
    lfs f0, 0x8(r28)
    lfs f3, 0x4(r28)
    fsubs f11, f8, f4
    fsubs f9, f7, f0
    lfs f6, 0x104(r1)
    lfs f5, 0xc8(r1)
    fsubs f3, f8, f3
    lfs f4, 0xc(r28)
    fsubs f5, f6, f5
    lfs f0, 0x0(r28)
    stfs f8, 0xc0(r1)
    fsubs f4, f5, f4
    fsubs f0, f5, f0
    stfs f5, 0xbc(r1)
    stfs f7, 0xc4(r1)
    stfs f4, 0x8(r1)
    stfs f11, 0xc(r1)
    stfs f10, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f3, 0x18(r1)
    stfs f9, 0x1c(r1)
    bl fn_805F9990
    lfs f0, lbl_80880940
    fcmpo cr0, f1, f0
    ble lbl_fn_80050E18_0000164C
    lfs f27, lbl_8088094C
lbl_fn_80050E18_0000164C:
    fcmpo cr0, f29, f30
    cror eq, lt, eq
    bne lbl_fn_80050E18_00001668
    fcmpo cr0, f29, f27
    cror eq, lt, eq
    bne lbl_fn_80050E18_00001668
    b lbl_fn_80050E18_000016B0
lbl_fn_80050E18_00001668:
    fcmpo cr0, f30, f27
    cror eq, lt, eq
    bne lbl_fn_80050E18_00001694
    addi r4, r1, 0xd4
    lfs f2, 0xdc(r1)
    fmr f29, f30
    addi r3, r1, 0x104
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x10c(r1)
    b lbl_fn_80050E18_000016B0
lbl_fn_80050E18_00001694:
    addi r4, r1, 0xbc
    lfs f2, 0xc4(r1)
    fmr f29, f27
    addi r3, r1, 0x110
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x118(r1)
lbl_fn_80050E18_000016B0:
    cmpwi r31, 0x0
    beq lbl_fn_80050E18_000016E0
    addi r3, r1, 0x110
    lfs f2, 0x118(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x104
    psq_st f1, 0x0(r31), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x8(r31)
    lfs f2, 0x10c(r1)
    psq_st f1, 0xc(r31), 0, 0
    stfs f2, 0x14(r31)
lbl_fn_80050E18_000016E0:
    psq_l f31, 0x198(r1), 0, 0
    fmr f1, f29
    lfd f31, 0x190(r1)
    psq_l f30, 0x188(r1), 0, 0
    lfd f30, 0x180(r1)
    psq_l f29, 0x178(r1), 0, 0
    lfd f29, 0x170(r1)
    psq_l f28, 0x168(r1), 0, 0
    lfd f28, 0x160(r1)
    psq_l f27, 0x158(r1), 0, 0
    lfd f27, 0x150(r1)
    lwz r31, 0x14c(r1)
    lwz r30, 0x148(r1)
    lwz r29, 0x144(r1)
    lwz r28, 0x140(r1)
    lwz r0, 0x1a4(r1)
    mtlr r0
    addi r1, r1, 0x1a0
    blr
}

asm void fn_80051684(void)
{
    nofralloc
    stwu r1, -0x170(r1)
    mflr r0
    stw r0, 0x174(r1)
    addi r11, r1, 0x100
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
    stfd f26, 0x110(r1)
    psq_st f26, 0x118(r1), 0, 0
    stfd f25, 0x100(r1)
    psq_st f25, 0x108(r1), 0, 0
    bl _savegpr_26
    fmr f31, f1
    lfs f2, 0x14(r5)
    stfs f2, 0xdc(r1)
    addi r8, r1, 0xd4
    psq_l f1, 0xc(r5), 0, 0
    addi r31, r1, 0xc8
    psq_st f1, 0x0(r8), 0, 0
    mr r26, r3
    psq_l f1, 0xc(r7), 0, 0
    mr r27, r4
    lfs f2, 0x14(r7)
    mr r28, r5
    psq_st f1, 0x0(r31), 0, 0
    mr r29, r6
    mr r30, r7
    mr r3, r8
    stfs f2, 0xd0(r1)
    mr r4, r31
    bl fn_805F9990
    lfs f0, lbl_80880940
    fmr f5, f1
    fcmpo cr0, f1, f0
    bge lbl_fn_80051684_00001810
    lfs f0, 0xd0(r1)
    addi r3, r1, 0x8
    lfs f3, 0xcc(r1)
    fneg f5, f1
    fneg f4, f0
    lfs f0, 0xc8(r1)
    fneg f3, f3
    fneg f0, f0
    stfs f4, 0x10(r1)
    frsp f2, f4
    stfs f0, 0x8(r1)
    stfs f3, 0xc(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0xd0(r1)
lbl_fn_80051684_00001810:
    lfs f0, lbl_80880940
    fcmpo cr0, f5, f0
    ble lbl_fn_80051684_00001838
    lfs f3, lbl_80880944
    lfs f0, lbl_80880954
    fsubs f3, f5, f3
    fabs f3, f3
    frsp f3, f3
    fcmpo cr0, f3, f0
    blt lbl_fn_80051684_00001860
lbl_fn_80051684_00001838:
    lfs f0, lbl_80880940
    fcmpo cr0, f5, f0
    bge lbl_fn_80051684_00001868
    lfs f3, lbl_80880944
    lfs f0, lbl_80880954
    fadds f3, f3, f5
    fabs f3, f3
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80051684_00001868
lbl_fn_80051684_00001860:
    li r3, -0x1
    b lbl_fn_80051684_00001AE0
lbl_fn_80051684_00001868:
    lfs f2, 0x8(r28)
    addi r3, r1, 0xbc
    psq_l f1, 0x0(r28), 0, 0
    addi r7, r1, 0xb0
    psq_st f1, 0x0(r3), 0, 0
    mr r3, r27
    psq_l f1, 0x0(r30), 0, 0
    mr r4, r29
    stfs f2, 0xc4(r1)
    mr r5, r26
    lfs f2, 0x8(r30)
    li r6, 0x0
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0xb8(r1)
    bl fn_80050E18
    fmuls f0, f31, f31
    fcmpo cr0, f1, f0
    ble lbl_fn_80051684_000018B8
    li r3, -0x1
    b lbl_fn_80051684_00001AE0
lbl_fn_80051684_000018B8:
    fsubs f1, f0, f1
    bl fn_8068B100
    frsp f7, f1
    lfs f0, 0x14(r28)
    lfs f3, 0x10(r28)
    addi r3, r1, 0x98
    lfs f4, 0xc(r28)
    addi r4, r1, 0x8c
    fmuls f5, f0, f7
    lfs f0, 0x8(r26)
    fmuls f6, f3, f7
    lfs f3, 0x4(r26)
    fmuls f7, f4, f7
    lfs f4, 0x0(r26)
    fsubs f2, f0, f5
    addi r5, r1, 0x80
    fsubs f4, f4, f7
    addi r6, r1, 0x74
    fsubs f0, f3, f6
    stfs f2, 0x8(r26)
    stfs f2, 0xa0(r1)
    addi r7, r1, 0x68
    lfs f2, 0x14(r26)
    addi r8, r1, 0x5c
    stfs f0, 0x4(r26)
    li r31, 0x0
    lfs f0, 0xa0(r1)
    stfs f4, 0x0(r26)
    psq_l f1, 0x0(r26), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0xc(r26), 0, 0
    stfs f2, 0x94(r1)
    lfs f2, 0x8(r27)
    stfs f2, 0x88(r1)
    lfs f2, 0x14(r27)
    stfs f2, 0x7c(r1)
    lfs f4, 0x88(r1)
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x0(r27), 0, 0
    fsubs f8, f0, f4
    psq_st f1, 0x0(r5), 0, 0
    psq_l f1, 0xc(r27), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    lfs f11, 0x7c(r1)
    psq_l f1, 0x0(r29), 0, 0
    fsubs f31, f0, f11
    lfs f2, 0x8(r29)
    psq_st f1, 0x0(r7), 0, 0
    psq_l f1, 0xc(r29), 0, 0
    stfs f2, 0x70(r1)
    lfs f2, 0x14(r29)
    lfs f3, 0x9c(r1)
    lfs f13, 0x84(r1)
    lfs f10, 0x78(r1)
    fsubs f30, f3, f13
    lfs f0, 0x98(r1)
    lfs f9, 0x74(r1)
    fsubs f29, f3, f10
    lfs f12, 0x80(r1)
    fsubs f28, f0, f9
    fsubs f3, f0, f12
    stfs f7, 0xa4(r1)
    stfs f6, 0xa8(r1)
    stfs f5, 0xac(r1)
    psq_st f1, 0x0(r8), 0, 0
    stfs f2, 0x64(r1)
    stfs f3, 0x50(r1)
    stfs f30, 0x54(r1)
    stfs f8, 0x58(r1)
    lfs f3, 0x94(r1)
    fsubs f30, f11, f4
    lfs f0, 0x90(r1)
    frsp f7, f2
    fsubs f27, f10, f13
    lfs f6, 0x70(r1)
    fsubs f25, f3, f4
    fsubs f11, f3, f11
    lfs f8, 0x8c(r1)
    fsubs f26, f9, f12
    fsubs f12, f8, f12
    lfs f5, 0x60(r1)
    lfs f4, 0x6c(r1)
    fsubs f13, f0, f13
    lfs f3, 0x5c(r1)
    fsubs f10, f0, f10
    lfs f0, 0x68(r1)
    fsubs f8, f8, f9
    fsubs f6, f7, f6
    fsubs f4, f5, f4
    stfs f28, 0x44(r1)
    fsubs f0, f3, f0
    addi r3, r1, 0x38
    stfs f29, 0x48(r1)
    addi r4, r1, 0x50
    stfs f31, 0x4c(r1)
    stfs f26, 0x38(r1)
    stfs f27, 0x3c(r1)
    stfs f30, 0x40(r1)
    stfs f12, 0x2c(r1)
    stfs f13, 0x30(r1)
    stfs f25, 0x34(r1)
    stfs f8, 0x20(r1)
    stfs f10, 0x24(r1)
    stfs f11, 0x28(r1)
    stfs f0, 0x14(r1)
    stfs f4, 0x18(r1)
    stfs f6, 0x1c(r1)
    bl fn_805F9990
    fmr f30, f1
    addi r3, r1, 0x14
    addi r4, r1, 0x2c
    bl fn_805F9990
    fmr f31, f1
    addi r3, r1, 0x38
    addi r4, r1, 0x44
    bl fn_805F9990
    addi r3, r1, 0x14
    addi r4, r1, 0x20
    bl fn_805F9990
    fmuls f3, f30, f30
    lfs f0, lbl_80880940
    fcmpo cr0, f3, f0
    ble lbl_fn_80051684_00001AB8
    fcmpo cr0, f30, f0
    ble lbl_fn_80051684_00001AB4
    ori r31, r31, 0x1
    b lbl_fn_80051684_00001AB8
lbl_fn_80051684_00001AB4:
    ori r31, r31, 0x2
lbl_fn_80051684_00001AB8:
    fmuls f3, f31, f31
    lfs f0, lbl_80880940
    fcmpo cr0, f3, f0
    ble lbl_fn_80051684_00001ADC
    fcmpo cr0, f31, f0
    ble lbl_fn_80051684_00001AD8
    ori r31, r31, 0x4
    b lbl_fn_80051684_00001ADC
lbl_fn_80051684_00001AD8:
    ori r31, r31, 0x8
lbl_fn_80051684_00001ADC:
    mr r3, r31
lbl_fn_80051684_00001AE0:
    addi r11, r1, 0x100
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
    psq_l f26, 0x118(r1), 0, 0
    lfd f26, 0x110(r1)
    psq_l f25, 0x108(r1), 0, 0
    lfd f25, 0x100(r1)
    bl _restgpr_26
    lwz r0, 0x174(r1)
    mtlr r0
    addi r1, r1, 0x170
    blr
}

asm void fn_80051A88(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lfs f1, 0x8(r3)
    stw r0, 0x24(r1)
    lfs f0, 0x8(r4)
    stw r31, 0x1c(r1)
    mr r31, r4
    fsubs f4, f1, f0
    lfs f3, 0x4(r3)
    stw r30, 0x18(r1)
    mr r30, r3
    lfs f2, 0x4(r4)
    lfs f1, 0x0(r3)
    lfs f0, 0x0(r4)
    fsubs f2, f3, f2
    stfs f4, 0x10(r1)
    addi r3, r1, 0x8
    fsubs f0, f1, f0
    stfs f2, 0xc(r1)
    stfs f0, 0x8(r1)
    bl fn_805F9920
    lfs f2, 0xc(r30)
    lfs f0, 0xc(r31)
    fadds f0, f2, f0
    fmuls f0, f0, f0
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    mfcr r3
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    extrwi r3, r3, 1, 2
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80051B14(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_80050A1C
    lfs f2, 0xc(r30)
    lfs f0, 0x18(r31)
    fadds f0, f2, f0
    fmuls f0, f0, f0
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    mfcr r3
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    extrwi r3, r3, 1, 2
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80051B70(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x0
    stw r0, 0x14(r1)
    mr r0, r3
    stw r31, 0xc(r1)
    mr r31, r4
    mr r3, r31
    mr r4, r0
    bl fn_80050A1C
    lfs f0, 0xc(r31)
    fmuls f0, f0, f0
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    mfcr r3
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    extrwi r3, r3, 1, 2
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80051BC4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x0
    li r6, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    bl fn_80050E18
    lfs f0, 0x18(r31)
    fmuls f0, f0, f0
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    mfcr r3
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    extrwi r3, r3, 1, 2
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80051C10(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    mr r3, r31
    mr r4, r30
    bl fn_80050A1C
    lfs f2, 0x18(r30)
    lfs f0, 0xc(r31)
    fadds f0, f2, f0
    fmuls f0, f0, f0
    fcmpo cr0, f1, f0
    mfcr r0
    lwz r31, 0xc(r1)
    extrwi r0, r0, 1, 1
    lwz r30, 0x8(r1)
    cntlzw r0, r0
    srwi r3, r0, 5
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80051C78(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x0
    li r6, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_80050E18
    lfs f2, 0x18(r30)
    lfs f0, 0x18(r31)
    fadds f0, f2, f0
    fmuls f0, f0, f0
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    mfcr r3
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    extrwi r3, r3, 1, 2
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80051CD8(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    lfs f0, 0xc(r3)
    stw r0, 0x94(r1)
    psq_l f1, 0xc(r4), 0, 0
    stw r31, 0x8c(r1)
    addi r31, r1, 0x48
    psq_l f2, 0x14(r4), 0, 0
    stw r30, 0x88(r1)
    psq_l f3, 0x1c(r4), 0, 0
    stw r29, 0x84(r1)
    mr r29, r4
    psq_l f4, 0x24(r4), 0, 0
    stw r28, 0x80(r1)
    mr r28, r3
    psq_l f5, 0x2c(r4), 0, 0
    mr r3, r31
    psq_l f6, 0x34(r4), 0, 0
    mr r4, r31
    stfs f0, 0x2c(r1)
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
    bl fn_805F8CA0
    addi r30, r1, 0x14
    psq_l f1, 0x0(r28), 0, 0
    lfs f2, 0x8(r28)
    mr r3, r31
    psq_st f1, 0x0(r30), 0, 0
    mr r4, r30
    mr r5, r30
    stfs f2, 0x1c(r1)
    bl fn_805F93C0
    lfs f7, 0x4(r29)
    addi r3, r1, 0x20
    lfs f0, 0x0(r29)
    addi r4, r1, 0x8
    fneg f7, f7
    psq_l f1, 0x0(r30), 0, 0
    fneg f9, f0
    psq_st f1, 0x0(r3), 0, 0
    lfs f0, 0x8(r29)
    addi r3, r1, 0x30
    fneg f8, f0
    stfs f9, 0x8(r1)
    lfs f11, 0x20(r1)
    addi r5, r1, 0x3c
    stfs f7, 0xc(r1)
    lfs f10, 0x2c(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    fadds f0, f11, f10
    lfs f2, 0x1c(r1)
    stfs f2, 0x28(r1)
    frsp f2, f8
    lfs f7, 0x30(r1)
    stfs f2, 0x38(r1)
    psq_l f1, 0x0(r29), 0, 0
    fcmpo cr0, f7, f0
    lfs f2, 0x8(r29)
    stfs f8, 0x10(r1)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x44(r1)
    ble lbl_fn_80051CD8_00001E94
    li r3, 0x0
    b lbl_fn_80051CD8_00001F18
lbl_fn_80051CD8_00001E94:
    lfs f9, 0x24(r1)
    lfs f7, 0x34(r1)
    fadds f0, f9, f10
    fcmpo cr0, f7, f0
    ble lbl_fn_80051CD8_00001EB0
    li r3, 0x0
    b lbl_fn_80051CD8_00001F18
lbl_fn_80051CD8_00001EB0:
    lfs f8, 0x28(r1)
    lfs f7, 0x38(r1)
    fadds f0, f8, f10
    fcmpo cr0, f7, f0
    ble lbl_fn_80051CD8_00001ECC
    li r3, 0x0
    b lbl_fn_80051CD8_00001F18
lbl_fn_80051CD8_00001ECC:
    fsubs f0, f11, f10
    lfs f7, 0x3c(r1)
    fcmpo cr0, f7, f0
    bge lbl_fn_80051CD8_00001EE4
    li r3, 0x0
    b lbl_fn_80051CD8_00001F18
lbl_fn_80051CD8_00001EE4:
    fsubs f0, f9, f10
    lfs f7, 0x40(r1)
    fcmpo cr0, f7, f0
    bge lbl_fn_80051CD8_00001EFC
    li r3, 0x0
    b lbl_fn_80051CD8_00001F18
lbl_fn_80051CD8_00001EFC:
    frsp f7, f2
    fsubs f0, f8, f10
    fcmpo cr0, f7, f0
    mfcr r0
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi r3, r0, 5
lbl_fn_80051CD8_00001F18:
    lwz r0, 0x94(r1)
    lwz r31, 0x8c(r1)
    lwz r30, 0x88(r1)
    lwz r29, 0x84(r1)
    lwz r28, 0x80(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_80051E90(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    psq_l f1, 0xc(r4), 0, 0
    stw r0, 0xd4(r1)
    psq_l f2, 0x14(r4), 0, 0
    stw r31, 0xcc(r1)
    addi r31, r1, 0x90
    psq_l f3, 0x1c(r4), 0, 0
    stw r30, 0xc8(r1)
    psq_l f4, 0x24(r4), 0, 0
    stw r29, 0xc4(r1)
    mr r29, r4
    psq_l f5, 0x2c(r4), 0, 0
    stw r28, 0xc0(r1)
    mr r28, r3
    psq_l f6, 0x34(r4), 0, 0
    mr r3, r31
    psq_st f1, 0x0(r31), 0, 0
    mr r4, r31
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
    bl fn_805F8CA0
    addi r30, r1, 0x20
    psq_l f1, 0x0(r28), 0, 0
    lfs f2, 0x8(r28)
    mr r3, r31
    psq_st f1, 0x0(r30), 0, 0
    mr r4, r30
    mr r5, r30
    stfs f2, 0x28(r1)
    bl fn_805F93C0
    lfs f2, 0x28(r1)
    addi r3, r1, 0x48
    psq_l f1, 0x0(r30), 0, 0
    addi r31, r1, 0x60
    psq_st f1, 0x0(r3), 0, 0
    mr r3, r31
    psq_l f1, 0xc(r29), 0, 0
    mr r4, r31
    stfs f2, 0x50(r1)
    psq_l f2, 0x14(r29), 0, 0
    psq_l f3, 0x1c(r29), 0, 0
    psq_l f4, 0x24(r29), 0, 0
    psq_l f5, 0x2c(r29), 0, 0
    psq_l f6, 0x34(r29), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
    bl fn_805F8CA0
    addi r30, r1, 0x14
    psq_l f1, 0xc(r28), 0, 0
    lfs f2, 0x14(r28)
    mr r3, r31
    psq_st f1, 0x0(r30), 0, 0
    mr r4, r30
    mr r5, r30
    stfs f2, 0x1c(r1)
    bl fn_805F93C0
    lfs f7, 0x4(r29)
    addi r3, r1, 0x54
    lfs f0, 0x0(r29)
    addi r5, r1, 0x8
    fneg f8, f7
    psq_l f1, 0x0(r30), 0, 0
    fneg f0, f0
    lfs f2, 0x1c(r1)
    lfs f7, 0x8(r29)
    addi r4, r1, 0x30
    stfs f8, 0xc(r1)
    fneg f8, f7
    addi r6, r1, 0x3c
    stfs f0, 0x8(r1)
    lfs f0, 0x48(r1)
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x0(r29), 0, 0
    stfs f2, 0x5c(r1)
    frsp f2, f8
    lfs f7, 0x30(r1)
    stfs f2, 0x38(r1)
    lfs f2, 0x8(r29)
    fcmpo cr0, f7, f0
    stfs f8, 0x10(r1)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x44(r1)
    ble lbl_fn_80051E90_000020C0
    lfs f0, 0x54(r1)
    fcmpo cr0, f7, f0
    ble lbl_fn_80051E90_000020C0
    li r3, 0x0
    b lbl_fn_80051E90_00002178
lbl_fn_80051E90_000020C0:
    lfs f7, 0x34(r1)
    lfs f0, 0x4c(r1)
    fcmpo cr0, f7, f0
    ble lbl_fn_80051E90_000020E4
    lfs f0, 0x58(r1)
    fcmpo cr0, f7, f0
    ble lbl_fn_80051E90_000020E4
    li r3, 0x0
    b lbl_fn_80051E90_00002178
lbl_fn_80051E90_000020E4:
    lfs f7, 0x38(r1)
    lfs f0, 0x50(r1)
    fcmpo cr0, f7, f0
    ble lbl_fn_80051E90_00002108
    lfs f0, 0x5c(r1)
    fcmpo cr0, f7, f0
    ble lbl_fn_80051E90_00002108
    li r3, 0x0
    b lbl_fn_80051E90_00002178
lbl_fn_80051E90_00002108:
    lfs f7, 0x3c(r1)
    lfs f0, 0x48(r1)
    fcmpo cr0, f7, f0
    bge lbl_fn_80051E90_0000212C
    lfs f0, 0x54(r1)
    fcmpo cr0, f7, f0
    bge lbl_fn_80051E90_0000212C
    li r3, 0x0
    b lbl_fn_80051E90_00002178
lbl_fn_80051E90_0000212C:
    lfs f7, 0x40(r1)
    lfs f0, 0x4c(r1)
    fcmpo cr0, f7, f0
    bge lbl_fn_80051E90_00002150
    lfs f0, 0x58(r1)
    fcmpo cr0, f7, f0
    bge lbl_fn_80051E90_00002150
    li r3, 0x0
    b lbl_fn_80051E90_00002178
lbl_fn_80051E90_00002150:
    lfs f7, 0x44(r1)
    lfs f0, 0x50(r1)
    fcmpo cr0, f7, f0
    bge lbl_fn_80051E90_00002174
    lfs f0, 0x5c(r1)
    fcmpo cr0, f7, f0
    bge lbl_fn_80051E90_00002174
    li r3, 0x0
    b lbl_fn_80051E90_00002178
lbl_fn_80051E90_00002174:
    li r3, 0x1
lbl_fn_80051E90_00002178:
    lwz r0, 0xd4(r1)
    lwz r31, 0xcc(r1)
    lwz r30, 0xc8(r1)
    lwz r29, 0xc4(r1)
    lwz r28, 0xc0(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

asm void fn_800520F0(void)
{
    nofralloc
    stwu r1, -0xe0(r1)
    mflr r0
    lfs f0, 0x18(r3)
    stw r0, 0xe4(r1)
    psq_l f1, 0xc(r4), 0, 0
    stw r31, 0xdc(r1)
    addi r31, r1, 0x98
    psq_l f2, 0x14(r4), 0, 0
    stw r30, 0xd8(r1)
    psq_l f3, 0x1c(r4), 0, 0
    stw r29, 0xd4(r1)
    mr r29, r4
    psq_l f4, 0x24(r4), 0, 0
    stw r28, 0xd0(r1)
    mr r28, r3
    psq_l f5, 0x2c(r4), 0, 0
    mr r3, r31
    psq_l f6, 0x34(r4), 0, 0
    mr r4, r31
    stfs f0, 0x60(r1)
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
    bl fn_805F8CA0
    addi r30, r1, 0x20
    psq_l f1, 0x0(r28), 0, 0
    lfs f2, 0x8(r28)
    mr r3, r31
    psq_st f1, 0x0(r30), 0, 0
    mr r4, r30
    mr r5, r30
    stfs f2, 0x28(r1)
    bl fn_805F93C0
    lfs f2, 0x28(r1)
    addi r3, r1, 0x48
    psq_l f1, 0x0(r30), 0, 0
    addi r31, r1, 0x68
    psq_st f1, 0x0(r3), 0, 0
    mr r3, r31
    psq_l f1, 0xc(r29), 0, 0
    mr r4, r31
    stfs f2, 0x50(r1)
    psq_l f2, 0x14(r29), 0, 0
    psq_l f3, 0x1c(r29), 0, 0
    psq_l f4, 0x24(r29), 0, 0
    psq_l f5, 0x2c(r29), 0, 0
    psq_l f6, 0x34(r29), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
    bl fn_805F8CA0
    addi r30, r1, 0x14
    psq_l f1, 0xc(r28), 0, 0
    lfs f2, 0x14(r28)
    mr r3, r31
    psq_st f1, 0x0(r30), 0, 0
    mr r4, r30
    mr r5, r30
    stfs f2, 0x1c(r1)
    bl fn_805F93C0
    lfs f7, 0x4(r29)
    addi r3, r1, 0x54
    lfs f0, 0x0(r29)
    addi r5, r1, 0x8
    fneg f8, f7
    lfs f7, 0x8(r29)
    fneg f0, f0
    psq_l f1, 0x0(r30), 0, 0
    stfs f8, 0xc(r1)
    fneg f9, f7
    stfs f0, 0x8(r1)
    addi r4, r1, 0x30
    lfs f0, 0x48(r1)
    addi r6, r1, 0x3c
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lfs f7, 0x60(r1)
    lfs f2, 0x1c(r1)
    stfs f2, 0x5c(r1)
    frsp f2, f9
    psq_l f1, 0x0(r29), 0, 0
    fadds f0, f0, f7
    lfs f8, 0x30(r1)
    stfs f2, 0x38(r1)
    lfs f2, 0x8(r29)
    fcmpo cr0, f8, f0
    stfs f9, 0x10(r1)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x44(r1)
    ble lbl_fn_800520F0_00002334
    lfs f0, 0x54(r1)
    fadds f0, f0, f7
    fcmpo cr0, f8, f0
    ble lbl_fn_800520F0_00002334
    li r3, 0x0
    b lbl_fn_800520F0_00002428
lbl_fn_800520F0_00002334:
    lfs f0, 0x4c(r1)
    lfs f7, 0x60(r1)
    lfs f8, 0x34(r1)
    fadds f0, f0, f7
    fcmpo cr0, f8, f0
    ble lbl_fn_800520F0_00002364
    lfs f0, 0x58(r1)
    fadds f0, f0, f7
    fcmpo cr0, f8, f0
    ble lbl_fn_800520F0_00002364
    li r3, 0x0
    b lbl_fn_800520F0_00002428
lbl_fn_800520F0_00002364:
    lfs f0, 0x50(r1)
    lfs f7, 0x60(r1)
    lfs f8, 0x38(r1)
    fadds f0, f0, f7
    fcmpo cr0, f8, f0
    ble lbl_fn_800520F0_00002394
    lfs f0, 0x5c(r1)
    fadds f0, f0, f7
    fcmpo cr0, f8, f0
    ble lbl_fn_800520F0_00002394
    li r3, 0x0
    b lbl_fn_800520F0_00002428
lbl_fn_800520F0_00002394:
    lfs f0, 0x48(r1)
    lfs f7, 0x60(r1)
    lfs f8, 0x3c(r1)
    fsubs f0, f0, f7
    fcmpo cr0, f8, f0
    bge lbl_fn_800520F0_000023C4
    lfs f0, 0x54(r1)
    fsubs f0, f0, f7
    fcmpo cr0, f8, f0
    bge lbl_fn_800520F0_000023C4
    li r3, 0x0
    b lbl_fn_800520F0_00002428
lbl_fn_800520F0_000023C4:
    lfs f0, 0x4c(r1)
    lfs f7, 0x60(r1)
    lfs f8, 0x40(r1)
    fsubs f0, f0, f7
    fcmpo cr0, f8, f0
    bge lbl_fn_800520F0_000023F4
    lfs f0, 0x58(r1)
    fsubs f0, f0, f7
    fcmpo cr0, f8, f0
    bge lbl_fn_800520F0_000023F4
    li r3, 0x0
    b lbl_fn_800520F0_00002428
lbl_fn_800520F0_000023F4:
    lfs f0, 0x50(r1)
    lfs f7, 0x60(r1)
    lfs f8, 0x44(r1)
    fsubs f0, f0, f7
    fcmpo cr0, f8, f0
    bge lbl_fn_800520F0_00002424
    lfs f0, 0x5c(r1)
    fsubs f0, f0, f7
    fcmpo cr0, f8, f0
    bge lbl_fn_800520F0_00002424
    li r3, 0x0
    b lbl_fn_800520F0_00002428
lbl_fn_800520F0_00002424:
    li r3, 0x1
lbl_fn_800520F0_00002428:
    lwz r0, 0xe4(r1)
    lwz r31, 0xdc(r1)
    lwz r30, 0xd8(r1)
    lwz r29, 0xd4(r1)
    lwz r28, 0xd0(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}

asm void fn_800523A0(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x84(r1)
    stfd f31, 0x70(r1)
    psq_st f31, 0x78(r1), 0, 0
    stfd f30, 0x60(r1)
    psq_st f30, 0x68(r1), 0, 0
    stw r31, 0x5c(r1)
    mr r31, r4
    stw r30, 0x58(r1)
    mr r30, r5
    stw r29, 0x54(r1)
    mr r29, r3
    beq lbl_fn_800523A0_0000248C
    li r0, 0x0
    stw r0, 0x0(r3)
lbl_fn_800523A0_0000248C:
    lfs f3, 0x8(r4)
    addi r3, r1, 0x44
    lfs f0, 0x8(r5)
    lfs f5, 0x4(r4)
    fsubs f6, f3, f0
    lfs f4, 0x4(r5)
    lfs f3, 0x0(r4)
    lfs f0, 0x0(r5)
    fsubs f4, f5, f4
    stfs f6, 0x4c(r1)
    fsubs f0, f3, f0
    stfs f4, 0x48(r1)
    stfs f0, 0x44(r1)
    bl fn_805F9920
    lfs f31, 0xc(r31)
    lfs f30, 0xc(r30)
    fadds f0, f31, f30
    fmuls f0, f0, f0
    fcmpo cr0, f1, f0
    ble lbl_fn_800523A0_000024E4
    li r3, 0x0
    b lbl_fn_800523A0_000025E8
lbl_fn_800523A0_000024E4:
    cmpwi r29, 0x0
    beq lbl_fn_800523A0_000025E4
    fabs f3, f1
    li r0, 0x1
    lfs f0, lbl_80880950
    stw r0, 0x0(r29)
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_800523A0_00002510
    lfs f0, lbl_80880958
    stfs f0, 0x48(r1)
lbl_fn_800523A0_00002510:
    addi r3, r1, 0x44
    addi r31, r1, 0x38
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r31
    lfs f2, 0x4c(r1)
    mr r4, r31
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F98D0
    lfs f6, 0x40(r1)
    addi r3, r1, 0x2c
    lfs f5, 0x3c(r1)
    addi r4, r1, 0x20
    fmuls f7, f6, f30
    lfs f4, 0x38(r1)
    lfs f0, 0x8(r30)
    fmuls f8, f5, f30
    fmuls f9, f4, f30
    lfs f3, 0x4(r30)
    fadds f10, f7, f0
    lfs f0, 0x0(r30)
    fmuls f6, f6, f31
    stfs f9, 0x14(r1)
    fadds f0, f9, f0
    fadds f3, f8, f3
    fmuls f5, f5, f31
    stfs f0, 0x2c(r1)
    fmuls f4, f4, f31
    stfs f3, 0x30(r1)
    fadds f9, f6, f10
    fadds f3, f5, f3
    fadds f0, f4, f0
    psq_l f1, 0x0(r3), 0, 0
    fmr f2, f10
    stfs f3, 0x24(r1)
    stfs f2, 0xc(r29)
    fmr f2, f9
    stfs f0, 0x20(r1)
    psq_st f1, 0x4(r29), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x10(r29), 0, 0
    stfs f2, 0x18(r29)
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x40(r1)
    stfs f8, 0x18(r1)
    stfs f7, 0x1c(r1)
    stfs f10, 0x34(r1)
    stfs f4, 0x8(r1)
    stfs f5, 0xc(r1)
    stfs f6, 0x10(r1)
    stfs f9, 0x28(r1)
    psq_st f1, 0x1c(r29), 0, 0
    stfs f2, 0x24(r29)
lbl_fn_800523A0_000025E4:
    li r3, 0x1
lbl_fn_800523A0_000025E8:
    lwz r0, 0x84(r1)
    psq_l f31, 0x78(r1), 0, 0
    lfd f31, 0x70(r1)
    psq_l f30, 0x68(r1), 0, 0
    lfd f30, 0x60(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_8005256C(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x84(r1)
    stfd f31, 0x70(r1)
    psq_st f31, 0x78(r1), 0, 0
    stw r31, 0x6c(r1)
    mr r31, r5
    stw r30, 0x68(r1)
    mr r30, r4
    stw r29, 0x64(r1)
    mr r29, r3
    beq lbl_fn_8005256C_00002650
    li r0, 0x0
    stw r0, 0x0(r3)
lbl_fn_8005256C_00002650:
    mr r3, r30
    mr r4, r31
    addi r5, r1, 0x50
    bl fn_80050A1C
    lfs f3, 0xc(r30)
    lfs f0, 0x18(r31)
    fadds f31, f3, f0
    fmuls f0, f31, f31
    fcmpo cr0, f1, f0
    ble lbl_fn_8005256C_00002680
    li r3, 0x0
    b lbl_fn_8005256C_000027E4
lbl_fn_8005256C_00002680:
    cmpwi r29, 0x0
    beq lbl_fn_8005256C_000027E0
    li r0, 0x1
    stw r0, 0x0(r29)
    addi r3, r1, 0x44
    lfs f3, 0x8(r30)
    lfs f0, 0x58(r1)
    lfs f5, 0x4(r30)
    fsubs f6, f3, f0
    lfs f4, 0x54(r1)
    lfs f3, 0x0(r30)
    lfs f0, 0x50(r1)
    fsubs f4, f5, f4
    stfs f6, 0x4c(r1)
    fsubs f0, f3, f0
    stfs f4, 0x48(r1)
    stfs f0, 0x44(r1)
    bl fn_805F9920
    fabs f3, f1
    lfs f0, lbl_80880950
    frsp f3, f3
    fcmpo cr0, f3, f0
    blt lbl_fn_8005256C_000026EC
    addi r3, r1, 0x44
    mr r4, r3
    bl fn_805F98D0
    b lbl_fn_8005256C_00002700
lbl_fn_8005256C_000026EC:
    lfs f3, lbl_80880940
    lfs f0, lbl_80880944
    stfs f3, 0x44(r1)
    stfs f3, 0x48(r1)
    stfs f0, 0x4c(r1)
lbl_fn_8005256C_00002700:
    addi r4, r1, 0x44
    lfs f2, 0x4c(r1)
    psq_l f1, 0x0(r4), 0, 0
    addi r3, r1, 0x38
    psq_st f1, 0x0(r3), 0, 0
    addi r4, r1, 0x2c
    lfs f0, 0x18(r31)
    addi r5, r1, 0x14
    lfs f6, 0x3c(r1)
    lfs f5, 0x38(r1)
    fmuls f7, f2, f0
    fmuls f8, f6, f0
    lfs f4, 0x58(r1)
    fmuls f9, f5, f0
    lfs f3, 0x54(r1)
    lfs f0, 0x50(r1)
    fadds f4, f4, f7
    fadds f3, f3, f8
    stfs f2, 0x40(r1)
    fadds f10, f0, f9
    fmr f2, f4
    stfs f3, 0x30(r1)
    lfs f0, 0x40(r1)
    stfs f10, 0x2c(r1)
    fmuls f10, f6, f31
    fmuls f6, f0, f31
    psq_l f1, 0x0(r4), 0, 0
    fmuls f5, f5, f31
    psq_st f1, 0x4(r29), 0, 0
    stfs f2, 0xc(r29)
    lfs f0, 0x58(r1)
    lfs f3, 0x54(r1)
    fadds f11, f0, f6
    lfs f0, 0x50(r1)
    fadds f3, f3, f10
    stfs f9, 0x20(r1)
    fadds f0, f0, f5
    fmr f2, f11
    stfs f0, 0x14(r1)
    stfs f3, 0x18(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x10(r29), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x18(r29)
    lfs f2, 0x40(r1)
    stfs f8, 0x24(r1)
    stfs f7, 0x28(r1)
    stfs f4, 0x34(r1)
    stfs f5, 0x8(r1)
    stfs f10, 0xc(r1)
    stfs f6, 0x10(r1)
    stfs f11, 0x1c(r1)
    psq_st f1, 0x1c(r29), 0, 0
    stfs f2, 0x24(r29)
    psq_st f1, 0x28(r29), 0, 0
    stfs f2, 0x30(r29)
lbl_fn_8005256C_000027E0:
    li r3, 0x1
lbl_fn_8005256C_000027E4:
    lwz r0, 0x84(r1)
    psq_l f31, 0x78(r1), 0, 0
    lfd f31, 0x70(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    lwz r29, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_80052760(void)
{
    nofralloc
    stwu r1, -0x370(r1)
    mflr r0
    stw r0, 0x374(r1)
    addi r11, r1, 0x250
    stfd f31, 0x360(r1)
    psq_st f31, 0x368(r1), 0, 0
    stfd f30, 0x350(r1)
    psq_st f30, 0x358(r1), 0, 0
    stfd f29, 0x340(r1)
    psq_st f29, 0x348(r1), 0, 0
    stfd f28, 0x330(r1)
    psq_st f28, 0x338(r1), 0, 0
    stfd f27, 0x320(r1)
    psq_st f27, 0x328(r1), 0, 0
    stfd f26, 0x310(r1)
    psq_st f26, 0x318(r1), 0, 0
    stfd f25, 0x300(r1)
    psq_st f25, 0x308(r1), 0, 0
    stfd f24, 0x2f0(r1)
    psq_st f24, 0x2f8(r1), 0, 0
    stfd f23, 0x2e0(r1)
    psq_st f23, 0x2e8(r1), 0, 0
    stfd f22, 0x2d0(r1)
    psq_st f22, 0x2d8(r1), 0, 0
    stfd f21, 0x2c0(r1)
    psq_st f21, 0x2c8(r1), 0, 0
    stfd f20, 0x2b0(r1)
    psq_st f20, 0x2b8(r1), 0, 0
    stfd f19, 0x2a0(r1)
    psq_st f19, 0x2a8(r1), 0, 0
    stfd f18, 0x290(r1)
    psq_st f18, 0x298(r1), 0, 0
    stfd f17, 0x280(r1)
    psq_st f17, 0x288(r1), 0, 0
    stfd f16, 0x270(r1)
    psq_st f16, 0x278(r1), 0, 0
    stfd f15, 0x260(r1)
    psq_st f15, 0x268(r1), 0, 0
    stfd f14, 0x250(r1)
    psq_st f14, 0x258(r1), 0, 0
    bl _savegpr_25
    lfs f4, 0x8(r8)
    mr r29, r3
    lfs f0, 0x4(r8)
    fmr f31, f1
    fmuls f12, f4, f2
    lfs f3, 0x0(r8)
    fmuls f13, f0, f2
    lfs f0, 0x8(r4)
    fmuls f14, f3, f2
    fsubs f30, f0, f12
    lfs f3, 0x4(r4)
    mr r30, r4
    lfs f0, 0x0(r4)
    mr r25, r5
    fsubs f29, f3, f13
    fsubs f28, f0, f14
    lfs f11, 0x8(r6)
    lfs f10, 0x8(r5)
    mr r26, r6
    lfs f5, 0x8(r7)
    fsubs f3, f11, f10
    fsubs f0, f30, f11
    stfs f13, 0x78(r1)
    fsubs f25, f5, f10
    lfs f7, 0x0(r6)
    lfs f6, 0x0(r5)
    stfs f3, 0x224(r1)
    lfs f3, 0x0(r7)
    fsubs f26, f7, f6
    lfs f8, 0x4(r5)
    fsubs f22, f5, f11
    lfs f9, 0x4(r6)
    fsubs f19, f10, f11
    lfs f4, 0x4(r7)
    fsubs f13, f10, f5
    stfs f14, 0x74(r1)
    fsubs f11, f11, f5
    mr r31, r7
    fsubs f27, f9, f8
    stfs f12, 0x7c(r1)
    fsubs f24, f4, f8
    stfs f26, 0x20c(r1)
    fsubs f23, f3, f6
    mr r28, r8
    fsubs f21, f4, f9
    stfs f28, 0x218(r1)
    fsubs f20, f3, f7
    stfs f29, 0x21c(r1)
    fsubs f18, f8, f9
    addi r3, r1, 0x1c4
    fsubs f16, f8, f4
    stfs f30, 0x220(r1)
    fsubs f15, f9, f4
    stfs f27, 0x210(r1)
    fsubs f17, f6, f7
    addi r4, r1, 0x1b8
    fsubs f12, f6, f3
    stfs f23, 0x200(r1)
    fsubs f14, f7, f3
    stfs f24, 0x204(r1)
    fsubs f26, f28, f3
    lfs f3, 0x224(r1)
    fsubs f10, f30, f10
    stfs f3, 0x214(r1)
    fsubs f8, f29, f8
    stfs f25, 0x208(r1)
    fsubs f6, f28, f6
    addi r5, r1, 0x1a0
    fsubs f9, f29, f9
    stfs f20, 0x1f4(r1)
    fsubs f7, f28, f7
    stfs f21, 0x1f8(r1)
    fsubs f5, f30, f5
    li r27, -0x1
    fsubs f4, f29, f4
    stfs f22, 0x1fc(r1)
    stfs f17, 0x1e8(r1)
    stfs f18, 0x1ec(r1)
    stfs f19, 0x1f0(r1)
    stfs f12, 0x1dc(r1)
    stfs f16, 0x1e0(r1)
    stfs f13, 0x1e4(r1)
    stfs f14, 0x1d0(r1)
    stfs f15, 0x1d4(r1)
    stfs f11, 0x1d8(r1)
    stfs f6, 0x1c4(r1)
    stfs f8, 0x1c8(r1)
    stfs f10, 0x1cc(r1)
    stfs f7, 0x1b8(r1)
    stfs f9, 0x1bc(r1)
    stfs f0, 0x1c0(r1)
    stfs f26, 0x1ac(r1)
    stfs f4, 0x1b0(r1)
    stfs f5, 0x1b4(r1)
    bl fn_805F99B0
    addi r3, r1, 0x1b8
    addi r4, r1, 0x1ac
    addi r5, r1, 0x194
    bl fn_805F99B0
    addi r3, r1, 0x1ac
    addi r4, r1, 0x1c4
    addi r5, r1, 0x188
    bl fn_805F99B0
    mr r3, r28
    addi r4, r1, 0x1a0
    bl fn_805F9990
    lfs f0, lbl_80880940
    fcmpo cr0, f1, f0
    bge lbl_fn_80052760_00002A64
    li r27, 0x0
lbl_fn_80052760_00002A64:
    mr r3, r28
    addi r4, r1, 0x194
    bl fn_805F9990
    lfs f0, lbl_80880940
    fcmpo cr0, f1, f0
    bge lbl_fn_80052760_00002A80
    li r27, 0x1
lbl_fn_80052760_00002A80:
    mr r3, r28
    addi r4, r1, 0x188
    bl fn_805F9990
    lfs f0, lbl_80880940
    fcmpo cr0, f1, f0
    bge lbl_fn_80052760_00002A9C
    li r27, 0x2
lbl_fn_80052760_00002A9C:
    cmpwi r27, 0x0
    bge lbl_fn_80052760_00002B3C
    cmpwi r29, 0x0
    beq lbl_fn_80052760_00002B34
    addi r3, r1, 0x218
    lfs f2, 0x220(r1)
    psq_l f1, 0x0(r3), 0, 0
    li r0, 0x1
    stw r0, 0x0(r29)
    addi r3, r1, 0x68
    lfs f4, 0x220(r1)
    psq_st f1, 0x4(r29), 0, 0
    lfs f3, 0x21c(r1)
    stfs f2, 0xc(r29)
    lfs f0, 0x218(r1)
    lfs f5, 0x8(r28)
    lfs f6, 0x4(r28)
    fmuls f7, f5, f31
    lfs f5, 0x0(r28)
    fmuls f6, f6, f31
    fmuls f5, f5, f31
    stfs f7, 0x64(r1)
    fadds f4, f4, f7
    fadds f3, f3, f6
    stfs f5, 0x5c(r1)
    fadds f0, f0, f5
    fmr f2, f4
    stfs f3, 0x6c(r1)
    stfs f0, 0x68(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x10(r29), 0, 0
    stfs f2, 0x18(r29)
    psq_l f1, 0x0(r28), 0, 0
    lfs f2, 0x8(r28)
    stfs f6, 0x60(r1)
    stfs f4, 0x70(r1)
    psq_st f1, 0x1c(r29), 0, 0
    stfs f2, 0x24(r29)
lbl_fn_80052760_00002B34:
    li r3, 0x1
    b lbl_fn_80052760_00003254
lbl_fn_80052760_00002B3C:
    lfs f5, 0x8(r30)
    fmuls f14, f31, f31
    lfs f4, 0x8(r25)
    lfs f3, 0x8(r26)
    fsubs f7, f5, f4
    lfs f0, 0x8(r31)
    fsubs f9, f5, f3
    lfs f6, 0x4(r30)
    fsubs f11, f5, f0
    lfs f4, 0x4(r25)
    fsubs f8, f6, f4
    lfs f3, 0x4(r26)
    lfs f0, 0x4(r31)
    fsubs f10, f6, f3
    lfs f5, 0x0(r30)
    fsubs f6, f6, f0
    lfs f4, 0x0(r25)
    lfs f3, 0x0(r26)
    lfs f0, 0x0(r31)
    fsubs f4, f5, f4
    fsubs f3, f5, f3
    stfs f8, 0x180(r1)
    fsubs f0, f5, f0
    stfs f4, 0x17c(r1)
    stfs f7, 0x184(r1)
    stfs f3, 0x170(r1)
    stfs f10, 0x174(r1)
    stfs f9, 0x178(r1)
    stfs f0, 0x164(r1)
    stfs f6, 0x168(r1)
    stfs f11, 0x16c(r1)
    beq lbl_fn_80052760_00002BD0
    cmpwi r27, 0x1
    beq lbl_fn_80052760_00002D6C
    cmpwi r27, 0x2
    beq lbl_fn_80052760_00002F08
    b lbl_fn_80052760_000030A4
lbl_fn_80052760_00002BD0:
    addi r3, r1, 0x20c
    addi r28, r1, 0x158
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r28
    lfs f2, 0x214(r1)
    mr r4, r28
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x160(r1)
    bl fn_805F98D0
    mr r3, r28
    addi r4, r1, 0x17c
    bl fn_805F9990
    lfs f4, 0x160(r1)
    fmr f15, f1
    lfs f3, 0x15c(r1)
    addi r3, r1, 0x14c
    fmuls f5, f4, f1
    lfs f0, 0x158(r1)
    fmuls f6, f3, f1
    fmuls f7, f0, f1
    lfs f4, 0x184(r1)
    lfs f3, 0x180(r1)
    lfs f0, 0x17c(r1)
    fsubs f4, f4, f5
    fsubs f3, f3, f6
    fsubs f0, f0, f7
    stfs f7, 0x50(r1)
    stfs f6, 0x54(r1)
    stfs f5, 0x58(r1)
    stfs f0, 0x14c(r1)
    stfs f3, 0x150(r1)
    stfs f4, 0x154(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f14
    ble lbl_fn_80052760_00002C64
    li r3, 0x0
    b lbl_fn_80052760_00003254
lbl_fn_80052760_00002C64:
    lfs f0, lbl_80880940
    fcmpo cr0, f15, f0
    cror eq, gt, eq
    bne lbl_fn_80052760_000030A4
    addi r3, r1, 0x1e8
    addi r4, r1, 0x170
    bl fn_805F9990
    lfs f0, lbl_80880940
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_80052760_000030A4
    cmpwi r29, 0x0
    beq lbl_fn_80052760_00002D64
    li r0, 0x2
    stw r0, 0x0(r29)
    addi r3, r1, 0x14c
    addi r28, r1, 0x140
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r28
    lfs f2, 0x154(r1)
    mr r4, r28
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x148(r1)
    bl fn_805F98D0
    lfs f4, 0x148(r1)
    addi r3, r1, 0x134
    lfs f3, 0x144(r1)
    addi r4, r1, 0x128
    fmuls f6, f4, f31
    lfs f0, 0x140(r1)
    fmuls f7, f3, f31
    lfs f5, 0x8(r30)
    fmuls f8, f0, f31
    lfs f3, 0x154(r1)
    fsubs f2, f5, f3
    lfs f4, 0x4(r30)
    lfs f0, 0x150(r1)
    lfs f3, 0x0(r30)
    fsubs f4, f4, f0
    lfs f0, 0x14c(r1)
    fadds f5, f2, f6
    stfs f2, 0x13c(r1)
    fsubs f0, f3, f0
    fadds f3, f4, f7
    stfs f0, 0x134(r1)
    fadds f0, f0, f8
    stfs f4, 0x138(r1)
    stfs f2, 0xc(r29)
    fmr f2, f5
    psq_l f1, 0x0(r3), 0, 0
    stfs f0, 0x128(r1)
    stfs f3, 0x12c(r1)
    psq_st f1, 0x4(r29), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x10(r29), 0, 0
    stfs f2, 0x18(r29)
    psq_l f1, 0x0(r28), 0, 0
    lfs f2, 0x148(r1)
    stfs f8, 0x44(r1)
    stfs f7, 0x48(r1)
    stfs f6, 0x4c(r1)
    stfs f5, 0x130(r1)
    psq_st f1, 0x1c(r29), 0, 0
    stfs f2, 0x24(r29)
lbl_fn_80052760_00002D64:
    li r3, 0x1
    b lbl_fn_80052760_00003254
lbl_fn_80052760_00002D6C:
    addi r3, r1, 0x1f4
    addi r28, r1, 0x11c
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r28
    lfs f2, 0x1fc(r1)
    mr r4, r28
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x124(r1)
    bl fn_805F98D0
    mr r3, r28
    addi r4, r1, 0x170
    bl fn_805F9990
    lfs f4, 0x124(r1)
    fmr f15, f1
    lfs f3, 0x120(r1)
    addi r3, r1, 0x110
    fmuls f5, f4, f1
    lfs f0, 0x11c(r1)
    fmuls f6, f3, f1
    fmuls f7, f0, f1
    lfs f4, 0x178(r1)
    lfs f3, 0x174(r1)
    lfs f0, 0x170(r1)
    fsubs f4, f4, f5
    fsubs f3, f3, f6
    fsubs f0, f0, f7
    stfs f7, 0x38(r1)
    stfs f6, 0x3c(r1)
    stfs f5, 0x40(r1)
    stfs f0, 0x110(r1)
    stfs f3, 0x114(r1)
    stfs f4, 0x118(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f14
    ble lbl_fn_80052760_00002E00
    li r3, 0x0
    b lbl_fn_80052760_00003254
lbl_fn_80052760_00002E00:
    lfs f0, lbl_80880940
    fcmpo cr0, f15, f0
    cror eq, gt, eq
    bne lbl_fn_80052760_000030A4
    addi r3, r1, 0x1d0
    addi r4, r1, 0x164
    bl fn_805F9990
    lfs f0, lbl_80880940
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_80052760_000030A4
    cmpwi r29, 0x0
    beq lbl_fn_80052760_00002F00
    li r0, 0x2
    stw r0, 0x0(r29)
    addi r3, r1, 0x110
    addi r28, r1, 0x104
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r28
    lfs f2, 0x118(r1)
    mr r4, r28
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x10c(r1)
    bl fn_805F98D0
    lfs f4, 0x10c(r1)
    addi r3, r1, 0xf8
    lfs f3, 0x108(r1)
    addi r4, r1, 0xec
    fmuls f6, f4, f31
    lfs f0, 0x104(r1)
    fmuls f7, f3, f31
    lfs f5, 0x8(r30)
    fmuls f8, f0, f31
    lfs f3, 0x118(r1)
    fsubs f2, f5, f3
    lfs f4, 0x4(r30)
    lfs f0, 0x114(r1)
    lfs f3, 0x0(r30)
    fsubs f4, f4, f0
    lfs f0, 0x110(r1)
    fadds f5, f2, f6
    stfs f2, 0x100(r1)
    fsubs f0, f3, f0
    fadds f3, f4, f7
    stfs f0, 0xf8(r1)
    fadds f0, f0, f8
    stfs f4, 0xfc(r1)
    stfs f2, 0xc(r29)
    fmr f2, f5
    psq_l f1, 0x0(r3), 0, 0
    stfs f0, 0xec(r1)
    stfs f3, 0xf0(r1)
    psq_st f1, 0x4(r29), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x10(r29), 0, 0
    stfs f2, 0x18(r29)
    psq_l f1, 0x0(r28), 0, 0
    lfs f2, 0x10c(r1)
    stfs f8, 0x2c(r1)
    stfs f7, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f5, 0xf4(r1)
    psq_st f1, 0x1c(r29), 0, 0
    stfs f2, 0x24(r29)
lbl_fn_80052760_00002F00:
    li r3, 0x1
    b lbl_fn_80052760_00003254
lbl_fn_80052760_00002F08:
    addi r3, r1, 0x1dc
    addi r28, r1, 0xe0
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r28
    lfs f2, 0x1e4(r1)
    mr r4, r28
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0xe8(r1)
    bl fn_805F98D0
    mr r3, r28
    addi r4, r1, 0x164
    bl fn_805F9990
    lfs f4, 0xe8(r1)
    fmr f15, f1
    lfs f3, 0xe4(r1)
    addi r3, r1, 0xd4
    fmuls f5, f4, f1
    lfs f0, 0xe0(r1)
    fmuls f6, f3, f1
    fmuls f7, f0, f1
    lfs f4, 0x16c(r1)
    lfs f3, 0x168(r1)
    lfs f0, 0x164(r1)
    fsubs f4, f4, f5
    fsubs f3, f3, f6
    fsubs f0, f0, f7
    stfs f7, 0x20(r1)
    stfs f6, 0x24(r1)
    stfs f5, 0x28(r1)
    stfs f0, 0xd4(r1)
    stfs f3, 0xd8(r1)
    stfs f4, 0xdc(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f14
    ble lbl_fn_80052760_00002F9C
    li r3, 0x0
    b lbl_fn_80052760_00003254
lbl_fn_80052760_00002F9C:
    lfs f0, lbl_80880940
    fcmpo cr0, f15, f0
    cror eq, gt, eq
    bne lbl_fn_80052760_000030A4
    addi r3, r1, 0x200
    addi r4, r1, 0x17c
    bl fn_805F9990
    lfs f0, lbl_80880940
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_80052760_000030A4
    cmpwi r29, 0x0
    beq lbl_fn_80052760_0000309C
    li r0, 0x2
    stw r0, 0x0(r29)
    addi r3, r1, 0xd4
    addi r28, r1, 0xc8
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r28
    lfs f2, 0xdc(r1)
    mr r4, r28
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0xd0(r1)
    bl fn_805F98D0
    lfs f4, 0xd0(r1)
    addi r3, r1, 0xbc
    lfs f3, 0xcc(r1)
    addi r4, r1, 0xb0
    fmuls f6, f4, f31
    lfs f0, 0xc8(r1)
    fmuls f7, f3, f31
    lfs f5, 0x8(r30)
    fmuls f8, f0, f31
    lfs f3, 0xdc(r1)
    fsubs f2, f5, f3
    lfs f4, 0x4(r30)
    lfs f0, 0xd8(r1)
    lfs f3, 0x0(r30)
    fsubs f4, f4, f0
    lfs f0, 0xd4(r1)
    fadds f5, f2, f6
    stfs f2, 0xc4(r1)
    fsubs f0, f3, f0
    fadds f3, f4, f7
    stfs f0, 0xbc(r1)
    fadds f0, f0, f8
    stfs f4, 0xc0(r1)
    stfs f2, 0xc(r29)
    fmr f2, f5
    psq_l f1, 0x0(r3), 0, 0
    stfs f0, 0xb0(r1)
    stfs f3, 0xb4(r1)
    psq_st f1, 0x4(r29), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x10(r29), 0, 0
    stfs f2, 0x18(r29)
    psq_l f1, 0x0(r28), 0, 0
    lfs f2, 0xd0(r1)
    stfs f8, 0x14(r1)
    stfs f7, 0x18(r1)
    stfs f6, 0x1c(r1)
    stfs f5, 0xb8(r1)
    psq_st f1, 0x1c(r29), 0, 0
    stfs f2, 0x24(r29)
lbl_fn_80052760_0000309C:
    li r3, 0x1
    b lbl_fn_80052760_00003254
lbl_fn_80052760_000030A4:
    cmpwi r27, 0x1
    li r28, 0x0
    beq lbl_fn_80052760_000030F4
    addi r3, r1, 0x17c
    bl fn_805F9920
    fcmpo cr0, f1, f14
    cror eq, lt, eq
    bne lbl_fn_80052760_000030F4
    lfs f2, 0x8(r25)
    addi r3, r1, 0xa4
    psq_l f1, 0x0(r25), 0, 0
    addi r4, r1, 0x17c
    psq_st f1, 0x0(r3), 0, 0
    addi r3, r1, 0x98
    psq_l f1, 0x0(r4), 0, 0
    li r28, 0x1
    stfs f2, 0xac(r1)
    lfs f2, 0x184(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0xa0(r1)
lbl_fn_80052760_000030F4:
    cmpwi r27, 0x2
    beq lbl_fn_80052760_00003140
    addi r3, r1, 0x170
    bl fn_805F9920
    fcmpo cr0, f1, f14
    cror eq, lt, eq
    bne lbl_fn_80052760_00003140
    lfs f2, 0x8(r26)
    addi r3, r1, 0xa4
    psq_l f1, 0x0(r26), 0, 0
    addi r4, r1, 0x170
    psq_st f1, 0x0(r3), 0, 0
    addi r3, r1, 0x98
    psq_l f1, 0x0(r4), 0, 0
    li r28, 0x2
    stfs f2, 0xac(r1)
    lfs f2, 0x178(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0xa0(r1)
lbl_fn_80052760_00003140:
    cmpwi r27, 0x0
    beq lbl_fn_80052760_0000318C
    addi r3, r1, 0x164
    bl fn_805F9920
    fcmpo cr0, f1, f14
    cror eq, lt, eq
    bne lbl_fn_80052760_0000318C
    lfs f2, 0x8(r31)
    addi r3, r1, 0xa4
    psq_l f1, 0x0(r31), 0, 0
    addi r4, r1, 0x164
    psq_st f1, 0x0(r3), 0, 0
    addi r3, r1, 0x98
    psq_l f1, 0x0(r4), 0, 0
    li r28, 0x3
    stfs f2, 0xac(r1)
    lfs f2, 0x16c(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0xa0(r1)
lbl_fn_80052760_0000318C:
    cmpwi r28, 0x0
    bne lbl_fn_80052760_0000319C
    li r3, 0x0
    b lbl_fn_80052760_00003254
lbl_fn_80052760_0000319C:
    cmpwi r29, 0x0
    beq lbl_fn_80052760_00003250
    addi r3, r1, 0x98
    li r0, 0x3
    addi r28, r1, 0x8c
    psq_l f1, 0x0(r3), 0, 0
    stw r0, 0x0(r29)
    mr r3, r28
    lfs f2, 0xa0(r1)
    mr r4, r28
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x94(r1)
    bl fn_805F98D0
    lfs f4, 0x94(r1)
    addi r3, r1, 0xa4
    lfs f3, 0x90(r1)
    addi r4, r1, 0x80
    fmuls f5, f4, f31
    lfs f0, 0x8c(r1)
    fmuls f6, f3, f31
    lfs f4, 0xac(r1)
    fmuls f7, f0, f31
    lfs f3, 0xa8(r1)
    lfs f0, 0xa4(r1)
    fadds f4, f4, f5
    fadds f3, f3, f6
    lfs f2, 0xac(r1)
    fadds f0, f0, f7
    stfs f2, 0xc(r29)
    fmr f2, f4
    psq_l f1, 0x0(r3), 0, 0
    stfs f0, 0x80(r1)
    stfs f3, 0x84(r1)
    psq_st f1, 0x4(r29), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x10(r29), 0, 0
    stfs f2, 0x18(r29)
    psq_l f1, 0x0(r28), 0, 0
    lfs f2, 0x94(r1)
    stfs f7, 0x8(r1)
    stfs f6, 0xc(r1)
    stfs f5, 0x10(r1)
    stfs f4, 0x88(r1)
    psq_st f1, 0x1c(r29), 0, 0
    stfs f2, 0x24(r29)
lbl_fn_80052760_00003250:
    li r3, 0x1
lbl_fn_80052760_00003254:
    addi r11, r1, 0x250
    psq_l f31, 0x368(r1), 0, 0
    lfd f31, 0x360(r1)
    psq_l f30, 0x358(r1), 0, 0
    lfd f30, 0x350(r1)
    psq_l f29, 0x348(r1), 0, 0
    lfd f29, 0x340(r1)
    psq_l f28, 0x338(r1), 0, 0
    lfd f28, 0x330(r1)
    psq_l f27, 0x328(r1), 0, 0
    lfd f27, 0x320(r1)
    psq_l f26, 0x318(r1), 0, 0
    lfd f26, 0x310(r1)
    psq_l f25, 0x308(r1), 0, 0
    lfd f25, 0x300(r1)
    psq_l f24, 0x2f8(r1), 0, 0
    lfd f24, 0x2f0(r1)
    psq_l f23, 0x2e8(r1), 0, 0
    lfd f23, 0x2e0(r1)
    psq_l f22, 0x2d8(r1), 0, 0
    lfd f22, 0x2d0(r1)
    psq_l f21, 0x2c8(r1), 0, 0
    lfd f21, 0x2c0(r1)
    psq_l f20, 0x2b8(r1), 0, 0
    lfd f20, 0x2b0(r1)
    psq_l f19, 0x2a8(r1), 0, 0
    lfd f19, 0x2a0(r1)
    psq_l f18, 0x298(r1), 0, 0
    lfd f18, 0x290(r1)
    psq_l f17, 0x288(r1), 0, 0
    lfd f17, 0x280(r1)
    psq_l f16, 0x278(r1), 0, 0
    lfd f16, 0x270(r1)
    psq_l f15, 0x268(r1), 0, 0
    lfd f15, 0x260(r1)
    psq_l f14, 0x258(r1), 0, 0
    lfd f14, 0x250(r1)
    bl _restgpr_25
    lwz r0, 0x374(r1)
    mtlr r0
    addi r1, r1, 0x370
    blr
}

asm void fn_80053254(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    stfd f30, 0x30(r1)
    psq_st f30, 0x38(r1), 0, 0
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    mr r30, r5
    stw r29, 0x24(r1)
    mr r29, r4
    stw r28, 0x20(r1)
    mr r28, r3
    beq lbl_fn_80053254_00003344
    li r0, 0x0
    stw r0, 0x0(r3)
lbl_fn_80053254_00003344:
    lfs f3, 0x38(r5)
    addi r3, r1, 0x8
    lfs f0, 0x8(r4)
    lfs f5, 0x34(r5)
    fsubs f6, f3, f0
    lfs f4, 0x4(r4)
    lfs f3, 0x30(r5)
    lfs f0, 0x0(r4)
    fsubs f4, f5, f4
    lfs f31, 0xc(r4)
    lfs f30, 0x3c(r5)
    fsubs f0, f3, f0
    stfs f0, 0x8(r1)
    stfs f4, 0xc(r1)
    stfs f6, 0x10(r1)
    bl fn_805F9920
    fadds f0, f31, f30
    fmuls f0, f0, f0
    fcmpo cr0, f1, f0
    ble lbl_fn_80053254_0000339C
    li r3, 0x0
    b lbl_fn_80053254_00003414
lbl_fn_80053254_0000339C:
    addi r31, r30, 0x24
    addi r4, r1, 0x8
    mr r3, r31
    bl fn_805F9990
    fneg f2, f1
    fmuls f0, f31, f31
    fmuls f3, f2, f2
    fcmpo cr0, f3, f0
    ble lbl_fn_80053254_000033C8
    li r3, 0x0
    b lbl_fn_80053254_00003414
lbl_fn_80053254_000033C8:
    fmr f1, f31
    mr r3, r28
    mr r4, r29
    mr r5, r30
    mr r8, r31
    addi r6, r30, 0xc
    addi r7, r30, 0x18
    bl fn_80052760
    cmpwi r3, 0x0
    beq lbl_fn_80053254_00003410
    cmpwi r28, 0x0
    beq lbl_fn_80053254_00003408
    psq_l f1, 0x24(r30), 0, 0
    lfs f2, 0x2c(r30)
    stfs f2, 0x30(r28)
    psq_st f1, 0x28(r28), 0, 0
lbl_fn_80053254_00003408:
    li r3, 0x1
    b lbl_fn_80053254_00003414
lbl_fn_80053254_00003410:
    li r3, 0x0
lbl_fn_80053254_00003414:
    lwz r0, 0x54(r1)
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    psq_l f30, 0x38(r1), 0, 0
    lfd f30, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8005339C(void)
{
    nofralloc
    clrlwi r11, r1, 26
    mr r12, r1
    subfic r11, r11, -0x140
    stwux r1, r1, r11
    mflr r0
    subi r11, r12, 0x20
    stw r0, 0x4(r12)
    stfd f31, -0x10(r12)
    psq_st f31, -0x8(r12), 0, 0
    stfd f30, -0x20(r12)
    psq_st f30, -0x18(r12), 0, 0
    bl _savegpr_24
    fmr f30, f1
    cmpwi r3, 0x0
    mr r24, r3
    mr r25, r4
    mr r26, r5
    mr r27, r6
    beq lbl_fn_8005339C_00003498
    li r0, 0x0
    stw r0, 0x0(r3)
lbl_fn_8005339C_00003498:
    lfs f31, 0xc(r4)
    addi r4, r1, 0x88
    psq_l f1, 0x30(r5), 0, 0
    mr r3, r27
    lfs f2, 0x38(r5)
    mr r5, r4
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x90(r1)
    bl fn_805F93C0
    lfs f7, 0x90(r1)
    addi r3, r1, 0x7c
    lfs f0, 0x8(r25)
    lfs f9, 0x8c(r1)
    fsubs f11, f7, f0
    lfs f8, 0x4(r25)
    lfs f0, 0x0(r25)
    lfs f7, 0x88(r1)
    fsubs f8, f9, f8
    lfs f10, 0x3c(r26)
    fsubs f0, f7, f0
    stfs f11, 0x84(r1)
    fmuls f30, f10, f30
    stfs f8, 0x80(r1)
    stfs f0, 0x7c(r1)
    bl fn_805F9920
    fadds f0, f31, f30
    fmuls f0, f0, f0
    fcmpo cr0, f1, f0
    ble lbl_fn_8005339C_00003514
    li r3, 0x0
    b lbl_fn_8005339C_00003698
lbl_fn_8005339C_00003514:
    psq_l f1, 0x0(r27), 0, 0
    addi r31, r1, 0x70
    psq_l f2, 0x8(r27), 0, 0
    addi r3, r1, 0x98
    psq_l f3, 0x10(r27), 0, 0
    mr r4, r31
    psq_l f4, 0x18(r27), 0, 0
    mr r5, r31
    psq_l f5, 0x20(r27), 0, 0
    psq_l f6, 0x28(r27), 0, 0
    psq_st f6, 0x28(r3), 0, 0
    lfs f0, lbl_80880940
    psq_st f2, 0x8(r3), 0, 0
    lfs f2, 0x2c(r26)
    psq_st f4, 0x18(r3), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x24(r26), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    stfs f0, 0xa4(r1)
    stfs f0, 0xb4(r1)
    stfs f0, 0xc4(r1)
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x78(r1)
    bl fn_805F93C0
    mr r3, r31
    mr r4, r31
    bl fn_805F98D0
    lfs f7, 0x8(r25)
    mr r3, r31
    lfs f0, 0x90(r1)
    addi r4, r1, 0x40
    lfs f9, 0x4(r25)
    fsubs f10, f7, f0
    lfs f8, 0x8c(r1)
    lfs f7, 0x0(r25)
    lfs f0, 0x88(r1)
    fsubs f8, f9, f8
    stfs f10, 0x48(r1)
    fsubs f0, f7, f0
    stfs f8, 0x44(r1)
    stfs f0, 0x40(r1)
    bl fn_805F9990
    fmuls f0, f31, f31
    fmuls f7, f1, f1
    fmr f30, f1
    fcmpo cr0, f7, f0
    ble lbl_fn_8005339C_000035DC
    li r3, 0x0
    b lbl_fn_8005339C_00003698
lbl_fn_8005339C_000035DC:
    addi r30, r1, 0x64
    psq_l f1, 0x0(r26), 0, 0
    lfs f2, 0x8(r26)
    addi r29, r1, 0x58
    psq_st f1, 0x0(r30), 0, 0
    addi r28, r1, 0x4c
    psq_l f1, 0xc(r26), 0, 0
    mr r3, r27
    stfs f2, 0x6c(r1)
    mr r4, r30
    lfs f2, 0x14(r26)
    mr r5, r30
    psq_st f1, 0x0(r29), 0, 0
    psq_l f1, 0x18(r26), 0, 0
    stfs f2, 0x60(r1)
    lfs f2, 0x20(r26)
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x54(r1)
    bl fn_805F93C0
    mr r3, r27
    mr r4, r29
    mr r5, r29
    bl fn_805F93C0
    mr r3, r27
    mr r4, r28
    mr r5, r28
    bl fn_805F93C0
    fmr f1, f31
    mr r3, r24
    fmr f2, f30
    mr r4, r25
    mr r5, r30
    mr r6, r29
    mr r7, r28
    mr r8, r31
    bl fn_80052760
    cmpwi r3, 0x0
    beq lbl_fn_8005339C_00003694
    cmpwi r24, 0x0
    beq lbl_fn_8005339C_0000368C
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x78(r1)
    stfs f2, 0x30(r24)
    psq_st f1, 0x28(r24), 0, 0
lbl_fn_8005339C_0000368C:
    li r3, 0x1
    b lbl_fn_8005339C_00003698
lbl_fn_8005339C_00003694:
    li r3, 0x0
lbl_fn_8005339C_00003698:
    lwz r10, 0x0(r1)
    subi r11, r10, 0x20
    psq_l f31, -0x8(r10), 0, 0
    lfd f31, -0x10(r10)
    psq_l f30, -0x18(r10), 0, 0
    lfd f30, -0x20(r10)
    bl _restgpr_24
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}
