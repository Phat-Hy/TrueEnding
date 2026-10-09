#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void OSCancelAlarm(void);
extern void OSCreateAlarm(void);
extern void OSDisableInterrupts(void);
extern void OSGetAlarmUserData(void);
extern void OSGetTime(void);
extern void OSReport(const char* msg, ...);
extern void OSRestoreInterrupts(void);
extern void OSSetAlarm(void);
extern void _restgpr_24(void);
extern void _restgpr_25(void);
extern void _restgpr_27(void);
extern void _savegpr_24(void);
extern void _savegpr_25(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_805EC3B0(void);
extern void fn_805EC870(void);
extern void fn_805F3130(void);
extern void fn_805F3210(void);
extern void fn_80609D50(void);
extern void fn_80609D80(void);
extern void fn_80609E50(void);
extern void fn_80625910(void);
extern void fn_80661B60(void);
extern void fn_80663330(void);
extern void fn_806633C0(void);
extern void fn_80682544(void);
extern void fn_80709700(void);
extern void fn_807097C0(void);
extern void fn_8070C650(void);
extern void fn_8070C770(void);
extern void fn_8070C780(void);
extern void fn_8070C8B0(void);
extern void fn_8070EE90(void);
extern void fn_8070EFE0(void);
extern void fn_8070F070(void);
extern void fn_8070F0D0(void);
extern void fn_8070F130(void);
extern void fn_8070F440(void);
extern void fn_80712220(void);
extern void fn_80712480(void);
extern void fn_807125D0(void);
extern void fn_807134E0(void);
extern void fn_80713580(void);
extern void fn_80713820(void);
extern void fn_80713830(void);
extern void fn_80713850(void);
extern void fn_80713B80(void);
extern void fn_80714230(void);
extern void fn_80714390(void);
extern void fn_80714500(void);
extern void fn_80714520(void);
extern void fn_807187D0(void);
extern void fn_80718D70(void);
extern void fn_807210F0(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 jumptable_807C5F78[];
extern u8 lbl_807C5F50[];
extern u8 lbl_807C6180[];
extern u8 lbl_807C61A8[];
extern u8 lbl_807C61B8[];
extern u8 lbl_80862FB0[];
extern u8 lbl_80863288[];

/* Small data declarations */
extern u32 lbl_8087EE18;
extern u32 lbl_8087EE1C;
extern u32 lbl_8087EE20;
extern u32 lbl_808804C8;
extern u32 lbl_808804D0;
extern u32 lbl_80889170;
extern u32 lbl_80889174;
extern u32 lbl_80889178;
extern u32 lbl_8088917C;
extern u32 lbl_80889180;
extern u32 lbl_80889188;
extern u32 lbl_80889190;
extern u32 lbl_80889194;

/* Function declarations */
void pad_03_8070FACC_text(void);
void fn_8070FAD0(void);
void fn_80710440(void);
void fn_80710460(void);
void fn_807105D0(void);
void fn_80710610(void);
void fn_80710650(void);
void fn_80710670(void);
void fn_807106D0(void);
void fn_80710740(void);
void fn_807107B0(void);
void fn_807107C0(void);
void fn_807107D0(void);
void fn_807107E0(void);
void fn_80710810(void);
void fn_807108E0(void);
void fn_80710910(void);
void fn_80710940(void);
void fn_807109D0(void);
void fn_807109E0(void);
void fn_807109F0(void);
void fn_80710A00(void);
void fn_80710A80(void);
void fn_80710B40(void);
void fn_80710BF0(void);
void fn_80710C30(void);
void fn_80710CD0(void);
void fn_80710FE0(void);
void fn_807110F0(void);
void fn_807111E0(void);
void fn_807112D0(void);
void fn_80711320(void);
void fn_80711390(void);
void fn_80711430(void);
void fn_80711440(void);
void fn_807114E0(void);
void fn_80711530(void);
void fn_80711630(void);
void fn_807116A0(void);
void fn_807116B0(void);
void fn_80711770(void);
void fn_807117C0(void);
void fn_80711910(void);
void fn_80711AA0(void);

asm void pad_03_8070FACC_text(void)
{
    nofralloc
    opword 0x00000000
}

asm void fn_8070FAD0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_25
    cmplwi r5, 0xff
    lis r0, 0x4330
    stw r0, 0x8(r1)
    mr r28, r4
    lwz r27, 0xc4(r4)
    mr r25, r6
    stw r0, 0x10(r1)
    mr r29, r7
    addi r31, r4, 0x1c
    bgt lbl_fn_8070FAD0_00000668
    subi r0, r5, 0x81
    cmplwi r0, 0x7c
    bgt lbl_fn_8070FAD0_00000950
    lis r3, jumptable_807C5F78@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_807C5F78@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    cmpwi r6, 0x3ff
    ble lbl_fn_8070FAD0_00000074
    li r0, 0x3ff
    b lbl_fn_8070FAD0_0000007C
lbl_fn_8070FAD0_00000074:
    srawi r0, r6, 31
    andc r0, r6, r0
lbl_fn_8070FAD0_0000007C:
    sth r0, 0xec(r27)
    b lbl_fn_8070FAD0_00000950
    stb r6, 0xea(r27)
    b lbl_fn_8070FAD0_00000950
    lis r0, 0x1
    cmpw r6, r0
    bge lbl_fn_8070FAD0_00000950
    clrlwi r0, r6, 16
    stw r0, 0x38(r31)
    b lbl_fn_8070FAD0_00000950
    mr r3, r28
    mr r4, r25
    bl fn_80714390
    b lbl_fn_8070FAD0_00000950
    lha r4, 0x56(r31)
    lha r3, 0x58(r31)
    cmpw r3, r4
    blt lbl_fn_8070FAD0_000000CC
    lbz r3, 0x55(r31)
    b lbl_fn_8070FAD0_000000E8
lbl_fn_8070FAD0_000000CC:
    lbz r5, 0x54(r31)
    lbz r0, 0x55(r31)
    subf r0, r5, r0
    mullw r0, r3, r0
    divw r0, r0, r4
    add r0, r5, r0
    clrlwi r3, r0, 24
lbl_fn_8070FAD0_000000E8:
    li r0, 0x0
    stb r3, 0x54(r31)
    stb r6, 0x55(r31)
    sth r7, 0x56(r31)
    sth r0, 0x58(r31)
    b lbl_fn_8070FAD0_00000950
    stb r6, 0x6c(r31)
    b lbl_fn_8070FAD0_00000950
    stb r6, 0x6d(r31)
    b lbl_fn_8070FAD0_00000950
    stb r6, 0xe8(r27)
    b lbl_fn_8070FAD0_00000950
    stb r6, 0x70(r31)
    b lbl_fn_8070FAD0_00000950
    lha r5, 0x68(r31)
    lha r4, 0x6a(r31)
    cmpw r4, r5
    blt lbl_fn_8070FAD0_0000013C
    lbz r0, 0x67(r31)
    extsb r3, r0
    b lbl_fn_8070FAD0_00000160
lbl_fn_8070FAD0_0000013C:
    lbz r8, 0x66(r31)
    lbz r0, 0x67(r31)
    extsb r3, r8
    extsb r0, r0
    subf r0, r3, r0
    mullw r0, r4, r0
    divw r0, r0, r5
    add r0, r8, r0
    extsb r3, r0
lbl_fn_8070FAD0_00000160:
    li r0, 0x0
    stb r3, 0x66(r31)
    stb r6, 0x67(r31)
    sth r7, 0x68(r31)
    sth r0, 0x6a(r31)
    b lbl_fn_8070FAD0_00000950
    stb r6, 0x6e(r31)
    b lbl_fn_8070FAD0_00000950
    lha r5, 0x5c(r31)
    lha r4, 0x5e(r31)
    cmpw r4, r5
    blt lbl_fn_8070FAD0_0000019C
    lbz r0, 0x5b(r31)
    extsb r4, r0
    b lbl_fn_8070FAD0_000001C0
lbl_fn_8070FAD0_0000019C:
    lbz r8, 0x5a(r31)
    lbz r0, 0x5b(r31)
    extsb r3, r8
    extsb r0, r0
    subf r0, r3, r0
    mullw r0, r4, r0
    divw r0, r0, r5
    add r0, r8, r0
    extsb r4, r0
lbl_fn_8070FAD0_000001C0:
    subi r3, r6, 0x40
    li r0, 0x0
    stb r4, 0x5a(r31)
    stb r3, 0x5b(r31)
    sth r7, 0x5c(r31)
    sth r0, 0x5e(r31)
    b lbl_fn_8070FAD0_00000950
    subi r0, r6, 0x40
    stb r0, 0x6f(r31)
    b lbl_fn_8070FAD0_00000950
    lha r5, 0x62(r31)
    lha r4, 0x64(r31)
    cmpw r4, r5
    blt lbl_fn_8070FAD0_00000204
    lbz r0, 0x61(r31)
    extsb r3, r0
    b lbl_fn_8070FAD0_00000228
lbl_fn_8070FAD0_00000204:
    lbz r8, 0x60(r31)
    lbz r0, 0x61(r31)
    extsb r3, r8
    extsb r0, r0
    subf r0, r3, r0
    mullw r0, r4, r0
    divw r0, r0, r5
    add r0, r8, r0
    extsb r3, r0
lbl_fn_8070FAD0_00000228:
    li r0, 0x0
    stb r3, 0x60(r31)
    stb r6, 0x61(r31)
    sth r7, 0x62(r31)
    sth r0, 0x64(r31)
    b lbl_fn_8070FAD0_00000950
    stb r6, 0x71(r31)
    b lbl_fn_8070FAD0_00000950
    neg r0, r6
    or r0, r0, r6
    srwi r0, r0, 31
    stb r0, 0x9(r31)
    b lbl_fn_8070FAD0_00000950
    stb r6, 0x73(r31)
    b lbl_fn_8070FAD0_00000950
    clrlwi r0, r6, 24
    stw r0, 0xc(r1)
    lfd f2, lbl_80889180
    lfd f1, 0x8(r1)
    lfs f0, lbl_80889170
    fsubs f1, f1, f2
    fmuls f0, f1, f0
    stfs f0, 0x3c(r31)
    b lbl_fn_8070FAD0_00000950
    clrlwi r0, r6, 24
    stw r0, 0x14(r1)
    lfd f2, lbl_80889180
    lfd f1, 0x10(r1)
    lfs f0, lbl_80889174
    fsubs f1, f1, f2
    fmuls f0, f0, f1
    stfs f0, 0x40(r31)
    b lbl_fn_8070FAD0_00000950
    stb r6, 0x4c(r31)
    b lbl_fn_8070FAD0_00000950
    stb r6, 0x48(r31)
    b lbl_fn_8070FAD0_00000950
    slwi r0, r6, 2
    add r0, r0, r6
    stw r0, 0x44(r31)
    b lbl_fn_8070FAD0_00000950
    xoris r0, r6, 0x8000
    stw r0, 0xc(r1)
    lfd f2, lbl_80889188
    lfd f1, 0x8(r1)
    lfs f0, lbl_80889178
    fsubs f1, f1, f2
    fmuls f0, f1, f0
    stfs f0, 0x50(r31)
    b lbl_fn_8070FAD0_00000950
    stb r6, 0x74(r31)
    b lbl_fn_8070FAD0_00000950
    stb r6, 0x75(r31)
    b lbl_fn_8070FAD0_00000950
    stb r6, 0x76(r31)
    b lbl_fn_8070FAD0_00000950
    stb r6, 0x77(r31)
    b lbl_fn_8070FAD0_00000950
    clrlwi r0, r6, 24
    sth r0, 0x78(r31)
    b lbl_fn_8070FAD0_00000950
    li r0, 0xff
    stb r0, 0x74(r31)
    stb r0, 0x75(r31)
    stb r0, 0x76(r31)
    stb r0, 0x77(r31)
    sth r0, 0x78(r31)
    b lbl_fn_8070FAD0_00000950
    clrlwi r4, r6, 24
    li r3, 0x40
    subi r0, r4, 0x40
    orc r3, r4, r3
    srwi r0, r0, 1
    subf r0, r0, r3
    srwi r0, r0, 31
    stb r0, 0x30(r31)
    b lbl_fn_8070FAD0_00000950
    neg r0, r6
    mr r3, r28
    or r0, r0, r6
    li r4, -0x1
    srwi r0, r0, 31
    stb r0, 0xa(r31)
    bl fn_80713B80
    mr r3, r28
    bl fn_80714230
    b lbl_fn_8070FAD0_00000950
    neg r0, r6
    or r0, r0, r6
    srwi. r0, r0, 31
    stb r0, 0xb(r31)
    beq lbl_fn_8070FAD0_00000950
    mr r3, r28
    li r4, -0x1
    bl fn_80713B80
    mr r3, r28
    bl fn_80714230
    b lbl_fn_8070FAD0_00000950
    lbz r3, 0x70(r31)
    li r0, 0x1
    stb r0, 0x2f(r31)
    add r0, r6, r3
    stb r0, 0x72(r31)
    b lbl_fn_8070FAD0_00000950
    neg r0, r6
    or r0, r0, r6
    srwi r0, r0, 31
    stb r0, 0x2f(r31)
    b lbl_fn_8070FAD0_00000950
    subi r0, r6, 0x40
    lfd f2, lbl_80889188
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfs f0, lbl_80889178
    lfd f1, 0x10(r1)
    fsubs f1, f1, f2
    fmuls f0, f1, f0
    stfs f0, 0x80(r31)
    b lbl_fn_8070FAD0_00000950
    stb r6, 0x7e(r31)
    b lbl_fn_8070FAD0_00000950
    xoris r0, r6, 0x8000
    stw r0, 0xc(r1)
    lfd f2, lbl_80889188
    lfd f1, 0x8(r1)
    lfs f0, lbl_8088917C
    fsubs f1, f1, f2
    fdivs f0, f1, f0
    stfs f0, 0x84(r31)
    b lbl_fn_8070FAD0_00000950
    stb r6, 0x7b(r31)
    b lbl_fn_8070FAD0_00000950
    stb r6, 0x7c(r31)
    b lbl_fn_8070FAD0_00000950
    stb r6, 0x7d(r31)
    b lbl_fn_8070FAD0_00000950
    stb r6, 0x7a(r31)
    b lbl_fn_8070FAD0_00000950
    lbz r0, lbl_808804C8
    cmpwi r0, 0x0
    beq lbl_fn_8070FAD0_00000950
    cmpwi r6, 0x20
    bge lbl_fn_8070FAD0_00000478
    mr r3, r27
    mr r4, r25
    bl fn_807125D0
    mr r4, r3
    b lbl_fn_8070FAD0_00000498
lbl_fn_8070FAD0_00000478:
    cmpwi r6, 0x30
    bge lbl_fn_8070FAD0_00000490
    mr r3, r28
    subi r4, r6, 0x20
    bl fn_80714500
    b lbl_fn_8070FAD0_00000494
lbl_fn_8070FAD0_00000490:
    li r3, 0x0
lbl_fn_8070FAD0_00000494:
    mr r4, r3
lbl_fn_8070FAD0_00000498:
    cmpwi r25, 0x20
    blt lbl_fn_8070FAD0_000004A8
    subi r7, r25, 0x20
    b lbl_fn_8070FAD0_000004B8
lbl_fn_8070FAD0_000004A8:
    cmpwi r25, 0x10
    mr r7, r25
    blt lbl_fn_8070FAD0_000004B8
    subi r7, r25, 0x10
lbl_fn_8070FAD0_000004B8:
    cmpwi r25, 0x20
    blt lbl_fn_8070FAD0_000004C8
    la r6, lbl_8087EE18
    b lbl_fn_8070FAD0_000004D8
lbl_fn_8070FAD0_000004C8:
    cmpwi r25, 0x10
    la r6, lbl_8087EE20
    blt lbl_fn_8070FAD0_000004D8
    la r6, lbl_8087EE1C
lbl_fn_8070FAD0_000004D8:
    lis r3, lbl_807C5F50@ha
    lha r9, 0x0(r4)
    lbz r5, 0x4(r28)
    mr r4, r27
    mr r8, r25
    addi r3, r3, lbl_807C5F50@l
    crclr 6
    bl OSReport
    b lbl_fn_8070FAD0_00000950
    mr r3, r27
    mr r4, r25
    bl fn_80712480
    cmpwi r3, 0x0
    mr r27, r3
    beq lbl_fn_8070FAD0_00000950
    cmplw r3, r28
    beq lbl_fn_8070FAD0_00000950
    bl fn_80713850
    lwz r4, 0x0(r31)
    mr r3, r27
    mr r5, r29
    bl fn_80713820
    mr r3, r27
    bl fn_80713830
    b lbl_fn_8070FAD0_00000950
    lwz r0, 0x0(r31)
    add r0, r0, r6
    stw r0, 0x4(r31)
    b lbl_fn_8070FAD0_00000950
    lbz r0, 0x24(r31)
    cmplwi r0, 0x3
    bge lbl_fn_8070FAD0_00000950
    clrlslwi r0, r0, 24, 3
    lwz r3, 0x4(r31)
    add r4, r31, r0
    stw r3, 0x10(r4)
    li r0, 0x0
    stb r0, 0xc(r4)
    lbz r3, 0x24(r31)
    lwz r0, 0x0(r31)
    addi r3, r3, 0x1
    stb r3, 0x24(r31)
    add r0, r0, r6
    stw r0, 0x4(r31)
    b lbl_fn_8070FAD0_00000950
    li r4, 0x0
    b lbl_fn_8070FAD0_000005BC
lbl_fn_8070FAD0_00000594:
    lbz r3, 0x24(r31)
    subi r0, r3, 0x1
    stb r0, 0x24(r31)
    clrlslwi r0, r0, 24, 3
    add r3, r31, r0
    lbz r0, 0xc(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8070FAD0_000005BC
    addi r4, r3, 0xc
    b lbl_fn_8070FAD0_000005C8
lbl_fn_8070FAD0_000005BC:
    lbz r0, 0x24(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8070FAD0_00000594
lbl_fn_8070FAD0_000005C8:
    cmpwi r4, 0x0
    beq lbl_fn_8070FAD0_00000950
    lwz r0, 0x4(r4)
    stw r0, 0x4(r31)
    b lbl_fn_8070FAD0_00000950
    lbz r0, 0x24(r31)
    cmplwi r0, 0x3
    bge lbl_fn_8070FAD0_00000950
    clrlslwi r0, r0, 24, 3
    lwz r3, 0x4(r31)
    add r4, r31, r0
    stw r3, 0x10(r4)
    li r0, 0x1
    stb r6, 0xd(r4)
    stb r0, 0xc(r4)
    lbz r3, 0x24(r31)
    addi r0, r3, 0x1
    stb r0, 0x24(r31)
    b lbl_fn_8070FAD0_00000950
    lbz r3, 0x24(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8070FAD0_00000950
    subi r4, r3, 0x1
    slwi r0, r4, 3
    add r3, r31, r0
    lbz r0, 0xc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8070FAD0_00000950
    lbz r5, 0xd(r3)
    cmpwi r5, 0x0
    beq lbl_fn_8070FAD0_00000658
    subi r5, r5, 0x1
    clrlwi. r0, r5, 24
    bne lbl_fn_8070FAD0_00000658
    stb r4, 0x24(r31)
    b lbl_fn_8070FAD0_00000950
lbl_fn_8070FAD0_00000658:
    stb r5, 0xd(r3)
    lwz r0, 0x10(r3)
    stw r0, 0x4(r31)
    b lbl_fn_8070FAD0_00000950
lbl_fn_8070FAD0_00000668:
    cmplwi r5, 0xffff
    bgt lbl_fn_8070FAD0_00000950
    rlwinm r0, r5, 0, 24, 27
    clrlwi r26, r5, 24
    cmplwi r0, 0x80
    li r30, 0x0
    beq lbl_fn_8070FAD0_0000068C
    cmplwi r0, 0x90
    bne lbl_fn_8070FAD0_000006CC
lbl_fn_8070FAD0_0000068C:
    cmpwi r6, 0x20
    bge lbl_fn_8070FAD0_000006A4
    mr r3, r27
    mr r4, r25
    bl fn_807125D0
    b lbl_fn_8070FAD0_000006C0
lbl_fn_8070FAD0_000006A4:
    cmpwi r6, 0x30
    bge lbl_fn_8070FAD0_000006BC
    mr r3, r28
    subi r4, r6, 0x20
    bl fn_80714500
    b lbl_fn_8070FAD0_000006C0
lbl_fn_8070FAD0_000006BC:
    li r3, 0x0
lbl_fn_8070FAD0_000006C0:
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_8070FAD0_00000950
lbl_fn_8070FAD0_000006CC:
    cmpwi r26, 0x8a
    beq lbl_fn_8070FAD0_00000864
    bge lbl_fn_8070FAD0_0000072C
    cmpwi r26, 0x84
    beq lbl_fn_8070FAD0_000007B0
    bge lbl_fn_8070FAD0_00000708
    cmpwi r26, 0x81
    beq lbl_fn_8070FAD0_00000780
    bge lbl_fn_8070FAD0_000006FC
    cmpwi r26, 0x80
    bge lbl_fn_8070FAD0_00000778
    b lbl_fn_8070FAD0_00000950
lbl_fn_8070FAD0_000006FC:
    cmpwi r26, 0x83
    bge lbl_fn_8070FAD0_000007A0
    b lbl_fn_8070FAD0_00000790
lbl_fn_8070FAD0_00000708:
    cmpwi r26, 0x87
    beq lbl_fn_8070FAD0_00000834
    bge lbl_fn_8070FAD0_00000720
    cmpwi r26, 0x86
    bge lbl_fn_8070FAD0_000007F4
    b lbl_fn_8070FAD0_000007C8
lbl_fn_8070FAD0_00000720:
    cmpwi r26, 0x89
    bge lbl_fn_8070FAD0_00000854
    b lbl_fn_8070FAD0_00000844
lbl_fn_8070FAD0_0000072C:
    cmpwi r26, 0x93
    beq lbl_fn_8070FAD0_000008E8
    bge lbl_fn_8070FAD0_0000075C
    cmpwi r26, 0x90
    beq lbl_fn_8070FAD0_00000894
    bge lbl_fn_8070FAD0_00000750
    cmpwi r26, 0x8c
    bge lbl_fn_8070FAD0_00000950
    b lbl_fn_8070FAD0_00000874
lbl_fn_8070FAD0_00000750:
    cmpwi r26, 0x92
    bge lbl_fn_8070FAD0_000008C8
    b lbl_fn_8070FAD0_000008AC
lbl_fn_8070FAD0_0000075C:
    cmpwi r26, 0xe0
    beq lbl_fn_8070FAD0_00000940
    bge lbl_fn_8070FAD0_00000950
    cmpwi r26, 0x95
    beq lbl_fn_8070FAD0_00000924
    bge lbl_fn_8070FAD0_00000950
    b lbl_fn_8070FAD0_00000904
lbl_fn_8070FAD0_00000778:
    sth r29, 0x0(r30)
    b lbl_fn_8070FAD0_00000950
lbl_fn_8070FAD0_00000780:
    lha r0, 0x0(r30)
    add r0, r0, r29
    sth r0, 0x0(r30)
    b lbl_fn_8070FAD0_00000950
lbl_fn_8070FAD0_00000790:
    lha r0, 0x0(r30)
    subf r0, r29, r0
    sth r0, 0x0(r30)
    b lbl_fn_8070FAD0_00000950
lbl_fn_8070FAD0_000007A0:
    lha r0, 0x0(r30)
    mullw r0, r0, r29
    sth r0, 0x0(r30)
    b lbl_fn_8070FAD0_00000950
lbl_fn_8070FAD0_000007B0:
    cmpwi r29, 0x0
    beq lbl_fn_8070FAD0_00000950
    lha r0, 0x0(r30)
    divw r0, r0, r29
    sth r0, 0x0(r30)
    b lbl_fn_8070FAD0_00000950
lbl_fn_8070FAD0_000007C8:
    cmpwi r29, 0x0
    blt lbl_fn_8070FAD0_000007E0
    lha r0, 0x0(r30)
    slw r0, r0, r29
    sth r0, 0x0(r30)
    b lbl_fn_8070FAD0_00000950
lbl_fn_8070FAD0_000007E0:
    lha r3, 0x0(r30)
    neg r0, r29
    sraw r0, r3, r0
    sth r0, 0x0(r30)
    b lbl_fn_8070FAD0_00000950
lbl_fn_8070FAD0_000007F4:
    cmpwi r29, 0x0
    li r26, 0x0
    bge lbl_fn_8070FAD0_0000080C
    neg r0, r29
    li r26, 0x1
    extsh r29, r0
lbl_fn_8070FAD0_0000080C:
    bl fn_807210F0
    clrlwi r3, r3, 16
    addi r0, r29, 0x1
    mullw r3, r3, r0
    cmpwi r26, 0x0
    srawi r3, r3, 16
    beq lbl_fn_8070FAD0_0000082C
    neg r3, r3
lbl_fn_8070FAD0_0000082C:
    sth r3, 0x0(r30)
    b lbl_fn_8070FAD0_00000950
lbl_fn_8070FAD0_00000834:
    lha r0, 0x0(r30)
    and r0, r0, r29
    sth r0, 0x0(r30)
    b lbl_fn_8070FAD0_00000950
lbl_fn_8070FAD0_00000844:
    lha r0, 0x0(r30)
    or r0, r0, r29
    sth r0, 0x0(r30)
    b lbl_fn_8070FAD0_00000950
lbl_fn_8070FAD0_00000854:
    lha r0, 0x0(r30)
    xor r0, r0, r29
    sth r0, 0x0(r30)
    b lbl_fn_8070FAD0_00000950
lbl_fn_8070FAD0_00000864:
    clrlwi r0, r29, 16
    nor r0, r0, r0
    sth r0, 0x0(r30)
    b lbl_fn_8070FAD0_00000950
lbl_fn_8070FAD0_00000874:
    cmpwi r29, 0x0
    beq lbl_fn_8070FAD0_00000950
    lha r3, 0x0(r30)
    divw r0, r3, r29
    mullw r0, r0, r29
    subf r0, r0, r3
    sth r0, 0x0(r30)
    b lbl_fn_8070FAD0_00000950
lbl_fn_8070FAD0_00000894:
    lha r0, 0x0(r30)
    subf r0, r0, r29
    cntlzw r0, r0
    srwi r0, r0, 5
    stb r0, 0x8(r31)
    b lbl_fn_8070FAD0_00000950
lbl_fn_8070FAD0_000008AC:
    lha r0, 0x0(r30)
    srwi r3, r29, 31
    srawi r4, r0, 31
    subfc r0, r29, r0
    adde r0, r4, r3
    stb r0, 0x8(r31)
    b lbl_fn_8070FAD0_00000950
lbl_fn_8070FAD0_000008C8:
    lha r4, 0x0(r30)
    xor r0, r4, r29
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    stb r0, 0x8(r31)
    b lbl_fn_8070FAD0_00000950
lbl_fn_8070FAD0_000008E8:
    lha r0, 0x0(r30)
    srawi r4, r29, 31
    srwi r3, r0, 31
    subfc r0, r0, r29
    adde r0, r4, r3
    stb r0, 0x8(r31)
    b lbl_fn_8070FAD0_00000950
lbl_fn_8070FAD0_00000904:
    lha r0, 0x0(r30)
    xor r0, r29, r0
    srawi r3, r0, 1
    and r0, r0, r29
    subf r0, r0, r3
    srwi r0, r0, 31
    stb r0, 0x8(r31)
    b lbl_fn_8070FAD0_00000950
lbl_fn_8070FAD0_00000924:
    lha r0, 0x0(r30)
    subf r3, r0, r29
    subf r0, r29, r0
    or r0, r3, r0
    srwi r0, r0, 31
    stb r0, 0x8(r31)
    b lbl_fn_8070FAD0_00000950
lbl_fn_8070FAD0_00000940:
    mr r3, r27
    mr r5, r28
    clrlwi r4, r25, 16
    bl fn_80712220
lbl_fn_8070FAD0_00000950:
    addi r11, r1, 0x40
    bl _restgpr_25
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80710440(void)
{
    nofralloc
    mr r3, r4
    mr r4, r5
    mr r5, r6
    mr r6, r7
    mr r7, r8
    b fn_80714520
}

asm void fn_80710460(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r7, 0x1
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    beq lbl_fn_80710460_000009D4
    cmpwi r7, 0x2
    beq lbl_fn_80710460_000009E8
    cmpwi r7, 0x3
    beq lbl_fn_80710460_00000A0C
    cmpwi r7, 0x5
    beq lbl_fn_80710460_00000A3C
    cmpwi r7, 0x4
    beq lbl_fn_80710460_00000A8C
    b lbl_fn_80710460_00000AEC
lbl_fn_80710460_000009D4:
    lwz r3, 0x0(r4)
    addi r0, r3, 0x1
    stw r0, 0x0(r4)
    lbz r3, 0x0(r3)
    b lbl_fn_80710460_00000AEC
lbl_fn_80710460_000009E8:
    lwz r5, 0x0(r4)
    addi r3, r5, 0x1
    stw r3, 0x0(r4)
    addi r0, r3, 0x1
    lbz r5, 0x0(r5)
    stw r0, 0x0(r4)
    lbz r3, 0x0(r3)
    rlwimi r3, r5, 8, 16, 23
    b lbl_fn_80710460_00000AEC
lbl_fn_80710460_00000A0C:
    li r3, 0x0
    nop
lbl_fn_80710460_00000A14:
    lwz r5, 0x0(r4)
    slwi r3, r3, 7
    addi r0, r5, 0x1
    stw r0, 0x0(r4)
    lbz r5, 0x0(r5)
    rlwinm. r0, r5, 0, 24, 24
    clrlwi r0, r5, 25
    or r3, r3, r0
    bne lbl_fn_80710460_00000A14
    b lbl_fn_80710460_00000AEC
lbl_fn_80710460_00000A3C:
    lwz r3, 0x0(r4)
    addi r0, r3, 0x1
    stw r0, 0x0(r4)
    lbz r4, 0x0(r3)
    cmpwi r4, 0x20
    bge lbl_fn_80710460_00000A60
    mr r3, r5
    bl fn_807125D0
    b lbl_fn_80710460_00000A7C
lbl_fn_80710460_00000A60:
    cmpwi r4, 0x30
    bge lbl_fn_80710460_00000A78
    mr r3, r6
    subi r4, r4, 0x20
    bl fn_80714500
    b lbl_fn_80710460_00000A7C
lbl_fn_80710460_00000A78:
    li r3, 0x0
lbl_fn_80710460_00000A7C:
    cmpwi r3, 0x0
    beq lbl_fn_80710460_00000AEC
    lha r3, 0x0(r3)
    b lbl_fn_80710460_00000AEC
lbl_fn_80710460_00000A8C:
    lwz r5, 0x0(r4)
    addi r7, r5, 0x1
    stw r7, 0x0(r4)
    addi r3, r7, 0x1
    lbz r6, 0x0(r5)
    addi r5, r3, 0x1
    addi r0, r5, 0x1
    stw r3, 0x0(r4)
    lbz r7, 0x0(r7)
    rlwimi r7, r6, 8, 16, 23
    stw r5, 0x0(r4)
    extsh r30, r7
    lbz r3, 0x0(r3)
    stw r0, 0x0(r4)
    lbz r31, 0x0(r5)
    rlwimi r31, r3, 8, 16, 23
    bl fn_807210F0
    extsh r0, r31
    clrlwi r4, r3, 16
    subf r3, r30, r0
    addi r0, r3, 0x1
    mullw r4, r4, r0
    srawi r4, r4, 16
    add r3, r4, r30
lbl_fn_80710460_00000AEC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_807105D0(void)
{
    nofralloc
    lbzx r0, r4, r3
    add r6, r4, r3
    cmplwi r0, 0xfe
    beq lbl_fn_807105D0_00000B24
    li r0, 0x1
    stw r0, 0x0(r5)
    mr r3, r4
    blr
lbl_fn_807105D0_00000B24:
    lbz r7, 0x1(r6)
    addi r3, r4, 0x3
    lbz r0, 0x2(r6)
    slwi r7, r7, 8
    or r7, r7, r0
    stw r7, 0x0(r5)
    blr
}

asm void fn_80710610(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_807134E0
    lis r4, lbl_807C6180@ha
    mr r3, r31
    addi r4, r4, lbl_807C6180@l
    stw r4, 0x0(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80710650(void)
{
    nofralloc
    mr r0, r3
    lwz r3, 0xcc(r3)
    mr r5, r4
    mr r4, r0
    b fn_8070F440
}

asm void fn_80710670(void)
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
    beq lbl_fn_80710670_00000BE0
    li r4, 0x0
    bl fn_80713580
    cmpwi r31, 0x0
    ble lbl_fn_80710670_00000BE0
    mr r3, r30
    bl dtor_80084684
lbl_fn_80710670_00000BE0:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_807106D0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    addi r3, r3, 0x8
    bl fn_8070F0D0
    cmpwi r3, 0x0
    bne lbl_fn_807106D0_00000C38
    li r3, 0x0
    b lbl_fn_807106D0_00000C40
lbl_fn_807106D0_00000C38:
    beq lbl_fn_807106D0_00000C40
    bl fn_80710610
lbl_fn_807106D0_00000C40:
    cmpwi r3, 0x0
    beq lbl_fn_807106D0_00000C54
    stw r31, 0xc4(r3)
    lwz r0, 0x4(r30)
    stw r0, 0xcc(r3)
lbl_fn_807106D0_00000C54:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80710740(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    stw r0, 0xc4(r4)
    beq lbl_fn_80710740_00000CC4
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, -0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    mr r4, r31
    addi r3, r30, 0x8
    bl fn_8070F130
lbl_fn_80710740_00000CC4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_807107B0(void)
{
    nofralloc
    li r6, 0xd0
    addi r3, r3, 0x8
    b fn_8070EE90
}

asm void fn_807107C0(void)
{
    nofralloc
    addi r3, r3, 0x8
    b fn_8070EFE0
}

asm void fn_807107D0(void)
{
    nofralloc
    addi r3, r3, 0x8
    b fn_8070F070
}

asm void fn_807107E0(void)
{
    nofralloc
    lis r4, lbl_807C61A8@ha
    li r0, 0x0
    addi r4, r4, lbl_807C61A8@l
    stw r4, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
    stw r0, 0x10(r3)
    stw r0, 0x14(r3)
    stw r0, 0x18(r3)
    stw r0, 0x1c(r3)
    blr
}

asm void fn_80710810(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_fn_80710810_00000DE8
    lis r4, lbl_807C61A8@ha
    addi r4, r4, lbl_807C61A8@l
    stw r4, 0x0(r3)
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    lwz r31, 0xc(r29)
    bl fn_8070C650
    lwz r0, 0x14(r29)
    mr r4, r31
    li r6, 0x0
    subf r5, r31, r0
    bl fn_8070C780
    lwz r31, 0xc(r29)
    bl fn_8070C650
    lwz r0, 0x14(r29)
    mr r4, r31
    li r6, 0x0
    subf r5, r31, r0
    bl fn_8070C8B0
    lwz r0, 0xc(r29)
    stw r0, 0x14(r29)
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    cmpwi r30, 0x0
    li r0, 0x0
    stw r0, 0x14(r29)
    ble lbl_fn_80710810_00000DE8
    mr r3, r29
    bl dtor_80084684
lbl_fn_80710810_00000DE8:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_807108E0(void)
{
    nofralloc
    addi r0, r4, 0x1f
    add r4, r5, r4
    clrrwi r0, r0, 5
    cmplw r0, r4
    ble lbl_fn_807108E0_00000E30
    li r3, 0x0
    blr
lbl_fn_807108E0_00000E30:
    stw r0, 0xc(r3)
    stw r4, 0x10(r3)
    stw r0, 0x14(r3)
    li r3, 0x1
    blr
}

asm void fn_80710910(void)
{
    nofralloc
    lwz r5, 0x14(r3)
    lwz r0, 0x10(r3)
    add r4, r4, r5
    cmplw r4, r0
    ble lbl_fn_80710910_00000E60
    li r3, 0x0
    blr
lbl_fn_80710910_00000E60:
    addi r0, r4, 0x1f
    clrrwi r0, r0, 5
    stw r0, 0x14(r3)
    mr r3, r5
    blr
}

asm void fn_80710940(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    lwz r31, 0xc(r30)
    bl fn_8070C650
    lwz r0, 0x14(r30)
    mr r4, r31
    li r6, 0x0
    subf r5, r31, r0
    bl fn_8070C780
    lwz r31, 0xc(r30)
    bl fn_8070C650
    lwz r0, 0x14(r30)
    mr r4, r31
    li r6, 0x0
    subf r5, r31, r0
    bl fn_8070C8B0
    lwz r0, 0xc(r30)
    stw r0, 0x14(r30)
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_807109D0(void)
{
    nofralloc
    lwz r4, 0x14(r3)
    lwz r0, 0x10(r3)
    subf r3, r4, r0
    blr
}

asm void fn_807109E0(void)
{
    nofralloc
    stw r4, 0x4(r3)
    blr
}

asm void fn_807109F0(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x4(r3)
    blr
}

asm void fn_80710A00(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r31, 0xc(r1)
    mr r31, r3
    stb r0, 0x0(r3)
    stb r0, 0x1(r3)
    stb r0, 0x2(r3)
    stb r0, 0x3(r3)
    stb r0, 0x4(r3)
    stb r0, 0x5(r3)
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
    stw r0, 0x10(r3)
    stw r0, 0x38(r3)
    addi r3, r3, 0x40
    bl OSCreateAlarm
    mr r4, r31
    addi r3, r31, 0x40
    bl fn_805EC870
    addi r3, r31, 0x70
    bl OSCreateAlarm
    mr r4, r31
    addi r3, r31, 0x70
    bl fn_805EC870
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80710A80(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    bl OSDisableInterrupts
    li r30, 0x0
    stb r30, 0x1(r28)
    mr r31, r3
    addi r3, r28, 0x40
    stb r30, 0x2(r28)
    bl OSCancelAlarm
    stb r30, 0x6(r28)
    addi r3, r28, 0x70
    bl OSCancelAlarm
    lwz r12, 0x38(r28)
    li r0, 0x1
    stb r30, 0x7(r28)
    cmpwi r12, 0x0
    stb r30, 0x6(r28)
    stb r30, 0x1(r28)
    stb r0, 0x2(r28)
    stb r30, 0x7(r28)
    beq lbl_fn_80710A80_00001038
    lwz r3, 0x34(r28)
    li r4, 0x0
    mtctr r12
    bctrl
    stb r30, 0x4(r28)
lbl_fn_80710A80_00001038:
    li r0, 0x1
    stw r0, 0xc(r28)
    mr r3, r31
    stw r29, 0x38(r28)
    stb r0, 0x0(r28)
    bl OSRestoreInterrupts
    lwz r31, 0x1c(r1)
    li r3, 0x1
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80710B40(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    bl OSDisableInterrupts
    li r30, 0x0
    stb r30, 0x1(r28)
    mr r31, r3
    addi r3, r28, 0x40
    stb r30, 0x2(r28)
    bl OSCancelAlarm
    stb r30, 0x6(r28)
    addi r3, r28, 0x70
    bl OSCancelAlarm
    lwz r12, 0x38(r28)
    stb r30, 0x7(r28)
    cmpwi r12, 0x0
    beq lbl_fn_80710B40_000010E4
    lwz r3, 0x34(r28)
    li r4, 0x0
    mtctr r12
    bctrl
    stb r30, 0x4(r28)
lbl_fn_80710B40_000010E4:
    li r3, 0x3
    li r0, 0x0
    stw r3, 0xc(r28)
    mr r3, r31
    stw r29, 0x38(r28)
    stb r0, 0x0(r28)
    bl OSRestoreInterrupts
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80710BF0(void)
{
    nofralloc
    lbz r0, 0x5(r3)
    cmpwi r0, 0x0
    bnelr
    lwz r4, 0xc(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80710BF0_00001140
    b lbl_fn_80710BF0_00001144
lbl_fn_80710BF0_00001140:
    lwz r4, 0x10(r3)
lbl_fn_80710BF0_00001144:
    li r0, 0x0
    stw r0, 0xc(r3)
    stw r0, 0x10(r3)
    b fn_80710C30
    blr
}

asm void fn_80710C30(void)
{
    nofralloc
    cmpwi r4, 0x1
    beq lbl_fn_80710C30_00001180
    cmpwi r4, 0x2
    beq lbl_fn_80710C30_000011A4
    cmpwi r4, 0x3
    beq lbl_fn_80710C30_000011CC
    blr
lbl_fn_80710C30_00001180:
    li r0, 0x1
    lis r5, fn_80710FE0@ha
    stb r0, 0x4(r3)
    addi r5, r5, fn_80710FE0@l
    li r4, 0x1
    stb r0, 0x5(r3)
    stw r0, 0x8(r3)
    lwz r3, 0x34(r3)
    b fn_80661B60
lbl_fn_80710C30_000011A4:
    li r6, 0x1
    li r0, 0x3
    lis r5, fn_807110F0@ha
    stb r6, 0x4(r3)
    addi r5, r5, fn_807110F0@l
    li r4, 0x4
    stb r6, 0x5(r3)
    stw r0, 0x8(r3)
    lwz r3, 0x34(r3)
    b fn_80661B60
lbl_fn_80710C30_000011CC:
    li r6, 0x1
    li r0, 0x5
    lis r5, fn_807111E0@ha
    stb r6, 0x4(r3)
    addi r5, r5, fn_807111E0@l
    li r4, 0x0
    stb r6, 0x5(r3)
    stw r0, 0x8(r3)
    lwz r3, 0x34(r3)
    b fn_80661B60
    blr
}

asm void fn_80710CD0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_25
    lwz r0, 0x8(r3)
    mr r29, r3
    mr r25, r4
    cmpwi r0, 0x4
    bne lbl_fn_80710CD0_000014F4
    lbz r0, 0x2(r3)
    li r30, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_80710CD0_0000132C
    li r0, 0x2
    mr r6, r25
    li r5, 0x1
    li r4, 0x0
    mtctr r0
    nop
lbl_fn_80710CD0_00001254:
    lwz r0, 0x0(r6)
    cmpwi r0, 0x0
    beq lbl_fn_80710CD0_00001268
    li r5, 0x0
    b lbl_fn_80710CD0_00001330
lbl_fn_80710CD0_00001268:
    lwz r0, 0x4(r6)
    cmpwi r0, 0x0
    beq lbl_fn_80710CD0_0000127C
    li r5, 0x0
    b lbl_fn_80710CD0_00001330
lbl_fn_80710CD0_0000127C:
    lwz r0, 0x8(r6)
    cmpwi r0, 0x0
    beq lbl_fn_80710CD0_00001290
    li r5, 0x0
    b lbl_fn_80710CD0_00001330
lbl_fn_80710CD0_00001290:
    lwz r0, 0xc(r6)
    cmpwi r0, 0x0
    beq lbl_fn_80710CD0_000012A4
    li r5, 0x0
    b lbl_fn_80710CD0_00001330
lbl_fn_80710CD0_000012A4:
    lwz r0, 0x10(r6)
    cmpwi r0, 0x0
    beq lbl_fn_80710CD0_000012B8
    li r5, 0x0
    b lbl_fn_80710CD0_00001330
lbl_fn_80710CD0_000012B8:
    lwz r0, 0x14(r6)
    cmpwi r0, 0x0
    beq lbl_fn_80710CD0_000012CC
    li r5, 0x0
    b lbl_fn_80710CD0_00001330
lbl_fn_80710CD0_000012CC:
    lwz r0, 0x18(r6)
    cmpwi r0, 0x0
    beq lbl_fn_80710CD0_000012E0
    li r5, 0x0
    b lbl_fn_80710CD0_00001330
lbl_fn_80710CD0_000012E0:
    lwz r0, 0x1c(r6)
    cmpwi r0, 0x0
    beq lbl_fn_80710CD0_000012F4
    li r5, 0x0
    b lbl_fn_80710CD0_00001330
lbl_fn_80710CD0_000012F4:
    lwz r0, 0x20(r6)
    cmpwi r0, 0x0
    beq lbl_fn_80710CD0_00001308
    li r5, 0x0
    b lbl_fn_80710CD0_00001330
lbl_fn_80710CD0_00001308:
    lwz r0, 0x24(r6)
    cmpwi r0, 0x0
    beq lbl_fn_80710CD0_0000131C
    li r5, 0x0
    b lbl_fn_80710CD0_00001330
lbl_fn_80710CD0_0000131C:
    addi r6, r6, 0x28
    addi r4, r4, 0x9
    bdnz lbl_fn_80710CD0_00001254
    b lbl_fn_80710CD0_00001330
lbl_fn_80710CD0_0000132C:
    li r5, 0x1
lbl_fn_80710CD0_00001330:
    cmpwi r5, 0x0
    beq lbl_fn_80710CD0_0000133C
    li r30, 0x0
lbl_fn_80710CD0_0000133C:
    lbz r0, 0x1(r3)
    li r26, 0x0
    cmpwi r0, 0x0
    bne lbl_fn_80710CD0_00001358
    cmpwi r30, 0x0
    beq lbl_fn_80710CD0_00001358
    li r26, 0x1
lbl_fn_80710CD0_00001358:
    cmpwi r0, 0x0
    li r31, 0x0
    beq lbl_fn_80710CD0_00001370
    cmpwi r30, 0x0
    bne lbl_fn_80710CD0_00001370
    li r31, 0x1
lbl_fn_80710CD0_00001370:
    cmpwi r30, 0x0
    beq lbl_fn_80710CD0_0000142C
    bl OSDisableInterrupts
    mr r28, r3
    lwz r3, 0x34(r29)
    bl fn_80663330
    cmpwi r3, 0x0
    bne lbl_fn_80710CD0_0000139C
    mr r3, r28
    bl OSRestoreInterrupts
    b lbl_fn_80710CD0_000014F4
lbl_fn_80710CD0_0000139C:
    lbz r0, 0x3(r29)
    li r27, 0x0
    mr r5, r25
    addi r3, r29, 0x14
    cntlzw r0, r0
    stb r27, 0x3(r29)
    srwi r4, r0, 5
    addi r7, r1, 0x8
    li r6, 0x28
    bl fn_80625910
    lwz r3, 0x34(r29)
    addi r4, r1, 0x8
    li r5, 0x14
    bl fn_806633C0
    cmpwi r3, 0x0
    beq lbl_fn_80710CD0_00001424
    li r30, 0x1
    stw r30, 0x10(r29)
    addi r3, r29, 0x40
    stw r27, 0x8(r29)
    stb r27, 0x1(r29)
    stb r27, 0x2(r29)
    bl OSCancelAlarm
    stb r27, 0x6(r29)
    addi r3, r29, 0x70
    bl OSCancelAlarm
    stb r27, 0x7(r29)
    mr r3, r28
    stb r27, 0x6(r29)
    stb r27, 0x1(r29)
    stb r30, 0x2(r29)
    stb r27, 0x7(r29)
    bl OSRestoreInterrupts
    b lbl_fn_80710CD0_000014F4
lbl_fn_80710CD0_00001424:
    mr r3, r28
    bl OSRestoreInterrupts
lbl_fn_80710CD0_0000142C:
    cmpwi r26, 0x0
    beq lbl_fn_80710CD0_000014A8
    bl OSDisableInterrupts
    lbz r0, 0x6(r29)
    mr r28, r3
    cmpwi r0, 0x0
    bne lbl_fn_80710CD0_00001490
    lis r3, 0x8000
    lis r7, fn_807112D0@ha
    lwz r0, 0xf8(r3)
    li r4, 0x1e0
    li r5, 0x0
    addi r3, r29, 0x40
    srwi r6, r0, 2
    addi r7, r7, fn_807112D0@l
    mulhwu r0, r6, r4
    mullw r4, r5, r4
    mulli r6, r6, 0x1e0
    add r5, r0, r4
    bl OSSetAlarm
    bl OSGetTime
    li r0, 0x1
    stw r4, 0xa4(r29)
    stw r3, 0xa0(r29)
    stb r0, 0x6(r29)
lbl_fn_80710CD0_00001490:
    addi r3, r29, 0x70
    bl OSCancelAlarm
    li r0, 0x0
    stb r0, 0x7(r29)
    mr r3, r28
    bl OSRestoreInterrupts
lbl_fn_80710CD0_000014A8:
    cmpwi r31, 0x0
    beq lbl_fn_80710CD0_000014F0
    bl OSDisableInterrupts
    li r0, 0x1
    stb r0, 0x7(r29)
    mr r28, r3
    addi r3, r29, 0x70
    bl OSCancelAlarm
    lis r3, 0x8000
    lis r7, fn_80711320@ha
    lwz r0, 0xf8(r3)
    addi r3, r29, 0x70
    addi r7, r7, fn_80711320@l
    li r5, 0x0
    srwi r6, r0, 2
    bl OSSetAlarm
    mr r3, r28
    bl OSRestoreInterrupts
lbl_fn_80710CD0_000014F0:
    stb r30, 0x1(r29)
lbl_fn_80710CD0_000014F4:
    addi r11, r1, 0x40
    bl _restgpr_25
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80710FE0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bl fn_80711390
    mr r4, r29
    bl fn_80711430
    cmpwi r30, 0x0
    mr r31, r3
    beq lbl_fn_80710FE0_00001568
    cmpwi r30, -0x2
    beq lbl_fn_80710FE0_00001590
    cmpwi r30, -0x3
    beq lbl_fn_80710FE0_0000159C
    cmpwi r30, -0x1
    beq lbl_fn_80710FE0_000015A8
    b lbl_fn_80710FE0_000015B4
lbl_fn_80710FE0_00001568:
    li r0, 0x1
    stb r0, 0x3(r3)
    li r4, 0x0
    li r5, 0x20
    addi r3, r3, 0x14
    bl memset
    li r0, 0x2
    stw r0, 0x8(r31)
    stw r0, 0x10(r31)
    b lbl_fn_80710FE0_000015BC
lbl_fn_80710FE0_00001590:
    li r0, 0x1
    stw r0, 0x10(r3)
    b lbl_fn_80710FE0_000015BC
lbl_fn_80710FE0_0000159C:
    li r0, 0x0
    stw r0, 0x8(r3)
    b lbl_fn_80710FE0_000015BC
lbl_fn_80710FE0_000015A8:
    li r0, 0x0
    stw r0, 0x8(r3)
    b lbl_fn_80710FE0_000015BC
lbl_fn_80710FE0_000015B4:
    li r0, 0x0
    stw r0, 0x8(r3)
lbl_fn_80710FE0_000015BC:
    cmpwi r30, 0x0
    beq lbl_fn_80710FE0_000015FC
    cmpwi r30, -0x2
    beq lbl_fn_80710FE0_000015FC
    lbz r0, 0x4(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80710FE0_000015FC
    lwz r12, 0x38(r31)
    cmpwi r12, 0x0
    beq lbl_fn_80710FE0_000015FC
    mr r3, r29
    mr r4, r30
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x38(r31)
lbl_fn_80710FE0_000015FC:
    li r0, 0x0
    stb r0, 0x5(r31)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_807110F0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bl fn_80711390
    mr r4, r29
    bl fn_80711430
    cmpwi r30, 0x0
    mr r31, r3
    beq lbl_fn_807110F0_00001678
    cmpwi r30, -0x2
    beq lbl_fn_807110F0_00001684
    cmpwi r30, -0x3
    beq lbl_fn_807110F0_00001690
    cmpwi r30, -0x1
    beq lbl_fn_807110F0_0000169C
    b lbl_fn_807110F0_000016A8
lbl_fn_807110F0_00001678:
    li r0, 0x4
    stw r0, 0x8(r3)
    b lbl_fn_807110F0_000016B0
lbl_fn_807110F0_00001684:
    li r0, 0x2
    stw r0, 0x10(r3)
    b lbl_fn_807110F0_000016B0
lbl_fn_807110F0_00001690:
    li r0, 0x0
    stw r0, 0x8(r3)
    b lbl_fn_807110F0_000016B0
lbl_fn_807110F0_0000169C:
    li r0, 0x0
    stw r0, 0x8(r3)
    b lbl_fn_807110F0_000016B0
lbl_fn_807110F0_000016A8:
    li r0, 0x0
    stw r0, 0x8(r3)
lbl_fn_807110F0_000016B0:
    cmpwi r30, -0x2
    beq lbl_fn_807110F0_000016E8
    lbz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_807110F0_000016E8
    lwz r12, 0x38(r3)
    cmpwi r12, 0x0
    beq lbl_fn_807110F0_000016E8
    mr r3, r29
    mr r4, r30
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x38(r31)
lbl_fn_807110F0_000016E8:
    li r0, 0x0
    stb r0, 0x5(r31)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_807111E0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bl fn_80711390
    mr r4, r29
    bl fn_80711430
    cmpwi r30, 0x0
    mr r31, r3
    beq lbl_fn_807111E0_00001768
    cmpwi r30, -0x2
    beq lbl_fn_807111E0_00001774
    cmpwi r30, -0x3
    beq lbl_fn_807111E0_00001780
    cmpwi r30, -0x1
    beq lbl_fn_807111E0_0000178C
    b lbl_fn_807111E0_00001798
lbl_fn_807111E0_00001768:
    li r0, 0x6
    stw r0, 0x8(r3)
    b lbl_fn_807111E0_000017A0
lbl_fn_807111E0_00001774:
    li r0, 0x3
    stw r0, 0x10(r3)
    b lbl_fn_807111E0_000017A0
lbl_fn_807111E0_00001780:
    li r0, 0x0
    stw r0, 0x8(r3)
    b lbl_fn_807111E0_000017A0
lbl_fn_807111E0_0000178C:
    li r0, 0x0
    stw r0, 0x8(r3)
    b lbl_fn_807111E0_000017A0
lbl_fn_807111E0_00001798:
    li r0, 0x0
    stw r0, 0x8(r3)
lbl_fn_807111E0_000017A0:
    cmpwi r30, -0x2
    beq lbl_fn_807111E0_000017D8
    lbz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_807111E0_000017D8
    lwz r12, 0x38(r3)
    cmpwi r12, 0x0
    beq lbl_fn_807111E0_000017D8
    mr r3, r29
    mr r4, r30
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x38(r31)
lbl_fn_807111E0_000017D8:
    li r0, 0x0
    stb r0, 0x5(r31)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_807112D0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl OSDisableInterrupts
    mr r31, r3
    mr r3, r30
    bl OSGetAlarmUserData
    mr r3, r31
    bl OSRestoreInterrupts
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80711320(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl OSDisableInterrupts
    mr r31, r3
    mr r3, r30
    bl OSGetAlarmUserData
    lbz r0, 0x7(r3)
    mr r30, r3
    cmpwi r0, 0x0
    beq lbl_fn_80711320_0000189C
    addi r3, r3, 0x40
    bl OSCancelAlarm
    li r0, 0x0
    stb r0, 0x6(r30)
lbl_fn_80711320_0000189C:
    li r0, 0x0
    stb r0, 0x7(r30)
    mr r3, r31
    bl OSRestoreInterrupts
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80711390(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    lbz r0, lbl_808804D0
    extsb. r0, r0
    bne lbl_fn_80711390_00001938
    lis r3, lbl_80862FB0@ha
    li r0, 0x0
    addi r30, r3, lbl_80862FB0@l
    stb r0, lbl_80862FB0@l(r3)
    addi r29, r30, 0x38
    addi r31, r30, 0x2d8
lbl_fn_80711390_00001900:
    mr r3, r29
    bl fn_80710A00
    addi r29, r29, 0xa8
    cmplw r29, r31
    blt lbl_fn_80711390_00001900
    li r4, 0x1
    li r5, 0x0
    li r3, 0x2
    li r0, 0x3
    stw r5, 0x6c(r30)
    stw r4, 0x114(r30)
    stw r3, 0x1bc(r30)
    stw r0, 0x264(r30)
    stb r4, lbl_808804D0
lbl_fn_80711390_00001938:
    lwz r31, 0x1c(r1)
    lis r3, lbl_80862FB0@ha
    lwz r30, 0x18(r1)
    addi r3, r3, lbl_80862FB0@l
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80711430(void)
{
    nofralloc
    mulli r0, r4, 0xa8
    add r3, r3, r0
    addi r3, r3, 0x38
    blr
}

asm void fn_80711440(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lbz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80711440_000019FC
    addi r3, r3, 0x8
    bl OSCreateAlarm
    bl OSGetTime
    lis r6, 0x8000
    lis r5, 0x431c
    lwz r0, 0xf8(r6)
    lis r6, 0x1062
    addi r10, r6, 0x4dd3
    lis r9, fn_80711530@ha
    srwi r0, r0, 2
    subi r5, r5, 0x217d
    mulhwu r8, r5, r0
    lis r7, 0x66
    mr r6, r4
    subi r0, r7, 0x4655
    mr r5, r3
    addi r3, r31, 0x8
    srwi r4, r8, 15
    addi r9, r9, fn_80711530@l
    mullw r0, r4, r0
    li r7, 0x0
    mulhwu r0, r10, r0
    srwi r8, r0, 9
    bl fn_805EC3B0
    li r0, 0x1
    stb r0, 0x0(r31)
lbl_fn_80711440_000019FC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_807114E0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lbz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_807114E0_00001A44
    addi r3, r3, 0x8
    bl OSCancelAlarm
    li r0, 0x0
    stb r0, 0x0(r31)
lbl_fn_807114E0_00001A44:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80711530(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stw r31, 0x6c(r1)
    stw r30, 0x68(r1)
    stw r29, 0x64(r1)
    lbz r0, lbl_808804D0
    extsb. r0, r0
    bne lbl_fn_80711530_00001AD8
    lis r3, lbl_80862FB0@ha
    li r0, 0x0
    addi r30, r3, lbl_80862FB0@l
    stb r0, lbl_80862FB0@l(r3)
    addi r29, r30, 0x38
    addi r31, r30, 0x2d8
lbl_fn_80711530_00001AA0:
    mr r3, r29
    bl fn_80710A00
    addi r29, r29, 0xa8
    cmplw r29, r31
    blt lbl_fn_80711530_00001AA0
    li r4, 0x1
    li r5, 0x0
    li r3, 0x2
    li r0, 0x3
    stw r5, 0x6c(r30)
    stw r4, 0x114(r30)
    stw r3, 0x1bc(r30)
    stw r0, 0x264(r30)
    stb r4, lbl_808804D0
lbl_fn_80711530_00001AD8:
    lis r30, lbl_80862FB0@ha
    addi r30, r30, lbl_80862FB0@l
    bl fn_80609D50
    cmpwi r3, 0x28
    blt lbl_fn_80711530_00001B40
    addi r29, r30, 0x38
    li r31, 0x0
lbl_fn_80711530_00001AF4:
    lwz r0, 0x40(r30)
    cmpwi r0, 0x4
    bne lbl_fn_80711530_00001B1C
    mr r3, r31
    addi r4, r1, 0x8
    li r5, 0x28
    bl fn_80609D80
    mr r3, r29
    addi r4, r1, 0x8
    bl fn_80710CD0
lbl_fn_80711530_00001B1C:
    mr r3, r29
    bl fn_80710BF0
    addi r31, r31, 0x1
    addi r29, r29, 0xa8
    cmpwi r31, 0x4
    addi r30, r30, 0xa8
    blt lbl_fn_80711530_00001AF4
    li r3, 0x28
    bl fn_80609E50
lbl_fn_80711530_00001B40:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    lwz r29, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_80711630(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    lwz r5, 0x0(r4)
    subis r0, r5, 0x5253
    cmplwi r0, 0x4551
    beq lbl_fn_80711630_00001B88
    li r0, 0x0
    b lbl_fn_80711630_00001BB4
lbl_fn_80711630_00001B88:
    lhz r6, 0x6(r4)
    cmplwi r6, 0x100
    bge lbl_fn_80711630_00001B9C
    li r0, 0x0
    b lbl_fn_80711630_00001BB4
lbl_fn_80711630_00001B9C:
    subfic r0, r6, 0x100
    li r5, 0x100
    orc r5, r5, r6
    srwi r0, r0, 1
    subf r0, r0, r5
    srwi r0, r0, 31
lbl_fn_80711630_00001BB4:
    cmpwi r0, 0x0
    beqlr
    stw r4, 0x0(r3)
    lwz r0, 0x10(r4)
    add r0, r0, r4
    stw r0, 0x4(r3)
    blr
}

asm void fn_807116A0(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    lwz r0, 0x8(r3)
    add r3, r0, r3
    blr
}

asm void fn_807116B0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    lwz r3, 0x0(r3)
    mr r24, r4
    mr r25, r5
    lwz r0, 0x18(r3)
    add. r28, r0, r3
    bne lbl_fn_807116B0_00001C18
    li r3, 0x0
    b lbl_fn_807116B0_00001C84
lbl_fn_807116B0_00001C18:
    mr r3, r24
    bl strlen
    lwz r30, 0x8(r28)
    mr r27, r3
    mr r29, r28
    li r26, 0x0
    b lbl_fn_807116B0_00001C78
lbl_fn_807116B0_00001C34:
    lwz r0, 0xc(r29)
    add r31, r28, r0
    lwz r0, 0xc(r31)
    cmplw r27, r0
    bne lbl_fn_807116B0_00001C70
    mr r3, r24
    mr r5, r27
    addi r4, r31, 0x10
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_807116B0_00001C70
    lwz r0, 0x8(r31)
    li r3, 0x1
    stw r0, 0x0(r25)
    b lbl_fn_807116B0_00001C84
lbl_fn_807116B0_00001C70:
    addi r29, r29, 0x4
    addi r26, r26, 0x1
lbl_fn_807116B0_00001C78:
    cmplw r26, r30
    blt lbl_fn_807116B0_00001C34
    li r3, 0x0
lbl_fn_807116B0_00001C84:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80711770(void)
{
    nofralloc
    lis r3, lbl_80863288@ha
    li r0, -0x1
    sthu r0, lbl_80863288@l(r3)
    sth r0, 0x2(r3)
    sth r0, 0x4(r3)
    sth r0, 0x6(r3)
    sth r0, 0x8(r3)
    sth r0, 0xa(r3)
    sth r0, 0xc(r3)
    sth r0, 0xe(r3)
    sth r0, 0x10(r3)
    sth r0, 0x12(r3)
    sth r0, 0x14(r3)
    sth r0, 0x16(r3)
    sth r0, 0x18(r3)
    sth r0, 0x1a(r3)
    sth r0, 0x1c(r3)
    sth r0, 0x1e(r3)
    blr
}

asm void fn_807117C0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80709700
    lis r9, lbl_807C61B8@ha
    li r10, 0x0
    addi r9, r9, lbl_807C61B8@l
    lfs f1, lbl_80889190
    lfs f0, lbl_80889194
    addi r8, r9, 0x24
    addi r7, r9, 0x38
    li r6, 0x78
    li r5, 0x30
    li r4, 0x7f
    li r3, 0x40
    stw r10, 0xb4(r31)
    li r0, -0x1
    stw r10, 0xb8(r31)
    stw r10, 0xc0(r31)
    stw r10, 0xc4(r31)
    stw r9, 0x0(r31)
    stw r8, 0xbc(r31)
    stw r7, 0xc8(r31)
    stb r10, 0xcc(r31)
    stb r10, 0xcd(r31)
    stb r10, 0xce(r31)
    stb r10, 0xcf(r31)
    stfs f1, 0xd4(r31)
    stfs f0, 0xd8(r31)
    stw r10, 0xdc(r31)
    stfs f0, 0xe0(r31)
    stfs f1, 0xd0(r31)
    stw r10, 0x160(r31)
    stw r10, 0xe4(r31)
    stw r10, 0xf8(r31)
    stw r10, 0xfc(r31)
    sth r6, 0xec(r31)
    stb r5, 0xea(r31)
    stb r4, 0xe8(r31)
    stb r3, 0xe9(r31)
    stw r10, 0xf0(r31)
    sth r0, 0x140(r31)
    sth r0, 0x142(r31)
    sth r0, 0x144(r31)
    sth r0, 0x146(r31)
    sth r0, 0x148(r31)
    sth r0, 0x14a(r31)
    sth r0, 0x14c(r31)
    sth r0, 0x14e(r31)
    sth r0, 0x150(r31)
    sth r0, 0x152(r31)
    sth r0, 0x154(r31)
    sth r0, 0x156(r31)
    sth r0, 0x158(r31)
    sth r0, 0x15a(r31)
    sth r0, 0x15c(r31)
    sth r0, 0x15e(r31)
    li r0, 0x0
    stw r0, 0x100(r31)
    mr r3, r31
    stw r0, 0x104(r31)
    stw r0, 0x108(r31)
    stw r0, 0x10c(r31)
    stw r0, 0x110(r31)
    stw r0, 0x114(r31)
    stw r0, 0x118(r31)
    stw r0, 0x11c(r31)
    stw r0, 0x120(r31)
    stw r0, 0x124(r31)
    stw r0, 0x128(r31)
    stw r0, 0x12c(r31)
    stw r0, 0x130(r31)
    stw r0, 0x134(r31)
    stw r0, 0x138(r31)
    stw r0, 0x13c(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80711910(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    cmpwi r3, 0x0
    mr r27, r3
    mr r28, r4
    beq lbl_fn_80711910_00001FB0
    lis r5, lbl_807C61B8@ha
    addi r5, r5, lbl_807C61B8@l
    stw r5, 0x0(r3)
    addi r4, r5, 0x24
    addi r0, r5, 0x38
    stw r4, 0xbc(r3)
    stw r0, 0xc8(r3)
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    lbz r0, 0xcd(r27)
    cmpwi r0, 0x0
    beq lbl_fn_80711910_00001ECC
    cmpwi r27, 0x0
    mr r30, r27
    beq lbl_fn_80711910_00001EB8
    addi r30, r27, 0xc0
lbl_fn_80711910_00001EB8:
    bl fn_807187D0
    mr r4, r30
    bl fn_80718D70
    li r0, 0x0
    stb r0, 0xcd(r27)
lbl_fn_80711910_00001ECC:
    lbz r0, 0xcc(r27)
    cmpwi r0, 0x0
    beq lbl_fn_80711910_00001EFC
    cmpwi r27, 0x0
    mr r30, r27
    beq lbl_fn_80711910_00001EE8
    addi r30, r27, 0xb4
lbl_fn_80711910_00001EE8:
    bl fn_8070C650
    mr r4, r30
    bl fn_8070C770
    li r0, 0x0
    stb r0, 0xcc(r27)
lbl_fn_80711910_00001EFC:
    li r30, 0x0
    li r29, 0x0
    li r31, 0x0
lbl_fn_80711910_00001F08:
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    cmpwi r30, 0xf
    ble lbl_fn_80711910_00001F24
    li r3, 0x0
    b lbl_fn_80711910_00001F2C
lbl_fn_80711910_00001F24:
    add r3, r27, r29
    lwz r3, 0x100(r3)
lbl_fn_80711910_00001F2C:
    cmpwi r3, 0x0
    bne lbl_fn_80711910_00001F44
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    b lbl_fn_80711910_00001F78
lbl_fn_80711910_00001F44:
    bl fn_80713850
    lwz r3, 0xf4(r27)
    add r4, r27, r29
    lwz r4, 0x100(r4)
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    add r3, r27, r29
    stw r31, 0x100(r3)
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
lbl_fn_80711910_00001F78:
    addi r30, r30, 0x1
    addi r29, r29, 0x4
    cmpwi r30, 0x10
    blt lbl_fn_80711910_00001F08
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    cmpwi r28, 0x0
    ble lbl_fn_80711910_00001FB0
    mr r3, r27
    bl dtor_80084684
lbl_fn_80711910_00001FB0:
    addi r11, r1, 0x20
    mr r3, r27
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80711AA0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bl fn_807097C0
    lfs f1, lbl_80889190
    li r7, 0x0
    lfs f0, lbl_80889194
    li r6, 0x78
    li r5, 0x30
    li r4, 0x7f
    li r3, 0x40
    stb r7, 0xcd(r29)
    li r0, -0x1
    stb r7, 0xce(r29)
    stfs f1, 0xd4(r29)
    stw r7, 0xdc(r29)
    stfs f0, 0xe0(r29)
    stfs f1, 0xd0(r29)
    stw r7, 0x160(r29)
    stw r30, 0xe4(r29)
    sth r6, 0xec(r29)
    stb r5, 0xea(r29)
    stb r4, 0xe8(r29)
    stb r3, 0xe9(r29)
    stw r31, 0xf0(r29)
    stfs f0, 0xd8(r29)
    sth r0, 0x140(r29)
    sth r0, 0x142(r29)
    sth r0, 0x144(r29)
    sth r0, 0x146(r29)
    sth r0, 0x148(r29)
    sth r0, 0x14a(r29)
    sth r0, 0x14c(r29)
    sth r0, 0x14e(r29)
    sth r0, 0x150(r29)
    sth r0, 0x152(r29)
    sth r0, 0x154(r29)
    sth r0, 0x156(r29)
    sth r0, 0x158(r29)
    sth r0, 0x15a(r29)
    sth r0, 0x15c(r29)
    sth r0, 0x15e(r29)
    li r0, 0x0
    stw r0, 0x100(r29)
    stw r0, 0x104(r29)
    stw r0, 0x108(r29)
    stw r0, 0x10c(r29)
    stw r0, 0x110(r29)
    stw r0, 0x114(r29)
    stw r0, 0x118(r29)
    stw r0, 0x11c(r29)
    stw r0, 0x120(r29)
    stw r0, 0x124(r29)
    stw r0, 0x128(r29)
    stw r0, 0x12c(r29)
    stw r0, 0x130(r29)
    stw r0, 0x134(r29)
    stw r0, 0x138(r29)
    stw r0, 0x13c(r29)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
