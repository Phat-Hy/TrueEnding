#include "revolution/types.h"
#include "revolution/os.h"

/* External runtime functions */
extern void _savegpr_27(void);
extern void _restgpr_27(void);
extern void OSRegisterVersion(const char*);

/* Local/internal function declarations */
void fn_80607A80(void);
void fn_80607B30(void);
void fn_80607BA0(void);

/* External small data symbols */
extern const char* lbl_8087E840;
extern u32 lbl_8087FEB8;
extern u32 lbl_8087FEBC;
extern u32 lbl_8087FEC0;
extern u32 lbl_8087FEC4;
extern u32 lbl_8087FEC8;
extern u32 lbl_8087FECC;
extern u32 lbl_8087FED0;
extern u32 lbl_8087FED4;
extern u32 lbl_8087FED8;
extern u32 lbl_8087FEDC;
extern u32 lbl_8087FEE0;
extern u32 lbl_8087FEE4;
extern u32 lbl_8087FEE8;
extern u32 lbl_8087FEEC;
extern u32 lbl_8087FEF0;

/* Function declarations */
void fn_806077A0(void);
void fn_806077F0(void);
void fn_80607870(void);
void fn_80607890(void);
void fn_806078A0(void);
void fn_806078C0(void);
void fn_806078D0(void);
void fn_806078E0(void);
void fn_80607900(void);
void fn_80607A80(void);
void fn_80607B30(void);
void fn_80607BA0(void);

asm void fn_806077A0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r31, lbl_8087FEF0
    bl OSDisableInterrupts
    stw r30, lbl_8087FEF0
    bl OSRestoreInterrupts
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806077F0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bl OSDisableInterrupts
    lis r7, 0xcc00
    srwi r5, r30, 16
    lhz r6, 0x5030(r7)
    clrlwi r4, r30, 16
    extrwi r0, r31, 16, 11
    clrrwi r6, r6, 13
    or r5, r6, r5
    sth r5, 0x5030(r7)
    lhz r5, 0x5032(r7)
    rlwinm r5, r5, 0, 27, 15
    or r4, r5, r4
    sth r4, 0x5032(r7)
    lhz r4, 0x5036(r7)
    clrrwi r4, r4, 15
    or r0, r4, r0
    sth r0, 0x5036(r7)
    bl OSRestoreInterrupts
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80607870(void)
{
    nofralloc
    lis r3, 0xcc00
    lhz r0, 0x5036(r3)
    ori r0, r0, 0x8000
    sth r0, 0x5036(r3)
    blr
}

asm void fn_80607890(void)
{
    nofralloc
    lis r3, 0xcc00
    lhz r0, 0x503a(r3)
    clrlslwi r3, r0, 17, 5
    blr
}

asm void fn_806078A0(void)
{
    nofralloc
    lis r3, 0xcc00
    lhz r4, 0x5030(r3)
    lhz r0, 0x5032(r3)
    rlwinm r3, r0, 0, 16, 26
    rlwimi r3, r4, 16, 3, 15
    blr
}

asm void fn_806078C0(void)
{
    nofralloc
    lis r3, 0xcc00
    lhz r0, 0x5036(r3)
    clrlslwi r3, r0, 17, 5
    blr
}

asm void fn_806078D0(void)
{
    nofralloc
    lwz r3, lbl_8087FEB8
    blr
}

asm void fn_806078E0(void)
{
    nofralloc
    lis r3, 0xcd00
    lwz r0, 0x6c00(r3)
    extrwi r0, r0, 1, 25
    xori r3, r0, 0x1
    blr
}

asm void fn_80607900(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    lwz r0, lbl_8087FEB8
    cmpwi r0, 0x1
    beq lbl_fn_80607900_00000324
    lwz r3, lbl_8087E840
    bl OSRegisterVersion
    lis r3, 0x8000
    lis r4, 0x431c
    lwz r0, 0xf8(r3)
    li r7, 0x0
    lis r5, 0x1062
    subi r4, r4, 0x217d
    srwi r6, r0, 2
    lis r3, 0x1
    mulhwu r6, r4, r6
    addi r9, r5, 0x4dd3
    subi r0, r3, 0x5bd8
    stw r7, lbl_8087FEE0
    subi r4, r3, 0x5bf0
    subi r3, r3, 0x9e8
    srwi r10, r6, 15
    stw r7, lbl_8087FED8
    mullw r6, r10, r0
    lis r30, 0xcd00
    stw r7, lbl_8087FED0
    li r0, -0x16
    stw r7, lbl_8087FEC8
    mullw r5, r10, r4
    stw r7, lbl_8087FEC0
    mullw r4, r10, r3
    mulli r8, r10, 0x7b24
    mulli r3, r10, 0xbb8
    mulhwu r8, r9, r8
    mulhwu r6, r9, r6
    srwi r8, r8, 9
    stw r8, lbl_8087FEE4
    mulhwu r5, r9, r5
    srwi r6, r6, 9
    stw r6, lbl_8087FEDC
    mulhwu r4, r9, r4
    srwi r5, r5, 9
    stw r5, lbl_8087FED4
    mulhwu r3, r9, r3
    srwi r4, r4, 9
    stw r4, lbl_8087FECC
    srwi r3, r3, 9
    stw r3, lbl_8087FEC4
    lwz r3, 0x6c00(r30)
    and r0, r3, r0
    stw r0, 0x6c00(r30)
    stw r7, 0x6c04(r30)
    stw r7, 0x6c0c(r30)
    lwz r0, 0x6c00(r30)
    rlwinm r0, r0, 0, 27, 25
    ori r0, r0, 0x20
    stw r0, 0x6c00(r30)
    lwz r0, 0x6c00(r30)
    extrwi r0, r0, 1, 25
    xori r0, r0, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_80607900_000002F8
    lwz r0, 0x6c00(r30)
    rlwinm r0, r0, 0, 26, 24
    stw r0, 0x6c00(r30)
    bl OSDisableInterrupts
    mr r29, r3
    bl fn_80607BA0
    lwz r0, 0x6c00(r30)
    mr r3, r29
    ori r0, r0, 0x40
    stw r0, 0x6c00(r30)
    bl OSRestoreInterrupts
lbl_fn_80607900_000002F8:
    li r0, 0x0
    lis r4, fn_80607A80@ha
    stw r0, lbl_8087FEF0
    addi r4, r4, fn_80607A80@l
    li r3, 0x5
    stw r31, lbl_8087FEEC
    bl __OSSetInterruptHandler
    lis r3, 0x400
    bl __OSUnmaskInterrupts
    li r0, 0x1
    stw r0, lbl_8087FEB8
lbl_fn_80607900_00000324:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80607A80(void)
{
    nofralloc
    stwu r1, -0x2e0(r1)
    mflr r0
    lis r6, 0xcc00
    stw r0, 0x2e4(r1)
    li r0, -0xa1
    addi r3, r1, 0x8
    stw r31, 0x2dc(r1)
    mr r31, r4
    lhz r5, 0x500a(r6)
    and r0, r5, r0
    ori r0, r0, 0x8
    sth r0, 0x500a(r6)
    bl OSClearContext
    addi r3, r1, 0x8
    bl OSSetCurrentContext
    lwz r3, lbl_8087FEF0
    cmpwi r3, 0x0
    beq lbl_fn_80607A80_000003C4
    lwz r0, lbl_8087FEBC
    cmpwi r0, 0x0
    bne lbl_fn_80607A80_000003C4
    lwz r0, lbl_8087FEEC
    li r4, 0x1
    stw r4, lbl_8087FEBC
    cmpwi r0, 0x0
    beq lbl_fn_80607A80_000003B0
    bl fn_80607B30
    b lbl_fn_80607A80_000003BC
lbl_fn_80607A80_000003B0:
    mr r12, r3
    mtctr r12
    bctrl
lbl_fn_80607A80_000003BC:
    li r0, 0x0
    stw r0, lbl_8087FEBC
lbl_fn_80607A80_000003C4:
    addi r3, r1, 0x8
    bl OSClearContext
    mr r3, r31
    bl OSSetCurrentContext
    lwz r0, 0x2e4(r1)
    lwz r31, 0x2dc(r1)
    mtlr r0
    addi r1, r1, 0x2e0
    blr
}

asm void fn_80607B30(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r1
    mr r31, r3
    lis r5, lbl_8087FEE8@ha
    addi r5, r5, lbl_8087FEE8@l
    stw r1, 0x0(r5)
    lis r5, lbl_8087FEEC@ha
    addi r5, r5, lbl_8087FEEC@l
    lwz r1, 0x0(r5)
    subi r1, r1, 0x8
    mtlr r31
    blrl
    lis r5, lbl_8087FEE8@ha
    addi r5, r5, lbl_8087FEE8@l
    lwz r1, 0x0(r5)
    mr r10, r1
    lwz r31, 0xc(r10)
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mr r1, r10
    mtlr r0
    blr
}

asm void fn_80607BA0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    li r4, 0x0
    li r3, 0x0
    li r0, 0x0
    li r29, 0x0
    li r30, 0x0
    lis r31, 0xcd00
    b lbl_fn_80607BA0_000005E4
lbl_fn_80607BA0_00000490:
    lwz r0, 0x6c00(r31)
    rlwinm r0, r0, 0, 27, 25
    ori r0, r0, 0x20
    stw r0, 0x6c00(r31)
    lwz r0, 0x6c00(r31)
    rlwinm r0, r0, 0, 31, 29
    stw r0, 0x6c00(r31)
    lwz r0, 0x6c00(r31)
    clrrwi r0, r0, 1
    ori r0, r0, 0x1
    stw r0, 0x6c00(r31)
    lwz r0, 0x6c08(r31)
    clrlwi r3, r0, 1
    nop
lbl_fn_80607BA0_000004C8:
    lwz r0, 0x6c08(r31)
    clrlwi r0, r0, 1
    cmplw r3, r0
    beq lbl_fn_80607BA0_000004C8
    bl OSGetTime
    lwz r0, 0x6c00(r31)
    mr r27, r4
    mr r28, r3
    rlwinm r0, r0, 0, 31, 29
    ori r0, r0, 0x2
    stw r0, 0x6c00(r31)
    lwz r0, 0x6c00(r31)
    clrrwi r0, r0, 1
    ori r0, r0, 0x1
    stw r0, 0x6c00(r31)
    lwz r0, 0x6c08(r31)
    clrlwi r3, r0, 1
    nop
lbl_fn_80607BA0_00000510:
    lwz r0, 0x6c08(r31)
    clrlwi r0, r0, 1
    cmplw r3, r0
    beq lbl_fn_80607BA0_00000510
    bl OSGetTime
    lwz r0, 0x6c00(r31)
    subfc r8, r27, r4
    subfe r5, r28, r3
    rlwinm r0, r0, 0, 31, 29
    stw r0, 0x6c00(r31)
    xoris r7, r5, 0x8000
    lwz r0, 0x6c00(r31)
    clrrwi r0, r0, 1
    stw r0, 0x6c00(r31)
    lwz r10, lbl_8087FEC4
    lwz r12, lbl_8087FEE4
    lwz r9, lbl_8087FEC0
    lwz r11, lbl_8087FEE0
    subfc r6, r10, r12
    subfe r0, r9, r11
    xoris r5, r0, 0x8000
    subfc r0, r6, r8
    subfe r5, r5, r7
    subfe r5, r7, r7
    neg. r5, r5
    beq lbl_fn_80607BA0_00000588
    lwz r30, lbl_8087FED0
    li r0, 0x1
    lwz r29, lbl_8087FED4
    b lbl_fn_80607BA0_000005E4
lbl_fn_80607BA0_00000588:
    addc r6, r12, r10
    adde r0, r11, r9
    xoris r5, r0, 0x8000
    subfc r0, r6, r8
    subfe r5, r5, r7
    subfe r5, r7, r7
    neg. r5, r5
    bne lbl_fn_80607BA0_000005E0
    lwz r5, lbl_8087FEDC
    lwz r0, lbl_8087FED8
    subfc r6, r10, r5
    subfe r0, r9, r0
    xoris r5, r0, 0x8000
    subfc r0, r6, r8
    subfe r5, r5, r7
    subfe r5, r7, r7
    neg. r5, r5
    beq lbl_fn_80607BA0_000005E0
    lwz r30, lbl_8087FEC8
    li r0, 0x1
    lwz r29, lbl_8087FECC
    b lbl_fn_80607BA0_000005E4
lbl_fn_80607BA0_000005E0:
    li r0, 0x0
lbl_fn_80607BA0_000005E4:
    cmpwi r0, 0x0
    beq lbl_fn_80607BA0_00000490
    addc r31, r4, r29
    adde r29, r3, r30
lbl_fn_80607BA0_000005F4:
    bl OSGetTime
    xoris r0, r3, 0x8000
    xoris r5, r29, 0x8000
    subfc r3, r31, r4
    subfe r5, r5, r0
    subfe r5, r0, r0
    neg. r5, r5
    bne lbl_fn_80607BA0_000005F4
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
