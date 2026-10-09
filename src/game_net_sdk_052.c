#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void OSDisableInterrupts(void);
extern void OSRestoreInterrupts(void);
extern void __register_global_object(void);
extern void _restgpr_22(void);
extern void _restgpr_24(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_22(void);
extern void _savegpr_24(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_805F3130(void);
extern void fn_805F3210(void);
extern void fn_80619CB0(void);
extern void fn_80619D40(void);
extern void fn_80619D70(void);
extern void fn_80619E90(void);
extern void fn_8070ABB0(void);
extern void fn_8070ABC0(void);
extern void fn_8070ABD0(void);
extern void fn_8070B530(void);
extern void fn_8070F0D0(void);
extern void fn_8070F130(void);
extern void fn_8070F180(void);
extern void fn_8070F1B0(void);
extern void fn_8070F1D0(void);
extern void fn_8070F270(void);
extern void fn_807187D0(void);
extern void fn_8071E680(void);
extern void fn_8071E750(void);
extern void fn_8071E950(void);
extern void fn_8071E970(void);
extern void fn_8071EA80(void);
extern void fn_8071EAB0(void);
extern void fn_8071EB30(void);
extern void fn_8071EB50(void);
extern void fn_8071EB70(void);
extern void fn_8071EB90(void);
extern void fn_8071EBB0(void);
extern void fn_8071EBD0(void);
extern void fn_8071EBF0(void);
extern void fn_8071EC60(void);
extern void fn_8071ECA0(void);
extern void fn_8071ECC0(void);
extern void fn_8071ECF0(void);
extern void fn_8071ED30(void);
extern void fn_8071ED70(void);
extern void fn_8071EE00(void);
extern void fn_807204D0(void);
extern void fn_80720760(void);
extern void fn_80720C70(void);
extern void fn_80720E20(void);
extern void fn_80725170(void);
extern void fn_807252A0(void);
extern void fn_807252D0(void);

/* External data declarations */
extern u8 lbl_8076CCA0[];
extern u8 lbl_8076CDA0[];
extern u8 lbl_80862F68[];
extern u8 lbl_80862F78[];
extern u8 lbl_80862F98[];
extern u8 lbl_80862FA4[];

/* Small data declarations */
extern u32 lbl_8087EDF8;
extern u32 lbl_8087EDFC;
extern u32 lbl_8087EE00;
extern u32 lbl_8087EE08;
extern u32 lbl_8087EE10;
extern u32 lbl_808804B8;
extern u32 lbl_808804C0;
extern u32 lbl_80889098;
extern u32 lbl_8088909C;
extern u32 lbl_808890A0;
extern u32 lbl_808890A4;
extern u32 lbl_808890A8;
extern u32 lbl_808890B0;
extern u32 lbl_808890B8;
extern u32 lbl_808890C0;
extern u32 lbl_808890C4;
extern u32 lbl_808890C8;
extern u32 lbl_808890CC;
extern u32 lbl_808890D0;
extern u32 lbl_808890D8;
extern u32 lbl_808890E0;
extern u32 lbl_808890E4;
extern u32 lbl_808890E8;
extern u32 lbl_808890EC;

/* Function declarations */
void pad_03_8070B7B4_text(void);
void fn_8070B7C0(void);
void fn_8070B820(void);
void fn_8070B930(void);
void fn_8070C010(void);
void fn_8070C090(void);
void fn_8070C100(void);
void fn_8070C180(void);
void fn_8070C2B0(void);
void fn_8070C2D0(void);
void fn_8070C2F0(void);
void fn_8070C300(void);
void fn_8070C440(void);
void fn_8070C630(void);
void fn_8070C650(void);
void fn_8070C6E0(void);
void fn_8070C740(void);
void fn_8070C770(void);
void fn_8070C780(void);
void fn_8070C8B0(void);
void fn_8070C9E0(void);
void fn_8070CA60(void);
void fn_8070CAA0(void);
void fn_8070CAE0(void);
void fn_8070CB30(void);
void fn_8070CB70(void);
void fn_8070CB90(void);
void fn_8070CBC0(void);
void fn_8070CD20(void);
void fn_8070CD40(void);
void fn_8070CD60(void);
void fn_8070CE00(void);
void fn_8070CE10(void);
void fn_8070CEB0(void);
void fn_8070CED0(void);
void fn_8070CF70(void);
void fn_8070CFD0(void);
void fn_8070D180(void);
void fn_8070D240(void);
void fn_8070D290(void);
void fn_8070D360(void);
void fn_8070D380(void);
void fn_8070D490(void);
void fn_8070D630(void);
void fn_8070D720(void);

asm void pad_03_8070B7B4_text(void)
{
    nofralloc
    opword 0x00000000
    opword 0x00000000
    opword 0x00000000
}

asm void fn_8070B7C0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    addi r30, r3, 0x8
    lwz r31, 0x8(r3)
    b lbl_fn_8070B7C0_00000040
lbl_fn_8070B7C0_0000002C:
    mr r3, r31
    lwz r31, 0x0(r31)
    subi r3, r3, 0xd8
    li r4, 0x1
    bl fn_8070B930
lbl_fn_8070B7C0_00000040:
    cmplw r31, r30
    bne lbl_fn_8070B7C0_0000002C
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8070B820(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lfs f0, lbl_80889098
    li r7, 0x1
    stw r0, 0x14(r1)
    li r6, 0x3c
    lfs f2, lbl_8088909C
    li r0, 0xff
    stw r31, 0xc(r1)
    li r31, 0x0
    lfs f1, lbl_808890C0
    stw r30, 0x8(r1)
    mr r30, r3
    stw r31, 0xd4(r3)
    stw r4, 0xc0(r3)
    stw r5, 0xc4(r3)
    stw r31, 0xc8(r3)
    stw r31, 0xcc(r3)
    stb r31, 0x35(r3)
    stb r7, 0x38(r3)
    stb r31, 0x39(r3)
    stb r31, 0x3a(r3)
    stw r31, 0xb0(r3)
    stw r6, 0xa8(r3)
    stw r6, 0xac(r3)
    stfs f2, 0x90(r3)
    stfs f0, 0x94(r3)
    stfs f0, 0x98(r3)
    stfs f2, 0x9c(r3)
    stfs f2, 0x40(r3)
    stfs f0, 0x80(r3)
    stfs f2, 0x44(r3)
    stfs f0, 0x48(r3)
    stfs f0, 0x4c(r3)
    stfs f0, 0x50(r3)
    stb r31, 0x3b(r3)
    stfs f0, 0x54(r3)
    stb r31, 0x3c(r3)
    stw r7, 0x58(r3)
    stfs f2, 0x5c(r3)
    stfs f0, 0x60(r3)
    stfs f0, 0x64(r3)
    stfs f0, 0x68(r3)
    stfs f0, 0x6c(r3)
    stfs f2, 0x70(r3)
    stfs f2, 0x74(r3)
    stfs f2, 0x78(r3)
    stfs f2, 0x7c(r3)
    stb r0, 0xa0(r3)
    stb r0, 0xa1(r3)
    sth r31, 0xa2(r3)
    sth r31, 0xa4(r3)
    stfs f0, 0x84(r3)
    stw r31, 0x8c(r3)
    stw r31, 0x88(r3)
    bl fn_8070CB30
    addi r3, r30, 0x1c
    bl fn_8070F180
    stb r31, 0x34(r30)
    stw r31, 0xb4(r30)
    stw r31, 0xb8(r30)
    stw r31, 0xbc(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8070B930(void)
{
    nofralloc
    stwu r1, -0xf0(r1)
    mflr r0
    lis r5, 0x4330
    stw r0, 0xf4(r1)
    stfd f31, 0xe0(r1)
    psq_st f31, 0xe8(r1), 0, 0
    stfd f30, 0xd0(r1)
    psq_st f30, 0xd8(r1), 0, 0
    stfd f29, 0xc0(r1)
    psq_st f29, 0xc8(r1), 0, 0
    stfd f28, 0xb0(r1)
    psq_st f28, 0xb8(r1), 0, 0
    stfd f27, 0xa0(r1)
    psq_st f27, 0xa8(r1), 0, 0
    stfd f26, 0x90(r1)
    psq_st f26, 0x98(r1), 0, 0
    stfd f25, 0x80(r1)
    psq_st f25, 0x88(r1), 0, 0
    stfd f24, 0x70(r1)
    psq_st f24, 0x78(r1), 0, 0
    stfd f23, 0x60(r1)
    psq_st f23, 0x68(r1), 0, 0
    stfd f22, 0x50(r1)
    psq_st f22, 0x58(r1), 0, 0
    stw r31, 0x4c(r1)
    mr r31, r4
    stw r30, 0x48(r1)
    mr r30, r3
    stw r29, 0x44(r1)
    lbz r0, 0x36(r3)
    stw r5, 0x28(r1)
    cmpwi r0, 0x0
    stw r5, 0x30(r1)
    beq lbl_fn_8070B930_000007EC
    lbz r0, 0x35(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8070B930_00000214
    li r31, 0x0
lbl_fn_8070B930_00000214:
    addi r3, r3, 0x1c
    bl fn_8070F270
    lhz r3, 0xa4(r30)
    fmr f31, f1
    lhz r0, 0xa2(r30)
    cmplw r3, r0
    bge lbl_fn_8070B930_00000238
    addi r0, r3, 0x1
    sth r0, 0xa4(r30)
lbl_fn_8070B930_00000238:
    lfs f30, lbl_8088909C
    lfs f1, 0x90(r30)
    lfs f0, 0x40(r30)
    fmuls f30, f30, f1
    lhz r4, 0xa2(r30)
    lhz r3, 0xa4(r30)
    cmplw r3, r4
    fmuls f30, f30, f0
    blt lbl_fn_8070B930_00000264
    lbz r0, 0xa1(r30)
    b lbl_fn_8070B930_00000280
lbl_fn_8070B930_00000264:
    lbz r5, 0xa0(r30)
    lbz r0, 0xa1(r30)
    subf r0, r5, r0
    mullw r0, r3, r0
    divw r0, r0, r4
    add r0, r5, r0
    clrlwi r0, r0, 24
lbl_fn_8070B930_00000280:
    stw r0, 0x2c(r1)
    mr r3, r30
    lfd f2, lbl_808890B0
    lfd f1, 0x28(r1)
    lfs f0, lbl_808890A0
    fsubs f1, f1, f2
    lfs f29, lbl_8088909C
    fdivs f0, f1, f0
    fmuls f30, f30, f0
    bl fn_8070CB90
    bl fn_80720E20
    lbz r0, 0x34(r30)
    fmuls f29, f29, f1
    cmplwi r0, 0x1
    bne lbl_fn_8070B930_000002CC
    lfs f0, lbl_808890A4
    fmuls f1, f0, f31
    bl fn_80720E20
    fmuls f29, f29, f1
lbl_fn_8070B930_000002CC:
    lwz r0, 0x0(r30)
    cmpwi r0, 0x4
    bne lbl_fn_8070B930_000004E8
    lwz r0, 0xc0(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8070B930_000003E4
    lfs f0, lbl_80889098
    fcmpu cr0, f0, f29
    bne lbl_fn_8070B930_000004E8
    lwz r3, 0xd0(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8070B930_000007EC
    bl fn_8071E970
    lwz r3, 0xd0(r30)
    bl fn_8071E680
    lwz r12, 0xc0(r30)
    li r0, 0x0
    stw r0, 0xd0(r30)
    cmpwi r12, 0x0
    stb r0, 0x35(r30)
    stb r0, 0x36(r30)
    beq lbl_fn_8070B930_00000338
    mr r3, r30
    lwz r5, 0xc4(r30)
    li r4, 0x0
    mtctr r12
    bctrl
lbl_fn_8070B930_00000338:
    lwz r3, 0xc8(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8070B930_00000358
    lwz r12, 0x0(r3)
    lwz r4, 0xcc(r30)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
lbl_fn_8070B930_00000358:
    lbz r0, 0x37(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8070B930_000007EC
    li r7, 0x0
    stb r7, 0x37(r30)
    lbz r0, lbl_808804B8
    extsb. r0, r0
    bne lbl_fn_8070B930_000003B8
    lis r6, lbl_80862F78@ha
    lis r4, fn_8070B530@ha
    addi r3, r6, lbl_80862F78@l
    lis r5, lbl_80862F68@ha
    addi r0, r3, 0x8
    stw r7, lbl_80862F78@l(r6)
    addi r4, r4, fn_8070B530@l
    addi r5, r5, lbl_80862F68@l
    stw r7, 0x4(r3)
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
    stb r7, 0x10(r3)
    stw r7, 0x14(r3)
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_808804B8
lbl_fn_8070B930_000003B8:
    lis r31, lbl_80862F78@ha
    addi r4, r30, 0xd8
    addi r31, r31, lbl_80862F78@l
    addi r3, r31, 0x4
    bl fn_807252D0
    cmpwi r30, 0x0
    beq lbl_fn_8070B930_000007EC
    mr r3, r31
    mr r4, r30
    bl fn_8070F130
    b lbl_fn_8070B930_000007EC
lbl_fn_8070B930_000003E4:
    fmuls f0, f30, f29
    lfs f1, lbl_80889098
    fcmpu cr0, f1, f0
    bne lbl_fn_8070B930_000004E8
    lwz r3, 0xd0(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8070B930_000007EC
    bl fn_8071E970
    lwz r3, 0xd0(r30)
    bl fn_8071E680
    lwz r12, 0xc0(r30)
    li r0, 0x0
    stw r0, 0xd0(r30)
    cmpwi r12, 0x0
    stb r0, 0x35(r30)
    stb r0, 0x36(r30)
    beq lbl_fn_8070B930_0000043C
    mr r3, r30
    lwz r5, 0xc4(r30)
    li r4, 0x0
    mtctr r12
    bctrl
lbl_fn_8070B930_0000043C:
    lwz r3, 0xc8(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8070B930_0000045C
    lwz r12, 0x0(r3)
    lwz r4, 0xcc(r30)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
lbl_fn_8070B930_0000045C:
    lbz r0, 0x37(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8070B930_000007EC
    li r7, 0x0
    stb r7, 0x37(r30)
    lbz r0, lbl_808804B8
    extsb. r0, r0
    bne lbl_fn_8070B930_000004BC
    lis r6, lbl_80862F78@ha
    lis r4, fn_8070B530@ha
    addi r3, r6, lbl_80862F78@l
    lis r5, lbl_80862F68@ha
    addi r0, r3, 0x8
    stw r7, lbl_80862F78@l(r6)
    addi r4, r4, fn_8070B530@l
    addi r5, r5, lbl_80862F68@l
    stw r7, 0x4(r3)
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
    stb r7, 0x10(r3)
    stw r7, 0x14(r3)
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_808804B8
lbl_fn_8070B930_000004BC:
    lis r31, lbl_80862F78@ha
    addi r4, r30, 0xd8
    addi r31, r31, lbl_80862F78@l
    addi r3, r31, 0x4
    bl fn_807252D0
    cmpwi r30, 0x0
    beq lbl_fn_8070B930_000007EC
    mr r3, r31
    mr r4, r30
    bl fn_8070F130
    b lbl_fn_8070B930_000007EC
lbl_fn_8070B930_000004E8:
    lwz r3, 0xac(r30)
    lwz r0, 0xa8(r30)
    lfd f3, lbl_808890B8
    subf r0, r3, r0
    lfs f4, lbl_80889098
    xoris r0, r0, 0x8000
    stw r0, 0x34(r1)
    lfs f1, lbl_80889098
    lfd f0, 0x30(r1)
    lfs f2, 0x84(r30)
    fsubs f0, f0, f3
    fcmpu cr0, f1, f2
    fadds f4, f4, f0
    bne lbl_fn_8070B930_00000524
    b lbl_fn_8070B930_00000564
lbl_fn_8070B930_00000524:
    lwz r0, 0x88(r30)
    lwz r4, 0x8c(r30)
    cmpw r0, r4
    blt lbl_fn_8070B930_00000538
    b lbl_fn_8070B930_00000564
lbl_fn_8070B930_00000538:
    subf r3, r0, r4
    xoris r0, r4, 0x8000
    xoris r3, r3, 0x8000
    stw r3, 0x2c(r1)
    lfd f0, 0x28(r1)
    stw r0, 0x34(r1)
    fsubs f1, f0, f3
    lfd f0, 0x30(r1)
    fmuls f1, f2, f1
    fsubs f0, f0, f3
    fdivs f1, f1, f0
lbl_fn_8070B930_00000564:
    fadds f4, f4, f1
    lfs f0, 0x80(r30)
    lbz r0, 0x34(r30)
    cmpwi r0, 0x0
    fadds f4, f4, f0
    bne lbl_fn_8070B930_00000580
    fadds f4, f4, f31
lbl_fn_8070B930_00000580:
    lfs f0, lbl_808890A8
    lfs f23, lbl_8088909C
    fmuls f0, f0, f4
    lfs f2, 0x9c(r30)
    lfs f1, 0x44(r30)
    fmuls f23, f23, f2
    fctiwz f0, f0
    stfd f0, 0x38(r1)
    fmuls f23, f23, f1
    lwz r3, 0x3c(r1)
    bl fn_80720C70
    lfs f27, lbl_80889098
    fmuls f28, f1, f23
    lfs f0, 0x94(r30)
    lbz r0, 0x34(r30)
    fadds f27, f27, f0
    lfs f0, 0x48(r30)
    cmplwi r0, 0x2
    fadds f27, f27, f0
    bne lbl_fn_8070B930_000005D4
    fadds f27, f27, f31
lbl_fn_8070B930_000005D4:
    lfs f31, lbl_80889098
    cmpwi r31, 0x0
    lfs f0, 0x98(r30)
    fmr f3, f31
    lfs f4, lbl_8088909C
    lfs f2, 0x64(r30)
    fadds f31, f31, f0
    lfs f0, 0x6c(r30)
    fmr f26, f4
    fadds f7, f3, f2
    lfs f1, 0x68(r30)
    fadds f5, f3, f0
    lfs f2, 0x4c(r30)
    fadds f6, f3, f1
    lfs f0, 0x70(r30)
    fmuls f3, f4, f0
    lfs f1, 0x78(r30)
    fadds f31, f31, f2
    lfs f2, 0x74(r30)
    lfs f0, 0x7c(r30)
    fmuls f1, f4, f1
    fmuls f2, f4, f2
    lfs f9, 0x50(r30)
    fmuls f0, f4, f0
    lfs f8, 0x5c(r30)
    fmr f25, f4
    lfs f24, lbl_80889098
    lfs f4, 0x60(r30)
    fadds f26, f26, f9
    fmuls f25, f25, f8
    lbz r31, 0x3c(r30)
    fadds f24, f24, f4
    stfs f7, 0x18(r1)
    stfs f6, 0x1c(r1)
    stfs f5, 0x20(r1)
    stfs f3, 0x8(r1)
    stfs f2, 0xc(r1)
    stfs f1, 0x10(r1)
    stfs f0, 0x14(r1)
    beq lbl_fn_8070B930_000006B4
    lbz r0, 0x38(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8070B930_0000069C
    lwz r3, 0x88(r30)
    lwz r4, 0x8c(r30)
    addi r0, r3, 0x3
    stw r0, 0x88(r30)
    cmpw r0, r4
    ble lbl_fn_8070B930_0000069C
    stw r4, 0x88(r30)
lbl_fn_8070B930_0000069C:
    addi r3, r30, 0x1c
    li r4, 0x3
    bl fn_8070F1D0
    mr r3, r30
    li r4, 0x3
    bl fn_8070CBC0
lbl_fn_8070B930_000006B4:
    addi r3, r30, 0x1c
    bl fn_8070F270
    fmr f23, f1
    lfs f22, lbl_8088909C
    mr r3, r30
    bl fn_8070CB90
    bl fn_80720E20
    lbz r0, 0x34(r30)
    fmuls f22, f22, f1
    cmplwi r0, 0x1
    bne lbl_fn_8070B930_000006F0
    lfs f0, lbl_808890A4
    fmuls f1, f0, f23
    bl fn_80720E20
    fmuls f22, f22, f1
lbl_fn_8070B930_000006F0:
    lwz r3, 0xd0(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8070B930_000007EC
    lwz r4, 0xb4(r30)
    bl fn_8071EB50
    lwz r3, 0xd0(r30)
    lwz r4, 0xb8(r30)
    bl fn_8071EB70
    fmr f1, f30
    lwz r3, 0xd0(r30)
    bl fn_8071EA80
    fmr f1, f22
    lwz r3, 0xd0(r30)
    fmr f2, f29
    bl fn_8071EAB0
    fmr f1, f28
    lwz r3, 0xd0(r30)
    bl fn_8071EB30
    fmr f1, f27
    lwz r3, 0xd0(r30)
    bl fn_8071EB90
    fmr f1, f31
    lwz r3, 0xd0(r30)
    bl fn_8071EBB0
    fmr f1, f26
    lwz r3, 0xd0(r30)
    bl fn_8071EBD0
    lwz r3, 0xd0(r30)
    lbz r4, 0x3b(r30)
    lfs f1, 0x54(r30)
    bl fn_8071EBF0
    lwz r3, 0xd0(r30)
    mr r4, r31
    bl fn_8071EC60
    lwz r3, 0xd0(r30)
    lwz r4, 0x58(r30)
    bl fn_8071ECA0
    fmr f1, f25
    lwz r3, 0xd0(r30)
    bl fn_8071ECC0
    fmr f1, f24
    lwz r3, 0xd0(r30)
    bl fn_8071ECF0
    addi r31, r1, 0x18
    li r29, 0x0
lbl_fn_8070B930_000007A4:
    lwz r3, 0xd0(r30)
    mr r4, r29
    lfs f1, 0x0(r31)
    bl fn_8071ED30
    addi r29, r29, 0x1
    addi r31, r31, 0x4
    cmpwi r29, 0x3
    blt lbl_fn_8070B930_000007A4
    addi r31, r1, 0x8
    li r29, 0x0
lbl_fn_8070B930_000007CC:
    lwz r3, 0xd0(r30)
    mr r4, r29
    lfs f1, 0x0(r31)
    bl fn_8071ED70
    addi r29, r29, 0x1
    addi r31, r31, 0x4
    cmpwi r29, 0x4
    blt lbl_fn_8070B930_000007CC
lbl_fn_8070B930_000007EC:
    lwz r0, 0xf4(r1)
    psq_l f31, 0xe8(r1), 0, 0
    lfd f31, 0xe0(r1)
    psq_l f30, 0xd8(r1), 0, 0
    lfd f30, 0xd0(r1)
    psq_l f29, 0xc8(r1), 0, 0
    lfd f29, 0xc0(r1)
    psq_l f28, 0xb8(r1), 0, 0
    lfd f28, 0xb0(r1)
    psq_l f27, 0xa8(r1), 0, 0
    lfd f27, 0xa0(r1)
    psq_l f26, 0x98(r1), 0, 0
    lfd f26, 0x90(r1)
    psq_l f25, 0x88(r1), 0, 0
    lfd f25, 0x80(r1)
    psq_l f24, 0x78(r1), 0, 0
    lfd f24, 0x70(r1)
    psq_l f23, 0x68(r1), 0, 0
    lfd f23, 0x60(r1)
    psq_l f22, 0x58(r1), 0, 0
    lfd f22, 0x50(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    mtlr r0
    addi r1, r1, 0xf0
    blr
}

asm void fn_8070C010(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r6
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    stw r5, 0xb0(r3)
    addi r3, r3, 0x1c
    bl fn_8070F1B0
    lfs f1, lbl_808890C0
    mr r3, r29
    bl fn_8070CB70
    li r0, 0x0
    stw r0, 0x88(r29)
    lwz r3, 0xd0(r29)
    mr r4, r30
    mr r5, r31
    bl fn_8071E750
    lwz r3, 0xd0(r29)
    bl fn_8071E950
    li r0, 0x1
    stb r0, 0x36(r29)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8070C090(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x0(r3)
    cmpwi r0, 0x4
    beq lbl_fn_8070C090_00000928
    lwz r4, 0xd0(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8070C090_00000920
    lbz r0, 0x39(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8070C090_00000920
    mr r3, r4
    li r4, 0x1
    bl fn_8071EE00
lbl_fn_8070C090_00000920:
    li r0, 0x4
    stw r0, 0x0(r31)
lbl_fn_8070C090_00000928:
    li r0, 0x0
    stb r0, 0x35(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8070C100(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lbz r0, 0x3a(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8070C100_000009AC
    lwz r0, 0x0(r3)
    cmpwi r0, 0x4
    beq lbl_fn_8070C100_000009A4
    lwz r4, 0xd0(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8070C100_0000099C
    lbz r0, 0x39(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8070C100_0000099C
    mr r3, r4
    li r4, 0x1
    bl fn_8071EE00
lbl_fn_8070C100_0000099C:
    li r0, 0x4
    stw r0, 0x0(r31)
lbl_fn_8070C100_000009A4:
    li r0, 0x0
    stb r0, 0x35(r31)
lbl_fn_8070C100_000009AC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8070C180(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0xd0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8070C180_00000AD8
    mr r3, r0
    bl fn_8071E970
    lwz r3, 0xd0(r30)
    bl fn_8071E680
    lwz r12, 0xc0(r30)
    li r0, 0x0
    stw r0, 0xd0(r30)
    cmpwi r12, 0x0
    stb r0, 0x35(r30)
    stb r0, 0x36(r30)
    beq lbl_fn_8070C180_00000A30
    mr r3, r30
    lwz r5, 0xc4(r30)
    li r4, 0x0
    mtctr r12
    bctrl
lbl_fn_8070C180_00000A30:
    lwz r3, 0xc8(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8070C180_00000A50
    lwz r12, 0x0(r3)
    lwz r4, 0xcc(r30)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
lbl_fn_8070C180_00000A50:
    lbz r0, 0x37(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8070C180_00000AD8
    li r7, 0x0
    stb r7, 0x37(r30)
    lbz r0, lbl_808804B8
    extsb. r0, r0
    bne lbl_fn_8070C180_00000AB0
    lis r6, lbl_80862F78@ha
    lis r4, fn_8070B530@ha
    addi r3, r6, lbl_80862F78@l
    lis r5, lbl_80862F68@ha
    addi r0, r3, 0x8
    stw r7, lbl_80862F78@l(r6)
    addi r4, r4, fn_8070B530@l
    addi r5, r5, lbl_80862F68@l
    stw r7, 0x4(r3)
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
    stb r7, 0x10(r3)
    stw r7, 0x14(r3)
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_808804B8
lbl_fn_8070C180_00000AB0:
    lis r31, lbl_80862F78@ha
    addi r4, r30, 0xd8
    addi r31, r31, lbl_80862F78@l
    addi r3, r31, 0x4
    bl fn_807252D0
    cmpwi r30, 0x0
    beq lbl_fn_8070C180_00000AD8
    mr r3, r31
    mr r4, r30
    bl fn_8070F130
lbl_fn_8070C180_00000AD8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8070C2B0(void)
{
    nofralloc
    lwz r0, 0x88(r3)
    lwz r5, 0x8c(r3)
    add r0, r0, r4
    stw r0, 0x88(r3)
    cmpw r0, r5
    blelr
    stw r5, 0x88(r3)
    blr
}

asm void fn_8070C2D0(void)
{
    nofralloc
    li r0, 0x0
    stfs f1, 0x84(r3)
    stw r4, 0x8c(r3)
    stb r5, 0x38(r3)
    stw r0, 0x88(r3)
    blr
}

asm void fn_8070C2F0(void)
{
    nofralloc
    stb r4, 0x3b(r3)
    stfs f1, 0x54(r3)
    blr
}

asm void fn_8070C300(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r5
    beq lbl_fn_8070C300_00000B88
    cmpwi r4, 0x1
    beq lbl_fn_8070C300_00000B94
    cmpwi r4, 0x2
    beq lbl_fn_8070C300_00000BA0
    cmpwi r4, 0x3
    beq lbl_fn_8070C300_00000BA8
    b lbl_fn_8070C300_00000BAC
lbl_fn_8070C300_00000B88:
    li r31, 0x2
    bl fn_8071E680
    b lbl_fn_8070C300_00000BAC
lbl_fn_8070C300_00000B94:
    li r31, 0x3
    bl fn_8071E680
    b lbl_fn_8070C300_00000BAC
lbl_fn_8070C300_00000BA0:
    li r31, 0x1
    b lbl_fn_8070C300_00000BAC
lbl_fn_8070C300_00000BA8:
    li r31, 0x1
lbl_fn_8070C300_00000BAC:
    lwz r12, 0xc0(r30)
    cmpwi r12, 0x0
    beq lbl_fn_8070C300_00000BCC
    mr r3, r30
    mr r4, r31
    lwz r5, 0xc4(r30)
    mtctr r12
    bctrl
lbl_fn_8070C300_00000BCC:
    lwz r3, 0xc8(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8070C300_00000BEC
    lwz r12, 0x0(r3)
    lwz r4, 0xcc(r30)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
lbl_fn_8070C300_00000BEC:
    li r7, 0x0
    stw r7, 0xd0(r30)
    stb r7, 0x35(r30)
    stb r7, 0x36(r30)
    stb r7, 0x37(r30)
    lbz r0, lbl_808804B8
    extsb. r0, r0
    bne lbl_fn_8070C300_00000C4C
    lis r6, lbl_80862F78@ha
    lis r4, fn_8070B530@ha
    addi r3, r6, lbl_80862F78@l
    lis r5, lbl_80862F68@ha
    addi r0, r3, 0x8
    stw r7, lbl_80862F78@l(r6)
    addi r4, r4, fn_8070B530@l
    addi r5, r5, lbl_80862F68@l
    stw r7, 0x4(r3)
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
    stb r7, 0x10(r3)
    stw r7, 0x14(r3)
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_808804B8
lbl_fn_8070C300_00000C4C:
    lis r31, lbl_80862F78@ha
    addi r4, r30, 0xd8
    addi r31, r31, lbl_80862F78@l
    addi r3, r31, 0x4
    bl fn_807252D0
    cmpwi r30, 0x0
    beq lbl_fn_8070C300_00000C74
    mr r3, r31
    mr r4, r30
    bl fn_8070F130
lbl_fn_8070C300_00000C74:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8070C440(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    lbz r0, lbl_808804B8
    mr r24, r3
    mr r25, r4
    mr r26, r5
    extsb. r0, r0
    mr r27, r6
    mr r28, r7
    bne lbl_fn_8070C440_00000D04
    lis r6, lbl_80862F78@ha
    li r0, 0x0
    addi r3, r6, lbl_80862F78@l
    lis r4, fn_8070B530@ha
    addi r7, r3, 0x8
    lis r5, lbl_80862F68@ha
    stw r0, lbl_80862F78@l(r6)
    addi r4, r4, fn_8070B530@l
    addi r5, r5, lbl_80862F68@l
    stw r0, 0x4(r3)
    stw r7, 0x8(r3)
    stw r7, 0xc(r3)
    stb r0, 0x10(r3)
    stw r0, 0x14(r3)
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_808804B8
lbl_fn_8070C440_00000D04:
    lis r31, lbl_80862F78@ha
    addi r31, r31, lbl_80862F78@l
    mr r3, r31
    bl fn_8070F0D0
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_8070C440_00000D28
    li r30, 0x0
    b lbl_fn_8070C440_00000D70
lbl_fn_8070C440_00000D28:
    beq lbl_fn_8070C440_00000D70
    bl fn_8070CAE0
    addi r3, r30, 0x1c
    bl fn_8070F180
    li r0, 0x0
    stw r0, 0x2c(r30)
    lfs f0, lbl_80889098
    stfs f0, 0x30(r30)
    stb r0, 0x35(r30)
    stb r0, 0x36(r30)
    stb r0, 0x37(r30)
    stb r0, 0xa0(r30)
    stb r0, 0xa1(r30)
    sth r0, 0xa2(r30)
    sth r0, 0xa4(r30)
    stw r0, 0xd0(r30)
    stw r0, 0xd8(r30)
    stw r0, 0xdc(r30)
lbl_fn_8070C440_00000D70:
    addi r0, r31, 0x8
    addi r29, r30, 0xd8
    stw r0, 0x8(r1)
    mr r5, r29
    addi r3, r31, 0x4
    addi r4, r1, 0x8
    bl fn_807252A0
    cmpwi r30, 0x0
    bne lbl_fn_8070C440_00000D9C
    li r3, 0x0
    b lbl_fn_8070C440_00000E60
lbl_fn_8070C440_00000D9C:
    li r31, 0x1
    stb r31, 0x37(r30)
    bl fn_807204D0
    lis r7, fn_8070C300@ha
    mr r4, r24
    mr r5, r25
    mr r6, r26
    mr r8, r30
    addi r7, r7, fn_8070C300@l
    bl fn_80720760
    cmpwi r3, 0x0
    bne lbl_fn_8070C440_00000E48
    lbz r0, lbl_808804B8
    extsb. r0, r0
    bne lbl_fn_8070C440_00000E18
    lis r6, lbl_80862F78@ha
    li r0, 0x0
    addi r3, r6, lbl_80862F78@l
    lis r4, fn_8070B530@ha
    addi r7, r3, 0x8
    lis r5, lbl_80862F68@ha
    stw r0, lbl_80862F78@l(r6)
    addi r4, r4, fn_8070B530@l
    addi r5, r5, lbl_80862F68@l
    stw r0, 0x4(r3)
    stw r7, 0x8(r3)
    stw r7, 0xc(r3)
    stb r0, 0x10(r3)
    stw r0, 0x14(r3)
    bl __register_global_object
    stb r31, lbl_808804B8
lbl_fn_8070C440_00000E18:
    lis r31, lbl_80862F78@ha
    mr r4, r29
    addi r31, r31, lbl_80862F78@l
    addi r3, r31, 0x4
    bl fn_807252D0
    cmpwi r30, 0x0
    beq lbl_fn_8070C440_00000E40
    mr r3, r31
    mr r4, r30
    bl fn_8070F130
lbl_fn_8070C440_00000E40:
    li r3, 0x0
    b lbl_fn_8070C440_00000E60
lbl_fn_8070C440_00000E48:
    stw r3, 0xd0(r30)
    mr r3, r30
    mr r4, r27
    mr r5, r28
    bl fn_8070B820
    mr r3, r30
lbl_fn_8070C440_00000E60:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8070C630(void)
{
    nofralloc
    cmpwi r3, 0x0
    beqlr
    li r0, 0x0
    stw r0, 0xc0(r3)
    stw r0, 0xc4(r3)
    blr
}

asm void fn_8070C650(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    bl OSDisableInterrupts
    lbz r0, lbl_808804C0
    mr r31, r3
    extsb. r0, r0
    bne lbl_fn_8070C650_00000EFC
    lis r3, lbl_80862FA4@ha
    lis r4, fn_8070C6E0@ha
    addi r3, r3, lbl_80862FA4@l
    li r0, 0x0
    addi r6, r3, 0x4
    lis r5, lbl_80862F98@ha
    stw r0, 0x0(r3)
    addi r4, r4, fn_8070C6E0@l
    addi r5, r5, lbl_80862F98@l
    stw r6, 0x4(r3)
    stw r6, 0x8(r3)
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_808804C0
lbl_fn_8070C650_00000EFC:
    lis r30, lbl_80862FA4@ha
    mr r3, r31
    addi r30, r30, lbl_80862FA4@l
    bl OSRestoreInterrupts
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8070C6E0(void)
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
    beq lbl_fn_8070C6E0_00000F6C
    beq lbl_fn_8070C6E0_00000F5C
    li r4, 0x0
    bl fn_80725170
lbl_fn_8070C6E0_00000F5C:
    cmpwi r31, 0x0
    ble lbl_fn_8070C6E0_00000F6C
    mr r3, r30
    bl dtor_80084684
lbl_fn_8070C6E0_00000F6C:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8070C740(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    mr r5, r4
    stw r0, 0x14(r1)
    addi r0, r3, 0x4
    addi r4, r1, 0x8
    stw r0, 0x8(r1)
    bl fn_807252A0
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8070C770(void)
{
    nofralloc
    b fn_807252D0
}

asm void fn_8070C780(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_22
    mr r31, r4
    add r30, r4, r5
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    bl OSDisableInterrupts
    lbz r0, lbl_808804C0
    mr r29, r3
    extsb. r0, r0
    bne lbl_fn_8070C780_00001040
    lis r3, lbl_80862FA4@ha
    lis r4, fn_8070C6E0@ha
    addi r3, r3, lbl_80862FA4@l
    li r0, 0x0
    addi r6, r3, 0x4
    lis r5, lbl_80862F98@ha
    stw r0, 0x0(r3)
    addi r4, r4, fn_8070C6E0@l
    addi r5, r5, lbl_80862F98@l
    stw r6, 0x4(r3)
    stw r6, 0x8(r3)
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_808804C0
lbl_fn_8070C780_00001040:
    lis r4, lbl_80862FA4@ha
    mr r3, r29
    addi r22, r4, lbl_80862FA4@l
    bl OSRestoreInterrupts
    lwz r29, 0x4(r22)
    addi r27, r22, 0x4
    li r23, 0x0
    lis r24, fn_8070C6E0@ha
    lis r25, lbl_80862F98@ha
    li r26, 0x1
    b lbl_fn_8070C780_0000108C
lbl_fn_8070C780_0000106C:
    lwz r12, 0x8(r29)
    mr r3, r29
    mr r4, r31
    mr r5, r30
    lwz r12, 0xc(r12)
    lwz r29, 0x0(r29)
    mtctr r12
    bctrl
lbl_fn_8070C780_0000108C:
    bl OSDisableInterrupts
    lbz r0, lbl_808804C0
    mr r28, r3
    extsb. r0, r0
    bne lbl_fn_8070C780_000010C4
    addi r0, r22, 0x4
    stw r23, 0x0(r22)
    mr r3, r22
    addi r4, r24, fn_8070C6E0@l
    stw r0, 0x4(r22)
    addi r5, r25, lbl_80862F98@l
    stw r0, 0x8(r22)
    bl __register_global_object
    stb r26, lbl_808804C0
lbl_fn_8070C780_000010C4:
    mr r3, r28
    bl OSRestoreInterrupts
    cmplw r29, r27
    bne lbl_fn_8070C780_0000106C
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    addi r11, r1, 0x30
    bl _restgpr_22
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8070C8B0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_22
    mr r31, r4
    add r30, r4, r5
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    bl OSDisableInterrupts
    lbz r0, lbl_808804C0
    mr r29, r3
    extsb. r0, r0
    bne lbl_fn_8070C8B0_00001170
    lis r3, lbl_80862FA4@ha
    lis r4, fn_8070C6E0@ha
    addi r3, r3, lbl_80862FA4@l
    li r0, 0x0
    addi r6, r3, 0x4
    lis r5, lbl_80862F98@ha
    stw r0, 0x0(r3)
    addi r4, r4, fn_8070C6E0@l
    addi r5, r5, lbl_80862F98@l
    stw r6, 0x4(r3)
    stw r6, 0x8(r3)
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_808804C0
lbl_fn_8070C8B0_00001170:
    lis r4, lbl_80862FA4@ha
    mr r3, r29
    addi r22, r4, lbl_80862FA4@l
    bl OSRestoreInterrupts
    lwz r29, 0x4(r22)
    addi r27, r22, 0x4
    li r23, 0x0
    lis r24, fn_8070C6E0@ha
    lis r25, lbl_80862F98@ha
    li r26, 0x1
    b lbl_fn_8070C8B0_000011BC
lbl_fn_8070C8B0_0000119C:
    lwz r12, 0x8(r29)
    mr r3, r29
    mr r4, r31
    mr r5, r30
    lwz r12, 0x10(r12)
    lwz r29, 0x0(r29)
    mtctr r12
    bctrl
lbl_fn_8070C8B0_000011BC:
    bl OSDisableInterrupts
    lbz r0, lbl_808804C0
    mr r28, r3
    extsb. r0, r0
    bne lbl_fn_8070C8B0_000011F4
    addi r0, r22, 0x4
    stw r23, 0x0(r22)
    mr r3, r22
    addi r4, r24, fn_8070C6E0@l
    stw r0, 0x4(r22)
    addi r5, r25, lbl_80862F98@l
    stw r0, 0x8(r22)
    bl __register_global_object
    stb r26, lbl_808804C0
lbl_fn_8070C8B0_000011F4:
    mr r3, r28
    bl OSRestoreInterrupts
    cmplw r29, r27
    bne lbl_fn_8070C8B0_0000119C
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    addi r11, r1, 0x30
    bl _restgpr_22
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8070C9E0(void)
{
    nofralloc
    cmpwi r3, 0x0
    li r4, 0x0
    beq lbl_fn_8070C9E0_00001264
    cmpwi r3, 0x1
    beq lbl_fn_8070C9E0_0000126C
    cmpwi r3, 0x2
    beq lbl_fn_8070C9E0_00001274
    cmpwi r3, 0x3
    beq lbl_fn_8070C9E0_0000127C
    cmpwi r3, 0x4
    beq lbl_fn_8070C9E0_00001284
    cmpwi r3, 0x5
    beq lbl_fn_8070C9E0_0000128C
    b lbl_fn_8070C9E0_00001290
lbl_fn_8070C9E0_00001264:
    li r4, 0x1f
    b lbl_fn_8070C9E0_00001290
lbl_fn_8070C9E0_0000126C:
    li r4, 0x1
    b lbl_fn_8070C9E0_00001290
lbl_fn_8070C9E0_00001274:
    li r4, 0x2
    b lbl_fn_8070C9E0_00001290
lbl_fn_8070C9E0_0000127C:
    li r4, 0x4
    b lbl_fn_8070C9E0_00001290
lbl_fn_8070C9E0_00001284:
    li r4, 0x8
    b lbl_fn_8070C9E0_00001290
lbl_fn_8070C9E0_0000128C:
    li r4, 0x10
lbl_fn_8070C9E0_00001290:
    lwz r0, lbl_8087EDF8
    and r0, r4, r0
    subf r0, r4, r0
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

asm void fn_8070CA60(void)
{
    nofralloc
    cmpwi r3, 0x0
    beq lbl_fn_8070CA60_000012C8
    cmpwi r3, 0x1
    beq lbl_fn_8070CA60_000012D0
    cmpwi r3, 0x2
    beq lbl_fn_8070CA60_000012D8
    b lbl_fn_8070CA60_000012E0
lbl_fn_8070CA60_000012C8:
    li r3, 0x1
    blr
lbl_fn_8070CA60_000012D0:
    li r3, 0x2
    blr
lbl_fn_8070CA60_000012D8:
    li r3, 0x3
    blr
lbl_fn_8070CA60_000012E0:
    li r3, 0x1
    blr
}

asm void fn_8070CAA0(void)
{
    nofralloc
    cmpwi r3, 0x0
    beq lbl_fn_8070CAA0_00001308
    cmpwi r3, 0x1
    beq lbl_fn_8070CAA0_00001310
    cmpwi r3, 0x2
    beq lbl_fn_8070CAA0_00001318
    b lbl_fn_8070CAA0_00001320
lbl_fn_8070CAA0_00001308:
    la r3, lbl_8087EDFC
    blr
lbl_fn_8070CAA0_00001310:
    la r3, lbl_8087EE00
    blr
lbl_fn_8070CAA0_00001318:
    la r3, lbl_8087EE08
    blr
lbl_fn_8070CAA0_00001320:
    la r3, lbl_8087EE10
    blr
}

asm void fn_8070CAE0(void)
{
    nofralloc
    lfs f1, lbl_808890C0
    li r4, 0x0
    lfs f0, lbl_808890C8
    lis r5, lbl_8076CDA0@ha
    addi r5, r5, lbl_8076CDA0@l
    lfs f2, lbl_808890C4
    fmuls f0, f0, f1
    lfs f1, 0x1fc(r5)
    li r0, 0x7f
    stfs f1, 0x10(r3)
    sth r4, 0x16(r3)
    stfs f2, 0x8(r3)
    stb r0, 0x14(r3)
    stfs f2, 0xc(r3)
    stfs f0, 0x4(r3)
    stw r4, 0x0(r3)
    blr
}

asm void fn_8070CB30(void)
{
    nofralloc
    lfs f0, lbl_808890C8
    li r4, 0x0
    lis r5, lbl_8076CDA0@ha
    lfs f2, lbl_808890C4
    fmuls f0, f0, f1
    addi r5, r5, lbl_8076CDA0@l
    lfs f1, 0x1fc(r5)
    li r0, 0x7f
    stfs f1, 0x10(r3)
    sth r4, 0x16(r3)
    stfs f2, 0x8(r3)
    stb r0, 0x14(r3)
    stfs f2, 0xc(r3)
    stfs f0, 0x4(r3)
    stw r4, 0x0(r3)
    blr
}

asm void fn_8070CB70(void)
{
    nofralloc
    lfs f0, lbl_808890C8
    li r0, 0x0
    stw r0, 0x0(r3)
    fmuls f0, f0, f1
    stfs f0, 0x4(r3)
    blr
}

asm void fn_8070CB90(void)
{
    nofralloc
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8070CB90_000013F8
    lfs f1, lbl_808890CC
    lfs f0, 0x10(r3)
    fcmpu cr0, f1, f0
    beqlr
lbl_fn_8070CB90_000013F8:
    lfs f1, 0x4(r3)
    lfs f0, lbl_808890C8
    fdivs f1, f1, f0
    blr
}

asm void fn_8070CBC0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8070CBC0_00001438
    cmpwi r0, 0x1
    beq lbl_fn_8070CBC0_00001488
    cmpwi r0, 0x2
    beq lbl_fn_8070CBC0_000014C0
    cmpwi r0, 0x4
    beq lbl_fn_8070CBC0_00001530
    b lbl_fn_8070CBC0_00001560
lbl_fn_8070CBC0_00001438:
    lfs f0, lbl_808890D0
    mtctr r4
    cmpwi r4, 0x0
    ble lbl_fn_8070CBC0_00001560
    nop
lbl_fn_8070CBC0_0000144C:
    lfs f2, 0x4(r3)
    lfs f1, 0x10(r3)
    fmuls f1, f2, f1
    stfs f1, 0x4(r3)
    fcmpo cr0, f1, f0
    ble lbl_fn_8070CBC0_00001480
    lfs f0, lbl_808890CC
    li r4, 0x1
    lhz r0, 0x16(r3)
    stfs f0, 0x4(r3)
    stw r4, 0x0(r3)
    sth r0, 0x18(r3)
    b lbl_fn_8070CBC0_00001560
lbl_fn_8070CBC0_00001480:
    bdnz lbl_fn_8070CBC0_0000144C
    b lbl_fn_8070CBC0_00001560
lbl_fn_8070CBC0_00001488:
    lhz r6, 0x18(r3)
    cmpw r4, r6
    bge lbl_fn_8070CBC0_000014A0
    subf r0, r4, r6
    sth r0, 0x18(r3)
    b lbl_fn_8070CBC0_000014B4
lbl_fn_8070CBC0_000014A0:
    li r5, 0x0
    li r0, 0x2
    sth r5, 0x18(r3)
    subf r4, r6, r4
    stw r0, 0x0(r3)
lbl_fn_8070CBC0_000014B4:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x2
    bne lbl_fn_8070CBC0_00001560
lbl_fn_8070CBC0_000014C0:
    lis r5, 0x4330
    xoris r0, r4, 0x8000
    stw r0, 0x14(r1)
    lis r4, lbl_8076CCA0@ha
    lbz r6, 0x14(r3)
    addi r4, r4, lbl_8076CCA0@l
    stw r5, 0x10(r1)
    slwi r0, r6, 1
    lfd f3, lbl_808890D8
    lfd f0, 0x10(r1)
    lhax r0, r4, r0
    fsubs f2, f0, f3
    lfs f1, 0x8(r3)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfs f0, 0x4(r3)
    fmuls f1, f1, f2
    stw r5, 0x8(r1)
    fsubs f0, f0, f1
    lfd f2, 0x8(r1)
    fsubs f1, f2, f3
    stfs f0, 0x4(r3)
    fcmpo cr0, f0, f1
    bge lbl_fn_8070CBC0_00001560
    li r0, 0x3
    stfs f1, 0x4(r3)
    stw r0, 0x0(r3)
    b lbl_fn_8070CBC0_00001560
lbl_fn_8070CBC0_00001530:
    xoris r4, r4, 0x8000
    lis r0, 0x4330
    stw r4, 0x14(r1)
    lfd f3, lbl_808890D8
    stw r0, 0x10(r1)
    lfs f1, 0xc(r3)
    lfd f2, 0x10(r1)
    lfs f0, 0x4(r3)
    fsubs f2, f2, f3
    fmuls f1, f1, f2
    fsubs f0, f0, f1
    stfs f0, 0x4(r3)
lbl_fn_8070CBC0_00001560:
    addi r1, r1, 0x20
    blr
}

asm void fn_8070CD20(void)
{
    nofralloc
    lis r5, lbl_8076CDA0@ha
    slwi r0, r4, 2
    addi r5, r5, lbl_8076CDA0@l
    lfsx f0, r5, r0
    stfs f0, 0x10(r3)
    blr
}

asm void fn_8070CD40(void)
{
    nofralloc
    addi r0, r4, 0x1
    mullw r0, r0, r0
    srawi r0, r0, 2
    addze r0, r0
    sth r0, 0x16(r3)
    blr
}

asm void fn_8070CD60(void)
{
    nofralloc
    cmpwi r4, 0x7f
    stwu r1, -0x20(r1)
    bne lbl_fn_8070CD60_000015C0
    lfs f0, lbl_808890C4
    b lbl_fn_8070CD60_00001640
lbl_fn_8070CD60_000015C0:
    cmpwi r4, 0x7e
    bne lbl_fn_8070CD60_000015D0
    lfs f0, lbl_808890E0
    b lbl_fn_8070CD60_00001640
lbl_fn_8070CD60_000015D0:
    cmpwi r4, 0x32
    bge lbl_fn_8070CD60_00001610
    slwi r4, r4, 1
    lis r0, 0x4330
    addi r4, r4, 0x1
    stw r0, 0x8(r1)
    xoris r0, r4, 0x8000
    lfd f3, lbl_808890D8
    stw r0, 0xc(r1)
    lfs f1, lbl_808890E4
    lfd f2, 0x8(r1)
    lfs f0, lbl_808890E8
    fsubs f2, f2, f3
    fmuls f1, f2, f1
    fdivs f0, f1, f0
    b lbl_fn_8070CD60_00001640
lbl_fn_8070CD60_00001610:
    subfic r4, r4, 0x7e
    lis r0, 0x4330
    xoris r4, r4, 0x8000
    stw r4, 0x14(r1)
    lfd f3, lbl_808890D8
    stw r0, 0x10(r1)
    lfs f1, lbl_808890EC
    lfd f2, 0x10(r1)
    lfs f0, lbl_808890E8
    fsubs f2, f2, f3
    fdivs f1, f1, f2
    fdivs f0, f1, f0
lbl_fn_8070CD60_00001640:
    stfs f0, 0x8(r3)
    addi r1, r1, 0x20
    blr
}

asm void fn_8070CE00(void)
{
    nofralloc
    stb r4, 0x14(r3)
    blr
}

asm void fn_8070CE10(void)
{
    nofralloc
    cmpwi r4, 0x7f
    stwu r1, -0x20(r1)
    bne lbl_fn_8070CE10_00001670
    lfs f0, lbl_808890C4
    b lbl_fn_8070CE10_000016F0
lbl_fn_8070CE10_00001670:
    cmpwi r4, 0x7e
    bne lbl_fn_8070CE10_00001680
    lfs f0, lbl_808890E0
    b lbl_fn_8070CE10_000016F0
lbl_fn_8070CE10_00001680:
    cmpwi r4, 0x32
    bge lbl_fn_8070CE10_000016C0
    slwi r4, r4, 1
    lis r0, 0x4330
    addi r4, r4, 0x1
    stw r0, 0x8(r1)
    xoris r0, r4, 0x8000
    lfd f3, lbl_808890D8
    stw r0, 0xc(r1)
    lfs f1, lbl_808890E4
    lfd f2, 0x8(r1)
    lfs f0, lbl_808890E8
    fsubs f2, f2, f3
    fmuls f1, f2, f1
    fdivs f0, f1, f0
    b lbl_fn_8070CE10_000016F0
lbl_fn_8070CE10_000016C0:
    subfic r4, r4, 0x7e
    lis r0, 0x4330
    xoris r4, r4, 0x8000
    stw r4, 0x14(r1)
    lfd f3, lbl_808890D8
    stw r0, 0x10(r1)
    lfs f1, lbl_808890EC
    lfd f2, 0x10(r1)
    lfs f0, lbl_808890E8
    fsubs f2, f2, f3
    fdivs f1, f1, f2
    fdivs f0, f1, f0
lbl_fn_8070CE10_000016F0:
    stfs f0, 0xc(r3)
    addi r1, r1, 0x20
    blr
}

asm void fn_8070CEB0(void)
{
    nofralloc
    addi r5, r3, 0x4
    li r4, 0x0
    li r0, 0x1
    stw r4, 0x0(r3)
    stw r5, 0x4(r3)
    stw r5, 0x8(r3)
    stw r0, 0xc(r3)
    blr
}

asm void fn_8070CED0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    beq lbl_fn_8070CED0_00001794
    lwz r31, 0x4(r3)
    addi r30, r3, 0x4
    b lbl_fn_8070CED0_00001768
lbl_fn_8070CED0_00001754:
    mr r3, r31
    lwz r31, 0x0(r31)
    mr r4, r28
    subi r3, r3, 0x108
    bl fn_8070ABD0
lbl_fn_8070CED0_00001768:
    cmplw r31, r30
    bne lbl_fn_8070CED0_00001754
    cmpwi r28, 0x0
    beq lbl_fn_8070CED0_00001784
    mr r3, r28
    li r4, 0x0
    bl fn_80725170
lbl_fn_8070CED0_00001784:
    cmpwi r29, 0x0
    ble lbl_fn_8070CED0_00001794
    mr r3, r28
    bl dtor_80084684
lbl_fn_8070CED0_00001794:
    lwz r31, 0x1c(r1)
    mr r3, r28
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8070CF70(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    addi r30, r3, 0x4
    stw r29, 0x14(r1)
    mr r29, r4
    lwz r31, 0x4(r3)
    b lbl_fn_8070CF70_000017F8
lbl_fn_8070CF70_000017E4:
    mr r3, r31
    lwz r31, 0x0(r31)
    mr r4, r29
    subi r3, r3, 0x108
    bl fn_8070ABB0
lbl_fn_8070CF70_000017F8:
    cmplw r31, r30
    bne lbl_fn_8070CF70_000017E4
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8070CFD0(void)
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
    stw r28, 0x10(r1)
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    lbz r3, 0x98(r30)
    lwz r0, 0x50(r30)
    add r3, r3, r0
    cmpwi r3, 0x7f
    ble lbl_fn_8070CFD0_00001868
    li r31, 0x7f
    b lbl_fn_8070CFD0_00001870
lbl_fn_8070CFD0_00001868:
    srawi r0, r3, 31
    andc r31, r3, r0
lbl_fn_8070CFD0_00001870:
    lwz r0, 0xc(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8070CFD0_00001890
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    li r3, 0x0
    b lbl_fn_8070CFD0_000019A0
lbl_fn_8070CFD0_00001890:
    addi r28, r29, 0x4
    b lbl_fn_8070CFD0_0000195C
lbl_fn_8070CFD0_00001898:
    lwz r4, 0x4(r29)
    li r6, 0x80
    li r3, 0x0
    b lbl_fn_8070CFD0_000018E8
    nop
lbl_fn_8070CFD0_000018AC:
    lbz r5, -0x70(r4)
    subi r7, r4, 0x108
    lwz r0, -0xb8(r4)
    add r5, r5, r0
    cmpwi r5, 0x7f
    ble lbl_fn_8070CFD0_000018CC
    li r0, 0x7f
    b lbl_fn_8070CFD0_000018D4
lbl_fn_8070CFD0_000018CC:
    srawi r0, r5, 31
    andc r0, r5, r0
lbl_fn_8070CFD0_000018D4:
    cmpw r6, r0
    ble lbl_fn_8070CFD0_000018E4
    mr r3, r7
    mr r6, r0
lbl_fn_8070CFD0_000018E4:
    lwz r4, 0x0(r4)
lbl_fn_8070CFD0_000018E8:
    cmplw r4, r28
    bne lbl_fn_8070CFD0_000018AC
    cmpwi r3, 0x0
    bne lbl_fn_8070CFD0_0000190C
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    li r3, 0x0
    b lbl_fn_8070CFD0_000019A0
lbl_fn_8070CFD0_0000190C:
    lbz r4, 0x98(r3)
    lwz r0, 0x50(r3)
    add r4, r4, r0
    cmpwi r4, 0x7f
    ble lbl_fn_8070CFD0_00001928
    li r0, 0x7f
    b lbl_fn_8070CFD0_00001930
lbl_fn_8070CFD0_00001928:
    srawi r0, r4, 31
    andc r0, r4, r0
lbl_fn_8070CFD0_00001930:
    cmpw r31, r0
    bge lbl_fn_8070CFD0_0000194C
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    li r3, 0x0
    b lbl_fn_8070CFD0_000019A0
lbl_fn_8070CFD0_0000194C:
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
lbl_fn_8070CFD0_0000195C:
    lwz r3, 0x0(r29)
    lwz r0, 0xc(r29)
    cmpw r3, r0
    bge lbl_fn_8070CFD0_00001898
    addi r0, r29, 0x4
    stw r0, 0x8(r1)
    mr r3, r29
    addi r4, r1, 0x8
    addi r5, r30, 0x108
    bl fn_807252A0
    mr r3, r30
    mr r4, r29
    bl fn_8070ABC0
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    li r3, 0x1
lbl_fn_8070CFD0_000019A0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8070D180(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x0(r3)
    stw r4, 0xc(r3)
    cmpw r0, r4
    ble lbl_fn_8070D180_00001A70
    addi r31, r3, 0x4
    b lbl_fn_8070D180_00001A60
lbl_fn_8070D180_000019FC:
    lwz r4, 0x4(r30)
    li r6, 0x80
    li r3, 0x0
    b lbl_fn_8070D180_00001A48
lbl_fn_8070D180_00001A0C:
    lbz r5, -0x70(r4)
    subi r7, r4, 0x108
    lwz r0, -0xb8(r4)
    add r5, r5, r0
    cmpwi r5, 0x7f
    ble lbl_fn_8070D180_00001A2C
    li r0, 0x7f
    b lbl_fn_8070D180_00001A34
lbl_fn_8070D180_00001A2C:
    srawi r0, r5, 31
    andc r0, r5, r0
lbl_fn_8070D180_00001A34:
    cmpw r6, r0
    ble lbl_fn_8070D180_00001A44
    mr r3, r7
    mr r6, r0
lbl_fn_8070D180_00001A44:
    lwz r4, 0x0(r4)
lbl_fn_8070D180_00001A48:
    cmplw r4, r31
    bne lbl_fn_8070D180_00001A0C
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
lbl_fn_8070D180_00001A60:
    lwz r3, 0x0(r30)
    lwz r0, 0xc(r30)
    cmpw r3, r0
    bgt lbl_fn_8070D180_000019FC
lbl_fn_8070D180_00001A70:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8070D240(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    addi r4, r4, 0x108
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_807252D0
    mr r3, r31
    mr r4, r30
    bl fn_8070ABD0
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8070D290(void)
{
    nofralloc
    lwz r5, 0xc(r3)
    cmpwi r5, 0x0
    bne lbl_fn_8070D290_00001AF0
    li r3, 0x0
    blr
lbl_fn_8070D290_00001AF0:
    lwz r0, 0x0(r3)
    cmpw r0, r5
    blt lbl_fn_8070D290_00001B9C
    lwz r5, 0x4(r3)
    addi r0, r3, 0x4
    li r8, 0x80
    li r7, 0x0
    b lbl_fn_8070D290_00001B50
    nop
lbl_fn_8070D290_00001B14:
    lbz r6, -0x70(r5)
    subi r9, r5, 0x108
    lwz r3, -0xb8(r5)
    add r6, r6, r3
    cmpwi r6, 0x7f
    ble lbl_fn_8070D290_00001B34
    li r3, 0x7f
    b lbl_fn_8070D290_00001B3C
lbl_fn_8070D290_00001B34:
    srawi r3, r6, 31
    andc r3, r6, r3
lbl_fn_8070D290_00001B3C:
    cmpw r8, r3
    ble lbl_fn_8070D290_00001B4C
    mr r7, r9
    mr r8, r3
lbl_fn_8070D290_00001B4C:
    lwz r5, 0x0(r5)
lbl_fn_8070D290_00001B50:
    cmplw r5, r0
    bne lbl_fn_8070D290_00001B14
    cmpwi r7, 0x0
    bne lbl_fn_8070D290_00001B68
    li r3, 0x0
    blr
lbl_fn_8070D290_00001B68:
    lbz r3, 0x98(r7)
    lwz r0, 0x50(r7)
    add r3, r3, r0
    cmpwi r3, 0x7f
    ble lbl_fn_8070D290_00001B84
    li r0, 0x7f
    b lbl_fn_8070D290_00001B8C
lbl_fn_8070D290_00001B84:
    srawi r0, r3, 31
    andc r0, r3, r0
lbl_fn_8070D290_00001B8C:
    cmpw r4, r0
    bge lbl_fn_8070D290_00001B9C
    li r3, 0x0
    blr
lbl_fn_8070D290_00001B9C:
    li r3, 0x1
    blr
}

asm void fn_8070D360(void)
{
    nofralloc
    addi r4, r3, 0x8
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r4, 0x8(r3)
    stw r4, 0xc(r3)
    blr
}

asm void fn_8070D380(void)
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
    beq lbl_fn_8070D380_00001CB8
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8070D380_00001C98
    beq lbl_fn_8070D380_00001C98
    addi r30, r3, 0x8
    b lbl_fn_8070D380_00001C70
lbl_fn_8070D380_00001C08:
    lwz r29, 0x4(r30)
    cmpwi r29, 0x0
    beq lbl_fn_8070D380_00001C64
    addi r31, r29, 0xc
    b lbl_fn_8070D380_00001C48
lbl_fn_8070D380_00001C1C:
    lwz r31, 0x4(r31)
    cmpwi r31, 0x0
    beq lbl_fn_8070D380_00001C48
    lwz r12, 0x10(r31)
    cmpwi r12, 0x0
    beq lbl_fn_8070D380_00001C48
    lwz r3, 0x8(r31)
    lwz r4, 0xc(r31)
    lwz r5, 0x14(r31)
    mtctr r12
    bctrl
lbl_fn_8070D380_00001C48:
    lwz r0, 0xc(r29)
    cmplw r31, r0
    bne lbl_fn_8070D380_00001C1C
    addic. r3, r29, 0x8
    beq lbl_fn_8070D380_00001C64
    li r4, 0x0
    bl fn_80725170
lbl_fn_8070D380_00001C64:
    mr r4, r29
    addi r3, r27, 0x4
    bl fn_807252D0
lbl_fn_8070D380_00001C70:
    lwz r0, 0x4(r27)
    cmpwi r0, 0x0
    bne lbl_fn_8070D380_00001C08
    lwz r3, 0x0(r27)
    li r4, 0x3
    bl fn_80619E90
    lwz r3, 0x0(r27)
    bl fn_80619D40
    li r0, 0x0
    stw r0, 0x0(r27)
lbl_fn_8070D380_00001C98:
    addic. r3, r27, 0x4
    beq lbl_fn_8070D380_00001CA8
    li r4, 0x0
    bl fn_80725170
lbl_fn_8070D380_00001CA8:
    cmpwi r28, 0x0
    ble lbl_fn_8070D380_00001CB8
    mr r3, r27
    bl dtor_80084684
lbl_fn_8070D380_00001CB8:
    addi r11, r1, 0x20
    mr r3, r27
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8070D490(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    lwz r0, 0x0(r3)
    mr r26, r3
    mr r27, r4
    mr r28, r5
    cmpwi r0, 0x0
    beq lbl_fn_8070D490_00001DB0
    beq lbl_fn_8070D490_00001DB0
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8070D490_00001D94
    addi r31, r3, 0x8
    b lbl_fn_8070D490_00001D88
lbl_fn_8070D490_00001D20:
    lwz r29, 0x4(r31)
    cmpwi r29, 0x0
    beq lbl_fn_8070D490_00001D7C
    addi r30, r29, 0xc
    b lbl_fn_8070D490_00001D60
lbl_fn_8070D490_00001D34:
    lwz r30, 0x4(r30)
    cmpwi r30, 0x0
    beq lbl_fn_8070D490_00001D60
    lwz r12, 0x10(r30)
    cmpwi r12, 0x0
    beq lbl_fn_8070D490_00001D60
    lwz r3, 0x8(r30)
    lwz r4, 0xc(r30)
    lwz r5, 0x14(r30)
    mtctr r12
    bctrl
lbl_fn_8070D490_00001D60:
    lwz r0, 0xc(r29)
    cmplw r30, r0
    bne lbl_fn_8070D490_00001D34
    addic. r3, r29, 0x8
    beq lbl_fn_8070D490_00001D7C
    li r4, 0x0
    bl fn_80725170
lbl_fn_8070D490_00001D7C:
    mr r4, r29
    addi r3, r26, 0x4
    bl fn_807252D0
lbl_fn_8070D490_00001D88:
    lwz r0, 0x4(r26)
    cmpwi r0, 0x0
    bne lbl_fn_8070D490_00001D20
lbl_fn_8070D490_00001D94:
    lwz r3, 0x0(r26)
    li r4, 0x3
    bl fn_80619E90
    lwz r3, 0x0(r26)
    bl fn_80619D40
    li r0, 0x0
    stw r0, 0x0(r26)
lbl_fn_8070D490_00001DB0:
    addi r0, r27, 0x3
    add r4, r27, r28
    clrrwi r3, r0, 2
    cmplw r3, r4
    ble lbl_fn_8070D490_00001DCC
    li r3, 0x0
    b lbl_fn_8070D490_00001E60
lbl_fn_8070D490_00001DCC:
    subf r4, r3, r4
    li r5, 0x0
    bl fn_80619CB0
    cmpwi r3, 0x0
    stw r3, 0x0(r26)
    bne lbl_fn_8070D490_00001DEC
    li r3, 0x0
    b lbl_fn_8070D490_00001E60
lbl_fn_8070D490_00001DEC:
    li r4, 0x14
    li r5, 0x4
    bl fn_80619D70
    cmpwi r3, 0x0
    bne lbl_fn_8070D490_00001E08
    li r0, 0x0
    b lbl_fn_8070D490_00001E4C
lbl_fn_8070D490_00001E08:
    mr r5, r3
    beq lbl_fn_8070D490_00001E34
    li r0, 0x0
    stw r0, 0x0(r3)
    addi r4, r3, 0xc
    stw r0, 0x4(r3)
    stw r0, 0xc(r3)
    stw r0, 0x10(r3)
    stw r0, 0x8(r3)
    stw r4, 0xc(r3)
    stw r4, 0x10(r3)
lbl_fn_8070D490_00001E34:
    addi r0, r26, 0x8
    stw r0, 0x8(r1)
    addi r3, r26, 0x4
    addi r4, r1, 0x8
    bl fn_807252A0
    li r0, 0x1
lbl_fn_8070D490_00001E4C:
    cmpwi r0, 0x0
    bne lbl_fn_8070D490_00001E5C
    li r3, 0x0
    b lbl_fn_8070D490_00001E60
lbl_fn_8070D490_00001E5C:
    li r3, 0x1
lbl_fn_8070D490_00001E60:
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8070D630(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8070D630_00001F4C
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8070D630_00001F30
    addi r31, r3, 0x8
    b lbl_fn_8070D630_00001F24
lbl_fn_8070D630_00001EBC:
    lwz r29, 0x4(r31)
    cmpwi r29, 0x0
    beq lbl_fn_8070D630_00001F18
    addi r30, r29, 0xc
    b lbl_fn_8070D630_00001EFC
lbl_fn_8070D630_00001ED0:
    lwz r30, 0x4(r30)
    cmpwi r30, 0x0
    beq lbl_fn_8070D630_00001EFC
    lwz r12, 0x10(r30)
    cmpwi r12, 0x0
    beq lbl_fn_8070D630_00001EFC
    lwz r3, 0x8(r30)
    lwz r4, 0xc(r30)
    lwz r5, 0x14(r30)
    mtctr r12
    bctrl
lbl_fn_8070D630_00001EFC:
    lwz r0, 0xc(r29)
    cmplw r30, r0
    bne lbl_fn_8070D630_00001ED0
    addic. r3, r29, 0x8
    beq lbl_fn_8070D630_00001F18
    li r4, 0x0
    bl fn_80725170
lbl_fn_8070D630_00001F18:
    mr r4, r29
    addi r3, r28, 0x4
    bl fn_807252D0
lbl_fn_8070D630_00001F24:
    lwz r0, 0x4(r28)
    cmpwi r0, 0x0
    bne lbl_fn_8070D630_00001EBC
lbl_fn_8070D630_00001F30:
    lwz r3, 0x0(r28)
    li r4, 0x3
    bl fn_80619E90
    lwz r3, 0x0(r28)
    bl fn_80619D40
    li r0, 0x0
    stw r0, 0x0(r28)
lbl_fn_8070D630_00001F4C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8070D720(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8070D720_00002014
    addi r31, r3, 0x8
    b lbl_fn_8070D720_00002008
lbl_fn_8070D720_00001FA0:
    lwz r29, 0x4(r31)
    cmpwi r29, 0x0
    beq lbl_fn_8070D720_00001FFC
    addi r30, r29, 0xc
    b lbl_fn_8070D720_00001FE0
lbl_fn_8070D720_00001FB4:
    lwz r30, 0x4(r30)
    cmpwi r30, 0x0
    beq lbl_fn_8070D720_00001FE0
    lwz r12, 0x10(r30)
    cmpwi r12, 0x0
    beq lbl_fn_8070D720_00001FE0
    lwz r3, 0x8(r30)
    lwz r4, 0xc(r30)
    lwz r5, 0x14(r30)
    mtctr r12
    bctrl
lbl_fn_8070D720_00001FE0:
    lwz r0, 0xc(r29)
    cmplw r30, r0
    bne lbl_fn_8070D720_00001FB4
    addic. r3, r29, 0x8
    beq lbl_fn_8070D720_00001FFC
    li r4, 0x0
    bl fn_80725170
lbl_fn_8070D720_00001FFC:
    mr r4, r29
    addi r3, r28, 0x4
    bl fn_807252D0
lbl_fn_8070D720_00002008:
    lwz r0, 0x4(r28)
    cmpwi r0, 0x0
    bne lbl_fn_8070D720_00001FA0
lbl_fn_8070D720_00002014:
    lwz r3, 0x0(r28)
    li r4, 0x3
    bl fn_80619E90
    lwz r3, 0x0(r28)
    li r4, 0x14
    li r5, 0x4
    bl fn_80619D70
    cmpwi r3, 0x0
    beq lbl_fn_8070D720_00002078
    mr r5, r3
    beq lbl_fn_8070D720_00002064
    li r0, 0x0
    stw r0, 0x0(r3)
    addi r4, r3, 0xc
    stw r0, 0x4(r3)
    stw r0, 0xc(r3)
    stw r0, 0x10(r3)
    stw r0, 0x8(r3)
    stw r4, 0xc(r3)
    stw r4, 0x10(r3)
lbl_fn_8070D720_00002064:
    addi r0, r28, 0x8
    stw r0, 0x8(r1)
    addi r3, r28, 0x4
    addi r4, r1, 0x8
    bl fn_807252A0
lbl_fn_8070D720_00002078:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
