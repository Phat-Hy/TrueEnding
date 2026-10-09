#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_14(void);
extern void _restgpr_18(void);
extern void _restgpr_21(void);
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_14(void);
extern void _savegpr_18(void);
extern void _savegpr_21(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void fn_8004FF58(void);
extern void fn_800C122C(void);
extern void fn_802301EC(void);
extern void fn_80230780(void);
extern void fn_80231508(void);
extern void fn_80231754(void);
extern void fn_80234C84(void);
extern void fn_80236B84(void);
extern void fn_80236FFC(void);
extern void fn_80237B8C(void);
extern void fn_805F89F0(void);
extern void fn_805F8CA0(void);
extern void fn_805F8E70(void);
extern void fn_805F9050(void);
extern void fn_805F90D0(void);
extern void fn_805F9160(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_805F99B0(void);
extern void fn_80680CF8(void);
extern void fn_8068A850(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);

/* External data declarations */
extern u8 lbl_80742F68[];
extern u8 lbl_80742F70[];
extern u8 lbl_80742F78[];
extern u8 lbl_807C8290[];
extern u8 lbl_807C82C0[];

/* Small data declarations */
extern u32 lbl_8087DBE0;
extern u32 lbl_8087DBE4;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087EFB4;
extern u32 lbl_808830D0;
extern u32 lbl_808830D4;
extern u32 lbl_808830D8;
extern u32 lbl_808830DC;
extern u32 lbl_808830E0;
extern u32 lbl_808830E4;
extern u32 lbl_808830E8;
extern u32 lbl_808830EC;
extern u32 lbl_808830F0;
extern u32 lbl_808830F4;
extern u32 lbl_808830F8;
extern u32 lbl_808830FC;

/* Function declarations */
void fn_8022C9C8(void);
void fn_8022D078(void);
void fn_8022D328(void);
void fn_8022D478(void);
void fn_8022D754(void);
void fn_8022D790(void);
void fn_8022DA70(void);
void fn_8022DD1C(void);

asm void fn_8022C9C8(void)
{
    nofralloc
    stwu r1, -0x530(r1)
    mflr r0
    stw r0, 0x534(r1)
    addi r11, r1, 0x510
    stfd f31, 0x520(r1)
    psq_st f31, 0x528(r1), 0, 0
    stfd f30, 0x510(r1)
    psq_st f30, 0x518(r1), 0, 0
    bl _savegpr_25
    cmpwi r4, 0x0
    mr r26, r3
    mr r29, r4
    mr r30, r5
    mr r31, r6
    mr r25, r7
    bne lbl_fn_8022C9C8_0000007C
    lfs f7, lbl_808830D0
    addi r29, r1, 0x488
    lfs f0, lbl_808830D4
    stfs f7, 0x4b4(r1)
    stfs f7, 0x4ac(r1)
    stfs f7, 0x4a8(r1)
    stfs f7, 0x4a4(r1)
    stfs f7, 0x4a0(r1)
    stfs f7, 0x498(r1)
    stfs f7, 0x494(r1)
    stfs f7, 0x490(r1)
    stfs f7, 0x48c(r1)
    stfs f0, 0x4b0(r1)
    stfs f0, 0x49c(r1)
    stfs f0, 0x488(r1)
lbl_fn_8022C9C8_0000007C:
    cmpwi r5, 0x0
    bne lbl_fn_8022C9C8_00000088
    addi r30, r1, 0x4b8
lbl_fn_8022C9C8_00000088:
    lwz r0, 0x0(r3)
    cmplwi r0, 0x1
    beq lbl_fn_8022C9C8_000000B8
    cmplwi r0, 0x3
    beq lbl_fn_8022C9C8_0000031C
    cmplwi r0, 0x4
    beq lbl_fn_8022C9C8_00000658
    cmplwi r0, 0x5
    beq lbl_fn_8022C9C8_000003E0
    cmplwi r0, 0x6
    beq lbl_fn_8022C9C8_000005C8
    b lbl_fn_8022C9C8_00000628
lbl_fn_8022C9C8_000000B8:
    lwz r0, 0x8(r3)
    lwz r4, lbl_8087EFB4
    clrlwi. r0, r0, 31
    beq lbl_fn_8022C9C8_00000118
    lfs f1, 0x10c(r4)
    addi r3, r1, 0x398
    lfs f2, 0x110(r4)
    lfs f3, 0x114(r4)
    bl fn_805F90D0
    addi r4, r1, 0x398
    addi r3, r1, 0x458
    psq_l f1, 0x0(r4), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f4, 0x18(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    psq_st f6, 0x28(r3), 0, 0
    b lbl_fn_8022C9C8_000002D4
lbl_fn_8022C9C8_00000118:
    lfs f7, lbl_808830D0
    addi r25, r4, 0x130
    lfs f0, lbl_808830D4
    addi r27, r4, 0x10c
    stfs f7, 0x124(r1)
    addi r28, r1, 0x458
    addi r26, r1, 0xf8
    stfs f7, 0x11c(r1)
    stfs f7, 0x118(r1)
    stfs f7, 0x114(r1)
    stfs f7, 0x110(r1)
    stfs f7, 0x108(r1)
    stfs f7, 0x104(r1)
    stfs f7, 0x100(r1)
    stfs f7, 0xfc(r1)
    stfs f0, 0x120(r1)
    stfs f0, 0x10c(r1)
    stfs f0, 0xf8(r1)
    lfs f1, 0x134(r4)
    fcmpu cr0, f7, f1
    beq lbl_fn_8022C9C8_000001BC
    addi r3, r1, 0x218
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r26
    addi r4, r1, 0x218
    addi r5, r1, 0x248
    bl fn_805F89F0
    addi r3, r1, 0x248
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r26), 0, 0
    psq_st f2, 0x8(r26), 0, 0
    psq_st f3, 0x10(r26), 0, 0
    psq_st f4, 0x18(r26), 0, 0
    psq_st f5, 0x20(r26), 0, 0
    psq_st f6, 0x28(r26), 0, 0
lbl_fn_8022C9C8_000001BC:
    lfs f0, lbl_808830D0
    lfs f1, 0x0(r25)
    fcmpu cr0, f0, f1
    beq lbl_fn_8022C9C8_0000021C
    addi r3, r1, 0x1b8
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r26
    addi r4, r1, 0x1b8
    addi r5, r1, 0x1e8
    bl fn_805F89F0
    addi r3, r1, 0x1e8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r26), 0, 0
    psq_st f2, 0x8(r26), 0, 0
    psq_st f3, 0x10(r26), 0, 0
    psq_st f4, 0x18(r26), 0, 0
    psq_st f5, 0x20(r26), 0, 0
    psq_st f6, 0x28(r26), 0, 0
lbl_fn_8022C9C8_0000021C:
    lfs f0, lbl_808830D0
    lfs f1, 0x8(r25)
    fcmpu cr0, f0, f1
    beq lbl_fn_8022C9C8_0000027C
    addi r3, r1, 0x158
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r26
    addi r4, r1, 0x158
    addi r5, r1, 0x188
    bl fn_805F89F0
    addi r3, r1, 0x188
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r26), 0, 0
    psq_st f2, 0x8(r26), 0, 0
    psq_st f3, 0x10(r26), 0, 0
    psq_st f4, 0x18(r26), 0, 0
    psq_st f5, 0x20(r26), 0, 0
    psq_st f6, 0x28(r26), 0, 0
lbl_fn_8022C9C8_0000027C:
    lfs f1, 0x0(r27)
    addi r3, r1, 0x128
    lfs f2, 0x4(r27)
    lfs f3, 0x8(r27)
    bl fn_805F90D0
    mr r4, r26
    addi r3, r1, 0x128
    addi r5, r1, 0xc8
    bl fn_805F89F0
    addi r3, r1, 0xc8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    psq_st f2, 0x8(r28), 0, 0
    psq_st f3, 0x10(r28), 0, 0
    psq_st f4, 0x18(r28), 0, 0
    psq_st f5, 0x20(r28), 0, 0
    psq_st f6, 0x28(r28), 0, 0
lbl_fn_8022C9C8_000002D4:
    mr r4, r29
    addi r3, r1, 0x458
    addi r5, r1, 0x368
    bl fn_805F89F0
    addi r3, r1, 0x368
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
    b lbl_fn_8022C9C8_00000658
lbl_fn_8022C9C8_0000031C:
    lwz r0, 0x8(r3)
    clrlwi. r0, r0, 31
    beq lbl_fn_8022C9C8_00000394
    lwz r4, 0x4(r3)
    addi r3, r1, 0x428
    lfs f3, 0x34(r4)
    lfs f2, 0x24(r4)
    lfs f1, 0x14(r4)
    stfs f1, 0x50(r1)
    stfs f2, 0x54(r1)
    stfs f3, 0x58(r1)
    bl fn_805F90D0
    mr r4, r29
    addi r3, r1, 0x428
    addi r5, r1, 0x338
    bl fn_805F89F0
    addi r3, r1, 0x338
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
    b lbl_fn_8022C9C8_00000658
lbl_fn_8022C9C8_00000394:
    lwz r3, 0x4(r3)
    mr r4, r29
    addi r5, r1, 0x308
    addi r3, r3, 0x8
    bl fn_805F89F0
    addi r3, r1, 0x308
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
    b lbl_fn_8022C9C8_00000658
lbl_fn_8022C9C8_000003E0:
    lwz r0, 0x8(r3)
    clrlwi. r0, r0, 31
    beq lbl_fn_8022C9C8_00000580
    lwz r4, 0x4(r3)
    addi r3, r1, 0x3f8
    lfs f3, 0x2c(r4)
    lfs f2, 0x1c(r4)
    lfs f1, 0xc(r4)
    stfs f1, 0x44(r1)
    stfs f2, 0x48(r1)
    stfs f3, 0x4c(r1)
    bl fn_805F90D0
    rlwinm. r0, r25, 0, 25, 25
    beq lbl_fn_8022C9C8_00000538
    lwz r26, 0x4(r26)
    addi r3, r1, 0x2c
    lfs f0, 0x28(r26)
    lfs f7, 0x18(r26)
    lfs f8, 0x8(r26)
    stfs f8, 0x2c(r1)
    stfs f7, 0x30(r1)
    stfs f0, 0x34(r1)
    bl fn_805F9940
    lfs f0, 0x24(r26)
    fmr f30, f1
    lfs f7, 0x14(r26)
    addi r3, r1, 0x20
    lfs f8, 0x4(r26)
    stfs f8, 0x20(r1)
    stfs f7, 0x24(r1)
    stfs f0, 0x28(r1)
    bl fn_805F9940
    lfs f0, 0x20(r26)
    fmr f31, f1
    lfs f7, 0x10(r26)
    addi r3, r1, 0x14
    lfs f8, 0x0(r26)
    stfs f8, 0x14(r1)
    stfs f7, 0x18(r1)
    stfs f0, 0x1c(r1)
    bl fn_805F9940
    frsp f7, f31
    stfs f1, 0x5c(r1)
    frsp f0, f30
    stfs f31, 0x60(r1)
    fcmpo cr0, f7, f0
    stfs f30, 0x64(r1)
    ble lbl_fn_8022C9C8_000004A4
    b lbl_fn_8022C9C8_000004A8
lbl_fn_8022C9C8_000004A4:
    fmr f7, f0
lbl_fn_8022C9C8_000004A8:
    lfs f8, 0x5c(r1)
    fcmpo cr0, f8, f7
    ble lbl_fn_8022C9C8_000004B8
    b lbl_fn_8022C9C8_000004D0
lbl_fn_8022C9C8_000004B8:
    lfs f8, 0x60(r1)
    lfs f0, 0x64(r1)
    fcmpo cr0, f8, f0
    ble lbl_fn_8022C9C8_000004CC
    b lbl_fn_8022C9C8_000004D0
lbl_fn_8022C9C8_000004CC:
    fmr f8, f0
lbl_fn_8022C9C8_000004D0:
    frsp f1, f8
    stfs f8, 0x8(r1)
    addi r3, r1, 0x68
    stfs f8, 0xc(r1)
    fmr f2, f1
    fmr f3, f1
    stfs f8, 0x10(r1)
    bl fn_805F9160
    addi r3, r1, 0x3f8
    addi r4, r1, 0x68
    addi r5, r1, 0x98
    bl fn_805F89F0
    addi r4, r1, 0x98
    addi r3, r1, 0x3f8
    psq_l f1, 0x0(r4), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f4, 0x18(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    psq_st f6, 0x28(r3), 0, 0
lbl_fn_8022C9C8_00000538:
    mr r4, r29
    addi r3, r1, 0x3f8
    addi r5, r1, 0x2d8
    bl fn_805F89F0
    addi r3, r1, 0x2d8
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
    b lbl_fn_8022C9C8_00000658
lbl_fn_8022C9C8_00000580:
    lwz r3, 0x4(r3)
    mr r4, r29
    addi r5, r1, 0x2a8
    bl fn_805F89F0
    addi r3, r1, 0x2a8
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
    b lbl_fn_8022C9C8_00000658
lbl_fn_8022C9C8_000005C8:
    lwz r4, 0x4(r3)
    addi r3, r1, 0x3c8
    lfs f1, 0x0(r4)
    lfs f2, 0x4(r4)
    lfs f3, 0x8(r4)
    bl fn_805F90D0
    mr r4, r29
    addi r3, r1, 0x3c8
    addi r5, r1, 0x278
    bl fn_805F89F0
    addi r3, r1, 0x278
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
    b lbl_fn_8022C9C8_00000658
lbl_fn_8022C9C8_00000628:
    psq_l f2, 0x8(r29), 0, 0
    psq_l f3, 0x10(r29), 0, 0
    psq_l f4, 0x18(r29), 0, 0
    psq_l f5, 0x20(r29), 0, 0
    psq_l f6, 0x28(r29), 0, 0
    psq_l f1, 0x0(r29), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_8022C9C8_00000658:
    cmpwi r31, 0x0
    beq lbl_fn_8022C9C8_00000688
    lfs f0, 0x1c(r30)
    addi r3, r1, 0x38
    lfs f7, 0xc(r30)
    lfs f2, 0x2c(r30)
    stfs f7, 0x38(r1)
    stfs f0, 0x3c(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x40(r1)
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x8(r31)
lbl_fn_8022C9C8_00000688:
    addi r11, r1, 0x510
    psq_l f31, 0x528(r1), 0, 0
    lfd f31, 0x520(r1)
    psq_l f30, 0x518(r1), 0, 0
    lfd f30, 0x510(r1)
    bl _restgpr_25
    lwz r0, 0x534(r1)
    mtlr r0
    addi r1, r1, 0x530
    blr
}

asm void fn_8022D078(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    addi r11, r1, 0x60
    stfd f31, 0xa0(r1)
    psq_st f31, 0xa8(r1), 0, 0
    stfd f30, 0x90(r1)
    psq_st f30, 0x98(r1), 0, 0
    stfd f29, 0x80(r1)
    psq_st f29, 0x88(r1), 0, 0
    stfd f28, 0x70(r1)
    psq_st f28, 0x78(r1), 0, 0
    stfd f27, 0x60(r1)
    psq_st f27, 0x68(r1), 0, 0
    bl _savegpr_21
    lwz r5, lbl_8087EFA8
    lis r4, lbl_80742F78@ha
    lis r21, lbl_807C8290@ha
    lfs f31, lbl_808830D4
    lfs f0, 0x3a4(r5)
    li r30, 0x1
    lfd f27, lbl_80742F78@l(r4)
    mr r25, r3
    fmuls f29, f1, f0
    stfs f31, lbl_8087DBE0
    lfs f28, lbl_808830D0
    addi r29, r1, 0x14
    stw r30, lbl_8087DBE4
    addi r28, r1, 0x8
    addi r27, r21, lbl_807C8290@l
    li r23, 0x0
    li r24, -0x1
    lis r22, 0x4330
    lis r31, lbl_80742F70@ha
    b lbl_fn_8022D078_00000918
lbl_fn_8022D078_0000073C:
    lwz r3, 0x68(r25)
    fcmpo cr0, f29, f31
    addi r0, r3, 0x1
    stw r0, 0x68(r25)
    bge lbl_fn_8022D078_00000788
    stfs f29, lbl_8087DBE0
    lfs f0, 0x48(r25)
    fadds f0, f0, f29
    stfs f0, 0x48(r25)
    fcmpo cr0, f0, f31
    bge lbl_fn_8022D078_0000076C
    stw r23, lbl_8087DBE4
lbl_fn_8022D078_0000076C:
    lfs f1, 0x48(r25)
    lfd f2, lbl_80742F70@l(r31)
    bl fn_8068AEA8
    frsp f0, f1
    lfs f29, lbl_808830D0
    stfs f0, 0x48(r25)
    b lbl_fn_8022D078_0000078C
lbl_fn_8022D078_00000788:
    fsubs f29, f29, f31
lbl_fn_8022D078_0000078C:
    lwz r26, 0xc(r25)
    lfs f30, lbl_8087DBE0
    b lbl_fn_8022D078_00000910
lbl_fn_8022D078_00000798:
    lfs f0, 0xdc(r26)
    fmuls f0, f30, f0
    stfs f0, lbl_8087DBE0
    lhz r3, 0x18(r26)
    rlwinm r0, r3, 0, 30, 30
    cmpwi r0, 0x2
    beq lbl_fn_8022D078_000007D8
    lbz r0, 0x1b(r26)
    cmpwi r0, 0x0
    bne lbl_fn_8022D078_000007D8
    rlwinm r0, r3, 0, 24, 24
    cmpwi r0, 0x80
    bne lbl_fn_8022D078_000007E0
    rlwinm r0, r3, 0, 17, 17
    cmpwi r0, 0x4000
    beq lbl_fn_8022D078_000007E0
lbl_fn_8022D078_000007D8:
    lwz r26, 0x4(r26)
    b lbl_fn_8022D078_00000910
lbl_fn_8022D078_000007E0:
    addi r6, r26, 0x9c
    lwz r5, 0xc0(r26)
    psq_l f1, 0x0(r6), 0, 0
    addi r3, r26, 0x8
    lfs f2, 0xa4(r26)
    addi r4, r26, 0x3c
    lwz r7, 0x4c(r5)
    addi r5, r21, lbl_807C8290@l
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x1c(r1)
    bl fn_8022C9C8
    lfs f7, 0x1c(r1)
    mr r3, r25
    lfs f0, 0xa4(r26)
    mr r4, r26
    lfs f9, 0x18(r1)
    addi r6, r21, lbl_807C8290@l
    fsubs f2, f7, f0
    lfs f8, 0xa0(r26)
    lfs f7, 0x14(r1)
    lfs f0, 0x9c(r26)
    fsubs f8, f9, f8
    lwz r5, 0xc0(r26)
    fsubs f0, f7, f0
    stfs f8, 0xc(r1)
    stfs f0, 0x8(r1)
    psq_l f1, 0x0(r28), 0, 0
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x1c(r1)
    bl fn_802301EC
    lwz r4, 0xc4(r26)
    mr r3, r26
    addi r5, r21, lbl_807C8290@l
    bl fn_80231754
    lbz r0, 0x1a(r26)
    lwz r4, 0x4(r26)
    clrlwi. r0, r0, 25
    bne lbl_fn_8022D078_00000898
    lwz r0, 0xc4(r26)
    cmpwi r0, 0x0
    bne lbl_fn_8022D078_00000898
    cmpwi r26, 0x0
    beq lbl_fn_8022D078_0000090C
    stb r30, 0x1b(r26)
    b lbl_fn_8022D078_0000090C
lbl_fn_8022D078_00000898:
    lfs f7, 0x1c(r26)
    lfs f0, lbl_8087DBE0
    stw r22, 0x20(r1)
    fadds f7, f7, f0
    stfs f7, 0x1c(r26)
    lwz r3, 0x14(r26)
    xoris r0, r3, 0x8000
    stw r0, 0x24(r1)
    lfd f0, 0x20(r1)
    fsubs f0, f0, f27
    fcmpo cr0, f7, f0
    cror eq, gt, eq
    bne lbl_fn_8022D078_0000090C
    cmpwi r3, 0x0
    blt lbl_fn_8022D078_0000090C
    stw r23, 0x8(r26)
    psq_l f2, 0x8(r27), 0, 0
    psq_l f3, 0x10(r27), 0, 0
    psq_l f4, 0x18(r27), 0, 0
    psq_l f5, 0x20(r27), 0, 0
    psq_l f6, 0x28(r27), 0, 0
    psq_l f1, 0x0(r27), 0, 0
    psq_st f1, 0x3c(r26), 0, 0
    psq_st f2, 0x44(r26), 0, 0
    psq_st f3, 0x4c(r26), 0, 0
    psq_st f4, 0x54(r26), 0, 0
    psq_st f5, 0x5c(r26), 0, 0
    psq_st f6, 0x64(r26), 0, 0
    stw r24, 0x14(r26)
lbl_fn_8022D078_0000090C:
    mr r26, r4
lbl_fn_8022D078_00000910:
    cmpwi r26, 0x0
    bne lbl_fn_8022D078_00000798
lbl_fn_8022D078_00000918:
    fcmpo cr0, f29, f28
    bgt lbl_fn_8022D078_0000073C
    addi r11, r1, 0x60
    psq_l f31, 0xa8(r1), 0, 0
    lfd f31, 0xa0(r1)
    psq_l f30, 0x98(r1), 0, 0
    lfd f30, 0x90(r1)
    psq_l f29, 0x88(r1), 0, 0
    lfd f29, 0x80(r1)
    psq_l f28, 0x78(r1), 0, 0
    lfd f28, 0x70(r1)
    psq_l f27, 0x68(r1), 0, 0
    lfd f27, 0x60(r1)
    bl _restgpr_21
    lwz r0, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_8022D328(void)
{
    nofralloc
    lhz r6, 0x18(r3)
    rlwinm r0, r6, 0, 29, 29
    cmpwi r0, 0x4
    beq lbl_fn_8022D328_00000980
    rlwinm r5, r6, 0, 16, 16
    addis r0, r5, 0x0
    cmplwi r0, 0x8000
    beq lbl_fn_8022D328_00000988
lbl_fn_8022D328_00000980:
    li r3, 0x0
    blr
lbl_fn_8022D328_00000988:
    lwz r0, 0x38(r3)
    cmpw r0, r4
    beq lbl_fn_8022D328_0000099C
    li r3, 0x0
    blr
lbl_fn_8022D328_0000099C:
    lwz r4, lbl_8087EFB4
    lwz r3, 0xc0(r3)
    lwz r0, 0x2f8(r4)
    lwz r3, 0x4c(r3)
    cmpwi r0, 0x4
    rlwinm r4, r3, 0, 2, 3
    beq lbl_fn_8022D328_000009D4
    cmpwi r0, 0x6
    beq lbl_fn_8022D328_00000A0C
    cmpwi r0, 0x12
    beq lbl_fn_8022D328_00000A34
    cmpwi r0, 0x13
    beq lbl_fn_8022D328_00000A5C
    b lbl_fn_8022D328_00000A84
lbl_fn_8022D328_000009D4:
    rlwinm r0, r6, 0, 28, 28
    cmpwi r0, 0x8
    beq lbl_fn_8022D328_000009E8
    li r3, 0x0
    blr
lbl_fn_8022D328_000009E8:
    clrrwi r3, r3, 30
    subis r0, r3, 0x4000
    cmplwi r0, 0x0
    beq lbl_fn_8022D328_00000A04
    addis r0, r3, 0x8000
    cmplwi r0, 0x0
    bne lbl_fn_8022D328_00000AA8
lbl_fn_8022D328_00000A04:
    li r3, 0x0
    blr
lbl_fn_8022D328_00000A0C:
    rlwinm r0, r6, 0, 27, 27
    cmpwi r0, 0x10
    bne lbl_fn_8022D328_00000A20
    li r3, 0x0
    blr
lbl_fn_8022D328_00000A20:
    subis r0, r4, 0x1000
    cmplwi r0, 0x0
    beq lbl_fn_8022D328_00000AA8
    li r3, 0x0
    blr
lbl_fn_8022D328_00000A34:
    rlwinm r0, r6, 0, 27, 27
    cmpwi r0, 0x10
    bne lbl_fn_8022D328_00000A48
    li r3, 0x0
    blr
lbl_fn_8022D328_00000A48:
    subis r0, r4, 0x2000
    cmplwi r0, 0x0
    beq lbl_fn_8022D328_00000AA8
    li r3, 0x0
    blr
lbl_fn_8022D328_00000A5C:
    rlwinm r0, r6, 0, 27, 27
    cmpwi r0, 0x10
    bne lbl_fn_8022D328_00000A70
    li r3, 0x0
    blr
lbl_fn_8022D328_00000A70:
    subis r0, r4, 0x3000
    cmplwi r0, 0x0
    beq lbl_fn_8022D328_00000AA8
    li r3, 0x0
    blr
lbl_fn_8022D328_00000A84:
    rlwinm r0, r6, 0, 27, 27
    cmpwi r0, 0x10
    bne lbl_fn_8022D328_00000A98
    li r3, 0x0
    blr
lbl_fn_8022D328_00000A98:
    cmpwi r4, 0x0
    beq lbl_fn_8022D328_00000AA8
    li r3, 0x0
    blr
lbl_fn_8022D328_00000AA8:
    li r3, 0x1
    blr
}

asm void fn_8022D478(void)
{
    nofralloc
    stwu r1, -0x140(r1)
    mflr r0
    stw r0, 0x144(r1)
    addi r11, r1, 0x140
    bl _savegpr_18
    lwz r31, lbl_8087EFB4
    mr r19, r3
    lwz r22, 0xc(r3)
    mr r20, r4
lbl_fn_8022D478_00000AD4:
    lwz r0, 0x74(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8022D478_00000AD4
    li r0, 0x1
    stw r0, 0x74(r3)
    addi r30, r1, 0xd8
    addi r29, r1, 0xa8
    psq_l f1, 0x15c(r31), 0, 0
    addi r27, r1, 0x28
    psq_l f2, 0x164(r31), 0, 0
    addi r28, r1, 0x18
    psq_l f3, 0x16c(r31), 0, 0
    addi r26, r1, 0x38
    psq_l f4, 0x174(r31), 0, 0
    addi r25, r1, 0x78
    psq_l f5, 0x17c(r31), 0, 0
    addi r24, r1, 0x48
    psq_l f6, 0x184(r31), 0, 0
    addi r23, r1, 0x8
    psq_st f6, 0x28(r30), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_l f1, 0x1d4(r31), 0, 0
    psq_l f2, 0x1dc(r31), 0, 0
    psq_l f3, 0x1e4(r31), 0, 0
    psq_l f4, 0x1ec(r31), 0, 0
    psq_l f5, 0x1f4(r31), 0, 0
    psq_l f6, 0x1fc(r31), 0, 0
    psq_st f6, 0x28(r29), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    b lbl_fn_8022D478_00000D64
lbl_fn_8022D478_00000B6C:
    lwz r0, 0xc4(r22)
    cmpwi r0, 0x0
    beq lbl_fn_8022D478_00000D60
    mr r3, r22
    mr r4, r20
    bl fn_8022D328
    cmpwi r3, 0x0
    beq lbl_fn_8022D478_00000D60
    psq_l f1, 0x9c(r22), 0, 0
    lfs f2, 0xa4(r22)
    stfs f2, 0x40(r1)
    lwz r3, lbl_8087EFB4
    psq_st f1, 0x0(r26), 0, 0
    lfs f0, 0xcc(r22)
    stfs f0, 0x44(r1)
    lwz r0, 0x2f8(r3)
    lwz r21, 0x2fc(r3)
    cmpwi r0, 0x4
    bne lbl_fn_8022D478_00000C14
    psq_l f1, 0x0(r27), 0, 0
    mr r4, r28
    lfs f2, 0x30(r1)
    lfs f0, 0x34(r1)
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x20(r1)
    stfs f0, 0x24(r1)
    bl fn_800C122C
    cmpwi r3, 0x0
    mr r21, r3
    bne lbl_fn_8022D478_00000BEC
    lwz r3, lbl_8087EFB4
    lwz r21, 0x2fc(r3)
lbl_fn_8022D478_00000BEC:
    psq_l f1, 0x0(r26), 0, 0
    mr r4, r26
    lfs f2, 0x40(r1)
    mr r5, r26
    lfs f0, 0x44(r1)
    addi r3, r21, 0x124
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0x30(r1)
    stfs f0, 0x34(r1)
    bl fn_805F93C0
lbl_fn_8022D478_00000C14:
    addi r3, r31, 0x204
    addi r4, r1, 0x38
    bl fn_8004FF58
    cmpwi r3, 0x0
    beq lbl_fn_8022D478_00000D60
    lwz r3, lbl_8087EFB4
    lwz r0, 0x2f8(r3)
    cmpwi r0, 0x4
    bne lbl_fn_8022D478_00000CD0
    addi r3, r31, 0x15c
    addi r4, r21, 0x124
    addi r5, r1, 0x78
    bl fn_805F89F0
    psq_l f1, 0x0(r25), 0, 0
    mr r3, r24
    psq_l f2, 0x8(r25), 0, 0
    mr r4, r24
    psq_l f3, 0x10(r25), 0, 0
    psq_l f4, 0x18(r25), 0, 0
    psq_l f5, 0x20(r25), 0, 0
    psq_l f6, 0x28(r25), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
    psq_st f1, 0x0(r24), 0, 0
    psq_st f2, 0x8(r24), 0, 0
    psq_st f3, 0x10(r24), 0, 0
    psq_st f4, 0x18(r24), 0, 0
    psq_st f5, 0x20(r24), 0, 0
    psq_st f6, 0x28(r24), 0, 0
    bl fn_805F8CA0
    psq_l f1, 0x0(r24), 0, 0
    psq_l f2, 0x8(r24), 0, 0
    psq_l f3, 0x10(r24), 0, 0
    psq_l f4, 0x18(r24), 0, 0
    psq_l f5, 0x20(r24), 0, 0
    psq_l f6, 0x28(r24), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
    b lbl_fn_8022D478_00000D18
lbl_fn_8022D478_00000CD0:
    lwz r4, 0xc0(r22)
    lwz r0, 0x4c(r4)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_8022D478_00000D18
    psq_l f1, 0x0(r27), 0, 0
    mr r4, r23
    lfs f2, 0x30(r1)
    lfs f0, 0x34(r1)
    psq_st f1, 0x0(r23), 0, 0
    stfs f2, 0x10(r1)
    stfs f0, 0x14(r1)
    bl fn_800C122C
    cmpwi r3, 0x0
    mr r21, r3
    bne lbl_fn_8022D478_00000D18
    lwz r3, lbl_8087EFB4
    lwz r21, 0x2fc(r3)
lbl_fn_8022D478_00000D18:
    lhz r0, 0x18(r22)
    ori r0, r0, 0x4000
    sth r0, 0x18(r22)
    lwz r18, 0xc4(r22)
    b lbl_fn_8022D478_00000D58
lbl_fn_8022D478_00000D2C:
    lwz r0, 0x190(r18)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_8022D478_00000D54
    mr r3, r22
    mr r4, r18
    mr r7, r21
    addi r5, r1, 0xd8
    addi r6, r1, 0xa8
    bl fn_8022DD1C
lbl_fn_8022D478_00000D54:
    lwz r18, 0x4(r18)
lbl_fn_8022D478_00000D58:
    cmpwi r18, 0x0
    bne lbl_fn_8022D478_00000D2C
lbl_fn_8022D478_00000D60:
    lwz r22, 0x4(r22)
lbl_fn_8022D478_00000D64:
    cmpwi r22, 0x0
    bne lbl_fn_8022D478_00000B6C
    li r0, 0x0
    stw r0, 0x74(r19)
    addi r11, r1, 0x140
    bl _restgpr_18
    lwz r0, 0x144(r1)
    mtlr r0
    addi r1, r1, 0x140
    blr
}

asm void fn_8022D754(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    lis r0, 0x4330
    lis r4, lbl_80742F78@ha
    lwz r5, 0x108(r3)
    stw r0, 0x8(r1)
    xoris r0, r5, 0x8000
    lfd f2, lbl_80742F78@l(r4)
    stw r0, 0xc(r1)
    lfs f0, 0x120(r3)
    lfd f1, 0x8(r1)
    fsubs f1, f1, f2
    fmuls f0, f1, f0
    stfs f0, 0x10c(r3)
    addi r1, r1, 0x10
    blr
}

asm void fn_8022D790(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_26
    lwz r6, 0x108(r4)
    lis r0, 0x4330
    lfs f3, 0x118(r4)
    mr r28, r3
    lfs f2, 0x11c(r4)
    cmpwi r6, 0x1
    lfs f1, 0x120(r4)
    mr r29, r4
    lfs f0, 0x124(r4)
    mr r30, r7
    stw r0, 0x8(r1)
    stw r0, 0x10(r1)
    stfs f3, 0x0(r3)
    stfs f2, 0x4(r3)
    stfs f1, 0x8(r3)
    stfs f0, 0xc(r3)
    bgt lbl_fn_8022D790_00000E28
    li r3, 0x0
    b lbl_fn_8022D790_00001090
lbl_fn_8022D790_00000E28:
    divw r3, r5, r6
    lfs f2, 0x130(r4)
    lfs f0, lbl_808830D0
    fcmpo cr0, f2, f0
    mullw r0, r3, r6
    subf r31, r0, r5
    ble lbl_fn_8022D790_00000E6C
    xoris r0, r3, 0x8000
    stw r0, 0xc(r1)
    lis r3, lbl_80742F78@ha
    lfd f1, lbl_80742F78@l(r3)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f0, f2
    cror eq, gt, eq
    bne lbl_fn_8022D790_00000E6C
    subi r31, r6, 0x1
lbl_fn_8022D790_00000E6C:
    xoris r0, r31, 0x8000
    stw r0, 0x14(r1)
    xoris r0, r6, 0x8000
    lis r3, lbl_80742F78@ha
    stw r0, 0xc(r1)
    lfd f2, lbl_80742F78@l(r3)
    lfd f1, 0x10(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f1, f2
    lwz r4, 0x12c(r4)
    fsubs f0, f0, f2
    subi r3, r4, 0x5
    subfic r0, r4, 0x5
    nor r0, r3, r0
    fdivs f2, f1, f0
    srawi r0, r0, 31
    andc r26, r4, r0
    cmpwi r26, 0x2
    beq lbl_fn_8022D790_00000ECC
    cmpwi r26, 0x3
    beq lbl_fn_8022D790_00000EF8
    cmpwi r26, 0x1
    beq lbl_fn_8022D790_00000F2C
    b lbl_fn_8022D790_00000F58
lbl_fn_8022D790_00000ECC:
    lfs f0, lbl_808830D8
    lfs f1, lbl_808830D4
    fmuls f2, f2, f0
    lfs f0, lbl_808830D0
    fsubs f1, f1, f2
    fcmpo cr0, f1, f0
    bge lbl_fn_8022D790_00000EEC
    fneg f1, f1
lbl_fn_8022D790_00000EEC:
    lfs f0, lbl_808830D4
    fsubs f2, f0, f1
    b lbl_fn_8022D790_00000F78
lbl_fn_8022D790_00000EF8:
    lfs f0, lbl_808830D8
    lfs f1, lbl_808830D4
    fmuls f2, f2, f0
    lfs f0, lbl_808830DC
    fadds f1, f1, f2
    fmuls f1, f0, f1
    bl fn_8068A850
    frsp f2, f1
    lfs f1, lbl_808830D4
    lfs f0, lbl_808830E0
    fadds f1, f1, f2
    fmuls f2, f0, f1
    b lbl_fn_8022D790_00000F78
lbl_fn_8022D790_00000F2C:
    lfs f1, lbl_808830D4
    lfs f0, lbl_808830DC
    fadds f1, f1, f2
    fmuls f1, f0, f1
    bl fn_8068A850
    frsp f2, f1
    lfs f1, lbl_808830D4
    lfs f0, lbl_808830E0
    fadds f1, f1, f2
    fmuls f2, f0, f1
    b lbl_fn_8022D790_00000F78
lbl_fn_8022D790_00000F58:
    lfs f1, lbl_808830D4
    lfs f0, lbl_808830D0
    fsubs f1, f1, f2
    fcmpo cr0, f1, f0
    bge lbl_fn_8022D790_00000F70
    fneg f1, f1
lbl_fn_8022D790_00000F70:
    lfs f0, lbl_808830D4
    fsubs f2, f0, f1
lbl_fn_8022D790_00000F78:
    lwz r27, 0x108(r29)
    lis r3, lbl_80742F78@ha
    lfd f1, lbl_80742F78@l(r3)
    cmpwi r26, 0x6
    xoris r0, r27, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f1
    fmuls f0, f0, f2
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r3, 0x1c(r1)
    bne lbl_fn_8022D790_00000FB0
    subf r3, r3, r27
lbl_fn_8022D790_00000FB0:
    cmpw r27, r3
    bne lbl_fn_8022D790_00000FBC
    subi r3, r27, 0x1
lbl_fn_8022D790_00000FBC:
    cmpwi r26, 0x4
    bne lbl_fn_8022D790_00000FEC
    lwz r0, 0x0(r30)
    cmpw r0, r31
    beq lbl_fn_8022D790_00001000
    stw r3, 0x0(r30)
    lwz r27, 0x108(r29)
    bl fn_80680CF8
    divw r0, r3, r27
    mullw r0, r0, r27
    subf r31, r0, r3
    b lbl_fn_8022D790_00001000
lbl_fn_8022D790_00000FEC:
    lwz r0, 0x0(r30)
    add r3, r0, r3
    divw r0, r3, r27
    mullw r0, r0, r27
    subf r31, r0, r3
lbl_fn_8022D790_00001000:
    xoris r0, r27, 0x8000
    stw r0, 0x14(r1)
    lis r3, lbl_80742F78@ha
    lfs f1, 0x0(r28)
    lfd f5, lbl_80742F78@l(r3)
    xoris r0, r31, 0x8000
    lfd f0, 0x10(r1)
    stw r0, 0xc(r1)
    fsubs f2, f0, f5
    lfs f0, 0x10c(r29)
    lfd f3, 0x8(r1)
    fdivs f2, f0, f2
    lfs f0, lbl_808830D4
    fsubs f3, f3, f5
    fmadds f4, f3, f2, f1
    stfs f4, 0x0(r28)
    fcmpo cr0, f4, f0
    cror eq, gt, eq
    bne lbl_fn_8022D790_0000108C
    fctiwz f2, f4
    lfs f1, 0xc(r28)
    lfs f0, 0x4(r28)
    stfd f2, 0x18(r1)
    lwz r0, 0x1c(r1)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    stw r0, 0x14(r1)
    lfd f3, 0x8(r1)
    lfd f2, 0x10(r1)
    fsubs f3, f3, f5
    fsubs f2, f2, f5
    fsubs f3, f4, f3
    fmadds f0, f1, f2, f0
    stfs f3, 0x0(r28)
    stfs f0, 0x4(r28)
lbl_fn_8022D790_0000108C:
    mr r3, r31
lbl_fn_8022D790_00001090:
    addi r11, r1, 0x40
    bl _restgpr_26
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8022DA70(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x40
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    bl _savegpr_27
    fmr f31, f1
    mr r30, r3
    mr r27, r4
    mr r28, r5
    addi r3, r5, 0xc4
    mr r29, r6
    addi r4, r30, 0x18
    li r5, 0x0
    bl fn_80237B8C
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_8022DA70_000010FC
    li r3, 0x0
    b lbl_fn_8022DA70_00001334
lbl_fn_8022DA70_000010FC:
    lfs f0, lbl_808830D0
    li r0, 0x0
    stfs f0, 0x18(r3)
    lis r4, lbl_807C82C0@ha
    addi r5, r31, 0x38
    addi r6, r31, 0x74
    stw r0, 0x190(r3)
    addi r3, r4, lbl_807C82C0@l
    li r4, 0x0
    lwz r7, 0x4c(r29)
    bl fn_8022C9C8
    lfs f0, lbl_808830D0
    fmr f1, f31
    stfs f0, 0x44(r31)
    mr r3, r27
    mr r4, r28
    mr r5, r29
    stfs f0, 0x54(r31)
    mr r6, r31
    stfs f0, 0x64(r31)
    stfs f0, 0x8c(r31)
    stfs f0, 0x90(r31)
    stfs f0, 0x94(r31)
    stfs f0, 0x68(r31)
    stfs f0, 0x6c(r31)
    stfs f0, 0x70(r31)
    bl fn_80230780
    cmpwi r3, 0x0
    bne lbl_fn_8022DA70_00001184
    lwz r0, 0x190(r31)
    li r3, 0x0
    ori r0, r0, 0x4
    stw r0, 0x190(r31)
    b lbl_fn_8022DA70_00001334
lbl_fn_8022DA70_00001184:
    psq_l f1, 0x68(r31), 0, 0
    addi r4, r1, 0x14
    lfs f2, 0x70(r31)
    mr r5, r4
    stfs f2, 0x1c(r1)
    addi r3, r31, 0x38
    psq_st f1, 0x0(r4), 0, 0
    bl fn_805F93C0
    lfs f3, 0x74(r31)
    addi r4, r1, 0x8
    lfs f0, 0x14(r1)
    mr r3, r31
    fadds f6, f3, f0
    stfs f6, 0x74(r31)
    lfs f3, 0x78(r31)
    lfs f0, 0x18(r1)
    fadds f5, f3, f0
    stfs f5, 0x78(r31)
    lfs f3, 0x7c(r31)
    lfs f0, 0x1c(r1)
    fadds f4, f3, f0
    stfs f4, 0x7c(r31)
    lfs f3, 0x90(r31)
    lfs f0, 0x8c(r31)
    fadds f5, f5, f3
    lfs f3, 0x94(r31)
    fadds f0, f6, f0
    fadds f2, f4, f3
    stfs f5, 0xc(r1)
    stfs f0, 0x8(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x80(r31), 0, 0
    stfs f2, 0x10(r1)
    stfs f2, 0x88(r31)
    bl fn_80231508
    lwz r0, 0x4c(r29)
    rlwinm. r0, r0, 0, 14, 14
    beq lbl_fn_8022DA70_000012BC
    lwz r0, 0x30(r30)
    li r4, 0x0
    li r3, 0x1
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8022DA70_0000127C
lbl_fn_8022DA70_00001234:
    lwz r5, 0x3c(r30)
    rlwinm r7, r4, 29, 3, 29
    clrlwi r6, r4, 27
    lwzx r0, r5, r7
    slw r6, r3, r6
    and. r0, r0, r6
    bne lbl_fn_8022DA70_00001274
    lwzx r0, r5, r7
    or r0, r0, r6
    stwx r0, r5, r7
    lwz r0, 0x2c(r30)
    lwz r3, 0x38(r30)
    mullw r0, r4, r0
    mulli r0, r0, 0x14
    add r0, r3, r0
    b lbl_fn_8022DA70_00001280
lbl_fn_8022DA70_00001274:
    addi r4, r4, 0x1
    bdnz lbl_fn_8022DA70_00001234
lbl_fn_8022DA70_0000127C:
    li r0, 0x0
lbl_fn_8022DA70_00001280:
    stw r0, 0x1a8(r31)
    li r3, 0x40
    li r0, 0x0
    stw r3, 0x1b4(r31)
    stw r0, 0x1b0(r31)
    stw r0, 0x1ac(r31)
    lfs f3, 0xb0(r31)
    lfs f0, 0xa4(r31)
    lfs f2, 0x88(r31)
    psq_l f1, 0x80(r31), 0, 0
    psq_st f1, 0x194(r31), 0, 0
    stfs f2, 0x19c(r31)
    stfs f0, 0x1a0(r31)
    stfs f3, 0x1a4(r31)
    b lbl_fn_8022DA70_00001324
lbl_fn_8022DA70_000012BC:
    lwz r6, 0x1a8(r31)
    cmpwi r6, 0x0
    beq lbl_fn_8022DA70_00001310
    lwz r4, 0x38(r30)
    lis r3, 0x6666
    addi r5, r3, 0x6667
    lwz r0, 0x2c(r30)
    subf r3, r4, r6
    lwz r6, 0x3c(r30)
    mulhw r4, r5, r3
    li r3, 0x1
    srawi r4, r4, 3
    srwi r5, r4, 31
    add r4, r4, r5
    divwu r0, r4, r0
    rlwinm r5, r0, 29, 3, 29
    clrlwi r0, r0, 27
    lwzx r4, r6, r5
    slw r0, r3, r0
    andc r0, r4, r0
    stwx r0, r6, r5
lbl_fn_8022DA70_00001310:
    li r0, 0x0
    stw r0, 0x1a8(r31)
    stw r0, 0x1b4(r31)
    stw r0, 0x1b0(r31)
    stw r0, 0x1ac(r31)
lbl_fn_8022DA70_00001324:
    lwz r0, 0x190(r31)
    mr r3, r31
    ori r0, r0, 0x8
    stw r0, 0x190(r31)
lbl_fn_8022DA70_00001334:
    addi r11, r1, 0x40
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    bl _restgpr_27
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8022DD1C(void)
{
    nofralloc
    stwu r1, -0xf50(r1)
    mflr r0
    stw r0, 0xf54(r1)
    li r0, 0xf48
    addi r11, r1, 0xe30
    stfd f31, 0xf40(r1)
    psq_stx f31, r1, r0, 0, 0
    li r0, 0xf38
    stfd f30, 0xf30(r1)
    psq_stx f30, r1, r0, 0, 0
    li r0, 0xf28
    stfd f29, 0xf20(r1)
    psq_stx f29, r1, r0, 0, 0
    li r0, 0xf18
    stfd f28, 0xf10(r1)
    psq_stx f28, r1, r0, 0, 0
    li r0, 0xf08
    stfd f27, 0xf00(r1)
    psq_stx f27, r1, r0, 0, 0
    li r0, 0xef8
    stfd f26, 0xef0(r1)
    psq_stx f26, r1, r0, 0, 0
    li r0, 0xee8
    stfd f25, 0xee0(r1)
    psq_stx f25, r1, r0, 0, 0
    li r0, 0xed8
    stfd f24, 0xed0(r1)
    psq_stx f24, r1, r0, 0, 0
    li r0, 0xec8
    stfd f23, 0xec0(r1)
    psq_stx f23, r1, r0, 0, 0
    li r0, 0xeb8
    stfd f22, 0xeb0(r1)
    psq_stx f22, r1, r0, 0, 0
    li r0, 0xea8
    stfd f21, 0xea0(r1)
    psq_stx f21, r1, r0, 0, 0
    li r0, 0xe98
    stfd f20, 0xe90(r1)
    psq_stx f20, r1, r0, 0, 0
    li r0, 0xe88
    stfd f19, 0xe80(r1)
    psq_stx f19, r1, r0, 0, 0
    li r0, 0xe78
    stfd f18, 0xe70(r1)
    psq_stx f18, r1, r0, 0, 0
    li r0, 0xe68
    stfd f17, 0xe60(r1)
    psq_stx f17, r1, r0, 0, 0
    li r0, 0xe58
    stfd f16, 0xe50(r1)
    psq_stx f16, r1, r0, 0, 0
    li r0, 0xe48
    stfd f15, 0xe40(r1)
    psq_stx f15, r1, r0, 0, 0
    li r0, 0xe38
    stfd f14, 0xe30(r1)
    psq_stx f14, r1, r0, 0, 0
    bl _savegpr_14
    lwz r21, 0xc0(r3)
    mr r17, r3
    stw r5, 0x10(r1)
    mr r15, r4
    lwz r0, 0x25c(r21)
    mr r16, r6
    stw r7, 0x14(r1)
    rlwinm. r0, r0, 0, 30, 30
    beq lbl_fn_8022DD1C_000014BC
    lfs f9, 0x2c(r6)
    addi r3, r1, 0x288
    lfs f10, 0x1c(r6)
    lfs f11, 0xc(r6)
    lfs f8, 0x88(r4)
    lfs f7, 0x84(r4)
    lfs f0, 0x80(r4)
    fsubs f8, f9, f8
    fsubs f7, f10, f7
    stfs f11, 0x1d4(r1)
    fsubs f0, f11, f0
    stfs f10, 0x1d8(r1)
    stfs f9, 0x1dc(r1)
    stfs f0, 0x288(r1)
    stfs f7, 0x28c(r1)
    stfs f8, 0x290(r1)
    bl fn_805F9940
    lfs f7, 0x260(r21)
    lfs f0, 0x264(r21)
    fadds f0, f7, f0
    fcmpo cr0, f1, f0
    bgt lbl_fn_8022DD1C_0000300C
lbl_fn_8022DD1C_000014BC:
    lhz r0, 0x18(r17)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x20
    bne lbl_fn_8022DD1C_000014DC
    lwz r0, 0x10(r15)
    oris r0, r0, 0x40
    stw r0, 0x10(r15)
    b lbl_fn_8022DD1C_000014E8
lbl_fn_8022DD1C_000014DC:
    lwz r0, 0x10(r15)
    rlwinm r0, r0, 0, 10, 8
    stw r0, 0x10(r15)
lbl_fn_8022DD1C_000014E8:
    lhz r0, 0x18(r17)
    rlwinm r0, r0, 0, 23, 23
    cmpwi r0, 0x100
    bne lbl_fn_8022DD1C_00001508
    lwz r0, 0x10(r15)
    oris r0, r0, 0x80
    stw r0, 0x10(r15)
    b lbl_fn_8022DD1C_00001514
lbl_fn_8022DD1C_00001508:
    lwz r0, 0x10(r15)
    rlwinm r0, r0, 0, 9, 7
    stw r0, 0x10(r15)
lbl_fn_8022DD1C_00001514:
    lfs f7, 0xb8(r17)
    lfs f0, 0xc8(r15)
    lwz r14, 0x1c(r15)
    fmuls f16, f7, f0
    lfs f7, 0xb4(r17)
    lfs f0, 0xc4(r15)
    lfs f9, 0xb0(r17)
    fmuls f17, f7, f0
    lfs f8, 0xc0(r15)
    lfs f13, 0x28(r15)
    lfs f12, 0x2c(r15)
    fmuls f8, f9, f8
    lfs f11, 0x30(r15)
    lfs f10, 0x34(r15)
    lfs f7, 0xac(r17)
    lfs f0, 0xbc(r15)
    lfs f14, 0x110(r14)
    lfs f15, 0x114(r14)
    fmuls f0, f7, f0
    lfs f7, lbl_808830D0
    stfs f0, 0x268(r1)
    stfs f8, 0x26c(r1)
    stfs f17, 0x270(r1)
    stfs f16, 0x274(r1)
    lfs f0, 0x60(r21)
    stfs f13, 0x278(r1)
    fcmpu cr0, f7, f0
    stfs f12, 0x27c(r1)
    stfs f11, 0x280(r1)
    stfs f10, 0x284(r1)
    beq lbl_fn_8022DD1C_00001644
    lfs f9, 0x2c(r16)
    addi r3, r1, 0x250
    lfs f10, 0x1c(r16)
    mr r4, r3
    lfs f11, 0xc(r16)
    lfs f8, 0x88(r15)
    lfs f7, 0x84(r15)
    lfs f0, 0x80(r15)
    fsubs f8, f9, f8
    fsubs f7, f10, f7
    stfs f11, 0x1c8(r1)
    fsubs f0, f11, f0
    stfs f10, 0x1cc(r1)
    stfs f9, 0x1d0(r1)
    stfs f0, 0x250(r1)
    stfs f7, 0x254(r1)
    stfs f8, 0x258(r1)
    bl fn_805F98D0
    lfs f8, 0x60(r21)
    addi r4, r1, 0x1bc
    lfs f0, 0x258(r1)
    addi r3, r1, 0x25c
    lfs f7, 0x254(r1)
    fmuls f2, f0, f8
    lfs f0, 0x250(r1)
    fmuls f7, f7, f8
    lfs f9, 0x80(r15)
    fmuls f0, f0, f8
    lfs f8, 0x84(r15)
    stfs f0, 0x1bc(r1)
    lfs f0, 0x88(r15)
    stfs f7, 0x1c0(r1)
    frsp f7, f2
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    fadds f0, f7, f0
    lfs f10, 0x25c(r1)
    lfs f7, 0x260(r1)
    fadds f9, f10, f9
    stfs f2, 0x1c4(r1)
    fadds f7, f7, f8
    stfs f9, 0x25c(r1)
    stfs f7, 0x260(r1)
    stfs f0, 0x264(r1)
    b lbl_fn_8022DD1C_00001658
lbl_fn_8022DD1C_00001644:
    lfs f2, 0x88(r15)
    addi r3, r1, 0x25c
    psq_l f1, 0x80(r15), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x264(r1)
lbl_fn_8022DD1C_00001658:
    lwz r3, 0x4c(r21)
    li r17, 0x0
    rlwinm. r0, r3, 0, 27, 27
    bne lbl_fn_8022DD1C_00001680
    lfs f7, 0x280(r1)
    lfs f8, 0x278(r1)
    fneg f0, f7
    fadds f7, f8, f7
    stfs f0, 0x280(r1)
    stfs f7, 0x278(r1)
lbl_fn_8022DD1C_00001680:
    rlwinm. r0, r3, 0, 26, 26
    bne lbl_fn_8022DD1C_000016A0
    lfs f7, 0x284(r1)
    lfs f8, 0x27c(r1)
    fneg f0, f7
    fadds f7, f8, f7
    stfs f0, 0x284(r1)
    stfs f7, 0x27c(r1)
lbl_fn_8022DD1C_000016A0:
    clrlwi. r0, r3, 31
    beq lbl_fn_8022DD1C_00001F14
    rlwinm. r0, r3, 0, 12, 12
    beq lbl_fn_8022DD1C_00001840
    lfs f7, lbl_808830D0
    addi r18, r1, 0xc38
    lfs f0, lbl_808830D4
    stfs f7, 0xc64(r1)
    stfs f7, 0xc5c(r1)
    stfs f7, 0xc58(r1)
    stfs f7, 0xc54(r1)
    stfs f7, 0xc50(r1)
    stfs f7, 0xc48(r1)
    stfs f7, 0xc44(r1)
    stfs f7, 0xc40(r1)
    stfs f7, 0xc3c(r1)
    stfs f0, 0xc60(r1)
    stfs f0, 0xc4c(r1)
    stfs f0, 0xc38(r1)
    lfs f1, 0xac(r15)
    fcmpu cr0, f7, f1
    beq lbl_fn_8022DD1C_00001748
    addi r3, r1, 0x9f8
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r18
    addi r4, r1, 0x9f8
    addi r5, r1, 0x9c8
    bl fn_805F89F0
    addi r3, r1, 0x9c8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r18), 0, 0
    psq_st f2, 0x8(r18), 0, 0
    psq_st f3, 0x10(r18), 0, 0
    psq_st f4, 0x18(r18), 0, 0
    psq_st f5, 0x20(r18), 0, 0
    psq_st f6, 0x28(r18), 0, 0
lbl_fn_8022DD1C_00001748:
    lfs f0, lbl_808830D0
    lfs f1, 0xa4(r15)
    fcmpu cr0, f0, f1
    beq lbl_fn_8022DD1C_000017A8
    addi r3, r1, 0xa58
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r18
    addi r4, r1, 0xa58
    addi r5, r1, 0xa28
    bl fn_805F89F0
    addi r3, r1, 0xa28
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r18), 0, 0
    psq_st f2, 0x8(r18), 0, 0
    psq_st f3, 0x10(r18), 0, 0
    psq_st f4, 0x18(r18), 0, 0
    psq_st f5, 0x20(r18), 0, 0
    psq_st f6, 0x28(r18), 0, 0
lbl_fn_8022DD1C_000017A8:
    lfs f0, lbl_808830D0
    lfs f1, 0xa8(r15)
    fcmpu cr0, f0, f1
    beq lbl_fn_8022DD1C_00001808
    addi r3, r1, 0xab8
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r18
    addi r4, r1, 0xab8
    addi r5, r1, 0xa88
    bl fn_805F89F0
    addi r3, r1, 0xa88
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r18), 0, 0
    psq_st f2, 0x8(r18), 0, 0
    psq_st f3, 0x10(r18), 0, 0
    psq_st f4, 0x18(r18), 0, 0
    psq_st f5, 0x20(r18), 0, 0
    psq_st f6, 0x28(r18), 0, 0
lbl_fn_8022DD1C_00001808:
    addi r3, r1, 0xd28
    psq_l f1, 0x0(r18), 0, 0
    psq_l f2, 0x8(r18), 0, 0
    psq_l f3, 0x10(r18), 0, 0
    psq_l f4, 0x18(r18), 0, 0
    psq_l f5, 0x20(r18), 0, 0
    psq_l f6, 0x28(r18), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f4, 0x18(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    psq_st f6, 0x28(r3), 0, 0
    b lbl_fn_8022DD1C_00001B64
lbl_fn_8022DD1C_00001840:
    rlwinm. r0, r3, 0, 11, 11
    beq lbl_fn_8022DD1C_000019D8
    lfs f7, lbl_808830D0
    addi r18, r1, 0xc08
    lfs f0, lbl_808830D4
    stfs f7, 0xc34(r1)
    stfs f7, 0xc2c(r1)
    stfs f7, 0xc28(r1)
    stfs f7, 0xc24(r1)
    stfs f7, 0xc20(r1)
    stfs f7, 0xc18(r1)
    stfs f7, 0xc14(r1)
    stfs f7, 0xc10(r1)
    stfs f7, 0xc0c(r1)
    stfs f0, 0xc30(r1)
    stfs f0, 0xc1c(r1)
    stfs f0, 0xc08(r1)
    lfs f1, 0xac(r15)
    fcmpu cr0, f7, f1
    beq lbl_fn_8022DD1C_000018E0
    addi r3, r1, 0x8d8
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r18
    addi r4, r1, 0x8d8
    addi r5, r1, 0x8a8
    bl fn_805F89F0
    addi r3, r1, 0x8a8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r18), 0, 0
    psq_st f2, 0x8(r18), 0, 0
    psq_st f3, 0x10(r18), 0, 0
    psq_st f4, 0x18(r18), 0, 0
    psq_st f5, 0x20(r18), 0, 0
    psq_st f6, 0x28(r18), 0, 0
lbl_fn_8022DD1C_000018E0:
    lfs f0, lbl_808830D0
    lfs f1, 0xa8(r15)
    fcmpu cr0, f0, f1
    beq lbl_fn_8022DD1C_00001940
    addi r3, r1, 0x938
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r18
    addi r4, r1, 0x938
    addi r5, r1, 0x908
    bl fn_805F89F0
    addi r3, r1, 0x908
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r18), 0, 0
    psq_st f2, 0x8(r18), 0, 0
    psq_st f3, 0x10(r18), 0, 0
    psq_st f4, 0x18(r18), 0, 0
    psq_st f5, 0x20(r18), 0, 0
    psq_st f6, 0x28(r18), 0, 0
lbl_fn_8022DD1C_00001940:
    lfs f0, lbl_808830D0
    lfs f1, 0xa4(r15)
    fcmpu cr0, f0, f1
    beq lbl_fn_8022DD1C_000019A0
    addi r3, r1, 0x998
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r18
    addi r4, r1, 0x998
    addi r5, r1, 0x968
    bl fn_805F89F0
    addi r3, r1, 0x968
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r18), 0, 0
    psq_st f2, 0x8(r18), 0, 0
    psq_st f3, 0x10(r18), 0, 0
    psq_st f4, 0x18(r18), 0, 0
    psq_st f5, 0x20(r18), 0, 0
    psq_st f6, 0x28(r18), 0, 0
lbl_fn_8022DD1C_000019A0:
    addi r3, r1, 0xd28
    psq_l f1, 0x0(r18), 0, 0
    psq_l f2, 0x8(r18), 0, 0
    psq_l f3, 0x10(r18), 0, 0
    psq_l f4, 0x18(r18), 0, 0
    psq_l f5, 0x20(r18), 0, 0
    psq_l f6, 0x28(r18), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f4, 0x18(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    psq_st f6, 0x28(r3), 0, 0
    b lbl_fn_8022DD1C_00001B64
lbl_fn_8022DD1C_000019D8:
    lfs f7, lbl_808830D0
    addi r18, r1, 0xbd8
    lfs f0, lbl_808830D4
    stfs f7, 0xc04(r1)
    stfs f7, 0xbfc(r1)
    stfs f7, 0xbf8(r1)
    stfs f7, 0xbf4(r1)
    stfs f7, 0xbf0(r1)
    stfs f7, 0xbe8(r1)
    stfs f7, 0xbe4(r1)
    stfs f7, 0xbe0(r1)
    stfs f7, 0xbdc(r1)
    stfs f0, 0xc00(r1)
    stfs f0, 0xbec(r1)
    stfs f0, 0xbd8(r1)
    lfs f1, 0xa8(r15)
    fcmpu cr0, f7, f1
    beq lbl_fn_8022DD1C_00001A70
    addi r3, r1, 0x7b8
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r18
    addi r4, r1, 0x7b8
    addi r5, r1, 0x788
    bl fn_805F89F0
    addi r3, r1, 0x788
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r18), 0, 0
    psq_st f2, 0x8(r18), 0, 0
    psq_st f3, 0x10(r18), 0, 0
    psq_st f4, 0x18(r18), 0, 0
    psq_st f5, 0x20(r18), 0, 0
    psq_st f6, 0x28(r18), 0, 0
lbl_fn_8022DD1C_00001A70:
    lfs f0, lbl_808830D0
    lfs f1, 0xa4(r15)
    fcmpu cr0, f0, f1
    beq lbl_fn_8022DD1C_00001AD0
    addi r3, r1, 0x818
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r18
    addi r4, r1, 0x818
    addi r5, r1, 0x7e8
    bl fn_805F89F0
    addi r3, r1, 0x7e8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r18), 0, 0
    psq_st f2, 0x8(r18), 0, 0
    psq_st f3, 0x10(r18), 0, 0
    psq_st f4, 0x18(r18), 0, 0
    psq_st f5, 0x20(r18), 0, 0
    psq_st f6, 0x28(r18), 0, 0
lbl_fn_8022DD1C_00001AD0:
    lfs f0, lbl_808830D0
    lfs f1, 0xac(r15)
    fcmpu cr0, f0, f1
    beq lbl_fn_8022DD1C_00001B30
    addi r3, r1, 0x878
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r18
    addi r4, r1, 0x878
    addi r5, r1, 0x848
    bl fn_805F89F0
    addi r3, r1, 0x848
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r18), 0, 0
    psq_st f2, 0x8(r18), 0, 0
    psq_st f3, 0x10(r18), 0, 0
    psq_st f4, 0x18(r18), 0, 0
    psq_st f5, 0x20(r18), 0, 0
    psq_st f6, 0x28(r18), 0, 0
lbl_fn_8022DD1C_00001B30:
    addi r3, r1, 0xd28
    psq_l f1, 0x0(r18), 0, 0
    psq_l f2, 0x8(r18), 0, 0
    psq_l f3, 0x10(r18), 0, 0
    psq_l f4, 0x18(r18), 0, 0
    psq_l f5, 0x20(r18), 0, 0
    psq_l f6, 0x28(r18), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f4, 0x18(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    psq_st f6, 0x28(r3), 0, 0
lbl_fn_8022DD1C_00001B64:
    lwz r0, 0x4c(r21)
    rlwinm. r0, r0, 0, 20, 20
    beq lbl_fn_8022DD1C_00001E7C
    lfs f2, 0x17c(r15)
    addi r18, r1, 0x244
    psq_l f1, 0x174(r15), 0, 0
    fabs f7, f2
    lfs f0, lbl_808830E4
    psq_st f1, 0x0(r18), 0, 0
    frsp f7, f7
    stfs f2, 0x24c(r1)
    fcmpo cr0, f7, f0
    bge lbl_fn_8022DD1C_00001BBC
    lfs f7, 0x244(r1)
    lfs f0, lbl_808830D0
    fcmpo cr0, f7, f0
    ble lbl_fn_8022DD1C_00001BB0
    lfs f0, lbl_808830E8
    b lbl_fn_8022DD1C_00001BB4
lbl_fn_8022DD1C_00001BB0:
    lfs f0, lbl_808830EC
lbl_fn_8022DD1C_00001BB4:
    stfs f0, 0x148(r1)
    b lbl_fn_8022DD1C_00001BD0
lbl_fn_8022DD1C_00001BBC:
    frsp f2, f2
    lfs f1, 0x244(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x148(r1)
lbl_fn_8022DD1C_00001BD0:
    lfs f0, 0x148(r1)
    addi r3, r1, 0x718
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f7, lbl_808830D0
    addi r4, r1, 0x138
    lfs f21, 0x720(r1)
    mr r5, r4
    lfs f20, 0x71c(r1)
    addi r3, r1, 0x748
    lfs f19, 0x718(r1)
    lfs f18, 0x730(r1)
    lfs f17, 0x72c(r1)
    lfs f16, 0x728(r1)
    lfs f13, 0x740(r1)
    lfs f12, 0x73c(r1)
    lfs f11, 0x738(r1)
    lfs f10, 0x744(r1)
    lfs f9, 0x734(r1)
    lfs f8, 0x724(r1)
    lfs f0, lbl_808830D4
    psq_l f1, 0x0(r18), 0, 0
    lfs f2, 0x24c(r1)
    stfs f7, 0x778(r1)
    stfs f7, 0x77c(r1)
    stfs f7, 0x780(r1)
    stfs f0, 0x784(r1)
    stfs f19, 0x108(r1)
    stfs f20, 0x10c(r1)
    stfs f21, 0x110(r1)
    stfs f19, 0x748(r1)
    stfs f20, 0x74c(r1)
    stfs f21, 0x750(r1)
    stfs f16, 0x114(r1)
    stfs f17, 0x118(r1)
    stfs f18, 0x11c(r1)
    stfs f16, 0x758(r1)
    stfs f17, 0x75c(r1)
    stfs f18, 0x760(r1)
    stfs f11, 0x120(r1)
    stfs f12, 0x124(r1)
    stfs f13, 0x128(r1)
    stfs f11, 0x768(r1)
    stfs f12, 0x76c(r1)
    stfs f13, 0x770(r1)
    stfs f8, 0x12c(r1)
    stfs f9, 0x130(r1)
    stfs f10, 0x134(r1)
    stfs f8, 0x754(r1)
    stfs f9, 0x764(r1)
    stfs f10, 0x774(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x140(r1)
    bl fn_805F9750
    lfs f2, 0x140(r1)
    lfs f0, lbl_808830E4
    fabs f7, f2
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_8022DD1C_00001CEC
    lfs f7, 0x13c(r1)
    lfs f0, lbl_808830D0
    fcmpo cr0, f7, f0
    ble lbl_fn_8022DD1C_00001CDC
    lfs f0, lbl_808830E8
    b lbl_fn_8022DD1C_00001CE0
lbl_fn_8022DD1C_00001CDC:
    lfs f0, lbl_808830EC
lbl_fn_8022DD1C_00001CE0:
    fneg f0, f0
    stfs f0, 0x144(r1)
    b lbl_fn_8022DD1C_00001D00
lbl_fn_8022DD1C_00001CEC:
    lfs f1, 0x13c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x144(r1)
lbl_fn_8022DD1C_00001D00:
    addi r3, r1, 0x144
    lfs f2, lbl_808830D0
    psq_l f1, 0x0(r3), 0, 0
    addi r19, r1, 0xcf8
    psq_st f1, 0x0(r18), 0, 0
    lfs f0, lbl_808830D4
    lfs f1, 0x248(r1)
    stfs f2, 0x14c(r1)
    fcmpu cr0, f2, f1
    stfs f2, 0x24c(r1)
    stfs f2, 0xd24(r1)
    stfs f2, 0xd1c(r1)
    stfs f2, 0xd18(r1)
    stfs f2, 0xd14(r1)
    stfs f2, 0xd10(r1)
    stfs f2, 0xd08(r1)
    stfs f2, 0xd04(r1)
    stfs f2, 0xd00(r1)
    stfs f2, 0xcfc(r1)
    stfs f0, 0xd20(r1)
    stfs f0, 0xd0c(r1)
    stfs f0, 0xcf8(r1)
    beq lbl_fn_8022DD1C_00001DAC
    addi r3, r1, 0x628
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r19
    addi r4, r1, 0x628
    addi r5, r1, 0x5f8
    bl fn_805F89F0
    addi r3, r1, 0x5f8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r19), 0, 0
    psq_st f2, 0x8(r19), 0, 0
    psq_st f3, 0x10(r19), 0, 0
    psq_st f4, 0x18(r19), 0, 0
    psq_st f5, 0x20(r19), 0, 0
    psq_st f6, 0x28(r19), 0, 0
lbl_fn_8022DD1C_00001DAC:
    lfs f0, lbl_808830D0
    lfs f1, 0x244(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_8022DD1C_00001E0C
    addi r3, r1, 0x688
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r19
    addi r4, r1, 0x688
    addi r5, r1, 0x658
    bl fn_805F89F0
    addi r3, r1, 0x658
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r19), 0, 0
    psq_st f2, 0x8(r19), 0, 0
    psq_st f3, 0x10(r19), 0, 0
    psq_st f4, 0x18(r19), 0, 0
    psq_st f5, 0x20(r19), 0, 0
    psq_st f6, 0x28(r19), 0, 0
lbl_fn_8022DD1C_00001E0C:
    lfs f0, lbl_808830D0
    lfs f1, 0x24c(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_8022DD1C_00001E6C
    addi r3, r1, 0x6e8
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r19
    addi r4, r1, 0x6e8
    addi r5, r1, 0x6b8
    bl fn_805F89F0
    addi r3, r1, 0x6b8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r19), 0, 0
    psq_st f2, 0x8(r19), 0, 0
    psq_st f3, 0x10(r19), 0, 0
    psq_st f4, 0x18(r19), 0, 0
    psq_st f5, 0x20(r19), 0, 0
    psq_st f6, 0x28(r19), 0, 0
lbl_fn_8022DD1C_00001E6C:
    addi r4, r1, 0xd28
    addi r3, r1, 0xcf8
    mr r5, r4
    bl fn_805F89F0
lbl_fn_8022DD1C_00001E7C:
    lwz r0, 0x240(r21)
    cmpwi r0, 0x0
    beq lbl_fn_8022DD1C_00001EA8
    lfs f1, 0x180(r15)
    addi r3, r1, 0xcc8
    addi r4, r15, 0x184
    bl fn_805F9050
    addi r4, r1, 0xd28
    addi r3, r1, 0xcc8
    mr r5, r4
    bl fn_805F89F0
lbl_fn_8022DD1C_00001EA8:
    addi r3, r15, 0x38
    addi r4, r1, 0xd28
    addi r5, r1, 0xba8
    bl fn_805F89F0
    addi r4, r1, 0xba8
    lfs f0, lbl_808830D4
    addi r3, r1, 0xd58
    psq_l f2, 0x8(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    fsubs f14, f0, f14
    psq_l f6, 0x28(r4), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    lfs f0, 0x25c(r1)
    psq_st f4, 0x18(r3), 0, 0
    lfs f7, 0x260(r1)
    psq_st f6, 0x28(r3), 0, 0
    lfs f8, 0x264(r1)
    psq_st f1, 0x0(r3), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    stfs f0, 0xd64(r1)
    stfs f7, 0xd74(r1)
    stfs f8, 0xd84(r1)
    b lbl_fn_8022DD1C_000025FC
lbl_fn_8022DD1C_00001F14:
    rlwinm. r0, r3, 0, 22, 22
    beq lbl_fn_8022DD1C_0000221C
    lwz r3, lbl_8087EFB4
    addi r18, r1, 0xb78
    lfs f0, 0xac(r15)
    lfs f1, 0x134(r3)
    lfs f7, lbl_808830D0
    fneg f8, f0
    lfs f0, lbl_808830D4
    fcmpu cr0, f7, f1
    stfs f7, 0xfc(r1)
    stfs f1, 0x100(r1)
    stfs f8, 0x104(r1)
    stfs f7, 0xba4(r1)
    stfs f7, 0xb9c(r1)
    stfs f7, 0xb98(r1)
    stfs f7, 0xb94(r1)
    stfs f7, 0xb90(r1)
    stfs f7, 0xb88(r1)
    stfs f7, 0xb84(r1)
    stfs f7, 0xb80(r1)
    stfs f7, 0xb7c(r1)
    stfs f0, 0xba0(r1)
    stfs f0, 0xb8c(r1)
    stfs f0, 0xb78(r1)
    beq lbl_fn_8022DD1C_00001FCC
    addi r3, r1, 0x598
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r18
    addi r4, r1, 0x598
    addi r5, r1, 0x5c8
    bl fn_805F89F0
    addi r3, r1, 0x5c8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r18), 0, 0
    psq_st f2, 0x8(r18), 0, 0
    psq_st f3, 0x10(r18), 0, 0
    psq_st f4, 0x18(r18), 0, 0
    psq_st f5, 0x20(r18), 0, 0
    psq_st f6, 0x28(r18), 0, 0
lbl_fn_8022DD1C_00001FCC:
    lfs f0, lbl_808830D0
    lfs f1, 0xfc(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_8022DD1C_0000202C
    addi r3, r1, 0x538
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r18
    addi r4, r1, 0x538
    addi r5, r1, 0x568
    bl fn_805F89F0
    addi r3, r1, 0x568
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r18), 0, 0
    psq_st f2, 0x8(r18), 0, 0
    psq_st f3, 0x10(r18), 0, 0
    psq_st f4, 0x18(r18), 0, 0
    psq_st f5, 0x20(r18), 0, 0
    psq_st f6, 0x28(r18), 0, 0
lbl_fn_8022DD1C_0000202C:
    lfs f0, lbl_808830D0
    lfs f1, 0x104(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_8022DD1C_0000208C
    addi r3, r1, 0x4d8
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r18
    addi r4, r1, 0x4d8
    addi r5, r1, 0x508
    bl fn_805F89F0
    addi r3, r1, 0x508
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r18), 0, 0
    psq_st f2, 0x8(r18), 0, 0
    psq_st f3, 0x10(r18), 0, 0
    psq_st f4, 0x18(r18), 0, 0
    psq_st f5, 0x20(r18), 0, 0
    psq_st f6, 0x28(r18), 0, 0
lbl_fn_8022DD1C_0000208C:
    lfs f7, 0x280(r1)
    addi r3, r1, 0xd58
    psq_l f2, 0x8(r18), 0, 0
    psq_l f4, 0x18(r18), 0, 0
    fneg f0, f7
    psq_l f6, 0x28(r18), 0, 0
    lfs f8, 0x278(r1)
    psq_l f1, 0x0(r18), 0, 0
    fadds f7, f8, f7
    psq_l f3, 0x10(r18), 0, 0
    psq_l f5, 0x20(r18), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    lfs f9, 0x25c(r1)
    psq_st f4, 0x18(r3), 0, 0
    lfs f8, 0x260(r1)
    psq_st f6, 0x28(r3), 0, 0
    lfs f10, 0x264(r1)
    psq_st f1, 0x0(r3), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    stfs f9, 0xd64(r1)
    stfs f8, 0xd74(r1)
    stfs f10, 0xd84(r1)
    lwz r0, 0x4c(r21)
    stfs f7, 0x278(r1)
    rlwinm. r0, r0, 0, 25, 25
    stfs f0, 0x280(r1)
    beq lbl_fn_8022DD1C_000025FC
    lfs f0, 0x60(r15)
    addi r3, r1, 0xf0
    lfs f7, 0x50(r15)
    lfs f8, 0x40(r15)
    stfs f8, 0xf0(r1)
    stfs f7, 0xf4(r1)
    stfs f0, 0xf8(r1)
    bl fn_805F9940
    lfs f0, 0x5c(r15)
    fmr f17, f1
    lfs f7, 0x4c(r15)
    addi r3, r1, 0xe4
    lfs f8, 0x3c(r15)
    stfs f8, 0xe4(r1)
    stfs f7, 0xe8(r1)
    stfs f0, 0xec(r1)
    bl fn_805F9940
    lfs f0, 0x58(r15)
    fmr f16, f1
    lfs f7, 0x48(r15)
    addi r3, r1, 0xd8
    lfs f8, 0x38(r15)
    stfs f8, 0xd8(r1)
    stfs f7, 0xdc(r1)
    stfs f0, 0xe0(r1)
    bl fn_805F9940
    frsp f7, f16
    stfs f1, 0x238(r1)
    frsp f0, f17
    stfs f16, 0x23c(r1)
    fcmpo cr0, f7, f0
    stfs f17, 0x240(r1)
    ble lbl_fn_8022DD1C_00002184
    b lbl_fn_8022DD1C_00002188
lbl_fn_8022DD1C_00002184:
    fmr f7, f0
lbl_fn_8022DD1C_00002188:
    lfs f8, 0x238(r1)
    fcmpo cr0, f8, f7
    ble lbl_fn_8022DD1C_00002198
    b lbl_fn_8022DD1C_000021B0
lbl_fn_8022DD1C_00002198:
    lfs f8, 0x23c(r1)
    lfs f0, 0x240(r1)
    fcmpo cr0, f8, f0
    ble lbl_fn_8022DD1C_000021AC
    b lbl_fn_8022DD1C_000021B0
lbl_fn_8022DD1C_000021AC:
    fmr f8, f0
lbl_fn_8022DD1C_000021B0:
    frsp f1, f8
    stfs f8, 0xcc(r1)
    addi r3, r1, 0x478
    stfs f8, 0xd0(r1)
    fmr f2, f1
    fmr f3, f1
    stfs f8, 0xd4(r1)
    bl fn_805F9160
    addi r3, r1, 0xd58
    addi r4, r1, 0x478
    addi r5, r1, 0x4a8
    bl fn_805F89F0
    addi r4, r1, 0x4a8
    addi r3, r1, 0xd58
    psq_l f1, 0x0(r4), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f4, 0x18(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    psq_st f6, 0x28(r3), 0, 0
    b lbl_fn_8022DD1C_000025FC
lbl_fn_8022DD1C_0000221C:
    rlwinm. r0, r3, 0, 21, 21
    beq lbl_fn_8022DD1C_00002410
    lwz r3, lbl_8087EFB4
    addi r18, r1, 0xc98
    lfs f0, 0xac(r15)
    lfs f1, 0x134(r3)
    lfs f7, lbl_808830D0
    fneg f8, f0
    lfs f0, lbl_808830D4
    fcmpu cr0, f7, f1
    stfs f7, 0xc0(r1)
    stfs f1, 0xc4(r1)
    stfs f8, 0xc8(r1)
    stfs f7, 0xcc4(r1)
    stfs f7, 0xcbc(r1)
    stfs f7, 0xcb8(r1)
    stfs f7, 0xcb4(r1)
    stfs f7, 0xcb0(r1)
    stfs f7, 0xca8(r1)
    stfs f7, 0xca4(r1)
    stfs f7, 0xca0(r1)
    stfs f7, 0xc9c(r1)
    stfs f0, 0xcc0(r1)
    stfs f0, 0xcac(r1)
    stfs f0, 0xc98(r1)
    beq lbl_fn_8022DD1C_000022D4
    addi r3, r1, 0x418
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r18
    addi r4, r1, 0x418
    addi r5, r1, 0x448
    bl fn_805F89F0
    addi r3, r1, 0x448
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r18), 0, 0
    psq_st f2, 0x8(r18), 0, 0
    psq_st f3, 0x10(r18), 0, 0
    psq_st f4, 0x18(r18), 0, 0
    psq_st f5, 0x20(r18), 0, 0
    psq_st f6, 0x28(r18), 0, 0
lbl_fn_8022DD1C_000022D4:
    lfs f0, lbl_808830D0
    lfs f1, 0xc0(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_8022DD1C_00002334
    addi r3, r1, 0x3b8
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r18
    addi r4, r1, 0x3b8
    addi r5, r1, 0x3e8
    bl fn_805F89F0
    addi r3, r1, 0x3e8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r18), 0, 0
    psq_st f2, 0x8(r18), 0, 0
    psq_st f3, 0x10(r18), 0, 0
    psq_st f4, 0x18(r18), 0, 0
    psq_st f5, 0x20(r18), 0, 0
    psq_st f6, 0x28(r18), 0, 0
lbl_fn_8022DD1C_00002334:
    lfs f0, lbl_808830D0
    lfs f1, 0xc8(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_8022DD1C_00002394
    addi r3, r1, 0x358
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r18
    addi r4, r1, 0x358
    addi r5, r1, 0x388
    bl fn_805F89F0
    addi r3, r1, 0x388
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r18), 0, 0
    psq_st f2, 0x8(r18), 0, 0
    psq_st f3, 0x10(r18), 0, 0
    psq_st f4, 0x18(r18), 0, 0
    psq_st f5, 0x20(r18), 0, 0
    psq_st f6, 0x28(r18), 0, 0
lbl_fn_8022DD1C_00002394:
    lfs f7, 0x280(r1)
    addi r3, r15, 0x38
    lfs f8, 0x278(r1)
    addi r4, r1, 0xc98
    fneg f0, f7
    addi r5, r1, 0xb48
    fadds f7, f8, f7
    stfs f0, 0x280(r1)
    stfs f7, 0x278(r1)
    bl fn_805F89F0
    addi r4, r1, 0xb48
    addi r3, r1, 0xd58
    psq_l f2, 0x8(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    lfs f0, 0x25c(r1)
    psq_st f4, 0x18(r3), 0, 0
    lfs f7, 0x260(r1)
    psq_st f6, 0x28(r3), 0, 0
    lfs f8, 0x264(r1)
    psq_st f1, 0x0(r3), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    stfs f0, 0xd64(r1)
    stfs f7, 0xd74(r1)
    stfs f8, 0xd84(r1)
    b lbl_fn_8022DD1C_000025FC
lbl_fn_8022DD1C_00002410:
    rlwinm. r0, r3, 0, 14, 14
    bne lbl_fn_8022DD1C_000025FC
    addi r3, r1, 0xd58
    psq_l f1, 0x0(r16), 0, 0
    psq_l f2, 0x8(r16), 0, 0
    psq_l f3, 0x10(r16), 0, 0
    psq_l f4, 0x18(r16), 0, 0
    psq_l f5, 0x20(r16), 0, 0
    psq_l f6, 0x28(r16), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f4, 0x18(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    psq_st f6, 0x28(r3), 0, 0
    lwz r0, 0x4c(r21)
    rlwinm. r0, r0, 0, 25, 25
    beq lbl_fn_8022DD1C_00002574
    lfs f0, 0x60(r15)
    addi r3, r1, 0xb4
    lfs f7, 0x50(r15)
    lfs f8, 0x40(r15)
    stfs f8, 0xb4(r1)
    stfs f7, 0xb8(r1)
    stfs f0, 0xbc(r1)
    bl fn_805F9940
    lfs f0, 0x5c(r15)
    fmr f17, f1
    lfs f7, 0x4c(r15)
    addi r3, r1, 0xa8
    lfs f8, 0x3c(r15)
    stfs f8, 0xa8(r1)
    stfs f7, 0xac(r1)
    stfs f0, 0xb0(r1)
    bl fn_805F9940
    lfs f0, 0x58(r15)
    fmr f16, f1
    lfs f7, 0x48(r15)
    addi r3, r1, 0x9c
    lfs f8, 0x38(r15)
    stfs f8, 0x9c(r1)
    stfs f7, 0xa0(r1)
    stfs f0, 0xa4(r1)
    bl fn_805F9940
    frsp f7, f16
    stfs f1, 0x22c(r1)
    frsp f0, f17
    stfs f16, 0x230(r1)
    fcmpo cr0, f7, f0
    stfs f17, 0x234(r1)
    ble lbl_fn_8022DD1C_000024E0
    b lbl_fn_8022DD1C_000024E4
lbl_fn_8022DD1C_000024E0:
    fmr f7, f0
lbl_fn_8022DD1C_000024E4:
    lfs f8, 0x22c(r1)
    fcmpo cr0, f8, f7
    ble lbl_fn_8022DD1C_000024F4
    b lbl_fn_8022DD1C_0000250C
lbl_fn_8022DD1C_000024F4:
    lfs f8, 0x230(r1)
    lfs f0, 0x234(r1)
    fcmpo cr0, f8, f0
    ble lbl_fn_8022DD1C_00002508
    b lbl_fn_8022DD1C_0000250C
lbl_fn_8022DD1C_00002508:
    fmr f8, f0
lbl_fn_8022DD1C_0000250C:
    frsp f1, f8
    stfs f8, 0x90(r1)
    addi r3, r1, 0x2f8
    stfs f8, 0x94(r1)
    fmr f2, f1
    fmr f3, f1
    stfs f8, 0x98(r1)
    bl fn_805F9160
    addi r3, r1, 0xd58
    addi r4, r1, 0x2f8
    addi r5, r1, 0x328
    bl fn_805F89F0
    addi r4, r1, 0x328
    addi r3, r1, 0xd58
    psq_l f1, 0x0(r4), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f4, 0x18(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    psq_st f6, 0x28(r3), 0, 0
lbl_fn_8022DD1C_00002574:
    lfs f8, 0x264(r1)
    lfs f7, 0x260(r1)
    lfs f0, 0x25c(r1)
    stfs f0, 0xd64(r1)
    lfs f0, lbl_808830D0
    stfs f7, 0xd74(r1)
    stfs f8, 0xd84(r1)
    lfs f1, 0xac(r15)
    fcmpu cr0, f0, f1
    beq lbl_fn_8022DD1C_000025F0
    addi r3, r1, 0xc68
    li r4, 0x7a
    bl fn_805F8E70
    addi r3, r1, 0xd58
    addi r4, r1, 0xc68
    addi r5, r1, 0xb18
    bl fn_805F89F0
    addi r4, r1, 0xb18
    addi r3, r1, 0xd58
    psq_l f1, 0x0(r4), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f4, 0x18(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    psq_st f6, 0x28(r3), 0, 0
lbl_fn_8022DD1C_000025F0:
    lfs f0, lbl_808830D4
    li r17, 0x1
    fsubs f14, f0, f14
lbl_fn_8022DD1C_000025FC:
    lwz r0, 0x104(r14)
    cmplwi r0, 0x1
    bne lbl_fn_8022DD1C_000026C8
    lfs f0, lbl_808830D0
    addi r3, r1, 0x2c8
    stfs f0, 0xd64(r1)
    stfs f0, 0xd74(r1)
    stfs f0, 0xd84(r1)
    lfs f8, 0x134(r14)
    lfs f0, 0xb8(r15)
    lfs f7, 0xb4(r15)
    fmuls f3, f0, f8
    lfs f0, 0xb0(r15)
    fmuls f2, f7, f8
    fmuls f1, f0, f8
    stfs f3, 0x1b8(r1)
    stfs f1, 0x1b0(r1)
    stfs f2, 0x1b4(r1)
    bl fn_805F9160
    addi r3, r1, 0xd58
    addi r4, r1, 0x2c8
    addi r5, r1, 0x298
    bl fn_805F89F0
    addi r4, r1, 0x298
    addi r3, r1, 0xd58
    psq_l f2, 0x8(r4), 0, 0
    addi r5, r1, 0x268
    psq_l f4, 0x18(r4), 0, 0
    addi r7, r15, 0xdc
    psq_l f6, 0x28(r4), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    lfs f0, 0x25c(r1)
    psq_st f4, 0x18(r3), 0, 0
    lfs f7, 0x260(r1)
    psq_st f6, 0x28(r3), 0, 0
    lfs f8, 0x264(r1)
    psq_st f1, 0x0(r3), 0, 0
    lwz r8, 0x10(r1)
    psq_st f3, 0x10(r3), 0, 0
    lwz r9, 0x14(r1)
    psq_st f5, 0x20(r3), 0, 0
    stfs f0, 0xd64(r1)
    stfs f7, 0xd74(r1)
    stfs f8, 0xd84(r1)
    lwz r4, 0x8(r15)
    lwz r6, 0x10(r15)
    bl fn_80236FFC
    b lbl_fn_8022DD1C_0000300C
lbl_fn_8022DD1C_000026C8:
    lwz r0, 0x4c(r21)
    rlwinm r3, r0, 0, 14, 14
    subis r0, r3, 0x2
    cmplwi r0, 0x0
    bne lbl_fn_8022DD1C_00002EA8
    lwz r3, 0x1ac(r15)
    cmplwi r3, 0x1
    ble lbl_fn_8022DD1C_0000300C
    lfs f0, 0x124(r21)
    fctiwz f0, f0
    stfd f0, 0xd88(r1)
    lwz r0, 0xd8c(r1)
    cmpwi r0, 0x1
    ble lbl_fn_8022DD1C_0000270C
    stfd f0, 0xd90(r1)
    lwz r22, 0xd94(r1)
    b lbl_fn_8022DD1C_00002710
lbl_fn_8022DD1C_0000270C:
    li r22, 0x1
lbl_fn_8022DD1C_00002710:
    mullw r0, r22, r3
    slwi r3, r0, 1
    bl fn_80234C84
    cmpwi r3, 0x0
    mr r20, r3
    beq lbl_fn_8022DD1C_0000300C
    lwz r5, 0x1ac(r15)
    lis r3, 0x4330
    lis r4, lbl_80742F68@ha
    lfs f0, 0x278(r1)
    subi r5, r5, 0x1
    stw r5, 0xd94(r1)
    lwz r0, 0x4c(r21)
    li r19, 0x0
    stw r3, 0xd90(r1)
    lfd f9, lbl_80742F68@l(r4)
    rlwinm. r0, r0, 0, 25, 25
    lfd f8, 0xd90(r1)
    stfs f0, 0xda4(r1)
    lfs f0, 0x27c(r1)
    fsubs f8, f8, f9
    stfs f0, 0xda0(r1)
    lfs f0, lbl_808830D4
    lfs f7, 0x280(r1)
    stfs f0, 0xd98(r1)
    fdivs f0, f7, f8
    stfs f0, 0xd9c(r1)
    beq lbl_fn_8022DD1C_00002844
    lfs f0, 0x60(r15)
    addi r3, r1, 0x84
    lfs f7, 0x50(r15)
    lfs f8, 0x40(r15)
    stfs f8, 0x84(r1)
    stfs f7, 0x88(r1)
    stfs f0, 0x8c(r1)
    bl fn_805F9940
    lfs f0, 0x5c(r15)
    fmr f15, f1
    lfs f7, 0x4c(r15)
    addi r3, r1, 0x78
    lfs f8, 0x3c(r15)
    stfs f8, 0x78(r1)
    stfs f7, 0x7c(r1)
    stfs f0, 0x80(r1)
    bl fn_805F9940
    lfs f0, 0x58(r15)
    fmr f14, f1
    lfs f7, 0x48(r15)
    addi r3, r1, 0x6c
    lfs f8, 0x38(r15)
    stfs f8, 0x6c(r1)
    stfs f7, 0x70(r1)
    stfs f0, 0x74(r1)
    bl fn_805F9940
    frsp f7, f14
    stfs f1, 0x208(r1)
    frsp f0, f15
    stfs f14, 0x20c(r1)
    fcmpo cr0, f7, f0
    stfs f15, 0x210(r1)
    ble lbl_fn_8022DD1C_00002808
    b lbl_fn_8022DD1C_0000280C
lbl_fn_8022DD1C_00002808:
    fmr f7, f0
lbl_fn_8022DD1C_0000280C:
    lfs f0, 0x208(r1)
    stfs f0, 0xd98(r1)
    frsp f0, f0
    fcmpo cr0, f0, f7
    ble lbl_fn_8022DD1C_00002824
    b lbl_fn_8022DD1C_00002844
lbl_fn_8022DD1C_00002824:
    lfs f0, 0x20c(r1)
    stfs f0, 0xd98(r1)
    frsp f0, f0
    lfs f7, 0x210(r1)
    fcmpo cr0, f0, f7
    ble lbl_fn_8022DD1C_00002840
    b lbl_fn_8022DD1C_00002844
lbl_fn_8022DD1C_00002840:
    stfs f7, 0xd98(r1)
lbl_fn_8022DD1C_00002844:
    lfs f7, 0x284(r1)
    lis r3, lbl_80742F78@ha
    lfs f0, 0xda0(r1)
    addi r25, r1, 0x214
    lfs f21, lbl_808830D0
    addi r26, r1, 0x220
    fadds f0, f0, f7
    lfs f22, lbl_808830D4
    lfd f31, lbl_80742F78@l(r3)
    addi r14, r1, 0x180
    stfd f0, 0xde0(r1)
    xoris r30, r22, 0x8000
    lfs f0, lbl_808830F4
    addi r28, r1, 0x1e0
    stfd f0, 0xda8(r1)
    addi r27, r1, 0x1ec
    lfs f0, lbl_808830F0
    addi r24, r1, 0x168
    stfd f0, 0xdb0(r1)
    addi r23, r1, 0x150
    lfs f0, lbl_808830FC
    li r18, 0x0
    stfd f0, 0xdb8(r1)
    lis r29, 0x4330
    lfs f0, lbl_808830F8
    stfd f0, 0xdc0(r1)
    lfs f0, lbl_808830D8
    stfd f0, 0xdc8(r1)
    lfs f30, lbl_808830E0
    b lbl_fn_8022DD1C_00002E68
lbl_fn_8022DD1C_000028BC:
    subi r7, r18, 0x2
    lwz r5, 0x1b0(r15)
    neg r0, r7
    subi r8, r18, 0x1
    andc r3, r0, r7
    add r10, r18, r5
    neg r0, r8
    subi r4, r4, 0x1
    srawi r3, r3, 31
    addi r6, r18, 0x1
    and r3, r7, r3
    andc r0, r0, r8
    srawi r0, r0, 31
    lwz r7, 0x1b4(r15)
    and r0, r8, r0
    add r3, r3, r5
    add r0, r0, r5
    lwz r8, 0x1a8(r15)
    divwu r12, r3, r7
    cmplw r6, r4
    divwu r11, r0, r7
    divwu r9, r10, r7
    mullw r12, r12, r7
    mullw r11, r11, r7
    subf r3, r12, r3
    mullw r9, r9, r7
    subf r11, r11, r0
    subf r0, r9, r10
    mulli r9, r3, 0x14
    mulli r3, r11, 0x14
    add r9, r8, r9
    stw r9, 0x1f8(r1)
    mulli r0, r0, 0x14
    add r3, r8, r3
    stw r3, 0x1fc(r1)
    add r0, r8, r0
    stw r0, 0x200(r1)
    bge lbl_fn_8022DD1C_00002958
    mr r4, r6
lbl_fn_8022DD1C_00002958:
    subi r0, r18, 0x1
    lwz r3, 0x1fc(r1)
    neg r6, r0
    lwz r11, 0x1b0(r15)
    andc r9, r6, r0
    psq_l f1, 0x0(r3), 0, 0
    add r6, r4, r5
    lfs f2, 0x8(r3)
    srawi r5, r9, 31
    lwz r10, 0x1b4(r15)
    srawi r4, r9, 31
    lwz r9, 0x1a8(r15)
    and r5, r0, r5
    psq_st f1, 0x0(r27), 0, 0
    and r3, r0, r4
    add r0, r18, r11
    add r4, r5, r11
    stfs f2, 0x1f4(r1)
    add r11, r3, r11
    li r17, 0x0
    divwu r3, r4, r10
    divwu r12, r0, r10
    divwu r5, r6, r7
    mullw r3, r3, r10
    mullw r5, r5, r7
    subf r3, r3, r4
    divwu r31, r11, r10
    subf r5, r5, r6
    mullw r4, r31, r10
    mullw r12, r12, r10
    subf r10, r12, r0
    subf r0, r4, r11
    mulli r4, r3, 0x14
    mulli r3, r10, 0x14
    add r4, r9, r4
    lfs f29, 0x10(r4)
    add r3, r9, r3
    mulli r0, r0, 0x14
    lfs f28, 0x10(r3)
    lfs f26, 0xc(r3)
    add r3, r9, r0
    mulli r4, r5, 0x14
    lfs f27, 0xc(r3)
    add r0, r8, r4
    stw r0, 0x204(r1)
    mulli r31, r19, 0x14
    b lbl_fn_8022DD1C_00002E4C
lbl_fn_8022DD1C_00002A14:
    addi r0, r17, 0x1
    stw r29, 0xd90(r1)
    xoris r0, r0, 0x8000
    cmpwi r18, 0x0
    stw r0, 0xd94(r1)
    lfd f0, 0xd90(r1)
    stw r30, 0xd8c(r1)
    fsubs f7, f0, f31
    stw r29, 0xd88(r1)
    lfd f0, 0xd88(r1)
    fsubs f0, f0, f31
    fdivs f25, f7, f0
    bne lbl_fn_8022DD1C_00002A4C
    lfs f25, lbl_808830D4
lbl_fn_8022DD1C_00002A4C:
    fcmpu cr0, f22, f25
    bne lbl_fn_8022DD1C_00002A74
    lwz r3, 0x200(r1)
    fmr f24, f28
    fmr f23, f26
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x8(r3)
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x1e8(r1)
    b lbl_fn_8022DD1C_00002BE8
lbl_fn_8022DD1C_00002A74:
    fsubs f0, f28, f29
    lwz r4, 0x1fc(r1)
    lwz r3, 0x1f8(r1)
    fmuls f14, f25, f25
    stfd f0, 0xdd0(r1)
    fsubs f0, f26, f27
    stfd f0, 0xdd8(r1)
    fmuls f23, f14, f25
    lfd f0, 0xdb8(r1)
    lwz r6, 0x204(r1)
    fmuls f7, f0, f14
    lfd f0, 0xda8(r1)
    fneg f8, f23
    lfs f11, 0x4(r4)
    fmuls f10, f0, f14
    lfd f0, 0xdc0(r1)
    fmsubs f9, f0, f23, f7
    lfd f7, 0xdb0(r1)
    lfs f18, 0x4(r3)
    fmadds f10, f7, f23, f10
    lfd f7, 0xdc8(r1)
    lwz r5, 0x200(r1)
    fadds f15, f7, f9
    lfs f12, 0x8(r4)
    fmadds f7, f7, f14, f8
    lfs f19, 0x0(r4)
    fadds f10, f25, f10
    fmuls f20, f11, f15
    fsubs f16, f7, f25
    lfs f0, 0x8(r3)
    lfs f17, 0x0(r3)
    fmuls f24, f12, f15
    lfs f8, 0x4(r5)
    fmuls f18, f18, f16
    fmuls f0, f0, f16
    lfs f9, 0x8(r5)
    fmuls f17, f17, f16
    lfs f7, 0x0(r5)
    fmuls f19, f19, f15
    fmuls f16, f8, f10
    fsubs f23, f23, f14
    lfs f12, 0x4(r6)
    fmuls f14, f9, f10
    lfs f11, 0x0(r6)
    fadds f8, f18, f20
    stfs f20, 0x4c(r1)
    fmuls f20, f7, f10
    lfs f13, 0x8(r6)
    fadds f9, f0, f24
    stfs f14, 0x5c(r1)
    fadds f15, f17, f19
    addi r3, r1, 0x1a4
    fadds f10, f9, f14
    stfs f16, 0x58(r1)
    fmuls f12, f12, f23
    fadds f7, f8, f16
    stfs f17, 0x3c(r1)
    fmuls f11, f11, f23
    fadds f14, f15, f20
    stfs f12, 0x64(r1)
    fadds f12, f7, f12
    fmuls f13, f13, f23
    stfs f11, 0x60(r1)
    fadds f11, f14, f11
    fmuls f16, f12, f30
    stfs f13, 0x68(r1)
    fadds f13, f10, f13
    fmuls f17, f11, f30
    stfs f16, 0x1a8(r1)
    lfd f16, 0xdd0(r1)
    fmuls f2, f13, f30
    stfs f24, 0x50(r1)
    fmadds f24, f25, f16, f29
    lfd f16, 0xdd8(r1)
    stfs f17, 0x1a4(r1)
    fmadds f23, f25, f16, f27
    psq_l f1, 0x0(r3), 0, 0
    stfs f19, 0x48(r1)
    stfs f20, 0x54(r1)
    stfs f18, 0x40(r1)
    stfs f0, 0x44(r1)
    stfs f15, 0x30(r1)
    stfs f8, 0x34(r1)
    stfs f9, 0x38(r1)
    stfs f14, 0x24(r1)
    stfs f7, 0x28(r1)
    stfs f10, 0x2c(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f13, 0x20(r1)
    stfs f2, 0x1ac(r1)
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x1e8(r1)
lbl_fn_8022DD1C_00002BE8:
    lfs f0, 0xd98(r1)
    cmpwi r18, 0x0
    fmuls f24, f24, f0
    bne lbl_fn_8022DD1C_00002C40
    lwz r3, 0x204(r1)
    lfs f0, 0x1e8(r1)
    lfs f7, 0x8(r3)
    lfs f9, 0x4(r3)
    fsubs f2, f7, f0
    lfs f7, 0x0(r3)
    lfs f8, 0x1e4(r1)
    addi r3, r1, 0x198
    lfs f0, 0x1e0(r1)
    fsubs f8, f9, f8
    fsubs f0, f7, f0
    stfs f2, 0x1a0(r1)
    stfs f8, 0x19c(r1)
    stfs f0, 0x198(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r26), 0, 0
    stfs f2, 0x228(r1)
    b lbl_fn_8022DD1C_00002C80
lbl_fn_8022DD1C_00002C40:
    lfs f7, 0x1e8(r1)
    addi r3, r1, 0x18c
    lfs f0, 0x1f4(r1)
    lfs f9, 0x1e4(r1)
    fsubs f2, f7, f0
    lfs f8, 0x1f0(r1)
    lfs f7, 0x1e0(r1)
    lfs f0, 0x1ec(r1)
    fsubs f8, f9, f8
    stfs f2, 0x194(r1)
    fsubs f0, f7, f0
    stfs f8, 0x190(r1)
    stfs f0, 0x18c(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r26), 0, 0
    stfs f2, 0x228(r1)
lbl_fn_8022DD1C_00002C80:
    lwz r0, 0x4c(r21)
    psq_l f1, 0x0(r28), 0, 0
    lfs f2, 0x1e8(r1)
    clrlwi. r0, r0, 31
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0x1f4(r1)
    beq lbl_fn_8022DD1C_00002D30
    psq_l f1, 0x0(r26), 0, 0
    mr r3, r26
    lfs f2, 0x228(r1)
    addi r4, r1, 0x174
    psq_st f1, 0x0(r25), 0, 0
    addi r5, r1, 0x180
    stfs f2, 0x21c(r1)
    stfs f21, 0x174(r1)
    stfs f22, 0x178(r1)
    stfs f21, 0x17c(r1)
    bl fn_805F99B0
    lfs f0, 0x214(r1)
    li r0, 0x0
    psq_l f1, 0x0(r14), 0, 0
    lfs f2, 0x188(r1)
    fcmpu cr0, f21, f0
    psq_st f1, 0x0(r26), 0, 0
    stfs f2, 0x228(r1)
    bne lbl_fn_8022DD1C_00002D04
    lfs f0, 0x218(r1)
    fcmpu cr0, f21, f0
    bne lbl_fn_8022DD1C_00002D04
    lfs f0, 0x21c(r1)
    fcmpu cr0, f21, f0
    bne lbl_fn_8022DD1C_00002D04
    li r0, 0x1
lbl_fn_8022DD1C_00002D04:
    cmpwi r0, 0x0
    bne lbl_fn_8022DD1C_00002D98
    fmr f1, f23
    addi r3, r1, 0xae8
    addi r4, r1, 0x214
    bl fn_805F9050
    addi r4, r1, 0x220
    addi r3, r1, 0xae8
    mr r5, r4
    bl fn_805F93C0
    b lbl_fn_8022DD1C_00002D98
lbl_fn_8022DD1C_00002D30:
    lfs f8, 0x2c(r16)
    mr r3, r25
    lfs f0, 0x1e8(r1)
    addi r4, r1, 0x220
    lfs f9, 0x1c(r16)
    addi r5, r1, 0x150
    fsubs f2, f8, f0
    lfs f10, 0xc(r16)
    lfs f7, 0x1e4(r1)
    lfs f0, 0x1e0(r1)
    fsubs f7, f9, f7
    stfs f10, 0x15c(r1)
    fsubs f0, f10, f0
    stfs f7, 0x16c(r1)
    stfs f0, 0x168(r1)
    psq_l f1, 0x0(r24), 0, 0
    stfs f9, 0x160(r1)
    stfs f8, 0x164(r1)
    stfs f2, 0x170(r1)
    psq_st f1, 0x0(r25), 0, 0
    stfs f2, 0x21c(r1)
    bl fn_805F99B0
    psq_l f1, 0x0(r23), 0, 0
    lfs f2, 0x158(r1)
    psq_st f1, 0x0(r26), 0, 0
    stfs f2, 0x228(r1)
lbl_fn_8022DD1C_00002D98:
    addi r3, r1, 0x220
    bl fn_805F9920
    fcmpo cr0, f1, f21
    ble lbl_fn_8022DD1C_00002DB4
    addi r3, r1, 0x220
    mr r4, r3
    bl fn_805F98D0
lbl_fn_8022DD1C_00002DB4:
    lfs f0, 0x220(r1)
    fsubs f8, f22, f25
    lfs f11, 0x1e0(r1)
    add r3, r20, r31
    lfs f14, 0x228(r1)
    fneg f10, f24
    fmadds f15, f24, f0, f11
    lfs f9, 0x224(r1)
    cmpwi r18, 0x0
    lfs f12, 0x1e4(r1)
    addi r19, r19, 0x2
    stfsx f15, r20, r31
    lfs f7, 0xd9c(r1)
    addi r31, r31, 0x28
    lfs f0, 0xda4(r1)
    lfs f13, 0x1e8(r1)
    fnmsubs f7, f7, f8, f0
    fmadds f0, f24, f9, f12
    fmadds f8, f24, f14, f13
    stfs f0, 0x4(r3)
    stfs f8, 0x8(r3)
    lfs f0, 0x220(r1)
    lfs f9, 0x228(r1)
    lfs f8, 0x224(r1)
    fmadds f0, f10, f0, f11
    fmadds f9, f10, f9, f13
    stfs f0, 0x14(r3)
    fmadds f0, f10, f8, f12
    stfs f0, 0x18(r3)
    lfd f0, 0xde0(r1)
    stfs f9, 0x1c(r3)
    stfs f7, 0xc(r3)
    stfs f0, 0x10(r3)
    lfs f0, 0xda0(r1)
    stfs f7, 0x20(r3)
    stfs f0, 0x24(r3)
    beq lbl_fn_8022DD1C_00002E54
    addi r17, r17, 0x1
lbl_fn_8022DD1C_00002E4C:
    cmpw r17, r22
    blt lbl_fn_8022DD1C_00002A14
lbl_fn_8022DD1C_00002E54:
    lfs f7, 0xda4(r1)
    addi r18, r18, 0x1
    lfs f0, 0xd9c(r1)
    fadds f7, f7, f0
    stfs f7, 0xda4(r1)
lbl_fn_8022DD1C_00002E68:
    lwz r4, 0x1ac(r15)
    cmplw r18, r4
    blt lbl_fn_8022DD1C_000028BC
    lwz r0, 0x14(r1)
    mr r3, r19
    stw r0, 0x8(r1)
    mr r4, r20
    lwz r10, 0x10(r1)
    addi r7, r1, 0x268
    lwz r5, 0x8(r15)
    li r9, 0x1
    lwz r6, 0xc(r15)
    lwz r8, 0x10(r15)
    lfs f1, 0x68(r21)
    bl fn_80236B84
    b lbl_fn_8022DD1C_0000300C
lbl_fn_8022DD1C_00002EA8:
    li r3, 0x4
    bl fn_80234C84
    cmpwi r3, 0x0
    mr r16, r3
    beq lbl_fn_8022DD1C_0000300C
    lfs f8, 0x134(r14)
    mr r4, r16
    lfs f0, 0xb0(r15)
    mr r5, r16
    fmuls f14, f14, f8
    lfs f7, 0xb4(r15)
    fneg f11, f0
    lfs f16, lbl_808830D0
    fmuls f15, f15, f8
    lfs f9, 0x278(r1)
    fsubs f10, f8, f14
    lfs f8, 0x280(r1)
    fmuls f12, f7, f15
    lfs f7, 0x27c(r1)
    lfs f0, 0x284(r1)
    fadds f8, f9, f8
    fmuls f10, f11, f10
    fadds f0, f7, f0
    stfs f10, 0x0(r3)
    stfs f12, 0x4(r3)
    stfs f16, 0x8(r3)
    lfs f12, 0x134(r14)
    lfs f11, 0xb0(r15)
    lfs f13, 0xb4(r15)
    fsubs f10, f12, f14
    fneg f11, f11
    fneg f13, f13
    fsubs f12, f12, f15
    fmuls f10, f11, f10
    stfs f10, 0x14(r3)
    fmuls f10, f13, f12
    stfs f10, 0x18(r3)
    stfs f16, 0x1c(r3)
    lfs f10, 0xb0(r15)
    lfs f11, 0xb4(r15)
    fmuls f10, f10, f14
    fmuls f11, f11, f15
    stfs f10, 0x28(r3)
    stfs f11, 0x2c(r3)
    stfs f16, 0x30(r3)
    lfs f12, 0xb4(r15)
    lfs f11, 0x134(r14)
    lfs f10, 0xb0(r15)
    fneg f12, f12
    fsubs f11, f11, f15
    fmuls f10, f10, f14
    stfs f10, 0x3c(r3)
    fmuls f10, f12, f11
    stfs f10, 0x40(r3)
    stfs f16, 0x44(r3)
    stfs f8, 0xc(r3)
    stfs f0, 0x10(r3)
    stfs f8, 0x20(r3)
    stfs f7, 0x24(r3)
    stfs f9, 0x34(r3)
    stfs f0, 0x38(r3)
    stfs f9, 0x48(r3)
    stfs f7, 0x4c(r3)
    addi r3, r1, 0xd58
    bl fn_805F93C0
    addi r4, r16, 0x14
    addi r3, r1, 0xd58
    mr r5, r4
    bl fn_805F93C0
    addi r4, r16, 0x28
    addi r3, r1, 0xd58
    mr r5, r4
    bl fn_805F93C0
    addi r4, r16, 0x3c
    addi r3, r1, 0xd58
    mr r5, r4
    bl fn_805F93C0
    lwz r0, 0x14(r1)
    mr r4, r16
    stw r0, 0x8(r1)
    mr r9, r17
    lwz r10, 0x10(r1)
    addi r7, r1, 0x268
    lwz r5, 0x8(r15)
    li r3, 0x4
    lwz r6, 0xc(r15)
    lwz r8, 0x10(r15)
    lfs f1, 0x68(r21)
    bl fn_80236B84
lbl_fn_8022DD1C_0000300C:
    li r0, 0xf48
    addi r11, r1, 0xe30
    psq_lx f31, r1, r0, 0, 0
    lfd f31, 0xf40(r1)
    li r0, 0xf38
    psq_lx f30, r1, r0, 0, 0
    lfd f30, 0xf30(r1)
    li r0, 0xf28
    psq_lx f29, r1, r0, 0, 0
    lfd f29, 0xf20(r1)
    li r0, 0xf18
    psq_lx f28, r1, r0, 0, 0
    lfd f28, 0xf10(r1)
    li r0, 0xf08
    psq_lx f27, r1, r0, 0, 0
    lfd f27, 0xf00(r1)
    li r0, 0xef8
    psq_lx f26, r1, r0, 0, 0
    lfd f26, 0xef0(r1)
    li r0, 0xee8
    psq_lx f25, r1, r0, 0, 0
    lfd f25, 0xee0(r1)
    li r0, 0xed8
    psq_lx f24, r1, r0, 0, 0
    lfd f24, 0xed0(r1)
    li r0, 0xec8
    psq_lx f23, r1, r0, 0, 0
    lfd f23, 0xec0(r1)
    li r0, 0xeb8
    psq_lx f22, r1, r0, 0, 0
    lfd f22, 0xeb0(r1)
    li r0, 0xea8
    psq_lx f21, r1, r0, 0, 0
    lfd f21, 0xea0(r1)
    li r0, 0xe98
    psq_lx f20, r1, r0, 0, 0
    lfd f20, 0xe90(r1)
    li r0, 0xe88
    psq_lx f19, r1, r0, 0, 0
    lfd f19, 0xe80(r1)
    li r0, 0xe78
    psq_lx f18, r1, r0, 0, 0
    lfd f18, 0xe70(r1)
    li r0, 0xe68
    psq_lx f17, r1, r0, 0, 0
    lfd f17, 0xe60(r1)
    li r0, 0xe58
    psq_lx f16, r1, r0, 0, 0
    lfd f16, 0xe50(r1)
    li r0, 0xe48
    psq_lx f15, r1, r0, 0, 0
    lfd f15, 0xe40(r1)
    li r0, 0xe38
    psq_lx f14, r1, r0, 0, 0
    lfd f14, 0xe30(r1)
    bl _restgpr_14
    lwz r0, 0xf54(r1)
    mtlr r0
    addi r1, r1, 0xf50
    blr
}
