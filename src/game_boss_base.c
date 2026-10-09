#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_26(void);
extern void _savegpr_26(void);
extern void fn_801092C8(void);
extern void fn_8012B3E8(void);
extern void fn_8012B988(void);
extern void fn_8012C6D4(void);
extern void fn_8020FCE8(void);
extern void fn_8021AF50(void);
extern void fn_80370174(void);
extern void fn_80370320(void);
extern void fn_80375B78(void);
extern void fn_80680CF8(void);
extern void fn_8068AEB0(void);

/* External data declarations */
extern u8 jumptable_8077A6B8[];
extern u8 lbl_80737258[];
extern u8 lbl_80737288[];
extern u8 lbl_80737340[];
extern u8 lbl_80737348[];

/* Small data declarations */
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F430;
extern u32 lbl_8087F610;
extern u32 lbl_80881900;
extern u32 lbl_80881904;
extern u32 lbl_80881908;
extern u32 lbl_80881918;

/* Function declarations */
void fn_8013310C(void);
void fn_80133130(void);
void fn_8013322C(void);
void fn_801333A4(void);
void fn_801333E4(void);
void fn_801334CC(void);
void fn_8013354C(void);
void fn_80133B30(void);
void fn_80133BD8(void);
void fn_80133E24(void);
void fn_80133EE8(void);
void fn_80133F18(void);
void fn_80133F6C(void);
void fn_80133FBC(void);
void fn_8013407C(void);
void fn_80134134(void);
void fn_80134168(void);
void fn_801341B8(void);
void fn_80134208(void);
void fn_80134234(void);
void fn_80134250(void);
void fn_80134270(void);
void fn_80134290(void);
void fn_801342B0(void);
void fn_801342D0(void);
void fn_8013459C(void);
void fn_80134674(void);

asm void fn_8013310C(void)
{
    nofralloc
    lwz r0, 0xc(r3)
    cmpwi r5, 0x0
    or r0, r0, r4
    stw r0, 0xc(r3)
    beqlr
    lwz r0, 0x10(r3)
    or r0, r0, r4
    stw r0, 0x10(r3)
    blr
}

asm void fn_80133130(void)
{
    nofralloc
    lwz r0, 0xc(r3)
    cmpwi r6, 0x0
    or r0, r0, r4
    stw r0, 0xc(r3)
    beq lbl_fn_80133130_00000044
    lwz r0, 0x10(r3)
    or r0, r0, r4
    stw r0, 0x10(r3)
lbl_fn_80133130_00000044:
    li r0, 0x4
    li r8, 0x0
    li r6, 0x1
    mtctr r0
lbl_fn_80133130_00000054:
    slw r7, r6, r8
    and r0, r7, r4
    cmplw r7, r0
    bne lbl_fn_80133130_00000068
    stw r5, 0x24c(r3)
lbl_fn_80133130_00000068:
    addi r8, r8, 0x1
    slw r7, r6, r8
    and r0, r7, r4
    cmplw r7, r0
    bne lbl_fn_80133130_00000080
    stw r5, 0x250(r3)
lbl_fn_80133130_00000080:
    addi r8, r8, 0x1
    slw r7, r6, r8
    and r0, r7, r4
    cmplw r7, r0
    bne lbl_fn_80133130_00000098
    stw r5, 0x254(r3)
lbl_fn_80133130_00000098:
    addi r8, r8, 0x1
    slw r7, r6, r8
    and r0, r7, r4
    cmplw r7, r0
    bne lbl_fn_80133130_000000B0
    stw r5, 0x258(r3)
lbl_fn_80133130_000000B0:
    addi r8, r8, 0x1
    slw r7, r6, r8
    and r0, r7, r4
    cmplw r7, r0
    bne lbl_fn_80133130_000000C8
    stw r5, 0x25c(r3)
lbl_fn_80133130_000000C8:
    addi r8, r8, 0x1
    slw r7, r6, r8
    and r0, r7, r4
    cmplw r7, r0
    bne lbl_fn_80133130_000000E0
    stw r5, 0x260(r3)
lbl_fn_80133130_000000E0:
    addi r8, r8, 0x1
    slw r7, r6, r8
    and r0, r7, r4
    cmplw r7, r0
    bne lbl_fn_80133130_000000F8
    stw r5, 0x264(r3)
lbl_fn_80133130_000000F8:
    addi r8, r8, 0x1
    slw r7, r6, r8
    and r0, r7, r4
    cmplw r7, r0
    bne lbl_fn_80133130_00000110
    stw r5, 0x268(r3)
lbl_fn_80133130_00000110:
    addi r3, r3, 0x20
    addi r8, r8, 0x1
    bdnz lbl_fn_80133130_00000054
    blr
}

asm void fn_8013322C(void)
{
    nofralloc
    lwz r0, 0xc(r3)
    nor r7, r4, r4
    lwz r5, 0x10(r3)
    mr r8, r3
    and r6, r0, r7
    li r0, 0x4
    and r7, r5, r7
    stw r6, 0xc(r3)
    li r9, 0x0
    li r5, 0x0
    li r6, 0x1
    stw r7, 0x10(r3)
    mtctr r0
lbl_fn_8013322C_00000154:
    slw r7, r6, r9
    and r0, r7, r4
    cmplw r7, r0
    bne lbl_fn_8013322C_00000168
    stw r5, 0x24c(r8)
lbl_fn_8013322C_00000168:
    addi r9, r9, 0x1
    slw r7, r6, r9
    and r0, r7, r4
    cmplw r7, r0
    bne lbl_fn_8013322C_00000180
    stw r5, 0x250(r8)
lbl_fn_8013322C_00000180:
    addi r9, r9, 0x1
    slw r7, r6, r9
    and r0, r7, r4
    cmplw r7, r0
    bne lbl_fn_8013322C_00000198
    stw r5, 0x254(r8)
lbl_fn_8013322C_00000198:
    addi r9, r9, 0x1
    slw r7, r6, r9
    and r0, r7, r4
    cmplw r7, r0
    bne lbl_fn_8013322C_000001B0
    stw r5, 0x258(r8)
lbl_fn_8013322C_000001B0:
    addi r9, r9, 0x1
    slw r7, r6, r9
    and r0, r7, r4
    cmplw r7, r0
    bne lbl_fn_8013322C_000001C8
    stw r5, 0x25c(r8)
lbl_fn_8013322C_000001C8:
    addi r9, r9, 0x1
    slw r7, r6, r9
    and r0, r7, r4
    cmplw r7, r0
    bne lbl_fn_8013322C_000001E0
    stw r5, 0x260(r8)
lbl_fn_8013322C_000001E0:
    addi r9, r9, 0x1
    slw r7, r6, r9
    and r0, r7, r4
    cmplw r7, r0
    bne lbl_fn_8013322C_000001F8
    stw r5, 0x264(r8)
lbl_fn_8013322C_000001F8:
    addi r9, r9, 0x1
    slw r7, r6, r9
    and r0, r7, r4
    cmplw r7, r0
    bne lbl_fn_8013322C_00000210
    stw r5, 0x268(r8)
lbl_fn_8013322C_00000210:
    addi r8, r8, 0x20
    addi r9, r9, 0x1
    bdnz lbl_fn_8013322C_00000154
    lwz r5, 0x2f0(r3)
    cmpwi r5, 0x0
    beqlr
    lwz r4, 0xc(r3)
    li r6, 0x0
    lwz r0, 0x10(r3)
    li r7, 0x0
    rlwinm r4, r4, 0, 12, 10
    stw r4, 0xc(r3)
    rlwinm r0, r0, 0, 12, 10
    stw r0, 0x10(r3)
    b lbl_fn_8013322C_00000288
lbl_fn_8013322C_0000024C:
    add r4, r5, r7
    lwz r4, 0x654(r4)
    lwz r4, 0x274(r4)
    lwz r0, 0xf0(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8013322C_00000280
    lwz r4, 0xc(r3)
    lwz r0, 0x10(r3)
    oris r4, r4, 0x10
    stw r4, 0xc(r3)
    oris r0, r0, 0x10
    stw r0, 0x10(r3)
    blr
lbl_fn_8013322C_00000280:
    addi r7, r7, 0x4
    addi r6, r6, 0x1
lbl_fn_8013322C_00000288:
    lwz r0, 0x650(r5)
    cmplw r6, r0
    blt lbl_fn_8013322C_0000024C
    blr
}

asm void fn_801333A4(void)
{
    nofralloc
    li r0, 0x20
    li r7, 0x0
    li r5, 0x1
    mtctr r0
lbl_fn_801333A4_000002A8:
    slw r6, r5, r7
    and r0, r6, r4
    cmplw r6, r0
    bne lbl_fn_801333A4_000002C8
    slwi r0, r7, 2
    add r3, r3, r0
    lwz r3, 0x24c(r3)
    blr
lbl_fn_801333A4_000002C8:
    addi r7, r7, 0x1
    bdnz lbl_fn_801333A4_000002A8
    li r3, -0x1
    blr
}

asm void fn_801333E4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    lis r0, 0x4330
    lfs f0, lbl_80881900
    lfs f2, 0x4(r3)
    stw r0, 0x8(r1)
    fcmpo cr0, f2, f0
    stw r0, 0x10(r1)
    ble lbl_fn_801333E4_000002FC
    b lbl_fn_801333E4_00000300
lbl_fn_801333E4_000002FC:
    fmr f2, f0
lbl_fn_801333E4_00000300:
    lwz r0, 0x16c(r3)
    lis r4, lbl_80737348@ha
    lfd f1, lbl_80737348@l(r4)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    bge lbl_fn_801333E4_00000340
    lfs f1, 0x4(r3)
    lfs f0, lbl_80881900
    fcmpo cr0, f1, f0
    ble lbl_fn_801333E4_00000338
    b lbl_fn_801333E4_0000034C
lbl_fn_801333E4_00000338:
    fmr f1, f0
    b lbl_fn_801333E4_0000034C
lbl_fn_801333E4_00000340:
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f0, f1
lbl_fn_801333E4_0000034C:
    lfs f2, 0x8(r3)
    lfs f0, lbl_80881900
    stfs f1, 0x4(r3)
    fcmpo cr0, f2, f0
    ble lbl_fn_801333E4_00000364
    b lbl_fn_801333E4_00000368
lbl_fn_801333E4_00000364:
    fmr f2, f0
lbl_fn_801333E4_00000368:
    lwz r0, 0x170(r3)
    lis r4, lbl_80737348@ha
    lfd f1, lbl_80737348@l(r4)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    bge lbl_fn_801333E4_000003A8
    lfs f1, 0x8(r3)
    lfs f0, lbl_80881900
    fcmpo cr0, f1, f0
    ble lbl_fn_801333E4_000003A0
    b lbl_fn_801333E4_000003B4
lbl_fn_801333E4_000003A0:
    fmr f1, f0
    b lbl_fn_801333E4_000003B4
lbl_fn_801333E4_000003A8:
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f0, f1
lbl_fn_801333E4_000003B4:
    stfs f1, 0x8(r3)
    addi r1, r1, 0x20
    blr
}

asm void fn_801334CC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x63
    stw r0, 0x24(r1)
    blt lbl_fn_801334CC_000003DC
    li r3, 0x0
    b lbl_fn_801334CC_00000430
lbl_fn_801334CC_000003DC:
    cmpwi r4, 0x45
    li r0, 0x45
    bgt lbl_fn_801334CC_000003EC
    mr r0, r4
lbl_fn_801334CC_000003EC:
    xoris r3, r0, 0x8000
    lis r0, 0x4330
    stw r3, 0xc(r1)
    lis r4, lbl_80737348@ha
    lfd f1, lbl_80737348@l(r4)
    lis r3, lbl_80737340@ha
    stw r0, 0x8(r1)
    lfd f2, lbl_80737340@l(r3)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f1
    bl fn_8068AEB0
    frsp f1, f1
    lfs f0, lbl_80881908
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x10(r1)
    lwz r3, 0x14(r1)
lbl_fn_801334CC_00000430:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8013354C(void)
{
    nofralloc
    stwu r1, -0x2e0(r1)
    mflr r0
    stw r0, 0x2e4(r1)
    addi r11, r1, 0x2b0
    stfd f31, 0x2d0(r1)
    psq_st f31, 0x2d8(r1), 0, 0
    stfd f30, 0x2c0(r1)
    psq_st f30, 0x2c8(r1), 0, 0
    stfd f29, 0x2b0(r1)
    psq_st f29, 0x2b8(r1), 0, 0
    bl _savegpr_26
    lwz r31, 0xa0(r3)
    lis r0, 0x4330
    stw r0, 0x280(r1)
    mr r28, r3
    cmpwi r31, 0x63
    mr r29, r5
    stw r0, 0x288(r1)
    blt lbl_fn_8013354C_00000494
    li r3, 0x0
    b lbl_fn_8013354C_000009F4
lbl_fn_8013354C_00000494:
    lwz r0, 0x380(r3)
    addi r5, r3, 0x384
    li r3, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8013354C_000004CC
lbl_fn_8013354C_000004AC:
    lwz r6, 0x0(r5)
    lwz r0, 0x0(r6)
    cmpwi r0, 0x2c
    bne lbl_fn_8013354C_000004C4
    lwz r0, 0x4(r6)
    add r3, r3, r0
lbl_fn_8013354C_000004C4:
    addi r5, r5, 0x14
    bdnz lbl_fn_8013354C_000004AC
lbl_fn_8013354C_000004CC:
    mullw r0, r4, r3
    lis r3, lbl_80737348@ha
    lfd f2, lbl_80737348@l(r3)
    cmpwi r31, 0x63
    lfs f0, lbl_80881918
    li r30, 0x0
    xoris r0, r0, 0x8000
    stw r0, 0x284(r1)
    lfd f1, 0x280(r1)
    fsubs f1, f1, f2
    fdivs f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x290(r1)
    lwz r0, 0x294(r1)
    add r26, r4, r0
    blt lbl_fn_8013354C_00000514
    li r5, 0x0
    b lbl_fn_8013354C_00000560
lbl_fn_8013354C_00000514:
    cmpwi r31, 0x45
    li r0, 0x45
    bgt lbl_fn_8013354C_00000524
    mr r0, r31
lbl_fn_8013354C_00000524:
    xoris r0, r0, 0x8000
    stw r0, 0x28c(r1)
    lis r4, lbl_80737348@ha
    lis r3, lbl_80737340@ha
    lfd f1, lbl_80737348@l(r4)
    lfd f0, 0x288(r1)
    lfd f2, lbl_80737340@l(r3)
    fsubs f1, f0, f1
    bl fn_8068AEB0
    frsp f1, f1
    lfs f0, lbl_80881908
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x290(r1)
    lwz r5, 0x294(r1)
lbl_fn_8013354C_00000560:
    lwz r4, 0x1a8(r28)
    lis r3, lbl_80737348@ha
    lwz r0, 0x1ac(r28)
    lis r27, lbl_80737340@ha
    add r4, r4, r26
    stw r4, 0x1a8(r28)
    add r0, r0, r26
    lfs f29, lbl_80881904
    stw r0, 0x1ac(r28)
    lfd f30, lbl_80737348@l(r3)
    lfs f31, lbl_80881908
    b lbl_fn_8013354C_0000060C
lbl_fn_8013354C_00000590:
    lwz r3, 0xa0(r28)
    cmpwi r3, 0x63
    bge lbl_fn_8013354C_00000618
    lfs f0, 0x1b0(r28)
    addi r3, r3, 0x1
    lwz r0, 0x1ac(r28)
    cmpwi r3, 0x63
    fadds f0, f0, f29
    stw r3, 0xa0(r28)
    subf r0, r5, r0
    stfs f0, 0x1b0(r28)
    stw r0, 0x1ac(r28)
    blt lbl_fn_8013354C_000005CC
    li r5, 0x0
    b lbl_fn_8013354C_00000608
lbl_fn_8013354C_000005CC:
    cmpwi r3, 0x45
    li r0, 0x45
    bgt lbl_fn_8013354C_000005DC
    mr r0, r3
lbl_fn_8013354C_000005DC:
    xoris r0, r0, 0x8000
    stw r0, 0x284(r1)
    lfd f2, lbl_80737340@l(r27)
    lfd f0, 0x280(r1)
    fsubs f1, f0, f30
    bl fn_8068AEB0
    frsp f0, f1
    fmuls f0, f31, f0
    fctiwz f0, f0
    stfd f0, 0x290(r1)
    lwz r5, 0x294(r1)
lbl_fn_8013354C_00000608:
    addi r30, r30, 0x1
lbl_fn_8013354C_0000060C:
    lwz r0, 0x1ac(r28)
    cmpw r0, r5
    bge lbl_fn_8013354C_00000590
lbl_fn_8013354C_00000618:
    cmpwi r30, 0x0
    ble lbl_fn_8013354C_00000628
    mr r3, r28
    bl fn_8012B3E8
lbl_fn_8013354C_00000628:
    cmpwi r30, 0x0
    ble lbl_fn_8013354C_000009F0
    lfs f1, lbl_80881900
    li r4, 0x0
    lfs f0, lbl_80881904
    li r3, 0x1
    li r0, 0x6
    stfs f1, 0x144(r1)
    addi r26, r1, 0x22c
    addi r27, r1, 0x24c
    stfs f1, 0x148(r1)
    stfs f1, 0x14c(r1)
    stfs f1, 0x150(r1)
    stfs f0, 0x154(r1)
    stfs f0, 0x158(r1)
    stfs f1, 0x15c(r1)
    stfs f1, 0x160(r1)
    stw r4, 0x164(r1)
    stw r4, 0x168(r1)
    stfs f1, 0x16c(r1)
    stfs f1, 0x170(r1)
    stw r4, 0x174(r1)
    stw r4, 0x178(r1)
    stfs f1, 0x17c(r1)
    stfs f1, 0x198(r1)
    stfs f1, 0x180(r1)
    stfs f1, 0x19c(r1)
    stfs f1, 0x184(r1)
    stfs f1, 0x1a0(r1)
    stfs f1, 0x188(r1)
    stfs f1, 0x1a4(r1)
    stfs f1, 0x18c(r1)
    stfs f1, 0x1a8(r1)
    stfs f1, 0x190(r1)
    stfs f1, 0x1ac(r1)
    stfs f1, 0x194(r1)
    stfs f1, 0x1b0(r1)
    stw r3, 0x1bc(r1)
    stw r4, 0x1c0(r1)
    stw r4, 0x1c4(r1)
    stw r4, 0x1c8(r1)
    stw r4, 0x1cc(r1)
    stfs f1, 0x1d0(r1)
    stfs f1, 0x1d4(r1)
    stw r4, 0x1d8(r1)
    stw r4, 0x1dc(r1)
    stw r4, 0x1e0(r1)
    stw r4, 0x204(r1)
    stw r4, 0x208(r1)
    stw r0, 0x20c(r1)
    stw r4, 0x210(r1)
    stw r4, 0x214(r1)
lbl_fn_8013354C_000006F8:
    mr r3, r26
    li r4, 0x0
    li r5, 0x8
    bl memset
    addi r26, r26, 0x8
    cmplw r26, r27
    blt lbl_fn_8013354C_000006F8
    lfs f0, lbl_80881904
    li r6, 0x0
    lfs f1, lbl_80881918
    li r0, 0x64
    stb r6, 0x264(r1)
    addi r3, r1, 0x218
    li r4, 0x0
    li r5, 0x4
    stb r6, 0x265(r1)
    stb r6, 0x266(r1)
    stb r6, 0x267(r1)
    stfs f1, 0x268(r1)
    stw r0, 0x26c(r1)
    stw r6, 0x270(r1)
    stw r6, 0x274(r1)
    stfs f0, 0x278(r1)
    stfs f0, 0x27c(r1)
    bl memset
    addi r3, r1, 0x21c
    li r4, 0x0
    li r5, 0x10
    bl memset
    mr r3, r27
    li r4, 0x0
    li r5, 0x14
    bl memset
    addi r27, r1, 0x22c
    li r26, 0x0
lbl_fn_8013354C_00000784:
    mr r3, r27
    li r4, 0x0
    li r5, 0x8
    bl memset
    addi r26, r26, 0x1
    addi r27, r27, 0x8
    cmpwi r26, 0x4
    blt lbl_fn_8013354C_00000784
    lwz r6, 0x2f0(r28)
    mr r3, r28
    mr r5, r31
    addi r4, r1, 0x144
    lwz r7, 0x5c(r6)
    li r6, 0x0
    lwz r7, 0xc8(r7)
    bl fn_8012C6D4
    lfs f1, lbl_80881900
    li r4, 0x0
    lfs f0, lbl_80881904
    li r3, 0x1
    li r0, 0x6
    stfs f1, 0x8(r1)
    addi r26, r1, 0xf0
    addi r31, r1, 0x110
    stfs f1, 0xc(r1)
    stfs f1, 0x10(r1)
    stfs f1, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f1, 0x20(r1)
    stfs f1, 0x24(r1)
    stw r4, 0x28(r1)
    stw r4, 0x2c(r1)
    stfs f1, 0x30(r1)
    stfs f1, 0x34(r1)
    stw r4, 0x38(r1)
    stw r4, 0x3c(r1)
    stfs f1, 0x40(r1)
    stfs f1, 0x5c(r1)
    stfs f1, 0x44(r1)
    stfs f1, 0x60(r1)
    stfs f1, 0x48(r1)
    stfs f1, 0x64(r1)
    stfs f1, 0x4c(r1)
    stfs f1, 0x68(r1)
    stfs f1, 0x50(r1)
    stfs f1, 0x6c(r1)
    stfs f1, 0x54(r1)
    stfs f1, 0x70(r1)
    stfs f1, 0x58(r1)
    stfs f1, 0x74(r1)
    stw r3, 0x80(r1)
    stw r4, 0x84(r1)
    stw r4, 0x88(r1)
    stw r4, 0x8c(r1)
    stw r4, 0x90(r1)
    stfs f1, 0x94(r1)
    stfs f1, 0x98(r1)
    stw r4, 0x9c(r1)
    stw r4, 0xa0(r1)
    stw r4, 0xa4(r1)
    stw r4, 0xc8(r1)
    stw r4, 0xcc(r1)
    stw r0, 0xd0(r1)
    stw r4, 0xd4(r1)
    stw r4, 0xd8(r1)
lbl_fn_8013354C_0000088C:
    mr r3, r26
    li r4, 0x0
    li r5, 0x8
    bl memset
    addi r26, r26, 0x8
    cmplw r26, r31
    blt lbl_fn_8013354C_0000088C
    lfs f0, lbl_80881904
    li r6, 0x0
    lfs f1, lbl_80881918
    li r0, 0x64
    stb r6, 0x128(r1)
    addi r3, r1, 0xdc
    li r4, 0x0
    li r5, 0x4
    stb r6, 0x129(r1)
    stb r6, 0x12a(r1)
    stb r6, 0x12b(r1)
    stfs f1, 0x12c(r1)
    stw r0, 0x130(r1)
    stw r6, 0x134(r1)
    stw r6, 0x138(r1)
    stfs f0, 0x13c(r1)
    stfs f0, 0x140(r1)
    bl memset
    addi r3, r1, 0xe0
    li r4, 0x0
    li r5, 0x10
    bl memset
    mr r3, r31
    li r4, 0x0
    li r5, 0x14
    bl memset
    addi r27, r1, 0xf0
    li r26, 0x0
lbl_fn_8013354C_00000918:
    mr r3, r27
    li r4, 0x0
    li r5, 0x8
    bl memset
    addi r26, r26, 0x1
    addi r27, r27, 0x8
    cmpwi r26, 0x4
    blt lbl_fn_8013354C_00000918
    lwz r6, 0x2f0(r28)
    mr r3, r28
    lwz r5, 0xa0(r28)
    addi r4, r1, 0x8
    lwz r7, 0x5c(r6)
    li r6, 0x0
    lwz r7, 0xc8(r7)
    bl fn_8012C6D4
    lwz r4, 0x1bc(r1)
    lis r3, lbl_80737348@ha
    lwz r0, 0x80(r1)
    lfd f1, lbl_80737348@l(r3)
    subf r0, r4, r0
    xoris r0, r0, 0x8000
    stw r0, 0x28c(r1)
    lfd f0, 0x288(r1)
    fsubs f0, f0, f1
    stfs f0, 0x8(r29)
    lwz r3, 0x1c8(r1)
    lwz r0, 0x8c(r1)
    subf r0, r3, r0
    xoris r0, r0, 0x8000
    stw r0, 0x284(r1)
    lfd f0, 0x280(r1)
    fsubs f0, f0, f1
    stfs f0, 0xc(r29)
    lfs f1, 0x8(r1)
    lfs f0, 0x144(r1)
    fsubs f0, f1, f0
    stfs f0, 0x10(r29)
    lfs f1, 0x10(r1)
    lfs f0, 0x14c(r1)
    fsubs f0, f1, f0
    stfs f0, 0x18(r29)
    lfs f1, 0xc(r1)
    lfs f0, 0x148(r1)
    fsubs f0, f1, f0
    stfs f0, 0x14(r29)
    lfs f1, 0x14(r1)
    lfs f0, 0x150(r1)
    fsubs f0, f1, f0
    stfs f0, 0x1c(r29)
    lwz r3, 0x1d8(r1)
    lwz r0, 0x9c(r1)
    subf r0, r3, r0
    stw r0, 0x20(r29)
lbl_fn_8013354C_000009F0:
    mr r3, r30
lbl_fn_8013354C_000009F4:
    addi r11, r1, 0x2b0
    psq_l f31, 0x2d8(r1), 0, 0
    lfd f31, 0x2d0(r1)
    psq_l f30, 0x2c8(r1), 0, 0
    lfd f30, 0x2c0(r1)
    psq_l f29, 0x2b8(r1), 0, 0
    lfd f29, 0x2b0(r1)
    bl _restgpr_26
    lwz r0, 0x2e4(r1)
    mtlr r0
    addi r1, r1, 0x2e0
    blr
}

asm void fn_80133B30(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    lwz r0, 0x1c(r3)
    xor r0, r4, r0
    stw r4, 0x1c(r3)
    srawi r5, r0, 1
    and r0, r0, r4
    subf r0, r0, r5
    srwi r31, r0, 31
    bl fn_8012B3E8
    mr r3, r30
    bl fn_8012B988
    cmpwi r31, 0x0
    bne lbl_fn_80133B30_00000AB4
    lwz r3, 0x16c(r30)
    lis r0, 0x4330
    lis r4, lbl_80737348@ha
    stw r0, 0x8(r1)
    xoris r3, r3, 0x8000
    lfd f1, lbl_80737348@l(r4)
    stw r3, 0xc(r1)
    lfs f2, 0x4(r30)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    bge lbl_fn_80133B30_00000AA0
    b lbl_fn_80133B30_00000AB0
lbl_fn_80133B30_00000AA0:
    stw r3, 0x14(r1)
    stw r0, 0x10(r1)
    lfd f0, 0x10(r1)
    fsubs f2, f0, f1
lbl_fn_80133B30_00000AB0:
    stfs f2, 0x4(r30)
lbl_fn_80133B30_00000AB4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80133BD8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lwz r31, 0x160(r3)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r5, lbl_8087F430
    cmpwi r5, 0x0
    beq lbl_fn_80133BD8_00000B24
    lwz r4, 0x10d4(r5)
    cmpwi r4, 0x0
    beq lbl_fn_80133BD8_00000B24
    lwz r0, 0x164(r3)
    mr r3, r5
    lwz r31, 0x54(r4)
    li r4, 0x1
    add r31, r31, r0
    bl fn_80375B78
    add r31, r31, r3
lbl_fn_80133BD8_00000B24:
    lwz r3, 0x2f0(r29)
    lwz r3, 0x5c(r3)
    lwz r3, 0xc8(r3)
    bl fn_8020FCE8
    cmpwi r3, 0x0
    beq lbl_fn_80133BD8_00000B9C
    lwz r3, 0x2f0(r29)
    lwz r0, 0x12a4(r3)
    extrwi r0, r0, 1, 9
    cmplwi r0, 0x1
    beq lbl_fn_80133BD8_00000B68
    lwz r3, 0x5c(r3)
    lwz r0, 0x9c(r3)
    rlwinm r3, r0, 0, 14, 14
    subis r0, r3, 0x2
    cmplwi r0, 0x0
    bne lbl_fn_80133BD8_00000B84
lbl_fn_80133BD8_00000B68:
    lwz r3, lbl_8087F0A8
    lwz r0, 0xd4(r3)
    slwi r0, r0, 5
    add r3, r3, r0
    lwz r0, 0xe4(r3)
    add r31, r31, r0
    b lbl_fn_80133BD8_00000B9C
lbl_fn_80133BD8_00000B84:
    lwz r3, lbl_8087F0A8
    lwz r0, 0xd4(r3)
    slwi r0, r0, 5
    add r3, r3, r0
    lwz r0, 0xdc(r3)
    add r31, r31, r0
lbl_fn_80133BD8_00000B9C:
    lfs f0, 0x1b0(r29)
    lwz r0, lbl_8087F610
    fctiwz f0, f0
    cmpwi r0, 0x0
    stfd f0, 0x8(r1)
    lwz r0, 0xc(r1)
    add r31, r31, r0
    beq lbl_fn_80133BD8_00000BC4
    cmpwi r30, 0x0
    beq lbl_fn_80133BD8_00000C40
lbl_fn_80133BD8_00000BC4:
    lwz r3, 0x2f0(r29)
    lis r5, lbl_80737288@ha
    li r0, 0xf
    li r4, 0x0
    addi r5, r5, lbl_80737288@l
    lwz r3, 0x50(r3)
    mtctr r0
lbl_fn_80133BD8_00000BE0:
    lwz r0, 0x0(r5)
    cmpw r3, r0
    bne lbl_fn_80133BD8_00000C00
    mulli r0, r4, 0xc
    lis r3, lbl_80737288@ha
    addi r3, r3, lbl_80737288@l
    add r30, r3, r0
    b lbl_fn_80133BD8_00000C10
lbl_fn_80133BD8_00000C00:
    addi r5, r5, 0xc
    addi r4, r4, 0x1
    bdnz lbl_fn_80133BD8_00000BE0
    li r30, 0x0
lbl_fn_80133BD8_00000C10:
    cmpwi r30, 0x0
    beq lbl_fn_80133BD8_00000C40
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80133BD8_00000C3C
    li r4, 0x11b
    bl fn_80370174
    cmpwi r3, 0x0
    bne lbl_fn_80133BD8_00000C3C
    lwz r31, 0x4(r30)
    b lbl_fn_80133BD8_00000C40
lbl_fn_80133BD8_00000C3C:
    lwz r31, 0x8(r30)
lbl_fn_80133BD8_00000C40:
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    bne lbl_fn_80133BD8_00000CEC
    lwz r3, 0x2f0(r29)
    cmpwi r3, 0x0
    beq lbl_fn_80133BD8_00000CEC
    lwz r0, 0x48(r3)
    cmpwi r0, 0x2
    bne lbl_fn_80133BD8_00000CEC
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80133BD8_00000CB8
    li r4, 0x11b
    bl fn_80370174
    cmpwi r3, 0x0
    bne lbl_fn_80133BD8_00000CB8
    cmpwi r31, 0x1
    li r0, 0x1
    blt lbl_fn_80133BD8_00000C90
    mr r0, r31
lbl_fn_80133BD8_00000C90:
    cmpwi r0, 0x45
    ble lbl_fn_80133BD8_00000CA0
    li r31, 0x45
    b lbl_fn_80133BD8_00000CEC
lbl_fn_80133BD8_00000CA0:
    cmpwi r31, 0x1
    li r0, 0x1
    blt lbl_fn_80133BD8_00000CB0
    mr r0, r31
lbl_fn_80133BD8_00000CB0:
    mr r31, r0
    b lbl_fn_80133BD8_00000CEC
lbl_fn_80133BD8_00000CB8:
    cmpwi r31, 0x1
    li r0, 0x1
    blt lbl_fn_80133BD8_00000CC8
    mr r0, r31
lbl_fn_80133BD8_00000CC8:
    cmpwi r0, 0x3e7
    ble lbl_fn_80133BD8_00000CD8
    li r31, 0x3e7
    b lbl_fn_80133BD8_00000CEC
lbl_fn_80133BD8_00000CD8:
    cmpwi r31, 0x1
    li r0, 0x1
    blt lbl_fn_80133BD8_00000CE8
    mr r0, r31
lbl_fn_80133BD8_00000CE8:
    mr r31, r0
lbl_fn_80133BD8_00000CEC:
    cmpwi r31, 0x1
    li r3, 0x1
    blt lbl_fn_80133BD8_00000CFC
    mr r3, r31
lbl_fn_80133BD8_00000CFC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80133E24(void)
{
    nofralloc
    addi r10, r3, 0x308
    lis r7, 0x6666
    b lbl_fn_80133E24_00000DC0
lbl_fn_80133E24_00000D24:
    cmpwi r5, 0x0
    blt lbl_fn_80133E24_00000D38
    lwz r0, 0x8(r10)
    cmpw r0, r5
    bne lbl_fn_80133E24_00000DBC
lbl_fn_80133E24_00000D38:
    cmpwi r4, 0x0
    blt lbl_fn_80133E24_00000D4C
    lwz r0, 0x0(r10)
    cmpw r0, r4
    bne lbl_fn_80133E24_00000DBC
lbl_fn_80133E24_00000D4C:
    addi r0, r3, 0x308
    addi r6, r7, 0x6667
    subf r0, r0, r10
    mulhw r0, r6, r0
    srawi r0, r0, 3
    srwi r6, r0, 31
    add r8, r0, r6
    mulli r0, r8, 0x14
    add r9, r3, r0
    b lbl_fn_80133E24_00000DA4
lbl_fn_80133E24_00000D74:
    lwz r0, 0x31c(r9)
    addi r8, r8, 0x1
    stw r0, 0x308(r9)
    lwz r0, 0x320(r9)
    stw r0, 0x30c(r9)
    lwz r0, 0x324(r9)
    stw r0, 0x310(r9)
    lwz r0, 0x328(r9)
    stw r0, 0x314(r9)
    lwz r0, 0x32c(r9)
    stw r0, 0x318(r9)
    addi r9, r9, 0x14
lbl_fn_80133E24_00000DA4:
    lwz r6, 0x304(r3)
    subi r0, r6, 0x1
    cmplw r8, r0
    blt lbl_fn_80133E24_00000D74
    stw r0, 0x304(r3)
    b lbl_fn_80133E24_00000DC0
lbl_fn_80133E24_00000DBC:
    addi r10, r10, 0x14
lbl_fn_80133E24_00000DC0:
    lwz r0, 0x304(r3)
    mulli r0, r0, 0x14
    add r6, r3, r0
    addi r0, r6, 0x308
    cmplw r10, r0
    bne lbl_fn_80133E24_00000D24
    blr
}

asm void fn_80133EE8(void)
{
    nofralloc
    lwz r0, 0x304(r3)
    addi r3, r3, 0x308
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80133EE8_00000E04
lbl_fn_80133EE8_00000DF0:
    lwz r0, 0x0(r3)
    cmpw r0, r4
    beqlr
    addi r3, r3, 0x14
    bdnz lbl_fn_80133EE8_00000DF0
lbl_fn_80133EE8_00000E04:
    li r3, 0x0
    blr
}

asm void fn_80133F18(void)
{
    nofralloc
    lwz r0, 0x304(r3)
    addi r6, r3, 0x308
    li r3, 0x0
    mtctr r0
    cmplwi r0, 0x0
    blelr
lbl_fn_80133F18_00000E24:
    cmpwi r4, 0x0
    blt lbl_fn_80133F18_00000E38
    lwz r0, 0x0(r6)
    cmpw r0, r4
    bne lbl_fn_80133F18_00000E54
lbl_fn_80133F18_00000E38:
    cmpwi r5, 0x0
    blt lbl_fn_80133F18_00000E4C
    lwz r0, 0x8(r6)
    cmpw r0, r5
    bne lbl_fn_80133F18_00000E54
lbl_fn_80133F18_00000E4C:
    lwz r0, 0x4(r6)
    add r3, r3, r0
lbl_fn_80133F18_00000E54:
    addi r6, r6, 0x14
    bdnz lbl_fn_80133F18_00000E24
    blr
}

asm void fn_80133F6C(void)
{
    nofralloc
    lwz r0, 0x304(r3)
    addi r6, r3, 0x308
    li r3, 0x0
    mtctr r0
    cmplwi r0, 0x0
    blelr
lbl_fn_80133F6C_00000E78:
    cmpwi r4, 0x0
    blt lbl_fn_80133F6C_00000E8C
    lwz r0, 0x0(r6)
    cmpw r0, r4
    bne lbl_fn_80133F6C_00000EA4
lbl_fn_80133F6C_00000E8C:
    cmpwi r5, 0x0
    blt lbl_fn_80133F6C_00000EA0
    lwz r0, 0x8(r6)
    cmpw r0, r5
    bne lbl_fn_80133F6C_00000EA4
lbl_fn_80133F6C_00000EA0:
    addi r3, r3, 0x1
lbl_fn_80133F6C_00000EA4:
    addi r6, r6, 0x14
    bdnz lbl_fn_80133F6C_00000E78
    blr
}

asm void fn_80133FBC(void)
{
    nofralloc
    cmpwi r5, 0x0
    beq lbl_fn_80133FBC_00000F18
    lwz r5, 0x0(r4)
    addi r8, r3, 0x384
    lwz r0, 0x380(r3)
    lwz r7, 0x4(r4)
    lwz r6, 0x0(r5)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80133FBC_00000F00
lbl_fn_80133FBC_00000ED8:
    lwz r5, 0x0(r8)
    lwz r0, 0x0(r5)
    cmpw r0, r6
    bne lbl_fn_80133FBC_00000EF8
    lwz r0, 0x4(r8)
    cmplw r0, r7
    bne lbl_fn_80133FBC_00000EF8
    b lbl_fn_80133FBC_00000F04
lbl_fn_80133FBC_00000EF8:
    addi r8, r8, 0x14
    bdnz lbl_fn_80133FBC_00000ED8
lbl_fn_80133FBC_00000F00:
    li r8, 0x0
lbl_fn_80133FBC_00000F04:
    cmpwi r8, 0x0
    beq lbl_fn_80133FBC_00000F18
    lwz r0, 0xc(r4)
    stw r0, 0xc(r8)
    blr
lbl_fn_80133FBC_00000F18:
    lwz r0, 0x380(r3)
    cmplwi r0, 0x8
    bgelr
    lwz r0, 0x380(r3)
    mulli r0, r0, 0x14
    add r0, r3, r0
    addic. r5, r0, 0x384
    beq lbl_fn_80133FBC_00000F60
    lwz r0, 0x0(r4)
    stw r0, 0x0(r5)
    lwz r0, 0x4(r4)
    stw r0, 0x4(r5)
    lwz r0, 0x8(r4)
    stw r0, 0x8(r5)
    lwz r0, 0xc(r4)
    stw r0, 0xc(r5)
    lwz r0, 0x10(r4)
    stw r0, 0x10(r5)
lbl_fn_80133FBC_00000F60:
    lwz r4, 0x380(r3)
    addi r0, r4, 0x1
    stw r0, 0x380(r3)
    blr
}

asm void fn_8013407C(void)
{
    nofralloc
    lwz r0, 0x2f0(r3)
    cmpwi r0, 0x0
    beqlr
    addi r8, r3, 0x384
    lis r5, 0x6666
    b lbl_fn_8013407C_0000100C
lbl_fn_8013407C_00000F88:
    lwz r4, 0x8(r8)
    lwz r0, 0x2f0(r3)
    cmplw r4, r0
    bne lbl_fn_8013407C_00001008
    addi r0, r3, 0x384
    addi r4, r5, 0x6667
    subf r0, r0, r8
    mulhw r0, r4, r0
    srawi r0, r0, 3
    srwi r4, r0, 31
    add r6, r0, r4
    mulli r0, r6, 0x14
    add r7, r3, r0
    b lbl_fn_8013407C_00000FF0
lbl_fn_8013407C_00000FC0:
    lwz r0, 0x398(r7)
    addi r6, r6, 0x1
    stw r0, 0x384(r7)
    lwz r0, 0x39c(r7)
    stw r0, 0x388(r7)
    lwz r0, 0x3a0(r7)
    stw r0, 0x38c(r7)
    lwz r0, 0x3a4(r7)
    stw r0, 0x390(r7)
    lwz r0, 0x3a8(r7)
    stw r0, 0x394(r7)
    addi r7, r7, 0x14
lbl_fn_8013407C_00000FF0:
    lwz r4, 0x380(r3)
    subi r0, r4, 0x1
    cmplw r6, r0
    blt lbl_fn_8013407C_00000FC0
    stw r0, 0x380(r3)
    b lbl_fn_8013407C_0000100C
lbl_fn_8013407C_00001008:
    addi r8, r8, 0x14
lbl_fn_8013407C_0000100C:
    lwz r0, 0x380(r3)
    mulli r0, r0, 0x14
    add r4, r3, r0
    addi r0, r4, 0x384
    cmplw r8, r0
    bne lbl_fn_8013407C_00000F88
    blr
}

asm void fn_80134134(void)
{
    nofralloc
    lwz r0, 0x380(r3)
    addi r3, r3, 0x384
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80134134_00001054
lbl_fn_80134134_0000103C:
    lwz r5, 0x0(r3)
    lwz r0, 0x0(r5)
    cmpw r0, r4
    beqlr
    addi r3, r3, 0x14
    bdnz lbl_fn_80134134_0000103C
lbl_fn_80134134_00001054:
    li r3, 0x0
    blr
}

asm void fn_80134168(void)
{
    nofralloc
    lwz r0, 0x380(r3)
    addi r6, r3, 0x384
    li r3, 0x0
    mtctr r0
    cmplwi r0, 0x0
    blelr
lbl_fn_80134168_00001074:
    lwz r7, 0x0(r6)
    lwz r0, 0x0(r7)
    cmpw r0, r4
    bne lbl_fn_80134168_000010A0
    cmpwi r5, 0x0
    blt lbl_fn_80134168_00001098
    lwz r0, 0x8(r7)
    cmpw r0, r5
    bne lbl_fn_80134168_000010A0
lbl_fn_80134168_00001098:
    lwz r0, 0x4(r7)
    add r3, r3, r0
lbl_fn_80134168_000010A0:
    addi r6, r6, 0x14
    bdnz lbl_fn_80134168_00001074
    blr
}

asm void fn_801341B8(void)
{
    nofralloc
    lwz r0, 0x380(r3)
    addi r6, r3, 0x384
    li r3, 0x0
    mtctr r0
    cmplwi r0, 0x0
    blelr
lbl_fn_801341B8_000010C4:
    lwz r7, 0x0(r6)
    lwz r0, 0x0(r7)
    cmpw r0, r4
    bne lbl_fn_801341B8_000010F0
    cmpwi r5, 0x0
    blt lbl_fn_801341B8_000010E8
    lwz r0, 0x8(r7)
    cmpw r0, r5
    bne lbl_fn_801341B8_000010F0
lbl_fn_801341B8_000010E8:
    lwz r0, 0x10(r7)
    add r3, r3, r0
lbl_fn_801341B8_000010F0:
    addi r6, r6, 0x14
    bdnz lbl_fn_801341B8_000010C4
    blr
}

asm void fn_80134208(void)
{
    nofralloc
    lwz r4, 0x2f0(r3)
    li r3, 0x1
    lwz r4, 0x5c(r4)
    lbz r0, 0x122(r4)
    extsb r0, r0
    cmpwi r0, 0x1
    beqlr
    cmpwi r0, 0x0
    beqlr
    li r3, 0x0
    blr
}

asm void fn_80134234(void)
{
    nofralloc
    lwz r3, 0x2f0(r3)
    lwz r3, 0x5c(r3)
    lwz r3, 0x11c(r3)
    subi r0, r3, 0x2
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

asm void fn_80134250(void)
{
    nofralloc
    lwz r3, 0x2f0(r3)
    lwz r3, 0x5c(r3)
    lbz r0, 0x122(r3)
    extsb r3, r0
    subi r0, r3, 0x4
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

asm void fn_80134270(void)
{
    nofralloc
    lwz r3, 0x2f0(r3)
    lwz r3, 0x5c(r3)
    lbz r0, 0x122(r3)
    extsb r3, r0
    subi r0, r3, 0x2
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

asm void fn_80134290(void)
{
    nofralloc
    lwz r3, 0x2f0(r3)
    lwz r3, 0x5c(r3)
    lbz r0, 0x122(r3)
    extsb r3, r0
    subi r0, r3, 0x3
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

asm void fn_801342B0(void)
{
    nofralloc
    lwz r3, 0x2f0(r3)
    lwz r3, 0x5c(r3)
    lbz r0, 0x122(r3)
    extsb r3, r0
    subi r0, r3, 0x3
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

asm void fn_801342D0(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    lfs f31, lbl_80881900
    stfd f30, 0x30(r1)
    psq_st f30, 0x38(r1), 0, 0
    lfs f30, 0xb8(r4)
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r30, 0x28(r1)
    lwz r30, 0xb4(r4)
    cmpwi r30, 0x1
    blt lbl_fn_801342D0_00001214
    cmpwi r30, 0x7
    bgt lbl_fn_801342D0_00001214
    fmr f31, f30
    mr r30, r5
    b lbl_fn_801342D0_00001248
lbl_fn_801342D0_00001214:
    cmpwi r30, 0x8
    blt lbl_fn_801342D0_0000123C
    cmpwi r30, 0xa
    bgt lbl_fn_801342D0_0000123C
    mr r3, r5
    bl fn_8021AF50
    cmpwi r3, 0x0
    beq lbl_fn_801342D0_00001248
    fmr f31, f30
    b lbl_fn_801342D0_00001248
lbl_fn_801342D0_0000123C:
    cmpwi r30, 0xb
    bne lbl_fn_801342D0_00001248
    fmr f31, f30
lbl_fn_801342D0_00001248:
    cmplwi r30, 0xb
    li r4, -0x1
    bgt lbl_fn_801342D0_0000142C
    lis r3, jumptable_8077A6B8@ha
    slwi r0, r30, 2
    addi r3, r3, jumptable_8077A6B8@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lfs f2, 0x1b8(r31)
    li r4, 0x18
    lfs f1, 0x28(r31)
    lfs f0, 0xe8(r31)
    fadds f2, f2, f31
    fadds f1, f1, f31
    fadds f0, f0, f31
    stfs f2, 0x1b8(r31)
    stfs f1, 0x28(r31)
    stfs f0, 0xe8(r31)
    b lbl_fn_801342D0_0000142C
    lfs f2, 0x1c0(r31)
    li r4, 0x19
    lfs f1, 0x30(r31)
    lfs f0, 0xf0(r31)
    fadds f2, f2, f31
    fadds f1, f1, f31
    fadds f0, f0, f31
    stfs f2, 0x1c0(r31)
    stfs f1, 0x30(r31)
    stfs f0, 0xf0(r31)
    b lbl_fn_801342D0_0000142C
    lfs f2, 0x1bc(r31)
    li r4, 0x1a
    lfs f1, 0x2c(r31)
    lfs f0, 0xec(r31)
    fadds f2, f2, f31
    fadds f1, f1, f31
    fadds f0, f0, f31
    stfs f2, 0x1bc(r31)
    stfs f1, 0x2c(r31)
    stfs f0, 0xec(r31)
    b lbl_fn_801342D0_0000142C
    lfs f2, 0x1c4(r31)
    li r4, 0x1b
    lfs f1, 0x34(r31)
    lfs f0, 0xf4(r31)
    fadds f2, f2, f31
    fadds f1, f1, f31
    fadds f0, f0, f31
    stfs f2, 0x1c4(r31)
    stfs f1, 0x34(r31)
    stfs f0, 0xf4(r31)
    b lbl_fn_801342D0_0000142C
    fctiwz f0, f31
    lwz r7, 0x1c8(r31)
    lwz r6, 0xbc(r31)
    li r4, 0x1c
    stfd f0, 0x8(r1)
    lwz r3, 0x17c(r31)
    stfd f0, 0x10(r1)
    lwz r0, 0xc(r1)
    lwz r5, 0x14(r1)
    add r7, r7, r0
    stfd f0, 0x18(r1)
    add r5, r6, r5
    lwz r0, 0x1c(r1)
    stw r7, 0x1c8(r31)
    add r0, r3, r0
    stw r5, 0xbc(r31)
    stw r0, 0x17c(r31)
    b lbl_fn_801342D0_0000142C
    fctiwz f0, f31
    lfs f1, 0x1b4(r31)
    lwz r6, 0xac(r31)
    li r4, 0x17
    stfd f0, 0x18(r1)
    fadds f1, f1, f31
    stfd f0, 0x10(r1)
    lwz r5, 0x1c(r1)
    lwz r3, 0x16c(r31)
    lwz r0, 0x14(r1)
    add r5, r6, r5
    stfs f1, 0x1b4(r31)
    add r0, r3, r0
    stw r5, 0xac(r31)
    stw r0, 0x16c(r31)
    b lbl_fn_801342D0_0000142C
    fctiwz f0, f31
    lwz r3, 0x1fc(r31)
    li r4, 0x1d
    stfd f0, 0x18(r1)
    lwz r0, 0x1c(r1)
    add r0, r3, r0
    stw r0, 0x1fc(r31)
    b lbl_fn_801342D0_0000142C
    fctiwz f0, f31
    lwz r3, 0x200(r31)
    li r4, 0x1e
    stfd f0, 0x18(r1)
    lwz r0, 0x1c(r1)
    add r0, r3, r0
    stw r0, 0x200(r31)
    b lbl_fn_801342D0_0000142C
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_801342D0_0000142C
    fctiwz f0, f31
    li r4, 0xda
    stfd f0, 0x18(r1)
    lwz r30, 0x1c(r1)
    bl fn_80370174
    add r30, r30, r3
    lwz r3, lbl_8087F430
    cmpwi r30, 0x3de
    li r4, 0xda
    li r5, 0x3de
    bge lbl_fn_801342D0_00001420
    mr r5, r30
lbl_fn_801342D0_00001420:
    li r6, 0x0
    bl fn_80370320
    li r4, 0x1f
lbl_fn_801342D0_0000142C:
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_801342D0_00001460
    cmpwi r4, 0x0
    blt lbl_fn_801342D0_00001460
    lwz r5, 0x2f0(r31)
    cmpwi r5, 0x0
    beq lbl_fn_801342D0_00001460
    fctiwz f0, f31
    li r7, 0x0
    stfd f0, 0x18(r1)
    lwz r6, 0x1c(r1)
    bl fn_801092C8
lbl_fn_801342D0_00001460:
    mr r3, r31
    bl fn_8012B3E8
    lwz r0, 0x54(r1)
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    psq_l f30, 0x38(r1), 0, 0
    lfd f30, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8013459C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r4, lbl_8087F0A8
    lwz r0, 0x2cc(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8013459C_00001554
    lwz r4, lbl_8087F430
    li r5, 0x0
    cmpwi r4, 0x0
    beq lbl_fn_8013459C_000014D4
    lwz r0, 0x5694(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8013459C_000014D4
    li r5, 0x1
lbl_fn_8013459C_000014D4:
    cmpwi r5, 0x0
    beq lbl_fn_8013459C_0000154C
    bl fn_80680CF8
    lis r4, 0x51ec
    lis r6, lbl_80737258@ha
    subi r4, r4, 0x7ae1
    li r0, 0x6
    mulhw r4, r4, r3
    addi r6, r6, lbl_80737258@l
    li r7, 0x0
    srawi r4, r4, 5
    srwi r5, r4, 31
    add r4, r4, r5
    mulli r4, r4, 0x64
    subf r3, r4, r3
    mtctr r0
lbl_fn_8013459C_00001514:
    lwz r0, 0x0(r6)
    cmpw r3, r0
    bge lbl_fn_8013459C_0000153C
    lis r3, lbl_80737258@ha
    slwi r0, r7, 3
    addi r3, r3, lbl_80737258@l
    add r3, r3, r0
    lwz r0, 0x4(r3)
    stw r0, 0x424(r31)
    b lbl_fn_8013459C_00001554
lbl_fn_8013459C_0000153C:
    addi r6, r6, 0x8
    addi r7, r7, 0x1
    bdnz lbl_fn_8013459C_00001514
    b lbl_fn_8013459C_00001554
lbl_fn_8013459C_0000154C:
    li r0, 0x0
    stw r0, 0x424(r3)
lbl_fn_8013459C_00001554:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80134674(void)
{
    nofralloc
    cmplwi r4, 0x7f
    bgtlr
    srawi r0, r4, 5
    slwi r6, r4, 27
    srwi r5, r4, 31
    li r4, 0x1
    addze r7, r0
    subf r0, r5, r6
    slwi r6, r7, 2
    rotlwi r0, r0, 5
    add r5, r0, r5
    add r3, r3, r6
    lwz r0, 0x1ec(r3)
    slw r4, r4, r5
    and r0, r4, r0
    cmplw r4, r0
    beqlr
    lwz r0, 0x1ec(r3)
    or r0, r0, r4
    stw r0, 0x1ec(r3)
    blr
}
