#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void DCFlushRange(void);
extern void __register_global_object(void);
extern void _restgpr_20(void);
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _savegpr_20(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void fn_8005DF90(void);
extern void fn_8005DFC8(void);
extern void fn_80075DEC(void);
extern void fn_80075F58(void);
extern void fn_800763FC(void);
extern void fn_800827E0(void);
extern void fn_800839EC(void);
extern void fn_800A96AC(void);
extern void fn_800A981C(void);
extern void fn_800BFB70(void);
extern void fn_800C0508(void);
extern void fn_800C0D4C(void);
extern void fn_800D5738(void);
extern void fn_800D5808(void);
extern void fn_800D594C(void);
extern void fn_800D5C84(void);
extern void fn_80613960(void);
extern void fn_80613BB0(void);
extern void fn_80614190(void);
extern void fn_80614CC0(void);
extern void fn_80614D30(void);
extern void fn_80615560(void);
extern void fn_80615D20(void);
extern void fn_80615D50(void);
extern void fn_80615E00(void);
extern void fn_80615FF0(void);
extern void fn_80616250(void);
extern void fn_806167B0(void);
extern void fn_80616EF0(void);
extern void fn_80617030(void);
extern void fn_80617130(void);
extern void fn_80617200(void);
extern void fn_80617220(void);
extern void fn_80617270(void);
extern void fn_80617340(void);
extern void fn_806173E0(void);
extern void fn_80617420(void);
extern void fn_80617460(void);
extern void fn_806174C0(void);
extern void fn_806175F0(void);
extern void fn_80617650(void);
extern void fn_806176A0(void);
extern void fn_806176F0(void);
extern void fn_80617730(void);
extern void fn_80617880(void);
extern void fn_806179E0(void);
extern void fn_80617D50(void);
extern void fn_80618420(void);
extern void fn_8068A850(void);
extern void fn_8068AD58(void);

/* External data declarations */
extern u8 lbl_80732B88[];
extern u8 lbl_80732B9C[];
extern u8 lbl_80732BB0[];
extern u8 lbl_80732BB8[];
extern u8 lbl_80732BD4[];
extern u8 lbl_80732BE8[];
extern u8 lbl_80732C00[];
extern u8 lbl_80778D78[];
extern u8 lbl_80778DB8[];
extern u8 lbl_807C7400[];
extern u8 lbl_807C7410[];
extern u8 lbl_807C7440[];

/* Small data declarations */
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EEE0;
extern u32 lbl_8087EF8C;
extern u32 lbl_8087EF90;
extern u32 lbl_8087EF94;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087EFB4;
extern u32 lbl_80880D78;
extern u32 lbl_80880D7C;
extern u32 lbl_80880D80;
extern u32 lbl_80880D84;
extern u32 lbl_80880D88;
extern u32 lbl_80880D8C;
extern u32 lbl_80880D90;
extern u32 lbl_80880D94;
extern u32 lbl_80880D98;
extern u32 lbl_80880D9C;
extern u32 lbl_80880DA0;
extern u32 lbl_80880DA8;
extern u32 lbl_80880DAC;
extern u32 lbl_80880DB0;
extern u32 lbl_80880DB4;
extern u32 lbl_80880DB8;
extern u32 lbl_80880DBC;
extern u32 lbl_80880DC0;
extern u32 lbl_80880DC4;
extern u32 lbl_80880DC8;
extern u32 lbl_80880DCC;

/* Function declarations */
void fn_800AB774(void);
void fn_800ABD84(void);
void fn_800ABD94(void);
void fn_800AC5F4(void);
void fn_800AC6DC(void);
void fn_800ACCB8(void);
void fn_800ACFC8(void);

asm void fn_800AB774(void)
{
    nofralloc
    stwu r1, -0x1d0(r1)
    mflr r0
    stw r0, 0x1d4(r1)
    addi r11, r1, 0x190
    stfd f31, 0x1c0(r1)
    psq_st f31, 0x1c8(r1), 0, 0
    stfd f30, 0x1b0(r1)
    psq_st f30, 0x1b8(r1), 0, 0
    stfd f29, 0x1a0(r1)
    psq_st f29, 0x1a8(r1), 0, 0
    stfd f28, 0x190(r1)
    psq_st f28, 0x198(r1), 0, 0
    bl _savegpr_26
    lis r12, lbl_80732B88@ha
    lwzu r11, lbl_80732B88@l(r12)
    mr r27, r3
    fmr f29, f1
    lwz r10, 0x4(r12)
    fmr f30, f2
    lwz r9, 0x8(r12)
    mr r28, r4
    lwz r3, 0xc(r12)
    lwz r0, 0x10(r12)
    mr r29, r5
    stw r11, 0x30(r1)
    mr r30, r6
    mr r31, r7
    mr r26, r8
    stw r10, 0x34(r1)
    stw r9, 0x38(r1)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    bl fn_806167B0
    lwz r3, lbl_8087EEE0
    mr r6, r29
    mr r7, r30
    li r4, 0x0
    li r5, 0x0
    bl fn_80075F58
    cmpwi r26, 0x0
    bne lbl_fn_800AB774_000000A8
    addi r26, r1, 0x30
lbl_fn_800AB774_000000A8:
    lfs f8, lbl_80880D78
    lis r5, lbl_80732B9C@ha
    lfs f2, 0x0(r26)
    li r0, 0x0
    lwzu r9, lbl_80732B9C@l(r5)
    addi r4, r1, 0xc
    fadds f8, f8, f2
    lfs f1, 0x4(r26)
    lfs f0, lbl_80880D80
    li r3, 0x0
    lwz r8, 0x4(r5)
    fadds f8, f8, f1
    lfs f7, 0x8(r26)
    fmuls f4, f0, f2
    lwz r7, 0x8(r5)
    fmuls f3, f0, f1
    lfs f6, 0xc(r26)
    fadds f8, f8, f7
    lwz r6, 0xc(r5)
    lwz r5, 0x10(r5)
    fmuls f2, f0, f7
    lfs f5, 0x10(r26)
    fmuls f1, f0, f6
    fadds f8, f8, f6
    stw r0, 0x10(r1)
    fmuls f0, f0, f5
    stw r9, 0x1c(r1)
    fadds f8, f8, f5
    lfs f5, lbl_80880D7C
    stw r8, 0x20(r1)
    fdivs f5, f5, f8
    stw r7, 0x24(r1)
    stw r5, 0x2c(r1)
    stw r6, 0x28(r1)
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    fmuls f2, f2, f5
    fctiwz f4, f4
    fmuls f1, f1, f5
    fctiwz f3, f3
    stfd f4, 0x160(r1)
    fctiwz f2, f2
    fctiwz f1, f1
    stfd f4, 0x138(r1)
    lwz r0, 0x164(r1)
    stfd f3, 0x140(r1)
    fmuls f0, f0, f5
    lwz r10, 0x13c(r1)
    stfd f2, 0x148(r1)
    neg r5, r0
    lwz r9, 0x144(r1)
    slwi r0, r5, 2
    stfd f1, 0x150(r1)
    add r5, r0, r5
    lwz r8, 0x14c(r1)
    addi r0, r5, 0xff
    lwz r7, 0x154(r1)
    fctiwz f0, f0
    stb r10, 0x14(r1)
    clrlwi r0, r0, 24
    stfd f0, 0x158(r1)
    lwz r6, 0x15c(r1)
    stb r6, 0x10(r1)
    stb r9, 0x15(r1)
    lwz r26, 0x10(r1)
    stb r8, 0x16(r1)
    stb r7, 0x17(r1)
    lwz r5, 0x14(r1)
    stw r5, 0x18(r1)
    lbz r5, 0x18(r1)
    add r0, r5, r0
    stb r0, 0x18(r1)
    lwz r0, 0x18(r1)
    stw r0, 0xc(r1)
    bl fn_806175F0
    stw r26, 0x8(r1)
    addi r4, r1, 0x8
    li r3, 0x1
    bl fn_806175F0
    li r3, 0x5
    bl fn_806179E0
    li r3, 0x1
    bl fn_80615D20
    li r3, 0x0
    bl fn_80617200
    li r3, 0x4
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x0
    li r8, 0x0
    li r9, 0x2
    bl fn_80615D50
    li r3, 0x5
    bl fn_80613BB0
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x1e
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    li r3, 0x1
    li r4, 0x1
    li r5, 0x4
    li r6, 0x21
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    li r3, 0x2
    li r4, 0x1
    li r5, 0x4
    li r6, 0x24
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    li r3, 0x3
    li r4, 0x1
    li r5, 0x4
    li r6, 0x27
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    li r3, 0x4
    li r4, 0x1
    li r5, 0x4
    li r6, 0x2a
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    lis r3, 0x4330
    xoris r4, r29, 0x8000
    xoris r0, r30, 0x8000
    lis r5, lbl_80732BB0@ha
    stw r4, 0x16c(r1)
    fmr f1, f29
    lfd f5, lbl_80732BB0@l(r5)
    stw r3, 0x168(r1)
    lfs f3, lbl_80880D7C
    lfd f0, 0x168(r1)
    stw r0, 0x174(r1)
    fsubs f4, f0, f5
    lfs f0, lbl_80880D78
    stw r3, 0x170(r1)
    lfd f2, 0x170(r1)
    fdivs f4, f3, f4
    stfs f0, 0x134(r1)
    stfs f0, 0x12c(r1)
    stfs f0, 0x128(r1)
    stfs f0, 0x124(r1)
    stfs f0, 0x120(r1)
    fsubs f2, f2, f5
    stfs f0, 0x118(r1)
    fmuls f31, f30, f4
    stfs f0, 0x114(r1)
    fdivs f2, f3, f2
    stfs f0, 0x110(r1)
    stfs f0, 0x10c(r1)
    stfs f3, 0x130(r1)
    stfs f3, 0x11c(r1)
    stfs f3, 0x108(r1)
    fmuls f30, f30, f2
    bl fn_8068A850
    frsp f28, f1
    fmr f1, f29
    bl fn_8068AD58
    lfs f0, lbl_80880D84
    frsp f3, f1
    lfs f2, lbl_80880D7C
    fmr f4, f28
    fmuls f5, f0, f31
    addi r3, r1, 0xd8
    fadds f1, f2, f31
    fadds f2, f2, f30
    fmuls f6, f0, f30
    bl fn_800D5C84
    lfs f0, lbl_80880D88
    fmuls f1, f0, f29
    bl fn_8068A850
    lfs f0, lbl_80880D88
    frsp f28, f1
    fmuls f1, f0, f29
    bl fn_8068AD58
    lfs f7, lbl_80880D88
    frsp f3, f1
    lfs f2, lbl_80880D7C
    fmr f4, f28
    fmuls f5, f7, f31
    lfs f6, lbl_80880D84
    fmuls f0, f7, f30
    fmadds f1, f7, f31, f2
    addi r3, r1, 0xa8
    fmuls f5, f6, f5
    fmadds f2, f7, f30, f2
    fmuls f6, f6, f0
    bl fn_800D5C84
    lfs f0, lbl_80880D8C
    fmuls f1, f0, f29
    bl fn_8068A850
    lfs f0, lbl_80880D8C
    frsp f28, f1
    fmuls f1, f0, f29
    bl fn_8068AD58
    lfs f7, lbl_80880D90
    frsp f3, f1
    lfs f2, lbl_80880D7C
    fmr f4, f28
    fmuls f5, f7, f31
    lfs f6, lbl_80880D84
    fmuls f0, f7, f30
    fmadds f1, f7, f31, f2
    addi r3, r1, 0x78
    fmuls f5, f6, f5
    fmadds f2, f7, f30, f2
    fmuls f6, f6, f0
    bl fn_800D5C84
    lfs f0, lbl_80880D94
    fmuls f1, f0, f29
    bl fn_8068A850
    lfs f0, lbl_80880D94
    frsp f28, f1
    fmuls f1, f0, f29
    bl fn_8068AD58
    lfs f7, lbl_80880D98
    frsp f3, f1
    lfs f2, lbl_80880D7C
    fmr f4, f28
    fmuls f5, f7, f31
    lfs f6, lbl_80880D84
    fmuls f0, f7, f30
    fmadds f1, f7, f31, f2
    addi r3, r1, 0x48
    fmuls f5, f6, f5
    fmadds f2, f7, f30, f2
    fmuls f6, f6, f0
    bl fn_800D5C84
    addi r3, r1, 0x108
    li r4, 0x1e
    li r5, 0x1
    bl fn_80618420
    addi r3, r1, 0xd8
    li r4, 0x21
    li r5, 0x1
    bl fn_80618420
    addi r3, r1, 0xa8
    li r4, 0x24
    li r5, 0x1
    bl fn_80618420
    addi r3, r1, 0x78
    li r4, 0x27
    li r5, 0x1
    bl fn_80618420
    addi r3, r1, 0x48
    li r4, 0x2a
    li r5, 0x1
    bl fn_80618420
    lwz r3, lbl_8087EEE0
    mr r4, r27
    li r5, 0x0
    bl fn_800763FC
    li r3, 0x0
    li r4, 0x0
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl fn_80617730
    addi r26, r1, 0x1c
    li r27, 0x0
lbl_fn_800AB774_000004D8:
    cmpwi r27, 0x0
    ble lbl_fn_800AB774_000004FC
    mr r3, r27
    li r4, 0xf
    li r5, 0x8
    li r6, 0xe
    li r7, 0x0
    bl fn_806173E0
    b lbl_fn_800AB774_00000514
lbl_fn_800AB774_000004FC:
    mr r3, r27
    li r4, 0xf
    li r5, 0x8
    li r6, 0xe
    li r7, 0xf
    bl fn_806173E0
lbl_fn_800AB774_00000514:
    lwz r4, 0x0(r26)
    mr r3, r27
    bl fn_80617650
    subi r0, r27, 0x4
    mr r3, r27
    cntlzw r0, r0
    li r4, 0x0
    extrwi r7, r0, 8, 19
    li r5, 0x0
    li r6, 0x0
    li r8, 0x0
    bl fn_80617460
    mr r3, r27
    li r4, 0x0
    li r5, 0x0
    bl fn_806176F0
    mr r3, r27
    mr r4, r27
    li r5, 0x0
    li r6, 0xff
    bl fn_80617880
    mr r3, r27
    bl fn_80617220
    addi r27, r27, 0x1
    addi r26, r26, 0x4
    cmpwi r27, 0x5
    blt lbl_fn_800AB774_000004D8
    li r3, 0x0
    li r4, 0x4
    li r5, 0x1
    li r6, 0x3
    bl fn_80617D50
    lwz r3, lbl_8087EFB4
    bl fn_800BFB70
    clrlwi r5, r29, 16
    clrlwi r6, r30, 16
    li r3, 0x0
    li r4, 0x0
    bl fn_80614CC0
    mr r5, r31
    clrlwi r3, r29, 16
    clrlwi r4, r30, 16
    li r6, 0x0
    bl fn_80614D30
    mr r3, r28
    li r4, 0x0
    bl fn_80615560
    bl fn_80614190
    bl fn_806167B0
    addi r11, r1, 0x190
    psq_l f31, 0x1c8(r1), 0, 0
    lfd f31, 0x1c0(r1)
    psq_l f30, 0x1b8(r1), 0, 0
    lfd f30, 0x1b0(r1)
    psq_l f29, 0x1a8(r1), 0, 0
    lfd f29, 0x1a0(r1)
    psq_l f28, 0x198(r1), 0, 0
    lfd f28, 0x190(r1)
    bl _restgpr_26
    lwz r0, 0x1d4(r1)
    mtlr r0
    addi r1, r1, 0x1d0
    blr
}

asm void fn_800ABD84(void)
{
    nofralloc
    lis r4, lbl_80778D78@ha
    addi r4, r4, lbl_80778D78@l
    stw r4, 0x0(r3)
    blr
}

asm void fn_800ABD94(void)
{
    nofralloc
    stwu r1, -0xf0(r1)
    mflr r0
    stw r0, 0xf4(r1)
    addi r11, r1, 0xf0
    bl _savegpr_20
    lbz r0, lbl_8087EF94
    lis r3, 0x4330
    stw r3, 0x90(r1)
    extsb. r0, r0
    stw r3, 0x98(r1)
    bne lbl_fn_800ABD94_00000678
    lis r29, lbl_807C7410@ha
    addi r3, r29, lbl_807C7410@l
    bl fn_800D5738
    lis r4, fn_800D5808@ha
    lis r5, lbl_807C7400@ha
    addi r3, r29, lbl_807C7410@l
    addi r4, r4, fn_800D5808@l
    addi r5, r5, lbl_807C7400@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8087EF94
lbl_fn_800ABD94_00000678:
    lwz r0, lbl_8087EF90
    cmpwi r0, 0x0
    bne lbl_fn_800ABD94_000006A0
    lis r3, lbl_807C7410@ha
    lis r4, lbl_80732BD4@ha
    addi r3, r3, lbl_807C7410@l
    addi r4, r4, lbl_80732BD4@l
    bl fn_800D594C
    li r0, 0x1
    stw r0, lbl_8087EF90
lbl_fn_800ABD94_000006A0:
    lwz r4, lbl_8087EEE0
    li r6, 0x6
    lwz r3, lbl_8087EF8C
    lwz r31, 0x3c(r4)
    lwz r30, 0x40(r4)
    srawi r0, r31, 3
    addze r23, r0
    srawi r0, r30, 3
    addze r22, r0
    mr r4, r23
    mr r5, r22
    bl fn_800A96AC
    mr r24, r3
    lis r29, lbl_807C7440@ha
    mr r4, r24
    clrlwi r5, r23, 16
    addi r3, r29, lbl_807C7440@l
    clrlwi r6, r22, 16
    li r7, 0x6
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_80615FF0
    lfs f1, lbl_80880D78
    addi r3, r29, lbl_807C7440@l
    li r4, 0x1
    li r5, 0x1
    fmr f2, f1
    li r6, 0x0
    fmr f3, f1
    li r7, 0x0
    li r8, 0x0
    bl fn_80616250
    srwi r3, r30, 31
    srwi r0, r31, 31
    add r4, r3, r30
    lwz r3, lbl_8087EF8C
    srawi r28, r4, 1
    add r0, r0, r31
    srawi r27, r0, 1
    li r6, 0x6
    mr r4, r27
    mr r5, r28
    bl fn_800A96AC
    mr r21, r3
    addi r3, r1, 0x40
    mr r4, r21
    clrlwi r5, r27, 16
    clrlwi r6, r28, 16
    li r7, 0x6
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_80615FF0
    lfs f1, lbl_80880D78
    addi r3, r1, 0x40
    li r4, 0x1
    li r5, 0x1
    fmr f2, f1
    li r6, 0x0
    fmr f3, f1
    li r7, 0x0
    li r8, 0x0
    bl fn_80616250
    slwi r27, r22, 1
    slwi r28, r23, 1
    lwz r3, lbl_8087EF8C
    mr r4, r28
    mr r5, r27
    li r6, 0x6
    bl fn_800A96AC
    mr r20, r3
    addi r3, r1, 0x20
    mr r4, r20
    clrlwi r5, r28, 16
    clrlwi r6, r27, 16
    li r7, 0x6
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_80615FF0
    clrlslwi r26, r22, 16, 1
    clrlslwi r25, r23, 16, 1
    clrlslwi r5, r23, 17, 1
    clrlslwi r6, r22, 17, 1
    li r3, 0x0
    li r4, 0x0
    bl fn_80614CC0
    clrlwi r3, r25, 16
    clrlwi r4, r26, 16
    li r5, 0x6
    li r6, 0x0
    bl fn_80614D30
    mr r3, r20
    li r4, 0x0
    bl fn_80615560
    clrlwi r5, r31, 16
    clrlwi r6, r30, 16
    li r3, 0x0
    li r4, 0x0
    bl fn_80614CC0
    extrwi r3, r31, 15, 16
    extrwi r4, r30, 15, 16
    li r5, 0x6
    li r6, 0x1
    bl fn_80614D30
    mr r3, r21
    li r4, 0x0
    bl fn_80615560
    bl fn_80614190
    li r3, 0x1
    bl fn_80613BB0
    li r3, 0x0
    bl fn_80615D20
    li r3, 0x1
    bl fn_806179E0
    li r3, 0x0
    li r4, 0x1
    li r5, 0x0
    li r6, 0x3
    bl fn_80617D50
    lwz r3, lbl_8087EEE0
    addi r4, r1, 0x40
    li r5, 0x0
    bl fn_800763FC
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    li r3, 0x0
    li r4, 0x3
    bl fn_80617340
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0xff
    bl fn_80617880
    lwz r3, lbl_8087EEE0
    mr r6, r28
    mr r7, r27
    li r4, 0x0
    li r5, 0x0
    bl fn_80075F58
    lwz r3, lbl_8087EFB4
    bl fn_800BFB70
    clrlwi r5, r25, 16
    clrlwi r6, r26, 16
    li r3, 0x0
    li r4, 0x0
    bl fn_80614CC0
    clrlwi r3, r23, 16
    clrlwi r4, r22, 16
    li r5, 0x6
    li r6, 0x1
    bl fn_80614D30
    mr r3, r24
    li r4, 0x1
    bl fn_80615560
    bl fn_80614190
    lwz r7, lbl_8087EFA8
    mr r4, r24
    mr r5, r23
    mr r6, r22
    lfs f1, 0x38c(r7)
    addi r3, r29, lbl_807C7440@l
    lfs f2, 0x390(r7)
    li r7, 0x6
    li r8, 0x0
    bl fn_800AB774
    li r3, 0x0
    li r4, 0x1
    li r5, 0x0
    li r6, 0x3
    bl fn_80617D50
    li r3, 0x1
    bl fn_80613BB0
    li r3, 0x1
    bl fn_80615D20
    li r3, 0x1
    bl fn_806179E0
    lwz r3, lbl_8087EEE0
    addi r4, r1, 0x20
    li r5, 0x0
    bl fn_800763FC
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    li r3, 0x0
    li r4, 0x0
    bl fn_80617340
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x4
    bl fn_80617880
    li r3, 0x4
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x2
    bl fn_80615D50
    li r3, 0x0
    bl fn_80617220
    lwz r3, lbl_8087EEE0
    mr r6, r28
    mr r7, r27
    li r4, 0x0
    li r5, 0x0
    bl fn_80075F58
    lwz r3, lbl_8087EFB4
    bl fn_800BFB70
    li r3, 0x2
    bl fn_80613BB0
    li r3, 0x0
    bl fn_80615D20
    li r3, 0x2
    bl fn_806179E0
    li r3, 0x0
    bl fn_80617200
    li r3, 0x4
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x0
    li r8, 0x0
    li r9, 0x2
    bl fn_80615D50
    li r3, 0x5
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x0
    li r8, 0x0
    li r9, 0x2
    bl fn_80615D50
    lis r4, lbl_807C7410@ha
    lwz r3, lbl_8087EEE0
    addi r4, r4, lbl_807C7410@l
    li r5, 0x0
    bl fn_800763FC
    lwz r3, lbl_8087EEE0
    addi r4, r29, lbl_807C7440@l
    li r5, 0x1
    bl fn_800763FC
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x1e
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
    lwz r4, lbl_8087EFA8
    lis r6, lbl_80732BB8@ha
    lfs f4, lbl_80880D7C
    addi r3, r1, 0x60
    lfs f0, 0x394(r4)
    li r4, 0x1e
    lfs f1, lbl_80880D78
    li r5, 0x1
    fadds f3, f4, f0
    lfd f0, lbl_80732BB8@l(r6)
    stfs f1, 0x8c(r1)
    fsubs f2, f3, f4
    stfs f1, 0x84(r1)
    stfs f1, 0x80(r1)
    fmul f0, f0, f2
    stfs f1, 0x78(r1)
    stfs f1, 0x70(r1)
    frsp f0, f0
    stfs f1, 0x68(r1)
    fneg f0, f0
    stfs f1, 0x64(r1)
    stfs f4, 0x88(r1)
    stfs f3, 0x60(r1)
    stfs f3, 0x74(r1)
    stfs f0, 0x6c(r1)
    stfs f0, 0x7c(r1)
    bl fn_80618420
    lwz r3, lbl_8087EFA8
    lfs f1, 0x380(r3)
    lfs f3, 0x384(r3)
    lfs f2, 0x37c(r3)
    lfs f0, 0x388(r3)
    fcmpo cr0, f3, f1
    stfs f2, 0x10(r1)
    stfs f1, 0x14(r1)
    stfs f3, 0x18(r1)
    stfs f0, 0x1c(r1)
    ble lbl_fn_800ABD94_00000B68
    b lbl_fn_800ABD94_00000B6C
lbl_fn_800ABD94_00000B68:
    fmr f3, f1
lbl_fn_800ABD94_00000B6C:
    lfs f1, 0x10(r1)
    fcmpo cr0, f1, f3
    ble lbl_fn_800ABD94_00000B7C
    b lbl_fn_800ABD94_00000B94
lbl_fn_800ABD94_00000B7C:
    lfs f1, 0x18(r1)
    lfs f0, 0x14(r1)
    fcmpo cr0, f1, f0
    ble lbl_fn_800ABD94_00000B90
    b lbl_fn_800ABD94_00000B94
lbl_fn_800ABD94_00000B90:
    fmr f1, f0
lbl_fn_800ABD94_00000B94:
    lfs f0, lbl_80880D88
    fcmpo cr0, f1, f0
    ble lbl_fn_800ABD94_00000BA8
    li r28, 0x2
    b lbl_fn_800ABD94_00000BC0
lbl_fn_800ABD94_00000BA8:
    lfs f0, lbl_80880D7C
    fcmpo cr0, f1, f0
    ble lbl_fn_800ABD94_00000BBC
    li r28, 0x1
    b lbl_fn_800ABD94_00000BC0
lbl_fn_800ABD94_00000BBC:
    li r28, 0x0
lbl_fn_800ABD94_00000BC0:
    li r0, 0x1
    lis r29, lbl_80732BB0@ha
    slw r0, r0, r28
    lfs f5, lbl_80880D7C
    xoris r0, r0, 0x8000
    stw r0, 0x94(r1)
    lfs f3, lbl_80880D80
    addi r4, r1, 0xc
    lfd f2, lbl_80732BB0@l(r29)
    li r3, 0x0
    lfd f1, 0x90(r1)
    fmuls f0, f3, f5
    lfs f4, 0x10(r1)
    fsubs f6, f1, f2
    lfs f2, 0x14(r1)
    fctiwz f0, f0
    lfs f1, 0x18(r1)
    stfs f5, 0x1c(r1)
    fdivs f6, f5, f6
    stfd f0, 0xb8(r1)
    lwz r0, 0xbc(r1)
    stb r0, 0xb(r1)
    fmuls f5, f4, f6
    fmuls f0, f2, f6
    fmuls f4, f1, f6
    stfs f5, 0x10(r1)
    fmuls f2, f3, f5
    fmuls f1, f3, f0
    stfs f0, 0x14(r1)
    fmuls f0, f3, f4
    fctiwz f2, f2
    stfs f4, 0x18(r1)
    fctiwz f1, f1
    fctiwz f0, f0
    stfd f2, 0xa0(r1)
    stfd f1, 0xa8(r1)
    lwz r6, 0xa4(r1)
    stfd f0, 0xb0(r1)
    lwz r5, 0xac(r1)
    lwz r0, 0xb4(r1)
    stb r6, 0x8(r1)
    stb r5, 0x9(r1)
    stb r0, 0xa(r1)
    lwz r0, 0x8(r1)
    stw r0, 0xc(r1)
    bl fn_806175F0
    li r3, 0x0
    li r4, 0xc
    bl fn_80617650
    li r3, 0x0
    li r4, 0xf
    li r5, 0x8
    li r6, 0xe
    li r7, 0xf
    bl fn_806173E0
    mr r6, r28
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_80617460
    li r3, 0x0
    li r4, 0x1
    li r5, 0x1
    li r6, 0xff
    bl fn_80617880
    li r3, 0x0
    bl fn_80617220
    li r3, 0x1
    li r4, 0xf
    li r5, 0xf
    li r6, 0xf
    li r7, 0x0
    bl fn_806173E0
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_80617460
    li r3, 0x1
    li r4, 0x1c
    bl fn_806176A0
    li r3, 0x1
    li r4, 0x6
    li r5, 0x7
    li r6, 0x4
    li r7, 0x7
    bl fn_80617420
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_806174C0
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0xff
    bl fn_80617880
    li r3, 0x1
    bl fn_80617220
    li r3, 0x1
    li r4, 0x4
    li r5, 0x5
    li r6, 0x3
    bl fn_80617D50
    lwz r3, lbl_8087EEE0
    bl fn_80075DEC
    lwz r3, lbl_8087EFB4
    bl fn_800BFB70
    li r3, 0x0
    li r4, 0x4
    li r5, 0x1
    li r6, 0x3
    bl fn_80617D50
    lwz r3, lbl_8087EFA8
    lwz r0, 0x378(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800ABD94_00000E68
    xoris r0, r31, 0x8000
    stw r0, 0x9c(r1)
    xoris r0, r30, 0x8000
    lfs f1, lbl_80880D9C
    stw r0, 0x94(r1)
    lis r5, lbl_807C7440@ha
    lfd f4, lbl_80732BB0@l(r29)
    fmr f2, f1
    lfd f3, 0x98(r1)
    addi r5, r5, lbl_807C7440@l
    lfd f0, 0x90(r1)
    li r4, -0x1
    fsubs f3, f3, f4
    fsubs f0, f0, f4
    lfs f5, lbl_80880D90
    lwz r3, lbl_8087EEB0
    li r6, 0x0
    fdivs f4, f3, f5
    lfs f3, lbl_80880D78
    fdivs f5, f0, f5
    bl fn_8005DF90
    xoris r3, r30, 0x8000
    stw r3, 0x9c(r1)
    xoris r0, r31, 0x8000
    lis r5, lbl_807C7410@ha
    lfd f0, 0x98(r1)
    addi r5, r5, lbl_807C7410@l
    lfd f8, lbl_80732BB0@l(r29)
    li r4, -0x1
    stw r0, 0x94(r1)
    li r6, 0x0
    fsubs f1, f0, f8
    lfs f7, lbl_80880D90
    stw r3, 0x9c(r1)
    lfd f2, 0x90(r1)
    fdivs f6, f1, f7
    lfd f0, 0x98(r1)
    lfs f5, lbl_80880DA0
    lwz r3, lbl_8087EEB0
    lfs f1, lbl_80880D9C
    lfs f3, lbl_80880D78
    fsubs f4, f2, f8
    fsubs f0, f0, f8
    fadds f2, f5, f6
    fdivs f4, f4, f7
    fdivs f5, f0, f7
    bl fn_8005DFC8
lbl_fn_800ABD94_00000E68:
    addi r11, r1, 0xf0
    bl _restgpr_20
    lwz r0, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0xf0
    blr
}

asm void fn_800AC5F4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_80778DB8@ha
    li r5, 0x1
    stw r0, 0x14(r1)
    li r0, -0x1
    addi r4, r4, lbl_80778DB8@l
    li r6, 0x0
    stw r31, 0xc(r1)
    li r7, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    stw r4, 0x0(r3)
    li r4, 0x100
    stw r0, 0x6c(r3)
    stw r0, 0x70(r3)
    stw r0, 0x74(r3)
    stw r0, 0x78(r3)
    li r3, 0x100
    bl fn_80615E00
    mr r31, r3
    bl fn_800827E0
    lis r7, lbl_80732C00@ha
    mr r4, r31
    addi r7, r7, lbl_80732C00@l
    li r5, 0x20
    mr r8, r7
    li r6, 0x6
    li r9, 0x0
    li r10, 0x0
    bl fn_800839EC
    stw r3, 0x68(r30)
    mr r4, r3
    addi r3, r30, 0x48
    li r5, 0x100
    li r6, 0x100
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_80615FF0
    lfs f1, lbl_80880DA8
    addi r3, r30, 0x48
    li r4, 0x1
    li r5, 0x1
    fmr f2, f1
    li r6, 0x0
    fmr f3, f1
    li r7, 0x0
    li r8, 0x0
    bl fn_80616250
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800AC6DC(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_25
    lwz r4, lbl_8087EEE0
    lis r0, 0x4330
    lwz r5, lbl_8087EFA8
    mr r29, r3
    stw r0, 0x28(r1)
    lwz r31, 0x3c(r4)
    stw r0, 0x30(r1)
    lwz r30, 0x40(r4)
    lwz r28, 0xf4(r5)
    lwz r27, 0xf8(r5)
    bl fn_800ACCB8
    lwz r3, lbl_8087EF8C
    mr r4, r28
    mr r5, r27
    li r6, 0x6
    bl fn_800A96AC
    mr r26, r3
    addi r3, r29, 0x8
    mr r4, r26
    clrlwi r5, r28, 16
    clrlwi r6, r27, 16
    li r7, 0x6
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_80615FF0
    lfs f1, lbl_80880DA8
    addi r3, r29, 0x8
    li r4, 0x1
    li r5, 0x1
    fmr f2, f1
    li r6, 0x0
    fmr f3, f1
    li r7, 0x0
    li r8, 0x0
    bl fn_80616250
    lwz r3, lbl_8087EF8C
    mr r4, r28
    mr r5, r27
    li r6, 0x6
    bl fn_800A96AC
    mr r25, r3
    addi r3, r29, 0x28
    mr r4, r25
    clrlwi r5, r28, 16
    clrlwi r6, r27, 16
    li r7, 0x6
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_80615FF0
    lfs f1, lbl_80880DA8
    addi r3, r29, 0x28
    li r4, 0x1
    li r5, 0x1
    fmr f2, f1
    li r6, 0x0
    fmr f3, f1
    li r7, 0x0
    li r8, 0x0
    bl fn_80616250
    bl fn_80614190
    bl fn_806167B0
    lwz r3, lbl_8087EFB4
    li r4, 0x0
    bl fn_800C0508
    clrlwi r5, r31, 16
    clrlwi r6, r30, 16
    li r3, 0x0
    li r4, 0x0
    bl fn_80614CC0
    clrlwi r3, r28, 16
    clrlwi r4, r27, 16
    li r5, 0x6
    li r6, 0x1
    bl fn_80614D30
    mr r3, r26
    li r4, 0x1
    bl fn_80615560
    bl fn_80614190
    lwz r3, lbl_8087EFA8
    mr r4, r25
    lfs f2, lbl_80880DA8
    mr r5, r28
    lfs f1, 0xfc(r3)
    mr r6, r27
    addi r3, r29, 0x8
    li r7, 0x6
    li r8, 0x0
    li r9, 0x0
    bl fn_800A981C
    lwz r3, lbl_8087EFA8
    mr r4, r26
    lfs f1, lbl_80880DA8
    mr r5, r28
    lfs f2, 0x100(r3)
    mr r6, r27
    addi r3, r29, 0x28
    li r7, 0x6
    li r8, 0x0
    li r9, 0x0
    bl fn_800A981C
    li r3, 0x3
    bl fn_806179E0
    li r3, 0x0
    bl fn_80615D20
    li r3, 0x4
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
    li r3, 0x2
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    li r3, 0x3
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    lwz r4, lbl_8087EFB4
    li r5, 0x0
    lwz r3, lbl_8087EEE0
    addi r4, r4, 0x74c
    bl fn_800763FC
    lwz r4, lbl_8087EFB4
    li r5, 0x1
    lwz r3, lbl_8087EEE0
    addi r4, r4, 0x77c
    bl fn_800763FC
    lwz r3, lbl_8087EEE0
    addi r4, r29, 0x8
    li r5, 0x2
    bl fn_800763FC
    lwz r3, lbl_8087EEE0
    addi r4, r29, 0x48
    li r5, 0x3
    bl fn_800763FC
    li r3, 0x0
    li r4, 0x3
    bl fn_80617340
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0xff
    bl fn_80617880
    li r3, 0x0
    li r4, 0x0
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl fn_80617730
    li r3, 0x3
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    bl fn_80617730
    li r3, 0x1
    bl fn_80617200
    li r3, 0x0
    li r4, 0x1
    li r5, 0x1
    bl fn_80617130
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_80617030
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0x1
    li r7, 0x1
    bl fn_80617270
    lfs f0, lbl_80880DA8
    addi r4, r1, 0x10
    lfs f1, lbl_80880DB0
    li r3, 0x1
    stfs f0, 0x10(r1)
    li r5, 0x1
    stfs f1, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f1, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    bl fn_80616EF0
    li r3, 0x1
    li r4, 0x4
    bl fn_80617340
    li r3, 0x1
    li r4, 0xf
    li r5, 0xf
    li r6, 0xf
    li r7, 0x8
    bl fn_806173E0
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_80617460
    li r3, 0x1
    li r4, 0x3
    li r5, 0x3
    li r6, 0xff
    bl fn_80617880
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    bl fn_806176F0
    li r3, 0x2
    li r4, 0x0
    li r5, 0x8
    li r6, 0x2
    li r7, 0xf
    bl fn_806173E0
    li r3, 0x2
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_80617460
    li r3, 0x2
    li r4, 0x2
    li r5, 0x2
    li r6, 0xff
    bl fn_80617880
    li r3, 0x2
    li r4, 0x0
    li r5, 0x0
    bl fn_806176F0
    li r3, 0x2
    li r4, 0x7
    li r5, 0x7
    li r6, 0x7
    li r7, 0x5
    bl fn_80617420
    li r3, 0x2
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_806174C0
    lwz r3, lbl_8087EFA8
    lwz r0, 0xdc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800AC6DC_000013DC
    lwz r0, lbl_80880DAC
    addi r4, r1, 0x8
    stw r0, 0x8(r1)
    li r3, 0x1
    bl fn_806175F0
    li r3, 0x2
    li r4, 0xd
    bl fn_80617650
    li r3, 0x2
    li r4, 0x0
    li r5, 0xe
    li r6, 0x2
    li r7, 0xf
    bl fn_806173E0
lbl_fn_800AC6DC_000013DC:
    lwz r3, lbl_8087EEE0
    bl fn_80075DEC
    lwz r3, lbl_8087EFB4
    bl fn_800BFB70
    lwz r3, lbl_8087EFA8
    lwz r0, 0xd8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800AC6DC_0000152C
    xoris r0, r31, 0x8000
    stw r0, 0x2c(r1)
    xoris r0, r30, 0x8000
    lis r28, lbl_80732BE8@ha
    stw r0, 0x34(r1)
    li r4, -0x1
    lfd f4, lbl_80732BE8@l(r28)
    li r6, 0x0
    lfd f1, 0x28(r1)
    lfd f0, 0x30(r1)
    fsubs f3, f1, f4
    lfs f2, lbl_80880DB8
    fsubs f0, f0, f4
    lwz r5, lbl_8087EFB4
    lfs f1, lbl_80880DB4
    fdivs f4, f3, f2
    lwz r3, lbl_8087EEB0
    addi r5, r5, 0x77c
    lfs f3, lbl_80880DA8
    fdivs f5, f0, f2
    fmr f2, f1
    bl fn_8005DF90
    xoris r3, r30, 0x8000
    stw r3, 0x2c(r1)
    xoris r0, r31, 0x8000
    lfd f4, lbl_80732BE8@l(r28)
    lfd f0, 0x28(r1)
    addi r5, r29, 0x8
    stw r0, 0x34(r1)
    li r4, -0x1
    fsubs f3, f0, f4
    lfs f5, lbl_80880DB8
    stw r3, 0x2c(r1)
    li r6, 0x0
    lfd f1, 0x30(r1)
    lfd f0, 0x28(r1)
    fsubs f2, f1, f4
    lfs f6, lbl_80880DBC
    fdivs f7, f3, f5
    lwz r3, lbl_8087EEB0
    lfs f1, lbl_80880DB4
    lfs f3, lbl_80880DA8
    fsubs f0, f0, f4
    fdivs f4, f2, f5
    fdivs f5, f0, f5
    fadds f2, f6, f7
    bl fn_8005DF90
    xoris r3, r31, 0x8000
    stw r3, 0x34(r1)
    xoris r0, r30, 0x8000
    lfd f8, lbl_80732BE8@l(r28)
    lfd f0, 0x30(r1)
    addi r5, r29, 0x48
    lfs f5, lbl_80880DB8
    li r4, -0x1
    fsubs f1, f0, f8
    stw r0, 0x2c(r1)
    lfs f7, lbl_80880DBC
    li r6, 0x0
    lfd f0, 0x28(r1)
    fdivs f4, f1, f5
    stw r3, 0x34(r1)
    lwz r3, lbl_8087EEB0
    stw r0, 0x2c(r1)
    lfd f1, 0x30(r1)
    lfs f3, lbl_80880DA8
    fsubs f2, f0, f8
    lfd f0, 0x28(r1)
    fsubs f0, f0, f8
    fdivs f6, f2, f5
    fsubs f2, f1, f8
    fadds f1, f7, f4
    fdivs f4, f2, f5
    fdivs f5, f0, f5
    fadds f2, f7, f6
    bl fn_8005DF90
lbl_fn_800AC6DC_0000152C:
    addi r11, r1, 0x60
    bl _restgpr_25
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_800ACCB8(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_26
    lwz r4, lbl_8087EFB4
    mr r27, r3
    lwz r5, lbl_8087EFA8
    lfs f9, 0x1cc(r4)
    lfs f3, 0x1d0(r4)
    lfs f1, 0xe4(r5)
    fmuls f0, f3, f9
    lfs f2, 0xe8(r5)
    fsubs f6, f3, f9
    lfs f7, 0xec(r5)
    lfs f8, 0xf0(r5)
    fdivs f5, f0, f1
    lfs f3, lbl_80880DC0
    lfs f4, lbl_80880DC4
    fdivs f2, f0, f2
    fdivs f1, f0, f7
    fdivs f0, f0, f8
    fsubs f5, f5, f9
    fsubs f2, f2, f9
    fsubs f1, f1, f9
    fdivs f5, f5, f6
    fdivs f2, f2, f6
    fsubs f0, f0, f9
    fdivs f1, f1, f6
    fdivs f0, f0, f6
    fsubs f9, f3, f1
    fsubs f7, f3, f5
    fsubs f8, f3, f2
    fsubs f10, f3, f0
    fmuls f2, f4, f7
    fmuls f1, f4, f9
    fmuls f0, f4, f8
    fctiwz f3, f2
    fctiwz f1, f1
    fctiwz f2, f0
    stfd f3, 0x8(r1)
    fmuls f0, f4, f10
    stfd f2, 0x10(r1)
    lwz r31, 0xc(r1)
    fctiwz f0, f0
    lwz r30, 0x14(r1)
    stfd f1, 0x18(r1)
    cmpw r30, r31
    stfd f0, 0x20(r1)
    lwz r29, 0x1c(r1)
    lwz r28, 0x24(r1)
    bgt lbl_fn_800ACCB8_00001618
    addi r30, r31, 0x1
lbl_fn_800ACCB8_00001618:
    cmpw r29, r28
    bgt lbl_fn_800ACCB8_00001624
    addi r29, r28, 0x1
lbl_fn_800ACCB8_00001624:
    lwz r0, 0x6c(r3)
    cmpw r0, r31
    bne lbl_fn_800ACCB8_00001664
    lwz r0, 0x70(r3)
    cmpw r0, r30
    bne lbl_fn_800ACCB8_00001664
    lwz r0, 0x74(r3)
    cmpw r0, r29
    bne lbl_fn_800ACCB8_00001664
    lwz r0, 0x78(r3)
    cmpw r0, r28
    bne lbl_fn_800ACCB8_00001664
    lwz r4, 0x4(r3)
    lwz r0, 0xe0(r5)
    cmpw r4, r0
    beq lbl_fn_800ACCB8_000017F0
lbl_fn_800ACCB8_00001664:
    lis r4, lbl_80732BE8@ha
    lis r0, 0x1
    fsubs f4, f8, f7
    lfs f3, lbl_80880DA8
    fsubs f1, f9, f10
    lfs f2, lbl_80880DC0
    lwz r7, 0x68(r3)
    li r8, 0x0
    lfd f6, lbl_80732BE8@l(r4)
    lis r6, 0x4330
    lfs f5, lbl_80880DC4
    mtctr r0
lbl_fn_800ACCB8_00001694:
    xoris r0, r8, 0x8000
    stw r0, 0x24(r1)
    srawi r5, r8, 8
    srwi r4, r8, 31
    stw r6, 0x20(r1)
    slwi r0, r8, 24
    subf r0, r4, r0
    addze r5, r5
    lfd f0, 0x20(r1)
    rotlwi r0, r0, 8
    add r0, r0, r4
    fsubs f0, f0, f6
    fdivs f8, f0, f5
    fsubs f0, f8, f7
    fdivs f10, f0, f4
    fcmpo cr0, f10, f3
    bge lbl_fn_800ACCB8_000016E0
    fmr f10, f3
    b lbl_fn_800ACCB8_000016EC
lbl_fn_800ACCB8_000016E0:
    fcmpo cr0, f10, f2
    ble lbl_fn_800ACCB8_000016EC
    fmr f10, f2
lbl_fn_800ACCB8_000016EC:
    fsubs f0, f8, f9
    fdivs f0, f0, f1
    fneg f0, f0
    fcmpo cr0, f0, f3
    bge lbl_fn_800ACCB8_00001708
    fmr f0, f3
    b lbl_fn_800ACCB8_00001714
lbl_fn_800ACCB8_00001708:
    fcmpo cr0, f0, f2
    ble lbl_fn_800ACCB8_00001714
    fmr f0, f2
lbl_fn_800ACCB8_00001714:
    fadds f0, f10, f0
    fcmpo cr0, f0, f3
    bge lbl_fn_800ACCB8_00001728
    fmr f0, f3
    b lbl_fn_800ACCB8_00001734
lbl_fn_800ACCB8_00001728:
    fcmpo cr0, f0, f2
    ble lbl_fn_800ACCB8_00001734
    fmr f0, f2
lbl_fn_800ACCB8_00001734:
    fmuls f0, f5, f0
    slwi r4, r0, 8
    add r0, r7, r5
    addi r8, r8, 0x1
    fctiwz f0, f0
    stfd f0, 0x20(r1)
    lwz r5, 0x24(r1)
    srawi r5, r5, 8
    stbx r5, r4, r0
    bdnz lbl_fn_800ACCB8_00001694
    lwz r4, lbl_8087EFA8
    lwz r0, 0xe0(r4)
    stw r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800ACCB8_000017A4
    li r5, 0x1
    li r0, 0x0
    subfic r4, r5, 0x100
    slwi r4, r4, 8
    li r5, 0x2
    add r3, r7, r4
    subfic r4, r5, 0x100
    stb r0, 0xff(r3)
    slwi r4, r4, 8
    stb r0, 0xfe(r3)
    add r3, r7, r4
    stb r0, 0xff(r3)
    stb r0, 0xfe(r3)
lbl_fn_800ACCB8_000017A4:
    li r3, 0x100
    li r4, 0x100
    li r5, 0x1
    li r6, 0x0
    li r7, 0x0
    bl fn_80615E00
    mr r26, r3
    lwz r3, 0x68(r27)
    li r4, 0x1
    li r5, 0x100
    li r6, 0x100
    bl fn_800C0D4C
    lwz r3, 0x68(r27)
    mr r4, r26
    bl DCFlushRange
    stw r31, 0x6c(r27)
    stw r30, 0x70(r27)
    stw r29, 0x74(r27)
    stw r28, 0x78(r27)
lbl_fn_800ACCB8_000017F0:
    lwz r4, 0x68(r27)
    addi r3, r27, 0x48
    li r5, 0x100
    li r6, 0x100
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_80615FF0
    lfs f1, lbl_80880DA8
    addi r3, r27, 0x48
    li r4, 0x1
    li r5, 0x1
    fmr f2, f1
    li r6, 0x0
    fmr f3, f1
    li r7, 0x0
    li r8, 0x0
    bl fn_80616250
    addi r11, r1, 0x40
    bl _restgpr_26
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_800ACFC8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    li r0, 0x0
    lfs f1, lbl_80880DCC
    li r8, 0x1
    stw r0, 0x0(r4)
    li r0, 0x2
    lfs f2, lbl_80880DC8
lbl_fn_800ACFC8_00001870:
    lfs f0, 0x0(r3)
    mr r6, r3
    stfs f0, 0x8(r1)
    li r9, 0x0
    mtctr r0
lbl_fn_800ACFC8_00001884:
    frsp f0, f0
    lfs f3, 0x0(r6)
    fcmpo cr0, f0, f3
    bge lbl_fn_800ACFC8_0000189C
    mr r5, r6
    b lbl_fn_800ACFC8_000018A0
lbl_fn_800ACFC8_0000189C:
    addi r5, r1, 0x8
lbl_fn_800ACFC8_000018A0:
    lfs f0, 0x0(r5)
    addi r7, r6, 0x4
    stfs f0, 0x8(r1)
    lfs f3, 0x4(r6)
    fcmpo cr0, f0, f3
    bge lbl_fn_800ACFC8_000018C0
    mr r5, r7
    b lbl_fn_800ACFC8_000018C4
lbl_fn_800ACFC8_000018C0:
    addi r5, r1, 0x8
lbl_fn_800ACFC8_000018C4:
    lfs f0, 0x0(r5)
    stfs f0, 0x8(r1)
    lfsu f3, 0x4(r7)
    fcmpo cr0, f0, f3
    bge lbl_fn_800ACFC8_000018E0
    mr r5, r7
    b lbl_fn_800ACFC8_000018E4
lbl_fn_800ACFC8_000018E0:
    addi r5, r1, 0x8
lbl_fn_800ACFC8_000018E4:
    lfs f0, 0x0(r5)
    addi r6, r6, 0xc
    stfs f0, 0x8(r1)
    bdnz lbl_fn_800ACFC8_00001884
    fabs f0, f0
    frsp f0, f0
    fcmpo cr0, f0, f2
    cror eq, gt, eq
    bne lbl_fn_800ACFC8_0000196C
    lfs f0, 0x0(r3)
    cmpwi r8, 0x0
    li r9, 0x1
    fmuls f0, f0, f1
    stfs f0, 0x0(r3)
    lfs f0, 0x4(r3)
    fmuls f0, f0, f1
    stfs f0, 0x4(r3)
    lfs f0, 0x8(r3)
    fmuls f0, f0, f1
    stfs f0, 0x8(r3)
    lfs f0, 0xc(r3)
    fmuls f0, f0, f1
    stfs f0, 0xc(r3)
    lfs f0, 0x10(r3)
    fmuls f0, f0, f1
    stfs f0, 0x10(r3)
    lfs f0, 0x14(r3)
    fmuls f0, f0, f1
    stfs f0, 0x14(r3)
    bne lbl_fn_800ACFC8_00001968
    lwz r5, 0x0(r4)
    addi r5, r5, 0x1
    stw r5, 0x0(r4)
lbl_fn_800ACFC8_00001968:
    li r8, 0x0
lbl_fn_800ACFC8_0000196C:
    cmpwi r9, 0x0
    bne lbl_fn_800ACFC8_00001870
    addi r1, r1, 0x10
    blr
}
