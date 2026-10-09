#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800CB5C8(void);
extern void fn_800EE360(void);
extern void fn_800F8548(void);
extern void fn_8016E970(void);
extern void fn_801765D8(void);
extern void fn_80232B7C(void);
extern void fn_80239DAC(void);
extern void fn_8023A8B4(void);
extern void fn_8027EB14(void);
extern void fn_802826A0(void);
extern void fn_802829DC(void);
extern void fn_8036554C(void);
extern void fn_805F8E70(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_8068AEA4(void);

/* External data declarations */
extern u8 lbl_80744E80[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F428;
extern u32 lbl_8087F430;
extern u32 lbl_8087F8A0;
extern u32 lbl_80883948;
extern u32 lbl_8088394C;
extern u32 lbl_80883968;
extern u32 lbl_8088396C;
extern u32 lbl_80883970;
extern u32 lbl_80883980;
extern u32 lbl_80883988;
extern u32 lbl_808839A0;
extern u32 lbl_808839A4;
extern u32 lbl_808839C4;
extern u32 lbl_808839C8;
extern u32 lbl_808839CC;

/* Function declarations */
void fn_80280184(void);
void fn_802805C8(void);
void fn_80280EF8(void);
void fn_80281054(void);
void fn_80281344(void);
void fn_80281634(void);
void fn_80281924(void);

asm void fn_80280184(void)
{
    nofralloc
    stwu r1, -0x140(r1)
    mflr r0
    stw r0, 0x144(r1)
    stfd f31, 0x130(r1)
    psq_st f31, 0x138(r1), 0, 0
    stfd f30, 0x120(r1)
    psq_st f30, 0x128(r1), 0, 0
    stw r31, 0x11c(r1)
    mr r31, r3
    stw r30, 0x118(r1)
    stw r29, 0x114(r1)
    lwz r8, 0x1504(r3)
    lwz r4, 0x1520(r3)
    cmpwi r8, 0x0
    addi r0, r4, 0x1
    stw r0, 0x1520(r3)
    bgt lbl_fn_80280184_00000338
    lwz r4, 0x14ec(r3)
    lfs f0, 0x530(r3)
    lfs f3, 0x530(r4)
    lfs f5, 0x52c(r4)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r3)
    lfs f0, 0x528(r3)
    addi r3, r1, 0x80
    lfs f3, 0x528(r4)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x84(r1)
    stfs f0, 0x80(r1)
    stfs f6, 0x88(r1)
    bl fn_805F9920
    lfs f0, lbl_808839C4
    fcmpo cr0, f1, f0
    bge lbl_fn_80280184_00000410
    lwz r30, 0x14ec(r31)
    mr r3, r31
    li r5, 0x3
    mr r4, r30
    bl fn_802826A0
    cmpwi r3, 0x0
    bne lbl_fn_80280184_0000032C
    li r0, 0x0
    stw r0, 0x14d8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0x3
    mr r3, r31
    li r4, 0x6
    stw r0, 0x58c(r31)
    bl fn_8016E970
    li r0, 0x4
    stw r0, 0x560(r31)
    addi r29, r1, 0x20
    addi r3, r1, 0x8
    psq_l f1, 0x528(r30), 0, 0
    addi r5, r1, 0x2c
    psq_st f1, 0x0(r3), 0, 0
    mr r3, r29
    lfs f2, 0x530(r30)
    mr r4, r29
    lfs f0, 0x530(r31)
    lfs f5, 0xc(r1)
    fsubs f6, f2, f0
    lfs f4, 0x52c(r31)
    lfs f3, 0x8(r1)
    lfs f0, 0x528(r31)
    fsubs f4, f5, f4
    stfs f2, 0x10(r1)
    fsubs f0, f3, f0
    fmr f2, f6
    stfs f4, 0x30(r1)
    stfs f0, 0x2c(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f6, 0x34(r1)
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x28(r1)
    bl fn_805F98D0
    lfs f2, 0x28(r1)
    addi r30, r1, 0x14
    psq_l f1, 0x0(r29), 0, 0
    fabs f3, f2
    lfs f0, lbl_80883980
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0x1c(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_80280184_00000188
    lfs f3, 0x14(r1)
    lfs f0, lbl_80883948
    fcmpo cr0, f3, f0
    ble lbl_fn_80280184_0000017C
    lfs f0, lbl_808839A0
    b lbl_fn_80280184_00000180
lbl_fn_80280184_0000017C:
    lfs f0, lbl_808839A4
lbl_fn_80280184_00000180:
    stfs f0, 0x3c(r1)
    b lbl_fn_80280184_0000019C
lbl_fn_80280184_00000188:
    frsp f2, f2
    lfs f1, 0x14(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x3c(r1)
lbl_fn_80280184_0000019C:
    lfs f0, 0x3c(r1)
    addi r3, r1, 0xd8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883948
    addi r4, r1, 0x44
    lfs f4, 0xe0(r1)
    mr r5, r4
    lfs f5, 0xdc(r1)
    addi r3, r1, 0x98
    lfs f6, 0xd8(r1)
    lfs f7, 0xf0(r1)
    lfs f8, 0xec(r1)
    lfs f9, 0xe8(r1)
    lfs f10, 0x100(r1)
    lfs f11, 0xfc(r1)
    lfs f12, 0xf8(r1)
    lfs f13, 0x104(r1)
    lfs f31, 0xf4(r1)
    lfs f30, 0xe4(r1)
    lfs f0, lbl_8088394C
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x1c(r1)
    stfs f3, 0xc8(r1)
    stfs f3, 0xcc(r1)
    stfs f3, 0xd0(r1)
    stfs f0, 0xd4(r1)
    stfs f6, 0x74(r1)
    stfs f5, 0x78(r1)
    stfs f4, 0x7c(r1)
    stfs f6, 0x98(r1)
    stfs f5, 0x9c(r1)
    stfs f4, 0xa0(r1)
    stfs f9, 0x68(r1)
    stfs f8, 0x6c(r1)
    stfs f7, 0x70(r1)
    stfs f9, 0xa8(r1)
    stfs f8, 0xac(r1)
    stfs f7, 0xb0(r1)
    stfs f12, 0x5c(r1)
    stfs f11, 0x60(r1)
    stfs f10, 0x64(r1)
    stfs f12, 0xb8(r1)
    stfs f11, 0xbc(r1)
    stfs f10, 0xc0(r1)
    stfs f30, 0x50(r1)
    stfs f31, 0x54(r1)
    stfs f13, 0x58(r1)
    stfs f30, 0xa4(r1)
    stfs f31, 0xb4(r1)
    stfs f13, 0xc4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x4c(r1)
    bl fn_805F9750
    lfs f2, 0x4c(r1)
    lfs f0, lbl_80883980
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80280184_000002B8
    lfs f3, 0x48(r1)
    lfs f0, lbl_80883948
    fcmpo cr0, f3, f0
    ble lbl_fn_80280184_000002A8
    lfs f0, lbl_808839A0
    b lbl_fn_80280184_000002AC
lbl_fn_80280184_000002A8:
    lfs f0, lbl_808839A4
lbl_fn_80280184_000002AC:
    fneg f0, f0
    stfs f0, 0x38(r1)
    b lbl_fn_80280184_000002CC
lbl_fn_80280184_000002B8:
    lfs f1, 0x48(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x38(r1)
lbl_fn_80280184_000002CC:
    lfs f3, lbl_80883948
    addi r3, r1, 0x38
    psq_l f1, 0x0(r3), 0, 0
    li r0, 0x1
    fmr f2, f3
    lfs f0, lbl_8088394C
    psq_st f1, 0x0(r30), 0, 0
    addi r3, r31, 0xb0
    li r4, 0x0
    li r5, 0x145
    stfs f2, 0x1c(r1)
    frsp f2, f2
    li r6, 0x0
    li r7, 0x0
    psq_st f1, 0x534(r31), 0, 0
    fmr f1, f3
    li r8, 0x1
    stfs f2, 0x53c(r31)
    lfs f2, lbl_80883988
    stfs f3, 0x40(r1)
    stw r0, 0x3fc(r31)
    stfs f0, 0x2fc(r31)
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
lbl_fn_80280184_0000032C:
    li r0, 0x0
    stw r0, 0x151c(r31)
    b lbl_fn_80280184_00000418
lbl_fn_80280184_00000338:
    lwz r4, lbl_8087F430
    li r5, 0x0
    li r7, 0x0
    lwz r6, 0x10d8(r4)
    lwz r0, 0x78(r6)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80280184_00000380
lbl_fn_80280184_00000358:
    lwz r4, 0x7c(r6)
    lwzx r0, r4, r7
    cmpw r8, r0
    bne lbl_fn_80280184_00000374
    mulli r0, r5, 0x28
    add r4, r4, r0
    b lbl_fn_80280184_00000384
lbl_fn_80280184_00000374:
    addi r7, r7, 0x28
    addi r5, r5, 0x1
    bdnz lbl_fn_80280184_00000358
lbl_fn_80280184_00000380:
    li r4, 0x0
lbl_fn_80280184_00000384:
    lfs f5, 0x530(r3)
    lfs f0, 0xc(r4)
    lfs f4, 0x528(r3)
    addi r3, r1, 0x8c
    lfs f3, 0x4(r4)
    fsubs f5, f5, f0
    lfs f0, lbl_80883948
    fsubs f3, f4, f3
    stfs f5, 0x94(r1)
    stfs f3, 0x8c(r1)
    stfs f0, 0x90(r1)
    bl fn_805F9920
    lfs f0, lbl_8088396C
    fcmpo cr0, f1, f0
    bge lbl_fn_80280184_00000410
    li r30, 0x0
    stw r30, 0x14d8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r3, r31
    li r4, 0x3
    stw r30, 0x58c(r31)
    bl fn_8016E970
    addi r3, r31, 0x15a8
    li r4, 0xf
    li r5, 0x0
    bl fn_800CB5C8
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0xc8
    li r6, 0x0
    bl fn_80239DAC
    stw r30, 0x151c(r31)
    b lbl_fn_80280184_00000418
lbl_fn_80280184_00000410:
    mr r3, r31
    bl fn_8027EB14
lbl_fn_80280184_00000418:
    lwz r0, 0x144(r1)
    psq_l f31, 0x138(r1), 0, 0
    lfd f31, 0x130(r1)
    psq_l f30, 0x128(r1), 0, 0
    lfd f30, 0x120(r1)
    lwz r31, 0x11c(r1)
    lwz r30, 0x118(r1)
    lwz r29, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x140
    blr
}

asm void fn_802805C8(void)
{
    nofralloc
    stwu r1, -0x2f0(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x2f4(r1)
    stfd f31, 0x2e0(r1)
    psq_st f31, 0x2e8(r1), 0, 0
    stfd f30, 0x2d0(r1)
    psq_st f30, 0x2d8(r1), 0, 0
    stw r31, 0x2cc(r1)
    mr r31, r3
    stw r30, 0x2c8(r1)
    stw r29, 0x2c4(r1)
    lfs f30, 0x2e4(r3)
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f30, f1
    cror eq, gt, eq
    bne lbl_fn_802805C8_00000D04
    lwz r0, 0x1538(r31)
    cmpwi r0, 0x0
    beq lbl_fn_802805C8_000004BC
    cmpwi r0, 0x1
    beq lbl_fn_802805C8_00000508
    cmpwi r0, 0x2
    beq lbl_fn_802805C8_000007AC
    cmpwi r0, 0x3
    beq lbl_fn_802805C8_00000A50
    cmpwi r0, 0x5
    beq lbl_fn_802805C8_00000CF4
    b lbl_fn_802805C8_00000D48
lbl_fn_802805C8_000004BC:
    li r30, 0x0
    stw r30, 0x14d8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r3, r31
    li r4, 0x3
    stw r30, 0x58c(r31)
    bl fn_8016E970
    addi r3, r31, 0x15a8
    li r4, 0xf
    li r5, 0x0
    bl fn_800CB5C8
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0xc8
    li r6, 0x0
    bl fn_80239DAC
    b lbl_fn_802805C8_00000D48
lbl_fn_802805C8_00000508:
    lwz r30, 0x1540(r31)
    mr r3, r31
    li r5, 0x1
    mr r4, r30
    bl fn_802826A0
    cmpwi r3, 0x0
    bne lbl_fn_802805C8_00000D48
    li r0, 0x0
    stw r0, 0x14d8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0x1
    mr r3, r31
    li r4, 0x6
    stw r0, 0x58c(r31)
    bl fn_8016E970
    li r0, 0x4
    stw r0, 0x560(r31)
    addi r29, r1, 0x110
    addi r3, r1, 0xf8
    psq_l f1, 0x528(r30), 0, 0
    addi r5, r1, 0x11c
    psq_st f1, 0x0(r3), 0, 0
    mr r3, r29
    lfs f2, 0x530(r30)
    mr r4, r29
    lfs f0, 0x530(r31)
    lfs f5, 0xfc(r1)
    fsubs f6, f2, f0
    lfs f4, 0x52c(r31)
    lfs f3, 0xf8(r1)
    lfs f0, 0x528(r31)
    fsubs f4, f5, f4
    stfs f2, 0x100(r1)
    fsubs f0, f3, f0
    fmr f2, f6
    stfs f4, 0x120(r1)
    stfs f0, 0x11c(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f6, 0x124(r1)
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x118(r1)
    bl fn_805F98D0
    lfs f2, 0x118(r1)
    addi r30, r1, 0x104
    psq_l f1, 0x0(r29), 0, 0
    fabs f3, f2
    lfs f0, lbl_80883980
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0x10c(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_802805C8_00000604
    lfs f3, 0x104(r1)
    lfs f0, lbl_80883948
    fcmpo cr0, f3, f0
    ble lbl_fn_802805C8_000005F8
    lfs f0, lbl_808839A0
    b lbl_fn_802805C8_000005FC
lbl_fn_802805C8_000005F8:
    lfs f0, lbl_808839A4
lbl_fn_802805C8_000005FC:
    stfs f0, 0x12c(r1)
    b lbl_fn_802805C8_00000618
lbl_fn_802805C8_00000604:
    frsp f2, f2
    lfs f1, 0x104(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x12c(r1)
lbl_fn_802805C8_00000618:
    lfs f0, 0x12c(r1)
    addi r3, r1, 0x290
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883948
    addi r4, r1, 0x134
    lfs f4, 0x298(r1)
    mr r5, r4
    lfs f5, 0x294(r1)
    addi r3, r1, 0x250
    lfs f6, 0x290(r1)
    lfs f7, 0x2a8(r1)
    lfs f8, 0x2a4(r1)
    lfs f9, 0x2a0(r1)
    lfs f10, 0x2b8(r1)
    lfs f11, 0x2b4(r1)
    lfs f12, 0x2b0(r1)
    lfs f13, 0x2bc(r1)
    lfs f31, 0x2ac(r1)
    lfs f30, 0x29c(r1)
    lfs f0, lbl_8088394C
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x10c(r1)
    stfs f3, 0x280(r1)
    stfs f3, 0x284(r1)
    stfs f3, 0x288(r1)
    stfs f0, 0x28c(r1)
    stfs f6, 0x164(r1)
    stfs f5, 0x168(r1)
    stfs f4, 0x16c(r1)
    stfs f6, 0x250(r1)
    stfs f5, 0x254(r1)
    stfs f4, 0x258(r1)
    stfs f9, 0x158(r1)
    stfs f8, 0x15c(r1)
    stfs f7, 0x160(r1)
    stfs f9, 0x260(r1)
    stfs f8, 0x264(r1)
    stfs f7, 0x268(r1)
    stfs f12, 0x14c(r1)
    stfs f11, 0x150(r1)
    stfs f10, 0x154(r1)
    stfs f12, 0x270(r1)
    stfs f11, 0x274(r1)
    stfs f10, 0x278(r1)
    stfs f30, 0x140(r1)
    stfs f31, 0x144(r1)
    stfs f13, 0x148(r1)
    stfs f30, 0x25c(r1)
    stfs f31, 0x26c(r1)
    stfs f13, 0x27c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x13c(r1)
    bl fn_805F9750
    lfs f2, 0x13c(r1)
    lfs f0, lbl_80883980
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802805C8_00000734
    lfs f3, 0x138(r1)
    lfs f0, lbl_80883948
    fcmpo cr0, f3, f0
    ble lbl_fn_802805C8_00000724
    lfs f0, lbl_808839A0
    b lbl_fn_802805C8_00000728
lbl_fn_802805C8_00000724:
    lfs f0, lbl_808839A4
lbl_fn_802805C8_00000728:
    fneg f0, f0
    stfs f0, 0x128(r1)
    b lbl_fn_802805C8_00000748
lbl_fn_802805C8_00000734:
    lfs f1, 0x138(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x128(r1)
lbl_fn_802805C8_00000748:
    lfs f3, lbl_80883948
    addi r3, r1, 0x128
    psq_l f1, 0x0(r3), 0, 0
    li r0, 0x1
    fmr f2, f3
    lfs f0, lbl_8088394C
    psq_st f1, 0x0(r30), 0, 0
    addi r3, r31, 0xb0
    li r4, 0x0
    li r5, 0x13f
    stfs f2, 0x10c(r1)
    frsp f2, f2
    li r6, 0x0
    li r7, 0x0
    psq_st f1, 0x534(r31), 0, 0
    fmr f1, f3
    li r8, 0x1
    stfs f2, 0x53c(r31)
    lfs f2, lbl_80883988
    stfs f3, 0x130(r1)
    stw r0, 0x3fc(r31)
    stfs f0, 0x2fc(r31)
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    b lbl_fn_802805C8_00000D48
lbl_fn_802805C8_000007AC:
    lwz r29, 0x1540(r31)
    mr r3, r31
    li r5, 0x3
    mr r4, r29
    bl fn_802826A0
    cmpwi r3, 0x0
    bne lbl_fn_802805C8_00000D48
    li r0, 0x0
    stw r0, 0x14d8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0x3
    mr r3, r31
    li r4, 0x6
    stw r0, 0x58c(r31)
    bl fn_8016E970
    li r0, 0x4
    stw r0, 0x560(r31)
    addi r30, r1, 0x98
    addi r3, r1, 0x80
    psq_l f1, 0x528(r29), 0, 0
    addi r5, r1, 0xa4
    psq_st f1, 0x0(r3), 0, 0
    mr r3, r30
    lfs f2, 0x530(r29)
    mr r4, r30
    lfs f0, 0x530(r31)
    lfs f5, 0x84(r1)
    fsubs f6, f2, f0
    lfs f4, 0x52c(r31)
    lfs f3, 0x80(r1)
    lfs f0, 0x528(r31)
    fsubs f4, f5, f4
    stfs f2, 0x88(r1)
    fsubs f0, f3, f0
    fmr f2, f6
    stfs f4, 0xa8(r1)
    stfs f0, 0xa4(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f6, 0xac(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0xa0(r1)
    bl fn_805F98D0
    lfs f2, 0xa0(r1)
    addi r29, r1, 0x8c
    psq_l f1, 0x0(r30), 0, 0
    fabs f3, f2
    lfs f0, lbl_80883980
    psq_st f1, 0x0(r29), 0, 0
    frsp f3, f3
    stfs f2, 0x94(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_802805C8_000008A8
    lfs f3, 0x8c(r1)
    lfs f0, lbl_80883948
    fcmpo cr0, f3, f0
    ble lbl_fn_802805C8_0000089C
    lfs f0, lbl_808839A0
    b lbl_fn_802805C8_000008A0
lbl_fn_802805C8_0000089C:
    lfs f0, lbl_808839A4
lbl_fn_802805C8_000008A0:
    stfs f0, 0xb4(r1)
    b lbl_fn_802805C8_000008BC
lbl_fn_802805C8_000008A8:
    frsp f2, f2
    lfs f1, 0x8c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0xb4(r1)
lbl_fn_802805C8_000008BC:
    lfs f0, 0xb4(r1)
    addi r3, r1, 0x220
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883948
    addi r4, r1, 0xbc
    lfs f4, 0x228(r1)
    mr r5, r4
    lfs f5, 0x224(r1)
    addi r3, r1, 0x1e0
    lfs f6, 0x220(r1)
    lfs f7, 0x238(r1)
    lfs f8, 0x234(r1)
    lfs f9, 0x230(r1)
    lfs f10, 0x248(r1)
    lfs f11, 0x244(r1)
    lfs f12, 0x240(r1)
    lfs f13, 0x24c(r1)
    lfs f30, 0x23c(r1)
    lfs f31, 0x22c(r1)
    lfs f0, lbl_8088394C
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x94(r1)
    stfs f3, 0x210(r1)
    stfs f3, 0x214(r1)
    stfs f3, 0x218(r1)
    stfs f0, 0x21c(r1)
    stfs f6, 0xec(r1)
    stfs f5, 0xf0(r1)
    stfs f4, 0xf4(r1)
    stfs f6, 0x1e0(r1)
    stfs f5, 0x1e4(r1)
    stfs f4, 0x1e8(r1)
    stfs f9, 0xe0(r1)
    stfs f8, 0xe4(r1)
    stfs f7, 0xe8(r1)
    stfs f9, 0x1f0(r1)
    stfs f8, 0x1f4(r1)
    stfs f7, 0x1f8(r1)
    stfs f12, 0xd4(r1)
    stfs f11, 0xd8(r1)
    stfs f10, 0xdc(r1)
    stfs f12, 0x200(r1)
    stfs f11, 0x204(r1)
    stfs f10, 0x208(r1)
    stfs f31, 0xc8(r1)
    stfs f30, 0xcc(r1)
    stfs f13, 0xd0(r1)
    stfs f31, 0x1ec(r1)
    stfs f30, 0x1fc(r1)
    stfs f13, 0x20c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xc4(r1)
    bl fn_805F9750
    lfs f2, 0xc4(r1)
    lfs f0, lbl_80883980
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802805C8_000009D8
    lfs f3, 0xc0(r1)
    lfs f0, lbl_80883948
    fcmpo cr0, f3, f0
    ble lbl_fn_802805C8_000009C8
    lfs f0, lbl_808839A0
    b lbl_fn_802805C8_000009CC
lbl_fn_802805C8_000009C8:
    lfs f0, lbl_808839A4
lbl_fn_802805C8_000009CC:
    fneg f0, f0
    stfs f0, 0xb0(r1)
    b lbl_fn_802805C8_000009EC
lbl_fn_802805C8_000009D8:
    lfs f1, 0xc0(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0xb0(r1)
lbl_fn_802805C8_000009EC:
    lfs f3, lbl_80883948
    addi r3, r1, 0xb0
    psq_l f1, 0x0(r3), 0, 0
    li r0, 0x1
    fmr f2, f3
    lfs f0, lbl_8088394C
    psq_st f1, 0x0(r29), 0, 0
    addi r3, r31, 0xb0
    li r4, 0x0
    li r5, 0x145
    stfs f2, 0x94(r1)
    frsp f2, f2
    li r6, 0x0
    li r7, 0x0
    psq_st f1, 0x534(r31), 0, 0
    fmr f1, f3
    li r8, 0x1
    stfs f2, 0x53c(r31)
    lfs f2, lbl_80883988
    stfs f3, 0xb8(r1)
    stw r0, 0x3fc(r31)
    stfs f0, 0x2fc(r31)
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    b lbl_fn_802805C8_00000D48
lbl_fn_802805C8_00000A50:
    lwz r29, 0x1540(r31)
    mr r3, r31
    li r5, 0x3
    mr r4, r29
    bl fn_802826A0
    cmpwi r3, 0x0
    bne lbl_fn_802805C8_00000D48
    li r0, 0x0
    stw r0, 0x14d8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0x3
    mr r3, r31
    li r4, 0x6
    stw r0, 0x58c(r31)
    bl fn_8016E970
    li r0, 0x4
    stw r0, 0x560(r31)
    addi r30, r1, 0x20
    addi r3, r1, 0x8
    psq_l f1, 0x528(r29), 0, 0
    addi r5, r1, 0x2c
    psq_st f1, 0x0(r3), 0, 0
    mr r3, r30
    lfs f2, 0x530(r29)
    mr r4, r30
    lfs f0, 0x530(r31)
    lfs f5, 0xc(r1)
    fsubs f6, f2, f0
    lfs f4, 0x52c(r31)
    lfs f3, 0x8(r1)
    lfs f0, 0x528(r31)
    fsubs f4, f5, f4
    stfs f2, 0x10(r1)
    fsubs f0, f3, f0
    fmr f2, f6
    stfs f4, 0x30(r1)
    stfs f0, 0x2c(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f6, 0x34(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x28(r1)
    bl fn_805F98D0
    lfs f2, 0x28(r1)
    addi r29, r1, 0x14
    psq_l f1, 0x0(r30), 0, 0
    fabs f3, f2
    lfs f0, lbl_80883980
    psq_st f1, 0x0(r29), 0, 0
    frsp f3, f3
    stfs f2, 0x1c(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_802805C8_00000B4C
    lfs f3, 0x14(r1)
    lfs f0, lbl_80883948
    fcmpo cr0, f3, f0
    ble lbl_fn_802805C8_00000B40
    lfs f0, lbl_808839A0
    b lbl_fn_802805C8_00000B44
lbl_fn_802805C8_00000B40:
    lfs f0, lbl_808839A4
lbl_fn_802805C8_00000B44:
    stfs f0, 0x3c(r1)
    b lbl_fn_802805C8_00000B60
lbl_fn_802805C8_00000B4C:
    frsp f2, f2
    lfs f1, 0x14(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x3c(r1)
lbl_fn_802805C8_00000B60:
    lfs f0, 0x3c(r1)
    addi r3, r1, 0x1b0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883948
    addi r4, r1, 0x44
    lfs f4, 0x1b8(r1)
    mr r5, r4
    lfs f5, 0x1b4(r1)
    addi r3, r1, 0x170
    lfs f6, 0x1b0(r1)
    lfs f7, 0x1c8(r1)
    lfs f8, 0x1c4(r1)
    lfs f9, 0x1c0(r1)
    lfs f10, 0x1d8(r1)
    lfs f11, 0x1d4(r1)
    lfs f12, 0x1d0(r1)
    lfs f13, 0x1dc(r1)
    lfs f30, 0x1cc(r1)
    lfs f31, 0x1bc(r1)
    lfs f0, lbl_8088394C
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x1c(r1)
    stfs f3, 0x1a0(r1)
    stfs f3, 0x1a4(r1)
    stfs f3, 0x1a8(r1)
    stfs f0, 0x1ac(r1)
    stfs f6, 0x74(r1)
    stfs f5, 0x78(r1)
    stfs f4, 0x7c(r1)
    stfs f6, 0x170(r1)
    stfs f5, 0x174(r1)
    stfs f4, 0x178(r1)
    stfs f9, 0x68(r1)
    stfs f8, 0x6c(r1)
    stfs f7, 0x70(r1)
    stfs f9, 0x180(r1)
    stfs f8, 0x184(r1)
    stfs f7, 0x188(r1)
    stfs f12, 0x5c(r1)
    stfs f11, 0x60(r1)
    stfs f10, 0x64(r1)
    stfs f12, 0x190(r1)
    stfs f11, 0x194(r1)
    stfs f10, 0x198(r1)
    stfs f31, 0x50(r1)
    stfs f30, 0x54(r1)
    stfs f13, 0x58(r1)
    stfs f31, 0x17c(r1)
    stfs f30, 0x18c(r1)
    stfs f13, 0x19c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x4c(r1)
    bl fn_805F9750
    lfs f2, 0x4c(r1)
    lfs f0, lbl_80883980
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802805C8_00000C7C
    lfs f3, 0x48(r1)
    lfs f0, lbl_80883948
    fcmpo cr0, f3, f0
    ble lbl_fn_802805C8_00000C6C
    lfs f0, lbl_808839A0
    b lbl_fn_802805C8_00000C70
lbl_fn_802805C8_00000C6C:
    lfs f0, lbl_808839A4
lbl_fn_802805C8_00000C70:
    fneg f0, f0
    stfs f0, 0x38(r1)
    b lbl_fn_802805C8_00000C90
lbl_fn_802805C8_00000C7C:
    lfs f1, 0x48(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x38(r1)
lbl_fn_802805C8_00000C90:
    lfs f3, lbl_80883948
    addi r3, r1, 0x38
    psq_l f1, 0x0(r3), 0, 0
    li r0, 0x1
    fmr f2, f3
    lfs f0, lbl_8088394C
    psq_st f1, 0x0(r29), 0, 0
    addi r3, r31, 0xb0
    li r4, 0x0
    li r5, 0x145
    stfs f2, 0x1c(r1)
    frsp f2, f2
    li r6, 0x0
    li r7, 0x0
    psq_st f1, 0x534(r31), 0, 0
    fmr f1, f3
    li r8, 0x1
    stfs f2, 0x53c(r31)
    lfs f2, lbl_80883988
    stfs f3, 0x40(r1)
    stw r0, 0x3fc(r31)
    stfs f0, 0x2fc(r31)
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    b lbl_fn_802805C8_00000D48
lbl_fn_802805C8_00000CF4:
    lwz r4, 0x1540(r31)
    mr r3, r31
    bl fn_80281924
    b lbl_fn_802805C8_00000D48
lbl_fn_802805C8_00000D04:
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_808839C8
    fcmpo cr0, f0, f3
    cror eq, lt, eq
    bne lbl_fn_802805C8_00000D48
    lfs f0, lbl_808839CC
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_802805C8_00000D48
    lfs f4, 0x2e8(r31)
    lfs f0, 0x153c(r31)
    lfs f3, lbl_80883968
    fmuls f4, f0, f4
    lfs f0, 0x538(r31)
    fdivs f3, f4, f3
    fadds f0, f0, f3
    stfs f0, 0x538(r31)
lbl_fn_802805C8_00000D48:
    lwz r0, 0x2f4(r1)
    psq_l f31, 0x2e8(r1), 0, 0
    lfd f31, 0x2e0(r1)
    psq_l f30, 0x2d8(r1), 0, 0
    lfd f30, 0x2d0(r1)
    lwz r31, 0x2cc(r1)
    lwz r30, 0x2c8(r1)
    lwz r29, 0x2c4(r1)
    mtlr r0
    addi r1, r1, 0x2f0
    blr
}

asm void fn_80280EF8(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    stw r31, 0x3c(r1)
    mr r31, r3
    lwz r0, 0x2dc(r3)
    cmpwi r0, 0x2e
    beq lbl_fn_80280EF8_00000DA0
    bl fn_802829DC
lbl_fn_80280EF8_00000DA0:
    lfs f31, 0x2e4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_80280EF8_00000EAC
    lwz r3, 0x1434(r31)
    lwz r4, 0x12a4(r31)
    lwz r0, 0x5c0(r31)
    cmpwi r3, 0x0
    oris r4, r4, 0x200
    stw r4, 0x12a4(r31)
    clrrwi r0, r0, 1
    stw r0, 0x5c0(r31)
    ble lbl_fn_80280EF8_00000E90
    subi r0, r3, 0x1
    stw r0, 0x1434(r31)
    cmpwi r0, 0x1d
    bne lbl_fn_80280EF8_00000EB4
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3e8
    li r6, 0x1
    bl fn_80239DAC
    li r3, 0x0
    li r4, 0x0
    bl fn_80232B7C
    lfs f0, lbl_80883948
    li r3, -0x1
    lfs f1, lbl_8088394C
    li r0, 0x1
    stfs f0, 0x1c(r1)
    addi r4, r31, 0x1568
    addi r5, r31, 0xb0
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
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x1
    lwz r12, 0x9c(r12)
    mtctr r12
    bctrl
    b lbl_fn_80280EF8_00000EB4
lbl_fn_80280EF8_00000E90:
    ori r0, r4, 0x8000
    stw r0, 0x12a4(r31)
    mr r3, r31
    bl fn_801765D8
    mr r3, r31
    bl fn_800EE360
    b lbl_fn_80280EF8_00000EB4
lbl_fn_80280EF8_00000EAC:
    li r0, 0x1e
    stw r0, 0x1434(r31)
lbl_fn_80280EF8_00000EB4:
    lwz r0, 0x54(r1)
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    lwz r31, 0x3c(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80281054(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    li r5, 0x1
    stw r0, 0x124(r1)
    stfd f31, 0x110(r1)
    psq_st f31, 0x118(r1), 0, 0
    stfd f30, 0x100(r1)
    psq_st f30, 0x108(r1), 0, 0
    stw r31, 0xfc(r1)
    stw r30, 0xf8(r1)
    mr r30, r4
    stw r29, 0xf4(r1)
    mr r29, r3
    bl fn_802826A0
    cmpwi r3, 0x0
    bne lbl_fn_80281054_00001194
    li r0, 0x0
    stw r0, 0x14d8(r29)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r29)
    li r0, 0x1
    mr r3, r29
    li r4, 0x6
    stw r0, 0x58c(r29)
    bl fn_8016E970
    li r0, 0x4
    stw r0, 0x560(r29)
    addi r31, r1, 0x5c
    addi r3, r1, 0x74
    psq_l f1, 0x528(r30), 0, 0
    addi r5, r1, 0x50
    psq_st f1, 0x0(r3), 0, 0
    mr r3, r31
    lfs f2, 0x530(r30)
    mr r4, r31
    lfs f0, 0x530(r29)
    lfs f5, 0x78(r1)
    fsubs f6, f2, f0
    lfs f4, 0x52c(r29)
    lfs f3, 0x74(r1)
    lfs f0, 0x528(r29)
    fsubs f4, f5, f4
    stfs f2, 0x7c(r1)
    fsubs f0, f3, f0
    fmr f2, f6
    stfs f4, 0x54(r1)
    stfs f0, 0x50(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f6, 0x58(r1)
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x64(r1)
    bl fn_805F98D0
    lfs f2, 0x64(r1)
    addi r30, r1, 0x68
    psq_l f1, 0x0(r31), 0, 0
    fabs f3, f2
    lfs f0, lbl_80883980
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0x70(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_80281054_00000FF0
    lfs f3, 0x68(r1)
    lfs f0, lbl_80883948
    fcmpo cr0, f3, f0
    ble lbl_fn_80281054_00000FE4
    lfs f0, lbl_808839A0
    b lbl_fn_80281054_00000FE8
lbl_fn_80281054_00000FE4:
    lfs f0, lbl_808839A4
lbl_fn_80281054_00000FE8:
    stfs f0, 0x48(r1)
    b lbl_fn_80281054_00001004
lbl_fn_80281054_00000FF0:
    frsp f2, f2
    lfs f1, 0x68(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_80281054_00001004:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x80
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883948
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
    lfs f0, lbl_8088394C
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x70(r1)
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
    lfs f0, lbl_80883980
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80281054_00001120
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80883948
    fcmpo cr0, f3, f0
    ble lbl_fn_80281054_00001110
    lfs f0, lbl_808839A0
    b lbl_fn_80281054_00001114
lbl_fn_80281054_00001110:
    lfs f0, lbl_808839A4
lbl_fn_80281054_00001114:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_80281054_00001134
lbl_fn_80281054_00001120:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_80281054_00001134:
    lfs f3, lbl_80883948
    addi r3, r1, 0x44
    psq_l f1, 0x0(r3), 0, 0
    li r0, 0x1
    fmr f2, f3
    lfs f0, lbl_8088394C
    psq_st f1, 0x0(r30), 0, 0
    addi r3, r29, 0xb0
    li r4, 0x0
    li r5, 0x13f
    stfs f2, 0x70(r1)
    frsp f2, f2
    li r6, 0x0
    li r7, 0x0
    psq_st f1, 0x534(r29), 0, 0
    fmr f1, f3
    li r8, 0x1
    stfs f2, 0x53c(r29)
    lfs f2, lbl_80883988
    stfs f3, 0x4c(r1)
    stw r0, 0x3fc(r29)
    stfs f0, 0x2fc(r29)
    stfs f0, 0x2e8(r29)
    bl fn_80097C08
lbl_fn_80281054_00001194:
    lwz r0, 0x124(r1)
    psq_l f31, 0x118(r1), 0, 0
    lfd f31, 0x110(r1)
    psq_l f30, 0x108(r1), 0, 0
    lfd f30, 0x100(r1)
    lwz r31, 0xfc(r1)
    lwz r30, 0xf8(r1)
    lwz r29, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_80281344(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    li r5, 0x3
    stw r0, 0x124(r1)
    stfd f31, 0x110(r1)
    psq_st f31, 0x118(r1), 0, 0
    stfd f30, 0x100(r1)
    psq_st f30, 0x108(r1), 0, 0
    stw r31, 0xfc(r1)
    stw r30, 0xf8(r1)
    mr r30, r4
    stw r29, 0xf4(r1)
    mr r29, r3
    bl fn_802826A0
    cmpwi r3, 0x0
    bne lbl_fn_80281344_00001484
    li r0, 0x0
    stw r0, 0x14d8(r29)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r29)
    li r0, 0x3
    mr r3, r29
    li r4, 0x6
    stw r0, 0x58c(r29)
    bl fn_8016E970
    li r0, 0x4
    stw r0, 0x560(r29)
    addi r31, r1, 0x5c
    addi r3, r1, 0x74
    psq_l f1, 0x528(r30), 0, 0
    addi r5, r1, 0x50
    psq_st f1, 0x0(r3), 0, 0
    mr r3, r31
    lfs f2, 0x530(r30)
    mr r4, r31
    lfs f0, 0x530(r29)
    lfs f5, 0x78(r1)
    fsubs f6, f2, f0
    lfs f4, 0x52c(r29)
    lfs f3, 0x74(r1)
    lfs f0, 0x528(r29)
    fsubs f4, f5, f4
    stfs f2, 0x7c(r1)
    fsubs f0, f3, f0
    fmr f2, f6
    stfs f4, 0x54(r1)
    stfs f0, 0x50(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f6, 0x58(r1)
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x64(r1)
    bl fn_805F98D0
    lfs f2, 0x64(r1)
    addi r30, r1, 0x68
    psq_l f1, 0x0(r31), 0, 0
    fabs f3, f2
    lfs f0, lbl_80883980
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0x70(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_80281344_000012E0
    lfs f3, 0x68(r1)
    lfs f0, lbl_80883948
    fcmpo cr0, f3, f0
    ble lbl_fn_80281344_000012D4
    lfs f0, lbl_808839A0
    b lbl_fn_80281344_000012D8
lbl_fn_80281344_000012D4:
    lfs f0, lbl_808839A4
lbl_fn_80281344_000012D8:
    stfs f0, 0x48(r1)
    b lbl_fn_80281344_000012F4
lbl_fn_80281344_000012E0:
    frsp f2, f2
    lfs f1, 0x68(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_80281344_000012F4:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x80
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883948
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
    lfs f0, lbl_8088394C
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x70(r1)
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
    lfs f0, lbl_80883980
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80281344_00001410
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80883948
    fcmpo cr0, f3, f0
    ble lbl_fn_80281344_00001400
    lfs f0, lbl_808839A0
    b lbl_fn_80281344_00001404
lbl_fn_80281344_00001400:
    lfs f0, lbl_808839A4
lbl_fn_80281344_00001404:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_80281344_00001424
lbl_fn_80281344_00001410:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_80281344_00001424:
    lfs f3, lbl_80883948
    addi r3, r1, 0x44
    psq_l f1, 0x0(r3), 0, 0
    li r0, 0x1
    fmr f2, f3
    lfs f0, lbl_8088394C
    psq_st f1, 0x0(r30), 0, 0
    addi r3, r29, 0xb0
    li r4, 0x0
    li r5, 0x145
    stfs f2, 0x70(r1)
    frsp f2, f2
    li r6, 0x0
    li r7, 0x0
    psq_st f1, 0x534(r29), 0, 0
    fmr f1, f3
    li r8, 0x1
    stfs f2, 0x53c(r29)
    lfs f2, lbl_80883988
    stfs f3, 0x4c(r1)
    stw r0, 0x3fc(r29)
    stfs f0, 0x2fc(r29)
    stfs f0, 0x2e8(r29)
    bl fn_80097C08
lbl_fn_80281344_00001484:
    lwz r0, 0x124(r1)
    psq_l f31, 0x118(r1), 0, 0
    lfd f31, 0x110(r1)
    psq_l f30, 0x108(r1), 0, 0
    lfd f30, 0x100(r1)
    lwz r31, 0xfc(r1)
    lwz r30, 0xf8(r1)
    lwz r29, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_80281634(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    li r0, 0x0
    stfd f31, 0x110(r1)
    psq_st f31, 0x118(r1), 0, 0
    stfd f30, 0x100(r1)
    psq_st f30, 0x108(r1), 0, 0
    stw r31, 0xfc(r1)
    stw r30, 0xf8(r1)
    mr r30, r5
    stw r29, 0xf4(r1)
    mr r29, r4
    stw r28, 0xf0(r1)
    mr r28, r3
    stw r0, 0x14d8(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r28)
    li r0, 0x4
    mr r3, r28
    li r4, 0x3
    stw r0, 0x58c(r28)
    bl fn_8016E970
    li r0, -0x1
    stw r30, 0x1528(r28)
    addi r31, r1, 0x5c
    addi r5, r1, 0x74
    stw r0, 0x1520(r28)
    addi r6, r1, 0x50
    lfs f0, 0x530(r28)
    mr r3, r31
    lfs f2, 0x530(r29)
    mr r4, r31
    psq_l f1, 0x528(r29), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    fsubs f6, f2, f0
    lfs f4, 0x52c(r28)
    lfs f5, 0x78(r1)
    lfs f3, 0x74(r1)
    lfs f0, 0x528(r28)
    fsubs f4, f5, f4
    stfs f2, 0x7c(r1)
    fmr f2, f6
    fsubs f0, f3, f0
    stfs f4, 0x54(r1)
    stfs f0, 0x50(r1)
    psq_l f1, 0x0(r6), 0, 0
    stfs f6, 0x58(r1)
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x64(r1)
    bl fn_805F98D0
    lfs f2, 0x64(r1)
    addi r30, r1, 0x68
    psq_l f1, 0x0(r31), 0, 0
    fabs f3, f2
    lfs f0, lbl_80883980
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0x70(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_80281634_000015CC
    lfs f3, 0x68(r1)
    lfs f0, lbl_80883948
    fcmpo cr0, f3, f0
    ble lbl_fn_80281634_000015C0
    lfs f0, lbl_808839A0
    b lbl_fn_80281634_000015C4
lbl_fn_80281634_000015C0:
    lfs f0, lbl_808839A4
lbl_fn_80281634_000015C4:
    stfs f0, 0x48(r1)
    b lbl_fn_80281634_000015E0
lbl_fn_80281634_000015CC:
    frsp f2, f2
    lfs f1, 0x68(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_80281634_000015E0:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x80
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883948
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
    lfs f0, lbl_8088394C
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x70(r1)
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
    lfs f0, lbl_80883980
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80281634_000016FC
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80883948
    fcmpo cr0, f3, f0
    ble lbl_fn_80281634_000016EC
    lfs f0, lbl_808839A0
    b lbl_fn_80281634_000016F0
lbl_fn_80281634_000016EC:
    lfs f0, lbl_808839A4
lbl_fn_80281634_000016F0:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_80281634_00001710
lbl_fn_80281634_000016FC:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_80281634_00001710:
    lfs f3, lbl_80883948
    addi r3, r1, 0x44
    psq_l f1, 0x0(r3), 0, 0
    li r0, 0x1
    fmr f2, f3
    lfs f0, lbl_8088394C
    psq_st f1, 0x0(r30), 0, 0
    addi r3, r28, 0xb0
    li r4, 0x0
    li r5, 0x14b
    stfs f2, 0x70(r1)
    frsp f2, f2
    li r6, 0x0
    li r7, 0x0
    psq_st f1, 0x534(r28), 0, 0
    fmr f1, f3
    li r8, 0x1
    stfs f2, 0x53c(r28)
    lfs f2, lbl_80883988
    stfs f3, 0x4c(r1)
    stw r0, 0x3fc(r28)
    stfs f0, 0x2fc(r28)
    stfs f0, 0x2e8(r28)
    bl fn_80097C08
    lwz r0, 0x124(r1)
    psq_l f31, 0x118(r1), 0, 0
    lfd f31, 0x110(r1)
    psq_l f30, 0x108(r1), 0, 0
    lfd f30, 0x100(r1)
    lwz r31, 0xfc(r1)
    lwz r30, 0xf8(r1)
    lwz r29, 0xf4(r1)
    lwz r28, 0xf0(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_80281924(void)
{
    nofralloc
    stwu r1, -0x200(r1)
    mflr r0
    li r5, 0x5
    stw r0, 0x204(r1)
    stfd f31, 0x1f0(r1)
    psq_st f31, 0x1f8(r1), 0, 0
    stfd f30, 0x1e0(r1)
    psq_st f30, 0x1e8(r1), 0, 0
    stw r31, 0x1dc(r1)
    mr r31, r3
    stw r30, 0x1d8(r1)
    stw r29, 0x1d4(r1)
    bl fn_802826A0
    cmpwi r3, 0x0
    bne lbl_fn_80281924_00001D28
    li r0, 0x0
    stw r0, 0x14d8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0x5
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lwz r0, 0x14e4(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80281924_000019DC
    lfs f2, lbl_80883970
    addi r3, r1, 0xbc
    lfs f3, lbl_80883948
    addi r30, r1, 0xc8
    frsp f4, f2
    stfs f3, 0xbc(r1)
    lfs f0, lbl_80883980
    stfs f3, 0xc0(r1)
    fabs f5, f4
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0xc4(r1)
    frsp f5, f5
    psq_st f1, 0x0(r30), 0, 0
    fcmpo cr0, f5, f0
    stfs f2, 0xd0(r1)
    bge lbl_fn_80281924_00001870
    lfs f0, 0xc8(r1)
    fcmpo cr0, f0, f3
    ble lbl_fn_80281924_00001864
    lfs f0, lbl_808839A0
    b lbl_fn_80281924_00001868
lbl_fn_80281924_00001864:
    lfs f0, lbl_808839A4
lbl_fn_80281924_00001868:
    stfs f0, 0x90(r1)
    b lbl_fn_80281924_00001884
lbl_fn_80281924_00001870:
    fmr f2, f4
    lfs f1, 0xc8(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x90(r1)
lbl_fn_80281924_00001884:
    lfs f0, 0x90(r1)
    addi r3, r1, 0x150
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883948
    addi r4, r1, 0x80
    lfs f30, 0x158(r1)
    mr r5, r4
    lfs f31, 0x154(r1)
    addi r3, r1, 0x180
    lfs f13, 0x150(r1)
    lfs f12, 0x168(r1)
    lfs f11, 0x164(r1)
    lfs f10, 0x160(r1)
    lfs f9, 0x178(r1)
    lfs f8, 0x174(r1)
    lfs f7, 0x170(r1)
    lfs f6, 0x17c(r1)
    lfs f5, 0x16c(r1)
    lfs f4, 0x15c(r1)
    lfs f0, lbl_8088394C
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0xd0(r1)
    stfs f3, 0x1b0(r1)
    stfs f3, 0x1b4(r1)
    stfs f3, 0x1b8(r1)
    stfs f0, 0x1bc(r1)
    stfs f13, 0x50(r1)
    stfs f31, 0x54(r1)
    stfs f30, 0x58(r1)
    stfs f13, 0x180(r1)
    stfs f31, 0x184(r1)
    stfs f30, 0x188(r1)
    stfs f10, 0x5c(r1)
    stfs f11, 0x60(r1)
    stfs f12, 0x64(r1)
    stfs f10, 0x190(r1)
    stfs f11, 0x194(r1)
    stfs f12, 0x198(r1)
    stfs f7, 0x68(r1)
    stfs f8, 0x6c(r1)
    stfs f9, 0x70(r1)
    stfs f7, 0x1a0(r1)
    stfs f8, 0x1a4(r1)
    stfs f9, 0x1a8(r1)
    stfs f4, 0x74(r1)
    stfs f5, 0x78(r1)
    stfs f6, 0x7c(r1)
    stfs f4, 0x18c(r1)
    stfs f5, 0x19c(r1)
    stfs f6, 0x1ac(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x88(r1)
    bl fn_805F9750
    lfs f2, 0x88(r1)
    lfs f0, lbl_80883980
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80281924_000019A0
    lfs f3, 0x84(r1)
    lfs f0, lbl_80883948
    fcmpo cr0, f3, f0
    ble lbl_fn_80281924_00001990
    lfs f0, lbl_808839A0
    b lbl_fn_80281924_00001994
lbl_fn_80281924_00001990:
    lfs f0, lbl_808839A4
lbl_fn_80281924_00001994:
    fneg f0, f0
    stfs f0, 0x8c(r1)
    b lbl_fn_80281924_000019B4
lbl_fn_80281924_000019A0:
    lfs f1, 0x84(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x8c(r1)
lbl_fn_80281924_000019B4:
    lfs f2, lbl_80883948
    addi r3, r1, 0x8c
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x94(r1)
    stfs f2, 0xd0(r1)
    frsp f2, f2
    psq_st f1, 0x0(r30), 0, 0
    psq_st f1, 0x534(r31), 0, 0
    stfs f2, 0x53c(r31)
    b lbl_fn_80281924_00001CE4
lbl_fn_80281924_000019DC:
    lwz r3, lbl_8087F8A0
    lwz r6, 0x48(r3)
    lwz r0, 0x12a4(r6)
    extrwi. r0, r0, 1, 3
    beq lbl_fn_80281924_00001A08
    lfs f2, 0x530(r6)
    addi r3, r1, 0xd4
    psq_l f1, 0x528(r6), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0xdc(r1)
    b lbl_fn_80281924_00001AE0
lbl_fn_80281924_00001A08:
    lis r5, lbl_807C7030@ha
    addi r4, r1, 0xd4
    addi r5, r5, lbl_807C7030@l
    lwz r3, lbl_8087F428
    psq_l f1, 0x0(r5), 0, 0
    li r30, 0x1
    lfs f2, 0x8(r5)
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x528(r6), 0, 0
    stfs f2, 0xdc(r1)
    lfs f2, 0x530(r6)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xdc(r1)
    bl fn_8036554C
    b lbl_fn_80281924_00001A8C
lbl_fn_80281924_00001A44:
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_80281924_00001A88
    lfs f3, 0xd4(r1)
    addi r30, r30, 0x1
    lfs f0, 0x528(r3)
    lfs f5, 0xd8(r1)
    fadds f6, f3, f0
    lfs f4, 0x52c(r3)
    lfs f3, 0xdc(r1)
    lfs f0, 0x530(r3)
    fadds f4, f5, f4
    stfs f6, 0xd4(r1)
    fadds f0, f3, f0
    stfs f4, 0xd8(r1)
    stfs f0, 0xdc(r1)
lbl_fn_80281924_00001A88:
    lwz r3, 0x14ac(r3)
lbl_fn_80281924_00001A8C:
    cmpwi r3, 0x0
    bne lbl_fn_80281924_00001A44
    xoris r3, r30, 0x8000
    lis r0, 0x4330
    lis r4, lbl_80744E80@ha
    stw r3, 0x1c4(r1)
    lfd f3, lbl_80744E80@l(r4)
    stw r0, 0x1c0(r1)
    lfs f5, lbl_8088394C
    lfd f0, 0x1c0(r1)
    lfs f4, 0xd4(r1)
    fsubs f6, f0, f3
    lfs f3, 0xd8(r1)
    lfs f0, 0xdc(r1)
    fdivs f5, f5, f6
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    fmuls f0, f0, f5
    stfs f4, 0xd4(r1)
    stfs f3, 0xd8(r1)
    stfs f0, 0xdc(r1)
lbl_fn_80281924_00001AE0:
    lfs f3, 0xdc(r1)
    addi r30, r1, 0xa4
    lfs f0, 0x530(r31)
    addi r5, r1, 0x98
    lfs f5, 0xd8(r1)
    mr r3, r30
    fsubs f2, f3, f0
    lfs f4, 0x52c(r31)
    lfs f0, 0x528(r31)
    mr r4, r30
    lfs f3, 0xd4(r1)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x9c(r1)
    stfs f0, 0x98(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0xa0(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0xac(r1)
    bl fn_805F98D0
    lfs f2, 0xac(r1)
    addi r29, r1, 0xb0
    psq_l f1, 0x0(r30), 0, 0
    fabs f3, f2
    lfs f0, lbl_80883980
    psq_st f1, 0x0(r29), 0, 0
    frsp f3, f3
    stfs f2, 0xb8(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_80281924_00001B7C
    lfs f3, 0xb0(r1)
    lfs f0, lbl_80883948
    fcmpo cr0, f3, f0
    ble lbl_fn_80281924_00001B70
    lfs f0, lbl_808839A0
    b lbl_fn_80281924_00001B74
lbl_fn_80281924_00001B70:
    lfs f0, lbl_808839A4
lbl_fn_80281924_00001B74:
    stfs f0, 0x48(r1)
    b lbl_fn_80281924_00001B90
lbl_fn_80281924_00001B7C:
    frsp f2, f2
    lfs f1, 0xb0(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_80281924_00001B90:
    lfs f0, 0x48(r1)
    addi r3, r1, 0xe0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883948
    addi r4, r1, 0x38
    lfs f31, 0xe8(r1)
    mr r5, r4
    lfs f30, 0xe4(r1)
    addi r3, r1, 0x110
    lfs f13, 0xe0(r1)
    lfs f12, 0xf8(r1)
    lfs f11, 0xf4(r1)
    lfs f10, 0xf0(r1)
    lfs f9, 0x108(r1)
    lfs f8, 0x104(r1)
    lfs f7, 0x100(r1)
    lfs f6, 0x10c(r1)
    lfs f5, 0xfc(r1)
    lfs f4, 0xec(r1)
    lfs f0, lbl_8088394C
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0xb8(r1)
    stfs f3, 0x140(r1)
    stfs f3, 0x144(r1)
    stfs f3, 0x148(r1)
    stfs f0, 0x14c(r1)
    stfs f13, 0x8(r1)
    stfs f30, 0xc(r1)
    stfs f31, 0x10(r1)
    stfs f13, 0x110(r1)
    stfs f30, 0x114(r1)
    stfs f31, 0x118(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0x120(r1)
    stfs f11, 0x124(r1)
    stfs f12, 0x128(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0x130(r1)
    stfs f8, 0x134(r1)
    stfs f9, 0x138(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0x11c(r1)
    stfs f5, 0x12c(r1)
    stfs f6, 0x13c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80883980
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80281924_00001CAC
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80883948
    fcmpo cr0, f3, f0
    ble lbl_fn_80281924_00001C9C
    lfs f0, lbl_808839A0
    b lbl_fn_80281924_00001CA0
lbl_fn_80281924_00001C9C:
    lfs f0, lbl_808839A4
lbl_fn_80281924_00001CA0:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_80281924_00001CC0
lbl_fn_80281924_00001CAC:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_80281924_00001CC0:
    lfs f2, lbl_80883948
    addi r3, r1, 0x44
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x4c(r1)
    stfs f2, 0xb8(r1)
    frsp f2, f2
    psq_st f1, 0x0(r29), 0, 0
    psq_st f1, 0x534(r31), 0, 0
    stfs f2, 0x53c(r31)
lbl_fn_80281924_00001CE4:
    lfs f0, lbl_8088394C
    li r4, 0x0
    li r0, 0x1
    stw r4, 0x1520(r31)
    lfs f1, lbl_80883948
    addi r3, r31, 0xb0
    stw r4, 0x1530(r31)
    li r4, 0x0
    lfs f2, lbl_80883988
    li r5, 0x142
    stw r0, 0x3fc(r31)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2fc(r31)
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
lbl_fn_80281924_00001D28:
    lwz r0, 0x204(r1)
    psq_l f31, 0x1f8(r1), 0, 0
    lfd f31, 0x1f0(r1)
    psq_l f30, 0x1e8(r1), 0, 0
    lfd f30, 0x1e0(r1)
    lwz r31, 0x1dc(r1)
    lwz r30, 0x1d8(r1)
    lwz r29, 0x1d4(r1)
    mtlr r0
    addi r1, r1, 0x200
    blr
}
