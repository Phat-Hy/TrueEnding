#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_14(void);
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _savegpr_14(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void dtor_80084684(void);
extern void fn_8000D114(void);
extern void fn_8000DD14(void);
extern void fn_8000DD98(void);
extern void fn_8004B338(void);
extern void fn_8004B378(void);
extern void fn_8005ED68(void);
extern void fn_80065B34(void);
extern void fn_8006F72C(void);
extern void fn_80071D68(void);
extern void fn_80071D74(void);
extern void fn_80071E04(void);
extern void fn_80075DEC(void);
extern void fn_800760BC(void);
extern void fn_800760D0(void);
extern void fn_800763FC(void);
extern void fn_80076760(void);
extern void fn_80076FF8(void);
extern void fn_8007FAF0(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_80089ACC(void);
extern void fn_8008B964(void);
extern void fn_80093D98(void);
extern void fn_80093E30(void);
extern void fn_800A96AC(void);
extern void fn_800BFB70(void);
extern void fn_800C0508(void);
extern void fn_800D1D3C(void);
extern void fn_800D1E9C(void);
extern void fn_800D246C(void);
extern void fn_800D3FA4(void);
extern void fn_800DBF68(void);
extern void fn_800DC6B4(void);
extern void fn_800E0000(void);
extern void fn_800F7258(void);
extern void fn_80116BD4(void);
extern void fn_801F3FF8(void);
extern void fn_801FED24(void);
extern void fn_801FEE08(void);
extern void fn_80316F9C(void);
extern void fn_803D6FEC(void);
extern void fn_803D71C4(void);
extern void fn_803D71CC(void);
extern void fn_804A83E4(void);
extern void fn_804A88C8(void);
extern void fn_804A893C(void);
extern void fn_804A9E44(void);
extern void fn_804A9E4C(void);
extern void fn_804A9E54(void);
extern void fn_804A9E64(void);
extern void fn_804A9E74(void);
extern void fn_804A9E84(void);
extern void fn_804A9E8C(void);
extern void fn_804A9E94(void);
extern void fn_804A9E9C(void);
extern void fn_804A9EA4(void);
extern void fn_804A9EAC(void);
extern void fn_804AB060(void);
extern void fn_804AB79C(void);
extern void fn_80613960(void);
extern void fn_80613BB0(void);
extern void fn_80614190(void);
extern void fn_80614CC0(void);
extern void fn_80614D30(void);
extern void fn_80615560(void);
extern void fn_80615D20(void);
extern void fn_80615FF0(void);
extern void fn_80616250(void);
extern void fn_80617340(void);
extern void fn_80617880(void);
extern void fn_806179E0(void);
extern void fn_80617D50(void);
extern void fn_80680770(void);
extern void fn_80686A48(void);
extern void fn_80686EA4(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 lbl_80757648[];
extern u8 lbl_8075765C[];
extern u8 lbl_80757834[];
extern u8 lbl_807779F0[];
extern u8 lbl_807799A0[];
extern u8 lbl_80790888[];

/* Small data declarations */
extern u32 lbl_8087E0E8;
extern u32 lbl_8087EF8C;
extern u32 lbl_8087F588;
extern u32 lbl_80887250;
extern u32 lbl_80887258;
extern u32 lbl_80887288;
extern u32 lbl_8088729C;
extern u32 lbl_808872A8;
extern u32 lbl_808872B0;
extern u32 lbl_808872C0;
extern u32 lbl_808872C4;
extern u32 lbl_808872C8;
extern u32 lbl_808872D0;
extern u32 lbl_808872D4;
extern u32 lbl_808872D8;
extern u32 lbl_808872DC;
extern u32 lbl_808872E0;
extern u32 lbl_808872E4;
extern u32 lbl_808872E8;
extern u32 lbl_808872EC;
extern u32 lbl_808872F0;
extern u32 lbl_808872F4;
extern u32 lbl_808872F8;
extern u32 lbl_808872FC;
extern u32 lbl_80887300;

/* Function declarations */
void fn_804ABA2C(void);
void fn_804ABEE4(void);
void fn_804ABEEC(void);
void fn_804ABEF8(void);
void fn_804ABF00(void);
void fn_804ABF08(void);
void fn_804ABF14(void);
void fn_804ABF20(void);
void fn_804ABF28(void);
void fn_804ABF34(void);
void fn_804ABF40(void);
void fn_804ABF44(void);
void fn_804ABF4C(void);
void fn_804ABF74(void);
void fn_804ABF84(void);
void fn_804AC3C8(void);
void fn_804AC3D0(void);
void fn_804AC3D8(void);
void fn_804AC3E8(void);
void fn_804AC3F8(void);
void fn_804AC408(void);
void fn_804AC410(void);
void fn_804AC418(void);
void fn_804AC420(void);
void fn_804AC428(void);
void fn_804AC430(void);
void fn_804AC488(void);
void fn_804AC588(void);
void fn_804AC5E0(void);
void fn_804AC734(void);
void fn_804AC79C(void);
void fn_804AC7EC(void);
void fn_804AC83C(void);
void fn_804AC96C(void);
void fn_804ACAF8(void);
void fn_804ACD10(void);
void fn_804ACDBC(void);
void fn_804ACE68(void);
void fn_804AD000(void);
void fn_804AD1EC(void);

asm void fn_804ABA2C(void)
{
    nofralloc
    stwu r1, -0x380(r1)
    mflr r0
    stw r0, 0x384(r1)
    addi r11, r1, 0x360
    stfd f31, 0x370(r1)
    psq_st f31, 0x378(r1), 0, 0
    stfd f30, 0x360(r1)
    psq_st f30, 0x368(r1), 0, 0
    bl _savegpr_25
    mr r28, r3
    mr r29, r4
    bl fn_804A9E44
    cmpwi r3, 0x0
    beq lbl_fn_804ABA2C_00000048
    mr r3, r28
    mr r4, r29
    bl fn_804ABF84
    b lbl_fn_804ABA2C_00000490
lbl_fn_804ABA2C_00000048:
    mr r3, r29
    bl fn_800F7258
    mr r4, r3
    addi r3, r1, 0x140
    bl fn_804AB79C
    mr r3, r29
    addi r4, r28, 0x640
    bl fn_80116BD4
    addi r3, r28, 0x640
    bl fn_804ABEE4
    mr r26, r3
    bl fn_803D71C4
    mr r4, r26
    bl fn_80071D74
    bl fn_803D71C4
    bl fn_804A9E84
    mr r26, r3
    bl fn_803D71C4
    bl fn_804A9E8C
    mr r27, r3
    bl fn_8008B964
    li r4, 0x10
    bl fn_804ABEEC
    mr r31, r3
    bl fn_804ABEF8
    mr r30, r3
    mr r3, r29
    li r4, 0x1
    bl fn_800C0508
    bl fn_803D71C4
    subi r4, r26, 0x100
    subi r5, r27, 0x100
    srwi r0, r4, 31
    li r6, 0x100
    add r4, r0, r4
    li r7, 0x100
    srwi r0, r5, 31
    srawi r4, r4, 1
    add r0, r0, r5
    srawi r5, r0, 1
    bl fn_800760BC
    mr r3, r31
    rlwinm r4, r30, 0, 31, 29
    bl fn_804ABF00
    lwz r12, 0x208(r28)
    addi r3, r28, 0x208
    mr r4, r29
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    addi r3, r28, 0x208
    bl fn_804ABF08
    cmpwi r3, 0x0
    beq lbl_fn_804ABA2C_00000144
    mr r3, r31
    clrrwi r4, r30, 1
    bl fn_804ABF00
    lwz r12, 0x208(r28)
    addi r3, r28, 0x208
    mr r4, r29
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
lbl_fn_804ABA2C_00000144:
    bl fn_803D71C4
    bl fn_80075DEC
    bl fn_803D71C4
    bl fn_800760D0
    bl fn_804ABF20
    bl fn_804ABF14
    bl fn_804ABF20
    li r4, 0x100
    li r5, 0x100
    li r6, 0x4
    bl fn_800A96AC
    mr r25, r3
    addi r3, r1, 0xa0
    mr r4, r25
    li r5, 0x100
    li r6, 0x100
    li r7, 0x4
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_80615FF0
    lfs f1, lbl_80887250
    addi r3, r1, 0xa0
    li r4, 0x1
    li r5, 0x1
    fmr f2, f1
    li r6, 0x0
    fmr f3, f1
    li r7, 0x0
    li r8, 0x0
    bl fn_80616250
    subi r3, r26, 0x100
    subi r0, r27, 0x100
    extrwi r3, r3, 15, 16
    li r5, 0x100
    extrwi r4, r0, 15, 16
    li r6, 0x100
    bl fn_80614CC0
    li r3, 0x100
    li r4, 0x100
    li r5, 0x4
    li r6, 0x0
    bl fn_80614D30
    mr r3, r25
    li r4, 0x0
    bl fn_80615560
    bl fn_80614190
    bl fn_803D71C4
    bl fn_80071E04
    bl fn_803D71C4
    li r4, 0x0
    bl fn_804ABF28
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
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    bl fn_804ABF34
    li r3, 0x0
    li r4, 0x3
    bl fn_80617340
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0xff
    bl fn_80617880
    mr r3, r29
    bl fn_804ABF44
    bl fn_804ABF40
    mr r27, r3
    bl fn_803D71C4
    mr r4, r27
    li r5, 0x0
    bl fn_800763FC
    mr r3, r29
    bl fn_800BFB70
    addi r3, r1, 0xc0
    bl fn_8005ED68
    addi r3, r1, 0xe0
    bl fn_8005ED68
    addi r3, r1, 0x100
    bl fn_8005ED68
    addi r3, r1, 0x120
    bl fn_8005ED68
    lfs f31, lbl_80887250
    addi r3, r1, 0x68
    lfs f30, lbl_80887258
    fmr f1, f31
    fmr f2, f31
    fmr f3, f31
    fmr f4, f31
    bl fn_803D6FEC
    lfs f1, 0x5dc(r28)
    mr r27, r3
    lfs f2, 0x5e0(r28)
    addi r3, r1, 0x78
    lfs f3, lbl_80887250
    bl fn_8000D114
    mr r4, r3
    mr r6, r27
    addi r3, r1, 0xc0
    li r5, -0x1
    bl fn_804ABF4C
    fmr f1, f30
    lfs f3, lbl_80887258
    fmr f2, f31
    lfs f4, lbl_80887250
    addi r3, r1, 0x48
    bl fn_803D6FEC
    lfs f1, 0x5dc(r28)
    mr r27, r3
    lfs f0, 0x5e4(r28)
    addi r3, r1, 0x58
    lfs f2, 0x5e0(r28)
    fadds f1, f1, f0
    lfs f3, lbl_80887250
    bl fn_8000D114
    mr r4, r3
    mr r6, r27
    addi r3, r1, 0xe0
    li r5, -0x1
    bl fn_804ABF4C
    lfs f3, lbl_80887258
    fmr f1, f30
    fmr f2, f30
    addi r3, r1, 0x28
    fmr f4, f3
    bl fn_803D6FEC
    lfs f3, 0x5dc(r28)
    mr r27, r3
    lfs f1, 0x5e4(r28)
    addi r3, r1, 0x38
    lfs f2, 0x5e0(r28)
    lfs f0, 0x5e8(r28)
    fadds f1, f3, f1
    lfs f3, lbl_80887250
    fadds f2, f2, f0
    bl fn_8000D114
    mr r4, r3
    mr r6, r27
    addi r3, r1, 0x100
    li r5, -0x1
    bl fn_804ABF4C
    fmr f1, f31
    lfs f3, lbl_80887250
    fmr f2, f30
    lfs f4, lbl_80887258
    addi r3, r1, 0x8
    bl fn_803D6FEC
    lfs f2, 0x5e0(r28)
    mr r27, r3
    lfs f0, 0x5e8(r28)
    addi r3, r1, 0x18
    lfs f1, 0x5dc(r28)
    fadds f2, f2, f0
    lfs f3, lbl_80887250
    bl fn_8000D114
    mr r4, r3
    mr r6, r27
    addi r3, r1, 0x120
    li r5, -0x1
    bl fn_804ABF4C
    bl fn_803D71C4
    li r4, 0x1
    bl fn_804ABF28
    addi r3, r1, 0x84
    bl fn_804ABF74
    addi r4, r1, 0xc0
    addi r0, r1, 0xa0
    li r3, 0x1
    stw r3, 0x88(r1)
    addi r3, r28, 0xe8
    stw r4, 0x8c(r1)
    stw r0, 0x90(r1)
    bl fn_804ABF40
    li r0, 0x0
    stw r3, 0x94(r1)
    mr r4, r29
    addi r3, r1, 0x84
    stb r0, 0x98(r1)
    stw r0, 0x9c(r1)
    bl fn_80065B34
    bl fn_804ABF20
    bl fn_804ABF14
    bl fn_803D71C4
    bl fn_80071E04
    mr r3, r31
    mr r4, r30
    bl fn_804ABF00
    mr r3, r29
    addi r4, r1, 0x140
    bl fn_80116BD4
    addi r3, r1, 0x140
    bl fn_804ABEE4
    mr r28, r3
    bl fn_803D71C4
    mr r4, r28
    bl fn_80071D68
    addi r3, r1, 0x140
    li r4, -0x1
    bl fn_8004B338
lbl_fn_804ABA2C_00000490:
    addi r11, r1, 0x360
    psq_l f31, 0x378(r1), 0, 0
    lfd f31, 0x370(r1)
    psq_l f30, 0x368(r1), 0, 0
    lfd f30, 0x360(r1)
    bl _restgpr_25
    lwz r0, 0x384(r1)
    mtlr r0
    addi r1, r1, 0x380
    blr
}

asm void fn_804ABEE4(void)
{
    nofralloc
    addi r3, r3, 0x88
    blr
}

asm void fn_804ABEEC(void)
{
    nofralloc
    slwi r0, r4, 2
    lwzx r3, r3, r0
    blr
}

asm void fn_804ABEF8(void)
{
    nofralloc
    lwz r3, 0xc(r3)
    blr
}

asm void fn_804ABF00(void)
{
    nofralloc
    stw r4, 0xc(r3)
    blr
}

asm void fn_804ABF08(void)
{
    nofralloc
    lwz r0, 0x4(r3)
    extrwi r3, r0, 1, 27
    blr
}

asm void fn_804ABF14(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x54(r3)
    blr
}

asm void fn_804ABF20(void)
{
    nofralloc
    lwz r3, lbl_8087EF8C
    blr
}

asm void fn_804ABF28(void)
{
    nofralloc
    mr r5, r4
    li r4, 0x3
    b fn_80076760
}

asm void fn_804ABF34(void)
{
    nofralloc
    li r7, 0x0
    li r8, 0x7d
    b fn_80613960
}

asm void fn_804ABF40(void)
{
    nofralloc
    blr
}

asm void fn_804ABF44(void)
{
    nofralloc
    addi r3, r3, 0x74c
    blr
}

asm void fn_804ABF4C(void)
{
    nofralloc
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x8(r3)
    psq_l f2, 0x8(r6), 0, 0
    stw r5, 0xc(r3)
    psq_st f1, 0x10(r3), 0, 0
    psq_st f2, 0x18(r3), 0, 0
    blr
}

asm void fn_804ABF74(void)
{
    nofralloc
    lis r4, lbl_807779F0@ha
    addi r4, r4, lbl_807779F0@l
    stw r4, 0x0(r3)
    blr
}

asm void fn_804ABF84(void)
{
    nofralloc
    stwu r1, -0x460(r1)
    mflr r0
    stw r0, 0x464(r1)
    addi r11, r1, 0x440
    stfd f31, 0x450(r1)
    psq_st f31, 0x458(r1), 0, 0
    stfd f30, 0x440(r1)
    psq_st f30, 0x448(r1), 0, 0
    bl _savegpr_26
    mr r27, r4
    mr r26, r3
    mr r3, r27
    bl fn_800F7258
    mr r4, r3
    addi r3, r1, 0x22c
    bl fn_804AB79C
    addi r3, r1, 0x38
    addi r4, r26, 0x640
    bl fn_804AB79C
    bl fn_803D71C4
    bl fn_803D71CC
    xoris r3, r3, 0x8000
    lis r0, 0x4330
    lis r4, lbl_80757648@ha
    stw r3, 0x424(r1)
    lfd f3, lbl_80757648@l(r4)
    stw r0, 0x420(r1)
    lfs f1, 0x5fc(r26)
    lfd f2, 0x420(r1)
    lfs f0, lbl_808872B0
    fsubs f2, f2, f3
    fmuls f1, f1, f2
    fdivs f30, f1, f0
    bl fn_803D71C4
    bl fn_80076FF8
    lfs f0, lbl_80887288
    fmr f31, f1
    addi r3, r1, 0x38
    fmuls f1, f0, f30
    bl fn_804A9E94
    fneg f1, f30
    lfs f0, lbl_80887288
    addi r3, r1, 0x38
    fmuls f1, f0, f1
    bl fn_804A9E9C
    fneg f1, f30
    lfs f0, lbl_80887288
    addi r3, r1, 0x38
    fmuls f0, f0, f1
    fmuls f1, f0, f31
    bl fn_804A9EA4
    lfs f0, lbl_80887288
    addi r3, r1, 0x38
    fmuls f0, f0, f30
    fmuls f1, f0, f31
    bl fn_804A9EAC
    addi r3, r1, 0x38
    li r4, 0x1
    bl fn_804A9E4C
    lfs f1, lbl_808872C0
    addi r3, r1, 0x38
    lfs f2, lbl_808872A8
    lfs f3, lbl_808872C4
    bl fn_804A9E54
    lfs f1, lbl_808872C0
    addi r3, r1, 0x38
    lfs f2, lbl_80887250
    lfs f3, lbl_808872C4
    bl fn_804A9E64
    lfs f1, lbl_80887250
    addi r3, r1, 0x38
    lfs f3, lbl_8088729C
    fmr f2, f1
    bl fn_804A9E74
    addi r3, r1, 0x38
    bl fn_8004B378
    mr r3, r27
    addi r4, r1, 0x38
    bl fn_80116BD4
    addi r3, r1, 0x38
    bl fn_804ABEE4
    mr r31, r3
    bl fn_803D71C4
    mr r4, r31
    bl fn_80071D74
    bl fn_803D71C4
    bl fn_804A9E84
    bl fn_803D71C4
    bl fn_804A9E8C
    bl fn_8008B964
    li r4, 0x10
    bl fn_804ABEEC
    mr r30, r3
    bl fn_804ABEF8
    mr r29, r3
    mr r3, r30
    clrrwi r4, r29, 1
    bl fn_804ABF00
    addi r3, r26, 0x208
    li r4, 0x10
    bl fn_804A893C
    lfs f31, lbl_808872C8
    li r31, 0x0
    b lbl_fn_804ABF84_00000758
lbl_fn_804ABF84_000006F8:
    addi r3, r26, 0x208
    bl fn_804AC3C8
    mr r4, r31
    bl fn_804AC3D8
    lwz r28, 0x0(r3)
    mr r3, r28
    bl fn_8000DD98
    stw r3, 0x14(r1)
    addi r3, r1, 0x28
    addi r4, r1, 0x14
    bl fn_8000DD14
    lfs f0, 0x34(r1)
    addi r3, r1, 0x28
    fmuls f0, f0, f31
    stfs f0, 0x34(r1)
    bl fn_804A88C8
    stw r3, 0x10(r1)
    mr r3, r28
    addi r4, r1, 0x10
    bl fn_80316F9C
    mr r3, r28
    li r4, 0x5
    bl fn_8007FAF0
    addi r31, r31, 0x1
lbl_fn_804ABF84_00000758:
    addi r3, r26, 0x208
    bl fn_804AC3C8
    bl fn_80089ACC
    cmplw r31, r3
    blt lbl_fn_804ABF84_000006F8
    lis r31, lbl_8075765C@ha
    addi r3, r26, 0x208
    addi r31, r31, lbl_8075765C@l
    li r5, 0x0
    addi r4, r31, 0x14c
    bl fn_80093D98
    addi r3, r26, 0x208
    addi r4, r31, 0x15a
    li r5, 0x0
    bl fn_80093D98
    addi r3, r26, 0x208
    addi r4, r31, 0x167
    li r5, 0x0
    bl fn_80093D98
    bl fn_803D71C4
    li r4, 0xb
    li r5, 0x0
    bl fn_80076760
    lwz r12, 0x208(r26)
    addi r3, r26, 0x208
    mr r4, r27
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    bl fn_803D71C4
    li r4, 0xb
    li r5, 0x3
    bl fn_80076760
    lwz r12, 0x208(r26)
    addi r3, r26, 0x208
    mr r4, r27
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    li r28, 0x0
    b lbl_fn_804ABF84_00000828
lbl_fn_804ABF84_000007FC:
    addi r3, r26, 0x208
    bl fn_804AC3C8
    mr r4, r28
    bl fn_804AC3D8
    lwz r3, 0x0(r3)
    bl fn_804AC3D0
    mr r4, r3
    addi r3, r26, 0x208
    li r5, 0x0
    bl fn_80093E30
    addi r28, r28, 0x1
lbl_fn_804ABF84_00000828:
    addi r3, r26, 0x208
    bl fn_804AC3C8
    bl fn_80089ACC
    cmplw r28, r3
    blt lbl_fn_804ABF84_000007FC
    lis r31, lbl_8075765C@ha
    addi r3, r26, 0x208
    addi r31, r31, lbl_8075765C@l
    li r5, 0x1
    addi r4, r31, 0x14c
    bl fn_80093D98
    addi r3, r26, 0x208
    addi r4, r31, 0x15a
    li r5, 0x1
    bl fn_80093D98
    addi r3, r26, 0x208
    addi r4, r31, 0x167
    li r5, 0x1
    bl fn_80093D98
    lwz r12, 0x208(r26)
    addi r3, r26, 0x208
    mr r4, r27
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    lfs f31, lbl_80887258
    li r28, 0x0
    b lbl_fn_804ABF84_00000908
lbl_fn_804ABF84_00000898:
    addi r3, r26, 0x208
    bl fn_804AC3C8
    mr r4, r28
    bl fn_804AC3D8
    lwz r31, 0x0(r3)
    mr r3, r31
    bl fn_8000DD98
    stw r3, 0xc(r1)
    addi r3, r1, 0x18
    addi r4, r1, 0xc
    bl fn_8000DD14
    stfs f31, 0x24(r1)
    addi r3, r1, 0x18
    bl fn_804A88C8
    stw r3, 0x8(r1)
    mr r3, r31
    addi r4, r1, 0x8
    bl fn_80316F9C
    mr r3, r31
    li r4, 0x1
    bl fn_8007FAF0
    mr r3, r31
    bl fn_804AC3D0
    mr r4, r3
    addi r3, r26, 0x208
    li r5, 0x1
    bl fn_80093E30
    addi r28, r28, 0x1
lbl_fn_804ABF84_00000908:
    addi r3, r26, 0x208
    bl fn_804AC3C8
    bl fn_80089ACC
    cmplw r28, r3
    blt lbl_fn_804ABF84_00000898
    bl fn_803D71C4
    bl fn_80075DEC
    bl fn_803D71C4
    bl fn_800760D0
    mr r3, r30
    mr r4, r29
    bl fn_804ABF00
    mr r3, r27
    addi r4, r1, 0x22c
    bl fn_80116BD4
    addi r3, r1, 0x22c
    bl fn_804ABEE4
    mr r31, r3
    bl fn_803D71C4
    mr r4, r31
    bl fn_80071D68
    addi r3, r1, 0x38
    li r4, -0x1
    bl fn_8004B338
    addi r3, r1, 0x22c
    li r4, -0x1
    bl fn_8004B338
    addi r11, r1, 0x440
    psq_l f31, 0x458(r1), 0, 0
    lfd f31, 0x450(r1)
    psq_l f30, 0x448(r1), 0, 0
    lfd f30, 0x440(r1)
    bl _restgpr_26
    lwz r0, 0x464(r1)
    mtlr r0
    addi r1, r1, 0x460
    blr
}

asm void fn_804AC3C8(void)
{
    nofralloc
    addi r3, r3, 0x104
    blr
}

asm void fn_804AC3D0(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    blr
}

asm void fn_804AC3D8(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    slwi r0, r4, 2
    add r3, r3, r0
    blr
}

asm void fn_804AC3E8(void)
{
    nofralloc
    lwzu r12, 0x208(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctr
}

asm void fn_804AC3F8(void)
{
    nofralloc
    lwzu r12, 0x208(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctr
}

asm void fn_804AC408(void)
{
    nofralloc
    subi r3, r3, 0x48
    b fn_804AC3F8
}

asm void fn_804AC410(void)
{
    nofralloc
    subi r3, r3, 0x48
    b fn_804AB060
}

asm void fn_804AC418(void)
{
    nofralloc
    subi r3, r3, 0x48
    b fn_804ABA2C
}

asm void fn_804AC420(void)
{
    nofralloc
    subi r3, r3, 0x48
    b fn_804AC3E8
}

asm void fn_804AC428(void)
{
    nofralloc
    subi r3, r3, 0x48
    b fn_804A83E4
}

asm void fn_804AC430(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_80757834@ha
    li r4, 0x1
    stw r0, 0x14(r1)
    addi r5, r5, lbl_80757834@l
    mr r6, r5
    li r7, 0x0
    stw r31, 0xc(r1)
    mr r31, r3
    li r3, 0x78
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_804AC430_00000A44
    mr r4, r31
    bl fn_804AC488
lbl_fn_804AC430_00000A44:
    stw r3, lbl_8087F588
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804AC488(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_800D1D3C
    lis r3, lbl_80790888@ha
    lis r31, lbl_80757834@ha
    li r0, 0x0
    stw r0, 0x48(r30)
    addi r3, r3, lbl_80790888@l
    addi r31, r31, lbl_80757834@l
    stw r3, 0x0(r30)
    mr r3, r30
    addi r4, r31, 0x1
    li r5, 0x0
    stw r0, 0x4c(r30)
    bl fn_801F3FF8
    stw r3, 0x54(r30)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r30
    addi r4, r31, 0x1d
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x58(r30)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r30
    addi r4, r31, 0x3a
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x5c(r30)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r30
    addi r4, r31, 0x57
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x60(r30)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r30
    addi r4, r31, 0x74
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x64(r30)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r30
    addi r4, r31, 0x91
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x68(r30)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804AC588(void)
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
    beq lbl_fn_804AC588_00000B98
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r31, 0x0
    ble lbl_fn_804AC588_00000B98
    mr r3, r30
    bl dtor_80084684
lbl_fn_804AC588_00000B98:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804AC5E0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    bl fn_800D3FA4
    cmpwi r3, 0x0
    beq lbl_fn_804AC5E0_00000CE8
    lwz r4, 0x54(r29)
    lis r31, lbl_80757834@ha
    addi r31, r31, lbl_80757834@l
    addi r3, r31, 0xb5
    addi r30, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808872D0
    mr r4, r3
    mr r3, r30
    li r5, 0x4
    bl fn_801FED24
    lwz r4, 0x58(r29)
    addi r3, r31, 0xb5
    addi r30, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808872D4
    mr r4, r3
    mr r3, r30
    li r5, 0x4
    bl fn_801FED24
    lwz r4, 0x5c(r29)
    addi r3, r31, 0xb5
    addi r30, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808872D8
    mr r4, r3
    mr r3, r30
    li r5, 0x4
    bl fn_801FED24
    lwz r4, 0x60(r29)
    addi r3, r31, 0xb5
    addi r30, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808872DC
    mr r4, r3
    mr r3, r30
    li r5, 0x4
    bl fn_801FED24
    lwz r4, 0x64(r29)
    addi r3, r31, 0xb5
    addi r30, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808872DC
    mr r4, r3
    mr r3, r30
    li r5, 0x4
    bl fn_801FED24
    lwz r4, 0x68(r29)
    addi r3, r31, 0xc0
    addi r30, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808872E0
    mr r4, r3
    mr r3, r30
    li r5, 0x4
    bl fn_801FED24
    lwz r4, 0x68(r29)
    addi r3, r31, 0xc8
    addi r30, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808872E0
    mr r4, r3
    mr r3, r30
    li r5, 0x4
    bl fn_801FED24
    li r3, 0x1
    b lbl_fn_804AC5E0_00000CEC
lbl_fn_804AC5E0_00000CE8:
    li r3, 0x0
lbl_fn_804AC5E0_00000CEC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804AC734(void)
{
    nofralloc
    lwz r4, 0x68(r3)
    lfs f0, lbl_808872E4
    lfs f1, 0x100(r4)
    fcmpu cr0, f0, f1
    bne lbl_fn_804AC734_00000D3C
    lwz r4, 0x60(r3)
    lfs f1, 0x100(r4)
    fcmpu cr0, f0, f1
    bne lbl_fn_804AC734_00000D3C
    lwz r4, 0x64(r3)
    lfs f1, 0x100(r4)
    fcmpu cr0, f0, f1
    beq lbl_fn_804AC734_00000D44
lbl_fn_804AC734_00000D3C:
    li r3, 0x0
    blr
lbl_fn_804AC734_00000D44:
    lwz r4, 0x4c(r3)
    li r3, 0x0
    subi r4, r4, 0x2
    cmplwi r4, 0x3
    bgtlr
    li r0, 0x1
    slw r0, r0, r4
    andi. r0, r0, 0xd
    beqlr
    li r3, 0x1
    blr
}

asm void fn_804AC79C(void)
{
    nofralloc
    lwz r4, 0x68(r3)
    lfs f0, lbl_808872E4
    lfs f1, 0x100(r4)
    fcmpu cr0, f0, f1
    bne lbl_fn_804AC79C_00000DA4
    lwz r4, 0x60(r3)
    lfs f1, 0x100(r4)
    fcmpu cr0, f0, f1
    bne lbl_fn_804AC79C_00000DA4
    lwz r4, 0x64(r3)
    lfs f1, 0x100(r4)
    fcmpu cr0, f0, f1
    beq lbl_fn_804AC79C_00000DAC
lbl_fn_804AC79C_00000DA4:
    li r3, 0x0
    blr
lbl_fn_804AC79C_00000DAC:
    lwz r3, 0x4c(r3)
    subi r0, r3, 0x4
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

asm void fn_804AC7EC(void)
{
    nofralloc
    lwz r4, 0x68(r3)
    lfs f0, lbl_808872E4
    lfs f1, 0x100(r4)
    fcmpu cr0, f0, f1
    bne lbl_fn_804AC7EC_00000DF4
    lwz r4, 0x60(r3)
    lfs f1, 0x100(r4)
    fcmpu cr0, f0, f1
    bne lbl_fn_804AC7EC_00000DF4
    lwz r4, 0x64(r3)
    lfs f1, 0x100(r4)
    fcmpu cr0, f0, f1
    beq lbl_fn_804AC7EC_00000DFC
lbl_fn_804AC7EC_00000DF4:
    li r3, 0x0
    blr
lbl_fn_804AC7EC_00000DFC:
    lwz r3, 0x4c(r3)
    subi r0, r3, 0x5
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

asm void fn_804AC83C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x24(r1)
    stfd f31, 0x18(r1)
    fmr f31, f1
    stw r31, 0x14(r1)
    stw r30, 0x10(r1)
    mr r30, r5
    stw r29, 0xc(r1)
    mr r29, r4
    stw r28, 0x8(r1)
    mr r28, r3
    bne lbl_fn_804AC83C_00000E74
    lwz r31, 0x54(r3)
    cmpwi r31, 0x0
    beq lbl_fn_804AC83C_00000ED8
    mr r3, r31
    li r4, 0x0
    bl fn_800D246C
    stfs f31, 0x104(r31)
    lwz r0, 0xfc(r31)
    rlwimi r0, r29, 28, 3, 3
    stw r0, 0xfc(r31)
    b lbl_fn_804AC83C_00000ED8
lbl_fn_804AC83C_00000E74:
    cmpwi r5, 0x1
    bne lbl_fn_804AC83C_00000EA8
    lwz r31, 0x58(r3)
    cmpwi r31, 0x0
    beq lbl_fn_804AC83C_00000ED8
    mr r3, r31
    li r4, 0x0
    bl fn_800D246C
    stfs f31, 0x104(r31)
    lwz r0, 0xfc(r31)
    rlwimi r0, r29, 28, 3, 3
    stw r0, 0xfc(r31)
    b lbl_fn_804AC83C_00000ED8
lbl_fn_804AC83C_00000EA8:
    cmpwi r5, 0x2
    bne lbl_fn_804AC83C_00000ED8
    lwz r31, 0x5c(r3)
    cmpwi r31, 0x0
    beq lbl_fn_804AC83C_00000ED8
    mr r3, r31
    li r4, 0x0
    bl fn_800D246C
    stfs f31, 0x104(r31)
    lwz r0, 0xfc(r31)
    rlwimi r0, r29, 28, 3, 3
    stw r0, 0xfc(r31)
lbl_fn_804AC83C_00000ED8:
    lwz r31, 0x68(r28)
    cmpwi r31, 0x0
    beq lbl_fn_804AC83C_00000F00
    mr r3, r31
    li r4, 0x0
    bl fn_800D246C
    stfs f31, 0x104(r31)
    lwz r0, 0xfc(r31)
    rlwimi r0, r29, 28, 3, 3
    stw r0, 0xfc(r31)
lbl_fn_804AC83C_00000F00:
    li r3, 0x1
    li r0, 0x0
    stw r3, 0x4c(r28)
    stw r30, 0x50(r28)
    stw r3, 0x70(r28)
    stw r3, 0x6c(r28)
    stw r0, 0x48(r28)
    lfd f31, 0x18(r1)
    lwz r31, 0x14(r1)
    lwz r30, 0x10(r1)
    lwz r29, 0xc(r1)
    lwz r28, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804AC96C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x20
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    bl _savegpr_26
    fmr f31, f1
    cmpwi r6, 0x0
    mr r28, r3
    mr r29, r4
    mr r30, r5
    mr r31, r6
    bne lbl_fn_804AC96C_00000FA4
    lwz r27, 0x60(r3)
    cmpwi r27, 0x0
    beq lbl_fn_804AC96C_00001090
    mr r3, r27
    li r4, 0x0
    bl fn_800D246C
    stfs f31, 0x104(r27)
    lwz r0, 0xfc(r27)
    rlwimi r0, r29, 28, 3, 3
    stw r0, 0xfc(r27)
    b lbl_fn_804AC96C_00001090
lbl_fn_804AC96C_00000FA4:
    cmpwi r6, 0x1
    bne lbl_fn_804AC96C_00001090
    lwz r4, 0x64(r28)
    lis r27, lbl_80757834@ha
    addi r27, r27, lbl_80757834@l
    addi r3, r27, 0xd0
    addi r26, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808872E8
    mr r4, r3
    mr r3, r26
    li r5, 0x1
    bl fn_801FED24
    lwz r4, 0x64(r28)
    addi r3, r27, 0xde
    addi r26, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808872EC
    mr r4, r3
    mr r3, r26
    li r5, 0x1
    bl fn_801FED24
    lwz r4, 0x64(r28)
    addi r3, r27, 0xe9
    addi r26, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808872E8
    mr r4, r3
    mr r3, r26
    li r5, 0x1
    bl fn_801FED24
    lwz r4, 0x64(r28)
    addi r3, r27, 0xf1
    addi r26, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808872F0
    mr r4, r3
    mr r3, r26
    li r5, 0x1
    bl fn_801FED24
    lwz r4, 0x64(r28)
    addi r3, r27, 0xf9
    addi r26, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808872F4
    mr r4, r3
    mr r3, r26
    li r5, 0x1
    bl fn_801FED24
    lwz r27, 0x64(r28)
    cmpwi r27, 0x0
    beq lbl_fn_804AC96C_00001090
    mr r3, r27
    li r4, 0x0
    bl fn_800D246C
    stfs f31, 0x104(r27)
    lwz r0, 0xfc(r27)
    rlwimi r0, r29, 28, 3, 3
    stw r0, 0xfc(r27)
lbl_fn_804AC96C_00001090:
    li r0, 0x2
    li r3, 0x3
    stw r3, 0x4c(r28)
    stw r30, 0x48(r28)
    stw r31, 0x50(r28)
    stw r0, 0x70(r28)
    stw r0, 0x6c(r28)
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_804ACAF8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    lwz r30, 0x54(r3)
    cmpwi r30, 0x0
    beq lbl_fn_804ACAF8_00001114
    mr r3, r30
    li r4, 0x1
    bl fn_800D246C
    lfs f0, lbl_808872F8
    stfs f0, 0x104(r30)
    lfs f0, lbl_808872E4
    stfs f0, 0x100(r30)
lbl_fn_804ACAF8_00001114:
    lwz r30, 0x58(r31)
    cmpwi r30, 0x0
    beq lbl_fn_804ACAF8_0000113C
    mr r3, r30
    li r4, 0x1
    bl fn_800D246C
    lfs f0, lbl_808872F8
    stfs f0, 0x104(r30)
    lfs f0, lbl_808872E4
    stfs f0, 0x100(r30)
lbl_fn_804ACAF8_0000113C:
    lwz r30, 0x5c(r31)
    cmpwi r30, 0x0
    beq lbl_fn_804ACAF8_00001164
    mr r3, r30
    li r4, 0x1
    bl fn_800D246C
    lfs f0, lbl_808872F8
    stfs f0, 0x104(r30)
    lfs f0, lbl_808872E4
    stfs f0, 0x100(r30)
lbl_fn_804ACAF8_00001164:
    lwz r30, 0x60(r31)
    cmpwi r30, 0x0
    beq lbl_fn_804ACAF8_0000118C
    mr r3, r30
    li r4, 0x1
    bl fn_800D246C
    lfs f0, lbl_808872F8
    stfs f0, 0x104(r30)
    lfs f0, lbl_808872E4
    stfs f0, 0x100(r30)
lbl_fn_804ACAF8_0000118C:
    lwz r30, 0x64(r31)
    cmpwi r30, 0x0
    beq lbl_fn_804ACAF8_000011B4
    mr r3, r30
    li r4, 0x1
    bl fn_800D246C
    lfs f0, lbl_808872F8
    stfs f0, 0x104(r30)
    lfs f0, lbl_808872E4
    stfs f0, 0x100(r30)
lbl_fn_804ACAF8_000011B4:
    lwz r30, 0x68(r31)
    cmpwi r30, 0x0
    beq lbl_fn_804ACAF8_000011DC
    mr r3, r30
    li r4, 0x1
    bl fn_800D246C
    lfs f0, lbl_808872F8
    stfs f0, 0x104(r30)
    lfs f0, lbl_808872E4
    stfs f0, 0x100(r30)
lbl_fn_804ACAF8_000011DC:
    lwz r4, 0x58(r31)
    lis r30, lbl_80757834@ha
    addi r30, r30, lbl_80757834@l
    la r29, lbl_8087E0E8
    addi r3, r30, 0x101
    addi r28, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r28
    mr r5, r29
    bl fn_801FEE08
    lwz r4, 0x58(r31)
    addi r3, r30, 0x10f
    la r29, lbl_8087E0E8
    addi r28, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r28
    mr r5, r29
    bl fn_801FEE08
    lwz r4, 0x58(r31)
    addi r3, r30, 0x11d
    la r29, lbl_8087E0E8
    addi r28, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r28
    mr r5, r29
    bl fn_801FEE08
    lwz r4, 0x5c(r31)
    addi r3, r30, 0x101
    la r29, lbl_8087E0E8
    addi r28, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r28
    mr r5, r29
    bl fn_801FEE08
    lwz r4, 0x5c(r31)
    addi r3, r30, 0x10f
    la r29, lbl_8087E0E8
    addi r28, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r28
    mr r5, r29
    bl fn_801FEE08
    lwz r4, 0x5c(r31)
    addi r3, r30, 0x11d
    la r29, lbl_8087E0E8
    addi r28, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r28
    mr r5, r29
    bl fn_801FEE08
    li r0, 0x0
    stw r0, 0x4c(r31)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804ACD10(void)
{
    nofralloc
    lwz r4, 0x4c(r3)
    subi r0, r4, 0x1
    cmplwi r0, 0x1
    bgt lbl_fn_804ACD10_00001354
    lwz r0, 0x50(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804ACD10_00001314
    lwz r4, 0x54(r3)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    b lbl_fn_804ACD10_00001340
lbl_fn_804ACD10_00001314:
    cmpwi r0, 0x1
    bne lbl_fn_804ACD10_00001330
    lwz r4, 0x58(r3)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    b lbl_fn_804ACD10_00001340
lbl_fn_804ACD10_00001330:
    lwz r4, 0x5c(r3)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
lbl_fn_804ACD10_00001340:
    lwz r3, 0x68(r3)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    blr
lbl_fn_804ACD10_00001354:
    cmpwi r4, 0x0
    beqlr
    lwz r0, 0x50(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804ACD10_0000137C
    lwz r3, 0x60(r3)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    blr
lbl_fn_804ACD10_0000137C:
    lwz r3, 0x64(r3)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    blr
}

asm void fn_804ACDBC(void)
{
    nofralloc
    lwz r4, 0x4c(r3)
    subi r0, r4, 0x1
    cmplwi r0, 0x1
    bgt lbl_fn_804ACDBC_00001400
    lwz r0, 0x50(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804ACDBC_000013C0
    lwz r4, 0x54(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    b lbl_fn_804ACDBC_000013EC
lbl_fn_804ACDBC_000013C0:
    cmpwi r0, 0x1
    bne lbl_fn_804ACDBC_000013DC
    lwz r4, 0x58(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    b lbl_fn_804ACDBC_000013EC
lbl_fn_804ACDBC_000013DC:
    lwz r4, 0x5c(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
lbl_fn_804ACDBC_000013EC:
    lwz r3, 0x68(r3)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    blr
lbl_fn_804ACDBC_00001400:
    cmpwi r4, 0x0
    beqlr
    lwz r0, 0x50(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804ACDBC_00001428
    lwz r3, 0x60(r3)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    blr
lbl_fn_804ACDBC_00001428:
    lwz r3, 0x64(r3)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    blr
}

asm void fn_804ACE68(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    stmw r24, 0x110(r1)
    mr r31, r3
    lis r3, lbl_80757834@ha
    la r29, lbl_8087E0E8
    addi r28, r3, lbl_80757834@l
    addi r3, r28, 0x12b
    lwz r4, 0x54(r31)
    addi r26, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r26
    mr r5, r29
    bl fn_801FEE08
    lwz r4, 0x60(r31)
    addi r3, r28, 0x137
    la r29, lbl_8087E0E8
    addi r26, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r26
    mr r5, r29
    bl fn_801FEE08
    lwz r4, 0x64(r31)
    addi r3, r28, 0x101
    la r29, lbl_8087E0E8
    addi r26, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r26
    mr r5, r29
    bl fn_801FEE08
    li r24, 0x0
    la r27, lbl_8087E0E8
    la r26, lbl_8087E0E8
    li r29, 0x0
    li r30, 0x20
lbl_fn_804ACE68_000014D8:
    addi r3, r1, 0x4
    mtctr r30
lbl_fn_804ACE68_000014E0:
    stw r29, 0x4(r3)
    stwu r29, 0x8(r3)
    bdnz lbl_fn_804ACE68_000014E0
    mr r5, r24
    addi r3, r1, 0x8
    addi r4, r28, 0x141
    crclr 6
    bl sprintf
    lwz r4, 0x58(r31)
    addi r3, r1, 0x8
    addi r25, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r25
    mr r5, r27
    bl fn_801FEE08
    lwz r4, 0x5c(r31)
    addi r3, r1, 0x8
    addi r25, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r25
    mr r5, r26
    bl fn_801FEE08
    addi r24, r24, 0x1
    cmpwi r24, 0x3
    blt lbl_fn_804ACE68_000014D8
    lwz r4, 0x5c(r31)
    lis r30, lbl_80757834@ha
    addi r30, r30, lbl_80757834@l
    la r26, lbl_8087E0E8
    addi r3, r30, 0x151
    addi r25, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r25
    mr r5, r26
    bl fn_801FEE08
    lwz r4, 0x5c(r31)
    addi r3, r30, 0x15f
    la r26, lbl_8087E0E8
    addi r25, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r25
    mr r5, r26
    bl fn_801FEE08
    lwz r4, 0x5c(r31)
    addi r3, r30, 0x16d
    la r26, lbl_8087E0E8
    addi r25, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r25
    mr r5, r26
    bl fn_801FEE08
    lmw r24, 0x110(r1)
    lwz r0, 0x134(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

asm void fn_804AD000(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    li r0, 0x20
    addi r6, r1, 0x4
    stw r31, 0x10c(r1)
    mr r31, r4
    li r4, 0x0
    stw r30, 0x108(r1)
    mr r30, r3
    mtctr r0
lbl_fn_804AD000_00001600:
    stw r4, 0x4(r6)
    stwu r4, 0x8(r6)
    bdnz lbl_fn_804AD000_00001600
    lwz r4, 0x4c(r3)
    subi r0, r4, 0x1
    cmplwi r0, 0x1
    bgt lbl_fn_804AD000_00001740
    lwz r0, 0x50(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804AD000_00001654
    lwz r4, 0x54(r30)
    lis r3, lbl_80757834@ha
    addi r3, r3, lbl_80757834@l
    addi r3, r3, 0x12b
    addi r30, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r30
    mr r5, r31
    bl fn_801FEE08
    b lbl_fn_804AD000_000017A8
lbl_fn_804AD000_00001654:
    cmpwi r0, 0x1
    bne lbl_fn_804AD000_00001698
    lis r4, lbl_80757834@ha
    addi r3, r1, 0x8
    addi r4, r4, lbl_80757834@l
    addi r4, r4, 0x141
    crclr 6
    bl sprintf
    lwz r4, 0x58(r30)
    addi r3, r1, 0x8
    addi r30, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r30
    mr r5, r31
    bl fn_801FEE08
    b lbl_fn_804AD000_000017A8
lbl_fn_804AD000_00001698:
    cmpwi r5, 0x3
    bne lbl_fn_804AD000_000016BC
    lis r4, lbl_80757834@ha
    addi r3, r1, 0x8
    addi r4, r4, lbl_80757834@l
    addi r4, r4, 0x151
    crclr 6
    bl sprintf
    b lbl_fn_804AD000_0000171C
lbl_fn_804AD000_000016BC:
    cmpwi r5, 0x4
    bne lbl_fn_804AD000_000016E0
    lis r4, lbl_80757834@ha
    addi r3, r1, 0x8
    addi r4, r4, lbl_80757834@l
    addi r4, r4, 0x15f
    crclr 6
    bl sprintf
    b lbl_fn_804AD000_0000171C
lbl_fn_804AD000_000016E0:
    cmpwi r5, 0x5
    bne lbl_fn_804AD000_00001704
    lis r4, lbl_80757834@ha
    addi r3, r1, 0x8
    addi r4, r4, lbl_80757834@l
    addi r4, r4, 0x16d
    crclr 6
    bl sprintf
    b lbl_fn_804AD000_0000171C
lbl_fn_804AD000_00001704:
    lis r4, lbl_80757834@ha
    addi r3, r1, 0x8
    addi r4, r4, lbl_80757834@l
    addi r4, r4, 0x141
    crclr 6
    bl sprintf
lbl_fn_804AD000_0000171C:
    lwz r4, 0x5c(r30)
    addi r3, r1, 0x8
    addi r30, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r30
    mr r5, r31
    bl fn_801FEE08
    b lbl_fn_804AD000_000017A8
lbl_fn_804AD000_00001740:
    cmpwi r4, 0x0
    beq lbl_fn_804AD000_000017A8
    lwz r0, 0x50(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804AD000_00001780
    lwz r4, 0x60(r30)
    lis r3, lbl_80757834@ha
    addi r3, r3, lbl_80757834@l
    addi r3, r3, 0x137
    addi r30, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r30
    mr r5, r31
    bl fn_801FEE08
    b lbl_fn_804AD000_000017A8
lbl_fn_804AD000_00001780:
    lwz r4, 0x64(r30)
    lis r3, lbl_80757834@ha
    addi r3, r3, lbl_80757834@l
    addi r3, r3, 0x101
    addi r30, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r30
    mr r5, r31
    bl fn_801FEE08
lbl_fn_804AD000_000017A8:
    lwz r0, 0x114(r1)
    lwz r31, 0x10c(r1)
    lwz r30, 0x108(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_804AD1EC(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    addi r11, r1, 0xa0
    bl _savegpr_14
    li r22, 0x0
    stw r22, 0x38(r1)
    mr r15, r3
    lfs f1, lbl_808872FC
    stw r22, 0x3c(r1)
    addi r3, r1, 0x38
    lfs f2, lbl_80887300
    li r5, 0x1
    stw r22, 0x40(r1)
    li r6, 0x1
    lfs f3, lbl_808872E4
    li r7, 0x0
    bl fn_800E0000
    lis r3, __files@ha
    lis r4, lbl_80757834@ha
    la r5, lbl_8087E0E8
    lbz r23, 0x1c(r1)
    addi r21, r5, 0x2
    addi r20, r1, 0x2c
    addi r25, r4, lbl_80757834@l
    addi r26, r3, __files@l
    addi r27, r1, 0x40
    addi r18, r1, 0x44
    lis r29, 0xcccd
    lis r24, 0x1555
    lis r28, 0x71c
    lis r30, 0xe39
    lis r14, lbl_807799A0@ha
    lis r31, 0x2aab
    b lbl_fn_804AD1EC_00001C44
lbl_fn_804AD1EC_0000184C:
    stw r22, 0x2c(r1)
    mr r3, r21
    stw r22, 0x30(r1)
    stw r22, 0x34(r1)
    bl fn_80686A48
    mr r16, r3
    mr r3, r20
    mr r4, r16
    bl fn_800DBF68
    slwi r0, r16, 1
    stb r23, 0x18(r1)
    mr r3, r20
    mr r6, r21
    add r7, r21, r0
    addi r8, r1, 0x18
    li r4, 0x0
    li r5, 0x0
    bl fn_8006F72C
    lwz r0, 0x3c(r1)
    lwz r3, 0x40(r1)
    cmplw r0, r3
    bge lbl_fn_804AD1EC_0000192C
    mulli r0, r0, 0xc
    lwz r3, 0x38(r1)
    add. r16, r3, r0
    beq lbl_fn_804AD1EC_0000191C
    lwz r3, 0x2c(r1)
    srwi. r0, r3, 31
    bne lbl_fn_804AD1EC_000018D8
    lwz r0, 0x30(r1)
    stw r3, 0x0(r16)
    stw r0, 0x4(r16)
    lwz r0, 0x34(r1)
    stw r0, 0x8(r16)
    b lbl_fn_804AD1EC_0000191C
lbl_fn_804AD1EC_000018D8:
    stw r22, 0x0(r16)
    mr r3, r16
    stw r22, 0x4(r16)
    stw r22, 0x8(r16)
    lwz r4, 0x30(r1)
    bl fn_800DBF68
    lwz r0, 0x30(r1)
    mr r3, r16
    lbz r4, 0xc(r1)
    addi r8, r1, 0x8
    stb r4, 0x8(r1)
    slwi r0, r0, 1
    lwz r6, 0x34(r1)
    li r4, 0x0
    li r5, 0x0
    add r7, r6, r0
    bl fn_8006F72C
lbl_fn_804AD1EC_0000191C:
    lwz r3, 0x3c(r1)
    addi r0, r3, 0x1
    stw r0, 0x3c(r1)
    b lbl_fn_804AD1EC_00001C30
lbl_fn_804AD1EC_0000192C:
    addi r0, r24, 0x5555
    subf r0, r3, r0
    cmplwi r0, 0x1
    bge lbl_fn_804AD1EC_00001950
    addi r4, r25, 0x17b
    addi r3, r26, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_804AD1EC_00001950:
    lwz r3, 0x3c(r1)
    addi r0, r24, 0x5555
    lwz r16, 0x40(r1)
    addi r3, r3, 0x1
    stw r22, 0x44(r1)
    subf r3, r16, r3
    subf r0, r16, r0
    cmplw r3, r0
    stw r22, 0x48(r1)
    stw r22, 0x4c(r1)
    stw r27, 0x50(r1)
    stw r22, 0x54(r1)
    stw r3, 0x28(r1)
    ble lbl_fn_804AD1EC_0000199C
    addi r4, r25, 0x17b
    addi r3, r26, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_804AD1EC_0000199C:
    addi r0, r28, 0x71c7
    cmplw r16, r0
    bge lbl_fn_804AD1EC_000019E4
    addi r4, r16, 0x1
    subi r5, r29, 0x3333
    slwi r3, r4, 2
    lwz r0, 0x28(r1)
    subf r4, r4, r3
    mulhwu r4, r5, r4
    addi r3, r1, 0x20
    srwi r4, r4, 2
    stw r4, 0x20(r1)
    cmplw r4, r0
    bge lbl_fn_804AD1EC_000019D8
    addi r3, r1, 0x28
lbl_fn_804AD1EC_000019D8:
    lwz r0, 0x0(r3)
    add r16, r16, r0
    b lbl_fn_804AD1EC_00001A20
lbl_fn_804AD1EC_000019E4:
    subi r0, r30, 0x1c72
    cmplw r16, r0
    bge lbl_fn_804AD1EC_00001A1C
    addi r3, r16, 0x1
    lwz r0, 0x28(r1)
    srwi r3, r3, 1
    stw r3, 0x24(r1)
    cmplw r3, r0
    addi r3, r1, 0x24
    bge lbl_fn_804AD1EC_00001A10
    addi r3, r1, 0x28
lbl_fn_804AD1EC_00001A10:
    lwz r0, 0x0(r3)
    add r16, r16, r0
    b lbl_fn_804AD1EC_00001A20
lbl_fn_804AD1EC_00001A1C:
    addi r16, r24, 0x5555
lbl_fn_804AD1EC_00001A20:
    addi r0, r24, 0x5555
    cmplw r16, r0
    ble lbl_fn_804AD1EC_00001A40
    addi r4, r25, 0x17b
    addi r3, r26, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_804AD1EC_00001A40:
    mulli r3, r16, 0xc
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r17, r3
    bne lbl_fn_804AD1EC_00001A68
    addi r3, r26, 0xa0
    addi r4, r14, lbl_807799A0@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_804AD1EC_00001A68:
    lwz r5, 0x3c(r1)
    lwz r0, 0x48(r1)
    mulli r4, r5, 0xc
    stw r16, 0x4c(r1)
    stw r17, 0x44(r1)
    mulli r3, r0, 0xc
    add r0, r17, r4
    stw r5, 0x54(r1)
    add. r16, r3, r0
    beq lbl_fn_804AD1EC_00001AF8
    lwz r3, 0x2c(r1)
    srwi. r0, r3, 31
    bne lbl_fn_804AD1EC_00001AB4
    lwz r0, 0x30(r1)
    stw r3, 0x0(r16)
    stw r0, 0x4(r16)
    lwz r0, 0x34(r1)
    stw r0, 0x8(r16)
    b lbl_fn_804AD1EC_00001AF8
lbl_fn_804AD1EC_00001AB4:
    stw r22, 0x0(r16)
    mr r3, r16
    stw r22, 0x4(r16)
    stw r22, 0x8(r16)
    lwz r4, 0x30(r1)
    bl fn_800DBF68
    lwz r0, 0x30(r1)
    mr r3, r16
    lbz r4, 0x10(r1)
    addi r8, r1, 0x14
    stb r4, 0x14(r1)
    slwi r0, r0, 1
    lwz r6, 0x34(r1)
    li r4, 0x0
    li r5, 0x0
    add r7, r6, r0
    bl fn_8006F72C
lbl_fn_804AD1EC_00001AF8:
    lwz r0, 0x3c(r1)
    subi r6, r31, 0x5555
    lwz r16, 0x38(r1)
    mulli r5, r0, 0xc
    lwz r3, 0x48(r1)
    lwz r0, 0x54(r1)
    mr r4, r16
    addi r7, r3, 0x1
    lwz r3, 0x44(r1)
    add r5, r16, r5
    stw r7, 0x48(r1)
    subf r5, r16, r5
    mulhw r5, r6, r5
    srawi r5, r5, 1
    srwi r6, r5, 31
    add r19, r5, r6
    subf r0, r19, r0
    stw r0, 0x54(r1)
    mulli r17, r19, 0xc
    mulli r0, r0, 0xc
    mr r5, r17
    add r3, r3, r0
    bl memcpy
    mr r3, r16
    mr r5, r17
    li r4, 0x0
    bl memset
    lwz r0, 0x54(r1)
    lwz r8, 0x3c(r1)
    mulli r3, r0, 0xc
    lwz r0, 0x48(r1)
    lwz r7, 0x38(r1)
    lwz r4, 0x44(r1)
    add r5, r0, r19
    add r17, r7, r3
    mulli r0, r8, 0xc
    lwz r6, 0x40(r1)
    lwz r3, 0x4c(r1)
    stw r3, 0x40(r1)
    add r16, r17, r0
    stw r6, 0x4c(r1)
    stw r4, 0x38(r1)
    stw r7, 0x44(r1)
    stw r5, 0x3c(r1)
    stw r8, 0x48(r1)
    b lbl_fn_804AD1EC_00001BCC
lbl_fn_804AD1EC_00001BB0:
    subic. r16, r16, 0xc
    beq lbl_fn_804AD1EC_00001BCC
    lwz r0, 0x0(r16)
    srwi. r0, r0, 31
    beq lbl_fn_804AD1EC_00001BCC
    lwz r3, 0x8(r16)
    bl dtor_80084684
lbl_fn_804AD1EC_00001BCC:
    cmplw r16, r17
    bgt lbl_fn_804AD1EC_00001BB0
    cmpwi r18, 0x0
    stw r22, 0x48(r1)
    beq lbl_fn_804AD1EC_00001C30
    lwz r3, 0x44(r1)
    cmpwi r3, 0x0
    beq lbl_fn_804AD1EC_00001C30
    mulli r0, r22, 0xc
    stw r22, 0x48(r1)
    li r16, 0x0
    add r17, r3, r0
    b lbl_fn_804AD1EC_00001C20
lbl_fn_804AD1EC_00001C00:
    subic. r17, r17, 0xc
    beq lbl_fn_804AD1EC_00001C1C
    lwz r0, 0x0(r17)
    srwi. r0, r0, 31
    beq lbl_fn_804AD1EC_00001C1C
    lwz r3, 0x8(r17)
    bl dtor_80084684
lbl_fn_804AD1EC_00001C1C:
    subi r16, r16, 0x1
lbl_fn_804AD1EC_00001C20:
    cmpwi r16, 0x0
    bne lbl_fn_804AD1EC_00001C00
    lwz r3, 0x44(r1)
    bl dtor_80084684
lbl_fn_804AD1EC_00001C30:
    lwz r0, 0x2c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_804AD1EC_00001C44
    lwz r3, 0x34(r1)
    bl dtor_80084684
lbl_fn_804AD1EC_00001C44:
    lwz r0, 0x3c(r1)
    cmplwi r0, 0x6
    blt lbl_fn_804AD1EC_0000184C
    li r16, 0x0
    li r14, 0x0
lbl_fn_804AD1EC_00001C58:
    lwz r0, 0x38(r1)
    mr r3, r15
    add r4, r0, r14
    lwzx r0, r14, r0
    srwi. r0, r0, 31
    bne lbl_fn_804AD1EC_00001C78
    addi r4, r4, 0x2
    b lbl_fn_804AD1EC_00001C7C
lbl_fn_804AD1EC_00001C78:
    lwz r4, 0x8(r4)
lbl_fn_804AD1EC_00001C7C:
    mr r5, r16
    bl fn_804AD000
    addi r16, r16, 0x1
    addi r14, r14, 0xc
    cmpwi r16, 0x6
    blt lbl_fn_804AD1EC_00001C58
    addic. r0, r1, 0x38
    beq lbl_fn_804AD1EC_00001CF4
    beq lbl_fn_804AD1EC_00001CF4
    lwz r4, 0x38(r1)
    cmpwi r4, 0x0
    beq lbl_fn_804AD1EC_00001CF4
    lwz r15, 0x3c(r1)
    mulli r3, r15, 0xc
    subf r0, r15, r15
    stw r0, 0x3c(r1)
    add r14, r4, r3
    b lbl_fn_804AD1EC_00001CE4
lbl_fn_804AD1EC_00001CC4:
    subic. r14, r14, 0xc
    beq lbl_fn_804AD1EC_00001CE0
    lwz r0, 0x0(r14)
    srwi. r0, r0, 31
    beq lbl_fn_804AD1EC_00001CE0
    lwz r3, 0x8(r14)
    bl dtor_80084684
lbl_fn_804AD1EC_00001CE0:
    subi r15, r15, 0x1
lbl_fn_804AD1EC_00001CE4:
    cmpwi r15, 0x0
    bne lbl_fn_804AD1EC_00001CC4
    lwz r3, 0x38(r1)
    bl dtor_80084684
lbl_fn_804AD1EC_00001CF4:
    addi r11, r1, 0xa0
    bl _restgpr_14
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}
