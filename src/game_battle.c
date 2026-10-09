#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_14(void);
extern void _restgpr_16(void);
extern void _restgpr_18(void);
extern void _restgpr_22(void);
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_14(void);
extern void _savegpr_16(void);
extern void _savegpr_18(void);
extern void _savegpr_22(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_800142C4(void);
extern void fn_800142CC(void);
extern void fn_800142D4(void);
extern void fn_800143E8(void);
extern void fn_8001C1C0(void);
extern void fn_8001C260(void);
extern void fn_8001C26C(void);
extern void fn_8003E918(void);
extern void fn_80051E90(void);
extern void fn_80084C24(void);
extern void fn_800EE794(void);
extern void fn_80102A40(void);
extern void fn_8010C948(void);
extern void fn_8011C2D4(void);
extern void fn_8011C314(void);
extern void fn_8011C378(void);
extern void fn_8011C3F4(void);
extern void fn_8011C46C(void);
extern void fn_8011C4AC(void);
extern void fn_8011C610(void);
extern void fn_8011C650(void);
extern void fn_8011C6C4(void);
extern void fn_8011C7C0(void);
extern void fn_8011C850(void);
extern void fn_8011C8E4(void);
extern void fn_8011C8EC(void);
extern void fn_8011C92C(void);
extern void fn_8011C97C(void);
extern void fn_8011C9F8(void);
extern void fn_8011CA00(void);
extern void fn_8011CA08(void);
extern void fn_8011CA5C(void);
extern void fn_8011CAE4(void);
extern void fn_8011CC30(void);
extern void fn_8011CCA0(void);
extern void fn_8011CD1C(void);
extern void fn_8011FE3C(void);
extern void fn_80134134(void);
extern void fn_80134270(void);
extern void fn_80134290(void);
extern void fn_801342B0(void);
extern void fn_8014DEE4(void);
extern void fn_8014EEC4(void);
extern void fn_8016F3D0(void);
extern void fn_80179D44(void);
extern void fn_802180A8(void);
extern void fn_80219E6C(void);
extern void fn_8021A984(void);
extern void fn_80370174(void);
extern void fn_803C1560(void);
extern void fn_803CD958(void);
extern void fn_80599C94(void);
extern void fn_80599D64(void);
extern void fn_805AA018(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_805F9990(void);
extern void fn_805F99B0(void);
extern void fn_80680CF8(void);
extern void fn_80682428(void);
extern void fn_8068A850(void);
extern void fn_806952C4(void);

/* External data declarations */
extern u8 jumptable_80775BE8[];
extern u8 lbl_8072FC70[];
extern u8 lbl_8072FF50[];
extern u8 lbl_80775B18[];
extern u8 lbl_80775BC0[];
extern u8 lbl_807C66C0[];

/* Small data declarations */
extern u32 lbl_8087EE60;
extern u32 lbl_8087EE64;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F430;
extern u32 lbl_8087F4A0;
extern u32 lbl_8087F890;
extern u32 lbl_8087F8A0;
extern u32 lbl_8087F9E8;
extern u32 lbl_8087F9F8;
extern u32 lbl_8087FA00;
extern u32 lbl_808806B8;
extern u32 lbl_808806BC;
extern u32 lbl_808806D0;
extern u32 lbl_808806DC;
extern u32 lbl_808806EC;
extern u32 lbl_808806F4;
extern u32 lbl_80880700;
extern u32 lbl_8088072C;
extern u32 lbl_80880730;
extern u32 lbl_80880734;
extern u32 lbl_80880738;
extern u32 lbl_8088073C;
extern u32 lbl_80880740;
extern u32 lbl_80880744;
extern u32 lbl_80880748;
extern u32 lbl_8088074C;
extern u32 lbl_80880750;
extern u32 lbl_80880754;
extern u32 lbl_80880758;
extern u32 lbl_80880760;
extern u32 lbl_80880764;
extern u32 lbl_80880768;
extern u32 lbl_80880770;
extern u32 lbl_80880774;

/* Function declarations */
void fn_80017128(void);
void fn_80017944(void);
void fn_8001794C(void);
void fn_80017E90(void);
void fn_80017EB0(void);
void fn_80017F18(void);
void fn_80018078(void);
void fn_80018240(void);
void fn_80018394(void);
void fn_800183E0(void);
void fn_800184F4(void);
void fn_800185B4(void);
void fn_80018608(void);
void fn_80018834(void);
void fn_80018BAC(void);
void fn_80018C80(void);
void fn_80018D5C(void);
void fn_80019254(void);
void fn_800197A4(void);
void fn_80019E88(void);
void dtor_8001A228(void);
void fn_8001A268(void);
void fn_8001A270(void);
void fn_8001A2DC(void);
void fn_8001A34C(void);
void fn_8001A39C(void);
void dtor_8001A3A4(void);
void fn_8001A404(void);
void fn_8001A444(void);
void fn_8001A464(void);
void fn_8001A510(void);
void fn_8001A65C(void);
void fn_8001A788(void);
void fn_8001A8A4(void);
void fn_8001AC54(void);
void fn_8001AD80(void);
void fn_8001ADE8(void);
void fn_8001AEBC(void);
void fn_8001AEDC(void);

asm void fn_80017128(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    addi r11, r1, 0x80
    stfd f31, 0xb0(r1)
    psq_st f31, 0xb8(r1), 0, 0
    stfd f30, 0xa0(r1)
    psq_st f30, 0xa8(r1), 0, 0
    stfd f29, 0x90(r1)
    psq_st f29, 0x98(r1), 0, 0
    stfd f28, 0x80(r1)
    psq_st f28, 0x88(r1), 0, 0
    bl _savegpr_25
    lwz r5, lbl_8087F430
    lis r0, 0x4330
    stw r0, 0x20(r1)
    addi r30, r4, 0xc58
    lwz r28, 0x10d8(r5)
    mr r26, r3
    stw r0, 0x28(r1)
    mr r27, r4
    cmpwi r28, 0x0
    lwz r31, 0x64(r4)
    beq lbl_fn_80017128_00000068
    cmpwi r31, 0x0
    bne lbl_fn_80017128_00000070
lbl_fn_80017128_00000068:
    li r3, 0x0
    b lbl_fn_80017128_000007E4
lbl_fn_80017128_00000070:
    lwz r5, 0xc4(r30)
    lwz r29, 0x0(r30)
    cmpwi r5, 0x0
    lfs f31, lbl_8088072C
    beq lbl_fn_80017128_000000C8
    lfs f3, 0x530(r4)
    addi r3, r1, 0x14
    lfs f0, 0x530(r5)
    lfs f5, 0x52c(r4)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r5)
    lfs f3, 0x528(r4)
    lfs f0, 0x528(r5)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x18(r1)
    stfs f0, 0x14(r1)
    stfs f6, 0x1c(r1)
    bl fn_805F9940
    lwz r3, 0xc4(r30)
    lfs f0, 0x5b0(r3)
    fsubs f31, f1, f0
lbl_fn_80017128_000000C8:
    lwz r4, 0xcc(r30)
    lfs f28, lbl_8088072C
    cmpwi r4, 0x0
    beq lbl_fn_80017128_00000114
    lfs f3, 0x530(r27)
    addi r3, r1, 0x8
    lfs f0, 0x530(r4)
    lfs f5, 0x52c(r27)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r4)
    lfs f3, 0x528(r27)
    lfs f0, 0x528(r4)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f6, 0x10(r1)
    bl fn_805F9940
    fmr f28, f1
lbl_fn_80017128_00000114:
    lwz r0, 0x7e0(r27)
    lfs f30, lbl_808806B8
    rlwinm r0, r0, 0, 26, 26
    fmr f29, f30
    cmplwi r0, 0x20
    beq lbl_fn_80017128_00000194
    lwz r0, 0x940(r27)
    cmpwi r0, 0x0
    ble lbl_fn_80017128_00000160
    xoris r0, r0, 0x8000
    stw r0, 0x24(r1)
    lis r3, lbl_8072FC70@ha
    lfs f5, lbl_80880730
    lfs f4, 0x7d8(r27)
    lfd f3, lbl_8072FC70@l(r3)
    lfd f0, 0x20(r1)
    fmuls f4, f5, f4
    fsubs f0, f0, f3
    fdivs f30, f4, f0
lbl_fn_80017128_00000160:
    lwz r0, 0x944(r27)
    cmpwi r0, 0x0
    ble lbl_fn_80017128_00000194
    xoris r0, r0, 0x8000
    stw r0, 0x2c(r1)
    lis r3, lbl_8072FC70@ha
    lfs f5, lbl_80880730
    lfs f4, 0x7dc(r27)
    lfd f3, lbl_8072FC70@l(r3)
    lfd f0, 0x28(r1)
    fmuls f4, f5, f4
    fsubs f0, f0, f3
    fdivs f29, f4, f0
lbl_fn_80017128_00000194:
    lwz r0, 0x0(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80017128_000001D0
    lwz r25, 0xac(r30)
    mr r3, r27
    bl fn_80179D44
    lwz r6, 0xb4(r30)
    mr r5, r3
    lfs f1, lbl_80880734
    mr r3, r28
    mr r7, r25
    addi r4, r27, 0x528
    li r8, 0x1
    bl fn_803C1560
    stw r3, 0xc(r30)
lbl_fn_80017128_000001D0:
    bl fn_8001C260
    stw r27, 0x0(r3)
    mr r28, r3
    lwz r0, 0x0(r30)
    stw r0, 0x4(r3)
    lhz r0, 0xe0(r30)
    extrwi r0, r0, 1, 17
    stw r0, 0x8(r3)
    lwz r0, 0x4(r30)
    stw r0, 0xc(r3)
    lfs f2, 0x530(r27)
    psq_l f1, 0x528(r27), 0, 0
    psq_st f1, 0x10(r3), 0, 0
    stfs f2, 0x18(r3)
    stfs f31, 0x1c(r3)
    lwz r0, 0xc4(r30)
    stw r0, 0x20(r3)
    stfs f28, 0x24(r3)
    lwz r0, 0xcc(r30)
    stw r0, 0x28(r3)
    lwz r4, 0xd0(r30)
    neg r0, r4
    or r0, r0, r4
    srwi r0, r0, 31
    stw r0, 0x2c(r3)
    lfs f0, 0x58(r31)
    fctiwz f0, f0
    stfd f0, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r0, 0x30(r3)
    lfs f0, 0x5c(r31)
    fctiwz f0, f0
    stfd f0, 0x38(r1)
    lwz r0, 0x3c(r1)
    stw r0, 0x34(r3)
    lfs f0, 0x60(r31)
    fctiwz f0, f0
    stfd f0, 0x40(r1)
    lwz r0, 0x44(r1)
    stw r0, 0x38(r3)
    lfs f0, 0x30(r31)
    fctiwz f0, f0
    stfd f0, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r0, 0x3c(r3)
    lfs f0, 0x34(r31)
    fctiwz f0, f0
    stfd f0, 0x50(r1)
    lwz r0, 0x54(r1)
    stw r0, 0x40(r3)
    lfs f0, 0x38(r31)
    fctiwz f0, f0
    stfd f0, 0x58(r1)
    lwz r0, 0x5c(r1)
    stw r0, 0x44(r3)
    lwz r0, 0x48(r27)
    cmpwi r0, 0x3
    bne lbl_fn_80017128_000002F4
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80017128_000002F4
    li r4, 0xa
    bl fn_80370174
    cmpwi r3, 0x0
    ble lbl_fn_80017128_000002F4
    lwz r3, 0x40(r28)
    slwi r0, r3, 2
    subf r0, r3, r0
    stw r0, 0x40(r28)
    lwz r3, 0x44(r28)
    slwi r0, r3, 2
    subf r0, r3, r0
    stw r0, 0x44(r28)
lbl_fn_80017128_000002F4:
    lwz r0, 0x44(r31)
    fctiwz f3, f30
    stw r0, 0x48(r28)
    fctiwz f0, f29
    li r0, 0x3
    mr r6, r30
    lwz r3, 0x48(r31)
    stw r3, 0x4c(r28)
    mr r7, r28
    lwz r3, 0x3c(r31)
    stw r3, 0x50(r28)
    lwz r3, 0x40(r31)
    stw r3, 0x54(r28)
    lfs f4, 0x64(r31)
    fctiwz f4, f4
    stfd f4, 0x58(r1)
    lwz r3, 0x5c(r1)
    stw r3, 0x7c(r28)
    lfs f4, 0x68(r31)
    fctiwz f4, f4
    stfd f4, 0x50(r1)
    lwz r3, 0x54(r1)
    stw r3, 0x80(r28)
    lfs f4, 0x6c(r31)
    fctiwz f4, f4
    stfd f4, 0x48(r1)
    lwz r5, 0x4c(r1)
    stw r5, 0x84(r28)
    lfs f4, 0x70(r31)
    fctiwz f4, f4
    stfd f4, 0x58(r1)
    lwz r3, 0x5c(r1)
    stw r3, 0x88(r28)
    lfs f4, 0x74(r31)
    fctiwz f4, f4
    stfd f4, 0x50(r1)
    lwz r3, 0x54(r1)
    stw r3, 0x8c(r28)
    lfs f4, 0x78(r31)
    fctiwz f4, f4
    stfd f4, 0x48(r1)
    lwz r5, 0x4c(r1)
    stw r5, 0x90(r28)
    lfs f4, 0x7c(r31)
    fctiwz f4, f4
    stfd f4, 0x58(r1)
    lwz r3, 0x5c(r1)
    stw r3, 0x94(r28)
    lfs f4, 0x80(r31)
    stfd f3, 0x58(r1)
    fctiwz f4, f4
    lwz r4, 0x5c(r1)
    stfd f4, 0x50(r1)
    lwz r3, 0x54(r1)
    stw r3, 0x98(r28)
    lfs f4, 0x84(r31)
    stfd f0, 0x50(r1)
    fctiwz f4, f4
    lwz r3, 0x54(r1)
    stfd f4, 0x48(r1)
    lwz r5, 0x4c(r1)
    stw r5, 0x9c(r28)
    stw r4, 0x58(r28)
    stw r3, 0x5c(r28)
    lwz r3, 0x8(r30)
    stw r3, 0x60(r28)
    lwz r3, 0x18(r30)
    stw r3, 0x64(r28)
    lwz r3, 0x674(r27)
    stw r3, 0x68(r28)
    lwz r3, 0xc0(r30)
    stw r3, 0x6c(r28)
    mtctr r0
lbl_fn_80017128_00000418:
    lfs f0, 0x140(r6)
    fctiwz f0, f0
    stfd f0, 0x58(r1)
    lwz r0, 0x5c(r1)
    stw r0, 0xa8(r7)
    lfs f0, 0x144(r6)
    fctiwz f0, f0
    stfd f0, 0x58(r1)
    lwz r0, 0x5c(r1)
    stw r0, 0xac(r7)
    lfs f0, 0x148(r6)
    fctiwz f0, f0
    stfd f0, 0x58(r1)
    lwz r0, 0x5c(r1)
    stw r0, 0xb0(r7)
    lfs f0, 0x14c(r6)
    fctiwz f0, f0
    stfd f0, 0x58(r1)
    lwz r0, 0x5c(r1)
    stw r0, 0xb4(r7)
    lfs f0, 0x150(r6)
    fctiwz f0, f0
    stfd f0, 0x58(r1)
    lwz r0, 0x5c(r1)
    stw r0, 0xb8(r7)
    lfs f0, 0x154(r6)
    fctiwz f0, f0
    stfd f0, 0x58(r1)
    lwz r0, 0x5c(r1)
    stw r0, 0xbc(r7)
    lfs f0, 0x158(r6)
    fctiwz f0, f0
    stfd f0, 0x58(r1)
    lwz r0, 0x5c(r1)
    stw r0, 0xc0(r7)
    lfs f0, 0x15c(r6)
    addi r6, r6, 0x20
    fctiwz f0, f0
    stfd f0, 0x58(r1)
    lwz r0, 0x5c(r1)
    stw r0, 0xc4(r7)
    addi r7, r7, 0x20
    bdnz lbl_fn_80017128_00000418
    li r0, 0x2
    mr r3, r26
    mr r4, r28
    mtctr r0
lbl_fn_80017128_000004D4:
    lfs f0, 0x9c(r3)
    fctiwz f0, f0
    stfd f0, 0x58(r1)
    lwz r0, 0x5c(r1)
    stw r0, 0x10c(r4)
    lfs f0, 0xa0(r3)
    fctiwz f0, f0
    stfd f0, 0x58(r1)
    lwz r0, 0x5c(r1)
    stw r0, 0x110(r4)
    lfs f0, 0xa4(r3)
    fctiwz f0, f0
    stfd f0, 0x58(r1)
    lwz r0, 0x5c(r1)
    stw r0, 0x114(r4)
    lfs f0, 0xa8(r3)
    fctiwz f0, f0
    stfd f0, 0x58(r1)
    lwz r0, 0x5c(r1)
    stw r0, 0x118(r4)
    lfs f0, 0xac(r3)
    fctiwz f0, f0
    stfd f0, 0x58(r1)
    lwz r0, 0x5c(r1)
    stw r0, 0x11c(r4)
    lfs f0, 0xb0(r3)
    fctiwz f0, f0
    stfd f0, 0x58(r1)
    lwz r0, 0x5c(r1)
    stw r0, 0x120(r4)
    lfs f0, 0xb4(r3)
    fctiwz f0, f0
    stfd f0, 0x58(r1)
    lwz r0, 0x5c(r1)
    stw r0, 0x124(r4)
    lfs f0, 0xb8(r3)
    addi r3, r3, 0x20
    fctiwz f0, f0
    stfd f0, 0x58(r1)
    lwz r0, 0x5c(r1)
    stw r0, 0x128(r4)
    addi r4, r4, 0x20
    bdnz lbl_fn_80017128_000004D4
    lwz r0, 0x1a0(r30)
    mr r3, r27
    stw r0, 0x170(r28)
    lwz r0, 0x1a4(r30)
    stw r0, 0x174(r28)
    lwz r0, 0x1a8(r30)
    stw r0, 0x178(r28)
    lwz r0, 0x1ac(r30)
    stw r0, 0x17c(r28)
    bl fn_800142C4
    lwz r3, 0xd4(r30)
    bl fn_800142CC
    addi r3, r31, 0x8
    bl fn_8001C1C0
    li r3, 0x0
    bl fn_800142C4
    li r3, 0x0
    bl fn_800142CC
    bl fn_8001C26C
    lwz r0, 0x0(r3)
    mr r28, r3
    cmpwi r0, 0x0
    ble lbl_fn_80017128_00000784
    lwz r0, 0x4(r3)
    stw r0, 0x0(r30)
    lwz r0, 0x674(r27)
    lwz r4, 0xc(r3)
    cmpw r4, r0
    beq lbl_fn_80017128_00000628
    cmpwi r4, 0x0
    blt lbl_fn_80017128_0000061C
    lwz r0, 0x650(r27)
    cmpw r4, r0
    bge lbl_fn_80017128_00000628
    mr r3, r27
    li r5, 0x0
    li r6, 0x0
    bl fn_8014DEE4
    b lbl_fn_80017128_00000628
lbl_fn_80017128_0000061C:
    mr r3, r27
    li r4, 0x0
    bl fn_8014EEC4
lbl_fn_80017128_00000628:
    lwz r4, 0x10(r28)
    lis r3, lbl_8072FC70@ha
    li r0, 0x4
    mr r5, r28
    mr r6, r30
    stw r4, 0xc0(r30)
    lfd f3, lbl_8072FC70@l(r3)
    mtctr r0
lbl_fn_80017128_00000648:
    lwz r0, 0x18(r5)
    xoris r0, r0, 0x8000
    stw r0, 0x24(r1)
    lfd f0, 0x20(r1)
    fsubs f0, f0, f3
    stfs f0, 0x140(r6)
    lwz r0, 0x1c(r5)
    xoris r0, r0, 0x8000
    stw r0, 0x24(r1)
    lfd f0, 0x20(r1)
    fsubs f0, f0, f3
    stfs f0, 0x144(r6)
    lwz r0, 0x20(r5)
    xoris r0, r0, 0x8000
    stw r0, 0x24(r1)
    lfd f0, 0x20(r1)
    fsubs f0, f0, f3
    stfs f0, 0x148(r6)
    lwz r0, 0x24(r5)
    xoris r0, r0, 0x8000
    stw r0, 0x24(r1)
    lfd f0, 0x20(r1)
    fsubs f0, f0, f3
    stfs f0, 0x14c(r6)
    lwz r0, 0x28(r5)
    xoris r0, r0, 0x8000
    stw r0, 0x24(r1)
    lfd f0, 0x20(r1)
    fsubs f0, f0, f3
    stfs f0, 0x150(r6)
    lwz r0, 0x2c(r5)
    addi r5, r5, 0x18
    xoris r0, r0, 0x8000
    stw r0, 0x24(r1)
    lfd f0, 0x20(r1)
    fsubs f0, f0, f3
    stfs f0, 0x154(r6)
    addi r6, r6, 0x18
    bdnz lbl_fn_80017128_00000648
    lis r3, lbl_8072FC70@ha
    li r0, 0x4
    mr r4, r28
    lfd f3, lbl_8072FC70@l(r3)
    mtctr r0
lbl_fn_80017128_000006F8:
    lwz r0, 0x7c(r4)
    xoris r0, r0, 0x8000
    stw r0, 0x2c(r1)
    lfd f0, 0x28(r1)
    fsubs f0, f0, f3
    stfs f0, 0x9c(r26)
    lwz r0, 0x80(r4)
    xoris r0, r0, 0x8000
    stw r0, 0x2c(r1)
    lfd f0, 0x28(r1)
    fsubs f0, f0, f3
    stfs f0, 0xa0(r26)
    lwz r0, 0x84(r4)
    xoris r0, r0, 0x8000
    stw r0, 0x2c(r1)
    lfd f0, 0x28(r1)
    fsubs f0, f0, f3
    stfs f0, 0xa4(r26)
    lwz r0, 0x88(r4)
    addi r4, r4, 0x10
    xoris r0, r0, 0x8000
    stw r0, 0x2c(r1)
    lfd f0, 0x28(r1)
    fsubs f0, f0, f3
    stfs f0, 0xa8(r26)
    addi r26, r26, 0x10
    bdnz lbl_fn_80017128_000006F8
    lwz r0, 0xe0(r28)
    stw r0, 0x1a0(r30)
    lwz r0, 0xe4(r28)
    stw r0, 0x1a4(r30)
    lwz r0, 0xe8(r28)
    stw r0, 0x1a8(r30)
    lwz r0, 0xec(r28)
    stw r0, 0x1ac(r30)
lbl_fn_80017128_00000784:
    lwz r0, 0x0(r30)
    cmpw r29, r0
    beq lbl_fn_80017128_000007A8
    lhz r0, 0xe0(r30)
    li r3, 0x0
    stw r3, 0x4(r30)
    rlwinm r0, r0, 0, 18, 16
    sth r0, 0xe0(r30)
    b lbl_fn_80017128_000007B4
lbl_fn_80017128_000007A8:
    lwz r3, 0x4(r30)
    addi r0, r3, 0x1
    stw r0, 0x4(r30)
lbl_fn_80017128_000007B4:
    lwz r3, 0xd0(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80017128_000007E0
    lwz r12, 0x0(r3)
    lwz r12, 0x5c(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_80017128_000007E0
    li r0, 0x0
    stw r0, 0xd0(r30)
lbl_fn_80017128_000007E0:
    li r3, 0x1
lbl_fn_80017128_000007E4:
    addi r11, r1, 0x80
    psq_l f31, 0xb8(r1), 0, 0
    lfd f31, 0xb0(r1)
    psq_l f30, 0xa8(r1), 0, 0
    lfd f30, 0xa0(r1)
    psq_l f29, 0x98(r1), 0, 0
    lfd f29, 0x90(r1)
    psq_l f28, 0x88(r1), 0, 0
    lfd f28, 0x80(r1)
    bl _restgpr_25
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

asm void fn_80017944(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_8001794C(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_25
    lwz r6, 0x80(r4)
    mr r27, r3
    lwz r5, 0x90(r3)
    mr r28, r4
    slwi r0, r6, 30
    srwi r3, r6, 31
    subf r0, r3, r0
    rotlwi r0, r0, 2
    add r0, r0, r3
    cmpw r5, r0
    beq lbl_fn_8001794C_00000878
    lwz r5, 0xc5c(r4)
    li r3, 0x0
    addi r0, r5, 0x1
    stw r0, 0xc5c(r4)
    b lbl_fn_8001794C_00000D50
lbl_fn_8001794C_00000878:
    lwz r3, lbl_8087F430
    addi r29, r4, 0xc58
    lwz r31, 0x64(r4)
    lwz r26, 0x10d8(r3)
    cmpwi r26, 0x0
    beq lbl_fn_8001794C_00000898
    cmpwi r31, 0x0
    bne lbl_fn_8001794C_000008A0
lbl_fn_8001794C_00000898:
    li r3, 0x0
    b lbl_fn_8001794C_00000D50
lbl_fn_8001794C_000008A0:
    lwz r30, 0x0(r29)
    cmpwi r30, 0x0
    bne lbl_fn_8001794C_000008DC
    lwz r25, 0xac(r29)
    mr r3, r28
    bl fn_80179D44
    lwz r6, 0xb4(r29)
    mr r5, r3
    lfs f1, lbl_80880734
    mr r3, r26
    mr r7, r25
    addi r4, r28, 0x528
    li r8, 0x1
    bl fn_803C1560
    stw r3, 0xc(r29)
lbl_fn_8001794C_000008DC:
    bl fn_8001C260
    stw r28, 0x0(r3)
    li r0, 0x3
    mr r5, r29
    mr r6, r3
    lwz r4, 0x0(r29)
    stw r4, 0x4(r3)
    lhz r4, 0xe0(r29)
    extrwi r4, r4, 1, 17
    stw r4, 0x8(r3)
    lwz r4, 0x4(r29)
    stw r4, 0xc(r3)
    lfs f2, 0x530(r28)
    psq_l f1, 0x528(r28), 0, 0
    psq_st f1, 0x10(r3), 0, 0
    stfs f2, 0x18(r3)
    lfs f0, 0x58(r31)
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r4, 0xc(r1)
    stw r4, 0x30(r3)
    lfs f0, 0x5c(r31)
    fctiwz f0, f0
    stfd f0, 0x10(r1)
    lwz r4, 0x14(r1)
    stw r4, 0x34(r3)
    lfs f0, 0x60(r31)
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r4, 0x1c(r1)
    stw r4, 0x38(r3)
    lfs f0, 0x64(r31)
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r4, 0x1c(r1)
    stw r4, 0x7c(r3)
    lfs f0, 0x68(r31)
    fctiwz f0, f0
    stfd f0, 0x10(r1)
    lwz r4, 0x14(r1)
    stw r4, 0x80(r3)
    lfs f0, 0x6c(r31)
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r4, 0xc(r1)
    stw r4, 0x84(r3)
    lfs f0, 0x70(r31)
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r4, 0x1c(r1)
    stw r4, 0x88(r3)
    lfs f0, 0x74(r31)
    fctiwz f0, f0
    stfd f0, 0x10(r1)
    lwz r4, 0x14(r1)
    stw r4, 0x8c(r3)
    lfs f0, 0x78(r31)
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r4, 0xc(r1)
    stw r4, 0x90(r3)
    lfs f0, 0x7c(r31)
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r4, 0x1c(r1)
    stw r4, 0x94(r3)
    lfs f0, 0x80(r31)
    fctiwz f0, f0
    stfd f0, 0x10(r1)
    lwz r4, 0x14(r1)
    stw r4, 0x98(r3)
    lfs f0, 0x84(r31)
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r4, 0xc(r1)
    stw r4, 0x9c(r3)
    lwz r4, 0x8(r29)
    stw r4, 0x60(r3)
    mtctr r0
lbl_fn_8001794C_00000A18:
    lfs f0, 0x140(r5)
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r0, 0x1c(r1)
    stw r0, 0xa8(r6)
    lfs f0, 0x144(r5)
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r0, 0x1c(r1)
    stw r0, 0xac(r6)
    lfs f0, 0x148(r5)
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r0, 0x1c(r1)
    stw r0, 0xb0(r6)
    lfs f0, 0x14c(r5)
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r0, 0x1c(r1)
    stw r0, 0xb4(r6)
    lfs f0, 0x150(r5)
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r0, 0x1c(r1)
    stw r0, 0xb8(r6)
    lfs f0, 0x154(r5)
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r0, 0x1c(r1)
    stw r0, 0xbc(r6)
    lfs f0, 0x158(r5)
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r0, 0x1c(r1)
    stw r0, 0xc0(r6)
    lfs f0, 0x15c(r5)
    addi r5, r5, 0x20
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r0, 0x1c(r1)
    stw r0, 0xc4(r6)
    addi r6, r6, 0x20
    bdnz lbl_fn_8001794C_00000A18
    li r0, 0x2
    mr r4, r27
    mtctr r0
lbl_fn_8001794C_00000AD0:
    lfs f0, 0x9c(r4)
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r0, 0x1c(r1)
    stw r0, 0x10c(r3)
    lfs f0, 0xa0(r4)
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r0, 0x1c(r1)
    stw r0, 0x110(r3)
    lfs f0, 0xa4(r4)
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r0, 0x1c(r1)
    stw r0, 0x114(r3)
    lfs f0, 0xa8(r4)
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r0, 0x1c(r1)
    stw r0, 0x118(r3)
    lfs f0, 0xac(r4)
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r0, 0x1c(r1)
    stw r0, 0x11c(r3)
    lfs f0, 0xb0(r4)
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r0, 0x1c(r1)
    stw r0, 0x120(r3)
    lfs f0, 0xb4(r4)
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r0, 0x1c(r1)
    stw r0, 0x124(r3)
    lfs f0, 0xb8(r4)
    addi r4, r4, 0x20
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r0, 0x1c(r1)
    stw r0, 0x128(r3)
    addi r3, r3, 0x20
    bdnz lbl_fn_8001794C_00000AD0
    mr r3, r28
    bl fn_800142C4
    lwz r3, 0xd4(r29)
    bl fn_800142CC
    addi r3, r31, 0x8
    bl fn_8001C1C0
    li r3, 0x0
    bl fn_800142C4
    li r3, 0x0
    bl fn_800142CC
    bl fn_8001C26C
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    ble lbl_fn_8001794C_00000D1C
    lwz r5, 0x4(r3)
    lis r4, lbl_8072FC70@ha
    lfd f3, lbl_8072FC70@l(r4)
    li r0, 0x4
    mr r6, r3
    mr r7, r29
    stw r5, 0x0(r29)
    lis r4, 0x4330
    mtctr r0
lbl_fn_8001794C_00000BD8:
    lwz r0, 0x18(r6)
    stw r4, 0x18(r1)
    xoris r0, r0, 0x8000
    stw r0, 0x1c(r1)
    lfd f0, 0x18(r1)
    fsubs f0, f0, f3
    stw r4, 0x18(r1)
    stfs f0, 0x140(r7)
    lwz r0, 0x1c(r6)
    xoris r0, r0, 0x8000
    stw r0, 0x1c(r1)
    lfd f0, 0x18(r1)
    fsubs f0, f0, f3
    stw r4, 0x18(r1)
    stfs f0, 0x144(r7)
    lwz r0, 0x20(r6)
    xoris r0, r0, 0x8000
    stw r0, 0x1c(r1)
    lfd f0, 0x18(r1)
    fsubs f0, f0, f3
    stw r4, 0x18(r1)
    stfs f0, 0x148(r7)
    lwz r0, 0x24(r6)
    xoris r0, r0, 0x8000
    stw r0, 0x1c(r1)
    lfd f0, 0x18(r1)
    fsubs f0, f0, f3
    stw r4, 0x18(r1)
    stfs f0, 0x14c(r7)
    lwz r0, 0x28(r6)
    xoris r0, r0, 0x8000
    stw r0, 0x1c(r1)
    lfd f0, 0x18(r1)
    fsubs f0, f0, f3
    stw r4, 0x18(r1)
    stfs f0, 0x150(r7)
    lwz r0, 0x2c(r6)
    addi r6, r6, 0x18
    xoris r0, r0, 0x8000
    stw r0, 0x1c(r1)
    lfd f0, 0x18(r1)
    fsubs f0, f0, f3
    stfs f0, 0x154(r7)
    addi r7, r7, 0x18
    bdnz lbl_fn_8001794C_00000BD8
    lis r4, lbl_8072FC70@ha
    li r0, 0x4
    lfd f3, lbl_8072FC70@l(r4)
    lis r4, 0x4330
    mtctr r0
lbl_fn_8001794C_00000CA0:
    lwz r0, 0x7c(r3)
    stw r4, 0x18(r1)
    xoris r0, r0, 0x8000
    stw r0, 0x1c(r1)
    lfd f0, 0x18(r1)
    fsubs f0, f0, f3
    stw r4, 0x18(r1)
    stfs f0, 0x9c(r27)
    lwz r0, 0x80(r3)
    xoris r0, r0, 0x8000
    stw r0, 0x1c(r1)
    lfd f0, 0x18(r1)
    fsubs f0, f0, f3
    stw r4, 0x18(r1)
    stfs f0, 0xa0(r27)
    lwz r0, 0x84(r3)
    xoris r0, r0, 0x8000
    stw r0, 0x1c(r1)
    lfd f0, 0x18(r1)
    fsubs f0, f0, f3
    stw r4, 0x18(r1)
    stfs f0, 0xa4(r27)
    lwz r0, 0x88(r3)
    addi r3, r3, 0x10
    xoris r0, r0, 0x8000
    stw r0, 0x1c(r1)
    lfd f0, 0x18(r1)
    fsubs f0, f0, f3
    stfs f0, 0xa8(r27)
    addi r27, r27, 0x10
    bdnz lbl_fn_8001794C_00000CA0
lbl_fn_8001794C_00000D1C:
    lwz r0, 0x0(r29)
    cmpw r30, r0
    beq lbl_fn_8001794C_00000D40
    lhz r0, 0xe0(r29)
    li r3, 0x0
    stw r3, 0x4(r29)
    rlwinm r0, r0, 0, 18, 16
    sth r0, 0xe0(r29)
    b lbl_fn_8001794C_00000D4C
lbl_fn_8001794C_00000D40:
    lwz r3, 0x4(r29)
    addi r0, r3, 0x1
    stw r0, 0x4(r29)
lbl_fn_8001794C_00000D4C:
    li r3, 0x1
lbl_fn_8001794C_00000D50:
    addi r11, r1, 0x40
    bl _restgpr_25
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80017E90(void)
{
    nofralloc
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beqlr
    lis r6, 0x2
    li r7, -0x1
    subi r6, r6, 0x7960
    b fn_80102A40
    blr
}

asm void fn_80017EB0(void)
{
    nofralloc
    lwz r3, lbl_8087F430
    lwz r3, 0x10d8(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80017EB0_00000DE4
    lwz r0, 0x64(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80017EB0_00000DE4
    cmpwi r5, 0x3e8
    bge lbl_fn_80017EB0_00000DB0
    mulli r5, r5, 0x3e8
lbl_fn_80017EB0_00000DB0:
    lwz r3, lbl_8087F4A0
    lwz r3, 0x48(r3)
    b lbl_fn_80017EB0_00000DDC
lbl_fn_80017EB0_00000DBC:
    lwz r0, 0x48(r3)
    cmpw r5, r0
    bne lbl_fn_80017EB0_00000DD8
    lwz r0, 0x4c(r3)
    cmpw r6, r0
    bne lbl_fn_80017EB0_00000DD8
    b lbl_fn_80017EB0_00000DE8
lbl_fn_80017EB0_00000DD8:
    lwz r3, 0x5c(r3)
lbl_fn_80017EB0_00000DDC:
    cmpwi r3, 0x0
    bne lbl_fn_80017EB0_00000DBC
lbl_fn_80017EB0_00000DE4:
    li r3, 0x0
lbl_fn_80017EB0_00000DE8:
    stw r3, 0xd28(r4)
    blr
}

asm void fn_80017F18(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x50
    stfd f31, 0x50(r1)
    psq_st f31, 0x58(r1), 0, 0
    bl _savegpr_26
    lwz r3, lbl_8087F430
    mr r26, r4
    mr r27, r5
    cmpwi r3, 0x0
    beq lbl_fn_80017F18_00000E28
    lwz r31, 0x10d8(r3)
    b lbl_fn_80017F18_00000E2C
lbl_fn_80017F18_00000E28:
    li r31, 0x0
lbl_fn_80017F18_00000E2C:
    cmpwi r31, 0x0
    beq lbl_fn_80017F18_00000F2C
    lfs f31, lbl_80880738
    li r29, -0x1
    li r28, 0x0
    li r30, 0x0
    b lbl_fn_80017F18_00000EBC
lbl_fn_80017F18_00000E48:
    lwz r0, 0xf8(r31)
    add r4, r0, r30
    lwz r0, 0x2c(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80017F18_00000EB4
    lwz r3, 0x24(r4)
    lwz r0, 0xd10(r26)
    cmpw r3, r0
    bne lbl_fn_80017F18_00000EB4
    lfs f3, 0xc(r4)
    addi r3, r1, 0x20
    lfs f0, 0x530(r26)
    lfs f5, 0x8(r4)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r26)
    lfs f3, 0x4(r4)
    lfs f0, 0x528(r26)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x24(r1)
    stfs f0, 0x20(r1)
    stfs f6, 0x28(r1)
    bl fn_805F9920
    fcmpo cr0, f31, f1
    ble lbl_fn_80017F18_00000EB4
    fmr f31, f1
    mr r29, r28
lbl_fn_80017F18_00000EB4:
    addi r30, r30, 0x30
    addi r28, r28, 0x1
lbl_fn_80017F18_00000EBC:
    lwz r0, 0xf4(r31)
    cmplw r28, r0
    blt lbl_fn_80017F18_00000E48
    cmpwi r29, 0x0
    blt lbl_fn_80017F18_00000F2C
    mulli r0, r29, 0x30
    lfs f4, lbl_808806B8
    lwz r4, 0xf8(r31)
    addi r5, r1, 0x14
    stfs f4, 0x8(r1)
    li r3, 0x1
    add r4, r4, r0
    stfs f4, 0x10(r1)
    lfs f0, 0xc(r4)
    lfs f5, 0x1c(r4)
    fadds f2, f0, f4
    lfs f3, 0x8(r4)
    lfs f0, 0x4(r4)
    fadds f3, f3, f5
    stfs f5, 0xc(r1)
    fadds f0, f0, f4
    stfs f3, 0x18(r1)
    stfs f0, 0x14(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0x1c(r1)
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0x8(r27)
    b lbl_fn_80017F18_00000F30
lbl_fn_80017F18_00000F2C:
    li r3, 0x0
lbl_fn_80017F18_00000F30:
    addi r11, r1, 0x50
    psq_l f31, 0x58(r1), 0, 0
    lfd f31, 0x50(r1)
    bl _restgpr_26
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80018078(void)
{
    nofralloc
    stwu r1, -0x100(r1)
    mflr r0
    stw r0, 0x104(r1)
    addi r11, r1, 0x100
    bl _savegpr_22
    lwz r3, lbl_8087F430
    mr r28, r4
    li r30, 0x0
    lwz r31, 0x10d8(r3)
    cmpwi r31, 0x0
    beq lbl_fn_80018078_000010FC
    lwz r0, 0xd10(r4)
    cmpwi r0, 0x0
    ble lbl_fn_80018078_000010FC
    lfs f11, lbl_808806B8
    addi r5, r1, 0x2c
    lfs f10, lbl_8088073C
    addi r3, r1, 0x48
    lfs f8, 0x52c(r4)
    addi r7, r1, 0x14
    lfs f7, 0x528(r4)
    addi r6, r1, 0x54
    lfs f0, lbl_80880740
    fadds f12, f8, f10
    fadds f7, f7, f11
    lfs f9, 0x530(r4)
    fadds f8, f8, f0
    stfs f12, 0x30(r1)
    fadds f2, f9, f11
    stfs f7, 0x2c(r1)
    addi r26, r1, 0x90
    addi r24, r1, 0x60
    psq_l f1, 0x0(r5), 0, 0
    addi r25, r1, 0x9c
    stfs f7, 0x14(r1)
    addi r23, r1, 0x38
    li r29, 0x0
    li r27, 0x0
    stfs f8, 0x18(r1)
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    stfs f11, 0x20(r1)
    stfs f10, 0x24(r1)
    stfs f11, 0x28(r1)
    stfs f2, 0x34(r1)
    stfs f2, 0x50(r1)
    stfs f11, 0x8(r1)
    stfs f0, 0xc(r1)
    stfs f11, 0x10(r1)
    stfs f2, 0x1c(r1)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x5c(r1)
    b lbl_fn_80018078_000010F0
lbl_fn_80018078_00001024:
    lwz r0, 0xf8(r31)
    add r22, r0, r27
    lwz r0, 0x2c(r22)
    cmpwi r0, 0x0
    beq lbl_fn_80018078_000010E8
    lwz r3, 0x24(r22)
    lwz r0, 0xd10(r28)
    cmpw r3, r0
    bne lbl_fn_80018078_000010E8
    psq_l f1, 0x18(r22), 0, 0
    addi r3, r1, 0x60
    lfs f2, 0x20(r22)
    li r4, 0x79
    stfs f2, 0x98(r1)
    psq_st f1, 0x0(r26), 0, 0
    lfs f1, 0x14(r22)
    bl fn_805F8E70
    psq_l f1, 0x0(r24), 0, 0
    mr r4, r26
    psq_l f2, 0x8(r24), 0, 0
    addi r3, r1, 0x48
    psq_l f3, 0x10(r24), 0, 0
    li r30, 0x1
    psq_l f4, 0x18(r24), 0, 0
    psq_l f5, 0x20(r24), 0, 0
    psq_l f6, 0x28(r24), 0, 0
    psq_st f1, 0x0(r25), 0, 0
    psq_st f2, 0x8(r25), 0, 0
    psq_st f3, 0x10(r25), 0, 0
    psq_st f4, 0x18(r25), 0, 0
    psq_st f5, 0x20(r25), 0, 0
    psq_st f6, 0x28(r25), 0, 0
    psq_l f1, 0x4(r22), 0, 0
    psq_st f1, 0x0(r23), 0, 0
    lfs f2, 0xc(r22)
    lfs f7, 0x1c(r22)
    lfs f8, 0x3c(r1)
    lfs f0, 0x38(r1)
    fadds f7, f8, f7
    stfs f2, 0x40(r1)
    stfs f7, 0x3c(r1)
    stfs f0, 0xa8(r1)
    stfs f7, 0xb8(r1)
    stfs f2, 0xc8(r1)
    bl fn_80051E90
    cmpwi r3, 0x0
    beq lbl_fn_80018078_000010E8
    li r30, 0x0
    b lbl_fn_80018078_000010FC
lbl_fn_80018078_000010E8:
    addi r29, r29, 0x1
    addi r27, r27, 0x30
lbl_fn_80018078_000010F0:
    lwz r0, 0xf4(r31)
    cmplw r29, r0
    blt lbl_fn_80018078_00001024
lbl_fn_80018078_000010FC:
    addi r11, r1, 0x100
    mr r3, r30
    bl _restgpr_22
    lwz r0, 0x104(r1)
    mtlr r0
    addi r1, r1, 0x100
    blr
}

asm void fn_80018240(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x40
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    bl _savegpr_25
    lfs f31, lbl_80880738
    mr r25, r4
    mr r26, r5
    mr r27, r6
    li r29, 0x0
    li r28, 0x0
    li r30, 0x0
lbl_fn_80018240_00001150:
    cmplwi r28, 0x20
    lwz r0, lbl_8087F9E8
    blt lbl_fn_80018240_00001164
    li r31, 0x0
    b lbl_fn_80018240_0000116C
lbl_fn_80018240_00001164:
    add r3, r0, r30
    addi r31, r3, 0x48
lbl_fn_80018240_0000116C:
    cmpwi r31, 0x0
    beq lbl_fn_80018240_00001208
    lwz r0, 0x4(r31)
    li r3, 0x0
    cmpwi r0, 0x0
    beq lbl_fn_80018240_00001194
    lwz r0, 0x0(r31)
    cmpwi r0, 0x3
    beq lbl_fn_80018240_00001194
    li r3, 0x1
lbl_fn_80018240_00001194:
    cmpwi r3, 0x0
    beq lbl_fn_80018240_00001208
    mr r3, r31
    mr r4, r25
    bl fn_80599C94
    cmpwi r3, 0x0
    beq lbl_fn_80018240_00001208
    lwz r3, 0x4(r31)
    bl fn_8021A984
    cmpwi r3, 0x0
    beq lbl_fn_80018240_00001208
    lfs f3, 0x530(r25)
    addi r3, r1, 0x8
    lfs f0, 0x18(r31)
    lfs f5, 0x52c(r25)
    fsubs f6, f3, f0
    lfs f4, 0x14(r31)
    lfs f3, 0x528(r25)
    lfs f0, 0x10(r31)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f6, 0x10(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f31
    bge lbl_fn_80018240_00001208
    fmr f31, f1
    mr r29, r31
lbl_fn_80018240_00001208:
    addi r28, r28, 0x1
    addi r30, r30, 0x140
    cmplwi r28, 0x20
    blt lbl_fn_80018240_00001150
    cmpwi r29, 0x0
    beq lbl_fn_80018240_00001248
    psq_l f1, 0x10(r29), 0, 0
    li r3, 0x1
    lfs f2, 0x18(r29)
    stfs f2, 0x8(r26)
    psq_st f1, 0x0(r26), 0, 0
    lfs f3, 0x5c(r29)
    lfs f0, 0x28(r29)
    fmuls f0, f3, f0
    stfs f0, 0x0(r27)
    b lbl_fn_80018240_0000124C
lbl_fn_80018240_00001248:
    li r3, 0x0
lbl_fn_80018240_0000124C:
    addi r11, r1, 0x40
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    bl _restgpr_25
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80018394(void)
{
    nofralloc
    lwz r0, 0xe0(r3)
    addi r5, r3, 0xe4
    mulli r0, r0, 0x34
    add r3, r3, r0
    addi r3, r3, 0xe4
    b lbl_fn_80018394_000012A8
lbl_fn_80018394_00001284:
    lwz r0, 0x8(r5)
    cmpwi r0, 0x0
    bne lbl_fn_80018394_000012A4
    lwz r0, 0xc(r5)
    cmplw r0, r4
    bne lbl_fn_80018394_000012A4
    mr r3, r5
    blr
lbl_fn_80018394_000012A4:
    addi r5, r5, 0x34
lbl_fn_80018394_000012A8:
    cmplw r5, r3
    bne lbl_fn_80018394_00001284
    li r3, 0x0
    blr
}

asm void fn_800183E0(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_27
    lis r8, lbl_80775B18@ha
    mr r27, r3
    addi r8, r8, lbl_80775B18@l
    stw r8, 0x8(r1)
    mr r28, r4
    mr r29, r5
    mr r30, r6
    mr r31, r7
    addi r3, r1, 0x8
    bl fn_8003E918
    cmpwi r31, 0x0
    li r0, 0x0
    stw r0, 0x10(r1)
    stw r29, 0x14(r1)
    stw r28, 0xc(r1)
    stw r30, 0x30(r1)
    ble lbl_fn_800183E0_00001314
    b lbl_fn_800183E0_00001318
lbl_fn_800183E0_00001314:
    lwz r31, 0x7d0(r27)
lbl_fn_800183E0_00001318:
    stw r31, 0x38(r1)
    mr r3, r27
    lwz r4, 0xc(r1)
    li r5, 0x0
    bl fn_80018608
    lwz r0, 0x48c(r27)
    addi r6, r27, 0x48c
    mulli r0, r0, 0x34
    add r0, r6, r0
    addic. r4, r0, 0x4
    beq lbl_fn_800183E0_000013A8
    lis r3, lbl_80775B18@ha
    addi r5, r1, 0x18
    addi r3, r3, lbl_80775B18@l
    stw r3, 0x0(r4)
    addi r3, r1, 0x24
    lwz r0, 0xc(r1)
    stw r0, 0x4(r4)
    lwz r0, 0x10(r1)
    stw r0, 0x8(r4)
    lwz r0, 0x14(r1)
    stw r0, 0xc(r4)
    lfs f2, 0x20(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x10(r4), 0, 0
    stfs f2, 0x18(r4)
    lfs f2, 0x2c(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x1c(r4), 0, 0
    stfs f2, 0x24(r4)
    lwz r0, 0x30(r1)
    stw r0, 0x28(r4)
    lwz r0, 0x34(r1)
    stw r0, 0x2c(r4)
    lwz r0, 0x38(r1)
    stw r0, 0x30(r4)
lbl_fn_800183E0_000013A8:
    lwz r3, 0x0(r6)
    addi r11, r1, 0x60
    addi r0, r3, 0x1
    stw r0, 0x0(r6)
    bl _restgpr_27
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_800184F4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    lwz r4, 0x4(r4)
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_80018608
    lwz r0, 0x48c(r30)
    addi r4, r30, 0x48c
    mulli r0, r0, 0x34
    add r0, r4, r0
    addic. r5, r0, 0x4
    beq lbl_fn_800184F4_00001468
    lis r3, lbl_80775B18@ha
    lwz r0, 0x4(r31)
    addi r3, r3, lbl_80775B18@l
    stw r3, 0x0(r5)
    lwz r3, 0x8(r31)
    stw r0, 0x4(r5)
    lwz r0, 0xc(r31)
    stw r3, 0x8(r5)
    psq_l f1, 0x10(r31), 0, 0
    stw r0, 0xc(r5)
    lfs f2, 0x18(r31)
    psq_st f1, 0x10(r5), 0, 0
    psq_l f1, 0x1c(r31), 0, 0
    stfs f2, 0x18(r5)
    lfs f2, 0x24(r31)
    psq_st f1, 0x1c(r5), 0, 0
    lwz r0, 0x28(r31)
    stfs f2, 0x24(r5)
    lwz r3, 0x2c(r31)
    stw r0, 0x28(r5)
    lwz r0, 0x30(r31)
    stw r3, 0x2c(r5)
    stw r0, 0x30(r5)
lbl_fn_800184F4_00001468:
    lwz r3, 0x0(r4)
    addi r0, r3, 0x1
    stw r0, 0x0(r4)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800185B4(void)
{
    nofralloc
    lwz r0, 0x48c(r3)
    addi r6, r3, 0x490
    mulli r0, r0, 0x34
    add r3, r3, r0
    addi r3, r3, 0x490
    b lbl_fn_800185B4_000014D0
lbl_fn_800185B4_000014A4:
    lwz r0, 0x4(r6)
    cmplw r0, r4
    bne lbl_fn_800185B4_000014CC
    cmpwi r5, 0x0
    beq lbl_fn_800185B4_000014C4
    lwz r0, 0x28(r6)
    cmplw r0, r5
    bne lbl_fn_800185B4_000014CC
lbl_fn_800185B4_000014C4:
    mr r3, r6
    blr
lbl_fn_800185B4_000014CC:
    addi r6, r6, 0x34
lbl_fn_800185B4_000014D0:
    cmplw r6, r3
    bne lbl_fn_800185B4_000014A4
    li r3, 0x0
    blr
}

asm void fn_80018608(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    mr r29, r5
    addi r30, r3, 0x490
    lis r31, 0x4ec5
    b lbl_fn_80018608_000016DC
lbl_fn_80018608_0000150C:
    lwz r4, 0x4(r30)
    cmplw r4, r28
    bne lbl_fn_80018608_000016D8
    cmpwi r29, 0x0
    bne lbl_fn_80018608_000015DC
    lwz r3, lbl_8087F9F8
    cmpwi r3, 0x0
    beq lbl_fn_80018608_00001534
    li r5, 0x6
    bl fn_805AA018
lbl_fn_80018608_00001534:
    addi r6, r27, 0x48c
    subi r3, r31, 0x13b1
    addi r0, r6, 0x4
    subf r0, r0, r30
    mulhw r0, r3, r0
    srawi r0, r0, 4
    srwi r3, r0, 31
    add r7, r0, r3
    mulli r3, r7, 0x34
    b lbl_fn_80018608_000015C4
lbl_fn_80018608_0000155C:
    addi r0, r7, 0x1
    add r4, r6, r3
    mulli r0, r0, 0x34
    addi r7, r7, 0x1
    addi r3, r3, 0x34
    add r5, r6, r0
    lwz r0, 0x8(r5)
    stw r0, 0x8(r4)
    lwz r0, 0xc(r5)
    stw r0, 0xc(r4)
    lwz r0, 0x10(r5)
    stw r0, 0x10(r4)
    lfs f2, 0x1c(r5)
    psq_l f1, 0x14(r5), 0, 0
    psq_st f1, 0x14(r4), 0, 0
    stfs f2, 0x1c(r4)
    lfs f2, 0x28(r5)
    psq_l f1, 0x20(r5), 0, 0
    psq_st f1, 0x20(r4), 0, 0
    stfs f2, 0x28(r4)
    lwz r0, 0x2c(r5)
    stw r0, 0x2c(r4)
    lwz r0, 0x30(r5)
    stw r0, 0x30(r4)
    lwz r0, 0x34(r5)
    stw r0, 0x34(r4)
lbl_fn_80018608_000015C4:
    lwz r4, 0x0(r6)
    subi r0, r4, 0x1
    cmplw r7, r0
    blt lbl_fn_80018608_0000155C
    stw r0, 0x0(r6)
    b lbl_fn_80018608_000016DC
lbl_fn_80018608_000015DC:
    lwz r3, 0xc8(r29)
    cmpwi r3, 0x0
    ble lbl_fn_80018608_000015F0
    bl fn_80219E6C
    b lbl_fn_80018608_000015F4
lbl_fn_80018608_000015F0:
    li r3, 0x0
lbl_fn_80018608_000015F4:
    lwz r0, 0x28(r30)
    cmplw r0, r29
    beq lbl_fn_80018608_00001610
    cmpwi r3, 0x0
    beq lbl_fn_80018608_000016D0
    cmplw r0, r3
    bne lbl_fn_80018608_000016D0
lbl_fn_80018608_00001610:
    lwz r3, lbl_8087F9F8
    cmpwi r3, 0x0
    beq lbl_fn_80018608_00001628
    lwz r4, 0x4(r30)
    li r5, 0x6
    bl fn_805AA018
lbl_fn_80018608_00001628:
    addi r6, r27, 0x48c
    subi r3, r31, 0x13b1
    addi r0, r6, 0x4
    subf r0, r0, r30
    mulhw r0, r3, r0
    srawi r0, r0, 4
    srwi r3, r0, 31
    add r7, r0, r3
    mulli r3, r7, 0x34
    b lbl_fn_80018608_000016B8
lbl_fn_80018608_00001650:
    addi r0, r7, 0x1
    add r4, r6, r3
    mulli r0, r0, 0x34
    addi r7, r7, 0x1
    addi r3, r3, 0x34
    add r5, r6, r0
    lwz r0, 0x8(r5)
    stw r0, 0x8(r4)
    lwz r0, 0xc(r5)
    stw r0, 0xc(r4)
    lwz r0, 0x10(r5)
    stw r0, 0x10(r4)
    lfs f2, 0x1c(r5)
    psq_l f1, 0x14(r5), 0, 0
    psq_st f1, 0x14(r4), 0, 0
    stfs f2, 0x1c(r4)
    lfs f2, 0x28(r5)
    psq_l f1, 0x20(r5), 0, 0
    psq_st f1, 0x20(r4), 0, 0
    stfs f2, 0x28(r4)
    lwz r0, 0x2c(r5)
    stw r0, 0x2c(r4)
    lwz r0, 0x30(r5)
    stw r0, 0x30(r4)
    lwz r0, 0x34(r5)
    stw r0, 0x34(r4)
lbl_fn_80018608_000016B8:
    lwz r4, 0x0(r6)
    subi r0, r4, 0x1
    cmplw r7, r0
    blt lbl_fn_80018608_00001650
    stw r0, 0x0(r6)
    b lbl_fn_80018608_000016DC
lbl_fn_80018608_000016D0:
    addi r30, r30, 0x34
    b lbl_fn_80018608_000016DC
lbl_fn_80018608_000016D8:
    addi r30, r30, 0x34
lbl_fn_80018608_000016DC:
    lwz r0, 0x48c(r27)
    mulli r0, r0, 0x34
    add r3, r27, r0
    addi r0, r3, 0x490
    cmplw r30, r0
    bne lbl_fn_80018608_0000150C
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80018834(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    addi r4, r3, 0xe4
    lis r8, 0x4ec5
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    b lbl_fn_80018834_000018A8
lbl_fn_80018834_00001734:
    lwz r0, 0x8(r4)
    li r11, 0x0
    cmpwi r0, 0x0
    bne lbl_fn_80018834_000017D8
    lwz r9, 0xc(r4)
    cmpwi r9, 0x0
    beq lbl_fn_80018834_000017D8
    lwz r10, 0x38(r9)
    li r6, 0x0
    li r5, 0x0
    li r7, 0x0
    rlwinm r0, r10, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80018834_0000177C
    clrlwi r0, r10, 31
    cmplwi r0, 0x1
    beq lbl_fn_80018834_0000177C
    li r7, 0x1
lbl_fn_80018834_0000177C:
    cmpwi r7, 0x0
    beq lbl_fn_80018834_00001798
    lwz r0, 0x7e0(r9)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_80018834_00001798
    li r5, 0x1
lbl_fn_80018834_00001798:
    cmpwi r5, 0x0
    beq lbl_fn_80018834_000017CC
    lwz r0, 0x55c(r9)
    li r5, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_80018834_000017C0
    lwz r0, 0x560(r9)
    cmpwi r0, 0x1c
    bne lbl_fn_80018834_000017C0
    li r5, 0x1
lbl_fn_80018834_000017C0:
    cmpwi r5, 0x0
    bne lbl_fn_80018834_000017CC
    li r6, 0x1
lbl_fn_80018834_000017CC:
    cmpwi r6, 0x0
    bne lbl_fn_80018834_000017D8
    li r11, 0x1
lbl_fn_80018834_000017D8:
    lwz r0, 0x30(r4)
    cmpwi r0, 0x0
    blt lbl_fn_80018834_000017F4
    subic. r0, r0, 0x1
    stw r0, 0x30(r4)
    bne lbl_fn_80018834_000017F4
    li r11, 0x1
lbl_fn_80018834_000017F4:
    cmpwi r11, 0x0
    beq lbl_fn_80018834_000018A4
    addi r9, r3, 0xe0
    subi r5, r8, 0x13b1
    addi r0, r9, 0x4
    subf r0, r0, r4
    mulhw r0, r5, r0
    srawi r0, r0, 4
    srwi r5, r0, 31
    add r10, r0, r5
    mulli r5, r10, 0x34
    b lbl_fn_80018834_0000188C
lbl_fn_80018834_00001824:
    addi r0, r10, 0x1
    add r6, r9, r5
    mulli r0, r0, 0x34
    addi r10, r10, 0x1
    addi r5, r5, 0x34
    add r7, r9, r0
    lwz r0, 0x8(r7)
    stw r0, 0x8(r6)
    lwz r0, 0xc(r7)
    stw r0, 0xc(r6)
    lwz r0, 0x10(r7)
    stw r0, 0x10(r6)
    lfs f2, 0x1c(r7)
    psq_l f1, 0x14(r7), 0, 0
    psq_st f1, 0x14(r6), 0, 0
    stfs f2, 0x1c(r6)
    lfs f2, 0x28(r7)
    psq_l f1, 0x20(r7), 0, 0
    psq_st f1, 0x20(r6), 0, 0
    stfs f2, 0x28(r6)
    lwz r0, 0x2c(r7)
    stw r0, 0x2c(r6)
    lwz r0, 0x30(r7)
    stw r0, 0x30(r6)
    lwz r0, 0x34(r7)
    stw r0, 0x34(r6)
lbl_fn_80018834_0000188C:
    lwz r6, 0x0(r9)
    subi r0, r6, 0x1
    cmplw r10, r0
    blt lbl_fn_80018834_00001824
    stw r0, 0x0(r9)
    b lbl_fn_80018834_000018A8
lbl_fn_80018834_000018A4:
    addi r4, r4, 0x34
lbl_fn_80018834_000018A8:
    lwz r0, 0xe0(r3)
    mulli r0, r0, 0x34
    add r5, r3, r0
    addi r0, r5, 0xe4
    cmplw r4, r0
    bne lbl_fn_80018834_00001734
    lwz r0, 0x42c(r3)
    cmpwi r0, 0x4
    beq lbl_fn_80018834_000018EC
    lwz r4, 0x454(r3)
    cmpwi r4, 0x0
    blt lbl_fn_80018834_000018EC
    subic. r0, r4, 0x1
    stw r0, 0x454(r3)
    bge lbl_fn_80018834_000018EC
    addi r3, r3, 0x424
    bl fn_8003E918
lbl_fn_80018834_000018EC:
    lwz r0, 0x460(r29)
    cmpwi r0, 0x4
    beq lbl_fn_80018834_00001928
    lwz r3, lbl_8087F8A0
    lwz r30, 0x464(r29)
    lwz r31, 0x48(r3)
    b lbl_fn_80018834_00001918
lbl_fn_80018834_00001908:
    mr r3, r31
    mr r4, r30
    bl fn_800EE794
    lwz r31, 0x14ac(r31)
lbl_fn_80018834_00001918:
    cmpwi r31, 0x0
    bne lbl_fn_80018834_00001908
    addi r3, r29, 0x458
    bl fn_8003E918
lbl_fn_80018834_00001928:
    addi r30, r29, 0x490
    lis r31, 0x4ec5
    b lbl_fn_80018834_00001A50
lbl_fn_80018834_00001934:
    lwz r3, 0x4(r30)
    li r4, 0x0
    cmpwi r3, 0x0
    beq lbl_fn_80018834_00001958
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_80018834_00001958
    li r4, 0x1
lbl_fn_80018834_00001958:
    lwz r0, 0x30(r30)
    cmpwi r0, 0x0
    blt lbl_fn_80018834_00001974
    subic. r0, r0, 0x1
    stw r0, 0x30(r30)
    bne lbl_fn_80018834_00001974
    li r4, 0x1
lbl_fn_80018834_00001974:
    cmpwi r4, 0x0
    beq lbl_fn_80018834_00001A4C
    lwz r4, 0x4(r30)
    cmpwi r4, 0x0
    beq lbl_fn_80018834_00001A44
    lwz r3, lbl_8087F9F8
    cmpwi r3, 0x0
    beq lbl_fn_80018834_0000199C
    li r5, 0x6
    bl fn_805AA018
lbl_fn_80018834_0000199C:
    addi r6, r29, 0x48c
    subi r3, r31, 0x13b1
    addi r0, r6, 0x4
    subf r0, r0, r30
    mulhw r0, r3, r0
    srawi r0, r0, 4
    srwi r3, r0, 31
    add r7, r0, r3
    mulli r3, r7, 0x34
    b lbl_fn_80018834_00001A2C
lbl_fn_80018834_000019C4:
    addi r0, r7, 0x1
    add r4, r6, r3
    mulli r0, r0, 0x34
    addi r7, r7, 0x1
    addi r3, r3, 0x34
    add r5, r6, r0
    lwz r0, 0x8(r5)
    stw r0, 0x8(r4)
    lwz r0, 0xc(r5)
    stw r0, 0xc(r4)
    lwz r0, 0x10(r5)
    stw r0, 0x10(r4)
    lfs f2, 0x1c(r5)
    psq_l f1, 0x14(r5), 0, 0
    psq_st f1, 0x14(r4), 0, 0
    stfs f2, 0x1c(r4)
    lfs f2, 0x28(r5)
    psq_l f1, 0x20(r5), 0, 0
    psq_st f1, 0x20(r4), 0, 0
    stfs f2, 0x28(r4)
    lwz r0, 0x2c(r5)
    stw r0, 0x2c(r4)
    lwz r0, 0x30(r5)
    stw r0, 0x30(r4)
    lwz r0, 0x34(r5)
    stw r0, 0x34(r4)
lbl_fn_80018834_00001A2C:
    lwz r4, 0x0(r6)
    subi r0, r4, 0x1
    cmplw r7, r0
    blt lbl_fn_80018834_000019C4
    stw r0, 0x0(r6)
    b lbl_fn_80018834_00001A50
lbl_fn_80018834_00001A44:
    addi r30, r30, 0x34
    b lbl_fn_80018834_00001A50
lbl_fn_80018834_00001A4C:
    addi r30, r30, 0x34
lbl_fn_80018834_00001A50:
    lwz r0, 0x48c(r29)
    mulli r0, r0, 0x34
    add r3, r29, r0
    addi r0, r3, 0x490
    cmplw r30, r0
    bne lbl_fn_80018834_00001934
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80018BAC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    li r29, 0x0
    stw r28, 0x10(r1)
    mr r28, r4
lbl_fn_80018BAC_00001AAC:
    cmplwi r29, 0x20
    lwz r0, lbl_8087F9E8
    blt lbl_fn_80018BAC_00001AC0
    li r31, 0x0
    b lbl_fn_80018BAC_00001AC8
lbl_fn_80018BAC_00001AC0:
    add r3, r0, r30
    addi r31, r3, 0x48
lbl_fn_80018BAC_00001AC8:
    cmpwi r31, 0x0
    beq lbl_fn_80018BAC_00001B24
    lwz r3, 0x4(r31)
    li r4, 0x0
    cmpwi r3, 0x0
    beq lbl_fn_80018BAC_00001AF0
    lwz r0, 0x0(r31)
    cmpwi r0, 0x3
    beq lbl_fn_80018BAC_00001AF0
    li r4, 0x1
lbl_fn_80018BAC_00001AF0:
    cmpwi r4, 0x0
    beq lbl_fn_80018BAC_00001B24
    bl fn_8021A984
    cmpwi r3, 0x0
    beq lbl_fn_80018BAC_00001B24
    mr r3, r31
    mr r4, r28
    li r5, 0x1
    bl fn_80599D64
    cmpwi r3, 0x0
    beq lbl_fn_80018BAC_00001B24
    li r3, 0x0
    b lbl_fn_80018BAC_00001B38
lbl_fn_80018BAC_00001B24:
    addi r29, r29, 0x1
    addi r30, r30, 0x140
    cmplwi r29, 0x20
    blt lbl_fn_80018BAC_00001AAC
    li r3, 0x1
lbl_fn_80018BAC_00001B38:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80018C80(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x20
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    stfd f30, 0x30(r1)
    psq_st f30, 0x38(r1), 0, 0
    stfd f29, 0x20(r1)
    psq_st f29, 0x28(r1), 0, 0
    bl _savegpr_27
    fmr f29, f1
    cmpwi r4, 0x0
    fmr f30, f2
    mr r27, r3
    fmr f31, f3
    mr r28, r4
    mr r29, r5
    mr r30, r6
    beq lbl_fn_80018C80_00001C00
    lwz r0, 0xd30(r4)
    li r31, 0x0
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_80018C80_00001BC0
    lwz r31, 0xd10(r4)
lbl_fn_80018C80_00001BC0:
    mr r3, r28
    bl fn_80179D44
    fmr f2, f29
    mr r9, r3
    fmr f3, f30
    lfs f1, 0x538(r28)
    fmr f4, f31
    lwz r5, 0xd0c(r28)
    mr r3, r27
    mr r6, r31
    mr r7, r29
    mr r8, r30
    addi r4, r28, 0x528
    li r10, 0x1
    bl fn_80018D5C
    b lbl_fn_80018C80_00001C04
lbl_fn_80018C80_00001C00:
    li r3, 0x0
lbl_fn_80018C80_00001C04:
    addi r11, r1, 0x20
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    psq_l f30, 0x38(r1), 0, 0
    lfd f30, 0x30(r1)
    psq_l f29, 0x28(r1), 0, 0
    lfd f29, 0x20(r1)
    bl _restgpr_27
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80018D5C(void)
{
    nofralloc
    stwu r1, -0x4f0(r1)
    mflr r0
    stw r0, 0x4f4(r1)
    addi r11, r1, 0x4b0
    stfd f31, 0x4e0(r1)
    psq_st f31, 0x4e8(r1), 0, 0
    stfd f30, 0x4d0(r1)
    psq_st f30, 0x4d8(r1), 0, 0
    stfd f29, 0x4c0(r1)
    psq_st f29, 0x4c8(r1), 0, 0
    stfd f28, 0x4b0(r1)
    psq_st f28, 0x4b8(r1), 0, 0
    bl _savegpr_18
    lwz r3, lbl_8087F430
    fmr f29, f1
    fmr f28, f2
    mr r20, r5
    lwz r28, 0x10d8(r3)
    fmr f30, f3
    fmr f31, f4
    cmpwi r28, 0x0
    mr r21, r6
    mr r22, r7
    mr r23, r8
    li r26, 0x0
    beq lbl_fn_80018D5C_000020F0
    lfs f1, lbl_80880734
    mr r3, r28
    mr r5, r9
    mr r8, r10
    li r6, 0x0
    li r7, 0x0
    bl fn_803C1560
    subi r0, r3, 0x1
    mr r31, r3
    mulli r0, r0, 0x30
    lwz r4, 0x9c(r28)
    addi r5, r1, 0x38
    addi r3, r1, 0x48
    add r6, r4, r0
    li r4, 0x79
    psq_l f1, 0x4(r6), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    fmr f1, f29
    lfs f2, 0xc(r6)
    stfs f2, 0x40(r1)
    bl fn_805F8E70
    lfs f0, lbl_808806B8
    addi r4, r1, 0x2c
    stfs f0, 0x14(r1)
    addi r6, r1, 0x14
    lfs f2, lbl_808806BC
    mr r5, r4
    stfs f0, 0x18(r1)
    addi r3, r1, 0x48
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x1c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x34(r1)
    bl fn_805F93C0
    lfs f3, lbl_808806DC
    lfs f0, lbl_80880700
    fmuls f3, f3, f28
    fmuls f1, f0, f3
    bl fn_8068A850
    lwz r0, 0x74(r28)
    frsp f28, f1
    li r4, 0x0
    li r5, 0x1
    mtctr r0
    cmpwi r0, 0x1
    blt lbl_fn_80018D5C_00001D98
lbl_fn_80018D5C_00001D54:
    subi r0, r5, 0x1
    lwz r3, 0x9c(r28)
    mulli r0, r0, 0x30
    add r3, r3, r0
    lwz r0, 0x2c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80018D5C_00001D90
    cmpwi r20, 0x0
    ble lbl_fn_80018D5C_00001D84
    lwz r0, 0x20(r3)
    cmpw r0, r20
    bne lbl_fn_80018D5C_00001D90
lbl_fn_80018D5C_00001D84:
    lwz r0, 0x1c(r3)
    add. r4, r4, r0
    bgt lbl_fn_80018D5C_00001D98
lbl_fn_80018D5C_00001D90:
    addi r5, r5, 0x1
    bdnz lbl_fn_80018D5C_00001D54
lbl_fn_80018D5C_00001D98:
    cmpwi r4, 0x0
    bgt lbl_fn_80018D5C_00001DA4
    li r22, -0x1
lbl_fn_80018D5C_00001DA4:
    addi r29, r1, 0x8
    addi r30, r1, 0x20
    addi r18, r1, 0x78
    li r25, 0x0
    li r19, 0x0
    li r24, 0x1
    b lbl_fn_80018D5C_00001EEC
lbl_fn_80018D5C_00001DC0:
    subi r4, r24, 0x1
    lwz r3, 0x9c(r28)
    mulli r0, r4, 0x30
    add r27, r3, r0
    lwz r0, 0x2c(r27)
    cmpwi r0, 0x0
    beq lbl_fn_80018D5C_00001EE8
    cmpw r31, r24
    beq lbl_fn_80018D5C_00001EE8
    cmpwi r31, 0x0
    beq lbl_fn_80018D5C_00001EE8
    subi r0, r31, 0x1
    lwz r3, 0xa4(r28)
    slwi r0, r0, 3
    add r3, r3, r0
    bl fn_803CD958
    clrlwi. r0, r3, 16
    ble lbl_fn_80018D5C_00001EE8
    lwz r0, 0x1c(r27)
    cmpw r0, r22
    blt lbl_fn_80018D5C_00001EE8
    cmpwi r23, 0x0
    blt lbl_fn_80018D5C_00001E28
    lwz r0, 0x18(r27)
    cmpw r0, r23
    bne lbl_fn_80018D5C_00001EE8
lbl_fn_80018D5C_00001E28:
    cmpwi r20, 0x0
    ble lbl_fn_80018D5C_00001E3C
    lwz r0, 0x20(r27)
    cmpw r0, r20
    bne lbl_fn_80018D5C_00001EE8
lbl_fn_80018D5C_00001E3C:
    cmpwi r21, 0x0
    ble lbl_fn_80018D5C_00001E50
    lwz r0, 0x24(r27)
    cmpw r0, r21
    bne lbl_fn_80018D5C_00001EE8
lbl_fn_80018D5C_00001E50:
    lfs f3, 0xc(r27)
    mr r3, r30
    lfs f0, 0x40(r1)
    lfs f5, 0x8(r27)
    fsubs f2, f3, f0
    lfs f4, 0x3c(r1)
    lfs f3, 0x4(r27)
    lfs f0, 0x38(r1)
    fsubs f4, f5, f4
    stfs f2, 0x10(r1)
    fsubs f0, f3, f0
    stfs f4, 0xc(r1)
    stfs f0, 0x8(r1)
    psq_l f1, 0x0(r29), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x28(r1)
    bl fn_805F9920
    fmr f29, f1
    mr r3, r30
    mr r4, r30
    bl fn_805F98D0
    fmuls f0, f30, f30
    fcmpo cr0, f29, f0
    blt lbl_fn_80018D5C_00001EE8
    fmuls f0, f31, f31
    fcmpo cr0, f0, f29
    blt lbl_fn_80018D5C_00001EE8
    mr r3, r30
    addi r4, r1, 0x2c
    bl fn_805F9990
    fcmpo cr0, f1, f28
    cror eq, gt, eq
    bne lbl_fn_80018D5C_00001EE8
    cmpwi r25, 0xff
    bge lbl_fn_80018D5C_00001EE8
    stwx r24, r18, r19
    addi r25, r25, 0x1
    addi r19, r19, 0x4
lbl_fn_80018D5C_00001EE8:
    addi r24, r24, 0x1
lbl_fn_80018D5C_00001EEC:
    lwz r0, 0x74(r28)
    cmpw r24, r0
    ble lbl_fn_80018D5C_00001DC0
    cmpwi cr1, r25, 0x0
    ble cr1, lbl_fn_80018D5C_000020F0
    cmpwi r22, 0x0
    blt lbl_fn_80018D5C_000020D4
    li r24, 0x0
    li r4, 0x0
    ble cr1, lbl_fn_80018D5C_0000206C
    cmpwi r25, 0x8
    subi r5, r25, 0x8
    ble lbl_fn_80018D5C_0000202C
    li r6, 0x0
    blt cr1, lbl_fn_80018D5C_00001F3C
    lis r3, 0x8000
    subi r0, r3, 0x2
    cmpw r25, r0
    bgt lbl_fn_80018D5C_00001F3C
    li r6, 0x1
lbl_fn_80018D5C_00001F3C:
    cmpwi r6, 0x0
    beq lbl_fn_80018D5C_0000202C
    addi r0, r5, 0x7
    addi r3, r1, 0x78
    srwi r0, r0, 3
    mtctr r0
    cmpwi r5, 0x0
    ble lbl_fn_80018D5C_0000202C
lbl_fn_80018D5C_00001F5C:
    lwz r5, 0x0(r3)
    addi r4, r4, 0x8
    lwz r6, 0x4(r3)
    subi r12, r5, 0x1
    lwz r5, 0x8(r3)
    subi r11, r6, 0x1
    lwz r6, 0xc(r3)
    subi r10, r5, 0x1
    lwz r5, 0x10(r3)
    subi r9, r6, 0x1
    lwz r7, 0x14(r3)
    subi r8, r5, 0x1
    lwz r6, 0x18(r3)
    lwz r5, 0x1c(r3)
    subi r7, r7, 0x1
    subi r6, r6, 0x1
    lwz r0, 0x9c(r28)
    mulli r12, r12, 0x30
    subi r5, r5, 0x1
    addi r3, r3, 0x20
    mulli r11, r11, 0x30
    add r12, r0, r12
    lwz r12, 0x1c(r12)
    mulli r10, r10, 0x30
    add r11, r0, r11
    lwz r11, 0x1c(r11)
    add r24, r24, r12
    mulli r9, r9, 0x30
    add r10, r0, r10
    lwz r10, 0x1c(r10)
    add r24, r24, r11
    mulli r8, r8, 0x30
    add r9, r0, r9
    lwz r9, 0x1c(r9)
    add r24, r24, r10
    mulli r7, r7, 0x30
    add r8, r0, r8
    lwz r8, 0x1c(r8)
    add r24, r24, r9
    mulli r6, r6, 0x30
    add r7, r0, r7
    lwz r7, 0x1c(r7)
    add r24, r24, r8
    mulli r5, r5, 0x30
    add r6, r0, r6
    lwz r6, 0x1c(r6)
    add r24, r24, r7
    add r5, r0, r5
    lwz r0, 0x1c(r5)
    add r24, r24, r6
    add r24, r24, r0
    bdnz lbl_fn_80018D5C_00001F5C
lbl_fn_80018D5C_0000202C:
    slwi r3, r4, 2
    addi r5, r1, 0x78
    subf r0, r4, r25
    add r5, r5, r3
    mtctr r0
    cmpw r4, r25
    bge lbl_fn_80018D5C_0000206C
lbl_fn_80018D5C_00002048:
    lwz r3, 0x0(r5)
    addi r5, r5, 0x4
    lwz r4, 0x9c(r28)
    subi r0, r3, 0x1
    mulli r0, r0, 0x30
    add r3, r4, r0
    lwz r0, 0x1c(r3)
    add r24, r24, r0
    bdnz lbl_fn_80018D5C_00002048
lbl_fn_80018D5C_0000206C:
    bl fn_80680CF8
    divw r0, r3, r24
    addi r5, r1, 0x78
    li r7, 0x0
    mullw r0, r0, r24
    subf r6, r0, r3
    mtctr r25
    cmpwi r25, 0x0
    ble lbl_fn_80018D5C_000020F0
lbl_fn_80018D5C_00002090:
    lwz r3, 0x0(r5)
    lwz r4, 0x9c(r28)
    subi r0, r3, 0x1
    mulli r0, r0, 0x30
    add r3, r4, r0
    lwz r0, 0x1c(r3)
    cmpw r6, r0
    bge lbl_fn_80018D5C_000020C0
    slwi r0, r7, 2
    addi r3, r1, 0x78
    lwzx r26, r3, r0
    b lbl_fn_80018D5C_000020F0
lbl_fn_80018D5C_000020C0:
    subf r6, r0, r6
    addi r5, r5, 0x4
    addi r7, r7, 0x1
    bdnz lbl_fn_80018D5C_00002090
    b lbl_fn_80018D5C_000020F0
lbl_fn_80018D5C_000020D4:
    bl fn_80680CF8
    divw r0, r3, r25
    addi r4, r1, 0x78
    mullw r0, r0, r25
    subf r0, r0, r3
    slwi r0, r0, 2
    lwzx r26, r4, r0
lbl_fn_80018D5C_000020F0:
    psq_l f31, 0x4e8(r1), 0, 0
    mr r3, r26
    lfd f31, 0x4e0(r1)
    psq_l f30, 0x4d8(r1), 0, 0
    lfd f30, 0x4d0(r1)
    psq_l f29, 0x4c8(r1), 0, 0
    lfd f29, 0x4c0(r1)
    psq_l f28, 0x4b8(r1), 0, 0
    lfd f28, 0x4b0(r1)
    addi r11, r1, 0x4b0
    bl _restgpr_18
    lwz r0, 0x4f4(r1)
    mtlr r0
    addi r1, r1, 0x4f0
    blr
}

asm void fn_80019254(void)
{
    nofralloc
    stwu r1, -0x900(r1)
    mflr r0
    stw r0, 0x904(r1)
    li r0, 0x8f8
    addi r11, r1, 0x8c0
    stfd f31, 0x8f0(r1)
    psq_stx f31, r1, r0, 0, 0
    li r0, 0x8e8
    stfd f30, 0x8e0(r1)
    psq_stx f30, r1, r0, 0, 0
    li r0, 0x8d8
    stfd f29, 0x8d0(r1)
    psq_stx f29, r1, r0, 0, 0
    li r0, 0x8c8
    stfd f28, 0x8c0(r1)
    psq_stx f28, r1, r0, 0, 0
    bl _savegpr_16
    lwz r3, lbl_8087F430
    fmr f29, f1
    fmr f28, f2
    mr r20, r4
    lwz r29, 0x10d8(r3)
    fmr f30, f3
    fmr f31, f4
    cmpwi r29, 0x0
    mr r21, r6
    mr r22, r7
    mr r23, r8
    li r27, 0x0
    beq lbl_fn_80019254_00002630
    cmpwi r4, 0x0
    bne lbl_fn_80019254_000021D0
    lfs f1, lbl_80880734
    mr r4, r5
    mr r3, r29
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    bl fn_803C1560
    mr r20, r3
lbl_fn_80019254_000021D0:
    subi r0, r20, 0x1
    lwz r6, 0x9c(r29)
    mulli r0, r0, 0x30
    addi r5, r1, 0x38
    addi r3, r1, 0x48
    li r4, 0x79
    add r6, r6, r0
    psq_l f1, 0x4(r6), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    fmr f1, f29
    lfs f2, 0xc(r6)
    stfs f2, 0x40(r1)
    bl fn_805F8E70
    lfs f0, lbl_808806B8
    addi r4, r1, 0x2c
    stfs f0, 0x14(r1)
    addi r6, r1, 0x14
    lfs f2, lbl_808806BC
    mr r5, r4
    stfs f0, 0x18(r1)
    addi r3, r1, 0x48
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x1c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x34(r1)
    bl fn_805F93C0
    lfs f3, lbl_808806DC
    lfs f0, lbl_80880700
    fmuls f3, f3, f28
    fmuls f1, f0, f3
    bl fn_8068A850
    lwz r0, 0x74(r29)
    frsp f28, f1
    li r4, 0x0
    li r5, 0x1
    mtctr r0
    cmpwi r0, 0x1
    blt lbl_fn_80019254_000022AC
lbl_fn_80019254_00002268:
    subi r0, r5, 0x1
    lwz r3, 0x9c(r29)
    mulli r0, r0, 0x30
    add r3, r3, r0
    lwz r0, 0x2c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80019254_000022A4
    cmpwi r21, 0x0
    ble lbl_fn_80019254_00002298
    lwz r0, 0x20(r3)
    cmpw r0, r21
    bne lbl_fn_80019254_000022A4
lbl_fn_80019254_00002298:
    lwz r0, 0x1c(r3)
    add. r4, r4, r0
    bgt lbl_fn_80019254_000022AC
lbl_fn_80019254_000022A4:
    addi r5, r5, 0x1
    bdnz lbl_fn_80019254_00002268
lbl_fn_80019254_000022AC:
    cmpwi r4, 0x0
    bgt lbl_fn_80019254_000022B8
    li r23, -0x1
lbl_fn_80019254_000022B8:
    addi r30, r1, 0x8
    addi r31, r1, 0x20
    addi r16, r1, 0x78
    addi r17, r1, 0x478
    li r26, 0x0
    li r18, 0x0
    li r25, 0x0
    li r19, 0x0
    li r24, 0x1
    b lbl_fn_80019254_0000240C
lbl_fn_80019254_000022E0:
    subi r4, r24, 0x1
    lwz r3, 0x9c(r29)
    mulli r0, r4, 0x30
    add r28, r3, r0
    lwz r0, 0x2c(r28)
    cmpwi r0, 0x0
    beq lbl_fn_80019254_00002408
    cmpw r20, r24
    beq lbl_fn_80019254_00002408
    cmpwi r20, 0x0
    beq lbl_fn_80019254_00002408
    subi r0, r20, 0x1
    lwz r3, 0xa4(r29)
    slwi r0, r0, 3
    add r3, r3, r0
    bl fn_803CD958
    clrlwi. r0, r3, 16
    ble lbl_fn_80019254_00002408
    lwz r0, 0x1c(r28)
    cmpw r0, r23
    blt lbl_fn_80019254_00002408
    cmpwi r21, 0x0
    ble lbl_fn_80019254_00002348
    lwz r0, 0x20(r28)
    cmpw r0, r21
    bne lbl_fn_80019254_00002408
lbl_fn_80019254_00002348:
    cmpwi r22, 0x0
    ble lbl_fn_80019254_0000235C
    lwz r0, 0x24(r28)
    cmpw r0, r22
    bne lbl_fn_80019254_00002408
lbl_fn_80019254_0000235C:
    lfs f3, 0xc(r28)
    mr r3, r31
    lfs f0, 0x40(r1)
    lfs f5, 0x8(r28)
    fsubs f2, f3, f0
    lfs f4, 0x3c(r1)
    lfs f3, 0x4(r28)
    lfs f0, 0x38(r1)
    fsubs f4, f5, f4
    stfs f2, 0x10(r1)
    fsubs f0, f3, f0
    stfs f4, 0xc(r1)
    stfs f0, 0x8(r1)
    psq_l f1, 0x0(r30), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x28(r1)
    bl fn_805F9920
    fmr f29, f1
    mr r3, r31
    mr r4, r31
    bl fn_805F98D0
    fmuls f0, f31, f31
    fcmpo cr0, f0, f29
    blt lbl_fn_80019254_00002408
    cmpwi r25, 0xff
    bge lbl_fn_80019254_000023D0
    stwx r24, r16, r19
    addi r25, r25, 0x1
    addi r19, r19, 0x4
lbl_fn_80019254_000023D0:
    fmuls f0, f30, f30
    fcmpo cr0, f29, f0
    blt lbl_fn_80019254_00002408
    addi r3, r1, 0x20
    addi r4, r1, 0x2c
    bl fn_805F9990
    fcmpo cr0, f1, f28
    cror eq, gt, eq
    bne lbl_fn_80019254_00002408
    cmpwi r26, 0xff
    bge lbl_fn_80019254_00002408
    stwx r24, r17, r18
    addi r26, r26, 0x1
    addi r18, r18, 0x4
lbl_fn_80019254_00002408:
    addi r24, r24, 0x1
lbl_fn_80019254_0000240C:
    lwz r0, 0x74(r29)
    cmpw r24, r0
    ble lbl_fn_80019254_000022E0
    cmpwi r26, 0x0
    bne lbl_fn_80019254_00002434
    addi r3, r1, 0x478
    addi r4, r1, 0x78
    li r5, 0x400
    bl memcpy
    mr r26, r25
lbl_fn_80019254_00002434:
    cmpwi cr1, r26, 0x0
    ble cr1, lbl_fn_80019254_00002630
    cmpwi r23, 0x0
    blt lbl_fn_80019254_00002614
    lwz r27, 0x478(r1)
    li r24, 0x0
    li r4, 0x0
    ble cr1, lbl_fn_80019254_000025AC
    cmpwi r26, 0x8
    subi r5, r26, 0x8
    ble lbl_fn_80019254_0000256C
    li r6, 0x0
    blt cr1, lbl_fn_80019254_0000247C
    lis r3, 0x8000
    subi r0, r3, 0x2
    cmpw r26, r0
    bgt lbl_fn_80019254_0000247C
    li r6, 0x1
lbl_fn_80019254_0000247C:
    cmpwi r6, 0x0
    beq lbl_fn_80019254_0000256C
    addi r0, r5, 0x7
    addi r3, r1, 0x478
    srwi r0, r0, 3
    mtctr r0
    cmpwi r5, 0x0
    ble lbl_fn_80019254_0000256C
lbl_fn_80019254_0000249C:
    lwz r5, 0x0(r3)
    addi r4, r4, 0x8
    lwz r6, 0x4(r3)
    subi r12, r5, 0x1
    lwz r5, 0x8(r3)
    subi r11, r6, 0x1
    lwz r6, 0xc(r3)
    subi r10, r5, 0x1
    lwz r5, 0x10(r3)
    subi r9, r6, 0x1
    lwz r7, 0x14(r3)
    subi r8, r5, 0x1
    lwz r6, 0x18(r3)
    lwz r5, 0x1c(r3)
    subi r7, r7, 0x1
    subi r6, r6, 0x1
    lwz r0, 0x9c(r29)
    mulli r12, r12, 0x30
    subi r5, r5, 0x1
    addi r3, r3, 0x20
    mulli r11, r11, 0x30
    add r12, r0, r12
    lwz r12, 0x1c(r12)
    mulli r10, r10, 0x30
    add r11, r0, r11
    lwz r11, 0x1c(r11)
    add r24, r24, r12
    mulli r9, r9, 0x30
    add r10, r0, r10
    lwz r10, 0x1c(r10)
    add r24, r24, r11
    mulli r8, r8, 0x30
    add r9, r0, r9
    lwz r9, 0x1c(r9)
    add r24, r24, r10
    mulli r7, r7, 0x30
    add r8, r0, r8
    lwz r8, 0x1c(r8)
    add r24, r24, r9
    mulli r6, r6, 0x30
    add r7, r0, r7
    lwz r7, 0x1c(r7)
    add r24, r24, r8
    mulli r5, r5, 0x30
    add r6, r0, r6
    lwz r6, 0x1c(r6)
    add r24, r24, r7
    add r5, r0, r5
    lwz r0, 0x1c(r5)
    add r24, r24, r6
    add r24, r24, r0
    bdnz lbl_fn_80019254_0000249C
lbl_fn_80019254_0000256C:
    slwi r3, r4, 2
    addi r5, r1, 0x478
    subf r0, r4, r26
    add r5, r5, r3
    mtctr r0
    cmpw r4, r26
    bge lbl_fn_80019254_000025AC
lbl_fn_80019254_00002588:
    lwz r3, 0x0(r5)
    addi r5, r5, 0x4
    lwz r4, 0x9c(r29)
    subi r0, r3, 0x1
    mulli r0, r0, 0x30
    add r3, r4, r0
    lwz r0, 0x1c(r3)
    add r24, r24, r0
    bdnz lbl_fn_80019254_00002588
lbl_fn_80019254_000025AC:
    bl fn_80680CF8
    divw r0, r3, r24
    addi r5, r1, 0x478
    li r7, 0x0
    mullw r0, r0, r24
    subf r6, r0, r3
    mtctr r26
    cmpwi r26, 0x0
    ble lbl_fn_80019254_00002630
lbl_fn_80019254_000025D0:
    lwz r3, 0x0(r5)
    lwz r4, 0x9c(r29)
    subi r0, r3, 0x1
    mulli r0, r0, 0x30
    add r3, r4, r0
    lwz r0, 0x1c(r3)
    cmpw r6, r0
    bge lbl_fn_80019254_00002600
    slwi r0, r7, 2
    addi r3, r1, 0x478
    lwzx r27, r3, r0
    b lbl_fn_80019254_00002630
lbl_fn_80019254_00002600:
    subf r6, r0, r6
    addi r5, r5, 0x4
    addi r7, r7, 0x1
    bdnz lbl_fn_80019254_000025D0
    b lbl_fn_80019254_00002630
lbl_fn_80019254_00002614:
    bl fn_80680CF8
    divw r0, r3, r26
    addi r4, r1, 0x478
    mullw r0, r0, r26
    subf r0, r0, r3
    slwi r0, r0, 2
    lwzx r27, r4, r0
lbl_fn_80019254_00002630:
    li r0, 0x8f8
    mr r3, r27
    psq_lx f31, r1, r0, 0, 0
    lfd f31, 0x8f0(r1)
    li r0, 0x8e8
    psq_lx f30, r1, r0, 0, 0
    lfd f30, 0x8e0(r1)
    li r0, 0x8d8
    psq_lx f29, r1, r0, 0, 0
    lfd f29, 0x8d0(r1)
    li r0, 0x8c8
    psq_lx f28, r1, r0, 0, 0
    lfd f28, 0x8c0(r1)
    addi r11, r1, 0x8c0
    bl _restgpr_16
    lwz r0, 0x904(r1)
    mtlr r0
    addi r1, r1, 0x900
    blr
}

asm void fn_800197A4(void)
{
    nofralloc
    stwu r1, -0x1c0(r1)
    mflr r0
    stw r0, 0x1c4(r1)
    addi r11, r1, 0xd0
    stfd f31, 0x1b0(r1)
    psq_st f31, 0x1b8(r1), 0, 0
    stfd f30, 0x1a0(r1)
    psq_st f30, 0x1a8(r1), 0, 0
    stfd f29, 0x190(r1)
    psq_st f29, 0x198(r1), 0, 0
    stfd f28, 0x180(r1)
    psq_st f28, 0x188(r1), 0, 0
    stfd f27, 0x170(r1)
    psq_st f27, 0x178(r1), 0, 0
    stfd f26, 0x160(r1)
    psq_st f26, 0x168(r1), 0, 0
    stfd f25, 0x150(r1)
    psq_st f25, 0x158(r1), 0, 0
    stfd f24, 0x140(r1)
    psq_st f24, 0x148(r1), 0, 0
    stfd f23, 0x130(r1)
    psq_st f23, 0x138(r1), 0, 0
    stfd f22, 0x120(r1)
    psq_st f22, 0x128(r1), 0, 0
    stfd f21, 0x110(r1)
    psq_st f21, 0x118(r1), 0, 0
    stfd f20, 0x100(r1)
    psq_st f20, 0x108(r1), 0, 0
    stfd f19, 0xf0(r1)
    psq_st f19, 0xf8(r1), 0, 0
    stfd f18, 0xe0(r1)
    psq_st f18, 0xe8(r1), 0, 0
    stfd f17, 0xd0(r1)
    psq_st f17, 0xd8(r1), 0, 0
    bl _savegpr_14
    lfs f2, 0x530(r6)
    fmr f3, f1
    cmpwi r8, 0x0
    addi r9, r1, 0x7c
    psq_l f1, 0x528(r6), 0, 0
    addi r10, r1, 0x70
    psq_st f1, 0x0(r9), 0, 0
    mr r15, r3
    mr r16, r4
    stfs f2, 0x84(r1)
    mr r14, r5
    mr r17, r6
    mr r18, r7
    psq_st f1, 0x0(r10), 0, 0
    mr r19, r8
    stfs f2, 0x78(r1)
    bne lbl_fn_800197A4_00002794
    lwz r3, 0xd1c(r6)
    cmpwi r3, 0x0
    bne lbl_fn_800197A4_00002760
    li r19, 0x1
    b lbl_fn_800197A4_00002794
lbl_fn_800197A4_00002760:
    lwz r0, 0xd0c(r6)
    psq_l f1, 0x528(r3), 0, 0
    lfs f2, 0x530(r3)
    cmpwi r0, 0x0
    psq_st f1, 0x0(r10), 0, 0
    stfs f2, 0x78(r1)
    ble lbl_fn_800197A4_00002794
    lwz r3, 0xd0c(r3)
    cmpwi r3, 0x0
    ble lbl_fn_800197A4_00002794
    cmpw r0, r3
    beq lbl_fn_800197A4_00002794
    li r19, 0x1
lbl_fn_800197A4_00002794:
    lfs f0, lbl_80880700
    li r23, 0x0
    lwz r3, lbl_8087F430
    li r22, 0x0
    fmuls f1, f0, f3
    lwz r25, 0xd0c(r6)
    lwz r24, 0xd10(r6)
    lwz r29, 0x10d8(r3)
    lfs f18, lbl_80880738
    bl fn_8068A850
    lfs f3, 0x78(r1)
    frsp f19, f1
    lfs f0, 0x84(r1)
    addi r3, r1, 0x64
    lfs f5, 0x74(r1)
    fsubs f6, f3, f0
    lfs f4, 0x80(r1)
    lfs f3, 0x70(r1)
    lfs f0, 0x7c(r1)
    fsubs f4, f5, f4
    stfs f6, 0x6c(r1)
    fsubs f0, f3, f0
    stfs f4, 0x68(r1)
    stfs f0, 0x64(r1)
    bl fn_805F9920
    fabs f3, f1
    lfs f0, lbl_80880744
    fmr f20, f1
    frsp f3, f3
    fcmpo cr0, f3, f0
    blt lbl_fn_800197A4_0000281C
    addi r3, r1, 0x64
    mr r4, r3
    bl fn_805F98D0
lbl_fn_800197A4_0000281C:
    lis r20, lbl_807C66C0@ha
    li r4, 0x0
    addi r3, r20, lbl_807C66C0@l
    li r5, 0x200
    bl memset
    lfs f27, lbl_808806B8
    addi r30, r20, lbl_807C66C0@l
    lfs f29, lbl_80880750
    li r21, 0x0
    lfs f30, lbl_80880754
    li r27, 0x0
    lfs f26, lbl_8088074C
    li r31, 0x1
    lfs f31, lbl_808806F4
    lfs f25, lbl_80880730
    lfs f22, lbl_80880744
    lfs f23, lbl_808806BC
    lfs f24, lbl_80880748
    lfs f21, lbl_808806D0
    b lbl_fn_800197A4_00002C98
lbl_fn_800197A4_0000286C:
    lwz r0, 0xb8(r29)
    add r28, r0, r27
    lwz r0, 0x8(r28)
    cmpwi r0, 0x0
    beq lbl_fn_800197A4_00002C90
    lwz r0, 0x12a4(r17)
    srwi. r0, r0, 31
    beq lbl_fn_800197A4_000028B4
    lwz r3, 0x0(r28)
    lwz r0, 0xc38(r17)
    addi r3, r3, 0x1
    cmpw r3, r0
    bne lbl_fn_800197A4_000028B4
    lwz r3, 0x4(r28)
    lwz r0, 0xc3c(r17)
    addi r3, r3, 0x1
    cmpw r3, r0
    beq lbl_fn_800197A4_00002C90
lbl_fn_800197A4_000028B4:
    lfs f3, 0x10(r28)
    lfs f0, 0x80(r1)
    fsubs f0, f3, f0
    fabs f0, f0
    frsp f0, f0
    fcmpo cr0, f0, f21
    bgt lbl_fn_800197A4_00002C90
    lwz r0, 0x0(r28)
    addi r3, r1, 0x58
    lwz r4, 0xb0(r29)
    slwi r0, r0, 6
    add r5, r4, r0
    stw r5, 0x8(r1)
    lwz r0, 0x4(r28)
    lwz r4, 0xb0(r29)
    slwi r0, r0, 6
    add r4, r4, r0
    stw r4, 0xc(r1)
    lfs f3, 0xc(r4)
    lfs f0, 0xc(r5)
    lfs f5, 0x8(r4)
    fsubs f6, f3, f0
    lfs f4, 0x8(r5)
    lfs f3, 0x4(r4)
    lfs f0, 0x4(r5)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x5c(r1)
    stfs f0, 0x58(r1)
    stfs f6, 0x60(r1)
    bl fn_805F9920
    fmr f28, f1
    addi r3, r1, 0x58
    bl fn_805F9920
    fabs f0, f1
    frsp f0, f0
    fcmpo cr0, f0, f22
    blt lbl_fn_800197A4_00002958
    addi r3, r1, 0x58
    mr r4, r3
    bl fn_805F98D0
lbl_fn_800197A4_00002958:
    cmpwi r19, 0x0
    bne lbl_fn_800197A4_00002A08
    lfs f3, 0x78(r1)
    addi r3, r1, 0x4c
    lfs f0, 0x14(r28)
    lfs f5, 0x74(r1)
    fsubs f6, f3, f0
    lfs f4, 0x10(r28)
    lfs f0, 0xc(r28)
    lfs f3, 0x70(r1)
    fsubs f4, f5, f4
    stfs f6, 0x54(r1)
    fsubs f0, f3, f0
    stfs f4, 0x50(r1)
    stfs f0, 0x4c(r1)
    bl fn_805F9920
    fabs f0, f1
    frsp f0, f0
    fcmpo cr0, f0, f22
    blt lbl_fn_800197A4_000029B4
    addi r3, r1, 0x4c
    mr r4, r3
    bl fn_805F98D0
lbl_fn_800197A4_000029B4:
    stfs f27, 0x10(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0x4c
    addi r5, r1, 0x40
    stfs f23, 0x14(r1)
    stfs f27, 0x18(r1)
    bl fn_805F99B0
    addi r3, r1, 0x40
    bl fn_805F9920
    fabs f0, f1
    frsp f0, f0
    fcmpo cr0, f0, f22
    blt lbl_fn_800197A4_000029F4
    addi r3, r1, 0x40
    mr r4, r3
    bl fn_805F98D0
lbl_fn_800197A4_000029F4:
    addi r3, r1, 0x40
    addi r4, r1, 0x58
    bl fn_805F9990
    fcmpo cr0, f1, f24
    blt lbl_fn_800197A4_00002C90
lbl_fn_800197A4_00002A08:
    lfs f0, 0x5b0(r17)
    fmuls f0, f0, f0
    fcmpo cr0, f28, f0
    blt lbl_fn_800197A4_00002C90
    lwz r3, 0x8(r1)
    lwz r0, 0x3c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800197A4_00002A38
    lwz r3, 0xc(r1)
    lwz r0, 0x3c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_800197A4_00002C90
lbl_fn_800197A4_00002A38:
    addi r26, r1, 0x8
    li r20, 0x0
lbl_fn_800197A4_00002A40:
    lwz r3, 0x0(r26)
    lwz r4, 0x10(r3)
    srawi r3, r4, 5
    slwi r0, r4, 27
    srwi r4, r4, 31
    addze r3, r3
    subf r0, r4, r0
    slwi r5, r3, 2
    rotlwi r0, r0, 5
    lwzx r3, r30, r5
    add r0, r0, r4
    slw r4, r31, r0
    and r0, r4, r3
    cmplw r4, r0
    beq lbl_fn_800197A4_00002C80
    or r0, r3, r4
    stwx r0, r30, r5
    lwz r3, 0x0(r26)
    lwz r0, 0x38(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800197A4_00002C80
    lwz r6, 0x10(r3)
    mr r3, r15
    mr r7, r28
    li r4, 0x0
    li r5, 0x0
    bl fn_80019E88
    cmpwi r3, 0x0
    beq lbl_fn_800197A4_00002C80
    cmpwi r25, 0x0
    ble lbl_fn_800197A4_00002ACC
    lwz r3, 0x0(r26)
    lwz r0, 0x1c(r3)
    cmpw r25, r0
    bne lbl_fn_800197A4_00002C80
lbl_fn_800197A4_00002ACC:
    cmpwi r24, 0x0
    ble lbl_fn_800197A4_00002AE4
    lwz r3, 0x0(r26)
    lwz r0, 0x20(r3)
    cmpw r24, r0
    bne lbl_fn_800197A4_00002C80
lbl_fn_800197A4_00002AE4:
    lwz r4, 0x0(r26)
    lwz r0, 0x24(r4)
    cmpwi r0, 0x0
    beq lbl_fn_800197A4_00002B00
    lwz r0, 0x48(r17)
    cmpwi r0, 0x0
    bne lbl_fn_800197A4_00002C80
lbl_fn_800197A4_00002B00:
    lfs f3, 0xc(r4)
    addi r3, r1, 0x34
    lfs f0, 0x84(r1)
    lfs f5, 0x8(r4)
    fsubs f6, f3, f0
    lfs f4, 0x80(r1)
    lfs f3, 0x4(r4)
    lfs f0, 0x7c(r1)
    fsubs f4, f5, f4
    stfs f6, 0x3c(r1)
    fsubs f0, f3, f0
    stfs f4, 0x38(r1)
    stfs f0, 0x34(r1)
    bl fn_805F9920
    fmr f17, f1
    fcmpo cr0, f1, f27
    ble lbl_fn_800197A4_00002B50
    addi r3, r1, 0x34
    mr r4, r3
    bl fn_805F98D0
lbl_fn_800197A4_00002B50:
    lwz r0, 0xd30(r17)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_800197A4_00002B68
    fcmpo cr0, f17, f25
    blt lbl_fn_800197A4_00002C80
lbl_fn_800197A4_00002B68:
    fcmpo cr0, f17, f26
    ble lbl_fn_800197A4_00002B84
    mr r4, r18
    addi r3, r1, 0x34
    bl fn_805F9990
    fcmpo cr0, f1, f19
    blt lbl_fn_800197A4_00002C80
lbl_fn_800197A4_00002B84:
    cmpwi r19, 0x0
    bne lbl_fn_800197A4_00002C68
    lfs f3, 0x78(r1)
    addi r3, r1, 0x28
    lfs f0, 0x84(r1)
    lfs f5, 0x74(r1)
    fsubs f6, f3, f0
    lfs f4, 0x80(r1)
    lfs f3, 0x70(r1)
    lfs f0, 0x7c(r1)
    fsubs f4, f5, f4
    stfs f6, 0x30(r1)
    fsubs f0, f3, f0
    stfs f4, 0x2c(r1)
    stfs f0, 0x28(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f27
    ble lbl_fn_800197A4_00002BD8
    addi r3, r1, 0x28
    mr r4, r3
    bl fn_805F98D0
lbl_fn_800197A4_00002BD8:
    lwz r4, 0x0(r26)
    addi r3, r1, 0x1c
    lfs f3, 0x78(r1)
    lfs f0, 0xc(r4)
    lfs f5, 0x74(r1)
    fsubs f6, f3, f0
    lfs f4, 0x8(r4)
    lfs f0, 0x4(r4)
    lfs f3, 0x70(r1)
    fsubs f4, f5, f4
    stfs f6, 0x24(r1)
    fsubs f0, f3, f0
    stfs f4, 0x20(r1)
    stfs f0, 0x1c(r1)
    bl fn_805F9920
    fmr f28, f1
    fcmpo cr0, f1, f27
    ble lbl_fn_800197A4_00002C2C
    addi r3, r1, 0x1c
    mr r4, r3
    bl fn_805F98D0
lbl_fn_800197A4_00002C2C:
    fcmpo cr0, f28, f29
    bge lbl_fn_800197A4_00002C3C
    fcmpo cr0, f20, f28
    bgt lbl_fn_800197A4_00002C80
lbl_fn_800197A4_00002C3C:
    fcmpo cr0, f20, f30
    ble lbl_fn_800197A4_00002C54
    fmuls f0, f31, f20
    fmuls f0, f31, f0
    fcmpo cr0, f0, f28
    blt lbl_fn_800197A4_00002C80
lbl_fn_800197A4_00002C54:
    addi r3, r1, 0x64
    addi r4, r1, 0x1c
    bl fn_805F9990
    fcmpo cr0, f1, f27
    blt lbl_fn_800197A4_00002C80
lbl_fn_800197A4_00002C68:
    fcmpo cr0, f18, f17
    ble lbl_fn_800197A4_00002C80
    lwz r3, 0x0(r26)
    fmr f18, f17
    mr r22, r21
    lwz r23, 0x10(r3)
lbl_fn_800197A4_00002C80:
    addi r20, r20, 0x1
    addi r26, r26, 0x4
    cmplwi r20, 0x2
    blt lbl_fn_800197A4_00002A40
lbl_fn_800197A4_00002C90:
    addi r27, r27, 0x18
    addi r21, r21, 0x1
lbl_fn_800197A4_00002C98:
    lwz r0, 0xb4(r29)
    cmplw r21, r0
    blt lbl_fn_800197A4_0000286C
    cmpwi r23, 0x0
    ble lbl_fn_800197A4_00002CCC
    mulli r0, r22, 0x18
    lwz r7, 0xb8(r29)
    mr r3, r15
    mr r4, r16
    mr r5, r14
    mr r6, r23
    add r7, r7, r0
    bl fn_80019E88
lbl_fn_800197A4_00002CCC:
    psq_l f31, 0x1b8(r1), 0, 0
    mr r3, r23
    lfd f31, 0x1b0(r1)
    psq_l f30, 0x1a8(r1), 0, 0
    lfd f30, 0x1a0(r1)
    psq_l f29, 0x198(r1), 0, 0
    lfd f29, 0x190(r1)
    psq_l f28, 0x188(r1), 0, 0
    lfd f28, 0x180(r1)
    psq_l f27, 0x178(r1), 0, 0
    lfd f27, 0x170(r1)
    psq_l f26, 0x168(r1), 0, 0
    lfd f26, 0x160(r1)
    psq_l f25, 0x158(r1), 0, 0
    lfd f25, 0x150(r1)
    psq_l f24, 0x148(r1), 0, 0
    lfd f24, 0x140(r1)
    psq_l f23, 0x138(r1), 0, 0
    lfd f23, 0x130(r1)
    psq_l f22, 0x128(r1), 0, 0
    lfd f22, 0x120(r1)
    psq_l f21, 0x118(r1), 0, 0
    lfd f21, 0x110(r1)
    psq_l f20, 0x108(r1), 0, 0
    lfd f20, 0x100(r1)
    psq_l f19, 0xf8(r1), 0, 0
    lfd f19, 0xf0(r1)
    psq_l f18, 0xe8(r1), 0, 0
    lfd f18, 0xe0(r1)
    psq_l f17, 0xd8(r1), 0, 0
    lfd f17, 0xd0(r1)
    addi r11, r1, 0xd0
    bl _restgpr_14
    lwz r0, 0x1c4(r1)
    mtlr r0
    addi r1, r1, 0x1c0
    blr
}

asm void fn_80019E88(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    addi r11, r1, 0x90
    stfd f31, 0x90(r1)
    psq_st f31, 0x98(r1), 0, 0
    bl _savegpr_27
    lwz r3, lbl_8087F430
    mr r28, r4
    mr r29, r5
    mr r30, r6
    cmpwi r3, 0x0
    mr r31, r7
    beq lbl_fn_80019E88_00002DA0
    lwz r27, 0x10d8(r3)
    b lbl_fn_80019E88_00002DA4
lbl_fn_80019E88_00002DA0:
    li r27, 0x0
lbl_fn_80019E88_00002DA4:
    cmpwi r27, 0x0
    bne lbl_fn_80019E88_00002DB4
    li r3, 0x0
    b lbl_fn_80019E88_000030E0
lbl_fn_80019E88_00002DB4:
    cmpwi r7, 0x0
    bne lbl_fn_80019E88_00002E08
    lwz r0, 0xb4(r27)
    li r4, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80019E88_00002E08
lbl_fn_80019E88_00002DD0:
    lwz r0, 0xb8(r27)
    lwzx r3, r4, r0
    add r5, r0, r4
    addi r0, r3, 0x1
    cmpw r0, r6
    beq lbl_fn_80019E88_00002DF8
    lwz r3, 0x4(r5)
    addi r0, r3, 0x1
    cmpw r0, r6
    bne lbl_fn_80019E88_00002E00
lbl_fn_80019E88_00002DF8:
    mr r31, r5
    b lbl_fn_80019E88_00002E08
lbl_fn_80019E88_00002E00:
    addi r4, r4, 0x18
    bdnz lbl_fn_80019E88_00002DD0
lbl_fn_80019E88_00002E08:
    cmpwi r31, 0x0
    bne lbl_fn_80019E88_00002E18
    li r3, 0x0
    b lbl_fn_80019E88_000030E0
lbl_fn_80019E88_00002E18:
    lwz r0, 0x0(r31)
    lwz r5, 0xb0(r27)
    slwi r0, r0, 6
    lwz r3, 0x4(r31)
    add r4, r5, r0
    lwz r0, 0x3c(r4)
    slwi r3, r3, 6
    add r5, r5, r3
    cmpwi r0, 0x0
    bne lbl_fn_80019E88_00002E4C
    lwz r0, 0x3c(r5)
    cmpwi r0, 0x0
    beq lbl_fn_80019E88_00002E54
lbl_fn_80019E88_00002E4C:
    li r3, 0x0
    b lbl_fn_80019E88_000030E0
lbl_fn_80019E88_00002E54:
    lfs f3, 0xc(r5)
    addi r3, r1, 0x68
    lfs f0, 0xc(r4)
    lfs f5, 0x8(r5)
    fsubs f6, f3, f0
    lfs f4, 0x8(r4)
    lfs f3, 0x4(r5)
    lfs f0, 0x4(r4)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x6c(r1)
    stfs f0, 0x68(r1)
    stfs f6, 0x70(r1)
    bl fn_805F9940
    lfs f0, lbl_808806B8
    fmr f31, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_80019E88_00002EA8
    addi r3, r1, 0x68
    mr r4, r3
    bl fn_805F98D0
lbl_fn_80019E88_00002EA8:
    subi r0, r30, 0x1
    lwz r3, 0xb0(r27)
    slwi r0, r0, 6
    add r4, r3, r0
    lwz r3, 0x14(r4)
    subi r0, r3, 0x1
    cmplwi r0, 0x1
    bgt lbl_fn_80019E88_00002FB4
    cmpwi r28, 0x0
    beq lbl_fn_80019E88_00002F9C
    lwz r3, 0x0(r31)
    lfs f0, lbl_80880758
    addi r0, r3, 0x1
    cmpw r0, r30
    fmuls f6, f0, f31
    bne lbl_fn_80019E88_00002F44
    lfs f4, 0x70(r1)
    addi r3, r1, 0x5c
    lfs f0, 0x6c(r1)
    fmuls f4, f4, f6
    lfs f3, 0x68(r1)
    fmuls f5, f0, f6
    lfs f0, 0xc(r4)
    fmuls f6, f3, f6
    lfs f3, 0x8(r4)
    fadds f2, f0, f4
    lfs f0, 0x4(r4)
    fadds f3, f3, f5
    stfs f6, 0x50(r1)
    fadds f0, f0, f6
    stfs f3, 0x60(r1)
    stfs f0, 0x5c(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f5, 0x54(r1)
    stfs f4, 0x58(r1)
    stfs f2, 0x64(r1)
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x8(r28)
    b lbl_fn_80019E88_00002F9C
lbl_fn_80019E88_00002F44:
    lfs f4, 0x70(r1)
    addi r3, r1, 0x44
    lfs f0, 0x6c(r1)
    fmuls f4, f4, f6
    lfs f3, 0x68(r1)
    fmuls f5, f0, f6
    lfs f0, 0xc(r4)
    fmuls f6, f3, f6
    lfs f3, 0x8(r4)
    fsubs f2, f0, f4
    lfs f0, 0x4(r4)
    fsubs f3, f3, f5
    stfs f6, 0x38(r1)
    fsubs f0, f0, f6
    stfs f3, 0x48(r1)
    stfs f0, 0x44(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f5, 0x3c(r1)
    stfs f4, 0x40(r1)
    stfs f2, 0x4c(r1)
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x8(r28)
lbl_fn_80019E88_00002F9C:
    cmpwi r29, 0x0
    beq lbl_fn_80019E88_00002FAC
    li r0, 0x3
    stw r0, 0x0(r29)
lbl_fn_80019E88_00002FAC:
    li r3, 0x1
    b lbl_fn_80019E88_000030E0
lbl_fn_80019E88_00002FB4:
    lwz r0, 0x18(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80019E88_000030DC
    cmpwi r28, 0x0
    beq lbl_fn_80019E88_000030A8
    lfs f3, lbl_808806DC
    lfs f0, lbl_808806EC
    fmuls f6, f31, f3
    fcmpo cr0, f6, f0
    bge lbl_fn_80019E88_00002FE0
    b lbl_fn_80019E88_00002FE4
lbl_fn_80019E88_00002FE0:
    fmr f6, f0
lbl_fn_80019E88_00002FE4:
    lwz r3, 0x0(r31)
    addi r0, r3, 0x1
    cmpw r0, r30
    bne lbl_fn_80019E88_00003050
    lfs f4, 0x70(r1)
    addi r3, r1, 0x2c
    lfs f0, 0x6c(r1)
    fmuls f4, f4, f6
    lfs f3, 0x68(r1)
    fmuls f5, f0, f6
    lfs f0, 0xc(r4)
    fmuls f6, f3, f6
    lfs f3, 0x8(r4)
    fadds f2, f0, f4
    lfs f0, 0x4(r4)
    fadds f3, f3, f5
    stfs f6, 0x20(r1)
    fadds f0, f0, f6
    stfs f3, 0x30(r1)
    stfs f0, 0x2c(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f5, 0x24(r1)
    stfs f4, 0x28(r1)
    stfs f2, 0x34(r1)
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x8(r28)
    b lbl_fn_80019E88_000030A8
lbl_fn_80019E88_00003050:
    lfs f4, 0x70(r1)
    addi r3, r1, 0x14
    lfs f0, 0x6c(r1)
    fmuls f4, f4, f6
    lfs f3, 0x68(r1)
    fmuls f5, f0, f6
    lfs f0, 0xc(r4)
    fmuls f6, f3, f6
    lfs f3, 0x8(r4)
    fsubs f2, f0, f4
    lfs f0, 0x4(r4)
    fsubs f3, f3, f5
    stfs f6, 0x8(r1)
    fsubs f0, f0, f6
    stfs f3, 0x18(r1)
    stfs f0, 0x14(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f5, 0xc(r1)
    stfs f4, 0x10(r1)
    stfs f2, 0x1c(r1)
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x8(r28)
lbl_fn_80019E88_000030A8:
    cmpwi r29, 0x0
    beq lbl_fn_80019E88_000030D4
    lwz r3, 0x0(r31)
    addi r0, r3, 0x1
    cmpw r0, r30
    bne lbl_fn_80019E88_000030CC
    li r0, 0x1
    stw r0, 0x0(r29)
    b lbl_fn_80019E88_000030D4
lbl_fn_80019E88_000030CC:
    li r0, 0x2
    stw r0, 0x0(r29)
lbl_fn_80019E88_000030D4:
    li r3, 0x1
    b lbl_fn_80019E88_000030E0
lbl_fn_80019E88_000030DC:
    li r3, 0x0
lbl_fn_80019E88_000030E0:
    addi r11, r1, 0x90
    psq_l f31, 0x98(r1), 0, 0
    lfd f31, 0x90(r1)
    bl _restgpr_27
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void dtor_8001A228(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_dtor_8001A228_00003128
    cmpwi r4, 0x0
    ble lbl_dtor_8001A228_00003128
    bl dtor_80084684
lbl_dtor_8001A228_00003128:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8001A268(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    blr
}

asm void fn_8001A270(void)
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
    beq lbl_fn_8001A270_00003198
    addic. r3, r3, 0x4
    beq lbl_fn_8001A270_00003188
    beq lbl_fn_8001A270_00003188
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8001A270_00003188
    bl fn_806952C4
lbl_fn_8001A270_00003188:
    cmpwi r31, 0x0
    ble lbl_fn_8001A270_00003198
    mr r3, r30
    bl dtor_80084684
lbl_fn_8001A270_00003198:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8001A2DC(void)
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
    beq lbl_fn_8001A2DC_00003208
    beq lbl_fn_8001A2DC_000031F8
    addic. r3, r3, 0x4
    beq lbl_fn_8001A2DC_000031F8
    beq lbl_fn_8001A2DC_000031F8
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8001A2DC_000031F8
    bl fn_806952C4
lbl_fn_8001A2DC_000031F8:
    cmpwi r31, 0x0
    ble lbl_fn_8001A2DC_00003208
    mr r3, r30
    bl dtor_80084684
lbl_fn_8001A2DC_00003208:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8001A34C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_80775BC0@ha
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r3, 0x0(r4)
    lwz r4, lbl_80775BC0@l(r5)
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_8001A34C_0000325C
    addi r3, r31, 0xc
    b lbl_fn_8001A34C_00003260
lbl_fn_8001A34C_0000325C:
    li r3, 0x0
lbl_fn_8001A34C_00003260:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8001A39C(void)
{
    nofralloc
    lwz r3, 0xc(r3)
    b fn_80084C24
}

asm void dtor_8001A3A4(void)
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
    beq lbl_dtor_8001A3A4_000032C0
    lwz r3, 0x0(r3)
    cmpwi r3, 0x0
    beq lbl_dtor_8001A3A4_000032B0
    bl fn_80084C24
lbl_dtor_8001A3A4_000032B0:
    cmpwi r31, 0x0
    ble lbl_dtor_8001A3A4_000032C0
    mr r3, r30
    bl dtor_80084684
lbl_dtor_8001A3A4_000032C0:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8001A404(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_8001A404_00003304
    cmpwi r4, 0x0
    ble lbl_fn_8001A404_00003304
    bl dtor_80084684
lbl_fn_8001A404_00003304:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8001A444(void)
{
    nofralloc
    lwz r0, lbl_8087F430
    mr r4, r3
    cmpwi r0, 0x0
    beq lbl_fn_8001A444_00003334
    mr r3, r0
    b fn_80370174
lbl_fn_8001A444_00003334:
    li r3, 0x0
    blr
}

asm void fn_8001A464(void)
{
    nofralloc
    mr r6, r3
    li r7, 0x0
    li r5, 0x0
    b lbl_fn_8001A464_00003368
lbl_fn_8001A464_0000334C:
    lwz r0, lbl_8087EE64
    addi r7, r7, 0x1
    add r4, r0, r5
    addi r5, r5, 0x4
    lwz r0, 0x250(r4)
    stw r0, 0x0(r6)
    addi r6, r6, 0x4
lbl_fn_8001A464_00003368:
    lwz r4, lbl_8087EE64
    lbz r0, 0x24c(r4)
    cmpw r7, r0
    bge lbl_fn_8001A464_00003380
    cmpwi r7, 0x10
    blt lbl_fn_8001A464_0000334C
lbl_fn_8001A464_00003380:
    cmpwi r7, 0x10
    slwi r0, r7, 2
    add r5, r3, r0
    subfic r3, r7, 0x10
    li r4, 0x0
    bgelr
    srwi. r0, r3, 3
    mtctr r0
    beq lbl_fn_8001A464_000033D4
lbl_fn_8001A464_000033A4:
    stw r4, 0x0(r5)
    stw r4, 0x4(r5)
    stw r4, 0x8(r5)
    stw r4, 0xc(r5)
    stw r4, 0x10(r5)
    stw r4, 0x14(r5)
    stw r4, 0x18(r5)
    stw r4, 0x1c(r5)
    addi r5, r5, 0x20
    bdnz lbl_fn_8001A464_000033A4
    andi. r3, r3, 0x7
    beqlr
lbl_fn_8001A464_000033D4:
    mtctr r3
lbl_fn_8001A464_000033D8:
    stw r4, 0x0(r5)
    addi r5, r5, 0x4
    bdnz lbl_fn_8001A464_000033D8
    blr
}

asm void fn_8001A510(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r25, 0x14(r1)
    mr r31, r3
    mr r29, r31
    li r27, 0x0
    li r26, 0x0
    lwz r4, lbl_8087F048
    lwz r28, lbl_8087EE60
    addis r30, r4, 0x1
    subi r30, r30, 0x3410
    b lbl_fn_8001A510_000034A8
lbl_fn_8001A510_0000341C:
    lwz r25, 0x0(r30)
    cmpwi r25, 0x0
    beq lbl_fn_8001A510_000034A0
    lwz r4, 0x38(r25)
    li r3, 0x0
    rlwinm r0, r4, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_8001A510_0000344C
    clrlwi r0, r4, 31
    cmplwi r0, 0x1
    beq lbl_fn_8001A510_0000344C
    li r3, 0x1
lbl_fn_8001A510_0000344C:
    cmpwi r3, 0x0
    beq lbl_fn_8001A510_000034A0
    mr r3, r28
    mr r4, r25
    li r5, 0x1
    bl fn_8016F3D0
    cmpwi r3, 0x0
    beq lbl_fn_8001A510_000034A0
    lwz r3, 0xd0c(r28)
    cmpwi r3, 0x0
    ble lbl_fn_8001A510_0000348C
    lwz r0, 0xd0c(r25)
    cmpwi r0, 0x0
    ble lbl_fn_8001A510_0000348C
    cmpw r3, r0
    bne lbl_fn_8001A510_000034A0
lbl_fn_8001A510_0000348C:
    addi r27, r27, 0x1
    stw r25, 0x0(r29)
    cmpwi r27, 0x10
    addi r29, r29, 0x4
    bge lbl_fn_8001A510_000034BC
lbl_fn_8001A510_000034A0:
    addi r30, r30, 0x934
    addi r26, r26, 0x1
lbl_fn_8001A510_000034A8:
    lwz r3, lbl_8087F048
    addis r3, r3, 0x3
    lwz r0, 0x63b0(r3)
    cmpw r26, r0
    blt lbl_fn_8001A510_0000341C
lbl_fn_8001A510_000034BC:
    cmpwi r27, 0x10
    slwi r0, r27, 2
    add r5, r31, r0
    subfic r3, r27, 0x10
    li r4, 0x0
    bge lbl_fn_8001A510_00003520
    srwi. r0, r3, 3
    mtctr r0
    beq lbl_fn_8001A510_00003510
lbl_fn_8001A510_000034E0:
    stw r4, 0x0(r5)
    stw r4, 0x4(r5)
    stw r4, 0x8(r5)
    stw r4, 0xc(r5)
    stw r4, 0x10(r5)
    stw r4, 0x14(r5)
    stw r4, 0x18(r5)
    stw r4, 0x1c(r5)
    addi r5, r5, 0x20
    bdnz lbl_fn_8001A510_000034E0
    andi. r3, r3, 0x7
    beq lbl_fn_8001A510_00003520
lbl_fn_8001A510_00003510:
    mtctr r3
lbl_fn_8001A510_00003514:
    stw r4, 0x0(r5)
    addi r5, r5, 0x4
    bdnz lbl_fn_8001A510_00003514
lbl_fn_8001A510_00003520:
    lmw r25, 0x14(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8001A65C(void)
{
    nofralloc
    li r0, 0x10
    mr r9, r3
    li r4, 0x0
    mtctr r0
lbl_fn_8001A65C_00003544:
    lwz r6, 0x0(r9)
    cmpwi r6, 0x0
    beq lbl_fn_8001A65C_000035D4
    lwz r10, 0x38(r6)
    li r7, 0x0
    li r5, 0x0
    li r8, 0x0
    rlwinm r0, r10, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_8001A65C_0000357C
    clrlwi r0, r10, 31
    cmplwi r0, 0x1
    beq lbl_fn_8001A65C_0000357C
    li r8, 0x1
lbl_fn_8001A65C_0000357C:
    cmpwi r8, 0x0
    beq lbl_fn_8001A65C_00003598
    lwz r0, 0x7e0(r6)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_8001A65C_00003598
    li r5, 0x1
lbl_fn_8001A65C_00003598:
    cmpwi r5, 0x0
    beq lbl_fn_8001A65C_000035CC
    lwz r0, 0x55c(r6)
    li r5, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_8001A65C_000035C0
    lwz r0, 0x560(r6)
    cmpwi r0, 0x1c
    bne lbl_fn_8001A65C_000035C0
    li r5, 0x1
lbl_fn_8001A65C_000035C0:
    cmpwi r5, 0x0
    bne lbl_fn_8001A65C_000035CC
    li r7, 0x1
lbl_fn_8001A65C_000035CC:
    cmpwi r7, 0x0
    bne lbl_fn_8001A65C_000035D8
lbl_fn_8001A65C_000035D4:
    stw r4, 0x0(r9)
lbl_fn_8001A65C_000035D8:
    addi r9, r9, 0x4
    bdnz lbl_fn_8001A65C_00003544
    mr r8, r3
    li r7, 0x0
    li r4, 0x0
lbl_fn_8001A65C_000035EC:
    lwz r0, 0x0(r8)
    cmpwi r0, 0x0
    bne lbl_fn_8001A65C_0000364C
    addi r6, r7, 0x1
    slwi r5, r6, 2
    subfic r0, r6, 0x10
    add r5, r3, r5
    mtctr r0
    cmpwi r6, 0x10
    bge lbl_fn_8001A65C_00003640
lbl_fn_8001A65C_00003614:
    lwz r0, 0x0(r5)
    cmpwi r0, 0x0
    beq lbl_fn_8001A65C_00003634
    slwi r5, r6, 2
    lwzx r0, r3, r5
    stw r0, 0x0(r8)
    stwx r4, r3, r5
    b lbl_fn_8001A65C_00003640
lbl_fn_8001A65C_00003634:
    addi r5, r5, 0x4
    addi r6, r6, 0x1
    bdnz lbl_fn_8001A65C_00003614
lbl_fn_8001A65C_00003640:
    lwz r0, 0x0(r8)
    cmpwi r0, 0x0
    beqlr
lbl_fn_8001A65C_0000364C:
    addi r7, r7, 0x1
    addi r8, r8, 0x4
    cmpwi r7, 0x10
    blt lbl_fn_8001A65C_000035EC
    blr
}

asm void fn_8001A788(void)
{
    nofralloc
    li r9, 0x0
    mr r8, r3
    li r0, 0x0
lbl_fn_8001A788_0000366C:
    lwz r4, lbl_8087EE60
    li r10, 0x0
    cmpwi r4, 0x0
    beq lbl_fn_8001A788_000036E0
    lwz r4, 0x7e0(r4)
    rlwinm r4, r4, 0, 20, 20
    cmplwi r4, 0x800
    beq lbl_fn_8001A788_000036E0
    lwz r7, lbl_8087FA00
    li r4, 0x0
    lwz r5, 0x48(r7)
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_fn_8001A788_000036E0
lbl_fn_8001A788_000036A4:
    lwz r5, 0x4c(r7)
    lwz r6, 0x0(r8)
    add r5, r5, r4
    lwz r5, 0x218(r5)
    cmpwi r5, 0x0
    beq lbl_fn_8001A788_000036C4
    lwz r5, 0x8c(r5)
    b lbl_fn_8001A788_000036C8
lbl_fn_8001A788_000036C4:
    li r5, 0x0
lbl_fn_8001A788_000036C8:
    cmplw r6, r5
    bne lbl_fn_8001A788_000036D8
    li r10, 0x1
    b lbl_fn_8001A788_000036E0
lbl_fn_8001A788_000036D8:
    addi r4, r4, 0x37c
    bdnz lbl_fn_8001A788_000036A4
lbl_fn_8001A788_000036E0:
    cmpwi r10, 0x0
    bne lbl_fn_8001A788_000036EC
    stw r0, 0x0(r8)
lbl_fn_8001A788_000036EC:
    addi r9, r9, 0x1
    addi r8, r8, 0x4
    cmpwi r9, 0x10
    blt lbl_fn_8001A788_0000366C
    mr r8, r3
    li r7, 0x0
    li r4, 0x0
lbl_fn_8001A788_00003708:
    lwz r0, 0x0(r8)
    cmpwi r0, 0x0
    bne lbl_fn_8001A788_00003768
    addi r6, r7, 0x1
    slwi r5, r6, 2
    subfic r0, r6, 0x10
    add r5, r3, r5
    mtctr r0
    cmpwi r6, 0x10
    bge lbl_fn_8001A788_0000375C
lbl_fn_8001A788_00003730:
    lwz r0, 0x0(r5)
    cmpwi r0, 0x0
    beq lbl_fn_8001A788_00003750
    slwi r5, r6, 2
    lwzx r0, r3, r5
    stw r0, 0x0(r8)
    stwx r4, r3, r5
    b lbl_fn_8001A788_0000375C
lbl_fn_8001A788_00003750:
    addi r5, r5, 0x4
    addi r6, r6, 0x1
    bdnz lbl_fn_8001A788_00003730
lbl_fn_8001A788_0000375C:
    lwz r0, 0x0(r8)
    cmpwi r0, 0x0
    beqlr
lbl_fn_8001A788_00003768:
    addi r7, r7, 0x1
    addi r8, r8, 0x4
    cmpwi r7, 0x10
    blt lbl_fn_8001A788_00003708
    blr
}

asm void fn_8001A8A4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    lis r6, 0x4330
    cmpwi r4, 0x0
    li r0, -0x1
    stw r6, 0x8(r1)
    stw r6, 0x10(r1)
    beq lbl_fn_8001A8A4_000037A4
    cmpwi r4, 0x1
    beq lbl_fn_8001A8A4_000038D8
    b lbl_fn_8001A8A4_00003A04
lbl_fn_8001A8A4_000037A4:
    lis r6, lbl_8072FF50@ha
    lis r7, 0x2
    li r4, 0x10
    mr r8, r5
    subi r7, r7, 0x7961
    lfd f3, lbl_8072FF50@l(r6)
    li r9, 0x0
    lfs f2, lbl_80880760
    mtctr r4
lbl_fn_8001A8A4_000037C8:
    lwz r6, 0x0(r8)
    cmpwi r6, 0x0
    beq lbl_fn_8001A8A4_000038C8
    cmpwi r3, 0x0
    li r4, -0x1
    beq lbl_fn_8001A8A4_000037EC
    cmpwi r3, 0x1
    beq lbl_fn_8001A8A4_0000381C
    b lbl_fn_8001A8A4_00003848
lbl_fn_8001A8A4_000037EC:
    lwz r4, 0x940(r6)
    lfs f0, 0x7d8(r6)
    xoris r4, r4, 0x8000
    stw r4, 0xc(r1)
    lfd f1, 0x8(r1)
    fsubs f1, f1, f3
    fdivs f0, f0, f1
    fmuls f0, f2, f0
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r4, 0x1c(r1)
    b lbl_fn_8001A8A4_00003848
lbl_fn_8001A8A4_0000381C:
    lwz r4, 0x944(r6)
    lfs f0, 0x7dc(r6)
    xoris r4, r4, 0x8000
    stw r4, 0x14(r1)
    lfd f1, 0x10(r1)
    fsubs f1, f1, f3
    fdivs f0, f0, f1
    fmuls f0, f2, f0
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r4, 0x1c(r1)
lbl_fn_8001A8A4_00003848:
    cmpw r4, r7
    bge lbl_fn_8001A8A4_000038C8
    cmpwi r3, 0x0
    mr r0, r9
    li r7, -0x1
    beq lbl_fn_8001A8A4_0000386C
    cmpwi r3, 0x1
    beq lbl_fn_8001A8A4_0000389C
    b lbl_fn_8001A8A4_000038C8
lbl_fn_8001A8A4_0000386C:
    lwz r4, 0x940(r6)
    lfs f0, 0x7d8(r6)
    xoris r4, r4, 0x8000
    stw r4, 0xc(r1)
    lfd f1, 0x8(r1)
    fsubs f1, f1, f3
    fdivs f0, f0, f1
    fmuls f0, f2, f0
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r7, 0x1c(r1)
    b lbl_fn_8001A8A4_000038C8
lbl_fn_8001A8A4_0000389C:
    lwz r4, 0x944(r6)
    lfs f0, 0x7dc(r6)
    xoris r4, r4, 0x8000
    stw r4, 0x14(r1)
    lfd f1, 0x10(r1)
    fsubs f1, f1, f3
    fdivs f0, f0, f1
    fmuls f0, f2, f0
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r7, 0x1c(r1)
lbl_fn_8001A8A4_000038C8:
    addi r8, r8, 0x4
    addi r9, r9, 0x1
    bdnz lbl_fn_8001A8A4_000037C8
    b lbl_fn_8001A8A4_00003A04
lbl_fn_8001A8A4_000038D8:
    lis r6, lbl_8072FF50@ha
    li r4, 0x10
    mr r7, r5
    lfd f3, lbl_8072FF50@l(r6)
    lfs f2, lbl_80880760
    li r8, 0x0
    li r9, 0x0
    mtctr r4
lbl_fn_8001A8A4_000038F8:
    lwz r6, 0x0(r7)
    cmpwi r6, 0x0
    beq lbl_fn_8001A8A4_000039F8
    cmpwi r3, 0x0
    li r4, -0x1
    beq lbl_fn_8001A8A4_0000391C
    cmpwi r3, 0x1
    beq lbl_fn_8001A8A4_0000394C
    b lbl_fn_8001A8A4_00003978
lbl_fn_8001A8A4_0000391C:
    lwz r4, 0x940(r6)
    lfs f0, 0x7d8(r6)
    xoris r4, r4, 0x8000
    stw r4, 0xc(r1)
    lfd f1, 0x8(r1)
    fsubs f1, f1, f3
    fdivs f0, f0, f1
    fmuls f0, f2, f0
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r4, 0x1c(r1)
    b lbl_fn_8001A8A4_00003978
lbl_fn_8001A8A4_0000394C:
    lwz r4, 0x944(r6)
    lfs f0, 0x7dc(r6)
    xoris r4, r4, 0x8000
    stw r4, 0x14(r1)
    lfd f1, 0x10(r1)
    fsubs f1, f1, f3
    fdivs f0, f0, f1
    fmuls f0, f2, f0
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r4, 0x1c(r1)
lbl_fn_8001A8A4_00003978:
    cmpw r4, r8
    ble lbl_fn_8001A8A4_000039F8
    cmpwi r3, 0x0
    mr r0, r9
    li r8, -0x1
    beq lbl_fn_8001A8A4_0000399C
    cmpwi r3, 0x1
    beq lbl_fn_8001A8A4_000039CC
    b lbl_fn_8001A8A4_000039F8
lbl_fn_8001A8A4_0000399C:
    lwz r4, 0x940(r6)
    lfs f0, 0x7d8(r6)
    xoris r4, r4, 0x8000
    stw r4, 0xc(r1)
    lfd f1, 0x8(r1)
    fsubs f1, f1, f3
    fdivs f0, f0, f1
    fmuls f0, f2, f0
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r8, 0x1c(r1)
    b lbl_fn_8001A8A4_000039F8
lbl_fn_8001A8A4_000039CC:
    lwz r4, 0x944(r6)
    lfs f0, 0x7dc(r6)
    xoris r4, r4, 0x8000
    stw r4, 0x14(r1)
    lfd f1, 0x10(r1)
    fsubs f1, f1, f3
    fdivs f0, f0, f1
    fmuls f0, f2, f0
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r8, 0x1c(r1)
lbl_fn_8001A8A4_000039F8:
    addi r7, r7, 0x4
    addi r9, r9, 0x1
    bdnz lbl_fn_8001A8A4_000038F8
lbl_fn_8001A8A4_00003A04:
    cmpwi r0, 0x0
    blt lbl_fn_8001A8A4_00003AA8
    li r3, 0x2
    mr r6, r5
    li r7, 0x0
    li r4, 0x0
    mtctr r3
lbl_fn_8001A8A4_00003A20:
    cmpw r7, r0
    beq lbl_fn_8001A8A4_00003A2C
    stw r4, 0x0(r6)
lbl_fn_8001A8A4_00003A2C:
    addi r7, r7, 0x1
    cmpw r7, r0
    beq lbl_fn_8001A8A4_00003A3C
    stw r4, 0x4(r6)
lbl_fn_8001A8A4_00003A3C:
    addi r7, r7, 0x1
    cmpw r7, r0
    beq lbl_fn_8001A8A4_00003A4C
    stw r4, 0x8(r6)
lbl_fn_8001A8A4_00003A4C:
    addi r7, r7, 0x1
    cmpw r7, r0
    beq lbl_fn_8001A8A4_00003A5C
    stw r4, 0xc(r6)
lbl_fn_8001A8A4_00003A5C:
    addi r7, r7, 0x1
    cmpw r7, r0
    beq lbl_fn_8001A8A4_00003A6C
    stw r4, 0x10(r6)
lbl_fn_8001A8A4_00003A6C:
    addi r7, r7, 0x1
    cmpw r7, r0
    beq lbl_fn_8001A8A4_00003A7C
    stw r4, 0x14(r6)
lbl_fn_8001A8A4_00003A7C:
    addi r7, r7, 0x1
    cmpw r7, r0
    beq lbl_fn_8001A8A4_00003A8C
    stw r4, 0x18(r6)
lbl_fn_8001A8A4_00003A8C:
    addi r7, r7, 0x1
    cmpw r7, r0
    beq lbl_fn_8001A8A4_00003A9C
    stw r4, 0x1c(r6)
lbl_fn_8001A8A4_00003A9C:
    addi r6, r6, 0x20
    addi r7, r7, 0x1
    bdnz lbl_fn_8001A8A4_00003A20
lbl_fn_8001A8A4_00003AA8:
    mr r8, r5
    li r7, 0x0
    li r3, 0x0
lbl_fn_8001A8A4_00003AB4:
    lwz r0, 0x0(r8)
    cmpwi r0, 0x0
    bne lbl_fn_8001A8A4_00003B14
    addi r6, r7, 0x1
    slwi r4, r6, 2
    subfic r0, r6, 0x10
    add r4, r5, r4
    mtctr r0
    cmpwi r6, 0x10
    bge lbl_fn_8001A8A4_00003B08
lbl_fn_8001A8A4_00003ADC:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8001A8A4_00003AFC
    slwi r4, r6, 2
    lwzx r0, r5, r4
    stw r0, 0x0(r8)
    stwx r3, r5, r4
    b lbl_fn_8001A8A4_00003B08
lbl_fn_8001A8A4_00003AFC:
    addi r4, r4, 0x4
    addi r6, r6, 0x1
    bdnz lbl_fn_8001A8A4_00003ADC
lbl_fn_8001A8A4_00003B08:
    lwz r0, 0x0(r8)
    cmpwi r0, 0x0
    beq lbl_fn_8001A8A4_00003B24
lbl_fn_8001A8A4_00003B14:
    addi r7, r7, 0x1
    addi r8, r8, 0x4
    cmpwi r7, 0x10
    blt lbl_fn_8001A8A4_00003AB4
lbl_fn_8001A8A4_00003B24:
    addi r1, r1, 0x20
    blr
}

asm void fn_8001AC54(void)
{
    nofralloc
    lfs f2, lbl_80880764
    lis r4, lbl_8072FF50@ha
    lfd f1, lbl_8072FF50@l(r4)
    li r0, 0x4
    fmr f3, f2
    stwu r1, -0x10(r1)
    li r6, 0x0
    lis r4, 0x4330
    mtctr r0
lbl_fn_8001AC54_00003B50:
    lwz r5, 0x0(r3)
    cmpwi r5, 0x0
    beq lbl_fn_8001AC54_00003B80
    lwz r0, 0x940(r5)
    lfs f0, 0x7d8(r5)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    fadds f2, f2, f0
    stw r4, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f1
    fadds f3, f3, f0
lbl_fn_8001AC54_00003B80:
    lwz r5, 0x4(r3)
    cmpwi r5, 0x0
    beq lbl_fn_8001AC54_00003BB0
    lwz r0, 0x940(r5)
    lfs f0, 0x7d8(r5)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    fadds f2, f2, f0
    stw r4, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f1
    fadds f3, f3, f0
lbl_fn_8001AC54_00003BB0:
    lwz r5, 0x8(r3)
    cmpwi r5, 0x0
    beq lbl_fn_8001AC54_00003BE0
    lwz r0, 0x940(r5)
    lfs f0, 0x7d8(r5)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    fadds f2, f2, f0
    stw r4, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f1
    fadds f3, f3, f0
lbl_fn_8001AC54_00003BE0:
    lwz r5, 0xc(r3)
    cmpwi r5, 0x0
    beq lbl_fn_8001AC54_00003C10
    lwz r0, 0x940(r5)
    lfs f0, 0x7d8(r5)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    fadds f2, f2, f0
    stw r4, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f1
    fadds f3, f3, f0
lbl_fn_8001AC54_00003C10:
    addi r3, r3, 0x10
    addi r6, r6, 0x3
    bdnz lbl_fn_8001AC54_00003B50
    fabs f1, f3
    lfs f0, lbl_80880768
    frsp f1, f1
    fcmpo cr0, f1, f0
    bge lbl_fn_8001AC54_00003C38
    li r3, 0x0
    b lbl_fn_8001AC54_00003C50
lbl_fn_8001AC54_00003C38:
    fdivs f1, f2, f3
    lfs f0, lbl_80880760
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r3, 0xc(r1)
lbl_fn_8001AC54_00003C50:
    addi r1, r1, 0x10
    blr
}

asm void fn_8001AD80(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    lfs f1, lbl_80880764
    stw r0, 0x24(r1)
    beq lbl_fn_8001AD80_00003CB0
    cmpwi r4, 0x0
    beq lbl_fn_8001AD80_00003CB0
    lfs f1, 0x530(r3)
    lfs f0, 0x530(r4)
    lfs f3, 0x52c(r3)
    fsubs f4, f1, f0
    lfs f2, 0x52c(r4)
    lfs f1, 0x528(r3)
    addi r3, r1, 0x8
    lfs f0, 0x528(r4)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f4, 0x10(r1)
    bl fn_805F9940
lbl_fn_8001AD80_00003CB0:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8001ADE8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lfs f1, lbl_80880764
    stw r0, 0x24(r1)
    lwz r5, lbl_8087F430
    cmpwi r5, 0x0
    beq lbl_fn_8001ADE8_00003CE4
    lwz r7, 0x10d8(r5)
    b lbl_fn_8001ADE8_00003CE8
lbl_fn_8001ADE8_00003CE4:
    li r7, 0x0
lbl_fn_8001ADE8_00003CE8:
    cmpwi r7, 0x0
    beq lbl_fn_8001ADE8_00003D38
    lwz r0, 0x78(r7)
    li r6, 0x0
    li r8, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8001ADE8_00003D30
lbl_fn_8001ADE8_00003D08:
    lwz r5, 0x7c(r7)
    lwzx r0, r5, r8
    cmpw r3, r0
    bne lbl_fn_8001ADE8_00003D24
    mulli r0, r6, 0x28
    add r5, r5, r0
    b lbl_fn_8001ADE8_00003D3C
lbl_fn_8001ADE8_00003D24:
    addi r8, r8, 0x28
    addi r6, r6, 0x1
    bdnz lbl_fn_8001ADE8_00003D08
lbl_fn_8001ADE8_00003D30:
    li r5, 0x0
    b lbl_fn_8001ADE8_00003D3C
lbl_fn_8001ADE8_00003D38:
    li r5, 0x0
lbl_fn_8001ADE8_00003D3C:
    cmpwi r5, 0x0
    beq lbl_fn_8001ADE8_00003D84
    cmpwi r4, 0x0
    beq lbl_fn_8001ADE8_00003D84
    lfs f1, 0x530(r4)
    addi r3, r1, 0x8
    lfs f0, 0xc(r5)
    lfs f3, 0x52c(r4)
    fsubs f4, f1, f0
    lfs f2, 0x8(r5)
    lfs f1, 0x528(r4)
    lfs f0, 0x4(r5)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f4, 0x10(r1)
    bl fn_805F9940
lbl_fn_8001ADE8_00003D84:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8001AEBC(void)
{
    nofralloc
    lwz r0, lbl_8087F890
    mr r4, r3
    li r3, 0x0
    cmpwi r0, 0x0
    beqlr
    mr r3, r0
    b fn_8011FE3C
    blr
}

asm void fn_8001AEDC(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x40
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    bl _savegpr_26
    lwz r30, lbl_8087EE60
    cmplwi r3, 0x16
    lis r0, 0x4330
    stw r0, 0x8(r1)
    mr r8, r4
    mr r29, r5
    stw r0, 0x10(r1)
    mr r26, r6
    mr r27, r7
    addi r31, r30, 0xc58
    bgt lbl_fn_8001AEDC_0000435C
    lis r7, jumptable_80775BE8@ha
    slwi r0, r3, 2
    addi r7, r7, jumptable_80775BE8@l
    lwzx r7, r7, r0
    mtctr r7
    bctr
    lwz r0, 0x48(r30)
    lwz r28, 0x0(r4)
    cmpwi r0, 0x3
    bne lbl_fn_8001AEDC_00003E4C
    mr r3, r30
    bl fn_800142D4
    add. r0, r28, r3
    ble lbl_fn_8001AEDC_00003E44
    mr r3, r30
    bl fn_800142D4
    add r28, r28, r3
    b lbl_fn_8001AEDC_00003E78
lbl_fn_8001AEDC_00003E44:
    li r28, 0x0
    b lbl_fn_8001AEDC_00003E78
lbl_fn_8001AEDC_00003E4C:
    cmpwi r0, 0x2
    bne lbl_fn_8001AEDC_00003E78
    mr r3, r30
    bl fn_800143E8
    add. r0, r28, r3
    ble lbl_fn_8001AEDC_00003E74
    mr r3, r30
    bl fn_800143E8
    add r28, r28, r3
    b lbl_fn_8001AEDC_00003E78
lbl_fn_8001AEDC_00003E74:
    li r28, 0x0
lbl_fn_8001AEDC_00003E78:
    addi r29, r30, 0x7d4
    mr r3, r29
    bl fn_80134270
    cmpwi r3, 0x0
    bne lbl_fn_8001AEDC_00003EAC
    mr r3, r29
    bl fn_80134290
    cmpwi r3, 0x0
    bne lbl_fn_8001AEDC_00003EAC
    mr r3, r29
    bl fn_801342B0
    cmpwi r3, 0x0
    beq lbl_fn_8001AEDC_00003EC0
lbl_fn_8001AEDC_00003EAC:
    lwz r0, 0xc(r29)
    extrwi r0, r0, 1, 20
    neg r0, r0
    rlwinm r0, r0, 0, 26, 29
    add r28, r28, r0
lbl_fn_8001AEDC_00003EC0:
    mr r3, r29
    li r4, 0x1a
    bl fn_80134134
    cmpwi r3, 0x0
    beq lbl_fn_8001AEDC_00003F2C
    xoris r3, r28, 0x8000
    stw r3, 0xc(r1)
    lis r4, lbl_8072FF50@ha
    lfs f1, lbl_80880770
    lfd f2, lbl_8072FF50@l(r4)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f2
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r0, 0x1c(r1)
    cmpwi r0, 0x3c
    ble lbl_fn_8001AEDC_00003F28
    stw r3, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f2
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x20(r1)
    lwz r28, 0x24(r1)
    b lbl_fn_8001AEDC_00003F2C
lbl_fn_8001AEDC_00003F28:
    li r28, 0x3c
lbl_fn_8001AEDC_00003F2C:
    mr r3, r31
    mr r4, r30
    mr r5, r28
    bl fn_8011C2D4
    b lbl_fn_8001AEDC_0000435C
    lwz r5, 0x0(r8)
    mr r3, r31
    mr r4, r30
    bl fn_8011C314
    b lbl_fn_8001AEDC_0000435C
    lwz r5, 0x0(r8)
    mr r3, r31
    mr r4, r30
    bl fn_8011C378
    b lbl_fn_8001AEDC_0000435C
    lwz r0, 0x0(r5)
    lis r3, lbl_8072FF50@ha
    lfd f1, lbl_8072FF50@l(r3)
    mr r3, r31
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lwz r5, 0x0(r8)
    mr r4, r30
    lfd f0, 0x8(r1)
    fsubs f1, f0, f1
    bl fn_8011C3F4
    b lbl_fn_8001AEDC_0000435C
    lwz r3, 0x0(r4)
    lwz r28, 0x0(r5)
    cmpwi r3, 0x0
    beq lbl_fn_8001AEDC_00003FE4
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 21
    beq lbl_fn_8001AEDC_00003FE4
    xoris r0, r28, 0x8000
    stw r0, 0x14(r1)
    lis r4, lbl_8072FF50@ha
    lwz r3, lbl_8087F0A8
    lfd f2, lbl_8072FF50@l(r4)
    lfd f1, 0x10(r1)
    lfs f0, 0x468(r3)
    fsubs f1, f1, f2
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x20(r1)
    lwz r28, 0x24(r1)
lbl_fn_8001AEDC_00003FE4:
    lwz r0, 0x48(r30)
    cmpwi r0, 0x3
    bne lbl_fn_8001AEDC_00004018
    mr r3, r30
    bl fn_800142D4
    add. r0, r28, r3
    ble lbl_fn_8001AEDC_00004010
    mr r3, r30
    bl fn_800142D4
    add r28, r28, r3
    b lbl_fn_8001AEDC_00004048
lbl_fn_8001AEDC_00004010:
    li r28, 0x0
    b lbl_fn_8001AEDC_00004048
lbl_fn_8001AEDC_00004018:
    cmpwi r0, 0x2
    bne lbl_fn_8001AEDC_00004048
    mr r3, r30
    bl fn_800143E8
    add r0, r28, r3
    cmpwi r0, 0x1e
    ble lbl_fn_8001AEDC_00004044
    mr r3, r30
    bl fn_800143E8
    add r28, r28, r3
    b lbl_fn_8001AEDC_00004048
lbl_fn_8001AEDC_00004044:
    li r28, 0x1e
lbl_fn_8001AEDC_00004048:
    addi r3, r30, 0x7d4
    li r4, 0x1a
    bl fn_80134134
    cmpwi r3, 0x0
    beq lbl_fn_8001AEDC_000040B4
    xoris r3, r28, 0x8000
    stw r3, 0xc(r1)
    lis r4, lbl_8072FF50@ha
    lfs f1, lbl_80880770
    lfd f2, lbl_8072FF50@l(r4)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f2
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x20(r1)
    lwz r0, 0x24(r1)
    cmpwi r0, 0x3c
    ble lbl_fn_8001AEDC_000040B0
    stw r3, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f2
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r28, 0x1c(r1)
    b lbl_fn_8001AEDC_000040B4
lbl_fn_8001AEDC_000040B0:
    li r28, 0x3c
lbl_fn_8001AEDC_000040B4:
    mr r3, r31
    mr r4, r30
    mr r5, r28
    bl fn_8011C46C
    b lbl_fn_8001AEDC_0000435C
    mr r3, r31
    mr r4, r30
    bl fn_8011C4AC
    b lbl_fn_8001AEDC_0000435C
    lwz r5, 0x0(r8)
    mr r3, r31
    mr r4, r30
    bl fn_8011C610
    b lbl_fn_8001AEDC_0000435C
    lwz r5, 0x0(r8)
    mr r3, r31
    lwz r6, 0x0(r29)
    mr r4, r30
    bl fn_8011C650
    b lbl_fn_8001AEDC_0000435C
    lwz r0, 0x0(r5)
    lis r3, lbl_8072FF50@ha
    lfd f1, lbl_8072FF50@l(r3)
    mr r3, r31
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lwz r5, 0x0(r8)
    mr r4, r30
    lfd f0, 0x8(r1)
    fsubs f1, f0, f1
    bl fn_8011C6C4
    b lbl_fn_8001AEDC_0000435C
    lwz r0, 0x0(r5)
    lis r3, lbl_8072FF50@ha
    lfd f1, lbl_8072FF50@l(r3)
    mr r3, r31
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lwz r5, 0x0(r8)
    mr r4, r30
    lfd f0, 0x10(r1)
    fsubs f1, f0, f1
    bl fn_8011C7C0
    b lbl_fn_8001AEDC_0000435C
    mr r3, r31
    mr r4, r30
    bl fn_8011C850
    b lbl_fn_8001AEDC_0000435C
    mr r3, r31
    mr r4, r30
    bl fn_8011C8E4
    b lbl_fn_8001AEDC_0000435C
    lwz r5, 0x0(r8)
    mr r3, r31
    mr r4, r30
    bl fn_8011C8EC
    b lbl_fn_8001AEDC_0000435C
    lwz r0, 0x0(r5)
    lis r3, lbl_8072FF50@ha
    lfd f1, lbl_8072FF50@l(r3)
    mr r3, r31
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lwz r5, 0x0(r8)
    mr r4, r30
    lfd f0, 0x8(r1)
    fsubs f1, f0, f1
    bl fn_8011C92C
    b lbl_fn_8001AEDC_0000435C
    lwz r0, 0x0(r5)
    lis r3, lbl_8072FF50@ha
    lfd f1, lbl_8072FF50@l(r3)
    mr r3, r31
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lwz r5, 0x0(r8)
    mr r4, r30
    lfd f0, 0x10(r1)
    fsubs f1, f0, f1
    bl fn_8011C97C
    b lbl_fn_8001AEDC_0000435C
    mr r3, r31
    mr r4, r30
    bl fn_8011C9F8
    b lbl_fn_8001AEDC_0000435C
    mr r3, r31
    mr r4, r30
    bl fn_8011CA00
    b lbl_fn_8001AEDC_0000435C
    lwz r0, 0x0(r4)
    lis r3, lbl_8072FF50@ha
    lfd f1, lbl_8072FF50@l(r3)
    mr r4, r30
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F048
    lfd f0, 0x8(r1)
    fsubs f31, f0, f1
    bl fn_8010C948
    fmr f1, f31
    mr r5, r3
    mr r3, r31
    mr r4, r30
    bl fn_8011CA08
    b lbl_fn_8001AEDC_0000435C
    lwz r3, 0x0(r4)
    bl fn_802180A8
    lwz r6, 0x0(r29)
    mr r5, r3
    mr r3, r31
    mr r4, r30
    bl fn_8011CC30
    b lbl_fn_8001AEDC_0000435C
    lwz r3, 0x0(r4)
    bl fn_802180A8
    mr r28, r3
    lwz r3, 0x0(r29)
    bl fn_802180A8
    lwz r7, 0x0(r26)
    mr r6, r3
    mr r3, r31
    mr r4, r30
    mr r5, r28
    bl fn_8011CCA0
    b lbl_fn_8001AEDC_0000435C
    lwz r3, 0x0(r4)
    bl fn_802180A8
    mr r28, r3
    lwz r3, 0x0(r29)
    bl fn_802180A8
    mr r29, r3
    lwz r3, 0x0(r26)
    bl fn_802180A8
    lwz r8, 0x0(r27)
    mr r7, r3
    mr r3, r31
    mr r4, r30
    mr r5, r28
    mr r6, r29
    bl fn_8011CD1C
    b lbl_fn_8001AEDC_0000435C
    lwz r0, 0x0(r6)
    lis r4, lbl_8072FF50@ha
    lfd f2, lbl_8072FF50@l(r4)
    mr r3, r31
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lwz r5, 0x0(r5)
    mr r4, r30
    lfd f0, 0x8(r1)
    xoris r0, r5, 0x8000
    stw r0, 0x14(r1)
    fsubs f3, f0, f2
    lfs f0, lbl_80880774
    lfd f1, 0x10(r1)
    lwz r5, 0x0(r8)
    fsubs f1, f1, f2
    fmuls f2, f0, f3
    bl fn_8011CA5C
    b lbl_fn_8001AEDC_0000435C
    lwz r0, 0x0(r4)
    lis r3, lbl_8072FF50@ha
    lfd f1, lbl_8072FF50@l(r3)
    mr r3, r31
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    mr r4, r30
    lfd f0, 0x10(r1)
    fsubs f1, f0, f1
    bl fn_8011CAE4
lbl_fn_8001AEDC_0000435C:
    addi r11, r1, 0x40
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    bl _restgpr_26
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}
