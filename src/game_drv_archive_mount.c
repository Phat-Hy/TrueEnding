#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_24(void);
extern void _restgpr_26(void);
extern void _savegpr_24(void);
extern void _savegpr_26(void);
extern void dtor_80084684(void);
extern void fn_800183E0(void);
extern void fn_800184F4(void);
extern void fn_80018608(void);
extern void fn_8003E918(void);
extern void fn_80043EAC(void);
extern void fn_80044134(void);
extern void fn_8004424C(void);
extern void fn_8005DFC8(void);
extern void fn_80061824(void);
extern void fn_8006EF48(void);
extern void fn_800827E0(void);
extern void fn_80084320(void);
extern void fn_80084F84(void);
extern void fn_800A555C(void);
extern void fn_800A55FC(void);
extern void fn_800A5920(void);
extern void fn_800C31F4(void);
extern void fn_800CB360(void);
extern void fn_800CB3A0(void);
extern void fn_800CB440(void);
extern void fn_800CB5C8(void);
extern void fn_800D1D3C(void);
extern void fn_800D1E9C(void);
extern void fn_800D2338(void);
extern void fn_800D246C(void);
extern void fn_800D3FA4(void);
extern void fn_800D59B8(void);
extern void fn_800E0000(void);
extern void fn_800EE794(void);
extern void fn_801231D0(void);
extern void fn_801240B4(void);
extern void fn_8012D180(void);
extern void fn_80160170(void);
extern void fn_80160324(void);
extern void fn_8016034C(void);
extern void fn_8017ABD4(void);
extern void fn_801F3FF8(void);
extern void fn_801F64D0(void);
extern void fn_80219558(void);
extern void fn_80219E6C(void);
extern void fn_8021A77C(void);
extern void fn_80375184(void);
extern void fn_8037F744(void);
extern void fn_80390A88(void);
extern void fn_803D8344(void);
extern void fn_803E4A48(void);
extern void fn_804A5E40(void);
extern void fn_80571560(void);
extern void fn_80572B70(void);
extern void fn_8059C2AC(void);
extern void fn_805A96D8(void);
extern void fn_805AB82C(void);
extern void fn_805ABE78(void);
extern void fn_805AC75C(void);
extern void fn_805ADDD8(void);
extern void fn_805ADF54(void);
extern void fn_805AE18C(void);
extern void fn_805F8E70(void);
extern void fn_805F9750(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);
extern void fn_8068B100(void);
extern void fn_806958E0(void);
extern void fn_806959D8(void);
extern void fn_80695D84(void);

/* External data declarations */
extern u8 lbl_807637E0[];
extern u8 lbl_807637E8[];
extern u8 lbl_807637FC[];
extern u8 lbl_80763840[];
extern u8 lbl_80763848[];
extern u8 lbl_807638F0[];
extern u8 lbl_80763918[];
extern u8 lbl_807639F8[];
extern u8 lbl_80775B18[];
extern u8 lbl_807975E8[];
extern u8 lbl_807976EC[];
extern u8 lbl_807C95B0[];

/* Small data declarations */
extern u32 lbl_8087EE68;
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EEC8;
extern u32 lbl_8087EEE0;
extern u32 lbl_8087EF70;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F1E4;
extern u32 lbl_8087F430;
extern u32 lbl_8087F490;
extern u32 lbl_8087F4E8;
extern u32 lbl_8087F580;
extern u32 lbl_8087F8A0;
extern u32 lbl_8087F9A0;
extern u32 lbl_8087F9AC;
extern u32 lbl_8087F9C0;
extern u32 lbl_8087F9E8;
extern u32 lbl_8087F9F8;
extern u32 lbl_808813D0;
extern u32 lbl_808882A0;
extern u32 lbl_808882A4;
extern u32 lbl_808882A8;
extern u32 lbl_808882AC;
extern u32 lbl_808882B0;
extern u32 lbl_808882B4;
extern u32 lbl_808882B8;
extern u32 lbl_808882BC;
extern u32 lbl_808882C0;
extern u32 lbl_808882C4;
extern u32 lbl_808882C8;
extern u32 lbl_808882CC;
extern u32 lbl_808882D0;
extern u32 lbl_808882D4;
extern u32 lbl_808882D8;
extern u32 lbl_808882DC;
extern u32 lbl_808882E0;
extern u32 lbl_808882E8;
extern u32 lbl_808882EC;
extern u32 lbl_808882F0;
extern u32 lbl_808882F4;
extern u32 lbl_808882F8;
extern u32 lbl_808882FC;
extern u32 lbl_80888300;
extern u32 lbl_80888304;
extern u32 lbl_80888308;
extern u32 lbl_8088830C;
extern u32 lbl_80888310;
extern u32 lbl_80888314;
extern u32 lbl_80888318;
extern u32 lbl_8088831C;
extern u32 lbl_80888320;
extern u32 lbl_80888324;
extern u32 lbl_80888328;

/* Function declarations */
void fn_805A6404(void);
void fn_805A646C(void);
void fn_805A6614(void);
void fn_805A6A84(void);
void fn_805A6AC0(void);
void fn_805A6B18(void);
void fn_805A6B54(void);
void fn_805A6B58(void);
void fn_805A6BD8(void);
void fn_805A6BDC(void);
void fn_805A6D14(void);
void fn_805A6D24(void);
void fn_805A70D8(void);
void fn_805A70F4(void);
void fn_805A715C(void);
void fn_805A7580(void);
void fn_805A75C4(void);
void fn_805A7604(void);
void fn_805A7650(void);
void fn_805A76E4(void);
void fn_805A7820(void);

asm void fn_805A6404(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    addi r31, r3, 0x54
    stw r30, 0x18(r1)
    li r30, 0x1
    stw r29, 0x14(r1)
    li r29, 0x0
lbl_fn_805A6404_00000024:
    mr r3, r31
    bl fn_800D59B8
    cmpwi r3, 0x0
    beq lbl_fn_805A6404_00000038
    li r30, 0x0
lbl_fn_805A6404_00000038:
    addi r29, r29, 0x1
    addi r31, r31, 0x30
    cmpwi r29, 0x2
    blt lbl_fn_805A6404_00000024
    mr r3, r30
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805A646C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805A646C_000000A8
    cmpwi r0, 0x1
    beq lbl_fn_805A646C_00000108
    cmpwi r0, 0x2
    beq lbl_fn_805A646C_0000016C
    cmpwi r0, 0x3
    beq lbl_fn_805A646C_000001B0
    b lbl_fn_805A646C_000001F8
lbl_fn_805A646C_000000A8:
    lwz r4, 0x50(r3)
    li r31, 0x0
    addi r0, r4, 0x1
    stw r0, 0x50(r3)
    cmpwi r0, 0x1e
    blt lbl_fn_805A646C_000000DC
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x0
    bl fn_800A5920
    cmpwi r3, 0x0
    beq lbl_fn_805A646C_000000DC
    li r31, 0x1
lbl_fn_805A646C_000000DC:
    lwz r0, 0x50(r30)
    cmpwi r0, 0x257
    blt lbl_fn_805A646C_000000EC
    li r31, 0x1
lbl_fn_805A646C_000000EC:
    cmpwi r31, 0x0
    beq lbl_fn_805A646C_000001F8
    li r3, 0x2
    li r0, 0x0
    stw r3, 0x48(r30)
    stw r0, 0x4c(r30)
    b lbl_fn_805A646C_000001F8
lbl_fn_805A646C_00000108:
    lwz r5, lbl_8087EEE0
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lis r4, lbl_807637E0@ha
    lhz r0, 0x10(r5)
    lfd f2, lbl_807637E0@l(r4)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfs f0, lbl_808882A0
    lfd f1, 0x8(r1)
    fsubs f1, f1, f2
    fcmpo cr0, f1, f0
    ble lbl_fn_805A646C_0000014C
    li r4, 0x0
    li r0, 0x3
    stw r4, 0x4c(r3)
    stw r0, 0x48(r3)
lbl_fn_805A646C_0000014C:
    lwz r4, 0x4c(r3)
    addi r0, r4, 0x1
    stw r0, 0x4c(r3)
    cmpwi r0, 0xf
    blt lbl_fn_805A646C_000001F8
    li r0, 0x0
    stw r0, 0x48(r3)
    b lbl_fn_805A646C_000001F8
lbl_fn_805A646C_0000016C:
    lwz r4, 0x4c(r3)
    addi r0, r4, 0x1
    stw r0, 0x4c(r3)
    cmpwi r0, 0xf
    blt lbl_fn_805A646C_000001F8
    bl fn_800D2338
    lwz r4, lbl_8087F4E8
    li r0, 0x1
    lis r3, lbl_807637FC@ha
    stw r0, 0x88(r4)
    addi r3, r3, lbl_807637FC@l
    addi r4, r3, 0x35
    lwz r3, lbl_8087F4E8
    stw r0, 0x90(r3)
    lwz r3, lbl_8087F9AC
    bl fn_80572B70
    b lbl_fn_805A646C_000001F8
lbl_fn_805A646C_000001B0:
    lwz r4, 0x4c(r3)
    addi r0, r4, 0x1
    stw r0, 0x4c(r3)
    cmpwi r0, 0x2d
    ble lbl_fn_805A646C_000001F8
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x0
    bl fn_800A5920
    cmpwi r3, 0x0
    beq lbl_fn_805A646C_000001F8
    li r3, 0xf
    li r0, 0x4
    stw r3, 0x4c(r30)
    li r4, 0x0
    stw r0, 0x48(r30)
    lwz r3, lbl_8087F9A0
    bl fn_80571560
lbl_fn_805A646C_000001F8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805A6614(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    lis r5, 0x4330
    lis r4, 0x1b4f
    stw r0, 0xc4(r1)
    subi r4, r4, 0x7e4b
    stfd f31, 0xb0(r1)
    psq_st f31, 0xb8(r1), 0, 0
    lfs f31, lbl_808882A4
    stfd f30, 0xa0(r1)
    psq_st f30, 0xa8(r1), 0, 0
    stfd f29, 0x90(r1)
    psq_st f29, 0x98(r1), 0, 0
    stfd f28, 0x80(r1)
    psq_st f28, 0x88(r1), 0, 0
    stfd f27, 0x70(r1)
    psq_st f27, 0x78(r1), 0, 0
    stfd f26, 0x60(r1)
    psq_st f26, 0x68(r1), 0, 0
    stfd f25, 0x50(r1)
    psq_st f25, 0x58(r1), 0, 0
    stfd f24, 0x40(r1)
    psq_st f24, 0x48(r1), 0, 0
    stfd f23, 0x30(r1)
    psq_st f23, 0x38(r1), 0, 0
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    mr r30, r3
    lwz r0, 0x50(r3)
    lwz r6, 0x48(r3)
    mulhw r4, r4, r0
    stw r5, 0x18(r1)
    subi r0, r6, 0x3
    stw r5, 0x20(r1)
    cmplwi r0, 0x1
    srawi r4, r4, 4
    srwi r0, r4, 31
    add r0, r4, r0
    srwi r4, r0, 31
    clrlwi r0, r0, 31
    xor r0, r0, r4
    subf r31, r4, r0
    ble lbl_fn_805A6614_00000324
    cmpwi r6, 0x1
    beq lbl_fn_805A6614_000002D0
    cmpwi r6, 0x2
    beq lbl_fn_805A6614_000002F8
    b lbl_fn_805A6614_00000508
lbl_fn_805A6614_000002D0:
    lwz r0, 0x4c(r3)
    lis r3, lbl_807637E0@ha
    lfd f2, lbl_807637E0@l(r3)
    xoris r0, r0, 0x8000
    stw r0, 0x1c(r1)
    lfs f0, lbl_808882A8
    lfd f1, 0x18(r1)
    fsubs f1, f1, f2
    fdivs f31, f1, f0
    b lbl_fn_805A6614_00000508
lbl_fn_805A6614_000002F8:
    lwz r0, 0x4c(r3)
    lis r3, lbl_807637E0@ha
    lfd f2, lbl_807637E0@l(r3)
    subfic r0, r0, 0xf
    lfs f0, lbl_808882A8
    xoris r0, r0, 0x8000
    stw r0, 0x24(r1)
    lfd f1, 0x20(r1)
    fsubs f1, f1, f2
    fdivs f31, f1, f0
    b lbl_fn_805A6614_00000508
lbl_fn_805A6614_00000324:
    lwz r0, 0x4c(r3)
    lis r3, lbl_807637E0@ha
    lfd f2, lbl_807637E0@l(r3)
    xoris r0, r0, 0x8000
    stw r0, 0x1c(r1)
    lfs f1, lbl_808882A8
    lfd f0, 0x18(r1)
    fsubs f0, f0, f2
    fdivs f0, f0, f1
    fcmpo cr0, f31, f0
    bge lbl_fn_805A6614_00000354
    b lbl_fn_805A6614_00000364
lbl_fn_805A6614_00000354:
    stw r0, 0x24(r1)
    lfd f0, 0x20(r1)
    fsubs f0, f0, f2
    fdivs f31, f0, f1
lbl_fn_805A6614_00000364:
    li r0, 0x0
    stw r0, 0x8(r1)
    lwz r4, lbl_8087F1E4
    addi r3, r1, 0x8
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    lwz r4, 0xe3c(r4)
    cmpwi r4, 0x0
    beq lbl_fn_805A6614_0000038C
    b lbl_fn_805A6614_00000390
lbl_fn_805A6614_0000038C:
    la r4, lbl_808813D0
lbl_fn_805A6614_00000390:
    lfs f1, lbl_808882AC
    li r5, 0x1
    lfs f2, lbl_808882B0
    li r6, 0x1
    lfs f3, lbl_808882B4
    li r7, 0x0
    bl fn_800E0000
    lis r3, lbl_807637E8@ha
    lfs f25, lbl_808882BC
    lfs f26, lbl_808882B8
    li r31, 0x0
    lfd f27, lbl_807637E8@l(r3)
    li r30, 0x0
    lfs f28, lbl_808882C4
    lfs f29, lbl_808882C0
    lfs f30, lbl_808882C8
    b lbl_fn_805A6614_00000498
lbl_fn_805A6614_000003D4:
    lwz r0, 0x8(r1)
    lwz r3, lbl_8087EEC8
    add r4, r0, r30
    lwzx r0, r30, r0
    lfs f1, lbl_808882B0
    srwi. r0, r0, 31
    bne lbl_fn_805A6614_000003F8
    addi r4, r4, 0x2
    b lbl_fn_805A6614_000003FC
lbl_fn_805A6614_000003F8:
    lwz r4, 0x8(r4)
lbl_fn_805A6614_000003FC:
    lfs f2, lbl_808882B4
    li r5, 0x1
    li r6, 0x1
    bl fn_8006EF48
    stw r31, 0x1c(r1)
    fsubs f2, f25, f1
    fmuls f1, f30, f31
    lfd f0, 0x18(r1)
    fmuls f24, f26, f2
    fsubs f0, f0, f27
    fmadds f23, f28, f0, f29
    bl fn_80695D84
    slwi r0, r3, 24
    lfs f4, lbl_808882B0
    oris r5, r0, 0xff
    lwz r4, 0x8(r1)
    lwzux r0, r4, r30
    fmr f1, f24
    fmr f2, f23
    lwz r3, lbl_8087EEB0
    fmr f5, f4
    srwi. r0, r0, 31
    lfs f3, lbl_808882B4
    ori r5, r5, 0xffff
    bne lbl_fn_805A6614_00000468
    addi r4, r4, 0x2
    b lbl_fn_805A6614_0000046C
lbl_fn_805A6614_00000468:
    lwz r4, 0x8(r4)
lbl_fn_805A6614_0000046C:
    lfs f6, lbl_808882B4
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    fmr f7, f6
    li r9, 0x0
    fmr f8, f6
    lis r10, 0xff00
    bl fn_80061824
    addi r30, r30, 0xc
    addi r31, r31, 0x1
lbl_fn_805A6614_00000498:
    lwz r0, 0xc(r1)
    cmplw r31, r0
    blt lbl_fn_805A6614_000003D4
    addic. r0, r1, 0x8
    beq lbl_fn_805A6614_00000620
    beq lbl_fn_805A6614_00000620
    lwz r4, 0x8(r1)
    cmpwi r4, 0x0
    beq lbl_fn_805A6614_00000620
    lwz r31, 0xc(r1)
    mulli r3, r31, 0xc
    subf r0, r31, r31
    stw r0, 0xc(r1)
    add r30, r4, r3
    b lbl_fn_805A6614_000004F4
lbl_fn_805A6614_000004D4:
    subic. r30, r30, 0xc
    beq lbl_fn_805A6614_000004F0
    lwz r0, 0x0(r30)
    srwi. r0, r0, 31
    beq lbl_fn_805A6614_000004F0
    lwz r3, 0x8(r30)
    bl dtor_80084684
lbl_fn_805A6614_000004F0:
    subi r31, r31, 0x1
lbl_fn_805A6614_000004F4:
    cmpwi r31, 0x0
    bne lbl_fn_805A6614_000004D4
    lwz r3, 0x8(r1)
    bl dtor_80084684
    b lbl_fn_805A6614_00000620
lbl_fn_805A6614_00000508:
    lwz r6, lbl_8087EEE0
    lis r5, lbl_807637E0@ha
    lfs f8, lbl_808882A4
    lwz r3, 0x3c(r6)
    lhz r0, 0xe(r6)
    fmr f10, f8
    xoris r4, r3, 0x8000
    stw r4, 0x24(r1)
    xoris r0, r0, 0x8000
    lwz r3, 0x40(r6)
    lfd f4, 0x20(r1)
    stw r0, 0x1c(r1)
    xoris r3, r3, 0x8000
    lhz r0, 0x10(r6)
    stw r4, 0x24(r1)
    lfd f2, 0x18(r1)
    xoris r0, r0, 0x8000
    lfd f1, 0x20(r1)
    lfd f5, lbl_807637E0@l(r5)
    stw r0, 0x1c(r1)
    fsubs f3, f1, f5
    lwz r0, 0x44(r6)
    stw r3, 0x24(r1)
    fsubs f2, f2, f5
    lfd f0, 0x18(r1)
    cmpwi r0, 0x0
    lfd f1, 0x20(r1)
    fsubs f0, f0, f5
    fdivs f2, f3, f2
    lfs f23, lbl_808882CC
    lfs f24, lbl_808882D0
    fsubs f1, f1, f5
    fsubs f7, f4, f5
    fdivs f9, f1, f0
    beq lbl_fn_805A6614_000005A4
    fmr f2, f10
    lfs f8, lbl_808882D4
    lfs f6, lbl_808882C4
    b lbl_fn_805A6614_000005AC
lbl_fn_805A6614_000005A4:
    lfs f10, lbl_808882D8
    lfs f6, lbl_808882DC
lbl_fn_805A6614_000005AC:
    fmuls f5, f8, f2
    lfs f0, lbl_808882C8
    fmuls f4, f9, f10
    lfs f3, lbl_808882CC
    fmuls f1, f0, f31
    lfs f2, lbl_808882B8
    fmuls f0, f9, f5
    lfs f26, lbl_808882B4
    fmuls f24, f24, f4
    fdivs f0, f0, f10
    fdivs f23, f23, f0
    fmuls f7, f7, f0
    fsubs f0, f7, f3
    fmadds f25, f2, f0, f6
    bl fn_80695D84
    mulli r0, r31, 0x30
    slwi r4, r3, 24
    fmr f1, f25
    lwz r3, lbl_8087EEB0
    fmr f2, f26
    oris r4, r4, 0xff
    add r5, r30, r0
    fmr f4, f23
    fmr f5, f24
    lfs f3, lbl_808882B4
    ori r4, r4, 0xffff
    addi r5, r5, 0x54
    li r6, 0x1
    bl fn_8005DFC8
lbl_fn_805A6614_00000620:
    lwz r0, 0xc4(r1)
    psq_l f31, 0xb8(r1), 0, 0
    lfd f31, 0xb0(r1)
    psq_l f30, 0xa8(r1), 0, 0
    lfd f30, 0xa0(r1)
    psq_l f29, 0x98(r1), 0, 0
    lfd f29, 0x90(r1)
    psq_l f28, 0x88(r1), 0, 0
    lfd f28, 0x80(r1)
    psq_l f27, 0x78(r1), 0, 0
    lfd f27, 0x70(r1)
    psq_l f26, 0x68(r1), 0, 0
    lfd f26, 0x60(r1)
    psq_l f25, 0x58(r1), 0, 0
    lfd f25, 0x50(r1)
    psq_l f24, 0x48(r1), 0, 0
    lfd f24, 0x40(r1)
    psq_l f23, 0x38(r1), 0, 0
    lfd f23, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

asm void fn_805A6A84(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80043EAC
    lis r4, lbl_807975E8@ha
    mr r3, r31
    addi r4, r4, lbl_807975E8@l
    stw r4, 0x0(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805A6AC0(void)
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
    beq lbl_fn_805A6AC0_000006F8
    li r4, 0x0
    bl fn_80044134
    cmpwi r31, 0x0
    ble lbl_fn_805A6AC0_000006F8
    mr r3, r30
    bl dtor_80084684
lbl_fn_805A6AC0_000006F8:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805A6B18(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    bl fn_8004424C
    cmpwi r3, 0x0
    beq lbl_fn_805A6B18_00000738
    li r31, 0x1
lbl_fn_805A6B18_00000738:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805A6B54(void)
{
    nofralloc
    blr
}

asm void fn_805A6B58(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0xc(r3)
    stw r0, 0x8(r3)
    stw r0, 0x4(r3)
    stw r0, 0x0(r3)
    stw r0, 0x14(r3)
    stw r0, 0x10(r3)
    stw r0, 0x24(r3)
    stw r0, 0x20(r3)
    stw r0, 0x1c(r3)
    stw r0, 0x18(r3)
    stw r0, 0x2c(r3)
    stw r0, 0x28(r3)
    stw r0, 0x3c(r3)
    stw r0, 0x38(r3)
    stw r0, 0x34(r3)
    stw r0, 0x30(r3)
    stw r0, 0x44(r3)
    stw r0, 0x40(r3)
    stw r0, 0x54(r3)
    stw r0, 0x50(r3)
    stw r0, 0x4c(r3)
    stw r0, 0x48(r3)
    stw r0, 0x5c(r3)
    stw r0, 0x58(r3)
    stw r0, 0x6c(r3)
    stw r0, 0x68(r3)
    stw r0, 0x64(r3)
    stw r0, 0x60(r3)
    stw r0, 0x74(r3)
    stw r0, 0x70(r3)
    blr
}

asm void fn_805A6BD8(void)
{
    nofralloc
    blr
}

asm void fn_805A6BDC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r12, 0x4330
    lis r4, 0x431c
    stw r0, 0x24(r1)
    lis r7, lbl_80763840@ha
    lis r9, 0x8000
    subi r10, r4, 0x217d
    stw r31, 0x1c(r1)
    mr r31, r3
    lfd f1, lbl_80763840@l(r7)
    lwz r0, 0xf8(r9)
    lwz r6, 0x14(r3)
    srwi r0, r0, 2
    lwz r5, 0x2c(r3)
    mulhwu r8, r10, r0
    slwi r11, r6, 3
    slwi r6, r5, 3
    stw r12, 0x8(r1)
    lwz r4, 0x44(r3)
    lwz r0, 0x5c(r3)
    srwi r5, r8, 15
    stw r12, 0x10(r1)
    divwu r8, r11, r5
    slwi r5, r4, 3
    slwi r4, r0, 3
    stw r8, 0xc(r1)
    lfd f0, 0x8(r1)
    fsub f0, f0, f1
    frsp f0, f0
    stfs f0, 0x78(r3)
    lwz r0, 0xf8(r9)
    srwi r0, r0, 2
    mulhwu r0, r10, r0
    srwi r0, r0, 15
    divwu r0, r6, r0
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsub f0, f0, f1
    frsp f0, f0
    stfs f0, 0x7c(r3)
    lwz r0, 0xf8(r9)
    srwi r0, r0, 2
    mulhwu r0, r10, r0
    srwi r0, r0, 15
    divwu r0, r5, r0
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsub f0, f0, f1
    frsp f0, f0
    stfs f0, 0x80(r3)
    lwz r0, 0xf8(r9)
    srwi r0, r0, 2
    mulhwu r0, r10, r0
    srwi r0, r0, 15
    divwu r0, r4, r0
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsub f0, f0, f1
    frsp f0, f0
    stfs f0, 0x84(r3)
    bl fn_800827E0
    addi r3, r3, 0x138
    bl fn_80084F84
    stw r3, 0x88(r31)
    bl fn_800827E0
    addi r3, r3, 0x150
    bl fn_80084F84
    stw r3, 0x8c(r31)
    bl fn_800827E0
    addi r3, r3, 0x168
    bl fn_80084F84
    stw r3, 0x90(r31)
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805A6D14(void)
{
    nofralloc
    lfs f1, lbl_808882E0
    lfs f0, 0x78(r3)
    fdivs f1, f1, f0
    blr
}

asm void fn_805A6D24(void)
{
    nofralloc
    stwu r1, -0x100(r1)
    mflr r0
    lfs f2, 0x8(r3)
    stw r0, 0x104(r1)
    fabs f3, f2
    lfs f0, lbl_808882E8
    stfd f31, 0xf0(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f31, 0xf8(r1), 0, 0
    frsp f3, f3
    stfd f30, 0xe0(r1)
    fcmpo cr0, f3, f0
    psq_st f30, 0xe8(r1), 0, 0
    stw r31, 0xdc(r1)
    addi r31, r1, 0x50
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x58(r1)
    bge lbl_fn_805A6D24_0000098C
    lfs f3, 0x50(r1)
    lfs f0, lbl_808882F4
    fcmpo cr0, f3, f0
    ble lbl_fn_805A6D24_00000980
    lfs f0, lbl_808882EC
    b lbl_fn_805A6D24_00000984
lbl_fn_805A6D24_00000980:
    lfs f0, lbl_808882F0
lbl_fn_805A6D24_00000984:
    stfs f0, 0x48(r1)
    b lbl_fn_805A6D24_000009A0
lbl_fn_805A6D24_0000098C:
    frsp f2, f2
    lfs f1, 0x50(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_805A6D24_000009A0:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x60
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808882F4
    addi r4, r1, 0x38
    lfs f30, 0x68(r1)
    mr r5, r4
    lfs f31, 0x64(r1)
    addi r3, r1, 0x90
    lfs f13, 0x60(r1)
    lfs f12, 0x78(r1)
    lfs f11, 0x74(r1)
    lfs f10, 0x70(r1)
    lfs f9, 0x88(r1)
    lfs f8, 0x84(r1)
    lfs f7, 0x80(r1)
    lfs f6, 0x8c(r1)
    lfs f5, 0x7c(r1)
    lfs f4, 0x6c(r1)
    lfs f0, lbl_808882F8
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x58(r1)
    stfs f3, 0xc0(r1)
    stfs f3, 0xc4(r1)
    stfs f3, 0xc8(r1)
    stfs f0, 0xcc(r1)
    stfs f13, 0x8(r1)
    stfs f31, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f13, 0x90(r1)
    stfs f31, 0x94(r1)
    stfs f30, 0x98(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xa0(r1)
    stfs f11, 0xa4(r1)
    stfs f12, 0xa8(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0xb0(r1)
    stfs f8, 0xb4(r1)
    stfs f9, 0xb8(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0x9c(r1)
    stfs f5, 0xac(r1)
    stfs f6, 0xbc(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_808882E8
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_805A6D24_00000ABC
    lfs f3, 0x3c(r1)
    lfs f0, lbl_808882F4
    fcmpo cr0, f3, f0
    ble lbl_fn_805A6D24_00000AAC
    lfs f0, lbl_808882EC
    b lbl_fn_805A6D24_00000AB0
lbl_fn_805A6D24_00000AAC:
    lfs f0, lbl_808882F0
lbl_fn_805A6D24_00000AB0:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_805A6D24_00000AD0
lbl_fn_805A6D24_00000ABC:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_805A6D24_00000AD0:
    lfs f0, lbl_808882F4
    addi r3, r1, 0x44
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_80763848@ha
    psq_st f1, 0x0(r31), 0, 0
    fmr f2, f0
    stfs f2, 0x58(r1)
    lfs f1, 0x54(r1)
    lfd f2, lbl_80763848@l(r3)
    stfs f0, 0x4c(r1)
    bl fn_8068AEA8
    frsp f0, f1
    lfs f3, lbl_808882FC
    fcmpo cr0, f0, f3
    ble lbl_fn_805A6D24_00000B14
    lfs f3, lbl_80888300
    fsubs f0, f0, f3
lbl_fn_805A6D24_00000B14:
    lfs f3, lbl_80888304
    fcmpo cr0, f0, f3
    bge lbl_fn_805A6D24_00000B28
    lfs f3, lbl_80888300
    fadds f0, f0, f3
lbl_fn_805A6D24_00000B28:
    lfs f3, lbl_80888308
    li r3, 0x8
    lfs f4, lbl_8088830C
    fneg f5, f3
    fmuls f4, f4, f5
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_805A6D24_00000B60
    lfs f4, lbl_80888310
    fmuls f4, f4, f5
    fcmpo cr0, f0, f4
    bge lbl_fn_805A6D24_00000B60
    li r3, 0x4
    b lbl_fn_805A6D24_00000CB0
lbl_fn_805A6D24_00000B60:
    fneg f5, f3
    lfs f4, lbl_80888310
    fmuls f4, f4, f5
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_805A6D24_00000B90
    lfs f4, lbl_80888314
    fmuls f4, f4, f5
    fcmpo cr0, f0, f4
    bge lbl_fn_805A6D24_00000B90
    li r3, 0x3
    b lbl_fn_805A6D24_00000CB0
lbl_fn_805A6D24_00000B90:
    fneg f5, f3
    lfs f4, lbl_80888314
    fmuls f4, f4, f5
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_805A6D24_00000BC0
    lfs f4, lbl_80888318
    fmuls f4, f4, f5
    fcmpo cr0, f0, f4
    bge lbl_fn_805A6D24_00000BC0
    li r3, 0x2
    b lbl_fn_805A6D24_00000CB0
lbl_fn_805A6D24_00000BC0:
    fneg f5, f3
    lfs f4, lbl_80888318
    fmuls f4, f4, f5
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_805A6D24_00000BE8
    fcmpo cr0, f0, f5
    bge lbl_fn_805A6D24_00000BE8
    li r3, 0x1
    b lbl_fn_805A6D24_00000CB0
lbl_fn_805A6D24_00000BE8:
    fneg f4, f3
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_805A6D24_00000C08
    fcmpo cr0, f0, f3
    bge lbl_fn_805A6D24_00000C08
    li r3, 0x0
    b lbl_fn_805A6D24_00000CB0
lbl_fn_805A6D24_00000C08:
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_805A6D24_00000C2C
    lfs f4, lbl_80888318
    fmuls f4, f4, f3
    fcmpo cr0, f0, f4
    bge lbl_fn_805A6D24_00000C2C
    li r3, 0x7
    b lbl_fn_805A6D24_00000CB0
lbl_fn_805A6D24_00000C2C:
    lfs f4, lbl_80888318
    fmuls f4, f4, f3
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_805A6D24_00000C58
    lfs f4, lbl_80888314
    fmuls f4, f4, f3
    fcmpo cr0, f0, f4
    bge lbl_fn_805A6D24_00000C58
    li r3, 0x6
    b lbl_fn_805A6D24_00000CB0
lbl_fn_805A6D24_00000C58:
    lfs f4, lbl_80888314
    fmuls f4, f4, f3
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_805A6D24_00000C84
    lfs f4, lbl_80888310
    fmuls f4, f4, f3
    fcmpo cr0, f0, f4
    bge lbl_fn_805A6D24_00000C84
    li r3, 0x5
    b lbl_fn_805A6D24_00000CB0
lbl_fn_805A6D24_00000C84:
    lfs f4, lbl_80888310
    fmuls f4, f4, f3
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_805A6D24_00000CB0
    lfs f4, lbl_8088830C
    fmuls f3, f4, f3
    fcmpo cr0, f0, f3
    cror eq, lt, eq
    bne lbl_fn_805A6D24_00000CB0
    li r3, 0x4
lbl_fn_805A6D24_00000CB0:
    lwz r0, 0x104(r1)
    psq_l f31, 0xf8(r1), 0, 0
    lfd f31, 0xf0(r1)
    psq_l f30, 0xe8(r1), 0, 0
    lfd f30, 0xe0(r1)
    lwz r31, 0xdc(r1)
    mtlr r0
    addi r1, r1, 0x100
    blr
}

asm void fn_805A70D8(void)
{
    nofralloc
    lis r6, lbl_807638F0@ha
    slwi r0, r4, 2
    addi r6, r6, lbl_807638F0@l
    li r5, 0x0
    lwzx r4, r6, r0
    li r6, -0x1
    b fn_800C31F4
}

asm void fn_805A70F4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, lbl_8087F9F8
    cmpwi r0, 0x0
    bne lbl_fn_805A70F4_00000D40
    lis r5, lbl_807639F8@ha
    li r3, 0x16c8
    addi r5, r5, lbl_807639F8@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_805A70F4_00000D3C
    mr r4, r31
    bl fn_805A715C
lbl_fn_805A70F4_00000D3C:
    stw r3, lbl_8087F9F8
lbl_fn_805A70F4_00000D40:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    lwz r3, lbl_8087F9F8
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805A715C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lis r31, lbl_80763848@ha
    mr r30, r3
    addi r31, r31, lbl_80763848@l
    bl fn_800D1D3C
    lis r3, lbl_807976EC@ha
    lis r4, lbl_80775B18@ha
    li r29, 0x0
    li r28, 0x2
    addi r3, r3, lbl_807976EC@l
    addi r4, r4, lbl_80775B18@l
    addi r27, r30, 0x54
    stw r3, 0x0(r30)
    addi r3, r27, 0x18
    stw r28, 0x48(r30)
    stw r29, 0x4c(r30)
    stw r29, 0x50(r30)
    stw r4, 0x6c(r30)
    bl fn_8003E918
    mr r3, r27
    bl fn_805AE18C
    lis r4, fn_805A7580@ha
    lis r5, fn_805A75C4@ha
    stw r29, 0xec(r30)
    addi r3, r30, 0xf0
    addi r4, r4, fn_805A7580@l
    addi r5, r5, fn_805A75C4@l
    li r6, 0x98
    li r7, 0x10
    bl fn_806958E0
    li r0, 0x6
    stw r29, 0xa70(r30)
    addi r27, r30, 0xa8c
    addi r26, r30, 0x158c
    stw r29, 0xa74(r30)
    stw r0, 0xa78(r30)
    stw r29, 0xa7c(r30)
    stw r29, 0xa80(r30)
    stw r29, 0xa84(r30)
    stw r29, 0xa88(r30)
lbl_fn_805A715C_00000E08:
    stw r28, 0x0(r27)
    mr r3, r27
    li r4, 0x0
    li r5, 0x2c
    stw r29, 0x4(r27)
    stw r29, 0x8(r27)
    bl memset
    addi r27, r27, 0x2c
    cmplw r27, r26
    blt lbl_fn_805A715C_00000E08
    li r29, 0x0
    stw r29, 0x158c(r30)
    addi r3, r30, 0x15b0
    li r4, 0x0
    stw r29, 0x1590(r30)
    li r5, 0x24
    stw r29, 0x1594(r30)
    stw r29, 0x1598(r30)
    stw r29, 0x15a8(r30)
    stw r29, 0x15ac(r30)
    bl memset
    addi r5, r30, 0x160c
    addi r7, r30, 0x16c0
    lfs f1, lbl_808882F4
    cmplw r5, r7
    lfs f0, lbl_8088831C
    li r0, 0x2
    stb r29, 0x15d4(r30)
    stw r29, 0x15d8(r30)
    stfs f1, 0x15dc(r30)
    stfs f1, 0x15e0(r30)
    stfs f1, 0x15e4(r30)
    stfs f0, 0x15e8(r30)
    stb r29, 0x15ec(r30)
    stb r29, 0x15ed(r30)
    stw r0, 0x15f0(r30)
    stw r29, 0x15f4(r30)
    stw r29, 0x15f8(r30)
    stw r29, 0x15fc(r30)
    stw r29, 0x1600(r30)
    stw r29, 0x1604(r30)
    stw r29, 0x1608(r30)
    bge lbl_fn_805A715C_00000FA0
    addi r0, r30, 0x160c
    subi r6, r7, 0x60
    cmplw r0, r7
    li r3, 0x0
    li r0, 0x0
    bgt lbl_fn_805A715C_00000ED0
    li r3, 0x1
lbl_fn_805A715C_00000ED0:
    cmpwi r3, 0x0
    beq lbl_fn_805A715C_00000EDC
    li r0, 0x1
lbl_fn_805A715C_00000EDC:
    cmpwi r0, 0x0
    beq lbl_fn_805A715C_00000F6C
    addi r3, r6, 0x5f
    li r0, 0x60
    subf r3, r5, r3
    li r4, 0x0
    divwu r3, r3, r0
    mtctr r3
    cmplw r5, r6
    bge lbl_fn_805A715C_00000F6C
lbl_fn_805A715C_00000F04:
    stw r4, 0x0(r5)
    stw r4, 0x4(r5)
    stw r4, 0x8(r5)
    stw r4, 0xc(r5)
    stw r4, 0x10(r5)
    stw r4, 0x14(r5)
    stw r4, 0x18(r5)
    stw r4, 0x1c(r5)
    stw r4, 0x20(r5)
    stw r4, 0x24(r5)
    stw r4, 0x28(r5)
    stw r4, 0x2c(r5)
    stw r4, 0x30(r5)
    stw r4, 0x34(r5)
    stw r4, 0x38(r5)
    stw r4, 0x3c(r5)
    stw r4, 0x40(r5)
    stw r4, 0x44(r5)
    stw r4, 0x48(r5)
    stw r4, 0x4c(r5)
    stw r4, 0x50(r5)
    stw r4, 0x54(r5)
    stw r4, 0x58(r5)
    stw r4, 0x5c(r5)
    addi r5, r5, 0x60
    bdnz lbl_fn_805A715C_00000F04
lbl_fn_805A715C_00000F6C:
    addi r3, r7, 0xb
    li r0, 0xc
    subf r3, r5, r3
    li r4, 0x0
    divwu r3, r3, r0
    mtctr r3
    cmplw r5, r7
    bge lbl_fn_805A715C_00000FA0
lbl_fn_805A715C_00000F8C:
    stw r4, 0x0(r5)
    stw r4, 0x4(r5)
    stw r4, 0x8(r5)
    addi r5, r5, 0xc
    bdnz lbl_fn_805A715C_00000F8C
lbl_fn_805A715C_00000FA0:
    addi r3, r30, 0x16c0
    bl fn_800CB360
    lis r29, lbl_807639F8@ha
    mr r3, r30
    addi r29, r29, lbl_807639F8@l
    li r5, 0x0
    addi r4, r29, 0x1
    bl fn_801F3FF8
    stw r3, 0x15b0(r30)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r30
    addi r4, r29, 0x25
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x15b8(r30)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r30
    addi r4, r29, 0x4b
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x15b4(r30)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r30
    addi r4, r29, 0x6d
    bl fn_801F64D0
    stw r3, 0x15bc(r30)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r30
    addi r4, r29, 0x8d
    bl fn_801F64D0
    stw r3, 0x15c8(r30)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r30
    addi r4, r29, 0xad
    bl fn_801F64D0
    stw r3, 0x15c0(r30)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r30
    addi r4, r29, 0xcd
    bl fn_801F64D0
    stw r3, 0x15c4(r30)
    li r4, 0x1
    bl fn_800D246C
    lis r6, lbl_807C95B0@ha
    li r0, 0x6
    addi r5, r31, 0xd0
    addi r7, r31, 0x118
    addi r6, r6, lbl_807C95B0@l
    addi r8, r31, 0xe8
    addi r9, r31, 0x130
    addi r10, r31, 0x100
    lwz r11, lbl_8087F1E4
    li r4, 0x0
    mtctr r0
lbl_fn_805A715C_00001090:
    lwz r0, 0x0(r5)
    lwz r3, 0x0(r7)
    stw r0, 0x4(r6)
    cmpwi r3, 0x0
    stw r4, 0x64(r6)
    bge lbl_fn_805A715C_000010D0
    lwz r0, 0x0(r8)
    slwi r0, r0, 3
    add r3, r11, r0
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805A715C_000010C4
    b lbl_fn_805A715C_000010C8
lbl_fn_805A715C_000010C4:
    la r0, lbl_808813D0
lbl_fn_805A715C_000010C8:
    stw r0, 0x8(r6)
    b lbl_fn_805A715C_000010F0
lbl_fn_805A715C_000010D0:
    slwi r0, r3, 3
    add r3, r11, r0
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805A715C_000010E8
    b lbl_fn_805A715C_000010EC
lbl_fn_805A715C_000010E8:
    la r0, lbl_808813D0
lbl_fn_805A715C_000010EC:
    stw r0, 0x8(r6)
lbl_fn_805A715C_000010F0:
    lwz r0, 0x0(r9)
    cmpwi r0, 0x0
    bge lbl_fn_805A715C_00001124
    lwz r0, 0x0(r10)
    slwi r0, r0, 3
    add r3, r11, r0
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805A715C_00001118
    b lbl_fn_805A715C_0000111C
lbl_fn_805A715C_00001118:
    la r0, lbl_808813D0
lbl_fn_805A715C_0000111C:
    stw r0, 0xc(r6)
    b lbl_fn_805A715C_00001144
lbl_fn_805A715C_00001124:
    slwi r0, r0, 3
    add r3, r11, r0
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805A715C_0000113C
    b lbl_fn_805A715C_00001140
lbl_fn_805A715C_0000113C:
    la r0, lbl_808813D0
lbl_fn_805A715C_00001140:
    stw r0, 0xc(r6)
lbl_fn_805A715C_00001144:
    addi r5, r5, 0x4
    addi r6, r6, 0xd0
    addi r7, r7, 0x4
    addi r8, r8, 0x4
    addi r9, r9, 0x4
    addi r10, r10, 0x4
    bdnz lbl_fn_805A715C_00001090
    addi r11, r1, 0x20
    mr r3, r30
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805A7580(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_80775B18@ha
    stw r0, 0x14(r1)
    addi r4, r4, lbl_80775B18@l
    stw r31, 0xc(r1)
    mr r31, r3
    stwu r4, 0x18(r3)
    bl fn_8003E918
    mr r3, r31
    bl fn_805AE18C
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805A75C4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_805A75C4_000011E8
    cmpwi r4, 0x0
    ble lbl_fn_805A75C4_000011E8
    bl dtor_80084684
lbl_fn_805A75C4_000011E8:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805A7604(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x2
    li r5, 0x2c
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r31, 0xc(r1)
    mr r31, r3
    stw r4, 0x0(r3)
    li r4, 0x0
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    bl memset
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805A7650(void)
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
    beq lbl_fn_805A7650_000012C4
    li r0, 0x0
    stw r0, lbl_8087F9F8
    li r4, -0x1
    addi r3, r3, 0x16c0
    bl fn_800CB3A0
    addic. r3, r30, 0xec
    beq lbl_fn_805A7650_000012A8
    beq lbl_fn_805A7650_000012A8
    lis r4, fn_805A75C4@ha
    addi r3, r3, 0x4
    addi r4, r4, fn_805A75C4@l
    li r5, 0x98
    li r6, 0x10
    bl fn_806959D8
lbl_fn_805A7650_000012A8:
    mr r3, r30
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r31, 0x0
    ble lbl_fn_805A7650_000012C4
    mr r3, r30
    bl dtor_80084684
lbl_fn_805A7650_000012C4:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805A76E4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    bl fn_800D3FA4
    cmpwi r3, 0x0
    beq lbl_fn_805A76E4_000013F4
    lwz r3, 0x15b0(r31)
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x15b0(r31)
    li r4, 0x0
    lfs f0, lbl_808882F4
    lwz r0, 0xfc(r3)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r3)
    lwz r3, 0x15b0(r31)
    stfs f0, 0x104(r3)
    lwz r3, 0x15b0(r31)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x15b8(r31)
    bl fn_800D246C
    lwz r3, 0x15b8(r31)
    li r4, 0x0
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x15b4(r31)
    bl fn_800D246C
    lwz r3, 0x15b4(r31)
    li r29, 0x0
    lfs f0, lbl_808882F8
    li r30, 0x0
    lwz r0, 0xfc(r3)
    lfs f31, lbl_808882F4
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r3)
    lwz r3, 0x15b4(r31)
    stfs f0, 0x104(r3)
    lwz r3, 0x15b4(r31)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_805A76E4_000013A8:
    lwz r3, 0x15bc(r31)
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x15bc(r31)
    addi r29, r29, 0x1
    cmpwi r29, 0x4
    stfs f31, 0x50(r3)
    lwz r3, 0x15bc(r31)
    stb r30, 0x4d(r3)
    lwz r3, 0x15bc(r31)
    stfs f31, 0x54(r3)
    lwz r3, 0x15bc(r31)
    addi r31, r31, 0x4
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    blt lbl_fn_805A76E4_000013A8
    li r3, 0x1
    b lbl_fn_805A76E4_000013F8
lbl_fn_805A76E4_000013F4:
    li r3, 0x0
lbl_fn_805A76E4_000013F8:
    lwz r0, 0x34(r1)
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_805A7820(void)
{
    nofralloc
    stwu r1, -0x850(r1)
    mflr r0
    stw r0, 0x854(r1)
    li r0, 0x848
    addi r11, r1, 0x820
    stfd f31, 0x840(r1)
    psq_stx f31, r1, r0, 0, 0
    li r0, 0x838
    stfd f30, 0x830(r1)
    psq_stx f30, r1, r0, 0, 0
    li r0, 0x828
    stfd f29, 0x820(r1)
    psq_stx f29, r1, r0, 0, 0
    bl _savegpr_24
    lwz r4, 0x15b0(r3)
    addi r30, r3, 0x15c0
    addi r29, r3, 0x15c4
    addi r28, r3, 0x15c8
    lwz r0, 0x38(r4)
    mr r24, r3
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x15b8(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x15b4(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x15bc(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x15c0(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x15c4(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x15c8(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r0, 0xa70(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805A7820_00003284
    lwz r4, lbl_8087F430
    cmpwi r4, 0x0
    beq lbl_fn_805A7820_000014F8
    lwz r0, 0x54e4(r4)
    cmpwi r0, 0xd
    beq lbl_fn_805A7820_00003284
lbl_fn_805A7820_000014F8:
    lwz r0, 0xa7c(r3)
    cmpwi r0, 0x0
    ble lbl_fn_805A7820_000015DC
    lwz r4, 0xa7c(r3)
    subic. r0, r4, 0x1
    stw r0, 0xa7c(r3)
    bgt lbl_fn_805A7820_00003284
    lwz r0, 0xa70(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805A7820_00003284
    lwz r0, 0xa78(r3)
    li r4, 0x0
    stw r4, 0xa70(r3)
    cmpwi r0, 0x6
    beq lbl_fn_805A7820_00001540
    mr r3, r24
    li r4, 0x6
    bl fn_805AB82C
lbl_fn_805A7820_00001540:
    li r0, 0x6
    stw r0, 0xa78(r24)
    addi r3, r24, 0x16c0
    li r4, 0xf
    li r5, 0x0
    bl fn_800CB5C8
    lfs f3, lbl_808882F4
    li r25, 0x0
    li r0, 0x2
    lfs f0, lbl_8088831C
    stw r0, 0x48(r24)
    addi r3, r24, 0x16c0
    li r4, 0xf
    li r5, 0x0
    stw r25, 0x4c(r24)
    stw r25, 0x50(r24)
    stw r25, 0x15d8(r24)
    stfs f3, 0x15dc(r24)
    stfs f3, 0x15e0(r24)
    stfs f3, 0x15e4(r24)
    stfs f0, 0x15e8(r24)
    stb r25, 0x15ec(r24)
    stb r25, 0x15ed(r24)
    stw r0, 0x15f0(r24)
    stw r25, 0x15f4(r24)
    stw r25, 0x15f8(r24)
    bl fn_800CB5C8
    stw r25, 0x15cc(r24)
    lwz r3, 0x15bc(r24)
    stw r25, 0x15d0(r24)
    lfs f0, lbl_808882F4
    stfs f0, 0x50(r3)
    lwz r3, 0x0(r30)
    stfs f0, 0x50(r3)
    lwz r3, 0x0(r29)
    stfs f0, 0x50(r3)
    lwz r3, 0x0(r28)
    stfs f0, 0x50(r3)
    b lbl_fn_805A7820_00003284
lbl_fn_805A7820_000015DC:
    lwz r0, 0xa84(r3)
    lwz r4, lbl_8087F430
    cmpwi r0, 0x0
    addi r31, r4, 0x6c
    ble lbl_fn_805A7820_0000186C
    mr r3, r24
    bl fn_805AC75C
    lwz r3, 0xa84(r24)
    subic. r0, r3, 0x1
    stw r0, 0xa84(r24)
    bgt lbl_fn_805A7820_00003284
    lwz r0, 0x15d8(r24)
    cmpwi r0, 0x1
    bne lbl_fn_805A7820_0000167C
    lwz r4, 0x4c(r24)
    li r3, 0x1
    lwz r0, 0x15ac(r24)
    stw r3, 0x15a8(r24)
    cmplw r0, r4
    beq lbl_fn_805A7820_00001648
    stw r4, 0x15ac(r24)
    addi r4, r31, 0x8a4
    addi r3, r24, 0x159c
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8ac(r31)
    stfs f2, 0x15a4(r24)
    psq_st f1, 0x0(r3), 0, 0
lbl_fn_805A7820_00001648:
    lwz r0, 0xa78(r24)
    cmpwi r0, 0x4
    beq lbl_fn_805A7820_00001660
    mr r3, r24
    li r4, 0x4
    bl fn_805AB82C
lbl_fn_805A7820_00001660:
    li r0, 0x4
    stw r0, 0xa78(r24)
    addi r3, r24, 0x16c0
    li r4, 0xf
    li r5, 0x0
    bl fn_800CB5C8
    b lbl_fn_805A7820_00003284
lbl_fn_805A7820_0000167C:
    cmpwi r0, 0x2
    bne lbl_fn_805A7820_00001798
    lwz r0, 0x48(r24)
    cmpwi r0, 0x0
    bne lbl_fn_805A7820_0000169C
    lwz r3, 0x4c(r24)
    lwz r25, 0xd1c(r3)
    b lbl_fn_805A7820_000016A0
lbl_fn_805A7820_0000169C:
    li r25, 0x0
lbl_fn_805A7820_000016A0:
    lwz r0, 0xa78(r24)
    cmpwi r0, 0x1
    beq lbl_fn_805A7820_000016B8
    mr r3, r24
    li r4, 0x1
    bl fn_805AB82C
lbl_fn_805A7820_000016B8:
    li r0, 0x1
    stw r0, 0xa78(r24)
    addi r3, r24, 0x16c0
    li r4, 0xf
    li r5, 0x0
    bl fn_800CB5C8
    cmpwi r25, 0x0
    beq lbl_fn_805A7820_0000173C
    lwz r5, 0xa88(r24)
    li r0, 0x0
    li r3, 0x2
    stw r3, 0x48(r24)
    addi r4, r24, 0xa8c
    stw r0, 0x4c(r24)
    stw r0, 0x50(r24)
    mtctr r5
    cmplwi r5, 0x0
    ble lbl_fn_805A7820_00001778
lbl_fn_805A7820_00001700:
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    bne lbl_fn_805A7820_00001730
    lwz r0, 0x4(r4)
    cmplw r0, r25
    bne lbl_fn_805A7820_00001730
    stw r3, 0x48(r24)
    lwz r0, 0x4(r4)
    stw r0, 0x4c(r24)
    lwz r0, 0x8(r4)
    stw r0, 0x50(r24)
    b lbl_fn_805A7820_00001778
lbl_fn_805A7820_00001730:
    addi r4, r4, 0x2c
    bdnz lbl_fn_805A7820_00001700
    b lbl_fn_805A7820_00001778
lbl_fn_805A7820_0000173C:
    lwz r0, 0xa88(r24)
    cmpwi r0, 0x0
    ble lbl_fn_805A7820_00001764
    lwz r4, 0xa8c(r24)
    lwz r3, 0xa90(r24)
    lwz r0, 0xa94(r24)
    stw r4, 0x48(r24)
    stw r3, 0x4c(r24)
    stw r0, 0x50(r24)
    b lbl_fn_805A7820_00001778
lbl_fn_805A7820_00001764:
    li r0, 0x0
    li r3, 0x2
    stw r3, 0x48(r24)
    stw r0, 0x4c(r24)
    stw r0, 0x50(r24)
lbl_fn_805A7820_00001778:
    lfs f1, lbl_808882F8
    addi r3, r1, 0x34
    li r4, 0x8
    bl fn_805A70D8
    addi r3, r1, 0x34
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_805A7820_00003284
lbl_fn_805A7820_00001798:
    lwz r0, 0xa78(r24)
    lwz r3, 0x158c(r24)
    cmpwi r0, 0x0
    addi r0, r3, 0x1
    stw r0, 0x158c(r24)
    beq lbl_fn_805A7820_000017BC
    mr r3, r24
    li r4, 0x0
    bl fn_805AB82C
lbl_fn_805A7820_000017BC:
    li r0, 0x0
    stw r0, 0xa78(r24)
    addi r3, r24, 0x16c0
    li r4, 0xf
    li r5, 0x0
    bl fn_800CB5C8
    lwz r3, 0xa88(r24)
    lwz r0, 0x158c(r24)
    cmpw cr1, r0, r3
    bge cr1, lbl_fn_805A7820_0000182C
    cmpwi r0, 0x0
    blt lbl_fn_805A7820_00001814
    bge cr1, lbl_fn_805A7820_00001814
    mulli r0, r0, 0x2c
    add r3, r24, r0
    lwz r0, 0xa8c(r3)
    stw r0, 0x48(r24)
    lwz r0, 0xa90(r3)
    stw r0, 0x4c(r24)
    lwz r0, 0xa94(r3)
    stw r0, 0x50(r24)
    b lbl_fn_805A7820_0000185C
lbl_fn_805A7820_00001814:
    li r0, 0x0
    li r3, 0x2
    stw r3, 0x48(r24)
    stw r0, 0x4c(r24)
    stw r0, 0x50(r24)
    b lbl_fn_805A7820_0000185C
lbl_fn_805A7820_0000182C:
    lwz r0, 0xa78(r24)
    cmpwi r0, 0x5
    beq lbl_fn_805A7820_00001844
    mr r3, r24
    li r4, 0x5
    bl fn_805AB82C
lbl_fn_805A7820_00001844:
    li r0, 0x5
    stw r0, 0xa78(r24)
    addi r3, r24, 0x16c0
    li r4, 0xf
    li r5, 0x0
    bl fn_800CB5C8
lbl_fn_805A7820_0000185C:
    li r0, 0x0
    stw r0, 0x15cc(r24)
    stw r0, 0x15d0(r24)
    b lbl_fn_805A7820_00003284
lbl_fn_805A7820_0000186C:
    lwz r5, lbl_8087F490
    li r0, 0x0
    li r4, -0x1
    stw r4, 0xdc(r1)
    cmpwi r5, 0x0
    stw r4, 0xe0(r1)
    stw r4, 0xe4(r1)
    stw r0, 0xe8(r1)
    stw r0, 0xec(r1)
    stw r0, 0xf0(r1)
    stw r0, 0xf4(r1)
    beq lbl_fn_805A7820_000018B8
    stw r4, 0x764(r5)
    stw r4, 0x768(r5)
    stw r4, 0x76c(r5)
    stw r0, 0x770(r5)
    stw r0, 0x774(r5)
    stw r0, 0x778(r5)
    stw r0, 0x77c(r5)
lbl_fn_805A7820_000018B8:
    lwz r0, 0xa78(r3)
    cmpwi r0, 0x0
    bne lbl_fn_805A7820_000020EC
    mr r3, r31
    bl fn_80390A88
    lfs f3, 0x688(r31)
    lfs f0, lbl_80888320
    lwz r0, 0x4b4(r31)
    fmuls f4, f3, f0
    lfs f0, 0x684(r31)
    lfs f29, 0x68c(r31)
    cmpwi r0, 0x1
    lfs f31, 0x690(r31)
    lfs f30, 0x694(r31)
    lfs f13, 0x698(r31)
    lfs f12, 0x69c(r31)
    lfs f11, 0x6a0(r31)
    lfs f10, 0x6a4(r31)
    lfs f9, 0x6a8(r31)
    lfs f8, 0x6ac(r31)
    lfs f7, 0x6b0(r31)
    lfs f6, 0x6b4(r31)
    lfs f5, 0x6b8(r31)
    lwz r3, 0x6bc(r31)
    stfs f0, 0x7c4(r1)
    stfs f29, 0x7cc(r1)
    stfs f31, 0x7d0(r1)
    stfs f30, 0x7d4(r1)
    stfs f13, 0x7d8(r1)
    stfs f12, 0x7dc(r1)
    stfs f11, 0x7e0(r1)
    stfs f10, 0x7e4(r1)
    stfs f9, 0x7e8(r1)
    stfs f8, 0x7ec(r1)
    stfs f7, 0x7f0(r1)
    stfs f6, 0x7f4(r1)
    stfs f5, 0x7f8(r1)
    stw r3, 0x7fc(r1)
    stfs f4, 0x7c8(r1)
    beq lbl_fn_805A7820_000019B4
    cmpwi r0, 0x4
    beq lbl_fn_805A7820_000019B4
    li r0, 0x1
    stw r0, 0x4b4(r31)
    lfs f3, lbl_808882F4
    stfs f0, 0x4c0(r31)
    lfs f0, lbl_808882F8
    stfs f4, 0x4c4(r31)
    stfs f29, 0x4c8(r31)
    stfs f31, 0x4cc(r31)
    stfs f30, 0x4d0(r31)
    stfs f13, 0x4d4(r31)
    stfs f12, 0x4d8(r31)
    stfs f11, 0x4dc(r31)
    stfs f10, 0x4e0(r31)
    stfs f9, 0x4e4(r31)
    stfs f8, 0x4e8(r31)
    stfs f7, 0x4ec(r31)
    stfs f6, 0x4f0(r31)
    stfs f5, 0x4f4(r31)
    stw r3, 0x4f8(r31)
    stfs f3, 0x4bc(r31)
    stfs f0, 0x4b8(r31)
lbl_fn_805A7820_000019B4:
    mr r3, r31
    bl fn_8037F744
    mr r3, r24
    bl fn_805ABE78
    mr r3, r24
    bl fn_805AC75C
    lwz r0, 0x48(r24)
    cmpwi r0, 0x0
    bne lbl_fn_805A7820_00003174
    lwz r0, 0xa74(r24)
    li r27, 0x0
    lwz r31, 0x4c(r24)
    li r26, 0x0
    cmpwi r0, 0x0
    li r25, -0x1
    bne lbl_fn_805A7820_00001A6C
    lwz r3, lbl_8087EF70
    cmpwi r3, 0x0
    bne lbl_fn_805A7820_00001A08
    li r3, 0x0
    b lbl_fn_805A7820_00001A14
lbl_fn_805A7820_00001A08:
    li r4, 0x0
    li r5, 0x0
    bl fn_800A555C
lbl_fn_805A7820_00001A14:
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    bne lbl_fn_805A7820_00001A50
    lwz r3, lbl_8087EF70
    cmpwi r3, 0x0
    bne lbl_fn_805A7820_00001A38
    li r3, 0x0
    b lbl_fn_805A7820_00001A44
lbl_fn_805A7820_00001A38:
    li r4, 0x0
    li r5, 0x1a
    bl fn_800A555C
lbl_fn_805A7820_00001A44:
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
lbl_fn_805A7820_00001A50:
    cmpwi r0, 0x0
    beq lbl_fn_805A7820_00001A6C
    lbz r0, 0xa4(r24)
    cmpwi r0, 0x0
    beq lbl_fn_805A7820_00001A6C
    li r25, 0x0
    b lbl_fn_805A7820_00001BF4
lbl_fn_805A7820_00001A6C:
    lwz r0, 0xa74(r24)
    cmpwi r0, 0x0
    bne lbl_fn_805A7820_00001AF0
    lwz r3, lbl_8087EF70
    cmpwi r3, 0x0
    bne lbl_fn_805A7820_00001A8C
    li r3, 0x0
    b lbl_fn_805A7820_00001A98
lbl_fn_805A7820_00001A8C:
    li r4, 0x0
    li r5, 0x2
    bl fn_800A555C
lbl_fn_805A7820_00001A98:
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    bne lbl_fn_805A7820_00001AD4
    lwz r3, lbl_8087EF70
    cmpwi r3, 0x0
    bne lbl_fn_805A7820_00001ABC
    li r3, 0x0
    b lbl_fn_805A7820_00001AC8
lbl_fn_805A7820_00001ABC:
    li r4, 0x0
    li r5, 0x17
    bl fn_800A555C
lbl_fn_805A7820_00001AC8:
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
lbl_fn_805A7820_00001AD4:
    cmpwi r0, 0x0
    beq lbl_fn_805A7820_00001AF0
    lbz r0, 0xa5(r24)
    cmpwi r0, 0x0
    beq lbl_fn_805A7820_00001AF0
    li r25, 0x1
    b lbl_fn_805A7820_00001BF4
lbl_fn_805A7820_00001AF0:
    lwz r0, 0xa74(r24)
    cmpwi r0, 0x0
    bne lbl_fn_805A7820_00001B74
    lwz r3, lbl_8087EF70
    cmpwi r3, 0x0
    bne lbl_fn_805A7820_00001B10
    li r3, 0x0
    b lbl_fn_805A7820_00001B1C
lbl_fn_805A7820_00001B10:
    li r4, 0x0
    li r5, 0x3
    bl fn_800A555C
lbl_fn_805A7820_00001B1C:
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    bne lbl_fn_805A7820_00001B58
    lwz r3, lbl_8087EF70
    cmpwi r3, 0x0
    bne lbl_fn_805A7820_00001B40
    li r3, 0x0
    b lbl_fn_805A7820_00001B4C
lbl_fn_805A7820_00001B40:
    li r4, 0x0
    li r5, 0x18
    bl fn_800A555C
lbl_fn_805A7820_00001B4C:
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
lbl_fn_805A7820_00001B58:
    cmpwi r0, 0x0
    beq lbl_fn_805A7820_00001B74
    lbz r0, 0xa6(r24)
    cmpwi r0, 0x0
    beq lbl_fn_805A7820_00001B74
    li r25, 0x2
    b lbl_fn_805A7820_00001BF4
lbl_fn_805A7820_00001B74:
    lwz r0, 0xa74(r24)
    cmpwi r0, 0x0
    bne lbl_fn_805A7820_00001BF4
    lwz r3, lbl_8087EF70
    cmpwi r3, 0x0
    bne lbl_fn_805A7820_00001B94
    li r3, 0x0
    b lbl_fn_805A7820_00001BA0
lbl_fn_805A7820_00001B94:
    li r4, 0x0
    li r5, 0x1
    bl fn_800A555C
lbl_fn_805A7820_00001BA0:
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    bne lbl_fn_805A7820_00001BDC
    lwz r3, lbl_8087EF70
    cmpwi r3, 0x0
    bne lbl_fn_805A7820_00001BC4
    li r3, 0x0
    b lbl_fn_805A7820_00001BD0
lbl_fn_805A7820_00001BC4:
    li r4, 0x0
    li r5, 0x19
    bl fn_800A555C
lbl_fn_805A7820_00001BD0:
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
lbl_fn_805A7820_00001BDC:
    cmpwi r0, 0x0
    beq lbl_fn_805A7820_00001BF4
    lbz r0, 0xa7(r24)
    cmpwi r0, 0x0
    beq lbl_fn_805A7820_00001BF4
    li r25, 0x3
lbl_fn_805A7820_00001BF4:
    cmpwi r25, 0x0
    blt lbl_fn_805A7820_00001C10
    mr r3, r24
    mr r4, r31
    mr r5, r25
    bl fn_805A96D8
    li r27, 0x1
lbl_fn_805A7820_00001C10:
    lwz r3, lbl_8087EF70
    cmpwi r3, 0x0
    bne lbl_fn_805A7820_00001C24
    li r3, 0x0
    b lbl_fn_805A7820_00001C30
lbl_fn_805A7820_00001C24:
    li r4, 0x0
    li r5, 0x4
    bl fn_800A555C
lbl_fn_805A7820_00001C30:
    cmpwi r3, 0x0
    beq lbl_fn_805A7820_00001C3C
    li r27, 0x1
lbl_fn_805A7820_00001C3C:
    lwz r3, lbl_8087EF70
    cmpwi r3, 0x0
    bne lbl_fn_805A7820_00001C50
    li r3, 0x0
    b lbl_fn_805A7820_00001C5C
lbl_fn_805A7820_00001C50:
    li r4, 0x0
    li r5, 0x5
    bl fn_800A555C
lbl_fn_805A7820_00001C5C:
    cmpwi r3, 0x0
    beq lbl_fn_805A7820_00001C68
    li r26, 0x1
lbl_fn_805A7820_00001C68:
    cmpwi r27, 0x0
    beq lbl_fn_805A7820_00001E44
    lwz r0, 0xec(r24)
    cmplwi r0, 0x10
    bge lbl_fn_805A7820_00001DC4
    lwz r0, 0xec(r24)
    addi r3, r24, 0xec
    mulli r0, r0, 0x98
    add r0, r3, r0
    addic. r4, r0, 0x4
    beq lbl_fn_805A7820_00001DB8
    lwz r0, 0x54(r24)
    lis r5, lbl_80775B18@ha
    stw r0, 0x0(r4)
    addi r5, r5, lbl_80775B18@l
    lwz r0, 0x58(r24)
    stw r0, 0x4(r4)
    lwz r0, 0x5c(r24)
    stw r0, 0x8(r4)
    lwz r0, 0x60(r24)
    stw r0, 0xc(r4)
    lwz r0, 0x64(r24)
    stw r0, 0x10(r4)
    lwz r0, 0x68(r24)
    stw r0, 0x14(r4)
    stw r5, 0x18(r4)
    lwz r0, 0x70(r24)
    stw r0, 0x1c(r4)
    lwz r0, 0x74(r24)
    stw r0, 0x20(r4)
    lwz r0, 0x78(r24)
    stw r0, 0x24(r4)
    lfs f2, 0x84(r24)
    psq_l f1, 0x7c(r24), 0, 0
    psq_st f1, 0x28(r4), 0, 0
    stfs f2, 0x30(r4)
    lfs f2, 0x90(r24)
    psq_l f1, 0x88(r24), 0, 0
    psq_st f1, 0x34(r4), 0, 0
    stfs f2, 0x3c(r4)
    lwz r0, 0x94(r24)
    stw r0, 0x40(r4)
    lwz r0, 0x98(r24)
    stw r0, 0x44(r4)
    lwz r0, 0x9c(r24)
    stw r0, 0x48(r4)
    lwz r0, 0xa0(r24)
    stw r0, 0x4c(r4)
    lwz r0, 0xa4(r24)
    stw r0, 0x50(r4)
    lwz r0, 0xac(r24)
    lwz r5, 0xa8(r24)
    stw r5, 0x54(r4)
    stw r0, 0x58(r4)
    lwz r0, 0xb4(r24)
    lwz r5, 0xb0(r24)
    stw r5, 0x5c(r4)
    stw r0, 0x60(r4)
    lwz r0, 0xbc(r24)
    lwz r5, 0xb8(r24)
    stw r5, 0x64(r4)
    stw r0, 0x68(r4)
    lwz r0, 0xc4(r24)
    lwz r5, 0xc0(r24)
    stw r5, 0x6c(r4)
    stw r0, 0x70(r4)
    lwz r0, 0xcc(r24)
    lwz r5, 0xc8(r24)
    stw r5, 0x74(r4)
    stw r0, 0x78(r4)
    lwz r0, 0xd4(r24)
    lwz r5, 0xd0(r24)
    stw r5, 0x7c(r4)
    stw r0, 0x80(r4)
    lwz r0, 0xdc(r24)
    lwz r5, 0xd8(r24)
    stw r5, 0x84(r4)
    stw r0, 0x88(r4)
    lwz r0, 0xe4(r24)
    lwz r5, 0xe0(r24)
    stw r5, 0x8c(r4)
    stw r0, 0x90(r4)
    lwz r0, 0xe8(r24)
    stw r0, 0x94(r4)
lbl_fn_805A7820_00001DB8:
    lwz r4, 0x0(r3)
    addi r0, r4, 0x1
    stw r0, 0x0(r3)
lbl_fn_805A7820_00001DC4:
    cmpwi r25, 0x0
    blt lbl_fn_805A7820_00001DDC
    slwi r0, r25, 2
    add r3, r24, r0
    lwz r3, 0x15bc(r3)
    b lbl_fn_805A7820_00001DE0
lbl_fn_805A7820_00001DDC:
    li r3, 0x0
lbl_fn_805A7820_00001DE0:
    cmpwi r3, 0x0
    li r0, 0x0
    stw r3, 0x15cc(r24)
    stw r0, 0x15d0(r24)
    beq lbl_fn_805A7820_00001E1C
    li r0, 0xf
    stw r0, 0xa84(r24)
    lfs f1, lbl_808882F8
    addi r3, r1, 0x30
    li r4, 0x1
    bl fn_805A70D8
    addi r3, r1, 0x30
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_805A7820_0000207C
lbl_fn_805A7820_00001E1C:
    li r0, 0x1
    stw r0, 0xa84(r24)
    lfs f1, lbl_808882F8
    addi r3, r1, 0x2c
    li r4, 0x4
    bl fn_805A70D8
    addi r3, r1, 0x2c
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_805A7820_0000207C
lbl_fn_805A7820_00001E44:
    cmpwi r26, 0x0
    beq lbl_fn_805A7820_0000207C
    lwz r3, 0x158c(r24)
    subic. r3, r3, 0x1
    stw r3, 0x158c(r24)
    blt lbl_fn_805A7820_00001F9C
    lwz r0, 0xa88(r24)
    cmpw r3, r0
    bge lbl_fn_805A7820_00001E8C
    mulli r0, r3, 0x2c
    add r3, r24, r0
    lwz r0, 0xa8c(r3)
    stw r0, 0x48(r24)
    lwz r0, 0xa90(r3)
    stw r0, 0x4c(r24)
    lwz r0, 0xa94(r3)
    stw r0, 0x50(r24)
    b lbl_fn_805A7820_00001EA0
lbl_fn_805A7820_00001E8C:
    li r0, 0x0
    li r3, 0x2
    stw r3, 0x48(r24)
    stw r0, 0x4c(r24)
    stw r0, 0x50(r24)
lbl_fn_805A7820_00001EA0:
    lwz r0, 0xec(r24)
    lwz r31, 0x4c(r24)
    cmpwi r0, 0x0
    beq lbl_fn_805A7820_00001F7C
    lwz r3, 0xec(r24)
    subi r0, r3, 0x1
    mulli r0, r0, 0x98
    add r3, r24, r0
    lwz r0, 0x13c(r3)
    cmpwi r0, 0x0
    blt lbl_fn_805A7820_00001F70
    lwz r3, lbl_8087EE68
    mr r4, r31
    li r5, 0x0
    bl fn_80018608
    li r0, 0x0
    sth r0, 0x1470(r31)
    mr r3, r24
    mr r4, r31
    bl fn_805ADF54
    lwz r3, 0xec(r24)
    subi r0, r3, 0x1
    mulli r0, r0, 0x98
    add r3, r24, r0
    lwz r5, 0xfc(r3)
    cmpwi r5, 0x0
    bne lbl_fn_805A7820_00001F18
    lwz r0, 0x100(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805A7820_00001F24
lbl_fn_805A7820_00001F18:
    lwz r4, 0x100(r3)
    mr r3, r31
    bl fn_80160170
lbl_fn_805A7820_00001F24:
    lwz r4, 0xec(r24)
    mr r3, r31
    subi r0, r4, 0x1
    mulli r0, r0, 0x98
    add r4, r24, r0
    lwz r4, 0x104(r4)
    bl fn_8017ABD4
    lwz r3, 0xec(r24)
    subi r0, r3, 0x1
    mulli r0, r0, 0x98
    add r4, r24, r0
    lwz r0, 0x110(r4)
    cmpwi r0, 0x4
    beq lbl_fn_805A7820_00001F68
    lwz r3, lbl_8087EE68
    addi r4, r4, 0x108
    bl fn_800184F4
lbl_fn_805A7820_00001F68:
    addi r3, r31, 0x7d4
    bl fn_8012D180
lbl_fn_805A7820_00001F70:
    lwz r3, 0xec(r24)
    subi r0, r3, 0x1
    stw r0, 0xec(r24)
lbl_fn_805A7820_00001F7C:
    mr r3, r24
    bl fn_805ABE78
    li r0, 0x0
    stw r0, 0x15cc(r24)
    mr r3, r24
    stw r0, 0x15d0(r24)
    bl fn_805AC75C
    b lbl_fn_805A7820_00002060
lbl_fn_805A7820_00001F9C:
    lwz r0, 0xa70(r24)
    cmpwi r0, 0x0
    beq lbl_fn_805A7820_00002060
    lwz r0, 0xa78(r24)
    li r3, 0x0
    stw r3, 0xa70(r24)
    cmpwi r0, 0x6
    beq lbl_fn_805A7820_00001FC8
    mr r3, r24
    li r4, 0x6
    bl fn_805AB82C
lbl_fn_805A7820_00001FC8:
    li r0, 0x6
    stw r0, 0xa78(r24)
    addi r3, r24, 0x16c0
    li r4, 0xf
    li r5, 0x0
    bl fn_800CB5C8
    lfs f3, lbl_808882F4
    li r25, 0x0
    li r0, 0x2
    lfs f0, lbl_8088831C
    stw r0, 0x48(r24)
    addi r3, r24, 0x16c0
    li r4, 0xf
    li r5, 0x0
    stw r25, 0x4c(r24)
    stw r25, 0x50(r24)
    stw r25, 0x15d8(r24)
    stfs f3, 0x15dc(r24)
    stfs f3, 0x15e0(r24)
    stfs f3, 0x15e4(r24)
    stfs f0, 0x15e8(r24)
    stb r25, 0x15ec(r24)
    stb r25, 0x15ed(r24)
    stw r0, 0x15f0(r24)
    stw r25, 0x15f4(r24)
    stw r25, 0x15f8(r24)
    bl fn_800CB5C8
    stw r25, 0x15cc(r24)
    lwz r3, 0x15bc(r24)
    stw r25, 0x15d0(r24)
    lfs f0, lbl_808882F4
    stfs f0, 0x50(r3)
    lwz r3, 0x0(r30)
    stfs f0, 0x50(r3)
    lwz r3, 0x0(r29)
    stfs f0, 0x50(r3)
    lwz r3, 0x0(r28)
    stfs f0, 0x50(r3)
lbl_fn_805A7820_00002060:
    lfs f1, lbl_808882F8
    addi r3, r1, 0x28
    li r4, 0x2
    bl fn_805A70D8
    addi r3, r1, 0x28
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_805A7820_0000207C:
    lwz r3, lbl_8087F490
    lfs f29, lbl_808882F4
    cmpwi r3, 0x0
    beq lbl_fn_805A7820_00002098
    bl fn_803E4A48
    lfs f0, lbl_80888324
    fmuls f29, f0, f1
lbl_fn_805A7820_00002098:
    fneg f0, f29
    lfs f3, lbl_808882F4
    stfs f3, 0x8c(r1)
    addi r5, r1, 0x8c
    lwz r3, lbl_8087F580
    li r4, 0xa
    stfs f0, 0x90(r1)
    li r6, 0x0
    stfs f3, 0x94(r1)
    bl fn_804A5E40
    fneg f0, f29
    lfs f3, lbl_808882F4
    stfs f3, 0x80(r1)
    addi r5, r1, 0x80
    lwz r3, lbl_8087F580
    li r4, 0xb
    stfs f0, 0x84(r1)
    li r6, 0x0
    stfs f3, 0x88(r1)
    bl fn_804A5E40
    b lbl_fn_805A7820_00003174
lbl_fn_805A7820_000020EC:
    cmpwi r0, 0x1
    bne lbl_fn_805A7820_000024D8
    mr r3, r31
    bl fn_80390A88
    lwz r0, 0x1598(r24)
    cmpwi r0, 0x0
    bne lbl_fn_805A7820_00002184
    lfs f4, 0x15a4(r24)
    lfs f0, 0x8ac(r31)
    lfs f3, 0x159c(r24)
    fsubs f5, f4, f0
    lfs f0, 0x8a4(r31)
    lfs f4, 0x15a0(r24)
    fsubs f6, f3, f0
    lfs f3, 0x8a8(r31)
    fmuls f0, f5, f5
    fsubs f3, f4, f3
    stfs f6, 0x74(r1)
    fmadds f1, f6, f6, f0
    stfs f3, 0x78(r1)
    stfs f5, 0x7c(r1)
    bl fn_8068B100
    frsp f3, f1
    lfs f0, lbl_80888328
    fcmpo cr0, f3, f0
    ble lbl_fn_805A7820_00002184
    lwz r0, 0x15d8(r24)
    li r3, 0x0
    cmpwi r0, 0x1
    bne lbl_fn_805A7820_00002174
    lwz r0, 0x15a8(r24)
    cmpwi r0, 0x0
    ble lbl_fn_805A7820_00002174
    li r3, 0x1
lbl_fn_805A7820_00002174:
    cmpwi r3, 0x0
    bne lbl_fn_805A7820_00002184
    li r0, 0x1
    stw r0, 0x1598(r24)
lbl_fn_805A7820_00002184:
    lfs f31, 0x684(r31)
    li r25, 0x0
    lfs f30, 0x688(r31)
    mr r3, r31
    lfs f13, 0x68c(r31)
    lfs f12, 0x690(r31)
    lfs f11, 0x694(r31)
    lfs f10, 0x698(r31)
    lfs f9, 0x69c(r31)
    lfs f8, 0x6a0(r31)
    lfs f7, 0x6a4(r31)
    lfs f6, 0x6a8(r31)
    lfs f5, 0x6ac(r31)
    lfs f4, 0x6b0(r31)
    lfs f3, 0x6b4(r31)
    lfs f0, 0x6b8(r31)
    stfs f31, 0x788(r1)
    stfs f30, 0x444(r1)
    stfs f13, 0x484(r1)
    stfs f12, 0x4c4(r1)
    stfs f11, 0x504(r1)
    stfs f10, 0x544(r1)
    stfs f9, 0x584(r1)
    stfs f8, 0x5c4(r1)
    stfs f7, 0x604(r1)
    stfs f6, 0x644(r1)
    stfs f5, 0x684(r1)
    stfs f4, 0x6c4(r1)
    stfs f3, 0x704(r1)
    stfs f0, 0x744(r1)
    stw r25, 0x4b4(r31)
    bl fn_8037F744
    lwz r3, lbl_8087F0A8
    li r4, 0x0
    addi r3, r3, 0x48c
    bl fn_801231D0
    cmpwi r3, 0x0
    beq lbl_fn_805A7820_00002334
    lwz r0, 0xa0(r24)
    li r7, 0x0
    lwz r3, lbl_8087EE68
    slwi r0, r0, 2
    lwz r4, 0x54(r24)
    add r6, r24, r0
    lwz r5, 0x4c(r24)
    lwz r6, 0xa8(r6)
    bl fn_800183E0
    lwz r0, 0xa78(r24)
    lwz r3, 0x158c(r24)
    cmpwi r0, 0x0
    stw r25, 0x15d8(r24)
    addi r0, r3, 0x1
    stw r0, 0x158c(r24)
    beq lbl_fn_805A7820_00002268
    mr r3, r24
    li r4, 0x0
    bl fn_805AB82C
lbl_fn_805A7820_00002268:
    li r0, 0x0
    stw r0, 0xa78(r24)
    addi r3, r24, 0x16c0
    li r4, 0xf
    li r5, 0x0
    bl fn_800CB5C8
    lwz r3, 0xa88(r24)
    lwz r0, 0x158c(r24)
    cmpw cr1, r0, r3
    bge cr1, lbl_fn_805A7820_000022D8
    cmpwi r0, 0x0
    blt lbl_fn_805A7820_000022C0
    bge cr1, lbl_fn_805A7820_000022C0
    mulli r0, r0, 0x2c
    add r3, r24, r0
    lwz r0, 0xa8c(r3)
    stw r0, 0x48(r24)
    lwz r0, 0xa90(r3)
    stw r0, 0x4c(r24)
    lwz r0, 0xa94(r3)
    stw r0, 0x50(r24)
    b lbl_fn_805A7820_00002308
lbl_fn_805A7820_000022C0:
    li r0, 0x0
    li r3, 0x2
    stw r3, 0x48(r24)
    stw r0, 0x4c(r24)
    stw r0, 0x50(r24)
    b lbl_fn_805A7820_00002308
lbl_fn_805A7820_000022D8:
    lwz r0, 0xa78(r24)
    cmpwi r0, 0x5
    beq lbl_fn_805A7820_000022F0
    mr r3, r24
    li r4, 0x5
    bl fn_805AB82C
lbl_fn_805A7820_000022F0:
    li r0, 0x5
    stw r0, 0xa78(r24)
    addi r3, r24, 0x16c0
    li r4, 0xf
    li r5, 0x0
    bl fn_800CB5C8
lbl_fn_805A7820_00002308:
    li r0, 0x0
    stw r0, 0x15cc(r24)
    lfs f1, lbl_808882F8
    addi r3, r1, 0x24
    stw r0, 0x15d0(r24)
    li r4, 0x1
    bl fn_805A70D8
    addi r3, r1, 0x24
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_805A7820_00003174
lbl_fn_805A7820_00002334:
    lwz r3, lbl_8087F0A8
    li r4, 0x1
    addi r3, r3, 0x48c
    bl fn_801231D0
    cmpwi r3, 0x0
    beq lbl_fn_805A7820_00003174
    lwz r0, 0xa78(r24)
    stw r25, 0x15d8(r24)
    cmpwi r0, 0x0
    beq lbl_fn_805A7820_00002368
    mr r3, r24
    li r4, 0x0
    bl fn_805AB82C
lbl_fn_805A7820_00002368:
    li r0, 0x0
    stw r0, 0xa78(r24)
    addi r3, r24, 0x16c0
    li r4, 0xf
    li r5, 0x0
    bl fn_800CB5C8
    lwz r3, 0x158c(r24)
    cmpwi r3, 0x0
    blt lbl_fn_805A7820_000023BC
    lwz r0, 0xa88(r24)
    cmpw r3, r0
    bge lbl_fn_805A7820_000023BC
    mulli r0, r3, 0x2c
    add r3, r24, r0
    lwz r0, 0xa8c(r3)
    stw r0, 0x48(r24)
    lwz r0, 0xa90(r3)
    stw r0, 0x4c(r24)
    lwz r0, 0xa94(r3)
    stw r0, 0x50(r24)
    b lbl_fn_805A7820_000023D0
lbl_fn_805A7820_000023BC:
    li r0, 0x0
    li r3, 0x2
    stw r3, 0x48(r24)
    stw r0, 0x4c(r24)
    stw r0, 0x50(r24)
lbl_fn_805A7820_000023D0:
    lwz r0, 0xec(r24)
    lwz r31, 0x4c(r24)
    cmpwi r0, 0x0
    beq lbl_fn_805A7820_000024AC
    lwz r3, 0xec(r24)
    subi r0, r3, 0x1
    mulli r0, r0, 0x98
    add r3, r24, r0
    lwz r0, 0x13c(r3)
    cmpwi r0, 0x0
    blt lbl_fn_805A7820_000024A0
    lwz r3, lbl_8087EE68
    mr r4, r31
    li r5, 0x0
    bl fn_80018608
    li r0, 0x0
    sth r0, 0x1470(r31)
    mr r3, r24
    mr r4, r31
    bl fn_805ADF54
    lwz r3, 0xec(r24)
    subi r0, r3, 0x1
    mulli r0, r0, 0x98
    add r3, r24, r0
    lwz r5, 0xfc(r3)
    cmpwi r5, 0x0
    bne lbl_fn_805A7820_00002448
    lwz r0, 0x100(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805A7820_00002454
lbl_fn_805A7820_00002448:
    lwz r4, 0x100(r3)
    mr r3, r31
    bl fn_80160170
lbl_fn_805A7820_00002454:
    lwz r4, 0xec(r24)
    mr r3, r31
    subi r0, r4, 0x1
    mulli r0, r0, 0x98
    add r4, r24, r0
    lwz r4, 0x104(r4)
    bl fn_8017ABD4
    lwz r3, 0xec(r24)
    subi r0, r3, 0x1
    mulli r0, r0, 0x98
    add r4, r24, r0
    lwz r0, 0x110(r4)
    cmpwi r0, 0x4
    beq lbl_fn_805A7820_00002498
    lwz r3, lbl_8087EE68
    addi r4, r4, 0x108
    bl fn_800184F4
lbl_fn_805A7820_00002498:
    addi r3, r31, 0x7d4
    bl fn_8012D180
lbl_fn_805A7820_000024A0:
    lwz r3, 0xec(r24)
    subi r0, r3, 0x1
    stw r0, 0xec(r24)
lbl_fn_805A7820_000024AC:
    li r0, 0x0
    stw r0, 0x15cc(r24)
    lfs f1, lbl_808882F8
    addi r3, r1, 0x20
    stw r0, 0x15d0(r24)
    li r4, 0x2
    bl fn_805A70D8
    addi r3, r1, 0x20
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_805A7820_00003174
lbl_fn_805A7820_000024D8:
    cmpwi r0, 0x4
    bne lbl_fn_805A7820_00002D68
    mr r3, r31
    bl fn_80390A88
    li r0, 0x1
    stw r0, 0x1598(r24)
    li r0, 0x0
    mr r3, r31
    lfs f30, 0x684(r31)
    lfs f31, 0x688(r31)
    lfs f13, 0x68c(r31)
    lfs f12, 0x690(r31)
    lfs f11, 0x694(r31)
    lfs f10, 0x698(r31)
    lfs f9, 0x69c(r31)
    lfs f8, 0x6a0(r31)
    lfs f7, 0x6a4(r31)
    lfs f6, 0x6a8(r31)
    lfs f5, 0x6ac(r31)
    lfs f4, 0x6b0(r31)
    lfs f3, 0x6b4(r31)
    lfs f0, 0x6b8(r31)
    lwz r4, 0x6bc(r31)
    stfs f30, 0x74c(r1)
    stfs f31, 0xfc(r1)
    stfs f13, 0x13c(r1)
    stfs f12, 0x17c(r1)
    stfs f11, 0x1bc(r1)
    stfs f10, 0x1fc(r1)
    stfs f9, 0x23c(r1)
    stfs f8, 0x27c(r1)
    stfs f7, 0x2bc(r1)
    stfs f6, 0x2fc(r1)
    stfs f5, 0x33c(r1)
    stfs f4, 0x37c(r1)
    stfs f3, 0x3bc(r1)
    stfs f0, 0x3fc(r1)
    stw r4, 0x43c(r1)
    stw r0, 0x4b4(r31)
    bl fn_8037F744
    lwz r0, 0x1598(r24)
    cmpwi r0, 0x0
    beq lbl_fn_805A7820_000025B8
    lwz r0, 0x16c0(r24)
    cmpwi r0, 0x0
    bne lbl_fn_805A7820_000025B8
    lfs f1, lbl_808882F8
    addi r3, r1, 0x1c
    li r4, 0x6
    bl fn_805A70D8
    addi r3, r24, 0x16c0
    addi r4, r1, 0x1c
    bl fn_800CB440
    addi r3, r1, 0x1c
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_805A7820_000025B8:
    lwz r3, lbl_8087F490
    lfs f29, lbl_808882F4
    cmpwi r3, 0x0
    beq lbl_fn_805A7820_000025D4
    bl fn_803E4A48
    lfs f0, lbl_80888324
    fmuls f29, f0, f1
lbl_fn_805A7820_000025D4:
    lwz r4, 0x4c(r24)
    cmpwi r4, 0x0
    bne lbl_fn_805A7820_0000260C
    fneg f0, f29
    lfs f3, lbl_808882F4
    stfs f3, 0x68(r1)
    addi r5, r1, 0x68
    lwz r3, lbl_8087F580
    li r4, 0x9
    stfs f0, 0x6c(r1)
    li r6, 0x0
    stfs f3, 0x70(r1)
    bl fn_804A5E40
    b lbl_fn_805A7820_00002720
lbl_fn_805A7820_0000260C:
    lwz r0, 0xa0(r24)
    cmpwi r0, 0x0
    blt lbl_fn_805A7820_00002628
    slwi r0, r0, 2
    add r3, r24, r0
    lwz r25, 0xa8(r3)
    b lbl_fn_805A7820_0000262C
lbl_fn_805A7820_00002628:
    li r25, 0x0
lbl_fn_805A7820_0000262C:
    lwz r3, 0x50(r4)
    bl fn_80219558
    subi r0, r3, 0x2
    cmplwi r0, 0x1
    ble lbl_fn_805A7820_00002688
    cmpwi r3, 0x0
    beq lbl_fn_805A7820_0000265C
    cmpwi r3, 0x4
    beq lbl_fn_805A7820_000026F8
    cmpwi r3, 0x6
    beq lbl_fn_805A7820_000026F8
    b lbl_fn_805A7820_00002720
lbl_fn_805A7820_0000265C:
    fneg f0, f29
    lfs f3, lbl_808882F4
    stfs f3, 0x5c(r1)
    addi r5, r1, 0x5c
    lwz r3, lbl_8087F580
    li r4, 0x9
    stfs f0, 0x60(r1)
    li r6, 0x0
    stfs f3, 0x64(r1)
    bl fn_804A5E40
    b lbl_fn_805A7820_00002720
lbl_fn_805A7820_00002688:
    cmpwi r25, 0x0
    beq lbl_fn_805A7820_000026A0
    mr r3, r25
    bl fn_8021A77C
    cmpwi r3, 0x0
    beq lbl_fn_805A7820_000026CC
lbl_fn_805A7820_000026A0:
    fneg f0, f29
    lfs f3, lbl_808882F4
    stfs f3, 0x50(r1)
    addi r5, r1, 0x50
    lwz r3, lbl_8087F580
    li r4, 0xc
    stfs f0, 0x54(r1)
    li r6, 0x0
    stfs f3, 0x58(r1)
    bl fn_804A5E40
    b lbl_fn_805A7820_00002720
lbl_fn_805A7820_000026CC:
    fneg f0, f29
    lfs f3, lbl_808882F4
    stfs f3, 0x44(r1)
    addi r5, r1, 0x44
    lwz r3, lbl_8087F580
    li r4, 0xd
    stfs f0, 0x48(r1)
    li r6, 0x0
    stfs f3, 0x4c(r1)
    bl fn_804A5E40
    b lbl_fn_805A7820_00002720
lbl_fn_805A7820_000026F8:
    fneg f0, f29
    lfs f3, lbl_808882F4
    stfs f3, 0x38(r1)
    addi r5, r1, 0x38
    lwz r3, lbl_8087F580
    li r4, 0xc
    stfs f0, 0x3c(r1)
    li r6, 0x0
    stfs f3, 0x40(r1)
    bl fn_804A5E40
lbl_fn_805A7820_00002720:
    lwz r3, lbl_8087F9C0
    li r25, 0x0
    lwz r0, 0x20(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805A7820_00002748
    cmpwi r0, 0x1
    beq lbl_fn_805A7820_000027BC
    cmpwi r0, 0x2
    beq lbl_fn_805A7820_00002808
    b lbl_fn_805A7820_0000281C
lbl_fn_805A7820_00002748:
    lbz r0, 0x15ec(r24)
    li r25, 0x1
    li r26, 0x0
    cmpwi r0, 0x0
    bne lbl_fn_805A7820_00002778
    lwz r3, lbl_8087F0A8
    li r4, 0x9
    addi r3, r3, 0x48c
    bl fn_801240B4
    cmpwi r3, 0x0
    bne lbl_fn_805A7820_00002778
    li r26, 0x1
lbl_fn_805A7820_00002778:
    cmpwi r26, 0x0
    bne lbl_fn_805A7820_0000281C
    lbz r0, 0x15ec(r24)
    li r26, 0x0
    cmpwi r0, 0x0
    beq lbl_fn_805A7820_000027AC
    lwz r3, lbl_8087F0A8
    li r4, 0x0
    addi r3, r3, 0x48c
    bl fn_801231D0
    cmpwi r3, 0x0
    beq lbl_fn_805A7820_000027AC
    li r26, 0x1
lbl_fn_805A7820_000027AC:
    cmpwi r26, 0x0
    bne lbl_fn_805A7820_0000281C
    li r25, 0x0
    b lbl_fn_805A7820_0000281C
lbl_fn_805A7820_000027BC:
    lwz r0, 0x1598(r24)
    li r25, 0x0
    li r3, 0x0
    cmpwi r0, 0x0
    bne lbl_fn_805A7820_000027DC
    lbz r0, 0x15ec(r24)
    cmpwi r0, 0x0
    beq lbl_fn_805A7820_000027E0
lbl_fn_805A7820_000027DC:
    li r3, 0x1
lbl_fn_805A7820_000027E0:
    cmpwi r3, 0x0
    beq lbl_fn_805A7820_0000281C
    lwz r3, lbl_8087F0A8
    li r4, 0x0
    addi r3, r3, 0x48c
    bl fn_801231D0
    cmpwi r3, 0x0
    beq lbl_fn_805A7820_0000281C
    li r25, 0x1
    b lbl_fn_805A7820_0000281C
lbl_fn_805A7820_00002808:
    lwz r3, lbl_8087F0A8
    li r4, 0x0
    addi r3, r3, 0x48c
    bl fn_801231D0
    mr r25, r3
lbl_fn_805A7820_0000281C:
    cmpwi r25, 0x0
    beq lbl_fn_805A7820_00002BA4
    lfs f0, lbl_808882F4
    li r4, 0x0
    lbz r0, 0x15ec(r24)
    addi r3, r31, 0x8a4
    lfs f2, 0x8ac(r31)
    addi r6, r1, 0x98
    psq_l f1, 0x0(r3), 0, 0
    li r5, 0x6
    li r3, 0x96
    stfs f0, 0xcc(r1)
    cmpwi r0, 0x0
    addi r7, r1, 0xcc
    stfs f0, 0xd0(r1)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0xa0(r1)
    sth r5, 0xc0(r1)
    sth r4, 0xc2(r1)
    stw r4, 0xc4(r1)
    stw r3, 0xc8(r1)
    stw r4, 0xd8(r1)
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0xd4(r1)
    bne lbl_fn_805A7820_000029A4
    lwz r6, lbl_8087F8A0
    frsp f2, f2
    lwz r8, 0x48(r6)
    lfs f0, 0x52c(r8)
    addi r6, r8, 0x147c
    stfs f0, 0xd0(r1)
    sth r5, 0x1470(r8)
    psq_l f1, 0x0(r7), 0, 0
    sth r4, 0x1472(r8)
    stw r4, 0x1474(r8)
    stw r3, 0x1478(r8)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x1484(r8)
    stw r4, 0x1488(r8)
    lwz r0, 0xa70(r24)
    cmpwi r0, 0x0
    beq lbl_fn_805A7820_00002978
    lwz r0, 0xa78(r24)
    stw r4, 0xa70(r24)
    cmpwi r0, 0x6
    beq lbl_fn_805A7820_000028E0
    mr r3, r24
    li r4, 0x6
    bl fn_805AB82C
lbl_fn_805A7820_000028E0:
    li r0, 0x6
    stw r0, 0xa78(r24)
    addi r3, r24, 0x16c0
    li r4, 0xf
    li r5, 0x0
    bl fn_800CB5C8
    lfs f3, lbl_808882F4
    li r25, 0x0
    li r0, 0x2
    lfs f0, lbl_8088831C
    stw r0, 0x48(r24)
    addi r3, r24, 0x16c0
    li r4, 0xf
    li r5, 0x0
    stw r25, 0x4c(r24)
    stw r25, 0x50(r24)
    stw r25, 0x15d8(r24)
    stfs f3, 0x15dc(r24)
    stfs f3, 0x15e0(r24)
    stfs f3, 0x15e4(r24)
    stfs f0, 0x15e8(r24)
    stb r25, 0x15ec(r24)
    stb r25, 0x15ed(r24)
    stw r0, 0x15f0(r24)
    stw r25, 0x15f4(r24)
    stw r25, 0x15f8(r24)
    bl fn_800CB5C8
    stw r25, 0x15cc(r24)
    lwz r3, 0x15bc(r24)
    stw r25, 0x15d0(r24)
    lfs f0, lbl_808882F4
    stfs f0, 0x50(r3)
    lwz r3, 0x15c0(r24)
    stfs f0, 0x50(r3)
    lwz r3, 0x15c4(r24)
    stfs f0, 0x50(r3)
    lwz r3, 0x15c8(r24)
    stfs f0, 0x50(r3)
lbl_fn_805A7820_00002978:
    lfs f1, lbl_808882F8
    addi r3, r1, 0x18
    li r4, 0x5
    bl fn_805A70D8
    addi r3, r1, 0x18
    li r4, -0x1
    bl fn_800CB3A0
    lwz r3, 0x1594(r24)
    addi r0, r3, 0x1
    stw r0, 0x1594(r24)
    b lbl_fn_805A7820_00002B88
lbl_fn_805A7820_000029A4:
    lwz r0, 0xa0(r24)
    cmpwi r0, 0x0
    blt lbl_fn_805A7820_000029C0
    slwi r0, r0, 2
    add r3, r24, r0
    lwz r25, 0xa8(r3)
    b lbl_fn_805A7820_000029C4
lbl_fn_805A7820_000029C0:
    li r25, 0x0
lbl_fn_805A7820_000029C4:
    lwz r3, 0x4c(r24)
    lwz r3, 0x50(r3)
    bl fn_80219558
    subi r0, r3, 0x2
    cmplwi r0, 0x1
    ble lbl_fn_805A7820_00002A08
    cmpwi r3, 0x0
    beq lbl_fn_805A7820_000029F8
    cmpwi r3, 0x4
    beq lbl_fn_805A7820_00002A48
    cmpwi r3, 0x6
    beq lbl_fn_805A7820_00002A48
    b lbl_fn_805A7820_00002A50
lbl_fn_805A7820_000029F8:
    lwz r3, 0x4c(r24)
    lfs f0, 0x52c(r3)
    stfs f0, 0xd0(r1)
    b lbl_fn_805A7820_00002A50
lbl_fn_805A7820_00002A08:
    cmpwi r25, 0x0
    beq lbl_fn_805A7820_00002A20
    mr r3, r25
    bl fn_8021A77C
    cmpwi r3, 0x0
    beq lbl_fn_805A7820_00002A2C
lbl_fn_805A7820_00002A20:
    li r0, 0xa
    sth r0, 0xc0(r1)
    b lbl_fn_805A7820_00002A50
lbl_fn_805A7820_00002A2C:
    lwz r3, 0x4(r25)
    li r4, 0x1
    li r0, 0x8
    sth r4, 0xc0(r1)
    stw r3, 0xd8(r1)
    sth r0, 0xc2(r1)
    b lbl_fn_805A7820_00002A50
lbl_fn_805A7820_00002A48:
    li r0, 0xb
    sth r0, 0xc0(r1)
lbl_fn_805A7820_00002A50:
    lwz r8, 0x4c(r24)
    addi r7, r1, 0xcc
    lha r3, 0xc0(r1)
    li r0, 0x0
    sth r3, 0x1470(r8)
    addi r6, r8, 0x147c
    lha r4, 0xc2(r1)
    addi r3, r1, 0x14
    sth r4, 0x1472(r8)
    li r4, 0x1
    lwz r5, 0xc4(r1)
    stw r5, 0x1474(r8)
    lwz r5, 0xc8(r1)
    stw r5, 0x1478(r8)
    psq_l f1, 0x0(r7), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    lfs f2, 0xd4(r1)
    stfs f2, 0x1484(r8)
    lwz r5, 0xd8(r1)
    stw r5, 0x1488(r8)
    lfs f1, lbl_808882F8
    stw r0, 0x15d8(r24)
    bl fn_805A70D8
    addi r3, r1, 0x14
    li r4, -0x1
    bl fn_800CB3A0
    lwz r0, 0xa78(r24)
    lwz r3, 0x158c(r24)
    cmpwi r0, 0x0
    addi r0, r3, 0x1
    stw r0, 0x158c(r24)
    beq lbl_fn_805A7820_00002ADC
    mr r3, r24
    li r4, 0x0
    bl fn_805AB82C
lbl_fn_805A7820_00002ADC:
    li r0, 0x0
    stw r0, 0xa78(r24)
    addi r3, r24, 0x16c0
    li r4, 0xf
    li r5, 0x0
    bl fn_800CB5C8
    lwz r3, 0xa88(r24)
    lwz r0, 0x158c(r24)
    cmpw cr1, r0, r3
    bge cr1, lbl_fn_805A7820_00002B4C
    cmpwi r0, 0x0
    blt lbl_fn_805A7820_00002B34
    bge cr1, lbl_fn_805A7820_00002B34
    mulli r0, r0, 0x2c
    add r3, r24, r0
    lwz r0, 0xa8c(r3)
    stw r0, 0x48(r24)
    lwz r0, 0xa90(r3)
    stw r0, 0x4c(r24)
    lwz r0, 0xa94(r3)
    stw r0, 0x50(r24)
    b lbl_fn_805A7820_00002B7C
lbl_fn_805A7820_00002B34:
    li r0, 0x0
    li r3, 0x2
    stw r3, 0x48(r24)
    stw r0, 0x4c(r24)
    stw r0, 0x50(r24)
    b lbl_fn_805A7820_00002B7C
lbl_fn_805A7820_00002B4C:
    lwz r0, 0xa78(r24)
    cmpwi r0, 0x5
    beq lbl_fn_805A7820_00002B64
    mr r3, r24
    li r4, 0x5
    bl fn_805AB82C
lbl_fn_805A7820_00002B64:
    li r0, 0x5
    stw r0, 0xa78(r24)
    addi r3, r24, 0x16c0
    li r4, 0xf
    li r5, 0x0
    bl fn_800CB5C8
lbl_fn_805A7820_00002B7C:
    li r0, 0x0
    stw r0, 0x15cc(r24)
    stw r0, 0x15d0(r24)
lbl_fn_805A7820_00002B88:
    addi r4, r31, 0x8a4
    lfs f2, 0x8ac(r31)
    psq_l f1, 0x0(r4), 0, 0
    addi r3, r24, 0x159c
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x15a4(r24)
    b lbl_fn_805A7820_00003174
lbl_fn_805A7820_00002BA4:
    lwz r3, lbl_8087F0A8
    li r4, 0x1
    addi r3, r3, 0x48c
    bl fn_801231D0
    cmpwi r3, 0x0
    beq lbl_fn_805A7820_00003174
    lbz r0, 0x15ec(r24)
    cmpwi r0, 0x0
    bne lbl_fn_805A7820_00002C9C
    lwz r0, 0xa70(r24)
    cmpwi r0, 0x0
    beq lbl_fn_805A7820_00002C8C
    lwz r0, 0xa78(r24)
    li r3, 0x0
    stw r3, 0xa70(r24)
    cmpwi r0, 0x6
    beq lbl_fn_805A7820_00002BF4
    mr r3, r24
    li r4, 0x6
    bl fn_805AB82C
lbl_fn_805A7820_00002BF4:
    li r0, 0x6
    stw r0, 0xa78(r24)
    addi r3, r24, 0x16c0
    li r4, 0xf
    li r5, 0x0
    bl fn_800CB5C8
    lfs f3, lbl_808882F4
    li r25, 0x0
    li r0, 0x2
    lfs f0, lbl_8088831C
    stw r0, 0x48(r24)
    addi r3, r24, 0x16c0
    li r4, 0xf
    li r5, 0x0
    stw r25, 0x4c(r24)
    stw r25, 0x50(r24)
    stw r25, 0x15d8(r24)
    stfs f3, 0x15dc(r24)
    stfs f3, 0x15e0(r24)
    stfs f3, 0x15e4(r24)
    stfs f0, 0x15e8(r24)
    stb r25, 0x15ec(r24)
    stb r25, 0x15ed(r24)
    stw r0, 0x15f0(r24)
    stw r25, 0x15f4(r24)
    stw r25, 0x15f8(r24)
    bl fn_800CB5C8
    stw r25, 0x15cc(r24)
    lwz r3, 0x15bc(r24)
    stw r25, 0x15d0(r24)
    lfs f0, lbl_808882F4
    stfs f0, 0x50(r3)
    lwz r3, 0x0(r30)
    stfs f0, 0x50(r3)
    lwz r3, 0x0(r29)
    stfs f0, 0x50(r3)
    lwz r3, 0x0(r28)
    stfs f0, 0x50(r3)
lbl_fn_805A7820_00002C8C:
    lwz r3, lbl_8087F430
    li r0, 0x0
    stw r0, 0x5674(r3)
    b lbl_fn_805A7820_00003174
lbl_fn_805A7820_00002C9C:
    lwz r0, 0xa78(r24)
    li r3, 0x0
    stw r3, 0x15d8(r24)
    cmpwi r0, 0x0
    beq lbl_fn_805A7820_00002CBC
    mr r3, r24
    li r4, 0x0
    bl fn_805AB82C
lbl_fn_805A7820_00002CBC:
    li r0, 0x0
    stw r0, 0xa78(r24)
    addi r3, r24, 0x16c0
    li r4, 0xf
    li r5, 0x0
    bl fn_800CB5C8
    lwz r0, 0x158c(r24)
    cmpwi r0, 0x0
    blt lbl_fn_805A7820_00002D10
    lwz r3, 0xa88(r24)
    cmpw r0, r3
    bge lbl_fn_805A7820_00002D10
    mulli r0, r0, 0x2c
    add r3, r24, r0
    lwz r0, 0xa8c(r3)
    stw r0, 0x48(r24)
    lwz r0, 0xa90(r3)
    stw r0, 0x4c(r24)
    lwz r0, 0xa94(r3)
    stw r0, 0x50(r24)
    b lbl_fn_805A7820_00002D24
lbl_fn_805A7820_00002D10:
    li r0, 0x0
    li r3, 0x2
    stw r3, 0x48(r24)
    stw r0, 0x4c(r24)
    stw r0, 0x50(r24)
lbl_fn_805A7820_00002D24:
    li r0, 0x0
    stw r0, 0x15cc(r24)
    lfs f1, lbl_808882F8
    addi r3, r1, 0x10
    stw r0, 0x15d0(r24)
    li r4, 0x2
    bl fn_805A70D8
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    addi r4, r31, 0x8a4
    lfs f2, 0x8ac(r31)
    psq_l f1, 0x0(r4), 0, 0
    addi r3, r24, 0x159c
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x15a4(r24)
    b lbl_fn_805A7820_00003174
lbl_fn_805A7820_00002D68:
    cmpwi r0, 0x5
    bne lbl_fn_805A7820_00003174
    lwz r3, lbl_8087F430
    li r5, 0x0
    li r6, -0x1
    li r4, 0x6
    cmpwi r3, 0x0
    li r0, 0xc
    stw r6, 0xac(r1)
    stw r5, 0xb0(r1)
    stw r5, 0xb4(r1)
    stw r5, 0xb8(r1)
    stw r5, 0xbc(r1)
    stw r4, 0xa4(r1)
    stw r0, 0xa8(r1)
    beq lbl_fn_805A7820_00002DBC
    bl fn_80375184
    cmpwi r3, 0x0
    beq lbl_fn_805A7820_00002DBC
    li r0, 0xd
    stw r0, 0xa8(r1)
lbl_fn_805A7820_00002DBC:
    lwz r3, lbl_8087F490
    cmpwi r3, 0x0
    beq lbl_fn_805A7820_00002E00
    lwz r0, 0xa4(r1)
    stw r0, 0x764(r3)
    lwz r0, 0xa8(r1)
    stw r0, 0x768(r3)
    lwz r0, 0xac(r1)
    stw r0, 0x76c(r3)
    lwz r0, 0xb0(r1)
    stw r0, 0x770(r3)
    lwz r0, 0xb4(r1)
    stw r0, 0x774(r3)
    lwz r0, 0xb8(r1)
    stw r0, 0x778(r3)
    lwz r0, 0xbc(r1)
    stw r0, 0x77c(r3)
lbl_fn_805A7820_00002E00:
    lwz r3, lbl_8087EF70
    cmpwi r3, 0x0
    beq lbl_fn_805A7820_00002E1C
    li r4, 0x0
    li r5, 0x4
    bl fn_800A555C
    b lbl_fn_805A7820_00002E20
lbl_fn_805A7820_00002E1C:
    li r3, 0x0
lbl_fn_805A7820_00002E20:
    cmpwi r3, 0x0
    beq lbl_fn_805A7820_00002FB4
    li r0, 0x14
    stw r0, 0xa7c(r24)
    lfs f1, lbl_808882F8
    addi r3, r1, 0xc
    li r4, 0x3
    bl fn_805A70D8
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    lwz r5, 0x1594(r24)
    mr r3, r24
    li r4, 0x0
    addi r0, r5, 0x1
    stw r0, 0x1594(r24)
    bl fn_805ADDD8
    addi r27, r24, 0xf0
    li r29, 0x0
    li r30, 0x0
    lis r25, lbl_80763918@ha
    b lbl_fn_805A7820_00002F8C
lbl_fn_805A7820_00002E78:
    lwz r3, 0x0(r27)
    cmpwi r3, 0x0
    beq lbl_fn_805A7820_00002F84
    lwz r0, 0x4c(r27)
    cmpwi r0, 0x0
    blt lbl_fn_805A7820_00002F84
    slwi r0, r0, 2
    li r29, 0x1
    add r4, r27, r0
    lwz r0, 0x64(r4)
    cmpwi r0, 0x8
    bne lbl_fn_805A7820_00002ED0
    li r4, 0x0
    bl fn_800EE794
    cmpwi r3, 0x0
    beq lbl_fn_805A7820_00002ED0
    lwz r3, 0x0(r27)
    bl fn_80160324
    cmpwi r3, 0x0
    beq lbl_fn_805A7820_00002ED0
    lwz r3, 0x0(r27)
    bl fn_8016034C
lbl_fn_805A7820_00002ED0:
    lwz r3, 0x0(r27)
    bl fn_80160324
    cmpwi r3, 0x0
    beq lbl_fn_805A7820_00002EF4
    lwz r3, 0x0(r27)
    lha r0, 0x1470(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805A7820_00002EF4
    bl fn_8016034C
lbl_fn_805A7820_00002EF4:
    lwz r0, 0x94(r27)
    cmpwi r0, 0x0
    beq lbl_fn_805A7820_00002F84
    lwz r0, lbl_8087F9E8
    cmpwi r0, 0x0
    beq lbl_fn_805A7820_00002F84
    mr r26, r27
    li r28, 0x0
lbl_fn_805A7820_00002F14:
    lwz r0, 0x64(r26)
    cmpwi r0, 0x4
    bne lbl_fn_805A7820_00002F38
    lwz r5, 0x54(r26)
    cmpwi r5, 0x0
    beq lbl_fn_805A7820_00002F38
    lwz r3, lbl_8087F9E8
    lwz r4, 0x0(r27)
    bl fn_8059C2AC
lbl_fn_805A7820_00002F38:
    addi r28, r28, 0x1
    addi r26, r26, 0x4
    cmpwi r28, 0x4
    blt lbl_fn_805A7820_00002F14
    addi r28, r25, lbl_80763918@l
    li r31, 0x0
lbl_fn_805A7820_00002F50:
    lwz r3, 0x0(r28)
    cmpwi r3, 0x0
    ble lbl_fn_805A7820_00002F74
    lwz r26, lbl_8087F9E8
    bl fn_80219E6C
    lwz r4, 0x0(r27)
    mr r5, r3
    mr r3, r26
    bl fn_8059C2AC
lbl_fn_805A7820_00002F74:
    addi r31, r31, 0x1
    addi r28, r28, 0x4
    cmpwi r31, 0x6
    blt lbl_fn_805A7820_00002F50
lbl_fn_805A7820_00002F84:
    addi r27, r27, 0x98
    addi r30, r30, 0x1
lbl_fn_805A7820_00002F8C:
    lwz r0, 0xec(r24)
    cmplw r30, r0
    blt lbl_fn_805A7820_00002E78
    cmpwi r29, 0x0
    beq lbl_fn_805A7820_00003174
    lwz r3, lbl_8087F8A0
    lfs f0, lbl_808882F4
    lwz r3, 0x48(r3)
    stfs f0, 0x7dc(r3)
    b lbl_fn_805A7820_00003174
lbl_fn_805A7820_00002FB4:
    lwz r3, lbl_8087EF70
    cmpwi r3, 0x0
    beq lbl_fn_805A7820_00002FD0
    li r4, 0x0
    li r5, 0x5
    bl fn_800A555C
    b lbl_fn_805A7820_00002FD4
lbl_fn_805A7820_00002FD0:
    li r3, 0x0
lbl_fn_805A7820_00002FD4:
    cmpwi r3, 0x0
    beq lbl_fn_805A7820_00003174
    lwz r0, 0xa78(r24)
    cmpwi r0, 0x0
    beq lbl_fn_805A7820_00002FF4
    mr r3, r24
    li r4, 0x0
    bl fn_805AB82C
lbl_fn_805A7820_00002FF4:
    li r0, 0x0
    stw r0, 0xa78(r24)
    addi r3, r24, 0x16c0
    li r4, 0xf
    li r5, 0x0
    bl fn_800CB5C8
    lwz r3, 0x158c(r24)
    cmpwi r3, 0x0
    bge lbl_fn_805A7820_00003024
    addi r0, r3, 0x1
    stw r0, 0x158c(r24)
    b lbl_fn_805A7820_0000302C
lbl_fn_805A7820_00003024:
    subi r0, r3, 0x1
    stw r0, 0x158c(r24)
lbl_fn_805A7820_0000302C:
    lwz r3, 0x158c(r24)
    cmpwi r3, 0x0
    blt lbl_fn_805A7820_00003068
    lwz r0, 0xa88(r24)
    cmpw r3, r0
    bge lbl_fn_805A7820_00003068
    mulli r0, r3, 0x2c
    add r3, r24, r0
    lwz r0, 0xa8c(r3)
    stw r0, 0x48(r24)
    lwz r0, 0xa90(r3)
    stw r0, 0x4c(r24)
    lwz r0, 0xa94(r3)
    stw r0, 0x50(r24)
    b lbl_fn_805A7820_0000307C
lbl_fn_805A7820_00003068:
    li r0, 0x0
    li r3, 0x2
    stw r3, 0x48(r24)
    stw r0, 0x4c(r24)
    stw r0, 0x50(r24)
lbl_fn_805A7820_0000307C:
    lwz r0, 0xec(r24)
    lwz r31, 0x4c(r24)
    cmpwi r0, 0x0
    beq lbl_fn_805A7820_00003158
    lwz r3, 0xec(r24)
    subi r0, r3, 0x1
    mulli r0, r0, 0x98
    add r3, r24, r0
    lwz r0, 0x13c(r3)
    cmpwi r0, 0x0
    blt lbl_fn_805A7820_0000314C
    lwz r3, lbl_8087EE68
    mr r4, r31
    li r5, 0x0
    bl fn_80018608
    li r0, 0x0
    sth r0, 0x1470(r31)
    mr r3, r24
    mr r4, r31
    bl fn_805ADF54
    lwz r3, 0xec(r24)
    subi r0, r3, 0x1
    mulli r0, r0, 0x98
    add r3, r24, r0
    lwz r5, 0xfc(r3)
    cmpwi r5, 0x0
    bne lbl_fn_805A7820_000030F4
    lwz r0, 0x100(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805A7820_00003100
lbl_fn_805A7820_000030F4:
    lwz r4, 0x100(r3)
    mr r3, r31
    bl fn_80160170
lbl_fn_805A7820_00003100:
    lwz r4, 0xec(r24)
    mr r3, r31
    subi r0, r4, 0x1
    mulli r0, r0, 0x98
    add r4, r24, r0
    lwz r4, 0x104(r4)
    bl fn_8017ABD4
    lwz r3, 0xec(r24)
    subi r0, r3, 0x1
    mulli r0, r0, 0x98
    add r4, r24, r0
    lwz r0, 0x110(r4)
    cmpwi r0, 0x4
    beq lbl_fn_805A7820_00003144
    lwz r3, lbl_8087EE68
    addi r4, r4, 0x108
    bl fn_800184F4
lbl_fn_805A7820_00003144:
    addi r3, r31, 0x7d4
    bl fn_8012D180
lbl_fn_805A7820_0000314C:
    lwz r3, 0xec(r24)
    subi r0, r3, 0x1
    stw r0, 0xec(r24)
lbl_fn_805A7820_00003158:
    lfs f1, lbl_808882F8
    addi r3, r1, 0x8
    li r4, 0x2
    bl fn_805A70D8
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_805A7820_00003174:
    lwz r3, lbl_8087F0A8
    li r4, 0x2e
    addi r3, r3, 0x48c
    bl fn_801231D0
    cmpwi r3, 0x0
    beq lbl_fn_805A7820_000031B0
    lwz r3, 0x1590(r24)
    addi r0, r3, 0x1
    srwi r3, r0, 31
    clrlwi r0, r0, 31
    xor r0, r0, r3
    subf r0, r3, r0
    stw r0, 0x1590(r24)
    lwz r3, lbl_8087F490
    bl fn_803D8344
lbl_fn_805A7820_000031B0:
    lwz r0, 0xa74(r24)
    cmpwi r0, 0x0
    beq lbl_fn_805A7820_00003284
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x0
    bl fn_800A55FC
    cmpwi r3, 0x0
    beq lbl_fn_805A7820_00003284
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x1
    bl fn_800A55FC
    cmpwi r3, 0x0
    beq lbl_fn_805A7820_00003284
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x2
    bl fn_800A55FC
    cmpwi r3, 0x0
    beq lbl_fn_805A7820_00003284
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x3
    bl fn_800A55FC
    cmpwi r3, 0x0
    beq lbl_fn_805A7820_00003284
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x1a
    bl fn_800A55FC
    cmpwi r3, 0x0
    beq lbl_fn_805A7820_00003284
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x19
    bl fn_800A55FC
    cmpwi r3, 0x0
    beq lbl_fn_805A7820_00003284
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x17
    bl fn_800A55FC
    cmpwi r3, 0x0
    beq lbl_fn_805A7820_00003284
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x18
    bl fn_800A55FC
    cmpwi r3, 0x0
    beq lbl_fn_805A7820_00003284
    li r0, 0x0
    stw r0, 0xa74(r24)
lbl_fn_805A7820_00003284:
    li r0, 0x848
    addi r11, r1, 0x820
    psq_lx f31, r1, r0, 0, 0
    lfd f31, 0x840(r1)
    li r0, 0x838
    psq_lx f30, r1, r0, 0, 0
    lfd f30, 0x830(r1)
    li r0, 0x828
    psq_lx f29, r1, r0, 0, 0
    lfd f29, 0x820(r1)
    bl _restgpr_24
    lwz r0, 0x854(r1)
    mtlr r0
    addi r1, r1, 0x850
    blr
}
