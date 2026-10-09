#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_26(void);
extern void _savegpr_26(void);
extern void fn_80092814(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800F8548(void);
extern void fn_800F8574(void);
extern void fn_800FAB80(void);
extern void fn_800FB1BC(void);
extern void fn_800FC1D0(void);
extern void fn_800FDB20(void);
extern void fn_80101434(void);
extern void fn_8010D7B4(void);
extern void fn_8010F4BC(void);
extern void fn_8013655C(void);
extern void fn_8015076C(void);
extern void fn_80219E6C(void);
extern void fn_8021A960(void);
extern void fn_8023A02C(void);
extern void fn_8023A098(void);
extern void fn_8023A108(void);
extern void fn_80373164(void);
extern void fn_80375184(void);
extern void fn_803EAA7C(void);
extern void fn_8059B670(void);
extern void fn_805F8CA0(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_805F9990(void);
extern void fn_805F99B0(void);
extern void fn_80680CF8(void);
extern void fn_8068AEA4(void);

/* External data declarations */
extern u8 lbl_80736680[];
extern u8 lbl_80736698[];
extern u8 lbl_807366A8[];

/* Small data declarations */
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F498;
extern u32 lbl_8087F890;
extern u32 lbl_8087F8A0;
extern u32 lbl_8087F9E8;
extern u32 lbl_80881640;
extern u32 lbl_80881644;
extern u32 lbl_80881648;
extern u32 lbl_8088164C;
extern u32 lbl_80881650;
extern u32 lbl_80881654;
extern u32 lbl_80881658;
extern u32 lbl_8088167C;
extern u32 lbl_80881684;
extern u32 lbl_80881688;
extern u32 lbl_8088168C;
extern u32 lbl_80881690;
extern u32 lbl_80881694;
extern u32 lbl_80881698;
extern u32 lbl_8088169C;
extern u32 lbl_808816A0;
extern u32 lbl_808816A4;

/* Function declarations */
void fn_80110760(void);
void fn_80110768(void);
void fn_80110858(void);

asm void fn_80110760(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_80110768(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r6
    stw r30, 0x38(r1)
    mr r30, r5
    li r5, 0x2
    stw r29, 0x34(r1)
    mr r29, r4
    stw r28, 0x30(r1)
    mr r28, r3
    lwz r4, 0x88(r3)
    addi r3, r1, 0x20
    lwz r12, 0x0(r4)
    lwz r12, 0x64(r12)
    mtctr r12
    bctrl
    lfs f3, 0x28(r1)
    addi r3, r1, 0x8
    lfs f0, 0x8(r30)
    addi r5, r1, 0x14
    lfs f5, 0x24(r1)
    mr r4, r3
    fsubs f6, f3, f0
    lfs f4, 0x4(r30)
    lfs f3, 0x20(r1)
    lfs f0, 0x0(r30)
    fsubs f4, f5, f4
    fmr f2, f6
    fsubs f0, f3, f0
    stfs f4, 0x18(r1)
    stfs f0, 0x14(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0x8(r31)
    frsp f2, f2
    psq_st f1, 0x0(r31), 0, 0
    stfs f6, 0x1c(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x10(r1)
    bl fn_805F98D0
    lwz r3, lbl_8087F048
    mr r4, r29
    lwz r5, 0x68(r28)
    mr r6, r30
    lfs f1, lbl_80881640
    mr r7, r31
    lfs f2, lbl_80881648
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_800F8574
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80110858(void)
{
    nofralloc
    stwu r1, -0x5b0(r1)
    mflr r0
    stw r0, 0x5b4(r1)
    addi r11, r1, 0x550
    stfd f31, 0x5a0(r1)
    psq_st f31, 0x5a8(r1), 0, 0
    stfd f30, 0x590(r1)
    psq_st f30, 0x598(r1), 0, 0
    stfd f29, 0x580(r1)
    psq_st f29, 0x588(r1), 0, 0
    stfd f28, 0x570(r1)
    psq_st f28, 0x578(r1), 0, 0
    stfd f27, 0x560(r1)
    psq_st f27, 0x568(r1), 0, 0
    stfd f26, 0x550(r1)
    psq_st f26, 0x558(r1), 0, 0
    bl _savegpr_26
    lfs f8, 0x8(r3)
    mr r28, r3
    lfs f7, 0x14(r3)
    mr r29, r4
    lfs f10, 0x10(r3)
    li r0, 0x0
    fsubs f11, f8, f7
    lfs f0, lbl_80881640
    lfs f9, 0x1c(r3)
    lfs f8, 0xc(r3)
    lfs f7, 0x18(r3)
    fsubs f9, f10, f9
    fcmpu cr0, f0, f11
    stfs f11, 0x27c(r1)
    fsubs f7, f8, f7
    stfs f9, 0x284(r1)
    stfs f7, 0x280(r1)
    stfs f0, 0x270(r1)
    stfs f0, 0x274(r1)
    stfs f0, 0x278(r1)
    bne lbl_fn_80110858_000001A4
    fcmpu cr0, f0, f7
    bne lbl_fn_80110858_000001A4
    fcmpu cr0, f0, f9
    bne lbl_fn_80110858_000001A4
    li r0, 0x1
lbl_fn_80110858_000001A4:
    cmpwi r0, 0x0
    beq lbl_fn_80110858_000001B4
    lfs f0, lbl_80881648
    stfs f0, 0x284(r1)
lbl_fn_80110858_000001B4:
    addi r3, r1, 0x27c
    addi r30, r1, 0x210
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r30
    lfs f2, 0x284(r1)
    mr r4, r30
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x218(r1)
    bl fn_805F98D0
    lwz r4, 0x38(r29)
    addi r3, r1, 0x270
    psq_l f1, 0x0(r30), 0, 0
    li r31, 0x1
    lfs f2, 0x218(r1)
    cmpwi r4, 0x0
    psq_st f1, 0x0(r3), 0, 0
    li r30, 0x2
    stfs f2, 0x278(r1)
    beq lbl_fn_80110858_00000240
    lwz r0, 0x8(r4)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_80110858_00000240
    lwz r4, 0xc(r4)
    mr r3, r28
    stw r4, 0x9c(r28)
    addi r5, r29, 0x10
    li r30, 0x0
    lwz r12, 0x0(r28)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80110858_00000438
    b lbl_fn_80110858_00001908
lbl_fn_80110858_00000240:
    cmpwi r4, 0x0
    beq lbl_fn_80110858_00000424
    lwz r0, 0x8(r4)
    rlwinm r0, r0, 0, 28, 28
    cmplwi r0, 0x8
    bne lbl_fn_80110858_00000424
    lwz r0, 0x4(r28)
    rlwinm r0, r0, 0, 24, 24
    cmplwi r0, 0x80
    beq lbl_fn_80110858_00000438
    lwz r0, 0x64(r28)
    cmpwi r0, 0x0
    beq lbl_fn_80110858_00000288
    beq lbl_fn_80110858_00000438
    lwz r3, 0x68(r28)
    lwz r0, 0x60(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80110858_00000438
lbl_fn_80110858_00000288:
    lwz r4, 0x88(r28)
    lwz r3, 0x68(r28)
    cmpwi r4, 0x0
    lwz r27, 0x1c(r3)
    beq lbl_fn_80110858_000002B8
    lfs f7, 0x28(r3)
    lfs f0, 0x8bc(r4)
    fmuls f0, f7, f0
    fctiwz f0, f0
    stfd f0, 0x528(r1)
    lwz r0, 0x52c(r1)
    add r27, r27, r0
lbl_fn_80110858_000002B8:
    lwz r26, 0x3c(r3)
    addi r3, r1, 0x4b0
    li r4, 0x0
    li r5, 0x30
    bl memset
    addi r4, r1, 0x270
    lfs f2, 0x278(r1)
    psq_l f1, 0x0(r4), 0, 0
    addi r3, r1, 0x4cc
    stw r27, 0x4b0(r1)
    addi r4, r1, 0x4c0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x4d4(r1)
    psq_l f1, 0x10(r29), 0, 0
    lfs f2, 0x18(r29)
    stfs f2, 0x4c8(r1)
    psq_st f1, 0x0(r4), 0, 0
    lwz r4, 0x68(r28)
    stw r4, 0x4dc(r1)
    lwz r0, 0x88(r28)
    stw r0, 0x4d8(r1)
    lwz r3, 0x38(r29)
    lwz r27, 0xc(r3)
    lwz r0, 0x50(r27)
    cmpwi r0, 0x1
    beq lbl_fn_80110858_0000034C
    cmpwi r0, 0x31
    beq lbl_fn_80110858_000003E4
    cmpwi r0, 0x10
    beq lbl_fn_80110858_00000404
    cmpwi r0, 0x22
    beq lbl_fn_80110858_00000404
    cmpwi r0, 0x29
    beq lbl_fn_80110858_00000404
    cmpwi r0, 0x30
    beq lbl_fn_80110858_00000404
    b lbl_fn_80110858_00000438
lbl_fn_80110858_0000034C:
    cmpwi r26, 0x2
    blt lbl_fn_80110858_00000438
    lis r3, 0x1062
    lwz r5, 0x48(r27)
    addi r0, r3, 0x4dd3
    mulhw r0, r0, r5
    srawi r0, r0, 6
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r0, r0, 0x3e8
    subf r0, r0, r5
    cmpwi r0, 0x3a
    beq lbl_fn_80110858_00000390
    cmpwi r0, 0x6b
    beq lbl_fn_80110858_00000390
    cmpwi r0, 0x7b
    bne lbl_fn_80110858_000003AC
lbl_fn_80110858_00000390:
    lwz r12, 0x0(r27)
    mr r3, r27
    addi r4, r1, 0x4b0
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
    b lbl_fn_80110858_000003DC
lbl_fn_80110858_000003AC:
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_80110858_000003DC
    bl fn_8010D7B4
    cmpwi r3, 0x0
    bne lbl_fn_80110858_000003DC
    lwz r12, 0x0(r27)
    mr r3, r27
    addi r4, r1, 0x4b0
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
lbl_fn_80110858_000003DC:
    li r30, 0x2
    b lbl_fn_80110858_00000438
lbl_fn_80110858_000003E4:
    lwz r12, 0x0(r27)
    mr r3, r27
    addi r4, r1, 0x4b0
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
    li r30, 0x6
    b lbl_fn_80110858_00000438
lbl_fn_80110858_00000404:
    lwz r12, 0x0(r27)
    mr r3, r27
    addi r4, r1, 0x4b0
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
    li r30, 0x2
    b lbl_fn_80110858_00000438
lbl_fn_80110858_00000424:
    lfs f7, 0x2c(r29)
    lfs f0, lbl_80881684
    fcmpo cr0, f7, f0
    ble lbl_fn_80110858_00000438
    li r30, 0x3
lbl_fn_80110858_00000438:
    cmpwi r31, 0x0
    beq lbl_fn_80110858_00001908
    lwz r3, 0x9c(r28)
    addi r4, r1, 0x264
    psq_l f1, 0x10(r29), 0, 0
    addi r27, r1, 0x258
    lfs f2, 0x18(r29)
    neg r0, r3
    stfs f2, 0x26c(r1)
    or r0, r0, r3
    lfs f0, lbl_80881650
    srwi r31, r0, 31
    psq_st f1, 0x0(r4), 0, 0
    lfs f2, 0x30(r29)
    psq_l f1, 0x28(r29), 0, 0
    fabs f7, f2
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0x260(r1)
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_80110858_000004B0
    lfs f7, 0x258(r1)
    lfs f0, lbl_80881640
    fcmpo cr0, f7, f0
    ble lbl_fn_80110858_000004A4
    lfs f0, lbl_80881654
    b lbl_fn_80110858_000004A8
lbl_fn_80110858_000004A4:
    lfs f0, lbl_80881658
lbl_fn_80110858_000004A8:
    stfs f0, 0x100(r1)
    b lbl_fn_80110858_000004C4
lbl_fn_80110858_000004B0:
    frsp f2, f2
    lfs f1, 0x258(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x100(r1)
lbl_fn_80110858_000004C4:
    lfs f0, 0x100(r1)
    addi r3, r1, 0x440
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f7, lbl_80881640
    addi r4, r1, 0xf0
    lfs f26, 0x448(r1)
    mr r5, r4
    lfs f27, 0x444(r1)
    addi r3, r1, 0x470
    lfs f28, 0x440(r1)
    lfs f29, 0x458(r1)
    lfs f30, 0x454(r1)
    lfs f31, 0x450(r1)
    lfs f13, 0x468(r1)
    lfs f12, 0x464(r1)
    lfs f11, 0x460(r1)
    lfs f10, 0x46c(r1)
    lfs f9, 0x45c(r1)
    lfs f8, 0x44c(r1)
    lfs f0, lbl_80881648
    psq_l f1, 0x0(r27), 0, 0
    lfs f2, 0x260(r1)
    stfs f7, 0x4a0(r1)
    stfs f7, 0x4a4(r1)
    stfs f7, 0x4a8(r1)
    stfs f0, 0x4ac(r1)
    stfs f28, 0xc0(r1)
    stfs f27, 0xc4(r1)
    stfs f26, 0xc8(r1)
    stfs f28, 0x470(r1)
    stfs f27, 0x474(r1)
    stfs f26, 0x478(r1)
    stfs f31, 0xcc(r1)
    stfs f30, 0xd0(r1)
    stfs f29, 0xd4(r1)
    stfs f31, 0x480(r1)
    stfs f30, 0x484(r1)
    stfs f29, 0x488(r1)
    stfs f11, 0xd8(r1)
    stfs f12, 0xdc(r1)
    stfs f13, 0xe0(r1)
    stfs f11, 0x490(r1)
    stfs f12, 0x494(r1)
    stfs f13, 0x498(r1)
    stfs f8, 0xe4(r1)
    stfs f9, 0xe8(r1)
    stfs f10, 0xec(r1)
    stfs f8, 0x47c(r1)
    stfs f9, 0x48c(r1)
    stfs f10, 0x49c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xf8(r1)
    bl fn_805F9750
    lfs f2, 0xf8(r1)
    lfs f0, lbl_80881650
    fabs f7, f2
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_80110858_000005E0
    lfs f7, 0xf4(r1)
    lfs f0, lbl_80881640
    fcmpo cr0, f7, f0
    ble lbl_fn_80110858_000005D0
    lfs f0, lbl_80881654
    b lbl_fn_80110858_000005D4
lbl_fn_80110858_000005D0:
    lfs f0, lbl_80881658
lbl_fn_80110858_000005D4:
    fneg f0, f0
    stfs f0, 0xfc(r1)
    b lbl_fn_80110858_000005F4
lbl_fn_80110858_000005E0:
    lfs f1, 0xf4(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0xfc(r1)
lbl_fn_80110858_000005F4:
    lfs f11, lbl_80881640
    addi r3, r1, 0xfc
    psq_l f1, 0x0(r3), 0, 0
    fmr f2, f11
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0x260(r1)
    lwz r4, 0x68(r28)
    stfs f11, 0x104(r1)
    lwz r0, 0xac(r4)
    rlwinm r3, r0, 0, 16, 16
    addis r0, r3, 0x0
    cmplwi r0, 0x8000
    bne lbl_fn_80110858_00000A64
    lwz r0, 0x9c(r28)
    cmpwi r0, 0x0
    bne lbl_fn_80110858_00000860
    lwz r3, 0x4(r28)
    rlwinm r0, r3, 0, 27, 27
    cmplwi r0, 0x10
    beq lbl_fn_80110858_00001908
    lfs f7, 0x2c(r29)
    lfs f0, lbl_80881684
    fcmpo cr0, f7, f0
    ble lbl_fn_80110858_0000073C
    lfs f0, 0x8(r29)
    ori r0, r3, 0x12
    lfs f9, 0xc(r29)
    addi r5, r1, 0x204
    fadds f10, f0, f7
    lfs f7, 0x4(r29)
    lfs f0, 0x28(r29)
    mr r3, r28
    lfs f8, 0x30(r29)
    fadds f0, f7, f0
    stfs f10, 0x208(r1)
    fadds f2, f9, f8
    lfs f10, lbl_80881688
    stfs f0, 0x204(r1)
    lfs f9, lbl_80881648
    lfs f0, lbl_80881690
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x8(r28), 0, 0
    fmuls f8, f0, f9
    lfs f7, lbl_8088168C
    stfs f2, 0x10(r28)
    stw r0, 0x4(r28)
    stfs f11, 0x20(r28)
    stfs f11, 0x24(r28)
    stfs f10, 0x28(r28)
    stfs f9, 0x80(r28)
    lfs f0, 0x44(r4)
    stfs f2, 0x20c(r1)
    fnmsubs f0, f7, f8, f0
    stfs f0, 0x78(r28)
    bl fn_8010F4BC
    lwz r3, lbl_8087F3C0
    li r0, 0x3
    mr r4, r28
    li r5, 0x0
    stw r0, 0xb8(r3)
    li r6, 0x1
    lwz r3, lbl_8087F3C0
    bl fn_8023A108
    lwz r3, lbl_8087F3C0
    mr r4, r28
    li r5, 0xa
    li r6, 0x1
    bl fn_8023A108
    lwz r3, lbl_8087F3C0
    mr r4, r28
    li r5, 0x0
    li r6, 0x2
    bl fn_8023A02C
    lwz r3, lbl_8087F3C0
    mr r4, r28
    li r5, 0xa
    li r6, 0x2
    bl fn_8023A02C
    lwz r3, lbl_8087F3C0
    li r0, 0x0
    stw r0, 0xb8(r3)
    b lbl_fn_80110858_00001908
lbl_fn_80110858_0000073C:
    addi r3, r29, 0x28
    addi r4, r28, 0x20
    bl fn_805F9990
    lfs f0, 0x30(r29)
    addi r4, r1, 0x1f8
    lfs f7, 0x2c(r29)
    addi r3, r28, 0x20
    fmuls f12, f0, f1
    lfs f0, 0x28(r29)
    fmuls f11, f7, f1
    lfs f8, 0x28(r28)
    fmuls f10, f0, f1
    lfs f7, 0x24(r28)
    fneg f27, f11
    stfs f11, 0x250(r1)
    fneg f28, f10
    lfs f0, 0x20(r28)
    fsubs f11, f7, f11
    stfs f10, 0x24c(r1)
    fsubs f10, f0, f10
    lfs f9, lbl_8088167C
    fneg f26, f12
    stfs f11, 0x244(r1)
    frsp f7, f27
    fsubs f13, f8, f12
    frsp f0, f28
    stfs f10, 0x240(r1)
    frsp f8, f26
    fmuls f11, f11, f9
    stfs f12, 0x254(r1)
    fmuls f7, f7, f9
    fmuls f10, f10, f9
    stfs f13, 0x248(r1)
    fmuls f0, f0, f9
    fmuls f12, f13, f9
    stfs f10, 0x1d4(r1)
    fmuls f8, f8, f9
    fadds f9, f7, f11
    stfs f12, 0x1dc(r1)
    fadds f10, f0, f10
    fadds f2, f8, f12
    stfs f9, 0x1fc(r1)
    stfs f10, 0x1f8(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f11, 0x1d8(r1)
    stfs f28, 0x1e0(r1)
    stfs f27, 0x1e4(r1)
    stfs f26, 0x1e8(r1)
    stfs f0, 0x1ec(r1)
    stfs f7, 0x1f0(r1)
    stfs f8, 0x1f4(r1)
    stfs f2, 0x200(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x28(r28)
    bl fn_805F9940
    stfs f1, 0x80(r28)
    addi r3, r1, 0x1c8
    lfs f7, 0xc(r29)
    lfs f0, 0x30(r29)
    lfs f9, 0x8(r29)
    fadds f2, f7, f0
    lfs f8, 0x2c(r29)
    lfs f7, 0x4(r29)
    lfs f0, 0x28(r29)
    fadds f8, f9, f8
    stfs f2, 0x1d0(r1)
    fadds f0, f7, f0
    stfs f8, 0x1cc(r1)
    stfs f0, 0x1c8(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x8(r28), 0, 0
    stfs f2, 0x10(r28)
    b lbl_fn_80110858_00001908
lbl_fn_80110858_00000860:
    lwz r0, 0x4(r28)
    addi r3, r28, 0x20
    stfs f11, 0x24(r28)
    oris r0, r0, 0x20
    rlwinm r0, r0, 0, 28, 26
    rlwinm r0, r0, 0, 31, 29
    stw r0, 0x4(r28)
    bl fn_805F9920
    lfs f7, lbl_80881648
    fcmpo cr0, f1, f7
    ble lbl_fn_80110858_000008C4
    lfs f8, 0x20(r28)
    addi r3, r28, 0x20
    lfs f9, lbl_8088164C
    mr r4, r3
    lfs f7, 0x24(r28)
    lfs f0, 0x28(r28)
    fmuls f8, f8, f9
    fmuls f7, f7, f9
    fmuls f0, f0, f9
    stfs f8, 0x20(r28)
    stfs f7, 0x24(r28)
    stfs f0, 0x28(r28)
    bl fn_805F98D0
    b lbl_fn_80110858_00000998
lbl_fn_80110858_000008C4:
    lwz r5, 0x9c(r28)
    addi r3, r1, 0x3e0
    lfs f0, lbl_80881640
    li r4, 0x79
    stfs f0, 0x18c(r1)
    stfs f0, 0x190(r1)
    stfs f7, 0x194(r1)
    lfs f1, 0x538(r5)
    bl fn_805F8E70
    addi r4, r1, 0x18c
    addi r3, r1, 0x3e0
    mr r5, r4
    bl fn_805F93C0
    lfs f7, lbl_80881640
    addi r3, r1, 0x410
    lfs f0, lbl_80881648
    li r4, 0x79
    stfs f7, 0x198(r1)
    stfs f0, 0x19c(r1)
    stfs f7, 0x1a0(r1)
    lwz r5, 0x9c(r28)
    stfs f7, 0x1a4(r1)
    stfs f7, 0x1a8(r1)
    stfs f0, 0x1ac(r1)
    lfs f1, 0x538(r5)
    bl fn_805F8E70
    addi r4, r1, 0x1a4
    addi r3, r1, 0x410
    mr r5, r4
    bl fn_805F93C0
    addi r3, r1, 0x1a4
    addi r4, r1, 0x198
    addi r5, r1, 0x1b0
    bl fn_805F99B0
    lfs f7, 0x1b8(r1)
    addi r3, r28, 0x20
    lfs f0, 0x194(r1)
    addi r5, r1, 0x1bc
    lfs f9, 0x1b4(r1)
    mr r4, r3
    fadds f2, f7, f0
    lfs f8, 0x190(r1)
    lfs f7, 0x1b0(r1)
    lfs f0, 0x18c(r1)
    fadds f8, f9, f8
    stfs f2, 0x1c4(r1)
    fadds f0, f7, f0
    stfs f8, 0x1c0(r1)
    stfs f0, 0x1bc(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x28(r28)
    bl fn_805F98D0
lbl_fn_80110858_00000998:
    lfs f10, lbl_80881640
    addi r4, r1, 0x180
    lfs f9, lbl_80881694
    addi r3, r28, 0x20
    lfs f8, 0x28(r28)
    lfs f0, 0x24(r28)
    lfs f7, 0x20(r28)
    fadds f8, f8, f10
    fadds f11, f0, f9
    lfs f0, lbl_80881698
    fadds f7, f7, f10
    stfs f10, 0x168(r1)
    fmuls f2, f8, f0
    fmuls f12, f11, f0
    fmuls f0, f7, f0
    stfs f9, 0x16c(r1)
    stfs f0, 0x180(r1)
    stfs f12, 0x184(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f10, 0x170(r1)
    stfs f7, 0x174(r1)
    stfs f11, 0x178(r1)
    stfs f8, 0x17c(r1)
    stfs f2, 0x188(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x28(r28)
    bl fn_805F9940
    stfs f1, 0x80(r28)
    frsp f7, f1
    lwz r3, 0x68(r28)
    li r0, 0x3
    lfs f8, lbl_80881690
    mr r4, r28
    lfs f0, 0x44(r3)
    li r30, -0x1
    li r5, 0x0
    fnmsubs f0, f8, f7, f0
    li r6, 0x2
    stfs f0, 0x78(r28)
    lwz r3, lbl_8087F3C0
    stw r0, 0xb8(r3)
    lwz r3, lbl_8087F3C0
    bl fn_8023A098
    lwz r3, lbl_8087F3C0
    mr r4, r28
    li r5, 0xa
    li r6, 0x2
    bl fn_8023A098
    lwz r3, lbl_8087F3C0
    li r0, 0x0
    stw r0, 0xb8(r3)
lbl_fn_80110858_00000A64:
    lwz r0, 0x64(r28)
    cmpwi r0, 0x0
    beq lbl_fn_80110858_00000DF4
    lwz r4, 0x4(r28)
    rlwinm r0, r4, 0, 24, 24
    cmplwi r0, 0x80
    beq lbl_fn_80110858_00000DF4
    lwz r3, 0x68(r28)
    lwz r0, 0x60(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80110858_00000CCC
    lfs f2, 0x30(r29)
    addi r30, r1, 0x6c
    psq_l f1, 0x28(r29), 0, 0
    addi r27, r1, 0x264
    fabs f7, f2
    lfs f0, lbl_80881650
    psq_st f1, 0x0(r30), 0, 0
    frsp f7, f7
    stfs f2, 0x74(r1)
    fcmpo cr0, f7, f0
    bge lbl_fn_80110858_00000AE0
    lfs f7, 0x6c(r1)
    lfs f0, lbl_80881640
    fcmpo cr0, f7, f0
    ble lbl_fn_80110858_00000AD4
    lfs f0, lbl_80881654
    b lbl_fn_80110858_00000AD8
lbl_fn_80110858_00000AD4:
    lfs f0, lbl_80881658
lbl_fn_80110858_00000AD8:
    stfs f0, 0x7c(r1)
    b lbl_fn_80110858_00000AF4
lbl_fn_80110858_00000AE0:
    frsp f2, f2
    lfs f1, 0x6c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x7c(r1)
lbl_fn_80110858_00000AF4:
    lfs f0, 0x7c(r1)
    addi r3, r1, 0x3b0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f7, lbl_80881640
    addi r4, r1, 0x84
    lfs f8, 0x3b8(r1)
    mr r5, r4
    lfs f9, 0x3b4(r1)
    addi r3, r1, 0x370
    lfs f10, 0x3b0(r1)
    lfs f11, 0x3c8(r1)
    lfs f12, 0x3c4(r1)
    lfs f13, 0x3c0(r1)
    lfs f26, 0x3d8(r1)
    lfs f27, 0x3d4(r1)
    lfs f28, 0x3d0(r1)
    lfs f29, 0x3dc(r1)
    lfs f30, 0x3cc(r1)
    lfs f31, 0x3bc(r1)
    lfs f0, lbl_80881648
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x74(r1)
    stfs f7, 0x3a0(r1)
    stfs f7, 0x3a4(r1)
    stfs f7, 0x3a8(r1)
    stfs f0, 0x3ac(r1)
    stfs f10, 0xb4(r1)
    stfs f9, 0xb8(r1)
    stfs f8, 0xbc(r1)
    stfs f10, 0x370(r1)
    stfs f9, 0x374(r1)
    stfs f8, 0x378(r1)
    stfs f13, 0xa8(r1)
    stfs f12, 0xac(r1)
    stfs f11, 0xb0(r1)
    stfs f13, 0x380(r1)
    stfs f12, 0x384(r1)
    stfs f11, 0x388(r1)
    stfs f28, 0x9c(r1)
    stfs f27, 0xa0(r1)
    stfs f26, 0xa4(r1)
    stfs f28, 0x390(r1)
    stfs f27, 0x394(r1)
    stfs f26, 0x398(r1)
    stfs f31, 0x90(r1)
    stfs f30, 0x94(r1)
    stfs f29, 0x98(r1)
    stfs f31, 0x37c(r1)
    stfs f30, 0x38c(r1)
    stfs f29, 0x39c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x8c(r1)
    bl fn_805F9750
    lfs f2, 0x8c(r1)
    lfs f0, lbl_80881650
    fabs f7, f2
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_80110858_00000C10
    lfs f7, 0x88(r1)
    lfs f0, lbl_80881640
    fcmpo cr0, f7, f0
    ble lbl_fn_80110858_00000C00
    lfs f0, lbl_80881654
    b lbl_fn_80110858_00000C04
lbl_fn_80110858_00000C00:
    lfs f0, lbl_80881658
lbl_fn_80110858_00000C04:
    fneg f0, f0
    stfs f0, 0x78(r1)
    b lbl_fn_80110858_00000C24
lbl_fn_80110858_00000C10:
    lfs f1, 0x88(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x78(r1)
lbl_fn_80110858_00000C24:
    addi r3, r1, 0x78
    lfs f2, lbl_80881640
    psq_l f1, 0x0(r3), 0, 0
    li r31, 0x0
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x74(r1)
    lwz r0, 0x4(r28)
    stfs f2, 0x80(r1)
    rlwinm r0, r0, 0, 19, 19
    cmplwi r0, 0x1000
    bne lbl_fn_80110858_00000C78
    lwz r3, lbl_8087F048
    mr r6, r27
    lwz r4, 0x88(r28)
    addi r7, r1, 0x6c
    lwz r5, 0x68(r28)
    li r8, 0x0
    lfs f1, lbl_80881648
    li r9, 0x0
    bl fn_800FB1BC
    b lbl_fn_80110858_00000CB4
lbl_fn_80110858_00000C78:
    lwz r3, lbl_8087F048
    li r0, -0x1
    mr r7, r27
    addi r8, r1, 0x6c
    stw r0, 0x8(r1)
    li r9, 0x0
    li r10, 0x1e
    stw r0, 0xc(r1)
    lwz r4, 0x88(r28)
    lwz r5, 0x68(r28)
    lwz r6, 0x7c(r28)
    lfs f1, 0x5c(r28)
    lfs f2, 0x74(r28)
    bl fn_800FAB80
    mr r31, r3
lbl_fn_80110858_00000CB4:
    lwz r3, lbl_8087F430
    mr r5, r27
    lwz r4, 0x88(r28)
    mr r6, r31
    bl fn_80373164
    b lbl_fn_80110858_00001340
lbl_fn_80110858_00000CCC:
    lis r3, lbl_80736680@ha
    oris r0, r4, 0x10
    addi r3, r3, lbl_80736680@l
    lfs f1, lbl_80881648
    ori r0, r0, 0x24
    lwz r4, 0xc(r3)
    stw r0, 0x4(r28)
    addi r3, r1, 0x20
    addi r5, r1, 0x264
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x20
    li r4, -0x1
    bl fn_800CB3A0
    lwz r0, 0x9c(r28)
    cmpwi r0, 0x0
    beq lbl_fn_80110858_00001340
    lwz r0, 0x4(r28)
    rlwinm r0, r0, 0, 24, 24
    cmplwi r0, 0x80
    beq lbl_fn_80110858_00001340
    lwz r3, 0x68(r28)
    lwz r3, 0x70(r3)
    cmpwi r3, 0x0
    ble lbl_fn_80110858_00001340
    bl fn_80219E6C
    mr r26, r3
    lwz r3, lbl_8087F048
    bl fn_800F8548
    mr r30, r3
    lwz r3, lbl_8087F048
    lwz r4, 0x88(r28)
    mr r6, r26
    lwz r5, 0x9c(r28)
    mr r7, r30
    lwz r10, 0x90(r28)
    addi r8, r1, 0x264
    li r9, 0x0
    bl fn_800FC1D0
    lfs f7, 0x10(r28)
    addi r27, r1, 0x15c
    lfs f0, 0x1c(r28)
    mr r31, r3
    lfs f9, 0xc(r28)
    addi r5, r1, 0x150
    fsubs f2, f7, f0
    lfs f8, 0x18(r28)
    lfs f7, 0x8(r28)
    mr r3, r27
    lfs f0, 0x14(r28)
    fsubs f8, f9, f8
    fsubs f0, f7, f0
    stfs f8, 0x154(r1)
    mr r4, r27
    stfs f0, 0x150(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0x158(r1)
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0x164(r1)
    bl fn_805F98D0
    lwz r3, lbl_8087F048
    li r0, 0xa
    mr r6, r31
    mr r7, r26
    stw r0, 0x8(r1)
    mr r8, r30
    mr r10, r27
    addi r9, r1, 0x264
    lwz r4, 0x88(r28)
    lwz r5, 0x9c(r28)
    lfs f1, 0x5c(r28)
    bl fn_800FDB20
    b lbl_fn_80110858_00001340
lbl_fn_80110858_00000DF4:
    lwz r5, 0x9c(r28)
    cmpwi r5, 0x0
    beq lbl_fn_80110858_00000F48
    lwz r0, 0x4(r28)
    rlwinm r0, r0, 0, 24, 24
    cmplwi r0, 0x80
    beq lbl_fn_80110858_00000F48
    lwz r3, lbl_8087F048
    addi r8, r1, 0x264
    lwz r4, 0x88(r28)
    li r9, 0x0
    lwz r6, 0x68(r28)
    lwz r7, 0x7c(r28)
    lwz r10, 0x90(r28)
    bl fn_800FC1D0
    cmpwi r3, 0x0
    mr r26, r3
    blt lbl_fn_80110858_00000F2C
    lfs f7, 0x8(r28)
    li r0, 0x0
    lfs f0, 0x14(r28)
    lfs f10, 0x10(r28)
    fsubs f11, f7, f0
    lfs f9, 0x1c(r28)
    lfs f0, lbl_80881640
    lfs f8, 0xc(r28)
    fsubs f9, f10, f9
    lfs f7, 0x18(r28)
    fcmpu cr0, f0, f11
    fsubs f7, f8, f7
    stfs f11, 0x234(r1)
    stfs f7, 0x238(r1)
    stfs f9, 0x23c(r1)
    bne lbl_fn_80110858_00000E90
    fcmpu cr0, f0, f7
    bne lbl_fn_80110858_00000E90
    fcmpu cr0, f0, f9
    bne lbl_fn_80110858_00000E90
    li r0, 0x1
lbl_fn_80110858_00000E90:
    cmpwi r0, 0x0
    beq lbl_fn_80110858_00000EEC
    lwz r5, 0x9c(r28)
    addi r3, r1, 0x340
    lfs f7, lbl_80881640
    li r4, 0x79
    lfs f0, lbl_80881648
    stfs f7, 0x144(r1)
    stfs f7, 0x148(r1)
    stfs f0, 0x14c(r1)
    lfs f1, 0x538(r5)
    bl fn_805F8E70
    addi r4, r1, 0x144
    addi r3, r1, 0x340
    mr r5, r4
    bl fn_805F93C0
    addi r4, r1, 0x144
    lfs f2, 0x14c(r1)
    addi r3, r1, 0x234
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x23c(r1)
    b lbl_fn_80110858_00000EF8
lbl_fn_80110858_00000EEC:
    addi r3, r1, 0x234
    mr r4, r3
    bl fn_805F98D0
lbl_fn_80110858_00000EF8:
    lwz r3, lbl_8087F048
    li r0, 0xa
    mr r6, r26
    addi r9, r1, 0x264
    stw r0, 0x8(r1)
    addi r10, r1, 0x234
    lwz r4, 0x88(r28)
    lwz r5, 0x9c(r28)
    lwz r7, 0x68(r28)
    lwz r8, 0x7c(r28)
    lfs f1, 0x5c(r28)
    bl fn_800FDB20
    mr r30, r3
lbl_fn_80110858_00000F2C:
    lwz r3, 0x68(r28)
    lwz r0, 0xac(r3)
    rlwinm r3, r0, 0, 16, 16
    addis r0, r3, 0x0
    cmplwi r0, 0x8000
    bne lbl_fn_80110858_00000F48
    li r30, -0x1
lbl_fn_80110858_00000F48:
    cmpwi r30, 0x0
    beq lbl_fn_80110858_00000F68
    lwz r0, 0x4(r28)
    rlwinm r3, r0, 0, 7, 7
    subis r0, r3, 0x100
    cmplwi r0, 0x0
    bne lbl_fn_80110858_00000F68
    li r30, -0x1
lbl_fn_80110858_00000F68:
    cmpwi r30, 0x0
    blt lbl_fn_80110858_00001290
    lfs f7, 0x278(r1)
    addi r3, r1, 0x138
    lfs f0, 0x274(r1)
    addi r27, r1, 0x228
    fneg f8, f7
    lfs f7, 0x270(r1)
    fneg f9, f0
    lfs f0, lbl_80881650
    fneg f7, f7
    stfs f8, 0x140(r1)
    frsp f2, f8
    stfs f7, 0x138(r1)
    stfs f9, 0x13c(r1)
    fabs f7, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    frsp f7, f7
    stfs f2, 0x230(r1)
    fcmpo cr0, f7, f0
    bge lbl_fn_80110858_00000FE4
    lfs f7, 0x228(r1)
    lfs f0, lbl_80881640
    fcmpo cr0, f7, f0
    ble lbl_fn_80110858_00000FD8
    lfs f0, lbl_80881654
    b lbl_fn_80110858_00000FDC
lbl_fn_80110858_00000FD8:
    lfs f0, lbl_80881658
lbl_fn_80110858_00000FDC:
    stfs f0, 0x64(r1)
    b lbl_fn_80110858_00000FF8
lbl_fn_80110858_00000FE4:
    frsp f2, f2
    lfs f1, 0x228(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x64(r1)
lbl_fn_80110858_00000FF8:
    lfs f0, 0x64(r1)
    addi r3, r1, 0x2d0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f7, lbl_80881640
    addi r4, r1, 0x54
    lfs f31, 0x2d8(r1)
    mr r5, r4
    lfs f30, 0x2d4(r1)
    addi r3, r1, 0x300
    lfs f29, 0x2d0(r1)
    lfs f28, 0x2e8(r1)
    lfs f27, 0x2e4(r1)
    lfs f26, 0x2e0(r1)
    lfs f13, 0x2f8(r1)
    lfs f12, 0x2f4(r1)
    lfs f11, 0x2f0(r1)
    lfs f10, 0x2fc(r1)
    lfs f9, 0x2ec(r1)
    lfs f8, 0x2dc(r1)
    lfs f0, lbl_80881648
    psq_l f1, 0x0(r27), 0, 0
    lfs f2, 0x230(r1)
    stfs f7, 0x330(r1)
    stfs f7, 0x334(r1)
    stfs f7, 0x338(r1)
    stfs f0, 0x33c(r1)
    stfs f29, 0x24(r1)
    stfs f30, 0x28(r1)
    stfs f31, 0x2c(r1)
    stfs f29, 0x300(r1)
    stfs f30, 0x304(r1)
    stfs f31, 0x308(r1)
    stfs f26, 0x30(r1)
    stfs f27, 0x34(r1)
    stfs f28, 0x38(r1)
    stfs f26, 0x310(r1)
    stfs f27, 0x314(r1)
    stfs f28, 0x318(r1)
    stfs f11, 0x3c(r1)
    stfs f12, 0x40(r1)
    stfs f13, 0x44(r1)
    stfs f11, 0x320(r1)
    stfs f12, 0x324(r1)
    stfs f13, 0x328(r1)
    stfs f8, 0x48(r1)
    stfs f9, 0x4c(r1)
    stfs f10, 0x50(r1)
    stfs f8, 0x30c(r1)
    stfs f9, 0x31c(r1)
    stfs f10, 0x32c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x5c(r1)
    bl fn_805F9750
    lfs f2, 0x5c(r1)
    lfs f0, lbl_80881650
    fabs f7, f2
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_80110858_00001114
    lfs f7, 0x58(r1)
    lfs f0, lbl_80881640
    fcmpo cr0, f7, f0
    ble lbl_fn_80110858_00001104
    lfs f0, lbl_80881654
    b lbl_fn_80110858_00001108
lbl_fn_80110858_00001104:
    lfs f0, lbl_80881658
lbl_fn_80110858_00001108:
    fneg f0, f0
    stfs f0, 0x60(r1)
    b lbl_fn_80110858_00001128
lbl_fn_80110858_00001114:
    lfs f1, 0x58(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x60(r1)
lbl_fn_80110858_00001128:
    addi r3, r1, 0x60
    lfs f2, lbl_80881640
    psq_l f1, 0x0(r3), 0, 0
    cmpwi r30, 0x0
    stfs f2, 0x68(r1)
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0x230(r1)
    bne lbl_fn_80110858_00001184
    lwz r3, 0x9c(r28)
    cmpwi r3, 0x0
    beq lbl_fn_80110858_00001184
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_80110858_00001184
    lwz r6, 0x68(r28)
    addi r4, r1, 0x264
    lwz r3, lbl_8087F048
    addi r5, r1, 0x228
    lwz r6, 0xc4(r6)
    li r7, 0x1
    bl fn_80101434
    b lbl_fn_80110858_000011A0
lbl_fn_80110858_00001184:
    lwz r5, 0x68(r28)
    mr r7, r30
    lwz r3, lbl_8087F048
    addi r4, r1, 0x264
    lwz r6, 0xc4(r5)
    addi r5, r1, 0x228
    bl fn_80101434
lbl_fn_80110858_000011A0:
    lwz r3, 0x68(r28)
    cmpwi r3, 0x0
    beq lbl_fn_80110858_000011EC
    lwz r0, 0xb0(r3)
    cmpwi r0, 0x5ba
    bne lbl_fn_80110858_000011EC
    lis r4, lbl_80736680@ha
    lfs f1, lbl_80881648
    addi r4, r4, lbl_80736680@l
    addi r3, r1, 0x1c
    lwz r4, 0xc(r4)
    addi r5, r1, 0x264
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x1c
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_80110858_00001290
lbl_fn_80110858_000011EC:
    cmpwi r30, 0x0
    bne lbl_fn_80110858_00001224
    lis r3, lbl_80736680@ha
    lfs f1, lbl_80881648
    lwz r4, lbl_80736680@l(r3)
    addi r3, r1, 0x18
    addi r5, r1, 0x264
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x18
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_80110858_00001290
lbl_fn_80110858_00001224:
    cmpwi r30, 0x4
    bne lbl_fn_80110858_00001260
    lis r4, lbl_80736680@ha
    lfs f1, lbl_80881648
    addi r4, r4, lbl_80736680@l
    addi r3, r1, 0x14
    lwz r4, 0x8(r4)
    addi r5, r1, 0x264
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x14
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_80110858_00001290
lbl_fn_80110858_00001260:
    lis r4, lbl_80736680@ha
    lfs f1, lbl_80881648
    addi r4, r4, lbl_80736680@l
    addi r3, r1, 0x10
    lwz r4, 0x4(r4)
    addi r5, r1, 0x264
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_80110858_00001290:
    lwz r3, 0x68(r28)
    lwz r3, 0x6c(r3)
    bl fn_80219E6C
    cmpwi r3, 0x0
    mr r26, r3
    beq lbl_fn_80110858_0000132C
    bl fn_8021A960
    cmpwi r3, 0x0
    beq lbl_fn_80110858_0000132C
    lwz r0, 0x4(r28)
    rlwinm r0, r0, 0, 24, 24
    cmplwi r0, 0x80
    beq lbl_fn_80110858_0000132C
    li r0, 0x0
    stw r0, 0x288(r1)
    lwz r3, lbl_8087F9E8
    mr r4, r26
    lwz r5, 0x88(r28)
    addi r7, r1, 0x264
    lwz r6, 0x9c(r28)
    addi r8, r1, 0x258
    lfs f1, lbl_80881648
    addi r9, r1, 0x288
    bl fn_8059B670
    addic. r3, r1, 0x288
    beq lbl_fn_80110858_0000132C
    lwz r4, 0x288(r1)
    cmpwi r4, 0x0
    beq lbl_fn_80110858_0000132C
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_80110858_00001324
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80110858_00001324:
    li r0, 0x0
    stw r0, 0x288(r1)
lbl_fn_80110858_0000132C:
    lwz r3, lbl_8087F430
    mr r6, r31
    lwz r4, 0x88(r28)
    addi r5, r29, 0x4
    bl fn_80373164
lbl_fn_80110858_00001340:
    lwz r4, 0x68(r28)
    lwz r0, 0xac(r4)
    rlwinm r3, r0, 0, 16, 16
    addis r0, r3, 0x0
    cmplwi r0, 0x8000
    beq lbl_fn_80110858_000013D4
    lbz r0, 0x2(r4)
    cmpwi r0, 0x9
    beq lbl_fn_80110858_000013D4
    lwz r3, 0x4(r28)
    rlwinm r0, r3, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_80110858_000013B8
    rlwinm r0, r3, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_80110858_000013AC
    lwz r4, 0x60(r4)
    lis r0, 0x4330
    stw r0, 0x528(r1)
    lis r3, lbl_80736698@ha
    xoris r0, r4, 0x8000
    lfd f7, lbl_80736698@l(r3)
    stw r0, 0x52c(r1)
    lfd f0, 0x528(r1)
    fsubs f0, f0, f7
    stfs f0, 0x94(r28)
    b lbl_fn_80110858_000013D4
lbl_fn_80110858_000013AC:
    lfs f0, lbl_80881690
    stfs f0, 0x94(r28)
    b lbl_fn_80110858_000013D4
lbl_fn_80110858_000013B8:
    lwz r12, 0x0(r28)
    mr r3, r28
    li r4, 0x1
    li r5, 0x0
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
lbl_fn_80110858_000013D4:
    lwz r3, 0x68(r28)
    lbz r0, 0x2(r3)
    cmpwi r0, 0x9
    beq lbl_fn_80110858_000013F4
    psq_l f1, 0x10(r29), 0, 0
    lfs f2, 0x18(r29)
    stfs f2, 0x10(r28)
    psq_st f1, 0x8(r28), 0, 0
lbl_fn_80110858_000013F4:
    lwz r0, 0x4(r28)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_80110858_00001680
    lwz r6, 0x9c(r28)
    cmpwi r6, 0x0
    beq lbl_fn_80110858_0000156C
    lwz r7, 0x38(r6)
    li r4, 0x0
    li r0, 0x0
    li r3, 0x0
    rlwinm r5, r7, 0, 29, 29
    cmplwi r5, 0x4
    beq lbl_fn_80110858_0000143C
    clrlwi r5, r7, 31
    cmplwi r5, 0x1
    beq lbl_fn_80110858_0000143C
    li r3, 0x1
lbl_fn_80110858_0000143C:
    cmpwi r3, 0x0
    beq lbl_fn_80110858_00001458
    lwz r3, 0x7e0(r6)
    rlwinm r3, r3, 0, 26, 26
    cmplwi r3, 0x20
    beq lbl_fn_80110858_00001458
    li r0, 0x1
lbl_fn_80110858_00001458:
    cmpwi r0, 0x0
    beq lbl_fn_80110858_0000148C
    lwz r0, 0x55c(r6)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_80110858_00001480
    lwz r0, 0x560(r6)
    cmpwi r0, 0x1c
    bne lbl_fn_80110858_00001480
    li r3, 0x1
lbl_fn_80110858_00001480:
    cmpwi r3, 0x0
    bne lbl_fn_80110858_0000148C
    li r4, 0x1
lbl_fn_80110858_0000148C:
    cmpwi r4, 0x0
    beq lbl_fn_80110858_0000156C
    lwz r0, 0x12a4(r6)
    extrwi r0, r0, 1, 9
    cmplwi r0, 0x1
    beq lbl_fn_80110858_0000156C
    lfs f7, 0x10(r28)
    addi r3, r1, 0x21c
    lfs f0, 0x1c(r28)
    lfs f9, 0xc(r28)
    fsubs f10, f7, f0
    lfs f8, 0x18(r28)
    lfs f7, 0x8(r28)
    lfs f0, 0x14(r28)
    fsubs f8, f9, f8
    fsubs f0, f7, f0
    stfs f8, 0x220(r1)
    stfs f0, 0x21c(r1)
    stfs f10, 0x224(r1)
    bl fn_805F9920
    fabs f7, f1
    lfs f0, lbl_80881650
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_80110858_00001504
    lfs f7, lbl_80881640
    lfs f0, lbl_80881644
    stfs f7, 0x21c(r1)
    stfs f7, 0x220(r1)
    stfs f0, 0x224(r1)
lbl_fn_80110858_00001504:
    addi r4, r1, 0x21c
    lfs f2, 0x224(r1)
    addi r3, r1, 0x120
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    mr r4, r3
    stfs f2, 0x128(r1)
    bl fn_805F98D0
    lfs f9, 0x5c(r28)
    addi r5, r1, 0x12c
    lfs f8, 0x128(r1)
    addi r6, r1, 0x264
    lfs f7, 0x124(r1)
    li r7, 0x1
    lfs f0, 0x120(r1)
    fmuls f8, f8, f9
    fmuls f7, f7, f9
    li r8, 0x0
    fmuls f0, f0, f9
    stfs f8, 0x134(r1)
    li r9, 0x0
    stfs f0, 0x12c(r1)
    stfs f7, 0x130(r1)
    lwz r3, 0x9c(r28)
    lwz r4, 0x7c(r28)
    bl fn_8015076C
lbl_fn_80110858_0000156C:
    addi r4, r1, 0x264
    lwz r3, 0x9c(r28)
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x26c(r1)
    cmpwi r3, 0x0
    stfs f2, 0x10(r28)
    psq_st f1, 0x8(r28), 0, 0
    beq lbl_fn_80110858_00001680
    addi r27, r3, 0xb0
    lis r4, lbl_807366A8@ha
    mr r3, r27
    li r5, 0x0
    addi r4, r4, lbl_807366A8@l
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80110858_000015B4
    li r5, 0x0
    b lbl_fn_80110858_000015C0
lbl_fn_80110858_000015B4:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r27)
    add r5, r3, r0
lbl_fn_80110858_000015C0:
    cmpwi r5, 0x0
    beq lbl_fn_80110858_00001680
    psq_l f1, 0x0(r5), 0, 0
    addi r27, r1, 0x2a0
    psq_l f2, 0x8(r5), 0, 0
    mr r3, r27
    psq_l f3, 0x10(r5), 0, 0
    mr r4, r27
    psq_l f4, 0x18(r5), 0, 0
    psq_l f5, 0x20(r5), 0, 0
    psq_l f6, 0x28(r5), 0, 0
    psq_st f6, 0x28(r27), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    psq_st f2, 0x8(r27), 0, 0
    psq_st f3, 0x10(r27), 0, 0
    psq_st f4, 0x18(r27), 0, 0
    psq_st f5, 0x20(r27), 0, 0
    bl fn_805F8CA0
    addi r4, r28, 0x8
    mr r3, r27
    mr r5, r4
    bl fn_805F93C0
    addi r3, r28, 0x8
    bl fn_805F9940
    lfs f0, lbl_8088169C
    fcmpo cr0, f1, f0
    ble lbl_fn_80110858_00001660
    addi r3, r28, 0x8
    mr r4, r3
    bl fn_805F98D0
    lfs f8, 0x8(r28)
    lfs f9, lbl_8088169C
    lfs f7, 0xc(r28)
    lfs f0, 0x10(r28)
    fmuls f8, f8, f9
    fmuls f7, f7, f9
    fmuls f0, f0, f9
    stfs f8, 0x8(r28)
    stfs f7, 0xc(r28)
    stfs f0, 0x10(r28)
lbl_fn_80110858_00001660:
    lfs f0, lbl_80881640
    addi r4, r28, 0x20
    stfs f0, 0x2ac(r1)
    mr r5, r4
    addi r3, r1, 0x2a0
    stfs f0, 0x2bc(r1)
    stfs f0, 0x2cc(r1)
    bl fn_805F93C0
lbl_fn_80110858_00001680:
    lwz r0, lbl_8087F498
    cmpwi r0, 0x0
    beq lbl_fn_80110858_000018B0
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    subf. r0, r4, r0
    bne lbl_fn_80110858_000018B0
    lwz r3, 0x68(r28)
    lwz r3, 0x4(r3)
    subi r0, r3, 0x148
    cmplwi r0, 0x2
    bgt lbl_fn_80110858_000018B0
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80110858_000018B0
    bl fn_80375184
    cmpwi r3, 0x0
    bne lbl_fn_80110858_000018B0
    lwz r0, 0x88(r28)
    cmpwi r0, 0x0
    beq lbl_fn_80110858_000018B0
    lwz r3, lbl_8087F8A0
    li r0, 0x0
    stw r0, 0x4e0(r1)
    lwz r29, 0x48(r3)
    lfs f31, lbl_808816A0
    b lbl_fn_80110858_000017A0
lbl_fn_80110858_000016F4:
    lwz r0, 0x4e0(r1)
    cmplwi r0, 0x10
    bge lbl_fn_80110858_000017AC
    lwz r0, 0x88(r28)
    cmplw r29, r0
    beq lbl_fn_80110858_0000179C
    bl fn_8013655C
    cmpwi r3, 0x0
    bne lbl_fn_80110858_0000179C
    lwz r0, 0x38(r29)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80110858_0000179C
    lwz r0, 0x7c(r29)
    cmpwi r0, 0x0
    beq lbl_fn_80110858_0000179C
    lwz r4, 0x88(r28)
    addi r3, r1, 0x114
    lfs f7, 0x530(r29)
    lfs f0, 0x530(r4)
    lfs f9, 0x52c(r29)
    fsubs f10, f7, f0
    lfs f8, 0x52c(r4)
    lfs f7, 0x528(r29)
    lfs f0, 0x528(r4)
    fsubs f8, f9, f8
    fsubs f0, f7, f0
    stfs f8, 0x118(r1)
    stfs f0, 0x114(r1)
    stfs f10, 0x11c(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f31
    bge lbl_fn_80110858_0000179C
    lwz r0, 0x4e0(r1)
    addi r3, r1, 0x4e4
    slwi r0, r0, 2
    add. r3, r3, r0
    beq lbl_fn_80110858_00001790
    stw r29, 0x0(r3)
lbl_fn_80110858_00001790:
    lwz r3, 0x4e0(r1)
    addi r0, r3, 0x1
    stw r0, 0x4e0(r1)
lbl_fn_80110858_0000179C:
    lwz r29, 0x14ac(r29)
lbl_fn_80110858_000017A0:
    cmpwi r29, 0x0
    mr r3, r29
    bne lbl_fn_80110858_000016F4
lbl_fn_80110858_000017AC:
    lwz r3, lbl_8087F890
    lfs f31, lbl_808816A0
    lwz r29, 0x48(r3)
    b lbl_fn_80110858_00001868
lbl_fn_80110858_000017BC:
    lwz r0, 0x4e0(r1)
    cmplwi r0, 0x10
    bge lbl_fn_80110858_00001874
    lwz r0, 0x88(r28)
    cmplw r29, r0
    beq lbl_fn_80110858_00001864
    bl fn_8013655C
    cmpwi r3, 0x0
    bne lbl_fn_80110858_00001864
    lwz r0, 0x38(r29)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80110858_00001864
    lwz r0, 0x7c(r29)
    cmpwi r0, 0x0
    beq lbl_fn_80110858_00001864
    lwz r4, 0x88(r28)
    addi r3, r1, 0x108
    lfs f7, 0x530(r29)
    lfs f0, 0x530(r4)
    lfs f9, 0x52c(r29)
    fsubs f10, f7, f0
    lfs f8, 0x52c(r4)
    lfs f7, 0x528(r29)
    lfs f0, 0x528(r4)
    fsubs f8, f9, f8
    fsubs f0, f7, f0
    stfs f8, 0x10c(r1)
    stfs f0, 0x108(r1)
    stfs f10, 0x110(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f31
    bge lbl_fn_80110858_00001864
    lwz r0, 0x4e0(r1)
    addi r3, r1, 0x4e4
    slwi r0, r0, 2
    add. r3, r3, r0
    beq lbl_fn_80110858_00001858
    stw r29, 0x0(r3)
lbl_fn_80110858_00001858:
    lwz r3, 0x4e0(r1)
    addi r0, r3, 0x1
    stw r0, 0x4e0(r1)
lbl_fn_80110858_00001864:
    lwz r29, 0x1424(r29)
lbl_fn_80110858_00001868:
    cmpwi r29, 0x0
    mr r3, r29
    bne lbl_fn_80110858_000017BC
lbl_fn_80110858_00001874:
    lwz r0, 0x4e0(r1)
    lwz r27, 0x4e0(r1)
    cmpwi r0, 0x0
    beq lbl_fn_80110858_000018B0
    bl fn_80680CF8
    divwu r0, r3, r27
    addi r4, r1, 0x4e4
    lfs f1, lbl_808816A4
    li r5, 0x7
    mullw r0, r0, r27
    subf r0, r0, r3
    lwz r3, lbl_8087F498
    slwi r0, r0, 2
    lwzx r4, r4, r0
    bl fn_803EAA7C
lbl_fn_80110858_000018B0:
    lwz r5, lbl_8087F430
    cmpwi r5, 0x0
    beq lbl_fn_80110858_00001908
    lwz r3, 0x68(r28)
    cmpwi r3, 0x0
    beq lbl_fn_80110858_00001908
    lwz r0, 0xac(r3)
    rlwinm r3, r0, 0, 13, 13
    subis r0, r3, 0x4
    cmplwi r0, 0x0
    bne lbl_fn_80110858_00001908
    lwz r3, 0x96c(r5)
    li r0, 0xf
    lfs f0, lbl_80881648
    srwi r4, r3, 31
    clrlwi r3, r3, 31
    xor r3, r3, r4
    subf r3, r4, r3
    stw r3, 0x96c(r5)
    stw r0, 0x970(r5)
    stfs f0, 0x974(r5)
    stfs f0, 0x978(r5)
lbl_fn_80110858_00001908:
    addi r11, r1, 0x550
    psq_l f31, 0x5a8(r1), 0, 0
    lfd f31, 0x5a0(r1)
    psq_l f30, 0x598(r1), 0, 0
    lfd f30, 0x590(r1)
    psq_l f29, 0x588(r1), 0, 0
    lfd f29, 0x580(r1)
    psq_l f28, 0x578(r1), 0, 0
    lfd f28, 0x570(r1)
    psq_l f27, 0x568(r1), 0, 0
    lfd f27, 0x560(r1)
    psq_l f26, 0x558(r1), 0, 0
    lfd f26, 0x550(r1)
    bl _restgpr_26
    lwz r0, 0x5b4(r1)
    mtlr r0
    addi r1, r1, 0x5b0
    blr
}
