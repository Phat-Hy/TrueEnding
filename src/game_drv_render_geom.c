#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_22(void);
extern void _restgpr_26(void);
extern void _savegpr_22(void);
extern void _savegpr_26(void);
extern void dtor_80084684(void);
extern void fn_805CD450(void);
extern void fn_805CDD90(void);
extern void fn_805CE6F0(void);
extern void fn_805CF8E0(void);
extern void fn_805CFA00(void);
extern void fn_805D7CE0(void);
extern void fn_805D7D60(void);
extern void fn_805D9BE0(void);
extern void fn_805D9C70(void);
extern void fn_805D9CC0(void);
extern void fn_80613960(void);
extern void fn_80613BB0(void);
extern void fn_80615C40(void);
extern void fn_80615D20(void);
extern void fn_80615D50(void);
extern void fn_80616360(void);
extern void fn_80616380(void);
extern void fn_80616390(void);
extern void fn_806163A0(void);
extern void fn_806163C0(void);
extern void fn_806163E0(void);
extern void fn_80616400(void);
extern void fn_80616410(void);
extern void fn_80616420(void);
extern void fn_806165B0(void);
extern void fn_80616610(void);
extern void fn_80616640(void);
extern void fn_80616E80(void);
extern void fn_80617030(void);
extern void fn_80617130(void);
extern void fn_80617200(void);
extern void fn_80617220(void);
extern void fn_806173E0(void);
extern void fn_80617420(void);
extern void fn_80617460(void);
extern void fn_806174C0(void);
extern void fn_80617580(void);
extern void fn_806175F0(void);
extern void fn_80617650(void);
extern void fn_806176A0(void);
extern void fn_806176F0(void);
extern void fn_80617730(void);
extern void fn_806177B0(void);
extern void fn_80617880(void);
extern void fn_806179E0(void);
extern void fn_80617D50(void);
extern void fn_80618420(void);
extern void fn_8061A100(void);
extern void fn_8068236C(void);

/* External data declarations */
extern u8 lbl_80764558[];
extern u8 lbl_8076456C[];
extern u8 lbl_80764570[];
extern u8 lbl_80764580[];
extern u8 lbl_80764588[];
extern u8 lbl_80764590[];
extern u8 lbl_80799080[];
extern u8 lbl_807990A0[];
extern u8 lbl_80799108[];
extern u8 lbl_807CA1F8[];

/* Small data declarations */

/* Function declarations */
void fn_805D1500(void);
void fn_805D1520(void);
void fn_805D1540(void);
void fn_805D15A0(void);
void fn_805D1630(void);
void fn_805D1790(void);
void fn_805D1820(void);
void fn_805D1880(void);
void fn_805D1A40(void);
void fn_805D2860(void);
void fn_805D2880(void);
void fn_805D2900(void);
void fn_805D2920(void);
void fn_805D29A0(void);
void fn_805D29E0(void);
void fn_805D29F0(void);
void fn_805D2A40(void);
void fn_805D2B50(void);
void fn_805D2C70(void);
void fn_805D2DB0(void);
void fn_805D2E00(void);

asm void fn_805D1500(void)
{
    nofralloc
    lwz r0, 0x4c(r3)
    lwz r3, 0x58(r3)
    rlwinm r0, r0, 9, 23, 26
    add r3, r3, r0
    blr
}

asm void fn_805D1520(void)
{
    nofralloc
    lwz r4, 0x4c(r3)
    lwz r5, 0x58(r3)
    extrwi r0, r4, 4, 4
    rlwinm r3, r4, 9, 23, 26
    mulli r0, r0, 0x14
    add r0, r5, r0
    add r3, r3, r0
    blr
}

asm void fn_805D1540(void)
{
    nofralloc
    lwz r9, 0x4c(r3)
    lwz r11, 0x58(r3)
    extrwi r0, r9, 4, 4
    rlwinm r8, r9, 28, 29, 29
    mulli r3, r0, 0x14
    rlwinm r6, r9, 26, 29, 29
    rlwinm r7, r9, 20, 29, 29
    rlwinm r5, r9, 27, 29, 29
    rlwinm r4, r9, 14, 26, 29
    rlwinm r0, r9, 9, 23, 26
    add r0, r4, r0
    rlwinm r10, r9, 19, 27, 29
    rlwinm r9, r9, 29, 29, 29
    add r5, r7, r5
    add r4, r8, r6
    add r3, r3, r0
    add r4, r5, r4
    add r0, r10, r9
    add r3, r4, r3
    add r0, r11, r0
    add r3, r3, r0
    blr
}

asm void fn_805D15A0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    beq lbl_fn_805D15A0_00000110
    lwz r4, 0x50(r3)
    lwz r3, 0x58(r3)
    rlwinm r0, r4, 9, 23, 26
    srwi r30, r4, 28
    add r31, r3, r0
    b lbl_fn_805D15A0_000000FC
lbl_fn_805D15A0_000000E4:
    mr r3, r31
    li r4, 0x0
    li r5, 0x20
    bl memset
    addi r31, r31, 0x20
    addi r30, r30, 0x1
lbl_fn_805D15A0_000000FC:
    cmplw r30, r29
    blt lbl_fn_805D15A0_000000E4
    lwz r0, 0x50(r28)
    rlwimi r0, r29, 28, 0, 3
    stw r0, 0x50(r28)
lbl_fn_805D15A0_00000110:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805D1630(void)
{
    nofralloc
    cmpwi r4, 0x0
    beqlr
    lwz r7, 0x4c(r3)
    lwz r0, 0x50(r3)
    extrwi r5, r7, 4, 4
    lwz r8, 0x58(r3)
    mulli r6, r5, 0x14
    extrwi r12, r0, 4, 8
    rlwinm r5, r7, 9, 23, 26
    cmplw cr1, r12, r4
    add r0, r8, r6
    add r9, r5, r0
    bge cr1, lbl_fn_805D1630_00000274
    subf r0, r12, r4
    subi r10, r4, 0x8
    cmplwi r0, 0x8
    ble lbl_fn_805D1630_00000234
    bgt cr1, lbl_fn_805D1630_00000234
    addi r0, r10, 0x7
    slwi r5, r12, 2
    subf r0, r12, r0
    li r8, 0x1
    srwi r0, r0, 3
    add r11, r9, r5
    li r7, 0x4
    li r6, 0x3c
    li r5, 0x0
    mtctr r0
    cmplw r12, r10
    bge lbl_fn_805D1630_00000234
lbl_fn_805D1630_000001A8:
    stb r8, 0x0(r11)
    addi r12, r12, 0x8
    stb r7, 0x1(r11)
    stb r6, 0x2(r11)
    stb r5, 0x3(r11)
    stb r8, 0x4(r11)
    stb r7, 0x5(r11)
    stb r6, 0x6(r11)
    stb r5, 0x7(r11)
    stb r8, 0x8(r11)
    stb r7, 0x9(r11)
    stb r6, 0xa(r11)
    stb r5, 0xb(r11)
    stb r8, 0xc(r11)
    stb r7, 0xd(r11)
    stb r6, 0xe(r11)
    stb r5, 0xf(r11)
    stb r8, 0x10(r11)
    stb r7, 0x11(r11)
    stb r6, 0x12(r11)
    stb r5, 0x13(r11)
    stb r8, 0x14(r11)
    stb r7, 0x15(r11)
    stb r6, 0x16(r11)
    stb r5, 0x17(r11)
    stb r8, 0x18(r11)
    stb r7, 0x19(r11)
    stb r6, 0x1a(r11)
    stb r5, 0x1b(r11)
    stb r8, 0x1c(r11)
    stb r7, 0x1d(r11)
    stb r6, 0x1e(r11)
    stb r5, 0x1f(r11)
    addi r11, r11, 0x20
    bdnz lbl_fn_805D1630_000001A8
lbl_fn_805D1630_00000234:
    slwi r5, r12, 2
    subf r0, r12, r4
    add r9, r9, r5
    li r8, 0x1
    li r7, 0x4
    li r6, 0x3c
    li r5, 0x0
    mtctr r0
    cmplw r12, r4
    bge lbl_fn_805D1630_00000274
lbl_fn_805D1630_0000025C:
    stb r8, 0x0(r9)
    stb r7, 0x1(r9)
    stb r6, 0x2(r9)
    stb r5, 0x3(r9)
    addi r9, r9, 0x4
    bdnz lbl_fn_805D1630_0000025C
lbl_fn_805D1630_00000274:
    lwz r0, 0x50(r3)
    rlwimi r0, r4, 20, 8, 11
    stw r0, 0x50(r3)
    blr
}

asm void fn_805D1790(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    clrlslwi r0, r4, 24, 5
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r5
    lwz r3, 0x58(r3)
    add r31, r3, r0
    mr r3, r31
    bl fn_80616410
    mr r30, r3
    mr r3, r31
    bl fn_80616420
    mr r29, r3
    mr r3, r31
    mr r4, r28
    li r5, 0x0
    bl fn_805CE6F0
    mr r3, r31
    mr r4, r30
    mr r5, r29
    bl fn_80616360
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805D1820(void)
{
    nofralloc
    lwz r3, 0x58(r3)
    clrlslwi r0, r4, 24, 5
    lwz r6, 0x0(r5)
    li r4, 0x0
    add r3, r3, r0
    lwz r0, 0x4(r5)
    stw r6, 0x0(r3)
    lwz r6, 0x8(r5)
    stw r0, 0x4(r3)
    lwz r0, 0xc(r5)
    stw r6, 0x8(r3)
    lwz r6, 0x10(r5)
    stw r0, 0xc(r3)
    lwz r0, 0x14(r5)
    stw r6, 0x10(r3)
    lwz r6, 0x18(r5)
    stw r0, 0x14(r3)
    lwz r0, 0x1c(r5)
    stw r6, 0x18(r3)
    stw r0, 0x1c(r3)
    b fn_80616390
}

asm void fn_805D1880(void)
{
    nofralloc
    subi r6, r4, 0x10
    cmplwi r6, 0xf
    ble lbl_fn_805D1880_000004A8
    subi r0, r4, 0x4
    cmplwi r0, 0xb
    ble lbl_fn_805D1880_00000440
    cmplwi r4, 0x3
    bgtlr
    lwz r0, 0x50(r3)
    extrwi r0, r0, 1, 24
    cmplwi r0, 0x1
    bltlr
    lwz r7, 0x4c(r3)
    srawi r0, r5, 31
    andc r9, r5, r0
    lwz r8, 0x58(r3)
    extrwi r0, r7, 4, 4
    rlwinm r6, r7, 14, 26, 29
    mulli r5, r0, 0x14
    rlwinm r3, r7, 9, 23, 26
    extsh r0, r9
    rlwinm r7, r7, 26, 29, 29
    add r3, r6, r3
    cmpwi r0, 0xff
    add r5, r7, r5
    li r0, 0xff
    add r3, r8, r3
    add r3, r5, r3
    bgt lbl_fn_805D1880_000003F8
    mr r0, r9
lbl_fn_805D1880_000003F8:
    clrlwi. r4, r4, 30
    clrlwi r0, r0, 24
    beq lbl_fn_805D1880_00000420
    cmplwi r4, 0x1
    beq lbl_fn_805D1880_00000428
    cmplwi r4, 0x2
    beq lbl_fn_805D1880_00000430
    cmplwi r4, 0x3
    beq lbl_fn_805D1880_00000438
    blr
lbl_fn_805D1880_00000420:
    stb r0, 0x0(r3)
    blr
lbl_fn_805D1880_00000428:
    stb r0, 0x1(r3)
    blr
lbl_fn_805D1880_00000430:
    stb r0, 0x2(r3)
    blr
lbl_fn_805D1880_00000438:
    stb r0, 0x3(r3)
    blr
lbl_fn_805D1880_00000440:
    clrlwi. r4, r0, 30
    srwi r0, r0, 2
    beq lbl_fn_805D1880_00000468
    cmplwi r4, 0x1
    beq lbl_fn_805D1880_00000478
    cmplwi r4, 0x2
    beq lbl_fn_805D1880_00000488
    cmplwi r4, 0x3
    beq lbl_fn_805D1880_00000498
    blr
lbl_fn_805D1880_00000468:
    slwi r0, r0, 3
    add r3, r3, r0
    sth r5, 0x24(r3)
    blr
lbl_fn_805D1880_00000478:
    slwi r0, r0, 3
    add r3, r3, r0
    sth r5, 0x26(r3)
    blr
lbl_fn_805D1880_00000488:
    slwi r0, r0, 3
    add r3, r3, r0
    sth r5, 0x28(r3)
    blr
lbl_fn_805D1880_00000498:
    slwi r0, r0, 3
    add r3, r3, r0
    sth r5, 0x2a(r3)
    blr
lbl_fn_805D1880_000004A8:
    srawi r0, r5, 31
    srwi r7, r6, 2
    andc r6, r5, r0
    li r5, 0xff
    extsh r0, r6
    cmpwi r0, 0xff
    bgt lbl_fn_805D1880_000004C8
    mr r5, r6
lbl_fn_805D1880_000004C8:
    subi r0, r4, 0x10
    clrlwi r4, r5, 24
    clrlwi. r0, r0, 30
    beq lbl_fn_805D1880_000004F4
    cmplwi r0, 0x1
    beq lbl_fn_805D1880_00000504
    cmplwi r0, 0x2
    beq lbl_fn_805D1880_00000514
    cmplwi r0, 0x3
    beq lbl_fn_805D1880_00000524
    blr
lbl_fn_805D1880_000004F4:
    slwi r0, r7, 2
    add r3, r3, r0
    stb r4, 0x3c(r3)
    blr
lbl_fn_805D1880_00000504:
    slwi r0, r7, 2
    add r3, r3, r0
    stb r4, 0x3d(r3)
    blr
lbl_fn_805D1880_00000514:
    slwi r0, r7, 2
    add r3, r3, r0
    stb r4, 0x3e(r3)
    blr
lbl_fn_805D1880_00000524:
    slwi r0, r7, 2
    add r3, r3, r0
    stb r4, 0x3f(r3)
    blr
}

asm void fn_805D1A40(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    addi r11, r1, 0x100
    stfd f31, 0x110(r1)
    psq_st f31, 0x118(r1), 0, 0
    stfd f30, 0x100(r1)
    psq_st f30, 0x108(r1), 0, 0
    bl _savegpr_22
    mr r26, r3
    mr r28, r4
    mr r27, r5
    li r30, 0x1
    li r23, 0x0
    li r3, 0x1
    bl fn_80615D20
    lwz r3, 0x4c(r26)
    extrwi. r0, r3, 1, 23
    beq lbl_fn_805D1A40_0000062C
    extrwi r0, r3, 4, 4
    lwz r7, 0x58(r26)
    mulli r0, r0, 0x14
    rlwinm r5, r3, 14, 26, 29
    rlwinm r4, r3, 9, 23, 26
    li r3, 0x0
    add r6, r5, r4
    li r4, 0x0
    add r0, r7, r0
    li r5, 0x0
    add r24, r6, r0
    lbzx r6, r6, r0
    li r7, 0x0
    li r8, 0x0
    li r9, 0x2
    bl fn_80615D50
    lbz r6, 0x1(r24)
    li r3, 0x2
    li r4, 0x0
    li r5, 0x0
    li r7, 0x0
    li r8, 0x0
    li r9, 0x2
    bl fn_80615D50
    lbz r3, 0x0(r24)
    li r30, 0x1
    cmpwi r3, 0x1
    beq lbl_fn_805D1A40_0000060C
    lbz r0, 0x1(r24)
    cmpwi r0, 0x1
    beq lbl_fn_805D1A40_0000060C
    li r30, 0x0
lbl_fn_805D1A40_0000060C:
    cmpwi r3, 0x0
    li r23, 0x0
    beq lbl_fn_805D1A40_00000624
    lbz r0, 0x1(r24)
    cmpwi r0, 0x0
    bne lbl_fn_805D1A40_0000064C
lbl_fn_805D1A40_00000624:
    li r23, 0x1
    b lbl_fn_805D1A40_0000064C
lbl_fn_805D1A40_0000062C:
    li r3, 0x4
    li r4, 0x0
    li r5, 0x0
    li r6, 0x1
    li r7, 0x0
    li r8, 0x0
    li r9, 0x2
    bl fn_80615D50
lbl_fn_805D1A40_0000064C:
    cmpwi r30, 0x0
    li r29, 0x0
    beq lbl_fn_805D1A40_00000668
    cmpwi r28, 0x0
    li r29, 0x1
    bne lbl_fn_805D1A40_00000668
    li r29, 0x0
lbl_fn_805D1A40_00000668:
    cmpwi r23, 0x0
    beq lbl_fn_805D1A40_00000738
    lwz r5, 0x4c(r26)
    li r0, -0x1
    stw r0, 0x30(r1)
    extrwi. r0, r5, 1, 24
    beq lbl_fn_805D1A40_000006CC
    extrwi r0, r5, 4, 4
    rlwinm r4, r5, 14, 26, 29
    mulli r3, r0, 0x14
    lwz r6, 0x58(r26)
    rlwinm r0, r5, 9, 23, 26
    rlwinm r5, r5, 26, 29, 29
    add r0, r4, r0
    add r3, r5, r3
    add r0, r6, r0
    add r6, r3, r0
    lbzx r5, r3, r0
    lbz r4, 0x1(r6)
    lbz r3, 0x2(r6)
    lbz r0, 0x3(r6)
    stb r5, 0x30(r1)
    stb r4, 0x31(r1)
    stb r3, 0x32(r1)
    stb r0, 0x33(r1)
lbl_fn_805D1A40_000006CC:
    lwz r0, 0x30(r1)
    mr r5, r27
    stw r0, 0x28(r1)
    addi r3, r1, 0x24
    addi r4, r1, 0x28
    bl fn_805CDD90
    lbz r7, 0x24(r1)
    addi r4, r1, 0x20
    lbz r6, 0x25(r1)
    li r3, 0x4
    lbz r5, 0x26(r1)
    lbz r0, 0x27(r1)
    stb r7, 0x30(r1)
    stb r6, 0x31(r1)
    stb r5, 0x32(r1)
    stb r0, 0x33(r1)
    lwz r0, 0x30(r1)
    stw r0, 0x20(r1)
    bl fn_80615C40
    cmpwi r29, 0x0
    li r29, 0x0
    bne lbl_fn_805D1A40_00000734
    lwz r3, 0x30(r1)
    addis r0, r3, 0x1
    cmplwi r0, 0xffff
    beq lbl_fn_805D1A40_00000738
lbl_fn_805D1A40_00000734:
    li r29, 0x1
lbl_fn_805D1A40_00000738:
    li r31, 0x0
    stb r31, 0x5c(r1)
    stb r31, 0x5d(r1)
    stb r31, 0x5e(r1)
    stb r31, 0x5f(r1)
    stb r31, 0x60(r1)
    stb r31, 0x61(r1)
    stb r31, 0x62(r1)
    stb r31, 0x63(r1)
    stb r31, 0x64(r1)
    stb r31, 0x65(r1)
    lwz r0, 0x50(r26)
    extrwi r3, r0, 4, 8
    bl fn_80613BB0
    lwz r0, 0x50(r26)
    extrwi. r0, r0, 4, 8
    beq lbl_fn_805D1A40_0000080C
    lwz r4, 0x4c(r26)
    lis r3, 0xaaab
    lwz r5, 0x58(r26)
    addi r27, r1, 0x5c
    extrwi r0, r4, 4, 4
    rlwinm r4, r4, 9, 23, 26
    mulli r0, r0, 0x14
    subi r25, r3, 0x5555
    li r28, 0x0
    li r24, 0x1
    add r0, r5, r0
    add r23, r4, r0
    b lbl_fn_805D1A40_000007FC
lbl_fn_805D1A40_000007B0:
    lbz r0, 0x0(r23)
    lbz r6, 0x2(r23)
    cmpwi r0, 0x1
    bne lbl_fn_805D1A40_000007DC
    cmplwi r6, 0x3c
    beq lbl_fn_805D1A40_000007DC
    subi r0, r6, 0x1e
    li r31, 0x1
    mulhwu r0, r25, r0
    srwi r0, r0, 1
    stbx r24, r27, r0
lbl_fn_805D1A40_000007DC:
    lbz r4, 0x0(r23)
    mr r3, r28
    lbz r5, 0x1(r23)
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    addi r23, r23, 0x4
    addi r28, r28, 0x1
lbl_fn_805D1A40_000007FC:
    lwz r0, 0x50(r26)
    extrwi r0, r0, 4, 8
    cmplw r28, r0
    blt lbl_fn_805D1A40_000007B0
lbl_fn_805D1A40_0000080C:
    cmpwi r31, 0x0
    beq lbl_fn_805D1A40_00000884
    lwz r0, 0x4c(r26)
    addi r27, r1, 0x5c
    lwz r3, 0x58(r26)
    li r28, 0x0
    rlwinm r0, r0, 9, 23, 26
    add r24, r3, r0
    b lbl_fn_805D1A40_00000870
lbl_fn_805D1A40_00000830:
    clrlwi r3, r28, 24
    lbzx r0, r27, r3
    cmpwi r0, 0x0
    beq lbl_fn_805D1A40_0000086C
    mulli r0, r3, 0x14
    addi r3, r1, 0xa0
    add r4, r24, r0
    bl fn_805CF8E0
    clrlwi r3, r28, 24
    clrlslwi r0, r28, 24, 2
    subf r4, r3, r0
    li r5, 0x1
    addi r3, r1, 0xa0
    addi r4, r4, 0x1e
    bl fn_80618420
lbl_fn_805D1A40_0000086C:
    addi r28, r28, 0x1
lbl_fn_805D1A40_00000870:
    lwz r0, 0x50(r26)
    clrlwi r3, r28, 24
    extrwi r0, r0, 4, 4
    cmplw r3, r0
    blt lbl_fn_805D1A40_00000830
lbl_fn_805D1A40_00000884:
    lwz r0, 0x50(r26)
    srwi. r0, r0, 28
    beq lbl_fn_805D1A40_0000095C
    lwz r31, 0x58(r26)
    li r28, 0x0
    li r27, 0x0
    b lbl_fn_805D1A40_0000094C
lbl_fn_805D1A40_000008A0:
    lwz r4, 0x0(r31)
    addi r3, r1, 0x80
    lwz r0, 0x4(r31)
    stw r0, 0x84(r1)
    stw r4, 0x80(r1)
    lwz r4, 0x8(r31)
    lwz r0, 0xc(r31)
    stw r0, 0x8c(r1)
    stw r4, 0x88(r1)
    lwz r4, 0x10(r31)
    lwz r0, 0x14(r31)
    stw r0, 0x94(r1)
    stw r4, 0x90(r1)
    lwz r4, 0x18(r31)
    lwz r0, 0x1c(r31)
    stw r0, 0x9c(r1)
    stw r4, 0x98(r1)
    bl fn_80616400
    subi r0, r3, 0x8
    cmplwi r0, 0x1
    bgt lbl_fn_805D1A40_00000938
    addi r3, r1, 0x80
    bl fn_806163A0
    cmpwi r3, 0x0
    mr r6, r3
    beq lbl_fn_805D1A40_00000938
    lwz r4, 0x8(r6)
    addi r3, r1, 0x50
    lwz r5, 0x4(r6)
    lhz r6, 0x0(r6)
    bl fn_80616610
    mr r4, r28
    addi r3, r1, 0x50
    bl fn_80616640
    mr r4, r28
    addi r3, r1, 0x80
    bl fn_80616380
    addi r28, r28, 0x1
lbl_fn_805D1A40_00000938:
    mr r4, r27
    addi r3, r1, 0x80
    bl fn_806165B0
    addi r31, r31, 0x20
    addi r27, r27, 0x1
lbl_fn_805D1A40_0000094C:
    lwz r0, 0x50(r26)
    srwi r0, r0, 28
    cmplw r27, r0
    blt lbl_fn_805D1A40_000008A0
lbl_fn_805D1A40_0000095C:
    lwz r5, 0x24(r26)
    addi r4, r1, 0x48
    lwz r0, 0x28(r26)
    li r3, 0x1
    stw r0, 0x4c(r1)
    stw r5, 0x48(r1)
    bl fn_80617580
    lwz r5, 0x2c(r26)
    addi r4, r1, 0x40
    lwz r0, 0x30(r26)
    li r3, 0x2
    stw r0, 0x44(r1)
    stw r5, 0x40(r1)
    bl fn_80617580
    lwz r5, 0x34(r26)
    addi r4, r1, 0x38
    lwz r0, 0x38(r26)
    li r3, 0x3
    stw r0, 0x3c(r1)
    stw r5, 0x38(r1)
    bl fn_80617580
    lwz r0, 0x3c(r26)
    addi r4, r1, 0x1c
    stw r0, 0x1c(r1)
    li r3, 0x0
    bl fn_806175F0
    lwz r0, 0x40(r26)
    addi r4, r1, 0x18
    stw r0, 0x18(r1)
    li r3, 0x1
    bl fn_806175F0
    lwz r0, 0x44(r26)
    addi r4, r1, 0x14
    stw r0, 0x14(r1)
    li r3, 0x2
    bl fn_806175F0
    lwz r0, 0x48(r26)
    addi r4, r1, 0x10
    stw r0, 0x10(r1)
    li r3, 0x3
    bl fn_806175F0
    lwz r8, 0x4c(r26)
    extrwi. r0, r8, 1, 17
    beq lbl_fn_805D1A40_00000A70
    extrwi r0, r8, 4, 4
    rlwinm r6, r8, 27, 29, 29
    mulli r4, r0, 0x14
    rlwinm r5, r8, 26, 29, 29
    rlwinm r3, r8, 14, 26, 29
    lwz r7, 0x58(r26)
    rlwinm r0, r8, 9, 23, 26
    add r3, r3, r0
    add r0, r6, r5
    li r23, 0x0
    add r3, r4, r3
    add r0, r7, r0
    add r27, r3, r0
lbl_fn_805D1A40_00000A40:
    lbz r0, 0x0(r27)
    mr r3, r23
    clrlwi r4, r0, 30
    extrwi r5, r0, 2, 28
    extrwi r6, r0, 2, 26
    extrwi r7, r0, 2, 24
    bl fn_80617730
    addi r23, r23, 0x1
    addi r27, r27, 0x1
    cmpwi r23, 0x4
    blt lbl_fn_805D1A40_00000A40
    b lbl_fn_805D1A40_00000AD0
lbl_fn_805D1A40_00000A70:
    li r3, 0x0
    li r4, 0x0
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl fn_80617730
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x3
    bl fn_80617730
    li r3, 0x2
    li r4, 0x1
    li r5, 0x1
    li r6, 0x1
    li r7, 0x3
    bl fn_80617730
    li r3, 0x3
    li r4, 0x2
    li r5, 0x2
    li r6, 0x2
    li r7, 0x3
    bl fn_80617730
lbl_fn_805D1A40_00000AD0:
    lwz r0, 0x50(r26)
    li r27, 0x0
    stb r27, 0x2c(r1)
    extrwi. r3, r0, 5, 18
    stb r27, 0x2d(r1)
    stb r27, 0x2e(r1)
    beq lbl_fn_805D1A40_00000CB4
    bl fn_806179E0
    lwz r9, 0x4c(r26)
    addi r29, r1, 0x2c
    lwz r10, 0x58(r26)
    li r28, 0x0
    extrwi r3, r9, 2, 12
    extrwi r0, r9, 4, 4
    add r0, r3, r0
    rlwinm r5, r9, 26, 29, 29
    mulli r8, r0, 0x14
    rlwinm r3, r9, 27, 29, 29
    rlwinm r0, r9, 20, 29, 29
    rlwinm r7, r9, 9, 23, 26
    rlwinm r6, r9, 14, 26, 29
    add r0, r3, r0
    rlwinm r4, r9, 28, 29, 29
    add r5, r8, r5
    add r0, r4, r0
    rlwinm r3, r9, 29, 29, 29
    add r6, r7, r6
    rlwinm r4, r9, 19, 27, 29
    add r3, r3, r0
    li r31, 0x1
    add r0, r6, r5
    add r3, r4, r3
    add r0, r10, r0
    add r25, r3, r0
    b lbl_fn_805D1A40_00000C9C
lbl_fn_805D1A40_00000B5C:
    lbz r0, 0x3(r25)
    mr r3, r28
    lbz r5, 0x2(r25)
    lbz r4, 0x0(r25)
    rlwimi r5, r0, 8, 23, 23
    lbz r6, 0x1(r25)
    bl fn_80617880
    lbz r0, 0x3(r25)
    mr r3, r28
    extrwi r4, r0, 2, 29
    extrwi r5, r0, 2, 27
    bl fn_806176F0
    lbz r0, 0x5(r25)
    mr r3, r28
    lbz r5, 0x4(r25)
    clrlwi r6, r0, 28
    extrwi r7, r0, 4, 24
    clrlwi r4, r5, 28
    extrwi r5, r5, 4, 24
    bl fn_806173E0
    lbz r6, 0x6(r25)
    mr r3, r28
    lbz r0, 0x7(r25)
    clrlwi r4, r6, 28
    extrwi r5, r6, 2, 26
    extrwi r6, r6, 2, 24
    clrlwi r7, r0, 31
    extrwi r8, r0, 2, 29
    bl fn_80617460
    lbz r0, 0x7(r25)
    mr r3, r28
    extrwi r4, r0, 5, 24
    bl fn_80617650
    lbz r0, 0x9(r25)
    mr r3, r28
    lbz r5, 0x8(r25)
    clrlwi r6, r0, 28
    extrwi r7, r0, 4, 24
    clrlwi r4, r5, 28
    extrwi r5, r5, 4, 24
    bl fn_80617420
    lbz r6, 0xa(r25)
    mr r3, r28
    lbz r0, 0xb(r25)
    clrlwi r4, r6, 28
    extrwi r5, r6, 2, 26
    extrwi r6, r6, 2, 24
    clrlwi r7, r0, 31
    extrwi r8, r0, 2, 29
    bl fn_806174C0
    lbz r0, 0xb(r25)
    mr r3, r28
    extrwi r4, r0, 5, 24
    bl fn_806176A0
    lbz r10, 0xf(r25)
    mr r3, r28
    lbz r6, 0xd(r25)
    lbz r9, 0xe(r25)
    extrwi r4, r10, 1, 28
    extrwi r24, r6, 4, 25
    extrwi r0, r10, 2, 26
    stw r4, 0x8(r1)
    clrlwi r5, r10, 30
    clrlwi r8, r9, 29
    mr r7, r24
    stw r0, 0xc(r1)
    clrlwi r6, r6, 29
    extrwi r9, r9, 3, 26
    extrwi r10, r10, 1, 29
    lbz r4, 0xc(r25)
    bl fn_80616E80
    cmpwi r24, 0x1
    blt lbl_fn_805D1A40_00000C94
    cmpwi r24, 0x3
    bgt lbl_fn_805D1A40_00000C94
    add r3, r29, r24
    li r27, 0x1
    stb r31, -0x1(r3)
lbl_fn_805D1A40_00000C94:
    addi r25, r25, 0x10
    addi r28, r28, 0x1
lbl_fn_805D1A40_00000C9C:
    lwz r0, 0x50(r26)
    extrwi r0, r0, 5, 18
    cmplw r28, r0
    blt lbl_fn_805D1A40_00000B5C
    li r29, 0x1
    b lbl_fn_805D1A40_00001080
lbl_fn_805D1A40_00000CB4:
    srwi. r0, r0, 28
    li r28, 0x0
    bne lbl_fn_805D1A40_00000D10
    li r3, 0x0
    li r4, 0xff
    li r5, 0xff
    li r6, 0x4
    bl fn_80617880
    li r3, 0x0
    li r4, 0xf
    li r5, 0x4
    li r6, 0xa
    li r7, 0xf
    bl fn_806173E0
    li r3, 0x0
    li r4, 0x7
    li r5, 0x2
    li r6, 0x5
    li r7, 0x7
    bl fn_80617420
    li r29, 0x1
    li r28, 0x1
    b lbl_fn_805D1A40_00001008
lbl_fn_805D1A40_00000D10:
    cmplwi r0, 0x1
    bne lbl_fn_805D1A40_00000D64
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0xff
    bl fn_80617880
    li r3, 0x0
    li r4, 0x2
    li r5, 0x4
    li r6, 0x8
    li r7, 0xf
    bl fn_806173E0
    li r3, 0x0
    li r4, 0x1
    li r5, 0x2
    li r6, 0x4
    li r7, 0x7
    bl fn_80617420
    li r28, 0x1
    b lbl_fn_805D1A40_00000FB4
lbl_fn_805D1A40_00000D64:
    cmplwi r0, 0x2
    bne lbl_fn_805D1A40_00000E1C
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0xff
    bl fn_80617880
    li r3, 0x0
    li r4, 0xf
    li r5, 0xf
    li r6, 0xf
    li r7, 0x8
    bl fn_806173E0
    li r3, 0x0
    li r4, 0x7
    li r5, 0x7
    li r6, 0x7
    li r7, 0x4
    bl fn_80617420
    li r3, 0x1
    li r4, 0x1
    li r5, 0x1
    li r6, 0xff
    bl fn_80617880
    li r3, 0x1
    li r4, 0x8
    li r5, 0x0
    li r6, 0xe
    li r7, 0xf
    bl fn_806173E0
    li r3, 0x1
    li r4, 0x4
    li r5, 0x0
    li r6, 0x6
    li r7, 0x7
    bl fn_80617420
    lis r4, lbl_80799080@ha
    li r3, 0x1
    lwz r4, lbl_80799080@l(r4)
    bl fn_80617650
    lis r4, lbl_807990A0@ha
    li r3, 0x1
    lwz r4, lbl_807990A0@l(r4)
    bl fn_806176A0
    li r28, 0x2
    b lbl_fn_805D1A40_00000ED0
lbl_fn_805D1A40_00000E1C:
    lis r24, lbl_80799080@ha
    lis r25, lbl_807990A0@ha
    addi r24, r24, lbl_80799080@l
    li r23, 0x0
    addi r25, r25, lbl_807990A0@l
    b lbl_fn_805D1A40_00000EC0
lbl_fn_805D1A40_00000E34:
    clrlwi r22, r28, 24
    mr r4, r23
    mr r3, r22
    mr r5, r23
    li r6, 0xff
    bl fn_80617880
    cmpwi r23, 0x0
    li r7, 0x0
    bne lbl_fn_805D1A40_00000E5C
    li r7, 0xf
lbl_fn_805D1A40_00000E5C:
    cmpwi r23, 0x0
    li r31, 0x0
    bne lbl_fn_805D1A40_00000E6C
    li r31, 0x7
lbl_fn_805D1A40_00000E6C:
    mr r3, r22
    li r4, 0xf
    li r5, 0x8
    li r6, 0xe
    bl fn_806173E0
    mr r3, r22
    mr r7, r31
    li r4, 0x7
    li r5, 0x4
    li r6, 0x6
    bl fn_80617420
    lwz r4, 0x0(r24)
    mr r3, r22
    bl fn_80617650
    lwz r4, 0x0(r25)
    mr r3, r22
    bl fn_806176A0
    addi r28, r28, 0x1
    addi r24, r24, 0x4
    addi r25, r25, 0x4
    addi r23, r23, 0x1
lbl_fn_805D1A40_00000EC0:
    lwz r0, 0x50(r26)
    srwi r0, r0, 28
    cmplw r23, r0
    blt lbl_fn_805D1A40_00000E34
lbl_fn_805D1A40_00000ED0:
    lis r3, lbl_80764558@ha
    lha r4, 0x24(r26)
    lha r0, lbl_80764558@l(r3)
    li r5, 0x0
    cmpw r4, r0
    bne lbl_fn_805D1A40_00000F20
    addi r4, r3, lbl_80764558@l
    lha r3, 0x26(r26)
    lha r0, 0x2(r4)
    cmpw r3, r0
    bne lbl_fn_805D1A40_00000F20
    lha r3, 0x28(r26)
    lha r0, 0x4(r4)
    cmpw r3, r0
    bne lbl_fn_805D1A40_00000F20
    lha r3, 0x2a(r26)
    lha r0, 0x6(r4)
    cmpw r3, r0
    bne lbl_fn_805D1A40_00000F20
    li r5, 0x1
lbl_fn_805D1A40_00000F20:
    cmpwi r5, 0x0
    beq lbl_fn_805D1A40_00000F68
    lha r0, 0x2c(r26)
    li r3, 0x0
    cmpwi r0, 0xff
    bne lbl_fn_805D1A40_00000F60
    lha r0, 0x2e(r26)
    cmpwi r0, 0xff
    bne lbl_fn_805D1A40_00000F60
    lha r0, 0x30(r26)
    cmpwi r0, 0xff
    bne lbl_fn_805D1A40_00000F60
    lha r0, 0x32(r26)
    cmpwi r0, 0xff
    bne lbl_fn_805D1A40_00000F60
    li r3, 0x1
lbl_fn_805D1A40_00000F60:
    cmpwi r3, 0x0
    bne lbl_fn_805D1A40_00000FB4
lbl_fn_805D1A40_00000F68:
    clrlwi r22, r28, 24
    li r4, 0xff
    mr r3, r22
    li r5, 0xff
    li r6, 0xff
    bl fn_80617880
    mr r3, r22
    li r4, 0x2
    li r5, 0x4
    li r6, 0x0
    li r7, 0xf
    bl fn_806173E0
    mr r3, r22
    li r4, 0x1
    li r5, 0x2
    li r6, 0x0
    li r7, 0x7
    bl fn_80617420
    addi r28, r28, 0x1
lbl_fn_805D1A40_00000FB4:
    cmpwi r29, 0x0
    beq lbl_fn_805D1A40_00001008
    clrlwi r22, r28, 24
    li r4, 0xff
    mr r3, r22
    li r5, 0xff
    li r6, 0x4
    bl fn_80617880
    mr r3, r22
    li r4, 0xf
    li r5, 0x0
    li r6, 0xa
    li r7, 0xf
    bl fn_806173E0
    mr r3, r22
    li r4, 0x7
    li r5, 0x0
    li r6, 0x5
    li r7, 0x7
    bl fn_80617420
    addi r28, r28, 0x1
lbl_fn_805D1A40_00001008:
    clrlwi r22, r28, 24
    li r23, 0x0
    b lbl_fn_805D1A40_0000106C
lbl_fn_805D1A40_00001014:
    clrlwi r24, r23, 24
    li r4, 0x0
    mr r3, r24
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_80617460
    mr r3, r24
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_806174C0
    mr r3, r24
    bl fn_80617220
    mr r3, r24
    li r4, 0x0
    li r5, 0x0
    bl fn_806176F0
    addi r23, r23, 0x1
lbl_fn_805D1A40_0000106C:
    clrlwi r0, r23, 24
    cmplw r0, r22
    blt lbl_fn_805D1A40_00001014
    mr r3, r22
    bl fn_806179E0
lbl_fn_805D1A40_00001080:
    cmpwi r27, 0x0
    beq lbl_fn_805D1A40_00001184
    lwz r9, 0x4c(r26)
    lis r3, lbl_8076456C@ha
    lfs f30, lbl_8076456C@l(r3)
    addi r31, r1, 0x2c
    extrwi r0, r9, 4, 4
    rlwinm r8, r9, 28, 29, 29
    mulli r5, r0, 0x14
    rlwinm r4, r9, 26, 29, 29
    rlwinm r7, r9, 20, 29, 29
    lwz r11, 0x58(r26)
    rlwinm r6, r9, 27, 29, 29
    rlwinm r3, r9, 14, 26, 29
    rlwinm r0, r9, 9, 23, 26
    rlwinm r10, r9, 19, 27, 29
    add r3, r3, r0
    rlwinm r9, r9, 29, 29, 29
    add r0, r10, r9
    add r6, r7, r6
    add r4, r8, r4
    add r3, r5, r3
    add r4, r6, r4
    add r0, r11, r0
    add r3, r4, r3
    li r27, 0x0
    add r24, r3, r0
    b lbl_fn_805D1A40_00001174
lbl_fn_805D1A40_000010F0:
    lbz r0, 0x0(r31)
    cmpwi r0, 0x0
    beq lbl_fn_805D1A40_00001168
    lfs f0, 0x8(r24)
    fmuls f1, f30, f0
    bl fn_805D7D60
    lfs f0, 0x8(r24)
    fmr f31, f1
    fmuls f1, f30, f0
    bl fn_805D7CE0
    lfs f0, 0xc(r24)
    fneg f2, f1
    addi r3, r27, 0x1
    addi r4, r1, 0x68
    fmuls f0, f31, f0
    stfs f0, 0x68(r1)
    lfs f0, 0x10(r24)
    fmuls f0, f2, f0
    stfs f0, 0x6c(r1)
    lfs f0, 0x0(r24)
    stfs f0, 0x70(r1)
    lfs f0, 0xc(r24)
    fmuls f0, f1, f0
    stfs f0, 0x74(r1)
    lfs f0, 0x10(r24)
    fmuls f0, f31, f0
    stfs f0, 0x78(r1)
    lfs f0, 0x4(r24)
    stfs f0, 0x7c(r1)
    bl fn_805CFA00
lbl_fn_805D1A40_00001168:
    addi r31, r31, 0x1
    addi r24, r24, 0x14
    addi r27, r27, 0x1
lbl_fn_805D1A40_00001174:
    lwz r0, 0x50(r26)
    extrwi r0, r0, 2, 12
    cmplw r27, r0
    blt lbl_fn_805D1A40_000010F0
lbl_fn_805D1A40_00001184:
    lwz r0, 0x50(r26)
    extrwi r3, r0, 3, 14
    bl fn_80617200
    lwz r0, 0x50(r26)
    extrwi. r0, r0, 3, 14
    beq lbl_fn_805D1A40_00001228
    lwz r9, 0x4c(r26)
    li r27, 0x0
    lwz r10, 0x58(r26)
    extrwi r0, r9, 4, 4
    rlwinm r8, r9, 28, 29, 29
    mulli r4, r0, 0x14
    rlwinm r6, r9, 26, 29, 29
    rlwinm r7, r9, 20, 29, 29
    rlwinm r5, r9, 27, 29, 29
    rlwinm r3, r9, 14, 26, 29
    rlwinm r0, r9, 9, 23, 26
    add r0, r3, r0
    add r5, r7, r5
    add r3, r8, r6
    rlwinm r6, r9, 29, 29, 29
    add r3, r5, r3
    add r0, r4, r0
    add r3, r6, r3
    add r0, r10, r0
    add r24, r3, r0
    b lbl_fn_805D1A40_00001218
lbl_fn_805D1A40_000011F0:
    lbz r4, 0x0(r24)
    mr r3, r27
    lbz r5, 0x1(r24)
    bl fn_80617130
    lbz r4, 0x2(r24)
    mr r3, r27
    lbz r5, 0x3(r24)
    bl fn_80617030
    addi r24, r24, 0x4
    addi r27, r27, 0x1
lbl_fn_805D1A40_00001218:
    lwz r0, 0x50(r26)
    extrwi r0, r0, 3, 14
    cmplw r27, r0
    blt lbl_fn_805D1A40_000011F0
lbl_fn_805D1A40_00001228:
    lwz r7, 0x4c(r26)
    extrwi. r0, r7, 1, 25
    beq lbl_fn_805D1A40_0000128C
    rlwinm r5, r7, 20, 29, 29
    rlwinm r0, r7, 27, 29, 29
    add r0, r5, r0
    rlwinm r4, r7, 26, 29, 29
    extrwi r3, r7, 4, 4
    rlwinm r6, r7, 14, 26, 29
    add r0, r4, r0
    rlwinm r5, r7, 9, 23, 26
    mulli r4, r3, 0x14
    lwz r7, 0x58(r26)
    add r3, r6, r5
    add r0, r7, r0
    add r3, r4, r3
    add r6, r3, r0
    lbzx r0, r3, r0
    lbz r4, 0x2(r6)
    lbz r5, 0x1(r6)
    clrlwi r3, r0, 28
    lbz r7, 0x3(r6)
    extrwi r6, r0, 4, 24
    bl fn_806177B0
    b lbl_fn_805D1A40_000012A4
lbl_fn_805D1A40_0000128C:
    li r3, 0x7
    li r4, 0x0
    li r5, 0x0
    li r6, 0x7
    li r7, 0x0
    bl fn_806177B0
lbl_fn_805D1A40_000012A4:
    lwz r3, 0x4c(r26)
    extrwi. r0, r3, 1, 26
    beq lbl_fn_805D1A40_00001308
    extrwi r4, r3, 4, 4
    rlwinm r8, r3, 28, 29, 29
    rlwinm r0, r3, 26, 29, 29
    rlwinm r7, r3, 20, 29, 29
    rlwinm r6, r3, 27, 29, 29
    rlwinm r5, r3, 14, 26, 29
    rlwinm r3, r3, 9, 23, 26
    add r0, r8, r0
    add r6, r7, r6
    lwz r7, 0x58(r26)
    add r0, r6, r0
    add r3, r5, r3
    mulli r4, r4, 0x14
    add r0, r7, r0
    add r3, r4, r3
    add r6, r3, r0
    lbzx r3, r3, r0
    lbz r4, 0x1(r6)
    lbz r5, 0x2(r6)
    lbz r6, 0x3(r6)
    bl fn_80617D50
    b lbl_fn_805D1A40_0000131C
lbl_fn_805D1A40_00001308:
    li r3, 0x1
    li r4, 0x4
    li r5, 0x5
    li r6, 0xf
    bl fn_80617D50
lbl_fn_805D1A40_0000131C:
    cmpwi r29, 0x0
    li r3, 0x0
    beq lbl_fn_805D1A40_00001334
    cmpwi r30, 0x0
    beq lbl_fn_805D1A40_00001334
    li r3, 0x1
lbl_fn_805D1A40_00001334:
    addi r11, r1, 0x100
    psq_l f31, 0x118(r1), 0, 0
    lfd f31, 0x110(r1)
    psq_l f30, 0x108(r1), 0, 0
    lfd f30, 0x100(r1)
    bl _restgpr_22
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_805D2860(void)
{
    nofralloc
    lwz r12, 0x0(r4)
    mr r0, r3
    mr r3, r4
    lwz r12, 0x14(r12)
    mr r4, r0
    mtctr r12
    bctr
}

asm void fn_805D2880(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    lwz r31, 0x1c(r3)
    mr r26, r3
    mr r27, r4
    addi r30, r3, 0x1c
    li r29, 0x0
    b lbl_fn_805D2880_000013E0
lbl_fn_805D2880_000013AC:
    cmpwi r27, 0x0
    mr r28, r31
    lwz r31, 0x0(r31)
    beq lbl_fn_805D2880_000013C8
    lwz r0, 0x8(r28)
    cmplw r0, r27
    bne lbl_fn_805D2880_000013E0
lbl_fn_805D2880_000013C8:
    stw r28, 0x8(r1)
    addi r3, r26, 0x18
    addi r4, r1, 0x8
    bl fn_805D9C70
    stw r29, 0x8(r28)
    sth r29, 0xc(r28)
lbl_fn_805D2880_000013E0:
    cmplw r31, r30
    bne lbl_fn_805D2880_000013AC
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_805D2900(void)
{
    nofralloc
    lwz r12, 0x0(r3)
    li r4, 0x0
    lwz r12, 0x14(r12)
    mtctr r12
    bctr
}

asm void fn_805D2920(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    addi r30, r3, 0x1c
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r31, 0x1c(r3)
    b lbl_fn_805D2920_00001474
lbl_fn_805D2920_00001448:
    lbz r0, 0xe(r31)
    cmpwi r0, 0x0
    bne lbl_fn_805D2920_00001470
    lwz r3, 0x8(r31)
    mr r5, r29
    lhz r4, 0xc(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_805D2920_00001470:
    lwz r31, 0x0(r31)
lbl_fn_805D2920_00001474:
    cmplw r31, r30
    bne lbl_fn_805D2920_00001448
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805D29A0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    mr r5, r4
    stw r0, 0x14(r1)
    addi r0, r3, 0x1c
    addi r3, r3, 0x18
    addi r4, r1, 0x8
    stw r0, 0x8(r1)
    bl fn_805D9CC0
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805D29E0(void)
{
    nofralloc
    addi r3, r3, 0x18
    b fn_805CD450
}

asm void fn_805D29F0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    lwz r12, 0x0(r3)
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_805D29F0_00001528
    cntlzw r0, r31
    srwi r0, r0, 5
    stb r0, 0xe(r3)
lbl_fn_805D29F0_00001528:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805D2A40(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stfd f31, 0x50(r1)
    psq_st f31, 0x58(r1), 0, 0
    stw r31, 0x4c(r1)
    mr r31, r3
    stw r30, 0x48(r1)
    stw r29, 0x44(r1)
    lwz r0, 0x50(r4)
    srwi r0, r0, 28
    cmplw r5, r0
    blt lbl_fn_805D2A40_00001588
    lis r4, lbl_80764570@ha
    lfs f0, lbl_80764570@l(r4)
    stfs f0, 0x0(r3)
    stfs f0, 0x4(r3)
    b lbl_fn_805D2A40_0000162C
lbl_fn_805D2A40_00001588:
    clrlslwi r0, r5, 24, 5
    lwz r6, 0x58(r4)
    lwzux r5, r6, r0
    addi r3, r1, 0x8
    li r4, 0x0
    lwz r0, 0x4(r6)
    stw r0, 0xc(r1)
    stw r5, 0x8(r1)
    lwz r5, 0x8(r6)
    lwz r0, 0xc(r6)
    stw r0, 0x14(r1)
    stw r5, 0x10(r1)
    lwz r5, 0x10(r6)
    lwz r0, 0x14(r6)
    stw r0, 0x1c(r1)
    stw r5, 0x18(r1)
    lwz r5, 0x18(r6)
    lwz r0, 0x1c(r6)
    stw r0, 0x24(r1)
    stw r5, 0x20(r1)
    bl fn_80616390
    addi r3, r1, 0x8
    bl fn_806163E0
    clrlwi r0, r3, 16
    lis r30, 0x4330
    lis r29, lbl_80764580@ha
    stw r0, 0x2c(r1)
    lfd f1, lbl_80764580@l(r29)
    addi r3, r1, 0x8
    stw r30, 0x28(r1)
    lfd f0, 0x28(r1)
    fsubs f31, f0, f1
    bl fn_806163C0
    clrlwi r0, r3, 16
    stw r0, 0x34(r1)
    lfd f1, lbl_80764580@l(r29)
    stw r30, 0x30(r1)
    lfd f0, 0x30(r1)
    stfs f31, 0x4(r31)
    fsubs f0, f0, f1
    stfs f0, 0x0(r31)
lbl_fn_805D2A40_0000162C:
    lwz r0, 0x64(r1)
    psq_l f31, 0x58(r1), 0, 0
    lfd f31, 0x50(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_805D2B50(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_80764588@ha
    lis r6, lbl_80799108@ha
    stw r0, 0x14(r1)
    li r0, 0x0
    lfs f0, lbl_80764588@l(r5)
    addi r7, r3, 0x14
    stw r31, 0xc(r1)
    addi r8, r3, 0x20
    addi r6, r6, lbl_80799108@l
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    li r5, 0x10
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stw r6, 0x0(r3)
    stw r0, 0x10(r3)
    stw r7, 0x14(r3)
    stw r7, 0x18(r3)
    stw r0, 0x1c(r3)
    stw r8, 0x20(r3)
    stw r8, 0x24(r3)
    stfs f0, 0x4c(r3)
    stfs f0, 0x50(r3)
    stw r0, 0xc(r3)
    stw r0, 0x28(r3)
    stb r0, 0xd0(r3)
    lbz r0, 0x9(r4)
    addi r4, r4, 0xc
    stb r0, 0xcc(r3)
    addi r3, r3, 0xb4
    bl fn_8068236C
    addi r3, r30, 0xc4
    addi r4, r31, 0x1c
    li r5, 0x8
    bl fn_8068236C
    lfs f0, 0x24(r31)
    mr r3, r30
    stfs f0, 0x2c(r30)
    lfs f0, 0x28(r31)
    stfs f0, 0x30(r30)
    lfs f0, 0x2c(r31)
    stfs f0, 0x34(r30)
    lfs f0, 0x30(r31)
    stfs f0, 0x38(r30)
    lfs f0, 0x34(r31)
    stfs f0, 0x3c(r30)
    lfs f0, 0x38(r31)
    stfs f0, 0x40(r30)
    lfs f0, 0x3c(r31)
    stfs f0, 0x44(r30)
    lfs f0, 0x40(r31)
    stfs f0, 0x48(r30)
    lfs f0, 0x44(r31)
    stfs f0, 0x4c(r30)
    lfs f0, 0x48(r31)
    stfs f0, 0x50(r30)
    lbz r0, 0xa(r31)
    stb r0, 0xcd(r30)
    stb r0, 0xce(r30)
    lbz r0, 0x8(r31)
    stb r0, 0xcf(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805D2C70(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    cmpwi r3, 0x0
    mr r26, r3
    mr r27, r4
    beq lbl_fn_805D2C70_00001888
    lis r4, lbl_80799108@ha
    lwz r31, 0x14(r3)
    addi r4, r4, lbl_80799108@l
    stw r4, 0x0(r3)
    addi r30, r3, 0x14
    lis r29, lbl_807CA1F8@ha
    b lbl_fn_805D2C70_000017FC
lbl_fn_805D2C70_000017B0:
    mr r28, r31
    lwz r31, 0x0(r31)
    addi r3, r26, 0x10
    addi r4, r1, 0x8
    stw r28, 0x8(r1)
    bl fn_805D9C70
    subi r28, r28, 0x4
    lbz r0, 0xd0(r28)
    cmpwi r0, 0x0
    bne lbl_fn_805D2C70_000017FC
    lwz r12, 0x0(r28)
    mr r3, r28
    li r4, -0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lwz r3, lbl_807CA1F8@l(r29)
    mr r4, r28
    bl fn_8061A100
lbl_fn_805D2C70_000017FC:
    cmplw r31, r30
    bne lbl_fn_805D2C70_000017B0
    lwz r12, 0x0(r26)
    mr r3, r26
    li r4, 0x0
    lwz r12, 0x50(r12)
    mtctr r12
    bctrl
    lwz r3, 0x28(r26)
    cmpwi r3, 0x0
    beq lbl_fn_805D2C70_00001858
    lbz r0, 0x54(r3)
    cmpwi r0, 0x0
    bne lbl_fn_805D2C70_00001858
    lwz r12, 0x0(r3)
    li r4, -0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r3, lbl_807CA1F8@ha
    lwz r4, 0x28(r26)
    lwz r3, lbl_807CA1F8@l(r3)
    bl fn_8061A100
lbl_fn_805D2C70_00001858:
    addic. r3, r26, 0x1c
    beq lbl_fn_805D2C70_00001868
    li r4, 0x0
    bl fn_805D9BE0
lbl_fn_805D2C70_00001868:
    addic. r3, r26, 0x10
    beq lbl_fn_805D2C70_00001878
    li r4, 0x0
    bl fn_805D9BE0
lbl_fn_805D2C70_00001878:
    cmpwi r27, 0x0
    ble lbl_fn_805D2C70_00001888
    mr r3, r26
    bl dtor_80084684
lbl_fn_805D2C70_00001888:
    addi r11, r1, 0x30
    mr r3, r26
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_805D2DB0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r0, r3, 0x14
    stw r31, 0x1c(r1)
    mr r31, r4
    addi r4, r1, 0x8
    stw r30, 0x18(r1)
    mr r30, r3
    addi r3, r3, 0x10
    addi r5, r31, 0x4
    stw r0, 0x8(r1)
    bl fn_805D9CC0
    stw r30, 0xc(r31)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805D2E00(void)
{
    nofralloc
    lis r6, 0x5555
    lbz r8, 0xcc(r4)
    addi r0, r6, 0x5556
    lis r7, lbl_80764588@ha
    mulhw r6, r0, r8
    stwu r1, -0x20(r1)
    lfs f0, lbl_80764588@l(r7)
    stfs f0, 0x0(r3)
    stfs f0, 0x4(r3)
    srwi r0, r6, 31
    add r0, r6, r0
    stfs f0, 0x8(r3)
    mulli r0, r0, 0x3
    stfs f0, 0xc(r3)
    subf r0, r0, r8
    stfs f0, 0x8(r1)
    cmpwi r0, 0x1
    stfs f0, 0xc(r1)
    beq lbl_fn_805D2E00_0000195C
    cmpwi r0, 0x2
    beq lbl_fn_805D2E00_00001978
    stfs f0, 0x8(r1)
    b lbl_fn_805D2E00_00001984
lbl_fn_805D2E00_0000195C:
    lfs f1, 0x4c(r4)
    lis r6, lbl_80764590@ha
    lfs f0, lbl_80764590@l(r6)
    fneg f1, f1
    fmuls f0, f1, f0
    stfs f0, 0x8(r1)
    b lbl_fn_805D2E00_00001984
lbl_fn_805D2E00_00001978:
    lfs f0, 0x4c(r4)
    fneg f0, f0
    stfs f0, 0x8(r1)
lbl_fn_805D2E00_00001984:
    lis r6, 0x5555
    addi r0, r6, 0x5556
    mulhw r6, r0, r8
    srwi r0, r6, 31
    add r0, r6, r0
    cmpwi r0, 0x1
    beq lbl_fn_805D2E00_000019B8
    cmpwi r0, 0x2
    beq lbl_fn_805D2E00_000019D4
    lis r6, lbl_80764588@ha
    lfs f0, lbl_80764588@l(r6)
    stfs f0, 0xc(r1)
    b lbl_fn_805D2E00_000019E0
lbl_fn_805D2E00_000019B8:
    lfs f1, 0x50(r4)
    lis r6, lbl_80764590@ha
    lfs f0, lbl_80764590@l(r6)
    fneg f1, f1
    fmuls f0, f1, f0
    stfs f0, 0xc(r1)
    b lbl_fn_805D2E00_000019E0
lbl_fn_805D2E00_000019D4:
    lfs f0, 0x50(r4)
    fneg f0, f0
    stfs f0, 0xc(r1)
lbl_fn_805D2E00_000019E0:
    lfs f1, 0x40(r5)
    lis r6, lbl_80764588@ha
    lfs f0, 0x38(r5)
    lwz r7, 0x8(r1)
    lwz r0, 0xc(r1)
    fsubs f1, f1, f0
    stw r7, 0x18(r1)
    lfs f0, lbl_80764588@l(r6)
    stw r0, 0x1c(r1)
    fcmpo cr0, f1, f0
    lfs f3, 0x18(r1)
    lfs f2, 0x1c(r1)
    lfs f1, 0x4c(r4)
    lfs f0, 0x50(r4)
    fadds f1, f3, f1
    stw r7, 0x10(r1)
    fadds f0, f2, f0
    stw r0, 0x14(r1)
    stfs f3, 0x0(r3)
    stfs f2, 0x4(r3)
    stfs f1, 0x8(r3)
    stfs f0, 0xc(r3)
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_805D2E00_00001A54
    fneg f1, f2
    fneg f0, f0
    stfs f1, 0x4(r3)
    stfs f0, 0xc(r3)
lbl_fn_805D2E00_00001A54:
    addi r1, r1, 0x20
    blr
}
