#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_19(void);
extern void _savegpr_19(void);
extern void fn_8000D3A4(void);
extern void fn_8001047C(void);
extern void fn_80013338(void);
extern void fn_8004ED34(void);
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800C3118(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800CB440(void);
extern void fn_800CB5C8(void);
extern void fn_800F8548(void);
extern void fn_800F8574(void);
extern void fn_800F8C6C(void);
extern void fn_80126214(void);
extern void fn_8013A258(void);
extern void fn_8013C38C(void);
extern void fn_8013CB68(void);
extern void fn_801426A4(void);
extern void fn_8016E970(void);
extern void fn_8017039C(void);
extern void fn_80170A20(void);
extern void fn_80232B7C(void);
extern void fn_80239DAC(void);
extern void fn_8023A8B4(void);
extern void fn_80281054(void);
extern void fn_80281344(void);
extern void fn_80281634(void);
extern void fn_80281924(void);
extern void fn_80281ED8(void);
extern void fn_80281F88(void);
extern void fn_805A507C(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9940(void);
extern void fn_8068AEA4(void);

/* External data declarations */
extern u8 lbl_80744E60[];
extern u8 lbl_80744EFC[];
extern u8 lbl_807854E8[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_80883940;
extern u32 lbl_80883948;
extern u32 lbl_8088394C;
extern u32 lbl_80883964;
extern u32 lbl_80883968;
extern u32 lbl_80883970;
extern u32 lbl_80883974;
extern u32 lbl_80883980;
extern u32 lbl_80883988;
extern u32 lbl_80883990;
extern u32 lbl_80883994;
extern u32 lbl_80883998;
extern u32 lbl_8088399C;
extern u32 lbl_808839A0;
extern u32 lbl_808839A4;
extern u32 lbl_808839A8;
extern u32 lbl_808839AC;
extern u32 lbl_808839B0;
extern u32 lbl_808839B4;
extern u32 lbl_808839B8;
extern u32 lbl_808839BC;
extern u32 lbl_808839C0;

/* Function declarations */
void fn_8027E8EC(void);
void fn_8027EA84(void);
void fn_8027EB14(void);
void fn_8027F504(void);
void fn_8027F69C(void);
void fn_8027F8A8(void);
void fn_8027FA7C(void);

asm void fn_8027E8EC(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stw r31, 0x7c(r1)
    mr r31, r3
    lwz r0, 0x624(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8027E8EC_00000184
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x5
    bne lbl_fn_8027E8EC_00000114
    lfs f3, lbl_80883948
    li r4, 0x79
    lfs f0, lbl_8088394C
    stfs f3, 0x2c(r1)
    stfs f3, 0x30(r1)
    stfs f0, 0x34(r1)
    lfs f1, 0x538(r3)
    addi r3, r1, 0x48
    bl fn_805F8E70
    addi r4, r1, 0x2c
    addi r3, r1, 0x48
    mr r5, r4
    bl fn_805F93C0
    lfs f3, lbl_80883990
    addi r3, r1, 0x20
    lfs f0, 0x5b0(r31)
    lfs f6, 0x34(r1)
    fmuls f0, f3, f0
    lfs f4, 0x30(r1)
    lfs f5, lbl_80883964
    lfs f3, 0x2c(r1)
    lwz r4, 0x62c(r31)
    fmuls f7, f4, f5
    fmuls f8, f3, f5
    lfs f4, lbl_80883994
    stfs f0, 0x10(r4)
    fmuls f6, f6, f5
    lfs f3, 0x52c(r31)
    lfs f0, 0x5a8(r31)
    lfs f5, 0x530(r31)
    fadds f9, f3, f0
    lfs f3, 0x528(r31)
    lfs f0, 0x5a4(r31)
    lwz r4, 0x62c(r31)
    fadds f10, f3, f0
    lfs f0, 0x5ac(r31)
    fadds f3, f9, f7
    stfs f8, 0x38(r1)
    fadds f5, f5, f0
    fadds f0, f10, f8
    stfs f3, 0x24(r1)
    fadds f2, f5, f6
    stfs f0, 0x20(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x4(r4), 0, 0
    stfs f2, 0xc(r4)
    lwz r3, 0x62c(r31)
    stfs f7, 0x3c(r1)
    lfs f3, 0x10(r3)
    lfs f0, 0x8(r3)
    stfs f6, 0x40(r1)
    fmadds f0, f4, f3, f0
    stfs f10, 0x14(r1)
    stfs f9, 0x18(r1)
    stfs f5, 0x1c(r1)
    stfs f2, 0x28(r1)
    stfs f0, 0x8(r3)
    b lbl_fn_8027E8EC_00000184
lbl_fn_8027E8EC_00000114:
    lfs f3, lbl_80883990
    addi r4, r1, 0x8
    lfs f0, 0x5b0(r3)
    lwz r5, 0x62c(r3)
    fmuls f0, f3, f0
    lfs f4, lbl_80883994
    stfs f0, 0x10(r5)
    lfs f6, 0x52c(r3)
    lfs f5, 0x5a8(r3)
    lfs f3, 0x528(r3)
    fadds f6, f6, f5
    lfs f0, 0x5a4(r3)
    lfs f5, 0x530(r3)
    fadds f3, f3, f0
    lfs f0, 0x5ac(r3)
    stfs f6, 0xc(r1)
    fadds f2, f5, f0
    lwz r5, 0x62c(r3)
    stfs f3, 0x8(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x4(r5), 0, 0
    stfs f2, 0xc(r5)
    lwz r3, 0x62c(r3)
    stfs f2, 0x10(r1)
    lfs f3, 0x10(r3)
    lfs f0, 0x8(r3)
    fmadds f0, f4, f3, f0
    stfs f0, 0x8(r3)
lbl_fn_8027E8EC_00000184:
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_8027EA84(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r31, 0xc(r1)
    mr r31, r3
    stw r0, 0x14d8(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0xb
    mr r3, r31
    li r4, 0x6
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f0, lbl_8088394C
    li r3, 0x16
    li r0, 0x1
    stw r3, 0x560(r31)
    lfs f1, lbl_80883948
    addi r3, r31, 0xb0
    stw r0, 0x3fc(r31)
    li r4, 0x0
    lfs f2, lbl_80883998
    li r5, 0x1dd
    stfs f0, 0x2fc(r31)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8027EB14(void)
{
    nofralloc
    stwu r1, -0x410(r1)
    mflr r0
    stw r0, 0x414(r1)
    addi r4, r1, 0x1ac
    stfd f31, 0x400(r1)
    psq_st f31, 0x408(r1), 0, 0
    stfd f30, 0x3f0(r1)
    psq_st f30, 0x3f8(r1), 0, 0
    lfs f30, lbl_80883948
    stfd f29, 0x3e0(r1)
    psq_st f29, 0x3e8(r1), 0, 0
    lfs f29, lbl_8088394C
    stfd f28, 0x3d0(r1)
    psq_st f28, 0x3d8(r1), 0, 0
    stfd f27, 0x3c0(r1)
    psq_st f27, 0x3c8(r1), 0, 0
    stw r31, 0x3bc(r1)
    mr r31, r3
    stw r30, 0x3b8(r1)
    li r30, 0x0
    stw r29, 0x3b4(r1)
    psq_l f1, 0x534(r3), 0, 0
    lfs f2, 0x53c(r3)
    stfs f2, 0x1b4(r1)
    psq_st f1, 0x0(r4), 0, 0
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x7
    bne lbl_fn_8027EB14_00000B84
    addi r3, r3, 0x1030
    bl fn_80126214
    addi r4, r31, 0x1088
    addi r30, r1, 0x1a0
    psq_l f1, 0x0(r4), 0, 0
    mr r3, r30
    lfs f2, 0x1090(r31)
    stfs f2, 0x1a8(r1)
    psq_st f1, 0x0(r30), 0, 0
    bl fn_805F9940
    lfs f0, lbl_8088399C
    fmr f30, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_8027EB14_000004A8
    addi r29, r1, 0x188
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x1a8(r1)
    mr r3, r29
    psq_st f1, 0x0(r29), 0, 0
    mr r4, r29
    stfs f2, 0x190(r1)
    bl fn_805F98D0
    lfs f2, 0x190(r1)
    addi r30, r1, 0x194
    psq_l f1, 0x0(r29), 0, 0
    fabs f3, f2
    lfs f0, lbl_80883980
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0x19c(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_8027EB14_0000033C
    lfs f3, 0x194(r1)
    lfs f0, lbl_80883948
    fcmpo cr0, f3, f0
    ble lbl_fn_8027EB14_00000330
    lfs f0, lbl_808839A0
    b lbl_fn_8027EB14_00000334
lbl_fn_8027EB14_00000330:
    lfs f0, lbl_808839A4
lbl_fn_8027EB14_00000334:
    stfs f0, 0x120(r1)
    b lbl_fn_8027EB14_00000350
lbl_fn_8027EB14_0000033C:
    frsp f2, f2
    lfs f1, 0x194(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x120(r1)
lbl_fn_8027EB14_00000350:
    lfs f0, 0x120(r1)
    addi r3, r1, 0x338
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883948
    addi r4, r1, 0x110
    lfs f28, 0x340(r1)
    mr r5, r4
    lfs f31, 0x33c(r1)
    addi r3, r1, 0x368
    lfs f13, 0x338(r1)
    lfs f12, 0x350(r1)
    lfs f11, 0x34c(r1)
    lfs f10, 0x348(r1)
    lfs f9, 0x360(r1)
    lfs f8, 0x35c(r1)
    lfs f7, 0x358(r1)
    lfs f6, 0x364(r1)
    lfs f5, 0x354(r1)
    lfs f4, 0x344(r1)
    lfs f0, lbl_8088394C
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x19c(r1)
    stfs f3, 0x398(r1)
    stfs f3, 0x39c(r1)
    stfs f3, 0x3a0(r1)
    stfs f0, 0x3a4(r1)
    stfs f13, 0xe0(r1)
    stfs f31, 0xe4(r1)
    stfs f28, 0xe8(r1)
    stfs f13, 0x368(r1)
    stfs f31, 0x36c(r1)
    stfs f28, 0x370(r1)
    stfs f10, 0xec(r1)
    stfs f11, 0xf0(r1)
    stfs f12, 0xf4(r1)
    stfs f10, 0x378(r1)
    stfs f11, 0x37c(r1)
    stfs f12, 0x380(r1)
    stfs f7, 0xf8(r1)
    stfs f8, 0xfc(r1)
    stfs f9, 0x100(r1)
    stfs f7, 0x388(r1)
    stfs f8, 0x38c(r1)
    stfs f9, 0x390(r1)
    stfs f4, 0x104(r1)
    stfs f5, 0x108(r1)
    stfs f6, 0x10c(r1)
    stfs f4, 0x374(r1)
    stfs f5, 0x384(r1)
    stfs f6, 0x394(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x118(r1)
    bl fn_805F9750
    lfs f2, 0x118(r1)
    lfs f0, lbl_80883980
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8027EB14_0000046C
    lfs f3, 0x114(r1)
    lfs f0, lbl_80883948
    fcmpo cr0, f3, f0
    ble lbl_fn_8027EB14_0000045C
    lfs f0, lbl_808839A0
    b lbl_fn_8027EB14_00000460
lbl_fn_8027EB14_0000045C:
    lfs f0, lbl_808839A4
lbl_fn_8027EB14_00000460:
    fneg f0, f0
    stfs f0, 0x11c(r1)
    b lbl_fn_8027EB14_00000480
lbl_fn_8027EB14_0000046C:
    lfs f1, 0x114(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x11c(r1)
lbl_fn_8027EB14_00000480:
    lfs f2, lbl_80883948
    addi r3, r1, 0x11c
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x1ac
    stfs f2, 0x124(r1)
    stfs f2, 0x19c(r1)
    frsp f2, f2
    psq_st f1, 0x0(r30), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x1b4(r1)
lbl_fn_8027EB14_000004A8:
    lwz r5, 0x14ec(r31)
    addi r29, r1, 0x1a0
    lfs f4, 0x52c(r31)
    addi r4, r1, 0x17c
    lfs f5, 0x52c(r5)
    mr r3, r29
    lfs f3, 0x528(r5)
    fsubs f5, f5, f4
    lfs f0, 0x528(r31)
    lfs f4, 0x530(r5)
    fsubs f3, f3, f0
    stfs f5, 0x180(r1)
    lfs f0, 0x530(r31)
    stfs f3, 0x17c(r1)
    fsubs f2, f4, f0
    lfs f0, lbl_80883948
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x184(r1)
    stfs f2, 0x1a8(r1)
    stfs f0, 0x1a4(r1)
    bl fn_805F9940
    lwz r0, 0x58c(r31)
    fmr f31, f1
    cmpwi r0, 0x7
    bne lbl_fn_8027EB14_000006DC
    lfs f2, lbl_80883970
    addi r3, r1, 0x164
    lfs f3, lbl_80883948
    addi r29, r1, 0x170
    frsp f4, f2
    stfs f3, 0x164(r1)
    lfs f0, lbl_80883980
    stfs f3, 0x168(r1)
    fabs f5, f4
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x16c(r1)
    frsp f5, f5
    psq_st f1, 0x0(r29), 0, 0
    fcmpo cr0, f5, f0
    stfs f2, 0x178(r1)
    bge lbl_fn_8027EB14_00000570
    lfs f0, 0x170(r1)
    fcmpo cr0, f0, f3
    ble lbl_fn_8027EB14_00000564
    lfs f0, lbl_808839A0
    b lbl_fn_8027EB14_00000568
lbl_fn_8027EB14_00000564:
    lfs f0, lbl_808839A4
lbl_fn_8027EB14_00000568:
    stfs f0, 0xd8(r1)
    b lbl_fn_8027EB14_00000584
lbl_fn_8027EB14_00000570:
    fmr f2, f4
    lfs f1, 0x170(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0xd8(r1)
lbl_fn_8027EB14_00000584:
    lfs f0, 0xd8(r1)
    addi r3, r1, 0x2c8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883948
    addi r4, r1, 0xc8
    lfs f27, 0x2d0(r1)
    mr r5, r4
    lfs f28, 0x2cc(r1)
    addi r3, r1, 0x2f8
    lfs f13, 0x2c8(r1)
    lfs f12, 0x2e0(r1)
    lfs f11, 0x2dc(r1)
    lfs f10, 0x2d8(r1)
    lfs f9, 0x2f0(r1)
    lfs f8, 0x2ec(r1)
    lfs f7, 0x2e8(r1)
    lfs f6, 0x2f4(r1)
    lfs f5, 0x2e4(r1)
    lfs f4, 0x2d4(r1)
    lfs f0, lbl_8088394C
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x178(r1)
    stfs f3, 0x328(r1)
    stfs f3, 0x32c(r1)
    stfs f3, 0x330(r1)
    stfs f0, 0x334(r1)
    stfs f13, 0x98(r1)
    stfs f28, 0x9c(r1)
    stfs f27, 0xa0(r1)
    stfs f13, 0x2f8(r1)
    stfs f28, 0x2fc(r1)
    stfs f27, 0x300(r1)
    stfs f10, 0xa4(r1)
    stfs f11, 0xa8(r1)
    stfs f12, 0xac(r1)
    stfs f10, 0x308(r1)
    stfs f11, 0x30c(r1)
    stfs f12, 0x310(r1)
    stfs f7, 0xb0(r1)
    stfs f8, 0xb4(r1)
    stfs f9, 0xb8(r1)
    stfs f7, 0x318(r1)
    stfs f8, 0x31c(r1)
    stfs f9, 0x320(r1)
    stfs f4, 0xbc(r1)
    stfs f5, 0xc0(r1)
    stfs f6, 0xc4(r1)
    stfs f4, 0x304(r1)
    stfs f5, 0x314(r1)
    stfs f6, 0x324(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xd0(r1)
    bl fn_805F9750
    lfs f2, 0xd0(r1)
    lfs f0, lbl_80883980
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8027EB14_000006A0
    lfs f3, 0xcc(r1)
    lfs f0, lbl_80883948
    fcmpo cr0, f3, f0
    ble lbl_fn_8027EB14_00000690
    lfs f0, lbl_808839A0
    b lbl_fn_8027EB14_00000694
lbl_fn_8027EB14_00000690:
    lfs f0, lbl_808839A4
lbl_fn_8027EB14_00000694:
    fneg f0, f0
    stfs f0, 0xd4(r1)
    b lbl_fn_8027EB14_000006B4
lbl_fn_8027EB14_000006A0:
    lfs f1, 0xcc(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0xd4(r1)
lbl_fn_8027EB14_000006B4:
    lfs f2, lbl_80883948
    addi r3, r1, 0xd4
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0xdc(r1)
    stfs f2, 0x178(r1)
    frsp f2, f2
    psq_st f1, 0x0(r29), 0, 0
    psq_st f1, 0x534(r31), 0, 0
    stfs f2, 0x53c(r31)
    b lbl_fn_8027EB14_00000884
lbl_fn_8027EB14_000006DC:
    mr r3, r29
    mr r4, r29
    bl fn_805F98D0
    lfs f2, 0x1a8(r1)
    lfs f0, lbl_80883980
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8027EB14_00000724
    lfs f3, 0x1a0(r1)
    lfs f0, lbl_80883948
    fcmpo cr0, f3, f0
    ble lbl_fn_8027EB14_00000718
    lfs f0, lbl_808839A0
    b lbl_fn_8027EB14_0000071C
lbl_fn_8027EB14_00000718:
    lfs f0, lbl_808839A4
lbl_fn_8027EB14_0000071C:
    stfs f0, 0x54(r1)
    b lbl_fn_8027EB14_00000734
lbl_fn_8027EB14_00000724:
    lfs f1, 0x1a0(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x54(r1)
lbl_fn_8027EB14_00000734:
    lfs f0, 0x54(r1)
    addi r3, r1, 0x298
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883948
    addi r4, r1, 0x5c
    lfs f4, 0x2a0(r1)
    mr r5, r4
    lfs f5, 0x29c(r1)
    addi r3, r1, 0x258
    lfs f6, 0x298(r1)
    lfs f7, 0x2b0(r1)
    lfs f8, 0x2ac(r1)
    lfs f9, 0x2a8(r1)
    lfs f10, 0x2c0(r1)
    lfs f11, 0x2bc(r1)
    lfs f12, 0x2b8(r1)
    lfs f13, 0x2c4(r1)
    lfs f27, 0x2b4(r1)
    lfs f28, 0x2a4(r1)
    lfs f0, lbl_8088394C
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x1a8(r1)
    stfs f3, 0x288(r1)
    stfs f3, 0x28c(r1)
    stfs f3, 0x290(r1)
    stfs f0, 0x294(r1)
    stfs f6, 0x8c(r1)
    stfs f5, 0x90(r1)
    stfs f4, 0x94(r1)
    stfs f6, 0x258(r1)
    stfs f5, 0x25c(r1)
    stfs f4, 0x260(r1)
    stfs f9, 0x80(r1)
    stfs f8, 0x84(r1)
    stfs f7, 0x88(r1)
    stfs f9, 0x268(r1)
    stfs f8, 0x26c(r1)
    stfs f7, 0x270(r1)
    stfs f12, 0x74(r1)
    stfs f11, 0x78(r1)
    stfs f10, 0x7c(r1)
    stfs f12, 0x278(r1)
    stfs f11, 0x27c(r1)
    stfs f10, 0x280(r1)
    stfs f28, 0x68(r1)
    stfs f27, 0x6c(r1)
    stfs f13, 0x70(r1)
    stfs f28, 0x264(r1)
    stfs f27, 0x274(r1)
    stfs f13, 0x284(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x64(r1)
    bl fn_805F9750
    lfs f2, 0x64(r1)
    lfs f0, lbl_80883980
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8027EB14_00000850
    lfs f3, 0x60(r1)
    lfs f0, lbl_80883948
    fcmpo cr0, f3, f0
    ble lbl_fn_8027EB14_00000840
    lfs f0, lbl_808839A0
    b lbl_fn_8027EB14_00000844
lbl_fn_8027EB14_00000840:
    lfs f0, lbl_808839A4
lbl_fn_8027EB14_00000844:
    fneg f0, f0
    stfs f0, 0x50(r1)
    b lbl_fn_8027EB14_00000864
lbl_fn_8027EB14_00000850:
    lfs f1, 0x60(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x50(r1)
lbl_fn_8027EB14_00000864:
    addi r3, r1, 0x50
    lfs f2, lbl_80883948
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x1a8(r1)
    lfs f0, 0x1a4(r1)
    stfs f2, 0x58(r1)
    stfs f0, 0x538(r31)
lbl_fn_8027EB14_00000884:
    lwz r3, 0x58c(r31)
    subi r0, r3, 0x6
    cmplwi r0, 0x2
    ble lbl_fn_8027EB14_00000AC8
    lfs f3, 0x14dc(r31)
    fcmpo cr0, f31, f3
    bge lbl_fn_8027EB14_00000AC8
    lfs f0, lbl_808839A8
    fmuls f0, f0, f3
    fcmpo cr0, f31, f0
    bge lbl_fn_8027EB14_00000AC4
    addi r3, r1, 0x1a0
    addi r29, r1, 0x140
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r29
    lfs f2, 0x1a8(r1)
    mr r4, r29
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x148(r1)
    bl fn_805F98D0
    lfs f2, 0x148(r1)
    addi r30, r1, 0x14c
    psq_l f1, 0x0(r29), 0, 0
    fabs f3, f2
    lfs f0, lbl_80883980
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0x154(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_8027EB14_00000920
    lfs f3, 0x14c(r1)
    lfs f0, lbl_80883948
    fcmpo cr0, f3, f0
    ble lbl_fn_8027EB14_00000914
    lfs f0, lbl_808839A0
    b lbl_fn_8027EB14_00000918
lbl_fn_8027EB14_00000914:
    lfs f0, lbl_808839A4
lbl_fn_8027EB14_00000918:
    stfs f0, 0x48(r1)
    b lbl_fn_8027EB14_00000934
lbl_fn_8027EB14_00000920:
    frsp f2, f2
    lfs f1, 0x14c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_8027EB14_00000934:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x1e8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883948
    addi r4, r1, 0x38
    lfs f28, 0x1f0(r1)
    mr r5, r4
    lfs f27, 0x1ec(r1)
    addi r3, r1, 0x218
    lfs f13, 0x1e8(r1)
    lfs f12, 0x200(r1)
    lfs f11, 0x1fc(r1)
    lfs f10, 0x1f8(r1)
    lfs f9, 0x210(r1)
    lfs f8, 0x20c(r1)
    lfs f7, 0x208(r1)
    lfs f6, 0x214(r1)
    lfs f5, 0x204(r1)
    lfs f4, 0x1f4(r1)
    lfs f0, lbl_8088394C
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x154(r1)
    stfs f3, 0x248(r1)
    stfs f3, 0x24c(r1)
    stfs f3, 0x250(r1)
    stfs f0, 0x254(r1)
    stfs f13, 0x8(r1)
    stfs f27, 0xc(r1)
    stfs f28, 0x10(r1)
    stfs f13, 0x218(r1)
    stfs f27, 0x21c(r1)
    stfs f28, 0x220(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0x228(r1)
    stfs f11, 0x22c(r1)
    stfs f12, 0x230(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0x238(r1)
    stfs f8, 0x23c(r1)
    stfs f9, 0x240(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0x224(r1)
    stfs f5, 0x234(r1)
    stfs f6, 0x244(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80883980
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8027EB14_00000A50
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80883948
    fcmpo cr0, f3, f0
    ble lbl_fn_8027EB14_00000A40
    lfs f0, lbl_808839A0
    b lbl_fn_8027EB14_00000A44
lbl_fn_8027EB14_00000A40:
    lfs f0, lbl_808839A4
lbl_fn_8027EB14_00000A44:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_8027EB14_00000A64
lbl_fn_8027EB14_00000A50:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_8027EB14_00000A64:
    lfs f5, lbl_80883948
    addi r3, r1, 0x44
    psq_l f1, 0x0(r3), 0, 0
    addi r4, r1, 0x158
    fmr f2, f5
    psq_st f1, 0x0(r30), 0, 0
    addi r3, r1, 0x1ac
    lfs f29, lbl_8088394C
    lfs f3, 0x150(r1)
    frsp f4, f2
    lfs f0, 0x14c(r1)
    fneg f6, f3
    stfs f2, 0x154(r1)
    fneg f3, f4
    fneg f0, f0
    stfs f6, 0x15c(r1)
    stfs f0, 0x158(r1)
    frsp f2, f3
    psq_l f1, 0x0(r4), 0, 0
    stfs f5, 0x4c(r1)
    stfs f3, 0x160(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x1b4(r1)
    b lbl_fn_8027EB14_00000AC8
lbl_fn_8027EB14_00000AC4:
    lfs f29, lbl_80883948
lbl_fn_8027EB14_00000AC8:
    lwz r0, 0x151c(r31)
    li r30, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_8027EB14_00000B94
    lfs f0, lbl_808839AC
    lwz r0, 0x1514(r31)
    fmuls f29, f29, f0
    cmpwi r0, 0x0
    beq lbl_fn_8027EB14_00000B94
    psq_l f1, 0x528(r31), 0, 0
    addi r29, r1, 0x134
    lfs f2, 0x530(r31)
    addi r3, r1, 0x1b8
    lfs f3, lbl_80883948
    li r4, 0x79
    lfs f0, lbl_8088394C
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x13c(r1)
    stfs f3, 0x128(r1)
    stfs f3, 0x12c(r1)
    stfs f0, 0x130(r1)
    lfs f1, 0x538(r31)
    bl fn_805F8E70
    addi r4, r1, 0x128
    addi r3, r1, 0x1b8
    mr r5, r4
    bl fn_805F93C0
    lwz r6, 0x1514(r31)
    mr r3, r29
    addi r4, r1, 0x128
    li r5, 0x14
    lfs f1, 0x58(r6)
    lfs f2, 0x50(r6)
    bl fn_805A507C
    lfs f3, 0x1b0(r1)
    mr r6, r31
    lfs f0, 0x538(r31)
    li r4, 0x0
    lwz r3, lbl_8087F048
    li r5, 0x0
    fsubs f1, f3, f0
    lwz r7, 0x1514(r31)
    lwz r8, 0x590(r31)
    li r9, 0x1e
    li r10, -0x1
    bl fn_800F8C6C
    b lbl_fn_8027EB14_00000B94
lbl_fn_8027EB14_00000B84:
    cmpwi r0, 0x6
    bne lbl_fn_8027EB14_00000B94
    bl fn_8013A258
    b lbl_fn_8027EB14_00000BD4
lbl_fn_8027EB14_00000B94:
    cmpwi r30, 0x0
    beq lbl_fn_8027EB14_00000BB8
    lfs f0, 0x568(r31)
    fmr f1, f30
    mr r3, r31
    addi r4, r1, 0x1ac
    fmuls f2, f0, f29
    bl fn_801426A4
    b lbl_fn_8027EB14_00000BD4
lbl_fn_8027EB14_00000BB8:
    lfs f0, 0x568(r31)
    fmr f1, f30
    mr r3, r31
    addi r4, r1, 0x1ac
    fmuls f2, f0, f29
    li r5, 0x0
    bl fn_8013CB68
lbl_fn_8027EB14_00000BD4:
    lwz r0, 0x414(r1)
    psq_l f31, 0x408(r1), 0, 0
    lfd f31, 0x400(r1)
    psq_l f30, 0x3f8(r1), 0, 0
    lfd f30, 0x3f0(r1)
    psq_l f29, 0x3e8(r1), 0, 0
    lfd f29, 0x3e0(r1)
    psq_l f28, 0x3d8(r1), 0, 0
    lfd f28, 0x3d0(r1)
    psq_l f27, 0x3c8(r1), 0, 0
    lfd f27, 0x3c0(r1)
    lwz r31, 0x3bc(r1)
    lwz r30, 0x3b8(r1)
    lwz r29, 0x3b4(r1)
    mtlr r0
    addi r1, r1, 0x410
    blr
}

asm void fn_8027F504(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    lwz r0, 0x14ec(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8027F504_00000D9C
    mr r3, r0
    bl fn_8013C38C
    mr r4, r3
    addi r3, r1, 0x14
    bl fn_8001047C
    addi r3, r1, 0x8
    addi r4, r1, 0x14
    addi r5, r31, 0x528
    bl fn_80013338
    addi r3, r1, 0x8
    bl fn_8000D3A4
    lwz r0, 0x14e4(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8027F504_00000C7C
    cmpwi r0, 0x1
    beq lbl_fn_8027F504_00000CF8
    b lbl_fn_8027F504_00000D9C
lbl_fn_8027F504_00000C7C:
    lwz r0, 0x14e8(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8027F504_00000CD0
    lwz r0, 0x1524(r31)
    cmpwi r0, 0x2
    bge lbl_fn_8027F504_00000CBC
    lfs f0, lbl_808839B0
    fcmpo cr0, f1, f0
    bge lbl_fn_8027F504_00000D9C
    lwz r4, 0x14ec(r31)
    mr r3, r31
    bl fn_80281054
    lwz r3, 0x1524(r31)
    addi r0, r3, 0x1
    stw r0, 0x1524(r31)
    b lbl_fn_8027F504_00000D9C
lbl_fn_8027F504_00000CBC:
    mr r3, r31
    bl fn_80281ED8
    li r0, 0x0
    stw r0, 0x1524(r31)
    b lbl_fn_8027F504_00000D9C
lbl_fn_8027F504_00000CD0:
    lwz r4, 0x14ec(r31)
    mr r3, r31
    li r5, 0x6
    bl fn_80281634
    li r0, 0x0
    li r3, 0x1
    stw r3, 0x14e4(r31)
    stw r0, 0x14e8(r31)
    stw r0, 0x14fc(r31)
    b lbl_fn_8027F504_00000D9C
lbl_fn_8027F504_00000CF8:
    lwz r0, 0x1500(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8027F504_00000D80
    lwz r0, 0x1544(r31)
    cmpwi r0, 0x3
    bge lbl_fn_8027F504_00000D80
    lwz r0, 0x14d8(r31)
    cmpwi r0, 0x3c
    ble lbl_fn_8027F504_00000D9C
    lwz r0, 0x1524(r31)
    cmpwi r0, 0x2
    bge lbl_fn_8027F504_00000D50
    lfs f0, lbl_808839B0
    fcmpo cr0, f1, f0
    bge lbl_fn_8027F504_00000D9C
    lwz r4, 0x14ec(r31)
    mr r3, r31
    bl fn_80281054
    lwz r3, 0x1524(r31)
    addi r0, r3, 0x1
    stw r0, 0x1524(r31)
    b lbl_fn_8027F504_00000D9C
lbl_fn_8027F504_00000D50:
    lfs f0, lbl_808839B0
    fcmpo cr0, f1, f0
    bge lbl_fn_8027F504_00000D9C
    lwz r4, 0x14ec(r31)
    mr r3, r31
    bl fn_80281344
    lwz r3, 0x1544(r31)
    li r0, 0x0
    stw r0, 0x1524(r31)
    addi r0, r3, 0x1
    stw r0, 0x1544(r31)
    b lbl_fn_8027F504_00000D9C
lbl_fn_8027F504_00000D80:
    mr r3, r31
    bl fn_80281F88
    li r0, 0x0
    stw r0, 0x1524(r31)
    stw r0, 0x1544(r31)
    stw r0, 0x1500(r31)
    stw r0, 0x14fc(r31)
lbl_fn_8027F504_00000D9C:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8027F69C(void)
{
    nofralloc
    stwu r1, -0xf0(r1)
    mflr r0
    stw r0, 0xf4(r1)
    addi r11, r1, 0xd0
    stfd f31, 0xe0(r1)
    psq_st f31, 0xe8(r1), 0, 0
    stfd f30, 0xd0(r1)
    psq_st f30, 0xd8(r1), 0, 0
    bl _savegpr_19
    li r21, 0x0
    lis r25, lbl_807854E8@ha
    lis r27, lbl_80744E60@ha
    lfs f30, lbl_808839B4
    lfs f31, lbl_8088394C
    mr r19, r3
    mr r26, r21
    addi r25, r25, lbl_807854E8@l
    addi r23, r1, 0x28
    addi r24, r1, 0x34
    addi r22, r3, 0x528
    addi r27, r27, lbl_80744E60@l
    li r20, 0x0
    li r31, 0x0
    li r28, -0x1
    li r29, 0x1
    lis r30, lbl_807C7030@ha
lbl_fn_8027F69C_00000E18:
    lwzx r4, r25, r31
    addi r3, r19, 0xb0
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8027F69C_00000E38
    li r3, 0x0
    b lbl_fn_8027F69C_00000E44
lbl_fn_8027F69C_00000E38:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r19)
    add r3, r3, r0
lbl_fn_8027F69C_00000E44:
    lfs f0, 0x1c(r3)
    mr r5, r22
    lfs f3, 0xc(r3)
    mr r6, r24
    lfs f2, 0x2c(r3)
    addi r4, r1, 0x40
    stfs f3, 0x28(r1)
    lis r7, 0x8000
    frsp f4, f2
    lwz r3, lbl_8087EE98
    stfs f0, 0x2c(r1)
    li r8, 0x0
    li r9, 0x0
    psq_l f1, 0x0(r23), 0, 0
    psq_st f1, 0x0(r24), 0, 0
    stfs f2, 0x3c(r1)
    lfs f0, 0x34(r1)
    lfs f7, 0x0(r22)
    lfs f3, 0x38(r1)
    fsubs f0, f0, f7
    stfs f2, 0x30(r1)
    stfs f0, 0x34(r1)
    fmuls f0, f0, f30
    lfs f6, 0x4(r22)
    fsubs f5, f3, f6
    fadds f3, f0, f7
    stfs f5, 0x38(r1)
    fadds f0, f5, f6
    lfs f5, 0x8(r22)
    fsubs f4, f4, f5
    stfs f0, 0x38(r1)
    stfs f3, 0x34(r1)
    fmuls f0, f4, f30
    fadds f0, f0, f5
    stfs f0, 0x3c(r1)
    lfs f0, 0x52c(r19)
    stfs f0, 0x38(r1)
    stw r26, 0x74(r1)
    stw r26, 0x78(r1)
    stw r26, 0x7c(r1)
    stw r26, 0x80(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_8027F69C_00000F84
    cmpwi r21, 0x0
    bne lbl_fn_8027F69C_00000F38
    lwz r3, lbl_80883940
    bl fn_800C3118
    cmpwi r3, 0x0
    beq lbl_fn_8027F69C_00000F38
    lwz r4, 0x8(r27)
    addi r3, r1, 0x10
    lfs f1, lbl_8088394C
    addi r5, r1, 0x50
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    li r21, 0x1
lbl_fn_8027F69C_00000F38:
    li r3, 0x0
    li r4, 0x0
    bl fn_80232B7C
    stfs f31, 0x18(r1)
    fmr f1, f31
    addi r4, r19, 0x1580
    addi r7, r1, 0x50
    stfs f31, 0x1c(r1)
    addi r8, r30, lbl_807C7030@l
    addi r9, r1, 0x18
    stfs f31, 0x20(r1)
    li r5, 0x0
    li r6, 0x0
    li r10, -0x1
    stfs f31, 0x24(r1)
    stw r28, 0x8(r1)
    stw r29, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
lbl_fn_8027F69C_00000F84:
    addi r20, r20, 0x1
    addi r31, r31, 0x4
    cmpwi r20, 0x6
    blt lbl_fn_8027F69C_00000E18
    addi r11, r1, 0xd0
    psq_l f31, 0xe8(r1), 0, 0
    lfd f31, 0xe0(r1)
    psq_l f30, 0xd8(r1), 0, 0
    lfd f30, 0xd0(r1)
    bl _restgpr_19
    lwz r0, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0xf0
    blr
}

asm void fn_8027F8A8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    psq_st f31, 0x18(r1), 0, 0
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r4, 0x1520(r3)
    cmpwi r4, 0x0
    bge lbl_fn_8027F8A8_00001048
    lfs f31, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_8027F8A8_00001170
    lfs f0, lbl_8088394C
    li r3, 0x0
    li r0, 0x1
    stw r3, 0x1520(r30)
    lfs f1, lbl_80883948
    addi r3, r30, 0xb0
    stw r0, 0x3fc(r30)
    li r4, 0x0
    lfs f2, lbl_80883988
    li r5, 0x14c
    stfs f0, 0x2fc(r30)
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r30)
    bl fn_80097C08
    b lbl_fn_8027F8A8_00001170
lbl_fn_8027F8A8_00001048:
    cmpwi r4, 0x1e
    bge lbl_fn_8027F8A8_0000105C
    addi r0, r4, 0x1
    stw r0, 0x1520(r3)
    b lbl_fn_8027F8A8_00001170
lbl_fn_8027F8A8_0000105C:
    lwz r0, 0x1528(r3)
    cmpwi r0, 0x5
    beq lbl_fn_8027F8A8_00001074
    cmpwi r0, 0x6
    beq lbl_fn_8027F8A8_00001080
    b lbl_fn_8027F8A8_00001118
lbl_fn_8027F8A8_00001074:
    lwz r4, 0x14ec(r3)
    bl fn_80281924
    b lbl_fn_8027F8A8_00001160
lbl_fn_8027F8A8_00001080:
    lwz r0, 0x14b8(r3)
    lwz r31, 0x14bc(r3)
    cmpwi r0, 0x0
    ble lbl_fn_8027F8A8_00001160
    li r0, 0x0
    stw r0, 0x14d8(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    li r0, 0x6
    mr r3, r30
    li r4, 0x6
    stw r0, 0x58c(r30)
    bl fn_8016E970
    li r0, 0x4
    stw r0, 0x560(r30)
    mr r3, r30
    mr r4, r31
    stw r31, 0x1504(r30)
    li r5, 0x2
    bl fn_8017039C
    lfs f3, lbl_8088394C
    li r0, 0x1
    lfs f0, lbl_808839AC
    addi r3, r30, 0xb0
    stw r0, 0x151c(r30)
    li r4, 0x0
    lfs f1, lbl_80883948
    li r5, 0x14
    stw r0, 0x3fc(r30)
    li r6, 0x1
    lfs f2, lbl_80883988
    li r7, 0x1
    stfs f3, 0x2fc(r30)
    li r8, 0x1
    stfs f0, 0x2e8(r30)
    bl fn_80097C08
    b lbl_fn_8027F8A8_00001160
lbl_fn_8027F8A8_00001118:
    li r31, 0x0
    stw r31, 0x14d8(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    mr r3, r30
    li r4, 0x3
    stw r31, 0x58c(r30)
    bl fn_8016E970
    addi r3, r30, 0x15a8
    li r4, 0xf
    li r5, 0x0
    bl fn_800CB5C8
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0xc8
    li r6, 0x0
    bl fn_80239DAC
lbl_fn_8027F8A8_00001160:
    li r3, 0x0
    li r0, -0x1
    stw r3, 0x1528(r30)
    stw r0, 0x1520(r30)
lbl_fn_8027F8A8_00001170:
    lwz r0, 0x24(r1)
    psq_l f31, 0x18(r1), 0, 0
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8027FA7C(void)
{
    nofralloc
    stwu r1, -0x1a0(r1)
    mflr r0
    stw r0, 0x1a4(r1)
    stfd f31, 0x190(r1)
    psq_st f31, 0x198(r1), 0, 0
    stfd f30, 0x180(r1)
    psq_st f30, 0x188(r1), 0, 0
    stw r31, 0x17c(r1)
    mr r31, r3
    stw r30, 0x178(r1)
    stw r29, 0x174(r1)
    stw r28, 0x170(r1)
    lwz r0, 0x1530(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8027FA7C_000011E0
    cmpwi r0, 0x1
    beq lbl_fn_8027FA7C_000012E0
    cmpwi r0, 0x2
    beq lbl_fn_8027FA7C_00001398
    b lbl_fn_8027FA7C_00001868
lbl_fn_8027FA7C_000011E0:
    lfs f30, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f30, f1
    cror eq, gt, eq
    bne lbl_fn_8027FA7C_00001868
    li r30, 0x1
    stw r30, 0x1530(r31)
    mr r3, r31
    li r4, 0x64
    bl fn_80232B7C
    lfs f0, lbl_80883948
    li r0, -0x1
    lfs f1, lbl_8088394C
    addi r4, r31, 0x1574
    stfs f0, 0x9c(r1)
    addi r5, r31, 0xb0
    addi r7, r1, 0x90
    addi r8, r1, 0x9c
    stfs f0, 0xa0(r1)
    addi r9, r1, 0xa8
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0xa4(r1)
    stfs f0, 0x90(r1)
    stfs f0, 0x94(r1)
    stfs f0, 0x98(r1)
    stfs f1, 0xa8(r1)
    stfs f1, 0xac(r1)
    stfs f1, 0xb0(r1)
    stfs f1, 0xb4(r1)
    stw r0, 0x8(r1)
    stw r30, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lis r3, lbl_80744E60@ha
    lfs f1, lbl_8088394C
    lwz r4, lbl_80744E60@l(r3)
    addi r3, r1, 0x14
    addi r5, r31, 0x528
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r31, 0x15a8
    addi r4, r1, 0x14
    bl fn_800CB440
    addi r3, r1, 0x14
    li r4, -0x1
    bl fn_800CB3A0
    lfs f0, lbl_8088394C
    addi r3, r31, 0xb0
    stw r30, 0x3fc(r31)
    li r4, 0x0
    lfs f1, lbl_80883948
    li r5, 0x143
    stfs f0, 0x2fc(r31)
    li r6, 0x1
    lfs f2, lbl_80883988
    li r7, 0x0
    stfs f0, 0x2e8(r31)
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_8027FA7C_00001868
lbl_fn_8027FA7C_000012E0:
    lwz r4, 0x1520(r3)
    lwz r0, 0x1534(r3)
    addi r4, r4, 0x1
    stw r4, 0x1520(r3)
    cmpw r4, r0
    blt lbl_fn_8027FA7C_00001868
    li r4, 0x2
    li r0, 0x0
    stw r4, 0x1530(r3)
    mr r4, r31
    li r5, 0x64
    li r6, 0x1
    stw r0, 0x1520(r3)
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    addi r3, r31, 0x15a8
    li r4, 0x0
    li r5, 0x0
    bl fn_800CB5C8
    lis r4, lbl_80744E60@ha
    lfs f1, lbl_8088394C
    addi r4, r4, lbl_80744E60@l
    addi r3, r1, 0x10
    lwz r4, 0x4(r4)
    addi r5, r31, 0x528
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    lfs f0, lbl_8088394C
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80883948
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x144
    lfs f2, lbl_80883988
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_8027FA7C_00001868
lbl_fn_8027FA7C_00001398:
    lfs f3, 0x2e4(r3)
    lfs f0, lbl_80883974
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_8027FA7C_00001470
    lfs f0, lbl_808839B8
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_8027FA7C_00001470
    lis r4, lbl_80744EFC@ha
    addi r28, r3, 0xb0
    addi r4, r4, lbl_80744EFC@l
    li r5, 0x0
    mr r3, r28
    addi r4, r4, 0x185
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8027FA7C_000013E8
    li r5, 0x0
    b lbl_fn_8027FA7C_000013F4
lbl_fn_8027FA7C_000013E8:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r28)
    add r5, r3, r0
lbl_fn_8027FA7C_000013F4:
    lfs f4, 0x2c(r5)
    addi r3, r1, 0x140
    lfs f5, 0x1c(r5)
    li r4, 0x79
    lfs f6, 0xc(r5)
    lfs f3, lbl_80883948
    lfs f0, lbl_8088394C
    stfs f6, 0xc4(r1)
    stfs f5, 0xc8(r1)
    stfs f4, 0xcc(r1)
    stfs f3, 0xb8(r1)
    stfs f3, 0xbc(r1)
    stfs f0, 0xc0(r1)
    lfs f1, 0x538(r31)
    bl fn_805F8E70
    addi r4, r1, 0xb8
    addi r3, r1, 0x140
    mr r5, r4
    bl fn_805F93C0
    lwz r3, lbl_8087F048
    mr r4, r31
    lwz r5, 0x1518(r31)
    addi r6, r1, 0xc4
    lfs f1, lbl_80883948
    addi r7, r1, 0xb8
    lfs f2, lbl_8088394C
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_800F8574
    b lbl_fn_8027FA7C_00001868
lbl_fn_8027FA7C_00001470:
    lfs f3, 0x2e4(r3)
    lfs f0, lbl_808839BC
    fcmpo cr0, f0, f3
    bge lbl_fn_8027FA7C_000014AC
    lfs f0, lbl_808839C0
    fcmpo cr0, f3, f0
    bge lbl_fn_8027FA7C_000014AC
    lwz r4, 0x1520(r3)
    addi r0, r4, 0x1
    stw r0, 0x1520(r3)
    cmpwi r0, 0xf
    bge lbl_fn_8027FA7C_00001868
    lfs f0, lbl_80883968
    stfs f0, 0x2e4(r3)
    b lbl_fn_8027FA7C_00001868
lbl_fn_8027FA7C_000014AC:
    lfs f30, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f30, f1
    cror eq, gt, eq
    bne lbl_fn_8027FA7C_00001868
    lwz r4, 0x14e4(r31)
    lwz r3, 0x152c(r31)
    cmpwi r4, 0x0
    addi r0, r3, 0x1
    stw r0, 0x152c(r31)
    bne lbl_fn_8027FA7C_00001780
    cmpwi r0, 0x2
    blt lbl_fn_8027FA7C_00001780
    li r0, 0x0
    stw r0, 0x14d8(r31)
    lwz r30, 0x14ec(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0x4
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    li r3, 0x6
    li r0, -0x1
    stw r3, 0x1528(r31)
    addi r28, r1, 0x30
    addi r6, r1, 0x18
    lfs f0, 0x530(r31)
    stw r0, 0x1520(r31)
    addi r5, r1, 0x3c
    lfs f4, 0x52c(r31)
    mr r3, r28
    lfs f2, 0x530(r30)
    mr r4, r28
    psq_l f1, 0x528(r30), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    fsubs f6, f2, f0
    lfs f0, 0x528(r31)
    lfs f5, 0x1c(r1)
    lfs f3, 0x18(r1)
    fsubs f4, f5, f4
    stfs f2, 0x20(r1)
    fsubs f0, f3, f0
    fmr f2, f6
    stfs f4, 0x40(r1)
    stfs f0, 0x3c(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f6, 0x44(r1)
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x38(r1)
    bl fn_805F98D0
    lfs f2, 0x38(r1)
    addi r29, r1, 0x24
    psq_l f1, 0x0(r28), 0, 0
    fabs f3, f2
    lfs f0, lbl_80883980
    psq_st f1, 0x0(r29), 0, 0
    frsp f3, f3
    stfs f2, 0x2c(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_8027FA7C_000015D4
    lfs f3, 0x24(r1)
    lfs f0, lbl_80883948
    fcmpo cr0, f3, f0
    ble lbl_fn_8027FA7C_000015C8
    lfs f0, lbl_808839A0
    b lbl_fn_8027FA7C_000015CC
lbl_fn_8027FA7C_000015C8:
    lfs f0, lbl_808839A4
lbl_fn_8027FA7C_000015CC:
    stfs f0, 0x4c(r1)
    b lbl_fn_8027FA7C_000015E8
lbl_fn_8027FA7C_000015D4:
    frsp f2, f2
    lfs f1, 0x24(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x4c(r1)
lbl_fn_8027FA7C_000015E8:
    lfs f0, 0x4c(r1)
    addi r3, r1, 0x110
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883948
    addi r4, r1, 0x54
    lfs f4, 0x118(r1)
    mr r5, r4
    lfs f5, 0x114(r1)
    addi r3, r1, 0xd0
    lfs f6, 0x110(r1)
    lfs f7, 0x128(r1)
    lfs f8, 0x124(r1)
    lfs f9, 0x120(r1)
    lfs f10, 0x138(r1)
    lfs f11, 0x134(r1)
    lfs f12, 0x130(r1)
    lfs f13, 0x13c(r1)
    lfs f31, 0x12c(r1)
    lfs f30, 0x11c(r1)
    lfs f0, lbl_8088394C
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x2c(r1)
    stfs f3, 0x100(r1)
    stfs f3, 0x104(r1)
    stfs f3, 0x108(r1)
    stfs f0, 0x10c(r1)
    stfs f6, 0x84(r1)
    stfs f5, 0x88(r1)
    stfs f4, 0x8c(r1)
    stfs f6, 0xd0(r1)
    stfs f5, 0xd4(r1)
    stfs f4, 0xd8(r1)
    stfs f9, 0x78(r1)
    stfs f8, 0x7c(r1)
    stfs f7, 0x80(r1)
    stfs f9, 0xe0(r1)
    stfs f8, 0xe4(r1)
    stfs f7, 0xe8(r1)
    stfs f12, 0x6c(r1)
    stfs f11, 0x70(r1)
    stfs f10, 0x74(r1)
    stfs f12, 0xf0(r1)
    stfs f11, 0xf4(r1)
    stfs f10, 0xf8(r1)
    stfs f30, 0x60(r1)
    stfs f31, 0x64(r1)
    stfs f13, 0x68(r1)
    stfs f30, 0xdc(r1)
    stfs f31, 0xec(r1)
    stfs f13, 0xfc(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x5c(r1)
    bl fn_805F9750
    lfs f2, 0x5c(r1)
    lfs f0, lbl_80883980
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8027FA7C_00001704
    lfs f3, 0x58(r1)
    lfs f0, lbl_80883948
    fcmpo cr0, f3, f0
    ble lbl_fn_8027FA7C_000016F4
    lfs f0, lbl_808839A0
    b lbl_fn_8027FA7C_000016F8
lbl_fn_8027FA7C_000016F4:
    lfs f0, lbl_808839A4
lbl_fn_8027FA7C_000016F8:
    fneg f0, f0
    stfs f0, 0x48(r1)
    b lbl_fn_8027FA7C_00001718
lbl_fn_8027FA7C_00001704:
    lfs f1, 0x58(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x48(r1)
lbl_fn_8027FA7C_00001718:
    lfs f3, lbl_80883948
    addi r3, r1, 0x48
    psq_l f1, 0x0(r3), 0, 0
    li r30, 0x1
    fmr f2, f3
    lfs f0, lbl_8088394C
    psq_st f1, 0x0(r29), 0, 0
    addi r3, r31, 0xb0
    li r4, 0x0
    li r5, 0x14b
    stfs f2, 0x2c(r1)
    frsp f2, f2
    li r6, 0x0
    li r7, 0x0
    psq_st f1, 0x534(r31), 0, 0
    fmr f1, f3
    li r8, 0x1
    stfs f2, 0x53c(r31)
    lfs f2, lbl_80883988
    stfs f3, 0x50(r1)
    stw r30, 0x3fc(r31)
    stfs f0, 0x2fc(r31)
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    stw r30, 0x14e4(r31)
    b lbl_fn_8027FA7C_00001868
lbl_fn_8027FA7C_00001780:
    cmpwi r4, 0x1
    bne lbl_fn_8027FA7C_00001820
    lwz r28, 0x14ec(r31)
    cmpwi r28, 0x0
    beq lbl_fn_8027FA7C_00001868
    li r30, 0x0
    stw r30, 0x14d8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0x6
    mr r3, r31
    li r4, 0x6
    stw r0, 0x58c(r31)
    bl fn_8016E970
    li r0, 0x4
    stw r0, 0x560(r31)
    lfs f1, lbl_80883948
    mr r3, r31
    stw r30, 0x1504(r31)
    mr r4, r28
    li r5, 0x2
    bl fn_80170A20
    lfs f3, lbl_8088394C
    li r0, 0x1
    lfs f0, lbl_808839AC
    addi r3, r31, 0xb0
    stw r0, 0x151c(r31)
    li r4, 0x0
    lfs f1, lbl_80883948
    li r5, 0x14
    stw r0, 0x3fc(r31)
    li r6, 0x1
    lfs f2, lbl_80883988
    li r7, 0x1
    stfs f3, 0x2fc(r31)
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    b lbl_fn_8027FA7C_00001868
lbl_fn_8027FA7C_00001820:
    li r30, 0x0
    stw r30, 0x14d8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r3, r31
    li r4, 0x3
    stw r30, 0x58c(r31)
    bl fn_8016E970
    addi r3, r31, 0x15a8
    li r4, 0xf
    li r5, 0x0
    bl fn_800CB5C8
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0xc8
    li r6, 0x0
    bl fn_80239DAC
lbl_fn_8027FA7C_00001868:
    lwz r0, 0x1a4(r1)
    psq_l f31, 0x198(r1), 0, 0
    lfd f31, 0x190(r1)
    psq_l f30, 0x188(r1), 0, 0
    lfd f30, 0x180(r1)
    lwz r31, 0x17c(r1)
    lwz r30, 0x178(r1)
    lwz r29, 0x174(r1)
    lwz r28, 0x170(r1)
    mtlr r0
    addi r1, r1, 0x1a0
    blr
}
