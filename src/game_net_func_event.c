#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_22(void);
extern void _savegpr_22(void);
extern void fn_8005B3CC(void);
extern void fn_8005B5F8(void);
extern void fn_8005B6E8(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_804DBC84(void);
extern void fn_80508CC8(void);
extern void fn_8050D3EC(void);
extern void fn_8050E680(void);
extern void fn_8050E8CC(void);
extern void fn_80682428(void);
extern void fn_80684600(void);
extern void fn_80686A64(void);
extern void fn_8068B100(void);
extern void fn_806958E0(void);
extern void fn_80699E24(void);
extern void fn_80699E2C(void);
extern void fn_80699E30(void);
extern void fn_80699EE8(void);

/* External data declarations */
extern u8 lbl_8075B038[];
extern u8 lbl_8075B058[];
extern u8 lbl_8075B078[];
extern u8 lbl_807772B0[];
extern u8 lbl_807772D0[];
extern u8 lbl_80782FF0[];
extern u8 lbl_80791B0C[];
extern u8 lbl_807930F0[];

/* Small data declarations */
extern u32 lbl_8087D708;
extern u32 lbl_8087E458;
extern u32 lbl_8087E45C;
extern u32 lbl_8087F870;
extern u32 lbl_8087F874;
extern u32 lbl_80887798;
extern u32 lbl_8088779C;
extern u32 lbl_808877A0;
extern u32 lbl_808877A4;
extern u32 lbl_808877A8;
extern u32 lbl_808877AC;
extern u32 lbl_808877B0;
extern u32 lbl_808877B4;
extern u32 lbl_808877B8;
extern u32 lbl_808877BC;

/* Function declarations */
void fn_805072C8(void);
void fn_80507314(void);
void fn_805075C8(void);
void fn_80507614(void);
void fn_80507658(void);
void fn_805076FC(void);
void fn_80507768(void);
void fn_80507794(void);
void fn_805077F4(void);
void fn_805078A8(void);
void fn_80507BC0(void);
void fn_8050845C(void);
void fn_8050881C(void);
void fn_8050890C(void);
void fn_805089E4(void);
void fn_80508B78(void);

asm void fn_805072C8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_80782FF0@ha
    li r5, 0x1c
    stw r0, 0x14(r1)
    li r0, 0x0
    addi r4, r4, lbl_80782FF0@l
    stw r31, 0xc(r1)
    mr r31, r3
    stw r4, 0x14(r3)
    li r4, 0x0
    stw r0, 0x18(r3)
    bl memset
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80507314(void)
{
    nofralloc
    stwu r1, -0x660(r1)
    mflr r0
    lis r6, lbl_807772D0@ha
    stw r0, 0x664(r1)
    addi r6, r6, lbl_807772D0@l
    stmw r25, 0x644(r1)
    li r31, 0x0
    mr r30, r3
    mr r26, r4
    mr r25, r5
    addi r3, r1, 0x18
    li r4, 0x0
    li r5, 0x400
    stw r6, 0x8(r1)
    stw r31, 0xc(r1)
    stw r31, 0x10(r1)
    stw r31, 0x14(r1)
    stw r31, 0x638(r1)
    bl memset
    addi r3, r1, 0x618
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x8(r1)
    mr r4, r26
    mr r5, r25
    addi r3, r1, 0x8
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0x8
    addi r4, r4, lbl_807772B0@l
    stw r4, 0x8(r1)
    la r4, lbl_8087D708
    bl fn_8005B6E8
    lis r28, lbl_8075B038@ha
    addi r29, r28, lbl_8075B038@l
    b lbl_fn_80507314_000002DC
lbl_fn_80507314_000000E8:
    addi r3, r1, 0x8
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    cmpwi r0, 0x3b
    beq lbl_fn_80507314_000002DC
    addi r4, r28, lbl_8075B038@l
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80507314_000002DC
    addi r3, r1, 0x8
    bl fn_8005B3CC
    mr r26, r3
    addi r4, r29, 0x14
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80507314_0000025C
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    lwz r0, 0x4(r30)
    mr r26, r3
    cmpwi r0, 0x0
    beq lbl_fn_80507314_0000014C
    mr r3, r0
    bl fn_80084C24
lbl_fn_80507314_0000014C:
    cmpwi r26, 0x0
    stw r26, 0x0(r30)
    beq lbl_fn_80507314_00000178
    mulli r3, r26, 0x14
    li r4, 0x0
    la r5, lbl_8087E45C
    la r6, lbl_8087E458
    li r7, 0x0
    bl fn_800846FC
    stw r3, 0x4(r30)
    b lbl_fn_80507314_000001FC
lbl_fn_80507314_00000178:
    stw r31, 0x4(r30)
    b lbl_fn_80507314_000001FC
lbl_fn_80507314_00000180:
    addi r3, r1, 0x8
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    cmpwi r0, 0x3b
    beq lbl_fn_80507314_000001FC
    addi r4, r29, 0xa
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_80507314_0000020C
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    subi r5, r3, 0x1
    cmpw r5, r26
    bge lbl_fn_80507314_0000020C
    mulli r0, r5, 0x14
    lwz r4, 0x4(r30)
    addi r3, r1, 0x8
    stwx r5, r4, r0
    add r27, r4, r0
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x4(r27)
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0xc(r27)
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x10(r27)
lbl_fn_80507314_000001FC:
    addi r3, r1, 0x8
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_80507314_00000180
lbl_fn_80507314_0000020C:
    li r6, 0x0
    li r4, 0x0
    b lbl_fn_80507314_0000024C
lbl_fn_80507314_00000218:
    addi r0, r6, 0x1
    lwz r3, 0x4(r30)
    cmplw r0, r5
    add r5, r3, r4
    bge lbl_fn_80507314_00000240
    lwz r3, 0x4(r5)
    lwz r0, 0x18(r5)
    subf r0, r3, r0
    stw r0, 0x8(r5)
    b lbl_fn_80507314_00000244
lbl_fn_80507314_00000240:
    stw r31, 0x8(r5)
lbl_fn_80507314_00000244:
    addi r4, r4, 0x14
    addi r6, r6, 0x1
lbl_fn_80507314_0000024C:
    lwz r5, 0x0(r30)
    cmplw r6, r5
    blt lbl_fn_80507314_00000218
    b lbl_fn_80507314_000002DC
lbl_fn_80507314_0000025C:
    mr r3, r26
    addi r4, r29, 0x1a
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80507314_000002DC
    mr r27, r30
    b lbl_fn_80507314_000002CC
lbl_fn_80507314_00000278:
    addi r3, r1, 0x8
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    cmpwi r0, 0x3b
    beq lbl_fn_80507314_000002CC
    addi r4, r29, 0xa
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_80507314_000002DC
    addi r3, r1, 0x8
    bl fn_8005B3CC
    addi r26, r27, 0x8
    li r25, 0x2
lbl_fn_80507314_000002AC:
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    subic. r25, r25, 0x1
    stw r3, 0x8(r26)
    subi r26, r26, 0x4
    bge lbl_fn_80507314_000002AC
    addi r27, r27, 0xc
lbl_fn_80507314_000002CC:
    addi r3, r1, 0x8
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_80507314_00000278
lbl_fn_80507314_000002DC:
    addi r3, r1, 0x8
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_80507314_000000E8
    lmw r25, 0x644(r1)
    lwz r0, 0x664(r1)
    mtlr r0
    addi r1, r1, 0x660
    blr
}

asm void fn_805075C8(void)
{
    nofralloc
    lwz r5, 0x0(r3)
    li r6, 0x0
    subi r7, r5, 0x1
    mtctr r7
    cmplwi r7, 0x0
    ble lbl_fn_805075C8_0000033C
lbl_fn_805075C8_00000318:
    lwz r0, 0x4(r3)
    add r5, r0, r6
    lwz r0, 0x4(r5)
    cmpw r4, r0
    bge lbl_fn_805075C8_00000334
    mr r3, r5
    blr
lbl_fn_805075C8_00000334:
    addi r6, r6, 0x14
    bdnz lbl_fn_805075C8_00000318
lbl_fn_805075C8_0000033C:
    mulli r0, r7, 0x14
    lwz r3, 0x4(r3)
    add r3, r3, r0
    blr
}

asm void fn_80507614(void)
{
    nofralloc
    lwz r5, 0x0(r3)
    li r7, 0x0
    li r6, 0x0
    subi r0, r5, 0x1
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80507614_00000388
lbl_fn_80507614_00000368:
    lwz r0, 0x4(r3)
    add r5, r0, r6
    lwz r0, 0x4(r5)
    cmpw r4, r0
    blt lbl_fn_80507614_00000388
    mr r7, r5
    addi r6, r6, 0x14
    bdnz lbl_fn_80507614_00000368
lbl_fn_80507614_00000388:
    mr r3, r7
    blr
}

asm void fn_80507658(void)
{
    nofralloc
    lwz r6, 0x0(r3)
    li r7, 0x0
    subi r8, r6, 0x1
    mtctr r8
    cmplwi r8, 0x0
    ble lbl_fn_80507658_000003C8
lbl_fn_80507658_000003A8:
    lwz r0, 0x4(r3)
    add r6, r0, r7
    lwz r0, 0x4(r6)
    cmpw r4, r0
    bge lbl_fn_80507658_000003C0
    b lbl_fn_80507658_000003D4
lbl_fn_80507658_000003C0:
    addi r7, r7, 0x14
    bdnz lbl_fn_80507658_000003A8
lbl_fn_80507658_000003C8:
    mulli r0, r8, 0x14
    lwz r4, 0x4(r3)
    add r6, r4, r0
lbl_fn_80507658_000003D4:
    li r7, 0x0
    mtctr r8
    cmplwi r8, 0x0
    ble lbl_fn_80507658_00000404
lbl_fn_80507658_000003E4:
    lwz r0, 0x4(r3)
    add r4, r0, r7
    lwz r0, 0x4(r4)
    cmpw r5, r0
    bge lbl_fn_80507658_000003FC
    b lbl_fn_80507658_00000410
lbl_fn_80507658_000003FC:
    addi r7, r7, 0x14
    bdnz lbl_fn_80507658_000003E4
lbl_fn_80507658_00000404:
    mulli r0, r8, 0x14
    lwz r3, 0x4(r3)
    add r4, r3, r0
lbl_fn_80507658_00000410:
    cmpwi r6, 0x0
    li r3, 0x0
    beqlr
    cmpwi r4, 0x0
    beqlr
    cmplw r6, r4
    beqlr
    li r3, 0x1
    blr
}

asm void fn_805076FC(void)
{
    nofralloc
    neg r0, r6
    andc r7, r0, r6
    srawi r0, r7, 31
    and r0, r6, r0
    cmpwi r0, 0x2
    bge lbl_fn_805076FC_00000458
    srawi r0, r7, 31
    and r0, r6, r0
    b lbl_fn_805076FC_0000045C
lbl_fn_805076FC_00000458:
    li r0, 0x2
lbl_fn_805076FC_0000045C:
    cmplwi r4, 0x1
    bgt lbl_fn_805076FC_00000474
    slwi r0, r0, 2
    add r3, r3, r0
    lwz r3, 0x8(r3)
    blr
lbl_fn_805076FC_00000474:
    cmpwi r4, 0x2
    bne lbl_fn_805076FC_00000498
    addi r4, r5, 0x5
    slwi r0, r0, 2
    mulli r4, r4, 0xc
    add r3, r3, r4
    add r3, r3, r0
    lwz r3, 0x8(r3)
    blr
lbl_fn_805076FC_00000498:
    li r3, 0x0
    blr
}

asm void fn_80507768(void)
{
    nofralloc
    neg r0, r4
    lis r3, 0x2
    andc r5, r0, r4
    srawi r0, r5, 31
    subi r3, r3, 0x7961
    and r0, r4, r0
    cmpw r0, r3
    bgelr
    srawi r0, r5, 31
    and r3, r4, r0
    blr
}

asm void fn_80507794(void)
{
    nofralloc
    lfs f9, 0x0(r4)
    lfs f7, lbl_80887798
    lfs f0, 0x8(r4)
    lfs f8, 0x4(r4)
    fmadds f6, f7, f0, f9
    lfs f4, 0x0(r5)
    lfs f3, 0x4(r5)
    lfs f5, 0xc(r4)
    lfs f2, 0x8(r5)
    lfs f0, 0xc(r5)
    fmadds f5, f7, f5, f8
    fnmsubs f2, f7, f2, f4
    stfs f1, 0x20(r3)
    fnmsubs f0, f7, f0, f3
    stb r6, 0x24(r3)
    stfs f9, 0x0(r3)
    stfs f8, 0x10(r3)
    stfs f6, 0x4(r3)
    stfs f5, 0x14(r3)
    stfs f4, 0xc(r3)
    stfs f3, 0x1c(r3)
    stfs f2, 0x8(r3)
    stfs f0, 0x18(r3)
    blr
}

asm void fn_805077F4(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    li r0, 0x0
    stw r31, 0x3c(r1)
    mr r31, r3
    stw r0, 0x8(r1)
    lbz r0, 0x24(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805077F4_00000584
    mr r4, r31
    addi r3, r1, 0x8
    addi r5, r31, 0x10
    bl fn_8050845C
    cmpwi r3, 0x0
    beq lbl_fn_805077F4_0000057C
    lfs f1, 0x20(r31)
    addi r3, r1, 0x8
    bl fn_8050881C
    b lbl_fn_805077F4_000005CC
lbl_fn_805077F4_0000057C:
    lfs f1, lbl_8088779C
    b lbl_fn_805077F4_000005CC
lbl_fn_805077F4_00000584:
    mr r4, r31
    addi r3, r1, 0x8
    addi r5, r31, 0x10
    bl fn_8050890C
    addic. r0, r1, 0x8
    lfs f1, 0x20(r31)
    bne lbl_fn_805077F4_000005A8
    lfs f1, lbl_8088779C
    b lbl_fn_805077F4_000005CC
lbl_fn_805077F4_000005A8:
    lfs f0, 0xc(r1)
    lfs f3, 0x14(r1)
    fsubs f4, f1, f0
    lfs f2, 0x18(r1)
    lfs f1, 0x1c(r1)
    lfs f0, 0x20(r1)
    fmadds f2, f4, f3, f2
    fmadds f1, f4, f2, f1
    fmadds f1, f4, f1, f0
lbl_fn_805077F4_000005CC:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_805078A8(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    stfd f31, 0xc0(r1)
    psq_st f31, 0xc8(r1), 0, 0
    stfd f30, 0xb0(r1)
    psq_st f30, 0xb8(r1), 0, 0
    stfd f29, 0xa0(r1)
    psq_st f29, 0xa8(r1), 0, 0
    stfd f28, 0x90(r1)
    psq_st f28, 0x98(r1), 0, 0
    stfd f27, 0x80(r1)
    psq_st f27, 0x88(r1), 0, 0
    stfd f26, 0x70(r1)
    psq_st f26, 0x78(r1), 0, 0
    stfd f25, 0x60(r1)
    psq_st f25, 0x68(r1), 0, 0
    stfd f24, 0x50(r1)
    psq_st f24, 0x58(r1), 0, 0
    stfd f23, 0x40(r1)
    psq_st f23, 0x48(r1), 0, 0
    stfd f22, 0x30(r1)
    psq_st f22, 0x38(r1), 0, 0
    stfd f21, 0x20(r1)
    psq_st f21, 0x28(r1), 0, 0
    stfd f20, 0x10(r1)
    psq_st f20, 0x18(r1), 0, 0
    lfs f9, lbl_8087F870
    lis r4, lbl_8075B058@ha
    lfs f10, lbl_808877A4
    addi r4, r4, lbl_8075B058@l
    lfs f7, lbl_8088779C
    fmuls f9, f10, f9
    lfs f6, lbl_808877A8
    lfs f8, lbl_808877A0
    lfs f0, lbl_808877AC
    lfd f24, 0x0(r4)
    lfd f27, 0x18(r4)
    lfd f25, 0x8(r4)
    lfd f26, 0x10(r4)
lbl_fn_805078A8_00000678:
    fsubs f12, f2, f1
    fmr f11, f1
    fmr f31, f3
    fmr f13, f12
lbl_fn_805078A8_00000688:
    fabs f20, f4
    fabs f21, f31
    frsp f20, f20
    frsp f21, f21
    fcmpo cr0, f21, f20
    bge lbl_fn_805078A8_000006B8
    fmr f1, f2
    fmr f3, f4
    fmr f2, f11
    fmr f4, f31
    fmr f11, f1
    fmr f31, f3
lbl_fn_805078A8_000006B8:
    fabs f21, f2
    li r0, 0x0
    fsubs f20, f11, f2
    frsp f21, f21
    fmuls f29, f8, f20
    fmuls f20, f9, f21
    fabs f21, f29
    fmadds f30, f8, f5, f20
    frsp f20, f21
    fcmpo cr0, f20, f30
    ble lbl_fn_805078A8_0000070C
    fsubs f20, f4, f7
    fcmpo cr0, f20, f7
    bge lbl_fn_805078A8_000006F4
    fneg f20, f20
lbl_fn_805078A8_000006F4:
    fcmpo cr0, f20, f6
    cror eq, lt, eq
    mfcr r4
    extrwi. r4, r4, 1, 2
    bne lbl_fn_805078A8_0000070C
    li r0, 0x1
lbl_fn_805078A8_0000070C:
    cmpwi r0, 0x0
    beq lbl_fn_805078A8_0000088C
    fabs f20, f13
    frsp f20, f20
    fcmpo cr0, f20, f30
    blt lbl_fn_805078A8_00000740
    fabs f20, f4
    fabs f21, f3
    frsp f20, f20
    frsp f21, f21
    fcmpo cr0, f21, f20
    cror eq, lt, eq
    bne lbl_fn_805078A8_0000074C
lbl_fn_805078A8_00000740:
    fmr f12, f29
    fmr f13, f29
    b lbl_fn_805078A8_0000080C
lbl_fn_805078A8_0000074C:
    fdivs f28, f4, f3
    fcmpu cr0, f1, f11
    bne lbl_fn_805078A8_00000768
    fmuls f3, f10, f29
    fsubs f1, f0, f28
    fmuls f22, f3, f28
    b lbl_fn_805078A8_000007A0
lbl_fn_805078A8_00000768:
    fdivs f23, f4, f31
    fdivs f21, f3, f31
    fmuls f20, f10, f29
    fsubs f3, f2, f1
    fsubs f22, f23, f0
    fsubs f1, f21, f0
    fmuls f20, f20, f21
    fsubs f21, f21, f23
    fmuls f23, f22, f3
    fsubs f3, f28, f0
    fmuls f1, f1, f22
    fmsubs f23, f20, f21, f23
    fmuls f1, f3, f1
    fmuls f22, f28, f23
lbl_fn_805078A8_000007A0:
    fcmpo cr0, f22, f24
    mfcr r0
    extrwi. r0, r0, 1, 1
    beq lbl_fn_805078A8_000007B4
    fneg f1, f1
lbl_fn_805078A8_000007B4:
    cmpwi r0, 0x0
    bne lbl_fn_805078A8_000007C0
    fneg f22, f22
lbl_fn_805078A8_000007C0:
    fmuls f28, f30, f1
    fmr f21, f13
    fmul f3, f26, f29
    fabs f13, f28
    fmul f28, f25, f22
    frsp f20, f13
    fmr f13, f12
    fmsub f3, f3, f1, f20
    fcmpo cr0, f28, f3
    bge lbl_fn_805078A8_00000804
    fmul f3, f27, f21
    fmul f3, f3, f1
    fabs f3, f3
    fcmpo cr0, f22, f3
    bge lbl_fn_805078A8_00000804
    fdivs f12, f22, f1
    b lbl_fn_805078A8_0000080C
lbl_fn_805078A8_00000804:
    fmr f12, f29
    fmr f13, f29
lbl_fn_805078A8_0000080C:
    fabs f20, f12
    fmr f3, f4
    fmr f1, f2
    frsp f4, f20
    fcmpo cr0, f4, f30
    ble lbl_fn_805078A8_0000082C
    fadds f2, f2, f12
    b lbl_fn_805078A8_00000840
lbl_fn_805078A8_0000082C:
    fcmpo cr0, f29, f24
    ble lbl_fn_805078A8_0000083C
    fadds f2, f2, f30
    b lbl_fn_805078A8_00000840
lbl_fn_805078A8_0000083C:
    fsubs f2, f2, f30
lbl_fn_805078A8_00000840:
    lwz r4, 0x4(r3)
    lwz r0, 0x0(r3)
    slwi r5, r4, 2
    lfsux f4, r5, r0
    b lbl_fn_805078A8_0000085C
lbl_fn_805078A8_00000854:
    lfs f28, 0x0(r5)
    fmadds f4, f2, f4, f28
lbl_fn_805078A8_0000085C:
    subic. r4, r4, 0x1
    subi r5, r5, 0x4
    bge lbl_fn_805078A8_00000854
    fabs f20, f31
    frsp f20, f20
    fdivs f28, f31, f20
    fmuls f28, f4, f28
    fcmpo cr0, f28, f24
    mfcr r0
    extrwi. r0, r0, 1, 1
    beq lbl_fn_805078A8_00000688
    b lbl_fn_805078A8_00000678
lbl_fn_805078A8_0000088C:
    fmr f1, f2
    psq_l f31, 0xc8(r1), 0, 0
    lfd f31, 0xc0(r1)
    psq_l f30, 0xb8(r1), 0, 0
    lfd f30, 0xb0(r1)
    psq_l f29, 0xa8(r1), 0, 0
    lfd f29, 0xa0(r1)
    psq_l f28, 0x98(r1), 0, 0
    lfd f28, 0x90(r1)
    psq_l f27, 0x88(r1), 0, 0
    lfd f27, 0x80(r1)
    psq_l f26, 0x78(r1), 0, 0
    lfd f26, 0x70(r1)
    psq_l f25, 0x68(r1), 0, 0
    lfd f25, 0x60(r1)
    psq_l f24, 0x58(r1), 0, 0
    lfd f24, 0x50(r1)
    psq_l f23, 0x48(r1), 0, 0
    lfd f23, 0x40(r1)
    psq_l f22, 0x38(r1), 0, 0
    lfd f22, 0x30(r1)
    psq_l f21, 0x28(r1), 0, 0
    lfd f21, 0x20(r1)
    psq_l f20, 0x18(r1), 0, 0
    lfd f20, 0x10(r1)
    addi r1, r1, 0xd0
    blr
}

asm void fn_80507BC0(void)
{
    nofralloc
    stwu r1, -0x1c0(r1)
    mflr r0
    stw r0, 0x1c4(r1)
    addi r11, r1, 0x150
    stfd f31, 0x1b0(r1)
    psq_st f31, 0x1b8(r1), 0, 0
    stfd f30, 0x1a0(r1)
    psq_st f30, 0x1a8(r1), 0, 0
    stfd f29, 0x190(r1)
    psq_st f29, 0x198(r1), 0, 0
    stfd f28, 0x180(r1)
    psq_st f28, 0x188(r1), 0, 0
    stfd f27, 0x170(r1)
    psq_st f27, 0x178(r1), 0, 0
    stfd f26, 0x160(r1)
    psq_st f26, 0x168(r1), 0, 0
    stfd f25, 0x150(r1)
    psq_st f25, 0x158(r1), 0, 0
    bl _savegpr_22
    lfs f30, lbl_8088779C
    lis r0, 0x4330
    addic. r10, r4, 0x1
    fmr f27, f1
    fmr f28, f2
    stw r0, 0x118(r1)
    fmr f31, f30
    mr r23, r4
    fmr f0, f30
    stw r0, 0x120(r1)
    mr r24, r5
    mr r25, r6
    mr r26, r7
    mr r9, r3
    mr r8, r10
    ble lbl_fn_80507BC0_00000A3C
    srwi. r0, r10, 3
    mtctr r0
    beq lbl_fn_80507BC0_00000A20
lbl_fn_80507BC0_00000990:
    lfs f3, 0x0(r9)
    fabs f4, f3
    lfs f3, 0x4(r9)
    frsp f5, f4
    fabs f4, f3
    lfs f3, 0x8(r9)
    fadds f0, f0, f5
    frsp f5, f4
    fabs f4, f3
    lfs f3, 0xc(r9)
    fadds f0, f0, f5
    frsp f5, f4
    fabs f4, f3
    lfs f3, 0x10(r9)
    fadds f0, f0, f5
    frsp f5, f4
    fabs f4, f3
    lfs f3, 0x14(r9)
    fadds f0, f0, f5
    frsp f5, f4
    fabs f4, f3
    lfs f3, 0x18(r9)
    fadds f0, f0, f5
    frsp f5, f4
    fabs f4, f3
    lfs f3, 0x1c(r9)
    addi r9, r9, 0x20
    fadds f0, f0, f5
    frsp f5, f4
    fabs f4, f3
    fadds f0, f0, f5
    frsp f5, f4
    fadds f0, f0, f5
    bdnz lbl_fn_80507BC0_00000990
    andi. r8, r10, 0x7
    beq lbl_fn_80507BC0_00000A3C
lbl_fn_80507BC0_00000A20:
    mtctr r8
lbl_fn_80507BC0_00000A24:
    lfs f3, 0x0(r9)
    addi r9, r9, 0x4
    fabs f4, f3
    frsp f5, f4
    fadds f0, f0, f5
    bdnz lbl_fn_80507BC0_00000A24
lbl_fn_80507BC0_00000A3C:
    fabs f4, f2
    xoris r0, r10, 0x8000
    fabs f7, f1
    lis r8, lbl_8075B078@ha
    stw r0, 0x11c(r1)
    frsp f6, f4
    frsp f7, f7
    lfd f5, lbl_8075B078@l(r8)
    lfd f4, 0x118(r1)
    lfs f3, lbl_8087F870
    fsubs f5, f4, f5
    fadds f4, f7, f6
    fmuls f4, f5, f4
    fmuls f29, f3, f4
    fcmpo cr0, f0, f29
    cror eq, lt, eq
    bne lbl_fn_80507BC0_00000A88
    li r3, -0x1
    b lbl_fn_80507BC0_00001144
lbl_fn_80507BC0_00000A88:
    cmpwi cr1, r10, 0x0
    addi r28, r1, 0xc0
    addi r8, r1, 0x68
    addi r27, r1, 0x10
    li r22, 0x0
    ble cr1, lbl_fn_80507BC0_00000BA4
    cmpwi r10, 0x8
    subi r11, r4, 0x7
    ble lbl_fn_80507BC0_00000B64
    li r12, 0x0
    blt cr1, lbl_fn_80507BC0_00000AC8
    lis r9, 0x8000
    subi r0, r9, 0x2
    cmpw r10, r0
    bgt lbl_fn_80507BC0_00000AC8
    li r12, 0x1
lbl_fn_80507BC0_00000AC8:
    cmpwi r12, 0x0
    beq lbl_fn_80507BC0_00000B64
    lfs f3, lbl_808877AC
    addi r0, r11, 0x7
    srwi r0, r0, 3
    mr r9, r3
    fdivs f4, f3, f0
    mr r10, r28
    mtctr r0
    cmpwi r11, 0x0
    ble lbl_fn_80507BC0_00000B64
lbl_fn_80507BC0_00000AF4:
    lfs f3, 0x0(r9)
    addi r22, r22, 0x8
    fmuls f3, f4, f3
    stfs f3, 0x0(r10)
    lfs f3, 0x4(r9)
    fmuls f3, f4, f3
    stfs f3, 0x4(r10)
    lfs f3, 0x8(r9)
    fmuls f3, f4, f3
    stfs f3, 0x8(r10)
    lfs f3, 0xc(r9)
    fmuls f3, f4, f3
    stfs f3, 0xc(r10)
    lfs f3, 0x10(r9)
    fmuls f3, f4, f3
    stfs f3, 0x10(r10)
    lfs f3, 0x14(r9)
    fmuls f3, f4, f3
    stfs f3, 0x14(r10)
    lfs f3, 0x18(r9)
    fmuls f3, f4, f3
    stfs f3, 0x18(r10)
    lfs f3, 0x1c(r9)
    addi r9, r9, 0x20
    fmuls f3, f4, f3
    stfs f3, 0x1c(r10)
    addi r10, r10, 0x20
    bdnz lbl_fn_80507BC0_00000AF4
lbl_fn_80507BC0_00000B64:
    lfs f3, lbl_808877AC
    addi r9, r4, 0x1
    slwi r10, r22, 2
    fdivs f3, f3, f0
    add r3, r3, r10
    subf r0, r22, r9
    add r10, r28, r10
    mtctr r0
    cmpw r22, r9
    bge lbl_fn_80507BC0_00000BA4
lbl_fn_80507BC0_00000B8C:
    lfs f0, 0x0(r3)
    addi r3, r3, 0x4
    fmuls f0, f3, f0
    stfs f0, 0x0(r10)
    addi r10, r10, 0x4
    bdnz lbl_fn_80507BC0_00000B8C
lbl_fn_80507BC0_00000BA4:
    slwi r0, r4, 2
    add r3, r28, r0
    b lbl_fn_80507BC0_00000BB8
lbl_fn_80507BC0_00000BB0:
    subi r3, r3, 0x4
    subi r23, r23, 0x1
lbl_fn_80507BC0_00000BB8:
    cmpwi r23, 0x0
    ble lbl_fn_80507BC0_00000BD4
    lfs f0, 0x0(r3)
    fabs f0, f0
    frsp f0, f0
    fcmpo cr0, f0, f29
    blt lbl_fn_80507BC0_00000BB0
lbl_fn_80507BC0_00000BD4:
    cmpwi r23, 0x0
    li r29, 0x0
    bne lbl_fn_80507BC0_00000BE8
    li r3, 0x0
    b lbl_fn_80507BC0_00001144
lbl_fn_80507BC0_00000BE8:
    cmpwi cr1, r23, 0x1
    bne cr1, lbl_fn_80507BC0_00000CBC
    lfs f3, 0xc0(r1)
    cmpwi r5, 0x0
    lfs f0, 0xc4(r1)
    fneg f3, f3
    fdivs f0, f3, f0
    stfs f0, 0x0(r7)
    beq lbl_fn_80507BC0_00000C20
    fadds f0, f0, f29
    fcmpo cr0, f1, f0
    mfcr r3
    srwi r3, r3, 31
    b lbl_fn_80507BC0_00000C30
lbl_fn_80507BC0_00000C20:
    fsubs f0, f0, f29
    fcmpo cr0, f1, f0
    mfcr r3
    srwi r3, r3, 31
lbl_fn_80507BC0_00000C30:
    cmpwi r6, 0x0
    beq lbl_fn_80507BC0_00000C50
    lfs f0, 0x0(r7)
    fsubs f0, f0, f29
    fcmpo cr0, f2, f0
    mfcr r0
    extrwi r0, r0, 1, 1
    b lbl_fn_80507BC0_00000C64
lbl_fn_80507BC0_00000C50:
    lfs f0, 0x0(r7)
    fadds f0, f0, f29
    fcmpo cr0, f2, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_80507BC0_00000C64:
    cmpwi r3, 0x0
    li r3, 0x0
    beq lbl_fn_80507BC0_00000C7C
    cmpwi r0, 0x0
    beq lbl_fn_80507BC0_00000C7C
    li r3, 0x1
lbl_fn_80507BC0_00000C7C:
    cmpwi r3, 0x0
    beq lbl_fn_80507BC0_00001144
    cmpwi r5, 0x0
    beq lbl_fn_80507BC0_00000CA0
    lfs f0, 0x0(r7)
    fcmpo cr0, f0, f1
    bge lbl_fn_80507BC0_00000CA0
    stfs f1, 0x0(r7)
    b lbl_fn_80507BC0_00001144
lbl_fn_80507BC0_00000CA0:
    cmpwi r6, 0x0
    beq lbl_fn_80507BC0_00001144
    lfs f0, 0x0(r7)
    fcmpo cr0, f0, f2
    ble lbl_fn_80507BC0_00001144
    stfs f2, 0x0(r7)
    b lbl_fn_80507BC0_00001144
lbl_fn_80507BC0_00000CBC:
    stw r28, 0x8(r1)
    li r5, 0x1
    stw r23, 0xc(r1)
    blt cr1, lbl_fn_80507BC0_00000EF4
    cmpwi r23, 0x8
    subi r7, r23, 0x8
    ble lbl_fn_80507BC0_00000EA0
    li r4, 0x0
    li r6, 0x0
    li r9, 0x0
    blt cr1, lbl_fn_80507BC0_00000CFC
    lis r3, 0x8000
    subi r0, r3, 0x2
    cmpw r23, r0
    bgt lbl_fn_80507BC0_00000CFC
    li r9, 0x1
lbl_fn_80507BC0_00000CFC:
    cmpwi r9, 0x0
    beq lbl_fn_80507BC0_00000D38
    clrrwi r9, r23, 31
    li r3, 0x1
    addis r0, r9, 0x8000
    cmplwi r0, 0x0
    bne lbl_fn_80507BC0_00000D2C
    subi r0, r23, 0x1
    clrrwi r0, r0, 31
    cmpw r9, r0
    beq lbl_fn_80507BC0_00000D2C
    li r3, 0x0
lbl_fn_80507BC0_00000D2C:
    cmpwi r3, 0x0
    beq lbl_fn_80507BC0_00000D38
    li r6, 0x1
lbl_fn_80507BC0_00000D38:
    cmpwi r6, 0x0
    beq lbl_fn_80507BC0_00000D68
    subi r0, r23, 0x1
    li r3, 0x1
    clrrwi. r0, r0, 31
    bne lbl_fn_80507BC0_00000D5C
    clrrwi. r0, r23, 31
    beq lbl_fn_80507BC0_00000D5C
    li r3, 0x0
lbl_fn_80507BC0_00000D5C:
    cmpwi r3, 0x0
    beq lbl_fn_80507BC0_00000D68
    li r4, 0x1
lbl_fn_80507BC0_00000D68:
    cmpwi r4, 0x0
    beq lbl_fn_80507BC0_00000EA0
    addi r0, r7, 0x7
    lis r6, lbl_8075B078@ha
    srwi r0, r0, 3
    addi r3, r28, 0x4
    addi r4, r8, 0x4
    lfd f0, lbl_8075B078@l(r6)
    mtctr r0
    cmpwi r7, 0x1
    blt lbl_fn_80507BC0_00000EA0
lbl_fn_80507BC0_00000D94:
    xoris r0, r5, 0x8000
    stw r0, 0x124(r1)
    addi r6, r5, 0x1
    lfs f8, 0x4(r3)
    xoris r6, r6, 0x8000
    stw r6, 0x11c(r1)
    lfd f1, 0x120(r1)
    addi r0, r5, 0x2
    xoris r6, r0, 0x8000
    lfd f5, 0x118(r1)
    stw r6, 0x124(r1)
    fsubs f2, f1, f0
    fsubs f9, f5, f0
    addi r0, r5, 0x3
    lfs f1, 0x0(r3)
    xoris r0, r0, 0x8000
    stw r0, 0x11c(r1)
    fmuls f10, f2, f1
    lfd f4, 0x120(r1)
    addi r0, r5, 0x4
    xoris r0, r0, 0x8000
    lfd f2, 0x118(r1)
    stw r0, 0x124(r1)
    fsubs f7, f4, f0
    addi r0, r5, 0x5
    lfs f4, 0x8(r3)
    xoris r0, r0, 0x8000
    stw r0, 0x11c(r1)
    addi r6, r5, 0x6
    addi r0, r5, 0x7
    fmuls f8, f9, f8
    stfs f10, -0x4(r4)
    fsubs f6, f2, f0
    lfd f3, 0x120(r1)
    fmuls f7, f7, f4
    stfs f8, 0x0(r4)
    lfs f5, 0xc(r3)
    xoris r6, r6, 0x8000
    stw r6, 0x124(r1)
    fsubs f4, f3, f0
    fmuls f8, f6, f5
    lfd f1, 0x118(r1)
    stfs f7, 0x4(r4)
    xoris r0, r0, 0x8000
    lfs f3, 0x10(r3)
    stw r0, 0x11c(r1)
    fsubs f6, f1, f0
    lfs f5, 0x14(r3)
    fmuls f7, f4, f3
    lfd f2, 0x120(r1)
    stfs f8, 0x8(r4)
    addi r5, r5, 0x8
    lfd f1, 0x118(r1)
    fsubs f4, f2, f0
    lfs f3, 0x18(r3)
    fmuls f5, f6, f5
    stfs f7, 0xc(r4)
    fsubs f2, f1, f0
    lfs f1, 0x1c(r3)
    stfs f5, 0x10(r4)
    fmuls f3, f4, f3
    fmuls f1, f2, f1
    addi r3, r3, 0x20
    stfs f3, 0x14(r4)
    stfs f1, 0x18(r4)
    addi r4, r4, 0x20
    bdnz lbl_fn_80507BC0_00000D94
lbl_fn_80507BC0_00000EA0:
    addi r0, r23, 0x1
    slwi r6, r5, 2
    lis r3, lbl_8075B078@ha
    add r4, r28, r6
    subf r0, r5, r0
    add r6, r8, r6
    lfd f2, lbl_8075B078@l(r3)
    mtctr r0
    cmpw r5, r23
    bgt lbl_fn_80507BC0_00000EF4
lbl_fn_80507BC0_00000EC8:
    xoris r0, r5, 0x8000
    stw r0, 0x124(r1)
    lfs f0, 0x0(r4)
    addi r4, r4, 0x4
    lfd f1, 0x120(r1)
    addi r5, r5, 0x1
    fsubs f1, f1, f2
    fmuls f0, f1, f0
    stfs f0, -0x4(r6)
    addi r6, r6, 0x4
    bdnz lbl_fn_80507BC0_00000EC8
lbl_fn_80507BC0_00000EF4:
    fmr f1, f27
    mr r3, r8
    fmr f2, f28
    mr r7, r27
    subi r4, r23, 0x1
    li r5, 0x0
    li r6, 0x0
    bl fn_80507BC0
    cmpwi r3, -0x1
    mr r22, r3
    bne lbl_fn_80507BC0_00000F28
    li r3, 0x0
    b lbl_fn_80507BC0_00001144
lbl_fn_80507BC0_00000F28:
    slwi r0, r23, 2
    lfs f25, lbl_8088779C
    add r31, r28, r0
    lfs f26, lbl_808877A0
    li r28, 0x0
    li r30, 0x0
    b lbl_fn_80507BC0_00001138
lbl_fn_80507BC0_00000F44:
    cmpw r29, r23
    ble lbl_fn_80507BC0_00000F54
    mr r3, r29
    b lbl_fn_80507BC0_00001144
lbl_fn_80507BC0_00000F54:
    cmpwi r30, 0x0
    bne lbl_fn_80507BC0_00000FB0
    fmr f1, f27
    lfs f2, 0x0(r31)
    mr r3, r23
    mr r4, r31
    b lbl_fn_80507BC0_00000F78
lbl_fn_80507BC0_00000F70:
    lfs f0, 0x0(r4)
    fmadds f2, f27, f2, f0
lbl_fn_80507BC0_00000F78:
    subic. r3, r3, 0x1
    subi r4, r4, 0x4
    bge lbl_fn_80507BC0_00000F70
    fabs f0, f2
    frsp f0, f0
    fcmpo cr0, f0, f29
    cror eq, lt, eq
    bne lbl_fn_80507BC0_00000FB8
    cmpwi r24, 0x0
    beq lbl_fn_80507BC0_00000FB8
    slwi r0, r29, 2
    addi r29, r29, 0x1
    stfsx f27, r26, r0
    b lbl_fn_80507BC0_00000FB8
lbl_fn_80507BC0_00000FB0:
    fmr f1, f31
    fmr f2, f30
lbl_fn_80507BC0_00000FB8:
    cmpw r30, r22
    bne lbl_fn_80507BC0_00000FCC
    fmr f31, f28
    li r28, 0x0
    b lbl_fn_80507BC0_00000FD0
lbl_fn_80507BC0_00000FCC:
    lfs f31, 0x0(r27)
lbl_fn_80507BC0_00000FD0:
    lfs f30, 0x0(r31)
    mr r3, r23
    mr r4, r31
    b lbl_fn_80507BC0_00000FE8
lbl_fn_80507BC0_00000FE0:
    lfs f0, 0x0(r4)
    fmadds f30, f31, f30, f0
lbl_fn_80507BC0_00000FE8:
    subic. r3, r3, 0x1
    subi r4, r4, 0x4
    bge lbl_fn_80507BC0_00000FE0
    cmpwi r28, 0x0
    beq lbl_fn_80507BC0_00001004
    li r28, 0x0
    b lbl_fn_80507BC0_00001130
lbl_fn_80507BC0_00001004:
    fabs f0, f30
    frsp f0, f0
    fcmpo cr0, f0, f29
    bge lbl_fn_80507BC0_00001038
    cmpw r30, r22
    bne lbl_fn_80507BC0_00001024
    cmpwi r25, 0x0
    beq lbl_fn_80507BC0_00001130
lbl_fn_80507BC0_00001024:
    slwi r0, r29, 2
    li r28, 0x1
    stfsx f31, r26, r0
    addi r29, r29, 0x1
    b lbl_fn_80507BC0_00001130
lbl_fn_80507BC0_00001038:
    fcmpo cr0, f2, f25
    bge lbl_fn_80507BC0_00001048
    fcmpo cr0, f30, f25
    bgt lbl_fn_80507BC0_00001058
lbl_fn_80507BC0_00001048:
    fcmpo cr0, f2, f25
    ble lbl_fn_80507BC0_00001130
    fcmpo cr0, f30, f25
    bge lbl_fn_80507BC0_00001130
lbl_fn_80507BC0_00001058:
    lwz r4, 0xc(r1)
    lwz r0, 0x8(r1)
    slwi r5, r4, 2
    mr r3, r4
    lfsux f3, r5, r0
    b lbl_fn_80507BC0_00001078
lbl_fn_80507BC0_00001070:
    lfs f0, 0x0(r5)
    fmadds f3, f1, f3, f0
lbl_fn_80507BC0_00001078:
    subic. r3, r3, 0x1
    subi r5, r5, 0x4
    bge lbl_fn_80507BC0_00001070
    fabs f2, f3
    lfs f0, lbl_8087F870
    frsp f2, f2
    fcmpo cr0, f2, f0
    bge lbl_fn_80507BC0_0000109C
    b lbl_fn_80507BC0_000010EC
lbl_fn_80507BC0_0000109C:
    lwz r0, 0x8(r1)
    slwi r3, r4, 2
    lfsux f4, r3, r0
    b lbl_fn_80507BC0_000010B4
lbl_fn_80507BC0_000010AC:
    lfs f0, 0x0(r3)
    fmadds f4, f31, f4, f0
lbl_fn_80507BC0_000010B4:
    subic. r4, r4, 0x1
    subi r3, r3, 0x4
    bge lbl_fn_80507BC0_000010AC
    fabs f2, f4
    lfs f0, lbl_8087F870
    frsp f2, f2
    fcmpo cr0, f2, f0
    bge lbl_fn_80507BC0_000010DC
    fmr f1, f31
    b lbl_fn_80507BC0_000010EC
lbl_fn_80507BC0_000010DC:
    fmr f2, f31
    lfs f5, lbl_8088779C
    addi r3, r1, 0x8
    bl fn_805078A8
lbl_fn_80507BC0_000010EC:
    slwi r0, r29, 2
    addi r29, r29, 0x1
    cmpwi r29, 0x1
    stfsx f1, r26, r0
    ble lbl_fn_80507BC0_00001130
    slwi r0, r29, 2
    add r3, r26, r0
    lfs f1, -0x4(r3)
    lfs f2, -0x8(r3)
    fsubs f0, f1, f29
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_80507BC0_00001130
    fadds f0, f2, f1
    subi r29, r29, 0x1
    fmuls f0, f26, f0
    stfs f0, -0x8(r3)
lbl_fn_80507BC0_00001130:
    addi r27, r27, 0x4
    addi r30, r30, 0x1
lbl_fn_80507BC0_00001138:
    cmpw r30, r22
    ble lbl_fn_80507BC0_00000F44
    mr r3, r29
lbl_fn_80507BC0_00001144:
    addi r11, r1, 0x150
    psq_l f31, 0x1b8(r1), 0, 0
    lfd f31, 0x1b0(r1)
    psq_l f30, 0x1a8(r1), 0, 0
    lfd f30, 0x1a0(r1)
    psq_l f29, 0x198(r1), 0, 0
    lfd f29, 0x190(r1)
    psq_l f28, 0x188(r1), 0, 0
    lfd f28, 0x180(r1)
    psq_l f27, 0x178(r1), 0, 0
    lfd f27, 0x170(r1)
    psq_l f26, 0x168(r1), 0, 0
    lfd f26, 0x160(r1)
    psq_l f25, 0x158(r1), 0, 0
    lfd f25, 0x150(r1)
    bl _restgpr_22
    lwz r0, 0x1c4(r1)
    mtlr r0
    addi r1, r1, 0x1c0
    blr
}

asm void fn_8050845C(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    lwz r0, lbl_8087F874
    stfd f31, 0x70(r1)
    cmpwi r0, 0x0
    psq_st f31, 0x78(r1), 0, 0
    stfd f30, 0x60(r1)
    psq_st f30, 0x68(r1), 0, 0
    stfd f29, 0x50(r1)
    psq_st f29, 0x58(r1), 0, 0
    stfd f28, 0x40(r1)
    psq_st f28, 0x48(r1), 0, 0
    stfd f27, 0x30(r1)
    psq_st f27, 0x38(r1), 0, 0
    stfd f26, 0x20(r1)
    psq_st f26, 0x28(r1), 0, 0
    stw r31, 0x1c(r1)
    lis r31, lbl_8075B058@ha
    addi r31, r31, lbl_8075B058@l
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    bne lbl_fn_8050845C_0000123C
    lfs f3, lbl_808877AC
    lfs f2, lbl_808877A0
    fmr f1, f3
lbl_fn_8050845C_0000120C:
    frsp f0, f1
    fmuls f1, f0, f2
    fadds f0, f1, f3
    fcmpo cr0, f0, f3
    mfcr r0
    extrwi. r0, r0, 1, 1
    bne lbl_fn_8050845C_0000120C
    lfs f0, lbl_808877A4
    li r0, 0x1
    stw r0, lbl_8087F874
    fmuls f1, f0, f1
    stfs f1, lbl_8087F870
lbl_fn_8050845C_0000123C:
    cmpwi r3, 0x0
    bne lbl_fn_8050845C_0000124C
    li r3, 0x0
    b lbl_fn_8050845C_00001504
lbl_fn_8050845C_0000124C:
    lfs f1, 0xc(r4)
    lfs f2, 0x0(r4)
    lfd f0, 0x0(r31)
    fsubs f30, f1, f2
    fcmpu cr0, f0, f30
    bne lbl_fn_8050845C_0000126C
    li r3, 0x0
    b lbl_fn_8050845C_00001504
lbl_fn_8050845C_0000126C:
    lfs f1, 0x4(r4)
    lfs f0, 0x8(r4)
    fsubs f3, f1, f2
    lfs f1, lbl_80887798
    fsubs f0, f0, f2
    fdivs f29, f3, f30
    fdivs f0, f0, f30
    fcmpu cr0, f1, f29
    bne lbl_fn_8050845C_000012A8
    lfs f1, lbl_808877B0
    fcmpu cr0, f1, f0
    bne lbl_fn_8050845C_000012A8
    li r0, 0x1
    stw r0, 0x0(r3)
    b lbl_fn_8050845C_000012B0
lbl_fn_8050845C_000012A8:
    li r0, 0x0
    stw r0, 0x0(r3)
lbl_fn_8050845C_000012B0:
    lfd f1, 0x0(r31)
    fmr f27, f29
    fmr f26, f0
    fcmpo cr0, f29, f1
    bge lbl_fn_8050845C_000012C8
    lfs f29, lbl_8088779C
lbl_fn_8050845C_000012C8:
    lfd f1, 0x28(r31)
    fcmpo cr0, f0, f1
    ble lbl_fn_8050845C_000012D8
    lfs f0, lbl_808877AC
lbl_fn_8050845C_000012D8:
    lfd f1, 0x28(r31)
    fcmpo cr0, f29, f1
    bgt lbl_fn_8050845C_000012F0
    lfd f1, 0x30(r31)
    fcmpo cr0, f0, f1
    bge lbl_fn_8050845C_000013E4
lbl_fn_8050845C_000012F0:
    lfs f2, lbl_808877AC
    lfd f1, 0x0(r31)
    fsubs f28, f2, f0
    fcmpo cr0, f29, f1
    bge lbl_fn_8050845C_00001308
    lfs f29, lbl_8088779C
lbl_fn_8050845C_00001308:
    lfd f0, 0x0(r31)
    fcmpo cr0, f28, f0
    bge lbl_fn_8050845C_00001318
    lfs f28, lbl_8088779C
lbl_fn_8050845C_00001318:
    lfs f0, lbl_808877AC
    fcmpo cr0, f29, f0
    bgt lbl_fn_8050845C_0000132C
    fcmpo cr0, f28, f0
    ble lbl_fn_8050845C_000013DC
lbl_fn_8050845C_0000132C:
    lfs f0, lbl_808877A4
    lfs f3, lbl_808877AC
    fsubs f31, f29, f0
    lfs f2, lbl_8087F870
    fsubs f1, f28, f0
    lfs f0, lbl_8088779C
    fadds f4, f31, f28
    fmuls f1, f28, f1
    fmadds f1, f29, f4, f1
    fadds f1, f3, f1
    fadds f1, f1, f2
    fcmpo cr0, f1, f0
    ble lbl_fn_8050845C_000013DC
    fadds f0, f29, f2
    lfs f1, lbl_808877B4
    fcmpo cr0, f0, f1
    bge lbl_fn_8050845C_000013D0
    fsubs f1, f29, f3
    lfs f0, lbl_808877B8
    fmuls f0, f0, f1
    fmuls f0, f0, f1
    fmsubs f1, f31, f31, f0
    bl fn_8068B100
    frsp f5, f1
    lfs f1, lbl_8087F870
    fneg f4, f31
    lfs f2, lbl_808877A0
    fadds f0, f28, f1
    fadds f3, f4, f5
    fmuls f3, f2, f3
    fcmpo cr0, f0, f3
    ble lbl_fn_8050845C_000013B4
    fsubs f28, f3, f1
    b lbl_fn_8050845C_000013DC
lbl_fn_8050845C_000013B4:
    fsubs f0, f4, f5
    fmuls f0, f2, f0
    fadds f0, f0, f1
    fcmpo cr0, f28, f0
    bge lbl_fn_8050845C_000013DC
    fmr f28, f0
    b lbl_fn_8050845C_000013DC
lbl_fn_8050845C_000013D0:
    lfs f0, lbl_80887798
    fsubs f29, f1, f2
    fsubs f28, f0, f2
lbl_fn_8050845C_000013DC:
    lfs f0, lbl_808877AC
    fsubs f0, f0, f28
lbl_fn_8050845C_000013E4:
    fcmpu cr0, f29, f27
    beq lbl_fn_8050845C_00001420
    lfs f2, 0x0(r29)
    lfd f1, 0x0(r31)
    fmadds f2, f29, f30, f2
    fcmpu cr0, f1, f27
    stfs f2, 0x4(r29)
    beq lbl_fn_8050845C_00001420
    lfs f1, 0x4(r30)
    lfs f2, 0x0(r30)
    fsubs f1, f1, f2
    fmuls f1, f29, f1
    fdivs f1, f1, f27
    fadds f1, f2, f1
    stfs f1, 0x4(r30)
lbl_fn_8050845C_00001420:
    fcmpu cr0, f0, f26
    beq lbl_fn_8050845C_00001468
    lfs f2, 0x0(r29)
    lfd f1, 0x28(r31)
    fmadds f2, f0, f30, f2
    fcmpu cr0, f1, f26
    stfs f2, 0x8(r29)
    beq lbl_fn_8050845C_00001468
    lfs f1, lbl_808877AC
    lfs f3, 0xc(r30)
    lfs f2, 0x8(r30)
    fsubs f4, f1, f0
    fsubs f1, f1, f26
    fsubs f2, f3, f2
    fmuls f2, f4, f2
    fdivs f1, f2, f1
    fsubs f1, f3, f1
    stfs f1, 0x8(r30)
lbl_fn_8050845C_00001468:
    lfs f3, lbl_8088779C
    fsubs f5, f0, f29
    lfs f1, lbl_808877AC
    li r3, 0x1
    fsubs f6, f29, f3
    lfs f2, 0x0(r29)
    fsubs f0, f1, f0
    stfs f2, 0x4(r28)
    fsubs f4, f5, f6
    lfs f1, 0xc(r29)
    fsubs f2, f0, f5
    fadds f0, f6, f6
    stfs f1, 0x8(r28)
    fadds f1, f4, f4
    fsubs f2, f2, f4
    stfs f3, 0xc(r28)
    fadds f0, f6, f0
    fadds f1, f4, f1
    stfs f2, 0x18(r28)
    stfs f1, 0x14(r28)
    stfs f0, 0x10(r28)
    lfs f2, 0x8(r30)
    lfs f1, 0x4(r30)
    lfs f0, 0x0(r30)
    lfs f3, 0xc(r30)
    fsubs f4, f2, f1
    fsubs f5, f1, f0
    fsubs f1, f3, f2
    stfs f0, 0x1c(r28)
    fadds f0, f5, f5
    fsubs f3, f4, f5
    fsubs f2, f1, f4
    fadds f0, f5, f0
    fadds f1, f3, f3
    fsubs f2, f2, f3
    stfs f0, 0x20(r28)
    fadds f1, f3, f1
    stfs f2, 0x28(r28)
    stfs f1, 0x24(r28)
lbl_fn_8050845C_00001504:
    lwz r0, 0x84(r1)
    psq_l f31, 0x78(r1), 0, 0
    lfd f31, 0x70(r1)
    psq_l f30, 0x68(r1), 0, 0
    lfd f30, 0x60(r1)
    psq_l f29, 0x58(r1), 0, 0
    lfd f29, 0x50(r1)
    psq_l f28, 0x48(r1), 0, 0
    lfd f28, 0x40(r1)
    psq_l f27, 0x38(r1), 0, 0
    lfd f27, 0x30(r1)
    psq_l f26, 0x28(r1), 0, 0
    lfd f26, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_8050881C(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r3
    bne lbl_fn_8050881C_00001578
    lfs f1, lbl_8088779C
    b lbl_fn_8050881C_00001630
lbl_fn_8050881C_00001578:
    lfs f2, 0x4(r3)
    fcmpu cr0, f2, f1
    bne lbl_fn_8050881C_0000158C
    lfs f3, lbl_8088779C
    b lbl_fn_8050881C_000015AC
lbl_fn_8050881C_0000158C:
    lfs f0, 0x8(r3)
    fcmpu cr0, f0, f1
    bne lbl_fn_8050881C_000015A0
    lfs f3, lbl_808877AC
    b lbl_fn_8050881C_000015AC
lbl_fn_8050881C_000015A0:
    fsubs f1, f1, f2
    fsubs f0, f0, f2
    fdivs f3, f1, f0
lbl_fn_8050881C_000015AC:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8050881C_000015BC
    b lbl_fn_8050881C_00001614
lbl_fn_8050881C_000015BC:
    lfs f0, 0x18(r3)
    addi r7, r1, 0x18
    stfs f0, 0x14(r1)
    li r4, 0x3
    lfs f1, lbl_8088779C
    li r5, 0x1
    lfs f0, 0x14(r3)
    li r6, 0x1
    stfs f0, 0x10(r1)
    lfs f2, lbl_808877AC
    lfs f0, 0x10(r3)
    stfs f0, 0xc(r1)
    lfs f0, 0xc(r3)
    addi r3, r1, 0x8
    fsubs f0, f0, f3
    stfs f0, 0x8(r1)
    bl fn_80507BC0
    cmpwi r3, 0x1
    bne lbl_fn_8050881C_00001610
    lfs f3, 0x18(r1)
    b lbl_fn_8050881C_00001614
lbl_fn_8050881C_00001610:
    lfs f3, lbl_8088779C
lbl_fn_8050881C_00001614:
    lfs f2, 0x28(r31)
    lfs f0, 0x24(r31)
    lfs f1, 0x20(r31)
    fmadds f2, f3, f2, f0
    lfs f0, 0x1c(r31)
    fmadds f1, f3, f2, f1
    fmadds f1, f3, f1, f0
lbl_fn_8050881C_00001630:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8050890C(void)
{
    nofralloc
    cmpwi r3, 0x0
    beqlr
    lfs f0, 0x0(r4)
    lis r6, lbl_8075B058@ha
    stfs f0, 0x4(r3)
    lfs f7, lbl_808877BC
    lfs f1, 0x0(r4)
    lfs f0, 0x4(r4)
    fmr f6, f7
    lfs f3, 0xc(r4)
    fsubs f5, f0, f1
    lfd f0, lbl_8075B058@l(r6)
    fsubs f3, f3, f1
    lfs f2, 0xc(r5)
    lfs f1, 0x0(r5)
    fcmpu cr0, f0, f5
    fsubs f4, f2, f1
    beq lbl_fn_8050890C_00001698
    lfs f0, 0x4(r5)
    fsubs f0, f0, f1
    fdivs f6, f0, f5
lbl_fn_8050890C_00001698:
    lfs f2, 0xc(r4)
    lis r6, lbl_8075B058@ha
    lfs f1, 0x8(r4)
    lfd f0, lbl_8075B058@l(r6)
    fsubs f2, f2, f1
    fcmpu cr0, f0, f2
    beq lbl_fn_8050890C_000016C4
    lfs f1, 0xc(r5)
    lfs f0, 0x8(r5)
    fsubs f0, f1, f0
    fdivs f7, f0, f2
lbl_fn_8050890C_000016C4:
    fmuls f2, f3, f3
    lfs f1, lbl_808877AC
    fadds f0, f4, f4
    stfs f6, 0x14(r3)
    fmuls f5, f3, f6
    fdivs f2, f1, f2
    fmuls f6, f3, f7
    fadds f0, f4, f0
    fadds f1, f5, f6
    fsubs f0, f0, f5
    fsubs f1, f1, f4
    fsubs f0, f0, f5
    fsubs f1, f1, f4
    fsubs f0, f0, f6
    fmuls f1, f2, f1
    fmuls f0, f2, f0
    fdivs f1, f1, f3
    stfs f0, 0x10(r3)
    stfs f1, 0xc(r3)
    lfs f0, 0x0(r5)
    stfs f0, 0x18(r3)
    blr
}

asm void fn_805089E4(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x134(r1)
    stmw r25, 0x114(r1)
    mr r25, r3
    mr r26, r4
    mr r27, r5
    mr r28, r6
    li r29, 0x1
    bne lbl_fn_805089E4_00001784
    lwz r12, 0x0(r3)
    mr r4, r27
    mr r6, r27
    lwz r5, 0x4(r3)
    lwz r12, 0x14(r12)
    lwz r7, 0x0(r28)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_805089E4_00001778
    li r3, 0x0
    b lbl_fn_805089E4_0000189C
lbl_fn_805089E4_00001778:
    lwz r3, 0x0(r28)
    addi r0, r3, 0x2
    stw r0, 0x0(r28)
lbl_fn_805089E4_00001784:
    lwz r3, 0x0(r28)
    cmpwi r26, 0x0
    addi r0, r3, 0xf
    srawi r0, r0, 4
    addze r0, r0
    slwi r6, r0, 4
    stw r6, 0x0(r28)
    bne lbl_fn_805089E4_000017C8
    lwz r12, 0x0(r25)
    mr r3, r25
    mr r4, r26
    lwz r5, 0x8(r25)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    mr r30, r3
    b lbl_fn_805089E4_000017E8
lbl_fn_805089E4_000017C8:
    lwz r12, 0x0(r25)
    mr r3, r25
    mr r4, r26
    mr r5, r27
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    mr r30, r3
lbl_fn_805089E4_000017E8:
    lwz r12, 0x0(r25)
    mr r3, r25
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r25)
    mr r31, r3
    mr r3, r25
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r5, r31
    mr r6, r30
    addi r3, r1, 0x8
    bl fn_80699E24
    cmpwi r26, 0x0
    bne lbl_fn_805089E4_00001854
    lwz r4, 0x8(r25)
    mr r5, r27
    lwz r6, 0x0(r28)
    addi r3, r1, 0x8
    bl fn_80699E30
    lwz r3, 0x0(r28)
    addi r0, r3, 0x10
    stw r0, 0x0(r28)
    b lbl_fn_805089E4_00001890
lbl_fn_805089E4_00001854:
    lwz r6, 0x0(r28)
    mr r5, r27
    lwz r4, 0xc(r25)
    addi r3, r1, 0x8
    subi r6, r6, 0x10
    bl fn_80699EE8
    lwz r12, 0x0(r25)
    mr r3, r25
    lwz r4, 0x0(r28)
    lwz r12, 0x18(r12)
    subi r5, r4, 0x10
    lwz r4, 0xc(r25)
    mtctr r12
    bctrl
    mr r29, r3
lbl_fn_805089E4_00001890:
    addi r3, r1, 0x8
    bl fn_80699E2C
    mr r3, r29
lbl_fn_805089E4_0000189C:
    lmw r25, 0x114(r1)
    lwz r0, 0x134(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

asm void fn_80508B78(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r6, lbl_807930F0@ha
    lis r4, fn_80508CC8@ha
    stw r0, 0x24(r1)
    lis r5, fn_804DBC84@ha
    addi r6, r6, lbl_807930F0@l
    addi r4, r4, fn_80508CC8@l
    stmw r26, 0x8(r1)
    li r29, 0x0
    mr r26, r3
    addi r5, r5, fn_804DBC84@l
    li r7, 0x8
    stw r6, 0x0(r3)
    li r6, 0x24
    stw r29, 0x4(r3)
    stw r29, 0x8(r3)
    stw r29, 0x98(r3)
    stw r29, 0x9c(r3)
    stw r29, 0xa0(r3)
    stw r29, 0xa4(r3)
    stw r29, 0xa8(r3)
    stw r29, 0xac(r3)
    stw r29, 0xb0(r3)
    stw r29, 0xb4(r3)
    stw r29, 0xb8(r3)
    stw r29, 0xbc(r3)
    stw r29, 0xc8(r3)
    addi r3, r3, 0xd8
    bl fn_806958E0
    addi r3, r26, 0x200
    bl fn_8050E680
    stw r29, 0x270(r26)
    addi r28, r26, 0x274
    addi r27, r26, 0x414
    li r30, 0xff
    lis r31, lbl_80791B0C@ha
lbl_fn_80508B78_00001944:
    stb r30, 0x0(r28)
    addi r3, r28, 0x10
    addi r4, r31, lbl_80791B0C@l
    stw r29, 0x4(r28)
    stw r29, 0x8(r28)
    stw r29, 0xc(r28)
    stw r29, 0x30(r28)
    bl fn_80686A64
    addi r28, r28, 0x34
    cmplw r28, r27
    blt lbl_fn_80508B78_00001944
    addi r3, r26, 0x430
    bl fn_8050E8CC
    addis r3, r26, 0x1
    li r4, 0x0
    subi r6, r3, 0x413c
    li r0, -0x1
    subi r5, r3, 0x4174
    stw r0, 0xe38(r26)
    cmplw r5, r6
    stw r4, -0x4180(r3)
    stw r4, -0x417c(r3)
    bge lbl_fn_80508B78_000019C0
    addi r0, r6, 0x7
    subf r0, r5, r0
    srwi r0, r0, 3
    mtctr r0
    bge lbl_fn_80508B78_000019C0
lbl_fn_80508B78_000019B4:
    stw r4, 0x0(r5)
    addi r5, r5, 0x8
    bdnz lbl_fn_80508B78_000019B4
lbl_fn_80508B78_000019C0:
    addis r5, r26, 0x1
    li r3, 0x1
    li r0, 0x0
    stw r3, -0x3e0c(r5)
    subi r3, r5, 0x4128
    li r4, 0x0
    stw r0, -0x3e00(r5)
    li r5, 0x318
    bl memset
    bl fn_8050D3EC
    mr r3, r26
    lmw r26, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
