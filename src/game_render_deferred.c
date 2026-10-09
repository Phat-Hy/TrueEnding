#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void dtor_80084684(void);
extern void fn_8000D3A4(void);
extern void fn_8001047C(void);
extern void fn_80011034(void);
extern void fn_80013338(void);
extern void fn_8004D124(void);
extern void fn_80056E40(void);
extern void fn_800897D8(void);
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800CB3A0(void);
extern void fn_800EE360(void);
extern void fn_800F7FD8(void);
extern void fn_800F8548(void);
extern void fn_800F8574(void);
extern void fn_800FAB80(void);
extern void fn_8012A1B8(void);
extern void fn_8013C38C(void);
extern void fn_8015495C(void);
extern void fn_8016DA4C(void);
extern void fn_8016E970(void);
extern void fn_801765D8(void);
extern void fn_80178A6C(void);
extern void fn_80232B7C(void);
extern void fn_802375C4(void);
extern void fn_8023781C(void);
extern void fn_80239DAC(void);
extern void fn_8023A8B4(void);
extern void fn_802A7910(void);
extern void fn_802A7964(void);
extern void fn_8037D4C0(void);
extern void fn_80473E8C(void);
extern void fn_804DA490(void);
extern void fn_805A3D00(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_80680CF8(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);

/* External data declarations */
extern u8 lbl_807465C0[];
extern u8 lbl_807465C8[];
extern u8 lbl_807465E0[];
extern u8 lbl_807860A0[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087EF10;
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F448;
extern u32 lbl_8087F610;
extern u32 lbl_80884020;
extern u32 lbl_80884028;
extern u32 lbl_80884034;
extern u32 lbl_80884038;
extern u32 lbl_80884044;
extern u32 lbl_80884050;
extern u32 lbl_80884060;
extern u32 lbl_80884064;
extern u32 lbl_80884074;
extern u32 lbl_80884078;
extern u32 lbl_8088407C;
extern u32 lbl_80884080;
extern u32 lbl_80884084;
extern u32 lbl_80884088;
extern u32 lbl_8088408C;
extern u32 lbl_808840B4;
extern u32 lbl_808840B8;
extern u32 lbl_808840BC;
extern u32 lbl_808840C0;
extern u32 lbl_808840C4;
extern u32 lbl_808840C8;
extern u32 lbl_808840CC;
extern u32 lbl_808840D0;
extern u32 lbl_808840D4;
extern u32 lbl_808840D8;
extern u32 lbl_808840DC;
extern u32 lbl_808840E0;
extern u32 lbl_808840E4;
extern u32 lbl_808840E8;
extern u32 lbl_808840EC;
extern u32 lbl_808840F0;
extern u32 lbl_808840F4;
extern u32 lbl_808840F8;

/* Function declarations */
void fn_802B5DA4(void);
void fn_802B6104(void);
void fn_802B6758(void);
void fn_802B6928(void);
void fn_802B69C0(void);
void fn_802B6A5C(void);
void fn_802B6AF8(void);
void fn_802B6C64(void);
void fn_802B6F80(void);
void fn_802B7230(void);
void fn_802B725C(void);
void fn_802B73FC(void);
void fn_802B753C(void);

asm void fn_802B5DA4(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    stw r30, 0x48(r1)
    mr r30, r3
    stw r29, 0x44(r1)
    lfs f3, 0x15ec(r3)
    lfs f0, 0x530(r3)
    lfs f5, 0x15e8(r3)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r3)
    lfs f3, 0x15e4(r3)
    lfs f0, 0x528(r3)
    fsubs f4, f5, f4
    addi r3, r1, 0x34
    fsubs f0, f3, f0
    stfs f4, 0x38(r1)
    stfs f0, 0x34(r1)
    stfs f6, 0x3c(r1)
    bl fn_805F9940
    addi r3, r1, 0x34
    bl fn_805F9920
    lfs f0, lbl_808840D0
    fcmpo cr0, f1, f0
    bge lbl_fn_802B5DA4_00000250
    lwz r0, 0x14dc(r30)
    li r31, 0x0
    cmpwi r0, 0x0
    bne lbl_fn_802B5DA4_000000E4
    lwz r0, 0x14e0(r30)
    cmpwi r0, 0x3c
    ble lbl_fn_802B5DA4_000001C8
    lwz r29, 0x154c(r30)
    li r3, 0x0
    li r0, 0x1
    stw r3, 0x14e0(r30)
    cmpwi r29, 0x1
    stw r0, 0x14dc(r30)
    blt lbl_fn_802B5DA4_000000DC
    bl fn_80680CF8
    divwu r0, r3, r29
    addi r4, r30, 0x15e4
    mullw r0, r0, r29
    subf r3, r0, r3
    stw r3, 0x14f0(r30)
    slwi r0, r3, 2
    stw r3, 0x14f4(r30)
    add r3, r30, r0
    lwz r3, 0x1550(r3)
    psq_l f1, 0x4(r3), 0, 0
    lfs f2, 0xc(r3)
    stfs f2, 0x15ec(r30)
    psq_st f1, 0x0(r4), 0, 0
    b lbl_fn_802B5DA4_000001C8
lbl_fn_802B5DA4_000000DC:
    li r31, 0x1
    b lbl_fn_802B5DA4_000001C8
lbl_fn_802B5DA4_000000E4:
    lwz r3, 0x14f4(r30)
    cmpwi r3, -0x1
    bne lbl_fn_802B5DA4_0000014C
    lwz r3, 0x150c(r30)
    addi r0, r3, 0x1
    stw r0, 0x150c(r30)
    cmpwi r0, 0x2
    blt lbl_fn_802B5DA4_0000010C
    li r31, 0x1
    b lbl_fn_802B5DA4_000001C8
lbl_fn_802B5DA4_0000010C:
    lwz r29, 0x154c(r30)
    bl fn_80680CF8
    divwu r0, r3, r29
    addi r4, r30, 0x15e4
    mullw r0, r0, r29
    subf r3, r0, r3
    stw r3, 0x14f0(r30)
    slwi r0, r3, 2
    stw r3, 0x14f4(r30)
    add r3, r30, r0
    lwz r3, 0x1550(r3)
    psq_l f1, 0x4(r3), 0, 0
    lfs f2, 0xc(r3)
    stfs f2, 0x15ec(r30)
    psq_st f1, 0x0(r4), 0, 0
    b lbl_fn_802B5DA4_000001C8
lbl_fn_802B5DA4_0000014C:
    lwz r4, 0x154c(r30)
    addi r0, r3, 0x1
    stw r0, 0x14f4(r30)
    cmpw r4, r0
    bgt lbl_fn_802B5DA4_00000168
    li r0, 0x0
    stw r0, 0x14f4(r30)
lbl_fn_802B5DA4_00000168:
    lwz r3, 0x14f4(r30)
    lwz r0, 0x14f0(r30)
    cmpw r3, r0
    bne lbl_fn_802B5DA4_00000180
    li r0, -0x1
    stw r0, 0x14f4(r30)
lbl_fn_802B5DA4_00000180:
    lwz r0, 0x14f4(r30)
    cmpwi r0, -0x1
    bne lbl_fn_802B5DA4_000001A8
    addi r4, r30, 0x15d4
    lfs f2, 0x15dc(r30)
    addi r3, r30, 0x15e4
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x15ec(r30)
    b lbl_fn_802B5DA4_000001C8
lbl_fn_802B5DA4_000001A8:
    slwi r0, r0, 2
    addi r4, r30, 0x15e4
    add r3, r30, r0
    lwz r3, 0x1550(r3)
    psq_l f1, 0x4(r3), 0, 0
    lfs f2, 0xc(r3)
    stfs f2, 0x15ec(r30)
    psq_st f1, 0x0(r4), 0, 0
lbl_fn_802B5DA4_000001C8:
    cmpwi r31, 0x0
    beq lbl_fn_802B5DA4_00000344
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x66
    li r6, 0x0
    bl fn_80239DAC
    li r3, 0x0
    li r0, 0xf
    stw r3, 0x14e0(r30)
    mr r3, r30
    li r4, 0x6
    stw r0, 0x58c(r30)
    bl fn_8016E970
    li r0, 0x4
    stw r0, 0x560(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80884034
    li r0, 0x1
    stw r3, 0x590(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80884028
    li r4, 0x0
    stw r0, 0x3fc(r30)
    li r5, 0x141
    lfs f2, lbl_80884038
    li r6, 0x0
    stfs f0, 0x2fc(r30)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r30)
    bl fn_80097C08
    b lbl_fn_802B5DA4_00000344
lbl_fn_802B5DA4_00000250:
    addi r4, r1, 0x34
    lfs f2, 0x3c(r1)
    addi r3, r1, 0x28
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    mr r4, r3
    stfs f2, 0x30(r1)
    bl fn_805F98D0
    lfs f5, lbl_80884028
    lis r3, lbl_807465E0@ha
    lfs f4, lbl_80884060
    addi r3, r3, lbl_807465E0@l
    lfs f0, 0x28(r1)
    addi r4, r3, 0x147
    fmuls f6, f5, f4
    lfs f3, 0x30(r1)
    stfs f5, 0x2c(r1)
    fmuls f7, f0, f4
    fmuls f5, f3, f4
    addi r3, r30, 0xb0
    lfs f3, 0x52c(r30)
    li r5, 0x0
    lfs f4, 0x528(r30)
    lfs f0, 0x530(r30)
    fadds f3, f3, f6
    fadds f4, f4, f7
    stfs f7, 0x10(r1)
    fadds f0, f0, f5
    stfs f6, 0x14(r1)
    stfs f5, 0x18(r1)
    stfs f4, 0x528(r30)
    stfs f3, 0x52c(r30)
    stfs f0, 0x530(r30)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802B5DA4_000002E8
    li r3, 0x0
    b lbl_fn_802B5DA4_000002F4
lbl_fn_802B5DA4_000002E8:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r3, r3, r0
lbl_fn_802B5DA4_000002F4:
    lfs f0, 0x2c(r3)
    li r0, -0x1
    lfs f3, 0x1c(r3)
    mr r4, r30
    lfs f4, 0xc(r3)
    addi r7, r1, 0x1c
    stfs f4, 0x1c(r1)
    addi r8, r30, 0x534
    lfs f1, lbl_80884028
    li r6, 0x3e8
    stfs f3, 0x20(r1)
    li r9, 0x0
    lfs f2, lbl_80884034
    li r10, 0x1e
    stfs f0, 0x24(r1)
    stw r0, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F048
    lwz r5, 0x1684(r30)
    bl fn_800FAB80
lbl_fn_802B5DA4_00000344:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_802B6104(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    lfs f0, lbl_80884028
    stw r0, 0x114(r1)
    stw r31, 0x10c(r1)
    stw r30, 0x108(r1)
    mr r30, r3
    stw r29, 0x104(r1)
    stfs f0, 0x7c(r1)
    stfs f0, 0x80(r1)
    stfs f0, 0x84(r1)
    lwz r0, 0x14dc(r3)
    cmpwi r0, 0x2
    bge lbl_fn_802B6104_000003E0
    lfs f3, 0x15ec(r3)
    addi r5, r1, 0x28
    lfs f0, 0x530(r3)
    addi r4, r1, 0x7c
    lfs f5, 0x15e8(r3)
    fsubs f2, f3, f0
    lfs f4, 0x52c(r3)
    lfs f3, 0x15e4(r3)
    lfs f0, 0x528(r3)
    fsubs f4, f5, f4
    stfs f2, 0x30(r1)
    fsubs f0, f3, f0
    stfs f4, 0x2c(r1)
    stfs f0, 0x28(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x84(r1)
    b lbl_fn_802B6104_00000448
lbl_fn_802B6104_000003E0:
    addi r5, r3, 0x15d4
    lfs f2, 0x15dc(r3)
    addi r4, r1, 0x70
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    addi r6, r1, 0x1c
    lfs f0, 0x530(r3)
    addi r4, r1, 0x7c
    lfs f4, 0x74(r1)
    lfs f3, lbl_808840B8
    fsubs f6, f2, f0
    stfs f2, 0x78(r1)
    fadds f5, f4, f3
    lfs f4, 0x52c(r3)
    lfs f3, 0x70(r1)
    fmr f2, f6
    lfs f0, 0x528(r3)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f5, 0x74(r1)
    stfs f0, 0x1c(r1)
    stfs f4, 0x20(r1)
    psq_l f1, 0x0(r6), 0, 0
    stfs f6, 0x24(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x84(r1)
lbl_fn_802B6104_00000448:
    addi r3, r1, 0x7c
    bl fn_805F9940
    lwz r0, 0x14dc(r30)
    cmpwi r0, 0x3
    beq lbl_fn_802B6104_00000470
    addi r3, r1, 0x7c
    bl fn_805F9920
    lfs f0, lbl_808840D0
    fcmpo cr0, f1, f0
    bge lbl_fn_802B6104_000008A8
lbl_fn_802B6104_00000470:
    lwz r0, 0x14dc(r30)
    li r31, 0x0
    cmpwi r0, 0x0
    bne lbl_fn_802B6104_000004E4
    lwz r0, 0x14e0(r30)
    cmpwi r0, 0x3c
    ble lbl_fn_802B6104_00000998
    lwz r29, 0x154c(r30)
    li r3, 0x0
    li r0, 0x1
    stw r3, 0x14e0(r30)
    cmpwi r29, 0x1
    stw r0, 0x14dc(r30)
    blt lbl_fn_802B6104_00000998
    bl fn_80680CF8
    divwu r0, r3, r29
    addi r4, r30, 0x15e4
    mullw r0, r0, r29
    subf r3, r0, r3
    stw r3, 0x14f0(r30)
    slwi r0, r3, 2
    stw r3, 0x14f4(r30)
    add r3, r30, r0
    lwz r3, 0x1550(r3)
    psq_l f1, 0x4(r3), 0, 0
    lfs f2, 0xc(r3)
    stfs f2, 0x15ec(r30)
    psq_st f1, 0x0(r4), 0, 0
    b lbl_fn_802B6104_00000998
lbl_fn_802B6104_000004E4:
    cmpwi r0, 0x1
    bne lbl_fn_802B6104_000005EC
    lwz r3, 0x14f4(r30)
    cmpwi r3, -0x1
    bne lbl_fn_802B6104_00000554
    lwz r3, 0x150c(r30)
    addi r0, r3, 0x1
    stw r0, 0x150c(r30)
    cmpwi r0, 0x2
    blt lbl_fn_802B6104_00000514
    li r31, 0x1
    b lbl_fn_802B6104_000005D0
lbl_fn_802B6104_00000514:
    lwz r29, 0x154c(r30)
    bl fn_80680CF8
    divwu r0, r3, r29
    addi r4, r30, 0x15e4
    mullw r0, r0, r29
    subf r3, r0, r3
    stw r3, 0x14f0(r30)
    slwi r0, r3, 2
    stw r3, 0x14f4(r30)
    add r3, r30, r0
    lwz r3, 0x1550(r3)
    psq_l f1, 0x4(r3), 0, 0
    lfs f2, 0xc(r3)
    stfs f2, 0x15ec(r30)
    psq_st f1, 0x0(r4), 0, 0
    b lbl_fn_802B6104_000005D0
lbl_fn_802B6104_00000554:
    lwz r4, 0x154c(r30)
    addi r0, r3, 0x1
    stw r0, 0x14f4(r30)
    cmpw r4, r0
    bgt lbl_fn_802B6104_00000570
    li r0, 0x0
    stw r0, 0x14f4(r30)
lbl_fn_802B6104_00000570:
    lwz r3, 0x14f4(r30)
    lwz r0, 0x14f0(r30)
    cmpw r3, r0
    bne lbl_fn_802B6104_00000588
    li r0, -0x1
    stw r0, 0x14f4(r30)
lbl_fn_802B6104_00000588:
    lwz r0, 0x14f4(r30)
    cmpwi r0, -0x1
    bne lbl_fn_802B6104_000005B0
    addi r4, r30, 0x15d4
    lfs f2, 0x15dc(r30)
    addi r3, r30, 0x15e4
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x15ec(r30)
    b lbl_fn_802B6104_000005D0
lbl_fn_802B6104_000005B0:
    slwi r0, r0, 2
    addi r4, r30, 0x15e4
    add r3, r30, r0
    lwz r3, 0x1550(r3)
    psq_l f1, 0x4(r3), 0, 0
    lfs f2, 0xc(r3)
    stfs f2, 0x15ec(r30)
    psq_st f1, 0x0(r4), 0, 0
lbl_fn_802B6104_000005D0:
    cmpwi r31, 0x0
    beq lbl_fn_802B6104_00000998
    li r3, 0x0
    li r0, 0x2
    stw r3, 0x14e0(r30)
    stw r0, 0x14dc(r30)
    b lbl_fn_802B6104_00000998
lbl_fn_802B6104_000005EC:
    cmpwi r0, 0x2
    bne lbl_fn_802B6104_00000614
    lwz r0, 0x14e0(r30)
    cmpwi r0, 0x1e
    ble lbl_fn_802B6104_00000998
    li r3, 0x0
    li r0, 0x3
    stw r3, 0x14e0(r30)
    stw r0, 0x14dc(r30)
    b lbl_fn_802B6104_00000998
lbl_fn_802B6104_00000614:
    cmpwi r0, 0x3
    bne lbl_fn_802B6104_00000998
    lwz r4, 0x14e0(r30)
    lis r0, 0x4330
    stw r0, 0xe8(r1)
    lis r3, lbl_807465C0@ha
    xoris r0, r4, 0x8000
    lfd f4, lbl_807465C0@l(r3)
    stw r0, 0xec(r1)
    lfs f0, lbl_80884050
    lfd f3, 0xe8(r1)
    fsubs f3, f3, f4
    fcmpo cr0, f3, f0
    ble lbl_fn_802B6104_000006CC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x66
    li r6, 0x0
    bl fn_80239DAC
    li r3, 0x0
    li r0, 0xf
    stw r3, 0x14e0(r30)
    mr r3, r30
    li r4, 0x6
    stw r0, 0x58c(r30)
    bl fn_8016E970
    li r0, 0x4
    stw r0, 0x560(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80884034
    li r0, 0x1
    stw r3, 0x590(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80884028
    li r4, 0x0
    stw r0, 0x3fc(r30)
    li r5, 0x141
    lfs f2, lbl_80884038
    li r6, 0x0
    stfs f0, 0x2fc(r30)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r30)
    bl fn_80097C08
    b lbl_fn_802B6104_00000998
lbl_fn_802B6104_000006CC:
    cmpwi r4, 0xa
    ble lbl_fn_802B6104_000006F8
    lfs f4, 0x52c(r30)
    lfs f3, lbl_808840B4
    lfs f0, lbl_80884028
    fsubs f3, f4, f3
    stfs f3, 0x52c(r30)
    fcmpo cr0, f3, f0
    bge lbl_fn_802B6104_00000998
    stfs f0, 0x52c(r30)
    b lbl_fn_802B6104_00000998
lbl_fn_802B6104_000006F8:
    lis r4, lbl_807465E0@ha
    addi r29, r30, 0xb0
    addi r4, r4, lbl_807465E0@l
    li r5, 0x0
    mr r3, r29
    addi r4, r4, 0x147
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802B6104_00000724
    li r3, 0x0
    b lbl_fn_802B6104_00000730
lbl_fn_802B6104_00000724:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r29)
    add r3, r3, r0
lbl_fn_802B6104_00000730:
    lfs f0, 0x2c(r3)
    lfs f3, 0x1c(r3)
    lfs f4, 0xc(r3)
    stfs f4, 0x64(r1)
    stfs f3, 0x68(r1)
    stfs f0, 0x6c(r1)
    lwz r0, 0x14e0(r30)
    cmpwi r0, 0xa
    bne lbl_fn_802B6104_000007B0
    lfs f4, lbl_80884028
    mr r4, r30
    lfs f3, lbl_80884064
    lfs f0, lbl_808840BC
    stfs f4, 0x58(r1)
    lwz r3, lbl_8087F048
    stfs f3, 0x5c(r1)
    stfs f0, 0x60(r1)
    lwz r0, 0x1518(r30)
    cmpwi r0, 0x1
    bne lbl_fn_802B6104_00000788
    lwz r5, 0x1690(r30)
    b lbl_fn_802B6104_0000078C
lbl_fn_802B6104_00000788:
    lwz r5, 0x1688(r30)
lbl_fn_802B6104_0000078C:
    lfs f1, lbl_80884028
    addi r6, r1, 0x64
    lfs f2, lbl_80884034
    addi r7, r1, 0x58
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_800F8574
    b lbl_fn_802B6104_00000998
lbl_fn_802B6104_000007B0:
    xoris r0, r0, 0x8000
    lis r31, 0x4330
    lis r29, lbl_807465C0@ha
    stw r0, 0xec(r1)
    lfd f4, lbl_807465C0@l(r29)
    addi r3, r1, 0xb8
    stw r31, 0xe8(r1)
    li r4, 0x79
    lfs f6, lbl_80884028
    lfd f3, 0xe8(r1)
    lfs f0, lbl_808840C0
    fsubs f3, f3, f4
    lfs f5, lbl_80884064
    lfs f4, lbl_808840B4
    stfs f6, 0x4c(r1)
    fmuls f1, f0, f3
    stfs f5, 0x50(r1)
    stfs f4, 0x54(r1)
    bl fn_805F8E70
    addi r4, r1, 0x4c
    addi r3, r1, 0xb8
    mr r5, r4
    bl fn_805F93C0
    bl fn_80680CF8
    xoris r0, r3, 0x8000
    stw r0, 0xf4(r1)
    lfd f5, lbl_807465C0@l(r29)
    addi r3, r1, 0x88
    stw r31, 0xf0(r1)
    li r4, 0x78
    lfs f4, lbl_808840CC
    lfd f0, 0xf0(r1)
    lfs f3, lbl_808840C8
    fsubs f5, f0, f5
    lfs f0, lbl_808840C4
    fdivs f4, f5, f4
    fmadds f1, f3, f4, f0
    bl fn_805F8E70
    addi r4, r1, 0x4c
    addi r3, r1, 0x88
    mr r5, r4
    bl fn_805F93C0
    addi r3, r1, 0x4c
    mr r4, r3
    bl fn_805F98D0
    lwz r0, 0x1518(r30)
    mr r4, r30
    lwz r3, lbl_8087F048
    cmpwi r0, 0x1
    bne lbl_fn_802B6104_00000880
    lwz r5, 0x1694(r30)
    b lbl_fn_802B6104_00000884
lbl_fn_802B6104_00000880:
    lwz r5, 0x168c(r30)
lbl_fn_802B6104_00000884:
    lfs f1, lbl_80884028
    addi r6, r1, 0x64
    lfs f2, lbl_80884034
    addi r7, r1, 0x4c
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_800F8574
    b lbl_fn_802B6104_00000998
lbl_fn_802B6104_000008A8:
    addi r4, r1, 0x7c
    lfs f2, 0x84(r1)
    addi r3, r1, 0x40
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    mr r4, r3
    stfs f2, 0x48(r1)
    bl fn_805F98D0
    lfs f5, 0x48(r1)
    lis r3, lbl_807465E0@ha
    lfs f4, lbl_80884060
    addi r3, r3, lbl_807465E0@l
    lfs f3, 0x44(r1)
    addi r4, r3, 0x147
    lfs f0, 0x40(r1)
    fmuls f5, f5, f4
    fmuls f6, f3, f4
    lfs f3, 0x52c(r30)
    fmuls f7, f0, f4
    lfs f4, 0x528(r30)
    lfs f0, 0x530(r30)
    fadds f3, f3, f6
    fadds f4, f4, f7
    stfs f7, 0x10(r1)
    fadds f0, f0, f5
    addi r3, r30, 0xb0
    stfs f6, 0x14(r1)
    li r5, 0x0
    stfs f5, 0x18(r1)
    stfs f4, 0x528(r30)
    stfs f3, 0x52c(r30)
    stfs f0, 0x530(r30)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802B6104_0000093C
    li r3, 0x0
    b lbl_fn_802B6104_00000948
lbl_fn_802B6104_0000093C:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r3, r3, r0
lbl_fn_802B6104_00000948:
    lfs f0, 0x2c(r3)
    li r0, -0x1
    lfs f3, 0x1c(r3)
    mr r4, r30
    lfs f4, 0xc(r3)
    addi r7, r1, 0x34
    stfs f4, 0x34(r1)
    addi r8, r30, 0x534
    lfs f1, lbl_80884028
    li r6, 0x3e8
    stfs f3, 0x38(r1)
    li r9, 0x0
    lfs f2, lbl_80884034
    li r10, 0x1e
    stfs f0, 0x3c(r1)
    stw r0, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F048
    lwz r5, 0x1684(r30)
    bl fn_800FAB80
lbl_fn_802B6104_00000998:
    lwz r0, 0x114(r1)
    lwz r31, 0x10c(r1)
    lwz r30, 0x108(r1)
    lwz r29, 0x104(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_802B6758(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x94(r1)
    stfd f31, 0x80(r1)
    psq_st f31, 0x88(r1), 0, 0
    stw r31, 0x7c(r1)
    mr r31, r3
    lfs f31, 0x2e4(r3)
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_802B6758_00000AD0
    lwz r3, 0x1434(r31)
    li r0, 0x0
    lwz r5, 0x12a4(r31)
    lwz r4, 0x5c0(r31)
    cmpwi r3, 0x0
    oris r5, r5, 0x200
    stw r5, 0x12a4(r31)
    clrrwi r4, r4, 1
    stw r4, 0x5c0(r31)
    stw r0, 0x151c(r31)
    ble lbl_fn_802B6758_00000AB4
    subi r0, r3, 0x1
    stw r0, 0x1434(r31)
    cmpwi r0, 0x1e
    bne lbl_fn_802B6758_00000B68
    li r3, 0x0
    li r4, 0x0
    bl fn_80232B7C
    lfs f0, lbl_80884028
    li r3, -0x1
    lfs f1, lbl_80884034
    li r0, 0x1
    stfs f0, 0x1c(r1)
    addi r4, r31, 0x153c
    addi r5, r31, 0xb0
    addi r7, r1, 0x10
    stfs f0, 0x20(r1)
    addi r8, r1, 0x1c
    addi r9, r1, 0x28
    li r6, 0x0
    stfs f0, 0x24(r1)
    li r10, -0x1
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f1, 0x28(r1)
    stfs f1, 0x2c(r1)
    stfs f1, 0x30(r1)
    stfs f1, 0x34(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x1
    lwz r12, 0x9c(r12)
    mtctr r12
    bctrl
    b lbl_fn_802B6758_00000B68
lbl_fn_802B6758_00000AB4:
    ori r0, r5, 0x8000
    stw r0, 0x12a4(r31)
    mr r3, r31
    bl fn_801765D8
    mr r3, r31
    bl fn_800EE360
    b lbl_fn_802B6758_00000B68
lbl_fn_802B6758_00000AD0:
    lwz r0, 0x2dc(r31)
    li r3, 0x37
    stw r3, 0x1434(r31)
    cmpwi r0, 0x2e
    bne lbl_fn_802B6758_00000B68
    lfs f1, 0x2e4(r31)
    lfs f0, lbl_808840D4
    fcmpo cr0, f1, f0
    bge lbl_fn_802B6758_00000B68
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    lfs f2, lbl_808840D8
    addi r3, r1, 0x48
    lfs f0, lbl_80884028
    li r4, 0x79
    fdivs f1, f2, f1
    stfs f0, 0x38(r1)
    stfs f0, 0x3c(r1)
    stfs f1, 0x40(r1)
    lfs f1, 0x538(r31)
    bl fn_805F8E70
    addi r4, r1, 0x38
    addi r3, r1, 0x48
    mr r5, r4
    bl fn_805F93C0
    lfs f1, 0x528(r31)
    lfs f0, 0x38(r1)
    lfs f2, 0x52c(r31)
    fadds f0, f1, f0
    lfs f1, 0x530(r31)
    stfs f0, 0x528(r31)
    lfs f0, 0x3c(r1)
    fadds f0, f2, f0
    stfs f0, 0x52c(r31)
    lfs f0, 0x40(r1)
    fadds f0, f1, f0
    stfs f0, 0x530(r31)
lbl_fn_802B6758_00000B68:
    lwz r0, 0x94(r1)
    psq_l f31, 0x88(r1), 0, 0
    lfd f31, 0x80(r1)
    lwz r31, 0x7c(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_802B6928(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x14(r1)
    li r0, 0x7
    stw r31, 0xc(r1)
    mr r31, r3
    stw r4, 0x14e0(r3)
    li r4, 0x6
    stw r0, 0x58c(r3)
    bl fn_8016E970
    li r0, 0x4
    stw r0, 0x560(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f3, lbl_80884034
    li r0, 0x1
    lfs f0, lbl_808840DC
    li r4, 0x0
    stw r3, 0x590(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80884028
    li r5, 0x156
    stw r0, 0x3fc(r31)
    li r6, 0x0
    lfs f2, lbl_80884038
    li r7, 0x0
    stfs f3, 0x2fc(r31)
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    lwz r3, lbl_8087EE98
    bl fn_8004D124
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802B69C0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x6
    stw r0, 0x14(r1)
    li r0, 0x8
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    stw r31, 0x14e0(r3)
    stw r0, 0x58c(r3)
    bl fn_8016E970
    li r0, 0x4
    stw r0, 0x560(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f3, lbl_80884034
    li r0, 0x1
    lfs f0, lbl_80884020
    li r4, 0x0
    stw r3, 0x590(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80884028
    li r5, 0x1c7
    stw r0, 0x3fc(r30)
    li r6, 0x1
    lfs f2, lbl_80884038
    li r7, 0x0
    stfs f3, 0x2fc(r30)
    li r8, 0x1
    stfs f0, 0x2e8(r30)
    bl fn_80097C08
    stw r31, 0x14dc(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802B6A5C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x0
    stw r0, 0x14(r1)
    li r0, 0x9
    stw r31, 0xc(r1)
    mr r31, r4
    li r4, 0x6
    stw r30, 0x8(r1)
    mr r30, r3
    stw r5, 0x14e0(r3)
    stw r0, 0x58c(r3)
    bl fn_8016E970
    li r0, 0x4
    stw r0, 0x560(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80884034
    li r0, 0x1
    stw r3, 0x590(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80884028
    li r4, 0x0
    stw r0, 0x3fc(r30)
    li r5, 0x13f
    lfs f2, lbl_80884038
    li r6, 0x0
    stfs f0, 0x2fc(r30)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r30)
    bl fn_80097C08
    stw r31, 0x1514(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802B6AF8(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    li r0, 0xa
    stw r31, 0x4c(r1)
    mr r31, r4
    li r4, 0x6
    stw r30, 0x48(r1)
    mr r30, r3
    stw r29, 0x44(r1)
    stw r28, 0x40(r1)
    li r28, 0x0
    stw r28, 0x14e0(r3)
    stw r0, 0x58c(r3)
    bl fn_8016E970
    lfs f0, lbl_80884034
    li r0, 0x4
    li r29, 0x1
    stw r0, 0x560(r30)
    lfs f1, lbl_80884028
    addi r3, r30, 0xb0
    stw r29, 0x3fc(r30)
    li r4, 0x0
    lfs f2, lbl_80884038
    li r5, 0x140
    stfs f0, 0x2fc(r30)
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r30)
    bl fn_80097C08
    lwz r5, lbl_8087F3C0
    mr r3, r30
    li r4, 0x66
    stw r29, 0xc4(r5)
    lwz r5, lbl_8087F3C0
    stw r29, 0xc8(r5)
    bl fn_80232B7C
    lfs f0, lbl_80884028
    li r0, -0x1
    lfs f1, lbl_80884034
    addi r4, r30, 0x1530
    stfs f0, 0x1c(r1)
    addi r5, r30, 0xb0
    lwz r3, lbl_8087F3C0
    addi r7, r1, 0x10
    stfs f0, 0x20(r1)
    addi r8, r1, 0x1c
    addi r9, r1, 0x28
    li r6, 0x0
    stfs f0, 0x24(r1)
    li r10, -0x1
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f1, 0x28(r1)
    stfs f1, 0x2c(r1)
    stfs f1, 0x30(r1)
    stfs f1, 0x34(r1)
    stw r0, 0x8(r1)
    stw r29, 0xc(r1)
    bl fn_8023A8B4
    lwz r3, lbl_8087F3C0
    stw r28, 0xc4(r3)
    lwz r3, lbl_8087F3C0
    stw r28, 0xc8(r3)
    stw r28, 0x151c(r30)
    lwz r29, 0x1590(r30)
    bl fn_80680CF8
    divwu r0, r3, r29
    addi r4, r30, 0x15e4
    mullw r0, r0, r29
    subf r0, r0, r3
    slwi r0, r0, 2
    add r3, r30, r0
    lwz r3, 0x1594(r3)
    psq_l f1, 0x4(r3), 0, 0
    lfs f2, 0xc(r3)
    stfs f2, 0x15ec(r30)
    psq_st f1, 0x0(r4), 0, 0
    stw r28, 0x15f4(r30)
    stw r31, 0x15f0(r30)
    stw r28, 0x1518(r30)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    lwz r28, 0x40(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_802B6C64(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x124(r1)
    li r0, 0x10
    stfd f31, 0x110(r1)
    psq_st f31, 0x118(r1), 0, 0
    stfd f30, 0x100(r1)
    psq_st f30, 0x108(r1), 0, 0
    stw r31, 0xfc(r1)
    stw r30, 0xf8(r1)
    stw r29, 0xf4(r1)
    mr r29, r3
    stw r4, 0x14e0(r3)
    li r4, 0x6
    stw r0, 0x58c(r3)
    bl fn_8016E970
    li r0, 0x4
    stw r0, 0x560(r29)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r29)
    addi r30, r1, 0x20
    lwz r6, 0x14d4(r29)
    addi r4, r1, 0x74
    lfs f0, 0x530(r29)
    addi r5, r1, 0x8
    lfs f2, 0x530(r6)
    mr r3, r30
    psq_l f1, 0x528(r6), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    fsubs f6, f2, f0
    lfs f4, 0x52c(r29)
    mr r4, r30
    lfs f5, 0x78(r1)
    lfs f3, 0x74(r1)
    lfs f0, 0x528(r29)
    fsubs f4, f5, f4
    stfs f2, 0x7c(r1)
    fmr f2, f6
    fsubs f0, f3, f0
    stfs f4, 0xc(r1)
    stfs f0, 0x8(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f6, 0x10(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x28(r1)
    bl fn_805F98D0
    lfs f2, 0x28(r1)
    addi r31, r1, 0x14
    psq_l f1, 0x0(r30), 0, 0
    fabs f3, f2
    lfs f0, lbl_80884074
    psq_st f1, 0x0(r31), 0, 0
    frsp f3, f3
    stfs f2, 0x1c(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_802B6C64_00000FCC
    lfs f3, 0x14(r1)
    lfs f0, lbl_80884028
    fcmpo cr0, f3, f0
    ble lbl_fn_802B6C64_00000FC0
    lfs f0, lbl_80884078
    b lbl_fn_802B6C64_00000FC4
lbl_fn_802B6C64_00000FC0:
    lfs f0, lbl_8088407C
lbl_fn_802B6C64_00000FC4:
    stfs f0, 0x30(r1)
    b lbl_fn_802B6C64_00000FE0
lbl_fn_802B6C64_00000FCC:
    frsp f2, f2
    lfs f1, 0x14(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x30(r1)
lbl_fn_802B6C64_00000FE0:
    lfs f0, 0x30(r1)
    addi r3, r1, 0xc0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80884028
    addi r4, r1, 0x38
    lfs f4, 0xc8(r1)
    mr r5, r4
    lfs f5, 0xc4(r1)
    addi r3, r1, 0x80
    lfs f6, 0xc0(r1)
    lfs f7, 0xd8(r1)
    lfs f8, 0xd4(r1)
    lfs f9, 0xd0(r1)
    lfs f10, 0xe8(r1)
    lfs f11, 0xe4(r1)
    lfs f12, 0xe0(r1)
    lfs f13, 0xec(r1)
    lfs f31, 0xdc(r1)
    lfs f30, 0xcc(r1)
    lfs f0, lbl_80884034
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x1c(r1)
    stfs f3, 0xb0(r1)
    stfs f3, 0xb4(r1)
    stfs f3, 0xb8(r1)
    stfs f0, 0xbc(r1)
    stfs f6, 0x68(r1)
    stfs f5, 0x6c(r1)
    stfs f4, 0x70(r1)
    stfs f6, 0x80(r1)
    stfs f5, 0x84(r1)
    stfs f4, 0x88(r1)
    stfs f9, 0x5c(r1)
    stfs f8, 0x60(r1)
    stfs f7, 0x64(r1)
    stfs f9, 0x90(r1)
    stfs f8, 0x94(r1)
    stfs f7, 0x98(r1)
    stfs f12, 0x50(r1)
    stfs f11, 0x54(r1)
    stfs f10, 0x58(r1)
    stfs f12, 0xa0(r1)
    stfs f11, 0xa4(r1)
    stfs f10, 0xa8(r1)
    stfs f30, 0x44(r1)
    stfs f31, 0x48(r1)
    stfs f13, 0x4c(r1)
    stfs f30, 0x8c(r1)
    stfs f31, 0x9c(r1)
    stfs f13, 0xac(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80884074
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802B6C64_000010FC
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80884028
    fcmpo cr0, f3, f0
    ble lbl_fn_802B6C64_000010EC
    lfs f0, lbl_80884078
    b lbl_fn_802B6C64_000010F0
lbl_fn_802B6C64_000010EC:
    lfs f0, lbl_8088407C
lbl_fn_802B6C64_000010F0:
    fneg f0, f0
    stfs f0, 0x2c(r1)
    b lbl_fn_802B6C64_00001110
lbl_fn_802B6C64_000010FC:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x2c(r1)
lbl_fn_802B6C64_00001110:
    addi r3, r1, 0x2c
    lfs f2, lbl_80884028
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_807465C8@ha
    psq_st f1, 0x0(r31), 0, 0
    lfs f0, 0x538(r29)
    lfs f3, 0x18(r1)
    stfs f2, 0x1c(r1)
    fsubs f3, f3, f0
    lfs f0, lbl_80884080
    stfs f2, 0x34(r1)
    lfd f2, lbl_807465C8@l(r3)
    fmuls f1, f0, f3
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_80884084
    fcmpo cr0, f3, f0
    ble lbl_fn_802B6C64_00001160
    lfs f0, lbl_80884088
    fsubs f3, f3, f0
lbl_fn_802B6C64_00001160:
    lfs f0, lbl_8088408C
    fcmpo cr0, f3, f0
    bge lbl_fn_802B6C64_00001174
    lfs f0, lbl_80884088
    fadds f3, f3, f0
lbl_fn_802B6C64_00001174:
    lfs f0, lbl_80884028
    fcmpo cr0, f3, f0
    bge lbl_fn_802B6C64_0000119C
    fneg f3, f3
    lfs f0, lbl_80884020
    li r0, 0x0
    stw r0, 0x1600(r29)
    fmuls f0, f3, f0
    stfs f0, 0x15fc(r29)
    b lbl_fn_802B6C64_000011B0
lbl_fn_802B6C64_0000119C:
    lfs f0, lbl_80884020
    li r0, 0x1
    stw r0, 0x1600(r29)
    fmuls f0, f3, f0
    stfs f0, 0x15fc(r29)
lbl_fn_802B6C64_000011B0:
    lwz r0, 0x124(r1)
    psq_l f31, 0x118(r1), 0, 0
    lfd f31, 0x110(r1)
    psq_l f30, 0x108(r1), 0, 0
    lfd f30, 0x100(r1)
    lwz r31, 0xfc(r1)
    lwz r30, 0xf8(r1)
    lwz r29, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_802B6F80(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stfd f31, 0x60(r1)
    psq_st f31, 0x68(r1), 0, 0
    stfd f30, 0x50(r1)
    psq_st f30, 0x58(r1), 0, 0
    stw r31, 0x4c(r1)
    mr r31, r3
    lwz r3, 0x14d4(r3)
    bl fn_8013C38C
    mr r4, r3
    addi r3, r1, 0x2c
    bl fn_8001047C
    addi r3, r1, 0x20
    addi r4, r1, 0x2c
    addi r5, r31, 0x528
    bl fn_80013338
    addi r3, r1, 0x20
    bl fn_8000D3A4
    fmr f30, f1
    mr r3, r31
    bl fn_8012A1B8
    lfs f31, 0x4(r3)
    addi r3, r1, 0x8
    addi r4, r1, 0x20
    bl fn_800F7FD8
    addi r3, r1, 0x14
    addi r4, r1, 0x8
    bl fn_80011034
    lfs f0, 0x18(r1)
    fsubs f1, f0, f31
    bl fn_802A7964
    bl fn_802A7910
    lfs f0, lbl_808840E0
    li r3, 0x0
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_802B6F80_0000128C
    lfs f0, lbl_808840E4
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_802B6F80_0000128C
    li r3, 0x1
lbl_fn_802B6F80_0000128C:
    lwz r0, 0x1510(r31)
    cmpwi r0, 0x1
    beq lbl_fn_802B6F80_000012B4
    cmpwi r0, 0x2
    beq lbl_fn_802B6F80_000012EC
    cmpwi r0, 0x4
    beq lbl_fn_802B6F80_00001324
    cmpwi r0, 0x3
    beq lbl_fn_802B6F80_00001334
    b lbl_fn_802B6F80_00001468
lbl_fn_802B6F80_000012B4:
    lfs f0, lbl_808840B8
    fcmpo cr0, f30, f0
    bge lbl_fn_802B6F80_00001468
    cmpwi r3, 0x0
    beq lbl_fn_802B6F80_000012E0
    mr r3, r31
    bl fn_802B6928
    lwz r3, 0x14e8(r31)
    addi r0, r3, 0x1
    stw r0, 0x14e8(r31)
    b lbl_fn_802B6F80_00001468
lbl_fn_802B6F80_000012E0:
    mr r3, r31
    bl fn_802B6C64
    b lbl_fn_802B6F80_00001468
lbl_fn_802B6F80_000012EC:
    lfs f0, lbl_808840D4
    fcmpo cr0, f30, f0
    bge lbl_fn_802B6F80_00001468
    cmpwi r3, 0x0
    beq lbl_fn_802B6F80_00001318
    mr r3, r31
    bl fn_802B69C0
    lwz r3, 0x14e8(r31)
    addi r0, r3, 0x1
    stw r0, 0x14e8(r31)
    b lbl_fn_802B6F80_00001468
lbl_fn_802B6F80_00001318:
    mr r3, r31
    bl fn_802B6C64
    b lbl_fn_802B6F80_00001468
lbl_fn_802B6F80_00001324:
    mr r3, r31
    li r4, 0x1
    bl fn_802B6A5C
    b lbl_fn_802B6F80_00001468
lbl_fn_802B6F80_00001334:
    lwz r3, 0x1504(r31)
    addi r0, r3, 0x1
    stw r0, 0x1504(r31)
    cmpwi r0, 0x3
    bge lbl_fn_802B6F80_00001358
    mr r3, r31
    li r4, 0x0
    bl fn_802B6A5C
    b lbl_fn_802B6F80_00001468
lbl_fn_802B6F80_00001358:
    lwz r3, 0x940(r31)
    lis r0, 0x4330
    lis r4, lbl_807465C0@ha
    stw r0, 0x38(r1)
    xoris r3, r3, 0x8000
    lfd f3, lbl_807465C0@l(r4)
    stw r3, 0x3c(r1)
    lwz r5, 0x14fc(r31)
    lfd f2, 0x38(r1)
    addi r3, r5, 0x1
    lfs f1, 0x7d8(r31)
    fsubs f2, f2, f3
    lfs f0, lbl_80884044
    stw r3, 0x14fc(r31)
    fdivs f1, f1, f2
    fcmpo cr0, f1, f0
    bge lbl_fn_802B6F80_000013D4
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    subf. r0, r4, r0
    bne lbl_fn_802B6F80_000013C4
    mr r3, r31
    li r4, 0x4
    bl fn_802B6A5C
    b lbl_fn_802B6F80_00001468
lbl_fn_802B6F80_000013C4:
    mr r3, r31
    li r4, 0x5
    bl fn_802B6A5C
    b lbl_fn_802B6F80_00001468
lbl_fn_802B6F80_000013D4:
    lwz r0, 0x1518(r31)
    cmpwi r0, 0x0
    beq lbl_fn_802B6F80_000013F4
    cmpwi r0, 0x1
    beq lbl_fn_802B6F80_0000140C
    cmpwi r0, 0x2
    beq lbl_fn_802B6F80_0000143C
    b lbl_fn_802B6F80_00001468
lbl_fn_802B6F80_000013F4:
    mr r3, r31
    li r4, 0x2
    bl fn_802B6A5C
    li r0, 0x0
    stw r0, 0x14fc(r31)
    b lbl_fn_802B6F80_00001468
lbl_fn_802B6F80_0000140C:
    cmpwi r3, 0x3
    bge lbl_fn_802B6F80_00001424
    mr r3, r31
    li r4, 0x2
    bl fn_802B6A5C
    b lbl_fn_802B6F80_00001468
lbl_fn_802B6F80_00001424:
    mr r3, r31
    li r4, 0x3
    bl fn_802B6A5C
    li r0, 0x0
    stw r0, 0x14fc(r31)
    b lbl_fn_802B6F80_00001468
lbl_fn_802B6F80_0000143C:
    cmpwi r3, 0x3
    bge lbl_fn_802B6F80_00001454
    mr r3, r31
    li r4, 0x3
    bl fn_802B6A5C
    b lbl_fn_802B6F80_00001468
lbl_fn_802B6F80_00001454:
    mr r3, r31
    li r4, 0x2
    bl fn_802B6A5C
    li r0, 0x0
    stw r0, 0x14fc(r31)
lbl_fn_802B6F80_00001468:
    lwz r0, 0x74(r1)
    psq_l f31, 0x68(r1), 0, 0
    lfd f31, 0x60(r1)
    psq_l f30, 0x58(r1), 0, 0
    lfd f30, 0x50(r1)
    lwz r31, 0x4c(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_802B7230(void)
{
    nofralloc
    lwz r0, 0x58c(r3)
    stw r0, 0x0(r4)
    lwz r0, 0x14bc(r3)
    stw r0, 0x4(r4)
    lwz r0, 0x1518(r3)
    sth r0, 0x8(r4)
    lwz r0, 0x151c(r3)
    sth r0, 0xa(r4)
    lwz r0, 0x1608(r3)
    sth r0, 0xc(r4)
    blr
}

asm void fn_802B725C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    lwz r0, 0x0(r4)
    stw r31, 0x1c(r1)
    cmpwi r0, 0x11
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r30, 0x1518(r3)
    bne lbl_fn_802B725C_000015B8
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x11
    beq lbl_fn_802B725C_000015B8
    li r0, 0x0
    stw r0, 0x14e0(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x48(r12)
    mtctr r12
    bctrl
    mr r3, r28
    bl fn_80178A6C
    mr r3, r28
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    bl fn_8015495C
    mr r3, r28
    bl fn_8016DA4C
    lfs f0, lbl_80884034
    li r0, 0x11
    li r31, 0x1
    stw r0, 0x58c(r28)
    lfs f1, lbl_80884028
    addi r3, r28, 0xb0
    stw r31, 0x3fc(r28)
    li r4, 0x0
    lfs f2, lbl_80884038
    li r5, 0x2e
    stfs f0, 0x2fc(r28)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r28)
    bl fn_80097C08
    lwz r3, lbl_8087F3C0
    mr r4, r28
    li r5, 0x65
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r28
    li r5, 0x66
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r28
    li r5, 0x67
    li r6, 0x0
    bl fn_80239DAC
    stw r31, 0x151c(r28)
lbl_fn_802B725C_000015B8:
    lwz r0, 0x1608(r28)
    cmpwi r0, 0x0
    bne lbl_fn_802B725C_000015F4
    lha r0, 0xc(r29)
    cmpwi r0, 0x0
    beq lbl_fn_802B725C_000015F4
    lwz r3, lbl_8087F448
    cmpwi r3, 0x0
    beq lbl_fn_802B725C_000015F4
    lfs f1, lbl_80884034
    li r4, 0x8b8
    li r5, 0xf
    li r6, 0x1
    li r7, 0x0
    bl fn_8037D4C0
lbl_fn_802B725C_000015F4:
    lha r4, 0x8(r29)
    lwz r6, 0x0(r29)
    lwz r5, 0x4(r29)
    cmpw r30, r4
    lha r3, 0xa(r29)
    lha r0, 0xc(r29)
    stw r6, 0x58c(r28)
    stw r5, 0x14bc(r28)
    stw r4, 0x1518(r28)
    stw r3, 0x151c(r28)
    stw r0, 0x1608(r28)
    beq lbl_fn_802B725C_00001638
    lwz r3, lbl_8087F610
    cmpwi r3, 0x0
    beq lbl_fn_802B725C_00001638
    li r4, 0x3
    bl fn_804DA490
lbl_fn_802B725C_00001638:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_802B73FC(void)
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
    beq lbl_fn_802B73FC_00001778
    addic. r0, r3, 0x1858
    beq lbl_fn_802B73FC_000016A4
    lwz r4, 0x1858(r3)
    cmpwi r4, 0x0
    beq lbl_fn_802B73FC_000016A4
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_802B73FC_000016A4
    bl fn_800897D8
lbl_fn_802B73FC_000016A4:
    addic. r3, r29, 0x1850
    beq lbl_fn_802B73FC_000016B4
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802B73FC_000016B4:
    addic. r3, r29, 0x17f8
    beq lbl_fn_802B73FC_000016C4
    li r4, 0x0
    bl fn_80056E40
lbl_fn_802B73FC_000016C4:
    addic. r3, r29, 0x17a0
    beq lbl_fn_802B73FC_000016D4
    li r4, 0x0
    bl fn_80056E40
lbl_fn_802B73FC_000016D4:
    addic. r3, r29, 0x1748
    beq lbl_fn_802B73FC_000016E4
    li r4, 0x0
    bl fn_80056E40
lbl_fn_802B73FC_000016E4:
    addic. r3, r29, 0x16f0
    beq lbl_fn_802B73FC_000016F4
    li r4, 0x0
    bl fn_80056E40
lbl_fn_802B73FC_000016F4:
    addic. r3, r29, 0x1698
    beq lbl_fn_802B73FC_00001704
    li r4, 0x0
    bl fn_80056E40
lbl_fn_802B73FC_00001704:
    addi r3, r29, 0x1548
    li r4, -0x1
    bl fn_800CB3A0
    addic. r31, r29, 0x153c
    beq lbl_fn_802B73FC_00001730
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_802B73FC_00001730
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802B73FC_00001730:
    addic. r31, r29, 0x1530
    beq lbl_fn_802B73FC_00001750
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_802B73FC_00001750
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802B73FC_00001750:
    addi r3, r29, 0x1524
    li r4, -0x1
    bl fn_802375C4
    mr r3, r29
    li r4, 0x0
    bl fn_805A3D00
    cmpwi r30, 0x0
    ble lbl_fn_802B73FC_00001778
    mr r3, r29
    bl dtor_80084684
lbl_fn_802B73FC_00001778:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_802B753C(void)
{
    nofralloc
    lis r3, lbl_807860A0@ha
    stwu r1, -0x130(r1)
    lfs f5, lbl_80884034
    addi r3, r3, lbl_807860A0@l
    lfs f3, lbl_808840EC
    lfs f4, lbl_808840E8
    lfs f2, lbl_808840F0
    lfs f0, lbl_808840F8
    lfs f1, lbl_808840F4
    stfs f5, 0x118(r1)
    stfs f5, 0x11c(r1)
    stfs f5, 0x120(r1)
    stfs f5, 0x124(r1)
    stfs f5, 0x4(r3)
    stfs f5, 0x8(r3)
    stfs f5, 0xc(r3)
    stfs f5, 0x10(r3)
    stfs f4, 0x108(r1)
    stfs f3, 0x10c(r1)
    stfs f3, 0x110(r1)
    stfs f5, 0x114(r1)
    stfs f4, 0x14(r3)
    stfs f3, 0x18(r3)
    stfs f3, 0x1c(r3)
    stfs f5, 0x20(r3)
    stfs f2, 0xf8(r1)
    stfs f1, 0xfc(r1)
    stfs f5, 0x100(r1)
    stfs f5, 0x104(r1)
    stfs f2, 0x24(r3)
    stfs f1, 0x28(r3)
    stfs f5, 0x2c(r3)
    stfs f5, 0x30(r3)
    stfs f5, 0xe8(r1)
    stfs f5, 0xec(r1)
    stfs f5, 0xf0(r1)
    stfs f5, 0xf4(r1)
    stfs f5, 0x38(r3)
    stfs f5, 0x3c(r3)
    stfs f5, 0x40(r3)
    stfs f5, 0x44(r3)
    stfs f4, 0xd8(r1)
    stfs f3, 0xdc(r1)
    stfs f3, 0xe0(r1)
    stfs f5, 0xe4(r1)
    stfs f4, 0x48(r3)
    stfs f3, 0x4c(r3)
    stfs f3, 0x50(r3)
    stfs f5, 0x54(r3)
    stfs f2, 0xc8(r1)
    stfs f1, 0xcc(r1)
    stfs f5, 0xd0(r1)
    stfs f5, 0xd4(r1)
    stfs f2, 0x58(r3)
    stfs f1, 0x5c(r3)
    stfs f5, 0x60(r3)
    stfs f5, 0x64(r3)
    stfs f0, 0xb8(r1)
    stfs f0, 0xbc(r1)
    stfs f0, 0xc0(r1)
    stfs f5, 0xc4(r1)
    stfs f0, 0x6c(r3)
    stfs f0, 0x70(r3)
    stfs f0, 0x74(r3)
    stfs f5, 0x78(r3)
    stfs f4, 0xa8(r1)
    stfs f3, 0xac(r1)
    stfs f3, 0xb0(r1)
    stfs f5, 0xb4(r1)
    stfs f4, 0x7c(r3)
    stfs f3, 0x80(r3)
    stfs f3, 0x84(r3)
    stfs f5, 0x88(r3)
    stfs f2, 0x98(r1)
    stfs f1, 0x9c(r1)
    stfs f5, 0xa0(r1)
    stfs f5, 0xa4(r1)
    stfs f2, 0x8c(r3)
    lfs f0, lbl_80884020
    stfs f1, 0x90(r3)
    stfs f5, 0x94(r3)
    stfs f5, 0x98(r3)
    stfs f5, 0x88(r1)
    stfs f5, 0x8c(r1)
    stfs f5, 0x90(r1)
    stfs f5, 0x94(r1)
    stfs f5, 0xa0(r3)
    stfs f5, 0xa4(r3)
    stfs f5, 0xa8(r3)
    stfs f5, 0xac(r3)
    stfs f4, 0x78(r1)
    stfs f3, 0x7c(r1)
    stfs f3, 0x80(r1)
    stfs f5, 0x84(r1)
    stfs f4, 0xb0(r3)
    stfs f3, 0xb4(r3)
    stfs f3, 0xb8(r3)
    stfs f5, 0xbc(r3)
    stfs f2, 0x68(r1)
    stfs f1, 0x6c(r1)
    stfs f5, 0x70(r1)
    stfs f5, 0x74(r1)
    stfs f2, 0xc0(r3)
    stfs f1, 0xc4(r3)
    stfs f5, 0xc8(r3)
    stfs f5, 0xcc(r3)
    stfs f5, 0x58(r1)
    stfs f5, 0x5c(r1)
    stfs f5, 0x60(r1)
    stfs f5, 0x64(r1)
    stfs f5, 0xd4(r3)
    stfs f5, 0xd8(r3)
    stfs f5, 0xdc(r3)
    stfs f5, 0xe0(r3)
    stfs f0, 0x48(r1)
    stfs f0, 0x4c(r1)
    stfs f0, 0x50(r1)
    stfs f5, 0x54(r1)
    stfs f0, 0xe4(r3)
    stfs f0, 0xe8(r3)
    stfs f0, 0xec(r3)
    stfs f5, 0xf0(r3)
    stfs f0, 0x38(r1)
    stfs f0, 0x3c(r1)
    stfs f0, 0x40(r1)
    stfs f5, 0x44(r1)
    stfs f0, 0xf4(r3)
    stfs f0, 0xf8(r3)
    stfs f0, 0xfc(r3)
    stfs f5, 0x100(r3)
    stfs f5, 0x28(r1)
    stfs f5, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f5, 0x34(r1)
    stfs f5, 0x108(r3)
    stfs f5, 0x10c(r3)
    stfs f5, 0x110(r3)
    stfs f5, 0x114(r3)
    stfs f1, 0x18(r1)
    stfs f3, 0x1c(r1)
    stfs f3, 0x20(r1)
    stfs f5, 0x24(r1)
    stfs f1, 0x118(r3)
    stfs f3, 0x11c(r3)
    stfs f3, 0x120(r3)
    stfs f5, 0x124(r3)
    stfs f2, 0x8(r1)
    stfs f1, 0xc(r1)
    stfs f5, 0x10(r1)
    stfs f5, 0x14(r1)
    stfs f2, 0x128(r3)
    stfs f1, 0x12c(r3)
    stfs f5, 0x130(r3)
    stfs f5, 0x134(r3)
    addi r1, r1, 0x130
    blr
}
