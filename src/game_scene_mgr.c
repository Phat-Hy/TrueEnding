#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_800185B4(void);
extern void fn_8004ED34(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_8008BBD8(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800A55D4(void);
extern void fn_80105950(void);
extern void fn_801059F8(void);
extern void fn_80105A08(void);
extern void fn_8010CA24(void);
extern void fn_801240B4(void);
extern void fn_80134168(void);
extern void fn_8013CB68(void);
extern void fn_801539E0(void);
extern void fn_8016DA4C(void);
extern void fn_80192758(void);
extern void fn_801A471C(void);
extern void fn_801A474C(void);
extern void fn_801A4868(void);
extern void fn_801A4898(void);
extern void fn_801A49B4(void);
extern void fn_801A49E4(void);
extern void fn_801A4B00(void);
extern void fn_801A5E90(void);
extern void fn_801A6750(void);
extern void fn_801C3414(void);
extern void fn_801C3458(void);
extern void fn_801C3D1C(void);
extern void fn_80219E6C(void);
extern void fn_8036DAA8(void);
extern void fn_80373FC4(void);
extern void fn_803EA77C(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_80680770(void);
extern void fn_80680CF8(void);
extern void fn_80686EA4(void);
extern void fn_8068AEA4(void);
extern void fn_8068B100(void);

/* External data declarations */
extern u8 lbl_8073A170[];
extern u8 lbl_8073A4EC[];
extern u8 lbl_8077F198[];
extern u8 lbl_8077F2A8[];
extern u8 lbl_8077F480[];
extern u8 lbl_8077F578[];
extern u8 lbl_8077F634[];
extern u8 lbl_8077F650[];
extern u8 lbl_8077F66C[];
extern u8 lbl_807C7BF8[];
extern u8 lbl_807C7C00[];
extern u8 lbl_807C7C08[];

/* Small data declarations */
extern u32 lbl_8087EE68;
extern u32 lbl_8087EE98;
extern u32 lbl_8087EF70;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F0D8;
extern u32 lbl_8087F0D9;
extern u32 lbl_8087F0DA;
extern u32 lbl_8087F430;
extern u32 lbl_8087F498;
extern u32 lbl_8087F610;
extern u32 lbl_8087F9C0;
extern u32 lbl_8087F9F8;
extern u32 lbl_80882168;
extern u32 lbl_8088216C;
extern u32 lbl_80882170;
extern u32 lbl_80882174;
extern u32 lbl_80882178;
extern u32 lbl_8088217C;
extern u32 lbl_80882180;
extern u32 lbl_80882184;
extern u32 lbl_80882188;
extern u32 lbl_8088218C;
extern u32 lbl_80882190;
extern u32 lbl_80882194;
extern u32 lbl_80882198;
extern u32 lbl_8088219C;
extern u32 lbl_808821A0;
extern u32 lbl_808821A4;
extern u32 lbl_808821A8;
extern u32 lbl_808821AC;
extern u32 lbl_808821B0;
extern u32 lbl_808821B4;
extern u32 lbl_808821B8;
extern u32 lbl_808821BC;

/* Function declarations */
void fn_801A2A48(void);
void fn_801A2B58(void);
void fn_801A2C6C(void);
void fn_801A2CAC(void);
void fn_801A2CEC(void);
void fn_801A34D4(void);
void fn_801A3DFC(void);

asm void fn_801A2A48(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r6, lbl_8077F198@ha
    stw r0, 0x14(r1)
    li r0, 0x0
    addi r6, r6, lbl_8077F198@l
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    stw r4, 0x4(r3)
    stw r6, 0x0(r3)
    stw r0, 0x8(r3)
    lwz r0, 0x7e0(r4)
    extrwi. r0, r0, 1, 26
    stw r0, 0x8(r3)
    beq lbl_fn_801A2A48_00000090
    cmpwi r5, 0x0
    bge lbl_fn_801A2A48_0000004C
    li r5, 0x2e
lbl_fn_801A2A48_0000004C:
    lwz r3, 0x4(r3)
    li r0, 0x1
    lfs f0, lbl_80882168
    li r4, 0x0
    stw r0, 0x3fc(r3)
    addi r31, r3, 0xb0
    lfs f1, lbl_8088216C
    mr r3, r31
    lfs f2, lbl_80882170
    li r6, 0x0
    stfs f0, 0x24c(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80882168
    stfs f0, 0x238(r31)
    b lbl_fn_801A2A48_000000DC
lbl_fn_801A2A48_00000090:
    cmpwi r5, 0x0
    bge lbl_fn_801A2A48_0000009C
    li r5, 0x68
lbl_fn_801A2A48_0000009C:
    lwz r3, 0x4(r3)
    li r0, 0x1
    lfs f0, lbl_80882168
    li r4, 0x0
    stw r0, 0x3fc(r3)
    addi r31, r3, 0xb0
    lfs f1, lbl_8088216C
    mr r3, r31
    lfs f2, lbl_80882170
    li r6, 0x0
    stfs f0, 0x24c(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80882168
    stfs f0, 0x238(r31)
lbl_fn_801A2A48_000000DC:
    lwz r4, 0x4(r30)
    li r5, 0x13
    li r0, 0x0
    mr r3, r30
    stw r5, 0x560(r4)
    lwz r4, 0x4(r30)
    stw r0, 0xf1c(r4)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801A2B58(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    psq_st f31, 0x18(r1), 0, 0
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x8(r3)
    lwz r4, 0x4(r3)
    cmpwi r0, 0x0
    addi r3, r4, 0xb0
    beq lbl_fn_801A2B58_0000018C
    lwz r0, 0x22c(r3)
    cmpwi r0, 0x2e
    bne lbl_fn_801A2B58_000001E8
    lfs f1, 0x578(r4)
    lfs f0, lbl_80882174
    fcmpo cr0, f1, f0
    ble lbl_fn_801A2B58_000001E8
    lfs f1, lbl_8088216C
    li r4, 0x0
    lfs f2, lbl_80882170
    li r5, 0x31
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    li r31, 0x1
    b lbl_fn_801A2B58_000001E8
lbl_fn_801A2B58_0000018C:
    lwz r0, 0x22c(r3)
    cmpwi r0, 0x68
    bne lbl_fn_801A2B58_000001CC
    lfs f1, 0x578(r4)
    lfs f0, lbl_80882174
    fcmpo cr0, f1, f0
    ble lbl_fn_801A2B58_000001E8
    lfs f1, lbl_8088216C
    li r4, 0x0
    lfs f2, lbl_80882170
    li r5, 0x69
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_801A2B58_000001E8
lbl_fn_801A2B58_000001CC:
    lfs f31, 0x234(r3)
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_801A2B58_000001E8
    li r31, 0x1
lbl_fn_801A2B58_000001E8:
    lwz r3, 0x4(r30)
    li r5, 0x0
    lfs f1, lbl_8088216C
    lfs f2, lbl_80882168
    addi r4, r3, 0x534
    bl fn_8013CB68
    psq_l f31, 0x18(r1), 0, 0
    mr r3, r31
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801A2C6C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801A2C6C_0000024C
    cmpwi r4, 0x0
    ble lbl_fn_801A2C6C_0000024C
    bl dtor_80084684
lbl_fn_801A2C6C_0000024C:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801A2CAC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801A2CAC_0000028C
    cmpwi r4, 0x0
    ble lbl_fn_801A2CAC_0000028C
    bl dtor_80084684
lbl_fn_801A2CAC_0000028C:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801A2CEC(void)
{
    nofralloc
    stwu r1, -0x300(r1)
    mflr r0
    stw r0, 0x304(r1)
    stfd f31, 0x2f0(r1)
    psq_st f31, 0x2f8(r1), 0, 0
    stfd f30, 0x2e0(r1)
    psq_st f30, 0x2e8(r1), 0, 0
    stw r31, 0x2dc(r1)
    mr r31, r7
    stw r30, 0x2d8(r1)
    mr r30, r6
    stw r29, 0x2d4(r1)
    mr r29, r5
    stw r28, 0x2d0(r1)
    mr r28, r3
    bl fn_801C3414
    lfs f0, lbl_80882178
    lis r4, lbl_8077F578@ha
    li r3, 0x0
    stfs f0, 0x2c(r28)
    addi r4, r4, lbl_8077F578@l
    lwz r5, 0x4(r28)
    stw r4, 0x0(r28)
    li r0, 0xd
    stw r3, 0x30(r28)
    stw r3, 0x34(r28)
    stw r31, 0x3c(r28)
    stw r0, 0x560(r5)
    lwz r3, 0x4(r28)
    lwz r0, 0x12a4(r3)
    addi r31, r3, 0xb0
    srwi. r0, r0, 31
    beq lbl_fn_801A2CEC_0000032C
    bl fn_801539E0
lbl_fn_801A2CEC_0000032C:
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_801A2CEC_00000350
    lwz r4, 0x4(r28)
    lwz r0, 0x648(r4)
    cmpwi r0, 0x0
    beq lbl_fn_801A2CEC_00000350
    addi r5, r4, 0xb0
    bl fn_80105950
lbl_fn_801A2CEC_00000350:
    lwz r3, 0x4(r28)
    lwz r4, 0x638(r3)
    stw r4, 0x40(r28)
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801A2CEC_00000384
    lwz r3, 0xc8(r4)
    cmpwi r3, 0x0
    ble lbl_fn_801A2CEC_0000037C
    bl fn_80219E6C
    b lbl_fn_801A2CEC_00000388
lbl_fn_801A2CEC_0000037C:
    mr r3, r4
    b lbl_fn_801A2CEC_00000388
lbl_fn_801A2CEC_00000384:
    mr r3, r4
lbl_fn_801A2CEC_00000388:
    lwz r4, 0x4(r28)
    cmpwi r30, 0x0
    lwz r0, 0x638(r4)
    stw r0, 0x63c(r4)
    stw r3, 0x638(r4)
    lfs f0, 0x58(r3)
    stfs f0, 0x28(r28)
    lwz r3, 0x4(r28)
    psq_l f1, 0x528(r3), 0, 0
    lfs f2, 0x530(r3)
    stfs f2, 0x1c(r28)
    psq_st f1, 0x14(r28), 0, 0
    beq lbl_fn_801A2CEC_000005C4
    lfs f2, 0x8(r30)
    addi r3, r1, 0x128
    psq_l f1, 0x0(r30), 0, 0
    mr r4, r3
    psq_st f1, 0x8(r28), 0, 0
    lfs f4, 0x1c(r28)
    lfs f3, 0x8(r28)
    lfs f0, 0x14(r28)
    fsubs f4, f2, f4
    stfs f2, 0x10(r28)
    fsubs f3, f3, f0
    lfs f0, lbl_80882178
    stfs f4, 0x130(r1)
    stfs f3, 0x128(r1)
    stfs f0, 0x12c(r1)
    bl fn_805F98D0
    lfs f2, 0x130(r1)
    addi r3, r1, 0x128
    lfs f0, lbl_8088217C
    addi r30, r1, 0xf8
    fabs f3, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0x100(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_801A2CEC_0000044C
    lfs f3, 0xf8(r1)
    lfs f0, lbl_80882178
    fcmpo cr0, f3, f0
    ble lbl_fn_801A2CEC_00000440
    lfs f0, lbl_80882180
    b lbl_fn_801A2CEC_00000444
lbl_fn_801A2CEC_00000440:
    lfs f0, lbl_80882184
lbl_fn_801A2CEC_00000444:
    stfs f0, 0x90(r1)
    b lbl_fn_801A2CEC_00000460
lbl_fn_801A2CEC_0000044C:
    frsp f2, f2
    lfs f1, 0xf8(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x90(r1)
lbl_fn_801A2CEC_00000460:
    lfs f0, 0x90(r1)
    addi r3, r1, 0x208
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80882178
    addi r4, r1, 0x80
    lfs f30, 0x210(r1)
    mr r5, r4
    lfs f31, 0x20c(r1)
    addi r3, r1, 0x238
    lfs f13, 0x208(r1)
    lfs f12, 0x220(r1)
    lfs f11, 0x21c(r1)
    lfs f10, 0x218(r1)
    lfs f9, 0x230(r1)
    lfs f8, 0x22c(r1)
    lfs f7, 0x228(r1)
    lfs f6, 0x234(r1)
    lfs f5, 0x224(r1)
    lfs f4, 0x214(r1)
    lfs f0, lbl_80882188
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x100(r1)
    stfs f3, 0x268(r1)
    stfs f3, 0x26c(r1)
    stfs f3, 0x270(r1)
    stfs f0, 0x274(r1)
    stfs f13, 0x50(r1)
    stfs f31, 0x54(r1)
    stfs f30, 0x58(r1)
    stfs f13, 0x238(r1)
    stfs f31, 0x23c(r1)
    stfs f30, 0x240(r1)
    stfs f10, 0x5c(r1)
    stfs f11, 0x60(r1)
    stfs f12, 0x64(r1)
    stfs f10, 0x248(r1)
    stfs f11, 0x24c(r1)
    stfs f12, 0x250(r1)
    stfs f7, 0x68(r1)
    stfs f8, 0x6c(r1)
    stfs f9, 0x70(r1)
    stfs f7, 0x258(r1)
    stfs f8, 0x25c(r1)
    stfs f9, 0x260(r1)
    stfs f4, 0x74(r1)
    stfs f5, 0x78(r1)
    stfs f6, 0x7c(r1)
    stfs f4, 0x244(r1)
    stfs f5, 0x254(r1)
    stfs f6, 0x264(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x88(r1)
    bl fn_805F9750
    lfs f2, 0x88(r1)
    lfs f0, lbl_8088217C
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801A2CEC_0000057C
    lfs f3, 0x84(r1)
    lfs f0, lbl_80882178
    fcmpo cr0, f3, f0
    ble lbl_fn_801A2CEC_0000056C
    lfs f0, lbl_80882180
    b lbl_fn_801A2CEC_00000570
lbl_fn_801A2CEC_0000056C:
    lfs f0, lbl_80882184
lbl_fn_801A2CEC_00000570:
    fneg f0, f0
    stfs f0, 0x8c(r1)
    b lbl_fn_801A2CEC_00000590
lbl_fn_801A2CEC_0000057C:
    lfs f1, 0x84(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x8c(r1)
lbl_fn_801A2CEC_00000590:
    addi r3, r1, 0x8c
    lfs f2, lbl_80882178
    psq_l f1, 0x0(r3), 0, 0
    li r0, 0x1
    lwz r3, 0x4(r28)
    stfs f2, 0x94(r1)
    stfs f2, 0x100(r1)
    frsp f2, f2
    psq_st f1, 0x534(r3), 0, 0
    stfs f2, 0x53c(r3)
    psq_st f1, 0x0(r30), 0, 0
    stw r0, 0x38(r28)
    b lbl_fn_801A2CEC_0000074C
lbl_fn_801A2CEC_000005C4:
    lwz r0, lbl_8087F610
    li r4, 0x0
    li r5, 0x0
    cmpwi r0, 0x0
    bne lbl_fn_801A2CEC_000005EC
    lwz r3, lbl_8087F0A8
    lwz r0, 0x314(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801A2CEC_000005EC
    li r5, 0x1
lbl_fn_801A2CEC_000005EC:
    cmpwi r5, 0x0
    beq lbl_fn_801A2CEC_00000608
    lwz r3, 0x4(r28)
    lwz r0, 0x50(r3)
    cmpwi r0, 0x1
    bne lbl_fn_801A2CEC_00000608
    li r4, 0x1
lbl_fn_801A2CEC_00000608:
    cmpwi r4, 0x0
    bne lbl_fn_801A2CEC_000006B0
    lfs f4, 0x28(r28)
    addi r3, r1, 0x1d8
    lfs f5, lbl_8088218C
    li r4, 0x79
    lwz r5, 0x4(r28)
    lfs f3, lbl_80882178
    fadds f30, f5, f4
    lfs f0, lbl_80882188
    stfs f3, 0xd4(r1)
    stfs f3, 0xd8(r1)
    stfs f0, 0xdc(r1)
    lfs f1, 0x538(r5)
    bl fn_805F8E70
    addi r4, r1, 0xd4
    addi r3, r1, 0x1d8
    mr r5, r4
    bl fn_805F93C0
    lfs f4, 0xdc(r1)
    addi r3, r1, 0xec
    lfs f0, 0xd8(r1)
    lfs f3, 0xd4(r1)
    fmuls f4, f4, f30
    fmuls f5, f0, f30
    lfs f0, 0x1c(r28)
    fmuls f6, f3, f30
    lfs f3, 0x18(r28)
    fadds f2, f0, f4
    lfs f0, 0x14(r28)
    fadds f3, f3, f5
    stfs f6, 0xe0(r1)
    fadds f0, f0, f6
    stfs f3, 0xf0(r1)
    stfs f0, 0xec(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f5, 0xe4(r1)
    stfs f4, 0xe8(r1)
    stfs f2, 0xf4(r1)
    psq_st f1, 0x8(r28), 0, 0
    stfs f2, 0x10(r28)
    b lbl_fn_801A2CEC_00000744
lbl_fn_801A2CEC_000006B0:
    lwz r5, 0x4(r28)
    addi r3, r1, 0x1a8
    lfs f3, lbl_80882178
    li r4, 0x79
    lfs f0, lbl_80882188
    stfs f3, 0xb0(r1)
    stfs f3, 0xb4(r1)
    stfs f0, 0xb8(r1)
    lfs f1, 0x538(r5)
    bl fn_805F8E70
    addi r4, r1, 0xb0
    addi r3, r1, 0x1a8
    mr r5, r4
    bl fn_805F93C0
    lfs f5, 0xb8(r1)
    addi r3, r1, 0xc8
    lfs f4, lbl_80882190
    lfs f0, 0xb4(r1)
    fmuls f5, f5, f4
    lfs f3, 0xb0(r1)
    fmuls f6, f0, f4
    lfs f0, 0x1c(r28)
    fmuls f4, f3, f4
    lfs f3, 0x18(r28)
    fadds f2, f0, f5
    lfs f0, 0x14(r28)
    fadds f3, f3, f6
    stfs f4, 0xbc(r1)
    fadds f0, f0, f4
    stfs f3, 0xcc(r1)
    stfs f0, 0xc8(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f6, 0xc0(r1)
    stfs f5, 0xc4(r1)
    stfs f2, 0xd0(r1)
    psq_st f1, 0x8(r28), 0, 0
    stfs f2, 0x10(r28)
lbl_fn_801A2CEC_00000744:
    li r0, 0x0
    stw r0, 0x38(r28)
lbl_fn_801A2CEC_0000074C:
    li r0, 0x1
    stw r0, 0x34c(r31)
    lfs f0, lbl_80882188
    mr r3, r31
    stfs f0, 0x24c(r31)
    li r4, 0x0
    lfs f1, lbl_80882178
    li r5, 0x173
    lfs f2, lbl_80882194
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80882188
    li r0, 0x0
    stfs f0, 0x238(r31)
    addi r5, r1, 0x11c
    addi r6, r1, 0x110
    lfs f4, lbl_80882198
    stw r0, 0x2ac(r1)
    addi r4, r1, 0x278
    lfs f0, lbl_8088219C
    lis r7, 0x8000
    stw r0, 0x2b0(r1)
    li r8, 0x0
    lwz r3, lbl_8087EE98
    li r9, 0x0
    stw r0, 0x2b4(r1)
    stw r0, 0x2b8(r1)
    lfs f2, 0x1c(r28)
    psq_l f1, 0x14(r28), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    lfs f5, 0x120(r1)
    lfs f3, 0x114(r1)
    fadds f4, f5, f4
    stfs f2, 0x124(r1)
    fsubs f0, f3, f0
    stfs f2, 0x118(r1)
    stfs f4, 0x120(r1)
    stfs f0, 0x114(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_801A2CEC_00000810
    addi r3, r1, 0x27c
    lfs f2, 0x284(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x14(r28), 0, 0
    stfs f2, 0x1c(r28)
lbl_fn_801A2CEC_00000810:
    cmpwi r29, 0x0
    beq lbl_fn_801A2CEC_00000844
    lwz r4, 0x40(r28)
    lis r0, 0x4330
    stw r0, 0x2c8(r1)
    lis r3, lbl_8073A170@ha
    lwz r0, 0xc0(r4)
    lfd f3, lbl_8073A170@l(r3)
    xoris r0, r0, 0x8000
    stw r0, 0x2cc(r1)
    lfd f0, 0x2c8(r1)
    fsubs f0, f0, f3
    stfs f0, 0x2c(r28)
lbl_fn_801A2CEC_00000844:
    lwz r30, 0x4(r28)
    lwz r0, 0x48(r30)
    cmpwi r0, 0x0
    beq lbl_fn_801A2CEC_00000A58
    lwz r4, 0xd1c(r30)
    cmpwi r4, 0x0
    beq lbl_fn_801A2CEC_00000A58
    lwz r12, 0x0(r4)
    addi r3, r1, 0xa4
    li r5, 0x1
    lwz r12, 0x64(r12)
    mtctr r12
    bctrl
    lfs f4, 0xac(r1)
    addi r3, r1, 0x104
    lfs f0, 0x530(r30)
    addi r29, r1, 0x98
    lfs f3, lbl_80882178
    fsubs f2, f4, f0
    lfs f5, 0xa4(r1)
    lfs f4, 0x528(r30)
    stfs f3, 0x108(r1)
    fsubs f4, f5, f4
    lfs f0, lbl_8088217C
    frsp f5, f2
    stfs f2, 0x10c(r1)
    stfs f4, 0x104(r1)
    fabs f4, f5
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    frsp f4, f4
    stfs f2, 0xa0(r1)
    fcmpo cr0, f4, f0
    bge lbl_fn_801A2CEC_000008EC
    lfs f0, 0x98(r1)
    fcmpo cr0, f0, f3
    ble lbl_fn_801A2CEC_000008E0
    lfs f0, lbl_80882180
    b lbl_fn_801A2CEC_000008E4
lbl_fn_801A2CEC_000008E0:
    lfs f0, lbl_80882184
lbl_fn_801A2CEC_000008E4:
    stfs f0, 0x48(r1)
    b lbl_fn_801A2CEC_00000900
lbl_fn_801A2CEC_000008EC:
    fmr f2, f5
    lfs f1, 0x98(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_801A2CEC_00000900:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x138
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80882178
    addi r4, r1, 0x38
    lfs f31, 0x140(r1)
    mr r5, r4
    lfs f30, 0x13c(r1)
    addi r3, r1, 0x168
    lfs f13, 0x138(r1)
    lfs f12, 0x150(r1)
    lfs f11, 0x14c(r1)
    lfs f10, 0x148(r1)
    lfs f9, 0x160(r1)
    lfs f8, 0x15c(r1)
    lfs f7, 0x158(r1)
    lfs f6, 0x164(r1)
    lfs f5, 0x154(r1)
    lfs f4, 0x144(r1)
    lfs f0, lbl_80882188
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0xa0(r1)
    stfs f3, 0x198(r1)
    stfs f3, 0x19c(r1)
    stfs f3, 0x1a0(r1)
    stfs f0, 0x1a4(r1)
    stfs f13, 0x8(r1)
    stfs f30, 0xc(r1)
    stfs f31, 0x10(r1)
    stfs f13, 0x168(r1)
    stfs f30, 0x16c(r1)
    stfs f31, 0x170(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0x178(r1)
    stfs f11, 0x17c(r1)
    stfs f12, 0x180(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0x188(r1)
    stfs f8, 0x18c(r1)
    stfs f9, 0x190(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0x174(r1)
    stfs f5, 0x184(r1)
    stfs f6, 0x194(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_8088217C
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801A2CEC_00000A1C
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80882178
    fcmpo cr0, f3, f0
    ble lbl_fn_801A2CEC_00000A0C
    lfs f0, lbl_80882180
    b lbl_fn_801A2CEC_00000A10
lbl_fn_801A2CEC_00000A0C:
    lfs f0, lbl_80882184
lbl_fn_801A2CEC_00000A10:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_801A2CEC_00000A30
lbl_fn_801A2CEC_00000A1C:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_801A2CEC_00000A30:
    addi r3, r1, 0x44
    lfs f2, lbl_80882178
    psq_l f1, 0x0(r3), 0, 0
    lwz r3, 0x4(r28)
    stfs f2, 0x4c(r1)
    stfs f2, 0xa0(r1)
    frsp f2, f2
    psq_st f1, 0x534(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x53c(r3)
lbl_fn_801A2CEC_00000A58:
    psq_l f31, 0x2f8(r1), 0, 0
    mr r3, r28
    lfd f31, 0x2f0(r1)
    psq_l f30, 0x2e8(r1), 0, 0
    lfd f30, 0x2e0(r1)
    lwz r31, 0x2dc(r1)
    lwz r30, 0x2d8(r1)
    lwz r29, 0x2d4(r1)
    lwz r28, 0x2d0(r1)
    lwz r0, 0x304(r1)
    mtlr r0
    addi r1, r1, 0x300
    blr
}

asm void fn_801A34D4(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    addi r11, r1, 0x100
    stfd f31, 0x110(r1)
    psq_st f31, 0x118(r1), 0, 0
    stfd f30, 0x100(r1)
    psq_st f30, 0x108(r1), 0, 0
    bl _savegpr_27
    lwz r4, 0x4(r3)
    lis r0, 0x4330
    stw r0, 0xd0(r1)
    mr r27, r3
    lfs f31, lbl_80882188
    addi r31, r4, 0xb0
    addi r3, r4, 0x7d4
    stw r0, 0xd8(r1)
    lfs f30, lbl_80882178
    li r29, 0x0
    li r4, 0x2b
    li r5, -0x1
    bl fn_80134168
    xoris r0, r3, 0x8000
    stw r0, 0xd4(r1)
    lis r3, lbl_8073A170@ha
    lwz r4, 0x4(r27)
    lfd f3, lbl_8073A170@l(r3)
    lfd f0, 0xd0(r1)
    lwz r0, 0x7e8(r4)
    fsubs f3, f0, f3
    lfs f0, lbl_808821A0
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    fmuls f3, f31, f3
    fdivs f0, f3, f0
    fadds f30, f30, f0
    fadds f31, f31, f30
    bne lbl_fn_801A34D4_00000B30
    lwz r3, lbl_8087F048
    bl fn_8010CA24
    fmuls f31, f31, f1
lbl_fn_801A34D4_00000B30:
    lwz r3, lbl_8087EFA8
    lfs f0, 0x2c(r27)
    lfs f3, 0x3a4(r3)
    lwz r3, 0x4(r27)
    fmadds f0, f31, f3, f0
    stfs f0, 0x2c(r27)
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801A34D4_000010C8
    lwz r0, lbl_8087F610
    li r4, 0x0
    li r5, 0x0
    cmpwi r0, 0x0
    bne lbl_fn_801A34D4_00000B7C
    lwz r3, lbl_8087F0A8
    lwz r0, 0x314(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801A34D4_00000B7C
    li r5, 0x1
lbl_fn_801A34D4_00000B7C:
    cmpwi r5, 0x0
    beq lbl_fn_801A34D4_00000B98
    lwz r3, 0x4(r27)
    lwz r0, 0x50(r3)
    cmpwi r0, 0x1
    bne lbl_fn_801A34D4_00000B98
    li r4, 0x1
lbl_fn_801A34D4_00000B98:
    cmpwi r4, 0x0
    bne lbl_fn_801A34D4_00000BB8
    lfs f1, lbl_80882178
    mr r3, r27
    lfs f2, lbl_808821A4
    li r4, 0x0
    lfs f3, lbl_808821A8
    bl fn_801C3458
lbl_fn_801A34D4_00000BB8:
    lwz r30, 0x40(r27)
    lwz r3, 0xc8(r30)
    cmpwi r3, 0x0
    ble lbl_fn_801A34D4_00000BD0
    bl fn_80219E6C
    mr r30, r3
lbl_fn_801A34D4_00000BD0:
    lwz r28, 0x40(r27)
    lis r3, lbl_8073A170@ha
    lfd f3, lbl_8073A170@l(r3)
    lwz r0, 0xc0(r28)
    lfs f4, 0x2c(r27)
    xoris r0, r0, 0x8000
    stw r0, 0xdc(r1)
    lfd f0, 0xd8(r1)
    fsubs f0, f0, f3
    fcmpo cr0, f4, f0
    cror eq, gt, eq
    bne lbl_fn_801A34D4_00000C08
    mr r6, r28
    b lbl_fn_801A34D4_00000C0C
lbl_fn_801A34D4_00000C08:
    mr r6, r30
lbl_fn_801A34D4_00000C0C:
    lwz r5, 0x4(r27)
    mr r3, r31
    li r4, 0x0
    lwz r0, 0x638(r5)
    stw r0, 0x63c(r5)
    stw r6, 0x638(r5)
    lwz r5, 0x4(r27)
    lwz r5, 0x638(r5)
    lfs f0, 0x58(r5)
    stfs f0, 0x28(r27)
    lfs f30, 0x234(r31)
    bl fn_80097D7C
    fcmpo cr0, f30, f1
    ble lbl_fn_801A34D4_00000C68
    lfs f1, lbl_80882178
    mr r3, r31
    lfs f2, lbl_80882194
    li r4, 0x0
    li r5, 0x174
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
lbl_fn_801A34D4_00000C68:
    lwz r0, 0x34(r27)
    cmpwi r0, 0x0
    bne lbl_fn_801A34D4_00000CCC
    lwz r0, 0xc0(r28)
    lis r3, lbl_8073A170@ha
    lfd f3, lbl_8073A170@l(r3)
    xoris r0, r0, 0x8000
    stw r0, 0xd4(r1)
    lfs f4, 0x2c(r27)
    lfd f0, 0xd0(r1)
    fsubs f0, f0, f3
    fcmpo cr0, f4, f0
    cror eq, gt, eq
    bne lbl_fn_801A34D4_00000CCC
    li r0, 0x1
    stw r0, 0x34(r27)
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_801A34D4_00000CCC
    lwz r4, 0x4(r27)
    bl fn_801059F8
    lwz r4, 0x4(r27)
    lwz r3, lbl_8087F048
    addi r5, r4, 0xb0
    bl fn_80105A08
lbl_fn_801A34D4_00000CCC:
    lwz r4, 0x4(r27)
    addi r3, r1, 0x68
    lfs f3, 0x18(r27)
    psq_l f1, 0x528(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lfs f2, 0x530(r4)
    lfs f4, 0x6c(r1)
    lfs f0, lbl_808821AC
    fsubs f3, f4, f3
    stfs f2, 0x70(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_801A34D4_00000D50
    mr r3, r27
    bl fn_801C3D1C
    cmpwi r3, 0x0
    beq lbl_fn_801A34D4_00000D50
    lwz r3, 0x40(r27)
    lbz r0, 0x1(r3)
    cmpwi r0, 0x1
    bne lbl_fn_801A34D4_00000D50
    lwz r0, 0xc0(r28)
    lis r3, lbl_8073A170@ha
    lfs f0, lbl_808821AC
    xoris r0, r0, 0x8000
    stw r0, 0xdc(r1)
    fmuls f5, f0, f31
    lfd f4, lbl_8073A170@l(r3)
    lfd f3, 0xd8(r1)
    lfs f0, 0x6c(r1)
    fsubs f3, f3, f4
    fdivs f3, f5, f3
    fadds f0, f0, f3
    stfs f0, 0x6c(r1)
lbl_fn_801A34D4_00000D50:
    addi r3, r1, 0x68
    lwz r4, 0x4(r27)
    psq_l f1, 0x0(r3), 0, 0
    li r3, 0x0
    psq_st f1, 0x528(r4), 0, 0
    lfs f2, 0x70(r1)
    stfs f2, 0x530(r4)
    lwz r0, 0x3c(r27)
    cmpwi r0, 0x0
    beq lbl_fn_801A34D4_00000D94
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x0
    bl fn_800A55D4
    cntlzw r0, r3
    srwi r3, r0, 5
    b lbl_fn_801A34D4_00000E00
lbl_fn_801A34D4_00000D94:
    lwz r4, lbl_8087F9C0
    lwz r0, 0x20(r4)
    cmpwi r0, 0x0
    beq lbl_fn_801A34D4_00000DB8
    cmpwi r0, 0x1
    beq lbl_fn_801A34D4_00000DD4
    cmpwi r0, 0x2
    beq lbl_fn_801A34D4_00000DF0
    b lbl_fn_801A34D4_00000E00
lbl_fn_801A34D4_00000DB8:
    lwz r3, lbl_8087F0A8
    li r4, 0x9
    addi r3, r3, 0x48c
    bl fn_801240B4
    cntlzw r0, r3
    srwi r3, r0, 5
    b lbl_fn_801A34D4_00000E00
lbl_fn_801A34D4_00000DD4:
    lwz r3, lbl_8087F0A8
    li r4, 0x9
    addi r3, r3, 0x48c
    bl fn_801240B4
    cntlzw r0, r3
    srwi r3, r0, 5
    b lbl_fn_801A34D4_00000E00
lbl_fn_801A34D4_00000DF0:
    lwz r3, lbl_8087F0A8
    li r4, 0x0
    addi r3, r3, 0x48c
    bl fn_801240B4
lbl_fn_801A34D4_00000E00:
    cmpwi r3, 0x0
    beq lbl_fn_801A34D4_00000EEC
    lwz r0, 0x3c(r27)
    cmpwi r0, 0x0
    bne lbl_fn_801A34D4_00000ED4
    lwz r0, lbl_8087F610
    li r4, 0x0
    li r5, 0x0
    cmpwi r0, 0x0
    bne lbl_fn_801A34D4_00000E3C
    lwz r3, lbl_8087F0A8
    lwz r0, 0x314(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801A34D4_00000E3C
    li r5, 0x1
lbl_fn_801A34D4_00000E3C:
    cmpwi r5, 0x0
    beq lbl_fn_801A34D4_00000E58
    lwz r3, 0x4(r27)
    lwz r0, 0x50(r3)
    cmpwi r0, 0x1
    bne lbl_fn_801A34D4_00000E58
    li r4, 0x1
lbl_fn_801A34D4_00000E58:
    cmpwi r4, 0x0
    bne lbl_fn_801A34D4_00000ED4
    lwz r0, 0xc0(r30)
    lis r3, lbl_8073A170@ha
    lfd f3, lbl_8073A170@l(r3)
    xoris r0, r0, 0x8000
    stw r0, 0xd4(r1)
    lfs f4, 0x2c(r27)
    lfd f0, 0xd0(r1)
    fsubs f0, f0, f3
    fcmpo cr0, f4, f0
    cror eq, gt, eq
    bne lbl_fn_801A34D4_00000EC0
    lwz r0, 0xc0(r28)
    xoris r0, r0, 0x8000
    stw r0, 0xdc(r1)
    lfd f0, 0xd8(r1)
    fsubs f0, f0, f3
    fcmpo cr0, f4, f0
    bge lbl_fn_801A34D4_00000EB4
    lwz r3, lbl_8087F048
    lwz r4, 0x4(r27)
    bl fn_801059F8
lbl_fn_801A34D4_00000EB4:
    li r0, 0x1
    stw r0, 0x30(r27)
    b lbl_fn_801A34D4_00000EE4
lbl_fn_801A34D4_00000EC0:
    lwz r3, 0x4(r27)
    bl fn_8016DA4C
    lfs f0, lbl_80882178
    stfs f0, 0x2c(r27)
    b lbl_fn_801A34D4_00000EE4
lbl_fn_801A34D4_00000ED4:
    lwz r3, 0x4(r27)
    bl fn_8016DA4C
    lfs f0, lbl_80882178
    stfs f0, 0x2c(r27)
lbl_fn_801A34D4_00000EE4:
    li r29, 0x1
    b lbl_fn_801A34D4_00001094
lbl_fn_801A34D4_00000EEC:
    lwz r0, lbl_8087F610
    li r4, 0x0
    li r5, 0x0
    cmpwi r0, 0x0
    bne lbl_fn_801A34D4_00000F14
    lwz r3, lbl_8087F0A8
    lwz r0, 0x314(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801A34D4_00000F14
    li r5, 0x1
lbl_fn_801A34D4_00000F14:
    cmpwi r5, 0x0
    beq lbl_fn_801A34D4_00000F30
    lwz r3, 0x4(r27)
    lwz r0, 0x50(r3)
    cmpwi r0, 0x1
    bne lbl_fn_801A34D4_00000F30
    li r4, 0x1
lbl_fn_801A34D4_00000F30:
    cmpwi r4, 0x0
    beq lbl_fn_801A34D4_00001094
    lfs f3, 0x2c(r27)
    lfs f0, lbl_80882190
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_801A34D4_00001094
    lwz r0, 0x3c(r27)
    cmpwi r0, 0x0
    bne lbl_fn_801A34D4_00001088
    lwz r6, 0x4(r27)
    lwz r0, 0x50(r6)
    cmpwi r0, 0x1
    bne lbl_fn_801A34D4_00001088
    lfs f4, lbl_80882178
    li r28, 0x0
    lfs f0, lbl_80882188
    li r5, 0x2
    lfs f3, lbl_808821B0
    li r0, 0x1
    stfs f4, 0x44(r1)
    addi r3, r1, 0x78
    li r4, 0x79
    stfs f4, 0x48(r1)
    stfs f0, 0x4c(r1)
    lfs f1, 0x538(r6)
    stfs f4, 0xac(r1)
    stfs f4, 0xb0(r1)
    stfs f4, 0xb4(r1)
    stfs f3, 0xb8(r1)
    stb r28, 0xbd(r1)
    stw r5, 0xc0(r1)
    stw r28, 0xc4(r1)
    stw r28, 0xc8(r1)
    stw r0, 0xa8(r1)
    bl fn_805F8E70
    addi r4, r1, 0x44
    addi r3, r1, 0x78
    mr r5, r4
    bl fn_805F93C0
    lfs f5, 0x4c(r1)
    addi r3, r1, 0x5c
    lfs f4, lbl_80882198
    clrlwi r5, r28, 24
    lfs f0, 0x48(r1)
    addi r6, r1, 0xac
    fmuls f5, f5, f4
    lwz r4, 0x4(r27)
    fmuls f6, f0, f4
    lfs f3, 0x44(r1)
    lfs f0, 0x530(r4)
    fmuls f4, f3, f4
    fadds f7, f0, f5
    lfs f3, 0x52c(r4)
    lfs f0, 0x528(r4)
    fadds f3, f3, f6
    lwz r8, lbl_8087F9F8
    fadds f0, f0, f4
    lwz r0, 0xa8(r1)
    fmr f2, f7
    stfs f0, 0x5c(r1)
    addi r7, r8, 0x15dc
    lfs f0, lbl_808821A0
    stfs f3, 0x60(r1)
    lwz r4, 0xc0(r1)
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r28
    stw r0, 0x15d8(r8)
    mr r0, r28
    stfs f2, 0xb4(r1)
    frsp f2, f2
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0x15e4(r8)
    stfs f0, 0x15e8(r8)
    stb r28, 0x15ec(r8)
    stb r5, 0x15ed(r8)
    stw r4, 0x15f0(r8)
    stw r3, 0x15f4(r8)
    stfs f4, 0x50(r1)
    stfs f6, 0x54(r1)
    stfs f5, 0x58(r1)
    stfs f7, 0x64(r1)
    psq_st f1, 0x0(r6), 0, 0
    stfs f0, 0xb8(r1)
    stb r28, 0xbc(r1)
    stw r0, 0x15f8(r8)
lbl_fn_801A34D4_00001088:
    lwz r3, lbl_8087F430
    bl fn_80373FC4
    li r29, 0x1
lbl_fn_801A34D4_00001094:
    lwz r3, 0x4(r27)
    lfs f2, 0x10(r27)
    addi r3, r3, 0xf6c
    psq_l f1, 0x8(r27), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x8(r3)
    lwz r3, 0x4(r27)
    lfs f0, 0x28(r27)
    stfs f0, 0xf78(r3)
    lwz r3, 0x4(r27)
    lfs f0, 0x2c(r27)
    stfs f0, 0xfb8(r3)
    b lbl_fn_801A34D4_00001330
lbl_fn_801A34D4_000010C8:
    lwz r30, 0x638(r3)
    lwz r28, 0xd1c(r3)
    cmpwi r30, 0x0
    beq lbl_fn_801A34D4_000010EC
    cmpwi r28, 0x0
    bne lbl_fn_801A34D4_00001100
    lwz r0, 0x38(r27)
    cmpwi r0, 0x0
    bne lbl_fn_801A34D4_00001100
lbl_fn_801A34D4_000010EC:
    bl fn_8016DA4C
    lfs f0, lbl_80882178
    li r29, 0x1
    stfs f0, 0x2c(r27)
    b lbl_fn_801A34D4_00001324
lbl_fn_801A34D4_00001100:
    lwz r0, 0x38(r27)
    lfs f0, 0x58(r30)
    cmpwi r0, 0x0
    stfs f0, 0x28(r27)
    bne lbl_fn_801A34D4_000012E0
    lwz r0, 0x4(r30)
    cmpwi r0, 0x1788
    beq lbl_fn_801A34D4_00001128
    cmpwi r0, 0x1791
    bne lbl_fn_801A34D4_00001214
lbl_fn_801A34D4_00001128:
    lwz r3, lbl_8087EE68
    mr r5, r30
    lwz r4, 0x4(r27)
    bl fn_800185B4
    cmpwi r3, 0x0
    beq lbl_fn_801A34D4_000011E0
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801A34D4_000011E0
    lwz r5, 0xc(r3)
    cmpwi r5, 0x0
    beq lbl_fn_801A34D4_000011E0
    lwz r7, 0x38(r5)
    li r4, 0x0
    li r0, 0x0
    li r3, 0x0
    rlwinm r6, r7, 0, 29, 29
    cmplwi r6, 0x4
    beq lbl_fn_801A34D4_00001184
    clrlwi r6, r7, 31
    cmplwi r6, 0x1
    beq lbl_fn_801A34D4_00001184
    li r3, 0x1
lbl_fn_801A34D4_00001184:
    cmpwi r3, 0x0
    beq lbl_fn_801A34D4_000011A0
    lwz r3, 0x7e0(r5)
    rlwinm r3, r3, 0, 26, 26
    cmplwi r3, 0x20
    beq lbl_fn_801A34D4_000011A0
    li r0, 0x1
lbl_fn_801A34D4_000011A0:
    cmpwi r0, 0x0
    beq lbl_fn_801A34D4_000011D4
    lwz r0, 0x55c(r5)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_801A34D4_000011C8
    lwz r0, 0x560(r5)
    cmpwi r0, 0x1c
    bne lbl_fn_801A34D4_000011C8
    li r3, 0x1
lbl_fn_801A34D4_000011C8:
    cmpwi r3, 0x0
    bne lbl_fn_801A34D4_000011D4
    li r4, 0x1
lbl_fn_801A34D4_000011D4:
    cmpwi r4, 0x0
    beq lbl_fn_801A34D4_000011E0
    mr r28, r5
lbl_fn_801A34D4_000011E0:
    lwz r12, 0x0(r28)
    mr r4, r28
    addi r3, r1, 0x38
    lwz r5, 0x4(r27)
    lwz r12, 0xd8(r12)
    mtctr r12
    bctrl
    addi r3, r1, 0x38
    lfs f2, 0x40(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x8(r27), 0, 0
    stfs f2, 0x10(r27)
    b lbl_fn_801A34D4_000012E0
lbl_fn_801A34D4_00001214:
    lwz r12, 0x0(r28)
    mr r4, r28
    addi r3, r1, 0x2c
    li r5, 0x1
    lwz r12, 0x64(r12)
    mtctr r12
    bctrl
    addi r4, r1, 0x2c
    lfs f2, 0x34(r1)
    psq_l f1, 0x0(r4), 0, 0
    addi r3, r1, 0x14
    lwz r6, 0x4(r27)
    addi r5, r1, 0x8
    stfs f2, 0x10(r27)
    mr r4, r3
    psq_st f1, 0x8(r27), 0, 0
    lfs f3, 0x530(r28)
    lfs f0, 0x530(r6)
    lfs f5, 0x52c(r28)
    fsubs f2, f3, f0
    lfs f4, 0x52c(r6)
    lfs f3, 0x528(r28)
    lfs f0, 0x528(r6)
    fsubs f4, f5, f4
    stfs f2, 0x10(r1)
    fsubs f0, f3, f0
    stfs f4, 0xc(r1)
    stfs f0, 0x8(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x1c(r1)
    bl fn_805F98D0
    lfs f5, 0x1c(r1)
    lfs f4, lbl_808821B4
    lfs f3, 0x18(r1)
    lfs f0, 0x14(r1)
    fmuls f5, f5, f4
    fmuls f6, f3, f4
    lfs f3, 0xc(r27)
    fmuls f7, f0, f4
    lfs f4, 0x8(r27)
    lfs f0, 0x10(r27)
    fsubs f3, f3, f6
    fsubs f4, f4, f7
    stfs f7, 0x20(r1)
    fsubs f0, f0, f5
    stfs f6, 0x24(r1)
    stfs f5, 0x28(r1)
    stfs f4, 0x8(r27)
    stfs f3, 0xc(r27)
    stfs f0, 0x10(r27)
lbl_fn_801A34D4_000012E0:
    lwz r0, 0xc0(r30)
    lis r3, lbl_8073A170@ha
    lfd f3, lbl_8073A170@l(r3)
    xoris r0, r0, 0x8000
    stw r0, 0xd4(r1)
    lfs f4, 0x2c(r27)
    lfd f0, 0xd0(r1)
    fsubs f0, f0, f3
    fcmpo cr0, f4, f0
    cror eq, gt, eq
    bne lbl_fn_801A34D4_00001324
    lwz r3, lbl_8087F048
    lwz r4, 0x4(r27)
    bl fn_801059F8
    li r0, 0x1
    stw r0, 0x30(r27)
    li r29, 0x1
lbl_fn_801A34D4_00001324:
    lwz r3, 0x4(r27)
    lfs f0, 0x2c(r27)
    stfs f0, 0xfb8(r3)
lbl_fn_801A34D4_00001330:
    cmpwi r29, 0x0
    beq lbl_fn_801A34D4_00001388
    lwz r0, 0x30(r27)
    cmpwi r0, 0x0
    beq lbl_fn_801A34D4_00001388
    lwz r4, 0x4(r27)
    lwz r3, 0x638(r4)
    lwz r0, 0x4(r3)
    cmpwi r0, 0x1788
    beq lbl_fn_801A34D4_00001360
    cmpwi r0, 0x1791
    bne lbl_fn_801A34D4_00001388
lbl_fn_801A34D4_00001360:
    lwz r0, 0xac(r3)
    rlwinm r3, r0, 0, 13, 13
    subis r0, r3, 0x4
    cmplwi r0, 0x0
    bne lbl_fn_801A34D4_00001388
    lwz r3, lbl_8087F430
    bl fn_8036DAA8
    cmpwi r3, 0x0
    bne lbl_fn_801A34D4_00001388
    li r29, 0x0
lbl_fn_801A34D4_00001388:
    psq_l f31, 0x118(r1), 0, 0
    mr r3, r29
    lfd f31, 0x110(r1)
    psq_l f30, 0x108(r1), 0, 0
    lfd f30, 0x100(r1)
    addi r11, r1, 0x100
    bl _restgpr_27
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_801A3DFC(void)
{
    nofralloc
    stwu r1, -0x1b0(r1)
    mflr r0
    stw r0, 0x1b4(r1)
    addi r11, r1, 0x1b0
    bl _savegpr_27
    lwz r0, 0x30(r4)
    lis r31, lbl_8077F2A8@ha
    mr r28, r3
    mr r29, r4
    cmpwi r0, 0x0
    addi r31, r31, lbl_8077F2A8@l
    beq lbl_fn_801A3DFC_00001CB8
    lwz r4, 0x4(r4)
    lwz r3, 0x638(r4)
    lbz r0, 0x1(r3)
    cmpwi r0, 0x1
    bne lbl_fn_801A3DFC_00001728
    lis r5, lbl_8073A4EC@ha
    li r3, 0x2c
    addi r5, r5, lbl_8073A4EC@l
    li r4, 0x0
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_801A3DFC_000015A8
    lwz r0, 0x38(r29)
    addi r5, r29, 0x8
    lwz r4, 0x4(r29)
    cntlzw r0, r0
    lfs f1, lbl_80882190
    srwi r6, r0, 5
    bl fn_801A4B00
    lis r4, lbl_8077F480@ha
    li r3, 0xe
    addi r4, r4, lbl_8077F480@l
    stw r4, 0x0(r30)
    li r0, 0x1
    lfs f0, lbl_80882188
    lwz r6, 0x4(r30)
    li r4, 0x0
    lfs f1, lbl_80882178
    li r5, 0x15d
    stw r3, 0x560(r6)
    li r6, 0x0
    lfs f2, lbl_80882194
    li r7, 0x0
    lwz r3, 0x4(r30)
    li r8, 0x1
    stw r0, 0x3fc(r3)
    addi r27, r3, 0xb0
    mr r3, r27
    stfs f0, 0x24c(r27)
    bl fn_80097C08
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    bne lbl_fn_801A3DFC_0000154C
    lfs f4, 0x10(r30)
    lfs f0, 0x1c(r30)
    lfs f3, 0x8(r30)
    fsubs f6, f4, f0
    lfs f0, 0x14(r30)
    lfs f4, 0xc(r30)
    fsubs f5, f3, f0
    lfs f3, 0x18(r30)
    fmuls f0, f6, f6
    fsubs f3, f4, f3
    stfs f5, 0x70(r1)
    fmadds f1, f5, f5, f0
    stfs f3, 0x74(r1)
    stfs f6, 0x78(r1)
    bl fn_8068B100
    frsp f3, f1
    lfs f0, lbl_80882190
    lfs f4, lbl_80882188
    fdivs f0, f3, f0
    fcmpo cr0, f4, f0
    bge lbl_fn_801A3DFC_000014F4
    b lbl_fn_801A3DFC_0000153C
lbl_fn_801A3DFC_000014F4:
    lfs f4, 0x10(r30)
    lfs f0, 0x1c(r30)
    lfs f3, 0x8(r30)
    fsubs f6, f4, f0
    lfs f0, 0x14(r30)
    lfs f4, 0xc(r30)
    fsubs f5, f3, f0
    lfs f3, 0x18(r30)
    fmuls f0, f6, f6
    fsubs f3, f4, f3
    stfs f5, 0x7c(r1)
    fmadds f1, f5, f5, f0
    stfs f3, 0x80(r1)
    stfs f6, 0x84(r1)
    bl fn_8068B100
    frsp f3, f1
    lfs f0, lbl_80882190
    fdivs f4, f3, f0
lbl_fn_801A3DFC_0000153C:
    lfs f3, lbl_808821B8
    lfs f0, 0x18(r30)
    fmadds f0, f3, f4, f0
    stfs f0, 0x18(r30)
lbl_fn_801A3DFC_0000154C:
    lwz r3, 0x4(r30)
    lfs f2, 0x1c(r30)
    psq_l f1, 0x14(r30), 0, 0
    psq_st f1, 0x528(r3), 0, 0
    lfs f0, lbl_80882188
    stfs f2, 0x530(r3)
    stfs f0, 0x238(r27)
    lwz r0, lbl_8087F498
    cmpwi r0, 0x0
    beq lbl_fn_801A3DFC_000015A8
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    subf. r0, r4, r0
    bne lbl_fn_801A3DFC_000015A8
    lwz r3, lbl_8087F498
    li r5, 0x20
    lwz r4, 0x4(r30)
    li r6, 0x0
    lfs f1, lbl_80882188
    lfs f2, lbl_8088218C
    bl fn_803EA77C
lbl_fn_801A3DFC_000015A8:
    addi r3, r31, 0x0
    lwz r5, 0x0(r31)
    lwz r4, 0x4(r3)
    li r0, 0x0
    lwz r3, 0x8(r3)
    lwz r6, 0x4(r29)
    stw r6, 0x20(r1)
    stw r0, 0x0(r28)
    lbz r0, lbl_8087F0DA
    stw r30, 0x24(r1)
    extsb. r0, r0
    stw r5, 0x94(r1)
    stw r4, 0x98(r1)
    stw r3, 0x9c(r1)
    stw r5, 0x88(r1)
    stw r4, 0x8c(r1)
    stw r3, 0x90(r1)
    stw r5, 0x17c(r1)
    stw r4, 0x180(r1)
    stw r3, 0x184(r1)
    stw r6, 0x188(r1)
    stw r30, 0x18c(r1)
    bne lbl_fn_801A3DFC_0000162C
    lis r6, lbl_807C7C08@ha
    lis r4, fn_801A49B4@ha
    lis r3, fn_801A49E4@ha
    li r0, 0x1
    addi r3, r3, fn_801A49E4@l
    addi r5, r6, lbl_807C7C08@l
    addi r4, r4, fn_801A49B4@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C7C08@l(r6)
    stb r0, lbl_8087F0DA
lbl_fn_801A3DFC_0000162C:
    lwz r7, 0x17c(r1)
    addi r3, r1, 0x12c
    lwz r6, 0x180(r1)
    lwz r5, 0x184(r1)
    lwz r4, 0x188(r1)
    lwz r0, 0x18c(r1)
    stw r7, 0x12c(r1)
    stw r6, 0x130(r1)
    stw r5, 0x134(r1)
    stw r4, 0x138(r1)
    stw r0, 0x13c(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_801A3DFC_00001700
    lwz r7, 0x12c(r1)
    li r3, 0x14
    lwz r6, 0x130(r1)
    lwz r5, 0x134(r1)
    lwz r4, 0x138(r1)
    lwz r0, 0x13c(r1)
    stw r7, 0x118(r1)
    stw r6, 0x11c(r1)
    stw r5, 0x120(r1)
    stw r4, 0x124(r1)
    stw r0, 0x128(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_fn_801A3DFC_000016C4
    lis r3, __files@ha
    lis r4, lbl_8077F634@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077F634@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801A3DFC_000016C4:
    cmpwi r29, 0x0
    beq lbl_fn_801A3DFC_000016F4
    lwz r0, 0x118(r1)
    stw r0, 0x0(r29)
    lwz r0, 0x11c(r1)
    stw r0, 0x4(r29)
    lwz r0, 0x120(r1)
    stw r0, 0x8(r29)
    lwz r0, 0x124(r1)
    stw r0, 0xc(r29)
    lwz r0, 0x128(r1)
    stw r0, 0x10(r29)
lbl_fn_801A3DFC_000016F4:
    stw r29, 0x4(r28)
    li r0, 0x1
    b lbl_fn_801A3DFC_00001704
lbl_fn_801A3DFC_00001700:
    li r0, 0x0
lbl_fn_801A3DFC_00001704:
    cmpwi r0, 0x0
    beq lbl_fn_801A3DFC_0000171C
    lis r3, lbl_807C7C08@ha
    addi r3, r3, lbl_807C7C08@l
    stw r3, 0x0(r28)
    b lbl_fn_801A3DFC_00001CBC
lbl_fn_801A3DFC_0000171C:
    li r0, 0x0
    stw r0, 0x0(r28)
    b lbl_fn_801A3DFC_00001CBC
lbl_fn_801A3DFC_00001728:
    lwz r0, 0x4(r3)
    cmpwi r0, 0x1788
    beq lbl_fn_801A3DFC_0000173C
    cmpwi r0, 0x1791
    bne lbl_fn_801A3DFC_00001910
lbl_fn_801A3DFC_0000173C:
    lwz r0, 0xac(r3)
    rlwinm r3, r0, 0, 13, 13
    subis r0, r3, 0x4
    cmplwi r0, 0x0
    bne lbl_fn_801A3DFC_00001910
    lis r5, lbl_8073A4EC@ha
    li r3, 0x30
    addi r5, r5, lbl_8073A4EC@l
    li r4, 0x0
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_801A3DFC_00001790
    lwz r0, 0x38(r29)
    addi r5, r29, 0x8
    lwz r4, 0x4(r29)
    cntlzw r0, r0
    lfs f1, lbl_808821BC
    srwi r6, r0, 5
    bl fn_801A6750
lbl_fn_801A3DFC_00001790:
    addi r4, r31, 0xc
    lwz r6, 0xc(r31)
    lwz r5, 0x4(r4)
    li r0, 0x0
    lwz r4, 0x8(r4)
    lwz r7, 0x4(r29)
    stw r7, 0x18(r1)
    stw r0, 0x0(r28)
    lbz r0, lbl_8087F0D9
    stw r3, 0x1c(r1)
    extsb. r0, r0
    stw r6, 0x64(r1)
    stw r5, 0x68(r1)
    stw r4, 0x6c(r1)
    stw r6, 0x58(r1)
    stw r5, 0x5c(r1)
    stw r4, 0x60(r1)
    stw r6, 0x168(r1)
    stw r5, 0x16c(r1)
    stw r4, 0x170(r1)
    stw r7, 0x174(r1)
    stw r3, 0x178(r1)
    bne lbl_fn_801A3DFC_00001814
    lis r6, lbl_807C7C00@ha
    lis r4, fn_801A4868@ha
    lis r3, fn_801A4898@ha
    li r0, 0x1
    addi r3, r3, fn_801A4898@l
    addi r5, r6, lbl_807C7C00@l
    addi r4, r4, fn_801A4868@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C7C00@l(r6)
    stb r0, lbl_8087F0D9
lbl_fn_801A3DFC_00001814:
    lwz r7, 0x168(r1)
    addi r3, r1, 0x104
    lwz r6, 0x16c(r1)
    lwz r5, 0x170(r1)
    lwz r4, 0x174(r1)
    lwz r0, 0x178(r1)
    stw r7, 0x104(r1)
    stw r6, 0x108(r1)
    stw r5, 0x10c(r1)
    stw r4, 0x110(r1)
    stw r0, 0x114(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_801A3DFC_000018E8
    lwz r7, 0x104(r1)
    li r3, 0x14
    lwz r6, 0x108(r1)
    lwz r5, 0x10c(r1)
    lwz r4, 0x110(r1)
    lwz r0, 0x114(r1)
    stw r7, 0xf0(r1)
    stw r6, 0xf4(r1)
    stw r5, 0xf8(r1)
    stw r4, 0xfc(r1)
    stw r0, 0x100(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_fn_801A3DFC_000018AC
    lis r3, __files@ha
    lis r4, lbl_8077F650@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077F650@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801A3DFC_000018AC:
    cmpwi r29, 0x0
    beq lbl_fn_801A3DFC_000018DC
    lwz r0, 0xf0(r1)
    stw r0, 0x0(r29)
    lwz r0, 0xf4(r1)
    stw r0, 0x4(r29)
    lwz r0, 0xf8(r1)
    stw r0, 0x8(r29)
    lwz r0, 0xfc(r1)
    stw r0, 0xc(r29)
    lwz r0, 0x100(r1)
    stw r0, 0x10(r29)
lbl_fn_801A3DFC_000018DC:
    stw r29, 0x4(r28)
    li r0, 0x1
    b lbl_fn_801A3DFC_000018EC
lbl_fn_801A3DFC_000018E8:
    li r0, 0x0
lbl_fn_801A3DFC_000018EC:
    cmpwi r0, 0x0
    beq lbl_fn_801A3DFC_00001904
    lis r3, lbl_807C7C00@ha
    addi r3, r3, lbl_807C7C00@l
    stw r3, 0x0(r28)
    b lbl_fn_801A3DFC_00001CBC
lbl_fn_801A3DFC_00001904:
    li r0, 0x0
    stw r0, 0x0(r28)
    b lbl_fn_801A3DFC_00001CBC
lbl_fn_801A3DFC_00001910:
    lwz r3, 0x50(r4)
    subis r0, r3, 0xa
    cmplwi r0, 0xae61
    beq lbl_fn_801A3DFC_00001938
    cmplwi r0, 0xae62
    beq lbl_fn_801A3DFC_00001938
    subis r3, r3, 0xb
    addi r0, r3, 0x5193
    cmplwi r0, 0x1
    bgt lbl_fn_801A3DFC_00001AF8
lbl_fn_801A3DFC_00001938:
    lis r5, lbl_8073A4EC@ha
    li r3, 0x30
    addi r5, r5, lbl_8073A4EC@l
    li r4, 0x0
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_801A3DFC_00001978
    lwz r0, 0x38(r29)
    addi r5, r29, 0x8
    lwz r4, 0x4(r29)
    cntlzw r0, r0
    lfs f1, lbl_8088218C
    srwi r6, r0, 5
    bl fn_801A5E90
lbl_fn_801A3DFC_00001978:
    addi r4, r31, 0x18
    lwz r6, 0x18(r31)
    lwz r5, 0x4(r4)
    li r0, 0x0
    lwz r4, 0x8(r4)
    lwz r7, 0x4(r29)
    stw r7, 0x10(r1)
    stw r0, 0x0(r28)
    lbz r0, lbl_8087F0D8
    stw r3, 0x14(r1)
    extsb. r0, r0
    stw r6, 0x4c(r1)
    stw r5, 0x50(r1)
    stw r4, 0x54(r1)
    stw r6, 0x40(r1)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r6, 0x154(r1)
    stw r5, 0x158(r1)
    stw r4, 0x15c(r1)
    stw r7, 0x160(r1)
    stw r3, 0x164(r1)
    bne lbl_fn_801A3DFC_000019FC
    lis r6, lbl_807C7BF8@ha
    lis r4, fn_801A471C@ha
    lis r3, fn_801A474C@ha
    li r0, 0x1
    addi r3, r3, fn_801A474C@l
    addi r5, r6, lbl_807C7BF8@l
    addi r4, r4, fn_801A471C@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C7BF8@l(r6)
    stb r0, lbl_8087F0D8
lbl_fn_801A3DFC_000019FC:
    lwz r7, 0x154(r1)
    addi r3, r1, 0xdc
    lwz r6, 0x158(r1)
    lwz r5, 0x15c(r1)
    lwz r4, 0x160(r1)
    lwz r0, 0x164(r1)
    stw r7, 0xdc(r1)
    stw r6, 0xe0(r1)
    stw r5, 0xe4(r1)
    stw r4, 0xe8(r1)
    stw r0, 0xec(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_801A3DFC_00001AD0
    lwz r7, 0xdc(r1)
    li r3, 0x14
    lwz r6, 0xe0(r1)
    lwz r5, 0xe4(r1)
    lwz r4, 0xe8(r1)
    lwz r0, 0xec(r1)
    stw r7, 0xc8(r1)
    stw r6, 0xcc(r1)
    stw r5, 0xd0(r1)
    stw r4, 0xd4(r1)
    stw r0, 0xd8(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_fn_801A3DFC_00001A94
    lis r3, __files@ha
    lis r4, lbl_8077F66C@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077F66C@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801A3DFC_00001A94:
    cmpwi r29, 0x0
    beq lbl_fn_801A3DFC_00001AC4
    lwz r0, 0xc8(r1)
    stw r0, 0x0(r29)
    lwz r0, 0xcc(r1)
    stw r0, 0x4(r29)
    lwz r0, 0xd0(r1)
    stw r0, 0x8(r29)
    lwz r0, 0xd4(r1)
    stw r0, 0xc(r29)
    lwz r0, 0xd8(r1)
    stw r0, 0x10(r29)
lbl_fn_801A3DFC_00001AC4:
    stw r29, 0x4(r28)
    li r0, 0x1
    b lbl_fn_801A3DFC_00001AD4
lbl_fn_801A3DFC_00001AD0:
    li r0, 0x0
lbl_fn_801A3DFC_00001AD4:
    cmpwi r0, 0x0
    beq lbl_fn_801A3DFC_00001AEC
    lis r3, lbl_807C7BF8@ha
    addi r3, r3, lbl_807C7BF8@l
    stw r3, 0x0(r28)
    b lbl_fn_801A3DFC_00001CBC
lbl_fn_801A3DFC_00001AEC:
    li r0, 0x0
    stw r0, 0x0(r28)
    b lbl_fn_801A3DFC_00001CBC
lbl_fn_801A3DFC_00001AF8:
    lis r5, lbl_8073A4EC@ha
    li r3, 0x30
    addi r5, r5, lbl_8073A4EC@l
    li r4, 0x0
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_801A3DFC_00001B38
    lwz r0, 0x38(r29)
    addi r5, r29, 0x8
    lwz r4, 0x4(r29)
    cntlzw r0, r0
    lfs f1, lbl_808821BC
    srwi r6, r0, 5
    bl fn_801A5E90
lbl_fn_801A3DFC_00001B38:
    addi r4, r31, 0x24
    lwz r6, 0x24(r31)
    lwz r5, 0x4(r4)
    li r0, 0x0
    lwz r4, 0x8(r4)
    lwz r7, 0x4(r29)
    stw r7, 0x8(r1)
    stw r0, 0x0(r28)
    lbz r0, lbl_8087F0D8
    stw r3, 0xc(r1)
    extsb. r0, r0
    stw r6, 0x34(r1)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r6, 0x28(r1)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r6, 0x140(r1)
    stw r5, 0x144(r1)
    stw r4, 0x148(r1)
    stw r7, 0x14c(r1)
    stw r3, 0x150(r1)
    bne lbl_fn_801A3DFC_00001BBC
    lis r6, lbl_807C7BF8@ha
    lis r4, fn_801A471C@ha
    lis r3, fn_801A474C@ha
    li r0, 0x1
    addi r3, r3, fn_801A474C@l
    addi r5, r6, lbl_807C7BF8@l
    addi r4, r4, fn_801A471C@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C7BF8@l(r6)
    stb r0, lbl_8087F0D8
lbl_fn_801A3DFC_00001BBC:
    lwz r7, 0x140(r1)
    addi r3, r1, 0xb4
    lwz r6, 0x144(r1)
    lwz r5, 0x148(r1)
    lwz r4, 0x14c(r1)
    lwz r0, 0x150(r1)
    stw r7, 0xb4(r1)
    stw r6, 0xb8(r1)
    stw r5, 0xbc(r1)
    stw r4, 0xc0(r1)
    stw r0, 0xc4(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_801A3DFC_00001C90
    lwz r7, 0xb4(r1)
    li r3, 0x14
    lwz r6, 0xb8(r1)
    lwz r5, 0xbc(r1)
    lwz r4, 0xc0(r1)
    lwz r0, 0xc4(r1)
    stw r7, 0xa0(r1)
    stw r6, 0xa4(r1)
    stw r5, 0xa8(r1)
    stw r4, 0xac(r1)
    stw r0, 0xb0(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_fn_801A3DFC_00001C54
    lis r3, __files@ha
    lis r4, lbl_8077F66C@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077F66C@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801A3DFC_00001C54:
    cmpwi r29, 0x0
    beq lbl_fn_801A3DFC_00001C84
    lwz r0, 0xa0(r1)
    stw r0, 0x0(r29)
    lwz r0, 0xa4(r1)
    stw r0, 0x4(r29)
    lwz r0, 0xa8(r1)
    stw r0, 0x8(r29)
    lwz r0, 0xac(r1)
    stw r0, 0xc(r29)
    lwz r0, 0xb0(r1)
    stw r0, 0x10(r29)
lbl_fn_801A3DFC_00001C84:
    stw r29, 0x4(r28)
    li r0, 0x1
    b lbl_fn_801A3DFC_00001C94
lbl_fn_801A3DFC_00001C90:
    li r0, 0x0
lbl_fn_801A3DFC_00001C94:
    cmpwi r0, 0x0
    beq lbl_fn_801A3DFC_00001CAC
    lis r3, lbl_807C7BF8@ha
    addi r3, r3, lbl_807C7BF8@l
    stw r3, 0x0(r28)
    b lbl_fn_801A3DFC_00001CBC
lbl_fn_801A3DFC_00001CAC:
    li r0, 0x0
    stw r0, 0x0(r28)
    b lbl_fn_801A3DFC_00001CBC
lbl_fn_801A3DFC_00001CB8:
    bl fn_80192758
lbl_fn_801A3DFC_00001CBC:
    addi r11, r1, 0x1b0
    bl _restgpr_27
    lwz r0, 0x1b4(r1)
    mtlr r0
    addi r1, r1, 0x1b0
    blr
}
