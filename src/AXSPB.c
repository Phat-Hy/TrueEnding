#include "revolution/types.h"
#include "revolution/os.h"

/* External functions */
extern void _savegpr_25(void);
extern void _restgpr_25(void);
extern void DCFlushRange(void *, u32);
extern BOOL OSDisableInterrupts(void);
extern BOOL OSRestoreInterrupts(BOOL);
extern void fn_80607F60(void);
extern void fn_8068A850(void);
extern void fn_8068B100(void);

/* External large data symbols */
extern u8 lbl_807D5840[];
extern u8 lbl_807DD040[];
extern u8 lbl_807DE840[];

/* External small data symbols (SDA21) */
extern u32 lbl_80880008;
extern u32 lbl_8088000C;
extern u32 lbl_80880010;
extern u32 lbl_80880014;
extern u32 lbl_8088001C;
extern u32 lbl_80880020;

/* External float/double constants */
extern f32 lbl_808885A0;
extern f32 lbl_808885A4;
extern f32 lbl_808885A8;
extern f32 lbl_808885AC;
extern f32 lbl_808885B0;
extern f64 lbl_808885B8;

/* Function declarations */
void fn_8060AB50(void);
void fn_8060AB60(void);
void fn_8060ABA0(void);
void fn_8060ABD0(void);
void fn_8060AE60(void);
void fn_8060AED0(void);
void fn_8060AFC0(void);

asm void fn_8060AB50(void)
{
    nofralloc
    lwz r3, lbl_80880008
    blr
}

asm void fn_8060AB60(void)
{
    nofralloc
    lis r4, 0x18a8
    li r5, 0x0
    addi r0, r4, 0x24
    sth r5, 0x38(r3)
    sth r5, 0x6c(r3)
    stw r0, 0x1c(r3)
    sth r5, 0xe2(r3)
    sth r5, 0xea(r3)
    sth r5, 0xfe(r3)
    sth r5, 0x13c(r3)
    sth r5, 0x132(r3)
    sth r5, 0x134(r3)
    sth r5, 0x136(r3)
    sth r5, 0x138(r3)
    sth r5, 0x13a(r3)
    blr
}

asm void fn_8060ABA0(void)
{
    nofralloc
    lis r5, lbl_807D5840@ha
    lis r4, lbl_807DD040@ha
    lis r3, lbl_807DE840@ha
    li r0, 0x60
    addi r5, r5, lbl_807D5840@l
    addi r4, r4, lbl_807DD040@l
    addi r3, r3, lbl_807DE840@l
    stw r0, lbl_80880014
    stw r5, lbl_80880008
    stw r4, lbl_8088000C
    stw r3, lbl_80880010
    b fn_8060ABD0
}

asm void fn_8060ABD0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    lis r4, 0x8000
    lis r3, 0x8905
    lwz r4, 0xf8(r4)
    subi r5, r3, 0x2af
    lwz r0, lbl_80880014
    li r3, 0x0
    mulhwu r5, r5, r4
    stw r3, lbl_8088001C
    lwz r7, lbl_80880008
    mulli r6, r0, 0x50
    subf r0, r5, r4
    srwi r0, r0, 1
    add r0, r0, r5
    cmpwi r6, 0x0
    srwi r0, r0, 9
    stw r0, lbl_80880020
    beq lbl_fn_8060ABD0_00000124
    srwi. r0, r6, 3
    mtctr r0
    beq lbl_fn_8060ABD0_00000114
lbl_fn_8060ABD0_000000E4:
    stw r3, 0x0(r7)
    stw r3, 0x4(r7)
    stw r3, 0x8(r7)
    stw r3, 0xc(r7)
    stw r3, 0x10(r7)
    stw r3, 0x14(r7)
    stw r3, 0x18(r7)
    stw r3, 0x1c(r7)
    addi r7, r7, 0x20
    bdnz lbl_fn_8060ABD0_000000E4
    andi. r6, r6, 0x7
    beq lbl_fn_8060ABD0_00000124
lbl_fn_8060ABD0_00000114:
    mtctr r6
lbl_fn_8060ABD0_00000118:
    stw r3, 0x0(r7)
    addi r7, r7, 0x4
    bdnz lbl_fn_8060ABD0_00000118
lbl_fn_8060ABD0_00000124:
    lwz r0, lbl_80880014
    li r3, 0x0
    lwz r4, lbl_8088000C
    slwi. r5, r0, 4
    beq lbl_fn_8060ABD0_00000184
    srwi. r0, r5, 3
    mtctr r0
    beq lbl_fn_8060ABD0_00000174
lbl_fn_8060ABD0_00000144:
    stw r3, 0x0(r4)
    stw r3, 0x4(r4)
    stw r3, 0x8(r4)
    stw r3, 0xc(r4)
    stw r3, 0x10(r4)
    stw r3, 0x14(r4)
    stw r3, 0x18(r4)
    stw r3, 0x1c(r4)
    addi r4, r4, 0x20
    bdnz lbl_fn_8060ABD0_00000144
    andi. r5, r5, 0x7
    beq lbl_fn_8060ABD0_00000184
lbl_fn_8060ABD0_00000174:
    mtctr r5
lbl_fn_8060ABD0_00000178:
    stw r3, 0x0(r4)
    addi r4, r4, 0x4
    bdnz lbl_fn_8060ABD0_00000178
lbl_fn_8060ABD0_00000184:
    lwz r0, lbl_80880014
    li r3, 0x0
    lwz r4, lbl_80880010
    mulli r5, r0, 0x5a
    cmpwi r5, 0x0
    beq lbl_fn_8060ABD0_000001EC
    srwi. r0, r5, 3
    mtctr r0
    beq lbl_fn_8060ABD0_000001D8
lbl_fn_8060ABD0_000001A8:
    stw r3, 0x0(r4)
    stw r3, 0x4(r4)
    stw r3, 0x8(r4)
    stw r3, 0xc(r4)
    stw r3, 0x10(r4)
    stw r3, 0x14(r4)
    stw r3, 0x18(r4)
    stw r3, 0x1c(r4)
    addi r4, r4, 0x20
    bdnz lbl_fn_8060ABD0_000001A8
    andi. r5, r5, 0x7
    beq lbl_fn_8060ABD0_000001EC
lbl_fn_8060ABD0_000001D8:
    mtctr r5
    nop
lbl_fn_8060ABD0_000001E0:
    stw r3, 0x0(r4)
    addi r4, r4, 0x4
    bdnz lbl_fn_8060ABD0_000001E0
lbl_fn_8060ABD0_000001EC:
    lis r3, 0x18a8
    li r31, 0x0
    addi r29, r3, 0x24
    li r27, 0x0
    li r26, 0x0
    li r25, 0x0
    li r28, 0x0
    li r30, 0x1
    b lbl_fn_8060ABD0_000002DC
lbl_fn_8060ABD0_00000210:
    lwz r0, lbl_80880010
    lwz r5, lbl_80880008
    lwz r4, lbl_8088000C
    add r3, r0, r25
    add r5, r5, r27
    stw r31, 0x18(r3)
    add r6, r4, r26
    stw r6, 0x24(r3)
    sth r28, 0x38(r3)
    sth r28, 0x6c(r3)
    stw r29, 0x1c(r3)
    sth r28, 0xe2(r3)
    sth r28, 0xea(r3)
    sth r28, 0xfe(r3)
    sth r28, 0x13c(r3)
    sth r28, 0x132(r3)
    sth r28, 0x134(r3)
    sth r28, 0x136(r3)
    sth r28, 0x138(r3)
    sth r28, 0x13a(r3)
    lwz r4, lbl_80880014
    subi r0, r4, 0x1
    cmplw r31, r0
    bne lbl_fn_8060ABD0_00000284
    sth r28, 0x2(r5)
    sth r28, 0x0(r5)
    sth r28, 0x2a(r3)
    sth r28, 0x28(r3)
    b lbl_fn_8060ABD0_0000029C
lbl_fn_8060ABD0_00000284:
    addi r0, r5, 0x140
    srwi r4, r0, 16
    sth r4, 0x28(r3)
    sth r0, 0x2a(r3)
    sth r4, 0x0(r5)
    sth r0, 0x2(r5)
lbl_fn_8060ABD0_0000029C:
    srwi r0, r5, 16
    sth r0, 0x2c(r3)
    srwi r4, r6, 16
    sth r5, 0x2e(r3)
    sth r0, 0x4(r5)
    sth r5, 0x6(r5)
    sth r4, 0x6e(r3)
    sth r6, 0x70(r3)
    sth r4, 0x46(r5)
    sth r6, 0x48(r5)
    stw r30, 0xc(r3)
    bl fn_80607F60
    addi r27, r27, 0x140
    addi r26, r26, 0x40
    addi r25, r25, 0x168
    addi r31, r31, 0x1
lbl_fn_8060ABD0_000002DC:
    lwz r0, lbl_80880014
    cmplw r31, r0
    blt lbl_fn_8060ABD0_00000210
    mulli r4, r0, 0x140
    lwz r3, lbl_80880008
    bl DCFlushRange
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8060AE60(void)
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
    lhz r0, 0x38(r30)
    cmplw r0, r31
    bne lbl_fn_8060AE60_00000344
    bl OSRestoreInterrupts
    b lbl_fn_8060AE60_00000368
lbl_fn_8060AE60_00000344:
    lwz r0, 0x1c(r30)
    cmpwi r31, 0x0
    sth r31, 0x38(r30)
    ori r0, r0, 0x4
    stw r0, 0x1c(r30)
    bne lbl_fn_8060AE60_00000364
    li r0, 0x1
    stw r0, 0x20(r30)
lbl_fn_8060AE60_00000364:
    bl OSRestoreInterrupts
lbl_fn_8060AE60_00000368:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8060AED0(void)
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
    lwz r0, 0x0(r31)
    stw r0, 0x96(r30)
    lwz r0, 0x4(r31)
    stw r0, 0x9a(r30)
    lwz r0, 0x8(r31)
    stw r0, 0x9e(r30)
    lwz r0, 0xc(r31)
    stw r0, 0xa2(r30)
    lhz r0, 0x2(r31)
    cmpwi r0, 0xa
    beq lbl_fn_8060AED0_000003D8
    cmpwi r0, 0x19
    beq lbl_fn_8060AED0_0000040C
    b lbl_fn_8060AED0_0000043C
lbl_fn_8060AED0_000003D8:
    li r4, 0x0
    lis r0, 0x800
    stw r4, 0xa6(r30)
    stw r4, 0xaa(r30)
    stw r4, 0xae(r30)
    stw r4, 0xb2(r30)
    stw r4, 0xb6(r30)
    stw r4, 0xba(r30)
    stw r4, 0xbe(r30)
    stw r4, 0xc2(r30)
    stw r0, 0xc6(r30)
    stw r4, 0xca(r30)
    b lbl_fn_8060AED0_0000043C
lbl_fn_8060AED0_0000040C:
    li r4, 0x0
    lis r0, 0x100
    stw r4, 0xa6(r30)
    stw r4, 0xaa(r30)
    stw r4, 0xae(r30)
    stw r4, 0xb2(r30)
    stw r4, 0xb6(r30)
    stw r4, 0xba(r30)
    stw r4, 0xbe(r30)
    stw r4, 0xc2(r30)
    stw r0, 0xc6(r30)
    stw r4, 0xca(r30)
lbl_fn_8060AED0_0000043C:
    lwz r0, 0x1c(r30)
    rlwinm r0, r0, 0, 21, 16
    ori r0, r0, 0x8400
    stw r0, 0x1c(r30)
    bl OSRestoreInterrupts
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8060AFC0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lfd f3, lbl_808885B8
    stw r0, 0x34(r1)
    lis r0, 0x4330
    lfs f1, lbl_808885A4
    stw r3, 0xc(r1)
    lfs f0, lbl_808885A8
    stw r0, 0x8(r1)
    lfd f2, 0x8(r1)
    stfd f31, 0x20(r1)
    fsubs f2, f2, f3
    psq_st f31, 0x28(r1), 0, 0
    fmuls f1, f1, f2
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    fdivs f1, f1, f0
    bl fn_8068A850
    frsp f2, f1
    lfs f1, lbl_808885A0
    lfs f0, lbl_808885AC
    fsubs f31, f1, f2
    fmuls f1, f31, f31
    fsubs f1, f1, f0
    bl fn_8068B100
    frsp f1, f1
    lfs f0, lbl_808885B0
    fsubs f1, f1, f31
    fneg f1, f1
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x10(r1)
    lwz r0, 0x14(r1)
    sth r0, 0x0(r31)
    clrlwi r0, r0, 16
    subfic r0, r0, 0x7fff
    sth r0, 0x0(r30)
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}
