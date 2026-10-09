#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_14(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_14(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_805CD450(void);
extern void fn_805CD940(void);
extern void fn_805CD9B0(void);
extern void fn_805CD9E0(void);
extern void fn_805CDA80(void);
extern void fn_805CDAA0(void);
extern void fn_805CDAF0(void);
extern void fn_805CDB80(void);
extern void fn_805CDC80(void);
extern void fn_805CDD20(void);
extern void fn_805CDD90(void);
extern void fn_805CDDD0(void);
extern void fn_805CE420(void);
extern void fn_805CE550(void);
extern void fn_805CE6F0(void);
extern void fn_805CFC10(void);
extern void fn_805CFC20(void);
extern void fn_805D1520(void);
extern void fn_805D15A0(void);
extern void fn_805D1630(void);
extern void fn_805D1820(void);
extern void fn_805D2A40(void);
extern void fn_805D2B50(void);
extern void fn_805D2C70(void);
extern void fn_805D4E70(void);
extern void fn_805D5510(void);
extern void fn_805D8500(void);
extern void fn_805D8520(void);
extern void fn_805D8E70(void);
extern void fn_805D8EC0(void);
extern void fn_805D9010(void);
extern void fn_805D91B0(void);
extern void fn_805D9530(void);
extern void fn_805D9540(void);
extern void fn_805D9C70(void);
extern void fn_805D9CC0(void);
extern void fn_805D9E60(void);
extern void fn_805D9F00(void);
extern void fn_805DDC30(void);
extern void fn_805DDC90(void);
extern void fn_805DDE20(void);
extern void fn_805DDE30(void);
extern void fn_805DDEA0(void);
extern void fn_805DF170(void);
extern void fn_805DF2D0(void);
extern void fn_805F89B0(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F9110(void);
extern void fn_805F9160(void);
extern void fn_80618350(void);
extern void fn_80618400(void);
extern void fn_8061A0F0(void);
extern void fn_8061A100(void);
extern void fn_806958E0(void);
extern void fn_806959D8(void);

/* External data declarations */
extern u8 lbl_80764588[];
extern u8 lbl_80764590[];
extern u8 lbl_807645A8[];
extern u8 lbl_807645B0[];
extern u8 lbl_80799170[];
extern u8 lbl_80799210[];
extern u8 lbl_80799228[];
extern u8 lbl_8079922C[];
extern u8 lbl_807CA1F8[];
extern u8 lbl_807CA200[];
extern u8 lbl_807CA208[];

/* Small data declarations */

/* Function declarations */
void fn_805D2F60(void);
void fn_805D2F70(void);
void fn_805D2F80(void);
void fn_805D2FA0(void);
void fn_805D2FB0(void);
void fn_805D2FD0(void);
void fn_805D2FE0(void);
void fn_805D2FF0(void);
void fn_805D3000(void);
void fn_805D30B0(void);
void fn_805D3170(void);
void fn_805D3470(void);
void fn_805D3500(void);
void fn_805D3650(void);
void fn_805D36E0(void);
void fn_805D37A0(void);
void fn_805D37C0(void);
void fn_805D3850(void);
void fn_805D3870(void);
void fn_805D3910(void);
void fn_805D3950(void);
void fn_805D39D0(void);
void fn_805D3A90(void);
void fn_805D3BA0(void);
void fn_805D3C80(void);
void fn_805D3C90(void);
void fn_805D3CA0(void);
void fn_805D3DD0(void);
void fn_805D3EA0(void);
void fn_805D3EF0(void);
void fn_805D4060(void);
void fn_805D4080(void);
void fn_805D40B0(void);
void fn_805D40D0(void);
void fn_805D40F0(void);
void fn_805D41D0(void);
void fn_805D41E0(void);
void fn_805D4200(void);
void fn_805D4240(void);
void fn_805D4250(void);
void fn_805D4260(void);
void fn_805D4520(void);
void fn_805D46B0(void);
void fn_805D46D0(void);
void fn_805D4710(void);
void fn_805D4730(void);
void fn_805D4750(void);

asm void fn_805D2F60(void)
{
    nofralloc
    li r0, -0x1
    stw r0, 0x0(r3)
    blr
}

asm void fn_805D2F70(void)
{
    nofralloc
    blr
}

asm void fn_805D2F80(void)
{
    nofralloc
    cmplwi r4, 0x10
    bne lbl_fn_805D2F80_00000030
    lbz r3, 0xcd(r3)
    blr
lbl_fn_805D2F80_00000030:
    lwz r12, 0x0(r3)
    lwz r12, 0x34(r12)
    mtctr r12
    bctr
}

asm void fn_805D2FA0(void)
{
    nofralloc
    blr
}

asm void fn_805D2FB0(void)
{
    nofralloc
    cmplwi r4, 0x10
    bne lbl_fn_805D2FB0_00000060
    stb r5, 0xcd(r3)
    blr
lbl_fn_805D2FB0_00000060:
    lwz r12, 0x0(r3)
    lwz r12, 0x38(r12)
    mtctr r12
    bctr
}

asm void fn_805D2FD0(void)
{
    nofralloc
    blr
}

asm void fn_805D2FE0(void)
{
    nofralloc
    li r3, 0xff
    blr
}

asm void fn_805D2FF0(void)
{
    nofralloc
    blr
}

asm void fn_805D3000(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    addi r3, r3, 0xb4
    bl fn_805CD9B0
    cmpwi r3, 0x0
    beq lbl_fn_805D3000_000000E0
    mr r3, r28
    b lbl_fn_805D3000_0000012C
lbl_fn_805D3000_000000E0:
    cmpwi r30, 0x0
    beq lbl_fn_805D3000_00000128
    lwz r31, 0x14(r28)
    addi r30, r28, 0x14
    b lbl_fn_805D3000_00000120
lbl_fn_805D3000_000000F4:
    lwz r12, -0x4(r31)
    subi r3, r31, 0x4
    mr r4, r29
    li r5, 0x1
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_805D3000_0000011C
    b lbl_fn_805D3000_0000012C
lbl_fn_805D3000_0000011C:
    lwz r31, 0x0(r31)
lbl_fn_805D3000_00000120:
    cmplw r31, r30
    bne lbl_fn_805D3000_000000F4
lbl_fn_805D3000_00000128:
    li r3, 0x0
lbl_fn_805D3000_0000012C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805D30B0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r6, 0x28(r3)
    cmpwi r6, 0x0
    beq lbl_fn_805D30B0_0000019C
    addi r3, r6, 0x4
    bl fn_805CD9E0
    cmpwi r3, 0x0
    beq lbl_fn_805D30B0_0000019C
    lwz r3, 0x28(r28)
    b lbl_fn_805D30B0_000001E8
lbl_fn_805D30B0_0000019C:
    cmpwi r30, 0x0
    beq lbl_fn_805D30B0_000001E4
    lwz r31, 0x14(r28)
    addi r30, r28, 0x14
    b lbl_fn_805D30B0_000001DC
lbl_fn_805D30B0_000001B0:
    lwz r12, -0x4(r31)
    subi r3, r31, 0x4
    mr r4, r29
    li r5, 0x1
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_805D30B0_000001D8
    b lbl_fn_805D30B0_000001E8
lbl_fn_805D30B0_000001D8:
    lwz r31, 0x0(r31)
lbl_fn_805D30B0_000001DC:
    cmplw r31, r30
    bne lbl_fn_805D30B0_000001B0
lbl_fn_805D30B0_000001E4:
    li r3, 0x0
lbl_fn_805D30B0_000001E8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805D3170(void)
{
    nofralloc
    stwu r1, -0xe0(r1)
    mflr r0
    stw r0, 0xe4(r1)
    addi r11, r1, 0xd0
    stfd f31, 0xd0(r1)
    psq_st f31, 0xd8(r1), 0, 0
    bl _savegpr_27
    lbz r6, 0xcf(r3)
    lis r31, lbl_80764588@ha
    mr r29, r3
    mr r30, r4
    clrlwi. r0, r6, 31
    addi r31, r31, lbl_80764588@l
    bne lbl_fn_805D3170_00000254
    lbz r0, 0x50(r4)
    extrwi. r0, r0, 1, 27
    beq lbl_fn_805D3170_000004F0
lbl_fn_805D3170_00000254:
    lbz r0, 0x50(r4)
    lwz r5, 0x44(r3)
    extrwi. r0, r0, 1, 26
    lwz r0, 0x48(r3)
    stw r5, 0x8(r1)
    stw r0, 0xc(r1)
    beq lbl_fn_805D3170_00000298
    rlwinm. r0, r6, 0, 29, 29
    beq lbl_fn_805D3170_00000298
    lfs f3, 0x8(r1)
    lfs f2, 0x44(r4)
    lfs f1, 0xc(r1)
    lfs f0, 0x48(r4)
    fmuls f2, f3, f2
    fmuls f0, f1, f0
    stfs f2, 0x8(r1)
    stfs f0, 0xc(r1)
lbl_fn_805D3170_00000298:
    lfs f1, 0x8(r1)
    addi r3, r1, 0x40
    lfs f2, 0xc(r1)
    lfs f3, 0x4(r31)
    bl fn_805F9160
    lfs f1, 0x10(r31)
    addi r3, r1, 0x10
    lfs f0, 0x38(r29)
    li r4, 0x78
    fmuls f1, f1, f0
    bl fn_805F8E70
    addi r3, r1, 0x10
    addi r4, r1, 0x40
    addi r5, r1, 0x70
    bl fn_805F89F0
    lfs f1, 0x10(r31)
    addi r3, r1, 0x10
    lfs f0, 0x3c(r29)
    li r4, 0x79
    fmuls f1, f1, f0
    bl fn_805F8E70
    addi r3, r1, 0x10
    addi r4, r1, 0x70
    addi r5, r1, 0x40
    bl fn_805F89F0
    lfs f1, 0x10(r31)
    addi r3, r1, 0x10
    lfs f0, 0x40(r29)
    li r4, 0x7a
    fmuls f1, f1, f0
    bl fn_805F8E70
    addi r3, r1, 0x10
    addi r4, r1, 0x40
    addi r5, r1, 0x70
    bl fn_805F89F0
    lfs f1, 0x2c(r29)
    addi r3, r1, 0x70
    lfs f2, 0x30(r29)
    addi r4, r29, 0x54
    lfs f3, 0x34(r29)
    bl fn_805F9110
    lwz r3, 0xc(r29)
    cmpwi r3, 0x0
    beq lbl_fn_805D3170_0000035C
    addi r3, r3, 0x84
    addi r4, r29, 0x54
    addi r5, r29, 0x84
    bl fn_805F89F0
    b lbl_fn_805D3170_000003DC
lbl_fn_805D3170_0000035C:
    lbz r0, 0x50(r30)
    extrwi. r0, r0, 1, 24
    beq lbl_fn_805D3170_000003CC
    lwz r27, 0x54(r29)
    lwz r12, 0x58(r29)
    lwz r11, 0x5c(r29)
    lwz r10, 0x60(r29)
    lwz r9, 0x64(r29)
    lwz r8, 0x68(r29)
    lwz r7, 0x6c(r29)
    lwz r6, 0x70(r29)
    lwz r5, 0x74(r29)
    lwz r4, 0x78(r29)
    lwz r3, 0x7c(r29)
    lwz r0, 0x80(r29)
    stw r27, 0x84(r29)
    stw r12, 0x88(r29)
    stw r11, 0x8c(r29)
    stw r10, 0x90(r29)
    stw r9, 0x94(r29)
    stw r8, 0x98(r29)
    stw r7, 0x9c(r29)
    stw r6, 0xa0(r29)
    stw r5, 0xa4(r29)
    stw r4, 0xa8(r29)
    stw r3, 0xac(r29)
    stw r0, 0xb0(r29)
    b lbl_fn_805D3170_000003DC
lbl_fn_805D3170_000003CC:
    addi r3, r30, 0x4
    addi r4, r29, 0x54
    addi r5, r29, 0x84
    bl fn_805F89F0
lbl_fn_805D3170_000003DC:
    lbz r0, 0x50(r30)
    extrwi. r0, r0, 1, 25
    beq lbl_fn_805D3170_0000042C
    lwz r0, 0xc(r29)
    cmpwi r0, 0x0
    beq lbl_fn_805D3170_0000042C
    lbz r3, 0xcd(r29)
    lis r0, 0x4330
    stw r3, 0xa4(r1)
    lfd f1, 0x18(r31)
    stw r0, 0xa0(r1)
    lfs f2, 0x4c(r30)
    lfd f0, 0xa0(r1)
    fsubs f0, f0, f1
    fmuls f0, f0, f2
    fctiwz f0, f0
    stfd f0, 0xa8(r1)
    lwz r0, 0xac(r1)
    stb r0, 0xce(r29)
    b lbl_fn_805D3170_00000434
lbl_fn_805D3170_0000042C:
    lbz r0, 0xcd(r29)
    stb r0, 0xce(r29)
lbl_fn_805D3170_00000434:
    lbz r0, 0xcf(r29)
    li r28, 0x0
    lbz r3, 0x50(r30)
    rlwinm. r0, r0, 0, 30, 30
    lfs f31, 0x4c(r30)
    extrwi r3, r3, 1, 25
    neg r0, r3
    or r0, r0, r3
    srwi r27, r0, 31
    beq lbl_fn_805D3170_0000046C
    lbz r0, 0xcd(r29)
    cmplwi r0, 0xff
    beq lbl_fn_805D3170_0000046C
    li r28, 0x1
lbl_fn_805D3170_0000046C:
    cmpwi r28, 0x0
    beq lbl_fn_805D3170_000004AC
    lbz r0, 0xcd(r29)
    lis r3, 0x4330
    stw r0, 0xac(r1)
    lbz r0, 0x50(r30)
    stw r3, 0xa8(r1)
    lfd f2, 0x18(r31)
    ori r0, r0, 0x40
    lfd f1, 0xa8(r1)
    lfs f0, 0x14(r31)
    fsubs f1, f1, f2
    stb r0, 0x50(r30)
    fmuls f1, f31, f1
    fmuls f0, f0, f1
    stfs f0, 0x4c(r30)
lbl_fn_805D3170_000004AC:
    lwzu r31, 0x14(r29)
    b lbl_fn_805D3170_000004D0
lbl_fn_805D3170_000004B4:
    lwz r12, -0x4(r31)
    subi r3, r31, 0x4
    mr r4, r30
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    lwz r31, 0x0(r31)
lbl_fn_805D3170_000004D0:
    cmplw r31, r29
    bne lbl_fn_805D3170_000004B4
    cmpwi r28, 0x0
    beq lbl_fn_805D3170_000004F0
    lbz r0, 0x50(r30)
    rlwimi r0, r27, 6, 25, 25
    stfs f31, 0x4c(r30)
    stb r0, 0x50(r30)
lbl_fn_805D3170_000004F0:
    addi r11, r1, 0xd0
    psq_l f31, 0xd8(r1), 0, 0
    lfd f31, 0xd0(r1)
    bl _restgpr_27
    lwz r0, 0xe4(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}

asm void fn_805D3470(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    mr r29, r4
    lbz r0, 0xcf(r3)
    clrlwi. r0, r0, 31
    beq lbl_fn_805D3470_00000578
    lwz r12, 0x0(r3)
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    lwzu r31, 0x14(r30)
    b lbl_fn_805D3470_00000570
lbl_fn_805D3470_00000554:
    lwz r12, -0x4(r31)
    subi r3, r31, 0x4
    mr r4, r29
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    lwz r31, 0x0(r31)
lbl_fn_805D3470_00000570:
    cmplw r31, r30
    bne lbl_fn_805D3470_00000554
lbl_fn_805D3470_00000578:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805D3500(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    lwz r0, 0xc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805D3500_000006D4
    lbz r0, 0x50(r4)
    extrwi. r0, r0, 1, 28
    beq lbl_fn_805D3500_000006D4
    lwz r12, 0x0(r3)
    lwz r12, 0x60(r12)
    mtctr r12
    bctrl
    lis r4, 0xff
    lis r3, 0x5555
    addi r0, r4, 0xff
    stw r0, 0x8(r1)
    lis r4, lbl_80764588@ha
    lbz r5, 0xcc(r31)
    addi r0, r3, 0x5556
    lfs f0, lbl_80764588@l(r4)
    mulhw r3, r0, r5
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    srwi r0, r3, 31
    add r0, r3, r0
    mulli r0, r0, 0x3
    subf r0, r0, r5
    cmpwi r0, 0x1
    beq lbl_fn_805D3500_00000630
    cmpwi r0, 0x2
    beq lbl_fn_805D3500_0000064C
    stfs f0, 0x10(r1)
    b lbl_fn_805D3500_00000658
lbl_fn_805D3500_00000630:
    lfs f1, 0x4c(r31)
    lis r3, lbl_80764590@ha
    lfs f0, lbl_80764590@l(r3)
    fneg f1, f1
    fmuls f0, f1, f0
    stfs f0, 0x10(r1)
    b lbl_fn_805D3500_00000658
lbl_fn_805D3500_0000064C:
    lfs f0, 0x4c(r31)
    fneg f0, f0
    stfs f0, 0x10(r1)
lbl_fn_805D3500_00000658:
    lis r3, 0x5555
    addi r0, r3, 0x5556
    mulhw r3, r0, r5
    srwi r0, r3, 31
    add r0, r3, r0
    cmpwi r0, 0x1
    beq lbl_fn_805D3500_0000068C
    cmpwi r0, 0x2
    beq lbl_fn_805D3500_000006A8
    lis r3, lbl_80764588@ha
    lfs f0, lbl_80764588@l(r3)
    stfs f0, 0x14(r1)
    b lbl_fn_805D3500_000006B4
lbl_fn_805D3500_0000068C:
    lfs f1, 0x50(r31)
    lis r3, lbl_80764590@ha
    lfs f0, lbl_80764590@l(r3)
    fneg f1, f1
    fmuls f0, f1, f0
    stfs f0, 0x14(r1)
    b lbl_fn_805D3500_000006B4
lbl_fn_805D3500_000006A8:
    lfs f0, 0x50(r31)
    fneg f0, f0
    stfs f0, 0x14(r1)
lbl_fn_805D3500_000006B4:
    lwz r5, 0x10(r1)
    addi r3, r1, 0x18
    lwz r0, 0x14(r1)
    addi r4, r31, 0x4c
    stw r5, 0x18(r1)
    addi r5, r1, 0x8
    stw r0, 0x1c(r1)
    bl fn_805CE550
lbl_fn_805D3500_000006D4:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_805D3650(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    mr r29, r4
    lwz r12, 0x0(r3)
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    lbz r0, 0xcf(r30)
    clrlwi. r0, r0, 31
    bne lbl_fn_805D3650_00000734
    clrlwi. r0, r29, 31
    bne lbl_fn_805D3650_00000760
lbl_fn_805D3650_00000734:
    lwzu r31, 0x14(r30)
    b lbl_fn_805D3650_00000758
lbl_fn_805D3650_0000073C:
    lwz r12, -0x4(r31)
    subi r3, r31, 0x4
    mr r4, r29
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    lwz r31, 0x0(r31)
lbl_fn_805D3650_00000758:
    cmplw r31, r30
    bne lbl_fn_805D3650_0000073C
lbl_fn_805D3650_00000760:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805D36E0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    addi r30, r3, 0x20
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r31, 0x20(r3)
    b lbl_fn_805D36E0_000007DC
lbl_fn_805D36E0_000007B0:
    lbz r0, 0xe(r31)
    cmpwi r0, 0x0
    bne lbl_fn_805D36E0_000007D8
    lwz r3, 0x8(r31)
    mr r5, r28
    lhz r4, 0xc(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
lbl_fn_805D36E0_000007D8:
    lwz r31, 0x0(r31)
lbl_fn_805D36E0_000007DC:
    cmplw r31, r30
    bne lbl_fn_805D36E0_000007B0
    lbz r0, 0xcf(r28)
    clrlwi. r0, r0, 31
    bne lbl_fn_805D36E0_000007F8
    clrlwi. r0, r29, 31
    bne lbl_fn_805D36E0_00000814
lbl_fn_805D36E0_000007F8:
    lwz r3, 0x28(r28)
    cmpwi r3, 0x0
    beq lbl_fn_805D36E0_00000814
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_805D36E0_00000814:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805D37A0(void)
{
    nofralloc
    lwz r12, 0x0(r4)
    mr r0, r3
    mr r3, r4
    lwz r12, 0x10(r12)
    mr r4, r0
    mtctr r12
    bctr
}

asm void fn_805D37C0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    mr r29, r5
    stw r28, 0x10(r1)
    mr r28, r4
    lwz r12, 0x0(r3)
    lwz r12, 0x50(r12)
    mtctr r12
    bctrl
    cmpwi r29, 0x0
    beq lbl_fn_805D37C0_000008D0
    lwzu r31, 0x14(r30)
    b lbl_fn_805D37C0_000008C8
lbl_fn_805D37C0_000008A8:
    lwz r12, -0x4(r31)
    subi r3, r31, 0x4
    mr r4, r28
    mr r5, r29
    lwz r12, 0x48(r12)
    mtctr r12
    bctrl
    lwz r31, 0x0(r31)
lbl_fn_805D37C0_000008C8:
    cmplw r31, r30
    bne lbl_fn_805D37C0_000008A8
lbl_fn_805D37C0_000008D0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805D3850(void)
{
    nofralloc
    lwz r12, 0x0(r3)
    mr r5, r4
    li r4, 0x0
    lwz r12, 0x48(r12)
    mtctr r12
    bctr
}

asm void fn_805D3870(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    lwz r0, 0x28(r3)
    mr r26, r3
    mr r27, r4
    cmpwi r0, 0x0
    beq lbl_fn_805D3870_0000094C
    mr r3, r0
    lwz r12, 0x0(r3)
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
lbl_fn_805D3870_0000094C:
    lwz r31, 0x20(r26)
    addi r30, r26, 0x20
    li r29, 0x0
    b lbl_fn_805D3870_00000990
lbl_fn_805D3870_0000095C:
    cmpwi r27, 0x0
    mr r28, r31
    lwz r31, 0x0(r31)
    beq lbl_fn_805D3870_00000978
    lwz r0, 0x8(r28)
    cmplw r0, r27
    bne lbl_fn_805D3870_00000990
lbl_fn_805D3870_00000978:
    stw r28, 0x8(r1)
    addi r3, r26, 0x1c
    addi r4, r1, 0x8
    bl fn_805D9C70
    stw r29, 0x8(r28)
    sth r29, 0xc(r28)
lbl_fn_805D3870_00000990:
    cmplw r31, r30
    bne lbl_fn_805D3870_0000095C
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_805D3910(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    mr r5, r4
    stw r0, 0x14(r1)
    addi r0, r3, 0x20
    addi r3, r3, 0x1c
    addi r4, r1, 0x8
    stw r0, 0x8(r1)
    bl fn_805D9CC0
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805D3950(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    addi r3, r3, 0x1c
    bl fn_805CD450
    cmpwi r3, 0x0
    beq lbl_fn_805D3950_00000A20
    b lbl_fn_805D3950_00000A50
lbl_fn_805D3950_00000A20:
    lwz r3, 0x28(r30)
    cmpwi r3, 0x0
    beq lbl_fn_805D3950_00000A4C
    lwz r12, 0x0(r3)
    mr r4, r31
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_805D3950_00000A4C
    b lbl_fn_805D3950_00000A50
lbl_fn_805D3950_00000A4C:
    li r3, 0x0
lbl_fn_805D3950_00000A50:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805D39D0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r30, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    addi r3, r3, 0x1c
    bl fn_805CD450
    cmpwi r3, 0x0
    beq lbl_fn_805D39D0_00000AB0
    cntlzw r0, r28
    srwi r0, r0, 5
    stb r0, 0xe(r3)
lbl_fn_805D39D0_00000AB0:
    lwz r3, 0x28(r30)
    cmpwi r3, 0x0
    beq lbl_fn_805D39D0_00000AD4
    lwz r12, 0x0(r3)
    mr r4, r27
    mr r5, r28
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
lbl_fn_805D39D0_00000AD4:
    cmpwi r29, 0x0
    beq lbl_fn_805D39D0_00000B10
    lwzu r31, 0x14(r30)
    b lbl_fn_805D39D0_00000B08
lbl_fn_805D39D0_00000AE4:
    lwz r12, -0x4(r31)
    subi r3, r31, 0x4
    mr r4, r27
    mr r5, r28
    lwz r12, 0x58(r12)
    mr r6, r29
    mtctr r12
    bctrl
    lwz r31, 0x0(r31)
lbl_fn_805D39D0_00000B08:
    cmplw r31, r30
    bne lbl_fn_805D39D0_00000AE4
lbl_fn_805D39D0_00000B10:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805D3A90(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    mr r5, r3
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r4
    lbz r0, 0x50(r4)
    extrwi. r0, r0, 1, 24
    beq lbl_fn_805D3A90_00000BB4
    addi r3, r4, 0x4
    addi r4, r5, 0x84
    addi r5, r1, 0x8
    bl fn_805F89F0
    lfs f2, 0x40(r31)
    lis r3, lbl_80764588@ha
    lfs f1, 0x38(r31)
    lfs f0, lbl_80764588@l(r3)
    fsubs f1, f2, f1
    fcmpo cr0, f1, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_805D3A90_00000BAC
    lfs f2, 0xc(r1)
    lfs f1, 0x1c(r1)
    lfs f0, 0x2c(r1)
    fneg f2, f2
    fneg f1, f1
    fneg f0, f0
    stfs f2, 0xc(r1)
    stfs f1, 0x1c(r1)
    stfs f0, 0x2c(r1)
lbl_fn_805D3A90_00000BAC:
    addi r3, r1, 0x8
    b lbl_fn_805D3A90_00000C14
lbl_fn_805D3A90_00000BB4:
    lfs f2, 0x40(r4)
    lis r5, lbl_80764588@ha
    lfs f1, 0x38(r4)
    lfs f0, lbl_80764588@l(r5)
    fsubs f1, f2, f1
    fcmpo cr0, f1, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_805D3A90_00000C10
    addi r3, r3, 0x84
    addi r4, r1, 0x8
    bl fn_805F89B0
    lfs f2, 0xc(r1)
    addi r3, r1, 0x8
    lfs f1, 0x1c(r1)
    lfs f0, 0x2c(r1)
    fneg f2, f2
    fneg f1, f1
    fneg f0, f0
    stfs f2, 0xc(r1)
    stfs f1, 0x1c(r1)
    stfs f0, 0x2c(r1)
    b lbl_fn_805D3A90_00000C14
lbl_fn_805D3A90_00000C10:
    addi r3, r3, 0x84
lbl_fn_805D3A90_00000C14:
    li r4, 0x0
    bl fn_80618350
    li r3, 0x0
    bl fn_80618400
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_805D3BA0(void)
{
    nofralloc
    lis r4, 0x5555
    lbz r6, 0xcc(r3)
    addi r0, r4, 0x5556
    lis r5, lbl_80764588@ha
    mulhw r4, r0, r6
    stwu r1, -0x10(r1)
    lfs f0, lbl_80764588@l(r5)
    stfs f0, 0x8(r1)
    stfs f0, 0xc(r1)
    srwi r0, r4, 31
    add r0, r4, r0
    mulli r0, r0, 0x3
    subf r0, r0, r6
    cmpwi r0, 0x1
    beq lbl_fn_805D3BA0_00000C8C
    cmpwi r0, 0x2
    beq lbl_fn_805D3BA0_00000CA8
    stfs f0, 0x8(r1)
    b lbl_fn_805D3BA0_00000CB4
lbl_fn_805D3BA0_00000C8C:
    lfs f1, 0x4c(r3)
    lis r4, lbl_80764590@ha
    lfs f0, lbl_80764590@l(r4)
    fneg f1, f1
    fmuls f0, f1, f0
    stfs f0, 0x8(r1)
    b lbl_fn_805D3BA0_00000CB4
lbl_fn_805D3BA0_00000CA8:
    lfs f0, 0x4c(r3)
    fneg f0, f0
    stfs f0, 0x8(r1)
lbl_fn_805D3BA0_00000CB4:
    lis r4, 0x5555
    addi r0, r4, 0x5556
    mulhw r4, r0, r6
    srwi r0, r4, 31
    add r0, r4, r0
    cmpwi r0, 0x1
    beq lbl_fn_805D3BA0_00000CE8
    cmpwi r0, 0x2
    beq lbl_fn_805D3BA0_00000D04
    lis r3, lbl_80764588@ha
    lfs f0, lbl_80764588@l(r3)
    stfs f0, 0xc(r1)
    b lbl_fn_805D3BA0_00000D10
lbl_fn_805D3BA0_00000CE8:
    lfs f1, 0x50(r3)
    lis r3, lbl_80764590@ha
    lfs f0, lbl_80764590@l(r3)
    fneg f1, f1
    fmuls f0, f1, f0
    stfs f0, 0xc(r1)
    b lbl_fn_805D3BA0_00000D10
lbl_fn_805D3BA0_00000D04:
    lfs f0, 0x50(r3)
    fneg f0, f0
    stfs f0, 0xc(r1)
lbl_fn_805D3BA0_00000D10:
    lwz r3, 0x8(r1)
    lwz r4, 0xc(r1)
    addi r1, r1, 0x10
    blr
}

asm void fn_805D3C80(void)
{
    nofralloc
    lwz r3, 0x28(r3)
    blr
}

asm void fn_805D3C90(void)
{
    nofralloc
    lis r3, lbl_807CA200@ha
    li r0, 0x0
    stw r0, lbl_807CA200@l(r3)
    blr
}

asm void fn_805D3CA0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    bl fn_805D2B50
    lis r3, lbl_80799170@ha
    lis r4, fn_805CFC10@ha
    addi r3, r3, lbl_80799170@l
    lis r5, fn_805CD940@ha
    stw r3, 0x0(r28)
    addi r3, r28, 0xd4
    addi r4, r4, fn_805CFC10@l
    addi r5, r5, fn_805CD940@l
    li r6, 0x4
    li r7, 0x4
    bl fn_806958E0
    addi r3, r28, 0xe4
    bl fn_805CDA80
    lbz r0, 0x5e(r29)
    li r31, 0x8
    cmplwi r0, 0x8
    bgt lbl_fn_805D3CA0_00000DB4
    mr r31, r0
lbl_fn_805D3CA0_00000DB4:
    clrlwi. r4, r31, 24
    beq lbl_fn_805D3CA0_00000DC4
    addi r3, r28, 0xe4
    bl fn_805CDAF0
lbl_fn_805D3CA0_00000DC4:
    lwz r0, 0x4c(r29)
    clrlwi. r5, r31, 24
    stw r0, 0xd4(r28)
    lwz r0, 0x50(r29)
    stw r0, 0xd8(r28)
    lwz r0, 0x54(r29)
    stw r0, 0xdc(r28)
    lwz r0, 0x58(r29)
    stw r0, 0xe0(r28)
    beq lbl_fn_805D3CA0_00000E04
    lbz r0, 0xe4(r28)
    cmpwi r0, 0x0
    beq lbl_fn_805D3CA0_00000E04
    addi r3, r28, 0xe4
    addi r4, r29, 0x60
    bl fn_805CDC80
lbl_fn_805D3CA0_00000E04:
    lis r3, lbl_807CA1F8@ha
    li r4, 0x5c
    lwz r3, lbl_807CA1F8@l(r3)
    bl fn_8061A0F0
    cmpwi r3, 0x0
    beq lbl_fn_805D3CA0_00000E44
    lhz r0, 0x5c(r29)
    lwz r5, 0x8(r30)
    slwi r0, r0, 2
    add r4, r5, r0
    lwz r0, 0xc(r4)
    add r4, r5, r0
    beq lbl_fn_805D3CA0_00000E40
    mr r5, r30
    bl fn_805CFC20
lbl_fn_805D3CA0_00000E40:
    stw r3, 0x28(r28)
lbl_fn_805D3CA0_00000E44:
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

asm void fn_805D3DD0(void)
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
    beq lbl_fn_805D3DD0_00000F24
    lwz r5, 0x28(r3)
    lis r4, lbl_80799170@ha
    addi r4, r4, lbl_80799170@l
    stw r4, 0x0(r3)
    cmpwi r5, 0x0
    beq lbl_fn_805D3DD0_00000EE8
    lbz r0, 0x54(r5)
    cmpwi r0, 0x0
    bne lbl_fn_805D3DD0_00000EE8
    lwz r12, 0x0(r5)
    mr r3, r5
    li r4, -0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r3, lbl_807CA1F8@ha
    lwz r4, 0x28(r30)
    lwz r3, lbl_807CA1F8@l(r3)
    bl fn_8061A100
    li r0, 0x0
    stw r0, 0x28(r30)
lbl_fn_805D3DD0_00000EE8:
    addi r3, r30, 0xe4
    bl fn_805CDAA0
    lis r4, fn_805CD940@ha
    addi r3, r30, 0xd4
    addi r4, r4, fn_805CD940@l
    li r5, 0x4
    li r6, 0x4
    bl fn_806959D8
    mr r3, r30
    li r4, 0x0
    bl fn_805D2C70
    cmpwi r31, 0x0
    ble lbl_fn_805D3DD0_00000F24
    mr r3, r30
    bl dtor_80084684
lbl_fn_805D3DD0_00000F24:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805D3EA0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    li r5, 0x0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    addi r3, r1, 0x8
    bl fn_805CE6F0
    lwz r12, 0x0(r31)
    mr r3, r31
    addi r4, r1, 0x8
    lwz r12, 0x68(r12)
    mtctr r12
    bctrl
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_805D3EF0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    mr r29, r4
    stw r28, 0x20(r1)
    lwz r5, 0x28(r3)
    lwz r0, 0x50(r5)
    lwz r3, 0x4c(r5)
    srwi r28, r0, 28
    srwi r0, r3, 28
    cmplw r28, r0
    bge lbl_fn_805D3EF0_000010E0
    extrwi r0, r3, 4, 8
    cmplw r28, r0
    blt lbl_fn_805D3EF0_00000FE0
    b lbl_fn_805D3EF0_000010E0
lbl_fn_805D3EF0_00000FE0:
    addi r0, r28, 0x1
    mr r3, r5
    clrlwi r4, r0, 24
    bl fn_805D15A0
    lwz r3, 0x28(r31)
    mr r4, r28
    mr r5, r29
    bl fn_805D1820
    lwz r3, 0x28(r31)
    lwz r0, 0x50(r3)
    srwi r4, r0, 28
    bl fn_805D1630
    li r29, 0x0
    li r30, 0x1
    li r4, 0x4
    li r0, 0x3c
    stb r29, 0xb(r1)
    lwz r3, 0x28(r31)
    stb r30, 0x8(r1)
    stb r4, 0x9(r1)
    stb r0, 0xa(r1)
    lwz r0, 0x8(r1)
    stw r0, 0xc(r1)
    bl fn_805D1520
    clrlslwi r0, r28, 24, 2
    lbz r4, 0xc(r1)
    add r5, r3, r0
    lbz r0, 0xd(r1)
    stb r4, 0x0(r5)
    addi r3, r31, 0xe4
    lbz r4, 0xe(r1)
    stb r0, 0x1(r5)
    lbz r0, 0xf(r1)
    stb r4, 0x2(r5)
    stb r0, 0x3(r5)
    lwz r4, 0x28(r31)
    lwz r0, 0x50(r4)
    srwi r4, r0, 28
    bl fn_805CDB80
    lis r3, lbl_807645A8@ha
    lfs f0, 0x4c(r31)
    lfs f1, lbl_807645A8@l(r3)
    stfs f1, 0x18(r1)
    fcmpu cr0, f0, f1
    stfs f1, 0x1c(r1)
    bne lbl_fn_805D3EF0_000010A8
    lfs f0, 0x50(r31)
    fcmpu cr0, f0, f1
    bne lbl_fn_805D3EF0_000010A8
    mr r29, r30
lbl_fn_805D3EF0_000010A8:
    cmpwi r29, 0x0
    beq lbl_fn_805D3EF0_000010E0
    lwz r4, 0x28(r31)
    lwz r0, 0x50(r4)
    srwi r0, r0, 28
    cmplwi r0, 0x1
    bne lbl_fn_805D3EF0_000010E0
    addi r3, r1, 0x10
    li r5, 0x0
    bl fn_805D2A40
    lfs f0, 0x10(r1)
    stfs f0, 0x4c(r31)
    lfs f0, 0x14(r1)
    stfs f0, 0x50(r31)
lbl_fn_805D3EF0_000010E0:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_805D4060(void)
{
    nofralloc
    slwi r0, r5, 2
    add r4, r4, r0
    lwz r0, 0xd4(r4)
    stw r0, 0x0(r3)
    blr
}

asm void fn_805D4080(void)
{
    nofralloc
    slwi r4, r4, 2
    lbz r0, 0x0(r5)
    add r3, r3, r4
    stb r0, 0xd4(r3)
    lbz r0, 0x1(r5)
    stb r0, 0xd5(r3)
    lbz r0, 0x2(r5)
    stb r0, 0xd6(r3)
    lbz r0, 0x3(r5)
    stb r0, 0xd7(r3)
    blr
}

asm void fn_805D40B0(void)
{
    nofralloc
    clrrwi r5, r4, 2
    clrlwi r0, r4, 30
    add r3, r3, r5
    add r3, r3, r0
    lbz r3, 0xd4(r3)
    blr
}

asm void fn_805D40D0(void)
{
    nofralloc
    clrrwi r6, r4, 2
    clrlwi r0, r4, 30
    add r3, r3, r6
    add r3, r3, r0
    stb r5, 0xd4(r3)
    blr
}

asm void fn_805D40F0(void)
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
    lwz r0, 0x28(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805D40F0_0000124C
    lwz r12, 0x0(r3)
    lwz r12, 0x60(r12)
    mtctr r12
    bctrl
    lbz r29, 0xce(r28)
    addi r3, r28, 0xd4
    mr r4, r29
    bl fn_805CDD20
    mr r4, r3
    lwz r3, 0x28(r28)
    mr r5, r29
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lbz r4, 0xe5(r28)
    mr r29, r3
    bl fn_805CDDD0
    cmpwi r29, 0x0
    beq lbl_fn_805D40F0_00001214
    addi r30, r28, 0xd4
    b lbl_fn_805D40F0_00001218
lbl_fn_805D40F0_00001214:
    li r30, 0x0
lbl_fn_805D40F0_00001218:
    lwz r29, 0xe8(r28)
    mr r3, r28
    lbz r31, 0xe5(r28)
    bl fn_805D3BA0
    stw r4, 0xc(r1)
    mr r5, r31
    mr r6, r29
    mr r7, r30
    stw r3, 0x8(r1)
    addi r3, r1, 0x8
    addi r4, r28, 0x4c
    lbz r8, 0xce(r28)
    bl fn_805CE420
lbl_fn_805D40F0_0000124C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805D41D0(void)
{
    nofralloc
    lis r3, lbl_807CA208@ha
    addi r3, r3, lbl_807CA208@l
    blr
}

asm void fn_805D41E0(void)
{
    nofralloc
    lis r4, lbl_807CA200@ha
    lis r3, lbl_807CA208@ha
    addi r4, r4, lbl_807CA200@l
    stw r4, lbl_807CA208@l(r3)
    blr
}

asm void fn_805D4200(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_805D4200_000012C8
    cmpwi r4, 0x0
    ble lbl_fn_805D4200_000012C8
    bl dtor_80084684
lbl_fn_805D4200_000012C8:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805D4240(void)
{
    nofralloc
    lis r4, lbl_80799210@ha
    addi r4, r4, lbl_80799210@l
    stw r4, 0x0(r3)
    blr
}

asm void fn_805D4250(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_805D4260(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    mr r28, r3
    mr r29, r4
    mr r30, r5
    bl fn_805D2B50
    lis r3, lbl_8079922C@ha
    lis r4, fn_805CFC10@ha
    addi r3, r3, lbl_8079922C@l
    lis r5, fn_805CD940@ha
    stw r3, 0x0(r28)
    addi r3, r28, 0xd8
    addi r4, r4, fn_805CFC10@l
    addi r5, r5, fn_805CD940@l
    li r6, 0x4
    li r7, 0x2
    bl fn_806958E0
    lis r3, lbl_807645B0@ha
    lfs f0, lbl_807645B0@l(r3)
    stfs f0, 0xe4(r28)
    stfs f0, 0xe8(r28)
    lhz r0, 0x4c(r29)
    extrwi. r31, r0, 16, 15
    beq lbl_fn_805D4260_00001374
    subi r0, r31, 0x1
    clrlwi r31, r0, 16
lbl_fn_805D4260_00001374:
    lis r3, 0x5555
    lbz r0, 0xfc(r28)
    addi r8, r3, 0x5556
    li r9, 0x0
    mulhw r5, r8, r0
    lis r3, lbl_807645B0@ha
    lfs f0, lbl_807645B0@l(r3)
    li r4, 0x0
    stw r9, 0xd4(r28)
    addi r3, r28, 0xfd
    srwi r0, r5, 31
    sth r9, 0xf8(r28)
    add r0, r5, r0
    li r5, 0x1
    clrlwi r6, r0, 24
    sth r9, 0xfa(r28)
    clrlslwi r0, r0, 24, 2
    subf r6, r6, r0
    stw r9, 0xe0(r28)
    addi r0, r6, 0x1
    clrlwi r7, r0, 24
    stfs f0, 0x8(r1)
    mulhw r6, r8, r7
    stfs f0, 0xc(r1)
    stfs f0, 0xe4(r28)
    srwi r0, r6, 31
    stfs f0, 0xe8(r28)
    add r0, r6, r0
    mulli r0, r0, 0x3
    stfs f0, 0xec(r28)
    stfs f0, 0xf0(r28)
    subf r0, r0, r7
    clrlwi r6, r0, 24
    stw r9, 0xf4(r28)
    addi r0, r6, 0x3
    stb r0, 0xfc(r28)
    bl memset
    cmpwi r31, 0x0
    beq lbl_fn_805D4260_00001428
    lwz r12, 0x0(r28)
    mr r3, r28
    mr r4, r31
    lwz r12, 0x64(r12)
    mtctr r12
    bctrl
lbl_fn_805D4260_00001428:
    lhz r4, 0x4e(r29)
    cmplwi r4, 0x2
    blt lbl_fn_805D4260_0000146C
    lwz r0, 0xd4(r28)
    cmpwi r0, 0x0
    beq lbl_fn_805D4260_0000146C
    lwz r12, 0x0(r28)
    extrwi r4, r4, 15, 16
    subi r0, r4, 0x1
    lwz r4, 0x58(r29)
    lwz r12, 0x70(r12)
    mr r3, r28
    clrlwi r6, r0, 16
    li r5, 0x0
    add r4, r29, r4
    mtctr r12
    bctrl
lbl_fn_805D4260_0000146C:
    lwz r0, 0x5c(r29)
    stw r0, 0xd8(r28)
    lwz r3, 0x4(r30)
    lwz r0, 0x60(r29)
    stw r0, 0xdc(r28)
    addi r4, r3, 0xc
    lwz r3, 0xc(r30)
    lfs f0, 0x64(r29)
    stfs f0, 0xe4(r28)
    lfs f0, 0x68(r29)
    stfs f0, 0xe8(r28)
    lbz r0, 0x54(r29)
    stb r0, 0xfc(r28)
    lfs f0, 0x6c(r29)
    stfs f0, 0xf0(r28)
    lfs f0, 0x70(r29)
    stfs f0, 0xec(r28)
    lhz r0, 0x52(r29)
    lwz r12, 0x0(r3)
    slwi r0, r0, 3
    lwzx r0, r4, r0
    lwz r12, 0x10(r12)
    add r31, r4, r0
    mr r4, r31
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_805D4260_000014E4
    stw r3, 0xe0(r28)
    b lbl_fn_805D4260_00001558
lbl_fn_805D4260_000014E4:
    lwz r3, 0xc(r30)
    lis r4, 0x666f
    mr r5, r31
    li r6, 0x0
    lwz r12, 0x0(r3)
    addi r4, r4, 0x6e74
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    mr r27, r3
    beq lbl_fn_805D4260_00001558
    lis r3, lbl_807CA1F8@ha
    li r4, 0x18
    lwz r3, lbl_807CA1F8@l(r3)
    bl fn_8061A0F0
    cmpwi r3, 0x0
    beq lbl_fn_805D4260_00001558
    mr r31, r3
    beq lbl_fn_805D4260_0000153C
    bl fn_805D9E60
    mr r31, r3
lbl_fn_805D4260_0000153C:
    mr r3, r31
    mr r4, r27
    bl fn_805D9F00
    lbz r0, 0xfd(r28)
    stw r31, 0xe0(r28)
    ori r0, r0, 0x80
    stb r0, 0xfd(r28)
lbl_fn_805D4260_00001558:
    lis r3, lbl_807CA1F8@ha
    li r4, 0x5c
    lwz r3, lbl_807CA1F8@l(r3)
    bl fn_8061A0F0
    cmpwi r3, 0x0
    beq lbl_fn_805D4260_00001598
    lhz r0, 0x50(r29)
    lwz r5, 0x8(r30)
    slwi r0, r0, 2
    add r4, r5, r0
    lwz r0, 0xc(r4)
    add r4, r5, r0
    beq lbl_fn_805D4260_00001594
    mr r5, r30
    bl fn_805CFC20
lbl_fn_805D4260_00001594:
    stw r3, 0x28(r28)
lbl_fn_805D4260_00001598:
    addi r11, r1, 0x30
    mr r3, r28
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_805D4520(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r4
    stw r30, 0x28(r1)
    mr r30, r3
    beq lbl_fn_805D4520_00001734
    lbz r0, 0xfd(r3)
    lis r4, lbl_8079922C@ha
    addi r4, r4, lbl_8079922C@l
    stw r4, 0x0(r3)
    extrwi. r0, r0, 1, 24
    beq lbl_fn_805D4520_00001630
    lwz r3, 0xe0(r3)
    li r4, -0x1
    lwz r12, 0x0(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r3, lbl_807CA1F8@ha
    lwz r4, 0xe0(r30)
    lwz r3, lbl_807CA1F8@l(r3)
    bl fn_8061A100
    lbz r0, 0xfd(r30)
    rlwinm r0, r0, 0, 25, 23
    stb r0, 0xfd(r30)
lbl_fn_805D4520_00001630:
    li r0, 0x0
    stw r0, 0xe0(r30)
    b lbl_fn_805D4520_00001690
    bctrl
    xoris r0, r3, 0x8000
    lwz r3, 0xe0(r30)
    lis r4, 0x4330
    stw r0, 0x1c(r1)
    lwz r12, 0x0(r3)
    stw r4, 0x18(r1)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    xoris r0, r3, 0x8000
    stw r0, 0x24(r1)
    lfd f1, 0x45b8(r3)
    stw r4, 0x20(r1)
    lfd f0, 0x20(r1)
    stfs f2, 0xc(r1)
    fsubs f0, f0, f1
    stfs f2, 0xe8(r30)
    stfs f0, 0x8(r1)
    stfs f0, 0xe4(r30)
    b lbl_fn_805D4520_000016A8
lbl_fn_805D4520_00001690:
    lis r3, lbl_807645B0@ha
    lfs f0, lbl_807645B0@l(r3)
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0xe4(r30)
    stfs f0, 0xe8(r30)
lbl_fn_805D4520_000016A8:
    lwz r3, 0x28(r30)
    cmpwi r3, 0x0
    beq lbl_fn_805D4520_000016EC
    lbz r0, 0x54(r3)
    cmpwi r0, 0x0
    bne lbl_fn_805D4520_000016EC
    lwz r12, 0x0(r3)
    li r4, -0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r3, lbl_807CA1F8@ha
    lwz r4, 0x28(r30)
    lwz r3, lbl_807CA1F8@l(r3)
    bl fn_8061A100
    li r0, 0x0
    stw r0, 0x28(r30)
lbl_fn_805D4520_000016EC:
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x68(r12)
    mtctr r12
    bctrl
    lis r4, fn_805CD940@ha
    addi r3, r30, 0xd8
    addi r4, r4, fn_805CD940@l
    li r5, 0x4
    li r6, 0x2
    bl fn_806959D8
    mr r3, r30
    li r4, 0x0
    bl fn_805D2C70
    cmpwi r31, 0x0
    ble lbl_fn_805D4520_00001734
    mr r3, r30
    bl dtor_80084684
lbl_fn_805D4520_00001734:
    mr r3, r30
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_805D46B0(void)
{
    nofralloc
    extlwi r0, r5, 30, 1
    add r4, r4, r0
    lwz r0, 0xd8(r4)
    stw r0, 0x0(r3)
    blr
}

asm void fn_805D46D0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    extlwi r4, r4, 30, 1
    add r3, r3, r4
    lwz r0, 0x0(r5)
    stw r0, 0x8(r1)
    lbz r0, 0x8(r1)
    stb r0, 0xd8(r3)
    lbz r0, 0x9(r1)
    stb r0, 0xd9(r3)
    lbz r0, 0xa(r1)
    stb r0, 0xda(r3)
    lbz r0, 0xb(r1)
    stb r0, 0xdb(r3)
    addi r1, r1, 0x10
    blr
}

asm void fn_805D4710(void)
{
    nofralloc
    rlwinm r5, r4, 31, 1, 29
    clrlwi r0, r4, 30
    add r3, r3, r5
    add r3, r3, r0
    lbz r3, 0xd8(r3)
    blr
}

asm void fn_805D4730(void)
{
    nofralloc
    rlwinm r6, r4, 31, 1, 29
    clrlwi r0, r4, 30
    add r3, r3, r6
    add r3, r3, r0
    stb r5, 0xd8(r3)
    blr
}

asm void fn_805D4750(void)
{
    nofralloc
    stwu r1, -0x220(r1)
    mflr r0
    stw r0, 0x224(r1)
    addi r11, r1, 0x1e0
    stfd f31, 0x210(r1)
    psq_st f31, 0x218(r1), 0, 0
    stfd f30, 0x200(r1)
    psq_st f30, 0x208(r1), 0, 0
    stfd f29, 0x1f0(r1)
    psq_st f29, 0x1f8(r1), 0, 0
    stfd f28, 0x1e0(r1)
    psq_st f28, 0x1e8(r1), 0, 0
    bl _savegpr_14
    lwz r0, 0xd4(r3)
    lis r31, lbl_807645B0@ha
    mr r30, r3
    cmpwi r0, 0x0
    addi r31, r31, lbl_807645B0@l
    beq lbl_fn_805D4750_00001ECC
    lwz r0, 0xe0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805D4750_00001ECC
    lwz r0, 0x28(r3)
    cmpwi r0, 0x0
    bne lbl_fn_805D4750_00001858
    b lbl_fn_805D4750_00001ECC
lbl_fn_805D4750_00001858:
    lwz r12, 0x0(r3)
    lwz r12, 0x60(r12)
    mtctr r12
    bctrl
    addi r3, r1, 0x138
    bl fn_805DDC30
    lwz r4, 0xe0(r30)
    addi r3, r1, 0x138
    bl fn_805D8500
    lfs f1, 0xe4(r30)
    addi r3, r1, 0x138
    lfs f2, 0xe8(r30)
    bl fn_805D91B0
    lfs f1, 0xec(r30)
    addi r3, r1, 0x138
    bl fn_805DDE20
    lfs f1, 0xf0(r30)
    addi r3, r1, 0x138
    bl fn_805DDE30
    lwz r0, 0xd8(r30)
    addi r3, r1, 0x30
    stw r0, 0x28(r1)
    addi r4, r1, 0x28
    lbz r5, 0xce(r30)
    bl fn_805CDD90
    lwz r0, 0xdc(r30)
    addi r3, r1, 0x2c
    stw r0, 0x24(r1)
    addi r4, r1, 0x24
    lbz r5, 0xce(r30)
    bl fn_805CDD90
    lwz r5, 0x30(r1)
    addi r3, r1, 0x138
    lwz r0, 0x2c(r1)
    li r4, 0x0
    cmplw r5, r0
    beq lbl_fn_805D4750_000018F0
    li r4, 0x2
lbl_fn_805D4750_000018F0:
    bl fn_805D8EC0
    lwz r5, 0x30(r1)
    addi r3, r1, 0x138
    lwz r0, 0x2c(r1)
    addi r4, r1, 0x20
    stw r5, 0x20(r1)
    addi r5, r1, 0x1c
    stw r0, 0x1c(r1)
    bl fn_805D9010
    lwz r3, 0x28(r30)
    lwz r0, 0x24(r3)
    stw r0, 0x50(r1)
    lwz r0, 0x28(r3)
    lha r3, 0x50(r1)
    stw r0, 0x54(r1)
    cmpwi r3, 0x0
    bge lbl_fn_805D4750_0000193C
    li r0, 0x0
    b lbl_fn_805D4750_0000194C
lbl_fn_805D4750_0000193C:
    cmpwi r3, 0xff
    li r0, 0xff
    bgt lbl_fn_805D4750_0000194C
    mr r0, r3
lbl_fn_805D4750_0000194C:
    lha r3, 0x52(r1)
    stb r0, 0x10(r1)
    cmpwi r3, 0x0
    bge lbl_fn_805D4750_00001964
    li r0, 0x0
    b lbl_fn_805D4750_00001974
lbl_fn_805D4750_00001964:
    cmpwi r3, 0xff
    li r0, 0xff
    bgt lbl_fn_805D4750_00001974
    mr r0, r3
lbl_fn_805D4750_00001974:
    lha r3, 0x54(r1)
    stb r0, 0x11(r1)
    cmpwi r3, 0x0
    bge lbl_fn_805D4750_0000198C
    li r0, 0x0
    b lbl_fn_805D4750_0000199C
lbl_fn_805D4750_0000198C:
    cmpwi r3, 0xff
    li r0, 0xff
    bgt lbl_fn_805D4750_0000199C
    mr r0, r3
lbl_fn_805D4750_0000199C:
    lha r3, 0x56(r1)
    stb r0, 0x12(r1)
    cmpwi r3, 0x0
    bge lbl_fn_805D4750_000019B4
    li r0, 0x0
    b lbl_fn_805D4750_000019C4
lbl_fn_805D4750_000019B4:
    cmpwi r3, 0xff
    li r0, 0xff
    bgt lbl_fn_805D4750_000019C4
    mr r0, r3
lbl_fn_805D4750_000019C4:
    lwz r3, 0x28(r30)
    stb r0, 0x13(r1)
    lwz r0, 0x2c(r3)
    stw r0, 0x48(r1)
    lwz r0, 0x30(r3)
    lha r4, 0x48(r1)
    stw r0, 0x4c(r1)
    cmpwi r4, 0x0
    lwz r0, 0x10(r1)
    bge lbl_fn_805D4750_000019F4
    li r3, 0x0
    b lbl_fn_805D4750_00001A04
lbl_fn_805D4750_000019F4:
    cmpwi r4, 0xff
    li r3, 0xff
    bgt lbl_fn_805D4750_00001A04
    mr r3, r4
lbl_fn_805D4750_00001A04:
    lha r4, 0x4a(r1)
    stb r3, 0xc(r1)
    cmpwi r4, 0x0
    bge lbl_fn_805D4750_00001A1C
    li r3, 0x0
    b lbl_fn_805D4750_00001A2C
lbl_fn_805D4750_00001A1C:
    cmpwi r4, 0xff
    li r3, 0xff
    bgt lbl_fn_805D4750_00001A2C
    mr r3, r4
lbl_fn_805D4750_00001A2C:
    lha r4, 0x4c(r1)
    stb r3, 0xd(r1)
    cmpwi r4, 0x0
    bge lbl_fn_805D4750_00001A44
    li r3, 0x0
    b lbl_fn_805D4750_00001A54
lbl_fn_805D4750_00001A44:
    cmpwi r4, 0xff
    li r3, 0xff
    bgt lbl_fn_805D4750_00001A54
    mr r3, r4
lbl_fn_805D4750_00001A54:
    lha r4, 0x4e(r1)
    stb r3, 0xe(r1)
    cmpwi r4, 0x0
    bge lbl_fn_805D4750_00001A6C
    li r3, 0x0
    b lbl_fn_805D4750_00001A7C
lbl_fn_805D4750_00001A6C:
    cmpwi r4, 0xff
    li r3, 0xff
    bgt lbl_fn_805D4750_00001A7C
    mr r3, r4
lbl_fn_805D4750_00001A7C:
    stb r3, 0xf(r1)
    addi r3, r1, 0x138
    addi r4, r1, 0x18
    addi r5, r1, 0x14
    lwz r6, 0xc(r1)
    stw r0, 0x18(r1)
    stw r6, 0x14(r1)
    bl fn_805D8E70
    lwz r4, 0xf4(r30)
    cmpwi r4, 0x0
    beq lbl_fn_805D4750_00001AB0
    addi r3, r1, 0x138
    bl fn_805DDEA0
lbl_fn_805D4750_00001AB0:
    addi r3, r1, 0x138
    bl fn_805D8520
    lfs f1, 0x0(r31)
    addi r3, r1, 0x138
    stfs f1, 0x68(r1)
    fmr f2, f1
    stfs f1, 0x6c(r1)
    stfs f1, 0x70(r1)
    stfs f1, 0x74(r1)
    bl fn_805D9530
    lfs f1, 0x4c(r30)
    addi r3, r1, 0x68
    lhz r6, 0xfa(r30)
    addi r4, r1, 0xd8
    lwz r5, 0xd4(r30)
    lwz r15, 0x138(r1)
    lwz r16, 0x13c(r1)
    lwz r17, 0x140(r1)
    lwz r18, 0x144(r1)
    lwz r19, 0x148(r1)
    lwz r20, 0x14c(r1)
    lwz r21, 0x150(r1)
    lwz r22, 0x154(r1)
    lwz r23, 0x158(r1)
    lwz r24, 0x15c(r1)
    lwz r25, 0x160(r1)
    lwz r26, 0x164(r1)
    lwz r27, 0x168(r1)
    lwz r28, 0x16c(r1)
    lwz r29, 0x170(r1)
    lwz r12, 0x174(r1)
    lhz r11, 0x178(r1)
    lbz r10, 0x17a(r1)
    lbz r9, 0x17b(r1)
    lfs f3, 0x17c(r1)
    lwz r8, 0x180(r1)
    lfs f2, 0x184(r1)
    lfs f0, 0x188(r1)
    lwz r7, 0x18c(r1)
    lwz r0, 0x190(r1)
    lwz r14, 0x194(r1)
    stw r15, 0xd8(r1)
    stw r16, 0xdc(r1)
    stw r17, 0xe0(r1)
    stw r18, 0xe4(r1)
    stw r19, 0xe8(r1)
    stw r20, 0xec(r1)
    stw r21, 0xf0(r1)
    stw r22, 0xf4(r1)
    stw r23, 0xf8(r1)
    stw r24, 0xfc(r1)
    stw r25, 0x100(r1)
    stw r26, 0x104(r1)
    stw r27, 0x108(r1)
    stw r28, 0x10c(r1)
    stw r29, 0x110(r1)
    stw r12, 0x114(r1)
    sth r11, 0x118(r1)
    stb r10, 0x11a(r1)
    stb r9, 0x11b(r1)
    stfs f3, 0x11c(r1)
    stw r8, 0x120(r1)
    stfs f2, 0x124(r1)
    stfs f0, 0x128(r1)
    stw r7, 0x12c(r1)
    stw r0, 0x130(r1)
    stw r14, 0x134(r1)
    bl fn_805D5510
    addi r3, r1, 0xd8
    li r4, -0x1
    bl fn_805DDC90
    mr r3, r30
    bl fn_805D3BA0
    lis r5, 0x5555
    lbz r6, 0xfc(r30)
    addi r0, r5, 0x5556
    stw r4, 0x44(r1)
    mulhw r5, r0, r6
    stw r3, 0x40(r1)
    stw r3, 0x38(r1)
    srwi r0, r5, 31
    stw r4, 0x3c(r1)
    add r0, r5, r0
    mulli r0, r0, 0x3
    subf r0, r0, r6
    clrlwi r0, r0, 24
    cmpwi r0, 0x1
    beq lbl_fn_805D4750_00001C20
    cmpwi r0, 0x2
    beq lbl_fn_805D4750_00001C28
    lfs f6, 0x0(r31)
    b lbl_fn_805D4750_00001C2C
lbl_fn_805D4750_00001C20:
    lfs f6, 0x10(r31)
    b lbl_fn_805D4750_00001C2C
lbl_fn_805D4750_00001C28:
    lfs f6, 0x14(r31)
lbl_fn_805D4750_00001C2C:
    lis r3, 0x5555
    addi r0, r3, 0x5556
    mulhw r3, r0, r6
    srwi r0, r3, 31
    add r0, r3, r0
    clrlwi r0, r0, 24
    cmpwi r0, 0x1
    beq lbl_fn_805D4750_00001C5C
    cmpwi r0, 0x2
    beq lbl_fn_805D4750_00001C64
    lfs f7, 0x0(r31)
    b lbl_fn_805D4750_00001C68
lbl_fn_805D4750_00001C5C:
    lfs f7, 0x10(r31)
    b lbl_fn_805D4750_00001C68
lbl_fn_805D4750_00001C64:
    lfs f7, 0x14(r31)
lbl_fn_805D4750_00001C68:
    lfs f3, 0x74(r1)
    lis r3, 0x5555
    lfs f2, 0x6c(r1)
    addi r0, r3, 0x5556
    lfs f1, 0x70(r1)
    lfs f0, 0x68(r1)
    fsubs f4, f3, f2
    lfs f2, 0x50(r30)
    fsubs f5, f1, f0
    lfs f1, 0x4c(r30)
    fsubs f3, f2, f4
    lfs f2, 0x3c(r1)
    lfs f0, 0x38(r1)
    fsubs f1, f1, f5
    fmuls f3, f3, f7
    fmuls f1, f1, f6
    fadds f2, f2, f3
    fadds f1, f0, f1
    stfs f2, 0x6c(r1)
    fadds f0, f2, f4
    stfs f1, 0x68(r1)
    fadds f1, f1, f5
    stfs f0, 0x74(r1)
    stfs f1, 0x70(r1)
    lbz r4, 0xfc(r30)
    mulhw r3, r0, r4
    srwi r0, r3, 31
    add r0, r3, r0
    mulli r0, r0, 0x3
    subf r0, r0, r4
    clrlwi r0, r0, 24
    cmpwi r0, 0x1
    beq lbl_fn_805D4750_00001CFC
    cmpwi r0, 0x2
    beq lbl_fn_805D4750_00001D04
    lfs f28, 0x0(r31)
    b lbl_fn_805D4750_00001D08
lbl_fn_805D4750_00001CFC:
    lfs f28, 0x10(r31)
    b lbl_fn_805D4750_00001D08
lbl_fn_805D4750_00001D04:
    lfs f28, 0x14(r31)
lbl_fn_805D4750_00001D08:
    lfs f1, 0x70(r1)
    addi r3, r1, 0x138
    lfs f0, 0x68(r1)
    lwz r14, 0xd4(r30)
    fsubs f29, f1, f0
    lfs f1, 0x68(r1)
    lfs f2, 0x6c(r1)
    bl fn_805D9530
    lhz r15, 0xfa(r30)
    cmpwi r15, 0x0
    ble lbl_fn_805D4750_00001EC0
    lfs f31, 0x0(r31)
    lis r16, lbl_80799228@ha
    b lbl_fn_805D4750_00001EB8
lbl_fn_805D4750_00001D40:
    lfs f30, 0x4c(r30)
    fmr f1, f31
    lwz r29, 0x138(r1)
    fmr f2, f31
    lwz r28, 0x13c(r1)
    addi r3, r1, 0x78
    lwz r27, 0x140(r1)
    lwz r26, 0x144(r1)
    lwz r25, 0x148(r1)
    lwz r24, 0x14c(r1)
    lwz r23, 0x150(r1)
    lwz r22, 0x154(r1)
    lwz r21, 0x158(r1)
    lwz r20, 0x15c(r1)
    lwz r19, 0x160(r1)
    lwz r18, 0x164(r1)
    lwz r17, 0x168(r1)
    lwz r12, 0x16c(r1)
    lwz r11, 0x170(r1)
    lwz r10, 0x174(r1)
    lhz r9, 0x178(r1)
    lbz r8, 0x17a(r1)
    lbz r7, 0x17b(r1)
    lfs f4, 0x17c(r1)
    lwz r6, 0x180(r1)
    lfs f3, 0x184(r1)
    lfs f0, 0x188(r1)
    lwz r5, 0x18c(r1)
    lwz r4, 0x190(r1)
    lwz r0, 0x194(r1)
    stfs f31, 0x58(r1)
    stfs f31, 0x5c(r1)
    stfs f31, 0x60(r1)
    stfs f31, 0x64(r1)
    stw r29, 0x78(r1)
    stw r28, 0x7c(r1)
    stw r27, 0x80(r1)
    stw r26, 0x84(r1)
    stw r25, 0x88(r1)
    stw r24, 0x8c(r1)
    stw r23, 0x90(r1)
    stw r22, 0x94(r1)
    stw r21, 0x98(r1)
    stw r20, 0x9c(r1)
    stw r19, 0xa0(r1)
    stw r18, 0xa4(r1)
    stw r17, 0xa8(r1)
    stw r12, 0xac(r1)
    stw r11, 0xb0(r1)
    stw r10, 0xb4(r1)
    sth r9, 0xb8(r1)
    stb r8, 0xba(r1)
    stb r7, 0xbb(r1)
    stfs f4, 0xbc(r1)
    stw r6, 0xc0(r1)
    stfs f3, 0xc4(r1)
    stfs f0, 0xc8(r1)
    stw r5, 0xcc(r1)
    stw r4, 0xd0(r1)
    stw r0, 0xd4(r1)
    bl fn_805D9530
    fmr f1, f30
    mr r5, r14
    mr r6, r15
    addi r3, r1, 0x58
    addi r4, r1, 0x78
    addi r7, r1, 0x8
    bl fn_805D4E70
    lfs f1, 0x60(r1)
    mr r17, r3
    lfs f0, 0x58(r1)
    addi r3, r1, 0x78
    li r4, -0x1
    fsubs f30, f1, f0
    bl fn_805DDC90
    fsubs f1, f29, f30
    lfs f0, 0x68(r1)
    addi r3, r1, 0x138
    fmuls f1, f28, f1
    fadds f1, f0, f1
    bl fn_805D9540
    mr r4, r14
    mr r5, r17
    addi r3, r1, 0x138
    bl fn_805DF170
    lbz r0, 0x8(r1)
    cmpwi r0, 0x0
    beq lbl_fn_805D4750_00001EAC
    addi r3, r1, 0x138
    addi r4, r16, lbl_80799228@l
    bl fn_805DF2D0
lbl_fn_805D4750_00001EAC:
    slwi r0, r17, 1
    subf r15, r17, r15
    add r14, r14, r0
lbl_fn_805D4750_00001EB8:
    cmpwi r15, 0x0
    bgt lbl_fn_805D4750_00001D40
lbl_fn_805D4750_00001EC0:
    addi r3, r1, 0x138
    li r4, -0x1
    bl fn_805DDC90
lbl_fn_805D4750_00001ECC:
    addi r11, r1, 0x1e0
    psq_l f31, 0x218(r1), 0, 0
    lfd f31, 0x210(r1)
    psq_l f30, 0x208(r1), 0, 0
    lfd f30, 0x200(r1)
    psq_l f29, 0x1f8(r1), 0, 0
    lfd f29, 0x1f0(r1)
    psq_l f28, 0x1e8(r1), 0, 0
    lfd f28, 0x1e0(r1)
    bl _restgpr_14
    lwz r0, 0x224(r1)
    mtlr r0
    addi r1, r1, 0x220
    blr
}
