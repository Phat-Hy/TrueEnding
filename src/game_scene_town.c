#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_8008BBD8(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_801539E0(void);
extern void fn_80155DAC(void);
extern void fn_8016DA4C(void);
extern void fn_80188A70(void);
extern void fn_80188AA0(void);
extern void fn_80191960(void);
extern void fn_8019198C(void);
extern void fn_80192758(void);
extern void fn_801AB6B8(void);
extern void fn_801AC14C(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F9160(void);
extern void fn_805F93C0(void);
extern void fn_805F9940(void);
extern void fn_80680770(void);
extern void fn_80682428(void);
extern void fn_80686EA4(void);
extern void fn_80695B00(void);

/* External data declarations */
extern u8 lbl_8073A950[];
extern u8 lbl_8077CF44[];
extern u8 lbl_8077F6B8[];
extern u8 lbl_8077F6C4[];
extern u8 lbl_8077F6D0[];
extern u8 lbl_8077F6D8[];
extern u8 lbl_8077F7E8[];
extern u8 lbl_8077F860[];
extern u8 lbl_8077F8D8[];
extern u8 lbl_8077FAB8[];
extern u8 lbl_8077FAD4[];
extern u8 lbl_8077FB48[];
extern u8 lbl_8077FB54[];
extern u8 lbl_8077FB60[];
extern u8 lbl_807C7030[];
extern u8 lbl_807C7B50[];
extern u8 lbl_807C7B90[];
extern u8 lbl_807C7C30[];
extern u8 lbl_807C7C38[];

/* Small data declarations */
extern u32 lbl_8087EFA8;
extern u32 lbl_8087F0B1;
extern u32 lbl_8087F0BE;
extern u32 lbl_8087F0E3;
extern u32 lbl_8087F0E4;
extern u32 lbl_80882230;
extern u32 lbl_80882234;
extern u32 lbl_80882238;
extern u32 lbl_8088223C;
extern u32 lbl_80882284;
extern u32 lbl_80882288;
extern u32 lbl_80882290;
extern u32 lbl_80882294;
extern u32 lbl_80882298;
extern u32 lbl_8088229C;
extern u32 lbl_808822A0;
extern u32 lbl_808822A4;
extern u32 lbl_808822A8;

/* Function declarations */
void fn_801A9A94(void);
void fn_801A9B80(void);
void fn_801A9E94(void);
void fn_801AA0E4(void);
void fn_801AA114(void);
void fn_801AA230(void);
void fn_801AA550(void);
void fn_801AA7A0(void);
void fn_801AA7D0(void);
void fn_801AA8EC(void);
void fn_801AA94C(void);
void fn_801AA95C(void);
void fn_801AA964(void);
void fn_801AA9A4(void);
void fn_801AA9E4(void);
void fn_801AAA24(void);
void fn_801AAA64(void);
void fn_801AAAA4(void);
void fn_801AAAE4(void);
void fn_801AAB24(void);
void fn_801AAB64(void);
void fn_801AAC48(void);
void fn_801AB294(void);

asm void fn_801A9A94(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r7, lbl_8077F8D8@ha
    li r6, 0x69
    stw r0, 0x34(r1)
    addi r7, r7, lbl_8077F8D8@l
    li r0, 0x1
    lfs f0, lbl_80882230
    stw r31, 0x2c(r1)
    li r8, 0x1
    lfs f1, lbl_80882234
    stw r30, 0x28(r1)
    mr r30, r4
    lfs f2, lbl_80882238
    stw r29, 0x24(r1)
    mr r29, r3
    stw r5, 0x8(r3)
    li r5, 0x87
    stw r7, 0x0(r3)
    li r7, 0x0
    stw r4, 0x4(r3)
    stw r6, 0x560(r4)
    li r4, 0x0
    li r6, 0x0
    lwz r3, 0x4(r3)
    stw r0, 0x3fc(r3)
    addi r31, r3, 0xb0
    mr r3, r31
    stfs f0, 0x24c(r31)
    bl fn_80097C08
    lfs f0, lbl_80882230
    addi r4, r1, 0x14
    stfs f0, 0x238(r31)
    mr r3, r29
    lfs f5, lbl_80882234
    lfs f4, lbl_80882284
    lfs f3, 0x52c(r30)
    lfs f0, 0x528(r30)
    fadds f6, f3, f4
    lfs f3, 0x530(r30)
    fadds f0, f0, f5
    lwz r5, 0x4(r29)
    stfs f6, 0x18(r1)
    fadds f2, f3, f5
    stfs f0, 0x14(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x528(r5), 0, 0
    stfs f2, 0x530(r5)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r0, 0x34(r1)
    stfs f5, 0x8(r1)
    stfs f4, 0xc(r1)
    stfs f5, 0x10(r1)
    stfs f2, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_801A9B80(void)
{
    nofralloc
    stwu r1, -0x240(r1)
    mflr r0
    stw r0, 0x244(r1)
    addi r11, r1, 0x210
    stfd f31, 0x230(r1)
    psq_st f31, 0x238(r1), 0, 0
    stfd f30, 0x220(r1)
    psq_st f30, 0x228(r1), 0, 0
    stfd f29, 0x210(r1)
    psq_st f29, 0x218(r1), 0, 0
    bl _savegpr_27
    lwz r5, 0x4(r3)
    mr r27, r3
    lfs f7, lbl_80882234
    addi r3, r1, 0x198
    lfs f0, lbl_80882230
    addi r28, r5, 0xb0
    stfs f7, 0x38(r1)
    li r29, 0x0
    li r4, 0x79
    stfs f7, 0x3c(r1)
    stfs f0, 0x40(r1)
    lfs f1, 0x538(r5)
    bl fn_805F8E70
    addi r4, r1, 0x38
    addi r3, r1, 0x198
    mr r5, r4
    bl fn_805F93C0
    lwz r4, 0x8(r27)
    addi r3, r1, 0x1c8
    lfs f1, 0x540(r4)
    lfs f2, 0x544(r4)
    lfs f3, 0x548(r4)
    bl fn_805F9160
    lwz r30, 0x4(r27)
    addi r31, r1, 0x168
    lfs f7, lbl_80882234
    lfs f0, lbl_80882230
    stfs f7, 0x194(r1)
    stfs f7, 0x18c(r1)
    stfs f7, 0x188(r1)
    stfs f7, 0x184(r1)
    stfs f7, 0x180(r1)
    stfs f7, 0x178(r1)
    stfs f7, 0x174(r1)
    stfs f7, 0x170(r1)
    stfs f7, 0x16c(r1)
    stfs f0, 0x190(r1)
    stfs f0, 0x17c(r1)
    stfs f0, 0x168(r1)
    lfs f1, 0x53c(r30)
    fcmpu cr0, f7, f1
    beq lbl_fn_801A9B80_00000210
    addi r3, r1, 0x78
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0x78
    addi r5, r1, 0x48
    bl fn_805F89F0
    addi r3, r1, 0x48
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_801A9B80_00000210:
    lfs f0, lbl_80882234
    lfs f1, 0x538(r30)
    fcmpu cr0, f0, f1
    beq lbl_fn_801A9B80_00000270
    addi r3, r1, 0xd8
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0xd8
    addi r5, r1, 0xa8
    bl fn_805F89F0
    addi r3, r1, 0xa8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_801A9B80_00000270:
    lfs f0, lbl_80882234
    lfs f1, 0x534(r30)
    fcmpu cr0, f0, f1
    beq lbl_fn_801A9B80_000002D0
    addi r3, r1, 0x138
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0x138
    addi r5, r1, 0x108
    bl fn_805F89F0
    addi r3, r1, 0x108
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_801A9B80_000002D0:
    addi r4, r1, 0x1c8
    addi r3, r1, 0x168
    mr r5, r4
    bl fn_805F89F0
    lfs f9, 0x40(r1)
    lfs f8, lbl_8088223C
    lfs f0, 0x3c(r1)
    fmuls f10, f9, f8
    lfs f7, 0x38(r1)
    fmuls f11, f0, f8
    lwz r3, 0x4(r27)
    fmuls f12, f7, f8
    lfs f9, lbl_80882234
    lfs f0, 0x530(r3)
    lfs f7, 0x52c(r3)
    fadds f13, f0, f10
    lfs f0, 0x528(r3)
    fadds f7, f7, f11
    lfs f8, lbl_80882288
    fadds f0, f0, f12
    stfs f9, 0x8(r1)
    fadds f31, f13, f9
    stfs f8, 0xc(r1)
    fadds f30, f7, f8
    fadds f29, f0, f9
    stfs f31, 0x1f4(r1)
    stfs f29, 0x1d4(r1)
    stfs f30, 0x1e4(r1)
    lwz r3, 0x8(r27)
    stfs f9, 0x10(r1)
    lwz r4, 0xf1c(r3)
    stfs f12, 0x14(r1)
    cmpwi r4, 0x0
    stfs f11, 0x18(r1)
    stfs f10, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f7, 0x24(r1)
    stfs f13, 0x28(r1)
    stfs f29, 0x2c(r1)
    stfs f30, 0x30(r1)
    stfs f31, 0x34(r1)
    beq lbl_fn_801A9B80_000003AC
    addi r3, r1, 0x1c8
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    psq_st f2, 0x8(r4), 0, 0
    psq_st f3, 0x10(r4), 0, 0
    psq_st f4, 0x18(r4), 0, 0
    psq_st f5, 0x20(r4), 0, 0
    psq_st f6, 0x28(r4), 0, 0
lbl_fn_801A9B80_000003AC:
    lfs f29, 0x234(r28)
    mr r3, r28
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f29, f1
    cror eq, gt, eq
    bne lbl_fn_801A9B80_000003CC
    li r29, 0x1
lbl_fn_801A9B80_000003CC:
    psq_l f31, 0x238(r1), 0, 0
    mr r3, r29
    lfd f31, 0x230(r1)
    psq_l f30, 0x228(r1), 0, 0
    lfd f30, 0x220(r1)
    psq_l f29, 0x218(r1), 0, 0
    lfd f29, 0x210(r1)
    addi r11, r1, 0x210
    bl _restgpr_27
    lwz r0, 0x244(r1)
    mtlr r0
    addi r1, r1, 0x240
    blr
}

asm void fn_801A9E94(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    lis r5, lbl_8073A950@ha
    li r7, 0x0
    stw r0, 0x84(r1)
    addi r5, r5, lbl_8073A950@l
    mr r6, r5
    stw r31, 0x7c(r1)
    mr r31, r3
    li r3, 0xc
    stw r30, 0x78(r1)
    stw r29, 0x74(r1)
    stw r28, 0x70(r1)
    mr r28, r4
    li r4, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_801A9E94_000004B4
    lwz r8, 0x4(r28)
    lis r4, lbl_8077F860@ha
    stw r8, 0x4(r3)
    addi r4, r4, lbl_8077F860@l
    lwz r5, 0x8(r28)
    li r7, 0x69
    stw r4, 0x0(r3)
    li r0, 0x1
    lfs f0, lbl_80882230
    li r4, 0x0
    stw r5, 0x8(r3)
    li r5, 0x88
    lfs f1, lbl_80882234
    li r6, 0x1
    stw r7, 0x560(r8)
    li r7, 0x0
    lfs f2, lbl_80882238
    li r8, 0x1
    lwz r3, 0x4(r3)
    stw r0, 0x3fc(r3)
    addi r29, r3, 0xb0
    mr r3, r29
    stfs f0, 0x24c(r29)
    bl fn_80097C08
    lfs f0, lbl_80882230
    stfs f0, 0x238(r29)
lbl_fn_801A9E94_000004B4:
    lis r3, lbl_8077F6B8@ha
    lwzu r5, lbl_8077F6B8@l(r3)
    lwz r6, 0x4(r28)
    li r0, 0x0
    lwz r4, 0x4(r3)
    lwz r3, 0x8(r3)
    stw r6, 0x8(r1)
    stw r0, 0x0(r31)
    lbz r0, lbl_8087F0E3
    stw r30, 0xc(r1)
    extsb. r0, r0
    stw r5, 0x1c(r1)
    stw r4, 0x20(r1)
    stw r3, 0x24(r1)
    stw r5, 0x10(r1)
    stw r4, 0x14(r1)
    stw r3, 0x18(r1)
    stw r5, 0x50(r1)
    stw r4, 0x54(r1)
    stw r3, 0x58(r1)
    stw r6, 0x5c(r1)
    stw r30, 0x60(r1)
    bne lbl_fn_801A9E94_00000538
    lis r6, lbl_807C7C30@ha
    lis r4, fn_801AA0E4@ha
    lis r3, fn_801AA114@ha
    li r0, 0x1
    addi r3, r3, fn_801AA114@l
    addi r5, r6, lbl_807C7C30@l
    addi r4, r4, fn_801AA0E4@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C7C30@l(r6)
    stb r0, lbl_8087F0E3
lbl_fn_801A9E94_00000538:
    lwz r7, 0x50(r1)
    addi r3, r1, 0x3c
    lwz r6, 0x54(r1)
    lwz r5, 0x58(r1)
    lwz r4, 0x5c(r1)
    lwz r0, 0x60(r1)
    stw r7, 0x3c(r1)
    stw r6, 0x40(r1)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_801A9E94_0000060C
    lwz r7, 0x3c(r1)
    li r3, 0x14
    lwz r6, 0x40(r1)
    lwz r5, 0x44(r1)
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r7, 0x28(r1)
    stw r6, 0x2c(r1)
    stw r5, 0x30(r1)
    stw r4, 0x34(r1)
    stw r0, 0x38(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_801A9E94_000005D0
    lis r3, __files@ha
    lis r4, lbl_8077FAD4@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077FAD4@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801A9E94_000005D0:
    cmpwi r30, 0x0
    beq lbl_fn_801A9E94_00000600
    lwz r0, 0x28(r1)
    stw r0, 0x0(r30)
    lwz r0, 0x2c(r1)
    stw r0, 0x4(r30)
    lwz r0, 0x30(r1)
    stw r0, 0x8(r30)
    lwz r0, 0x34(r1)
    stw r0, 0xc(r30)
    lwz r0, 0x38(r1)
    stw r0, 0x10(r30)
lbl_fn_801A9E94_00000600:
    stw r30, 0x4(r31)
    li r0, 0x1
    b lbl_fn_801A9E94_00000610
lbl_fn_801A9E94_0000060C:
    li r0, 0x0
lbl_fn_801A9E94_00000610:
    cmpwi r0, 0x0
    beq lbl_fn_801A9E94_00000628
    lis r3, lbl_807C7C30@ha
    addi r3, r3, lbl_807C7C30@l
    stw r3, 0x0(r31)
    b lbl_fn_801A9E94_00000630
lbl_fn_801A9E94_00000628:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_801A9E94_00000630:
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    lwz r29, 0x74(r1)
    lwz r28, 0x70(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_801AA0E4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r12, 0x0(r3)
    lwz r3, 0xc(r12)
    lwz r4, 0x10(r12)
    bl fn_80695B00
    nop
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801AA114(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r5, 0x3
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    mr r29, r4
    bne lbl_fn_801AA114_000006B8
    lis r3, lbl_8077F6D8@ha
    addi r3, r3, lbl_8077F6D8@l
    stw r3, 0x0(r4)
    b lbl_fn_801AA114_00000780
lbl_fn_801AA114_000006B8:
    cmpwi r5, 0x0
    bne lbl_fn_801AA114_00000730
    lwz r31, 0x0(r3)
    li r3, 0x14
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_801AA114_000006F8
    lis r3, __files@ha
    lis r4, lbl_8077FAD4@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077FAD4@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801AA114_000006F8:
    cmpwi r30, 0x0
    beq lbl_fn_801AA114_00000728
    lwz r0, 0x4(r31)
    lwz r3, 0x0(r31)
    stw r3, 0x0(r30)
    stw r0, 0x4(r30)
    lwz r0, 0x8(r31)
    stw r0, 0x8(r30)
    lwz r0, 0xc(r31)
    stw r0, 0xc(r30)
    lwz r0, 0x10(r31)
    stw r0, 0x10(r30)
lbl_fn_801AA114_00000728:
    stw r30, 0x0(r29)
    b lbl_fn_801AA114_00000780
lbl_fn_801AA114_00000730:
    cmpwi r5, 0x1
    bne lbl_fn_801AA114_0000074C
    lwz r3, 0x0(r4)
    bl dtor_80084684
    li r0, 0x0
    stw r0, 0x0(r29)
    b lbl_fn_801AA114_00000780
lbl_fn_801AA114_0000074C:
    lwz r5, 0x0(r4)
    lis r3, lbl_8077F6D8@ha
    lwz r4, lbl_8077F6D8@l(r3)
    lwz r3, 0x0(r5)
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_801AA114_00000778
    lwz r0, 0x0(r30)
    stw r0, 0x0(r29)
    b lbl_fn_801AA114_00000780
lbl_fn_801AA114_00000778:
    li r0, 0x0
    stw r0, 0x0(r29)
lbl_fn_801AA114_00000780:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801AA230(void)
{
    nofralloc
    stwu r1, -0x240(r1)
    mflr r0
    stw r0, 0x244(r1)
    stfd f31, 0x230(r1)
    psq_st f31, 0x238(r1), 0, 0
    stfd f30, 0x220(r1)
    psq_st f30, 0x228(r1), 0, 0
    stfd f29, 0x210(r1)
    psq_st f29, 0x218(r1), 0, 0
    stw r31, 0x20c(r1)
    stw r30, 0x208(r1)
    stw r29, 0x204(r1)
    li r29, 0x0
    stw r28, 0x200(r1)
    mr r28, r3
    lwz r4, 0x8(r3)
    lwz r0, 0x560(r4)
    cmpwi r0, 0x65
    beq lbl_fn_801AA230_000007F8
    cmpwi r0, 0x64
    beq lbl_fn_801AA230_000007F8
    li r29, 0x1
    b lbl_fn_801AA230_00000A80
lbl_fn_801AA230_000007F8:
    lfs f7, lbl_80882234
    li r4, 0x79
    lfs f0, lbl_80882230
    stfs f7, 0x38(r1)
    stfs f7, 0x3c(r1)
    stfs f0, 0x40(r1)
    lwz r5, 0x4(r3)
    addi r3, r1, 0x198
    lfs f1, 0x538(r5)
    bl fn_805F8E70
    addi r4, r1, 0x38
    addi r3, r1, 0x198
    mr r5, r4
    bl fn_805F93C0
    lwz r4, 0x8(r28)
    addi r3, r1, 0x1c8
    lfs f1, 0x540(r4)
    lfs f2, 0x544(r4)
    lfs f3, 0x548(r4)
    bl fn_805F9160
    lwz r30, 0x4(r28)
    addi r31, r1, 0x168
    lfs f7, lbl_80882234
    lfs f0, lbl_80882230
    stfs f7, 0x194(r1)
    stfs f7, 0x18c(r1)
    stfs f7, 0x188(r1)
    stfs f7, 0x184(r1)
    stfs f7, 0x180(r1)
    stfs f7, 0x178(r1)
    stfs f7, 0x174(r1)
    stfs f7, 0x170(r1)
    stfs f7, 0x16c(r1)
    stfs f0, 0x190(r1)
    stfs f0, 0x17c(r1)
    stfs f0, 0x168(r1)
    lfs f1, 0x53c(r30)
    fcmpu cr0, f7, f1
    beq lbl_fn_801AA230_000008E4
    addi r3, r1, 0x78
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0x78
    addi r5, r1, 0x48
    bl fn_805F89F0
    addi r3, r1, 0x48
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_801AA230_000008E4:
    lfs f0, lbl_80882234
    lfs f1, 0x538(r30)
    fcmpu cr0, f0, f1
    beq lbl_fn_801AA230_00000944
    addi r3, r1, 0xd8
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0xd8
    addi r5, r1, 0xa8
    bl fn_805F89F0
    addi r3, r1, 0xa8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_801AA230_00000944:
    lfs f0, lbl_80882234
    lfs f1, 0x534(r30)
    fcmpu cr0, f0, f1
    beq lbl_fn_801AA230_000009A4
    addi r3, r1, 0x138
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0x138
    addi r5, r1, 0x108
    bl fn_805F89F0
    addi r3, r1, 0x108
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_801AA230_000009A4:
    addi r4, r1, 0x1c8
    addi r3, r1, 0x168
    mr r5, r4
    bl fn_805F89F0
    lfs f9, 0x40(r1)
    lfs f8, lbl_8088223C
    lfs f0, 0x3c(r1)
    fmuls f10, f9, f8
    lfs f7, 0x38(r1)
    fmuls f11, f0, f8
    lwz r3, 0x4(r28)
    fmuls f12, f7, f8
    lfs f9, lbl_80882234
    lfs f0, 0x530(r3)
    lfs f7, 0x52c(r3)
    fadds f13, f0, f10
    lfs f0, 0x528(r3)
    fadds f7, f7, f11
    lfs f8, lbl_80882288
    fadds f0, f0, f12
    stfs f9, 0x8(r1)
    fadds f31, f13, f9
    stfs f8, 0xc(r1)
    fadds f30, f7, f8
    fadds f29, f0, f9
    stfs f31, 0x1f4(r1)
    stfs f29, 0x1d4(r1)
    stfs f30, 0x1e4(r1)
    lwz r3, 0x8(r28)
    stfs f9, 0x10(r1)
    lwz r4, 0xf1c(r3)
    stfs f12, 0x14(r1)
    cmpwi r4, 0x0
    stfs f11, 0x18(r1)
    stfs f10, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f7, 0x24(r1)
    stfs f13, 0x28(r1)
    stfs f29, 0x2c(r1)
    stfs f30, 0x30(r1)
    stfs f31, 0x34(r1)
    beq lbl_fn_801AA230_00000A80
    addi r3, r1, 0x1c8
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    psq_st f2, 0x8(r4), 0, 0
    psq_st f3, 0x10(r4), 0, 0
    psq_st f4, 0x18(r4), 0, 0
    psq_st f5, 0x20(r4), 0, 0
    psq_st f6, 0x28(r4), 0, 0
lbl_fn_801AA230_00000A80:
    psq_l f31, 0x238(r1), 0, 0
    mr r3, r29
    lfd f31, 0x230(r1)
    psq_l f30, 0x228(r1), 0, 0
    lfd f30, 0x220(r1)
    psq_l f29, 0x218(r1), 0, 0
    lfd f29, 0x210(r1)
    lwz r31, 0x20c(r1)
    lwz r30, 0x208(r1)
    lwz r29, 0x204(r1)
    lwz r28, 0x200(r1)
    lwz r0, 0x244(r1)
    mtlr r0
    addi r1, r1, 0x240
    blr
}

asm void fn_801AA550(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    lis r5, lbl_8073A950@ha
    li r7, 0x0
    stw r0, 0x84(r1)
    addi r5, r5, lbl_8073A950@l
    mr r6, r5
    stw r31, 0x7c(r1)
    mr r31, r3
    li r3, 0xc
    stw r30, 0x78(r1)
    stw r29, 0x74(r1)
    stw r28, 0x70(r1)
    mr r28, r4
    li r4, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_801AA550_00000B70
    lwz r8, 0x4(r28)
    lis r4, lbl_8077F7E8@ha
    stw r8, 0x4(r3)
    addi r4, r4, lbl_8077F7E8@l
    lwz r5, 0x8(r28)
    li r7, 0x69
    stw r4, 0x0(r3)
    li r0, 0x1
    lfs f0, lbl_80882230
    li r4, 0x0
    stw r5, 0x8(r3)
    li r5, 0x89
    lfs f1, lbl_80882234
    li r6, 0x0
    stw r7, 0x560(r8)
    li r7, 0x0
    lfs f2, lbl_80882238
    li r8, 0x1
    lwz r3, 0x4(r3)
    stw r0, 0x3fc(r3)
    addi r29, r3, 0xb0
    mr r3, r29
    stfs f0, 0x24c(r29)
    bl fn_80097C08
    lfs f0, lbl_80882230
    stfs f0, 0x238(r29)
lbl_fn_801AA550_00000B70:
    lis r3, lbl_8077F6C4@ha
    lwzu r5, lbl_8077F6C4@l(r3)
    lwz r6, 0x4(r28)
    li r0, 0x0
    lwz r4, 0x4(r3)
    lwz r3, 0x8(r3)
    stw r6, 0x8(r1)
    stw r0, 0x0(r31)
    lbz r0, lbl_8087F0E4
    stw r30, 0xc(r1)
    extsb. r0, r0
    stw r5, 0x1c(r1)
    stw r4, 0x20(r1)
    stw r3, 0x24(r1)
    stw r5, 0x10(r1)
    stw r4, 0x14(r1)
    stw r3, 0x18(r1)
    stw r5, 0x50(r1)
    stw r4, 0x54(r1)
    stw r3, 0x58(r1)
    stw r6, 0x5c(r1)
    stw r30, 0x60(r1)
    bne lbl_fn_801AA550_00000BF4
    lis r6, lbl_807C7C38@ha
    lis r4, fn_801AA7A0@ha
    lis r3, fn_801AA7D0@ha
    li r0, 0x1
    addi r3, r3, fn_801AA7D0@l
    addi r5, r6, lbl_807C7C38@l
    addi r4, r4, fn_801AA7A0@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C7C38@l(r6)
    stb r0, lbl_8087F0E4
lbl_fn_801AA550_00000BF4:
    lwz r7, 0x50(r1)
    addi r3, r1, 0x3c
    lwz r6, 0x54(r1)
    lwz r5, 0x58(r1)
    lwz r4, 0x5c(r1)
    lwz r0, 0x60(r1)
    stw r7, 0x3c(r1)
    stw r6, 0x40(r1)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_801AA550_00000CC8
    lwz r7, 0x3c(r1)
    li r3, 0x14
    lwz r6, 0x40(r1)
    lwz r5, 0x44(r1)
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r7, 0x28(r1)
    stw r6, 0x2c(r1)
    stw r5, 0x30(r1)
    stw r4, 0x34(r1)
    stw r0, 0x38(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_801AA550_00000C8C
    lis r3, __files@ha
    lis r4, lbl_8077FAB8@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077FAB8@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801AA550_00000C8C:
    cmpwi r30, 0x0
    beq lbl_fn_801AA550_00000CBC
    lwz r0, 0x28(r1)
    stw r0, 0x0(r30)
    lwz r0, 0x2c(r1)
    stw r0, 0x4(r30)
    lwz r0, 0x30(r1)
    stw r0, 0x8(r30)
    lwz r0, 0x34(r1)
    stw r0, 0xc(r30)
    lwz r0, 0x38(r1)
    stw r0, 0x10(r30)
lbl_fn_801AA550_00000CBC:
    stw r30, 0x4(r31)
    li r0, 0x1
    b lbl_fn_801AA550_00000CCC
lbl_fn_801AA550_00000CC8:
    li r0, 0x0
lbl_fn_801AA550_00000CCC:
    cmpwi r0, 0x0
    beq lbl_fn_801AA550_00000CE4
    lis r3, lbl_807C7C38@ha
    addi r3, r3, lbl_807C7C38@l
    stw r3, 0x0(r31)
    b lbl_fn_801AA550_00000CEC
lbl_fn_801AA550_00000CE4:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_801AA550_00000CEC:
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    lwz r29, 0x74(r1)
    lwz r28, 0x70(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_801AA7A0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r12, 0x0(r3)
    lwz r3, 0xc(r12)
    lwz r4, 0x10(r12)
    bl fn_80695B00
    nop
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801AA7D0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r5, 0x3
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    mr r29, r4
    bne lbl_fn_801AA7D0_00000D74
    lis r3, lbl_8077F6D0@ha
    addi r3, r3, lbl_8077F6D0@l
    stw r3, 0x0(r4)
    b lbl_fn_801AA7D0_00000E3C
lbl_fn_801AA7D0_00000D74:
    cmpwi r5, 0x0
    bne lbl_fn_801AA7D0_00000DEC
    lwz r31, 0x0(r3)
    li r3, 0x14
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_801AA7D0_00000DB4
    lis r3, __files@ha
    lis r4, lbl_8077FAB8@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077FAB8@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801AA7D0_00000DB4:
    cmpwi r30, 0x0
    beq lbl_fn_801AA7D0_00000DE4
    lwz r0, 0x4(r31)
    lwz r3, 0x0(r31)
    stw r3, 0x0(r30)
    stw r0, 0x4(r30)
    lwz r0, 0x8(r31)
    stw r0, 0x8(r30)
    lwz r0, 0xc(r31)
    stw r0, 0xc(r30)
    lwz r0, 0x10(r31)
    stw r0, 0x10(r30)
lbl_fn_801AA7D0_00000DE4:
    stw r30, 0x0(r29)
    b lbl_fn_801AA7D0_00000E3C
lbl_fn_801AA7D0_00000DEC:
    cmpwi r5, 0x1
    bne lbl_fn_801AA7D0_00000E08
    lwz r3, 0x0(r4)
    bl dtor_80084684
    li r0, 0x0
    stw r0, 0x0(r29)
    b lbl_fn_801AA7D0_00000E3C
lbl_fn_801AA7D0_00000E08:
    lwz r5, 0x0(r4)
    lis r3, lbl_8077F6D0@ha
    lwz r4, lbl_8077F6D0@l(r3)
    lwz r3, 0x0(r5)
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_801AA7D0_00000E34
    lwz r0, 0x0(r30)
    stw r0, 0x0(r29)
    b lbl_fn_801AA7D0_00000E3C
lbl_fn_801AA7D0_00000E34:
    li r0, 0x0
    stw r0, 0x0(r29)
lbl_fn_801AA7D0_00000E3C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801AA8EC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    psq_st f31, 0x18(r1), 0, 0
    stw r31, 0xc(r1)
    li r31, 0x0
    lwz r3, 0x4(r3)
    addi r3, r3, 0xb0
    lfs f31, 0x234(r3)
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_801AA8EC_00000E98
    li r31, 0x1
lbl_fn_801AA8EC_00000E98:
    psq_l f31, 0x18(r1), 0, 0
    mr r3, r31
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801AA94C(void)
{
    nofralloc
    lwz r5, 0x4(r4)
    li r0, 0x0
    stw r0, 0x560(r5)
    b fn_80192758
}

asm void fn_801AA95C(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_801AA964(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801AA964_00000EF8
    cmpwi r4, 0x0
    ble lbl_fn_801AA964_00000EF8
    bl dtor_80084684
lbl_fn_801AA964_00000EF8:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801AA9A4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801AA9A4_00000F38
    cmpwi r4, 0x0
    ble lbl_fn_801AA9A4_00000F38
    bl dtor_80084684
lbl_fn_801AA9A4_00000F38:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801AA9E4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801AA9E4_00000F78
    cmpwi r4, 0x0
    ble lbl_fn_801AA9E4_00000F78
    bl dtor_80084684
lbl_fn_801AA9E4_00000F78:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801AAA24(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801AAA24_00000FB8
    cmpwi r4, 0x0
    ble lbl_fn_801AAA24_00000FB8
    bl dtor_80084684
lbl_fn_801AAA24_00000FB8:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801AAA64(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801AAA64_00000FF8
    cmpwi r4, 0x0
    ble lbl_fn_801AAA64_00000FF8
    bl dtor_80084684
lbl_fn_801AAA64_00000FF8:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801AAAA4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801AAAA4_00001038
    cmpwi r4, 0x0
    ble lbl_fn_801AAAA4_00001038
    bl dtor_80084684
lbl_fn_801AAAA4_00001038:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801AAAE4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801AAAE4_00001078
    cmpwi r4, 0x0
    ble lbl_fn_801AAAE4_00001078
    bl dtor_80084684
lbl_fn_801AAAE4_00001078:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801AAB24(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801AAB24_000010B8
    cmpwi r4, 0x0
    ble lbl_fn_801AAB24_000010B8
    bl dtor_80084684
lbl_fn_801AAB24_000010B8:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801AAB64(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r9, lbl_8077FB60@ha
    li r8, 0x0
    stw r0, 0x24(r1)
    addi r9, r9, lbl_8077FB60@l
    li r7, 0x1
    li r0, 0x3a
    stfd f31, 0x18(r1)
    fmr f31, f1
    stw r31, 0x14(r1)
    mr r31, r5
    stw r30, 0x10(r1)
    mr r30, r3
    stw r4, 0x4(r3)
    stw r9, 0x0(r3)
    stw r8, 0x8(r3)
    stw r8, 0xc(r3)
    stw r7, 0x7c(r3)
    stw r6, 0x80(r3)
    stw r8, 0x94(r3)
    stw r8, 0x98(r3)
    stw r0, 0x560(r4)
    lwz r3, 0x4(r3)
    bl fn_8016DA4C
    lwz r3, 0x4(r30)
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 25
    beq lbl_fn_801AAB64_0000114C
    li r4, 0x0
    bl fn_80155DAC
lbl_fn_801AAB64_0000114C:
    lwz r3, 0x4(r30)
    lwz r0, 0x12a4(r3)
    srwi. r0, r0, 31
    beq lbl_fn_801AAB64_00001160
    bl fn_801539E0
lbl_fn_801AAB64_00001160:
    lwz r0, 0x80(r30)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_801AAB64_00001180
    li r3, 0x0
    li r0, 0x1
    stw r3, 0x7c(r30)
    stw r0, 0x98(r30)
lbl_fn_801AAB64_00001180:
    fmr f1, f31
    mr r3, r30
    mr r4, r31
    li r5, 0x1
    bl fn_801AB6B8
    lfd f31, 0x18(r1)
    mr r3, r30
    lwz r31, 0x14(r1)
    lwz r30, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801AAC48(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    stfd f31, 0x100(r1)
    psq_st f31, 0x108(r1), 0, 0
    stfd f30, 0xf0(r1)
    psq_st f30, 0xf8(r1), 0, 0
    stw r31, 0xec(r1)
    stw r30, 0xe8(r1)
    mr r30, r3
    stw r29, 0xe4(r1)
    stw r28, 0xe0(r1)
    lwz r0, 0xc(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801AAC48_000017C0
    lwz r5, 0x4(r3)
    addi r4, r1, 0x98
    lwz r0, 0x7c(r3)
    psq_l f1, 0x534(r5), 0, 0
    addi r31, r5, 0xb0
    lfs f2, 0x53c(r5)
    cmpwi r0, 0x0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xa0(r1)
    beq lbl_fn_801AAC48_0000122C
    cmpwi r0, 0x1
    beq lbl_fn_801AAC48_0000136C
    cmpwi r0, 0x2
    beq lbl_fn_801AAC48_000016A4
    b lbl_fn_801AAC48_000017C0
lbl_fn_801AAC48_0000122C:
    lfs f31, 0x234(r31)
    mr r3, r31
    li r4, 0x0
    bl fn_80097D7C
    lfs f0, lbl_80882294
    fsubs f0, f1, f0
    fcmpo cr0, f31, f0
    cror eq, lt, eq
    bne lbl_fn_801AAC48_0000131C
    lfs f31, 0x234(r31)
    mr r3, r31
    li r4, 0x0
    bl fn_80097D7C
    lfs f3, lbl_80882294
    addi r3, r1, 0x8c
    lfs f0, lbl_80882290
    addi r4, r1, 0x74
    fsubs f3, f1, f3
    lfs f6, 0x18(r30)
    lfs f5, 0x88(r30)
    lfs f4, 0x14(r30)
    fdivs f9, f31, f3
    lfs f3, 0x84(r30)
    lfs f8, 0x1c(r30)
    lfs f7, 0x8c(r30)
    lwz r5, 0x4(r30)
    stfs f0, 0x74(r1)
    fsubs f6, f6, f5
    stfs f0, 0x7c(r1)
    fsubs f10, f8, f7
    fsubs f4, f4, f3
    stfs f6, 0x30(r1)
    fmuls f8, f6, f9
    stfs f4, 0x2c(r1)
    fmuls f6, f4, f9
    fmuls f9, f10, f9
    stfs f10, 0x34(r1)
    fadds f4, f8, f5
    fadds f3, f6, f3
    stfs f6, 0x20(r1)
    fadds f5, f9, f7
    stfs f4, 0x90(r1)
    stfs f3, 0x8c(r1)
    fmr f2, f5
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x528(r5), 0, 0
    stfs f2, 0x530(r5)
    fmr f2, f0
    lwz r3, 0x4(r30)
    lfs f3, 0x90(r30)
    lfs f0, 0x538(r3)
    stfs f8, 0x24(r1)
    fadds f0, f3, f0
    stfs f9, 0x28(r1)
    stfs f0, 0x78(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x534(r3), 0, 0
    stfs f5, 0x94(r1)
    stfs f2, 0x53c(r3)
    b lbl_fn_801AAC48_00001330
lbl_fn_801AAC48_0000131C:
    lwz r3, 0x4(r30)
    lfs f2, 0x1c(r30)
    psq_l f1, 0x14(r30), 0, 0
    psq_st f1, 0x528(r3), 0, 0
    stfs f2, 0x530(r3)
lbl_fn_801AAC48_00001330:
    lfs f31, 0x234(r31)
    mr r3, r31
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_801AAC48_000017C0
    li r0, 0x1
    stw r0, 0x7c(r30)
    lwz r4, 0x2c(r30)
    mr r3, r30
    lfs f1, lbl_80882290
    li r5, 0x0
    bl fn_801AB6B8
    b lbl_fn_801AAC48_000017C0
lbl_fn_801AAC48_0000136C:
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801AAC48_0000140C
    li r28, -0x1
    bl fn_801AC14C
    cmpwi r3, 0x0
    mr r29, r3
    blt lbl_fn_801AAC48_00001398
    slwi r0, r3, 2
    add r3, r30, r0
    lwz r28, 0x44(r3)
lbl_fn_801AAC48_00001398:
    cmpwi r28, 0x0
    blt lbl_fn_801AAC48_000013F4
    li r0, 0x1
    stw r0, 0x8(r30)
    lfs f1, lbl_80882290
    mr r3, r31
    lfs f2, lbl_80882298
    mr r5, r28
    li r4, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r0, 0x80(r30)
    rlwinm r0, r0, 0, 28, 28
    cmplwi r0, 0x8
    bne lbl_fn_801AAC48_000013E4
    lfs f0, lbl_8088229C
    stfs f0, 0x238(r31)
lbl_fn_801AAC48_000013E4:
    slwi r0, r29, 2
    add r3, r30, r0
    lfs f0, 0x58(r3)
    stfs f0, 0x6c(r30)
lbl_fn_801AAC48_000013F4:
    lwz r0, 0x94(r30)
    cmpwi r0, 0x0
    beq lbl_fn_801AAC48_000017C0
    li r0, 0x1
    stw r0, 0xc(r30)
    b lbl_fn_801AAC48_000017C0
lbl_fn_801AAC48_0000140C:
    lfs f3, 0x1c(r3)
    lfs f0, 0x28(r3)
    lfs f5, 0x18(r3)
    fsubs f6, f3, f0
    lfs f4, 0x24(r3)
    lfs f3, 0x14(r3)
    lfs f0, 0x20(r3)
    fsubs f4, f5, f4
    addi r3, r1, 0x68
    fsubs f0, f3, f0
    stfs f4, 0x6c(r1)
    stfs f0, 0x68(r1)
    stfs f6, 0x70(r1)
    bl fn_805F9940
    lfs f0, 0x6c(r30)
    mr r3, r31
    li r4, 0x0
    fdivs f30, f0, f1
    bl fn_80097D7C
    lfs f3, lbl_808822A0
    lfs f0, lbl_80882290
    fsubs f4, f1, f3
    fcmpo cr0, f4, f0
    ble lbl_fn_801AAC48_000014AC
    lwz r3, lbl_8087EFA8
    lwz r0, 0x70(r30)
    lfs f0, 0x3a4(r3)
    lfs f3, 0x238(r31)
    cmpwi r0, 0x0
    fmuls f0, f3, f0
    fdivs f3, f0, f4
    beq lbl_fn_801AAC48_0000149C
    lfs f0, 0x74(r30)
    fmadds f0, f30, f3, f0
    stfs f0, 0x74(r30)
    b lbl_fn_801AAC48_000014B0
lbl_fn_801AAC48_0000149C:
    lfs f0, 0x74(r30)
    fnmsubs f0, f30, f3, f0
    stfs f0, 0x74(r30)
    b lbl_fn_801AAC48_000014B0
lbl_fn_801AAC48_000014AC:
    stfs f3, 0x74(r30)
lbl_fn_801AAC48_000014B0:
    lfs f3, 0x74(r30)
    lfs f0, lbl_80882290
    fcmpo cr0, f3, f0
    ble lbl_fn_801AAC48_000014C4
    b lbl_fn_801AAC48_000014C8
lbl_fn_801AAC48_000014C4:
    fmr f3, f0
lbl_fn_801AAC48_000014C8:
    lfs f10, lbl_808822A0
    fcmpo cr0, f3, f10
    bge lbl_fn_801AAC48_000014EC
    lfs f10, 0x74(r30)
    lfs f0, lbl_80882290
    fcmpo cr0, f10, f0
    ble lbl_fn_801AAC48_000014E8
    b lbl_fn_801AAC48_000014EC
lbl_fn_801AAC48_000014E8:
    fmr f10, f0
lbl_fn_801AAC48_000014EC:
    lfs f0, 0x24(r30)
    frsp f6, f10
    lfs f4, 0x18(r30)
    addi r5, r1, 0x5c
    lfs f3, 0x20(r30)
    mr r3, r31
    fsubs f9, f0, f4
    lfs f0, 0x14(r30)
    li r4, 0x0
    lfs f5, 0x28(r30)
    fsubs f8, f3, f0
    lfs f3, 0x1c(r30)
    fmuls f7, f9, f6
    stfs f10, 0x74(r30)
    fsubs f10, f5, f3
    lwz r6, 0x4(r30)
    fmuls f5, f8, f6
    stfs f8, 0x14(r1)
    fadds f4, f7, f4
    fmuls f6, f10, f6
    stfs f9, 0x18(r1)
    fadds f0, f5, f0
    stfs f4, 0x60(r1)
    fadds f2, f6, f3
    stfs f0, 0x5c(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x528(r6), 0, 0
    stfs f2, 0x530(r6)
    stfs f10, 0x1c(r1)
    lfs f31, 0x234(r31)
    stfs f5, 0x8(r1)
    stfs f7, 0xc(r1)
    stfs f6, 0x10(r1)
    stfs f2, 0x64(r1)
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_801AAC48_0000159C
    lwz r4, 0x30(r30)
    mr r3, r30
    lfs f1, lbl_80882290
    li r5, 0x0
    bl fn_801AB6B8
    b lbl_fn_801AAC48_000017C0
lbl_fn_801AAC48_0000159C:
    lfs f31, 0x238(r31)
    mr r3, r31
    lfs f30, 0x234(r31)
    li r4, 0x0
    bl fn_80097D7C
    fadds f0, f30, f31
    fcmpo cr0, f0, f1
    cror eq, gt, eq
    bne lbl_fn_801AAC48_000017C0
    lfs f3, 0x74(r30)
    li r28, -0x1
    lfs f0, lbl_808822A0
    lfs f30, lbl_80882290
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_801AAC48_000015F4
    fmr f1, f30
    lwz r4, 0x30(r30)
    mr r3, r30
    li r5, 0x0
    bl fn_801AB6B8
    b lbl_fn_801AAC48_000017C0
lbl_fn_801AAC48_000015F4:
    lwz r0, 0x78(r30)
    cmpwi r0, 0x0
    beq lbl_fn_801AAC48_00001618
    lwz r0, 0x10(r30)
    slwi r0, r0, 2
    add r3, r30, r0
    lwz r28, 0x44(r3)
    lfs f30, 0x58(r3)
    b lbl_fn_801AAC48_00001638
lbl_fn_801AAC48_00001618:
    mr r3, r30
    bl fn_801AC14C
    cmpwi r3, 0x0
    blt lbl_fn_801AAC48_00001638
    slwi r0, r3, 2
    add r3, r30, r0
    lwz r28, 0x44(r3)
    lfs f30, 0x58(r3)
lbl_fn_801AAC48_00001638:
    cmpwi r28, 0x0
    blt lbl_fn_801AAC48_0000166C
    lfs f1, lbl_80882290
    mr r3, r31
    lfs f2, lbl_80882298
    mr r5, r28
    li r4, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    stfs f30, 0x6c(r30)
    b lbl_fn_801AAC48_000017C0
lbl_fn_801AAC48_0000166C:
    li r0, 0x0
    stw r0, 0x8(r30)
    lwz r5, 0x44(r30)
    mr r3, r31
    lfs f1, lbl_80882290
    li r4, 0x0
    lfs f2, lbl_80882298
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_808822A0
    stfs f0, 0x238(r31)
    b lbl_fn_801AAC48_000017C0
lbl_fn_801AAC48_000016A4:
    lfs f3, 0x234(r31)
    lfs f0, lbl_808822A4
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_801AAC48_0000179C
    lwz r5, lbl_8087EFA8
    mr r3, r31
    lfs f31, 0x238(r31)
    li r4, 0x0
    lfs f30, 0x3a4(r5)
    bl fn_80097D7C
    fmuls f0, f31, f30
    lwz r5, 0x4(r30)
    lfs f3, lbl_80882290
    addi r29, r1, 0x80
    lfs f2, 0x530(r5)
    addi r3, r1, 0xa8
    fdivs f30, f0, f1
    psq_l f1, 0x528(r5), 0, 0
    lfs f0, lbl_808822A0
    li r4, 0x79
    stfs f3, 0x38(r1)
    stfs f3, 0x3c(r1)
    stfs f0, 0x40(r1)
    lfs f0, 0x538(r5)
    psq_st f1, 0x0(r29), 0, 0
    fmr f1, f0
    stfs f2, 0x88(r1)
    bl fn_805F8E70
    addi r4, r1, 0x38
    addi r3, r1, 0xa8
    mr r5, r4
    bl fn_805F93C0
    lfs f5, lbl_808822A8
    lfs f3, 0x3c(r1)
    lfs f0, 0x38(r1)
    fmuls f6, f3, f5
    lfs f3, 0x40(r1)
    fmuls f7, f0, f5
    lfs f4, 0x80(r1)
    fmuls f5, f3, f5
    lfs f3, 0x84(r1)
    fmuls f10, f7, f30
    lfs f0, 0x88(r1)
    fmuls f8, f5, f30
    lwz r3, 0x4(r30)
    fmuls f9, f6, f30
    stfs f7, 0x44(r1)
    fadds f2, f0, f8
    stfs f6, 0x48(r1)
    fadds f4, f4, f10
    fadds f0, f3, f9
    stfs f5, 0x4c(r1)
    stfs f4, 0x80(r1)
    stfs f0, 0x84(r1)
    psq_l f1, 0x0(r29), 0, 0
    psq_st f1, 0x528(r3), 0, 0
    stfs f10, 0x50(r1)
    stfs f9, 0x54(r1)
    stfs f8, 0x58(r1)
    stfs f2, 0x88(r1)
    stfs f2, 0x530(r3)
lbl_fn_801AAC48_0000179C:
    lfs f30, 0x234(r31)
    mr r3, r31
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f30, f1
    cror eq, gt, eq
    bne lbl_fn_801AAC48_000017C0
    li r0, 0x1
    stw r0, 0xc(r30)
lbl_fn_801AAC48_000017C0:
    lwz r3, 0xc(r30)
    psq_l f31, 0x108(r1), 0, 0
    neg r0, r3
    lfd f31, 0x100(r1)
    or r0, r0, r3
    psq_l f30, 0xf8(r1), 0, 0
    lfd f30, 0xf0(r1)
    srwi r3, r0, 31
    lwz r31, 0xec(r1)
    lwz r30, 0xe8(r1)
    lwz r29, 0xe4(r1)
    lwz r28, 0xe0(r1)
    lwz r0, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_801AB294(void)
{
    nofralloc
    stwu r1, -0x1e0(r1)
    mflr r0
    stw r0, 0x1e4(r1)
    lwz r0, 0x94(r4)
    stw r31, 0x1dc(r1)
    mr r31, r3
    cmpwi r0, 0x0
    stw r30, 0x1d8(r1)
    stw r29, 0x1d4(r1)
    beq lbl_fn_801AB294_00001AF8
    lis r9, lbl_807C7030@ha
    lwz r10, 0x4(r4)
    addi r9, r9, lbl_807C7030@l
    lis r4, lbl_8077FB48@ha
    lfs f2, 0x8(r9)
    li r0, 0x0
    lwzu r7, lbl_8077FB48@l(r4)
    addi r8, r1, 0xb0
    stfs f2, 0xb8(r1)
    addi r12, r1, 0x88
    lwz r6, 0x4(r4)
    addi r11, r1, 0x7c
    lwz r5, 0x8(r4)
    addi r4, r1, 0x1b8
    psq_l f1, 0x0(r9), 0, 0
    addi r9, r1, 0x94
    stfs f2, 0x90(r1)
    frsp f2, f2
    addi r29, r1, 0xd8
    addi r30, r1, 0x19c
    stw r0, 0x0(r3)
    lbz r0, lbl_8087F0B1
    stfs f2, 0x9c(r1)
    extsb. r0, r0
    stfs f2, 0x84(r1)
    frsp f2, f2
    stfs f2, 0x1c0(r1)
    stfs f2, 0xe0(r1)
    frsp f2, f2
    psq_st f1, 0x0(r8), 0, 0
    stw r7, 0xbc(r1)
    stw r6, 0xc0(r1)
    stw r5, 0xc4(r1)
    psq_st f1, 0x0(r12), 0, 0
    psq_st f1, 0x0(r9), 0, 0
    stw r10, 0x78(r1)
    psq_st f1, 0x0(r11), 0, 0
    stw r7, 0x8(r1)
    stw r6, 0xc(r1)
    stw r5, 0x10(r1)
    stw r7, 0x68(r1)
    stw r6, 0x6c(r1)
    stw r5, 0x70(r1)
    stw r7, 0x5c(r1)
    stw r6, 0x60(r1)
    stw r5, 0x64(r1)
    stw r7, 0x50(r1)
    stw r6, 0x54(r1)
    stw r5, 0x58(r1)
    stw r7, 0x1a8(r1)
    stw r6, 0x1ac(r1)
    stw r5, 0x1b0(r1)
    stw r10, 0x1b4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stw r7, 0xc8(r1)
    stw r6, 0xcc(r1)
    stw r5, 0xd0(r1)
    stw r10, 0xd4(r1)
    psq_st f1, 0x0(r29), 0, 0
    stw r7, 0x18c(r1)
    stw r6, 0x190(r1)
    stw r5, 0x194(r1)
    stw r10, 0x198(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x1a4(r1)
    bne lbl_fn_801AB294_000019B4
    frsp f2, f2
    lis r11, lbl_807C7B50@ha
    addi r12, r1, 0xf4
    addi r8, r1, 0x148
    addi r9, r1, 0x12c
    lis r4, fn_80188A70@ha
    lis r3, fn_80188AA0@ha
    stfs f2, 0xfc(r1)
    li r0, 0x1
    addi r11, r11, lbl_807C7B50@l
    stfs f2, 0x150(r1)
    frsp f2, f2
    addi r4, r4, fn_80188A70@l
    addi r3, r3, fn_80188AA0@l
    stw r7, 0xe4(r1)
    stw r6, 0xe8(r1)
    stw r5, 0xec(r1)
    stw r10, 0xf0(r1)
    psq_st f1, 0x0(r12), 0, 0
    stw r7, 0x138(r1)
    stw r6, 0x13c(r1)
    stw r5, 0x140(r1)
    stw r10, 0x144(r1)
    psq_st f1, 0x0(r8), 0, 0
    stw r7, 0x11c(r1)
    stw r6, 0x120(r1)
    stw r5, 0x124(r1)
    stw r10, 0x128(r1)
    psq_st f1, 0x0(r9), 0, 0
    stfs f2, 0x134(r1)
    stw r4, 0x4(r11)
    stw r3, 0x0(r11)
    stb r0, lbl_8087F0B1
lbl_fn_801AB294_000019B4:
    addi r3, r1, 0x19c
    lwz r6, 0x18c(r1)
    lwz r5, 0x190(r1)
    addi r8, r1, 0x110
    lwz r4, 0x194(r1)
    addi r7, r1, 0x180
    lwz r0, 0x198(r1)
    addi r30, r1, 0x170
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r30
    lfs f2, 0x1a4(r1)
    stw r6, 0x100(r1)
    stw r5, 0x104(r1)
    stw r4, 0x108(r1)
    stw r0, 0x10c(r1)
    psq_st f1, 0x0(r8), 0, 0
    stfs f2, 0x118(r1)
    stw r6, 0x170(r1)
    stw r5, 0x174(r1)
    stw r4, 0x178(r1)
    stw r0, 0x17c(r1)
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0x188(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_801AB294_00001AD0
    lwz r6, 0x170(r1)
    addi r7, r1, 0x164
    lwz r5, 0x174(r1)
    li r3, 0x1c
    lwz r4, 0x178(r1)
    lwz r0, 0x17c(r1)
    psq_l f1, 0x10(r30), 0, 0
    lfs f2, 0x188(r1)
    stw r6, 0x154(r1)
    stw r5, 0x158(r1)
    stw r4, 0x15c(r1)
    stw r0, 0x160(r1)
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0x16c(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_801AB294_00001A88
    lis r3, __files@ha
    lis r4, lbl_8077CF44@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077CF44@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801AB294_00001A88:
    cmpwi r30, 0x0
    beq lbl_fn_801AB294_00001AC4
    lwz r0, 0x154(r1)
    addi r3, r1, 0x164
    stw r0, 0x0(r30)
    lwz r0, 0x158(r1)
    stw r0, 0x4(r30)
    lwz r0, 0x15c(r1)
    stw r0, 0x8(r30)
    lwz r0, 0x160(r1)
    stw r0, 0xc(r30)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x10(r30), 0, 0
    lfs f2, 0x16c(r1)
    stfs f2, 0x18(r30)
lbl_fn_801AB294_00001AC4:
    stw r30, 0x4(r31)
    li r0, 0x1
    b lbl_fn_801AB294_00001AD4
lbl_fn_801AB294_00001AD0:
    li r0, 0x0
lbl_fn_801AB294_00001AD4:
    cmpwi r0, 0x0
    beq lbl_fn_801AB294_00001AEC
    lis r3, lbl_807C7B50@ha
    addi r3, r3, lbl_807C7B50@l
    stw r3, 0x0(r31)
    b lbl_fn_801AB294_00001C08
lbl_fn_801AB294_00001AEC:
    li r0, 0x0
    stw r0, 0x0(r31)
    b lbl_fn_801AB294_00001C08
lbl_fn_801AB294_00001AF8:
    lis r7, lbl_8077FB54@ha
    lwzu r6, lbl_8077FB54@l(r7)
    lwz r8, 0x4(r4)
    li r0, 0x0
    lwz r5, 0x4(r7)
    lwz r4, 0x8(r7)
    stw r6, 0x44(r1)
    stw r0, 0x0(r3)
    lbz r0, lbl_8087F0BE
    stw r5, 0x48(r1)
    extsb. r0, r0
    stw r4, 0x4c(r1)
    stw r6, 0x38(r1)
    stw r5, 0x3c(r1)
    stw r4, 0x40(r1)
    stw r6, 0xa0(r1)
    stw r5, 0xa4(r1)
    stw r4, 0xa8(r1)
    stw r8, 0xac(r1)
    bne lbl_fn_801AB294_00001B70
    lis r6, lbl_807C7B90@ha
    lis r4, fn_80191960@ha
    lis r3, fn_8019198C@ha
    li r0, 0x1
    addi r3, r3, fn_8019198C@l
    addi r5, r6, lbl_807C7B90@l
    addi r4, r4, fn_80191960@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C7B90@l(r6)
    stb r0, lbl_8087F0BE
lbl_fn_801AB294_00001B70:
    lwz r6, 0xa0(r1)
    addi r3, r1, 0x28
    lwz r5, 0xa4(r1)
    lwz r4, 0xa8(r1)
    lwz r0, 0xac(r1)
    stw r6, 0x28(r1)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_801AB294_00001BE4
    lwz r5, 0x28(r1)
    addic. r6, r31, 0x4
    lwz r4, 0x2c(r1)
    lwz r3, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x18(r1)
    stw r4, 0x1c(r1)
    stw r3, 0x20(r1)
    stw r0, 0x24(r1)
    beq lbl_fn_801AB294_00001BDC
    stw r5, 0x0(r6)
    stw r4, 0x4(r6)
    stw r3, 0x8(r6)
    stw r0, 0xc(r6)
lbl_fn_801AB294_00001BDC:
    li r0, 0x1
    b lbl_fn_801AB294_00001BE8
lbl_fn_801AB294_00001BE4:
    li r0, 0x0
lbl_fn_801AB294_00001BE8:
    cmpwi r0, 0x0
    beq lbl_fn_801AB294_00001C00
    lis r3, lbl_807C7B90@ha
    addi r3, r3, lbl_807C7B90@l
    stw r3, 0x0(r31)
    b lbl_fn_801AB294_00001C08
lbl_fn_801AB294_00001C00:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_801AB294_00001C08:
    lwz r0, 0x1e4(r1)
    lwz r31, 0x1dc(r1)
    lwz r30, 0x1d8(r1)
    lwz r29, 0x1d4(r1)
    mtlr r0
    addi r1, r1, 0x1e0
    blr
}
