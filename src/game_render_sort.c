#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_23(void);
extern void _savegpr_23(void);
extern void fn_8004D124(void);
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800CB5C8(void);
extern void fn_800DD3FC(void);
extern void fn_800F8548(void);
extern void fn_800FAB80(void);
extern void fn_80109828(void);
extern void fn_8013322C(void);
extern void fn_801426A4(void);
extern void fn_801595BC(void);
extern void fn_8015AC48(void);
extern void fn_80166A54(void);
extern void fn_8016E970(void);
extern void fn_801789D8(void);
extern void fn_80232B7C(void);
extern void fn_80239DAC(void);
extern void fn_8023A8B4(void);
extern void fn_802AC0E0(void);
extern void fn_80370A78(void);
extern void fn_80370AE4(void);
extern void fn_805F8E70(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);

/* External data declarations */
extern u8 lbl_80745FD0[];
extern u8 lbl_80745FE4[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087F048;
extern u32 lbl_8087F1E4;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F8A0;
extern u32 lbl_808813D0;
extern u32 lbl_80883E38;
extern u32 lbl_80883E3C;
extern u32 lbl_80883E40;
extern u32 lbl_80883E44;
extern u32 lbl_80883E50;
extern u32 lbl_80883E60;
extern u32 lbl_80883E68;
extern u32 lbl_80883E6C;
extern u32 lbl_80883E7C;
extern u32 lbl_80883E90;
extern u32 lbl_80883E94;
extern u32 lbl_80883E98;
extern u32 lbl_80883E9C;
extern u32 lbl_80883EA0;
extern u32 lbl_80883EA4;
extern u32 lbl_80883EA8;
extern u32 lbl_80883EAC;
extern u32 lbl_80883EB0;
extern u32 lbl_80883EB4;
extern u32 lbl_80883EB8;
extern u32 lbl_80883EBC;
extern u32 lbl_80883EC0;
extern u32 lbl_80883EC4;
extern u32 lbl_80883EC8;

/* Function declarations */
void fn_802A74A4(void);
void fn_802A7910(void);
void fn_802A7964(void);
void fn_802A7970(void);
void fn_802A7F9C(void);
void fn_802A807C(void);
void fn_802A8140(void);
void fn_802A8148(void);
void fn_802A820C(void);
void fn_802A8718(void);
void fn_802A8BBC(void);

asm void fn_802A74A4(void)
{
    nofralloc
    stwu r1, -0x140(r1)
    mflr r0
    stw r0, 0x144(r1)
    stfd f31, 0x130(r1)
    psq_st f31, 0x138(r1), 0, 0
    stfd f30, 0x120(r1)
    psq_st f30, 0x128(r1), 0, 0
    stfd f29, 0x110(r1)
    psq_st f29, 0x118(r1), 0, 0
    stw r31, 0x10c(r1)
    mr r31, r3
    stw r30, 0x108(r1)
    stw r29, 0x104(r1)
    lwz r0, 0x14b0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_802A74A4_00000438
    lfs f3, 0x530(r3)
    lfs f0, 0x15cc(r3)
    lfs f5, 0x52c(r3)
    fsubs f6, f3, f0
    lfs f4, 0x15c8(r3)
    lfs f3, 0x528(r3)
    lfs f0, 0x15c4(r3)
    fsubs f4, f5, f4
    addi r3, r1, 0x80
    fsubs f0, f3, f0
    stfs f4, 0x84(r1)
    stfs f0, 0x80(r1)
    stfs f6, 0x88(r1)
    bl fn_805F9940
    lfs f0, 0x15d0(r31)
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_802A74A4_000000A4
    li r3, 0x6
    li r0, 0x0
    stw r3, 0x14f4(r31)
    mr r3, r31
    stw r0, 0x15e4(r31)
    bl fn_802AC0E0
    b lbl_fn_802A74A4_00000438
lbl_fn_802A74A4_000000A4:
    lwz r5, 0x14b0(r31)
    addi r4, r1, 0x74
    lfs f0, 0x530(r31)
    addi r3, r1, 0x68
    psq_l f1, 0x528(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lfs f2, 0x530(r5)
    lfs f5, 0x78(r1)
    lfs f4, 0x52c(r31)
    fsubs f6, f2, f0
    lfs f0, 0x528(r31)
    lfs f3, 0x74(r1)
    fsubs f4, f5, f4
    stfs f2, 0x7c(r1)
    fsubs f0, f3, f0
    stfs f4, 0x6c(r1)
    stfs f0, 0x68(r1)
    stfs f6, 0x70(r1)
    bl fn_805F9940
    addi r3, r1, 0x68
    addi r30, r1, 0x50
    fmr f31, f1
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x70(r1)
    mr r3, r30
    psq_st f1, 0x0(r30), 0, 0
    mr r4, r30
    stfs f2, 0x58(r1)
    bl fn_805F98D0
    lfs f2, 0x58(r1)
    addi r29, r1, 0x5c
    psq_l f1, 0x0(r30), 0, 0
    fabs f3, f2
    lfs f0, lbl_80883E90
    psq_st f1, 0x0(r29), 0, 0
    frsp f3, f3
    stfs f2, 0x64(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_802A74A4_00000164
    lfs f3, 0x5c(r1)
    lfs f0, lbl_80883E40
    fcmpo cr0, f3, f0
    ble lbl_fn_802A74A4_00000158
    lfs f0, lbl_80883E94
    b lbl_fn_802A74A4_0000015C
lbl_fn_802A74A4_00000158:
    lfs f0, lbl_80883E98
lbl_fn_802A74A4_0000015C:
    stfs f0, 0x48(r1)
    b lbl_fn_802A74A4_00000178
lbl_fn_802A74A4_00000164:
    frsp f2, f2
    lfs f1, 0x5c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_802A74A4_00000178:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x90
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883E40
    addi r4, r1, 0x38
    lfs f29, 0x98(r1)
    mr r5, r4
    lfs f30, 0x94(r1)
    addi r3, r1, 0xc0
    lfs f13, 0x90(r1)
    lfs f12, 0xa8(r1)
    lfs f11, 0xa4(r1)
    lfs f10, 0xa0(r1)
    lfs f9, 0xb8(r1)
    lfs f8, 0xb4(r1)
    lfs f7, 0xb0(r1)
    lfs f6, 0xbc(r1)
    lfs f5, 0xac(r1)
    lfs f4, 0x9c(r1)
    lfs f0, lbl_80883E44
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x64(r1)
    stfs f3, 0xf0(r1)
    stfs f3, 0xf4(r1)
    stfs f3, 0xf8(r1)
    stfs f0, 0xfc(r1)
    stfs f13, 0x8(r1)
    stfs f30, 0xc(r1)
    stfs f29, 0x10(r1)
    stfs f13, 0xc0(r1)
    stfs f30, 0xc4(r1)
    stfs f29, 0xc8(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xd0(r1)
    stfs f11, 0xd4(r1)
    stfs f12, 0xd8(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0xe0(r1)
    stfs f8, 0xe4(r1)
    stfs f9, 0xe8(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xcc(r1)
    stfs f5, 0xdc(r1)
    stfs f6, 0xec(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80883E90
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802A74A4_00000294
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80883E40
    fcmpo cr0, f3, f0
    ble lbl_fn_802A74A4_00000284
    lfs f0, lbl_80883E94
    b lbl_fn_802A74A4_00000288
lbl_fn_802A74A4_00000284:
    lfs f0, lbl_80883E98
lbl_fn_802A74A4_00000288:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_802A74A4_000002A8
lbl_fn_802A74A4_00000294:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_802A74A4_000002A8:
    addi r3, r1, 0x44
    lfs f2, lbl_80883E40
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_80745FD0@ha
    psq_st f1, 0x0(r29), 0, 0
    lfs f0, 0x538(r31)
    lfs f3, 0x60(r1)
    stfs f2, 0x64(r1)
    fsubs f3, f3, f0
    lfs f0, lbl_80883E9C
    stfs f2, 0x4c(r1)
    lfd f2, lbl_80745FD0@l(r3)
    fmuls f1, f0, f3
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_80883EA0
    fcmpo cr0, f3, f0
    ble lbl_fn_802A74A4_000002F8
    lfs f0, lbl_80883EA4
    fsubs f3, f3, f0
lbl_fn_802A74A4_000002F8:
    lfs f0, lbl_80883EA8
    fcmpo cr0, f3, f0
    lwz r0, 0x15e4(r31)
    lwz r3, lbl_8087F8A0
    cmpwi r0, 0x3c
    lwz r29, 0x48(r3)
    blt lbl_fn_802A74A4_0000037C
    mr r3, r29
    li r4, 0x9c
    li r5, 0x0
    bl fn_801789D8
    cmpwi r3, 0x0
    bne lbl_fn_802A74A4_00000344
    mr r3, r29
    li r4, 0xa0
    li r5, 0x0
    bl fn_801789D8
    cmpwi r3, 0x0
    beq lbl_fn_802A74A4_0000037C
lbl_fn_802A74A4_00000344:
    lwz r3, lbl_8087F430
    li r4, 0xdc
    bl fn_80370A78
    cmpwi r3, 0x0
    bne lbl_fn_802A74A4_00000368
    lwz r3, lbl_8087F430
    li r4, 0xdc
    li r5, 0x1
    bl fn_80370AE4
lbl_fn_802A74A4_00000368:
    li r3, 0x6
    li r0, 0x0
    stw r3, 0x14f4(r31)
    stw r0, 0x15e4(r31)
    b lbl_fn_802A74A4_00000430
lbl_fn_802A74A4_0000037C:
    lwz r3, 0x15e4(r31)
    lwz r0, 0x14bc(r31)
    cmpw r3, r0
    bge lbl_fn_802A74A4_00000420
    lis r3, 0x6666
    lwz r4, 0x14cc(r31)
    addi r0, r3, 0x6667
    mulhw r0, r0, r4
    srawi r0, r0, 1
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r0, r0, 0x5
    subf r3, r0, r4
    subi r0, r3, 0x1
    cmplwi r0, 0x1
    ble lbl_fn_802A74A4_00000408
    cmpwi r3, 0x0
    beq lbl_fn_802A74A4_000003D8
    cmpwi r3, 0x4
    beq lbl_fn_802A74A4_00000408
    cmpwi r3, 0x3
    beq lbl_fn_802A74A4_00000414
    b lbl_fn_802A74A4_00000430
lbl_fn_802A74A4_000003D8:
    lfs f0, lbl_80883E60
    fcmpo cr0, f0, f31
    bge lbl_fn_802A74A4_000003FC
    lfs f0, 0x15d0(r31)
    fcmpo cr0, f31, f0
    bge lbl_fn_802A74A4_000003FC
    li r0, 0x2
    stw r0, 0x14f4(r31)
    b lbl_fn_802A74A4_00000430
lbl_fn_802A74A4_000003FC:
    li r0, 0x1
    stw r0, 0x14f4(r31)
    b lbl_fn_802A74A4_00000430
lbl_fn_802A74A4_00000408:
    li r0, 0x1
    stw r0, 0x14f4(r31)
    b lbl_fn_802A74A4_00000430
lbl_fn_802A74A4_00000414:
    li r0, 0x3
    stw r0, 0x14f4(r31)
    b lbl_fn_802A74A4_00000430
lbl_fn_802A74A4_00000420:
    li r3, 0x6
    li r0, 0x0
    stw r3, 0x14f4(r31)
    stw r0, 0x15e4(r31)
lbl_fn_802A74A4_00000430:
    mr r3, r31
    bl fn_802AC0E0
lbl_fn_802A74A4_00000438:
    lwz r0, 0x144(r1)
    psq_l f31, 0x138(r1), 0, 0
    lfd f31, 0x130(r1)
    psq_l f30, 0x128(r1), 0, 0
    lfd f30, 0x120(r1)
    psq_l f29, 0x118(r1), 0, 0
    lfd f29, 0x110(r1)
    lwz r31, 0x10c(r1)
    lwz r30, 0x108(r1)
    lwz r29, 0x104(r1)
    mtlr r0
    addi r1, r1, 0x140
    blr
}

asm void fn_802A7910(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r3, lbl_80745FD0@ha
    stw r0, 0x14(r1)
    lfd f2, lbl_80745FD0@l(r3)
    bl fn_8068AEA8
    frsp f1, f1
    lfs f0, lbl_80883EA0
    fcmpo cr0, f1, f0
    ble lbl_fn_802A7910_0000049C
    lfs f0, lbl_80883EA4
    fsubs f1, f1, f0
lbl_fn_802A7910_0000049C:
    lfs f0, lbl_80883EA8
    fcmpo cr0, f1, f0
    bge lbl_fn_802A7910_000004B0
    lfs f0, lbl_80883EA4
    fadds f1, f1, f0
lbl_fn_802A7910_000004B0:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802A7964(void)
{
    nofralloc
    lfs f0, lbl_80883E9C
    fmuls f1, f0, f1
    blr
}

asm void fn_802A7970(void)
{
    nofralloc
    stwu r1, -0xe0(r1)
    mflr r0
    lis r4, lbl_80745FE4@ha
    stw r0, 0xe4(r1)
    addi r4, r4, lbl_80745FE4@l
    addi r5, r1, 0x8c
    addi r6, r1, 0xa4
    stfd f31, 0xd0(r1)
    addi r4, r4, 0x1aa
    psq_st f31, 0xd8(r1), 0, 0
    stfd f30, 0xc0(r1)
    psq_st f30, 0xc8(r1), 0, 0
    stw r31, 0xbc(r1)
    mr r31, r3
    lfs f5, 0x52c(r3)
    lfs f4, 0x5a8(r3)
    lfs f3, 0x528(r3)
    fadds f5, f5, f4
    lfs f0, 0x5a4(r3)
    lfs f4, 0x5b0(r3)
    fadds f0, f3, f0
    stfs f5, 0x90(r1)
    lfs f3, 0x530(r3)
    stfs f0, 0x8c(r1)
    lfs f0, 0x5ac(r3)
    psq_l f1, 0x0(r5), 0, 0
    li r5, 0x0
    fadds f3, f3, f0
    psq_st f1, 0x614(r3), 0, 0
    lfs f0, 0x618(r3)
    fmr f2, f3
    stfs f4, 0x620(r3)
    fadds f0, f0, f4
    stfs f2, 0x61c(r3)
    frsp f2, f2
    stfs f0, 0x618(r3)
    psq_l f1, 0x614(r3), 0, 0
    addi r3, r3, 0xb0
    stfs f3, 0x94(r1)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0xac(r1)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802A7970_00000584
    li r5, 0x0
    b lbl_fn_802A7970_00000590
lbl_fn_802A7970_00000584:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r5, r3, r0
lbl_fn_802A7970_00000590:
    lfs f0, 0x1c(r5)
    lis r3, lbl_80745FE4@ha
    lfs f3, 0xc(r5)
    addi r4, r1, 0x80
    stfs f0, 0x84(r1)
    addi r6, r1, 0x98
    lfs f4, 0x2c(r5)
    addi r7, r1, 0xa4
    stfs f3, 0x80(r1)
    addi r3, r3, lbl_80745FE4@l
    fmr f2, f4
    lfs f5, 0x620(r31)
    psq_l f1, 0x0(r4), 0, 0
    addi r4, r3, 0x1af
    psq_st f1, 0x0(r6), 0, 0
    addi r3, r31, 0xb0
    lfs f3, 0x9c(r1)
    li r5, 0x0
    lfs f0, lbl_80883E44
    stfs f2, 0xa0(r1)
    fsubs f0, f3, f0
    psq_l f1, 0x0(r7), 0, 0
    lfs f2, 0xac(r1)
    stfs f2, 0x5fc(r31)
    lfs f2, 0xa0(r1)
    stfs f0, 0x9c(r1)
    lfs f31, lbl_80883EAC
    psq_st f1, 0x5f4(r31), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f4, 0x88(r1)
    psq_st f1, 0x600(r31), 0, 0
    stfs f2, 0x608(r31)
    stfs f5, 0x60c(r31)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802A7970_00000628
    li r4, 0x0
    b lbl_fn_802A7970_00000634
lbl_fn_802A7970_00000628:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r4, r3, r0
lbl_fn_802A7970_00000634:
    lfs f0, 0x1c(r4)
    lis r3, lbl_80745FE4@ha
    lfs f3, 0xc(r4)
    addi r7, r1, 0x74
    stfs f3, 0x74(r1)
    addi r6, r1, 0xa4
    lfs f2, 0x2c(r4)
    addi r3, r3, lbl_80745FE4@l
    stfs f0, 0x78(r1)
    addi r4, r3, 0x1bb
    addi r3, r31, 0xb0
    li r5, 0x0
    psq_l f1, 0x0(r7), 0, 0
    stfs f2, 0x7c(r1)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0xac(r1)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802A7970_00000688
    li r4, 0x0
    b lbl_fn_802A7970_00000694
lbl_fn_802A7970_00000688:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r4, r3, r0
lbl_fn_802A7970_00000694:
    lfs f0, 0x2c(r4)
    lis r3, lbl_80745FE4@ha
    lfs f3, 0x1c(r4)
    addi r6, r1, 0x98
    lfs f4, 0xc(r4)
    fmr f2, f0
    stfs f4, 0x68(r1)
    addi r4, r1, 0x68
    addi r5, r1, 0xa4
    addi r8, r31, 0x16c8
    stfs f3, 0x6c(r1)
    addi r7, r31, 0x16d4
    addi r3, r3, lbl_80745FE4@l
    psq_l f1, 0x0(r4), 0, 0
    addi r4, r3, 0x1c7
    psq_st f1, 0x0(r6), 0, 0
    addi r3, r31, 0xb0
    psq_l f1, 0x0(r5), 0, 0
    li r5, 0x0
    stfs f2, 0xa0(r1)
    lfs f2, 0xac(r1)
    psq_st f1, 0x0(r8), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x16d0(r31)
    lfs f2, 0xa0(r1)
    stfs f0, 0x70(r1)
    lfs f30, lbl_80883EAC
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0x16dc(r31)
    stfs f31, 0x16e0(r31)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802A7970_00000720
    li r4, 0x0
    b lbl_fn_802A7970_0000072C
lbl_fn_802A7970_00000720:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r4, r3, r0
lbl_fn_802A7970_0000072C:
    lfs f0, 0x1c(r4)
    lis r3, lbl_80745FE4@ha
    lfs f3, 0xc(r4)
    addi r7, r1, 0x5c
    stfs f3, 0x5c(r1)
    addi r6, r1, 0xa4
    lfs f2, 0x2c(r4)
    addi r3, r3, lbl_80745FE4@l
    stfs f0, 0x60(r1)
    addi r4, r3, 0x1d4
    addi r3, r31, 0xb0
    li r5, 0x0
    psq_l f1, 0x0(r7), 0, 0
    stfs f2, 0x64(r1)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0xac(r1)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802A7970_00000780
    li r4, 0x0
    b lbl_fn_802A7970_0000078C
lbl_fn_802A7970_00000780:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r4, r3, r0
lbl_fn_802A7970_0000078C:
    lfs f0, 0x2c(r4)
    lis r3, lbl_80745FE4@ha
    lfs f3, 0x1c(r4)
    addi r6, r1, 0x98
    lfs f4, 0xc(r4)
    fmr f2, f0
    stfs f4, 0x50(r1)
    addi r4, r1, 0x50
    addi r5, r1, 0xa4
    addi r8, r31, 0x1720
    stfs f3, 0x54(r1)
    addi r7, r31, 0x172c
    addi r3, r3, lbl_80745FE4@l
    psq_l f1, 0x0(r4), 0, 0
    addi r4, r3, 0x1e1
    psq_st f1, 0x0(r6), 0, 0
    addi r3, r31, 0xb0
    psq_l f1, 0x0(r5), 0, 0
    li r5, 0x0
    stfs f2, 0xa0(r1)
    lfs f2, 0xac(r1)
    psq_st f1, 0x0(r8), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x1728(r31)
    lfs f2, 0xa0(r1)
    stfs f0, 0x58(r1)
    lfs f31, lbl_80883EB0
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0x1734(r31)
    stfs f30, 0x1738(r31)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802A7970_00000818
    li r4, 0x0
    b lbl_fn_802A7970_00000824
lbl_fn_802A7970_00000818:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r4, r3, r0
lbl_fn_802A7970_00000824:
    lfs f0, 0x1c(r4)
    lis r3, lbl_80745FE4@ha
    lfs f3, 0xc(r4)
    addi r7, r1, 0x44
    stfs f3, 0x44(r1)
    addi r6, r1, 0xa4
    lfs f2, 0x2c(r4)
    addi r3, r3, lbl_80745FE4@l
    stfs f0, 0x48(r1)
    addi r4, r3, 0x1e9
    addi r3, r31, 0xb0
    li r5, 0x0
    psq_l f1, 0x0(r7), 0, 0
    stfs f2, 0x4c(r1)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0xac(r1)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802A7970_00000878
    li r4, 0x0
    b lbl_fn_802A7970_00000884
lbl_fn_802A7970_00000878:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r4, r3, r0
lbl_fn_802A7970_00000884:
    lfs f0, 0x2c(r4)
    lis r3, lbl_80745FE4@ha
    lfs f3, 0x1c(r4)
    addi r6, r1, 0x98
    lfs f4, 0xc(r4)
    fmr f2, f0
    stfs f4, 0x38(r1)
    addi r4, r1, 0x38
    addi r5, r1, 0xa4
    addi r8, r31, 0x1778
    stfs f3, 0x3c(r1)
    addi r7, r31, 0x1784
    addi r3, r3, lbl_80745FE4@l
    psq_l f1, 0x0(r4), 0, 0
    addi r4, r3, 0x1f2
    psq_st f1, 0x0(r6), 0, 0
    addi r3, r31, 0xb0
    psq_l f1, 0x0(r5), 0, 0
    li r5, 0x0
    stfs f2, 0xa0(r1)
    lfs f2, 0xac(r1)
    psq_st f1, 0x0(r8), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x1780(r31)
    lfs f2, 0xa0(r1)
    stfs f0, 0x40(r1)
    lfs f30, lbl_80883EB0
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0x178c(r31)
    stfs f31, 0x1790(r31)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802A7970_00000910
    li r4, 0x0
    b lbl_fn_802A7970_0000091C
lbl_fn_802A7970_00000910:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r4, r3, r0
lbl_fn_802A7970_0000091C:
    lfs f0, 0x1c(r4)
    lis r3, lbl_80745FE4@ha
    lfs f3, 0xc(r4)
    addi r7, r1, 0x2c
    stfs f3, 0x2c(r1)
    addi r6, r1, 0xa4
    lfs f2, 0x2c(r4)
    addi r3, r3, lbl_80745FE4@l
    stfs f0, 0x30(r1)
    addi r4, r3, 0x1fb
    addi r3, r31, 0xb0
    li r5, 0x0
    psq_l f1, 0x0(r7), 0, 0
    stfs f2, 0x34(r1)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0xac(r1)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802A7970_00000970
    li r4, 0x0
    b lbl_fn_802A7970_0000097C
lbl_fn_802A7970_00000970:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r4, r3, r0
lbl_fn_802A7970_0000097C:
    lfs f0, 0x2c(r4)
    lis r3, lbl_80745FE4@ha
    lfs f3, 0x1c(r4)
    addi r6, r1, 0x98
    lfs f4, 0xc(r4)
    fmr f2, f0
    stfs f4, 0x20(r1)
    addi r4, r1, 0x20
    addi r5, r1, 0xa4
    addi r8, r31, 0x17d0
    stfs f3, 0x24(r1)
    addi r7, r31, 0x17dc
    addi r3, r3, lbl_80745FE4@l
    psq_l f1, 0x0(r4), 0, 0
    addi r4, r3, 0x205
    psq_st f1, 0x0(r6), 0, 0
    addi r3, r31, 0xb0
    psq_l f1, 0x0(r5), 0, 0
    li r5, 0x0
    stfs f2, 0xa0(r1)
    lfs f2, 0xac(r1)
    psq_st f1, 0x0(r8), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x17d8(r31)
    lfs f2, 0xa0(r1)
    stfs f0, 0x28(r1)
    lfs f31, lbl_80883EB4
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0x17e4(r31)
    stfs f30, 0x17e8(r31)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802A7970_00000A08
    li r4, 0x0
    b lbl_fn_802A7970_00000A14
lbl_fn_802A7970_00000A08:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r4, r3, r0
lbl_fn_802A7970_00000A14:
    lfs f0, 0x1c(r4)
    lis r3, lbl_80745FE4@ha
    lfs f3, 0xc(r4)
    addi r7, r1, 0x14
    stfs f3, 0x14(r1)
    addi r6, r1, 0xa4
    lfs f2, 0x2c(r4)
    addi r3, r3, lbl_80745FE4@l
    stfs f0, 0x18(r1)
    addi r4, r3, 0x20c
    addi r3, r31, 0xb0
    li r5, 0x0
    psq_l f1, 0x0(r7), 0, 0
    stfs f2, 0x1c(r1)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0xac(r1)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802A7970_00000A68
    li r5, 0x0
    b lbl_fn_802A7970_00000A74
lbl_fn_802A7970_00000A68:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r5, r3, r0
lbl_fn_802A7970_00000A74:
    lfs f0, 0x2c(r5)
    addi r4, r1, 0x8
    lfs f3, 0x1c(r5)
    addi r3, r1, 0x98
    lfs f4, 0xc(r5)
    fmr f2, f0
    stfs f4, 0x8(r1)
    addi r6, r1, 0xa4
    addi r7, r31, 0x1828
    addi r5, r31, 0x1834
    stfs f3, 0xc(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0xa0(r1)
    lfs f2, 0xac(r1)
    psq_st f1, 0x0(r7), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x1830(r31)
    lfs f2, 0xa0(r1)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x183c(r31)
    stfs f31, 0x1840(r31)
    psq_l f31, 0xd8(r1), 0, 0
    lfd f31, 0xd0(r1)
    psq_l f30, 0xc8(r1), 0, 0
    lfd f30, 0xc0(r1)
    lwz r31, 0xbc(r1)
    lwz r0, 0xe4(r1)
    stfs f0, 0x10(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}

asm void fn_802A7F9C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    lwz r0, 0x624(r3)
    cmpwi r0, 0x0
    beq lbl_fn_802A7F9C_00000BC4
    lis r4, lbl_80745FE4@ha
    li r5, 0x0
    addi r4, r4, lbl_80745FE4@l
    addi r3, r3, 0xb0
    addi r4, r4, 0x213
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802A7F9C_00000B40
    li r4, 0x0
    b lbl_fn_802A7F9C_00000B4C
lbl_fn_802A7F9C_00000B40:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r4, r3, r0
lbl_fn_802A7F9C_00000B4C:
    lfs f3, lbl_80883EB8
    addi r3, r1, 0x8
    lfs f0, 0x5b0(r31)
    lfs f4, 0x2c(r4)
    lfs f5, 0x1c(r4)
    fmuls f0, f3, f0
    lfs f6, 0xc(r4)
    lwz r4, 0x62c(r31)
    stfs f6, 0x14(r1)
    stfs f0, 0x10(r4)
    lfs f3, 0x5a8(r31)
    lfs f0, 0x5a4(r31)
    fadds f7, f5, f3
    lfs f3, 0x5ac(r31)
    fadds f0, f6, f0
    lwz r4, 0x62c(r31)
    fadds f2, f4, f3
    stfs f7, 0xc(r1)
    stfs f0, 0x8(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x4(r4), 0, 0
    stfs f2, 0xc(r4)
    lwz r3, 0x62c(r31)
    lfs f3, 0x52c(r31)
    lfs f0, 0x10(r3)
    stfs f5, 0x18(r1)
    fadds f0, f3, f0
    stfs f4, 0x1c(r1)
    stfs f2, 0x10(r1)
    stfs f0, 0x8(r3)
lbl_fn_802A7F9C_00000BC4:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_802A807C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    psq_l f1, 0x528(r4), 0, 0
    lfs f2, 0x530(r4)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
    bne lbl_fn_802A807C_00000C74
    lis r4, lbl_80745FE4@ha
    addi r3, r31, 0xb0
    addi r4, r4, lbl_80745FE4@l
    li r5, 0x0
    addi r4, r4, 0x213
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802A807C_00000C34
    li r4, 0x0
    b lbl_fn_802A807C_00000C40
lbl_fn_802A807C_00000C34:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r4, r3, r0
lbl_fn_802A807C_00000C40:
    lfs f0, 0x1c(r4)
    addi r3, r1, 0x8
    lfs f3, 0xc(r4)
    lfs f2, 0x2c(r4)
    stfs f3, 0x8(r1)
    stfs f0, 0xc(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x8(r30)
    lfs f0, 0x52c(r31)
    stfs f2, 0x10(r1)
    stfs f0, 0x4(r30)
    b lbl_fn_802A807C_00000C84
lbl_fn_802A807C_00000C74:
    psq_l f1, 0x528(r4), 0, 0
    lfs f2, 0x530(r4)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
lbl_fn_802A807C_00000C84:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_802A8140(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_802A8148(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x2
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bne lbl_fn_802A8148_00000D54
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x18
    beq lbl_fn_802A8148_00000D54
    li r4, 0x0
    li r0, 0x18
    stw r4, 0x14c0(r3)
    li r4, 0x6
    stw r0, 0x58c(r3)
    bl fn_8016E970
    li r0, 0x4
    stw r0, 0x560(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f1, lbl_80883E40
    li r0, 0x1
    lfs f0, lbl_80883E44
    li r4, 0x0
    stw r3, 0x590(r31)
    addi r3, r31, 0xb0
    lfs f2, lbl_80883E50
    li r5, 0x3d
    stw r0, 0x3fc(r31)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2fc(r31)
    stfs f1, 0x2e8(r31)
    bl fn_80097C08
    lwz r0, 0x1854(r31)
    lfs f0, lbl_80883E40
    cmpwi r0, 0x0
    stfs f0, 0x2e8(r31)
    beq lbl_fn_802A8148_00000D54
    lwz r3, lbl_8087F430
    li r5, 0x1
    lwz r4, 0x1684(r31)
    bl fn_80370AE4
lbl_fn_802A8148_00000D54:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802A820C(void)
{
    nofralloc
    stwu r1, -0x150(r1)
    mflr r0
    stw r0, 0x154(r1)
    stfd f31, 0x140(r1)
    psq_st f31, 0x148(r1), 0, 0
    stfd f30, 0x130(r1)
    psq_st f30, 0x138(r1), 0, 0
    stfd f29, 0x120(r1)
    psq_st f29, 0x128(r1), 0, 0
    stfd f28, 0x110(r1)
    psq_st f28, 0x118(r1), 0, 0
    stw r31, 0x10c(r1)
    mr r31, r3
    stw r30, 0x108(r1)
    lwz r0, 0x14b8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802A820C_00000E70
    lfs f3, 0x15e8(r3)
    lfs f0, lbl_80883E40
    fcmpo cr0, f3, f0
    bge lbl_fn_802A820C_00000E38
    li r30, 0x1
    stw r30, 0x14b8(r3)
    li r4, 0x65
    bl fn_80232B7C
    lfs f0, lbl_80883E40
    li r0, -0x1
    lfs f1, lbl_80883E44
    addi r4, r31, 0x14fc
    stfs f0, 0x64(r1)
    addi r5, r31, 0xb0
    addi r7, r1, 0x58
    addi r8, r1, 0x64
    stfs f0, 0x68(r1)
    addi r9, r1, 0x70
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x6c(r1)
    stfs f0, 0x58(r1)
    stfs f0, 0x5c(r1)
    stfs f0, 0x60(r1)
    stfs f1, 0x70(r1)
    stfs f1, 0x74(r1)
    stfs f1, 0x78(r1)
    stfs f1, 0x7c(r1)
    stw r0, 0x8(r1)
    stw r30, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    li r0, 0x0
    stw r0, 0x14c0(r31)
    b lbl_fn_802A820C_0000123C
lbl_fn_802A820C_00000E38:
    lwz r0, 0x15ec(r3)
    cmpwi r0, 0x0
    beq lbl_fn_802A820C_00000E4C
    lfs f5, lbl_80883E68
    b lbl_fn_802A820C_00000E50
lbl_fn_802A820C_00000E4C:
    lfs f5, lbl_80883E6C
lbl_fn_802A820C_00000E50:
    lfs f4, 0x538(r3)
    lfs f3, 0x15e8(r3)
    lfs f0, lbl_80883E44
    fadds f4, f4, f5
    fsubs f0, f3, f0
    stfs f4, 0x538(r3)
    stfs f0, 0x15e8(r3)
    b lbl_fn_802A820C_0000123C
lbl_fn_802A820C_00000E70:
    cmpwi r0, 0x1
    bne lbl_fn_802A820C_0000123C
    lfs f5, 0x15dc(r3)
    lfs f0, 0x530(r3)
    lfs f4, 0x15d4(r3)
    lfs f3, 0x528(r3)
    fsubs f5, f5, f0
    lfs f0, lbl_80883E40
    addi r3, r1, 0x8c
    fsubs f3, f4, f3
    stfs f5, 0x94(r1)
    lfs f31, lbl_80883EBC
    stfs f3, 0x8c(r1)
    stfs f0, 0x90(r1)
    bl fn_805F9940
    fmr f30, f1
    addi r3, r1, 0x8c
    mr r4, r3
    bl fn_805F98D0
    lfs f2, 0x94(r1)
    addi r30, r1, 0x8c
    lfs f0, lbl_80883E90
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802A820C_00000EFC
    lfs f3, 0x8c(r1)
    lfs f0, lbl_80883E40
    fcmpo cr0, f3, f0
    ble lbl_fn_802A820C_00000EF0
    lfs f0, lbl_80883E94
    b lbl_fn_802A820C_00000EF4
lbl_fn_802A820C_00000EF0:
    lfs f0, lbl_80883E98
lbl_fn_802A820C_00000EF4:
    stfs f0, 0x14(r1)
    b lbl_fn_802A820C_00000F0C
lbl_fn_802A820C_00000EFC:
    lfs f1, 0x8c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x14(r1)
lbl_fn_802A820C_00000F0C:
    lfs f0, 0x14(r1)
    addi r3, r1, 0xd8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883E40
    addi r4, r1, 0x1c
    lfs f4, 0xe0(r1)
    mr r5, r4
    lfs f5, 0xdc(r1)
    addi r3, r1, 0x98
    lfs f6, 0xd8(r1)
    lfs f7, 0xf0(r1)
    lfs f8, 0xec(r1)
    lfs f9, 0xe8(r1)
    lfs f10, 0x100(r1)
    lfs f11, 0xfc(r1)
    lfs f12, 0xf8(r1)
    lfs f13, 0x104(r1)
    lfs f29, 0xf4(r1)
    lfs f28, 0xe4(r1)
    lfs f0, lbl_80883E44
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x94(r1)
    stfs f3, 0xc8(r1)
    stfs f3, 0xcc(r1)
    stfs f3, 0xd0(r1)
    stfs f0, 0xd4(r1)
    stfs f6, 0x4c(r1)
    stfs f5, 0x50(r1)
    stfs f4, 0x54(r1)
    stfs f6, 0x98(r1)
    stfs f5, 0x9c(r1)
    stfs f4, 0xa0(r1)
    stfs f9, 0x40(r1)
    stfs f8, 0x44(r1)
    stfs f7, 0x48(r1)
    stfs f9, 0xa8(r1)
    stfs f8, 0xac(r1)
    stfs f7, 0xb0(r1)
    stfs f12, 0x34(r1)
    stfs f11, 0x38(r1)
    stfs f10, 0x3c(r1)
    stfs f12, 0xb8(r1)
    stfs f11, 0xbc(r1)
    stfs f10, 0xc0(r1)
    stfs f28, 0x28(r1)
    stfs f29, 0x2c(r1)
    stfs f13, 0x30(r1)
    stfs f28, 0xa4(r1)
    stfs f29, 0xb4(r1)
    stfs f13, 0xc4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x24(r1)
    bl fn_805F9750
    lfs f2, 0x24(r1)
    lfs f0, lbl_80883E90
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802A820C_00001028
    lfs f3, 0x20(r1)
    lfs f0, lbl_80883E40
    fcmpo cr0, f3, f0
    ble lbl_fn_802A820C_00001018
    lfs f0, lbl_80883E94
    b lbl_fn_802A820C_0000101C
lbl_fn_802A820C_00001018:
    lfs f0, lbl_80883E98
lbl_fn_802A820C_0000101C:
    fneg f0, f0
    stfs f0, 0x10(r1)
    b lbl_fn_802A820C_0000103C
lbl_fn_802A820C_00001028:
    lfs f1, 0x20(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x10(r1)
lbl_fn_802A820C_0000103C:
    lfs f0, lbl_80883EC0
    addi r3, r1, 0x10
    lfs f2, lbl_80883E40
    psq_l f1, 0x0(r3), 0, 0
    fcmpo cr0, f30, f0
    stfs f2, 0x18(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x94(r1)
    bge lbl_fn_802A820C_0000110C
    lwz r5, 0x12a4(r31)
    li r0, 0x6
    stw r0, 0x58c(r31)
    mr r3, r31
    rlwinm r5, r5, 0, 28, 26
    li r4, 0x3
    stw r5, 0x12a4(r31)
    bl fn_8016E970
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x65
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x66
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x67
    li r6, 0x0
    bl fn_80239DAC
    addi r3, r31, 0x1538
    li r4, 0x0
    li r5, 0x0
    bl fn_800CB5C8
    lwz r3, 0x1694(r31)
    lwz r0, 0x16ec(r31)
    ori r6, r3, 0x1
    lwz r4, 0x1744(r31)
    ori r5, r0, 0x1
    lwz r3, 0x179c(r31)
    lwz r0, 0x17f4(r31)
    ori r4, r4, 0x1
    ori r3, r3, 0x1
    stw r6, 0x1694(r31)
    ori r0, r0, 0x1
    stw r5, 0x16ec(r31)
    stw r4, 0x1744(r31)
    stw r3, 0x179c(r31)
    stw r0, 0x17f4(r31)
    b lbl_fn_802A820C_000011B8
lbl_fn_802A820C_0000110C:
    lwz r3, 0x1694(r31)
    lwz r0, 0x16ec(r31)
    clrrwi r6, r3, 1
    lwz r7, 0x12a4(r31)
    clrrwi r5, r0, 1
    lwz r4, 0x1744(r31)
    lwz r3, 0x179c(r31)
    ori r7, r7, 0x10
    lwz r0, 0x17f4(r31)
    clrrwi r4, r4, 1
    clrrwi r3, r3, 1
    stw r7, 0x12a4(r31)
    clrrwi r0, r0, 1
    stw r6, 0x1694(r31)
    stw r5, 0x16ec(r31)
    stw r4, 0x1744(r31)
    stw r3, 0x179c(r31)
    stw r0, 0x17f4(r31)
    lwz r3, lbl_8087EE98
    bl fn_8004D124
    lfs f0, 0x568(r31)
    fmr f1, f30
    mr r3, r31
    addi r4, r1, 0x8c
    fmuls f2, f0, f31
    bl fn_801426A4
    lwz r3, 0x1694(r31)
    lwz r0, 0x16ec(r31)
    ori r6, r3, 0x1
    lwz r4, 0x1744(r31)
    ori r5, r0, 0x1
    lwz r3, 0x179c(r31)
    lwz r0, 0x17f4(r31)
    ori r4, r4, 0x1
    ori r3, r3, 0x1
    stw r6, 0x1694(r31)
    ori r0, r0, 0x1
    stw r5, 0x16ec(r31)
    stw r4, 0x1744(r31)
    stw r3, 0x179c(r31)
    stw r0, 0x17f4(r31)
    lwz r3, lbl_8087EE98
    bl fn_8004D124
lbl_fn_802A820C_000011B8:
    lis r4, lbl_80745FE4@ha
    addi r3, r31, 0xb0
    addi r4, r4, lbl_80745FE4@l
    li r5, 0x0
    addi r4, r4, 0x1aa
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802A820C_000011E0
    li r3, 0x0
    b lbl_fn_802A820C_000011EC
lbl_fn_802A820C_000011E0:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r3, r3, r0
lbl_fn_802A820C_000011EC:
    lfs f0, 0x2c(r3)
    li r0, -0x1
    lfs f3, 0x1c(r3)
    mr r4, r31
    lfs f4, 0xc(r3)
    addi r7, r1, 0x80
    stfs f4, 0x80(r1)
    addi r8, r31, 0x534
    lfs f1, lbl_80883E40
    li r6, 0x3e8
    stfs f3, 0x84(r1)
    li r9, 0x0
    lfs f2, lbl_80883E44
    li r10, 0x1e
    stfs f0, 0x88(r1)
    stw r0, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F048
    lwz r5, 0x1664(r31)
    bl fn_800FAB80
lbl_fn_802A820C_0000123C:
    lwz r0, 0x154(r1)
    psq_l f31, 0x148(r1), 0, 0
    lfd f31, 0x140(r1)
    psq_l f30, 0x138(r1), 0, 0
    lfd f30, 0x130(r1)
    psq_l f29, 0x128(r1), 0, 0
    lfd f29, 0x120(r1)
    psq_l f28, 0x118(r1), 0, 0
    lfd f28, 0x110(r1)
    lwz r31, 0x10c(r1)
    lwz r30, 0x108(r1)
    mtlr r0
    addi r1, r1, 0x150
    blr
}

asm void fn_802A8718(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    stfd f31, 0x120(r1)
    psq_st f31, 0x128(r1), 0, 0
    stfd f30, 0x110(r1)
    psq_st f30, 0x118(r1), 0, 0
    stfd f29, 0x100(r1)
    psq_st f29, 0x108(r1), 0, 0
    stfd f28, 0xf0(r1)
    psq_st f28, 0xf8(r1), 0, 0
    stw r31, 0xec(r1)
    mr r31, r3
    stw r30, 0xe8(r1)
    lwz r0, 0x14b8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802A8718_00001314
    lfs f3, 0x15e8(r3)
    lfs f0, lbl_80883E40
    fcmpo cr0, f3, f0
    bge lbl_fn_802A8718_000012DC
    li r4, 0x1
    li r0, 0x0
    stw r4, 0x14b8(r3)
    stw r0, 0x14c0(r3)
    b lbl_fn_802A8718_000016E0
lbl_fn_802A8718_000012DC:
    lwz r0, 0x15ec(r3)
    cmpwi r0, 0x0
    beq lbl_fn_802A8718_000012F0
    lfs f5, lbl_80883E68
    b lbl_fn_802A8718_000012F4
lbl_fn_802A8718_000012F0:
    lfs f5, lbl_80883E6C
lbl_fn_802A8718_000012F4:
    lfs f4, 0x538(r3)
    lfs f3, 0x15e8(r3)
    lfs f0, lbl_80883E44
    fadds f4, f4, f5
    fsubs f0, f3, f0
    stfs f4, 0x538(r3)
    stfs f0, 0x15e8(r3)
    b lbl_fn_802A8718_000016E0
lbl_fn_802A8718_00001314:
    cmpwi r0, 0x1
    bne lbl_fn_802A8718_000016E0
    lfs f5, 0x15dc(r3)
    lfs f0, 0x530(r3)
    lfs f4, 0x15d4(r3)
    lfs f3, 0x528(r3)
    fsubs f5, f5, f0
    lfs f0, lbl_80883E40
    addi r3, r1, 0x64
    fsubs f3, f4, f3
    stfs f5, 0x6c(r1)
    lfs f31, lbl_80883EBC
    stfs f3, 0x64(r1)
    stfs f0, 0x68(r1)
    bl fn_805F9940
    fmr f30, f1
    addi r3, r1, 0x64
    mr r4, r3
    bl fn_805F98D0
    lfs f2, 0x6c(r1)
    addi r30, r1, 0x64
    lfs f0, lbl_80883E90
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802A8718_000013A0
    lfs f3, 0x64(r1)
    lfs f0, lbl_80883E40
    fcmpo cr0, f3, f0
    ble lbl_fn_802A8718_00001394
    lfs f0, lbl_80883E94
    b lbl_fn_802A8718_00001398
lbl_fn_802A8718_00001394:
    lfs f0, lbl_80883E98
lbl_fn_802A8718_00001398:
    stfs f0, 0x14(r1)
    b lbl_fn_802A8718_000013B0
lbl_fn_802A8718_000013A0:
    lfs f1, 0x64(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x14(r1)
lbl_fn_802A8718_000013B0:
    lfs f0, 0x14(r1)
    addi r3, r1, 0xb0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883E40
    addi r4, r1, 0x1c
    lfs f4, 0xb8(r1)
    mr r5, r4
    lfs f5, 0xb4(r1)
    addi r3, r1, 0x70
    lfs f6, 0xb0(r1)
    lfs f7, 0xc8(r1)
    lfs f8, 0xc4(r1)
    lfs f9, 0xc0(r1)
    lfs f10, 0xd8(r1)
    lfs f11, 0xd4(r1)
    lfs f12, 0xd0(r1)
    lfs f13, 0xdc(r1)
    lfs f29, 0xcc(r1)
    lfs f28, 0xbc(r1)
    lfs f0, lbl_80883E44
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x6c(r1)
    stfs f3, 0xa0(r1)
    stfs f3, 0xa4(r1)
    stfs f3, 0xa8(r1)
    stfs f0, 0xac(r1)
    stfs f6, 0x4c(r1)
    stfs f5, 0x50(r1)
    stfs f4, 0x54(r1)
    stfs f6, 0x70(r1)
    stfs f5, 0x74(r1)
    stfs f4, 0x78(r1)
    stfs f9, 0x40(r1)
    stfs f8, 0x44(r1)
    stfs f7, 0x48(r1)
    stfs f9, 0x80(r1)
    stfs f8, 0x84(r1)
    stfs f7, 0x88(r1)
    stfs f12, 0x34(r1)
    stfs f11, 0x38(r1)
    stfs f10, 0x3c(r1)
    stfs f12, 0x90(r1)
    stfs f11, 0x94(r1)
    stfs f10, 0x98(r1)
    stfs f28, 0x28(r1)
    stfs f29, 0x2c(r1)
    stfs f13, 0x30(r1)
    stfs f28, 0x7c(r1)
    stfs f29, 0x8c(r1)
    stfs f13, 0x9c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x24(r1)
    bl fn_805F9750
    lfs f2, 0x24(r1)
    lfs f0, lbl_80883E90
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802A8718_000014CC
    lfs f3, 0x20(r1)
    lfs f0, lbl_80883E40
    fcmpo cr0, f3, f0
    ble lbl_fn_802A8718_000014BC
    lfs f0, lbl_80883E94
    b lbl_fn_802A8718_000014C0
lbl_fn_802A8718_000014BC:
    lfs f0, lbl_80883E98
lbl_fn_802A8718_000014C0:
    fneg f0, f0
    stfs f0, 0x10(r1)
    b lbl_fn_802A8718_000014E0
lbl_fn_802A8718_000014CC:
    lfs f1, 0x20(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x10(r1)
lbl_fn_802A8718_000014E0:
    lfs f0, lbl_80883EC0
    addi r3, r1, 0x10
    lfs f2, lbl_80883E40
    psq_l f1, 0x0(r3), 0, 0
    fcmpo cr0, f30, f0
    stfs f2, 0x18(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x6c(r1)
    bge lbl_fn_802A8718_000015B0
    lwz r5, 0x12a4(r31)
    li r0, 0x6
    stw r0, 0x58c(r31)
    mr r3, r31
    rlwinm r5, r5, 0, 28, 26
    li r4, 0x3
    stw r5, 0x12a4(r31)
    bl fn_8016E970
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x65
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x66
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x67
    li r6, 0x0
    bl fn_80239DAC
    addi r3, r31, 0x1538
    li r4, 0x0
    li r5, 0x0
    bl fn_800CB5C8
    lwz r3, 0x1694(r31)
    lwz r0, 0x16ec(r31)
    ori r6, r3, 0x1
    lwz r4, 0x1744(r31)
    ori r5, r0, 0x1
    lwz r3, 0x179c(r31)
    lwz r0, 0x17f4(r31)
    ori r4, r4, 0x1
    ori r3, r3, 0x1
    stw r6, 0x1694(r31)
    ori r0, r0, 0x1
    stw r5, 0x16ec(r31)
    stw r4, 0x1744(r31)
    stw r3, 0x179c(r31)
    stw r0, 0x17f4(r31)
    b lbl_fn_802A8718_0000165C
lbl_fn_802A8718_000015B0:
    lwz r3, 0x1694(r31)
    lwz r0, 0x16ec(r31)
    clrrwi r6, r3, 1
    lwz r7, 0x12a4(r31)
    clrrwi r5, r0, 1
    lwz r4, 0x1744(r31)
    lwz r3, 0x179c(r31)
    ori r7, r7, 0x10
    lwz r0, 0x17f4(r31)
    clrrwi r4, r4, 1
    clrrwi r3, r3, 1
    stw r7, 0x12a4(r31)
    clrrwi r0, r0, 1
    stw r6, 0x1694(r31)
    stw r5, 0x16ec(r31)
    stw r4, 0x1744(r31)
    stw r3, 0x179c(r31)
    stw r0, 0x17f4(r31)
    lwz r3, lbl_8087EE98
    bl fn_8004D124
    lfs f0, 0x568(r31)
    fmr f1, f30
    mr r3, r31
    addi r4, r1, 0x64
    fmuls f2, f0, f31
    bl fn_801426A4
    lwz r3, 0x1694(r31)
    lwz r0, 0x16ec(r31)
    ori r6, r3, 0x1
    lwz r4, 0x1744(r31)
    ori r5, r0, 0x1
    lwz r3, 0x179c(r31)
    lwz r0, 0x17f4(r31)
    ori r4, r4, 0x1
    ori r3, r3, 0x1
    stw r6, 0x1694(r31)
    ori r0, r0, 0x1
    stw r5, 0x16ec(r31)
    stw r4, 0x1744(r31)
    stw r3, 0x179c(r31)
    stw r0, 0x17f4(r31)
    lwz r3, lbl_8087EE98
    bl fn_8004D124
lbl_fn_802A8718_0000165C:
    lis r4, lbl_80745FE4@ha
    addi r3, r31, 0xb0
    addi r4, r4, lbl_80745FE4@l
    li r5, 0x0
    addi r4, r4, 0x21a
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802A8718_00001684
    li r3, 0x0
    b lbl_fn_802A8718_00001690
lbl_fn_802A8718_00001684:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r3, r3, r0
lbl_fn_802A8718_00001690:
    lfs f0, 0x2c(r3)
    li r0, -0x1
    lfs f3, 0x1c(r3)
    mr r4, r31
    lfs f4, 0xc(r3)
    addi r7, r1, 0x58
    stfs f4, 0x58(r1)
    addi r8, r31, 0x534
    lfs f1, lbl_80883E40
    li r6, 0x3e8
    stfs f3, 0x5c(r1)
    li r9, 0x0
    lfs f2, lbl_80883E44
    li r10, 0x1e
    stfs f0, 0x60(r1)
    stw r0, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F048
    lwz r5, 0x1668(r31)
    bl fn_800FAB80
lbl_fn_802A8718_000016E0:
    lwz r0, 0x134(r1)
    psq_l f31, 0x128(r1), 0, 0
    lfd f31, 0x120(r1)
    psq_l f30, 0x118(r1), 0, 0
    lfd f30, 0x110(r1)
    psq_l f29, 0x108(r1), 0, 0
    lfd f29, 0x100(r1)
    psq_l f28, 0xf8(r1), 0, 0
    lfd f28, 0xf0(r1)
    lwz r31, 0xec(r1)
    lwz r30, 0xe8(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

asm void fn_802A8BBC(void)
{
    nofralloc
    stwu r1, -0x3d0(r1)
    mflr r0
    stw r0, 0x3d4(r1)
    addi r11, r1, 0x310
    stfd f31, 0x3c0(r1)
    psq_st f31, 0x3c8(r1), 0, 0
    stfd f30, 0x3b0(r1)
    psq_st f30, 0x3b8(r1), 0, 0
    stfd f29, 0x3a0(r1)
    psq_st f29, 0x3a8(r1), 0, 0
    stfd f28, 0x390(r1)
    psq_st f28, 0x398(r1), 0, 0
    stfd f27, 0x380(r1)
    psq_st f27, 0x388(r1), 0, 0
    stfd f26, 0x370(r1)
    psq_st f26, 0x378(r1), 0, 0
    stfd f25, 0x360(r1)
    psq_st f25, 0x368(r1), 0, 0
    stfd f24, 0x350(r1)
    psq_st f24, 0x358(r1), 0, 0
    stfd f23, 0x340(r1)
    psq_st f23, 0x348(r1), 0, 0
    stfd f22, 0x330(r1)
    psq_st f22, 0x338(r1), 0, 0
    stfd f21, 0x320(r1)
    psq_st f21, 0x328(r1), 0, 0
    stfd f20, 0x310(r1)
    psq_st f20, 0x318(r1), 0, 0
    bl _savegpr_23
    lfs f21, 0x2e4(r3)
    mr r29, r3
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f21, f1
    cror eq, gt, eq
    bne lbl_fn_802A8BBC_00001CB4
    lwz r3, lbl_8087F8A0
    addi r27, r1, 0x50
    lfs f22, lbl_80883E40
    addi r26, r1, 0x68
    lfs f30, lbl_80883E3C
    addi r25, r1, 0x5c
    lwz r30, 0x48(r3)
    addi r24, r1, 0x38
    lfs f31, lbl_80883E90
    addi r23, r1, 0x44
    lfs f21, lbl_80883E44
    li r31, 0x0
    lfs f23, lbl_80883E9C
    lis r28, lbl_80745FD0@ha
    lfs f25, lbl_80883EA4
    lfs f24, lbl_80883EA0
    lfs f26, lbl_80883EA8
    lfs f29, lbl_80883EC8
    lfs f28, lbl_80883E7C
    lfs f27, lbl_80883EC4
    b lbl_fn_802A8BBC_00001AD0
lbl_fn_802A8BBC_00001800:
    lwz r6, 0x38(r30)
    li r4, 0x0
    li r3, 0x0
    li r5, 0x0
    rlwinm r0, r6, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_802A8BBC_0000182C
    clrlwi r0, r6, 31
    cmplwi r0, 0x1
    beq lbl_fn_802A8BBC_0000182C
    li r5, 0x1
lbl_fn_802A8BBC_0000182C:
    cmpwi r5, 0x0
    beq lbl_fn_802A8BBC_00001848
    lwz r0, 0x7e0(r30)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_802A8BBC_00001848
    li r3, 0x1
lbl_fn_802A8BBC_00001848:
    cmpwi r3, 0x0
    beq lbl_fn_802A8BBC_0000187C
    lwz r0, 0x55c(r30)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_802A8BBC_00001870
    lwz r0, 0x560(r30)
    cmpwi r0, 0x1c
    bne lbl_fn_802A8BBC_00001870
    li r3, 0x1
lbl_fn_802A8BBC_00001870:
    cmpwi r3, 0x0
    bne lbl_fn_802A8BBC_0000187C
    li r4, 0x1
lbl_fn_802A8BBC_0000187C:
    cmpwi r4, 0x0
    beq lbl_fn_802A8BBC_00001ACC
    lfs f3, 0x530(r30)
    mr r3, r27
    lfs f0, 0x530(r29)
    mr r4, r27
    lfs f5, 0x52c(r30)
    fsubs f2, f3, f0
    lfs f4, 0x52c(r29)
    lfs f3, 0x528(r30)
    lfs f0, 0x528(r29)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x6c(r1)
    stfs f0, 0x68(r1)
    psq_l f1, 0x0(r26), 0, 0
    stfs f2, 0x70(r1)
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0x58(r1)
    bl fn_805F98D0
    lfs f2, 0x58(r1)
    psq_l f1, 0x0(r27), 0, 0
    fabs f0, f2
    psq_st f1, 0x0(r25), 0, 0
    stfs f2, 0x64(r1)
    frsp f0, f0
    fcmpo cr0, f0, f31
    bge lbl_fn_802A8BBC_0000190C
    lfs f0, 0x5c(r1)
    fcmpo cr0, f0, f22
    ble lbl_fn_802A8BBC_00001900
    lfs f0, lbl_80883E94
    b lbl_fn_802A8BBC_00001904
lbl_fn_802A8BBC_00001900:
    lfs f0, lbl_80883E98
lbl_fn_802A8BBC_00001904:
    stfs f0, 0x48(r1)
    b lbl_fn_802A8BBC_00001920
lbl_fn_802A8BBC_0000190C:
    frsp f2, f2
    lfs f1, 0x5c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_802A8BBC_00001920:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x78
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f13, 0x80(r1)
    mr r4, r24
    lfs f12, 0x7c(r1)
    mr r5, r24
    lfs f11, 0x78(r1)
    addi r3, r1, 0xa8
    lfs f10, 0x90(r1)
    lfs f9, 0x8c(r1)
    lfs f8, 0x88(r1)
    lfs f7, 0xa0(r1)
    lfs f6, 0x9c(r1)
    lfs f5, 0x98(r1)
    lfs f4, 0xa4(r1)
    lfs f3, 0x94(r1)
    lfs f0, 0x84(r1)
    psq_l f1, 0x0(r25), 0, 0
    lfs f2, 0x64(r1)
    stfs f22, 0xd8(r1)
    stfs f22, 0xdc(r1)
    stfs f22, 0xe0(r1)
    stfs f21, 0xe4(r1)
    stfs f11, 0x8(r1)
    stfs f12, 0xc(r1)
    stfs f13, 0x10(r1)
    stfs f11, 0xa8(r1)
    stfs f12, 0xac(r1)
    stfs f13, 0xb0(r1)
    stfs f8, 0x14(r1)
    stfs f9, 0x18(r1)
    stfs f10, 0x1c(r1)
    stfs f8, 0xb8(r1)
    stfs f9, 0xbc(r1)
    stfs f10, 0xc0(r1)
    stfs f5, 0x20(r1)
    stfs f6, 0x24(r1)
    stfs f7, 0x28(r1)
    stfs f5, 0xc8(r1)
    stfs f6, 0xcc(r1)
    stfs f7, 0xd0(r1)
    stfs f0, 0x2c(r1)
    stfs f3, 0x30(r1)
    stfs f4, 0x34(r1)
    stfs f0, 0xb4(r1)
    stfs f3, 0xc4(r1)
    stfs f4, 0xd4(r1)
    psq_st f1, 0x0(r24), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    fabs f0, f2
    frsp f0, f0
    fcmpo cr0, f0, f31
    bge lbl_fn_802A8BBC_00001A2C
    lfs f0, 0x3c(r1)
    fcmpo cr0, f0, f22
    ble lbl_fn_802A8BBC_00001A1C
    lfs f0, lbl_80883E94
    b lbl_fn_802A8BBC_00001A20
lbl_fn_802A8BBC_00001A1C:
    lfs f0, lbl_80883E98
lbl_fn_802A8BBC_00001A20:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_802A8BBC_00001A40
lbl_fn_802A8BBC_00001A2C:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_802A8BBC_00001A40:
    psq_l f1, 0x0(r23), 0, 0
    fmr f2, f22
    psq_st f1, 0x0(r25), 0, 0
    lfs f0, 0x538(r29)
    lfs f3, 0x60(r1)
    stfs f2, 0x64(r1)
    fsubs f0, f3, f0
    lfd f2, lbl_80745FD0@l(r28)
    stfs f22, 0x4c(r1)
    fmuls f1, f23, f0
    bl fn_8068AEA8
    frsp f20, f1
    fcmpo cr0, f20, f24
    ble lbl_fn_802A8BBC_00001A7C
    fsubs f20, f20, f25
lbl_fn_802A8BBC_00001A7C:
    fcmpo cr0, f20, f26
    bge lbl_fn_802A8BBC_00001A88
    fadds f20, f20, f25
lbl_fn_802A8BBC_00001A88:
    addi r3, r1, 0x68
    bl fn_805F9920
    fcmpo cr0, f27, f20
    bge lbl_fn_802A8BBC_00001ACC
    fcmpo cr0, f20, f28
    bge lbl_fn_802A8BBC_00001ACC
    fcmpo cr0, f1, f29
    bge lbl_fn_802A8BBC_00001ACC
    lwz r0, 0x14b0(r29)
    cmplw r30, r0
    bne lbl_fn_802A8BBC_00001ABC
    mr r31, r0
    b lbl_fn_802A8BBC_00001AD8
lbl_fn_802A8BBC_00001ABC:
    fcmpo cr0, f1, f30
    bge lbl_fn_802A8BBC_00001ACC
    mr r31, r30
    fmr f30, f1
lbl_fn_802A8BBC_00001ACC:
    lwz r30, 0x14ac(r30)
lbl_fn_802A8BBC_00001AD0:
    cmpwi r30, 0x0
    bne lbl_fn_802A8BBC_00001800
lbl_fn_802A8BBC_00001AD8:
    cmpwi r31, 0x0
    beq lbl_fn_802A8BBC_00001C2C
    lwz r0, 0x7e0(r31)
    rlwinm r0, r0, 0, 24, 24
    cmplwi r0, 0x80
    bne lbl_fn_802A8BBC_00001B04
    addi r3, r31, 0x7d4
    li r4, 0x80
    bl fn_8013322C
    mr r3, r31
    bl fn_80166A54
lbl_fn_802A8BBC_00001B04:
    mr r3, r31
    addi r4, r29, 0x1614
    li r5, 0x14
    li r6, -0x1
    li r7, -0x1
    bl fn_801595BC
    li r5, 0x0
    li r0, 0xb
    stw r31, 0x1644(r29)
    mr r3, r29
    li r4, 0x6
    stw r31, 0x14b0(r29)
    stw r5, 0x14c0(r29)
    stw r0, 0x58c(r29)
    bl fn_8016E970
    li r0, 0x4
    stw r0, 0x560(r29)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f3, lbl_80883E44
    li r0, 0x1
    lfs f0, lbl_80883E38
    li r4, 0x0
    stw r3, 0x590(r29)
    addi r3, r29, 0xb0
    lfs f1, lbl_80883E40
    li r5, 0x14b
    stw r0, 0x3fc(r29)
    li r6, 0x0
    lfs f2, lbl_80883E50
    li r7, 0x0
    stfs f3, 0x2fc(r29)
    li r8, 0x1
    stfs f0, 0x2e8(r29)
    bl fn_80097C08
    addi r3, r1, 0xe8
    li r4, 0x0
    li r5, 0x200
    bl memset
    lwz r3, lbl_8087F8A0
    lwz r3, 0x48(r3)
    lwz r0, 0x560(r3)
    cmpwi r0, 0x11
    bne lbl_fn_802A8BBC_00001BF0
    lwz r4, lbl_8087F1E4
    addi r3, r1, 0xe8
    lwz r4, 0x394(r4)
    cmpwi r4, 0x0
    beq lbl_fn_802A8BBC_00001BCC
    b lbl_fn_802A8BBC_00001BD0
lbl_fn_802A8BBC_00001BCC:
    la r4, lbl_808813D0
lbl_fn_802A8BBC_00001BD0:
    lwz r5, 0x60(r29)
    lwz r5, 0x4(r5)
    crclr 6
    bl fn_800DD3FC
    lwz r3, lbl_8087F048
    addi r4, r1, 0xe8
    bl fn_80109828
    b lbl_fn_802A8BBC_00001CB4
lbl_fn_802A8BBC_00001BF0:
    lwz r4, lbl_8087F1E4
    addi r3, r1, 0xe8
    lwz r4, 0x39c(r4)
    cmpwi r4, 0x0
    beq lbl_fn_802A8BBC_00001C08
    b lbl_fn_802A8BBC_00001C0C
lbl_fn_802A8BBC_00001C08:
    la r4, lbl_808813D0
lbl_fn_802A8BBC_00001C0C:
    lwz r5, 0x60(r29)
    lwz r5, 0x4(r5)
    crclr 6
    bl fn_800DD3FC
    lwz r3, lbl_8087F048
    addi r4, r1, 0xe8
    bl fn_80109828
    b lbl_fn_802A8BBC_00001CB4
lbl_fn_802A8BBC_00001C2C:
    li r30, 0x0
    li r0, 0x14
    stw r30, 0x14c0(r29)
    mr r3, r29
    li r4, 0x6
    stw r0, 0x58c(r29)
    bl fn_8016E970
    li r0, 0x4
    stw r0, 0x560(r29)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r0, 0x1644(r29)
    stw r3, 0x590(r29)
    cmpwi r0, 0x0
    beq lbl_fn_802A8BBC_00001C78
    mr r3, r0
    li r4, -0x1
    bl fn_8015AC48
    stw r30, 0x1644(r29)
lbl_fn_802A8BBC_00001C78:
    lfs f3, lbl_80883E44
    li r0, 0x1
    lfs f0, lbl_80883E38
    addi r3, r29, 0xb0
    stw r0, 0x3fc(r29)
    li r4, 0x0
    lfs f1, lbl_80883E40
    li r5, 0x149
    stfs f3, 0x2fc(r29)
    li r6, 0x0
    lfs f2, lbl_80883E50
    li r7, 0x0
    stfs f0, 0x2e8(r29)
    li r8, 0x1
    bl fn_80097C08
lbl_fn_802A8BBC_00001CB4:
    addi r11, r1, 0x310
    psq_l f31, 0x3c8(r1), 0, 0
    lfd f31, 0x3c0(r1)
    psq_l f30, 0x3b8(r1), 0, 0
    lfd f30, 0x3b0(r1)
    psq_l f29, 0x3a8(r1), 0, 0
    lfd f29, 0x3a0(r1)
    psq_l f28, 0x398(r1), 0, 0
    lfd f28, 0x390(r1)
    psq_l f27, 0x388(r1), 0, 0
    lfd f27, 0x380(r1)
    psq_l f26, 0x378(r1), 0, 0
    lfd f26, 0x370(r1)
    psq_l f25, 0x368(r1), 0, 0
    lfd f25, 0x360(r1)
    psq_l f24, 0x358(r1), 0, 0
    lfd f24, 0x350(r1)
    psq_l f23, 0x348(r1), 0, 0
    lfd f23, 0x340(r1)
    psq_l f22, 0x338(r1), 0, 0
    lfd f22, 0x330(r1)
    psq_l f21, 0x328(r1), 0, 0
    lfd f21, 0x320(r1)
    psq_l f20, 0x318(r1), 0, 0
    lfd f20, 0x310(r1)
    bl _restgpr_23
    lwz r0, 0x3d4(r1)
    mtlr r0
    addi r1, r1, 0x3d0
    blr
}
