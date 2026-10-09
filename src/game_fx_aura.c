#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800D246C(void);
extern void fn_800F8548(void);
extern void fn_8016E970(void);
extern void fn_801765D8(void);
extern void fn_80232B7C(void);
extern void fn_80239DAC(void);
extern void fn_8023A8B4(void);
extern void fn_8029F148(void);
extern void fn_802A42CC(void);
extern void fn_8037D4C0(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9940(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);
extern void fn_8068B100(void);

/* External data declarations */
extern u8 lbl_80745C48[];
extern u8 lbl_80745C70[];

/* Small data declarations */
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F448;
extern u32 lbl_80883D28;
extern u32 lbl_80883D2C;
extern u32 lbl_80883D30;
extern u32 lbl_80883D34;
extern u32 lbl_80883D44;
extern u32 lbl_80883D48;
extern u32 lbl_80883D4C;
extern u32 lbl_80883D50;
extern u32 lbl_80883D54;
extern u32 lbl_80883D58;
extern u32 lbl_80883D5C;
extern u32 lbl_80883D60;
extern u32 lbl_80883D74;
extern u32 lbl_80883D7C;
extern u32 lbl_80883D84;
extern u32 lbl_80883D88;
extern u32 lbl_80883DBC;
extern u32 lbl_80883DC4;
extern u32 lbl_80883DC8;
extern u32 lbl_80883DCC;
extern u32 lbl_80883DD0;
extern u32 lbl_80883DD4;
extern u32 lbl_80883DD8;
extern u32 lbl_80883DDC;
extern u32 lbl_80883DE0;
extern u32 lbl_80883DE4;
extern u32 lbl_80883DE8;
extern u32 lbl_80883DEC;
extern u32 lbl_80883DF0;
extern u32 lbl_80883DF4;
extern u32 lbl_80883DF8;
extern u32 lbl_80883DFC;
extern u32 lbl_80883E00;
extern u32 lbl_80883E04;
extern u32 lbl_80883E08;

/* Function declarations */
void fn_802A0B00(void);
void fn_802A118C(void);
void fn_802A16A4(void);
void fn_802A17CC(void);
void fn_802A19B0(void);
void fn_802A1BFC(void);
void fn_802A2070(void);
void fn_802A239C(void);

asm void fn_802A0B00(void)
{
    nofralloc
    stwu r1, -0x240(r1)
    mflr r0
    stw r0, 0x244(r1)
    addi r4, r1, 0x110
    stfd f31, 0x230(r1)
    psq_st f31, 0x238(r1), 0, 0
    stfd f30, 0x220(r1)
    psq_st f30, 0x228(r1), 0, 0
    stfd f29, 0x210(r1)
    psq_st f29, 0x218(r1), 0, 0
    stw r31, 0x20c(r1)
    mr r31, r3
    stw r30, 0x208(r1)
    lwz r5, 0x14d4(r3)
    lfs f0, 0x530(r3)
    lfs f2, 0x530(r5)
    psq_l f1, 0x528(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    fsubs f5, f2, f0
    lfs f3, 0x528(r3)
    addi r3, r1, 0x104
    lfs f4, 0x110(r1)
    lfs f0, lbl_80883D28
    fsubs f3, f4, f3
    stfs f2, 0x118(r1)
    stfs f3, 0x104(r1)
    stfs f5, 0x10c(r1)
    stfs f0, 0x108(r1)
    bl fn_805F9940
    fmr f30, f1
    addi r3, r1, 0x104
    mr r4, r3
    bl fn_805F98D0
    lfs f31, 0x2e4(r31)
    lfs f0, lbl_80883DC8
    fcmpo cr0, f31, f0
    ble lbl_fn_802A0B00_00000200
    lfs f0, lbl_80883DCC
    fcmpo cr0, f31, f0
    cror eq, lt, eq
    bne lbl_fn_802A0B00_00000200
    lfs f3, 0x1578(r31)
    lis r3, lbl_80745C48@ha
    lfs f0, 0x1574(r31)
    lfd f2, lbl_80745C48@l(r3)
    fsubs f1, f3, f0
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_80883D50
    fcmpo cr0, f3, f0
    ble lbl_fn_802A0B00_000000D4
    lfs f0, lbl_80883D54
    fsubs f3, f3, f0
lbl_fn_802A0B00_000000D4:
    lfs f0, lbl_80883D58
    fcmpo cr0, f3, f0
    bge lbl_fn_802A0B00_000000E8
    lfs f0, lbl_80883D54
    fadds f3, f3, f0
lbl_fn_802A0B00_000000E8:
    lfs f4, lbl_80883DD0
    lwz r0, 0x1594(r31)
    fdivs f3, f3, f4
    lfs f0, 0x538(r31)
    cmpwi r0, 0x0
    fadds f0, f0, f3
    stfs f0, 0x538(r31)
    beq lbl_fn_802A0B00_00000188
    lfs f0, lbl_80883DC8
    addi r3, r1, 0xf8
    lfs f3, 0x1590(r31)
    fsubs f0, f31, f0
    lfs f7, 0x1584(r31)
    lfs f6, 0x158c(r31)
    fsubs f8, f3, f7
    lfs f5, 0x1580(r31)
    fdivs f0, f0, f4
    stfs f8, 0xd0(r1)
    lfs f4, 0x1588(r31)
    lfs f3, 0x157c(r31)
    fmuls f8, f8, f0
    fsubs f6, f6, f5
    fsubs f4, f4, f3
    stfs f8, 0xc4(r1)
    fadds f2, f8, f7
    stfs f6, 0xcc(r1)
    fmuls f6, f6, f0
    fmuls f0, f4, f0
    stfs f4, 0xc8(r1)
    fadds f4, f6, f5
    stfs f0, 0xbc(r1)
    fadds f0, f0, f3
    stfs f4, 0xfc(r1)
    stfs f0, 0xf8(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f6, 0xc0(r1)
    stfs f2, 0x100(r1)
    psq_st f1, 0x528(r31), 0, 0
    stfs f2, 0x530(r31)
    b lbl_fn_802A0B00_000003B4
lbl_fn_802A0B00_00000188:
    lfs f0, lbl_80883DD4
    fcmpo cr0, f30, f0
    bge lbl_fn_802A0B00_000003B4
    lfs f5, 0x10c(r1)
    lfs f4, lbl_80883DD8
    lfs f0, 0x108(r1)
    lfs f3, 0x104(r1)
    fmuls f5, f5, f4
    fmuls f6, f0, f4
    lfs f0, lbl_80883DDC
    fmuls f7, f3, f4
    lfs f4, 0x528(r31)
    fmuls f8, f5, f0
    fmuls f9, f6, f0
    fmuls f10, f7, f0
    lfs f3, 0x52c(r31)
    lfs f0, 0x530(r31)
    fadds f3, f3, f9
    stfs f7, 0xe0(r1)
    fadds f4, f4, f10
    fadds f0, f0, f8
    stfs f6, 0xe4(r1)
    stfs f5, 0xe8(r1)
    stfs f10, 0xec(r1)
    stfs f9, 0xf0(r1)
    stfs f8, 0xf4(r1)
    stfs f4, 0x528(r31)
    stfs f3, 0x52c(r31)
    stfs f0, 0x530(r31)
    b lbl_fn_802A0B00_000003B4
lbl_fn_802A0B00_00000200:
    lfs f2, 0x10c(r1)
    addi r3, r1, 0x104
    lfs f0, lbl_80883D44
    addi r30, r1, 0xd4
    fabs f3, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0xdc(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_802A0B00_00000250
    lfs f3, 0xd4(r1)
    lfs f0, lbl_80883D28
    fcmpo cr0, f3, f0
    ble lbl_fn_802A0B00_00000244
    lfs f0, lbl_80883D48
    b lbl_fn_802A0B00_00000248
lbl_fn_802A0B00_00000244:
    lfs f0, lbl_80883D4C
lbl_fn_802A0B00_00000248:
    stfs f0, 0xb4(r1)
    b lbl_fn_802A0B00_00000264
lbl_fn_802A0B00_00000250:
    frsp f2, f2
    lfs f1, 0xd4(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0xb4(r1)
lbl_fn_802A0B00_00000264:
    lfs f0, 0xb4(r1)
    addi r3, r1, 0x190
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883D28
    addi r4, r1, 0xa4
    lfs f29, 0x198(r1)
    mr r5, r4
    lfs f30, 0x194(r1)
    addi r3, r1, 0x1c0
    lfs f13, 0x190(r1)
    lfs f12, 0x1a8(r1)
    lfs f11, 0x1a4(r1)
    lfs f10, 0x1a0(r1)
    lfs f9, 0x1b8(r1)
    lfs f8, 0x1b4(r1)
    lfs f7, 0x1b0(r1)
    lfs f6, 0x1bc(r1)
    lfs f5, 0x1ac(r1)
    lfs f4, 0x19c(r1)
    lfs f0, lbl_80883D30
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0xdc(r1)
    stfs f3, 0x1f0(r1)
    stfs f3, 0x1f4(r1)
    stfs f3, 0x1f8(r1)
    stfs f0, 0x1fc(r1)
    stfs f13, 0x74(r1)
    stfs f30, 0x78(r1)
    stfs f29, 0x7c(r1)
    stfs f13, 0x1c0(r1)
    stfs f30, 0x1c4(r1)
    stfs f29, 0x1c8(r1)
    stfs f10, 0x80(r1)
    stfs f11, 0x84(r1)
    stfs f12, 0x88(r1)
    stfs f10, 0x1d0(r1)
    stfs f11, 0x1d4(r1)
    stfs f12, 0x1d8(r1)
    stfs f7, 0x8c(r1)
    stfs f8, 0x90(r1)
    stfs f9, 0x94(r1)
    stfs f7, 0x1e0(r1)
    stfs f8, 0x1e4(r1)
    stfs f9, 0x1e8(r1)
    stfs f4, 0x98(r1)
    stfs f5, 0x9c(r1)
    stfs f6, 0xa0(r1)
    stfs f4, 0x1cc(r1)
    stfs f5, 0x1dc(r1)
    stfs f6, 0x1ec(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xac(r1)
    bl fn_805F9750
    lfs f2, 0xac(r1)
    lfs f0, lbl_80883D44
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802A0B00_00000380
    lfs f3, 0xa8(r1)
    lfs f0, lbl_80883D28
    fcmpo cr0, f3, f0
    ble lbl_fn_802A0B00_00000370
    lfs f0, lbl_80883D48
    b lbl_fn_802A0B00_00000374
lbl_fn_802A0B00_00000370:
    lfs f0, lbl_80883D4C
lbl_fn_802A0B00_00000374:
    fneg f0, f0
    stfs f0, 0xb0(r1)
    b lbl_fn_802A0B00_00000394
lbl_fn_802A0B00_00000380:
    lfs f1, 0xa8(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0xb0(r1)
lbl_fn_802A0B00_00000394:
    addi r3, r1, 0xb0
    lfs f2, lbl_80883D28
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    lfs f0, 0xd8(r1)
    stfs f2, 0xb8(r1)
    stfs f2, 0xdc(r1)
    stfs f0, 0x1578(r31)
lbl_fn_802A0B00_000003B4:
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_802A0B00_0000065C
    lwz r0, 0x1598(r31)
    cmpwi r0, 0x0
    beq lbl_fn_802A0B00_00000650
    li r30, 0x0
    li r0, 0x11
    stw r0, 0x58c(r31)
    stw r30, 0x14d8(r31)
    stw r30, 0x14dc(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883D28
    stw r3, 0x590(r31)
    stfs f0, 0x155c(r31)
    stw r30, 0x15fc(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883D30
    li r0, 0x1
    stw r3, 0x590(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80883D28
    li r4, 0x0
    stw r0, 0x3fc(r31)
    li r5, 0x160
    lfs f2, lbl_80883D60
    li r6, 0x0
    stfs f0, 0x2fc(r31)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    lwz r6, 0x14d4(r31)
    addi r3, r1, 0x14
    addi r5, r1, 0x8
    lfs f0, 0x530(r31)
    psq_l f1, 0x528(r6), 0, 0
    mr r4, r3
    psq_st f1, 0x0(r5), 0, 0
    lfs f2, 0x530(r6)
    lfs f4, 0x8(r1)
    lfs f3, 0x528(r31)
    fsubs f5, f2, f0
    lfs f0, lbl_80883D28
    fsubs f3, f4, f3
    stfs f2, 0x10(r1)
    stfs f3, 0x14(r1)
    stfs f5, 0x1c(r1)
    stfs f0, 0x18(r1)
    bl fn_805F98D0
    lfs f0, 0x538(r31)
    addi r3, r1, 0x14
    stfs f0, 0x1574(r31)
    addi r30, r1, 0x20
    lfs f0, lbl_80883D44
    lfs f2, 0x1c(r1)
    psq_l f1, 0x0(r3), 0, 0
    fabs f3, f2
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x28(r1)
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802A0B00_000004E8
    lfs f3, 0x20(r1)
    lfs f0, lbl_80883D28
    fcmpo cr0, f3, f0
    ble lbl_fn_802A0B00_000004DC
    lfs f0, lbl_80883D48
    b lbl_fn_802A0B00_000004E0
lbl_fn_802A0B00_000004DC:
    lfs f0, lbl_80883D4C
lbl_fn_802A0B00_000004E0:
    stfs f0, 0x30(r1)
    b lbl_fn_802A0B00_000004FC
lbl_fn_802A0B00_000004E8:
    frsp f2, f2
    lfs f1, 0x20(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x30(r1)
lbl_fn_802A0B00_000004FC:
    lfs f0, 0x30(r1)
    addi r3, r1, 0x160
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883D28
    addi r4, r1, 0x38
    lfs f4, 0x168(r1)
    mr r5, r4
    lfs f5, 0x164(r1)
    addi r3, r1, 0x120
    lfs f6, 0x160(r1)
    lfs f7, 0x178(r1)
    lfs f8, 0x174(r1)
    lfs f9, 0x170(r1)
    lfs f10, 0x188(r1)
    lfs f11, 0x184(r1)
    lfs f12, 0x180(r1)
    lfs f13, 0x18c(r1)
    lfs f29, 0x17c(r1)
    lfs f30, 0x16c(r1)
    lfs f0, lbl_80883D30
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x28(r1)
    stfs f3, 0x150(r1)
    stfs f3, 0x154(r1)
    stfs f3, 0x158(r1)
    stfs f0, 0x15c(r1)
    stfs f6, 0x68(r1)
    stfs f5, 0x6c(r1)
    stfs f4, 0x70(r1)
    stfs f6, 0x120(r1)
    stfs f5, 0x124(r1)
    stfs f4, 0x128(r1)
    stfs f9, 0x5c(r1)
    stfs f8, 0x60(r1)
    stfs f7, 0x64(r1)
    stfs f9, 0x130(r1)
    stfs f8, 0x134(r1)
    stfs f7, 0x138(r1)
    stfs f12, 0x50(r1)
    stfs f11, 0x54(r1)
    stfs f10, 0x58(r1)
    stfs f12, 0x140(r1)
    stfs f11, 0x144(r1)
    stfs f10, 0x148(r1)
    stfs f30, 0x44(r1)
    stfs f29, 0x48(r1)
    stfs f13, 0x4c(r1)
    stfs f30, 0x12c(r1)
    stfs f29, 0x13c(r1)
    stfs f13, 0x14c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80883D44
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802A0B00_00000618
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80883D28
    fcmpo cr0, f3, f0
    ble lbl_fn_802A0B00_00000608
    lfs f0, lbl_80883D48
    b lbl_fn_802A0B00_0000060C
lbl_fn_802A0B00_00000608:
    lfs f0, lbl_80883D4C
lbl_fn_802A0B00_0000060C:
    fneg f0, f0
    stfs f0, 0x2c(r1)
    b lbl_fn_802A0B00_0000062C
lbl_fn_802A0B00_00000618:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x2c(r1)
lbl_fn_802A0B00_0000062C:
    addi r3, r1, 0x2c
    lfs f2, lbl_80883D28
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    lfs f0, 0x24(r1)
    stfs f2, 0x34(r1)
    stfs f2, 0x28(r1)
    stfs f0, 0x1578(r31)
    b lbl_fn_802A0B00_0000065C
lbl_fn_802A0B00_00000650:
    mr r3, r31
    li r4, 0x0
    bl fn_8029F148
lbl_fn_802A0B00_0000065C:
    lwz r0, 0x244(r1)
    psq_l f31, 0x238(r1), 0, 0
    lfd f31, 0x230(r1)
    psq_l f30, 0x228(r1), 0, 0
    lfd f30, 0x220(r1)
    psq_l f29, 0x218(r1), 0, 0
    lfd f29, 0x210(r1)
    lwz r31, 0x20c(r1)
    lwz r30, 0x208(r1)
    mtlr r0
    addi r1, r1, 0x240
    blr
}

asm void fn_802A118C(void)
{
    nofralloc
    stwu r1, -0x180(r1)
    mflr r0
    stw r0, 0x184(r1)
    addi r4, r1, 0x98
    stfd f31, 0x170(r1)
    psq_st f31, 0x178(r1), 0, 0
    stfd f30, 0x160(r1)
    psq_st f30, 0x168(r1), 0, 0
    stfd f29, 0x150(r1)
    psq_st f29, 0x158(r1), 0, 0
    stw r31, 0x14c(r1)
    mr r31, r3
    stw r30, 0x148(r1)
    lwz r5, 0x14d4(r3)
    lfs f0, 0x530(r3)
    lfs f2, 0x530(r5)
    psq_l f1, 0x528(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    fsubs f5, f2, f0
    lfs f3, 0x528(r3)
    addi r3, r1, 0x8c
    lfs f4, 0x98(r1)
    mr r4, r3
    lfs f0, lbl_80883D28
    fsubs f3, f4, f3
    stfs f2, 0xa0(r1)
    stfs f3, 0x8c(r1)
    stfs f5, 0x94(r1)
    stfs f0, 0x90(r1)
    bl fn_805F98D0
    lfs f29, 0x2e4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f29, f1
    cror eq, gt, eq
    bne lbl_fn_802A118C_000007A8
    li r30, 0x0
    li r0, 0xd
    stw r0, 0x58c(r31)
    stw r30, 0x14d8(r31)
    stw r30, 0x14dc(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883D28
    li r4, 0x6
    stw r3, 0x590(r31)
    mr r3, r31
    stfs f0, 0x155c(r31)
    stw r30, 0x15fc(r31)
    bl fn_8016E970
    li r0, 0x4
    stw r0, 0x560(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883D30
    li r0, 0x1
    stw r3, 0x590(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80883D28
    li r4, 0x0
    stw r0, 0x3fc(r31)
    li r5, 0x153
    lfs f2, lbl_80883D60
    li r6, 0x1
    stfs f0, 0x2fc(r31)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    b lbl_fn_802A118C_00000B74
lbl_fn_802A118C_000007A8:
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_80883DE0
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_802A118C_00000A48
    lwz r4, 0x14d4(r31)
    addi r3, r1, 0x14
    lfs f0, 0x530(r31)
    addi r30, r1, 0x8
    lfs f3, 0x530(r4)
    lfs f5, 0x52c(r4)
    fsubs f2, f3, f0
    lfs f4, 0x52c(r31)
    lfs f3, 0x528(r4)
    lfs f0, 0x528(r31)
    fsubs f5, f5, f4
    lfs f31, lbl_80883D30
    fsubs f4, f3, f0
    stfs f5, 0x18(r1)
    frsp f3, f2
    lfs f0, lbl_80883D44
    stfs f4, 0x14(r1)
    fabs f4, f3
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x1c(r1)
    frsp f4, f4
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x10(r1)
    fcmpo cr0, f4, f0
    bge lbl_fn_802A118C_00000844
    lfs f3, 0x8(r1)
    lfs f0, lbl_80883D28
    fcmpo cr0, f3, f0
    ble lbl_fn_802A118C_00000838
    lfs f0, lbl_80883D48
    b lbl_fn_802A118C_0000083C
lbl_fn_802A118C_00000838:
    lfs f0, lbl_80883D4C
lbl_fn_802A118C_0000083C:
    stfs f0, 0x24(r1)
    b lbl_fn_802A118C_00000858
lbl_fn_802A118C_00000844:
    fmr f2, f3
    lfs f1, 0x8(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x24(r1)
lbl_fn_802A118C_00000858:
    lfs f0, 0x24(r1)
    addi r3, r1, 0x118
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883D28
    addi r4, r1, 0x2c
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
    lfs f30, 0x134(r1)
    lfs f29, 0x124(r1)
    lfs f0, lbl_80883D30
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x10(r1)
    stfs f3, 0x108(r1)
    stfs f3, 0x10c(r1)
    stfs f3, 0x110(r1)
    stfs f0, 0x114(r1)
    stfs f6, 0x5c(r1)
    stfs f5, 0x60(r1)
    stfs f4, 0x64(r1)
    stfs f6, 0xd8(r1)
    stfs f5, 0xdc(r1)
    stfs f4, 0xe0(r1)
    stfs f9, 0x50(r1)
    stfs f8, 0x54(r1)
    stfs f7, 0x58(r1)
    stfs f9, 0xe8(r1)
    stfs f8, 0xec(r1)
    stfs f7, 0xf0(r1)
    stfs f12, 0x44(r1)
    stfs f11, 0x48(r1)
    stfs f10, 0x4c(r1)
    stfs f12, 0xf8(r1)
    stfs f11, 0xfc(r1)
    stfs f10, 0x100(r1)
    stfs f29, 0x38(r1)
    stfs f30, 0x3c(r1)
    stfs f13, 0x40(r1)
    stfs f29, 0xe4(r1)
    stfs f30, 0xf4(r1)
    stfs f13, 0x104(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x34(r1)
    bl fn_805F9750
    lfs f2, 0x34(r1)
    lfs f0, lbl_80883D44
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802A118C_00000974
    lfs f3, 0x30(r1)
    lfs f0, lbl_80883D28
    fcmpo cr0, f3, f0
    ble lbl_fn_802A118C_00000964
    lfs f0, lbl_80883D48
    b lbl_fn_802A118C_00000968
lbl_fn_802A118C_00000964:
    lfs f0, lbl_80883D4C
lbl_fn_802A118C_00000968:
    fneg f0, f0
    stfs f0, 0x20(r1)
    b lbl_fn_802A118C_00000988
lbl_fn_802A118C_00000974:
    lfs f1, 0x30(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x20(r1)
lbl_fn_802A118C_00000988:
    addi r3, r1, 0x20
    lfs f3, lbl_80883D28
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_80745C48@ha
    psq_st f1, 0x0(r30), 0, 0
    fmr f2, f3
    lfs f0, 0x538(r31)
    lfs f29, 0xc(r1)
    stfs f2, 0x10(r1)
    fsubs f1, f29, f0
    lfd f2, lbl_80745C48@l(r3)
    stfs f3, 0x28(r1)
    bl fn_8068AEA8
    frsp f4, f1
    lfs f0, lbl_80883D50
    fcmpo cr0, f4, f0
    ble lbl_fn_802A118C_000009D4
    lfs f0, lbl_80883D54
    fsubs f4, f4, f0
lbl_fn_802A118C_000009D4:
    lfs f0, lbl_80883D58
    fcmpo cr0, f4, f0
    bge lbl_fn_802A118C_000009E8
    lfs f0, lbl_80883D54
    fadds f4, f4, f0
lbl_fn_802A118C_000009E8:
    lfs f3, lbl_80883D5C
    lfs f0, lbl_80883D28
    fmuls f3, f31, f3
    fcmpo cr0, f4, f0
    bge lbl_fn_802A118C_00000A04
    fneg f0, f4
    b lbl_fn_802A118C_00000A08
lbl_fn_802A118C_00000A04:
    fmr f0, f4
lbl_fn_802A118C_00000A08:
    fcmpo cr0, f0, f3
    cror eq, lt, eq
    bne lbl_fn_802A118C_00000A1C
    stfs f29, 0x538(r31)
    b lbl_fn_802A118C_00000A48
lbl_fn_802A118C_00000A1C:
    lfs f0, lbl_80883D28
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_802A118C_00000A3C
    lfs f0, 0x538(r31)
    fsubs f0, f0, f3
    stfs f0, 0x538(r31)
    b lbl_fn_802A118C_00000A48
lbl_fn_802A118C_00000A3C:
    lfs f0, 0x538(r31)
    fadds f0, f0, f3
    stfs f0, 0x538(r31)
lbl_fn_802A118C_00000A48:
    lwz r0, 0x15c8(r31)
    cmpwi r0, 0x0
    bne lbl_fn_802A118C_00000B74
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_80883DE4
    fcmpo cr0, f3, f0
    ble lbl_fn_802A118C_00000B74
    li r3, 0x1
    li r0, 0x21
    stw r3, 0x15c8(r31)
    stw r0, 0x15c4(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lis r4, lbl_80745C70@ha
    stw r3, 0x15cc(r31)
    addi r4, r4, lbl_80745C70@l
    addi r3, r31, 0xb0
    addi r4, r4, 0x27d
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802A118C_00000AA8
    li r5, 0x0
    b lbl_fn_802A118C_00000AB4
lbl_fn_802A118C_00000AA8:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r5, r3, r0
lbl_fn_802A118C_00000AB4:
    lfs f4, 0x2c(r5)
    addi r3, r1, 0xa8
    lfs f5, 0x1c(r5)
    li r4, 0x79
    lfs f6, 0xc(r5)
    lfs f3, lbl_80883D28
    lfs f0, lbl_80883D30
    stfs f3, 0x68(r1)
    stfs f3, 0x6c(r1)
    stfs f0, 0x70(r1)
    lfs f1, 0x538(r31)
    stfs f6, 0x80(r1)
    stfs f5, 0x84(r1)
    stfs f4, 0x88(r1)
    bl fn_805F8E70
    addi r4, r1, 0x68
    addi r3, r1, 0xa8
    mr r5, r4
    bl fn_805F93C0
    lfs f3, 0x70(r1)
    addi r4, r1, 0x80
    lfs f6, lbl_80883D34
    addi r3, r31, 0x15d0
    lfs f0, 0x68(r1)
    addi r5, r31, 0x15dc
    fmuls f7, f3, f6
    lfs f3, 0x88(r1)
    fmuls f8, f0, f6
    lfs f4, 0x80(r1)
    lfs f0, lbl_80883D28
    fadds f3, f3, f7
    fadds f4, f4, f8
    lfs f5, 0x6c(r1)
    stfs f0, 0x84(r1)
    fmr f2, f3
    stfs f4, 0x80(r1)
    fmuls f0, f5, f6
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x534(r31), 0, 0
    stfs f2, 0x15d8(r31)
    lfs f2, 0x53c(r31)
    stfs f8, 0x74(r1)
    stfs f0, 0x78(r1)
    stfs f7, 0x7c(r1)
    stfs f3, 0x88(r1)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x15e4(r31)
lbl_fn_802A118C_00000B74:
    lwz r0, 0x184(r1)
    psq_l f31, 0x178(r1), 0, 0
    lfd f31, 0x170(r1)
    psq_l f30, 0x168(r1), 0, 0
    lfd f30, 0x160(r1)
    psq_l f29, 0x158(r1), 0, 0
    lfd f29, 0x150(r1)
    lwz r31, 0x14c(r1)
    lwz r30, 0x148(r1)
    mtlr r0
    addi r1, r1, 0x180
    blr
}

asm void fn_802A16A4(void)
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
    lwz r0, 0x1650(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802A16A4_00000C0C
    lfs f1, 0x2e4(r3)
    lfs f0, lbl_80883D84
    fcmpo cr0, f1, f0
    ble lbl_fn_802A16A4_00000C0C
    li r0, 0x1
    stw r0, 0x1650(r3)
    lwz r3, lbl_8087F448
    cmpwi r3, 0x0
    beq lbl_fn_802A16A4_00000C0C
    lfs f1, lbl_80883D30
    li r4, 0x8b8
    li r5, 0xf
    li r6, 0x1
    li r7, 0x0
    bl fn_8037D4C0
lbl_fn_802A16A4_00000C0C:
    lfs f31, 0x2e4(r30)
    addi r3, r30, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_802A16A4_00000CAC
    li r31, 0x0
    li r0, 0xd
    stw r0, 0x58c(r30)
    stw r31, 0x14d8(r30)
    stw r31, 0x14dc(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883D28
    li r4, 0x6
    stw r3, 0x590(r30)
    mr r3, r30
    stfs f0, 0x155c(r30)
    stw r31, 0x15fc(r30)
    bl fn_8016E970
    li r0, 0x4
    stw r0, 0x560(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883D30
    li r0, 0x1
    stw r3, 0x590(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80883D28
    li r4, 0x0
    stw r0, 0x3fc(r30)
    li r5, 0x153
    lfs f2, lbl_80883D60
    li r6, 0x1
    stfs f0, 0x2fc(r30)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r30)
    bl fn_80097C08
lbl_fn_802A16A4_00000CAC:
    lwz r0, 0x24(r1)
    psq_l f31, 0x18(r1), 0, 0
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_802A17CC(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    lfs f0, lbl_80883DE8
    stw r0, 0x54(r1)
    lfs f8, lbl_80883D30
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    stw r29, 0x34(r1)
    mr r29, r3
    lfs f3, 0x2e4(r3)
    lfs f7, 0x1590(r3)
    fdivs f9, f3, f0
    lfs f6, 0x1584(r3)
    lfs f5, 0x158c(r3)
    lfs f4, 0x1580(r3)
    lfs f3, 0x1588(r3)
    lfs f0, 0x157c(r3)
    fsubs f6, f7, f6
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f6, 0x1c(r1)
    fcmpo cr0, f8, f9
    stfs f0, 0x14(r1)
    stfs f4, 0x18(r1)
    bge lbl_fn_802A17CC_00000D3C
    b lbl_fn_802A17CC_00000D40
lbl_fn_802A17CC_00000D3C:
    fmr f8, f9
lbl_fn_802A17CC_00000D40:
    lfs f0, 0x1c(r1)
    lfs f3, lbl_80883D30
    fmuls f7, f0, f8
    fcmpo cr0, f3, f9
    bge lbl_fn_802A17CC_00000D58
    b lbl_fn_802A17CC_00000D5C
lbl_fn_802A17CC_00000D58:
    fmr f3, f9
lbl_fn_802A17CC_00000D5C:
    lfs f0, 0x18(r1)
    lfs f5, lbl_80883D30
    fmuls f6, f0, f3
    fcmpo cr0, f5, f9
    bge lbl_fn_802A17CC_00000D74
    b lbl_fn_802A17CC_00000D78
lbl_fn_802A17CC_00000D74:
    fmr f5, f9
lbl_fn_802A17CC_00000D78:
    lfs f0, 0x14(r1)
    addi r4, r1, 0x20
    lfs f4, 0x1584(r3)
    fmuls f5, f0, f5
    lfs f3, 0x1580(r3)
    lfs f0, 0x157c(r3)
    fadds f2, f7, f4
    fadds f4, f6, f3
    lfs f8, 0x2e4(r3)
    fadds f3, f5, f0
    lfs f0, lbl_80883DEC
    stfs f4, 0x24(r1)
    fcmpo cr0, f8, f0
    stfs f3, 0x20(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f5, 0x8(r1)
    stfs f6, 0xc(r1)
    stfs f7, 0x10(r1)
    stfs f2, 0x28(r1)
    psq_st f1, 0x528(r3), 0, 0
    stfs f2, 0x530(r3)
    ble lbl_fn_802A17CC_00000DE4
    lfs f0, lbl_80883DF0
    fcmpo cr0, f8, f0
    bge lbl_fn_802A17CC_00000DE4
    lfs f0, lbl_80883DF4
    stfs f0, 0x2e4(r3)
lbl_fn_802A17CC_00000DE4:
    lfs f31, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_802A17CC_00000E8C
    li r31, 0x0
    li r30, 0x1
    stw r30, 0x165c(r29)
    stw r31, 0x14d8(r29)
    stw r31, 0x14dc(r29)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883D28
    li r0, 0x6
    stw r3, 0x590(r29)
    mr r3, r29
    li r4, 0x3
    stfs f0, 0x155c(r29)
    stw r31, 0x15fc(r29)
    stw r0, 0x58c(r29)
    bl fn_8016E970
    lfs f3, lbl_80883D30
    addi r3, r29, 0xb0
    lfs f0, lbl_80883D88
    li r4, 0x0
    stw r30, 0x3fc(r29)
    li r5, 0x2
    lfs f1, lbl_80883D28
    li r6, 0x1
    stfs f3, 0x2fc(r29)
    li r7, 0x0
    lfs f2, lbl_80883D60
    li r8, 0x1
    stfs f0, 0x2e8(r29)
    bl fn_80097C08
    lwz r3, lbl_8087F3C0
    mr r4, r29
    li r5, -0x2
    li r6, 0x1
    bl fn_80239DAC
lbl_fn_802A17CC_00000E8C:
    lwz r0, 0x54(r1)
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_802A19B0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r4, r1, 0x20
    stw r31, 0x3c(r1)
    mr r31, r3
    stw r30, 0x38(r1)
    lwz r5, 0x14d4(r3)
    lfs f0, 0x530(r3)
    lfs f2, 0x530(r5)
    psq_l f1, 0x528(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    fsubs f6, f2, f0
    lfs f3, 0x528(r3)
    lfs f4, 0x20(r1)
    fmuls f0, f6, f6
    lfs f5, 0x24(r1)
    fsubs f4, f4, f3
    lfs f3, 0x52c(r3)
    stfs f2, 0x28(r1)
    fsubs f3, f5, f3
    fmadds f1, f4, f4, f0
    stfs f4, 0x14(r1)
    stfs f3, 0x18(r1)
    stfs f6, 0x1c(r1)
    bl fn_8068B100
    lwz r0, 0x16a8(r31)
    lwz r3, 0x1610(r31)
    mulli r0, r0, 0x1e
    cmpw r3, r0
    ble lbl_fn_802A19B0_000010D8
    lwz r5, 0x1648(r31)
    cmpwi r5, 0x0
    beq lbl_fn_802A19B0_00000FFC
    lwz r0, 0x58c(r5)
    cmpwi r0, 0xc
    bne lbl_fn_802A19B0_00000F4C
    li r0, 0x0
    b lbl_fn_802A19B0_00000F70
lbl_fn_802A19B0_00000F4C:
    cmpwi r0, 0xe
    bne lbl_fn_802A19B0_00000F5C
    li r0, 0x1
    b lbl_fn_802A19B0_00000F70
lbl_fn_802A19B0_00000F5C:
    lfs f3, 0x52c(r5)
    lfs f0, lbl_80883D84
    fcmpo cr0, f3, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_802A19B0_00000F70:
    cmpwi r0, 0x0
    beq lbl_fn_802A19B0_00000FFC
    lwz r7, 0x38(r5)
    li r4, 0x0
    li r0, 0x0
    li r3, 0x0
    rlwinm r6, r7, 0, 29, 29
    cmplwi r6, 0x4
    beq lbl_fn_802A19B0_00000FA4
    clrlwi r6, r7, 31
    cmplwi r6, 0x1
    beq lbl_fn_802A19B0_00000FA4
    li r3, 0x1
lbl_fn_802A19B0_00000FA4:
    cmpwi r3, 0x0
    beq lbl_fn_802A19B0_00000FC0
    lwz r3, 0x7e0(r5)
    rlwinm r3, r3, 0, 26, 26
    cmplwi r3, 0x20
    beq lbl_fn_802A19B0_00000FC0
    li r0, 0x1
lbl_fn_802A19B0_00000FC0:
    cmpwi r0, 0x0
    beq lbl_fn_802A19B0_00000FF4
    lwz r0, 0x55c(r5)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_802A19B0_00000FE8
    lwz r0, 0x560(r5)
    cmpwi r0, 0x1c
    bne lbl_fn_802A19B0_00000FE8
    li r3, 0x1
lbl_fn_802A19B0_00000FE8:
    cmpwi r3, 0x0
    bne lbl_fn_802A19B0_00000FF4
    li r4, 0x1
lbl_fn_802A19B0_00000FF4:
    cmpwi r4, 0x0
    bne lbl_fn_802A19B0_000010D8
lbl_fn_802A19B0_00000FFC:
    li r30, 0x0
    li r0, 0x5
    stw r0, 0x14e4(r31)
    stw r30, 0x14d8(r31)
    stw r30, 0x14dc(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883D30
    li r7, 0xe
    lfs f1, lbl_80883D28
    li r0, 0x1
    stw r3, 0x590(r31)
    addi r3, r31, 0xb0
    lfs f2, lbl_80883D60
    li r4, 0x0
    stw r7, 0x58c(r31)
    li r5, 0xa
    li r6, 0x0
    li r7, 0x0
    stfs f1, 0x155c(r31)
    li r8, 0x1
    stw r30, 0x15fc(r31)
    stw r0, 0x3fc(r31)
    stfs f0, 0x2fc(r31)
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    mr r3, r31
    li r4, 0x6
    bl fn_8016E970
    li r0, 0x4
    stw r0, 0x560(r31)
    mr r3, r31
    bl fn_802A42CC
    lwz r3, 0x1570(r31)
    addi r4, r1, 0x8
    lfs f0, 0x530(r31)
    addi r5, r31, 0x1560
    lfs f4, 0xc(r3)
    lfs f5, 0x8(r3)
    lfs f3, 0x4(r3)
    fsubs f2, f4, f0
    lfs f4, 0x52c(r31)
    lfs f0, 0x528(r31)
    fsubs f4, f5, f4
    stfs f2, 0x10(r1)
    fsubs f0, f3, f0
    stfs f4, 0xc(r1)
    stfs f0, 0x8(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x1568(r31)
    stw r30, 0x1610(r31)
    stw r30, 0x1630(r31)
    stw r30, 0x1634(r31)
    b lbl_fn_802A19B0_000010E4
lbl_fn_802A19B0_000010D8:
    mr r3, r31
    li r4, 0x1
    bl fn_8029F148
lbl_fn_802A19B0_000010E4:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_802A1BFC(void)
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
    stw r31, 0xfc(r1)
    stw r30, 0xf8(r1)
    stw r29, 0xf4(r1)
    mr r29, r3
    lwz r0, 0x14d8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802A1BFC_00001490
    lfs f29, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f29, f1
    ble lbl_fn_802A1BFC_00001194
    lfs f0, lbl_80883D30
    li r0, 0x1
    stw r0, 0x14d8(r29)
    addi r3, r29, 0xb0
    lfs f1, lbl_80883D28
    li r4, 0x0
    stw r0, 0x3fc(r29)
    li r5, 0x13f
    lfs f2, lbl_80883D60
    li r6, 0x0
    stfs f0, 0x2fc(r29)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r29)
    bl fn_80097C08
    b lbl_fn_802A1BFC_0000153C
lbl_fn_802A1BFC_00001194:
    lwz r0, 0x14dc(r29)
    cmpwi r0, 0x19
    ble lbl_fn_802A1BFC_0000146C
    lfs f5, lbl_80883DF8
    addi r3, r1, 0x14
    lfs f4, 0x1568(r29)
    addi r30, r1, 0x8
    lfs f3, 0x1564(r29)
    fmuls f8, f4, f5
    lfs f0, 0x1560(r29)
    fmuls f9, f3, f5
    lfs f3, 0x52c(r29)
    fmuls f10, f0, f5
    lfs f4, 0x528(r29)
    lfs f0, 0x530(r29)
    fadds f6, f3, f9
    fadds f7, f4, f10
    lwz r4, 0x14d4(r29)
    fadds f5, f0, f8
    stfs f6, 0x52c(r29)
    lfs f0, lbl_80883D44
    stfs f7, 0x528(r29)
    lfs f31, lbl_80883D2C
    stfs f5, 0x530(r29)
    lfs f3, 0x530(r4)
    lfs f4, 0x52c(r4)
    fsubs f2, f3, f5
    lfs f3, 0x528(r4)
    fsubs f4, f4, f6
    stfs f10, 0x68(r1)
    fsubs f3, f3, f7
    stfs f4, 0x18(r1)
    stfs f3, 0x14(r1)
    frsp f3, f2
    psq_l f1, 0x0(r3), 0, 0
    fabs f4, f3
    stfs f9, 0x6c(r1)
    stfs f8, 0x70(r1)
    frsp f4, f4
    stfs f2, 0x1c(r1)
    fcmpo cr0, f4, f0
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x10(r1)
    bge lbl_fn_802A1BFC_00001268
    lfs f3, 0x8(r1)
    lfs f0, lbl_80883D28
    fcmpo cr0, f3, f0
    ble lbl_fn_802A1BFC_0000125C
    lfs f0, lbl_80883D48
    b lbl_fn_802A1BFC_00001260
lbl_fn_802A1BFC_0000125C:
    lfs f0, lbl_80883D4C
lbl_fn_802A1BFC_00001260:
    stfs f0, 0x24(r1)
    b lbl_fn_802A1BFC_0000127C
lbl_fn_802A1BFC_00001268:
    fmr f2, f3
    lfs f1, 0x8(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x24(r1)
lbl_fn_802A1BFC_0000127C:
    lfs f0, 0x24(r1)
    addi r3, r1, 0xb8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883D28
    addi r4, r1, 0x2c
    lfs f4, 0xc0(r1)
    mr r5, r4
    lfs f5, 0xbc(r1)
    addi r3, r1, 0x78
    lfs f6, 0xb8(r1)
    lfs f7, 0xd0(r1)
    lfs f8, 0xcc(r1)
    lfs f9, 0xc8(r1)
    lfs f10, 0xe0(r1)
    lfs f11, 0xdc(r1)
    lfs f12, 0xd8(r1)
    lfs f13, 0xe4(r1)
    lfs f30, 0xd4(r1)
    lfs f29, 0xc4(r1)
    lfs f0, lbl_80883D30
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x10(r1)
    stfs f3, 0xa8(r1)
    stfs f3, 0xac(r1)
    stfs f3, 0xb0(r1)
    stfs f0, 0xb4(r1)
    stfs f6, 0x5c(r1)
    stfs f5, 0x60(r1)
    stfs f4, 0x64(r1)
    stfs f6, 0x78(r1)
    stfs f5, 0x7c(r1)
    stfs f4, 0x80(r1)
    stfs f9, 0x50(r1)
    stfs f8, 0x54(r1)
    stfs f7, 0x58(r1)
    stfs f9, 0x88(r1)
    stfs f8, 0x8c(r1)
    stfs f7, 0x90(r1)
    stfs f12, 0x44(r1)
    stfs f11, 0x48(r1)
    stfs f10, 0x4c(r1)
    stfs f12, 0x98(r1)
    stfs f11, 0x9c(r1)
    stfs f10, 0xa0(r1)
    stfs f29, 0x38(r1)
    stfs f30, 0x3c(r1)
    stfs f13, 0x40(r1)
    stfs f29, 0x84(r1)
    stfs f30, 0x94(r1)
    stfs f13, 0xa4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x34(r1)
    bl fn_805F9750
    lfs f2, 0x34(r1)
    lfs f0, lbl_80883D44
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802A1BFC_00001398
    lfs f3, 0x30(r1)
    lfs f0, lbl_80883D28
    fcmpo cr0, f3, f0
    ble lbl_fn_802A1BFC_00001388
    lfs f0, lbl_80883D48
    b lbl_fn_802A1BFC_0000138C
lbl_fn_802A1BFC_00001388:
    lfs f0, lbl_80883D4C
lbl_fn_802A1BFC_0000138C:
    fneg f0, f0
    stfs f0, 0x20(r1)
    b lbl_fn_802A1BFC_000013AC
lbl_fn_802A1BFC_00001398:
    lfs f1, 0x30(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x20(r1)
lbl_fn_802A1BFC_000013AC:
    addi r3, r1, 0x20
    lfs f3, lbl_80883D28
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_80745C48@ha
    psq_st f1, 0x0(r30), 0, 0
    fmr f2, f3
    lfs f0, 0x538(r29)
    lfs f29, 0xc(r1)
    stfs f2, 0x10(r1)
    fsubs f1, f29, f0
    lfd f2, lbl_80745C48@l(r3)
    stfs f3, 0x28(r1)
    bl fn_8068AEA8
    frsp f4, f1
    lfs f0, lbl_80883D50
    fcmpo cr0, f4, f0
    ble lbl_fn_802A1BFC_000013F8
    lfs f0, lbl_80883D54
    fsubs f4, f4, f0
lbl_fn_802A1BFC_000013F8:
    lfs f0, lbl_80883D58
    fcmpo cr0, f4, f0
    bge lbl_fn_802A1BFC_0000140C
    lfs f0, lbl_80883D54
    fadds f4, f4, f0
lbl_fn_802A1BFC_0000140C:
    lfs f3, lbl_80883D5C
    lfs f0, lbl_80883D28
    fmuls f3, f31, f3
    fcmpo cr0, f4, f0
    bge lbl_fn_802A1BFC_00001428
    fneg f0, f4
    b lbl_fn_802A1BFC_0000142C
lbl_fn_802A1BFC_00001428:
    fmr f0, f4
lbl_fn_802A1BFC_0000142C:
    fcmpo cr0, f0, f3
    cror eq, lt, eq
    bne lbl_fn_802A1BFC_00001440
    stfs f29, 0x538(r29)
    b lbl_fn_802A1BFC_0000146C
lbl_fn_802A1BFC_00001440:
    lfs f0, lbl_80883D28
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_802A1BFC_00001460
    lfs f0, 0x538(r29)
    fsubs f0, f0, f3
    stfs f0, 0x538(r29)
    b lbl_fn_802A1BFC_0000146C
lbl_fn_802A1BFC_00001460:
    lfs f0, 0x538(r29)
    fadds f0, f0, f3
    stfs f0, 0x538(r29)
lbl_fn_802A1BFC_0000146C:
    lwz r0, 0x14ec(r29)
    cmpwi cr1, r0, 0x0
    beq cr1, lbl_fn_802A1BFC_0000153C
    lfs f3, 0x2e4(r29)
    lfs f0, lbl_80883DFC
    fcmpo cr0, f3, f0
    bge lbl_fn_802A1BFC_0000153C
    beq cr1, lbl_fn_802A1BFC_0000153C
    b lbl_fn_802A1BFC_0000153C
lbl_fn_802A1BFC_00001490:
    cmpwi r0, 0x1
    bne lbl_fn_802A1BFC_0000153C
    lfs f29, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f29, f1
    ble lbl_fn_802A1BFC_0000153C
    li r31, 0x0
    li r30, 0x1
    stw r30, 0x14e4(r29)
    stw r31, 0x14d8(r29)
    stw r31, 0x14dc(r29)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883D28
    li r0, 0x6
    stw r3, 0x590(r29)
    mr r3, r29
    li r4, 0x3
    stfs f0, 0x155c(r29)
    stw r31, 0x15fc(r29)
    stw r0, 0x58c(r29)
    bl fn_8016E970
    lfs f3, lbl_80883D30
    addi r3, r29, 0xb0
    lfs f0, lbl_80883D88
    li r4, 0x0
    stw r30, 0x3fc(r29)
    li r5, 0x2
    lfs f1, lbl_80883D28
    li r6, 0x1
    stfs f3, 0x2fc(r29)
    li r7, 0x0
    lfs f2, lbl_80883D60
    li r8, 0x1
    stfs f0, 0x2e8(r29)
    bl fn_80097C08
    lwz r3, lbl_8087F3C0
    mr r4, r29
    li r5, -0x2
    li r6, 0x1
    bl fn_80239DAC
lbl_fn_802A1BFC_0000153C:
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

asm void fn_802A2070(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r30, 0x28(r1)
    lwz r0, 0x14d8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802A2070_00001778
    lfs f31, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_802A2070_00001674
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x2
    bne lbl_fn_802A2070_00001630
    lfs f0, lbl_80883D28
    li r0, 0x2
    stw r0, 0x14d8(r31)
    li r3, 0x0
    li r4, 0x0
    stfs f0, 0x52c(r31)
    bl fn_80232B7C
    lfs f0, lbl_80883D30
    li r3, -0x1
    stfs f0, 0x10(r1)
    li r0, 0x1
    lfs f1, lbl_80883E00
    addi r4, r31, 0x1668
    stfs f0, 0x14(r1)
    addi r7, r31, 0x528
    addi r8, r31, 0x534
    addi r9, r1, 0x10
    stfs f0, 0x18(r1)
    li r5, 0x0
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x1c(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    b lbl_fn_802A2070_0000166C
lbl_fn_802A2070_00001630:
    lfs f0, lbl_80883D30
    li r0, 0x1
    stw r0, 0x14d8(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80883D28
    li r4, 0x0
    stw r0, 0x3fc(r31)
    li r5, 0x1e2
    lfs f2, lbl_80883D60
    li r6, 0x1
    stfs f0, 0x2fc(r31)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
lbl_fn_802A2070_0000166C:
    li r0, 0x0
    stw r0, 0x14dc(r31)
lbl_fn_802A2070_00001674:
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x2
    bne lbl_fn_802A2070_000016F0
    lfs f1, 0x2e4(r31)
    lfs f0, lbl_80883D7C
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_802A2070_000016BC
    lfs f1, 0x2e8(r31)
    lfs f0, lbl_80883E04
    lfs f2, lbl_80883D30
    fadds f0, f0, f1
    fcmpo cr0, f2, f0
    bge lbl_fn_802A2070_000016B0
    b lbl_fn_802A2070_000016B4
lbl_fn_802A2070_000016B0:
    fmr f2, f0
lbl_fn_802A2070_000016B4:
    stfs f2, 0x2e8(r31)
    b lbl_fn_802A2070_000016F0
lbl_fn_802A2070_000016BC:
    lfs f0, lbl_80883E08
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_802A2070_000016F0
    lfs f1, 0x2e8(r31)
    lfs f0, lbl_80883E04
    lfs f2, lbl_80883DDC
    fsubs f0, f1, f0
    fcmpo cr0, f2, f0
    ble lbl_fn_802A2070_000016E8
    b lbl_fn_802A2070_000016EC
lbl_fn_802A2070_000016E8:
    fmr f2, f0
lbl_fn_802A2070_000016EC:
    stfs f2, 0x2e8(r31)
lbl_fn_802A2070_000016F0:
    lfs f1, 0x2e4(r31)
    lfs f0, lbl_80883DBC
    fcmpo cr0, f1, f0
    bge lbl_fn_802A2070_00001744
    lfs f0, lbl_80883DC4
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_802A2070_00001744
    lwz r5, lbl_8087F430
    li r0, 0xa
    lfs f1, lbl_80883D30
    lwz r3, 0x96c(r5)
    lfs f0, lbl_80883D74
    srwi r4, r3, 31
    clrlwi r3, r3, 31
    xor r3, r3, r4
    subf r3, r4, r3
    stw r3, 0x96c(r5)
    stw r0, 0x970(r5)
    stfs f1, 0x974(r5)
    stfs f0, 0x978(r5)
lbl_fn_802A2070_00001744:
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    lfs f0, 0x1564(r31)
    lfs f2, 0x52c(r31)
    fdivs f1, f0, f1
    lfs f0, lbl_80883D28
    fadds f1, f2, f1
    stfs f1, 0x52c(r31)
    fcmpo cr0, f1, f0
    bge lbl_fn_802A2070_0000187C
    stfs f0, 0x52c(r31)
    b lbl_fn_802A2070_0000187C
lbl_fn_802A2070_00001778:
    cmpwi r0, 0x1
    bne lbl_fn_802A2070_0000181C
    lwz r0, 0x16a4(r3)
    lwz r4, 0x14dc(r3)
    mulli r0, r0, 0x1e
    cmpw r4, r0
    ble lbl_fn_802A2070_0000187C
    li r30, 0x0
    li r0, 0xd
    stw r0, 0x58c(r3)
    stw r30, 0x14d8(r3)
    stw r30, 0x14dc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883D28
    li r4, 0x6
    stw r3, 0x590(r31)
    mr r3, r31
    stfs f0, 0x155c(r31)
    stw r30, 0x15fc(r31)
    bl fn_8016E970
    li r0, 0x4
    stw r0, 0x560(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883D30
    li r0, 0x1
    stw r3, 0x590(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80883D28
    li r4, 0x0
    stw r0, 0x3fc(r31)
    li r5, 0x153
    lfs f2, lbl_80883D60
    li r6, 0x1
    stfs f0, 0x2fc(r31)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    b lbl_fn_802A2070_0000187C
lbl_fn_802A2070_0000181C:
    cmpwi r0, 0x2
    bne lbl_fn_802A2070_0000187C
    lwz r0, 0x14dc(r3)
    cmpwi r0, 0x78
    blt lbl_fn_802A2070_0000187C
    lwz r0, 0x12a4(r3)
    li r4, 0x1
    lwz r5, 0x5c0(r3)
    oris r0, r0, 0x200
    clrrwi r5, r5, 1
    stw r5, 0x5c0(r3)
    ori r0, r0, 0x8000
    stw r0, 0x12a4(r3)
    bl fn_800D246C
    mr r3, r31
    bl fn_801765D8
    lwz r0, 0x1554(r31)
    lwz r3, lbl_8087F430
    cmpwi r0, 0x0
    beq lbl_fn_802A2070_0000187C
    li r0, 0x0
    stw r0, 0x8a0(r3)
    stb r0, 0x97c(r3)
    stw r0, 0x1554(r31)
lbl_fn_802A2070_0000187C:
    lwz r0, 0x44(r1)
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_802A239C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bne lbl_fn_802A239C_000018D0
    li r4, 0x7
    li r0, 0x0
    stw r4, 0x58c(r3)
    stw r0, 0x14e0(r3)
    b lbl_fn_802A239C_000018E8
lbl_fn_802A239C_000018D0:
    cmpwi r4, 0x1
    bne lbl_fn_802A239C_000018E8
    li r4, 0x8
    li r0, 0x1
    stw r4, 0x58c(r3)
    stw r0, 0x14e0(r3)
lbl_fn_802A239C_000018E8:
    li r31, 0x0
    stw r31, 0x14d8(r3)
    stw r31, 0x14dc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883D28
    li r4, 0x6
    stw r3, 0x590(r30)
    mr r3, r30
    stfs f0, 0x155c(r30)
    stw r31, 0x15fc(r30)
    bl fn_8016E970
    li r0, 0x4
    stw r0, 0x560(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f3, lbl_80883D30
    li r0, 0x1
    lfs f0, lbl_80883D88
    li r4, 0x0
    stw r3, 0x590(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80883D28
    li r5, 0x2
    stw r0, 0x3fc(r30)
    li r6, 0x1
    lfs f2, lbl_80883D60
    li r7, 0x0
    stfs f3, 0x2fc(r30)
    li r8, 0x1
    stfs f0, 0x2e8(r30)
    bl fn_80097C08
    lfs f2, 0x530(r30)
    addi r3, r30, 0x159c
    psq_l f1, 0x528(r30), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x15a4(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
