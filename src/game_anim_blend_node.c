#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void fn_80044E0C(void);
extern void fn_8004ED34(void);
extern void fn_800902C0(void);
extern void fn_80092814(void);
extern void fn_8009373C(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800F8548(void);
extern void fn_800FAB80(void);
extern void fn_800FDB20(void);
extern void fn_80101434(void);
extern void fn_8010B250(void);
extern void fn_801231D0(void);
extern void fn_8014DEE4(void);
extern void fn_8014EF48(void);
extern void fn_8015495C(void);
extern void fn_8015D8C0(void);
extern void fn_80161570(void);
extern void fn_8016DA4C(void);
extern void fn_8016DDB0(void);
extern void fn_8016E970(void);
extern void fn_80178A6C(void);
extern void fn_80219558(void);
extern void fn_80219E6C(void);
extern void fn_80232B7C(void);
extern void fn_80239DAC(void);
extern void fn_8023A8B4(void);
extern void fn_80370320(void);
extern void fn_80370A78(void);
extern void fn_80370AE4(void);
extern void fn_803E3384(void);
extern void fn_804438E0(void);
extern void fn_8044D104(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F90D0(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9940(void);
extern void fn_805F99B0(void);
extern void fn_80680CF8(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);
extern void fn_8068B100(void);

/* External data declarations */
extern u8 lbl_80744510[];
extern u8 lbl_807445E8[];
extern u8 lbl_80744608[];

/* Small data declarations */
extern u32 lbl_8087DC30;
extern u32 lbl_8087DC34;
extern u32 lbl_8087EE98;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F490;
extern u32 lbl_8087F4F0;
extern u32 lbl_8087F8A0;
extern u32 lbl_80883670;
extern u32 lbl_80883674;
extern u32 lbl_80883678;
extern u32 lbl_80883688;
extern u32 lbl_8088368C;
extern u32 lbl_80883690;
extern u32 lbl_80883694;
extern u32 lbl_80883698;
extern u32 lbl_8088369C;
extern u32 lbl_808836AC;
extern u32 lbl_808836B0;
extern u32 lbl_808836BC;
extern u32 lbl_808836C0;
extern u32 lbl_808836C8;
extern u32 lbl_80883700;
extern u32 lbl_80883708;
extern u32 lbl_80883728;
extern u32 lbl_8088373C;
extern u32 lbl_80883750;
extern u32 lbl_80883758;
extern u32 lbl_8088375C;
extern u32 lbl_80883760;
extern u32 lbl_80883764;
extern u32 lbl_80883768;
extern u32 lbl_8088376C;
extern u32 lbl_80883770;
extern u32 lbl_80883774;
extern u32 lbl_80883778;
extern u32 lbl_8088377C;
extern u32 lbl_80883780;
extern u32 lbl_80883784;
extern u32 lbl_80883788;
extern u32 lbl_8088378C;

/* Function declarations */
void fn_8026C7A4(void);
void fn_8026C844(void);
void fn_8026CB50(void);
void fn_8026CC28(void);
void fn_8026CDB4(void);
void fn_8026D058(void);
void fn_8026D0F8(void);
void fn_8026DB8C(void);

asm void fn_8026C7A4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    stw r31, 0x14bc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r5, 0x12a4(r30)
    li r0, 0x14
    stw r3, 0x590(r30)
    mr r3, r30
    rlwinm r5, r5, 0, 27, 25
    li r4, 0x9
    stw r31, 0x14c4(r30)
    stw r5, 0x12a4(r30)
    stw r0, 0x58c(r30)
    bl fn_8016E970
    lfs f0, lbl_80883670
    li r0, 0x1
    stw r0, 0x3fc(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80883674
    li r4, 0x0
    stfs f0, 0x2fc(r30)
    li r5, 0x1
    lfs f2, lbl_80883698
    li r6, 0x1
    stfs f0, 0x2e8(r30)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8026C844(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    stfd f31, 0x110(r1)
    psq_st f31, 0x118(r1), 0, 0
    stfd f30, 0x100(r1)
    psq_st f30, 0x108(r1), 0, 0
    stw r31, 0xfc(r1)
    mr r31, r4
    stw r30, 0xf8(r1)
    mr r30, r3
    lwz r12, 0x0(r3)
    lwz r12, 0x48(r12)
    mtctr r12
    bctrl
    mr r3, r30
    bl fn_80178A6C
    mr r3, r30
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    bl fn_8015495C
    mr r3, r30
    bl fn_8016DA4C
    li r0, 0x15
    stw r0, 0x58c(r30)
    mr r3, r30
    li r4, 0x6
    bl fn_8016E970
    lfs f0, lbl_80883670
    li r3, 0x8e
    li r0, 0x1
    stw r3, 0x560(r30)
    lfs f1, lbl_80883674
    addi r3, r30, 0xb0
    stw r0, 0x3fc(r30)
    li r4, 0x0
    lfs f2, lbl_80883758
    li r5, 0x171
    stfs f0, 0x2fc(r30)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r30)
    bl fn_80097C08
    psq_l f1, 0x0(r31), 0, 0
    addi r3, r1, 0x74
    lfs f2, 0x8(r31)
    mr r4, r3
    stfs f2, 0x7c(r1)
    psq_st f1, 0x0(r3), 0, 0
    bl fn_805F98D0
    addi r3, r1, 0x68
    psq_l f1, 0x0(r31), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    addi r4, r1, 0x50
    lfs f2, 0x8(r31)
    addi r31, r1, 0x5c
    lfs f3, 0x6c(r1)
    lfs f0, lbl_8088373C
    stfs f2, 0x6c0(r30)
    fmuls f3, f3, f0
    lfs f0, lbl_8088368C
    stfs f2, 0x70(r1)
    stfs f3, 0x6c(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x6b8(r30), 0, 0
    lfs f3, 0x7c(r1)
    lfs f4, 0x78(r1)
    fneg f5, f3
    lfs f3, 0x74(r1)
    fneg f4, f4
    fneg f3, f3
    stfs f5, 0x58(r1)
    frsp f2, f5
    stfs f3, 0x50(r1)
    fabs f3, f2
    stfs f4, 0x54(r1)
    psq_l f1, 0x0(r4), 0, 0
    frsp f3, f3
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x64(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_8026C844_00000218
    lfs f3, 0x5c(r1)
    lfs f0, lbl_80883674
    fcmpo cr0, f3, f0
    ble lbl_fn_8026C844_0000020C
    lfs f0, lbl_80883690
    b lbl_fn_8026C844_00000210
lbl_fn_8026C844_0000020C:
    lfs f0, lbl_80883694
lbl_fn_8026C844_00000210:
    stfs f0, 0x48(r1)
    b lbl_fn_8026C844_0000022C
lbl_fn_8026C844_00000218:
    frsp f2, f2
    lfs f1, 0x5c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_8026C844_0000022C:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x80
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883674
    addi r4, r1, 0x38
    lfs f30, 0x88(r1)
    mr r5, r4
    lfs f31, 0x84(r1)
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
    lfs f0, lbl_80883670
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x64(r1)
    stfs f3, 0xe0(r1)
    stfs f3, 0xe4(r1)
    stfs f3, 0xe8(r1)
    stfs f0, 0xec(r1)
    stfs f13, 0x8(r1)
    stfs f31, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f13, 0xb0(r1)
    stfs f31, 0xb4(r1)
    stfs f30, 0xb8(r1)
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
    lfs f0, lbl_8088368C
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8026C844_00000348
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80883674
    fcmpo cr0, f3, f0
    ble lbl_fn_8026C844_00000338
    lfs f0, lbl_80883690
    b lbl_fn_8026C844_0000033C
lbl_fn_8026C844_00000338:
    lfs f0, lbl_80883694
lbl_fn_8026C844_0000033C:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_8026C844_0000035C
lbl_fn_8026C844_00000348:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_8026C844_0000035C:
    lfs f2, lbl_80883674
    addi r3, r1, 0x44
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r30, 0x1558
    stfs f2, 0x4c(r1)
    stfs f2, 0x64(r1)
    frsp f2, f2
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x1560(r30)
    psq_l f31, 0x118(r1), 0, 0
    lfd f31, 0x110(r1)
    psq_l f30, 0x108(r1), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    lfd f30, 0x100(r1)
    lwz r31, 0xfc(r1)
    lwz r30, 0xf8(r1)
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_8026CB50(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    stw r31, 0x14bc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r5, 0x12a4(r30)
    li r0, 0x16
    stw r3, 0x590(r30)
    mr r3, r30
    rlwinm r5, r5, 0, 27, 25
    li r4, 0x3
    stw r31, 0x14c4(r30)
    stw r5, 0x12a4(r30)
    stw r0, 0x58c(r30)
    bl fn_8016E970
    lfs f0, lbl_80883670
    li r31, 0x1
    stw r31, 0x3fc(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80883674
    li r4, 0x0
    stfs f0, 0x2fc(r30)
    li r5, 0x33
    lfs f2, lbl_80883698
    li r6, 0x0
    stfs f0, 0x2e8(r30)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    mr r3, r30
    li r4, 0x1
    bl fn_8026D0F8
    stw r31, 0x1644(r30)
    mr r4, r30
    li r5, 0x64
    li r6, 0x0
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x65
    li r6, 0x1
    bl fn_80239DAC
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8026CC28(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r0, 0x1660(r3)
    cmpwi r0, 0x2
    beq lbl_fn_8026CC28_00000510
    li r31, 0x0
    stw r31, 0x14bc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r5, 0x12a4(r29)
    li r0, 0x6
    stw r3, 0x590(r29)
    mr r3, r29
    rlwinm r5, r5, 0, 27, 25
    li r4, 0x3
    stw r31, 0x14c4(r29)
    stw r5, 0x12a4(r29)
    stw r0, 0x58c(r29)
    bl fn_8016E970
    lwz r3, lbl_8087F3C0
    mr r4, r29
    li r5, 0x64
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r29
    li r5, 0x65
    li r6, 0x1
    bl fn_80239DAC
    b lbl_fn_8026CC28_000005F4
lbl_fn_8026CC28_00000510:
    li r31, 0x0
    stw r31, 0x14bc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r5, 0x12a4(r29)
    li r0, 0x17
    stw r3, 0x590(r29)
    mr r3, r29
    rlwinm r5, r5, 0, 27, 25
    li r4, 0x3
    stw r31, 0x14c4(r29)
    stw r5, 0x12a4(r29)
    stw r0, 0x58c(r29)
    bl fn_8016E970
    lfs f1, lbl_80883670
    li r0, 0x1
    stw r0, 0x3fc(r29)
    addi r3, r29, 0xb0
    lfs f2, lbl_80883698
    li r4, 0x0
    stfs f1, 0x2fc(r29)
    li r5, 0x143
    li r6, 0x0
    li r7, 0x0
    stfs f1, 0x2e8(r29)
    li r8, 0x1
    bl fn_80097C08
    addi r3, r29, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    lfs f0, lbl_808836B0
    lis r30, lbl_80744510@ha
    stw r31, 0x1630(r29)
    addi r30, r30, lbl_80744510@l
    fsubs f0, f1, f0
    li r31, 0x0
    stfs f0, 0x2e4(r29)
lbl_fn_8026CC28_000005A4:
    lwz r4, 0x0(r30)
    addi r3, r29, 0xb0
    li r5, 0x1
    bl fn_8009373C
    addi r31, r31, 0x1
    addi r30, r30, 0x4
    cmpwi r31, 0x4
    blt lbl_fn_8026CC28_000005A4
    lwz r0, 0x162c(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8026CC28_000005F4
    lwz r3, lbl_8087F430
    li r4, 0xee
    bl fn_80370A78
    cmpwi r3, 0x0
    bne lbl_fn_8026CC28_000005F4
    lwz r3, lbl_8087F430
    li r4, 0xee
    li r5, 0x1
    bl fn_80370AE4
lbl_fn_8026CC28_000005F4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8026CDB4(void)
{
    nofralloc
    stwu r1, -0x100(r1)
    mflr r0
    stw r0, 0x104(r1)
    stfd f31, 0xf0(r1)
    psq_st f31, 0xf8(r1), 0, 0
    stfd f30, 0xe0(r1)
    psq_st f30, 0xe8(r1), 0, 0
    stw r31, 0xdc(r1)
    li r31, 0x0
    stw r30, 0xd8(r1)
    mr r30, r3
    stw r31, 0x14bc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r5, 0x12a4(r30)
    li r0, 0x18
    stw r3, 0x590(r30)
    mr r3, r30
    rlwinm r5, r5, 0, 27, 25
    li r4, 0x3
    stw r31, 0x14c4(r30)
    stw r5, 0x12a4(r30)
    stw r0, 0x58c(r30)
    bl fn_8016E970
    lfs f1, lbl_80883670
    li r0, 0x1
    stw r0, 0x3fc(r30)
    addi r3, r30, 0xb0
    lfs f2, lbl_80883698
    li r4, 0x0
    stfs f1, 0x2fc(r30)
    li r5, 0x166
    li r6, 0x0
    li r7, 0x0
    stfs f1, 0x2e8(r30)
    li r8, 0x1
    bl fn_80097C08
    lwz r4, 0x14b8(r30)
    addi r3, r1, 0x50
    lfs f0, 0x530(r30)
    addi r31, r1, 0x5c
    lfs f3, 0x530(r4)
    lfs f5, 0x52c(r4)
    fsubs f2, f3, f0
    lfs f4, 0x52c(r30)
    lfs f3, 0x528(r4)
    fsubs f4, f5, f4
    lfs f0, 0x528(r30)
    stfs f2, 0x58(r1)
    fsubs f3, f3, f0
    lfs f0, lbl_8088368C
    stfs f4, 0x54(r1)
    frsp f4, f2
    stfs f3, 0x50(r1)
    fabs f3, f4
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    frsp f3, f3
    stfs f2, 0x64(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_8026CDB4_00000728
    lfs f3, 0x5c(r1)
    lfs f0, lbl_80883674
    fcmpo cr0, f3, f0
    ble lbl_fn_8026CDB4_0000071C
    lfs f0, lbl_80883690
    b lbl_fn_8026CDB4_00000720
lbl_fn_8026CDB4_0000071C:
    lfs f0, lbl_80883694
lbl_fn_8026CDB4_00000720:
    stfs f0, 0x48(r1)
    b lbl_fn_8026CDB4_0000073C
lbl_fn_8026CDB4_00000728:
    fmr f2, f4
    lfs f1, 0x5c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_8026CDB4_0000073C:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x68
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883674
    addi r4, r1, 0x38
    lfs f30, 0x70(r1)
    mr r5, r4
    lfs f31, 0x6c(r1)
    addi r3, r1, 0x98
    lfs f13, 0x68(r1)
    lfs f12, 0x80(r1)
    lfs f11, 0x7c(r1)
    lfs f10, 0x78(r1)
    lfs f9, 0x90(r1)
    lfs f8, 0x8c(r1)
    lfs f7, 0x88(r1)
    lfs f6, 0x94(r1)
    lfs f5, 0x84(r1)
    lfs f4, 0x74(r1)
    lfs f0, lbl_80883670
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x64(r1)
    stfs f3, 0xc8(r1)
    stfs f3, 0xcc(r1)
    stfs f3, 0xd0(r1)
    stfs f0, 0xd4(r1)
    stfs f13, 0x8(r1)
    stfs f31, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f13, 0x98(r1)
    stfs f31, 0x9c(r1)
    stfs f30, 0xa0(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xa8(r1)
    stfs f11, 0xac(r1)
    stfs f12, 0xb0(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0xb8(r1)
    stfs f8, 0xbc(r1)
    stfs f9, 0xc0(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xa4(r1)
    stfs f5, 0xb4(r1)
    stfs f6, 0xc4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_8088368C
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8026CDB4_00000858
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80883674
    fcmpo cr0, f3, f0
    ble lbl_fn_8026CDB4_00000848
    lfs f0, lbl_80883690
    b lbl_fn_8026CDB4_0000084C
lbl_fn_8026CDB4_00000848:
    lfs f0, lbl_80883694
lbl_fn_8026CDB4_0000084C:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_8026CDB4_0000086C
lbl_fn_8026CDB4_00000858:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_8026CDB4_0000086C:
    addi r3, r1, 0x44
    lfs f2, lbl_80883674
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    lfs f0, 0x60(r1)
    stfs f0, 0x538(r30)
    psq_l f31, 0xf8(r1), 0, 0
    lfd f31, 0xf0(r1)
    psq_l f30, 0xe8(r1), 0, 0
    lfd f30, 0xe0(r1)
    lwz r31, 0xdc(r1)
    lwz r30, 0xd8(r1)
    lwz r0, 0x104(r1)
    stfs f2, 0x4c(r1)
    stfs f2, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x100
    blr
}

asm void fn_8026D058(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    stw r31, 0x14bc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r5, 0x12a4(r30)
    li r0, 0x19
    stw r3, 0x590(r30)
    mr r3, r30
    rlwinm r5, r5, 0, 27, 25
    li r4, 0x3
    stw r31, 0x14c4(r30)
    stw r5, 0x12a4(r30)
    stw r0, 0x58c(r30)
    bl fn_8016E970
    lfs f0, lbl_80883670
    li r0, 0x1
    stw r0, 0x3fc(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80883674
    li r4, 0x0
    stfs f0, 0x2fc(r30)
    li r5, 0x165
    lfs f2, lbl_80883698
    li r6, 0x0
    stfs f0, 0x2e8(r30)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8026D0F8(void)
{
    nofralloc
    stwu r1, -0x400(r1)
    mflr r0
    stw r0, 0x404(r1)
    addi r11, r1, 0x3a0
    stfd f31, 0x3f0(r1)
    psq_st f31, 0x3f8(r1), 0, 0
    stfd f30, 0x3e0(r1)
    psq_st f30, 0x3e8(r1), 0, 0
    stfd f29, 0x3d0(r1)
    psq_st f29, 0x3d8(r1), 0, 0
    stfd f28, 0x3c0(r1)
    psq_st f28, 0x3c8(r1), 0, 0
    stfd f27, 0x3b0(r1)
    psq_st f27, 0x3b8(r1), 0, 0
    stfd f26, 0x3a0(r1)
    psq_st f26, 0x3a8(r1), 0, 0
    bl _savegpr_27
    li r0, 0x1
    lis r28, lbl_80744510@ha
    stw r0, 0x1630(r3)
    mr r29, r3
    mr r31, r4
    addi r28, r28, lbl_80744510@l
    li r27, 0x0
lbl_fn_8026D0F8_000009B4:
    lwz r4, 0x0(r28)
    addi r3, r29, 0xb0
    li r5, 0x0
    bl fn_8009373C
    addi r27, r27, 0x1
    addi r28, r28, 0x4
    cmpwi r27, 0x4
    blt lbl_fn_8026D0F8_000009B4
    lwz r30, 0x1660(r29)
    cmpwi r31, 0x0
    stw r31, 0x1660(r29)
    beq lbl_fn_8026D0F8_000009F0
    cmpwi r31, 0x1
    beq lbl_fn_8026D0F8_00000C9C
    b lbl_fn_8026D0F8_000013A0
lbl_fn_8026D0F8_000009F0:
    lwz r4, 0x1624(r29)
    lis r3, lbl_80744608@ha
    li r0, 0x0
    li r5, 0x0
    addi r3, r3, lbl_80744608@l
    stw r0, 0x224(r4)
    addi r4, r3, 0x1e4
    addi r3, r29, 0xb0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8026D0F8_00000A24
    li r28, 0x0
    b lbl_fn_8026D0F8_00000A30
lbl_fn_8026D0F8_00000A24:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r29)
    add r28, r3, r0
lbl_fn_8026D0F8_00000A30:
    lwz r30, 0x1624(r29)
    addi r3, r1, 0xbc
    psq_l f2, 0x8(r28), 0, 0
    psq_l f3, 0x10(r28), 0, 0
    psq_l f4, 0x18(r28), 0, 0
    psq_l f5, 0x20(r28), 0, 0
    psq_l f6, 0x28(r28), 0, 0
    psq_l f1, 0x0(r28), 0, 0
    psq_st f1, 0x18(r30), 0, 0
    psq_st f2, 0x20(r30), 0, 0
    psq_st f3, 0x28(r30), 0, 0
    psq_st f4, 0x30(r30), 0, 0
    psq_st f5, 0x38(r30), 0, 0
    psq_st f6, 0x40(r30), 0, 0
    lfs f8, 0x28(r28)
    lfs f7, 0x18(r28)
    lfs f0, 0x8(r28)
    stfs f0, 0xbc(r1)
    stfs f7, 0xc0(r1)
    stfs f8, 0xc4(r1)
    bl fn_805F9940
    lfs f8, 0x24(r28)
    fmr f31, f1
    lfs f7, 0x14(r28)
    addi r3, r1, 0xc8
    lfs f0, 0x4(r28)
    stfs f0, 0xc8(r1)
    stfs f7, 0xcc(r1)
    stfs f8, 0xd0(r1)
    bl fn_805F9940
    lfs f8, 0x20(r28)
    fmr f30, f1
    lfs f7, 0x10(r28)
    addi r3, r1, 0xd4
    lfs f0, 0x0(r28)
    stfs f0, 0xd4(r1)
    stfs f7, 0xd8(r1)
    stfs f8, 0xdc(r1)
    bl fn_805F9940
    frsp f7, f30
    stfs f1, 0xb0(r1)
    frsp f0, f31
    stfs f30, 0xb4(r1)
    fcmpo cr0, f7, f0
    stfs f31, 0xb8(r1)
    ble lbl_fn_8026D0F8_00000AEC
    b lbl_fn_8026D0F8_00000AF0
lbl_fn_8026D0F8_00000AEC:
    fmr f7, f0
lbl_fn_8026D0F8_00000AF0:
    lfs f8, 0xb0(r1)
    fcmpo cr0, f8, f7
    ble lbl_fn_8026D0F8_00000B00
    b lbl_fn_8026D0F8_00000B18
lbl_fn_8026D0F8_00000B00:
    lfs f8, 0xb4(r1)
    lfs f0, 0xb8(r1)
    fcmpo cr0, f8, f0
    ble lbl_fn_8026D0F8_00000B14
    b lbl_fn_8026D0F8_00000B18
lbl_fn_8026D0F8_00000B14:
    fmr f8, f0
lbl_fn_8026D0F8_00000B18:
    stfs f8, 0x64(r30)
    addi r3, r1, 0x1d0
    lfs f10, lbl_80883674
    addi r6, r1, 0x170
    stfs f10, 0x1668(r29)
    addi r5, r29, 0x166c
    lwz r7, 0x1624(r29)
    mr r4, r3
    lwz r8, 0x14b8(r29)
    lfs f0, 0x34(r7)
    lfs f2, 0x44(r7)
    lfs f7, 0x24(r7)
    stfs f7, 0x170(r1)
    frsp f8, f2
    stfs f0, 0x174(r1)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x1674(r29)
    lfs f0, 0x166c(r29)
    lfs f9, 0x530(r8)
    lfs f7, 0x528(r8)
    fsubs f8, f9, f8
    stfs f2, 0x178(r1)
    fsubs f0, f7, f0
    stfs f8, 0x1d8(r1)
    stfs f0, 0x1d0(r1)
    stfs f10, 0x1d4(r1)
    bl fn_805F98D0
    lfs f9, 0x1d8(r1)
    addi r4, r1, 0x164
    lfs f8, lbl_80883750
    addi r3, r29, 0x1678
    lfs f0, 0x1d4(r1)
    addi r5, r1, 0x1c4
    lfs f7, 0x1d0(r1)
    fmuls f9, f9, f8
    fmuls f10, f0, f8
    lwz r7, 0x14b8(r29)
    fmuls f11, f7, f8
    addi r6, r1, 0x1b8
    lfs f0, 0x530(r7)
    lfs f7, 0x52c(r7)
    fadds f12, f0, f9
    lfs f0, 0x528(r7)
    fadds f8, f7, f10
    lfs f7, lbl_808836C8
    fadds f13, f0, f11
    lfs f0, lbl_808836B0
    fmr f2, f12
    stfs f8, 0x168(r1)
    li r0, 0x0
    lis r7, 0x8000
    stfs f13, 0x164(r1)
    li r8, 0x0
    psq_l f1, 0x0(r4), 0, 0
    addi r4, r1, 0x330
    stfs f2, 0x1680(r29)
    frsp f2, f2
    li r9, 0x0
    psq_st f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    lwz r3, lbl_8087EE98
    lfs f8, 0x1c8(r1)
    stfs f11, 0x158(r1)
    fadds f7, f8, f7
    stfs f10, 0x15c(r1)
    stfs f7, 0x1c8(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    lfs f7, 0x1bc(r1)
    stfs f9, 0x160(r1)
    fsubs f0, f7, f0
    stfs f12, 0x16c(r1)
    stw r0, 0x364(r1)
    stw r0, 0x368(r1)
    stw r0, 0x36c(r1)
    stw r0, 0x370(r1)
    stfs f2, 0x1cc(r1)
    stfs f2, 0x1c0(r1)
    stfs f0, 0x1bc(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_8026D0F8_00000C7C
    addi r3, r1, 0x334
    lfs f2, 0x33c(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r29, 0x1678
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x1680(r29)
lbl_fn_8026D0F8_00000C7C:
    lfs f7, 0x52c(r29)
    lfs f0, lbl_80883750
    fadds f0, f7, f0
    stfs f0, 0x167c(r29)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x1684(r29)
    b lbl_fn_8026D0F8_000013A0
lbl_fn_8026D0F8_00000C9C:
    lwz r4, lbl_8087F8A0
    cmpwi r30, 0x3
    lwz r3, 0x1624(r29)
    li r0, 0x0
    lwz r31, 0x48(r4)
    stw r0, 0x224(r3)
    bne lbl_fn_8026D0F8_00000DE0
    lis r4, lbl_80744608@ha
    addi r28, r31, 0xb0
    addi r4, r4, lbl_80744608@l
    li r5, 0x0
    mr r3, r28
    addi r4, r4, 0x1e4
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8026D0F8_00000CE4
    li r28, 0x0
    b lbl_fn_8026D0F8_00000CF0
lbl_fn_8026D0F8_00000CE4:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r28)
    add r28, r3, r0
lbl_fn_8026D0F8_00000CF0:
    lwz r27, 0x1624(r29)
    addi r3, r1, 0x8c
    psq_l f2, 0x8(r28), 0, 0
    psq_l f3, 0x10(r28), 0, 0
    psq_l f4, 0x18(r28), 0, 0
    psq_l f5, 0x20(r28), 0, 0
    psq_l f6, 0x28(r28), 0, 0
    psq_l f1, 0x0(r28), 0, 0
    psq_st f1, 0x18(r27), 0, 0
    psq_st f2, 0x20(r27), 0, 0
    psq_st f3, 0x28(r27), 0, 0
    psq_st f4, 0x30(r27), 0, 0
    psq_st f5, 0x38(r27), 0, 0
    psq_st f6, 0x40(r27), 0, 0
    lfs f8, 0x28(r28)
    lfs f7, 0x18(r28)
    lfs f0, 0x8(r28)
    stfs f0, 0x8c(r1)
    stfs f7, 0x90(r1)
    stfs f8, 0x94(r1)
    bl fn_805F9940
    lfs f8, 0x24(r28)
    fmr f31, f1
    lfs f7, 0x14(r28)
    addi r3, r1, 0x98
    lfs f0, 0x4(r28)
    stfs f0, 0x98(r1)
    stfs f7, 0x9c(r1)
    stfs f8, 0xa0(r1)
    bl fn_805F9940
    lfs f8, 0x20(r28)
    fmr f30, f1
    lfs f7, 0x10(r28)
    addi r3, r1, 0xa4
    lfs f0, 0x0(r28)
    stfs f0, 0xa4(r1)
    stfs f7, 0xa8(r1)
    stfs f8, 0xac(r1)
    bl fn_805F9940
    frsp f7, f30
    stfs f1, 0x80(r1)
    frsp f0, f31
    stfs f30, 0x84(r1)
    fcmpo cr0, f7, f0
    stfs f31, 0x88(r1)
    ble lbl_fn_8026D0F8_00000DAC
    b lbl_fn_8026D0F8_00000DB0
lbl_fn_8026D0F8_00000DAC:
    fmr f7, f0
lbl_fn_8026D0F8_00000DB0:
    lfs f8, 0x80(r1)
    fcmpo cr0, f8, f7
    ble lbl_fn_8026D0F8_00000DC0
    b lbl_fn_8026D0F8_00000DD8
lbl_fn_8026D0F8_00000DC0:
    lfs f8, 0x84(r1)
    lfs f0, 0x88(r1)
    fcmpo cr0, f8, f0
    ble lbl_fn_8026D0F8_00000DD4
    b lbl_fn_8026D0F8_00000DD8
lbl_fn_8026D0F8_00000DD4:
    fmr f8, f0
lbl_fn_8026D0F8_00000DD8:
    stfs f8, 0x64(r27)
    b lbl_fn_8026D0F8_00000F00
lbl_fn_8026D0F8_00000DE0:
    lis r4, lbl_80744608@ha
    addi r3, r29, 0xb0
    addi r4, r4, lbl_80744608@l
    li r5, 0x0
    addi r4, r4, 0x1e4
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8026D0F8_00000E08
    li r28, 0x0
    b lbl_fn_8026D0F8_00000E14
lbl_fn_8026D0F8_00000E08:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r29)
    add r28, r3, r0
lbl_fn_8026D0F8_00000E14:
    lwz r27, 0x1624(r29)
    addi r3, r1, 0x5c
    psq_l f2, 0x8(r28), 0, 0
    psq_l f3, 0x10(r28), 0, 0
    psq_l f4, 0x18(r28), 0, 0
    psq_l f5, 0x20(r28), 0, 0
    psq_l f6, 0x28(r28), 0, 0
    psq_l f1, 0x0(r28), 0, 0
    psq_st f1, 0x18(r27), 0, 0
    psq_st f2, 0x20(r27), 0, 0
    psq_st f3, 0x28(r27), 0, 0
    psq_st f4, 0x30(r27), 0, 0
    psq_st f5, 0x38(r27), 0, 0
    psq_st f6, 0x40(r27), 0, 0
    lfs f8, 0x28(r28)
    lfs f7, 0x18(r28)
    lfs f0, 0x8(r28)
    stfs f0, 0x5c(r1)
    stfs f7, 0x60(r1)
    stfs f8, 0x64(r1)
    bl fn_805F9940
    lfs f8, 0x24(r28)
    fmr f30, f1
    lfs f7, 0x14(r28)
    addi r3, r1, 0x68
    lfs f0, 0x4(r28)
    stfs f0, 0x68(r1)
    stfs f7, 0x6c(r1)
    stfs f8, 0x70(r1)
    bl fn_805F9940
    lfs f8, 0x20(r28)
    fmr f31, f1
    lfs f7, 0x10(r28)
    addi r3, r1, 0x74
    lfs f0, 0x0(r28)
    stfs f0, 0x74(r1)
    stfs f7, 0x78(r1)
    stfs f8, 0x7c(r1)
    bl fn_805F9940
    frsp f7, f31
    stfs f1, 0x50(r1)
    frsp f0, f30
    stfs f31, 0x54(r1)
    fcmpo cr0, f7, f0
    stfs f30, 0x58(r1)
    ble lbl_fn_8026D0F8_00000ED0
    b lbl_fn_8026D0F8_00000ED4
lbl_fn_8026D0F8_00000ED0:
    fmr f7, f0
lbl_fn_8026D0F8_00000ED4:
    lfs f8, 0x50(r1)
    fcmpo cr0, f8, f7
    ble lbl_fn_8026D0F8_00000EE4
    b lbl_fn_8026D0F8_00000EFC
lbl_fn_8026D0F8_00000EE4:
    lfs f8, 0x54(r1)
    lfs f0, 0x58(r1)
    fcmpo cr0, f8, f0
    ble lbl_fn_8026D0F8_00000EF8
    b lbl_fn_8026D0F8_00000EFC
lbl_fn_8026D0F8_00000EF8:
    fmr f8, f0
lbl_fn_8026D0F8_00000EFC:
    stfs f8, 0x64(r27)
lbl_fn_8026D0F8_00000F00:
    lfs f7, lbl_80883674
    addi r4, r1, 0x1ac
    stfs f7, 0x1668(r29)
    addi r7, r1, 0x14c
    lwz r8, 0x1624(r29)
    addi r6, r29, 0x166c
    lfs f0, lbl_80883670
    addi r3, r1, 0x2b0
    lfs f8, 0x44(r8)
    mr r5, r4
    lfs f9, 0x34(r8)
    lfs f10, 0x24(r8)
    fmr f2, f8
    stfs f10, 0x14c(r1)
    stfs f9, 0x150(r1)
    psq_l f1, 0x0(r7), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x1674(r29)
    stfs f7, 0x1ac(r1)
    stfs f7, 0x1b0(r1)
    stfs f0, 0x1b4(r1)
    psq_l f1, 0x18(r8), 0, 0
    psq_l f2, 0x20(r8), 0, 0
    psq_l f3, 0x28(r8), 0, 0
    psq_l f4, 0x30(r8), 0, 0
    psq_l f5, 0x38(r8), 0, 0
    psq_l f6, 0x40(r8), 0, 0
    psq_st f6, 0x28(r3), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    psq_st f4, 0x18(r3), 0, 0
    stfs f8, 0x154(r1)
    psq_st f1, 0x0(r3), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    stfs f7, 0x2bc(r1)
    stfs f7, 0x2cc(r1)
    stfs f7, 0x2dc(r1)
    bl fn_805F93C0
    lfs f2, 0x1b4(r1)
    addi r3, r1, 0x1ac
    lfs f0, lbl_8088368C
    addi r28, r1, 0x140
    fabs f7, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    frsp f7, f7
    stfs f2, 0x148(r1)
    fcmpo cr0, f7, f0
    bge lbl_fn_8026D0F8_00000FE8
    lfs f7, 0x140(r1)
    lfs f0, lbl_80883674
    fcmpo cr0, f7, f0
    ble lbl_fn_8026D0F8_00000FDC
    lfs f0, lbl_80883690
    b lbl_fn_8026D0F8_00000FE0
lbl_fn_8026D0F8_00000FDC:
    lfs f0, lbl_80883694
lbl_fn_8026D0F8_00000FE0:
    stfs f0, 0x48(r1)
    b lbl_fn_8026D0F8_00000FFC
lbl_fn_8026D0F8_00000FE8:
    frsp f2, f2
    lfs f1, 0x140(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_8026D0F8_00000FFC:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x240
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f7, lbl_80883674
    addi r4, r1, 0x38
    lfs f26, 0x248(r1)
    mr r5, r4
    lfs f27, 0x244(r1)
    addi r3, r1, 0x270
    lfs f28, 0x240(r1)
    lfs f29, 0x258(r1)
    lfs f31, 0x254(r1)
    lfs f30, 0x250(r1)
    lfs f13, 0x268(r1)
    lfs f12, 0x264(r1)
    lfs f11, 0x260(r1)
    lfs f10, 0x26c(r1)
    lfs f9, 0x25c(r1)
    lfs f8, 0x24c(r1)
    lfs f0, lbl_80883670
    psq_l f1, 0x0(r28), 0, 0
    lfs f2, 0x148(r1)
    stfs f7, 0x2a0(r1)
    stfs f7, 0x2a4(r1)
    stfs f7, 0x2a8(r1)
    stfs f0, 0x2ac(r1)
    stfs f28, 0x8(r1)
    stfs f27, 0xc(r1)
    stfs f26, 0x10(r1)
    stfs f28, 0x270(r1)
    stfs f27, 0x274(r1)
    stfs f26, 0x278(r1)
    stfs f30, 0x14(r1)
    stfs f31, 0x18(r1)
    stfs f29, 0x1c(r1)
    stfs f30, 0x280(r1)
    stfs f31, 0x284(r1)
    stfs f29, 0x288(r1)
    stfs f11, 0x20(r1)
    stfs f12, 0x24(r1)
    stfs f13, 0x28(r1)
    stfs f11, 0x290(r1)
    stfs f12, 0x294(r1)
    stfs f13, 0x298(r1)
    stfs f8, 0x2c(r1)
    stfs f9, 0x30(r1)
    stfs f10, 0x34(r1)
    stfs f8, 0x27c(r1)
    stfs f9, 0x28c(r1)
    stfs f10, 0x29c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_8088368C
    fabs f7, f2
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_8026D0F8_00001118
    lfs f7, 0x3c(r1)
    lfs f0, lbl_80883674
    fcmpo cr0, f7, f0
    ble lbl_fn_8026D0F8_00001108
    lfs f0, lbl_80883690
    b lbl_fn_8026D0F8_0000110C
lbl_fn_8026D0F8_00001108:
    lfs f0, lbl_80883694
lbl_fn_8026D0F8_0000110C:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_8026D0F8_0000112C
lbl_fn_8026D0F8_00001118:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_8026D0F8_0000112C:
    addi r3, r1, 0x44
    lfs f2, lbl_80883674
    psq_l f1, 0x0(r3), 0, 0
    cmpwi r30, 0x3
    psq_st f1, 0x0(r28), 0, 0
    li r0, 0x0
    lfs f0, lbl_8088375C
    lfs f7, 0x140(r1)
    stfs f2, 0x4c(r1)
    fsubs f0, f7, f0
    stfs f2, 0x148(r1)
    stfs f0, 0x1664(r29)
    stw r0, 0x314(r1)
    stw r0, 0x318(r1)
    stw r0, 0x31c(r1)
    stw r0, 0x320(r1)
    bne lbl_fn_8026D0F8_00001178
    addi r4, r31, 0x528
    b lbl_fn_8026D0F8_0000117C
lbl_fn_8026D0F8_00001178:
    addi r4, r29, 0x528
lbl_fn_8026D0F8_0000117C:
    lfs f2, 0x8(r4)
    addi r3, r1, 0x1a0
    psq_l f1, 0x0(r4), 0, 0
    cmpwi r30, 0x3
    psq_st f1, 0x0(r3), 0, 0
    addi r4, r1, 0x194
    lfs f0, lbl_808836C8
    lfs f7, 0x1a4(r1)
    stfs f2, 0x1a8(r1)
    fadds f0, f7, f0
    stfs f2, 0x19c(r1)
    stfs f0, 0x1a4(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    bne lbl_fn_8026D0F8_000011F4
    lfs f7, lbl_80883674
    addi r3, r1, 0x210
    lfs f0, lbl_80883670
    li r4, 0x79
    stfs f7, 0x134(r1)
    stfs f7, 0x138(r1)
    stfs f0, 0x13c(r1)
    lfs f1, 0x538(r31)
    bl fn_805F8E70
    addi r4, r1, 0x134
    addi r3, r1, 0x210
    mr r5, r4
    bl fn_805F93C0
    addi r4, r1, 0x134
    b lbl_fn_8026D0F8_0000122C
lbl_fn_8026D0F8_000011F4:
    lfs f7, lbl_80883674
    addi r3, r1, 0x1e0
    lfs f0, lbl_80883670
    li r4, 0x79
    stfs f7, 0x128(r1)
    stfs f7, 0x12c(r1)
    stfs f0, 0x130(r1)
    lfs f1, 0x538(r29)
    bl fn_805F8E70
    addi r4, r1, 0x128
    addi r3, r1, 0x1e0
    mr r5, r4
    bl fn_805F93C0
    addi r4, r1, 0x128
lbl_fn_8026D0F8_0000122C:
    psq_l f1, 0x0(r4), 0, 0
    addi r3, r1, 0x188
    lfs f2, 0x8(r4)
    addi r4, r1, 0x104
    lfs f7, lbl_80883674
    addi r5, r1, 0x110
    lfs f0, lbl_80883670
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x190(r1)
    stfs f7, 0x104(r1)
    stfs f0, 0x108(r1)
    stfs f7, 0x10c(r1)
    bl fn_805F99B0
    lfs f7, 0x118(r1)
    addi r3, r1, 0x17c
    lfs f0, 0x190(r1)
    addi r5, r1, 0x11c
    lfs f9, 0x114(r1)
    mr r4, r3
    fsubs f2, f7, f0
    lfs f8, 0x18c(r1)
    lfs f7, 0x110(r1)
    lfs f0, 0x188(r1)
    fsubs f8, f9, f8
    stfs f2, 0x124(r1)
    fsubs f0, f7, f0
    stfs f8, 0x120(r1)
    stfs f0, 0x11c(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x184(r1)
    bl fn_805F98D0
    lfs f9, lbl_80883760
    addi r6, r1, 0x194
    lfs f7, 0x180(r1)
    addi r3, r29, 0x1678
    lfs f0, 0x17c(r1)
    addi r4, r1, 0x2e0
    fmuls f11, f7, f9
    lfs f10, 0x184(r1)
    fmuls f12, f0, f9
    lfs f8, 0x194(r1)
    fmuls f9, f10, f9
    lfs f0, 0x19c(r1)
    fadds f8, f8, f12
    lfs f7, 0x198(r1)
    fadds f2, f0, f9
    stfs f12, 0xf8(r1)
    fadds f0, f7, f11
    addi r5, r1, 0x1a0
    stfs f8, 0x194(r1)
    lis r7, 0x8000
    li r8, 0x0
    li r9, 0x0
    stfs f0, 0x198(r1)
    stfs f2, 0x19c(r1)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x1680(r29)
    stfs f11, 0xfc(r1)
    lwz r3, lbl_8087EE98
    stfs f9, 0x100(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_8026D0F8_00001390
    lfs f9, 0x184(r1)
    addi r4, r1, 0xec
    lfs f8, lbl_808836BC
    addi r3, r29, 0x1678
    lfs f0, 0x180(r1)
    fmuls f9, f9, f8
    lfs f7, 0x17c(r1)
    fmuls f10, f0, f8
    lfs f0, 0x2ec(r1)
    fmuls f8, f7, f8
    lfs f7, 0x2e8(r1)
    fsubs f2, f0, f9
    lfs f0, 0x2e4(r1)
    fsubs f7, f7, f10
    stfs f8, 0xe0(r1)
    fsubs f0, f0, f8
    stfs f7, 0xf0(r1)
    stfs f0, 0xec(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f10, 0xe4(r1)
    stfs f9, 0xe8(r1)
    stfs f2, 0xf4(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x1680(r29)
lbl_fn_8026D0F8_00001390:
    lfs f7, 0x52c(r29)
    lfs f0, lbl_80883764
    fadds f0, f7, f0
    stfs f0, 0x167c(r29)
lbl_fn_8026D0F8_000013A0:
    addi r11, r1, 0x3a0
    psq_l f31, 0x3f8(r1), 0, 0
    lfd f31, 0x3f0(r1)
    psq_l f30, 0x3e8(r1), 0, 0
    lfd f30, 0x3e0(r1)
    psq_l f29, 0x3d8(r1), 0, 0
    lfd f29, 0x3d0(r1)
    psq_l f28, 0x3c8(r1), 0, 0
    lfd f28, 0x3c0(r1)
    psq_l f27, 0x3b8(r1), 0, 0
    lfd f27, 0x3b0(r1)
    psq_l f26, 0x3a8(r1), 0, 0
    lfd f26, 0x3a0(r1)
    bl _restgpr_27
    lwz r0, 0x404(r1)
    mtlr r0
    addi r1, r1, 0x400
    blr
}

asm void fn_8026DB8C(void)
{
    nofralloc
    stwu r1, -0x7b0(r1)
    mflr r0
    stw r0, 0x7b4(r1)
    addi r11, r1, 0x730
    stfd f31, 0x7a0(r1)
    psq_st f31, 0x7a8(r1), 0, 0
    stfd f30, 0x790(r1)
    psq_st f30, 0x798(r1), 0, 0
    stfd f29, 0x780(r1)
    psq_st f29, 0x788(r1), 0, 0
    stfd f28, 0x770(r1)
    psq_st f28, 0x778(r1), 0, 0
    stfd f27, 0x760(r1)
    psq_st f27, 0x768(r1), 0, 0
    stfd f26, 0x750(r1)
    psq_st f26, 0x758(r1), 0, 0
    stfd f25, 0x740(r1)
    psq_st f25, 0x748(r1), 0, 0
    stfd f24, 0x730(r1)
    psq_st f24, 0x738(r1), 0, 0
    bl _savegpr_27
    lwz r0, 0x1660(r3)
    mr r28, r3
    cmpwi r0, 0x0
    beq lbl_fn_8026DB8C_00001468
    cmpwi r0, 0x1
    beq lbl_fn_8026DB8C_000024CC
    cmpwi r0, 0x2
    beq lbl_fn_8026DB8C_000027D8
    cmpwi r0, 0x3
    beq lbl_fn_8026DB8C_00002A30
    b lbl_fn_8026DB8C_00002B38
lbl_fn_8026DB8C_00001468:
    lfs f7, 0x1680(r3)
    lfs f0, 0x1674(r3)
    lfs f9, 0x167c(r3)
    fsubs f10, f7, f0
    lfs f8, 0x1670(r3)
    lfs f7, 0x1678(r3)
    lfs f0, 0x166c(r3)
    fsubs f8, f9, f8
    addi r3, r1, 0x2b4
    fsubs f0, f7, f0
    stfs f8, 0x2b8(r1)
    stfs f0, 0x2b4(r1)
    stfs f10, 0x2bc(r1)
    bl fn_805F9940
    lfs f0, lbl_80883728
    lfs f24, lbl_80883670
    fdivs f0, f0, f1
    fcmpo cr0, f24, f0
    bge lbl_fn_8026DB8C_000014B8
    b lbl_fn_8026DB8C_000014C8
lbl_fn_8026DB8C_000014B8:
    addi r3, r1, 0x2b4
    bl fn_805F9940
    lfs f0, lbl_80883728
    fdivs f24, f0, f1
lbl_fn_8026DB8C_000014C8:
    lfs f7, 0x1668(r28)
    li r31, 0x0
    lfs f0, lbl_80883670
    fcmpo cr0, f7, f0
    cror eq, gt, eq
    mfcr r0
    extrwi. r0, r0, 1, 2
    beq lbl_fn_8026DB8C_000014EC
    lfs f24, lbl_80883698
lbl_fn_8026DB8C_000014EC:
    cmpwi r0, 0x0
    bne lbl_fn_8026DB8C_000014F8
    li r31, 0x1
lbl_fn_8026DB8C_000014F8:
    lfs f7, 0x1668(r28)
    lfs f11, lbl_80883670
    fcmpo cr0, f11, f7
    bge lbl_fn_8026DB8C_0000150C
    b lbl_fn_8026DB8C_00001510
lbl_fn_8026DB8C_0000150C:
    fmr f11, f7
lbl_fn_8026DB8C_00001510:
    lfs f0, 0x1680(r28)
    lfs f10, 0x1674(r28)
    lfs f8, 0x167c(r28)
    fsubs f29, f0, f10
    lfs f9, 0x1670(r28)
    lfs f0, 0x1678(r28)
    fsubs f31, f8, f9
    lfs f8, 0x166c(r28)
    fmuls f13, f29, f11
    fsubs f30, f0, f8
    lwz r3, lbl_8087EFA8
    fmuls f12, f31, f11
    fadds f10, f13, f10
    lfs f0, lbl_80883670
    fmuls f11, f30, f11
    fadds f9, f12, f9
    stfs f10, 0x2b0(r1)
    fadds f8, f11, f8
    stfs f9, 0x2ac(r1)
    stfs f8, 0x2a8(r1)
    lfs f9, 0x3a4(r3)
    lfs f8, 0x1668(r28)
    stfs f30, 0x17c(r1)
    fmadds f8, f24, f9, f8
    stfs f31, 0x180(r1)
    fcmpo cr0, f0, f8
    stfs f29, 0x184(r1)
    stfs f11, 0x170(r1)
    stfs f12, 0x174(r1)
    stfs f13, 0x178(r1)
    stfs f8, 0x1668(r28)
    bge lbl_fn_8026DB8C_00001594
    b lbl_fn_8026DB8C_00001598
lbl_fn_8026DB8C_00001594:
    fmr f0, f8
lbl_fn_8026DB8C_00001598:
    lfs f9, 0x1680(r28)
    lfs f11, 0x1674(r28)
    lfs f8, 0x167c(r28)
    fsubs f31, f9, f11
    lfs f10, 0x1670(r28)
    lfs f9, 0x1678(r28)
    fsubs f30, f8, f10
    lfs f8, 0x166c(r28)
    fmuls f29, f31, f0
    fsubs f9, f9, f8
    lfs f1, lbl_80883670
    fmuls f13, f30, f0
    fadds f11, f29, f11
    stfs f9, 0x164(r1)
    fmuls f12, f9, f0
    fadds f9, f13, f10
    stfs f11, 0x2a4(r1)
    fadds f0, f12, f8
    stfs f9, 0x2a0(r1)
    stfs f0, 0x29c(r1)
    lfs f0, 0x1668(r28)
    stfs f30, 0x168(r1)
    fcmpo cr0, f0, f1
    stfs f31, 0x16c(r1)
    stfs f12, 0x158(r1)
    stfs f13, 0x15c(r1)
    stfs f29, 0x160(r1)
    cror eq, gt, eq
    bne lbl_fn_8026DB8C_00001730
    fcmpo cr0, f7, f1
    bge lbl_fn_8026DB8C_00001640
    lis r4, lbl_80744608@ha
    addi r3, r1, 0x24
    addi r4, r4, lbl_80744608@l
    addi r5, r1, 0x29c
    addi r4, r4, 0x236
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x24
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_8026DB8C_00001640:
    lfs f7, 0x1668(r28)
    lfs f0, lbl_80883678
    fcmpo cr0, f7, f0
    cror eq, gt, eq
    bne lbl_fn_8026DB8C_00001730
    li r0, 0x2
    stw r0, 0x1660(r28)
    stfs f0, 0x1668(r28)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    mr r27, r3
    li r3, 0x61a
    bl fn_80219E6C
    mr r30, r3
    mr r3, r28
    li r4, 0x3e8
    bl fn_80232B7C
    lfs f1, lbl_80883670
    li r29, -0x1
    stfs f1, 0x148(r1)
    li r0, 0x1
    lwz r3, lbl_8087F3C0
    addi r4, r28, 0x157c
    stfs f1, 0x14c(r1)
    addi r7, r28, 0x1678
    addi r8, r28, 0x534
    addi r9, r1, 0x148
    stfs f1, 0x150(r1)
    li r5, 0x0
    li r6, 0x0
    li r10, -0x1
    stfs f1, 0x154(r1)
    stw r29, 0x8(r1)
    stw r0, 0xc(r1)
    bl fn_8023A8B4
    lwz r3, lbl_8087F048
    mr r4, r28
    lfs f1, lbl_80883674
    mr r5, r30
    stw r29, 0x8(r1)
    mr r6, r27
    lfs f2, lbl_80883670
    addi r7, r28, 0x1678
    stw r29, 0xc(r1)
    addi r8, r28, 0x534
    li r9, 0x0
    li r10, 0x1e
    bl fn_800FAB80
    lis r4, lbl_80744608@ha
    lfs f1, lbl_80883670
    addi r4, r4, lbl_80744608@l
    addi r3, r1, 0x20
    addi r4, r4, 0x243
    addi r5, r1, 0x29c
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x20
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_8026DB8C_00001730:
    lfs f24, lbl_80883670
    lfs f0, 0x1668(r28)
    fcmpo cr0, f24, f0
    bge lbl_fn_8026DB8C_00001744
    b lbl_fn_8026DB8C_00001748
lbl_fn_8026DB8C_00001744:
    fmr f24, f0
lbl_fn_8026DB8C_00001748:
    lfs f0, 0x1680(r28)
    addi r3, r1, 0x2b4
    lfs f10, 0x1674(r28)
    addi r29, r1, 0x284
    lfs f9, 0x1670(r28)
    fsubs f29, f0, f10
    lfs f0, 0x167c(r28)
    lfs f2, 0x2bc(r1)
    fsubs f11, f0, f9
    lfs f8, 0x1678(r28)
    lfs f7, 0x166c(r28)
    fmuls f13, f29, f24
    stfs f11, 0x140(r1)
    fsubs f8, f8, f7
    fmuls f12, f11, f24
    lfs f0, lbl_8088368C
    fadds f10, f13, f10
    fmuls f11, f8, f24
    stfs f8, 0x13c(r1)
    fabs f25, f2
    fadds f8, f12, f9
    psq_l f1, 0x0(r3), 0, 0
    fadds f7, f11, f7
    frsp f24, f25
    stfs f29, 0x144(r1)
    stfs f11, 0x130(r1)
    fcmpo cr0, f24, f0
    stfs f12, 0x134(r1)
    stfs f13, 0x138(r1)
    stfs f7, 0x290(r1)
    stfs f8, 0x294(r1)
    stfs f10, 0x298(r1)
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x28c(r1)
    bge lbl_fn_8026DB8C_000017F8
    lfs f7, 0x284(r1)
    lfs f0, lbl_80883674
    fcmpo cr0, f7, f0
    ble lbl_fn_8026DB8C_000017EC
    lfs f0, lbl_80883690
    b lbl_fn_8026DB8C_000017F0
lbl_fn_8026DB8C_000017EC:
    lfs f0, lbl_80883694
lbl_fn_8026DB8C_000017F0:
    stfs f0, 0x128(r1)
    b lbl_fn_8026DB8C_0000180C
lbl_fn_8026DB8C_000017F8:
    frsp f2, f2
    lfs f1, 0x284(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x128(r1)
lbl_fn_8026DB8C_0000180C:
    lfs f0, 0x128(r1)
    addi r3, r1, 0x570
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f7, lbl_80883674
    addi r4, r1, 0x118
    lfs f26, 0x578(r1)
    mr r5, r4
    lfs f27, 0x574(r1)
    addi r3, r1, 0x5a0
    lfs f28, 0x570(r1)
    lfs f31, 0x588(r1)
    lfs f30, 0x584(r1)
    lfs f29, 0x580(r1)
    lfs f13, 0x598(r1)
    lfs f12, 0x594(r1)
    lfs f11, 0x590(r1)
    lfs f10, 0x59c(r1)
    lfs f9, 0x58c(r1)
    lfs f8, 0x57c(r1)
    lfs f0, lbl_80883670
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x28c(r1)
    stfs f7, 0x5d0(r1)
    stfs f7, 0x5d4(r1)
    stfs f7, 0x5d8(r1)
    stfs f0, 0x5dc(r1)
    stfs f28, 0xe8(r1)
    stfs f27, 0xec(r1)
    stfs f26, 0xf0(r1)
    stfs f28, 0x5a0(r1)
    stfs f27, 0x5a4(r1)
    stfs f26, 0x5a8(r1)
    stfs f29, 0xf4(r1)
    stfs f30, 0xf8(r1)
    stfs f31, 0xfc(r1)
    stfs f29, 0x5b0(r1)
    stfs f30, 0x5b4(r1)
    stfs f31, 0x5b8(r1)
    stfs f11, 0x100(r1)
    stfs f12, 0x104(r1)
    stfs f13, 0x108(r1)
    stfs f11, 0x5c0(r1)
    stfs f12, 0x5c4(r1)
    stfs f13, 0x5c8(r1)
    stfs f8, 0x10c(r1)
    stfs f9, 0x110(r1)
    stfs f10, 0x114(r1)
    stfs f8, 0x5ac(r1)
    stfs f9, 0x5bc(r1)
    stfs f10, 0x5cc(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x120(r1)
    bl fn_805F9750
    lfs f2, 0x120(r1)
    lfs f0, lbl_8088368C
    fabs f7, f2
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_8026DB8C_00001928
    lfs f7, 0x11c(r1)
    lfs f0, lbl_80883674
    fcmpo cr0, f7, f0
    ble lbl_fn_8026DB8C_00001918
    lfs f0, lbl_80883690
    b lbl_fn_8026DB8C_0000191C
lbl_fn_8026DB8C_00001918:
    lfs f0, lbl_80883694
lbl_fn_8026DB8C_0000191C:
    fneg f0, f0
    stfs f0, 0x124(r1)
    b lbl_fn_8026DB8C_0000193C
lbl_fn_8026DB8C_00001928:
    lfs f1, 0x11c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x124(r1)
lbl_fn_8026DB8C_0000193C:
    addi r3, r1, 0x124
    lfs f2, lbl_80883674
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_807445E8@ha
    psq_st f1, 0x0(r29), 0, 0
    lfs f8, lbl_80883690
    lfs f0, 0x284(r1)
    lfs f7, 0x288(r1)
    fneg f9, f0
    lfs f0, lbl_80883768
    stfs f2, 0x28c(r1)
    fadds f0, f7, f0
    fsubs f1, f9, f8
    stfs f2, 0x12c(r1)
    lfd f2, lbl_807445E8@l(r3)
    stfs f1, 0x284(r1)
    stfs f0, 0x288(r1)
    bl fn_8068AEA8
    frsp f7, f1
    lfs f0, lbl_80883768
    fcmpo cr0, f7, f0
    ble lbl_fn_8026DB8C_0000199C
    lfs f0, lbl_80883700
    fsubs f7, f7, f0
lbl_fn_8026DB8C_0000199C:
    lfs f0, lbl_8088376C
    fcmpo cr0, f7, f0
    bge lbl_fn_8026DB8C_000019B0
    lfs f0, lbl_80883700
    fadds f7, f7, f0
lbl_fn_8026DB8C_000019B0:
    lis r3, lbl_807445E8@ha
    lfs f1, 0x288(r1)
    stfs f7, 0x284(r1)
    lfd f2, lbl_807445E8@l(r3)
    bl fn_8068AEA8
    frsp f7, f1
    lfs f0, lbl_80883768
    fcmpo cr0, f7, f0
    ble lbl_fn_8026DB8C_000019DC
    lfs f0, lbl_80883700
    fsubs f7, f7, f0
lbl_fn_8026DB8C_000019DC:
    lfs f0, lbl_8088376C
    fcmpo cr0, f7, f0
    bge lbl_fn_8026DB8C_000019F0
    lfs f0, lbl_80883700
    fadds f7, f7, f0
lbl_fn_8026DB8C_000019F0:
    lis r3, lbl_807445E8@ha
    lfs f1, 0x28c(r1)
    stfs f7, 0x288(r1)
    lfd f2, lbl_807445E8@l(r3)
    bl fn_8068AEA8
    frsp f7, f1
    lfs f0, lbl_80883768
    fcmpo cr0, f7, f0
    ble lbl_fn_8026DB8C_00001A1C
    lfs f0, lbl_80883700
    fsubs f7, f7, f0
lbl_fn_8026DB8C_00001A1C:
    lfs f0, lbl_8088376C
    fcmpo cr0, f7, f0
    bge lbl_fn_8026DB8C_00001A30
    lfs f0, lbl_80883700
    fadds f7, f7, f0
lbl_fn_8026DB8C_00001A30:
    stfs f7, 0x28c(r1)
    lfs f0, lbl_80883770
    lfs f7, 0x1668(r28)
    fcmpo cr0, f7, f0
    cror eq, gt, eq
    bne lbl_fn_8026DB8C_00001B04
    lfs f7, lbl_80883774
    lis r3, lbl_807445E8@ha
    lfs f0, 0x284(r1)
    lfd f2, lbl_807445E8@l(r3)
    fsubs f1, f7, f0
    bl fn_8068AEA8
    frsp f9, f1
    lfs f0, lbl_80883768
    fcmpo cr0, f9, f0
    ble lbl_fn_8026DB8C_00001A78
    lfs f0, lbl_80883700
    fsubs f9, f9, f0
lbl_fn_8026DB8C_00001A78:
    lfs f0, lbl_8088376C
    fcmpo cr0, f9, f0
    bge lbl_fn_8026DB8C_00001A8C
    lfs f0, lbl_80883700
    fadds f9, f9, f0
lbl_fn_8026DB8C_00001A8C:
    lfs f8, 0x1668(r28)
    lfs f7, lbl_80883770
    lfs f0, lbl_80883778
    fsubs f7, f8, f7
    lfs f8, lbl_80883670
    fmuls f0, f0, f7
    fcmpo cr0, f8, f0
    bge lbl_fn_8026DB8C_00001AB0
    b lbl_fn_8026DB8C_00001AB4
lbl_fn_8026DB8C_00001AB0:
    fmr f8, f0
lbl_fn_8026DB8C_00001AB4:
    lfs f0, 0x284(r1)
    lfs f7, lbl_80883770
    fmadds f8, f9, f8, f0
    lfs f0, lbl_80883778
    lfs f9, lbl_80883670
    stfs f8, 0x284(r1)
    lfs f8, 0x1668(r28)
    fsubs f7, f8, f7
    fmuls f0, f0, f7
    fcmpo cr0, f9, f0
    bge lbl_fn_8026DB8C_00001AE4
    b lbl_fn_8026DB8C_00001AE8
lbl_fn_8026DB8C_00001AE4:
    fmr f9, f0
lbl_fn_8026DB8C_00001AE8:
    lfs f8, lbl_8088377C
    lfs f0, 0x167c(r28)
    lfs f7, 0x294(r1)
    fadds f0, f8, f0
    fsubs f0, f0, f7
    fmadds f0, f9, f0, f7
    stfs f0, 0x294(r1)
lbl_fn_8026DB8C_00001B04:
    lfs f1, 0x290(r1)
    addi r3, r1, 0x640
    lfs f2, 0x294(r1)
    lfs f3, 0x298(r1)
    bl fn_805F90D0
    lfs f7, lbl_80883674
    addi r29, r1, 0x640
    lfs f1, 0x288(r1)
    addi r30, r1, 0x420
    lfs f0, lbl_80883670
    fcmpu cr0, f7, f1
    stfs f7, 0x44c(r1)
    stfs f7, 0x444(r1)
    stfs f7, 0x440(r1)
    stfs f7, 0x43c(r1)
    stfs f7, 0x438(r1)
    stfs f7, 0x430(r1)
    stfs f7, 0x42c(r1)
    stfs f7, 0x428(r1)
    stfs f7, 0x424(r1)
    stfs f0, 0x448(r1)
    stfs f0, 0x434(r1)
    stfs f0, 0x420(r1)
    beq lbl_fn_8026DB8C_00001BB4
    addi r3, r1, 0x510
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x510
    addi r5, r1, 0x540
    bl fn_805F89F0
    addi r3, r1, 0x540
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
lbl_fn_8026DB8C_00001BB4:
    lfs f0, lbl_80883674
    lfs f1, 0x284(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_8026DB8C_00001C14
    addi r3, r1, 0x4b0
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x4b0
    addi r5, r1, 0x4e0
    bl fn_805F89F0
    addi r3, r1, 0x4e0
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
lbl_fn_8026DB8C_00001C14:
    lfs f0, lbl_80883674
    lfs f1, 0x28c(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_8026DB8C_00001C74
    addi r3, r1, 0x450
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x450
    addi r5, r1, 0x480
    bl fn_805F89F0
    addi r3, r1, 0x480
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
lbl_fn_8026DB8C_00001C74:
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x3f0
    bl fn_805F89F0
    addi r4, r1, 0x3f0
    addi r3, r1, 0xc4
    psq_l f1, 0x0(r4), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
    lwz r27, 0x1624(r28)
    psq_st f1, 0x18(r27), 0, 0
    psq_st f2, 0x20(r27), 0, 0
    psq_st f3, 0x28(r27), 0, 0
    psq_st f4, 0x30(r27), 0, 0
    psq_st f5, 0x38(r27), 0, 0
    psq_st f6, 0x40(r27), 0, 0
    lfs f8, 0x668(r1)
    lfs f7, 0x658(r1)
    lfs f0, 0x648(r1)
    stfs f0, 0xc4(r1)
    stfs f7, 0xc8(r1)
    stfs f8, 0xcc(r1)
    bl fn_805F9940
    lfs f8, 0x664(r1)
    fmr f31, f1
    lfs f7, 0x654(r1)
    addi r3, r1, 0xd0
    lfs f0, 0x644(r1)
    stfs f0, 0xd0(r1)
    stfs f7, 0xd4(r1)
    stfs f8, 0xd8(r1)
    bl fn_805F9940
    lfs f8, 0x660(r1)
    fmr f30, f1
    lfs f7, 0x650(r1)
    addi r3, r1, 0xdc
    lfs f0, 0x640(r1)
    stfs f0, 0xdc(r1)
    stfs f7, 0xe0(r1)
    stfs f8, 0xe4(r1)
    bl fn_805F9940
    frsp f7, f30
    stfs f1, 0xb8(r1)
    frsp f0, f31
    stfs f30, 0xbc(r1)
    fcmpo cr0, f7, f0
    stfs f31, 0xc0(r1)
    ble lbl_fn_8026DB8C_00001D5C
    b lbl_fn_8026DB8C_00001D60
lbl_fn_8026DB8C_00001D5C:
    fmr f7, f0
lbl_fn_8026DB8C_00001D60:
    lfs f8, 0xb8(r1)
    fcmpo cr0, f8, f7
    ble lbl_fn_8026DB8C_00001D70
    b lbl_fn_8026DB8C_00001D88
lbl_fn_8026DB8C_00001D70:
    lfs f8, 0xbc(r1)
    lfs f0, 0xc0(r1)
    fcmpo cr0, f8, f0
    ble lbl_fn_8026DB8C_00001D84
    b lbl_fn_8026DB8C_00001D88
lbl_fn_8026DB8C_00001D84:
    fmr f8, f0
lbl_fn_8026DB8C_00001D88:
    cmpwi r31, 0x0
    stfs f8, 0x64(r27)
    beq lbl_fn_8026DB8C_00002B38
    li r0, 0x0
    stw r0, 0x6f4(r1)
    lwz r3, lbl_8087EE98
    addi r4, r1, 0x6c0
    stw r0, 0x6f8(r1)
    addi r5, r1, 0x2a8
    addi r6, r1, 0x29c
    addi r8, r28, 0x5b8
    stw r0, 0x6fc(r1)
    li r7, 0x2
    li r9, 0x0
    stw r0, 0x700(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_8026DB8C_00002B38
    lwz r4, 0x6f8(r1)
    cmpwi r4, 0x0
    beq lbl_fn_8026DB8C_00002B38
    lwz r0, 0x8(r4)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_8026DB8C_00002B38
    addi r3, r1, 0x6c4
    lfs f2, 0x6cc(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r29, r1, 0x278
    psq_st f1, 0x0(r29), 0, 0
    li r3, 0x61b
    stfs f2, 0x280(r1)
    lwz r31, 0xc(r4)
    bl fn_80219E6C
    addi r4, r1, 0x2b4
    lfs f2, 0x2bc(r1)
    addi r27, r1, 0x26c
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    mr r30, r3
    lfs f0, lbl_80883674
    mr r3, r27
    stfs f2, 0x274(r1)
    mr r4, r27
    stfs f0, 0x270(r1)
    bl fn_805F98D0
    lwz r12, 0x0(r31)
    mr r3, r31
    mr r4, r28
    mr r5, r30
    lwz r12, 0x4c(r12)
    mr r6, r29
    mr r7, r27
    mtctr r12
    bctrl
    mr r29, r3
    lwz r3, 0x50(r31)
    bl fn_80219558
    cmpwi r3, 0x3
    bne lbl_fn_8026DB8C_00001F30
    lwz r6, 0x38(r31)
    li r4, 0x0
    li r0, 0x0
    li r3, 0x0
    rlwinm r5, r6, 0, 29, 29
    cmplwi r5, 0x4
    beq lbl_fn_8026DB8C_00001EA4
    clrlwi r5, r6, 31
    cmplwi r5, 0x1
    beq lbl_fn_8026DB8C_00001EA4
    li r3, 0x1
lbl_fn_8026DB8C_00001EA4:
    cmpwi r3, 0x0
    beq lbl_fn_8026DB8C_00001EC0
    lwz r3, 0x7e0(r31)
    rlwinm r3, r3, 0, 26, 26
    cmplwi r3, 0x20
    beq lbl_fn_8026DB8C_00001EC0
    li r0, 0x1
lbl_fn_8026DB8C_00001EC0:
    cmpwi r0, 0x0
    beq lbl_fn_8026DB8C_00001EF4
    lwz r0, 0x55c(r31)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_8026DB8C_00001EE8
    lwz r0, 0x560(r31)
    cmpwi r0, 0x1c
    bne lbl_fn_8026DB8C_00001EE8
    li r3, 0x1
lbl_fn_8026DB8C_00001EE8:
    cmpwi r3, 0x0
    bne lbl_fn_8026DB8C_00001EF4
    li r4, 0x1
lbl_fn_8026DB8C_00001EF4:
    cmpwi r4, 0x0
    beq lbl_fn_8026DB8C_00001F30
    lwz r0, 0xd18(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8026DB8C_00001F30
    bl fn_80680CF8
    lis r4, 0x5555
    addi r0, r4, 0x5556
    mulhw r4, r0, r3
    srwi r0, r4, 31
    add r0, r4, r0
    mulli r0, r0, 0x3
    subf. r0, r0, r3
    bne lbl_fn_8026DB8C_00001F30
    li r29, 0x2
lbl_fn_8026DB8C_00001F30:
    cmpwi r29, 0x0
    beq lbl_fn_8026DB8C_00002418
    lwz r0, 0x8f0(r31)
    li r5, 0x0
    lwz r4, 0x3c(r30)
    lwz r3, lbl_8087F048
    subf r4, r0, r4
    bl fn_8010B250
    lfs f8, 0x274(r1)
    mr r3, r31
    lfs f0, 0x270(r1)
    mr r5, r28
    lfs f7, 0x26c(r1)
    fmuls f8, f8, f1
    fmuls f9, f0, f1
    lfs f0, lbl_80883780
    fmuls f7, f7, f1
    stfs f8, 0x214(r1)
    fmuls f8, f8, f0
    fmuls f10, f9, f0
    fmuls f0, f7, f0
    stfs f7, 0x20c(r1)
    lfs f1, lbl_80883698
    addi r4, r1, 0x260
    stfs f9, 0x210(r1)
    stfs f0, 0x260(r1)
    stfs f10, 0x264(r1)
    stfs f8, 0x268(r1)
    bl fn_8015D8C0
    lis r4, lbl_80744608@ha
    lfs f1, lbl_80883678
    addi r4, r4, lbl_80744608@l
    addi r3, r1, 0x1c
    addi r4, r4, 0x250
    addi r5, r1, 0x278
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x1c
    li r4, -0x1
    bl fn_800CB3A0
    lfs f7, lbl_80883674
    li r0, 0x1
    stw r0, 0x1660(r28)
    addi r4, r1, 0x254
    lwz r8, 0x1624(r28)
    addi r7, r1, 0x200
    stw r0, 0x1644(r28)
    addi r6, r28, 0x166c
    lfs f0, lbl_80883670
    addi r3, r1, 0x610
    stfs f7, 0x1668(r28)
    mr r5, r4
    lfs f8, 0x44(r8)
    lfs f9, 0x34(r8)
    lfs f10, 0x24(r8)
    fmr f2, f8
    stfs f10, 0x200(r1)
    stfs f9, 0x204(r1)
    psq_l f1, 0x0(r7), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x1674(r28)
    stfs f7, 0x254(r1)
    stfs f7, 0x258(r1)
    stfs f0, 0x25c(r1)
    psq_l f1, 0x18(r8), 0, 0
    psq_l f2, 0x20(r8), 0, 0
    psq_l f3, 0x28(r8), 0, 0
    psq_l f4, 0x30(r8), 0, 0
    psq_l f5, 0x38(r8), 0, 0
    psq_l f6, 0x40(r8), 0, 0
    psq_st f6, 0x28(r3), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    psq_st f4, 0x18(r3), 0, 0
    stfs f8, 0x208(r1)
    psq_st f1, 0x0(r3), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    stfs f7, 0x61c(r1)
    stfs f7, 0x62c(r1)
    stfs f7, 0x63c(r1)
    bl fn_805F93C0
    lfs f2, 0x25c(r1)
    addi r3, r1, 0x254
    lfs f0, lbl_8088368C
    addi r27, r1, 0x1f4
    fabs f7, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    frsp f7, f7
    stfs f2, 0x1fc(r1)
    fcmpo cr0, f7, f0
    bge lbl_fn_8026DB8C_000020C8
    lfs f7, 0x1f4(r1)
    lfs f0, lbl_80883674
    fcmpo cr0, f7, f0
    ble lbl_fn_8026DB8C_000020BC
    lfs f0, lbl_80883690
    b lbl_fn_8026DB8C_000020C0
lbl_fn_8026DB8C_000020BC:
    lfs f0, lbl_80883694
lbl_fn_8026DB8C_000020C0:
    stfs f0, 0xb0(r1)
    b lbl_fn_8026DB8C_000020DC
lbl_fn_8026DB8C_000020C8:
    frsp f2, f2
    lfs f1, 0x1f4(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0xb0(r1)
lbl_fn_8026DB8C_000020DC:
    lfs f0, 0xb0(r1)
    addi r3, r1, 0x380
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f7, lbl_80883674
    addi r4, r1, 0xa0
    lfs f31, 0x388(r1)
    mr r5, r4
    lfs f30, 0x384(r1)
    addi r3, r1, 0x3b0
    lfs f29, 0x380(r1)
    lfs f28, 0x398(r1)
    lfs f27, 0x394(r1)
    lfs f26, 0x390(r1)
    lfs f13, 0x3a8(r1)
    lfs f12, 0x3a4(r1)
    lfs f11, 0x3a0(r1)
    lfs f10, 0x3ac(r1)
    lfs f9, 0x39c(r1)
    lfs f8, 0x38c(r1)
    lfs f0, lbl_80883670
    psq_l f1, 0x0(r27), 0, 0
    lfs f2, 0x1fc(r1)
    stfs f7, 0x3e0(r1)
    stfs f7, 0x3e4(r1)
    stfs f7, 0x3e8(r1)
    stfs f0, 0x3ec(r1)
    stfs f29, 0x70(r1)
    stfs f30, 0x74(r1)
    stfs f31, 0x78(r1)
    stfs f29, 0x3b0(r1)
    stfs f30, 0x3b4(r1)
    stfs f31, 0x3b8(r1)
    stfs f26, 0x7c(r1)
    stfs f27, 0x80(r1)
    stfs f28, 0x84(r1)
    stfs f26, 0x3c0(r1)
    stfs f27, 0x3c4(r1)
    stfs f28, 0x3c8(r1)
    stfs f11, 0x88(r1)
    stfs f12, 0x8c(r1)
    stfs f13, 0x90(r1)
    stfs f11, 0x3d0(r1)
    stfs f12, 0x3d4(r1)
    stfs f13, 0x3d8(r1)
    stfs f8, 0x94(r1)
    stfs f9, 0x98(r1)
    stfs f10, 0x9c(r1)
    stfs f8, 0x3bc(r1)
    stfs f9, 0x3cc(r1)
    stfs f10, 0x3dc(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xa8(r1)
    bl fn_805F9750
    lfs f2, 0xa8(r1)
    lfs f0, lbl_8088368C
    fabs f7, f2
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_8026DB8C_000021F8
    lfs f7, 0xa4(r1)
    lfs f0, lbl_80883674
    fcmpo cr0, f7, f0
    ble lbl_fn_8026DB8C_000021E8
    lfs f0, lbl_80883690
    b lbl_fn_8026DB8C_000021EC
lbl_fn_8026DB8C_000021E8:
    lfs f0, lbl_80883694
lbl_fn_8026DB8C_000021EC:
    fneg f0, f0
    stfs f0, 0xac(r1)
    b lbl_fn_8026DB8C_0000220C
lbl_fn_8026DB8C_000021F8:
    lfs f1, 0xa4(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0xac(r1)
lbl_fn_8026DB8C_0000220C:
    addi r3, r1, 0xac
    lfs f9, lbl_80883674
    psq_l f1, 0x0(r3), 0, 0
    li r0, 0x0
    psq_st f1, 0x0(r27), 0, 0
    fmr f2, f9
    lfs f0, lbl_8088375C
    addi r27, r1, 0x248
    lfs f7, 0x1f4(r1)
    addi r29, r1, 0x23c
    stfs f2, 0x1fc(r1)
    fsubs f8, f7, f0
    lfs f7, lbl_808836C8
    lfs f0, lbl_80883670
    addi r3, r1, 0x350
    stfs f8, 0x1664(r28)
    li r4, 0x79
    stw r0, 0x6a4(r1)
    stw r0, 0x6a8(r1)
    stw r0, 0x6ac(r1)
    stw r0, 0x6b0(r1)
    lfs f2, 0x530(r31)
    psq_l f1, 0x528(r31), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    lfs f8, 0x24c(r1)
    stfs f2, 0x250(r1)
    fadds f7, f8, f7
    stfs f2, 0x244(r1)
    stfs f7, 0x24c(r1)
    psq_l f1, 0x0(r27), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    stfs f9, 0x230(r1)
    stfs f9, 0x234(r1)
    stfs f0, 0x238(r1)
    lfs f1, 0x538(r31)
    stfs f9, 0xb4(r1)
    bl fn_805F8E70
    addi r4, r1, 0x230
    addi r3, r1, 0x350
    mr r5, r4
    bl fn_805F93C0
    lfs f7, lbl_80883674
    addi r3, r1, 0x230
    lfs f0, lbl_80883670
    addi r4, r1, 0x1d0
    stfs f7, 0x1d0(r1)
    addi r5, r1, 0x1dc
    stfs f0, 0x1d4(r1)
    stfs f7, 0x1d8(r1)
    bl fn_805F99B0
    lfs f7, 0x1e4(r1)
    addi r3, r1, 0x224
    lfs f0, 0x238(r1)
    addi r5, r1, 0x1e8
    lfs f9, 0x1e0(r1)
    mr r4, r3
    fsubs f2, f7, f0
    lfs f8, 0x234(r1)
    lfs f7, 0x1dc(r1)
    lfs f0, 0x230(r1)
    fsubs f8, f9, f8
    stfs f2, 0x1f0(r1)
    fsubs f0, f7, f0
    stfs f8, 0x1ec(r1)
    stfs f0, 0x1e8(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x22c(r1)
    bl fn_805F98D0
    lfs f9, lbl_808836C0
    addi r3, r28, 0x1678
    lfs f7, 0x228(r1)
    mr r5, r27
    lfs f0, 0x224(r1)
    mr r6, r29
    fmuls f11, f7, f9
    lfs f10, 0x22c(r1)
    fmuls f12, f0, f9
    lfs f8, 0x23c(r1)
    fmuls f9, f10, f9
    lfs f0, 0x244(r1)
    fadds f8, f8, f12
    lfs f7, 0x240(r1)
    fadds f2, f0, f9
    stfs f12, 0x1c4(r1)
    fadds f0, f7, f11
    addi r4, r1, 0x670
    stfs f8, 0x23c(r1)
    lis r7, 0x8000
    li r8, 0x0
    li r9, 0x0
    stfs f0, 0x240(r1)
    stfs f2, 0x244(r1)
    psq_l f1, 0x0(r29), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x1680(r28)
    stfs f11, 0x1c8(r1)
    lwz r3, lbl_8087EE98
    stfs f9, 0x1cc(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_8026DB8C_00002404
    lfs f9, 0x22c(r1)
    addi r4, r1, 0x1b8
    lfs f8, lbl_808836BC
    addi r3, r28, 0x1678
    lfs f0, 0x228(r1)
    fmuls f9, f9, f8
    lfs f7, 0x224(r1)
    fmuls f10, f0, f8
    lfs f0, 0x67c(r1)
    fmuls f8, f7, f8
    lfs f7, 0x678(r1)
    fsubs f2, f0, f9
    lfs f0, 0x674(r1)
    fsubs f7, f7, f10
    stfs f8, 0x1ac(r1)
    fsubs f0, f0, f8
    stfs f7, 0x1bc(r1)
    stfs f0, 0x1b8(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f10, 0x1b0(r1)
    stfs f9, 0x1b4(r1)
    stfs f2, 0x1c0(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x1680(r28)
lbl_fn_8026DB8C_00002404:
    lfs f7, 0x52c(r28)
    lfs f0, lbl_80883764
    fadds f0, f7, f0
    stfs f0, 0x167c(r28)
    b lbl_fn_8026DB8C_00002B38
lbl_fn_8026DB8C_00002418:
    lwz r3, lbl_8087F048
    li r5, 0x0
    lwz r4, 0x3c(r30)
    bl fn_8010B250
    addi r3, r1, 0x2b4
    fmr f24, f1
    addi r27, r1, 0x1a0
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x2bc(r1)
    mr r3, r27
    psq_st f1, 0x0(r27), 0, 0
    mr r4, r27
    stfs f2, 0x1a8(r1)
    bl fn_805F98D0
    li r0, 0x0
    stw r0, 0x8(r1)
    fmr f1, f24
    mr r4, r28
    lwz r3, lbl_8087F048
    mr r5, r31
    lwz r8, 0x1684(r28)
    mr r7, r30
    mr r10, r27
    addi r9, r1, 0x278
    li r6, 0x0
    bl fn_800FDB20
    lwz r3, lbl_8087F048
    addi r4, r1, 0x278
    addi r5, r1, 0x284
    li r6, 0x0
    li r7, 0x0
    bl fn_80101434
    lis r4, lbl_80744608@ha
    lfs f1, lbl_80883670
    addi r4, r4, lbl_80744608@l
    addi r3, r1, 0x18
    addi r4, r4, 0x25d
    addi r5, r1, 0x278
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x18
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_8026DB8C_00002B38
lbl_fn_8026DB8C_000024CC:
    lwz r4, lbl_8087EFA8
    lfs f7, lbl_80883784
    lfs f8, 0x3a4(r4)
    lfs f0, 0x1668(r3)
    lfs f1, lbl_80883670
    fmadds f0, f7, f8, f0
    stfs f0, 0x1668(r3)
    fcmpo cr0, f0, f1
    cror eq, gt, eq
    bne lbl_fn_8026DB8C_00002530
    lis r4, lbl_80744608@ha
    addi r3, r1, 0x14
    addi r4, r4, lbl_80744608@l
    addi r5, r28, 0x1678
    addi r4, r4, 0x236
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x14
    li r4, -0x1
    bl fn_800CB3A0
    lfs f0, lbl_80883670
    li r0, 0x2
    stw r0, 0x1660(r28)
    stfs f0, 0x1668(r28)
lbl_fn_8026DB8C_00002530:
    lfs f27, lbl_80883670
    lfs f0, 0x1668(r28)
    fcmpo cr0, f27, f0
    bge lbl_fn_8026DB8C_00002544
    b lbl_fn_8026DB8C_00002548
lbl_fn_8026DB8C_00002544:
    fmr f27, f0
lbl_fn_8026DB8C_00002548:
    lfs f7, 0x167c(r28)
    lfs f13, 0x1670(r28)
    lfs f0, lbl_80883678
    fsubs f31, f7, f13
    lfs f11, 0x1668(r28)
    lfs f10, lbl_80883670
    lfs f7, 0x1680(r28)
    fnmsubs f9, f0, f11, f10
    lfs f30, 0x1674(r28)
    fmuls f28, f31, f27
    lfs f0, 0x1678(r28)
    fsubs f25, f7, f30
    lfs f12, 0x166c(r28)
    fsubs f26, f0, f12
    lfs f0, lbl_8088378C
    fmuls f29, f25, f27
    lfs f7, lbl_8087DC34
    lfs f8, lbl_8087DC30
    fnmsubs f24, f9, f9, f10
    fmuls f27, f26, f27
    stfs f26, 0x64(r1)
    fsubs f7, f7, f8
    fadds f26, f29, f30
    stfs f31, 0x68(r1)
    fadds f9, f27, f12
    fadds f10, f28, f13
    stfs f25, 0x6c(r1)
    fmadds f7, f24, f7, f8
    fcmpo cr0, f11, f0
    stfs f27, 0x58(r1)
    fadds f0, f10, f7
    stfs f28, 0x5c(r1)
    stfs f29, 0x60(r1)
    stfs f9, 0x218(r1)
    stfs f26, 0x220(r1)
    stfs f0, 0x21c(r1)
    ble lbl_fn_8026DB8C_000025E4
    lfs f9, lbl_80883788
    b lbl_fn_8026DB8C_000025E8
lbl_fn_8026DB8C_000025E4:
    lfs f9, lbl_80883708
lbl_fn_8026DB8C_000025E8:
    lfs f7, 0x1668(r28)
    lfs f0, lbl_8088369C
    fcmpo cr0, f7, f0
    ble lbl_fn_8026DB8C_00002640
    lfs f8, 0x1664(r28)
    lfs f0, lbl_80883688
    fabs f7, f8
    frsp f7, f7
    fcmpo cr0, f7, f0
    ble lbl_fn_8026DB8C_0000264C
    lfs f7, lbl_80883674
    fcmpo cr0, f8, f7
    bge lbl_fn_8026DB8C_00002630
    fneg f0, f9
    fcmpo cr0, f8, f0
    ble lbl_fn_8026DB8C_00002630
    stfs f7, 0x1664(r28)
    b lbl_fn_8026DB8C_0000264C
lbl_fn_8026DB8C_00002630:
    lfs f0, 0x1664(r28)
    fadds f0, f0, f9
    stfs f0, 0x1664(r28)
    b lbl_fn_8026DB8C_0000264C
lbl_fn_8026DB8C_00002640:
    lfs f0, 0x1664(r28)
    fadds f0, f0, f9
    stfs f0, 0x1664(r28)
lbl_fn_8026DB8C_0000264C:
    lis r3, lbl_807445E8@ha
    lfs f1, 0x1664(r28)
    lfd f2, lbl_807445E8@l(r3)
    bl fn_8068AEA8
    frsp f7, f1
    lfs f0, lbl_80883768
    fcmpo cr0, f7, f0
    ble lbl_fn_8026DB8C_00002674
    lfs f0, lbl_80883700
    fsubs f7, f7, f0
lbl_fn_8026DB8C_00002674:
    lfs f0, lbl_8088376C
    fcmpo cr0, f7, f0
    bge lbl_fn_8026DB8C_00002688
    lfs f0, lbl_80883700
    fadds f7, f7, f0
lbl_fn_8026DB8C_00002688:
    stfs f7, 0x1664(r28)
    addi r3, r1, 0x5e0
    lfs f1, 0x218(r1)
    lfs f2, 0x21c(r1)
    lfs f3, 0x220(r1)
    bl fn_805F90D0
    lfs f7, lbl_8088375C
    addi r3, r1, 0x320
    lfs f0, 0x1664(r28)
    li r4, 0x78
    fadds f1, f7, f0
    bl fn_805F8E70
    addi r3, r1, 0x5e0
    addi r4, r1, 0x320
    addi r5, r1, 0x2f0
    bl fn_805F89F0
    addi r4, r1, 0x2f0
    addi r5, r1, 0x5e0
    psq_l f1, 0x0(r4), 0, 0
    addi r3, r1, 0x34
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    psq_st f2, 0x8(r5), 0, 0
    psq_st f3, 0x10(r5), 0, 0
    psq_st f4, 0x18(r5), 0, 0
    psq_st f5, 0x20(r5), 0, 0
    psq_st f6, 0x28(r5), 0, 0
    lwz r27, 0x1624(r28)
    psq_st f1, 0x18(r27), 0, 0
    psq_st f2, 0x20(r27), 0, 0
    psq_st f3, 0x28(r27), 0, 0
    psq_st f4, 0x30(r27), 0, 0
    psq_st f5, 0x38(r27), 0, 0
    psq_st f6, 0x40(r27), 0, 0
    lfs f8, 0x608(r1)
    lfs f7, 0x5f8(r1)
    lfs f0, 0x5e8(r1)
    stfs f0, 0x34(r1)
    stfs f7, 0x38(r1)
    stfs f8, 0x3c(r1)
    bl fn_805F9940
    lfs f8, 0x604(r1)
    fmr f30, f1
    lfs f7, 0x5f4(r1)
    addi r3, r1, 0x40
    lfs f0, 0x5e4(r1)
    stfs f0, 0x40(r1)
    stfs f7, 0x44(r1)
    stfs f8, 0x48(r1)
    bl fn_805F9940
    lfs f8, 0x600(r1)
    fmr f31, f1
    lfs f7, 0x5f0(r1)
    addi r3, r1, 0x4c
    lfs f0, 0x5e0(r1)
    stfs f0, 0x4c(r1)
    stfs f7, 0x50(r1)
    stfs f8, 0x54(r1)
    bl fn_805F9940
    frsp f7, f31
    stfs f1, 0x28(r1)
    frsp f0, f30
    stfs f31, 0x2c(r1)
    fcmpo cr0, f7, f0
    stfs f30, 0x30(r1)
    ble lbl_fn_8026DB8C_000027A4
    b lbl_fn_8026DB8C_000027A8
lbl_fn_8026DB8C_000027A4:
    fmr f7, f0
lbl_fn_8026DB8C_000027A8:
    lfs f8, 0x28(r1)
    fcmpo cr0, f8, f7
    ble lbl_fn_8026DB8C_000027B8
    b lbl_fn_8026DB8C_000027D0
lbl_fn_8026DB8C_000027B8:
    lfs f8, 0x2c(r1)
    lfs f0, 0x30(r1)
    fcmpo cr0, f8, f0
    ble lbl_fn_8026DB8C_000027CC
    b lbl_fn_8026DB8C_000027D0
lbl_fn_8026DB8C_000027CC:
    fmr f8, f0
lbl_fn_8026DB8C_000027D0:
    stfs f8, 0x64(r27)
    b lbl_fn_8026DB8C_00002B38
lbl_fn_8026DB8C_000027D8:
    lwz r4, lbl_8087F8A0
    lwz r3, 0x1624(r3)
    lwz r29, 0x48(r4)
    lfs f8, 0x44(r3)
    lfs f0, 0x530(r29)
    lfs f10, 0x24(r3)
    fsubs f11, f8, f0
    lfs f0, 0x528(r29)
    lfs f9, 0x34(r3)
    fsubs f12, f10, f0
    lfs f7, 0x52c(r29)
    fmuls f0, f11, f11
    fsubs f7, f9, f7
    stfs f10, 0x188(r1)
    fmadds f1, f12, f12, f0
    stfs f9, 0x18c(r1)
    stfs f8, 0x190(r1)
    stfs f12, 0x194(r1)
    stfs f7, 0x198(r1)
    stfs f11, 0x19c(r1)
    bl fn_8068B100
    frsp f7, f1
    lfs f0, lbl_808836C0
    fcmpo cr0, f7, f0
    bge lbl_fn_8026DB8C_00002A08
    mr r3, r29
    li r4, 0x0
    bl fn_8016DDB0
    cmpwi r3, 0x0
    beq lbl_fn_8026DB8C_00002A08
    lwz r7, lbl_8087F490
    cmpwi r7, 0x0
    beq lbl_fn_8026DB8C_000028A8
    li r4, 0x6
    stw r4, 0x764(r7)
    li r5, 0x0
    li r3, 0xe
    stw r3, 0x768(r7)
    li r6, -0x1
    li r0, 0x1
    stw r6, 0x76c(r7)
    stw r5, 0x770(r7)
    stw r5, 0x774(r7)
    stw r5, 0x778(r7)
    stw r6, 0x2dc(r1)
    stw r5, 0x2e0(r1)
    stw r5, 0x2e4(r1)
    stw r5, 0x2e8(r1)
    stw r4, 0x2d4(r1)
    stw r3, 0x2d8(r1)
    stw r0, 0x2ec(r1)
    stw r0, 0x77c(r7)
lbl_fn_8026DB8C_000028A8:
    lwz r3, lbl_8087F0A8
    li r4, 0x2
    addi r3, r3, 0x48c
    bl fn_801231D0
    cmpwi r3, 0x0
    beq lbl_fn_8026DB8C_00002A08
    lwz r3, lbl_8087F430
    li r4, 0xf1
    bl fn_80370A78
    cmpwi r3, 0x0
    bne lbl_fn_8026DB8C_000028E4
    lwz r3, lbl_8087F430
    li r4, 0xf1
    li r5, 0x1
    bl fn_80370AE4
lbl_fn_8026DB8C_000028E4:
    li r0, 0x3
    stw r0, 0x1660(r28)
    lwz r3, 0x1624(r28)
    li r6, 0x0
    lwz r4, lbl_8087F8A0
    lwz r5, 0x274(r3)
    lwz r30, 0x48(r4)
    lwz r4, 0x78(r5)
    lwz r3, lbl_8087F4F0
    lwz r5, 0x80(r5)
    lwz r7, 0x50(r30)
    bl fn_8044D104
    lwz r27, 0x654(r30)
    li r4, 0x1
    mr r3, r27
    bl fn_80044E0C
    lwz r0, 0x1624(r28)
    mr r3, r30
    stw r0, 0x654(r30)
    bl fn_8014EF48
    lwz r0, 0x648(r30)
    cmplw r0, r27
    bne lbl_fn_8026DB8C_00002954
    mr r3, r30
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8014DEE4
lbl_fn_8026DB8C_00002954:
    lwz r3, 0x1624(r28)
    lwz r0, 0x1628(r28)
    cmplw r3, r0
    bne lbl_fn_8026DB8C_00002988
    lwz r0, 0x162c(r28)
    cmpwi r0, 0x0
    bne lbl_fn_8026DB8C_00002980
    lis r4, 0x2
    lwz r3, lbl_8087F4F0
    subi r4, r4, 0x778b
    bl fn_804438E0
lbl_fn_8026DB8C_00002980:
    li r0, 0x1
    stw r0, 0x162c(r28)
lbl_fn_8026DB8C_00002988:
    lfs f1, lbl_808836AC
    mr r3, r29
    stw r27, 0x1624(r28)
    li r4, 0x1ec
    fmr f2, f1
    li r5, 0x0
    li r6, 0x0
    bl fn_80161570
    lis r4, lbl_80744608@ha
    lfs f1, lbl_80883670
    addi r4, r4, lbl_80744608@l
    addi r3, r1, 0x10
    addi r4, r4, 0x26a
    addi r5, r29, 0x528
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    lwz r3, lbl_8087F490
    cmpwi r3, 0x0
    beq lbl_fn_8026DB8C_000029E8
    bl fn_803E3384
lbl_fn_8026DB8C_000029E8:
    lwz r0, 0x163c(r28)
    cmpwi r0, 0x0
    bne lbl_fn_8026DB8C_00002A08
    lwz r3, lbl_8087F430
    li r4, 0x396
    li r5, 0x1
    li r6, 0x0
    bl fn_80370320
lbl_fn_8026DB8C_00002A08:
    lwz r3, lbl_8087F430
    li r4, 0xed
    bl fn_80370A78
    cmpwi r3, 0x0
    bne lbl_fn_8026DB8C_00002B38
    lwz r3, lbl_8087F430
    li r4, 0xed
    li r5, 0x1
    bl fn_80370AE4
    b lbl_fn_8026DB8C_00002B38
lbl_fn_8026DB8C_00002A30:
    lwz r0, 0x163c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8026DB8C_00002A50
    lwz r3, lbl_8087F430
    li r4, 0x396
    li r5, 0x1
    li r6, 0x0
    bl fn_80370320
lbl_fn_8026DB8C_00002A50:
    lwz r3, lbl_8087F8A0
    lwz r29, 0x48(r3)
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8026DB8C_00002B38
    lwz r0, 0x560(r29)
    cmpwi r0, 0x17
    beq lbl_fn_8026DB8C_00002A78
    cmpwi r0, 0x63
    bne lbl_fn_8026DB8C_00002B38
lbl_fn_8026DB8C_00002A78:
    lwz r4, 0x1624(r28)
    li r6, 0x0
    lwz r3, lbl_8087F4F0
    lwz r5, 0x274(r4)
    lwz r7, 0x50(r29)
    lwz r4, 0x78(r5)
    lwz r5, 0x80(r5)
    bl fn_8044D104
    lwz r27, 0x654(r29)
    li r4, 0x1
    mr r3, r27
    bl fn_80044E0C
    lwz r0, 0x1624(r28)
    mr r3, r29
    stw r0, 0x654(r29)
    bl fn_8014EF48
    lwz r0, 0x648(r29)
    cmplw r0, r27
    bne lbl_fn_8026DB8C_00002AD8
    mr r3, r29
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8014DEE4
lbl_fn_8026DB8C_00002AD8:
    lwz r3, 0x1624(r28)
    lwz r0, 0x1628(r28)
    cmplw r3, r0
    bne lbl_fn_8026DB8C_00002B0C
    lwz r0, 0x162c(r28)
    cmpwi r0, 0x0
    bne lbl_fn_8026DB8C_00002B04
    lis r4, 0x2
    lwz r3, lbl_8087F4F0
    subi r4, r4, 0x778b
    bl fn_804438E0
lbl_fn_8026DB8C_00002B04:
    li r0, 0x1
    stw r0, 0x162c(r28)
lbl_fn_8026DB8C_00002B0C:
    stw r27, 0x1624(r28)
    mr r3, r28
    li r4, 0x1
    bl fn_8026D0F8
    lwz r3, lbl_8087F430
    li r4, 0x396
    li r5, 0x0
    li r6, 0x0
    bl fn_80370320
    li r0, 0x0
    stw r0, 0x1644(r28)
lbl_fn_8026DB8C_00002B38:
    li r0, 0x0
    stw r0, 0x2c0(r1)
    addi r5, r1, 0x2c0
    li r4, 0x0
    lwz r3, 0x1624(r28)
    addi r3, r3, 0x10
    bl fn_800902C0
    addic. r3, r1, 0x2c0
    beq lbl_fn_8026DB8C_00002B90
    lwz r4, 0x2c0(r1)
    cmpwi r4, 0x0
    beq lbl_fn_8026DB8C_00002B90
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_8026DB8C_00002B88
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8026DB8C_00002B88:
    li r0, 0x0
    stw r0, 0x2c0(r1)
lbl_fn_8026DB8C_00002B90:
    addi r11, r1, 0x730
    psq_l f31, 0x7a8(r1), 0, 0
    lfd f31, 0x7a0(r1)
    psq_l f30, 0x798(r1), 0, 0
    lfd f30, 0x790(r1)
    psq_l f29, 0x788(r1), 0, 0
    lfd f29, 0x780(r1)
    psq_l f28, 0x778(r1), 0, 0
    lfd f28, 0x770(r1)
    psq_l f27, 0x768(r1), 0, 0
    lfd f27, 0x760(r1)
    psq_l f26, 0x758(r1), 0, 0
    lfd f26, 0x750(r1)
    psq_l f25, 0x748(r1), 0, 0
    lfd f25, 0x740(r1)
    psq_l f24, 0x738(r1), 0, 0
    lfd f24, 0x730(r1)
    bl _restgpr_27
    lwz r0, 0x7b4(r1)
    mtlr r0
    addi r1, r1, 0x7b0
    blr
}
