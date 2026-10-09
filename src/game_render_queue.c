#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void fn_8004D124(void);
extern void fn_80092814(void);
extern void fn_80092954(void);
extern void fn_80097C08(void);
extern void fn_80097CCC(void);
extern void fn_80097D7C(void);
extern void fn_800A555C(void);
extern void fn_800C31F4(void);
extern void fn_800CB3A0(void);
extern void fn_800CB5C8(void);
extern void fn_800DD3FC(void);
extern void fn_800F8548(void);
extern void fn_800F8C6C(void);
extern void fn_80109828(void);
extern void fn_8013A258(void);
extern void fn_8013CB68(void);
extern void fn_80145334(void);
extern void fn_80149A30(void);
extern void fn_8014C0B4(void);
extern void fn_8014C540(void);
extern void fn_80151448(void);
extern void fn_80158BB4(void);
extern void fn_8015AC48(void);
extern void fn_8016BEDC(void);
extern void fn_8016E970(void);
extern void fn_80170A20(void);
extern void fn_801781B0(void);
extern void fn_80239DAC(void);
extern void fn_802A74A4(void);
extern void fn_802A7970(void);
extern void fn_802A820C(void);
extern void fn_802A8718(void);
extern void fn_802A8BBC(void);
extern void fn_802A91D0(void);
extern void fn_802A94C8(void);
extern void fn_802A97C8(void);
extern void fn_802A9ADC(void);
extern void fn_802AA1B8(void);
extern void fn_802AA534(void);
extern void fn_802AB5E8(void);
extern void fn_802AB794(void);
extern void fn_802AB97C(void);
extern void fn_802ABF6C(void);
extern void fn_80370AE4(void);
extern void fn_803E3384(void);
extern void fn_805A507C(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F9160(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9940(void);
extern void fn_8068AEA4(void);

/* External data declarations */
extern u8 jumptable_80785CD0[];
extern u8 lbl_80745FC8[];
extern u8 lbl_80745FE4[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087EF70;
extern u32 lbl_8087F048;
extern u32 lbl_8087F1E4;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F490;
extern u32 lbl_8087F8A0;
extern u32 lbl_808813D0;
extern u32 lbl_80883E38;
extern u32 lbl_80883E40;
extern u32 lbl_80883E44;
extern u32 lbl_80883E48;
extern u32 lbl_80883E4C;
extern u32 lbl_80883E50;
extern u32 lbl_80883E54;
extern u32 lbl_80883E58;
extern u32 lbl_80883E5C;
extern u32 lbl_80883E60;
extern u32 lbl_80883E64;
extern u32 lbl_80883E68;
extern u32 lbl_80883E6C;
extern u32 lbl_80883E70;
extern u32 lbl_80883E74;
extern u32 lbl_80883E78;
extern u32 lbl_80883E7C;
extern u32 lbl_80883E80;
extern u32 lbl_80883E84;
extern u32 lbl_80883E88;
extern u32 lbl_80883E8C;
extern u32 lbl_80883E90;
extern u32 lbl_80883E94;
extern u32 lbl_80883E98;

/* Function declarations */
void fn_802A5A1C(void);
void fn_802A6B90(void);
void fn_802A6D58(void);
void fn_802A6E80(void);
void fn_802A7118(void);
void fn_802A711C(void);

asm void fn_802A5A1C(void)
{
    nofralloc
    stwu r1, -0x370(r1)
    mflr r0
    li r4, 0x1b
    li r5, 0x14
    stw r0, 0x374(r1)
    stfd f31, 0x360(r1)
    psq_st f31, 0x368(r1), 0, 0
    stw r31, 0x35c(r1)
    mr r31, r3
    stw r30, 0x358(r1)
    stw r29, 0x354(r1)
    bl fn_8014C0B4
    mr r3, r31
    li r4, 0x1c
    li r5, 0x1c7
    bl fn_8014C0B4
    mr r3, r31
    li r4, 0x1d
    li r5, 0x1c7
    bl fn_8014C0B4
    mr r3, r31
    li r4, 0x1e
    li r5, 0x1c7
    bl fn_8014C0B4
    lwz r3, 0x58c(r31)
    lfs f0, lbl_80883E4C
    subi r0, r3, 0x9
    stfs f0, 0x50c(r31)
    cmplwi r0, 0x4
    ble lbl_fn_802A5A1C_00000088
    cmpwi r3, 0x1a
    beq lbl_fn_802A5A1C_00000088
    lwz r0, 0xd1c(r31)
    stw r0, 0x14b0(r31)
lbl_fn_802A5A1C_00000088:
    lwz r0, 0xd18(r31)
    lwz r3, 0x14c0(r31)
    cmpwi r0, 0x0
    addi r0, r3, 0x1
    stw r0, 0x14c0(r31)
    beq lbl_fn_802A5A1C_000000AC
    lwz r3, 0x14b0(r31)
    cmpwi r3, 0x0
    bne lbl_fn_802A5A1C_000001A0
lbl_fn_802A5A1C_000000AC:
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lfs f1, lbl_80883E40
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097CCC
    lfs f0, lbl_80883E44
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80883E40
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x2
    lfs f2, lbl_80883E50
    li r6, 0x1
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
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
    b lbl_fn_802A5A1C_00000DFC
lbl_fn_802A5A1C_000001A0:
    beq lbl_fn_802A5A1C_00000DFC
    lwz r3, 0x58c(r31)
    subi r4, r3, 0x7
    cmplwi r4, 0x14
    bgt lbl_fn_802A5A1C_00000D44
    lis r3, jumptable_80785CD0@ha
    slwi r4, r4, 2
    addi r3, r3, jumptable_80785CD0@l
    lwzx r3, r3, r4
    mtctr r3
    bctr
    mr r3, r31
    bl fn_802A820C
    b lbl_fn_802A5A1C_00000DFC
    mr r3, r31
    bl fn_802A8718
    b lbl_fn_802A5A1C_00000DFC
    mr r3, r31
    bl fn_80158BB4
    cmpwi r3, 0x0
    beq lbl_fn_802A5A1C_000002D4
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
lbl_fn_802A5A1C_000002D4:
    lfs f7, 0x2e4(r31)
    lfs f0, lbl_80883E54
    fcmpo cr0, f7, f0
    cror eq, gt, eq
    bne lbl_fn_802A5A1C_00000DFC
    lfs f0, lbl_80883E58
    fcmpo cr0, f7, f0
    cror eq, lt, eq
    bne lbl_fn_802A5A1C_00000DFC
    lwz r8, 0x590(r31)
    mr r6, r31
    lwz r7, 0x166c(r31)
    li r4, 0x0
    lwz r3, lbl_8087F048
    li r5, 0x0
    lfs f1, lbl_80883E40
    li r9, 0x1e
    li r10, -0x1
    bl fn_800F8C6C
    b lbl_fn_802A5A1C_00000DFC
    mr r3, r31
    bl fn_802A8BBC
    b lbl_fn_802A5A1C_00000DFC
    lfs f31, 0x2e4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_802A5A1C_00000DFC
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
    b lbl_fn_802A5A1C_00000DFC
    lfs f31, 0x2e4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_802A5A1C_00000474
    li r3, 0x0
    li r0, 0xc
    stw r3, 0x14c0(r31)
    mr r3, r31
    li r4, 0x6
    stw r0, 0x58c(r31)
    bl fn_8016E970
    li r0, 0x4
    stw r0, 0x560(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f7, lbl_80883E44
    li r0, 0x1
    lfs f0, lbl_80883E38
    li r4, 0x0
    stw r3, 0x590(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80883E40
    li r5, 0x14c
    stw r0, 0x3fc(r31)
    li r6, 0x0
    lfs f2, lbl_80883E50
    li r7, 0x0
    stfs f7, 0x2fc(r31)
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
lbl_fn_802A5A1C_00000474:
    lwz r3, 0x1644(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802A5A1C_00000DFC
    lwz r0, 0x560(r3)
    cmpwi r0, 0x11
    beq lbl_fn_802A5A1C_00000DFC
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_802A5A1C_00000DFC
    li r4, -0x1
    bl fn_8015AC48
    li r29, 0x0
    stw r29, 0x1644(r31)
    lfs f1, lbl_80883E40
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097CCC
    li r0, 0x6
    stw r29, 0x14c8(r31)
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
    b lbl_fn_802A5A1C_00000DFC
    mr r3, r31
    bl fn_802A91D0
    b lbl_fn_802A5A1C_00000DFC
    mr r3, r31
    bl fn_802A94C8
    b lbl_fn_802A5A1C_00000DFC
    mr r3, r31
    bl fn_802A97C8
    b lbl_fn_802A5A1C_00000DFC
    lfs f31, 0x2e4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_802A5A1C_00000DFC
    lwz r0, 0x14f8(r31)
    cmpwi r0, 0x0
    beq lbl_fn_802A5A1C_000005B4
    cmpwi r0, 0x2
    beq lbl_fn_802A5A1C_000005C4
    b lbl_fn_802A5A1C_00000688
lbl_fn_802A5A1C_000005B4:
    mr r3, r31
    li r4, 0x2
    bl fn_802AB794
    b lbl_fn_802A5A1C_00000DFC
lbl_fn_802A5A1C_000005C4:
    li r29, 0x0
    li r0, 0x12
    stw r29, 0x14c0(r31)
    mr r3, r31
    li r4, 0x6
    stw r29, 0x14b8(r31)
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f0, lbl_80883E44
    li r3, 0x4
    li r0, 0x1
    stw r3, 0x560(r31)
    lfs f1, lbl_80883E40
    addi r3, r31, 0xb0
    stw r0, 0x3fc(r31)
    li r4, 0x0
    lfs f2, lbl_80883E50
    li r5, 0x140
    stfs f0, 0x2fc(r31)
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    lwz r3, 0x1694(r31)
    addi r9, r31, 0x15c4
    lwz r0, 0x16ec(r31)
    addi r8, r31, 0x15d4
    clrrwi r7, r3, 1
    lwz r4, 0x1744(r31)
    clrrwi r6, r0, 1
    psq_l f1, 0x0(r9), 0, 0
    lfs f2, 0x15cc(r31)
    clrrwi r5, r4, 1
    lwz r3, 0x179c(r31)
    lwz r0, 0x17f4(r31)
    clrrwi r4, r3, 1
    stw r7, 0x1694(r31)
    clrrwi r3, r0, 1
    li r0, -0x1
    stw r6, 0x16ec(r31)
    stw r5, 0x1744(r31)
    stw r4, 0x179c(r31)
    stw r3, 0x17f4(r31)
    stw r29, 0x14f0(r31)
    stw r0, 0x14d8(r31)
    psq_st f1, 0x0(r8), 0, 0
    stfs f2, 0x15dc(r31)
    b lbl_fn_802A5A1C_00000DFC
lbl_fn_802A5A1C_00000688:
    mr r3, r31
    bl fn_802AB5E8
    b lbl_fn_802A5A1C_00000DFC
    xoris r3, r0, 0x8000
    lis r30, 0x4330
    lis r29, lbl_80745FC8@ha
    stw r3, 0x344(r1)
    lfd f8, lbl_80745FC8@l(r29)
    stw r30, 0x340(r1)
    lfs f0, lbl_80883E5C
    lfd f7, 0x340(r1)
    fsubs f7, f7, f8
    fcmpo cr0, f7, f0
    ble lbl_fn_802A5A1C_00000784
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x66
    li r6, 0x0
    bl fn_80239DAC
    lwz r0, 0x1648(r31)
    cmpwi r0, 0x1
    bne lbl_fn_802A5A1C_00000708
    lwz r0, 0x14c0(r31)
    stw r30, 0x340(r1)
    xoris r3, r0, 0x8000
    lfd f8, lbl_80745FC8@l(r29)
    stw r3, 0x344(r1)
    lfs f0, lbl_80883E60
    lfd f7, 0x340(r1)
    fsubs f7, f7, f8
    fcmpo cr0, f7, f0
    ble lbl_fn_802A5A1C_00000784
lbl_fn_802A5A1C_00000708:
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
    b lbl_fn_802A5A1C_00000DFC
lbl_fn_802A5A1C_00000784:
    lwz r9, 0x1648(r31)
    cmpwi r9, 0x0
    ble lbl_fn_802A5A1C_00000DFC
    xoris r4, r0, 0x8000
    lis r3, 0x4330
    lis r5, lbl_80745FC8@ha
    stw r4, 0x344(r1)
    lfd f8, lbl_80745FC8@l(r5)
    stw r3, 0x340(r1)
    lfs f0, lbl_80883E5C
    lfd f7, 0x340(r1)
    fsubs f7, f7, f8
    fcmpo cr0, f7, f0
    cror eq, lt, eq
    bne lbl_fn_802A5A1C_00000DFC
    lis r3, 0x6666
    li r4, 0x1
    addi r3, r3, 0x6667
    li r5, 0x0
    mulhw r6, r3, r0
    mr r3, r31
    srawi r7, r6, 2
    srwi r8, r7, 31
    srawi r6, r9, 31
    add r7, r7, r8
    subfc r4, r4, r9
    mulli r4, r7, 0xa
    adde r5, r6, r5
    subf r4, r4, r0
    subi r0, r4, 0x5
    cntlzw r0, r0
    srwi r4, r0, 5
    bl fn_802A9ADC
    b lbl_fn_802A5A1C_00000DFC
    mr r3, r31
    bl fn_802AA1B8
    b lbl_fn_802A5A1C_00000DFC
    lfs f7, 0x2e4(r31)
    lfs f0, lbl_80883E64
    fcmpo cr0, f7, f0
    cror eq, gt, eq
    bne lbl_fn_802A5A1C_00000DFC
    mr r3, r31
    bl fn_802AB97C
    b lbl_fn_802A5A1C_00000DFC
    lwz r3, 0x14b8(r31)
    cmpwi r3, 0x0
    bne lbl_fn_802A5A1C_000008AC
    lfs f31, 0x2e4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_802A5A1C_00000DFC
    lfs f7, lbl_80883E44
    li r30, 0x1
    lfs f0, lbl_80883E38
    addi r3, r31, 0xb0
    stw r30, 0x3fc(r31)
    li r4, 0x0
    lfs f1, lbl_80883E40
    li r5, 0x37
    stfs f7, 0x2fc(r31)
    li r6, 0x0
    lfs f2, lbl_80883E50
    li r7, 0x0
    stfs f0, 0x2e8(r31)
    li r8, 0x1
    bl fn_80097C08
    li r0, 0x0
    stw r30, 0x14b8(r31)
    stw r0, 0x14c0(r31)
    b lbl_fn_802A5A1C_00000DFC
lbl_fn_802A5A1C_000008AC:
    cmpwi r3, 0x1
    bne lbl_fn_802A5A1C_00000DFC
    lwz r4, 0x164c(r31)
    cmpw r0, r4
    ble lbl_fn_802A5A1C_00000DFC
    lwz r3, 0x1648(r31)
    cmpwi r3, 0x0
    bne lbl_fn_802A5A1C_000008D8
    slwi r3, r4, 1
    cmpw r0, r3
    ble lbl_fn_802A5A1C_00000DFC
lbl_fn_802A5A1C_000008D8:
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
    lwz r4, 0x1694(r31)
    li r0, 0x0
    lwz r3, 0x16ec(r31)
    ori r7, r4, 0x1
    lwz r5, 0x1744(r31)
    ori r6, r3, 0x1
    lwz r4, 0x179c(r31)
    lwz r3, 0x17f4(r31)
    ori r5, r5, 0x1
    ori r4, r4, 0x1
    stw r7, 0x1694(r31)
    ori r3, r3, 0x1
    stw r6, 0x16ec(r31)
    stw r5, 0x1744(r31)
    stw r4, 0x179c(r31)
    stw r3, 0x17f4(r31)
    stw r0, 0x15e4(r31)
    b lbl_fn_802A5A1C_00000DFC
    lfs f31, 0x2e4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_802A5A1C_00000DFC
    li r3, 0x0
    li r0, 0x17
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
    li r5, 0x3b
    lfs f2, lbl_80883E50
    li r6, 0x1
    stfs f0, 0x2fc(r31)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    addi r3, r1, 0x140
    li r4, 0x0
    li r5, 0x200
    bl memset
    lwz r3, lbl_8087F1E4
    lwz r4, 0x3bc(r3)
    cmpwi r4, 0x0
    beq lbl_fn_802A5A1C_00000A28
    b lbl_fn_802A5A1C_00000A2C
lbl_fn_802A5A1C_00000A28:
    la r4, lbl_808813D0
lbl_fn_802A5A1C_00000A2C:
    lwz r5, 0x60(r31)
    addi r3, r1, 0x140
    lwz r5, 0x4(r5)
    crclr 6
    bl fn_800DD3FC
    lwz r3, lbl_8087F048
    addi r4, r1, 0x140
    bl fn_80109828
    b lbl_fn_802A5A1C_00000DFC
    lwz r3, 0x1660(r31)
    cmpw r0, r3
    ble lbl_fn_802A5A1C_00000DFC
    li r3, 0x0
    li r0, 0x19
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
    li r5, 0x3e
    lfs f2, lbl_80883E50
    li r6, 0x0
    stfs f0, 0x2fc(r31)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    b lbl_fn_802A5A1C_00000DFC
    lwz r5, 0x14b4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    lfs f31, 0x2e4(r5)
    stfs f31, 0x2e4(r31)
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    beq lbl_fn_802A5A1C_00000B08
    lwz r3, 0x14b4(r31)
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_802A5A1C_00000B08
    lwz r0, 0x560(r3)
    cmpwi r0, 0x4b
    beq lbl_fn_802A5A1C_00000DFC
lbl_fn_802A5A1C_00000B08:
    li r3, 0x0
    li r0, 0x19
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
    li r5, 0x3e
    lfs f2, lbl_80883E50
    li r6, 0x0
    stfs f0, 0x2fc(r31)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    b lbl_fn_802A5A1C_00000DFC
    lfs f31, 0x2e4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_802A5A1C_00000DFC
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
    lwz r4, 0x1694(r31)
    li r0, 0x0
    lwz r3, 0x16ec(r31)
    ori r7, r4, 0x1
    lwz r5, 0x1744(r31)
    ori r6, r3, 0x1
    lwz r4, 0x179c(r31)
    lwz r3, 0x17f4(r31)
    ori r5, r5, 0x1
    ori r4, r4, 0x1
    stw r7, 0x1694(r31)
    ori r3, r3, 0x1
    stw r6, 0x16ec(r31)
    stw r5, 0x1744(r31)
    stw r4, 0x179c(r31)
    stw r3, 0x17f4(r31)
    stw r0, 0x15e4(r31)
    b lbl_fn_802A5A1C_00000DFC
    lfs f7, 0x15e8(r31)
    lfs f0, lbl_80883E40
    fcmpo cr0, f7, f0
    bge lbl_fn_802A5A1C_00000CE8
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
    b lbl_fn_802A5A1C_00000DFC
lbl_fn_802A5A1C_00000CE8:
    lwz r0, 0x15ec(r31)
    cmpwi r0, 0x0
    beq lbl_fn_802A5A1C_00000CFC
    lfs f9, lbl_80883E68
    b lbl_fn_802A5A1C_00000D00
lbl_fn_802A5A1C_00000CFC:
    lfs f9, lbl_80883E6C
lbl_fn_802A5A1C_00000D00:
    lfs f8, 0x538(r31)
    lfs f7, 0x15e8(r31)
    lfs f0, lbl_80883E44
    fadds f8, f8, f9
    fsubs f0, f7, f0
    stfs f8, 0x538(r31)
    stfs f0, 0x15e8(r31)
    b lbl_fn_802A5A1C_00000DFC
    mr r3, r31
    bl fn_802AA534
    b lbl_fn_802A5A1C_00000DFC
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0xec(r12)
    mtctr r12
    bctrl
    b lbl_fn_802A5A1C_00000DFC
lbl_fn_802A5A1C_00000D44:
    lwz r3, 0x55c(r31)
    subi r0, r3, 0x6
    cmplwi r0, 0x1
    ble lbl_fn_802A5A1C_00000D74
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lwz r4, 0x14b0(r31)
    mr r3, r31
    lfs f1, lbl_80883E70
    li r5, 0x0
    bl fn_80170A20
lbl_fn_802A5A1C_00000D74:
    mr r3, r31
    bl fn_802A711C
    mr r4, r31
    addi r3, r1, 0xc
    bl fn_801781B0
    addi r3, r1, 0xc
    lfs f7, lbl_80883E40
    lfs f2, 0x14(r1)
    addi r29, r1, 0x18
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0xe0
    lfs f0, lbl_80883E44
    li r4, 0x79
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x20(r1)
    stfs f7, 0x24(r1)
    stfs f7, 0x28(r1)
    stfs f0, 0x2c(r1)
    lfs f1, 0x538(r31)
    bl fn_805F8E70
    addi r4, r1, 0x24
    addi r3, r1, 0xe0
    mr r5, r4
    bl fn_805F93C0
    lfs f7, lbl_80883E74
    mr r3, r29
    lfs f0, 0x5b0(r31)
    addi r4, r1, 0x24
    lfs f2, lbl_80883E78
    li r5, 0x64
    fmuls f1, f7, f0
    bl fn_805A507C
    mr r3, r31
    bl fn_802A74A4
lbl_fn_802A5A1C_00000DFC:
    lwz r4, 0x15e4(r31)
    mr r3, r31
    addi r0, r4, 0x1
    stw r0, 0x15e4(r31)
    bl fn_8014C540
    mr r3, r31
    bl fn_80145334
    mr r3, r31
    bl fn_802A7970
    lwz r3, 0x58c(r31)
    subi r0, r3, 0xb
    cmplwi r0, 0x2
    bgt lbl_fn_802A5A1C_00000F68
    lis r4, lbl_80745FE4@ha
    addi r3, r31, 0xb0
    addi r4, r4, lbl_80745FE4@l
    li r5, 0x0
    addi r4, r4, 0x192
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802A5A1C_00000E58
    li r4, 0x0
    b lbl_fn_802A5A1C_00000E64
lbl_fn_802A5A1C_00000E58:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r4, r3, r0
lbl_fn_802A5A1C_00000E64:
    psq_l f1, 0x0(r4), 0, 0
    addi r29, r1, 0x110
    psq_l f2, 0x8(r4), 0, 0
    addi r3, r1, 0xb0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_st f6, 0x28(r29), 0, 0
    lfs f0, lbl_80883E40
    lfs f9, 0x13c(r1)
    psq_st f2, 0x8(r29), 0, 0
    lfs f8, lbl_80883E44
    lfs f11, 0x11c(r1)
    psq_st f4, 0x18(r29), 0, 0
    lfs f10, 0x12c(r1)
    psq_st f1, 0x0(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    stfs f0, 0x11c(r1)
    stfs f0, 0x12c(r1)
    stfs f0, 0x13c(r1)
    lfs f0, 0x548(r31)
    lfs f7, 0x544(r31)
    fdivs f3, f8, f0
    lfs f0, 0x540(r31)
    stfs f11, 0x54(r1)
    stfs f10, 0x58(r1)
    stfs f9, 0x5c(r1)
    stfs f3, 0x50(r1)
    fdivs f2, f8, f7
    stfs f2, 0x4c(r1)
    fdivs f1, f8, f0
    stfs f1, 0x48(r1)
    bl fn_805F9160
    mr r3, r29
    addi r4, r1, 0xb0
    addi r5, r1, 0x80
    bl fn_805F89F0
    addi r3, r1, 0x80
    addi r4, r31, 0x1614
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    lfs f8, 0x54(r1)
    psq_st f2, 0x8(r29), 0, 0
    lfs f7, 0x58(r1)
    psq_st f3, 0x10(r29), 0, 0
    lfs f0, 0x5c(r1)
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
    psq_st f2, 0x8(r4), 0, 0
    psq_st f4, 0x18(r4), 0, 0
    psq_st f6, 0x28(r4), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    psq_st f3, 0x10(r4), 0, 0
    psq_st f5, 0x20(r4), 0, 0
    stfs f8, 0x1620(r31)
    stfs f7, 0x1630(r31)
    stfs f0, 0x1640(r31)
lbl_fn_802A5A1C_00000F68:
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x17
    bne lbl_fn_802A5A1C_00001150
    lwz r4, lbl_8087F8A0
    addi r3, r1, 0x3c
    lfs f10, 0x530(r31)
    lwz r29, 0x48(r4)
    lfs f9, 0x52c(r31)
    lfs f0, 0x530(r29)
    lfs f8, 0x52c(r29)
    fsubs f10, f10, f0
    lfs f7, 0x528(r31)
    lfs f0, 0x528(r29)
    fsubs f8, f9, f8
    fsubs f0, f7, f0
    stfs f8, 0x40(r1)
    stfs f0, 0x3c(r1)
    stfs f10, 0x44(r1)
    bl fn_805F9940
    lfs f0, lbl_80883E7C
    fcmpo cr0, f1, f0
    bge lbl_fn_802A5A1C_00001150
    lwz r3, 0x12a4(r29)
    extrwi. r0, r3, 1, 25
    bne lbl_fn_802A5A1C_00001150
    srwi. r0, r3, 31
    bne lbl_fn_802A5A1C_00001150
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_802A5A1C_00000FEC
    lwz r0, 0x560(r29)
    cmpwi r0, 0x4
    bne lbl_fn_802A5A1C_00001150
lbl_fn_802A5A1C_00000FEC:
    lwz r7, lbl_8087F490
    cmpwi r7, 0x0
    beq lbl_fn_802A5A1C_00001044
    li r4, 0x6
    stw r4, 0x764(r7)
    li r5, 0x0
    li r3, 0x11
    stw r3, 0x768(r7)
    li r6, -0x1
    li r0, 0x1
    stw r6, 0x76c(r7)
    stw r5, 0x770(r7)
    stw r5, 0x774(r7)
    stw r5, 0x778(r7)
    stw r6, 0x68(r1)
    stw r5, 0x6c(r1)
    stw r5, 0x70(r1)
    stw r5, 0x74(r1)
    stw r4, 0x60(r1)
    stw r3, 0x64(r1)
    stw r0, 0x78(r1)
    stw r0, 0x77c(r7)
lbl_fn_802A5A1C_00001044:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x4
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_802A5A1C_00001150
    lfs f8, lbl_80883E40
    mr r3, r29
    lfs f7, lbl_80883E80
    mr r4, r31
    lfs f0, lbl_80883E84
    addi r5, r1, 0x30
    stfs f8, 0x30(r1)
    stfs f7, 0x34(r1)
    stfs f0, 0x38(r1)
    bl fn_8016BEDC
    li r5, 0x0
    li r0, 0x18
    stw r29, 0x14b4(r31)
    mr r3, r31
    li r4, 0x6
    stw r5, 0x14c0(r31)
    stw r0, 0x58c(r31)
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
    beq lbl_fn_802A5A1C_00001114
    lwz r3, lbl_8087F430
    li r5, 0x1
    lwz r4, 0x1684(r31)
    bl fn_80370AE4
lbl_fn_802A5A1C_00001114:
    lis r4, lbl_80745FE4@ha
    lfs f1, lbl_80883E44
    addi r4, r4, lbl_80745FE4@l
    addi r3, r1, 0x8
    addi r4, r4, 0x19d
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    lwz r3, lbl_8087F490
    cmpwi r3, 0x0
    beq lbl_fn_802A5A1C_00001150
    bl fn_803E3384
lbl_fn_802A5A1C_00001150:
    lwz r0, 0x374(r1)
    psq_l f31, 0x368(r1), 0, 0
    lfd f31, 0x360(r1)
    lwz r31, 0x35c(r1)
    lwz r30, 0x358(r1)
    lwz r29, 0x354(r1)
    mtlr r0
    addi r1, r1, 0x370
    blr
}

asm void fn_802A6B90(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    lis r4, lbl_80745FE4@ha
    stw r0, 0x94(r1)
    addi r4, r4, lbl_80745FE4@l
    addi r4, r4, 0x16a
    stw r31, 0x8c(r1)
    mr r31, r3
    addi r3, r3, 0xb0
    bl fn_80092954
    cmpwi r3, 0x0
    beq lbl_fn_802A6B90_00001320
    lwz r0, 0x58c(r31)
    lfs f3, 0x15f4(r31)
    lfs f2, 0x15f8(r31)
    cmpwi r0, 0x12
    lfs f1, 0x15fc(r31)
    lfs f0, 0x1600(r31)
    stfs f3, 0x50(r1)
    stfs f2, 0x54(r1)
    stfs f1, 0x58(r1)
    stfs f0, 0x5c(r1)
    bne lbl_fn_802A6B90_000011FC
    lfs f1, lbl_80883E50
    lfs f2, lbl_80883E88
    lfs f0, lbl_80883E44
    stfs f2, 0x40(r1)
    stfs f1, 0x44(r1)
    stfs f1, 0x48(r1)
    stfs f0, 0x4c(r1)
    stfs f2, 0x50(r1)
    stfs f1, 0x54(r1)
    stfs f1, 0x58(r1)
    stfs f0, 0x5c(r1)
lbl_fn_802A6B90_000011FC:
    lfs f1, 0x58(r1)
    lis r4, lbl_80745FE4@ha
    lfs f5, 0x160c(r31)
    addi r4, r4, lbl_80745FE4@l
    lfs f0, 0x5c(r1)
    addi r3, r31, 0xb0
    fsubs f12, f1, f5
    lfs f3, 0x1610(r31)
    lfs f2, 0x54(r1)
    addi r4, r4, 0x16a
    fsubs f13, f0, f3
    lfs f0, lbl_80883E50
    fmuls f10, f12, f0
    lfs f4, 0x1608(r31)
    lfs f1, 0x50(r1)
    fmuls f11, f13, f0
    fsubs f8, f2, f4
    lfs f2, 0x1604(r31)
    fadds f6, f10, f5
    stfs f8, 0x24(r1)
    fsubs f5, f1, f2
    fadds f7, f11, f3
    lfs f3, lbl_80883E48
    fmuls f9, f8, f0
    fmuls f8, f5, f0
    stfs f5, 0x20(r1)
    fmuls f1, f3, f6
    fadds f5, f9, f4
    stfs f12, 0x28(r1)
    fadds f4, f8, f2
    fmuls f0, f3, f7
    stfs f13, 0x2c(r1)
    fmuls f2, f3, f5
    fctiwz f1, f1
    stfs f8, 0x10(r1)
    fctiwz f0, f0
    fctiwz f2, f2
    stfd f1, 0x70(r1)
    fmuls f3, f3, f4
    stfd f2, 0x68(r1)
    lwz r5, 0x74(r1)
    fctiwz f1, f3
    stfd f0, 0x78(r1)
    lwz r6, 0x6c(r1)
    stfd f1, 0x60(r1)
    lwz r0, 0x7c(r1)
    lwz r7, 0x64(r1)
    stb r7, 0x8(r1)
    stb r6, 0x9(r1)
    stb r5, 0xa(r1)
    stb r0, 0xb(r1)
    lwz r0, 0x8(r1)
    stfs f9, 0x14(r1)
    stfs f10, 0x18(r1)
    stfs f11, 0x1c(r1)
    stfs f4, 0x30(r1)
    stfs f5, 0x34(r1)
    stfs f6, 0x38(r1)
    stfs f7, 0x3c(r1)
    stfs f4, 0x1604(r31)
    stfs f5, 0x1608(r31)
    stfs f6, 0x160c(r31)
    stfs f7, 0x1610(r31)
    stw r0, 0xc(r1)
    bl fn_80092954
    lbz r0, 0xc(r1)
    stb r0, 0x18(r3)
    lbz r0, 0xd(r1)
    stb r0, 0x19(r3)
    lbz r0, 0xe(r1)
    stb r0, 0x1a(r3)
    lbz r0, 0xf(r1)
    stb r0, 0x1b(r3)
lbl_fn_802A6B90_00001320:
    mr r3, r31
    bl fn_80149A30
    lwz r0, 0x94(r1)
    lwz r31, 0x8c(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_802A6D58(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x16
    beq lbl_fn_802A6D58_0000144C
    lis r5, lbl_807C7030@ha
    lwz r0, 0x50(r4)
    addi r5, r5, lbl_807C7030@l
    psq_l f1, 0x0(r5), 0, 0
    ori r0, r0, 0x10
    lfs f2, 0x8(r5)
    stfs f2, 0x18(r4)
    psq_st f1, 0x10(r4), 0, 0
    stw r0, 0x50(r4)
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x15
    beq lbl_fn_802A6D58_000013E0
    cmpwi r0, 0x18
    beq lbl_fn_802A6D58_000013E0
    cmpwi r0, 0x17
    beq lbl_fn_802A6D58_000013E0
    lwz r6, 0x7e0(r3)
    li r5, 0x1
    rlwinm r3, r6, 0, 12, 12
    subis r0, r3, 0x8
    cmplwi r0, 0x0
    beq lbl_fn_802A6D58_000013D0
    rlwinm r3, r6, 0, 7, 7
    subis r0, r3, 0x100
    cmplwi r0, 0x0
    beq lbl_fn_802A6D58_000013D0
    li r5, 0x0
lbl_fn_802A6D58_000013D0:
    cmpwi r5, 0x0
    bne lbl_fn_802A6D58_000013E0
    li r0, 0x1
    stw r0, 0x48(r4)
lbl_fn_802A6D58_000013E0:
    lwz r3, 0x8(r4)
    cmpwi r3, 0x0
    beq lbl_fn_802A6D58_00001404
    lwz r0, 0x4(r3)
    cmpwi r0, 0xcc
    bne lbl_fn_802A6D58_00001404
    lwz r0, 0x50(r4)
    ori r0, r0, 0x80
    stw r0, 0x50(r4)
lbl_fn_802A6D58_00001404:
    mr r3, r30
    mr r4, r31
    bl fn_80151448
    lwz r12, 0x0(r30)
    mr r3, r30
    mr r4, r31
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r3, 0x8(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802A6D58_0000144C
    lwz r0, 0x4(r3)
    cmpwi r0, 0xcc
    bne lbl_fn_802A6D58_0000144C
    lwz r0, 0x94(r31)
    ori r0, r0, 0x80
    stw r0, 0x94(r31)
lbl_fn_802A6D58_0000144C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802A6E80(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    lwz r5, 0x68(r4)
    cmpwi r5, 0x0
    beq lbl_fn_802A6E80_000016CC
    lwz r6, 0x58c(r3)
    lwz r0, 0x14d0(r3)
    cmpwi r6, 0x15
    add r0, r0, r5
    stw r0, 0x14d0(r3)
    bne lbl_fn_802A6E80_00001558
    lwz r4, 0x0(r4)
    cmpwi r4, 0x0
    beq lbl_fn_802A6E80_0000164C
    lwz r0, 0x48(r4)
    cmpwi r0, 0x0
    bne lbl_fn_802A6E80_0000164C
    li r30, 0x0
    li r0, 0x16
    stw r30, 0x14c0(r3)
    li r4, 0x6
    stw r0, 0x58c(r3)
    bl fn_8016E970
    li r0, 0x4
    stw r0, 0x560(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r4, r31
    li r5, 0x67
    li r6, 0x0
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lfs f0, lbl_80883E44
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80883E40
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x38
    lfs f2, lbl_80883E50
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r3, 0x1644(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802A6E80_00001548
    li r4, -0x1
    bl fn_8015AC48
    stw r30, 0x1644(r31)
lbl_fn_802A6E80_00001548:
    lwz r3, 0x1648(r31)
    addi r0, r3, 0x1
    stw r0, 0x1648(r31)
    b lbl_fn_802A6E80_0000164C
lbl_fn_802A6E80_00001558:
    subi r0, r6, 0xb
    cmplwi r0, 0x1
    bgt lbl_fn_802A6E80_0000164C
    lwz r5, 0x14c8(r3)
    lwz r4, 0x68(r4)
    lwz r0, 0x1650(r3)
    add r4, r5, r4
    stw r4, 0x14c8(r3)
    cmpw r4, r0
    ble lbl_fn_802A6E80_0000164C
    lwz r3, 0x1644(r3)
    cmpwi r3, 0x0
    beq lbl_fn_802A6E80_0000164C
    li r4, -0x1
    bl fn_8015AC48
    li r0, 0x0
    stw r0, 0x1644(r31)
    lfs f1, lbl_80883E40
    addi r3, r31, 0xb0
    stw r0, 0x14c8(r31)
    li r4, 0x0
    bl fn_80097CCC
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
lbl_fn_802A6E80_0000164C:
    lwz r3, 0x940(r31)
    lwz r4, 0x14d0(r31)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    cmpw r4, r0
    blt lbl_fn_802A6E80_00001684
    lwz r0, 0x14c4(r31)
    cmpwi r0, 0x1
    bne lbl_fn_802A6E80_00001684
    li r3, 0x3
    li r0, 0x0
    stw r3, 0x14c4(r31)
    stw r0, 0x14cc(r31)
lbl_fn_802A6E80_00001684:
    lfs f1, 0x7d8(r31)
    lfs f0, lbl_80883E40
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_802A6E80_000016CC
    lwz r0, 0x58c(r31)
    cmpwi r0, 0xc
    beq lbl_fn_802A6E80_000016AC
    cmpwi r0, 0xa
    bne lbl_fn_802A6E80_000016CC
lbl_fn_802A6E80_000016AC:
    lwz r3, 0x1644(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802A6E80_000016CC
    li r4, -0x1
    bl fn_8015AC48
    li r0, 0x0
    stw r0, 0x1644(r31)
    stw r0, 0x14c8(r31)
lbl_fn_802A6E80_000016CC:
    lwz r0, 0x7e0(r31)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_802A6E80_000016E4
    mr r3, r31
    bl fn_802ABF6C
lbl_fn_802A6E80_000016E4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802A7118(void)
{
    nofralloc
    blr
}

asm void fn_802A711C(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    stfd f31, 0x120(r1)
    psq_st f31, 0x128(r1), 0, 0
    lfs f31, lbl_80883E40
    stfd f30, 0x110(r1)
    psq_st f30, 0x118(r1), 0, 0
    stfd f29, 0x100(r1)
    psq_st f29, 0x108(r1), 0, 0
    lfs f29, lbl_80883E44
    stw r31, 0xfc(r1)
    mr r31, r3
    stw r30, 0xf8(r1)
    addi r30, r1, 0x74
    stw r29, 0xf4(r1)
    psq_l f1, 0x534(r3), 0, 0
    lfs f2, 0x53c(r3)
    stfs f2, 0x7c(r1)
    psq_st f1, 0x0(r30), 0, 0
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x7
    bne lbl_fn_802A711C_000019A0
    lwz r4, 0x14b0(r3)
    lfs f0, 0x530(r3)
    lfs f3, 0x530(r4)
    lfs f5, 0x52c(r4)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r3)
    lfs f0, 0x528(r3)
    addi r3, r1, 0x68
    lfs f3, 0x528(r4)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x6c(r1)
    stfs f0, 0x68(r1)
    stfs f6, 0x70(r1)
    bl fn_805F9940
    lfs f0, lbl_80883E8C
    fmr f31, f1
    fcmpo cr0, f1, f0
    bge lbl_fn_802A711C_000017BC
    psq_l f1, 0x534(r31), 0, 0
    lfs f2, 0x53c(r31)
    stfs f2, 0x7c(r1)
    psq_st f1, 0x0(r30), 0, 0
    b lbl_fn_802A711C_00001998
lbl_fn_802A711C_000017BC:
    addi r3, r1, 0x68
    addi r30, r1, 0x50
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r30
    lfs f2, 0x70(r1)
    mr r4, r30
    psq_st f1, 0x0(r30), 0, 0
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
    bge lbl_fn_802A711C_0000182C
    lfs f3, 0x5c(r1)
    lfs f0, lbl_80883E40
    fcmpo cr0, f3, f0
    ble lbl_fn_802A711C_00001820
    lfs f0, lbl_80883E94
    b lbl_fn_802A711C_00001824
lbl_fn_802A711C_00001820:
    lfs f0, lbl_80883E98
lbl_fn_802A711C_00001824:
    stfs f0, 0x48(r1)
    b lbl_fn_802A711C_00001840
lbl_fn_802A711C_0000182C:
    frsp f2, f2
    lfs f1, 0x5c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_802A711C_00001840:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x80
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883E40
    addi r4, r1, 0x38
    lfs f29, 0x88(r1)
    mr r5, r4
    lfs f30, 0x84(r1)
    addi r3, r1, 0xb0
    lfs f13, 0x80(r1)
    lfs f12, 0x98(r1)
    lfs f11, 0x94(r1)
    lfs f10, 0x90(r1)
    lfs f9, 0xa8(r1)
    lfs f8, 0xa4(r1)
    lfs f7, 0xa0(r1)
    lfs f6, 0xac(r1)
    lfs f5, 0x9c(r1)
    lfs f4, 0x8c(r1)
    lfs f0, lbl_80883E44
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x64(r1)
    stfs f3, 0xe0(r1)
    stfs f3, 0xe4(r1)
    stfs f3, 0xe8(r1)
    stfs f0, 0xec(r1)
    stfs f13, 0x8(r1)
    stfs f30, 0xc(r1)
    stfs f29, 0x10(r1)
    stfs f13, 0xb0(r1)
    stfs f30, 0xb4(r1)
    stfs f29, 0xb8(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xc0(r1)
    stfs f11, 0xc4(r1)
    stfs f12, 0xc8(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0xd0(r1)
    stfs f8, 0xd4(r1)
    stfs f9, 0xd8(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xbc(r1)
    stfs f5, 0xcc(r1)
    stfs f6, 0xdc(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80883E90
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802A711C_0000195C
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80883E40
    fcmpo cr0, f3, f0
    ble lbl_fn_802A711C_0000194C
    lfs f0, lbl_80883E94
    b lbl_fn_802A711C_00001950
lbl_fn_802A711C_0000194C:
    lfs f0, lbl_80883E98
lbl_fn_802A711C_00001950:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_802A711C_00001970
lbl_fn_802A711C_0000195C:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_802A711C_00001970:
    lfs f2, lbl_80883E40
    addi r3, r1, 0x44
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x74
    stfs f2, 0x4c(r1)
    stfs f2, 0x64(r1)
    frsp f2, f2
    psq_st f1, 0x0(r29), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x7c(r1)
lbl_fn_802A711C_00001998:
    lfs f29, lbl_80883E38
    b lbl_fn_802A711C_000019B0
lbl_fn_802A711C_000019A0:
    cmpwi r0, 0x6
    bne lbl_fn_802A711C_000019B0
    bl fn_8013A258
    b lbl_fn_802A711C_00001A54
lbl_fn_802A711C_000019B0:
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
    lwz r3, lbl_8087EE98
    bl fn_8004D124
    lfs f0, 0x568(r31)
    fmr f1, f31
    mr r3, r31
    addi r4, r1, 0x74
    fmuls f2, f0, f29
    li r5, 0x1
    bl fn_8013CB68
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
lbl_fn_802A711C_00001A54:
    lwz r0, 0x134(r1)
    psq_l f31, 0x128(r1), 0, 0
    lfd f31, 0x120(r1)
    psq_l f30, 0x118(r1), 0, 0
    lfd f30, 0x110(r1)
    psq_l f29, 0x108(r1), 0, 0
    lfd f29, 0x100(r1)
    lwz r31, 0xfc(r1)
    lwz r30, 0xf8(r1)
    lwz r29, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}
