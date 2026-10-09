#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_22(void);
extern void _restgpr_27(void);
extern void _savegpr_22(void);
extern void _savegpr_27(void);
extern void fn_800A56A8(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800CB688(void);
extern void fn_800DC6B4(void);
extern void fn_8017A160(void);
extern void fn_801FECE0(void);
extern void fn_801FED24(void);
extern void fn_80210220(void);
extern void fn_80232B7C(void);
extern void fn_8023A680(void);
extern void fn_805F8E70(void);
extern void fn_805F9750(void);
extern void fn_805F9940(void);
extern void fn_80680CF8(void);
extern void fn_8068AEA4(void);

/* External data declarations */
extern u8 lbl_80735DD0[];
extern u8 lbl_80735EB0[];
extern u8 lbl_80736040[];
extern u8 lbl_807C7028[];

/* Small data declarations */
extern u32 lbl_8087EEE0;
extern u32 lbl_8087EF70;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F4E8;
extern u32 lbl_8087F610;
extern u32 lbl_80881478;
extern u32 lbl_80881484;
extern u32 lbl_8088148C;
extern u32 lbl_80881494;
extern u32 lbl_808814D0;
extern u32 lbl_808814D4;
extern u32 lbl_808814D8;
extern u32 lbl_808814DC;
extern u32 lbl_80881500;
extern u32 lbl_8088152C;
extern u32 lbl_80881548;
extern u32 lbl_8088156C;
extern u32 lbl_80881570;
extern u32 lbl_80881574;
extern u32 lbl_80881578;
extern u32 lbl_8088157C;
extern u32 lbl_80881580;
extern u32 lbl_80881584;
extern u32 lbl_80881588;
extern u32 lbl_8088158C;
extern u32 lbl_80881590;
extern u32 lbl_80881594;

/* Function declarations */
void fn_801018E4(void);
void fn_80101CDC(void);
void fn_801021B4(void);
void fn_8010220C(void);
void fn_801027A4(void);
void fn_80102824(void);
void fn_80102890(void);
void fn_801028E4(void);
void fn_80102A40(void);

asm void fn_801018E4(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    addi r11, r1, 0x100
    stfd f31, 0x110(r1)
    psq_st f31, 0x118(r1), 0, 0
    stfd f30, 0x100(r1)
    psq_st f30, 0x108(r1), 0, 0
    bl _savegpr_27
    lwz r0, 0x44(r4)
    mr r30, r3
    lwz r29, 0x0(r4)
    mr r31, r4
    cmpwi r0, 0x0
    lwz r27, 0x4(r4)
    li r5, 0x0
    bne lbl_fn_801018E4_0000004C
    li r5, 0x1
    b lbl_fn_801018E4_00000078
lbl_fn_801018E4_0000004C:
    cmpwi r0, 0x2
    bne lbl_fn_801018E4_00000078
    lwz r3, 0x8(r4)
    cmpwi r3, 0x0
    beq lbl_fn_801018E4_00000078
    lwz r0, 0xac(r3)
    rlwinm r3, r0, 0, 4, 4
    subis r0, r3, 0x800
    cmplwi r0, 0x0
    bne lbl_fn_801018E4_00000078
    li r5, 0x1
lbl_fn_801018E4_00000078:
    cmpwi r5, 0x0
    beq lbl_fn_801018E4_000003D0
    lfs f2, 0x30(r4)
    addi r28, r1, 0x60
    psq_l f1, 0x28(r4), 0, 0
    fabs f3, f2
    lfs f0, lbl_808814D4
    psq_st f1, 0x0(r28), 0, 0
    frsp f3, f3
    stfs f2, 0x68(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_801018E4_000000CC
    lfs f3, 0x60(r1)
    lfs f0, lbl_80881478
    fcmpo cr0, f3, f0
    ble lbl_fn_801018E4_000000C0
    lfs f0, lbl_808814D8
    b lbl_fn_801018E4_000000C4
lbl_fn_801018E4_000000C0:
    lfs f0, lbl_808814DC
lbl_fn_801018E4_000000C4:
    stfs f0, 0x58(r1)
    b lbl_fn_801018E4_000000E0
lbl_fn_801018E4_000000CC:
    frsp f2, f2
    lfs f1, 0x60(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x58(r1)
lbl_fn_801018E4_000000E0:
    lfs f0, 0x58(r1)
    addi r3, r1, 0x70
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80881478
    addi r4, r1, 0x48
    lfs f30, 0x78(r1)
    mr r5, r4
    lfs f31, 0x74(r1)
    addi r3, r1, 0xa0
    lfs f13, 0x70(r1)
    lfs f12, 0x88(r1)
    lfs f11, 0x84(r1)
    lfs f10, 0x80(r1)
    lfs f9, 0x98(r1)
    lfs f8, 0x94(r1)
    lfs f7, 0x90(r1)
    lfs f6, 0x9c(r1)
    lfs f5, 0x8c(r1)
    lfs f4, 0x7c(r1)
    lfs f0, lbl_80881494
    psq_l f1, 0x0(r28), 0, 0
    lfs f2, 0x68(r1)
    stfs f3, 0xd0(r1)
    stfs f3, 0xd4(r1)
    stfs f3, 0xd8(r1)
    stfs f0, 0xdc(r1)
    stfs f13, 0x18(r1)
    stfs f31, 0x1c(r1)
    stfs f30, 0x20(r1)
    stfs f13, 0xa0(r1)
    stfs f31, 0xa4(r1)
    stfs f30, 0xa8(r1)
    stfs f10, 0x24(r1)
    stfs f11, 0x28(r1)
    stfs f12, 0x2c(r1)
    stfs f10, 0xb0(r1)
    stfs f11, 0xb4(r1)
    stfs f12, 0xb8(r1)
    stfs f7, 0x30(r1)
    stfs f8, 0x34(r1)
    stfs f9, 0x38(r1)
    stfs f7, 0xc0(r1)
    stfs f8, 0xc4(r1)
    stfs f9, 0xc8(r1)
    stfs f4, 0x3c(r1)
    stfs f5, 0x40(r1)
    stfs f6, 0x44(r1)
    stfs f4, 0xac(r1)
    stfs f5, 0xbc(r1)
    stfs f6, 0xcc(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x50(r1)
    bl fn_805F9750
    lfs f2, 0x50(r1)
    lfs f0, lbl_808814D4
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801018E4_000001FC
    lfs f3, 0x4c(r1)
    lfs f0, lbl_80881478
    fcmpo cr0, f3, f0
    ble lbl_fn_801018E4_000001EC
    lfs f0, lbl_808814D8
    b lbl_fn_801018E4_000001F0
lbl_fn_801018E4_000001EC:
    lfs f0, lbl_808814DC
lbl_fn_801018E4_000001F0:
    fneg f0, f0
    stfs f0, 0x54(r1)
    b lbl_fn_801018E4_00000210
lbl_fn_801018E4_000001FC:
    lfs f1, 0x4c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x54(r1)
lbl_fn_801018E4_00000210:
    addi r3, r1, 0x54
    lfs f2, lbl_80881478
    psq_l f1, 0x0(r3), 0, 0
    cmpwi r27, 0x0
    stfs f2, 0x5c(r1)
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x68(r1)
    beq lbl_fn_801018E4_000002B8
    lwz r0, 0x7e0(r27)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_801018E4_000002B8
    cmpwi r29, 0x0
    beq lbl_fn_801018E4_00000258
    mr r3, r29
    bl fn_8017A160
    mr r28, r3
    b lbl_fn_801018E4_0000025C
lbl_fn_801018E4_00000258:
    li r28, 0x0
lbl_fn_801018E4_0000025C:
    mr r3, r30
    li r4, 0x0
    bl fn_80232B7C
    li r0, 0x0
    stw r0, 0x8(r1)
    li r0, -0x1
    li r4, 0x1
    stw r0, 0xc(r1)
    mulli r0, r28, 0xc
    addis r3, r30, 0x3
    lfs f1, lbl_80881494
    stw r4, 0x10(r1)
    addi r8, r31, 0x1c
    add r4, r3, r0
    lwz r3, lbl_8087F3C0
    addi r4, r4, 0x6558
    addi r9, r1, 0x60
    li r5, -0x1
    li r6, 0x0
    li r7, 0x0
    li r10, 0x0
    bl fn_8023A680
    b lbl_fn_801018E4_000003D0
lbl_fn_801018E4_000002B8:
    lwz r0, 0x84(r31)
    cmpwi r0, 0x2
    beq lbl_fn_801018E4_000003D0
    cmpwi r0, 0x1
    bne lbl_fn_801018E4_00000338
    lwz r28, 0x88(r31)
    cmpwi r28, 0x0
    ble lbl_fn_801018E4_000003D0
    mr r3, r30
    li r4, 0x0
    bl fn_80232B7C
    li r0, 0x0
    stw r0, 0x8(r1)
    subi r0, r28, 0x1
    li r3, -0x1
    stw r3, 0xc(r1)
    li r4, 0x1
    mulli r0, r0, 0x54
    addis r3, r30, 0x3
    stw r4, 0x10(r1)
    addi r8, r31, 0x1c
    lfs f1, lbl_80881494
    addi r9, r1, 0x60
    add r4, r3, r0
    lwz r3, lbl_8087F3C0
    addi r4, r4, 0x642c
    li r5, -0x1
    li r6, 0x0
    li r7, 0x0
    li r10, 0x0
    bl fn_8023A680
    b lbl_fn_801018E4_000003D0
lbl_fn_801018E4_00000338:
    lwz r0, 0xc(r31)
    cmpwi r29, 0x0
    extrwi r28, r0, 1, 24
    beq lbl_fn_801018E4_00000358
    mr r3, r29
    bl fn_8017A160
    mr r29, r3
    b lbl_fn_801018E4_0000035C
lbl_fn_801018E4_00000358:
    li r29, 0x0
lbl_fn_801018E4_0000035C:
    mr r3, r30
    li r4, 0x0
    bl fn_80232B7C
    li r0, 0x0
    stw r0, 0x8(r1)
    li r3, -0x1
    cmpwi r28, 0x0
    stw r3, 0xc(r1)
    li r0, 0x1
    stw r0, 0x10(r1)
    lwz r3, lbl_8087F3C0
    beq lbl_fn_801018E4_000003A0
    mulli r0, r29, 0xc
    addis r4, r30, 0x3
    add r4, r4, r0
    addi r4, r4, 0x6558
    b lbl_fn_801018E4_000003B0
lbl_fn_801018E4_000003A0:
    mulli r0, r29, 0xc
    addis r4, r30, 0x3
    add r4, r4, r0
    addi r4, r4, 0x651c
lbl_fn_801018E4_000003B0:
    lfs f1, lbl_80881494
    addi r8, r31, 0x1c
    addi r9, r1, 0x60
    li r5, -0x1
    li r6, 0x0
    li r7, 0x0
    li r10, 0x0
    bl fn_8023A680
lbl_fn_801018E4_000003D0:
    addi r11, r1, 0x100
    psq_l f31, 0x118(r1), 0, 0
    lfd f31, 0x110(r1)
    psq_l f30, 0x108(r1), 0, 0
    lfd f30, 0x100(r1)
    bl _restgpr_27
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_80101CDC(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    stw r29, 0x34(r1)
    mr r29, r4
    stw r28, 0x30(r1)
    lwz r0, 0x44(r4)
    lwz r31, 0x0(r4)
    cmpwi r0, 0x0
    bne lbl_fn_80101CDC_000007CC
    lwz r0, 0x84(r4)
    cmpwi r0, 0x1
    bne lbl_fn_80101CDC_00000498
    bl fn_80680CF8
    lis r5, 0x5555
    lis r4, lbl_80735DD0@ha
    addi r0, r5, 0x5556
    lfs f1, lbl_80881494
    mulhw r8, r0, r3
    addi r4, r4, lbl_80735DD0@l
    addi r5, r29, 0x1c
    li r6, 0x0
    li r7, -0x1
    srwi r0, r8, 31
    add r0, r8, r0
    mulli r0, r0, 0x3
    subf r8, r0, r3
    addi r3, r1, 0x1c
    addi r0, r8, 0x11
    slwi r0, r0, 2
    lwzx r4, r4, r0
    bl fn_800C344C
    addi r3, r1, 0x1c
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_80101CDC_000008A8
lbl_fn_80101CDC_00000498:
    cmpwi r0, 0x0
    bne lbl_fn_80101CDC_000008A8
    bl fn_80680CF8
    lis r4, 0x5555
    cmpwi r31, 0x0
    addi r0, r4, 0x5556
    lfs f31, lbl_80881494
    mulhw r4, r0, r3
    srwi r0, r4, 31
    add r0, r4, r0
    mulli r0, r0, 0x3
    subf r3, r0, r3
    addi r30, r3, 0x2
    beq lbl_fn_80101CDC_000004DC
    lwz r28, 0x648(r31)
    cmpwi r28, 0x0
    bne lbl_fn_80101CDC_000004E4
lbl_fn_80101CDC_000004DC:
    li r28, 0x0
    b lbl_fn_80101CDC_00000540
lbl_fn_80101CDC_000004E4:
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x6
    bne lbl_fn_80101CDC_00000540
    lwz r0, 0x560(r31)
    cmpwi r0, 0x4
    bne lbl_fn_80101CDC_00000540
    lwz r0, 0x64c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80101CDC_00000540
    lwz r3, 0xf80(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80101CDC_00000540
    lwz r12, 0x0(r3)
    lwz r12, 0x30(r12)
    mtctr r12
    bctrl
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    subf r0, r4, r0
    cmpwi r0, 0x1
    bne lbl_fn_80101CDC_00000540
    lwz r28, 0x64c(r31)
lbl_fn_80101CDC_00000540:
    cmpwi r28, 0x0
    beq lbl_fn_80101CDC_00000710
    lwz r4, 0x274(r28)
    cmpwi r4, 0x0
    beq lbl_fn_80101CDC_00000710
    lis r3, 0x1062
    lwz r4, 0x80(r4)
    addi r0, r3, 0x4dd3
    mulhw r0, r0, r4
    srawi r0, r0, 6
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r0, r0, 0x3e8
    subf r0, r0, r4
    cmpwi r0, 0x25f
    beq lbl_fn_80101CDC_00000680
    bge lbl_fn_80101CDC_000005DC
    cmpwi r0, 0x258
    beq lbl_fn_80101CDC_00000658
    bge lbl_fn_80101CDC_000005B8
    cmpwi r0, 0x255
    beq lbl_fn_80101CDC_00000648
    bge lbl_fn_80101CDC_000005AC
    cmpwi r0, 0x253
    beq lbl_fn_80101CDC_00000640
    bge lbl_fn_80101CDC_0000069C
    b lbl_fn_80101CDC_000006FC
lbl_fn_80101CDC_000005AC:
    cmpwi r0, 0x257
    bge lbl_fn_80101CDC_00000650
    b lbl_fn_80101CDC_0000069C
lbl_fn_80101CDC_000005B8:
    cmpwi r0, 0x25b
    beq lbl_fn_80101CDC_00000670
    bge lbl_fn_80101CDC_000005D0
    cmpwi r0, 0x25a
    bge lbl_fn_80101CDC_00000668
    b lbl_fn_80101CDC_00000660
lbl_fn_80101CDC_000005D0:
    cmpwi r0, 0x25e
    bge lbl_fn_80101CDC_00000678
    b lbl_fn_80101CDC_0000069C
lbl_fn_80101CDC_000005DC:
    cmpwi r0, 0x304
    bge lbl_fn_80101CDC_00000610
    cmpwi r0, 0x262
    beq lbl_fn_80101CDC_0000069C
    bge lbl_fn_80101CDC_000005FC
    cmpwi r0, 0x261
    bge lbl_fn_80101CDC_00000690
    b lbl_fn_80101CDC_00000688
lbl_fn_80101CDC_000005FC:
    cmpwi r0, 0x2fd
    bge lbl_fn_80101CDC_00000678
    cmpwi r0, 0x266
    bge lbl_fn_80101CDC_000006FC
    b lbl_fn_80101CDC_00000698
lbl_fn_80101CDC_00000610:
    cmpwi r0, 0x319
    bge lbl_fn_80101CDC_0000062C
    cmpwi r0, 0x312
    bge lbl_fn_80101CDC_00000690
    cmpwi r0, 0x30b
    bge lbl_fn_80101CDC_00000688
    b lbl_fn_80101CDC_00000680
lbl_fn_80101CDC_0000062C:
    cmpwi r0, 0x335
    bge lbl_fn_80101CDC_000006FC
    cmpwi r0, 0x320
    bge lbl_fn_80101CDC_00000698
    b lbl_fn_80101CDC_0000069C
lbl_fn_80101CDC_00000640:
    li r30, 0x5
    b lbl_fn_80101CDC_0000069C
lbl_fn_80101CDC_00000648:
    li r30, 0xa
    b lbl_fn_80101CDC_0000069C
lbl_fn_80101CDC_00000650:
    li r30, 0x6
    b lbl_fn_80101CDC_0000069C
lbl_fn_80101CDC_00000658:
    li r30, 0x9
    b lbl_fn_80101CDC_0000069C
lbl_fn_80101CDC_00000660:
    li r30, 0xd
    b lbl_fn_80101CDC_0000069C
lbl_fn_80101CDC_00000668:
    li r30, 0xc
    b lbl_fn_80101CDC_0000069C
lbl_fn_80101CDC_00000670:
    li r30, 0xb
    b lbl_fn_80101CDC_0000069C
lbl_fn_80101CDC_00000678:
    li r30, 0x6
    b lbl_fn_80101CDC_0000069C
lbl_fn_80101CDC_00000680:
    li r30, 0xd
    b lbl_fn_80101CDC_0000069C
lbl_fn_80101CDC_00000688:
    li r30, 0xd
    b lbl_fn_80101CDC_0000069C
lbl_fn_80101CDC_00000690:
    li r30, 0xe
    b lbl_fn_80101CDC_0000069C
lbl_fn_80101CDC_00000698:
    li r30, 0xf
lbl_fn_80101CDC_0000069C:
    bl fn_80680CF8
    lis r4, 0x4178
    lis r0, 0x4330
    addi r5, r4, 0x749f
    stw r0, 0x28(r1)
    mulhw r5, r5, r3
    lis r4, lbl_80735EB0@ha
    lfd f5, lbl_80735EB0@l(r4)
    lfs f3, lbl_8088152C
    lfs f2, lbl_808814D0
    lfs f1, lbl_8088156C
    srawi r0, r5, 8
    lfs f0, lbl_80881494
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x2c(r1)
    lfd f4, 0x28(r1)
    fsubs f4, f4, f5
    fdivs f3, f4, f3
    fmsubs f1, f2, f3, f1
    fadds f31, f0, f1
lbl_fn_80101CDC_000006FC:
    lwz r3, 0x50(r31)
    subis r0, r3, 0x4
    cmplwi r0, 0xa25a
    bne lbl_fn_80101CDC_00000710
    li r30, 0x10
lbl_fn_80101CDC_00000710:
    lis r31, lbl_80735DD0@ha
    slwi r0, r30, 2
    addi r31, r31, lbl_80735DD0@l
    lfs f1, lbl_80881494
    lwzx r4, r31, r0
    addi r3, r1, 0x20
    addi r5, r29, 0x1c
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    fmr f1, f31
    addi r3, r1, 0x20
    li r4, 0x0
    bl fn_800CB688
    lwz r0, 0x94(r29)
    rlwinm r0, r0, 0, 24, 24
    cmplwi r0, 0x80
    bne lbl_fn_80101CDC_00000780
    lwz r4, 0x1c(r31)
    addi r3, r1, 0x18
    lfs f1, lbl_80881494
    addi r5, r29, 0x1c
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x18
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_80101CDC_00000780:
    lwz r0, 0x78(r29)
    cmpwi r0, 0x0
    blt lbl_fn_80101CDC_000007BC
    lis r4, lbl_80735DD0@ha
    lfs f1, lbl_80881494
    addi r4, r4, lbl_80735DD0@l
    addi r3, r1, 0x14
    lwz r4, 0x20(r4)
    addi r5, r29, 0x1c
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x14
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_80101CDC_000007BC:
    addi r3, r1, 0x20
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_80101CDC_000008A8
lbl_fn_80101CDC_000007CC:
    cmpwi r0, 0x2
    bne lbl_fn_80101CDC_000008A8
    lwz r3, 0x8(r4)
    cmpwi r3, 0x0
    beq lbl_fn_80101CDC_000008A8
    lwz r0, 0xb0(r3)
    cmpwi r0, 0x0
    bgt lbl_fn_80101CDC_000008A8
    lwz r0, 0x84(r4)
    cmpwi r0, 0x1
    bne lbl_fn_80101CDC_0000082C
    lis r4, lbl_80735DD0@ha
    lfs f1, lbl_80881494
    addi r4, r4, lbl_80735DD0@l
    addi r3, r1, 0x10
    lwz r4, 0x50(r4)
    addi r5, r29, 0x1c
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_80101CDC_000008A8
lbl_fn_80101CDC_0000082C:
    cmpwi r0, 0x0
    bne lbl_fn_80101CDC_000008A8
    lfs f1, 0x58(r3)
    lfs f0, lbl_8088148C
    fcmpo cr0, f1, f0
    bge lbl_fn_80101CDC_00000878
    lis r4, lbl_80735DD0@ha
    lfs f1, lbl_80881494
    addi r4, r4, lbl_80735DD0@l
    addi r3, r1, 0xc
    lwz r4, 0x14(r4)
    addi r5, r29, 0x1c
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_80101CDC_000008A8
lbl_fn_80101CDC_00000878:
    lis r4, lbl_80735DD0@ha
    lfs f1, lbl_80881494
    addi r4, r4, lbl_80735DD0@l
    addi r3, r1, 0x8
    lwz r4, 0x18(r4)
    addi r5, r29, 0x1c
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_80101CDC_000008A8:
    lwz r0, 0x54(r1)
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_801021B4(void)
{
    nofralloc
    addis r3, r3, 0x4
    cmpwi r4, 0x0
    li r0, 0x0
    stw r4, -0x1d18(r3)
    stw r0, -0x1d20(r3)
    stw r0, -0x1d1c(r3)
    stw r6, -0x1d14(r3)
    stw r5, -0x1d10(r3)
    beqlr
    lwz r5, 0x8(r4)
    rlwinm r0, r5, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_801021B4_00000910
    lwz r0, 0xc(r4)
    stw r0, -0x1d20(r3)
    blr
lbl_fn_801021B4_00000910:
    rlwinm r0, r5, 0, 28, 28
    cmplwi r0, 0x8
    bnelr
    lwz r0, 0xc(r4)
    stw r0, -0x1d1c(r3)
    blr
}

asm void fn_8010220C(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    stfd f31, 0xa0(r1)
    psq_st f31, 0xa8(r1), 0, 0
    stfd f30, 0x90(r1)
    psq_st f30, 0x98(r1), 0, 0
    stfd f29, 0x80(r1)
    psq_st f29, 0x88(r1), 0, 0
    stfd f28, 0x70(r1)
    psq_st f28, 0x78(r1), 0, 0
    stfd f27, 0x60(r1)
    psq_st f27, 0x68(r1), 0, 0
    stfd f26, 0x50(r1)
    psq_st f26, 0x58(r1), 0, 0
    stw r31, 0x4c(r1)
    mr r31, r3
    stw r30, 0x48(r1)
    stw r29, 0x44(r1)
    lwz r5, lbl_8087F610
    cmpwi r5, 0x0
    beq lbl_fn_8010220C_000009A8
    lwz r4, 0x4fc(r5)
    li r0, 0x0
    cmpwi r4, 0x1e
    bne lbl_fn_8010220C_000009A0
    lwz r4, 0x50c(r5)
    cmpwi r4, 0x5
    bge lbl_fn_8010220C_000009A0
    li r0, 0x1
lbl_fn_8010220C_000009A0:
    cmpwi r0, 0x0
    beq lbl_fn_8010220C_00000E74
lbl_fn_8010220C_000009A8:
    lwz r7, lbl_8087EEE0
    lis r5, 0x4330
    lis r6, lbl_80735EB0@ha
    stw r5, 0x30(r1)
    lwz r0, 0x3c(r7)
    addis r4, r3, 0x4
    lwz r7, 0x40(r7)
    xoris r0, r0, 0x8000
    stw r0, 0x34(r1)
    xoris r0, r7, 0x8000
    lwz r7, -0x1d20(r4)
    lfd f4, lbl_80735EB0@l(r6)
    lfd f0, 0x30(r1)
    cmpwi r7, 0x0
    stw r0, 0x3c(r1)
    fsubs f3, f0, f4
    lfs f2, lbl_80881500
    stw r5, 0x38(r1)
    lfs f26, lbl_80881478
    lfd f0, 0x38(r1)
    fmuls f31, f2, f3
    fsubs f0, f0, f4
    fmuls f30, f2, f0
    bne lbl_fn_8010220C_00000A20
    lwz r0, -0x1d1c(r4)
    cmpwi r0, 0x0
    bne lbl_fn_8010220C_00000A20
    lwz r0, -0x1d14(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8010220C_00000A8C
lbl_fn_8010220C_00000A20:
    cmpwi r7, 0x0
    beq lbl_fn_8010220C_00000A38
    addis r4, r3, 0x4
    lwz r0, -0x1d10(r4)
    cmpwi r0, 0x0
    bne lbl_fn_8010220C_00000A48
lbl_fn_8010220C_00000A38:
    addis r4, r3, 0x4
    lwz r0, -0x1d14(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8010220C_00000A5C
lbl_fn_8010220C_00000A48:
    lfs f29, lbl_80881570
    lfs f28, lbl_80881574
    lfs f27, lbl_80881484
    lfs f26, lbl_80881494
    b lbl_fn_8010220C_00000A98
lbl_fn_8010220C_00000A5C:
    lwz r0, -0x1d1c(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8010220C_00000A78
    lfs f29, lbl_80881570
    lfs f28, lbl_80881574
    lfs f27, lbl_80881484
    b lbl_fn_8010220C_00000A98
lbl_fn_8010220C_00000A78:
    lfs f29, lbl_80881548
    lfs f28, lbl_80881578
    lfs f27, lbl_8088157C
    lfs f26, lbl_80881494
    b lbl_fn_8010220C_00000A98
lbl_fn_8010220C_00000A8C:
    lfs f29, lbl_80881580
    lfs f28, lbl_80881584
    lfs f27, lbl_80881588
lbl_fn_8010220C_00000A98:
    addis r3, r3, 0x1
    lis r30, lbl_80736040@ha
    lwz r4, -0x34d0(r3)
    li r0, 0x1
    addi r30, r30, lbl_80736040@l
    stw r0, -0x34cc(r3)
    addi r3, r30, 0x3c0
    addi r29, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f29
    mr r4, r3
    mr r3, r29
    bl fn_801FECE0
    addis r4, r31, 0x1
    addi r3, r30, 0x3c7
    lwz r4, -0x34d0(r4)
    addi r29, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f28
    mr r4, r3
    mr r3, r29
    bl fn_801FECE0
    addis r4, r31, 0x1
    addi r3, r30, 0x3ce
    lwz r4, -0x34d0(r4)
    addi r29, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f27
    mr r4, r3
    mr r3, r29
    bl fn_801FECE0
    addis r4, r31, 0x1
    addi r3, r30, 0x3d5
    lwz r4, -0x34d0(r4)
    addi r29, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f26
    mr r4, r3
    mr r3, r29
    bl fn_801FECE0
    lwz r3, lbl_8087F4E8
    lfs f0, lbl_80881478
    lwz r0, 0x84(r3)
    stfs f0, 0x28(r1)
    cmpwi r0, 0x1
    stfs f0, 0x2c(r1)
    beq lbl_fn_8010220C_00000B88
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_800A56A8
    fneg f0, f1
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x1
    stfs f0, 0x28(r1)
    li r6, 0x0
    bl fn_800A56A8
    stfs f1, 0x2c(r1)
lbl_fn_8010220C_00000B88:
    addis r4, r31, 0x1
    addis r3, r31, 0x4
    lfs f2, -0x34c8(r4)
    lis r30, lbl_80736040@ha
    lfs f3, -0x1c60(r3)
    addi r30, r30, lbl_80736040@l
    lfs f0, 0x28(r1)
    addi r3, r30, 0x3d8
    fmuls f4, f2, f3
    lfs f2, lbl_8088158C
    fmadds f3, f0, f3, f31
    lwz r5, -0x34d0(r4)
    lfs f0, -0x34c0(r4)
    addi r29, r5, 0x58
    fmadds f2, f2, f4, f3
    fadds f29, f0, f2
    bl fn_800DC6B4
    fmr f1, f29
    mr r4, r3
    mr r3, r29
    li r5, 0x0
    bl fn_801FED24
    addis r5, r31, 0x1
    addis r4, r31, 0x4
    lfs f3, -0x1c60(r4)
    addi r3, r30, 0x3d8
    lfs f2, -0x34c4(r5)
    lfs f0, 0x2c(r1)
    fmuls f4, f2, f3
    lfs f2, lbl_8088158C
    fmadds f3, f0, f3, f30
    lwz r4, -0x34d0(r5)
    lfs f0, -0x34bc(r5)
    addi r29, r4, 0x58
    fmadds f2, f2, f4, f3
    fadds f29, f0, f2
    bl fn_800DC6B4
    fmr f1, f29
    mr r4, r3
    mr r3, r29
    li r5, 0x1
    bl fn_801FED24
    addis r4, r31, 0x4
    lfs f2, 0x28(r1)
    lfs f0, -0x1c60(r4)
    addis r5, r31, 0x1
    lwz r4, -0x34d0(r5)
    addi r3, r30, 0x3e2
    fmuls f3, f2, f0
    lfs f2, lbl_8088158C
    lfs f0, -0x34c8(r5)
    addi r29, r4, 0x58
    fmadds f2, f2, f3, f31
    fadds f29, f0, f2
    bl fn_800DC6B4
    fmr f1, f29
    mr r4, r3
    mr r3, r29
    li r5, 0x0
    bl fn_801FED24
    addis r4, r31, 0x4
    lfs f2, 0x2c(r1)
    lfs f0, -0x1c60(r4)
    addis r5, r31, 0x1
    lwz r4, -0x34d0(r5)
    addi r3, r30, 0x3e2
    fmuls f3, f2, f0
    lfs f2, lbl_8088158C
    lfs f0, -0x34c4(r5)
    addi r29, r4, 0x58
    fmadds f2, f2, f3, f30
    fadds f29, f0, f2
    bl fn_800DC6B4
    fmr f1, f29
    mr r4, r3
    mr r3, r29
    li r5, 0x1
    bl fn_801FED24
    addis r4, r31, 0x1
    addis r3, r31, 0x4
    lwz r0, -0x1d20(r3)
    subi r5, r4, 0x34c8
    mr r6, r4
    psq_l f1, 0x0(r5), 0, 0
    subi r4, r4, 0x34c0
    addi r5, r1, 0x28
    psq_st f1, 0x0(r4), 0, 0
    cmpwi r0, 0x0
    psq_l f1, 0x0(r5), 0, 0
    subi r6, r6, 0x34c8
    psq_st f1, 0x0(r6), 0, 0
    bne lbl_fn_8010220C_00000D04
    lwz r0, -0x1d1c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8010220C_00000D20
lbl_fn_8010220C_00000D04:
    lis r4, lbl_807C7028@ha
    addis r3, r31, 0x1
    addi r4, r4, lbl_807C7028@l
    psq_l f1, 0x0(r4), 0, 0
    subi r3, r3, 0x34b0
    psq_st f1, 0x0(r3), 0, 0
    b lbl_fn_8010220C_00000D54
lbl_fn_8010220C_00000D20:
    lfs f0, -0x1c58(r3)
    addis r3, r31, 0x1
    lfs f2, 0x2c(r1)
    addi r4, r1, 0x20
    fneg f3, f0
    lfs f0, 0x28(r1)
    subi r3, r3, 0x34b0
    fmuls f2, f2, f3
    fmuls f0, f0, f3
    stfs f2, 0x24(r1)
    stfs f0, 0x20(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
lbl_fn_8010220C_00000D54:
    addis r5, r31, 0x1
    lis r30, lbl_80736040@ha
    lfs f4, -0x34ac(r5)
    addis r3, r31, 0x4
    lfs f3, -0x34b4(r5)
    addi r7, r1, 0x18
    lfs f2, -0x34b0(r5)
    subi r6, r5, 0x34b8
    fsubs f6, f4, f3
    lfs f0, -0x34b8(r5)
    lfs f4, -0x1c5c(r3)
    addi r30, r30, lbl_80736040@l
    fsubs f2, f2, f0
    lwz r4, -0x34d0(r5)
    fmuls f5, f6, f4
    stfs f2, 0x10(r1)
    fmuls f4, f2, f4
    addi r3, r30, 0x3ec
    stfs f6, 0x14(r1)
    addi r29, r4, 0x58
    fadds f2, f5, f3
    stfs f4, 0x8(r1)
    fadds f0, f4, f0
    stfs f2, 0x1c(r1)
    stfs f0, 0x18(r1)
    psq_l f1, 0x0(r7), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    lfs f29, -0x34b8(r5)
    stfs f5, 0xc(r1)
    bl fn_800DC6B4
    fmr f1, f29
    mr r4, r3
    mr r3, r29
    li r5, 0x0
    bl fn_801FED24
    addis r5, r31, 0x1
    addi r3, r30, 0x3ec
    lwz r4, -0x34d0(r5)
    lfs f29, -0x34b4(r5)
    addi r29, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f29
    mr r4, r3
    mr r3, r29
    li r5, 0x1
    bl fn_801FED24
    addis r4, r31, 0x1
    lfs f2, lbl_80881590
    lfs f0, -0x34b8(r4)
    addi r3, r30, 0x3ec
    lwz r4, -0x34a0(r4)
    fadds f29, f2, f0
    addi r29, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f29
    mr r4, r3
    mr r3, r29
    li r5, 0x0
    bl fn_801FED24
    addis r4, r31, 0x1
    lfs f2, lbl_80881594
    lfs f0, -0x34b4(r4)
    addi r3, r30, 0x3ec
    lwz r4, -0x34a0(r4)
    fadds f29, f2, f0
    addi r29, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f29
    mr r4, r3
    mr r3, r29
    li r5, 0x1
    bl fn_801FED24
lbl_fn_8010220C_00000E74:
    lwz r0, 0xb4(r1)
    psq_l f31, 0xa8(r1), 0, 0
    lfd f31, 0xa0(r1)
    psq_l f30, 0x98(r1), 0, 0
    lfd f30, 0x90(r1)
    psq_l f29, 0x88(r1), 0, 0
    lfd f29, 0x80(r1)
    psq_l f28, 0x78(r1), 0, 0
    lfd f28, 0x70(r1)
    psq_l f27, 0x68(r1), 0, 0
    lfd f27, 0x60(r1)
    psq_l f26, 0x58(r1), 0, 0
    lfd f26, 0x50(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_801027A4(void)
{
    nofralloc
    cmpwi r4, 0x0
    bne lbl_fn_801027A4_00000ED0
    li r6, -0x1
    b lbl_fn_801027A4_00000F10
lbl_fn_801027A4_00000ED0:
    addis r5, r3, 0x3
    mr r7, r3
    lwz r0, 0x63b0(r5)
    li r6, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_801027A4_00000F0C
lbl_fn_801027A4_00000EEC:
    addis r5, r7, 0x1
    lwz r0, -0x3410(r5)
    cmplw r0, r4
    bne lbl_fn_801027A4_00000F00
    b lbl_fn_801027A4_00000F10
lbl_fn_801027A4_00000F00:
    addi r7, r7, 0x934
    addi r6, r6, 0x1
    bdnz lbl_fn_801027A4_00000EEC
lbl_fn_801027A4_00000F0C:
    li r6, -0x1
lbl_fn_801027A4_00000F10:
    cmpwi r6, 0x0
    bgelr
    addis r5, r3, 0x3
    addis r3, r3, 0x1
    lwz r0, 0x63b0(r5)
    mulli r0, r0, 0x934
    add r3, r3, r0
    stw r4, -0x3410(r3)
    lwz r3, 0x63b0(r5)
    addi r0, r3, 0x1
    stw r0, 0x63b0(r5)
    blr
}

asm void fn_80102824(void)
{
    nofralloc
    cmpwi r4, 0x0
    bne lbl_fn_80102824_00000F50
    li r7, -0x1
    b lbl_fn_80102824_00000F90
lbl_fn_80102824_00000F50:
    addis r6, r3, 0x3
    mr r8, r3
    lwz r0, 0x63b0(r6)
    li r7, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80102824_00000F8C
lbl_fn_80102824_00000F6C:
    addis r6, r8, 0x1
    lwz r0, -0x3410(r6)
    cmplw r0, r4
    bne lbl_fn_80102824_00000F80
    b lbl_fn_80102824_00000F90
lbl_fn_80102824_00000F80:
    addi r8, r8, 0x934
    addi r7, r7, 0x1
    bdnz lbl_fn_80102824_00000F6C
lbl_fn_80102824_00000F8C:
    li r7, -0x1
lbl_fn_80102824_00000F90:
    cmpwi r7, 0x0
    bltlr
    mulli r0, r7, 0x934
    addis r3, r3, 0x1
    add r3, r3, r0
    stw r5, -0x3410(r3)
    blr
}

asm void fn_80102890(void)
{
    nofralloc
    cmpwi r4, 0x0
    bne lbl_fn_80102890_00000FBC
    li r3, -0x1
    blr
lbl_fn_80102890_00000FBC:
    addis r5, r3, 0x3
    li r6, 0x0
    lwz r0, 0x63b0(r5)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80102890_00000FF8
lbl_fn_80102890_00000FD4:
    addis r5, r3, 0x1
    lwz r0, -0x3410(r5)
    cmplw r0, r4
    bne lbl_fn_80102890_00000FEC
    mr r3, r6
    blr
lbl_fn_80102890_00000FEC:
    addi r3, r3, 0x934
    addi r6, r6, 0x1
    bdnz lbl_fn_80102890_00000FD4
lbl_fn_80102890_00000FF8:
    li r3, -0x1
    blr
}

asm void fn_801028E4(void)
{
    nofralloc
    cmpwi r4, 0x0
    bne lbl_fn_801028E4_00001010
    li r8, -0x1
    b lbl_fn_801028E4_00001050
lbl_fn_801028E4_00001010:
    addis r7, r3, 0x3
    mr r9, r3
    lwz r0, 0x63b0(r7)
    li r8, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_801028E4_0000104C
lbl_fn_801028E4_0000102C:
    addis r7, r9, 0x1
    lwz r0, -0x3410(r7)
    cmplw r0, r4
    bne lbl_fn_801028E4_00001040
    b lbl_fn_801028E4_00001050
lbl_fn_801028E4_00001040:
    addi r9, r9, 0x934
    addi r8, r8, 0x1
    bdnz lbl_fn_801028E4_0000102C
lbl_fn_801028E4_0000104C:
    li r8, -0x1
lbl_fn_801028E4_00001050:
    cmpwi r5, 0x0
    bne lbl_fn_801028E4_00001060
    li r7, -0x1
    b lbl_fn_801028E4_000010A0
lbl_fn_801028E4_00001060:
    addis r4, r3, 0x3
    mr r9, r3
    lwz r0, 0x63b0(r4)
    li r7, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_801028E4_0000109C
lbl_fn_801028E4_0000107C:
    addis r4, r9, 0x1
    lwz r0, -0x3410(r4)
    cmplw r0, r5
    bne lbl_fn_801028E4_00001090
    b lbl_fn_801028E4_000010A0
lbl_fn_801028E4_00001090:
    addi r9, r9, 0x934
    addi r7, r7, 0x1
    bdnz lbl_fn_801028E4_0000107C
lbl_fn_801028E4_0000109C:
    li r7, -0x1
lbl_fn_801028E4_000010A0:
    cmpwi r7, 0x0
    bltlr
    cmpwi r8, 0x0
    blt lbl_fn_801028E4_000010CC
    mulli r4, r8, 0x934
    addis r3, r3, 0x1
    slwi r0, r7, 2
    add r3, r3, r4
    add r3, r3, r0
    stw r6, -0x3408(r3)
    blr
lbl_fn_801028E4_000010CC:
    slwi r4, r7, 2
    li r0, 0x3
    add r4, r3, r4
    mtctr r0
lbl_fn_801028E4_000010DC:
    addis r3, r4, 0x1
    addi r4, r4, 0x49a0
    stw r6, -0x3408(r3)
    stw r6, -0x2ad4(r3)
    stw r6, -0x21a0(r3)
    stw r6, -0x186c(r3)
    stw r6, -0xf38(r3)
    stw r6, -0x604(r3)
    stw r6, 0x330(r3)
    stw r6, 0xc64(r3)
    addis r3, r4, 0x1
    addi r4, r4, 0x49a0
    stw r6, -0x3408(r3)
    stw r6, -0x2ad4(r3)
    stw r6, -0x21a0(r3)
    stw r6, -0x186c(r3)
    stw r6, -0xf38(r3)
    stw r6, -0x604(r3)
    stw r6, 0x330(r3)
    stw r6, 0xc64(r3)
    addis r3, r4, 0x1
    addi r4, r4, 0x49a0
    stw r6, -0x3408(r3)
    stw r6, -0x2ad4(r3)
    stw r6, -0x21a0(r3)
    stw r6, -0x186c(r3)
    stw r6, -0xf38(r3)
    stw r6, -0x604(r3)
    stw r6, 0x330(r3)
    stw r6, 0xc64(r3)
    bdnz lbl_fn_801028E4_000010DC
    blr
}

asm void fn_80102A40(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    addi r11, r1, 0x60
    stfd f31, 0x80(r1)
    psq_st f31, 0x88(r1), 0, 0
    stfd f30, 0x70(r1)
    psq_st f30, 0x78(r1), 0, 0
    stfd f29, 0x60(r1)
    psq_st f29, 0x68(r1), 0, 0
    bl _savegpr_22
    lwz r0, lbl_8087F610
    mr r28, r3
    mr r22, r4
    mr r25, r5
    cmpwi r0, 0x0
    mr r27, r7
    bne lbl_fn_80102A40_00001598
    lis r3, 0x2
    subi r0, r3, 0x7960
    cmpw r6, r0
    blt lbl_fn_80102A40_00001598
    lwz r3, lbl_8087F0A8
    li r26, 0xc8
    lwz r3, 0x3cc(r3)
    bl fn_80210220
    cmpwi r22, 0x0
    mr r31, r3
    bne lbl_fn_80102A40_000011D8
    li r4, -0x1
    b lbl_fn_80102A40_00001218
lbl_fn_80102A40_000011D8:
    addis r3, r28, 0x3
    mr r5, r28
    lwz r0, 0x63b0(r3)
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80102A40_00001214
lbl_fn_80102A40_000011F4:
    addis r3, r5, 0x1
    lwz r0, -0x3410(r3)
    cmplw r0, r22
    bne lbl_fn_80102A40_00001208
    b lbl_fn_80102A40_00001218
lbl_fn_80102A40_00001208:
    addi r5, r5, 0x934
    addi r4, r4, 0x1
    bdnz lbl_fn_80102A40_000011F4
lbl_fn_80102A40_00001214:
    li r4, -0x1
lbl_fn_80102A40_00001218:
    cmpwi r25, 0x0
    bne lbl_fn_80102A40_00001228
    li r30, -0x1
    b lbl_fn_80102A40_00001268
lbl_fn_80102A40_00001228:
    addis r3, r28, 0x3
    mr r5, r28
    lwz r0, 0x63b0(r3)
    li r30, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80102A40_00001264
lbl_fn_80102A40_00001244:
    addis r3, r5, 0x1
    lwz r0, -0x3410(r3)
    cmplw r0, r25
    bne lbl_fn_80102A40_00001258
    b lbl_fn_80102A40_00001268
lbl_fn_80102A40_00001258:
    addi r5, r5, 0x934
    addi r30, r30, 0x1
    bdnz lbl_fn_80102A40_00001244
lbl_fn_80102A40_00001264:
    li r30, -0x1
lbl_fn_80102A40_00001268:
    cmpwi r30, 0x0
    blt lbl_fn_80102A40_00001598
    cmpwi r4, 0x0
    blt lbl_fn_80102A40_000013FC
    mulli r0, r4, 0x934
    addis r3, r28, 0x1
    add r29, r3, r0
    lwzu r6, -0x3410(r29)
    cmpwi r6, 0x0
    beq lbl_fn_80102A40_00001598
    lwz r7, 0x38(r6)
    li r4, 0x0
    li r3, 0x0
    li r5, 0x0
    rlwinm r0, r7, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80102A40_000012BC
    clrlwi r0, r7, 31
    cmplwi r0, 0x1
    beq lbl_fn_80102A40_000012BC
    li r5, 0x1
lbl_fn_80102A40_000012BC:
    cmpwi r5, 0x0
    beq lbl_fn_80102A40_000012D8
    lwz r0, 0x7e0(r6)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_80102A40_000012D8
    li r3, 0x1
lbl_fn_80102A40_000012D8:
    cmpwi r3, 0x0
    beq lbl_fn_80102A40_0000130C
    lwz r0, 0x55c(r6)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_80102A40_00001300
    lwz r0, 0x560(r6)
    cmpwi r0, 0x1c
    bne lbl_fn_80102A40_00001300
    li r3, 0x1
lbl_fn_80102A40_00001300:
    cmpwi r3, 0x0
    bne lbl_fn_80102A40_0000130C
    li r4, 0x1
lbl_fn_80102A40_0000130C:
    cmpwi r4, 0x0
    beq lbl_fn_80102A40_00001598
    cmpwi r27, 0x0
    blt lbl_fn_80102A40_000013D8
    lfs f1, 0x530(r6)
    addi r3, r1, 0x14
    lfs f0, 0x530(r25)
    lfs f3, 0x52c(r6)
    fsubs f4, f1, f0
    lfs f2, 0x52c(r25)
    lfs f1, 0x528(r6)
    lfs f0, 0x528(r25)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0x18(r1)
    stfs f0, 0x14(r1)
    stfs f4, 0x1c(r1)
    bl fn_805F9940
    lfs f2, 0x34(r31)
    lfs f0, lbl_80881478
    fdivs f2, f1, f2
    fcmpo cr0, f2, f0
    ble lbl_fn_80102A40_0000136C
    b lbl_fn_80102A40_00001370
lbl_fn_80102A40_0000136C:
    fmr f2, f0
lbl_fn_80102A40_00001370:
    lfs f3, lbl_80881494
    fcmpo cr0, f2, f3
    bge lbl_fn_80102A40_00001398
    lfs f2, 0x34(r31)
    lfs f0, lbl_80881478
    fdivs f3, f1, f2
    fcmpo cr0, f3, f0
    ble lbl_fn_80102A40_00001394
    b lbl_fn_80102A40_00001398
lbl_fn_80102A40_00001394:
    fmr f3, f0
lbl_fn_80102A40_00001398:
    subfic r3, r27, 0xc8
    lis r0, 0x4330
    xoris r3, r3, 0x8000
    stw r3, 0x24(r1)
    lfs f0, lbl_80881494
    lis r3, lbl_80735EB0@ha
    stw r0, 0x20(r1)
    fsubs f2, f0, f3
    lfd f1, lbl_80735EB0@l(r3)
    lfd f0, 0x20(r1)
    fsubs f0, f0, f1
    fmuls f0, f2, f0
    fctiwz f0, f0
    stfd f0, 0x28(r1)
    lwz r0, 0x2c(r1)
    add r26, r27, r0
lbl_fn_80102A40_000013D8:
    slwi r0, r30, 2
    add r3, r29, r0
    lwz r0, 0x8(r3)
    add. r0, r0, r26
    stw r0, 0x8(r3)
    bge lbl_fn_80102A40_00001598
    li r0, 0x0
    stw r0, 0x8(r3)
    b lbl_fn_80102A40_00001598
lbl_fn_80102A40_000013FC:
    lis r3, lbl_80735EB0@ha
    addis r29, r28, 0x1
    lfs f29, lbl_80881478
    addis r24, r28, 0x3
    lfs f30, lbl_80881494
    slwi r30, r30, 2
    lfd f31, lbl_80735EB0@l(r3)
    li r28, 0x0
    lis r22, 0x4330
    li r23, 0x0
    subi r29, r29, 0x3410
    b lbl_fn_80102A40_0000158C
lbl_fn_80102A40_0000142C:
    lwz r6, 0x0(r29)
    cmpwi r6, 0x0
    beq lbl_fn_80102A40_00001584
    lwz r7, 0x38(r6)
    li r4, 0x0
    li r3, 0x0
    li r5, 0x0
    rlwinm r0, r7, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80102A40_00001464
    clrlwi r0, r7, 31
    cmplwi r0, 0x1
    beq lbl_fn_80102A40_00001464
    li r5, 0x1
lbl_fn_80102A40_00001464:
    cmpwi r5, 0x0
    beq lbl_fn_80102A40_00001480
    lwz r0, 0x7e0(r6)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_80102A40_00001480
    li r3, 0x1
lbl_fn_80102A40_00001480:
    cmpwi r3, 0x0
    beq lbl_fn_80102A40_000014B4
    lwz r0, 0x55c(r6)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_80102A40_000014A8
    lwz r0, 0x560(r6)
    cmpwi r0, 0x1c
    bne lbl_fn_80102A40_000014A8
    li r3, 0x1
lbl_fn_80102A40_000014A8:
    cmpwi r3, 0x0
    bne lbl_fn_80102A40_000014B4
    li r4, 0x1
lbl_fn_80102A40_000014B4:
    cmpwi r4, 0x0
    beq lbl_fn_80102A40_00001584
    cmpwi r27, 0x0
    blt lbl_fn_80102A40_0000156C
    lfs f1, 0x530(r6)
    addi r3, r1, 0x8
    lfs f0, 0x530(r25)
    lfs f3, 0x52c(r6)
    fsubs f4, f1, f0
    lfs f2, 0x52c(r25)
    lfs f1, 0x528(r6)
    lfs f0, 0x528(r25)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f4, 0x10(r1)
    bl fn_805F9940
    lfs f0, 0x34(r31)
    fdivs f0, f1, f0
    fcmpo cr0, f0, f29
    ble lbl_fn_80102A40_00001510
    b lbl_fn_80102A40_00001514
lbl_fn_80102A40_00001510:
    fmr f0, f29
lbl_fn_80102A40_00001514:
    fcmpo cr0, f0, f30
    bge lbl_fn_80102A40_00001538
    lfs f0, 0x34(r31)
    fdivs f0, f1, f0
    fcmpo cr0, f0, f29
    ble lbl_fn_80102A40_00001530
    b lbl_fn_80102A40_0000153C
lbl_fn_80102A40_00001530:
    fmr f0, f29
    b lbl_fn_80102A40_0000153C
lbl_fn_80102A40_00001538:
    fmr f0, f30
lbl_fn_80102A40_0000153C:
    subf r0, r27, r26
    stw r22, 0x28(r1)
    xoris r0, r0, 0x8000
    fsubs f1, f30, f0
    stw r0, 0x2c(r1)
    lfd f0, 0x28(r1)
    fsubs f0, f0, f31
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x20(r1)
    lwz r0, 0x24(r1)
    add r26, r27, r0
lbl_fn_80102A40_0000156C:
    add r3, r30, r29
    lwz r0, 0x8(r3)
    add. r0, r0, r26
    stw r0, 0x8(r3)
    bge lbl_fn_80102A40_00001584
    stw r23, 0x8(r3)
lbl_fn_80102A40_00001584:
    addi r29, r29, 0x934
    addi r28, r28, 0x1
lbl_fn_80102A40_0000158C:
    lwz r0, 0x63b0(r24)
    cmpw r28, r0
    blt lbl_fn_80102A40_0000142C
lbl_fn_80102A40_00001598:
    addi r11, r1, 0x60
    psq_l f31, 0x88(r1), 0, 0
    lfd f31, 0x80(r1)
    psq_l f30, 0x78(r1), 0, 0
    lfd f30, 0x70(r1)
    psq_l f29, 0x68(r1), 0, 0
    lfd f29, 0x60(r1)
    bl _restgpr_22
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}
