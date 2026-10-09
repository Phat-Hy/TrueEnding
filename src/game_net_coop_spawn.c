#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_23(void);
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_23(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_8006EF48(void);
extern void fn_800A4450(void);
extern void fn_800DC6B4(void);
extern void fn_80116FC0(void);
extern void fn_80124C6C(void);
extern void fn_801EFA78(void);
extern void fn_801F48C8(void);
extern void fn_801F4E8C(void);
extern void fn_801F6C2C(void);
extern void fn_801F6C80(void);
extern void fn_801F6D7C(void);
extern void fn_801FECE0(void);
extern void fn_801FED24(void);
extern void fn_801FEE08(void);
extern void fn_80695D84(void);
extern char* strcpy(char* dest, const char* src);

/* External data declarations */
extern u8 jumptable_807907B0[];
extern u8 lbl_80757110[];
extern u8 lbl_807573B8[];
extern u8 lbl_807573D0[];

/* Small data declarations */
extern u32 lbl_8087E0E0;
extern u32 lbl_8087EEC8;
extern u32 lbl_8087EEE0;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F1E4;
extern u32 lbl_8087F490;
extern u32 lbl_8087F580;
extern u32 lbl_808813D0;
extern u32 lbl_808871D0;
extern u32 lbl_808871E4;
extern u32 lbl_80887200;
extern u32 lbl_80887218;
extern u32 lbl_80887220;
extern u32 lbl_80887224;
extern u32 lbl_80887228;
extern u32 lbl_8088722C;
extern u32 lbl_80887230;
extern u32 lbl_80887234;
extern u32 lbl_80887238;
extern u32 lbl_8088723C;
extern u32 lbl_80887240;

/* Function declarations */
void fn_804A55FC(void);
void fn_804A5824(void);
void fn_804A5B9C(void);
void fn_804A5CD8(void);
void fn_804A5D34(void);
void fn_804A5E40(void);
void fn_804A62C8(void);
void fn_804A65A0(void);
void fn_804A660C(void);

asm void fn_804A55FC(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r11, r1, 0x70
    bl _savegpr_26
    lwz r8, 0x88(r3)
    mr r28, r4
    mr r27, r3
    mr r29, r5
    addi r4, r8, 0x1
    mr r30, r6
    cmpwi r4, 0x4
    mr r31, r7
    bge lbl_fn_804A55FC_00000118
    slwi r0, r4, 2
    stw r4, 0x88(r3)
    add r3, r3, r0
    lwz r3, 0x8c(r3)
    cmpwi r3, 0x0
    beq lbl_fn_804A55FC_00000118
    lis r26, lbl_807573D0@ha
    lfs f1, 0x0(r6)
    addi r26, r26, lbl_807573D0@l
    li r5, 0x0
    addi r4, r26, 0x128
    bl fn_801F6D7C
    lwz r0, 0x88(r27)
    addi r4, r26, 0x128
    lfs f1, 0x4(r30)
    li r5, 0x1
    slwi r0, r0, 2
    add r3, r27, r0
    lwz r3, 0x8c(r3)
    bl fn_801F6D7C
    lwz r0, 0x88(r27)
    addi r4, r26, 0x128
    lfs f1, 0x10(r30)
    li r5, 0x4
    slwi r0, r0, 2
    add r3, r27, r0
    lwz r3, 0x8c(r3)
    bl fn_801F6D7C
    lwz r0, 0x88(r27)
    addi r4, r26, 0x133
    lfs f1, 0x8(r30)
    slwi r0, r0, 2
    add r3, r27, r0
    lwz r3, 0x8c(r3)
    bl fn_801F6C80
    lwz r0, 0x88(r27)
    addi r4, r26, 0x139
    lfs f1, 0xc(r30)
    slwi r0, r0, 2
    add r3, r27, r0
    lwz r3, 0x8c(r3)
    bl fn_801F6C80
    cmpwi r31, 0x0
    beq lbl_fn_804A55FC_00000118
    lwz r0, 0x88(r27)
    slwi r0, r0, 2
    add r3, r27, r0
    lwz r3, 0x8c(r3)
    bl fn_801F6C2C
    lwz r0, 0x88(r27)
    lfs f0, lbl_80887220
    slwi r0, r0, 2
    add r3, r27, r0
    fsubs f0, f1, f0
    lwz r3, 0x8c(r3)
    stfs f0, 0x50(r3)
lbl_fn_804A55FC_00000118:
    cmpwi r28, 0x0
    beq lbl_fn_804A55FC_00000210
    lwz r0, 0x9c(r27)
    cmplwi r0, 0x4
    bge lbl_fn_804A55FC_00000210
    li r0, 0x0
    stw r0, 0x8(r1)
    addi r3, r1, 0x10
    li r4, 0x0
    stw r0, 0xc(r1)
    li r5, 0x40
    bl memset
    cmpwi r29, 0x0
    stw r28, 0xc(r1)
    beq lbl_fn_804A55FC_00000160
    mr r4, r29
    addi r3, r1, 0x10
    bl strcpy
lbl_fn_804A55FC_00000160:
    lwz r0, 0x9c(r27)
    mulli r0, r0, 0x48
    add r0, r27, r0
    addic. r4, r0, 0xa0
    beq lbl_fn_804A55FC_00000204
    lwz r0, 0x8(r1)
    stw r0, 0x0(r4)
    lwz r0, 0xc(r1)
    stw r0, 0x4(r4)
    lwz r0, 0x14(r1)
    lwz r3, 0x10(r1)
    stw r3, 0x8(r4)
    stw r0, 0xc(r4)
    lwz r0, 0x1c(r1)
    lwz r3, 0x18(r1)
    stw r3, 0x10(r4)
    stw r0, 0x14(r4)
    lwz r0, 0x24(r1)
    lwz r3, 0x20(r1)
    stw r3, 0x18(r4)
    stw r0, 0x1c(r4)
    lwz r0, 0x2c(r1)
    lwz r3, 0x28(r1)
    stw r3, 0x20(r4)
    stw r0, 0x24(r4)
    lwz r0, 0x34(r1)
    lwz r3, 0x30(r1)
    stw r3, 0x28(r4)
    stw r0, 0x2c(r4)
    lwz r0, 0x3c(r1)
    lwz r3, 0x38(r1)
    stw r3, 0x30(r4)
    stw r0, 0x34(r4)
    lwz r0, 0x44(r1)
    lwz r3, 0x40(r1)
    stw r3, 0x38(r4)
    stw r0, 0x3c(r4)
    lwz r0, 0x4c(r1)
    lwz r3, 0x48(r1)
    stw r3, 0x40(r4)
    stw r0, 0x44(r4)
lbl_fn_804A55FC_00000204:
    lwz r3, 0x9c(r27)
    addi r0, r3, 0x1
    stw r0, 0x9c(r27)
lbl_fn_804A55FC_00000210:
    addi r11, r1, 0x70
    bl _restgpr_26
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_804A5824(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    addi r11, r1, 0x90
    stfd f31, 0x90(r1)
    psq_st f31, 0x98(r1), 0, 0
    bl _savegpr_27
    cmpwi r4, 0x0
    mr r28, r4
    mr r29, r5
    mr r30, r6
    beq lbl_fn_804A5824_00000580
    cmpwi r5, 0x0
    bne lbl_fn_804A5824_00000264
    b lbl_fn_804A5824_00000580
lbl_fn_804A5824_00000264:
    mr r3, r29
    bl fn_800DC6B4
    mr r4, r3
    addi r3, r28, 0x48
    bl fn_801EFA78
    cmpwi r3, 0x0
    mr r27, r3
    beq lbl_fn_804A5824_00000580
    lhz r0, 0x8(r3)
    cmplwi r0, 0x1
    beq lbl_fn_804A5824_00000294
    b lbl_fn_804A5824_00000580
lbl_fn_804A5824_00000294:
    mr r3, r29
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r28
    addi r3, r1, 0x14
    bl fn_801F4E8C
    addi r3, r1, 0x8
    addi r4, r27, 0x134
    li r5, 0x0
    li r6, 0x0
    bl fn_800A4450
    lwz r0, 0x8(r1)
    lwz r3, lbl_8087EEC8
    srwi. r0, r0, 31
    lfs f1, 0x1c(r1)
    bne lbl_fn_804A5824_000002DC
    addi r4, r1, 0xa
    b lbl_fn_804A5824_000002E0
lbl_fn_804A5824_000002DC:
    lwz r4, 0x10(r1)
lbl_fn_804A5824_000002E0:
    lhz r6, 0x12c(r27)
    li r5, 0x1
    lfs f2, lbl_808871D0
    bl fn_8006EF48
    lwz r0, 0x8(r1)
    fmr f31, f1
    srwi. r0, r0, 31
    beq lbl_fn_804A5824_00000308
    lwz r3, 0x10(r1)
    bl dtor_80084684
lbl_fn_804A5824_00000308:
    lhz r0, 0x12e(r27)
    cmplwi r0, 0x1
    bne lbl_fn_804A5824_00000330
    lfs f2, lbl_80887224
    lfs f1, lbl_808871E4
    lfs f0, 0x14(r1)
    fmadds f1, f2, f31, f1
    fsubs f0, f0, f1
    stfs f0, 0x14(r1)
    b lbl_fn_804A5824_00000360
lbl_fn_804A5824_00000330:
    cmplwi r0, 0x2
    bne lbl_fn_804A5824_00000350
    lfs f1, lbl_808871E4
    lfs f0, 0x14(r1)
    fadds f1, f1, f31
    fsubs f0, f0, f1
    stfs f0, 0x14(r1)
    b lbl_fn_804A5824_00000360
lbl_fn_804A5824_00000350:
    lfs f1, 0x14(r1)
    lfs f0, lbl_808871E4
    fsubs f0, f1, f0
    stfs f0, 0x14(r1)
lbl_fn_804A5824_00000360:
    lfs f5, lbl_808871E4
    lfs f3, lbl_80887228
    fadds f4, f5, f31
    lfs f2, 0x20(r1)
    lfs f1, 0x24(r1)
    lfs f0, lbl_80887200
    fmuls f2, f3, f2
    fadds f4, f5, f4
    fsubs f0, f1, f0
    stfs f2, 0x20(r1)
    lwz r31, lbl_8087F580
    fmuls f1, f3, f4
    stfs f0, 0x24(r1)
    stfs f1, 0x1c(r1)
    lwz r3, 0x88(r31)
    addi r3, r3, 0x1
    cmpwi r3, 0x4
    bge lbl_fn_804A5824_00000488
    slwi r0, r3, 2
    stw r3, 0x88(r31)
    add r3, r31, r0
    lwz r3, 0x8c(r3)
    cmpwi r3, 0x0
    beq lbl_fn_804A5824_00000488
    lis r27, lbl_807573D0@ha
    lfs f1, 0x14(r1)
    addi r27, r27, lbl_807573D0@l
    li r5, 0x0
    addi r4, r27, 0x128
    bl fn_801F6D7C
    lwz r0, 0x88(r31)
    addi r4, r27, 0x128
    lfs f1, 0x18(r1)
    li r5, 0x1
    slwi r0, r0, 2
    add r3, r31, r0
    lwz r3, 0x8c(r3)
    bl fn_801F6D7C
    lwz r0, 0x88(r31)
    addi r4, r27, 0x128
    lfs f1, 0x24(r1)
    li r5, 0x4
    slwi r0, r0, 2
    add r3, r31, r0
    lwz r3, 0x8c(r3)
    bl fn_801F6D7C
    lwz r0, 0x88(r31)
    addi r4, r27, 0x133
    lfs f1, 0x1c(r1)
    slwi r0, r0, 2
    add r3, r31, r0
    lwz r3, 0x8c(r3)
    bl fn_801F6C80
    lwz r0, 0x88(r31)
    addi r4, r27, 0x139
    lfs f1, 0x20(r1)
    slwi r0, r0, 2
    add r3, r31, r0
    lwz r3, 0x8c(r3)
    bl fn_801F6C80
    cmpwi r30, 0x0
    beq lbl_fn_804A5824_00000488
    lwz r0, 0x88(r31)
    slwi r0, r0, 2
    add r3, r31, r0
    lwz r3, 0x8c(r3)
    bl fn_801F6C2C
    lwz r0, 0x88(r31)
    lfs f0, lbl_80887220
    slwi r0, r0, 2
    add r3, r31, r0
    fsubs f0, f1, f0
    lwz r3, 0x8c(r3)
    stfs f0, 0x50(r3)
lbl_fn_804A5824_00000488:
    cmpwi r28, 0x0
    beq lbl_fn_804A5824_00000580
    lwz r0, 0x9c(r31)
    cmplwi r0, 0x4
    bge lbl_fn_804A5824_00000580
    li r0, 0x0
    stw r0, 0x28(r1)
    addi r3, r1, 0x30
    li r4, 0x0
    stw r0, 0x2c(r1)
    li r5, 0x40
    bl memset
    cmpwi r29, 0x0
    stw r28, 0x28(r1)
    beq lbl_fn_804A5824_000004D0
    mr r4, r29
    addi r3, r1, 0x30
    bl strcpy
lbl_fn_804A5824_000004D0:
    lwz r0, 0x9c(r31)
    mulli r0, r0, 0x48
    add r0, r31, r0
    addic. r4, r0, 0xa0
    beq lbl_fn_804A5824_00000574
    lwz r0, 0x28(r1)
    stw r0, 0x0(r4)
    lwz r0, 0x2c(r1)
    stw r0, 0x4(r4)
    lwz r0, 0x34(r1)
    lwz r3, 0x30(r1)
    stw r3, 0x8(r4)
    stw r0, 0xc(r4)
    lwz r0, 0x3c(r1)
    lwz r3, 0x38(r1)
    stw r3, 0x10(r4)
    stw r0, 0x14(r4)
    lwz r0, 0x44(r1)
    lwz r3, 0x40(r1)
    stw r3, 0x18(r4)
    stw r0, 0x1c(r4)
    lwz r0, 0x4c(r1)
    lwz r3, 0x48(r1)
    stw r3, 0x20(r4)
    stw r0, 0x24(r4)
    lwz r0, 0x54(r1)
    lwz r3, 0x50(r1)
    stw r3, 0x28(r4)
    stw r0, 0x2c(r4)
    lwz r0, 0x5c(r1)
    lwz r3, 0x58(r1)
    stw r3, 0x30(r4)
    stw r0, 0x34(r4)
    lwz r0, 0x64(r1)
    lwz r3, 0x60(r1)
    stw r3, 0x38(r4)
    stw r0, 0x3c(r4)
    lwz r0, 0x6c(r1)
    lwz r3, 0x68(r1)
    stw r3, 0x40(r4)
    stw r0, 0x44(r4)
lbl_fn_804A5824_00000574:
    lwz r3, 0x9c(r31)
    addi r0, r3, 0x1
    stw r0, 0x9c(r31)
lbl_fn_804A5824_00000580:
    addi r11, r1, 0x90
    psq_l f31, 0x98(r1), 0, 0
    lfd f31, 0x90(r1)
    bl _restgpr_27
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_804A5B9C(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    mr r31, r3
    stw r30, 0x58(r1)
    mr r30, r5
    stw r29, 0x54(r1)
    mr r29, r4
    beq lbl_fn_804A5B9C_000006C0
    lwz r0, 0x9c(r3)
    cmplwi r0, 0x4
    blt lbl_fn_804A5B9C_000005DC
    b lbl_fn_804A5B9C_000006C0
lbl_fn_804A5B9C_000005DC:
    li r0, 0x0
    stw r0, 0x8(r1)
    addi r3, r1, 0x10
    li r4, 0x0
    stw r0, 0xc(r1)
    li r5, 0x40
    bl memset
    cmpwi r30, 0x0
    stw r29, 0x8(r1)
    beq lbl_fn_804A5B9C_00000610
    mr r4, r30
    addi r3, r1, 0x10
    bl strcpy
lbl_fn_804A5B9C_00000610:
    lwz r0, 0x9c(r31)
    mulli r0, r0, 0x48
    add r0, r31, r0
    addic. r4, r0, 0xa0
    beq lbl_fn_804A5B9C_000006B4
    lwz r0, 0x8(r1)
    stw r0, 0x0(r4)
    lwz r0, 0xc(r1)
    stw r0, 0x4(r4)
    lwz r0, 0x14(r1)
    lwz r3, 0x10(r1)
    stw r3, 0x8(r4)
    stw r0, 0xc(r4)
    lwz r0, 0x1c(r1)
    lwz r3, 0x18(r1)
    stw r3, 0x10(r4)
    stw r0, 0x14(r4)
    lwz r0, 0x24(r1)
    lwz r3, 0x20(r1)
    stw r3, 0x18(r4)
    stw r0, 0x1c(r4)
    lwz r0, 0x2c(r1)
    lwz r3, 0x28(r1)
    stw r3, 0x20(r4)
    stw r0, 0x24(r4)
    lwz r0, 0x34(r1)
    lwz r3, 0x30(r1)
    stw r3, 0x28(r4)
    stw r0, 0x2c(r4)
    lwz r0, 0x3c(r1)
    lwz r3, 0x38(r1)
    stw r3, 0x30(r4)
    stw r0, 0x34(r4)
    lwz r0, 0x44(r1)
    lwz r3, 0x40(r1)
    stw r3, 0x38(r4)
    stw r0, 0x3c(r4)
    lwz r0, 0x4c(r1)
    lwz r3, 0x48(r1)
    stw r3, 0x40(r4)
    stw r0, 0x44(r4)
lbl_fn_804A5B9C_000006B4:
    lwz r3, 0x9c(r31)
    addi r0, r3, 0x1
    stw r0, 0x9c(r31)
lbl_fn_804A5B9C_000006C0:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_804A5CD8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r5, lbl_807573D0@ha
    stw r0, 0x24(r1)
    addi r5, r5, lbl_807573D0@l
    stfd f31, 0x18(r1)
    fmr f31, f1
    stw r31, 0x14(r1)
    lwz r4, 0x1c8(r3)
    addi r3, r5, 0x1c8
    addi r31, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r31
    li r5, 0x4
    bl fn_801FED24
    lwz r0, 0x24(r1)
    lfd f31, 0x18(r1)
    lwz r31, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804A5D34(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r9, lbl_807573D0@ha
    cmpwi r5, 0x0
    stw r0, 0x24(r1)
    addi r9, r9, lbl_807573D0@l
    stmw r27, 0xc(r1)
    mr r27, r3
    mr r28, r6
    mr r29, r7
    lwz r8, 0x1c8(r3)
    stw r4, 0x1c0(r3)
    addi r3, r9, 0x157
    addi r31, r8, 0x58
    beq lbl_fn_804A5D34_0000077C
    mr r30, r5
    b lbl_fn_804A5D34_00000780
lbl_fn_804A5D34_0000077C:
    la r30, lbl_8087E0E0
lbl_fn_804A5D34_00000780:
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r31
    mr r5, r30
    bl fn_801FEE08
    lwz r4, 0x1c8(r27)
    lis r3, lbl_807573D0@ha
    addi r3, r3, lbl_807573D0@l
    cmpwi r28, 0x0
    addi r3, r3, 0x15d
    addi r30, r4, 0x58
    beq lbl_fn_804A5D34_000007B4
    b lbl_fn_804A5D34_000007B8
lbl_fn_804A5D34_000007B4:
    la r28, lbl_8087E0E0
lbl_fn_804A5D34_000007B8:
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r30
    mr r5, r28
    bl fn_801FEE08
    lwz r4, 0x1c8(r27)
    lis r3, lbl_807573D0@ha
    addi r3, r3, lbl_807573D0@l
    cmpwi r29, 0x0
    addi r3, r3, 0x163
    addi r30, r4, 0x58
    beq lbl_fn_804A5D34_000007EC
    b lbl_fn_804A5D34_000007F0
lbl_fn_804A5D34_000007EC:
    la r29, lbl_8087E0E0
lbl_fn_804A5D34_000007F0:
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r30
    mr r5, r29
    bl fn_801FEE08
    lwz r4, 0x1c8(r27)
    lis r3, lbl_807573D0@ha
    addi r3, r3, lbl_807573D0@l
    la r31, lbl_8087E0E0
    addi r3, r3, 0x169
    addi r30, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r30
    mr r5, r31
    bl fn_801FEE08
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804A5E40(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    addi r11, r1, 0x70
    stfd f31, 0x90(r1)
    psq_st f31, 0x98(r1), 0, 0
    stfd f30, 0x80(r1)
    psq_st f30, 0x88(r1), 0, 0
    stfd f29, 0x70(r1)
    psq_st f29, 0x78(r1), 0, 0
    bl _savegpr_25
    cmpwi r4, 0x0
    mr r27, r3
    mr r28, r4
    mr r29, r5
    blt lbl_fn_804A5E40_00000C9C
    cmpwi r4, 0x11
    blt lbl_fn_804A5E40_00000890
    b lbl_fn_804A5E40_00000C9C
lbl_fn_804A5E40_00000890:
    lwz r9, 0x1cc(r3)
    cmpwi r9, 0x2
    bge lbl_fn_804A5E40_00000C9C
    lwz r8, lbl_8087EEE0
    mulli r0, r4, 0x28
    lis r7, lbl_80757110@ha
    lwz r4, 0x44(r8)
    addi r7, r7, lbl_80757110@l
    cmpwi r4, 0x0
    add r30, r7, r0
    beq lbl_fn_804A5E40_000008C4
    lfs f30, 0x0(r30)
    b lbl_fn_804A5E40_000008C8
lbl_fn_804A5E40_000008C4:
    lfs f30, 0x8(r30)
lbl_fn_804A5E40_000008C8:
    cmpwi r4, 0x0
    beq lbl_fn_804A5E40_000008D8
    lfs f29, 0x4(r30)
    b lbl_fn_804A5E40_000008DC
lbl_fn_804A5E40_000008D8:
    lfs f29, 0xc(r30)
lbl_fn_804A5E40_000008DC:
    slwi r0, r9, 2
    lis r31, lbl_807573D0@ha
    add r3, r3, r0
    stw r6, 0x1d0(r3)
    addi r31, r31, lbl_807573D0@l
    addi r3, r31, 0x1d0
    lwz r0, 0x1cc(r27)
    lfs f0, 0x0(r5)
    slwi r0, r0, 2
    add r4, r27, r0
    fadds f31, f30, f0
    lwz r4, 0x1d8(r4)
    addi r26, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r26
    li r5, 0x0
    bl fn_801FED24
    lwz r0, 0x1cc(r27)
    addi r3, r31, 0x1d0
    lfs f0, 0x4(r29)
    slwi r0, r0, 2
    add r4, r27, r0
    fadds f31, f29, f0
    lwz r4, 0x1d8(r4)
    addi r26, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r26
    li r5, 0x1
    bl fn_801FED24
    lwz r0, 0x1cc(r27)
    addi r3, r31, 0x1d0
    lfs f31, 0x10(r30)
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x1d8(r4)
    addi r26, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r26
    li r5, 0x4
    bl fn_801FED24
    lwz r0, 0x1cc(r27)
    addi r3, r31, 0x1d8
    lfs f31, 0x14(r30)
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x1d8(r4)
    addi r26, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r26
    bl fn_801FECE0
    lwz r4, lbl_8087F0A8
    addi r3, r1, 0x38
    lwz r5, 0x20(r30)
    addi r4, r4, 0x48c
    bl fn_80124C6C
    lwz r0, 0x1cc(r27)
    addi r4, r31, 0x1e0
    addi r5, r1, 0x38
    slwi r0, r0, 2
    add r3, r27, r0
    lwz r3, 0x1d8(r3)
    bl fn_801F48C8
    lwz r4, lbl_8087F0A8
    addi r3, r1, 0x28
    lwz r5, 0x20(r30)
    addi r4, r4, 0x48c
    bl fn_80124C6C
    lwz r0, 0x1cc(r27)
    addi r4, r31, 0x1e6
    addi r5, r1, 0x28
    slwi r0, r0, 2
    add r3, r27, r0
    lwz r3, 0x1d8(r3)
    bl fn_801F48C8
    lwz r0, 0x1cc(r27)
    addi r3, r31, 0x1f0
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x1d8(r4)
    addi r26, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r26
    addi r5, r30, 0x18
    bl fn_801FEE08
    lwz r4, 0x24(r30)
    li r3, 0x0
    bl fn_80116FC0
    lwz r0, 0x1cc(r27)
    mr r26, r3
    addi r3, r31, 0x1fa
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x1d8(r4)
    addi r25, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r25
    mr r5, r26
    bl fn_801FEE08
    lwz r0, 0x1cc(r27)
    addi r3, r31, 0x1d0
    lfs f0, 0x0(r29)
    slwi r0, r0, 2
    add r4, r27, r0
    fadds f31, f30, f0
    lwz r4, 0x1e0(r4)
    addi r25, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r25
    li r5, 0x0
    bl fn_801FED24
    lwz r0, 0x1cc(r27)
    addi r3, r31, 0x1d0
    lfs f0, 0x4(r29)
    slwi r0, r0, 2
    add r4, r27, r0
    fadds f31, f29, f0
    lwz r4, 0x1e0(r4)
    addi r25, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r25
    li r5, 0x1
    bl fn_801FED24
    lwz r0, 0x1cc(r27)
    addi r3, r31, 0x1d0
    lfs f31, 0x10(r30)
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x1e0(r4)
    addi r25, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r25
    li r5, 0x4
    bl fn_801FED24
    lwz r0, 0x1cc(r27)
    addi r3, r31, 0x1d8
    lfs f31, 0x14(r30)
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x1e0(r4)
    addi r25, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r25
    bl fn_801FECE0
    lwz r4, lbl_8087F0A8
    addi r3, r1, 0x18
    lwz r5, 0x20(r30)
    addi r4, r4, 0x48c
    bl fn_80124C6C
    lwz r0, 0x1cc(r27)
    addi r4, r31, 0x1e0
    addi r5, r1, 0x18
    slwi r0, r0, 2
    add r3, r27, r0
    lwz r3, 0x1e0(r3)
    bl fn_801F48C8
    lwz r4, lbl_8087F0A8
    addi r3, r1, 0x8
    lwz r5, 0x20(r30)
    addi r4, r4, 0x48c
    bl fn_80124C6C
    lwz r0, 0x1cc(r27)
    addi r4, r31, 0x1e6
    addi r5, r1, 0x8
    slwi r0, r0, 2
    add r3, r27, r0
    lwz r3, 0x1e0(r3)
    bl fn_801F48C8
    lwz r0, 0x1cc(r27)
    addi r3, r31, 0x1f0
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x1e0(r4)
    addi r25, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r25
    addi r5, r30, 0x18
    bl fn_801FEE08
    lwz r4, 0x24(r30)
    li r3, 0x0
    bl fn_80116FC0
    lwz r0, 0x1cc(r27)
    mr r26, r3
    addi r3, r31, 0x1fa
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x1e0(r4)
    addi r25, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r25
    mr r5, r26
    bl fn_801FEE08
    subi r0, r28, 0x6
    cmplwi r0, 0x1
    bgt lbl_fn_804A5E40_00000C64
    lwz r0, 0x1cc(r27)
    li r4, 0x13
    slwi r0, r0, 2
    add r3, r27, r0
    lwz r3, 0x1d8(r3)
    stw r4, 0x108(r3)
    lwz r0, 0x1cc(r27)
    slwi r0, r0, 2
    add r3, r27, r0
    lwz r3, 0x1e0(r3)
    stw r4, 0x108(r3)
    b lbl_fn_804A5E40_00000C90
lbl_fn_804A5E40_00000C64:
    lwz r0, 0x1cc(r27)
    li r4, 0x12
    slwi r0, r0, 2
    add r3, r27, r0
    lwz r3, 0x1d8(r3)
    stw r4, 0x108(r3)
    lwz r0, 0x1cc(r27)
    slwi r0, r0, 2
    add r3, r27, r0
    lwz r3, 0x1e0(r3)
    stw r4, 0x108(r3)
lbl_fn_804A5E40_00000C90:
    lwz r3, 0x1cc(r27)
    addi r0, r3, 0x1
    stw r0, 0x1cc(r27)
lbl_fn_804A5E40_00000C9C:
    addi r11, r1, 0x70
    psq_l f31, 0x98(r1), 0, 0
    lfd f31, 0x90(r1)
    psq_l f30, 0x88(r1), 0, 0
    lfd f30, 0x80(r1)
    psq_l f29, 0x78(r1), 0, 0
    lfd f29, 0x70(r1)
    bl _restgpr_25
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_804A62C8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    lwz r29, 0x6c(r3)
    cmpwi r29, 0x0
    beq lbl_fn_804A62C8_00000F84
    cmplwi r4, 0xa
    bgt lbl_fn_804A62C8_00000F38
    lis r3, jumptable_807907B0@ha
    slwi r0, r4, 2
    addi r3, r3, jumptable_807907B0@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    li r3, 0x1
    li r4, 0x104
    bl fn_80116FC0
    lwz r4, 0x6c(r30)
    lis r5, lbl_807573D0@ha
    addi r5, r5, lbl_807573D0@l
    mr r29, r3
    addi r3, r5, 0x206
    addi r28, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r28
    mr r5, r29
    bl fn_801FEE08
    b lbl_fn_804A62C8_00000F70
    li r3, 0x1
    li r4, 0x108
    bl fn_80116FC0
    lwz r4, 0x6c(r30)
    lis r5, lbl_807573D0@ha
    addi r5, r5, lbl_807573D0@l
    mr r29, r3
    addi r3, r5, 0x206
    addi r28, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r28
    mr r5, r29
    bl fn_801FEE08
    b lbl_fn_804A62C8_00000F70
    li r3, 0x1
    li r4, 0x109
    bl fn_80116FC0
    lwz r4, 0x6c(r30)
    lis r5, lbl_807573D0@ha
    addi r5, r5, lbl_807573D0@l
    mr r29, r3
    addi r3, r5, 0x206
    addi r28, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r28
    mr r5, r29
    bl fn_801FEE08
    b lbl_fn_804A62C8_00000F70
    li r3, 0x1
    li r4, 0x10a
    bl fn_80116FC0
    lwz r4, 0x6c(r30)
    lis r5, lbl_807573D0@ha
    addi r5, r5, lbl_807573D0@l
    mr r29, r3
    addi r3, r5, 0x206
    addi r28, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r28
    mr r5, r29
    bl fn_801FEE08
    b lbl_fn_804A62C8_00000F70
    li r3, 0x1
    li r4, 0x10b
    bl fn_80116FC0
    lwz r4, 0x6c(r30)
    lis r5, lbl_807573D0@ha
    addi r5, r5, lbl_807573D0@l
    mr r29, r3
    addi r3, r5, 0x206
    addi r28, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r28
    mr r5, r29
    bl fn_801FEE08
    b lbl_fn_804A62C8_00000F70
    li r3, 0x1
    li r4, 0x10c
    bl fn_80116FC0
    lwz r4, 0x6c(r30)
    lis r5, lbl_807573D0@ha
    addi r5, r5, lbl_807573D0@l
    mr r29, r3
    addi r3, r5, 0x206
    addi r28, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r28
    mr r5, r29
    bl fn_801FEE08
    b lbl_fn_804A62C8_00000F70
    li r3, 0x1
    li r4, 0x10e
    bl fn_80116FC0
    lwz r4, 0x6c(r30)
    lis r5, lbl_807573D0@ha
    addi r5, r5, lbl_807573D0@l
    mr r29, r3
    addi r3, r5, 0x206
    addi r28, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r28
    mr r5, r29
    bl fn_801FEE08
    b lbl_fn_804A62C8_00000F70
    li r3, 0x1
    li r4, 0x10f
    bl fn_80116FC0
    lwz r4, 0x6c(r30)
    lis r5, lbl_807573D0@ha
    addi r5, r5, lbl_807573D0@l
    mr r29, r3
    addi r3, r5, 0x206
    addi r28, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r28
    mr r5, r29
    bl fn_801FEE08
    b lbl_fn_804A62C8_00000F70
    li r3, 0x1
    li r4, 0x110
    bl fn_80116FC0
    lwz r4, 0x6c(r30)
    lis r5, lbl_807573D0@ha
    addi r5, r5, lbl_807573D0@l
    mr r29, r3
    addi r3, r5, 0x206
    addi r28, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r28
    mr r5, r29
    bl fn_801FEE08
    b lbl_fn_804A62C8_00000F70
lbl_fn_804A62C8_00000F38:
    lwz r3, lbl_8087F1E4
    lwz r28, 0xdb4(r3)
    cmpwi r28, 0x0
    beq lbl_fn_804A62C8_00000F4C
    b lbl_fn_804A62C8_00000F50
lbl_fn_804A62C8_00000F4C:
    la r28, lbl_808813D0
lbl_fn_804A62C8_00000F50:
    lis r3, lbl_807573D0@ha
    addi r3, r3, lbl_807573D0@l
    addi r3, r3, 0x206
    bl fn_800DC6B4
    mr r4, r3
    mr r5, r28
    addi r3, r29, 0x58
    bl fn_801FEE08
lbl_fn_804A62C8_00000F70:
    cntlzw r0, r31
    li r3, 0x1
    srwi r0, r0, 5
    stw r3, 0x64(r30)
    stw r0, 0x68(r30)
lbl_fn_804A62C8_00000F84:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804A65A0(void)
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
    lis r3, lbl_807573D0@ha
    lwz r5, 0x60(r29)
    addi r3, r3, lbl_807573D0@l
    addi r3, r3, 0x16f
    addi r31, r5, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r31
    mr r5, r30
    bl fn_801FEE08
    li r0, 0x1
    stw r0, 0x5c(r29)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804A660C(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    addi r11, r1, 0x80
    bl _savegpr_23
    cmpwi r4, 0x0
    lis r0, 0x4330
    stw r0, 0x48(r1)
    mr r23, r3
    mr r24, r4
    mr r31, r5
    stw r0, 0x50(r1)
    mr r28, r6
    mr r29, r7
    beq lbl_fn_804A660C_00001BDC
    cmpwi r5, 0x0
    bne lbl_fn_804A660C_00001058
    b lbl_fn_804A660C_00001BDC
lbl_fn_804A660C_00001058:
    addi r26, r3, 0xa0
    li r27, 0x0
    li r30, 0x0
    b lbl_fn_804A660C_000010B8
lbl_fn_804A660C_00001068:
    lwz r0, 0x0(r26)
    cmplw r0, r24
    bne lbl_fn_804A660C_000010B0
    lbz r0, 0x8(r26)
    extsb. r0, r0
    bne lbl_fn_804A660C_00001098
    lwz r0, 0x10(r31)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_804A660C_000010B0
    li r27, 0x1
    b lbl_fn_804A660C_000010B0
lbl_fn_804A660C_00001098:
    lwz r25, 0x4(r31)
    addi r3, r26, 0x8
    bl fn_800DC6B4
    cmplw r25, r3
    bne lbl_fn_804A660C_000010B0
    li r27, 0x1
lbl_fn_804A660C_000010B0:
    addi r26, r26, 0x48
    addi r30, r30, 0x1
lbl_fn_804A660C_000010B8:
    lwz r0, 0x9c(r23)
    cmplw r30, r0
    blt lbl_fn_804A660C_00001068
    cmpwi r27, 0x0
    beq lbl_fn_804A660C_00001BDC
    cmpwi r28, 0x0
    beq lbl_fn_804A660C_00001BDC
    lfs f2, 0x0(r28)
    lfs f0, lbl_808871E4
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_804A660C_000010F0
    li r27, 0xff
    b lbl_fn_804A660C_0000111C
lbl_fn_804A660C_000010F0:
    lfs f0, lbl_808871D0
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_804A660C_00001108
    li r3, 0x0
    b lbl_fn_804A660C_00001118
lbl_fn_804A660C_00001108:
    lfs f1, lbl_80887218
    lfs f0, lbl_80887224
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_804A660C_00001118:
    mr r27, r3
lbl_fn_804A660C_0000111C:
    lfs f2, 0x4(r28)
    lfs f0, lbl_808871E4
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_804A660C_00001138
    li r26, 0xff
    b lbl_fn_804A660C_00001164
lbl_fn_804A660C_00001138:
    lfs f0, lbl_808871D0
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_804A660C_00001150
    li r3, 0x0
    b lbl_fn_804A660C_00001160
lbl_fn_804A660C_00001150:
    lfs f1, lbl_80887218
    lfs f0, lbl_80887224
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_804A660C_00001160:
    mr r26, r3
lbl_fn_804A660C_00001164:
    lfs f2, 0x8(r28)
    lfs f0, lbl_808871E4
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_804A660C_00001180
    li r25, 0xff
    b lbl_fn_804A660C_000011AC
lbl_fn_804A660C_00001180:
    lfs f0, lbl_808871D0
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_804A660C_00001198
    li r3, 0x0
    b lbl_fn_804A660C_000011A8
lbl_fn_804A660C_00001198:
    lfs f1, lbl_80887218
    lfs f0, lbl_80887224
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_804A660C_000011A8:
    mr r25, r3
lbl_fn_804A660C_000011AC:
    lfs f2, 0xc(r28)
    lfs f0, lbl_808871E4
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_804A660C_000011C8
    li r3, 0xff
    b lbl_fn_804A660C_000011F0
lbl_fn_804A660C_000011C8:
    lfs f0, lbl_808871D0
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_804A660C_000011E0
    li r3, 0x0
    b lbl_fn_804A660C_000011F0
lbl_fn_804A660C_000011E0:
    lfs f1, lbl_80887218
    lfs f0, lbl_80887224
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_804A660C_000011F0:
    lfs f2, 0x0(r28)
    slwi r3, r3, 24
    lfs f0, lbl_808871E4
    slwi r0, r27, 16
    or r3, r3, r0
    slwi r0, r26, 8
    fcmpo cr0, f2, f0
    or r0, r0, r3
    or r0, r25, r0
    clrrwi r30, r0, 24
    cror eq, gt, eq
    bne lbl_fn_804A660C_00001228
    li r27, 0xff
    b lbl_fn_804A660C_00001254
lbl_fn_804A660C_00001228:
    lfs f0, lbl_808871D0
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_804A660C_00001240
    li r3, 0x0
    b lbl_fn_804A660C_00001250
lbl_fn_804A660C_00001240:
    lfs f1, lbl_80887218
    lfs f0, lbl_80887224
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_804A660C_00001250:
    mr r27, r3
lbl_fn_804A660C_00001254:
    lfs f2, 0x4(r28)
    lfs f0, lbl_808871E4
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_804A660C_00001270
    li r26, 0xff
    b lbl_fn_804A660C_0000129C
lbl_fn_804A660C_00001270:
    lfs f0, lbl_808871D0
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_804A660C_00001288
    li r3, 0x0
    b lbl_fn_804A660C_00001298
lbl_fn_804A660C_00001288:
    lfs f1, lbl_80887218
    lfs f0, lbl_80887224
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_804A660C_00001298:
    mr r26, r3
lbl_fn_804A660C_0000129C:
    lfs f2, 0x8(r28)
    lfs f0, lbl_808871E4
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_804A660C_000012B8
    li r25, 0xff
    b lbl_fn_804A660C_000012E4
lbl_fn_804A660C_000012B8:
    lfs f0, lbl_808871D0
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_804A660C_000012D0
    li r3, 0x0
    b lbl_fn_804A660C_000012E0
lbl_fn_804A660C_000012D0:
    lfs f1, lbl_80887218
    lfs f0, lbl_80887224
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_804A660C_000012E0:
    mr r25, r3
lbl_fn_804A660C_000012E4:
    lfs f2, 0xc(r28)
    lfs f0, lbl_808871E4
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_804A660C_00001300
    li r3, 0xff
    b lbl_fn_804A660C_00001328
lbl_fn_804A660C_00001300:
    lfs f0, lbl_808871D0
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_804A660C_00001318
    li r3, 0x0
    b lbl_fn_804A660C_00001328
lbl_fn_804A660C_00001318:
    lfs f1, lbl_80887218
    lfs f0, lbl_80887224
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_804A660C_00001328:
    lfs f2, lbl_8088722C
    slwi r3, r3, 24
    lfs f0, lbl_808871E4
    slwi r0, r27, 16
    or r3, r3, r0
    lfs f1, lbl_808871D0
    slwi r0, r26, 8
    fcmpo cr0, f2, f0
    or r0, r0, r3
    stfs f2, 0x8(r1)
    or r0, r25, r0
    stfs f2, 0xc(r1)
    clrlwi r31, r0, 8
    stfs f2, 0x10(r1)
    stfs f1, 0x14(r1)
    cror eq, gt, eq
    bne lbl_fn_804A660C_00001374
    li r27, 0xff
    b lbl_fn_804A660C_0000139C
lbl_fn_804A660C_00001374:
    fcmpo cr0, f2, f1
    cror eq, lt, eq
    bne lbl_fn_804A660C_00001388
    li r3, 0x0
    b lbl_fn_804A660C_00001398
lbl_fn_804A660C_00001388:
    lfs f1, lbl_80887218
    lfs f0, lbl_80887224
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_804A660C_00001398:
    mr r27, r3
lbl_fn_804A660C_0000139C:
    lfs f2, 0xc(r1)
    lfs f0, lbl_808871E4
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_804A660C_000013B8
    li r26, 0xff
    b lbl_fn_804A660C_000013E4
lbl_fn_804A660C_000013B8:
    lfs f0, lbl_808871D0
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_804A660C_000013D0
    li r3, 0x0
    b lbl_fn_804A660C_000013E0
lbl_fn_804A660C_000013D0:
    lfs f1, lbl_80887218
    lfs f0, lbl_80887224
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_804A660C_000013E0:
    mr r26, r3
lbl_fn_804A660C_000013E4:
    lfs f2, 0x10(r1)
    lfs f0, lbl_808871E4
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_804A660C_00001400
    li r25, 0xff
    b lbl_fn_804A660C_0000142C
lbl_fn_804A660C_00001400:
    lfs f0, lbl_808871D0
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_804A660C_00001418
    li r3, 0x0
    b lbl_fn_804A660C_00001428
lbl_fn_804A660C_00001418:
    lfs f1, lbl_80887218
    lfs f0, lbl_80887224
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_804A660C_00001428:
    mr r25, r3
lbl_fn_804A660C_0000142C:
    lfs f2, 0x14(r1)
    lfs f0, lbl_808871E4
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_804A660C_00001448
    li r3, 0xff
    b lbl_fn_804A660C_00001470
lbl_fn_804A660C_00001448:
    lfs f0, lbl_808871D0
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_804A660C_00001460
    li r3, 0x0
    b lbl_fn_804A660C_00001470
lbl_fn_804A660C_00001460:
    lfs f1, lbl_80887218
    lfs f0, lbl_80887224
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_804A660C_00001470:
    slwi r3, r3, 24
    slwi r0, r27, 16
    or r3, r3, r0
    slwi r0, r26, 8
    or r0, r0, r3
    or r0, r25, r0
    cmplw r31, r0
    beq lbl_fn_804A660C_00001878
    lfs f2, lbl_80887230
    lfs f0, lbl_808871E4
    lfs f1, lbl_808871D0
    fcmpo cr0, f2, f0
    stfs f2, 0x18(r1)
    stfs f2, 0x1c(r1)
    stfs f2, 0x20(r1)
    stfs f1, 0x24(r1)
    cror eq, gt, eq
    bne lbl_fn_804A660C_000014C0
    li r27, 0xff
    b lbl_fn_804A660C_000014E8
lbl_fn_804A660C_000014C0:
    fcmpo cr0, f2, f1
    cror eq, lt, eq
    bne lbl_fn_804A660C_000014D4
    li r3, 0x0
    b lbl_fn_804A660C_000014E4
lbl_fn_804A660C_000014D4:
    lfs f1, lbl_80887218
    lfs f0, lbl_80887224
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_804A660C_000014E4:
    mr r27, r3
lbl_fn_804A660C_000014E8:
    lfs f2, 0x1c(r1)
    lfs f0, lbl_808871E4
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_804A660C_00001504
    li r26, 0xff
    b lbl_fn_804A660C_00001530
lbl_fn_804A660C_00001504:
    lfs f0, lbl_808871D0
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_804A660C_0000151C
    li r3, 0x0
    b lbl_fn_804A660C_0000152C
lbl_fn_804A660C_0000151C:
    lfs f1, lbl_80887218
    lfs f0, lbl_80887224
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_804A660C_0000152C:
    mr r26, r3
lbl_fn_804A660C_00001530:
    lfs f2, 0x20(r1)
    lfs f0, lbl_808871E4
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_804A660C_0000154C
    li r25, 0xff
    b lbl_fn_804A660C_00001578
lbl_fn_804A660C_0000154C:
    lfs f0, lbl_808871D0
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_804A660C_00001564
    li r3, 0x0
    b lbl_fn_804A660C_00001574
lbl_fn_804A660C_00001564:
    lfs f1, lbl_80887218
    lfs f0, lbl_80887224
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_804A660C_00001574:
    mr r25, r3
lbl_fn_804A660C_00001578:
    lfs f2, 0x24(r1)
    lfs f0, lbl_808871E4
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_804A660C_00001594
    li r3, 0xff
    b lbl_fn_804A660C_000015BC
lbl_fn_804A660C_00001594:
    lfs f0, lbl_808871D0
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_804A660C_000015AC
    li r3, 0x0
    b lbl_fn_804A660C_000015BC
lbl_fn_804A660C_000015AC:
    lfs f1, lbl_80887218
    lfs f0, lbl_80887224
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_804A660C_000015BC:
    slwi r3, r3, 24
    slwi r0, r27, 16
    or r3, r3, r0
    slwi r0, r26, 8
    or r0, r0, r3
    or r0, r25, r0
    cmplw r31, r0
    beq lbl_fn_804A660C_00001878
    lfs f2, lbl_808871E4
    lfs f0, lbl_808871D0
    fcmpo cr0, f2, f2
    stfs f2, 0x28(r1)
    stfs f2, 0x2c(r1)
    stfs f2, 0x30(r1)
    stfs f0, 0x34(r1)
    cror eq, gt, eq
    bne lbl_fn_804A660C_00001608
    li r27, 0xff
    b lbl_fn_804A660C_00001630
lbl_fn_804A660C_00001608:
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_804A660C_0000161C
    li r3, 0x0
    b lbl_fn_804A660C_0000162C
lbl_fn_804A660C_0000161C:
    lfs f1, lbl_80887218
    lfs f0, lbl_80887224
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_804A660C_0000162C:
    mr r27, r3
lbl_fn_804A660C_00001630:
    lfs f2, 0x2c(r1)
    lfs f0, lbl_808871E4
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_804A660C_0000164C
    li r26, 0xff
    b lbl_fn_804A660C_00001678
lbl_fn_804A660C_0000164C:
    lfs f0, lbl_808871D0
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_804A660C_00001664
    li r3, 0x0
    b lbl_fn_804A660C_00001674
lbl_fn_804A660C_00001664:
    lfs f1, lbl_80887218
    lfs f0, lbl_80887224
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_804A660C_00001674:
    mr r26, r3
lbl_fn_804A660C_00001678:
    lfs f2, 0x30(r1)
    lfs f0, lbl_808871E4
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_804A660C_00001694
    li r25, 0xff
    b lbl_fn_804A660C_000016C0
lbl_fn_804A660C_00001694:
    lfs f0, lbl_808871D0
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_804A660C_000016AC
    li r3, 0x0
    b lbl_fn_804A660C_000016BC
lbl_fn_804A660C_000016AC:
    lfs f1, lbl_80887218
    lfs f0, lbl_80887224
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_804A660C_000016BC:
    mr r25, r3
lbl_fn_804A660C_000016C0:
    lfs f2, 0x34(r1)
    lfs f0, lbl_808871E4
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_804A660C_000016DC
    li r3, 0xff
    b lbl_fn_804A660C_00001704
lbl_fn_804A660C_000016DC:
    lfs f0, lbl_808871D0
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_804A660C_000016F4
    li r3, 0x0
    b lbl_fn_804A660C_00001704
lbl_fn_804A660C_000016F4:
    lfs f1, lbl_80887218
    lfs f0, lbl_80887224
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_804A660C_00001704:
    slwi r3, r3, 24
    slwi r0, r27, 16
    or r3, r3, r0
    slwi r0, r26, 8
    or r0, r0, r3
    or r0, r25, r0
    cmplw r31, r0
    beq lbl_fn_804A660C_00001878
    lfs f3, lbl_80887234
    lfs f0, lbl_808871E4
    lfs f2, lbl_80887238
    fcmpo cr0, f3, f0
    lfs f1, lbl_8088723C
    lfs f0, lbl_808871D0
    stfs f3, 0x38(r1)
    stfs f2, 0x3c(r1)
    stfs f1, 0x40(r1)
    stfs f0, 0x44(r1)
    cror eq, gt, eq
    bne lbl_fn_804A660C_0000175C
    li r25, 0xff
    b lbl_fn_804A660C_00001784
lbl_fn_804A660C_0000175C:
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_804A660C_00001770
    li r3, 0x0
    b lbl_fn_804A660C_00001780
lbl_fn_804A660C_00001770:
    lfs f1, lbl_80887218
    lfs f0, lbl_80887224
    fmadds f1, f1, f3, f0
    bl fn_80695D84
lbl_fn_804A660C_00001780:
    mr r25, r3
lbl_fn_804A660C_00001784:
    lfs f2, 0x3c(r1)
    lfs f0, lbl_808871E4
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_804A660C_000017A0
    li r27, 0xff
    b lbl_fn_804A660C_000017CC
lbl_fn_804A660C_000017A0:
    lfs f0, lbl_808871D0
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_804A660C_000017B8
    li r3, 0x0
    b lbl_fn_804A660C_000017C8
lbl_fn_804A660C_000017B8:
    lfs f1, lbl_80887218
    lfs f0, lbl_80887224
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_804A660C_000017C8:
    mr r27, r3
lbl_fn_804A660C_000017CC:
    lfs f2, 0x40(r1)
    lfs f0, lbl_808871E4
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_804A660C_000017E8
    li r26, 0xff
    b lbl_fn_804A660C_00001814
lbl_fn_804A660C_000017E8:
    lfs f0, lbl_808871D0
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_804A660C_00001800
    li r3, 0x0
    b lbl_fn_804A660C_00001810
lbl_fn_804A660C_00001800:
    lfs f1, lbl_80887218
    lfs f0, lbl_80887224
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_804A660C_00001810:
    mr r26, r3
lbl_fn_804A660C_00001814:
    lfs f2, 0x44(r1)
    lfs f0, lbl_808871E4
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_804A660C_00001830
    li r3, 0xff
    b lbl_fn_804A660C_00001858
lbl_fn_804A660C_00001830:
    lfs f0, lbl_808871D0
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_804A660C_00001848
    li r3, 0x0
    b lbl_fn_804A660C_00001858
lbl_fn_804A660C_00001848:
    lfs f1, lbl_80887218
    lfs f0, lbl_80887224
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_804A660C_00001858:
    slwi r3, r3, 24
    slwi r0, r25, 16
    or r3, r3, r0
    slwi r0, r27, 8
    or r0, r0, r3
    or r0, r26, r0
    cmplw r31, r0
    bne lbl_fn_804A660C_00001BDC
lbl_fn_804A660C_00001878:
    lwz r25, lbl_8087F490
    cmpwi r25, 0x0
    beq lbl_fn_804A660C_00001A28
    lfs f2, 0x288c(r25)
    lfs f0, lbl_808871E4
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_804A660C_000018A0
    li r26, 0xff
    b lbl_fn_804A660C_000018CC
lbl_fn_804A660C_000018A0:
    lfs f0, lbl_808871D0
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_804A660C_000018B8
    li r3, 0x0
    b lbl_fn_804A660C_000018C8
lbl_fn_804A660C_000018B8:
    lfs f1, lbl_80887218
    lfs f0, lbl_80887224
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_804A660C_000018C8:
    mr r26, r3
lbl_fn_804A660C_000018CC:
    lfs f2, 0x2890(r25)
    lfs f0, lbl_808871E4
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_804A660C_000018E8
    li r27, 0xff
    b lbl_fn_804A660C_00001914
lbl_fn_804A660C_000018E8:
    lfs f0, lbl_808871D0
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_804A660C_00001900
    li r3, 0x0
    b lbl_fn_804A660C_00001910
lbl_fn_804A660C_00001900:
    lfs f1, lbl_80887218
    lfs f0, lbl_80887224
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_804A660C_00001910:
    mr r27, r3
lbl_fn_804A660C_00001914:
    lfs f2, 0x2894(r25)
    lfs f0, lbl_808871E4
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_804A660C_00001930
    li r31, 0xff
    b lbl_fn_804A660C_0000195C
lbl_fn_804A660C_00001930:
    lfs f0, lbl_808871D0
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_804A660C_00001948
    li r3, 0x0
    b lbl_fn_804A660C_00001958
lbl_fn_804A660C_00001948:
    lfs f1, lbl_80887218
    lfs f0, lbl_80887224
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_804A660C_00001958:
    mr r31, r3
lbl_fn_804A660C_0000195C:
    lfs f2, 0x2898(r25)
    lfs f0, lbl_808871E4
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_804A660C_00001978
    li r3, 0xff
    b lbl_fn_804A660C_000019A0
lbl_fn_804A660C_00001978:
    lfs f0, lbl_808871D0
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_804A660C_00001990
    li r3, 0x0
    b lbl_fn_804A660C_000019A0
lbl_fn_804A660C_00001990:
    lfs f1, lbl_80887218
    lfs f0, lbl_80887224
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_804A660C_000019A0:
    slwi r3, r3, 24
    slwi r0, r26, 16
    or r3, r3, r0
    lfs f4, lbl_80887240
    slwi r0, r27, 8
    or r0, r0, r3
    lis r3, lbl_807573B8@ha
    or r0, r31, r0
    lfd f5, lbl_807573B8@l(r3)
    or r5, r30, r0
    extrwi r0, r5, 8, 8
    stw r0, 0x4c(r1)
    extrwi r4, r5, 8, 16
    clrlwi r3, r5, 24
    lfd f0, 0x48(r1)
    srwi r0, r5, 24
    stw r4, 0x54(r1)
    fsubs f1, f0, f5
    lfd f0, 0x50(r1)
    stw r3, 0x4c(r1)
    fmuls f3, f4, f1
    fsubs f2, f0, f5
    stw r0, 0x54(r1)
    lfd f1, 0x48(r1)
    lfd f0, 0x50(r1)
    fsubs f1, f1, f5
    stfs f3, 0x0(r28)
    fsubs f0, f0, f5
    fmuls f2, f4, f2
    fmuls f1, f4, f1
    fmuls f0, f4, f0
    stfs f2, 0x4(r28)
    stfs f1, 0x8(r28)
    stfs f0, 0xc(r28)
lbl_fn_804A660C_00001A28:
    cmpwi r29, 0x0
    beq lbl_fn_804A660C_00001BDC
    lwz r25, lbl_8087F490
    cmpwi r25, 0x0
    beq lbl_fn_804A660C_00001BDC
    lfs f2, 0x289c(r25)
    lfs f0, lbl_808871E4
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_804A660C_00001A58
    li r31, 0xff
    b lbl_fn_804A660C_00001A84
lbl_fn_804A660C_00001A58:
    lfs f0, lbl_808871D0
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_804A660C_00001A70
    li r3, 0x0
    b lbl_fn_804A660C_00001A80
lbl_fn_804A660C_00001A70:
    lfs f1, lbl_80887218
    lfs f0, lbl_80887224
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_804A660C_00001A80:
    mr r31, r3
lbl_fn_804A660C_00001A84:
    lfs f2, 0x28a0(r25)
    lfs f0, lbl_808871E4
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_804A660C_00001AA0
    li r30, 0xff
    b lbl_fn_804A660C_00001ACC
lbl_fn_804A660C_00001AA0:
    lfs f0, lbl_808871D0
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_804A660C_00001AB8
    li r3, 0x0
    b lbl_fn_804A660C_00001AC8
lbl_fn_804A660C_00001AB8:
    lfs f1, lbl_80887218
    lfs f0, lbl_80887224
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_804A660C_00001AC8:
    mr r30, r3
lbl_fn_804A660C_00001ACC:
    lfs f2, 0x28a4(r25)
    lfs f0, lbl_808871E4
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_804A660C_00001AE8
    li r28, 0xff
    b lbl_fn_804A660C_00001B14
lbl_fn_804A660C_00001AE8:
    lfs f0, lbl_808871D0
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_804A660C_00001B00
    li r3, 0x0
    b lbl_fn_804A660C_00001B10
lbl_fn_804A660C_00001B00:
    lfs f1, lbl_80887218
    lfs f0, lbl_80887224
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_804A660C_00001B10:
    mr r28, r3
lbl_fn_804A660C_00001B14:
    lfs f2, 0x28a8(r25)
    lfs f0, lbl_808871E4
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_804A660C_00001B30
    li r3, 0xff
    b lbl_fn_804A660C_00001B58
lbl_fn_804A660C_00001B30:
    lfs f0, lbl_808871D0
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_804A660C_00001B48
    li r3, 0x0
    b lbl_fn_804A660C_00001B58
lbl_fn_804A660C_00001B48:
    lfs f1, lbl_80887218
    lfs f0, lbl_80887224
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_804A660C_00001B58:
    slwi r3, r3, 24
    slwi r0, r31, 16
    or r3, r3, r0
    lfs f4, lbl_80887240
    slwi r0, r30, 8
    or r0, r0, r3
    lis r3, lbl_807573B8@ha
    or r5, r28, r0
    lfd f5, lbl_807573B8@l(r3)
    extrwi r0, r5, 8, 8
    stw r0, 0x4c(r1)
    extrwi r4, r5, 8, 16
    clrlwi r3, r5, 24
    lfd f0, 0x48(r1)
    srwi r0, r5, 24
    stw r4, 0x54(r1)
    fsubs f1, f0, f5
    lfd f0, 0x50(r1)
    stw r3, 0x4c(r1)
    fmuls f3, f4, f1
    fsubs f2, f0, f5
    stw r0, 0x54(r1)
    lfd f1, 0x48(r1)
    lfd f0, 0x50(r1)
    fsubs f1, f1, f5
    stfs f3, 0x0(r29)
    fsubs f0, f0, f5
    fmuls f2, f4, f2
    fmuls f1, f4, f1
    fmuls f0, f4, f0
    stfs f2, 0x4(r29)
    stfs f1, 0x8(r29)
    stfs f0, 0xc(r29)
lbl_fn_804A660C_00001BDC:
    addi r11, r1, 0x80
    bl _restgpr_23
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}
