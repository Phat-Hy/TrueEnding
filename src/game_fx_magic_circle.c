#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_25(void);
extern void _savegpr_25(void);
extern void dtor_80084684(void);
extern void fn_8000D0F8(void);
extern void fn_8000D3A4(void);
extern void fn_8001047C(void);
extern void fn_800132EC(void);
extern void fn_80013338(void);
extern void fn_8003EA3C(void);
extern void fn_80057A68(void);
extern void fn_800844D8(void);
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800F7FF0(void);
extern void fn_800F8548(void);
extern void fn_800F8574(void);
extern void fn_800F8C6C(void);
extern void fn_800FAB80(void);
extern void fn_8013C38C(void);
extern void fn_8013C480(void);
extern void fn_8014052C(void);
extern void fn_8016E970(void);
extern void fn_801A03E8(void);
extern void fn_80239DAC(void);
extern void fn_802A2790(void);
extern void fn_802A2A68(void);
extern void fn_802A2F48(void);
extern void fn_802A325C(void);
extern void fn_802A3520(void);
extern void fn_802A35B0(void);
extern void fn_802A3D80(void);
extern void fn_802A49C8(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F98D0(void);
extern void fn_80680770(void);
extern void fn_80680CF8(void);
extern void fn_80686EA4(void);
extern void fn_8068AD58(void);
extern void fn_8068AEA8(void);
extern void fn_8068B100(void);

/* External data declarations */
extern u8 lbl_80745C48[];
extern u8 lbl_80745C50[];
extern u8 lbl_80745C70[];
extern u8 lbl_80785CB4[];
extern u8 lbl_807C6B90[];

/* Small data declarations */
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_80883D28;
extern u32 lbl_80883D2C;
extern u32 lbl_80883D30;
extern u32 lbl_80883D34;
extern u32 lbl_80883D38;
extern u32 lbl_80883D48;
extern u32 lbl_80883D50;
extern u32 lbl_80883D54;
extern u32 lbl_80883D58;
extern u32 lbl_80883D60;
extern u32 lbl_80883D64;
extern u32 lbl_80883D70;
extern u32 lbl_80883D74;
extern u32 lbl_80883D88;
extern u32 lbl_80883D8C;
extern u32 lbl_80883D90;
extern u32 lbl_80883D94;
extern u32 lbl_80883D98;
extern u32 lbl_80883D9C;
extern u32 lbl_80883DA0;
extern u32 lbl_80883DA4;
extern u32 lbl_80883DA8;
extern u32 lbl_80883DAC;
extern u32 lbl_80883DB0;
extern u32 lbl_80883DB4;
extern u32 lbl_80883DB8;
extern u32 lbl_80883DBC;
extern u32 lbl_80883DC0;
extern u32 lbl_80883DC4;

/* Function declarations */
void fn_8029F148(void);
void fn_8029F3AC(void);
void fn_8029F3F4(void);
void fn_8029F3FC(void);
void fn_8029F738(void);
void fn_8029FAC0(void);
void fn_8029FD34(void);
void fn_802A057C(void);
void fn_802A0818(void);

asm void fn_8029F148(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stfd f31, 0x50(r1)
    psq_st f31, 0x58(r1), 0, 0
    stfd f30, 0x40(r1)
    psq_st f30, 0x48(r1), 0, 0
    stw r31, 0x3c(r1)
    mr r31, r3
    stw r30, 0x38(r1)
    mr r30, r4
    lwz r0, 0x1650(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8029F148_00000064
    lwz r0, 0x1644(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8029F148_00000064
    addi r3, r3, 0x7d4
    bl fn_8029F3AC
    lfs f0, lbl_80883D8C
    fcmpo cr0, f1, f0
    bge lbl_fn_8029F148_00000064
    mr r3, r31
    bl fn_802A3520
    b lbl_fn_8029F148_0000023C
lbl_fn_8029F148_00000064:
    lwz r3, 0x1648(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8029F148_000000A4
    bl fn_8013C480
    cmpwi r3, 0x0
    beq lbl_fn_8029F148_000000A4
    lwz r3, 0x1648(r31)
    bl fn_802A49C8
    cmpwi r3, 0x0
    bne lbl_fn_8029F148_000000A4
    li r0, 0x5
    stw r0, 0x14e4(r31)
    mr r3, r31
    li r4, 0x5
    bl fn_802A35B0
    b lbl_fn_8029F148_0000023C
lbl_fn_8029F148_000000A4:
    lwz r3, 0x14d4(r31)
    bl fn_8013C38C
    mr r4, r3
    addi r3, r1, 0x2c
    bl fn_8001047C
    lis r4, lbl_80745C70@ha
    addi r3, r31, 0xb0
    addi r4, r4, lbl_80745C70@l
    addi r4, r4, 0x277
    bl fn_800132EC
    mr r4, r3
    addi r3, r1, 0x20
    bl fn_8000D0F8
    addi r3, r1, 0x14
    addi r4, r1, 0x2c
    addi r5, r1, 0x20
    bl fn_80013338
    lfs f0, lbl_80883D28
    addi r3, r1, 0x14
    stfs f0, 0x18(r1)
    bl fn_8000D3A4
    lfs f0, lbl_80883D90
    fmr f30, f1
    fcmpo cr0, f1, f0
    bge lbl_fn_8029F148_00000124
    lfs f1, lbl_80883D28
    addi r3, r1, 0x14
    lfs f3, lbl_80883D30
    fmr f2, f1
    bl fn_80057A68
    lfs f30, lbl_80883D60
    b lbl_fn_8029F148_0000012C
lbl_fn_8029F148_00000124:
    addi r3, r1, 0x14
    bl fn_800F7FF0
lbl_fn_8029F148_0000012C:
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x10
    bne lbl_fn_8029F148_00000140
    lfs f31, lbl_80883D28
    b lbl_fn_8029F148_00000144
lbl_fn_8029F148_00000140:
    lfs f31, lbl_80883D64
lbl_fn_8029F148_00000144:
    mr r4, r31
    addi r3, r1, 0x8
    bl fn_8014052C
    addi r3, r1, 0x14
    addi r4, r1, 0x8
    bl fn_801A03E8
    fcmpo cr0, f1, f31
    ble lbl_fn_8029F148_00000208
    lwz r3, 0x14f0(r31)
    lfs f1, lbl_80883D94
    lfs f0, 0x40(r3)
    fadds f0, f1, f0
    fcmpo cr0, f30, f0
    cror eq, lt, eq
    bne lbl_fn_8029F148_000001D8
    cmpwi r30, 0x0
    beq lbl_fn_8029F148_00000198
    lwz r3, 0x14dc(r31)
    lwz r0, 0x16ac(r31)
    cmpw r3, r0
    ble lbl_fn_8029F148_0000023C
lbl_fn_8029F148_00000198:
    lwz r0, 0x1630(r31)
    cmpwi r0, 0x3
    blt lbl_fn_8029F148_000001B8
    mr r3, r31
    bl fn_802A2F48
    li r0, 0x0
    stw r0, 0x1630(r31)
    b lbl_fn_8029F148_000001CC
lbl_fn_8029F148_000001B8:
    mr r3, r31
    bl fn_802A2790
    lwz r3, 0x1630(r31)
    addi r0, r3, 0x1
    stw r0, 0x1630(r31)
lbl_fn_8029F148_000001CC:
    li r0, 0x0
    stw r0, 0x1634(r31)
    b lbl_fn_8029F148_0000023C
lbl_fn_8029F148_000001D8:
    cmpwi r30, 0x0
    beq lbl_fn_8029F148_000001F0
    lwz r3, 0x14dc(r31)
    lwz r0, 0x16b0(r31)
    cmpw r3, r0
    ble lbl_fn_8029F148_0000023C
lbl_fn_8029F148_000001F0:
    mr r3, r31
    bl fn_802A325C
    li r0, 0x0
    stw r0, 0x1630(r31)
    stw r0, 0x1634(r31)
    b lbl_fn_8029F148_0000023C
lbl_fn_8029F148_00000208:
    lwz r0, 0x1634(r31)
    cmpwi r0, 0x1
    blt lbl_fn_8029F148_00000228
    mr r3, r31
    bl fn_802A2F48
    li r0, 0x0
    stw r0, 0x1634(r31)
    b lbl_fn_8029F148_0000023C
lbl_fn_8029F148_00000228:
    mr r3, r31
    bl fn_802A2A68
    lwz r3, 0x1634(r31)
    addi r0, r3, 0x1
    stw r0, 0x1634(r31)
lbl_fn_8029F148_0000023C:
    lwz r0, 0x64(r1)
    psq_l f31, 0x58(r1), 0, 0
    lfd f31, 0x50(r1)
    psq_l f30, 0x48(r1), 0, 0
    lfd f30, 0x40(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_8029F3AC(void)
{
    nofralloc
    lwz r0, 0x16c(r3)
    stwu r1, -0x10(r1)
    cmpwi r0, 0x0
    ble lbl_fn_8029F3AC_000002A0
    xoris r4, r0, 0x8000
    lis r0, 0x4330
    lis r5, lbl_80745C50@ha
    stw r4, 0xc(r1)
    lfd f2, lbl_80745C50@l(r5)
    stw r0, 0x8(r1)
    lfs f0, 0x4(r3)
    lfd f1, 0x8(r1)
    fsubs f1, f1, f2
    fdivs f1, f0, f1
    b lbl_fn_8029F3AC_000002A4
lbl_fn_8029F3AC_000002A0:
    lfs f1, lbl_80883D28
lbl_fn_8029F3AC_000002A4:
    addi r1, r1, 0x10
    blr
}

asm void fn_8029F3F4(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_8029F3FC(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stw r31, 0x6c(r1)
    mr r31, r3
    stw r30, 0x68(r1)
    lwz r0, 0x14d8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8029F3FC_000004D8
    lwz r5, 0x1570(r3)
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
    lwz r3, 0x1570(r31)
    lwz r0, 0x1558(r31)
    lwz r3, 0x10(r3)
    cmpw r0, r3
    bne lbl_fn_8029F3FC_0000040C
    lfs f3, 0x58(r1)
    li r30, 0x0
    lfs f0, 0x530(r31)
    addi r4, r1, 0x38
    lfs f5, 0x54(r1)
    addi r3, r31, 0x1560
    fsubs f2, f3, f0
    lfs f4, 0x52c(r31)
    lfs f3, 0x50(r1)
    lfs f0, 0x528(r31)
    fsubs f4, f5, f4
    stfs f2, 0x1568(r31)
    fsubs f0, f3, f0
    stfs f4, 0x3c(r1)
    stfs f0, 0x38(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stw r30, 0x14d8(r31)
    stw r30, 0x14dc(r31)
    stfs f2, 0x40(r1)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883D28
    li r0, 0x6
    stw r3, 0x590(r31)
    mr r3, r31
    li r4, 0x3
    stfs f0, 0x155c(r31)
    stw r30, 0x15fc(r31)
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f3, lbl_80883D30
    li r0, 0x1
    lfs f0, lbl_80883D88
    addi r3, r31, 0xb0
    stw r0, 0x3fc(r31)
    li r4, 0x0
    lfs f1, lbl_80883D28
    li r5, 0x2
    stfs f3, 0x2fc(r31)
    li r6, 0x1
    lfs f2, lbl_80883D60
    li r7, 0x0
    stfs f0, 0x2e8(r31)
    li r8, 0x1
    bl fn_80097C08
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, -0x2
    li r6, 0x1
    bl fn_80239DAC
    b lbl_fn_8029F3FC_000005D8
lbl_fn_8029F3FC_0000040C:
    lfs f3, lbl_80883D30
    lfs f0, 0x168c(r31)
    lfs f4, 0x155c(r31)
    fdivs f5, f3, f0
    lfs f3, lbl_80883D50
    lfs f0, lbl_80883D48
    fadds f4, f4, f5
    stfs f4, 0x155c(r31)
    fmsubs f1, f3, f4, f0
    bl fn_8068AD58
    frsp f4, f1
    lfs f3, lbl_80883D30
    lfs f0, 0x155c(r31)
    addi r4, r1, 0x8
    lwz r3, 0x1570(r31)
    fadds f6, f3, f4
    lfs f4, lbl_80883D64
    fcmpo cr0, f0, f3
    lfs f3, 0xc(r3)
    fmuls f9, f4, f6
    lfs f5, 0x15a4(r31)
    lfs f0, 0x8(r3)
    fsubs f6, f3, f5
    lfs f4, 0x15a0(r31)
    lfs f3, 0x4(r3)
    fsubs f7, f0, f4
    lfs f0, 0x159c(r31)
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
    bne lbl_fn_8029F3FC_000005D8
    lwz r0, 0x10(r3)
    stw r0, 0x1558(r31)
    b lbl_fn_8029F3FC_000005D8
lbl_fn_8029F3FC_000004D8:
    cmpwi r0, 0x1
    bne lbl_fn_8029F3FC_000005D8
    lfs f3, 0x168c(r3)
    lwz r4, 0x14dc(r3)
    fctiwz f0, f3
    stfd f0, 0x60(r1)
    lwz r0, 0x64(r1)
    cmpw r4, r0
    bgt lbl_fn_8029F3FC_00000550
    lfs f0, lbl_80883D30
    lfs f7, 0x1568(r3)
    fdivs f8, f0, f3
    lfs f6, 0x1564(r3)
    lfs f5, 0x1560(r3)
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
    b lbl_fn_8029F3FC_000005D8
lbl_fn_8029F3FC_00000550:
    li r30, 0x0
    stw r30, 0x14d8(r3)
    stw r30, 0x14dc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883D28
    li r0, 0x6
    stw r3, 0x590(r31)
    mr r3, r31
    li r4, 0x3
    stfs f0, 0x155c(r31)
    stw r30, 0x15fc(r31)
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f3, lbl_80883D30
    li r0, 0x1
    lfs f0, lbl_80883D88
    addi r3, r31, 0xb0
    stw r0, 0x3fc(r31)
    li r4, 0x0
    lfs f1, lbl_80883D28
    li r5, 0x2
    stfs f3, 0x2fc(r31)
    li r6, 0x1
    lfs f2, lbl_80883D60
    li r7, 0x0
    stfs f0, 0x2e8(r31)
    li r8, 0x1
    bl fn_80097C08
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, -0x2
    li r6, 0x1
    bl fn_80239DAC
lbl_fn_8029F3FC_000005D8:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_8029F738(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stfd f31, 0x70(r1)
    psq_st f31, 0x78(r1), 0, 0
    stw r31, 0x6c(r1)
    mr r31, r3
    stw r30, 0x68(r1)
    lwz r0, 0x14d8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8029F738_0000070C
    li r4, 0x6
    bl fn_8016E970
    lwz r6, 0x15f8(r31)
    li r0, 0x1d
    stw r0, 0x560(r31)
    cmpwi r6, 0x0
    bne lbl_fn_8029F738_00000640
    li r5, 0x1
    b lbl_fn_8029F738_000006A4
lbl_fn_8029F738_00000640:
    lwz r3, 0x15fc(r31)
    lwz r0, 0xc0(r6)
    cmpw r3, r0
    ble lbl_fn_8029F738_00000658
    li r5, 0x1
    b lbl_fn_8029F738_000006A4
lbl_fn_8029F738_00000658:
    addi r4, r3, 0x1
    lis r0, 0x4330
    xoris r3, r4, 0x8000
    stw r3, 0x5c(r1)
    lis r3, lbl_80745C50@ha
    li r5, 0x0
    stw r0, 0x58(r1)
    lfd f3, lbl_80745C50@l(r3)
    lfd f0, 0x58(r1)
    stw r4, 0x15fc(r31)
    fsubs f0, f0, f3
    stw r0, 0x60(r1)
    stfs f0, 0xfb8(r31)
    lwz r0, 0xc0(r6)
    xoris r0, r0, 0x8000
    stw r0, 0x64(r1)
    lfd f0, 0x60(r1)
    fsubs f0, f0, f3
    stfs f0, 0xfbc(r31)
lbl_fn_8029F738_000006A4:
    cmpwi r5, 0x0
    beq lbl_fn_8029F738_00000958
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_80883D70
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_8029F738_00000958
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lfs f0, lbl_80883D30
    li r0, 0x1
    stw r0, 0x14d8(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80883D28
    li r4, 0x0
    stw r0, 0x3fc(r31)
    li r5, 0x145
    lfs f2, lbl_80883D60
    li r6, 0x0
    stfs f0, 0x2fc(r31)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    b lbl_fn_8029F738_00000958
lbl_fn_8029F738_0000070C:
    cmpwi r0, 0x1
    bne lbl_fn_8029F738_00000958
    lfs f31, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_8029F738_000007B8
    li r30, 0x0
    stw r30, 0x14d8(r31)
    stw r30, 0x14dc(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883D28
    li r0, 0x6
    stw r3, 0x590(r31)
    mr r3, r31
    li r4, 0x3
    stfs f0, 0x155c(r31)
    stw r30, 0x15fc(r31)
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f3, lbl_80883D30
    li r0, 0x1
    lfs f0, lbl_80883D88
    addi r3, r31, 0xb0
    stw r0, 0x3fc(r31)
    li r4, 0x0
    lfs f1, lbl_80883D28
    li r5, 0x2
    stfs f3, 0x2fc(r31)
    li r6, 0x1
    lfs f2, lbl_80883D60
    li r7, 0x0
    stfs f0, 0x2e8(r31)
    li r8, 0x1
    bl fn_80097C08
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, -0x2
    li r6, 0x1
    bl fn_80239DAC
lbl_fn_8029F738_000007B8:
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_80883D98
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_8029F738_00000958
    lfs f0, lbl_80883D9C
    fcmpo cr0, f3, f0
    bge lbl_fn_8029F738_00000958
    lwz r3, 0x15f8(r31)
    lwz r0, 0x14f8(r31)
    cmplw r3, r0
    bne lbl_fn_8029F738_000008F8
    lis r4, lbl_80745C70@ha
    addi r3, r31, 0xb0
    addi r4, r4, lbl_80745C70@l
    li r5, 0x0
    addi r4, r4, 0x27d
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8029F738_00000810
    li r3, 0x0
    b lbl_fn_8029F738_0000081C
lbl_fn_8029F738_00000810:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r3, r3, r0
lbl_fn_8029F738_0000081C:
    lfs f0, 0x2c(r3)
    addi r4, r1, 0x20
    lfs f3, 0x1c(r3)
    lfs f4, 0xc(r3)
    stfs f4, 0x2c(r1)
    stfs f3, 0x30(r1)
    stfs f0, 0x34(r1)
    lwz r5, 0x14d4(r31)
    lwz r3, 0x15f8(r31)
    lwz r0, 0x14fc(r31)
    psq_l f1, 0x528(r5), 0, 0
    lfs f2, 0x530(r5)
    cmplw r3, r0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x28(r1)
    bne lbl_fn_8029F738_00000870
    addi r3, r31, 0x1638
    lfs f2, 0x1640(r31)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x28(r1)
lbl_fn_8029F738_00000870:
    lfs f3, 0x28(r1)
    addi r3, r1, 0x8
    lfs f0, 0x34(r1)
    addi r30, r1, 0x14
    lfs f5, 0x24(r1)
    mr r4, r3
    fsubs f2, f3, f0
    lfs f4, 0x30(r1)
    lfs f3, 0x20(r1)
    lfs f0, 0x2c(r1)
    fsubs f4, f5, f4
    stfs f2, 0x1c(r1)
    fsubs f0, f3, f0
    stfs f4, 0x18(r1)
    stfs f0, 0x14(r1)
    psq_l f1, 0x0(r30), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x10(r1)
    bl fn_805F98D0
    lfs f1, lbl_80883D28
    mr r4, r31
    lfs f0, lbl_80883DA0
    mr r7, r30
    stfs f0, 0x8e8(r31)
    addi r6, r1, 0x2c
    lwz r5, 0x15f8(r31)
    li r8, 0x0
    stfs f1, 0x12cc(r31)
    li r9, 0x0
    lfs f2, lbl_80883D30
    li r10, 0x0
    lwz r3, lbl_8087F048
    bl fn_800F8574
    b lbl_fn_8029F738_00000958
lbl_fn_8029F738_000008F8:
    lwz r4, 0x14fc(r31)
    cmplw r3, r4
    bne lbl_fn_8029F738_00000958
    lwz r0, 0x54(r1)
    li r12, 0x0
    li r11, -0x1
    lis r8, lbl_807C6B90@ha
    clrlwi r0, r0, 4
    stw r12, 0x38(r1)
    mr r5, r31
    mr r6, r31
    stw r12, 0x3c(r1)
    addi r3, r1, 0x38
    addi r8, r8, lbl_807C6B90@l
    li r7, 0x0
    stw r12, 0x40(r1)
    li r9, 0x0
    li r10, 0x0
    stw r12, 0x44(r1)
    stw r12, 0x48(r1)
    stw r11, 0x4c(r1)
    stw r0, 0x54(r1)
    stw r11, 0x50(r1)
    bl fn_8003EA3C
lbl_fn_8029F738_00000958:
    lwz r0, 0x84(r1)
    psq_l f31, 0x78(r1), 0, 0
    lfd f31, 0x70(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_8029FAC0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    lwz r0, 0x14d8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8029FAC0_00000A94
    li r4, 0x6
    bl fn_8016E970
    lwz r6, 0x15f8(r31)
    li r0, 0x1d
    stw r0, 0x560(r31)
    cmpwi r6, 0x0
    bne lbl_fn_8029FAC0_000009C8
    li r5, 0x1
    b lbl_fn_8029FAC0_00000A2C
lbl_fn_8029FAC0_000009C8:
    lwz r3, 0x15fc(r31)
    lwz r0, 0xc0(r6)
    cmpw r3, r0
    ble lbl_fn_8029FAC0_000009E0
    li r5, 0x1
    b lbl_fn_8029FAC0_00000A2C
lbl_fn_8029FAC0_000009E0:
    addi r4, r3, 0x1
    lis r0, 0x4330
    xoris r3, r4, 0x8000
    stw r3, 0xc(r1)
    lis r3, lbl_80745C50@ha
    li r5, 0x0
    stw r0, 0x8(r1)
    lfd f1, lbl_80745C50@l(r3)
    lfd f0, 0x8(r1)
    stw r4, 0x15fc(r31)
    fsubs f0, f0, f1
    stw r0, 0x10(r1)
    stfs f0, 0xfb8(r31)
    lwz r0, 0xc0(r6)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f1
    stfs f0, 0xfbc(r31)
lbl_fn_8029FAC0_00000A2C:
    cmpwi r5, 0x0
    beq lbl_fn_8029FAC0_00000BCC
    lfs f1, 0x2e4(r31)
    lfs f0, lbl_80883D70
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_8029FAC0_00000BCC
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lfs f0, lbl_80883D30
    li r30, 0x1
    stw r30, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80883D28
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x13f
    lfs f2, lbl_80883D60
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    stw r30, 0x14d8(r31)
    b lbl_fn_8029FAC0_00000BCC
lbl_fn_8029FAC0_00000A94:
    cmpwi r0, 0x1
    bne lbl_fn_8029FAC0_00000B3C
    lfs f31, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    ble lbl_fn_8029FAC0_00000B00
    lfs f1, lbl_80883D30
    li r3, 0x2
    lfs f0, lbl_80883D88
    li r0, 0x1
    stw r3, 0x14d8(r31)
    addi r3, r31, 0xb0
    lfs f2, lbl_80883D60
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
    stw r0, 0x14dc(r31)
    b lbl_fn_8029FAC0_00000BCC
lbl_fn_8029FAC0_00000B00:
    lfs f1, 0x2e4(r31)
    lfs f0, lbl_80883DA4
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_8029FAC0_00000BCC
    lfs f0, lbl_80883DA8
    fcmpo cr0, f1, f0
    bge lbl_fn_8029FAC0_00000BCC
    mr r3, r31
    li r4, 0x0
    bl fn_802A3D80
    lwz r3, 0x1660(r31)
    addi r0, r3, 0x1
    stw r0, 0x1660(r31)
    b lbl_fn_8029FAC0_00000BCC
lbl_fn_8029FAC0_00000B3C:
    cmpwi r0, 0x2
    bne lbl_fn_8029FAC0_00000BCC
    li r30, 0x0
    stw r30, 0x14d8(r3)
    stw r30, 0x14dc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883D28
    li r0, 0x6
    stw r3, 0x590(r31)
    mr r3, r31
    li r4, 0x3
    stfs f0, 0x155c(r31)
    stw r30, 0x15fc(r31)
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f2, lbl_80883D30
    li r0, 0x1
    lfs f0, lbl_80883D88
    addi r3, r31, 0xb0
    stfs f2, 0x2fc(r31)
    li r4, 0x0
    lfs f1, lbl_80883D28
    li r5, 0x2
    stw r0, 0x3fc(r31)
    li r6, 0x1
    lfs f2, lbl_80883D60
    li r7, 0x0
    stfs f0, 0x2e8(r31)
    li r8, 0x1
    bl fn_80097C08
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, -0x2
    li r6, 0x1
    bl fn_80239DAC
lbl_fn_8029FAC0_00000BCC:
    lwz r0, 0x34(r1)
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8029FD34(void)
{
    nofralloc
    stwu r1, -0x100(r1)
    mflr r0
    stw r0, 0x104(r1)
    addi r11, r1, 0xc0
    stfd f31, 0xf0(r1)
    psq_st f31, 0xf8(r1), 0, 0
    stfd f30, 0xe0(r1)
    psq_st f30, 0xe8(r1), 0, 0
    stfd f29, 0xd0(r1)
    psq_st f29, 0xd8(r1), 0, 0
    stfd f28, 0xc0(r1)
    psq_st f28, 0xc8(r1), 0, 0
    bl _savegpr_25
    lwz r0, 0x14d8(r3)
    mr r29, r3
    cmpwi r0, 0x0
    bne lbl_fn_8029FD34_00000CA4
    lfs f28, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f28, f1
    cror eq, gt, eq
    bne lbl_fn_8029FD34_00001258
    lfs f3, lbl_80883D30
    li r0, 0x1
    lfs f0, lbl_80883D88
    addi r3, r29, 0xb0
    stw r0, 0x14d8(r29)
    li r4, 0x0
    lfs f1, lbl_80883D28
    li r5, 0x2
    stw r0, 0x3fc(r29)
    li r6, 0x1
    lfs f2, lbl_80883D60
    li r7, 0x0
    stfs f3, 0x2fc(r29)
    li r8, 0x1
    stfs f0, 0x2e8(r29)
    bl fn_80097C08
    lwz r3, 0x1604(r29)
    li r0, 0x0
    stw r0, 0x14dc(r29)
    subf r0, r3, r3
    stw r0, 0x1604(r29)
    b lbl_fn_8029FD34_00001258
lbl_fn_8029FD34_00000CA4:
    cmpwi r0, 0x1
    bne lbl_fn_8029FD34_00000CD0
    lwz r4, 0x14dc(r3)
    lwz r0, 0x16c0(r3)
    cmpw r4, r0
    blt lbl_fn_8029FD34_00001258
    li r4, 0x2
    li r0, 0x0
    stw r4, 0x14d8(r3)
    stw r0, 0x14dc(r3)
    b lbl_fn_8029FD34_00001258
lbl_fn_8029FD34_00000CD0:
    cmpwi r0, 0x2
    bne lbl_fn_8029FD34_00001258
    lwz r4, 0x16b8(r3)
    lwz r0, 0x16bc(r3)
    lwz r6, 0x1604(r3)
    mullw r0, r4, r0
    cmpw r0, r6
    blt lbl_fn_8029FD34_00001218
    lwz r5, 0x14dc(r3)
    lwz r4, 0x16c8(r3)
    divw r0, r5, r4
    mullw r0, r0, r4
    subf. r0, r0, r5
    bne lbl_fn_8029FD34_00001218
    cmpwi r6, 0x0
    bne lbl_fn_8029FD34_00000D34
    lwz r5, 0x14d4(r3)
    addi r4, r1, 0x58
    psq_l f1, 0x528(r5), 0, 0
    lfs f2, 0x530(r5)
    stfs f2, 0x60(r1)
    psq_st f1, 0x0(r4), 0, 0
    lwz r0, 0x160c(r3)
    stw r0, 0x64(r1)
    b lbl_fn_8029FD34_00000E90
lbl_fn_8029FD34_00000D34:
    lfs f4, lbl_80883D74
    lfs f3, 0x16b4(r3)
    lfs f0, lbl_80883DAC
    fmuls f3, f4, f3
    fdivs f31, f3, f0
    bl fn_80680CF8
    lfs f3, lbl_80883D74
    lfs f0, 0x16b4(r29)
    fmuls f0, f3, f0
    fdivs f0, f0, f31
    fctiwz f0, f0
    stfd f0, 0x80(r1)
    lwz r4, 0x84(r1)
    divw r0, r3, r4
    mullw r0, r0, r4
    subf r25, r0, r3
    bl fn_80680CF8
    lfs f0, lbl_80883D74
    lis r0, 0x4330
    lfs f9, 0x16b4(r29)
    xoris r4, r25, 0x8000
    lwz r10, lbl_8087F430
    addi r6, r1, 0x4c
    fmuls f0, f0, f9
    lwz r7, 0x14d4(r29)
    lfs f5, lbl_80883D28
    lis r5, lbl_80745C50@ha
    psq_l f1, 0x528(r7), 0, 0
    addi r9, r1, 0x34
    fdivs f0, f0, f31
    lfs f2, 0x530(r7)
    lfs f4, 0x88(r10)
    addi r8, r1, 0x58
    psq_st f1, 0x0(r6), 0, 0
    lfs f3, 0x80(r10)
    fctiwz f6, f0
    lfs f0, 0x4c(r1)
    fsubs f11, f4, f2
    lfs f8, lbl_80883D64
    stfd f6, 0x88(r1)
    fsubs f12, f3, f0
    lwz r7, 0x8c(r1)
    fmuls f13, f11, f8
    fmuls f30, f12, f8
    lfs f0, 0x4c(r1)
    divw r6, r3, r7
    stw r4, 0x94(r1)
    fadds f6, f2, f13
    fadds f7, f0, f30
    stw r0, 0x90(r1)
    lfd f4, lbl_80745C50@l(r5)
    mullw r4, r6, r7
    lfd f0, 0x90(r1)
    stw r0, 0x98(r1)
    fsubs f29, f7, f9
    fsubs f3, f0, f4
    lfs f10, 0x84(r10)
    subf r0, r4, r3
    fsubs f28, f6, f9
    xoris r0, r0, 0x8000
    stw r0, 0x9c(r1)
    lfs f9, 0x50(r1)
    fmadds f3, f31, f3, f29
    lfd f0, 0x98(r1)
    fsubs f9, f10, f9
    stfs f3, 0x34(r1)
    fsubs f0, f0, f4
    lfs f4, 0x50(r1)
    stfs f5, 0x38(r1)
    fmuls f3, f9, f8
    fmadds f2, f31, f0, f28
    psq_l f1, 0x0(r9), 0, 0
    psq_st f1, 0x0(r8), 0, 0
    fadds f0, f4, f3
    stfs f2, 0x60(r1)
    lwz r0, 0x160c(r29)
    stfs f12, 0x40(r1)
    stfs f9, 0x44(r1)
    stfs f11, 0x48(r1)
    stfs f30, 0x28(r1)
    stfs f3, 0x2c(r1)
    stfs f13, 0x30(r1)
    stfs f7, 0x4c(r1)
    stfs f0, 0x50(r1)
    stfs f6, 0x54(r1)
    stfs f2, 0x3c(r1)
    stw r0, 0x64(r1)
lbl_fn_8029FD34_00000E90:
    lwz r26, lbl_8087F048
    mr r3, r26
    bl fn_800F8548
    li r0, -0x1
    stw r0, 0x8(r1)
    mr r6, r3
    lfs f1, lbl_80883D28
    stw r0, 0xc(r1)
    mr r3, r26
    lfs f2, lbl_80883D30
    mr r4, r29
    lwz r5, 0x1504(r29)
    addi r7, r1, 0x58
    addi r8, r29, 0x534
    li r9, 0x0
    li r10, 0x1e
    bl fn_800FAB80
    lwz r0, 0x1604(r29)
    addi r30, r1, 0x58
    lwz r27, 0x1608(r29)
    cmplw r0, r27
    bge lbl_fn_8029FD34_00000F20
    lwz r3, 0x1600(r29)
    slwi r0, r0, 4
    add. r3, r3, r0
    beq lbl_fn_8029FD34_00000F10
    lfs f2, 0x60(r1)
    psq_l f1, 0x0(r30), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x8(r3)
    lwz r0, 0x64(r1)
    stw r0, 0xc(r3)
lbl_fn_8029FD34_00000F10:
    lwz r3, 0x1604(r29)
    addi r0, r3, 0x1
    stw r0, 0x1604(r29)
    b lbl_fn_8029FD34_00001218
lbl_fn_8029FD34_00000F20:
    lis r3, 0x1000
    li r4, 0x1
    subi r0, r3, 0x1
    stw r4, 0x10(r1)
    subf r0, r27, r0
    cmplwi r0, 0x1
    bge lbl_fn_8029FD34_00000F60
    lis r4, lbl_80745C70@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80745C70@l
    addi r3, r3, __files@l
    addi r4, r4, 0x221
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8029FD34_00000F60:
    lis r3, 0x555
    addi r0, r3, 0x5555
    cmplw r27, r0
    bge lbl_fn_8029FD34_00000F98
    addi r4, r27, 0x1
    lis r3, 0xcccd
    slwi r0, r4, 2
    subf r0, r4, r0
    subi r3, r3, 0x3333
    mulhwu r0, r3, r0
    srwi r0, r0, 2
    stw r0, 0x18(r1)
    cmplwi r0, 0x1
    b lbl_fn_8029FD34_00000FB8
lbl_fn_8029FD34_00000F98:
    lis r3, 0xaab
    subi r0, r3, 0x5556
    cmplw r27, r0
    bge lbl_fn_8029FD34_00000FB8
    addi r0, r27, 0x1
    srwi r0, r0, 1
    stw r0, 0x14(r1)
    cmplwi r0, 0x1
lbl_fn_8029FD34_00000FB8:
    lwz r4, 0x1604(r29)
    li r5, 0x0
    lis r3, 0x1000
    lwz r31, 0x1608(r29)
    subi r0, r3, 0x1
    addi r4, r4, 0x1
    subf r3, r31, r4
    addi r6, r29, 0x1608
    subf r0, r31, r0
    stw r5, 0x68(r1)
    cmplw r3, r0
    stw r5, 0x6c(r1)
    stw r5, 0x70(r1)
    stw r6, 0x74(r1)
    stw r5, 0x78(r1)
    stw r3, 0x24(r1)
    ble lbl_fn_8029FD34_00001020
    lis r4, lbl_80745C70@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80745C70@l
    addi r3, r3, __files@l
    addi r4, r4, 0x221
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8029FD34_00001020:
    lis r3, 0x555
    addi r0, r3, 0x5555
    cmplw r31, r0
    bge lbl_fn_8029FD34_00001070
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
    bge lbl_fn_8029FD34_00001064
    addi r3, r1, 0x24
lbl_fn_8029FD34_00001064:
    lwz r0, 0x0(r3)
    add r27, r31, r0
    b lbl_fn_8029FD34_000010B4
lbl_fn_8029FD34_00001070:
    lis r3, 0xaab
    subi r0, r3, 0x5556
    cmplw r31, r0
    bge lbl_fn_8029FD34_000010AC
    addi r3, r31, 0x1
    lwz r0, 0x24(r1)
    srwi r3, r3, 1
    stw r3, 0x20(r1)
    cmplw r3, r0
    addi r3, r1, 0x20
    bge lbl_fn_8029FD34_000010A0
    addi r3, r1, 0x24
lbl_fn_8029FD34_000010A0:
    lwz r0, 0x0(r3)
    add r27, r31, r0
    b lbl_fn_8029FD34_000010B4
lbl_fn_8029FD34_000010AC:
    lis r3, 0x1000
    subi r27, r3, 0x1
lbl_fn_8029FD34_000010B4:
    lis r3, 0x1000
    subi r0, r3, 0x1
    cmplw r27, r0
    ble lbl_fn_8029FD34_000010E8
    lis r4, lbl_80745C70@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80745C70@l
    addi r3, r3, __files@l
    addi r4, r4, 0x221
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8029FD34_000010E8:
    slwi r3, r27, 4
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r28, r3
    bne lbl_fn_8029FD34_0000111C
    lis r3, __files@ha
    lis r4, lbl_80785CB4@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80785CB4@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8029FD34_0000111C:
    lwz r5, 0x1604(r29)
    lwz r0, 0x6c(r1)
    slwi r4, r5, 4
    stw r28, 0x68(r1)
    slwi r3, r0, 4
    add r0, r28, r4
    stw r27, 0x70(r1)
    add. r3, r3, r0
    stw r5, 0x78(r1)
    beq lbl_fn_8029FD34_0000115C
    lfs f2, 0x60(r1)
    psq_l f1, 0x0(r30), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x8(r3)
    lwz r0, 0x64(r1)
    stw r0, 0xc(r3)
lbl_fn_8029FD34_0000115C:
    lwz r4, 0x6c(r1)
    lwz r0, 0x78(r1)
    addi r5, r4, 0x1
    lwz r3, 0x1604(r29)
    lwz r7, 0x1600(r29)
    slwi r0, r0, 4
    slwi r4, r3, 4
    lwz r3, 0x68(r1)
    stw r5, 0x6c(r1)
    add r6, r7, r4
    add r5, r3, r0
    b lbl_fn_8029FD34_000011C8
lbl_fn_8029FD34_0000118C:
    subic. r5, r5, 0x10
    subi r6, r6, 0x10
    beq lbl_fn_8029FD34_000011B0
    lfs f2, 0x8(r6)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x8(r5)
    lwz r0, 0xc(r6)
    stw r0, 0xc(r5)
lbl_fn_8029FD34_000011B0:
    lwz r4, 0x78(r1)
    lwz r3, 0x6c(r1)
    subi r0, r4, 0x1
    stw r0, 0x78(r1)
    addi r0, r3, 0x1
    stw r0, 0x6c(r1)
lbl_fn_8029FD34_000011C8:
    cmplw r7, r6
    blt lbl_fn_8029FD34_0000118C
    addic. r0, r1, 0x68
    lwz r0, 0x6c(r1)
    lwz r7, 0x1608(r29)
    li r6, 0x0
    lwz r5, 0x70(r1)
    lwz r3, 0x1600(r29)
    lwz r4, 0x68(r1)
    stw r5, 0x1608(r29)
    stw r7, 0x70(r1)
    stw r4, 0x1600(r29)
    stw r3, 0x68(r1)
    stw r0, 0x1604(r29)
    stw r6, 0x6c(r1)
    beq lbl_fn_8029FD34_00001218
    cmpwi r3, 0x0
    beq lbl_fn_8029FD34_00001218
    stw r6, 0x6c(r1)
    bl dtor_80084684
lbl_fn_8029FD34_00001218:
    lwz r4, 0x1604(r29)
    cmpwi r4, 0x0
    beq lbl_fn_8029FD34_00001258
    lwz r3, 0x16b8(r29)
    divwu r0, r3, r4
    mullw r0, r0, r4
    subf. r0, r0, r3
    bne lbl_fn_8029FD34_00001258
    lwz r3, 0x14dc(r29)
    lwz r0, 0x16c8(r29)
    cmpw r3, r0
    ble lbl_fn_8029FD34_00001258
    li r3, 0x0
    li r0, 0x1
    stw r3, 0x14dc(r29)
    stw r0, 0x14d8(r29)
lbl_fn_8029FD34_00001258:
    lfs f30, lbl_80883D30
    li r31, 0x0
    lfs f31, lbl_80883D2C
    li r30, 0x0
    li r27, -0x1
    li r28, 0x5
    b lbl_fn_8029FD34_0000130C
lbl_fn_8029FD34_00001274:
    lwz r0, 0x1600(r29)
    lwz r3, 0x16c4(r29)
    add r26, r0, r30
    lwz r4, 0x160c(r29)
    lwz r0, 0xc(r26)
    add r0, r3, r0
    cmpw r4, r0
    bne lbl_fn_8029FD34_00001304
    lwz r25, lbl_8087F048
    mr r3, r25
    bl fn_800F8548
    stw r27, 0x8(r1)
    mr r6, r3
    lfs f1, lbl_80883D28
    mr r3, r25
    stw r27, 0xc(r1)
    mr r4, r29
    lfs f2, lbl_80883D30
    mr r7, r26
    lwz r5, 0x1500(r29)
    addi r8, r29, 0x534
    li r9, 0x0
    li r10, 0x1e
    bl fn_800FAB80
    clrlwi. r0, r31, 31
    bne lbl_fn_8029FD34_00001304
    lwz r4, lbl_8087F430
    lwz r0, 0x96c(r4)
    srwi r3, r0, 31
    clrlwi r0, r0, 31
    xor r0, r0, r3
    subf r0, r3, r0
    stw r0, 0x96c(r4)
    stw r28, 0x970(r4)
    stfs f30, 0x974(r4)
    stfs f31, 0x978(r4)
lbl_fn_8029FD34_00001304:
    addi r30, r30, 0x10
    addi r31, r31, 0x1
lbl_fn_8029FD34_0000130C:
    lwz r4, 0x1604(r29)
    cmplw r31, r4
    blt lbl_fn_8029FD34_00001274
    lwz r3, 0x16b8(r29)
    lwz r0, 0x16bc(r29)
    mullw r3, r3, r0
    cmpw r4, r3
    blt lbl_fn_8029FD34_000013F0
    subi r0, r3, 0x1
    lwz r4, 0x1600(r29)
    slwi r3, r0, 4
    lwz r0, 0x16c4(r29)
    add r3, r4, r3
    lwz r4, 0x160c(r29)
    lwz r3, 0xc(r3)
    add r3, r0, r3
    addi r0, r3, 0x1e
    cmpw r4, r0
    blt lbl_fn_8029FD34_000013F0
    lwz r0, 0x1604(r29)
    li r30, 0x0
    stw r30, 0x14d8(r29)
    subf r0, r0, r0
    stw r0, 0x1604(r29)
    stw r30, 0x14dc(r29)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883D28
    li r0, 0x6
    stw r3, 0x590(r29)
    mr r3, r29
    li r4, 0x3
    stfs f0, 0x155c(r29)
    stw r30, 0x15fc(r29)
    stw r0, 0x58c(r29)
    bl fn_8016E970
    lfs f3, lbl_80883D30
    li r0, 0x1
    lfs f0, lbl_80883D88
    addi r3, r29, 0xb0
    stw r0, 0x3fc(r29)
    li r4, 0x0
    lfs f1, lbl_80883D28
    li r5, 0x2
    stfs f3, 0x2fc(r29)
    li r6, 0x1
    lfs f2, lbl_80883D60
    li r7, 0x0
    stfs f0, 0x2e8(r29)
    li r8, 0x1
    bl fn_80097C08
    lwz r3, lbl_8087F3C0
    mr r4, r29
    li r5, -0x2
    li r6, 0x1
    bl fn_80239DAC
    stw r30, 0x160c(r29)
lbl_fn_8029FD34_000013F0:
    lwz r3, 0x160c(r29)
    addi r0, r3, 0x1
    stw r0, 0x160c(r29)
    psq_l f31, 0xf8(r1), 0, 0
    lfd f31, 0xf0(r1)
    psq_l f30, 0xe8(r1), 0, 0
    lfd f30, 0xe0(r1)
    psq_l f29, 0xd8(r1), 0, 0
    lfd f29, 0xd0(r1)
    psq_l f28, 0xc8(r1), 0, 0
    lfd f28, 0xc0(r1)
    addi r11, r1, 0xc0
    bl _restgpr_25
    lwz r0, 0x104(r1)
    mtlr r0
    addi r1, r1, 0x100
    blr
}

asm void fn_802A057C(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r4, r1, 0x34
    stfd f31, 0x50(r1)
    psq_st f31, 0x58(r1), 0, 0
    stw r31, 0x4c(r1)
    mr r31, r3
    stw r30, 0x48(r1)
    lwz r5, 0x14d4(r3)
    lfs f0, 0x530(r3)
    lfs f2, 0x530(r5)
    psq_l f1, 0x528(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    fsubs f6, f2, f0
    lfs f3, 0x528(r3)
    lfs f4, 0x34(r1)
    fmuls f0, f6, f6
    lfs f5, 0x38(r1)
    fsubs f4, f4, f3
    lfs f3, 0x52c(r3)
    stfs f2, 0x3c(r1)
    fsubs f3, f5, f3
    fmadds f1, f4, f4, f0
    stfs f4, 0x28(r1)
    stfs f3, 0x2c(r1)
    stfs f6, 0x30(r1)
    bl fn_8068B100
    lwz r0, 0x14d8(r31)
    cmpwi r0, 0x0
    bne lbl_fn_802A057C_000016B0
    lfs f31, 0x2e4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_802A057C_00001554
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
    b lbl_fn_802A057C_000016B0
lbl_fn_802A057C_00001554:
    lwz r0, 0x14dc(r31)
    cmpwi r0, 0x2a
    bgt lbl_fn_802A057C_000015AC
    lfs f7, lbl_80883DB0
    lfs f4, 0x1568(r31)
    lfs f3, 0x1564(r31)
    fmuls f5, f4, f7
    lfs f0, 0x1560(r31)
    fmuls f6, f3, f7
    lfs f3, 0x52c(r31)
    fmuls f7, f0, f7
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
lbl_fn_802A057C_000015AC:
    lwz r0, 0x14ec(r31)
    cmpwi cr1, r0, 0x0
    beq cr1, lbl_fn_802A057C_00001610
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_80883DB4
    fcmpo cr0, f3, f0
    bge lbl_fn_802A057C_00001610
    beq cr1, lbl_fn_802A057C_00001610
    lfs f0, lbl_80883D94
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_802A057C_00001610
    lwz r5, lbl_8087F430
    li r0, 0xa
    lfs f3, lbl_80883D30
    lwz r3, 0x96c(r5)
    lfs f0, lbl_80883D74
    srwi r4, r3, 31
    clrlwi r3, r3, 31
    xor r3, r3, r4
    subf r3, r4, r3
    stw r3, 0x96c(r5)
    stw r0, 0x970(r5)
    stfs f3, 0x974(r5)
    stfs f0, 0x978(r5)
lbl_fn_802A057C_00001610:
    lwz r0, 0x14ec(r31)
    cmpwi r0, 0x0
    beq lbl_fn_802A057C_000016B0
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_80883DB8
    fcmpo cr0, f3, f0
    bge lbl_fn_802A057C_000016B0
    lis r4, lbl_80745C70@ha
    addi r3, r31, 0xb0
    addi r4, r4, lbl_80745C70@l
    li r5, 0x0
    addi r4, r4, 0x235
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802A057C_00001654
    li r3, 0x0
    b lbl_fn_802A057C_00001660
lbl_fn_802A057C_00001654:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r3, r3, r0
lbl_fn_802A057C_00001660:
    lfs f0, 0x2c(r3)
    li r0, -0x1
    lfs f3, 0x1c(r3)
    mr r4, r31
    lfs f4, 0xc(r3)
    addi r7, r1, 0x1c
    stfs f4, 0x1c(r1)
    addi r8, r31, 0x534
    lfs f1, lbl_80883D28
    li r9, 0x0
    stfs f3, 0x20(r1)
    li r10, 0x1e
    lfs f2, lbl_80883D30
    stfs f0, 0x24(r1)
    stw r0, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F048
    lwz r5, 0x14ec(r31)
    lwz r6, 0x590(r31)
    bl fn_800FAB80
lbl_fn_802A057C_000016B0:
    lwz r0, 0x64(r1)
    psq_l f31, 0x58(r1), 0, 0
    lfd f31, 0x50(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_802A0818(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    addi r4, r1, 0x38
    stfd f31, 0x80(r1)
    psq_st f31, 0x88(r1), 0, 0
    stw r31, 0x7c(r1)
    stw r30, 0x78(r1)
    mr r30, r3
    lwz r5, 0x14d4(r3)
    lfs f0, 0x530(r3)
    lfs f2, 0x530(r5)
    psq_l f1, 0x528(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    fsubs f6, f2, f0
    lfs f3, 0x528(r3)
    lfs f4, 0x38(r1)
    lfs f5, 0x52c(r3)
    fmuls f0, f6, f6
    fsubs f4, f4, f3
    lfs f3, 0x3c(r1)
    stfs f2, 0x40(r1)
    fsubs f3, f3, f5
    fmadds f1, f4, f4, f0
    stfs f4, 0x2c(r1)
    stfs f3, 0x30(r1)
    stfs f6, 0x34(r1)
    bl fn_8068B100
    addi r3, r1, 0x2c
    mr r4, r3
    bl fn_805F98D0
    lfs f31, 0x2e4(r30)
    addi r3, r30, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_802A0818_000017F0
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
    b lbl_fn_802A0818_00001998
lbl_fn_802A0818_000017F0:
    lfs f3, 0x2e4(r30)
    lfs f0, lbl_80883D34
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_802A0818_0000185C
    lfs f3, 0x1578(r30)
    lis r3, lbl_80745C48@ha
    lfs f0, 0x1574(r30)
    lfd f2, lbl_80745C48@l(r3)
    fsubs f1, f3, f0
    bl fn_8068AEA8
    frsp f4, f1
    lfs f0, lbl_80883D50
    fcmpo cr0, f4, f0
    ble lbl_fn_802A0818_00001834
    lfs f0, lbl_80883D54
    fsubs f4, f4, f0
lbl_fn_802A0818_00001834:
    lfs f0, lbl_80883D58
    fcmpo cr0, f4, f0
    bge lbl_fn_802A0818_00001848
    lfs f0, lbl_80883D54
    fadds f4, f4, f0
lbl_fn_802A0818_00001848:
    lfs f3, lbl_80883D34
    lfs f0, 0x538(r30)
    fdivs f3, f4, f3
    fadds f0, f0, f3
    stfs f0, 0x538(r30)
lbl_fn_802A0818_0000185C:
    lfs f3, 0x2e4(r30)
    lfs f0, lbl_80883DBC
    fcmpo cr0, f3, f0
    ble lbl_fn_802A0818_00001878
    lfs f0, lbl_80883D94
    fcmpo cr0, f3, f0
    blt lbl_fn_802A0818_00001894
lbl_fn_802A0818_00001878:
    lfs f3, 0x2e4(r30)
    lfs f0, lbl_80883DC0
    fcmpo cr0, f3, f0
    ble lbl_fn_802A0818_0000198C
    lfs f0, lbl_80883D38
    fcmpo cr0, f3, f0
    bge lbl_fn_802A0818_0000198C
lbl_fn_802A0818_00001894:
    lis r4, lbl_80745C70@ha
    addi r3, r30, 0xb0
    addi r4, r4, lbl_80745C70@l
    li r5, 0x0
    addi r4, r4, 0x277
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802A0818_000018BC
    li r5, 0x0
    b lbl_fn_802A0818_000018C8
lbl_fn_802A0818_000018BC:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r5, r3, r0
lbl_fn_802A0818_000018C8:
    lfs f4, 0x2c(r5)
    addi r3, r1, 0x48
    lfs f5, 0x1c(r5)
    li r4, 0x79
    lfs f6, 0xc(r5)
    lfs f3, lbl_80883D28
    lfs f0, lbl_80883D30
    stfs f3, 0x8(r1)
    stfs f3, 0xc(r1)
    stfs f0, 0x10(r1)
    lfs f1, 0x538(r30)
    stfs f6, 0x20(r1)
    stfs f5, 0x24(r1)
    stfs f4, 0x28(r1)
    bl fn_805F8E70
    addi r4, r1, 0x8
    addi r3, r1, 0x48
    mr r5, r4
    bl fn_805F93C0
    lfs f5, 0x10(r1)
    mr r6, r30
    lfs f4, lbl_80883DC4
    li r4, 0x0
    lfs f3, 0xc(r1)
    li r5, 0x0
    lfs f0, 0x8(r1)
    fmuls f5, f5, f4
    fmuls f6, f3, f4
    lfs f3, 0x24(r1)
    fmuls f7, f0, f4
    lfs f4, 0x20(r1)
    lfs f0, 0x28(r1)
    fadds f3, f3, f6
    fadds f4, f4, f7
    stfs f7, 0x14(r1)
    fadds f0, f0, f5
    lwz r3, lbl_8087F048
    stfs f6, 0x18(r1)
    lwz r7, 0x14f0(r30)
    stfs f5, 0x1c(r1)
    li r9, 0x1e
    lwz r8, 0x590(r30)
    li r10, -0x1
    stfs f4, 0x20(r1)
    lfs f1, lbl_80883D28
    stfs f3, 0x24(r1)
    stfs f0, 0x28(r1)
    bl fn_800F8C6C
    b lbl_fn_802A0818_00001998
lbl_fn_802A0818_0000198C:
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
lbl_fn_802A0818_00001998:
    lwz r0, 0x94(r1)
    psq_l f31, 0x88(r1), 0, 0
    lfd f31, 0x80(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}
