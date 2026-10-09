#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_21(void);
extern void _savegpr_21(void);
extern void fn_8004B378(void);
extern void fn_8004D388(void);
extern void fn_8004ED34(void);
extern void fn_800A55D4(void);
extern void fn_800A56A8(void);
extern void fn_800A58D0(void);
extern void fn_80116BD4(void);
extern void fn_8015EB2C(void);
extern void fn_80178088(void);
extern void fn_8037F830(void);
extern void fn_80387DE4(void);
extern void fn_803918EC(void);
extern void fn_803920C8(void);
extern void fn_80392510(void);
extern void fn_803928C0(void);
extern void fn_80392A04(void);
extern void fn_80392FE8(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_8068A850(void);
extern void fn_8068AD58(void);
extern void fn_8068AEA0(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);
extern void fn_8068B100(void);

/* External data declarations */
extern u8 lbl_8074E008[];
extern u8 lbl_8074E010[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087EF70;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F610;
extern u32 lbl_8087F9C0;
extern u32 lbl_808858E8;
extern u32 lbl_808858EC;
extern u32 lbl_808858F8;
extern u32 lbl_808858FC;
extern u32 lbl_80885904;
extern u32 lbl_80885910;
extern u32 lbl_80885914;
extern u32 lbl_80885918;
extern u32 lbl_80885920;
extern u32 lbl_8088592C;
extern u32 lbl_80885934;
extern u32 lbl_8088593C;
extern u32 lbl_80885950;
extern u32 lbl_80885954;
extern u32 lbl_80885958;
extern u32 lbl_8088595C;
extern u32 lbl_8088599C;
extern u32 lbl_808859A4;
extern u32 lbl_808859C4;
extern u32 lbl_808859C8;
extern u32 lbl_808859CC;
extern u32 lbl_808859D0;
extern u32 lbl_808859D4;
extern u32 lbl_808859D8;
extern u32 lbl_808859DC;
extern u32 lbl_808859E0;
extern u32 lbl_808859E4;
extern u32 lbl_808859E8;
extern u32 lbl_808859EC;
extern u32 lbl_808859F0;
extern u32 lbl_808859F4;
extern u32 lbl_808859F8;
extern u32 lbl_808859FC;
extern u32 lbl_80885A00;
extern u32 lbl_80885A04;
extern u32 lbl_80885A08;
extern u32 lbl_80885A0C;
extern u32 lbl_80885A10;
extern u32 lbl_80885A14;
extern u32 lbl_80885A18;
extern u32 lbl_80885A1C;
extern u32 lbl_80885A20;
extern u32 lbl_80885A24;
extern u32 lbl_80885A28;
extern u32 lbl_80885A2C;
extern u32 lbl_80885A30;
extern u32 lbl_80885A34;
extern u32 lbl_80885A38;
extern u32 lbl_80885A3C;
extern u32 lbl_80885A40;
extern u32 lbl_80885A44;

/* Function declarations */
void fn_8037F9AC(void);

asm void fn_8037F9AC(void)
{
    nofralloc
    stwu r1, -0xce0(r1)
    mflr r0
    stw r0, 0xce4(r1)
    li r0, 0xcd8
    addi r11, r1, 0xc60
    stfd f31, 0xcd0(r1)
    psq_stx f31, r1, r0, 0, 0
    li r0, 0xcc8
    stfd f30, 0xcc0(r1)
    psq_stx f30, r1, r0, 0, 0
    li r0, 0xcb8
    stfd f29, 0xcb0(r1)
    psq_stx f29, r1, r0, 0, 0
    li r0, 0xca8
    stfd f28, 0xca0(r1)
    psq_stx f28, r1, r0, 0, 0
    li r0, 0xc98
    stfd f27, 0xc90(r1)
    psq_stx f27, r1, r0, 0, 0
    li r0, 0xc88
    stfd f26, 0xc80(r1)
    psq_stx f26, r1, r0, 0, 0
    li r0, 0xc78
    stfd f25, 0xc70(r1)
    psq_stx f25, r1, r0, 0, 0
    li r0, 0xc68
    stfd f24, 0xc60(r1)
    psq_stx f24, r1, r0, 0, 0
    bl _savegpr_21
    lwz r5, lbl_8087F0A8
    lis r6, 0x4330
    stw r6, 0xc18(r1)
    mr r29, r3
    lwz r0, 0x290(r5)
    mr r30, r4
    stw r6, 0xc20(r1)
    cmpwi r0, 0x0
    beq lbl_fn_8037F9AC_000000A0
    bl fn_80387DE4
    b lbl_fn_8037F9AC_00002F9C
lbl_fn_8037F9AC_000000A0:
    lwz r0, 0x7fc(r3)
    addi r31, r3, 0x51c
    cmpwi r0, 0x8
    bne lbl_fn_8037F9AC_000000B4
    addi r31, r3, 0x6c0
lbl_fn_8037F9AC_000000B4:
    lwz r0, 0x424(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8037F9AC_00000118
    lfs f7, 0x428(r3)
    lfs f0, 0x42c(r3)
    lfs f8, lbl_808858E8
    fsubs f0, f7, f0
    stfs f0, 0x428(r3)
    fcmpo cr0, f8, f0
    ble lbl_fn_8037F9AC_000000E0
    b lbl_fn_8037F9AC_000000E4
lbl_fn_8037F9AC_000000E0:
    fmr f8, f0
lbl_fn_8037F9AC_000000E4:
    frsp f1, f8
    stfs f8, 0x428(r3)
    addi r5, r3, 0x430
    mr r4, r31
    addi r3, r3, 0x3e8
    bl fn_8037F830
    lfs f7, 0x428(r29)
    addi r31, r29, 0x3e8
    lfs f0, 0x42c(r29)
    fcmpo cr0, f7, f0
    bge lbl_fn_8037F9AC_00000118
    li r0, 0x0
    stw r0, 0x424(r29)
lbl_fn_8037F9AC_00000118:
    lwz r0, 0x46c(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8037F9AC_00000164
    lfs f7, 0x470(r29)
    lfs f0, 0x474(r29)
    lfs f8, lbl_808858E8
    fsubs f0, f7, f0
    stfs f0, 0x470(r29)
    fcmpo cr0, f8, f0
    ble lbl_fn_8037F9AC_00000144
    b lbl_fn_8037F9AC_00000148
lbl_fn_8037F9AC_00000144:
    fmr f8, f0
lbl_fn_8037F9AC_00000148:
    frsp f1, f8
    stfs f8, 0x470(r29)
    mr r5, r31
    addi r3, r29, 0x3e8
    addi r4, r29, 0x478
    bl fn_8037F830
    addi r31, r29, 0x3e8
lbl_fn_8037F9AC_00000164:
    lfs f2, 0x10(r29)
    addi r4, r1, 0x49c
    psq_l f1, 0x8(r29), 0, 0
    addi r5, r1, 0x490
    li r0, 0x2
    psq_st f1, 0x0(r4), 0, 0
    lfs f7, lbl_808858E8
    li r6, 0x0
    stfs f2, 0x4a4(r1)
    li r3, 0x0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x498(r1)
    mtctr r0
lbl_fn_8037F9AC_00000198:
    add r5, r29, r3
    lfsu f0, 0x98c(r5)
    fcmpu cr0, f7, f0
    bne lbl_fn_8037F9AC_000001B8
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    lfs f2, 0x4a4(r1)
    stfs f2, 0x8(r5)
lbl_fn_8037F9AC_000001B8:
    addi r3, r3, 0xc
    add r5, r29, r3
    lfsu f0, 0x98c(r5)
    fcmpu cr0, f7, f0
    bne lbl_fn_8037F9AC_000001DC
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    lfs f2, 0x4a4(r1)
    stfs f2, 0x8(r5)
lbl_fn_8037F9AC_000001DC:
    addi r3, r3, 0xc
    add r5, r29, r3
    lfsu f0, 0x98c(r5)
    fcmpu cr0, f7, f0
    bne lbl_fn_8037F9AC_00000200
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    lfs f2, 0x4a4(r1)
    stfs f2, 0x8(r5)
lbl_fn_8037F9AC_00000200:
    addi r3, r3, 0xc
    add r5, r29, r3
    lfsu f0, 0x98c(r5)
    fcmpu cr0, f7, f0
    bne lbl_fn_8037F9AC_00000224
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    lfs f2, 0x4a4(r1)
    stfs f2, 0x8(r5)
lbl_fn_8037F9AC_00000224:
    addi r6, r6, 0x3
    addi r3, r3, 0xc
    bdnz lbl_fn_8037F9AC_00000198
    li r6, 0x7
    li r3, 0x54
    mtctr r6
lbl_fn_8037F9AC_0000023C:
    subi r0, r6, 0x1
    add r4, r29, r3
    mulli r0, r0, 0xc
    subi r6, r6, 0x1
    addi r5, r4, 0x98c
    subi r3, r3, 0xc
    add r4, r29, r0
    addi r4, r4, 0x98c
    lfs f2, 0x8(r4)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x8(r5)
    bdnz lbl_fn_8037F9AC_0000023C
    lwz r0, 0x880(r29)
    cmpwi r0, 0x0
    ble lbl_fn_8037F9AC_00000294
    addi r4, r29, 0x978
    lfs f2, 0x980(r29)
    psq_l f1, 0x0(r4), 0, 0
    addi r3, r1, 0x490
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x498(r1)
lbl_fn_8037F9AC_00000294:
    addi r5, r29, 0x868
    lfs f2, 0x870(r29)
    psq_l f1, 0x0(r5), 0, 0
    addi r4, r1, 0x484
    psq_st f1, 0x0(r4), 0, 0
    addi r3, r1, 0x46c
    lfs f0, 0x498(r1)
    lfs f9, 0x488(r1)
    fsubs f10, f2, f0
    lfs f8, 0x494(r1)
    lfs f7, 0x484(r1)
    lfs f0, 0x490(r1)
    fsubs f8, f9, f8
    stfs f2, 0x48c(r1)
    fsubs f0, f7, f0
    stfs f8, 0x470(r1)
    stfs f0, 0x46c(r1)
    stfs f10, 0x474(r1)
    bl fn_805F9940
    lfs f0, lbl_808859DC
    lfs f29, 0x50(r29)
    fcmpo cr0, f1, f0
    ble lbl_fn_8037F9AC_00000300
    addi r3, r1, 0x46c
    mr r4, r3
    bl fn_805F98D0
    b lbl_fn_8037F9AC_00000324
lbl_fn_8037F9AC_00000300:
    lfs f8, 0x498(r1)
    lfs f0, lbl_808858F8
    lfs f7, lbl_808858E8
    fadds f8, f8, f0
    lfs f0, lbl_80885904
    stfs f7, 0x46c(r1)
    stfs f8, 0x498(r1)
    stfs f7, 0x470(r1)
    stfs f0, 0x474(r1)
lbl_fn_8037F9AC_00000324:
    lfs f7, 0x474(r1)
    addi r3, r1, 0x364
    lfs f0, 0x470(r1)
    addi r28, r1, 0x460
    fneg f8, f7
    lfs f7, 0x46c(r1)
    fneg f9, f0
    lfs f0, lbl_808859C8
    fneg f7, f7
    stfs f8, 0x36c(r1)
    frsp f2, f8
    stfs f7, 0x364(r1)
    stfs f9, 0x368(r1)
    fabs f7, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    frsp f7, f7
    stfs f2, 0x468(r1)
    fcmpo cr0, f7, f0
    bge lbl_fn_8037F9AC_00000398
    lfs f7, 0x460(r1)
    lfs f0, lbl_808858E8
    fcmpo cr0, f7, f0
    ble lbl_fn_8037F9AC_0000038C
    lfs f0, lbl_808859CC
    b lbl_fn_8037F9AC_00000390
lbl_fn_8037F9AC_0000038C:
    lfs f0, lbl_808859D0
lbl_fn_8037F9AC_00000390:
    stfs f0, 0x188(r1)
    b lbl_fn_8037F9AC_000003AC
lbl_fn_8037F9AC_00000398:
    frsp f2, f2
    lfs f1, 0x460(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x188(r1)
lbl_fn_8037F9AC_000003AC:
    lfs f0, 0x188(r1)
    addi r3, r1, 0x838
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f7, lbl_808858E8
    addi r4, r1, 0x178
    lfs f30, 0x840(r1)
    mr r5, r4
    lfs f28, 0x83c(r1)
    addi r3, r1, 0x868
    lfs f27, 0x838(r1)
    lfs f26, 0x850(r1)
    lfs f25, 0x84c(r1)
    lfs f24, 0x848(r1)
    lfs f13, 0x860(r1)
    lfs f12, 0x85c(r1)
    lfs f11, 0x858(r1)
    lfs f10, 0x864(r1)
    lfs f9, 0x854(r1)
    lfs f8, 0x844(r1)
    lfs f0, lbl_808858F8
    psq_l f1, 0x0(r28), 0, 0
    lfs f2, 0x468(r1)
    stfs f7, 0x898(r1)
    stfs f7, 0x89c(r1)
    stfs f7, 0x8a0(r1)
    stfs f0, 0x8a4(r1)
    stfs f27, 0x148(r1)
    stfs f28, 0x14c(r1)
    stfs f30, 0x150(r1)
    stfs f27, 0x868(r1)
    stfs f28, 0x86c(r1)
    stfs f30, 0x870(r1)
    stfs f24, 0x154(r1)
    stfs f25, 0x158(r1)
    stfs f26, 0x15c(r1)
    stfs f24, 0x878(r1)
    stfs f25, 0x87c(r1)
    stfs f26, 0x880(r1)
    stfs f11, 0x160(r1)
    stfs f12, 0x164(r1)
    stfs f13, 0x168(r1)
    stfs f11, 0x888(r1)
    stfs f12, 0x88c(r1)
    stfs f13, 0x890(r1)
    stfs f8, 0x16c(r1)
    stfs f9, 0x170(r1)
    stfs f10, 0x174(r1)
    stfs f8, 0x874(r1)
    stfs f9, 0x884(r1)
    stfs f10, 0x894(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x180(r1)
    bl fn_805F9750
    lfs f2, 0x180(r1)
    lfs f0, lbl_808859C8
    fabs f7, f2
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_8037F9AC_000004C8
    lfs f7, 0x17c(r1)
    lfs f0, lbl_808858E8
    fcmpo cr0, f7, f0
    ble lbl_fn_8037F9AC_000004B8
    lfs f0, lbl_808859CC
    b lbl_fn_8037F9AC_000004BC
lbl_fn_8037F9AC_000004B8:
    lfs f0, lbl_808859D0
lbl_fn_8037F9AC_000004BC:
    fneg f0, f0
    stfs f0, 0x184(r1)
    b lbl_fn_8037F9AC_000004DC
lbl_fn_8037F9AC_000004C8:
    lfs f1, 0x17c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x184(r1)
lbl_fn_8037F9AC_000004DC:
    lfs f0, 0x4(r31)
    addi r3, r1, 0x184
    lfs f2, lbl_808858E8
    mr r4, r30
    fsubs f7, f0, f29
    psq_l f1, 0x0(r3), 0, 0
    lfs f0, 0x24(r31)
    addi r3, r1, 0x448
    lfs f8, lbl_808858F8
    fmadds f28, f0, f7, f29
    stfs f2, 0x18c(r1)
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x468(r1)
    stfs f2, 0x454(r1)
    stfs f8, 0x458(r1)
    stfs f2, 0x45c(r1)
    bl fn_80178088
    lfs f2, 0x53c(r30)
    addi r6, r1, 0x448
    stfs f2, 0x444(r1)
    addi r3, r1, 0x43c
    psq_l f1, 0x534(r30), 0, 0
    addi r4, r1, 0x484
    lfs f2, 0x450(r1)
    addi r5, r29, 0x868
    psq_st f1, 0x0(r3), 0, 0
    addi r3, r1, 0x478
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x48c(r1)
    lfs f7, 0x488(r1)
    lfs f0, 0x10(r31)
    stfs f2, 0x480(r1)
    frsp f2, f2
    fadds f0, f7, f0
    stfs f0, 0x488(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x870(r29)
    lwz r0, 0x12a4(r30)
    psq_st f1, 0x0(r3), 0, 0
    srwi. r0, r0, 31
    bne lbl_fn_8037F9AC_00000594
    lwz r0, 0x2dc(r30)
    cmpwi r0, 0x55
    bne lbl_fn_8037F9AC_000005A4
lbl_fn_8037F9AC_00000594:
    lfs f7, 0x440(r1)
    lfs f0, lbl_808858EC
    fadds f0, f7, f0
    stfs f0, 0x440(r1)
lbl_fn_8037F9AC_000005A4:
    lwz r0, 0x8ec(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8037F9AC_000005C0
    lfs f7, 0x464(r1)
    lfs f0, lbl_808858EC
    fadds f0, f7, f0
    stfs f0, 0x464(r1)
lbl_fn_8037F9AC_000005C0:
    lfs f7, 0x8(r31)
    addi r28, r1, 0xb48
    lfs f0, 0xa0c(r29)
    lfs f1, lbl_808858E8
    fadds f7, f7, f0
    lfs f9, 0x0(r31)
    lfs f0, lbl_808858F8
    fcmpu cr0, f1, f1
    lfs f8, 0x464(r1)
    fneg f7, f7
    stfs f8, 0x434(r1)
    stfs f7, 0x430(r1)
    stfs f1, 0x438(r1)
    stfs f1, 0x424(r1)
    stfs f1, 0x428(r1)
    stfs f9, 0x42c(r1)
    stfs f1, 0xb74(r1)
    stfs f1, 0xb6c(r1)
    stfs f1, 0xb68(r1)
    stfs f1, 0xb64(r1)
    stfs f1, 0xb60(r1)
    stfs f1, 0xb58(r1)
    stfs f1, 0xb54(r1)
    stfs f1, 0xb50(r1)
    stfs f1, 0xb4c(r1)
    stfs f0, 0xb70(r1)
    stfs f0, 0xb5c(r1)
    stfs f0, 0xb48(r1)
    beq lbl_fn_8037F9AC_00000684
    addi r3, r1, 0x748
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r28
    addi r4, r1, 0x748
    addi r5, r1, 0x718
    bl fn_805F89F0
    addi r3, r1, 0x718
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
lbl_fn_8037F9AC_00000684:
    lfs f0, lbl_808858E8
    lfs f1, 0x434(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_8037F9AC_000006E4
    addi r3, r1, 0x7a8
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r28
    addi r4, r1, 0x7a8
    addi r5, r1, 0x778
    bl fn_805F89F0
    addi r3, r1, 0x778
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
lbl_fn_8037F9AC_000006E4:
    lfs f0, lbl_808858E8
    lfs f1, 0x430(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_8037F9AC_00000744
    addi r3, r1, 0x808
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r28
    addi r4, r1, 0x808
    addi r5, r1, 0x7d8
    bl fn_805F89F0
    addi r3, r1, 0x7d8
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
lbl_fn_8037F9AC_00000744:
    addi r4, r1, 0x424
    addi r3, r1, 0xb48
    mr r5, r4
    bl fn_805F93C0
    lfs f7, 0x42c(r1)
    addi r8, r1, 0x358
    lfs f0, 0x48c(r1)
    addi r7, r1, 0x418
    lfs f9, 0x428(r1)
    li r4, 0x0
    fadds f2, f7, f0
    lfs f8, 0x488(r1)
    lfs f7, 0x424(r1)
    li r5, 0x0
    lfs f0, 0x484(r1)
    fadds f8, f9, f8
    fadds f0, f7, f0
    stfs f8, 0x35c(r1)
    lwz r3, lbl_8087EF70
    li r6, 0x0
    stfs f0, 0x358(r1)
    psq_l f1, 0x0(r8), 0, 0
    stfs f2, 0x360(r1)
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0x420(r1)
    bl fn_800A56A8
    fmr f24, f1
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x1
    li r6, 0x0
    bl fn_800A56A8
    fabs f7, f24
    lfs f0, lbl_808859E0
    frsp f7, f7
    fcmpo cr0, f7, f0
    bgt lbl_fn_8037F9AC_000007E8
    fabs f7, f1
    frsp f7, f7
    fcmpo cr0, f7, f0
    ble lbl_fn_8037F9AC_00000808
lbl_fn_8037F9AC_000007E8:
    lwz r3, 0x984(r29)
    addi r0, r3, 0x1
    stw r0, 0x984(r29)
    cmpwi r0, 0x28
    blt lbl_fn_8037F9AC_00000820
    li r0, 0x28
    stw r0, 0x984(r29)
    b lbl_fn_8037F9AC_00000820
lbl_fn_8037F9AC_00000808:
    lwz r3, 0x984(r29)
    subic. r0, r3, 0x1
    stw r0, 0x984(r29)
    bgt lbl_fn_8037F9AC_00000820
    li r0, 0x0
    stw r0, 0x984(r29)
lbl_fn_8037F9AC_00000820:
    lwz r3, 0xfc4(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8037F9AC_00000830
    b lbl_fn_8037F9AC_00000834
lbl_fn_8037F9AC_00000830:
    lwz r3, 0xfc0(r30)
lbl_fn_8037F9AC_00000834:
    cmpwi r3, 0x0
    bne lbl_fn_8037F9AC_00000848
    lwz r0, 0x834(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8037F9AC_00000CD8
lbl_fn_8037F9AC_00000848:
    lwz r4, 0x834(r29)
    cmpwi r4, 0x0
    beq lbl_fn_8037F9AC_00000858
    b lbl_fn_8037F9AC_0000085C
lbl_fn_8037F9AC_00000858:
    mr r4, r3
lbl_fn_8037F9AC_0000085C:
    lfs f9, 0x530(r4)
    addi r3, r1, 0x40c
    lfs f0, 0x530(r30)
    lfs f8, 0x528(r4)
    lfs f7, 0x528(r30)
    fsubs f9, f9, f0
    lfs f0, lbl_808858E8
    fsubs f7, f8, f7
    stfs f9, 0x414(r1)
    stfs f7, 0x40c(r1)
    stfs f0, 0x410(r1)
    bl fn_805F9940
    lfs f0, lbl_808859A4
    fmr f29, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_8037F9AC_00001678
    lfs f8, lbl_808859E4
    lfs f7, 0xc(r31)
    lfs f0, lbl_808858F8
    fmuls f7, f8, f7
    fdivs f7, f7, f1
    fabs f7, f7
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_8037F9AC_00001678
    addi r3, r1, 0x40c
    mr r4, r3
    bl fn_805F98D0
    lfs f2, 0x414(r1)
    addi r28, r1, 0x40c
    lfs f0, lbl_808859C8
    fabs f7, f2
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_8037F9AC_0000090C
    lfs f7, 0x40c(r1)
    lfs f0, lbl_808858E8
    fcmpo cr0, f7, f0
    ble lbl_fn_8037F9AC_00000900
    lfs f0, lbl_808859CC
    b lbl_fn_8037F9AC_00000904
lbl_fn_8037F9AC_00000900:
    lfs f0, lbl_808859D0
lbl_fn_8037F9AC_00000904:
    stfs f0, 0x104(r1)
    b lbl_fn_8037F9AC_0000091C
lbl_fn_8037F9AC_0000090C:
    lfs f1, 0x40c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x104(r1)
lbl_fn_8037F9AC_0000091C:
    lfs f0, 0x104(r1)
    addi r3, r1, 0x6e8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f7, lbl_808858E8
    addi r4, r1, 0x10c
    lfs f8, 0x6f0(r1)
    mr r5, r4
    lfs f9, 0x6ec(r1)
    addi r3, r1, 0x6a8
    lfs f10, 0x6e8(r1)
    lfs f11, 0x700(r1)
    lfs f12, 0x6fc(r1)
    lfs f13, 0x6f8(r1)
    lfs f24, 0x710(r1)
    lfs f25, 0x70c(r1)
    lfs f26, 0x708(r1)
    lfs f27, 0x714(r1)
    lfs f30, 0x704(r1)
    lfs f31, 0x6f4(r1)
    lfs f0, lbl_808858F8
    psq_l f1, 0x0(r28), 0, 0
    lfs f2, 0x414(r1)
    stfs f7, 0x6d8(r1)
    stfs f7, 0x6dc(r1)
    stfs f7, 0x6e0(r1)
    stfs f0, 0x6e4(r1)
    stfs f10, 0x13c(r1)
    stfs f9, 0x140(r1)
    stfs f8, 0x144(r1)
    stfs f10, 0x6a8(r1)
    stfs f9, 0x6ac(r1)
    stfs f8, 0x6b0(r1)
    stfs f13, 0x130(r1)
    stfs f12, 0x134(r1)
    stfs f11, 0x138(r1)
    stfs f13, 0x6b8(r1)
    stfs f12, 0x6bc(r1)
    stfs f11, 0x6c0(r1)
    stfs f26, 0x124(r1)
    stfs f25, 0x128(r1)
    stfs f24, 0x12c(r1)
    stfs f26, 0x6c8(r1)
    stfs f25, 0x6cc(r1)
    stfs f24, 0x6d0(r1)
    stfs f31, 0x118(r1)
    stfs f30, 0x11c(r1)
    stfs f27, 0x120(r1)
    stfs f31, 0x6b4(r1)
    stfs f30, 0x6c4(r1)
    stfs f27, 0x6d4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x114(r1)
    bl fn_805F9750
    lfs f2, 0x114(r1)
    lfs f0, lbl_808859C8
    fabs f7, f2
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_8037F9AC_00000A38
    lfs f7, 0x110(r1)
    lfs f0, lbl_808858E8
    fcmpo cr0, f7, f0
    ble lbl_fn_8037F9AC_00000A28
    lfs f0, lbl_808859CC
    b lbl_fn_8037F9AC_00000A2C
lbl_fn_8037F9AC_00000A28:
    lfs f0, lbl_808859D0
lbl_fn_8037F9AC_00000A2C:
    fneg f0, f0
    stfs f0, 0x100(r1)
    b lbl_fn_8037F9AC_00000A4C
lbl_fn_8037F9AC_00000A38:
    lfs f1, 0x110(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x100(r1)
lbl_fn_8037F9AC_00000A4C:
    addi r3, r1, 0x100
    lfs f2, lbl_808858E8
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    lfs f7, lbl_808859E4
    stfs f2, 0x414(r1)
    lfs f0, 0xc(r31)
    stfs f2, 0x108(r1)
    fmuls f0, f7, f0
    fdivs f1, f0, f29
    bl fn_8068AEA0
    frsp f7, f1
    lfs f0, lbl_8088595C
    lfs f8, lbl_808859E8
    fmuls f0, f0, f7
    fcmpo cr0, f8, f0
    ble lbl_fn_8037F9AC_00000A94
    b lbl_fn_8037F9AC_00000A98
lbl_fn_8037F9AC_00000A94:
    fmr f8, f0
lbl_fn_8037F9AC_00000A98:
    lfs f9, lbl_808859EC
    fcmpo cr0, f9, f8
    bge lbl_fn_8037F9AC_00000AA8
    b lbl_fn_8037F9AC_00000ABC
lbl_fn_8037F9AC_00000AA8:
    lfs f9, lbl_808859E8
    fcmpo cr0, f9, f0
    ble lbl_fn_8037F9AC_00000AB8
    b lbl_fn_8037F9AC_00000ABC
lbl_fn_8037F9AC_00000AB8:
    fmr f9, f0
lbl_fn_8037F9AC_00000ABC:
    lfs f7, 0x410(r1)
    lis r3, lbl_8074E010@ha
    lfs f0, lbl_808858EC
    fadds f7, f7, f9
    lfd f2, lbl_8074E010@l(r3)
    stfs f7, 0x410(r1)
    fadds f1, f0, f7
    bl fn_8068AEA8
    frsp f7, f1
    lfs f0, lbl_808858EC
    fcmpo cr0, f7, f0
    ble lbl_fn_8037F9AC_00000AF4
    lfs f0, lbl_808859D4
    fsubs f7, f7, f0
lbl_fn_8037F9AC_00000AF4:
    lfs f0, lbl_808859D8
    fcmpo cr0, f7, f0
    bge lbl_fn_8037F9AC_00000B08
    lfs f0, lbl_808859D4
    fadds f7, f7, f0
lbl_fn_8037F9AC_00000B08:
    lfs f0, 0x434(r1)
    lis r3, lbl_8074E010@ha
    lfd f2, lbl_8074E010@l(r3)
    fsubs f1, f0, f7
    bl fn_8068AEA8
    frsp f7, f1
    lfs f0, lbl_808858EC
    fcmpo cr0, f7, f0
    ble lbl_fn_8037F9AC_00000B34
    lfs f0, lbl_808859D4
    fsubs f7, f7, f0
lbl_fn_8037F9AC_00000B34:
    lfs f0, lbl_808859D8
    fcmpo cr0, f7, f0
    bge lbl_fn_8037F9AC_00000B48
    lfs f0, lbl_808859D4
    fadds f7, f7, f0
lbl_fn_8037F9AC_00000B48:
    lfs f0, 0x434(r1)
    fneg f29, f7
    lfs f7, 0x498(r1)
    addi r3, r1, 0xb18
    fneg f1, f0
    lfs f0, 0x48c(r1)
    lfs f9, 0x494(r1)
    fsubs f10, f7, f0
    lfs f8, 0x488(r1)
    lfs f7, 0x490(r1)
    lfs f0, 0x484(r1)
    fsubs f8, f9, f8
    stfs f10, 0x408(r1)
    fsubs f0, f7, f0
    li r4, 0x79
    stfs f8, 0x404(r1)
    stfs f0, 0x400(r1)
    bl fn_805F8E70
    addi r4, r1, 0x400
    addi r3, r1, 0xb18
    mr r5, r4
    bl fn_805F93C0
    lwz r0, 0x7f4(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8037F9AC_00000BB4
    lfs f9, 0x28(r31)
    b lbl_fn_8037F9AC_00000BB8
lbl_fn_8037F9AC_00000BB4:
    lfs f9, 0x30(r31)
lbl_fn_8037F9AC_00000BB8:
    lwz r0, 0x834(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8037F9AC_00000BCC
    lfs f0, lbl_80885918
    fmuls f9, f9, f0
lbl_fn_8037F9AC_00000BCC:
    lwz r3, lbl_8087F9C0
    lfs f0, lbl_80885914
    lfs f7, 0x54(r3)
    lfs f8, lbl_808858F8
    fdivs f10, f7, f0
    lfs f7, 0xca4(r29)
    lfs f0, lbl_808858EC
    fdivs f8, f8, f10
    fadds f7, f7, f8
    stfs f7, 0xca4(r29)
    fcmpo cr0, f7, f0
    ble lbl_fn_8037F9AC_00000C00
    stfs f0, 0xca4(r29)
lbl_fn_8037F9AC_00000C00:
    fabs f0, f29
    lfs f7, 0xca4(r29)
    frsp f0, f0
    fcmpo cr0, f0, f7
    ble lbl_fn_8037F9AC_00000C30
    lfs f0, lbl_808858E8
    fcmpo cr0, f29, f0
    cror eq, gt, eq
    bne lbl_fn_8037F9AC_00000C2C
    fmr f29, f7
    b lbl_fn_8037F9AC_00000C30
lbl_fn_8037F9AC_00000C2C:
    fneg f29, f7
lbl_fn_8037F9AC_00000C30:
    fmuls f8, f29, f9
    lfs f0, 0x434(r1)
    lfs f7, lbl_808858E8
    addi r3, r1, 0xae8
    stfs f8, 0x96c(r29)
    li r4, 0x79
    fadds f1, f0, f8
    stfs f7, 0x970(r29)
    stfs f1, 0x434(r1)
    bl fn_805F8E70
    addi r4, r1, 0x400
    addi r3, r1, 0xae8
    mr r5, r4
    bl fn_805F93C0
    lfs f7, 0x408(r1)
    addi r4, r1, 0x34c
    lfs f0, 0x48c(r1)
    addi r3, r1, 0x418
    lfs f9, 0x404(r1)
    fadds f2, f7, f0
    lfs f8, 0x488(r1)
    lfs f7, 0x400(r1)
    lfs f0, 0x484(r1)
    fadds f8, f9, f8
    stfs f2, 0x420(r1)
    fadds f0, f7, f0
    stfs f8, 0x350(r1)
    stfs f0, 0x34c(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lwz r0, 0x7f4(r29)
    stfs f2, 0x354(r1)
    cmpwi r0, 0x0
    beq lbl_fn_8037F9AC_00001678
    fabs f7, f29
    lfs f0, lbl_808859E0
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_8037F9AC_00001678
    li r0, 0x0
    stw r0, 0x7f4(r29)
    b lbl_fn_8037F9AC_00001678
lbl_fn_8037F9AC_00000CD8:
    lwz r0, 0x7f4(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8037F9AC_00000ED4
    lfs f7, lbl_808858EC
    lis r3, lbl_8074E010@ha
    lfs f0, 0x7f8(r29)
    lfd f2, lbl_8074E010@l(r3)
    fadds f1, f7, f0
    bl fn_8068AEA8
    frsp f7, f1
    lfs f0, lbl_808858EC
    fcmpo cr0, f7, f0
    ble lbl_fn_8037F9AC_00000D14
    lfs f0, lbl_808859D4
    fsubs f7, f7, f0
lbl_fn_8037F9AC_00000D14:
    lfs f0, lbl_808859D8
    fcmpo cr0, f7, f0
    bge lbl_fn_8037F9AC_00000D28
    lfs f0, lbl_808859D4
    fadds f7, f7, f0
lbl_fn_8037F9AC_00000D28:
    lfs f0, 0x434(r1)
    lis r3, lbl_8074E010@ha
    lfd f2, lbl_8074E010@l(r3)
    fsubs f1, f0, f7
    bl fn_8068AEA8
    frsp f7, f1
    lfs f0, lbl_808858EC
    fcmpo cr0, f7, f0
    ble lbl_fn_8037F9AC_00000D54
    lfs f0, lbl_808859D4
    fsubs f7, f7, f0
lbl_fn_8037F9AC_00000D54:
    lfs f0, lbl_808859D8
    fcmpo cr0, f7, f0
    bge lbl_fn_8037F9AC_00000D68
    lfs f0, lbl_808859D4
    fadds f7, f7, f0
lbl_fn_8037F9AC_00000D68:
    lfs f0, 0x434(r1)
    fneg f29, f7
    lfs f7, 0x420(r1)
    addi r3, r1, 0xab8
    fneg f1, f0
    lfs f0, 0x48c(r1)
    lfs f9, 0x41c(r1)
    fsubs f10, f7, f0
    lfs f8, 0x488(r1)
    lfs f7, 0x418(r1)
    lfs f0, 0x484(r1)
    fsubs f8, f9, f8
    stfs f10, 0x3fc(r1)
    fsubs f0, f7, f0
    li r4, 0x79
    stfs f8, 0x3f8(r1)
    stfs f0, 0x3f4(r1)
    bl fn_805F8E70
    addi r4, r1, 0x3f4
    addi r3, r1, 0xab8
    mr r5, r4
    bl fn_805F93C0
    lwz r3, lbl_8087F9C0
    lfs f0, lbl_80885914
    lfs f7, 0x54(r3)
    lfs f8, lbl_808858F8
    fdivs f9, f7, f0
    lfs f7, 0xca4(r29)
    lfs f0, lbl_808858EC
    fdivs f8, f8, f9
    fadds f7, f7, f8
    stfs f7, 0xca4(r29)
    fcmpo cr0, f7, f0
    ble lbl_fn_8037F9AC_00000DF4
    stfs f0, 0xca4(r29)
lbl_fn_8037F9AC_00000DF4:
    fabs f0, f29
    lfs f7, 0xca4(r29)
    frsp f0, f0
    fcmpo cr0, f0, f7
    ble lbl_fn_8037F9AC_00000E24
    lfs f0, lbl_808858E8
    fcmpo cr0, f29, f0
    cror eq, gt, eq
    bne lbl_fn_8037F9AC_00000E20
    fmr f29, f7
    b lbl_fn_8037F9AC_00000E24
lbl_fn_8037F9AC_00000E20:
    fneg f29, f7
lbl_fn_8037F9AC_00000E24:
    lfs f0, 0x28(r31)
    addi r3, r1, 0xa88
    lfs f7, lbl_808858E8
    li r4, 0x79
    fmuls f9, f29, f0
    lfs f8, 0xca8(r29)
    stfs f7, 0x970(r29)
    lfs f0, 0x434(r1)
    fmuls f7, f8, f9
    stfs f7, 0x96c(r29)
    fadds f1, f0, f7
    stfs f1, 0x434(r1)
    bl fn_805F8E70
    addi r4, r1, 0x3f4
    addi r3, r1, 0xa88
    mr r5, r4
    bl fn_805F93C0
    lfs f7, 0x3fc(r1)
    fabs f10, f29
    lfs f0, 0x48c(r1)
    addi r4, r1, 0x340
    lfs f9, 0x3f8(r1)
    addi r3, r1, 0x418
    fadds f2, f7, f0
    lfs f8, 0x488(r1)
    frsp f10, f10
    lfs f7, 0x3f4(r1)
    lfs f0, 0x484(r1)
    fadds f8, f9, f8
    stfs f2, 0x348(r1)
    fadds f7, f7, f0
    lfs f0, lbl_80885950
    stfs f8, 0x344(r1)
    fcmpo cr0, f10, f0
    stfs f7, 0x340(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x420(r1)
    bge lbl_fn_8037F9AC_00001678
    lfs f0, lbl_808858E8
    li r0, 0x0
    stw r0, 0x7f4(r29)
    stfs f0, 0xca4(r29)
    b lbl_fn_8037F9AC_00001678
lbl_fn_8037F9AC_00000ED4:
    lwz r0, 0x12a4(r30)
    extrwi. r3, r0, 1, 26
    bne lbl_fn_8037F9AC_00000EE8
    extrwi. r0, r0, 1, 27
    beq lbl_fn_8037F9AC_000010B4
lbl_fn_8037F9AC_00000EE8:
    lfs f7, lbl_808858EC
    lis r3, lbl_8074E010@ha
    lfs f0, 0x440(r1)
    lfd f2, lbl_8074E010@l(r3)
    fadds f1, f7, f0
    bl fn_8068AEA8
    frsp f7, f1
    lfs f0, lbl_808858EC
    fcmpo cr0, f7, f0
    ble lbl_fn_8037F9AC_00000F18
    lfs f0, lbl_808859D4
    fsubs f7, f7, f0
lbl_fn_8037F9AC_00000F18:
    lfs f0, lbl_808859D8
    fcmpo cr0, f7, f0
    bge lbl_fn_8037F9AC_00000F2C
    lfs f0, lbl_808859D4
    fadds f7, f7, f0
lbl_fn_8037F9AC_00000F2C:
    lfs f0, 0x434(r1)
    lis r3, lbl_8074E010@ha
    lfd f2, lbl_8074E010@l(r3)
    fsubs f1, f0, f7
    bl fn_8068AEA8
    frsp f7, f1
    lfs f0, lbl_808858EC
    fcmpo cr0, f7, f0
    ble lbl_fn_8037F9AC_00000F58
    lfs f0, lbl_808859D4
    fsubs f7, f7, f0
lbl_fn_8037F9AC_00000F58:
    lfs f0, lbl_808859D8
    fcmpo cr0, f7, f0
    bge lbl_fn_8037F9AC_00000F6C
    lfs f0, lbl_808859D4
    fadds f7, f7, f0
lbl_fn_8037F9AC_00000F6C:
    lfs f0, 0x434(r1)
    fneg f29, f7
    lfs f7, 0x420(r1)
    addi r3, r1, 0xa58
    fneg f1, f0
    lfs f0, 0x48c(r1)
    lfs f9, 0x41c(r1)
    fsubs f10, f7, f0
    lfs f8, 0x488(r1)
    lfs f7, 0x418(r1)
    lfs f0, 0x484(r1)
    fsubs f8, f9, f8
    stfs f10, 0x3f0(r1)
    fsubs f0, f7, f0
    li r4, 0x79
    stfs f8, 0x3ec(r1)
    stfs f0, 0x3e8(r1)
    bl fn_805F8E70
    addi r4, r1, 0x3e8
    addi r3, r1, 0xa58
    mr r5, r4
    bl fn_805F93C0
    lwz r3, lbl_8087F9C0
    lfs f0, lbl_80885914
    lfs f7, 0x54(r3)
    lfs f8, lbl_808858F8
    fdivs f9, f7, f0
    lfs f7, 0xca4(r29)
    lfs f0, lbl_808858EC
    fdivs f8, f8, f9
    fadds f7, f7, f8
    stfs f7, 0xca4(r29)
    fcmpo cr0, f7, f0
    ble lbl_fn_8037F9AC_00000FF8
    stfs f0, 0xca4(r29)
lbl_fn_8037F9AC_00000FF8:
    fabs f0, f29
    lfs f7, 0xca4(r29)
    frsp f0, f0
    fcmpo cr0, f0, f7
    ble lbl_fn_8037F9AC_00001028
    lfs f0, lbl_808858E8
    fcmpo cr0, f29, f0
    cror eq, gt, eq
    bne lbl_fn_8037F9AC_00001024
    fmr f29, f7
    b lbl_fn_8037F9AC_00001028
lbl_fn_8037F9AC_00001024:
    fneg f29, f7
lbl_fn_8037F9AC_00001028:
    lfs f0, 0x30(r31)
    addi r3, r1, 0xa28
    lfs f7, lbl_808858E8
    li r4, 0x79
    fmuls f8, f29, f0
    lfs f0, 0x434(r1)
    stfs f7, 0x970(r29)
    stfs f8, 0x96c(r29)
    fadds f7, f0, f8
    lfs f0, 0x30(r31)
    fmadds f1, f29, f0, f7
    stfs f1, 0x434(r1)
    bl fn_805F8E70
    addi r4, r1, 0x3e8
    addi r3, r1, 0xa28
    mr r5, r4
    bl fn_805F93C0
    lfs f7, 0x3f0(r1)
    addi r4, r1, 0x334
    lfs f0, 0x48c(r1)
    addi r3, r1, 0x418
    lfs f9, 0x3ec(r1)
    fadds f2, f7, f0
    lfs f8, 0x488(r1)
    lfs f7, 0x3e8(r1)
    lfs f0, 0x484(r1)
    fadds f8, f9, f8
    stfs f2, 0x33c(r1)
    fadds f0, f7, f0
    stfs f8, 0x338(r1)
    stfs f0, 0x334(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x420(r1)
    b lbl_fn_8037F9AC_00001678
lbl_fn_8037F9AC_000010B4:
    lfs f11, 0x570(r30)
    lfs f10, 0x988(r29)
    lfs f8, lbl_808859E0
    fsubs f9, f11, f10
    lfs f7, lbl_808859E4
    lfs f0, lbl_808859F4
    lfs f12, lbl_808858F8
    fmadds f8, f8, f9, f10
    lfs f30, lbl_808859F0
    lfs f31, lbl_80885920
    stfs f8, 0x988(r29)
    fsubs f7, f8, f7
    lfs f27, lbl_8088593C
    fmuls f7, f7, f0
    fcmpo cr0, f12, f7
    bge lbl_fn_8037F9AC_000010F8
    b lbl_fn_8037F9AC_000010FC
lbl_fn_8037F9AC_000010F8:
    fmr f12, f7
lbl_fn_8037F9AC_000010FC:
    lfs f9, lbl_808858E8
    fcmpo cr0, f9, f12
    ble lbl_fn_8037F9AC_0000110C
    b lbl_fn_8037F9AC_00001120
lbl_fn_8037F9AC_0000110C:
    lfs f9, lbl_808858F8
    fcmpo cr0, f9, f7
    bge lbl_fn_8037F9AC_0000111C
    b lbl_fn_8037F9AC_00001120
lbl_fn_8037F9AC_0000111C:
    fmr f9, f7
lbl_fn_8037F9AC_00001120:
    lfs f8, lbl_808859E4
    lfs f7, lbl_808859F8
    lfs f0, lbl_808859E0
    fmadds f7, f8, f9, f7
    fcmpo cr0, f11, f0
    fmuls f30, f30, f7
    bge lbl_fn_8037F9AC_00001140
    lfs f30, lbl_808858E8
lbl_fn_8037F9AC_00001140:
    lfs f7, lbl_808858EC
    lis r3, lbl_8074E010@ha
    lfs f0, 0x440(r1)
    lfd f2, lbl_8074E010@l(r3)
    fadds f1, f7, f0
    bl fn_8068AEA8
    frsp f7, f1
    lfs f0, lbl_808858EC
    fcmpo cr0, f7, f0
    ble lbl_fn_8037F9AC_00001170
    lfs f0, lbl_808859D4
    fsubs f7, f7, f0
lbl_fn_8037F9AC_00001170:
    lfs f0, lbl_808859D8
    fcmpo cr0, f7, f0
    bge lbl_fn_8037F9AC_00001184
    lfs f0, lbl_808859D4
    fadds f7, f7, f0
lbl_fn_8037F9AC_00001184:
    lfs f0, 0x434(r1)
    lis r3, lbl_8074E010@ha
    lfd f2, lbl_8074E010@l(r3)
    fsubs f1, f0, f7
    bl fn_8068AEA8
    frsp f7, f1
    lfs f0, lbl_808858EC
    fcmpo cr0, f7, f0
    ble lbl_fn_8037F9AC_000011B0
    lfs f0, lbl_808859D4
    fsubs f7, f7, f0
lbl_fn_8037F9AC_000011B0:
    lfs f0, lbl_808859D8
    fcmpo cr0, f7, f0
    bge lbl_fn_8037F9AC_000011C4
    lfs f0, lbl_808859D4
    fadds f7, f7, f0
lbl_fn_8037F9AC_000011C4:
    lfs f0, lbl_808858F8
    fneg f26, f7
    lwz r0, 0x984(r29)
    fsubs f29, f0, f0
    lfs f25, lbl_80885910
    cmplwi r0, 0x14
    bgt lbl_fn_8037F9AC_000011E8
    lfs f0, lbl_808858FC
    fmuls f30, f30, f0
lbl_fn_8037F9AC_000011E8:
    lwz r3, lbl_8087F9C0
    cmpwi r3, 0x0
    beq lbl_fn_8037F9AC_000011FC
    lfs f0, 0x48(r3)
    fmuls f30, f30, f0
lbl_fn_8037F9AC_000011FC:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_800A56A8
    fabs f7, f1
    lfs f0, lbl_808859E0
    fmr f24, f1
    frsp f7, f7
    fcmpo cr0, f7, f0
    cror eq, lt, eq
    bne lbl_fn_8037F9AC_00001230
    lfs f24, lbl_808858E8
lbl_fn_8037F9AC_00001230:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x1
    li r6, 0x0
    bl fn_800A56A8
    fabs f7, f1
    lfs f0, lbl_808859E0
    frsp f7, f7
    fcmpo cr0, f7, f0
    cror eq, lt, eq
    bne lbl_fn_8037F9AC_00001260
    lfs f1, lbl_808858E8
lbl_fn_8037F9AC_00001260:
    frsp f7, f1
    stfs f1, 0xc(r1)
    frsp f0, f24
    stfs f24, 0x8(r1)
    fmuls f7, f7, f7
    fmadds f1, f0, f0, f7
    bl fn_8068B100
    frsp f7, f1
    lfs f0, lbl_808858E8
    fcmpu cr0, f0, f7
    beq lbl_fn_8037F9AC_000012C4
    lfs f7, 0xc(r1)
    frsp f0, f24
    fmuls f7, f7, f7
    fmadds f1, f0, f0, f7
    bl fn_8068B100
    frsp f9, f1
    lfs f8, lbl_808858F8
    frsp f7, f24
    lfs f0, 0xc(r1)
    fdivs f8, f8, f9
    fmuls f7, f7, f8
    fmuls f0, f0, f8
    stfs f7, 0x8(r1)
    stfs f0, 0xc(r1)
lbl_fn_8037F9AC_000012C4:
    lfs f10, 0xc(r1)
    lfs f9, 0xc8c(r29)
    lfs f8, 0x8(r1)
    fmuls f9, f10, f9
    lfs f7, 0xc88(r29)
    lfs f0, lbl_808858E8
    fmadds f7, f8, f7, f9
    fcmpo cr0, f7, f0
    ble lbl_fn_8037F9AC_000012EC
    b lbl_fn_8037F9AC_000012F4
lbl_fn_8037F9AC_000012EC:
    li r0, 0x1
    b lbl_fn_8037F9AC_0000133C
lbl_fn_8037F9AC_000012F4:
    lfs f9, 0xc94(r29)
    lfs f7, 0xc90(r29)
    fmuls f9, f10, f9
    fmadds f7, f8, f7, f9
    fcmpo cr0, f7, f0
    ble lbl_fn_8037F9AC_00001310
    b lbl_fn_8037F9AC_00001318
lbl_fn_8037F9AC_00001310:
    li r0, 0x1
    b lbl_fn_8037F9AC_0000133C
lbl_fn_8037F9AC_00001318:
    lfs f9, 0xc9c(r29)
    lfs f7, 0xc98(r29)
    fmuls f9, f10, f9
    fmadds f7, f8, f7, f9
    fcmpo cr0, f7, f0
    ble lbl_fn_8037F9AC_00001338
    li r0, 0x0
    b lbl_fn_8037F9AC_0000133C
lbl_fn_8037F9AC_00001338:
    li r0, 0x1
lbl_fn_8037F9AC_0000133C:
    cmpwi r0, 0x0
    bne lbl_fn_8037F9AC_00001364
    lwz r3, lbl_8087F9C0
    lfs f8, lbl_808858F8
    lfs f7, 0x54(r3)
    lfs f0, 0xca0(r29)
    fdivs f7, f8, f7
    fadds f0, f0, f7
    stfs f0, 0xca0(r29)
    b lbl_fn_8037F9AC_0000136C
lbl_fn_8037F9AC_00001364:
    lfs f0, lbl_808858E8
    stfs f0, 0xca0(r29)
lbl_fn_8037F9AC_0000136C:
    lfs f7, 0xca0(r29)
    lfs f0, lbl_808858F8
    fcmpo cr0, f7, f0
    cror eq, gt, eq
    bne lbl_fn_8037F9AC_00001384
    stfs f0, 0xca0(r29)
lbl_fn_8037F9AC_00001384:
    fabs f9, f26
    addi r3, r29, 0xc90
    lfs f8, 0xca0(r29)
    fmuls f7, f25, f29
    lfs f0, lbl_80885920
    addi r5, r29, 0xc98
    psq_l f1, 0x0(r3), 0, 0
    frsp f9, f9
    psq_st f1, 0x0(r5), 0, 0
    fmuls f0, f0, f7
    mr r5, r3
    addi r3, r29, 0xc88
    psq_l f1, 0x0(r3), 0, 0
    addi r4, r1, 0x8
    psq_st f1, 0x0(r5), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    fcmpo cr0, f9, f0
    fmuls f30, f30, f8
    psq_st f1, 0x0(r3), 0, 0
    bge lbl_fn_8037F9AC_000013D8
    lfs f26, lbl_808858E8
lbl_fn_8037F9AC_000013D8:
    lfs f7, lbl_8088599C
    fabs f8, f26
    lfs f0, lbl_80885920
    fsubs f7, f7, f25
    frsp f8, f8
    fmuls f0, f0, f7
    fcmpo cr0, f8, f0
    ble lbl_fn_8037F9AC_000013FC
    lfs f26, lbl_808858E8
lbl_fn_8037F9AC_000013FC:
    lfs f8, 0x974(r29)
    fabs f7, f26
    fabs f0, f8
    frsp f7, f7
    frsp f0, f0
    fcmpo cr0, f7, f0
    ble lbl_fn_8037F9AC_0000142C
    fsubs f7, f26, f8
    lfs f0, lbl_808859E0
    fmadds f0, f0, f7, f8
    stfs f0, 0x974(r29)
    b lbl_fn_8037F9AC_0000143C
lbl_fn_8037F9AC_0000142C:
    fsubs f7, f26, f8
    lfs f0, lbl_80885934
    fmadds f0, f0, f7, f8
    stfs f0, 0x974(r29)
lbl_fn_8037F9AC_0000143C:
    lfs f0, 0x974(r29)
    lfs f7, 0x96c(r29)
    fmuls f30, f30, f0
    fabs f7, f7
    fabs f0, f30
    frsp f7, f7
    frsp f0, f0
    fcmpo cr0, f7, f0
    bge lbl_fn_8037F9AC_000014F8
    lfs f0, lbl_808858E8
    fcmpo cr0, f30, f0
    cror eq, gt, eq
    bne lbl_fn_8037F9AC_000014B4
    lfs f7, 0x970(r29)
    lfs f0, lbl_808858F8
    fadds f7, f7, f27
    stfs f7, 0x970(r29)
    fcmpo cr0, f7, f0
    ble lbl_fn_8037F9AC_0000148C
    stfs f0, 0x970(r29)
lbl_fn_8037F9AC_0000148C:
    lfs f7, 0x970(r29)
    lfs f0, 0x96c(r29)
    fmadds f0, f7, f31, f0
    stfs f0, 0x96c(r29)
    fcmpo cr0, f0, f30
    ble lbl_fn_8037F9AC_0000158C
    lfs f0, lbl_808858E8
    stfs f30, 0x96c(r29)
    stfs f0, 0x970(r29)
    b lbl_fn_8037F9AC_0000158C
lbl_fn_8037F9AC_000014B4:
    lfs f7, 0x970(r29)
    lfs f0, lbl_80885904
    fsubs f7, f7, f27
    stfs f7, 0x970(r29)
    fcmpo cr0, f7, f0
    bge lbl_fn_8037F9AC_000014D0
    stfs f0, 0x970(r29)
lbl_fn_8037F9AC_000014D0:
    lfs f7, 0x970(r29)
    lfs f0, 0x96c(r29)
    fmadds f0, f7, f31, f0
    stfs f0, 0x96c(r29)
    fcmpo cr0, f0, f30
    bge lbl_fn_8037F9AC_0000158C
    lfs f0, lbl_808858E8
    stfs f30, 0x96c(r29)
    stfs f0, 0x970(r29)
    b lbl_fn_8037F9AC_0000158C
lbl_fn_8037F9AC_000014F8:
    lfs f0, lbl_808858E8
    fcmpo cr0, f30, f0
    cror eq, gt, eq
    bne lbl_fn_8037F9AC_0000154C
    lfs f7, 0x970(r29)
    lfs f0, lbl_80885904
    fsubs f7, f7, f27
    stfs f7, 0x970(r29)
    fcmpo cr0, f7, f0
    bge lbl_fn_8037F9AC_00001524
    stfs f0, 0x970(r29)
lbl_fn_8037F9AC_00001524:
    lfs f7, 0x970(r29)
    lfs f0, 0x96c(r29)
    fmadds f0, f7, f31, f0
    stfs f0, 0x96c(r29)
    fcmpo cr0, f0, f30
    bge lbl_fn_8037F9AC_0000158C
    lfs f0, lbl_808858E8
    stfs f30, 0x96c(r29)
    stfs f0, 0x970(r29)
    b lbl_fn_8037F9AC_0000158C
lbl_fn_8037F9AC_0000154C:
    lfs f7, 0x970(r29)
    lfs f0, lbl_808858F8
    fadds f7, f7, f27
    stfs f7, 0x970(r29)
    fcmpo cr0, f7, f0
    ble lbl_fn_8037F9AC_00001568
    stfs f0, 0x970(r29)
lbl_fn_8037F9AC_00001568:
    lfs f7, 0x970(r29)
    lfs f0, 0x96c(r29)
    fmadds f0, f7, f31, f0
    stfs f0, 0x96c(r29)
    fcmpo cr0, f0, f30
    ble lbl_fn_8037F9AC_0000158C
    lfs f0, lbl_808858E8
    stfs f30, 0x96c(r29)
    stfs f0, 0x970(r29)
lbl_fn_8037F9AC_0000158C:
    lfs f7, 0x96c(r29)
    lfs f0, lbl_808859FC
    fcmpo cr0, f7, f0
    ble lbl_fn_8037F9AC_000015A0
    stfs f0, 0x96c(r29)
lbl_fn_8037F9AC_000015A0:
    lfs f7, 0x96c(r29)
    lfs f0, lbl_80885A00
    fcmpo cr0, f7, f0
    bge lbl_fn_8037F9AC_000015B4
    stfs f0, 0x96c(r29)
lbl_fn_8037F9AC_000015B4:
    lfs f0, 0x434(r1)
    addi r3, r1, 0x9f8
    lfs f7, 0x420(r1)
    li r4, 0x79
    fneg f1, f0
    lfs f0, 0x48c(r1)
    lfs f9, 0x41c(r1)
    fsubs f10, f7, f0
    lfs f8, 0x488(r1)
    lfs f7, 0x418(r1)
    lfs f0, 0x484(r1)
    fsubs f8, f9, f8
    stfs f10, 0x3e4(r1)
    fsubs f0, f7, f0
    stfs f8, 0x3e0(r1)
    stfs f0, 0x3dc(r1)
    bl fn_805F8E70
    addi r4, r1, 0x3dc
    addi r3, r1, 0x9f8
    mr r5, r4
    bl fn_805F93C0
    lfs f7, 0x434(r1)
    addi r3, r1, 0x9c8
    lfs f0, 0x96c(r29)
    li r4, 0x79
    fadds f1, f7, f0
    stfs f1, 0x434(r1)
    bl fn_805F8E70
    addi r4, r1, 0x3dc
    addi r3, r1, 0x9c8
    mr r5, r4
    bl fn_805F93C0
    lfs f7, 0x3e4(r1)
    addi r4, r1, 0x328
    lfs f0, 0x48c(r1)
    addi r3, r1, 0x418
    lfs f9, 0x3e0(r1)
    fadds f2, f7, f0
    lfs f8, 0x488(r1)
    lfs f7, 0x3dc(r1)
    lfs f0, 0x484(r1)
    fadds f8, f9, f8
    stfs f2, 0x330(r1)
    fadds f0, f7, f0
    stfs f8, 0x32c(r1)
    stfs f0, 0x328(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x420(r1)
lbl_fn_8037F9AC_00001678:
    lfs f7, lbl_808858E8
    lfs f0, 0x34(r31)
    fcmpu cr0, f7, f0
    beq lbl_fn_8037F9AC_0000174C
    lfs f0, 0x434(r1)
    addi r3, r1, 0x998
    lfs f7, 0x420(r1)
    li r4, 0x79
    fneg f1, f0
    lfs f0, 0x48c(r1)
    lfs f9, 0x41c(r1)
    fsubs f10, f7, f0
    lfs f8, 0x488(r1)
    lfs f7, 0x418(r1)
    lfs f0, 0x484(r1)
    fsubs f8, f9, f8
    stfs f10, 0x3d8(r1)
    fsubs f0, f7, f0
    stfs f8, 0x3d4(r1)
    stfs f0, 0x3d0(r1)
    bl fn_805F8E70
    addi r4, r1, 0x3d0
    addi r3, r1, 0x998
    mr r5, r4
    bl fn_805F93C0
    lfs f7, 0x434(r1)
    addi r3, r1, 0x968
    lfs f0, 0x34(r31)
    li r4, 0x79
    fadds f1, f7, f0
    stfs f1, 0x434(r1)
    bl fn_805F8E70
    addi r4, r1, 0x3d0
    addi r3, r1, 0x968
    mr r5, r4
    bl fn_805F93C0
    lfs f7, 0x3d8(r1)
    addi r4, r1, 0x31c
    lfs f0, 0x48c(r1)
    addi r3, r1, 0x418
    lfs f9, 0x3d4(r1)
    fadds f2, f7, f0
    lfs f8, 0x488(r1)
    lfs f7, 0x3d0(r1)
    lfs f0, 0x484(r1)
    fadds f8, f9, f8
    stfs f2, 0x324(r1)
    fadds f0, f7, f0
    stfs f8, 0x320(r1)
    stfs f0, 0x31c(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x420(r1)
lbl_fn_8037F9AC_0000174C:
    lfs f25, lbl_808858E8
    li r4, 0x0
    lwz r3, lbl_8087EF70
    fmr f24, f25
    bl fn_800A58D0
    cmpwi r3, 0x0
    beq lbl_fn_8037F9AC_00001798
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x2
    li r6, 0x0
    bl fn_800A56A8
    fmr f25, f1
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x3
    li r6, 0x0
    bl fn_800A56A8
    fmr f24, f1
lbl_fn_8037F9AC_00001798:
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    beq lbl_fn_8037F9AC_000017F0
    lwz r0, 0x58c(r30)
    cmpwi r0, 0x2
    bne lbl_fn_8037F9AC_000017F0
    mr r3, r30
    bl fn_8015EB2C
    cmpwi r3, 0x0
    beq lbl_fn_8037F9AC_000017F0
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_800A56A8
    fadds f25, f25, f1
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x1
    li r6, 0x0
    bl fn_800A56A8
    fadds f24, f24, f1
lbl_fn_8037F9AC_000017F0:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x2
    bl fn_800A55D4
    cmpwi r3, 0x0
    beq lbl_fn_8037F9AC_00001814
    lfs f0, lbl_80885A04
    fsubs f25, f25, f0
    b lbl_fn_8037F9AC_00001834
lbl_fn_8037F9AC_00001814:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x3
    bl fn_800A55D4
    cmpwi r3, 0x0
    beq lbl_fn_8037F9AC_00001834
    lfs f0, lbl_80885A04
    fadds f25, f25, f0
lbl_fn_8037F9AC_00001834:
    lwz r3, lbl_8087F9C0
    lwz r0, 0x50(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_8037F9AC_00001850
    lfs f0, lbl_80885904
    fmuls f25, f25, f0
lbl_fn_8037F9AC_00001850:
    lwz r0, 0x50(r3)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_8037F9AC_00001868
    lfs f0, lbl_80885904
    fmuls f24, f24, f0
lbl_fn_8037F9AC_00001868:
    fabs f7, f25
    lfs f0, lbl_808859E0
    frsp f7, f7
    fcmpo cr0, f7, f0
    ble lbl_fn_8037F9AC_00001910
    lfs f0, lbl_808858E8
    fcmpo cr0, f25, f0
    ble lbl_fn_8037F9AC_00001890
    lfs f10, lbl_808858F8
    b lbl_fn_8037F9AC_00001894
lbl_fn_8037F9AC_00001890:
    lfs f10, lbl_80885904
lbl_fn_8037F9AC_00001894:
    lfs f0, lbl_808859E0
    lfs f8, lbl_80885A08
    fsubs f9, f7, f0
    lfs f7, lbl_80885920
    lfs f0, 0xa14(r29)
    lfs f11, lbl_8088592C
    fdivs f8, f9, f8
    fmuls f9, f10, f8
    fneg f8, f9
    fmadds f0, f8, f7, f0
    stfs f0, 0xa14(r29)
    fcmpo cr0, f11, f0
    bge lbl_fn_8037F9AC_000018CC
    b lbl_fn_8037F9AC_000018D0
lbl_fn_8037F9AC_000018CC:
    fmr f11, f0
lbl_fn_8037F9AC_000018D0:
    lfs f7, lbl_80885A0C
    fcmpo cr0, f7, f11
    ble lbl_fn_8037F9AC_000018E0
    b lbl_fn_8037F9AC_000018F8
lbl_fn_8037F9AC_000018E0:
    lfs f7, lbl_8088592C
    lfs f0, 0xa14(r29)
    fcmpo cr0, f7, f0
    bge lbl_fn_8037F9AC_000018F4
    b lbl_fn_8037F9AC_000018F8
lbl_fn_8037F9AC_000018F4:
    fmr f7, f0
lbl_fn_8037F9AC_000018F8:
    fabs f8, f9
    frsp f0, f7
    frsp f7, f8
    fmuls f0, f0, f7
    stfs f0, 0xa14(r29)
    b lbl_fn_8037F9AC_0000193C
lbl_fn_8037F9AC_00001910:
    lfs f8, 0xa14(r29)
    lfs f7, lbl_80885A10
    lfs f0, lbl_80885A14
    fmuls f7, f8, f7
    stfs f7, 0xa14(r29)
    fabs f7, f7
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_8037F9AC_0000193C
    lfs f0, lbl_808858E8
    stfs f0, 0xa14(r29)
lbl_fn_8037F9AC_0000193C:
    lfs f7, lbl_808858E8
    lfs f0, 0xa14(r29)
    fcmpu cr0, f7, f0
    beq lbl_fn_8037F9AC_00001A10
    lfs f0, 0x434(r1)
    addi r3, r1, 0x938
    lfs f7, 0x420(r1)
    li r4, 0x79
    fneg f1, f0
    lfs f0, 0x48c(r1)
    lfs f9, 0x41c(r1)
    fsubs f10, f7, f0
    lfs f8, 0x488(r1)
    lfs f7, 0x418(r1)
    lfs f0, 0x484(r1)
    fsubs f8, f9, f8
    stfs f10, 0x3cc(r1)
    fsubs f0, f7, f0
    stfs f8, 0x3c8(r1)
    stfs f0, 0x3c4(r1)
    bl fn_805F8E70
    addi r4, r1, 0x3c4
    addi r3, r1, 0x938
    mr r5, r4
    bl fn_805F93C0
    lfs f7, 0x434(r1)
    addi r3, r1, 0x908
    lfs f0, 0xa14(r29)
    li r4, 0x79
    fadds f1, f7, f0
    stfs f1, 0x434(r1)
    bl fn_805F8E70
    addi r4, r1, 0x3c4
    addi r3, r1, 0x908
    mr r5, r4
    bl fn_805F93C0
    lfs f7, 0x3cc(r1)
    addi r4, r1, 0x310
    lfs f0, 0x48c(r1)
    addi r3, r1, 0x418
    lfs f9, 0x3c8(r1)
    fadds f2, f7, f0
    lfs f8, 0x488(r1)
    lfs f7, 0x3c4(r1)
    lfs f0, 0x484(r1)
    fadds f8, f9, f8
    stfs f2, 0x318(r1)
    fadds f0, f7, f0
    stfs f8, 0x314(r1)
    stfs f0, 0x310(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x420(r1)
lbl_fn_8037F9AC_00001A10:
    fabs f7, f24
    lfs f0, lbl_808859E0
    frsp f7, f7
    fcmpo cr0, f7, f0
    ble lbl_fn_8037F9AC_00001AB8
    lfs f0, lbl_808858E8
    fcmpo cr0, f24, f0
    ble lbl_fn_8037F9AC_00001A38
    lfs f10, lbl_808858F8
    b lbl_fn_8037F9AC_00001A3C
lbl_fn_8037F9AC_00001A38:
    lfs f10, lbl_80885904
lbl_fn_8037F9AC_00001A3C:
    lfs f0, lbl_808859E0
    lfs f8, lbl_80885A08
    fsubs f9, f7, f0
    lfs f7, lbl_80885A18
    lfs f0, 0xa10(r29)
    lfs f11, lbl_80885A1C
    fdivs f8, f9, f8
    fmuls f9, f10, f8
    fneg f8, f9
    fmadds f0, f8, f7, f0
    stfs f0, 0xa10(r29)
    fcmpo cr0, f11, f0
    bge lbl_fn_8037F9AC_00001A74
    b lbl_fn_8037F9AC_00001A78
lbl_fn_8037F9AC_00001A74:
    fmr f11, f0
lbl_fn_8037F9AC_00001A78:
    lfs f7, lbl_80885A20
    fcmpo cr0, f7, f11
    ble lbl_fn_8037F9AC_00001A88
    b lbl_fn_8037F9AC_00001AA0
lbl_fn_8037F9AC_00001A88:
    lfs f7, lbl_80885A1C
    lfs f0, 0xa10(r29)
    fcmpo cr0, f7, f0
    bge lbl_fn_8037F9AC_00001A9C
    b lbl_fn_8037F9AC_00001AA0
lbl_fn_8037F9AC_00001A9C:
    fmr f7, f0
lbl_fn_8037F9AC_00001AA0:
    fabs f8, f9
    frsp f0, f7
    frsp f7, f8
    fmuls f0, f0, f7
    stfs f0, 0xa10(r29)
    b lbl_fn_8037F9AC_00001AE4
lbl_fn_8037F9AC_00001AB8:
    lfs f8, 0xa10(r29)
    lfs f7, lbl_80885A24
    lfs f0, lbl_80885A14
    fmuls f7, f8, f7
    stfs f7, 0xa10(r29)
    fabs f7, f7
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_8037F9AC_00001AE4
    lfs f0, lbl_808858E8
    stfs f0, 0xa10(r29)
lbl_fn_8037F9AC_00001AE4:
    lfs f7, 0xa0c(r29)
    lfs f0, 0xa10(r29)
    lfs f8, lbl_80885954
    fadds f7, f7, f0
    stfs f7, 0xa0c(r29)
    lfs f0, 0x8(r31)
    fadds f0, f0, f7
    fcmpo cr0, f8, f0
    bge lbl_fn_8037F9AC_00001B0C
    b lbl_fn_8037F9AC_00001B10
lbl_fn_8037F9AC_00001B0C:
    fmr f8, f0
lbl_fn_8037F9AC_00001B10:
    lfs f9, lbl_80885A28
    fcmpo cr0, f9, f8
    ble lbl_fn_8037F9AC_00001B20
    b lbl_fn_8037F9AC_00001B34
lbl_fn_8037F9AC_00001B20:
    lfs f9, lbl_80885954
    fcmpo cr0, f9, f0
    bge lbl_fn_8037F9AC_00001B30
    b lbl_fn_8037F9AC_00001B34
lbl_fn_8037F9AC_00001B30:
    fmr f9, f0
lbl_fn_8037F9AC_00001B34:
    lwz r0, 0x12a4(r30)
    extrwi. r0, r0, 1, 28
    bne lbl_fn_8037F9AC_00001B54
    lwz r0, 0x54c(r30)
    rlwinm r3, r0, 0, 10, 10
    subis r0, r3, 0x20
    cmplwi r0, 0x0
    bne lbl_fn_8037F9AC_00001B78
lbl_fn_8037F9AC_00001B54:
    lfs f7, lbl_8088592C
    fcmpo cr0, f9, f7
    bge lbl_fn_8037F9AC_00001B78
    fadds f0, f9, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_8037F9AC_00001B70
    b lbl_fn_8037F9AC_00001B74
lbl_fn_8037F9AC_00001B70:
    fmr f7, f0
lbl_fn_8037F9AC_00001B74:
    fmr f9, f7
lbl_fn_8037F9AC_00001B78:
    lfs f0, 0x8(r31)
    addi r28, r1, 0x424
    addi r4, r1, 0x304
    fsubs f0, f9, f0
    mr r3, r28
    stfs f0, 0xa0c(r29)
    lfs f7, 0x48c(r1)
    lfs f0, 0x420(r1)
    lfs f9, 0x488(r1)
    fsubs f2, f7, f0
    lfs f8, 0x41c(r1)
    lfs f7, 0x484(r1)
    lfs f0, 0x418(r1)
    fsubs f8, f9, f8
    stfs f2, 0x30c(r1)
    fsubs f0, f7, f0
    stfs f8, 0x308(r1)
    stfs f0, 0x304(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x42c(r1)
    bl fn_805F9940
    lfs f0, lbl_808859C4
    fcmpo cr0, f1, f0
    ble lbl_fn_8037F9AC_00001BEC
    mr r3, r28
    mr r4, r28
    bl fn_805F98D0
    b lbl_fn_8037F9AC_00001C10
lbl_fn_8037F9AC_00001BEC:
    lfs f8, 0x420(r1)
    lfs f0, lbl_808858F8
    lfs f7, lbl_808858E8
    fadds f8, f8, f0
    lfs f0, lbl_80885904
    stfs f7, 0x424(r1)
    stfs f8, 0x420(r1)
    stfs f7, 0x428(r1)
    stfs f0, 0x42c(r1)
lbl_fn_8037F9AC_00001C10:
    li r10, 0x0
    stw r10, 0xbfc(r1)
    stw r10, 0xc00(r1)
    stw r10, 0xc04(r1)
    stw r10, 0xc08(r1)
    lwz r0, 0x9f4(r29)
    cmpwi r0, 0x1
    blt lbl_fn_8037F9AC_00001DCC
    lwz r0, 0x12a4(r30)
    extrwi. r0, r0, 1, 26
    bne lbl_fn_8037F9AC_00001DCC
    lis r28, 0x8000
    stw r10, 0xbac(r1)
    lwz r3, lbl_8087EE98
    addi r4, r1, 0xbc8
    stw r10, 0xbb0(r1)
    addi r5, r1, 0x484
    addi r6, r1, 0x418
    addi r7, r28, 0x8
    stw r10, 0xbb4(r1)
    li r8, 0x0
    li r9, 0x0
    stw r10, 0xbb8(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_8037F9AC_00001EC8
    lwz r0, 0x8f0(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8037F9AC_00001EC8
    lwz r3, lbl_8087EE98
    addi r4, r1, 0xb78
    addi r5, r1, 0x490
    addi r6, r1, 0xbd8
    addi r7, r28, 0x8
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ED34
    cmpwi r3, 0x0
    bne lbl_fn_8037F9AC_00001EC8
    addi r4, r1, 0xbd8
    lfs f2, 0xbe0(r1)
    addi r3, r1, 0x418
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    addi r3, r1, 0x3b8
    lfs f0, 0x48c(r1)
    lfs f9, 0x488(r1)
    fsubs f10, f0, f2
    lfs f8, 0x41c(r1)
    lfs f7, 0x484(r1)
    lfs f0, 0x418(r1)
    fsubs f8, f9, f8
    stfs f2, 0x420(r1)
    fsubs f0, f7, f0
    stfs f8, 0x3bc(r1)
    stfs f0, 0x3b8(r1)
    stfs f10, 0x3c0(r1)
    bl fn_805F9920
    lfs f0, lbl_80885958
    fcmpo cr0, f1, f0
    ble lbl_fn_8037F9AC_00001D70
    addi r4, r1, 0x3b8
    lfs f2, 0x3c0(r1)
    addi r3, r1, 0x2ec
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    mr r4, r3
    stfs f2, 0x2f4(r1)
    bl fn_805F98D0
    lfs f9, 0x2f4(r1)
    lfs f8, lbl_8088593C
    lfs f7, 0x2f0(r1)
    lfs f0, 0x2ec(r1)
    fmuls f9, f9, f8
    fmuls f10, f7, f8
    lfs f7, 0x41c(r1)
    fmuls f11, f0, f8
    lfs f8, 0x418(r1)
    lfs f0, 0x420(r1)
    fadds f7, f7, f10
    fadds f8, f8, f11
    stfs f11, 0x2f8(r1)
    fadds f0, f0, f9
    stfs f10, 0x2fc(r1)
    stfs f9, 0x300(r1)
    stfs f8, 0x418(r1)
    stfs f7, 0x41c(r1)
    stfs f0, 0x420(r1)
lbl_fn_8037F9AC_00001D70:
    lfs f7, 0x48c(r1)
    addi r28, r1, 0x424
    lfs f0, 0x420(r1)
    addi r4, r1, 0x2e0
    lfs f9, 0x488(r1)
    mr r3, r28
    fsubs f2, f7, f0
    lfs f8, 0x41c(r1)
    lfs f7, 0x484(r1)
    lfs f0, 0x418(r1)
    fsubs f8, f9, f8
    stfs f2, 0x2e8(r1)
    fsubs f0, f7, f0
    stfs f8, 0x2e4(r1)
    stfs f0, 0x2e0(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x42c(r1)
    bl fn_805F9940
    mr r3, r28
    mr r4, r28
    bl fn_805F98D0
    b lbl_fn_8037F9AC_00001EC8
lbl_fn_8037F9AC_00001DCC:
    lis r7, 0x8000
    lwz r3, lbl_8087EE98
    addi r4, r1, 0xbc8
    addi r5, r1, 0x484
    addi r6, r1, 0x418
    addi r7, r7, 0x8
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_8037F9AC_00001EC8
    lwz r0, 0x8f0(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8037F9AC_00001EC8
    addi r4, r1, 0xbd8
    lfs f2, 0xbe0(r1)
    addi r3, r1, 0x418
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    addi r3, r1, 0x3ac
    lfs f0, 0x48c(r1)
    lfs f9, 0x488(r1)
    fsubs f10, f0, f2
    lfs f8, 0x41c(r1)
    lfs f7, 0x484(r1)
    lfs f0, 0x418(r1)
    fsubs f8, f9, f8
    stfs f2, 0x420(r1)
    fsubs f0, f7, f0
    stfs f8, 0x3b0(r1)
    stfs f0, 0x3ac(r1)
    stfs f10, 0x3b4(r1)
    bl fn_805F9920
    lfs f0, lbl_80885958
    fcmpo cr0, f1, f0
    ble lbl_fn_8037F9AC_00001EC8
    addi r4, r1, 0x3ac
    lfs f2, 0x3b4(r1)
    addi r3, r1, 0x2c8
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    mr r4, r3
    stfs f2, 0x2d0(r1)
    bl fn_805F98D0
    lfs f9, 0x2d0(r1)
    lfs f8, lbl_8088593C
    lfs f7, 0x2cc(r1)
    lfs f0, 0x2c8(r1)
    fmuls f9, f9, f8
    fmuls f10, f7, f8
    lfs f7, 0x41c(r1)
    fmuls f11, f0, f8
    lfs f8, 0x418(r1)
    lfs f0, 0x420(r1)
    fadds f7, f7, f10
    fadds f8, f8, f11
    stfs f11, 0x2d4(r1)
    fadds f0, f0, f9
    stfs f10, 0x2d8(r1)
    stfs f9, 0x2dc(r1)
    stfs f8, 0x418(r1)
    stfs f7, 0x41c(r1)
    stfs f0, 0x420(r1)
lbl_fn_8037F9AC_00001EC8:
    lfs f7, 0x48c(r1)
    addi r4, r1, 0x2bc
    lfs f0, 0x420(r1)
    addi r3, r1, 0x424
    lfs f9, 0x488(r1)
    addi r5, r1, 0x2a4
    fsubs f10, f7, f0
    lfs f8, 0x41c(r1)
    lfs f7, 0x484(r1)
    addi r28, r1, 0x2b0
    fsubs f8, f9, f8
    lfs f0, 0x418(r1)
    fmr f2, f10
    stfs f8, 0x2c0(r1)
    fsubs f8, f7, f0
    lfs f0, lbl_808859C8
    stfs f2, 0x42c(r1)
    frsp f7, f2
    stfs f8, 0x2bc(r1)
    fneg f9, f7
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    frsp f2, f9
    lfs f8, 0x428(r1)
    lfs f7, 0x424(r1)
    stfs f10, 0x2c4(r1)
    fneg f8, f8
    fneg f7, f7
    fabs f10, f2
    stfs f8, 0x2a8(r1)
    stfs f7, 0x2a4(r1)
    frsp f8, f10
    psq_l f1, 0x0(r5), 0, 0
    stfs f9, 0x2ac(r1)
    fcmpo cr0, f8, f0
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x2b8(r1)
    bge lbl_fn_8037F9AC_00001F84
    lfs f7, 0x2b0(r1)
    lfs f0, lbl_808858E8
    fcmpo cr0, f7, f0
    ble lbl_fn_8037F9AC_00001F78
    lfs f0, lbl_808859CC
    b lbl_fn_8037F9AC_00001F7C
lbl_fn_8037F9AC_00001F78:
    lfs f0, lbl_808859D0
lbl_fn_8037F9AC_00001F7C:
    stfs f0, 0xf8(r1)
    b lbl_fn_8037F9AC_00001F98
lbl_fn_8037F9AC_00001F84:
    frsp f2, f2
    lfs f1, 0x2b0(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0xf8(r1)
lbl_fn_8037F9AC_00001F98:
    lfs f0, 0xf8(r1)
    addi r3, r1, 0x638
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f7, lbl_808858E8
    addi r4, r1, 0xe8
    lfs f30, 0x640(r1)
    mr r5, r4
    lfs f29, 0x63c(r1)
    addi r3, r1, 0x668
    lfs f27, 0x638(r1)
    lfs f26, 0x650(r1)
    lfs f25, 0x64c(r1)
    lfs f24, 0x648(r1)
    lfs f13, 0x660(r1)
    lfs f12, 0x65c(r1)
    lfs f11, 0x658(r1)
    lfs f10, 0x664(r1)
    lfs f9, 0x654(r1)
    lfs f8, 0x644(r1)
    lfs f0, lbl_808858F8
    psq_l f1, 0x0(r28), 0, 0
    lfs f2, 0x2b8(r1)
    stfs f7, 0x698(r1)
    stfs f7, 0x69c(r1)
    stfs f7, 0x6a0(r1)
    stfs f0, 0x6a4(r1)
    stfs f27, 0xb8(r1)
    stfs f29, 0xbc(r1)
    stfs f30, 0xc0(r1)
    stfs f27, 0x668(r1)
    stfs f29, 0x66c(r1)
    stfs f30, 0x670(r1)
    stfs f24, 0xc4(r1)
    stfs f25, 0xc8(r1)
    stfs f26, 0xcc(r1)
    stfs f24, 0x678(r1)
    stfs f25, 0x67c(r1)
    stfs f26, 0x680(r1)
    stfs f11, 0xd0(r1)
    stfs f12, 0xd4(r1)
    stfs f13, 0xd8(r1)
    stfs f11, 0x688(r1)
    stfs f12, 0x68c(r1)
    stfs f13, 0x690(r1)
    stfs f8, 0xdc(r1)
    stfs f9, 0xe0(r1)
    stfs f10, 0xe4(r1)
    stfs f8, 0x674(r1)
    stfs f9, 0x684(r1)
    stfs f10, 0x694(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xf0(r1)
    bl fn_805F9750
    lfs f2, 0xf0(r1)
    lfs f0, lbl_808859C8
    fabs f7, f2
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_8037F9AC_000020B4
    lfs f7, 0xec(r1)
    lfs f0, lbl_808858E8
    fcmpo cr0, f7, f0
    ble lbl_fn_8037F9AC_000020A4
    lfs f0, lbl_808859CC
    b lbl_fn_8037F9AC_000020A8
lbl_fn_8037F9AC_000020A4:
    lfs f0, lbl_808859D0
lbl_fn_8037F9AC_000020A8:
    fneg f0, f0
    stfs f0, 0xf4(r1)
    b lbl_fn_8037F9AC_000020C8
lbl_fn_8037F9AC_000020B4:
    lfs f1, 0xec(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0xf4(r1)
lbl_fn_8037F9AC_000020C8:
    lfs f7, 0x8(r31)
    addi r3, r1, 0xf4
    lfs f0, 0xa0c(r29)
    addi r4, r1, 0x430
    lfs f10, lbl_808858E8
    addi r5, r1, 0x298
    fadds f0, f7, f0
    psq_l f1, 0x0(r3), 0, 0
    fmr f2, f10
    lfs f11, 0x0(r31)
    lfs f8, 0x20(r31)
    addi r3, r1, 0x46c
    fneg f0, f0
    lfs f9, 0x460(r1)
    lfs f7, lbl_808858F8
    addi r27, r1, 0x8d8
    stfs f2, 0x2b8(r1)
    frsp f2, f2
    fsubs f12, f0, f9
    psq_st f1, 0x0(r4), 0, 0
    frsp f0, f2
    stfs f10, 0x298(r1)
    fmuls f12, f12, f8
    lfs f8, 0x434(r1)
    stfs f10, 0x29c(r1)
    fcmpu cr0, f10, f0
    fadds f9, f9, f12
    psq_st f1, 0x0(r28), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0x438(r1)
    stfs f2, 0x468(r1)
    fmr f2, f11
    stfs f10, 0xfc(r1)
    stfs f9, 0x460(r1)
    stfs f8, 0x464(r1)
    stfs f11, 0x2a0(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x474(r1)
    stfs f10, 0x904(r1)
    stfs f10, 0x8fc(r1)
    stfs f10, 0x8f8(r1)
    stfs f10, 0x8f4(r1)
    stfs f10, 0x8f0(r1)
    stfs f10, 0x8e8(r1)
    stfs f10, 0x8e4(r1)
    stfs f10, 0x8e0(r1)
    stfs f10, 0x8dc(r1)
    stfs f7, 0x900(r1)
    stfs f7, 0x8ec(r1)
    stfs f7, 0x8d8(r1)
    beq lbl_fn_8037F9AC_000021E8
    fmr f1, f0
    addi r3, r1, 0x548
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r27
    addi r4, r1, 0x548
    addi r5, r1, 0x518
    bl fn_805F89F0
    addi r3, r1, 0x518
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    psq_st f2, 0x8(r27), 0, 0
    psq_st f3, 0x10(r27), 0, 0
    psq_st f4, 0x18(r27), 0, 0
    psq_st f5, 0x20(r27), 0, 0
    psq_st f6, 0x28(r27), 0, 0
lbl_fn_8037F9AC_000021E8:
    lfs f0, lbl_808858E8
    lfs f1, 0x464(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_8037F9AC_00002248
    addi r3, r1, 0x5a8
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r27
    addi r4, r1, 0x5a8
    addi r5, r1, 0x578
    bl fn_805F89F0
    addi r3, r1, 0x578
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    psq_st f2, 0x8(r27), 0, 0
    psq_st f3, 0x10(r27), 0, 0
    psq_st f4, 0x18(r27), 0, 0
    psq_st f5, 0x20(r27), 0, 0
    psq_st f6, 0x28(r27), 0, 0
lbl_fn_8037F9AC_00002248:
    lfs f0, lbl_808858E8
    lfs f1, 0x460(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_8037F9AC_000022A8
    addi r3, r1, 0x608
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r27
    addi r4, r1, 0x608
    addi r5, r1, 0x5d8
    bl fn_805F89F0
    addi r3, r1, 0x5d8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    psq_st f2, 0x8(r27), 0, 0
    psq_st f3, 0x10(r27), 0, 0
    psq_st f4, 0x18(r27), 0, 0
    psq_st f5, 0x20(r27), 0, 0
    psq_st f6, 0x28(r27), 0, 0
lbl_fn_8037F9AC_000022A8:
    addi r4, r1, 0x46c
    addi r3, r1, 0x8d8
    mr r5, r4
    bl fn_805F93C0
    lfs f7, 0x474(r1)
    addi r3, r1, 0x28c
    lfs f0, 0x48c(r1)
    addi r27, r1, 0x490
    lfs f9, 0x470(r1)
    fadds f2, f7, f0
    lfs f8, 0x488(r1)
    lfs f7, 0x46c(r1)
    lfs f0, 0x484(r1)
    fadds f8, f9, f8
    stfs f2, 0x498(r1)
    fadds f0, f7, f0
    stfs f8, 0x290(r1)
    stfs f0, 0x28c(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    lwz r0, 0x55c(r30)
    stfs f2, 0x294(r1)
    cmpwi r0, 0x6
    bne lbl_fn_8037F9AC_00002400
    lwz r0, 0x560(r30)
    cmpwi r0, 0x4b
    bne lbl_fn_8037F9AC_00002400
    addi r4, r29, 0x960
    lfs f2, 0x968(r29)
    psq_l f1, 0x0(r4), 0, 0
    addi r28, r1, 0x3a0
    psq_st f1, 0x0(r28), 0, 0
    addi r3, r1, 0x8a8
    lfs f0, lbl_80885A2C
    li r4, 0x79
    stfs f2, 0x3a8(r1)
    lfs f7, 0x958(r29)
    fmuls f1, f7, f0
    bl fn_805F8E70
    mr r4, r28
    mr r5, r28
    addi r3, r1, 0x8a8
    bl fn_805F93C0
    lfs f0, lbl_808859E4
    addi r3, r1, 0x274
    lfs f13, 0x958(r29)
    lfs f8, 0x3a4(r1)
    fmuls f11, f0, f13
    lfs f9, 0x3a8(r1)
    lfs f0, 0x3a0(r1)
    lfs f7, 0x3a4(r1)
    fmuls f25, f8, f11
    lfs f10, 0x3a0(r1)
    fmuls f26, f0, f11
    lfs f0, 0x3a8(r1)
    fmuls f24, f9, f11
    lfs f9, lbl_80885A30
    fadds f11, f7, f25
    lfs f7, 0x488(r1)
    fadds f12, f10, f26
    lfs f8, 0x48c(r1)
    fadds f10, f0, f24
    lfs f0, 0x484(r1)
    fmadds f9, f9, f13, f11
    stfs f12, 0x3a0(r1)
    stfs f10, 0x3a8(r1)
    stfs f9, 0x3a4(r1)
    lfs f11, 0x95c(r29)
    stfs f26, 0x280(r1)
    fmuls f10, f10, f11
    fmuls f9, f9, f11
    stfs f25, 0x284(r1)
    fmuls f11, f12, f11
    fadds f2, f8, f10
    stfs f24, 0x288(r1)
    fadds f7, f7, f9
    fadds f0, f0, f11
    stfs f11, 0x268(r1)
    stfs f0, 0x274(r1)
    stfs f7, 0x278(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f9, 0x26c(r1)
    stfs f10, 0x270(r1)
    stfs f2, 0x27c(r1)
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0x498(r1)
lbl_fn_8037F9AC_00002400:
    addi r3, r1, 0x490
    lwz r0, 0x9f4(r29)
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r29, 0x978
    lfs f2, 0x498(r1)
    cmpwi r0, 0x1
    stfs f2, 0x980(r29)
    psq_st f1, 0x0(r3), 0, 0
    blt lbl_fn_8037F9AC_00002B08
    lwz r0, 0x12a4(r30)
    extrwi. r0, r0, 1, 26
    bne lbl_fn_8037F9AC_00002B08
    lfs f7, 0x480(r1)
    addi r3, r1, 0x25c
    lfs f0, 0x498(r1)
    lfs f9, 0x47c(r1)
    fsubs f10, f7, f0
    lfs f8, 0x494(r1)
    lfs f7, 0x478(r1)
    lfs f0, 0x490(r1)
    fsubs f8, f9, f8
    stfs f10, 0x264(r1)
    fsubs f0, f7, f0
    stfs f8, 0x260(r1)
    stfs f0, 0x25c(r1)
    bl fn_805F9940
    lfs f0, lbl_80885A34
    addi r3, r1, 0x478
    lfs f2, 0x480(r1)
    addi r27, r1, 0x394
    fmuls f24, f1, f0
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    addi r28, r1, 0x244
    lfs f30, lbl_808858E8
    addi r26, r1, 0x37c
    stfs f2, 0x39c(r1)
    addi r24, r1, 0x250
    lfs f31, lbl_8088593C
    addi r25, r1, 0x388
    lfs f29, lbl_808859C8
    addi r23, r1, 0xbd8
    lfs f25, lbl_808859E4
    li r22, 0x0
    li r21, 0x1
    lis r30, 0x8000
lbl_fn_8037F9AC_000024B8:
    lfs f7, 0x498(r1)
    addi r3, r1, 0x37c
    lfs f0, 0x39c(r1)
    lfs f9, 0x494(r1)
    fsubs f10, f7, f0
    lfs f8, 0x398(r1)
    lfs f7, 0x490(r1)
    lfs f0, 0x394(r1)
    fsubs f8, f9, f8
    stfs f10, 0x384(r1)
    fsubs f0, f7, f0
    stfs f8, 0x380(r1)
    stfs f0, 0x37c(r1)
    bl fn_805F9920
    fabs f0, f1
    frsp f0, f0
    fcmpo cr0, f0, f29
    bge lbl_fn_8037F9AC_0000250C
    stfs f30, 0x37c(r1)
    stfs f30, 0x380(r1)
    stfs f31, 0x384(r1)
lbl_fn_8037F9AC_0000250C:
    psq_l f1, 0x0(r26), 0, 0
    mr r3, r28
    lfs f2, 0x384(r1)
    mr r4, r28
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x24c(r1)
    bl fn_805F98D0
    lfs f0, 0x24c(r1)
    mr r6, r25
    lfs f7, 0x248(r1)
    addi r4, r1, 0xbc8
    fmuls f2, f0, f24
    lfs f0, 0x244(r1)
    fmuls f7, f7, f24
    lwz r3, lbl_8087EE98
    fmuls f0, f0, f24
    stfs f2, 0x258(r1)
    stfs f0, 0x250(r1)
    addi r5, r1, 0x394
    addi r7, r30, 0x8
    li r8, 0x0
    stfs f7, 0x254(r1)
    li r9, 0x0
    psq_l f1, 0x0(r24), 0, 0
    psq_st f1, 0x0(r25), 0, 0
    lfs f1, lbl_80885A38
    stfs f2, 0x390(r1)
    bl fn_8004D388
    cmpwi r3, 0x0
    beq lbl_fn_8037F9AC_000025B0
    lfs f7, 0x398(r1)
    addi r22, r22, 0x1
    lfs f0, 0xbdc(r1)
    lfs f8, 0xbd8(r1)
    fadds f7, f7, f0
    lfs f0, 0xbe0(r1)
    stfs f8, 0x394(r1)
    fmuls f7, f7, f25
    stfs f0, 0x39c(r1)
    stfs f7, 0x398(r1)
    b lbl_fn_8037F9AC_000025C0
lbl_fn_8037F9AC_000025B0:
    psq_l f1, 0x0(r23), 0, 0
    lfs f2, 0xbe0(r1)
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0x39c(r1)
lbl_fn_8037F9AC_000025C0:
    addi r21, r21, 0x1
    cmpwi r21, 0x8
    ble lbl_fn_8037F9AC_000024B8
    addi r3, r1, 0x394
    lfs f2, 0x39c(r1)
    addi r23, r1, 0x490
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r23), 0, 0
    stfs f2, 0x498(r1)
    lwz r0, 0x9f4(r29)
    cmpwi r0, 0x2
    bne lbl_fn_8037F9AC_000026FC
    lfs f0, lbl_808858E8
    frsp f2, f2
    addi r4, r29, 0x98c
    lis r3, lbl_8074E008@ha
    fmr f7, f0
    li r0, 0xc
    psq_st f1, 0x0(r4), 0, 0
    fmr f8, f0
    lfs f29, lbl_808858F8
    fmr f26, f0
    stfs f2, 0x994(r29)
    li r4, 0x7
    lfd f27, lbl_8074E008@l(r3)
    li r5, -0x2
    lfs f13, lbl_80885A44
    lfs f12, lbl_80885A40
    lfs f25, lbl_80885A3C
    lfs f24, lbl_8088595C
    mtctr r0
lbl_fn_8037F9AC_0000263C:
    cmpwi r5, 0x0
    mr r3, r5
    bge lbl_fn_8037F9AC_0000264C
    li r3, 0x0
lbl_fn_8037F9AC_0000264C:
    cmpw r5, r4
    ble lbl_fn_8037F9AC_00002658
    li r3, 0x7
lbl_fn_8037F9AC_00002658:
    xoris r0, r5, 0x8000
    stw r0, 0xc1c(r1)
    lfd f9, 0xc18(r1)
    fsubs f9, f9, f27
    fsubs f11, f29, f9
    fcmpo cr0, f11, f26
    bge lbl_fn_8037F9AC_00002678
    fneg f11, f11
lbl_fn_8037F9AC_00002678:
    fcmpo cr0, f11, f29
    bge lbl_fn_8037F9AC_000026A0
    fmuls f10, f25, f11
    fmuls f9, f12, f11
    fmuls f10, f10, f11
    fmuls f9, f9, f11
    fmsubs f9, f11, f10, f9
    fadds f9, f24, f9
    fdivs f30, f9, f12
    b lbl_fn_8037F9AC_000026C4
lbl_fn_8037F9AC_000026A0:
    fcmpo cr0, f11, f13
    bge lbl_fn_8037F9AC_000026C0
    fsubs f10, f11, f13
    fneg f9, f10
    fmuls f9, f9, f10
    fmuls f9, f10, f9
    fdivs f30, f9, f12
    b lbl_fn_8037F9AC_000026C4
lbl_fn_8037F9AC_000026C0:
    lfs f30, lbl_808858E8
lbl_fn_8037F9AC_000026C4:
    mulli r0, r3, 0xc
    addi r5, r5, 0x1
    add r3, r29, r0
    lfs f11, 0x98c(r3)
    lfs f10, 0x990(r3)
    lfs f9, 0x994(r3)
    fmadds f0, f30, f11, f0
    fmadds f7, f30, f10, f7
    fmadds f8, f30, f9, f8
    bdnz lbl_fn_8037F9AC_0000263C
    stfs f0, 0x490(r1)
    stfs f7, 0x494(r1)
    stfs f8, 0x498(r1)
    b lbl_fn_8037F9AC_000028CC
lbl_fn_8037F9AC_000026FC:
    cmpwi r22, 0x0
    ble lbl_fn_8037F9AC_000027C8
    lwz r0, 0x9f0(r29)
    addi r3, r1, 0x238
    stw r0, 0x880(r29)
    lfs f0, 0x4a4(r1)
    lfs f7, 0x498(r1)
    lfs f9, 0x494(r1)
    fsubs f10, f7, f0
    lfs f8, 0x4a0(r1)
    lfs f7, 0x490(r1)
    lfs f0, 0x49c(r1)
    fsubs f8, f9, f8
    stfs f10, 0x240(r1)
    fsubs f0, f7, f0
    stfs f8, 0x23c(r1)
    stfs f0, 0x238(r1)
    bl fn_805F9920
    lfs f0, lbl_808859C4
    fcmpo cr0, f1, f0
    ble lbl_fn_8037F9AC_000028CC
    lfs f7, 0x498(r1)
    addi r3, r1, 0x22c
    lfs f9, 0x4a4(r1)
    lfs f0, 0x494(r1)
    fsubs f13, f7, f9
    lfs f8, 0x4a0(r1)
    lfs f10, 0x9ec(r29)
    fsubs f11, f0, f8
    lfs f7, 0x490(r1)
    fmuls f12, f13, f10
    lfs f0, 0x49c(r1)
    stfs f11, 0xb0(r1)
    fmuls f11, f11, f10
    fadds f2, f12, f9
    fsubs f7, f7, f0
    stfs f13, 0xb4(r1)
    stfs f7, 0xac(r1)
    fmuls f9, f7, f10
    fadds f7, f11, f8
    stfs f11, 0xa4(r1)
    fadds f0, f9, f0
    stfs f7, 0x230(r1)
    stfs f0, 0x22c(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f9, 0xa0(r1)
    stfs f12, 0xa8(r1)
    stfs f2, 0x234(r1)
    psq_st f1, 0x0(r23), 0, 0
    stfs f2, 0x498(r1)
    b lbl_fn_8037F9AC_000028CC
lbl_fn_8037F9AC_000027C8:
    lwz r3, 0x880(r29)
    cmpwi r3, 0x0
    ble lbl_fn_8037F9AC_000028CC
    subi r0, r3, 0x1
    stw r0, 0x880(r29)
    lfs f0, 0x4a4(r1)
    addi r3, r1, 0x220
    lfs f7, 0x498(r1)
    lfs f9, 0x494(r1)
    fsubs f10, f7, f0
    lfs f8, 0x4a0(r1)
    lfs f7, 0x490(r1)
    lfs f0, 0x49c(r1)
    fsubs f8, f9, f8
    stfs f10, 0x228(r1)
    fsubs f0, f7, f0
    stfs f8, 0x224(r1)
    stfs f0, 0x220(r1)
    bl fn_805F9920
    lfs f0, lbl_808859C4
    fcmpo cr0, f1, f0
    ble lbl_fn_8037F9AC_000028CC
    lwz r3, 0x880(r29)
    lis r4, lbl_8074E008@ha
    lwz r0, 0x9f0(r29)
    addi r5, r1, 0x214
    xoris r3, r3, 0x8000
    stw r3, 0xc24(r1)
    xoris r0, r0, 0x8000
    lfd f8, lbl_8074E008@l(r4)
    stw r0, 0xc1c(r1)
    lfd f7, 0xc20(r1)
    lfd f0, 0xc18(r1)
    fsubs f7, f7, f8
    lfs f12, lbl_808858F8
    fsubs f0, f0, f8
    lfs f11, 0x498(r1)
    lfs f10, 0x4a4(r1)
    lfs f9, 0x494(r1)
    fdivs f13, f7, f0
    lfs f8, 0x4a0(r1)
    lfs f7, 0x490(r1)
    lfs f0, 0x49c(r1)
    fsubs f24, f11, f10
    fsubs f11, f12, f13
    fsubs f9, f9, f8
    stfs f24, 0x9c(r1)
    fsubs f7, f7, f0
    fmuls f13, f24, f11
    stfs f9, 0x98(r1)
    fmuls f12, f9, f11
    fmuls f9, f7, f11
    stfs f7, 0x94(r1)
    fadds f2, f13, f10
    fadds f7, f12, f8
    stfs f9, 0x88(r1)
    fadds f0, f9, f0
    stfs f7, 0x218(r1)
    stfs f0, 0x214(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f12, 0x8c(r1)
    stfs f13, 0x90(r1)
    stfs f2, 0x21c(r1)
    psq_st f1, 0x0(r23), 0, 0
    stfs f2, 0x498(r1)
lbl_fn_8037F9AC_000028CC:
    lfs f7, 0x48c(r1)
    addi r4, r1, 0x208
    lfs f0, 0x498(r1)
    addi r3, r1, 0x424
    lfs f9, 0x488(r1)
    addi r5, r1, 0x1f0
    fsubs f10, f7, f0
    lfs f8, 0x494(r1)
    lfs f7, 0x484(r1)
    addi r23, r1, 0x1fc
    fsubs f8, f9, f8
    lfs f0, 0x490(r1)
    fmr f2, f10
    stfs f8, 0x20c(r1)
    fsubs f8, f7, f0
    lfs f0, lbl_808859C8
    stfs f2, 0x42c(r1)
    frsp f7, f2
    stfs f8, 0x208(r1)
    fneg f9, f7
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    frsp f2, f9
    lfs f8, 0x428(r1)
    lfs f7, 0x424(r1)
    stfs f10, 0x210(r1)
    fneg f8, f8
    fneg f7, f7
    fabs f10, f2
    stfs f8, 0x1f4(r1)
    stfs f7, 0x1f0(r1)
    frsp f8, f10
    psq_l f1, 0x0(r5), 0, 0
    stfs f9, 0x1f8(r1)
    fcmpo cr0, f8, f0
    psq_st f1, 0x0(r23), 0, 0
    stfs f2, 0x204(r1)
    bge lbl_fn_8037F9AC_00002988
    lfs f7, 0x1fc(r1)
    lfs f0, lbl_808858E8
    fcmpo cr0, f7, f0
    ble lbl_fn_8037F9AC_0000297C
    lfs f0, lbl_808859CC
    b lbl_fn_8037F9AC_00002980
lbl_fn_8037F9AC_0000297C:
    lfs f0, lbl_808859D0
lbl_fn_8037F9AC_00002980:
    stfs f0, 0x80(r1)
    b lbl_fn_8037F9AC_0000299C
lbl_fn_8037F9AC_00002988:
    frsp f2, f2
    lfs f1, 0x1fc(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x80(r1)
lbl_fn_8037F9AC_0000299C:
    lfs f0, 0x80(r1)
    addi r3, r1, 0x4a8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f7, lbl_808858E8
    addi r4, r1, 0x70
    lfs f30, 0x4b0(r1)
    mr r5, r4
    lfs f29, 0x4ac(r1)
    addi r3, r1, 0x4d8
    lfs f27, 0x4a8(r1)
    lfs f26, 0x4c0(r1)
    lfs f25, 0x4bc(r1)
    lfs f24, 0x4b8(r1)
    lfs f13, 0x4d0(r1)
    lfs f12, 0x4cc(r1)
    lfs f11, 0x4c8(r1)
    lfs f10, 0x4d4(r1)
    lfs f9, 0x4c4(r1)
    lfs f8, 0x4b4(r1)
    lfs f0, lbl_808858F8
    psq_l f1, 0x0(r23), 0, 0
    lfs f2, 0x204(r1)
    stfs f7, 0x508(r1)
    stfs f7, 0x50c(r1)
    stfs f7, 0x510(r1)
    stfs f0, 0x514(r1)
    stfs f27, 0x40(r1)
    stfs f29, 0x44(r1)
    stfs f30, 0x48(r1)
    stfs f27, 0x4d8(r1)
    stfs f29, 0x4dc(r1)
    stfs f30, 0x4e0(r1)
    stfs f24, 0x4c(r1)
    stfs f25, 0x50(r1)
    stfs f26, 0x54(r1)
    stfs f24, 0x4e8(r1)
    stfs f25, 0x4ec(r1)
    stfs f26, 0x4f0(r1)
    stfs f11, 0x58(r1)
    stfs f12, 0x5c(r1)
    stfs f13, 0x60(r1)
    stfs f11, 0x4f8(r1)
    stfs f12, 0x4fc(r1)
    stfs f13, 0x500(r1)
    stfs f8, 0x64(r1)
    stfs f9, 0x68(r1)
    stfs f10, 0x6c(r1)
    stfs f8, 0x4e4(r1)
    stfs f9, 0x4f4(r1)
    stfs f10, 0x504(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x78(r1)
    bl fn_805F9750
    lfs f2, 0x78(r1)
    lfs f0, lbl_808859C8
    fabs f7, f2
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_8037F9AC_00002AB8
    lfs f7, 0x74(r1)
    lfs f0, lbl_808858E8
    fcmpo cr0, f7, f0
    ble lbl_fn_8037F9AC_00002AA8
    lfs f0, lbl_808859CC
    b lbl_fn_8037F9AC_00002AAC
lbl_fn_8037F9AC_00002AA8:
    lfs f0, lbl_808859D0
lbl_fn_8037F9AC_00002AAC:
    fneg f0, f0
    stfs f0, 0x7c(r1)
    b lbl_fn_8037F9AC_00002ACC
lbl_fn_8037F9AC_00002AB8:
    lfs f1, 0x74(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x7c(r1)
lbl_fn_8037F9AC_00002ACC:
    lfs f7, lbl_808858E8
    addi r3, r1, 0x7c
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x430
    fmr f2, f7
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x204(r1)
    frsp f2, f2
    lfs f0, 0x434(r1)
    stfs f7, 0x84(r1)
    psq_st f1, 0x0(r23), 0, 0
    stfs f2, 0x438(r1)
    stfs f0, 0x464(r1)
    stfs f2, 0x468(r1)
    b lbl_fn_8037F9AC_00002E4C
lbl_fn_8037F9AC_00002B08:
    lis r7, 0x8000
    lwz r3, lbl_8087EE98
    addi r4, r1, 0xbc8
    addi r5, r1, 0x484
    addi r6, r1, 0x490
    addi r7, r7, 0x8
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_8037F9AC_00002D44
    lwz r0, 0x8f0(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8037F9AC_00002D44
    lfs f7, 0x48c(r1)
    addi r3, r1, 0x370
    lfs f0, 0xbe0(r1)
    lfs f9, 0x488(r1)
    fsubs f10, f7, f0
    lfs f8, 0xbdc(r1)
    lfs f7, 0x484(r1)
    lfs f0, 0xbd8(r1)
    fsubs f8, f9, f8
    stfs f10, 0x378(r1)
    fsubs f0, f7, f0
    stfs f8, 0x374(r1)
    stfs f0, 0x370(r1)
    bl fn_805F9920
    lfs f0, lbl_808859DC
    fcmpo cr0, f1, f0
    ble lbl_fn_8037F9AC_00002CF4
    addi r4, r1, 0xbd8
    lfs f2, 0xbe0(r1)
    addi r23, r1, 0x490
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r23), 0, 0
    addi r3, r1, 0x1d8
    lfs f0, 0x48c(r1)
    addi r5, r1, 0x1cc
    lfs f9, 0x488(r1)
    mr r4, r3
    fsubs f10, f0, f2
    lfs f8, 0x494(r1)
    lfs f7, 0x484(r1)
    lfs f0, 0x490(r1)
    fsubs f8, f9, f8
    stfs f2, 0x498(r1)
    fsubs f0, f7, f0
    fmr f2, f10
    stfs f8, 0x1d0(r1)
    stfs f0, 0x1cc(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f10, 0x1d4(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x1e0(r1)
    bl fn_805F98D0
    lfs f9, 0x1e0(r1)
    addi r3, r1, 0x1c0
    lfs f8, lbl_8088593C
    lfs f7, 0x1dc(r1)
    fmuls f12, f9, f8
    lfs f0, 0x1d8(r1)
    fmuls f13, f7, f8
    lfs f7, 0x494(r1)
    fmuls f24, f0, f8
    lfs f9, 0x490(r1)
    fadds f8, f7, f13
    lfs f0, 0x498(r1)
    fadds f9, f9, f24
    lfs f10, 0x4a4(r1)
    fadds f7, f0, f12
    stfs f8, 0x494(r1)
    stfs f9, 0x490(r1)
    lfs f8, 0x4a0(r1)
    stfs f7, 0x498(r1)
    lfs f0, 0x49c(r1)
    lwz r0, 0x9f0(r29)
    stw r0, 0x880(r29)
    lfs f11, 0x498(r1)
    lfs f9, 0x494(r1)
    lfs f7, 0x490(r1)
    fsubs f10, f11, f10
    fsubs f8, f9, f8
    stfs f24, 0x1e4(r1)
    fsubs f0, f7, f0
    stfs f13, 0x1e8(r1)
    stfs f12, 0x1ec(r1)
    stfs f0, 0x1c0(r1)
    stfs f8, 0x1c4(r1)
    stfs f10, 0x1c8(r1)
    bl fn_805F9920
    lfs f0, lbl_808859C4
    fcmpo cr0, f1, f0
    ble lbl_fn_8037F9AC_00002CF4
    lfs f7, 0x498(r1)
    addi r3, r1, 0x1b4
    lfs f9, 0x4a4(r1)
    lfs f0, 0x494(r1)
    fsubs f13, f7, f9
    lfs f8, 0x4a0(r1)
    lfs f10, 0x9ec(r29)
    fsubs f11, f0, f8
    lfs f7, 0x490(r1)
    fmuls f12, f13, f10
    lfs f0, 0x49c(r1)
    stfs f11, 0x38(r1)
    fmuls f11, f11, f10
    fadds f2, f12, f9
    fsubs f7, f7, f0
    stfs f13, 0x3c(r1)
    stfs f7, 0x34(r1)
    fmuls f9, f7, f10
    fadds f7, f11, f8
    stfs f11, 0x2c(r1)
    fadds f0, f9, f0
    stfs f7, 0x1b8(r1)
    stfs f0, 0x1b4(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f9, 0x28(r1)
    stfs f12, 0x30(r1)
    stfs f2, 0x1bc(r1)
    psq_st f1, 0x0(r23), 0, 0
    stfs f2, 0x498(r1)
lbl_fn_8037F9AC_00002CF4:
    lis r6, lbl_807C7030@ha
    lis r7, 0x8000
    lwz r3, lbl_8087EE98
    addi r4, r1, 0xbc8
    lfs f1, lbl_80885A3C
    addi r5, r1, 0x490
    addi r6, r6, lbl_807C7030@l
    addi r7, r7, 0x8
    li r8, 0x0
    li r9, 0x0
    bl fn_8004D388
    cmpwi r3, 0x0
    beq lbl_fn_8037F9AC_00002E4C
    addi r4, r1, 0xbd8
    lfs f2, 0xbe0(r1)
    addi r3, r1, 0x490
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x498(r1)
    b lbl_fn_8037F9AC_00002E4C
lbl_fn_8037F9AC_00002D44:
    lwz r3, 0x880(r29)
    cmpwi r3, 0x0
    ble lbl_fn_8037F9AC_00002E4C
    subi r0, r3, 0x1
    stw r0, 0x880(r29)
    lfs f0, 0x4a4(r1)
    addi r3, r1, 0x1a8
    lfs f7, 0x498(r1)
    lfs f9, 0x494(r1)
    fsubs f10, f7, f0
    lfs f8, 0x4a0(r1)
    lfs f7, 0x490(r1)
    lfs f0, 0x49c(r1)
    fsubs f8, f9, f8
    stfs f10, 0x1b0(r1)
    fsubs f0, f7, f0
    stfs f8, 0x1ac(r1)
    stfs f0, 0x1a8(r1)
    bl fn_805F9920
    lfs f0, lbl_808859C4
    fcmpo cr0, f1, f0
    ble lbl_fn_8037F9AC_00002E4C
    lwz r3, 0x880(r29)
    lis r4, lbl_8074E008@ha
    lwz r0, 0x9f0(r29)
    addi r5, r1, 0x19c
    xoris r3, r3, 0x8000
    stw r3, 0xc24(r1)
    xoris r0, r0, 0x8000
    lfd f8, lbl_8074E008@l(r4)
    stw r0, 0xc1c(r1)
    addi r3, r1, 0x490
    lfd f7, 0xc20(r1)
    lfd f0, 0xc18(r1)
    fsubs f7, f7, f8
    lfs f12, lbl_808858F8
    fsubs f0, f0, f8
    lfs f11, 0x498(r1)
    lfs f10, 0x4a4(r1)
    lfs f9, 0x494(r1)
    fdivs f13, f7, f0
    lfs f8, 0x4a0(r1)
    lfs f7, 0x490(r1)
    lfs f0, 0x49c(r1)
    fsubs f24, f11, f10
    fsubs f11, f12, f13
    fsubs f9, f9, f8
    stfs f24, 0x24(r1)
    fsubs f7, f7, f0
    fmuls f13, f24, f11
    stfs f9, 0x20(r1)
    fmuls f12, f9, f11
    fmuls f9, f7, f11
    stfs f7, 0x1c(r1)
    fadds f2, f13, f10
    fadds f7, f12, f8
    stfs f9, 0x10(r1)
    fadds f0, f9, f0
    stfs f7, 0x1a0(r1)
    stfs f0, 0x19c(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f12, 0x14(r1)
    stfs f13, 0x18(r1)
    stfs f2, 0x1a4(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x498(r1)
lbl_fn_8037F9AC_00002E4C:
    lfs f7, 0x48c(r1)
    addi r3, r1, 0x190
    lfs f0, 0x498(r1)
    lfs f9, 0x488(r1)
    fsubs f10, f7, f0
    lfs f8, 0x494(r1)
    lfs f7, 0x484(r1)
    lfs f0, 0x490(r1)
    fsubs f8, f9, f8
    stfs f10, 0x198(r1)
    fsubs f0, f7, f0
    stfs f8, 0x194(r1)
    stfs f0, 0x190(r1)
    bl fn_805F9940
    lfs f7, 0x0(r31)
    fmr f24, f1
    lfs f0, lbl_808858F8
    fdivs f25, f1, f7
    fcmpo cr0, f25, f0
    bge lbl_fn_8037F9AC_00002EA0
    b lbl_fn_8037F9AC_00002EA4
lbl_fn_8037F9AC_00002EA0:
    fmr f25, f0
lbl_fn_8037F9AC_00002EA4:
    lfs f1, 0x464(r1)
    bl fn_8068A850
    lfs f0, 0xc(r31)
    frsp f9, f1
    lfs f7, 0x484(r1)
    fmuls f8, f0, f25
    lfs f0, lbl_808858F8
    fmadds f7, f9, f8, f7
    stfs f7, 0x484(r1)
    lfs f7, 0x0(r31)
    fdivs f24, f24, f7
    fcmpo cr0, f24, f0
    bge lbl_fn_8037F9AC_00002EDC
    b lbl_fn_8037F9AC_00002EE0
lbl_fn_8037F9AC_00002EDC:
    fmr f24, f0
lbl_fn_8037F9AC_00002EE0:
    lfs f1, 0x464(r1)
    bl fn_8068AD58
    lfs f7, 0xc(r31)
    frsp f8, f1
    addi r3, r1, 0x490
    lfs f0, 0x48c(r1)
    fneg f7, f7
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x498(r1)
    addi r4, r1, 0x484
    addi r5, r1, 0x454
    fmuls f7, f7, f24
    mr r3, r29
    fmadds f0, f8, f7, f0
    stfs f0, 0x48c(r1)
    psq_st f1, 0x8(r29), 0, 0
    stfs f2, 0x10(r29)
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x48c(r1)
    stfs f2, 0x1c(r29)
    lfs f2, 0x45c(r1)
    psq_st f1, 0x14(r29), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    stfs f28, 0x50(r29)
    psq_st f1, 0x20(r29), 0, 0
    stfs f2, 0x28(r29)
    bl fn_8004B378
    mr r4, r29
    addi r3, r29, 0x1f4
    bl fn_80392A04
    mr r3, r29
    bl fn_80392510
    mr r3, r29
    bl fn_80392FE8
    mr r3, r29
    bl fn_803918EC
    mr r3, r29
    bl fn_803920C8
    mr r3, r29
    bl fn_803928C0
    addi r3, r29, 0x1f4
    bl fn_8004B378
    lwz r3, lbl_8087EFB4
    addi r4, r29, 0x1f4
    bl fn_80116BD4
    li r0, 0x0
    stw r0, 0x8ec(r29)
lbl_fn_8037F9AC_00002F9C:
    li r0, 0xcd8
    addi r11, r1, 0xc60
    psq_lx f31, r1, r0, 0, 0
    lfd f31, 0xcd0(r1)
    li r0, 0xcc8
    psq_lx f30, r1, r0, 0, 0
    lfd f30, 0xcc0(r1)
    li r0, 0xcb8
    psq_lx f29, r1, r0, 0, 0
    lfd f29, 0xcb0(r1)
    li r0, 0xca8
    psq_lx f28, r1, r0, 0, 0
    lfd f28, 0xca0(r1)
    li r0, 0xc98
    psq_lx f27, r1, r0, 0, 0
    lfd f27, 0xc90(r1)
    li r0, 0xc88
    psq_lx f26, r1, r0, 0, 0
    lfd f26, 0xc80(r1)
    li r0, 0xc78
    psq_lx f25, r1, r0, 0, 0
    lfd f25, 0xc70(r1)
    li r0, 0xc68
    psq_lx f24, r1, r0, 0, 0
    lfd f24, 0xc60(r1)
    bl _restgpr_21
    lwz r0, 0xce4(r1)
    mtlr r0
    addi r1, r1, 0xce0
    blr
}
