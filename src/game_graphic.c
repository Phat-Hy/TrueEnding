#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_22(void);
extern void _restgpr_24(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_22(void);
extern void _savegpr_24(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void fn_8005DF90(void);
extern void fn_800610A4(void);
extern void fn_80075DEC(void);
extern void fn_80075F58(void);
extern void fn_800763FC(void);
extern void fn_800827E0(void);
extern void fn_800839EC(void);
extern void fn_80083AD4(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_800A96AC(void);
extern void fn_800A981C(void);
extern void fn_800AE568(void);
extern void fn_800BFAC8(void);
extern void fn_800BFB70(void);
extern void fn_800BFC18(void);
extern void fn_800C0508(void);
extern void fn_800C1424(void);
extern void fn_800D5738(void);
extern void fn_800D594C(void);
extern void fn_805F8C50(void);
extern void fn_805F8CA0(void);
extern void fn_805F93C0(void);
extern void fn_805F98D0(void);
extern void fn_805F9990(void);
extern void fn_80613960(void);
extern void fn_80613BB0(void);
extern void fn_80614190(void);
extern void fn_80614CC0(void);
extern void fn_80614D30(void);
extern void fn_80615560(void);
extern void fn_80615D20(void);
extern void fn_80615D50(void);
extern void fn_80615E00(void);
extern void fn_80615FF0(void);
extern void fn_80616250(void);
extern void fn_806167B0(void);
extern void fn_80616EF0(void);
extern void fn_80617030(void);
extern void fn_80617130(void);
extern void fn_80617200(void);
extern void fn_80617220(void);
extern void fn_80617270(void);
extern void fn_80617340(void);
extern void fn_806173E0(void);
extern void fn_80617420(void);
extern void fn_80617460(void);
extern void fn_806174C0(void);
extern void fn_806175F0(void);
extern void fn_80617650(void);
extern void fn_806176F0(void);
extern void fn_80617880(void);
extern void fn_806179E0(void);
extern void fn_80617D50(void);
extern void fn_80617E00(void);
extern void fn_80618420(void);
extern void fn_8068AEB0(void);
extern void fn_80695720(void);

/* External data declarations */
extern u8 lbl_80732C78[];
extern u8 lbl_80732C80[];
extern u8 lbl_80732CC0[];
extern u8 lbl_80732CE0[];
extern u8 lbl_80732D00[];
extern u8 lbl_80778E78[];
extern u8 lbl_80778EB8[];

/* Small data declarations */
extern u32 lbl_8087D858;
extern u32 lbl_8087D85C;
extern u32 lbl_8087D860;
extern u32 lbl_8087D864;
extern u32 lbl_8087D868;
extern u32 lbl_8087D86C;
extern u32 lbl_8087D870;
extern u32 lbl_8087D874;
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EEE0;
extern u32 lbl_8087EF8C;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087EFB4;
extern u32 lbl_80880E0C;
extern u32 lbl_80880E10;
extern u32 lbl_80880E18;
extern u32 lbl_80880E1C;
extern u32 lbl_80880E20;
extern u32 lbl_80880E24;
extern u32 lbl_80880E28;
extern u32 lbl_80880E2C;
extern u32 lbl_80880E30;
extern u32 lbl_80880E34;
extern u32 lbl_80880E38;
extern u32 lbl_80880E40;
extern u32 lbl_80880E44;
extern u32 lbl_80880E48;
extern u32 lbl_80880E4C;
extern u32 lbl_80880E50;
extern u32 lbl_80880E54;
extern u32 lbl_80880E58;
extern u32 lbl_80880E60;
extern u32 lbl_80880E64;
extern u32 lbl_80880E68;
extern u32 lbl_80880E6C;
extern u32 lbl_80880E70;
extern u32 lbl_80880E74;
extern u32 lbl_80880E78;
extern u32 lbl_80880E7C;
extern u32 lbl_80880E80;

/* Function declarations */
void fn_800AEF68(void);
void fn_800AF544(void);
void fn_800AFE40(void);
void fn_800AFEBC(void);
void fn_800AFFEC(void);
void fn_800B089C(void);
void fn_800B0A44(void);
void fn_800B0A48(void);
void fn_800B0A70(void);

asm void fn_800AEF68(void)
{
    nofralloc
    stwu r1, -0x180(r1)
    mflr r0
    stw r0, 0x184(r1)
    addi r11, r1, 0x160
    stfd f31, 0x170(r1)
    psq_st f31, 0x178(r1), 0, 0
    stfd f30, 0x160(r1)
    psq_st f30, 0x168(r1), 0, 0
    bl _savegpr_27
    mr r30, r3
    lwz r4, lbl_8087EFA8
    lwz r3, lbl_8087EFB4
    addi r0, r4, 0x264
    stw r0, 0x4(r30)
    bl fn_800C1424
    lwz r0, 0x194(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800AEF68_00000050
    addi r0, r3, 0x198
    stw r0, 0x4(r30)
lbl_fn_800AEF68_00000050:
    lwz r5, lbl_8087EEE0
    lis r3, 0x4330
    lis r4, lbl_80732C78@ha
    stw r3, 0x130(r1)
    lwz r0, 0x3c(r5)
    lwz r5, 0x40(r5)
    xoris r0, r0, 0x8000
    stw r0, 0x134(r1)
    xoris r0, r5, 0x8000
    lwz r31, 0x4(r30)
    lfd f7, lbl_80732C78@l(r4)
    lfd f0, 0x130(r1)
    lwz r5, 0x18(r31)
    stw r0, 0x13c(r1)
    fsubs f31, f0, f7
    cmpwi r5, 0x0
    stw r3, 0x138(r1)
    lfd f0, 0x138(r1)
    fsubs f30, f0, f7
    beq lbl_fn_800AEF68_000000B4
    cmpwi r5, 0x1
    beq lbl_fn_800AEF68_000003F0
    cmpwi r5, 0x2
    beq lbl_fn_800AEF68_0000051C
    b lbl_fn_800AEF68_000005B4
lbl_fn_800AEF68_000000B4:
    psq_l f1, 0x38(r31), 0, 0
    addi r3, r1, 0xf4
    lfs f2, 0x40(r31)
    stfs f2, 0xfc(r1)
    psq_st f1, 0x0(r3), 0, 0
    lwz r0, 0x10(r31)
    cmpwi r0, 0x0
    beq lbl_fn_800AEF68_000001CC
    addi r3, r1, 0xe8
    psq_l f1, 0x38(r31), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    li r0, 0x0
    lfs f2, 0x40(r31)
    lfs f7, lbl_80880E10
    lfs f0, 0xe8(r1)
    stfs f2, 0xf0(r1)
    fcmpu cr0, f7, f0
    bne lbl_fn_800AEF68_00000118
    lfs f0, 0xec(r1)
    fcmpu cr0, f7, f0
    bne lbl_fn_800AEF68_00000118
    frsp f0, f2
    fcmpu cr0, f7, f0
    bne lbl_fn_800AEF68_00000118
    li r0, 0x1
lbl_fn_800AEF68_00000118:
    cmpwi r0, 0x0
    beq lbl_fn_800AEF68_00000148
    lfs f2, lbl_80880E10
    addi r4, r1, 0x80
    lfs f0, lbl_80880E0C
    addi r3, r1, 0xe8
    stfs f2, 0x80(r1)
    stfs f0, 0x84(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0x88(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0xf0(r1)
lbl_fn_800AEF68_00000148:
    addi r4, r1, 0xe8
    lfs f2, 0xf0(r1)
    addi r3, r1, 0x5c
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    mr r4, r3
    stfs f2, 0x64(r1)
    bl fn_805F98D0
    lfs f9, 0x64(r1)
    addi r5, r1, 0x74
    lfs f8, lbl_80880E1C
    addi r4, r1, 0xf4
    lfs f0, 0x60(r1)
    fmuls f9, f9, f8
    lwz r3, lbl_8087EFB4
    fmuls f10, f0, f8
    lfs f7, 0x5c(r1)
    lfs f0, 0x114(r3)
    fmuls f8, f7, f8
    fadds f2, f0, f9
    lfs f7, 0x110(r3)
    lfs f0, 0x10c(r3)
    fadds f7, f7, f10
    stfs f8, 0x68(r1)
    fadds f0, f0, f8
    stfs f7, 0x78(r1)
    stfs f0, 0x74(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f10, 0x6c(r1)
    stfs f9, 0x70(r1)
    stfs f2, 0x7c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xfc(r1)
lbl_fn_800AEF68_000001CC:
    addi r5, r1, 0xf4
    lfs f2, 0xfc(r1)
    lfs f0, 0x44(r31)
    addi r3, r1, 0xd8
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    addi r3, r1, 0xc8
    lwz r4, lbl_8087EFB4
    stfs f2, 0xe0(r1)
    stfs f0, 0xe4(r1)
    bl fn_800BFAC8
    lfs f7, 0xc8(r1)
    addi r29, r1, 0xbc
    lfs f0, 0xcc(r1)
    addi r5, r1, 0x18
    fdivs f7, f7, f31
    addi r6, r1, 0x50
    mr r3, r29
    mr r4, r29
    stfs f7, 0x18(r1)
    fdivs f0, f0, f30
    stfs f0, 0x1c(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x6c(r30), 0, 0
    lwz r5, lbl_8087EFB4
    lfs f7, 0xfc(r1)
    lfs f0, 0x114(r5)
    lfs f9, 0xf8(r1)
    fsubs f2, f7, f0
    lfs f8, 0x110(r5)
    lfs f0, 0x10c(r5)
    lfs f7, 0xf4(r1)
    fsubs f8, f9, f8
    stfs f2, 0x58(r1)
    fsubs f0, f7, f0
    stfs f8, 0x54(r1)
    stfs f0, 0x50(r1)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0xc4(r1)
    bl fn_805F98D0
    lwz r5, lbl_8087EFB4
    addi r28, r1, 0x44
    addi r6, r1, 0x20
    lfs f7, 0x120(r5)
    mr r3, r28
    lfs f0, 0x114(r5)
    mr r4, r28
    lfs f9, 0x11c(r5)
    fsubs f2, f7, f0
    lfs f8, 0x110(r5)
    lfs f7, 0x118(r5)
    lfs f0, 0x10c(r5)
    fsubs f8, f9, f8
    stfs f2, 0x28(r1)
    fsubs f0, f7, f0
    stfs f8, 0x24(r1)
    stfs f0, 0x20(r1)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x4c(r1)
    bl fn_805F98D0
    addi r27, r1, 0xb0
    psq_l f1, 0x0(r28), 0, 0
    lfs f2, 0x4c(r1)
    mr r3, r27
    psq_st f1, 0x0(r27), 0, 0
    mr r4, r27
    stfs f2, 0xb8(r1)
    bl fn_805F98D0
    mr r3, r29
    mr r4, r27
    bl fn_805F9990
    lis r3, lbl_80732C80@ha
    lfd f0, lbl_80732C80@l(r3)
    fcmpo cr0, f1, f0
    bge lbl_fn_800AEF68_0000030C
    lfs f0, lbl_80880E10
    stfs f0, 0x74(r30)
    b lbl_fn_800AEF68_000005B4
lbl_fn_800AEF68_0000030C:
    stfs f1, 0x74(r30)
    lwz r0, 0x4(r31)
    cmpwi r0, 0x0
    beq lbl_fn_800AEF68_000005B4
    lfs f7, 0xc8(r1)
    lfs f0, 0xe4(r1)
    lfs f1, lbl_8087D858
    fsubs f0, f7, f0
    fcmpo cr0, f0, f1
    bge lbl_fn_800AEF68_00000338
    b lbl_fn_800AEF68_00000348
lbl_fn_800AEF68_00000338:
    fcmpo cr0, f0, f31
    ble lbl_fn_800AEF68_00000344
    fmr f0, f31
lbl_fn_800AEF68_00000344:
    fmr f1, f0
lbl_fn_800AEF68_00000348:
    lfs f7, 0xcc(r1)
    lfs f0, 0xe4(r1)
    lfs f2, lbl_8087D85C
    fsubs f0, f7, f0
    fcmpo cr0, f0, f2
    bge lbl_fn_800AEF68_00000364
    b lbl_fn_800AEF68_00000374
lbl_fn_800AEF68_00000364:
    fcmpo cr0, f0, f30
    ble lbl_fn_800AEF68_00000370
    fmr f0, f30
lbl_fn_800AEF68_00000370:
    fmr f2, f0
lbl_fn_800AEF68_00000374:
    lfs f7, 0xc8(r1)
    lfs f0, 0xe4(r1)
    lfs f8, lbl_8087D860
    fadds f0, f7, f0
    fcmpo cr0, f0, f8
    bge lbl_fn_800AEF68_00000390
    b lbl_fn_800AEF68_000003A4
lbl_fn_800AEF68_00000390:
    fcmpo cr0, f0, f31
    ble lbl_fn_800AEF68_0000039C
    b lbl_fn_800AEF68_000003A0
lbl_fn_800AEF68_0000039C:
    fmr f31, f0
lbl_fn_800AEF68_000003A0:
    fmr f8, f31
lbl_fn_800AEF68_000003A4:
    lfs f7, 0xcc(r1)
    lfs f0, 0xe4(r1)
    lfs f9, lbl_8087D864
    fadds f0, f7, f0
    fcmpo cr0, f0, f9
    bge lbl_fn_800AEF68_000003C0
    b lbl_fn_800AEF68_000003D4
lbl_fn_800AEF68_000003C0:
    fcmpo cr0, f0, f30
    ble lbl_fn_800AEF68_000003CC
    b lbl_fn_800AEF68_000003D0
lbl_fn_800AEF68_000003CC:
    fmr f30, f0
lbl_fn_800AEF68_000003D0:
    fmr f9, f30
lbl_fn_800AEF68_000003D4:
    fsubs f4, f8, f1
    lwz r3, lbl_8087EEB0
    fsubs f5, f9, f2
    lfs f3, lbl_80880E10
    lis r4, 0xffff
    bl fn_800610A4
    b lbl_fn_800AEF68_000005B4
lbl_fn_800AEF68_000003F0:
    lfs f0, lbl_80880E0C
    addi r3, r1, 0xa4
    stfs f0, 0x74(r30)
    li r0, 0x0
    lfs f7, lbl_80880E10
    lfs f2, 0x40(r31)
    psq_l f1, 0x38(r31), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lfs f0, 0xa4(r1)
    stfs f2, 0xac(r1)
    fcmpu cr0, f7, f0
    bne lbl_fn_800AEF68_0000043C
    lfs f0, 0xa8(r1)
    fcmpu cr0, f7, f0
    bne lbl_fn_800AEF68_0000043C
    frsp f0, f2
    fcmpu cr0, f7, f0
    bne lbl_fn_800AEF68_0000043C
    li r0, 0x1
lbl_fn_800AEF68_0000043C:
    cmpwi r0, 0x0
    beq lbl_fn_800AEF68_0000046C
    lfs f2, lbl_80880E10
    addi r4, r1, 0x38
    lfs f0, lbl_80880E0C
    addi r3, r1, 0xa4
    stfs f2, 0x38(r1)
    stfs f0, 0x3c(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0xac(r1)
lbl_fn_800AEF68_0000046C:
    addi r3, r1, 0xa4
    mr r4, r3
    bl fn_805F98D0
    lwz r5, lbl_8087EFB4
    addi r27, r1, 0x100
    lfs f0, lbl_80880E10
    mr r3, r27
    psq_l f1, 0x15c(r5), 0, 0
    mr r4, r27
    psq_l f2, 0x164(r5), 0, 0
    psq_l f3, 0x16c(r5), 0, 0
    psq_l f4, 0x174(r5), 0, 0
    psq_l f5, 0x17c(r5), 0, 0
    psq_l f6, 0x184(r5), 0, 0
    psq_st f6, 0x28(r27), 0, 0
    psq_st f2, 0x8(r27), 0, 0
    psq_st f4, 0x18(r27), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    psq_st f3, 0x10(r27), 0, 0
    psq_st f5, 0x20(r27), 0, 0
    stfs f0, 0x10c(r1)
    stfs f0, 0x11c(r1)
    stfs f0, 0x12c(r1)
    bl fn_805F8CA0
    mr r3, r27
    mr r4, r27
    bl fn_805F8C50
    addi r3, r1, 0xa4
    addi r4, r1, 0x98
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r27
    lfs f2, 0xac(r1)
    mr r5, r4
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xa0(r1)
    bl fn_805F93C0
    lfs f7, 0x9c(r1)
    addi r3, r1, 0x10
    lfs f0, 0x98(r1)
    stfs f0, 0x10(r1)
    stfs f7, 0x14(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x6c(r30), 0, 0
    b lbl_fn_800AEF68_000005B4
lbl_fn_800AEF68_0000051C:
    lfs f0, lbl_80880E0C
    addi r3, r1, 0x8c
    stfs f0, 0x74(r30)
    li r0, 0x0
    lfs f7, lbl_80880E10
    psq_l f1, 0x38(r31), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lfs f2, 0x40(r31)
    lfs f0, 0x8c(r1)
    stfs f2, 0x94(r1)
    fcmpu cr0, f7, f0
    bne lbl_fn_800AEF68_00000568
    lfs f0, 0x90(r1)
    fcmpu cr0, f7, f0
    bne lbl_fn_800AEF68_00000568
    frsp f0, f2
    fcmpu cr0, f7, f0
    bne lbl_fn_800AEF68_00000568
    li r0, 0x1
lbl_fn_800AEF68_00000568:
    cmpwi r0, 0x0
    beq lbl_fn_800AEF68_00000598
    lfs f0, lbl_80880E18
    addi r4, r1, 0x2c
    stfs f0, 0x2c(r1)
    addi r3, r1, 0x8c
    lfs f2, lbl_80880E10
    stfs f0, 0x30(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0x34(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x94(r1)
lbl_fn_800AEF68_00000598:
    lfs f7, 0x90(r1)
    addi r3, r1, 0x8
    lfs f0, 0x8c(r1)
    stfs f0, 0x8(r1)
    stfs f7, 0xc(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x6c(r30), 0, 0
lbl_fn_800AEF68_000005B4:
    addi r11, r1, 0x160
    psq_l f31, 0x178(r1), 0, 0
    lfd f31, 0x170(r1)
    psq_l f30, 0x168(r1), 0, 0
    lfd f30, 0x160(r1)
    bl _restgpr_27
    lwz r0, 0x184(r1)
    mtlr r0
    addi r1, r1, 0x180
    blr
}

asm void fn_800AF544(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    addi r11, r1, 0xb0
    bl _savegpr_22
    lis r0, 0x4330
    stw r0, 0x58(r1)
    mr r24, r3
    li r3, 0x0
    stw r0, 0x60(r1)
    li r4, 0x3
    li r5, 0x0
    bl fn_80617E00
    lfs f1, 0x74(r24)
    lfs f0, lbl_80880E20
    lwz r29, 0x4(r24)
    fcmpo cr0, f1, f0
    blt lbl_fn_800AF544_00000EC0
    bl fn_806167B0
    lwz r4, lbl_8087EEE0
    li r23, 0x1
    lwz r0, 0x14(r29)
    li r25, 0x28
    lwz r31, 0x3c(r4)
    lwz r3, 0x8(r29)
    cmpwi r0, 0x0
    lwz r30, 0x40(r4)
    sraw r27, r31, r3
    sraw r26, r30, r3
    beq lbl_fn_800AF544_0000065C
    li r23, 0x4
    li r25, 0x4
lbl_fn_800AF544_0000065C:
    lwz r3, lbl_8087EF8C
    mr r4, r27
    mr r5, r26
    mr r6, r23
    bl fn_800A96AC
    mr r28, r3
    mr r7, r23
    mr r4, r28
    addi r3, r24, 0x8
    clrlwi r5, r27, 16
    clrlwi r6, r26, 16
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_80615FF0
    lfs f1, lbl_80880E10
    addi r3, r24, 0x8
    li r4, 0x1
    li r5, 0x1
    fmr f2, f1
    li r6, 0x0
    fmr f3, f1
    li r7, 0x0
    li r8, 0x0
    bl fn_80616250
    lwz r3, lbl_8087EF8C
    mr r4, r27
    mr r5, r26
    mr r6, r23
    bl fn_800A96AC
    mr r22, r3
    mr r7, r23
    mr r4, r22
    addi r3, r1, 0x38
    clrlwi r5, r27, 16
    clrlwi r6, r26, 16
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_80615FF0
    lfs f1, lbl_80880E10
    addi r3, r1, 0x38
    li r4, 0x1
    li r5, 0x1
    fmr f2, f1
    li r6, 0x0
    fmr f3, f1
    li r7, 0x0
    li r8, 0x0
    bl fn_80616250
    lwz r3, lbl_8087EFB4
    li r4, 0x1
    bl fn_800C0508
    lwz r0, 0x14(r29)
    cmpwi r0, 0x0
    beq lbl_fn_800AF544_00000790
    li r3, 0x2
    bl fn_806179E0
    li r3, 0x3
    bl fn_80613BB0
    li r3, 0x1
    bl fn_80615D20
    li r3, 0x1
    bl fn_80617200
    lwz r4, lbl_8087EFB4
    li r5, 0x2
    lwz r3, lbl_8087EEE0
    addi r4, r4, 0x74c
    bl fn_800763FC
    li r3, 0x2
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    b lbl_fn_800AF544_000007B0
lbl_fn_800AF544_00000790:
    li r3, 0x1
    bl fn_806179E0
    li r3, 0x2
    bl fn_80613BB0
    li r3, 0x1
    bl fn_80615D20
    li r3, 0x1
    bl fn_80617200
lbl_fn_800AF544_000007B0:
    li r3, 0x4
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x0
    li r8, 0x0
    li r9, 0x2
    bl fn_80615D50
    lwz r3, lbl_8087EEE0
    addi r4, r24, 0x38
    li r5, 0x0
    bl fn_800763FC
    lwz r4, lbl_8087EFB4
    li r5, 0x1
    lwz r3, lbl_8087EEE0
    addi r4, r4, 0x77c
    bl fn_800763FC
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    li r3, 0x1
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    li r3, 0x0
    li r4, 0x1
    li r5, 0x1
    bl fn_80617130
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_80617030
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x1
    li r7, 0x1
    bl fn_80617270
    lfs f0, lbl_80880E10
    addi r4, r1, 0x20
    lfs f1, lbl_8087D868
    li r3, 0x1
    lwz r0, lbl_8087D86C
    stfs f1, 0x20(r1)
    extsb r5, r0
    stfs f0, 0x24(r1)
    stfs f0, 0x28(r1)
    stfs f0, 0x2c(r1)
    stfs f1, 0x30(r1)
    stfs f0, 0x34(r1)
    bl fn_80616EF0
    li r3, 0x0
    li r4, 0xf
    li r5, 0xf
    li r6, 0xf
    li r7, 0x8
    bl fn_806173E0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_80617460
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0xff
    bl fn_80617880
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_806176F0
    lwz r0, 0x14(r29)
    cmpwi r0, 0x0
    beq lbl_fn_800AF544_00000954
    li r3, 0x1
    li r4, 0xf
    li r5, 0x8
    li r6, 0x0
    li r7, 0xf
    bl fn_806173E0
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_80617460
    li r3, 0x1
    li r4, 0x2
    li r5, 0x2
    li r6, 0xff
    bl fn_80617880
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    bl fn_806176F0
lbl_fn_800AF544_00000954:
    li r3, 0x0
    li r4, 0x4
    li r5, 0x1
    li r6, 0x3
    bl fn_80617D50
    lwz r0, 0x8(r29)
    cmpwi r0, 0x0
    ble lbl_fn_800AF544_00000990
    lwz r3, lbl_8087EEE0
    slwi r6, r27, 1
    slwi r7, r26, 1
    li r4, 0x0
    li r5, 0x0
    bl fn_80075F58
    b lbl_fn_800AF544_000009A8
lbl_fn_800AF544_00000990:
    lwz r3, lbl_8087EEE0
    mr r6, r27
    mr r7, r26
    li r4, 0x0
    li r5, 0x0
    bl fn_80075F58
lbl_fn_800AF544_000009A8:
    lwz r3, lbl_8087EFB4
    bl fn_800BFB70
    lwz r0, 0x8(r29)
    cmpwi r0, 0x0
    ble lbl_fn_800AF544_000009E8
    clrlslwi r5, r27, 17, 1
    clrlslwi r6, r26, 17, 1
    li r3, 0x0
    li r4, 0x0
    bl fn_80614CC0
    mr r5, r25
    clrlwi r3, r27, 16
    clrlwi r4, r26, 16
    li r6, 0x1
    bl fn_80614D30
    b lbl_fn_800AF544_00000A10
lbl_fn_800AF544_000009E8:
    clrlwi r5, r27, 16
    clrlwi r6, r26, 16
    li r3, 0x0
    li r4, 0x0
    bl fn_80614CC0
    mr r5, r25
    clrlwi r3, r27, 16
    clrlwi r4, r26, 16
    li r6, 0x0
    bl fn_80614D30
lbl_fn_800AF544_00000A10:
    mr r3, r28
    li r4, 0x1
    bl fn_80615560
    bl fn_80614190
    lwz r3, lbl_8087EEE0
    bl fn_80075DEC
    lfs f1, lbl_80880E0C
    mr r4, r22
    lfs f2, lbl_80880E10
    mr r5, r27
    mr r6, r26
    mr r7, r25
    addi r3, r24, 0x8
    li r8, 0x0
    li r9, 0x0
    bl fn_800A981C
    lfs f1, lbl_80880E10
    mr r4, r28
    lfs f2, lbl_80880E0C
    mr r5, r27
    mr r6, r26
    mr r7, r25
    addi r3, r1, 0x38
    li r8, 0x0
    li r9, 0x0
    bl fn_800A981C
    lwz r0, 0x18(r29)
    cmpwi r0, 0x0
    beq lbl_fn_800AF544_00000A8C
    cmpwi r0, 0x2
    bne lbl_fn_800AF544_00000AD4
lbl_fn_800AF544_00000A8C:
    li r22, 0x0
    b lbl_fn_800AF544_00000AC4
lbl_fn_800AF544_00000A94:
    lfs f1, 0x6c(r24)
    mr r4, r28
    lfs f2, 0x70(r24)
    mr r5, r27
    lfs f3, 0x1c(r29)
    mr r6, r26
    lfs f4, 0x20(r29)
    mr r7, r25
    lfs f5, 0x24(r29)
    addi r3, r24, 0x8
    bl fn_800AE568
    addi r22, r22, 0x1
lbl_fn_800AF544_00000AC4:
    lwz r0, 0xc(r29)
    cmpw r22, r0
    blt lbl_fn_800AF544_00000A94
    b lbl_fn_800AF544_00000B2C
lbl_fn_800AF544_00000AD4:
    cmpwi r0, 0x1
    bne lbl_fn_800AF544_00000B2C
    li r22, 0x0
    b lbl_fn_800AF544_00000B20
lbl_fn_800AF544_00000AE4:
    lfs f3, 0x6c(r24)
    mr r4, r28
    lfs f1, 0x1c(r29)
    mr r5, r27
    lfs f2, 0x70(r24)
    mr r6, r26
    lfs f0, 0x20(r29)
    fmuls f1, f3, f1
    mr r7, r25
    addi r3, r24, 0x8
    fmuls f2, f2, f0
    li r8, 0x0
    li r9, 0x1
    bl fn_800A981C
    addi r22, r22, 0x1
lbl_fn_800AF544_00000B20:
    lwz r0, 0xc(r29)
    cmpw r22, r0
    blt lbl_fn_800AF544_00000AE4
lbl_fn_800AF544_00000B2C:
    li r3, 0x2
    bl fn_80613BB0
    li r3, 0x0
    bl fn_80615D20
    li r3, 0x2
    bl fn_806179E0
    li r3, 0x0
    bl fn_80617200
    lfs f5, 0x28(r29)
    lfs f4, 0x28(r24)
    lfs f3, 0x2c(r29)
    lfs f1, 0x2c(r24)
    fsubs f6, f5, f4
    lfs f2, 0x30(r29)
    fsubs f7, f3, f1
    lfs f0, 0x30(r24)
    fabs f3, f6
    lfs f1, 0x34(r29)
    fsubs f8, f2, f0
    lfs f0, 0x34(r24)
    frsp f2, f3
    lfs f9, lbl_80880E28
    fsubs f1, f1, f0
    lfs f3, lbl_80880E24
    fcmpo cr0, f2, f9
    ble lbl_fn_800AF544_00000BA0
    fmadds f0, f6, f3, f4
    stfs f0, 0x28(r24)
    b lbl_fn_800AF544_00000BA4
lbl_fn_800AF544_00000BA0:
    stfs f5, 0x28(r24)
lbl_fn_800AF544_00000BA4:
    fabs f0, f7
    frsp f0, f0
    fcmpo cr0, f0, f9
    ble lbl_fn_800AF544_00000BC4
    lfs f0, 0x2c(r24)
    fmadds f0, f7, f3, f0
    stfs f0, 0x2c(r24)
    b lbl_fn_800AF544_00000BCC
lbl_fn_800AF544_00000BC4:
    lfs f0, 0x2c(r29)
    stfs f0, 0x2c(r24)
lbl_fn_800AF544_00000BCC:
    fabs f0, f8
    frsp f0, f0
    fcmpo cr0, f0, f9
    ble lbl_fn_800AF544_00000BEC
    lfs f0, 0x30(r24)
    fmadds f0, f8, f3, f0
    stfs f0, 0x30(r24)
    b lbl_fn_800AF544_00000BF4
lbl_fn_800AF544_00000BEC:
    lfs f0, 0x30(r29)
    stfs f0, 0x30(r24)
lbl_fn_800AF544_00000BF4:
    fabs f0, f1
    frsp f0, f0
    fcmpo cr0, f0, f9
    ble lbl_fn_800AF544_00000C14
    lfs f0, 0x34(r24)
    fmadds f0, f1, f3, f0
    stfs f0, 0x34(r24)
    b lbl_fn_800AF544_00000C1C
lbl_fn_800AF544_00000C14:
    lfs f0, 0x34(r29)
    stfs f0, 0x34(r24)
lbl_fn_800AF544_00000C1C:
    lfs f3, 0x74(r24)
    addi r4, r1, 0xc
    lfs f1, 0x34(r24)
    li r3, 0x0
    lfs f0, 0x30(r24)
    fmuls f4, f1, f3
    lfs f2, 0x2c(r24)
    fmuls f5, f0, f3
    lfs f1, 0x28(r24)
    fmuls f2, f2, f3
    lfs f0, lbl_80880E2C
    fmuls f6, f1, f3
    stfs f2, 0x14(r1)
    fmuls f1, f0, f5
    fmuls f2, f0, f2
    stfs f6, 0x10(r1)
    fmuls f3, f0, f6
    fmuls f0, f0, f4
    stfs f5, 0x18(r1)
    fctiwz f2, f2
    fctiwz f3, f3
    stfs f4, 0x1c(r1)
    fctiwz f1, f1
    fctiwz f0, f0
    stfd f2, 0x70(r1)
    stfd f3, 0x68(r1)
    lwz r6, 0x74(r1)
    stfd f1, 0x78(r1)
    lwz r7, 0x6c(r1)
    stfd f0, 0x80(r1)
    lwz r5, 0x7c(r1)
    lwz r0, 0x84(r1)
    stb r7, 0x8(r1)
    stb r6, 0x9(r1)
    stb r5, 0xa(r1)
    stb r0, 0xb(r1)
    lwz r0, 0x8(r1)
    stw r0, 0xc(r1)
    bl fn_806175F0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_80617460
    li r3, 0x0
    li r4, 0xf
    li r5, 0xf
    li r6, 0xf
    li r7, 0x8
    bl fn_806173E0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0xff
    bl fn_80617880
    li r3, 0x0
    bl fn_80617220
    li r3, 0x1
    li r4, 0xc
    bl fn_80617650
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_80617460
    li r3, 0x1
    li r4, 0xf
    li r5, 0x8
    li r6, 0xe
    li r7, 0x0
    bl fn_806173E0
    li r3, 0x1
    li r4, 0x1
    li r5, 0x1
    li r6, 0xff
    bl fn_80617880
    li r3, 0x1
    bl fn_80617220
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    li r3, 0x1
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    lwz r4, lbl_8087EFB4
    li r5, 0x0
    lwz r3, lbl_8087EEE0
    addi r4, r4, 0x74c
    bl fn_800763FC
    lwz r3, lbl_8087EEE0
    addi r4, r24, 0x8
    li r5, 0x1
    bl fn_800763FC
    li r3, 0x0
    li r4, 0x4
    li r5, 0x1
    li r6, 0x3
    bl fn_80617D50
    lwz r3, lbl_8087EEE0
    mr r6, r31
    mr r7, r30
    li r4, 0x0
    li r5, 0x0
    bl fn_80075F58
    lwz r3, lbl_8087EFB4
    bl fn_800BFB70
    lwz r3, lbl_8087EFA8
    lwz r0, 0x268(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800AF544_00000EC0
    xoris r0, r31, 0x8000
    stw r0, 0x5c(r1)
    xoris r0, r30, 0x8000
    lis r25, lbl_80732C78@ha
    stw r0, 0x64(r1)
    li r4, -0x1
    lfd f4, lbl_80732C78@l(r25)
    li r6, 0x0
    lfd f1, 0x58(r1)
    lfd f0, 0x60(r1)
    fsubs f3, f1, f4
    lfs f2, lbl_80880E34
    fsubs f0, f0, f4
    lwz r5, lbl_8087EFB4
    lfs f1, lbl_80880E30
    fdivs f4, f3, f2
    lwz r3, lbl_8087EEB0
    addi r5, r5, 0x77c
    lfs f3, lbl_80880E10
    fdivs f5, f0, f2
    fmr f2, f1
    bl fn_8005DF90
    xoris r3, r30, 0x8000
    stw r3, 0x5c(r1)
    xoris r0, r31, 0x8000
    lfd f4, lbl_80732C78@l(r25)
    lfd f0, 0x58(r1)
    addi r5, r24, 0x8
    stw r0, 0x64(r1)
    li r4, -0x1
    fsubs f3, f0, f4
    lfs f5, lbl_80880E34
    stw r3, 0x5c(r1)
    li r6, 0x0
    lfd f1, 0x60(r1)
    lfd f0, 0x58(r1)
    fsubs f2, f1, f4
    lfs f6, lbl_80880E38
    fdivs f7, f3, f5
    lwz r3, lbl_8087EEB0
    lfs f1, lbl_80880E30
    lfs f3, lbl_80880E10
    fsubs f0, f0, f4
    fdivs f4, f2, f5
    fdivs f5, f0, f5
    fadds f2, f6, f7
    bl fn_8005DF90
lbl_fn_800AF544_00000EC0:
    addi r11, r1, 0xb0
    bl _restgpr_22
    lwz r0, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_800AFE40(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_80778E78@ha
    lfs f1, lbl_80880E40
    stw r0, 0x14(r1)
    li r0, 0x0
    lfs f0, lbl_80880E44
    addi r4, r4, lbl_80778E78@l
    stw r31, 0xc(r1)
    li r5, -0x1
    mr r31, r3
    stw r4, 0x0(r3)
    li r4, 0x2
    stw r5, 0x94(r3)
    stw r0, 0x98(r3)
    stfs f1, 0x9c(r3)
    stfs f0, 0xa0(r3)
    stw r0, 0xa4(r3)
    stfs f1, 0xa8(r3)
    stw r0, 0xac(r3)
    stw r0, 0x84(r3)
    stw r0, 0x88(r3)
    stw r0, 0x8c(r3)
    stw r0, 0x90(r3)
    bl fn_800AFEBC
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800AFEBC(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    lwz r0, 0xac(r3)
    mr r24, r3
    cmpw r0, r4
    beq lbl_fn_800AFEBC_0000106C
    stw r4, 0xac(r3)
    addi r29, r3, 0x4
    mr r30, r24
    li r25, 0x0
    lwz r5, lbl_8087EEE0
    lis r31, lbl_80732CE0@ha
    lwz r3, 0x3c(r5)
    lwz r0, 0x40(r5)
    divw r27, r3, r4
    divw r26, r0, r4
lbl_fn_800AFEBC_00000FA0:
    lwz r28, 0x84(r30)
    cmpwi r28, 0x0
    beq lbl_fn_800AFEBC_00000FB8
    bl fn_800827E0
    mr r4, r28
    bl fn_80083AD4
lbl_fn_800AFEBC_00000FB8:
    clrlwi r3, r27, 16
    clrlwi r4, r26, 16
    li r5, 0x4
    li r6, 0x0
    li r7, 0x0
    bl fn_80615E00
    mr r28, r3
    bl fn_800827E0
    addi r7, r31, lbl_80732CE0@l
    mr r4, r28
    mr r8, r7
    li r5, 0x20
    li r6, 0x6
    li r9, 0x0
    li r10, 0x0
    bl fn_800839EC
    stw r3, 0x84(r30)
    mr r4, r3
    mr r3, r29
    clrlwi r5, r27, 16
    clrlwi r6, r26, 16
    li r7, 0x4
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_80615FF0
    lfs f1, lbl_80880E40
    mr r3, r29
    li r4, 0x1
    li r5, 0x1
    fmr f2, f1
    li r6, 0x0
    fmr f3, f1
    li r7, 0x0
    li r8, 0x0
    bl fn_80616250
    addi r25, r25, 0x1
    addi r29, r29, 0x20
    cmpwi r25, 0x4
    addi r30, r30, 0x4
    blt lbl_fn_800AFEBC_00000FA0
    li r3, -0x1
    li r0, 0x0
    stw r3, 0x94(r24)
    stw r0, 0x98(r24)
lbl_fn_800AFEBC_0000106C:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_800AFFEC(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    stw r0, 0xd4(r1)
    addi r11, r1, 0x80
    stfd f31, 0xc0(r1)
    psq_st f31, 0xc8(r1), 0, 0
    stfd f30, 0xb0(r1)
    psq_st f30, 0xb8(r1), 0, 0
    stfd f29, 0xa0(r1)
    psq_st f29, 0xa8(r1), 0, 0
    stfd f28, 0x90(r1)
    psq_st f28, 0x98(r1), 0, 0
    stfd f27, 0x80(r1)
    psq_st f27, 0x88(r1), 0, 0
    bl _savegpr_26
    lwz r4, lbl_8087EFA8
    lis r5, 0x4330
    lwz r0, 0xa4(r3)
    mr r28, r3
    lwz r6, 0x240(r4)
    stw r5, 0x50(r1)
    cmpw r0, r6
    stw r5, 0x58(r1)
    beq lbl_fn_800AFFEC_00001138
    stw r6, 0xa4(r3)
    lwz r4, lbl_8087EFA8
    lwz r0, 0x240(r4)
    cmpwi r0, 0x0
    beq lbl_fn_800AFFEC_00001118
    lwz r0, 0x254(r4)
    cmpwi r0, 0x0
    beq lbl_fn_800AFFEC_0000110C
    lfs f0, lbl_80880E44
    b lbl_fn_800AFFEC_00001110
lbl_fn_800AFFEC_0000110C:
    lfs f0, lbl_80880E40
lbl_fn_800AFFEC_00001110:
    stfs f0, 0xa8(r3)
    b lbl_fn_800AFFEC_000011A0
lbl_fn_800AFFEC_00001118:
    lwz r0, 0x258(r4)
    cmpwi r0, 0x0
    beq lbl_fn_800AFFEC_0000112C
    lfs f0, lbl_80880E44
    b lbl_fn_800AFFEC_00001130
lbl_fn_800AFFEC_0000112C:
    lfs f0, lbl_80880E40
lbl_fn_800AFFEC_00001130:
    stfs f0, 0xa8(r3)
    b lbl_fn_800AFFEC_000011A0
lbl_fn_800AFFEC_00001138:
    lfs f1, 0xa8(r3)
    lfs f0, lbl_80880E40
    fcmpo cr0, f1, f0
    ble lbl_fn_800AFFEC_00001168
    cmpwi r6, 0x0
    beq lbl_fn_800AFFEC_00001158
    lfs f1, 0x25c(r4)
    b lbl_fn_800AFFEC_0000115C
lbl_fn_800AFFEC_00001158:
    lfs f1, 0x260(r4)
lbl_fn_800AFFEC_0000115C:
    lfs f0, 0xa8(r3)
    fsubs f0, f0, f1
    stfs f0, 0xa8(r3)
lbl_fn_800AFFEC_00001168:
    lwz r4, lbl_8087EFA8
    lwz r0, 0x240(r4)
    cmpwi r0, 0x0
    bne lbl_fn_800AFFEC_000011A0
    lfs f1, 0xa8(r3)
    lfs f0, lbl_80880E40
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_800AFFEC_000011A0
    li r4, -0x1
    li r0, 0x0
    stw r4, 0x94(r3)
    stw r0, 0x98(r3)
    b lbl_fn_800AFFEC_000018F4
lbl_fn_800AFFEC_000011A0:
    lwz r5, lbl_8087EFA8
    lis r4, lbl_80732CC0@ha
    lfd f31, lbl_80732CC0@l(r4)
    addi r27, r1, 0x38
    lfs f0, 0x24c(r5)
    li r29, 0x0
    stfs f0, 0xa0(r3)
    lfs f28, lbl_80880E40
    lwz r4, lbl_8087EFA8
    lfs f30, lbl_80880E44
    lfs f0, 0x250(r4)
    stfs f0, 0x9c(r3)
    b lbl_fn_800AFFEC_00001220
lbl_fn_800AFFEC_000011D4:
    xoris r0, r29, 0x8000
    stw r0, 0x54(r1)
    lfs f2, 0xa0(r28)
    lfd f0, 0x50(r1)
    fsubs f27, f0, f31
    fmr f1, f27
    bl fn_8068AEB0
    frsp f29, f1
    lfs f2, 0x9c(r28)
    fmr f1, f27
    bl fn_8068AEB0
    frsp f1, f1
    addi r29, r29, 0x1
    fadds f0, f30, f29
    fadds f1, f30, f1
    fdivs f0, f1, f0
    stfs f0, 0x0(r27)
    addi r27, r27, 0x4
    fadds f28, f28, f0
lbl_fn_800AFFEC_00001220:
    lwz r3, 0x98(r28)
    addi r6, r3, 0x1
    cmpw r29, r6
    blt lbl_fn_800AFFEC_000011D4
    lfs f0, lbl_80880E44
    cmpwi cr1, r6, 0x0
    li r7, 0x0
    fdivs f1, f0, f28
    ble cr1, lbl_fn_800AFFEC_0000132C
    cmpwi r6, 0x8
    subi r4, r3, 0x7
    ble lbl_fn_800AFFEC_000012F8
    li r5, 0x0
    blt cr1, lbl_fn_800AFFEC_0000126C
    lis r3, 0x8000
    subi r0, r3, 0x2
    cmpw r6, r0
    bgt lbl_fn_800AFFEC_0000126C
    li r5, 0x1
lbl_fn_800AFFEC_0000126C:
    cmpwi r5, 0x0
    beq lbl_fn_800AFFEC_000012F8
    addi r0, r4, 0x7
    addi r3, r1, 0x38
    srwi r0, r0, 3
    mtctr r0
    cmpwi r4, 0x0
    ble lbl_fn_800AFFEC_000012F8
lbl_fn_800AFFEC_0000128C:
    lfs f0, 0x0(r3)
    addi r7, r7, 0x8
    fmuls f0, f0, f1
    stfs f0, 0x0(r3)
    lfs f0, 0x4(r3)
    fmuls f0, f0, f1
    stfs f0, 0x4(r3)
    lfs f0, 0x8(r3)
    fmuls f0, f0, f1
    stfs f0, 0x8(r3)
    lfs f0, 0xc(r3)
    fmuls f0, f0, f1
    stfs f0, 0xc(r3)
    lfs f0, 0x10(r3)
    fmuls f0, f0, f1
    stfs f0, 0x10(r3)
    lfs f0, 0x14(r3)
    fmuls f0, f0, f1
    stfs f0, 0x14(r3)
    lfs f0, 0x18(r3)
    fmuls f0, f0, f1
    stfs f0, 0x18(r3)
    lfs f0, 0x1c(r3)
    fmuls f0, f0, f1
    stfs f0, 0x1c(r3)
    addi r3, r3, 0x20
    bdnz lbl_fn_800AFFEC_0000128C
lbl_fn_800AFFEC_000012F8:
    slwi r0, r7, 2
    addi r4, r1, 0x38
    add r4, r4, r0
    b lbl_fn_800AFFEC_0000131C
lbl_fn_800AFFEC_00001308:
    lfs f0, 0x0(r4)
    addi r7, r7, 0x1
    fmuls f0, f0, f1
    stfs f0, 0x0(r4)
    addi r4, r4, 0x4
lbl_fn_800AFFEC_0000131C:
    lwz r3, 0x98(r28)
    addi r0, r3, 0x1
    cmpw r7, r0
    blt lbl_fn_800AFFEC_00001308
lbl_fn_800AFFEC_0000132C:
    lfs f0, 0xa8(r28)
    lfs f4, lbl_80880E40
    fcmpo cr0, f0, f4
    ble lbl_fn_800AFFEC_000014D0
    lfs f2, lbl_80880E44
    addi r3, r1, 0x38
    li r5, 0x0
    b lbl_fn_800AFFEC_000013C4
lbl_fn_800AFFEC_0000134C:
    lwz r0, 0xa4(r28)
    cmpwi r0, 0x0
    beq lbl_fn_800AFFEC_00001388
    lfs f0, 0xa8(r28)
    cmpwi r5, 0x0
    fsubs f1, f2, f0
    bne lbl_fn_800AFFEC_00001370
    fmr f3, f2
    b lbl_fn_800AFFEC_00001374
lbl_fn_800AFFEC_00001370:
    lfs f3, lbl_80880E40
lbl_fn_800AFFEC_00001374:
    lfs f0, 0x0(r3)
    fsubs f0, f0, f3
    fmadds f0, f1, f0, f3
    stfs f0, 0x0(r3)
    b lbl_fn_800AFFEC_000013B4
lbl_fn_800AFFEC_00001388:
    lfs f0, 0xa8(r28)
    cmpwi r5, 0x0
    fsubs f3, f2, f0
    bne lbl_fn_800AFFEC_000013A0
    fmr f0, f2
    b lbl_fn_800AFFEC_000013A4
lbl_fn_800AFFEC_000013A0:
    lfs f0, lbl_80880E40
lbl_fn_800AFFEC_000013A4:
    lfs f1, 0x0(r3)
    fsubs f0, f0, f1
    fmadds f0, f3, f0, f1
    stfs f0, 0x0(r3)
lbl_fn_800AFFEC_000013B4:
    lfs f0, 0x0(r3)
    addi r3, r3, 0x4
    addi r5, r5, 0x1
    fadds f4, f4, f0
lbl_fn_800AFFEC_000013C4:
    lwz r4, 0x98(r28)
    addi r6, r4, 0x1
    cmpw r5, r6
    blt lbl_fn_800AFFEC_0000134C
    lfs f0, lbl_80880E44
    cmpwi cr1, r6, 0x0
    li r7, 0x0
    fdivs f1, f0, f4
    ble cr1, lbl_fn_800AFFEC_000014D0
    cmpwi r6, 0x8
    subi r4, r4, 0x7
    ble lbl_fn_800AFFEC_0000149C
    li r5, 0x0
    blt cr1, lbl_fn_800AFFEC_00001410
    lis r3, 0x8000
    subi r0, r3, 0x2
    cmpw r6, r0
    bgt lbl_fn_800AFFEC_00001410
    li r5, 0x1
lbl_fn_800AFFEC_00001410:
    cmpwi r5, 0x0
    beq lbl_fn_800AFFEC_0000149C
    addi r0, r4, 0x7
    addi r3, r1, 0x38
    srwi r0, r0, 3
    mtctr r0
    cmpwi r4, 0x0
    ble lbl_fn_800AFFEC_0000149C
lbl_fn_800AFFEC_00001430:
    lfs f0, 0x0(r3)
    addi r7, r7, 0x8
    fmuls f0, f0, f1
    stfs f0, 0x0(r3)
    lfs f0, 0x4(r3)
    fmuls f0, f0, f1
    stfs f0, 0x4(r3)
    lfs f0, 0x8(r3)
    fmuls f0, f0, f1
    stfs f0, 0x8(r3)
    lfs f0, 0xc(r3)
    fmuls f0, f0, f1
    stfs f0, 0xc(r3)
    lfs f0, 0x10(r3)
    fmuls f0, f0, f1
    stfs f0, 0x10(r3)
    lfs f0, 0x14(r3)
    fmuls f0, f0, f1
    stfs f0, 0x14(r3)
    lfs f0, 0x18(r3)
    fmuls f0, f0, f1
    stfs f0, 0x18(r3)
    lfs f0, 0x1c(r3)
    fmuls f0, f0, f1
    stfs f0, 0x1c(r3)
    addi r3, r3, 0x20
    bdnz lbl_fn_800AFFEC_00001430
lbl_fn_800AFFEC_0000149C:
    slwi r0, r7, 2
    addi r4, r1, 0x38
    add r4, r4, r0
    b lbl_fn_800AFFEC_000014C0
lbl_fn_800AFFEC_000014AC:
    lfs f0, 0x0(r4)
    addi r7, r7, 0x1
    fmuls f0, f0, f1
    stfs f0, 0x0(r4)
    addi r4, r4, 0x4
lbl_fn_800AFFEC_000014C0:
    lwz r3, 0x98(r28)
    addi r0, r3, 0x1
    cmpw r7, r0
    blt lbl_fn_800AFFEC_000014AC
lbl_fn_800AFFEC_000014D0:
    lwz r3, lbl_8087EFB4
    li r4, 0x1
    bl fn_800C0508
    lwz r6, lbl_8087EEE0
    li r3, 0x1
    lwz r4, 0x94(r28)
    lwz r31, 0x3c(r6)
    lwz r5, 0xac(r28)
    addi r4, r4, 0x1
    lwz r30, 0x40(r6)
    slwi r0, r4, 30
    divw r27, r31, r5
    srwi r4, r4, 31
    subf r0, r4, r0
    rotlwi r0, r0, 2
    add r29, r0, r4
    divw r26, r30, r5
    bl fn_80613BB0
    li r3, 0x0
    bl fn_80615D20
    li r3, 0x1
    bl fn_806179E0
    li r3, 0x0
    bl fn_80617200
    li r3, 0x0
    li r4, 0x3
    bl fn_80617340
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0xff
    bl fn_80617880
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    li r3, 0x0
    bl fn_80617220
    lwz r4, lbl_8087EFB4
    li r5, 0x0
    lwz r3, lbl_8087EEE0
    addi r4, r4, 0x74c
    bl fn_800763FC
    li r3, 0x0
    li r4, 0x1
    li r5, 0x0
    li r6, 0x3
    bl fn_80617D50
    lwz r3, lbl_8087EEE0
    mr r6, r27
    mr r7, r26
    li r4, 0x0
    li r5, 0x0
    bl fn_80075F58
    lwz r3, lbl_8087EFB4
    bl fn_800BFB70
    clrlwi r5, r27, 16
    clrlwi r6, r26, 16
    li r3, 0x0
    li r4, 0x0
    bl fn_80614CC0
    clrlwi r3, r27, 16
    clrlwi r4, r26, 16
    li r5, 0x4
    li r6, 0x0
    bl fn_80614D30
    slwi r0, r29, 2
    li r4, 0x1
    add r3, r28, r0
    lwz r3, 0x84(r3)
    bl fn_80615560
    li r3, 0x1
    bl fn_80613BB0
    li r3, 0x1
    bl fn_80615D20
    li r3, 0x1
    bl fn_806179E0
    li r3, 0x0
    bl fn_80617200
    li r3, 0x0
    li r4, 0x0
    bl fn_80617340
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x4
    bl fn_80617880
    li r3, 0x4
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x0
    li r8, 0x0
    li r9, 0x2
    bl fn_80615D50
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    li r3, 0x0
    bl fn_80617220
    lwz r4, lbl_8087EFB4
    li r5, 0x0
    lwz r3, lbl_8087EEE0
    addi r4, r4, 0x74c
    bl fn_800763FC
    lwz r3, lbl_8087EEE0
    bl fn_80075DEC
    li r3, 0x1
    li r4, 0x4
    li r5, 0x0
    li r6, 0x3
    bl fn_80617D50
    lfs f1, lbl_80880E40
    addi r4, r1, 0x18
    lfs f3, 0x38(r1)
    lfs f0, lbl_80880E44
    fmr f2, f1
    stfs f3, 0x28(r1)
    lwz r3, lbl_8087EFB4
    stfs f3, 0x2c(r1)
    stfs f3, 0x30(r1)
    stfs f0, 0x34(r1)
    stfs f3, 0x18(r1)
    stfs f3, 0x1c(r1)
    stfs f3, 0x20(r1)
    stfs f0, 0x24(r1)
    bl fn_800BFC18
    li r3, 0x1
    li r4, 0x4
    li r5, 0x1
    li r6, 0x3
    bl fn_80617D50
    addi r27, r1, 0x38
    li r26, 0x0
    b lbl_fn_800AFFEC_0000178C
lbl_fn_800AFFEC_00001708:
    lwz r0, 0x94(r28)
    li r5, 0x0
    lfs f0, 0x4(r27)
    subf r3, r26, r0
    stfs f0, 0x28(r1)
    addi r4, r3, 0x4
    lwz r3, lbl_8087EEE0
    slwi r0, r4, 30
    stfs f0, 0x2c(r1)
    srwi r4, r4, 31
    subf r0, r4, r0
    stfs f0, 0x30(r1)
    rotlwi r0, r0, 2
    add r0, r0, r4
    slwi r0, r0, 5
    add r4, r28, r0
    addi r4, r4, 0x4
    bl fn_800763FC
    lfs f1, lbl_80880E40
    addi r4, r1, 0x8
    lfs f5, 0x28(r1)
    lfs f4, 0x2c(r1)
    fmr f2, f1
    lfs f3, 0x30(r1)
    lfs f0, 0x34(r1)
    stfs f5, 0x8(r1)
    lwz r3, lbl_8087EFB4
    stfs f4, 0xc(r1)
    stfs f3, 0x10(r1)
    stfs f0, 0x14(r1)
    bl fn_800BFC18
    addi r27, r27, 0x4
    addi r26, r26, 0x1
lbl_fn_800AFFEC_0000178C:
    lwz r0, 0x98(r28)
    cmpw r26, r0
    blt lbl_fn_800AFFEC_00001708
    lwz r3, lbl_8087EFA8
    lwz r0, 0x244(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800AFFEC_000018A8
    xoris r3, r30, 0x8000
    stw r3, 0x5c(r1)
    lis r4, lbl_80732CC0@ha
    xoris r0, r31, 0x8000
    lfd f0, 0x58(r1)
    li r26, 0x0
    lfd f6, lbl_80732CC0@l(r4)
    stw r0, 0x5c(r1)
    fsubs f5, f0, f6
    lfs f2, lbl_80880E50
    lfd f0, 0x58(r1)
    stw r3, 0x54(r1)
    fsubs f1, f0, f6
    lfs f0, lbl_80880E54
    lfd f4, 0x50(r1)
    lfs f3, lbl_80880E4C
    fsubs f1, f1, f2
    lfs f27, lbl_80880E48
    fsubs f4, f4, f6
    lfs f30, lbl_80880E58
    fsubs f0, f1, f0
    fnmsubs f1, f5, f3, f4
    fmuls f29, f0, f3
    fsubs f28, f1, f2
    fadds f31, f27, f29
    b lbl_fn_800AFFEC_00001868
lbl_fn_800AFFEC_00001810:
    lwz r0, 0x94(r28)
    fmr f1, f27
    fmr f2, f28
    lwz r3, lbl_8087EEB0
    subf r4, r26, r0
    fmr f4, f29
    addi r4, r4, 0x4
    slwi r0, r4, 30
    srwi r5, r4, 31
    fmuls f5, f30, f29
    subf r0, r5, r0
    lfs f3, lbl_80880E40
    rotlwi r0, r0, 2
    li r4, -0x1
    add r0, r0, r5
    slwi r0, r0, 5
    li r6, 0x0
    add r5, r28, r0
    addi r5, r5, 0x4
    bl fn_8005DF90
    fadds f27, f27, f31
    addi r26, r26, 0x1
lbl_fn_800AFFEC_00001868:
    lwz r0, 0x98(r28)
    cmpw r26, r0
    blt lbl_fn_800AFFEC_00001810
    lfs f0, lbl_80880E58
    slwi r0, r29, 5
    add r4, r28, r0
    fmr f1, f27
    fmr f2, f28
    addi r5, r4, 0x4
    fmr f4, f29
    lwz r3, lbl_8087EEB0
    fmuls f5, f0, f29
    lfs f3, lbl_80880E40
    li r4, -0x1
    li r6, 0x0
    bl fn_8005DF90
lbl_fn_800AFFEC_000018A8:
    lwz r3, lbl_8087EFA8
    lwz r0, 0x248(r3)
    cmpwi r0, 0x0
    bne lbl_fn_800AFFEC_000018F4
    lwz r4, 0x94(r28)
    li r0, 0x3
    lwz r3, 0x98(r28)
    addi r4, r4, 0x1
    slwi r5, r4, 30
    addi r6, r3, 0x1
    srwi r4, r4, 31
    subf r3, r4, r5
    cmpwi r6, 0x3
    rotlwi r3, r3, 2
    add r3, r3, r4
    stw r3, 0x94(r28)
    bgt lbl_fn_800AFFEC_000018F0
    mr r0, r6
lbl_fn_800AFFEC_000018F0:
    stw r0, 0x98(r28)
lbl_fn_800AFFEC_000018F4:
    addi r11, r1, 0x80
    psq_l f31, 0xc8(r1), 0, 0
    lfd f31, 0xc0(r1)
    psq_l f30, 0xb8(r1), 0, 0
    lfd f30, 0xb0(r1)
    psq_l f29, 0xa8(r1), 0, 0
    lfd f29, 0xa0(r1)
    psq_l f28, 0x98(r1), 0, 0
    lfd f28, 0x90(r1)
    psq_l f27, 0x88(r1), 0, 0
    lfd f27, 0x80(r1)
    bl _restgpr_26
    lwz r0, 0xd4(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

asm void fn_800B089C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_80778EB8@ha
    lfs f5, lbl_80880E6C
    stw r0, 0x14(r1)
    li r0, 0x0
    lfs f8, lbl_80880E60
    addi r4, r4, lbl_80778EB8@l
    stw r31, 0xc(r1)
    lfs f1, lbl_80880E7C
    stw r30, 0x8(r1)
    mr r30, r3
    lfs f7, lbl_80880E64
    lfs f6, lbl_80880E68
    lfs f4, lbl_80880E70
    lfs f3, lbl_80880E74
    lfs f2, lbl_80880E78
    lfs f0, lbl_80880E80
    stw r4, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stfs f8, 0xc(r3)
    stfs f7, 0x10(r3)
    stw r0, 0x14(r3)
    stw r0, 0x18(r3)
    stw r0, 0x1c(r3)
    stfs f6, 0x20(r3)
    stfs f5, 0x24(r3)
    stfs f4, 0x28(r3)
    stfs f3, 0x2c(r3)
    stfs f2, 0x30(r3)
    stfs f5, 0x34(r3)
    stfs f1, 0x38(r3)
    stfs f0, 0x3c(r3)
    stfs f1, 0x40(r3)
    stfs f5, 0x44(r3)
    stfs f5, 0x48(r3)
    stfs f8, 0x4c(r3)
    stfs f8, 0x50(r3)
    stw r0, 0x54(r3)
    stfs f5, 0x58(r3)
    stfs f5, 0x5c(r3)
    stw r0, 0x80(r3)
    stw r0, 0x84(r3)
    addi r3, r3, 0x88
    bl fn_800D5738
    addi r3, r30, 0xb8
    bl fn_800D5738
    lwz r3, 0x84(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800B089C_00001A0C
    beq lbl_fn_800B089C_00001A0C
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_800B089C_00001A0C:
    li r0, 0x100
    stw r0, 0x80(r30)
    mulli r3, r0, 0x1c
    li r4, 0x0
    la r5, lbl_8087D874
    la r6, lbl_8087D870
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_800B0A44@ha
    li r5, 0x0
    addi r4, r4, fn_800B0A44@l
    li r6, 0x1c
    li r7, 0x100
    bl fn_80695720
    stw r3, 0x84(r30)
    b lbl_fn_800B089C_00001A54
    stw r0, 0x84(r30)
lbl_fn_800B089C_00001A54:
    li r6, 0x0
    li r5, 0x0
    li r4, 0x0
    b lbl_fn_800B089C_00001A78
lbl_fn_800B089C_00001A64:
    lwz r0, 0x84(r30)
    addi r6, r6, 0x1
    add r3, r0, r5
    addi r5, r5, 0x1c
    stw r4, 0x18(r3)
lbl_fn_800B089C_00001A78:
    lwz r0, 0x80(r30)
    cmplw r6, r0
    blt lbl_fn_800B089C_00001A64
    li r0, 0x1
    lis r31, lbl_80732D00@ha
    stb r0, 0xe5(r30)
    addi r3, r30, 0xb8
    addi r4, r31, lbl_80732D00@l
    stb r0, 0xe6(r30)
    bl fn_800D594C
    addi r4, r31, lbl_80732D00@l
    addi r3, r30, 0x88
    addi r4, r4, 0x15
    bl fn_800D594C
    lfs f0, lbl_80880E6C
    mr r3, r30
    stfs f0, 0x10(r30)
    stfs f0, 0xc(r30)
    stfs f0, 0x20(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800B0A44(void)
{
    nofralloc
    blr
}

asm void fn_800B0A48(void)
{
    nofralloc
    lwz r0, 0x4(r3)
    li r4, 0x0
    cmpwi r0, 0x0
    bne lbl_fn_800B0A48_00001AFC
    lwz r0, 0x18(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800B0A48_00001B00
lbl_fn_800B0A48_00001AFC:
    li r4, 0x1
lbl_fn_800B0A48_00001B00:
    mr r3, r4
    blr
}

asm void fn_800B0A70(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    stfd f31, 0x80(r1)
    psq_st f31, 0x88(r1), 0, 0
    stw r31, 0x7c(r1)
    stw r30, 0x78(r1)
    stw r29, 0x74(r1)
    stw r28, 0x70(r1)
    mr r28, r3
    bl fn_806167B0
    li r3, 0x1
    bl fn_80615D20
    li r3, 0x1
    bl fn_806179E0
    li r3, 0x0
    bl fn_80617200
    li r3, 0x4
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x0
    li r8, 0x0
    li r9, 0x2
    bl fn_80615D50
    li r3, 0x1
    bl fn_80613BB0
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x1e
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    lfs f1, lbl_80880E6C
    addi r3, r1, 0x18
    lfs f0, lbl_80880E60
    li r4, 0x1e
    stfs f1, 0x44(r1)
    li r5, 0x1
    stfs f1, 0x3c(r1)
    stfs f1, 0x38(r1)
    stfs f1, 0x34(r1)
    stfs f1, 0x30(r1)
    stfs f1, 0x28(r1)
    stfs f1, 0x24(r1)
    stfs f1, 0x20(r1)
    stfs f1, 0x1c(r1)
    stfs f0, 0x40(r1)
    stfs f0, 0x2c(r1)
    stfs f0, 0x18(r1)
    bl fn_80618420
    li r3, 0x0
    li r4, 0xf
    li r5, 0xf
    li r6, 0xf
    li r7, 0x8
    bl fn_806173E0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_80617460
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x4
    bl fn_80617880
    li r3, 0x0
    li r4, 0x7
    li r5, 0x5
    li r6, 0x4
    li r7, 0x7
    bl fn_80617420
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_806174C0
    lwz r3, lbl_8087EEE0
    addi r4, r28, 0x88
    li r5, 0x0
    bl fn_800763FC
    li r3, 0x1
    li r4, 0x4
    li r5, 0x5
    li r6, 0x3
    bl fn_80617D50
    lfs f31, lbl_80880E60
    li r29, 0x0
    li r30, 0x0
    b lbl_fn_800B0A70_00001D1C
lbl_fn_800B0A70_00001C88:
    lwz r0, 0x84(r28)
    add r31, r0, r30
    lwz r0, 0x18(r31)
    cmpwi r0, 0x0
    beq lbl_fn_800B0A70_00001D14
    lfs f0, 0x0(r31)
    lfs f2, 0x4(r31)
    fctiwz f3, f0
    lfs f1, 0x8(r31)
    lfs f0, 0xc(r31)
    fctiwz f2, f2
    fctiwz f1, f1
    stfd f3, 0x48(r1)
    fctiwz f0, f0
    stfd f2, 0x50(r1)
    lwz r4, 0x4c(r1)
    stfd f1, 0x58(r1)
    lwz r5, 0x54(r1)
    stfd f0, 0x60(r1)
    lwz r6, 0x5c(r1)
    lwz r7, 0x64(r1)
    lwz r3, lbl_8087EEE0
    bl fn_80075F58
    lfs f2, 0x10(r31)
    addi r4, r1, 0x8
    lfs f0, 0xc(r28)
    lfs f1, lbl_80880E6C
    fmuls f0, f2, f0
    stfs f31, 0x8(r1)
    fmr f2, f1
    lwz r3, lbl_8087EFB4
    stfs f31, 0xc(r1)
    stfs f31, 0x10(r1)
    stfs f0, 0x14(r1)
    bl fn_800BFC18
lbl_fn_800B0A70_00001D14:
    addi r30, r30, 0x1c
    addi r29, r29, 0x1
lbl_fn_800B0A70_00001D1C:
    lwz r0, 0x80(r28)
    cmplw r29, r0
    blt lbl_fn_800B0A70_00001C88
    lwz r3, lbl_8087EEE0
    bl fn_80075DEC
    li r3, 0x0
    li r4, 0x1
    li r5, 0x0
    li r6, 0x3
    bl fn_80617D50
    lwz r0, 0x94(r1)
    psq_l f31, 0x88(r1), 0, 0
    lfd f31, 0x80(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    lwz r29, 0x74(r1)
    lwz r28, 0x70(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}
