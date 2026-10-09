#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_14(void);
extern void _restgpr_23(void);
extern void _restgpr_24(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_14(void);
extern void _savegpr_23(void);
extern void _savegpr_24(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_805CCBB0(void);
extern void fn_805CD9B0(void);
extern void fn_805CDA10(void);
extern void fn_805CDA40(void);
extern void fn_805CF6E0(void);
extern void fn_805D2DB0(void);
extern void fn_805D9BE0(void);
extern void fn_805D9C70(void);
extern void fn_805D9CC0(void);
extern void fn_805F8980(void);
extern void fn_80612E80(void);
extern void fn_806134E0(void);
extern void fn_80613520(void);
extern void fn_80613BB0(void);
extern void fn_80614790(void);
extern void fn_806149C0(void);
extern void fn_80615C40(void);
extern void fn_80615D20(void);
extern void fn_80615D50(void);
extern void fn_80615FF0(void);
extern void fn_80616200(void);
extern void fn_80616250(void);
extern void fn_80616390(void);
extern void fn_80617200(void);
extern void fn_80617220(void);
extern void fn_80617340(void);
extern void fn_806176F0(void);
extern void fn_80617730(void);
extern void fn_806177B0(void);
extern void fn_80617880(void);
extern void fn_806179E0(void);
extern void fn_80617D50(void);
extern void fn_8061A0F0(void);
extern void fn_8061A100(void);
extern void fn_80653DA0(void);
extern void fn_80653EC0(void);

/* External data declarations */
extern u8 lbl_80764538[];
extern u8 lbl_8076453C[];
extern u8 lbl_80764540[];
extern u8 lbl_80764548[];
extern u8 lbl_8076454C[];
extern u8 lbl_80764550[];
extern u8 lbl_80764554[];
extern u8 lbl_80798FD8[];
extern u8 lbl_80799008[];
extern u8 lbl_80799030[];
extern u8 lbl_807CA1D0[];
extern u8 lbl_807CA1D8[];
extern u8 lbl_807CA1F8[];
extern u8 lbl_807CA210[];
extern u8 lbl_80808081[];

/* Small data declarations */

/* Function declarations */
void fn_805CDB80(void);
void fn_805CDC80(void);
void fn_805CDD20(void);
void fn_805CDD90(void);
void fn_805CDDD0(void);
void fn_805CDEC0(void);
void fn_805CE420(void);
void fn_805CE550(void);
void fn_805CE6F0(void);
void fn_805CE830(void);
void fn_805CE8B0(void);
void fn_805CE8F0(void);
void fn_805CEA00(void);
void fn_805CEAB0(void);
void fn_805CEB80(void);
void fn_805CEBC0(void);
void fn_805CEC40(void);
void fn_805CEDE0(void);
void fn_805CEE20(void);
void fn_805CEF50(void);
void fn_805CF260(void);
void fn_805CF3B0(void);
void fn_805CF3E0(void);
void fn_805CF410(void);
void fn_805CF430(void);
void fn_805CF460(void);
void fn_805CF480(void);
void fn_805CF4A0(void);
void fn_805CF4C0(void);
void fn_805CF530(void);

asm void fn_805CDB80(void)
{
    nofralloc
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beqlr
    lbz r0, 0x0(r3)
    cmplw r4, r0
    bgtlr
    lis r8, lbl_807CA1D0@ha
    lbz r0, lbl_807CA1D0@l(r8)
    extsb. r0, r0
    bne lbl_fn_805CDB80_00000068
    lis r6, lbl_80764538@ha
    lis r5, lbl_8076453C@ha
    lis r7, lbl_807CA1D8@ha
    lfs f1, lbl_80764538@l(r6)
    addi r6, r7, lbl_807CA1D8@l
    lfs f0, lbl_8076453C@l(r5)
    li r0, 0x1
    stfs f1, lbl_807CA1D8@l(r7)
    stfs f1, 0x4(r6)
    stfs f0, 0x8(r6)
    stfs f1, 0xc(r6)
    stfs f1, 0x10(r6)
    stfs f0, 0x14(r6)
    stfs f0, 0x18(r6)
    stfs f0, 0x1c(r6)
    stb r0, lbl_807CA1D0@l(r8)
lbl_fn_805CDB80_00000068:
    lbz r7, 0x1(r3)
    lis r6, lbl_807CA1D8@ha
    addi r5, r6, lbl_807CA1D8@l
    lfs f7, lbl_807CA1D8@l(r6)
    subf r0, r7, r4
    slwi r6, r7, 5
    lfs f6, 0x4(r5)
    lfs f5, 0x8(r5)
    lfs f4, 0xc(r5)
    lfs f3, 0x10(r5)
    lfs f2, 0x14(r5)
    lfs f1, 0x18(r5)
    lfs f0, 0x1c(r5)
    mtctr r0
    cmpw r7, r4
    bge lbl_fn_805CDB80_000000F0
lbl_fn_805CDB80_000000A8:
    lwz r0, 0x4(r3)
    stfsx f7, r6, r0
    add r5, r0, r6
    stfs f6, 0x4(r5)
    lwz r0, 0x4(r3)
    add r5, r0, r6
    stfs f5, 0x8(r5)
    stfs f4, 0xc(r5)
    lwz r0, 0x4(r3)
    add r5, r0, r6
    stfs f3, 0x10(r5)
    stfs f2, 0x14(r5)
    lwz r0, 0x4(r3)
    add r5, r0, r6
    addi r6, r6, 0x20
    stfs f1, 0x18(r5)
    stfs f0, 0x1c(r5)
    bdnz lbl_fn_805CDB80_000000A8
lbl_fn_805CDB80_000000F0:
    stb r4, 0x1(r3)
    blr
}

asm void fn_805CDC80(void)
{
    nofralloc
    lbz r0, 0x1(r3)
    cmplw r0, r5
    bge lbl_fn_805CDC80_00000110
    mr r0, r5
lbl_fn_805CDC80_00000110:
    stb r0, 0x1(r3)
    li r6, 0x0
    mtctr r5
    cmpwi r5, 0x0
    blelr
lbl_fn_805CDC80_00000124:
    lwz r0, 0x4(r3)
    lfs f1, 0x0(r4)
    stfsx f1, r6, r0
    add r5, r0, r6
    lfs f0, 0x4(r4)
    stfs f0, 0x4(r5)
    lfs f1, 0x8(r4)
    lwz r0, 0x4(r3)
    lfs f0, 0xc(r4)
    add r5, r0, r6
    lfs f3, 0x10(r4)
    stfs f1, 0x8(r5)
    lfs f2, 0x14(r4)
    stfs f0, 0xc(r5)
    lfs f1, 0x18(r4)
    lwz r0, 0x4(r3)
    lfs f0, 0x1c(r4)
    addi r4, r4, 0x20
    add r5, r0, r6
    stfs f3, 0x10(r5)
    stfs f2, 0x14(r5)
    lwz r0, 0x4(r3)
    add r5, r0, r6
    addi r6, r6, 0x20
    stfs f1, 0x18(r5)
    stfs f0, 0x1c(r5)
    bdnz lbl_fn_805CDC80_00000124
    blr
}

asm void fn_805CDD20(void)
{
    nofralloc
    cmplwi r4, 0xff
    beq lbl_fn_805CDD20_000001B0
    li r3, 0x1
    blr
lbl_fn_805CDD20_000001B0:
    cmpwi r3, 0x0
    beq lbl_fn_805CDD20_00000200
    lwz r4, 0x0(r3)
    addis r0, r4, 0x1
    cmplwi r0, 0xffff
    bne lbl_fn_805CDD20_000001F8
    lwz r4, 0x4(r3)
    addis r0, r4, 0x1
    cmplwi r0, 0xffff
    bne lbl_fn_805CDD20_000001F8
    lwz r4, 0x8(r3)
    addis r0, r4, 0x1
    cmplwi r0, 0xffff
    bne lbl_fn_805CDD20_000001F8
    lwz r3, 0xc(r3)
    addis r0, r3, 0x1
    cmplwi r0, 0xffff
    beq lbl_fn_805CDD20_00000200
lbl_fn_805CDD20_000001F8:
    li r3, 0x1
    blr
lbl_fn_805CDD20_00000200:
    li r3, 0x0
    blr
}

asm void fn_805CDD90(void)
{
    nofralloc
    lwz r0, 0x0(r4)
    cmplwi r5, 0xff
    stw r0, 0x0(r3)
    beqlr
    lbz r0, 0x3(r4)
    lis r4, lbl_80808081@ha
    addi r4, r4, lbl_80808081@l
    mullw r0, r0, r5
    mulhw r4, r4, r0
    add r0, r4, r0
    srawi r0, r0, 7
    srwi r4, r0, 31
    add r0, r0, r4
    stb r0, 0x3(r3)
    blr
}

asm void fn_805CDDD0(void)
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
    bl fn_806134E0
    li r3, 0x9
    li r4, 0x1
    bl fn_80612E80
    cmpwi r29, 0x0
    beq lbl_fn_805CDDD0_00000294
    li r3, 0xb
    li r4, 0x1
    bl fn_80612E80
lbl_fn_805CDDD0_00000294:
    li r31, 0x0
    b lbl_fn_805CDDD0_000002AC
lbl_fn_805CDDD0_0000029C:
    addi r3, r31, 0xd
    li r4, 0x1
    bl fn_80612E80
    addi r31, r31, 0x1
lbl_fn_805CDDD0_000002AC:
    cmpw r31, r30
    blt lbl_fn_805CDDD0_0000029C
    li r3, 0x0
    li r4, 0x9
    li r5, 0x0
    li r6, 0x4
    li r7, 0x0
    bl fn_80613520
    cmpwi r29, 0x0
    beq lbl_fn_805CDDD0_000002EC
    li r3, 0x0
    li r4, 0xb
    li r5, 0x1
    li r6, 0x5
    li r7, 0x0
    bl fn_80613520
lbl_fn_805CDDD0_000002EC:
    li r31, 0x0
    b lbl_fn_805CDDD0_00000310
lbl_fn_805CDDD0_000002F4:
    addi r4, r31, 0xd
    li r3, 0x0
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl fn_80613520
    addi r31, r31, 0x1
lbl_fn_805CDDD0_00000310:
    cmpw r31, r30
    blt lbl_fn_805CDDD0_000002F4
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805CDEC0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r30, r6
    mr r31, r7
    li r3, 0x80
    li r4, 0x0
    li r5, 0x4
    bl fn_80614790
    lis r3, 0xcc01
    lfs f0, 0x0(r27)
    stfs f0, -0x8000(r3)
    cmpwi r31, 0x0
    lfs f0, 0x4(r27)
    stfs f0, -0x8000(r3)
    beq lbl_fn_805CDEC0_0000039C
    lwz r0, 0x0(r31)
    stw r0, -0x8000(r3)
lbl_fn_805CDEC0_0000039C:
    cmpwi cr1, r29, 0x0
    li r6, 0x0
    ble cr1, lbl_fn_805CDEC0_000004B4
    cmpwi r29, 0x8
    subi r4, r29, 0x8
    ble lbl_fn_805CDEC0_00000480
    li r5, 0x0
    blt cr1, lbl_fn_805CDEC0_000003D0
    lis r3, 0x8000
    subi r0, r3, 0x2
    cmpw r29, r0
    bgt lbl_fn_805CDEC0_000003D0
    li r5, 0x1
lbl_fn_805CDEC0_000003D0:
    cmpwi r5, 0x0
    beq lbl_fn_805CDEC0_00000480
    addi r0, r4, 0x7
    mr r5, r30
    srwi r0, r0, 3
    lis r3, 0xcc01
    mtctr r0
    cmpwi r4, 0x0
    ble lbl_fn_805CDEC0_00000480
lbl_fn_805CDEC0_000003F4:
    lfs f0, 0x0(r5)
    addi r6, r6, 0x8
    stfs f0, -0x8000(r3)
    lfs f0, 0x4(r5)
    stfs f0, -0x8000(r3)
    lfs f0, 0x20(r5)
    stfs f0, -0x8000(r3)
    lfs f0, 0x24(r5)
    stfs f0, -0x8000(r3)
    lfs f0, 0x40(r5)
    stfs f0, -0x8000(r3)
    lfs f0, 0x44(r5)
    stfs f0, -0x8000(r3)
    lfs f0, 0x60(r5)
    stfs f0, -0x8000(r3)
    lfs f0, 0x64(r5)
    stfs f0, -0x8000(r3)
    lfs f0, 0x80(r5)
    stfs f0, -0x8000(r3)
    lfs f0, 0x84(r5)
    stfs f0, -0x8000(r3)
    lfs f0, 0xa0(r5)
    stfs f0, -0x8000(r3)
    lfs f0, 0xa4(r5)
    stfs f0, -0x8000(r3)
    lfs f0, 0xc0(r5)
    stfs f0, -0x8000(r3)
    lfs f0, 0xc4(r5)
    stfs f0, -0x8000(r3)
    lfs f0, 0xe0(r5)
    stfs f0, -0x8000(r3)
    lfs f0, 0xe4(r5)
    addi r5, r5, 0x100
    stfs f0, -0x8000(r3)
    bdnz lbl_fn_805CDEC0_000003F4
lbl_fn_805CDEC0_00000480:
    slwi r3, r6, 5
    subf r0, r6, r29
    add r4, r30, r3
    lis r3, 0xcc01
    mtctr r0
    cmpw r6, r29
    bge lbl_fn_805CDEC0_000004B4
lbl_fn_805CDEC0_0000049C:
    lfs f0, 0x0(r4)
    stfs f0, -0x8000(r3)
    lfs f0, 0x4(r4)
    addi r4, r4, 0x20
    stfs f0, -0x8000(r3)
    bdnz lbl_fn_805CDEC0_0000049C
lbl_fn_805CDEC0_000004B4:
    lfs f1, 0x0(r27)
    lis r3, 0xcc01
    lfs f0, 0x0(r28)
    cmpwi r31, 0x0
    lfs f2, 0x4(r27)
    fadds f0, f1, f0
    stfs f0, -0x8000(r3)
    stfs f2, -0x8000(r3)
    beq lbl_fn_805CDEC0_000004E0
    lwz r0, 0x4(r31)
    stw r0, -0x8000(r3)
lbl_fn_805CDEC0_000004E0:
    cmpwi cr1, r29, 0x0
    li r6, 0x0
    ble cr1, lbl_fn_805CDEC0_000005F8
    cmpwi r29, 0x8
    subi r4, r29, 0x8
    ble lbl_fn_805CDEC0_000005C4
    li r5, 0x0
    blt cr1, lbl_fn_805CDEC0_00000514
    lis r3, 0x8000
    subi r0, r3, 0x2
    cmpw r29, r0
    bgt lbl_fn_805CDEC0_00000514
    li r5, 0x1
lbl_fn_805CDEC0_00000514:
    cmpwi r5, 0x0
    beq lbl_fn_805CDEC0_000005C4
    addi r0, r4, 0x7
    mr r5, r30
    srwi r0, r0, 3
    lis r3, 0xcc01
    mtctr r0
    cmpwi r4, 0x0
    ble lbl_fn_805CDEC0_000005C4
lbl_fn_805CDEC0_00000538:
    lfs f0, 0x8(r5)
    addi r6, r6, 0x8
    stfs f0, -0x8000(r3)
    lfs f0, 0xc(r5)
    stfs f0, -0x8000(r3)
    lfs f0, 0x28(r5)
    stfs f0, -0x8000(r3)
    lfs f0, 0x2c(r5)
    stfs f0, -0x8000(r3)
    lfs f0, 0x48(r5)
    stfs f0, -0x8000(r3)
    lfs f0, 0x4c(r5)
    stfs f0, -0x8000(r3)
    lfs f0, 0x68(r5)
    stfs f0, -0x8000(r3)
    lfs f0, 0x6c(r5)
    stfs f0, -0x8000(r3)
    lfs f0, 0x88(r5)
    stfs f0, -0x8000(r3)
    lfs f0, 0x8c(r5)
    stfs f0, -0x8000(r3)
    lfs f0, 0xa8(r5)
    stfs f0, -0x8000(r3)
    lfs f0, 0xac(r5)
    stfs f0, -0x8000(r3)
    lfs f0, 0xc8(r5)
    stfs f0, -0x8000(r3)
    lfs f0, 0xcc(r5)
    stfs f0, -0x8000(r3)
    lfs f0, 0xe8(r5)
    stfs f0, -0x8000(r3)
    lfs f0, 0xec(r5)
    addi r5, r5, 0x100
    stfs f0, -0x8000(r3)
    bdnz lbl_fn_805CDEC0_00000538
lbl_fn_805CDEC0_000005C4:
    slwi r3, r6, 5
    subf r0, r6, r29
    add r4, r30, r3
    lis r3, 0xcc01
    mtctr r0
    cmpw r6, r29
    bge lbl_fn_805CDEC0_000005F8
lbl_fn_805CDEC0_000005E0:
    lfs f0, 0x8(r4)
    stfs f0, -0x8000(r3)
    lfs f0, 0xc(r4)
    addi r4, r4, 0x20
    stfs f0, -0x8000(r3)
    bdnz lbl_fn_805CDEC0_000005E0
lbl_fn_805CDEC0_000005F8:
    lfs f1, 0x0(r27)
    lis r3, 0xcc01
    lfs f0, 0x0(r28)
    cmpwi r31, 0x0
    lfs f2, 0x4(r27)
    fadds f1, f1, f0
    lfs f0, 0x4(r28)
    stfs f1, -0x8000(r3)
    fadds f0, f2, f0
    stfs f0, -0x8000(r3)
    beq lbl_fn_805CDEC0_0000062C
    lwz r0, 0xc(r31)
    stw r0, -0x8000(r3)
lbl_fn_805CDEC0_0000062C:
    cmpwi cr1, r29, 0x0
    li r6, 0x0
    ble cr1, lbl_fn_805CDEC0_00000744
    cmpwi r29, 0x8
    subi r4, r29, 0x8
    ble lbl_fn_805CDEC0_00000710
    li r5, 0x0
    blt cr1, lbl_fn_805CDEC0_00000660
    lis r3, 0x8000
    subi r0, r3, 0x2
    cmpw r29, r0
    bgt lbl_fn_805CDEC0_00000660
    li r5, 0x1
lbl_fn_805CDEC0_00000660:
    cmpwi r5, 0x0
    beq lbl_fn_805CDEC0_00000710
    addi r0, r4, 0x7
    mr r5, r30
    srwi r0, r0, 3
    lis r3, 0xcc01
    mtctr r0
    cmpwi r4, 0x0
    ble lbl_fn_805CDEC0_00000710
lbl_fn_805CDEC0_00000684:
    lfs f0, 0x18(r5)
    addi r6, r6, 0x8
    stfs f0, -0x8000(r3)
    lfs f0, 0x1c(r5)
    stfs f0, -0x8000(r3)
    lfs f0, 0x38(r5)
    stfs f0, -0x8000(r3)
    lfs f0, 0x3c(r5)
    stfs f0, -0x8000(r3)
    lfs f0, 0x58(r5)
    stfs f0, -0x8000(r3)
    lfs f0, 0x5c(r5)
    stfs f0, -0x8000(r3)
    lfs f0, 0x78(r5)
    stfs f0, -0x8000(r3)
    lfs f0, 0x7c(r5)
    stfs f0, -0x8000(r3)
    lfs f0, 0x98(r5)
    stfs f0, -0x8000(r3)
    lfs f0, 0x9c(r5)
    stfs f0, -0x8000(r3)
    lfs f0, 0xb8(r5)
    stfs f0, -0x8000(r3)
    lfs f0, 0xbc(r5)
    stfs f0, -0x8000(r3)
    lfs f0, 0xd8(r5)
    stfs f0, -0x8000(r3)
    lfs f0, 0xdc(r5)
    stfs f0, -0x8000(r3)
    lfs f0, 0xf8(r5)
    stfs f0, -0x8000(r3)
    lfs f0, 0xfc(r5)
    addi r5, r5, 0x100
    stfs f0, -0x8000(r3)
    bdnz lbl_fn_805CDEC0_00000684
lbl_fn_805CDEC0_00000710:
    slwi r3, r6, 5
    subf r0, r6, r29
    add r4, r30, r3
    lis r3, 0xcc01
    mtctr r0
    cmpw r6, r29
    bge lbl_fn_805CDEC0_00000744
lbl_fn_805CDEC0_0000072C:
    lfs f0, 0x18(r4)
    stfs f0, -0x8000(r3)
    lfs f0, 0x1c(r4)
    addi r4, r4, 0x20
    stfs f0, -0x8000(r3)
    bdnz lbl_fn_805CDEC0_0000072C
lbl_fn_805CDEC0_00000744:
    lfs f1, 0x4(r27)
    lis r3, 0xcc01
    lfs f0, 0x4(r28)
    cmpwi r31, 0x0
    lfs f2, 0x0(r27)
    stfs f2, -0x8000(r3)
    fadds f0, f1, f0
    stfs f0, -0x8000(r3)
    beq lbl_fn_805CDEC0_00000770
    lwz r0, 0x8(r31)
    stw r0, -0x8000(r3)
lbl_fn_805CDEC0_00000770:
    cmpwi cr1, r29, 0x0
    li r6, 0x0
    ble cr1, lbl_fn_805CDEC0_00000888
    cmpwi r29, 0x8
    subi r4, r29, 0x8
    ble lbl_fn_805CDEC0_00000854
    li r5, 0x0
    blt cr1, lbl_fn_805CDEC0_000007A4
    lis r3, 0x8000
    subi r0, r3, 0x2
    cmpw r29, r0
    bgt lbl_fn_805CDEC0_000007A4
    li r5, 0x1
lbl_fn_805CDEC0_000007A4:
    cmpwi r5, 0x0
    beq lbl_fn_805CDEC0_00000854
    addi r0, r4, 0x7
    mr r5, r30
    srwi r0, r0, 3
    lis r3, 0xcc01
    mtctr r0
    cmpwi r4, 0x0
    ble lbl_fn_805CDEC0_00000854
lbl_fn_805CDEC0_000007C8:
    lfs f0, 0x10(r5)
    addi r6, r6, 0x8
    stfs f0, -0x8000(r3)
    lfs f0, 0x14(r5)
    stfs f0, -0x8000(r3)
    lfs f0, 0x30(r5)
    stfs f0, -0x8000(r3)
    lfs f0, 0x34(r5)
    stfs f0, -0x8000(r3)
    lfs f0, 0x50(r5)
    stfs f0, -0x8000(r3)
    lfs f0, 0x54(r5)
    stfs f0, -0x8000(r3)
    lfs f0, 0x70(r5)
    stfs f0, -0x8000(r3)
    lfs f0, 0x74(r5)
    stfs f0, -0x8000(r3)
    lfs f0, 0x90(r5)
    stfs f0, -0x8000(r3)
    lfs f0, 0x94(r5)
    stfs f0, -0x8000(r3)
    lfs f0, 0xb0(r5)
    stfs f0, -0x8000(r3)
    lfs f0, 0xb4(r5)
    stfs f0, -0x8000(r3)
    lfs f0, 0xd0(r5)
    stfs f0, -0x8000(r3)
    lfs f0, 0xd4(r5)
    stfs f0, -0x8000(r3)
    lfs f0, 0xf0(r5)
    stfs f0, -0x8000(r3)
    lfs f0, 0xf4(r5)
    addi r5, r5, 0x100
    stfs f0, -0x8000(r3)
    bdnz lbl_fn_805CDEC0_000007C8
lbl_fn_805CDEC0_00000854:
    slwi r3, r6, 5
    subf r0, r6, r29
    add r4, r30, r3
    lis r3, 0xcc01
    mtctr r0
    cmpw r6, r29
    bge lbl_fn_805CDEC0_00000888
lbl_fn_805CDEC0_00000870:
    lfs f0, 0x10(r4)
    stfs f0, -0x8000(r3)
    lfs f0, 0x14(r4)
    addi r4, r4, 0x20
    stfs f0, -0x8000(r3)
    bdnz lbl_fn_805CDEC0_00000870
lbl_fn_805CDEC0_00000888:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805CE420(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r7, 0x0
    stw r0, 0x34(r1)
    li r0, -0x1
    stw r31, 0x2c(r1)
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stw r0, 0x1c(r1)
    beq lbl_fn_805CE420_000009A8
    li r0, 0x2
    mr r12, r7
    addi r31, r1, 0x10
    li r11, 0x0
    lis r9, lbl_80808081@ha
    mtctr r0
    nop
lbl_fn_805CE420_000008E8:
    lwz r0, 0x0(r12)
    cmplwi r8, 0xff
    stw r0, 0x8(r1)
    stw r0, 0xc(r1)
    beq lbl_fn_805CE420_00000920
    lbz r0, 0xb(r1)
    addi r10, r9, lbl_80808081@l
    mullw r0, r0, r8
    mulhw r10, r10, r0
    add r0, r10, r0
    srawi r0, r0, 7
    srwi r10, r0, 31
    add r0, r0, r10
    stb r0, 0xf(r1)
lbl_fn_805CE420_00000920:
    lbz r0, 0xc(r1)
    cmplwi r8, 0xff
    stb r0, 0x0(r31)
    lbz r0, 0xd(r1)
    stb r0, 0x1(r31)
    lbz r0, 0xe(r1)
    stb r0, 0x2(r31)
    lbz r0, 0xf(r1)
    stb r0, 0x3(r31)
    lwz r0, 0x4(r12)
    stw r0, 0x8(r1)
    stw r0, 0xc(r1)
    beq lbl_fn_805CE420_00000978
    lbz r0, 0xb(r1)
    addi r10, r9, lbl_80808081@l
    mullw r0, r0, r8
    mulhw r10, r10, r0
    add r0, r10, r0
    srawi r0, r0, 7
    srwi r10, r0, 31
    add r0, r0, r10
    stb r0, 0xf(r1)
lbl_fn_805CE420_00000978:
    lbz r0, 0xc(r1)
    addi r12, r12, 0x8
    stb r0, 0x4(r31)
    addi r11, r11, 0x1
    lbz r0, 0xd(r1)
    stb r0, 0x5(r31)
    lbz r0, 0xe(r1)
    stb r0, 0x6(r31)
    lbz r0, 0xf(r1)
    stb r0, 0x7(r31)
    addi r31, r31, 0x8
    bdnz lbl_fn_805CE420_000008E8
lbl_fn_805CE420_000009A8:
    cmpwi r7, 0x0
    li r7, 0x0
    beq lbl_fn_805CE420_000009B8
    addi r7, r1, 0x10
lbl_fn_805CE420_000009B8:
    bl fn_805CDEC0
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_805CE550(void)
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
    bl fn_806134E0
    li r3, 0x9
    li r4, 0x1
    bl fn_80612E80
    li r3, 0x0
    li r4, 0x9
    li r5, 0x0
    li r6, 0x4
    li r7, 0x0
    bl fn_80613520
    li r3, 0x1
    bl fn_80615D20
    li r3, 0x4
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    li r9, 0x2
    bl fn_80615D50
    lwz r0, 0x0(r31)
    addi r4, r1, 0x8
    stw r0, 0x8(r1)
    li r3, 0x4
    bl fn_80615C40
    li r3, 0x0
    bl fn_80613BB0
    li r3, 0x1
    bl fn_806179E0
    li r3, 0x0
    bl fn_80617200
    li r3, 0x0
    li r4, 0xff
    li r5, 0xff
    li r6, 0x4
    bl fn_80617880
    li r3, 0x0
    li r4, 0x4
    bl fn_80617340
    li r3, 0x0
    bl fn_80617220
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_806176F0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl fn_80617730
    li r3, 0x7
    li r4, 0x0
    li r5, 0x0
    li r6, 0x7
    li r7, 0x0
    bl fn_806177B0
    li r3, 0x1
    li r4, 0x4
    li r5, 0x5
    li r6, 0xf
    bl fn_80617D50
    li r3, 0x6
    li r4, 0x0
    bl fn_806149C0
    li r3, 0xb0
    li r4, 0x0
    li r5, 0x5
    bl fn_80614790
    lis r3, 0xcc01
    lfs f1, 0x0(r29)
    lfs f0, 0x0(r30)
    stfs f1, -0x8000(r3)
    lfs f2, 0x4(r29)
    fadds f3, f1, f0
    stfs f2, -0x8000(r3)
    lfs f0, 0x4(r30)
    stfs f3, -0x8000(r3)
    fadds f0, f2, f0
    stfs f2, -0x8000(r3)
    stfs f3, -0x8000(r3)
    stfs f0, -0x8000(r3)
    stfs f1, -0x8000(r3)
    stfs f0, -0x8000(r3)
    stfs f1, -0x8000(r3)
    stfs f2, -0x8000(r3)
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805CE6F0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    lis r0, 0x8000
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r30, 0x28(r1)
    mr r30, r5
    stw r29, 0x24(r1)
    mr r29, r4
    lwz r6, 0x8(r4)
    cmplw r6, r0
    bge lbl_fn_805CE6F0_00000BAC
    mr r3, r29
    bl fn_80653DA0
lbl_fn_805CE6F0_00000BAC:
    mr r3, r29
    mr r4, r30
    bl fn_80653EC0
    lwz r9, 0x0(r3)
    mr r30, r3
    lwz r0, 0x4(r3)
    lbz r5, 0x21(r9)
    lbz r4, 0x22(r9)
    cmpwi r0, 0x0
    subf r3, r5, r4
    subf r0, r4, r5
    or r0, r3, r0
    srwi r10, r0, 31
    beq lbl_fn_805CE6F0_00000C1C
    li r0, 0x0
    stw r0, 0x8(r1)
    mr r3, r31
    lwz r4, 0x8(r9)
    lhz r5, 0x2(r9)
    lhz r6, 0x0(r9)
    lwz r7, 0x4(r9)
    lwz r8, 0xc(r9)
    lwz r9, 0x10(r9)
    bl fn_80616200
    lwz r4, 0x4(r30)
    mr r3, r31
    bl fn_80616390
    b lbl_fn_805CE6F0_00000C3C
lbl_fn_805CE6F0_00000C1C:
    lwz r4, 0x8(r9)
    mr r3, r31
    lhz r5, 0x2(r9)
    lhz r6, 0x0(r9)
    lwz r7, 0x4(r9)
    lwz r8, 0xc(r9)
    lwz r9, 0x10(r9)
    bl fn_80615FF0
lbl_fn_805CE6F0_00000C3C:
    lwz r9, 0x0(r30)
    lis r5, 0x4330
    lis r4, lbl_80764540@ha
    stw r5, 0x10(r1)
    lbz r7, 0x21(r9)
    mr r3, r31
    stw r7, 0x14(r1)
    li r6, 0x0
    lbz r0, 0x22(r9)
    li r8, 0x0
    lfd f2, lbl_80764540@l(r4)
    lfd f0, 0x10(r1)
    stw r5, 0x18(r1)
    fsubs f1, f0, f2
    lwz r4, 0x14(r9)
    stw r0, 0x1c(r1)
    lwz r5, 0x18(r9)
    lfd f0, 0x18(r1)
    lfs f3, 0x1c(r9)
    fsubs f2, f0, f2
    lbz r7, 0x20(r9)
    bl fn_80616250
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_805CE830(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_80764548@ha
    lis r4, lbl_8076454C@ha
    stw r0, 0x14(r1)
    lfs f1, lbl_80764548@l(r5)
    lis r5, lbl_80798FD8@ha
    stw r31, 0xc(r1)
    addi r5, r5, lbl_80798FD8@l
    lfs f0, lbl_8076454C@l(r4)
    mr r31, r3
    stw r5, 0x0(r3)
    li r4, 0x0
    li r5, 0x1
    stfs f1, 0x34(r3)
    stfs f1, 0x38(r3)
    stfs f1, 0x3c(r3)
    stfs f1, 0x40(r3)
    stfs f0, 0x44(r3)
    stfs f0, 0x48(r3)
    stfs f0, 0x4c(r3)
    addi r3, r3, 0x50
    bl memset
    addi r3, r31, 0x4
    bl fn_805F8980
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805CE8B0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_805CE8B0_00000D58
    cmpwi r4, 0x0
    ble lbl_fn_805CE8B0_00000D58
    bl dtor_80084684
lbl_fn_805CE8B0_00000D58:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805CE8F0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_23
    lis r6, lbl_80799008@ha
    li r29, 0x0
    addi r0, r3, 0x10
    stw r29, 0x4(r3)
    addi r6, r6, lbl_80799008@l
    mr r24, r4
    mr r25, r5
    stw r6, 0x0(r3)
    mr r23, r3
    li r5, 0x10
    stw r29, 0x8(r3)
    addi r4, r4, 0x8
    stw r29, 0xc(r3)
    stw r0, 0x10(r3)
    stw r0, 0x14(r3)
    stb r29, 0x28(r3)
    addi r3, r3, 0x18
    bl memcpy
    addi r27, r24, 0x1c
    li r26, 0x0
    li r28, 0x0
    lis r31, lbl_807CA1F8@ha
    b lbl_fn_805CE8F0_00000E4C
lbl_fn_805CE8F0_00000DE0:
    lwz r12, 0x0(r25)
    mr r3, r25
    add r4, r27, r28
    li r5, 0x1
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_805CE8F0_00000E44
    lwz r3, lbl_807CA1F8@l(r31)
    li r4, 0xc
    bl fn_8061A0F0
    cmpwi r3, 0x0
    beq lbl_fn_805CE8F0_00000E44
    mr r5, r3
    beq lbl_fn_805CE8F0_00000E2C
    stw r29, 0x0(r3)
    stw r29, 0x4(r3)
lbl_fn_805CE8F0_00000E2C:
    stw r30, 0x8(r3)
    addi r0, r23, 0x10
    addi r3, r23, 0xc
    addi r4, r1, 0x8
    stw r0, 0x8(r1)
    bl fn_805D9CC0
lbl_fn_805CE8F0_00000E44:
    addi r28, r28, 0x10
    addi r26, r26, 0x1
lbl_fn_805CE8F0_00000E4C:
    lhz r0, 0x18(r24)
    cmpw r26, r0
    blt lbl_fn_805CE8F0_00000DE0
    addi r11, r1, 0x40
    mr r3, r23
    bl _restgpr_23
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_805CEA00(void)
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
    beq lbl_fn_805CEA00_00000F0C
    lis r4, lbl_80799008@ha
    lwz r31, 0x10(r3)
    addi r4, r4, lbl_80799008@l
    stw r4, 0x0(r3)
    addi r30, r3, 0x10
    lis r29, lbl_807CA1F8@ha
    b lbl_fn_805CEA00_00000EE4
lbl_fn_805CEA00_00000EC0:
    mr r28, r31
    lwz r31, 0x0(r31)
    addi r3, r26, 0xc
    addi r4, r1, 0x8
    stw r28, 0x8(r1)
    bl fn_805D9C70
    lwz r3, lbl_807CA1F8@l(r29)
    mr r4, r28
    bl fn_8061A100
lbl_fn_805CEA00_00000EE4:
    cmplw r31, r30
    bne lbl_fn_805CEA00_00000EC0
    addic. r3, r26, 0xc
    beq lbl_fn_805CEA00_00000EFC
    li r4, 0x0
    bl fn_805D9BE0
lbl_fn_805CEA00_00000EFC:
    cmpwi r27, 0x0
    ble lbl_fn_805CEA00_00000F0C
    mr r3, r26
    bl dtor_80084684
lbl_fn_805CEA00_00000F0C:
    addi r11, r1, 0x30
    mr r3, r26
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_805CEAB0(void)
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
    beq lbl_fn_805CEAB0_00000FDC
    lwz r31, 0x4(r3)
    addi r30, r3, 0x4
    lis r29, lbl_807CA1F8@ha
    b lbl_fn_805CEAB0_00000FB0
lbl_fn_805CEAB0_00000F64:
    mr r28, r31
    lwz r31, 0x0(r31)
    mr r3, r26
    addi r4, r1, 0x8
    stw r28, 0x8(r1)
    bl fn_805D9C70
    subi r28, r28, 0x4
    lbz r0, 0x28(r28)
    cmpwi r0, 0x0
    bne lbl_fn_805CEAB0_00000FB0
    lwz r12, 0x0(r28)
    mr r3, r28
    li r4, -0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lwz r3, lbl_807CA1F8@l(r29)
    mr r4, r28
    bl fn_8061A100
lbl_fn_805CEAB0_00000FB0:
    cmplw r31, r30
    bne lbl_fn_805CEAB0_00000F64
    cmpwi r26, 0x0
    beq lbl_fn_805CEAB0_00000FCC
    mr r3, r26
    li r4, 0x0
    bl fn_805D9BE0
lbl_fn_805CEAB0_00000FCC:
    cmpwi r27, 0x0
    ble lbl_fn_805CEAB0_00000FDC
    mr r3, r26
    bl dtor_80084684
lbl_fn_805CEAB0_00000FDC:
    addi r11, r1, 0x30
    mr r3, r26
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_805CEB80(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    mr r5, r4
    stw r0, 0x14(r1)
    addi r0, r3, 0x4
    addi r4, r1, 0x8
    addi r5, r5, 0x4
    stw r0, 0x8(r1)
    bl fn_805D9CC0
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805CEBC0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    addi r30, r3, 0x4
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r4
    lwz r31, 0x4(r3)
    b lbl_fn_805CEBC0_00001090
lbl_fn_805CEBC0_0000106C:
    subi r29, r31, 0x4
    mr r4, r28
    addi r3, r29, 0x18
    bl fn_805CD9B0
    cmpwi r3, 0x0
    beq lbl_fn_805CEBC0_0000108C
    mr r3, r29
    b lbl_fn_805CEBC0_0000109C
lbl_fn_805CEBC0_0000108C:
    lwz r31, 0x0(r31)
lbl_fn_805CEBC0_00001090:
    cmplw r31, r30
    bne lbl_fn_805CEBC0_0000106C
    li r3, 0x0
lbl_fn_805CEBC0_0000109C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805CEC40(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    lwz r12, 0x0(r3)
    lis r26, lbl_807CA210@ha
    mr r27, r3
    mr r24, r4
    lwz r12, 0xc(r12)
    addi r26, r26, lbl_807CA210@l
    mtctr r12
    bctrl
    b lbl_fn_805CEC40_0000110C
lbl_fn_805CEC40_000010F8:
    cmplw r3, r26
    bne lbl_fn_805CEC40_00001108
    li r0, 0x1
    b lbl_fn_805CEC40_00001118
lbl_fn_805CEC40_00001108:
    lwz r3, 0x0(r3)
lbl_fn_805CEC40_0000110C:
    cmpwi r3, 0x0
    bne lbl_fn_805CEC40_000010F8
    li r0, 0x0
lbl_fn_805CEC40_00001118:
    cmpwi r0, 0x0
    beq lbl_fn_805CEC40_00001128
    mr r3, r27
    b lbl_fn_805CEC40_0000112C
lbl_fn_805CEC40_00001128:
    li r3, 0x0
lbl_fn_805CEC40_0000112C:
    cmpwi r3, 0x0
    beq lbl_fn_805CEC40_00001138
    stw r24, 0xf4(r3)
lbl_fn_805CEC40_00001138:
    lis r25, lbl_807CA210@ha
    lwz r31, 0x14(r27)
    addi r28, r27, 0x14
    addi r25, r25, lbl_807CA210@l
    b lbl_fn_805CEC40_00001240
lbl_fn_805CEC40_0000114C:
    subi r26, r31, 0x4
    lwz r12, 0x0(r26)
    mr r3, r26
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    b lbl_fn_805CEC40_0000117C
lbl_fn_805CEC40_00001168:
    cmplw r3, r25
    bne lbl_fn_805CEC40_00001178
    li r0, 0x1
    b lbl_fn_805CEC40_00001188
lbl_fn_805CEC40_00001178:
    lwz r3, 0x0(r3)
lbl_fn_805CEC40_0000117C:
    cmpwi r3, 0x0
    bne lbl_fn_805CEC40_00001168
    li r0, 0x0
lbl_fn_805CEC40_00001188:
    cmpwi r0, 0x0
    beq lbl_fn_805CEC40_00001198
    mr r3, r26
    b lbl_fn_805CEC40_0000119C
lbl_fn_805CEC40_00001198:
    li r3, 0x0
lbl_fn_805CEC40_0000119C:
    cmpwi r3, 0x0
    beq lbl_fn_805CEC40_000011A8
    stw r24, 0xf4(r3)
lbl_fn_805CEC40_000011A8:
    lwz r30, 0x14(r26)
    addi r27, r26, 0x14
    b lbl_fn_805CEC40_00001234
lbl_fn_805CEC40_000011B4:
    subi r26, r30, 0x4
    lwz r12, 0x0(r26)
    mr r3, r26
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    b lbl_fn_805CEC40_000011E4
lbl_fn_805CEC40_000011D0:
    cmplw r3, r25
    bne lbl_fn_805CEC40_000011E0
    li r0, 0x1
    b lbl_fn_805CEC40_000011F0
lbl_fn_805CEC40_000011E0:
    lwz r3, 0x0(r3)
lbl_fn_805CEC40_000011E4:
    cmpwi r3, 0x0
    bne lbl_fn_805CEC40_000011D0
    li r0, 0x0
lbl_fn_805CEC40_000011F0:
    cmpwi r0, 0x0
    beq lbl_fn_805CEC40_00001200
    mr r3, r26
    b lbl_fn_805CEC40_00001204
lbl_fn_805CEC40_00001200:
    li r3, 0x0
lbl_fn_805CEC40_00001204:
    cmpwi r3, 0x0
    beq lbl_fn_805CEC40_00001210
    stw r24, 0xf4(r3)
lbl_fn_805CEC40_00001210:
    lwzu r29, 0x14(r26)
    b lbl_fn_805CEC40_00001228
lbl_fn_805CEC40_00001218:
    mr r4, r24
    subi r3, r29, 0x4
    bl fn_805CEC40
    lwz r29, 0x0(r29)
lbl_fn_805CEC40_00001228:
    cmplw r29, r26
    bne lbl_fn_805CEC40_00001218
    lwz r30, 0x0(r30)
lbl_fn_805CEC40_00001234:
    cmplw r30, r27
    bne lbl_fn_805CEC40_000011B4
    lwz r31, 0x0(r31)
lbl_fn_805CEC40_00001240:
    cmplw r31, r28
    bne lbl_fn_805CEC40_0000114C
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_805CEDE0(void)
{
    nofralloc
    lis r4, lbl_80764550@ha
    li r0, 0x0
    lfs f0, lbl_80764550@l(r4)
    lis r4, lbl_80799030@ha
    addi r5, r3, 0x8
    stw r0, 0x4(r3)
    addi r4, r4, lbl_80799030@l
    stw r4, 0x0(r3)
    stw r5, 0x8(r3)
    stw r5, 0xc(r3)
    stw r0, 0x10(r3)
    stw r0, 0x14(r3)
    stfs f0, 0x18(r3)
    stfs f0, 0x1c(r3)
    stb r0, 0x20(r3)
    blr
}

asm void fn_805CEE20(void)
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
    beq lbl_fn_805CEE20_000013AC
    lwz r0, 0x14(r3)
    lis r4, lbl_80799030@ha
    addi r4, r4, lbl_80799030@l
    stw r4, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805CEE20_000012F8
    mr r3, r0
    li r4, -0x1
    bl fn_805CEAB0
    lis r3, lbl_807CA1F8@ha
    lwz r4, 0x14(r26)
    lwz r3, lbl_807CA1F8@l(r3)
    bl fn_8061A100
lbl_fn_805CEE20_000012F8:
    lwz r3, 0x10(r26)
    cmpwi r3, 0x0
    beq lbl_fn_805CEE20_00001334
    lbz r0, 0xd0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_805CEE20_00001334
    lwz r12, 0x0(r3)
    li r4, -0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r3, lbl_807CA1F8@ha
    lwz r4, 0x10(r26)
    lwz r3, lbl_807CA1F8@l(r3)
    bl fn_8061A100
lbl_fn_805CEE20_00001334:
    lwz r31, 0x8(r26)
    addi r30, r26, 0x8
    lis r29, lbl_807CA1F8@ha
    b lbl_fn_805CEE20_00001384
lbl_fn_805CEE20_00001344:
    mr r28, r31
    lwz r31, 0x0(r31)
    addi r3, r26, 0x4
    addi r4, r1, 0x8
    stw r28, 0x8(r1)
    bl fn_805D9C70
    subi r28, r28, 0x4
    li r4, -0x1
    lwz r12, 0x0(r28)
    mr r3, r28
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lwz r3, lbl_807CA1F8@l(r29)
    mr r4, r28
    bl fn_8061A100
lbl_fn_805CEE20_00001384:
    cmplw r31, r30
    bne lbl_fn_805CEE20_00001344
    addic. r3, r26, 0x4
    beq lbl_fn_805CEE20_0000139C
    li r4, 0x0
    bl fn_805D9BE0
lbl_fn_805CEE20_0000139C:
    cmpwi r27, 0x0
    ble lbl_fn_805CEE20_000013AC
    mr r3, r26
    bl dtor_80084684
lbl_fn_805CEE20_000013AC:
    addi r11, r1, 0x30
    mr r3, r26
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_805CEF50(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_14
    mr r31, r4
    lis r4, 0x524c
    mr r30, r3
    mr r14, r5
    addi r4, r4, 0x5954
    mr r3, r31
    bl fn_805CDA40
    cmpwi r3, 0x0
    bne lbl_fn_805CEF50_00001410
    li r3, 0x0
    b lbl_fn_805CEF50_000016BC
lbl_fn_805CEF50_00001410:
    li r22, 0x0
    stw r14, 0x14(r1)
    lis r27, 0x7061
    li r20, 0x0
    stw r22, 0x8(r1)
    addi r23, r27, 0x6531
    li r19, 0x0
    li r18, 0x0
    stw r22, 0xc(r1)
    li r17, 0x0
    li r15, 0x0
    lis r28, 0x7478
    stw r22, 0x10(r1)
    lis r25, 0x626e
    lis r29, lbl_807CA1F8@ha
    lis r14, 0x6c79
    lhz r0, 0xc(r31)
    lis r26, 0x6772
    lis r24, 0x666e
    add r16, r31, r0
    b lbl_fn_805CEF50_000016AC
lbl_fn_805CEF50_00001464:
    lwz r3, 0x0(r16)
    cmpw r3, r23
    beq lbl_fn_805CEF50_000015DC
    bge lbl_fn_805CEF50_000014E8
    addi r0, r26, 0x7031
    cmpw r3, r0
    beq lbl_fn_805CEF50_000015E8
    bge lbl_fn_805CEF50_000014B4
    addi r0, r24, 0x6c31
    cmpw r3, r0
    beq lbl_fn_805CEF50_00001580
    bge lbl_fn_805CEF50_000014A4
    addi r0, r25, 0x6431
    cmpw r3, r0
    beq lbl_fn_805CEF50_00001590
    b lbl_fn_805CEF50_000016A0
lbl_fn_805CEF50_000014A4:
    addi r0, r26, 0x6531
    cmpw r3, r0
    beq lbl_fn_805CEF50_0000169C
    b lbl_fn_805CEF50_000016A0
lbl_fn_805CEF50_000014B4:
    addi r0, r14, 0x7431
    cmpw r3, r0
    beq lbl_fn_805CEF50_00001550
    bge lbl_fn_805CEF50_000014D4
    addi r0, r26, 0x7331
    cmpw r3, r0
    beq lbl_fn_805CEF50_00001694
    b lbl_fn_805CEF50_000016A0
lbl_fn_805CEF50_000014D4:
    lis r4, 0x6d61
    addi r0, r4, 0x7431
    cmpw r3, r0
    beq lbl_fn_805CEF50_00001588
    b lbl_fn_805CEF50_000016A0
lbl_fn_805CEF50_000014E8:
    addi r0, r28, 0x6c31
    cmpw r3, r0
    beq lbl_fn_805CEF50_00001578
    bge lbl_fn_805CEF50_0000152C
    addi r0, r27, 0x7331
    cmpw r3, r0
    beq lbl_fn_805CEF50_000015D4
    bge lbl_fn_805CEF50_00001518
    addi r0, r27, 0x6e31
    cmpw r3, r0
    beq lbl_fn_805CEF50_00001590
    b lbl_fn_805CEF50_000016A0
lbl_fn_805CEF50_00001518:
    lis r4, 0x7069
    addi r0, r4, 0x6331
    cmpw r3, r0
    beq lbl_fn_805CEF50_00001590
    b lbl_fn_805CEF50_000016A0
lbl_fn_805CEF50_0000152C:
    lis r4, 0x776e
    addi r0, r4, 0x6431
    cmpw r3, r0
    beq lbl_fn_805CEF50_00001590
    bge lbl_fn_805CEF50_000016A0
    addi r0, r28, 0x7431
    cmpw r3, r0
    beq lbl_fn_805CEF50_00001590
    b lbl_fn_805CEF50_000016A0
lbl_fn_805CEF50_00001550:
    lbz r3, 0x8(r16)
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
    stb r0, 0x20(r30)
    lfs f0, 0xc(r16)
    stfs f0, 0x18(r30)
    lfs f0, 0x10(r16)
    stfs f0, 0x1c(r30)
    b lbl_fn_805CEF50_000016A0
lbl_fn_805CEF50_00001578:
    stw r16, 0x8(r1)
    b lbl_fn_805CEF50_000016A0
lbl_fn_805CEF50_00001580:
    stw r16, 0xc(r1)
    b lbl_fn_805CEF50_000016A0
lbl_fn_805CEF50_00001588:
    stw r16, 0x10(r1)
    b lbl_fn_805CEF50_000016A0
lbl_fn_805CEF50_00001590:
    mr r4, r16
    addi r5, r1, 0x8
    bl fn_805CF6E0
    cmpwi r3, 0x0
    mr r21, r3
    beq lbl_fn_805CEF50_000016A0
    lwz r0, 0x10(r30)
    cmpwi r0, 0x0
    bne lbl_fn_805CEF50_000015B8
    stw r3, 0x10(r30)
lbl_fn_805CEF50_000015B8:
    cmpwi r20, 0x0
    beq lbl_fn_805CEF50_000015CC
    mr r3, r20
    mr r4, r21
    bl fn_805D2DB0
lbl_fn_805CEF50_000015CC:
    mr r19, r21
    b lbl_fn_805CEF50_000016A0
lbl_fn_805CEF50_000015D4:
    mr r20, r19
    b lbl_fn_805CEF50_000016A0
lbl_fn_805CEF50_000015DC:
    mr r19, r20
    lwz r20, 0xc(r20)
    b lbl_fn_805CEF50_000016A0
lbl_fn_805CEF50_000015E8:
    cmpwi r18, 0x0
    bne lbl_fn_805CEF50_00001634
    lwz r3, lbl_807CA1F8@l(r29)
    li r18, 0x1
    li r4, 0xc
    bl fn_8061A0F0
    cmpwi r3, 0x0
    beq lbl_fn_805CEF50_00001628
    beq lbl_fn_805CEF50_0000162C
    stw r22, 0x4(r3)
    addi r4, r3, 0x4
    stw r22, 0x8(r3)
    stw r22, 0x0(r3)
    stw r4, 0x4(r3)
    stw r4, 0x8(r3)
    b lbl_fn_805CEF50_0000162C
lbl_fn_805CEF50_00001628:
    li r3, 0x0
lbl_fn_805CEF50_0000162C:
    stw r3, 0x14(r30)
    b lbl_fn_805CEF50_000016A0
lbl_fn_805CEF50_00001634:
    lwz r0, 0x14(r30)
    cmpwi r0, 0x0
    beq lbl_fn_805CEF50_000016A0
    cmpwi r17, 0x1
    bne lbl_fn_805CEF50_000016A0
    lwz r21, 0x10(r30)
    li r4, 0x2c
    lwz r3, lbl_807CA1F8@l(r29)
    bl fn_8061A0F0
    cmpwi r3, 0x0
    beq lbl_fn_805CEF50_0000167C
    mr r4, r3
    beq lbl_fn_805CEF50_00001680
    mr r4, r16
    mr r5, r21
    bl fn_805CE8F0
    mr r4, r3
    b lbl_fn_805CEF50_00001680
lbl_fn_805CEF50_0000167C:
    li r4, 0x0
lbl_fn_805CEF50_00001680:
    cmpwi r4, 0x0
    beq lbl_fn_805CEF50_000016A0
    lwz r3, 0x14(r30)
    bl fn_805CEB80
    b lbl_fn_805CEF50_000016A0
lbl_fn_805CEF50_00001694:
    addi r17, r17, 0x1
    b lbl_fn_805CEF50_000016A0
lbl_fn_805CEF50_0000169C:
    subi r17, r17, 0x1
lbl_fn_805CEF50_000016A0:
    lwz r0, 0x4(r16)
    addi r15, r15, 0x1
    add r16, r16, r0
lbl_fn_805CEF50_000016AC:
    lhz r0, 0xe(r31)
    cmpw r15, r0
    blt lbl_fn_805CEF50_00001464
    li r3, 0x1
lbl_fn_805CEF50_000016BC:
    addi r11, r1, 0x60
    bl _restgpr_14
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_805CF260(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    mr r29, r4
    mr r24, r3
    mr r25, r5
    mr r3, r29
    bl fn_805CDA10
    cmpwi r3, 0x0
    bne lbl_fn_805CF260_00001718
    li r3, 0x0
    b lbl_fn_805CF260_00001810
lbl_fn_805CF260_00001718:
    lhz r0, 0xc(r29)
    li r27, 0x0
    li r26, 0x0
    lis r31, lbl_807CA1F8@ha
    add r28, r29, r0
    b lbl_fn_805CF260_00001800
lbl_fn_805CF260_00001730:
    lwz r3, 0x0(r28)
    subis r0, r3, 0x7061
    cmplwi r0, 0x6931
    bne lbl_fn_805CF260_000017F4
    lwz r3, 0x0(r29)
    subis r0, r3, 0x524c
    cmplwi r0, 0x414e
    beq lbl_fn_805CF260_00001780
    cmplwi r0, 0x5041
    beq lbl_fn_805CF260_00001780
    cmplwi r0, 0x5649
    beq lbl_fn_805CF260_00001780
    cmplwi r0, 0x5643
    beq lbl_fn_805CF260_00001780
    cmplwi r0, 0x4d43
    beq lbl_fn_805CF260_00001780
    cmplwi r0, 0x5453
    beq lbl_fn_805CF260_00001780
    cmplwi r0, 0x5450
    bne lbl_fn_805CF260_000017D4
lbl_fn_805CF260_00001780:
    lwz r3, lbl_807CA1F8@l(r31)
    li r4, 0x20
    bl fn_8061A0F0
    cmpwi r3, 0x0
    beq lbl_fn_805CF260_000017A8
    mr r30, r3
    beq lbl_fn_805CF260_000017AC
    bl fn_805CCBB0
    mr r30, r3
    b lbl_fn_805CF260_000017AC
lbl_fn_805CF260_000017A8:
    li r30, 0x0
lbl_fn_805CF260_000017AC:
    cmpwi r30, 0x0
    beq lbl_fn_805CF260_000017D4
    lwz r12, 0x0(r30)
    mr r3, r30
    mr r4, r28
    mr r5, r25
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    mr r27, r30
lbl_fn_805CF260_000017D4:
    cmpwi r27, 0x0
    beq lbl_fn_805CF260_000017F4
    addi r0, r24, 0x8
    stw r0, 0x8(r1)
    addi r3, r24, 0x4
    addi r4, r1, 0x8
    addi r5, r27, 0x4
    bl fn_805D9CC0
lbl_fn_805CF260_000017F4:
    lwz r0, 0x4(r28)
    addi r26, r26, 0x1
    add r28, r28, r0
lbl_fn_805CF260_00001800:
    lhz r0, 0xe(r29)
    cmpw r26, r0
    blt lbl_fn_805CF260_00001730
    mr r3, r27
lbl_fn_805CF260_00001810:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_805CF3B0(void)
{
    nofralloc
    lwz r3, 0x10(r3)
    cmpwi r3, 0x0
    beqlr
    lwz r12, 0x0(r3)
    li r5, 0x1
    lwz r12, 0x44(r12)
    mtctr r12
    bctr
    blr
}

asm void fn_805CF3E0(void)
{
    nofralloc
    lwz r3, 0x10(r3)
    cmpwi r3, 0x0
    beqlr
    lwz r12, 0x0(r3)
    li r5, 0x1
    lwz r12, 0x48(r12)
    mtctr r12
    bctr
    blr
}

asm void fn_805CF410(void)
{
    nofralloc
    lwz r12, 0x0(r3)
    li r4, 0x0
    lwz r12, 0x18(r12)
    mtctr r12
    bctr
}

asm void fn_805CF430(void)
{
    nofralloc
    lwz r3, 0x10(r3)
    cmpwi r3, 0x0
    beqlr
    lwz r12, 0x0(r3)
    li r6, 0x1
    lwz r12, 0x58(r12)
    mtctr r12
    bctr
    blr
}

asm void fn_805CF460(void)
{
    nofralloc
    lwz r3, 0x10(r3)
    cmpwi r3, 0x0
    beqlr
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctr
    blr
}

asm void fn_805CF480(void)
{
    nofralloc
    lwz r3, 0x10(r3)
    cmpwi r3, 0x0
    beqlr
    lwz r12, 0x0(r3)
    lwz r12, 0x14(r12)
    mtctr r12
    bctr
    blr
}

asm void fn_805CF4A0(void)
{
    nofralloc
    lwz r3, 0x10(r3)
    cmpwi r3, 0x0
    beqlr
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctr
    blr
}

asm void fn_805CF4C0(void)
{
    nofralloc
    lbz r0, 0x20(r4)
    cmplwi r0, 0x1
    bne lbl_fn_805CF4C0_00001988
    lfs f4, 0x1c(r4)
    lis r5, lbl_80764554@ha
    lfs f1, 0x18(r4)
    fneg f3, f4
    lfs f2, lbl_80764554@l(r5)
    fneg f0, f1
    fmuls f5, f1, f2
    fmuls f3, f3, f2
    fmuls f1, f4, f2
    stfs f5, 0x8(r3)
    fmuls f0, f0, f2
    stfs f1, 0x4(r3)
    stfs f0, 0x0(r3)
    stfs f3, 0xc(r3)
    blr
lbl_fn_805CF4C0_00001988:
    lis r5, lbl_80764550@ha
    lfs f2, 0x1c(r4)
    lfs f0, lbl_80764550@l(r5)
    lfs f1, 0x18(r4)
    stfs f0, 0x0(r3)
    stfs f0, 0x4(r3)
    stfs f1, 0x8(r3)
    stfs f2, 0xc(r3)
    blr
}

asm void fn_805CF530(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    lwz r25, 0x10(r3)
    lis r24, lbl_807CA210@ha
    mr r31, r4
    lwz r12, 0x0(r25)
    mr r3, r25
    addi r24, r24, lbl_807CA210@l
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    b lbl_fn_805CF530_00001A04
    nop
lbl_fn_805CF530_000019F0:
    cmplw r3, r24
    bne lbl_fn_805CF530_00001A00
    li r0, 0x1
    b lbl_fn_805CF530_00001A10
lbl_fn_805CF530_00001A00:
    lwz r3, 0x0(r3)
lbl_fn_805CF530_00001A04:
    cmpwi r3, 0x0
    bne lbl_fn_805CF530_000019F0
    li r0, 0x0
lbl_fn_805CF530_00001A10:
    cmpwi r0, 0x0
    beq lbl_fn_805CF530_00001A20
    mr r3, r25
    b lbl_fn_805CF530_00001A24
lbl_fn_805CF530_00001A20:
    li r3, 0x0
lbl_fn_805CF530_00001A24:
    cmpwi r3, 0x0
    beq lbl_fn_805CF530_00001A30
    stw r31, 0xf4(r3)
lbl_fn_805CF530_00001A30:
    lis r24, lbl_807CA210@ha
    lwz r30, 0x14(r25)
    addi r27, r25, 0x14
    addi r24, r24, lbl_807CA210@l
    b lbl_fn_805CF530_00001B38
lbl_fn_805CF530_00001A44:
    subi r25, r30, 0x4
    lwz r12, 0x0(r25)
    mr r3, r25
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    b lbl_fn_805CF530_00001A74
lbl_fn_805CF530_00001A60:
    cmplw r3, r24
    bne lbl_fn_805CF530_00001A70
    li r0, 0x1
    b lbl_fn_805CF530_00001A80
lbl_fn_805CF530_00001A70:
    lwz r3, 0x0(r3)
lbl_fn_805CF530_00001A74:
    cmpwi r3, 0x0
    bne lbl_fn_805CF530_00001A60
    li r0, 0x0
lbl_fn_805CF530_00001A80:
    cmpwi r0, 0x0
    beq lbl_fn_805CF530_00001A90
    mr r3, r25
    b lbl_fn_805CF530_00001A94
lbl_fn_805CF530_00001A90:
    li r3, 0x0
lbl_fn_805CF530_00001A94:
    cmpwi r3, 0x0
    beq lbl_fn_805CF530_00001AA0
    stw r31, 0xf4(r3)
lbl_fn_805CF530_00001AA0:
    lwz r29, 0x14(r25)
    addi r26, r25, 0x14
    b lbl_fn_805CF530_00001B2C
lbl_fn_805CF530_00001AAC:
    subi r25, r29, 0x4
    lwz r12, 0x0(r25)
    mr r3, r25
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    b lbl_fn_805CF530_00001ADC
lbl_fn_805CF530_00001AC8:
    cmplw r3, r24
    bne lbl_fn_805CF530_00001AD8
    li r0, 0x1
    b lbl_fn_805CF530_00001AE8
lbl_fn_805CF530_00001AD8:
    lwz r3, 0x0(r3)
lbl_fn_805CF530_00001ADC:
    cmpwi r3, 0x0
    bne lbl_fn_805CF530_00001AC8
    li r0, 0x0
lbl_fn_805CF530_00001AE8:
    cmpwi r0, 0x0
    beq lbl_fn_805CF530_00001AF8
    mr r3, r25
    b lbl_fn_805CF530_00001AFC
lbl_fn_805CF530_00001AF8:
    li r3, 0x0
lbl_fn_805CF530_00001AFC:
    cmpwi r3, 0x0
    beq lbl_fn_805CF530_00001B08
    stw r31, 0xf4(r3)
lbl_fn_805CF530_00001B08:
    lwzu r28, 0x14(r25)
    b lbl_fn_805CF530_00001B20
lbl_fn_805CF530_00001B10:
    mr r4, r31
    subi r3, r28, 0x4
    bl fn_805CEC40
    lwz r28, 0x0(r28)
lbl_fn_805CF530_00001B20:
    cmplw r28, r25
    bne lbl_fn_805CF530_00001B10
    lwz r29, 0x0(r29)
lbl_fn_805CF530_00001B2C:
    cmplw r29, r26
    bne lbl_fn_805CF530_00001AAC
    lwz r30, 0x0(r30)
lbl_fn_805CF530_00001B38:
    cmplw r30, r27
    bne lbl_fn_805CF530_00001A44
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}
