#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_24(void);
extern void _restgpr_27(void);
extern void _savegpr_24(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_8000D0F8(void);
extern void fn_8000D3A4(void);
extern void fn_8001047C(void);
extern void fn_800132EC(void);
extern void fn_80013338(void);
extern void fn_80057A68(void);
extern void fn_800844D8(void);
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800C31F4(void);
extern void fn_800CB3A0(void);
extern void fn_800DD3FC(void);
extern void fn_800E0AA8(void);
extern void fn_800E0AB0(void);
extern void fn_800F7FF0(void);
extern void fn_800F8548(void);
extern void fn_800F8574(void);
extern void fn_800FAB80(void);
extern void fn_80109828(void);
extern void fn_8013C38C(void);
extern void fn_8014052C(void);
extern void fn_8016E970(void);
extern void fn_801A03E8(void);
extern void fn_80232B7C(void);
extern void fn_80239DAC(void);
extern void fn_8023A8B4(void);
extern void fn_8028B74C(void);
extern void fn_802953C8(void);
extern void fn_8029597C(void);
extern void fn_8029A928(void);
extern void fn_8029AC1C(void);
extern void fn_8029AF6C(void);
extern void fn_8029B24C(void);
extern void fn_8029BE7C(void);
extern void fn_80370A78(void);
extern void fn_80370AE4(void);
extern void fn_805F98D0(void);
extern void fn_80680770(void);
extern void fn_80680CF8(void);
extern void fn_80686EA4(void);
extern void fn_8068AD58(void);
extern void fn_8068B100(void);

/* External data declarations */
extern u8 lbl_807457F8[];
extern u8 lbl_80745818[];
extern u8 lbl_80785AC4[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087F048;
extern u32 lbl_8087F1E4;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F9E8;
extern u32 lbl_808813D0;
extern u32 lbl_80883BE8;
extern u32 lbl_80883BEC;
extern u32 lbl_80883BF0;
extern u32 lbl_80883BF8;
extern u32 lbl_80883C18;
extern u32 lbl_80883C20;
extern u32 lbl_80883C28;
extern u32 lbl_80883C40;
extern u32 lbl_80883C54;
extern u32 lbl_80883C58;
extern u32 lbl_80883C5C;
extern u32 lbl_80883C60;
extern u32 lbl_80883C64;
extern u32 lbl_80883C68;
extern u32 lbl_80883C6C;
extern u32 lbl_80883C70;
extern u32 lbl_80883C74;
extern u32 lbl_80883C78;
extern u32 lbl_80883C7C;
extern u32 lbl_80883C80;
extern u32 lbl_80883C84;
extern u32 lbl_80883C88;
extern u32 lbl_80883C8C;

/* Function declarations */
void fn_80296B8C(void);
void fn_80296DB8(void);
void fn_80297114(void);
void fn_80297474(void);
void fn_8029795C(void);

asm void fn_80296B8C(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stfd f31, 0x60(r1)
    psq_st f31, 0x68(r1), 0, 0
    stfd f30, 0x50(r1)
    psq_st f30, 0x58(r1), 0, 0
    stw r31, 0x4c(r1)
    mr r31, r3
    stw r30, 0x48(r1)
    stw r29, 0x44(r1)
    mr r29, r4
    lwz r3, 0x14b0(r3)
    bl fn_8013C38C
    mr r4, r3
    addi r3, r1, 0x2c
    bl fn_8001047C
    lis r4, lbl_80745818@ha
    addi r3, r31, 0xb0
    addi r4, r4, lbl_80745818@l
    addi r4, r4, 0x2e4
    bl fn_800132EC
    mr r4, r3
    addi r3, r1, 0x20
    bl fn_8000D0F8
    addi r3, r1, 0x14
    addi r4, r1, 0x2c
    addi r5, r1, 0x20
    bl fn_80013338
    lfs f0, lbl_80883BE8
    addi r3, r1, 0x14
    stfs f0, 0x18(r1)
    bl fn_8000D3A4
    lfs f0, lbl_80883C5C
    fmr f30, f1
    fcmpo cr0, f1, f0
    bge lbl_fn_80296B8C_000000B0
    lfs f1, lbl_80883BE8
    addi r3, r1, 0x14
    lfs f3, lbl_80883BF0
    fmr f2, f1
    bl fn_80057A68
    lfs f30, lbl_80883BF8
    b lbl_fn_80296B8C_000000B8
lbl_fn_80296B8C_000000B0:
    addi r3, r1, 0x14
    bl fn_800F7FF0
lbl_fn_80296B8C_000000B8:
    addi r3, r31, 0x1510
    li r30, 0x0
    bl fn_800E0AB0
    cmpwi r3, 0x0
    bne lbl_fn_80296B8C_000000F8
    lwz r4, 0x151c(r31)
    addi r3, r31, 0x1510
    bl fn_8028B74C
    lwz r0, 0x0(r3)
    cmpwi r0, 0x4
    bne lbl_fn_80296B8C_000000F8
    addi r3, r31, 0x7d4
    bl fn_8029597C
    cmpwi r3, 0x0
    bne lbl_fn_80296B8C_000000F8
    li r30, 0x1
lbl_fn_80296B8C_000000F8:
    cmpwi r30, 0x0
    li r30, 0x0
    beq lbl_fn_80296B8C_00000114
    mr r3, r31
    bl fn_8029B24C
    li r30, 0x1
    b lbl_fn_80296B8C_000001D0
lbl_fn_80296B8C_00000114:
    lwz r0, 0x58c(r31)
    cmpwi r0, 0xf
    bne lbl_fn_80296B8C_00000128
    lfs f31, lbl_80883BE8
    b lbl_fn_80296B8C_0000012C
lbl_fn_80296B8C_00000128:
    lfs f31, lbl_80883C18
lbl_fn_80296B8C_0000012C:
    mr r4, r31
    addi r3, r1, 0x8
    bl fn_8014052C
    addi r3, r1, 0x14
    addi r4, r1, 0x8
    bl fn_801A03E8
    fcmpo cr0, f1, f31
    ble lbl_fn_80296B8C_000001C4
    lwz r0, 0x14c8(r31)
    lfs f1, lbl_80883C60
    slwi r0, r0, 2
    add r3, r31, r0
    lwz r3, 0x14e4(r3)
    lfs f0, 0x40(r3)
    fadds f0, f1, f0
    fcmpo cr0, f30, f0
    cror eq, lt, eq
    bne lbl_fn_80296B8C_0000019C
    cmpwi r29, 0x0
    beq lbl_fn_80296B8C_0000018C
    lwz r3, 0x14b8(r31)
    lwz r0, 0x1684(r31)
    cmpw r3, r0
    ble lbl_fn_80296B8C_000001D0
lbl_fn_80296B8C_0000018C:
    mr r3, r31
    bl fn_8029A928
    li r30, 0x1
    b lbl_fn_80296B8C_000001D0
lbl_fn_80296B8C_0000019C:
    cmpwi r29, 0x0
    beq lbl_fn_80296B8C_000001B4
    lwz r3, 0x14b8(r31)
    lwz r0, 0x1688(r31)
    cmpw r3, r0
    ble lbl_fn_80296B8C_000001D0
lbl_fn_80296B8C_000001B4:
    mr r3, r31
    bl fn_8029AF6C
    li r30, 0x1
    b lbl_fn_80296B8C_000001D0
lbl_fn_80296B8C_000001C4:
    mr r3, r31
    bl fn_8029AC1C
    li r30, 0x1
lbl_fn_80296B8C_000001D0:
    cmpwi r30, 0x0
    beq lbl_fn_80296B8C_00000200
    lwz r4, 0x151c(r31)
    addi r3, r31, 0x1504
    addi r0, r4, 0x1
    stw r0, 0x151c(r31)
    bl fn_800E0AA8
    lwz r0, 0x151c(r31)
    cmpw r0, r3
    blt lbl_fn_80296B8C_00000200
    li r0, 0x0
    stw r0, 0x151c(r31)
lbl_fn_80296B8C_00000200:
    lwz r0, 0x74(r1)
    psq_l f31, 0x68(r1), 0, 0
    lfd f31, 0x60(r1)
    psq_l f30, 0x58(r1), 0, 0
    lfd f30, 0x50(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_80296DB8(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stw r31, 0x6c(r1)
    mr r31, r3
    stw r30, 0x68(r1)
    lwz r0, 0x14b4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80296DB8_00000460
    lwz r5, 0x1540(r3)
    addi r4, r1, 0x50
    lfs f0, 0x530(r3)
    lfs f2, 0xc(r5)
    psq_l f1, 0x4(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    fsubs f6, f2, f0
    lfs f3, 0x528(r3)
    lfs f4, 0x50(r1)
    fmuls f0, f6, f6
    lfs f5, 0x54(r1)
    fsubs f4, f4, f3
    lfs f3, 0x52c(r3)
    stfs f2, 0x58(r1)
    fsubs f3, f5, f3
    fmadds f1, f4, f4, f0
    stfs f4, 0x44(r1)
    stfs f3, 0x48(r1)
    stfs f6, 0x4c(r1)
    bl fn_8068B100
    lwz r3, 0x1540(r31)
    lwz r0, 0x1528(r31)
    lwz r3, 0x10(r3)
    cmpw r0, r3
    bne lbl_fn_80296DB8_00000394
    lfs f3, 0x58(r1)
    li r30, 0x0
    lfs f0, 0x530(r31)
    addi r4, r1, 0x38
    lfs f5, 0x54(r1)
    addi r3, r31, 0x1530
    fsubs f2, f3, f0
    lfs f4, 0x52c(r31)
    lfs f3, 0x50(r1)
    lfs f0, 0x528(r31)
    fsubs f4, f5, f4
    stfs f2, 0x1538(r31)
    fsubs f0, f3, f0
    stfs f4, 0x3c(r1)
    stfs f0, 0x38(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stw r30, 0x14b4(r31)
    stw r30, 0x14b8(r31)
    stfs f2, 0x40(r1)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883BE8
    mr r4, r31
    stw r3, 0x590(r31)
    li r5, 0x7d0
    li r6, 0x1
    stfs f0, 0x152c(r31)
    stw r30, 0x15b8(r31)
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3e8
    li r6, 0x1
    bl fn_80239DAC
    stw r30, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lfs f3, lbl_80883BF0
    li r0, 0x1
    lfs f0, lbl_80883C58
    addi r3, r31, 0xb0
    stw r0, 0x3fc(r31)
    li r4, 0x0
    lfs f1, lbl_80883BE8
    li r5, 0x2
    stfs f3, 0x2fc(r31)
    li r6, 0x1
    lfs f2, lbl_80883BF8
    li r7, 0x0
    stfs f0, 0x2e8(r31)
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_80296DB8_00000570
lbl_fn_80296DB8_00000394:
    lfs f3, lbl_80883BF0
    lfs f0, 0x1670(r31)
    lfs f4, 0x152c(r31)
    fdivs f5, f3, f0
    lfs f3, lbl_80883C28
    lfs f0, lbl_80883C20
    fadds f4, f4, f5
    stfs f4, 0x152c(r31)
    fmsubs f1, f3, f4, f0
    bl fn_8068AD58
    frsp f4, f1
    lfs f3, lbl_80883BF0
    lfs f0, 0x152c(r31)
    addi r4, r1, 0x8
    lwz r3, 0x1540(r31)
    fadds f6, f3, f4
    lfs f4, lbl_80883C18
    fcmpo cr0, f0, f3
    lfs f3, 0xc(r3)
    fmuls f9, f4, f6
    lfs f5, 0x1554(r31)
    lfs f0, 0x8(r3)
    fsubs f6, f3, f5
    lfs f4, 0x1550(r31)
    lfs f3, 0x4(r3)
    fsubs f7, f0, f4
    lfs f0, 0x154c(r31)
    fmuls f8, f6, f9
    fsubs f3, f3, f0
    stfs f7, 0x18(r1)
    fmuls f7, f7, f9
    stfs f3, 0x14(r1)
    fadds f2, f8, f5
    fmuls f3, f3, f9
    fadds f4, f7, f4
    stfs f6, 0x1c(r1)
    fadds f0, f3, f0
    stfs f4, 0xc(r1)
    stfs f0, 0x8(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f3, 0x20(r1)
    stfs f7, 0x24(r1)
    stfs f8, 0x28(r1)
    stfs f2, 0x10(r1)
    psq_st f1, 0x528(r31), 0, 0
    stfs f2, 0x530(r31)
    cror eq, gt, eq
    bne lbl_fn_80296DB8_00000570
    lwz r0, 0x10(r3)
    stw r0, 0x1528(r31)
    b lbl_fn_80296DB8_00000570
lbl_fn_80296DB8_00000460:
    cmpwi r0, 0x1
    bne lbl_fn_80296DB8_00000570
    lfs f3, 0x1670(r3)
    lwz r4, 0x14b8(r3)
    fctiwz f0, f3
    stfd f0, 0x60(r1)
    lwz r0, 0x64(r1)
    cmpw r4, r0
    bgt lbl_fn_80296DB8_000004D8
    lfs f0, lbl_80883BF0
    lfs f7, 0x1538(r3)
    fdivs f8, f0, f3
    lfs f6, 0x1534(r3)
    lfs f5, 0x1530(r3)
    lfs f4, 0x528(r3)
    lfs f3, 0x52c(r3)
    lfs f0, 0x530(r3)
    fmuls f7, f7, f8
    fmuls f6, f6, f8
    fmuls f5, f5, f8
    stfs f7, 0x34(r1)
    fadds f0, f0, f7
    fadds f3, f3, f6
    stfs f5, 0x2c(r1)
    fadds f4, f4, f5
    stfs f6, 0x30(r1)
    stfs f4, 0x528(r3)
    stfs f3, 0x52c(r3)
    stfs f0, 0x530(r3)
    b lbl_fn_80296DB8_00000570
lbl_fn_80296DB8_000004D8:
    li r30, 0x0
    stw r30, 0x14b4(r3)
    stw r30, 0x14b8(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883BE8
    mr r4, r31
    stw r3, 0x590(r31)
    li r5, 0x7d0
    li r6, 0x1
    stfs f0, 0x152c(r31)
    stw r30, 0x15b8(r31)
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3e8
    li r6, 0x1
    bl fn_80239DAC
    stw r30, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lfs f3, lbl_80883BF0
    li r0, 0x1
    lfs f0, lbl_80883C58
    addi r3, r31, 0xb0
    stw r0, 0x3fc(r31)
    li r4, 0x0
    lfs f1, lbl_80883BE8
    li r5, 0x2
    stfs f3, 0x2fc(r31)
    li r6, 0x1
    lfs f2, lbl_80883BF8
    li r7, 0x0
    stfs f0, 0x2e8(r31)
    li r8, 0x1
    bl fn_80097C08
lbl_fn_80296DB8_00000570:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_80297114(void)
{
    nofralloc
    stwu r1, -0x260(r1)
    mflr r0
    stw r0, 0x264(r1)
    stfd f31, 0x250(r1)
    psq_st f31, 0x258(r1), 0, 0
    stw r31, 0x24c(r1)
    mr r31, r3
    stw r30, 0x248(r1)
    lwz r0, 0x14b4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80297114_000006A8
    lwz r7, 0x15b4(r3)
    lfs f0, lbl_80883BE8
    cmpwi r7, 0x0
    stfs f0, 0xfb8(r3)
    stfs f0, 0xfbc(r3)
    bne lbl_fn_80297114_000005D4
    li r6, 0x1
    b lbl_fn_80297114_00000638
lbl_fn_80297114_000005D4:
    lwz r4, 0x15b8(r3)
    lwz r0, 0xc0(r7)
    cmpw r4, r0
    ble lbl_fn_80297114_000005EC
    li r6, 0x1
    b lbl_fn_80297114_00000638
lbl_fn_80297114_000005EC:
    addi r5, r4, 0x1
    lis r0, 0x4330
    xoris r4, r5, 0x8000
    stw r4, 0x23c(r1)
    lis r4, lbl_807457F8@ha
    li r6, 0x0
    stw r0, 0x238(r1)
    lfd f3, lbl_807457F8@l(r4)
    lfd f0, 0x238(r1)
    stw r5, 0x15b8(r3)
    fsubs f0, f0, f3
    stw r0, 0x240(r1)
    stfs f0, 0xfb8(r3)
    lwz r0, 0xc0(r7)
    xoris r0, r0, 0x8000
    stw r0, 0x244(r1)
    lfd f0, 0x240(r1)
    fsubs f0, f0, f3
    stfs f0, 0xfbc(r3)
lbl_fn_80297114_00000638:
    cmpwi r6, 0x0
    beq lbl_fn_80297114_000008C8
    lfs f3, 0x2e4(r3)
    lfs f0, lbl_80883C64
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_80297114_000008C8
    mr r3, r31
    li r4, 0x6
    bl fn_8016E970
    lfs f0, lbl_80883BF0
    li r0, 0x1
    li r3, 0x1e
    stw r3, 0x560(r31)
    lfs f1, lbl_80883BE8
    addi r3, r31, 0xb0
    stw r0, 0x14b4(r31)
    li r4, 0x0
    lfs f2, lbl_80883BF8
    li r5, 0x145
    stw r0, 0x3fc(r31)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2fc(r31)
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    b lbl_fn_80297114_000008C8
lbl_fn_80297114_000006A8:
    cmpwi r0, 0x1
    bne lbl_fn_80297114_000008C8
    lfs f31, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_80297114_00000768
    li r30, 0x0
    stw r30, 0x14b4(r31)
    stw r30, 0x14b8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883BE8
    mr r4, r31
    stw r3, 0x590(r31)
    li r5, 0x7d0
    li r6, 0x1
    stfs f0, 0x152c(r31)
    stw r30, 0x15b8(r31)
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3e8
    li r6, 0x1
    bl fn_80239DAC
    stw r30, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lfs f3, lbl_80883BF0
    li r0, 0x1
    lfs f0, lbl_80883C58
    addi r3, r31, 0xb0
    stw r0, 0x3fc(r31)
    li r4, 0x0
    lfs f1, lbl_80883BE8
    li r5, 0x2
    stfs f3, 0x2fc(r31)
    li r6, 0x1
    lfs f2, lbl_80883BF8
    li r7, 0x0
    stfs f0, 0x2e8(r31)
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_80297114_000008C8
lbl_fn_80297114_00000768:
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_80883C68
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_80297114_000008C8
    lfs f0, lbl_80883C6C
    fcmpo cr0, f3, f0
    bge lbl_fn_80297114_000008C8
    lwz r0, 0x14c8(r31)
    lwz r4, 0x15b4(r31)
    slwi r0, r0, 2
    add r3, r31, r0
    lwz r0, 0x14f4(r3)
    cmplw r4, r0
    bne lbl_fn_80297114_000008C8
    addi r3, r1, 0x38
    li r4, 0x0
    li r5, 0x200
    bl memset
    lwz r3, lbl_8087F1E4
    lwz r4, 0x354(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80297114_000007C8
    b lbl_fn_80297114_000007CC
lbl_fn_80297114_000007C8:
    la r4, lbl_808813D0
lbl_fn_80297114_000007CC:
    lwz r5, 0x60(r31)
    addi r3, r1, 0x38
    lwz r5, 0x4(r5)
    crclr 6
    bl fn_800DD3FC
    lwz r3, lbl_8087F048
    addi r4, r1, 0x38
    bl fn_80109828
    lis r4, lbl_80745818@ha
    addi r3, r31, 0xb0
    addi r4, r4, lbl_80745818@l
    li r5, 0x0
    addi r4, r4, 0x2ea
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80297114_00000814
    li r4, 0x0
    b lbl_fn_80297114_00000820
lbl_fn_80297114_00000814:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r4, r3, r0
lbl_fn_80297114_00000820:
    lfs f0, 0x2c(r4)
    addi r5, r1, 0x20
    lfs f4, 0x1c(r4)
    addi r30, r1, 0x14
    lfs f5, 0xc(r4)
    addi r3, r1, 0x8
    stfs f5, 0x2c(r1)
    mr r4, r3
    stfs f4, 0x30(r1)
    stfs f0, 0x34(r1)
    lwz r6, 0x14b0(r31)
    lfs f2, 0x530(r6)
    psq_l f1, 0x528(r6), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    fsubs f6, f2, f0
    lfs f3, 0x24(r1)
    lfs f0, 0x20(r1)
    fsubs f3, f3, f4
    stfs f2, 0x28(r1)
    fsubs f0, f0, f5
    fmr f2, f6
    stfs f3, 0x18(r1)
    stfs f0, 0x14(r1)
    psq_l f1, 0x0(r30), 0, 0
    stfs f6, 0x1c(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x10(r1)
    bl fn_805F98D0
    lfs f1, lbl_80883BE8
    mr r4, r31
    lfs f0, lbl_80883C70
    mr r7, r30
    stfs f0, 0x8e8(r31)
    addi r6, r1, 0x2c
    lwz r5, 0x15b4(r31)
    li r8, 0x0
    stfs f1, 0x12cc(r31)
    li r9, 0x100
    lfs f2, lbl_80883BF0
    li r10, 0x0
    lwz r3, lbl_8087F048
    bl fn_800F8574
lbl_fn_80297114_000008C8:
    lwz r0, 0x264(r1)
    psq_l f31, 0x258(r1), 0, 0
    lfd f31, 0x250(r1)
    lwz r31, 0x24c(r1)
    lwz r30, 0x248(r1)
    mtlr r0
    addi r1, r1, 0x260
    blr
}

asm void fn_80297474(void)
{
    nofralloc
    stwu r1, -0x2a0(r1)
    mflr r0
    stw r0, 0x2a4(r1)
    addi r11, r1, 0x290
    stfd f31, 0x290(r1)
    psq_st f31, 0x298(r1), 0, 0
    bl _savegpr_27
    lwz r0, 0x14b4(r3)
    mr r31, r3
    cmpwi r0, 0x0
    bne lbl_fn_80297474_00000A08
    lwz r7, 0x15b4(r3)
    lfs f0, lbl_80883BE8
    cmpwi r7, 0x0
    stfs f0, 0xfb8(r3)
    stfs f0, 0xfbc(r3)
    bne lbl_fn_80297474_00000934
    li r6, 0x1
    b lbl_fn_80297474_00000998
lbl_fn_80297474_00000934:
    lwz r4, 0x15b8(r3)
    lwz r0, 0xc0(r7)
    cmpw r4, r0
    ble lbl_fn_80297474_0000094C
    li r6, 0x1
    b lbl_fn_80297474_00000998
lbl_fn_80297474_0000094C:
    addi r5, r4, 0x1
    lis r0, 0x4330
    xoris r4, r5, 0x8000
    stw r4, 0x26c(r1)
    lis r4, lbl_807457F8@ha
    li r6, 0x0
    stw r0, 0x268(r1)
    lfd f1, lbl_807457F8@l(r4)
    lfd f0, 0x268(r1)
    stw r5, 0x15b8(r3)
    fsubs f0, f0, f1
    stw r0, 0x270(r1)
    stfs f0, 0xfb8(r3)
    lwz r0, 0xc0(r7)
    xoris r0, r0, 0x8000
    stw r0, 0x274(r1)
    lfd f0, 0x270(r1)
    fsubs f0, f0, f1
    stfs f0, 0xfbc(r3)
lbl_fn_80297474_00000998:
    cmpwi r6, 0x0
    beq lbl_fn_80297474_00000DB0
    lfs f1, 0x2e4(r3)
    lfs f0, lbl_80883C64
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_80297474_00000DB0
    mr r3, r31
    li r4, 0x6
    bl fn_8016E970
    lfs f0, lbl_80883BF0
    li r0, 0x1e
    li r28, 0x1
    stw r0, 0x560(r31)
    lfs f1, lbl_80883BE8
    addi r3, r31, 0xb0
    stw r28, 0x3fc(r31)
    li r4, 0x0
    lfs f2, lbl_80883BF8
    li r5, 0x13f
    stfs f0, 0x2fc(r31)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    stw r28, 0x14b4(r31)
    b lbl_fn_80297474_00000DB0
lbl_fn_80297474_00000A08:
    cmpwi r0, 0x1
    bne lbl_fn_80297474_00000D10
    lfs f31, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    ble lbl_fn_80297474_00000A8C
    lfs f1, lbl_80883BF0
    li r28, 0x2
    lfs f0, lbl_80883C58
    li r0, 0x1
    stw r28, 0x14b4(r31)
    addi r3, r31, 0xb0
    lfs f2, lbl_80883BF8
    li r4, 0x0
    stw r0, 0x3fc(r31)
    li r5, 0x2
    li r6, 0x1
    li r7, 0x0
    stfs f1, 0x2fc(r31)
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    li r0, 0x0
    stw r0, 0x14b8(r31)
    mr r4, r31
    li r5, 0x3ea
    lwz r3, lbl_8087F3C0
    li r6, 0x1
    bl fn_80239DAC
    stw r28, 0x14b4(r31)
    b lbl_fn_80297474_00000DB0
lbl_fn_80297474_00000A8C:
    lfs f1, 0x2e4(r31)
    lfs f0, lbl_80883C40
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_80297474_00000AD4
    lfs f0, lbl_80883C74
    fcmpo cr0, f1, f0
    bge lbl_fn_80297474_00000AD4
    lwz r3, lbl_8087F430
    li r4, 0x97
    bl fn_80370A78
    cmpwi r3, 0x0
    bne lbl_fn_80297474_00000DB0
    lwz r3, lbl_8087F430
    li r4, 0x97
    li r5, 0x1
    bl fn_80370AE4
    b lbl_fn_80297474_00000DB0
lbl_fn_80297474_00000AD4:
    lfs f1, 0x2e4(r31)
    lfs f0, lbl_80883C6C
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_80297474_00000B68
    lfs f0, lbl_80883C78
    fcmpo cr0, f1, f0
    bge lbl_fn_80297474_00000B68
    mr r3, r31
    li r4, 0x3ea
    bl fn_80232B7C
    lfs f0, lbl_80883BF0
    lis r8, lbl_807C7030@ha
    lfs f3, lbl_80883BE8
    li r3, -0x1
    lfs f2, lbl_80883C7C
    li r0, 0x1
    stfs f3, 0x58(r1)
    addi r4, r31, 0x15bc
    lfs f1, lbl_80883C54
    addi r5, r31, 0xb0
    stfs f3, 0x5c(r1)
    addi r7, r1, 0x58
    addi r8, r8, lbl_807C7030@l
    addi r9, r1, 0x48
    stfs f2, 0x60(r1)
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x48(r1)
    stfs f0, 0x4c(r1)
    stfs f0, 0x50(r1)
    stfs f0, 0x54(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    b lbl_fn_80297474_00000DB0
lbl_fn_80297474_00000B68:
    lfs f1, 0x2e4(r31)
    lfs f0, lbl_80883C80
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_80297474_00000DB0
    lfs f0, lbl_80883C84
    fcmpo cr0, f1, f0
    bge lbl_fn_80297474_00000DB0
    addi r3, r1, 0x68
    li r4, 0x0
    li r5, 0x200
    bl memset
    lwz r4, lbl_8087F1E4
    addi r3, r1, 0x68
    lwz r4, 0x364(r4)
    cmpwi r4, 0x0
    beq lbl_fn_80297474_00000BB0
    b lbl_fn_80297474_00000BB4
lbl_fn_80297474_00000BB0:
    la r4, lbl_808813D0
lbl_fn_80297474_00000BB4:
    lwz r5, 0x60(r31)
    lwz r5, 0x4(r5)
    crclr 6
    bl fn_800DD3FC
    lwz r3, lbl_8087F048
    addi r4, r1, 0x68
    bl fn_80109828
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3ea
    li r6, 0x1
    bl fn_80239DAC
    mr r3, r31
    li r4, 0x3ea
    bl fn_80232B7C
    lfs f0, lbl_80883BE8
    li r28, -0x1
    lfs f1, lbl_80883BF0
    li r29, 0x1
    stfs f0, 0x2c(r1)
    addi r4, r31, 0x15c8
    addi r5, r31, 0xb0
    addi r7, r1, 0x20
    stfs f0, 0x30(r1)
    addi r8, r1, 0x2c
    addi r9, r1, 0x38
    li r6, 0x0
    stfs f0, 0x34(r1)
    li r10, -0x1
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    stfs f0, 0x28(r1)
    stfs f1, 0x38(r1)
    stfs f1, 0x3c(r1)
    stfs f1, 0x40(r1)
    stfs f1, 0x44(r1)
    stw r28, 0x8(r1)
    stw r29, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    mr r3, r31
    bl fn_8029BE7C
    lfs f31, lbl_80883BF0
    li r27, 0x0
    li r30, 0x0
lbl_fn_80297474_00000C68:
    cmplwi r27, 0x20
    lwz r0, lbl_8087F9E8
    blt lbl_fn_80297474_00000C7C
    li r5, 0x0
    b lbl_fn_80297474_00000C84
lbl_fn_80297474_00000C7C:
    add r3, r0, r30
    addi r5, r3, 0x48
lbl_fn_80297474_00000C84:
    lwz r0, 0x4(r5)
    li r3, 0x0
    cmpwi r0, 0x0
    beq lbl_fn_80297474_00000CA4
    lwz r0, 0x0(r5)
    cmpwi r0, 0x3
    beq lbl_fn_80297474_00000CA4
    li r3, 0x1
lbl_fn_80297474_00000CA4:
    cmpwi r3, 0x0
    beq lbl_fn_80297474_00000CFC
    lwz r3, 0x8(r5)
    lwz r0, 0x48(r3)
    cmpwi r0, 0x3
    bne lbl_fn_80297474_00000CFC
    stfs f31, 0x10(r1)
    fmr f1, f31
    addi r4, r31, 0x162c
    addi r7, r5, 0x10
    stfs f31, 0x14(r1)
    addi r8, r5, 0x1c
    addi r9, r1, 0x10
    stfs f31, 0x18(r1)
    li r5, 0x0
    li r6, 0x0
    li r10, -0x1
    stfs f31, 0x1c(r1)
    stw r28, 0x8(r1)
    stw r29, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
lbl_fn_80297474_00000CFC:
    addi r27, r27, 0x1
    addi r30, r30, 0x140
    cmpwi r27, 0x20
    blt lbl_fn_80297474_00000C68
    b lbl_fn_80297474_00000DB0
lbl_fn_80297474_00000D10:
    cmpwi r0, 0x2
    bne lbl_fn_80297474_00000DB0
    li r30, 0x0
    stw r30, 0x14b4(r3)
    stw r30, 0x14b8(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883BE8
    mr r4, r31
    stw r3, 0x590(r31)
    li r5, 0x7d0
    li r6, 0x1
    stfs f0, 0x152c(r31)
    stw r30, 0x15b8(r31)
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3e8
    li r6, 0x1
    bl fn_80239DAC
    stw r30, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lfs f2, lbl_80883BF0
    li r0, 0x1
    lfs f0, lbl_80883C58
    addi r3, r31, 0xb0
    stfs f2, 0x2fc(r31)
    li r4, 0x0
    lfs f1, lbl_80883BE8
    li r5, 0x2
    stw r0, 0x3fc(r31)
    li r6, 0x1
    lfs f2, lbl_80883BF8
    li r7, 0x0
    stfs f0, 0x2e8(r31)
    li r8, 0x1
    bl fn_80097C08
lbl_fn_80297474_00000DB0:
    addi r11, r1, 0x290
    psq_l f31, 0x298(r1), 0, 0
    lfd f31, 0x290(r1)
    bl _restgpr_27
    lwz r0, 0x2a4(r1)
    mtlr r0
    addi r1, r1, 0x2a0
    blr
}

asm void fn_8029795C(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    addi r11, r1, 0xe0
    stfd f31, 0x110(r1)
    psq_st f31, 0x118(r1), 0, 0
    stfd f30, 0x100(r1)
    psq_st f30, 0x108(r1), 0, 0
    stfd f29, 0xf0(r1)
    psq_st f29, 0xf8(r1), 0, 0
    stfd f28, 0xe0(r1)
    psq_st f28, 0xe8(r1), 0, 0
    bl _savegpr_24
    lwz r0, 0x14c4(r3)
    lis r4, 0x4330
    stw r4, 0x98(r1)
    mr r28, r3
    cmpwi r0, 0x6
    stw r4, 0xa0(r1)
    beq lbl_fn_8029795C_00000E24
    bl fn_802953C8
lbl_fn_8029795C_00000E24:
    lwz r0, 0x14b4(r28)
    cmpwi r0, 0x0
    bne lbl_fn_8029795C_00000F5C
    lwz r5, 0x15b4(r28)
    lfs f0, lbl_80883BE8
    cmpwi r5, 0x0
    stfs f0, 0xfb8(r28)
    stfs f0, 0xfbc(r28)
    bne lbl_fn_8029795C_00000E50
    li r3, 0x1
    b lbl_fn_8029795C_00000EA8
lbl_fn_8029795C_00000E50:
    lwz r3, 0x15b8(r28)
    lwz r0, 0xc0(r5)
    cmpw r3, r0
    ble lbl_fn_8029795C_00000E68
    li r3, 0x1
    b lbl_fn_8029795C_00000EA8
lbl_fn_8029795C_00000E68:
    addi r4, r3, 0x1
    lis r3, lbl_807457F8@ha
    xoris r0, r4, 0x8000
    stw r0, 0x9c(r1)
    lfd f3, lbl_807457F8@l(r3)
    li r3, 0x0
    lfd f0, 0x98(r1)
    stw r4, 0x15b8(r28)
    fsubs f0, f0, f3
    stfs f0, 0xfb8(r28)
    lwz r0, 0xc0(r5)
    xoris r0, r0, 0x8000
    stw r0, 0xa4(r1)
    lfd f0, 0xa0(r1)
    fsubs f0, f0, f3
    stfs f0, 0xfbc(r28)
lbl_fn_8029795C_00000EA8:
    cmpwi r3, 0x0
    beq lbl_fn_8029795C_00001680
    lwz r0, 0x14c4(r28)
    cmpwi r0, 0x6
    beq lbl_fn_8029795C_00000ED0
    lfs f3, 0x2e4(r28)
    lfs f0, lbl_80883C64
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_8029795C_00001680
lbl_fn_8029795C_00000ED0:
    mr r3, r28
    li r4, 0x6
    bl fn_8016E970
    lwz r0, 0x14c4(r28)
    li r4, 0x1e
    lfs f0, lbl_80883BF0
    li r3, 0x1
    cmpwi r0, 0x6
    stw r4, 0x560(r28)
    stw r3, 0x3fc(r28)
    stfs f0, 0x2fc(r28)
    stfs f0, 0x2e8(r28)
    bne lbl_fn_8029795C_00000F2C
    lfs f1, lbl_80883BE8
    addi r3, r28, 0xb0
    lfs f2, lbl_80883BF8
    li r4, 0x0
    li r5, 0x14d
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_8029795C_00000F50
lbl_fn_8029795C_00000F2C:
    lfs f1, lbl_80883BE8
    addi r3, r28, 0xb0
    lfs f2, lbl_80883BF8
    li r4, 0x0
    li r5, 0x13f
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
lbl_fn_8029795C_00000F50:
    li r0, 0x1
    stw r0, 0x14b4(r28)
    b lbl_fn_8029795C_00001680
lbl_fn_8029795C_00000F5C:
    cmpwi r0, 0x1
    bne lbl_fn_8029795C_00000FC0
    lwz r0, 0x14c4(r28)
    cmpwi r0, 0x6
    beq lbl_fn_8029795C_00000F8C
    lfs f28, 0x2e4(r28)
    addi r3, r28, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f28, f1
    cror eq, gt, eq
    bne lbl_fn_8029795C_000015B8
lbl_fn_8029795C_00000F8C:
    mr r3, r28
    li r4, 0x6
    bl fn_8016E970
    lwz r0, 0x15d8(r28)
    li r5, 0x4
    li r4, 0x2
    li r3, 0x0
    subf r0, r0, r0
    stw r5, 0x560(r28)
    stw r4, 0x14b4(r28)
    stw r0, 0x15d8(r28)
    stw r3, 0x14b8(r28)
    b lbl_fn_8029795C_000015B8
lbl_fn_8029795C_00000FC0:
    cmpwi r0, 0x2
    bne lbl_fn_8029795C_00000FEC
    lwz r3, 0x14b8(r28)
    lwz r0, 0x1698(r28)
    cmpw r3, r0
    blt lbl_fn_8029795C_000015B8
    li r3, 0x3
    li r0, 0x0
    stw r3, 0x14b4(r28)
    stw r0, 0x14b8(r28)
    b lbl_fn_8029795C_000015B8
lbl_fn_8029795C_00000FEC:
    cmpwi r0, 0x3
    bne lbl_fn_8029795C_000015B8
    lwz r3, 0x1690(r28)
    lwz r0, 0x1694(r28)
    lwz r5, 0x15d8(r28)
    mullw r0, r3, r0
    cmpw r0, r5
    blt lbl_fn_8029795C_00001578
    lwz r4, 0x14b8(r28)
    lwz r3, 0x16a0(r28)
    divw r0, r4, r3
    mullw r0, r0, r3
    subf. r0, r0, r4
    bne lbl_fn_8029795C_00001578
    cmpwi r5, 0x0
    bne lbl_fn_8029795C_00001050
    lwz r4, 0x14b0(r28)
    addi r3, r1, 0x70
    lwz r0, 0x15e0(r28)
    psq_l f1, 0x528(r4), 0, 0
    lfs f2, 0x530(r4)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x78(r1)
    stw r0, 0x7c(r1)
    b lbl_fn_8029795C_00001234
lbl_fn_8029795C_00001050:
    lfs f4, lbl_80883C54
    lfs f3, 0x168c(r28)
    lfs f0, lbl_80883C88
    fmuls f3, f4, f3
    fdivs f31, f3, f0
    bl fn_80680CF8
    lfs f3, lbl_80883C54
    lfs f0, 0x168c(r28)
    fmuls f0, f3, f0
    fdivs f0, f0, f31
    fctiwz f0, f0
    stfd f0, 0xa8(r1)
    lwz r4, 0xac(r1)
    divw r0, r3, r4
    mullw r0, r0, r4
    subf r24, r0, r3
    bl fn_80680CF8
    lfs f0, lbl_80883C54
    xoris r0, r24, 0x8000
    lfs f11, 0x168c(r28)
    addi r4, r1, 0x64
    lwz r6, 0x14b0(r28)
    lis r5, lbl_807457F8@ha
    fmuls f0, f0, f11
    lwz r10, lbl_8087F430
    psq_l f1, 0x528(r6), 0, 0
    addi r9, r1, 0x4c
    psq_st f1, 0x0(r4), 0, 0
    addi r8, r1, 0x70
    fdivs f0, f0, f31
    stw r0, 0x9c(r1)
    lfs f5, lbl_80883BE8
    lwz r0, 0x15e0(r28)
    lwz r4, 0x15d8(r28)
    lfs f2, 0x530(r6)
    fctiwz f4, f0
    lfs f0, 0x88(r10)
    lfs f3, 0x80(r10)
    addi r4, r4, 0x3e7
    stfd f4, 0xb0(r1)
    fsubs f12, f0, f2
    lwz r7, 0xb4(r1)
    lfs f0, 0x64(r1)
    divw r6, r3, r7
    lfs f9, lbl_80883C18
    fsubs f13, f3, f0
    lfs f0, 0x64(r1)
    fmuls f30, f12, f9
    lfs f10, 0x84(r10)
    fmuls f29, f13, f9
    mullw r6, r6, r7
    fadds f6, f2, f30
    lfs f7, 0x68(r1)
    lfd f4, lbl_807457F8@l(r5)
    fsubs f10, f10, f7
    fadds f8, f0, f29
    lfd f3, 0x98(r1)
    subf r3, r6, r3
    xoris r3, r3, 0x8000
    stw r3, 0xa4(r1)
    fsubs f28, f6, f11
    lfs f7, 0x68(r1)
    lfd f0, 0xa0(r1)
    fmuls f9, f10, f9
    fsubs f11, f8, f11
    stfs f5, 0x50(r1)
    fsubs f3, f3, f4
    stfs f13, 0x58(r1)
    fsubs f0, f0, f4
    mr r3, r28
    fadds f4, f7, f9
    stfs f10, 0x5c(r1)
    fmadds f2, f31, f0, f28
    stfs f12, 0x60(r1)
    fmadds f3, f31, f3, f11
    stfs f29, 0x40(r1)
    stfs f3, 0x4c(r1)
    psq_l f1, 0x0(r9), 0, 0
    stfs f9, 0x44(r1)
    stfs f30, 0x48(r1)
    stfs f8, 0x64(r1)
    stfs f4, 0x68(r1)
    stfs f6, 0x6c(r1)
    stfs f2, 0x54(r1)
    psq_st f1, 0x0(r8), 0, 0
    stfs f2, 0x78(r1)
    stw r0, 0x7c(r1)
    bl fn_80232B7C
    lwz r3, 0x15d8(r28)
    li r11, -0x1
    lwz r5, 0x15d4(r28)
    li r0, 0x1
    lfs f1, lbl_80883BF0
    subi r4, r3, 0x1
    lwz r3, lbl_8087F3C0
    slwi r4, r4, 4
    stfs f1, 0x30(r1)
    add r7, r5, r4
    addi r4, r28, 0x15e4
    addi r8, r28, 0x534
    stfs f1, 0x34(r1)
    addi r9, r1, 0x30
    li r5, 0x0
    li r6, 0x0
    stfs f1, 0x38(r1)
    li r10, -0x1
    stfs f1, 0x3c(r1)
    stw r11, 0x8(r1)
    stw r0, 0xc(r1)
    bl fn_8023A8B4
    lis r4, lbl_80745818@ha
    lfs f1, lbl_80883BF0
    addi r4, r4, lbl_80745818@l
    addi r3, r1, 0x2c
    addi r4, r4, 0x2ef
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x2c
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_8029795C_00001234:
    lwz r0, 0x15d8(r28)
    addi r30, r1, 0x70
    lwz r25, 0x15dc(r28)
    cmplw r0, r25
    bge lbl_fn_8029795C_00001280
    lwz r3, 0x15d4(r28)
    slwi r0, r0, 4
    add. r3, r3, r0
    beq lbl_fn_8029795C_00001270
    psq_l f1, 0x0(r30), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lfs f2, 0x78(r1)
    stfs f2, 0x8(r3)
    lwz r0, 0x7c(r1)
    stw r0, 0xc(r3)
lbl_fn_8029795C_00001270:
    lwz r3, 0x15d8(r28)
    addi r0, r3, 0x1
    stw r0, 0x15d8(r28)
    b lbl_fn_8029795C_00001578
lbl_fn_8029795C_00001280:
    lis r3, 0x1000
    li r4, 0x1
    subi r0, r3, 0x1
    stw r4, 0x10(r1)
    subf r0, r25, r0
    cmplwi r0, 0x1
    bge lbl_fn_8029795C_000012C0
    lis r4, lbl_80745818@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80745818@l
    addi r3, r3, __files@l
    addi r4, r4, 0x261
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8029795C_000012C0:
    lis r3, 0x555
    addi r0, r3, 0x5555
    cmplw r25, r0
    bge lbl_fn_8029795C_000012F8
    addi r4, r25, 0x1
    lis r3, 0xcccd
    slwi r0, r4, 2
    subf r0, r4, r0
    subi r3, r3, 0x3333
    mulhwu r0, r3, r0
    srwi r0, r0, 2
    stw r0, 0x18(r1)
    cmplwi r0, 0x1
    b lbl_fn_8029795C_00001318
lbl_fn_8029795C_000012F8:
    lis r3, 0xaab
    subi r0, r3, 0x5556
    cmplw r25, r0
    bge lbl_fn_8029795C_00001318
    addi r0, r25, 0x1
    srwi r0, r0, 1
    stw r0, 0x14(r1)
    cmplwi r0, 0x1
lbl_fn_8029795C_00001318:
    lwz r4, 0x15d8(r28)
    li r5, 0x0
    lis r3, 0x1000
    lwz r31, 0x15dc(r28)
    subi r0, r3, 0x1
    addi r4, r4, 0x1
    subf r3, r31, r4
    addi r6, r28, 0x15dc
    subf r0, r31, r0
    stw r5, 0x80(r1)
    cmplw r3, r0
    stw r5, 0x84(r1)
    stw r5, 0x88(r1)
    stw r6, 0x8c(r1)
    stw r5, 0x90(r1)
    stw r3, 0x24(r1)
    ble lbl_fn_8029795C_00001380
    lis r4, lbl_80745818@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80745818@l
    addi r3, r3, __files@l
    addi r4, r4, 0x261
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8029795C_00001380:
    lis r3, 0x555
    addi r0, r3, 0x5555
    cmplw r31, r0
    bge lbl_fn_8029795C_000013D0
    addi r5, r31, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x24(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x1c
    srwi r4, r4, 2
    stw r4, 0x1c(r1)
    cmplw r4, r0
    bge lbl_fn_8029795C_000013C4
    addi r3, r1, 0x24
lbl_fn_8029795C_000013C4:
    lwz r0, 0x0(r3)
    add r25, r31, r0
    b lbl_fn_8029795C_00001414
lbl_fn_8029795C_000013D0:
    lis r3, 0xaab
    subi r0, r3, 0x5556
    cmplw r31, r0
    bge lbl_fn_8029795C_0000140C
    addi r3, r31, 0x1
    lwz r0, 0x24(r1)
    srwi r3, r3, 1
    stw r3, 0x20(r1)
    cmplw r3, r0
    addi r3, r1, 0x20
    bge lbl_fn_8029795C_00001400
    addi r3, r1, 0x24
lbl_fn_8029795C_00001400:
    lwz r0, 0x0(r3)
    add r25, r31, r0
    b lbl_fn_8029795C_00001414
lbl_fn_8029795C_0000140C:
    lis r3, 0x1000
    subi r25, r3, 0x1
lbl_fn_8029795C_00001414:
    lis r3, 0x1000
    subi r0, r3, 0x1
    cmplw r25, r0
    ble lbl_fn_8029795C_00001448
    lis r4, lbl_80745818@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80745818@l
    addi r3, r3, __files@l
    addi r4, r4, 0x261
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8029795C_00001448:
    slwi r3, r25, 4
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r26, r3
    bne lbl_fn_8029795C_0000147C
    lis r3, __files@ha
    lis r4, lbl_80785AC4@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80785AC4@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8029795C_0000147C:
    lwz r5, 0x15d8(r28)
    lwz r0, 0x84(r1)
    slwi r3, r5, 4
    stw r26, 0x80(r1)
    slwi r4, r0, 4
    lwz r0, 0x7c(r1)
    add r3, r26, r3
    stw r25, 0x88(r1)
    add. r3, r4, r3
    stw r5, 0x90(r1)
    beq lbl_fn_8029795C_000014BC
    psq_l f1, 0x0(r30), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lfs f2, 0x78(r1)
    stfs f2, 0x8(r3)
    stw r0, 0xc(r3)
lbl_fn_8029795C_000014BC:
    lwz r4, 0x84(r1)
    lwz r0, 0x90(r1)
    addi r5, r4, 0x1
    lwz r3, 0x15d8(r28)
    lwz r7, 0x15d4(r28)
    slwi r0, r0, 4
    slwi r4, r3, 4
    lwz r3, 0x80(r1)
    stw r5, 0x84(r1)
    add r6, r7, r4
    add r5, r3, r0
    b lbl_fn_8029795C_00001528
lbl_fn_8029795C_000014EC:
    subic. r5, r5, 0x10
    subi r6, r6, 0x10
    beq lbl_fn_8029795C_00001510
    lfs f2, 0x8(r6)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x8(r5)
    lwz r0, 0xc(r6)
    stw r0, 0xc(r5)
lbl_fn_8029795C_00001510:
    lwz r4, 0x90(r1)
    lwz r3, 0x84(r1)
    subi r0, r4, 0x1
    stw r0, 0x90(r1)
    addi r0, r3, 0x1
    stw r0, 0x84(r1)
lbl_fn_8029795C_00001528:
    cmplw r7, r6
    blt lbl_fn_8029795C_000014EC
    addic. r0, r1, 0x80
    lwz r0, 0x84(r1)
    lwz r7, 0x15dc(r28)
    li r6, 0x0
    lwz r5, 0x88(r1)
    lwz r3, 0x15d4(r28)
    lwz r4, 0x80(r1)
    stw r5, 0x15dc(r28)
    stw r7, 0x88(r1)
    stw r4, 0x15d4(r28)
    stw r3, 0x80(r1)
    stw r0, 0x15d8(r28)
    stw r6, 0x84(r1)
    beq lbl_fn_8029795C_00001578
    cmpwi r3, 0x0
    beq lbl_fn_8029795C_00001578
    stw r6, 0x84(r1)
    bl dtor_80084684
lbl_fn_8029795C_00001578:
    lwz r4, 0x15d8(r28)
    cmpwi r4, 0x0
    beq lbl_fn_8029795C_000015B8
    lwz r3, 0x1690(r28)
    divwu r0, r3, r4
    mullw r0, r0, r4
    subf. r0, r0, r3
    bne lbl_fn_8029795C_000015B8
    lwz r3, 0x14b8(r28)
    lwz r0, 0x16a0(r28)
    cmpw r3, r0
    ble lbl_fn_8029795C_000015B8
    li r3, 0x0
    li r0, 0x2
    stw r3, 0x14b8(r28)
    stw r0, 0x14b4(r28)
lbl_fn_8029795C_000015B8:
    lwz r0, 0x2dc(r28)
    cmpwi r0, 0x14d
    beq lbl_fn_8029795C_000015CC
    cmpwi r0, 0x13f
    bne lbl_fn_8029795C_00001680
lbl_fn_8029795C_000015CC:
    lfs f28, 0x2e4(r28)
    addi r3, r28, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f28, f1
    cror eq, gt, eq
    bne lbl_fn_8029795C_00001658
    lwz r0, 0x14c4(r28)
    li r3, 0x1
    lfs f0, lbl_80883BF0
    cmpwi r0, 0x6
    stw r3, 0x3fc(r28)
    stfs f0, 0x2fc(r28)
    stfs f0, 0x2e8(r28)
    bne lbl_fn_8029795C_00001630
    lfs f1, lbl_80883BE8
    addi r3, r28, 0xb0
    lfs f2, lbl_80883BF8
    li r4, 0x0
    li r5, 0x153
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_8029795C_00001680
lbl_fn_8029795C_00001630:
    lfs f1, lbl_80883BE8
    addi r3, r28, 0xb0
    lfs f2, lbl_80883BF8
    li r4, 0x0
    li r5, 0x2
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_8029795C_00001680
lbl_fn_8029795C_00001658:
    lfs f3, 0x2e4(r28)
    lfs f0, lbl_80883C7C
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_8029795C_00001680
    lwz r0, 0x14c4(r28)
    cmpwi r0, 0x6
    bne lbl_fn_8029795C_00001680
    lfs f0, lbl_80883C8C
    stfs f0, 0x2e8(r28)
lbl_fn_8029795C_00001680:
    lis r27, lbl_80745818@ha
    lfs f30, lbl_80883BF0
    lfs f31, lbl_80883BEC
    addi r27, r27, lbl_80745818@l
    li r29, 0x0
    li r30, 0x0
    li r31, -0x1
    li r26, 0x5
    lis r25, 0xaaab
    b lbl_fn_8029795C_000017BC
lbl_fn_8029795C_000016A8:
    lwz r0, 0x15d4(r28)
    lwz r4, 0x169c(r28)
    add r3, r0, r30
    lwz r5, 0x15e0(r28)
    lwz r0, 0xc(r3)
    add r3, r4, r0
    cmpw r5, r3
    bne lbl_fn_8029795C_00001794
    lwz r3, lbl_8087F3C0
    mr r4, r28
    addi r5, r29, 0x3e8
    li r6, 0x1
    bl fn_80239DAC
    lwz r24, lbl_8087F048
    mr r3, r24
    bl fn_800F8548
    stw r31, 0x8(r1)
    mr r6, r3
    lfs f1, lbl_80883BE8
    mr r3, r24
    stw r31, 0xc(r1)
    mr r4, r28
    lfs f2, lbl_80883BF0
    addi r8, r28, 0x534
    lwz r5, 0x14c8(r28)
    li r9, 0x0
    lwz r0, 0x15d4(r28)
    li r10, 0x1e
    slwi r5, r5, 2
    add r5, r28, r5
    add r7, r0, r30
    lwz r5, 0x14fc(r5)
    bl fn_800FAB80
    subi r0, r25, 0x5555
    mulhwu r0, r0, r29
    srwi r0, r0, 1
    mulli r0, r0, 0x3
    subf. r0, r0, r29
    bne lbl_fn_8029795C_000017B4
    lwz r8, lbl_8087F430
    fmr f1, f30
    addi r3, r1, 0x28
    addi r4, r27, 0x2fc
    lwz r0, 0x96c(r8)
    li r5, 0x0
    li r6, -0x1
    srwi r7, r0, 31
    clrlwi r0, r0, 31
    xor r0, r0, r7
    subf r0, r7, r0
    stw r0, 0x96c(r8)
    stw r26, 0x970(r8)
    stfs f30, 0x974(r8)
    stfs f31, 0x978(r8)
    bl fn_800C31F4
    addi r3, r1, 0x28
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_8029795C_000017B4
lbl_fn_8029795C_00001794:
    addi r0, r3, 0x1e
    cmpw r5, r0
    bne lbl_fn_8029795C_000017B4
    lwz r3, lbl_8087F3C0
    mr r4, r28
    addi r5, r29, 0x7d0
    li r6, 0x1
    bl fn_80239DAC
lbl_fn_8029795C_000017B4:
    addi r30, r30, 0x10
    addi r29, r29, 0x1
lbl_fn_8029795C_000017BC:
    lwz r4, 0x15d8(r28)
    cmplw r29, r4
    blt lbl_fn_8029795C_000016A8
    lwz r3, 0x1690(r28)
    lwz r0, 0x1694(r28)
    mullw r3, r3, r0
    cmpw r4, r3
    blt lbl_fn_8029795C_000019B0
    subi r0, r3, 0x1
    lwz r4, 0x15d4(r28)
    slwi r3, r0, 4
    lwz r0, 0x169c(r28)
    add r3, r4, r3
    lwz r4, 0x15e0(r28)
    lwz r3, 0xc(r3)
    add r3, r0, r3
    addi r0, r3, 0x1e
    cmpw r4, r0
    blt lbl_fn_8029795C_000019B0
    li r24, 0x0
    b lbl_fn_8029795C_0000183C
lbl_fn_8029795C_00001810:
    lwz r3, lbl_8087F3C0
    mr r4, r28
    addi r5, r24, 0x7d0
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r28
    addi r5, r24, 0x3e8
    li r6, 0x0
    bl fn_80239DAC
    addi r24, r24, 0x1
lbl_fn_8029795C_0000183C:
    lwz r0, 0x15d8(r28)
    cmplw r24, r0
    blt lbl_fn_8029795C_00001810
    lwz r0, 0x14c4(r28)
    lwz r3, 0x15d8(r28)
    cmpwi r0, 0x6
    subf r0, r3, r3
    stw r0, 0x15d8(r28)
    bne lbl_fn_8029795C_00001910
    li r29, 0x0
    li r0, 0xc
    stw r0, 0x58c(r28)
    stw r29, 0x14b4(r28)
    stw r29, 0x14b8(r28)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883BE8
    mr r4, r28
    stw r3, 0x590(r28)
    li r5, 0x7d0
    li r6, 0x1
    stfs f0, 0x152c(r28)
    stw r29, 0x15b8(r28)
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r28
    li r5, 0x3e8
    li r6, 0x1
    bl fn_80239DAC
    mr r3, r28
    li r4, 0x6
    bl fn_8016E970
    li r0, 0x4
    stw r0, 0x560(r28)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883BF0
    li r0, 0x1
    stw r3, 0x590(r28)
    addi r3, r28, 0xb0
    lfs f1, lbl_80883BE8
    li r4, 0x0
    stw r0, 0x3fc(r28)
    li r5, 0x153
    lfs f2, lbl_80883BF8
    li r6, 0x1
    stfs f0, 0x2fc(r28)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r28)
    bl fn_80097C08
    b lbl_fn_8029795C_000019A8
lbl_fn_8029795C_00001910:
    li r29, 0x0
    stw r29, 0x14b4(r28)
    stw r29, 0x14b8(r28)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883BE8
    mr r4, r28
    stw r3, 0x590(r28)
    li r5, 0x7d0
    li r6, 0x1
    stfs f0, 0x152c(r28)
    stw r29, 0x15b8(r28)
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r28
    li r5, 0x3e8
    li r6, 0x1
    bl fn_80239DAC
    stw r29, 0x58c(r28)
    mr r3, r28
    li r4, 0x3
    bl fn_8016E970
    lfs f3, lbl_80883BF0
    li r0, 0x1
    lfs f0, lbl_80883C58
    addi r3, r28, 0xb0
    stw r0, 0x3fc(r28)
    li r4, 0x0
    lfs f1, lbl_80883BE8
    li r5, 0x2
    stfs f3, 0x2fc(r28)
    li r6, 0x1
    lfs f2, lbl_80883BF8
    li r7, 0x0
    stfs f0, 0x2e8(r28)
    li r8, 0x1
    bl fn_80097C08
lbl_fn_8029795C_000019A8:
    li r0, 0x0
    stw r0, 0x15e0(r28)
lbl_fn_8029795C_000019B0:
    lwz r3, 0x15e0(r28)
    addi r0, r3, 0x1
    stw r0, 0x15e0(r28)
    psq_l f31, 0x118(r1), 0, 0
    lfd f31, 0x110(r1)
    psq_l f30, 0x108(r1), 0, 0
    lfd f30, 0x100(r1)
    psq_l f29, 0xf8(r1), 0, 0
    lfd f29, 0xf0(r1)
    psq_l f28, 0xe8(r1), 0, 0
    lfd f28, 0xe0(r1)
    addi r11, r1, 0xe0
    bl _restgpr_24
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}
