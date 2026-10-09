#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_8000D124(void);
extern void fn_8000D3A4(void);
extern void fn_80011034(void);
extern void fn_80013338(void);
extern void fn_80063484(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_800897D8(void);
extern void fn_8008BBD8(void);
extern void fn_8008CD1C(void);
extern void fn_80091CFC(void);
extern void fn_80092814(void);
extern void fn_80094958(void);
extern void fn_80094B6C(void);
extern void fn_800CB6E4(void);
extern void fn_800D246C(void);
extern void fn_800F29D0(void);
extern void fn_800F7FA0(void);
extern void fn_800F7FA8(void);
extern void fn_800F7FD8(void);
extern void fn_800F80A8(void);
extern void fn_800F80B8(void);
extern void fn_800F8290(void);
extern void fn_80127D8C(void);
extern void fn_80129978(void);
extern void fn_8013655C(void);
extern void fn_80145334(void);
extern void fn_80149A30(void);
extern void fn_8014C540(void);
extern void fn_801A03E8(void);
extern void fn_80232B7C(void);
extern void fn_80239D58(void);
extern void fn_80239DAC(void);
extern void fn_8023A680(void);
extern void fn_8031FAA4(void);
extern void fn_8031FE4C(void);
extern void fn_8035B694(void);
extern void fn_8035B78C(void);
extern void fn_80370AE4(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F90D0(void);
extern void fn_805F9160(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9940(void);
extern void fn_80680770(void);
extern void fn_80682428(void);
extern void fn_80686EA4(void);
extern void fn_8068AD58(void);
extern void fn_8068AEA4(void);
extern void fn_80695B00(void);

/* External data declarations */
extern u8 lbl_8074973C[];
extern u8 lbl_807498B0[];
extern u8 lbl_807498B8[];
extern u8 lbl_80749A70[];
extern u8 lbl_80775A88[];
extern u8 lbl_807889D8[];
extern u8 lbl_807889E4[];
extern u8 lbl_80788A00[];
extern u8 lbl_80788A08[];
extern u8 lbl_80788A10[];
extern u8 lbl_807C7030[];
extern u8 lbl_807C8428[];
extern u8 lbl_807C8430[];

/* Small data declarations */
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EF10;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F3F8;
extern u32 lbl_8087F3F9;
extern u32 lbl_8087F430;
extern u32 lbl_8087F8A0;
extern u32 lbl_80884DF0;
extern u32 lbl_80884DFC;
extern u32 lbl_80884E04;
extern u32 lbl_80884E10;
extern u32 lbl_80884E14;
extern u32 lbl_80884E18;
extern u32 lbl_80884E1C;
extern u32 lbl_80884E3C;
extern u32 lbl_80884E40;
extern u32 lbl_80884E48;
extern u32 lbl_80884E4C;
extern u32 lbl_80884E50;
extern u32 lbl_80884E54;
extern u32 lbl_80884E58;
extern u32 lbl_80884E5C;
extern u32 lbl_80884E60;
extern u32 lbl_80884E64;
extern u32 lbl_80884E68;
extern u32 lbl_80884E6C;
extern u32 lbl_80884E70;
extern u32 lbl_80884E74;
extern u32 lbl_80884E78;
extern u32 lbl_80884E7C;
extern u32 lbl_80884E80;
extern u32 lbl_80884E84;
extern u32 lbl_80884E88;
extern u32 lbl_80884E8C;
extern u32 lbl_80884E90;
extern u32 lbl_80884E94;
extern u32 lbl_80884E98;

/* Function declarations */
void fn_8031E060(void);
void fn_8031E078(void);
void fn_8031E8BC(void);
void fn_8031EB3C(void);
void fn_8031EC5C(void);
void fn_8031ECDC(void);
void fn_8031F2A4(void);
void fn_8031F48C(void);
void fn_8031F4B8(void);
void fn_8031F570(void);
void fn_8031F59C(void);
void fn_8031F654(void);
void fn_8031F810(void);

asm void fn_8031E060(void)
{
    nofralloc
    lwz r4, 0x4(r3)
    lwz r3, 0x0(r3)
    subi r0, r4, 0x1
    slwi r0, r0, 2
    add r3, r3, r0
    blr
}

asm void fn_8031E078(void)
{
    nofralloc
    stwu r1, -0x3a0(r1)
    mflr r0
    stw r0, 0x3a4(r1)
    addi r11, r1, 0x340
    stfd f31, 0x390(r1)
    psq_st f31, 0x398(r1), 0, 0
    stfd f30, 0x380(r1)
    psq_st f30, 0x388(r1), 0, 0
    stfd f29, 0x370(r1)
    psq_st f29, 0x378(r1), 0, 0
    stfd f28, 0x360(r1)
    psq_st f28, 0x368(r1), 0, 0
    stfd f27, 0x350(r1)
    psq_st f27, 0x358(r1), 0, 0
    stfd f26, 0x340(r1)
    psq_st f26, 0x348(r1), 0, 0
    bl _savegpr_27
    lis r5, lbl_8074973C@ha
    mr r29, r3
    addi r5, r5, lbl_8074973C@l
    mr r27, r4
    addi r5, r5, 0xe0
    li r3, 0x50
    mr r6, r5
    li r4, 0x1
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    lfs f2, 0x18(r29)
    addi r5, r1, 0x84
    psq_l f1, 0x10(r29), 0, 0
    addi r4, r3, 0x3c
    psq_st f1, 0x30(r3), 0, 0
    lfs f9, 0x4(r27)
    stfs f2, 0x38(r3)
    mr r3, r4
    lfs f7, 0x0(r27)
    lfs f8, 0x14(r29)
    lfs f0, 0x10(r29)
    fsubs f9, f9, f8
    lfs f8, 0x8(r27)
    fsubs f7, f7, f0
    lfs f0, 0x18(r29)
    stfs f9, 0x88(r1)
    fsubs f2, f8, f0
    stfs f7, 0x84(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x8c(r1)
    stfs f2, 0x8(r4)
    bl fn_805F9940
    frsp f7, f1
    lfs f0, lbl_80884E10
    stfs f1, 0x48(r30)
    fabs f7, f7
    frsp f7, f7
    fcmpo cr0, f7, f0
    blt lbl_fn_8031E078_00000110
    addi r3, r30, 0x3c
    mr r4, r3
    bl fn_805F98D0
lbl_fn_8031E078_00000110:
    li r0, 0x1e
    stw r0, 0x4c(r30)
    lfs f1, 0x0(r27)
    addi r3, r1, 0x2f8
    lfs f2, 0x4(r27)
    lfs f3, 0x8(r27)
    bl fn_805F90D0
    addi r3, r1, 0x2f8
    lfs f0, lbl_80884E10
    psq_l f2, 0x8(r3), 0, 0
    addi r31, r1, 0x78
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
    lfs f2, 0x44(r30)
    psq_l f1, 0x3c(r30), 0, 0
    fabs f7, f2
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x80(r1)
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_8031E078_000001AC
    lfs f7, 0x78(r1)
    lfs f0, lbl_80884DF0
    fcmpo cr0, f7, f0
    ble lbl_fn_8031E078_000001A0
    lfs f0, lbl_80884E14
    b lbl_fn_8031E078_000001A4
lbl_fn_8031E078_000001A0:
    lfs f0, lbl_80884E18
lbl_fn_8031E078_000001A4:
    stfs f0, 0x70(r1)
    b lbl_fn_8031E078_000001C0
lbl_fn_8031E078_000001AC:
    frsp f2, f2
    lfs f1, 0x78(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x70(r1)
lbl_fn_8031E078_000001C0:
    lfs f0, 0x70(r1)
    addi r3, r1, 0x288
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f7, lbl_80884DF0
    addi r4, r1, 0x60
    lfs f26, 0x290(r1)
    mr r5, r4
    lfs f27, 0x28c(r1)
    addi r3, r1, 0x2b8
    lfs f28, 0x288(r1)
    lfs f29, 0x2a0(r1)
    lfs f30, 0x29c(r1)
    lfs f31, 0x298(r1)
    lfs f13, 0x2b0(r1)
    lfs f12, 0x2ac(r1)
    lfs f11, 0x2a8(r1)
    lfs f10, 0x2b4(r1)
    lfs f9, 0x2a4(r1)
    lfs f8, 0x294(r1)
    lfs f0, lbl_80884E04
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x80(r1)
    stfs f7, 0x2e8(r1)
    stfs f7, 0x2ec(r1)
    stfs f7, 0x2f0(r1)
    stfs f0, 0x2f4(r1)
    stfs f28, 0x30(r1)
    stfs f27, 0x34(r1)
    stfs f26, 0x38(r1)
    stfs f28, 0x2b8(r1)
    stfs f27, 0x2bc(r1)
    stfs f26, 0x2c0(r1)
    stfs f31, 0x3c(r1)
    stfs f30, 0x40(r1)
    stfs f29, 0x44(r1)
    stfs f31, 0x2c8(r1)
    stfs f30, 0x2cc(r1)
    stfs f29, 0x2d0(r1)
    stfs f11, 0x48(r1)
    stfs f12, 0x4c(r1)
    stfs f13, 0x50(r1)
    stfs f11, 0x2d8(r1)
    stfs f12, 0x2dc(r1)
    stfs f13, 0x2e0(r1)
    stfs f8, 0x54(r1)
    stfs f9, 0x58(r1)
    stfs f10, 0x5c(r1)
    stfs f8, 0x2c4(r1)
    stfs f9, 0x2d4(r1)
    stfs f10, 0x2e4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x68(r1)
    bl fn_805F9750
    lfs f2, 0x68(r1)
    lfs f0, lbl_80884E10
    fabs f7, f2
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_8031E078_000002DC
    lfs f7, 0x64(r1)
    lfs f0, lbl_80884DF0
    fcmpo cr0, f7, f0
    ble lbl_fn_8031E078_000002CC
    lfs f0, lbl_80884E14
    b lbl_fn_8031E078_000002D0
lbl_fn_8031E078_000002CC:
    lfs f0, lbl_80884E18
lbl_fn_8031E078_000002D0:
    fneg f0, f0
    stfs f0, 0x6c(r1)
    b lbl_fn_8031E078_000002F0
lbl_fn_8031E078_000002DC:
    lfs f1, 0x64(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x6c(r1)
lbl_fn_8031E078_000002F0:
    lfs f2, lbl_80884DF0
    addi r3, r1, 0x6c
    lfs f7, lbl_80884E04
    addi r28, r1, 0x138
    frsp f0, f2
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x74(r1)
    fcmpu cr0, f2, f0
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x80(r1)
    stfs f2, 0x164(r1)
    stfs f2, 0x15c(r1)
    stfs f2, 0x158(r1)
    stfs f2, 0x154(r1)
    stfs f2, 0x150(r1)
    stfs f2, 0x148(r1)
    stfs f2, 0x144(r1)
    stfs f2, 0x140(r1)
    stfs f2, 0x13c(r1)
    stfs f7, 0x160(r1)
    stfs f7, 0x14c(r1)
    stfs f7, 0x138(r1)
    beq lbl_fn_8031E078_000003A0
    fmr f1, f0
    addi r3, r1, 0x228
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r28
    addi r4, r1, 0x228
    addi r5, r1, 0x258
    bl fn_805F89F0
    addi r3, r1, 0x258
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
lbl_fn_8031E078_000003A0:
    lfs f0, lbl_80884DF0
    lfs f1, 0x7c(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_8031E078_00000400
    addi r3, r1, 0x1c8
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r28
    addi r4, r1, 0x1c8
    addi r5, r1, 0x1f8
    bl fn_805F89F0
    addi r3, r1, 0x1f8
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
lbl_fn_8031E078_00000400:
    lfs f0, lbl_80884DF0
    lfs f1, 0x78(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_8031E078_00000460
    addi r3, r1, 0x168
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r28
    addi r4, r1, 0x168
    addi r5, r1, 0x198
    bl fn_805F89F0
    addi r3, r1, 0x198
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
lbl_fn_8031E078_00000460:
    mr r3, r30
    mr r4, r28
    addi r5, r1, 0x108
    bl fn_805F89F0
    addi r4, r1, 0x108
    lfs f8, lbl_80884E04
    psq_l f2, 0x8(r4), 0, 0
    addi r3, r1, 0xa8
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    fmr f1, f8
    lfs f0, lbl_80884E1C
    psq_st f2, 0x8(r30), 0, 0
    fmr f2, f1
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
    lfs f7, 0x48(r30)
    stfs f8, 0x24(r1)
    fdivs f3, f7, f0
    stfs f8, 0x28(r1)
    stfs f3, 0x2c(r1)
    bl fn_805F9160
    mr r3, r30
    addi r4, r1, 0xa8
    addi r5, r1, 0xd8
    bl fn_805F89F0
    addi r3, r1, 0xd8
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
    lwz r3, 0x2c(r29)
    lwz r4, 0x30(r29)
    cmplw r3, r4
    bge lbl_fn_8031E078_00000540
    addi r3, r3, 0x1
    stw r3, 0x2c(r29)
    subi r0, r3, 0x1
    lwz r3, 0x28(r29)
    slwi r0, r0, 2
    stwx r30, r3, r0
    b lbl_fn_8031E078_000007BC
lbl_fn_8031E078_00000540:
    lis r3, 0x4000
    subi r0, r3, 0x1
    subf r0, r4, r0
    cmplwi r0, 0x1
    bge lbl_fn_8031E078_00000578
    lis r4, lbl_8074973C@ha
    lis r3, __files@ha
    addi r4, r4, lbl_8074973C@l
    addi r3, r3, __files@l
    addi r4, r4, 0xe1
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8031E078_00000578:
    li r5, 0x0
    addi r4, r29, 0x30
    lis r3, 0x4000
    stw r5, 0x90(r1)
    subi r0, r3, 0x1
    stw r5, 0x94(r1)
    stw r5, 0x98(r1)
    stw r4, 0x9c(r1)
    stw r5, 0xa0(r1)
    lwz r3, 0x2c(r29)
    lwz r31, 0x30(r29)
    addi r3, r3, 0x1
    subf r3, r31, r3
    subf r0, r31, r0
    cmplw r3, r0
    stw r3, 0x18(r1)
    ble lbl_fn_8031E078_000005E0
    lis r4, lbl_8074973C@ha
    lis r3, __files@ha
    addi r4, r4, lbl_8074973C@l
    addi r3, r3, __files@l
    addi r4, r4, 0xe1
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8031E078_000005E0:
    lis r3, 0x1555
    addi r0, r3, 0x5555
    cmplw r31, r0
    bge lbl_fn_8031E078_00000630
    addi r5, r31, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x18(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x20
    srwi r4, r4, 2
    stw r4, 0x20(r1)
    cmplw r4, r0
    bge lbl_fn_8031E078_00000624
    addi r3, r1, 0x18
lbl_fn_8031E078_00000624:
    lwz r0, 0x0(r3)
    add r31, r31, r0
    b lbl_fn_8031E078_00000674
lbl_fn_8031E078_00000630:
    lis r3, 0x2aab
    subi r0, r3, 0x5556
    cmplw r31, r0
    bge lbl_fn_8031E078_0000066C
    addi r3, r31, 0x1
    lwz r0, 0x18(r1)
    srwi r3, r3, 1
    stw r3, 0x1c(r1)
    cmplw r3, r0
    addi r3, r1, 0x1c
    bge lbl_fn_8031E078_00000660
    addi r3, r1, 0x18
lbl_fn_8031E078_00000660:
    lwz r0, 0x0(r3)
    add r31, r31, r0
    b lbl_fn_8031E078_00000674
lbl_fn_8031E078_0000066C:
    lis r3, 0x4000
    subi r31, r3, 0x1
lbl_fn_8031E078_00000674:
    lis r3, 0x4000
    subi r0, r3, 0x1
    cmplw r31, r0
    ble lbl_fn_8031E078_000006A8
    lis r4, lbl_8074973C@ha
    lis r3, __files@ha
    addi r4, r4, lbl_8074973C@l
    addi r3, r3, __files@l
    addi r4, r4, 0xe1
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8031E078_000006A8:
    slwi r3, r31, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r28, r3
    bne lbl_fn_8031E078_000006DC
    lis r3, __files@ha
    lis r4, lbl_80775A88@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8031E078_000006DC:
    lwz r0, 0x94(r1)
    stw r28, 0x90(r1)
    slwi r3, r0, 2
    stw r31, 0x98(r1)
    lwz r0, 0x2c(r29)
    stw r0, 0xa0(r1)
    slwi r0, r0, 2
    add r0, r28, r0
    stwx r30, r3, r0
    lwz r3, 0x94(r1)
    lwz r0, 0xa0(r1)
    addi r3, r3, 0x1
    stw r3, 0x94(r1)
    lwz r3, 0x90(r1)
    lwz r4, 0x2c(r29)
    lwz r31, 0x28(r29)
    slwi r4, r4, 2
    add r5, r31, r4
    subf r5, r31, r5
    mr r4, r31
    srawi r5, r5, 2
    addze r28, r5
    subf r0, r28, r0
    stw r0, 0xa0(r1)
    slwi r27, r28, 2
    slwi r0, r0, 2
    mr r5, r27
    add r3, r3, r0
    bl memcpy
    mr r3, r31
    mr r5, r27
    li r4, 0x0
    bl memset
    lwz r0, 0x94(r1)
    li r4, 0x0
    addic. r3, r1, 0x90
    add r0, r0, r28
    stw r0, 0x94(r1)
    stw r4, 0x2c(r29)
    lwz r3, 0x30(r29)
    lwz r0, 0x98(r1)
    stw r0, 0x30(r29)
    stw r3, 0x98(r1)
    lwz r0, 0x90(r1)
    lwz r3, 0x28(r29)
    stw r0, 0x28(r29)
    stw r3, 0x90(r1)
    lwz r0, 0x94(r1)
    stw r0, 0x2c(r29)
    stw r4, 0x94(r1)
    beq lbl_fn_8031E078_000007BC
    lwz r3, 0x90(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8031E078_000007BC
    stw r4, 0x94(r1)
    bl dtor_80084684
lbl_fn_8031E078_000007BC:
    lwz r0, 0x8(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8031E078_00000814
    mr r3, r30
    li r4, 0x0
    bl fn_80232B7C
    li r0, 0x0
    stw r0, 0x8(r1)
    li r3, -0x1
    lfs f1, lbl_80884E04
    stw r3, 0xc(r1)
    li r0, 0x1
    mr r7, r30
    li r5, -0x1
    stw r0, 0x10(r1)
    li r6, 0x5
    li r8, 0x0
    li r9, 0x0
    lwz r3, lbl_8087F3C0
    li r10, 0x0
    lwz r4, 0x8(r29)
    bl fn_8023A680
lbl_fn_8031E078_00000814:
    addi r11, r1, 0x340
    psq_l f31, 0x398(r1), 0, 0
    lfd f31, 0x390(r1)
    psq_l f30, 0x388(r1), 0, 0
    lfd f30, 0x380(r1)
    psq_l f29, 0x378(r1), 0, 0
    lfd f29, 0x370(r1)
    psq_l f28, 0x368(r1), 0, 0
    lfd f28, 0x360(r1)
    psq_l f27, 0x358(r1), 0, 0
    lfd f27, 0x350(r1)
    psq_l f26, 0x348(r1), 0, 0
    lfd f26, 0x340(r1)
    bl _restgpr_27
    lwz r0, 0x3a4(r1)
    mtlr r0
    addi r1, r1, 0x3a0
    blr
}

asm void fn_8031E8BC(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    addi r11, r1, 0xa0
    stfd f31, 0xa0(r1)
    psq_st f31, 0xa8(r1), 0, 0
    bl _savegpr_27
    lwz r0, 0x4(r3)
    mr r29, r3
    mr r30, r4
    mr r31, r5
    cmpwi r0, 0x0
    bne lbl_fn_8031E8BC_000008C0
    bl fn_800F7FA0
    mr r4, r29
    li r5, 0x0
    bl fn_80239D58
    cmpwi r3, 0x0
    beq lbl_fn_8031E8BC_00000ABC
    bl fn_800F7FA0
    mr r4, r29
    li r5, 0x0
    li r6, 0x0
    bl fn_80239DAC
    b lbl_fn_8031E8BC_00000ABC
lbl_fn_8031E8BC_000008C0:
    bl fn_800F7FA0
    mr r4, r29
    li r5, 0x0
    bl fn_80239D58
    cmpwi r3, 0x0
    bne lbl_fn_8031E8BC_00000928
    bl fn_800F7FA0
    mr r4, r29
    li r5, 0x0
    bl fn_800F7FA8
    bl fn_800F7FA0
    li r0, 0x0
    stw r0, 0x8(r1)
    li r4, -0x1
    lfs f1, lbl_80884E04
    stw r4, 0xc(r1)
    li r0, 0x1
    addi r7, r29, 0x10
    li r5, -0x1
    stw r0, 0x10(r1)
    li r6, 0x6
    li r8, 0x0
    li r9, 0x0
    lwz r4, 0xc(r29)
    li r10, 0x0
    bl fn_8023A680
lbl_fn_8031E8BC_00000928:
    lwz r5, 0x34(r29)
    mr r4, r30
    addi r3, r1, 0x48
    addi r5, r5, 0x30
    bl fn_80013338
    addi r3, r1, 0x48
    bl fn_8000D3A4
    lfs f0, lbl_80884E3C
    fmr f31, f1
    fcmpo cr0, f1, f0
    blt lbl_fn_8031E8BC_00000ABC
    addi r3, r1, 0x3c
    addi r4, r1, 0x48
    li r27, 0x0
    bl fn_800F7FD8
    mr r4, r31
    addi r3, r1, 0x3c
    bl fn_801A03E8
    lfs f0, lbl_80884E3C
    fcmpo cr0, f1, f0
    ble lbl_fn_8031E8BC_00000980
    li r27, 0x1
lbl_fn_8031E8BC_00000980:
    lwz r28, 0x34(r29)
    lfs f0, lbl_80884DF0
    lfs f1, 0x48(r28)
    fcmpo cr0, f1, f0
    ble lbl_fn_8031E8BC_000009BC
    addi r3, r1, 0x30
    addi r4, r1, 0x48
    bl fn_800F7FD8
    addi r3, r1, 0x30
    addi r4, r28, 0x3c
    bl fn_801A03E8
    lfs f0, lbl_80884DFC
    fcmpo cr0, f1, f0
    bge lbl_fn_8031E8BC_000009BC
    li r27, 0x1
lbl_fn_8031E8BC_000009BC:
    lwz r3, 0x34(r29)
    lfs f0, lbl_80884E40
    lfs f1, 0x48(r3)
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_8031E8BC_000009D8
    li r27, 0x1
lbl_fn_8031E8BC_000009D8:
    cmpwi r27, 0x0
    bne lbl_fn_8031E8BC_00000A7C
    lfs f1, 0x48(r3)
    lfs f0, lbl_80884DF0
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_8031E8BC_00000A10
    addi r3, r1, 0x24
    addi r4, r1, 0x48
    bl fn_800F7FD8
    lwz r3, 0x34(r29)
    addi r4, r1, 0x24
    addi r3, r3, 0x3c
    bl fn_8000D124
lbl_fn_8031E8BC_00000A10:
    lwz r4, 0x34(r29)
    addi r3, r1, 0x58
    stfs f31, 0x48(r4)
    lwz r4, 0x34(r29)
    addi r4, r4, 0x30
    bl fn_800F80A8
    lwz r3, 0x34(r29)
    addi r4, r1, 0x58
    bl fn_8008CD1C
    lwz r4, 0x34(r29)
    addi r3, r1, 0x18
    addi r4, r4, 0x3c
    bl fn_80011034
    lwz r3, 0x34(r29)
    addi r4, r1, 0x18
    bl fn_800F80B8
    lwz r3, 0x34(r29)
    lfs f1, lbl_80884E04
    lfs f3, 0x48(r3)
    lfs f0, lbl_80884E1C
    fmr f2, f1
    fdivs f3, f3, f0
    bl fn_800F8290
    lwz r3, 0x34(r29)
    li r0, 0x1e
    stw r0, 0x4c(r3)
    b lbl_fn_8031E8BC_00000A98
lbl_fn_8031E8BC_00000A7C:
    mr r3, r29
    mr r4, r30
    bl fn_8031E078
    addi r3, r29, 0x28
    bl fn_8031E060
    lwz r0, 0x0(r3)
    stw r0, 0x34(r29)
lbl_fn_8031E8BC_00000A98:
    mr r4, r30
    addi r3, r29, 0x38
    bl fn_800CB6E4
    mr r4, r30
    addi r3, r29, 0x10
    bl fn_8000D124
    mr r4, r31
    addi r3, r29, 0x1c
    bl fn_8000D124
lbl_fn_8031E8BC_00000ABC:
    addi r11, r1, 0xa0
    psq_l f31, 0xa8(r1), 0, 0
    lfd f31, 0xa0(r1)
    bl _restgpr_27
    lwz r0, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_8031EB3C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lwz r5, 0x20(r5)
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_8035B694
    lwz r7, 0x12a4(r30)
    li r12, 0x0
    lfs f7, lbl_80884E48
    lis r31, lbl_80788A10@ha
    lfs f5, lbl_80884E50
    li r9, 0x32
    lwz r3, 0x958(r30)
    addi r31, r31, lbl_80788A10@l
    lwz r0, 0x14a8(r30)
    oris r7, r7, 0x40
    ori r6, r3, 0x10
    lfs f6, lbl_80884E4C
    lfs f4, lbl_80884E54
    oris r0, r0, 0x8000
    lfs f3, lbl_80884E58
    li r11, 0x270f
    lfs f2, lbl_80884E5C
    li r10, 0x1
    lfs f1, lbl_80884E60
    li r8, 0x3e8
    lfs f0, lbl_80884E64
    li r5, 0x78
    li r4, 0x1e
    stw r31, 0x0(r30)
    mr r3, r30
    stfs f7, 0x14c0(r30)
    stfs f7, 0x14c4(r30)
    stfs f7, 0x14c8(r30)
    stw r12, 0x155c(r30)
    stw r12, 0x1560(r30)
    stw r12, 0x1564(r30)
    stw r11, 0x1568(r30)
    stw r12, 0x156c(r30)
    stw r12, 0x158c(r30)
    stw r12, 0x1590(r30)
    stw r10, 0x1594(r30)
    stfs f6, 0x1598(r30)
    stw r9, 0x159c(r30)
    stw r9, 0x15a0(r30)
    stw r8, 0x15a4(r30)
    stw r7, 0x12a4(r30)
    stw r6, 0x958(r30)
    stfs f7, 0x14f4(r30)
    stfs f7, 0x14f8(r30)
    stfs f5, 0x14fc(r30)
    stfs f7, 0x1500(r30)
    stfs f7, 0x1504(r30)
    stw r5, 0x1508(r30)
    stw r4, 0x150c(r30)
    stw r12, 0x1510(r30)
    stw r12, 0x1514(r30)
    stfs f4, 0x1518(r30)
    stfs f3, 0x151c(r30)
    stfs f2, 0x1520(r30)
    stfs f5, 0x1524(r30)
    stfs f1, 0x1528(r30)
    stfs f0, 0x152c(r30)
    stw r0, 0x14a8(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8031EC5C(void)
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
    beq lbl_fn_8031EC5C_00000C60
    addic. r0, r3, 0x158c
    beq lbl_fn_8031EC5C_00000C44
    lwz r4, 0x158c(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8031EC5C_00000C44
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_8031EC5C_00000C44
    bl fn_800897D8
lbl_fn_8031EC5C_00000C44:
    mr r3, r30
    li r4, 0x0
    bl fn_8035B78C
    cmpwi r31, 0x0
    ble lbl_fn_8031EC5C_00000C60
    mr r3, r30
    bl dtor_80084684
lbl_fn_8031EC5C_00000C60:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8031ECDC(void)
{
    nofralloc
    stwu r1, -0x290(r1)
    mflr r0
    stw r0, 0x294(r1)
    stw r31, 0x28c(r1)
    mr r31, r3
    stw r30, 0x288(r1)
    li r30, 0x1
    bl fn_8013655C
    cmpwi r3, 0x0
    beq lbl_fn_8031ECDC_00000CA8
    li r30, 0x0
lbl_fn_8031ECDC_00000CA8:
    lwz r3, 0x1438(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8031ECDC_00000CC8
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_8031ECDC_00000CC8
    li r30, 0x0
lbl_fn_8031ECDC_00000CC8:
    cmpwi r30, 0x0
    beq lbl_fn_8031ECDC_00001228
    lwz r0, 0x7ec(r31)
    lwz r3, 0x1438(r31)
    ori r0, r0, 0x140
    oris r0, r0, 0x1
    cmpwi r3, 0x0
    ori r0, r0, 0xc219
    oris r0, r0, 0x380
    stw r0, 0x7ec(r31)
    beq lbl_fn_8031ECDC_00000D0C
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x1438(r31)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_8031ECDC_00000D0C:
    lis r4, lbl_80749A70@ha
    addi r3, r31, 0xb0
    addi r4, r4, lbl_80749A70@l
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    blt lbl_fn_8031ECDC_00000D94
    lwz r0, 0x524(r31)
    cmpwi r0, 0x0
    bge lbl_fn_8031ECDC_00000D3C
    li r4, 0x0
    b lbl_fn_8031ECDC_00000D48
lbl_fn_8031ECDC_00000D3C:
    mulli r0, r0, 0x30
    lwz r4, 0xec(r31)
    add r4, r4, r0
lbl_fn_8031ECDC_00000D48:
    lfs f0, 0x2c(r4)
    cmpwi r3, 0x0
    lfs f3, 0x1c(r4)
    lfs f4, 0xc(r4)
    stfs f4, 0x248(r1)
    stfs f3, 0x24c(r1)
    stfs f0, 0x250(r1)
    bge lbl_fn_8031ECDC_00000D70
    li r3, 0x0
    b lbl_fn_8031ECDC_00000D7C
lbl_fn_8031ECDC_00000D70:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r3, r3, r0
lbl_fn_8031ECDC_00000D7C:
    lfs f0, 0x2c(r3)
    lfs f3, 0x1c(r3)
    lfs f4, 0xc(r3)
    stfs f4, 0x23c(r1)
    stfs f3, 0x240(r1)
    stfs f0, 0x244(r1)
lbl_fn_8031ECDC_00000D94:
    lfs f4, lbl_80884E68
    lis r4, lbl_807889D8@ha
    lfs f3, lbl_80884E6C
    li r3, 0x0
    lfs f0, lbl_80884E70
    stfs f4, 0x56c(r31)
    stfs f3, 0x500(r31)
    stfs f0, 0x508(r31)
    lwzu r9, lbl_807889D8@l(r4)
    lbz r0, lbl_8087F3F9
    lwz r8, 0x4(r4)
    lwz r7, 0x8(r4)
    extsb. r0, r0
    stw r9, 0x200(r1)
    stw r8, 0x204(r1)
    stw r7, 0x208(r1)
    stw r9, 0x78(r1)
    stw r8, 0x7c(r1)
    stw r7, 0x80(r1)
    stw r9, 0x38(r1)
    stw r8, 0x3c(r1)
    stw r7, 0x40(r1)
    stw r9, 0x1c8(r1)
    stw r8, 0x1cc(r1)
    stw r7, 0x1d0(r1)
    stw r9, 0x1bc(r1)
    stw r8, 0x1c0(r1)
    stw r7, 0x1c4(r1)
    stw r9, 0x1b0(r1)
    stw r8, 0x1b4(r1)
    stw r7, 0x1b8(r1)
    stw r9, 0x210(r1)
    stw r8, 0x214(r1)
    stw r7, 0x218(r1)
    stw r31, 0x21c(r1)
    stw r9, 0x28(r1)
    stw r8, 0x2c(r1)
    stw r7, 0x30(r1)
    stw r31, 0x34(r1)
    stw r9, 0x220(r1)
    stw r8, 0x224(r1)
    stw r7, 0x228(r1)
    stw r31, 0x22c(r1)
    stw r9, 0x68(r1)
    stw r8, 0x6c(r1)
    stw r7, 0x70(r1)
    stw r31, 0x74(r1)
    stw r9, 0x130(r1)
    stw r8, 0x134(r1)
    stw r7, 0x138(r1)
    stw r31, 0x13c(r1)
    stw r3, 0x268(r1)
    stw r9, 0x1a0(r1)
    stw r8, 0x1a4(r1)
    stw r7, 0x1a8(r1)
    stw r31, 0x1ac(r1)
    bne lbl_fn_8031ECDC_00000ED0
    lis r6, lbl_807C8430@ha
    lis r4, fn_8031F570@ha
    lis r3, fn_8031F59C@ha
    li r0, 0x1
    addi r3, r3, fn_8031F59C@l
    addi r5, r6, lbl_807C8430@l
    addi r4, r4, fn_8031F570@l
    stw r9, 0x140(r1)
    stw r8, 0x144(r1)
    stw r7, 0x148(r1)
    stw r31, 0x14c(r1)
    stw r9, 0x170(r1)
    stw r8, 0x174(r1)
    stw r7, 0x178(r1)
    stw r31, 0x17c(r1)
    stw r9, 0x160(r1)
    stw r8, 0x164(r1)
    stw r7, 0x168(r1)
    stw r31, 0x16c(r1)
    stw r4, 0x4(r5)
    stw r3, lbl_807C8430@l(r6)
    stb r0, lbl_8087F3F9
lbl_fn_8031ECDC_00000ED0:
    lwz r6, 0x68(r1)
    addi r3, r1, 0x190
    lwz r5, 0x6c(r1)
    lwz r4, 0x70(r1)
    lwz r0, 0x74(r1)
    stw r6, 0x150(r1)
    stw r5, 0x154(r1)
    stw r4, 0x158(r1)
    stw r0, 0x15c(r1)
    stw r6, 0x190(r1)
    stw r5, 0x194(r1)
    stw r4, 0x198(r1)
    stw r0, 0x19c(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_8031ECDC_00000F54
    addic. r0, r1, 0x26c
    lwz r5, 0x190(r1)
    lwz r4, 0x194(r1)
    lwz r3, 0x198(r1)
    lwz r0, 0x19c(r1)
    stw r5, 0x180(r1)
    stw r4, 0x184(r1)
    stw r3, 0x188(r1)
    stw r0, 0x18c(r1)
    beq lbl_fn_8031ECDC_00000F4C
    stw r5, 0x26c(r1)
    stw r4, 0x270(r1)
    stw r3, 0x274(r1)
    stw r0, 0x278(r1)
lbl_fn_8031ECDC_00000F4C:
    li r0, 0x1
    b lbl_fn_8031ECDC_00000F58
lbl_fn_8031ECDC_00000F54:
    li r0, 0x0
lbl_fn_8031ECDC_00000F58:
    cmpwi r0, 0x0
    beq lbl_fn_8031ECDC_00000F70
    lis r3, lbl_807C8430@ha
    addi r3, r3, lbl_807C8430@l
    stw r3, 0x268(r1)
    b lbl_fn_8031ECDC_00000F78
lbl_fn_8031ECDC_00000F70:
    li r0, 0x0
    stw r0, 0x268(r1)
lbl_fn_8031ECDC_00000F78:
    addi r3, r31, 0xb0
    addi r4, r1, 0x268
    bl fn_800F29D0
    addic. r3, r1, 0x268
    beq lbl_fn_8031ECDC_00000FC0
    lwz r4, 0x268(r1)
    cmpwi r4, 0x0
    beq lbl_fn_8031ECDC_00000FC0
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_8031ECDC_00000FB8
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8031ECDC_00000FB8:
    li r0, 0x0
    stw r0, 0x268(r1)
lbl_fn_8031ECDC_00000FC0:
    lis r30, lbl_80749A70@ha
    addi r3, r31, 0xb0
    addi r30, r30, lbl_80749A70@l
    addi r4, r30, 0x9
    bl fn_80091CFC
    addi r3, r31, 0xb0
    addi r4, r30, 0xe
    bl fn_80091CFC
    lbz r0, lbl_8087F3F8
    lis r4, lbl_807889E4@ha
    lwzu r9, lbl_807889E4@l(r4)
    li r3, 0x0
    extsb. r0, r0
    stw r9, 0x1d4(r1)
    lwz r8, 0x4(r4)
    lwz r7, 0x8(r4)
    stw r8, 0x1d8(r1)
    stw r7, 0x1dc(r1)
    stw r9, 0x58(r1)
    stw r8, 0x5c(r1)
    stw r7, 0x60(r1)
    stw r9, 0x18(r1)
    stw r8, 0x1c(r1)
    stw r7, 0x20(r1)
    stw r9, 0x120(r1)
    stw r8, 0x124(r1)
    stw r7, 0x128(r1)
    stw r9, 0x114(r1)
    stw r8, 0x118(r1)
    stw r7, 0x11c(r1)
    stw r9, 0x108(r1)
    stw r8, 0x10c(r1)
    stw r7, 0x110(r1)
    stw r9, 0x1e0(r1)
    stw r8, 0x1e4(r1)
    stw r7, 0x1e8(r1)
    stw r31, 0x1ec(r1)
    stw r9, 0x8(r1)
    stw r8, 0xc(r1)
    stw r7, 0x10(r1)
    stw r31, 0x14(r1)
    stw r9, 0x1f0(r1)
    stw r8, 0x1f4(r1)
    stw r7, 0x1f8(r1)
    stw r31, 0x1fc(r1)
    stw r9, 0x48(r1)
    stw r8, 0x4c(r1)
    stw r7, 0x50(r1)
    stw r31, 0x54(r1)
    stw r9, 0x88(r1)
    stw r8, 0x8c(r1)
    stw r7, 0x90(r1)
    stw r31, 0x94(r1)
    stw r3, 0x254(r1)
    stw r9, 0xf8(r1)
    stw r8, 0xfc(r1)
    stw r7, 0x100(r1)
    stw r31, 0x104(r1)
    bne lbl_fn_8031ECDC_00001104
    lis r6, lbl_807C8428@ha
    lis r4, fn_8031F48C@ha
    lis r3, fn_8031F4B8@ha
    li r0, 0x1
    addi r3, r3, fn_8031F4B8@l
    addi r5, r6, lbl_807C8428@l
    addi r4, r4, fn_8031F48C@l
    stw r9, 0x98(r1)
    stw r8, 0x9c(r1)
    stw r7, 0xa0(r1)
    stw r31, 0xa4(r1)
    stw r9, 0xc8(r1)
    stw r8, 0xcc(r1)
    stw r7, 0xd0(r1)
    stw r31, 0xd4(r1)
    stw r9, 0xb8(r1)
    stw r8, 0xbc(r1)
    stw r7, 0xc0(r1)
    stw r31, 0xc4(r1)
    stw r4, 0x4(r5)
    stw r3, lbl_807C8428@l(r6)
    stb r0, lbl_8087F3F8
lbl_fn_8031ECDC_00001104:
    lwz r6, 0x48(r1)
    addi r3, r1, 0xe8
    lwz r5, 0x4c(r1)
    lwz r4, 0x50(r1)
    lwz r0, 0x54(r1)
    stw r6, 0xa8(r1)
    stw r5, 0xac(r1)
    stw r4, 0xb0(r1)
    stw r0, 0xb4(r1)
    stw r6, 0xe8(r1)
    stw r5, 0xec(r1)
    stw r4, 0xf0(r1)
    stw r0, 0xf4(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_8031ECDC_00001188
    addic. r0, r1, 0x258
    lwz r5, 0xe8(r1)
    lwz r4, 0xec(r1)
    lwz r3, 0xf0(r1)
    lwz r0, 0xf4(r1)
    stw r5, 0xd8(r1)
    stw r4, 0xdc(r1)
    stw r3, 0xe0(r1)
    stw r0, 0xe4(r1)
    beq lbl_fn_8031ECDC_00001180
    stw r5, 0x258(r1)
    stw r4, 0x25c(r1)
    stw r3, 0x260(r1)
    stw r0, 0x264(r1)
lbl_fn_8031ECDC_00001180:
    li r0, 0x1
    b lbl_fn_8031ECDC_0000118C
lbl_fn_8031ECDC_00001188:
    li r0, 0x0
lbl_fn_8031ECDC_0000118C:
    cmpwi r0, 0x0
    beq lbl_fn_8031ECDC_000011A4
    lis r3, lbl_807C8428@ha
    addi r3, r3, lbl_807C8428@l
    stw r3, 0x254(r1)
    b lbl_fn_8031ECDC_000011AC
lbl_fn_8031ECDC_000011A4:
    li r0, 0x0
    stw r0, 0x254(r1)
lbl_fn_8031ECDC_000011AC:
    addi r3, r31, 0xb0
    addi r4, r1, 0x254
    bl fn_8031F2A4
    addic. r3, r1, 0x254
    beq lbl_fn_8031ECDC_000011F4
    lwz r4, 0x254(r1)
    cmpwi r4, 0x0
    beq lbl_fn_8031ECDC_000011F4
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_8031ECDC_000011EC
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8031ECDC_000011EC:
    li r0, 0x0
    stw r0, 0x254(r1)
lbl_fn_8031ECDC_000011F4:
    lfs f3, lbl_80884E74
    addi r4, r1, 0x230
    lfs f0, lbl_80884E78
    addi r5, r31, 0x10fc
    stfs f3, 0x230(r1)
    li r3, 0x1
    lfs f2, lbl_80884E48
    stfs f0, 0x234(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0x238(r1)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x1104(r31)
    b lbl_fn_8031ECDC_0000122C
lbl_fn_8031ECDC_00001228:
    li r3, 0x0
lbl_fn_8031ECDC_0000122C:
    lwz r0, 0x294(r1)
    lwz r31, 0x28c(r1)
    lwz r30, 0x288(r1)
    mtlr r0
    addi r1, r1, 0x290
    blr
}

asm void fn_8031F2A4(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    li r0, 0x0
    stw r31, 0x3c(r1)
    mr r31, r3
    stw r0, 0x8(r1)
    lwz r6, 0x0(r4)
    cmpwi r6, 0x0
    beq lbl_fn_8031F2A4_00001288
    stw r6, 0x8(r1)
    addi r3, r4, 0x4
    addi r4, r1, 0xc
    li r5, 0x0
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_8031F2A4_00001288:
    addi r3, r31, 0x35c
    addi r0, r1, 0x8
    cmplw r3, r0
    beq lbl_fn_8031F2A4_000013DC
    lwz r3, 0x8(r1)
    li r0, 0x0
    stw r0, 0x1c(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8031F2A4_000012CC
    lwz r6, 0x8(r1)
    addi r3, r1, 0xc
    stw r6, 0x1c(r1)
    addi r4, r1, 0x20
    li r5, 0x0
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_8031F2A4_000012CC:
    addi r3, r31, 0x35c
    addi r0, r1, 0x8
    cmplw r3, r0
    beq lbl_fn_8031F2A4_00001338
    lwz r3, 0x8(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8031F2A4_00001310
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_8031F2A4_00001308
    addi r3, r1, 0xc
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8031F2A4_00001308:
    li r0, 0x0
    stw r0, 0x8(r1)
lbl_fn_8031F2A4_00001310:
    lwz r6, 0x35c(r31)
    cmpwi r6, 0x0
    beq lbl_fn_8031F2A4_00001338
    stw r6, 0x8(r1)
    addi r3, r31, 0x360
    addi r4, r1, 0xc
    li r5, 0x0
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_8031F2A4_00001338:
    addi r3, r1, 0x1c
    addi r0, r31, 0x35c
    cmplw r3, r0
    beq lbl_fn_8031F2A4_000013A8
    lwz r3, 0x35c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8031F2A4_0000137C
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_8031F2A4_00001374
    addi r3, r31, 0x360
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8031F2A4_00001374:
    li r0, 0x0
    stw r0, 0x35c(r31)
lbl_fn_8031F2A4_0000137C:
    lwz r0, 0x1c(r1)
    cmpwi r0, 0x0
    beq lbl_fn_8031F2A4_000013A8
    stw r0, 0x35c(r31)
    addi r3, r1, 0x20
    addi r4, r31, 0x360
    li r5, 0x0
    lwz r6, 0x1c(r1)
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_8031F2A4_000013A8:
    lwz r3, 0x1c(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8031F2A4_000013DC
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_8031F2A4_000013D4
    addi r3, r1, 0x20
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8031F2A4_000013D4:
    li r0, 0x0
    stw r0, 0x1c(r1)
lbl_fn_8031F2A4_000013DC:
    addic. r3, r1, 0x8
    beq lbl_fn_8031F2A4_00001418
    lwz r4, 0x8(r1)
    cmpwi r4, 0x0
    beq lbl_fn_8031F2A4_00001418
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_8031F2A4_00001410
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8031F2A4_00001410:
    li r0, 0x0
    stw r0, 0x8(r1)
lbl_fn_8031F2A4_00001418:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8031F48C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    mr r12, r3
    stw r0, 0x14(r1)
    lwz r3, 0xc(r3)
    bl fn_80695B00
    nop
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8031F4B8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r5, 0x3
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bne lbl_fn_8031F4B8_0000148C
    lis r3, lbl_80788A00@ha
    addi r3, r3, lbl_80788A00@l
    stw r3, 0x0(r4)
    b lbl_fn_8031F4B8_000014F8
lbl_fn_8031F4B8_0000148C:
    cmpwi r5, 0x0
    bne lbl_fn_8031F4B8_000014C0
    cmpwi r4, 0x0
    beq lbl_fn_8031F4B8_000014F8
    lwz r5, 0x0(r3)
    lwz r0, 0x4(r3)
    stw r0, 0x4(r4)
    stw r5, 0x0(r4)
    lwz r0, 0x8(r3)
    stw r0, 0x8(r4)
    lwz r0, 0xc(r3)
    stw r0, 0xc(r4)
    b lbl_fn_8031F4B8_000014F8
lbl_fn_8031F4B8_000014C0:
    cmpwi r5, 0x1
    beq lbl_fn_8031F4B8_000014F8
    lwz r5, 0x0(r4)
    lis r3, lbl_80788A00@ha
    lwz r4, lbl_80788A00@l(r3)
    lwz r3, 0x0(r5)
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_8031F4B8_000014F0
    stw r30, 0x0(r31)
    b lbl_fn_8031F4B8_000014F8
lbl_fn_8031F4B8_000014F0:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_8031F4B8_000014F8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8031F570(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    mr r12, r3
    stw r0, 0x14(r1)
    lwz r3, 0xc(r3)
    bl fn_80695B00
    nop
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8031F59C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r5, 0x3
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bne lbl_fn_8031F59C_00001570
    lis r3, lbl_80788A08@ha
    addi r3, r3, lbl_80788A08@l
    stw r3, 0x0(r4)
    b lbl_fn_8031F59C_000015DC
lbl_fn_8031F59C_00001570:
    cmpwi r5, 0x0
    bne lbl_fn_8031F59C_000015A4
    cmpwi r4, 0x0
    beq lbl_fn_8031F59C_000015DC
    lwz r5, 0x0(r3)
    lwz r0, 0x4(r3)
    stw r0, 0x4(r4)
    stw r5, 0x0(r4)
    lwz r0, 0x8(r3)
    stw r0, 0x8(r4)
    lwz r0, 0xc(r3)
    stw r0, 0xc(r4)
    b lbl_fn_8031F59C_000015DC
lbl_fn_8031F59C_000015A4:
    cmpwi r5, 0x1
    beq lbl_fn_8031F59C_000015DC
    lwz r5, 0x0(r4)
    lis r3, lbl_80788A08@ha
    lwz r4, lbl_80788A08@l(r3)
    lwz r3, 0x0(r5)
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_8031F59C_000015D4
    stw r30, 0x0(r31)
    b lbl_fn_8031F59C_000015DC
lbl_fn_8031F59C_000015D4:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_8031F59C_000015DC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8031F654(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    lwz r0, 0x7e0(r3)
    lwz r4, 0x1560(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    addi r0, r4, 0x1
    stw r0, 0x1560(r3)
    beq lbl_fn_8031F654_0000162C
    bl fn_8031FAA4
    b lbl_fn_8031F654_00001638
lbl_fn_8031F654_0000162C:
    lwz r3, lbl_8087F430
    li r0, 0x0
    stw r0, 0x8a0(r3)
lbl_fn_8031F654_00001638:
    lwz r3, lbl_8087F8A0
    lwz r3, 0x48(r3)
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 3
    beq lbl_fn_8031F654_00001668
    lwz r0, 0x156c(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8031F654_00001668
    lwz r3, lbl_8087F430
    li r4, 0x3c
    li r5, 0x1
    bl fn_80370AE4
lbl_fn_8031F654_00001668:
    lwz r3, lbl_8087F8A0
    addi r4, r1, 0x14
    psq_l f1, 0x528(r31), 0, 0
    addi r5, r1, 0x8
    lwz r6, 0x48(r3)
    mr r3, r31
    lfs f2, 0x530(r31)
    lwz r0, 0x12a4(r6)
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x534(r31), 0, 0
    extrwi r0, r0, 1, 3
    stfs f2, 0x1c(r1)
    lfs f2, 0x53c(r31)
    stw r0, 0x156c(r31)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x10(r1)
    bl fn_8014C540
    lwz r0, 0x7e0(r31)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_8031F654_000016DC
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x2
    beq lbl_fn_8031F654_000016DC
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
lbl_fn_8031F654_000016DC:
    mr r3, r31
    bl fn_8031FE4C
    lfs f3, 0x14c4(r31)
    lfs f0, lbl_80884E7C
    lfs f4, 0xc(r1)
    fmuls f5, f3, f0
    lfs f0, 0x538(r31)
    lfs f3, lbl_80884E80
    stfs f5, 0x14c4(r31)
    fadds f4, f4, f5
    fsubs f4, f4, f0
    fabs f0, f4
    frsp f0, f0
    fcmpo cr0, f0, f3
    ble lbl_fn_8031F654_00001720
    fdivs f0, f4, f0
    fmuls f4, f3, f0
lbl_fn_8031F654_00001720:
    lwz r4, 0xd1c(r31)
    stfs f4, 0x14c4(r31)
    cmpwi r4, 0x0
    beq lbl_fn_8031F654_00001764
    lwz r0, 0x12a4(r31)
    lis r5, lbl_80749A70@ha
    addi r5, r5, lbl_80749A70@l
    lis r6, lbl_807C7030@ha
    rlwinm r0, r0, 0, 8, 6
    stw r0, 0x12a4(r31)
    lfs f1, lbl_80884E84
    addi r3, r31, 0x10d8
    addi r4, r4, 0xb0
    addi r5, r5, 0x9
    addi r6, r6, lbl_807C7030@l
    bl fn_80129978
    b lbl_fn_8031F654_00001770
lbl_fn_8031F654_00001764:
    lwz r0, 0x12a4(r31)
    oris r0, r0, 0x100
    stw r0, 0x12a4(r31)
lbl_fn_8031F654_00001770:
    mr r3, r31
    bl fn_80145334
    lwz r3, lbl_8087F430
    lwz r0, 0x868(r3)
    cmpwi r0, 0x6
    bne lbl_fn_8031F654_0000179C
    addi r3, r31, 0x1030
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_80127D8C
lbl_fn_8031F654_0000179C:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8031F810(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    lis r0, 0x4330
    stfd f31, 0x70(r1)
    psq_st f31, 0x78(r1), 0, 0
    stw r31, 0x6c(r1)
    mr r31, r3
    stw r30, 0x68(r1)
    stw r29, 0x64(r1)
    stw r28, 0x60(r1)
    stw r0, 0x48(r1)
    stw r0, 0x50(r1)
    bl fn_80149A30
    lwz r5, 0x155c(r31)
    lis r4, 0x8889
    lis r3, lbl_807498B0@ha
    lis r28, lbl_80749A70@ha
    addi r6, r5, 0x1
    subi r0, r4, 0x7777
    mulhw r0, r0, r6
    lfd f2, lbl_807498B0@l(r3)
    addi r28, r28, lbl_80749A70@l
    lfs f0, lbl_80884E5C
    addi r3, r31, 0xb0
    addi r4, r28, 0x14
    add r0, r0, r6
    srawi r0, r0, 6
    srwi r5, r0, 31
    add r0, r0, r5
    mulli r0, r0, 0x78
    subf r0, r0, r6
    stw r0, 0x155c(r31)
    xoris r0, r0, 0x8000
    stw r0, 0x4c(r1)
    lfd f1, 0x48(r1)
    fsubs f1, f1, f2
    fdivs f31, f1, f0
    bl fn_80094B6C
    lwz r0, 0x18(r3)
    lis r30, lbl_807498B8@ha
    stw r0, 0x10(r1)
    mr r29, r3
    lfs f0, lbl_80884E8C
    lbz r3, 0x10(r1)
    stw r3, 0x54(r1)
    fmuls f1, f0, f31
    lbz r0, 0x11(r1)
    stw r0, 0x4c(r1)
    lfd f2, 0x50(r1)
    lbz r3, 0x12(r1)
    lfd f6, lbl_807498B8@l(r30)
    lfd f0, 0x48(r1)
    lbz r0, 0x13(r1)
    fsubs f4, f2, f6
    stw r3, 0x54(r1)
    fsubs f3, f0, f6
    lfs f5, lbl_80884E88
    stw r0, 0x4c(r1)
    lfd f2, 0x50(r1)
    fdivs f4, f4, f5
    lfd f0, 0x48(r1)
    stfs f4, 0x38(r1)
    fsubs f2, f2, f6
    fsubs f0, f0, f6
    fdivs f3, f3, f5
    stfs f3, 0x3c(r1)
    fdivs f2, f2, f5
    stfs f2, 0x40(r1)
    fdivs f0, f0, f5
    stfs f0, 0x44(r1)
    bl fn_8068AD58
    frsp f2, f1
    lfs f1, lbl_80884E70
    lfs f0, lbl_80884E90
    addi r3, r31, 0xb0
    lfd f5, lbl_807498B8@l(r30)
    addi r4, r28, 0x14
    fadds f1, f1, f2
    lfs f4, lbl_80884E88
    addi r5, r1, 0x38
    addi r6, r1, 0x28
    addi r7, r1, 0x18
    fmuls f0, f0, f1
    stfs f0, 0x44(r1)
    lwz r0, 0x1c(r29)
    stw r0, 0x8(r1)
    lbz r8, 0x8(r1)
    stw r8, 0x54(r1)
    lbz r0, 0x9(r1)
    lfd f0, 0x50(r1)
    stw r0, 0x4c(r1)
    fsubs f1, f0, f5
    lbz r8, 0xa(r1)
    lfd f0, 0x48(r1)
    lbz r0, 0xb(r1)
    fsubs f2, f0, f5
    stw r0, 0x4c(r1)
    fdivs f3, f1, f4
    stw r8, 0x54(r1)
    lfd f0, 0x48(r1)
    lfd f1, 0x50(r1)
    stfs f3, 0x18(r1)
    fsubs f1, f1, f5
    fsubs f0, f0, f5
    fdivs f2, f2, f4
    stfs f2, 0x1c(r1)
    fdivs f1, f1, f4
    stfs f1, 0x20(r1)
    fdivs f0, f0, f4
    stfs f0, 0x24(r1)
    lwz r0, 0x20(r29)
    stw r0, 0xc(r1)
    lbz r8, 0xc(r1)
    stw r8, 0x54(r1)
    lbz r0, 0xd(r1)
    lfd f0, 0x50(r1)
    stw r0, 0x4c(r1)
    fsubs f1, f0, f5
    lbz r8, 0xe(r1)
    lfd f0, 0x48(r1)
    lbz r0, 0xf(r1)
    fsubs f2, f0, f5
    stw r0, 0x4c(r1)
    fdivs f3, f1, f4
    stw r8, 0x54(r1)
    lfd f0, 0x48(r1)
    lfd f1, 0x50(r1)
    stfs f3, 0x28(r1)
    fsubs f1, f1, f5
    fsubs f0, f0, f5
    fdivs f2, f2, f4
    stfs f2, 0x2c(r1)
    fdivs f1, f1, f4
    stfs f1, 0x30(r1)
    fdivs f0, f0, f4
    stfs f0, 0x34(r1)
    bl fn_80094958
    lwz r3, lbl_8087F0A8
    lwz r0, 0x34(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8031F810_00001A1C
    lfs f1, lbl_80884E94
    li r4, 0x14
    lfs f0, 0x52c(r31)
    lis r5, 0xffff
    lwz r3, lbl_8087EEB0
    fadds f2, f1, f0
    lfs f1, 0x528(r31)
    lfs f3, 0x530(r31)
    lfs f4, 0x538(r31)
    lfs f5, lbl_80884E48
    lfs f6, lbl_80884E98
    lfs f7, lbl_80884E74
    bl fn_80063484
lbl_fn_8031F810_00001A1C:
    lwz r0, 0x84(r1)
    psq_l f31, 0x78(r1), 0, 0
    lfd f31, 0x70(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    lwz r29, 0x64(r1)
    lwz r28, 0x60(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}
