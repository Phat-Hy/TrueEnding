#include "revolution/types.h"
#include "revolution/os.h"

/* External functions */
extern void _savegpr_24(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void _restgpr_24(void);
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern BOOL OSDisableInterrupts(void);
extern BOOL OSRestoreInterrupts(BOOL);
extern void fn_806095D0(void);
extern void fn_8068AEB0(void);
extern void fn_80695D84(void);

/* External large data symbols */
extern u8 lbl_807AF890[];
extern u8 lbl_807AF8B0[];

/* External SDA symbols */
extern u32 lbl_8087E858;
extern u32 lbl_8087E85C;

/* External float/double constants (sdata2) */
extern f32 lbl_80888678;
extern f32 lbl_8088867C;
extern f32 lbl_80888680;
extern f32 lbl_80888684;
extern f64 lbl_80888688;
extern f32 lbl_80888690;
extern f32 lbl_80888694;
extern f32 lbl_80888698;
extern f64 lbl_808886A0;
extern f32 lbl_808886A8;
extern f64 lbl_808886B0;

/* Function declarations */
void fn_8060E080(void);
void fn_8060E0E0(void);
void fn_8060E280(void);
void fn_8060E350(void);
void fn_8060E410(void);
void fn_8060E470(void);
void fn_8060E800(void);
void fn_8060E950(void);
void fn_8060EA50(void);
void fn_8060EB40(void);

asm void fn_8060E080(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    lis r4, lbl_807AF890@ha
    lis r6, lbl_807AF8B0@ha
    lfs f1, lbl_80888678
    lfs f0, 0xd4(r3)
    addi r6, r6, lbl_807AF8B0@l
    addi r4, r4, lbl_807AF890@l
    lwz r5, 0x60(r6)
    fmuls f0, f1, f0
    lwz r7, 0x1c(r4)
    lwz r4, 0x64(r6)
    lwz r3, 0x68(r6)
    fctiwz f0, f0
    lwz r0, 0x6c(r6)
    stfd f0, 0x8(r1)
    lwz r6, 0xc(r1)
    add r6, r7, r6
    add r6, r6, r5
    add r6, r6, r4
    add r6, r6, r3
    add r6, r6, r0
    slwi r3, r6, 4
    addi r1, r1, 0x10
    blr
}

asm void fn_8060E0E0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    bl OSDisableInterrupts
    mr r31, r3
    bl fn_806095D0
    cmplwi r3, 0x2
    beq lbl_fn_8060E0E0_000000A0
    mr r3, r31
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_fn_8060E0E0_000001DC
lbl_fn_8060E0E0_000000A0:
    lfs f1, 0xd4(r30)
    li r0, 0x1
    lfs f0, lbl_8088867C
    stw r0, 0xcc(r30)
    fcmpo cr0, f1, f0
    bge lbl_fn_8060E0E0_000000EC
    bl OSDisableInterrupts
    lwz r0, 0xcc(r30)
    mr r29, r3
    mr r3, r30
    ori r0, r0, 0x1
    stw r0, 0xcc(r30)
    bl fn_8060EA50
    mr r3, r29
    bl OSRestoreInterrupts
    mr r3, r31
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_fn_8060E0E0_000001DC
lbl_fn_8060E0E0_000000EC:
    lfs f0, lbl_80888678
    lis r3, lbl_807AF890@ha
    addi r3, r3, lbl_807AF890@l
    lwz r0, 0x1c(r3)
    fmuls f1, f0, f1
    stw r0, 0x18(r30)
    bl fn_80695D84
    stw r3, 0x38(r30)
    lis r4, lbl_807AF8B0@ha
    addi r4, r4, lbl_807AF8B0@l
    mr r3, r30
    lwz r0, 0x60(r4)
    stw r0, 0x6c(r30)
    lwz r0, 0x64(r4)
    stw r0, 0x70(r30)
    lwz r0, 0x68(r4)
    stw r0, 0xac(r30)
    lwz r0, 0x6c(r4)
    stw r0, 0xb0(r30)
    bl fn_8060E800
    cmpwi r3, 0x0
    bne lbl_fn_8060E0E0_00000178
    bl OSDisableInterrupts
    lwz r0, 0xcc(r30)
    mr r29, r3
    mr r3, r30
    ori r0, r0, 0x1
    stw r0, 0xcc(r30)
    bl fn_8060EA50
    mr r3, r29
    bl OSRestoreInterrupts
    mr r3, r31
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_fn_8060E0E0_000001DC
lbl_fn_8060E0E0_00000178:
    mr r3, r30
    bl fn_8060E950
    mr r3, r30
    bl fn_8060EB40
    cmpwi r3, 0x0
    bne lbl_fn_8060E0E0_000001C4
    bl OSDisableInterrupts
    lwz r0, 0xcc(r30)
    mr r29, r3
    mr r3, r30
    ori r0, r0, 0x1
    stw r0, 0xcc(r30)
    bl fn_8060EA50
    mr r3, r29
    bl OSRestoreInterrupts
    mr r3, r31
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_fn_8060E0E0_000001DC
lbl_fn_8060E0E0_000001C4:
    lwz r0, 0xcc(r30)
    mr r3, r31
    clrrwi r0, r0, 1
    stw r0, 0xcc(r30)
    bl OSRestoreInterrupts
    li r3, 0x1
lbl_fn_8060E0E0_000001DC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8060E280(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    bl OSDisableInterrupts
    lwz r0, 0xcc(r29)
    mr r30, r3
    ori r0, r0, 0x1
    stw r0, 0xcc(r29)
    bl OSDisableInterrupts
    lwz r0, 0xcc(r29)
    mr r31, r3
    mr r3, r29
    ori r0, r0, 0x1
    stw r0, 0xcc(r29)
    bl fn_8060EA50
    mr r3, r31
    bl OSRestoreInterrupts
    mr r3, r29
    bl fn_8060E0E0
    cmpwi r3, 0x0
    bne lbl_fn_8060E280_00000298
    bl OSDisableInterrupts
    lwz r0, 0xcc(r29)
    mr r31, r3
    mr r3, r29
    ori r0, r0, 0x1
    stw r0, 0xcc(r29)
    bl fn_8060EA50
    mr r3, r31
    bl OSRestoreInterrupts
    mr r3, r30
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_fn_8060E280_000002B4
lbl_fn_8060E280_00000298:
    lwz r0, 0xcc(r29)
    mr r3, r30
    ori r0, r0, 0x2
    clrrwi r0, r0, 1
    stw r0, 0xcc(r29)
    bl OSRestoreInterrupts
    li r3, 0x1
lbl_fn_8060E280_000002B4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8060E350(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    bl OSDisableInterrupts
    lwz r0, 0xcc(r29)
    mr r30, r3
    mr r3, r29
    ori r0, r0, 0x1
    stw r0, 0xcc(r29)
    bl fn_8060E950
    mr r3, r29
    bl fn_8060EB40
    cmpwi r3, 0x0
    bne lbl_fn_8060E350_0000034C
    bl OSDisableInterrupts
    lwz r0, 0xcc(r29)
    mr r31, r3
    mr r3, r29
    ori r0, r0, 0x1
    stw r0, 0xcc(r29)
    bl fn_8060EA50
    mr r3, r31
    bl OSRestoreInterrupts
    mr r3, r30
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_fn_8060E350_00000368
lbl_fn_8060E350_0000034C:
    lwz r0, 0xcc(r29)
    mr r3, r30
    ori r0, r0, 0x2
    clrrwi r0, r0, 1
    stw r0, 0xcc(r29)
    bl OSRestoreInterrupts
    li r3, 0x1
lbl_fn_8060E350_00000368:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8060E410(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl OSDisableInterrupts
    lwz r0, 0xcc(r30)
    mr r31, r3
    mr r3, r30
    ori r0, r0, 0x1
    stw r0, 0xcc(r30)
    bl fn_8060EA50
    mr r3, r31
    bl OSRestoreInterrupts
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8060E470(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r11, r1, 0x70
    bl _savegpr_24
    lwz r0, 0xcc(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8060E470_0000041C
    rlwinm r0, r0, 0, 31, 29
    stw r0, 0xcc(r4)
    b lbl_fn_8060E470_0000075C
lbl_fn_8060E470_0000041C:
    lwz r8, 0xf4(r4)
    lwz r7, 0x0(r3)
    lwz r6, 0x4(r3)
    cmpwi r8, 0x0
    lwz r5, 0x8(r3)
    lwz r0, 0xc(r3)
    stw r7, 0x28(r1)
    stw r6, 0x2c(r1)
    stw r5, 0x30(r1)
    stw r0, 0x34(r1)
    beq lbl_fn_8060E470_00000468
    lwz r6, 0x0(r8)
    lwz r5, 0x4(r8)
    lwz r3, 0x8(r8)
    lwz r0, 0xc(r8)
    stw r6, 0x18(r1)
    stw r5, 0x1c(r1)
    stw r3, 0x20(r1)
    stw r0, 0x24(r1)
lbl_fn_8060E470_00000468:
    lwz r7, 0xf8(r4)
    cmpwi r7, 0x0
    beq lbl_fn_8060E470_00000494
    lwz r6, 0x0(r7)
    lwz r5, 0x4(r7)
    lwz r3, 0x8(r7)
    lwz r0, 0xc(r7)
    stw r6, 0x8(r1)
    stw r5, 0xc(r1)
    stw r3, 0x10(r1)
    stw r0, 0x14(r1)
lbl_fn_8060E470_00000494:
    lfs f2, lbl_80888680
    li r28, 0x0
    lfs f0, 0xc8(r4)
    lis r3, 0x4330
    lfs f3, lbl_80888684
    li r0, 0x0
    lfs f1, 0xec(r4)
    fsubs f5, f2, f0
    lfs f2, 0xf0(r4)
    li r27, 0x4
    fmuls f6, f3, f1
    lfs f1, 0x1c(r4)
    fmuls f7, f3, f2
    lfs f2, 0x74(r4)
    lfs f3, 0x78(r4)
    lfs f4, 0xb4(r4)
    lfd f11, lbl_80888688
lbl_fn_8060E470_000004D8:
    lwz r10, 0x10(r4)
    mr r7, r4
    lwz r11, 0x30(r4)
    mr r8, r4
    lwz r12, 0x5c(r4)
    addi r5, r1, 0x18
    lwz r26, 0x60(r4)
    addi r6, r1, 0x28
    lwz r25, 0x9c(r4)
    addi r9, r1, 0x8
    lwz r24, 0xa0(r4)
    slwi r10, r10, 2
    slwi r11, r11, 2
    slwi r12, r12, 2
    slwi r31, r26, 2
    slwi r30, r25, 2
    slwi r29, r24, 2
    mtctr r27
lbl_fn_8060E470_00000520:
    lwz r24, 0xf4(r4)
    cmpwi r24, 0x0
    beq lbl_fn_8060E470_00000560
    lwz r25, 0x0(r5)
    lwz r26, 0x0(r6)
    lwz r24, 0x0(r25)
    addi r25, r25, 0x4
    lwz r26, 0x0(r26)
    stw r3, 0x38(r1)
    add r24, r26, r24
    xoris r24, r24, 0x8000
    stw r24, 0x3c(r1)
    lfd f8, 0x38(r1)
    stw r25, 0x0(r5)
    fsubs f9, f8, f11
    b lbl_fn_8060E470_0000057C
lbl_fn_8060E470_00000560:
    lwz r24, 0x0(r6)
    stw r3, 0x40(r1)
    lwz r24, 0x0(r24)
    xoris r24, r24, 0x8000
    stw r24, 0x44(r1)
    lfd f8, 0x40(r1)
    fsubs f9, f8, f11
lbl_fn_8060E470_0000057C:
    lwz r24, 0x0(r7)
    lfsx f10, r10, r24
    fmuls f8, f10, f1
    fadds f8, f9, f8
    stfsx f8, r10, r24
    lwz r24, 0x34(r4)
    cmpwi r24, 0x0
    beq lbl_fn_8060E470_000005AC
    lwz r24, 0x20(r7)
    lfsx f12, r11, r24
    stfsx f9, r11, r24
    b lbl_fn_8060E470_000005B0
lbl_fn_8060E470_000005AC:
    fmr f12, f9
lbl_fn_8060E470_000005B0:
    lwz r24, 0x3c(r8)
    fmuls f10, f10, f6
    lwz r26, 0x0(r6)
    lfsx f9, r12, r24
    addi r25, r26, 0x4
    stw r25, 0x0(r6)
    fmuls f8, f9, f2
    fadds f8, f12, f8
    stfsx f8, r12, r24
    lwz r25, 0x40(r8)
    lfsx f13, r31, r25
    fmuls f8, f13, f3
    fadds f9, f9, f13
    fadds f8, f12, f8
    stfsx f8, r31, r25
    lwz r24, 0x7c(r8)
    lfsx f12, r30, r24
    fmuls f8, f12, f4
    fadds f8, f9, f8
    stfsx f8, r30, r24
    fmuls f9, f8, f4
    lfs f8, 0xb8(r7)
    fsubs f9, f12, f9
    fmuls f8, f0, f8
    fmuls f9, f5, f9
    fadds f9, f9, f8
    stfs f9, 0xb8(r7)
    lwz r25, 0x80(r8)
    lfsx f12, r29, r25
    fmuls f8, f12, f4
    fadds f8, f9, f8
    stfsx f8, r29, r25
    fmuls f9, f8, f4
    lfs f8, 0xfc(r4)
    fsubs f9, f12, f9
    fmuls f9, f9, f7
    fadds f9, f10, f9
    fmuls f8, f9, f8
    fctiwz f8, f8
    stfd f8, 0x40(r1)
    lwz r25, 0x44(r1)
    stw r25, 0x0(r26)
    lwz r25, 0xf8(r4)
    cmpwi r25, 0x0
    beq lbl_fn_8060E470_00000688
    lfs f8, 0x100(r4)
    lwz r25, 0x0(r9)
    fmuls f8, f9, f8
    addi r26, r25, 0x4
    stw r26, 0x0(r9)
    fctiwz f8, f8
    stfd f8, 0x40(r1)
    lwz r26, 0x44(r1)
    stw r26, 0x0(r25)
lbl_fn_8060E470_00000688:
    addi r5, r5, 0x4
    addi r6, r6, 0x4
    addi r7, r7, 0x4
    addi r8, r8, 0x8
    addi r9, r9, 0x4
    bdnz lbl_fn_8060E470_00000520
    lwz r6, 0x10(r4)
    lwz r5, 0x14(r4)
    addi r6, r6, 0x1
    stw r6, 0x10(r4)
    cmplw r6, r5
    blt lbl_fn_8060E470_000006BC
    stw r0, 0x10(r4)
lbl_fn_8060E470_000006BC:
    lwz r6, 0x34(r4)
    cmpwi r6, 0x0
    beq lbl_fn_8060E470_000006E0
    lwz r5, 0x30(r4)
    addi r5, r5, 0x1
    stw r5, 0x30(r4)
    cmplw r5, r6
    blt lbl_fn_8060E470_000006E0
    stw r0, 0x30(r4)
lbl_fn_8060E470_000006E0:
    lwz r6, 0x5c(r4)
    lwz r5, 0x64(r4)
    addi r6, r6, 0x1
    stw r6, 0x5c(r4)
    cmplw r6, r5
    blt lbl_fn_8060E470_000006FC
    stw r0, 0x5c(r4)
lbl_fn_8060E470_000006FC:
    lwz r6, 0x60(r4)
    lwz r5, 0x68(r4)
    addi r6, r6, 0x1
    stw r6, 0x60(r4)
    cmplw r6, r5
    blt lbl_fn_8060E470_00000718
    stw r0, 0x60(r4)
lbl_fn_8060E470_00000718:
    lwz r6, 0x9c(r4)
    lwz r5, 0xa4(r4)
    addi r6, r6, 0x1
    stw r6, 0x9c(r4)
    cmplw r6, r5
    blt lbl_fn_8060E470_00000734
    stw r0, 0x9c(r4)
lbl_fn_8060E470_00000734:
    lwz r6, 0xa0(r4)
    lwz r5, 0xa8(r4)
    addi r6, r6, 0x1
    stw r6, 0xa0(r4)
    cmplw r6, r5
    blt lbl_fn_8060E470_00000750
    stw r0, 0xa0(r4)
lbl_fn_8060E470_00000750:
    addi r28, r28, 0x1
    cmplwi r28, 0x60
    blt lbl_fn_8060E470_000004D8
lbl_fn_8060E470_0000075C:
    addi r11, r1, 0x70
    bl _restgpr_24
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_8060E800(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    mr r24, r3
    li r25, 0x0
    mr r30, r24
    li r31, 0x0
    mr r29, r24
lbl_fn_8060E800_000007A8:
    lwz r0, 0x18(r24)
    lwz r12, lbl_8087E858
    slwi r3, r0, 2
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    stw r3, 0x0(r30)
    bne lbl_fn_8060E800_000007D0
    li r3, 0x0
    b lbl_fn_8060E800_000008AC
lbl_fn_8060E800_000007D0:
    lwz r0, 0x38(r24)
    cmpwi r0, 0x0
    beq lbl_fn_8060E800_00000800
    lwz r12, lbl_8087E858
    slwi r3, r0, 2
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    stw r3, 0x20(r30)
    bne lbl_fn_8060E800_00000804
    li r3, 0x0
    b lbl_fn_8060E800_000008AC
lbl_fn_8060E800_00000800:
    stw r31, 0x20(r30)
lbl_fn_8060E800_00000804:
    mr r27, r24
    mr r28, r29
    li r26, 0x0
lbl_fn_8060E800_00000810:
    lwz r0, 0x6c(r27)
    lwz r12, lbl_8087E858
    slwi r3, r0, 2
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    stw r3, 0x3c(r28)
    bne lbl_fn_8060E800_00000838
    li r3, 0x0
    b lbl_fn_8060E800_000008AC
lbl_fn_8060E800_00000838:
    addi r26, r26, 0x1
    addi r28, r28, 0x4
    cmplwi r26, 0x2
    addi r27, r27, 0x4
    blt lbl_fn_8060E800_00000810
    mr r28, r24
    mr r27, r29
    li r26, 0x0
lbl_fn_8060E800_00000858:
    lwz r0, 0xac(r28)
    lwz r12, lbl_8087E858
    slwi r3, r0, 2
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    stw r3, 0x7c(r27)
    bne lbl_fn_8060E800_00000880
    li r3, 0x0
    b lbl_fn_8060E800_000008AC
lbl_fn_8060E800_00000880:
    addi r26, r26, 0x1
    addi r27, r27, 0x4
    cmplwi r26, 0x2
    addi r28, r28, 0x4
    blt lbl_fn_8060E800_00000858
    addi r25, r25, 0x1
    addi r29, r29, 0x8
    cmplwi r25, 0x4
    addi r30, r30, 0x4
    blt lbl_fn_8060E800_000007A8
    li r3, 0x1
lbl_fn_8060E800_000008AC:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8060E950(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    mr r25, r3
    li r26, 0x0
    mr r31, r25
    mr r30, r25
lbl_fn_8060E950_000008F4:
    lwz r3, 0x0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8060E950_00000910
    lwz r0, 0x18(r25)
    li r4, 0x0
    slwi r5, r0, 2
    bl memset
lbl_fn_8060E950_00000910:
    lwz r3, 0x20(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8060E950_0000092C
    lwz r0, 0x38(r25)
    li r4, 0x0
    slwi r5, r0, 2
    bl memset
lbl_fn_8060E950_0000092C:
    mr r28, r30
    mr r29, r25
    li r27, 0x0
lbl_fn_8060E950_00000938:
    lwz r3, 0x3c(r28)
    cmpwi r3, 0x0
    beq lbl_fn_8060E950_00000954
    lwz r0, 0x6c(r29)
    li r4, 0x0
    slwi r5, r0, 2
    bl memset
lbl_fn_8060E950_00000954:
    addi r27, r27, 0x1
    addi r29, r29, 0x4
    cmplwi r27, 0x2
    addi r28, r28, 0x4
    blt lbl_fn_8060E950_00000938
    mr r29, r30
    mr r28, r25
    li r27, 0x0
lbl_fn_8060E950_00000974:
    lwz r3, 0x7c(r29)
    cmpwi r3, 0x0
    beq lbl_fn_8060E950_00000990
    lwz r0, 0xac(r28)
    li r4, 0x0
    slwi r5, r0, 2
    bl memset
lbl_fn_8060E950_00000990:
    addi r27, r27, 0x1
    addi r28, r28, 0x4
    cmplwi r27, 0x2
    addi r29, r29, 0x4
    blt lbl_fn_8060E950_00000974
    addi r26, r26, 0x1
    addi r30, r30, 0x8
    cmplwi r26, 0x4
    addi r31, r31, 0x4
    blt lbl_fn_8060E950_000008F4
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8060EA50(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    li r26, 0x0
    mr r30, r3
    li r31, 0x0
    mr r29, r3
lbl_fn_8060EA50_000009F4:
    lwz r3, 0x0(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8060EA50_00000A10
    lwz r12, lbl_8087E85C
    mtctr r12
    bctrl
    stw r31, 0x0(r30)
lbl_fn_8060EA50_00000A10:
    lwz r3, 0x20(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8060EA50_00000A2C
    lwz r12, lbl_8087E85C
    mtctr r12
    bctrl
    stw r31, 0x20(r30)
lbl_fn_8060EA50_00000A2C:
    mr r28, r29
    li r27, 0x0
lbl_fn_8060EA50_00000A34:
    lwz r3, 0x3c(r28)
    cmpwi r3, 0x0
    beq lbl_fn_8060EA50_00000A50
    lwz r12, lbl_8087E85C
    mtctr r12
    bctrl
    stw r31, 0x3c(r28)
lbl_fn_8060EA50_00000A50:
    addi r27, r27, 0x1
    addi r28, r28, 0x4
    cmplwi r27, 0x2
    blt lbl_fn_8060EA50_00000A34
    mr r28, r29
    li r27, 0x0
lbl_fn_8060EA50_00000A68:
    lwz r3, 0x7c(r28)
    cmpwi r3, 0x0
    beq lbl_fn_8060EA50_00000A84
    lwz r12, lbl_8087E85C
    mtctr r12
    bctrl
    stw r31, 0x7c(r28)
lbl_fn_8060EA50_00000A84:
    addi r27, r27, 0x1
    addi r28, r28, 0x4
    cmplwi r27, 0x2
    blt lbl_fn_8060EA50_00000A68
    addi r26, r26, 0x1
    addi r29, r29, 0x8
    cmplwi r26, 0x4
    addi r30, r30, 0x4
    blt lbl_fn_8060EA50_000009F4
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8060EB40(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x30
    stfd f31, 0x50(r1)
    psq_st f31, 0x58(r1), 0, 0
    stfd f30, 0x40(r1)
    psq_st f30, 0x48(r1), 0, 0
    stfd f29, 0x30(r1)
    psq_st f29, 0x38(r1), 0, 0
    bl _savegpr_25
    lwz r5, 0xd0(r3)
    mr r31, r3
    cmplwi r5, 0x8
    blt lbl_fn_8060EB40_00000B04
    li r3, 0x0
    b lbl_fn_8060EB40_00000D40
lbl_fn_8060EB40_00000B04:
    lfs f1, 0xd8(r3)
    lfs f2, lbl_8088867C
    fcmpo cr0, f1, f2
    blt lbl_fn_8060EB40_00000B20
    lfs f0, 0xd4(r3)
    fcmpo cr0, f1, f0
    ble lbl_fn_8060EB40_00000B28
lbl_fn_8060EB40_00000B20:
    li r3, 0x0
    b lbl_fn_8060EB40_00000D40
lbl_fn_8060EB40_00000B28:
    lwz r0, 0xdc(r3)
    cmplwi r0, 0x6
    blt lbl_fn_8060EB40_00000B3C
    li r3, 0x0
    b lbl_fn_8060EB40_00000D40
lbl_fn_8060EB40_00000B3C:
    lfs f0, 0xe0(r3)
    fcmpo cr0, f0, f2
    bge lbl_fn_8060EB40_00000B50
    li r3, 0x0
    b lbl_fn_8060EB40_00000D40
lbl_fn_8060EB40_00000B50:
    lfs f0, 0xe4(r3)
    fcmpo cr0, f0, f2
    blt lbl_fn_8060EB40_00000B68
    lfs f1, lbl_80888680
    fcmpo cr0, f0, f1
    ble lbl_fn_8060EB40_00000B70
lbl_fn_8060EB40_00000B68:
    li r3, 0x0
    b lbl_fn_8060EB40_00000D40
lbl_fn_8060EB40_00000B70:
    lfs f0, 0xe8(r3)
    fcmpo cr0, f0, f2
    blt lbl_fn_8060EB40_00000B84
    fcmpo cr0, f0, f1
    ble lbl_fn_8060EB40_00000B8C
lbl_fn_8060EB40_00000B84:
    li r3, 0x0
    b lbl_fn_8060EB40_00000D40
lbl_fn_8060EB40_00000B8C:
    lfs f0, 0xec(r3)
    fcmpo cr0, f0, f2
    blt lbl_fn_8060EB40_00000BA0
    fcmpo cr0, f0, f1
    ble lbl_fn_8060EB40_00000BA8
lbl_fn_8060EB40_00000BA0:
    li r3, 0x0
    b lbl_fn_8060EB40_00000D40
lbl_fn_8060EB40_00000BA8:
    lfs f0, 0xf0(r3)
    fcmpo cr0, f0, f2
    blt lbl_fn_8060EB40_00000BBC
    fcmpo cr0, f0, f1
    ble lbl_fn_8060EB40_00000BC4
lbl_fn_8060EB40_00000BBC:
    li r3, 0x0
    b lbl_fn_8060EB40_00000D40
lbl_fn_8060EB40_00000BC4:
    lfs f0, 0xfc(r3)
    fcmpo cr0, f0, f2
    blt lbl_fn_8060EB40_00000BD8
    fcmpo cr0, f0, f1
    ble lbl_fn_8060EB40_00000BE0
lbl_fn_8060EB40_00000BD8:
    li r3, 0x0
    b lbl_fn_8060EB40_00000D40
lbl_fn_8060EB40_00000BE0:
    lfs f0, 0x100(r3)
    fcmpo cr0, f0, f2
    blt lbl_fn_8060EB40_00000BF4
    fcmpo cr0, f0, f1
    ble lbl_fn_8060EB40_00000BFC
lbl_fn_8060EB40_00000BF4:
    li r3, 0x0
    b lbl_fn_8060EB40_00000D40
lbl_fn_8060EB40_00000BFC:
    li r0, 0x0
    lis r4, lbl_807AF890@ha
    stw r0, 0x10(r3)
    slwi r0, r5, 2
    addi r4, r4, lbl_807AF890@l
    cmplwi r5, 0x3
    lwzx r0, r4, r0
    stw r0, 0x14(r3)
    bgt lbl_fn_8060EB40_00000C2C
    lfs f0, lbl_80888690
    stfs f0, 0x1c(r3)
    b lbl_fn_8060EB40_00000C34
lbl_fn_8060EB40_00000C2C:
    lfs f0, lbl_80888694
    stfs f0, 0x1c(r3)
lbl_fn_8060EB40_00000C34:
    lfs f1, lbl_80888678
    li r28, 0x0
    lfs f0, 0xd8(r3)
    stw r28, 0x30(r3)
    fmuls f1, f1, f0
    bl fn_80695D84
    lis r29, lbl_807AF8B0@ha
    stw r3, 0x34(r31)
    lfd f29, lbl_808886B0
    mr r27, r31
    lfs f30, lbl_80888698
    addi r29, r29, lbl_807AF8B0@l
    lfs f31, lbl_80888678
    li r25, 0x0
    li r26, 0x0
    lis r30, 0x4330
lbl_fn_8060EB40_00000C74:
    stw r28, 0x5c(r27)
    lfd f1, lbl_808886A0
    lwz r0, 0xdc(r31)
    stw r30, 0x8(r1)
    slwi r0, r0, 4
    add r0, r26, r0
    lwzx r0, r29, r0
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    stw r0, 0x64(r27)
    fsubs f2, f0, f29
    lfs f0, 0xe0(r31)
    fmuls f2, f30, f2
    fmuls f0, f31, f0
    fdivs f2, f2, f0
    bl fn_8068AEB0
    frsp f0, f1
    addi r25, r25, 0x1
    cmplwi r25, 0x2
    addi r26, r26, 0x4
    stfs f0, 0x74(r27)
    addi r27, r27, 0x4
    blt lbl_fn_8060EB40_00000C74
    lwz r0, 0xdc(r31)
    lis r3, lbl_807AF8B0@ha
    li r4, 0x0
    stw r4, 0x9c(r31)
    addi r3, r3, lbl_807AF8B0@l
    slwi r0, r0, 4
    add r3, r3, r0
    lfs f1, lbl_80888680
    lwz r0, 0x8(r3)
    lfs f0, 0xe8(r31)
    stw r0, 0xa4(r31)
    fsubs f1, f1, f0
    lfs f0, lbl_808886A8
    stw r4, 0xa0(r31)
    lfs f2, 0xe4(r31)
    lwz r0, 0xc(r3)
    fcmpo cr0, f1, f0
    stw r0, 0xa8(r31)
    stfs f2, 0xb4(r31)
    stfs f1, 0xc8(r31)
    ble lbl_fn_8060EB40_00000D28
    stfs f0, 0xc8(r31)
lbl_fn_8060EB40_00000D28:
    lfs f0, lbl_8088867C
    li r3, 0x1
    stfs f0, 0xb8(r31)
    stfs f0, 0xbc(r31)
    stfs f0, 0xc0(r31)
    stfs f0, 0xc4(r31)
lbl_fn_8060EB40_00000D40:
    addi r11, r1, 0x30
    psq_l f31, 0x58(r1), 0, 0
    lfd f31, 0x50(r1)
    psq_l f30, 0x48(r1), 0, 0
    lfd f30, 0x40(r1)
    psq_l f29, 0x38(r1), 0, 0
    lfd f29, 0x30(r1)
    bl _restgpr_25
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}
