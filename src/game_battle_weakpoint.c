#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __register_global_object(void);
extern void _restgpr_25(void);
extern void _savegpr_25(void);
extern void dtor_80084684(void);
extern void fn_8003EFB0(void);
extern void fn_8003F030(void);
extern void fn_80084320(void);
extern void fn_800971D4(void);
extern void fn_80097D7C(void);
extern void fn_800CB3A0(void);
extern void fn_800CB5C8(void);
extern void fn_800D246C(void);
extern void fn_800D3FA4(void);
extern void fn_800F8548(void);
extern void fn_800FAB80(void);
extern void fn_8016D3F8(void);
extern void fn_80170F20(void);
extern void fn_80174E04(void);
extern void fn_801750FC(void);
extern void fn_80219E6C(void);
extern void fn_80232B7C(void);
extern void fn_8023781C(void);
extern void fn_80239DAC(void);
extern void fn_8023A8B4(void);
extern void fn_803C1560(void);
extern void fn_803CD958(void);
extern void fn_803EC568(void);
extern void fn_803EC69C(void);
extern void fn_803EC91C(void);
extern void fn_803ED0D4(void);
extern void fn_803ED774(void);
extern void fn_803FD328(void);
extern void fn_804093B4(void);
extern void fn_80473E8C(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9990(void);
extern void fn_8068AEA8(void);
extern void fn_806A8E40(void);
extern void fn_806B0E30(void);
extern void fn_806B1250(void);

/* External data declarations */
extern u8 jumptable_8078CFC0[];
extern u8 lbl_807525B4[];
extern u8 lbl_807525B8[];
extern u8 lbl_807525D4[];
extern u8 lbl_8078CF28[];
extern u8 lbl_8078CFE8[];
extern u8 lbl_807C6BB8[];
extern u8 lbl_807C7030[];
extern u8 lbl_807C8750[];
extern u8 lbl_807C8760[];

/* Small data declarations */
extern u32 lbl_8087EE74;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F628;
extern u32 lbl_8087F890;
extern u32 lbl_8087F8A0;
extern u32 lbl_80886038;
extern u32 lbl_8088603C;
extern u32 lbl_80886044;
extern u32 lbl_8088605C;
extern u32 lbl_80886070;
extern u32 lbl_80886074;
extern u32 lbl_80886078;
extern u32 lbl_8088607C;
extern u32 lbl_80886080;
extern u32 lbl_80886084;
extern u32 lbl_80886088;
extern u32 lbl_80886090;
extern u32 lbl_80886094;
extern u32 lbl_80886098;
extern u32 lbl_8088609C;
extern u32 lbl_808860A0;
extern u32 lbl_808860A4;
extern u32 lbl_808860A8;
extern u32 lbl_808860AC;
extern u32 lbl_808860B0;
extern u32 lbl_808860BC;

/* Function declarations */
void fn_803FB788(void);
void fn_803FB7C8(void);
void fn_803FB800(void);
void fn_803FB830(void);
void fn_803FB870(void);
void fn_803FBC34(void);
void fn_803FBD50(void);
void fn_803FBE74(void);
void fn_803FBEE4(void);
void fn_803FBEEC(void);
void fn_803FBFA8(void);
void fn_803FC0E0(void);
void fn_803FC134(void);
void fn_803FC4C0(void);
void fn_803FC53C(void);
void fn_803FC540(void);
void fn_803FC65C(void);
void fn_803FC6BC(void);
void fn_803FC6E8(void);
void fn_803FC824(void);
void fn_803FC870(void);
void fn_803FC880(void);
void fn_803FC8D8(void);
void fn_803FC994(void);
void fn_803FC9DC(void);
void fn_803FCAB0(void);
void fn_803FD0A0(void);

asm void fn_803FB788(void)
{
    nofralloc
    lwz r5, 0x54(r3)
    li r4, 0x0
    li r0, 0x0
    cmpwi r5, 0x3
    blt lbl_fn_803FB788_00000020
    cmpwi r5, 0x5
    bgt lbl_fn_803FB788_00000020
    li r0, 0x1
lbl_fn_803FB788_00000020:
    cmpwi r0, 0x0
    beq lbl_fn_803FB788_00000038
    lwz r0, 0x168(r3)
    cmpwi r0, 0x0
    blt lbl_fn_803FB788_00000038
    li r4, 0x1
lbl_fn_803FB788_00000038:
    mr r3, r4
    blr
}

asm void fn_803FB7C8(void)
{
    nofralloc
    lwz r4, 0x4c4(r3)
    li r5, 0x0
    lwz r0, 0x7c(r4)
    cmpwi r0, 0x0
    beq lbl_fn_803FB7C8_00000070
    lwz r0, 0x4c8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_803FB7C8_00000070
    lwz r0, 0x9c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803FB7C8_00000070
    li r5, 0x1
lbl_fn_803FB7C8_00000070:
    mr r3, r5
    blr
}

asm void fn_803FB800(void)
{
    nofralloc
    cmpwi r4, 0x0
    mr r5, r3
    beqlr
    lwz r0, 0x1208(r4)
    cmpwi r0, 0x0
    beq lbl_fn_803FB800_00000098
    mr r3, r4
    b fn_801750FC
lbl_fn_803FB800_00000098:
    mr r3, r4
    mr r4, r5
    b fn_80174E04
    blr
}

asm void fn_803FB830(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r3, 0x4f8(r3)
    cmpwi r3, 0x0
    ble lbl_fn_803FB830_000000D4
    bl fn_80219E6C
    cmpwi r3, 0x0
    beq lbl_fn_803FB830_000000D4
    lfs f1, 0x58(r3)
    b lbl_fn_803FB830_000000D8
lbl_fn_803FB830_000000D4:
    lfs f1, lbl_80886044
lbl_fn_803FB830_000000D8:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803FB870(void)
{
    nofralloc
    stwu r1, -0xf0(r1)
    mflr r0
    stw r0, 0xf4(r1)
    addi r11, r1, 0xf0
    bl _savegpr_25
    lwz r0, 0x4f8(r3)
    mr r30, r3
    mr r31, r4
    mr r25, r5
    cmpwi r0, 0x0
    mr r26, r6
    ble lbl_fn_803FB870_000002D0
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x0
    li r6, 0x0
    bl fn_80239DAC
    li r3, 0x0
    li r4, 0x0
    bl fn_80232B7C
    lfs f1, lbl_8088603C
    li r28, -0x1
    lfs f0, lbl_80886038
    li r29, 0x1
    stfs f0, 0x44(r1)
    mr r7, r31
    lwz r3, lbl_8087F3C0
    addi r4, r30, 0x500
    stfs f0, 0x48(r1)
    addi r8, r1, 0x44
    addi r9, r1, 0x10
    li r5, 0x0
    stfs f0, 0x4c(r1)
    li r6, 0x0
    li r10, -0x1
    stfs f1, 0x10(r1)
    stfs f1, 0x14(r1)
    stfs f1, 0x18(r1)
    stfs f1, 0x1c(r1)
    stw r28, 0x8(r1)
    stw r29, 0xc(r1)
    bl fn_8023A8B4
    lwz r3, 0x4f8(r30)
    bl fn_80219E6C
    lwz r0, 0x4f0(r30)
    mr r27, r3
    cmpwi r0, 0x0
    beq lbl_fn_803FB870_00000288
    lbz r0, 0x2(r3)
    cmpwi r0, 0x3
    bne lbl_fn_803FB870_0000021C
    cmpwi r25, 0x0
    beq lbl_fn_803FB870_00000288
    lwz r0, 0xcc(r1)
    li r9, 0x0
    lis r7, lbl_807C7030@ha
    stw r9, 0xb0(r1)
    clrlwi r0, r0, 4
    addi r6, r1, 0x38
    stw r9, 0xb4(r1)
    mr r4, r27
    mr r5, r25
    addi r3, r1, 0xb0
    stw r9, 0xb8(r1)
    addi r7, r7, lbl_807C7030@l
    li r8, 0x0
    stw r9, 0xbc(r1)
    stw r9, 0xc0(r1)
    stw r28, 0xc4(r1)
    stw r0, 0xcc(r1)
    stw r28, 0xc8(r1)
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x8(r31)
    stfs f2, 0x40(r1)
    psq_st f1, 0x0(r6), 0, 0
    bl fn_8003F030
    b lbl_fn_803FB870_00000288
lbl_fn_803FB870_0000021C:
    lwz r3, lbl_8087F048
    lfs f0, lbl_80886038
    addis r3, r3, 0x4
    stw r29, -0x1c64(r3)
    lwz r29, lbl_8087F048
    stfs f0, 0x2c(r1)
    mr r3, r29
    stfs f0, 0x30(r1)
    stfs f0, 0x34(r1)
    bl fn_800F8548
    stw r28, 0x8(r1)
    mr r6, r3
    lfs f1, lbl_80886038
    mr r3, r29
    stw r28, 0xc(r1)
    mr r4, r25
    lfs f2, lbl_8088603C
    mr r5, r27
    mr r7, r31
    mr r9, r26
    addi r8, r1, 0x2c
    li r10, 0x1e
    bl fn_800FAB80
    lwz r3, lbl_8087F048
    li r0, 0x0
    addis r3, r3, 0x4
    stw r0, -0x1c64(r3)
lbl_fn_803FB870_00000288:
    lfs f0, lbl_80886038
    li r0, 0x0
    li r3, 0x8
    stw r3, 0x90(r1)
    mr r3, r30
    addi r4, r1, 0x90
    stw r0, 0x94(r1)
    stw r0, 0x98(r1)
    stw r0, 0x9c(r1)
    stw r0, 0xa0(r1)
    stfs f0, 0xa4(r1)
    stfs f0, 0xa8(r1)
    stfs f0, 0xac(r1)
    lwz r12, 0x0(r30)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    b lbl_fn_803FB870_00000310
lbl_fn_803FB870_000002D0:
    lfs f0, lbl_80886038
    li r0, 0x0
    li r4, 0x3
    stw r4, 0x70(r1)
    addi r4, r1, 0x70
    stw r0, 0x74(r1)
    stw r0, 0x78(r1)
    stw r0, 0x7c(r1)
    stw r0, 0x80(r1)
    stfs f0, 0x84(r1)
    stfs f0, 0x88(r1)
    stfs f0, 0x8c(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
lbl_fn_803FB870_00000310:
    lfs f0, lbl_80886038
    addi r3, r30, 0x518
    stfs f0, 0x78(r30)
    li r4, 0xa
    li r5, 0x0
    stfs f0, 0x80(r30)
    bl fn_800CB5C8
    lwz r4, 0x51c(r30)
    li r0, 0xff
    stb r0, 0x520(r30)
    cmpwi r4, 0x0
    beq lbl_fn_803FB870_00000494
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_803FB870_00000494
    lwz r0, 0x38(r4)
    addi r3, r1, 0x20
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lfs f5, 0x4(r31)
    lfs f4, 0x4e8(r30)
    lfs f3, 0x0(r31)
    fsubs f5, f5, f4
    lfs f0, 0x4e4(r30)
    lfs f4, 0x8(r31)
    fsubs f3, f3, f0
    lfs f0, 0x4ec(r30)
    stfs f5, 0x24(r1)
    fsubs f0, f4, f0
    lwz r4, 0x51c(r30)
    stfs f3, 0x20(r1)
    psq_l f1, 0x0(r3), 0, 0
    fmr f2, f0
    psq_st f1, 0x6c(r4), 0, 0
    stfs f2, 0x74(r4)
    lwz r3, 0x51c(r30)
    lfs f2, 0x80(r30)
    psq_l f1, 0x78(r30), 0, 0
    psq_st f1, 0x78(r3), 0, 0
    stfs f2, 0x80(r3)
    lbz r0, lbl_8087EE74
    stfs f0, 0x28(r1)
    extsb. r0, r0
    bne lbl_fn_803FB870_000003F8
    lis r3, lbl_807C6BB8@ha
    li r0, 0x0
    stwu r0, lbl_807C6BB8@l(r3)
    lis r4, fn_8003EFB0@ha
    li r29, 0x1
    lis r5, lbl_807C8750@ha
    stw r0, 0x4(r3)
    addi r4, r4, fn_8003EFB0@l
    addi r5, r5, lbl_807C8750@l
    stw r0, 0x8(r3)
    stw r29, 0xc(r3)
    bl __register_global_object
    stb r29, lbl_8087EE74
lbl_fn_803FB870_000003F8:
    lis r31, lbl_807C6BB8@ha
    li r29, 0x0
    lfs f0, lbl_80886038
    addi r31, r31, lbl_807C6BB8@l
    li r0, 0x3
    stw r29, 0xc(r31)
    addi r4, r1, 0x50
    stw r0, 0x50(r1)
    stw r29, 0x54(r1)
    stw r29, 0x58(r1)
    stw r29, 0x5c(r1)
    stw r29, 0x60(r1)
    stfs f0, 0x64(r1)
    stfs f0, 0x68(r1)
    stfs f0, 0x6c(r1)
    lwz r3, 0x51c(r30)
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lbz r0, lbl_8087EE74
    extsb. r0, r0
    bne lbl_fn_803FB870_00000484
    li r30, 0x1
    lis r4, fn_8003EFB0@ha
    lis r5, lbl_807C8750@ha
    stw r29, 0x0(r31)
    mr r3, r31
    addi r4, r4, fn_8003EFB0@l
    stw r29, 0x4(r31)
    addi r5, r5, lbl_807C8750@l
    stw r29, 0x8(r31)
    stw r30, 0xc(r31)
    bl __register_global_object
    stb r30, lbl_8087EE74
lbl_fn_803FB870_00000484:
    lis r3, lbl_807C6BB8@ha
    li r0, 0x1
    addi r3, r3, lbl_807C6BB8@l
    stw r0, 0xc(r3)
lbl_fn_803FB870_00000494:
    addi r11, r1, 0xf0
    bl _restgpr_25
    lwz r0, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0xf0
    blr
}

asm void fn_803FBC34(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    mr r31, r4
    stw r30, 0x58(r1)
    mr r30, r3
    lwz r0, 0x4f8(r3)
    cmpwi r0, 0x0
    ble lbl_fn_803FBC34_000005A0
    lfs f0, lbl_80886038
    li r5, 0x0
    stw r5, 0x30(r1)
    li r0, 0x7
    addi r4, r1, 0x8
    stw r5, 0x34(r1)
    stw r5, 0x38(r1)
    stw r5, 0x3c(r1)
    stw r5, 0x40(r1)
    stfs f0, 0x44(r1)
    stfs f0, 0x48(r1)
    stfs f0, 0x4c(r1)
    lwz r5, 0x4c8(r3)
    stw r5, 0x40(r1)
    stw r0, 0x30(r1)
    psq_l f1, 0x4e4(r3), 0, 0
    lfs f2, 0x4ec(r3)
    mr r3, r4
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r4), 0, 0
    bl fn_805F98D0
    lfs f5, 0x10(r1)
    addi r6, r1, 0x20
    lfs f4, lbl_8088605C
    addi r5, r1, 0x44
    lfs f0, 0xc(r1)
    mr r3, r30
    fmuls f5, f5, f4
    lfs f3, 0x8(r1)
    fmuls f6, f0, f4
    lfs f0, 0x8(r31)
    fmuls f4, f3, f4
    lfs f3, 0x4(r31)
    fsubs f2, f0, f5
    lfs f0, 0x0(r31)
    fsubs f3, f3, f6
    stfs f4, 0x14(r1)
    fsubs f0, f0, f4
    addi r4, r1, 0x30
    stfs f3, 0x24(r1)
    stfs f0, 0x20(r1)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x4c(r1)
    lwz r12, 0x0(r30)
    stfs f6, 0x18(r1)
    lwz r12, 0x40(r12)
    stfs f5, 0x1c(r1)
    stfs f2, 0x28(r1)
    mtctr r12
    bctrl
lbl_fn_803FBC34_000005A0:
    addi r3, r30, 0x518
    li r4, 0xa
    li r5, 0x0
    bl fn_800CB5C8
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_803FBD50(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r6
    stw r30, 0x28(r1)
    mr r30, r5
    stw r29, 0x24(r1)
    mr r29, r4
    stw r28, 0x20(r1)
    mr r28, r3
    lwz r12, 0x0(r3)
    lwz r12, 0x60(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_803FBD50_000006C8
    cmpwi r31, 0x0
    bne lbl_fn_803FBD50_000006C8
    lwz r0, 0x54(r28)
    cmpwi r0, 0x1
    beq lbl_fn_803FBD50_00000630
    cmpwi r0, 0x7
    beq lbl_fn_803FBD50_00000630
    cmpwi r0, 0x4
    bne lbl_fn_803FBD50_000006C8
lbl_fn_803FBD50_00000630:
    lfs f3, 0x74(r28)
    addi r3, r1, 0x14
    lfs f0, 0x8(r29)
    lfs f5, 0x70(r28)
    fsubs f6, f3, f0
    lfs f4, 0x4(r29)
    lfs f3, 0x6c(r28)
    lfs f0, 0x0(r29)
    fsubs f4, f5, f4
    stfs f6, 0x1c(r1)
    fsubs f0, f3, f0
    stfs f4, 0x18(r1)
    stfs f0, 0x14(r1)
    bl fn_805F9920
    lfs f0, lbl_80886070
    fcmpo cr0, f1, f0
    ble lbl_fn_803FBD50_0000067C
    li r3, 0x0
    b lbl_fn_803FBD50_000006CC
lbl_fn_803FBD50_0000067C:
    addi r3, r1, 0x14
    addi r31, r1, 0x8
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r31
    lfs f2, 0x1c(r1)
    mr r4, r31
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x10(r1)
    bl fn_805F98D0
    mr r3, r31
    mr r4, r30
    bl fn_805F9990
    lfs f0, lbl_80886074
    fcmpo cr0, f1, f0
    mfcr r0
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi r3, r0, 5
    b lbl_fn_803FBD50_000006CC
lbl_fn_803FBD50_000006C8:
    li r3, 0x0
lbl_fn_803FBD50_000006CC:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_803FBE74(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lfs f0, lbl_80886038
    cmpwi r4, 0x1
    stw r0, 0x34(r1)
    li r0, 0x0
    stw r4, 0x8(r1)
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    beq lbl_fn_803FBE74_00000738
    cmpwi r4, 0x8
    beq lbl_fn_803FBE74_00000738
    li r0, 0x1
    stw r0, 0x8(r1)
lbl_fn_803FBE74_00000738:
    lwz r12, 0x0(r3)
    addi r4, r1, 0x8
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_803FBEE4(void)
{
    nofralloc
    addi r3, r3, 0xf4
    blr
}

asm void fn_803FBEEC(void)
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
    beq lbl_fn_803FBEEC_00000800
    li r4, -0x1
    addi r3, r3, 0x518
    bl fn_800CB3A0
    addic. r31, r29, 0x50c
    beq lbl_fn_803FBEEC_000007B8
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_803FBEEC_000007B8
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_803FBEEC_000007B8:
    addic. r31, r29, 0x500
    beq lbl_fn_803FBEEC_000007D8
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_803FBEEC_000007D8
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_803FBEEC_000007D8:
    addi r3, r29, 0xf4
    li r4, -0x1
    bl fn_800971D4
    mr r3, r29
    li r4, 0x0
    bl fn_803EC69C
    cmpwi r30, 0x0
    ble lbl_fn_803FBEEC_00000800
    mr r3, r29
    bl dtor_80084684
lbl_fn_803FBEEC_00000800:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803FBFA8(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    mr r29, r4
    beq lbl_fn_803FBFA8_00000938
    lis r5, lbl_807525B4@ha
    li r3, 0x100
    addi r5, r5, lbl_807525B4@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_803FBFA8_00000930
    lwz r5, 0x18(r29)
    mr r4, r31
    lwz r6, 0x1c(r29)
    bl fn_803EC568
    lis r3, lbl_8078CF28@ha
    li r31, 0x0
    addi r3, r3, lbl_8078CF28@l
    stw r3, 0x0(r30)
    mr r3, r30
    li r4, 0x4650
    stw r31, 0xf4(r30)
    stw r29, 0xf8(r30)
    stw r31, 0xfc(r30)
    stw r31, 0x54(r30)
    lwz r5, 0x4c(r30)
    addi r5, r5, 0x1f40
    bl fn_804093B4
    stw r3, 0xf4(r30)
    li r4, 0x1
    bl fn_800D246C
    lwz r3, 0xf8(r30)
    addi r4, r1, 0x8
    lfs f0, lbl_80886078
    li r5, 0x0
    lwz r6, 0xf4(r30)
    lfs f2, 0xc(r3)
    psq_l f1, 0x4(r3), 0, 0
    psq_st f1, 0x6c(r6), 0, 0
    stfs f2, 0x74(r6)
    fmr f2, f0
    lwz r3, 0xf8(r30)
    stfs f0, 0x8(r1)
    lfs f3, 0x14(r3)
    stfs f3, 0xc(r1)
    lwz r3, 0xf4(r30)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x78(r3), 0, 0
    stfs f2, 0x80(r3)
    lwz r3, 0xf4(r30)
    lwz r4, 0xf8(r30)
    lwz r12, 0x0(r3)
    stfs f0, 0x10(r1)
    lwz r12, 0x68(r12)
    lwz r4, 0x20(r4)
    mtctr r12
    bctrl
    lwz r3, 0xf4(r30)
    stw r31, 0x180(r3)
lbl_fn_803FBFA8_00000930:
    mr r3, r30
    b lbl_fn_803FBFA8_0000093C
lbl_fn_803FBFA8_00000938:
    li r3, 0x0
lbl_fn_803FBFA8_0000093C:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_803FC0E0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_800D3FA4
    cmpwi r3, 0x0
    beq lbl_fn_803FC0E0_00000994
    li r0, 0x2
    stw r0, 0x54(r31)
    lwz r3, 0xf4(r31)
    li r4, 0x0
    bl fn_800D246C
    li r3, 0x1
    b lbl_fn_803FC0E0_00000998
lbl_fn_803FC0E0_00000994:
    li r3, 0x0
lbl_fn_803FC0E0_00000998:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803FC134(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    stw r31, 0xbc(r1)
    stw r30, 0xb8(r1)
    mr r30, r3
    stw r29, 0xb4(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_803FC134_00000A04
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r30
    li r5, 0x1
    bl fn_803ED0D4
lbl_fn_803FC134_00000A04:
    lwz r4, lbl_8087F628
    li r31, 0x1
    cmpwi r4, 0x0
    beq lbl_fn_803FC134_00000AAC
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_803FC134_00000A44
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_803FC134_00000A38
    li r29, 0x0
    b lbl_fn_803FC134_00000A60
lbl_fn_803FC134_00000A38:
    bl fn_806B0E30
    clrlwi r29, r3, 24
    b lbl_fn_803FC134_00000A60
lbl_fn_803FC134_00000A44:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_803FC134_00000A58
    li r3, 0x0
    b lbl_fn_803FC134_00000A5C
lbl_fn_803FC134_00000A58:
    bl fn_806A8E40
lbl_fn_803FC134_00000A5C:
    clrlwi r29, r3, 24
lbl_fn_803FC134_00000A60:
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_803FC134_00000A94
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_803FC134_00000A88
    li r0, 0x0
    b lbl_fn_803FC134_00000A98
lbl_fn_803FC134_00000A88:
    bl fn_806B1250
    clrlwi r0, r3, 24
    b lbl_fn_803FC134_00000A98
lbl_fn_803FC134_00000A94:
    li r0, 0x0
lbl_fn_803FC134_00000A98:
    clrlwi r3, r29, 24
    clrlwi r0, r0, 24
    cmplw r3, r0
    beq lbl_fn_803FC134_00000AAC
    li r31, 0x0
lbl_fn_803FC134_00000AAC:
    lwz r0, 0x54(r30)
    cmpwi r0, 0x2
    bne lbl_fn_803FC134_00000C4C
    lwz r3, 0xf8(r30)
    lwz r0, 0x7c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803FC134_00000BE0
    lwz r3, 0xf4(r30)
    lwz r0, 0x190(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803FC134_00000B00
    lwz r12, 0x0(r3)
    lwz r12, 0x60(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_803FC134_00000B00
    li r3, 0x6
    li r0, 0x0
    stw r3, 0xe8(r30)
    stw r0, 0xec(r30)
lbl_fn_803FC134_00000B00:
    cmpwi r31, 0x0
    beq lbl_fn_803FC134_00000D1C
    lwz r3, 0xf4(r30)
    lwz r12, 0x0(r3)
    lwz r12, 0x60(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_803FC134_00000B88
    lwz r3, 0xf4(r30)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_803FC134_00000B44
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
lbl_fn_803FC134_00000B44:
    lfs f0, lbl_80886078
    li r0, 0x0
    li r3, 0x3
    stw r3, 0x88(r1)
    addi r4, r1, 0x88
    stw r0, 0x8c(r1)
    stw r0, 0x90(r1)
    stw r0, 0x94(r1)
    stw r0, 0x98(r1)
    stfs f0, 0x9c(r1)
    stfs f0, 0xa0(r1)
    stfs f0, 0xa4(r1)
    lwz r3, 0xf4(r30)
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
lbl_fn_803FC134_00000B88:
    lwz r3, 0xf4(r30)
    lwz r0, 0x54(r3)
    cmpwi r0, 0x5
    bne lbl_fn_803FC134_00000D1C
    lfs f0, lbl_80886078
    li r0, 0x0
    li r3, 0x3
    stw r3, 0x68(r1)
    mr r3, r30
    addi r4, r1, 0x68
    stw r0, 0x6c(r1)
    stw r0, 0x70(r1)
    stw r0, 0x74(r1)
    stw r0, 0x78(r1)
    stfs f0, 0x7c(r1)
    stfs f0, 0x80(r1)
    stfs f0, 0x84(r1)
    lwz r12, 0x0(r30)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    b lbl_fn_803FC134_00000D1C
lbl_fn_803FC134_00000BE0:
    cmpwi r31, 0x0
    beq lbl_fn_803FC134_00000D1C
    lwz r3, 0xf4(r30)
    lwz r12, 0x0(r3)
    lwz r12, 0x60(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_803FC134_00000D1C
    lfs f0, lbl_80886078
    li r0, 0x0
    li r3, 0x6
    stw r3, 0x48(r1)
    addi r4, r1, 0x48
    stw r0, 0x4c(r1)
    stw r0, 0x50(r1)
    stw r0, 0x54(r1)
    stw r0, 0x58(r1)
    stfs f0, 0x5c(r1)
    stfs f0, 0x60(r1)
    stfs f0, 0x64(r1)
    lwz r3, 0xf4(r30)
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    b lbl_fn_803FC134_00000D1C
lbl_fn_803FC134_00000C4C:
    cmpwi r31, 0x0
    beq lbl_fn_803FC134_00000D1C
    lwz r3, 0xf4(r30)
    lwz r12, 0x0(r3)
    lwz r12, 0x60(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_803FC134_00000CC0
    lwz r3, 0xf4(r30)
    lwz r0, 0x54(r3)
    cmpwi r0, 0x5
    bge lbl_fn_803FC134_00000CC0
    lfs f0, lbl_80886078
    li r0, 0x0
    li r4, 0x6
    stw r4, 0x28(r1)
    addi r4, r1, 0x28
    stw r0, 0x2c(r1)
    stw r0, 0x30(r1)
    stw r0, 0x34(r1)
    stw r0, 0x38(r1)
    stfs f0, 0x3c(r1)
    stfs f0, 0x40(r1)
    stfs f0, 0x44(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
lbl_fn_803FC134_00000CC0:
    lwz r3, 0xfc(r30)
    cmpwi r3, 0x0
    ble lbl_fn_803FC134_00000D1C
    subic. r0, r3, 0x1
    stw r0, 0xfc(r30)
    bgt lbl_fn_803FC134_00000D1C
    lfs f0, lbl_80886078
    li r0, 0x0
    li r3, 0x2
    stw r3, 0x8(r1)
    mr r3, r30
    addi r4, r1, 0x8
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    lwz r12, 0x0(r30)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
lbl_fn_803FC134_00000D1C:
    lwz r0, 0xc4(r1)
    lwz r31, 0xbc(r1)
    lwz r30, 0xb8(r1)
    lwz r29, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

asm void fn_803FC4C0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r12, 0x0(r3)
    lwz r12, 0x60(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_803FC4C0_00000DA0
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_803FC4C0_00000DA0
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    bl fn_803ED774
lbl_fn_803FC4C0_00000DA0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803FC53C(void)
{
    nofralloc
    blr
}

asm void fn_803FC540(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r30, r3
    mr r31, r4
    bne lbl_fn_803FC540_00000DE0
    li r3, 0x0
    b lbl_fn_803FC540_00000EC0
lbl_fn_803FC540_00000DE0:
    lwz r4, 0x0(r4)
    subi r0, r4, 0x1
    cmplwi r0, 0x1
    ble lbl_fn_803FC540_00000DFC
    cmpwi r4, 0x3
    beq lbl_fn_803FC540_00000E04
    b lbl_fn_803FC540_00000E14
lbl_fn_803FC540_00000DFC:
    stw r4, 0x54(r3)
    b lbl_fn_803FC540_00000E14
lbl_fn_803FC540_00000E04:
    stw r4, 0x54(r3)
    lwz r4, 0xf8(r3)
    lwz r0, 0x28(r4)
    stw r0, 0xfc(r3)
lbl_fn_803FC540_00000E14:
    lbz r0, lbl_8087EE74
    extsb. r0, r0
    bne lbl_fn_803FC540_00000E54
    lis r3, lbl_807C6BB8@ha
    li r0, 0x0
    stwu r0, lbl_807C6BB8@l(r3)
    lis r4, fn_8003EFB0@ha
    li r29, 0x1
    lis r5, lbl_807C8760@ha
    stw r0, 0x4(r3)
    addi r4, r4, fn_8003EFB0@l
    addi r5, r5, lbl_807C8760@l
    stw r0, 0x8(r3)
    stw r29, 0xc(r3)
    bl __register_global_object
    stb r29, lbl_8087EE74
lbl_fn_803FC540_00000E54:
    lis r28, lbl_807C6BB8@ha
    addi r28, r28, lbl_807C6BB8@l
    lwz r0, 0xc(r28)
    cmpwi r0, 0x0
    beq lbl_fn_803FC540_00000EBC
    li r27, 0x0
    li r29, 0x0
    b lbl_fn_803FC540_00000EB0
lbl_fn_803FC540_00000E74:
    lwz r0, 0x0(r28)
    add r3, r0, r29
    lwzx r0, r29, r0
    cmpwi r0, -0x1
    beq lbl_fn_803FC540_00000E90
    cmpwi r0, 0xb
    bne lbl_fn_803FC540_00000EA8
lbl_fn_803FC540_00000E90:
    lwz r12, 0x4(r3)
    mr r4, r30
    mr r5, r31
    li r3, 0xb
    mtctr r12
    bctrl
lbl_fn_803FC540_00000EA8:
    addi r27, r27, 0x1
    addi r29, r29, 0x8
lbl_fn_803FC540_00000EB0:
    lwz r0, 0x4(r28)
    cmpw r27, r0
    blt lbl_fn_803FC540_00000E74
lbl_fn_803FC540_00000EBC:
    lwz r3, 0x0(r31)
lbl_fn_803FC540_00000EC0:
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803FC65C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0xf4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803FC65C_00000F14
    mr r3, r0
    lwz r4, 0xf8(r31)
    lwz r12, 0x0(r3)
    li r5, 0x0
    lwz r4, 0x20(r4)
    lwz r12, 0x68(r12)
    mtctr r12
    bctrl
lbl_fn_803FC65C_00000F14:
    lwz r3, 0xf8(r31)
    lwz r0, 0x28(r3)
    stw r0, 0xfc(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803FC6BC(void)
{
    nofralloc
    lwz r0, 0x54(r3)
    li r4, 0x0
    cmpwi r0, 0x2
    bne lbl_fn_803FC6BC_00000F58
    lwz r3, 0xf8(r3)
    lwz r0, 0x7c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803FC6BC_00000F58
    li r4, 0x1
lbl_fn_803FC6BC_00000F58:
    mr r3, r4
    blr
}

asm void fn_803FC6E8(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    stw r31, 0x2c(r1)
    mr r31, r6
    stw r30, 0x28(r1)
    mr r30, r5
    stw r29, 0x24(r1)
    mr r29, r4
    stw r28, 0x20(r1)
    mr r28, r3
    lwz r12, 0x0(r3)
    lwz r12, 0x60(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_803FC6E8_00001070
    cmpwi r31, 0x0
    bne lbl_fn_803FC6E8_00001070
    lwz r3, lbl_8087F8A0
    lwz r3, 0x48(r3)
    lwz r3, 0x50(r3)
    subis r0, r3, 0xa
    cmplwi r0, 0xae77
    beq lbl_fn_803FC6E8_00001070
    lwz r4, 0xf4(r28)
    addi r3, r1, 0x8
    lfs f0, 0x8(r29)
    lfs f1, 0x74(r4)
    lfs f3, 0x70(r4)
    fsubs f4, f1, f0
    lfs f2, 0x4(r29)
    lfs f1, 0x6c(r4)
    lfs f0, 0x0(r29)
    fsubs f2, f3, f2
    stfs f4, 0x10(r1)
    fsubs f0, f1, f0
    stfs f2, 0xc(r1)
    stfs f0, 0x8(r1)
    bl fn_805F9920
    lfs f0, lbl_8088607C
    fmr f31, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_803FC6E8_00001070
    lfs f0, lbl_80886080
    fcmpo cr0, f1, f0
    bge lbl_fn_803FC6E8_00001070
    addi r3, r1, 0x8
    mr r4, r3
    bl fn_805F98D0
    mr r3, r30
    addi r4, r1, 0x8
    li r31, 0x1
    bl fn_805F9990
    lfs f0, lbl_80886084
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    beq lbl_fn_803FC6E8_00001068
    lfs f0, lbl_80886088
    fcmpo cr0, f31, f0
    mfcr r0
    srwi. r0, r0, 31
    bne lbl_fn_803FC6E8_00001068
    li r31, 0x0
lbl_fn_803FC6E8_00001068:
    mr r3, r31
    b lbl_fn_803FC6E8_00001074
lbl_fn_803FC6E8_00001070:
    li r3, 0x0
lbl_fn_803FC6E8_00001074:
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

asm void fn_803FC824(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r12, 0x0(r3)
    lwz r12, 0x60(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_803FC824_000010D4
    lwz r3, 0xf4(r31)
    li r0, 0x1
    stw r0, 0x194(r3)
lbl_fn_803FC824_000010D4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803FC870(void)
{
    nofralloc
    lwz r3, 0xf4(r3)
    li r0, 0x1
    stw r0, 0x198(r3)
    blr
}

asm void fn_803FC880(void)
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
    beq lbl_fn_803FC880_00001134
    li r4, 0x0
    bl fn_803EC69C
    cmpwi r31, 0x0
    ble lbl_fn_803FC880_00001134
    mr r3, r30
    bl dtor_80084684
lbl_fn_803FC880_00001134:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803FC8D8(void)
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
    beq lbl_fn_803FC8D8_000011EC
    lis r5, lbl_807525D4@ha
    li r3, 0x118
    addi r5, r5, lbl_807525D4@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_803FC8D8_000011E4
    lwz r5, 0x18(r30)
    mr r4, r29
    lwz r6, 0x1c(r30)
    bl fn_803EC568
    lis r4, lbl_8078CFE8@ha
    li r3, 0x0
    addi r4, r4, lbl_8078CFE8@l
    stw r4, 0x0(r31)
    li r0, 0x1
    stw r30, 0xf4(r31)
    stw r3, 0x10c(r31)
    stw r3, 0x54(r31)
    stw r0, 0x68(r31)
    stw r3, 0xf8(r31)
    stw r3, 0x100(r31)
    stw r3, 0xfc(r31)
    stw r3, 0x104(r31)
lbl_fn_803FC8D8_000011E4:
    mr r3, r31
    b lbl_fn_803FC8D8_000011F0
lbl_fn_803FC8D8_000011EC:
    li r3, 0x0
lbl_fn_803FC8D8_000011F0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803FC994(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_803EC91C
    cmpwi r3, 0x0
    bne lbl_fn_803FC994_0000123C
    li r0, 0x2
    stw r0, 0x54(r31)
    li r3, 0x1
    b lbl_fn_803FC994_00001240
lbl_fn_803FC994_0000123C:
    li r3, 0x0
lbl_fn_803FC994_00001240:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803FC9DC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r4, 0xf4(r3)
    psq_l f1, 0x4(r4), 0, 0
    lfs f2, 0xc(r4)
    stfs f2, 0x74(r3)
    psq_st f1, 0x6c(r3), 0, 0
    lfs f0, 0x14(r4)
    stfs f0, 0x7c(r3)
    lwz r0, 0x2c(r4)
    cmpwi r0, 0x1
    beq lbl_fn_803FC9DC_00001298
    cmpwi r0, 0x4
    bne lbl_fn_803FC9DC_000012E0
lbl_fn_803FC9DC_00001298:
    lfs f3, lbl_80886090
    lis r4, lbl_807525B8@ha
    lfs f0, 0x7c(r3)
    lfd f2, lbl_807525B8@l(r4)
    fadds f1, f3, f0
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_80886090
    fcmpo cr0, f3, f0
    ble lbl_fn_803FC9DC_000012C8
    lfs f0, lbl_80886094
    fsubs f3, f3, f0
lbl_fn_803FC9DC_000012C8:
    lfs f0, lbl_80886098
    fcmpo cr0, f3, f0
    bge lbl_fn_803FC9DC_000012DC
    lfs f0, lbl_80886094
    fadds f3, f3, f0
lbl_fn_803FC9DC_000012DC:
    stfs f3, 0x7c(r31)
lbl_fn_803FC9DC_000012E0:
    lwz r3, lbl_8087F430
    addi r4, r31, 0x6c
    lfs f1, lbl_8088609C
    li r5, 0x0
    lwz r3, 0x10d8(r3)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_803C1560
    stw r3, 0x10c(r31)
    mr r3, r31
    li r4, 0x0
    bl fn_803FD328
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803FCAB0(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    stfd f31, 0x90(r1)
    psq_st f31, 0x98(r1), 0, 0
    stw r31, 0x8c(r1)
    mr r31, r3
    stw r30, 0x88(r1)
    stw r29, 0x84(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x60(r12)
    mtctr r12
    bctrl
    cntlzw r0, r3
    srwi. r5, r0, 5
    bne lbl_fn_803FCAB0_000013B4
    lwz r4, lbl_8087EFB4
    addi r3, r1, 0x20
    lfs f0, 0x74(r31)
    lfs f3, 0x114(r4)
    lfs f5, 0x110(r4)
    fsubs f6, f3, f0
    lfs f4, 0x70(r31)
    lfs f3, 0x10c(r4)
    lfs f0, 0x6c(r31)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x24(r1)
    stfs f0, 0x20(r1)
    stfs f6, 0x28(r1)
    bl fn_805F9920
    lfs f0, lbl_808860A0
    fcmpo cr0, f1, f0
    mfcr r5
    extrwi r5, r5, 1, 1
lbl_fn_803FCAB0_000013B4:
    cmpwi r5, 0x0
    bne lbl_fn_803FCAB0_00001450
    lwz r3, 0xf4(r31)
    lwz r0, 0x2c(r3)
    cmpwi r0, 0x1
    bne lbl_fn_803FCAB0_00001450
    lwz r0, 0x108(r31)
    cmpwi r0, 0x7
    bge lbl_fn_803FCAB0_00001450
    lwz r3, lbl_8087F8A0
    lwz r4, 0x48(r3)
    lwz r0, 0x55c(r4)
    cmpwi r0, 0x6
    bne lbl_fn_803FCAB0_00001450
    lwz r0, 0x560(r4)
    cmpwi r0, 0x3d
    bne lbl_fn_803FCAB0_00001450
    lfs f2, 0x530(r4)
    addi r3, r1, 0x38
    psq_l f1, 0x528(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lfs f0, 0x74(r31)
    lfs f3, 0x38(r1)
    fsubs f6, f2, f0
    lfs f0, 0x6c(r31)
    lfs f5, 0x3c(r1)
    fsubs f7, f3, f0
    lfs f4, 0x70(r31)
    fmuls f3, f6, f6
    lfs f0, lbl_808860A4
    fsubs f4, f5, f4
    stfs f2, 0x40(r1)
    fmadds f3, f7, f7, f3
    stfs f7, 0x14(r1)
    fcmpo cr0, f3, f0
    stfs f4, 0x18(r1)
    stfs f6, 0x1c(r1)
    bge lbl_fn_803FCAB0_00001450
    li r5, 0x1
lbl_fn_803FCAB0_00001450:
    cmpwi r5, 0x0
    beq lbl_fn_803FCAB0_00001474
    lwz r0, 0x108(r31)
    cmpwi r0, 0x0
    beq lbl_fn_803FCAB0_000018F4
    mr r3, r31
    li r4, 0xa
    bl fn_803FD328
    b lbl_fn_803FCAB0_000018F4
lbl_fn_803FCAB0_00001474:
    mr r30, r31
    li r29, 0x0
lbl_fn_803FCAB0_0000147C:
    lwz r3, 0xf8(r30)
    cmpwi r3, 0x0
    beq lbl_fn_803FCAB0_00001528
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_803FCAB0_000014A0
    lwz r0, 0x560(r3)
    cmpwi r0, 0x44
    beq lbl_fn_803FCAB0_000014AC
lbl_fn_803FCAB0_000014A0:
    bl fn_8016D3F8
    cmpwi r3, 0x0
    beq lbl_fn_803FCAB0_00001528
lbl_fn_803FCAB0_000014AC:
    lwz r3, 0x108(r31)
    subi r0, r3, 0x3
    cmplwi r0, 0x1
    ble lbl_fn_803FCAB0_000014E0
    subi r0, r3, 0x6
    cmplwi r0, 0x1
    ble lbl_fn_803FCAB0_00001508
    subi r0, r3, 0x8
    cmplwi r0, 0x1
    ble lbl_fn_803FCAB0_00001518
    cmpwi r3, 0x5
    beq lbl_fn_803FCAB0_000014F0
    b lbl_fn_803FCAB0_00001528
lbl_fn_803FCAB0_000014E0:
    mr r3, r31
    li r4, 0xa
    bl fn_803FD328
    b lbl_fn_803FCAB0_000018F4
lbl_fn_803FCAB0_000014F0:
    cmpwi r29, 0x0
    bne lbl_fn_803FCAB0_000018F4
    mr r3, r31
    li r4, 0xa
    bl fn_803FD328
    b lbl_fn_803FCAB0_000018F4
lbl_fn_803FCAB0_00001508:
    mr r3, r31
    li r4, 0xa
    bl fn_803FD328
    b lbl_fn_803FCAB0_000018F4
lbl_fn_803FCAB0_00001518:
    mr r3, r31
    li r4, 0xa
    bl fn_803FD328
    b lbl_fn_803FCAB0_000018F4
lbl_fn_803FCAB0_00001528:
    addi r29, r29, 0x1
    addi r30, r30, 0x4
    cmpwi r29, 0x2
    blt lbl_fn_803FCAB0_0000147C
    lwz r0, 0x108(r31)
    cmplwi r0, 0x9
    bgt lbl_fn_803FCAB0_000018F4
    lis r3, jumptable_8078CFC0@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_8078CFC0@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lwz r3, 0x110(r31)
    lwz r4, 0xf4(r31)
    addi r3, r3, 0x1
    stw r3, 0x110(r31)
    lwz r0, 0x7c(r4)
    cmpwi r0, 0x0
    beq lbl_fn_803FCAB0_000018F4
    lwz r0, 0x20(r4)
    cmpw r3, r0
    ble lbl_fn_803FCAB0_000018F4
    mr r3, r31
    li r4, 0x1
    bl fn_803FD328
    b lbl_fn_803FCAB0_000018F4
    lwz r0, 0xf8(r31)
    cmpwi r0, 0x0
    bne lbl_fn_803FCAB0_000015B0
    mr r3, r31
    li r4, 0x0
    bl fn_803FD0A0
    stw r3, 0xf8(r31)
lbl_fn_803FCAB0_000015B0:
    lwz r3, 0xf8(r31)
    cmpwi r3, 0x0
    beq lbl_fn_803FCAB0_000018F4
    lfs f1, 0x7c(r31)
    addi r4, r31, 0x6c
    lfs f2, lbl_8088609C
    li r5, 0x0
    bl fn_80170F20
    lwz r5, 0xf8(r31)
    mr r3, r31
    li r4, 0x2
    lhz r0, 0xd38(r5)
    ori r0, r0, 0x8000
    sth r0, 0xd38(r5)
    bl fn_803FD328
    b lbl_fn_803FCAB0_000018F4
    lwz r3, 0xf8(r31)
    lwz r0, 0x105c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803FCAB0_000018F4
    mr r3, r31
    li r4, 0x3
    bl fn_803FD328
    b lbl_fn_803FCAB0_000018F4
    lwz r3, 0xf8(r31)
    li r4, 0x0
    addi r3, r3, 0xb0
    lfs f31, 0x234(r3)
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_803FCAB0_000018F4
    mr r3, r31
    li r4, 0x4
    bl fn_803FD328
    b lbl_fn_803FCAB0_000018F4
    lwz r0, 0xfc(r31)
    cmpwi r0, 0x0
    bne lbl_fn_803FCAB0_0000165C
    lwz r4, 0xf8(r31)
    mr r3, r31
    bl fn_803FD0A0
    stw r3, 0xfc(r31)
lbl_fn_803FCAB0_0000165C:
    lwz r0, 0xfc(r31)
    cmpwi r0, 0x0
    beq lbl_fn_803FCAB0_000017C4
    lwz r3, 0xf4(r31)
    lwz r3, 0x2c(r3)
    subi r0, r3, 0x2
    cmplwi r0, 0x1
    ble lbl_fn_803FCAB0_00001690
    cmpwi r3, 0x1
    beq lbl_fn_803FCAB0_000016AC
    cmpwi r3, 0x4
    beq lbl_fn_803FCAB0_000016C8
    b lbl_fn_803FCAB0_000016E4
lbl_fn_803FCAB0_00001690:
    lfs f0, lbl_808860AC
    lfs f3, lbl_808860A8
    stfs f3, 0x2c(r1)
    stfs f0, 0x30(r1)
    stfs f0, 0x34(r1)
    lfs f31, 0x7c(r31)
    b lbl_fn_803FCAB0_0000173C
lbl_fn_803FCAB0_000016AC:
    lfs f0, lbl_808860AC
    lfs f3, lbl_808860B0
    stfs f3, 0x2c(r1)
    stfs f0, 0x30(r1)
    stfs f0, 0x34(r1)
    lfs f31, 0x7c(r31)
    b lbl_fn_803FCAB0_0000173C
lbl_fn_803FCAB0_000016C8:
    lfs f3, lbl_808860AC
    lfs f0, lbl_808860B0
    stfs f3, 0x2c(r1)
    stfs f3, 0x30(r1)
    stfs f0, 0x34(r1)
    lfs f31, 0x7c(r31)
    b lbl_fn_803FCAB0_0000173C
lbl_fn_803FCAB0_000016E4:
    lfs f4, lbl_808860AC
    lis r3, lbl_807525B8@ha
    lfs f0, lbl_808860A8
    stfs f4, 0x2c(r1)
    lfs f3, lbl_80886090
    stfs f4, 0x30(r1)
    lfd f2, lbl_807525B8@l(r3)
    stfs f0, 0x34(r1)
    lfs f0, 0x7c(r31)
    fadds f1, f3, f0
    bl fn_8068AEA8
    frsp f31, f1
    lfs f0, lbl_80886090
    fcmpo cr0, f31, f0
    ble lbl_fn_803FCAB0_00001728
    lfs f0, lbl_80886094
    fsubs f31, f31, f0
lbl_fn_803FCAB0_00001728:
    lfs f0, lbl_80886098
    fcmpo cr0, f31, f0
    bge lbl_fn_803FCAB0_0000173C
    lfs f0, lbl_80886094
    fadds f31, f31, f0
lbl_fn_803FCAB0_0000173C:
    lfs f1, 0x7c(r31)
    addi r3, r1, 0x48
    li r4, 0x79
    bl fn_805F8E70
    addi r4, r1, 0x2c
    addi r3, r1, 0x48
    mr r5, r4
    bl fn_805F93C0
    lfs f6, 0x74(r31)
    fmr f1, f31
    lfs f0, 0x34(r1)
    addi r4, r1, 0x8
    lfs f5, 0x70(r31)
    li r5, 0x0
    lfs f4, 0x30(r1)
    fadds f6, f6, f0
    lfs f3, 0x6c(r31)
    lfs f0, 0x2c(r1)
    fadds f4, f5, f4
    stfs f6, 0x10(r1)
    fadds f0, f3, f0
    stfs f4, 0xc(r1)
    lfs f2, lbl_8088609C
    stfs f0, 0x8(r1)
    lwz r3, 0xfc(r31)
    bl fn_80170F20
    lwz r5, 0xfc(r31)
    mr r3, r31
    li r4, 0x5
    lhz r0, 0xd38(r5)
    ori r0, r0, 0x8000
    sth r0, 0xd38(r5)
    bl fn_803FD328
    b lbl_fn_803FCAB0_000018F4
lbl_fn_803FCAB0_000017C4:
    lwz r3, 0x110(r31)
    addi r0, r3, 0x1
    stw r0, 0x110(r31)
    cmpwi r0, 0x384
    ble lbl_fn_803FCAB0_000018F4
    mr r3, r31
    li r4, 0x9
    bl fn_803FD328
    b lbl_fn_803FCAB0_000018F4
    lwz r3, 0xfc(r31)
    lwz r0, 0x105c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803FCAB0_00001808
    mr r3, r31
    li r4, 0x6
    bl fn_803FD328
    b lbl_fn_803FCAB0_000018F4
lbl_fn_803FCAB0_00001808:
    lwz r3, 0x110(r31)
    addi r0, r3, 0x1
    stw r0, 0x110(r31)
    cmpwi r0, 0x384
    ble lbl_fn_803FCAB0_000018F4
    mr r3, r31
    li r4, 0x9
    bl fn_803FD328
    b lbl_fn_803FCAB0_000018F4
    lwz r3, 0xfc(r31)
    li r4, 0x0
    addi r3, r3, 0xb0
    lfs f31, 0x234(r3)
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_803FCAB0_000018F4
    mr r3, r31
    li r4, 0x7
    bl fn_803FD328
    b lbl_fn_803FCAB0_000018F4
    lwz r3, 0x110(r31)
    lwz r4, 0xf4(r31)
    addi r0, r3, 0x1
    stw r0, 0x110(r31)
    lwz r3, 0x24(r4)
    cmpw r0, r3
    ble lbl_fn_803FCAB0_000018F4
    cmpwi r3, 0x0
    bne lbl_fn_803FCAB0_00001888
    cmpwi r0, 0x12c
    ble lbl_fn_803FCAB0_000018F4
lbl_fn_803FCAB0_00001888:
    mr r3, r31
    li r4, 0x8
    bl fn_803FD328
    b lbl_fn_803FCAB0_000018F4
    lwz r3, 0xfc(r31)
    li r4, 0x0
    addi r3, r3, 0xb0
    lfs f31, 0x234(r3)
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_803FCAB0_000018F4
    mr r3, r31
    li r4, 0x9
    bl fn_803FD328
    b lbl_fn_803FCAB0_000018F4
    lwz r3, 0xf8(r31)
    li r4, 0x0
    addi r3, r3, 0xb0
    lfs f31, 0x234(r3)
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_803FCAB0_000018F4
    mr r3, r31
    li r4, 0xa
    bl fn_803FD328
lbl_fn_803FCAB0_000018F4:
    lwz r0, 0xa4(r1)
    psq_l f31, 0x98(r1), 0, 0
    lfd f31, 0x90(r1)
    lwz r31, 0x8c(r1)
    lwz r30, 0x88(r1)
    lwz r29, 0x84(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_803FD0A0(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    lfs f31, lbl_808860BC
    stfd f30, 0x30(r1)
    psq_st f30, 0x38(r1), 0, 0
    lfs f30, lbl_808860AC
    stw r31, 0x2c(r1)
    li r31, 0x0
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    mr r29, r4
    stw r28, 0x20(r1)
    mr r28, r3
    lwz r5, lbl_8087F890
    lwz r30, 0x48(r5)
    b lbl_fn_803FD0A0_00001B64
lbl_fn_803FD0A0_00001964:
    cmplw r30, r29
    beq lbl_fn_803FD0A0_00001B60
    cmpwi r29, 0x0
    beq lbl_fn_803FD0A0_00001984
    lwz r3, 0x50(r30)
    lwz r0, 0x50(r29)
    cmpw r3, r0
    beq lbl_fn_803FD0A0_00001B60
lbl_fn_803FD0A0_00001984:
    lwz r0, 0x100(r28)
    cmplw r30, r0
    beq lbl_fn_803FD0A0_00001B60
    lwz r0, 0x104(r28)
    cmplw r30, r0
    beq lbl_fn_803FD0A0_00001B60
    lhz r0, 0xd38(r30)
    extrwi. r0, r0, 1, 16
    bne lbl_fn_803FD0A0_00001B60
    lwz r0, 0x55c(r30)
    cmpwi r0, 0x2
    bne lbl_fn_803FD0A0_00001B60
    lwz r4, 0x38(r30)
    li r3, 0x0
    rlwinm r0, r4, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_803FD0A0_000019D8
    clrlwi r0, r4, 31
    cmplwi r0, 0x1
    beq lbl_fn_803FD0A0_000019D8
    li r3, 0x1
lbl_fn_803FD0A0_000019D8:
    cmpwi r3, 0x0
    beq lbl_fn_803FD0A0_00001B60
    andis. r3, r4, 0xdead
    addis r0, r3, 0x2153
    cmplwi r0, 0x0
    beq lbl_fn_803FD0A0_00001B60
    lwz r3, 0xf4(r28)
    li r4, 0x0
    lwz r0, 0x50(r30)
    li r5, 0x4
    lwz r3, 0x30(r3)
    cmpw r3, r0
    bne lbl_fn_803FD0A0_00001A14
    li r4, 0x1
    b lbl_fn_803FD0A0_00001AD0
lbl_fn_803FD0A0_00001A14:
    cmpwi r3, 0x0
    bne lbl_fn_803FD0A0_00001A2C
    cmplwi r5, 0x4
    bne lbl_fn_803FD0A0_00001A2C
    li r4, 0x1
    b lbl_fn_803FD0A0_00001AD0
lbl_fn_803FD0A0_00001A2C:
    lwz r3, 0xf4(r28)
    li r5, 0x5
    lwz r0, 0x50(r30)
    lwz r3, 0x34(r3)
    cmpw r3, r0
    bne lbl_fn_803FD0A0_00001A4C
    li r4, 0x1
    b lbl_fn_803FD0A0_00001AD0
lbl_fn_803FD0A0_00001A4C:
    cmpwi r3, 0x0
    bne lbl_fn_803FD0A0_00001A64
    cmplwi r5, 0x4
    bne lbl_fn_803FD0A0_00001A64
    li r4, 0x1
    b lbl_fn_803FD0A0_00001AD0
lbl_fn_803FD0A0_00001A64:
    lwz r3, 0xf4(r28)
    li r5, 0x6
    lwz r0, 0x50(r30)
    lwz r3, 0x38(r3)
    cmpw r3, r0
    bne lbl_fn_803FD0A0_00001A84
    li r4, 0x1
    b lbl_fn_803FD0A0_00001AD0
lbl_fn_803FD0A0_00001A84:
    cmpwi r3, 0x0
    bne lbl_fn_803FD0A0_00001A9C
    cmplwi r5, 0x4
    bne lbl_fn_803FD0A0_00001A9C
    li r4, 0x1
    b lbl_fn_803FD0A0_00001AD0
lbl_fn_803FD0A0_00001A9C:
    lwz r3, 0xf4(r28)
    li r5, 0x7
    lwz r0, 0x50(r30)
    lwz r3, 0x3c(r3)
    cmpw r3, r0
    bne lbl_fn_803FD0A0_00001ABC
    li r4, 0x1
    b lbl_fn_803FD0A0_00001AD0
lbl_fn_803FD0A0_00001ABC:
    cmpwi r3, 0x0
    bne lbl_fn_803FD0A0_00001AD0
    cmplwi r5, 0x4
    bne lbl_fn_803FD0A0_00001AD0
    li r4, 0x1
lbl_fn_803FD0A0_00001AD0:
    cmpwi r4, 0x0
    beq lbl_fn_803FD0A0_00001B60
    lwz r3, 0xc64(r30)
    cmpwi r3, 0x0
    ble lbl_fn_803FD0A0_00001B60
    lwz r4, lbl_8087F430
    subi r0, r3, 0x1
    lwz r3, 0x10c(r28)
    slwi r0, r0, 3
    lwz r5, 0x10d8(r4)
    subi r4, r3, 0x1
    lwz r3, 0xa4(r5)
    add r3, r3, r0
    bl fn_803CD958
    clrlwi. r0, r3, 16
    ble lbl_fn_803FD0A0_00001B60
    lfs f1, 0x530(r30)
    addi r3, r1, 0x8
    lfs f0, 0x74(r28)
    lfs f3, 0x52c(r30)
    fsubs f4, f1, f0
    lfs f2, 0x70(r28)
    lfs f1, 0x528(r30)
    lfs f0, 0x6c(r28)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f4, 0x10(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f31
    bge lbl_fn_803FD0A0_00001B60
    fcmpo cr0, f1, f30
    ble lbl_fn_803FD0A0_00001B60
    fmr f30, f1
    mr r31, r30
lbl_fn_803FD0A0_00001B60:
    lwz r30, 0x1424(r30)
lbl_fn_803FD0A0_00001B64:
    cmpwi r30, 0x0
    bne lbl_fn_803FD0A0_00001964
    psq_l f31, 0x48(r1), 0, 0
    mr r3, r31
    lfd f31, 0x40(r1)
    psq_l f30, 0x38(r1), 0, 0
    lfd f30, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}
