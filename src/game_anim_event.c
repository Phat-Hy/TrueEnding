#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_19(void);
extern void _restgpr_27(void);
extern void _savegpr_19(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_800844D8(void);
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_80097CCC(void);
extern void fn_80097D7C(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800DD3FC(void);
extern void fn_800EB7A0(void);
extern void fn_800EE360(void);
extern void fn_800F8C6C(void);
extern void fn_80109828(void);
extern void fn_80126214(void);
extern void fn_8013A258(void);
extern void fn_8013CB68(void);
extern void fn_801426A4(void);
extern void fn_8015C0C0(void);
extern void fn_8015C6A0(void);
extern void fn_8015EFAC(void);
extern void fn_8016E970(void);
extern void fn_80170A20(void);
extern void fn_801765D8(void);
extern void fn_80176ACC(void);
extern void fn_80219E6C(void);
extern void fn_80232B7C(void);
extern void fn_8023A680(void);
extern void fn_8023A8B4(void);
extern void fn_8027819C(void);
extern void fn_80278634(void);
extern void fn_802790A0(void);
extern void fn_80370AE4(void);
extern void fn_805F8E70(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9940(void);
extern void fn_80680770(void);
extern void fn_80686EA4(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);
extern void fn_8068B100(void);

/* External data declarations */
extern u8 lbl_80744A08[];
extern u8 lbl_80744AA4[];
extern u8 lbl_80775A88[];

/* Small data declarations */
extern u32 lbl_8087F048;
extern u32 lbl_8087F1E4;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F8A0;
extern u32 lbl_808813D0;
extern u32 lbl_80883820;
extern u32 lbl_80883828;
extern u32 lbl_80883830;
extern u32 lbl_80883838;
extern u32 lbl_80883848;
extern u32 lbl_80883860;
extern u32 lbl_80883864;
extern u32 lbl_80883868;
extern u32 lbl_8088386C;
extern u32 lbl_80883870;
extern u32 lbl_80883874;
extern u32 lbl_80883878;
extern u32 lbl_8088387C;
extern u32 lbl_80883880;
extern u32 lbl_80883884;
extern u32 lbl_80883888;
extern u32 lbl_8088388C;
extern u32 lbl_80883890;
extern u32 lbl_80883894;
extern u32 lbl_80883898;

/* Function declarations */
void fn_802747D0(void);
void fn_80274CFC(void);
void fn_80274E7C(void);
void fn_80274F54(void);
void fn_80275094(void);
void fn_80275160(void);
void fn_80275228(void);
void fn_80275AFC(void);
void fn_8027606C(void);

asm void fn_802747D0(void)
{
    nofralloc
    stwu r1, -0x220(r1)
    mflr r0
    lfs f3, lbl_80883820
    stw r0, 0x224(r1)
    addi r4, r1, 0xc8
    stfd f31, 0x210(r1)
    psq_st f31, 0x218(r1), 0, 0
    stfd f30, 0x200(r1)
    psq_st f30, 0x208(r1), 0, 0
    lfs f30, lbl_80883860
    stfd f29, 0x1f0(r1)
    psq_st f29, 0x1f8(r1), 0, 0
    stfd f28, 0x1e0(r1)
    psq_st f28, 0x1e8(r1), 0, 0
    stfd f27, 0x1d0(r1)
    psq_st f27, 0x1d8(r1), 0, 0
    stw r31, 0x1cc(r1)
    stw r30, 0x1c8(r1)
    stw r29, 0x1c4(r1)
    mr r29, r3
    psq_l f1, 0x534(r3), 0, 0
    lfs f2, 0x53c(r3)
    stfs f2, 0xd0(r1)
    psq_st f1, 0x0(r4), 0, 0
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x7
    bne lbl_fn_802747D0_000004C4
    addi r3, r3, 0x1030
    bl fn_80126214
    addi r4, r29, 0x1088
    addi r31, r1, 0xbc
    psq_l f1, 0x0(r4), 0, 0
    mr r3, r31
    lfs f2, 0x1090(r29)
    stfs f2, 0xc4(r1)
    psq_st f1, 0x0(r31), 0, 0
    bl fn_805F9940
    lfs f0, lbl_80883864
    fmr f31, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_802747D0_0000027C
    addi r30, r1, 0xa4
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0xc4(r1)
    mr r3, r30
    psq_st f1, 0x0(r30), 0, 0
    mr r4, r30
    stfs f2, 0xac(r1)
    bl fn_805F98D0
    lfs f2, 0xac(r1)
    addi r31, r1, 0xb0
    psq_l f1, 0x0(r30), 0, 0
    fabs f3, f2
    lfs f0, lbl_80883838
    psq_st f1, 0x0(r31), 0, 0
    frsp f3, f3
    stfs f2, 0xb8(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_802747D0_00000110
    lfs f3, 0xb0(r1)
    lfs f0, lbl_80883820
    fcmpo cr0, f3, f0
    ble lbl_fn_802747D0_00000104
    lfs f0, lbl_80883868
    b lbl_fn_802747D0_00000108
lbl_fn_802747D0_00000104:
    lfs f0, lbl_8088386C
lbl_fn_802747D0_00000108:
    stfs f0, 0x90(r1)
    b lbl_fn_802747D0_00000124
lbl_fn_802747D0_00000110:
    frsp f2, f2
    lfs f1, 0xb0(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x90(r1)
lbl_fn_802747D0_00000124:
    lfs f0, 0x90(r1)
    addi r3, r1, 0x148
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883820
    addi r4, r1, 0x80
    lfs f28, 0x150(r1)
    mr r5, r4
    lfs f29, 0x14c(r1)
    addi r3, r1, 0x178
    lfs f13, 0x148(r1)
    lfs f12, 0x160(r1)
    lfs f11, 0x15c(r1)
    lfs f10, 0x158(r1)
    lfs f9, 0x170(r1)
    lfs f8, 0x16c(r1)
    lfs f7, 0x168(r1)
    lfs f6, 0x174(r1)
    lfs f5, 0x164(r1)
    lfs f4, 0x154(r1)
    lfs f0, lbl_80883830
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0xb8(r1)
    stfs f3, 0x1a8(r1)
    stfs f3, 0x1ac(r1)
    stfs f3, 0x1b0(r1)
    stfs f0, 0x1b4(r1)
    stfs f13, 0x50(r1)
    stfs f29, 0x54(r1)
    stfs f28, 0x58(r1)
    stfs f13, 0x178(r1)
    stfs f29, 0x17c(r1)
    stfs f28, 0x180(r1)
    stfs f10, 0x5c(r1)
    stfs f11, 0x60(r1)
    stfs f12, 0x64(r1)
    stfs f10, 0x188(r1)
    stfs f11, 0x18c(r1)
    stfs f12, 0x190(r1)
    stfs f7, 0x68(r1)
    stfs f8, 0x6c(r1)
    stfs f9, 0x70(r1)
    stfs f7, 0x198(r1)
    stfs f8, 0x19c(r1)
    stfs f9, 0x1a0(r1)
    stfs f4, 0x74(r1)
    stfs f5, 0x78(r1)
    stfs f6, 0x7c(r1)
    stfs f4, 0x184(r1)
    stfs f5, 0x194(r1)
    stfs f6, 0x1a4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x88(r1)
    bl fn_805F9750
    lfs f2, 0x88(r1)
    lfs f0, lbl_80883838
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802747D0_00000240
    lfs f3, 0x84(r1)
    lfs f0, lbl_80883820
    fcmpo cr0, f3, f0
    ble lbl_fn_802747D0_00000230
    lfs f0, lbl_80883868
    b lbl_fn_802747D0_00000234
lbl_fn_802747D0_00000230:
    lfs f0, lbl_8088386C
lbl_fn_802747D0_00000234:
    fneg f0, f0
    stfs f0, 0x8c(r1)
    b lbl_fn_802747D0_00000254
lbl_fn_802747D0_00000240:
    lfs f1, 0x84(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x8c(r1)
lbl_fn_802747D0_00000254:
    lfs f2, lbl_80883820
    addi r3, r1, 0x8c
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0xc8
    stfs f2, 0x94(r1)
    stfs f2, 0xb8(r1)
    frsp f2, f2
    psq_st f1, 0x0(r31), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0xd0(r1)
lbl_fn_802747D0_0000027C:
    lwz r5, 0x14d4(r29)
    addi r30, r1, 0xbc
    lfs f4, 0x52c(r29)
    addi r4, r1, 0x98
    lfs f5, 0x52c(r5)
    mr r3, r30
    lfs f3, 0x528(r5)
    fsubs f5, f5, f4
    lfs f0, 0x528(r29)
    lfs f4, 0x530(r5)
    fsubs f3, f3, f0
    stfs f5, 0x9c(r1)
    lfs f0, 0x530(r29)
    stfs f3, 0x98(r1)
    fsubs f2, f4, f0
    lfs f0, lbl_80883820
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0xa0(r1)
    stfs f2, 0xc4(r1)
    stfs f0, 0xc0(r1)
    bl fn_805F9940
    fmr f29, f1
    mr r3, r30
    mr r4, r30
    bl fn_805F98D0
    lfs f2, 0xc4(r1)
    lfs f0, lbl_80883838
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802747D0_00000320
    lfs f3, 0xbc(r1)
    lfs f0, lbl_80883820
    fcmpo cr0, f3, f0
    ble lbl_fn_802747D0_00000314
    lfs f0, lbl_80883868
    b lbl_fn_802747D0_00000318
lbl_fn_802747D0_00000314:
    lfs f0, lbl_8088386C
lbl_fn_802747D0_00000318:
    stfs f0, 0xc(r1)
    b lbl_fn_802747D0_00000330
lbl_fn_802747D0_00000320:
    lfs f1, 0xbc(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0xc(r1)
lbl_fn_802747D0_00000330:
    lfs f0, 0xc(r1)
    addi r3, r1, 0x118
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883820
    addi r4, r1, 0x14
    lfs f4, 0x120(r1)
    mr r5, r4
    lfs f5, 0x11c(r1)
    addi r3, r1, 0xd8
    lfs f6, 0x118(r1)
    lfs f7, 0x130(r1)
    lfs f8, 0x12c(r1)
    lfs f9, 0x128(r1)
    lfs f10, 0x140(r1)
    lfs f11, 0x13c(r1)
    lfs f12, 0x138(r1)
    lfs f13, 0x144(r1)
    lfs f28, 0x134(r1)
    lfs f27, 0x124(r1)
    lfs f0, lbl_80883830
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0xc4(r1)
    stfs f3, 0x108(r1)
    stfs f3, 0x10c(r1)
    stfs f3, 0x110(r1)
    stfs f0, 0x114(r1)
    stfs f6, 0x44(r1)
    stfs f5, 0x48(r1)
    stfs f4, 0x4c(r1)
    stfs f6, 0xd8(r1)
    stfs f5, 0xdc(r1)
    stfs f4, 0xe0(r1)
    stfs f9, 0x38(r1)
    stfs f8, 0x3c(r1)
    stfs f7, 0x40(r1)
    stfs f9, 0xe8(r1)
    stfs f8, 0xec(r1)
    stfs f7, 0xf0(r1)
    stfs f12, 0x2c(r1)
    stfs f11, 0x30(r1)
    stfs f10, 0x34(r1)
    stfs f12, 0xf8(r1)
    stfs f11, 0xfc(r1)
    stfs f10, 0x100(r1)
    stfs f27, 0x20(r1)
    stfs f28, 0x24(r1)
    stfs f13, 0x28(r1)
    stfs f27, 0xe4(r1)
    stfs f28, 0xf4(r1)
    stfs f13, 0x104(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x1c(r1)
    bl fn_805F9750
    lfs f2, 0x1c(r1)
    lfs f0, lbl_80883838
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802747D0_0000044C
    lfs f3, 0x18(r1)
    lfs f0, lbl_80883820
    fcmpo cr0, f3, f0
    ble lbl_fn_802747D0_0000043C
    lfs f0, lbl_80883868
    b lbl_fn_802747D0_00000440
lbl_fn_802747D0_0000043C:
    lfs f0, lbl_8088386C
lbl_fn_802747D0_00000440:
    fneg f0, f0
    stfs f0, 0x8(r1)
    b lbl_fn_802747D0_00000460
lbl_fn_802747D0_0000044C:
    lfs f1, 0x18(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x8(r1)
lbl_fn_802747D0_00000460:
    addi r3, r1, 0x8
    lfs f2, lbl_80883820
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0xc4(r1)
    lfs f0, 0xc0(r1)
    lwz r0, 0x14f8(r29)
    stfs f2, 0x10(r1)
    cmpwi r0, 0x0
    stfs f0, 0x538(r29)
    beq lbl_fn_802747D0_00000498
    lfs f0, lbl_80883870
    fmuls f30, f30, f0
    b lbl_fn_802747D0_000004A8
lbl_fn_802747D0_00000498:
    lfs f0, 0x1510(r29)
    fcmpo cr0, f29, f0
    bge lbl_fn_802747D0_000004A8
    fmr f30, f2
lbl_fn_802747D0_000004A8:
    lfs f0, 0x568(r29)
    fmr f1, f31
    mr r3, r29
    addi r4, r1, 0xc8
    fmuls f2, f0, f30
    bl fn_801426A4
    b lbl_fn_802747D0_000004E8
lbl_fn_802747D0_000004C4:
    cmpwi r0, 0x6
    bne lbl_fn_802747D0_000004D4
    bl fn_8013A258
    b lbl_fn_802747D0_000004E8
lbl_fn_802747D0_000004D4:
    lfs f0, 0x568(r3)
    fmr f1, f3
    li r5, 0x0
    fmuls f2, f0, f30
    bl fn_8013CB68
lbl_fn_802747D0_000004E8:
    lwz r0, 0x224(r1)
    psq_l f31, 0x218(r1), 0, 0
    lfd f31, 0x210(r1)
    psq_l f30, 0x208(r1), 0, 0
    lfd f30, 0x200(r1)
    psq_l f29, 0x1f8(r1), 0, 0
    lfd f29, 0x1f0(r1)
    psq_l f28, 0x1e8(r1), 0, 0
    lfd f28, 0x1e0(r1)
    psq_l f27, 0x1d8(r1), 0, 0
    lfd f27, 0x1d0(r1)
    lwz r31, 0x1cc(r1)
    lwz r30, 0x1c8(r1)
    lwz r29, 0x1c4(r1)
    mtlr r0
    addi r1, r1, 0x220
    blr
}

asm void fn_80274CFC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r0, 0x14d4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80274CFC_00000698
    lwz r0, 0x14fc(r3)
    cmpwi r0, 0x0
    ble lbl_fn_80274CFC_00000598
    subic. r0, r0, 0x1
    stw r0, 0x14fc(r3)
    bne lbl_fn_80274CFC_000005AC
    lwz r0, 0x14bc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80274CFC_00000584
    lwz r12, 0x0(r3)
    lwz r12, 0x15c(r12)
    mtctr r12
    bctrl
    b lbl_fn_80274CFC_00000698
lbl_fn_80274CFC_00000584:
    lwz r12, 0x0(r3)
    lwz r12, 0x158(r12)
    mtctr r12
    bctrl
    b lbl_fn_80274CFC_00000698
lbl_fn_80274CFC_00000598:
    bl fn_8027819C
    cmpwi r3, 0x0
    beq lbl_fn_80274CFC_000005AC
    lwz r0, 0x152c(r31)
    stw r0, 0x14fc(r31)
lbl_fn_80274CFC_000005AC:
    lwz r3, 0x14dc(r31)
    lwz r0, 0x1524(r31)
    cmpw r3, r0
    blt lbl_fn_80274CFC_00000698
    lwz r3, 0x14d4(r31)
    lfs f0, 0x530(r31)
    lfs f2, 0x530(r3)
    lfs f1, 0x528(r3)
    fsubs f3, f2, f0
    lfs f0, 0x528(r31)
    lfs f2, 0x52c(r3)
    fsubs f4, f1, f0
    lfs f1, 0x52c(r31)
    fmuls f0, f3, f3
    fsubs f2, f2, f1
    stfs f4, 0x8(r1)
    fmadds f1, f4, f4, f0
    stfs f2, 0xc(r1)
    stfs f3, 0x10(r1)
    bl fn_8068B100
    lwz r0, 0x14e0(r31)
    frsp f1, f1
    cmpwi r0, 0x0
    bgt lbl_fn_80274CFC_00000634
    lwz r0, 0x7e0(r31)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80274CFC_00000634
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x160(r12)
    mtctr r12
    bctrl
    b lbl_fn_80274CFC_00000698
lbl_fn_80274CFC_00000634:
    lfs f0, 0x1504(r31)
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_80274CFC_00000698
    lis r3, 0x6666
    lwz r4, 0x14e4(r31)
    addi r0, r3, 0x6667
    mulhw r0, r0, r4
    srawi r0, r0, 1
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r0, r0, 0x5
    subf. r0, r0, r4
    bne lbl_fn_80274CFC_00000684
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x13c(r12)
    mtctr r12
    bctrl
    b lbl_fn_80274CFC_00000698
lbl_fn_80274CFC_00000684:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x140(r12)
    mtctr r12
    bctrl
lbl_fn_80274CFC_00000698:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80274E7C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    beq lbl_fn_80274E7C_0000075C
    cmpwi r0, 0x7
    bne lbl_fn_80274E7C_00000718
    lwz r4, 0x14d4(r3)
    lwz r0, 0x1054(r3)
    cmplw r4, r0
    beq lbl_fn_80274E7C_0000075C
    lwz r12, 0x0(r3)
    li r4, 0x6
    lwz r12, 0x154(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_80274E7C_00000770
    li r0, 0x6
    stw r0, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    b lbl_fn_80274E7C_0000075C
lbl_fn_80274E7C_00000718:
    lwz r12, 0x0(r3)
    li r4, 0x6
    lwz r12, 0x154(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_80274E7C_00000770
    li r0, 0x6
    stw r0, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lwz r4, 0x14d4(r31)
    mr r3, r31
    lfs f1, lbl_80883874
    li r5, 0x0
    bl fn_80170A20
lbl_fn_80274E7C_0000075C:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0xfc(r12)
    mtctr r12
    bctrl
lbl_fn_80274E7C_00000770:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80274F54(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x20
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    bl _savegpr_27
    lfs f31, 0x2e4(r3)
    mr r27, r3
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_80274F54_0000089C
    lwz r3, 0x1434(r27)
    lwz r4, 0x12a4(r27)
    lwz r0, 0x5c0(r27)
    cmpwi r3, 0x0
    oris r4, r4, 0x200
    stw r4, 0x12a4(r27)
    clrrwi r0, r0, 1
    stw r0, 0x5c0(r27)
    ble lbl_fn_80274F54_000007F0
    subi r0, r3, 0x1
    stw r0, 0x1434(r27)
    b lbl_fn_80274F54_000008A4
lbl_fn_80274F54_000007F0:
    li r29, 0x0
    li r31, 0x0
    mr r30, r29
    b lbl_fn_80274F54_00000868
lbl_fn_80274F54_00000800:
    lwz r3, 0x1908(r27)
    lwzx r28, r3, r31
    mr r3, r28
    bl fn_80176ACC
    lfs f2, 0x530(r27)
    addi r3, r28, 0xb0
    psq_l f1, 0x528(r27), 0, 0
    li r4, 0x0
    psq_st f1, 0x528(r28), 0, 0
    li r5, 0x32
    lfs f1, lbl_80883830
    li r6, 0x1
    stfs f2, 0x530(r28)
    li r7, 0x0
    lfs f2, lbl_80883878
    li r8, 0x1
    stw r30, 0xf1c(r28)
    lwz r0, 0x12a8(r28)
    rlwinm r0, r0, 0, 23, 21
    stw r0, 0x12a8(r28)
    bl fn_80097C08
    mr r3, r28
    li r4, 0xa
    bl fn_8015EFAC
    addi r29, r29, 0x1
    addi r31, r31, 0x4
lbl_fn_80274F54_00000868:
    lwz r0, 0x190c(r27)
    cmplw r29, r0
    blt lbl_fn_80274F54_00000800
    lwz r0, 0x12a4(r27)
    mr r3, r27
    ori r0, r0, 0x8000
    stw r0, 0x12a4(r27)
    bl fn_801765D8
    mr r3, r27
    bl fn_800EE360
    mr r3, r27
    bl fn_800EB7A0
    b lbl_fn_80274F54_000008A4
lbl_fn_80274F54_0000089C:
    li r0, 0x5
    stw r0, 0x1434(r27)
lbl_fn_80274F54_000008A4:
    addi r11, r1, 0x20
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80275094(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    psq_st f31, 0x18(r1), 0, 0
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lfs f31, 0x2e4(r3)
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_80275094_00000918
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x138(r12)
    mtctr r12
    bctrl
    b lbl_fn_80275094_00000970
lbl_fn_80275094_00000918:
    lfs f1, 0x2e4(r30)
    lfs f0, lbl_8088387C
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_80275094_00000970
    lfs f0, lbl_80883880
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_80275094_00000970
    lwz r31, 0x590(r30)
    lwz r3, 0x1508(r30)
    bl fn_80219E6C
    mr r7, r3
    lwz r3, lbl_8087F048
    lfs f1, lbl_80883820
    mr r6, r30
    mr r8, r31
    li r4, 0x0
    li r5, 0x0
    li r9, 0x1e
    li r10, -0x1
    bl fn_800F8C6C
lbl_fn_80275094_00000970:
    lwz r0, 0x24(r1)
    psq_l f31, 0x18(r1), 0, 0
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80275160(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    psq_st f31, 0x18(r1), 0, 0
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lfs f31, 0x2e4(r3)
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_80275160_000009E0
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x138(r12)
    mtctr r12
    bctrl
lbl_fn_80275160_000009E0:
    lfs f1, 0x2e4(r30)
    lfs f0, lbl_80883884
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_80275160_00000A38
    lfs f0, lbl_8088387C
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_80275160_00000A38
    lwz r31, 0x590(r30)
    lwz r3, 0x150c(r30)
    bl fn_80219E6C
    mr r7, r3
    lwz r3, lbl_8087F048
    lfs f1, lbl_80883820
    mr r6, r30
    mr r8, r31
    li r4, 0x0
    li r5, 0x0
    li r9, 0x1e
    li r10, -0x1
    bl fn_800F8C6C
lbl_fn_80275160_00000A38:
    lwz r0, 0x24(r1)
    psq_l f31, 0x18(r1), 0, 0
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80275228(void)
{
    nofralloc
    stwu r1, -0x4a0(r1)
    mflr r0
    stw r0, 0x4a4(r1)
    addi r11, r1, 0x470
    stfd f31, 0x490(r1)
    psq_st f31, 0x498(r1), 0, 0
    stfd f30, 0x480(r1)
    psq_st f30, 0x488(r1), 0, 0
    stfd f29, 0x470(r1)
    psq_st f29, 0x478(r1), 0, 0
    bl _savegpr_19
    lwz r0, 0x14d8(r3)
    mr r22, r3
    cmpwi r0, 0x0
    bne lbl_fn_80275228_00000CF4
    lwz r4, 0x18e8(r3)
    lfs f0, 0x530(r3)
    lfs f3, 0x530(r4)
    lfs f5, 0x52c(r4)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r3)
    lfs f0, 0x528(r3)
    addi r3, r1, 0x14c
    lfs f3, 0x528(r4)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x150(r1)
    mr r4, r3
    stfs f0, 0x14c(r1)
    stfs f6, 0x154(r1)
    bl fn_805F98D0
    lfs f2, 0x154(r1)
    addi r3, r1, 0x14c
    lfs f0, lbl_80883838
    addi r21, r1, 0x140
    fabs f3, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r21), 0, 0
    frsp f3, f3
    stfs f2, 0x148(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_80275228_00000B24
    lfs f3, 0x140(r1)
    lfs f0, lbl_80883820
    fcmpo cr0, f3, f0
    ble lbl_fn_80275228_00000B18
    lfs f0, lbl_80883868
    b lbl_fn_80275228_00000B1C
lbl_fn_80275228_00000B18:
    lfs f0, lbl_8088386C
lbl_fn_80275228_00000B1C:
    stfs f0, 0x138(r1)
    b lbl_fn_80275228_00000B38
lbl_fn_80275228_00000B24:
    frsp f2, f2
    lfs f1, 0x140(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x138(r1)
lbl_fn_80275228_00000B38:
    lfs f0, 0x138(r1)
    addi r3, r1, 0x1c8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883820
    addi r4, r1, 0x128
    lfs f30, 0x1d0(r1)
    mr r5, r4
    lfs f29, 0x1cc(r1)
    addi r3, r1, 0x1f8
    lfs f13, 0x1c8(r1)
    lfs f12, 0x1e0(r1)
    lfs f11, 0x1dc(r1)
    lfs f10, 0x1d8(r1)
    lfs f9, 0x1f0(r1)
    lfs f8, 0x1ec(r1)
    lfs f7, 0x1e8(r1)
    lfs f6, 0x1f4(r1)
    lfs f5, 0x1e4(r1)
    lfs f4, 0x1d4(r1)
    lfs f0, lbl_80883830
    psq_l f1, 0x0(r21), 0, 0
    lfs f2, 0x148(r1)
    stfs f3, 0x228(r1)
    stfs f3, 0x22c(r1)
    stfs f3, 0x230(r1)
    stfs f0, 0x234(r1)
    stfs f13, 0xf8(r1)
    stfs f29, 0xfc(r1)
    stfs f30, 0x100(r1)
    stfs f13, 0x1f8(r1)
    stfs f29, 0x1fc(r1)
    stfs f30, 0x200(r1)
    stfs f10, 0x104(r1)
    stfs f11, 0x108(r1)
    stfs f12, 0x10c(r1)
    stfs f10, 0x208(r1)
    stfs f11, 0x20c(r1)
    stfs f12, 0x210(r1)
    stfs f7, 0x110(r1)
    stfs f8, 0x114(r1)
    stfs f9, 0x118(r1)
    stfs f7, 0x218(r1)
    stfs f8, 0x21c(r1)
    stfs f9, 0x220(r1)
    stfs f4, 0x11c(r1)
    stfs f5, 0x120(r1)
    stfs f6, 0x124(r1)
    stfs f4, 0x204(r1)
    stfs f5, 0x214(r1)
    stfs f6, 0x224(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x130(r1)
    bl fn_805F9750
    lfs f2, 0x130(r1)
    lfs f0, lbl_80883838
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80275228_00000C54
    lfs f3, 0x12c(r1)
    lfs f0, lbl_80883820
    fcmpo cr0, f3, f0
    ble lbl_fn_80275228_00000C44
    lfs f0, lbl_80883868
    b lbl_fn_80275228_00000C48
lbl_fn_80275228_00000C44:
    lfs f0, lbl_8088386C
lbl_fn_80275228_00000C48:
    fneg f0, f0
    stfs f0, 0x134(r1)
    b lbl_fn_80275228_00000C68
lbl_fn_80275228_00000C54:
    lfs f1, 0x12c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x134(r1)
lbl_fn_80275228_00000C68:
    lfs f0, lbl_80883820
    addi r3, r1, 0x134
    psq_l f1, 0x0(r3), 0, 0
    fmr f2, f0
    lwz r0, 0x14dc(r22)
    stfs f0, 0x13c(r1)
    cmpwi r0, 0x1e
    stfs f2, 0x148(r1)
    frsp f2, f2
    psq_st f1, 0x0(r21), 0, 0
    psq_st f1, 0x534(r22), 0, 0
    stfs f2, 0x53c(r22)
    ble lbl_fn_80275228_000012FC
    fmr f1, f0
    addi r3, r22, 0xb0
    li r4, 0x0
    bl fn_80097CCC
    lfs f0, lbl_80883830
    li r21, 0x1
    stw r21, 0x3fc(r22)
    addi r3, r22, 0xb0
    lfs f1, lbl_80883820
    li r4, 0x0
    stfs f0, 0x2fc(r22)
    li r5, 0x146
    lfs f2, lbl_80883878
    li r6, 0x0
    stfs f0, 0x2e8(r22)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    li r0, 0x0
    stw r0, 0x14dc(r22)
    stw r21, 0x14d8(r22)
    b lbl_fn_80275228_000012FC
lbl_fn_80275228_00000CF4:
    lfs f29, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f29, f1
    cror eq, gt, eq
    bne lbl_fn_80275228_00000DEC
    lwz r0, 0x153c(r22)
    cmpwi r0, 0x0
    beq lbl_fn_80275228_00000DB0
    lwz r0, 0x15c0(r22)
    addi r3, r1, 0x238
    stw r0, 0x18ec(r22)
    li r4, 0x0
    li r5, 0x200
    bl memset
    lwz r4, lbl_8087F1E4
    addi r3, r1, 0x238
    lwz r5, 0x18ec(r22)
    lwz r4, 0x2d4(r4)
    lwz r5, 0x60(r5)
    cmpwi r4, 0x0
    beq lbl_fn_80275228_00000D54
    b lbl_fn_80275228_00000D58
lbl_fn_80275228_00000D54:
    la r4, lbl_808813D0
lbl_fn_80275228_00000D58:
    lwz r5, 0x4(r5)
    crclr 6
    bl fn_800DD3FC
    lwz r3, lbl_8087F048
    addi r4, r1, 0x238
    bl fn_80109828
    lwz r5, 0x18ec(r22)
    li r4, 0x6e
    lwz r3, lbl_8087F430
    lwz r0, 0x48(r5)
    cmpwi r0, 0x0
    bne lbl_fn_80275228_00000D90
    li r5, 0xa
    b lbl_fn_80275228_00000D94
lbl_fn_80275228_00000D90:
    lwz r5, 0x58(r5)
lbl_fn_80275228_00000D94:
    bl fn_80370AE4
    lwz r12, 0x0(r22)
    mr r3, r22
    lwz r12, 0x148(r12)
    mtctr r12
    bctrl
    b lbl_fn_80275228_000012FC
lbl_fn_80275228_00000DB0:
    li r0, 0x258
    stw r0, 0x14e0(r22)
    li r21, 0x0
lbl_fn_80275228_00000DBC:
    mr r3, r22
    mr r4, r21
    bl fn_802790A0
    addi r21, r21, 0x1
    cmpwi r21, 0x4
    blt lbl_fn_80275228_00000DBC
    lwz r12, 0x0(r22)
    mr r3, r22
    lwz r12, 0x138(r12)
    mtctr r12
    bctrl
    b lbl_fn_80275228_000012FC
lbl_fn_80275228_00000DEC:
    lwz r0, 0x14dc(r22)
    cmpwi r0, 0xf
    bne lbl_fn_80275228_000012FC
    lwz r4, lbl_8087F8A0
    lis r3, lbl_80744AA4@ha
    lfs f30, lbl_80883830
    addi r29, r3, lbl_80744AA4@l
    lfs f31, lbl_80883820
    addi r26, r1, 0x40
    lfs f29, lbl_80883838
    addi r27, r1, 0x6c
    lwz r24, 0x48(r4)
    addi r28, r1, 0x60
    li r25, 0x1
    li r30, 0x1
    li r31, -0x1
    li r21, 0x0
    b lbl_fn_80275228_000012F4
lbl_fn_80275228_00000E34:
    lwz r0, 0x38(r24)
    rlwinm r3, r0, 0, 29, 29
    cmplwi r3, 0x4
    beq lbl_fn_80275228_000012F0
    li r4, 0x0
    mr r3, r4
    beq lbl_fn_80275228_00000E5C
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_80275228_00000E60
lbl_fn_80275228_00000E5C:
    li r3, 0x1
lbl_fn_80275228_00000E60:
    cmpwi r3, 0x0
    bne lbl_fn_80275228_00000EA4
    lwz r0, 0x7e0(r24)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_80275228_00000EA4
    lwz r0, 0x55c(r24)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_80275228_00000E98
    lwz r0, 0x560(r24)
    cmpwi r0, 0x1c
    bne lbl_fn_80275228_00000E98
    li r3, 0x1
lbl_fn_80275228_00000E98:
    cmpwi r3, 0x0
    bne lbl_fn_80275228_00000EA4
    li r4, 0x1
lbl_fn_80275228_00000EA4:
    cmpwi r4, 0x0
    bne lbl_fn_80275228_00000EB8
    lwz r0, 0x9f8(r24)
    cmpwi r0, 0x0
    ble lbl_fn_80275228_000012F0
lbl_fn_80275228_00000EB8:
    lwz r0, 0x18e8(r22)
    mr r23, r25
    li r6, 0x0
    cmplw r24, r0
    bne lbl_fn_80275228_00000ED4
    li r23, 0x0
    li r6, 0x1
lbl_fn_80275228_00000ED4:
    lwz r0, 0x7e0(r24)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_80275228_00001284
    mr r3, r22
    mr r4, r24
    mr r5, r23
    bl fn_80278634
    addi r20, r24, 0xb0
    addi r4, r29, 0x1ea
    mr r3, r20
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80275228_00000F18
    li r3, 0x0
    b lbl_fn_80275228_00000F24
lbl_fn_80275228_00000F18:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r20)
    add r3, r3, r0
lbl_fn_80275228_00000F24:
    mulli r20, r23, 0xec
    lfs f4, 0x2c(r3)
    lfs f3, 0x1c(r3)
    mr r4, r22
    lfs f0, 0xc(r3)
    add r19, r22, r20
    stfs f0, 0x156c(r19)
    stfs f3, 0x157c(r19)
    stfs f4, 0x158c(r19)
    stw r30, 0x153c(r19)
    stfs f0, 0x1c(r1)
    lwz r3, 0x15c0(r19)
    stfs f3, 0x20(r1)
    lwz r5, 0x1544(r19)
    stfs f4, 0x24(r1)
    bl fn_8015C0C0
    lfs f4, 0x158c(r19)
    addi r3, r1, 0x18
    lfs f3, 0x157c(r19)
    addi r4, r29, 0x1f0
    lfs f0, 0x156c(r19)
    addi r5, r1, 0x28
    stfs f0, 0x28(r1)
    li r6, 0x0
    lfs f1, lbl_80883830
    li r7, -0x1
    stfs f3, 0x2c(r1)
    stfs f4, 0x30(r1)
    bl fn_800C344C
    addi r3, r1, 0x18
    li r4, -0x1
    bl fn_800CB3A0
    li r3, 0x0
    li r4, 0x0
    bl fn_80232B7C
    mr r3, r19
    addi r3, r3, 0x1548
    lfs f2, 0x8(r3)
    psq_l f1, 0x0(r3), 0, 0
    fabs f0, f2
    psq_st f1, 0x0(r26), 0, 0
    stfs f2, 0x48(r1)
    frsp f0, f0
    fcmpo cr0, f0, f29
    bge lbl_fn_80275228_00000FF8
    lfs f0, 0x40(r1)
    fcmpo cr0, f0, f31
    ble lbl_fn_80275228_00000FEC
    lfs f0, lbl_80883868
    b lbl_fn_80275228_00000FF0
lbl_fn_80275228_00000FEC:
    lfs f0, lbl_8088386C
lbl_fn_80275228_00000FF0:
    stfs f0, 0x64(r1)
    b lbl_fn_80275228_0000100C
lbl_fn_80275228_00000FF8:
    frsp f2, f2
    lfs f1, 0x40(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x64(r1)
lbl_fn_80275228_0000100C:
    lfs f0, 0x64(r1)
    addi r3, r1, 0x198
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f0, 0x1a0(r1)
    mr r4, r27
    lfs f3, 0x19c(r1)
    mr r5, r27
    lfs f4, 0x198(r1)
    addi r3, r1, 0x158
    lfs f5, 0x1b0(r1)
    lfs f6, 0x1ac(r1)
    lfs f7, 0x1a8(r1)
    lfs f8, 0x1c0(r1)
    lfs f9, 0x1bc(r1)
    lfs f10, 0x1b8(r1)
    lfs f11, 0x1c4(r1)
    lfs f12, 0x1b4(r1)
    lfs f13, 0x1a4(r1)
    psq_l f1, 0x0(r26), 0, 0
    lfs f2, 0x48(r1)
    stfs f31, 0x188(r1)
    stfs f31, 0x18c(r1)
    stfs f31, 0x190(r1)
    stfs f30, 0x194(r1)
    stfs f4, 0x9c(r1)
    stfs f3, 0xa0(r1)
    stfs f0, 0xa4(r1)
    stfs f4, 0x158(r1)
    stfs f3, 0x15c(r1)
    stfs f0, 0x160(r1)
    stfs f7, 0x90(r1)
    stfs f6, 0x94(r1)
    stfs f5, 0x98(r1)
    stfs f7, 0x168(r1)
    stfs f6, 0x16c(r1)
    stfs f5, 0x170(r1)
    stfs f10, 0x84(r1)
    stfs f9, 0x88(r1)
    stfs f8, 0x8c(r1)
    stfs f10, 0x178(r1)
    stfs f9, 0x17c(r1)
    stfs f8, 0x180(r1)
    stfs f13, 0x78(r1)
    stfs f12, 0x7c(r1)
    stfs f11, 0x80(r1)
    stfs f13, 0x164(r1)
    stfs f12, 0x174(r1)
    stfs f11, 0x184(r1)
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0x74(r1)
    bl fn_805F9750
    lfs f2, 0x74(r1)
    fabs f0, f2
    frsp f0, f0
    fcmpo cr0, f0, f29
    bge lbl_fn_80275228_00001118
    lfs f0, 0x70(r1)
    fcmpo cr0, f0, f31
    ble lbl_fn_80275228_00001108
    lfs f0, lbl_80883868
    b lbl_fn_80275228_0000110C
lbl_fn_80275228_00001108:
    lfs f0, lbl_8088386C
lbl_fn_80275228_0000110C:
    fneg f0, f0
    stfs f0, 0x60(r1)
    b lbl_fn_80275228_0000112C
lbl_fn_80275228_00001118:
    lfs f1, 0x70(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x60(r1)
lbl_fn_80275228_0000112C:
    fmr f2, f31
    mulli r19, r23, 0xec
    psq_l f1, 0x0(r28), 0, 0
    addi r7, r1, 0x34
    psq_st f1, 0x0(r26), 0, 0
    fmr f1, f30
    add r20, r22, r19
    stfs f2, 0x48(r1)
    addi r4, r20, 0x15dc
    addi r8, r1, 0x40
    lfs f4, 0x158c(r20)
    addi r9, r1, 0x50
    lfs f3, 0x157c(r20)
    li r5, 0x0
    lfs f0, 0x156c(r20)
    li r6, 0x0
    stfs f0, 0x34(r1)
    li r10, -0x1
    stfs f3, 0x38(r1)
    stfs f4, 0x3c(r1)
    stfs f30, 0x50(r1)
    stfs f30, 0x54(r1)
    stfs f30, 0x58(r1)
    stfs f30, 0x5c(r1)
    stw r31, 0x8(r1)
    stw r30, 0xc(r1)
    stfs f31, 0x68(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    mr r3, r20
    li r4, 0x66
    addi r23, r3, 0x1538
    mr r3, r23
    bl fn_80232B7C
    lwz r5, 0x15c0(r20)
    mr r3, r20
    fmr f1, f30
    addi r4, r3, 0x1600
    stfs f31, 0xb8(r1)
    addi r5, r5, 0xb0
    addi r7, r1, 0xc4
    addi r8, r1, 0xb8
    stfs f31, 0xbc(r1)
    addi r9, r1, 0xa8
    li r6, 0x0
    li r10, -0x1
    stfs f31, 0xc0(r1)
    stfs f31, 0xc4(r1)
    stfs f31, 0xc8(r1)
    stfs f31, 0xcc(r1)
    stfs f30, 0xa8(r1)
    stfs f30, 0xac(r1)
    stfs f30, 0xb0(r1)
    stfs f30, 0xb4(r1)
    stw r31, 0x8(r1)
    stw r30, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    mr r3, r23
    li r4, 0x67
    bl fn_80232B7C
    lwz r5, 0x15c0(r20)
    mr r3, r20
    fmr f1, f30
    addi r4, r3, 0x160c
    stfs f31, 0xe0(r1)
    addi r5, r5, 0xb0
    addi r7, r1, 0xec
    addi r8, r1, 0xe0
    stfs f31, 0xe4(r1)
    addi r9, r1, 0xd0
    li r6, 0x0
    li r10, -0x1
    stfs f31, 0xe8(r1)
    stfs f31, 0xec(r1)
    stfs f31, 0xf0(r1)
    stfs f31, 0xf4(r1)
    stfs f30, 0xd0(r1)
    stfs f30, 0xd4(r1)
    stfs f30, 0xd8(r1)
    stfs f30, 0xdc(r1)
    stw r31, 0x8(r1)
    stw r30, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    b lbl_fn_80275228_000012E0
lbl_fn_80275228_00001284:
    mr r3, r22
    mr r4, r24
    mr r5, r23
    bl fn_80278634
    mulli r19, r23, 0xec
    li r4, 0x64
    add r3, r22, r19
    addi r3, r3, 0x1538
    bl fn_80232B7C
    stw r21, 0x8(r1)
    add r3, r22, r19
    lfs f1, lbl_80883830
    addi r4, r3, 0x15d0
    stw r31, 0xc(r1)
    addi r7, r3, 0x1560
    li r5, -0x1
    li r6, 0x5
    stw r30, 0x10(r1)
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    lwz r3, lbl_8087F3C0
    bl fn_8023A680
lbl_fn_80275228_000012E0:
    lwz r0, 0x18e8(r22)
    cmplw r24, r0
    beq lbl_fn_80275228_000012F0
    addi r25, r25, 0x1
lbl_fn_80275228_000012F0:
    lwz r24, 0x14ac(r24)
lbl_fn_80275228_000012F4:
    cmpwi r24, 0x0
    bne lbl_fn_80275228_00000E34
lbl_fn_80275228_000012FC:
    addi r11, r1, 0x470
    psq_l f31, 0x498(r1), 0, 0
    lfd f31, 0x490(r1)
    psq_l f30, 0x488(r1), 0, 0
    lfd f30, 0x480(r1)
    psq_l f29, 0x478(r1), 0, 0
    lfd f29, 0x470(r1)
    bl _restgpr_19
    lwz r0, 0x4a4(r1)
    mtlr r0
    addi r1, r1, 0x4a0
    blr
}

asm void fn_80275AFC(void)
{
    nofralloc
    stwu r1, -0x1a0(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x1a4(r1)
    stfd f31, 0x190(r1)
    psq_st f31, 0x198(r1), 0, 0
    stfd f30, 0x180(r1)
    psq_st f30, 0x188(r1), 0, 0
    stfd f29, 0x170(r1)
    psq_st f29, 0x178(r1), 0, 0
    stw r31, 0x16c(r1)
    mr r31, r3
    stw r30, 0x168(r1)
    lwz r5, 0x18ec(r3)
    lwz r0, 0x55c(r5)
    cmpwi r0, 0x6
    bne lbl_fn_80275AFC_0000181C
    lwz r0, 0x560(r5)
    cmpwi r0, 0x74
    bne lbl_fn_80275AFC_000015B4
    li r0, 0x0
    stw r0, 0x14dc(r3)
    lfs f4, lbl_80883820
    addi r4, r1, 0xec
    lfs f5, 0x530(r5)
    addi r30, r1, 0x98
    lfs f0, 0x530(r3)
    lfs f3, 0x528(r5)
    fsubs f2, f5, f0
    lfs f0, 0x528(r3)
    lfs f6, lbl_80883868
    fsubs f0, f3, f0
    lfs f3, 0x538(r5)
    frsp f5, f2
    fadds f31, f6, f3
    stfs f0, 0xec(r1)
    lfs f0, lbl_80883838
    fabs f3, f5
    stfs f4, 0xf0(r1)
    psq_l f1, 0x0(r4), 0, 0
    frsp f3, f3
    stfs f2, 0xf4(r1)
    psq_st f1, 0x0(r30), 0, 0
    fcmpo cr0, f3, f0
    stfs f2, 0xa0(r1)
    bge lbl_fn_80275AFC_00001400
    lfs f0, 0x98(r1)
    fcmpo cr0, f0, f4
    ble lbl_fn_80275AFC_000013F4
    b lbl_fn_80275AFC_000013F8
lbl_fn_80275AFC_000013F4:
    lfs f6, lbl_8088386C
lbl_fn_80275AFC_000013F8:
    stfs f6, 0x48(r1)
    b lbl_fn_80275AFC_00001414
lbl_fn_80275AFC_00001400:
    fmr f2, f5
    lfs f1, 0x98(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_80275AFC_00001414:
    lfs f0, 0x48(r1)
    addi r3, r1, 0xf8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883820
    addi r4, r1, 0x38
    lfs f29, 0x100(r1)
    mr r5, r4
    lfs f30, 0xfc(r1)
    addi r3, r1, 0x128
    lfs f13, 0xf8(r1)
    lfs f12, 0x110(r1)
    lfs f11, 0x10c(r1)
    lfs f10, 0x108(r1)
    lfs f9, 0x120(r1)
    lfs f8, 0x11c(r1)
    lfs f7, 0x118(r1)
    lfs f6, 0x124(r1)
    lfs f5, 0x114(r1)
    lfs f4, 0x104(r1)
    lfs f0, lbl_80883830
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0xa0(r1)
    stfs f3, 0x158(r1)
    stfs f3, 0x15c(r1)
    stfs f3, 0x160(r1)
    stfs f0, 0x164(r1)
    stfs f13, 0x8(r1)
    stfs f30, 0xc(r1)
    stfs f29, 0x10(r1)
    stfs f13, 0x128(r1)
    stfs f30, 0x12c(r1)
    stfs f29, 0x130(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0x138(r1)
    stfs f11, 0x13c(r1)
    stfs f12, 0x140(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0x148(r1)
    stfs f8, 0x14c(r1)
    stfs f9, 0x150(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0x134(r1)
    stfs f5, 0x144(r1)
    stfs f6, 0x154(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80883838
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80275AFC_00001530
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80883820
    fcmpo cr0, f3, f0
    ble lbl_fn_80275AFC_00001520
    lfs f0, lbl_80883868
    b lbl_fn_80275AFC_00001524
lbl_fn_80275AFC_00001520:
    lfs f0, lbl_8088386C
lbl_fn_80275AFC_00001524:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_80275AFC_00001544
lbl_fn_80275AFC_00001530:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_80275AFC_00001544:
    addi r3, r1, 0x44
    lfs f3, lbl_80883820
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_80744A08@ha
    psq_st f1, 0x0(r30), 0, 0
    fmr f2, f3
    lfs f0, 0x9c(r1)
    stfs f2, 0xa0(r1)
    fsubs f1, f0, f31
    lfd f2, lbl_80744A08@l(r3)
    stfs f3, 0x4c(r1)
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_80883848
    fcmpo cr0, f3, f0
    ble lbl_fn_80275AFC_0000158C
    lfs f0, lbl_80883888
    fsubs f3, f3, f0
lbl_fn_80275AFC_0000158C:
    lfs f0, lbl_8088388C
    fcmpo cr0, f3, f0
    bge lbl_fn_80275AFC_000015A0
    lfs f0, lbl_80883888
    fadds f3, f3, f0
lbl_fn_80275AFC_000015A0:
    lfs f0, lbl_80883890
    li r4, 0x1
    fdivs f0, f3, f0
    stfs f0, 0x18f8(r31)
    b lbl_fn_80275AFC_0000181C
lbl_fn_80275AFC_000015B4:
    cmpwi r0, 0x75
    bne lbl_fn_80275AFC_0000181C
    lfs f5, 0x530(r5)
    lfs f0, 0x530(r3)
    lfs f3, 0x528(r3)
    addi r3, r1, 0xe0
    lfs f4, 0x528(r5)
    fsubs f5, f5, f0
    lfs f0, lbl_80883820
    fsubs f3, f4, f3
    stfs f5, 0xe8(r1)
    stfs f3, 0xe0(r1)
    stfs f0, 0xe4(r1)
    bl fn_805F9940
    lwz r0, 0x14dc(r31)
    cmpwi r0, 0xa
    bgt lbl_fn_80275AFC_0000171C
    lfs f0, lbl_80883828
    addi r3, r1, 0xd4
    lwz r4, 0x18ec(r31)
    fsubs f29, f1, f0
    lfs f0, lbl_80883860
    psq_l f1, 0x528(r4), 0, 0
    lfs f2, 0x530(r4)
    fcmpo cr0, f29, f0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0xdc(r1)
    bge lbl_fn_80275AFC_00001628
    b lbl_fn_80275AFC_0000162C
lbl_fn_80275AFC_00001628:
    fmr f29, f0
lbl_fn_80275AFC_0000162C:
    lfs f0, lbl_80883894
    fcmpo cr0, f29, f0
    ble lbl_fn_80275AFC_0000163C
    b lbl_fn_80275AFC_00001640
lbl_fn_80275AFC_0000163C:
    fmr f29, f0
lbl_fn_80275AFC_00001640:
    lfs f0, 0xe8(r1)
    addi r3, r1, 0x8c
    lfs f3, 0xe4(r1)
    addi r5, r1, 0x80
    fneg f4, f0
    lfs f0, 0xe0(r1)
    fneg f3, f3
    mr r4, r3
    fneg f0, f0
    stfs f4, 0x88(r1)
    stfs f0, 0x80(r1)
    frsp f2, f4
    stfs f3, 0x84(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x94(r1)
    bl fn_805F98D0
    lfs f3, 0x90(r1)
    addi r3, r1, 0x74
    lfs f0, 0x8c(r1)
    addi r4, r1, 0xbc
    fmuls f5, f3, f29
    lfs f4, 0x94(r1)
    fmuls f6, f0, f29
    lfs f3, 0xd8(r1)
    lfs f0, 0xd4(r1)
    fmuls f4, f4, f29
    fadds f8, f5, f3
    lfs f3, 0xdc(r1)
    fadds f0, f6, f0
    lwz r5, 0x18ec(r31)
    fadds f7, f4, f3
    stfs f8, 0x78(r1)
    stfs f0, 0x74(r1)
    fmr f2, f7
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x528(r5), 0, 0
    stfs f2, 0x530(r5)
    lwz r3, 0x18ec(r31)
    lfs f0, 0x18f8(r31)
    psq_l f1, 0x534(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lfs f2, 0x53c(r3)
    lfs f3, 0xc0(r1)
    stfs f6, 0xc8(r1)
    fadds f0, f3, f0
    stfs f5, 0xcc(r1)
    stfs f0, 0xc0(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x534(r3), 0, 0
    stfs f4, 0xd0(r1)
    stfs f7, 0x7c(r1)
    stfs f2, 0xc4(r1)
    stfs f2, 0x53c(r3)
    b lbl_fn_80275AFC_00001818
lbl_fn_80275AFC_0000171C:
    lfs f0, lbl_80883898
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_80275AFC_00001744
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x14c(r12)
    mtctr r12
    bctrl
    b lbl_fn_80275AFC_0000186C
lbl_fn_80275AFC_00001744:
    lfs f0, lbl_80883828
    addi r3, r1, 0xb0
    lwz r4, 0x18ec(r31)
    fsubs f29, f1, f0
    lfs f0, 0x18fc(r31)
    psq_l f1, 0x528(r4), 0, 0
    lfs f2, 0x530(r4)
    fcmpo cr0, f29, f0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0xb8(r1)
    bge lbl_fn_80275AFC_00001774
    b lbl_fn_80275AFC_00001778
lbl_fn_80275AFC_00001774:
    fmr f29, f0
lbl_fn_80275AFC_00001778:
    lfs f0, 0xe8(r1)
    addi r3, r1, 0x68
    lfs f3, 0xe4(r1)
    addi r5, r1, 0x5c
    fneg f4, f0
    lfs f0, 0xe0(r1)
    fneg f3, f3
    mr r4, r3
    fneg f0, f0
    stfs f4, 0x64(r1)
    stfs f0, 0x5c(r1)
    frsp f2, f4
    stfs f3, 0x60(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x70(r1)
    bl fn_805F98D0
    lfs f3, 0x6c(r1)
    addi r3, r1, 0x50
    lfs f0, 0x68(r1)
    fmuls f5, f3, f29
    lfs f3, 0xb4(r1)
    fmuls f6, f0, f29
    lfs f0, 0xb0(r1)
    lfs f4, 0x70(r1)
    fadds f7, f5, f3
    fadds f0, f6, f0
    lfs f3, 0xb8(r1)
    fmuls f4, f4, f29
    stfs f7, 0x54(r1)
    lwz r4, 0x18ec(r31)
    stfs f0, 0x50(r1)
    fadds f2, f4, f3
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x528(r4), 0, 0
    stfs f6, 0xa4(r1)
    stfs f5, 0xa8(r1)
    stfs f4, 0xac(r1)
    stfs f2, 0x58(r1)
    stfs f2, 0x530(r4)
lbl_fn_80275AFC_00001818:
    li r4, 0x1
lbl_fn_80275AFC_0000181C:
    cmpwi r4, 0x0
    bne lbl_fn_80275AFC_0000186C
    lwz r3, 0x18ec(r31)
    bl fn_8015C6A0
    li r3, 0x0
    li r0, 0x258
    stw r3, 0x18ec(r31)
    li r30, 0x0
    stw r0, 0x14e0(r31)
lbl_fn_80275AFC_00001840:
    mr r3, r31
    mr r4, r30
    bl fn_802790A0
    addi r30, r30, 0x1
    cmpwi r30, 0x4
    blt lbl_fn_80275AFC_00001840
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x150(r12)
    mtctr r12
    bctrl
lbl_fn_80275AFC_0000186C:
    lwz r0, 0x1a4(r1)
    psq_l f31, 0x198(r1), 0, 0
    lfd f31, 0x190(r1)
    psq_l f30, 0x188(r1), 0, 0
    lfd f30, 0x180(r1)
    psq_l f29, 0x178(r1), 0, 0
    lfd f29, 0x170(r1)
    lwz r31, 0x16c(r1)
    lwz r30, 0x168(r1)
    mtlr r0
    addi r1, r1, 0x1a0
    blr
}

asm void fn_8027606C(void)
{
    nofralloc
    stwu r1, -0x250(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x254(r1)
    stfd f31, 0x240(r1)
    psq_st f31, 0x248(r1), 0, 0
    stw r31, 0x23c(r1)
    stw r30, 0x238(r1)
    mr r30, r3
    stw r29, 0x234(r1)
    stw r28, 0x230(r1)
    lfs f31, 0x2e4(r3)
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_8027606C_00001C24
    addi r3, r1, 0x28
    li r4, 0x0
    li r5, 0x200
    bl memset
    lwz r4, lbl_8087F1E4
    addi r3, r1, 0x28
    lwz r5, 0x18ec(r30)
    lwz r4, 0x2dc(r4)
    lwz r5, 0x60(r5)
    cmpwi r4, 0x0
    beq lbl_fn_8027606C_00001910
    b lbl_fn_8027606C_00001914
lbl_fn_8027606C_00001910:
    la r4, lbl_808813D0
lbl_fn_8027606C_00001914:
    lwz r5, 0x4(r5)
    crclr 6
    bl fn_800DD3FC
    lwz r3, lbl_8087F048
    addi r4, r1, 0x28
    bl fn_80109828
    lwz r3, 0x190c(r30)
    li r0, 0x258
    lwz r4, 0x1910(r30)
    stw r0, 0x14e0(r30)
    cmplw r3, r4
    bge lbl_fn_8027606C_00001964
    addi r3, r3, 0x1
    stw r3, 0x190c(r30)
    subi r0, r3, 0x1
    lwz r3, 0x1908(r30)
    slwi r0, r0, 2
    lwz r4, 0x18ec(r30)
    stwx r4, r3, r0
    b lbl_fn_8027606C_00001BE4
lbl_fn_8027606C_00001964:
    lis r3, 0x4000
    subi r0, r3, 0x1
    subf r0, r4, r0
    cmplwi r0, 0x1
    bge lbl_fn_8027606C_0000199C
    lis r4, lbl_80744AA4@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80744AA4@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1a6
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8027606C_0000199C:
    li r5, 0x0
    addi r4, r30, 0x1910
    lis r3, 0x4000
    stw r5, 0x14(r1)
    subi r0, r3, 0x1
    stw r5, 0x18(r1)
    stw r5, 0x1c(r1)
    stw r4, 0x20(r1)
    stw r5, 0x24(r1)
    lwz r3, 0x190c(r30)
    lwz r31, 0x1910(r30)
    addi r3, r3, 0x1
    subf r3, r31, r3
    subf r0, r31, r0
    cmplw r3, r0
    stw r3, 0x8(r1)
    ble lbl_fn_8027606C_00001A04
    lis r4, lbl_80744AA4@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80744AA4@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1a6
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8027606C_00001A04:
    lis r3, 0x1555
    addi r0, r3, 0x5555
    cmplw r31, r0
    bge lbl_fn_8027606C_00001A54
    addi r5, r31, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x8(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x10
    srwi r4, r4, 2
    stw r4, 0x10(r1)
    cmplw r4, r0
    bge lbl_fn_8027606C_00001A48
    addi r3, r1, 0x8
lbl_fn_8027606C_00001A48:
    lwz r0, 0x0(r3)
    add r29, r31, r0
    b lbl_fn_8027606C_00001A98
lbl_fn_8027606C_00001A54:
    lis r3, 0x2aab
    subi r0, r3, 0x5556
    cmplw r31, r0
    bge lbl_fn_8027606C_00001A90
    addi r3, r31, 0x1
    lwz r0, 0x8(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_8027606C_00001A84
    addi r3, r1, 0x8
lbl_fn_8027606C_00001A84:
    lwz r0, 0x0(r3)
    add r29, r31, r0
    b lbl_fn_8027606C_00001A98
lbl_fn_8027606C_00001A90:
    lis r3, 0x4000
    subi r29, r3, 0x1
lbl_fn_8027606C_00001A98:
    lis r3, 0x4000
    subi r0, r3, 0x1
    cmplw r29, r0
    ble lbl_fn_8027606C_00001ACC
    lis r4, lbl_80744AA4@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80744AA4@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1a6
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8027606C_00001ACC:
    slwi r3, r29, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_8027606C_00001B00
    lis r3, __files@ha
    lis r4, lbl_80775A88@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8027606C_00001B00:
    lwz r0, 0x18(r1)
    stw r31, 0x14(r1)
    slwi r3, r0, 2
    stw r29, 0x1c(r1)
    lwz r0, 0x190c(r30)
    stw r0, 0x24(r1)
    slwi r0, r0, 2
    add r0, r31, r0
    lwz r4, 0x18ec(r30)
    stwx r4, r3, r0
    lwz r3, 0x18(r1)
    lwz r0, 0x24(r1)
    addi r3, r3, 0x1
    stw r3, 0x18(r1)
    lwz r3, 0x14(r1)
    lwz r4, 0x190c(r30)
    lwz r29, 0x1908(r30)
    slwi r4, r4, 2
    add r5, r29, r4
    subf r5, r29, r5
    mr r4, r29
    srawi r5, r5, 2
    addze r31, r5
    subf r0, r31, r0
    stw r0, 0x24(r1)
    slwi r28, r31, 2
    slwi r0, r0, 2
    mr r5, r28
    add r3, r3, r0
    bl memcpy
    mr r3, r29
    mr r5, r28
    li r4, 0x0
    bl memset
    lwz r0, 0x18(r1)
    li r4, 0x0
    addic. r3, r1, 0x14
    add r0, r0, r31
    stw r0, 0x18(r1)
    stw r4, 0x190c(r30)
    lwz r3, 0x1910(r30)
    lwz r0, 0x1c(r1)
    stw r0, 0x1910(r30)
    stw r3, 0x1c(r1)
    lwz r0, 0x14(r1)
    lwz r3, 0x1908(r30)
    stw r0, 0x1908(r30)
    stw r3, 0x14(r1)
    lwz r0, 0x18(r1)
    stw r0, 0x190c(r30)
    stw r4, 0x18(r1)
    beq lbl_fn_8027606C_00001BE4
    lwz r3, 0x14(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8027606C_00001BE4
    stw r4, 0x18(r1)
    bl dtor_80084684
lbl_fn_8027606C_00001BE4:
    lwz r3, 0x18ec(r30)
    bl fn_801765D8
    li r0, 0x0
    stw r0, 0x18ec(r30)
    li r29, 0x0
lbl_fn_8027606C_00001BF8:
    mr r3, r30
    mr r4, r29
    bl fn_802790A0
    addi r29, r29, 0x1
    cmpwi r29, 0x4
    blt lbl_fn_8027606C_00001BF8
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x138(r12)
    mtctr r12
    bctrl
lbl_fn_8027606C_00001C24:
    lwz r0, 0x254(r1)
    psq_l f31, 0x248(r1), 0, 0
    lfd f31, 0x240(r1)
    lwz r31, 0x23c(r1)
    lwz r30, 0x238(r1)
    lwz r29, 0x234(r1)
    lwz r28, 0x230(r1)
    mtlr r0
    addi r1, r1, 0x250
    blr
}
