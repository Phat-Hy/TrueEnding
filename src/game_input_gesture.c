#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_8004ED34(void);
extern void fn_8005B3CC(void);
extern void fn_8005B5F8(void);
extern void fn_8005B6E8(void);
extern void fn_800897D8(void);
extern void fn_80092814(void);
extern void fn_80092954(void);
extern void fn_8009373C(void);
extern void fn_80097C08(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800CB440(void);
extern void fn_800CB58C(void);
extern void fn_800CB5C8(void);
extern void fn_800CB6E4(void);
extern void fn_800D246C(void);
extern void fn_800DC12C(void);
extern void fn_801028E4(void);
extern void fn_80108F38(void);
extern void fn_8011FC10(void);
extern void fn_80129A48(void);
extern void fn_80129A6C(void);
extern void fn_8013655C(void);
extern void fn_80145334(void);
extern void fn_80149A30(void);
extern void fn_8014C540(void);
extern void fn_80151448(void);
extern void fn_8015495C(void);
extern void fn_8016E970(void);
extern void fn_8017039C(void);
extern void fn_801765D8(void);
extern void fn_80176ACC(void);
extern void fn_801781B0(void);
extern void fn_80232B7C(void);
extern void fn_80239DAC(void);
extern void fn_8023A8B4(void);
extern void fn_802EABE4(void);
extern void fn_802EAC70(void);
extern void fn_802EAF68(void);
extern void fn_802EB1F4(void);
extern void fn_802EB61C(void);
extern void fn_802EB814(void);
extern void fn_802EB97C(void);
extern void fn_802EBABC(void);
extern void fn_802EBB14(void);
extern void fn_802EBBA8(void);
extern void fn_802EBF40(void);
extern void fn_802EC098(void);
extern void fn_802EC160(void);
extern void fn_802EC280(void);
extern void fn_802F1120(void);
extern void fn_803E6850(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473F50(void);
extern void fn_804DA490(void);
extern void fn_804DA4A4(void);
extern void fn_805A3C58(void);
extern void fn_805A3D00(void);
extern void fn_805A3D6C(void);
extern void fn_805F8E70(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_80682428(void);
extern void fn_806827C4(void);
extern void fn_80684600(void);
extern void fn_8068AEA4(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 lbl_80748238[];
extern u8 lbl_80748250[];
extern u8 lbl_80748488[];
extern u8 lbl_807772B0[];
extern u8 lbl_807772D0[];
extern u8 lbl_8078778C[];

/* Small data declarations */
extern u32 lbl_8087D708;
extern u32 lbl_8087EE98;
extern u32 lbl_8087EF10;
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F408;
extern u32 lbl_8087F430;
extern u32 lbl_8087F490;
extern u32 lbl_8087F610;
extern u32 lbl_80884814;
extern u32 lbl_80884818;
extern u32 lbl_8088481C;
extern u32 lbl_80884820;
extern u32 lbl_80884824;
extern u32 lbl_80884828;
extern u32 lbl_8088482C;
extern u32 lbl_80884830;
extern u32 lbl_80884834;
extern u32 lbl_80884838;
extern u32 lbl_8088483C;
extern u32 lbl_80884840;
extern u32 lbl_80884844;
extern u32 lbl_80884848;
extern u32 lbl_8088484C;
extern u32 lbl_80884850;
extern u32 lbl_80884854;
extern u32 lbl_80884858;
extern u32 lbl_8088485C;
extern u32 lbl_80884860;

/* Function declarations */
void fn_802ED3F0(void);
void fn_802ED82C(void);
void fn_802ED830(void);
void fn_802EDA18(void);
void fn_802EDB34(void);
void fn_802EDDA0(void);
void fn_802EDED0(void);
void fn_802EDFB0(void);
void fn_802EDFE4(void);
void fn_802EE20C(void);
void fn_802EE600(void);
void fn_802EE604(void);
void fn_802EE7B8(void);
void fn_802EE838(void);
void fn_802EE9A8(void);
void fn_802EEBA8(void);

asm void fn_802ED3F0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r0, 0x12a4(r3)
    lwz r4, 0xd1c(r3)
    extrwi. r0, r0, 1, 29
    stw r4, 0x14f4(r3)
    beq lbl_fn_802ED3F0_000000AC
    lwz r7, 0x38(r3)
    li r5, 0x0
    li r4, 0x0
    li r6, 0x0
    rlwinm r0, r7, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_802ED3F0_00000054
    clrlwi r0, r7, 31
    cmplwi r0, 0x1
    beq lbl_fn_802ED3F0_00000054
    li r6, 0x1
lbl_fn_802ED3F0_00000054:
    cmpwi r6, 0x0
    beq lbl_fn_802ED3F0_00000070
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_802ED3F0_00000070
    li r4, 0x1
lbl_fn_802ED3F0_00000070:
    cmpwi r4, 0x0
    beq lbl_fn_802ED3F0_000000A4
    lwz r0, 0x55c(r3)
    li r4, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_802ED3F0_00000098
    lwz r0, 0x560(r3)
    cmpwi r0, 0x1c
    bne lbl_fn_802ED3F0_00000098
    li r4, 0x1
lbl_fn_802ED3F0_00000098:
    cmpwi r4, 0x0
    bne lbl_fn_802ED3F0_000000A4
    li r5, 0x1
lbl_fn_802ED3F0_000000A4:
    cmpwi r5, 0x0
    bne lbl_fn_802ED3F0_0000025C
lbl_fn_802ED3F0_000000AC:
    lwz r7, 0x38(r3)
    li r5, 0x0
    li r4, 0x0
    li r6, 0x0
    rlwinm r0, r7, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_802ED3F0_000000D8
    clrlwi r0, r7, 31
    cmplwi r0, 0x1
    beq lbl_fn_802ED3F0_000000D8
    li r6, 0x1
lbl_fn_802ED3F0_000000D8:
    cmpwi r6, 0x0
    beq lbl_fn_802ED3F0_000000F4
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_802ED3F0_000000F4
    li r4, 0x1
lbl_fn_802ED3F0_000000F4:
    cmpwi r4, 0x0
    beq lbl_fn_802ED3F0_00000128
    lwz r0, 0x55c(r3)
    li r4, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_802ED3F0_0000011C
    lwz r0, 0x560(r3)
    cmpwi r0, 0x1c
    bne lbl_fn_802ED3F0_0000011C
    li r4, 0x1
lbl_fn_802ED3F0_0000011C:
    cmpwi r4, 0x0
    bne lbl_fn_802ED3F0_00000128
    li r5, 0x1
lbl_fn_802ED3F0_00000128:
    cmpwi r5, 0x0
    beq lbl_fn_802ED3F0_00000170
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_802ED3F0_00000170
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0xf8(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_802ED3F0_00000170
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x0
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_802ED3F0_00000170:
    lwz r3, 0x162c(r31)
    cmpwi r3, 0x0
    ble lbl_fn_802ED3F0_00000184
    subi r0, r3, 0x1
    stw r0, 0x162c(r31)
lbl_fn_802ED3F0_00000184:
    lwz r4, 0x940(r31)
    lis r0, 0x4330
    stw r0, 0x10(r1)
    lis r3, lbl_80748238@ha
    xoris r0, r4, 0x8000
    lfd f3, lbl_80748238@l(r3)
    stw r0, 0x14(r1)
    lfs f1, 0x7d8(r31)
    lfd f2, 0x10(r1)
    lfs f0, lbl_80884814
    fsubs f2, f2, f3
    fdivs f1, f1, f2
    fcmpo cr0, f1, f0
    bge lbl_fn_802ED3F0_000001E0
    lwz r4, 0x1610(r31)
    lwz r3, 0x161c(r31)
    lwz r0, 0x1628(r31)
    lfs f0, lbl_80884818
    stw r4, 0x150c(r31)
    stw r3, 0x1514(r31)
    stw r0, 0x1510(r31)
    stfs f0, 0x1538(r31)
    b lbl_fn_802ED3F0_0000022C
lbl_fn_802ED3F0_000001E0:
    lfs f0, lbl_8088481C
    fcmpo cr0, f1, f0
    bge lbl_fn_802ED3F0_0000020C
    lwz r4, 0x160c(r31)
    lwz r3, 0x1618(r31)
    lwz r0, 0x1624(r31)
    stw r4, 0x150c(r31)
    stw r3, 0x1514(r31)
    stw r0, 0x1510(r31)
    stfs f0, 0x1538(r31)
    b lbl_fn_802ED3F0_0000022C
lbl_fn_802ED3F0_0000020C:
    lwz r4, 0x1608(r31)
    lwz r3, 0x1614(r31)
    lwz r0, 0x1620(r31)
    lfs f0, lbl_80884820
    stw r4, 0x150c(r31)
    stw r3, 0x1514(r31)
    stw r0, 0x1510(r31)
    stfs f0, 0x1538(r31)
lbl_fn_802ED3F0_0000022C:
    lwz r0, 0x162c(r31)
    cmpwi r0, 0x0
    ble lbl_fn_802ED3F0_00000248
    lfs f1, 0x1538(r31)
    lfs f0, lbl_80884824
    fmuls f0, f1, f0
    stfs f0, 0x1538(r31)
lbl_fn_802ED3F0_00000248:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x104(r12)
    mtctr r12
    bctrl
lbl_fn_802ED3F0_0000025C:
    lwz r0, 0x1528(r31)
    cmpwi r0, 0x0
    bne lbl_fn_802ED3F0_00000284
    lwz r6, 0x1604(r31)
    mr r4, r31
    lwz r0, 0x1540(r31)
    li r7, 0x0
    lwz r3, lbl_8087F490
    subf r5, r0, r6
    bl fn_803E6850
lbl_fn_802ED3F0_00000284:
    lwz r6, 0x38(r31)
    li r4, 0x0
    li r3, 0x0
    li r5, 0x0
    rlwinm r0, r6, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_802ED3F0_000002B0
    clrlwi r0, r6, 31
    cmplwi r0, 0x1
    beq lbl_fn_802ED3F0_000002B0
    li r5, 0x1
lbl_fn_802ED3F0_000002B0:
    cmpwi r5, 0x0
    beq lbl_fn_802ED3F0_000002CC
    lwz r0, 0x7e0(r31)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_802ED3F0_000002CC
    li r3, 0x1
lbl_fn_802ED3F0_000002CC:
    cmpwi r3, 0x0
    beq lbl_fn_802ED3F0_00000300
    lwz r0, 0x55c(r31)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_802ED3F0_000002F4
    lwz r0, 0x560(r31)
    cmpwi r0, 0x1c
    bne lbl_fn_802ED3F0_000002F4
    li r3, 0x1
lbl_fn_802ED3F0_000002F4:
    cmpwi r3, 0x0
    bne lbl_fn_802ED3F0_00000300
    li r4, 0x1
lbl_fn_802ED3F0_00000300:
    cmpwi r4, 0x0
    bne lbl_fn_802ED3F0_0000032C
    addi r3, r31, 0x15a0
    li r4, 0x5
    li r5, 0x0
    bl fn_800CB5C8
    addi r3, r31, 0x15a4
    li r4, 0x5
    li r5, 0x0
    bl fn_800CB5C8
    b lbl_fn_802ED3F0_00000418
lbl_fn_802ED3F0_0000032C:
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x7
    bne lbl_fn_802ED3F0_000003A4
    lwz r0, 0x14f8(r31)
    cmpwi r0, 0x1
    bne lbl_fn_802ED3F0_000003A4
    addi r3, r31, 0x15a0
    li r4, 0x5
    li r5, 0x0
    bl fn_800CB5C8
    addi r3, r31, 0x15a4
    bl fn_800CB58C
    cmpwi r3, 0x0
    bne lbl_fn_802ED3F0_00000400
    lis r4, lbl_80748250@ha
    lfs f1, lbl_80884820
    addi r4, r4, lbl_80748250@l
    addi r3, r1, 0xc
    addi r4, r4, 0x179
    addi r5, r31, 0x528
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r31, 0x15a4
    addi r4, r1, 0xc
    bl fn_800CB440
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_802ED3F0_00000400
lbl_fn_802ED3F0_000003A4:
    addi r3, r31, 0x15a4
    li r4, 0x5
    li r5, 0x0
    bl fn_800CB5C8
    addi r3, r31, 0x15a0
    bl fn_800CB58C
    cmpwi r3, 0x0
    bne lbl_fn_802ED3F0_00000400
    lis r4, lbl_80748250@ha
    lfs f1, lbl_80884820
    addi r4, r4, lbl_80748250@l
    addi r3, r1, 0x8
    addi r4, r4, 0x186
    addi r5, r31, 0x528
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r31, 0x15a0
    addi r4, r1, 0x8
    bl fn_800CB440
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_802ED3F0_00000400:
    addi r3, r31, 0x15a0
    addi r4, r31, 0x528
    bl fn_800CB6E4
    addi r3, r31, 0x15a4
    addi r4, r31, 0x528
    bl fn_800CB6E4
lbl_fn_802ED3F0_00000418:
    mr r3, r31
    bl fn_8014C540
    mr r3, r31
    bl fn_80145334
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_802ED82C(void)
{
    nofralloc
    b fn_802EBABC
}

asm void fn_802ED830(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r4, 0x1524(r3)
    cmpwi r4, 0x0
    ble lbl_fn_802ED830_00000474
    lwz r0, 0x58c(r3)
    cmpwi r0, 0xf
    beq lbl_fn_802ED830_00000474
    subi r0, r4, 0x1
    stw r0, 0x1524(r3)
lbl_fn_802ED830_00000474:
    lwz r0, 0x1528(r3)
    cmpwi r0, 0x0
    beq lbl_fn_802ED830_00000508
    lwz r0, 0x1530(r3)
    cmpwi r0, 0x1
    bne lbl_fn_802ED830_000004C4
    lwz r0, 0x1600(r3)
    lwz r4, 0x1534(r3)
    mulli r0, r0, 0x1e
    lfs f0, lbl_80884828
    addi r4, r4, 0x1
    stfs f0, 0x152c(r3)
    cmpw r4, r0
    stw r4, 0x1534(r3)
    blt lbl_fn_802ED830_00000508
    li r4, 0x2
    li r0, 0x0
    stw r4, 0x1530(r3)
    stw r0, 0x1534(r3)
    b lbl_fn_802ED830_00000508
lbl_fn_802ED830_000004C4:
    cmpwi r0, 0x2
    bne lbl_fn_802ED830_00000500
    lwz r0, 0x15fc(r3)
    lwz r4, 0x1534(r3)
    mulli r0, r0, 0x1e
    lfs f0, 0x15f8(r3)
    addi r4, r4, 0x1
    stfs f0, 0x152c(r3)
    cmpw r4, r0
    stw r4, 0x1534(r3)
    blt lbl_fn_802ED830_00000508
    li r0, 0x0
    stw r0, 0x1530(r3)
    stw r0, 0x1534(r3)
    b lbl_fn_802ED830_00000508
lbl_fn_802ED830_00000500:
    lfs f0, lbl_80884828
    stfs f0, 0x152c(r3)
lbl_fn_802ED830_00000508:
    lwz r0, 0xd18(r3)
    li r4, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_802ED830_00000524
    lwz r0, 0xd1c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802ED830_00000528
lbl_fn_802ED830_00000524:
    li r4, 0x0
lbl_fn_802ED830_00000528:
    cmpwi r4, 0x0
    bne lbl_fn_802ED830_00000540
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    b lbl_fn_802ED830_00000608
lbl_fn_802ED830_00000540:
    lwz r0, 0x14f4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_802ED830_00000608
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x6
    beq lbl_fn_802ED830_0000058C
    cmpwi r0, 0x7
    beq lbl_fn_802ED830_00000598
    cmpwi r0, 0x8
    beq lbl_fn_802ED830_000005A4
    cmpwi r0, 0xd
    beq lbl_fn_802ED830_000005B0
    cmpwi r0, 0xe
    beq lbl_fn_802ED830_000005BC
    cmpwi r0, 0xf
    beq lbl_fn_802ED830_000005C8
    cmpwi r0, 0x2
    beq lbl_fn_802ED830_000005D4
    b lbl_fn_802ED830_000005EC
lbl_fn_802ED830_0000058C:
    mr r3, r31
    bl fn_802EAC70
    b lbl_fn_802ED830_00000608
lbl_fn_802ED830_00000598:
    mr r3, r31
    bl fn_802EAF68
    b lbl_fn_802ED830_00000608
lbl_fn_802ED830_000005A4:
    mr r3, r31
    bl fn_802EB1F4
    b lbl_fn_802ED830_00000608
lbl_fn_802ED830_000005B0:
    mr r3, r31
    bl fn_802EB61C
    b lbl_fn_802ED830_00000608
lbl_fn_802ED830_000005BC:
    mr r3, r31
    bl fn_802EB814
    b lbl_fn_802ED830_00000608
lbl_fn_802ED830_000005C8:
    mr r3, r31
    bl fn_802EB97C
    b lbl_fn_802ED830_00000608
lbl_fn_802ED830_000005D4:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0xec(r12)
    mtctr r12
    bctrl
    b lbl_fn_802ED830_00000608
lbl_fn_802ED830_000005EC:
    mr r3, r31
    bl fn_802EABE4
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x11c(r12)
    mtctr r12
    bctrl
lbl_fn_802ED830_00000608:
    lwz r3, 0x14fc(r31)
    addi r0, r3, 0x1
    stw r0, 0x14fc(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802EDA18(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    lwz r5, 0xd1c(r3)
    cmpwi r5, 0x0
    beq lbl_fn_802EDA18_00000730
    addi r4, r1, 0x14
    psq_l f1, 0x528(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lfs f2, 0x530(r5)
    lfs f0, 0x530(r3)
    lfs f5, 0x18(r1)
    lfs f4, 0x52c(r3)
    fsubs f6, f2, f0
    lfs f0, 0x528(r3)
    addi r3, r1, 0x8
    lfs f3, 0x14(r1)
    fsubs f4, f5, f4
    stfs f2, 0x1c(r1)
    fsubs f0, f3, f0
    mr r4, r3
    stfs f4, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f6, 0x10(r1)
    bl fn_805F98D0
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x6
    beq lbl_fn_802EDA18_000006CC
    cmpwi r0, 0x7
    beq lbl_fn_802EDA18_000006D8
    cmpwi r0, 0x8
    beq lbl_fn_802EDA18_00000730
    cmpwi r0, 0xd
    beq lbl_fn_802EDA18_000006E4
    cmpwi r0, 0xe
    beq lbl_fn_802EDA18_000006F0
    cmpwi r0, 0x2
    beq lbl_fn_802EDA18_000006FC
    b lbl_fn_802EDA18_00000708
lbl_fn_802EDA18_000006CC:
    mr r3, r31
    bl fn_802EBB14
    b lbl_fn_802EDA18_00000730
lbl_fn_802EDA18_000006D8:
    mr r3, r31
    bl fn_802EBBA8
    b lbl_fn_802EDA18_00000730
lbl_fn_802EDA18_000006E4:
    mr r3, r31
    bl fn_802EBF40
    b lbl_fn_802EDA18_00000730
lbl_fn_802EDA18_000006F0:
    mr r3, r31
    bl fn_802EC098
    b lbl_fn_802EDA18_00000730
lbl_fn_802EDA18_000006FC:
    mr r3, r31
    bl fn_802EC280
    b lbl_fn_802EDA18_00000730
lbl_fn_802EDA18_00000708:
    mr r3, r31
    bl fn_802EBABC
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x6
    beq lbl_fn_802EDA18_00000730
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x11c(r12)
    mtctr r12
    bctrl
lbl_fn_802EDA18_00000730:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_802EDB34(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    mr r31, r3
    stw r30, 0x58(r1)
    lwz r0, 0x1528(r3)
    cmpwi r0, 0x0
    beq lbl_fn_802EDB34_000007A4
    lfs f3, 0x15c4(r3)
    lis r4, lbl_80748250@ha
    lfs f2, 0x15c8(r3)
    addi r4, r4, lbl_80748250@l
    lfs f1, 0x15cc(r3)
    addi r4, r4, 0x193
    lfs f0, 0x15d0(r3)
    li r5, 0x0
    stfs f3, 0xf0(r3)
    stfs f2, 0xf4(r3)
    stfs f1, 0xf8(r3)
    stfs f0, 0xfc(r3)
    addi r3, r3, 0xb0
    bl fn_8009373C
    b lbl_fn_802EDB34_00000990
lbl_fn_802EDB34_000007A4:
    lfs f0, lbl_80884820
    lis r30, lbl_80748250@ha
    addi r30, r30, lbl_80748250@l
    stfs f0, 0x18(r1)
    addi r4, r30, 0x193
    li r5, 0x1
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    stfs f0, 0xf0(r3)
    stfs f0, 0xf4(r3)
    stfs f0, 0xf8(r3)
    stfs f0, 0xfc(r3)
    addi r3, r3, 0xb0
    bl fn_8009373C
    lwz r4, 0x940(r31)
    lis r0, 0x4330
    stw r0, 0x38(r1)
    lis r3, lbl_80748238@ha
    xoris r0, r4, 0x8000
    lfd f3, lbl_80748238@l(r3)
    stw r0, 0x3c(r1)
    lfs f1, 0x7d8(r31)
    lfd f2, 0x38(r1)
    lfs f0, lbl_80884814
    fsubs f2, f2, f3
    fdivs f1, f1, f2
    fcmpo cr0, f1, f0
    bge lbl_fn_802EDB34_00000990
    lfs f1, lbl_80884820
    addi r3, r31, 0xb0
    lfs f0, lbl_8088482C
    addi r4, r30, 0x19f
    stfs f1, 0x28(r1)
    stfs f0, 0x2c(r1)
    stfs f0, 0x30(r1)
    stfs f1, 0x34(r1)
    bl fn_80092954
    cmpwi r3, 0x0
    beq lbl_fn_802EDB34_000008DC
    lfs f4, lbl_80884830
    addi r3, r31, 0xb0
    lfs f0, 0x28(r1)
    addi r4, r30, 0x19f
    lfs f2, 0x2c(r1)
    fmuls f3, f4, f0
    lfs f1, 0x30(r1)
    lfs f0, 0x34(r1)
    fmuls f2, f4, f2
    fmuls f1, f4, f1
    fmuls f0, f4, f0
    fctiwz f3, f3
    fctiwz f2, f2
    fctiwz f1, f1
    stfd f3, 0x38(r1)
    fctiwz f0, f0
    stfd f2, 0x40(r1)
    lwz r7, 0x3c(r1)
    stfd f1, 0x48(r1)
    lwz r6, 0x44(r1)
    stfd f0, 0x50(r1)
    lwz r5, 0x4c(r1)
    lwz r0, 0x54(r1)
    stb r7, 0xc(r1)
    stb r6, 0xd(r1)
    stb r5, 0xe(r1)
    stb r0, 0xf(r1)
    lwz r0, 0xc(r1)
    stw r0, 0x14(r1)
    bl fn_80092954
    lbz r0, 0x14(r1)
    stb r0, 0x18(r3)
    lbz r0, 0x15(r1)
    stb r0, 0x19(r3)
    lbz r0, 0x16(r1)
    stb r0, 0x1a(r3)
    lbz r0, 0x17(r1)
    stb r0, 0x1b(r3)
lbl_fn_802EDB34_000008DC:
    lis r30, lbl_80748250@ha
    addi r3, r31, 0xb0
    addi r30, r30, lbl_80748250@l
    addi r4, r30, 0x1aa
    bl fn_80092954
    cmpwi r3, 0x0
    beq lbl_fn_802EDB34_00000990
    lfs f4, lbl_80884830
    addi r3, r31, 0xb0
    lfs f0, 0x28(r1)
    addi r4, r30, 0x1aa
    lfs f2, 0x2c(r1)
    fmuls f3, f4, f0
    lfs f1, 0x30(r1)
    lfs f0, 0x34(r1)
    fmuls f2, f4, f2
    fmuls f1, f4, f1
    fmuls f0, f4, f0
    fctiwz f3, f3
    fctiwz f2, f2
    fctiwz f1, f1
    stfd f3, 0x50(r1)
    fctiwz f0, f0
    stfd f2, 0x48(r1)
    lwz r7, 0x54(r1)
    stfd f1, 0x40(r1)
    lwz r6, 0x4c(r1)
    stfd f0, 0x38(r1)
    lwz r5, 0x44(r1)
    lwz r0, 0x3c(r1)
    stb r7, 0x8(r1)
    stb r6, 0x9(r1)
    stb r5, 0xa(r1)
    stb r0, 0xb(r1)
    lwz r0, 0x8(r1)
    stw r0, 0x10(r1)
    bl fn_80092954
    lbz r0, 0x10(r1)
    stb r0, 0x18(r3)
    lbz r0, 0x11(r1)
    stb r0, 0x19(r3)
    lbz r0, 0x12(r1)
    stb r0, 0x1a(r3)
    lbz r0, 0x13(r1)
    stb r0, 0x1b(r3)
lbl_fn_802EDB34_00000990:
    mr r3, r31
    bl fn_80149A30
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_802EDDA0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x1524(r3)
    cmpwi r0, 0x0
    bgt lbl_fn_802EDDA0_00000A38
    lwz r5, 0x8(r4)
    lwz r0, 0x4(r5)
    cmpwi r0, 0x134
    beq lbl_fn_802EDDA0_00000A38
    li r0, 0x0
    stw r0, 0x68(r4)
    li r0, 0x1
    lwz r5, 0xc4(r5)
    stw r5, 0x88(r4)
    stw r0, 0x84(r4)
    stw r0, 0x90(r4)
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 29
    bne lbl_fn_802EDDA0_00000A24
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    b lbl_fn_802EDDA0_00000AC8
lbl_fn_802EDDA0_00000A24:
    lwz r12, 0x0(r3)
    lwz r12, 0x118(r12)
    mtctr r12
    bctrl
    b lbl_fn_802EDDA0_00000AC8
lbl_fn_802EDDA0_00000A38:
    lfs f2, 0x10(r4)
    lfs f3, lbl_80884828
    lfs f1, 0x14(r4)
    lfs f0, 0x18(r4)
    fmuls f2, f2, f3
    fmuls f1, f1, f3
    lwz r3, 0x8(r4)
    fmuls f0, f0, f3
    stfs f2, 0x10(r4)
    stfs f1, 0x14(r4)
    stfs f0, 0x18(r4)
    lwz r0, 0x4(r3)
    cmpwi r0, 0x134
    bne lbl_fn_802EDDA0_00000A7C
    lwz r0, 0xc(r4)
    ori r0, r0, 0x800
    stw r0, 0xc(r4)
lbl_fn_802EDDA0_00000A7C:
    mr r3, r30
    mr r4, r31
    bl fn_80151448
    lwz r0, 0x12a4(r30)
    extrwi. r0, r0, 1, 29
    bne lbl_fn_802EDDA0_00000AB0
    lwz r12, 0x0(r30)
    mr r3, r30
    mr r4, r31
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    b lbl_fn_802EDDA0_00000AC8
lbl_fn_802EDDA0_00000AB0:
    lwz r12, 0x0(r30)
    mr r3, r30
    mr r4, r31
    lwz r12, 0x118(r12)
    mtctr r12
    bctrl
lbl_fn_802EDDA0_00000AC8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802EDED0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_802EDED0_00000B0C
    bl fn_802EC280
    b lbl_fn_802EDED0_00000BAC
lbl_fn_802EDED0_00000B0C:
    lwz r4, 0x8(r4)
    lwz r0, 0x4(r4)
    cmpwi r0, 0x134
    bne lbl_fn_802EDED0_00000B58
    lwz r0, 0x1524(r3)
    cmpwi r0, 0x0
    ble lbl_fn_802EDED0_00000B30
    bl fn_802EC160
    b lbl_fn_802EDED0_00000BAC
lbl_fn_802EDED0_00000B30:
    lwz r4, 0x1540(r3)
    lwz r0, 0x1604(r3)
    addi r4, r4, 0x1
    stw r4, 0x1540(r3)
    cmpw r4, r0
    blt lbl_fn_802EDED0_00000BAC
    bl fn_802EBF40
    li r0, 0x0
    stw r0, 0x1540(r31)
    b lbl_fn_802EDED0_00000BAC
lbl_fn_802EDED0_00000B58:
    lwz r5, 0x940(r3)
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lis r4, lbl_80748238@ha
    xoris r0, r5, 0x8000
    lfd f3, lbl_80748238@l(r4)
    stw r0, 0xc(r1)
    lfs f1, 0x7d8(r3)
    lfd f2, 0x8(r1)
    lfs f0, lbl_80884834
    fsubs f2, f2, f3
    fdivs f1, f1, f2
    fcmpo cr0, f1, f0
    bge lbl_fn_802EDED0_00000BAC
    lwz r0, 0x1530(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802EDED0_00000BAC
    li r4, 0x1
    li r0, 0x0
    stw r4, 0x1530(r3)
    stw r0, 0x1534(r3)
lbl_fn_802EDED0_00000BAC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_802EDFB0(void)
{
    nofralloc
    lwz r0, 0x58c(r3)
    stw r0, 0x0(r4)
    lwz r0, 0x14bc(r3)
    stw r0, 0x4(r4)
    lwz r0, 0x1528(r3)
    sth r0, 0x8(r4)
    lwz r0, 0x1524(r3)
    stw r0, 0xc(r4)
    lwz r0, 0x1540(r3)
    stb r0, 0xa(r4)
    lwz r0, 0x14f8(r3)
    stb r0, 0xb(r4)
    blr
}

asm void fn_802EDFE4(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    lwz r0, 0x0(r4)
    stw r31, 0x7c(r1)
    mr r31, r4
    cmpwi r0, 0xd
    stw r30, 0x78(r1)
    mr r30, r3
    stw r29, 0x74(r1)
    bne lbl_fn_802EDFE4_00000CBC
    lwz r0, 0x58c(r3)
    cmpwi r0, 0xd
    beq lbl_fn_802EDFE4_00000CBC
    li r3, 0x0
    li r4, 0x0
    bl fn_80232B7C
    lfs f0, lbl_80884828
    li r3, -0x1
    lfs f1, lbl_80884820
    li r0, 0x1
    stfs f0, 0x44(r1)
    addi r4, r30, 0x1588
    addi r5, r30, 0xb0
    addi r7, r1, 0x38
    stfs f0, 0x48(r1)
    addi r8, r1, 0x44
    addi r9, r1, 0x50
    li r6, 0x0
    stfs f0, 0x4c(r1)
    li r10, -0x1
    stfs f0, 0x38(r1)
    stfs f0, 0x3c(r1)
    stfs f0, 0x40(r1)
    stfs f1, 0x50(r1)
    stfs f1, 0x54(r1)
    stfs f1, 0x58(r1)
    stfs f1, 0x5c(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r3, lbl_8087F610
    cmpwi r3, 0x0
    beq lbl_fn_802EDFE4_00000CBC
    li r4, 0x4
    bl fn_804DA490
    lwz r3, lbl_8087F610
    li r4, 0x0
    bl fn_804DA4A4
lbl_fn_802EDFE4_00000CBC:
    lwz r0, 0x0(r31)
    cmpwi r0, 0xe
    bne lbl_fn_802EDFE4_00000CF4
    lwz r0, 0x58c(r30)
    cmpwi r0, 0xe
    beq lbl_fn_802EDFE4_00000CF4
    lwz r3, lbl_8087F610
    cmpwi r3, 0x0
    beq lbl_fn_802EDFE4_00000CF4
    li r4, 0x5
    bl fn_804DA490
    lwz r3, lbl_8087F610
    li r4, 0x1
    bl fn_804DA4A4
lbl_fn_802EDFE4_00000CF4:
    lwz r0, 0x0(r31)
    cmpwi r0, 0xf
    bne lbl_fn_802EDFE4_00000D9C
    lwz r0, 0x58c(r30)
    cmpwi r0, 0xf
    beq lbl_fn_802EDFE4_00000D9C
    mr r3, r30
    li r4, 0x64
    bl fn_80232B7C
    lfs f0, lbl_80884828
    li r3, -0x1
    lfs f1, lbl_80884820
    li r0, 0x1
    stfs f0, 0x1c(r1)
    addi r4, r30, 0x1594
    addi r5, r30, 0xb0
    addi r7, r1, 0x10
    stfs f0, 0x20(r1)
    addi r8, r1, 0x1c
    addi r9, r1, 0x28
    li r6, 0x0
    stfs f0, 0x24(r1)
    li r10, -0x1
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f1, 0x28(r1)
    stfs f1, 0x2c(r1)
    stfs f1, 0x30(r1)
    stfs f1, 0x34(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r29, lbl_8087F048
    mr r4, r30
    addi r3, r1, 0x60
    bl fn_801781B0
    mr r3, r29
    addi r4, r1, 0x60
    li r5, 0x80
    bl fn_80108F38
lbl_fn_802EDFE4_00000D9C:
    lwz r0, 0x0(r31)
    cmpwi r0, 0xf
    beq lbl_fn_802EDFE4_00000DC8
    lwz r0, 0x58c(r30)
    cmpwi r0, 0xf
    bne lbl_fn_802EDFE4_00000DC8
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x64
    li r6, 0x0
    bl fn_80239DAC
lbl_fn_802EDFE4_00000DC8:
    lbz r3, 0xa(r31)
    lbz r0, 0xb(r31)
    lwz r7, 0x0(r31)
    extsb r3, r3
    lwz r6, 0x4(r31)
    extsb r0, r0
    lha r5, 0x8(r31)
    lwz r4, 0xc(r31)
    stw r7, 0x58c(r30)
    stw r6, 0x14bc(r30)
    stw r5, 0x1528(r30)
    stw r4, 0x1524(r30)
    stw r3, 0x1540(r30)
    stw r0, 0x14f8(r30)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    lwz r29, 0x74(r1)
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_802EE20C(void)
{
    nofralloc
    stwu r1, -0x190(r1)
    mflr r0
    stw r0, 0x194(r1)
    stfd f31, 0x180(r1)
    psq_st f31, 0x188(r1), 0, 0
    stfd f30, 0x170(r1)
    psq_st f30, 0x178(r1), 0, 0
    stw r31, 0x16c(r1)
    mr r31, r3
    stw r30, 0x168(r1)
    lwz r0, 0x1500(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802EE20C_00001138
    lwz r5, 0x14f4(r3)
    cmpwi r5, 0x0
    beq lbl_fn_802EE20C_00001138
    lwz r4, 0x14fc(r3)
    lwz r0, 0x15a8(r3)
    cmpw r4, r0
    blt lbl_fn_802EE20C_000011E8
    addi r4, r1, 0x98
    psq_l f1, 0x528(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lfs f2, 0x530(r5)
    lfs f0, 0x530(r3)
    lfs f3, 0x528(r3)
    addi r3, r1, 0x8c
    fsubs f5, f2, f0
    lfs f4, 0x98(r1)
    lfs f0, lbl_80884828
    fsubs f3, f4, f3
    stfs f2, 0xa0(r1)
    stfs f3, 0x8c(r1)
    stfs f5, 0x94(r1)
    stfs f0, 0x90(r1)
    bl fn_805F9940
    lfs f0, lbl_80884838
    fcmpo cr0, f1, f0
    bge lbl_fn_802EE20C_00000EC4
    mr r3, r31
    bl fn_802EBB14
    b lbl_fn_802EE20C_00001138
lbl_fn_802EE20C_00000EC4:
    psq_l f1, 0x528(r31), 0, 0
    addi r5, r1, 0x80
    lfs f2, 0x530(r31)
    addi r6, r1, 0x74
    stfs f2, 0x88(r1)
    li r0, 0x0
    lfs f4, lbl_8088483C
    addi r4, r1, 0x118
    psq_st f1, 0x0(r5), 0, 0
    addi r8, r31, 0x5b8
    lwz r3, lbl_8087EE98
    lis r7, 0x8000
    lwz r10, 0x14f4(r31)
    li r9, 0x0
    lfs f0, 0x84(r1)
    lfs f2, 0x530(r10)
    psq_l f1, 0x528(r10), 0, 0
    fadds f3, f0, f4
    psq_st f1, 0x0(r6), 0, 0
    lfs f0, 0x78(r1)
    stfs f2, 0x7c(r1)
    fadds f0, f0, f4
    stfs f3, 0x84(r1)
    stfs f0, 0x78(r1)
    stw r0, 0x14c(r1)
    stw r0, 0x150(r1)
    stw r0, 0x154(r1)
    stw r0, 0x158(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    bne lbl_fn_802EE20C_00001138
    lfs f3, 0x7c(r1)
    addi r3, r1, 0x68
    lfs f0, 0x88(r1)
    mr r4, r3
    lfs f5, 0x78(r1)
    fsubs f6, f3, f0
    lfs f4, 0x84(r1)
    lfs f3, 0x74(r1)
    lfs f0, 0x80(r1)
    fsubs f4, f5, f4
    stfs f6, 0x70(r1)
    fsubs f0, f3, f0
    stfs f4, 0x6c(r1)
    stfs f0, 0x68(r1)
    bl fn_805F98D0
    lfs f2, 0x70(r1)
    addi r3, r1, 0x68
    lfs f0, lbl_80884840
    addi r30, r1, 0x50
    fabs f3, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0x58(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_802EE20C_00000FCC
    lfs f3, 0x50(r1)
    lfs f0, lbl_80884828
    fcmpo cr0, f3, f0
    ble lbl_fn_802EE20C_00000FC0
    lfs f0, lbl_80884844
    b lbl_fn_802EE20C_00000FC4
lbl_fn_802EE20C_00000FC0:
    lfs f0, lbl_80884848
lbl_fn_802EE20C_00000FC4:
    stfs f0, 0x48(r1)
    b lbl_fn_802EE20C_00000FE0
lbl_fn_802EE20C_00000FCC:
    frsp f2, f2
    lfs f1, 0x50(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_802EE20C_00000FE0:
    lfs f0, 0x48(r1)
    addi r3, r1, 0xa8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80884828
    addi r4, r1, 0x38
    lfs f30, 0xb0(r1)
    mr r5, r4
    lfs f31, 0xac(r1)
    addi r3, r1, 0xd8
    lfs f13, 0xa8(r1)
    lfs f12, 0xc0(r1)
    lfs f11, 0xbc(r1)
    lfs f10, 0xb8(r1)
    lfs f9, 0xd0(r1)
    lfs f8, 0xcc(r1)
    lfs f7, 0xc8(r1)
    lfs f6, 0xd4(r1)
    lfs f5, 0xc4(r1)
    lfs f4, 0xb4(r1)
    lfs f0, lbl_80884820
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x58(r1)
    stfs f3, 0x108(r1)
    stfs f3, 0x10c(r1)
    stfs f3, 0x110(r1)
    stfs f0, 0x114(r1)
    stfs f13, 0x8(r1)
    stfs f31, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f13, 0xd8(r1)
    stfs f31, 0xdc(r1)
    stfs f30, 0xe0(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xe8(r1)
    stfs f11, 0xec(r1)
    stfs f12, 0xf0(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0xf8(r1)
    stfs f8, 0xfc(r1)
    stfs f9, 0x100(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xe4(r1)
    stfs f5, 0xf4(r1)
    stfs f6, 0x104(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80884840
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802EE20C_000010FC
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80884828
    fcmpo cr0, f3, f0
    ble lbl_fn_802EE20C_000010EC
    lfs f0, lbl_80884844
    b lbl_fn_802EE20C_000010F0
lbl_fn_802EE20C_000010EC:
    lfs f0, lbl_80884848
lbl_fn_802EE20C_000010F0:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_802EE20C_00001110
lbl_fn_802EE20C_000010FC:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_802EE20C_00001110:
    addi r3, r1, 0x44
    lfs f2, lbl_80884828
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r31
    psq_st f1, 0x0(r30), 0, 0
    lfs f0, 0x54(r1)
    stfs f2, 0x4c(r1)
    stfs f2, 0x58(r1)
    stfs f0, 0x538(r31)
    bl fn_802EBBA8
lbl_fn_802EE20C_00001138:
    lwz r0, 0x1500(r31)
    cmpwi r0, 0x1
    bne lbl_fn_802EE20C_000011E8
    lwz r0, 0x1524(r31)
    cmpwi r0, 0x0
    bgt lbl_fn_802EE20C_0000115C
    mr r3, r31
    bl fn_802EC098
    b lbl_fn_802EE20C_000011E8
lbl_fn_802EE20C_0000115C:
    lwz r0, 0x1560(r31)
    addi r3, r1, 0x5c
    lwz r4, 0x14e8(r31)
    slwi r0, r0, 2
    lfs f5, 0x530(r31)
    lwzx r4, r4, r0
    lfs f4, 0x528(r31)
    lfs f0, 0xc(r4)
    lfs f3, 0x4(r4)
    fsubs f5, f5, f0
    lfs f0, lbl_80884828
    fsubs f3, f4, f3
    stfs f0, 0x60(r1)
    stfs f3, 0x5c(r1)
    stfs f5, 0x64(r1)
    bl fn_805F9920
    lfs f0, lbl_8088484C
    fcmpo cr0, f1, f0
    bge lbl_fn_802EE20C_000011E8
    lwz r3, 0x1560(r31)
    lwz r0, 0x14ec(r31)
    addi r3, r3, 0x1
    stw r3, 0x1560(r31)
    cmpw r3, r0
    blt lbl_fn_802EE20C_000011C8
    li r0, 0x0
    stw r0, 0x1560(r31)
lbl_fn_802EE20C_000011C8:
    lwz r0, 0x1560(r31)
    mr r3, r31
    lwz r4, 0x14e8(r31)
    li r5, 0x0
    slwi r0, r0, 2
    lwzx r4, r4, r0
    lwz r4, 0x0(r4)
    bl fn_8017039C
lbl_fn_802EE20C_000011E8:
    lwz r0, 0x194(r1)
    psq_l f31, 0x188(r1), 0, 0
    lfd f31, 0x180(r1)
    psq_l f30, 0x178(r1), 0, 0
    lfd f30, 0x170(r1)
    lwz r31, 0x16c(r1)
    lwz r30, 0x168(r1)
    mtlr r0
    addi r1, r1, 0x190
    blr
}

asm void fn_802EE600(void)
{
    nofralloc
    blr
}

asm void fn_802EE604(void)
{
    nofralloc
    stwu r1, -0x210(r1)
    mflr r0
    stw r0, 0x214(r1)
    stw r31, 0x20c(r1)
    mr r31, r5
    stw r30, 0x208(r1)
    mr r30, r3
    bl fn_805A3C58
    lfs f0, lbl_80884850
    lis r3, lbl_8078778C@ha
    li r9, 0x0
    li r5, 0x3
    addi r3, r3, lbl_8078778C@l
    li r8, 0x640
    li r7, 0x1e
    li r6, -0x1
    li r0, 0x12c
    lis r4, lbl_80748488@ha
    stw r3, 0x0(r30)
    addi r3, r31, 0x2c
    addi r4, r4, lbl_80748488@l
    stw r9, 0x14d4(r30)
    stfs f0, 0x14d8(r30)
    stfs f0, 0x14dc(r30)
    stfs f0, 0x14e0(r30)
    stw r8, 0x14ec(r30)
    stw r7, 0x14f0(r30)
    stw r9, 0x14f4(r30)
    stw r9, 0x1518(r30)
    stw r9, 0x151c(r30)
    stw r9, 0x1520(r30)
    stw r9, 0x1524(r30)
    stw r9, 0x1528(r30)
    stw r9, 0x1530(r30)
    stw r9, 0x1534(r30)
    stw r9, 0x1538(r30)
    stw r9, 0x153c(r30)
    stw r9, 0x1540(r30)
    stw r9, 0x1544(r30)
    stw r9, 0x1548(r30)
    stw r9, 0x154c(r30)
    stw r6, 0x1550(r30)
    stw r5, 0x1554(r30)
    stw r5, 0x1558(r30)
    stw r0, 0x155c(r30)
    stfs f0, 0x1560(r30)
    stw r9, 0x14e8(r30)
    stw r9, 0x14e4(r30)
    stw r9, 0x152c(r30)
    bl fn_806827C4
    cmpwi r3, 0x0
    beq lbl_fn_802EE604_000012F0
    addi r3, r3, 0x5
    bl fn_800DC12C
    stw r3, 0x14e4(r30)
lbl_fn_802EE604_000012F0:
    lis r4, lbl_80748488@ha
    addi r3, r31, 0x2c
    addi r4, r4, lbl_80748488@l
    addi r4, r4, 0x6
    bl fn_806827C4
    cmpwi r3, 0x0
    beq lbl_fn_802EE604_00001314
    li r0, 0x1
    stw r0, 0x1524(r30)
lbl_fn_802EE604_00001314:
    lwz r0, 0x1524(r30)
    cmpwi r0, 0x0
    beq lbl_fn_802EE604_00001344
    lis r4, lbl_80748488@ha
    addi r3, r31, 0x2c
    addi r4, r4, lbl_80748488@l
    addi r4, r4, 0x11
    bl fn_806827C4
    cmpwi r3, 0x0
    beq lbl_fn_802EE604_00001344
    li r0, 0x1
    stw r0, 0x1528(r30)
lbl_fn_802EE604_00001344:
    mr r3, r30
    addi r4, r1, 0x8
    addi r5, r31, 0x2c
    bl fn_805A3D6C
    cmpwi r3, 0x0
    beq lbl_fn_802EE604_0000137C
    lis r4, lbl_80748488@ha
    addi r3, r1, 0x108
    addi r4, r4, lbl_80748488@l
    addi r5, r1, 0x8
    addi r4, r4, 0x18
    crclr 6
    bl sprintf
    b lbl_fn_802EE604_00001394
lbl_fn_802EE604_0000137C:
    lis r4, lbl_80748488@ha
    addi r3, r1, 0x108
    addi r4, r4, lbl_80748488@l
    addi r4, r4, 0x34
    crclr 6
    bl sprintf
lbl_fn_802EE604_00001394:
    lwz r12, 0x14b4(r30)
    addi r3, r30, 0x14b4
    addi r4, r1, 0x108
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    mr r3, r30
    lwz r31, 0x20c(r1)
    lwz r30, 0x208(r1)
    lwz r0, 0x214(r1)
    mtlr r0
    addi r1, r1, 0x210
    blr
}

asm void fn_802EE7B8(void)
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
    beq lbl_fn_802EE7B8_0000142C
    addic. r0, r3, 0x151c
    beq lbl_fn_802EE7B8_00001410
    lwz r4, 0x151c(r3)
    cmpwi r4, 0x0
    beq lbl_fn_802EE7B8_00001410
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_802EE7B8_00001410
    bl fn_800897D8
lbl_fn_802EE7B8_00001410:
    mr r3, r30
    li r4, 0x0
    bl fn_805A3D00
    cmpwi r31, 0x0
    ble lbl_fn_802EE7B8_0000142C
    mr r3, r30
    bl dtor_80084684
lbl_fn_802EE7B8_0000142C:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802EE838(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x1
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    bl fn_8013655C
    cmpwi r3, 0x0
    beq lbl_fn_802EE838_00001478
    li r31, 0x0
lbl_fn_802EE838_00001478:
    lwz r3, 0x1438(r30)
    cmpwi r3, 0x0
    beq lbl_fn_802EE838_00001498
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_802EE838_00001498
    li r31, 0x0
lbl_fn_802EE838_00001498:
    addi r3, r30, 0x14b4
    bl fn_80473F50
    cmpwi r3, 0x0
    beq lbl_fn_802EE838_000014AC
    li r31, 0x0
lbl_fn_802EE838_000014AC:
    cmpwi r31, 0x0
    beq lbl_fn_802EE838_00001598
    addi r3, r30, 0x14b4
    bl fn_8047059C
    mr r29, r3
    addi r3, r30, 0x14b4
    bl fn_80470580
    mr r4, r3
    mr r3, r30
    mr r5, r29
    bl fn_802EE9A8
    lwz r0, 0x7ec(r30)
    lwz r4, 0x14e4(r30)
    ori r0, r0, 0x1c0
    oris r0, r0, 0x1
    ori r0, r0, 0xc21d
    oris r0, r0, 0x380
    stw r0, 0x7ec(r30)
    lwz r3, lbl_8087F408
    bl fn_8011FC10
    cmpwi r3, 0x0
    stw r3, 0x14e8(r30)
    beq lbl_fn_802EE838_00001560
    lis r4, lbl_80748488@ha
    addi r3, r30, 0xb0
    addi r4, r4, lbl_80748488@l
    li r5, 0x0
    addi r4, r4, 0x60
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802EE838_00001530
    li r0, 0x0
    b lbl_fn_802EE838_0000153C
lbl_fn_802EE838_00001530:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r0, r3, r0
lbl_fn_802EE838_0000153C:
    cmpwi r0, 0x0
    beq lbl_fn_802EE838_0000154C
    lwz r3, 0x14e8(r30)
    stw r0, 0xf1c(r3)
lbl_fn_802EE838_0000154C:
    lwz r0, 0x1524(r30)
    cmpwi r0, 0x0
    beq lbl_fn_802EE838_00001560
    li r0, 0x1
    stw r0, 0x1548(r30)
lbl_fn_802EE838_00001560:
    lwz r3, 0x1438(r30)
    cmpwi r3, 0x0
    beq lbl_fn_802EE838_00001584
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x1438(r30)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_802EE838_00001584:
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0xfc(r12)
    mtctr r12
    bctrl
lbl_fn_802EE838_00001598:
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_802EE9A8(void)
{
    nofralloc
    stwu r1, -0x650(r1)
    mflr r0
    lis r6, lbl_807772D0@ha
    stw r0, 0x654(r1)
    li r0, 0x0
    addi r6, r6, lbl_807772D0@l
    stw r31, 0x64c(r1)
    mr r31, r3
    addi r3, r1, 0x18
    stw r30, 0x648(r1)
    mr r30, r4
    li r4, 0x0
    stw r29, 0x644(r1)
    mr r29, r5
    li r5, 0x400
    stw r6, 0x8(r1)
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x638(r1)
    bl memset
    addi r3, r1, 0x618
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x8(r1)
    mr r4, r30
    mr r5, r29
    addi r3, r1, 0x8
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0x8
    addi r4, r4, lbl_807772B0@l
    stw r4, 0x8(r1)
    la r4, lbl_8087D708
    bl fn_8005B6E8
    lis r30, lbl_80748488@ha
    addi r30, r30, lbl_80748488@l
lbl_fn_802EE9A8_00001658:
    addi r3, r1, 0x8
    bl fn_8005B3CC
    mr r29, r3
    addi r4, r30, 0x6a
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802EE9A8_00001688
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x14ec(r31)
    b lbl_fn_802EE9A8_0000178C
lbl_fn_802EE9A8_00001688:
    mr r3, r29
    addi r4, r30, 0x72
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802EE9A8_000016B0
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x14f0(r31)
    b lbl_fn_802EE9A8_0000178C
lbl_fn_802EE9A8_000016B0:
    mr r3, r29
    addi r4, r30, 0x7c
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802EE9A8_0000178C
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_802EE9A8_000016D8
    lwz r29, 0x10d8(r3)
    b lbl_fn_802EE9A8_000016DC
lbl_fn_802EE9A8_000016D8:
    li r29, 0x0
lbl_fn_802EE9A8_000016DC:
    cmpwi r29, 0x0
    beq lbl_fn_802EE9A8_0000178C
    addi r3, r1, 0x8
    bl fn_8005B3CC
    b lbl_fn_802EE9A8_0000176C
lbl_fn_802EE9A8_000016F0:
    bl fn_80684600
    lwz r0, 0x78(r29)
    li r4, 0x0
    li r5, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_802EE9A8_00001734
lbl_fn_802EE9A8_0000170C:
    lwz r6, 0x7c(r29)
    lwzx r0, r6, r5
    cmpw r3, r0
    bne lbl_fn_802EE9A8_00001728
    mulli r0, r4, 0x28
    add r3, r6, r0
    b lbl_fn_802EE9A8_00001738
lbl_fn_802EE9A8_00001728:
    addi r5, r5, 0x28
    addi r4, r4, 0x1
    bdnz lbl_fn_802EE9A8_0000170C
lbl_fn_802EE9A8_00001734:
    li r3, 0x0
lbl_fn_802EE9A8_00001738:
    cmpwi r3, 0x0
    beq lbl_fn_802EE9A8_00001764
    lwz r0, 0x14f4(r31)
    slwi r0, r0, 2
    add r0, r31, r0
    addic. r4, r0, 0x14f8
    beq lbl_fn_802EE9A8_00001758
    stw r3, 0x0(r4)
lbl_fn_802EE9A8_00001758:
    lwz r3, 0x14f4(r31)
    addi r0, r3, 0x1
    stw r0, 0x14f4(r31)
lbl_fn_802EE9A8_00001764:
    addi r3, r1, 0x8
    bl fn_8005B3CC
lbl_fn_802EE9A8_0000176C:
    cmpwi r3, 0x0
    beq lbl_fn_802EE9A8_0000178C
    lbz r0, 0x0(r3)
    extsb. r0, r0
    beq lbl_fn_802EE9A8_0000178C
    lwz r0, 0x14f4(r31)
    cmplwi r0, 0x8
    blt lbl_fn_802EE9A8_000016F0
lbl_fn_802EE9A8_0000178C:
    addi r3, r1, 0x8
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_802EE9A8_00001658
    lwz r0, 0x654(r1)
    lwz r31, 0x64c(r1)
    lwz r30, 0x648(r1)
    lwz r29, 0x644(r1)
    mtlr r0
    addi r1, r1, 0x650
    blr
}

asm void fn_802EEBA8(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_27
    lwz r0, 0x12a4(r3)
    mr r31, r3
    extrwi. r0, r0, 1, 29
    beq lbl_fn_802EEBA8_00001860
    lwz r7, 0x38(r3)
    li r5, 0x0
    li r0, 0x0
    li r4, 0x0
    rlwinm r6, r7, 0, 29, 29
    cmplwi r6, 0x4
    beq lbl_fn_802EEBA8_00001808
    clrlwi r6, r7, 31
    cmplwi r6, 0x1
    beq lbl_fn_802EEBA8_00001808
    li r4, 0x1
lbl_fn_802EEBA8_00001808:
    cmpwi r4, 0x0
    beq lbl_fn_802EEBA8_00001824
    lwz r4, 0x7e0(r3)
    rlwinm r4, r4, 0, 26, 26
    cmplwi r4, 0x20
    beq lbl_fn_802EEBA8_00001824
    li r0, 0x1
lbl_fn_802EEBA8_00001824:
    cmpwi r0, 0x0
    beq lbl_fn_802EEBA8_00001858
    lwz r0, 0x55c(r3)
    li r4, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_802EEBA8_0000184C
    lwz r0, 0x560(r3)
    cmpwi r0, 0x1c
    bne lbl_fn_802EEBA8_0000184C
    li r4, 0x1
lbl_fn_802EEBA8_0000184C:
    cmpwi r4, 0x0
    bne lbl_fn_802EEBA8_00001858
    li r5, 0x1
lbl_fn_802EEBA8_00001858:
    cmpwi r5, 0x0
    bne lbl_fn_802EEBA8_00001874
lbl_fn_802EEBA8_00001860:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x104(r12)
    mtctr r12
    bctrl
lbl_fn_802EEBA8_00001874:
    lwz r3, 0x14e8(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802EEBA8_00001918
    bl fn_801765D8
    lwz r3, 0x14e8(r31)
    mr r29, r31
    lwz r30, 0x3fc(r31)
    li r27, 0x0
    stw r30, 0x3fc(r3)
    li r28, 0x0
    b lbl_fn_802EEBA8_00001910
lbl_fn_802EEBA8_000018A0:
    lwz r3, 0x14e8(r31)
    mr r4, r27
    lfs f0, 0x2fc(r29)
    li r7, 0x0
    addi r0, r3, 0xb0
    lfs f1, lbl_80884850
    add r3, r0, r28
    lfs f2, lbl_80884854
    stfs f0, 0x24c(r3)
    li r8, 0x1
    lwz r3, 0x14e8(r31)
    lfs f0, 0x2e8(r29)
    addi r0, r3, 0xb0
    add r3, r0, r28
    stfs f0, 0x238(r3)
    lwz r3, 0x14e8(r31)
    lfs f0, 0x2e4(r29)
    addi r0, r3, 0xb0
    add r3, r0, r28
    stfs f0, 0x234(r3)
    lwz r3, 0x14e8(r31)
    lwz r5, 0x2dc(r29)
    lbz r6, 0x2f4(r29)
    addi r3, r3, 0xb0
    bl fn_80097C08
    addi r29, r29, 0x30
    addi r28, r28, 0x30
    addi r27, r27, 0x1
lbl_fn_802EEBA8_00001910:
    cmpw r27, r30
    blt lbl_fn_802EEBA8_000018A0
lbl_fn_802EEBA8_00001918:
    mr r3, r31
    bl fn_8014C540
    lwz r0, 0x38(r31)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_802EEBA8_00001944
    lwz r0, 0x12a4(r31)
    extrwi. r0, r0, 1, 6
    bne lbl_fn_802EEBA8_00001944
    mr r3, r31
    bl fn_80145334
lbl_fn_802EEBA8_00001944:
    lfs f5, 0x52c(r31)
    lis r4, lbl_80748488@ha
    lfs f4, 0x5a8(r31)
    addi r4, r4, lbl_80748488@l
    lfs f3, 0x528(r31)
    addi r5, r1, 0x20
    fadds f5, f5, f4
    lfs f0, 0x5a4(r31)
    lfs f4, 0x5b0(r31)
    addi r3, r31, 0xb0
    fadds f0, f3, f0
    stfs f5, 0x24(r1)
    stfs f0, 0x20(r1)
    addi r4, r4, 0x86
    lfs f3, 0x530(r31)
    psq_l f1, 0x0(r5), 0, 0
    li r5, 0x0
    lfs f0, 0x5ac(r31)
    psq_st f1, 0x614(r31), 0, 0
    fadds f2, f3, f0
    lfs f0, 0x52c(r31)
    lfs f3, 0x618(r31)
    fadds f0, f0, f4
    lfs f5, 0x530(r31)
    fadds f3, f3, f4
    lfs f6, 0x528(r31)
    stfs f4, 0x620(r31)
    stfs f2, 0x28(r1)
    stfs f2, 0x61c(r31)
    stfs f3, 0x618(r31)
    stfs f6, 0x8(r1)
    stfs f0, 0xc(r1)
    stfs f5, 0x10(r1)
    bl fn_80092814
    cmpwi r3, -0x1
    ble lbl_fn_802EEBA8_00001A20
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    addi r4, r1, 0x2c
    lfs f0, lbl_80884858
    addi r5, r1, 0x14
    add r3, r3, r0
    lfs f4, 0x1c(r3)
    lfs f3, 0xc(r3)
    stfs f3, 0x2c(r1)
    lfs f2, 0x2c(r3)
    stfs f4, 0x30(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    lfs f3, 0x18(r1)
    stfs f2, 0x34(r1)
    fsubs f0, f3, f0
    stfs f2, 0x1c(r1)
    stfs f0, 0x18(r1)
    b lbl_fn_802EEBA8_00001A54
lbl_fn_802EEBA8_00001A20:
    addi r3, r1, 0x8
    lfs f2, 0x10(r1)
    addi r4, r1, 0x14
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lfs f5, lbl_8088485C
    lfs f4, 0x620(r31)
    lfs f3, 0x5b4(r31)
    lfs f0, 0x18(r1)
    fnmsubs f3, f5, f4, f3
    stfs f2, 0x1c(r1)
    fadds f0, f0, f3
    stfs f0, 0x18(r1)
lbl_fn_802EEBA8_00001A54:
    addi r4, r1, 0x8
    lwz r3, 0x14e8(r31)
    psq_l f1, 0x0(r4), 0, 0
    addi r4, r1, 0x14
    lfs f2, 0x10(r1)
    cmpwi r3, 0x0
    psq_st f1, 0x5f4(r31), 0, 0
    lfs f0, 0x620(r31)
    stfs f2, 0x5fc(r31)
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x1c(r1)
    psq_st f1, 0x600(r31), 0, 0
    stfs f2, 0x608(r31)
    stfs f0, 0x60c(r31)
    beq lbl_fn_802EEBA8_00001BC4
    bl fn_80145334
    lwz r3, 0x14e8(r31)
    addi r3, r3, 0x10d8
    bl fn_80129A6C
    lwz r0, 0x1524(r31)
    cmpwi r0, 0x0
    beq lbl_fn_802EEBA8_00001BC4
    lwz r3, 0x14e8(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802EEBA8_00001AEC
    lwz r0, 0x1558(r31)
    cmpwi r0, 0x0
    bne lbl_fn_802EEBA8_00001AEC
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x11
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    lwz r3, 0x1558(r31)
    subi r0, r3, 0x1
    stw r0, 0x1558(r31)
    b lbl_fn_802EEBA8_00001BC4
lbl_fn_802EEBA8_00001AEC:
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_802EEBA8_00001BC4
    bl fn_80176ACC
    lwz r3, 0x14e8(r31)
    li r30, 0x0
    lfs f1, lbl_80884860
    stw r30, 0xf1c(r3)
    lwz r3, 0x14e8(r31)
    addi r3, r3, 0x10d8
    bl fn_80129A48
    lwz r3, 0x14e8(r31)
    li r0, 0x1
    lfs f0, lbl_80884858
    li r4, 0x0
    stw r0, 0x3fc(r3)
    li r5, 0x2e
    lfs f1, lbl_80884850
    li r6, 0x0
    lwz r3, 0x14e8(r31)
    li r7, 0x0
    lfs f2, lbl_80884854
    li r8, 0x1
    stfs f0, 0x2fc(r3)
    lwz r3, 0x14e8(r31)
    stfs f0, 0x2e8(r3)
    lwz r3, 0x14e8(r31)
    addi r3, r3, 0xb0
    bl fn_80097C08
    stw r30, 0x14e8(r31)
    mr r5, r31
    li r4, 0x0
    li r6, 0x0
    lwz r3, lbl_8087F048
    bl fn_801028E4
    mr r3, r31
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    bl fn_8015495C
    lwz r0, 0xf14(r31)
    mr r3, r31
    stw r30, 0xd1c(r31)
    li r4, 0xe
    stw r0, 0xf18(r31)
    stw r30, 0xf14(r31)
    lwz r12, 0x0(r31)
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    li r0, 0x12c
    stw r0, 0x1550(r31)
lbl_fn_802EEBA8_00001BC4:
    lwz r0, 0x1524(r31)
    cmpwi r0, 0x0
    beq lbl_fn_802EEBA8_00001BD8
    mr r3, r31
    bl fn_802F1120
lbl_fn_802EEBA8_00001BD8:
    addi r11, r1, 0x50
    bl _restgpr_27
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}
