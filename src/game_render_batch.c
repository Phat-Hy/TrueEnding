#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_22(void);
extern void _savegpr_22(void);
extern void fn_8003EA3C(void);
extern void fn_8004ED34(void);
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_80097CCC(void);
extern void fn_80097D7C(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800CB5C8(void);
extern void fn_800CB688(void);
extern void fn_800CB6E4(void);
extern void fn_800EE360(void);
extern void fn_800F8548(void);
extern void fn_800FAB80(void);
extern void fn_801010A0(void);
extern void fn_80108C10(void);
extern void fn_8010EE78(void);
extern void fn_8012DF7C(void);
extern void fn_80144710(void);
extern void fn_80148B0C(void);
extern void fn_80158BB4(void);
extern void fn_8015A46C(void);
extern void fn_8015AC48(void);
extern void fn_8016E970(void);
extern void fn_801765D8(void);
extern void fn_801789D8(void);
extern void fn_80219E6C(void);
extern void fn_80232B7C(void);
extern void fn_80239DAC(void);
extern void fn_8023A8B4(void);
extern void fn_80370A78(void);
extern void fn_80370AE4(void);
extern void fn_8054A340(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_805F9990(void);
extern void fn_80680CF8(void);

/* External data declarations */
extern u8 lbl_80745FC8[];
extern u8 lbl_80745FE4[];
extern u8 lbl_807C6B90[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F8A0;
extern u32 lbl_80883E38;
extern u32 lbl_80883E40;
extern u32 lbl_80883E44;
extern u32 lbl_80883E50;
extern u32 lbl_80883E5C;
extern u32 lbl_80883E60;
extern u32 lbl_80883E64;
extern u32 lbl_80883E70;
extern u32 lbl_80883E74;
extern u32 lbl_80883EC0;
extern u32 lbl_80883ECC;
extern u32 lbl_80883ED0;
extern u32 lbl_80883ED4;
extern u32 lbl_80883ED8;
extern u32 lbl_80883EDC;
extern u32 lbl_80883EE0;
extern u32 lbl_80883EE4;
extern u32 lbl_80883EE8;
extern u32 lbl_80883EEC;
extern u32 lbl_80883EF0;
extern u32 lbl_80883EF4;
extern u32 lbl_80883EF8;
extern u32 lbl_80883EFC;
extern u32 lbl_80883F00;
extern u32 lbl_80883F04;
extern u32 lbl_80883F08;
extern u32 lbl_80883F0C;

/* Function declarations */
void fn_802A91D0(void);
void fn_802A94C8(void);
void fn_802A97C8(void);
void fn_802A9ADC(void);
void fn_802AA1B8(void);
void fn_802AA534(void);
void fn_802AA89C(void);

asm void fn_802A91D0(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r3
    stw r30, 0x48(r1)
    lwz r0, 0x14c0(r3)
    cmpwi r0, 0xa0
    ble lbl_fn_802A91D0_000000C8
    li r4, 0x0
    li r0, 0xd
    stw r4, 0x14c0(r3)
    li r4, 0x6
    stw r0, 0x58c(r3)
    bl fn_8016E970
    li r0, 0x4
    stw r0, 0x560(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f3, lbl_80883E44
    li r0, 0x1
    lfs f0, lbl_80883E38
    li r4, 0x0
    stw r3, 0x590(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80883E40
    li r5, 0x148
    stw r0, 0x3fc(r31)
    li r6, 0x0
    lfs f2, lbl_80883E50
    li r7, 0x0
    stfs f3, 0x2fc(r31)
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    lwz r3, 0x1694(r31)
    lwz r0, 0x16ec(r31)
    clrrwi r6, r3, 1
    lwz r4, 0x1744(r31)
    clrrwi r5, r0, 1
    lwz r3, 0x179c(r31)
    lwz r0, 0x17f4(r31)
    clrrwi r4, r4, 1
    clrrwi r3, r3, 1
    stw r6, 0x1694(r31)
    clrrwi r0, r0, 1
    stw r5, 0x16ec(r31)
    stw r4, 0x1744(r31)
    stw r3, 0x179c(r31)
    stw r0, 0x17f4(r31)
lbl_fn_802A91D0_000000C8:
    lwz r5, 0x1644(r31)
    cmpwi r5, 0x0
    beq lbl_fn_802A91D0_000001FC
    lis r3, 0x8889
    lwz r4, 0x14c0(r31)
    subi r0, r3, 0x7777
    mulhw r0, r0, r4
    add r0, r0, r4
    srawi r0, r0, 4
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r0, r0, 0x1e
    subf. r0, r0, r4
    bne lbl_fn_802A91D0_000001FC
    lfs f0, 0x7d8(r5)
    addi r3, r5, 0x7d4
    lwz r0, 0x934(r31)
    fctiwz f0, f0
    mulli r4, r0, 0x14
    stfd f0, 0x40(r1)
    lwz r5, 0x44(r1)
    subi r0, r5, 0x1
    cmpw r4, r0
    bge lbl_fn_802A91D0_0000012C
    mr r0, r4
lbl_fn_802A91D0_0000012C:
    cmpwi r0, 0x0
    bge lbl_fn_802A91D0_0000013C
    li r30, 0x0
    b lbl_fn_802A91D0_0000014C
lbl_fn_802A91D0_0000013C:
    subi r30, r5, 0x1
    cmpw r4, r30
    bge lbl_fn_802A91D0_0000014C
    mr r30, r4
lbl_fn_802A91D0_0000014C:
    mr r4, r30
    li r5, 0x0
    li r6, 0x0
    bl fn_8012DF7C
    lwz r3, 0x1644(r31)
    li r4, 0x0
    bl fn_80148B0C
    lfs f2, 0xc(r3)
    addi r5, r1, 0x14
    psq_l f1, 0x4(r3), 0, 0
    li r11, 0x0
    psq_st f1, 0x0(r5), 0, 0
    li r10, -0x1
    lfs f6, lbl_80883E40
    li r0, 0x1
    lfs f5, lbl_80883E64
    mr r6, r31
    lfs f4, 0x14(r1)
    fadds f0, f2, f6
    lfs f3, 0x18(r1)
    addi r4, r1, 0x20
    fadds f4, f4, f6
    lwz r3, 0x3c(r1)
    fadds f3, f3, f5
    clrlwi r7, r3, 4
    stfs f4, 0x14(r1)
    lwz r3, lbl_8087F048
    stfs f3, 0x18(r1)
    li r8, 0x0
    li r9, 0x0
    stfs f0, 0x1c(r1)
    stw r11, 0x28(r1)
    stw r11, 0x2c(r1)
    stw r11, 0x30(r1)
    stw r10, 0x34(r1)
    stw r7, 0x3c(r1)
    stw r10, 0x38(r1)
    stw r0, 0x20(r1)
    stw r30, 0x24(r1)
    stfs f6, 0x8(r1)
    lwz r7, 0x1644(r31)
    stfs f5, 0xc(r1)
    stfs f6, 0x10(r1)
    bl fn_80108C10
lbl_fn_802A91D0_000001FC:
    lwz r3, 0x1644(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802A91D0_000002E0
    lwz r0, 0x560(r3)
    cmpwi r0, 0x11
    beq lbl_fn_802A91D0_000002E0
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_802A91D0_000002E0
    li r4, -0x1
    bl fn_8015AC48
    li r30, 0x0
    stw r30, 0x1644(r31)
    lfs f1, lbl_80883E40
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097CCC
    li r0, 0x6
    stw r30, 0x14c8(r31)
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
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
lbl_fn_802A91D0_000002E0:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_802A94C8(void)
{
    nofralloc
    stwu r1, -0x100(r1)
    mflr r0
    stw r0, 0x104(r1)
    stw r31, 0xfc(r1)
    mr r31, r3
    stw r30, 0xf8(r1)
    stw r29, 0xf4(r1)
    bl fn_80158BB4
    cmpwi r3, 0x0
    beq lbl_fn_802A94C8_000003BC
    li r0, 0x6
    stw r0, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
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
lbl_fn_802A94C8_000003BC:
    lwz r0, 0x1644(r31)
    cmpwi r0, 0x0
    beq lbl_fn_802A94C8_000005DC
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_80883ECC
    fcmpo cr0, f3, f0
    ble lbl_fn_802A94C8_000005DC
    lfs f0, lbl_80883ED0
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_802A94C8_000005DC
    lwz r3, 0x64(r1)
    li r30, 0x0
    li r5, -0x1
    li r0, 0x1
    clrlwi r4, r3, 4
    stw r30, 0x4c(r1)
    li r3, 0x4b4
    stw r30, 0x50(r1)
    stw r30, 0x54(r1)
    stw r30, 0x58(r1)
    stw r5, 0x5c(r1)
    stw r4, 0x64(r1)
    stw r5, 0x60(r1)
    stw r0, 0x48(r1)
    bl fn_80219E6C
    mr r29, r3
    mr r3, r31
    bl fn_80144710
    lis r8, lbl_807C6B90@ha
    lwz r6, 0x14b0(r31)
    mr r4, r29
    mr r5, r31
    addi r3, r1, 0x48
    addi r8, r8, lbl_807C6B90@l
    li r7, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_8003EA3C
    lwz r3, 0x14b0(r31)
    li r4, 0x0
    bl fn_80148B0C
    lfs f2, 0xc(r3)
    addi r5, r1, 0x38
    psq_l f1, 0x4(r3), 0, 0
    mr r6, r31
    lfs f6, lbl_80883E40
    addi r4, r1, 0x48
    psq_st f1, 0x0(r5), 0, 0
    li r8, 0x0
    lfs f5, lbl_80883E64
    fadds f0, f2, f6
    lfs f4, 0x38(r1)
    li r9, 0x0
    lfs f3, 0x3c(r1)
    fadds f4, f4, f6
    stfs f0, 0x40(r1)
    fadds f0, f3, f5
    lwz r3, lbl_8087F048
    stfs f4, 0x38(r1)
    stfs f0, 0x3c(r1)
    stfs f6, 0x8(r1)
    lwz r7, 0x1644(r31)
    stfs f5, 0xc(r1)
    stfs f6, 0x10(r1)
    bl fn_80108C10
    lfs f3, lbl_80883E40
    addi r3, r1, 0x68
    lfs f0, lbl_80883EC0
    li r4, 0x79
    stfs f3, 0x2c(r1)
    stfs f3, 0x30(r1)
    stfs f0, 0x34(r1)
    lfs f1, 0x538(r31)
    bl fn_805F8E70
    addi r4, r1, 0x2c
    addi r3, r1, 0x68
    mr r5, r4
    bl fn_805F93C0
    lfs f2, 0x530(r31)
    addi r5, r1, 0x20
    psq_l f1, 0x528(r31), 0, 0
    addi r6, r1, 0x14
    psq_st f1, 0x0(r5), 0, 0
    addi r4, r1, 0x98
    lfs f3, lbl_80883ED4
    lis r7, 0x8000
    lfs f0, 0x24(r1)
    li r8, 0x0
    stfs f2, 0x28(r1)
    li r9, 0x0
    fadds f0, f0, f3
    lwz r3, lbl_8087EE98
    stfs f0, 0x24(r1)
    lwz r10, 0x1644(r31)
    lfs f2, 0x530(r10)
    psq_l f1, 0x528(r10), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    lfs f0, 0x18(r1)
    stfs f2, 0x1c(r1)
    fadds f0, f0, f3
    stw r30, 0xcc(r1)
    stfs f0, 0x18(r1)
    stw r30, 0xd0(r1)
    stw r30, 0xd4(r1)
    stw r30, 0xd8(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_802A94C8_000005C8
    lwz r3, 0xd0(r1)
    lwz r0, 0x8(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_802A94C8_000005C8
    lfs f3, 0xa8(r1)
    addi r3, r1, 0xa8
    lfs f0, 0xc0(r1)
    lfs f5, 0xac(r1)
    fadds f6, f3, f0
    lfs f4, 0xc4(r1)
    lfs f3, 0xb0(r1)
    lfs f0, 0xc8(r1)
    fadds f4, f5, f4
    stfs f6, 0xa8(r1)
    fadds f2, f3, f0
    stfs f4, 0xac(r1)
    stfs f2, 0xb0(r1)
    psq_l f1, 0x0(r3), 0, 0
    lwz r3, 0x1644(r31)
    psq_st f1, 0x528(r3), 0, 0
    stfs f2, 0x530(r3)
lbl_fn_802A94C8_000005C8:
    lwz r3, 0x1644(r31)
    addi r4, r1, 0x2c
    bl fn_8015A46C
    li r0, 0x0
    stw r0, 0x1644(r31)
lbl_fn_802A94C8_000005DC:
    lwz r0, 0x104(r1)
    lwz r31, 0xfc(r1)
    lwz r30, 0xf8(r1)
    lwz r29, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0x100
    blr
}

asm void fn_802A97C8(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stw r31, 0x6c(r1)
    mr r31, r3
    stw r30, 0x68(r1)
    lwz r0, 0x14b8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802A97C8_000006E0
    lwz r0, 0x14c0(r3)
    cmpwi r0, 0x3c
    ble lbl_fn_802A97C8_00000668
    lfs f0, lbl_80883E44
    li r30, 0x1
    stw r30, 0x3fc(r3)
    li r4, 0x0
    lfs f1, lbl_80883E40
    li r5, 0x3
    stfs f0, 0x2fc(r3)
    li r6, 0x1
    lfs f2, lbl_80883E50
    li r7, 0x0
    stfs f0, 0x2e8(r3)
    li r8, 0x1
    addi r3, r3, 0xb0
    bl fn_80097C08
    stw r30, 0x14b8(r31)
    b lbl_fn_802A97C8_000008F4
lbl_fn_802A97C8_00000668:
    lfs f1, 0x538(r3)
    addi r3, r1, 0x38
    li r4, 0x79
    bl fn_805F8E70
    lfs f0, lbl_80883E40
    addi r4, r1, 0x1c
    stfs f0, 0x10(r1)
    addi r6, r1, 0x10
    lfs f2, lbl_80883ED8
    mr r5, r4
    stfs f0, 0x14(r1)
    addi r3, r1, 0x38
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x18(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x24(r1)
    bl fn_805F93C0
    lfs f3, 0x528(r31)
    lfs f0, 0x1c(r1)
    lfs f4, 0x52c(r31)
    fadds f0, f3, f0
    lfs f3, 0x530(r31)
    stfs f0, 0x528(r31)
    lfs f0, 0x20(r1)
    fadds f0, f4, f0
    stfs f0, 0x52c(r31)
    lfs f0, 0x24(r1)
    fadds f0, f3, f0
    stfs f0, 0x530(r31)
    b lbl_fn_802A97C8_000008F4
lbl_fn_802A97C8_000006E0:
    cmpwi r0, 0x1
    bne lbl_fn_802A97C8_0000073C
    lwz r0, 0x14c0(r3)
    cmpwi r0, 0xa
    ble lbl_fn_802A97C8_000008F4
    lfs f3, lbl_80883E44
    li r0, 0x1
    lfs f0, lbl_80883E38
    li r4, 0x0
    stw r0, 0x3fc(r3)
    li r5, 0x145
    lfs f1, lbl_80883E40
    li r6, 0x0
    stfs f3, 0x2fc(r3)
    li r7, 0x0
    lfs f2, lbl_80883E50
    li r8, 0x1
    stfs f0, 0x2e8(r3)
    addi r3, r3, 0xb0
    bl fn_80097C08
    li r0, 0x2
    stw r0, 0x14b8(r31)
    b lbl_fn_802A97C8_000008F4
lbl_fn_802A97C8_0000073C:
    cmpwi r0, 0x2
    bne lbl_fn_802A97C8_000008F4
    lis r4, lbl_80745FE4@ha
    li r5, 0x0
    addi r4, r4, lbl_80745FE4@l
    addi r3, r3, 0xb0
    addi r4, r4, 0x21a
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802A97C8_0000076C
    li r4, 0x0
    b lbl_fn_802A97C8_00000778
lbl_fn_802A97C8_0000076C:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r4, r3, r0
lbl_fn_802A97C8_00000778:
    lfs f0, 0x2c(r4)
    mr r3, r31
    lfs f3, 0x1c(r4)
    lfs f4, 0xc(r4)
    stfs f4, 0x28(r1)
    stfs f3, 0x2c(r1)
    stfs f0, 0x30(r1)
    bl fn_80158BB4
    cmpwi r3, 0x0
    beq lbl_fn_802A97C8_0000083C
    li r0, 0x6
    stw r0, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
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
lbl_fn_802A97C8_0000083C:
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_80883EDC
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_802A97C8_00000898
    lfs f0, lbl_80883EE0
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_802A97C8_00000898
    li r0, -0x1
    stw r0, 0x8(r1)
    lfs f1, lbl_80883E40
    mr r4, r31
    stw r0, 0xc(r1)
    addi r7, r1, 0x28
    lfs f2, lbl_80883E44
    addi r8, r31, 0x534
    lwz r3, lbl_8087F048
    li r9, 0x0
    lwz r5, 0x1670(r31)
    li r10, 0x1e
    lwz r6, 0x590(r31)
    bl fn_800FAB80
lbl_fn_802A97C8_00000898:
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_80883EE4
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_802A97C8_000008F4
    lfs f0, lbl_80883EE8
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_802A97C8_000008F4
    li r0, -0x1
    stw r0, 0x8(r1)
    lfs f1, lbl_80883E40
    mr r4, r31
    stw r0, 0xc(r1)
    addi r7, r1, 0x28
    lfs f2, lbl_80883E44
    addi r8, r31, 0x534
    lwz r3, lbl_8087F048
    li r9, 0x0
    lwz r5, 0x1674(r31)
    li r10, 0x1e
    lwz r6, 0x590(r31)
    bl fn_800FAB80
lbl_fn_802A97C8_000008F4:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_802A9ADC(void)
{
    nofralloc
    stwu r1, -0x370(r1)
    mflr r0
    stw r0, 0x374(r1)
    addi r11, r1, 0x2d0
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
    bl _savegpr_22
    lwz r0, 0x1678(r3)
    mr r23, r3
    mr r25, r4
    mr r24, r5
    cmpwi r0, 0x0
    beq lbl_fn_802A9ADC_00000F80
    lfs f7, lbl_80883E40
    addi r22, r1, 0x260
    lfs f0, lbl_80883E44
    stfs f7, 0x28c(r1)
    stfs f7, 0x284(r1)
    stfs f7, 0x280(r1)
    stfs f7, 0x27c(r1)
    stfs f7, 0x278(r1)
    stfs f7, 0x270(r1)
    stfs f7, 0x26c(r1)
    stfs f7, 0x268(r1)
    stfs f7, 0x264(r1)
    stfs f0, 0x288(r1)
    stfs f0, 0x274(r1)
    stfs f0, 0x260(r1)
    lfs f1, 0x53c(r3)
    fcmpu cr0, f7, f1
    beq lbl_fn_802A9ADC_00000A20
    addi r3, r1, 0xe0
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r22
    addi r4, r1, 0xe0
    addi r5, r1, 0xb0
    bl fn_805F89F0
    addi r3, r1, 0xb0
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r22), 0, 0
    psq_st f2, 0x8(r22), 0, 0
    psq_st f3, 0x10(r22), 0, 0
    psq_st f4, 0x18(r22), 0, 0
    psq_st f5, 0x20(r22), 0, 0
    psq_st f6, 0x28(r22), 0, 0
lbl_fn_802A9ADC_00000A20:
    lfs f0, lbl_80883E40
    lfs f1, 0x538(r23)
    fcmpu cr0, f0, f1
    beq lbl_fn_802A9ADC_00000A80
    addi r3, r1, 0x140
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r22
    addi r4, r1, 0x140
    addi r5, r1, 0x110
    bl fn_805F89F0
    addi r3, r1, 0x110
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r22), 0, 0
    psq_st f2, 0x8(r22), 0, 0
    psq_st f3, 0x10(r22), 0, 0
    psq_st f4, 0x18(r22), 0, 0
    psq_st f5, 0x20(r22), 0, 0
    psq_st f6, 0x28(r22), 0, 0
lbl_fn_802A9ADC_00000A80:
    lfs f0, lbl_80883E40
    lfs f1, 0x534(r23)
    fcmpu cr0, f0, f1
    beq lbl_fn_802A9ADC_00000AE0
    addi r3, r1, 0x1a0
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r22
    addi r4, r1, 0x1a0
    addi r5, r1, 0x170
    bl fn_805F89F0
    addi r3, r1, 0x170
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r22), 0, 0
    psq_st f2, 0x8(r22), 0, 0
    psq_st f3, 0x10(r22), 0, 0
    psq_st f4, 0x18(r22), 0, 0
    psq_st f5, 0x20(r22), 0, 0
    psq_st f6, 0x28(r22), 0, 0
lbl_fn_802A9ADC_00000AE0:
    lis r4, lbl_80745FE4@ha
    addi r22, r23, 0xb0
    addi r4, r4, lbl_80745FE4@l
    li r5, 0x0
    mr r3, r22
    addi r4, r4, 0x21a
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802A9ADC_00000B0C
    li r3, 0x0
    b lbl_fn_802A9ADC_00000B18
lbl_fn_802A9ADC_00000B0C:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r22)
    add r3, r3, r0
lbl_fn_802A9ADC_00000B18:
    lfs f0, 0x2c(r3)
    li r4, 0x1
    lfs f7, 0x1c(r3)
    lfs f8, 0xc(r3)
    stfs f8, 0x6c(r1)
    lwz r3, lbl_8087F8A0
    stfs f7, 0x70(r1)
    stfs f0, 0x74(r1)
    bl fn_8054A340
    cmpwi r3, 0x0
    mr r28, r3
    beq lbl_fn_802A9ADC_00000B8C
    addi r4, r1, 0x54
    psq_l f1, 0x528(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lfs f2, 0x530(r3)
    addi r3, r1, 0x48
    lfs f0, 0x74(r1)
    mr r4, r3
    lfs f8, 0x54(r1)
    fsubs f9, f2, f0
    lfs f7, 0x6c(r1)
    lfs f0, lbl_80883E40
    fsubs f7, f8, f7
    stfs f2, 0x5c(r1)
    stfs f7, 0x48(r1)
    stfs f9, 0x50(r1)
    stfs f0, 0x4c(r1)
    bl fn_805F98D0
lbl_fn_802A9ADC_00000B8C:
    cmpwi r25, 0x0
    beq lbl_fn_802A9ADC_00000D68
    lis r3, lbl_80745FE4@ha
    lfs f1, lbl_80883E44
    addi r29, r3, lbl_80745FE4@l
    addi r5, r23, 0x528
    addi r3, r1, 0x8
    li r6, 0x0
    addi r4, r29, 0x21f
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    lwz r3, lbl_8087F8A0
    addi r28, r1, 0x30
    lfs f24, lbl_80883E40
    addi r30, r1, 0xc
    lwz r26, 0x48(r3)
    li r22, 0x0
    lfs f23, lbl_80883E44
    lfs f22, lbl_80883EEC
    b lbl_fn_802A9ADC_00000D5C
lbl_fn_802A9ADC_00000BE8:
    lwz r6, 0x38(r26)
    li r4, 0x0
    li r3, 0x0
    li r5, 0x0
    rlwinm r0, r6, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_802A9ADC_00000C14
    clrlwi r0, r6, 31
    cmplwi r0, 0x1
    beq lbl_fn_802A9ADC_00000C14
    li r5, 0x1
lbl_fn_802A9ADC_00000C14:
    cmpwi r5, 0x0
    beq lbl_fn_802A9ADC_00000C30
    lwz r0, 0x7e0(r26)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_802A9ADC_00000C30
    li r3, 0x1
lbl_fn_802A9ADC_00000C30:
    cmpwi r3, 0x0
    beq lbl_fn_802A9ADC_00000C64
    lwz r0, 0x55c(r26)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_802A9ADC_00000C58
    lwz r0, 0x560(r26)
    cmpwi r0, 0x1c
    bne lbl_fn_802A9ADC_00000C58
    li r3, 0x1
lbl_fn_802A9ADC_00000C58:
    cmpwi r3, 0x0
    bne lbl_fn_802A9ADC_00000C64
    li r4, 0x1
lbl_fn_802A9ADC_00000C64:
    cmpwi r4, 0x0
    beq lbl_fn_802A9ADC_00000D58
    cmpwi r24, 0x0
    beq lbl_fn_802A9ADC_00000C80
    lwz r0, 0x48(r26)
    cmpwi r0, 0x3
    beq lbl_fn_802A9ADC_00000D58
lbl_fn_802A9ADC_00000C80:
    addi r25, r26, 0xb0
    addi r4, r29, 0x21a
    mr r3, r25
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802A9ADC_00000CA4
    li r5, 0x0
    b lbl_fn_802A9ADC_00000CB0
lbl_fn_802A9ADC_00000CA4:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r25)
    add r5, r3, r0
lbl_fn_802A9ADC_00000CB0:
    lfs f8, 0x2c(r5)
    mr r3, r28
    lfs f0, 0x74(r1)
    mr r4, r28
    lfs f9, 0x1c(r5)
    fsubs f2, f8, f0
    lfs f10, 0xc(r5)
    lfs f7, 0x70(r1)
    lfs f0, 0x6c(r1)
    fsubs f7, f9, f7
    stfs f10, 0x3c(r1)
    fsubs f0, f10, f0
    stfs f7, 0x10(r1)
    stfs f0, 0xc(r1)
    psq_l f1, 0x0(r30), 0, 0
    stfs f9, 0x40(r1)
    stfs f8, 0x44(r1)
    stfs f2, 0x14(r1)
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x38(r1)
    bl fn_805F98D0
    lwz r3, lbl_8087F048
    bl fn_801010A0
    cmpwi r3, 0x0
    beq lbl_fn_802A9ADC_00000F80
    addi r0, r23, 0x1508
    stw r22, 0xa4(r1)
    lfs f1, lbl_80883E70
    mr r6, r28
    stfs f24, 0xa8(r1)
    mr r7, r23
    addi r4, r1, 0x94
    addi r5, r1, 0x6c
    stfs f23, 0xac(r1)
    li r8, -0x1
    li r9, 0x0
    stfs f22, 0x94(r1)
    stw r0, 0x98(r1)
    stw r22, 0x9c(r1)
    lwz r0, 0x1678(r23)
    stw r0, 0xa0(r1)
    bl fn_8010EE78
lbl_fn_802A9ADC_00000D58:
    lwz r26, 0x14ac(r26)
lbl_fn_802A9ADC_00000D5C:
    cmpwi r26, 0x0
    bne lbl_fn_802A9ADC_00000BE8
    b lbl_fn_802A9ADC_00000F80
lbl_fn_802A9ADC_00000D68:
    lis r3, lbl_80745FC8@ha
    lis r4, 0x4178
    lfs f23, lbl_80883E40
    addi r26, r1, 0x24
    lfs f27, lbl_80883EDC
    addi r27, r1, 0x18
    lfs f28, lbl_80883EF0
    addi r29, r4, 0x749f
    lfs f29, lbl_80883E44
    li r25, 0x0
    lfd f30, lbl_80745FC8@l(r3)
    lis r30, 0x4330
    lfs f31, lbl_80883EF4
    li r31, 0x0
    lfs f22, lbl_80883EF8
    lis r22, 0x5555
    lfs f25, lbl_80883EEC
    lfs f24, lbl_80883EFC
    b lbl_fn_802A9ADC_00000F70
lbl_fn_802A9ADC_00000DB4:
    lwz r3, lbl_8087F048
    bl fn_801010A0
    cmpwi r3, 0x0
    mr r24, r3
    beq lbl_fn_802A9ADC_00000F80
    lfs f0, 0x2e4(r23)
    fsubs f0, f0, f27
    stfs f23, 0x24(r1)
    stfs f23, 0x28(r1)
    fmuls f26, f28, f0
    stfs f29, 0x2c(r1)
    bl fn_80680CF8
    mulhw r0, r29, r3
    stw r30, 0x290(r1)
    li r4, 0x79
    srawi r0, r0, 8
    srwi r5, r0, 31
    add r0, r0, r5
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    addi r3, r1, 0x230
    xoris r0, r0, 0x8000
    stw r0, 0x294(r1)
    lfd f0, 0x290(r1)
    fsubs f0, f0, f30
    fdivs f0, f0, f31
    fmuls f1, f28, f0
    bl fn_805F8E70
    addi r4, r1, 0x24
    addi r3, r1, 0x230
    mr r5, r4
    bl fn_805F93C0
    bl fn_80680CF8
    mulhw r0, r29, r3
    stw r30, 0x298(r1)
    li r4, 0x7a
    srawi r0, r0, 8
    srwi r5, r0, 31
    add r0, r0, r5
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    addi r3, r1, 0x200
    xoris r0, r0, 0x8000
    stw r0, 0x29c(r1)
    lfd f0, 0x298(r1)
    fsubs f0, f0, f30
    fdivs f0, f0, f31
    fmuls f1, f22, f0
    bl fn_805F8E70
    addi r4, r1, 0x24
    addi r3, r1, 0x200
    mr r5, r4
    bl fn_805F93C0
    fmr f1, f26
    addi r3, r1, 0x1d0
    li r4, 0x79
    bl fn_805F8E70
    addi r4, r1, 0x24
    addi r3, r1, 0x1d0
    mr r5, r4
    bl fn_805F93C0
    addi r4, r1, 0x24
    addi r3, r1, 0x260
    mr r5, r4
    bl fn_805F93C0
    cmpwi r28, 0x0
    beq lbl_fn_802A9ADC_00000EF4
    psq_l f1, 0x0(r26), 0, 0
    mr r3, r27
    psq_st f1, 0x0(r27), 0, 0
    mr r4, r27
    lfs f2, 0x2c(r1)
    stfs f2, 0x20(r1)
    stfs f23, 0x1c(r1)
    bl fn_805F98D0
    mr r4, r27
    addi r3, r1, 0x60
    bl fn_805F9990
    fcmpo cr0, f1, f24
    bgt lbl_fn_802A9ADC_00000F6C
lbl_fn_802A9ADC_00000EF4:
    addi r0, r22, 0x5556
    stw r31, 0x7c(r1)
    mulhw r3, r0, r25
    stw r31, 0x80(r1)
    stw r31, 0x88(r1)
    srwi r0, r3, 31
    stfs f23, 0x8c(r1)
    add r0, r3, r0
    mulli r0, r0, 0x3
    stfs f29, 0x90(r1)
    stfs f25, 0x78(r1)
    subf r0, r0, r25
    cmpwi r0, 0x1
    beq lbl_fn_802A9ADC_00000F34
    li r0, 0x0
    b lbl_fn_802A9ADC_00000F38
lbl_fn_802A9ADC_00000F34:
    addi r0, r23, 0x1508
lbl_fn_802A9ADC_00000F38:
    stw r0, 0x7c(r1)
    mr r3, r24
    lfs f1, lbl_80883E70
    mr r7, r23
    stw r31, 0x80(r1)
    addi r4, r1, 0x78
    addi r5, r1, 0x6c
    addi r6, r1, 0x24
    lwz r0, 0x1678(r23)
    li r8, -0x1
    stw r0, 0x84(r1)
    li r9, 0x0
    bl fn_8010EE78
lbl_fn_802A9ADC_00000F6C:
    addi r25, r25, 0x1
lbl_fn_802A9ADC_00000F70:
    lwz r3, 0x1678(r23)
    lwz r0, 0x48(r3)
    cmpw r25, r0
    blt lbl_fn_802A9ADC_00000DB4
lbl_fn_802A9ADC_00000F80:
    addi r11, r1, 0x2d0
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
    bl _restgpr_22
    lwz r0, 0x374(r1)
    mtlr r0
    addi r1, r1, 0x370
    blr
}

asm void fn_802AA1B8(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    stw r30, 0x48(r1)
    mr r30, r3
    stw r29, 0x44(r1)
    lfs f3, 0x15dc(r3)
    lfs f0, 0x530(r3)
    lfs f5, 0x15d8(r3)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r3)
    lfs f3, 0x15d4(r3)
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
    lfs f0, lbl_80883F00
    fcmpo cr0, f1, f0
    bge lbl_fn_802AA1B8_00001248
    lwz r0, 0x14b8(r30)
    li r31, 0x0
    cmpwi r0, 0x0
    bne lbl_fn_802AA1B8_000010CC
    lwz r0, 0x14c0(r30)
    cmpwi r0, 0x3c
    ble lbl_fn_802AA1B8_000011B0
    lwz r29, 0x153c(r30)
    li r3, 0x0
    li r0, 0x1
    stw r3, 0x14c0(r30)
    cmpwi r29, 0x1
    stw r0, 0x14b8(r30)
    blt lbl_fn_802AA1B8_000010C4
    bl fn_80680CF8
    divwu r0, r3, r29
    addi r4, r30, 0x15d4
    mullw r0, r0, r29
    subf r3, r0, r3
    stw r3, 0x14d4(r30)
    slwi r0, r3, 2
    stw r3, 0x14d8(r30)
    add r3, r30, r0
    lwz r3, 0x1540(r3)
    psq_l f1, 0x4(r3), 0, 0
    lfs f2, 0xc(r3)
    stfs f2, 0x15dc(r30)
    psq_st f1, 0x0(r4), 0, 0
    b lbl_fn_802AA1B8_000011B0
lbl_fn_802AA1B8_000010C4:
    li r31, 0x1
    b lbl_fn_802AA1B8_000011B0
lbl_fn_802AA1B8_000010CC:
    lwz r3, 0x14d8(r30)
    cmpwi r3, -0x1
    bne lbl_fn_802AA1B8_00001134
    lwz r3, 0x14f0(r30)
    addi r0, r3, 0x1
    stw r0, 0x14f0(r30)
    cmpwi r0, 0x2
    blt lbl_fn_802AA1B8_000010F4
    li r31, 0x1
    b lbl_fn_802AA1B8_000011B0
lbl_fn_802AA1B8_000010F4:
    lwz r29, 0x153c(r30)
    bl fn_80680CF8
    divwu r0, r3, r29
    addi r4, r30, 0x15d4
    mullw r0, r0, r29
    subf r3, r0, r3
    stw r3, 0x14d4(r30)
    slwi r0, r3, 2
    stw r3, 0x14d8(r30)
    add r3, r30, r0
    lwz r3, 0x1540(r3)
    psq_l f1, 0x4(r3), 0, 0
    lfs f2, 0xc(r3)
    stfs f2, 0x15dc(r30)
    psq_st f1, 0x0(r4), 0, 0
    b lbl_fn_802AA1B8_000011B0
lbl_fn_802AA1B8_00001134:
    lwz r4, 0x153c(r30)
    addi r0, r3, 0x1
    stw r0, 0x14d8(r30)
    cmpw r4, r0
    bgt lbl_fn_802AA1B8_00001150
    li r0, 0x0
    stw r0, 0x14d8(r30)
lbl_fn_802AA1B8_00001150:
    lwz r3, 0x14d8(r30)
    lwz r0, 0x14d4(r30)
    cmpw r3, r0
    bne lbl_fn_802AA1B8_00001168
    li r0, -0x1
    stw r0, 0x14d8(r30)
lbl_fn_802AA1B8_00001168:
    lwz r0, 0x14d8(r30)
    cmpwi r0, -0x1
    bne lbl_fn_802AA1B8_00001190
    addi r4, r30, 0x15c4
    lfs f2, 0x15cc(r30)
    addi r3, r30, 0x15d4
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x15dc(r30)
    b lbl_fn_802AA1B8_000011B0
lbl_fn_802AA1B8_00001190:
    slwi r0, r0, 2
    addi r4, r30, 0x15d4
    add r3, r30, r0
    lwz r3, 0x1540(r3)
    psq_l f1, 0x4(r3), 0, 0
    lfs f2, 0xc(r3)
    stfs f2, 0x15dc(r30)
    psq_st f1, 0x0(r4), 0, 0
lbl_fn_802AA1B8_000011B0:
    cmpwi r31, 0x0
    beq lbl_fn_802AA1B8_0000133C
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x66
    li r6, 0x0
    bl fn_80239DAC
    addi r3, r30, 0x1538
    li r4, 0x0
    li r5, 0x0
    bl fn_800CB5C8
    li r3, 0x0
    li r0, 0x13
    stw r3, 0x14c0(r30)
    mr r3, r30
    li r4, 0x6
    stw r0, 0x58c(r30)
    bl fn_8016E970
    li r0, 0x4
    stw r0, 0x560(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883E44
    li r0, 0x1
    stw r3, 0x590(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80883E40
    li r4, 0x0
    stw r0, 0x3fc(r30)
    li r5, 0x141
    lfs f2, lbl_80883E50
    li r6, 0x0
    stfs f0, 0x2fc(r30)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r30)
    bl fn_80097C08
    b lbl_fn_802AA1B8_0000133C
lbl_fn_802AA1B8_00001248:
    addi r4, r1, 0x34
    lfs f2, 0x3c(r1)
    addi r3, r1, 0x28
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    mr r4, r3
    stfs f2, 0x30(r1)
    bl fn_805F98D0
    lfs f5, lbl_80883E40
    lis r3, lbl_80745FE4@ha
    lfs f4, lbl_80883EC0
    addi r3, r3, lbl_80745FE4@l
    lfs f0, 0x28(r1)
    addi r4, r3, 0x21a
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
    bge lbl_fn_802AA1B8_000012E0
    li r3, 0x0
    b lbl_fn_802AA1B8_000012EC
lbl_fn_802AA1B8_000012E0:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r3, r3, r0
lbl_fn_802AA1B8_000012EC:
    lfs f0, 0x2c(r3)
    li r0, -0x1
    lfs f3, 0x1c(r3)
    mr r4, r30
    lfs f4, 0xc(r3)
    addi r7, r1, 0x1c
    stfs f4, 0x1c(r1)
    addi r8, r30, 0x534
    lfs f1, lbl_80883E40
    li r6, 0x3e8
    stfs f3, 0x20(r1)
    li r9, 0x0
    lfs f2, lbl_80883E44
    li r10, 0x1e
    stfs f0, 0x24(r1)
    stw r0, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F048
    lwz r5, 0x167c(r30)
    bl fn_800FAB80
lbl_fn_802AA1B8_0000133C:
    addi r3, r30, 0x1538
    addi r4, r30, 0x528
    bl fn_800CB6E4
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_802AA534(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    mr r31, r3
    stw r30, 0x58(r1)
    stw r29, 0x54(r1)
    lfs f3, 0x15cc(r3)
    lfs f0, 0x530(r3)
    lfs f5, 0x15c8(r3)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r3)
    lfs f3, 0x15c4(r3)
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
    lfs f0, lbl_80883F04
    fcmpo cr0, f1, f0
    bge lbl_fn_802AA534_0000151C
    lwz r0, 0x14c0(r31)
    lis r30, 0x4330
    lis r29, lbl_80745FC8@ha
    stw r30, 0x40(r1)
    xoris r0, r0, 0x8000
    lfd f4, lbl_80745FC8@l(r29)
    stw r0, 0x44(r1)
    lfs f0, lbl_80883E5C
    lfd f3, 0x40(r1)
    fsubs f3, f3, f4
    fcmpo cr0, f3, f0
    ble lbl_fn_802AA534_0000161C
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x66
    li r6, 0x0
    bl fn_80239DAC
    lwz r0, 0x1648(r31)
    cmpwi r0, 0x1
    bne lbl_fn_802AA534_00001444
    lwz r0, 0x14c0(r31)
    stw r30, 0x40(r1)
    xoris r0, r0, 0x8000
    lfd f4, lbl_80745FC8@l(r29)
    stw r0, 0x44(r1)
    lfs f0, lbl_80883E60
    lfd f3, 0x40(r1)
    fsubs f3, f3, f4
    fcmpo cr0, f3, f0
    ble lbl_fn_802AA534_0000161C
lbl_fn_802AA534_00001444:
    addi r3, r31, 0x1538
    li r4, 0x0
    li r5, 0x0
    bl fn_800CB5C8
    li r3, 0x0
    li r0, 0x13
    stw r3, 0x14c0(r31)
    mr r3, r31
    li r4, 0x6
    stw r0, 0x58c(r31)
    bl fn_8016E970
    li r0, 0x4
    stw r0, 0x560(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883E44
    li r0, 0x1
    stw r3, 0x590(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80883E40
    li r4, 0x0
    stw r0, 0x3fc(r31)
    li r5, 0x141
    lfs f2, lbl_80883E50
    li r6, 0x0
    stfs f0, 0x2fc(r31)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    lwz r3, lbl_8087F8A0
    li r4, 0x9c
    li r5, 0x0
    lwz r29, 0x48(r3)
    mr r3, r29
    bl fn_801789D8
    cmpwi r3, 0x0
    bne lbl_fn_802AA534_000014F4
    mr r3, r29
    li r4, 0xa0
    li r5, 0x0
    bl fn_801789D8
    cmpwi r3, 0x0
    beq lbl_fn_802AA534_000016B0
lbl_fn_802AA534_000014F4:
    lwz r3, lbl_8087F430
    li r4, 0xdc
    bl fn_80370A78
    cmpwi r3, 0x0
    bne lbl_fn_802AA534_000016B0
    lwz r3, lbl_8087F430
    li r4, 0xdc
    li r5, 0x1
    bl fn_80370AE4
    b lbl_fn_802AA534_000016B0
lbl_fn_802AA534_0000151C:
    addi r4, r1, 0x34
    lfs f2, 0x3c(r1)
    addi r3, r1, 0x28
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    mr r4, r3
    stfs f2, 0x30(r1)
    bl fn_805F98D0
    lfs f5, lbl_80883E40
    lis r3, lbl_80745FE4@ha
    lfs f4, lbl_80883EC0
    addi r3, r3, lbl_80745FE4@l
    lfs f0, 0x28(r1)
    addi r4, r3, 0x21a
    fmuls f6, f5, f4
    lfs f3, 0x30(r1)
    stfs f5, 0x2c(r1)
    fmuls f7, f0, f4
    fmuls f5, f3, f4
    addi r3, r31, 0xb0
    lfs f3, 0x52c(r31)
    li r5, 0x0
    lfs f4, 0x528(r31)
    lfs f0, 0x530(r31)
    fadds f3, f3, f6
    fadds f4, f4, f7
    stfs f7, 0x10(r1)
    fadds f0, f0, f5
    stfs f6, 0x14(r1)
    stfs f5, 0x18(r1)
    stfs f4, 0x528(r31)
    stfs f3, 0x52c(r31)
    stfs f0, 0x530(r31)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802AA534_000015B4
    li r4, 0x0
    b lbl_fn_802AA534_000015C0
lbl_fn_802AA534_000015B4:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r4, r3, r0
lbl_fn_802AA534_000015C0:
    lfs f0, 0x2c(r4)
    li r3, 0x4b5
    lfs f3, 0x1c(r4)
    lfs f4, 0xc(r4)
    stfs f4, 0x1c(r1)
    lwz r29, lbl_8087F048
    stfs f3, 0x20(r1)
    stfs f0, 0x24(r1)
    bl fn_80219E6C
    li r0, -0x1
    stw r0, 0x8(r1)
    lfs f1, lbl_80883E40
    mr r5, r3
    stw r0, 0xc(r1)
    mr r3, r29
    lfs f2, lbl_80883E44
    mr r4, r31
    addi r7, r1, 0x1c
    addi r8, r31, 0x534
    li r6, 0x3e8
    li r9, 0x0
    li r10, 0x1e
    bl fn_800FAB80
lbl_fn_802AA534_0000161C:
    lwz r8, 0x1648(r31)
    cmpwi r8, 0x0
    ble lbl_fn_802AA534_000016A4
    lwz r9, 0x14c0(r31)
    lis r0, 0x4330
    stw r0, 0x40(r1)
    lis r3, lbl_80745FC8@ha
    xoris r0, r9, 0x8000
    lfd f4, lbl_80745FC8@l(r3)
    stw r0, 0x44(r1)
    lfs f0, lbl_80883E5C
    lfd f3, 0x40(r1)
    fsubs f3, f3, f4
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_802AA534_000016A4
    lis r3, 0x6666
    li r0, 0x1
    addi r3, r3, 0x6667
    li r4, 0x0
    mulhw r5, r3, r9
    mr r3, r31
    srawi r6, r5, 2
    srwi r7, r6, 31
    srawi r5, r8, 31
    add r6, r6, r7
    subfc r0, r0, r8
    mulli r0, r6, 0xa
    adde r5, r5, r4
    subf r4, r0, r9
    subi r0, r4, 0x5
    cntlzw r0, r0
    srwi r4, r0, 5
    bl fn_802A9ADC
lbl_fn_802AA534_000016A4:
    addi r3, r31, 0x1538
    addi r4, r31, 0x528
    bl fn_800CB6E4
lbl_fn_802AA534_000016B0:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_802AA89C(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0xa4(r1)
    stfd f31, 0x90(r1)
    psq_st f31, 0x98(r1), 0, 0
    stw r31, 0x8c(r1)
    mr r31, r3
    stw r30, 0x88(r1)
    lfs f31, 0x2e4(r3)
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_802AA89C_00001860
    lwz r5, 0x5c0(r31)
    lwz r4, 0x1694(r31)
    clrrwi r8, r5, 1
    lwz r0, 0x16ec(r31)
    clrrwi r7, r4, 1
    lwz r3, 0x1434(r31)
    clrrwi r6, r0, 1
    lwz r9, 0x12a4(r31)
    lwz r5, 0x1744(r31)
    cmpwi r3, 0x0
    lwz r4, 0x179c(r31)
    oris r9, r9, 0x200
    lwz r0, 0x17f4(r31)
    clrrwi r5, r5, 1
    clrrwi r4, r4, 1
    stw r9, 0x12a4(r31)
    clrrwi r0, r0, 1
    stw r8, 0x5c0(r31)
    stw r7, 0x1694(r31)
    stw r6, 0x16ec(r31)
    stw r5, 0x1744(r31)
    stw r4, 0x179c(r31)
    stw r0, 0x17f4(r31)
    ble lbl_fn_802AA89C_00001844
    subi r0, r3, 0x1
    stw r0, 0x1434(r31)
    cmpwi r0, 0x1e
    bne lbl_fn_802AA89C_000019E8
    li r3, 0x0
    li r4, 0x0
    bl fn_80232B7C
    lfs f0, lbl_80883E40
    li r3, -0x1
    lfs f1, lbl_80883E44
    li r0, 0x1
    stfs f0, 0x20(r1)
    addi r4, r31, 0x1520
    addi r5, r31, 0xb0
    addi r7, r1, 0x14
    stfs f0, 0x24(r1)
    addi r8, r1, 0x20
    addi r9, r1, 0x30
    li r6, 0x0
    stfs f0, 0x28(r1)
    li r10, -0x1
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f1, 0x30(r1)
    stfs f1, 0x34(r1)
    stfs f1, 0x38(r1)
    stfs f1, 0x3c(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lis r4, lbl_80745FE4@ha
    lfs f1, lbl_80883E74
    addi r4, r4, lbl_80745FE4@l
    addi r3, r1, 0x10
    addi r4, r4, 0x22c
    addi r5, r31, 0x528
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    lfs f1, lbl_80883E38
    addi r3, r1, 0x10
    li r4, 0x0
    bl fn_800CB688
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x1
    lwz r12, 0x9c(r12)
    mtctr r12
    bctrl
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_802AA89C_000019E8
lbl_fn_802AA89C_00001844:
    ori r0, r9, 0x8000
    stw r0, 0x12a4(r31)
    mr r3, r31
    bl fn_801765D8
    mr r3, r31
    bl fn_800EE360
    b lbl_fn_802AA89C_000019E8
lbl_fn_802AA89C_00001860:
    lwz r3, 0x2dc(r31)
    li r0, 0x37
    stw r0, 0x1434(r31)
    cmpwi r3, 0x2e
    bne lbl_fn_802AA89C_000019E8
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_80883E60
    fcmpo cr0, f3, f0
    bge lbl_fn_802AA89C_000018F8
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    lfs f3, lbl_80883F08
    addi r3, r1, 0x58
    lfs f0, lbl_80883E40
    li r4, 0x79
    fdivs f3, f3, f1
    stfs f0, 0x4c(r1)
    stfs f0, 0x50(r1)
    stfs f3, 0x54(r1)
    lfs f1, 0x538(r31)
    bl fn_805F8E70
    addi r4, r1, 0x4c
    addi r3, r1, 0x58
    mr r5, r4
    bl fn_805F93C0
    lfs f3, 0x528(r31)
    lfs f0, 0x4c(r1)
    lfs f4, 0x52c(r31)
    fadds f0, f3, f0
    lfs f3, 0x530(r31)
    stfs f0, 0x528(r31)
    lfs f0, 0x50(r1)
    fadds f0, f4, f0
    stfs f0, 0x52c(r31)
    lfs f0, 0x54(r1)
    fadds f0, f3, f0
    stfs f0, 0x530(r31)
lbl_fn_802AA89C_000018F8:
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_80883F0C
    lwz r30, lbl_8087F430
    fcmpo cr0, f3, f0
    bge lbl_fn_802AA89C_000019CC
    lis r4, lbl_80745FE4@ha
    addi r3, r31, 0xb0
    addi r4, r4, lbl_80745FE4@l
    li r5, 0x0
    addi r4, r4, 0x21a
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802AA89C_00001934
    li r3, 0x0
    b lbl_fn_802AA89C_00001940
lbl_fn_802AA89C_00001934:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r3, r3, r0
lbl_fn_802AA89C_00001940:
    lwz r0, 0x15f0(r31)
    lfs f2, 0x2c(r3)
    lfs f0, 0x1c(r3)
    cmpwi r0, 0x0
    lfs f3, 0xc(r3)
    stfs f3, 0x40(r1)
    stfs f0, 0x44(r1)
    stfs f2, 0x48(r1)
    bne lbl_fn_802AA89C_000019B0
    stw r31, 0x8a0(r30)
    addi r4, r1, 0x40
    li r0, 0x1
    addi r5, r30, 0x97c
    lbz r3, 0x97c(r30)
    stb r3, 0x97d(r30)
    psq_l f1, 0x0(r4), 0, 0
    stb r0, 0x97c(r30)
    lfs f0, lbl_80883E40
    psq_st f1, 0xc(r5), 0, 0
    stfs f2, 0x990(r30)
    stfs f0, 0x9a0(r30)
    b lbl_fn_802AA89C_0000199C
    b lbl_fn_802AA89C_000019A0
lbl_fn_802AA89C_0000199C:
    li r0, 0x0
lbl_fn_802AA89C_000019A0:
    stw r0, 0x4(r5)
    li r0, 0x1
    stw r0, 0x15f0(r31)
    b lbl_fn_802AA89C_000019E8
lbl_fn_802AA89C_000019B0:
    addi r4, r1, 0x40
    stw r31, 0x8a0(r30)
    addi r3, r30, 0x988
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x990(r30)
    b lbl_fn_802AA89C_000019E8
lbl_fn_802AA89C_000019CC:
    lwz r0, 0x15f0(r31)
    cmpwi r0, 0x0
    beq lbl_fn_802AA89C_000019E8
    li r0, 0x0
    stw r0, 0x8a0(r30)
    stb r0, 0x97c(r30)
    stw r0, 0x15f0(r31)
lbl_fn_802AA89C_000019E8:
    lwz r0, 0xa4(r1)
    psq_l f31, 0x98(r1), 0, 0
    lfd f31, 0x90(r1)
    lwz r31, 0x8c(r1)
    lwz r30, 0x88(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}
