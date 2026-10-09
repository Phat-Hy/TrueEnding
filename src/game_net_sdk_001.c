#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void OSCreateThread(void);
extern void OSGetCurrentThread(void);
extern void OSJoinThread(void);
extern void OSPanic(const char* file, int line, const char* msg, ...);
extern void OSReport(const char* msg, ...);
extern void OSResumeThread(void);
extern void _restgpr_19(void);
extern void _restgpr_21(void);
extern void _restgpr_23(void);
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_19(void);
extern void _savegpr_21(void);
extern void _savegpr_23(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void fn_805F2670(void);
extern void fn_805F26D0(void);
extern void fn_805F27A0(void);
extern void fn_805F30F0(void);
extern void fn_805F3130(void);
extern void fn_805F3210(void);
extern void fn_806806A4(void);
extern void fn_80697E2C(void);
extern void fn_8069C10C(void);
extern void fn_8069C3C8(void);
extern void fn_8069C6E8(void);
extern void fn_8069C7B0(void);
extern void fn_8069C7B4(void);
extern void fn_8069C7BC(void);
extern void fn_8069C7C8(void);
extern void fn_8069CA18(void);
extern void fn_8069CD58(void);
extern void fn_8069CE0C(void);
extern void fn_8069CE9C(void);
extern void fn_8069D130(void);
extern void fn_8069D13C(void);
extern void fn_8069FAC4(void);
extern void fn_806A0DA4(void);
extern void fn_806A0DAC(void);
extern void fn_806A0E44(void);
extern void fn_806A117C(void);
extern void fn_806A11D4(void);
extern void fn_806A123C(void);
extern void fn_806A1240(void);
extern void fn_806A1248(void);
extern void fn_806A1250(void);
extern void fn_806A1258(void);
extern void fn_806A1288(void);
extern void fn_806A37F4(void);
extern void fn_806A39B8(void);
extern void fn_806A3B44(void);
extern void fn_806A3D50(void);
extern void fn_806A4270(void);
extern void fn_806A4C5C(void);
extern void fn_806A5798(void);

/* External data declarations */
extern u8 lbl_80767260[];
extern u8 lbl_807BC3E0[];
extern u8 lbl_807BC428[];
extern u8 lbl_807BC468[];
extern u8 lbl_807BC484[];
extern u8 lbl_807BC4C0[];
extern u8 lbl_807BC500[];

/* Small data declarations */
extern u32 lbl_8087ED50;
extern u32 lbl_8087ED58;

/* Function declarations */
void fn_8069A0D0(void);
void fn_8069A100(void);
void fn_8069A15C(void);
void fn_8069A1A0(void);
void fn_8069A1A8(void);
void fn_8069A1B0(void);
void fn_8069A1B8(void);
void fn_8069A348(void);
void fn_8069A438(void);
void fn_8069A574(void);
void fn_8069A5BC(void);
void fn_8069A5DC(void);
void fn_8069A768(void);
void fn_8069A778(void);
void fn_8069A844(void);
void fn_8069A960(void);
void fn_8069A9B4(void);
void fn_8069A9B8(void);
void fn_8069A9C4(void);
void fn_8069AA04(void);
void fn_8069AA08(void);
void fn_8069AA0C(void);
void fn_8069AA10(void);
void fn_8069AAA4(void);
void fn_8069AAEC(void);
void fn_8069AB14(void);
void fn_8069AB20(void);
void fn_8069ABB8(void);
void fn_8069ABDC(void);
void fn_8069ADD4(void);
void fn_8069AECC(void);
void fn_8069B0BC(void);
void fn_8069B200(void);
void fn_8069B21C(void);
void fn_8069B23C(void);
void fn_8069B278(void);
void fn_8069B284(void);
void fn_8069B8AC(void);
void fn_8069B9B0(void);
void fn_8069BA88(void);
void fn_8069BB48(void);
void fn_8069BC0C(void);
void fn_8069BCB4(void);
void fn_8069BD80(void);
void fn_8069BEB4(void);
void fn_8069BF0C(void);
void fn_8069BFE0(void);
void fn_8069C04C(void);

asm void fn_8069A0D0(void)
{
    nofralloc
    li r4, 0x0
    li r0, -0x1
    stw r4, 0x7d4(r3)
    stw r4, 0x7d8(r3)
    stw r4, 0x7c4(r3)
    stw r4, 0x7c8(r3)
    stw r4, 0x7cc(r3)
    stw r0, 0x7d0(r3)
    stw r4, 0x7dc(r3)
    stw r4, 0x7e0(r3)
    stw r4, 0x7e4(r3)
    blr
}

asm void fn_8069A100(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_806A11D4
    lwz r12, 0x7c4(r3)
    cmpwi r12, 0x0
    beq lbl_fn_8069A100_00000070
    mr r3, r30
    mr r4, r31
    mtctr r12
    bctrl
    b lbl_fn_8069A100_00000074
lbl_fn_8069A100_00000070:
    li r3, 0x0
lbl_fn_8069A100_00000074:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8069A15C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_806A11D4
    lwz r12, 0x7c8(r3)
    cmpwi r12, 0x0
    beq lbl_fn_8069A15C_000000BC
    mr r3, r31
    mtctr r12
    bctrl
lbl_fn_8069A15C_000000BC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8069A1A0(void)
{
    nofralloc
    stw r4, 0x7d8(r3)
    blr
}

asm void fn_8069A1A8(void)
{
    nofralloc
    stw r4, 0x7d4(r3)
    blr
}

asm void fn_8069A1B0(void)
{
    nofralloc
    lwz r3, 0x7d4(r3)
    blr
}

asm void fn_8069A1B8(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_23
    lis r30, lbl_807BC3E0@ha
    mr r31, r3
    mr r25, r4
    mr r23, r5
    mr r24, r6
    addi r30, r30, lbl_807BC3E0@l
    bl fn_806A123C
    mr r29, r3
    mr r3, r31
    bl fn_806A1240
    mr r28, r3
    mr r3, r31
    bl fn_806A1248
    mr r27, r3
    mr r3, r31
    bl fn_806A1258
    mr r26, r3
    mr r3, r31
    bl fn_806A1250
    stw r25, 0x7c4(r29)
    mr r25, r3
    li r31, 0x0
    mr r3, r28
    stw r23, 0x7c8(r29)
    stw r31, 0x7d8(r29)
    stw r31, 0x7d4(r29)
    stw r31, 0x7dc(r29)
    bl fn_8069A768
    mr r3, r27
    bl fn_8069B278
    mr r3, r26
    bl fn_8069A9C4
    bl fn_806A1288
    li r0, -0x1
    stw r0, 0x7d0(r29)
    bl fn_806A11D4
    lwz r12, 0x7c4(r3)
    cmpwi r12, 0x0
    beq lbl_fn_8069A1B8_000001AC
    li r3, 0x2000
    li r4, 0x8
    mtctr r12
    bctrl
    mr r31, r3
lbl_fn_8069A1B8_000001AC:
    cmpwi r31, 0x0
    stw r31, 0x7e0(r29)
    bne lbl_fn_8069A1B8_000001CC
    li r0, 0x1
    stw r0, 0x7d8(r29)
    bl fn_8069AA04
    li r3, 0x0
    b lbl_fn_8069A1B8_00000260
lbl_fn_8069A1B8_000001CC:
    mr r3, r25
    mr r4, r24
    mr r5, r31
    bl fn_8069AA10
    cmpwi r3, 0x0
    bne lbl_fn_8069A1B8_00000220
    li r0, 0x9
    stw r0, 0x7d8(r29)
    lwz r30, 0x7e0(r29)
    bl fn_806A11D4
    lwz r12, 0x7c8(r3)
    cmpwi r12, 0x0
    beq lbl_fn_8069A1B8_0000020C
    mr r3, r30
    mtctr r12
    bctrl
lbl_fn_8069A1B8_0000020C:
    li r0, 0x0
    stw r0, 0x7e0(r29)
    bl fn_8069AA04
    li r3, 0x0
    b lbl_fn_8069A1B8_00000260
lbl_fn_8069A1B8_00000220:
    mr r3, r29
    bl fn_80697E2C
    cmpwi r3, 0x0
    bge lbl_fn_8069A1B8_00000254
    mr r4, r3
    addi r3, r30, 0x0
    crclr 6
    bl OSReport
    addi r3, r30, 0x20
    addi r5, r30, 0x30
    li r4, 0xe6
    crclr 6
    bl OSPanic
lbl_fn_8069A1B8_00000254:
    li r0, 0x1
    li r3, 0x1
    stw r0, 0x7cc(r29)
lbl_fn_8069A1B8_00000260:
    addi r11, r1, 0x30
    bl _restgpr_23
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8069A348(void)
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
    bl fn_806A123C
    mr r30, r3
    mr r3, r28
    bl fn_806A1250
    mr r31, r3
    li r4, 0x1
    bl fn_8069AB20
    mr r3, r28
    bl fn_8069BC0C
    mr r3, r31
    mr r4, r30
    bl fn_8069AAA4
    lwz r31, 0x7e0(r30)
    bl fn_806A11D4
    lwz r12, 0x7c8(r3)
    cmpwi r12, 0x0
    beq lbl_fn_8069A348_000002EC
    mr r3, r31
    mtctr r12
    bctrl
lbl_fn_8069A348_000002EC:
    li r31, 0x0
    stw r31, 0x7e0(r30)
    bl fn_8069AA04
    cmpwi r29, 0x0
    stw r31, 0x7cc(r30)
    beq lbl_fn_8069A348_00000310
    mr r12, r29
    mtctr r12
    bctrl
lbl_fn_8069A348_00000310:
    bl fn_806A0E44
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_8069A348_00000330
    lis r3, lbl_807BC428@ha
    addi r3, r3, lbl_807BC428@l
    crclr 6
    bl fn_806806A4
lbl_fn_8069A348_00000330:
    lwz r3, 0x7d0(r30)
    cmpwi r3, 0x0
    blt lbl_fn_8069A348_00000348
    bl fn_806A39B8
    li r0, -0x1
    stw r0, 0x7d0(r30)
lbl_fn_8069A348_00000348:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8069A438(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lwz r30, 0x0(r3)
    mr r26, r3
    mr r27, r4
    mr r28, r5
    cmpwi r30, 0x0
    mr r29, r6
    li r31, 0x0
    beq lbl_fn_8069A438_000003EC
    lwz r4, 0x8(r30)
    mr r3, r28
    bl fn_8069CD58
    cmpwi r3, 0x0
    beq lbl_fn_8069A438_000003E8
    lwz r30, 0x4(r30)
    b lbl_fn_8069A438_000003D8
lbl_fn_8069A438_000003B8:
    lwz r4, 0x8(r30)
    mr r3, r28
    bl fn_8069CD58
    cmpwi r3, 0x0
    bne lbl_fn_8069A438_000003D4
    li r31, 0x1
    b lbl_fn_8069A438_000003EC
lbl_fn_8069A438_000003D4:
    lwz r30, 0x4(r30)
lbl_fn_8069A438_000003D8:
    lwz r0, 0x0(r26)
    cmplw r30, r0
    bne lbl_fn_8069A438_000003B8
    b lbl_fn_8069A438_000003EC
lbl_fn_8069A438_000003E8:
    li r31, 0x1
lbl_fn_8069A438_000003EC:
    cmpwi r31, 0x0
    beq lbl_fn_8069A438_000003FC
    stw r29, 0xc(r30)
    b lbl_fn_8069A438_00000488
lbl_fn_8069A438_000003FC:
    li r3, 0x18
    li r4, 0x4
    bl fn_8069A100
    cmpwi r3, 0x0
    bne lbl_fn_8069A438_00000434
    lis r3, lbl_807BC468@ha
    addi r3, r3, lbl_807BC468@l
    crclr 6
    bl fn_806806A4
    mr r3, r27
    li r4, 0x1
    bl fn_8069A1A0
    li r3, 0x0
    b lbl_fn_8069A438_0000048C
lbl_fn_8069A438_00000434:
    stw r28, 0x8(r3)
    li r0, 0x0
    stw r29, 0xc(r3)
    stw r0, 0x10(r3)
    stw r0, 0x14(r3)
    lwz r4, 0x0(r26)
    cmpwi r4, 0x0
    beq lbl_fn_8069A438_0000047C
    lwz r0, 0x0(r4)
    stw r0, 0x0(r3)
    lwz r0, 0x0(r26)
    stw r0, 0x4(r3)
    lwz r4, 0x0(r26)
    lwz r4, 0x0(r4)
    stw r3, 0x4(r4)
    lwz r4, 0x0(r26)
    stw r3, 0x0(r4)
    b lbl_fn_8069A438_00000488
lbl_fn_8069A438_0000047C:
    stw r3, 0x4(r3)
    stw r3, 0x0(r3)
    stw r3, 0x0(r26)
lbl_fn_8069A438_00000488:
    li r3, 0x1
lbl_fn_8069A438_0000048C:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8069A574(void)
{
    nofralloc
    lwz r5, 0x0(r3)
    cmpwi r5, 0x0
    beq lbl_fn_8069A574_000004E4
    lwz r4, 0x0(r5)
    cmplw r5, r4
    beq lbl_fn_8069A574_000004DC
    lwz r0, 0x4(r5)
    stw r0, 0x4(r4)
    lwz r0, 0x0(r5)
    lwz r4, 0x4(r5)
    stw r0, 0x0(r4)
    lwz r0, 0x4(r5)
    stw r0, 0x0(r3)
    b lbl_fn_8069A574_000004E4
lbl_fn_8069A574_000004DC:
    li r0, 0x0
    stw r0, 0x0(r3)
lbl_fn_8069A574_000004E4:
    mr r3, r5
    blr
}

asm void fn_8069A5BC(void)
{
    nofralloc
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8069A5BC_00000500
    li r3, 0x0
    blr
lbl_fn_8069A5BC_00000500:
    addi r3, r3, 0x30
    b fn_8069A438
    blr
}

asm void fn_8069A5DC(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_21
    lwz r0, 0x4(r3)
    mr r27, r3
    mr r28, r4
    mr r29, r5
    cmpwi r0, 0x0
    mr r21, r6
    li r31, 0x0
    li r30, 0x0
    beq lbl_fn_8069A5DC_0000054C
    li r3, 0x0
    b lbl_fn_8069A5DC_00000680
lbl_fn_8069A5DC_0000054C:
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8069A5DC_00000570
    lis r3, lbl_807BC484@ha
    addi r3, r3, lbl_807BC484@l
    crclr 6
    bl fn_806806A4
    li r3, 0x0
    b lbl_fn_8069A5DC_00000680
lbl_fn_8069A5DC_00000570:
    cmpwi r6, 0x0
    beq lbl_fn_8069A5DC_00000584
    mr r3, r21
    bl fn_8069C7B4
    mr r30, r3
lbl_fn_8069A5DC_00000584:
    mr r3, r21
    mr r4, r30
    addi r5, r27, 0x3a
    li r6, 0x12
    bl fn_8069CE9C
    cmpwi r3, 0x0
    bge lbl_fn_8069A5DC_000005A8
    li r0, 0x1
    b lbl_fn_8069A5DC_00000648
lbl_fn_8069A5DC_000005A8:
    lis r3, lbl_80767260@ha
    li r24, 0x13
    addi r3, r3, lbl_80767260@l
    addi r23, r3, 0x13
lbl_fn_8069A5DC_000005B8:
    add r22, r27, r24
    lbz r0, 0x0(r23)
    lbz r25, 0x38(r22)
    extsb r26, r0
lbl_fn_8069A5DC_000005C8:
    clrlwi r3, r25, 24
    addi r3, r3, 0x1
    clrlwi r0, r3, 24
    cmplwi r0, 0x7b
    bne lbl_fn_8069A5DC_000005E4
    li r3, 0x30
    b lbl_fn_8069A5DC_00000600
lbl_fn_8069A5DC_000005E4:
    cmplwi r0, 0x5b
    bne lbl_fn_8069A5DC_000005F4
    li r3, 0x61
    b lbl_fn_8069A5DC_00000600
lbl_fn_8069A5DC_000005F4:
    cmplwi r0, 0x3a
    bne lbl_fn_8069A5DC_00000600
    li r3, 0x41
lbl_fn_8069A5DC_00000600:
    extsb r25, r3
    stb r3, 0x38(r22)
    cmpw r25, r26
    beq lbl_fn_8069A5DC_00000634
    mr r3, r21
    mr r4, r30
    addi r5, r27, 0x3a
    li r6, 0x12
    bl fn_8069CE9C
    cmpwi r3, 0x0
    bge lbl_fn_8069A5DC_000005C8
    li r0, 0x1
    b lbl_fn_8069A5DC_00000648
lbl_fn_8069A5DC_00000634:
    subi r24, r24, 0x1
    subi r23, r23, 0x1
    cmpwi r24, 0x2
    bge lbl_fn_8069A5DC_000005B8
    li r0, 0x0
lbl_fn_8069A5DC_00000648:
    cmpwi r0, 0x0
    beq lbl_fn_8069A5DC_0000067C
    mr r4, r28
    mr r5, r29
    mr r6, r21
    addi r3, r27, 0x34
    bl fn_8069A438
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_8069A5DC_0000067C
    lwz r3, 0x34(r27)
    lwz r3, 0x0(r3)
    stw r30, 0x10(r3)
lbl_fn_8069A5DC_0000067C:
    mr r3, r31
lbl_fn_8069A5DC_00000680:
    addi r11, r1, 0x40
    bl _restgpr_21
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8069A768(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    blr
}

asm void fn_8069A778(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, -0x1
    stw r30, 0x18(r1)
    mr r30, r4
    li r4, 0x4
    stw r29, 0x14(r1)
    mr r29, r3
    li r3, 0x14
    bl fn_8069A100
    cmpwi r3, 0x0
    beq lbl_fn_8069A778_00000754
    lwz r4, 0x0(r29)
    cmpwi r4, 0x0
    beq lbl_fn_8069A778_00000714
    lwz r0, 0x0(r4)
    stw r0, 0x0(r3)
    lwz r0, 0x0(r29)
    stw r0, 0x4(r3)
    lwz r4, 0x0(r29)
    lwz r4, 0x0(r4)
    stw r3, 0x4(r4)
    lwz r4, 0x0(r29)
    stw r3, 0x0(r4)
    b lbl_fn_8069A778_00000720
lbl_fn_8069A778_00000714:
    stw r3, 0x0(r3)
    stw r3, 0x4(r3)
    stw r3, 0x0(r29)
lbl_fn_8069A778_00000720:
    lwz r4, 0x4(r29)
    li r0, -0x1
    stw r4, 0x8(r3)
    addi r4, r4, 0x1
    stw r4, 0x4(r29)
    stw r30, 0xc(r3)
    stw r0, 0x10(r3)
    lwz r0, 0x4(r29)
    lwz r31, 0x8(r3)
    cmpwi r0, 0x0
    bge lbl_fn_8069A778_00000754
    li r0, 0x0
    stw r0, 0x4(r29)
lbl_fn_8069A778_00000754:
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8069A844(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r7, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    lwz r6, 0x0(r3)
    cmpwi r6, 0x0
    beq lbl_fn_8069A844_000007E0
    lwz r0, 0x8(r6)
    cmpw r0, r5
    bne lbl_fn_8069A844_000007B8
    mr r31, r6
    b lbl_fn_8069A844_000007E0
lbl_fn_8069A844_000007B8:
    lwz r4, 0x4(r6)
    b lbl_fn_8069A844_000007D8
lbl_fn_8069A844_000007C0:
    lwz r0, 0x8(r4)
    cmpw r0, r5
    bne lbl_fn_8069A844_000007D4
    mr r31, r4
    b lbl_fn_8069A844_000007E0
lbl_fn_8069A844_000007D4:
    lwz r4, 0x4(r4)
lbl_fn_8069A844_000007D8:
    cmplw r4, r6
    bne lbl_fn_8069A844_000007C0
lbl_fn_8069A844_000007E0:
    cmpwi r31, 0x0
    beq lbl_fn_8069A844_00000870
    lwz r0, 0x0(r6)
    cmplw r6, r0
    beq lbl_fn_8069A844_00000824
    lwz r0, 0x4(r31)
    lwz r4, 0x0(r31)
    stw r0, 0x4(r4)
    lwz r0, 0x0(r31)
    lwz r4, 0x4(r31)
    stw r0, 0x0(r4)
    lwz r0, 0x0(r3)
    cmplw r0, r31
    bne lbl_fn_8069A844_0000082C
    lwz r0, 0x4(r31)
    stw r0, 0x0(r3)
    b lbl_fn_8069A844_0000082C
lbl_fn_8069A844_00000824:
    li r0, 0x0
    stw r0, 0x0(r3)
lbl_fn_8069A844_0000082C:
    lwz r4, 0xc(r31)
    mr r3, r29
    bl fn_806A0DA4
    lwz r4, 0xc(r31)
    mr r30, r3
    mr r3, r29
    bl fn_8069B9B0
    mr r3, r31
    bl fn_8069A15C
    cmpwi r30, 0x0
    beq lbl_fn_8069A844_0000086C
    li r0, 0x8
    mr r3, r29
    stw r0, 0x4(r30)
    mr r4, r30
    bl fn_806A117C
lbl_fn_8069A844_0000086C:
    li r7, 0x1
lbl_fn_8069A844_00000870:
    lwz r31, 0x1c(r1)
    mr r3, r7
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8069A960(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    b lbl_fn_8069A960_000008C0
lbl_fn_8069A960_000008B0:
    lwz r5, 0x8(r3)
    mr r3, r30
    mr r4, r31
    bl fn_8069A844
lbl_fn_8069A960_000008C0:
    lwz r3, 0x0(r30)
    cmpwi r3, 0x0
    bne lbl_fn_8069A960_000008B0
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8069A9B4(void)
{
    nofralloc
    b fn_8069A574
}

asm void fn_8069A9B8(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x18(r3)
    blr
}

asm void fn_8069A9C4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x18(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8069A9C4_00000920
    bl fn_805F30F0
    li r0, 0x1
    stw r0, 0x18(r31)
lbl_fn_8069A9C4_00000920:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8069AA04(void)
{
    nofralloc
    blr
}

asm void fn_8069AA08(void)
{
    nofralloc
    b fn_805F3130
}

asm void fn_8069AA0C(void)
{
    nofralloc
    b fn_805F3210
}

asm void fn_8069AA10(void)
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
    bl fn_8069D13C
    cmpwi r3, 0x0
    bne lbl_fn_8069AA10_00000988
    mr r3, r29
    addi r4, r29, 0x20
    li r5, 0x3
    bl fn_805F2670
    mr r3, r29
    bl fn_8069D130
lbl_fn_8069AA10_00000988:
    lis r4, fn_8069ABB8@ha
    mr r8, r30
    addi r3, r29, 0x30
    addi r6, r31, 0x2000
    addi r4, r4, fn_8069ABB8@l
    li r5, 0x0
    li r7, 0x2000
    li r9, 0x0
    bl OSCreateThread
    addi r3, r29, 0x30
    bl OSResumeThread
    lwz r31, 0x1c(r1)
    li r3, 0x1
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8069AAA4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x0
    stw r0, 0x14(r1)
    li r0, 0x1
    stw r31, 0xc(r1)
    mr r31, r3
    stw r0, 0x7dc(r4)
    li r4, 0x0
    bl fn_805F26D0
    addi r3, r31, 0x30
    li r4, 0x0
    bl OSJoinThread
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8069AAEC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x1
    stw r0, 0x14(r1)
    addi r4, r1, 0x8
    bl fn_805F27A0
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8069AB14(void)
{
    nofralloc
    li r4, 0x0
    li r5, 0x0
    b fn_805F26D0
}

asm void fn_8069AB20(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_807BC4C0@ha
    addi r31, r31, lbl_807BC4C0@l
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bl OSGetCurrentThread
    cmpwi r3, 0x0
    addi r0, r29, 0x30
    beq lbl_fn_8069AB20_00000ACC
    cmpwi r30, 0x0
    bne lbl_fn_8069AB20_00000A98
    cmplw r3, r0
    bne lbl_fn_8069AB20_00000AA8
lbl_fn_8069AB20_00000A98:
    cmpwi r30, 0x0
    beq lbl_fn_8069AB20_00000ACC
    cmplw r3, r0
    bne lbl_fn_8069AB20_00000ACC
lbl_fn_8069AB20_00000AA8:
    addi r3, r31, 0x1c
    addi r4, r31, 0x0
    crclr 6
    bl OSReport
    addi r3, r31, 0x30
    li r4, 0xdf
    la r5, lbl_8087ED50
    crclr 6
    bl OSPanic
lbl_fn_8069AB20_00000ACC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8069ABB8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_8069FAC4
    lwz r0, 0x14(r1)
    li r3, 0x0
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8069ABDC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    cmpwi r6, 0x0
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    beq lbl_fn_8069ABDC_00000B28
    li r0, -0x1
    stw r0, 0x0(r6)
lbl_fn_8069ABDC_00000B28:
    cmpw r4, r5
    bge lbl_fn_8069ABDC_00000CF0
    cmpwi r4, 0x400
    li r10, -0x1
    li r30, 0x0
    bge lbl_fn_8069ABDC_00000B4C
    mr r31, r4
    li r12, 0x0
    b lbl_fn_8069ABDC_00000BA8
lbl_fn_8069ABDC_00000B4C:
    subi r0, r4, 0x400
    lwz r12, 0x34(r3)
    srawi. r8, r0, 9
    beq lbl_fn_8069ABDC_00000BA0
    srwi. r0, r8, 3
    mtctr r0
    beq lbl_fn_8069ABDC_00000B94
lbl_fn_8069ABDC_00000B68:
    lwz r12, 0x0(r12)
    lwz r12, 0x0(r12)
    lwz r12, 0x0(r12)
    lwz r12, 0x0(r12)
    lwz r12, 0x0(r12)
    lwz r12, 0x0(r12)
    lwz r12, 0x0(r12)
    lwz r12, 0x0(r12)
    bdnz lbl_fn_8069ABDC_00000B68
    andi. r8, r8, 0x7
    beq lbl_fn_8069ABDC_00000BA0
lbl_fn_8069ABDC_00000B94:
    mtctr r8
lbl_fn_8069ABDC_00000B98:
    lwz r12, 0x0(r12)
    bdnz lbl_fn_8069ABDC_00000B98
lbl_fn_8069ABDC_00000BA0:
    subi r0, r4, 0x400
    clrlwi r31, r0, 23
lbl_fn_8069ABDC_00000BA8:
    subf r0, r4, r5
    li r8, 0x1
    mtctr r0
    cmpw r4, r5
    bge lbl_fn_8069ABDC_00000CF0
lbl_fn_8069ABDC_00000BBC:
    cmpwi r12, 0x0
    bne lbl_fn_8069ABDC_00000BEC
    cmpwi r31, 0x400
    bge lbl_fn_8069ABDC_00000BE0
    add r9, r3, r31
    addi r31, r31, 0x1
    lbz r0, 0x38(r9)
    extsb r11, r0
    b lbl_fn_8069ABDC_00000C08
lbl_fn_8069ABDC_00000BE0:
    lwz r12, 0x34(r3)
    li r31, 0x0
    b lbl_fn_8069ABDC_00000BFC
lbl_fn_8069ABDC_00000BEC:
    cmpwi r31, 0x200
    bne lbl_fn_8069ABDC_00000BFC
    li r31, 0x0
    lwz r12, 0x0(r12)
lbl_fn_8069ABDC_00000BFC:
    add r9, r12, r31
    addi r31, r31, 0x1
    lbz r11, 0x4(r9)
lbl_fn_8069ABDC_00000C08:
    extsb r0, r11
    cmpwi r0, 0x3a
    bne lbl_fn_8069ABDC_00000C2C
    cmpwi r6, 0x0
    beq lbl_fn_8069ABDC_00000C2C
    lwz r0, 0x0(r6)
    cmpwi r0, 0x0
    bge lbl_fn_8069ABDC_00000C2C
    stw r4, 0x0(r6)
lbl_fn_8069ABDC_00000C2C:
    cmpwi r30, 0x0
    beq lbl_fn_8069ABDC_00000C74
    extsb r0, r11
    cmpwi r0, 0xa
    bne lbl_fn_8069ABDC_00000C6C
    subi r3, r5, 0x1
    cmpwi r7, 0x0
    subf r5, r3, r4
    addi r0, r4, 0x1
    subf r3, r4, r3
    nor r3, r5, r3
    srawi r3, r3, 31
    andc r10, r0, r3
    beq lbl_fn_8069ABDC_00000C6C
    li r0, 0x2
    stw r0, 0x0(r7)
lbl_fn_8069ABDC_00000C6C:
    mr r3, r10
    b lbl_fn_8069ABDC_00000CF4
lbl_fn_8069ABDC_00000C74:
    extsb r0, r11
    cmpwi r0, 0xd
    bne lbl_fn_8069ABDC_00000CAC
    subi r9, r5, 0x1
    cmpwi r7, 0x0
    subf r10, r9, r4
    addi r0, r4, 0x1
    subf r9, r4, r9
    li r30, 0x1
    nor r9, r10, r9
    srawi r9, r9, 31
    andc r10, r0, r9
    beq lbl_fn_8069ABDC_00000CAC
    stw r8, 0x0(r7)
lbl_fn_8069ABDC_00000CAC:
    extsb r0, r11
    cmpwi r0, 0xa
    bne lbl_fn_8069ABDC_00000CE8
    subi r3, r5, 0x1
    cmpwi r7, 0x0
    subf r5, r3, r4
    addi r0, r4, 0x1
    subf r3, r4, r3
    nor r3, r5, r3
    srawi r3, r3, 31
    andc r3, r0, r3
    beq lbl_fn_8069ABDC_00000CF4
    li r0, 0x1
    stw r0, 0x0(r7)
    b lbl_fn_8069ABDC_00000CF4
lbl_fn_8069ABDC_00000CE8:
    addi r4, r4, 0x1
    bdnz lbl_fn_8069ABDC_00000BBC
lbl_fn_8069ABDC_00000CF0:
    li r3, -0x1
lbl_fn_8069ABDC_00000CF4:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    addi r1, r1, 0x10
    blr
}

asm void fn_8069ADD4(void)
{
    nofralloc
    cmpw r4, r5
    bge lbl_fn_8069ADD4_00000DF4
    cmpwi r4, 0x400
    bge lbl_fn_8069ADD4_00000D20
    mr r6, r4
    li r7, 0x0
    b lbl_fn_8069ADD4_00000D7C
lbl_fn_8069ADD4_00000D20:
    subi r0, r4, 0x400
    lwz r7, 0x34(r3)
    srawi. r6, r0, 9
    beq lbl_fn_8069ADD4_00000D74
    srwi. r0, r6, 3
    mtctr r0
    beq lbl_fn_8069ADD4_00000D68
lbl_fn_8069ADD4_00000D3C:
    lwz r7, 0x0(r7)
    lwz r7, 0x0(r7)
    lwz r7, 0x0(r7)
    lwz r7, 0x0(r7)
    lwz r7, 0x0(r7)
    lwz r7, 0x0(r7)
    lwz r7, 0x0(r7)
    lwz r7, 0x0(r7)
    bdnz lbl_fn_8069ADD4_00000D3C
    andi. r6, r6, 0x7
    beq lbl_fn_8069ADD4_00000D74
lbl_fn_8069ADD4_00000D68:
    mtctr r6
lbl_fn_8069ADD4_00000D6C:
    lwz r7, 0x0(r7)
    bdnz lbl_fn_8069ADD4_00000D6C
lbl_fn_8069ADD4_00000D74:
    subi r0, r4, 0x400
    clrlwi r6, r0, 23
lbl_fn_8069ADD4_00000D7C:
    subf r0, r4, r5
    mtctr r0
    cmpw r4, r5
    bge lbl_fn_8069ADD4_00000DF4
lbl_fn_8069ADD4_00000D8C:
    cmpwi r7, 0x0
    bne lbl_fn_8069ADD4_00000DBC
    cmpwi r6, 0x400
    bge lbl_fn_8069ADD4_00000DB0
    add r5, r3, r6
    addi r6, r6, 0x1
    lbz r0, 0x38(r5)
    extsb r0, r0
    b lbl_fn_8069ADD4_00000DD8
lbl_fn_8069ADD4_00000DB0:
    lwz r7, 0x34(r3)
    li r6, 0x0
    b lbl_fn_8069ADD4_00000DCC
lbl_fn_8069ADD4_00000DBC:
    cmpwi r6, 0x200
    bne lbl_fn_8069ADD4_00000DCC
    li r6, 0x0
    lwz r7, 0x0(r7)
lbl_fn_8069ADD4_00000DCC:
    add r5, r7, r6
    addi r6, r6, 0x1
    lbz r0, 0x4(r5)
lbl_fn_8069ADD4_00000DD8:
    extsb r0, r0
    cmpwi r0, 0x20
    beq lbl_fn_8069ADD4_00000DEC
    mr r3, r4
    blr
lbl_fn_8069ADD4_00000DEC:
    addi r4, r4, 0x1
    bdnz lbl_fn_8069ADD4_00000D8C
lbl_fn_8069ADD4_00000DF4:
    li r3, -0x1
    blr
}

asm void fn_8069AECC(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    cmpw r4, r5
    bge lbl_fn_8069AECC_00000FD0
    cmpwi r4, 0x400
    bge lbl_fn_8069AECC_00000E2C
    mr r9, r4
    li r8, 0x0
    b lbl_fn_8069AECC_00000E88
lbl_fn_8069AECC_00000E2C:
    subi r0, r4, 0x400
    lwz r8, 0x34(r3)
    srawi. r9, r0, 9
    beq lbl_fn_8069AECC_00000E80
    srwi. r0, r9, 3
    mtctr r0
    beq lbl_fn_8069AECC_00000E74
lbl_fn_8069AECC_00000E48:
    lwz r8, 0x0(r8)
    lwz r8, 0x0(r8)
    lwz r8, 0x0(r8)
    lwz r8, 0x0(r8)
    lwz r8, 0x0(r8)
    lwz r8, 0x0(r8)
    lwz r8, 0x0(r8)
    lwz r8, 0x0(r8)
    bdnz lbl_fn_8069AECC_00000E48
    andi. r9, r9, 0x7
    beq lbl_fn_8069AECC_00000E80
lbl_fn_8069AECC_00000E74:
    mtctr r9
lbl_fn_8069AECC_00000E78:
    lwz r8, 0x0(r8)
    bdnz lbl_fn_8069AECC_00000E78
lbl_fn_8069AECC_00000E80:
    subi r0, r4, 0x400
    clrlwi r9, r0, 23
lbl_fn_8069AECC_00000E88:
    cmpwi r8, 0x0
    bne lbl_fn_8069AECC_00000EB8
    cmpwi r9, 0x400
    bge lbl_fn_8069AECC_00000EAC
    add r10, r3, r9
    addi r9, r9, 0x1
    lbz r0, 0x38(r10)
    extsb r25, r0
    b lbl_fn_8069AECC_00000ED4
lbl_fn_8069AECC_00000EAC:
    lwz r8, 0x34(r3)
    li r9, 0x0
    b lbl_fn_8069AECC_00000EC8
lbl_fn_8069AECC_00000EB8:
    cmpwi r9, 0x200
    bne lbl_fn_8069AECC_00000EC8
    li r9, 0x0
    lwz r8, 0x0(r8)
lbl_fn_8069AECC_00000EC8:
    add r10, r8, r9
    addi r9, r9, 0x1
    lbz r25, 0x4(r10)
lbl_fn_8069AECC_00000ED4:
    extsb r7, r7
    subi r0, r5, 0x1
    li r28, 0x41
    li r29, 0x0
    li r31, 0x5a
    b lbl_fn_8069AECC_00000F68
lbl_fn_8069AECC_00000EEC:
    extsb. r5, r5
    beq lbl_fn_8069AECC_00000F0C
    cmpwi r5, 0x20
    beq lbl_fn_8069AECC_00000F0C
    cmpw r5, r7
    beq lbl_fn_8069AECC_00000F0C
    cmpw r4, r0
    bne lbl_fn_8069AECC_00000F14
lbl_fn_8069AECC_00000F0C:
    li r3, 0x0
    b lbl_fn_8069AECC_00000FD4
lbl_fn_8069AECC_00000F14:
    cmpwi r8, 0x0
    bne lbl_fn_8069AECC_00000F44
    cmpwi r9, 0x400
    bge lbl_fn_8069AECC_00000F38
    add r5, r3, r9
    addi r9, r9, 0x1
    lbz r5, 0x38(r5)
    extsb r25, r5
    b lbl_fn_8069AECC_00000F60
lbl_fn_8069AECC_00000F38:
    lwz r8, 0x34(r3)
    li r9, 0x0
    b lbl_fn_8069AECC_00000F54
lbl_fn_8069AECC_00000F44:
    cmpwi r9, 0x200
    bne lbl_fn_8069AECC_00000F54
    li r9, 0x0
    lwz r8, 0x0(r8)
lbl_fn_8069AECC_00000F54:
    add r5, r8, r9
    addi r9, r9, 0x1
    lbz r25, 0x4(r5)
lbl_fn_8069AECC_00000F60:
    addi r4, r4, 0x1
    addi r6, r6, 0x1
lbl_fn_8069AECC_00000F68:
    lbz r5, 0x0(r6)
    extsb r30, r5
    srawi r12, r30, 31
    subfc r10, r28, r30
    srwi r11, r30, 31
    adde r27, r12, r29
    addi r26, r30, 0x20
    srawi r12, r31, 31
    subfc r10, r30, r31
    adde r10, r12, r11
    and. r10, r27, r10
    bne lbl_fn_8069AECC_00000F9C
    mr r26, r30
lbl_fn_8069AECC_00000F9C:
    extsb r27, r25
    srawi r12, r27, 31
    subfc r10, r28, r27
    srwi r11, r27, 31
    adde r30, r12, r29
    srawi r12, r31, 31
    subfc r10, r27, r31
    adde r10, r12, r11
    and. r10, r30, r10
    beq lbl_fn_8069AECC_00000FC8
    addi r27, r27, 0x20
lbl_fn_8069AECC_00000FC8:
    cmpw r27, r26
    beq lbl_fn_8069AECC_00000EEC
lbl_fn_8069AECC_00000FD0:
    li r3, -0x1
lbl_fn_8069AECC_00000FD4:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8069B0BC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lwz r0, 0x0(r3)
    add r7, r5, r6
    mr r30, r3
    mr r27, r4
    cmpw r7, r0
    mr r28, r5
    mr r29, r6
    bgt lbl_fn_8069B0BC_00001114
    cmpwi r6, 0x0
    beq lbl_fn_8069B0BC_0000110C
    cmpwi r5, 0x400
    bge lbl_fn_8069B0BC_00001064
    subfic r0, r5, 0x400
    mr r31, r29
    cmpw r6, r0
    ble lbl_fn_8069B0BC_00001044
    mr r31, r0
lbl_fn_8069B0BC_00001044:
    add r4, r30, r5
    mr r3, r27
    mr r5, r31
    addi r4, r4, 0x38
    bl fn_8069C7B0
    add r28, r28, r31
    subf r29, r31, r29
    add r27, r27, r31
lbl_fn_8069B0BC_00001064:
    cmpwi r29, 0x0
    beq lbl_fn_8069B0BC_0000110C
    subi r28, r28, 0x400
    lwz r30, 0x34(r30)
    srawi. r3, r28, 9
    clrlwi r28, r28, 23
    beq lbl_fn_8069B0BC_00001104
    srwi. r0, r3, 3
    mtctr r0
    beq lbl_fn_8069B0BC_000010B8
lbl_fn_8069B0BC_0000108C:
    lwz r30, 0x0(r30)
    lwz r30, 0x0(r30)
    lwz r30, 0x0(r30)
    lwz r30, 0x0(r30)
    lwz r30, 0x0(r30)
    lwz r30, 0x0(r30)
    lwz r30, 0x0(r30)
    lwz r30, 0x0(r30)
    bdnz lbl_fn_8069B0BC_0000108C
    andi. r3, r3, 0x7
    beq lbl_fn_8069B0BC_00001104
lbl_fn_8069B0BC_000010B8:
    mtctr r3
lbl_fn_8069B0BC_000010BC:
    lwz r30, 0x0(r30)
    bdnz lbl_fn_8069B0BC_000010BC
    b lbl_fn_8069B0BC_00001104
lbl_fn_8069B0BC_000010C8:
    subfic r0, r28, 0x200
    mr r31, r29
    cmpw r29, r0
    ble lbl_fn_8069B0BC_000010DC
    mr r31, r0
lbl_fn_8069B0BC_000010DC:
    add r4, r30, r28
    mr r3, r27
    mr r5, r31
    addi r4, r4, 0x4
    bl fn_8069C7B0
    add r28, r28, r31
    lwz r30, 0x0(r30)
    clrlwi r28, r28, 23
    subf r29, r31, r29
    add r27, r27, r31
lbl_fn_8069B0BC_00001104:
    cmpwi r29, 0x0
    bne lbl_fn_8069B0BC_000010C8
lbl_fn_8069B0BC_0000110C:
    li r3, 0x1
    b lbl_fn_8069B0BC_00001118
lbl_fn_8069B0BC_00001114:
    li r3, 0x0
lbl_fn_8069B0BC_00001118:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8069B200(void)
{
    nofralloc
    lwz r3, 0x1c(r3)
    subf r0, r3, r4
    orc r3, r4, r3
    srwi r0, r0, 1
    subf r0, r0, r3
    srwi r3, r0, 31
    blr
}

asm void fn_8069B21C(void)
{
    nofralloc
    lwz r9, 0x2c(r4)
    mr r8, r7
    mr r10, r6
    lwz r7, 0x28(r9)
    lwz r0, 0x1c(r9)
    add r6, r7, r6
    subf r7, r10, r0
    b fn_8069C3C8
}

asm void fn_8069B23C(void)
{
    nofralloc
    lwz r10, 0x2c(r4)
    lwz r0, 0x1c(r10)
    cmplw r0, r6
    bgt lbl_fn_8069B23C_00001184
    li r3, -0x3eb
    blr
lbl_fn_8069B23C_00001184:
    lwz r9, 0x1c(r10)
    lwz r0, 0x28(r10)
    subf r9, r6, r9
    cmpw r7, r9
    add r6, r0, r6
    ble lbl_fn_8069B23C_000011A0
    mr r7, r9
lbl_fn_8069B23C_000011A0:
    b fn_8069C3C8
    blr
}

asm void fn_8069B278(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    blr
}

asm void fn_8069B284(void)
{
    nofralloc
    stwu r1, -0x140(r1)
    mflr r0
    stw r0, 0x144(r1)
    addi r11, r1, 0x140
    bl _savegpr_19
    cmpwi r5, 0x3
    mr r20, r3
    mr r28, r4
    mr r21, r5
    mr r27, r6
    mr r26, r7
    mr r22, r8
    mr r24, r9
    mr r19, r10
    addi r25, r1, 0x8
    li r23, 0x0
    bge lbl_fn_8069B284_00001200
    cmpwi r5, 0x0
    bge lbl_fn_8069B284_00001210
lbl_fn_8069B284_00001200:
    mr r3, r20
    li r4, 0xb
    bl fn_8069A1A0
    b lbl_fn_8069B284_00001764
lbl_fn_8069B284_00001210:
    li r3, 0x258
    li r4, 0x4
    bl fn_8069A100
    cmpwi r3, 0x0
    mr r23, r3
    bne lbl_fn_8069B284_00001238
    mr r3, r20
    li r4, 0x1
    bl fn_8069A1A0
    b lbl_fn_8069B284_00001764
lbl_fn_8069B284_00001238:
    li r4, 0x258
    bl fn_8069C7BC
    li r3, 0x43c
    li r4, 0x4
    bl fn_8069A100
    cmpwi r3, 0x0
    stw r3, 0x2c(r23)
    bne lbl_fn_8069B284_00001268
    mr r3, r20
    li r4, 0x1
    bl fn_8069A1A0
    b lbl_fn_8069B284_00001764
lbl_fn_8069B284_00001268:
    li r4, 0x43c
    bl fn_8069C7BC
    lwz r4, 0x2c(r23)
    mr r3, r28
    stw r27, 0x28(r4)
    lwz r4, 0x2c(r23)
    stw r26, 0x1c(r4)
    lwz r4, 0x2c(r23)
    stw r24, 0x2c(r4)
    lwz r4, 0x2c(r23)
    stw r19, 0x30(r4)
    bl fn_8069C7B4
    cmpwi r3, 0x7
    mr r19, r3
    bgt lbl_fn_8069B284_000012B4
    mr r3, r20
    li r4, 0x4
    bl fn_8069A1A0
    b lbl_fn_8069B284_00001764
lbl_fn_8069B284_000012B4:
    addi r3, r3, 0x1
    cmpwi r3, 0x100
    ble lbl_fn_8069B284_000012E4
    li r4, 0x4
    bl fn_8069A100
    cmpwi r3, 0x0
    mr r25, r3
    bne lbl_fn_8069B284_000012E4
    mr r3, r20
    li r4, 0x4
    bl fn_8069A1A0
    b lbl_fn_8069B284_00001764
lbl_fn_8069B284_000012E4:
    mr r3, r25
    mr r4, r19
    bl fn_8069C7BC
    mr r3, r25
    mr r4, r28
    mr r5, r19
    bl fn_8069C7B0
    li r0, 0x50
    mr r3, r25
    stw r0, 0x20(r23)
    li r29, 0x7
    la r4, lbl_8087ED58
    li r5, 0x7
    bl fn_8069C7C8
    cmpwi r3, 0x0
    beq lbl_fn_8069B284_00001364
    lis r4, lbl_807BC500@ha
    mr r3, r25
    addi r4, r4, lbl_807BC500@l
    li r5, 0x8
    bl fn_8069C7C8
    cmpwi r3, 0x0
    beq lbl_fn_8069B284_00001350
    mr r3, r20
    li r4, 0x4
    bl fn_8069A1A0
    b lbl_fn_8069B284_00001764
lbl_fn_8069B284_00001350:
    li r3, 0x1
    li r0, 0x1bb
    stw r3, 0x8(r23)
    li r29, 0x8
    stw r0, 0x20(r23)
lbl_fn_8069B284_00001364:
    subf. r28, r29, r19
    add r24, r25, r29
    bgt lbl_fn_8069B284_00001380
    mr r3, r20
    li r4, 0x4
    bl fn_8069A1A0
    b lbl_fn_8069B284_00001764
lbl_fn_8069B284_00001380:
    mr r19, r24
    li r26, 0x0
    li r27, 0x0
    li r30, 0x0
    b lbl_fn_8069B284_00001404
lbl_fn_8069B284_00001394:
    cmpwi r30, 0x2
    bne lbl_fn_8069B284_000013A4
    subi r30, r30, 0x1
    b lbl_fn_8069B284_000013FC
lbl_fn_8069B284_000013A4:
    cmpwi r30, 0x1
    bne lbl_fn_8069B284_000013E8
    add r3, r26, r24
    li r4, 0x2
    subi r3, r3, 0x1
    bl fn_8069CA18
    extsb. r0, r3
    subi r30, r30, 0x1
    bge lbl_fn_8069B284_000013D8
    mr r3, r20
    li r4, 0x4
    bl fn_8069A1A0
    b lbl_fn_8069B284_00001764
lbl_fn_8069B284_000013D8:
    cmpwi r0, 0x2f
    bne lbl_fn_8069B284_000013FC
    subi r27, r27, 0x1
    b lbl_fn_8069B284_00001418
lbl_fn_8069B284_000013E8:
    extsb r0, r3
    cmpwi r0, 0x25
    bne lbl_fn_8069B284_000013FC
    li r30, 0x2
    addi r27, r27, 0x1
lbl_fn_8069B284_000013FC:
    addi r26, r26, 0x1
    addi r19, r19, 0x1
lbl_fn_8069B284_00001404:
    cmpw r26, r28
    bge lbl_fn_8069B284_00001418
    lbz r3, 0x0(r19)
    cmpwi r3, 0x2f
    bne lbl_fn_8069B284_00001394
lbl_fn_8069B284_00001418:
    cmpwi r30, 0x0
    beq lbl_fn_8069B284_00001430
    mr r3, r20
    li r4, 0x4
    bl fn_8069A1A0
    b lbl_fn_8069B284_00001764
lbl_fn_8069B284_00001430:
    slwi r3, r27, 1
    add r0, r29, r28
    subf r3, r3, r0
    li r4, 0x4
    addi r19, r3, 0x1
    mr r3, r19
    bl fn_8069A100
    cmpwi r3, 0x0
    stw r3, 0x24(r23)
    bne lbl_fn_8069B284_00001468
    mr r3, r20
    li r4, 0x1
    bl fn_8069A1A0
    b lbl_fn_8069B284_00001764
lbl_fn_8069B284_00001468:
    mr r4, r19
    bl fn_8069C7BC
    lwz r3, 0x24(r23)
    mr r4, r25
    mr r5, r29
    bl fn_8069C7B0
    mr r19, r24
    li r31, 0x0
    li r27, 0x0
    li r30, 0x0
    li r26, 0x0
    b lbl_fn_8069B284_00001538
lbl_fn_8069B284_00001498:
    cmpwi r30, 0x2
    bne lbl_fn_8069B284_000014A8
    subi r30, r30, 0x1
    b lbl_fn_8069B284_00001530
lbl_fn_8069B284_000014A8:
    cmpwi r30, 0x1
    bne lbl_fn_8069B284_000014E8
    add r3, r31, r24
    li r4, 0x2
    subi r3, r3, 0x1
    bl fn_8069CA18
    lwz r4, 0x24(r23)
    extsb r5, r3
    add r0, r27, r29
    subi r30, r30, 0x1
    add r4, r4, r0
    cmpwi r5, 0x2f
    stb r3, -0x1(r4)
    bne lbl_fn_8069B284_00001530
    li r26, 0x1
    b lbl_fn_8069B284_00001530
lbl_fn_8069B284_000014E8:
    lbz r5, 0x0(r19)
    cmpwi r5, 0x2f
    bne lbl_fn_8069B284_000014F8
    li r26, 0x1
lbl_fn_8069B284_000014F8:
    extsb r3, r5
    cntlzw r4, r26
    subi r0, r3, 0x25
    cntlzw r0, r0
    srwi r3, r4, 5
    srwi r0, r0, 5
    and. r0, r3, r0
    beq lbl_fn_8069B284_00001520
    li r30, 0x2
    b lbl_fn_8069B284_0000152C
lbl_fn_8069B284_00001520:
    lwz r3, 0x24(r23)
    add r0, r27, r29
    stbx r5, r3, r0
lbl_fn_8069B284_0000152C:
    addi r27, r27, 0x1
lbl_fn_8069B284_00001530:
    addi r31, r31, 0x1
    addi r19, r19, 0x1
lbl_fn_8069B284_00001538:
    cmpw r31, r28
    blt lbl_fn_8069B284_00001498
    lwz r3, 0x24(r23)
    add r0, r29, r27
    li r4, 0x0
    li r5, 0x0
    stbx r4, r3, r0
    lwz r0, 0x24(r23)
    add r4, r0, r29
    mr r3, r4
    mtctr r27
    cmpwi r27, 0x0
    ble lbl_fn_8069B284_0000159C
lbl_fn_8069B284_0000156C:
    lbz r0, 0x0(r3)
    extsb r0, r0
    cmpwi r0, 0x2f
    beq lbl_fn_8069B284_00001584
    cmpwi r0, 0x3a
    bne lbl_fn_8069B284_00001590
lbl_fn_8069B284_00001584:
    add r0, r5, r29
    stw r0, 0x14(r23)
    b lbl_fn_8069B284_0000159C
lbl_fn_8069B284_00001590:
    addi r5, r5, 0x1
    addi r3, r3, 0x1
    bdnz lbl_fn_8069B284_0000156C
lbl_fn_8069B284_0000159C:
    cmpw cr1, r5, r27
    bne cr1, lbl_fn_8069B284_000015B4
    add r0, r5, r29
    stw r0, 0x14(r23)
    stw r0, 0x18(r23)
    b lbl_fn_8069B284_00001674
lbl_fn_8069B284_000015B4:
    lbzx r0, r4, r5
    extsb r0, r0
    cmpwi r0, 0x2f
    bne lbl_fn_8069B284_000015D0
    lwz r0, 0x14(r23)
    stw r0, 0x18(r23)
    b lbl_fn_8069B284_00001674
lbl_fn_8069B284_000015D0:
    cmpwi r0, 0x3a
    bne lbl_fn_8069B284_00001674
    subf r0, r5, r27
    add r3, r4, r5
    mtctr r0
    bge cr1, lbl_fn_8069B284_0000160C
lbl_fn_8069B284_000015E8:
    lbz r0, 0x0(r3)
    cmpwi r0, 0x2f
    bne lbl_fn_8069B284_00001600
    add r0, r5, r29
    stw r0, 0x18(r23)
    b lbl_fn_8069B284_0000160C
lbl_fn_8069B284_00001600:
    addi r5, r5, 0x1
    addi r3, r3, 0x1
    bdnz lbl_fn_8069B284_000015E8
lbl_fn_8069B284_0000160C:
    cmpw r5, r27
    bne lbl_fn_8069B284_00001620
    add r0, r5, r29
    stw r0, 0x18(r23)
    b lbl_fn_8069B284_00001674
lbl_fn_8069B284_00001620:
    lwz r4, 0x14(r23)
    lwz r3, 0x24(r23)
    addi r4, r4, 0x1
    lwz r0, 0x18(r23)
    add r3, r3, r4
    subf r4, r4, r0
    bl fn_8069CE0C
    cmpwi r3, 0x0
    bge lbl_fn_8069B284_0000164C
    lwz r3, 0x20(r23)
    b lbl_fn_8069B284_0000166C
lbl_fn_8069B284_0000164C:
    lis r4, 0x1
    subi r0, r4, 0x1
    cmpw r3, r0
    ble lbl_fn_8069B284_0000166C
    mr r3, r20
    li r4, 0x4
    bl fn_8069A1A0
    b lbl_fn_8069B284_00001764
lbl_fn_8069B284_0000166C:
    clrlwi r0, r3, 16
    stw r0, 0x20(r23)
lbl_fn_8069B284_00001674:
    lwz r5, 0x8(r23)
    li r4, 0x4
    lwz r0, 0x14(r23)
    neg r3, r5
    or r3, r3, r5
    srwi r3, r3, 31
    addi r3, r3, 0x7
    subf r19, r3, r0
    addi r3, r19, 0x1
    bl fn_8069A100
    cmpwi r3, 0x0
    stw r3, 0x28(r23)
    bne lbl_fn_8069B284_000016B8
    mr r3, r20
    li r4, 0x1
    bl fn_8069A1A0
    b lbl_fn_8069B284_00001764
lbl_fn_8069B284_000016B8:
    addi r4, r19, 0x1
    bl fn_8069C7BC
    lwz r4, 0x8(r23)
    mr r5, r19
    lwz r6, 0x24(r23)
    neg r0, r4
    lwz r3, 0x28(r23)
    or r0, r0, r4
    srwi r4, r0, 31
    addi r0, r4, 0x7
    add r4, r6, r0
    bl fn_8069C7B0
    lis r4, lbl_80767260@ha
    addi r3, r23, 0x38
    addi r4, r4, lbl_80767260@l
    li r5, 0x14
    bl fn_8069C7B0
    stw r21, 0x1c(r23)
    li r0, 0x0
    cmpwi r25, 0x0
    stw r0, 0xac(r23)
    stw r0, 0xb0(r23)
    stw r0, 0xb4(r23)
    stw r0, 0xb8(r23)
    stw r0, 0xbc(r23)
    stw r0, 0xc0(r23)
    stw r0, 0xc4(r23)
    stw r0, 0xc8(r23)
    stw r0, 0xcc(r23)
    stw r0, 0xd4(r23)
    lwz r3, 0x2c(r23)
    stw r22, 0x438(r3)
    stw r0, 0xc(r23)
    stw r0, 0x244(r23)
    stw r0, 0x248(r23)
    beq lbl_fn_8069B284_0000175C
    addi r0, r1, 0x8
    cmplw r25, r0
    beq lbl_fn_8069B284_0000175C
    mr r3, r25
    bl fn_8069A15C
lbl_fn_8069B284_0000175C:
    mr r3, r23
    b lbl_fn_8069B284_000017C4
lbl_fn_8069B284_00001764:
    cmpwi r23, 0x0
    beq lbl_fn_8069B284_000017A4
    lwz r3, 0x24(r23)
    cmpwi r3, 0x0
    beq lbl_fn_8069B284_0000177C
    bl fn_8069A15C
lbl_fn_8069B284_0000177C:
    lwz r3, 0x28(r23)
    cmpwi r3, 0x0
    beq lbl_fn_8069B284_0000178C
    bl fn_8069A15C
lbl_fn_8069B284_0000178C:
    lwz r3, 0x2c(r23)
    cmpwi r3, 0x0
    beq lbl_fn_8069B284_0000179C
    bl fn_8069A15C
lbl_fn_8069B284_0000179C:
    mr r3, r23
    bl fn_8069A15C
lbl_fn_8069B284_000017A4:
    cmpwi r25, 0x0
    beq lbl_fn_8069B284_000017C0
    addi r0, r1, 0x8
    cmplw r25, r0
    beq lbl_fn_8069B284_000017C0
    mr r3, r25
    bl fn_8069A15C
lbl_fn_8069B284_000017C0:
    li r3, 0x0
lbl_fn_8069B284_000017C4:
    addi r11, r1, 0x140
    bl _restgpr_19
    lwz r0, 0x144(r1)
    mtlr r0
    addi r1, r1, 0x140
    blr
}

asm void fn_8069B8AC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    bl fn_806A1258
    mr r30, r3
    mr r4, r29
    bl fn_806A0DA4
    cmpwi r3, 0x0
    beq lbl_fn_8069B8AC_00001818
    li r0, 0x0
    stw r0, 0x14(r3)
lbl_fn_8069B8AC_00001818:
    lwz r3, 0x2c(r29)
    bl fn_8069A15C
    mr r3, r30
    mr r4, r29
    bl fn_806A0DA4
    cmpwi r3, 0x0
    beq lbl_fn_8069B8AC_0000183C
    li r0, 0x0
    stw r0, 0x10(r3)
lbl_fn_8069B8AC_0000183C:
    lwz r31, 0x30(r29)
    b lbl_fn_8069B8AC_0000186C
lbl_fn_8069B8AC_00001844:
    lwz r3, 0x0(r31)
    cmplw r31, r3
    beq lbl_fn_8069B8AC_00001860
    lwz r30, 0x0(r3)
    bl fn_8069A15C
    stw r30, 0x0(r31)
    b lbl_fn_8069B8AC_0000186C
lbl_fn_8069B8AC_00001860:
    mr r3, r31
    bl fn_8069A15C
    li r31, 0x0
lbl_fn_8069B8AC_0000186C:
    cmpwi r31, 0x0
    bne lbl_fn_8069B8AC_00001844
    lwz r30, 0x34(r29)
    b lbl_fn_8069B8AC_000018A4
lbl_fn_8069B8AC_0000187C:
    lwz r3, 0x0(r30)
    cmplw r30, r3
    beq lbl_fn_8069B8AC_00001898
    lwz r31, 0x0(r3)
    bl fn_8069A15C
    stw r31, 0x0(r30)
    b lbl_fn_8069B8AC_000018A4
lbl_fn_8069B8AC_00001898:
    mr r3, r30
    bl fn_8069A15C
    li r30, 0x0
lbl_fn_8069B8AC_000018A4:
    cmpwi r30, 0x0
    bne lbl_fn_8069B8AC_0000187C
    lwz r3, 0x24(r29)
    bl fn_8069A15C
    lwz r3, 0x28(r29)
    bl fn_8069A15C
    mr r3, r29
    bl fn_8069A15C
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8069B9B0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    bl fn_806A0DA4
    cmpwi r3, 0x0
    beq lbl_fn_8069B9B0_00001910
    li r0, 0x0
    stw r0, 0x10(r3)
lbl_fn_8069B9B0_00001910:
    lwz r31, 0x30(r29)
    b lbl_fn_8069B9B0_00001940
lbl_fn_8069B9B0_00001918:
    lwz r3, 0x0(r31)
    cmplw r31, r3
    beq lbl_fn_8069B9B0_00001934
    lwz r30, 0x0(r3)
    bl fn_8069A15C
    stw r30, 0x0(r31)
    b lbl_fn_8069B9B0_00001940
lbl_fn_8069B9B0_00001934:
    mr r3, r31
    bl fn_8069A15C
    li r31, 0x0
lbl_fn_8069B9B0_00001940:
    cmpwi r31, 0x0
    bne lbl_fn_8069B9B0_00001918
    lwz r30, 0x34(r29)
    b lbl_fn_8069B9B0_00001978
lbl_fn_8069B9B0_00001950:
    lwz r3, 0x0(r30)
    cmplw r30, r3
    beq lbl_fn_8069B9B0_0000196C
    lwz r31, 0x0(r3)
    bl fn_8069A15C
    stw r31, 0x0(r30)
    b lbl_fn_8069B9B0_00001978
lbl_fn_8069B9B0_0000196C:
    mr r3, r30
    bl fn_8069A15C
    li r30, 0x0
lbl_fn_8069B9B0_00001978:
    cmpwi r30, 0x0
    bne lbl_fn_8069B9B0_00001950
    lwz r3, 0x24(r29)
    bl fn_8069A15C
    lwz r3, 0x28(r29)
    bl fn_8069A15C
    mr r3, r29
    bl fn_8069A15C
    lwz r31, 0x1c(r1)
    li r3, 0x1
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8069BA88(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r28, r3
    mr r27, r4
    bl fn_806A123C
    mr r31, r3
    mr r3, r28
    bl fn_806A1250
    mr r30, r3
    mr r3, r28
    bl fn_806A1258
    lwz r0, 0x4(r27)
    mr r29, r3
    cmpwi r0, 0x0
    beq lbl_fn_8069BA88_00001A14
    mr r3, r31
    li r4, 0xb
    bl fn_8069A1A0
    li r3, -0x1
    b lbl_fn_8069BA88_00001A60
lbl_fn_8069BA88_00001A14:
    bl fn_8069AA08
    mr r3, r28
    bl fn_806A1240
    mr r4, r27
    bl fn_8069A778
    cmpwi r3, 0x0
    mr r28, r3
    blt lbl_fn_8069BA88_00001A48
    li r0, 0x1
    mr r3, r30
    stw r0, 0x4(r27)
    bl fn_8069AB14
    b lbl_fn_8069BA88_00001A54
lbl_fn_8069BA88_00001A48:
    mr r3, r31
    li r4, 0x1
    bl fn_8069A1A0
lbl_fn_8069BA88_00001A54:
    mr r3, r29
    bl fn_8069AA0C
    mr r3, r28
lbl_fn_8069BA88_00001A60:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8069BB48(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    li r30, 0x0
    bl fn_806A1248
    mr r31, r3
    mr r3, r27
    bl fn_806A1258
    lwz r29, 0x0(r31)
    mr r31, r3
    bl fn_8069AA08
    cmpwi r29, 0x0
    beq lbl_fn_8069BB48_00001AF8
    lwz r0, 0x8(r29)
    cmpw r0, r28
    bne lbl_fn_8069BB48_00001AF8
    lwz r3, 0xc(r29)
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8069BB48_00001AF8
    lwz r4, 0xc(r29)
    li r0, 0x1
    mr r3, r31
    stw r0, 0x0(r4)
    lwz r4, 0xc(r29)
    lwz r5, 0x10(r29)
    bl fn_8069C6E8
    li r30, 0x1
lbl_fn_8069BB48_00001AF8:
    cmpwi r30, 0x0
    bne lbl_fn_8069BB48_00001B18
    mr r3, r27
    bl fn_806A1240
    mr r4, r31
    mr r5, r28
    bl fn_8069A844
    mr r30, r3
lbl_fn_8069BB48_00001B18:
    mr r3, r31
    bl fn_8069AA0C
    addi r11, r1, 0x20
    mr r3, r30
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8069BC0C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    bl fn_806A1248
    mr r31, r3
    mr r3, r29
    bl fn_806A1240
    mr r30, r3
    mr r3, r29
    bl fn_806A1258
    lwz r29, 0x0(r31)
    mr r31, r3
    bl fn_8069AA08
    cmpwi r29, 0x0
    beq lbl_fn_8069BC0C_00001BB4
    lwz r3, 0xc(r29)
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8069BC0C_00001BB4
    lwz r4, 0xc(r29)
    li r0, 0x1
    mr r3, r31
    stw r0, 0x0(r4)
    lwz r4, 0xc(r29)
    lwz r5, 0x10(r29)
    bl fn_8069C6E8
lbl_fn_8069BC0C_00001BB4:
    mr r3, r30
    mr r4, r31
    bl fn_8069A960
    mr r3, r31
    bl fn_8069AA0C
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8069BCB4(void)
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
    b lbl_fn_8069BCB4_00001C14
lbl_fn_8069BCB4_00001C08:
    lwz r31, 0x0(r3)
    bl fn_8069A15C
    stw r31, 0x34(r30)
lbl_fn_8069BCB4_00001C14:
    lwz r3, 0x34(r30)
    cmpwi r3, 0x0
    bne lbl_fn_8069BCB4_00001C08
    lwz r3, 0x20(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8069BCB4_00001C30
    bl fn_8069A15C
lbl_fn_8069BCB4_00001C30:
    lwz r3, 0x24(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8069BCB4_00001C40
    bl fn_8069A15C
lbl_fn_8069BCB4_00001C40:
    lwz r12, 0x30(r30)
    cmpwi r12, 0x0
    beq lbl_fn_8069BCB4_00001C70
    lis r4, fn_8069A15C@ha
    lwz r3, 0x28(r30)
    addi r4, r4, fn_8069A15C@l
    lwz r5, 0x438(r30)
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x28(r30)
    stw r0, 0x1c(r30)
lbl_fn_8069BCB4_00001C70:
    mr r3, r29
    mr r4, r30
    bl fn_806A0DAC
    cmpwi r3, 0x0
    beq lbl_fn_8069BCB4_00001C8C
    li r0, 0x0
    stw r0, 0x14(r3)
lbl_fn_8069BCB4_00001C8C:
    mr r3, r30
    bl fn_8069A15C
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8069BD80(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    li r0, 0x0
    mr r29, r5
    stw r0, 0x8(r1)
    mr r28, r4
    lwz r5, 0x0(r3)
    mr r27, r3
    addi r6, r1, 0xc
    addi r7, r1, 0x8
    li r4, 0xc
    bl fn_8069ABDC
    mr r31, r3
    b lbl_fn_8069BD80_00001DC0
lbl_fn_8069BD80_00001CF4:
    lwz r5, 0x0(r27)
    mr r3, r27
    mr r4, r31
    addi r6, r1, 0xc
    addi r7, r1, 0x8
    bl fn_8069ABDC
    lwz r5, 0xc(r1)
    mr r30, r3
    cmpwi r5, 0x0
    ble lbl_fn_8069BD80_00001DBC
    mr r3, r27
    mr r4, r31
    mr r6, r28
    li r7, 0x0
    bl fn_8069AECC
    cmpwi r3, 0x0
    bne lbl_fn_8069BD80_00001DBC
    lwz r3, 0xc(r1)
    lwz r0, 0x0(r27)
    addi r4, r3, 0x1
    cmpw r4, r0
    bge lbl_fn_8069BD80_00001DB4
    lwz r5, 0x0(r27)
    mr r3, r27
    addi r7, r1, 0x8
    li r6, 0x0
    bl fn_8069ABDC
    cmpwi r3, 0x0
    bgt lbl_fn_8069BD80_00001D70
    lwz r30, 0x0(r27)
    b lbl_fn_8069BD80_00001D88
lbl_fn_8069BD80_00001D70:
    lwz r0, 0x8(r1)
    cmpw r3, r0
    bge lbl_fn_8069BD80_00001D84
    li r3, -0x1
    b lbl_fn_8069BD80_00001DCC
lbl_fn_8069BD80_00001D84:
    subf r30, r0, r3
lbl_fn_8069BD80_00001D88:
    lwz r4, 0xc(r1)
    mr r3, r27
    mr r5, r30
    addi r4, r4, 0x1
    bl fn_8069ADD4
    cmpwi r3, 0x0
    bge lbl_fn_8069BD80_00001DA8
    mr r3, r30
lbl_fn_8069BD80_00001DA8:
    stw r3, 0x0(r29)
    subf r3, r3, r30
    b lbl_fn_8069BD80_00001DCC
lbl_fn_8069BD80_00001DB4:
    li r3, 0x0
    b lbl_fn_8069BD80_00001DCC
lbl_fn_8069BD80_00001DBC:
    mr r31, r30
lbl_fn_8069BD80_00001DC0:
    cmpwi r31, 0x0
    bgt lbl_fn_8069BD80_00001CF4
    li r3, -0x1
lbl_fn_8069BD80_00001DCC:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8069BEB4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, -0x1
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    bne lbl_fn_8069BEB4_00001E08
    li r31, -0x1
    b lbl_fn_8069BEB4_00001E24
lbl_fn_8069BEB4_00001E08:
    addi r4, r1, 0x8
    li r5, 0x1
    li r6, 0x4
    bl fn_806A3D50
    cmpwi r3, -0x6
    beq lbl_fn_8069BEB4_00001E24
    li r31, -0x1
lbl_fn_8069BEB4_00001E24:
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8069BF0C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x1
    li r5, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    li r3, 0x2
    bl fn_806A37F4
    li r4, 0x0
    cmpwi r30, 0x0
    stw r4, 0xc(r1)
    mr r31, r3
    li r0, 0x0
    stw r4, 0x8(r1)
    beq lbl_fn_8069BF0C_00001E88
    lwz r0, 0x244(r30)
    stw r0, 0xc(r1)
lbl_fn_8069BF0C_00001E88:
    cmpwi r3, 0x0
    blt lbl_fn_8069BF0C_00001EB4
    cmpwi r0, 0x0
    beq lbl_fn_8069BF0C_00001EB4
    lis r4, 0x1
    mr r3, r31
    subi r4, r4, 0x1
    addi r6, r1, 0xc
    li r5, 0x1002
    li r7, 0x4
    bl fn_806A4C5C
lbl_fn_8069BF0C_00001EB4:
    cmpwi r30, 0x0
    beq lbl_fn_8069BF0C_00001EC4
    lwz r0, 0x248(r30)
    stw r0, 0x8(r1)
lbl_fn_8069BF0C_00001EC4:
    cmpwi r31, 0x0
    blt lbl_fn_8069BF0C_00001EF4
    lwz r0, 0x8(r1)
    cmpwi r0, 0x0
    beq lbl_fn_8069BF0C_00001EF4
    lis r4, 0x1
    mr r3, r31
    subi r4, r4, 0x1
    addi r6, r1, 0x8
    li r5, 0x1001
    li r7, 0x4
    bl fn_806A4C5C
lbl_fn_8069BF0C_00001EF4:
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8069BFE0(void)
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
    bl fn_8069AA08
    lwz r3, 0xac(r30)
    cmpwi r3, 0x0
    ble lbl_fn_8069BFE0_00001F50
    bl fn_806A5798
    li r0, -0x1
    stw r0, 0xac(r30)
lbl_fn_8069BFE0_00001F50:
    mr r3, r29
    bl fn_8069AA0C
    mr r3, r31
    bl fn_806A39B8
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8069C04C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    li r9, 0x8
    li r0, 0x2
    stb r9, 0x8(r1)
    mr r27, r3
    mr r28, r4
    mr r29, r5
    stb r0, 0x9(r1)
    mr r30, r6
    mr r31, r7
    clrlwi r3, r8, 16
    bl fn_806A4270
    sth r3, 0xa(r1)
    mr r3, r30
    addi r4, r1, 0x8
    stw r31, 0xc(r1)
    bl fn_806A3B44
    cmpwi r3, 0x0
    bge lbl_fn_8069C04C_00001FF0
    lwz r0, 0x0(r29)
    li r3, -0x3e9
    cmpwi r0, 0x0
    beq lbl_fn_8069C04C_00002024
    li r3, -0x3ea
    b lbl_fn_8069C04C_00002024
lbl_fn_8069C04C_00001FF0:
    lwz r0, 0x8(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8069C04C_00002020
    lwz r0, 0xc(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8069C04C_00002020
    mr r3, r27
    mr r4, r28
    mr r5, r29
    mr r6, r30
    bl fn_8069C10C
    b lbl_fn_8069C04C_00002024
lbl_fn_8069C04C_00002020:
    li r3, 0x0
lbl_fn_8069C04C_00002024:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}
