#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_21(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_21(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void fn_8004ED34(void);
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800C31F4(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800CB5C8(void);
extern void fn_800DD3FC(void);
extern void fn_800EE360(void);
extern void fn_800F8548(void);
extern void fn_800FAB80(void);
extern void fn_80107850(void);
extern void fn_80108C10(void);
extern void fn_80109828(void);
extern void fn_8012DF7C(void);
extern void fn_80148B0C(void);
extern void fn_8015E7A0(void);
extern void fn_8016E970(void);
extern void fn_801765D8(void);
extern void fn_80219E6C(void);
extern void fn_80232B7C(void);
extern void fn_80239DAC(void);
extern void fn_8023A680(void);
extern void fn_8023A8B4(void);
extern void fn_802DCA34(void);
extern void fn_802DD1B4(void);
extern void fn_80370A78(void);
extern void fn_80370AE4(void);
extern void fn_803EEE10(void);
extern void fn_805F8E70(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_8068AEA4(void);

/* External data declarations */
extern u8 lbl_80747550[];
extern u8 lbl_80747654[];
extern u8 lbl_807C7030[];
extern u8 lbl_807C83F8[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087F048;
extern u32 lbl_8087F1E4;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F4A0;
extern u32 lbl_8087F8A0;
extern u32 lbl_808813D0;
extern u32 lbl_808845F0;
extern u32 lbl_80884600;
extern u32 lbl_80884604;
extern u32 lbl_80884608;
extern u32 lbl_80884634;
extern u32 lbl_80884638;
extern u32 lbl_8088463C;
extern u32 lbl_80884640;
extern u32 lbl_80884644;
extern u32 lbl_80884648;
extern u32 lbl_8088464C;
extern u32 lbl_80884650;
extern u32 lbl_80884654;
extern u32 lbl_80884658;
extern u32 lbl_8088465C;

/* Function declarations */
void fn_802DA718(void);
void fn_802DAA38(void);
void fn_802DB2D0(void);
void fn_802DB534(void);
void fn_802DB7C8(void);
void fn_802DBA3C(void);
void fn_802DBC68(void);
void fn_802DBE04(void);
void fn_802DBE70(void);
void fn_802DC014(void);

asm void fn_802DA718(void)
{
    nofralloc
    stwu r1, -0xe0(r1)
    mflr r0
    stw r0, 0xe4(r1)
    addi r11, r1, 0xd0
    stfd f31, 0xd0(r1)
    psq_st f31, 0xd8(r1), 0, 0
    bl _savegpr_27
    mr r31, r3
    lwz r3, 0x14f8(r3)
    bl fn_80219E6C
    lwz r0, 0x14c4(r31)
    mr r27, r3
    cmpwi r0, 0x78
    ble lbl_fn_802DA718_00000098
    li r28, 0x0
    stw r28, 0x14c8(r31)
    stw r28, 0x14c4(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r3, r31
    li r4, 0x3
    stw r28, 0x58c(r31)
    bl fn_8016E970
    addi r3, r31, 0x1588
    li r4, 0x0
    li r5, 0x0
    bl fn_800CB5C8
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x64
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x65
    li r6, 0x1
    bl fn_80239DAC
lbl_fn_802DA718_00000098:
    lwz r0, 0x14c4(r31)
    cmpwi r0, 0xf
    bne lbl_fn_802DA718_00000234
    lwz r3, 0x1630(r31)
    addi r5, r31, 0x14fc
    lfs f3, lbl_80884604
    addi r6, r1, 0x50
    lfs f2, 0x530(r3)
    li r0, 0x0
    psq_l f1, 0x528(r3), 0, 0
    addi r8, r3, 0x5b8
    psq_st f1, 0x0(r5), 0, 0
    addi r4, r1, 0x60
    lfs f0, lbl_80884634
    li r7, 0x0
    lfs f4, 0x1500(r31)
    li r9, 0x0
    stfs f2, 0x1504(r31)
    fadds f3, f4, f3
    stfs f3, 0x1500(r31)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    lwz r3, lbl_8087EE98
    lfs f3, 0x54(r1)
    stfs f2, 0x58(r1)
    fsubs f0, f3, f0
    stw r0, 0x94(r1)
    stfs f0, 0x54(r1)
    stw r0, 0x98(r1)
    stw r0, 0x9c(r1)
    stw r0, 0xa0(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_802DA718_00000138
    addi r3, r1, 0x70
    lfs f2, 0x78(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r31, 0x14fc
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x1504(r31)
lbl_fn_802DA718_00000138:
    lfs f3, 0x14fc(r31)
    lis r3, lbl_807C83F8@ha
    lfs f4, lbl_80884638
    addi r3, r3, lbl_807C83F8@l
    lfs f0, 0x1504(r31)
    li r28, -0x1
    fadds f3, f3, f4
    lfs f5, 0x1500(r31)
    fadds f0, f0, f4
    lfs f31, lbl_80884600
    stfs f3, 0x14fc(r31)
    li r29, 0x1
    stfs f0, 0x1504(r31)
    frsp f7, f0
    frsp f3, f3
    lis r30, lbl_807C7030@ha
    lfs f6, 0x8(r3)
    li r4, 0xa
    lfs f4, 0x4(r3)
    lfs f0, 0x0(r3)
    fadds f6, f7, f6
    mr r3, r31
    fadds f4, f5, f4
    fadds f0, f3, f0
    stfs f6, 0x4c(r1)
    stfs f0, 0x44(r1)
    stfs f4, 0x48(r1)
    bl fn_80232B7C
    stfs f31, 0x28(r1)
    fmr f1, f31
    addi r4, r31, 0x1508
    addi r7, r1, 0x44
    stfs f31, 0x2c(r1)
    addi r8, r30, lbl_807C7030@l
    addi r9, r1, 0x28
    stfs f31, 0x30(r1)
    li r5, 0x0
    li r6, 0x0
    li r10, -0x1
    stfs f31, 0x34(r1)
    stw r28, 0x8(r1)
    stw r29, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    mr r3, r31
    li r4, 0x1f4
    bl fn_80232B7C
    stfs f31, 0x18(r1)
    fmr f1, f31
    addi r4, r31, 0x1570
    addi r7, r31, 0x14fc
    stfs f31, 0x1c(r1)
    addi r8, r30, lbl_807C7030@l
    addi r9, r1, 0x18
    stfs f31, 0x20(r1)
    li r5, 0x0
    li r6, 0x0
    li r10, -0x1
    stfs f31, 0x24(r1)
    stw r28, 0x8(r1)
    stw r29, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
lbl_fn_802DA718_00000234:
    lwz r0, 0x14c4(r31)
    cmpwi r0, 0x1e
    bne lbl_fn_802DA718_00000254
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x1f4
    li r6, 0x1
    bl fn_80239DAC
lbl_fn_802DA718_00000254:
    lwz r0, 0x14c4(r31)
    cmpwi r0, 0x41
    bne lbl_fn_802DA718_00000300
    lis r3, lbl_807C83F8@ha
    lfs f6, 0x1504(r31)
    addi r3, r3, lbl_807C83F8@l
    lfs f5, 0x1500(r31)
    lfs f0, 0x8(r3)
    li r0, -0x1
    lfs f4, 0x4(r3)
    mr r4, r31
    fadds f6, f6, f0
    lfs f3, 0x14fc(r31)
    lfs f0, 0x0(r3)
    fadds f4, f5, f4
    lfs f1, lbl_808845F0
    mr r5, r27
    fadds f0, f3, f0
    stfs f4, 0x3c(r1)
    lfs f2, lbl_80884600
    addi r7, r1, 0x38
    stfs f0, 0x38(r1)
    addi r8, r31, 0x534
    stfs f6, 0x40(r1)
    li r9, 0x0
    li r10, 0x1e
    stw r0, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F048
    lwz r6, 0x590(r31)
    bl fn_800FAB80
    lis r4, lbl_80747654@ha
    lfs f1, lbl_80884600
    addi r4, r4, lbl_80747654@l
    addi r3, r1, 0x10
    addi r4, r4, 0x2bf
    addi r5, r31, 0x14fc
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_802DA718_00000300:
    addi r11, r1, 0xd0
    psq_l f31, 0xd8(r1), 0, 0
    lfd f31, 0xd0(r1)
    bl _restgpr_27
    lwz r0, 0xe4(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}

asm void fn_802DAA38(void)
{
    nofralloc
    stwu r1, -0x670(r1)
    mflr r0
    stw r0, 0x674(r1)
    addi r11, r1, 0x610
    stfd f31, 0x660(r1)
    psq_st f31, 0x668(r1), 0, 0
    stfd f30, 0x650(r1)
    psq_st f30, 0x658(r1), 0, 0
    stfd f29, 0x640(r1)
    psq_st f29, 0x648(r1), 0, 0
    stfd f28, 0x630(r1)
    psq_st f28, 0x638(r1), 0, 0
    stfd f27, 0x620(r1)
    psq_st f27, 0x628(r1), 0, 0
    stfd f26, 0x610(r1)
    psq_st f26, 0x618(r1), 0, 0
    bl _savegpr_21
    lwz r0, 0x14c4(r3)
    mr r29, r3
    cmpwi r0, 0xa
    bne lbl_fn_802DAA38_00000584
    lis r4, lbl_80747654@ha
    addi r21, r3, 0xb0
    addi r4, r4, lbl_80747654@l
    li r5, 0x0
    mr r3, r21
    addi r4, r4, 0x2a0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802DAA38_000003A0
    li r3, 0x0
    b lbl_fn_802DAA38_000003AC
lbl_fn_802DAA38_000003A0:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r21)
    add r3, r3, r0
lbl_fn_802DAA38_000003AC:
    lfs f0, 0x1c(r3)
    addi r6, r1, 0x11c
    lfs f3, 0xc(r3)
    addi r5, r29, 0x1518
    lfs f2, 0x2c(r3)
    mr r3, r29
    stfs f3, 0x11c(r1)
    li r4, 0xc
    stfs f0, 0x120(r1)
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x124(r1)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x1520(r29)
    bl fn_80232B7C
    li r31, 0x0
    lis r25, lbl_80747654@ha
    lfs f27, lbl_808845F0
    mr r30, r31
    lfs f26, lbl_80884600
    addi r25, r25, lbl_80747654@l
    addi r24, r1, 0x110
    li r28, 0x0
    li r27, -0x1
    li r26, 0x1
    b lbl_fn_802DAA38_00000530
lbl_fn_802DAA38_00000410:
    lwz r3, 0x1554(r29)
    addi r4, r25, 0x2cc
    li r5, 0x0
    lwzx r3, r3, r28
    addi r21, r3, 0xb0
    mr r3, r21
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802DAA38_0000043C
    li r3, 0x0
    b lbl_fn_802DAA38_00000448
lbl_fn_802DAA38_0000043C:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r21)
    add r3, r3, r0
lbl_fn_802DAA38_00000448:
    lfs f0, 0x1c(r3)
    addi r4, r29, 0x1524
    lfs f3, 0xc(r3)
    li r5, -0x1
    lfs f2, 0x2c(r3)
    li r6, 0x6
    lwz r0, 0x1554(r29)
    li r8, 0x0
    stfs f3, 0x110(r1)
    li r9, 0x0
    add r3, r0, r28
    li r10, 0x0
    stfs f0, 0x114(r1)
    psq_l f1, 0x0(r24), 0, 0
    psq_st f1, 0x10(r3), 0, 0
    stfs f2, 0x18(r3)
    lwz r0, 0x1554(r29)
    stfs f2, 0x118(r1)
    add r3, r0, r28
    lfs f2, 0x18(r3)
    psq_l f1, 0x10(r3), 0, 0
    psq_st f1, 0x4(r3), 0, 0
    lfs f1, lbl_80884600
    stfs f2, 0xc(r3)
    stw r30, 0x8(r1)
    stw r27, 0xc(r1)
    stw r26, 0x10(r1)
    lwz r0, 0x1554(r29)
    lwz r3, lbl_8087F3C0
    add r7, r0, r28
    addi r7, r7, 0x4
    bl fn_8023A680
    lwz r3, 0x1554(r29)
    fmr f1, f26
    addi r4, r29, 0x1530
    addi r7, r1, 0x88
    lwzx r3, r3, r28
    addi r8, r1, 0x94
    addi r9, r1, 0xa0
    stfs f27, 0x94(r1)
    addi r5, r3, 0xb0
    li r6, 0x0
    li r10, -0x1
    stfs f27, 0x98(r1)
    stfs f27, 0x9c(r1)
    stfs f27, 0x88(r1)
    stfs f27, 0x8c(r1)
    stfs f27, 0x90(r1)
    stfs f26, 0xa0(r1)
    stfs f26, 0xa4(r1)
    stfs f26, 0xa8(r1)
    stfs f26, 0xac(r1)
    stw r27, 0x8(r1)
    stw r26, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    addi r31, r31, 0x1
    addi r28, r28, 0x1c
lbl_fn_802DAA38_00000530:
    lwz r0, 0x1558(r29)
    cmplw r31, r0
    blt lbl_fn_802DAA38_00000410
    addi r3, r1, 0x3d0
    li r4, 0x0
    li r5, 0x200
    bl memset
    lwz r3, lbl_8087F1E4
    lwz r4, 0x4b4(r3)
    cmpwi r4, 0x0
    beq lbl_fn_802DAA38_00000560
    b lbl_fn_802DAA38_00000564
lbl_fn_802DAA38_00000560:
    la r4, lbl_808813D0
lbl_fn_802DAA38_00000564:
    lwz r5, 0x60(r29)
    addi r3, r1, 0x3d0
    lwz r5, 0x4(r5)
    crclr 6
    bl fn_800DD3FC
    lwz r3, lbl_8087F048
    addi r4, r1, 0x3d0
    bl fn_80109828
lbl_fn_802DAA38_00000584:
    lwz r3, 0x14c4(r29)
    cmpwi r3, 0x14
    ble lbl_fn_802DAA38_00000688
    cmpwi r3, 0x5a
    bgt lbl_fn_802DAA38_00000688
    subi r3, r3, 0x14
    lis r0, 0x4330
    xoris r3, r3, 0x8000
    stw r3, 0x5d4(r1)
    lis r3, lbl_80747550@ha
    lfs f3, lbl_8088463C
    stw r0, 0x5d0(r1)
    addi r5, r1, 0x104
    lfd f5, lbl_80747550@l(r3)
    li r6, 0x0
    lfd f4, 0x5d0(r1)
    li r3, 0x0
    lfs f0, lbl_80884600
    fsubs f4, f4, f5
    fdivs f13, f4, f3
    fnmsubs f7, f13, f13, f0
    fmuls f5, f13, f13
    fsubs f4, f0, f13
    b lbl_fn_802DAA38_0000067C
lbl_fn_802DAA38_000005E4:
    lwz r0, 0x1554(r29)
    addi r6, r6, 0x1
    lfs f3, 0x151c(r29)
    add r4, r0, r3
    lfs f0, 0x1518(r29)
    fmuls f8, f3, f5
    lfs f6, 0x14(r4)
    lfs f3, 0x10(r4)
    fmuls f9, f0, f5
    fmuls f11, f6, f7
    lfs f6, 0x18(r4)
    fmuls f3, f3, f7
    lfs f0, 0x1520(r29)
    fmuls f10, f6, f7
    stfs f11, 0xf0(r1)
    fmuls f6, f0, f5
    fadds f12, f8, f11
    fadds f0, f9, f3
    stfs f3, 0xec(r1)
    fadds f2, f6, f10
    stfs f12, 0x108(r1)
    stfs f0, 0x104(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x4(r4), 0, 0
    stfs f2, 0xc(r4)
    lwz r0, 0x1554(r29)
    lfs f0, 0x151c(r29)
    add r4, r0, r3
    stfs f10, 0xf4(r1)
    lfs f3, 0x14(r4)
    addi r3, r3, 0x1c
    stfs f9, 0xf8(r1)
    fmuls f3, f4, f3
    stfs f8, 0xfc(r1)
    fmadds f0, f0, f13, f3
    stfs f6, 0x100(r1)
    stfs f2, 0x10c(r1)
    stfs f0, 0x8(r4)
lbl_fn_802DAA38_0000067C:
    lwz r0, 0x1558(r29)
    cmplw r6, r0
    blt lbl_fn_802DAA38_000005E4
lbl_fn_802DAA38_00000688:
    lwz r0, 0x14c4(r29)
    cmpwi r0, 0x64
    ble lbl_fn_802DAA38_00000B70
    lwz r3, lbl_8087F3C0
    mr r4, r29
    li r5, 0x66
    li r6, 0x0
    bl fn_80239DAC
    li r3, 0x0
    li r4, 0x0
    bl fn_80232B7C
    lfs f0, lbl_808845F0
    li r26, -0x1
    lfs f1, lbl_80884600
    li r27, 0x1
    stfs f0, 0x6c(r1)
    addi r4, r29, 0x1548
    lwz r3, lbl_8087F3C0
    addi r5, r29, 0xb0
    stfs f0, 0x70(r1)
    addi r7, r1, 0x60
    addi r8, r1, 0x6c
    addi r9, r1, 0x78
    stfs f0, 0x74(r1)
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x60(r1)
    stfs f0, 0x64(r1)
    stfs f0, 0x68(r1)
    stfs f1, 0x78(r1)
    stfs f1, 0x7c(r1)
    stfs f1, 0x80(r1)
    stfs f1, 0x84(r1)
    stw r26, 0x8(r1)
    stw r27, 0xc(r1)
    bl fn_8023A8B4
    lwz r0, 0x15c(r1)
    li r31, 0x0
    lfs f31, lbl_808845F0
    addi r24, r1, 0xbc
    clrlwi r0, r0, 4
    stw r31, 0x144(r1)
    lfs f28, lbl_80884608
    addi r25, r1, 0x48
    stw r31, 0x148(r1)
    addi r23, r1, 0x54
    lfs f29, lbl_80884640
    addi r21, r1, 0xc8
    stw r31, 0x14c(r1)
    addi r22, r1, 0x134
    lfs f30, lbl_80884600
    li r30, 0x0
    stw r31, 0x150(r1)
    li r28, 0x0
    lfs f26, lbl_8088464C
    stw r26, 0x154(r1)
    lfs f27, lbl_80884650
    stw r0, 0x15c(r1)
    stw r26, 0x158(r1)
    stw r27, 0x140(r1)
    b lbl_fn_802DAA38_00000A2C
lbl_fn_802DAA38_0000077C:
    lwz r3, 0x1554(r29)
    li r5, 0x0
    lfs f3, 0x1514(r29)
    li r6, 0x0
    lwzx r26, r3, r28
    lfs f0, 0x7d8(r26)
    addi r3, r26, 0x7d4
    fmuls f3, f3, f0
    fctiwz f0, f0
    fctiwz f3, f3
    stfd f0, 0x5d8(r1)
    stfd f3, 0x5d0(r1)
    lwz r4, 0x5dc(r1)
    lwz r7, 0x5d4(r1)
    addi r4, r4, 0x1
    stw r4, 0x144(r1)
    addi r0, r7, 0x1
    subf r31, r0, r31
    bl fn_8012DF7C
    lfs f4, 0x530(r26)
    mr r6, r29
    lfs f3, 0x52c(r26)
    mr r7, r26
    lfs f0, 0x528(r26)
    fadds f4, f4, f31
    fadds f3, f3, f28
    stfs f31, 0xd4(r1)
    fadds f0, f0, f31
    lwz r3, lbl_8087F048
    stfs f28, 0xd8(r1)
    addi r4, r1, 0x140
    stfs f31, 0xdc(r1)
    addi r5, r1, 0xe0
    li r8, 0x0
    li r9, 0x0
    stfs f0, 0xe0(r1)
    stfs f3, 0xe4(r1)
    stfs f4, 0xe8(r1)
    bl fn_80108C10
    lwz r3, lbl_8087F048
    addi r4, r26, 0xb0
    bl fn_80107850
    lfs f2, 0x53c(r26)
    psq_l f1, 0x534(r26), 0, 0
    fabs f0, f2
    psq_st f1, 0x0(r24), 0, 0
    stfs f2, 0xc4(r1)
    frsp f0, f0
    fcmpo cr0, f0, f29
    bge lbl_fn_802DAA38_00000864
    lfs f0, 0xbc(r1)
    fcmpo cr0, f0, f31
    ble lbl_fn_802DAA38_00000858
    lfs f0, lbl_80884644
    b lbl_fn_802DAA38_0000085C
lbl_fn_802DAA38_00000858:
    lfs f0, lbl_80884648
lbl_fn_802DAA38_0000085C:
    stfs f0, 0x58(r1)
    b lbl_fn_802DAA38_00000878
lbl_fn_802DAA38_00000864:
    frsp f2, f2
    lfs f1, 0xbc(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x58(r1)
lbl_fn_802DAA38_00000878:
    lfs f0, 0x58(r1)
    addi r3, r1, 0x160
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f13, 0x168(r1)
    mr r4, r25
    lfs f12, 0x164(r1)
    mr r5, r25
    lfs f11, 0x160(r1)
    addi r3, r1, 0x190
    lfs f10, 0x178(r1)
    lfs f9, 0x174(r1)
    lfs f8, 0x170(r1)
    lfs f7, 0x188(r1)
    lfs f6, 0x184(r1)
    lfs f5, 0x180(r1)
    lfs f4, 0x18c(r1)
    lfs f3, 0x17c(r1)
    lfs f0, 0x16c(r1)
    psq_l f1, 0x0(r24), 0, 0
    lfs f2, 0xc4(r1)
    stfs f31, 0x1c0(r1)
    stfs f31, 0x1c4(r1)
    stfs f31, 0x1c8(r1)
    stfs f30, 0x1cc(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f13, 0x20(r1)
    stfs f11, 0x190(r1)
    stfs f12, 0x194(r1)
    stfs f13, 0x198(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f10, 0x2c(r1)
    stfs f8, 0x1a0(r1)
    stfs f9, 0x1a4(r1)
    stfs f10, 0x1a8(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f7, 0x38(r1)
    stfs f5, 0x1b0(r1)
    stfs f6, 0x1b4(r1)
    stfs f7, 0x1b8(r1)
    stfs f0, 0x3c(r1)
    stfs f3, 0x40(r1)
    stfs f4, 0x44(r1)
    stfs f0, 0x19c(r1)
    stfs f3, 0x1ac(r1)
    stfs f4, 0x1bc(r1)
    psq_st f1, 0x0(r25), 0, 0
    stfs f2, 0x50(r1)
    bl fn_805F9750
    lfs f2, 0x50(r1)
    fabs f0, f2
    frsp f0, f0
    fcmpo cr0, f0, f29
    bge lbl_fn_802DAA38_00000984
    lfs f0, 0x4c(r1)
    fcmpo cr0, f0, f31
    ble lbl_fn_802DAA38_00000974
    lfs f0, lbl_80884644
    b lbl_fn_802DAA38_00000978
lbl_fn_802DAA38_00000974:
    lfs f0, lbl_80884648
lbl_fn_802DAA38_00000978:
    fneg f0, f0
    stfs f0, 0x54(r1)
    b lbl_fn_802DAA38_00000998
lbl_fn_802DAA38_00000984:
    lfs f1, 0x4c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x54(r1)
lbl_fn_802DAA38_00000998:
    psq_l f1, 0x0(r23), 0, 0
    fmr f2, f31
    psq_st f1, 0x0(r24), 0, 0
    mr r3, r22
    mr r4, r22
    lfs f3, 0xc0(r1)
    frsp f4, f2
    lfs f0, 0xbc(r1)
    fmuls f3, f3, f26
    stfs f2, 0xc4(r1)
    fmuls f0, f0, f26
    stfs f3, 0xcc(r1)
    fmuls f2, f4, f26
    stfs f0, 0xc8(r1)
    psq_l f1, 0x0(r21), 0, 0
    psq_st f1, 0x0(r22), 0, 0
    stfs f31, 0x5c(r1)
    stfs f2, 0xd0(r1)
    stfs f2, 0x13c(r1)
    stfs f31, 0x138(r1)
    bl fn_805F98D0
    lfs f4, 0x134(r1)
    mr r3, r26
    lfs f3, 0x138(r1)
    mr r4, r22
    lfs f0, 0x13c(r1)
    fmuls f4, f4, f27
    fmuls f3, f3, f27
    li r5, -0x1
    fmuls f0, f0, f27
    stfs f4, 0x134(r1)
    li r6, 0x0
    stfs f3, 0x138(r1)
    stfs f0, 0x13c(r1)
    bl fn_8015E7A0
    addi r30, r30, 0x1
    addi r28, r28, 0x1c
lbl_fn_802DAA38_00000A2C:
    lwz r0, 0x1558(r29)
    cmplw r30, r0
    blt lbl_fn_802DAA38_0000077C
    cmpwi r31, 0x0
    bge lbl_fn_802DAA38_00000B10
    stw r31, 0x144(r1)
    mr r3, r29
    li r4, 0x0
    bl fn_80148B0C
    lfs f2, 0xc(r3)
    addi r21, r1, 0x128
    psq_l f1, 0x4(r3), 0, 0
    mr r4, r31
    psq_st f1, 0x0(r21), 0, 0
    addi r3, r29, 0x7d4
    lfs f6, lbl_808845F0
    li r5, 0x0
    lfs f5, lbl_80884608
    li r6, 0x0
    lfs f4, 0x128(r1)
    fadds f0, f2, f6
    lfs f3, 0x12c(r1)
    fadds f4, f4, f6
    stfs f6, 0xb0(r1)
    fadds f3, f3, f5
    stfs f5, 0xb4(r1)
    stfs f6, 0xb8(r1)
    stfs f4, 0x128(r1)
    stfs f3, 0x12c(r1)
    stfs f0, 0x130(r1)
    bl fn_8012DF7C
    lwz r3, lbl_8087F048
    mr r5, r21
    mr r7, r29
    addi r4, r1, 0x140
    li r6, 0x0
    li r8, 0x0
    li r9, 0x0
    bl fn_80108C10
    addi r3, r1, 0x1d0
    li r4, 0x0
    li r5, 0x200
    bl memset
    lwz r4, lbl_8087F1E4
    addi r3, r1, 0x1d0
    lwz r4, 0x4bc(r4)
    cmpwi r4, 0x0
    beq lbl_fn_802DAA38_00000AF0
    b lbl_fn_802DAA38_00000AF4
lbl_fn_802DAA38_00000AF0:
    la r4, lbl_808813D0
lbl_fn_802DAA38_00000AF4:
    lwz r5, 0x60(r29)
    lwz r5, 0x4(r5)
    crclr 6
    bl fn_800DD3FC
    lwz r3, lbl_8087F048
    addi r4, r1, 0x1d0
    bl fn_80109828
lbl_fn_802DAA38_00000B10:
    li r28, 0x0
    stw r28, 0x14c8(r29)
    stw r28, 0x14c4(r29)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r29)
    mr r3, r29
    li r4, 0x3
    stw r28, 0x58c(r29)
    bl fn_8016E970
    addi r3, r29, 0x1588
    li r4, 0x0
    li r5, 0x0
    bl fn_800CB5C8
    lwz r3, lbl_8087F3C0
    mr r4, r29
    li r5, 0x64
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r29
    li r5, 0x65
    li r6, 0x1
    bl fn_80239DAC
lbl_fn_802DAA38_00000B70:
    addi r11, r1, 0x610
    psq_l f31, 0x668(r1), 0, 0
    lfd f31, 0x660(r1)
    psq_l f30, 0x658(r1), 0, 0
    lfd f30, 0x650(r1)
    psq_l f29, 0x648(r1), 0, 0
    lfd f29, 0x640(r1)
    psq_l f28, 0x638(r1), 0, 0
    lfd f28, 0x630(r1)
    psq_l f27, 0x628(r1), 0, 0
    lfd f27, 0x620(r1)
    psq_l f26, 0x618(r1), 0, 0
    lfd f26, 0x610(r1)
    bl _restgpr_21
    lwz r0, 0x674(r1)
    mtlr r0
    addi r1, r1, 0x670
    blr
}

asm void fn_802DB2D0(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    stfd f31, 0x90(r1)
    psq_st f31, 0x98(r1), 0, 0
    stfd f30, 0x80(r1)
    psq_st f30, 0x88(r1), 0, 0
    stw r31, 0x7c(r1)
    stw r30, 0x78(r1)
    stw r29, 0x74(r1)
    stw r28, 0x70(r1)
    mr r28, r3
    lwz r0, 0x14c4(r3)
    cmpwi r0, 0x3
    bne lbl_fn_802DB2D0_00000C58
    lfs f0, lbl_80884600
    lis r8, lbl_807C7030@ha
    lfs f3, lbl_808845F0
    li r3, -0x1
    lfs f2, lbl_80884654
    li r0, 0x1
    stfs f3, 0x48(r1)
    addi r4, r28, 0x14e0
    lfs f1, lbl_80884658
    addi r5, r28, 0xb0
    stfs f2, 0x4c(r1)
    addi r7, r1, 0x48
    addi r8, r8, lbl_807C7030@l
    addi r9, r1, 0x38
    stfs f3, 0x50(r1)
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x38(r1)
    stfs f0, 0x3c(r1)
    stfs f0, 0x40(r1)
    stfs f0, 0x44(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
lbl_fn_802DB2D0_00000C58:
    lwz r0, 0x14c4(r28)
    cmpwi r0, 0x32
    bne lbl_fn_802DB2D0_00000CF0
    lwz r3, lbl_8087F8A0
    li r30, -0x1
    lfs f30, lbl_808845F0
    li r31, 0x1
    lwz r29, 0x48(r3)
    lfs f31, lbl_80884600
    b lbl_fn_802DB2D0_00000CE8
lbl_fn_802DB2D0_00000C80:
    mr r3, r29
    li r4, 0x3e8
    bl fn_80232B7C
    stfs f30, 0x1c(r1)
    fmr f1, f31
    addi r4, r28, 0x14ec
    addi r5, r29, 0xb0
    stfs f30, 0x20(r1)
    addi r7, r1, 0x10
    addi r8, r1, 0x1c
    stfs f30, 0x24(r1)
    addi r9, r1, 0x28
    li r6, 0x0
    li r10, -0x1
    stfs f30, 0x10(r1)
    stfs f30, 0x14(r1)
    stfs f30, 0x18(r1)
    stfs f31, 0x28(r1)
    stfs f31, 0x2c(r1)
    stfs f31, 0x30(r1)
    stfs f31, 0x34(r1)
    stw r30, 0x8(r1)
    stw r31, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r29, 0x14ac(r29)
lbl_fn_802DB2D0_00000CE8:
    cmpwi r29, 0x0
    bne lbl_fn_802DB2D0_00000C80
lbl_fn_802DB2D0_00000CF0:
    lwz r0, 0x14c4(r28)
    cmpwi r0, 0x3c
    ble lbl_fn_802DB2D0_00000DEC
    lwz r4, 0x940(r28)
    lis r0, 0x4330
    stw r0, 0x58(r1)
    lis r3, lbl_80747550@ha
    xoris r0, r4, 0x8000
    lfd f3, lbl_80747550@l(r3)
    stw r0, 0x5c(r1)
    mr r3, r28
    lfs f2, 0x7d8(r28)
    lfd f0, 0x58(r1)
    lfs f1, lbl_80884600
    fsubs f3, f0, f3
    lfs f0, lbl_80884658
    fdivs f2, f2, f3
    fsubs f1, f1, f2
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x60(r1)
    lwz r4, 0x64(r1)
    bl fn_802DD1B4
    lwz r4, 0x14dc(r28)
    li r5, 0x1
    cmpwi r4, 0x2
    beq lbl_fn_802DB2D0_00000D70
    cmpwi r4, 0x0
    beq lbl_fn_802DB2D0_00000D78
    cmpwi r4, 0x3
    beq lbl_fn_802DB2D0_00000D80
    b lbl_fn_802DB2D0_00000D84
lbl_fn_802DB2D0_00000D70:
    li r5, 0x3
    b lbl_fn_802DB2D0_00000D84
lbl_fn_802DB2D0_00000D78:
    li r5, 0x3
    b lbl_fn_802DB2D0_00000D84
lbl_fn_802DB2D0_00000D80:
    li r5, 0x1
lbl_fn_802DB2D0_00000D84:
    mr r3, r28
    bl fn_802DCA34
    li r31, 0x0
    stw r31, 0x14c8(r28)
    stw r31, 0x14c4(r28)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r28)
    mr r3, r28
    li r4, 0x3
    stw r31, 0x58c(r28)
    bl fn_8016E970
    addi r3, r28, 0x1588
    li r4, 0x0
    li r5, 0x0
    bl fn_800CB5C8
    lwz r3, lbl_8087F3C0
    mr r4, r28
    li r5, 0x64
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r28
    li r5, 0x65
    li r6, 0x1
    bl fn_80239DAC
lbl_fn_802DB2D0_00000DEC:
    lwz r0, 0xa4(r1)
    psq_l f31, 0x98(r1), 0, 0
    lfd f31, 0x90(r1)
    psq_l f30, 0x88(r1), 0, 0
    lfd f30, 0x80(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    lwz r29, 0x74(r1)
    lwz r28, 0x70(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_802DB534(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    addi r11, r1, 0x70
    stfd f31, 0x70(r1)
    psq_st f31, 0x78(r1), 0, 0
    bl _savegpr_26
    lfs f31, 0x2e4(r3)
    mr r31, r3
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_802DB534_00000EDC
    lwz r0, 0x14c4(r31)
    cmpwi r0, 0xb4
    ble lbl_fn_802DB534_00000EDC
    li r28, 0x0
    stw r28, 0x14c8(r31)
    stw r28, 0x14c4(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r3, r31
    li r4, 0x3
    stw r28, 0x58c(r31)
    bl fn_8016E970
    addi r3, r31, 0x1588
    li r4, 0x0
    li r5, 0x0
    bl fn_800CB5C8
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x64
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x65
    li r6, 0x1
    bl fn_80239DAC
    li r0, 0x2d
    stw r0, 0x1658(r31)
    li r4, 0xc9
    li r5, 0x1
    lwz r3, lbl_8087F430
    bl fn_80370AE4
lbl_fn_802DB534_00000EDC:
    lwz r0, 0x14c4(r31)
    cmpwi r0, 0x14
    bne lbl_fn_802DB534_00000FAC
    lwz r5, lbl_8087F430
    li r0, 0x78
    lfs f0, lbl_80884600
    li r28, 0x2
    lwz r3, 0x96c(r5)
    li r30, 0x0
    lfs f31, lbl_808845F0
    li r29, 0x12c
    srwi r4, r3, 31
    clrlwi r3, r3, 31
    xor r3, r3, r4
    subf r3, r4, r3
    stw r3, 0x96c(r5)
    stw r0, 0x970(r5)
    stfs f0, 0x974(r5)
    stfs f0, 0x978(r5)
    lwz r3, lbl_8087F4A0
    lwz r26, 0x48(r3)
    b lbl_fn_802DB534_00000F80
lbl_fn_802DB534_00000F34:
    lwz r0, 0x48(r26)
    cmpwi r0, 0x444
    bne lbl_fn_802DB534_00000F7C
    stw r28, 0x30(r1)
    mr r3, r26
    addi r4, r1, 0x30
    stw r30, 0x34(r1)
    stw r30, 0x38(r1)
    stw r30, 0x3c(r1)
    stw r30, 0x40(r1)
    stfs f31, 0x44(r1)
    stfs f31, 0x48(r1)
    stfs f31, 0x4c(r1)
    lwz r12, 0x0(r26)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    stw r29, 0x15d8(r31)
lbl_fn_802DB534_00000F7C:
    lwz r26, 0x5c(r26)
lbl_fn_802DB534_00000F80:
    cmpwi r26, 0x0
    bne lbl_fn_802DB534_00000F34
    lwz r3, lbl_8087F430
    li r4, 0xcc
    bl fn_80370A78
    cmpwi r3, 0x0
    bne lbl_fn_802DB534_00000FAC
    lwz r3, lbl_8087F430
    li r4, 0xcc
    li r5, 0x1
    bl fn_80370AE4
lbl_fn_802DB534_00000FAC:
    lwz r3, 0x14c4(r31)
    subi r0, r3, 0x64
    cmplwi r0, 0xe
    bgt lbl_fn_802DB534_00001090
    lwz r3, 0x1584(r31)
    bl fn_80219E6C
    li r0, -0x1
    stw r0, 0x8(r1)
    mr r5, r3
    lfs f1, lbl_808845F0
    stw r0, 0xc(r1)
    mr r4, r31
    lfs f2, lbl_80884600
    addi r7, r31, 0x15dc
    lwz r3, lbl_8087F048
    addi r8, r31, 0x534
    lwz r6, 0x590(r31)
    li r9, 0x0
    li r10, 0x1e
    bl fn_800FAB80
    lwz r28, 0x1638(r31)
    li r27, 0x0
    lfs f31, lbl_808845F0
    li r26, 0x0
    li r29, 0x2
    li r30, 0x0
    b lbl_fn_802DB534_00001084
lbl_fn_802DB534_00001018:
    lwz r5, 0x1648(r31)
    li r4, 0x6dd6
    lwz r3, lbl_8087F4A0
    lwzx r5, r5, r26
    bl fn_803EEE10
    cmpwi r3, 0x0
    beq lbl_fn_802DB534_0000107C
    cmplw r27, r28
    lwz r0, 0x54(r3)
    beq lbl_fn_802DB534_0000107C
    cmpwi r0, 0x1
    bne lbl_fn_802DB534_0000107C
    stw r29, 0x10(r1)
    addi r4, r1, 0x10
    stw r30, 0x14(r1)
    stw r30, 0x18(r1)
    stw r30, 0x1c(r1)
    stw r30, 0x20(r1)
    stfs f31, 0x24(r1)
    stfs f31, 0x28(r1)
    stfs f31, 0x2c(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
lbl_fn_802DB534_0000107C:
    addi r26, r26, 0x4
    addi r27, r27, 0x1
lbl_fn_802DB534_00001084:
    lwz r0, 0x164c(r31)
    cmplw r27, r0
    blt lbl_fn_802DB534_00001018
lbl_fn_802DB534_00001090:
    addi r11, r1, 0x70
    psq_l f31, 0x78(r1), 0, 0
    lfd f31, 0x70(r1)
    bl _restgpr_26
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_802DB7C8(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stfd f31, 0x70(r1)
    psq_st f31, 0x78(r1), 0, 0
    stw r31, 0x6c(r1)
    stw r30, 0x68(r1)
    mr r30, r3
    lwz r0, 0x2dc(r3)
    cmpwi r0, 0x145
    bne lbl_fn_802DB7C8_00001130
    lfs f31, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_802DB7C8_00001130
    lfs f0, lbl_80884600
    li r0, 0x1
    stw r0, 0x3fc(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_808845F0
    li r4, 0x0
    stfs f0, 0x2fc(r30)
    li r5, 0x146
    lfs f2, lbl_80884604
    li r6, 0x1
    stfs f0, 0x2e8(r30)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
lbl_fn_802DB7C8_00001130:
    lwz r0, 0x14c4(r30)
    cmpwi r0, 0x2d
    bne lbl_fn_802DB7C8_000011F0
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x64
    li r6, 0x0
    bl fn_80239DAC
    mr r3, r30
    li r4, 0x64
    bl fn_80232B7C
    lfs f0, lbl_808845F0
    li r3, -0x1
    lfs f1, lbl_80884600
    li r0, 0x1
    stfs f0, 0x44(r1)
    addi r4, r30, 0x160c
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
    lis r4, lbl_80747654@ha
    lfs f1, lbl_80884600
    addi r4, r4, lbl_80747654@l
    addi r3, r1, 0x14
    addi r4, r4, 0x2b2
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x14
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_802DB7C8_00001304
lbl_fn_802DB7C8_000011F0:
    cmpwi r0, 0x5a
    blt lbl_fn_802DB7C8_00001304
    li r0, 0x0
    stw r0, 0x14c8(r30)
    stw r0, 0x14c4(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    li r0, 0xe
    mr r3, r30
    li r4, 0x3
    stw r0, 0x58c(r30)
    bl fn_8016E970
    lfs f0, lbl_80884600
    li r31, 0x1
    stw r31, 0x3fc(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_808845F0
    li r4, 0x0
    stfs f0, 0x2fc(r30)
    li r5, 0x147
    lfs f2, lbl_80884604
    li r6, 0x0
    stfs f0, 0x2e8(r30)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f1, lbl_808845F0
    mr r4, r30
    lfs f0, lbl_80884600
    li r5, 0x64
    stfs f1, 0x18(r1)
    li r6, 0x1
    lwz r3, lbl_8087F3C0
    stfs f0, 0x1c(r1)
    stfs f1, 0x20(r1)
    bl fn_80239DAC
    mr r3, r30
    li r4, 0x65
    bl fn_80232B7C
    lfs f1, lbl_80884600
    lis r8, lbl_807C7030@ha
    stfs f1, 0x28(r1)
    li r0, -0x1
    addi r4, r30, 0x1618
    addi r5, r30, 0xb0
    stfs f1, 0x2c(r1)
    addi r7, r1, 0x18
    addi r8, r8, lbl_807C7030@l
    addi r9, r1, 0x28
    stfs f1, 0x30(r1)
    li r6, 0x0
    li r10, -0x1
    stfs f1, 0x34(r1)
    stw r0, 0x8(r1)
    stw r31, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lis r4, lbl_80747654@ha
    lfs f1, lbl_80884600
    addi r4, r4, lbl_80747654@l
    addi r3, r1, 0x10
    addi r4, r4, 0x2d1
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_802DB7C8_00001304:
    lwz r0, 0x84(r1)
    psq_l f31, 0x78(r1), 0, 0
    lfd f31, 0x70(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_802DBA3C(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x64(r1)
    stfd f31, 0x50(r1)
    psq_st f31, 0x58(r1), 0, 0
    stw r31, 0x4c(r1)
    stw r30, 0x48(r1)
    mr r30, r3
    lfs f31, 0x2e4(r3)
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_802DBA3C_000013D4
    lwz r0, 0x14c4(r30)
    cmpwi r0, 0xc8
    ble lbl_fn_802DBA3C_000013D4
    li r31, 0x0
    stw r31, 0x14c8(r30)
    stw r31, 0x14c4(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    mr r3, r30
    li r4, 0x3
    stw r31, 0x58c(r30)
    bl fn_8016E970
    addi r3, r30, 0x1588
    li r4, 0x0
    li r5, 0x0
    bl fn_800CB5C8
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x64
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x65
    li r6, 0x1
    bl fn_80239DAC
    li r0, 0x2d
    stw r0, 0x1658(r30)
lbl_fn_802DBA3C_000013D4:
    lwz r3, 0x14c4(r30)
    subi r0, r3, 0x14
    cmplwi r0, 0x9f
    bgt lbl_fn_802DBA3C_00001514
    cmpwi r3, 0x17
    bne lbl_fn_802DBA3C_00001480
    lfs f4, lbl_808845F0
    li r3, 0x0
    lfs f3, lbl_8088463C
    li r4, 0x0
    lfs f2, 0x530(r30)
    lfs f1, 0x52c(r30)
    lfs f0, 0x528(r30)
    fadds f2, f2, f4
    fadds f1, f1, f3
    stfs f4, 0x20(r1)
    fadds f0, f0, f4
    stfs f3, 0x24(r1)
    stfs f4, 0x28(r1)
    stfs f0, 0x38(r1)
    stfs f1, 0x3c(r1)
    stfs f2, 0x40(r1)
    bl fn_80232B7C
    lfs f0, lbl_80884600
    lis r8, lbl_807C7030@ha
    stfs f0, 0x10(r1)
    li r3, -0x1
    li r0, 0x1
    lfs f1, lbl_8088465C
    stfs f0, 0x14(r1)
    addi r4, r30, 0x1624
    addi r7, r1, 0x38
    addi r8, r8, lbl_807C7030@l
    stfs f0, 0x18(r1)
    addi r9, r1, 0x10
    li r5, 0x0
    li r6, 0x0
    stfs f0, 0x1c(r1)
    li r10, -0x1
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
lbl_fn_802DBA3C_00001480:
    lwz r3, 0x1608(r30)
    bl fn_80219E6C
    lis r4, lbl_80747654@ha
    mr r31, r3
    addi r4, r4, lbl_80747654@l
    addi r3, r30, 0xb0
    addi r4, r4, 0x2a0
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802DBA3C_000014B4
    li r3, 0x0
    b lbl_fn_802DBA3C_000014C0
lbl_fn_802DBA3C_000014B4:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r3, r3, r0
lbl_fn_802DBA3C_000014C0:
    lfs f0, 0x2c(r3)
    li r0, -0x1
    lfs f2, 0x1c(r3)
    mr r4, r30
    lfs f1, 0xc(r3)
    mr r5, r31
    stfs f1, 0x2c(r1)
    addi r7, r1, 0x2c
    lfs f1, lbl_808845F0
    addi r8, r30, 0x534
    stfs f2, 0x30(r1)
    li r9, 0x0
    lfs f2, lbl_80884600
    li r10, 0x1e
    stfs f0, 0x34(r1)
    stw r0, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F048
    lwz r6, 0x590(r30)
    bl fn_800FAB80
    b lbl_fn_802DBA3C_00001530
lbl_fn_802DBA3C_00001514:
    cmpwi r3, 0xb4
    blt lbl_fn_802DBA3C_00001530
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x65
    li r6, 0x1
    bl fn_80239DAC
lbl_fn_802DBA3C_00001530:
    lwz r0, 0x64(r1)
    psq_l f31, 0x58(r1), 0, 0
    lfd f31, 0x50(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_802DBC68(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    lwz r0, 0x14c4(r3)
    cmpwi r0, 0x32
    bne lbl_fn_802DBC68_000015BC
    lwz r3, lbl_8087F430
    li r4, 0x5c
    li r5, 0x1
    bl fn_80370AE4
    lis r4, lbl_80747654@ha
    lfs f1, lbl_80884600
    addi r4, r4, lbl_80747654@l
    addi r3, r1, 0x8
    addi r4, r4, 0x2de
    addi r5, r30, 0x614
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_802DBC68_000015BC:
    lwz r0, 0x2dc(r30)
    cmpwi r0, 0x14d
    bne lbl_fn_802DBC68_00001650
    lfs f31, 0x2e4(r30)
    addi r3, r30, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_802DBC68_000016CC
    li r31, 0x0
    li r0, 0x1
    stw r0, 0x1580(r30)
    stw r31, 0x14c8(r30)
    stw r31, 0x14c4(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    mr r3, r30
    li r4, 0x3
    stw r31, 0x58c(r30)
    bl fn_8016E970
    addi r3, r30, 0x1588
    li r4, 0x0
    li r5, 0x0
    bl fn_800CB5C8
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x64
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x65
    li r6, 0x1
    bl fn_80239DAC
    b lbl_fn_802DBC68_000016CC
lbl_fn_802DBC68_00001650:
    lwz r0, 0x14c4(r30)
    cmpwi r0, 0x2d
    ble lbl_fn_802DBC68_000016CC
    addi r3, r30, 0x1588
    li r4, 0x0
    li r5, 0x0
    bl fn_800CB5C8
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x64
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x65
    li r6, 0x1
    bl fn_80239DAC
    lfs f0, lbl_80884600
    li r0, 0x1
    stw r0, 0x3fc(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_808845F0
    li r4, 0x0
    stfs f0, 0x2fc(r30)
    li r5, 0x14d
    lfs f2, lbl_80884604
    li r6, 0x0
    stfs f0, 0x2e8(r30)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
lbl_fn_802DBC68_000016CC:
    lwz r0, 0x34(r1)
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_802DBE04(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lfs f0, lbl_808845F0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lfs f1, 0x2e4(r3)
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_802DBE04_00001744
    lwz r4, 0x12a4(r3)
    lwz r0, 0x5c0(r3)
    oris r4, r4, 0x200
    stw r4, 0x12a4(r3)
    clrrwi r0, r0, 1
    stw r0, 0x5c0(r3)
    bl fn_800EE360
    lwz r0, 0x12a4(r31)
    mr r3, r31
    ori r0, r0, 0x8000
    stw r0, 0x12a4(r31)
    bl fn_801765D8
lbl_fn_802DBE04_00001744:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802DBE70(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    li r31, 0x0
    stw r30, 0x48(r1)
    mr r30, r4
    stw r29, 0x44(r1)
    mr r29, r3
    stw r31, 0x14c8(r3)
    stw r31, 0x14c4(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r29)
    li r0, 0x6
    mr r3, r29
    li r4, 0x3
    stw r0, 0x58c(r29)
    bl fn_8016E970
    stw r30, 0x157c(r29)
    mr r3, r29
    lwz r12, 0x0(r29)
    lwz r12, 0x98(r12)
    mtctr r12
    bctrl
    lwz r3, 0x157c(r29)
    li r0, 0x1
    lfs f0, lbl_80884600
    cmpwi r3, 0x0
    stw r31, 0x1560(r29)
    stw r0, 0x3fc(r29)
    stfs f0, 0x2fc(r29)
    stfs f0, 0x2e8(r29)
    beq lbl_fn_802DBE70_000017EC
    cmpwi r3, 0x1
    beq lbl_fn_802DBE70_00001814
    b lbl_fn_802DBE70_00001838
lbl_fn_802DBE70_000017EC:
    lfs f1, lbl_808845F0
    addi r3, r29, 0xb0
    lfs f2, lbl_80884604
    li r4, 0x0
    li r5, 0x2b
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_802DBE70_00001838
lbl_fn_802DBE70_00001814:
    lfs f1, lbl_808845F0
    addi r3, r29, 0xb0
    lfs f2, lbl_80884604
    li r4, 0x0
    li r5, 0x2d
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
lbl_fn_802DBE70_00001838:
    lis r31, lbl_807C7030@ha
    lfs f6, lbl_808845F0
    addi r31, r31, lbl_807C7030@l
    lfs f5, lbl_8088463C
    lfs f4, 0x530(r29)
    addi r5, r29, 0x15c8
    lfs f3, 0x52c(r29)
    mr r3, r29
    lfs f0, 0x528(r29)
    fadds f4, f4, f6
    psq_l f1, 0x0(r31), 0, 0
    fadds f3, f3, f5
    lfs f2, 0x8(r31)
    fadds f0, f0, f6
    stfs f2, 0x15d0(r29)
    li r4, 0x14
    psq_st f1, 0x0(r5), 0, 0
    stfs f6, 0x20(r1)
    stfs f5, 0x24(r1)
    stfs f6, 0x28(r1)
    stfs f0, 0x2c(r1)
    stfs f3, 0x30(r1)
    stfs f4, 0x34(r1)
    bl fn_80232B7C
    lfs f1, lbl_80884600
    li r3, -0x1
    stfs f1, 0x10(r1)
    li r0, 0x1
    mr r8, r31
    addi r4, r29, 0x1564
    stfs f1, 0x14(r1)
    addi r7, r1, 0x2c
    addi r9, r1, 0x10
    li r5, 0x0
    stfs f1, 0x18(r1)
    li r6, 0x0
    li r10, -0x1
    stfs f1, 0x1c(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_802DC014(void)
{
    nofralloc
    stwu r1, -0x250(r1)
    mflr r0
    stw r0, 0x254(r1)
    li r0, 0x0
    stw r31, 0x24c(r1)
    stw r30, 0x248(r1)
    mr r30, r3
    stw r0, 0x14c8(r3)
    stw r0, 0x14c4(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    li r0, 0x7
    mr r3, r30
    li r4, 0x3
    stw r0, 0x58c(r30)
    bl fn_8016E970
    lfs f2, lbl_80884600
    li r31, 0x1
    lfs f0, lbl_8088464C
    addi r3, r30, 0xb0
    stfs f2, 0x2fc(r30)
    li r4, 0x0
    lfs f1, lbl_808845F0
    li r5, 0x2d
    stw r31, 0x3fc(r30)
    li r6, 0x0
    lfs f2, lbl_80884604
    li r7, 0x0
    stfs f0, 0x2e8(r30)
    li r8, 0x1
    bl fn_80097C08
    addi r3, r30, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    lis r4, lbl_80747654@ha
    stfs f1, 0x2e4(r30)
    addi r4, r4, lbl_80747654@l
    lfs f1, lbl_80884600
    addi r3, r1, 0x10
    addi r5, r30, 0x614
    addi r4, r4, 0x2eb
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    lfs f4, lbl_808845F0
    mr r3, r30
    lfs f3, lbl_8088463C
    li r4, 0x15
    lfs f2, 0x530(r30)
    lfs f1, 0x52c(r30)
    lfs f0, 0x528(r30)
    fadds f2, f2, f4
    fadds f1, f1, f3
    stfs f4, 0x28(r1)
    fadds f0, f0, f4
    stfs f3, 0x2c(r1)
    stfs f4, 0x30(r1)
    stfs f0, 0x34(r1)
    stfs f1, 0x38(r1)
    stfs f2, 0x3c(r1)
    bl fn_80232B7C
    lfs f1, lbl_80884600
    lis r8, lbl_807C7030@ha
    stfs f1, 0x18(r1)
    li r0, -0x1
    addi r4, r30, 0x1570
    addi r7, r1, 0x34
    stfs f1, 0x1c(r1)
    addi r8, r8, lbl_807C7030@l
    addi r9, r1, 0x18
    li r5, 0x0
    stfs f1, 0x20(r1)
    li r6, 0x0
    li r10, -0x1
    stfs f1, 0x24(r1)
    stw r0, 0x8(r1)
    stw r31, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    addi r3, r1, 0x40
    li r4, 0x0
    li r5, 0x200
    bl memset
    lwz r4, lbl_8087F1E4
    addi r3, r1, 0x40
    lwz r4, 0x4d4(r4)
    cmpwi r4, 0x0
    beq lbl_fn_802DC014_00001A70
    b lbl_fn_802DC014_00001A74
lbl_fn_802DC014_00001A70:
    la r4, lbl_808813D0
lbl_fn_802DC014_00001A74:
    lwz r5, 0x60(r30)
    lwz r5, 0x4(r5)
    crclr 6
    bl fn_800DD3FC
    lwz r3, lbl_8087F048
    addi r4, r1, 0x40
    bl fn_80109828
    lwz r0, 0x254(r1)
    lwz r31, 0x24c(r1)
    lwz r30, 0x248(r1)
    mtlr r0
    addi r1, r1, 0x250
    blr
}
