#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void DCFlushRange(void);
extern void OSAllocFromMEM1ArenaLo(void);
extern void OSDisableInterrupts(void);
extern void OSEnableInterrupts(void);
extern void OSGetArenaLo(void);
extern void OSReport(const char* msg, ...);
extern void PPCHalt(void);
extern void _restgpr_17(void);
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _savegpr_17(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void fn_805ED1C0(void);
extern void fn_805EFF70(void);
extern void fn_805F02A0(void);
extern void fn_805F4420(void);
extern void fn_805F6660(void);
extern void fn_805F6780(void);
extern void fn_805F67F0(void);
extern void fn_805F6870(void);
extern void fn_80604FB0(void);
extern void fn_806050D0(void);
extern void fn_80605140(void);
extern void fn_806051C0(void);
extern void memmove(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_8079CCA8[];
extern u8 lbl_8079CE28[];
extern u8 lbl_807CB5E8[];

/* Small data declarations */
extern u32 lbl_8087E788;
extern u32 lbl_8087E790;
extern u32 lbl_8087FC10;
extern u32 lbl_8087FC14;
extern u32 lbl_8087FC18;
extern u32 lbl_8087FC1C;
extern u32 lbl_808884F8;
extern u32 lbl_808884FC;
extern u32 lbl_80888500;
extern u32 lbl_80888504;
extern u32 lbl_80888508;
extern u32 lbl_8088850C;
extern u32 lbl_80888510;
extern u32 lbl_80888514;
extern u32 lbl_80888518;
extern u32 lbl_8088851C;
extern u32 lbl_80888520;
extern u32 lbl_80888524;
extern u32 lbl_80888528;
extern u32 lbl_80888530;
extern u32 lbl_80888538;
extern u32 lbl_8088853C;

/* Function declarations */
void fn_805F05B0(void);
void fn_805F0BA0(void);
void fn_805F0CE0(void);
void fn_805F0E90(void);
void OSSetFontEncode(void);
void fn_805F0F60(void);
void fn_805F1270(void);
void fn_805F1390(void);
void fn_805F1490(void);
void fn_805F1650(void);
void fn_805F18E0(void);
void fn_805F1B50(void);
void fn_805F1D30(void);

asm void fn_805F05B0(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    lis r0, 0x4330
    stw r31, 0x4c(r1)
    stw r30, 0x48(r1)
    stw r29, 0x44(r1)
    stw r28, 0x40(r1)
    stw r0, 0x20(r1)
    stw r0, 0x28(r1)
    bl OSEnableInterrupts
    lis r29, lbl_807CB5E8@ha
    addi r29, r29, lbl_807CB5E8@l
    lwz r28, 0x8(r29)
    mr r3, r28
    bl strlen
    addi r30, r3, 0x1
    li r4, 0x20
    mr r3, r30
    bl OSAllocFromMEM1ArenaLo
    mr r4, r28
    mr r5, r30
    bl memmove
    stw r3, 0x8(r29)
    lis r3, 0xa
    addi r3, r3, 0x1004
    li r4, 0x20
    bl OSAllocFromMEM1ArenaLo
    mr r31, r3
    bl OSGetArenaLo
    mr r4, r3
    mr r3, r31
    bl fn_805F1270
    lis r3, 0x9
    li r4, 0x20
    addi r3, r3, 0x6000
    bl OSAllocFromMEM1ArenaLo
    lwz r0, 0x4(r29)
    mr r30, r3
    stw r0, 0x18(r1)
    lfd f0, lbl_80888530
    lbz r4, 0x1a(r1)
    stw r4, 0x24(r1)
    lbz r0, 0x18(r1)
    stw r0, 0x2c(r1)
    lfd f2, 0x20(r1)
    lfd f1, 0x28(r1)
    lbz r3, 0x19(r1)
    fsubs f6, f2, f0
    stw r3, 0x24(r1)
    fsubs f3, f1, f0
    lfs f2, lbl_80888504
    lfd f1, 0x20(r1)
    fmuls f5, f2, f3
    lfs f2, lbl_80888500
    stw r4, 0x2c(r1)
    fsubs f4, f1, f0
    lfs f3, lbl_80888508
    fmuls f11, f2, f6
    lfd f1, 0x28(r1)
    fmuls f3, f3, f4
    stw r0, 0x24(r1)
    fsubs f2, f1, f0
    lfs f9, lbl_80888510
    lfd f1, 0x20(r1)
    fadds f10, f5, f3
    stw r3, 0x2c(r1)
    fsubs f6, f1, f0
    lfd f1, 0x28(r1)
    fmuls f8, f9, f2
    lfs f4, lbl_80888514
    stw r0, 0x24(r1)
    fsubs f3, f1, f0
    lfs f2, lbl_80888518
    fmuls f7, f4, f6
    lfd f1, 0x20(r1)
    fmuls f6, f2, f3
    stw r3, 0x2c(r1)
    fsubs f5, f1, f0
    lfs f3, lbl_8088851C
    lfd f1, 0x28(r1)
    stw r4, 0x24(r1)
    fsubs f4, f1, f0
    lfs f1, lbl_80888520
    lfd f2, 0x20(r1)
    fmuls f5, f9, f5
    fsubs f6, f7, f6
    lfs f9, lbl_808884FC
    fmuls f3, f3, f4
    lfs f4, lbl_808884F8
    fsubs f0, f2, f0
    fadds f7, f11, f10
    fsubs f2, f5, f3
    lfs f3, lbl_8088850C
    fmuls f0, f1, f0
    fadds f1, f8, f6
    lfs f6, lbl_80888524
    fadds f5, f9, f7
    fsubs f0, f2, f0
    fadds f1, f3, f1
    fadds f5, f4, f5
    fadds f0, f3, f0
    fadds f2, f4, f1
    fcmpo cr0, f5, f6
    fadds f1, f4, f0
    ble lbl_fn_805F05B0_000001AC
    b lbl_fn_805F05B0_000001C0
lbl_fn_805F05B0_000001AC:
    fcmpo cr0, f5, f9
    bge lbl_fn_805F05B0_000001B8
    b lbl_fn_805F05B0_000001BC
lbl_fn_805F05B0_000001B8:
    fmr f9, f5
lbl_fn_805F05B0_000001BC:
    fmr f6, f9
lbl_fn_805F05B0_000001C0:
    fctiwz f0, f6
    lfs f3, lbl_80888528
    stfd f0, 0x30(r1)
    fcmpo cr0, f2, f3
    lwz r0, 0x34(r1)
    stb r0, 0xc(r1)
    ble lbl_fn_805F05B0_000001E0
    b lbl_fn_805F05B0_000001F4
lbl_fn_805F05B0_000001E0:
    lfs f3, lbl_808884FC
    fcmpo cr0, f2, f3
    bge lbl_fn_805F05B0_000001F0
    b lbl_fn_805F05B0_000001F4
lbl_fn_805F05B0_000001F0:
    fmr f3, f2
lbl_fn_805F05B0_000001F4:
    fctiwz f0, f3
    lfs f2, lbl_80888528
    stfd f0, 0x30(r1)
    fcmpo cr0, f1, f2
    lwz r0, 0x34(r1)
    stb r0, 0xd(r1)
    ble lbl_fn_805F05B0_00000214
    b lbl_fn_805F05B0_00000228
lbl_fn_805F05B0_00000214:
    lfs f2, lbl_808884FC
    fcmpo cr0, f1, f2
    bge lbl_fn_805F05B0_00000224
    b lbl_fn_805F05B0_00000228
lbl_fn_805F05B0_00000224:
    fmr f2, f1
lbl_fn_805F05B0_00000228:
    fctiwz f0, f2
    li r0, 0x0
    stb r0, 0xf(r1)
    mr r4, r30
    li r5, 0x0
    li r0, 0x14
    stfd f0, 0x30(r1)
    lwz r3, 0x34(r1)
    stb r3, 0xe(r1)
    lwz r3, 0xc(r1)
    stw r3, 0x1c(r1)
    lbz r6, 0x1d(r1)
    lbz r7, 0x1e(r1)
    lbz r3, 0x1c(r1)
lbl_fn_805F05B0_00000260:
    mtctr r0
lbl_fn_805F05B0_00000264:
    stb r3, 0x0(r4)
    stb r6, 0x1(r4)
    stb r3, 0x2(r4)
    stb r7, 0x3(r4)
    stb r3, 0x4(r4)
    stb r6, 0x5(r4)
    stb r3, 0x6(r4)
    stb r7, 0x7(r4)
    stb r3, 0x8(r4)
    stb r6, 0x9(r4)
    stb r3, 0xa(r4)
    stb r7, 0xb(r4)
    stb r3, 0xc(r4)
    stb r6, 0xd(r4)
    stb r3, 0xe(r4)
    stb r7, 0xf(r4)
    stb r3, 0x10(r4)
    stb r6, 0x11(r4)
    stb r3, 0x12(r4)
    stb r7, 0x13(r4)
    stb r3, 0x14(r4)
    stb r6, 0x15(r4)
    stb r3, 0x16(r4)
    stb r7, 0x17(r4)
    stb r3, 0x18(r4)
    stb r6, 0x19(r4)
    stb r3, 0x1a(r4)
    stb r7, 0x1b(r4)
    stb r3, 0x1c(r4)
    stb r6, 0x1d(r4)
    stb r3, 0x1e(r4)
    stb r7, 0x1f(r4)
    stb r3, 0x20(r4)
    stb r6, 0x21(r4)
    stb r3, 0x22(r4)
    stb r7, 0x23(r4)
    stb r3, 0x24(r4)
    stb r6, 0x25(r4)
    stb r3, 0x26(r4)
    stb r7, 0x27(r4)
    stb r3, 0x28(r4)
    stb r6, 0x29(r4)
    stb r3, 0x2a(r4)
    stb r7, 0x2b(r4)
    stb r3, 0x2c(r4)
    stb r6, 0x2d(r4)
    stb r3, 0x2e(r4)
    stb r7, 0x2f(r4)
    stb r3, 0x30(r4)
    stb r6, 0x31(r4)
    stb r3, 0x32(r4)
    stb r7, 0x33(r4)
    stb r3, 0x34(r4)
    stb r6, 0x35(r4)
    stb r3, 0x36(r4)
    stb r7, 0x37(r4)
    stb r3, 0x38(r4)
    stb r6, 0x39(r4)
    stb r3, 0x3a(r4)
    stb r7, 0x3b(r4)
    stb r3, 0x3c(r4)
    stb r6, 0x3d(r4)
    stb r3, 0x3e(r4)
    stb r7, 0x3f(r4)
    addi r4, r4, 0x40
    bdnz lbl_fn_805F05B0_00000264
    addi r5, r5, 0x1
    cmpwi r5, 0x1e0
    blt lbl_fn_805F05B0_00000260
    mr r3, r30
    bl fn_806050D0
    li r3, 0x280
    li r4, 0x1e0
    bl fn_805F02A0
    bl fn_80604FB0
    bl fn_806051C0
    mr r28, r3
lbl_fn_805F05B0_00000398:
    bl fn_806051C0
    subf r0, r28, r3
    cmpwi r0, 0x2
    blt lbl_fn_805F05B0_00000398
    lwz r0, 0x0(r29)
    stw r0, 0x10(r1)
    lfd f0, lbl_80888530
    lbz r4, 0x12(r1)
    stw r4, 0x2c(r1)
    lbz r0, 0x10(r1)
    stw r0, 0x24(r1)
    lfd f2, 0x28(r1)
    lfd f1, 0x20(r1)
    lbz r3, 0x11(r1)
    fsubs f6, f2, f0
    stw r3, 0x2c(r1)
    fsubs f3, f1, f0
    lfs f2, lbl_80888504
    lfd f1, 0x28(r1)
    fmuls f5, f2, f3
    lfs f2, lbl_80888500
    stw r4, 0x24(r1)
    fsubs f4, f1, f0
    lfs f3, lbl_80888508
    fmuls f11, f2, f6
    lfd f1, 0x20(r1)
    fmuls f3, f3, f4
    stw r0, 0x2c(r1)
    fsubs f2, f1, f0
    lfs f9, lbl_80888510
    lfd f1, 0x28(r1)
    fadds f10, f5, f3
    stw r3, 0x24(r1)
    fsubs f6, f1, f0
    lfd f1, 0x20(r1)
    fmuls f8, f9, f2
    lfs f4, lbl_80888514
    stw r0, 0x2c(r1)
    fsubs f3, f1, f0
    lfs f2, lbl_80888518
    fmuls f7, f4, f6
    lfd f1, 0x28(r1)
    fmuls f6, f2, f3
    stw r3, 0x24(r1)
    fsubs f5, f1, f0
    lfs f3, lbl_8088851C
    lfd f1, 0x20(r1)
    stw r4, 0x2c(r1)
    fsubs f4, f1, f0
    lfs f1, lbl_80888520
    lfd f2, 0x28(r1)
    fmuls f5, f9, f5
    fsubs f6, f7, f6
    lfs f9, lbl_808884FC
    fmuls f3, f3, f4
    lfs f4, lbl_808884F8
    fsubs f0, f2, f0
    fadds f7, f11, f10
    fsubs f2, f5, f3
    lfs f3, lbl_8088850C
    fmuls f0, f1, f0
    fadds f1, f8, f6
    lfs f6, lbl_80888524
    fadds f5, f9, f7
    fsubs f0, f2, f0
    fadds f1, f3, f1
    fadds f5, f4, f5
    fadds f0, f3, f0
    fadds f2, f4, f1
    fcmpo cr0, f5, f6
    fadds f1, f4, f0
    ble lbl_fn_805F05B0_000004BC
    b lbl_fn_805F05B0_000004D0
lbl_fn_805F05B0_000004BC:
    fcmpo cr0, f5, f9
    bge lbl_fn_805F05B0_000004C8
    b lbl_fn_805F05B0_000004CC
lbl_fn_805F05B0_000004C8:
    fmr f9, f5
lbl_fn_805F05B0_000004CC:
    fmr f6, f9
lbl_fn_805F05B0_000004D0:
    fctiwz f0, f6
    lfs f3, lbl_80888528
    stfd f0, 0x30(r1)
    fcmpo cr0, f2, f3
    lwz r0, 0x34(r1)
    stb r0, 0x8(r1)
    ble lbl_fn_805F05B0_000004F0
    b lbl_fn_805F05B0_00000504
lbl_fn_805F05B0_000004F0:
    lfs f3, lbl_808884FC
    fcmpo cr0, f2, f3
    bge lbl_fn_805F05B0_00000500
    b lbl_fn_805F05B0_00000504
lbl_fn_805F05B0_00000500:
    fmr f3, f2
lbl_fn_805F05B0_00000504:
    fctiwz f0, f3
    lfs f2, lbl_80888528
    stfd f0, 0x30(r1)
    fcmpo cr0, f1, f2
    lwz r0, 0x34(r1)
    stb r0, 0x9(r1)
    ble lbl_fn_805F05B0_00000524
    b lbl_fn_805F05B0_00000538
lbl_fn_805F05B0_00000524:
    lfs f2, lbl_808884FC
    fcmpo cr0, f1, f2
    bge lbl_fn_805F05B0_00000534
    b lbl_fn_805F05B0_00000538
lbl_fn_805F05B0_00000534:
    fmr f2, f1
lbl_fn_805F05B0_00000538:
    fctiwz f0, f2
    li r0, 0x0
    stb r0, 0xb(r1)
    mr r3, r30
    lwz r10, 0x8(r29)
    addi r6, r1, 0x14
    stfd f0, 0x30(r1)
    li r4, 0x280
    li r5, 0x1e0
    li r7, 0x30
    lwz r0, 0x34(r1)
    li r8, 0x64
    stb r0, 0xa(r1)
    lwz r0, 0x8(r1)
    stw r0, 0x14(r1)
    lhz r9, 0xe(r31)
    bl fn_805EFF70
    lis r4, 0x9
    mr r3, r30
    addi r4, r4, 0x6000
    bl DCFlushRange
    li r3, 0x0
    bl fn_80605140
    bl fn_80604FB0
    bl fn_806051C0
    mr r30, r3
lbl_fn_805F05B0_000005A0:
    bl fn_806051C0
    subf r0, r30, r3
    cmpwi r0, 0x1
    blt lbl_fn_805F05B0_000005A0
    bl OSDisableInterrupts
    lwz r4, 0x8(r29)
    la r3, lbl_8087E788
    crclr 6
    bl OSReport
    bl PPCHalt
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    lwz r28, 0x40(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_805F0BA0(void)
{
    nofralloc
    cmplwi r3, 0x1
    bne lbl_fn_805F0BA0_00000704
    cmplwi r4, 0x20
    blt lbl_fn_805F0BA0_00000620
    cmplwi r4, 0xdf
    bgt lbl_fn_805F0BA0_00000620
    subi r0, r4, 0x20
    lis r3, lbl_8079CCA8@ha
    slwi r0, r0, 1
    addi r3, r3, lbl_8079CCA8@l
    lhzx r3, r3, r0
    blr
lbl_fn_805F0BA0_00000620:
    cmplwi r4, 0x889e
    ble lbl_fn_805F0BA0_0000068C
    cmplwi r4, 0x9872
    bgt lbl_fn_805F0BA0_0000068C
    extrwi r3, r4, 8, 16
    clrlwi r4, r4, 24
    subi r3, r3, 0x88
    li r0, 0x0
    cmplwi r4, 0x40
    mulli r3, r3, 0xbc
    blt lbl_fn_805F0BA0_00000660
    cmplwi r4, 0xfc
    bgt lbl_fn_805F0BA0_00000660
    cmplwi r4, 0x7f
    beq lbl_fn_805F0BA0_00000660
    li r0, 0x1
lbl_fn_805F0BA0_00000660:
    cmpwi r0, 0x0
    bne lbl_fn_805F0BA0_00000670
    li r3, 0x0
    blr
lbl_fn_805F0BA0_00000670:
    subi r4, r4, 0x40
    cmpwi r4, 0x40
    blt lbl_fn_805F0BA0_00000680
    subi r4, r4, 0x1
lbl_fn_805F0BA0_00000680:
    add r3, r3, r4
    addi r3, r3, 0x2be
    blr
lbl_fn_805F0BA0_0000068C:
    cmplwi r4, 0x8140
    blt lbl_fn_805F0BA0_00000720
    cmplwi r4, 0x879e
    bge lbl_fn_805F0BA0_00000720
    extrwi r3, r4, 8, 16
    clrlwi r4, r4, 24
    subi r3, r3, 0x81
    li r0, 0x0
    cmplwi r4, 0x40
    mulli r3, r3, 0xbc
    blt lbl_fn_805F0BA0_000006CC
    cmplwi r4, 0xfc
    bgt lbl_fn_805F0BA0_000006CC
    cmplwi r4, 0x7f
    beq lbl_fn_805F0BA0_000006CC
    li r0, 0x1
lbl_fn_805F0BA0_000006CC:
    cmpwi r0, 0x0
    bne lbl_fn_805F0BA0_000006DC
    li r3, 0x0
    blr
lbl_fn_805F0BA0_000006DC:
    subi r4, r4, 0x40
    cmpwi r4, 0x40
    blt lbl_fn_805F0BA0_000006EC
    subi r4, r4, 0x1
lbl_fn_805F0BA0_000006EC:
    add r0, r3, r4
    lis r3, lbl_8079CE28@ha
    slwi r0, r0, 1
    addi r3, r3, lbl_8079CE28@l
    lhzx r3, r3, r0
    blr
lbl_fn_805F0BA0_00000704:
    addis r3, r4, 0x1
    subi r0, r3, 0x21
    clrlwi r0, r0, 16
    cmplwi r0, 0xde
    bgt lbl_fn_805F0BA0_00000720
    subi r3, r4, 0x20
    blr
lbl_fn_805F0BA0_00000720:
    li r3, 0x0
    blr
}

asm void fn_805F0CE0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lwz r5, 0xc(r3)
    addi r30, r3, 0x10
    lwz r0, 0x4(r3)
    li r8, 0x0
    add r29, r3, r5
    lwz r9, 0x8(r3)
    li r11, 0x0
    lis r5, 0x8000
    nop
lbl_fn_805F0CE0_00000768:
    cmpwi r11, 0x0
    bne lbl_fn_805F0CE0_0000077C
    lwz r12, 0x0(r30)
    li r11, 0x20
    addi r30, r30, 0x4
lbl_fn_805F0CE0_0000077C:
    clrrwi. r6, r12, 31
    beq lbl_fn_805F0CE0_00000798
    lbz r6, 0x0(r29)
    addi r29, r29, 0x1
    stbx r6, r4, r8
    addi r8, r8, 0x1
    b lbl_fn_805F0CE0_000008B0
lbl_fn_805F0CE0_00000798:
    add r7, r3, r9
    lbzx r6, r3, r9
    lbz r7, 0x1(r7)
    addi r9, r9, 0x2
    rlwimi r7, r6, 8, 16, 23
    srawi. r10, r7, 12
    clrlwi r6, r7, 20
    subf r7, r6, r8
    bne lbl_fn_805F0CE0_000007CC
    lbz r6, 0x0(r29)
    addi r29, r29, 0x1
    addi r10, r6, 0x12
    b lbl_fn_805F0CE0_000007D0
lbl_fn_805F0CE0_000007CC:
    addi r10, r10, 0x2
lbl_fn_805F0CE0_000007D0:
    cmpwi cr1, r10, 0x0
    li r6, 0x0
    ble cr1, lbl_fn_805F0CE0_000008B0
    cmpwi r10, 0x8
    subi r27, r10, 0x8
    ble lbl_fn_805F0CE0_0000087C
    li r28, 0x0
    blt cr1, lbl_fn_805F0CE0_00000800
    subi r26, r5, 0x2
    cmpw r10, r26
    bgt lbl_fn_805F0CE0_00000800
    li r28, 0x1
lbl_fn_805F0CE0_00000800:
    cmpwi r28, 0x0
    beq lbl_fn_805F0CE0_0000087C
    addi r31, r27, 0x7
    add r28, r4, r8
    srwi r31, r31, 3
    mtctr r31
    cmpwi r27, 0x0
    ble lbl_fn_805F0CE0_0000087C
lbl_fn_805F0CE0_00000820:
    add r26, r4, r7
    add r27, r8, r4
    lbz r31, -0x1(r26)
    addi r8, r8, 0x8
    stb r31, 0x0(r28)
    addi r28, r28, 0x8
    addi r6, r6, 0x8
    lbzx r31, r4, r7
    addi r7, r7, 0x8
    stb r31, 0x1(r27)
    lbz r31, 0x1(r26)
    stb r31, 0x2(r27)
    lbz r31, 0x2(r26)
    stb r31, 0x3(r27)
    lbz r31, 0x3(r26)
    stb r31, 0x4(r27)
    lbz r31, 0x4(r26)
    stb r31, 0x5(r27)
    lbz r31, 0x5(r26)
    stb r31, 0x6(r27)
    lbz r31, 0x6(r26)
    stb r31, 0x7(r27)
    bdnz lbl_fn_805F0CE0_00000820
lbl_fn_805F0CE0_0000087C:
    subf r31, r6, r10
    add r28, r4, r8
    mtctr r31
    cmpw r6, r10
    bge lbl_fn_805F0CE0_000008B0
lbl_fn_805F0CE0_00000890:
    add r10, r4, r7
    addi r7, r7, 0x1
    lbz r10, -0x1(r10)
    addi r6, r6, 0x1
    stb r10, 0x0(r28)
    addi r28, r28, 0x1
    addi r8, r8, 0x1
    bdnz lbl_fn_805F0CE0_00000890
lbl_fn_805F0CE0_000008B0:
    cmpw r8, r0
    slwi r12, r12, 1
    subi r11, r11, 0x1
    blt lbl_fn_805F0CE0_00000768
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805F0E90(void)
{
    nofralloc
    lhz r3, lbl_8087E790
    cmplwi r3, 0xffff
    bnelr
    lis r3, 0x8000
    lwz r0, 0xcc(r3)
    cmpwi r0, 0x0
    bne lbl_fn_805F0E90_00000910
    lis r3, 0xcc00
    lhz r0, 0x206e(r3)
    extrwi r0, r0, 1, 30
    sth r0, lbl_8087E790
    b lbl_fn_805F0E90_00000918
lbl_fn_805F0E90_00000910:
    li r0, 0x0
    sth r0, lbl_8087E790
lbl_fn_805F0E90_00000918:
    lis r4, fn_805F1390@ha
    clrlwi r3, r0, 16
    addi r4, r4, fn_805F1390@l
    stw r4, lbl_8087FC10
    blr
}

asm void OSSetFontEncode(void)
{
    nofralloc
    lhz r0, lbl_8087E790
    cmplwi r0, 0xffff
    beq lbl_OSSetFontEncode_00000940
    b lbl_OSSetFontEncode_0000097C
lbl_OSSetFontEncode_00000940:
    lis r4, 0x8000
    lwz r0, 0xcc(r4)
    cmpwi r0, 0x0
    bne lbl_OSSetFontEncode_00000964
    lis r4, 0xcc00
    lhz r0, 0x206e(r4)
    extrwi r0, r0, 1, 30
    sth r0, lbl_8087E790
    b lbl_OSSetFontEncode_0000096C
lbl_OSSetFontEncode_00000964:
    li r0, 0x0
    sth r0, lbl_8087E790
lbl_OSSetFontEncode_0000096C:
    lis r4, fn_805F1390@ha
    clrlwi r0, r0, 16
    addi r4, r4, fn_805F1390@l
    stw r4, lbl_8087FC10
lbl_OSSetFontEncode_0000097C:
    cmplwi cr1, r3, 0x5
    bgt cr1, lbl_OSSetFontEncode_000009A0
    cmplwi r3, 0x3
    sth r3, lbl_8087E790
    blt lbl_OSSetFontEncode_000009A0
    bgt cr1, lbl_OSSetFontEncode_000009A0
    lis r3, fn_805F1490@ha
    addi r3, r3, fn_805F1490@l
    stw r3, lbl_8087FC10
lbl_OSSetFontEncode_000009A0:
    mr r3, r0
    blr
}

asm void fn_805F0F60(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    cmplwi r4, 0x1
    mr r28, r3
    mr r29, r4
    mr r30, r5
    bne lbl_fn_805F0F60_00000A30
    lis r4, 0x1b
    lis r3, 0x5
    mr r31, r28
    subi r26, r4, 0x100
    subi r27, r3, 0x3000
    b lbl_fn_805F0F60_00000A24
lbl_fn_805F0F60_000009F0:
    cmpwi r27, 0x100
    li r25, 0x100
    bgt lbl_fn_805F0F60_00000A00
    mr r25, r27
lbl_fn_805F0F60_00000A00:
    subf r27, r25, r27
lbl_fn_805F0F60_00000A04:
    mr r3, r31
    mr r4, r25
    mr r5, r26
    bl fn_805F4420
    cmpwi r3, 0x0
    beq lbl_fn_805F0F60_00000A04
    add r26, r26, r25
    add r31, r31, r25
lbl_fn_805F0F60_00000A24:
    cmpwi r27, 0x0
    bgt lbl_fn_805F0F60_000009F0
    b lbl_fn_805F0F60_00000A80
lbl_fn_805F0F60_00000A30:
    lis r3, 0x20
    mr r26, r28
    subi r31, r3, 0x3100
    li r27, 0x3000
    b lbl_fn_805F0F60_00000A78
lbl_fn_805F0F60_00000A44:
    cmpwi r27, 0x100
    li r25, 0x100
    bgt lbl_fn_805F0F60_00000A54
    mr r25, r27
lbl_fn_805F0F60_00000A54:
    subf r27, r25, r27
lbl_fn_805F0F60_00000A58:
    mr r3, r26
    mr r4, r25
    mr r5, r31
    bl fn_805F4420
    cmpwi r3, 0x0
    beq lbl_fn_805F0F60_00000A58
    add r31, r31, r25
    add r26, r26, r25
lbl_fn_805F0F60_00000A78:
    cmpwi r27, 0x0
    bgt lbl_fn_805F0F60_00000A44
lbl_fn_805F0F60_00000A80:
    lbz r0, 0x0(r28)
    cmplwi r0, 0x59
    bne lbl_fn_805F0F60_00000AAC
    lbz r0, 0x1(r28)
    cmplwi r0, 0x61
    bne lbl_fn_805F0F60_00000AAC
    lbz r0, 0x2(r28)
    cmplwi r0, 0x79
    bne lbl_fn_805F0F60_00000AAC
    lwz r31, 0x4(r28)
    b lbl_fn_805F0F60_00000AB0
lbl_fn_805F0F60_00000AAC:
    li r31, 0x0
lbl_fn_805F0F60_00000AB0:
    cmpwi r31, 0x0
    bne lbl_fn_805F0F60_00000AC0
    li r3, 0x0
    b lbl_fn_805F0F60_00000CA8
lbl_fn_805F0F60_00000AC0:
    mr r3, r28
    mr r4, r30
    bl fn_805F0CE0
    cmplwi r29, 0x1
    bne lbl_fn_805F0F60_00000CA4
    lwz r5, lbl_80888538
    mr r3, r29
    lwz r0, lbl_8088853C
    li r4, 0x54
    stw r5, 0x8(r1)
    stw r0, 0xc(r1)
    bl fn_805F0BA0
    lhz r11, 0x1a(r30)
    lhz r4, 0x1c(r30)
    lhz r0, 0x1e(r30)
    mullw r9, r11, r4
    lwz r5, 0x24(r30)
    extlwi r4, r0, 27, 2
    lhz r6, 0x12(r30)
    extrwi r0, r0, 1, 2
    lhz r7, 0x10(r30)
    divw r25, r3, r9
    add r0, r0, r4
    lwz r10, 0x14(r30)
    add r4, r30, r5
    srawi r28, r0, 1
    lhz r8, 0x8(r1)
    mullw r0, r25, r9
    lhz r9, 0xa(r1)
    subf r3, r0, r3
    divw r5, r3, r11
    mullw r0, r5, r11
    mullw r5, r5, r6
    subf r26, r0, r3
    addi r6, r5, 0x4
    mullw r26, r26, r7
    addi r11, r5, 0x5
    srawi r3, r6, 3
    slwi r0, r6, 29
    addze r12, r3
    srwi r7, r6, 31
    mullw r29, r25, r10
    srawi r3, r26, 3
    subf r0, r7, r0
    addze r10, r3
    rotlwi r3, r0, 3
    slwi r0, r26, 29
    srwi r6, r26, 31
    srwi r29, r29, 1
    mullw r12, r28, r12
    add r7, r3, r7
    subf r0, r6, r0
    add r4, r4, r29
    rotlwi r3, r0, 3
    slwi r0, r10, 4
    add r3, r3, r6
    add r12, r4, r12
    slwi r10, r7, 1
    slwi r6, r11, 29
    srawi r3, r3, 2
    add r12, r12, r0
    srwi r7, r11, 31
    subf r6, r7, r6
    addze r3, r3
    add r12, r12, r10
    sthx r8, r12, r3
    rotlwi r6, r6, 3
    add r6, r6, r7
    addi r8, r5, 0x6
    lhz r12, 0x1e(r30)
    slwi r10, r6, 1
    slwi r6, r8, 29
    srwi r7, r8, 31
    extlwi r28, r12, 27, 2
    extrwi r12, r12, 1, 2
    add r12, r12, r28
    subf r6, r7, r6
    srawi r12, r12, 1
    srawi r11, r11, 3
    rotlwi r6, r6, 3
    addze r11, r11
    add r6, r6, r7
    mullw r11, r12, r11
    slwi r6, r6, 1
    add r7, r4, r11
    add r7, r7, r0
    add r7, r7, r10
    sthx r9, r7, r3
    lhz r7, 0x1e(r30)
    extlwi r9, r7, 27, 2
    extrwi r7, r7, 1, 2
    add r7, r7, r9
    srawi r9, r7, 1
    srawi r7, r8, 3
    addze r7, r7
    mullw r7, r9, r7
    add r7, r4, r7
    add r7, r7, r0
    add r7, r7, r6
    lhz r6, 0xc(r1)
    addi r8, r5, 0x7
    sthx r6, r7, r3
    slwi r6, r8, 29
    srwi r7, r8, 31
    lhz r5, 0xe(r1)
    lhz r9, 0x1e(r30)
    subf r6, r7, r6
    rotlwi r6, r6, 3
    extlwi r10, r9, 27, 2
    extrwi r9, r9, 1, 2
    add r9, r9, r10
    add r6, r6, r7
    srawi r9, r9, 1
    srawi r7, r8, 3
    slwi r6, r6, 1
    addze r7, r7
    mullw r7, r9, r7
    add r4, r4, r7
    add r4, r4, r0
    add r4, r4, r6
    sthx r5, r4, r3
lbl_fn_805F0F60_00000CA4:
    mr r3, r31
lbl_fn_805F0F60_00000CA8:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_805F1270(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    mr r5, r3
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r4
    lhz r0, lbl_8087E790
    cmplwi r0, 0xffff
    beq lbl_fn_805F1270_00000CEC
    b lbl_fn_805F1270_00000D28
lbl_fn_805F1270_00000CEC:
    lis r4, 0x8000
    lwz r0, 0xcc(r4)
    cmpwi r0, 0x0
    bne lbl_fn_805F1270_00000D10
    lis r4, 0xcc00
    lhz r0, 0x206e(r4)
    extrwi r0, r0, 1, 30
    sth r0, lbl_8087E790
    b lbl_fn_805F1270_00000D18
lbl_fn_805F1270_00000D10:
    li r0, 0x0
    sth r0, lbl_8087E790
lbl_fn_805F1270_00000D18:
    lis r4, fn_805F1390@ha
    clrlwi r0, r0, 16
    addi r4, r4, fn_805F1390@l
    stw r4, lbl_8087FC10
lbl_fn_805F1270_00000D28:
    clrlwi r4, r0, 16
    subi r0, r4, 0x3
    cmplwi r0, 0x2
    ble lbl_fn_805F1270_00000D7C
    cmpwi r4, 0x0
    beq lbl_fn_805F1270_00000D4C
    cmpwi r4, 0x1
    beq lbl_fn_805F1270_00000D64
    b lbl_fn_805F1270_00000DB8
lbl_fn_805F1270_00000D4C:
    stw r3, lbl_8087FC1C
    mr r3, r30
    li r4, 0x0
    bl fn_805F0F60
    mr r31, r3
    b lbl_fn_805F1270_00000DBC
lbl_fn_805F1270_00000D64:
    stw r3, lbl_8087FC18
    mr r3, r30
    li r4, 0x1
    bl fn_805F0F60
    mr r31, r3
    b lbl_fn_805F1270_00000DBC
lbl_fn_805F1270_00000D7C:
    stw r3, lbl_8087FC1C
    mr r3, r30
    li r4, 0x0
    bl fn_805F0F60
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_805F1270_00000DBC
    lwz r0, lbl_8087FC1C
    li r4, 0x1
    add r5, r0, r3
    stw r5, lbl_8087FC18
    mr r3, r30
    bl fn_805F0F60
    add r31, r31, r3
    b lbl_fn_805F1270_00000DBC
lbl_fn_805F1270_00000DB8:
    li r31, 0x0
lbl_fn_805F1270_00000DBC:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805F1390(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    li r7, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r6
    stw r30, 0x8(r1)
    mr r30, r4
    beq lbl_fn_805F1390_00000E14
    cmpwi r3, 0x1
    beq lbl_fn_805F1390_00000E2C
    b lbl_fn_805F1390_00000EAC
lbl_fn_805F1390_00000E14:
    lbz r7, 0x0(r4)
    lwz r6, lbl_8087FC1C
    cmpwi r7, 0x0
    beq lbl_fn_805F1390_00000EAC
    addi r30, r4, 0x1
    b lbl_fn_805F1390_00000EAC
lbl_fn_805F1390_00000E2C:
    lbz r7, 0x0(r4)
    lwz r6, lbl_8087FC18
    cmpwi r7, 0x0
    beq lbl_fn_805F1390_00000EAC
    cmplwi r7, 0x81
    addi r30, r4, 0x1
    li r0, 0x0
    blt lbl_fn_805F1390_00000E54
    cmplwi r7, 0x9f
    ble lbl_fn_805F1390_00000E64
lbl_fn_805F1390_00000E54:
    cmplwi r7, 0xe0
    blt lbl_fn_805F1390_00000E68
    cmplwi r7, 0xfc
    bgt lbl_fn_805F1390_00000E68
lbl_fn_805F1390_00000E64:
    li r0, 0x1
lbl_fn_805F1390_00000E68:
    cmpwi r0, 0x0
    beq lbl_fn_805F1390_00000EAC
    lbz r4, 0x0(r30)
    li r0, 0x0
    cmplwi r4, 0x40
    blt lbl_fn_805F1390_00000E94
    cmplwi r4, 0xfc
    bgt lbl_fn_805F1390_00000E94
    cmplwi r4, 0x7f
    beq lbl_fn_805F1390_00000E94
    li r0, 0x1
lbl_fn_805F1390_00000E94:
    cmpwi r0, 0x0
    beq lbl_fn_805F1390_00000EAC
    lbz r0, 0x0(r30)
    rlwimi r0, r7, 8, 8, 23
    addi r30, r30, 0x1
    clrlwi r7, r0, 16
lbl_fn_805F1390_00000EAC:
    stw r6, 0x0(r5)
    mr r4, r7
    bl fn_805F0BA0
    stw r3, 0x0(r31)
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805F1490(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    cmpwi r3, 0x0
    li r30, 0x0
    stw r30, 0x8(r1)
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    beq lbl_fn_805F1490_00000F38
    cmpwi r3, 0x1
    beq lbl_fn_805F1490_00000F50
    cmpwi r3, 0x3
    beq lbl_fn_805F1490_00000FD4
    cmpwi r3, 0x4
    beq lbl_fn_805F1490_00000FE8
    cmpwi r3, 0x5
    beq lbl_fn_805F1490_00000FFC
    b lbl_fn_805F1490_00001010
lbl_fn_805F1490_00000F38:
    lbz r30, 0x0(r4)
    lwz r31, lbl_8087FC1C
    cmpwi r30, 0x0
    beq lbl_fn_805F1490_00001010
    addi r27, r4, 0x1
    b lbl_fn_805F1490_00001010
lbl_fn_805F1490_00000F50:
    lbz r30, 0x0(r4)
    lwz r31, lbl_8087FC18
    cmpwi r30, 0x0
    beq lbl_fn_805F1490_00001010
    cmplwi r30, 0x81
    addi r27, r4, 0x1
    li r0, 0x0
    blt lbl_fn_805F1490_00000F78
    cmplwi r30, 0x9f
    ble lbl_fn_805F1490_00000F88
lbl_fn_805F1490_00000F78:
    cmplwi r30, 0xe0
    blt lbl_fn_805F1490_00000F8C
    cmplwi r30, 0xfc
    bgt lbl_fn_805F1490_00000F8C
lbl_fn_805F1490_00000F88:
    li r0, 0x1
lbl_fn_805F1490_00000F8C:
    cmpwi r0, 0x0
    beq lbl_fn_805F1490_00001010
    lbz r3, 0x0(r27)
    li r0, 0x0
    cmplwi r3, 0x40
    blt lbl_fn_805F1490_00000FB8
    cmplwi r3, 0xfc
    bgt lbl_fn_805F1490_00000FB8
    cmplwi r3, 0x7f
    beq lbl_fn_805F1490_00000FB8
    li r0, 0x1
lbl_fn_805F1490_00000FB8:
    cmpwi r0, 0x0
    beq lbl_fn_805F1490_00001010
    lbz r0, 0x0(r27)
    rlwimi r0, r30, 8, 8, 23
    addi r27, r27, 0x1
    clrlwi r30, r0, 16
    b lbl_fn_805F1490_00001010
lbl_fn_805F1490_00000FD4:
    mr r3, r27
    addi r4, r1, 0x8
    bl fn_805F6660
    mr r27, r3
    b lbl_fn_805F1490_00001010
lbl_fn_805F1490_00000FE8:
    mr r3, r27
    addi r4, r1, 0x8
    bl fn_805F6780
    mr r27, r3
    b lbl_fn_805F1490_00001010
lbl_fn_805F1490_00000FFC:
    lwz r0, 0x0(r4)
    stw r0, 0x8(r1)
    cmpwi r0, 0x0
    beq lbl_fn_805F1490_00001010
    addi r27, r4, 0x4
lbl_fn_805F1490_00001010:
    lwz r3, 0x8(r1)
    cmpwi r3, 0x0
    beq lbl_fn_805F1490_00001064
    lwz r31, lbl_8087FC1C
    li r26, 0x0
    bl fn_805F67F0
    clrlwi. r30, r3, 24
    beq lbl_fn_805F1490_00001048
    lwz r0, lbl_8087FC14
    cmpwi r0, 0x0
    beq lbl_fn_805F1490_00001064
    lwz r0, 0x8(r1)
    cmplwi r0, 0x7f
    bgt lbl_fn_805F1490_00001064
lbl_fn_805F1490_00001048:
    lwz r3, 0x8(r1)
    bl fn_805F6870
    clrlwi. r0, r3, 16
    mr r30, r3
    beq lbl_fn_805F1490_00001064
    li r26, 0x1
    lwz r31, lbl_8087FC18
lbl_fn_805F1490_00001064:
    stw r31, 0x0(r28)
    mr r3, r26
    clrlwi r4, r30, 16
    bl fn_805F0BA0
    stw r3, 0x0(r29)
    addi r11, r1, 0x30
    mr r3, r27
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_805F1650(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_17
    lhz r0, lbl_8087E790
    mr r29, r4
    mr r30, r5
    mr r17, r6
    cmplwi r0, 0xffff
    mr r31, r7
    beq lbl_fn_805F1650_000010D4
    b lbl_fn_805F1650_00001110
lbl_fn_805F1650_000010D4:
    lis r4, 0x8000
    lwz r0, 0xcc(r4)
    cmpwi r0, 0x0
    bne lbl_fn_805F1650_000010F8
    lis r4, 0xcc00
    lhz r0, 0x206e(r4)
    extrwi r0, r0, 1, 30
    sth r0, lbl_8087E790
    b lbl_fn_805F1650_00001100
lbl_fn_805F1650_000010F8:
    li r0, 0x0
    sth r0, lbl_8087E790
lbl_fn_805F1650_00001100:
    lis r4, fn_805F1390@ha
    clrlwi r0, r0, 16
    addi r4, r4, fn_805F1390@l
    stw r4, lbl_8087FC10
lbl_fn_805F1650_00001110:
    lwz r12, lbl_8087FC10
    mr r4, r3
    clrlwi r3, r0, 16
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    mtctr r12
    bctrl
    lwz r4, 0xc(r1)
    slwi r0, r17, 2
    srawi r0, r0, 3
    lwz r11, 0x8(r1)
    lhz r9, 0x1a(r4)
    addze r0, r0
    lhz r5, 0x1c(r4)
    slwi r8, r0, 5
    lwz r6, 0x24(r4)
    addi r23, r4, 0x2c
    mullw r10, r9, r5
    lwz r5, 0x14(r4)
    add r22, r4, r6
    lhz r7, 0x12(r4)
    lhz r6, 0x10(r4)
    li r24, 0x0
    divw r12, r11, r10
    mullw r0, r12, r10
    subf r11, r0, r11
    divw r10, r11, r9
    mullw r9, r10, r9
    mullw r0, r12, r5
    subf r26, r9, r11
    srwi r0, r0, 1
    mullw r27, r10, r7
    add r22, r22, r0
    mullw r26, r26, r6
    b lbl_fn_805F1650_000012E4
lbl_fn_805F1650_0000119C:
    add r7, r27, r24
    slwi r0, r24, 29
    srawi r5, r7, 3
    srwi r4, r24, 31
    addze r9, r5
    slwi r6, r7, 29
    srawi r5, r24, 3
    srwi r7, r7, 31
    addze r5, r5
    subf r0, r4, r0
    mullw r5, r5, r8
    subf r6, r7, r6
    rotlwi r0, r0, 3
    rotlwi r6, r6, 3
    add r0, r0, r4
    add r4, r6, r7
    slwi r10, r4, 1
    add r11, r29, r5
    slwi r12, r0, 2
    li r25, 0x0
    b lbl_fn_805F1650_000012D0
lbl_fn_805F1650_000011F0:
    lhz r4, 0x1e(r4)
    add r28, r30, r25
    add r5, r26, r25
    li r0, 0xf0
    extlwi r6, r4, 27, 2
    extrwi r4, r4, 1, 2
    add r4, r4, r6
    slwi r20, r28, 29
    srawi r7, r4, 1
    srwi r19, r28, 31
    mullw r7, r7, r9
    slwi r6, r5, 29
    srwi r4, r5, 31
    srawi r18, r5, 3
    subf r6, r4, r6
    clrlwi r21, r28, 31
    rotlwi r17, r6, 3
    addze r6, r18
    add r17, r17, r4
    subf r20, r19, r20
    xor r21, r21, r19
    slwi r5, r5, 30
    srawi r18, r17, 2
    rotlwi r20, r20, 3
    subf r17, r4, r5
    subf. r21, r19, r21
    addze r5, r18
    add r20, r20, r19
    srawi r18, r28, 3
    rotlwi r17, r17, 2
    add r7, r22, r7
    slwi r6, r6, 4
    add r7, r7, r6
    addze r19, r18
    add r7, r7, r10
    srwi r21, r20, 31
    add r28, r17, r4
    slwi r6, r19, 5
    add r4, r21, r20
    lbzx r7, r7, r5
    add r6, r11, r6
    slwi r21, r28, 1
    srawi r4, r4, 1
    subfic r5, r21, 0x6
    add r6, r6, r12
    sraw r5, r7, r5
    lbzx r7, r6, r4
    clrlwi r5, r5, 30
    lbzx r5, r23, r5
    beq lbl_fn_805F1650_000012BC
    li r0, 0xf
lbl_fn_805F1650_000012BC:
    and r0, r5, r0
    addi r25, r25, 0x1
    clrlwi r0, r0, 24
    or r0, r7, r0
    stbx r0, r6, r4
lbl_fn_805F1650_000012D0:
    lwz r4, 0xc(r1)
    lhz r0, 0x10(r4)
    cmpw r25, r0
    blt lbl_fn_805F1650_000011F0
    addi r24, r24, 0x1
lbl_fn_805F1650_000012E4:
    lhz r0, 0x12(r4)
    cmpw r24, r0
    blt lbl_fn_805F1650_0000119C
    cmpwi r31, 0x0
    beq lbl_fn_805F1650_00001310
    lwz r5, 0xc(r1)
    lwz r4, 0x8(r1)
    lhz r0, 0x22(r5)
    add r0, r5, r0
    lbzx r0, r4, r0
    stw r0, 0x0(r31)
lbl_fn_805F1650_00001310:
    addi r11, r1, 0x50
    bl _restgpr_17
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_805F18E0(void)
{
    nofralloc
    lhz r0, 0x18(r3)
    addi r6, r3, 0x2c
    cmpwi r0, 0x0
    bne lbl_fn_805F18E0_00001468
    lwz r7, 0x28(r3)
    srwi r0, r7, 31
    add r0, r0, r7
    srawi r7, r0, 1
    subic. r8, r7, 0x1
    add r7, r4, r8
    slwi r9, r8, 1
    addi r4, r8, 0x1
    blt lbl_fn_805F18E0_00001590
    srwi. r0, r4, 1
    mtctr r0
    beq lbl_fn_805F18E0_00001410
lbl_fn_805F18E0_00001370:
    lbz r0, 0x0(r7)
    add r10, r5, r9
    extrwi r8, r0, 2, 24
    extrwi r0, r0, 2, 26
    lbzx r0, r6, r0
    lbzx r8, r6, r8
    clrlwi r0, r0, 28
    rlwimi r0, r8, 0, 24, 27
    stbx r0, r5, r9
    subi r9, r9, 0x2
    lbz r0, 0x0(r7)
    extrwi r8, r0, 2, 28
    clrlwi r0, r0, 30
    lbzx r0, r6, r0
    lbzx r8, r6, r8
    clrlwi r0, r0, 28
    rlwimi r0, r8, 0, 24, 27
    stb r0, 0x1(r10)
    add r10, r5, r9
    lbz r0, -0x1(r7)
    extrwi r8, r0, 2, 24
    extrwi r0, r0, 2, 26
    lbzx r0, r6, r0
    lbzx r8, r6, r8
    clrlwi r0, r0, 28
    rlwimi r0, r8, 0, 24, 27
    stbx r0, r5, r9
    subi r9, r9, 0x2
    lbz r0, -0x1(r7)
    subi r7, r7, 0x2
    extrwi r8, r0, 2, 28
    clrlwi r0, r0, 30
    lbzx r0, r6, r0
    lbzx r8, r6, r8
    clrlwi r0, r0, 28
    rlwimi r0, r8, 0, 24, 27
    stb r0, 0x1(r10)
    bdnz lbl_fn_805F18E0_00001370
    andi. r4, r4, 0x1
    beq lbl_fn_805F18E0_00001590
lbl_fn_805F18E0_00001410:
    mtctr r4
lbl_fn_805F18E0_00001414:
    lbz r0, 0x0(r7)
    add r10, r5, r9
    extrwi r8, r0, 2, 24
    extrwi r0, r0, 2, 26
    lbzx r0, r6, r0
    lbzx r8, r6, r8
    clrlwi r0, r0, 28
    rlwimi r0, r8, 0, 24, 27
    stbx r0, r5, r9
    subi r9, r9, 0x2
    lbz r0, 0x0(r7)
    subi r7, r7, 0x1
    extrwi r8, r0, 2, 28
    clrlwi r0, r0, 30
    lbzx r0, r6, r0
    lbzx r8, r6, r8
    clrlwi r0, r0, 28
    rlwimi r0, r8, 0, 24, 27
    stb r0, 0x1(r10)
    bdnz lbl_fn_805F18E0_00001414
    b lbl_fn_805F18E0_00001590
lbl_fn_805F18E0_00001468:
    cmplwi r0, 0x2
    bne lbl_fn_805F18E0_00001590
    lwz r0, 0x28(r3)
    srawi r0, r0, 2
    addze r7, r0
    subic. r9, r7, 0x1
    add r7, r4, r9
    slwi r8, r9, 2
    addi r4, r9, 0x1
    blt lbl_fn_805F18E0_00001590
    srwi. r0, r4, 1
    mtctr r0
    beq lbl_fn_805F18E0_0000153C
lbl_fn_805F18E0_0000149C:
    lbz r0, 0x0(r7)
    add r9, r5, r8
    extrwi r0, r0, 2, 24
    lbzx r0, r6, r0
    stbx r0, r5, r8
    subi r8, r8, 0x4
    lbz r0, 0x0(r7)
    extrwi r0, r0, 2, 26
    lbzx r0, r6, r0
    stb r0, 0x1(r9)
    lbz r0, 0x0(r7)
    extrwi r0, r0, 2, 28
    lbzx r0, r6, r0
    stb r0, 0x2(r9)
    lbz r0, 0x0(r7)
    clrlwi r0, r0, 30
    lbzx r0, r6, r0
    stb r0, 0x3(r9)
    add r9, r5, r8
    lbz r0, -0x1(r7)
    extrwi r0, r0, 2, 24
    lbzx r0, r6, r0
    stbx r0, r5, r8
    subi r8, r8, 0x4
    lbz r0, -0x1(r7)
    extrwi r0, r0, 2, 26
    lbzx r0, r6, r0
    stb r0, 0x1(r9)
    lbz r0, -0x1(r7)
    extrwi r0, r0, 2, 28
    lbzx r0, r6, r0
    stb r0, 0x2(r9)
    lbz r0, -0x1(r7)
    subi r7, r7, 0x2
    clrlwi r0, r0, 30
    lbzx r0, r6, r0
    stb r0, 0x3(r9)
    bdnz lbl_fn_805F18E0_0000149C
    andi. r4, r4, 0x1
    beq lbl_fn_805F18E0_00001590
lbl_fn_805F18E0_0000153C:
    mtctr r4
lbl_fn_805F18E0_00001540:
    lbz r0, 0x0(r7)
    add r9, r5, r8
    extrwi r0, r0, 2, 24
    lbzx r0, r6, r0
    stbx r0, r5, r8
    subi r8, r8, 0x4
    lbz r0, 0x0(r7)
    extrwi r0, r0, 2, 26
    lbzx r0, r6, r0
    stb r0, 0x1(r9)
    lbz r0, 0x0(r7)
    extrwi r0, r0, 2, 28
    lbzx r0, r6, r0
    stb r0, 0x2(r9)
    lbz r0, 0x0(r7)
    subi r7, r7, 0x1
    clrlwi r0, r0, 30
    lbzx r0, r6, r0
    stb r0, 0x3(r9)
    bdnz lbl_fn_805F18E0_00001540
lbl_fn_805F18E0_00001590:
    lwz r4, 0x28(r3)
    mr r3, r5
    b fn_805ED1C0
}

asm void fn_805F1B50(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    mr r5, r3
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lhz r0, lbl_8087E790
    cmplwi r0, 0xffff
    beq lbl_fn_805F1B50_000015C4
    b lbl_fn_805F1B50_00001600
lbl_fn_805F1B50_000015C4:
    lis r4, 0x8000
    lwz r0, 0xcc(r4)
    cmpwi r0, 0x0
    bne lbl_fn_805F1B50_000015E8
    lis r4, 0xcc00
    lhz r0, 0x206e(r4)
    extrwi r0, r0, 1, 30
    sth r0, lbl_8087E790
    b lbl_fn_805F1B50_000015F0
lbl_fn_805F1B50_000015E8:
    li r0, 0x0
    sth r0, lbl_8087E790
lbl_fn_805F1B50_000015F0:
    lis r4, fn_805F1390@ha
    clrlwi r0, r0, 16
    addi r4, r4, fn_805F1390@l
    stw r4, lbl_8087FC10
lbl_fn_805F1B50_00001600:
    clrlwi r4, r0, 16
    subi r0, r4, 0x3
    cmplwi r0, 0x2
    ble lbl_fn_805F1B50_000016C4
    cmpwi r4, 0x0
    beq lbl_fn_805F1B50_00001624
    cmpwi r4, 0x1
    beq lbl_fn_805F1B50_00001674
    b lbl_fn_805F1B50_00001768
lbl_fn_805F1B50_00001624:
    stw r3, lbl_8087FC1C
    addis r3, r3, 0x2
    li r4, 0x0
    subi r3, r3, 0x2ee0
    bl fn_805F0F60
    cmpwi r3, 0x0
    bne lbl_fn_805F1B50_00001648
    li r3, 0x0
    b lbl_fn_805F1B50_0000176C
lbl_fn_805F1B50_00001648:
    lwz r5, lbl_8087FC1C
    lwz r3, 0x24(r5)
    addi r0, r3, 0x1f
    add r4, r5, r3
    clrrwi r0, r0, 5
    stw r0, 0x24(r5)
    lwz r3, lbl_8087FC1C
    lwz r0, 0x24(r3)
    add r5, r3, r0
    bl fn_805F18E0
    b lbl_fn_805F1B50_00001768
lbl_fn_805F1B50_00001674:
    stw r3, lbl_8087FC18
    addis r3, r3, 0xd
    li r4, 0x1
    addi r3, r3, 0x3f00
    bl fn_805F0F60
    cmpwi r3, 0x0
    bne lbl_fn_805F1B50_00001698
    li r3, 0x0
    b lbl_fn_805F1B50_0000176C
lbl_fn_805F1B50_00001698:
    lwz r5, lbl_8087FC18
    lwz r3, 0x24(r5)
    addi r0, r3, 0x1f
    add r4, r5, r3
    clrrwi r0, r0, 5
    stw r0, 0x24(r5)
    lwz r3, lbl_8087FC18
    lwz r0, 0x24(r3)
    add r5, r3, r0
    bl fn_805F18E0
    b lbl_fn_805F1B50_00001768
lbl_fn_805F1B50_000016C4:
    addis r31, r3, 0xf
    stw r3, lbl_8087FC1C
    addi r31, r31, 0x4020
    li r4, 0x0
    mr r3, r31
    bl fn_805F0F60
    cmpwi r3, 0x0
    bne lbl_fn_805F1B50_000016EC
    li r3, 0x0
    b lbl_fn_805F1B50_0000176C
lbl_fn_805F1B50_000016EC:
    lwz r5, lbl_8087FC1C
    lwz r3, 0x24(r5)
    addi r0, r3, 0x1f
    add r4, r5, r3
    clrrwi r0, r0, 5
    stw r0, 0x24(r5)
    lwz r3, lbl_8087FC1C
    lwz r0, 0x24(r3)
    add r5, r3, r0
    bl fn_805F18E0
    lwz r5, lbl_8087FC1C
    mr r3, r31
    li r4, 0x1
    addis r5, r5, 0x2
    addi r5, r5, 0x120
    stw r5, lbl_8087FC18
    bl fn_805F0F60
    cmpwi r3, 0x0
    bne lbl_fn_805F1B50_00001740
    li r3, 0x0
    b lbl_fn_805F1B50_0000176C
lbl_fn_805F1B50_00001740:
    lwz r5, lbl_8087FC18
    lwz r3, 0x24(r5)
    addi r0, r3, 0x1f
    add r4, r5, r3
    clrrwi r0, r0, 5
    stw r0, 0x24(r5)
    lwz r3, lbl_8087FC18
    lwz r0, 0x24(r3)
    add r5, r3, r0
    bl fn_805F18E0
lbl_fn_805F1B50_00001768:
    li r3, 0x1
lbl_fn_805F1B50_0000176C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805F1D30(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r7
    stw r30, 0x18(r1)
    mr r30, r6
    stw r29, 0x14(r1)
    mr r29, r5
    stw r28, 0x10(r1)
    mr r28, r4
    lhz r0, lbl_8087E790
    cmplwi r0, 0xffff
    beq lbl_fn_805F1D30_000017BC
    b lbl_fn_805F1D30_000017F8
lbl_fn_805F1D30_000017BC:
    lis r4, 0x8000
    lwz r0, 0xcc(r4)
    cmpwi r0, 0x0
    bne lbl_fn_805F1D30_000017E0
    lis r4, 0xcc00
    lhz r0, 0x206e(r4)
    extrwi r0, r0, 1, 30
    sth r0, lbl_8087E790
    b lbl_fn_805F1D30_000017E8
lbl_fn_805F1D30_000017E0:
    li r0, 0x0
    sth r0, lbl_8087E790
lbl_fn_805F1D30_000017E8:
    lis r4, fn_805F1390@ha
    clrlwi r0, r0, 16
    addi r4, r4, fn_805F1390@l
    stw r4, lbl_8087FC10
lbl_fn_805F1D30_000017F8:
    lwz r12, lbl_8087FC10
    mr r4, r3
    clrlwi r3, r0, 16
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    mtctr r12
    bctrl
    lwz r7, 0xc(r1)
    cmpwi r31, 0x0
    lwz r6, 0x8(r1)
    lhz r5, 0x1a(r7)
    lhz r4, 0x1c(r7)
    lwz r0, 0x24(r7)
    mullw r5, r5, r4
    lwz r4, 0x14(r7)
    add r0, r7, r0
    divw r6, r6, r5
    mullw r4, r4, r6
    add r0, r4, r0
    stw r0, 0x0(r28)
    lwz r8, 0xc(r1)
    lwz r4, 0x8(r1)
    lhz r7, 0x1a(r8)
    lhz r5, 0x1c(r8)
    mullw r6, r6, r7
    lhz r0, 0x10(r8)
    mullw r5, r6, r5
    subf r5, r5, r4
    divw r6, r5, r7
    mullw r4, r6, r7
    subf r4, r4, r5
    mullw r0, r4, r0
    stw r0, 0x0(r29)
    lwz r4, 0xc(r1)
    lhz r0, 0x12(r4)
    mullw r0, r6, r0
    stw r0, 0x0(r30)
    beq lbl_fn_805F1D30_000018A8
    lwz r5, 0xc(r1)
    lwz r4, 0x8(r1)
    lhz r0, 0x22(r5)
    add r0, r5, r0
    lbzx r0, r4, r0
    stw r0, 0x0(r31)
lbl_fn_805F1D30_000018A8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
