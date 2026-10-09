#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_26(void);
extern void _savegpr_26(void);
extern void dtor_80084684(void);
extern void fn_8004ED34(void);
extern void fn_80063764(void);
extern void fn_80084320(void);
extern void fn_800D1D3C(void);
extern void fn_800D1E9C(void);
extern void fn_8011F91C(void);
extern void fn_8014C0B4(void);
extern void fn_8014C228(void);
extern void fn_801598B4(void);
extern void fn_80159E9C(void);
extern void fn_8015A184(void);
extern void fn_80232B7C(void);
extern void fn_80237518(void);
extern void fn_802375C4(void);
extern void fn_80237654(void);
extern void fn_802376D0(void);
extern void fn_802377B8(void);
extern void fn_80239D58(void);
extern void fn_80239DAC(void);
extern void fn_8023A098(void);
extern void fn_8023A680(void);
extern void fn_80360780(void);
extern void fn_804AABA8(void);
extern void fn_804AAD54(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F9050(void);
extern void fn_805F90D0(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_805F9990(void);
extern void fn_805F99B0(void);
extern void fn_8068AD58(void);
extern void fn_8068AE9C(void);
extern void fn_8068AEA4(void);
extern void fn_806958E0(void);
extern void fn_806959D8(void);

/* External data declarations */
extern u8 lbl_807381A8[];
extern u8 lbl_8073821C[];
extern u8 lbl_8077CC10[];
extern u8 lbl_8077CC48[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F098;
extern u32 lbl_8087F0A0;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F408;
extern u32 lbl_8087F418;
extern u32 lbl_8087F430;
extern u32 lbl_8087F8A0;
extern u32 lbl_8087FA20;
extern u32 lbl_80881BF8;
extern u32 lbl_80881C04;
extern u32 lbl_80881C10;
extern u32 lbl_80881C40;
extern u32 lbl_80881C48;
extern u32 lbl_80881C4C;
extern u32 lbl_80881C50;
extern u32 lbl_80881C54;
extern u32 lbl_80881C58;
extern u32 lbl_80881C5C;
extern u32 lbl_80881C60;
extern u32 lbl_80881C64;
extern u32 lbl_80881C68;
extern u32 lbl_80881C6C;
extern u32 lbl_80881C70;
extern u32 lbl_80881C74;
extern u32 lbl_80881C78;
extern u32 lbl_80881C7C;
extern u32 lbl_80881C80;
extern u32 lbl_80881C84;

/* Function declarations */
void fn_80182134(void);
void fn_801823A8(void);
void fn_80182418(void);
void fn_801825F0(void);
void fn_801826E0(void);
void fn_80182788(void);
void fn_80182874(void);
void fn_80182890(void);
void fn_80182918(void);
void fn_801829B4(void);
void fn_80183584(void);
void fn_80183588(void);
void fn_80183618(void);
void fn_80183774(void);
void fn_80183860(void);
void fn_80183930(void);
void fn_80183948(void);
void fn_801839FC(void);

asm void fn_80182134(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    stfd f31, 0x100(r1)
    psq_st f31, 0x108(r1), 0, 0
    stw r31, 0xfc(r1)
    stw r30, 0xf8(r1)
    stw r29, 0xf4(r1)
    stw r28, 0xf0(r1)
    mr r28, r3
    lwz r4, lbl_8087F8A0
    lfs f3, 0x530(r3)
    lwz r30, 0x48(r4)
    lfs f4, 0x52c(r3)
    lfs f6, 0x530(r30)
    lfs f5, 0x52c(r30)
    lfs f0, 0x528(r3)
    fsubs f6, f6, f3
    lfs f3, 0x528(r30)
    fsubs f4, f5, f4
    addi r3, r1, 0x20
    fsubs f0, f3, f0
    stfs f4, 0x24(r1)
    stfs f0, 0x20(r1)
    stfs f6, 0x28(r1)
    bl fn_805F9940
    lwz r3, lbl_8087F0A8
    lfs f0, 0x56c(r3)
    lfs f31, 0x570(r3)
    fcmpo cr0, f1, f0
    bge lbl_fn_80182134_00000248
    lfs f6, lbl_80881C04
    addi r31, r1, 0x38
    lfs f5, lbl_80881C40
    addi r5, r1, 0x14
    lfs f4, 0x530(r28)
    mr r3, r31
    lfs f3, 0x52c(r28)
    mr r4, r31
    lfs f0, 0x528(r28)
    fadds f7, f4, f6
    fadds f8, f3, f5
    stfs f6, 0x5c(r1)
    fadds f9, f0, f6
    li r29, 0x0
    stfs f8, 0x54(r1)
    stfs f9, 0x50(r1)
    stfs f7, 0x58(r1)
    lfs f3, 0x52c(r30)
    lfs f0, 0x528(r30)
    lfs f4, 0x530(r30)
    fadds f3, f3, f5
    fadds f0, f0, f6
    stfs f5, 0x60(r1)
    fadds f4, f4, f6
    stfs f6, 0x64(r1)
    fsubs f5, f3, f8
    fsubs f6, f0, f9
    fsubs f2, f4, f7
    stfs f5, 0x18(r1)
    stfs f6, 0x14(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f0, 0x44(r1)
    stfs f3, 0x48(r1)
    stfs f4, 0x4c(r1)
    stfs f2, 0x1c(r1)
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F98D0
    lfs f3, lbl_80881C04
    addi r3, r1, 0x68
    lfs f0, lbl_80881BF8
    li r4, 0x79
    stfs f3, 0x2c(r1)
    stfs f3, 0x30(r1)
    stfs f0, 0x34(r1)
    lfs f3, 0x538(r28)
    lfs f0, 0x10f4(r28)
    fadds f1, f3, f0
    bl fn_805F8E70
    addi r4, r1, 0x2c
    addi r3, r1, 0x68
    mr r5, r4
    bl fn_805F93C0
    addi r3, r1, 0x2c
    addi r30, r1, 0x8
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r30
    lfs f2, 0x34(r1)
    mr r4, r30
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x10(r1)
    bl fn_805F98D0
    mr r3, r30
    mr r4, r31
    bl fn_805F9990
    bl fn_8068AE9C
    lfs f0, lbl_80881C10
    frsp f3, f1
    fmuls f0, f0, f31
    fcmpo cr0, f3, f0
    bge lbl_fn_80182134_00000240
    li r0, 0x0
    stw r0, 0xcc(r1)
    lwz r3, lbl_8087EE98
    addi r4, r1, 0x98
    stw r0, 0xd0(r1)
    addi r5, r1, 0x50
    addi r6, r1, 0x44
    lis r7, 0x8000
    stw r0, 0xd4(r1)
    li r8, 0x0
    li r9, 0x0
    stw r0, 0xd8(r1)
    bl fn_8004ED34
    lwz r4, lbl_8087F0A8
    cntlzw r0, r3
    srwi r29, r0, 5
    lwz r0, 0x53c(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80182134_00000240
    cmpwi r29, 0x0
    bne lbl_fn_80182134_00000224
    lwz r3, lbl_8087EEB0
    addi r4, r1, 0x50
    lfs f1, lbl_80881C04
    addi r5, r1, 0x9c
    li r6, -0x100
    bl fn_80063764
    lis r6, 0xff4d
    lwz r3, lbl_8087EEB0
    lfs f1, lbl_80881C04
    addi r4, r1, 0x9c
    addi r5, r1, 0x44
    addi r6, r6, 0x4d00
    bl fn_80063764
    b lbl_fn_80182134_00000240
lbl_fn_80182134_00000224:
    lis r6, 0xff4d
    lwz r3, lbl_8087EEB0
    lfs f1, lbl_80881C04
    addi r4, r1, 0x50
    addi r5, r1, 0x44
    addi r6, r6, 0x4d00
    bl fn_80063764
lbl_fn_80182134_00000240:
    mr r3, r29
    b lbl_fn_80182134_0000024C
lbl_fn_80182134_00000248:
    li r3, 0x0
lbl_fn_80182134_0000024C:
    lwz r0, 0x114(r1)
    psq_l f31, 0x108(r1), 0, 0
    lfd f31, 0x100(r1)
    lwz r31, 0xfc(r1)
    lwz r30, 0xf8(r1)
    lwz r29, 0xf4(r1)
    lwz r28, 0xf0(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_801823A8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801823A8_000002CC
    lwz r0, lbl_8087F098
    cmpwi r0, 0x0
    bne lbl_fn_801823A8_000002CC
    lis r5, lbl_807381A8@ha
    li r3, 0x1e8
    addi r5, r5, lbl_807381A8@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_801823A8_000002C8
    mr r4, r31
    bl fn_80182418
lbl_fn_801823A8_000002C8:
    stw r3, lbl_8087F098
lbl_fn_801823A8_000002CC:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    lwz r3, lbl_8087F098
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80182418(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    bl fn_800D1D3C
    lfs f0, lbl_80881C48
    lis r3, lbl_8077CC10@ha
    li r29, 0x0
    lis r30, fn_80237518@ha
    addi r3, r3, lbl_8077CC10@l
    lis r31, fn_802375C4@ha
    stw r3, 0x0(r28)
    addi r3, r28, 0xfc
    addi r4, r30, fn_80237518@l
    addi r5, r31, fn_802375C4@l
    stw r29, 0x48(r28)
    li r6, 0xc
    li r7, 0x2
    stw r29, 0x4c(r28)
    stw r29, 0x50(r28)
    stw r29, 0x54(r28)
    stw r29, 0x58(r28)
    stw r29, 0x5c(r28)
    stfs f0, 0x60(r28)
    stfs f0, 0x64(r28)
    stfs f0, 0x68(r28)
    stw r29, 0x70(r28)
    stw r29, 0x74(r28)
    stw r29, 0xf8(r28)
    bl fn_806958E0
    addi r3, r28, 0x114
    addi r4, r30, fn_80237518@l
    addi r5, r31, fn_802375C4@l
    li r6, 0xc
    li r7, 0x2
    bl fn_806958E0
    addi r3, r28, 0x12c
    addi r4, r30, fn_80237518@l
    addi r5, r31, fn_802375C4@l
    li r6, 0xc
    li r7, 0x2
    bl fn_806958E0
    lfs f1, lbl_80881C4C
    lis r31, lbl_807381A8@ha
    lfs f0, lbl_80881C50
    addi r31, r31, lbl_807381A8@l
    li r0, -0x1
    stfs f1, 0x1a4(r28)
    addi r3, r28, 0xfc
    addi r4, r31, 0x1
    stfs f1, 0x1a8(r28)
    stfs f1, 0x1ac(r28)
    stfs f1, 0x1b0(r28)
    stfs f0, 0x1b4(r28)
    stw r29, 0x1b8(r28)
    stw r29, 0x1bc(r28)
    stw r0, 0x1c0(r28)
    stw r29, 0x1c4(r28)
    bl fn_80237654
    addi r3, r28, 0x114
    addi r4, r31, 0xf
    bl fn_80237654
    addi r3, r28, 0x12c
    addi r4, r31, 0x1d
    bl fn_80237654
    addi r3, r28, 0x108
    addi r4, r31, 0x1
    bl fn_80237654
    addi r3, r28, 0x120
    addi r4, r31, 0x2b
    bl fn_80237654
    addi r3, r28, 0x138
    addi r4, r31, 0x1d
    bl fn_80237654
    lwz r0, 0x1bc(r28)
    cmpwi r0, 0x0
    beq lbl_fn_80182418_0000043C
    lwz r3, lbl_8087F3C0
    mr r4, r28
    li r5, 0x0
    li r6, 0x0
    bl fn_80239DAC
lbl_fn_80182418_0000043C:
    li r0, 0x0
    stw r0, 0x1bc(r28)
    b lbl_fn_80182418_00000450
    beq lbl_fn_80182418_00000478
    b lbl_fn_80182418_00000498
lbl_fn_80182418_00000450:
    lwz r3, lbl_8087F0A8
    lfs f1, lbl_80881C48
    stfs f1, 0x52c(r3)
    lfs f0, lbl_80881C54
    stfs f0, 0x530(r3)
    lfs f0, lbl_80881C58
    stfs f0, 0x534(r3)
    lwz r3, lbl_8087F0A8
    stfs f1, 0x538(r3)
    b lbl_fn_80182418_00000498
lbl_fn_80182418_00000478:
    lwz r3, lbl_8087F0A8
    lfs f1, lbl_80881C48
    stfs f1, 0x52c(r3)
    lfs f0, lbl_80881C5C
    stfs f0, 0x530(r3)
    stfs f1, 0x534(r3)
    lwz r3, lbl_8087F0A8
    stfs f1, 0x538(r3)
lbl_fn_80182418_00000498:
    lwz r31, 0x1c(r1)
    mr r3, r28
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801825F0(void)
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
    beq lbl_fn_801825F0_0000058C
    lis r4, lbl_8077CC10@ha
    li r0, 0x0
    addi r4, r4, lbl_8077CC10@l
    stw r4, 0x0(r3)
    lwz r3, lbl_8087F8A0
    stw r0, lbl_8087F098
    cmpwi r3, 0x0
    beq lbl_fn_801825F0_00000514
    lwz r3, 0x48(r3)
    cmpwi r3, 0x0
    beq lbl_fn_801825F0_00000514
    bl fn_8014C228
lbl_fn_801825F0_00000514:
    lwz r3, lbl_8087F418
    cmpwi r3, 0x0
    beq lbl_fn_801825F0_00000530
    li r4, 0x1
    li r5, 0x8
    li r6, 0x3c
    bl fn_80360780
lbl_fn_801825F0_00000530:
    lis r31, fn_802375C4@ha
    addi r3, r29, 0x12c
    addi r4, r31, fn_802375C4@l
    li r5, 0xc
    li r6, 0x2
    bl fn_806959D8
    addi r3, r29, 0x114
    addi r4, r31, fn_802375C4@l
    li r5, 0xc
    li r6, 0x2
    bl fn_806959D8
    addi r3, r29, 0xfc
    addi r4, r31, fn_802375C4@l
    li r5, 0xc
    li r6, 0x2
    bl fn_806959D8
    mr r3, r29
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r30, 0x0
    ble lbl_fn_801825F0_0000058C
    mr r3, r29
    bl dtor_80084684
lbl_fn_801825F0_0000058C:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801826E0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x24(r1)
    li r0, 0x1
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    mr r29, r3
    mr r31, r29
    stw r4, 0x70(r3)
    stw r4, 0xf8(r3)
    stw r0, 0x48(r3)
    stw r4, 0x74(r3)
    stw r4, 0x58(r3)
    b lbl_fn_801826E0_00000610
lbl_fn_801826E0_000005F0:
    lwz r4, lbl_8087F8A0
    lwz r3, 0x1c8(r31)
    lwz r0, 0x48(r4)
    cmplw r3, r0
    beq lbl_fn_801826E0_00000608
    bl fn_8015A184
lbl_fn_801826E0_00000608:
    addi r31, r31, 0x4
    addi r30, r30, 0x1
lbl_fn_801826E0_00000610:
    lwz r0, 0x1c4(r29)
    cmplw r30, r0
    blt lbl_fn_801826E0_000005F0
    lwz r3, lbl_8087F418
    cmpwi r3, 0x0
    beq lbl_fn_801826E0_00000638
    li r4, 0x0
    li r5, 0x8
    li r6, 0x3c
    bl fn_80360780
lbl_fn_801826E0_00000638:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80182788(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r4
    lwz r0, 0x70(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80182788_000006F0
    li r6, 0x0
    li r0, 0x2
    stw r4, 0x70(r3)
    stw r6, 0x6c(r3)
    stw r0, 0x48(r3)
    stw r5, 0xf8(r3)
    mr r3, r5
    lwz r6, lbl_8087F0A8
    lwz r5, 0x524(r6)
    lwz r6, 0x528(r6)
    bl fn_801598B4
    lwz r3, lbl_8087F430
    li r0, 0x1
    mr r30, r31
    li r29, 0x0
    stw r0, 0x5660(r3)
    b lbl_fn_80182788_000006E4
lbl_fn_80182788_000006C8:
    lwz r3, 0x1c8(r30)
    lwz r0, 0xf8(r31)
    cmplw r3, r0
    beq lbl_fn_80182788_000006DC
    bl fn_80159E9C
lbl_fn_80182788_000006DC:
    addi r30, r30, 0x4
    addi r29, r29, 0x1
lbl_fn_80182788_000006E4:
    lwz r0, 0x1c4(r31)
    cmplw r29, r0
    blt lbl_fn_80182788_000006C8
lbl_fn_80182788_000006F0:
    lwz r0, 0x74(r31)
    cmplwi r0, 0x20
    bge lbl_fn_80182788_00000720
    lwz r0, 0x74(r31)
    slwi r0, r0, 2
    add r0, r31, r0
    addic. r3, r0, 0x78
    beq lbl_fn_80182788_00000714
    stw r28, 0x0(r3)
lbl_fn_80182788_00000714:
    lwz r3, 0x74(r31)
    addi r0, r3, 0x1
    stw r0, 0x74(r31)
lbl_fn_80182788_00000720:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80182874(void)
{
    nofralloc
    li r4, 0x0
    li r0, 0x1
    stw r4, 0x70(r3)
    stw r4, 0xf8(r3)
    stw r0, 0x48(r3)
    stw r4, 0x74(r3)
    blr
}

asm void fn_80182890(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r4, 0xf8(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80182890_0000077C
    li r0, 0x0
    stw r0, 0xf1c(r4)
lbl_fn_80182890_0000077C:
    li r0, 0x0
    stw r0, 0x70(r3)
    stw r0, 0xf8(r3)
    stw r0, 0x48(r3)
    stw r0, 0x6c(r3)
    stw r0, 0x74(r3)
    stw r0, 0x58(r3)
    stw r0, 0x1c4(r3)
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_80182890_000007B8
    lwz r3, 0x48(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80182890_000007B8
    bl fn_8014C228
lbl_fn_80182890_000007B8:
    lwz r3, lbl_8087F418
    cmpwi r3, 0x0
    beq lbl_fn_80182890_000007D4
    li r4, 0x1
    li r5, 0x8
    li r6, 0x3c
    bl fn_80360780
lbl_fn_80182890_000007D4:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80182918(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    addi r3, r3, 0xfc
    bl fn_802376D0
    cmpwi r3, 0x0
    bne lbl_fn_80182918_00000864
    addi r3, r30, 0x114
    bl fn_802376D0
    cmpwi r3, 0x0
    bne lbl_fn_80182918_00000864
    addi r3, r30, 0x108
    bl fn_802376D0
    cmpwi r3, 0x0
    bne lbl_fn_80182918_00000864
    addi r3, r30, 0x120
    bl fn_802376D0
    cmpwi r3, 0x0
    bne lbl_fn_80182918_00000864
    addi r3, r30, 0x12c
    bl fn_802376D0
    cmpwi r3, 0x0
    bne lbl_fn_80182918_00000864
    addi r3, r30, 0x138
    bl fn_802376D0
    cmpwi r3, 0x0
    bne lbl_fn_80182918_00000864
    li r31, 0x1
lbl_fn_80182918_00000864:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801829B4(void)
{
    nofralloc
    stwu r1, -0x520(r1)
    mflr r0
    stw r0, 0x524(r1)
    stfd f31, 0x510(r1)
    psq_st f31, 0x518(r1), 0, 0
    stfd f30, 0x500(r1)
    psq_st f30, 0x508(r1), 0, 0
    stfd f29, 0x4f0(r1)
    psq_st f29, 0x4f8(r1), 0, 0
    stfd f28, 0x4e0(r1)
    psq_st f28, 0x4e8(r1), 0, 0
    stfd f27, 0x4d0(r1)
    psq_st f27, 0x4d8(r1), 0, 0
    stfd f26, 0x4c0(r1)
    psq_st f26, 0x4c8(r1), 0, 0
    stfd f25, 0x4b0(r1)
    psq_st f25, 0x4b8(r1), 0, 0
    stw r31, 0x4ac(r1)
    mr r31, r3
    stw r30, 0x4a8(r1)
    stw r29, 0x4a4(r1)
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801829B4_00000A60
    lwz r4, lbl_8087F8A0
    cmpwi r4, 0x0
    beq lbl_fn_801829B4_00000A60
    lwz r0, 0x48(r4)
    cmpwi r0, 0x0
    beq lbl_fn_801829B4_00000A60
    lwz r4, 0x58(r3)
    li r0, 0x0
    addi r4, r4, 0x1
    stw r4, 0x58(r3)
    lwz r3, lbl_8087F430
    stw r0, 0x8a0(r3)
    lwz r3, lbl_8087F8A0
    lwz r3, 0x48(r3)
    lwz r0, 0x490(r3)
    cmpwi r0, 0x1f
    beq lbl_fn_801829B4_00000944
    li r4, 0x3
    li r5, 0x1f
    bl fn_8014C0B4
    lwz r3, lbl_8087F8A0
    li r4, 0x2
    li r5, 0x19
    lwz r3, 0x48(r3)
    bl fn_8014C0B4
lbl_fn_801829B4_00000944:
    li r0, 0x0
    stw r0, 0x54(r31)
    stw r0, 0x50(r31)
    stw r0, 0x4c(r31)
    lwz r3, lbl_8087F408
    lwz r7, 0x48(r3)
    b lbl_fn_801829B4_00000A58
lbl_fn_801829B4_00000960:
    lwz r6, 0x38(r7)
    li r4, 0x0
    li r0, 0x0
    li r3, 0x0
    rlwinm r5, r6, 0, 29, 29
    cmplwi r5, 0x4
    beq lbl_fn_801829B4_0000098C
    clrlwi r5, r6, 31
    cmplwi r5, 0x1
    beq lbl_fn_801829B4_0000098C
    li r3, 0x1
lbl_fn_801829B4_0000098C:
    cmpwi r3, 0x0
    beq lbl_fn_801829B4_000009A8
    lwz r3, 0x7e0(r7)
    rlwinm r3, r3, 0, 26, 26
    cmplwi r3, 0x20
    beq lbl_fn_801829B4_000009A8
    li r0, 0x1
lbl_fn_801829B4_000009A8:
    cmpwi r0, 0x0
    beq lbl_fn_801829B4_000009DC
    lwz r0, 0x55c(r7)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_801829B4_000009D0
    lwz r0, 0x560(r7)
    cmpwi r0, 0x1c
    bne lbl_fn_801829B4_000009D0
    li r3, 0x1
lbl_fn_801829B4_000009D0:
    cmpwi r3, 0x0
    bne lbl_fn_801829B4_000009DC
    li r4, 0x1
lbl_fn_801829B4_000009DC:
    cmpwi r4, 0x0
    beq lbl_fn_801829B4_00000A54
    lwz r3, 0x60(r7)
    lwz r0, 0x24(r3)
    cmpwi r0, 0x35
    bne lbl_fn_801829B4_00000A54
    lwz r0, 0x14b0(r7)
    cmpwi r0, 0x1
    blt lbl_fn_801829B4_00000A08
    cmpwi r0, 0x2
    ble lbl_fn_801829B4_00000A38
lbl_fn_801829B4_00000A08:
    cmpwi r0, 0x3
    beq lbl_fn_801829B4_00000A1C
    cmpwi r0, 0x4
    beq lbl_fn_801829B4_00000A48
    b lbl_fn_801829B4_00000A54
lbl_fn_801829B4_00000A1C:
    lwz r4, 0x54(r31)
    lwz r3, 0x50(r31)
    addi r0, r4, 0x1
    stw r0, 0x54(r31)
    addi r0, r3, 0x1
    stw r0, 0x50(r31)
    b lbl_fn_801829B4_00000A54
lbl_fn_801829B4_00000A38:
    lwz r3, 0x50(r31)
    addi r0, r3, 0x1
    stw r0, 0x50(r31)
    b lbl_fn_801829B4_00000A54
lbl_fn_801829B4_00000A48:
    lwz r3, 0x4c(r31)
    addi r0, r3, 0x1
    stw r0, 0x4c(r31)
lbl_fn_801829B4_00000A54:
    lwz r7, 0x14ac(r7)
lbl_fn_801829B4_00000A58:
    cmpwi r7, 0x0
    bne lbl_fn_801829B4_00000960
lbl_fn_801829B4_00000A60:
    lwz r0, 0x48(r31)
    cmpwi r0, 0x2
    bne lbl_fn_801829B4_00000A84
    lwz r3, 0x6c(r31)
    lwz r4, 0xf8(r31)
    addi r0, r3, 0x1
    stw r0, 0x6c(r31)
    lwz r3, lbl_8087F430
    stw r4, 0x8a0(r3)
lbl_fn_801829B4_00000A84:
    lwz r0, 0x1b8(r31)
    lwz r3, lbl_8087F8A0
    cmpwi r0, 0x0
    lwz r29, 0x48(r3)
    beq lbl_fn_801829B4_000013D0
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_801829B4_000013D0
    lwz r0, 0x54e4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801829B4_000013D0
    lwz r0, 0x5c(r31)
    cmpwi r0, 0x0
    ble lbl_fn_801829B4_000013D0
    lwz r0, 0x12a4(r29)
    extrwi. r3, r0, 1, 25
    bne lbl_fn_801829B4_000013D0
    srwi. r0, r0, 31
    li r3, 0x0
    beq lbl_fn_801829B4_00000AE4
    lwz r0, 0xc48(r29)
    cmpwi r0, 0x0
    beq lbl_fn_801829B4_00000AE4
    li r3, 0x1
lbl_fn_801829B4_00000AE4:
    cmpwi r3, 0x0
    bne lbl_fn_801829B4_000013D0
    addi r3, r1, 0x108
    psq_l f1, 0x528(r29), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    addi r3, r1, 0xfc
    lfs f2, 0x530(r29)
    lfs f0, 0x68(r31)
    lfs f9, 0x64(r31)
    lfs f8, 0x10c(r1)
    fsubs f10, f0, f2
    lfs f7, 0x60(r31)
    lfs f0, 0x108(r1)
    fsubs f8, f9, f8
    stfs f2, 0x110(r1)
    fsubs f0, f7, f0
    stfs f8, 0x100(r1)
    stfs f0, 0xfc(r1)
    stfs f10, 0x104(r1)
    bl fn_805F9940
    fmr f31, f1
    addi r3, r1, 0xfc
    mr r4, r3
    bl fn_805F98D0
    lwz r0, 0x1bc(r31)
    cmpwi r0, 0x1
    bne lbl_fn_801829B4_00000B58
    lfs f0, lbl_80881C48
    stfs f0, 0x100(r1)
lbl_fn_801829B4_00000B58:
    lwz r5, lbl_8087F0A8
    addi r3, r1, 0xf0
    lfs f0, lbl_80881C60
    addi r4, r1, 0xfc
    psq_l f1, 0x52c(r5), 0, 0
    addi r30, r1, 0xcc
    lfs f2, 0x534(r5)
    stfs f2, 0xf8(r1)
    lfs f2, 0x104(r1)
    psq_st f1, 0x0(r3), 0, 0
    fabs f7, f2
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    frsp f7, f7
    stfs f2, 0xd4(r1)
    fcmpo cr0, f7, f0
    bge lbl_fn_801829B4_00000BC0
    lfs f7, 0xcc(r1)
    lfs f0, lbl_80881C48
    fcmpo cr0, f7, f0
    ble lbl_fn_801829B4_00000BB4
    lfs f0, lbl_80881C64
    b lbl_fn_801829B4_00000BB8
lbl_fn_801829B4_00000BB4:
    lfs f0, lbl_80881C68
lbl_fn_801829B4_00000BB8:
    stfs f0, 0xac(r1)
    b lbl_fn_801829B4_00000BD4
lbl_fn_801829B4_00000BC0:
    frsp f2, f2
    lfs f1, 0xcc(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0xac(r1)
lbl_fn_801829B4_00000BD4:
    lfs f0, 0xac(r1)
    addi r3, r1, 0x2a8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f7, lbl_80881C48
    addi r4, r1, 0x9c
    lfs f25, 0x2b0(r1)
    mr r5, r4
    lfs f26, 0x2ac(r1)
    addi r3, r1, 0x2d8
    lfs f27, 0x2a8(r1)
    lfs f28, 0x2c0(r1)
    lfs f29, 0x2bc(r1)
    lfs f30, 0x2b8(r1)
    lfs f13, 0x2d0(r1)
    lfs f12, 0x2cc(r1)
    lfs f11, 0x2c8(r1)
    lfs f10, 0x2d4(r1)
    lfs f9, 0x2c4(r1)
    lfs f8, 0x2b4(r1)
    lfs f0, lbl_80881C4C
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0xd4(r1)
    stfs f7, 0x308(r1)
    stfs f7, 0x30c(r1)
    stfs f7, 0x310(r1)
    stfs f0, 0x314(r1)
    stfs f27, 0x6c(r1)
    stfs f26, 0x70(r1)
    stfs f25, 0x74(r1)
    stfs f27, 0x2d8(r1)
    stfs f26, 0x2dc(r1)
    stfs f25, 0x2e0(r1)
    stfs f30, 0x78(r1)
    stfs f29, 0x7c(r1)
    stfs f28, 0x80(r1)
    stfs f30, 0x2e8(r1)
    stfs f29, 0x2ec(r1)
    stfs f28, 0x2f0(r1)
    stfs f11, 0x84(r1)
    stfs f12, 0x88(r1)
    stfs f13, 0x8c(r1)
    stfs f11, 0x2f8(r1)
    stfs f12, 0x2fc(r1)
    stfs f13, 0x300(r1)
    stfs f8, 0x90(r1)
    stfs f9, 0x94(r1)
    stfs f10, 0x98(r1)
    stfs f8, 0x2e4(r1)
    stfs f9, 0x2f4(r1)
    stfs f10, 0x304(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xa4(r1)
    bl fn_805F9750
    lfs f2, 0xa4(r1)
    lfs f0, lbl_80881C60
    fabs f7, f2
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_801829B4_00000CF0
    lfs f7, 0xa0(r1)
    lfs f0, lbl_80881C48
    fcmpo cr0, f7, f0
    ble lbl_fn_801829B4_00000CE0
    lfs f0, lbl_80881C64
    b lbl_fn_801829B4_00000CE4
lbl_fn_801829B4_00000CE0:
    lfs f0, lbl_80881C68
lbl_fn_801829B4_00000CE4:
    fneg f0, f0
    stfs f0, 0xa8(r1)
    b lbl_fn_801829B4_00000D04
lbl_fn_801829B4_00000CF0:
    lfs f1, 0xa0(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0xa8(r1)
lbl_fn_801829B4_00000D04:
    addi r3, r1, 0xa8
    lfs f2, lbl_80881C48
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x438
    psq_st f1, 0x0(r30), 0, 0
    li r4, 0x79
    lfs f1, 0xd0(r1)
    stfs f2, 0xb0(r1)
    stfs f2, 0xd4(r1)
    bl fn_805F8E70
    addi r4, r1, 0xf0
    addi r3, r1, 0x438
    mr r5, r4
    bl fn_805F93C0
    lfs f2, 0x104(r1)
    addi r3, r1, 0xfc
    lfs f7, 0x108(r1)
    addi r30, r1, 0xe4
    fabs f9, f2
    lfs f0, 0xf0(r1)
    psq_l f1, 0x0(r3), 0, 0
    fadds f10, f7, f0
    lfs f8, 0x10c(r1)
    lfs f7, 0xf4(r1)
    frsp f11, f9
    lfs f0, lbl_80881C60
    fadds f9, f8, f7
    lfs f8, 0x110(r1)
    lfs f7, 0xf8(r1)
    fcmpo cr0, f11, f0
    stfs f10, 0x108(r1)
    fadds f0, f8, f7
    stfs f9, 0x10c(r1)
    stfs f0, 0x110(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0xec(r1)
    bge lbl_fn_801829B4_00000DBC
    lfs f7, 0xe4(r1)
    lfs f0, lbl_80881C48
    fcmpo cr0, f7, f0
    ble lbl_fn_801829B4_00000DB0
    lfs f0, lbl_80881C64
    b lbl_fn_801829B4_00000DB4
lbl_fn_801829B4_00000DB0:
    lfs f0, lbl_80881C68
lbl_fn_801829B4_00000DB4:
    stfs f0, 0x64(r1)
    b lbl_fn_801829B4_00000DD0
lbl_fn_801829B4_00000DBC:
    frsp f2, f2
    lfs f1, 0xe4(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x64(r1)
lbl_fn_801829B4_00000DD0:
    lfs f0, 0x64(r1)
    addi r3, r1, 0x238
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f7, lbl_80881C48
    addi r4, r1, 0x54
    lfs f30, 0x240(r1)
    mr r5, r4
    lfs f29, 0x23c(r1)
    addi r3, r1, 0x268
    lfs f28, 0x238(r1)
    lfs f27, 0x250(r1)
    lfs f26, 0x24c(r1)
    lfs f25, 0x248(r1)
    lfs f13, 0x260(r1)
    lfs f12, 0x25c(r1)
    lfs f11, 0x258(r1)
    lfs f10, 0x264(r1)
    lfs f9, 0x254(r1)
    lfs f8, 0x244(r1)
    lfs f0, lbl_80881C4C
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0xec(r1)
    stfs f7, 0x298(r1)
    stfs f7, 0x29c(r1)
    stfs f7, 0x2a0(r1)
    stfs f0, 0x2a4(r1)
    stfs f28, 0x24(r1)
    stfs f29, 0x28(r1)
    stfs f30, 0x2c(r1)
    stfs f28, 0x268(r1)
    stfs f29, 0x26c(r1)
    stfs f30, 0x270(r1)
    stfs f25, 0x30(r1)
    stfs f26, 0x34(r1)
    stfs f27, 0x38(r1)
    stfs f25, 0x278(r1)
    stfs f26, 0x27c(r1)
    stfs f27, 0x280(r1)
    stfs f11, 0x3c(r1)
    stfs f12, 0x40(r1)
    stfs f13, 0x44(r1)
    stfs f11, 0x288(r1)
    stfs f12, 0x28c(r1)
    stfs f13, 0x290(r1)
    stfs f8, 0x48(r1)
    stfs f9, 0x4c(r1)
    stfs f10, 0x50(r1)
    stfs f8, 0x274(r1)
    stfs f9, 0x284(r1)
    stfs f10, 0x294(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x5c(r1)
    bl fn_805F9750
    lfs f2, 0x5c(r1)
    lfs f0, lbl_80881C60
    fabs f7, f2
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_801829B4_00000EEC
    lfs f7, 0x58(r1)
    lfs f0, lbl_80881C48
    fcmpo cr0, f7, f0
    ble lbl_fn_801829B4_00000EDC
    lfs f0, lbl_80881C64
    b lbl_fn_801829B4_00000EE0
lbl_fn_801829B4_00000EDC:
    lfs f0, lbl_80881C68
lbl_fn_801829B4_00000EE0:
    fneg f0, f0
    stfs f0, 0x60(r1)
    b lbl_fn_801829B4_00000F00
lbl_fn_801829B4_00000EEC:
    lfs f1, 0x58(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x60(r1)
lbl_fn_801829B4_00000F00:
    lwz r0, 0x1bc(r31)
    addi r3, r1, 0x60
    lfs f2, lbl_80881C48
    psq_l f1, 0x0(r3), 0, 0
    cmpwi r0, 0x0
    stfs f2, 0x68(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0xec(r1)
    bne lbl_fn_801829B4_00000F84
    lfs f8, lbl_80881C6C
    lfs f7, 0x1b4(r31)
    lfs f0, lbl_80881C70
    fmuls f7, f8, f7
    fmuls f1, f0, f7
    bl fn_8068AD58
    frsp f8, f1
    lfs f7, lbl_80881C74
    lfs f0, 0x10c(r1)
    lfs f1, 0xe4(r1)
    fmadds f0, f7, f8, f0
    stfs f0, 0x10c(r1)
    bl fn_8068AD58
    frsp f8, f1
    lwz r0, 0x12a4(r29)
    lfs f7, lbl_80881C78
    lfs f0, 0x10c(r1)
    extrwi. r0, r0, 1, 28
    fneg f8, f8
    fmadds f0, f7, f8, f0
    stfs f0, 0x10c(r1)
    beq lbl_fn_801829B4_00000F84
    fadds f0, f0, f7
    stfs f0, 0x10c(r1)
lbl_fn_801829B4_00000F84:
    lwz r5, lbl_8087EFB4
    addi r30, r1, 0xc0
    addi r6, r1, 0x18
    lfs f7, 0x120(r5)
    mr r3, r30
    lfs f0, 0x114(r5)
    mr r4, r30
    lfs f9, 0x11c(r5)
    fsubs f2, f7, f0
    lfs f8, 0x110(r5)
    lfs f7, 0x118(r5)
    lfs f0, 0x10c(r5)
    fsubs f8, f9, f8
    stfs f2, 0x20(r1)
    fsubs f0, f7, f0
    stfs f8, 0x1c(r1)
    stfs f0, 0x18(r1)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0xc8(r1)
    bl fn_805F98D0
    lfs f7, lbl_80881C48
    mr r3, r30
    lfs f0, lbl_80881C4C
    addi r4, r1, 0xb4
    stfs f7, 0xb4(r1)
    addi r5, r1, 0xd8
    stfs f0, 0xb8(r1)
    stfs f7, 0xbc(r1)
    bl fn_805F99B0
    lwz r5, lbl_8087F0A8
    addi r3, r1, 0x468
    addi r4, r1, 0xd8
    lfs f1, 0x538(r5)
    bl fn_805F9050
    lfs f1, 0x108(r1)
    addi r3, r1, 0x3d8
    lfs f2, 0x10c(r1)
    lfs f3, 0x110(r1)
    bl fn_805F90D0
    addi r3, r1, 0x3d8
    addi r4, r1, 0x468
    addi r5, r1, 0x408
    bl fn_805F89F0
    addi r3, r1, 0x408
    lfs f8, lbl_80881C48
    psq_l f1, 0x0(r3), 0, 0
    addi r30, r1, 0x348
    lfs f0, 0xec(r1)
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    fcmpu cr0, f8, f0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f6, 0x16c(r31), 0, 0
    lfs f7, lbl_80881C4C
    psq_st f1, 0x144(r31), 0, 0
    psq_st f2, 0x14c(r31), 0, 0
    psq_st f3, 0x154(r31), 0, 0
    psq_st f4, 0x15c(r31), 0, 0
    psq_st f5, 0x164(r31), 0, 0
    stfs f8, 0x374(r1)
    stfs f8, 0x36c(r1)
    stfs f8, 0x368(r1)
    stfs f8, 0x364(r1)
    stfs f8, 0x360(r1)
    stfs f8, 0x358(r1)
    stfs f8, 0x354(r1)
    stfs f8, 0x350(r1)
    stfs f8, 0x34c(r1)
    stfs f7, 0x370(r1)
    stfs f7, 0x35c(r1)
    stfs f7, 0x348(r1)
    beq lbl_fn_801829B4_00001104
    fmr f1, f0
    addi r3, r1, 0x148
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x148
    addi r5, r1, 0x118
    bl fn_805F89F0
    addi r3, r1, 0x118
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_801829B4_00001104:
    lfs f0, lbl_80881C48
    lfs f1, 0xe8(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_801829B4_00001164
    addi r3, r1, 0x1a8
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x1a8
    addi r5, r1, 0x178
    bl fn_805F89F0
    addi r3, r1, 0x178
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_801829B4_00001164:
    lfs f0, lbl_80881C48
    lfs f1, 0xe4(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_801829B4_000011C4
    addi r3, r1, 0x208
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x208
    addi r5, r1, 0x1d8
    bl fn_805F89F0
    addi r3, r1, 0x1d8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_801829B4_000011C4:
    lfs f1, 0x108(r1)
    addi r3, r1, 0x318
    lfs f2, 0x10c(r1)
    lfs f3, 0x110(r1)
    bl fn_805F90D0
    mr r4, r30
    addi r3, r1, 0x468
    addi r5, r1, 0x378
    bl fn_805F89F0
    addi r3, r1, 0x318
    addi r4, r1, 0x378
    addi r5, r1, 0x3a8
    bl fn_805F89F0
    addi r3, r1, 0x3a8
    mr r4, r31
    psq_l f1, 0x0(r3), 0, 0
    li r5, 0x0
    psq_l f2, 0x8(r3), 0, 0
    li r6, 0x2
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f6, 0x19c(r31), 0, 0
    psq_st f1, 0x174(r31), 0, 0
    psq_st f2, 0x17c(r31), 0, 0
    psq_st f3, 0x184(r31), 0, 0
    psq_st f4, 0x18c(r31), 0, 0
    psq_st f5, 0x194(r31), 0, 0
    lwz r3, lbl_8087F3C0
    bl fn_8023A098
    lfs f0, lbl_80881C7C
    fcmpo cr0, f31, f0
    bge lbl_fn_801829B4_000012EC
    lfs f7, 0x1b4(r31)
    lfs f0, lbl_80881C74
    fcmpo cr0, f7, f0
    ble lbl_fn_801829B4_000013FC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x0
    bl fn_80239D58
    cmpwi r3, 0x0
    beq lbl_fn_801829B4_00001288
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x0
    li r6, 0x0
    bl fn_80239DAC
lbl_fn_801829B4_00001288:
    li r3, 0x0
    li r4, 0x0
    bl fn_80232B7C
    li r0, 0x0
    stw r0, 0x8(r1)
    li r3, -0x1
    lfs f1, lbl_80881C4C
    stw r3, 0xc(r1)
    li r0, 0x1
    addi r7, r31, 0x174
    li r5, -0x1
    stw r0, 0x10(r1)
    li r6, 0x5
    li r8, 0x0
    li r9, 0x0
    lwz r0, 0x1bc(r31)
    li r10, 0x0
    lwz r3, lbl_8087F3C0
    mulli r0, r0, 0xc
    add r4, r31, r0
    addi r4, r4, 0x12c
    bl fn_8023A680
    lfs f0, lbl_80881C48
    stfs f0, 0x1b4(r31)
    b lbl_fn_801829B4_000013FC
lbl_fn_801829B4_000012EC:
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x0
    bl fn_80239D58
    cmpwi r3, 0x0
    bne lbl_fn_801829B4_000013BC
    mr r3, r31
    li r4, 0x0
    bl fn_80232B7C
    lwz r4, 0x1bc(r31)
    cmpwi r4, 0x0
    beq lbl_fn_801829B4_00001364
    li r0, 0x0
    stw r0, 0x8(r1)
    li r0, -0x1
    li r3, 0x1
    stw r0, 0xc(r1)
    mulli r0, r4, 0xc
    lfs f1, lbl_80881C4C
    addi r7, r31, 0x144
    stw r3, 0x10(r1)
    li r5, -0x1
    add r4, r31, r0
    lwz r3, lbl_8087F3C0
    addi r4, r4, 0xfc
    li r6, 0x5
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_8023A680
lbl_fn_801829B4_00001364:
    li r0, 0x0
    stw r0, 0x8(r1)
    li r3, -0x1
    lfs f1, lbl_80881C4C
    stw r3, 0xc(r1)
    li r0, 0x1
    addi r7, r31, 0x174
    li r5, -0x1
    stw r0, 0x10(r1)
    li r6, 0x5
    li r8, 0x0
    li r9, 0x0
    lwz r0, 0x1bc(r31)
    li r10, 0x0
    lwz r3, lbl_8087F3C0
    mulli r0, r0, 0xc
    add r4, r31, r0
    addi r4, r4, 0x114
    bl fn_8023A680
    lfs f0, lbl_80881C4C
    stfs f0, 0x1b4(r31)
    b lbl_fn_801829B4_000013FC
lbl_fn_801829B4_000013BC:
    lfs f7, 0x1b4(r31)
    lfs f0, lbl_80881C4C
    fadds f0, f7, f0
    stfs f0, 0x1b4(r31)
    b lbl_fn_801829B4_000013FC
lbl_fn_801829B4_000013D0:
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x0
    bl fn_80239D58
    cmpwi r3, 0x0
    beq lbl_fn_801829B4_000013FC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x0
    li r6, 0x0
    bl fn_80239DAC
lbl_fn_801829B4_000013FC:
    lwz r0, 0x524(r1)
    psq_l f31, 0x518(r1), 0, 0
    lfd f31, 0x510(r1)
    psq_l f30, 0x508(r1), 0, 0
    lfd f30, 0x500(r1)
    psq_l f29, 0x4f8(r1), 0, 0
    lfd f29, 0x4f0(r1)
    psq_l f28, 0x4e8(r1), 0, 0
    lfd f28, 0x4e0(r1)
    psq_l f27, 0x4d8(r1), 0, 0
    lfd f27, 0x4d0(r1)
    psq_l f26, 0x4c8(r1), 0, 0
    lfd f26, 0x4c0(r1)
    psq_l f25, 0x4b8(r1), 0, 0
    lfd f25, 0x4b0(r1)
    lwz r31, 0x4ac(r1)
    lwz r30, 0x4a8(r1)
    lwz r29, 0x4a4(r1)
    mtlr r0
    addi r1, r1, 0x520
    blr
}

asm void fn_80183584(void)
{
    nofralloc
    blr
}

asm void fn_80183588(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bne lbl_fn_80183588_000014A0
    lwz r0, 0x1c4(r3)
    lwz r4, lbl_8087F8A0
    slwi r0, r0, 2
    add r0, r3, r0
    lwz r5, 0x48(r4)
    addic. r4, r0, 0x1c8
    beq lbl_fn_80183588_00001490
    stw r5, 0x0(r4)
lbl_fn_80183588_00001490:
    lwz r4, 0x1c4(r3)
    addi r0, r4, 0x1
    stw r0, 0x1c4(r3)
    b lbl_fn_80183588_000014D0
lbl_fn_80183588_000014A0:
    lwz r3, lbl_8087F8A0
    bl fn_8011F91C
    lwz r0, 0x1c4(r31)
    slwi r0, r0, 2
    add r0, r31, r0
    addic. r4, r0, 0x1c8
    beq lbl_fn_80183588_000014C0
    stw r3, 0x0(r4)
lbl_fn_80183588_000014C0:
    lwz r4, 0x1c4(r31)
    addi r0, r4, 0x1
    stw r0, 0x1c4(r31)
    bl fn_8015A184
lbl_fn_80183588_000014D0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80183618(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r30, 0x28(r1)
    mr r30, r4
    lwz r5, lbl_8087FA20
    cmpwi r5, 0x0
    beq lbl_fn_80183618_00001514
    lwz r0, 0x258(r5)
    b lbl_fn_80183618_00001518
lbl_fn_80183618_00001514:
    li r0, 0x0
lbl_fn_80183618_00001518:
    cmpwi r0, 0x0
    beq lbl_fn_80183618_00001534
    lwz r4, 0x1c0(r3)
    cmpwi r4, 0x0
    blt lbl_fn_80183618_00001534
    mr r3, r0
    bl fn_804AAD54
lbl_fn_80183618_00001534:
    li r0, -0x1
    stw r0, 0x1c0(r31)
    li r4, 0x0
    li r6, 0x0
    lwz r3, lbl_8087F430
    lwz r5, 0x10d8(r3)
    lwz r0, 0x78(r5)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80183618_00001584
lbl_fn_80183618_0000155C:
    lwz r3, 0x7c(r5)
    lwzx r0, r3, r6
    cmpw r30, r0
    bne lbl_fn_80183618_00001578
    mulli r0, r4, 0x28
    add r3, r3, r0
    b lbl_fn_80183618_00001588
lbl_fn_80183618_00001578:
    addi r6, r6, 0x28
    addi r4, r4, 0x1
    bdnz lbl_fn_80183618_0000155C
lbl_fn_80183618_00001584:
    li r3, 0x0
lbl_fn_80183618_00001588:
    cmpwi r3, 0x0
    beq lbl_fn_80183618_00001620
    stw r30, 0x5c(r31)
    lwz r0, 0x1b8(r31)
    psq_l f1, 0x4(r3), 0, 0
    lfs f2, 0xc(r3)
    cmpwi r0, 0x0
    stfs f2, 0x68(r31)
    psq_st f1, 0x60(r31), 0, 0
    beq lbl_fn_80183618_00001628
    lwz r3, lbl_8087FA20
    cmpwi r3, 0x0
    beq lbl_fn_80183618_000015C4
    lwz r3, 0x258(r3)
    b lbl_fn_80183618_000015C8
lbl_fn_80183618_000015C4:
    li r3, 0x0
lbl_fn_80183618_000015C8:
    cmpwi r3, 0x0
    beq lbl_fn_80183618_00001628
    lwz r0, 0x5c(r31)
    cmpwi r0, 0x0
    ble lbl_fn_80183618_00001628
    lfs f2, 0x68(r31)
    addi r4, r1, 0x8
    psq_l f1, 0x60(r31), 0, 0
    addi r5, r1, 0x18
    lfs f4, lbl_80881C4C
    psq_st f1, 0x0(r4), 0, 0
    lfs f3, lbl_80881C80
    fmr f1, f4
    lfs f0, lbl_80881C48
    stfs f2, 0x10(r1)
    stfs f4, 0x18(r1)
    stfs f3, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f4, 0x24(r1)
    bl fn_804AABA8
    stw r3, 0x1c0(r31)
    b lbl_fn_80183618_00001628
lbl_fn_80183618_00001620:
    li r0, 0x0
    stw r0, 0x5c(r31)
lbl_fn_80183618_00001628:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80183774(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r4, 0x1b8(r3)
    beq lbl_fn_80183774_000016DC
    lwz r4, 0x5c(r3)
    cmpwi r4, 0x0
    ble lbl_fn_80183774_000016DC
    lwz r5, lbl_8087FA20
    cmpwi r5, 0x0
    beq lbl_fn_80183774_00001680
    lwz r0, 0x258(r5)
    b lbl_fn_80183774_00001684
lbl_fn_80183774_00001680:
    li r0, 0x0
lbl_fn_80183774_00001684:
    cmpwi r0, 0x0
    beq lbl_fn_80183774_00001718
    cmpwi r4, 0x0
    ble lbl_fn_80183774_00001718
    lfs f2, 0x68(r3)
    addi r4, r1, 0x8
    psq_l f1, 0x60(r3), 0, 0
    mr r3, r0
    lfs f4, lbl_80881C4C
    addi r5, r1, 0x18
    psq_st f1, 0x0(r4), 0, 0
    lfs f3, lbl_80881C80
    fmr f1, f4
    lfs f0, lbl_80881C48
    stfs f2, 0x10(r1)
    stfs f4, 0x18(r1)
    stfs f3, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f4, 0x24(r1)
    bl fn_804AABA8
    stw r3, 0x1c0(r31)
    b lbl_fn_80183774_00001718
lbl_fn_80183774_000016DC:
    lwz r4, lbl_8087FA20
    cmpwi r4, 0x0
    beq lbl_fn_80183774_000016F0
    lwz r0, 0x258(r4)
    b lbl_fn_80183774_000016F4
lbl_fn_80183774_000016F0:
    li r0, 0x0
lbl_fn_80183774_000016F4:
    cmpwi r0, 0x0
    beq lbl_fn_80183774_00001710
    lwz r4, 0x1c0(r3)
    cmpwi r4, 0x0
    blt lbl_fn_80183774_00001710
    mr r3, r0
    bl fn_804AAD54
lbl_fn_80183774_00001710:
    li r0, -0x1
    stw r0, 0x1c0(r31)
lbl_fn_80183774_00001718:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80183860(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x30
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    bl _savegpr_26
    lwz r0, 0xf8(r3)
    mr r26, r3
    mr r27, r4
    cmpwi r0, 0x0
    beq lbl_fn_80183860_00001764
    mr r3, r0
    b lbl_fn_80183860_000017DC
lbl_fn_80183860_00001764:
    lfs f31, lbl_80881C84
    mr r31, r26
    li r30, 0x0
    li r29, 0x0
    b lbl_fn_80183860_000017CC
lbl_fn_80183860_00001778:
    lwz r28, 0x1c8(r31)
    addi r3, r1, 0x8
    lfs f1, 0x8(r27)
    lfs f0, 0x530(r28)
    lfs f3, 0x4(r27)
    fsubs f4, f1, f0
    lfs f2, 0x52c(r28)
    lfs f0, 0x528(r28)
    lfs f1, 0x0(r27)
    fsubs f2, f3, f2
    stfs f4, 0x10(r1)
    fsubs f0, f1, f0
    stfs f2, 0xc(r1)
    stfs f0, 0x8(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f31
    bge lbl_fn_80183860_000017C4
    mr r30, r28
    fmr f31, f1
lbl_fn_80183860_000017C4:
    addi r31, r31, 0x4
    addi r29, r29, 0x1
lbl_fn_80183860_000017CC:
    lwz r0, 0x1c4(r26)
    cmplw r29, r0
    blt lbl_fn_80183860_00001778
    mr r3, r30
lbl_fn_80183860_000017DC:
    addi r11, r1, 0x30
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    bl _restgpr_26
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80183930(void)
{
    nofralloc
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    beqlr
    li r0, 0x3
    stw r0, 0x48(r3)
    blr
}

asm void fn_80183948(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80183948_000018AC
    li r0, 0x0
    li r4, 0x1
    stw r0, 0x70(r3)
    mr r30, r29
    li r31, 0x0
    stw r0, 0xf8(r3)
    stw r4, 0x48(r3)
    stw r0, 0x74(r3)
    stw r0, 0x58(r3)
    b lbl_fn_80183948_00001884
lbl_fn_80183948_00001864:
    lwz r4, lbl_8087F8A0
    lwz r3, 0x1c8(r30)
    lwz r0, 0x48(r4)
    cmplw r3, r0
    beq lbl_fn_80183948_0000187C
    bl fn_8015A184
lbl_fn_80183948_0000187C:
    addi r30, r30, 0x4
    addi r31, r31, 0x1
lbl_fn_80183948_00001884:
    lwz r0, 0x1c4(r29)
    cmplw r31, r0
    blt lbl_fn_80183948_00001864
    lwz r3, lbl_8087F418
    cmpwi r3, 0x0
    beq lbl_fn_80183948_000018AC
    li r4, 0x0
    li r5, 0x8
    li r6, 0x3c
    bl fn_80360780
lbl_fn_80183948_000018AC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801839FC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_fn_801839FC_0000195C
    lwz r0, lbl_8087F0A0
    cmpwi r0, 0x0
    bne lbl_fn_801839FC_0000195C
    lis r5, lbl_8073821C@ha
    li r3, 0x68
    addi r5, r5, lbl_8073821C@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_801839FC_00001958
    mr r4, r30
    bl fn_800D1D3C
    lis r4, lbl_8077CC48@ha
    li r3, 0x1
    addi r4, r4, lbl_8077CC48@l
    stw r4, 0x0(r31)
    li r4, 0x0
    li r0, -0x1
    stw r3, 0x48(r31)
    addi r3, r31, 0x5c
    stw r4, 0x4c(r31)
    stw r4, 0x50(r31)
    stw r4, 0x54(r31)
    stw r0, 0x58(r31)
    bl fn_802377B8
lbl_fn_801839FC_00001958:
    stw r31, lbl_8087F0A0
lbl_fn_801839FC_0000195C:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    lwz r3, lbl_8087F0A0
    mtlr r0
    addi r1, r1, 0x10
    blr
}
