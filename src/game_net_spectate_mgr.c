#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_26(void);
extern void _savegpr_26(void);
extern void dtor_80084684(void);
extern void fn_8004829C(void);
extern void fn_8004895C(void);
extern void fn_8004AD9C(void);
extern void fn_8004ADF4(void);
extern void fn_8004AE84(void);
extern void fn_8004B0E4(void);
extern void fn_8004B290(void);
extern void fn_8004B338(void);
extern void fn_8005E7F4(void);
extern void fn_80060D58(void);
extern void fn_80061824(void);
extern void fn_800697D8(void);
extern void fn_8006A250(void);
extern void fn_8006A5A8(void);
extern void fn_8006EF48(void);
extern void fn_80076FF8(void);
extern void fn_80079044(void);
extern void fn_80084320(void);
extern void fn_800874C8(void);
extern void fn_8008771C(void);
extern void fn_80087858(void);
extern void fn_80087994(void);
extern void fn_80087E9C(void);
extern void fn_8008937C(void);
extern void fn_800897D8(void);
extern void fn_800BC2E0(void);
extern void fn_800C16B4(void);
extern void fn_800C1A1C(void);
extern void fn_800C1FB4(void);
extern void fn_800C310C(void);
extern void fn_800CDF84(void);
extern void fn_800CE368(void);
extern void fn_800D1D3C(void);
extern void fn_800D1E9C(void);
extern void fn_800D2338(void);
extern void fn_800D246C(void);
extern void fn_800D3FA4(void);
extern void fn_801F0544(void);
extern void fn_801F3FF8(void);
extern void fn_801FEB9C(void);
extern void fn_802377B8(void);
extern void fn_8023780C(void);
extern void fn_8023781C(void);
extern void fn_80237874(void);
extern void fn_80239798(void);
extern void fn_803B27F8(void);
extern void fn_803B33F8(void);
extern void fn_803B3530(void);
extern void fn_803B8144(void);
extern void fn_803B83A4(void);
extern void fn_803B8AC4(void);
extern void fn_803BEAB4(void);
extern void fn_803CE448(void);
extern void fn_803CE44C(void);
extern void fn_803EDFBC(void);
extern void fn_803EEE10(void);
extern void fn_80453DBC(void);
extern void fn_8046ECDC(void);
extern void fn_8047043C(void);
extern void fn_80470528(void);
extern void fn_80473E74(void);
extern void fn_80473E8C(void);
extern void fn_80473F50(void);
extern void fn_804741C0(void);
extern void fn_8047C7FC(void);
extern void fn_8047E528(void);
extern void fn_8047F8B0(void);
extern void fn_8048169C(void);
extern void fn_80490EB8(void);
extern void fn_8049D68C(void);
extern void fn_8052BBF0(void);
extern void fn_8052E8D8(void);
extern void fn_8052E984(void);
extern void fn_8052EEC0(void);
extern void fn_8052F890(void);
extern void fn_80533BE0(void);
extern void fn_80536CAC(void);
extern void fn_805F98D0(void);
extern void fn_806163C0(void);
extern void fn_806163E0(void);
extern void fn_80695D84(void);
extern int sprintf(char* str, const char* format, ...);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_8075D450[];
extern u8 lbl_8075D5B0[];
extern u8 lbl_8078FBB0[];
extern u8 lbl_80793A20[];

/* Small data declarations */
extern u32 lbl_8087EE90;
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EEB8;
extern u32 lbl_8087EEC8;
extern u32 lbl_8087EEE0;
extern u32 lbl_8087EF10;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087EFE8;
extern u32 lbl_8087F018;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F420;
extern u32 lbl_8087F4A0;
extern u32 lbl_8087F518;
extern u32 lbl_8087F540;
extern u32 lbl_8087F9A0;
extern u32 lbl_80887B30;
extern u32 lbl_80887B3C;
extern u32 lbl_80887B4C;
extern u32 lbl_80887B50;
extern u32 lbl_80887B54;
extern u32 lbl_80887B58;
extern u32 lbl_80887B5C;
extern u32 lbl_80887B60;
extern u32 lbl_80887B64;
extern u32 lbl_80887B68;
extern u32 lbl_80887B6C;
extern u32 lbl_80887B70;
extern u32 lbl_80887B74;
extern u32 lbl_80887B78;
extern u32 lbl_80887B84;
extern u32 lbl_80887B88;
extern u32 lbl_80887B8C;
extern u32 lbl_80887B90;
extern u32 lbl_80887B94;
extern u32 lbl_80887B98;
extern u32 lbl_80887B9C;
extern u32 lbl_80887BA0;
extern u32 lbl_80887BA4;
extern u32 lbl_80887BA8;
extern u32 lbl_80887BAC;
extern u32 lbl_80887BB0;
extern u32 lbl_80887BB4;
extern u32 lbl_80887BB8;
extern u32 lbl_80887BBC;
extern u32 lbl_80887BC0;
extern u32 lbl_80887BC4;
extern u32 lbl_80887BC8;
extern u32 lbl_80887BCC;
extern u32 lbl_80887BD0;
extern u32 lbl_80887BD4;
extern u32 lbl_80887BD8;
extern u32 lbl_80887BDC;
extern u32 lbl_80887BE0;
extern u32 lbl_80887BE4;
extern u32 lbl_80887BE8;
extern u32 lbl_80887BEC;
extern u32 lbl_80887BF0;
extern u32 lbl_80887BF4;
extern u32 lbl_80887BF8;
extern u32 lbl_80887BFC;
extern u32 lbl_80887C00;
extern u32 lbl_80887C04;
extern u32 lbl_80887C08;
extern u32 lbl_80887C0C;
extern u32 lbl_80887C10;
extern u32 lbl_80887C14;
extern u32 lbl_80887C18;
extern u32 lbl_80887C1C;

/* Function declarations */
void fn_80531814(void);
void fn_80531820(void);
void fn_805319C8(void);
void fn_80531E84(void);
void fn_80531ED4(void);
void fn_80531F48(void);
void fn_805327B4(void);
void fn_80532ABC(void);

asm void fn_80531814(void)
{
    nofralloc
    li r0, 0x0
    sth r0, 0x10(r3)
    blr
}

asm void fn_80531820(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lfs f2, lbl_80887B30
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lfs f0, 0x54(r3)
    fcmpo cr0, f0, f2
    ble lbl_fn_80531820_00000054
    lwz r4, lbl_8087EFA8
    lfs f1, 0x3a4(r4)
    fsubs f0, f0, f1
    stfs f0, 0x54(r3)
    fcmpo cr0, f0, f2
    cror eq, lt, eq
    bne lbl_fn_80531820_000001A0
    stfs f2, 0x54(r3)
    b lbl_fn_80531820_000001A0
lbl_fn_80531820_00000054:
    lfs f1, 0x48(r3)
    lfs f0, 0x58(r3)
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_80531820_00000098
    lfs f0, 0x5c(r3)
    fcmpo cr0, f0, f2
    ble lbl_fn_80531820_00000098
    lwz r4, lbl_8087EFA8
    lfs f1, 0x3a4(r4)
    fsubs f0, f0, f1
    stfs f0, 0x5c(r3)
    fcmpo cr0, f0, f2
    cror eq, lt, eq
    bne lbl_fn_80531820_000001A0
    stfs f2, 0x5c(r3)
    b lbl_fn_80531820_000001A0
lbl_fn_80531820_00000098:
    lwz r4, 0x6c(r3)
    cmpwi r4, 0x0
    bne lbl_fn_80531820_000000AC
    li r0, 0x1
    b lbl_fn_80531820_000000E4
lbl_fn_80531820_000000AC:
    subi r0, r4, 0x1
    lwz r4, 0x70(r3)
    mulli r0, r0, 0x110
    lwzux r0, r4, r0
    cmpwi r0, 0x4
    bne lbl_fn_80531820_000000E0
    lfs f1, 0x48(r3)
    lfs f0, 0x4(r4)
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_80531820_000000E0
    li r0, 0x1
    b lbl_fn_80531820_000000E4
lbl_fn_80531820_000000E0:
    li r0, 0x0
lbl_fn_80531820_000000E4:
    cmpwi r0, 0x0
    beq lbl_fn_80531820_00000158
    lwz r4, lbl_8087F540
    cmpwi r4, 0x0
    beq lbl_fn_80531820_00000110
    lwz r4, 0x70(r4)
    cmpwi r4, 0x0
    beq lbl_fn_80531820_00000110
    lwz r0, 0x190(r4)
    cmpwi r0, 0x151e
    beq lbl_fn_80531820_000001A0
lbl_fn_80531820_00000110:
    lwz r4, lbl_8087EFA8
    lfs f1, 0x60(r3)
    lfs f2, 0x3a4(r4)
    lfs f0, lbl_80887B4C
    fadds f1, f1, f2
    stfs f1, 0x60(r3)
    fcmpo cr0, f1, f0
    ble lbl_fn_80531820_000001A0
    lwz r3, lbl_8087F540
    li r4, 0x1
    bl fn_8048169C
    lwz r3, lbl_8087F540
    bl fn_8047E528
    lwz r3, lbl_8087F540
    bl fn_8047F8B0
    mr r3, r31
    bl fn_800D2338
    b lbl_fn_80531820_000001A0
lbl_fn_80531820_00000158:
    lfs f1, 0x50(r3)
    lfs f0, lbl_80887B30
    fcmpo cr0, f1, f0
    ble lbl_fn_80531820_00000188
    lfs f0, 0x48(r3)
    fcmpo cr0, f0, f1
    cror eq, gt, eq
    bne lbl_fn_80531820_00000188
    lfs f1, 0x4c(r3)
    lfs f0, lbl_80887B50
    fmuls f0, f1, f0
    stfs f0, 0x4c(r3)
lbl_fn_80531820_00000188:
    lwz r4, lbl_8087EFA8
    lfs f1, 0x4c(r3)
    lfs f2, 0x3a4(r4)
    lfs f0, 0x48(r3)
    fmadds f0, f1, f2, f0
    stfs f0, 0x48(r3)
lbl_fn_80531820_000001A0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805319C8(void)
{
    nofralloc
    stwu r1, -0x100(r1)
    mflr r0
    stw r0, 0x104(r1)
    addi r11, r1, 0x40
    stfd f31, 0xf0(r1)
    psq_st f31, 0xf8(r1), 0, 0
    stfd f30, 0xe0(r1)
    psq_st f30, 0xe8(r1), 0, 0
    stfd f29, 0xd0(r1)
    psq_st f29, 0xd8(r1), 0, 0
    stfd f28, 0xc0(r1)
    psq_st f28, 0xc8(r1), 0, 0
    stfd f27, 0xb0(r1)
    psq_st f27, 0xb8(r1), 0, 0
    stfd f26, 0xa0(r1)
    psq_st f26, 0xa8(r1), 0, 0
    stfd f25, 0x90(r1)
    psq_st f25, 0x98(r1), 0, 0
    stfd f24, 0x80(r1)
    psq_st f24, 0x88(r1), 0, 0
    stfd f23, 0x70(r1)
    psq_st f23, 0x78(r1), 0, 0
    stfd f22, 0x60(r1)
    psq_st f22, 0x68(r1), 0, 0
    stfd f21, 0x50(r1)
    psq_st f21, 0x58(r1), 0, 0
    stfd f20, 0x40(r1)
    psq_st f20, 0x48(r1), 0, 0
    bl _savegpr_26
    lwz r0, 0x74(r3)
    lis r4, 0x4330
    stw r4, 0x10(r1)
    mr r29, r3
    cmpwi r0, 0x0
    stw r4, 0x18(r1)
    bne lbl_fn_805319C8_000005F8
    lwz r4, lbl_8087EEE0
    lis r3, lbl_8075D450@ha
    lfd f24, lbl_8075D450@l(r3)
    li r30, 0x0
    lwz r3, 0x3c(r4)
    li r31, 0x0
    lwz r0, 0x40(r4)
    li r27, 0x13
    xoris r3, r3, 0x8000
    stw r3, 0x14(r1)
    xoris r0, r0, 0x8000
    lfs f25, lbl_80887B50
    stw r0, 0x1c(r1)
    li r28, 0x12
    lfd f1, 0x10(r1)
    lfd f0, 0x18(r1)
    fsubs f23, f1, f24
    lfs f29, lbl_80887B54
    fsubs f22, f0, f24
    lfs f30, lbl_80887B64
    lfs f27, lbl_80887B60
    lfs f28, lbl_80887B5C
    lfs f26, lbl_80887B58
    lfs f31, lbl_80887B3C
    b lbl_fn_805319C8_00000518
lbl_fn_805319C8_000002A8:
    lwz r0, 0x70(r29)
    lfs f2, 0x48(r29)
    add r26, r0, r31
    lfs f0, 0x4(r26)
    lfs f1, 0x8(r26)
    fsubs f2, f2, f0
    fneg f0, f1
    fsubs f21, f22, f2
    fcmpo cr0, f21, f0
    cror eq, gt, eq
    bne lbl_fn_805319C8_00000510
    fcmpo cr0, f21, f22
    cror eq, lt, eq
    bne lbl_fn_805319C8_00000510
    lwz r0, 0x0(r26)
    cmpwi r0, 0x2
    bne lbl_fn_805319C8_000003E8
    addi r3, r29, 0x7c
    bl fn_806163C0
    clrlwi r0, r3, 16
    addi r3, r29, 0x7c
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f24
    fmuls f20, f25, f0
    bl fn_806163E0
    clrlwi r0, r3, 16
    lwz r3, 0xc(r26)
    xoris r0, r0, 0x8000
    stw r0, 0x1c(r1)
    cmpwi r3, 0x0
    lfs f1, lbl_80887B30
    lfd f0, 0x18(r1)
    fsubs f0, f0, f24
    fmuls f5, f25, f0
    beq lbl_fn_805319C8_00000360
    cmpwi r3, 0x1
    beq lbl_fn_805319C8_0000036C
    cmpwi r3, 0x2
    beq lbl_fn_805319C8_00000380
    cmpwi r3, 0x3
    beq lbl_fn_805319C8_00000394
    cmpwi r3, 0x4
    beq lbl_fn_805319C8_000003A0
    b lbl_fn_805319C8_000003A4
lbl_fn_805319C8_00000360:
    fsubs f0, f23, f20
    fmsubs f1, f29, f0, f26
    b lbl_fn_805319C8_000003A4
lbl_fn_805319C8_0000036C:
    fsubs f0, f23, f27
    fsubs f1, f23, f20
    fmuls f0, f28, f0
    fmsubs f1, f29, f1, f0
    b lbl_fn_805319C8_000003A4
lbl_fn_805319C8_00000380:
    fsubs f0, f23, f20
    fsubs f1, f23, f27
    fmuls f0, f29, f0
    fmadds f1, f28, f1, f0
    b lbl_fn_805319C8_000003A4
lbl_fn_805319C8_00000394:
    fmsubs f0, f29, f23, f30
    fsubs f1, f0, f20
    b lbl_fn_805319C8_000003A4
lbl_fn_805319C8_000003A0:
    fmadds f1, f29, f23, f30
lbl_fn_805319C8_000003A4:
    lwz r3, lbl_8087EEB0
    fmr f2, f21
    lfs f6, lbl_80887B30
    fmr f4, f20
    stw r27, 0xa0(r3)
    fmr f8, f31
    fmr f7, f6
    stfs f31, 0x8(r1)
    addi r6, r29, 0x7c
    lfs f3, lbl_80887B68
    li r4, -0x1
    lwz r3, lbl_8087EEB0
    li r5, 0x0
    bl fn_8005E7F4
    lwz r3, lbl_8087EEB0
    stw r28, 0xa0(r3)
    b lbl_fn_805319C8_00000510
lbl_fn_805319C8_000003E8:
    lwz r3, lbl_8087EEC8
    addi r4, r26, 0x10
    lfs f2, lbl_80887B30
    li r5, 0x1
    li r6, 0x1
    bl fn_8006EF48
    lwz r0, 0xc(r26)
    lfs f20, lbl_80887B30
    cmpwi r0, 0x0
    beq lbl_fn_805319C8_00000434
    cmpwi r0, 0x1
    beq lbl_fn_805319C8_00000440
    cmpwi r0, 0x2
    beq lbl_fn_805319C8_00000454
    cmpwi r0, 0x3
    beq lbl_fn_805319C8_00000468
    cmpwi r0, 0x4
    beq lbl_fn_805319C8_00000474
    b lbl_fn_805319C8_00000478
lbl_fn_805319C8_00000434:
    fsubs f0, f23, f1
    fmuls f20, f29, f0
    b lbl_fn_805319C8_00000478
lbl_fn_805319C8_00000440:
    fsubs f0, f23, f27
    fsubs f1, f23, f1
    fmuls f0, f28, f0
    fmsubs f20, f29, f1, f0
    b lbl_fn_805319C8_00000478
lbl_fn_805319C8_00000454:
    fsubs f0, f23, f1
    fsubs f1, f23, f27
    fmuls f0, f29, f0
    fmadds f20, f28, f1, f0
    b lbl_fn_805319C8_00000478
lbl_fn_805319C8_00000468:
    fmsubs f0, f29, f23, f30
    fsubs f20, f0, f1
    b lbl_fn_805319C8_00000478
lbl_fn_805319C8_00000474:
    fmadds f20, f29, f23, f30
lbl_fn_805319C8_00000478:
    lwz r3, lbl_8087EEB0
    fadds f1, f31, f20
    lfs f6, lbl_80887B30
    fadds f2, f31, f21
    stw r27, 0xa0(r3)
    addi r4, r26, 0x10
    fmr f7, f6
    lfs f4, 0x8(r26)
    fmr f8, f6
    lwz r3, lbl_8087EEB0
    lis r5, 0xff00
    fmr f5, f4
    lfs f3, lbl_80887B68
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
    lfs f6, lbl_80887B30
    fmr f1, f20
    lfs f4, 0x8(r26)
    fmr f2, f21
    fmr f7, f6
    lwz r3, lbl_8087EEB0
    fmr f5, f4
    fmr f8, f6
    lfs f3, lbl_80887B68
    addi r4, r26, 0x10
    li r5, -0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
    lwz r3, lbl_8087EEB0
    stw r28, 0xa0(r3)
lbl_fn_805319C8_00000510:
    addi r31, r31, 0x110
    addi r30, r30, 0x1
lbl_fn_805319C8_00000518:
    lwz r0, 0x6c(r29)
    cmplw r30, r0
    blt lbl_fn_805319C8_000002A8
    lfs f1, 0x60(r29)
    lfs f0, lbl_80887B6C
    fcmpo cr0, f1, f0
    ble lbl_fn_805319C8_000005F8
    fsubs f2, f1, f0
    lfs f1, lbl_80887B70
    lfs f0, lbl_80887B30
    fdivs f1, f2, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_805319C8_00000550
    b lbl_fn_805319C8_00000554
lbl_fn_805319C8_00000550:
    fmr f1, f0
lbl_fn_805319C8_00000554:
    lfs f2, lbl_80887B3C
    fcmpo cr0, f1, f2
    bge lbl_fn_805319C8_00000588
    lfs f2, 0x60(r29)
    lfs f0, lbl_80887B6C
    lfs f1, lbl_80887B70
    fsubs f2, f2, f0
    lfs f0, lbl_80887B30
    fdivs f2, f2, f1
    fcmpo cr0, f2, f0
    ble lbl_fn_805319C8_00000584
    b lbl_fn_805319C8_00000588
lbl_fn_805319C8_00000584:
    fmr f2, f0
lbl_fn_805319C8_00000588:
    lfs f0, lbl_80887B74
    fmuls f1, f0, f2
    bl fn_80695D84
    lwz r4, lbl_8087EEB0
    li r0, 0x13
    lis r5, lbl_8075D450@ha
    lfs f1, lbl_80887B30
    stw r0, 0xa0(r4)
    slwi r4, r3, 24
    lfd f5, lbl_8075D450@l(r5)
    fmr f2, f1
    lwz r6, lbl_8087EEE0
    lwz r3, lbl_8087EEB0
    lwz r5, 0x3c(r6)
    lwz r0, 0x40(r6)
    xoris r5, r5, 0x8000
    stw r5, 0x14(r1)
    xoris r0, r0, 0x8000
    lfs f3, lbl_80887B78
    stw r0, 0x1c(r1)
    lfd f4, 0x10(r1)
    lfd f0, 0x18(r1)
    fsubs f4, f4, f5
    fsubs f5, f0, f5
    bl fn_80060D58
    lwz r3, lbl_8087EEB0
    li r0, 0x12
    stw r0, 0xa0(r3)
lbl_fn_805319C8_000005F8:
    addi r11, r1, 0x40
    psq_l f31, 0xf8(r1), 0, 0
    lfd f31, 0xf0(r1)
    psq_l f30, 0xe8(r1), 0, 0
    lfd f30, 0xe0(r1)
    psq_l f29, 0xd8(r1), 0, 0
    lfd f29, 0xd0(r1)
    psq_l f28, 0xc8(r1), 0, 0
    lfd f28, 0xc0(r1)
    psq_l f27, 0xb8(r1), 0, 0
    lfd f27, 0xb0(r1)
    psq_l f26, 0xa8(r1), 0, 0
    lfd f26, 0xa0(r1)
    psq_l f25, 0x98(r1), 0, 0
    lfd f25, 0x90(r1)
    psq_l f24, 0x88(r1), 0, 0
    lfd f24, 0x80(r1)
    psq_l f23, 0x78(r1), 0, 0
    lfd f23, 0x70(r1)
    psq_l f22, 0x68(r1), 0, 0
    lfd f22, 0x60(r1)
    psq_l f21, 0x58(r1), 0, 0
    lfd f21, 0x50(r1)
    psq_l f20, 0x48(r1), 0, 0
    lfd f20, 0x40(r1)
    bl _restgpr_26
    lwz r0, 0x104(r1)
    mtlr r0
    addi r1, r1, 0x100
    blr
}

asm void fn_80531E84(void)
{
    nofralloc
    lwz r4, 0x6c(r3)
    cmpwi r4, 0x0
    bne lbl_fn_80531E84_00000684
    li r3, 0x1
    blr
lbl_fn_80531E84_00000684:
    subi r0, r4, 0x1
    lwz r4, 0x70(r3)
    mulli r0, r0, 0x110
    lwzux r0, r4, r0
    cmpwi r0, 0x4
    bne lbl_fn_80531E84_000006B8
    lfs f1, 0x48(r3)
    lfs f0, 0x4(r4)
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_80531E84_000006B8
    li r3, 0x1
    blr
lbl_fn_80531E84_000006B8:
    li r3, 0x0
    blr
}

asm void fn_80531ED4(void)
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
    beq lbl_fn_80531ED4_00000718
    lis r5, lbl_8075D5B0@ha
    li r3, 0xbc0
    addi r5, r5, lbl_8075D5B0@l
    li r4, 0x1
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_80531ED4_0000071C
    mr r4, r30
    mr r5, r31
    bl fn_80531F48
    b lbl_fn_80531ED4_0000071C
lbl_fn_80531ED4_00000718:
    li r3, 0x0
lbl_fn_80531ED4_0000071C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80531F48(void)
{
    nofralloc
    stwu r1, -0x230(r1)
    mflr r0
    stw r0, 0x234(r1)
    addi r11, r1, 0x200
    stfd f31, 0x220(r1)
    psq_st f31, 0x228(r1), 0, 0
    stfd f30, 0x210(r1)
    psq_st f30, 0x218(r1), 0, 0
    stfd f29, 0x200(r1)
    psq_st f29, 0x208(r1), 0, 0
    bl _savegpr_26
    mr r28, r3
    mr r29, r4
    mr r26, r5
    bl fn_800D1D3C
    lis r3, lbl_80793A20@ha
    li r30, 0x0
    addi r3, r3, lbl_80793A20@l
    stw r3, 0x0(r28)
    addi r3, r28, 0x64
    li r4, 0x0
    stw r30, 0x5c(r28)
    li r5, 0x0
    bl fn_8004B290
    stw r30, 0x258(r28)
    addi r3, r28, 0x268
    stw r26, 0x260(r28)
    stw r30, 0x264(r28)
    bl fn_8004AD9C
    addi r3, r28, 0x27c
    bl fn_8004AD9C
    addi r3, r28, 0x290
    bl fn_802377B8
    addi r3, r28, 0x29c
    bl fn_802377B8
    lfs f5, lbl_80887BB4
    li r31, 0x1
    lfs f4, lbl_80887BB8
    lfs f3, lbl_80887BBC
    lfs f0, lbl_80887BC0
    lfs f29, lbl_80887B88
    lfs f30, lbl_80887B8C
    lfs f31, lbl_80887B90
    lfs f13, lbl_80887B94
    lfs f12, lbl_80887B98
    lfs f11, lbl_80887B9C
    lfs f10, lbl_80887BA0
    lfs f9, lbl_80887BA4
    lfs f8, lbl_80887BA8
    lfs f7, lbl_80887BAC
    lfs f6, lbl_80887BB0
    stw r30, 0x2a8(r28)
    stw r30, 0x2ac(r28)
    stw r30, 0x2b0(r28)
    stw r30, 0x2b8(r28)
    stw r30, 0x2bc(r28)
    stw r31, 0x2c4(r28)
    stw r30, 0x2c8(r28)
    stw r30, 0x2d0(r28)
    stw r30, 0x2d4(r28)
    stw r30, 0x2d8(r28)
    stw r30, 0x2e4(r28)
    stw r30, 0x2e8(r28)
    stw r30, 0x2ec(r28)
    stw r30, 0x314(r28)
    stw r30, 0x318(r28)
    stfs f29, 0x31c(r28)
    stfs f30, 0x320(r28)
    stfs f31, 0x324(r28)
    stfs f13, 0x328(r28)
    stfs f12, 0x32c(r28)
    stfs f11, 0x330(r28)
    stfs f10, 0x334(r28)
    stfs f9, 0x338(r28)
    stfs f8, 0x33c(r28)
    stfs f7, 0x340(r28)
    stfs f6, 0x344(r28)
    stfs f5, 0x348(r28)
    stfs f5, 0x34c(r28)
    stfs f5, 0x350(r28)
    stfs f5, 0x354(r28)
    stfs f5, 0x358(r28)
    stfs f4, 0x35c(r28)
    stfs f3, 0x360(r28)
    stfs f0, 0x364(r28)
    stfs f5, 0x368(r28)
    stfs f5, 0x36c(r28)
    stfs f5, 0x370(r28)
    stfs f5, 0x374(r28)
    stfs f5, 0x378(r28)
    stfs f4, 0x37c(r28)
    stfs f3, 0x380(r28)
    stfs f0, 0x384(r28)
    stfs f5, 0x388(r28)
    stfs f5, 0x38c(r28)
    stfs f5, 0x390(r28)
    stfs f5, 0x394(r28)
    stfs f5, 0x398(r28)
    stfs f4, 0x39c(r28)
    stfs f3, 0x3a0(r28)
    stfs f0, 0x3a4(r28)
    stfs f5, 0x3a8(r28)
    stfs f5, 0x3ac(r28)
    stfs f5, 0x3b0(r28)
    stfs f5, 0x3b4(r28)
    stfs f5, 0x3b8(r28)
    stfs f4, 0x3bc(r28)
    stfs f3, 0x3c0(r28)
    stfs f0, 0x3c4(r28)
    stfs f5, 0x3c8(r28)
    stfs f5, 0x3cc(r28)
    stfs f5, 0x3d0(r28)
    stfs f5, 0x3d4(r28)
    stfs f5, 0x3d8(r28)
    stfs f4, 0x3dc(r28)
    stfs f3, 0x3e0(r28)
    stfs f0, 0x3e4(r28)
    stw r30, 0x3ec(r28)
    stw r30, 0x3f0(r28)
    stfs f4, 0x3f4(r28)
    stfs f4, 0x3f8(r28)
    stfs f4, 0x3fc(r28)
    stfs f4, 0x400(r28)
    stfs f5, 0x404(r28)
    stfs f5, 0x408(r28)
    stfs f5, 0x40c(r28)
    stw r30, 0x410(r28)
    stw r30, 0x414(r28)
    stfs f4, 0x418(r28)
    stfs f4, 0x41c(r28)
    addi r27, r28, 0x438
    stfs f4, 0x420(r28)
    mr r3, r27
    stfs f4, 0x424(r28)
    stfs f5, 0x428(r28)
    stfs f5, 0x42c(r28)
    stfs f5, 0x430(r28)
    bl fn_80473E74
    lfs f5, lbl_80887BB4
    lis r3, lbl_8078FBB0@ha
    lfs f4, lbl_80887BB8
    addi r3, r3, lbl_8078FBB0@l
    lfs f3, lbl_80887BBC
    addi r26, r28, 0x6ec
    lfs f0, lbl_80887BC0
    stw r3, 0x0(r27)
    mr r3, r26
    stfs f5, 0x440(r28)
    stfs f5, 0x444(r28)
    stfs f5, 0x448(r28)
    stfs f5, 0x44c(r28)
    stfs f5, 0x450(r28)
    stfs f4, 0x454(r28)
    stfs f3, 0x458(r28)
    stfs f0, 0x45c(r28)
    stfs f5, 0x460(r28)
    stfs f5, 0x464(r28)
    stfs f5, 0x468(r28)
    stfs f5, 0x46c(r28)
    stfs f5, 0x470(r28)
    stfs f4, 0x474(r28)
    stfs f3, 0x478(r28)
    stfs f0, 0x47c(r28)
    stfs f5, 0x480(r28)
    stfs f5, 0x484(r28)
    stfs f5, 0x488(r28)
    stfs f5, 0x48c(r28)
    stfs f5, 0x490(r28)
    stfs f4, 0x494(r28)
    stfs f3, 0x498(r28)
    stfs f0, 0x49c(r28)
    stw r30, 0x6a0(r28)
    stw r30, 0x6e0(r28)
    stw r30, 0x6e8(r28)
    bl fn_80079044
    addi r3, r26, 0x64
    bl fn_800C1A1C
    lfs f9, lbl_80887BB8
    li r5, 0x3
    lfs f4, lbl_80887BD4
    li r3, 0x140
    lfs f3, lbl_80887BD8
    li r0, 0xe0
    lfs f7, lbl_80887BE0
    lfs f11, lbl_80887BC4
    lfs f10, lbl_80887BC8
    lfs f6, lbl_80887BCC
    lfs f5, lbl_80887BD0
    lfs f8, lbl_80887BB4
    lfs f0, lbl_80887BDC
    stw r31, 0x318(r26)
    stw r30, 0x31c(r26)
    stw r30, 0x320(r26)
    stw r31, 0x324(r26)
    stfs f11, 0x328(r26)
    stfs f10, 0x32c(r26)
    stfs f6, 0x330(r26)
    stfs f5, 0x334(r26)
    stw r3, 0x338(r26)
    stw r0, 0x33c(r26)
    stfs f4, 0x340(r26)
    stfs f4, 0x344(r26)
    stw r31, 0x348(r26)
    stw r30, 0x34c(r26)
    stw r5, 0x350(r26)
    stw r5, 0x354(r26)
    stw r31, 0x358(r26)
    stfs f9, 0x35c(r26)
    stfs f3, 0x360(r26)
    stfs f3, 0x364(r26)
    stfs f8, 0x368(r26)
    stfs f0, 0x36c(r26)
    stfs f9, 0x370(r26)
    stfs f9, 0x378(r26)
    stfs f7, 0x374(r26)
    stfs f7, 0x37c(r26)
    stfs f9, 0x30(r1)
    stfs f9, 0x34(r1)
    stfs f9, 0x38(r1)
    stfs f9, 0x3c(r1)
    stfs f9, 0x380(r26)
    stfs f9, 0x384(r26)
    stfs f9, 0x388(r26)
    stfs f9, 0x38c(r26)
    stfs f9, 0x20(r1)
    stfs f9, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f9, 0x2c(r1)
    stfs f9, 0x390(r26)
    stfs f9, 0x394(r26)
    stfs f9, 0x398(r26)
    stfs f9, 0x39c(r26)
    stfs f9, 0x10(r1)
    stfs f9, 0x14(r1)
    stfs f9, 0x18(r1)
    stfs f9, 0x1c(r1)
    stfs f9, 0x70(r1)
    addi r27, r1, 0x8c
    addi r7, r1, 0x70
    lfs f5, lbl_80887BE4
    stfs f8, 0x74(r1)
    addi r8, r1, 0x60
    addi r9, r1, 0x50
    lfs f6, lbl_80887BA4
    psq_l f1, 0x0(r7), 0, 0
    addi r10, r1, 0x40
    lfs f0, lbl_80887BF0
    li r0, 0x2
    lfs f4, lbl_80887BE8
    addi r6, r1, 0x80
    lfs f3, lbl_80887BEC
    mr r3, r27
    stfs f8, 0x78(r1)
    mr r4, r27
    stfs f8, 0x7c(r1)
    psq_l f2, 0x8(r7), 0, 0
    stfs f8, 0x60(r1)
    stfs f9, 0x64(r1)
    psq_st f1, 0x414(r26), 0, 0
    psq_l f1, 0x0(r8), 0, 0
    stfs f8, 0x68(r1)
    stfs f8, 0x6c(r1)
    psq_st f2, 0x41c(r26), 0, 0
    psq_l f2, 0x8(r8), 0, 0
    stfs f8, 0x50(r1)
    stfs f8, 0x54(r1)
    psq_st f1, 0x424(r26), 0, 0
    psq_l f1, 0x0(r9), 0, 0
    stfs f9, 0x58(r1)
    stfs f8, 0x5c(r1)
    psq_st f2, 0x42c(r26), 0, 0
    psq_l f2, 0x8(r9), 0, 0
    stfs f8, 0x40(r1)
    stfs f8, 0x44(r1)
    psq_st f1, 0x434(r26), 0, 0
    psq_l f1, 0x0(r10), 0, 0
    stfs f8, 0x48(r1)
    stfs f8, 0x4c(r1)
    psq_st f2, 0x43c(r26), 0, 0
    psq_l f2, 0x8(r10), 0, 0
    psq_st f2, 0x44c(r26), 0, 0
    fmr f2, f9
    stfs f9, 0x80(r1)
    stfs f0, 0x84(r1)
    psq_st f1, 0x444(r26), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f9, 0x3a0(r26)
    stfs f9, 0x3a4(r26)
    stfs f9, 0x3a8(r26)
    stfs f9, 0x3ac(r26)
    stw r30, 0x3b0(r26)
    stw r30, 0x3b4(r26)
    stw r30, 0x3b8(r26)
    stw r30, 0x3bc(r26)
    stw r30, 0x3c0(r26)
    stw r30, 0x3c4(r26)
    stw r30, 0x3c8(r26)
    stw r30, 0x3cc(r26)
    stw r0, 0x3d0(r26)
    stw r5, 0x3d4(r26)
    stw r31, 0x3d8(r26)
    stw r30, 0x3dc(r26)
    stw r30, 0x3e0(r26)
    stfs f6, 0x3e4(r26)
    stfs f6, 0x3e8(r26)
    stfs f9, 0x3ec(r26)
    stfs f5, 0x3f0(r26)
    stfs f5, 0x3f4(r26)
    stfs f5, 0x3f8(r26)
    stfs f9, 0x3fc(r26)
    stfs f8, 0x400(r26)
    stfs f9, 0x404(r26)
    stfs f8, 0x408(r26)
    stfs f4, 0x40c(r26)
    stw r30, 0x410(r26)
    stw r30, 0x454(r26)
    stw r30, 0x458(r26)
    stfs f9, 0x45c(r26)
    stw r31, 0x460(r26)
    stw r30, 0x464(r26)
    stfs f3, 0x468(r26)
    stfs f7, 0x46c(r26)
    stfs f7, 0x470(r26)
    stfs f7, 0x474(r26)
    stfs f9, 0x478(r26)
    stfs f9, 0x88(r1)
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0x94(r1)
    bl fn_805F98D0
    psq_l f1, 0x0(r27), 0, 0
    addi r3, r26, 0x488
    lfs f2, 0x94(r1)
    stfs f2, 0x484(r26)
    psq_st f1, 0x47c(r26), 0, 0
    bl fn_800BC2E0
    lwz r0, 0x2d4(r28)
    mr r3, r29
    lwz r4, 0x2e8(r28)
    lis r5, 0xff00
    subf r7, r0, r0
    stw r30, 0xbac(r28)
    subf r0, r4, r4
    li r4, 0x1e
    stw r30, 0xbb0(r28)
    li r6, 0x0
    stw r7, 0x2d4(r28)
    stw r30, 0x2dc(r28)
    stw r30, 0x2e0(r28)
    stw r0, 0x2e8(r28)
    bl fn_8006A250
    stw r3, 0x2c8(r28)
    lis r5, 0x3b9b
    lis r4, 0x100
    lis r0, 0xff00
    stw r30, 0x58(r3)
    subi r8, r5, 0x3601
    subi r6, r4, 0x1
    lfs f0, lbl_80887BF4
    lwz r5, 0x2c8(r28)
    mr r3, r28
    li r4, 0xa
    li r7, 0x1
    stw r31, 0x54(r5)
    li r5, -0x1
    lwz r9, 0x2c8(r28)
    stw r8, 0x5c(r9)
    lwz r8, 0x2c8(r28)
    stw r0, 0x6c(r8)
    lwz r8, 0x2c8(r28)
    stw r0, 0x70(r8)
    lwz r8, 0x2c8(r28)
    stfs f0, 0x74(r8)
    lwz r8, 0x2c8(r28)
    stw r31, 0x48(r8)
    bl fn_8006A5A8
    stw r3, 0x2cc(r28)
    li r4, 0x1
    bl fn_800D246C
    lwz r3, 0x2cc(r28)
    li r0, 0x12
    stw r0, 0x78(r3)
    lwz r3, lbl_8087EFE8
    bl fn_800CDF84
    lwz r0, lbl_80887B84
    addi r4, r1, 0xc
    stw r0, 0xc(r1)
    li r5, 0x1
    lwz r3, lbl_8087EE90
    bl fn_8004829C
    mr r3, r29
    li r4, 0x240
    li r5, 0x480
    li r6, 0x8
    li r7, 0x180
    bl fn_80239798
    mr r3, r28
    bl fn_80490EB8
    mr r3, r28
    bl fn_803EDFBC
    lwz r4, lbl_8087EFA8
    addi r0, r28, 0x3ec
    lfs f3, lbl_80887BB4
    lwz r3, 0x244(r4)
    lwz r9, 0x248(r4)
    lfs f10, 0x24c(r4)
    lfs f9, 0x250(r4)
    lwz r8, 0x254(r4)
    lfs f8, 0x25c(r4)
    lfs f7, lbl_80887BF8
    stw r30, 0x240(r4)
    lfs f0, lbl_80887BB8
    stw r31, 0x258(r4)
    lfs f4, lbl_80887BFC
    stfs f7, 0x260(r4)
    lwz r5, lbl_8087EFA8
    stw r3, 0xc4(r1)
    lwz r3, 0x374(r5)
    stw r3, 0x3ec(r28)
    lwz r7, 0x378(r5)
    stw r7, 0x3f0(r28)
    lwz r4, 0x37c(r5)
    lwz r3, 0x380(r5)
    stw r3, 0x3f8(r28)
    stw r4, 0x3f4(r28)
    lwz r4, 0x384(r5)
    lwz r3, 0x388(r5)
    stw r3, 0x400(r28)
    stw r4, 0x3fc(r28)
    lfs f6, 0x38c(r5)
    stfs f6, 0x404(r28)
    lfs f5, 0x390(r5)
    stfs f5, 0x408(r28)
    stfs f3, 0x3f4(r28)
    stfs f3, 0x3f8(r28)
    lwz r6, 0x3f4(r28)
    stfs f3, 0x3fc(r28)
    lwz r5, 0x3f8(r28)
    stfs f0, 0x400(r28)
    lwz r4, 0x3fc(r28)
    lwz r3, 0x400(r28)
    stfs f4, 0x40c(r28)
    stw r31, 0x3ec(r28)
    stw r31, 0x410(r28)
    stw r7, 0x414(r28)
    stw r6, 0x418(r28)
    stw r5, 0x41c(r28)
    stw r4, 0x420(r28)
    stw r3, 0x424(r28)
    stfs f6, 0x428(r28)
    stfs f5, 0x42c(r28)
    stfs f4, 0x430(r28)
    stw r0, 0x434(r28)
    lwz r3, lbl_8087F0A8
    stw r9, 0xc8(r1)
    lwz r0, 0x15c(r3)
    stfs f10, 0xcc(r1)
    cmpwi r0, 0x0
    stfs f9, 0xd0(r1)
    stw r8, 0xd4(r1)
    stfs f8, 0xdc(r1)
    stw r30, 0xc0(r1)
    stw r31, 0xd8(r1)
    stfs f7, 0xe0(r1)
    stfs f3, 0xb0(r1)
    stfs f3, 0xb4(r1)
    stfs f3, 0xb8(r1)
    stfs f0, 0xbc(r1)
    beq lbl_fn_80531F48_00000E90
    li r0, 0x3c
    stw r0, 0x6a4(r28)
    b lbl_fn_80531F48_00000E94
lbl_fn_80531F48_00000E90:
    stw r30, 0x6a4(r28)
lbl_fn_80531F48_00000E94:
    addi r3, r28, 0x6c0
    li r4, 0x0
    li r5, 0x20
    bl memset
    mr r3, r28
    bl fn_803B33F8
    stw r3, 0x6e0(r28)
    addi r3, r1, 0xe8
    addi r4, r1, 0x8
    li r5, -0x1
    bl fn_803B83A4
    addi r3, r1, 0xe8
    bl fn_803B8AC4
    cmpwi r3, 0x0
    beq lbl_fn_80531F48_00000EE8
    lwz r3, 0x6e0(r28)
    addi r4, r1, 0xe8
    lwz r7, 0x8(r1)
    addi r5, r28, 0x6c0
    li r6, 0x20
    bl fn_803B3530
lbl_fn_80531F48_00000EE8:
    lfs f6, lbl_80887BB4
    addi r3, r1, 0xa4
    lfs f5, lbl_80887C00
    addi r4, r1, 0x98
    fmr f2, f6
    lfs f4, lbl_80887BD0
    stfs f6, 0xa4(r1)
    lfs f3, lbl_80887BAC
    stfs f5, 0xa8(r1)
    lfs f0, lbl_80887BB8
    stfs f2, 0x350(r28)
    fmr f2, f4
    psq_l f1, 0x0(r3), 0, 0
    stfs f6, 0x98(r1)
    stfs f5, 0x9c(r1)
    psq_st f1, 0x348(r28), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x354(r28), 0, 0
    stfs f2, 0x35c(r28)
    stfs f3, 0x360(r28)
    stfs f0, 0x364(r28)
    lwz r3, lbl_8087F420
    stfs f6, 0xac(r1)
    cmpwi r3, 0x0
    stfs f4, 0xa0(r1)
    beq lbl_fn_80531F48_00000F58
    li r0, 0x1
    stw r0, 0xc(r3)
lbl_fn_80531F48_00000F58:
    lwz r3, lbl_8087F018
    cmpwi r3, 0x0
    beq lbl_fn_80531F48_00000F6C
    li r0, 0x1
    stw r0, 0x40e0(r3)
lbl_fn_80531F48_00000F6C:
    psq_l f31, 0x228(r1), 0, 0
    mr r3, r28
    lfd f31, 0x220(r1)
    psq_l f30, 0x218(r1), 0, 0
    lfd f30, 0x210(r1)
    psq_l f29, 0x208(r1), 0, 0
    lfd f29, 0x200(r1)
    addi r11, r1, 0x200
    bl _restgpr_26
    lwz r0, 0x234(r1)
    mtlr r0
    addi r1, r1, 0x230
    blr
}

asm void fn_805327B4(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x94(r1)
    stw r31, 0x8c(r1)
    mr r31, r4
    stw r30, 0x88(r1)
    mr r30, r3
    stw r29, 0x84(r1)
    beq lbl_fn_805327B4_00001288
    lwz r0, 0x2ac(r3)
    lis r4, lbl_80793A20@ha
    addi r4, r4, lbl_80793A20@l
    stw r4, 0x0(r3)
    cmpwi r0, 0x19
    beq lbl_fn_805327B4_00000FE8
    lwz r3, 0x2c8(r3)
    bl fn_800D2338
lbl_fn_805327B4_00000FE8:
    lwz r4, lbl_8087EFA8
    li r6, 0x0
    stw r6, 0x50(r1)
    lwz r3, 0x244(r4)
    lwz r0, 0x248(r4)
    lfs f10, 0x24c(r4)
    lfs f9, 0x250(r4)
    lwz r7, 0x254(r4)
    lfs f8, 0x25c(r4)
    lfs f7, 0x260(r4)
    stw r0, 0x58(r1)
    stw r6, 0x240(r4)
    stw r3, 0x244(r4)
    stw r0, 0x248(r4)
    stfs f10, 0x24c(r4)
    stfs f9, 0x250(r4)
    stw r7, 0x254(r4)
    stw r6, 0x258(r4)
    stfs f8, 0x25c(r4)
    stfs f7, 0x260(r4)
    lwz r5, lbl_8087EFA8
    stw r3, 0x54(r1)
    lwz r4, 0x378(r5)
    lfs f6, 0x37c(r5)
    lfs f5, 0x380(r5)
    lfs f4, 0x384(r5)
    lfs f3, 0x388(r5)
    lfs f2, 0x38c(r5)
    lfs f1, 0x390(r5)
    lfs f0, 0x394(r5)
    stfs f6, 0x10(r1)
    stw r6, 0x374(r5)
    lwz r0, 0x10(r1)
    stw r4, 0x378(r5)
    stfs f5, 0x14(r1)
    stw r0, 0x37c(r5)
    lwz r3, 0x14(r1)
    stfs f4, 0x18(r1)
    stw r3, 0x380(r5)
    lwz r0, 0x18(r1)
    stfs f3, 0x1c(r1)
    stw r0, 0x384(r5)
    lwz r0, 0x1c(r1)
    stw r0, 0x388(r5)
    stfs f2, 0x38c(r5)
    stfs f1, 0x390(r5)
    stfs f0, 0x394(r5)
    stfs f10, 0x5c(r1)
    lwz r3, lbl_8087EE90
    stfs f9, 0x60(r1)
    stw r7, 0x64(r1)
    stfs f8, 0x6c(r1)
    stfs f7, 0x70(r1)
    stw r6, 0x68(r1)
    stw r4, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f5, 0x38(r1)
    stfs f4, 0x3c(r1)
    stfs f3, 0x40(r1)
    stfs f2, 0x44(r1)
    stfs f1, 0x48(r1)
    stfs f0, 0x4c(r1)
    stw r6, 0x2c(r1)
    stw r6, 0x8(r1)
    stw r4, 0xc(r1)
    stfs f2, 0x20(r1)
    stfs f1, 0x24(r1)
    stfs f0, 0x28(r1)
    bl fn_8004895C
    lwz r3, lbl_8087EFE8
    bl fn_800CE368
    lwz r3, lbl_8087F3C0
    cmpwi r3, 0x0
    beq lbl_fn_805327B4_00001114
    bl fn_800D2338
lbl_fn_805327B4_00001114:
    lwz r3, lbl_8087F420
    cmpwi r3, 0x0
    beq lbl_fn_805327B4_00001128
    li r0, 0x0
    stw r0, 0xc(r3)
lbl_fn_805327B4_00001128:
    lwz r3, lbl_8087F018
    cmpwi r3, 0x0
    beq lbl_fn_805327B4_0000113C
    li r0, 0x0
    stw r0, 0x40e0(r3)
lbl_fn_805327B4_0000113C:
    lwz r3, lbl_8087F9A0
    cmpwi r3, 0x0
    beq lbl_fn_805327B4_0000115C
    lwz r0, 0x24(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805327B4_0000115C
    li r0, 0x0
    stw r0, 0x24(r3)
lbl_fn_805327B4_0000115C:
    addic. r3, r30, 0x6ec
    beq lbl_fn_805327B4_00001170
    addi r3, r3, 0x64
    li r4, -0x1
    bl fn_800C1FB4
lbl_fn_805327B4_00001170:
    addic. r3, r30, 0x6a0
    beq lbl_fn_805327B4_0000117C
    bl fn_80470528
lbl_fn_805327B4_0000117C:
    addic. r3, r30, 0x438
    beq lbl_fn_805327B4_0000118C
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_805327B4_0000118C:
    addic. r0, r30, 0x314
    beq lbl_fn_805327B4_000011B0
    lwz r4, 0x314(r30)
    cmpwi r4, 0x0
    beq lbl_fn_805327B4_000011B0
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_805327B4_000011B0
    bl fn_800897D8
lbl_fn_805327B4_000011B0:
    addic. r4, r30, 0x2e4
    beq lbl_fn_805327B4_000011DC
    beq lbl_fn_805327B4_000011DC
    beq lbl_fn_805327B4_000011DC
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_805327B4_000011DC
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_805327B4_000011DC:
    addic. r4, r30, 0x2d0
    beq lbl_fn_805327B4_00001208
    beq lbl_fn_805327B4_00001208
    beq lbl_fn_805327B4_00001208
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_805327B4_00001208
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_805327B4_00001208:
    addic. r29, r30, 0x29c
    beq lbl_fn_805327B4_00001228
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_805327B4_00001228
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_805327B4_00001228:
    addic. r29, r30, 0x290
    beq lbl_fn_805327B4_00001248
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_805327B4_00001248
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_805327B4_00001248:
    addi r3, r30, 0x27c
    li r4, -0x1
    bl fn_8004ADF4
    addi r3, r30, 0x268
    li r4, -0x1
    bl fn_8004ADF4
    addi r3, r30, 0x64
    li r4, -0x1
    bl fn_8004B338
    mr r3, r30
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r31, 0x0
    ble lbl_fn_805327B4_00001288
    mr r3, r30
    bl dtor_80084684
lbl_fn_805327B4_00001288:
    mr r3, r30
    lwz r31, 0x8c(r1)
    lwz r30, 0x88(r1)
    lwz r29, 0x84(r1)
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_80532ABC(void)
{
    nofralloc
    stwu r1, -0x370(r1)
    mflr r0
    stw r0, 0x374(r1)
    addi r11, r1, 0x370
    bl _savegpr_26
    mr r30, r3
    lwz r3, lbl_8087F518
    li r4, 0x0
    bl fn_8046ECDC
    lwz r4, 0x2a8(r30)
    cmpwi r4, 0x0
    bne lbl_fn_80532ABC_000015F4
    lwz r3, 0x6e0(r30)
    lbz r0, 0x154(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80532ABC_000021FC
    lis r3, lbl_8075D5B0@ha
    addi r0, r4, 0x1
    addi r3, r3, lbl_8075D5B0@l
    addi r28, r1, 0x8
    addi r29, r3, 0x1
    stw r0, 0x2a8(r30)
    cmplw r29, r28
    beq lbl_fn_80532ABC_00001324
    mr r3, r29
    bl strlen
    mr r5, r3
    mr r3, r28
    mr r4, r29
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_80532ABC_00001324:
    li r0, 0x1
    stw r0, 0x48(r1)
    mr r3, r30
    addi r4, r1, 0x8
    bl fn_803B27F8
    stw r3, 0x6e4(r30)
    li r0, 0x0
    addi r26, r30, 0x6c0
    stw r0, 0xd64(r3)
    mr r3, r26
    bl fn_803CE448
    mr r3, r26
    bl fn_803CE44C
    cmpwi r3, 0x0
    bne lbl_fn_80532ABC_00001384
    lwz r3, lbl_8087F0A8
    cmpwi r3, 0x0
    beq lbl_fn_80532ABC_00001384
    lhz r0, 0xa(r26)
    clrlwi r0, r0, 31
    stb r0, 0x1140(r3)
    lwz r3, lbl_8087F0A8
    lha r0, 0x8(r26)
    stw r0, 0x113c(r3)
lbl_fn_80532ABC_00001384:
    lwz r0, 0x260(r30)
    cmpwi r0, -0x1
    bne lbl_fn_80532ABC_00001484
    mr r3, r26
    bl fn_803CE44C
    cmpwi r3, 0x0
    bne lbl_fn_80532ABC_000013A8
    lwz r5, 0x0(r26)
    b lbl_fn_80532ABC_000013AC
lbl_fn_80532ABC_000013A8:
    li r5, 0x0
lbl_fn_80532ABC_000013AC:
    lis r4, 0x6
    addi r0, r4, 0x1e68
    cmpw r5, r0
    bge lbl_fn_80532ABC_000013F4
    lis r3, 0x3
    addi r0, r3, 0x1128
    cmpw r5, r0
    bge lbl_fn_80532ABC_000013E0
    lis r3, 0x2
    subi r0, r3, 0x61f0
    cmpw r5, r0
    bge lbl_fn_80532ABC_00001434
    b lbl_fn_80532ABC_00001428
lbl_fn_80532ABC_000013E0:
    lis r3, 0x5
    subi r0, r3, 0x6838
    cmpw r5, r0
    bge lbl_fn_80532ABC_0000144C
    b lbl_fn_80532ABC_00001440
lbl_fn_80532ABC_000013F4:
    lis r3, 0x8
    subi r0, r3, 0x5af8
    cmpw r5, r0
    bge lbl_fn_80532ABC_00001414
    addi r0, r4, 0x3da8
    cmpw r5, r0
    bge lbl_fn_80532ABC_00001464
    b lbl_fn_80532ABC_00001458
lbl_fn_80532ABC_00001414:
    lis r3, 0x9
    addi r0, r3, 0x27c0
    cmpw r5, r0
    bge lbl_fn_80532ABC_0000147C
    b lbl_fn_80532ABC_00001470
lbl_fn_80532ABC_00001428:
    li r0, 0x0
    stw r0, 0x260(r30)
    b lbl_fn_80532ABC_00001484
lbl_fn_80532ABC_00001434:
    li r0, 0x3
    stw r0, 0x260(r30)
    b lbl_fn_80532ABC_00001484
lbl_fn_80532ABC_00001440:
    li r0, 0x4
    stw r0, 0x260(r30)
    b lbl_fn_80532ABC_00001484
lbl_fn_80532ABC_0000144C:
    li r0, 0x5
    stw r0, 0x260(r30)
    b lbl_fn_80532ABC_00001484
lbl_fn_80532ABC_00001458:
    li r0, 0x6
    stw r0, 0x260(r30)
    b lbl_fn_80532ABC_00001484
lbl_fn_80532ABC_00001464:
    li r0, 0x7
    stw r0, 0x260(r30)
    b lbl_fn_80532ABC_00001484
lbl_fn_80532ABC_00001470:
    li r0, 0x8
    stw r0, 0x260(r30)
    b lbl_fn_80532ABC_00001484
lbl_fn_80532ABC_0000147C:
    li r0, 0x2
    stw r0, 0x260(r30)
lbl_fn_80532ABC_00001484:
    lwz r3, lbl_8087F0A8
    lwz r0, 0x194(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80532ABC_0000149C
    li r0, 0x0
    stw r0, 0x260(r30)
lbl_fn_80532ABC_0000149C:
    lis r4, lbl_8075D5B0@ha
    lwz r5, 0x260(r30)
    addi r4, r4, lbl_8075D5B0@l
    addi r3, r1, 0x250
    addi r4, r4, 0x3
    crclr 6
    bl sprintf
    lwz r3, lbl_8087F420
    cmpwi r3, 0x0
    beq lbl_fn_80532ABC_000014D0
    li r0, 0x1
    stw r0, 0x18(r3)
    stw r0, 0x1c(r3)
lbl_fn_80532ABC_000014D0:
    addi r3, r30, 0x6a0
    addi r4, r1, 0x250
    li r5, 0x0
    li r6, 0x0
    bl fn_8047043C
    lwz r3, lbl_8087F420
    cmpwi r3, 0x0
    beq lbl_fn_80532ABC_000014FC
    li r0, 0x0
    stw r0, 0x18(r3)
    stw r0, 0x1c(r3)
lbl_fn_80532ABC_000014FC:
    lis r28, lbl_8075D5B0@ha
    addi r3, r30, 0x290
    addi r28, r28, lbl_8075D5B0@l
    addi r4, r28, 0x18
    bl fn_8023780C
    addi r3, r30, 0x29c
    addi r4, r28, 0x26
    bl fn_8023780C
    mr r3, r30
    addi r4, r28, 0x34
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x48(r30)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r30
    addi r4, r28, 0x5b
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x4c(r30)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r30
    addi r4, r28, 0x85
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x50(r30)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r30
    addi r4, r28, 0xa5
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x54(r30)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r30
    addi r4, r28, 0xd4
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x58(r30)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r30
    addi r4, r28, 0x105
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x60(r30)
    li r4, 0x1
    bl fn_800D246C
    lwz r5, 0x260(r30)
    addi r3, r1, 0x150
    addi r4, r28, 0x124
    crclr 6
    bl sprintf
    lwz r12, 0x438(r30)
    addi r3, r30, 0x438
    addi r4, r1, 0x150
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    b lbl_fn_80532ABC_000021FC
lbl_fn_80532ABC_000015F4:
    cmpwi r4, 0x1
    bne lbl_fn_80532ABC_00001774
    mr r3, r30
    bl fn_800D3FA4
    cmpwi r3, 0x0
    beq lbl_fn_80532ABC_000021FC
    li r3, 0x0
    bl fn_800C310C
    cmpwi r3, 0x0
    bne lbl_fn_80532ABC_000021FC
    addi r3, r30, 0x438
    bl fn_80473F50
    cmpwi r3, 0x0
    bne lbl_fn_80532ABC_000021FC
    addi r3, r30, 0x290
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_80532ABC_000021FC
    addi r3, r30, 0x29c
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_80532ABC_000021FC
    lwz r4, 0x2a8(r30)
    mr r3, r30
    addi r0, r4, 0x1
    stw r0, 0x2a8(r30)
    bl fn_80536CAC
    lis r4, lbl_8075D5B0@ha
    addi r3, r30, 0x268
    addi r4, r4, lbl_8075D5B0@l
    li r5, 0x0
    addi r4, r4, 0x147
    bl fn_8004AE84
    mr r3, r30
    addi r4, r30, 0x4a0
    bl fn_8049D68C
    stw r3, 0x258(r30)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r30
    addi r4, r30, 0x5a0
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x5c(r30)
    li r4, 0x1
    bl fn_800D246C
    addi r3, r30, 0x368
    psq_l f1, 0x440(r30), 0, 0
    lfs f2, 0x448(r30)
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x44c(r30), 0, 0
    stfs f2, 0x370(r30)
    lfs f2, 0x454(r30)
    psq_st f1, 0xc(r3), 0, 0
    lfs f12, 0x458(r30)
    stfs f2, 0x37c(r30)
    psq_l f1, 0x440(r30), 0, 0
    lfs f2, 0x448(r30)
    psq_st f1, 0x388(r30), 0, 0
    psq_l f1, 0x44c(r30), 0, 0
    stfs f2, 0x390(r30)
    lfs f2, 0x454(r30)
    psq_st f1, 0x394(r30), 0, 0
    psq_l f1, 0x460(r30), 0, 0
    stfs f2, 0x39c(r30)
    lfs f2, 0x468(r30)
    psq_st f1, 0x3a8(r30), 0, 0
    psq_l f1, 0x46c(r30), 0, 0
    stfs f2, 0x3b0(r30)
    lfs f2, 0x474(r30)
    psq_st f1, 0x3b4(r30), 0, 0
    psq_l f1, 0x480(r30), 0, 0
    stfs f2, 0x3bc(r30)
    lfs f2, 0x488(r30)
    psq_st f1, 0x3c8(r30), 0, 0
    lfs f11, 0x45c(r30)
    stfs f2, 0x3d0(r30)
    lfs f10, 0x478(r30)
    lfs f9, 0x47c(r30)
    psq_l f1, 0x48c(r30), 0, 0
    lfs f2, 0x494(r30)
    lfs f8, 0x498(r30)
    lfs f7, 0x49c(r30)
    lfs f0, lbl_80887BB8
    stfs f12, 0x380(r30)
    stfs f12, 0x3a0(r30)
    stfs f11, 0x3a4(r30)
    stfs f10, 0x3c0(r30)
    stfs f9, 0x3c4(r30)
    psq_st f1, 0x3d4(r30), 0, 0
    stfs f2, 0x3dc(r30)
    stfs f8, 0x3e0(r30)
    stfs f7, 0x3e4(r30)
    stfs f0, 0x384(r30)
    stw r3, 0x3e8(r30)
    b lbl_fn_80532ABC_000021FC
lbl_fn_80532ABC_00001774:
    cmpwi r4, 0x2
    bne lbl_fn_80532ABC_00001D1C
    mr r3, r30
    li r26, 0x1
    bl fn_800D3FA4
    cmpwi r3, 0x0
    beq lbl_fn_80532ABC_000017C4
    addi r3, r30, 0x268
    bl fn_8004B0E4
    cmpwi r3, 0x0
    bne lbl_fn_80532ABC_000017C4
    addi r3, r30, 0x27c
    bl fn_8004B0E4
    cmpwi r3, 0x0
    bne lbl_fn_80532ABC_000017C4
    lwz r3, 0x258(r30)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_80532ABC_000017C8
lbl_fn_80532ABC_000017C4:
    li r26, 0x0
lbl_fn_80532ABC_000017C8:
    cmpwi r26, 0x0
    beq lbl_fn_80532ABC_000021FC
    lwz r3, 0x258(r30)
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x258(r30)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, lbl_8087EFB4
    bl fn_800C16B4
    mr r31, r3
    addi r3, r30, 0x750
    mr r4, r31
    bl fn_804741C0
    lwz r0, 0x8(r31)
    addi r3, r30, 0x7a8
    stw r0, 0x758(r30)
    addi r4, r31, 0x58
    lwz r5, 0xc(r31)
    lwz r0, 0x10(r31)
    stw r0, 0x760(r30)
    stw r5, 0x75c(r30)
    lwz r5, 0x14(r31)
    lwz r0, 0x18(r31)
    stw r0, 0x768(r30)
    stw r5, 0x764(r30)
    lwz r5, 0x1c(r31)
    lwz r0, 0x20(r31)
    stw r0, 0x770(r30)
    stw r5, 0x76c(r30)
    lwz r5, 0x24(r31)
    lwz r0, 0x28(r31)
    stw r0, 0x778(r30)
    stw r5, 0x774(r30)
    lwz r5, 0x2c(r31)
    lwz r0, 0x30(r31)
    stw r0, 0x780(r30)
    stw r5, 0x77c(r30)
    lwz r5, 0x34(r31)
    lwz r0, 0x38(r31)
    stw r0, 0x788(r30)
    stw r5, 0x784(r30)
    lwz r5, 0x3c(r31)
    lwz r0, 0x40(r31)
    stw r0, 0x790(r30)
    stw r5, 0x78c(r30)
    lwz r5, 0x44(r31)
    lwz r0, 0x48(r31)
    stw r0, 0x798(r30)
    stw r5, 0x794(r30)
    lwz r5, 0x4c(r31)
    lwz r0, 0x50(r31)
    stw r0, 0x7a0(r30)
    stw r5, 0x79c(r30)
    lwz r0, 0x54(r31)
    stw r0, 0x7a4(r30)
    bl fn_8052E984
    addi r3, r30, 0x7b4
    addi r4, r31, 0x64
    bl fn_8052EEC0
    lwz r0, 0x70(r31)
    addi r3, r30, 0x7c8
    stw r0, 0x7c0(r30)
    addi r4, r31, 0x78
    lwz r0, 0x74(r31)
    stw r0, 0x7c4(r30)
    bl fn_8052F890
    lwz r0, 0xc8(r31)
    addi r3, r30, 0x820
    stw r0, 0x818(r30)
    addi r4, r31, 0xd0
    lwz r0, 0xcc(r31)
    stw r0, 0x81c(r30)
    bl fn_8052F890
    lwz r0, 0x120(r31)
    addi r6, r30, 0x874
    stw r0, 0x870(r30)
    addi r5, r30, 0x8a4
    addi r3, r30, 0x8b4
    addi r4, r31, 0x164
    psq_l f1, 0x124(r31), 0, 0
    psq_l f2, 0x12c(r31), 0, 0
    psq_l f3, 0x134(r31), 0, 0
    psq_l f4, 0x13c(r31), 0, 0
    psq_l f5, 0x144(r31), 0, 0
    psq_l f6, 0x14c(r31), 0, 0
    psq_st f6, 0x28(r6), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    psq_st f2, 0x8(r6), 0, 0
    psq_st f3, 0x10(r6), 0, 0
    psq_st f4, 0x18(r6), 0, 0
    psq_st f5, 0x20(r6), 0, 0
    psq_l f1, 0x154(r31), 0, 0
    lfs f2, 0x15c(r31)
    stfs f2, 0x8ac(r30)
    psq_st f1, 0x0(r5), 0, 0
    lfs f0, 0x160(r31)
    stfs f0, 0x8b0(r30)
    bl fn_8052E8D8
    lwz r0, 0x194(r31)
    addi r3, r30, 0x8e8
    stw r0, 0x8e4(r30)
    addi r4, r31, 0x198
    bl fn_8052BBF0
    lwz r0, 0x1e0(r31)
    addi r3, r30, 0x948
    stw r0, 0x930(r30)
    addi r4, r31, 0x1f8
    lwz r5, 0x1e4(r31)
    lwz r0, 0x1e8(r31)
    stw r0, 0x938(r30)
    stw r5, 0x934(r30)
    lwz r5, 0x1ec(r31)
    lwz r0, 0x1f0(r31)
    stw r0, 0x940(r30)
    stw r5, 0x93c(r30)
    lwz r0, 0x1f4(r31)
    stw r0, 0x944(r30)
    bl fn_8047C7FC
    lwz r0, 0x234(r31)
    addi r6, r30, 0x9a4
    stw r0, 0x984(r30)
    addi r3, r30, 0x9b4
    addi r4, r31, 0x264
    lwz r0, 0x238(r31)
    stw r0, 0x988(r30)
    lwz r0, 0x23c(r31)
    stw r0, 0x98c(r30)
    lfs f0, 0x240(r31)
    stfs f0, 0x990(r30)
    lwz r5, 0x244(r31)
    lwz r0, 0x248(r31)
    stw r0, 0x998(r30)
    stw r5, 0x994(r30)
    lwz r5, 0x24c(r31)
    lwz r0, 0x250(r31)
    stw r0, 0x9a0(r30)
    stw r5, 0x99c(r30)
    psq_l f1, 0x254(r31), 0, 0
    lfs f2, 0x25c(r31)
    stfs f2, 0x9ac(r30)
    psq_st f1, 0x0(r6), 0, 0
    lwz r0, 0x260(r31)
    stw r0, 0x9b0(r30)
    bl fn_80453DBC
    lwz r5, lbl_8087EFA8
    addi r4, r30, 0xb68
    lwz r0, 0x104(r5)
    stw r0, 0xb4c(r30)
    lwz r0, 0x108(r5)
    stw r0, 0xb50(r30)
    lfs f0, 0x10c(r5)
    stfs f0, 0xb54(r30)
    lwz r3, 0x110(r5)
    lwz r0, 0x114(r5)
    stw r0, 0xb5c(r30)
    stw r3, 0xb58(r30)
    lwz r3, 0x118(r5)
    lwz r0, 0x11c(r5)
    stw r0, 0xb64(r30)
    stw r3, 0xb60(r30)
    psq_l f1, 0x120(r5), 0, 0
    lfs f2, 0x128(r5)
    stfs f2, 0xb70(r30)
    psq_st f1, 0x0(r4), 0, 0
    lwz r3, lbl_8087EFA8
    lfs f0, 0x3c(r3)
    stfs f0, 0x730(r30)
    lfs f0, 0x40(r3)
    stfs f0, 0x734(r30)
    lfs f0, 0x44(r3)
    stfs f0, 0x738(r30)
    lfs f0, 0x48(r3)
    stfs f0, 0x73c(r30)
    lwz r3, lbl_8087EFA8
    lwz r0, 0x54(r3)
    stw r0, 0xa34(r30)
    lwz r0, 0x58(r3)
    stw r0, 0xa38(r30)
    lwz r0, 0x5c(r3)
    stw r0, 0xa3c(r30)
    lwz r0, 0x60(r3)
    stw r0, 0xa40(r30)
    lwz r0, 0x64(r3)
    stw r0, 0xa44(r30)
    lfs f0, 0x68(r3)
    stfs f0, 0xa48(r30)
    lfs f0, 0x6c(r3)
    stfs f0, 0xa4c(r30)
    lfs f0, 0x70(r3)
    stfs f0, 0xa50(r30)
    lfs f0, 0x74(r3)
    stfs f0, 0xa54(r30)
    lwz r4, 0x78(r3)
    lwz r0, 0x7c(r3)
    stw r0, 0xa5c(r30)
    stw r4, 0xa58(r30)
    lwz r4, 0x80(r3)
    lwz r0, 0x84(r3)
    stw r0, 0xa64(r30)
    stw r4, 0xa60(r30)
    lwz r0, 0x88(r3)
    stw r0, 0xa68(r30)
    lwz r4, 0x8c(r3)
    lwz r0, 0x90(r3)
    stw r0, 0xa70(r30)
    stw r4, 0xa6c(r30)
    lwz r4, 0x94(r3)
    lwz r0, 0x98(r3)
    stw r0, 0xa78(r30)
    stw r4, 0xa74(r30)
    lwz r4, 0x9c(r3)
    lwz r0, 0xa0(r3)
    stw r0, 0xa80(r30)
    stw r4, 0xa7c(r30)
    lwz r4, 0xa4(r3)
    lwz r0, 0xa8(r3)
    stw r0, 0xa88(r30)
    stw r4, 0xa84(r30)
    lwz r4, 0xac(r3)
    lwz r0, 0xb0(r3)
    stw r0, 0xa90(r30)
    stw r4, 0xa8c(r30)
    lwz r4, 0xb4(r3)
    lwz r0, 0xb8(r3)
    stw r0, 0xa98(r30)
    stw r4, 0xa94(r30)
    lwz r4, 0xbc(r3)
    addi r5, r30, 0xb00
    lwz r0, 0xc0(r3)
    addi r6, r30, 0xb10
    stw r0, 0xaa0(r30)
    addi r7, r30, 0xb20
    addi r8, r30, 0xb30
    stw r4, 0xa9c(r30)
    lwz r0, 0xc4(r3)
    stw r0, 0xaa4(r30)
    lwz r4, 0xc8(r3)
    lwz r0, 0xcc(r3)
    stw r0, 0xaac(r30)
    stw r4, 0xaa8(r30)
    lwz r0, 0xd0(r3)
    stw r0, 0xab0(r30)
    lwz r3, lbl_8087EFA8
    lwz r0, 0xd4(r3)
    stw r0, 0xa04(r30)
    lwz r0, 0xd8(r3)
    stw r0, 0xa08(r30)
    lwz r0, 0xdc(r3)
    stw r0, 0xa0c(r30)
    lwz r0, 0xe0(r3)
    stw r0, 0xa10(r30)
    lfs f0, 0xe4(r3)
    stfs f0, 0xa14(r30)
    lfs f0, 0xe8(r3)
    stfs f0, 0xa18(r30)
    lfs f0, 0xec(r3)
    stfs f0, 0xa1c(r30)
    lfs f0, 0xf0(r3)
    stfs f0, 0xa20(r30)
    lwz r0, 0xf4(r3)
    stw r0, 0xa24(r30)
    lwz r0, 0xf8(r3)
    stw r0, 0xa28(r30)
    lfs f0, 0xfc(r3)
    stfs f0, 0xa2c(r30)
    lfs f0, 0x100(r3)
    stfs f0, 0xa30(r30)
    lwz r3, lbl_8087EFA8
    lwz r0, 0x324(r3)
    stw r0, 0xafc(r30)
    psq_l f1, 0x328(r3), 0, 0
    psq_l f2, 0x330(r3), 0, 0
    psq_st f2, 0x8(r5), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    psq_l f1, 0x338(r3), 0, 0
    psq_l f2, 0x340(r3), 0, 0
    psq_st f2, 0x8(r6), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    psq_l f1, 0x348(r3), 0, 0
    psq_l f2, 0x350(r3), 0, 0
    psq_st f2, 0x8(r7), 0, 0
    psq_st f1, 0x0(r7), 0, 0
    psq_l f1, 0x358(r3), 0, 0
    psq_l f2, 0x360(r3), 0, 0
    psq_st f2, 0x8(r8), 0, 0
    psq_st f1, 0x0(r8), 0, 0
    lwz r0, 0x368(r3)
    stw r0, 0xb40(r30)
    lwz r0, 0x36c(r3)
    stw r0, 0xb44(r30)
    lfs f0, 0x370(r3)
    stfs f0, 0xb48(r30)
    lwz r4, lbl_8087EFA8
    lwz r0, 0x3dc(r4)
    stw r0, 0xb74(r30)
    lwz r0, 0x3e0(r4)
    stw r0, 0xb78(r30)
    lfs f0, 0x3e4(r4)
    stfs f0, 0xb7c(r30)
    lwz r3, 0x3e8(r4)
    lwz r0, 0x3ec(r4)
    stw r0, 0xb84(r30)
    stw r3, 0xb80(r30)
    lwz r3, 0x3f0(r4)
    lwz r0, 0x3f4(r4)
    stw r0, 0xb8c(r30)
    stw r3, 0xb88(r30)
    lwz r3, 0x3f8(r4)
    lwz r0, 0x3fc(r4)
    stw r0, 0xb94(r30)
    stw r3, 0xb90(r30)
    lwz r3, 0x400(r4)
    lwz r0, 0x404(r4)
    stw r0, 0xb9c(r30)
    stw r3, 0xb98(r30)
    lfs f0, 0x408(r4)
    stfs f0, 0xba0(r30)
    lfs f0, 0x40c(r4)
    stfs f0, 0xba4(r30)
    lwz r3, lbl_8087EFB4
    lwz r3, 0x10(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80532ABC_00001CE8
    lwz r0, 0x4(r3)
    stw r0, 0xba8(r30)
    b lbl_fn_80532ABC_00001CF0
lbl_fn_80532ABC_00001CE8:
    li r0, 0x0
    stw r0, 0xba8(r30)
lbl_fn_80532ABC_00001CF0:
    lis r4, lbl_8075D5B0@ha
    li r0, 0x3
    addi r4, r4, lbl_8075D5B0@l
    stw r0, 0x2a8(r30)
    mr r3, r30
    addi r4, r4, 0x153
    bl fn_8049D68C
    stw r3, 0x25c(r30)
    li r4, 0x1
    bl fn_800D246C
    b lbl_fn_80532ABC_000021FC
lbl_fn_80532ABC_00001D1C:
    cmpwi r4, 0x3
    bne lbl_fn_80532ABC_000021FC
    lwz r3, 0x25c(r30)
    li r4, 0x1
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_80532ABC_00001D40
    li r4, 0x0
lbl_fn_80532ABC_00001D40:
    cmpwi r4, 0x0
    beq lbl_fn_80532ABC_000021FC
    li r4, 0x0
    bl fn_800D246C
    addi r3, r30, 0x6a0
    bl fn_80470528
    mr r3, r30
    li r4, 0x1
    bl fn_80533BE0
    lwz r3, 0x5c(r30)
    lis r28, lbl_8075D5B0@ha
    addi r28, r28, lbl_8075D5B0@l
    addi r4, r28, 0x164
    addi r3, r3, 0x58
    bl fn_801FEB9C
    li r4, 0x0
    addi r3, r3, 0x4
    bl fn_801F0544
    lwz r3, 0x5c(r30)
    addi r4, r28, 0x16a
    stfs f1, 0x2f0(r30)
    addi r3, r3, 0x58
    bl fn_801FEB9C
    li r4, 0x0
    addi r3, r3, 0x4
    bl fn_801F0544
    lwz r3, 0x5c(r30)
    addi r4, r28, 0x171
    stfs f1, 0x2f4(r30)
    addi r3, r3, 0x58
    bl fn_801FEB9C
    li r4, 0x0
    addi r3, r3, 0x4
    bl fn_801F0544
    lwz r3, 0x5c(r30)
    addi r4, r28, 0x17a
    stfs f1, 0x2f8(r30)
    addi r3, r3, 0x58
    bl fn_801FEB9C
    li r4, 0x0
    addi r3, r3, 0x4
    bl fn_801F0544
    lwz r3, 0x60(r30)
    addi r4, r28, 0x183
    stfs f1, 0x2fc(r30)
    addi r3, r3, 0x58
    bl fn_801FEB9C
    li r4, 0x0
    addi r3, r3, 0x4
    bl fn_801F0544
    lwz r3, 0x60(r30)
    addi r4, r28, 0x18b
    stfs f1, 0x300(r30)
    addi r3, r3, 0x58
    bl fn_801FEB9C
    li r4, 0x0
    addi r3, r3, 0x4
    bl fn_801F0544
    stfs f1, 0x304(r30)
    li r4, 0x0
    lwz r3, 0x5c(r30)
    lwz r0, 0xfc(r3)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r3)
    lwz r3, 0x5c(r30)
    bl fn_800D246C
    lwz r3, 0x60(r30)
    li r4, 0x0
    lwz r0, 0xfc(r3)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r3)
    lwz r3, 0x60(r30)
    bl fn_800D246C
    lwz r3, 0x48(r30)
    li r4, 0x0
    lwz r0, 0xfc(r3)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r3)
    lwz r3, 0x48(r30)
    bl fn_800D246C
    lwz r3, 0x4c(r30)
    li r4, 0x0
    lfs f0, lbl_80887BB4
    lwz r0, 0xfc(r3)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r3)
    lwz r3, 0x4c(r30)
    stfs f0, 0x104(r3)
    lwz r3, 0x4c(r30)
    bl fn_800D246C
    lwz r3, 0x50(r30)
    li r4, 0x0
    lwz r0, 0xfc(r3)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r3)
    lwz r3, 0x50(r30)
    bl fn_800D246C
    lwz r3, 0x54(r30)
    li r4, 0x0
    lwz r0, 0xfc(r3)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r3)
    lwz r3, 0x54(r30)
    bl fn_800D246C
    lwz r3, 0x58(r30)
    li r4, 0x0
    bl fn_800D246C
    lwz r7, lbl_8087F0A8
    li r4, 0x1
    lwz r5, 0x2c8(r30)
    li r3, 0x0
    lis r0, 0xff00
    lfs f8, lbl_80887BF4
    stw r4, 0x60(r5)
    lfs f7, lbl_80887BB4
    lwz r5, 0x2c8(r30)
    lfs f0, lbl_80887BB8
    stw r3, 0x58(r5)
    lwz r6, 0x2c8(r30)
    lwz r5, 0x58c(r7)
    stw r5, 0x54(r6)
    lwz r5, 0x2c8(r30)
    stw r3, 0x5c(r5)
    lwz r5, 0x2c8(r30)
    stw r0, 0x6c(r5)
    lwz r5, 0x2c8(r30)
    stw r3, 0x70(r5)
    lwz r5, 0x2c8(r30)
    stfs f8, 0x74(r5)
    lwz r5, 0x2c8(r30)
    stw r3, 0x4c(r5)
    lwz r3, 0x2c8(r30)
    stw r4, 0x48(r3)
    psq_l f1, 0x368(r30), 0, 0
    lfs f2, 0x370(r30)
    psq_st f1, 0x6c(r30), 0, 0
    psq_l f1, 0x374(r30), 0, 0
    stfs f2, 0x74(r30)
    lfs f2, 0x37c(r30)
    lfs f8, 0x380(r30)
    stfs f7, 0x84(r30)
    stfs f0, 0x88(r30)
    stfs f7, 0x8c(r30)
    psq_st f1, 0x78(r30), 0, 0
    stfs f2, 0x80(r30)
    stfs f8, 0xb4(r30)
    lwz r3, lbl_8087EEE0
    bl fn_80076FF8
    lwz r0, 0x314(r30)
    addi r4, r28, 0x197
    stfs f1, 0xb8(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80532ABC_00001FC4
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_80532ABC_00001FC4
    addi r3, r3, 0x10
    bl fn_8008937C
    stw r3, 0x314(r30)
    mr r29, r3
    b lbl_fn_80532ABC_00001FC8
lbl_fn_80532ABC_00001FC4:
    li r29, 0x0
lbl_fn_80532ABC_00001FC8:
    lis r4, lbl_8075D5B0@ha
    mr r3, r29
    addi r28, r4, lbl_8075D5B0@l
    addi r5, r30, 0x318
    addi r4, r28, 0x1a0
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    lfs f1, lbl_80887C04
    mr r3, r29
    lfs f2, lbl_80887C08
    addi r4, r28, 0x1ab
    lfs f3, lbl_80887BB8
    addi r5, r30, 0x31c
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    lfs f1, lbl_80887C04
    mr r3, r29
    lfs f2, lbl_80887C08
    addi r4, r28, 0x1b5
    lfs f3, lbl_80887BB8
    addi r5, r30, 0x328
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    lfs f1, lbl_80887BB4
    mr r3, r29
    lfs f2, lbl_80887C0C
    addi r4, r28, 0x1c2
    lfs f3, lbl_80887BB8
    addi r5, r30, 0x340
    li r6, 0x0
    li r7, 0x0
    bl fn_80087858
    mr r3, r29
    addi r4, r28, 0x1ce
    addi r5, r30, 0x6a4
    li r6, 0x0
    li r7, 0x2710
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_80887C10
    mr r3, r29
    lfs f2, lbl_80887C14
    addi r4, r28, 0x1d7
    lfs f3, lbl_80887C18
    addi r5, r30, 0x430
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80887BB4
    mr r3, r29
    lfs f2, lbl_80887BE8
    addi r4, r28, 0x1e3
    lfs f3, lbl_80887C1C
    addi r5, r30, 0x344
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    li r31, 0x0
    li r26, 0x0
    lis r29, 0x1062
    b lbl_fn_80532ABC_00002168
lbl_fn_80532ABC_000020D0:
    lwz r0, 0x2d0(r30)
    lwz r3, lbl_8087F4A0
    add r27, r0, r26
    lwzx r4, r26, r0
    lwz r5, 0x4(r27)
    bl fn_803EEE10
    cmpwi r3, 0x0
    beq lbl_fn_80532ABC_00002108
    lwz r12, 0x0(r3)
    lwz r4, 0x8(r27)
    lwz r12, 0x70(r12)
    mtctr r12
    bctrl
    b lbl_fn_80532ABC_00002160
lbl_fn_80532ABC_00002108:
    lwz r0, lbl_8087EEB8
    cmpwi r0, 0x0
    beq lbl_fn_80532ABC_00002160
    lwz r9, 0x0(r27)
    addi r0, r29, 0x4dd3
    lwz r7, 0x4(r27)
    addi r3, r1, 0x50
    mulhw r0, r0, r9
    addi r4, r28, 0x1ed
    srawi r6, r0, 6
    srawi r0, r0, 6
    srwi r5, r0, 31
    srwi r8, r6, 31
    add r0, r0, r5
    mulli r0, r0, 0x3e8
    add r5, r6, r8
    subf r6, r0, r9
    crclr 6
    bl sprintf
    lwz r3, lbl_8087EEB8
    addi r4, r1, 0x50
    bl fn_800697D8
lbl_fn_80532ABC_00002160:
    addi r26, r26, 0x10
    addi r31, r31, 0x1
lbl_fn_80532ABC_00002168:
    lwz r0, 0x2d4(r30)
    cmplw r31, r0
    blt lbl_fn_80532ABC_000020D0
    li r0, 0x1
    stw r0, 0x2c4(r30)
    li r26, 0x0
    li r27, 0x0
lbl_fn_80532ABC_00002184:
    lwz r0, 0x6e4(r30)
    add r3, r0, r27
    addi r3, r3, 0x4c
    bl fn_803BEAB4
    cmpwi r3, 0x0
    beq lbl_fn_80532ABC_000021A8
    li r0, 0x0
    stw r0, 0x2c4(r30)
    b lbl_fn_80532ABC_000021B8
lbl_fn_80532ABC_000021A8:
    addi r26, r26, 0x1
    addi r27, r27, 0xb8
    cmpwi r26, 0x11
    blt lbl_fn_80532ABC_00002184
lbl_fn_80532ABC_000021B8:
    lwz r3, 0x6e0(r30)
    bl fn_803B8144
    cmpwi r3, 0x0
    beq lbl_fn_80532ABC_000021D8
    lwz r3, 0x6e0(r30)
    bl fn_800D2338
    li r0, 0x0
    stw r0, 0x6e0(r30)
lbl_fn_80532ABC_000021D8:
    lwz r0, 0x2c4(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80532ABC_000021F4
    lwz r3, 0x6e4(r30)
    bl fn_800D2338
    li r0, 0x0
    stw r0, 0x6e4(r30)
lbl_fn_80532ABC_000021F4:
    li r3, 0x1
    b lbl_fn_80532ABC_00002200
lbl_fn_80532ABC_000021FC:
    li r3, 0x0
lbl_fn_80532ABC_00002200:
    addi r11, r1, 0x370
    bl _restgpr_26
    lwz r0, 0x374(r1)
    mtlr r0
    addi r1, r1, 0x370
    blr
}
