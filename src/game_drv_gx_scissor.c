#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_22(void);
extern void _restgpr_23(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_22(void);
extern void _savegpr_23(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_805CD940(void);
extern void fn_805CD9E0(void);
extern void fn_805CDA80(void);
extern void fn_805CDAA0(void);
extern void fn_805CDAF0(void);
extern void fn_805CDC80(void);
extern void fn_805CDD20(void);
extern void fn_805CDDD0(void);
extern void fn_805CE420(void);
extern void fn_805CFC10(void);
extern void fn_805CFC20(void);
extern void fn_805D2A40(void);
extern void fn_805D2B50(void);
extern void fn_805D2C70(void);
extern void fn_805D36E0(void);
extern void fn_805D3870(void);
extern void fn_805D3950(void);
extern void fn_805D39D0(void);
extern void fn_805D3BA0(void);
extern void fn_805D8510(void);
extern void fn_805D9190(void);
extern void fn_805D93D0(void);
extern void fn_805D93E0(void);
extern void fn_805D9530(void);
extern void fn_805D9540(void);
extern void fn_805D9580(void);
extern void fn_805DDD90(void);
extern void fn_805DDE50(void);
extern void fn_805DDEC0(void);
extern void fn_8061A0F0(void);
extern void fn_8061A100(void);
extern void fn_80686A48(void);
extern void fn_806958E0(void);
extern void fn_806959D8(void);
extern void fn_80695B00(void);

/* External data declarations */
extern u8 lbl_807645B0[];
extern u8 lbl_807645B8[];
extern u8 lbl_807645C8[];
extern u8 lbl_807645D0[];
extern u8 lbl_807645D8[];
extern u8 lbl_80799228[];
extern u8 lbl_807992D8[];
extern u8 lbl_80799314[];
extern u8 lbl_807CA1F8[];
extern u8 lbl_807CA200[];
extern u8 lbl_807CA210[];

/* Small data declarations */

/* Function declarations */
void fn_805D4E70(void);
void fn_805D52C0(void);
void fn_805D5340(void);
void fn_805D5390(void);
void fn_805D5400(void);
void fn_805D54D0(void);
void fn_805D5510(void);
void fn_805D5680(void);
void fn_805D5690(void);
void fn_805D56B0(void);
void fn_805D58C0(void);
void fn_805D5A10(void);
void fn_805D5B10(void);
void fn_805D5BC0(void);
void fn_805D5C60(void);
void fn_805D5C80(void);
void fn_805D5CB0(void);
void fn_805D5CD0(void);
void fn_805D5CF0(void);
void fn_805D5ED0(void);
void fn_805D5F60(void);
void fn_805D5FF0(void);
void fn_805D6100(void);
void fn_805D6730(void);

asm void fn_805D4E70(void)
{
    nofralloc
    stwu r1, -0xe0(r1)
    mflr r0
    stw r0, 0xe4(r1)
    addi r11, r1, 0x90
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
    bl _savegpr_23
    fmr f30, f1
    li r0, 0x0
    mr r25, r4
    stw r0, 0x50(r1)
    mr r24, r3
    mr r26, r5
    stw r0, 0x54(r1)
    mr r27, r6
    mr r28, r7
    mr r3, r25
    stw r0, 0x58(r1)
    stw r4, 0x48(r1)
    stw r5, 0x4c(r1)
    bl fn_805D8510
    lwz r5, 0x4(r3)
    lis r23, lbl_807645B0@ha
    lwz r4, 0x8(r3)
    li r31, 0x0
    lwz r0, 0xc(r3)
    mr r3, r25
    stw r0, 0x44(r1)
    li r30, 0x0
    lfs f31, lbl_807645B0@l(r23)
    stw r31, 0x38(r1)
    stw r5, 0x3c(r1)
    stw r4, 0x40(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    stfs f31, 0x0(r24)
    stfs f31, 0x8(r24)
    bl fn_805DDD90
    fmr f0, f31
    fcmpo cr0, f0, f1
    ble lbl_fn_805D4E70_000000CC
    b lbl_fn_805D4E70_000000D0
lbl_fn_805D4E70_000000CC:
    fmr f1, f0
lbl_fn_805D4E70_000000D0:
    stfs f1, 0x4(r24)
    mr r3, r25
    bl fn_805DDD90
    lis r3, lbl_807645B0@ha
    lfs f0, lbl_807645B0@l(r3)
    fcmpo cr0, f0, f1
    bge lbl_fn_805D4E70_000000F0
    b lbl_fn_805D4E70_000000F4
lbl_fn_805D4E70_000000F0:
    fmr f1, f0
lbl_fn_805D4E70_000000F4:
    stfs f1, 0xc(r24)
    li r0, 0x0
    addi r3, r1, 0x38
    addi r12, r1, 0x3c
    stb r0, 0x0(r28)
    stw r26, 0x38(r1)
    lfs f3, 0x0(r24)
    lfs f2, 0x4(r24)
    lfs f1, 0x8(r24)
    lfs f0, 0xc(r24)
    stfs f3, 0x28(r1)
    stfs f2, 0x2c(r1)
    stfs f1, 0x30(r1)
    stfs f0, 0x34(r1)
    bl fn_80695B00
    nop
    lis r5, lbl_807645B0@ha
    lis r4, lbl_807645B8@ha
    lfs f27, lbl_807645B0@l(r5)
    mr r29, r3
    lfd f29, lbl_807645B8@l(r4)
    lis r23, 0x4330
    b lbl_fn_805D4E70_0000038C
lbl_fn_805D4E70_00000150:
    clrlwi r0, r29, 16
    cmpwi r0, 0x20
    bge lbl_fn_805D4E70_00000290
    cntlzw r0, r31
    fmr f1, f31
    srwi r0, r0, 5
    stfs f31, 0x18(r1)
    mr r3, r25
    stfs f27, 0x1c(r1)
    stfs f27, 0x20(r1)
    stfs f27, 0x24(r1)
    stw r4, 0x4c(r1)
    stw r0, 0x58(r1)
    bl fn_805D9540
    mr r3, r25
    bl fn_805DDEC0
    lwz r12, 0x0(r3)
    addi r4, r1, 0x18
    clrlwi r5, r29, 16
    addi r6, r1, 0x48
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    lwz r0, 0x4c(r1)
    mr r29, r3
    stw r0, 0x38(r1)
    lfs f1, 0x18(r1)
    lfs f0, 0x0(r24)
    fcmpo cr0, f0, f1
    ble lbl_fn_805D4E70_000001CC
    b lbl_fn_805D4E70_000001D0
lbl_fn_805D4E70_000001CC:
    fmr f1, f0
lbl_fn_805D4E70_000001D0:
    stfs f1, 0x0(r24)
    lfs f0, 0x4(r24)
    lfs f1, 0x1c(r1)
    fcmpo cr0, f0, f1
    ble lbl_fn_805D4E70_000001E8
    b lbl_fn_805D4E70_000001EC
lbl_fn_805D4E70_000001E8:
    fmr f1, f0
lbl_fn_805D4E70_000001EC:
    stfs f1, 0x4(r24)
    lfs f0, 0x8(r24)
    lfs f1, 0x20(r1)
    fcmpo cr0, f0, f1
    bge lbl_fn_805D4E70_00000204
    b lbl_fn_805D4E70_00000208
lbl_fn_805D4E70_00000204:
    fmr f1, f0
lbl_fn_805D4E70_00000208:
    stfs f1, 0x8(r24)
    lfs f0, 0xc(r24)
    lfs f1, 0x24(r1)
    fcmpo cr0, f0, f1
    bge lbl_fn_805D4E70_00000220
    b lbl_fn_805D4E70_00000224
lbl_fn_805D4E70_00000220:
    fmr f1, f0
lbl_fn_805D4E70_00000224:
    stfs f1, 0xc(r24)
    mr r3, r25
    bl fn_805D9580
    lfs f2, 0x8(r24)
    fmr f31, f1
    lfs f0, 0x0(r24)
    fsubs f0, f2, f0
    fcmpo cr0, f0, f30
    ble lbl_fn_805D4E70_00000254
    li r0, 0x1
    stb r0, 0x0(r28)
    b lbl_fn_805D4E70_000003A8
lbl_fn_805D4E70_00000254:
    cmpwi r29, 0x4
    bne lbl_fn_805D4E70_00000264
    mr r3, r27
    b lbl_fn_805D4E70_00000404
lbl_fn_805D4E70_00000264:
    cmpwi r29, 0x1
    bne lbl_fn_805D4E70_00000274
    li r31, 0x0
    b lbl_fn_805D4E70_00000354
lbl_fn_805D4E70_00000274:
    cmpwi r29, 0x2
    bne lbl_fn_805D4E70_00000284
    li r31, 0x1
    b lbl_fn_805D4E70_00000354
lbl_fn_805D4E70_00000284:
    cmpwi r29, 0x3
    beq lbl_fn_805D4E70_000003A8
    b lbl_fn_805D4E70_00000354
lbl_fn_805D4E70_00000290:
    cmpwi r31, 0x0
    beq lbl_fn_805D4E70_000002A4
    mr r3, r25
    bl fn_805DDE50
    fadds f31, f31, f1
lbl_fn_805D4E70_000002A4:
    mr r3, r25
    li r31, 0x1
    bl fn_805D93D0
    cmpwi r3, 0x0
    beq lbl_fn_805D4E70_000002C8
    mr r3, r25
    bl fn_805D93E0
    fadds f31, f31, f1
    b lbl_fn_805D4E70_0000030C
lbl_fn_805D4E70_000002C8:
    mr r3, r25
    bl fn_805D9190
    fmr f28, f1
    mr r3, r25
    bl fn_805D8510
    lwz r12, 0x0(r3)
    clrlwi r4, r29, 16
    lwz r12, 0x48(r12)
    mtctr r12
    bctrl
    xoris r0, r3, 0x8000
    stw r0, 0x64(r1)
    stw r23, 0x60(r1)
    lfd f0, 0x60(r1)
    fsubs f0, f0, f29
    fmuls f0, f0, f28
    fadds f31, f31, f0
lbl_fn_805D4E70_0000030C:
    lfs f0, 0x0(r24)
    fcmpo cr0, f0, f31
    ble lbl_fn_805D4E70_0000031C
    fmr f0, f31
lbl_fn_805D4E70_0000031C:
    lfs f2, 0x8(r24)
    stfs f0, 0x0(r24)
    fcmpo cr0, f2, f31
    bge lbl_fn_805D4E70_00000330
    fmr f2, f31
lbl_fn_805D4E70_00000330:
    frsp f1, f2
    lfs f0, 0x0(r24)
    stfs f2, 0x8(r24)
    fsubs f0, f1, f0
    fcmpo cr0, f0, f30
    ble lbl_fn_805D4E70_00000354
    li r0, 0x1
    stb r0, 0x0(r28)
    b lbl_fn_805D4E70_000003A8
lbl_fn_805D4E70_00000354:
    lwz r30, 0x38(r1)
    addi r3, r1, 0x38
    addi r12, r1, 0x3c
    bl fn_80695B00
    nop
    lfs f3, 0x0(r24)
    mr r29, r3
    lfs f2, 0x4(r24)
    lfs f1, 0x8(r24)
    lfs f0, 0xc(r24)
    stfs f3, 0x28(r1)
    stfs f2, 0x2c(r1)
    stfs f1, 0x30(r1)
    stfs f0, 0x34(r1)
lbl_fn_805D4E70_0000038C:
    lwz r4, 0x38(r1)
    subf r3, r26, r4
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    cmpw r0, r27
    ble lbl_fn_805D4E70_00000150
lbl_fn_805D4E70_000003A8:
    lbz r0, 0x0(r28)
    cmpwi r0, 0x0
    beq lbl_fn_805D4E70_000003F0
    cmpwi r30, 0x0
    beq lbl_fn_805D4E70_000003F0
    subf r3, r26, r30
    lfs f3, 0x28(r1)
    srwi r0, r3, 31
    lfs f2, 0x2c(r1)
    lfs f1, 0x30(r1)
    add r0, r0, r3
    lfs f0, 0x34(r1)
    srawi r3, r0, 1
    stfs f3, 0x0(r24)
    stfs f2, 0x4(r24)
    stfs f1, 0x8(r24)
    stfs f0, 0xc(r24)
    b lbl_fn_805D4E70_00000404
lbl_fn_805D4E70_000003F0:
    lwz r0, 0x38(r1)
    subf r3, r26, r0
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r3, r0, 1
lbl_fn_805D4E70_00000404:
    addi r11, r1, 0x90
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
    bl _restgpr_23
    lwz r0, 0xe4(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}

asm void fn_805D52C0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_fn_805D52C0_000004B4
    addi r4, r4, 0x1
    lhz r0, 0xf8(r3)
    clrlslwi r31, r4, 17, 1
    cmplw r31, r0
    ble lbl_fn_805D52C0_000004B4
    lwz r12, 0x0(r3)
    lwz r12, 0x68(r12)
    mtctr r12
    bctrl
    lis r3, lbl_807CA1F8@ha
    mr r4, r31
    lwz r3, lbl_807CA1F8@l(r3)
    bl fn_8061A0F0
    cmpwi r3, 0x0
    stw r3, 0xd4(r30)
    beq lbl_fn_805D52C0_000004B4
    sth r31, 0xf8(r30)
lbl_fn_805D52C0_000004B4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805D5340(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r4, 0xd4(r3)
    cmpwi r4, 0x0
    beq lbl_fn_805D5340_00000508
    lis r3, lbl_807CA1F8@ha
    lwz r3, lbl_807CA1F8@l(r3)
    bl fn_8061A100
    li r0, 0x0
    stw r0, 0xd4(r31)
    sth r0, 0xf8(r31)
lbl_fn_805D5340_00000508:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805D5390(void)
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
    mr r3, r30
    bl fn_80686A48
    lwz r12, 0x0(r29)
    clrlwi r6, r3, 16
    mr r3, r29
    mr r4, r30
    lwz r12, 0x70(r12)
    mr r5, r31
    mtctr r12
    bctrl
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805D5400(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r8, 0xd4(r3)
    cmpwi r8, 0x0
    bne lbl_fn_805D5400_000005C4
    li r3, 0x0
    b lbl_fn_805D5400_0000063C
lbl_fn_805D5400_000005C4:
    lhz r3, 0xf8(r3)
    cntlzw r0, r3
    srwi r3, r3, 1
    extrwi r7, r0, 1, 26
    subi r0, r3, 0x1
    neg r3, r7
    clrlwi r0, r0, 16
    andc r0, r0, r3
    clrlwi r0, r0, 16
    cmplw r5, r0
    blt lbl_fn_805D5400_000005F8
    li r3, 0x0
    b lbl_fn_805D5400_0000063C
lbl_fn_805D5400_000005F8:
    subf r0, r5, r0
    mr r31, r6
    clrlwi r0, r0, 16
    cmplw r6, r0
    ble lbl_fn_805D5400_00000610
    mr r31, r0
lbl_fn_805D5400_00000610:
    clrlslwi r0, r5, 16, 1
    clrlslwi r5, r31, 16, 1
    add r3, r8, r0
    bl memcpy
    add r0, r30, r31
    sth r0, 0xfa(r29)
    lwz r4, 0xd4(r29)
    clrlslwi r0, r0, 16, 1
    li r5, 0x0
    clrlwi r3, r31, 16
    sthx r5, r4, r0
lbl_fn_805D5400_0000063C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805D54D0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_805D54D0_00000688
    cmpwi r4, 0x0
    ble lbl_fn_805D54D0_00000688
    bl dtor_80084684
lbl_fn_805D54D0_00000688:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805D5510(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x40
    stfd f31, 0x50(r1)
    psq_st f31, 0x58(r1), 0, 0
    stfd f30, 0x40(r1)
    psq_st f30, 0x48(r1), 0, 0
    bl _savegpr_26
    lis r30, lbl_807645B0@ha
    fmr f30, f1
    lfs f1, lbl_807645B0@l(r30)
    mr r27, r4
    stfs f1, 0x0(r3)
    mr r26, r3
    fmr f2, f1
    stfs f1, 0x8(r3)
    mr r28, r5
    mr r29, r6
    stfs f1, 0x4(r3)
    stfs f1, 0xc(r3)
    mr r3, r27
    bl fn_805D9530
    lfs f31, lbl_807645B0@l(r30)
    lis r31, lbl_80799228@ha
lbl_fn_805D5510_00000704:
    fmr f1, f30
    stfs f31, 0x10(r1)
    mr r4, r27
    mr r5, r28
    stfs f31, 0x14(r1)
    mr r6, r29
    stfs f31, 0x18(r1)
    addi r3, r1, 0x10
    addi r7, r1, 0x8
    stfs f31, 0x1c(r1)
    bl fn_805D4E70
    lbz r0, 0x8(r1)
    mr r30, r3
    cmpwi r0, 0x0
    beq lbl_fn_805D5510_0000075C
    fmr f1, f30
    mr r4, r27
    addi r3, r1, 0x10
    addi r5, r31, lbl_80799228@l
    addi r7, r1, 0x8
    li r6, 0x1
    bl fn_805D4E70
lbl_fn_805D5510_0000075C:
    lfs f1, 0x10(r1)
    slwi r0, r30, 1
    lfs f0, 0x0(r26)
    add r28, r28, r0
    subf r29, r30, r29
    fcmpo cr0, f0, f1
    ble lbl_fn_805D5510_0000077C
    b lbl_fn_805D5510_00000780
lbl_fn_805D5510_0000077C:
    fmr f1, f0
lbl_fn_805D5510_00000780:
    stfs f1, 0x0(r26)
    lfs f0, 0x4(r26)
    lfs f1, 0x14(r1)
    fcmpo cr0, f0, f1
    ble lbl_fn_805D5510_00000798
    b lbl_fn_805D5510_0000079C
lbl_fn_805D5510_00000798:
    fmr f1, f0
lbl_fn_805D5510_0000079C:
    stfs f1, 0x4(r26)
    lfs f0, 0x8(r26)
    lfs f1, 0x18(r1)
    fcmpo cr0, f0, f1
    bge lbl_fn_805D5510_000007B4
    b lbl_fn_805D5510_000007B8
lbl_fn_805D5510_000007B4:
    fmr f1, f0
lbl_fn_805D5510_000007B8:
    stfs f1, 0x8(r26)
    lfs f0, 0xc(r26)
    lfs f1, 0x1c(r1)
    fcmpo cr0, f0, f1
    bge lbl_fn_805D5510_000007D0
    b lbl_fn_805D5510_000007D4
lbl_fn_805D5510_000007D0:
    fmr f1, f0
lbl_fn_805D5510_000007D4:
    cmpwi r29, 0x0
    stfs f1, 0xc(r26)
    bgt lbl_fn_805D5510_00000704
    addi r11, r1, 0x40
    psq_l f31, 0x58(r1), 0, 0
    lfd f31, 0x50(r1)
    psq_l f30, 0x48(r1), 0, 0
    lfd f30, 0x40(r1)
    bl _restgpr_26
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_805D5680(void)
{
    nofralloc
    lis r3, lbl_807CA210@ha
    addi r3, r3, lbl_807CA210@l
    blr
}

asm void fn_805D5690(void)
{
    nofralloc
    lis r4, lbl_807CA200@ha
    lis r3, lbl_807CA210@ha
    addi r4, r4, lbl_807CA200@l
    stw r4, lbl_807CA210@l(r3)
    blr
}

asm void fn_805D56B0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_22
    mr r23, r3
    mr r24, r4
    mr r25, r5
    bl fn_805D2B50
    lis r3, lbl_80799314@ha
    lis r4, fn_805CFC10@ha
    addi r3, r3, lbl_80799314@l
    lis r5, fn_805CD940@ha
    addi r26, r23, 0xe4
    stw r3, 0x0(r23)
    mr r3, r26
    addi r4, r4, fn_805CFC10@l
    addi r5, r5, fn_805CD940@l
    li r6, 0x4
    li r7, 0x4
    bl fn_806958E0
    addi r3, r26, 0x10
    bl fn_805CDA80
    lfs f0, 0x4c(r24)
    stfs f0, 0xd4(r23)
    lwz r3, 0x8(r25)
    lfs f0, 0x50(r24)
    stfs f0, 0xd8(r23)
    addi r29, r3, 0xc
    lfs f0, 0x54(r24)
    stfs f0, 0xdc(r23)
    lfs f0, 0x58(r24)
    stfs f0, 0xe0(r23)
    lwz r0, 0x60(r24)
    add r27, r24, r0
    lwzx r0, r24, r0
    stw r0, 0xe4(r23)
    lwz r0, 0x4(r27)
    stw r0, 0xe8(r23)
    lwz r0, 0x8(r27)
    stw r0, 0xec(r23)
    lwz r0, 0xc(r27)
    stw r0, 0xf0(r23)
    lbz r0, 0x12(r27)
    cmpwi r0, 0x0
    beq lbl_fn_805D56B0_00000930
    cmplwi r0, 0x8
    li r26, 0x8
    bgt lbl_fn_805D56B0_00000908
    mr r26, r0
lbl_fn_805D56B0_00000908:
    addi r3, r23, 0xf4
    clrlwi r4, r26, 24
    bl fn_805CDAF0
    lbz r0, 0xf4(r23)
    cmpwi r0, 0x0
    beq lbl_fn_805D56B0_00000930
    addi r3, r23, 0xf4
    addi r4, r27, 0x14
    clrlwi r5, r26, 24
    bl fn_805CDC80
lbl_fn_805D56B0_00000930:
    lis r3, lbl_807CA1F8@ha
    li r4, 0x5c
    lwz r3, lbl_807CA1F8@l(r3)
    bl fn_8061A0F0
    cmpwi r3, 0x0
    beq lbl_fn_805D56B0_0000096C
    lhz r0, 0x10(r27)
    lwz r4, 0x8(r25)
    slwi r0, r0, 2
    lwzx r0, r29, r0
    add r4, r4, r0
    beq lbl_fn_805D56B0_00000968
    mr r5, r25
    bl fn_805CFC20
lbl_fn_805D56B0_00000968:
    stw r3, 0x28(r23)
lbl_fn_805D56B0_0000096C:
    li r30, 0x0
    stb r30, 0x100(r23)
    stw r30, 0xfc(r23)
    lbz r0, 0x5c(r24)
    cmpwi r0, 0x0
    beq lbl_fn_805D56B0_00000A34
    lis r31, lbl_807CA1F8@ha
    clrlslwi r4, r0, 24, 3
    lwz r3, lbl_807CA1F8@l(r31)
    bl fn_8061A0F0
    cmpwi r3, 0x0
    stw r3, 0xfc(r23)
    beq lbl_fn_805D56B0_00000A34
    lbz r0, 0x5c(r24)
    li r26, 0x0
    stb r0, 0x100(r23)
    li r27, 0x0
    lwz r0, 0x64(r24)
    add r28, r24, r0
    b lbl_fn_805D56B0_00000A28
lbl_fn_805D56B0_000009BC:
    lwz r0, 0x0(r28)
    li r4, 0x5c
    lwz r3, 0xfc(r23)
    add r22, r24, r0
    lbz r0, 0x2(r22)
    stbx r0, r3, r27
    lwz r0, 0xfc(r23)
    add r3, r0, r27
    stw r30, 0x4(r3)
    lwz r3, lbl_807CA1F8@l(r31)
    bl fn_8061A0F0
    cmpwi r3, 0x0
    beq lbl_fn_805D56B0_00000A1C
    lhz r0, 0x0(r22)
    lwz r4, 0x8(r25)
    slwi r0, r0, 2
    lwzx r0, r29, r0
    add r4, r4, r0
    beq lbl_fn_805D56B0_00000A10
    mr r5, r25
    bl fn_805CFC20
lbl_fn_805D56B0_00000A10:
    lwz r0, 0xfc(r23)
    add r4, r0, r27
    stw r3, 0x4(r4)
lbl_fn_805D56B0_00000A1C:
    addi r28, r28, 0x4
    addi r27, r27, 0x8
    addi r26, r26, 0x1
lbl_fn_805D56B0_00000A28:
    lbz r0, 0x100(r23)
    cmpw r26, r0
    blt lbl_fn_805D56B0_000009BC
lbl_fn_805D56B0_00000A34:
    addi r11, r1, 0x30
    mr r3, r23
    bl _restgpr_22
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_805D58C0(void)
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
    beq lbl_fn_805D58C0_00000B78
    lwz r0, 0xfc(r3)
    lis r4, lbl_80799314@ha
    addi r4, r4, lbl_80799314@l
    stw r4, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805D58C0_00000AF4
    li r29, 0x0
    li r30, 0x0
    lis r31, lbl_807CA1F8@ha
    b lbl_fn_805D58C0_00000AD8
lbl_fn_805D58C0_00000A9C:
    lwz r0, 0xfc(r27)
    li r4, -0x1
    add r3, r0, r30
    lwz r3, 0x4(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lwz r0, 0xfc(r27)
    lwz r3, lbl_807CA1F8@l(r31)
    add r4, r0, r30
    lwz r4, 0x4(r4)
    bl fn_8061A100
    addi r30, r30, 0x8
    addi r29, r29, 0x1
lbl_fn_805D58C0_00000AD8:
    lbz r0, 0x100(r27)
    cmpw r29, r0
    blt lbl_fn_805D58C0_00000A9C
    lis r3, lbl_807CA1F8@ha
    lwz r4, 0xfc(r27)
    lwz r3, lbl_807CA1F8@l(r3)
    bl fn_8061A100
lbl_fn_805D58C0_00000AF4:
    lwz r3, 0x28(r27)
    cmpwi r3, 0x0
    beq lbl_fn_805D58C0_00000B38
    lbz r0, 0x54(r3)
    cmpwi r0, 0x0
    bne lbl_fn_805D58C0_00000B38
    lwz r12, 0x0(r3)
    li r4, -0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r3, lbl_807CA1F8@ha
    lwz r4, 0x28(r27)
    lwz r3, lbl_807CA1F8@l(r3)
    bl fn_8061A100
    li r0, 0x0
    stw r0, 0x28(r27)
lbl_fn_805D58C0_00000B38:
    addi r3, r27, 0xf4
    bl fn_805CDAA0
    addic. r3, r27, 0xe4
    beq lbl_fn_805D58C0_00000B5C
    lis r4, fn_805CD940@ha
    li r5, 0x4
    addi r4, r4, fn_805CD940@l
    li r6, 0x4
    bl fn_806959D8
lbl_fn_805D58C0_00000B5C:
    mr r3, r27
    li r4, 0x0
    bl fn_805D2C70
    cmpwi r28, 0x0
    ble lbl_fn_805D58C0_00000B78
    mr r3, r27
    bl dtor_80084684
lbl_fn_805D58C0_00000B78:
    addi r11, r1, 0x20
    mr r3, r27
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805D5A10(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lwz r6, 0x28(r3)
    mr r27, r3
    mr r28, r4
    mr r29, r5
    cmpwi r6, 0x0
    beq lbl_fn_805D5A10_00000BE4
    addi r3, r6, 0x4
    bl fn_805CD9E0
    cmpwi r3, 0x0
    beq lbl_fn_805D5A10_00000BE4
    lwz r3, 0x28(r27)
    b lbl_fn_805D5A10_00000C84
lbl_fn_805D5A10_00000BE4:
    li r31, 0x0
    li r30, 0x0
    b lbl_fn_805D5A10_00000C2C
lbl_fn_805D5A10_00000BF0:
    lwz r0, 0xfc(r27)
    mr r4, r28
    add r3, r0, r30
    lwz r3, 0x4(r3)
    addi r3, r3, 0x4
    bl fn_805CD9E0
    cmpwi r3, 0x0
    beq lbl_fn_805D5A10_00000C24
    lwz r3, 0xfc(r27)
    slwi r0, r31, 3
    add r3, r3, r0
    lwz r3, 0x4(r3)
    b lbl_fn_805D5A10_00000C84
lbl_fn_805D5A10_00000C24:
    addi r30, r30, 0x8
    addi r31, r31, 0x1
lbl_fn_805D5A10_00000C2C:
    lbz r0, 0x100(r27)
    cmpw r31, r0
    blt lbl_fn_805D5A10_00000BF0
    cmpwi r29, 0x0
    beq lbl_fn_805D5A10_00000C80
    lwz r31, 0x14(r27)
    addi r30, r27, 0x14
    b lbl_fn_805D5A10_00000C78
lbl_fn_805D5A10_00000C4C:
    lwz r12, -0x4(r31)
    subi r3, r31, 0x4
    mr r4, r28
    li r5, 0x1
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_805D5A10_00000C74
    b lbl_fn_805D5A10_00000C84
lbl_fn_805D5A10_00000C74:
    lwz r31, 0x0(r31)
lbl_fn_805D5A10_00000C78:
    cmplw r31, r30
    bne lbl_fn_805D5A10_00000C4C
lbl_fn_805D5A10_00000C80:
    li r3, 0x0
lbl_fn_805D5A10_00000C84:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805D5B10(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    bl fn_805D3950
    cmpwi r3, 0x0
    beq lbl_fn_805D5B10_00000CD4
    b lbl_fn_805D5B10_00000D24
lbl_fn_805D5B10_00000CD4:
    li r30, 0x0
    li r31, 0x0
    b lbl_fn_805D5B10_00000D14
lbl_fn_805D5B10_00000CE0:
    lwz r0, 0xfc(r28)
    mr r4, r29
    add r3, r0, r31
    lwz r3, 0x4(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_805D5B10_00000D0C
    b lbl_fn_805D5B10_00000D24
lbl_fn_805D5B10_00000D0C:
    addi r31, r31, 0x8
    addi r30, r30, 0x1
lbl_fn_805D5B10_00000D14:
    lbz r0, 0x100(r28)
    cmpw r30, r0
    blt lbl_fn_805D5B10_00000CE0
    li r3, 0x0
lbl_fn_805D5B10_00000D24:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805D5BC0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    li r30, 0x0
    li r31, 0x0
    b lbl_fn_805D5BC0_00000DAC
lbl_fn_805D5BC0_00000D80:
    lwz r0, 0xfc(r26)
    mr r4, r27
    mr r5, r28
    add r3, r0, r31
    lwz r3, 0x4(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
    addi r31, r31, 0x8
    addi r30, r30, 0x1
lbl_fn_805D5BC0_00000DAC:
    lbz r0, 0x100(r26)
    cmpw r30, r0
    blt lbl_fn_805D5BC0_00000D80
    mr r3, r26
    mr r4, r27
    mr r5, r28
    mr r6, r29
    bl fn_805D39D0
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805D5C60(void)
{
    nofralloc
    slwi r0, r5, 2
    add r4, r4, r0
    lwz r0, 0xe4(r4)
    stw r0, 0x0(r3)
    blr
}

asm void fn_805D5C80(void)
{
    nofralloc
    slwi r4, r4, 2
    lbz r0, 0x0(r5)
    add r3, r3, r4
    stb r0, 0xe4(r3)
    lbz r0, 0x1(r5)
    stb r0, 0xe5(r3)
    lbz r0, 0x2(r5)
    stb r0, 0xe6(r3)
    lbz r0, 0x3(r5)
    stb r0, 0xe7(r3)
    blr
}

asm void fn_805D5CB0(void)
{
    nofralloc
    clrrwi r5, r4, 2
    clrlwi r0, r4, 30
    add r3, r3, r5
    add r3, r3, r0
    lbz r3, 0xe4(r3)
    blr
}

asm void fn_805D5CD0(void)
{
    nofralloc
    clrrwi r6, r4, 2
    clrlwi r0, r4, 30
    add r3, r3, r6
    add r3, r3, r0
    stb r5, 0xe4(r3)
    blr
}

asm void fn_805D5CF0(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    stw r30, 0x58(r1)
    mr r30, r3
    lwz r12, 0x0(r3)
    lwz r12, 0x60(r12)
    mtctr r12
    bctrl
    lbz r3, 0x100(r30)
    li r0, 0x0
    stw r0, 0x30(r1)
    cmpwi r3, 0x1
    lwz r31, 0xfc(r30)
    stw r0, 0x34(r1)
    stw r0, 0x38(r1)
    stw r0, 0x3c(r1)
    beq lbl_fn_805D5CF0_00000EE0
    cmpwi r3, 0x4
    beq lbl_fn_805D5CF0_00000F0C
    cmpwi r3, 0x8
    beq lbl_fn_805D5CF0_00000F0C
    b lbl_fn_805D5CF0_00000F54
lbl_fn_805D5CF0_00000EE0:
    lwz r4, 0x4(r31)
    addi r3, r1, 0x8
    li r5, 0x0
    bl fn_805D2A40
    lfs f1, 0x8(r1)
    lfs f0, 0xc(r1)
    stfs f1, 0x30(r1)
    stfs f0, 0x38(r1)
    stfs f1, 0x34(r1)
    stfs f0, 0x3c(r1)
    b lbl_fn_805D5CF0_00000F54
lbl_fn_805D5CF0_00000F0C:
    lwz r4, 0x4(r31)
    addi r3, r1, 0x10
    li r5, 0x0
    bl fn_805D2A40
    lfs f1, 0x10(r1)
    addi r3, r1, 0x18
    lfs f0, 0x14(r1)
    li r5, 0x0
    stfs f1, 0x30(r1)
    lwz r4, 0x1c(r31)
    stfs f0, 0x38(r1)
    bl fn_805D2A40
    lfs f1, 0x18(r1)
    lfs f0, 0x1c(r1)
    stfs f1, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f1, 0x34(r1)
    stfs f0, 0x3c(r1)
lbl_fn_805D5CF0_00000F54:
    lwz r6, 0x30(r1)
    mr r3, r30
    lwz r5, 0x34(r1)
    lwz r4, 0x38(r1)
    lwz r0, 0x3c(r1)
    stw r6, 0x40(r1)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
    bl fn_805D3BA0
    stw r3, 0x28(r1)
    addi r5, r1, 0x40
    stw r4, 0x2c(r1)
    lwz r12, 0x0(r30)
    stw r3, 0x20(r1)
    mr r3, r30
    lwz r12, 0x6c(r12)
    stw r4, 0x24(r1)
    addi r4, r1, 0x28
    lbz r6, 0xce(r30)
    mtctr r12
    bctrl
    lbz r0, 0x100(r30)
    cmpwi r0, 0x1
    beq lbl_fn_805D5CF0_00000FCC
    cmpwi r0, 0x4
    beq lbl_fn_805D5CF0_00000FF4
    cmpwi r0, 0x8
    beq lbl_fn_805D5CF0_0000101C
    b lbl_fn_805D5CF0_00001040
lbl_fn_805D5CF0_00000FCC:
    lwz r12, 0x0(r30)
    mr r3, r30
    addi r4, r1, 0x28
    addi r6, r1, 0x40
    lwz r12, 0x70(r12)
    lwz r5, 0xfc(r30)
    lbz r7, 0xce(r30)
    mtctr r12
    bctrl
    b lbl_fn_805D5CF0_00001040
lbl_fn_805D5CF0_00000FF4:
    lwz r12, 0x0(r30)
    mr r3, r30
    addi r4, r1, 0x28
    addi r6, r1, 0x40
    lwz r12, 0x74(r12)
    lwz r5, 0xfc(r30)
    lbz r7, 0xce(r30)
    mtctr r12
    bctrl
    b lbl_fn_805D5CF0_00001040
lbl_fn_805D5CF0_0000101C:
    lwz r12, 0x0(r30)
    mr r3, r30
    addi r4, r1, 0x28
    addi r6, r1, 0x40
    lwz r12, 0x78(r12)
    lwz r5, 0xfc(r30)
    lbz r7, 0xce(r30)
    mtctr r12
    bctrl
lbl_fn_805D5CF0_00001040:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_805D5ED0(void)
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
    bl fn_805D36E0
    lbz r0, 0xcf(r29)
    clrlwi. r0, r0, 31
    bne lbl_fn_805D5ED0_00001098
    clrlwi. r0, r30, 31
    bne lbl_fn_805D5ED0_000010D4
lbl_fn_805D5ED0_00001098:
    li r30, 0x0
    li r31, 0x0
    b lbl_fn_805D5ED0_000010C8
lbl_fn_805D5ED0_000010A4:
    lwz r0, 0xfc(r29)
    add r3, r0, r31
    lwz r3, 0x4(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    addi r31, r31, 0x8
    addi r30, r30, 0x1
lbl_fn_805D5ED0_000010C8:
    lbz r0, 0x100(r29)
    cmpw r30, r0
    blt lbl_fn_805D5ED0_000010A4
lbl_fn_805D5ED0_000010D4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805D5F60(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    b lbl_fn_805D5F60_00001148
lbl_fn_805D5F60_00001120:
    lwz r0, 0xfc(r28)
    mr r4, r29
    add r3, r0, r31
    lwz r3, 0x4(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    addi r31, r31, 0x8
    addi r30, r30, 0x1
lbl_fn_805D5F60_00001148:
    lbz r0, 0x100(r28)
    cmpw r30, r0
    blt lbl_fn_805D5F60_00001120
    mr r3, r28
    mr r4, r29
    bl fn_805D3870
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805D5FF0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    mr r30, r6
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r4, r30
    addi r3, r3, 0xe4
    bl fn_805CDD20
    mr r4, r3
    lwz r3, 0x28(r27)
    mr r5, r30
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lbz r4, 0xf5(r27)
    mr r31, r3
    bl fn_805CDDD0
    cmpwi r31, 0x0
    beq lbl_fn_805D5FF0_000011E8
    addi r7, r27, 0xe4
    b lbl_fn_805D5FF0_000011EC
lbl_fn_805D5FF0_000011E8:
    li r7, 0x0
lbl_fn_805D5FF0_000011EC:
    lfs f1, 0x50(r27)
    mr r8, r30
    lfs f4, 0x8(r29)
    addi r3, r1, 0x10
    lfs f0, 0x4c(r27)
    addi r4, r1, 0x8
    lfs f6, 0x0(r29)
    fsubs f3, f1, f4
    lfs f10, 0xdc(r27)
    fsubs f2, f0, f6
    lfs f1, 0x4(r28)
    fadds f9, f10, f3
    lfs f0, 0x0(r28)
    fadds f1, f1, f4
    lfs f5, 0xd4(r27)
    fadds f4, f5, f2
    lfs f8, 0xc(r29)
    lfs f3, 0x4(r29)
    fadds f0, f0, f6
    fsubs f8, f9, f8
    lfs f7, 0xe0(r27)
    fsubs f3, f4, f3
    lfs f2, 0xd8(r27)
    lwz r6, 0xf8(r27)
    fadds f4, f7, f8
    lbz r5, 0xf5(r27)
    fsubs f1, f1, f10
    fadds f2, f2, f3
    stfs f4, 0xc(r1)
    fsubs f0, f0, f5
    stfs f2, 0x8(r1)
    stfs f0, 0x10(r1)
    stfs f1, 0x14(r1)
    bl fn_805CE420
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_805D6100(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    stw r0, 0xd4(r1)
    addi r11, r1, 0xc0
    stfd f31, 0xc0(r1)
    psq_st f31, 0xc8(r1), 0, 0
    bl _savegpr_22
    lis r0, 0x4330
    mr r30, r7
    mr r27, r3
    mr r28, r4
    stw r0, 0x88(r1)
    mr r22, r5
    mr r29, r6
    mr r4, r30
    stw r0, 0x90(r1)
    li r3, 0x0
    bl fn_805CDD20
    mr r4, r3
    lwz r3, 0x4(r22)
    mr r5, r30
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    mr r31, r3
    li r4, 0x1
    bl fn_805CDDD0
    lwz r4, 0x4(r22)
    addi r3, r1, 0x50
    li r5, 0x0
    bl fn_805D2A40
    lis r3, lbl_807992D8@ha
    li r24, -0x1
    addi r3, r3, lbl_807992D8@l
    lis r4, lbl_807645D8@ha
    lbz r7, 0x9(r3)
    lis r26, lbl_807645D0@ha
    lbz r0, 0x8(r3)
    lis r5, lbl_807645C8@ha
    lbzx r11, r3, r7
    add r8, r3, r7
    lbzux r25, r3, r0
    slwi r23, r0, 2
    stw r11, 0x94(r1)
    slwi r22, r7, 2
    lbz r0, 0x2(r3)
    addi r9, r1, 0x38
    lfd f2, 0x90(r1)
    addi r12, r1, 0x78
    subf r3, r25, r0
    lfs f12, lbl_807645C8@l(r5)
    lbz r0, 0x4(r8)
    xoris r3, r3, 0x8000
    stw r3, 0x94(r1)
    addi r6, r1, 0x68
    subf r0, r11, r0
    lfd f1, lbl_807645D8@l(r4)
    lfd f0, 0x90(r1)
    xoris r0, r0, 0x8000
    lfd f3, lbl_807645D0@l(r26)
    addi r10, r1, 0x70
    stw r0, 0x94(r1)
    fsubs f4, f0, f1
    lfs f11, 0x0(r28)
    fsubs f6, f2, f3
    lfd f0, 0x90(r1)
    addi r8, r1, 0x80
    stw r25, 0x8c(r1)
    fsubs f1, f0, f1
    lfs f10, 0x4(r28)
    lfd f0, 0x88(r1)
    cmpwi r31, 0x0
    lfs f13, 0x54(r1)
    addi r3, r1, 0x48
    stw r25, 0x8c(r1)
    fsubs f7, f0, f3
    lfs f31, 0x50(r1)
    addi r4, r1, 0x40
    lfd f0, 0x88(r1)
    li r5, 0x1
    stw r24, 0x58(r1)
    fsubs f5, f0, f3
    lfs f9, 0x4(r29)
    stw r11, 0x8c(r1)
    li r7, 0x0
    lfs f8, 0x8(r29)
    lfd f0, 0x88(r1)
    stw r24, 0x5c(r1)
    fsubs f2, f0, f3
    stw r24, 0x60(r1)
    stw r24, 0x64(r1)
    stfs f12, 0x40(r1)
    stfs f12, 0x44(r1)
    stfs f11, 0x48(r1)
    stfs f10, 0x4c(r1)
    lfs f0, 0x4c(r27)
    stfs f31, 0x38(r1)
    fsubs f9, f0, f9
    stfs f13, 0x3c(r1)
    lfsx f3, r9, r23
    lfsx f0, r9, r22
    stfsx f7, r12, r23
    fmuls f3, f4, f3
    fmuls f0, f1, f0
    stfsx f7, r6, r23
    fdivs f1, f9, f3
    stfsx f6, r10, r22
    stfsx f6, r6, r22
    stfs f9, 0x40(r1)
    stfs f8, 0x44(r1)
    fdivs f0, f8, f0
    fadds f1, f5, f1
    fadds f0, f2, f0
    stfsx f1, r10, r23
    stfsx f1, r8, r23
    stfsx f0, r12, r22
    stfsx f0, r8, r22
    beq lbl_fn_805D6100_00001470
    addi r7, r1, 0x58
lbl_fn_805D6100_00001470:
    mr r8, r30
    bl fn_805CE420
    lis r3, lbl_807992D8@ha
    lfs f4, 0x54(r1)
    addi r3, r3, lbl_807992D8@l
    lfs f6, 0x50(r1)
    lbz r8, 0x13(r3)
    addi r11, r3, 0xa
    lbz r10, 0x12(r3)
    lis r4, lbl_807645D8@ha
    add r5, r11, r8
    lfs f8, 0x4(r28)
    lbz r9, 0x2(r5)
    add r3, r11, r10
    stw r9, 0x94(r1)
    slwi r22, r8, 2
    lbz r26, 0x2(r3)
    lis r12, lbl_807645D0@ha
    lbzx r3, r11, r10
    slwi r0, r10, 2
    lfs f0, 0x4c(r27)
    addi r7, r1, 0x28
    subf r3, r26, r3
    lfs f1, 0x0(r28)
    lfd f2, 0x90(r1)
    xoris r3, r3, 0x8000
    fadds f3, f1, f0
    lfs f7, 0x4(r29)
    stw r3, 0x94(r1)
    addi r11, r1, 0x80
    lbz r3, 0x6(r5)
    addi r10, r1, 0x70
    fsubs f9, f3, f7
    lfd f1, lbl_807645D8@l(r4)
    lfd f0, 0x90(r1)
    subf r3, r9, r3
    stfs f6, 0x28(r1)
    xoris r3, r3, 0x8000
    stw r3, 0x94(r1)
    fsubs f3, f0, f1
    lfd f6, lbl_807645D0@l(r12)
    addi r6, r1, 0x68
    stfs f4, 0x2c(r1)
    addi r8, r1, 0x78
    fsubs f4, f2, f6
    lfsx f2, r7, r0
    cmpwi r31, 0x0
    lfd f0, 0x90(r1)
    addi r3, r1, 0x48
    fmuls f2, f3, f2
    fsubs f1, f0, f1
    lfsx f0, r7, r22
    stw r26, 0x8c(r1)
    addi r4, r1, 0x40
    lfs f5, 0xc(r29)
    lfd f3, 0x88(r1)
    stfs f9, 0x48(r1)
    fdivs f2, f7, f2
    li r5, 0x1
    li r7, 0x0
    stfs f8, 0x4c(r1)
    stfs f7, 0x40(r1)
    lfs f7, 0x50(r27)
    fsubs f7, f7, f5
    stw r26, 0x8c(r1)
    fmuls f0, f1, f0
    lfd f1, 0x88(r1)
    fsubs f5, f3, f6
    stfs f9, 0x30(r1)
    fsubs f3, f1, f6
    stw r9, 0x8c(r1)
    fdivs f0, f7, f0
    stfsx f5, r11, r0
    lfd f1, 0x88(r1)
    stfsx f5, r10, r0
    stfsx f4, r6, r22
    stfsx f4, r10, r22
    fadds f2, f3, f2
    stfs f8, 0x34(r1)
    fsubs f1, f1, f6
    stfsx f2, r6, r0
    stfsx f2, r8, r0
    fadds f0, f1, f0
    stfsx f0, r11, r22
    stfs f7, 0x44(r1)
    stfsx f0, r8, r22
    beq lbl_fn_805D6100_000015D0
    addi r7, r1, 0x58
lbl_fn_805D6100_000015D0:
    mr r8, r30
    bl fn_805CE420
    lis r3, lbl_807992D8@ha
    lfs f11, 0x54(r1)
    addi r3, r3, lbl_807992D8@l
    lfs f12, 0x50(r1)
    addi r3, r3, 0x28
    lis r7, lbl_807645D0@ha
    lbz r0, 0x9(r3)
    lis r4, lbl_807645D8@ha
    lbz r8, 0x8(r3)
    addi r12, r1, 0x70
    add r5, r3, r0
    lfd f6, lbl_807645D0@l(r7)
    lbz r10, 0x6(r5)
    add r3, r3, r8
    stw r10, 0x94(r1)
    slwi r23, r0, 2
    lbz r26, 0x6(r3)
    slwi r22, r8, 2
    lbz r0, 0x4(r3)
    addi r8, r1, 0x18
    lfd f2, 0x90(r1)
    addi r11, r1, 0x80
    subf r3, r26, r0
    lfs f1, 0x4(r28)
    lbz r0, 0x2(r5)
    xoris r3, r3, 0x8000
    lfs f0, 0x50(r27)
    fsubs f4, f2, f6
    stw r3, 0x94(r1)
    subf r0, r10, r0
    fadds f0, f1, f0
    lfs f8, 0xc(r29)
    lfs f1, 0x0(r28)
    lfs f5, 0x0(r29)
    xoris r0, r0, 0x8000
    fsubs f9, f0, f8
    fadds f10, f1, f5
    lfd f0, 0x90(r1)
    lfd f1, lbl_807645D8@l(r4)
    addi r9, r1, 0x78
    stw r0, 0x94(r1)
    fsubs f3, f0, f1
    lfd f0, 0x90(r1)
    addi r6, r1, 0x68
    stfs f10, 0x48(r1)
    cmpwi r31, 0x0
    fsubs f1, f0, f1
    stfs f9, 0x4c(r1)
    addi r3, r1, 0x48
    addi r4, r1, 0x40
    li r5, 0x1
    lfs f0, 0x4c(r27)
    stfs f12, 0x18(r1)
    li r7, 0x0
    fsubs f7, f0, f5
    stfs f11, 0x1c(r1)
    stw r26, 0x8c(r1)
    lfsx f2, r8, r22
    lfd f0, 0x88(r1)
    fmuls f2, f3, f2
    stfs f10, 0x20(r1)
    fsubs f5, f0, f6
    lfsx f0, r8, r23
    stw r26, 0x8c(r1)
    fmuls f0, f1, f0
    lfd f3, 0x88(r1)
    fdivs f2, f7, f2
    stfsx f5, r12, r22
    stw r10, 0x8c(r1)
    stfsx f5, r11, r22
    lfd f1, 0x88(r1)
    stfsx f4, r9, r23
    fsubs f3, f3, f6
    stfsx f4, r11, r23
    fdivs f0, f8, f0
    stfs f9, 0x24(r1)
    stfs f7, 0x40(r1)
    stfs f8, 0x44(r1)
    fadds f2, f3, f2
    fsubs f1, f1, f6
    stfsx f2, r9, r22
    stfsx f2, r6, r22
    fadds f0, f1, f0
    stfsx f0, r12, r23
    stfsx f0, r6, r23
    beq lbl_fn_805D6100_00001734
    addi r7, r1, 0x58
lbl_fn_805D6100_00001734:
    mr r8, r30
    bl fn_805CE420
    lis r3, lbl_807992D8@ha
    lfs f9, 0x0(r28)
    addi r3, r3, lbl_807992D8@l
    lis r4, lbl_807645D8@ha
    lbz r8, 0x1d(r3)
    addi r9, r3, 0x14
    lbz r0, 0x1c(r3)
    lis r5, lbl_807645D0@ha
    add r3, r9, r8
    lfs f10, 0x54(r1)
    lbz r10, 0x4(r3)
    add r3, r9, r0
    stw r10, 0x94(r1)
    slwi r22, r0, 2
    lbz r12, 0x4(r3)
    addi r7, r1, 0x8
    lbz r0, 0x6(r3)
    slwi r23, r8, 2
    lfd f2, 0x90(r1)
    addi r6, r1, 0x68
    subf r3, r12, r0
    lbzx r0, r9, r8
    xoris r3, r3, 0x8000
    stw r3, 0x94(r1)
    lfs f6, 0x50(r1)
    subf r0, r10, r0
    lfd f1, lbl_807645D8@l(r4)
    xoris r0, r0, 0x8000
    lfd f0, 0x90(r1)
    addi r11, r1, 0x78
    stfs f6, 0x8(r1)
    addi r9, r1, 0x80
    lfd f6, lbl_807645D0@l(r5)
    fsubs f3, f0, f1
    stw r0, 0x94(r1)
    addi r8, r1, 0x70
    lfs f5, 0x0(r29)
    cmpwi r31, 0x0
    lfd f0, 0x90(r1)
    lfs f4, 0x4(r28)
    addi r3, r1, 0x48
    lfs f7, 0x8(r29)
    fsubs f1, f0, f1
    stfs f10, 0xc(r1)
    addi r4, r1, 0x40
    fadds f8, f4, f7
    li r5, 0x1
    fsubs f4, f2, f6
    lfsx f2, r7, r22
    lfsx f0, r7, r23
    li r7, 0x0
    fmuls f2, f3, f2
    stw r12, 0x8c(r1)
    fmuls f0, f1, f0
    lfd f3, 0x88(r1)
    stfs f9, 0x48(r1)
    fdivs f2, f5, f2
    stw r12, 0x8c(r1)
    lfd f1, 0x88(r1)
    stfs f8, 0x4c(r1)
    stfs f5, 0x40(r1)
    lfs f5, 0x50(r27)
    fsubs f7, f5, f7
    stw r10, 0x8c(r1)
    fsubs f5, f3, f6
    fsubs f3, f1, f6
    lfd f1, 0x88(r1)
    stfsx f5, r6, r22
    fdivs f0, f7, f0
    stfsx f5, r11, r22
    stfsx f4, r9, r23
    stfsx f4, r11, r23
    stfs f9, 0x10(r1)
    stfs f8, 0x14(r1)
    fadds f2, f3, f2
    stfs f7, 0x44(r1)
    fsubs f1, f1, f6
    stfsx f2, r9, r22
    stfsx f2, r8, r22
    fadds f0, f1, f0
    stfsx f0, r6, r23
    stfsx f0, r8, r23
    beq lbl_fn_805D6100_0000188C
    addi r7, r1, 0x58
lbl_fn_805D6100_0000188C:
    mr r8, r30
    bl fn_805CE420
    addi r11, r1, 0xc0
    psq_l f31, 0xc8(r1), 0, 0
    lfd f31, 0xc0(r1)
    bl _restgpr_22
    lwz r0, 0xd4(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

asm void fn_805D6730(void)
{
    nofralloc
    stwu r1, -0xe0(r1)
    mflr r0
    stw r0, 0xe4(r1)
    addi r11, r1, 0xe0
    bl _savegpr_23
    lis r8, lbl_807645C8@ha
    li r0, -0x1
    lfs f0, lbl_807645C8@l(r8)
    lis r8, 0x4330
    mr r28, r7
    stw r8, 0xa0(r1)
    mr r24, r3
    mr r25, r4
    stw r8, 0xa8(r1)
    mr r26, r5
    mr r27, r6
    mr r4, r28
    stw r0, 0x70(r1)
    li r3, 0x0
    stw r0, 0x74(r1)
    stw r0, 0x78(r1)
    stw r0, 0x7c(r1)
    stfs f0, 0x60(r1)
    stfs f0, 0x64(r1)
    bl fn_805CDD20
    mr r30, r3
    lwz r3, 0x4(r26)
    mr r4, r30
    mr r5, r28
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lfs f1, 0x0(r25)
    mr r29, r3
    lfs f0, 0x4(r25)
    addi r3, r1, 0x58
    stfs f1, 0x68(r1)
    li r5, 0x0
    lfs f1, 0x4(r27)
    stfs f0, 0x6c(r1)
    lfs f0, 0x8(r27)
    lfs f2, 0x4c(r24)
    lbz r31, 0x0(r26)
    fsubs f1, f2, f1
    stfs f0, 0x64(r1)
    lwz r4, 0x4(r26)
    stfs f1, 0x60(r1)
    bl fn_805D2A40
    mulli r0, r31, 0xa
    lis r4, lbl_807992D8@ha
    lis r3, lbl_807645D8@ha
    lfs f2, 0x5c(r1)
    addi r4, r4, lbl_807992D8@l
    lfs f3, 0x58(r1)
    add r7, r4, r0
    lis r4, lbl_807645D0@ha
    lbz r0, 0x9(r7)
    addi r6, r1, 0x38
    lbz r5, 0x8(r7)
    addi r9, r1, 0x90
    lbzx r8, r7, r0
    add r23, r7, r0
    lfd f5, lbl_807645D8@l(r3)
    add r3, r7, r5
    lbzx r10, r7, r5
    slwi r12, r0, 2
    stw r8, 0xac(r1)
    slwi r11, r5, 2
    lbz r0, 0x2(r3)
    addi r31, r1, 0x80
    lfd f1, 0xa8(r1)
    addi r7, r1, 0x88
    subf r3, r10, r0
    lbz r0, 0x4(r23)
    xoris r3, r3, 0x8000
    stw r3, 0xac(r1)
    lfd f8, lbl_807645D0@l(r4)
    subf r0, r8, r0
    lfd f0, 0xa8(r1)
    xoris r0, r0, 0x8000
    stfs f3, 0x38(r1)
    fsubs f6, f1, f8
    fsubs f4, f0, f5
    lfs f3, 0x60(r1)
    stfs f2, 0x3c(r1)
    addi r5, r1, 0x98
    lfs f0, 0x64(r1)
    stw r0, 0xac(r1)
    lfsx f1, r6, r11
    mr r3, r29
    lfd f2, 0xa8(r1)
    li r4, 0x1
    fmuls f4, f4, f1
    lfsx f1, r6, r12
    fsubs f2, f2, f5
    stw r10, 0xa4(r1)
    fdivs f4, f3, f4
    lfd f7, 0xa0(r1)
    stw r10, 0xa4(r1)
    lfd f5, 0xa0(r1)
    stw r8, 0xa4(r1)
    lfd f3, 0xa0(r1)
    fmuls f1, f2, f1
    fsubs f7, f7, f8
    fsubs f2, f5, f8
    fdivs f0, f0, f1
    stfsx f7, r9, r11
    stfsx f7, r31, r11
    stfsx f6, r7, r12
    stfsx f6, r31, r12
    fadds f2, f2, f4
    fsubs f1, f3, f8
    stfsx f2, r7, r11
    stfsx f2, r5, r11
    fadds f0, f1, f0
    stfsx f0, r9, r12
    stfsx f0, r5, r12
    bl fn_805CDDD0
    cmpwi r29, 0x0
    mr r6, r31
    addi r3, r1, 0x68
    addi r4, r1, 0x60
    li r5, 0x1
    li r7, 0x0
    beq lbl_fn_805D6730_00001ABC
    addi r7, r1, 0x70
lbl_fn_805D6730_00001ABC:
    mr r8, r28
    bl fn_805CE420
    lwz r3, 0xc(r26)
    mr r4, r30
    mr r5, r28
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lfs f2, 0x0(r25)
    mr r29, r3
    lfs f0, 0x4c(r24)
    addi r3, r1, 0x50
    lfs f3, 0x4(r25)
    li r5, 0x0
    fadds f2, f2, f0
    lfs f1, 0x4(r27)
    stfs f3, 0x6c(r1)
    lfs f0, 0xc(r27)
    fsubs f2, f2, f1
    stfs f1, 0x60(r1)
    lbz r31, 0x8(r26)
    stfs f2, 0x68(r1)
    lwz r4, 0xc(r26)
    lfs f1, 0x50(r24)
    stfs f2, 0x30(r1)
    fsubs f0, f1, f0
    stfs f3, 0x34(r1)
    stfs f0, 0x64(r1)
    bl fn_805D2A40
    mulli r0, r31, 0xa
    lis r4, lbl_807992D8@ha
    lis r3, lbl_807645D8@ha
    lfs f2, 0x54(r1)
    addi r4, r4, lbl_807992D8@l
    lfs f3, 0x50(r1)
    add r12, r4, r0
    lis r10, lbl_807645D0@ha
    lbz r4, 0x9(r12)
    addi r6, r1, 0x28
    lbz r8, 0x8(r12)
    addi r9, r1, 0x98
    add r5, r12, r4
    lfd f5, lbl_807645D8@l(r3)
    lbz r7, 0x2(r5)
    add r3, r12, r8
    lbz r11, 0x2(r3)
    slwi r23, r4, 2
    stw r7, 0xac(r1)
    slwi r0, r8, 2
    lbzx r3, r12, r8
    addi r8, r1, 0x88
    lfd f1, 0xa8(r1)
    addi r31, r1, 0x80
    subf r4, r11, r3
    lbz r3, 0x6(r5)
    xoris r4, r4, 0x8000
    stw r4, 0xac(r1)
    subf r3, r7, r3
    lfd f8, lbl_807645D0@l(r10)
    lfd f0, 0xa8(r1)
    xoris r3, r3, 0x8000
    stfs f3, 0x28(r1)
    fsubs f6, f1, f8
    fsubs f4, f0, f5
    lfs f3, 0x60(r1)
    stfs f2, 0x2c(r1)
    addi r5, r1, 0x90
    lfs f0, 0x64(r1)
    stw r3, 0xac(r1)
    lfsx f1, r6, r0
    mr r3, r29
    lfd f2, 0xa8(r1)
    li r4, 0x1
    fmuls f4, f4, f1
    lfsx f1, r6, r23
    fsubs f2, f2, f5
    stw r11, 0xa4(r1)
    fdivs f4, f3, f4
    lfd f7, 0xa0(r1)
    stw r11, 0xa4(r1)
    lfd f5, 0xa0(r1)
    stw r7, 0xa4(r1)
    lfd f3, 0xa0(r1)
    fmuls f1, f2, f1
    fsubs f7, f7, f8
    fsubs f2, f5, f8
    fdivs f0, f0, f1
    stfsx f7, r9, r0
    stfsx f7, r8, r0
    stfsx f6, r31, r23
    stfsx f6, r8, r23
    fadds f2, f2, f4
    fsubs f1, f3, f8
    stfsx f2, r31, r0
    stfsx f2, r5, r0
    fadds f0, f1, f0
    stfsx f0, r9, r23
    stfsx f0, r5, r23
    bl fn_805CDDD0
    cmpwi r29, 0x0
    mr r6, r31
    addi r3, r1, 0x68
    addi r4, r1, 0x60
    li r5, 0x1
    li r7, 0x0
    beq lbl_fn_805D6730_00001C6C
    addi r7, r1, 0x70
lbl_fn_805D6730_00001C6C:
    mr r8, r28
    bl fn_805CE420
    lwz r3, 0x1c(r26)
    mr r4, r30
    mr r5, r28
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lfs f1, 0x4(r25)
    mr r29, r3
    lfs f0, 0x50(r24)
    addi r3, r1, 0x48
    lfs f2, 0xc(r27)
    li r5, 0x0
    fadds f3, f1, f0
    lfs f0, 0x0(r25)
    lfs f1, 0x0(r27)
    lbz r31, 0x18(r26)
    fsubs f3, f3, f2
    lwz r4, 0x1c(r26)
    fadds f4, f0, f1
    stfs f3, 0x6c(r1)
    stfs f4, 0x68(r1)
    lfs f0, 0x4c(r24)
    stfs f4, 0x20(r1)
    fsubs f0, f0, f1
    stfs f3, 0x24(r1)
    stfs f0, 0x60(r1)
    stfs f2, 0x64(r1)
    bl fn_805D2A40
    mulli r0, r31, 0xa
    lis r4, lbl_807992D8@ha
    lis r3, lbl_807645D8@ha
    lfs f2, 0x4c(r1)
    addi r4, r4, lbl_807992D8@l
    lfs f3, 0x48(r1)
    add r7, r4, r0
    lis r10, lbl_807645D0@ha
    lbz r0, 0x9(r7)
    addi r5, r1, 0x18
    lbz r6, 0x8(r7)
    addi r9, r1, 0x88
    lfd f5, lbl_807645D8@l(r3)
    add r4, r7, r0
    add r3, r7, r6
    lbz r7, 0x6(r4)
    stw r7, 0xac(r1)
    slwi r23, r0, 2
    lbz r11, 0x6(r3)
    slwi r12, r6, 2
    lbz r0, 0x4(r3)
    addi r8, r1, 0x98
    lfd f1, 0xa8(r1)
    addi r6, r1, 0x90
    subf r3, r11, r0
    lbz r0, 0x2(r4)
    xoris r3, r3, 0x8000
    stw r3, 0xac(r1)
    subf r0, r7, r0
    lfd f8, lbl_807645D0@l(r10)
    lfd f0, 0xa8(r1)
    xoris r0, r0, 0x8000
    stfs f3, 0x18(r1)
    fsubs f6, f1, f8
    fsubs f4, f0, f5
    lfs f3, 0x60(r1)
    stfs f2, 0x1c(r1)
    addi r31, r1, 0x80
    lfs f0, 0x64(r1)
    stw r0, 0xac(r1)
    lfsx f1, r5, r12
    mr r3, r29
    lfd f2, 0xa8(r1)
    li r4, 0x1
    fmuls f4, f4, f1
    lfsx f1, r5, r23
    fsubs f2, f2, f5
    stw r11, 0xa4(r1)
    fdivs f4, f3, f4
    lfd f7, 0xa0(r1)
    stw r11, 0xa4(r1)
    lfd f5, 0xa0(r1)
    stw r7, 0xa4(r1)
    lfd f3, 0xa0(r1)
    fmuls f1, f2, f1
    fsubs f7, f7, f8
    fsubs f2, f5, f8
    fdivs f0, f0, f1
    stfsx f7, r9, r12
    stfsx f7, r8, r12
    stfsx f6, r6, r23
    stfsx f6, r8, r23
    fadds f2, f2, f4
    fsubs f1, f3, f8
    stfsx f2, r6, r12
    stfsx f2, r31, r12
    fadds f0, f1, f0
    stfsx f0, r9, r23
    stfsx f0, r31, r23
    bl fn_805CDDD0
    cmpwi r29, 0x0
    mr r6, r31
    addi r3, r1, 0x68
    addi r4, r1, 0x60
    li r5, 0x1
    li r7, 0x0
    beq lbl_fn_805D6730_00001E20
    addi r7, r1, 0x70
lbl_fn_805D6730_00001E20:
    mr r8, r28
    bl fn_805CE420
    lwz r3, 0x14(r26)
    mr r4, r30
    mr r5, r28
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lfs f0, 0x4(r25)
    mr r29, r3
    lfs f1, 0x8(r27)
    addi r3, r1, 0x40
    lfs f3, 0x0(r25)
    li r5, 0x0
    fadds f2, f0, f1
    lfs f0, 0x0(r27)
    stfs f3, 0x68(r1)
    lbz r25, 0x10(r26)
    stfs f2, 0x6c(r1)
    lwz r4, 0x14(r26)
    stfs f0, 0x60(r1)
    lfs f0, 0x50(r24)
    stfs f3, 0x10(r1)
    fsubs f0, f0, f1
    stfs f2, 0x14(r1)
    stfs f0, 0x64(r1)
    bl fn_805D2A40
    mulli r0, r25, 0xa
    lis r3, lbl_807992D8@ha
    lis r5, lbl_807645D0@ha
    lfs f1, 0x44(r1)
    addi r3, r3, lbl_807992D8@l
    lfd f8, lbl_807645D0@l(r5)
    add r10, r3, r0
    lis r4, lbl_807645D8@ha
    lbz r7, 0x9(r10)
    addi r6, r1, 0x8
    lbz r9, 0x8(r10)
    addi r24, r1, 0x80
    add r3, r10, r7
    lfs f2, 0x40(r1)
    lbz r8, 0x4(r3)
    add r3, r10, r9
    lbzx r0, r10, r7
    slwi r11, r9, 2
    lbz r10, 0x4(r3)
    slwi r12, r7, 2
    stw r8, 0xac(r1)
    subf r0, r8, r0
    lbz r3, 0x6(r3)
    xoris r0, r0, 0x8000
    lfd f0, 0xa8(r1)
    addi r9, r1, 0x90
    subf r3, r10, r3
    lfd f5, lbl_807645D8@l(r4)
    xoris r3, r3, 0x8000
    stw r3, 0xac(r1)
    fsubs f6, f0, f8
    lfs f3, 0x60(r1)
    lfd f0, 0xa8(r1)
    addi r7, r1, 0x98
    stfs f2, 0x8(r1)
    addi r5, r1, 0x88
    stfs f1, 0xc(r1)
    fsubs f2, f0, f5
    mr r3, r29
    li r4, 0x1
    stw r0, 0xac(r1)
    lfsx f1, r6, r11
    lfd f0, 0xa8(r1)
    fmuls f4, f2, f1
    lfsx f1, r6, r12
    fsubs f2, f0, f5
    lfs f0, 0x64(r1)
    stw r10, 0xa4(r1)
    fdivs f4, f3, f4
    lfd f7, 0xa0(r1)
    stw r10, 0xa4(r1)
    lfd f5, 0xa0(r1)
    stw r8, 0xa4(r1)
    lfd f3, 0xa0(r1)
    fmuls f1, f2, f1
    fsubs f7, f7, f8
    fsubs f2, f5, f8
    fdivs f0, f0, f1
    stfsx f7, r24, r11
    stfsx f7, r9, r11
    stfsx f6, r7, r12
    stfsx f6, r9, r12
    fadds f2, f2, f4
    fsubs f1, f3, f8
    stfsx f2, r7, r11
    stfsx f2, r5, r11
    fadds f0, f1, f0
    stfsx f0, r24, r12
    stfsx f0, r5, r12
    bl fn_805CDDD0
    cmpwi r29, 0x0
    mr r6, r24
    addi r3, r1, 0x68
    addi r4, r1, 0x60
    li r5, 0x1
    li r7, 0x0
    beq lbl_fn_805D6730_00001FC8
    addi r7, r1, 0x70
lbl_fn_805D6730_00001FC8:
    mr r8, r28
    bl fn_805CE420
    addi r11, r1, 0xe0
    bl _restgpr_23
    lwz r0, 0xe4(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}
