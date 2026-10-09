#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void dtor_80084684(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_8008BBD8(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800C31F4(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800F8548(void);
extern void fn_80101524(void);
extern void fn_801076D0(void);
extern void fn_80107798(void);
extern void fn_80107860(void);
extern void fn_8012476C(void);
extern void fn_8013310C(void);
extern void fn_8013322C(void);
extern void fn_8013CB68(void);
extern void fn_801539E0(void);
extern void fn_80154344(void);
extern void fn_80155DAC(void);
extern void fn_80164DCC(void);
extern void fn_8016DA4C(void);
extern void fn_801AD34C(void);
extern void fn_8037D49C(void);
extern void fn_803EA77C(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_80680770(void);
extern void fn_80682428(void);
extern void fn_80686EA4(void);
extern void fn_8068AEA4(void);
extern void fn_80695B00(void);

/* External data declarations */
extern u8 lbl_80738F68[];
extern u8 lbl_807396D8[];
extern u8 lbl_8077D5F0[];
extern u8 lbl_8077D5FC[];
extern u8 lbl_8077D608[];
extern u8 lbl_8077D698[];
extern u8 lbl_8077D6A0[];
extern u8 lbl_8077D6A8[];
extern u8 lbl_8077D9F8[];
extern u8 lbl_8077DA70[];
extern u8 lbl_8077DAE8[];
extern u8 lbl_8077DB60[];
extern u8 lbl_8077DC2C[];
extern u8 lbl_8077DC48[];
extern u8 lbl_8077DC64[];
extern u8 lbl_807C7B60[];
extern u8 lbl_807C7B68[];
extern u8 lbl_807C7B70[];

/* Small data declarations */
extern u32 lbl_8087EFA8;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F0B8;
extern u32 lbl_8087F0B9;
extern u32 lbl_8087F0BA;
extern u32 lbl_8087F448;
extern u32 lbl_8087F498;
extern u32 lbl_8087F610;
extern u32 lbl_80881E90;
extern u32 lbl_80881EA4;
extern u32 lbl_80881EB0;
extern u32 lbl_80881EC4;
extern u32 lbl_80881ED4;
extern u32 lbl_80881ED8;
extern u32 lbl_80881EDC;
extern u32 lbl_80881EE0;
extern u32 lbl_80881EF0;
extern u32 lbl_80881F18;
extern u32 lbl_80881F58;
extern u32 lbl_80881F5C;
extern u32 lbl_80881F60;
extern u32 lbl_80881F64;
extern u32 lbl_80881F70;
extern u32 lbl_80881F74;
extern u32 lbl_80881F78;
extern u32 lbl_80881F7C;
extern u32 lbl_80881F80;
extern u32 lbl_80881F84;
extern u32 lbl_80881F88;
extern u32 lbl_80881F8C;
extern u32 lbl_80881F90;

/* Function declarations */
void fn_8018E5BC(void);
void fn_8018EB70(void);
void fn_8018EBB0(void);
void fn_8018EBC4(void);
void fn_8018EC04(void);
void fn_8018EC44(void);
void fn_8018EC84(void);
void fn_8018ECC4(void);
void fn_8018ED04(void);
void fn_8018ED44(void);
void fn_8018ED84(void);
void fn_8018EDC4(void);
void fn_8018EE04(void);
void fn_8018EE44(void);
void fn_8018EE84(void);
void fn_8018EEC4(void);
void fn_8018F090(void);
void fn_8018F254(void);
void fn_8018F6D0(void);
void fn_8018F700(void);
void fn_8018F81C(void);
void fn_8018F84C(void);
void fn_8018F968(void);
void fn_8018F970(void);
void fn_8018FAA4(void);
void fn_8018FAAC(void);
void fn_8018FB0C(void);
void fn_8018FD70(void);
void fn_8018FDA0(void);
void fn_8018FEBC(void);

asm void fn_8018E5BC(void)
{
    nofralloc
    stwu r1, -0x140(r1)
    mflr r0
    stw r0, 0x144(r1)
    stfd f31, 0x130(r1)
    psq_st f31, 0x138(r1), 0, 0
    lfs f31, lbl_80881ED4
    stfd f30, 0x120(r1)
    psq_st f30, 0x128(r1), 0, 0
    lfs f30, lbl_80881EC4
    stfd f29, 0x110(r1)
    psq_st f29, 0x118(r1), 0, 0
    stfd f28, 0x100(r1)
    psq_st f28, 0x108(r1), 0, 0
    stw r31, 0xfc(r1)
    stw r30, 0xf8(r1)
    li r30, 0x0
    stw r29, 0xf4(r1)
    mr r29, r3
    lwz r4, 0x4(r3)
    addi r31, r4, 0xb0
    lfs f28, 0x2e4(r4)
    mr r3, r31
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f28, f1
    cror eq, gt, eq
    bne lbl_fn_8018E5BC_00000070
    li r30, 0x1
lbl_fn_8018E5BC_00000070:
    lfs f0, lbl_80881EA4
    fcmpo cr0, f28, f0
    cror eq, gt, eq
    bne lbl_fn_8018E5BC_00000114
    lwz r3, 0x4(r29)
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8018E5BC_000000C8
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    bne lbl_fn_8018E5BC_000000C8
    lwz r3, lbl_8087EFA8
    lfs f0, lbl_80881EF0
    lfs f3, 0x3a4(r3)
    lfs f4, lbl_80881EC4
    fadds f0, f0, f3
    fcmpo cr0, f4, f0
    bge lbl_fn_8018E5BC_000000BC
    b lbl_fn_8018E5BC_000000C0
lbl_fn_8018E5BC_000000BC:
    fmr f4, f0
lbl_fn_8018E5BC_000000C0:
    lwz r3, lbl_8087EFA8
    stfs f4, 0x3a4(r3)
lbl_fn_8018E5BC_000000C8:
    lbz r0, 0x24(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8018E5BC_000001BC
    lbz r0, 0x25(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8018E5BC_000001BC
    li r0, 0x1
    stb r0, 0x25(r29)
    lwz r3, 0x4(r29)
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8018E5BC_000001BC
    lwz r3, lbl_8087F448
    cmpwi r3, 0x0
    beq lbl_fn_8018E5BC_000001BC
    lfs f1, 0xe0(r3)
    li r4, 0x1e
    bl fn_8037D49C
    b lbl_fn_8018E5BC_000001BC
lbl_fn_8018E5BC_00000114:
    lfs f0, lbl_80881F18
    fcmpo cr0, f28, f0
    cror eq, gt, eq
    bne lbl_fn_8018E5BC_000001A8
    lwz r3, 0x4(r29)
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8018E5BC_00000168
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    bne lbl_fn_8018E5BC_00000168
    lwz r3, lbl_8087EFA8
    lfs f3, lbl_80881EF0
    lfs f0, 0x3a4(r3)
    fsubs f0, f0, f3
    fcmpo cr0, f3, f0
    ble lbl_fn_8018E5BC_0000015C
    b lbl_fn_8018E5BC_00000160
lbl_fn_8018E5BC_0000015C:
    fmr f3, f0
lbl_fn_8018E5BC_00000160:
    lwz r3, lbl_8087EFA8
    stfs f3, 0x3a4(r3)
lbl_fn_8018E5BC_00000168:
    lbz r0, 0x24(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8018E5BC_000001BC
    li r0, 0x1
    stb r0, 0x24(r29)
    lwz r3, 0x4(r29)
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8018E5BC_000001BC
    lwz r3, lbl_8087F448
    cmpwi r3, 0x0
    beq lbl_fn_8018E5BC_000001BC
    lfs f1, lbl_80881F58
    li r4, 0xa
    bl fn_8037D49C
    b lbl_fn_8018E5BC_000001BC
lbl_fn_8018E5BC_000001A8:
    lfs f0, lbl_80881E90
    fcmpo cr0, f28, f0
    cror eq, gt, eq
    bne lbl_fn_8018E5BC_000001BC
    lfs f31, lbl_80881F5C
lbl_fn_8018E5BC_000001BC:
    lwz r12, 0x0(r29)
    mr r3, r29
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8018E5BC_000002A8
    lwz r12, 0x0(r29)
    mr r3, r29
    lwz r12, 0x30(r12)
    mtctr r12
    bctrl
    lwz r0, 0x20(r29)
    cmpw r0, r3
    bge lbl_fn_8018E5BC_0000021C
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x1c(r29)
    mr r3, r29
    lwz r12, 0x0(r29)
    lwz r12, 0x30(r12)
    mtctr r12
    bctrl
    stw r3, 0x20(r29)
lbl_fn_8018E5BC_0000021C:
    lwz r0, 0xc(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8018E5BC_00000300
    lwz r0, 0x28(r29)
    li r3, 0x1
    stw r3, 0xc(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8018E5BC_0000026C
    lis r4, lbl_80738F68@ha
    lfs f1, lbl_80881EC4
    addi r4, r4, lbl_80738F68@l
    addi r3, r1, 0xc
    lwz r4, 0x14(r4)
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_8018E5BC_00000298
lbl_fn_8018E5BC_0000026C:
    lis r4, lbl_80738F68@ha
    lfs f1, lbl_80881EC4
    addi r4, r4, lbl_80738F68@l
    addi r3, r1, 0x8
    lwz r4, 0x18(r4)
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_8018E5BC_00000298:
    lwz r3, 0x28(r29)
    addi r0, r3, 0x1
    stw r0, 0x28(r29)
    b lbl_fn_8018E5BC_00000300
lbl_fn_8018E5BC_000002A8:
    lwz r0, 0xc(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8018E5BC_00000300
    lwz r4, 0x4(r29)
    li r3, 0x0
    lwz r5, 0x30(r29)
    lwz r0, 0x638(r4)
    stw r0, 0x63c(r4)
    stw r5, 0x638(r4)
    lwz r0, 0x28(r29)
    stw r3, 0xc(r29)
    cmpwi r0, 0x1
    bne lbl_fn_8018E5BC_00000300
    lwz r3, lbl_8087F498
    cmpwi r3, 0x0
    beq lbl_fn_8018E5BC_00000300
    lwz r4, 0x4(r29)
    li r5, 0x2
    lfs f1, lbl_80881EC4
    li r6, 0x0
    lfs f2, lbl_80881EB0
    bl fn_803EA77C
lbl_fn_8018E5BC_00000300:
    lwz r0, 0x2c(r29)
    cmpwi r0, 0xb
    bne lbl_fn_8018E5BC_00000324
    lfs f3, 0x234(r31)
    lfs f0, lbl_80881F60
    fcmpo cr0, f3, f0
    bge lbl_fn_8018E5BC_00000324
    lfs f31, lbl_80881F5C
    lfs f30, lbl_80881F64
lbl_fn_8018E5BC_00000324:
    psq_l f1, 0x10(r29), 0, 0
    addi r3, r1, 0x70
    lfs f2, 0x18(r29)
    stfs f2, 0x78(r1)
    psq_st f1, 0x0(r3), 0, 0
    lwz r7, 0x34(r29)
    cmpwi r7, 0x0
    beq lbl_fn_8018E5BC_00000390
    lwz r6, 0x4(r29)
    addi r5, r1, 0x64
    lfs f3, 0x530(r7)
    mr r4, r3
    lfs f0, 0x530(r6)
    lfs f5, 0x52c(r7)
    fsubs f2, f3, f0
    lfs f4, 0x52c(r6)
    lfs f3, 0x528(r7)
    lfs f0, 0x528(r6)
    fsubs f4, f5, f4
    stfs f2, 0x6c(r1)
    fsubs f0, f3, f0
    stfs f4, 0x68(r1)
    stfs f0, 0x64(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x78(r1)
    bl fn_805F98D0
lbl_fn_8018E5BC_00000390:
    lfs f2, 0x78(r1)
    addi r3, r1, 0x70
    lfs f0, lbl_80881ED8
    addi r31, r1, 0x58
    fabs f3, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    frsp f3, f3
    stfs f2, 0x60(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_8018E5BC_000003E0
    lfs f3, 0x58(r1)
    lfs f0, lbl_80881ED4
    fcmpo cr0, f3, f0
    ble lbl_fn_8018E5BC_000003D4
    lfs f0, lbl_80881EDC
    b lbl_fn_8018E5BC_000003D8
lbl_fn_8018E5BC_000003D4:
    lfs f0, lbl_80881EE0
lbl_fn_8018E5BC_000003D8:
    stfs f0, 0x50(r1)
    b lbl_fn_8018E5BC_000003F4
lbl_fn_8018E5BC_000003E0:
    frsp f2, f2
    lfs f1, 0x58(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x50(r1)
lbl_fn_8018E5BC_000003F4:
    lfs f0, 0x50(r1)
    addi r3, r1, 0x80
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80881ED4
    addi r4, r1, 0x40
    lfs f28, 0x88(r1)
    mr r5, r4
    lfs f29, 0x84(r1)
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
    lfs f0, lbl_80881EC4
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x60(r1)
    stfs f3, 0xe0(r1)
    stfs f3, 0xe4(r1)
    stfs f3, 0xe8(r1)
    stfs f0, 0xec(r1)
    stfs f13, 0x10(r1)
    stfs f29, 0x14(r1)
    stfs f28, 0x18(r1)
    stfs f13, 0xb0(r1)
    stfs f29, 0xb4(r1)
    stfs f28, 0xb8(r1)
    stfs f10, 0x1c(r1)
    stfs f11, 0x20(r1)
    stfs f12, 0x24(r1)
    stfs f10, 0xc0(r1)
    stfs f11, 0xc4(r1)
    stfs f12, 0xc8(r1)
    stfs f7, 0x28(r1)
    stfs f8, 0x2c(r1)
    stfs f9, 0x30(r1)
    stfs f7, 0xd0(r1)
    stfs f8, 0xd4(r1)
    stfs f9, 0xd8(r1)
    stfs f4, 0x34(r1)
    stfs f5, 0x38(r1)
    stfs f6, 0x3c(r1)
    stfs f4, 0xbc(r1)
    stfs f5, 0xcc(r1)
    stfs f6, 0xdc(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x48(r1)
    bl fn_805F9750
    lfs f2, 0x48(r1)
    lfs f0, lbl_80881ED8
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8018E5BC_00000510
    lfs f3, 0x44(r1)
    lfs f0, lbl_80881ED4
    fcmpo cr0, f3, f0
    ble lbl_fn_8018E5BC_00000500
    lfs f0, lbl_80881EDC
    b lbl_fn_8018E5BC_00000504
lbl_fn_8018E5BC_00000500:
    lfs f0, lbl_80881EE0
lbl_fn_8018E5BC_00000504:
    fneg f0, f0
    stfs f0, 0x4c(r1)
    b lbl_fn_8018E5BC_00000524
lbl_fn_8018E5BC_00000510:
    lfs f1, 0x44(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x4c(r1)
lbl_fn_8018E5BC_00000524:
    lfs f0, lbl_80881ED4
    addi r3, r1, 0x4c
    psq_l f1, 0x0(r3), 0, 0
    mr r4, r31
    fmr f2, f0
    psq_st f1, 0x0(r31), 0, 0
    fmr f1, f31
    li r5, 0x0
    stfs f2, 0x60(r1)
    fmr f2, f30
    lwz r3, 0x4(r29)
    stfs f0, 0x54(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    lwz r4, 0x4(r29)
    mr r3, r30
    lfs f0, lbl_80881ED4
    stfs f0, 0x580(r4)
    stfs f0, 0x584(r4)
    psq_l f31, 0x138(r1), 0, 0
    lfd f31, 0x130(r1)
    psq_l f30, 0x128(r1), 0, 0
    lfd f30, 0x120(r1)
    psq_l f29, 0x118(r1), 0, 0
    lfd f29, 0x110(r1)
    psq_l f28, 0x108(r1), 0, 0
    lfd f28, 0x100(r1)
    lwz r31, 0xfc(r1)
    lwz r30, 0xf8(r1)
    lwz r29, 0xf4(r1)
    lwz r0, 0x144(r1)
    mtlr r0
    addi r1, r1, 0x140
    blr
}

asm void fn_8018EB70(void)
{
    nofralloc
    lwz r4, lbl_8087EFA8
    lfs f0, lbl_80881EC4
    stfs f0, 0x3a4(r4)
    lbz r0, 0x24(r3)
    cmpwi r0, 0x0
    beqlr
    lbz r0, 0x25(r3)
    cmpwi r0, 0x0
    bnelr
    lwz r3, lbl_8087F448
    cmpwi r3, 0x0
    beqlr
    lfs f1, 0xe0(r3)
    li r4, 0x1e
    b fn_8037D49C
    blr
}

asm void fn_8018EBB0(void)
{
    nofralloc
    psq_l f1, 0x10(r4), 0, 0
    lfs f2, 0x18(r4)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x8(r3)
    blr
}

asm void fn_8018EBC4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_8018EBC4_00000630
    cmpwi r4, 0x0
    ble lbl_fn_8018EBC4_00000630
    bl dtor_80084684
lbl_fn_8018EBC4_00000630:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8018EC04(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_8018EC04_00000670
    cmpwi r4, 0x0
    ble lbl_fn_8018EC04_00000670
    bl dtor_80084684
lbl_fn_8018EC04_00000670:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8018EC44(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_8018EC44_000006B0
    cmpwi r4, 0x0
    ble lbl_fn_8018EC44_000006B0
    bl dtor_80084684
lbl_fn_8018EC44_000006B0:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8018EC84(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_8018EC84_000006F0
    cmpwi r4, 0x0
    ble lbl_fn_8018EC84_000006F0
    bl dtor_80084684
lbl_fn_8018EC84_000006F0:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8018ECC4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_8018ECC4_00000730
    cmpwi r4, 0x0
    ble lbl_fn_8018ECC4_00000730
    bl dtor_80084684
lbl_fn_8018ECC4_00000730:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8018ED04(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_8018ED04_00000770
    cmpwi r4, 0x0
    ble lbl_fn_8018ED04_00000770
    bl dtor_80084684
lbl_fn_8018ED04_00000770:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8018ED44(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_8018ED44_000007B0
    cmpwi r4, 0x0
    ble lbl_fn_8018ED44_000007B0
    bl dtor_80084684
lbl_fn_8018ED44_000007B0:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8018ED84(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_8018ED84_000007F0
    cmpwi r4, 0x0
    ble lbl_fn_8018ED84_000007F0
    bl dtor_80084684
lbl_fn_8018ED84_000007F0:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8018EDC4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_8018EDC4_00000830
    cmpwi r4, 0x0
    ble lbl_fn_8018EDC4_00000830
    bl dtor_80084684
lbl_fn_8018EDC4_00000830:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8018EE04(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_8018EE04_00000870
    cmpwi r4, 0x0
    ble lbl_fn_8018EE04_00000870
    bl dtor_80084684
lbl_fn_8018EE04_00000870:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8018EE44(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_8018EE44_000008B0
    cmpwi r4, 0x0
    ble lbl_fn_8018EE44_000008B0
    bl dtor_80084684
lbl_fn_8018EE44_000008B0:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8018EE84(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_8018EE84_000008F0
    cmpwi r4, 0x0
    ble lbl_fn_8018EE84_000008F0
    bl dtor_80084684
lbl_fn_8018EE84_000008F0:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8018EEC4(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    lis r7, lbl_8077DB60@ha
    lfs f0, lbl_80881F70
    stw r0, 0x74(r1)
    addi r7, r7, lbl_8077DB60@l
    li r6, 0x3
    li r0, 0x30
    stw r31, 0x6c(r1)
    mr r31, r5
    stw r30, 0x68(r1)
    mr r30, r3
    stw r29, 0x64(r1)
    stw r5, 0x24(r3)
    li r5, 0x0
    stw r4, 0x4(r3)
    stw r7, 0x0(r3)
    stfs f0, 0x8(r3)
    stfs f0, 0xc(r3)
    stfs f0, 0x10(r3)
    stw r6, 0x58c(r4)
    li r4, 0x40
    lwz r6, 0x4(r3)
    stw r0, 0x560(r6)
    lwz r3, 0x4(r3)
    addi r3, r3, 0x7d4
    bl fn_8013310C
    lwz r3, 0x4(r30)
    li r0, 0x0
    stw r0, 0xf94(r3)
    lwz r3, 0x4(r30)
    lwz r0, 0x12a4(r3)
    rlwinm r0, r0, 0, 27, 25
    stw r0, 0x12a4(r3)
    lwz r3, 0x4(r30)
    bl fn_8016DA4C
    lwz r3, 0x4(r30)
    lwz r0, 0x12a4(r3)
    srwi. r0, r0, 31
    beq lbl_fn_8018EEC4_000009AC
    bl fn_801539E0
lbl_fn_8018EEC4_000009AC:
    lwz r3, 0x4(r30)
    li r4, 0x0
    lwz r0, 0x12a4(r3)
    srwi. r0, r0, 31
    beq lbl_fn_8018EEC4_000009D0
    lwz r0, 0xc48(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8018EEC4_000009D0
    li r4, 0x1
lbl_fn_8018EEC4_000009D0:
    cmpwi r4, 0x0
    beq lbl_fn_8018EEC4_000009DC
    bl fn_80154344
lbl_fn_8018EEC4_000009DC:
    lwz r3, 0x4(r30)
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 25
    beq lbl_fn_8018EEC4_000009F4
    li r4, 0x0
    bl fn_80155DAC
lbl_fn_8018EEC4_000009F4:
    lwz r3, 0x4(r30)
    li r4, 0x1
    bl fn_80164DCC
    lwz r5, 0x4(r30)
    addi r3, r1, 0x28
    lfs f0, lbl_80881F74
    li r4, 0x79
    lfs f3, 0x538(r5)
    fsubs f1, f3, f0
    bl fn_805F8E70
    lfs f0, lbl_80881F70
    addi r29, r1, 0x18
    stfs f0, 0xc(r1)
    addi r6, r1, 0xc
    lfs f2, lbl_80881F78
    mr r4, r29
    stfs f0, 0x10(r1)
    mr r5, r29
    addi r3, r1, 0x28
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x14(r1)
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x20(r1)
    bl fn_805F93C0
    lfs f2, 0x20(r1)
    cmpwi r31, 0x0
    psq_l f1, 0x0(r29), 0, 0
    li r0, 0x1c2
    psq_st f1, 0x14(r30), 0, 0
    lfs f0, lbl_80881F70
    stfs f2, 0x1c(r30)
    lwz r3, 0x4(r30)
    stfs f0, 0x18(r30)
    stfs f0, 0x2e8(r3)
    stw r0, 0x20(r30)
    bne lbl_fn_8018EEC4_00000AB4
    lwz r5, 0x4(r30)
    lis r4, lbl_807396D8@ha
    lfs f1, lbl_80881F7C
    addi r3, r1, 0x8
    addi r4, r4, lbl_807396D8@l
    addi r5, r5, 0x528
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_8018EEC4_00000AB4:
    mr r3, r30
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    lwz r29, 0x64(r1)
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_8018F090(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r3
    stw r30, 0x48(r1)
    lwz r4, 0x4(r3)
    lwz r0, 0x48(r4)
    addi r30, r4, 0xb0
    cmpwi r0, 0x0
    bne lbl_fn_8018F090_00000C00
    lwz r3, lbl_8087F0A8
    li r4, 0x22
    addi r3, r3, 0x48c
    bl fn_8012476C
    cmpwi r3, 0x0
    beq lbl_fn_8018F090_00000B70
    lfs f3, 0x18(r31)
    lfs f0, lbl_80881F70
    lwz r3, 0x20(r31)
    fcmpo cr0, f3, f0
    subi r0, r3, 0xe
    stw r0, 0x20(r31)
    cror eq, lt, eq
    bne lbl_fn_8018F090_00000B70
    lfs f1, lbl_80881F80
    addi r3, r1, 0x18
    li r4, 0x79
    bl fn_805F8E70
    addi r4, r31, 0x14
    addi r3, r1, 0x18
    mr r5, r4
    bl fn_805F93C0
    lfs f0, lbl_80881F84
    mr r4, r30
    stfs f0, 0x18(r31)
    mr r5, r30
    lwz r3, lbl_8087F048
    bl fn_80107860
lbl_fn_8018F090_00000B70:
    lfs f4, 0x18(r31)
    lfs f2, lbl_80881F70
    fcmpo cr0, f4, f2
    ble lbl_fn_8018F090_00000BCC
    lfs f0, lbl_80881F7C
    lfs f3, lbl_80881F88
    fsubs f0, f4, f0
    stfs f0, 0x18(r31)
    fcmpo cr0, f0, f3
    ble lbl_fn_8018F090_00000BA4
    fsubs f0, f3, f0
    fdivs f5, f0, f3
    b lbl_fn_8018F090_00000BA8
lbl_fn_8018F090_00000BA4:
    fdivs f5, f0, f3
lbl_fn_8018F090_00000BA8:
    lfs f3, 0x14(r31)
    lfs f0, 0x1c(r31)
    fmuls f4, f3, f5
    lfs f3, lbl_80881F70
    fmuls f0, f0, f5
    stfs f3, 0xc(r31)
    stfs f4, 0x8(r31)
    stfs f0, 0x10(r31)
    b lbl_fn_8018F090_00000BE8
lbl_fn_8018F090_00000BCC:
    stfs f2, 0x8(r1)
    addi r3, r1, 0x8
    stfs f2, 0xc(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x10(r1)
    psq_st f1, 0x8(r31), 0, 0
    stfs f2, 0x10(r31)
lbl_fn_8018F090_00000BE8:
    lwz r3, 0x4(r31)
    lfs f2, 0x10(r31)
    addi r3, r3, 0xf88
    psq_l f1, 0x8(r31), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x8(r3)
lbl_fn_8018F090_00000C00:
    lwz r3, 0x4(r31)
    lwz r0, 0x48(r3)
    cmpwi r0, 0x2
    bne lbl_fn_8018F090_00000C20
    lwz r0, 0x54c(r3)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    beq lbl_fn_8018F090_00000C50
lbl_fn_8018F090_00000C20:
    lfs f1, lbl_80881F70
    addi r4, r3, 0x534
    lfs f2, lbl_80881F7C
    li r5, 0x0
    bl fn_8013CB68
    lwz r3, 0x4(r31)
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_8018F090_00000C50
    li r3, 0x1
    b lbl_fn_8018F090_00000C80
lbl_fn_8018F090_00000C50:
    lwz r0, 0x24(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8018F090_00000C68
    lwz r3, 0x20(r31)
    subi r0, r3, 0x1
    stw r0, 0x20(r31)
lbl_fn_8018F090_00000C68:
    lwz r0, 0x20(r31)
    cmpwi r0, 0x0
    bgt lbl_fn_8018F090_00000C7C
    li r3, 0x1
    b lbl_fn_8018F090_00000C80
lbl_fn_8018F090_00000C7C:
    li r3, 0x0
lbl_fn_8018F090_00000C80:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8018F254(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    lwz r5, 0x4(r4)
    stw r0, 0x114(r1)
    cmpwi r5, 0x0
    stw r31, 0x10c(r1)
    stw r30, 0x108(r1)
    mr r30, r4
    stw r29, 0x104(r1)
    mr r29, r3
    beq lbl_fn_8018F254_00000EDC
    lwz r0, 0x7e0(r5)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_8018F254_00000EDC
    lwz r12, 0x0(r5)
    mr r3, r5
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
    lfs f1, lbl_80881F70
    addi r3, r1, 0xd0
    lfs f0, lbl_80881F8C
    li r4, 0x79
    stfs f1, 0x48(r1)
    lwz r5, 0x4(r30)
    stfs f1, 0x4c(r1)
    stfs f0, 0x50(r1)
    lfs f1, 0x538(r5)
    bl fn_805F8E70
    addi r4, r1, 0x48
    addi r3, r1, 0xd0
    mr r5, r4
    bl fn_805F93C0
    lis r5, lbl_807396D8@ha
    li r3, 0x40
    addi r5, r5, lbl_807396D8@l
    li r4, 0x0
    addi r5, r5, 0xd
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8018F254_00000D5C
    lwz r4, 0x4(r30)
    addi r5, r1, 0x48
    li r6, -0x1
    li r7, 0x0
    bl fn_801AD34C
lbl_fn_8018F254_00000D5C:
    lis r4, lbl_8077D5F0@ha
    lwzu r6, lbl_8077D5F0@l(r4)
    lwz r7, 0x4(r30)
    li r0, 0x0
    lwz r5, 0x4(r4)
    lwz r4, 0x8(r4)
    stw r7, 0x10(r1)
    stw r0, 0x0(r29)
    lbz r0, lbl_8087F0B9
    stw r3, 0x14(r1)
    extsb. r0, r0
    stw r6, 0x3c(r1)
    stw r5, 0x40(r1)
    stw r4, 0x44(r1)
    stw r6, 0x30(r1)
    stw r5, 0x34(r1)
    stw r4, 0x38(r1)
    stw r6, 0xb8(r1)
    stw r5, 0xbc(r1)
    stw r4, 0xc0(r1)
    stw r7, 0xc4(r1)
    stw r3, 0xc8(r1)
    bne lbl_fn_8018F254_00000DE0
    lis r6, lbl_807C7B68@ha
    lis r4, fn_8018F81C@ha
    lis r3, fn_8018F84C@ha
    li r0, 0x1
    addi r3, r3, fn_8018F84C@l
    addi r5, r6, lbl_807C7B68@l
    addi r4, r4, fn_8018F81C@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C7B68@l(r6)
    stb r0, lbl_8087F0B9
lbl_fn_8018F254_00000DE0:
    lwz r7, 0xb8(r1)
    addi r3, r1, 0x90
    lwz r6, 0xbc(r1)
    lwz r5, 0xc0(r1)
    lwz r4, 0xc4(r1)
    lwz r0, 0xc8(r1)
    stw r7, 0x90(r1)
    stw r6, 0x94(r1)
    stw r5, 0x98(r1)
    stw r4, 0x9c(r1)
    stw r0, 0xa0(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_8018F254_00000EB4
    lwz r7, 0x90(r1)
    li r3, 0x14
    lwz r6, 0x94(r1)
    lwz r5, 0x98(r1)
    lwz r4, 0x9c(r1)
    lwz r0, 0xa0(r1)
    stw r7, 0x7c(r1)
    stw r6, 0x80(r1)
    stw r5, 0x84(r1)
    stw r4, 0x88(r1)
    stw r0, 0x8c(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_8018F254_00000E78
    lis r3, __files@ha
    lis r4, lbl_8077DC48@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077DC48@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8018F254_00000E78:
    cmpwi r30, 0x0
    beq lbl_fn_8018F254_00000EA8
    lwz r0, 0x7c(r1)
    stw r0, 0x0(r30)
    lwz r0, 0x80(r1)
    stw r0, 0x4(r30)
    lwz r0, 0x84(r1)
    stw r0, 0x8(r30)
    lwz r0, 0x88(r1)
    stw r0, 0xc(r30)
    lwz r0, 0x8c(r1)
    stw r0, 0x10(r30)
lbl_fn_8018F254_00000EA8:
    stw r30, 0x4(r29)
    li r0, 0x1
    b lbl_fn_8018F254_00000EB8
lbl_fn_8018F254_00000EB4:
    li r0, 0x0
lbl_fn_8018F254_00000EB8:
    cmpwi r0, 0x0
    beq lbl_fn_8018F254_00000ED0
    lis r3, lbl_807C7B68@ha
    addi r3, r3, lbl_807C7B68@l
    stw r3, 0x0(r29)
    b lbl_fn_8018F254_000010F8
lbl_fn_8018F254_00000ED0:
    li r0, 0x0
    stw r0, 0x0(r29)
    b lbl_fn_8018F254_000010F8
lbl_fn_8018F254_00000EDC:
    lis r5, lbl_807396D8@ha
    li r3, 0x8
    addi r5, r5, lbl_807396D8@l
    li r4, 0x0
    addi r5, r5, 0xd
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_8018F254_00000F7C
    lwz r6, 0x4(r30)
    lis r4, lbl_8077DAE8@ha
    stw r6, 0x4(r3)
    addi r4, r4, lbl_8077DAE8@l
    li r5, 0x0
    li r0, 0x31
    stw r4, 0x0(r3)
    li r4, 0x40
    stw r5, 0x58c(r6)
    lwz r5, 0x4(r3)
    stw r0, 0x560(r5)
    lwz r3, 0x4(r3)
    addi r3, r3, 0x7d4
    bl fn_8013322C
    lwz r3, 0x4(r31)
    li r0, -0x1
    lfs f0, lbl_80881F70
    stw r0, 0xf94(r3)
    lwz r3, 0x4(r31)
    stfs f0, 0x2e8(r3)
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_8018F254_00000F7C
    lwz r8, 0x4(r31)
    li r6, 0x40
    li r7, 0x0
    addi r4, r8, 0x528
    addi r5, r8, 0x534
    bl fn_80101524
lbl_fn_8018F254_00000F7C:
    lis r3, lbl_8077D5FC@ha
    lwzu r5, lbl_8077D5FC@l(r3)
    lwz r6, 0x4(r30)
    li r0, 0x0
    lwz r4, 0x4(r3)
    lwz r3, 0x8(r3)
    stw r6, 0x8(r1)
    stw r0, 0x0(r29)
    lbz r0, lbl_8087F0B8
    stw r31, 0xc(r1)
    extsb. r0, r0
    stw r5, 0x24(r1)
    stw r4, 0x28(r1)
    stw r3, 0x2c(r1)
    stw r5, 0x18(r1)
    stw r4, 0x1c(r1)
    stw r3, 0x20(r1)
    stw r5, 0xa4(r1)
    stw r4, 0xa8(r1)
    stw r3, 0xac(r1)
    stw r6, 0xb0(r1)
    stw r31, 0xb4(r1)
    bne lbl_fn_8018F254_00001000
    lis r6, lbl_807C7B60@ha
    lis r4, fn_8018F6D0@ha
    lis r3, fn_8018F700@ha
    li r0, 0x1
    addi r3, r3, fn_8018F700@l
    addi r5, r6, lbl_807C7B60@l
    addi r4, r4, fn_8018F6D0@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C7B60@l(r6)
    stb r0, lbl_8087F0B8
lbl_fn_8018F254_00001000:
    lwz r7, 0xa4(r1)
    addi r3, r1, 0x68
    lwz r6, 0xa8(r1)
    lwz r5, 0xac(r1)
    lwz r4, 0xb0(r1)
    lwz r0, 0xb4(r1)
    stw r7, 0x68(r1)
    stw r6, 0x6c(r1)
    stw r5, 0x70(r1)
    stw r4, 0x74(r1)
    stw r0, 0x78(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_8018F254_000010D4
    lwz r7, 0x68(r1)
    li r3, 0x14
    lwz r6, 0x6c(r1)
    lwz r5, 0x70(r1)
    lwz r4, 0x74(r1)
    lwz r0, 0x78(r1)
    stw r7, 0x54(r1)
    stw r6, 0x58(r1)
    stw r5, 0x5c(r1)
    stw r4, 0x60(r1)
    stw r0, 0x64(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_8018F254_00001098
    lis r3, __files@ha
    lis r4, lbl_8077DC64@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077DC64@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8018F254_00001098:
    cmpwi r30, 0x0
    beq lbl_fn_8018F254_000010C8
    lwz r0, 0x54(r1)
    stw r0, 0x0(r30)
    lwz r0, 0x58(r1)
    stw r0, 0x4(r30)
    lwz r0, 0x5c(r1)
    stw r0, 0x8(r30)
    lwz r0, 0x60(r1)
    stw r0, 0xc(r30)
    lwz r0, 0x64(r1)
    stw r0, 0x10(r30)
lbl_fn_8018F254_000010C8:
    stw r30, 0x4(r29)
    li r0, 0x1
    b lbl_fn_8018F254_000010D8
lbl_fn_8018F254_000010D4:
    li r0, 0x0
lbl_fn_8018F254_000010D8:
    cmpwi r0, 0x0
    beq lbl_fn_8018F254_000010F0
    lis r3, lbl_807C7B60@ha
    addi r3, r3, lbl_807C7B60@l
    stw r3, 0x0(r29)
    b lbl_fn_8018F254_000010F8
lbl_fn_8018F254_000010F0:
    li r0, 0x0
    stw r0, 0x0(r29)
lbl_fn_8018F254_000010F8:
    lwz r0, 0x114(r1)
    lwz r31, 0x10c(r1)
    lwz r30, 0x108(r1)
    lwz r29, 0x104(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_8018F6D0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r12, 0x0(r3)
    lwz r3, 0xc(r12)
    lwz r4, 0x10(r12)
    bl fn_80695B00
    nop
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8018F700(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r5, 0x3
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    mr r29, r4
    bne lbl_fn_8018F700_0000117C
    lis r3, lbl_8077D6A0@ha
    addi r3, r3, lbl_8077D6A0@l
    stw r3, 0x0(r4)
    b lbl_fn_8018F700_00001244
lbl_fn_8018F700_0000117C:
    cmpwi r5, 0x0
    bne lbl_fn_8018F700_000011F4
    lwz r31, 0x0(r3)
    li r3, 0x14
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_8018F700_000011BC
    lis r3, __files@ha
    lis r4, lbl_8077DC64@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077DC64@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8018F700_000011BC:
    cmpwi r30, 0x0
    beq lbl_fn_8018F700_000011EC
    lwz r0, 0x4(r31)
    lwz r3, 0x0(r31)
    stw r3, 0x0(r30)
    stw r0, 0x4(r30)
    lwz r0, 0x8(r31)
    stw r0, 0x8(r30)
    lwz r0, 0xc(r31)
    stw r0, 0xc(r30)
    lwz r0, 0x10(r31)
    stw r0, 0x10(r30)
lbl_fn_8018F700_000011EC:
    stw r30, 0x0(r29)
    b lbl_fn_8018F700_00001244
lbl_fn_8018F700_000011F4:
    cmpwi r5, 0x1
    bne lbl_fn_8018F700_00001210
    lwz r3, 0x0(r4)
    bl dtor_80084684
    li r0, 0x0
    stw r0, 0x0(r29)
    b lbl_fn_8018F700_00001244
lbl_fn_8018F700_00001210:
    lwz r5, 0x0(r4)
    lis r3, lbl_8077D6A0@ha
    lwz r4, lbl_8077D6A0@l(r3)
    lwz r3, 0x0(r5)
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_8018F700_0000123C
    lwz r0, 0x0(r30)
    stw r0, 0x0(r29)
    b lbl_fn_8018F700_00001244
lbl_fn_8018F700_0000123C:
    li r0, 0x0
    stw r0, 0x0(r29)
lbl_fn_8018F700_00001244:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8018F81C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r12, 0x0(r3)
    lwz r3, 0xc(r12)
    lwz r4, 0x10(r12)
    bl fn_80695B00
    nop
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8018F84C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r5, 0x3
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    mr r29, r4
    bne lbl_fn_8018F84C_000012C8
    lis r3, lbl_8077D6A8@ha
    addi r3, r3, lbl_8077D6A8@l
    stw r3, 0x0(r4)
    b lbl_fn_8018F84C_00001390
lbl_fn_8018F84C_000012C8:
    cmpwi r5, 0x0
    bne lbl_fn_8018F84C_00001340
    lwz r31, 0x0(r3)
    li r3, 0x14
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_8018F84C_00001308
    lis r3, __files@ha
    lis r4, lbl_8077DC48@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077DC48@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8018F84C_00001308:
    cmpwi r30, 0x0
    beq lbl_fn_8018F84C_00001338
    lwz r0, 0x4(r31)
    lwz r3, 0x0(r31)
    stw r3, 0x0(r30)
    stw r0, 0x4(r30)
    lwz r0, 0x8(r31)
    stw r0, 0x8(r30)
    lwz r0, 0xc(r31)
    stw r0, 0xc(r30)
    lwz r0, 0x10(r31)
    stw r0, 0x10(r30)
lbl_fn_8018F84C_00001338:
    stw r30, 0x0(r29)
    b lbl_fn_8018F84C_00001390
lbl_fn_8018F84C_00001340:
    cmpwi r5, 0x1
    bne lbl_fn_8018F84C_0000135C
    lwz r3, 0x0(r4)
    bl dtor_80084684
    li r0, 0x0
    stw r0, 0x0(r29)
    b lbl_fn_8018F84C_00001390
lbl_fn_8018F84C_0000135C:
    lwz r5, 0x0(r4)
    lis r3, lbl_8077D6A8@ha
    lwz r4, lbl_8077D6A8@l(r3)
    lwz r3, 0x0(r5)
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_8018F84C_00001388
    lwz r0, 0x0(r30)
    stw r0, 0x0(r29)
    b lbl_fn_8018F84C_00001390
lbl_fn_8018F84C_00001388:
    li r0, 0x0
    stw r0, 0x0(r29)
lbl_fn_8018F84C_00001390:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8018F968(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_8018F970(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_8077DA70@ha
    li r6, 0x4
    stw r0, 0x14(r1)
    addi r5, r5, lbl_8077DA70@l
    li r0, 0x32
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    stw r5, 0x0(r3)
    li r5, 0x0
    stw r4, 0x4(r3)
    stw r6, 0x58c(r4)
    li r4, 0x80
    lwz r6, 0x4(r3)
    stw r0, 0x560(r6)
    lwz r3, 0x4(r3)
    addi r3, r3, 0x7d4
    bl fn_8013310C
    lwz r3, 0x4(r31)
    lwz r0, 0x12a4(r3)
    rlwinm r0, r0, 0, 27, 25
    stw r0, 0x12a4(r3)
    lwz r3, 0x4(r31)
    bl fn_8016DA4C
    lwz r3, 0x4(r31)
    lwz r0, 0x12a4(r3)
    srwi. r0, r0, 31
    beq lbl_fn_8018F970_00001430
    bl fn_801539E0
lbl_fn_8018F970_00001430:
    lwz r3, 0x4(r31)
    li r4, 0x0
    lwz r0, 0x12a4(r3)
    srwi. r0, r0, 31
    beq lbl_fn_8018F970_00001454
    lwz r0, 0xc48(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8018F970_00001454
    li r4, 0x1
lbl_fn_8018F970_00001454:
    cmpwi r4, 0x0
    beq lbl_fn_8018F970_00001460
    bl fn_80154344
lbl_fn_8018F970_00001460:
    lwz r3, 0x4(r31)
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 25
    beq lbl_fn_8018F970_00001478
    li r4, 0x0
    bl fn_80155DAC
lbl_fn_8018F970_00001478:
    lwz r3, 0x4(r31)
    li r0, 0x1
    lfs f0, lbl_80881F7C
    li r4, 0x0
    stw r0, 0x3fc(r3)
    addi r30, r3, 0xb0
    lfs f1, lbl_80881F70
    mr r3, r30
    lfs f2, lbl_80881F90
    li r5, 0x1dc
    stfs f0, 0x24c(r30)
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80881F7C
    mr r4, r30
    stfs f0, 0x238(r30)
    mr r5, r30
    lwz r3, lbl_8087F048
    bl fn_801076D0
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8018FAA4(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_8018FAAC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r4, 0x4(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8018FAAC_0000153C
    lwz r0, lbl_8087F048
    cmpwi r0, 0x0
    beq lbl_fn_8018FAAC_0000153C
    addi r3, r4, 0x7d4
    li r4, 0x80
    bl fn_8013322C
    lwz r4, 0x4(r31)
    li r5, 0x1
    lwz r3, lbl_8087F048
    addi r4, r4, 0xb0
    bl fn_80107798
lbl_fn_8018FAAC_0000153C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8018FB0C(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    li r7, 0x0
    stw r0, 0x84(r1)
    stw r31, 0x7c(r1)
    stw r30, 0x78(r1)
    mr r30, r3
    li r3, 0x8
    stw r29, 0x74(r1)
    lis r29, lbl_807396D8@ha
    addi r29, r29, lbl_807396D8@l
    stw r28, 0x70(r1)
    addi r5, r29, 0xd
    mr r28, r4
    li r4, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_8018FB0C_00001618
    lwz r6, 0x4(r28)
    lis r4, lbl_8077D9F8@ha
    stw r6, 0x4(r3)
    addi r4, r4, lbl_8077D9F8@l
    li r5, 0x0
    li r0, 0x33
    stw r4, 0x0(r3)
    li r4, 0x80
    stw r5, 0x58c(r6)
    lwz r5, 0x4(r3)
    stw r0, 0x560(r5)
    lwz r3, 0x4(r3)
    addi r3, r3, 0x7d4
    bl fn_8013322C
    lwz r4, 0x4(r31)
    li r5, 0x1
    lwz r3, lbl_8087F048
    addi r4, r4, 0xb0
    bl fn_80107798
    lwz r5, 0x4(r31)
    addi r3, r1, 0x8
    lfs f1, lbl_80881F7C
    addi r4, r29, 0xe
    addi r5, r5, 0x528
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_8018FB0C_00001618:
    lis r3, lbl_8077D608@ha
    lwzu r5, lbl_8077D608@l(r3)
    lwz r6, 0x4(r28)
    li r0, 0x0
    lwz r4, 0x4(r3)
    lwz r3, 0x8(r3)
    stw r6, 0x10(r1)
    stw r0, 0x0(r30)
    lbz r0, lbl_8087F0BA
    stw r31, 0x14(r1)
    extsb. r0, r0
    stw r5, 0x24(r1)
    stw r4, 0x28(r1)
    stw r3, 0x2c(r1)
    stw r5, 0x18(r1)
    stw r4, 0x1c(r1)
    stw r3, 0x20(r1)
    stw r5, 0x58(r1)
    stw r4, 0x5c(r1)
    stw r3, 0x60(r1)
    stw r6, 0x64(r1)
    stw r31, 0x68(r1)
    bne lbl_fn_8018FB0C_0000169C
    lis r6, lbl_807C7B70@ha
    lis r4, fn_8018FD70@ha
    lis r3, fn_8018FDA0@ha
    li r0, 0x1
    addi r3, r3, fn_8018FDA0@l
    addi r5, r6, lbl_807C7B70@l
    addi r4, r4, fn_8018FD70@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C7B70@l(r6)
    stb r0, lbl_8087F0BA
lbl_fn_8018FB0C_0000169C:
    lwz r7, 0x58(r1)
    addi r3, r1, 0x44
    lwz r6, 0x5c(r1)
    lwz r5, 0x60(r1)
    lwz r4, 0x64(r1)
    lwz r0, 0x68(r1)
    stw r7, 0x44(r1)
    stw r6, 0x48(r1)
    stw r5, 0x4c(r1)
    stw r4, 0x50(r1)
    stw r0, 0x54(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_8018FB0C_00001770
    lwz r7, 0x44(r1)
    li r3, 0x14
    lwz r6, 0x48(r1)
    lwz r5, 0x4c(r1)
    lwz r4, 0x50(r1)
    lwz r0, 0x54(r1)
    stw r7, 0x30(r1)
    stw r6, 0x34(r1)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_fn_8018FB0C_00001734
    lis r3, __files@ha
    lis r4, lbl_8077DC2C@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077DC2C@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8018FB0C_00001734:
    cmpwi r29, 0x0
    beq lbl_fn_8018FB0C_00001764
    lwz r0, 0x30(r1)
    stw r0, 0x0(r29)
    lwz r0, 0x34(r1)
    stw r0, 0x4(r29)
    lwz r0, 0x38(r1)
    stw r0, 0x8(r29)
    lwz r0, 0x3c(r1)
    stw r0, 0xc(r29)
    lwz r0, 0x40(r1)
    stw r0, 0x10(r29)
lbl_fn_8018FB0C_00001764:
    stw r29, 0x4(r30)
    li r0, 0x1
    b lbl_fn_8018FB0C_00001774
lbl_fn_8018FB0C_00001770:
    li r0, 0x0
lbl_fn_8018FB0C_00001774:
    cmpwi r0, 0x0
    beq lbl_fn_8018FB0C_0000178C
    lis r3, lbl_807C7B70@ha
    addi r3, r3, lbl_807C7B70@l
    stw r3, 0x0(r30)
    b lbl_fn_8018FB0C_00001794
lbl_fn_8018FB0C_0000178C:
    li r0, 0x0
    stw r0, 0x0(r30)
lbl_fn_8018FB0C_00001794:
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    lwz r29, 0x74(r1)
    lwz r28, 0x70(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_8018FD70(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r12, 0x0(r3)
    lwz r3, 0xc(r12)
    lwz r4, 0x10(r12)
    bl fn_80695B00
    nop
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8018FDA0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r5, 0x3
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    mr r29, r4
    bne lbl_fn_8018FDA0_0000181C
    lis r3, lbl_8077D698@ha
    addi r3, r3, lbl_8077D698@l
    stw r3, 0x0(r4)
    b lbl_fn_8018FDA0_000018E4
lbl_fn_8018FDA0_0000181C:
    cmpwi r5, 0x0
    bne lbl_fn_8018FDA0_00001894
    lwz r31, 0x0(r3)
    li r3, 0x14
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_8018FDA0_0000185C
    lis r3, __files@ha
    lis r4, lbl_8077DC2C@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077DC2C@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8018FDA0_0000185C:
    cmpwi r30, 0x0
    beq lbl_fn_8018FDA0_0000188C
    lwz r0, 0x4(r31)
    lwz r3, 0x0(r31)
    stw r3, 0x0(r30)
    stw r0, 0x4(r30)
    lwz r0, 0x8(r31)
    stw r0, 0x8(r30)
    lwz r0, 0xc(r31)
    stw r0, 0xc(r30)
    lwz r0, 0x10(r31)
    stw r0, 0x10(r30)
lbl_fn_8018FDA0_0000188C:
    stw r30, 0x0(r29)
    b lbl_fn_8018FDA0_000018E4
lbl_fn_8018FDA0_00001894:
    cmpwi r5, 0x1
    bne lbl_fn_8018FDA0_000018B0
    lwz r3, 0x0(r4)
    bl dtor_80084684
    li r0, 0x0
    stw r0, 0x0(r29)
    b lbl_fn_8018FDA0_000018E4
lbl_fn_8018FDA0_000018B0:
    lwz r5, 0x0(r4)
    lis r3, lbl_8077D698@ha
    lwz r4, lbl_8077D698@l(r3)
    lwz r3, 0x0(r5)
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_8018FDA0_000018DC
    lwz r0, 0x0(r30)
    stw r0, 0x0(r29)
    b lbl_fn_8018FDA0_000018E4
lbl_fn_8018FDA0_000018DC:
    li r0, 0x0
    stw r0, 0x0(r29)
lbl_fn_8018FDA0_000018E4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8018FEBC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r6, lbl_8077D9F8@ha
    li r5, 0x0
    stw r0, 0x24(r1)
    addi r6, r6, lbl_8077D9F8@l
    li r0, 0x33
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r4, 0x4(r3)
    stw r6, 0x0(r3)
    stw r5, 0x58c(r4)
    li r4, 0x80
    lwz r5, 0x4(r3)
    stw r0, 0x560(r5)
    lwz r3, 0x4(r3)
    addi r3, r3, 0x7d4
    bl fn_8013322C
    lwz r4, 0x4(r31)
    li r5, 0x1
    lwz r3, lbl_8087F048
    addi r4, r4, 0xb0
    bl fn_80107798
    lwz r4, 0x4(r31)
    lis r6, lbl_807396D8@ha
    addi r6, r6, lbl_807396D8@l
    lfs f1, lbl_80881F7C
    addi r5, r4, 0x528
    addi r3, r1, 0x8
    addi r4, r6, 0xe
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
