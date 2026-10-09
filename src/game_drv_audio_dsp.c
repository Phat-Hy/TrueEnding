#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void DCFlushRange(void);
extern void DCInvalidateRange(void);
extern void OSDisableInterrupts(void);
extern void OSRestoreInterrupts(void);
extern void _restgpr_23(void);
extern void _restgpr_27(void);
extern void _savegpr_23(void);
extern void _savegpr_27(void);
extern void fn_800763FC(void);
extern void fn_805B697C(void);
extern void fn_805E4090(void);
extern void fn_805E7480(void);
extern void fn_805E7520(void);
extern void fn_805F8980(void);
extern void fn_805F95A0(void);
extern void fn_805FA270(void);
extern void fn_805FA390(void);
extern void fn_805FA4E0(void);
extern void fn_805FA5D0(void);
extern void fn_805FEF70(void);
extern void fn_806077A0(void);
extern void fn_806077F0(void);
extern void fn_80607870(void);
extern void fn_80612E80(void);
extern void fn_806134E0(void);
extern void fn_80613520(void);
extern void fn_80613960(void);
extern void fn_80613BB0(void);
extern void fn_80614790(void);
extern void fn_80615400(void);
extern void fn_80615D20(void);
extern void fn_80615FF0(void);
extern void fn_80616250(void);
extern void fn_806167B0(void);
extern void fn_80617340(void);
extern void fn_806173E0(void);
extern void fn_80617420(void);
extern void fn_80617460(void);
extern void fn_806174C0(void);
extern void fn_80617580(void);
extern void fn_806175F0(void);
extern void fn_80617650(void);
extern void fn_806176A0(void);
extern void fn_806176F0(void);
extern void fn_80617730(void);
extern void fn_80617880(void);
extern void fn_806179E0(void);
extern void fn_80617D50(void);
extern void fn_80617DA0(void);
extern void fn_80617DD0(void);
extern void fn_80617E00(void);
extern void fn_80617E70(void);
extern void fn_80618290(void);
extern void fn_80618350(void);
extern void fn_80618400(void);
extern void fn_80618570(void);
extern void fn_806185C0(void);
extern void fn_80682428(void);

/* External data declarations */
extern u8 lbl_80763DC8[];
extern u8 lbl_80763DD0[];
extern u8 lbl_80763DE0[];
extern u8 lbl_807977C8[];
extern u8 lbl_807C9AA0[];
extern u8 lbl_807C9C40[];
extern u8 lbl_807C9C80[];

/* Small data declarations */
extern u32 lbl_8087EEE0;
extern u32 lbl_8087FA08;
extern u32 lbl_8087FA0C;
extern u32 lbl_8087FA10;
extern u32 lbl_8087FA14;
extern u32 lbl_8087FA18;
extern u32 lbl_8087FA1C;
extern u32 lbl_808883C0;
extern u32 lbl_808883C4;
extern u32 lbl_808883C8;
extern u32 lbl_808883CC;
extern u32 lbl_808883D0;
extern u32 lbl_808883D4;
extern u32 lbl_808883D8;

/* Function declarations */
void fn_805B4DF4(void);
void fn_805B4F0C(void);
void fn_805B53D0(void);
void fn_805B55AC(void);
void fn_805B56C4(void);
void fn_805B5714(void);
void fn_805B59C0(void);
void fn_805B5A50(void);
void fn_805B5AD8(void);
void fn_805B5CF4(void);
void fn_805B5E80(void);
void fn_805B6008(void);
void fn_805B601C(void);
void fn_805B6030(void);
void fn_805B6124(void);
void fn_805B6478(void);
void fn_805B6508(void);

asm void fn_805B4DF4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r3, 0x1
    li r4, 0x7
    stw r0, 0x14(r1)
    li r5, 0x0
    bl fn_80617E00
    li r3, 0x0
    li r4, 0x1
    li r5, 0x0
    li r6, 0xf
    bl fn_80617D50
    li r3, 0x1
    bl fn_80613BB0
    li r3, 0x0
    bl fn_80615D20
    li r3, 0x1
    bl fn_806179E0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0xff
    bl fn_80617880
    li r3, 0x0
    li r4, 0x3
    bl fn_80617340
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_806176F0
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    bl fn_806176F0
    li r3, 0x2
    li r4, 0x0
    li r5, 0x0
    bl fn_806176F0
    li r3, 0x3
    li r4, 0x0
    li r5, 0x0
    bl fn_806176F0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl fn_80617730
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x3
    bl fn_80617730
    li r3, 0x2
    li r4, 0x1
    li r5, 0x1
    li r6, 0x1
    li r7, 0x3
    bl fn_80617730
    li r3, 0x3
    li r4, 0x2
    li r5, 0x2
    li r6, 0x2
    li r7, 0x3
    bl fn_80617730
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805B4F0C(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0xb4(r1)
    lis r0, 0x4330
    stw r31, 0xac(r1)
    stw r30, 0xa8(r1)
    stw r29, 0xa4(r1)
    stw r0, 0x90(r1)
    lhz r30, 0x4(r3)
    lhz r29, 0x6(r3)
    li r3, 0x0
    stw r0, 0x98(r1)
    bl fn_80617E70
    xoris r0, r29, 0x8000
    stw r0, 0x94(r1)
    xoris r0, r30, 0x8000
    lis r31, lbl_80763DD0@ha
    lfs f1, lbl_808883CC
    addi r3, r1, 0x50
    stw r0, 0x9c(r1)
    lfd f4, lbl_80763DD0@l(r31)
    fmr f3, f1
    lfd f2, 0x90(r1)
    fmr f5, f1
    lfd f0, 0x98(r1)
    fsubs f2, f2, f4
    lfs f6, lbl_808883D0
    fsubs f4, f0, f4
    bl fn_805F95A0
    addi r3, r1, 0x50
    li r4, 0x1
    bl fn_80618290
    xoris r0, r30, 0x8000
    stw r0, 0x94(r1)
    xoris r0, r29, 0x8000
    lfs f1, lbl_808883CC
    stw r0, 0x9c(r1)
    lfd f4, lbl_80763DD0@l(r31)
    fmr f2, f1
    lfd f3, 0x90(r1)
    fmr f5, f1
    lfd f0, 0x98(r1)
    fsubs f3, f3, f4
    lfs f6, lbl_808883D4
    fsubs f4, f0, f4
    bl fn_80618570
    mr r5, r30
    mr r6, r29
    li r3, 0x0
    li r4, 0x0
    bl fn_806185C0
    addi r3, r1, 0x20
    bl fn_805F8980
    addi r3, r1, 0x20
    li r4, 0x0
    bl fn_80618350
    li r3, 0x0
    bl fn_80618400
    li r3, 0x1
    li r4, 0x7
    li r5, 0x0
    bl fn_80617E00
    li r3, 0x0
    li r4, 0x1
    li r5, 0x0
    li r6, 0x0
    bl fn_80617D50
    li r3, 0x1
    bl fn_80617DA0
    li r3, 0x0
    bl fn_80617DD0
    li r3, 0x0
    bl fn_80615400
    li r3, 0x0
    bl fn_80615D20
    li r3, 0x2
    bl fn_80613BB0
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    li r3, 0x1
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    bl fn_806167B0
    bl fn_806134E0
    li r3, 0x9
    li r4, 0x1
    bl fn_80612E80
    li r3, 0xd
    li r4, 0x1
    bl fn_80612E80
    li r3, 0x7
    li r4, 0x9
    li r5, 0x1
    li r6, 0x3
    li r7, 0x0
    bl fn_80613520
    li r3, 0x7
    li r4, 0xd
    li r5, 0x1
    li r6, 0x2
    li r7, 0x0
    bl fn_80613520
    li r3, 0x4
    bl fn_806179E0
    li r3, 0x0
    li r4, 0x1
    li r5, 0x1
    li r6, 0xff
    bl fn_80617880
    li r3, 0x0
    li r4, 0xf
    li r5, 0x8
    li r6, 0xe
    li r7, 0x2
    bl fn_806173E0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    bl fn_80617460
    li r3, 0x0
    li r4, 0x7
    li r5, 0x4
    li r6, 0x6
    li r7, 0x1
    bl fn_80617420
    li r3, 0x0
    li r4, 0x1
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    bl fn_806174C0
    li r3, 0x0
    li r4, 0xc
    bl fn_80617650
    li r3, 0x0
    li r4, 0x1c
    bl fn_806176A0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_806176F0
    li r3, 0x1
    li r4, 0x1
    li r5, 0x2
    li r6, 0xff
    bl fn_80617880
    li r3, 0x1
    li r4, 0xf
    li r5, 0x8
    li r6, 0xe
    li r7, 0x0
    bl fn_806173E0
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0x1
    li r7, 0x0
    li r8, 0x0
    bl fn_80617460
    li r3, 0x1
    li r4, 0x7
    li r5, 0x4
    li r6, 0x6
    li r7, 0x0
    bl fn_80617420
    li r3, 0x1
    li r4, 0x1
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    bl fn_806174C0
    li r3, 0x1
    li r4, 0xd
    bl fn_80617650
    li r3, 0x1
    li r4, 0x1d
    bl fn_806176A0
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    bl fn_806176F0
    li r3, 0x2
    li r4, 0x0
    li r5, 0x0
    li r6, 0xff
    bl fn_80617880
    li r3, 0x2
    li r4, 0xf
    li r5, 0x8
    li r6, 0xc
    li r7, 0x0
    bl fn_806173E0
    li r3, 0x2
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_80617460
    li r3, 0x2
    li r4, 0x4
    li r5, 0x7
    li r6, 0x7
    li r7, 0x0
    bl fn_80617420
    li r3, 0x2
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_806174C0
    li r3, 0x2
    li r4, 0x0
    li r5, 0x0
    bl fn_806176F0
    li r3, 0x3
    li r4, 0xff
    li r5, 0xff
    li r6, 0xff
    bl fn_80617880
    li r3, 0x3
    li r4, 0x1
    li r5, 0x0
    li r6, 0xe
    li r7, 0xf
    bl fn_806173E0
    li r3, 0x3
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_80617460
    li r3, 0x3
    li r4, 0x7
    li r5, 0x7
    li r6, 0x7
    li r7, 0x7
    bl fn_80617420
    li r3, 0x3
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_806174C0
    li r3, 0x3
    li r4, 0x0
    li r5, 0x0
    bl fn_806176F0
    li r3, 0x3
    li r4, 0xe
    bl fn_80617650
    lis r6, lbl_80763DC8@ha
    lwzu r5, lbl_80763DC8@l(r6)
    stw r5, 0x18(r1)
    addi r4, r1, 0x18
    lwz r0, 0x4(r6)
    li r3, 0x1
    stw r0, 0x1c(r1)
    bl fn_80617580
    lwz r0, lbl_808883C0
    addi r4, r1, 0x10
    stw r0, 0x10(r1)
    li r3, 0x0
    bl fn_806175F0
    lwz r0, lbl_808883C4
    addi r4, r1, 0xc
    stw r0, 0xc(r1)
    li r3, 0x1
    bl fn_806175F0
    lwz r0, lbl_808883C8
    addi r4, r1, 0x8
    stw r0, 0x8(r1)
    li r3, 0x2
    bl fn_806175F0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl fn_80617730
    lwz r0, 0xb4(r1)
    lwz r31, 0xac(r1)
    lwz r30, 0xa8(r1)
    lwz r29, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_805B53D0(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    addi r11, r1, 0x90
    bl _savegpr_23
    lha r29, 0x9a(r1)
    mr r30, r4
    mr r23, r5
    mr r24, r6
    mr r25, r7
    mr r28, r10
    mr r4, r3
    mr r26, r8
    clrlwi r5, r8, 16
    mr r27, r9
    clrlwi r6, r9, 16
    addi r3, r1, 0x48
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_80615FF0
    lfs f1, lbl_808883CC
    addi r3, r1, 0x48
    li r4, 0x1
    li r5, 0x1
    fmr f2, f1
    li r6, 0x0
    fmr f3, f1
    li r7, 0x0
    li r8, 0x0
    bl fn_80616250
    lwz r3, lbl_8087EEE0
    addi r4, r1, 0x48
    li r5, 0x0
    bl fn_800763FC
    srawi r31, r27, 1
    mr r4, r30
    srawi r30, r26, 1
    addi r3, r1, 0x28
    extrwi r5, r26, 16, 15
    extrwi r6, r27, 16, 15
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_80615FF0
    lfs f1, lbl_808883CC
    addi r3, r1, 0x28
    li r4, 0x1
    li r5, 0x1
    fmr f2, f1
    li r6, 0x0
    fmr f3, f1
    li r7, 0x0
    li r8, 0x0
    bl fn_80616250
    lwz r3, lbl_8087EEE0
    addi r4, r1, 0x28
    li r5, 0x1
    bl fn_800763FC
    mr r4, r23
    addi r3, r1, 0x8
    clrlwi r5, r30, 16
    clrlwi r6, r31, 16
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_80615FF0
    lfs f1, lbl_808883CC
    addi r3, r1, 0x8
    li r4, 0x1
    li r5, 0x1
    fmr f2, f1
    li r6, 0x0
    fmr f3, f1
    li r7, 0x0
    li r8, 0x0
    bl fn_80616250
    lwz r3, lbl_8087EEE0
    addi r4, r1, 0x8
    li r5, 0x2
    bl fn_800763FC
    li r3, 0x80
    li r4, 0x7
    li r5, 0x4
    bl fn_80614790
    lis r4, 0xcc01
    li r3, 0x0
    sth r24, -0x8000(r4)
    add r5, r24, r28
    li r0, 0x1
    add r6, r25, r29
    sth r25, -0x8000(r4)
    sth r3, -0x8000(r4)
    sth r3, -0x8000(r4)
    sth r3, -0x8000(r4)
    sth r5, -0x8000(r4)
    sth r25, -0x8000(r4)
    sth r3, -0x8000(r4)
    sth r0, -0x8000(r4)
    sth r3, -0x8000(r4)
    sth r5, -0x8000(r4)
    sth r6, -0x8000(r4)
    sth r3, -0x8000(r4)
    sth r0, -0x8000(r4)
    sth r0, -0x8000(r4)
    sth r24, -0x8000(r4)
    sth r6, -0x8000(r4)
    sth r3, -0x8000(r4)
    sth r3, -0x8000(r4)
    sth r0, -0x8000(r4)
    addi r11, r1, 0x90
    bl _restgpr_23
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_805B55AC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x18c
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_807C9AA0@ha
    stw r30, 0x8(r1)
    mr r30, r3
    addi r3, r31, lbl_807C9AA0@l
    bl memset
    addi r3, r31, lbl_807C9AA0@l
    li r0, 0x1
    stw r0, 0x188(r3)
    bl fn_805E7480
    cmpwi r3, 0x0
    bne lbl_fn_805B55AC_00000804
    li r3, 0x0
    b lbl_fn_805B55AC_000008B8
lbl_fn_805B55AC_00000804:
    bl OSDisableInterrupts
    li r0, 0x0
    stw r30, lbl_8087FA1C
    lis r4, fn_805B697C@ha
    mr r31, r3
    stw r0, lbl_8087FA0C
    addi r3, r4, fn_805B697C@l
    stw r0, lbl_8087FA14
    stw r0, lbl_8087FA18
    bl fn_806077A0
    cmpwi r3, 0x0
    stw r3, lbl_8087FA10
    bne lbl_fn_805B55AC_0000085C
    lwz r0, lbl_8087FA1C
    cmpwi r0, 0x0
    beq lbl_fn_805B55AC_0000085C
    li r3, 0x0
    bl fn_806077A0
    mr r3, r31
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_fn_805B55AC_000008B8
lbl_fn_805B55AC_0000085C:
    mr r3, r31
    bl OSRestoreInterrupts
    lwz r0, lbl_8087FA1C
    cmpwi r0, 0x0
    bne lbl_fn_805B55AC_000008AC
    lis r31, lbl_807C9C80@ha
    li r4, 0x0
    addi r3, r31, lbl_807C9C80@l
    li r5, 0x300
    bl memset
    addi r3, r31, lbl_807C9C80@l
    li r4, 0x300
    bl DCFlushRange
    lwz r3, lbl_8087FA0C
    addi r0, r31, lbl_807C9C80@l
    li r4, 0x180
    mulli r3, r3, 0x180
    add r3, r0, r3
    bl fn_806077F0
    bl fn_80607870
lbl_fn_805B55AC_000008AC:
    li r0, 0x1
    stw r0, lbl_8087FA08
    li r3, 0x1
lbl_fn_805B55AC_000008B8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805B56C4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    bl OSDisableInterrupts
    lwz r0, lbl_8087FA10
    mr r31, r3
    cmpwi r0, 0x0
    beq lbl_fn_805B56C4_000008FC
    mr r3, r0
    bl fn_806077A0
lbl_fn_805B56C4_000008FC:
    mr r3, r31
    bl OSRestoreInterrupts
    li r0, 0x0
    stw r0, lbl_8087FA08
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805B5714(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lwz r0, lbl_8087FA08
    mr r27, r3
    cmpwi r0, 0x0
    bne lbl_fn_805B5714_0000094C
    li r3, 0x0
    b lbl_fn_805B5714_00000BB4
lbl_fn_805B5714_0000094C:
    lis r3, lbl_807C9AA0@ha
    addi r29, r3, lbl_807C9AA0@l
    lwz r0, 0xa0(r29)
    cmpwi r0, 0x0
    beq lbl_fn_805B5714_00000968
    li r3, 0x0
    b lbl_fn_805B5714_00000BB4
lbl_fn_805B5714_00000968:
    addi r3, r29, 0x80
    li r4, 0x0
    li r5, 0xc
    bl memset
    addi r3, r29, 0x8c
    li r4, 0x0
    li r5, 0x10
    bl memset
    mr r3, r27
    mr r4, r29
    bl fn_805FA270
    cmpwi r3, 0x0
    bne lbl_fn_805B5714_000009A4
    li r3, 0x0
    b lbl_fn_805B5714_00000BB4
lbl_fn_805B5714_000009A4:
    lis r30, lbl_807C9C40@ha
    mr r3, r29
    addi r4, r30, lbl_807C9C40@l
    li r5, 0x40
    li r6, 0x0
    li r7, 0x2
    bl fn_805FA5D0
    cmpwi r3, 0x0
    bge lbl_fn_805B5714_000009D8
    mr r3, r29
    bl fn_805FA390
    li r3, 0x0
    b lbl_fn_805B5714_00000BB4
lbl_fn_805B5714_000009D8:
    addi r3, r29, 0x3c
    addi r4, r30, lbl_807C9C40@l
    li r5, 0x30
    bl memcpy
    lis r4, lbl_80763DE0@ha
    addi r3, r29, 0x3c
    addi r4, r4, lbl_80763DE0@l
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_805B5714_00000A10
    mr r3, r29
    bl fn_805FA390
    li r3, 0x0
    b lbl_fn_805B5714_00000BB4
lbl_fn_805B5714_00000A10:
    lwz r3, 0x40(r29)
    subis r0, r3, 0x1
    cmplwi r0, 0x1000
    beq lbl_fn_805B5714_00000A30
    mr r3, r29
    bl fn_805FA390
    li r3, 0x0
    b lbl_fn_805B5714_00000BB4
lbl_fn_805B5714_00000A30:
    lwz r28, 0x5c(r29)
    mr r3, r29
    addi r4, r30, lbl_807C9C40@l
    li r5, 0x20
    mr r6, r28
    li r7, 0x2
    bl fn_805FA5D0
    cmpwi r3, 0x0
    bge lbl_fn_805B5714_00000A64
    mr r3, r29
    bl fn_805FA390
    li r3, 0x0
    b lbl_fn_805B5714_00000BB4
lbl_fn_805B5714_00000A64:
    addi r3, r29, 0x6c
    addi r4, r30, lbl_807C9C40@l
    li r5, 0x14
    bl memcpy
    li r0, 0x0
    stb r0, 0xa7(r29)
    li r27, 0x0
    li r31, 0x1
    addi r28, r28, 0x14
    b lbl_fn_805B5714_00000B4C
lbl_fn_805B5714_00000A8C:
    add r3, r29, r27
    lbz r0, 0x70(r3)
    cmpwi r0, 0x1
    beq lbl_fn_805B5714_00000AF4
    bge lbl_fn_805B5714_00000B40
    cmpwi r0, 0x0
    bge lbl_fn_805B5714_00000AAC
    b lbl_fn_805B5714_00000B40
lbl_fn_805B5714_00000AAC:
    mr r3, r29
    mr r6, r28
    addi r4, r30, lbl_807C9C40@l
    li r5, 0x20
    li r7, 0x2
    bl fn_805FA5D0
    cmpwi r3, 0x0
    bge lbl_fn_805B5714_00000ADC
    mr r3, r29
    bl fn_805FA390
    li r3, 0x0
    b lbl_fn_805B5714_00000BB4
lbl_fn_805B5714_00000ADC:
    addi r3, r29, 0x80
    addi r4, r30, lbl_807C9C40@l
    li r5, 0xc
    bl memcpy
    addi r28, r28, 0xc
    b lbl_fn_805B5714_00000B48
lbl_fn_805B5714_00000AF4:
    mr r3, r29
    mr r6, r28
    addi r4, r30, lbl_807C9C40@l
    li r5, 0x20
    li r7, 0x2
    bl fn_805FA5D0
    cmpwi r3, 0x0
    bge lbl_fn_805B5714_00000B24
    mr r3, r29
    bl fn_805FA390
    li r3, 0x0
    b lbl_fn_805B5714_00000BB4
lbl_fn_805B5714_00000B24:
    addi r3, r29, 0x8c
    addi r4, r30, lbl_807C9C40@l
    li r5, 0x10
    bl memcpy
    stb r31, 0xa7(r29)
    addi r28, r28, 0x10
    b lbl_fn_805B5714_00000B48
lbl_fn_805B5714_00000B40:
    li r3, 0x0
    b lbl_fn_805B5714_00000BB4
lbl_fn_805B5714_00000B48:
    addi r27, r27, 0x1
lbl_fn_805B5714_00000B4C:
    lwz r0, 0x6c(r29)
    cmplw r27, r0
    blt lbl_fn_805B5714_00000A8C
    lfs f0, lbl_808883D8
    li r5, 0x0
    lwz r3, 0x64(r29)
    li r4, -0x1
    lwz r6, 0x54(r29)
    li r0, 0x1
    stw r3, 0xa8(r29)
    li r3, 0x1
    stw r6, 0xbc(r29)
    stw r5, 0xb8(r29)
    stw r5, 0xc0(r29)
    stw r5, 0xac(r29)
    stw r4, 0x158(r29)
    stw r5, 0xb4(r29)
    stw r5, 0x180(r29)
    stw r5, 0x184(r29)
    stb r5, 0xa4(r29)
    stb r5, 0xa5(r29)
    stb r5, 0xa6(r29)
    stw r0, 0xa0(r29)
    stfs f0, 0xc4(r29)
    stfs f0, 0xc8(r29)
    stw r5, 0xd0(r29)
lbl_fn_805B5714_00000BB4:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805B59C0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r3, lbl_807C9AA0@ha
    stw r0, 0x14(r1)
    addi r3, r3, lbl_807C9AA0@l
    lwz r0, 0xa0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805B59C0_00000C48
    lbz r0, 0xa4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_805B59C0_00000C48
    lbz r0, 0xa7(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805B59C0_00000C18
    lbz r0, 0xa5(r3)
    cmplwi r0, 0x1
    bne lbl_fn_805B59C0_00000C20
    li r3, 0x0
    b lbl_fn_805B59C0_00000C4C
lbl_fn_805B59C0_00000C18:
    li r0, 0x0
    stb r0, 0xa5(r3)
lbl_fn_805B59C0_00000C20:
    lis r3, lbl_807C9AA0@ha
    addi r3, r3, lbl_807C9AA0@l
    lwz r0, 0xb0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_805B59C0_00000C48
    li r0, 0x0
    stw r0, 0xa0(r3)
    bl fn_805FA390
    li r3, 0x1
    b lbl_fn_805B59C0_00000C4C
lbl_fn_805B59C0_00000C48:
    li r3, 0x0
lbl_fn_805B59C0_00000C4C:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805B5A50(void)
{
    nofralloc
    lis r6, lbl_807C9AA0@ha
    addi r6, r6, lbl_807C9AA0@l
    lwz r0, 0xa0(r6)
    cmpwi r0, 0x0
    beq lbl_fn_805B5A50_00000CDC
    lwz r3, 0x80(r6)
    lwz r0, 0x84(r6)
    lwz r4, 0x44(r6)
    mullw r7, r3, r0
    lbz r0, 0xa7(r6)
    addi r3, r4, 0x1f
    cmpwi r0, 0x0
    clrrwi r5, r3, 5
    srwi r3, r7, 2
    addi r0, r3, 0x1f
    addi r4, r7, 0x1f
    clrrwi r3, r4, 5
    mulli r4, r5, 0xa
    clrrwi r0, r0, 5
    add r4, r4, r3
    add r4, r4, r0
    add r4, r4, r0
    beq lbl_fn_805B5A50_00000CD4
    lwz r0, 0x48(r6)
    slwi r3, r0, 2
    addi r0, r3, 0x1f
    clrrwi r3, r0, 5
    extlwi r0, r0, 25, 2
    subf r0, r3, r0
    add r4, r4, r0
lbl_fn_805B5A50_00000CD4:
    addi r3, r4, 0x1000
    blr
lbl_fn_805B5A50_00000CDC:
    li r3, 0x0
    blr
}

asm void fn_805B5AD8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_807C9AA0@ha
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    addi r31, r4, lbl_807C9AA0@l
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r0, 0xa0(r31)
    cmpwi r0, 0x0
    beq lbl_fn_805B5AD8_00000EDC
    lbz r0, 0xa4(r31)
    cmpwi r0, 0x0
    bne lbl_fn_805B5AD8_00000EDC
    lbz r0, 0xa5(r31)
    cmplwi r0, 0x1
    bne lbl_fn_805B5AD8_00000D38
    li r3, 0x0
    b lbl_fn_805B5AD8_00000EE0
lbl_fn_805B5AD8_00000D38:
    lwz r4, 0x80(r31)
    lwz r0, 0x84(r31)
    stw r3, 0x14c(r31)
    mullw r4, r4, r0
    addi r0, r4, 0x1f
    srwi r4, r4, 2
    clrrwi r30, r0, 5
    addi r0, r4, 0x1f
    mr r4, r30
    clrrwi r29, r0, 5
    bl DCInvalidateRange
    add r30, r28, r30
    stw r30, 0x150(r31)
    mr r3, r30
    mr r4, r29
    bl DCInvalidateRange
    add r30, r30, r29
    stw r30, 0x154(r31)
    mr r3, r30
    mr r4, r29
    bl DCInvalidateRange
    add r30, r30, r29
    stw r30, 0xd4(r31)
    li r4, 0x0
    lwz r3, 0x44(r31)
    addi r0, r3, 0x1f
    stw r4, 0xdc(r31)
    clrrwi r0, r0, 5
    add r30, r30, r0
    stw r30, 0xe0(r31)
    lwz r3, 0x44(r31)
    addi r0, r3, 0x1f
    stw r4, 0xe8(r31)
    clrrwi r0, r0, 5
    add r30, r30, r0
    stw r30, 0xec(r31)
    lwz r3, 0x44(r31)
    addi r0, r3, 0x1f
    stw r4, 0xf4(r31)
    clrrwi r0, r0, 5
    add r30, r30, r0
    stw r30, 0xf8(r31)
    lwz r3, 0x44(r31)
    addi r0, r3, 0x1f
    stw r4, 0x100(r31)
    clrrwi r0, r0, 5
    add r30, r30, r0
    stw r30, 0x104(r31)
    lwz r3, 0x44(r31)
    addi r0, r3, 0x1f
    stw r4, 0x10c(r31)
    clrrwi r0, r0, 5
    add r30, r30, r0
    stw r30, 0x110(r31)
    lwz r3, 0x44(r31)
    addi r0, r3, 0x1f
    stw r4, 0x118(r31)
    clrrwi r0, r0, 5
    add r30, r30, r0
    stw r30, 0x11c(r31)
    lwz r3, 0x44(r31)
    addi r0, r3, 0x1f
    stw r4, 0x124(r31)
    clrrwi r0, r0, 5
    add r30, r30, r0
    stw r30, 0x128(r31)
    lwz r3, 0x44(r31)
    addi r0, r3, 0x1f
    stw r4, 0x130(r31)
    clrrwi r0, r0, 5
    add r30, r30, r0
    stw r30, 0x134(r31)
    lwz r3, 0x44(r31)
    addi r0, r3, 0x1f
    stw r4, 0x13c(r31)
    clrrwi r0, r0, 5
    add r30, r30, r0
    stw r30, 0x140(r31)
    lwz r3, 0x44(r31)
    addi r0, r3, 0x1f
    stw r4, 0x148(r31)
    clrrwi r0, r0, 5
    add r30, r30, r0
    lbz r0, 0xa7(r31)
    cmpwi r0, 0x0
    beq lbl_fn_805B5AD8_00000ED0
    lwz r0, 0x48(r31)
    stw r30, 0x15c(r31)
    slwi r3, r0, 2
    addi r0, r3, 0x1f
    stw r30, 0x160(r31)
    clrrwi r0, r0, 5
    add r30, r30, r0
    stw r4, 0x164(r31)
    stw r30, 0x168(r31)
    stw r30, 0x16c(r31)
    add r30, r30, r0
    stw r4, 0x170(r31)
    stw r30, 0x174(r31)
    stw r30, 0x178(r31)
    add r30, r30, r0
    stw r4, 0x17c(r31)
lbl_fn_805B5AD8_00000ED0:
    lis r3, lbl_807C9AA0@ha
    addi r3, r3, lbl_807C9AA0@l
    stw r30, 0x9c(r3)
lbl_fn_805B5AD8_00000EDC:
    li r3, 0x1
lbl_fn_805B5AD8_00000EE0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805B5CF4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, -0x1
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    bne lbl_fn_805B5CF4_00000F30
    lis r3, lbl_807C9AA0@ha
    li r0, 0x1
    addi r3, r3, lbl_807C9AA0@l
    stw r0, 0xac(r3)
    b lbl_fn_805B5CF4_00001074
lbl_fn_805B5CF4_00000F30:
    cmpwi r3, -0x3
    beq lbl_fn_805B5CF4_00001074
    lis r3, lbl_807C9AA0@ha
    li r4, 0xa
    addi r3, r3, lbl_807C9AA0@l
    li r0, 0x0
    lwz r7, 0xb8(r3)
    xoris r5, r4, 0x8000
    stw r0, 0xb0(r3)
    li r6, 0x1
    mulli r4, r7, 0xc
    lwz r7, 0xc0(r3)
    add r4, r3, r4
    stw r7, 0xd8(r4)
    lwz r4, 0xb8(r3)
    lwz r7, 0xc0(r3)
    mulli r4, r4, 0xc
    addi r7, r7, 0x1
    stw r7, 0xc0(r3)
    add r4, r3, r4
    stw r6, 0xdc(r4)
    lwz r4, 0xb8(r3)
    lwz r8, 0xa8(r3)
    mulli r6, r4, 0xc
    lwz r7, 0xbc(r3)
    addi r9, r4, 0x1
    add r4, r8, r7
    stw r4, 0xa8(r3)
    subi r4, r9, 0xa
    add r6, r3, r6
    addc r4, r4, r5
    lwz r6, 0xd4(r6)
    subfe r4, r4, r4
    andc r5, r9, r4
    lwz r6, 0x0(r6)
    mulli r4, r5, 0xc
    stw r6, 0xbc(r3)
    stw r5, 0xb8(r3)
    add r4, r3, r4
    lwz r4, 0xdc(r4)
    cmpwi r4, 0x0
    bne lbl_fn_805B5CF4_00001074
    lwz r4, 0xac(r3)
    cmpwi r4, 0x0
    bne lbl_fn_805B5CF4_00001074
    lbz r4, 0xa4(r3)
    cmplwi r4, 0x1
    bne lbl_fn_805B5CF4_00001074
    lwz r4, 0x50(r3)
    lwz r5, 0xc0(r3)
    subi r4, r4, 0x1
    cmplw r5, r4
    ble lbl_fn_805B5CF4_00001024
    lbz r4, 0xa6(r3)
    cmplwi r4, 0x1
    bne lbl_fn_805B5CF4_00001074
    lwz r5, 0x64(r3)
    lwz r4, 0x54(r3)
    stw r0, 0xc0(r3)
    stw r5, 0xa8(r3)
    stw r4, 0xbc(r3)
lbl_fn_805B5CF4_00001024:
    lis r31, lbl_807C9AA0@ha
    lis r7, fn_805B5CF4@ha
    addi r31, r31, lbl_807C9AA0@l
    li r30, 0x1
    lwz r0, 0xb8(r31)
    mr r3, r31
    stw r30, 0xb0(r31)
    addi r7, r7, fn_805B5CF4@l
    mulli r0, r0, 0xc
    lwz r5, 0xbc(r31)
    lwz r6, 0xa8(r31)
    li r8, 0x2
    add r4, r31, r0
    lwz r4, 0xd4(r4)
    bl fn_805FA4E0
    cmpwi r3, 0x1
    beq lbl_fn_805B5CF4_00001074
    li r0, 0x0
    stw r0, 0xb0(r31)
    stw r30, 0xac(r31)
lbl_fn_805B5CF4_00001074:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805B5E80(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r4, lbl_807C9AA0@ha
    stw r0, 0x34(r1)
    addi r4, r4, lbl_807C9AA0@l
    stmw r24, 0x10(r1)
    mr r25, r3
    lwz r0, 0xa0(r4)
    cmpwi r0, 0x0
    beq lbl_fn_805B5E80_000011FC
    lbz r0, 0xa4(r4)
    cmpwi r0, 0x0
    bne lbl_fn_805B5E80_000011FC
    cmpwi r3, 0x0
    li r26, 0xa
    bne lbl_fn_805B5E80_000010DC
    lwz r0, 0x50(r4)
    cmplwi r0, 0xa
    bge lbl_fn_805B5E80_000010DC
    mr r26, r0
lbl_fn_805B5E80_000010DC:
    lis r28, lbl_807C9AA0@ha
    li r0, 0xa
    addi r29, r28, lbl_807C9AA0@l
    li r27, 0x0
    xoris r31, r0, 0x8000
    li r24, 0x0
    li r30, 0x1
    b lbl_fn_805B5E80_000011D8
lbl_fn_805B5E80_000010FC:
    addi r3, r28, lbl_807C9AA0@l
    li r7, 0x2
    lwz r0, 0xb8(r3)
    lwz r5, 0xbc(r3)
    mulli r0, r0, 0xc
    lwz r6, 0xa8(r3)
    add r4, r3, r0
    lwz r4, 0xd4(r4)
    bl fn_805FA5D0
    cmpwi r3, 0x0
    bge lbl_fn_805B5E80_0000113C
    addi r3, r28, lbl_807C9AA0@l
    li r0, 0x1
    stw r0, 0xac(r3)
    li r3, 0x0
    b lbl_fn_805B5E80_00001200
lbl_fn_805B5E80_0000113C:
    lwz r0, 0xb8(r29)
    lwz r4, 0xa8(r29)
    lwz r3, 0xbc(r29)
    mulli r0, r0, 0xc
    add r3, r4, r3
    stw r3, 0xa8(r29)
    add r4, r29, r0
    lwz r3, 0xd4(r4)
    lwz r0, 0x0(r3)
    stw r0, 0xbc(r29)
    stw r30, 0xdc(r4)
    lwz r0, 0xb8(r29)
    lwz r4, 0xc0(r29)
    mulli r0, r0, 0xc
    add r3, r29, r0
    stw r4, 0xd8(r3)
    lwz r3, 0xb8(r29)
    lwz r4, 0xc0(r29)
    addi r6, r3, 0x1
    lwz r3, 0x50(r29)
    subi r0, r6, 0xa
    addi r4, r4, 0x1
    addc r5, r0, r31
    stw r4, 0xc0(r29)
    subi r0, r3, 0x1
    subfe r3, r5, r5
    andc r3, r6, r3
    cmplw r4, r0
    stw r3, 0xb8(r29)
    ble lbl_fn_805B5E80_000011D4
    lbz r0, 0xa6(r29)
    cmplwi r0, 0x1
    bne lbl_fn_805B5E80_000011D4
    lwz r3, 0x64(r29)
    lwz r0, 0x54(r29)
    stw r24, 0xc0(r29)
    stw r3, 0xa8(r29)
    stw r0, 0xbc(r29)
lbl_fn_805B5E80_000011D4:
    addi r27, r27, 0x1
lbl_fn_805B5E80_000011D8:
    cmplw r27, r26
    blt lbl_fn_805B5E80_000010FC
    lis r4, lbl_807C9AA0@ha
    li r0, 0x1
    addi r4, r4, lbl_807C9AA0@l
    li r3, 0x1
    stb r25, 0xa6(r4)
    stb r0, 0xa4(r4)
    b lbl_fn_805B5E80_00001200
lbl_fn_805B5E80_000011FC:
    li r3, 0x0
lbl_fn_805B5E80_00001200:
    lmw r24, 0x10(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_805B6008(void)
{
    nofralloc
    lis r3, lbl_807C9AA0@ha
    li r0, 0x1
    addi r3, r3, lbl_807C9AA0@l
    stb r0, 0xa5(r3)
    blr
}

asm void fn_805B601C(void)
{
    nofralloc
    lis r3, lbl_807C9AA0@ha
    li r0, 0x0
    addi r3, r3, lbl_807C9AA0@l
    stb r0, 0xa5(r3)
    blr
}

asm void fn_805B6030(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    lis r30, lbl_807C9AA0@ha
    addi r30, r30, lbl_807C9AA0@l
    lwz r0, 0xa0(r30)
    cmpwi r0, 0x0
    beq lbl_fn_805B6030_00001314
    lbz r0, 0xa5(r30)
    cmpwi r0, 0x0
    bne lbl_fn_805B6030_00001314
    lwz r0, 0xb0(r30)
    li r31, 0x0
    stb r31, 0xa4(r30)
    cmpwi r0, 0x0
    beq lbl_fn_805B6030_00001290
    mr r3, r30
    bl fn_805FEF70
    stw r31, 0xb0(r30)
lbl_fn_805B6030_00001290:
    lis r3, lbl_807C9AA0@ha
    li r6, 0x0
    addi r7, r3, lbl_807C9AA0@l
    stw r6, 0xdc(r7)
    stw r6, 0xe8(r7)
    stw r6, 0xf4(r7)
    stw r6, 0x100(r7)
    stw r6, 0x10c(r7)
    stw r6, 0x118(r7)
    stw r6, 0x124(r7)
    stw r6, 0x130(r7)
    stw r6, 0x13c(r7)
    stw r6, 0x148(r7)
    lwz r4, 0x64(r7)
    li r5, -0x1
    lwz r0, 0x54(r7)
    li r3, 0x1
    lfs f0, 0xc8(r7)
    stw r6, 0x164(r7)
    stw r6, 0x170(r7)
    stw r6, 0x17c(r7)
    stw r5, 0x158(r7)
    stw r4, 0xa8(r7)
    stw r0, 0xbc(r7)
    stw r6, 0xb8(r7)
    stw r6, 0xc0(r7)
    stw r6, 0xac(r7)
    stw r6, 0xb4(r7)
    stw r6, 0x180(r7)
    stw r6, 0x184(r7)
    stfs f0, 0xc4(r7)
    stw r6, 0xd0(r7)
    b lbl_fn_805B6030_00001318
lbl_fn_805B6030_00001314:
    li r3, 0x0
lbl_fn_805B6030_00001318:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805B6124(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r4, lbl_807C9AA0@ha
    stw r0, 0x34(r1)
    stmw r24, 0x10(r1)
    addi r30, r4, lbl_807C9AA0@l
    mr r26, r3
    lwz r0, 0xb4(r30)
    mulli r0, r0, 0xc
    add r5, r30, r0
    lwz r0, 0xdc(r5)
    cmpwi r0, 0x0
    beq lbl_fn_805B6124_0000166C
    lwz r4, 0x6c(r30)
    lbz r0, 0xa7(r30)
    lwz r5, 0xd4(r5)
    slwi r4, r4, 2
    cmpwi r0, 0x0
    add r28, r5, r4
    addi r27, r5, 0x8
    addi r28, r28, 0x8
    beq lbl_fn_805B6124_000014CC
    cmpwi r3, 0x0
    blt lbl_fn_805B6124_0000139C
    lwz r0, 0x98(r30)
    cmplw r3, r0
    blt lbl_fn_805B6124_000013A4
lbl_fn_805B6124_0000139C:
    li r3, 0x4
    b lbl_fn_805B6124_00001670
lbl_fn_805B6124_000013A4:
    lwz r0, 0x180(r30)
    mulli r0, r0, 0xc
    add r3, r30, r0
    lwz r0, 0x164(r3)
    cmpwi r0, 0x0
    bne lbl_fn_805B6124_000014C4
    mr r29, r30
    li r31, 0x0
    li r25, 0x0
    b lbl_fn_805B6124_000014B4
lbl_fn_805B6124_000013CC:
    lbz r0, 0x70(r29)
    cmpwi r0, 0x0
    beq lbl_fn_805B6124_000013E4
    cmpwi r0, 0x1
    beq lbl_fn_805B6124_00001434
    b lbl_fn_805B6124_000014A0
lbl_fn_805B6124_000013E4:
    lwz r4, 0x14c(r30)
    mr r3, r28
    lwz r5, 0x150(r30)
    lwz r6, 0x154(r30)
    lwz r7, 0x9c(r30)
    bl fn_805E4090
    cmpwi r3, 0x0
    bne lbl_fn_805B6124_00001420
    lwz r0, 0xb4(r30)
    li r4, 0x1
    mulli r0, r0, 0xc
    add r3, r30, r0
    lwz r0, 0xd8(r3)
    stw r0, 0x158(r30)
    b lbl_fn_805B6124_00001424
lbl_fn_805B6124_00001420:
    li r4, 0x0
lbl_fn_805B6124_00001424:
    cmpwi r4, 0x0
    bne lbl_fn_805B6124_000014A0
    li r3, 0x1
    b lbl_fn_805B6124_00001670
lbl_fn_805B6124_00001434:
    lwz r3, 0x180(r30)
    li r5, 0x0
    lwz r0, 0x0(r27)
    mulli r3, r3, 0xc
    mullw r0, r0, r26
    add r3, r30, r3
    lwz r3, 0x15c(r3)
    add r4, r28, r0
    bl fn_805E7520
    mr r24, r3
    bl OSDisableInterrupts
    lwz r0, 0x180(r30)
    mulli r0, r0, 0xc
    add r4, r30, r0
    stw r24, 0x164(r4)
    lwz r0, 0x180(r30)
    mulli r0, r0, 0xc
    add r4, r30, r0
    lwz r0, 0x15c(r4)
    stw r0, 0x160(r4)
    bl OSRestoreInterrupts
    lwz r3, 0x180(r30)
    addi r0, r3, 0x1
    stw r0, 0x180(r30)
    cmpwi r0, 0x3
    blt lbl_fn_805B6124_000014A0
    stw r25, 0x180(r30)
lbl_fn_805B6124_000014A0:
    lwz r0, 0x0(r27)
    addi r27, r27, 0x4
    addi r29, r29, 0x1
    addi r31, r31, 0x1
    add r28, r28, r0
lbl_fn_805B6124_000014B4:
    lwz r0, 0x6c(r30)
    cmplw r31, r0
    blt lbl_fn_805B6124_000013CC
    b lbl_fn_805B6124_00001554
lbl_fn_805B6124_000014C4:
    li r3, 0x3
    b lbl_fn_805B6124_00001670
lbl_fn_805B6124_000014CC:
    mr r24, r30
    li r25, 0x0
    b lbl_fn_805B6124_00001548
lbl_fn_805B6124_000014D8:
    lbz r0, 0x70(r24)
    cmpwi r0, 0x0
    bne lbl_fn_805B6124_00001534
    lwz r4, 0x14c(r30)
    mr r3, r28
    lwz r5, 0x150(r30)
    lwz r6, 0x154(r30)
    lwz r7, 0x9c(r30)
    bl fn_805E4090
    cmpwi r3, 0x0
    bne lbl_fn_805B6124_00001520
    lwz r0, 0xb4(r30)
    li r4, 0x1
    mulli r0, r0, 0xc
    add r3, r30, r0
    lwz r0, 0xd8(r3)
    stw r0, 0x158(r30)
    b lbl_fn_805B6124_00001524
lbl_fn_805B6124_00001520:
    li r4, 0x0
lbl_fn_805B6124_00001524:
    cmpwi r4, 0x0
    bne lbl_fn_805B6124_00001534
    li r3, 0x1
    b lbl_fn_805B6124_00001670
lbl_fn_805B6124_00001534:
    lwz r0, 0x0(r27)
    addi r27, r27, 0x4
    addi r24, r24, 0x1
    addi r25, r25, 0x1
    add r28, r28, r0
lbl_fn_805B6124_00001548:
    lwz r0, 0x6c(r30)
    cmplw r25, r0
    blt lbl_fn_805B6124_000014D8
lbl_fn_805B6124_00001554:
    lis r31, lbl_807C9AA0@ha
    li r0, 0xa
    addi r31, r31, lbl_807C9AA0@l
    li r30, 0x0
    lwz r4, 0xb4(r31)
    xoris r3, r0, 0x8000
    mulli r0, r4, 0xc
    add r4, r31, r0
    stw r30, 0xdc(r4)
    lwz r4, 0xb4(r31)
    addi r4, r4, 0x1
    subi r0, r4, 0xa
    addc r0, r0, r3
    subfe r0, r0, r0
    andc r0, r4, r0
    stw r0, 0xb4(r31)
    bl OSDisableInterrupts
    lwz r0, 0xb8(r31)
    mr r29, r3
    mulli r0, r0, 0xc
    add r3, r31, r0
    lwz r0, 0xdc(r3)
    cmpwi r0, 0x0
    bne lbl_fn_805B6124_0000165C
    lwz r0, 0xb0(r31)
    cmpwi r0, 0x0
    bne lbl_fn_805B6124_0000165C
    lwz r0, 0xac(r31)
    cmpwi r0, 0x0
    bne lbl_fn_805B6124_0000165C
    lbz r0, 0xa4(r31)
    cmplwi r0, 0x1
    bne lbl_fn_805B6124_0000165C
    lwz r3, 0x50(r31)
    lwz r4, 0xc0(r31)
    subi r0, r3, 0x1
    cmplw r4, r0
    ble lbl_fn_805B6124_0000160C
    lbz r0, 0xa6(r31)
    cmplwi r0, 0x1
    bne lbl_fn_805B6124_0000165C
    lwz r3, 0x64(r31)
    lwz r0, 0x54(r31)
    stw r30, 0xc0(r31)
    stw r3, 0xa8(r31)
    stw r0, 0xbc(r31)
lbl_fn_805B6124_0000160C:
    lis r26, lbl_807C9AA0@ha
    lis r7, fn_805B5CF4@ha
    addi r26, r26, lbl_807C9AA0@l
    li r27, 0x1
    lwz r0, 0xb8(r26)
    mr r3, r26
    stw r27, 0xb0(r26)
    addi r7, r7, fn_805B5CF4@l
    mulli r0, r0, 0xc
    lwz r5, 0xbc(r26)
    lwz r6, 0xa8(r26)
    li r8, 0x2
    add r4, r26, r0
    lwz r4, 0xd4(r4)
    bl fn_805FA4E0
    cmpwi r3, 0x1
    beq lbl_fn_805B6124_0000165C
    li r0, 0x0
    stw r0, 0xb0(r26)
    stw r27, 0xac(r26)
lbl_fn_805B6124_0000165C:
    mr r3, r29
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_fn_805B6124_00001670
lbl_fn_805B6124_0000166C:
    li r3, 0x2
lbl_fn_805B6124_00001670:
    lmw r24, 0x10(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_805B6478(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r27, 0x1c(r1)
    lis r31, lbl_807C9AA0@ha
    addi r31, r31, lbl_807C9AA0@l
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    lwz r0, 0x158(r31)
    cmpwi r0, 0x0
    blt lbl_fn_805B6478_000016FC
    bl fn_805B4F0C
    extsh r0, r30
    stw r0, 0x8(r1)
    extsh r6, r27
    extsh r7, r28
    lwz r4, 0x80(r31)
    extsh r10, r29
    lwz r0, 0x84(r31)
    extsh r8, r4
    lwz r3, 0x14c(r31)
    lwz r4, 0x150(r31)
    extsh r9, r0
    lwz r5, 0x154(r31)
    bl fn_805B53D0
    bl fn_805B4DF4
    lwz r3, 0x158(r31)
    b lbl_fn_805B6478_00001700
lbl_fn_805B6478_000016FC:
    li r3, -0x1
lbl_fn_805B6478_00001700:
    lmw r27, 0x1c(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_805B6508(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    beq lbl_fn_805B6508_000018EC
    lis r6, lbl_807C9AA0@ha
    addi r6, r6, lbl_807C9AA0@l
    lwz r0, 0xa0(r6)
    cmpwi r0, 0x0
    beq lbl_fn_805B6508_000018E0
    lbz r0, 0xa5(r6)
    cmplwi r0, 0x1
    bne lbl_fn_805B6508_000018E0
    lbz r0, 0xa7(r6)
    cmpwi r0, 0x0
    beq lbl_fn_805B6508_000018E0
    lis r11, lbl_807977C8@ha
    li r0, 0x0
    addi r11, r11, lbl_807977C8@l
lbl_fn_805B6508_00001760:
    lwz r7, 0x184(r6)
    mulli r7, r7, 0xc
    add r7, r6, r7
    lwz r12, 0x164(r7)
    cmpwi r12, 0x0
    beq lbl_fn_805B6508_000018D4
    cmplw r12, r5
    blt lbl_fn_805B6508_00001784
    mr r12, r5
lbl_fn_805B6508_00001784:
    lwz r7, 0x160(r7)
    mtctr r12
    cmplwi r12, 0x0
    ble lbl_fn_805B6508_00001870
lbl_fn_805B6508_00001794:
    lwz r8, 0xd0(r6)
    cmpwi r8, 0x0
    beq lbl_fn_805B6508_000017BC
    lfs f1, 0xc4(r6)
    subi r8, r8, 0x1
    lfs f0, 0xcc(r6)
    stw r8, 0xd0(r6)
    fadds f0, f1, f0
    stfs f0, 0xc4(r6)
    b lbl_fn_805B6508_000017C4
lbl_fn_805B6508_000017BC:
    lfs f0, 0xc8(r6)
    stfs f0, 0xc4(r6)
lbl_fn_805B6508_000017C4:
    lfs f0, 0xc4(r6)
    lwz r8, 0x188(r6)
    fctiwz f0, f0
    lha r10, 0x0(r7)
    lha r9, 0x2(r7)
    cmpwi r8, 0x0
    stfd f0, 0x8(r1)
    addi r7, r7, 0x4
    lwz r8, 0xc(r1)
    slwi r8, r8, 1
    lhzx r8, r11, r8
    mullw r10, r8, r10
    mullw r8, r8, r9
    srawi r9, r10, 15
    srawi r10, r8, 15
    bne lbl_fn_805B6508_00001814
    add r9, r9, r10
    addi r9, r9, 0x1
    srawi r9, r9, 1
    mr r10, r9
lbl_fn_805B6508_00001814:
    lha r8, 0x0(r4)
    add r9, r9, r8
    cmpwi r9, -0x8000
    bge lbl_fn_805B6508_0000182C
    li r9, -0x8000
    b lbl_fn_805B6508_00001838
lbl_fn_805B6508_0000182C:
    cmpwi r9, 0x7fff
    ble lbl_fn_805B6508_00001838
    li r9, 0x7fff
lbl_fn_805B6508_00001838:
    sth r9, 0x0(r3)
    lha r8, 0x2(r4)
    addi r4, r4, 0x4
    add r10, r10, r8
    cmpwi r10, -0x8000
    bge lbl_fn_805B6508_00001858
    li r10, -0x8000
    b lbl_fn_805B6508_00001864
lbl_fn_805B6508_00001858:
    cmpwi r10, 0x7fff
    ble lbl_fn_805B6508_00001864
    li r10, 0x7fff
lbl_fn_805B6508_00001864:
    sth r10, 0x2(r3)
    addi r3, r3, 0x4
    bdnz lbl_fn_805B6508_00001794
lbl_fn_805B6508_00001870:
    lwz r8, 0x184(r6)
    subf r5, r12, r5
    mulli r8, r8, 0xc
    add r9, r6, r8
    lwz r8, 0x164(r9)
    subf r8, r12, r8
    stw r8, 0x164(r9)
    lwz r8, 0x184(r6)
    mulli r8, r8, 0xc
    add r8, r6, r8
    stw r7, 0x160(r8)
    lwz r8, 0x184(r6)
    mulli r7, r8, 0xc
    add r7, r6, r7
    lwz r7, 0x164(r7)
    cmpwi r7, 0x0
    bne lbl_fn_805B6508_000018C8
    addi r7, r8, 0x1
    stw r7, 0x184(r6)
    cmpwi r7, 0x3
    blt lbl_fn_805B6508_000018C8
    stw r0, 0x184(r6)
lbl_fn_805B6508_000018C8:
    cmpwi r5, 0x0
    beq lbl_fn_805B6508_00001AA0
    b lbl_fn_805B6508_00001760
lbl_fn_805B6508_000018D4:
    slwi r5, r5, 2
    bl memcpy
    b lbl_fn_805B6508_00001AA0
lbl_fn_805B6508_000018E0:
    slwi r5, r5, 2
    bl memcpy
    b lbl_fn_805B6508_00001AA0
lbl_fn_805B6508_000018EC:
    lis r4, lbl_807C9AA0@ha
    addi r4, r4, lbl_807C9AA0@l
    lwz r0, 0xa0(r4)
    cmpwi r0, 0x0
    beq lbl_fn_805B6508_00001A94
    lbz r0, 0xa5(r4)
    cmplwi r0, 0x1
    bne lbl_fn_805B6508_00001A94
    lbz r0, 0xa7(r4)
    cmpwi r0, 0x0
    beq lbl_fn_805B6508_00001A94
    lis r9, lbl_807977C8@ha
    li r0, 0x0
    addi r9, r9, lbl_807977C8@l
lbl_fn_805B6508_00001924:
    lwz r6, 0x184(r4)
    mulli r6, r6, 0xc
    add r6, r4, r6
    lwz r10, 0x164(r6)
    cmpwi r10, 0x0
    beq lbl_fn_805B6508_00001A84
    cmplw r10, r5
    blt lbl_fn_805B6508_00001948
    mr r10, r5
lbl_fn_805B6508_00001948:
    lwz r11, 0x160(r6)
    mtctr r10
    cmplwi r10, 0x0
    ble lbl_fn_805B6508_00001A20
lbl_fn_805B6508_00001958:
    lwz r6, 0xd0(r4)
    cmpwi r6, 0x0
    beq lbl_fn_805B6508_00001980
    lfs f1, 0xc4(r4)
    subi r6, r6, 0x1
    lfs f0, 0xcc(r4)
    stw r6, 0xd0(r4)
    fadds f0, f1, f0
    stfs f0, 0xc4(r4)
    b lbl_fn_805B6508_00001988
lbl_fn_805B6508_00001980:
    lfs f0, 0xc8(r4)
    stfs f0, 0xc4(r4)
lbl_fn_805B6508_00001988:
    lfs f0, 0xc4(r4)
    lwz r6, 0x188(r4)
    fctiwz f0, f0
    lha r8, 0x0(r11)
    lha r7, 0x2(r11)
    cmpwi r6, 0x0
    stfd f0, 0x8(r1)
    addi r11, r11, 0x4
    lwz r6, 0xc(r1)
    slwi r6, r6, 1
    lhzx r6, r9, r6
    mullw r8, r6, r8
    mullw r6, r6, r7
    srawi r7, r8, 15
    srawi r6, r6, 15
    bne lbl_fn_805B6508_000019D8
    add r7, r7, r6
    addi r7, r7, 0x1
    srawi r7, r7, 1
    mr r6, r7
lbl_fn_805B6508_000019D8:
    cmpwi r7, -0x8000
    bge lbl_fn_805B6508_000019E8
    li r7, -0x8000
    b lbl_fn_805B6508_000019F4
lbl_fn_805B6508_000019E8:
    cmpwi r7, 0x7fff
    ble lbl_fn_805B6508_000019F4
    li r7, 0x7fff
lbl_fn_805B6508_000019F4:
    cmpwi r6, -0x8000
    sth r7, 0x0(r3)
    bge lbl_fn_805B6508_00001A08
    li r6, -0x8000
    b lbl_fn_805B6508_00001A14
lbl_fn_805B6508_00001A08:
    cmpwi r6, 0x7fff
    ble lbl_fn_805B6508_00001A14
    li r6, 0x7fff
lbl_fn_805B6508_00001A14:
    sth r6, 0x2(r3)
    addi r3, r3, 0x4
    bdnz lbl_fn_805B6508_00001958
lbl_fn_805B6508_00001A20:
    lwz r6, 0x184(r4)
    subf r5, r10, r5
    mulli r6, r6, 0xc
    add r7, r4, r6
    lwz r6, 0x164(r7)
    subf r6, r10, r6
    stw r6, 0x164(r7)
    lwz r6, 0x184(r4)
    mulli r6, r6, 0xc
    add r6, r4, r6
    stw r11, 0x160(r6)
    lwz r7, 0x184(r4)
    mulli r6, r7, 0xc
    add r6, r4, r6
    lwz r6, 0x164(r6)
    cmpwi r6, 0x0
    bne lbl_fn_805B6508_00001A78
    addi r6, r7, 0x1
    stw r6, 0x184(r4)
    cmpwi r6, 0x3
    blt lbl_fn_805B6508_00001A78
    stw r0, 0x184(r4)
lbl_fn_805B6508_00001A78:
    cmpwi r5, 0x0
    beq lbl_fn_805B6508_00001AA0
    b lbl_fn_805B6508_00001924
lbl_fn_805B6508_00001A84:
    slwi r5, r5, 2
    li r4, 0x0
    bl memset
    b lbl_fn_805B6508_00001AA0
lbl_fn_805B6508_00001A94:
    slwi r5, r5, 2
    li r4, 0x0
    bl memset
lbl_fn_805B6508_00001AA0:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
