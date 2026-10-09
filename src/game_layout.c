#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_19(void);
extern void _restgpr_25(void);
extern void _savegpr_19(void);
extern void _savegpr_25(void);
extern void fn_8005DF90(void);
extern void fn_80075DEC(void);
extern void fn_80075F58(void);
extern void fn_800763FC(void);
extern void fn_800A96AC(void);
extern void fn_800BFB70(void);
extern void fn_800BFC18(void);
extern void fn_800C0508(void);
extern void fn_800C1424(void);
extern void fn_805F90D0(void);
extern void fn_80613960(void);
extern void fn_80613BB0(void);
extern void fn_80614190(void);
extern void fn_80614CC0(void);
extern void fn_80614D30(void);
extern void fn_80615560(void);
extern void fn_80615D20(void);
extern void fn_80615D50(void);
extern void fn_80615FF0(void);
extern void fn_80616250(void);
extern void fn_806167B0(void);
extern void fn_80617200(void);
extern void fn_80617220(void);
extern void fn_80617340(void);
extern void fn_806173E0(void);
extern void fn_80617460(void);
extern void fn_806175F0(void);
extern void fn_80617650(void);
extern void fn_806176F0(void);
extern void fn_80617730(void);
extern void fn_80617880(void);
extern void fn_806179E0(void);
extern void fn_80617D50(void);
extern void fn_80618420(void);
extern void fn_8068A850(void);
extern void fn_8068AD58(void);

/* External data declarations */
extern u8 lbl_80732B08[];
extern u8 lbl_80732B1C[];
extern u8 lbl_80732B30[];
extern u8 lbl_80732B60[];
extern u8 lbl_80732B68[];
extern u8 lbl_80778CE0[];
extern u8 lbl_80778D38[];

/* Small data declarations */
extern u32 lbl_8087D828;
extern u32 lbl_8087D82C;
extern u32 lbl_8087D830;
extern u32 lbl_8087D834;
extern u32 lbl_8087D838;
extern u32 lbl_8087D83C;
extern u32 lbl_8087D840;
extern u32 lbl_8087D844;
extern u32 lbl_8087D848;
extern u32 lbl_8087D84C;
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EEE0;
extern u32 lbl_8087EF8C;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087EFB4;
extern u32 lbl_80880D28;
extern u32 lbl_80880D2C;
extern u32 lbl_80880D30;
extern u32 lbl_80880D34;
extern u32 lbl_80880D38;
extern u32 lbl_80880D3C;
extern u32 lbl_80880D40;
extern u32 lbl_80880D44;
extern u32 lbl_80880D48;
extern u32 lbl_80880D50;
extern u32 lbl_80880D54;
extern u32 lbl_80880D58;
extern u32 lbl_80880D5C;
extern u32 lbl_80880D60;
extern u32 lbl_80880D64;
extern u32 lbl_80880D68;
extern u32 lbl_80880D6C;
extern u32 lbl_80880D70;
extern u32 lbl_80880D74;

/* Function declarations */
void fn_800A981C(void);
void fn_800A9E54(void);
void fn_800A9E64(void);
void fn_800AA6C4(void);
void fn_800AA8DC(void);
void fn_800AAE20(void);
void fn_800AAE2C(void);

asm void fn_800A981C(void)
{
    nofralloc
    stwu r1, -0x300(r1)
    mflr r0
    stw r0, 0x304(r1)
    addi r11, r1, 0x2e0
    stfd f31, 0x2f0(r1)
    psq_st f31, 0x2f8(r1), 0, 0
    stfd f30, 0x2e0(r1)
    psq_st f30, 0x2e8(r1), 0, 0
    bl _savegpr_25
    lis r25, lbl_80732B08@ha
    lwzu r12, lbl_80732B08@l(r25)
    mr r26, r3
    fmr f30, f1
    lwz r11, 0x4(r25)
    fmr f31, f2
    lwz r10, 0x8(r25)
    mr r27, r4
    lwz r3, 0xc(r25)
    lwz r0, 0x10(r25)
    mr r28, r5
    stw r12, 0x8c(r1)
    mr r29, r6
    mr r30, r7
    mr r25, r8
    stw r11, 0x90(r1)
    mr r31, r9
    stw r10, 0x94(r1)
    stw r3, 0x98(r1)
    stw r0, 0x9c(r1)
    bl fn_806167B0
    lwz r3, lbl_8087EEE0
    mr r6, r28
    mr r7, r29
    li r4, 0x0
    li r5, 0x0
    bl fn_80075F58
    cmpwi r25, 0x0
    bne lbl_fn_800A981C_0000009C
    addi r25, r1, 0x8c
lbl_fn_800A981C_0000009C:
    lfs f8, lbl_80880D28
    lis r5, lbl_80732B1C@ha
    lfs f2, 0x0(r25)
    li r0, 0x0
    lwzu r9, lbl_80732B1C@l(r5)
    addi r4, r1, 0xc
    fadds f8, f8, f2
    lfs f1, 0x4(r25)
    lfs f0, lbl_80880D30
    li r3, 0x0
    lwz r8, 0x4(r5)
    fadds f8, f8, f1
    lfs f7, 0x8(r25)
    fmuls f4, f0, f2
    lwz r7, 0x8(r5)
    fmuls f3, f0, f1
    lfs f6, 0xc(r25)
    fadds f8, f8, f7
    lwz r6, 0xc(r5)
    lwz r5, 0x10(r5)
    fmuls f2, f0, f7
    lfs f5, 0x10(r25)
    fmuls f1, f0, f6
    fadds f8, f8, f6
    stw r8, 0x7c(r1)
    fmuls f0, f0, f5
    stw r7, 0x80(r1)
    fadds f8, f8, f5
    lfs f5, lbl_80880D2C
    stw r6, 0x84(r1)
    fdivs f5, f5, f8
    stw r5, 0x88(r1)
    stw r0, 0x10(r1)
    stw r9, 0x78(r1)
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    fmuls f2, f2, f5
    fmuls f1, f1, f5
    fmuls f0, f0, f5
    fctiwz f4, f4
    fctiwz f3, f3
    fctiwz f2, f2
    stfd f4, 0x280(r1)
    fctiwz f1, f1
    fctiwz f0, f0
    stfd f3, 0x288(r1)
    lwz r8, 0x284(r1)
    stfd f2, 0x290(r1)
    lwz r7, 0x28c(r1)
    stfd f1, 0x298(r1)
    lwz r6, 0x294(r1)
    stfd f0, 0x2a0(r1)
    lwz r5, 0x29c(r1)
    lwz r0, 0x2a4(r1)
    stb r0, 0x10(r1)
    stb r8, 0x14(r1)
    lwz r25, 0x10(r1)
    stb r7, 0x15(r1)
    stb r6, 0x16(r1)
    stb r5, 0x17(r1)
    lwz r0, 0x14(r1)
    stw r0, 0xc(r1)
    bl fn_806175F0
    stw r25, 0x8(r1)
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
    xoris r4, r28, 0x8000
    lis r5, lbl_80732B30@ha
    stw r4, 0x2ac(r1)
    xoris r0, r29, 0x8000
    lfd f2, lbl_80732B30@l(r5)
    stw r3, 0x2a8(r1)
    cmpwi r31, 0x0
    lfd f0, 0x2a8(r1)
    stw r0, 0x2b4(r1)
    fsubs f1, f0, f2
    stw r3, 0x2b0(r1)
    lfd f0, 0x2b0(r1)
    fdivs f30, f30, f1
    fsubs f0, f0, f2
    fdivs f31, f31, f0
    beq lbl_fn_800A981C_000003CC
    lfs f3, lbl_80880D28
    fmr f1, f30
    lfs f0, lbl_80880D2C
    fmr f2, f31
    stfs f3, 0x27c(r1)
    addi r3, r1, 0x220
    stfs f3, 0x274(r1)
    stfs f3, 0x270(r1)
    stfs f3, 0x26c(r1)
    stfs f3, 0x268(r1)
    stfs f3, 0x260(r1)
    stfs f3, 0x25c(r1)
    stfs f3, 0x258(r1)
    stfs f3, 0x254(r1)
    stfs f0, 0x278(r1)
    stfs f0, 0x264(r1)
    stfs f0, 0x250(r1)
    stfs f30, 0x6c(r1)
    stfs f31, 0x70(r1)
    stfs f3, 0x74(r1)
    bl fn_805F90D0
    lfs f0, lbl_80880D34
    addi r3, r1, 0x1f0
    lfs f3, lbl_80880D28
    fmuls f1, f0, f30
    stfs f3, 0x68(r1)
    fmuls f2, f0, f31
    stfs f1, 0x60(r1)
    stfs f2, 0x64(r1)
    bl fn_805F90D0
    lfs f0, lbl_80880D38
    addi r3, r1, 0x1c0
    lfs f3, lbl_80880D28
    fmuls f1, f0, f30
    stfs f3, 0x5c(r1)
    fmuls f2, f0, f31
    stfs f1, 0x54(r1)
    stfs f2, 0x58(r1)
    bl fn_805F90D0
    lfs f0, lbl_80880D3C
    addi r3, r1, 0x190
    lfs f3, lbl_80880D28
    fmuls f1, f0, f30
    stfs f3, 0x50(r1)
    fmuls f2, f0, f31
    stfs f1, 0x48(r1)
    stfs f2, 0x4c(r1)
    bl fn_805F90D0
    addi r3, r1, 0x250
    li r4, 0x1e
    li r5, 0x1
    bl fn_80618420
    addi r3, r1, 0x220
    li r4, 0x21
    li r5, 0x1
    bl fn_80618420
    addi r3, r1, 0x1f0
    li r4, 0x24
    li r5, 0x1
    bl fn_80618420
    addi r3, r1, 0x1c0
    li r4, 0x27
    li r5, 0x1
    bl fn_80618420
    addi r3, r1, 0x190
    li r4, 0x2a
    li r5, 0x1
    bl fn_80618420
    b lbl_fn_800A981C_000004E0
lbl_fn_800A981C_000003CC:
    fneg f4, f30
    lfs f3, lbl_80880D28
    fneg f0, f31
    lfs f5, lbl_80880D2C
    stfs f3, 0x18c(r1)
    addi r3, r1, 0x130
    frsp f1, f4
    stfs f3, 0x184(r1)
    frsp f2, f0
    stfs f3, 0x180(r1)
    stfs f3, 0x17c(r1)
    stfs f3, 0x178(r1)
    stfs f3, 0x170(r1)
    stfs f3, 0x16c(r1)
    stfs f3, 0x168(r1)
    stfs f3, 0x164(r1)
    stfs f5, 0x188(r1)
    stfs f5, 0x174(r1)
    stfs f5, 0x160(r1)
    stfs f4, 0x3c(r1)
    stfs f0, 0x40(r1)
    stfs f3, 0x44(r1)
    bl fn_805F90D0
    lfs f0, lbl_80880D40
    addi r3, r1, 0x100
    lfs f3, lbl_80880D28
    fmuls f1, f0, f30
    stfs f3, 0x38(r1)
    fmuls f2, f0, f31
    stfs f1, 0x30(r1)
    stfs f2, 0x34(r1)
    bl fn_805F90D0
    lfs f3, lbl_80880D28
    fmr f1, f30
    fmr f2, f31
    stfs f30, 0x24(r1)
    addi r3, r1, 0xd0
    stfs f31, 0x28(r1)
    stfs f3, 0x2c(r1)
    bl fn_805F90D0
    lfs f0, lbl_80880D34
    addi r3, r1, 0xa0
    lfs f3, lbl_80880D28
    fmuls f1, f0, f30
    stfs f3, 0x20(r1)
    fmuls f2, f0, f31
    stfs f1, 0x18(r1)
    stfs f2, 0x1c(r1)
    bl fn_805F90D0
    addi r3, r1, 0x160
    li r4, 0x1e
    li r5, 0x1
    bl fn_80618420
    addi r3, r1, 0x130
    li r4, 0x21
    li r5, 0x1
    bl fn_80618420
    addi r3, r1, 0x100
    li r4, 0x24
    li r5, 0x1
    bl fn_80618420
    addi r3, r1, 0xd0
    li r4, 0x27
    li r5, 0x1
    bl fn_80618420
    addi r3, r1, 0xa0
    li r4, 0x2a
    li r5, 0x1
    bl fn_80618420
lbl_fn_800A981C_000004E0:
    lwz r3, lbl_8087EEE0
    mr r4, r26
    li r5, 0x0
    bl fn_800763FC
    li r3, 0x0
    li r4, 0x0
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl fn_80617730
    addi r25, r1, 0x78
    li r26, 0x0
lbl_fn_800A981C_00000510:
    cmpwi r26, 0x0
    ble lbl_fn_800A981C_00000534
    mr r3, r26
    li r4, 0xf
    li r5, 0x8
    li r6, 0xe
    li r7, 0x0
    bl fn_806173E0
    b lbl_fn_800A981C_0000054C
lbl_fn_800A981C_00000534:
    mr r3, r26
    li r4, 0xf
    li r5, 0x8
    li r6, 0xe
    li r7, 0xf
    bl fn_806173E0
lbl_fn_800A981C_0000054C:
    lwz r4, 0x0(r25)
    mr r3, r26
    bl fn_80617650
    subi r0, r26, 0x4
    mr r3, r26
    cntlzw r0, r0
    li r4, 0x0
    extrwi r7, r0, 8, 19
    li r5, 0x0
    li r6, 0x0
    li r8, 0x0
    bl fn_80617460
    mr r3, r26
    li r4, 0x0
    li r5, 0x0
    bl fn_806176F0
    mr r3, r26
    mr r4, r26
    li r5, 0x0
    li r6, 0xff
    bl fn_80617880
    mr r3, r26
    bl fn_80617220
    addi r26, r26, 0x1
    addi r25, r25, 0x4
    cmpwi r26, 0x5
    blt lbl_fn_800A981C_00000510
    li r3, 0x0
    li r4, 0x4
    li r5, 0x1
    li r6, 0x3
    bl fn_80617D50
    lwz r3, lbl_8087EFB4
    bl fn_800BFB70
    clrlwi r5, r28, 16
    clrlwi r6, r29, 16
    li r3, 0x0
    li r4, 0x0
    bl fn_80614CC0
    mr r5, r30
    clrlwi r3, r28, 16
    clrlwi r4, r29, 16
    li r6, 0x0
    bl fn_80614D30
    mr r3, r27
    li r4, 0x0
    bl fn_80615560
    bl fn_80614190
    bl fn_806167B0
    addi r11, r1, 0x2e0
    psq_l f31, 0x2f8(r1), 0, 0
    lfd f31, 0x2f0(r1)
    psq_l f30, 0x2e8(r1), 0, 0
    lfd f30, 0x2e0(r1)
    bl _restgpr_25
    lwz r0, 0x304(r1)
    mtlr r0
    addi r1, r1, 0x300
    blr
}

asm void fn_800A9E54(void)
{
    nofralloc
    lis r4, lbl_80778CE0@ha
    addi r4, r4, lbl_80778CE0@l
    stw r4, 0x0(r3)
    blr
}

asm void fn_800A9E64(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    addi r11, r1, 0xe0
    stfd f31, 0x110(r1)
    psq_st f31, 0x118(r1), 0, 0
    stfd f30, 0x100(r1)
    psq_st f30, 0x108(r1), 0, 0
    stfd f29, 0xf0(r1)
    psq_st f29, 0xf8(r1), 0, 0
    stfd f28, 0xe0(r1)
    psq_st f28, 0xe8(r1), 0, 0
    bl _savegpr_19
    lwz r4, lbl_8087EFA8
    lis r5, 0x4330
    lwz r7, lbl_8087EEE0
    mr r22, r3
    lwz r0, 0x5c(r4)
    li r3, 0x1
    lwz r31, 0x3c(r7)
    li r6, 0x6
    slw r0, r3, r0
    lwz r30, 0x40(r7)
    divw r25, r31, r0
    stw r5, 0x70(r1)
    lwz r3, lbl_8087EF8C
    stw r5, 0x78(r1)
    divw r24, r30, r0
    mr r4, r25
    mr r5, r24
    bl fn_800A96AC
    mr r27, r3
    addi r3, r22, 0x4
    mr r4, r27
    clrlwi r5, r25, 16
    clrlwi r6, r24, 16
    li r7, 0x6
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_80615FF0
    lfs f1, lbl_80880D28
    addi r3, r22, 0x4
    li r4, 0x1
    li r5, 0x1
    fmr f2, f1
    li r6, 0x0
    fmr f3, f1
    li r7, 0x0
    li r8, 0x0
    bl fn_80616250
    lwz r3, lbl_8087EF8C
    mr r4, r25
    mr r5, r24
    li r6, 0x6
    bl fn_800A96AC
    mr r26, r3
    addi r3, r22, 0x24
    mr r4, r26
    clrlwi r5, r25, 16
    clrlwi r6, r24, 16
    li r7, 0x6
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_80615FF0
    lfs f1, lbl_80880D28
    addi r3, r22, 0x24
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
    srawi r20, r4, 1
    add r0, r0, r31
    srawi r21, r0, 1
    li r6, 0x6
    mr r4, r21
    mr r5, r20
    bl fn_800A96AC
    mr r23, r3
    addi r3, r1, 0x50
    mr r4, r23
    clrlwi r5, r21, 16
    clrlwi r6, r20, 16
    li r7, 0x6
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_80615FF0
    lfs f1, lbl_80880D28
    addi r3, r1, 0x50
    li r4, 0x1
    li r5, 0x1
    fmr f2, f1
    li r6, 0x0
    fmr f3, f1
    li r7, 0x0
    li r8, 0x0
    bl fn_80616250
    slwi r29, r24, 1
    slwi r28, r25, 1
    lwz r3, lbl_8087EF8C
    mr r4, r28
    mr r5, r29
    li r6, 0x6
    bl fn_800A96AC
    mr r19, r3
    addi r3, r1, 0x30
    mr r4, r19
    clrlwi r5, r28, 16
    clrlwi r6, r29, 16
    li r7, 0x6
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_80615FF0
    clrlslwi r20, r24, 16, 1
    clrlslwi r21, r25, 16, 1
    clrlslwi r5, r25, 17, 1
    clrlslwi r6, r24, 17, 1
    li r3, 0x0
    li r4, 0x0
    bl fn_80614CC0
    clrlwi r3, r21, 16
    clrlwi r4, r20, 16
    li r5, 0x6
    li r6, 0x0
    bl fn_80614D30
    mr r3, r19
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
    mr r3, r23
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
    addi r4, r1, 0x50
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
    mr r7, r29
    li r4, 0x0
    li r5, 0x0
    bl fn_80075F58
    lwz r3, lbl_8087EFB4
    bl fn_800BFB70
    clrlwi r5, r21, 16
    clrlwi r6, r20, 16
    li r3, 0x0
    li r4, 0x0
    bl fn_80614CC0
    clrlwi r3, r25, 16
    clrlwi r4, r24, 16
    li r5, 0x6
    li r6, 0x1
    bl fn_80614D30
    mr r3, r27
    li r4, 0x1
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
    addi r4, r22, 0x4
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
    mr r6, r25
    mr r7, r24
    li r4, 0x0
    li r5, 0x0
    bl fn_80075F58
    lwz r3, lbl_8087EFB4
    bl fn_800BFB70
    lwz r3, lbl_8087EFA8
    li r23, 0x0
    lfs f28, lbl_80880D30
    addi r21, r3, 0x54
    mr r20, r21
lbl_fn_800A9E64_00000A28:
    li r3, 0x0
    li r4, 0xf
    li r5, 0x8
    li r6, 0xe
    li r7, 0xf
    bl fn_806173E0
    lwz r5, 0x68(r21)
    li r3, 0x0
    lwz r6, 0x74(r21)
    li r4, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_80617460
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_806176F0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0xff
    bl fn_80617880
    li r3, 0x0
    li r4, 0xc
    bl fn_80617650
    li r3, 0x0
    bl fn_80617220
    lfs f0, 0x38(r20)
    addi r4, r1, 0xc
    lfs f2, 0x3c(r20)
    li r3, 0x0
    fmuls f3, f28, f0
    lfs f1, 0x40(r20)
    lfs f0, 0x44(r20)
    fmuls f2, f28, f2
    fmuls f1, f28, f1
    fmuls f0, f28, f0
    fctiwz f3, f3
    fctiwz f2, f2
    fctiwz f1, f1
    stfd f3, 0x80(r1)
    fctiwz f0, f0
    stfd f2, 0x88(r1)
    lwz r7, 0x84(r1)
    stfd f1, 0x90(r1)
    lwz r6, 0x8c(r1)
    stfd f0, 0x98(r1)
    lwz r5, 0x94(r1)
    lwz r0, 0x9c(r1)
    stb r7, 0x8(r1)
    stb r6, 0x9(r1)
    stb r5, 0xa(r1)
    stb r0, 0xb(r1)
    lwz r0, 0x8(r1)
    stw r0, 0xc(r1)
    bl fn_806175F0
    li r3, 0x1
    li r4, 0x2
    li r5, 0x0
    li r6, 0x3
    bl fn_80617D50
    lwz r3, lbl_8087EFB4
    bl fn_800BFB70
    addi r23, r23, 0x1
    addi r20, r20, 0x10
    cmpwi r23, 0x3
    addi r21, r21, 0x4
    blt lbl_fn_800A9E64_00000A28
    li r3, 0x0
    li r4, 0x1
    li r5, 0x0
    li r6, 0x3
    bl fn_80617D50
    clrlwi r5, r25, 16
    clrlwi r6, r24, 16
    li r3, 0x0
    li r4, 0x0
    bl fn_80614CC0
    clrlwi r3, r25, 16
    clrlwi r4, r24, 16
    li r5, 0x6
    li r6, 0x0
    bl fn_80614D30
    mr r3, r26
    li r4, 0x0
    bl fn_80615560
    bl fn_80614190
    lwz r3, lbl_8087EFA8
    lfs f1, 0x74(r3)
    addi r23, r3, 0x78
    bl fn_8068AD58
    lwz r3, lbl_8087EFA8
    frsp f28, f1
    lfs f1, 0x74(r3)
    lfs f29, 0x6c(r3)
    bl fn_8068A850
    lwz r3, lbl_8087EFA8
    fneg f0, f28
    frsp f1, f1
    mr r4, r27
    lfs f3, 0x6c(r3)
    mr r5, r25
    fmuls f2, f0, f29
    fmuls f1, f1, f3
    mr r6, r24
    mr r8, r23
    addi r3, r22, 0x24
    li r7, 0x6
    li r9, 0x0
    bl fn_800A981C
    lwz r3, lbl_8087EFA8
    lfs f1, 0x74(r3)
    addi r23, r3, 0x78
    bl fn_8068A850
    lwz r3, lbl_8087EFA8
    frsp f28, f1
    lfs f1, 0x74(r3)
    lfs f29, 0x70(r3)
    bl fn_8068AD58
    frsp f0, f1
    lwz r3, lbl_8087EFA8
    fmuls f2, f28, f29
    mr r4, r27
    lfs f1, 0x70(r3)
    mr r5, r25
    fneg f0, f0
    mr r6, r24
    mr r8, r23
    addi r3, r22, 0x4
    li r7, 0x6
    li r9, 0x0
    fmuls f1, f0, f1
    bl fn_800A981C
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
    addi r4, r1, 0x30
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
    mr r7, r29
    li r4, 0x0
    li r5, 0x0
    bl fn_80075F58
    lwz r3, lbl_8087EFB4
    bl fn_800BFB70
    lwz r3, lbl_8087EEE0
    bl fn_80075DEC
    li r3, 0x1
    li r4, 0x1
    li r5, 0x1
    li r6, 0x3
    bl fn_80617D50
    lwz r3, lbl_8087EFA8
    addi r4, r22, 0x4
    lfs f0, lbl_80880D2C
    li r5, 0x0
    lfs f1, 0x68(r3)
    stfs f1, 0x20(r1)
    lwz r3, lbl_8087EEE0
    stfs f1, 0x24(r1)
    stfs f1, 0x28(r1)
    stfs f0, 0x2c(r1)
    bl fn_800763FC
    lfs f28, 0x20(r1)
    li r19, 0x1
    lfs f29, 0x24(r1)
    lfs f30, 0x28(r1)
    lfs f31, 0x2c(r1)
    b lbl_fn_800A9E64_00000D84
lbl_fn_800A9E64_00000D5C:
    lfs f1, lbl_80880D28
    addi r4, r1, 0x10
    stfs f28, 0x10(r1)
    fmr f2, f1
    lwz r3, lbl_8087EFB4
    stfs f29, 0x14(r1)
    stfs f30, 0x18(r1)
    stfs f31, 0x1c(r1)
    bl fn_800BFC18
    addi r19, r19, 0x1
lbl_fn_800A9E64_00000D84:
    lwz r3, lbl_8087EFA8
    lwz r0, 0x64(r3)
    cmpw r19, r0
    ble lbl_fn_800A9E64_00000D5C
    li r3, 0x0
    li r4, 0x1
    li r5, 0x0
    li r6, 0x3
    bl fn_80617D50
    lwz r3, lbl_8087EFA8
    lwz r0, 0x58(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800A9E64_00000E70
    xoris r0, r31, 0x8000
    stw r0, 0x74(r1)
    xoris r0, r30, 0x8000
    lis r23, lbl_80732B30@ha
    stw r0, 0x7c(r1)
    addi r5, r22, 0x24
    lfd f4, lbl_80732B30@l(r23)
    li r4, -0x1
    lfd f1, 0x70(r1)
    li r6, 0x0
    lfd f0, 0x78(r1)
    fsubs f3, f1, f4
    lfs f2, lbl_80880D38
    fsubs f0, f0, f4
    lfs f1, lbl_80880D44
    lwz r3, lbl_8087EEB0
    fdivs f4, f3, f2
    lfs f3, lbl_80880D28
    fdivs f5, f0, f2
    fmr f2, f1
    bl fn_8005DF90
    xoris r3, r30, 0x8000
    stw r3, 0x74(r1)
    xoris r0, r31, 0x8000
    lfd f4, lbl_80732B30@l(r23)
    lfd f0, 0x70(r1)
    addi r5, r22, 0x4
    stw r0, 0x7c(r1)
    li r4, -0x1
    fsubs f3, f0, f4
    lfs f5, lbl_80880D38
    stw r3, 0x74(r1)
    li r6, 0x0
    lfd f1, 0x78(r1)
    lfd f0, 0x70(r1)
    fsubs f2, f1, f4
    lfs f6, lbl_80880D48
    fdivs f7, f3, f5
    lwz r3, lbl_8087EEB0
    lfs f1, lbl_80880D44
    lfs f3, lbl_80880D28
    fsubs f0, f0, f4
    fdivs f4, f2, f5
    fdivs f5, f0, f5
    fadds f2, f6, f7
    bl fn_8005DF90
lbl_fn_800A9E64_00000E70:
    addi r11, r1, 0xe0
    psq_l f31, 0x118(r1), 0, 0
    lfd f31, 0x110(r1)
    psq_l f30, 0x108(r1), 0, 0
    lfd f30, 0x100(r1)
    psq_l f29, 0xf8(r1), 0, 0
    lfd f29, 0xf0(r1)
    psq_l f28, 0xe8(r1), 0, 0
    lfd f28, 0xe0(r1)
    bl _restgpr_19
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_800AA6C4(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    lis r4, lbl_80778D38@ha
    lfs f0, lbl_80880D54
    li r0, 0x0
    lfs f3, lbl_80880D50
    addi r8, r1, 0x88
    stw r31, 0xcc(r1)
    addi r4, r4, lbl_80778D38@l
    addi r7, r1, 0x98
    addi r6, r1, 0xa8
    stfs f3, 0x88(r1)
    addi r5, r1, 0xb8
    addi r12, r1, 0x48
    addi r31, r3, 0x58
    stfs f0, 0x8c(r1)
    addi r11, r1, 0x58
    addi r10, r1, 0x68
    addi r9, r1, 0x78
    psq_l f1, 0x0(r8), 0, 0
    stfs f0, 0x90(r1)
    stfs f0, 0x94(r1)
    psq_l f2, 0x8(r8), 0, 0
    stfs f0, 0x98(r1)
    stfs f3, 0x9c(r1)
    psq_st f1, 0x8(r3), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    stfs f0, 0xa0(r1)
    stfs f0, 0xa4(r1)
    psq_st f2, 0x10(r3), 0, 0
    psq_l f2, 0x8(r7), 0, 0
    stfs f0, 0xa8(r1)
    stfs f0, 0xac(r1)
    psq_st f1, 0x18(r3), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f3, 0xb0(r1)
    stfs f0, 0xb4(r1)
    psq_st f2, 0x20(r3), 0, 0
    psq_l f2, 0x8(r6), 0, 0
    stfs f0, 0xb8(r1)
    stfs f0, 0xbc(r1)
    psq_st f1, 0x28(r3), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    stfs f0, 0xc0(r1)
    stfs f0, 0xc4(r1)
    psq_st f2, 0x30(r3), 0, 0
    psq_l f2, 0x8(r5), 0, 0
    stfs f3, 0x48(r1)
    stfs f0, 0x4c(r1)
    psq_st f1, 0x38(r3), 0, 0
    psq_l f1, 0x0(r12), 0, 0
    stfs f0, 0x50(r1)
    stfs f0, 0x54(r1)
    psq_st f2, 0x40(r3), 0, 0
    psq_l f2, 0x8(r12), 0, 0
    stfs f0, 0x58(r1)
    stfs f3, 0x5c(r1)
    psq_st f1, 0x0(r31), 0, 0
    psq_l f1, 0x0(r11), 0, 0
    stfs f0, 0x60(r1)
    stfs f0, 0x64(r1)
    psq_st f2, 0x8(r31), 0, 0
    psq_l f2, 0x8(r11), 0, 0
    stfs f0, 0x68(r1)
    stfs f0, 0x6c(r1)
    psq_st f1, 0x68(r3), 0, 0
    psq_l f1, 0x0(r10), 0, 0
    stfs f3, 0x70(r1)
    stfs f0, 0x74(r1)
    psq_st f2, 0x70(r3), 0, 0
    psq_l f2, 0x8(r10), 0, 0
    stfs f0, 0x78(r1)
    stfs f0, 0x7c(r1)
    psq_st f1, 0x78(r3), 0, 0
    psq_l f1, 0x0(r9), 0, 0
    stfs f0, 0x80(r1)
    stfs f0, 0x84(r1)
    psq_st f2, 0x80(r3), 0, 0
    psq_l f2, 0x8(r9), 0, 0
    stw r4, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x48(r3)
    stw r0, 0x4c(r3)
    stfs f3, 0x50(r3)
    stw r0, 0x54(r3)
    stw r0, 0x98(r3)
    stw r0, 0x9c(r3)
    stfs f3, 0xa0(r3)
    psq_st f1, 0x88(r3), 0, 0
    psq_st f2, 0x90(r3), 0, 0
    stw r0, 0xa4(r3)
    stw r0, 0xe8(r3)
    stw r0, 0xec(r3)
    stfs f3, 0xf0(r3)
    stfs f3, 0x8(r1)
    stfs f0, 0xc(r1)
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    addi r4, r1, 0x8
    stfs f0, 0x18(r1)
    psq_l f1, 0x0(r4), 0, 0
    addi r6, r1, 0x18
    psq_l f2, 0x8(r4), 0, 0
    addi r5, r1, 0x28
    stfs f3, 0x1c(r1)
    addi r4, r1, 0x38
    psq_st f1, 0xa8(r3), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    psq_st f2, 0xb0(r3), 0, 0
    psq_l f2, 0x8(r6), 0, 0
    stfs f0, 0x28(r1)
    stfs f0, 0x2c(r1)
    psq_st f1, 0xb8(r3), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    stfs f3, 0x30(r1)
    stfs f0, 0x34(r1)
    psq_st f2, 0xc0(r3), 0, 0
    psq_l f2, 0x8(r5), 0, 0
    stfs f0, 0x38(r1)
    stfs f0, 0x3c(r1)
    psq_st f1, 0xc8(r3), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    stfs f0, 0x40(r1)
    stfs f0, 0x44(r1)
    psq_st f2, 0xd0(r3), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    psq_st f1, 0xd8(r3), 0, 0
    psq_st f2, 0xe0(r3), 0, 0
    stw r0, 0xf4(r3)
    stfs f0, 0xf8(r3)
    lwz r31, 0xcc(r1)
    addi r1, r1, 0xd0
    blr
}

asm void fn_800AA8DC(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    stw r31, 0x8c(r1)
    mr r31, r3
    lwz r3, lbl_8087EFB4
    bl fn_800C1424
    lwz r0, 0x260(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800AA8DC_000010F0
    addi r6, r3, 0x264
    b lbl_fn_800AA8DC_000010F8
lbl_fn_800AA8DC_000010F0:
    lwz r4, lbl_8087EFA8
    addi r6, r4, 0x324
lbl_fn_800AA8DC_000010F8:
    lfs f4, 0xf8(r31)
    lfs f3, lbl_80880D58
    lfs f0, lbl_80880D50
    fadds f3, f4, f3
    stfs f3, 0xf8(r31)
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_800AA8DC_00001120
    li r0, 0x0
    stw r0, 0xf4(r31)
lbl_fn_800AA8DC_00001120:
    lfs f0, 0xf8(r31)
    lfs f3, lbl_8087D828
    fcmpo cr0, f0, f3
    bge lbl_fn_800AA8DC_00001134
    b lbl_fn_800AA8DC_00001148
lbl_fn_800AA8DC_00001134:
    lfs f3, lbl_8087D82C
    fcmpo cr0, f0, f3
    ble lbl_fn_800AA8DC_00001144
    b lbl_fn_800AA8DC_00001148
lbl_fn_800AA8DC_00001144:
    fmr f3, f0
lbl_fn_800AA8DC_00001148:
    lwz r0, 0xf4(r31)
    stfs f3, 0xf8(r31)
    cmpwi r0, 0x0
    beq lbl_fn_800AA8DC_00001168
    lwz r4, lbl_8087EFA8
    lwz r0, 0x324(r4)
    cmpwi r0, 0x0
    bne lbl_fn_800AA8DC_00001274
lbl_fn_800AA8DC_00001168:
    lfs f0, lbl_80880D54
    stfs f0, 0xf8(r31)
    stw r3, 0xf4(r31)
    lwz r5, 0x0(r6)
    stw r5, 0x4(r31)
    psq_l f1, 0x4(r6), 0, 0
    psq_l f2, 0xc(r6), 0, 0
    psq_st f2, 0x10(r31), 0, 0
    psq_st f1, 0x8(r31), 0, 0
    psq_l f1, 0x14(r6), 0, 0
    psq_l f2, 0x1c(r6), 0, 0
    psq_st f2, 0x20(r31), 0, 0
    psq_st f1, 0x18(r31), 0, 0
    psq_l f1, 0x24(r6), 0, 0
    psq_l f2, 0x2c(r6), 0, 0
    psq_st f2, 0x30(r31), 0, 0
    psq_st f1, 0x28(r31), 0, 0
    psq_l f1, 0x34(r6), 0, 0
    psq_l f2, 0x3c(r6), 0, 0
    psq_st f2, 0x40(r31), 0, 0
    psq_l f2, 0x10(r31), 0, 0
    psq_st f1, 0x38(r31), 0, 0
    psq_l f1, 0x8(r31), 0, 0
    lwz r4, 0x44(r6)
    stw r4, 0x48(r31)
    lwz r0, 0x48(r6)
    stw r0, 0x4c(r31)
    lfs f0, 0x4c(r6)
    stfs f0, 0x50(r31)
    psq_st f1, 0xa8(r31), 0, 0
    psq_l f1, 0x18(r31), 0, 0
    psq_st f2, 0xb0(r31), 0, 0
    psq_l f2, 0x20(r31), 0, 0
    psq_st f1, 0xb8(r31), 0, 0
    psq_l f1, 0x28(r31), 0, 0
    psq_st f2, 0xc0(r31), 0, 0
    psq_l f2, 0x30(r31), 0, 0
    psq_st f1, 0xc8(r31), 0, 0
    psq_l f1, 0x38(r31), 0, 0
    psq_st f2, 0xd0(r31), 0, 0
    psq_l f2, 0x40(r31), 0, 0
    psq_st f1, 0xd8(r31), 0, 0
    psq_l f1, 0xa8(r31), 0, 0
    psq_st f2, 0xe0(r31), 0, 0
    psq_l f2, 0xb0(r31), 0, 0
    psq_st f1, 0x58(r31), 0, 0
    psq_l f1, 0xb8(r31), 0, 0
    psq_st f2, 0x60(r31), 0, 0
    psq_l f2, 0xc0(r31), 0, 0
    psq_st f1, 0x68(r31), 0, 0
    psq_l f1, 0xc8(r31), 0, 0
    psq_st f2, 0x70(r31), 0, 0
    psq_l f2, 0xd0(r31), 0, 0
    psq_st f1, 0x78(r31), 0, 0
    psq_l f1, 0xd8(r31), 0, 0
    psq_st f2, 0x80(r31), 0, 0
    psq_l f2, 0xe0(r31), 0, 0
    stw r5, 0xa4(r31)
    stw r4, 0xe8(r31)
    stw r0, 0xec(r31)
    stfs f0, 0xf0(r31)
    stw r5, 0x54(r31)
    psq_st f1, 0x88(r31), 0, 0
    psq_st f2, 0x90(r31), 0, 0
    stw r4, 0x98(r31)
    stw r0, 0x9c(r31)
    stfs f0, 0xa0(r31)
lbl_fn_800AA8DC_00001274:
    lwz r0, 0xf4(r31)
    cmplw r0, r3
    beq lbl_fn_800AA8DC_000012EC
    psq_l f1, 0x8(r31), 0, 0
    psq_l f2, 0x10(r31), 0, 0
    psq_st f1, 0x58(r31), 0, 0
    psq_l f1, 0x18(r31), 0, 0
    psq_st f2, 0x60(r31), 0, 0
    psq_l f2, 0x20(r31), 0, 0
    psq_st f1, 0x68(r31), 0, 0
    psq_l f1, 0x28(r31), 0, 0
    psq_st f2, 0x70(r31), 0, 0
    psq_l f2, 0x30(r31), 0, 0
    psq_st f1, 0x78(r31), 0, 0
    lfs f3, lbl_80880D54
    psq_st f2, 0x80(r31), 0, 0
    lwz r5, 0x4(r31)
    psq_l f1, 0x38(r31), 0, 0
    psq_l f2, 0x40(r31), 0, 0
    lwz r4, 0x48(r31)
    lwz r0, 0x4c(r31)
    lfs f0, 0x50(r31)
    stfs f3, 0xf8(r31)
    stw r3, 0xf4(r31)
    stw r5, 0x54(r31)
    psq_st f1, 0x88(r31), 0, 0
    psq_st f2, 0x90(r31), 0, 0
    stw r4, 0x98(r31)
    stw r0, 0x9c(r31)
    stfs f0, 0xa0(r31)
lbl_fn_800AA8DC_000012EC:
    lwz r3, 0x0(r6)
    li r0, 0x4
    stw r3, 0xa4(r31)
    addi r5, r1, 0x58
    lfs f3, 0xf8(r31)
    li r3, 0x0
    psq_l f1, 0x4(r6), 0, 0
    psq_l f2, 0xc(r6), 0, 0
    fmuls f5, f3, f3
    psq_st f2, 0xb0(r31), 0, 0
    lfs f0, lbl_80880D60
    psq_st f1, 0xa8(r31), 0, 0
    fmuls f4, f3, f5
    lfs f3, lbl_80880D5C
    psq_l f1, 0x14(r6), 0, 0
    psq_l f2, 0x1c(r6), 0, 0
    fmuls f4, f0, f4
    psq_st f2, 0xc0(r31), 0, 0
    lfs f0, lbl_80880D50
    psq_st f1, 0xb8(r31), 0, 0
    fmsubs f13, f3, f5, f4
    psq_l f1, 0x24(r6), 0, 0
    psq_l f2, 0x2c(r6), 0, 0
    fsubs f4, f0, f13
    psq_st f2, 0xd0(r31), 0, 0
    psq_st f1, 0xc8(r31), 0, 0
    psq_l f1, 0x34(r6), 0, 0
    psq_l f2, 0x3c(r6), 0, 0
    psq_st f2, 0xe0(r31), 0, 0
    psq_st f1, 0xd8(r31), 0, 0
    lwz r4, 0x44(r6)
    stw r4, 0xe8(r31)
    lwz r4, 0x48(r6)
    stw r4, 0xec(r31)
    lfs f0, 0x4c(r6)
    stfs f0, 0xf0(r31)
    mtctr r0
lbl_fn_800AA8DC_00001380:
    add r4, r31, r3
    addi r3, r3, 0x10
    lfs f0, 0xac(r4)
    lfs f3, 0x5c(r4)
    fmuls f9, f0, f13
    lfs f5, 0xa8(r4)
    fmuls f6, f3, f4
    lfs f0, 0x58(r4)
    fmuls f10, f5, f13
    lfs f3, 0xb4(r4)
    fmuls f7, f0, f4
    lfs f5, 0xb0(r4)
    fmuls f8, f3, f13
    lfs f3, 0x64(r4)
    lfs f0, 0x60(r4)
    fmuls f5, f5, f13
    fmuls f3, f3, f4
    stfs f10, 0x38(r1)
    fmuls f0, f0, f4
    fadds f12, f7, f10
    stfs f9, 0x3c(r1)
    fadds f11, f6, f9
    fadds f9, f3, f8
    stfs f12, 0x58(r1)
    fadds f10, f0, f5
    stfs f11, 0x5c(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f10, 0x60(r1)
    stfs f9, 0x64(r1)
    psq_st f1, 0x8(r4), 0, 0
    psq_l f2, 0x8(r5), 0, 0
    stfs f5, 0x40(r1)
    stfs f8, 0x44(r1)
    stfs f7, 0x48(r1)
    stfs f6, 0x4c(r1)
    stfs f0, 0x50(r1)
    stfs f3, 0x54(r1)
    psq_st f2, 0x10(r4), 0, 0
    bdnz lbl_fn_800AA8DC_00001380
    lwz r3, lbl_8087EFA8
    lwz r0, 0x36c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800AA8DC_000015F0
    lfs f3, lbl_80880D50
    lfs f0, 0x370(r3)
    fcmpo cr0, f3, f0
    bge lbl_fn_800AA8DC_00001440
    b lbl_fn_800AA8DC_00001444
lbl_fn_800AA8DC_00001440:
    fmr f3, f0
lbl_fn_800AA8DC_00001444:
    lfs f5, lbl_80880D54
    fcmpo cr0, f5, f3
    ble lbl_fn_800AA8DC_00001454
    b lbl_fn_800AA8DC_0000146C
lbl_fn_800AA8DC_00001454:
    lfs f5, lbl_80880D50
    lfs f0, 0x370(r3)
    fcmpo cr0, f5, f0
    bge lbl_fn_800AA8DC_00001468
    b lbl_fn_800AA8DC_0000146C
lbl_fn_800AA8DC_00001468:
    fmr f5, f0
lbl_fn_800AA8DC_0000146C:
    fmuls f6, f5, f5
    lfs f4, lbl_80880D60
    lfs f0, lbl_80880D5C
    lfs f8, lbl_80880D50
    fmuls f5, f5, f6
    lfs f3, 0x370(r3)
    fcmpo cr0, f8, f3
    fmuls f4, f4, f5
    fmsubs f0, f0, f6, f4
    ble lbl_fn_800AA8DC_00001498
    b lbl_fn_800AA8DC_0000149C
lbl_fn_800AA8DC_00001498:
    fmr f8, f3
lbl_fn_800AA8DC_0000149C:
    lfs f3, lbl_80880D50
    li r3, 0x0
    lfs f5, lbl_80880D64
    li r0, 0x4
    fsubs f6, f3, f0
    lfs f4, lbl_80880D68
    lfs f3, lbl_80880D6C
    fmuls f5, f5, f8
    stw r3, 0x78(r1)
    fmuls f4, f4, f8
    stw r3, 0x7c(r1)
    fmuls f3, f3, f8
    lfs f7, lbl_80880D54
    addi r6, r1, 0x78
    stw r3, 0x80(r1)
    addi r5, r1, 0x28
    li r4, 0x0
    stw r3, 0x84(r1)
    li r3, 0x0
    stfs f5, 0x78(r1)
    stfs f4, 0x7c(r1)
    stfs f3, 0x80(r1)
    mtctr r0
lbl_fn_800AA8DC_000014F8:
    lfsx f3, r6, r4
    fcmpo cr0, f7, f6
    stfs f3, 0x68(r1)
    fmuls f4, f3, f0
    stfs f3, 0x6c(r1)
    stfs f3, 0x70(r1)
    stfs f3, 0x74(r1)
    stfs f4, 0x8(r1)
    stfs f4, 0xc(r1)
    stfs f4, 0x10(r1)
    stfs f4, 0x14(r1)
    ble lbl_fn_800AA8DC_00001530
    fmr f4, f7
    b lbl_fn_800AA8DC_00001534
lbl_fn_800AA8DC_00001530:
    fmr f4, f6
lbl_fn_800AA8DC_00001534:
    add r7, r31, r3
    fcmpo cr0, f7, f6
    lfs f3, 0x14(r7)
    fmuls f8, f3, f4
    ble lbl_fn_800AA8DC_00001550
    fmr f4, f7
    b lbl_fn_800AA8DC_00001554
lbl_fn_800AA8DC_00001550:
    fmr f4, f6
lbl_fn_800AA8DC_00001554:
    lfs f3, 0x10(r7)
    fcmpo cr0, f7, f6
    fmuls f9, f3, f4
    ble lbl_fn_800AA8DC_0000156C
    fmr f4, f7
    b lbl_fn_800AA8DC_00001570
lbl_fn_800AA8DC_0000156C:
    fmr f4, f6
lbl_fn_800AA8DC_00001570:
    lfs f3, 0xc(r7)
    fcmpo cr0, f7, f6
    fmuls f10, f3, f4
    ble lbl_fn_800AA8DC_00001588
    fmr f5, f7
    b lbl_fn_800AA8DC_0000158C
lbl_fn_800AA8DC_00001588:
    fmr f5, f6
lbl_fn_800AA8DC_0000158C:
    lfs f3, 0x8(r7)
    addi r3, r3, 0x10
    lfs f4, 0xc(r1)
    addi r4, r4, 0x4
    fmuls f11, f3, f5
    lfs f3, 0x8(r1)
    fadds f12, f10, f4
    lfs f4, 0x10(r1)
    lfs f5, 0x14(r1)
    fadds f13, f11, f3
    fadds f3, f8, f5
    stfs f12, 0x2c(r1)
    fadds f4, f9, f4
    stfs f13, 0x28(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f4, 0x30(r1)
    stfs f3, 0x34(r1)
    psq_st f1, 0x8(r7), 0, 0
    psq_l f2, 0x8(r5), 0, 0
    stfs f11, 0x18(r1)
    stfs f10, 0x1c(r1)
    stfs f9, 0x20(r1)
    stfs f8, 0x24(r1)
    psq_st f2, 0x10(r7), 0, 0
    bdnz lbl_fn_800AA8DC_000014F8
lbl_fn_800AA8DC_000015F0:
    lwz r0, 0x94(r1)
    lwz r31, 0x8c(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_800AAE20(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0xf4(r3)
    blr
}

asm void fn_800AAE2C(void)
{
    nofralloc
    stwu r1, -0x1b0(r1)
    mflr r0
    li r4, 0x1
    stw r0, 0x1b4(r1)
    lis r0, 0x4330
    stfd f31, 0x1a0(r1)
    psq_st f31, 0x1a8(r1), 0, 0
    stw r31, 0x19c(r1)
    stw r30, 0x198(r1)
    mr r30, r3
    stw r0, 0x100(r1)
    lwz r3, lbl_8087EFB4
    stw r0, 0x108(r1)
    bl fn_800C0508
    bl fn_806167B0
    li r3, 0x1
    bl fn_80613BB0
    li r3, 0x0
    bl fn_80615D20
    li r3, 0x4
    bl fn_806179E0
    li r3, 0x0
    bl fn_80617200
    lwz r4, lbl_8087EFB4
    li r5, 0x0
    lwz r3, lbl_8087EEE0
    addi r4, r4, 0x74c
    bl fn_800763FC
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    lfs f12, lbl_80880D54
    li r0, 0x3
    lfs f2, 0x8(r30)
    addi r3, r1, 0xc0
    lfs f1, 0xc(r30)
    li r31, 0x0
    lfs f11, 0x10(r30)
    lfs f10, 0x18(r30)
    lfs f9, 0x1c(r30)
    lfs f8, 0x20(r30)
    lfs f7, 0x28(r30)
    lfs f6, 0x2c(r30)
    lfs f5, 0x30(r30)
    lfs f4, 0x38(r30)
    lfs f3, 0x3c(r30)
    lfs f0, 0x40(r30)
    stfs f2, 0xc0(r1)
    lfs f2, lbl_80880D60
    stfs f1, 0xc4(r1)
    lfs f1, lbl_80880D50
    stfs f11, 0xc8(r1)
    stfs f12, 0xcc(r1)
    stfs f10, 0xd0(r1)
    stfs f9, 0xd4(r1)
    stfs f8, 0xd8(r1)
    stfs f12, 0xdc(r1)
    stfs f7, 0xe0(r1)
    stfs f6, 0xe4(r1)
    stfs f5, 0xe8(r1)
    stfs f12, 0xec(r1)
    stfs f4, 0xf0(r1)
    stfs f3, 0xf4(r1)
    stfs f0, 0xf8(r1)
    stfs f12, 0xfc(r1)
    mtctr r0
lbl_fn_800AAE2C_00001728:
    lfs f0, 0x0(r3)
    lfs f5, 0xc(r3)
    lfs f4, 0x8(r3)
    fcmpo cr0, f0, f2
    lfs f3, 0x4(r3)
    stfs f0, 0x70(r1)
    stfs f3, 0x74(r1)
    stfs f4, 0x78(r1)
    stfs f5, 0x7c(r1)
    ble lbl_fn_800AAE2C_00001768
    cmpwi r31, 0x2
    li r0, 0x2
    ble lbl_fn_800AAE2C_00001760
    mr r0, r31
lbl_fn_800AAE2C_00001760:
    mr r31, r0
    b lbl_fn_800AAE2C_00001784
lbl_fn_800AAE2C_00001768:
    fcmpo cr0, f0, f1
    ble lbl_fn_800AAE2C_00001784
    cmpwi r31, 0x1
    li r0, 0x1
    ble lbl_fn_800AAE2C_00001780
    mr r0, r31
lbl_fn_800AAE2C_00001780:
    mr r31, r0
lbl_fn_800AAE2C_00001784:
    lfs f0, 0x74(r1)
    fcmpo cr0, f0, f2
    ble lbl_fn_800AAE2C_000017A8
    cmpwi r31, 0x2
    li r0, 0x2
    ble lbl_fn_800AAE2C_000017A0
    mr r0, r31
lbl_fn_800AAE2C_000017A0:
    mr r31, r0
    b lbl_fn_800AAE2C_000017C4
lbl_fn_800AAE2C_000017A8:
    fcmpo cr0, f0, f1
    ble lbl_fn_800AAE2C_000017C4
    cmpwi r31, 0x1
    li r0, 0x1
    ble lbl_fn_800AAE2C_000017C0
    mr r0, r31
lbl_fn_800AAE2C_000017C0:
    mr r31, r0
lbl_fn_800AAE2C_000017C4:
    lfs f0, 0x78(r1)
    fcmpo cr0, f0, f2
    ble lbl_fn_800AAE2C_000017E8
    cmpwi r31, 0x2
    li r0, 0x2
    ble lbl_fn_800AAE2C_000017E0
    mr r0, r31
lbl_fn_800AAE2C_000017E0:
    mr r31, r0
    b lbl_fn_800AAE2C_00001804
lbl_fn_800AAE2C_000017E8:
    fcmpo cr0, f0, f1
    ble lbl_fn_800AAE2C_00001804
    cmpwi r31, 0x1
    li r0, 0x1
    ble lbl_fn_800AAE2C_00001800
    mr r0, r31
lbl_fn_800AAE2C_00001800:
    mr r31, r0
lbl_fn_800AAE2C_00001804:
    lfs f0, 0x7c(r1)
    fcmpo cr0, f0, f2
    ble lbl_fn_800AAE2C_00001828
    cmpwi r31, 0x2
    li r0, 0x2
    ble lbl_fn_800AAE2C_00001820
    mr r0, r31
lbl_fn_800AAE2C_00001820:
    mr r31, r0
    b lbl_fn_800AAE2C_00001844
lbl_fn_800AAE2C_00001828:
    fcmpo cr0, f0, f1
    ble lbl_fn_800AAE2C_00001844
    cmpwi r31, 0x1
    li r0, 0x1
    ble lbl_fn_800AAE2C_00001840
    mr r0, r31
lbl_fn_800AAE2C_00001840:
    mr r31, r0
lbl_fn_800AAE2C_00001844:
    addi r3, r3, 0x10
    bdnz lbl_fn_800AAE2C_00001728
    li r0, 0x1
    lis r4, lbl_80732B60@ha
    slw r0, r0, r31
    lis r3, lbl_80732B68@ha
    xoris r0, r0, 0x8000
    stw r0, 0x104(r1)
    lfd f2, lbl_80732B60@l(r4)
    li r0, 0x3
    lfd f1, 0x100(r1)
    addi r6, r1, 0xc0
    lfs f0, lbl_80880D50
    addi r7, r1, 0x80
    fsubs f1, f1, f2
    lfs f10, lbl_8087D830
    lfs f9, lbl_8087D838
    lfs f8, lbl_8087D840
    fdivs f0, f0, f1
    lfs f7, lbl_8087D848
    lfs f6, lbl_80880D70
    lfd f5, lbl_80732B68@l(r3)
    mtctr r0
lbl_fn_800AAE2C_000018A0:
    lfs f2, 0x0(r6)
    lfs f11, 0xc(r6)
    fmuls f1, f2, f0
    lfs f4, 0x8(r6)
    lfs f3, 0x4(r6)
    stfs f2, 0x60(r1)
    fcmpo cr0, f1, f10
    stfs f3, 0x64(r1)
    stfs f4, 0x68(r1)
    stfs f11, 0x6c(r1)
    bge lbl_fn_800AAE2C_000018D4
    fmr f2, f10
    b lbl_fn_800AAE2C_000018E8
lbl_fn_800AAE2C_000018D4:
    lfs f2, lbl_8087D834
    fcmpo cr0, f1, f2
    ble lbl_fn_800AAE2C_000018E4
    b lbl_fn_800AAE2C_000018E8
lbl_fn_800AAE2C_000018E4:
    fmr f2, f1
lbl_fn_800AAE2C_000018E8:
    lfs f1, 0x64(r1)
    stfs f2, 0x60(r1)
    fmuls f1, f1, f0
    fcmpo cr0, f1, f9
    bge lbl_fn_800AAE2C_00001904
    fmr f2, f9
    b lbl_fn_800AAE2C_00001918
lbl_fn_800AAE2C_00001904:
    lfs f2, lbl_8087D83C
    fcmpo cr0, f1, f2
    ble lbl_fn_800AAE2C_00001914
    b lbl_fn_800AAE2C_00001918
lbl_fn_800AAE2C_00001914:
    fmr f2, f1
lbl_fn_800AAE2C_00001918:
    lfs f1, 0x68(r1)
    stfs f2, 0x64(r1)
    fmuls f1, f1, f0
    fcmpo cr0, f1, f8
    bge lbl_fn_800AAE2C_00001934
    fmr f2, f8
    b lbl_fn_800AAE2C_00001948
lbl_fn_800AAE2C_00001934:
    lfs f2, lbl_8087D844
    fcmpo cr0, f1, f2
    ble lbl_fn_800AAE2C_00001944
    b lbl_fn_800AAE2C_00001948
lbl_fn_800AAE2C_00001944:
    fmr f2, f1
lbl_fn_800AAE2C_00001948:
    lfs f1, 0x6c(r1)
    stfs f2, 0x68(r1)
    fmuls f1, f1, f0
    fcmpo cr0, f1, f7
    bge lbl_fn_800AAE2C_00001964
    fmr f3, f7
    b lbl_fn_800AAE2C_00001978
lbl_fn_800AAE2C_00001964:
    lfs f3, lbl_8087D84C
    fcmpo cr0, f1, f3
    ble lbl_fn_800AAE2C_00001974
    b lbl_fn_800AAE2C_00001978
lbl_fn_800AAE2C_00001974:
    fmr f3, f1
lbl_fn_800AAE2C_00001978:
    frsp f31, f3
    lfs f13, 0x68(r1)
    lfs f11, 0x60(r1)
    addi r6, r6, 0x10
    lfs f12, 0x64(r1)
    fmuls f2, f6, f13
    fmuls f4, f6, f11
    stfs f3, 0x6c(r1)
    fmuls f3, f6, f12
    fmuls f1, f6, f31
    stfs f11, 0x30(r1)
    fctiwz f4, f4
    fctiwz f3, f3
    stfs f12, 0x34(r1)
    fctiwz f2, f2
    fctiwz f1, f1
    stfd f4, 0x110(r1)
    stfd f3, 0x118(r1)
    lwz r5, 0x114(r1)
    stfd f2, 0x120(r1)
    lwz r4, 0x11c(r1)
    stfd f1, 0x128(r1)
    lwz r3, 0x124(r1)
    lwz r0, 0x12c(r1)
    stb r5, 0x18(r1)
    stb r4, 0x19(r1)
    stb r3, 0x1a(r1)
    stb r0, 0x1b(r1)
    lwz r0, 0x18(r1)
    stw r0, 0x2c(r1)
    lbz r0, 0x2c(r1)
    stw r0, 0x10c(r1)
    lbz r0, 0x2d(r1)
    stw r0, 0x104(r1)
    lfd f1, 0x108(r1)
    lbz r0, 0x2e(r1)
    stw r0, 0x10c(r1)
    fsubs f1, f1, f5
    lfd f3, 0x100(r1)
    lbz r0, 0x2f(r1)
    fdivs f4, f1, f6
    stw r0, 0x104(r1)
    lfd f2, 0x108(r1)
    lfd f1, 0x100(r1)
    stfs f13, 0x38(r1)
    stfs f31, 0x3c(r1)
    fsubs f3, f3, f5
    stfs f4, 0x0(r7)
    fsubs f2, f2, f5
    fsubs f1, f1, f5
    stfs f4, 0x40(r1)
    fdivs f3, f3, f6
    stfs f3, 0x4(r7)
    fdivs f2, f2, f6
    stfs f3, 0x44(r1)
    stfs f2, 0x8(r7)
    fdivs f1, f1, f6
    stfs f2, 0x48(r1)
    stfs f1, 0xc(r7)
    addi r7, r7, 0x10
    stfs f1, 0x4c(r1)
    bdnz lbl_fn_800AAE2C_000018A0
    lfs f4, lbl_80880D70
    addi r4, r1, 0x28
    lfs f0, 0x80(r1)
    li r3, 0x0
    lfs f2, 0x84(r1)
    fmuls f3, f4, f0
    lfs f1, 0x88(r1)
    lfs f0, 0x8c(r1)
    fmuls f2, f4, f2
    fmuls f1, f4, f1
    lfs f5, 0x38(r30)
    fmuls f0, f4, f0
    lfs f4, lbl_80880D74
    fctiwz f3, f3
    fctiwz f2, f2
    stfd f3, 0x128(r1)
    fctiwz f1, f1
    fctiwz f0, f0
    stfd f2, 0x120(r1)
    fadds f3, f4, f5
    lfs f2, 0x3c(r30)
    stfd f1, 0x118(r1)
    fadds f2, f4, f2
    lfs f1, 0x40(r30)
    stfd f0, 0x110(r1)
    fadds f1, f4, f1
    lfs f0, 0x44(r30)
    lwz r7, 0x12c(r1)
    fadds f0, f4, f0
    lwz r6, 0x124(r1)
    lwz r5, 0x11c(r1)
    lwz r0, 0x114(r1)
    stb r7, 0x14(r1)
    stb r6, 0x15(r1)
    stb r5, 0x16(r1)
    stb r0, 0x17(r1)
    lwz r0, 0x14(r1)
    stfs f3, 0x50(r1)
    stfs f2, 0x54(r1)
    stfs f1, 0x58(r1)
    stfs f0, 0x5c(r1)
    stfs f3, 0xb0(r1)
    stfs f2, 0xb4(r1)
    stfs f1, 0xb8(r1)
    stfs f0, 0xbc(r1)
    stw r0, 0x28(r1)
    bl fn_806175F0
    lfs f4, lbl_80880D70
    addi r4, r1, 0x24
    lfs f0, 0x90(r1)
    li r3, 0x1
    lfs f2, 0x94(r1)
    fmuls f3, f4, f0
    lfs f1, 0x98(r1)
    lfs f0, 0x9c(r1)
    fmuls f2, f4, f2
    fmuls f1, f4, f1
    fmuls f0, f4, f0
    fctiwz f3, f3
    fctiwz f2, f2
    fctiwz f1, f1
    stfd f3, 0x130(r1)
    fctiwz f0, f0
    stfd f2, 0x138(r1)
    lwz r7, 0x134(r1)
    stfd f1, 0x140(r1)
    lwz r6, 0x13c(r1)
    stfd f0, 0x148(r1)
    lwz r5, 0x144(r1)
    lwz r0, 0x14c(r1)
    stb r7, 0x10(r1)
    stb r6, 0x11(r1)
    stb r5, 0x12(r1)
    stb r0, 0x13(r1)
    lwz r0, 0x10(r1)
    stw r0, 0x24(r1)
    bl fn_806175F0
    lfs f4, lbl_80880D70
    addi r4, r1, 0x20
    lfs f0, 0xa0(r1)
    li r3, 0x2
    lfs f2, 0xa4(r1)
    fmuls f3, f4, f0
    lfs f1, 0xa8(r1)
    lfs f0, 0xac(r1)
    fmuls f2, f4, f2
    fmuls f1, f4, f1
    fmuls f0, f4, f0
    fctiwz f3, f3
    fctiwz f2, f2
    fctiwz f1, f1
    stfd f3, 0x150(r1)
    fctiwz f0, f0
    stfd f2, 0x158(r1)
    lwz r7, 0x154(r1)
    stfd f1, 0x160(r1)
    lwz r6, 0x15c(r1)
    stfd f0, 0x168(r1)
    lwz r5, 0x164(r1)
    lwz r0, 0x16c(r1)
    stb r7, 0xc(r1)
    stb r6, 0xd(r1)
    stb r5, 0xe(r1)
    stb r0, 0xf(r1)
    lwz r0, 0xc(r1)
    stw r0, 0x20(r1)
    bl fn_806175F0
    lfs f4, lbl_80880D70
    addi r4, r1, 0x1c
    lfs f0, 0xb0(r1)
    li r3, 0x3
    lfs f2, 0xb4(r1)
    fmuls f3, f4, f0
    lfs f1, 0xb8(r1)
    lfs f0, 0xbc(r1)
    fmuls f2, f4, f2
    fmuls f1, f4, f1
    fmuls f0, f4, f0
    fctiwz f3, f3
    fctiwz f2, f2
    fctiwz f1, f1
    stfd f3, 0x170(r1)
    fctiwz f0, f0
    stfd f2, 0x178(r1)
    lwz r7, 0x174(r1)
    stfd f1, 0x180(r1)
    lwz r6, 0x17c(r1)
    stfd f0, 0x188(r1)
    lwz r5, 0x184(r1)
    lwz r0, 0x18c(r1)
    stb r7, 0x8(r1)
    stb r6, 0x9(r1)
    stb r5, 0xa(r1)
    stb r0, 0xb(r1)
    lwz r0, 0x8(r1)
    stw r0, 0x1c(r1)
    bl fn_806175F0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    bl fn_80617730
    li r3, 0x1
    li r4, 0x1
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    bl fn_80617730
    li r3, 0x2
    li r4, 0x2
    li r5, 0x2
    li r6, 0x2
    li r7, 0x2
    bl fn_80617730
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_806176F0
    li r3, 0x0
    li r4, 0xc
    bl fn_80617650
    li r3, 0x0
    li r4, 0xf
    li r5, 0xe
    li r6, 0x8
    li r7, 0xf
    bl fn_806173E0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_80617460
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0xff
    bl fn_80617880
    li r3, 0x0
    bl fn_80617220
    li r3, 0x1
    li r4, 0x1
    li r5, 0x1
    bl fn_806176F0
    li r3, 0x1
    li r4, 0xd
    bl fn_80617650
    li r3, 0x1
    li r4, 0xf
    li r5, 0xe
    li r6, 0x8
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
    li r4, 0x0
    li r5, 0x0
    li r6, 0xff
    bl fn_80617880
    li r3, 0x1
    bl fn_80617220
    li r3, 0x2
    li r4, 0x2
    li r5, 0x2
    bl fn_806176F0
    li r3, 0x2
    li r4, 0xe
    bl fn_80617650
    li r3, 0x2
    li r4, 0xf
    li r5, 0xe
    li r6, 0x8
    li r7, 0x0
    bl fn_806173E0
    mr r6, r31
    li r3, 0x2
    li r4, 0x0
    li r5, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_80617460
    li r3, 0x2
    li r4, 0x0
    li r5, 0x0
    li r6, 0xff
    bl fn_80617880
    li r3, 0x2
    bl fn_80617220
    li r3, 0x3
    li r4, 0xf
    bl fn_80617650
    li r3, 0x3
    li r4, 0xe
    li r5, 0xf
    li r6, 0xf
    li r7, 0x0
    bl fn_806173E0
    li r3, 0x3
    li r4, 0x0
    li r5, 0x2
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_80617460
    li r3, 0x3
    li r4, 0xff
    li r5, 0xff
    li r6, 0xff
    bl fn_80617880
    li r3, 0x3
    bl fn_80617220
    li r3, 0x0
    li r4, 0x4
    li r5, 0x1
    li r6, 0x3
    bl fn_80617D50
    lwz r3, lbl_8087EFB4
    bl fn_800BFB70
    li r3, 0x0
    li r4, 0x0
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl fn_80617730
    li r3, 0x1
    li r4, 0x0
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl fn_80617730
    li r3, 0x2
    li r4, 0x0
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl fn_80617730
    li r3, 0x3
    li r4, 0x0
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl fn_80617730
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
    lwz r0, 0x1b4(r1)
    psq_l f31, 0x1a8(r1), 0, 0
    lfd f31, 0x1a0(r1)
    lwz r31, 0x19c(r1)
    lwz r30, 0x198(r1)
    mtlr r0
    addi r1, r1, 0x1b0
    blr
}
