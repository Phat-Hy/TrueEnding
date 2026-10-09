#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void OSDisableInterrupts(void);
extern void OSRestoreInterrupts(void);
extern void __div2i(void);
extern void _restgpr_24(void);
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _savegpr_24(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void fn_805F3130(void);
extern void fn_805F3210(void);
extern void fn_805F8980(void);
extern void fn_805F95A0(void);
extern void fn_80618290(void);
extern void fn_80618350(void);
extern void fn_80618400(void);
extern void fn_80619920(void);
extern void fn_806199D0(void);
extern void fn_80619A00(void);
extern void fn_80619AB0(void);
extern void fn_80619B80(void);
extern void fn_80619C60(void);
extern void fn_806869BC(void);
extern void fn_807097E0(void);
extern void fn_80709820(void);
extern void fn_8070C010(void);
extern void fn_8070C090(void);
extern void fn_8070C2F0(void);
extern void fn_8070C440(void);
extern void fn_8070C630(void);
extern void fn_8070C650(void);
extern void fn_8070C770(void);
extern void fn_8070CD20(void);
extern void fn_8070CD40(void);
extern void fn_8070CD60(void);
extern void fn_8070CE00(void);
extern void fn_8070CE10(void);
extern void fn_807187D0(void);
extern void fn_80718D70(void);
extern void fn_8071EDB0(void);
extern void fn_8071EFB0(void);
extern void fn_80721540(void);
extern void fn_807222E0(void);
extern void fn_80725050(void);
extern void fn_80725070(void);
extern void fn_807250E0(void);
extern void fn_80725150(void);
extern void fn_80726B90(void);
extern void fn_807274C0(void);
extern void fn_80727A10(void);
extern void fn_80727E50(void);
extern void fn_80727EB0(void);
extern void fn_80728F40(void);
extern void vsnprintf(void);

/* External data declarations */

/* Small data declarations */
extern u32 lbl_80880520;
extern u32 lbl_80880524;
extern u32 lbl_80880528;
extern u32 lbl_8088052C;
extern u32 lbl_80889310;
extern u32 lbl_80889314;
extern u32 lbl_80889318;
extern u32 lbl_8088931C;
extern u32 lbl_80889320;
extern u32 lbl_80889328;
extern u32 lbl_80889330;
extern u32 lbl_80889338;
extern u32 lbl_8088933C;
extern u32 lbl_80889340;
extern u32 lbl_80889348;

/* Function declarations */
void pad_03_80722438_text(void);
void fn_80722440(void);
void fn_80722500(void);
void fn_80722570(void);
void fn_80722820(void);
void fn_807229E0(void);
void fn_80722DF0(void);
void fn_80722E60(void);
void fn_80722E70(void);
void fn_80722E80(void);
void fn_80722E90(void);
void fn_80722EB0(void);
void fn_80722ED0(void);
void fn_80722EF0(void);
void fn_80722F00(void);
void fn_80722F10(void);
void fn_80722F20(void);
void fn_80722F30(void);
void fn_80722F40(void);
void fn_80722F50(void);
void fn_80722FE0(void);
void fn_80723050(void);
void fn_807230C0(void);
void fn_807230D0(void);
void fn_80723160(void);
void fn_80723200(void);
void fn_80723210(void);
void fn_80723220(void);
void fn_80723250(void);
void fn_80723260(void);
void fn_80723270(void);
void fn_80723280(void);
void fn_80723290(void);
void fn_807232A0(void);
void fn_807233B0(void);
void fn_807234D0(void);
void fn_807235A0(void);
void fn_80723650(void);
void fn_80723760(void);
void fn_80723880(void);
void fn_80723950(void);
void fn_80723960(void);
void fn_80723A00(void);
void fn_80723B90(void);
void fn_80723C50(void);
void fn_80723CB0(void);
void fn_80723D00(void);
void fn_80723D10(void);
void fn_80723D20(void);
void fn_80723D60(void);
void fn_80723D90(void);
void fn_80723DF0(void);
void fn_80723E40(void);
void fn_80723E50(void);
void fn_80723E60(void);
void fn_80723EF0(void);
void fn_80723F90(void);
void fn_80723FA0(void);
void fn_80723FB0(void);
void fn_80723FE0(void);
void fn_80723FF0(void);
void fn_80724000(void);
void fn_80724010(void);
void fn_80724020(void);
void fn_80724030(void);
void fn_80724140(void);
void fn_80724260(void);
void fn_80724330(void);
void fn_807243E0(void);

asm void pad_03_80722438_text(void)
{
    nofralloc
    opword 0x00000000
    opword 0x00000000
}

asm void fn_80722440(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    stw r31, 0xac(r1)
    mr r31, r3
    stw r30, 0xa8(r1)
    mr r30, r4
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    lwz r3, 0xe0(r31)
    addi r4, r1, 0x8
    addi r5, r1, 0x14
    addi r6, r1, 0x28
    lwz r12, 0x0(r3)
    li r9, 0x0
    lwz r7, 0xe8(r31)
    lwz r12, 0xc(r12)
    lwz r8, 0xec(r31)
    lwz r10, 0xe4(r31)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_80722440_00000098
    lbz r3, 0x2c(r1)
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
    stb r0, 0x0(r30)
    lwz r0, 0x34(r1)
    stw r0, 0x4(r30)
    lwz r0, 0x38(r1)
    stw r0, 0x8(r30)
    lwz r0, 0x3c(r1)
    stw r0, 0xc(r30)
lbl_fn_80722440_00000098:
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    mr r3, r31
    lwz r31, 0xac(r1)
    lwz r30, 0xa8(r1)
    lwz r0, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_80722500(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    lwz r3, 0x114(r31)
    cmpwi r3, 0x0
    bne lbl_fn_80722500_00000108
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    li r3, -0x1
    b lbl_fn_80722500_00000124
lbl_fn_80722500_00000108:
    lwz r3, 0xd0(r3)
    bl fn_8071EFB0
    mr r31, r3
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    mr r3, r31
lbl_fn_80722500_00000124:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80722570(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    lbz r0, 0xcc(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80722570_00000178
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    b lbl_fn_80722570_000003CC
lbl_fn_80722570_00000178:
    lbz r0, 0xcd(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80722570_00000194
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    b lbl_fn_80722570_000003CC
lbl_fn_80722570_00000194:
    lbz r0, 0xce(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80722570_000003B8
    lbz r3, 0xcf(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80722570_000002A8
    lwz r0, 0x114(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80722570_000002A8
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    lbz r0, 0xcd(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80722570_000001F4
    cmpwi r31, 0x0
    mr r30, r31
    beq lbl_fn_80722570_000001E0
    addi r30, r31, 0xc0
lbl_fn_80722570_000001E0:
    bl fn_807187D0
    mr r4, r30
    bl fn_80718D70
    li r0, 0x0
    stb r0, 0xcd(r31)
lbl_fn_80722570_000001F4:
    lbz r0, 0xcc(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80722570_00000224
    cmpwi r31, 0x0
    mr r30, r31
    beq lbl_fn_80722570_00000210
    addi r30, r31, 0xb4
lbl_fn_80722570_00000210:
    bl fn_8070C650
    mr r4, r30
    bl fn_8070C770
    li r0, 0x0
    stb r0, 0xcc(r31)
lbl_fn_80722570_00000224:
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    lwz r4, 0x114(r31)
    li r3, 0x0
    cmpwi r4, 0x0
    beq lbl_fn_80722570_00000250
    lbz r0, 0x36(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80722570_00000250
    li r3, 0x1
lbl_fn_80722570_00000250:
    cmpwi r3, 0x0
    beq lbl_fn_80722570_00000268
    mr r3, r31
    bl fn_807229E0
    lwz r3, 0x114(r31)
    bl fn_8070C090
lbl_fn_80722570_00000268:
    lwz r3, 0x114(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80722570_00000278
    bl fn_8070C630
lbl_fn_80722570_00000278:
    li r0, 0x0
    stw r0, 0x114(r31)
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    b lbl_fn_80722570_000003CC
lbl_fn_80722570_000002A8:
    cmpwi r3, 0x0
    bne lbl_fn_80722570_000003B8
    lwz r4, 0xe0(r31)
    mr r3, r31
    lwz r5, 0xe4(r31)
    bl fn_80722820
    cmpwi r3, 0x0
    bne lbl_fn_80722570_000003B8
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    lbz r0, 0xcd(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80722570_00000304
    cmpwi r31, 0x0
    mr r30, r31
    beq lbl_fn_80722570_000002F0
    addi r30, r31, 0xc0
lbl_fn_80722570_000002F0:
    bl fn_807187D0
    mr r4, r30
    bl fn_80718D70
    li r0, 0x0
    stb r0, 0xcd(r31)
lbl_fn_80722570_00000304:
    lbz r0, 0xcc(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80722570_00000334
    cmpwi r31, 0x0
    mr r30, r31
    beq lbl_fn_80722570_00000320
    addi r30, r31, 0xb4
lbl_fn_80722570_00000320:
    bl fn_8070C650
    mr r4, r30
    bl fn_8070C770
    li r0, 0x0
    stb r0, 0xcc(r31)
lbl_fn_80722570_00000334:
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    lwz r4, 0x114(r31)
    li r3, 0x0
    cmpwi r4, 0x0
    beq lbl_fn_80722570_00000360
    lbz r0, 0x36(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80722570_00000360
    li r3, 0x1
lbl_fn_80722570_00000360:
    cmpwi r3, 0x0
    beq lbl_fn_80722570_00000378
    mr r3, r31
    bl fn_807229E0
    lwz r3, 0x114(r31)
    bl fn_8070C090
lbl_fn_80722570_00000378:
    lwz r3, 0x114(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80722570_00000388
    bl fn_8070C630
lbl_fn_80722570_00000388:
    li r0, 0x0
    stw r0, 0x114(r31)
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    b lbl_fn_80722570_000003CC
lbl_fn_80722570_000003B8:
    mr r3, r31
    bl fn_807229E0
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
lbl_fn_80722570_000003CC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80722820(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    stw r31, 0xac(r1)
    mr r31, r4
    stw r30, 0xa8(r1)
    mr r30, r5
    stw r29, 0xa4(r1)
    mr r29, r3
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    lwz r12, 0x0(r31)
    mr r3, r31
    lbz r4, 0xdc(r29)
    mr r10, r30
    lwz r12, 0xc(r12)
    addi r5, r1, 0x8
    addi r31, r4, 0x40
    addi r4, r29, 0x108
    addi r6, r1, 0x20
    lwz r7, 0xe8(r29)
    lwz r8, 0xec(r29)
    li r9, 0x0
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_80722820_0000046C
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    li r3, 0x0
    b lbl_fn_80722820_00000584
lbl_fn_80722820_0000046C:
    lwz r0, 0xf0(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80722820_00000480
    lwz r30, 0xf4(r29)
    b lbl_fn_80722820_000004A8
lbl_fn_80722820_00000480:
    cmpwi r0, 0x1
    bne lbl_fn_80722820_000004A8
    lwz r3, 0xf4(r29)
    li r6, 0x3e8
    lwz r0, 0x2c(r1)
    li r5, 0x0
    mullw r4, r3, r0
    mulhw r3, r3, r0
    bl __div2i
    mr r30, r4
lbl_fn_80722820_000004A8:
    lwz r0, 0x34(r1)
    cmplw r30, r0
    ble lbl_fn_80722820_000004C8
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    li r3, 0x0
    b lbl_fn_80722820_00000584
lbl_fn_80722820_000004C8:
    lwz r0, 0x28(r1)
    li r3, 0x2
    lwz r4, 0xd8(r29)
    cmpwi r0, 0x2
    bgt lbl_fn_80722820_000004E0
    mr r3, r0
lbl_fn_80722820_000004E0:
    lis r6, fn_80722DF0@ha
    mr r5, r31
    mr r7, r29
    addi r6, r6, fn_80722DF0@l
    bl fn_8070C440
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_80722820_00000514
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    li r3, 0x0
    b lbl_fn_80722820_00000584
lbl_fn_80722820_00000514:
    lbz r4, 0xc(r1)
    bl fn_8070CD20
    lbz r4, 0xd(r1)
    mr r3, r31
    bl fn_8070CD40
    lbz r4, 0xe(r1)
    mr r3, r31
    bl fn_8070CD60
    lbz r4, 0xf(r1)
    mr r3, r31
    bl fn_8070CE00
    lbz r4, 0x10(r1)
    mr r3, r31
    bl fn_8070CE10
    lbz r0, 0xd0(r29)
    mr r3, r31
    stb r0, 0x39(r31)
    mr r6, r30
    addi r4, r1, 0x20
    li r5, -0x1
    bl fn_8070C010
    li r0, 0x1
    stw r31, 0x114(r29)
    stb r0, 0xcf(r29)
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    li r3, 0x1
lbl_fn_80722820_00000584:
    lwz r0, 0xb4(r1)
    lwz r31, 0xac(r1)
    lwz r30, 0xa8(r1)
    lwz r29, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_807229E0(void)
{
    nofralloc
    stwu r1, -0xe0(r1)
    mflr r0
    stw r0, 0xe4(r1)
    addi r11, r1, 0x40
    stfd f31, 0xd0(r1)
    psq_st f31, 0xd8(r1), 0, 0
    stfd f30, 0xc0(r1)
    psq_st f30, 0xc8(r1), 0, 0
    stfd f29, 0xb0(r1)
    psq_st f29, 0xb8(r1), 0, 0
    stfd f28, 0xa0(r1)
    psq_st f28, 0xa8(r1), 0, 0
    stfd f27, 0x90(r1)
    psq_st f27, 0x98(r1), 0, 0
    stfd f26, 0x80(r1)
    psq_st f26, 0x88(r1), 0, 0
    stfd f25, 0x70(r1)
    psq_st f25, 0x78(r1), 0, 0
    stfd f24, 0x60(r1)
    psq_st f24, 0x68(r1), 0, 0
    stfd f23, 0x50(r1)
    psq_st f23, 0x58(r1), 0, 0
    stfd f22, 0x40(r1)
    psq_st f22, 0x48(r1), 0, 0
    bl _savegpr_26
    lis r0, 0x4330
    stw r0, 0x18(r1)
    mr r31, r3
    stw r0, 0x20(r1)
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    lwz r0, 0x114(r31)
    cmpwi r0, 0x0
    bne lbl_fn_807229E0_00000644
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    b lbl_fn_807229E0_00000944
lbl_fn_807229E0_00000644:
    lfs f28, lbl_80889310
    lfs f0, 0x8(r31)
    lbz r3, 0x10c(r31)
    fmuls f28, f28, f0
    lfs f0, 0x108(r31)
    lfs f29, lbl_80889310
    cmplwi r3, 0x1
    lfs f1, 0x4(r31)
    fmuls f28, f28, f0
    fmuls f29, f29, f1
    lfs f27, lbl_80889314
    bgt lbl_fn_807229E0_0000069C
    subi r0, r3, 0x3f
    lfd f2, lbl_80889328
    xoris r0, r0, 0x8000
    stw r0, 0x1c(r1)
    lfs f0, lbl_80889318
    lfd f1, 0x18(r1)
    fsubs f1, f1, f2
    fdivs f0, f1, f0
    fadds f27, f27, f0
    b lbl_fn_807229E0_000006C0
lbl_fn_807229E0_0000069C:
    subi r0, r3, 0x40
    lfd f2, lbl_80889328
    xoris r0, r0, 0x8000
    stw r0, 0x24(r1)
    lfs f0, lbl_80889318
    lfd f1, 0x20(r1)
    fsubs f1, f1, f2
    fdivs f0, f1, f0
    fadds f27, f27, f0
lbl_fn_807229E0_000006C0:
    lfs f0, 0xd4(r31)
    lbz r3, 0x10d(r31)
    fmuls f27, f27, f0
    lfs f0, 0xc(r31)
    cmplwi r3, 0x1
    lfs f26, lbl_80889314
    fadds f27, f27, f0
    bgt lbl_fn_807229E0_00000708
    addi r0, r3, 0x1
    lfd f2, lbl_80889328
    xoris r0, r0, 0x8000
    stw r0, 0x1c(r1)
    lfs f0, lbl_80889318
    lfd f1, 0x18(r1)
    fsubs f1, f1, f2
    fdivs f0, f1, f0
    fadds f26, f26, f0
    b lbl_fn_807229E0_00000724
lbl_fn_807229E0_00000708:
    stw r3, 0x24(r1)
    lfd f2, lbl_80889330
    lfd f1, 0x20(r1)
    lfs f0, lbl_80889318
    fsubs f1, f1, f2
    fdivs f0, f1, f0
    fadds f26, f26, f0
lbl_fn_807229E0_00000724:
    lbz r0, 0x111(r31)
    addi r28, r1, 0xc
    stw r0, 0x24(r1)
    addi r27, r1, 0x8
    lfs f23, lbl_80889314
    li r26, 0x0
    lfd f30, lbl_80889330
    lfd f0, 0x20(r1)
    fmr f25, f23
    stw r3, 0x1c(r1)
    fsubs f0, f0, f30
    lfs f31, lbl_80889320
    lfd f3, 0x18(r1)
    lfs f5, 0x14(r31)
    fdivs f1, f0, f31
    lfs f0, lbl_80889310
    lbz r4, 0x10e(r31)
    lbz r3, 0x10f(r31)
    lbz r0, 0x110(r31)
    lfs f2, lbl_8088931C
    fsubs f0, f1, f0
    lfs f4, 0x10(r31)
    fsubs f3, f3, f30
    lfs f24, 0x18(r31)
    fadds f25, f25, f5
    stb r4, 0x8(r1)
    fmuls f1, f3, f2
    stb r3, 0x9(r1)
    fadds f23, f23, f0
    lfs f0, 0x28(r31)
    lbz r29, 0x1c(r31)
    fadds f26, f26, f1
    fadds f23, f23, f0
    stb r0, 0xa(r1)
    lbz r30, 0x1d(r31)
    fadds f26, f26, f4
    lfs f22, lbl_80889314
lbl_fn_807229E0_000007B8:
    lbz r0, 0x0(r27)
    mr r3, r31
    stw r0, 0x1c(r1)
    mr r4, r26
    lfd f0, 0x18(r1)
    fsubs f1, f0, f30
    frsp f0, f22
    fdivs f1, f1, f31
    fadds f0, f0, f1
    stfs f0, 0x0(r28)
    bl fn_807097E0
    lfs f0, 0x0(r28)
    addi r26, r26, 0x1
    cmpwi r26, 0x3
    addi r27, r27, 0x1
    fadds f0, f0, f1
    stfs f0, 0x0(r28)
    addi r28, r28, 0x4
    blt lbl_fn_807229E0_000007B8
    lwz r3, 0x114(r31)
    fmr f1, f24
    lwz r0, 0x2c(r31)
    mr r4, r29
    stw r0, 0xb4(r3)
    lwz r3, 0x114(r31)
    lwz r0, 0x30(r31)
    stw r0, 0xb8(r3)
    lwz r3, 0x114(r31)
    stfs f29, 0x40(r3)
    lwz r3, 0x114(r31)
    stfs f28, 0x44(r3)
    lwz r3, 0x114(r31)
    stfs f27, 0x48(r3)
    lwz r3, 0x114(r31)
    stfs f26, 0x4c(r3)
    lwz r3, 0x114(r31)
    stfs f25, 0x50(r3)
    lwz r3, 0x114(r31)
    bl fn_8070C2F0
    lwz r3, 0x114(r31)
    li r26, 0x0
    lfs f0, 0xc(r1)
    li r29, 0x0
    stb r30, 0x3c(r3)
    lfs f3, 0x10(r1)
    lwz r3, 0x114(r31)
    lwz r0, 0x20(r31)
    stw r0, 0x58(r3)
    lfs f2, 0x14(r1)
    lwz r3, 0x114(r31)
    lfs f1, 0x24(r31)
    stfs f1, 0x5c(r3)
    lwz r3, 0x114(r31)
    stfs f23, 0x60(r3)
    lwz r3, 0x114(r31)
    stfs f0, 0x64(r3)
    lwz r3, 0x114(r31)
    stfs f3, 0x68(r3)
    lwz r3, 0x114(r31)
    stfs f2, 0x6c(r3)
lbl_fn_807229E0_000008A8:
    mr r3, r31
    mr r4, r26
    bl fn_80709820
    lwz r0, 0x114(r31)
    addi r26, r26, 0x1
    cmpwi r26, 0x4
    add r3, r0, r29
    addi r29, r29, 0x4
    stfs f1, 0x70(r3)
    blt lbl_fn_807229E0_000008A8
    addi r29, r31, 0x50
    li r26, 0x0
    b lbl_fn_807229E0_000008F8
lbl_fn_807229E0_000008DC:
    lwz r3, 0x114(r31)
    mr r4, r26
    mr r5, r29
    lwz r3, 0xd0(r3)
    bl fn_8071EDB0
    addi r29, r29, 0x18
    addi r26, r26, 0x1
lbl_fn_807229E0_000008F8:
    lwz r0, 0xd8(r31)
    cmpw r26, r0
    blt lbl_fn_807229E0_000008DC
    lwz r3, 0x114(r31)
    lfs f0, 0xf8(r31)
    stfs f0, 0x1c(r3)
    lfs f0, 0xfc(r31)
    stfs f0, 0x20(r3)
    lwz r0, 0x100(r31)
    stw r0, 0x24(r3)
    lbz r0, 0x104(r31)
    stb r0, 0x28(r3)
    lhz r0, 0x105(r31)
    sth r0, 0x29(r3)
    lbz r0, 0x107(r31)
    stb r0, 0x2b(r3)
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
lbl_fn_807229E0_00000944:
    addi r11, r1, 0x40
    psq_l f31, 0xd8(r1), 0, 0
    lfd f31, 0xd0(r1)
    psq_l f30, 0xc8(r1), 0, 0
    lfd f30, 0xc0(r1)
    psq_l f29, 0xb8(r1), 0, 0
    lfd f29, 0xb0(r1)
    psq_l f28, 0xa8(r1), 0, 0
    lfd f28, 0xa0(r1)
    psq_l f27, 0x98(r1), 0, 0
    lfd f27, 0x90(r1)
    psq_l f26, 0x88(r1), 0, 0
    lfd f26, 0x80(r1)
    psq_l f25, 0x78(r1), 0, 0
    lfd f25, 0x70(r1)
    psq_l f24, 0x68(r1), 0, 0
    lfd f24, 0x60(r1)
    psq_l f23, 0x58(r1), 0, 0
    lfd f23, 0x50(r1)
    psq_l f22, 0x48(r1), 0, 0
    lfd f22, 0x40(r1)
    bl _restgpr_26
    lwz r0, 0xe4(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}

asm void fn_80722DF0(void)
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
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    cmpwi r30, 0x2
    bne lbl_fn_80722DF0_000009F8
    mr r3, r29
    bl fn_8070C630
lbl_fn_80722DF0_000009F8:
    li r0, 0x0
    stw r0, 0x114(r31)
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80722E60(void)
{
    nofralloc
    b fn_80722570
}

asm void fn_80722E70(void)
{
    nofralloc
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctr
}

asm void fn_80722E80(void)
{
    nofralloc
    blr
}

asm void fn_80722E90(void)
{
    nofralloc
    lbz r3, 0xce(r3)
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    blr
}

asm void fn_80722EB0(void)
{
    nofralloc
    lbz r3, 0xcd(r3)
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    blr
}

asm void fn_80722ED0(void)
{
    nofralloc
    lbz r3, 0xcc(r3)
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    blr
}

asm void fn_80722EF0(void)
{
    nofralloc
    subi r3, r3, 0xb4
    b fn_80722E80
}

asm void fn_80722F00(void)
{
    nofralloc
    subi r3, r3, 0xb4
    b fn_807222E0
}

asm void fn_80722F10(void)
{
    nofralloc
    subi r3, r3, 0xb4
    b fn_80721540
}

asm void fn_80722F20(void)
{
    nofralloc
    subi r3, r3, 0xc0
    b fn_80722E70
}

asm void fn_80722F30(void)
{
    nofralloc
    subi r3, r3, 0xc0
    b fn_80722E60
}

asm void fn_80722F40(void)
{
    nofralloc
    subi r3, r3, 0xc0
    b fn_80721540
}

asm void fn_80722F50(void)
{
    nofralloc
    lhz r7, 0x22(r3)
    clrlslwi r0, r4, 24, 12
    lhz r9, 0x24(r3)
    li r5, 0x1
    srawi r6, r7, 4
    clrlwi r4, r7, 28
    slwi r7, r6, 2
    extsh r0, r0
    add r6, r3, r7
    slw r4, r5, r4
    lhax r8, r3, r7
    extsh r7, r9
    lha r6, 0x2(r6)
    extsh r4, r4
    lha r5, 0x26(r3)
    srawi r0, r0, 1
    mullw r7, r7, r8
    mullw r5, r5, r6
    mullw r0, r0, r4
    add r7, r7, r5
    add r7, r7, r0
    srawi r7, r7, 10
    addi r7, r7, 0x1
    srawi r7, r7, 1
    cmpwi r7, 0x7fff
    ble lbl_fn_80722F50_00000B88
    li r7, 0x7fff
    b lbl_fn_80722F50_00000B94
lbl_fn_80722F50_00000B88:
    cmpwi r7, -0x8000
    bge lbl_fn_80722F50_00000B94
    li r7, -0x8000
lbl_fn_80722F50_00000B94:
    sth r9, 0x26(r3)
    sth r7, 0x24(r3)
    mr r3, r7
    blr
}

asm void fn_80722FE0(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    bne cr1, lbl_fn_80722FE0_00000BD0
    stfd f1, 0x28(r1)
    stfd f2, 0x30(r1)
    stfd f3, 0x38(r1)
    stfd f4, 0x40(r1)
    stfd f5, 0x48(r1)
    stfd f6, 0x50(r1)
    stfd f7, 0x58(r1)
    stfd f8, 0x60(r1)
lbl_fn_80722FE0_00000BD0:
    addi r11, r1, 0x88
    addi r0, r1, 0x8
    lis r12, 0x200
    stw r3, 0x8(r1)
    stw r4, 0xc(r1)
    stw r5, 0x10(r1)
    stw r6, 0x14(r1)
    stw r7, 0x18(r1)
    stw r8, 0x1c(r1)
    stw r9, 0x20(r1)
    stw r10, 0x24(r1)
    stw r12, 0x68(r1)
    stw r11, 0x6c(r1)
    stw r0, 0x70(r1)
    addi r1, r1, 0x80
    blr
}

asm void fn_80723050(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl OSDisableInterrupts
    lhz r4, 0x10(r31)
    lhz r0, 0xc(r31)
    subf. r4, r4, r0
    bge lbl_fn_80723050_00000C48
    lhz r0, 0x6(r31)
    add r4, r4, r0
lbl_fn_80723050_00000C48:
    lhz r0, 0xe(r31)
    clrlwi r4, r4, 16
    cmpwi r0, 0x0
    beq lbl_fn_80723050_00000C60
    addi r0, r4, 0x1
    clrlwi r4, r0, 16
lbl_fn_80723050_00000C60:
    lwz r0, 0x14(r31)
    add r31, r0, r4
    bl OSRestoreInterrupts
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_807230C0(void)
{
    nofralloc
    lwz r3, lbl_80880524
    blr
}

asm void fn_807230D0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r5
    li r5, 0x0
    bl fn_80619920
    stw r3, lbl_80880520
    li r4, 0x0
    bl fn_80619C60
    lwz r3, lbl_80880520
    li r4, 0x1c
    li r5, 0x4
    bl fn_80619A00
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_807230D0_00000D0C
    lwz r5, 0x0(r30)
    li r0, 0x0
    lfs f0, lbl_80889338
    li r6, 0x1
    stw r0, 0x0(r3)
    li r4, 0x10
    stw r5, 0x10(r3)
    stfs f0, 0x14(r3)
    stb r6, 0x18(r3)
    addi r3, r3, 0x4
    bl fn_80725050
lbl_fn_807230D0_00000D0C:
    stw r31, lbl_80880524
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80723160(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r6
    stw r29, 0x14(r1)
    mr r29, r5
    li r5, 0x0
    bl fn_80619920
    stw r3, lbl_80880520
    li r4, 0x0
    bl fn_80619C60
    lwz r3, lbl_80880520
    li r4, 0x1c
    li r5, 0x4
    bl fn_80619A00
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_80723160_00000DA0
    lwz r0, 0x0(r30)
    li r5, 0x1
    lfs f0, lbl_80889338
    li r4, 0x10
    stw r29, 0x0(r3)
    stw r0, 0x10(r3)
    stfs f0, 0x14(r3)
    stb r5, 0x18(r3)
    addi r3, r3, 0x4
    bl fn_80725050
lbl_fn_80723160_00000DA0:
    stw r31, lbl_80880524
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80723200(void)
{
    nofralloc
    stw r4, 0x0(r3)
    blr
}

asm void fn_80723210(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    blr
}

asm void fn_80723220(void)
{
    nofralloc
    lbz r0, 0x0(r4)
    stb r0, 0x10(r3)
    lbz r0, 0x1(r4)
    stb r0, 0x11(r3)
    lbz r0, 0x2(r4)
    stb r0, 0x12(r3)
    lbz r0, 0x3(r4)
    stb r0, 0x13(r3)
    blr
}

asm void fn_80723250(void)
{
    nofralloc
    lwz r0, 0x10(r4)
    stw r0, 0x0(r3)
    blr
}

asm void fn_80723260(void)
{
    nofralloc
    stfs f1, 0x14(r3)
    blr
}

asm void fn_80723270(void)
{
    nofralloc
    lfs f1, 0x14(r3)
    blr
}

asm void fn_80723280(void)
{
    nofralloc
    stb r4, 0x18(r3)
    blr
}

asm void fn_80723290(void)
{
    nofralloc
    lbz r3, 0x18(r3)
    blr
}

asm void fn_807232A0(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    addi r11, r1, 0xa0
    bl _savegpr_25
    mr r25, r3
    mr r26, r4
    mr r27, r5
    mr r28, r6
    bne cr1, lbl_fn_807232A0_00000EB0
    stfd f1, 0x28(r1)
    stfd f2, 0x30(r1)
    stfd f3, 0x38(r1)
    stfd f4, 0x40(r1)
    stfd f5, 0x48(r1)
    stfd f6, 0x50(r1)
    stfd f7, 0x58(r1)
    stfd f8, 0x60(r1)
lbl_fn_807232A0_00000EB0:
    stw r3, 0x8(r1)
    addi r11, r1, 0xa8
    addi r0, r1, 0x8
    lis r12, 0x400
    stw r4, 0xc(r1)
    addi r31, r1, 0x68
    lwz r3, lbl_80880520
    li r4, 0x4
    stw r5, 0x10(r1)
    stw r6, 0x14(r1)
    stw r7, 0x18(r1)
    stw r8, 0x1c(r1)
    stw r9, 0x20(r1)
    stw r10, 0x24(r1)
    stw r12, 0x68(r1)
    stw r11, 0x6c(r1)
    stw r0, 0x70(r1)
    bl fn_80619B80
    subi r0, r3, 0x1c
    lwz r3, lbl_80880520
    srwi r29, r0, 1
    li r4, 0x0
    bl fn_80619C60
    lwz r3, lbl_80880520
    mr r4, r29
    li r5, -0x4
    bl fn_80619A00
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_807232A0_00000F60
    mr r4, r29
    mr r5, r28
    mr r6, r31
    bl vsnprintf
    mr r8, r3
    mr r3, r25
    mr r4, r26
    mr r5, r27
    mr r7, r30
    li r6, 0x1
    bl fn_807235A0
    lwz r3, lbl_80880520
    mr r4, r30
    bl fn_80619AB0
lbl_fn_807232A0_00000F60:
    addi r11, r1, 0xa0
    bl _restgpr_25
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_807233B0(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    addi r11, r1, 0xa0
    bl _savegpr_25
    mr r25, r3
    mr r26, r4
    mr r27, r5
    mr r28, r6
    mr r29, r7
    bne cr1, lbl_fn_807233B0_00000FC4
    stfd f1, 0x28(r1)
    stfd f2, 0x30(r1)
    stfd f3, 0x38(r1)
    stfd f4, 0x40(r1)
    stfd f5, 0x48(r1)
    stfd f6, 0x50(r1)
    stfd f7, 0x58(r1)
    stfd f8, 0x60(r1)
lbl_fn_807233B0_00000FC4:
    cmpwi r6, 0x1
    addi r11, r1, 0xa8
    addi r0, r1, 0x8
    lis r12, 0x500
    stw r3, 0x8(r1)
    li r31, 0x4
    stw r4, 0xc(r1)
    stw r5, 0x10(r1)
    stw r6, 0x14(r1)
    stw r7, 0x18(r1)
    stw r8, 0x1c(r1)
    stw r9, 0x20(r1)
    stw r10, 0x24(r1)
    stw r12, 0x68(r1)
    stw r11, 0x6c(r1)
    stw r0, 0x70(r1)
    bne lbl_fn_807233B0_0000100C
    li r31, -0x4
lbl_fn_807233B0_0000100C:
    lwz r3, lbl_80880520
    li r4, 0x4
    bl fn_80619B80
    subi r0, r3, 0x1c
    lwz r3, lbl_80880520
    srwi r30, r0, 1
    li r4, 0x0
    bl fn_80619C60
    lwz r3, lbl_80880520
    mr r4, r30
    mr r5, r31
    bl fn_80619A00
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_807233B0_00001080
    mr r4, r30
    mr r5, r29
    addi r6, r1, 0x68
    bl vsnprintf
    mr r8, r3
    mr r3, r25
    mr r4, r26
    mr r5, r27
    mr r6, r28
    mr r7, r31
    bl fn_807235A0
    lwz r3, lbl_80880520
    mr r4, r31
    bl fn_80619AB0
lbl_fn_807233B0_00001080:
    addi r11, r1, 0xa0
    bl _restgpr_25
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_807234D0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    cmpwi r6, 0x1
    mr r24, r3
    mr r25, r4
    mr r26, r5
    mr r27, r6
    mr r28, r7
    mr r29, r8
    li r31, 0x4
    bne lbl_fn_807234D0_000010D4
    li r31, -0x4
lbl_fn_807234D0_000010D4:
    lwz r3, lbl_80880520
    li r4, 0x4
    bl fn_80619B80
    subi r0, r3, 0x1c
    lwz r3, lbl_80880520
    srwi r30, r0, 1
    li r4, 0x0
    bl fn_80619C60
    lwz r3, lbl_80880520
    mr r4, r30
    mr r5, r31
    bl fn_80619A00
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_807234D0_00001148
    mr r4, r30
    mr r5, r28
    mr r6, r29
    bl vsnprintf
    mr r8, r3
    mr r3, r24
    mr r4, r25
    mr r5, r26
    mr r6, r27
    mr r7, r31
    bl fn_807235A0
    lwz r3, lbl_80880520
    mr r4, r31
    bl fn_80619AB0
lbl_fn_807234D0_00001148:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_807235A0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    cmpwi r6, 0x1
    mr r24, r3
    mr r25, r4
    mr r26, r5
    mr r27, r6
    mr r28, r7
    mr r29, r8
    addi r30, r8, 0x18
    li r31, -0x4
    bne lbl_fn_807235A0_000011A8
    li r31, 0x4
lbl_fn_807235A0_000011A8:
    lwz r3, lbl_80880520
    li r4, 0x0
    bl fn_80619C60
    lwz r3, lbl_80880520
    mr r4, r30
    mr r5, r31
    bl fn_80619A00
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_807235A0_000011FC
    stw r25, 0x0(r3)
    mr r4, r28
    mr r5, r29
    stw r26, 0x4(r3)
    stw r27, 0x8(r3)
    stw r29, 0xc(r3)
    addi r3, r3, 0x18
    bl memcpy
    mr r4, r30
    addi r3, r24, 0x4
    bl fn_80725070
lbl_fn_807235A0_000011FC:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80723650(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    addi r11, r1, 0xa0
    bl _savegpr_25
    mr r25, r3
    mr r26, r4
    mr r27, r5
    mr r28, r6
    bne cr1, lbl_fn_80723650_00001260
    stfd f1, 0x28(r1)
    stfd f2, 0x30(r1)
    stfd f3, 0x38(r1)
    stfd f4, 0x40(r1)
    stfd f5, 0x48(r1)
    stfd f6, 0x50(r1)
    stfd f7, 0x58(r1)
    stfd f8, 0x60(r1)
lbl_fn_80723650_00001260:
    stw r3, 0x8(r1)
    addi r11, r1, 0xa8
    addi r0, r1, 0x8
    lis r12, 0x400
    stw r4, 0xc(r1)
    addi r31, r1, 0x68
    lwz r3, lbl_80880520
    li r4, 0x4
    stw r5, 0x10(r1)
    stw r6, 0x14(r1)
    stw r7, 0x18(r1)
    stw r8, 0x1c(r1)
    stw r9, 0x20(r1)
    stw r10, 0x24(r1)
    stw r12, 0x68(r1)
    stw r11, 0x6c(r1)
    stw r0, 0x70(r1)
    bl fn_80619B80
    subi r0, r3, 0x1c
    lwz r3, lbl_80880520
    srwi r29, r0, 1
    li r4, 0x0
    bl fn_80619C60
    lwz r3, lbl_80880520
    mr r4, r29
    li r5, -0x4
    bl fn_80619A00
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_80723650_00001310
    mr r4, r29
    mr r5, r28
    mr r6, r31
    bl vsnprintf
    mr r8, r3
    mr r3, r25
    mr r4, r26
    mr r5, r27
    mr r7, r30
    li r6, 0x1
    bl fn_807235A0
    lwz r3, lbl_80880520
    mr r4, r30
    bl fn_80619AB0
lbl_fn_80723650_00001310:
    addi r11, r1, 0xa0
    bl _restgpr_25
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_80723760(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    addi r11, r1, 0xa0
    bl _savegpr_25
    mr r25, r3
    mr r26, r4
    mr r27, r5
    mr r28, r6
    mr r29, r7
    bne cr1, lbl_fn_80723760_00001374
    stfd f1, 0x28(r1)
    stfd f2, 0x30(r1)
    stfd f3, 0x38(r1)
    stfd f4, 0x40(r1)
    stfd f5, 0x48(r1)
    stfd f6, 0x50(r1)
    stfd f7, 0x58(r1)
    stfd f8, 0x60(r1)
lbl_fn_80723760_00001374:
    cmpwi r6, 0x1
    addi r11, r1, 0xa8
    addi r0, r1, 0x8
    lis r12, 0x500
    stw r3, 0x8(r1)
    li r31, 0x4
    stw r4, 0xc(r1)
    stw r5, 0x10(r1)
    stw r6, 0x14(r1)
    stw r7, 0x18(r1)
    stw r8, 0x1c(r1)
    stw r9, 0x20(r1)
    stw r10, 0x24(r1)
    stw r12, 0x68(r1)
    stw r11, 0x6c(r1)
    stw r0, 0x70(r1)
    bne lbl_fn_80723760_000013BC
    li r31, -0x4
lbl_fn_80723760_000013BC:
    lwz r3, lbl_80880520
    li r4, 0x4
    bl fn_80619B80
    subi r0, r3, 0x1c
    lwz r3, lbl_80880520
    srwi r30, r0, 1
    li r4, 0x0
    bl fn_80619C60
    lwz r3, lbl_80880520
    mr r4, r30
    mr r5, r31
    bl fn_80619A00
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_80723760_00001430
    mr r4, r30
    mr r5, r29
    addi r6, r1, 0x68
    bl vsnprintf
    mr r8, r3
    mr r3, r25
    mr r4, r26
    mr r5, r27
    mr r6, r28
    mr r7, r31
    bl fn_807235A0
    lwz r3, lbl_80880520
    mr r4, r31
    bl fn_80619AB0
lbl_fn_80723760_00001430:
    addi r11, r1, 0xa0
    bl _restgpr_25
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_80723880(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    cmpwi r6, 0x1
    mr r24, r3
    mr r25, r4
    mr r26, r5
    mr r27, r6
    mr r28, r7
    mr r29, r8
    li r31, 0x4
    bne lbl_fn_80723880_00001484
    li r31, -0x4
lbl_fn_80723880_00001484:
    lwz r3, lbl_80880520
    li r4, 0x4
    bl fn_80619B80
    subi r0, r3, 0x1c
    lwz r3, lbl_80880520
    srwi r30, r0, 1
    li r4, 0x0
    bl fn_80619C60
    lwz r3, lbl_80880520
    mr r4, r30
    mr r5, r31
    bl fn_80619A00
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_80723880_000014F8
    mr r4, r30
    mr r5, r28
    mr r6, r29
    bl vsnprintf
    mr r8, r3
    mr r3, r24
    mr r4, r25
    mr r5, r26
    mr r6, r27
    mr r7, r31
    bl fn_807235A0
    lwz r3, lbl_80880520
    mr r4, r31
    bl fn_80619AB0
lbl_fn_80723880_000014F8:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80723950(void)
{
    nofralloc
    b fn_807235A0
}

asm void fn_80723960(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r0, lbl_80880520
    cmpwi r0, 0x0
    beq lbl_fn_80723960_00001598
    li r4, 0x0
    addi r3, r3, 0x4
    bl fn_80725150
    mr r30, r3
    b lbl_fn_80723960_00001590
lbl_fn_80723960_00001564:
    mr r4, r30
    addi r3, r29, 0x4
    bl fn_80725150
    mr r31, r3
    mr r4, r30
    addi r3, r29, 0x4
    bl fn_807250E0
    lwz r3, lbl_80880520
    mr r4, r30
    bl fn_80619AB0
    mr r30, r31
lbl_fn_80723960_00001590:
    cmpwi r30, 0x0
    bne lbl_fn_80723960_00001564
lbl_fn_80723960_00001598:
    addi r3, r29, 0x4
    li r4, 0x10
    bl fn_80725050
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80723A00(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    stfd f31, 0x90(r1)
    psq_st f31, 0x98(r1), 0, 0
    stw r31, 0x8c(r1)
    stw r30, 0x88(r1)
    stw r29, 0x84(r1)
    stw r28, 0x80(r1)
    mr r28, r3
    addi r3, r1, 0xc
    bl fn_80727E50
    lwz r0, 0x0(r28)
    cmpwi r0, 0x0
    bne lbl_fn_80723A00_00001614
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_80727EB0
    b lbl_fn_80723A00_0000172C
lbl_fn_80723A00_00001614:
    stw r0, 0x54(r1)
    addi r3, r1, 0xc
    lwz r0, 0x10(r28)
    stw r0, 0x8(r1)
    lbz r6, 0x8(r1)
    lbz r5, 0x9(r1)
    lbz r4, 0xa(r1)
    lbz r0, 0xb(r1)
    stb r6, 0x24(r1)
    stb r5, 0x25(r1)
    stb r4, 0x26(r1)
    stb r0, 0x27(r1)
    bl fn_80727A10
    lfs f1, 0x14(r28)
    lfs f0, lbl_8088933C
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_80723A00_00001664
    addi r3, r1, 0xc
    bl fn_807274C0
lbl_fn_80723A00_00001664:
    addi r3, r1, 0xc
    bl fn_80726B90
    addi r3, r28, 0x4
    li r4, 0x0
    bl fn_80725150
    lfd f31, lbl_80889340
    mr r29, r3
    lis r31, 0x4330
    b lbl_fn_80723A00_00001718
lbl_fn_80723A00_00001688:
    mr r4, r29
    addi r3, r28, 0x4
    bl fn_80725150
    lbz r0, 0x18(r28)
    mr r30, r3
    cmpwi r0, 0x0
    beq lbl_fn_80723A00_000016EC
    lwz r5, 0x4(r29)
    addi r3, r1, 0xc
    lwz r0, 0x0(r29)
    addi r4, r29, 0x18
    xoris r5, r5, 0x8000
    stw r5, 0x74(r1)
    xoris r0, r0, 0x8000
    stw r31, 0x70(r1)
    lfd f0, 0x70(r1)
    stw r0, 0x7c(r1)
    fsubs f1, f0, f31
    stw r31, 0x78(r1)
    lfd f0, 0x78(r1)
    stfs f1, 0x3c(r1)
    fsubs f0, f0, f31
    stfs f0, 0x38(r1)
    lwz r5, 0xc(r29)
    bl fn_80728F40
lbl_fn_80723A00_000016EC:
    lwz r3, 0x8(r29)
    subic. r0, r3, 0x1
    stw r0, 0x8(r29)
    bgt lbl_fn_80723A00_00001714
    mr r4, r29
    addi r3, r28, 0x4
    bl fn_807250E0
    lwz r3, lbl_80880520
    mr r4, r29
    bl fn_80619AB0
lbl_fn_80723A00_00001714:
    mr r29, r30
lbl_fn_80723A00_00001718:
    cmpwi r29, 0x0
    bne lbl_fn_80723A00_00001688
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_80727EB0
lbl_fn_80723A00_0000172C:
    lwz r0, 0xa4(r1)
    psq_l f31, 0x98(r1), 0, 0
    lfd f31, 0x90(r1)
    lwz r31, 0x8c(r1)
    lwz r30, 0x88(r1)
    lwz r29, 0x84(r1)
    lwz r28, 0x80(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_80723B90(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    lis r10, 0x4330
    xoris r9, r4, 0x8000
    stw r10, 0x78(r1)
    add r4, r4, r6
    xoris r8, r5, 0x8000
    lfd f2, lbl_80889340
    stw r9, 0x7c(r1)
    xoris r4, r4, 0x8000
    lfs f5, lbl_8088933C
    lfd f0, 0x78(r1)
    stw r0, 0x94(r1)
    add r0, r5, r7
    fsubs f3, f0, f2
    xoris r0, r0, 0x8000
    stw r4, 0x7c(r1)
    lfs f6, lbl_80889348
    lfd f0, 0x78(r1)
    stw r10, 0x80(r1)
    fsubs f4, f0, f2
    stw r8, 0x84(r1)
    lfd f0, 0x80(r1)
    stw r31, 0x8c(r1)
    mr r31, r3
    fsubs f1, f0, f2
    addi r3, r1, 0x38
    stw r0, 0x84(r1)
    lfd f0, 0x80(r1)
    fsubs f2, f0, f2
    bl fn_805F95A0
    addi r3, r1, 0x38
    li r4, 0x1
    bl fn_80618290
    addi r3, r1, 0x8
    bl fn_805F8980
    addi r3, r1, 0x8
    li r4, 0x0
    bl fn_80618350
    li r3, 0x0
    bl fn_80618400
    mr r3, r31
    bl fn_80723A00
    lwz r0, 0x94(r1)
    lwz r31, 0x8c(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_80723C50(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lfs f0, lbl_80889338
    stw r0, 0x14(r1)
    li r0, 0x1
    stw r31, 0xc(r1)
    mr r31, r3
    stw r5, 0x0(r3)
    lwz r5, 0x0(r4)
    li r4, 0x10
    stw r5, 0x10(r3)
    stfs f0, 0x14(r3)
    stb r0, 0x18(r3)
    addi r3, r3, 0x4
    bl fn_80725050
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80723CB0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_80723CB0_000018A8
    cmpwi r4, 0x0
    ble lbl_fn_80723CB0_000018A8
    lwz r3, lbl_80880520
    mr r4, r31
    bl fn_80619AB0
lbl_fn_80723CB0_000018A8:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80723D00(void)
{
    nofralloc
    li r4, 0x0
    addi r3, r3, 0x4
    b fn_80725150
}

asm void fn_80723D10(void)
{
    nofralloc
    addi r3, r3, 0x4
    b fn_80725150
}

asm void fn_80723D20(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    addi r3, r3, 0x4
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    bl fn_807250E0
    lwz r3, lbl_80880520
    mr r4, r31
    bl fn_80619AB0
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80723D60(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x0
    stw r0, 0x14(r1)
    bl fn_80619920
    stw r3, lbl_80880520
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80723D90(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    lwz r3, lbl_80880520
    cmpwi r3, 0x0
    beq lbl_fn_80723D90_000019A0
    lwz r4, lbl_80880524
    cmpwi r4, 0x0
    beq lbl_fn_80723D90_00001988
    bl fn_80619AB0
lbl_fn_80723D90_00001988:
    lwz r31, lbl_80880520
    mr r3, r31
    bl fn_806199D0
    li r0, 0x0
    stw r0, lbl_80880520
    stw r0, lbl_80880524
lbl_fn_80723D90_000019A0:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80723DF0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r3, lbl_80880520
    bl fn_80619C60
    lwz r3, lbl_80880520
    mr r4, r31
    li r5, 0x4
    bl fn_80619A00
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80723E40(void)
{
    nofralloc
    mr r4, r3
    lwz r3, lbl_80880520
    b fn_80619AB0
}

asm void fn_80723E50(void)
{
    nofralloc
    lwz r3, lbl_8088052C
    blr
}

asm void fn_80723E60(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r5
    li r5, 0x0
    bl fn_80619920
    stw r3, lbl_80880528
    li r4, 0x0
    bl fn_80619C60
    lwz r3, lbl_80880528
    li r4, 0x1c
    li r5, 0x4
    bl fn_80619A00
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_80723E60_00001A9C
    lwz r5, 0x0(r30)
    li r0, 0x0
    lfs f0, lbl_80889338
    li r6, 0x1
    stw r0, 0x0(r3)
    li r4, 0x10
    stw r5, 0x10(r3)
    stfs f0, 0x14(r3)
    stb r6, 0x18(r3)
    addi r3, r3, 0x4
    bl fn_80725050
lbl_fn_80723E60_00001A9C:
    stw r31, lbl_8088052C
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80723EF0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r6
    stw r29, 0x14(r1)
    mr r29, r5
    li r5, 0x0
    bl fn_80619920
    stw r3, lbl_80880528
    li r4, 0x0
    bl fn_80619C60
    lwz r3, lbl_80880528
    li r4, 0x1c
    li r5, 0x4
    bl fn_80619A00
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_80723EF0_00001B30
    lwz r0, 0x0(r30)
    li r5, 0x1
    lfs f0, lbl_80889338
    li r4, 0x10
    stw r29, 0x0(r3)
    stw r0, 0x10(r3)
    stfs f0, 0x14(r3)
    stb r5, 0x18(r3)
    addi r3, r3, 0x4
    bl fn_80725050
lbl_fn_80723EF0_00001B30:
    stw r31, lbl_8088052C
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80723F90(void)
{
    nofralloc
    stw r4, 0x0(r3)
    blr
}

asm void fn_80723FA0(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    blr
}

asm void fn_80723FB0(void)
{
    nofralloc
    lbz r0, 0x0(r4)
    stb r0, 0x10(r3)
    lbz r0, 0x1(r4)
    stb r0, 0x11(r3)
    lbz r0, 0x2(r4)
    stb r0, 0x12(r3)
    lbz r0, 0x3(r4)
    stb r0, 0x13(r3)
    blr
}

asm void fn_80723FE0(void)
{
    nofralloc
    lwz r0, 0x10(r4)
    stw r0, 0x0(r3)
    blr
}

asm void fn_80723FF0(void)
{
    nofralloc
    stfs f1, 0x14(r3)
    blr
}

asm void fn_80724000(void)
{
    nofralloc
    lfs f1, 0x14(r3)
    blr
}

asm void fn_80724010(void)
{
    nofralloc
    stb r4, 0x18(r3)
    blr
}

asm void fn_80724020(void)
{
    nofralloc
    lbz r3, 0x18(r3)
    blr
}

asm void fn_80724030(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    addi r11, r1, 0xa0
    bl _savegpr_25
    mr r25, r3
    mr r26, r4
    mr r27, r5
    mr r28, r6
    bne cr1, lbl_fn_80724030_00001C40
    stfd f1, 0x28(r1)
    stfd f2, 0x30(r1)
    stfd f3, 0x38(r1)
    stfd f4, 0x40(r1)
    stfd f5, 0x48(r1)
    stfd f6, 0x50(r1)
    stfd f7, 0x58(r1)
    stfd f8, 0x60(r1)
lbl_fn_80724030_00001C40:
    stw r3, 0x8(r1)
    addi r11, r1, 0xa8
    addi r0, r1, 0x8
    lis r12, 0x400
    stw r4, 0xc(r1)
    addi r31, r1, 0x68
    lwz r3, lbl_80880528
    li r4, 0x4
    stw r5, 0x10(r1)
    stw r6, 0x14(r1)
    stw r7, 0x18(r1)
    stw r8, 0x1c(r1)
    stw r9, 0x20(r1)
    stw r10, 0x24(r1)
    stw r12, 0x68(r1)
    stw r11, 0x6c(r1)
    stw r0, 0x70(r1)
    bl fn_80619B80
    subi r0, r3, 0x1c
    lwz r3, lbl_80880528
    srwi r29, r0, 1
    li r4, 0x0
    bl fn_80619C60
    lwz r3, lbl_80880528
    mr r4, r29
    li r5, -0x4
    bl fn_80619A00
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_80724030_00001CF0
    mr r4, r29
    mr r5, r28
    mr r6, r31
    bl fn_806869BC
    mr r8, r3
    mr r3, r25
    mr r4, r26
    mr r5, r27
    mr r7, r30
    li r6, 0x1
    bl fn_80724330
    lwz r3, lbl_80880528
    mr r4, r30
    bl fn_80619AB0
lbl_fn_80724030_00001CF0:
    addi r11, r1, 0xa0
    bl _restgpr_25
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_80724140(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    addi r11, r1, 0xa0
    bl _savegpr_25
    mr r25, r3
    mr r26, r4
    mr r27, r5
    mr r28, r6
    mr r29, r7
    bne cr1, lbl_fn_80724140_00001D54
    stfd f1, 0x28(r1)
    stfd f2, 0x30(r1)
    stfd f3, 0x38(r1)
    stfd f4, 0x40(r1)
    stfd f5, 0x48(r1)
    stfd f6, 0x50(r1)
    stfd f7, 0x58(r1)
    stfd f8, 0x60(r1)
lbl_fn_80724140_00001D54:
    cmpwi r6, 0x1
    addi r11, r1, 0xa8
    addi r0, r1, 0x8
    lis r12, 0x500
    stw r3, 0x8(r1)
    li r31, 0x4
    stw r4, 0xc(r1)
    stw r5, 0x10(r1)
    stw r6, 0x14(r1)
    stw r7, 0x18(r1)
    stw r8, 0x1c(r1)
    stw r9, 0x20(r1)
    stw r10, 0x24(r1)
    stw r12, 0x68(r1)
    stw r11, 0x6c(r1)
    stw r0, 0x70(r1)
    bne lbl_fn_80724140_00001D9C
    li r31, -0x4
lbl_fn_80724140_00001D9C:
    lwz r3, lbl_80880528
    li r4, 0x4
    bl fn_80619B80
    subi r0, r3, 0x1c
    lwz r3, lbl_80880528
    srwi r30, r0, 1
    li r4, 0x0
    bl fn_80619C60
    lwz r3, lbl_80880528
    mr r4, r30
    mr r5, r31
    bl fn_80619A00
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_80724140_00001E10
    mr r4, r30
    mr r5, r29
    addi r6, r1, 0x68
    bl fn_806869BC
    mr r8, r3
    mr r3, r25
    mr r4, r26
    mr r5, r27
    mr r6, r28
    mr r7, r31
    bl fn_80724330
    lwz r3, lbl_80880528
    mr r4, r31
    bl fn_80619AB0
lbl_fn_80724140_00001E10:
    addi r11, r1, 0xa0
    bl _restgpr_25
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_80724260(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    cmpwi r6, 0x1
    mr r24, r3
    mr r25, r4
    mr r26, r5
    mr r27, r6
    mr r28, r7
    mr r29, r8
    li r31, 0x4
    bne lbl_fn_80724260_00001E64
    li r31, -0x4
lbl_fn_80724260_00001E64:
    lwz r3, lbl_80880528
    li r4, 0x4
    bl fn_80619B80
    subi r0, r3, 0x1c
    lwz r3, lbl_80880528
    srwi r30, r0, 1
    li r4, 0x0
    bl fn_80619C60
    lwz r3, lbl_80880528
    mr r4, r30
    mr r5, r31
    bl fn_80619A00
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_80724260_00001ED8
    mr r4, r30
    mr r5, r28
    mr r6, r29
    bl fn_806869BC
    mr r8, r3
    mr r3, r24
    mr r4, r25
    mr r5, r26
    mr r6, r27
    mr r7, r31
    bl fn_80724330
    lwz r3, lbl_80880528
    mr r4, r31
    bl fn_80619AB0
lbl_fn_80724260_00001ED8:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80724330(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    cmpwi r6, 0x1
    mr r24, r3
    mr r25, r4
    mr r26, r5
    mr r27, r6
    mr r28, r7
    mr r29, r8
    addi r30, r8, 0x18
    li r31, -0x4
    bne lbl_fn_80724330_00001F38
    li r31, 0x4
lbl_fn_80724330_00001F38:
    lwz r3, lbl_80880528
    li r4, 0x0
    bl fn_80619C60
    lwz r3, lbl_80880528
    mr r4, r30
    mr r5, r31
    bl fn_80619A00
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_80724330_00001F8C
    stw r25, 0x0(r3)
    mr r4, r28
    mr r5, r29
    stw r26, 0x4(r3)
    stw r27, 0x8(r3)
    stw r29, 0xc(r3)
    addi r3, r3, 0x18
    bl memcpy
    mr r4, r30
    addi r3, r24, 0x4
    bl fn_80725070
lbl_fn_80724330_00001F8C:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_807243E0(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    addi r11, r1, 0xa0
    bl _savegpr_25
    mr r25, r3
    mr r26, r4
    mr r27, r5
    mr r28, r6
    bne cr1, lbl_fn_807243E0_00001FF0
    stfd f1, 0x28(r1)
    stfd f2, 0x30(r1)
    stfd f3, 0x38(r1)
    stfd f4, 0x40(r1)
    stfd f5, 0x48(r1)
    stfd f6, 0x50(r1)
    stfd f7, 0x58(r1)
    stfd f8, 0x60(r1)
lbl_fn_807243E0_00001FF0:
    stw r3, 0x8(r1)
    addi r11, r1, 0xa8
    addi r0, r1, 0x8
    lis r12, 0x400
    stw r4, 0xc(r1)
    addi r31, r1, 0x68
    lwz r3, lbl_80880528
    li r4, 0x4
    stw r5, 0x10(r1)
    stw r6, 0x14(r1)
    stw r7, 0x18(r1)
    stw r8, 0x1c(r1)
    stw r9, 0x20(r1)
    stw r10, 0x24(r1)
    stw r12, 0x68(r1)
    stw r11, 0x6c(r1)
    stw r0, 0x70(r1)
    bl fn_80619B80
    subi r0, r3, 0x1c
    lwz r3, lbl_80880528
    srwi r29, r0, 1
    li r4, 0x0
    bl fn_80619C60
    lwz r3, lbl_80880528
    mr r4, r29
    li r5, -0x4
    bl fn_80619A00
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_807243E0_000020A0
    mr r4, r29
    mr r5, r28
    mr r6, r31
    bl fn_806869BC
    mr r8, r3
    mr r3, r25
    mr r4, r26
    mr r5, r27
    mr r7, r30
    li r6, 0x1
    bl fn_80724330
    lwz r3, lbl_80880528
    mr r4, r30
    bl fn_80619AB0
lbl_fn_807243E0_000020A0:
    addi r11, r1, 0xa0
    bl _restgpr_25
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}
