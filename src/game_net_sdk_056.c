#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_17(void);
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_17(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_8059E340(void);
extern void fn_8059E380(void);
extern void fn_8059FFD8(void);
extern void fn_805F3130(void);
extern void fn_805F3210(void);
extern void fn_805F93C0(void);
extern void fn_805F9940(void);
extern void fn_8068A850(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEB0(void);
extern void fn_80703F90(void);
extern void fn_80704890(void);
extern void fn_807097E0(void);
extern void fn_80709820(void);
extern void fn_8070AE20(void);
extern void fn_8070C090(void);
extern void fn_8070C180(void);
extern void fn_8070C2D0(void);
extern void fn_8070C2F0(void);
extern void fn_8070C630(void);
extern void fn_8070CD20(void);
extern void fn_8070CD40(void);
extern void fn_8070CD60(void);
extern void fn_8070CE00(void);
extern void fn_8070CE10(void);
extern void fn_80712C30(void);
extern void fn_80716000(void);
extern void fn_80716070(void);
extern void fn_80716130(void);
extern void fn_80716200(void);
extern void fn_80717590(void);
extern void fn_80717630(void);
extern void fn_807187D0(void);
extern void fn_8071EA40(void);
extern void fn_8071EDB0(void);
extern void fn_8072D280(void);

/* External data declarations */
extern u8 lbl_8076CFC8[];
extern u8 lbl_8076CFF0[];
extern u8 lbl_807C6280[];
extern u8 lbl_807C62B0[];

/* Small data declarations */
extern u32 lbl_808891A8;
extern u32 lbl_808891AC;
extern u32 lbl_808891B0;
extern u32 lbl_808891B4;
extern u32 lbl_808891B8;
extern u32 lbl_808891BC;
extern u32 lbl_808891C0;
extern u32 lbl_808891C8;
extern u32 lbl_808891D0;
extern u32 lbl_808891D8;
extern u32 lbl_808891E0;
extern u32 lbl_808891E4;
extern u32 lbl_808891E8;
extern u32 lbl_808891F0;
extern u32 lbl_808891F8;
extern u32 lbl_80889200;
extern u32 lbl_80889204;
extern u32 lbl_80889208;
extern u32 lbl_8088920C;
extern u32 lbl_80889210;
extern u32 lbl_80889214;
extern u32 lbl_80889218;
extern u32 lbl_8088921C;
extern u32 lbl_80889220;
extern u32 lbl_80889224;
extern u32 lbl_80889228;
extern u32 lbl_8088922C;
extern u32 lbl_80889230;
extern u32 lbl_80889234;
extern u32 lbl_80889238;
extern u32 lbl_80889240;
extern u32 lbl_80889244;
extern u32 lbl_80889248;

/* Function declarations */
void fn_80713C10(void);
void fn_80713CB0(void);
void fn_80714230(void);
void fn_807142A0(void);
void fn_80714390(void);
void fn_80714500(void);
void fn_80714520(void);
void fn_80714930(void);
void fn_807149C0(void);
void fn_80714AA0(void);
void fn_80714C50(void);
void fn_80714CA0(void);
void fn_80714CE0(void);
void fn_80714CF0(void);
void fn_80714D00(void);
void fn_80714E40(void);
void fn_80714FA0(void);
void fn_80715150(void);
void fn_807151F0(void);
void fn_80715530(void);
void fn_807156B0(void);
void fn_807157D0(void);
void fn_80715800(void);
void fn_807159C0(void);
void fn_80715A30(void);
void fn_80715B10(void);
void fn_80715B20(void);
void fn_80715BA0(void);

asm void fn_80713C10(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    mr r30, r4
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    lwz r31, 0xc8(r31)
    b lbl_fn_80713C10_00000068
lbl_fn_80713C10_00000030:
    lbz r0, 0x36(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80713C10_00000064
    lbz r3, 0x35(r31)
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
    cmplw r30, r0
    beq lbl_fn_80713C10_00000064
    stb r30, 0x35(r31)
    mr r4, r30
    lwz r3, 0xd0(r31)
    bl fn_8071EA40
lbl_fn_80713C10_00000064:
    lwz r31, 0xd4(r31)
lbl_fn_80713C10_00000068:
    cmpwi r31, 0x0
    bne lbl_fn_80713C10_00000030
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

asm void fn_80713CB0(void)
{
    nofralloc
    stwu r1, -0xf0(r1)
    mflr r0
    stw r0, 0xf4(r1)
    addi r11, r1, 0x40
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
    stfd f21, 0x40(r1)
    psq_st f21, 0x48(r1), 0, 0
    bl _savegpr_26
    lis r0, 0x4330
    stw r0, 0x18(r1)
    mr r30, r3
    stw r0, 0x20(r1)
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    lbz r0, 0x5(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80713CB0_00000144
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    b lbl_fn_80713CB0_000005A8
lbl_fn_80713CB0_00000144:
    lwz r0, 0xc8(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80713CB0_00000160
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    b lbl_fn_80713CB0_000005A8
lbl_fn_80713CB0_00000160:
    lha r4, 0x72(r30)
    lha r3, 0x74(r30)
    lfs f29, lbl_808891A8
    cmpw r3, r4
    blt lbl_fn_80713CB0_0000017C
    lbz r0, 0x71(r30)
    b lbl_fn_80713CB0_00000198
lbl_fn_80713CB0_0000017C:
    lbz r5, 0x70(r30)
    lbz r0, 0x71(r30)
    subf r0, r5, r0
    mullw r0, r3, r0
    divw r0, r0, r4
    add r0, r5, r0
    clrlwi r0, r0, 24
lbl_fn_80713CB0_00000198:
    stw r0, 0x1c(r1)
    lbz r0, 0x88(r30)
    lfd f3, lbl_808891C8
    lfd f1, 0x18(r1)
    lwz r3, 0xc4(r30)
    stw r0, 0x24(r1)
    fsubs f1, f1, f3
    lbz r0, 0xe8(r3)
    lfd f0, 0x20(r1)
    lfs f4, lbl_808891B0
    fsubs f2, f0, f3
    stw r0, 0x1c(r1)
    fdivs f6, f1, f4
    lfs f0, 0x8(r30)
    lfd f1, 0x18(r1)
    lfs f5, 0x4(r3)
    lha r6, 0x84(r30)
    lha r5, 0x86(r30)
    fsubs f3, f1, f3
    cmpw r5, r6
    fdivs f2, f2, f4
    fmuls f1, f6, f6
    fdivs f3, f3, f4
    fmuls f29, f29, f1
    fmuls f2, f2, f2
    fmuls f1, f3, f3
    fmuls f29, f29, f2
    fmuls f29, f29, f1
    fmuls f29, f29, f0
    fmuls f29, f29, f5
    blt lbl_fn_80713CB0_00000220
    lbz r0, 0x83(r30)
    extsb r0, r0
    b lbl_fn_80713CB0_00000244
lbl_fn_80713CB0_00000220:
    lbz r7, 0x82(r30)
    lbz r0, 0x83(r30)
    extsb r4, r7
    extsb r0, r0
    subf r0, r4, r0
    mullw r0, r5, r0
    divw r0, r0, r6
    add r0, r7, r0
    extsb r0, r0
lbl_fn_80713CB0_00000244:
    xoris r0, r0, 0x8000
    stw r0, 0x1c(r1)
    lbz r0, 0x8a(r30)
    lfd f1, lbl_808891D0
    lfd f0, 0x18(r1)
    stw r0, 0x24(r1)
    fsubs f1, f0, f1
    lfs f0, lbl_808891B4
    lfd f3, lbl_808891C8
    lfd f2, 0x20(r1)
    fmuls f1, f1, f0
    lfs f27, lbl_808891A8
    lfs f4, 0x8(r3)
    fsubs f2, f2, f3
    lfs f0, 0xc(r30)
    fmuls f27, f27, f4
    lha r6, 0x78(r30)
    fmuls f28, f2, f1
    lha r5, 0x7a(r30)
    fmuls f27, f27, f0
    lfs f26, lbl_808891AC
    cmpw r5, r6
    blt lbl_fn_80713CB0_000002AC
    lbz r0, 0x77(r30)
    extsb r0, r0
    b lbl_fn_80713CB0_000002D0
lbl_fn_80713CB0_000002AC:
    lbz r7, 0x76(r30)
    lbz r0, 0x77(r30)
    extsb r4, r7
    extsb r0, r0
    subf r0, r4, r0
    mullw r0, r5, r0
    divw r0, r0, r6
    add r0, r7, r0
    extsb r0, r0
lbl_fn_80713CB0_000002D0:
    xoris r0, r0, 0x8000
    stw r0, 0x24(r1)
    lfd f2, lbl_808891D0
    lfd f1, 0x20(r1)
    lfs f0, lbl_808891B8
    fsubs f1, f1, f2
    lfs f2, lbl_808891A8
    fdivs f0, f1, f0
    fcmpo cr0, f0, f2
    ble lbl_fn_80713CB0_000002FC
    b lbl_fn_80713CB0_00000310
lbl_fn_80713CB0_000002FC:
    lfs f2, lbl_808891BC
    fcmpo cr0, f0, f2
    bge lbl_fn_80713CB0_0000030C
    b lbl_fn_80713CB0_00000310
lbl_fn_80713CB0_0000030C:
    fmr f2, f0
lbl_fn_80713CB0_00000310:
    fadds f26, f26, f2
    lfs f1, 0x18(r30)
    lfs f2, 0xd0(r3)
    lfs f0, 0x10(r30)
    fmuls f26, f26, f1
    lfs f1, 0xc(r3)
    lha r6, 0x7e(r30)
    lha r5, 0x80(r30)
    fmuls f26, f26, f2
    lfs f25, lbl_808891AC
    cmpw r5, r6
    fadds f26, f26, f0
    fadds f26, f26, f1
    blt lbl_fn_80713CB0_00000354
    lbz r0, 0x7d(r30)
    extsb r0, r0
    b lbl_fn_80713CB0_00000378
lbl_fn_80713CB0_00000354:
    lbz r7, 0x7c(r30)
    lbz r0, 0x7d(r30)
    extsb r4, r7
    extsb r0, r0
    subf r0, r4, r0
    mullw r0, r5, r0
    divw r0, r0, r6
    add r0, r7, r0
    extsb r0, r0
lbl_fn_80713CB0_00000378:
    xoris r0, r0, 0x8000
    stw r0, 0x1c(r1)
    lfd f2, lbl_808891D0
    lfd f1, 0x18(r1)
    lfs f0, lbl_808891B8
    fsubs f1, f1, f2
    lfs f2, lbl_808891C0
    fdivs f0, f1, f0
    fcmpo cr0, f0, f2
    ble lbl_fn_80713CB0_000003A4
    b lbl_fn_80713CB0_000003B8
lbl_fn_80713CB0_000003A4:
    lfs f2, lbl_808891AC
    fcmpo cr0, f0, f2
    bge lbl_fn_80713CB0_000003B4
    b lbl_fn_80713CB0_000003B8
lbl_fn_80713CB0_000003B4:
    fmr f2, f0
lbl_fn_80713CB0_000003B8:
    fadds f25, f25, f2
    lfs f1, 0x14(r30)
    lfs f24, lbl_808891AC
    lfs f0, 0x9c(r30)
    fadds f25, f25, f1
    lfs f1, 0x10(r3)
    fadds f24, f24, f0
    lbz r0, 0x1c(r3)
    lfs f0, 0x14(r3)
    cmpwi r0, 0x0
    fadds f25, f25, f1
    lbz r31, 0x9a(r30)
    fadds f24, f24, f0
    lfs f23, 0xa0(r30)
    beq lbl_fn_80713CB0_000003FC
    lfs f23, 0x18(r3)
    mr r31, r0
lbl_fn_80713CB0_000003FC:
    lbz r0, 0x96(r30)
    addi r28, r1, 0x8
    stw r0, 0x24(r1)
    li r27, 0x0
    lfs f22, lbl_808891AC
    lfd f30, lbl_808891C8
    lfd f0, 0x20(r1)
    fmr f21, f22
    lfs f31, lbl_808891B0
    fsubs f1, f0, f30
    lfs f0, lbl_808891A8
    lfs f2, 0x28(r3)
    lbz r29, 0x1d(r3)
    fdivs f1, f1, f31
    fsubs f0, f1, f0
    fadds f22, f22, f0
    fadds f22, f22, f2
lbl_fn_80713CB0_00000440:
    add r3, r30, r27
    stfs f21, 0x0(r28)
    lbz r0, 0x97(r3)
    mr r4, r27
    stw r0, 0x1c(r1)
    lfs f0, 0x0(r28)
    lfd f1, 0x18(r1)
    lwz r3, 0xc4(r30)
    fsubs f1, f1, f30
    fdivs f1, f1, f31
    fadds f0, f0, f1
    stfs f0, 0x0(r28)
    bl fn_807097E0
    lfs f0, 0x0(r28)
    addi r27, r27, 0x1
    cmpwi r27, 0x3
    fadds f0, f0, f1
    stfs f0, 0x0(r28)
    addi r28, r28, 0x4
    blt lbl_fn_80713CB0_00000440
    lwz r27, 0xc8(r30)
    lfs f21, 0x8(r1)
    lfs f31, 0xc(r1)
    lfs f30, 0x10(r1)
    b lbl_fn_80713CB0_00000594
lbl_fn_80713CB0_000004A4:
    stfs f29, 0x40(r27)
    fmr f1, f23
    mr r3, r27
    mr r4, r31
    stfs f28, 0x80(r27)
    stfs f27, 0x44(r27)
    stfs f26, 0x48(r27)
    stfs f25, 0x4c(r27)
    stfs f24, 0x50(r27)
    bl fn_8070C2F0
    stb r29, 0x3c(r27)
    mr r28, r27
    li r26, 0x0
    lwz r3, 0xc4(r30)
    lwz r0, 0x20(r3)
    stw r0, 0x58(r27)
    lwz r3, 0xc4(r30)
    lfs f0, 0x24(r3)
    stfs f0, 0x5c(r27)
    stfs f22, 0x60(r27)
    stfs f21, 0x64(r27)
    stfs f31, 0x68(r27)
    stfs f30, 0x6c(r27)
lbl_fn_80713CB0_00000500:
    lwz r3, 0xc4(r30)
    mr r4, r26
    bl fn_80709820
    addi r26, r26, 0x1
    stfs f1, 0x70(r28)
    cmpwi r26, 0x4
    addi r28, r28, 0x4
    blt lbl_fn_80713CB0_00000500
    li r26, 0x0
    li r28, 0x0
    b lbl_fn_80713CB0_00000548
lbl_fn_80713CB0_0000052C:
    add r5, r3, r28
    lwz r3, 0xd0(r27)
    mr r4, r26
    addi r5, r5, 0x50
    bl fn_8071EDB0
    addi r28, r28, 0x18
    addi r26, r26, 0x1
lbl_fn_80713CB0_00000548:
    lwz r3, 0xc4(r30)
    lwz r0, 0xe4(r3)
    cmpw r26, r0
    blt lbl_fn_80713CB0_0000052C
    lfs f0, 0x58(r30)
    stfs f0, 0x1c(r27)
    lfs f0, 0x5c(r30)
    stfs f0, 0x20(r27)
    lwz r0, 0x60(r30)
    stw r0, 0x24(r27)
    lbz r0, 0x64(r30)
    stb r0, 0x28(r27)
    lhz r0, 0x65(r30)
    sth r0, 0x29(r27)
    lbz r0, 0x67(r30)
    stb r0, 0x2b(r27)
    lbz r0, 0x68(r30)
    stb r0, 0x34(r27)
    lwz r27, 0xd4(r27)
lbl_fn_80713CB0_00000594:
    cmpwi r27, 0x0
    bne lbl_fn_80713CB0_000004A4
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
lbl_fn_80713CB0_000005A8:
    addi r11, r1, 0x40
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
    psq_l f21, 0x48(r1), 0, 0
    lfd f21, 0x40(r1)
    bl _restgpr_26
    lwz r0, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0xf0
    blr
}

asm void fn_80714230(void)
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
    lwz r31, 0xc8(r30)
    b lbl_fn_80714230_00000658
lbl_fn_80714230_0000064C:
    mr r3, r31
    bl fn_8070C630
    lwz r31, 0xd4(r31)
lbl_fn_80714230_00000658:
    cmpwi r31, 0x0
    bne lbl_fn_80714230_0000064C
    li r0, 0x0
    stw r0, 0xc8(r30)
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

asm void fn_807142A0(void)
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
    cmpwi r30, 0x0
    beq lbl_fn_807142A0_000006D0
    cmpwi r30, 0x2
    bne lbl_fn_807142A0_000006D8
lbl_fn_807142A0_000006D0:
    mr r3, r29
    bl fn_8070C630
lbl_fn_807142A0_000006D8:
    lwz r3, 0xc4(r31)
    cmpwi r3, 0x0
    beq lbl_fn_807142A0_000006F8
    lwz r12, 0x0(r3)
    mr r4, r29
    lwz r12, 0x58(r12)
    mtctr r12
    bctrl
lbl_fn_807142A0_000006F8:
    lwz r3, 0xc8(r31)
    cmplw r3, r29
    bne lbl_fn_807142A0_00000744
    lwz r0, 0xd4(r29)
    stw r0, 0xc8(r31)
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    b lbl_fn_807142A0_0000075C
    b lbl_fn_807142A0_00000744
lbl_fn_807142A0_00000720:
    cmplw r0, r29
    bne lbl_fn_807142A0_00000740
    lwz r0, 0xd4(r29)
    stw r0, 0xd4(r3)
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    b lbl_fn_807142A0_0000075C
lbl_fn_807142A0_00000740:
    mr r3, r0
lbl_fn_807142A0_00000744:
    lwz r0, 0xd4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_807142A0_00000720
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
lbl_fn_807142A0_0000075C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80714390(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    cmpwi r31, 0x0
    beq lbl_fn_80714390_000007CC
    cmpwi r31, 0x3
    beq lbl_fn_80714390_000007D8
    cmpwi r31, 0x2
    beq lbl_fn_80714390_00000828
    cmpwi r31, 0x1
    beq lbl_fn_80714390_000008B8
    b lbl_fn_80714390_000008C0
lbl_fn_80714390_000007CC:
    li r0, 0x0
    stb r0, 0x48(r30)
    b lbl_fn_80714390_000008C0
lbl_fn_80714390_000007D8:
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    lwz r31, 0xc8(r30)
    b lbl_fn_80714390_00000800
lbl_fn_80714390_000007EC:
    mr r3, r31
    bl fn_8070C630
    mr r3, r31
    bl fn_8070C180
    lwz r31, 0xd4(r31)
lbl_fn_80714390_00000800:
    cmpwi r31, 0x0
    bne lbl_fn_80714390_000007EC
    li r0, 0x0
    stw r0, 0xc8(r30)
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    li r0, 0x1
    stb r0, 0x48(r30)
    b lbl_fn_80714390_000008C0
lbl_fn_80714390_00000828:
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    mr r3, r30
    bl fn_80713CB0
    lwz r31, 0xc8(r30)
    b lbl_fn_80714390_0000085C
lbl_fn_80714390_00000844:
    lbz r0, 0x36(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80714390_00000858
    mr r3, r31
    bl fn_8070C090
lbl_fn_80714390_00000858:
    lwz r31, 0xd4(r31)
lbl_fn_80714390_0000085C:
    cmpwi r31, 0x0
    bne lbl_fn_80714390_00000844
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    lwz r31, 0xc8(r30)
    b lbl_fn_80714390_00000890
lbl_fn_80714390_00000884:
    mr r3, r31
    bl fn_8070C630
    lwz r31, 0xd4(r31)
lbl_fn_80714390_00000890:
    cmpwi r31, 0x0
    bne lbl_fn_80714390_00000884
    li r0, 0x0
    stw r0, 0xc8(r30)
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    li r0, 0x1
    stb r0, 0x48(r30)
    b lbl_fn_80714390_000008C0
lbl_fn_80714390_000008B8:
    li r0, 0x1
    stb r0, 0x48(r30)
lbl_fn_80714390_000008C0:
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

asm void fn_80714500(void)
{
    nofralloc
    cmpwi r4, 0x10
    bge lbl_fn_80714500_00000908
    slwi r0, r4, 1
    add r3, r3, r0
    addi r3, r3, 0xa4
    blr
lbl_fn_80714500_00000908:
    li r3, 0x0
    blr
}

asm void fn_80714520(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r11, r1, 0x70
    bl _savegpr_25
    lis r0, 0x4330
    stw r0, 0x30(r1)
    mr r25, r3
    mr r26, r4
    stw r0, 0x38(r1)
    mr r27, r5
    mr r28, r6
    mr r29, r7
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    lbz r0, 0x89(r25)
    lis r3, 0x8102
    addi r3, r3, 0x409
    cmpwi r29, 0x0
    mullw r0, r27, r0
    lwz r31, 0xc4(r25)
    li r30, 0x0
    mulhw r3, r3, r0
    add r0, r3, r0
    srawi r0, r0, 6
    srwi r3, r0, 31
    add r27, r0, r3
    beq lbl_fn_80714520_000009BC
    lwz r30, 0xc8(r25)
    cmpwi r30, 0x0
    beq lbl_fn_80714520_000009BC
    xoris r0, r27, 0x8000
    stw r0, 0x34(r1)
    clrlwi r0, r26, 24
    lfd f2, lbl_808891D0
    lfd f1, 0x30(r1)
    lfs f0, lbl_808891B0
    fsubs f1, f1, f2
    stw r0, 0xa8(r30)
    fdivs f0, f1, f0
    fmuls f0, f0, f0
    stfs f0, 0x90(r30)
lbl_fn_80714520_000009BC:
    lbz r0, 0x27(r25)
    cmpwi r0, 0x0
    beq lbl_fn_80714520_00000A20
    lwz r30, 0xc8(r25)
    cmpwi r30, 0x0
    beq lbl_fn_80714520_00000A20
    lwz r0, 0x0(r30)
    cmpwi r0, 0x4
    bne lbl_fn_80714520_000009F0
    mr r3, r30
    bl fn_8070C180
    li r30, 0x0
    b lbl_fn_80714520_00000A20
lbl_fn_80714520_000009F0:
    xoris r0, r27, 0x8000
    stw r0, 0x3c(r1)
    clrlwi r0, r26, 24
    lfd f2, lbl_808891D0
    lfd f1, 0x38(r1)
    lfs f0, lbl_808891B0
    fsubs f1, f1, f2
    stw r0, 0xa8(r30)
    fdivs f0, f1, f0
    fmuls f0, f0, f0
    stfs f0, 0x90(r30)
    stw r28, 0xb0(r30)
lbl_fn_80714520_00000A20:
    cmpwi r30, 0x0
    bne lbl_fn_80714520_00000B4C
    lis r3, lbl_8076CFC8@ha
    lwzu r11, lbl_8076CFC8@l(r3)
    stw r11, 0x8(r1)
    cmpwi r29, 0x0
    lwz r10, 0x4(r3)
    li r0, -0x1
    lwz r9, 0x8(r3)
    lwz r8, 0xc(r3)
    lwz r7, 0x10(r3)
    lwz r6, 0x14(r3)
    lwz r5, 0x18(r3)
    lwz r4, 0x1c(r3)
    lwz r3, 0x20(r3)
    stw r10, 0xc(r1)
    stw r9, 0x10(r1)
    stw r8, 0x14(r1)
    stw r7, 0x18(r1)
    stw r6, 0x1c(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r3, 0x28(r1)
    lwz r3, 0x54(r25)
    stw r3, 0x8(r1)
    stw r26, 0xc(r1)
    stw r27, 0x10(r1)
    bne lbl_fn_80714520_00000A94
    mr r0, r28
lbl_fn_80714520_00000A94:
    stw r0, 0x14(r1)
    addi r5, r1, 0x8
    lbz r0, 0x8b(r25)
    extsb r0, r0
    stw r0, 0x18(r1)
    lbz r3, 0xe9(r31)
    lbz r0, 0x8d(r25)
    add r0, r3, r0
    stw r0, 0x1c(r1)
    lwz r3, 0xc4(r25)
    lwz r0, 0xe4(r3)
    stw r0, 0x20(r1)
    stw r25, 0x28(r1)
    lwz r4, 0x50(r25)
    bl fn_80712C30
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_80714520_00000AF0
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    li r3, 0x0
    b lbl_fn_80714520_00000D00
lbl_fn_80714520_00000AF0:
    lwz r0, 0xbc(r3)
    cmpwi r0, 0x0
    ble lbl_fn_80714520_00000B28
    lwz r27, 0xc8(r25)
    b lbl_fn_80714520_00000B20
lbl_fn_80714520_00000B04:
    lwz r3, 0xbc(r27)
    lwz r0, 0xbc(r30)
    cmpw r3, r0
    bne lbl_fn_80714520_00000B1C
    mr r3, r27
    bl fn_8070C090
lbl_fn_80714520_00000B1C:
    lwz r27, 0xd4(r27)
lbl_fn_80714520_00000B20:
    cmpwi r27, 0x0
    bne lbl_fn_80714520_00000B04
lbl_fn_80714520_00000B28:
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    lwz r0, 0xc8(r25)
    stw r0, 0xd4(r30)
    stw r30, 0xc8(r25)
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
lbl_fn_80714520_00000B4C:
    lbz r4, 0x90(r25)
    cmplwi r4, 0x7f
    bgt lbl_fn_80714520_00000B60
    mr r3, r30
    bl fn_8070CD20
lbl_fn_80714520_00000B60:
    lbz r4, 0x91(r25)
    cmplwi r4, 0x7f
    bgt lbl_fn_80714520_00000B74
    mr r3, r30
    bl fn_8070CD60
lbl_fn_80714520_00000B74:
    lbz r4, 0x92(r25)
    cmplwi r4, 0x7f
    bgt lbl_fn_80714520_00000B88
    mr r3, r30
    bl fn_8070CE00
lbl_fn_80714520_00000B88:
    lbz r4, 0x93(r25)
    cmplwi r4, 0x7f
    bgt lbl_fn_80714520_00000B9C
    mr r3, r30
    bl fn_8070CE10
lbl_fn_80714520_00000B9C:
    lha r4, 0x94(r25)
    cmpwi r4, 0x7f
    bgt lbl_fn_80714520_00000BB0
    mr r3, r30
    bl fn_8070CD40
lbl_fn_80714520_00000BB0:
    lbz r0, 0x4b(r25)
    lfs f1, 0x6c(r25)
    cmpwi r0, 0x0
    beq lbl_fn_80714520_00000BE0
    lbz r0, 0x8e(r25)
    lfd f2, lbl_808891D0
    subf r0, r26, r0
    xoris r0, r0, 0x8000
    stw r0, 0x34(r1)
    lfd f0, 0x30(r1)
    fsubs f0, f0, f2
    fadds f1, f1, f0
lbl_fn_80714520_00000BE0:
    lbz r0, 0x8f(r25)
    cmpwi r0, 0x0
    bne lbl_fn_80714520_00000C00
    mr r3, r30
    mr r4, r28
    li r5, 0x0
    bl fn_8070C2D0
    b lbl_fn_80714520_00000C5C
lbl_fn_80714520_00000C00:
    lfs f0, lbl_808891AC
    mullw r0, r0, r0
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_80714520_00000C1C
    fmr f3, f1
    b lbl_fn_80714520_00000C20
lbl_fn_80714520_00000C1C:
    fneg f3, f1
lbl_fn_80714520_00000C20:
    xoris r0, r0, 0x8000
    stw r0, 0x3c(r1)
    lfd f2, lbl_808891D0
    mr r3, r30
    lfd f0, 0x38(r1)
    li r5, 0x1
    fsubs f0, f0, f2
    fmuls f0, f0, f3
    fctiwz f0, f0
    stfd f0, 0x40(r1)
    lwz r0, 0x44(r1)
    srawi r4, r0, 5
    slwi r0, r4, 2
    add r4, r0, r4
    bl fn_8070C2D0
lbl_fn_80714520_00000C5C:
    stb r26, 0x8e(r25)
    lbz r3, 0x49(r25)
    lhz r5, 0xa2(r30)
    lhz r4, 0xa4(r30)
    neg r0, r3
    or r0, r0, r3
    cmplw r4, r5
    srwi r3, r0, 31
    blt lbl_fn_80714520_00000C88
    lbz r4, 0xa1(r30)
    b lbl_fn_80714520_00000CA4
lbl_fn_80714520_00000C88:
    lbz r6, 0xa0(r30)
    lbz r0, 0xa1(r30)
    subf r0, r6, r0
    mullw r0, r4, r0
    divw r0, r0, r5
    add r0, r6, r0
    clrlwi r4, r0, 24
lbl_fn_80714520_00000CA4:
    neg r0, r3
    stb r4, 0xa0(r30)
    or r0, r0, r3
    li r3, 0xff
    srawi r4, r0, 31
    andc r3, r3, r4
    stb r3, 0xa1(r30)
    li r0, 0x0
    sth r0, 0xa2(r30)
    sth r0, 0xa4(r30)
    lwz r3, 0xc4(r25)
    lbz r0, 0xcf(r3)
    stb r0, 0x39(r30)
    lwz r3, 0xc4(r25)
    lwz r0, 0x2c(r3)
    stw r0, 0xb4(r30)
    lwz r3, 0xc4(r25)
    lwz r0, 0x30(r3)
    stw r0, 0xb8(r30)
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    mr r3, r30
lbl_fn_80714520_00000D00:
    addi r11, r1, 0x70
    bl _restgpr_25
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_80714930(void)
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
    bl fn_80716070
    lis r3, lbl_807C6280@ha
    lfs f0, lbl_808891D8
    addi r3, r3, lbl_807C6280@l
    li r4, 0x0
    addi r5, r3, 0x1c
    li r0, 0x1
    stw r3, 0x0(r29)
    mr r3, r29
    stw r5, 0x54(r29)
    stw r31, 0x58(r29)
    stw r30, 0x5c(r29)
    stw r4, 0x60(r29)
    stfs f0, 0x64(r29)
    stfs f0, 0x68(r29)
    stfs f0, 0x6c(r29)
    stfs f0, 0x70(r29)
    stfs f0, 0x74(r29)
    stfs f0, 0x78(r29)
    stb r0, 0x7c(r29)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_807149C0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    cmpwi r3, 0x0
    mr r25, r3
    mr r26, r4
    beq lbl_fn_807149C0_00000E68
    lis r4, lbl_807C6280@ha
    li r28, 0x0
    addi r4, r4, lbl_807C6280@l
    stw r4, 0x0(r3)
    addi r0, r4, 0x1c
    li r27, 0x0
    stw r0, 0x54(r3)
    li r29, 0x0
lbl_fn_807149C0_00000DF4:
    add r3, r25, r27
    lwz r31, 0xc(r3)
    addi r30, r3, 0xc
    b lbl_fn_807149C0_00000E34
lbl_fn_807149C0_00000E04:
    mr r4, r31
    lwz r31, 0x0(r31)
    addi r3, r1, 0x8
    stw r29, 0x8(r1)
    subi r4, r4, 0x108
    bl fn_80717590
    lwz r3, 0x8(r1)
    cmpwi r3, 0x0
    beq lbl_fn_807149C0_00000E2C
    stw r29, 0x20(r3)
lbl_fn_807149C0_00000E2C:
    addi r3, r1, 0x8
    bl fn_80717630
lbl_fn_807149C0_00000E34:
    cmplw r31, r30
    bne lbl_fn_807149C0_00000E04
    addi r28, r28, 0x1
    addi r27, r27, 0x10
    cmpwi r28, 0x4
    blt lbl_fn_807149C0_00000DF4
    mr r3, r25
    li r4, 0x0
    bl fn_80716130
    cmpwi r26, 0x0
    ble lbl_fn_807149C0_00000E68
    mr r3, r25
    bl dtor_80084684
lbl_fn_807149C0_00000E68:
    addi r11, r1, 0x30
    mr r3, r25
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80714AA0(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r11, r1, 0x70
    bl _savegpr_26
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r30, r6
    mr r31, r7
    addi r3, r1, 0x28
    bl fn_80716000
    lfs f0, 0x64(r27)
    stfs f0, 0x28(r1)
    lfs f0, 0x68(r27)
    stfs f0, 0x2c(r1)
    lfs f0, 0x6c(r27)
    stfs f0, 0x30(r1)
    lfs f0, 0x70(r27)
    stfs f0, 0x34(r1)
    lfs f0, 0x74(r27)
    stfs f0, 0x38(r1)
    lfs f0, 0x78(r27)
    stfs f0, 0x3c(r1)
    lwz r0, 0x60(r27)
    stw r0, 0x48(r1)
    lwz r3, 0x5c(r27)
    cmpwi r3, 0x0
    beq lbl_fn_80714AA0_00000F80
    bl fn_8059FFD8
    mr r26, r3
    mr r4, r29
    addi r5, r1, 0x8
    bl fn_8059E380
    cmpwi r3, 0x0
    beq lbl_fn_80714AA0_00000F70
    lbz r5, 0xc(r1)
    lwz r4, 0x8(r1)
    lbz r3, 0xd(r1)
    cmpwi r5, 0x1
    lbz r0, 0xe(r1)
    stw r4, 0x40(r1)
    stb r3, 0x45(r1)
    stb r0, 0x46(r1)
    beq lbl_fn_80714AA0_00000F50
    cmpwi r5, 0x2
    beq lbl_fn_80714AA0_00000F5C
    b lbl_fn_80714AA0_00000F68
lbl_fn_80714AA0_00000F50:
    li r0, 0x1
    stb r0, 0x44(r1)
    b lbl_fn_80714AA0_00000F70
lbl_fn_80714AA0_00000F5C:
    li r0, 0x2
    stb r0, 0x44(r1)
    b lbl_fn_80714AA0_00000F70
lbl_fn_80714AA0_00000F68:
    li r0, 0x1
    stb r0, 0x44(r1)
lbl_fn_80714AA0_00000F70:
    mr r3, r26
    mr r4, r29
    bl fn_8059E340
    stw r3, 0x4c(r1)
lbl_fn_80714AA0_00000F80:
    lis r7, lbl_8076CFF0@ha
    lwzu r6, lbl_8076CFF0@l(r7)
    stw r6, 0x10(r1)
    cmpwi r27, 0x0
    lwz r5, 0x4(r7)
    mr r8, r27
    lwz r4, 0x8(r7)
    lwz r3, 0xc(r7)
    lwz r0, 0x10(r7)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r3, 0x1c(r1)
    stw r0, 0x20(r1)
    lwz r0, 0x58(r27)
    stw r0, 0x10(r1)
    beq lbl_fn_80714AA0_00000FC4
    addi r8, r27, 0x54
lbl_fn_80714AA0_00000FC4:
    stw r8, 0x14(r1)
    lwz r3, 0x58(r27)
    cmpwi r3, 0x0
    beq lbl_fn_80714AA0_00000FD8
    addi r3, r3, 0x4
lbl_fn_80714AA0_00000FD8:
    addi r0, r1, 0x28
    stw r3, 0x18(r1)
    mr r3, r27
    mr r4, r28
    stw r0, 0x1c(r1)
    mr r5, r29
    mr r6, r30
    mr r8, r31
    addi r7, r1, 0x10
    bl fn_80716200
    lwz r0, 0x0(r28)
    mr r26, r3
    cmpwi r0, 0x0
    beq lbl_fn_80714AA0_0000101C
    mr r3, r0
    li r4, 0x3
    bl fn_8070AE20
lbl_fn_80714AA0_0000101C:
    addi r11, r1, 0x70
    mr r3, r26
    bl _restgpr_26
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_80714C50(void)
{
    nofralloc
    lbz r0, 0x7c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80714C50_0000106C
    psq_l f2, 0x0(r4), 0, 0
    psq_l f1, 0x64(r3), 0, 0
    ps_sub f0, f2, f1
    psq_l f2, 0x8(r4), 1, 0
    psq_l f1, 0x6c(r3), 1, 0
    psq_st f0, 0x70(r3), 0, 0
    ps_sub f0, f2, f1
    psq_st f0, 0x78(r3), 1, 0
lbl_fn_80714C50_0000106C:
    lfs f2, 0x0(r4)
    li r0, 0x0
    lfs f1, 0x4(r4)
    lfs f0, 0x8(r4)
    stfs f2, 0x64(r3)
    stfs f1, 0x68(r3)
    stfs f0, 0x6c(r3)
    stb r0, 0x7c(r3)
    blr
}

asm void fn_80714CA0(void)
{
    nofralloc
    lfs f0, 0x64(r3)
    stfs f0, 0x0(r4)
    lfs f0, 0x68(r3)
    stfs f0, 0x4(r4)
    lfs f0, 0x6c(r3)
    stfs f0, 0x8(r4)
    lfs f0, 0x70(r3)
    stfs f0, 0xc(r4)
    lfs f0, 0x74(r3)
    stfs f0, 0x10(r4)
    lfs f0, 0x78(r3)
    stfs f0, 0x14(r4)
    lwz r0, 0x60(r3)
    stw r0, 0x20(r4)
    blr
}

asm void fn_80714CE0(void)
{
    nofralloc
    subi r3, r3, 0x54
    b fn_80714CA0
}

asm void fn_80714CF0(void)
{
    nofralloc
    subi r3, r3, 0x54
    b fn_807149C0
}

asm void fn_80714D00(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_27
    psq_l f2, 0x0(r5), 0, 0
    addi r8, r1, 0x8
    psq_l f1, 0x30(r4), 0, 0
    mr r27, r3
    mr r31, r4
    mr r28, r5
    ps_sub f0, f2, f1
    psq_l f2, 0x8(r5), 1, 0
    psq_l f1, 0x38(r4), 1, 0
    mr r29, r6
    psq_st f0, 0x0(r8), 0, 0
    mr r30, r7
    ps_sub f0, f2, f1
    mr r3, r8
    psq_st f0, 0x8(r8), 1, 0
    bl fn_805F9940
    lbz r3, 0x1d(r28)
    lis r0, 0x4330
    stw r0, 0x18(r1)
    lfs f4, 0x4c(r31)
    stw r3, 0x1c(r1)
    lfd f3, lbl_808891F0
    fcmpo cr0, f1, f4
    lfd f2, 0x18(r1)
    lfs f0, lbl_808891E0
    fsubs f2, f2, f3
    lfs f3, 0x50(r31)
    lwz r31, 0x1c(r27)
    lbz r0, 0x1c(r28)
    fmuls f2, f2, f0
    lfs f5, lbl_808891E4
    ble lbl_fn_80714D00_000011D4
    cmpwi r0, 0x1
    beq lbl_fn_80714D00_00001198
    cmpwi r0, 0x2
    beq lbl_fn_80714D00_000011B0
    b lbl_fn_80714D00_000011D4
lbl_fn_80714D00_00001198:
    fsubs f0, f1, f4
    fmr f1, f2
    fdivs f2, f0, f3
    bl fn_8068AEB0
    frsp f5, f1
    b lbl_fn_80714D00_000011D4
lbl_fn_80714D00_000011B0:
    fsubs f1, f1, f4
    lfs f0, lbl_808891E8
    fsubs f2, f5, f2
    fdivs f1, f1, f3
    fmuls f1, f2, f1
    fsubs f5, f5, f1
    fcmpo cr0, f5, f0
    bge lbl_fn_80714D00_000011D4
    fmr f5, f0
lbl_fn_80714D00_000011D4:
    xoris r3, r31, 0x8000
    lis r0, 0x4330
    lfs f0, lbl_808891E4
    addi r11, r1, 0x40
    stw r3, 0x1c(r1)
    lfd f1, lbl_808891F8
    fsubs f2, f0, f5
    stw r0, 0x18(r1)
    lfd f0, 0x18(r1)
    stfs f5, 0x0(r29)
    fsubs f0, f0, f1
    fmuls f0, f2, f0
    fctiwz f0, f0
    stfd f0, 0x20(r1)
    lwz r0, 0x24(r1)
    neg r0, r0
    stw r0, 0x0(r30)
    bl _restgpr_27
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80714E40(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    addi r11, r1, 0x30
    stfd f31, 0x90(r1)
    psq_st f31, 0x98(r1), 0, 0
    stfd f30, 0x80(r1)
    psq_st f30, 0x88(r1), 0, 0
    stfd f29, 0x70(r1)
    psq_st f29, 0x78(r1), 0, 0
    stfd f28, 0x60(r1)
    psq_st f28, 0x68(r1), 0, 0
    stfd f27, 0x50(r1)
    psq_st f27, 0x58(r1), 0, 0
    stfd f26, 0x40(r1)
    psq_st f26, 0x48(r1), 0, 0
    stfd f25, 0x30(r1)
    psq_st f25, 0x38(r1), 0, 0
    bl _savegpr_27
    mr r28, r4
    mr r27, r3
    mr r4, r5
    mr r29, r6
    mr r30, r7
    mr r31, r8
    mr r3, r28
    addi r5, r1, 0x8
    bl fn_805F93C0
    addi r3, r1, 0x8
    bl fn_805F9940
    fmr f25, f1
    lfs f27, 0x20(r27)
    lfs f26, 0x48(r28)
    lfs f28, 0xc(r29)
    lfs f29, 0x8(r29)
    lfs f30, 0x4(r29)
    lfs f31, 0x0(r29)
    bl fn_80703F90
    bl fn_80704890
    subi r0, r3, 0x1
    cmplwi r0, 0x1
    ble lbl_fn_80714E40_000012E4
    cmpwi r3, 0x0
    beq lbl_fn_80714E40_00001310
    b lbl_fn_80714E40_00001334
lbl_fn_80714E40_000012E4:
    fmr f1, f26
    mr r4, r30
    fmr f2, f25
    mr r5, r31
    fmr f3, f27
    addi r3, r1, 0x8
    fmr f4, f30
    fmr f5, f29
    fmr f6, f28
    bl fn_807151F0
    b lbl_fn_80714E40_00001340
lbl_fn_80714E40_00001310:
    fmr f1, f26
    mr r4, r30
    fmr f2, f25
    mr r5, r31
    fmr f3, f27
    addi r3, r1, 0x8
    fmr f4, f31
    bl fn_80715530
    b lbl_fn_80714E40_00001340
lbl_fn_80714E40_00001334:
    lfs f0, lbl_808891E8
    stfs f0, 0x0(r30)
    stfs f0, 0x0(r31)
lbl_fn_80714E40_00001340:
    addi r11, r1, 0x30
    psq_l f31, 0x98(r1), 0, 0
    lfd f31, 0x90(r1)
    psq_l f30, 0x88(r1), 0, 0
    lfd f30, 0x80(r1)
    psq_l f29, 0x78(r1), 0, 0
    lfd f29, 0x70(r1)
    psq_l f28, 0x68(r1), 0, 0
    lfd f28, 0x60(r1)
    psq_l f27, 0x58(r1), 0, 0
    lfd f27, 0x50(r1)
    psq_l f26, 0x48(r1), 0, 0
    lfd f26, 0x40(r1)
    psq_l f25, 0x38(r1), 0, 0
    lfd f25, 0x30(r1)
    bl _restgpr_27
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_80714FA0(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    lfs f0, lbl_808891E8
    stw r0, 0x64(r1)
    stfd f31, 0x50(r1)
    psq_st f31, 0x58(r1), 0, 0
    lfs f31, 0x24(r3)
    stfd f30, 0x40(r1)
    fcmpu cr0, f0, f31
    psq_st f30, 0x48(r1), 0, 0
    stfd f29, 0x30(r1)
    psq_st f29, 0x38(r1), 0, 0
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    mr r30, r6
    stw r29, 0x24(r1)
    mr r29, r5
    stw r28, 0x20(r1)
    mr r28, r4
    bne lbl_fn_80714FA0_000013EC
    lfs f0, lbl_808891E4
    stfs f0, 0x0(r6)
    b lbl_fn_80714FA0_00001508
lbl_fn_80714FA0_000013EC:
    psq_l f1, 0x0(r5), 0, 0
    addi r31, r1, 0x8
    psq_l f0, 0x30(r4), 0, 0
    mr r3, r31
    ps_sub f0, f1, f0
    psq_st f0, 0x0(r31), 0, 0
    psq_l f1, 0x8(r5), 1, 0
    psq_l f0, 0x38(r4), 1, 0
    ps_sub f0, f1, f0
    psq_st f0, 0x8(r31), 1, 0
    bl fn_805F9940
    lfs f0, lbl_808891E8
    fcmpo cr0, f1, f0
    ble lbl_fn_80714FA0_00001444
    lfs f0, lbl_808891E4
    psq_l f2, 0x0(r31), 0, 0
    fdivs f3, f0, f1
    ps_muls0 f0, f2, f3
    psq_l f2, 0x8(r31), 1, 0
    psq_st f0, 0x0(r31), 0, 0
    ps_muls0 f0, f2, f3
    psq_st f0, 0x8(r31), 1, 0
lbl_fn_80714FA0_00001444:
    lbz r3, 0x1e(r29)
    lis r0, 0x4330
    lfs f0, lbl_808891E8
    stw r3, 0x1c(r1)
    fcmpo cr0, f1, f0
    lfd f2, lbl_808891F0
    stw r0, 0x18(r1)
    lfs f0, lbl_80889200
    lfd f1, 0x18(r1)
    fsubs f1, f1, f2
    fmuls f30, f1, f0
    ble lbl_fn_80714FA0_000014B8
    addi r3, r1, 0x8
    psq_l f1, 0x10(r29), 0, 0
    psq_l f2, 0x4(r3), 0, 0
    psq_l f3, 0x40(r28), 0, 0
    ps_mr f4, f2
    psq_l f0, 0x0(r3), 1, 0
    ps_mul f2, f2, f1
    psq_l f1, 0xc(r29), 1, 0
    ps_mul f4, f4, f3
    psq_l f3, 0x3c(r28), 1, 0
    ps_madd f1, f0, f1, f2
    ps_madd f3, f0, f3, f4
    ps_sum0 f0, f1, f2, f2
    ps_sum0 f1, f3, f4, f4
    fneg f29, f0
    fneg f1, f1
    b lbl_fn_80714FA0_000014CC
lbl_fn_80714FA0_000014B8:
    addi r3, r29, 0xc
    bl fn_805F9940
    fneg f29, f1
    addi r3, r28, 0x3c
    bl fn_805F9940
lbl_fn_80714FA0_000014CC:
    fmuls f1, f1, f30
    fmuls f29, f29, f30
    fcmpo cr0, f1, f31
    ble lbl_fn_80714FA0_000014E4
    lfs f0, lbl_808891E8
    b lbl_fn_80714FA0_00001504
lbl_fn_80714FA0_000014E4:
    fcmpo cr0, f29, f31
    cror eq, gt, eq
    bne lbl_fn_80714FA0_000014F8
    lfs f0, lbl_80889204
    b lbl_fn_80714FA0_00001504
lbl_fn_80714FA0_000014F8:
    fsubs f1, f31, f1
    fsubs f0, f31, f29
    fdivs f0, f1, f0
lbl_fn_80714FA0_00001504:
    stfs f0, 0x0(r30)
lbl_fn_80714FA0_00001508:
    lwz r0, 0x64(r1)
    psq_l f31, 0x58(r1), 0, 0
    lfd f31, 0x50(r1)
    psq_l f30, 0x48(r1), 0, 0
    lfd f30, 0x40(r1)
    psq_l f29, 0x38(r1), 0, 0
    lfd f29, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80715150(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    psq_l f2, 0x0(r5), 0, 0
    stw r0, 0x24(r1)
    addi r3, r1, 0x8
    psq_l f1, 0x30(r4), 0, 0
    stw r31, 0x1c(r1)
    mr r31, r6
    ps_sub f0, f2, f1
    psq_l f2, 0x8(r5), 1, 0
    stw r30, 0x18(r1)
    mr r30, r4
    psq_l f1, 0x38(r4), 1, 0
    psq_st f0, 0x0(r3), 0, 0
    ps_sub f0, f2, f1
    psq_st f0, 0x8(r3), 1, 0
    bl fn_805F9940
    lfs f0, 0x4c(r30)
    lfs f3, lbl_808891E8
    fcmpo cr0, f1, f0
    lfs f2, 0x60(r30)
    ble lbl_fn_80715150_000015B8
    fsubs f0, f1, f0
    lfs f1, 0x50(r30)
    lfs f3, 0x5c(r30)
    fdivs f0, f0, f1
    fmuls f3, f0, f3
    fcmpo cr0, f3, f2
    ble lbl_fn_80715150_000015B8
    fmr f3, f2
lbl_fn_80715150_000015B8:
    stfs f3, 0x0(r31)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_807151F0(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    fmr f0, f1
    stw r0, 0x94(r1)
    fmr f1, f2
    stfd f31, 0x80(r1)
    fmr f2, f0
    psq_st f31, 0x88(r1), 0, 0
    stfd f30, 0x70(r1)
    psq_st f30, 0x78(r1), 0, 0
    fmr f30, f6
    stfd f29, 0x60(r1)
    psq_st f29, 0x68(r1), 0, 0
    fmr f29, f5
    stfd f28, 0x50(r1)
    psq_st f28, 0x58(r1), 0, 0
    fmr f28, f4
    stfd f27, 0x40(r1)
    psq_st f27, 0x48(r1), 0, 0
    fmr f27, f3
    stfd f26, 0x30(r1)
    psq_st f26, 0x38(r1), 0, 0
    stfd f25, 0x20(r1)
    psq_st f25, 0x28(r1), 0, 0
    stw r31, 0x1c(r1)
    mr r31, r5
    addi r5, r1, 0x8
    stw r30, 0x18(r1)
    mr r30, r4
    addi r4, r1, 0xc
    bl fn_807156B0
    fneg f5, f29
    lfs f0, 0xc(r1)
    fneg f6, f28
    fcmpo cr0, f0, f5
    bge lbl_fn_807151F0_000016B4
    lfs f2, lbl_80889208
    fcmpu cr0, f2, f5
    bne lbl_fn_807151F0_00001684
    lfs f31, lbl_8088920C
    b lbl_fn_807151F0_000016AC
lbl_fn_807151F0_00001684:
    lfs f1, lbl_808891E8
    fsubs f4, f2, f5
    lfs f3, lbl_808891E4
    fmuls f2, f5, f1
    lfs f1, lbl_80889210
    fmuls f3, f0, f3
    fsubs f0, f1, f2
    fdivs f1, f3, f4
    fdivs f0, f0, f4
    fadds f31, f1, f0
lbl_fn_807151F0_000016AC:
    lfs f25, lbl_808891E4
    b lbl_fn_807151F0_00001858
lbl_fn_807151F0_000016B4:
    lfs f4, lbl_80889214
    fcmpo cr0, f0, f4
    bge lbl_fn_807151F0_000016FC
    fcmpu cr0, f5, f4
    lfs f31, lbl_80889218
    bne lbl_fn_807151F0_000016D4
    lfs f25, lbl_8088921C
    b lbl_fn_807151F0_00001858
lbl_fn_807151F0_000016D4:
    lfs f1, lbl_808891E8
    fsubs f3, f5, f4
    lfs f2, lbl_808891E4
    fmuls f1, f5, f1
    fmuls f2, f0, f2
    fsubs f0, f1, f4
    fdivs f1, f2, f3
    fdivs f0, f0, f3
    fadds f25, f1, f0
    b lbl_fn_807151F0_00001858
lbl_fn_807151F0_000016FC:
    fcmpo cr0, f0, f6
    bge lbl_fn_807151F0_00001744
    fcmpu cr0, f4, f6
    lfs f31, lbl_80889218
    bne lbl_fn_807151F0_00001718
    lfs f25, lbl_8088920C
    b lbl_fn_807151F0_00001858
lbl_fn_807151F0_00001718:
    lfs f1, lbl_808891E8
    fsubs f4, f4, f6
    lfs f3, lbl_808891E4
    fmuls f2, f6, f1
    lfs f1, lbl_80889220
    fmuls f3, f0, f3
    fsubs f0, f1, f2
    fdivs f1, f3, f4
    fdivs f0, f0, f4
    fadds f25, f1, f0
    b lbl_fn_807151F0_00001858
lbl_fn_807151F0_00001744:
    fcmpo cr0, f0, f28
    bge lbl_fn_807151F0_00001790
    fcmpu cr0, f6, f28
    bne lbl_fn_807151F0_0000175C
    lfs f31, lbl_808891E8
    b lbl_fn_807151F0_00001788
lbl_fn_807151F0_0000175C:
    lfs f2, lbl_808891E4
    fsubs f4, f6, f28
    lfs f1, lbl_80889218
    fmuls f2, f6, f2
    lfs f3, lbl_80889224
    fmuls f1, f28, f1
    fmuls f3, f0, f3
    fsubs f0, f2, f1
    fdivs f1, f3, f4
    fdivs f0, f0, f4
    fadds f31, f1, f0
lbl_fn_807151F0_00001788:
    lfs f25, lbl_80889218
    b lbl_fn_807151F0_00001858
lbl_fn_807151F0_00001790:
    lfs f3, lbl_80889220
    fcmpo cr0, f0, f3
    bge lbl_fn_807151F0_000017D8
    fcmpu cr0, f28, f3
    lfs f31, lbl_808891E4
    bne lbl_fn_807151F0_000017B0
    lfs f25, lbl_8088920C
    b lbl_fn_807151F0_00001858
lbl_fn_807151F0_000017B0:
    lfs f1, lbl_808891E8
    fsubs f3, f28, f3
    lfs f2, lbl_80889218
    fmuls f1, f28, f1
    fmuls f2, f0, f2
    fsubs f0, f1, f4
    fdivs f1, f2, f3
    fdivs f0, f0, f3
    fadds f25, f1, f0
    b lbl_fn_807151F0_00001858
lbl_fn_807151F0_000017D8:
    fcmpo cr0, f0, f29
    bge lbl_fn_807151F0_0000181C
    fcmpu cr0, f3, f29
    lfs f31, lbl_808891E4
    bne lbl_fn_807151F0_000017F4
    lfs f25, lbl_8088921C
    b lbl_fn_807151F0_00001858
lbl_fn_807151F0_000017F4:
    lfs f1, lbl_808891E8
    fsubs f4, f3, f29
    lfs f2, lbl_80889218
    fmuls f1, f29, f1
    fmuls f2, f0, f2
    fsubs f0, f3, f1
    fdivs f1, f2, f4
    fdivs f0, f0, f4
    fadds f25, f1, f0
    b lbl_fn_807151F0_00001858
lbl_fn_807151F0_0000181C:
    lfs f3, lbl_80889210
    fcmpu cr0, f29, f3
    bne lbl_fn_807151F0_00001830
    lfs f31, lbl_8088921C
    b lbl_fn_807151F0_00001854
lbl_fn_807151F0_00001830:
    lfs f1, lbl_808891E8
    fsubs f4, f29, f3
    lfs f2, lbl_808891E4
    fmuls f1, f29, f1
    fmuls f2, f0, f2
    fsubs f0, f1, f3
    fdivs f1, f2, f4
    fdivs f0, f0, f4
    fadds f31, f1, f0
lbl_fn_807151F0_00001854:
    lfs f25, lbl_808891E4
lbl_fn_807151F0_00001858:
    fmr f1, f29
    bl fn_8068A850
    frsp f26, f1
    fmr f1, f28
    bl fn_8068A850
    frsp f2, f1
    lfs f0, lbl_8088921C
    fmr f1, f29
    fadds f2, f2, f26
    fmuls f26, f2, f0
    bl fn_8068A850
    frsp f2, f1
    lfs f0, 0x8(r1)
    fmuls f31, f31, f27
    lfs f1, lbl_808891E4
    fmuls f25, f25, f27
    fneg f2, f2
    fmuls f0, f31, f0
    fadds f3, f26, f2
    stfs f0, 0x0(r30)
    lfs f2, 0x8(r1)
    fdivs f3, f26, f3
    fsubs f0, f1, f2
    fmuls f2, f25, f2
    fmuls f0, f3, f0
    fadds f0, f2, f0
    fadds f0, f1, f0
    fadds f0, f30, f0
    stfs f0, 0x0(r31)
    psq_l f31, 0x88(r1), 0, 0
    lfd f31, 0x80(r1)
    psq_l f30, 0x78(r1), 0, 0
    lfd f30, 0x70(r1)
    psq_l f29, 0x68(r1), 0, 0
    lfd f29, 0x60(r1)
    psq_l f28, 0x58(r1), 0, 0
    lfd f28, 0x50(r1)
    psq_l f27, 0x48(r1), 0, 0
    lfd f27, 0x40(r1)
    psq_l f26, 0x38(r1), 0, 0
    lfd f26, 0x30(r1)
    psq_l f25, 0x28(r1), 0, 0
    lfd f25, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_80715530(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    fmr f0, f1
    stw r0, 0x44(r1)
    fmr f1, f2
    stfd f31, 0x30(r1)
    fmr f2, f0
    psq_st f31, 0x38(r1), 0, 0
    fmr f31, f3
    stfd f30, 0x20(r1)
    psq_st f30, 0x28(r1), 0, 0
    fmr f30, f4
    stw r31, 0x1c(r1)
    mr r31, r5
    addi r5, r1, 0x8
    stw r30, 0x18(r1)
    mr r30, r4
    addi r4, r1, 0xc
    bl fn_807156B0
    lfs f1, lbl_80889208
    fneg f6, f30
    lfs f2, lbl_80889210
    fadds f5, f1, f30
    lfs f3, 0xc(r1)
    fsubs f7, f2, f30
    fcmpo cr0, f3, f5
    bge lbl_fn_80715530_000019C4
    fcmpu cr0, f1, f5
    bne lbl_fn_80715530_0000199C
    lfs f2, lbl_8088920C
    b lbl_fn_80715530_00001A60
lbl_fn_80715530_0000199C:
    lfs f0, lbl_808891E8
    fsubs f4, f1, f5
    lfs f1, lbl_808891E4
    fmuls f0, f5, f0
    fmuls f1, f3, f1
    fsubs f0, f2, f0
    fdivs f1, f1, f4
    fdivs f0, f0, f4
    fadds f2, f1, f0
    b lbl_fn_80715530_00001A60
lbl_fn_80715530_000019C4:
    fcmpo cr0, f3, f6
    bge lbl_fn_80715530_000019D4
    lfs f2, lbl_80889218
    b lbl_fn_80715530_00001A60
lbl_fn_80715530_000019D4:
    fcmpo cr0, f3, f30
    bge lbl_fn_80715530_00001A1C
    fcmpu cr0, f6, f30
    bne lbl_fn_80715530_000019EC
    lfs f2, lbl_808891E8
    b lbl_fn_80715530_00001A60
lbl_fn_80715530_000019EC:
    lfs f1, lbl_808891E4
    fsubs f4, f6, f30
    lfs f0, lbl_80889218
    fmuls f1, f6, f1
    lfs f2, lbl_80889224
    fmuls f0, f30, f0
    fmuls f2, f3, f2
    fsubs f0, f1, f0
    fdivs f1, f2, f4
    fdivs f0, f0, f4
    fadds f2, f1, f0
    b lbl_fn_80715530_00001A60
lbl_fn_80715530_00001A1C:
    fcmpo cr0, f3, f7
    bge lbl_fn_80715530_00001A2C
    lfs f2, lbl_808891E4
    b lbl_fn_80715530_00001A60
lbl_fn_80715530_00001A2C:
    fcmpu cr0, f7, f2
    bne lbl_fn_80715530_00001A3C
    lfs f2, lbl_8088921C
    b lbl_fn_80715530_00001A60
lbl_fn_80715530_00001A3C:
    lfs f0, lbl_808891E8
    fsubs f4, f7, f2
    lfs f1, lbl_808891E4
    fmuls f0, f7, f0
    fmuls f1, f3, f1
    fsubs f0, f0, f2
    fdivs f1, f1, f4
    fdivs f0, f0, f4
    fadds f2, f1, f0
lbl_fn_80715530_00001A60:
    fmuls f2, f2, f31
    lfs f1, 0x8(r1)
    lfs f0, lbl_808891E8
    fmuls f1, f2, f1
    stfs f1, 0x0(r30)
    stfs f0, 0x0(r31)
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    psq_l f30, 0x28(r1), 0, 0
    lfd f30, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_807156B0(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    lfs f0, lbl_808891E8
    stw r0, 0x54(r1)
    fcmpu cr0, f0, f1
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    fmr f31, f2
    stfd f30, 0x30(r1)
    psq_st f30, 0x38(r1), 0, 0
    fmr f30, f1
    stw r31, 0x2c(r1)
    mr r31, r5
    stw r30, 0x28(r1)
    mr r30, r4
    stw r29, 0x24(r1)
    mr r29, r3
    bne lbl_fn_807156B0_00001AF8
    stfs f0, 0x1c(r1)
    stfs f0, 0x18(r1)
    stfs f0, 0x14(r1)
    b lbl_fn_807156B0_00001B68
lbl_fn_807156B0_00001AF8:
    lfs f2, 0x8(r3)
    lfs f1, 0x0(r3)
    addi r3, r1, 0x8
    stfs f1, 0x8(r1)
    stfs f0, 0xc(r1)
    stfs f2, 0x10(r1)
    bl fn_805F9940
    fcmpo cr0, f1, f31
    ble lbl_fn_807156B0_00001B38
    fdivs f2, f31, f1
    lfs f1, 0x8(r1)
    lfs f0, 0x10(r1)
    fmuls f1, f1, f2
    fmuls f0, f0, f2
    stfs f1, 0x8(r1)
    stfs f0, 0x10(r1)
lbl_fn_807156B0_00001B38:
    addi r3, r1, 0x8
    bl fn_805F9940
    lfs f2, 0x0(r29)
    lfs f0, 0x8(r29)
    fmuls f3, f2, f1
    lfs f2, lbl_808891E8
    fmuls f0, f0, f1
    stfs f2, 0x18(r1)
    fdivs f1, f3, f30
    stfs f1, 0x14(r1)
    fdivs f0, f0, f30
    stfs f0, 0x1c(r1)
lbl_fn_807156B0_00001B68:
    lfs f0, 0x1c(r1)
    lfs f1, 0x14(r1)
    fneg f2, f0
    bl fn_8068AEA4
    frsp f0, f1
    addi r3, r1, 0x14
    stfs f0, 0x0(r30)
    bl fn_805F9940
    fdivs f0, f1, f31
    stfs f0, 0x0(r31)
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    psq_l f30, 0x38(r1), 0, 0
    lfd f30, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_807157D0(void)
{
    nofralloc
    lfs f3, lbl_80889228
    lis r4, lbl_807C62B0@ha
    lfs f2, lbl_8088922C
    addi r4, r4, lbl_807C62B0@l
    lfs f1, lbl_80889230
    lfs f0, lbl_80889234
    stw r4, 0x0(r3)
    stfs f3, 0x4(r3)
    stfs f2, 0x8(r3)
    stfs f1, 0xc(r3)
    stfs f0, 0x10(r3)
    blr
}

asm void fn_80715800(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_17
    clrlwi. r0, r7, 31
    mr r28, r3
    mr r29, r4
    mr r30, r5
    mr r31, r8
    beq lbl_fn_80715800_00001C24
    lfs f0, lbl_80889234
    stfs f0, 0x0(r8)
lbl_fn_80715800_00001C24:
    rlwinm. r0, r7, 0, 28, 28
    beq lbl_fn_80715800_00001C38
    lwz r0, 0x1c(r4)
    neg r0, r0
    stw r0, 0x20(r8)
lbl_fn_80715800_00001C38:
    lwz r0, 0xc(r4)
    cmplwi r0, 0x1
    ble lbl_fn_80715800_00001C4C
    li r0, -0x17
    and r7, r7, r0
lbl_fn_80715800_00001C4C:
    andi. r25, r7, 0x9
    lwz r27, 0x10(r4)
    addi r17, r4, 0x10
    clrlwi r24, r7, 31
    rlwinm r23, r7, 0, 28, 28
    rlwinm r22, r7, 0, 29, 30
    rlwinm r21, r7, 0, 30, 30
    rlwinm r20, r7, 0, 29, 29
    rlwinm r19, r7, 0, 27, 27
    rlwinm r18, r7, 0, 26, 26
    b lbl_fn_80715800_00001D8C
lbl_fn_80715800_00001C78:
    cmpwi r25, 0x0
    subi r26, r27, 0x64
    beq lbl_fn_80715800_00001CE0
    mr r3, r29
    mr r4, r26
    mr r5, r30
    addi r6, r1, 0x1c
    addi r7, r1, 0x18
    bl fn_80714D00
    cmpwi r24, 0x0
    beq lbl_fn_80715800_00001CC0
    lfs f1, 0x0(r31)
    lfs f0, 0x1c(r1)
    fcmpo cr0, f0, f1
    bge lbl_fn_80715800_00001CB8
    b lbl_fn_80715800_00001CBC
lbl_fn_80715800_00001CB8:
    fmr f1, f0
lbl_fn_80715800_00001CBC:
    stfs f1, 0x0(r31)
lbl_fn_80715800_00001CC0:
    cmpwi r23, 0x0
    beq lbl_fn_80715800_00001CE0
    lwz r3, 0x18(r1)
    lwz r0, 0x20(r31)
    cmpw r3, r0
    bge lbl_fn_80715800_00001CDC
    mr r3, r0
lbl_fn_80715800_00001CDC:
    stw r3, 0x20(r31)
lbl_fn_80715800_00001CE0:
    cmpwi r22, 0x0
    beq lbl_fn_80715800_00001D24
    mr r3, r29
    mr r4, r26
    mr r5, r30
    addi r6, r28, 0x4
    addi r7, r1, 0x14
    addi r8, r1, 0x10
    bl fn_80714E40
    cmpwi r21, 0x0
    beq lbl_fn_80715800_00001D14
    lfs f0, 0x14(r1)
    stfs f0, 0x8(r31)
lbl_fn_80715800_00001D14:
    cmpwi r20, 0x0
    beq lbl_fn_80715800_00001D24
    lfs f0, 0x10(r1)
    stfs f0, 0xc(r31)
lbl_fn_80715800_00001D24:
    cmpwi r19, 0x0
    beq lbl_fn_80715800_00001D48
    mr r3, r29
    mr r4, r26
    mr r5, r30
    addi r6, r1, 0xc
    bl fn_80714FA0
    lfs f0, 0xc(r1)
    stfs f0, 0x4(r31)
lbl_fn_80715800_00001D48:
    cmpwi r18, 0x0
    beq lbl_fn_80715800_00001D88
    mr r3, r29
    mr r4, r26
    mr r5, r30
    addi r6, r1, 0x8
    bl fn_80715150
    lwz r0, 0x28(r29)
    stw r0, 0x1c(r31)
    lfs f1, 0x18(r31)
    lfs f0, 0x8(r1)
    fcmpo cr0, f0, f1
    ble lbl_fn_80715800_00001D80
    b lbl_fn_80715800_00001D84
lbl_fn_80715800_00001D80:
    fmr f1, f0
lbl_fn_80715800_00001D84:
    stfs f1, 0x18(r31)
lbl_fn_80715800_00001D88:
    lwz r27, 0x0(r27)
lbl_fn_80715800_00001D8C:
    cmplw r27, r17
    bne lbl_fn_80715800_00001C78
    addi r11, r1, 0x60
    bl _restgpr_17
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_807159C0(void)
{
    nofralloc
    lwz r9, 0x18(r5)
    li r7, 0x1f
    clrlwi. r0, r9, 31
    beq lbl_fn_807159C0_00001DC4
    li r7, 0x1e
lbl_fn_807159C0_00001DC4:
    rlwinm. r0, r9, 0, 30, 30
    beq lbl_fn_807159C0_00001DD0
    rlwinm r7, r7, 0, 31, 29
lbl_fn_807159C0_00001DD0:
    rlwinm. r0, r9, 0, 29, 29
    beq lbl_fn_807159C0_00001DDC
    rlwinm r7, r7, 0, 30, 28
lbl_fn_807159C0_00001DDC:
    rlwinm. r0, r9, 0, 28, 28
    beq lbl_fn_807159C0_00001DE8
    rlwinm r7, r7, 0, 29, 27
lbl_fn_807159C0_00001DE8:
    lbz r0, 0x1e(r5)
    cmpwi r0, 0x0
    bne lbl_fn_807159C0_00001DF8
    rlwinm r7, r7, 0, 28, 26
lbl_fn_807159C0_00001DF8:
    rlwinm. r0, r9, 0, 27, 27
    beq lbl_fn_807159C0_00001E04
    ori r7, r7, 0x20
lbl_fn_807159C0_00001E04:
    lwz r12, 0x0(r3)
    lwz r12, 0x18(r12)
    mtctr r12
    bctr
}

asm void fn_80715A30(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    lis r7, 0x100
    stw r0, 0x94(r1)
    addi r7, r7, 0x8
    lwz r0, 0x18(r5)
    rlwinm. r0, r0, 0, 28, 28
    beq lbl_fn_80715A30_00001E44
    rlwinm r7, r7, 0, 29, 27
lbl_fn_80715A30_00001E44:
    addi r9, r1, 0x48
    addi r8, r1, 0x90
    lfs f0, lbl_80889234
    cmplw r9, r8
    lfs f1, lbl_80889238
    li r0, 0x0
    stfs f1, 0x8(r1)
    stfs f1, 0xc(r1)
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    stw r0, 0x24(r1)
    stw r0, 0x28(r1)
    stw r0, 0x2c(r1)
    stfs f1, 0x30(r1)
    stfs f1, 0x34(r1)
    stfs f0, 0x38(r1)
    stfs f0, 0x3c(r1)
    stfs f0, 0x40(r1)
    stfs f0, 0x44(r1)
    bge lbl_fn_80715A30_00001ED8
    addi r8, r8, 0x17
    li r0, 0x18
    subf r8, r9, r8
    divwu r8, r8, r0
    mtctr r8
    bge lbl_fn_80715A30_00001ED8
lbl_fn_80715A30_00001EB8:
    stfs f1, 0x0(r9)
    stfs f1, 0x4(r9)
    stfs f0, 0x8(r9)
    stfs f0, 0xc(r9)
    stfs f0, 0x10(r9)
    stfs f0, 0x14(r9)
    addi r9, r9, 0x18
    bdnz lbl_fn_80715A30_00001EB8
lbl_fn_80715A30_00001ED8:
    lwz r12, 0x0(r3)
    addi r8, r1, 0x8
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    lwz r0, 0x94(r1)
    lwz r3, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_80715B10(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_80715B20(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lfs f2, lbl_80889240
    li r4, 0x0
    stw r0, 0x14(r1)
    li r0, 0x1
    lfs f1, lbl_80889244
    stw r31, 0xc(r1)
    mr r31, r3
    lfs f0, lbl_80889248
    stfs f2, 0x30(r3)
    stfs f2, 0x34(r3)
    stfs f2, 0x38(r3)
    stfs f2, 0x3c(r3)
    stfs f2, 0x40(r3)
    stfs f2, 0x44(r3)
    stfs f1, 0x48(r3)
    stfs f1, 0x4c(r3)
    stfs f1, 0x50(r3)
    stw r4, 0x54(r3)
    stb r0, 0x58(r3)
    stfs f0, 0x5c(r3)
    stfs f1, 0x60(r3)
    stw r4, 0x64(r3)
    stw r4, 0x68(r3)
    bl fn_8072D280
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80715BA0(void)
{
    nofralloc
    lfs f3, 0x0(r4)
    lfs f2, 0xc(r4)
    lfs f1, 0x4(r4)
    fmuls f7, f3, f2
    lfs f0, 0x8(r4)
    fmuls f4, f1, f2
    stwu r1, -0x30(r1)
    fmuls f1, f0, f2
    lfs f3, 0x10(r4)
    lfs f5, 0x1c(r4)
    lfs f0, 0x18(r4)
    fmuls f6, f3, f5
    lfs f2, 0x14(r4)
    fmuls f0, f0, f5
    stw r31, 0x2c(r1)
    fmuls f3, f2, f5
    lfs f8, 0x20(r4)
    lfs f9, 0x2c(r4)
    fadds f6, f7, f6
    lfs f5, 0x24(r4)
    fadds f3, f4, f3
    lfs f2, 0x28(r4)
    fmuls f8, f8, f9
    stw r30, 0x28(r1)
    fmuls f5, f5, f9
    stw r29, 0x24(r1)
    fadds f0, f1, f0
    fmuls f2, f2, f9
    fadds f1, f5, f3
    lbz r0, 0x58(r3)
    fadds f4, f8, f6
    lwz r7, 0x30(r3)
    fadds f0, f2, f0
    lwz r6, 0x34(r3)
    lwz r5, 0x38(r3)
    fneg f3, f4
    fneg f1, f1
    cmpwi r0, 0x0
    fneg f0, f0
    stw r7, 0x8(r1)
    stw r6, 0xc(r1)
    stw r5, 0x10(r1)
    stfs f3, 0x30(r3)
    stfs f1, 0x34(r3)
    stfs f0, 0x38(r3)
    beq lbl_fn_80715BA0_000020B4
    lwz r31, 0x0(r4)
    li r0, 0x0
    lwz r30, 0x4(r4)
    lwz r29, 0x8(r4)
    lwz r12, 0xc(r4)
    lwz r11, 0x10(r4)
    lwz r10, 0x14(r4)
    lwz r9, 0x18(r4)
    lwz r8, 0x1c(r4)
    lwz r7, 0x20(r4)
    lwz r6, 0x24(r4)
    lwz r5, 0x28(r4)
    lwz r4, 0x2c(r4)
    stw r31, 0x0(r3)
    stw r30, 0x4(r3)
    stw r29, 0x8(r3)
    stw r12, 0xc(r3)
    stw r11, 0x10(r3)
    stw r10, 0x14(r3)
    stw r9, 0x18(r3)
    stw r8, 0x1c(r3)
    stw r7, 0x20(r3)
    stw r6, 0x24(r3)
    stw r5, 0x28(r3)
    stw r4, 0x2c(r3)
    stb r0, 0x58(r3)
    b lbl_fn_80715BA0_00002138
lbl_fn_80715BA0_000020B4:
    addi r5, r1, 0x8
    lwz r29, 0x0(r4)
    psq_l f2, 0x30(r3), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    lwz r30, 0x4(r4)
    ps_sub f0, f2, f1
    psq_l f1, 0x8(r5), 1, 0
    psq_l f2, 0x38(r3), 1, 0
    psq_st f0, 0x3c(r3), 0, 0
    ps_sub f0, f2, f1
    lwz r31, 0x8(r4)
    lwz r12, 0xc(r4)
    lwz r11, 0x10(r4)
    lwz r10, 0x14(r4)
    lwz r9, 0x18(r4)
    lwz r8, 0x1c(r4)
    lwz r7, 0x20(r4)
    lwz r6, 0x24(r4)
    lwz r5, 0x28(r4)
    lwz r0, 0x2c(r4)
    stw r29, 0x0(r3)
    stw r30, 0x4(r3)
    stw r31, 0x8(r3)
    stw r12, 0xc(r3)
    stw r11, 0x10(r3)
    stw r10, 0x14(r3)
    stw r9, 0x18(r3)
    stw r8, 0x1c(r3)
    stw r7, 0x20(r3)
    stw r6, 0x24(r3)
    stw r5, 0x28(r3)
    stw r0, 0x2c(r3)
    psq_st f0, 0x44(r3), 1, 0
lbl_fn_80715BA0_00002138:
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    addi r1, r1, 0x30
    blr
}
