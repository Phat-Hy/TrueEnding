#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_26(void);
extern void _savegpr_26(void);
extern void dtor_80013D60(void);
extern void dtor_80084684(void);
extern void fn_8003E4A4(void);
extern void fn_8004212C(void);
extern void fn_80057A64(void);
extern void fn_80059468(void);
extern void fn_8006AFF8(void);
extern void fn_8006CA80(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_80087994(void);
extern void fn_8008937C(void);
extern void fn_800897D8(void);
extern void fn_8008BBD8(void);
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_800EC254(void);
extern void fn_800EC2C4(void);
extern void fn_800EC440(void);
extern void fn_800EC534(void);
extern void fn_800EC5BC(void);
extern void fn_800EC654(void);
extern void fn_800ED42C(void);
extern void fn_800ED4D8(void);
extern void fn_800ED4E0(void);
extern void fn_800EDFE8(void);
extern void fn_800F8548(void);
extern void fn_800FAB80(void);
extern void fn_80108F38(void);
extern void fn_8013655C(void);
extern void fn_80145334(void);
extern void fn_80148990(void);
extern void fn_8014C540(void);
extern void fn_80151448(void);
extern void fn_8016E970(void);
extern void fn_801CB100(void);
extern void fn_801CB130(void);
extern void fn_801CB434(void);
extern void fn_8020A780(void);
extern void fn_80219E6C(void);
extern void fn_8021A984(void);
extern void fn_80232B7C(void);
extern void fn_802375C4(void);
extern void fn_802377B8(void);
extern void fn_8023780C(void);
extern void fn_80237874(void);
extern void fn_8023A8B4(void);
extern void fn_802AC550(void);
extern void fn_802BDA04(void);
extern void fn_80370AE4(void);
extern void fn_80473F50(void);
extern void fn_80599C94(void);
extern void fn_805A3C58(void);
extern void fn_805A3D00(void);
extern void fn_805A5224(void);
extern void fn_805F9940(void);
extern void fn_80680770(void);
extern void fn_80682544(void);
extern void fn_80686EA4(void);
extern void fn_80695720(void);
extern void fn_806958E0(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 lbl_8074681C[];
extern u8 lbl_80746B20[];
extern u8 lbl_8078249C[];
extern u8 lbl_807863A8[];
extern u8 lbl_80786568[];
extern u8 lbl_807C7030[];
extern u8 lbl_807C7C90[];

/* Small data declarations */
extern u32 lbl_8087D9E0;
extern u32 lbl_8087D9E4;
extern u32 lbl_8087EF10;
extern u32 lbl_8087F048;
extern u32 lbl_8087F119;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F8A0;
extern u32 lbl_8087F9E8;
extern u32 lbl_80884100;
extern u32 lbl_8088411C;
extern u32 lbl_80884120;
extern u32 lbl_80884128;
extern u32 lbl_80884168;
extern u32 lbl_8088416C;
extern u32 lbl_80884170;
extern u32 lbl_80884174;
extern u32 lbl_8088417C;
extern u32 lbl_80884180;
extern u32 lbl_80884184;
extern u32 lbl_80884188;
extern u32 lbl_8088418C;
extern u32 lbl_80884190;
extern u32 lbl_80884194;
extern u32 lbl_80884198;
extern u32 lbl_8088419C;

/* Function declarations */
void fn_802B98A8(void);
void fn_802B98B0(void);
void fn_802B9BC8(void);
void fn_802B9C5C(void);
void fn_802B9DB4(void);
void fn_802BA5E0(void);
void fn_802BA64C(void);
void fn_802BA67C(void);
void fn_802BA898(void);
void fn_802BA92C(void);
void fn_802BABC0(void);
void fn_802BABCC(void);
void fn_802BADB0(void);
void fn_802BAFAC(void);
void fn_802BB104(void);

asm void fn_802B98A8(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    blr
}

asm void fn_802B98B0(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    lis r4, lbl_8074681C@ha
    stw r0, 0x94(r1)
    addi r4, r4, lbl_8074681C@l
    addi r5, r1, 0x74
    stw r31, 0x8c(r1)
    mr r31, r3
    addi r4, r4, 0xe3
    stw r30, 0x88(r1)
    lfs f2, 0x530(r3)
    psq_l f1, 0x528(r3), 0, 0
    addi r3, r3, 0xb0
    psq_st f1, 0x0(r5), 0, 0
    li r5, 0x0
    stfs f2, 0x7c(r1)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802B98B0_0000005C
    li r5, 0x0
    b lbl_fn_802B98B0_00000068
lbl_fn_802B98B0_0000005C:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r5, r3, r0
lbl_fn_802B98B0_00000068:
    cmpwi r5, 0x0
    beq lbl_fn_802B98B0_0000009C
    lfs f0, 0x1c(r5)
    addi r4, r1, 0x50
    lfs f3, 0xc(r5)
    addi r3, r1, 0x74
    stfs f3, 0x50(r1)
    lfs f2, 0x2c(r5)
    stfs f0, 0x54(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0x58(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x7c(r1)
lbl_fn_802B98B0_0000009C:
    lfs f5, 0x78(r1)
    addi r3, r1, 0x44
    lfs f4, 0x5a8(r31)
    addi r4, r1, 0x68
    lfs f3, 0x74(r1)
    fadds f5, f5, f4
    lfs f0, 0x5a4(r31)
    lfs f4, 0x5b0(r31)
    fadds f0, f3, f0
    stfs f5, 0x48(r1)
    lfs f3, 0x7c(r1)
    stfs f0, 0x44(r1)
    lfs f0, 0x5ac(r31)
    psq_l f1, 0x0(r3), 0, 0
    fadds f3, f3, f0
    psq_st f1, 0x614(r31), 0, 0
    lwz r0, 0x58c(r31)
    lfs f0, 0x618(r31)
    fmr f2, f3
    cmpwi r0, 0x9
    fadds f0, f0, f4
    stfs f4, 0x620(r31)
    stfs f0, 0x618(r31)
    stfs f2, 0x61c(r31)
    frsp f2, f2
    psq_l f1, 0x614(r31), 0, 0
    stfs f3, 0x4c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x70(r1)
    bne lbl_fn_802B98B0_00000218
    lwz r0, 0x14bc(r31)
    cmpwi r0, 0x2
    blt lbl_fn_802B98B0_00000218
    lis r4, lbl_8074681C@ha
    addi r3, r31, 0xb0
    addi r4, r4, lbl_8074681C@l
    li r5, 0x0
    addi r4, r4, 0xed
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802B98B0_00000148
    li r30, 0x0
    b lbl_fn_802B98B0_00000154
lbl_fn_802B98B0_00000148:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r30, r3, r0
lbl_fn_802B98B0_00000154:
    lis r4, lbl_8074681C@ha
    addi r3, r31, 0xb0
    addi r4, r4, lbl_8074681C@l
    li r5, 0x0
    addi r4, r4, 0xf6
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802B98B0_0000017C
    li r5, 0x0
    b lbl_fn_802B98B0_00000188
lbl_fn_802B98B0_0000017C:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r5, r3, r0
lbl_fn_802B98B0_00000188:
    cmpwi r30, 0x0
    beq lbl_fn_802B98B0_00000218
    cmpwi r5, 0x0
    beq lbl_fn_802B98B0_00000218
    lfs f7, 0x1c(r5)
    addi r4, r1, 0x38
    lfs f4, 0x1c(r30)
    addi r3, r1, 0x68
    lfs f8, 0xc(r5)
    lfs f5, 0xc(r30)
    fadds f10, f4, f7
    lfs f13, lbl_80884128
    fadds f11, f5, f8
    lfs f6, 0x2c(r5)
    lfs f3, 0x2c(r30)
    fmuls f12, f10, f13
    stfs f8, 0x14(r1)
    fadds f9, f3, f6
    fmuls f8, f11, f13
    stfs f12, 0x3c(r1)
    lfs f0, 0x618(r31)
    fmuls f2, f9, f13
    stfs f8, 0x38(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f7, 0x18(r1)
    stfs f6, 0x1c(r1)
    stfs f5, 0x20(r1)
    stfs f4, 0x24(r1)
    stfs f3, 0x28(r1)
    stfs f11, 0x2c(r1)
    stfs f10, 0x30(r1)
    stfs f9, 0x34(r1)
    stfs f2, 0x40(r1)
    stfs f2, 0x70(r1)
    stfs f0, 0x6c(r1)
lbl_fn_802B98B0_00000218:
    lis r4, lbl_8074681C@ha
    addi r3, r31, 0xb0
    addi r4, r4, lbl_8074681C@l
    li r5, 0x0
    addi r4, r4, 0x100
    bl fn_80092814
    cmpwi r3, -0x1
    ble lbl_fn_802B98B0_00000284
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    addi r5, r1, 0x8
    lfs f0, lbl_8088411C
    addi r4, r1, 0x5c
    add r3, r3, r0
    lfs f3, 0x1c(r3)
    lfs f4, 0xc(r3)
    stfs f4, 0x8(r1)
    lfs f2, 0x2c(r3)
    stfs f3, 0xc(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lfs f3, 0x60(r1)
    stfs f2, 0x10(r1)
    fsubs f0, f3, f0
    stfs f2, 0x64(r1)
    stfs f0, 0x60(r1)
    b lbl_fn_802B98B0_000002B8
lbl_fn_802B98B0_00000284:
    addi r4, r1, 0x68
    lfs f2, 0x70(r1)
    addi r3, r1, 0x5c
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lfs f5, lbl_80884168
    lfs f4, 0x620(r31)
    lfs f3, 0x5b4(r31)
    lfs f0, 0x60(r1)
    fnmsubs f3, f5, f4, f3
    stfs f2, 0x64(r1)
    fadds f0, f0, f3
    stfs f0, 0x60(r1)
lbl_fn_802B98B0_000002B8:
    lfs f3, 0x60(r1)
    addi r4, r1, 0x68
    lfs f0, 0x6c(r1)
    addi r3, r1, 0x5c
    lfs f4, 0x620(r31)
    fsubs f3, f3, f0
    lfs f0, lbl_80884168
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x70(r1)
    fmadds f3, f0, f4, f3
    lfs f0, lbl_8088416C
    psq_st f1, 0x5f4(r31), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    fmuls f0, f0, f3
    stfs f2, 0x5fc(r31)
    lfs f2, 0x64(r1)
    psq_st f1, 0x600(r31), 0, 0
    stfs f2, 0x608(r31)
    stfs f4, 0x60c(r31)
    stfs f0, 0x1420(r31)
    lwz r31, 0x8c(r1)
    lwz r30, 0x88(r1)
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_802B9BC8(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    lis r6, lbl_8074681C@ha
    stw r0, 0x114(r1)
    addi r6, r6, lbl_8074681C@l
    stw r31, 0x10c(r1)
    mr r31, r4
    addi r4, r6, 0x105
    stw r30, 0x108(r1)
    mr r30, r3
    lwz r5, 0x58(r3)
    addi r3, r1, 0x8
    crclr 6
    bl sprintf
    lwz r0, 0x1508(r30)
    cmpwi r0, 0x0
    bne lbl_fn_802B9BC8_00000390
    cmpwi r31, 0x0
    beq lbl_fn_802B9BC8_00000390
    lwz r0, lbl_8087EF10
    cmpwi r0, 0x0
    beq lbl_fn_802B9BC8_00000390
    mr r3, r31
    addi r4, r1, 0x8
    bl fn_8008937C
    stw r3, 0x1508(r30)
    mr r4, r3
    b lbl_fn_802B9BC8_00000394
lbl_fn_802B9BC8_00000390:
    li r4, 0x0
lbl_fn_802B9BC8_00000394:
    mr r3, r30
    bl fn_805A5224
    lwz r0, 0x114(r1)
    lwz r31, 0x10c(r1)
    lwz r30, 0x108(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_802B9C5C(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    li r0, 0x0
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    stfd f30, 0x30(r1)
    psq_st f30, 0x38(r1), 0, 0
    lfs f30, lbl_80884170
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    stw r28, 0x20(r1)
    mr r28, r3
    stw r0, 0x14f8(r3)
    lwz r0, lbl_8087F9E8
    cmpwi r0, 0x0
    beq lbl_fn_802B9C5C_000004DC
    lfs f31, lbl_80884120
    li r29, 0x0
    li r30, 0x0
lbl_fn_802B9C5C_00000408:
    cmplwi r29, 0x20
    lwz r0, lbl_8087F9E8
    blt lbl_fn_802B9C5C_0000041C
    li r31, 0x0
    b lbl_fn_802B9C5C_00000424
lbl_fn_802B9C5C_0000041C:
    add r3, r0, r30
    addi r31, r3, 0x48
lbl_fn_802B9C5C_00000424:
    cmpwi r31, 0x0
    beq lbl_fn_802B9C5C_000004CC
    lwz r3, 0x4(r31)
    li r4, 0x0
    cmpwi r3, 0x0
    beq lbl_fn_802B9C5C_0000044C
    lwz r0, 0x0(r31)
    cmpwi r0, 0x3
    beq lbl_fn_802B9C5C_0000044C
    li r4, 0x1
lbl_fn_802B9C5C_0000044C:
    cmpwi r4, 0x0
    beq lbl_fn_802B9C5C_000004CC
    bl fn_8021A984
    cmpwi r3, 0x0
    beq lbl_fn_802B9C5C_000004CC
    mr r3, r31
    mr r4, r28
    bl fn_80599C94
    cmpwi r3, 0x0
    beq lbl_fn_802B9C5C_000004CC
    lfs f1, 0x18(r31)
    addi r3, r1, 0x8
    lfs f0, 0x530(r28)
    lfs f3, 0x14(r31)
    fsubs f4, f1, f0
    lfs f2, 0x52c(r28)
    lfs f1, 0x10(r31)
    lfs f0, 0x528(r28)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f4, 0x10(r1)
    bl fn_805F9940
    lfs f2, 0x5c(r31)
    lfs f0, 0x28(r31)
    fmuls f0, f2, f0
    fnmsubs f0, f31, f0, f1
    fcmpo cr0, f0, f30
    bge lbl_fn_802B9C5C_000004CC
    stw r31, 0x14f8(r28)
    fmr f30, f0
lbl_fn_802B9C5C_000004CC:
    addi r29, r29, 0x1
    addi r30, r30, 0x140
    cmplwi r29, 0x20
    blt lbl_fn_802B9C5C_00000408
lbl_fn_802B9C5C_000004DC:
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

asm void fn_802B9DB4(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    lfs f2, lbl_80884100
    stw r0, 0x54(r1)
    li r0, 0x0
    lfs f0, lbl_80884174
    addi r4, r1, 0x8
    stw r31, 0x4c(r1)
    addi r5, r1, 0x24
    mr r31, r3
    stw r30, 0x48(r1)
    stw r29, 0x44(r1)
    lwz r6, 0x62c(r3)
    stfs f2, 0x8(r1)
    cmpwi r6, 0x0
    stfs f2, 0xc(r1)
    psq_l f1, 0x0(r4), 0, 0
    stw r0, 0x20(r1)
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x2c(r1)
    stfs f0, 0x30(r1)
    stw r0, 0x624(r3)
    stw r0, 0x628(r3)
    beq lbl_fn_802B9DB4_00000584
    beq lbl_fn_802B9DB4_0000057C
    subi r3, r6, 0x10
    bl fn_80084C24
lbl_fn_802B9DB4_0000057C:
    li r0, 0x0
    stw r0, 0x62c(r31)
lbl_fn_802B9DB4_00000584:
    lfs f5, 0x52c(r31)
    addi r4, r1, 0x14
    lfs f4, 0x5a8(r31)
    addi r3, r1, 0x24
    lfs f3, 0x528(r31)
    fadds f5, f5, f4
    lfs f0, 0x5a4(r31)
    lfs f4, 0x5b0(r31)
    fadds f0, f3, f0
    stfs f5, 0x18(r1)
    lwz r0, 0x62c(r31)
    stfs f0, 0x14(r1)
    lfs f3, 0x530(r31)
    cmpwi r0, 0x0
    psq_l f1, 0x0(r4), 0, 0
    lfs f0, 0x5ac(r31)
    psq_st f1, 0x0(r3), 0, 0
    fadds f2, f3, f0
    lfs f0, 0x28(r1)
    stfs f4, 0x30(r1)
    fadds f0, f0, f4
    stfs f2, 0x1c(r1)
    stfs f2, 0x2c(r1)
    stfs f0, 0x28(r1)
    beq lbl_fn_802B9DB4_000005F4
    lwz r0, 0x628(r31)
    cmpwi r0, 0x0
    bne lbl_fn_802B9DB4_00000794
lbl_fn_802B9DB4_000005F4:
    lwz r0, 0x628(r31)
    li r30, 0x8
    cmplwi r0, 0x8
    bgt lbl_fn_802B9DB4_0000093C
    li r3, 0xb0
    li r4, 0x0
    la r5, lbl_8087D9E4
    la r6, lbl_8087D9E0
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_80148990@ha
    li r5, 0x0
    addi r4, r4, fn_80148990@l
    li r6, 0x14
    li r7, 0x8
    bl fn_80695720
    lwz r0, 0x62c(r31)
    mr r29, r3
    cmpwi r0, 0x0
    beq lbl_fn_802B9DB4_00000788
    lwz r0, 0x624(r31)
    li r5, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_802B9DB4_00000658
    mr r5, r0
lbl_fn_802B9DB4_00000658:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_802B9DB4_00000774
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_802B9DB4_0000073C
lbl_fn_802B9DB4_00000670:
    lwz r0, 0x62c(r31)
    add r6, r3, r4
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r31)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r31)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r31)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    bdnz lbl_fn_802B9DB4_00000670
    andi. r5, r5, 0x3
    beq lbl_fn_802B9DB4_00000774
lbl_fn_802B9DB4_0000073C:
    mtctr r5
lbl_fn_802B9DB4_00000740:
    lwz r0, 0x62c(r31)
    add r6, r3, r4
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    bdnz lbl_fn_802B9DB4_00000740
lbl_fn_802B9DB4_00000774:
    lwz r3, 0x62c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802B9DB4_00000788
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_802B9DB4_00000788:
    stw r29, 0x62c(r31)
    stw r30, 0x628(r31)
    b lbl_fn_802B9DB4_0000093C
lbl_fn_802B9DB4_00000794:
    lwz r3, 0x624(r31)
    cmplw r3, r0
    blt lbl_fn_802B9DB4_0000093C
    slwi r30, r3, 1
    cmplw r0, r30
    bgt lbl_fn_802B9DB4_0000093C
    mulli r3, r30, 0x14
    li r4, 0x0
    la r5, lbl_8087D9E4
    la r6, lbl_8087D9E0
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_80148990@ha
    mr r7, r30
    addi r4, r4, fn_80148990@l
    li r5, 0x0
    li r6, 0x14
    bl fn_80695720
    lwz r0, 0x62c(r31)
    mr r29, r3
    cmpwi r0, 0x0
    beq lbl_fn_802B9DB4_00000934
    lwz r0, 0x624(r31)
    mr r5, r30
    cmplw r30, r0
    ble lbl_fn_802B9DB4_00000804
    mr r5, r0
lbl_fn_802B9DB4_00000804:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_802B9DB4_00000920
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_802B9DB4_000008E8
lbl_fn_802B9DB4_0000081C:
    lwz r0, 0x62c(r31)
    add r6, r3, r4
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r31)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r31)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r31)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    bdnz lbl_fn_802B9DB4_0000081C
    andi. r5, r5, 0x3
    beq lbl_fn_802B9DB4_00000920
lbl_fn_802B9DB4_000008E8:
    mtctr r5
lbl_fn_802B9DB4_000008EC:
    lwz r0, 0x62c(r31)
    add r6, r3, r4
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    bdnz lbl_fn_802B9DB4_000008EC
lbl_fn_802B9DB4_00000920:
    lwz r3, 0x62c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802B9DB4_00000934
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_802B9DB4_00000934:
    stw r29, 0x62c(r31)
    stw r30, 0x628(r31)
lbl_fn_802B9DB4_0000093C:
    lwz r0, 0x624(r31)
    addi r5, r1, 0x24
    lwz r4, 0x62c(r31)
    mulli r3, r0, 0x14
    lwz r0, 0x20(r1)
    stwux r0, r3, r4
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x4(r3), 0, 0
    lfs f2, 0x2c(r1)
    stfs f2, 0xc(r3)
    lfs f0, 0x30(r1)
    stfs f0, 0x10(r3)
    lwz r0, 0x62c(r31)
    lwz r3, 0x624(r31)
    cmpwi r0, 0x0
    addi r0, r3, 0x1
    stw r0, 0x624(r31)
    beq lbl_fn_802B9DB4_00000990
    lwz r3, 0x628(r31)
    cmpwi r3, 0x0
    bne lbl_fn_802B9DB4_00000B30
lbl_fn_802B9DB4_00000990:
    lwz r0, 0x628(r31)
    li r30, 0x8
    cmplwi r0, 0x8
    bgt lbl_fn_802B9DB4_00000CD4
    li r3, 0xb0
    li r4, 0x0
    la r5, lbl_8087D9E4
    la r6, lbl_8087D9E0
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_80148990@ha
    li r5, 0x0
    addi r4, r4, fn_80148990@l
    li r6, 0x14
    li r7, 0x8
    bl fn_80695720
    lwz r0, 0x62c(r31)
    mr r29, r3
    cmpwi r0, 0x0
    beq lbl_fn_802B9DB4_00000B24
    lwz r0, 0x624(r31)
    li r5, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_802B9DB4_000009F4
    mr r5, r0
lbl_fn_802B9DB4_000009F4:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_802B9DB4_00000B10
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_802B9DB4_00000AD8
lbl_fn_802B9DB4_00000A0C:
    lwz r0, 0x62c(r31)
    add r6, r3, r4
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r31)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r31)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r31)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    bdnz lbl_fn_802B9DB4_00000A0C
    andi. r5, r5, 0x3
    beq lbl_fn_802B9DB4_00000B10
lbl_fn_802B9DB4_00000AD8:
    mtctr r5
lbl_fn_802B9DB4_00000ADC:
    lwz r0, 0x62c(r31)
    add r6, r3, r4
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    bdnz lbl_fn_802B9DB4_00000ADC
lbl_fn_802B9DB4_00000B10:
    lwz r3, 0x62c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802B9DB4_00000B24
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_802B9DB4_00000B24:
    stw r29, 0x62c(r31)
    stw r30, 0x628(r31)
    b lbl_fn_802B9DB4_00000CD4
lbl_fn_802B9DB4_00000B30:
    cmplw r0, r3
    blt lbl_fn_802B9DB4_00000CD4
    slwi r30, r0, 1
    cmplw r3, r30
    bgt lbl_fn_802B9DB4_00000CD4
    mulli r3, r30, 0x14
    li r4, 0x0
    la r5, lbl_8087D9E4
    la r6, lbl_8087D9E0
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_80148990@ha
    mr r7, r30
    addi r4, r4, fn_80148990@l
    li r5, 0x0
    li r6, 0x14
    bl fn_80695720
    lwz r0, 0x62c(r31)
    mr r29, r3
    cmpwi r0, 0x0
    beq lbl_fn_802B9DB4_00000CCC
    lwz r0, 0x624(r31)
    mr r5, r30
    cmplw r30, r0
    ble lbl_fn_802B9DB4_00000B9C
    mr r5, r0
lbl_fn_802B9DB4_00000B9C:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_802B9DB4_00000CB8
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_802B9DB4_00000C80
lbl_fn_802B9DB4_00000BB4:
    lwz r0, 0x62c(r31)
    add r6, r3, r4
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r31)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r31)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r31)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    bdnz lbl_fn_802B9DB4_00000BB4
    andi. r5, r5, 0x3
    beq lbl_fn_802B9DB4_00000CB8
lbl_fn_802B9DB4_00000C80:
    mtctr r5
lbl_fn_802B9DB4_00000C84:
    lwz r0, 0x62c(r31)
    add r6, r3, r4
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    bdnz lbl_fn_802B9DB4_00000C84
lbl_fn_802B9DB4_00000CB8:
    lwz r3, 0x62c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802B9DB4_00000CCC
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_802B9DB4_00000CCC:
    stw r29, 0x62c(r31)
    stw r30, 0x628(r31)
lbl_fn_802B9DB4_00000CD4:
    lwz r0, 0x624(r31)
    addi r5, r1, 0x24
    lwz r4, 0x62c(r31)
    mulli r3, r0, 0x14
    lwz r0, 0x20(r1)
    stwux r0, r3, r4
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x4(r3), 0, 0
    lfs f2, 0x2c(r1)
    stfs f2, 0xc(r3)
    lfs f0, 0x30(r1)
    stfs f0, 0x10(r3)
    lwz r3, 0x624(r31)
    lwz r0, 0x12a8(r31)
    addi r3, r3, 0x1
    stw r3, 0x624(r31)
    rlwinm r0, r0, 0, 3, 1
    stw r0, 0x12a8(r31)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_802BA5E0(void)
{
    nofralloc
    lwz r0, 0x624(r3)
    cmplwi r0, 0x2
    bltlr
    lwz r4, 0x62c(r3)
    lfs f0, 0x60c(r3)
    stfs f0, 0x10(r4)
    lfs f4, lbl_80884128
    lwz r4, 0x62c(r3)
    lfs f2, 0x5fc(r3)
    psq_l f1, 0x5f4(r3), 0, 0
    psq_st f1, 0x4(r4), 0, 0
    stfs f2, 0xc(r4)
    lfs f0, 0x60c(r3)
    lwz r4, 0x62c(r3)
    fmuls f0, f4, f0
    stfs f0, 0x24(r4)
    lwz r4, 0x62c(r3)
    lfs f2, 0x608(r3)
    psq_l f1, 0x600(r3), 0, 0
    psq_st f1, 0x18(r4), 0, 0
    stfs f2, 0x20(r4)
    lwz r4, 0x62c(r3)
    lfs f3, 0x60c(r3)
    lfs f0, 0x1c(r4)
    fmadds f0, f4, f3, f0
    stfs f0, 0x1c(r4)
    blr
}

asm void fn_802BA64C(void)
{
    nofralloc
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x2
    bne lbl_fn_802BA64C_00000DB8
    li r3, 0x0
    blr
lbl_fn_802BA64C_00000DB8:
    lwz r5, 0x62c(r3)
    li r3, 0x1
    psq_l f1, 0x18(r5), 0, 0
    lfs f2, 0x20(r5)
    stfs f2, 0x8(r4)
    psq_st f1, 0x0(r4), 0, 0
    blr
}

asm void fn_802BA67C(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    stw r31, 0x8c(r1)
    mr r31, r3
    mr r3, r4
    stw r30, 0x88(r1)
    stw r29, 0x84(r1)
    mr r29, r5
    lwz r12, 0x0(r4)
    addi r4, r1, 0x34
    lwz r12, 0xb0(r12)
    mtctr r12
    bctrl
    lwz r4, 0xf80(r29)
    lis r3, lbl_8074681C@ha
    addi r3, r3, lbl_8074681C@l
    addi r30, r1, 0x28
    psq_l f1, 0x14(r4), 0, 0
    addi r5, r3, 0x48
    lfs f2, 0x1c(r4)
    mr r6, r5
    stfs f2, 0x30(r1)
    li r3, 0x44
    li r4, 0x0
    li r7, 0x0
    psq_st f1, 0x0(r30), 0, 0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_802BA67C_00000E5C
    mr r4, r29
    mr r6, r30
    addi r5, r1, 0x34
    bl fn_801CB434
lbl_fn_802BA67C_00000E5C:
    lis r4, lbl_807863A8@ha
    lwzu r6, lbl_807863A8@l(r4)
    li r0, 0x0
    stw r29, 0x8(r1)
    lwz r5, 0x4(r4)
    lwz r4, 0x8(r4)
    stw r3, 0xc(r1)
    stw r0, 0x0(r31)
    lbz r0, lbl_8087F119
    stw r6, 0x1c(r1)
    extsb. r0, r0
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r6, 0x10(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r6, 0x68(r1)
    stw r5, 0x6c(r1)
    stw r4, 0x70(r1)
    stw r29, 0x74(r1)
    stw r3, 0x78(r1)
    bne lbl_fn_802BA67C_00000EDC
    lis r6, lbl_807C7C90@ha
    lis r4, fn_801CB100@ha
    lis r3, fn_801CB130@ha
    li r0, 0x1
    addi r3, r3, fn_801CB130@l
    addi r5, r6, lbl_807C7C90@l
    addi r4, r4, fn_801CB100@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C7C90@l(r6)
    stb r0, lbl_8087F119
lbl_fn_802BA67C_00000EDC:
    lwz r7, 0x68(r1)
    addi r3, r1, 0x54
    lwz r6, 0x6c(r1)
    lwz r5, 0x70(r1)
    lwz r4, 0x74(r1)
    lwz r0, 0x78(r1)
    stw r7, 0x54(r1)
    stw r6, 0x58(r1)
    stw r5, 0x5c(r1)
    stw r4, 0x60(r1)
    stw r0, 0x64(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_802BA67C_00000FB0
    lwz r7, 0x54(r1)
    li r3, 0x14
    lwz r6, 0x58(r1)
    lwz r5, 0x5c(r1)
    lwz r4, 0x60(r1)
    lwz r0, 0x64(r1)
    stw r7, 0x40(r1)
    stw r6, 0x44(r1)
    stw r5, 0x48(r1)
    stw r4, 0x4c(r1)
    stw r0, 0x50(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_802BA67C_00000F74
    lis r3, __files@ha
    lis r4, lbl_8078249C@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8078249C@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802BA67C_00000F74:
    cmpwi r30, 0x0
    beq lbl_fn_802BA67C_00000FA4
    lwz r0, 0x40(r1)
    stw r0, 0x0(r30)
    lwz r0, 0x44(r1)
    stw r0, 0x4(r30)
    lwz r0, 0x48(r1)
    stw r0, 0x8(r30)
    lwz r0, 0x4c(r1)
    stw r0, 0xc(r30)
    lwz r0, 0x50(r1)
    stw r0, 0x10(r30)
lbl_fn_802BA67C_00000FA4:
    stw r30, 0x4(r31)
    li r0, 0x1
    b lbl_fn_802BA67C_00000FB4
lbl_fn_802BA67C_00000FB0:
    li r0, 0x0
lbl_fn_802BA67C_00000FB4:
    cmpwi r0, 0x0
    beq lbl_fn_802BA67C_00000FCC
    lis r3, lbl_807C7C90@ha
    addi r3, r3, lbl_807C7C90@l
    stw r3, 0x0(r31)
    b lbl_fn_802BA67C_00000FD4
lbl_fn_802BA67C_00000FCC:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_802BA67C_00000FD4:
    lwz r0, 0x94(r1)
    lwz r31, 0x8c(r1)
    lwz r30, 0x88(r1)
    lwz r29, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_802BA898(void)
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
    beq lbl_fn_802BA898_00001068
    addic. r0, r3, 0x1514
    beq lbl_fn_802BA898_00001028
    lwz r3, 0x1514(r3)
    li r4, 0x1
    bl fn_802375C4
lbl_fn_802BA898_00001028:
    addic. r0, r30, 0x1508
    beq lbl_fn_802BA898_0000104C
    lwz r4, 0x1508(r30)
    cmpwi r4, 0x0
    beq lbl_fn_802BA898_0000104C
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_802BA898_0000104C
    bl fn_800897D8
lbl_fn_802BA898_0000104C:
    mr r3, r30
    li r4, 0x0
    bl fn_805A3D00
    cmpwi r31, 0x0
    ble lbl_fn_802BA898_00001068
    mr r3, r30
    bl dtor_80084684
lbl_fn_802BA898_00001068:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802BA92C(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    stw r31, 0x10c(r1)
    stw r30, 0x108(r1)
    stw r29, 0x104(r1)
    mr r29, r5
    stw r28, 0x100(r1)
    mr r28, r3
    bl fn_805A3C58
    lis r4, lbl_80786568@ha
    addi r3, r28, 0x14d4
    addi r4, r4, lbl_80786568@l
    stw r4, 0x0(r28)
    bl fn_8006CA80
    li r31, 0x0
    stw r31, 0x14dc(r28)
    addi r3, r28, 0x14f8
    stw r31, 0x14e0(r28)
    stw r31, 0x14e4(r28)
    stw r31, 0x14ec(r28)
    stw r31, 0x14f0(r28)
    stw r31, 0x14f4(r28)
    bl fn_80057A64
    addi r3, r28, 0x1508
    bl fn_80057A64
    addi r3, r28, 0x1514
    bl fn_80057A64
    li r0, 0x5
    stw r31, 0x1520(r28)
    addi r3, r28, 0x152c
    stw r31, 0x1524(r28)
    stw r0, 0x1528(r28)
    bl fn_80057A64
    lis r4, fn_802AC550@ha
    lis r5, fn_80059468@ha
    addi r3, r28, 0x1538
    li r6, 0x58
    addi r4, r4, fn_802AC550@l
    addi r5, r5, fn_80059468@l
    li r7, 0xb
    bl fn_806958E0
    lfs f0, lbl_8088417C
    li r4, 0x384
    li r0, 0x4650
    stw r31, 0x1900(r28)
    addi r3, r28, 0x191c
    stw r4, 0x1904(r28)
    stw r31, 0x1908(r28)
    stfs f0, 0x190c(r28)
    stw r0, 0x1910(r28)
    stw r31, 0x1914(r28)
    stw r31, 0x1918(r28)
    bl fn_802377B8
    addi r3, r28, 0x1928
    bl fn_802BABC0
    lwz r0, 0x12a4(r28)
    lis r30, lbl_80746B20@ha
    lfs f0, lbl_80884180
    addi r3, r1, 0x2c
    oris r0, r0, 0x40
    stw r31, 0x192c(r28)
    addi r4, r30, lbl_80746B20@l
    stfs f0, 0x1930(r28)
    stw r0, 0x12a4(r28)
    bl fn_8003E4A4
    addi r30, r30, lbl_80746B20@l
    addi r3, r1, 0x20
    addi r4, r30, 0x18
    bl fn_8003E4A4
    addi r3, r1, 0x14
    addi r4, r29, 0x2c
    bl fn_8003E4A4
    addi r3, r1, 0x74
    addi r4, r30, 0x2b
    li r5, 0x0
    li r6, 0x0
    bl fn_800EC440
    addi r3, r1, 0xd4
    addi r4, r1, 0x14
    addi r5, r1, 0x74
    bl fn_800EC2C4
    addi r3, r1, 0x74
    li r4, -0x1
    bl fn_800EC534
    addi r3, r1, 0x98
    addi r4, r1, 0xd4
    bl fn_800EC654
    b lbl_fn_802BA92C_0000122C
lbl_fn_802BA92C_000011E8:
    addi r3, r1, 0x98
    bl fn_800ED4D8
    bl fn_8004212C
    addi r4, r30, 0x2d
    li r5, 0x8
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_802BA92C_00001224
    addi r3, r1, 0x98
    bl fn_800ED4D8
    bl fn_8004212C
    mr r4, r3
    addi r3, r1, 0x20
    addi r4, r4, 0x8
    bl fn_8020A780
lbl_fn_802BA92C_00001224:
    addi r3, r1, 0x98
    bl fn_800ED4E0
lbl_fn_802BA92C_0000122C:
    addi r3, r1, 0x38
    addi r4, r1, 0xd4
    bl fn_800EDFE8
    addi r3, r1, 0x98
    addi r4, r1, 0x38
    bl fn_800EC254
    mr r31, r3
    addi r3, r1, 0x38
    li r4, -0x1
    bl fn_800ED42C
    cmpwi r31, 0x0
    bne lbl_fn_802BA92C_000011E8
    addi r3, r1, 0x98
    li r4, -0x1
    bl fn_800ED42C
    addi r3, r1, 0x8
    addi r4, r1, 0x2c
    addi r5, r1, 0x20
    bl fn_8006AFF8
    lis r4, lbl_80746B20@ha
    addi r3, r28, 0x191c
    addi r4, r4, lbl_80746B20@l
    addi r4, r4, 0x36
    bl fn_8023780C
    addi r3, r1, 0x8
    bl fn_8004212C
    lwz r12, 0x14d4(r28)
    mr r4, r3
    addi r3, r28, 0x14d4
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lwz r0, 0x14a8(r28)
    addi r3, r1, 0x8
    li r4, -0x1
    oris r0, r0, 0x8000
    stw r0, 0x14a8(r28)
    bl dtor_80013D60
    addi r3, r1, 0xd4
    li r4, -0x1
    bl fn_800EC5BC
    addi r3, r1, 0x14
    li r4, -0x1
    bl dtor_80013D60
    addi r3, r1, 0x20
    li r4, -0x1
    bl dtor_80013D60
    addi r3, r1, 0x2c
    li r4, -0x1
    bl dtor_80013D60
    lwz r31, 0x10c(r1)
    mr r3, r28
    lwz r30, 0x108(r1)
    lwz r29, 0x104(r1)
    lwz r28, 0x100(r1)
    lwz r0, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_802BABC0(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    blr
}

asm void fn_802BABCC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_8013655C
    cmpwi r3, 0x0
    bne lbl_fn_802BABCC_000014F0
    addi r3, r31, 0x14d4
    bl fn_80473F50
    cmpwi r3, 0x0
    bne lbl_fn_802BABCC_000014F0
    addi r3, r31, 0x191c
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802BABCC_000014F0
    lwz r4, 0x7ec(r31)
    lis r3, lbl_80746B20@ha
    lwz r0, 0x1928(r31)
    addi r3, r3, lbl_80746B20@l
    ori r4, r4, 0xc1d1
    oris r4, r4, 0x101
    cmpwi r0, 0x0
    ori r0, r4, 0x208
    oris r0, r0, 0x280
    addi r4, r3, 0x4b
    ori r0, r0, 0x4
    stw r0, 0x7ec(r31)
    bne lbl_fn_802BABCC_000013B4
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_802BABCC_000013B4
    addi r3, r3, 0x10
    bl fn_8008937C
    stw r3, 0x1928(r31)
    b lbl_fn_802BABCC_000013B8
lbl_fn_802BABCC_000013B4:
    li r3, 0x0
lbl_fn_802BABCC_000013B8:
    lis r4, lbl_80746B20@ha
    addi r5, r31, 0x192c
    addi r4, r4, lbl_80746B20@l
    li r6, 0x0
    addi r4, r4, 0x59
    li r7, 0x0
    bl fn_80087994
    li r0, 0xa
    lfs f2, lbl_80884184
    lfs f1, lbl_80884188
    mulli r0, r0, 0x58
    lfs f0, lbl_8088418C
    mr r3, r31
    stfs f2, 0x56c(r31)
    add r4, r31, r0
    stfs f1, 0x5b0(r31)
    stfs f0, 0x5b4(r31)
    lwz r0, 0x1540(r31)
    ori r0, r0, 0x3
    stw r31, 0x1544(r31)
    clrlwi r0, r0, 1
    stw r0, 0x1540(r31)
    lwz r0, 0x1598(r31)
    ori r0, r0, 0x3
    stw r31, 0x159c(r31)
    clrlwi r0, r0, 1
    stw r0, 0x1598(r31)
    lwz r0, 0x15f0(r31)
    ori r0, r0, 0x3
    stw r31, 0x15f4(r31)
    clrlwi r0, r0, 1
    stw r0, 0x15f0(r31)
    lwz r0, 0x1648(r31)
    ori r0, r0, 0x3
    stw r31, 0x164c(r31)
    clrlwi r0, r0, 1
    stw r0, 0x1648(r31)
    lwz r0, 0x16a0(r31)
    ori r0, r0, 0x3
    stw r31, 0x16a4(r31)
    clrlwi r0, r0, 1
    stw r0, 0x16a0(r31)
    lwz r0, 0x16f8(r31)
    ori r0, r0, 0x3
    stw r31, 0x16fc(r31)
    clrlwi r0, r0, 1
    stw r0, 0x16f8(r31)
    lwz r0, 0x1750(r31)
    ori r0, r0, 0x3
    stw r31, 0x1754(r31)
    clrlwi r0, r0, 1
    stw r0, 0x1750(r31)
    lwz r0, 0x17a8(r31)
    ori r0, r0, 0x3
    stw r31, 0x17ac(r31)
    clrlwi r0, r0, 1
    stw r0, 0x17a8(r31)
    lwz r0, 0x1800(r31)
    ori r0, r0, 0x3
    stw r31, 0x1804(r31)
    clrlwi r0, r0, 1
    stw r0, 0x1800(r31)
    lwz r0, 0x1858(r31)
    ori r0, r0, 0x3
    stw r31, 0x185c(r31)
    clrlwi r0, r0, 1
    stw r0, 0x1858(r31)
    lwz r0, 0x1540(r4)
    ori r0, r0, 0x3
    stw r31, 0x1544(r4)
    clrlwi r0, r0, 1
    stw r0, 0x1540(r4)
    lwz r12, 0x0(r31)
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    li r3, 0x1
    b lbl_fn_802BABCC_000014F4
lbl_fn_802BABCC_000014F0:
    li r3, 0x0
lbl_fn_802BABCC_000014F4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802BADB0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r4, 0x1520(r3)
    lwz r0, 0x1524(r3)
    cmpw r4, r0
    beq lbl_fn_802BADB0_00001544
    lwz r3, lbl_8087F430
    li r4, 0xa
    li r5, 0x1
    bl fn_80370AE4
    lwz r0, 0x1520(r31)
    stw r0, 0x1524(r31)
lbl_fn_802BADB0_00001544:
    lwz r0, 0x12a4(r31)
    extrwi. r0, r0, 1, 29
    beq lbl_fn_802BADB0_000015D4
    lwz r6, 0x38(r31)
    li r4, 0x0
    li r3, 0x0
    li r5, 0x0
    rlwinm r0, r6, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_802BADB0_0000157C
    clrlwi r0, r6, 31
    cmplwi r0, 0x1
    beq lbl_fn_802BADB0_0000157C
    li r5, 0x1
lbl_fn_802BADB0_0000157C:
    cmpwi r5, 0x0
    beq lbl_fn_802BADB0_00001598
    lwz r0, 0x7e0(r31)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_802BADB0_00001598
    li r3, 0x1
lbl_fn_802BADB0_00001598:
    cmpwi r3, 0x0
    beq lbl_fn_802BADB0_000015CC
    lwz r0, 0x55c(r31)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_802BADB0_000015C0
    lwz r0, 0x560(r31)
    cmpwi r0, 0x1c
    bne lbl_fn_802BADB0_000015C0
    li r3, 0x1
lbl_fn_802BADB0_000015C0:
    cmpwi r3, 0x0
    bne lbl_fn_802BADB0_000015CC
    li r4, 0x1
lbl_fn_802BADB0_000015CC:
    cmpwi r4, 0x0
    bne lbl_fn_802BADB0_000016D8
lbl_fn_802BADB0_000015D4:
    lwz r3, 0x1904(r31)
    cmpwi r3, 0x0
    ble lbl_fn_802BADB0_000015E8
    subi r0, r3, 0x1
    stw r0, 0x1904(r31)
lbl_fn_802BADB0_000015E8:
    lwz r6, 0x38(r31)
    li r4, 0x0
    li r3, 0x0
    li r5, 0x0
    rlwinm r0, r6, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_802BADB0_00001614
    clrlwi r0, r6, 31
    cmplwi r0, 0x1
    beq lbl_fn_802BADB0_00001614
    li r5, 0x1
lbl_fn_802BADB0_00001614:
    cmpwi r5, 0x0
    beq lbl_fn_802BADB0_00001630
    lwz r0, 0x7e0(r31)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_802BADB0_00001630
    li r3, 0x1
lbl_fn_802BADB0_00001630:
    cmpwi r3, 0x0
    beq lbl_fn_802BADB0_00001664
    lwz r0, 0x55c(r31)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_802BADB0_00001658
    lwz r0, 0x560(r31)
    cmpwi r0, 0x1c
    bne lbl_fn_802BADB0_00001658
    li r3, 0x1
lbl_fn_802BADB0_00001658:
    cmpwi r3, 0x0
    bne lbl_fn_802BADB0_00001664
    li r4, 0x1
lbl_fn_802BADB0_00001664:
    cmpwi r4, 0x0
    beq lbl_fn_802BADB0_000016AC
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_802BADB0_000016AC
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0xf8(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_802BADB0_000016AC
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x0
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_802BADB0_000016AC:
    lwz r5, 0x14f4(r31)
    mr r3, r31
    lwz r4, 0x1910(r31)
    addi r0, r5, 0x1
    stw r0, 0x14f4(r31)
    subi r0, r4, 0x1
    stw r0, 0x1910(r31)
    lwz r12, 0x0(r31)
    lwz r12, 0x104(r12)
    mtctr r12
    bctrl
lbl_fn_802BADB0_000016D8:
    mr r3, r31
    bl fn_8014C540
    mr r3, r31
    bl fn_80145334
    mr r3, r31
    bl fn_802BDA04
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802BAFAC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lfs f3, lbl_80884190
    li r6, 0x1
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lfs f2, 0x10(r4)
    lfs f1, 0x14(r4)
    lfs f0, 0x18(r4)
    fmuls f2, f2, f3
    fmuls f1, f1, f3
    fmuls f0, f0, f3
    stfs f2, 0x10(r4)
    stfs f1, 0x14(r4)
    stfs f0, 0x18(r4)
    lwz r7, 0x7e0(r3)
    rlwinm r5, r7, 0, 12, 12
    subis r0, r5, 0x8
    cmplwi r0, 0x0
    beq lbl_fn_802BAFAC_00001774
    rlwinm r5, r7, 0, 7, 7
    subis r0, r5, 0x100
    cmplwi r0, 0x0
    beq lbl_fn_802BAFAC_00001774
    li r6, 0x0
lbl_fn_802BAFAC_00001774:
    cmpwi r6, 0x0
    bne lbl_fn_802BAFAC_000017A0
    lwz r5, 0x8(r4)
    lwz r0, 0x90(r5)
    rlwinm r5, r0, 0, 12, 12
    subis r0, r5, 0x8
    cmplwi r0, 0x0
    beq lbl_fn_802BAFAC_000017A0
    lwz r0, 0xc(r4)
    ori r0, r0, 0x8
    stw r0, 0xc(r4)
lbl_fn_802BAFAC_000017A0:
    lwz r0, 0x40(r4)
    cmpwi r0, 0x1
    bne lbl_fn_802BAFAC_000017D4
    lwz r0, 0x44(r4)
    cmpwi r0, 0x0
    bne lbl_fn_802BAFAC_000017C4
    li r0, 0x0
    stw r0, 0x40(r4)
    b lbl_fn_802BAFAC_000017D4
lbl_fn_802BAFAC_000017C4:
    lwz r0, 0xc(r4)
    oris r0, r0, 0x8000
    rlwinm r0, r0, 0, 29, 27
    stw r0, 0xc(r4)
lbl_fn_802BAFAC_000017D4:
    lwz r0, 0x14f0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_802BAFAC_000017F8
    lwz r0, 0x58c(r3)
    cmpwi r0, 0xf
    bne lbl_fn_802BAFAC_000017F8
    lwz r0, 0xc(r4)
    rlwinm r0, r0, 0, 29, 27
    stw r0, 0xc(r4)
lbl_fn_802BAFAC_000017F8:
    mr r3, r30
    mr r4, r31
    bl fn_80151448
    lwz r0, 0x12a4(r30)
    extrwi. r0, r0, 1, 29
    bne lbl_fn_802BAFAC_0000182C
    lwz r12, 0x0(r30)
    mr r3, r30
    mr r4, r31
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    b lbl_fn_802BAFAC_00001844
lbl_fn_802BAFAC_0000182C:
    lwz r12, 0x0(r30)
    mr r3, r30
    mr r4, r31
    lwz r12, 0x118(r12)
    mtctr r12
    bctrl
lbl_fn_802BAFAC_00001844:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802BB104(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_26
    lwz r0, 0x7e0(r3)
    mr r31, r3
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_802BB104_000019F0
    lwz r0, 0x1914(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802BB104_00001AA8
    li r0, 0x0
    stw r0, 0x14dc(r3)
    stw r0, 0x14e0(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0x2
    mr r3, r31
    li r4, 0x6
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f3, lbl_8088417C
    li r0, 0x17
    lfs f0, lbl_80884194
    li r28, 0x1
    stw r0, 0x560(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80884190
    li r4, 0x0
    stw r28, 0x3fc(r31)
    li r5, 0x2e
    lfs f2, lbl_80884198
    li r6, 0x0
    stfs f3, 0x2fc(r31)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    li r3, 0x0
    li r4, 0x0
    bl fn_80232B7C
    lfs f0, lbl_80884190
    li r29, -0x1
    lfs f1, lbl_8088417C
    addi r4, r31, 0x191c
    stfs f0, 0x30(r1)
    addi r5, r31, 0xb0
    lwz r3, lbl_8087F3C0
    addi r7, r1, 0x3c
    stfs f0, 0x34(r1)
    addi r8, r1, 0x30
    addi r9, r1, 0x20
    li r6, 0x0
    stfs f0, 0x38(r1)
    li r10, -0x1
    stfs f0, 0x3c(r1)
    stfs f0, 0x40(r1)
    stfs f0, 0x44(r1)
    stfs f1, 0x20(r1)
    stfs f1, 0x24(r1)
    stfs f1, 0x28(r1)
    stfs f1, 0x2c(r1)
    stw r29, 0x8(r1)
    stw r28, 0xc(r1)
    bl fn_8023A8B4
    lis r3, lbl_807C7030@ha
    li r4, 0x65
    addi r3, r3, lbl_807C7030@l
    li r5, 0x1
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x8(r3)
    stfs f2, 0x57c(r31)
    psq_st f1, 0x574(r31), 0, 0
    lwz r3, lbl_8087F430
    bl fn_80370AE4
    lwz r3, lbl_8087F8A0
    lwz r26, lbl_8087F048
    lwz r27, 0x48(r3)
    mr r3, r26
    bl fn_800F8548
    mr r30, r3
    li r3, 0x5c3
    bl fn_80219E6C
    stw r29, 0x8(r1)
    mr r5, r3
    lfs f1, lbl_80884190
    mr r3, r26
    stw r29, 0xc(r1)
    mr r4, r27
    lfs f2, lbl_8088417C
    mr r6, r30
    addi r7, r31, 0x528
    addi r8, r31, 0x534
    li r9, 0x0
    li r10, 0x1e
    bl fn_800FAB80
    stw r28, 0x1914(r31)
    b lbl_fn_802BB104_00001AA8
lbl_fn_802BB104_000019F0:
    lwz r0, 0x14f0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_802BB104_00001AA8
    lwz r5, 0x58c(r3)
    subi r0, r5, 0xd
    cmplwi r0, 0x1
    bgt lbl_fn_802BB104_00001AA8
    lwz r4, 0x8(r4)
    lwz r0, 0x90(r4)
    rlwinm r0, r0, 0, 17, 17
    cmplwi r0, 0x4000
    bne lbl_fn_802BB104_00001AA8
    li r0, 0x0
    stw r0, 0x14dc(r3)
    stw r0, 0x14e0(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_8088417C
    li r4, 0xf
    stw r3, 0x590(r31)
    li r0, 0x1
    lfs f1, lbl_80884190
    addi r3, r31, 0xb0
    stw r4, 0x58c(r31)
    li r4, 0x0
    lfs f2, lbl_80884198
    li r5, 0x16a
    stw r0, 0x3fc(r31)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2fc(r31)
    bl fn_80097C08
    lfs f0, lbl_8088419C
    mr r4, r31
    stfs f0, 0x2e8(r31)
    addi r3, r1, 0x10
    lwz r12, 0x0(r31)
    lwz r27, lbl_8087F048
    lwz r12, 0xac(r12)
    mtctr r12
    bctrl
    mr r3, r27
    addi r4, r1, 0x10
    li r5, 0x4000
    bl fn_80108F38
lbl_fn_802BB104_00001AA8:
    addi r11, r1, 0x60
    bl _restgpr_26
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}
