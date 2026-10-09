#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_26(void);
extern void _savegpr_26(void);
extern void fn_8000D124(void);
extern void fn_80042108(void);
extern void fn_8004AD9C(void);
extern void fn_8006A250(void);
extern void fn_80079044(void);
extern void fn_80084320(void);
extern void fn_800874C8(void);
extern void fn_8008771C(void);
extern void fn_80087994(void);
extern void fn_8008937C(void);
extern void fn_800C16C0(void);
extern void fn_800C1814(void);
extern void fn_800C2448(void);
extern void fn_800D1D3C(void);
extern void fn_800D246C(void);
extern void fn_800D94F8(void);
extern void fn_800F7260(void);
extern void fn_800F8524(void);
extern void fn_8010D98C(void);
extern void fn_80112254(void);
extern void fn_801856A4(void);
extern void fn_801856AC(void);
extern void fn_801F3FF8(void);
extern void fn_80221E08(void);
extern void fn_803D7000(void);
extern void fn_8047DC98(void);
extern void fn_8053B02C(void);
extern void fn_805412AC(void);
extern void fn_8054E578(void);
extern void fn_805F8E70(void);
extern void fn_805F9190(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9D20(void);
extern void fn_80682428(void);
extern void fn_8068AEA4(void);
extern void fn_806958E0(void);
extern void fn_80695B00(void);
extern void fn_8072D210(void);

/* External data declarations */
extern u8 lbl_80756380[];
extern u8 lbl_80790090[];
extern u8 lbl_80790098[];
extern u8 lbl_807900C0[];
extern u8 lbl_807900F8[];
extern u8 lbl_80790130[];
extern u8 lbl_807C7028[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087E0A8;
extern u32 lbl_8087E0AC;
extern u32 lbl_8087E0B0;
extern u32 lbl_8087E0B4;
extern u32 lbl_8087EF10;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F544;
extern u32 lbl_8087F548;
extern u32 lbl_80886F80;
extern u32 lbl_80886F84;
extern u32 lbl_80886F88;
extern u32 lbl_80886F8C;
extern u32 lbl_80886F90;
extern u32 lbl_80886F94;
extern u32 lbl_80886F98;
extern u32 lbl_80886F9C;
extern u32 lbl_80886FA0;
extern u32 lbl_80886FA4;
extern u32 lbl_80886FA8;
extern u32 lbl_80886FAC;
extern u32 lbl_80886FB0;
extern u32 lbl_80886FB4;
extern u32 lbl_80886FB8;
extern u32 lbl_80886FBC;
extern u32 lbl_80886FC0;
extern u32 lbl_80886FC4;
extern u32 lbl_80886FC8;
extern u32 lbl_80886FCC;
extern u32 lbl_80886FD0;
extern u32 lbl_80886FD4;
extern u32 lbl_80886FD8;
extern u32 lbl_80886FDC;
extern u32 lbl_80886FE0;
extern u32 lbl_80886FE4;
extern u32 lbl_80886FE8;
extern u32 lbl_80886FEC;
extern u32 lbl_80886FF0;

/* Function declarations */
void fn_8047B594(void);
void fn_8047B5A0(void);
void fn_8047B5CC(void);
void fn_8047B684(void);
void fn_8047B6B0(void);
void fn_8047B768(void);
void fn_8047BBBC(void);
void fn_8047BFF4(void);
void fn_8047C1D8(void);
void fn_8047C770(void);
void fn_8047C778(void);
void fn_8047C780(void);
void fn_8047C788(void);
void fn_8047C7D4(void);
void fn_8047C7DC(void);
void fn_8047C7FC(void);
void fn_8047C848(void);
void fn_8047C850(void);
void fn_8047C88C(void);
void fn_8047CB6C(void);
void fn_8047CB74(void);
void fn_8047CDE8(void);
void fn_8047CDFC(void);
void fn_8047CE04(void);
void fn_8047CE28(void);
void fn_8047CE30(void);
void fn_8047CEBC(void);
void fn_8047CF48(void);
void fn_8047CF7C(void);

asm void fn_8047B594(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    blr
}

asm void fn_8047B5A0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    mr r12, r3
    stw r0, 0x14(r1)
    lwz r3, 0xc(r3)
    bl fn_80695B00
    nop
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8047B5CC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r5, 0x3
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bne lbl_fn_8047B5CC_0000006C
    lis r3, lbl_80790090@ha
    addi r3, r3, lbl_80790090@l
    stw r3, 0x0(r4)
    b lbl_fn_8047B5CC_000000D8
lbl_fn_8047B5CC_0000006C:
    cmpwi r5, 0x0
    bne lbl_fn_8047B5CC_000000A0
    cmpwi r4, 0x0
    beq lbl_fn_8047B5CC_000000D8
    lwz r5, 0x0(r3)
    lwz r0, 0x4(r3)
    stw r0, 0x4(r4)
    stw r5, 0x0(r4)
    lwz r0, 0x8(r3)
    stw r0, 0x8(r4)
    lwz r0, 0xc(r3)
    stw r0, 0xc(r4)
    b lbl_fn_8047B5CC_000000D8
lbl_fn_8047B5CC_000000A0:
    cmpwi r5, 0x1
    beq lbl_fn_8047B5CC_000000D8
    lwz r5, 0x0(r4)
    lis r3, lbl_80790090@ha
    lwz r4, lbl_80790090@l(r3)
    lwz r3, 0x0(r5)
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_8047B5CC_000000D0
    stw r30, 0x0(r31)
    b lbl_fn_8047B5CC_000000D8
lbl_fn_8047B5CC_000000D0:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_8047B5CC_000000D8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8047B684(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    mr r12, r3
    stw r0, 0x14(r1)
    lwz r3, 0xc(r3)
    bl fn_80695B00
    nop
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8047B6B0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r5, 0x3
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bne lbl_fn_8047B6B0_00000150
    lis r3, lbl_80790098@ha
    addi r3, r3, lbl_80790098@l
    stw r3, 0x0(r4)
    b lbl_fn_8047B6B0_000001BC
lbl_fn_8047B6B0_00000150:
    cmpwi r5, 0x0
    bne lbl_fn_8047B6B0_00000184
    cmpwi r4, 0x0
    beq lbl_fn_8047B6B0_000001BC
    lwz r5, 0x0(r3)
    lwz r0, 0x4(r3)
    stw r0, 0x4(r4)
    stw r5, 0x0(r4)
    lwz r0, 0x8(r3)
    stw r0, 0x8(r4)
    lwz r0, 0xc(r3)
    stw r0, 0xc(r4)
    b lbl_fn_8047B6B0_000001BC
lbl_fn_8047B6B0_00000184:
    cmpwi r5, 0x1
    beq lbl_fn_8047B6B0_000001BC
    lwz r5, 0x0(r4)
    lis r3, lbl_80790098@ha
    lwz r4, lbl_80790098@l(r3)
    lwz r3, 0x0(r5)
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_8047B6B0_000001B4
    stw r30, 0x0(r31)
    b lbl_fn_8047B6B0_000001BC
lbl_fn_8047B6B0_000001B4:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_8047B6B0_000001BC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8047B768(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stmw r19, 0xc(r1)
    mr r23, r4
    mr r22, r3
    li r28, 0x0
    mr r3, r23
    bl fn_8053B02C
    lwz r0, 0xbc(r22)
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8047B768_0000022C
lbl_fn_8047B768_0000020C:
    lwz r5, 0xb8(r22)
    lwzx r31, r5, r4
    lwz r0, 0xc(r31)
    cmpw r3, r0
    bne lbl_fn_8047B768_00000224
    b lbl_fn_8047B768_00000230
lbl_fn_8047B768_00000224:
    addi r4, r4, 0x8
    bdnz lbl_fn_8047B768_0000020C
lbl_fn_8047B768_0000022C:
    li r31, 0x0
lbl_fn_8047B768_00000230:
    li r27, 0x0
    li r26, 0x0
    li r21, 0x0
    b lbl_fn_8047B768_000005F0
lbl_fn_8047B768_00000240:
    cmpwi r26, 0x0
    li r0, 0x0
    blt lbl_fn_8047B768_00000258
    cmpw r26, r3
    bge lbl_fn_8047B768_00000258
    li r0, 0x1
lbl_fn_8047B768_00000258:
    cmpwi r0, 0x0
    beq lbl_fn_8047B768_0000026C
    lwz r3, 0x3c(r23)
    lwzx r30, r3, r21
    b lbl_fn_8047B768_00000270
lbl_fn_8047B768_0000026C:
    li r30, 0x0
lbl_fn_8047B768_00000270:
    lwz r0, 0x14(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8047B768_000005E8
    lwz r0, 0xc(r30)
    cmpwi r0, 0x1
    bne lbl_fn_8047B768_000005E8
    li r25, 0x0
    li r20, 0x0
    b lbl_fn_8047B768_000005D4
lbl_fn_8047B768_00000294:
    cmpwi r25, 0x0
    li r0, 0x0
    blt lbl_fn_8047B768_000002AC
    cmpw r25, r3
    bge lbl_fn_8047B768_000002AC
    li r0, 0x1
lbl_fn_8047B768_000002AC:
    cmpwi r0, 0x0
    beq lbl_fn_8047B768_000002C0
    lwz r3, 0x18(r30)
    lwzx r29, r3, r20
    b lbl_fn_8047B768_000002C4
lbl_fn_8047B768_000002C0:
    li r29, 0x0
lbl_fn_8047B768_000002C4:
    lwz r0, 0x10(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8047B768_000005CC
    lwz r0, 0xc(r29)
    cmpwi r0, 0x8
    bne lbl_fn_8047B768_000005CC
    li r24, 0x0
    li r19, 0x0
    b lbl_fn_8047B768_000005B8
lbl_fn_8047B768_000002E8:
    cmpwi r24, 0x0
    li r0, 0x0
    blt lbl_fn_8047B768_00000300
    cmpw r24, r3
    bge lbl_fn_8047B768_00000300
    li r0, 0x1
lbl_fn_8047B768_00000300:
    cmpwi r0, 0x0
    beq lbl_fn_8047B768_00000314
    lwz r3, 0x14(r29)
    lwzx r4, r3, r19
    b lbl_fn_8047B768_00000318
lbl_fn_8047B768_00000314:
    li r4, 0x0
lbl_fn_8047B768_00000318:
    lwz r0, 0x10(r4)
    cmpw r0, r27
    blt lbl_fn_8047B768_000005B0
    lwz r5, 0x30(r4)
    cmpwi r5, 0x0
    ble lbl_fn_8047B768_00000338
    lwz r3, 0x2c(r4)
    b lbl_fn_8047B768_0000033C
lbl_fn_8047B768_00000338:
    li r3, 0x0
lbl_fn_8047B768_0000033C:
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    bne lbl_fn_8047B768_0000040C
    cmpwi r5, 0x1
    ble lbl_fn_8047B768_0000035C
    lwz r3, 0x2c(r4)
    addi r3, r3, 0x8
    b lbl_fn_8047B768_00000360
lbl_fn_8047B768_0000035C:
    li r3, 0x0
lbl_fn_8047B768_00000360:
    lwz r4, 0x4(r3)
    rlwinm. r0, r4, 0, 16, 16
    beq lbl_fn_8047B768_000003E8
    lwz r5, 0xbc(r22)
    rlwinm r6, r4, 0, 17, 15
    li r3, 0x0
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_fn_8047B768_000003A4
lbl_fn_8047B768_00000384:
    lwz r4, 0xb8(r22)
    lwzx r4, r4, r3
    lwz r0, 0xc(r4)
    cmpw r6, r0
    bne lbl_fn_8047B768_0000039C
    b lbl_fn_8047B768_000003A8
lbl_fn_8047B768_0000039C:
    addi r3, r3, 0x8
    bdnz lbl_fn_8047B768_00000384
lbl_fn_8047B768_000003A4:
    li r4, 0x0
lbl_fn_8047B768_000003A8:
    cmplw r4, r23
    beq lbl_fn_8047B768_000005A8
    li r3, 0x0
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_fn_8047B768_000003E0
lbl_fn_8047B768_000003C0:
    lwz r4, 0xb8(r22)
    lwzx r28, r4, r3
    lwz r0, 0xc(r28)
    cmpw r6, r0
    bne lbl_fn_8047B768_000003D8
    b lbl_fn_8047B768_000005A8
lbl_fn_8047B768_000003D8:
    addi r3, r3, 0x8
    bdnz lbl_fn_8047B768_000003C0
lbl_fn_8047B768_000003E0:
    li r28, 0x0
    b lbl_fn_8047B768_000005A8
lbl_fn_8047B768_000003E8:
    mr r3, r22
    bl fn_805412AC
    lwz r0, 0x8(r3)
    cmplw r0, r23
    beq lbl_fn_8047B768_00000404
    mr r28, r0
    b lbl_fn_8047B768_000005A8
lbl_fn_8047B768_00000404:
    lwz r27, 0x10(r3)
    b lbl_fn_8047B768_000005A8
lbl_fn_8047B768_0000040C:
    cmpwi r3, 0x1
    bne lbl_fn_8047B768_000004D8
    cmpwi r5, 0x1
    ble lbl_fn_8047B768_00000428
    lwz r3, 0x2c(r4)
    addi r3, r3, 0x8
    b lbl_fn_8047B768_0000042C
lbl_fn_8047B768_00000428:
    li r3, 0x0
lbl_fn_8047B768_0000042C:
    lwz r4, 0x4(r3)
    rlwinm. r0, r4, 0, 16, 16
    beq lbl_fn_8047B768_000004B4
    lwz r5, 0xbc(r22)
    rlwinm r6, r4, 0, 17, 15
    li r3, 0x0
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_fn_8047B768_00000470
lbl_fn_8047B768_00000450:
    lwz r4, 0xb8(r22)
    lwzx r4, r4, r3
    lwz r0, 0xc(r4)
    cmpw r6, r0
    bne lbl_fn_8047B768_00000468
    b lbl_fn_8047B768_00000474
lbl_fn_8047B768_00000468:
    addi r3, r3, 0x8
    bdnz lbl_fn_8047B768_00000450
lbl_fn_8047B768_00000470:
    li r4, 0x0
lbl_fn_8047B768_00000474:
    cmplw r4, r23
    beq lbl_fn_8047B768_000005A8
    li r3, 0x0
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_fn_8047B768_000004AC
lbl_fn_8047B768_0000048C:
    lwz r4, 0xb8(r22)
    lwzx r28, r4, r3
    lwz r0, 0xc(r28)
    cmpw r6, r0
    bne lbl_fn_8047B768_000004A4
    b lbl_fn_8047B768_000005A8
lbl_fn_8047B768_000004A4:
    addi r3, r3, 0x8
    bdnz lbl_fn_8047B768_0000048C
lbl_fn_8047B768_000004AC:
    li r28, 0x0
    b lbl_fn_8047B768_000005A8
lbl_fn_8047B768_000004B4:
    mr r3, r22
    bl fn_805412AC
    lwz r0, 0x8(r3)
    cmplw r0, r23
    beq lbl_fn_8047B768_000004D0
    mr r28, r0
    b lbl_fn_8047B768_000005A8
lbl_fn_8047B768_000004D0:
    lwz r27, 0x10(r3)
    b lbl_fn_8047B768_000005A8
lbl_fn_8047B768_000004D8:
    subi r0, r3, 0x2
    cmplwi r0, 0x1
    bgt lbl_fn_8047B768_000005A8
    cmpwi r5, 0x5
    ble lbl_fn_8047B768_000004F8
    lwz r3, 0x2c(r4)
    addi r3, r3, 0x28
    b lbl_fn_8047B768_000004FC
lbl_fn_8047B768_000004F8:
    li r3, 0x0
lbl_fn_8047B768_000004FC:
    lwz r4, 0x4(r3)
    rlwinm. r0, r4, 0, 16, 16
    beq lbl_fn_8047B768_00000584
    lwz r5, 0xbc(r22)
    rlwinm r6, r4, 0, 17, 15
    li r3, 0x0
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_fn_8047B768_00000540
lbl_fn_8047B768_00000520:
    lwz r4, 0xb8(r22)
    lwzx r4, r4, r3
    lwz r0, 0xc(r4)
    cmpw r6, r0
    bne lbl_fn_8047B768_00000538
    b lbl_fn_8047B768_00000544
lbl_fn_8047B768_00000538:
    addi r3, r3, 0x8
    bdnz lbl_fn_8047B768_00000520
lbl_fn_8047B768_00000540:
    li r4, 0x0
lbl_fn_8047B768_00000544:
    cmplw r4, r23
    beq lbl_fn_8047B768_000005A8
    li r3, 0x0
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_fn_8047B768_0000057C
lbl_fn_8047B768_0000055C:
    lwz r4, 0xb8(r22)
    lwzx r28, r4, r3
    lwz r0, 0xc(r28)
    cmpw r6, r0
    bne lbl_fn_8047B768_00000574
    b lbl_fn_8047B768_000005A8
lbl_fn_8047B768_00000574:
    addi r3, r3, 0x8
    bdnz lbl_fn_8047B768_0000055C
lbl_fn_8047B768_0000057C:
    li r28, 0x0
    b lbl_fn_8047B768_000005A8
lbl_fn_8047B768_00000584:
    mr r3, r22
    bl fn_805412AC
    lwz r0, 0x8(r3)
    cmplw r0, r23
    beq lbl_fn_8047B768_0000059C
    mr r28, r0
lbl_fn_8047B768_0000059C:
    cmplw r0, r23
    bne lbl_fn_8047B768_000005A8
    lwz r27, 0x10(r3)
lbl_fn_8047B768_000005A8:
    cmpwi r28, 0x0
    bne lbl_fn_8047B768_000005C4
lbl_fn_8047B768_000005B0:
    addi r24, r24, 0x1
    addi r19, r19, 0x8
lbl_fn_8047B768_000005B8:
    lwz r3, 0x18(r29)
    cmpw r24, r3
    blt lbl_fn_8047B768_000002E8
lbl_fn_8047B768_000005C4:
    cmpwi r28, 0x0
    bne lbl_fn_8047B768_000005E0
lbl_fn_8047B768_000005CC:
    addi r25, r25, 0x1
    addi r20, r20, 0x8
lbl_fn_8047B768_000005D4:
    lwz r3, 0x1c(r30)
    cmpw r25, r3
    blt lbl_fn_8047B768_00000294
lbl_fn_8047B768_000005E0:
    cmpwi r28, 0x0
    bne lbl_fn_8047B768_000005FC
lbl_fn_8047B768_000005E8:
    addi r26, r26, 0x1
    addi r21, r21, 0x8
lbl_fn_8047B768_000005F0:
    lwz r3, 0x40(r23)
    cmpw r26, r3
    blt lbl_fn_8047B768_00000240
lbl_fn_8047B768_000005FC:
    cmpwi r28, 0x0
    bne lbl_fn_8047B768_00000610
    cmplw r31, r23
    beq lbl_fn_8047B768_00000610
    mr r28, r31
lbl_fn_8047B768_00000610:
    mr r3, r28
    lmw r19, 0xc(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8047BBBC(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x54(r1)
    stmw r17, 0x14(r1)
    mr r20, r3
    mr r21, r4
    beq lbl_fn_8047BBBC_00000650
    cmpwi r4, 0x0
    bne lbl_fn_8047BBBC_00000658
lbl_fn_8047BBBC_00000650:
    li r3, 0x0
    b lbl_fn_8047BBBC_00000A4C
lbl_fn_8047BBBC_00000658:
    mr r3, r21
    bl fn_8053B02C
    lwz r0, 0xbc(r20)
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8047BBBC_00000690
lbl_fn_8047BBBC_00000674:
    lwz r5, 0xb8(r20)
    lwzx r5, r5, r4
    lwz r0, 0xc(r5)
    cmpw r3, r0
    beq lbl_fn_8047BBBC_00000690
    addi r4, r4, 0x8
    bdnz lbl_fn_8047BBBC_00000674
lbl_fn_8047BBBC_00000690:
    lwz r27, 0x2c(r21)
    li r28, 0x0
    li r26, 0x0
    li r25, 0x0
    li r24, 0x0
    li r19, 0x0
    b lbl_fn_8047BBBC_00000A3C
lbl_fn_8047BBBC_000006AC:
    cmpwi r24, 0x0
    li r0, 0x0
    blt lbl_fn_8047BBBC_000006C4
    cmpw r24, r3
    bge lbl_fn_8047BBBC_000006C4
    li r0, 0x1
lbl_fn_8047BBBC_000006C4:
    cmpwi r0, 0x0
    beq lbl_fn_8047BBBC_000006D8
    lwz r3, 0x3c(r21)
    lwzx r31, r3, r19
    b lbl_fn_8047BBBC_000006DC
lbl_fn_8047BBBC_000006D8:
    li r31, 0x0
lbl_fn_8047BBBC_000006DC:
    lwz r0, 0x14(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8047BBBC_00000A34
    lwz r0, 0xc(r31)
    cmpwi r0, 0x1
    bne lbl_fn_8047BBBC_00000A34
    li r23, 0x0
    li r18, 0x0
    b lbl_fn_8047BBBC_00000A20
lbl_fn_8047BBBC_00000700:
    cmpwi r23, 0x0
    li r0, 0x0
    blt lbl_fn_8047BBBC_00000718
    cmpw r23, r3
    bge lbl_fn_8047BBBC_00000718
    li r0, 0x1
lbl_fn_8047BBBC_00000718:
    cmpwi r0, 0x0
    beq lbl_fn_8047BBBC_0000072C
    lwz r3, 0x18(r31)
    lwzx r30, r3, r18
    b lbl_fn_8047BBBC_00000730
lbl_fn_8047BBBC_0000072C:
    li r30, 0x0
lbl_fn_8047BBBC_00000730:
    lwz r0, 0x10(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8047BBBC_00000A18
    lwz r0, 0xc(r30)
    cmpwi r0, 0x35
    beq lbl_fn_8047BBBC_00000750
    cmpwi r0, 0x8
    bne lbl_fn_8047BBBC_00000A18
lbl_fn_8047BBBC_00000750:
    li r22, 0x0
    li r17, 0x0
    b lbl_fn_8047BBBC_00000A04
lbl_fn_8047BBBC_0000075C:
    cmpwi r22, 0x0
    li r0, 0x0
    blt lbl_fn_8047BBBC_00000774
    cmpw r22, r3
    bge lbl_fn_8047BBBC_00000774
    li r0, 0x1
lbl_fn_8047BBBC_00000774:
    cmpwi r0, 0x0
    beq lbl_fn_8047BBBC_00000788
    lwz r3, 0x14(r30)
    lwzx r29, r3, r17
    b lbl_fn_8047BBBC_0000078C
lbl_fn_8047BBBC_00000788:
    li r29, 0x0
lbl_fn_8047BBBC_0000078C:
    lwz r0, 0x10(r29)
    cmpw r0, r28
    blt lbl_fn_8047BBBC_000009FC
    lwz r3, 0xc(r29)
    cmpwi r3, 0x8
    bne lbl_fn_8047BBBC_000009D4
    lwz r4, 0x30(r29)
    cmpwi r4, 0x0
    ble lbl_fn_8047BBBC_000007B8
    lwz r3, 0x2c(r29)
    b lbl_fn_8047BBBC_000007BC
lbl_fn_8047BBBC_000007B8:
    li r3, 0x0
lbl_fn_8047BBBC_000007BC:
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    bne lbl_fn_8047BBBC_00000870
    cmpwi r4, 0x1
    ble lbl_fn_8047BBBC_000007DC
    lwz r3, 0x2c(r29)
    addi r3, r3, 0x8
    b lbl_fn_8047BBBC_000007E0
lbl_fn_8047BBBC_000007DC:
    li r3, 0x0
lbl_fn_8047BBBC_000007E0:
    lwz r4, 0x4(r3)
    rlwinm. r3, r4, 0, 16, 16
    beq lbl_fn_8047BBBC_0000083C
    lwz r5, 0xbc(r20)
    rlwinm r6, r4, 0, 17, 15
    li r3, 0x0
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_fn_8047BBBC_00000824
lbl_fn_8047BBBC_00000804:
    lwz r4, 0xb8(r20)
    lwzx r5, r4, r3
    lwz r4, 0xc(r5)
    cmpw r6, r4
    bne lbl_fn_8047BBBC_0000081C
    b lbl_fn_8047BBBC_00000828
lbl_fn_8047BBBC_0000081C:
    addi r3, r3, 0x8
    bdnz lbl_fn_8047BBBC_00000804
lbl_fn_8047BBBC_00000824:
    li r5, 0x0
lbl_fn_8047BBBC_00000828:
    cmplw r5, r21
    beq lbl_fn_8047BBBC_000009FC
    mr r27, r0
    li r25, 0x1
    b lbl_fn_8047BBBC_00000A10
lbl_fn_8047BBBC_0000083C:
    mr r3, r20
    bl fn_805412AC
    lwz r0, 0x8(r3)
    cmplw r0, r21
    beq lbl_fn_8047BBBC_0000085C
    lwz r27, 0x10(r29)
    li r25, 0x1
    b lbl_fn_8047BBBC_00000A10
lbl_fn_8047BBBC_0000085C:
    lwz r28, 0x10(r3)
    lwz r0, 0x10(r29)
    subf r0, r0, r28
    add r26, r26, r0
    b lbl_fn_8047BBBC_000009FC
lbl_fn_8047BBBC_00000870:
    cmpwi r3, 0x1
    bne lbl_fn_8047BBBC_00000920
    cmpwi r4, 0x1
    ble lbl_fn_8047BBBC_0000088C
    lwz r3, 0x2c(r29)
    addi r3, r3, 0x8
    b lbl_fn_8047BBBC_00000890
lbl_fn_8047BBBC_0000088C:
    li r3, 0x0
lbl_fn_8047BBBC_00000890:
    lwz r4, 0x4(r3)
    rlwinm. r3, r4, 0, 16, 16
    beq lbl_fn_8047BBBC_000008EC
    lwz r5, 0xbc(r20)
    rlwinm r6, r4, 0, 17, 15
    li r3, 0x0
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_fn_8047BBBC_000008D4
lbl_fn_8047BBBC_000008B4:
    lwz r4, 0xb8(r20)
    lwzx r5, r4, r3
    lwz r4, 0xc(r5)
    cmpw r6, r4
    bne lbl_fn_8047BBBC_000008CC
    b lbl_fn_8047BBBC_000008D8
lbl_fn_8047BBBC_000008CC:
    addi r3, r3, 0x8
    bdnz lbl_fn_8047BBBC_000008B4
lbl_fn_8047BBBC_000008D4:
    li r5, 0x0
lbl_fn_8047BBBC_000008D8:
    cmplw r5, r21
    beq lbl_fn_8047BBBC_000009FC
    mr r27, r0
    li r25, 0x1
    b lbl_fn_8047BBBC_00000A10
lbl_fn_8047BBBC_000008EC:
    mr r3, r20
    bl fn_805412AC
    lwz r0, 0x8(r3)
    cmplw r0, r21
    beq lbl_fn_8047BBBC_0000090C
    lwz r27, 0x10(r29)
    li r25, 0x1
    b lbl_fn_8047BBBC_00000A10
lbl_fn_8047BBBC_0000090C:
    lwz r28, 0x10(r3)
    lwz r0, 0x10(r29)
    subf r0, r0, r28
    add r26, r26, r0
    b lbl_fn_8047BBBC_000009FC
lbl_fn_8047BBBC_00000920:
    subi r3, r3, 0x2
    cmplwi r3, 0x1
    bgt lbl_fn_8047BBBC_000009FC
    cmpwi r4, 0x5
    ble lbl_fn_8047BBBC_00000940
    lwz r3, 0x2c(r29)
    addi r3, r3, 0x28
    b lbl_fn_8047BBBC_00000944
lbl_fn_8047BBBC_00000940:
    li r3, 0x0
lbl_fn_8047BBBC_00000944:
    lwz r4, 0x4(r3)
    rlwinm. r3, r4, 0, 16, 16
    beq lbl_fn_8047BBBC_000009A0
    lwz r5, 0xbc(r20)
    rlwinm r6, r4, 0, 17, 15
    li r3, 0x0
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_fn_8047BBBC_00000988
lbl_fn_8047BBBC_00000968:
    lwz r4, 0xb8(r20)
    lwzx r5, r4, r3
    lwz r4, 0xc(r5)
    cmpw r6, r4
    bne lbl_fn_8047BBBC_00000980
    b lbl_fn_8047BBBC_0000098C
lbl_fn_8047BBBC_00000980:
    addi r3, r3, 0x8
    bdnz lbl_fn_8047BBBC_00000968
lbl_fn_8047BBBC_00000988:
    li r5, 0x0
lbl_fn_8047BBBC_0000098C:
    cmplw r5, r21
    beq lbl_fn_8047BBBC_000009FC
    mr r27, r0
    li r25, 0x1
    b lbl_fn_8047BBBC_00000A10
lbl_fn_8047BBBC_000009A0:
    mr r3, r20
    bl fn_805412AC
    lwz r0, 0x8(r3)
    cmplw r0, r21
    beq lbl_fn_8047BBBC_000009C0
    lwz r27, 0x10(r29)
    li r25, 0x1
    b lbl_fn_8047BBBC_00000A10
lbl_fn_8047BBBC_000009C0:
    lwz r28, 0x10(r3)
    lwz r0, 0x10(r29)
    subf r0, r0, r28
    add r26, r26, r0
    b lbl_fn_8047BBBC_000009FC
lbl_fn_8047BBBC_000009D4:
    cmpwi r3, 0x35
    bne lbl_fn_8047BBBC_000009FC
    lwz r4, 0x14(r29)
    subf. r3, r0, r4
    bgt lbl_fn_8047BBBC_000009F4
    mr r27, r0
    li r25, 0x1
    b lbl_fn_8047BBBC_00000A10
lbl_fn_8047BBBC_000009F4:
    add r26, r26, r3
    mr r28, r4
lbl_fn_8047BBBC_000009FC:
    addi r22, r22, 0x1
    addi r17, r17, 0x8
lbl_fn_8047BBBC_00000A04:
    lwz r3, 0x18(r30)
    cmpw r22, r3
    blt lbl_fn_8047BBBC_0000075C
lbl_fn_8047BBBC_00000A10:
    cmpwi r25, 0x0
    bne lbl_fn_8047BBBC_00000A2C
lbl_fn_8047BBBC_00000A18:
    addi r23, r23, 0x1
    addi r18, r18, 0x8
lbl_fn_8047BBBC_00000A20:
    lwz r3, 0x1c(r31)
    cmpw r23, r3
    blt lbl_fn_8047BBBC_00000700
lbl_fn_8047BBBC_00000A2C:
    cmpwi r25, 0x0
    bne lbl_fn_8047BBBC_00000A48
lbl_fn_8047BBBC_00000A34:
    addi r24, r24, 0x1
    addi r19, r19, 0x8
lbl_fn_8047BBBC_00000A3C:
    lwz r3, 0x40(r21)
    cmpw r24, r3
    blt lbl_fn_8047BBBC_000006AC
lbl_fn_8047BBBC_00000A48:
    subf r3, r26, r27
lbl_fn_8047BBBC_00000A4C:
    lmw r17, 0x14(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8047BFF4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    beq lbl_fn_8047BFF4_00000AC8
    lwz r0, 0xbc(r3)
    li r5, 0x0
    lwz r6, 0x94(r3)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8047BFF4_00000AC0
lbl_fn_8047BFF4_00000AA0:
    lwz r4, 0xb8(r3)
    lwzx r4, r4, r5
    lwz r0, 0xc(r4)
    cmpw r6, r0
    bne lbl_fn_8047BFF4_00000AB8
    b lbl_fn_8047BFF4_00000C18
lbl_fn_8047BFF4_00000AB8:
    addi r5, r5, 0x8
    bdnz lbl_fn_8047BFF4_00000AA0
lbl_fn_8047BFF4_00000AC0:
    li r4, 0x0
    b lbl_fn_8047BFF4_00000C18
lbl_fn_8047BFF4_00000AC8:
    li r4, 0x0
    b lbl_fn_8047BFF4_00000C18
lbl_fn_8047BFF4_00000AD0:
    lwz r12, 0x40(r4)
    li r30, 0x0
    li r5, 0x0
    b lbl_fn_8047BFF4_00000C04
lbl_fn_8047BFF4_00000AE0:
    cmpwi r30, 0x0
    li r0, 0x0
    blt lbl_fn_8047BFF4_00000AF8
    cmpw r30, r12
    bge lbl_fn_8047BFF4_00000AF8
    li r0, 0x1
lbl_fn_8047BFF4_00000AF8:
    cmpwi r0, 0x0
    beq lbl_fn_8047BFF4_00000B0C
    lwz r3, 0x3c(r4)
    lwzx r9, r3, r5
    b lbl_fn_8047BFF4_00000B10
lbl_fn_8047BFF4_00000B0C:
    li r9, 0x0
lbl_fn_8047BFF4_00000B10:
    lwz r0, 0xc(r9)
    cmpwi r0, 0x1
    bne lbl_fn_8047BFF4_00000BFC
    lwz r11, 0x1c(r9)
    li r29, 0x0
    li r6, 0x0
    b lbl_fn_8047BFF4_00000BF4
lbl_fn_8047BFF4_00000B2C:
    cmpwi r29, 0x0
    li r3, 0x0
    blt lbl_fn_8047BFF4_00000B48
    lwz r0, 0x1c(r9)
    cmpw r29, r0
    bge lbl_fn_8047BFF4_00000B48
    li r3, 0x1
lbl_fn_8047BFF4_00000B48:
    cmpwi r3, 0x0
    beq lbl_fn_8047BFF4_00000B5C
    lwz r3, 0x18(r9)
    lwzx r10, r3, r6
    b lbl_fn_8047BFF4_00000B60
lbl_fn_8047BFF4_00000B5C:
    li r10, 0x0
lbl_fn_8047BFF4_00000B60:
    lwz r0, 0xc(r10)
    cmpwi r0, 0x2b
    bne lbl_fn_8047BFF4_00000BEC
    lwz r0, 0x18(r10)
    li r28, 0x0
    li r7, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8047BFF4_00000BEC
lbl_fn_8047BFF4_00000B84:
    cmpwi r28, 0x0
    li r3, 0x0
    blt lbl_fn_8047BFF4_00000BA0
    lwz r0, 0x18(r10)
    cmpw r28, r0
    bge lbl_fn_8047BFF4_00000BA0
    li r3, 0x1
lbl_fn_8047BFF4_00000BA0:
    cmpwi r3, 0x0
    beq lbl_fn_8047BFF4_00000BB4
    lwz r3, 0x14(r10)
    lwzx r3, r3, r7
    b lbl_fn_8047BFF4_00000BB8
lbl_fn_8047BFF4_00000BB4:
    li r3, 0x0
lbl_fn_8047BFF4_00000BB8:
    lwz r0, 0x30(r3)
    cmpwi r0, 0x0
    ble lbl_fn_8047BFF4_00000BCC
    lwz r8, 0x2c(r3)
    b lbl_fn_8047BFF4_00000BD0
lbl_fn_8047BFF4_00000BCC:
    li r8, 0x0
lbl_fn_8047BFF4_00000BD0:
    lwz r0, 0x4(r8)
    cmpwi r0, 0x0
    bne lbl_fn_8047BFF4_00000BE0
    b lbl_fn_8047BFF4_00000C24
lbl_fn_8047BFF4_00000BE0:
    addi r28, r28, 0x1
    addi r7, r7, 0x8
    bdnz lbl_fn_8047BFF4_00000B84
lbl_fn_8047BFF4_00000BEC:
    addi r29, r29, 0x1
    addi r6, r6, 0x8
lbl_fn_8047BFF4_00000BF4:
    cmpw r29, r11
    blt lbl_fn_8047BFF4_00000B2C
lbl_fn_8047BFF4_00000BFC:
    addi r30, r30, 0x1
    addi r5, r5, 0x8
lbl_fn_8047BFF4_00000C04:
    cmpw r30, r12
    blt lbl_fn_8047BFF4_00000AE0
    mr r3, r31
    bl fn_8047B768
    mr r4, r3
lbl_fn_8047BFF4_00000C18:
    cmpwi r4, 0x0
    bne lbl_fn_8047BFF4_00000AD0
    li r3, 0x0
lbl_fn_8047BFF4_00000C24:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8047C1D8(void)
{
    nofralloc
    stwu r1, -0x260(r1)
    mflr r0
    lfs f2, 0x8(r4)
    stw r0, 0x264(r1)
    fabs f3, f2
    lfs f0, lbl_80886F80
    stfd f31, 0x250(r1)
    psq_st f31, 0x258(r1), 0, 0
    frsp f3, f3
    fmr f31, f1
    psq_l f1, 0x0(r4), 0, 0
    stfd f30, 0x240(r1)
    fcmpo cr0, f3, f0
    psq_st f30, 0x248(r1), 0, 0
    stfd f29, 0x230(r1)
    psq_st f29, 0x238(r1), 0, 0
    stw r31, 0x22c(r1)
    addi r31, r1, 0xe4
    stw r30, 0x228(r1)
    mr r30, r5
    stw r29, 0x224(r1)
    mr r29, r3
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0xec(r1)
    bge lbl_fn_8047C1D8_00000CCC
    lfs f3, 0xe4(r1)
    lfs f0, lbl_80886F8C
    fcmpo cr0, f3, f0
    ble lbl_fn_8047C1D8_00000CC0
    lfs f0, lbl_80886F84
    b lbl_fn_8047C1D8_00000CC4
lbl_fn_8047C1D8_00000CC0:
    lfs f0, lbl_80886F88
lbl_fn_8047C1D8_00000CC4:
    stfs f0, 0xc0(r1)
    b lbl_fn_8047C1D8_00000CE0
lbl_fn_8047C1D8_00000CCC:
    frsp f2, f2
    lfs f1, 0xe4(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0xc0(r1)
lbl_fn_8047C1D8_00000CE0:
    lfs f0, 0xc0(r1)
    addi r3, r1, 0x180
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80886F8C
    addi r4, r1, 0xb0
    lfs f30, 0x188(r1)
    mr r5, r4
    lfs f29, 0x184(r1)
    addi r3, r1, 0x1b0
    lfs f13, 0x180(r1)
    lfs f12, 0x198(r1)
    lfs f11, 0x194(r1)
    lfs f10, 0x190(r1)
    lfs f9, 0x1a8(r1)
    lfs f8, 0x1a4(r1)
    lfs f7, 0x1a0(r1)
    lfs f6, 0x1ac(r1)
    lfs f5, 0x19c(r1)
    lfs f4, 0x18c(r1)
    lfs f0, lbl_80886F90
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0xec(r1)
    stfs f3, 0x1e0(r1)
    stfs f3, 0x1e4(r1)
    stfs f3, 0x1e8(r1)
    stfs f0, 0x1ec(r1)
    stfs f13, 0x80(r1)
    stfs f29, 0x84(r1)
    stfs f30, 0x88(r1)
    stfs f13, 0x1b0(r1)
    stfs f29, 0x1b4(r1)
    stfs f30, 0x1b8(r1)
    stfs f10, 0x8c(r1)
    stfs f11, 0x90(r1)
    stfs f12, 0x94(r1)
    stfs f10, 0x1c0(r1)
    stfs f11, 0x1c4(r1)
    stfs f12, 0x1c8(r1)
    stfs f7, 0x98(r1)
    stfs f8, 0x9c(r1)
    stfs f9, 0xa0(r1)
    stfs f7, 0x1d0(r1)
    stfs f8, 0x1d4(r1)
    stfs f9, 0x1d8(r1)
    stfs f4, 0xa4(r1)
    stfs f5, 0xa8(r1)
    stfs f6, 0xac(r1)
    stfs f4, 0x1bc(r1)
    stfs f5, 0x1cc(r1)
    stfs f6, 0x1dc(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xb8(r1)
    bl fn_805F9750
    lfs f2, 0xb8(r1)
    lfs f0, lbl_80886F80
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8047C1D8_00000DFC
    lfs f3, 0xb4(r1)
    lfs f0, lbl_80886F8C
    fcmpo cr0, f3, f0
    ble lbl_fn_8047C1D8_00000DEC
    lfs f0, lbl_80886F84
    b lbl_fn_8047C1D8_00000DF0
lbl_fn_8047C1D8_00000DEC:
    lfs f0, lbl_80886F88
lbl_fn_8047C1D8_00000DF0:
    fneg f0, f0
    stfs f0, 0xbc(r1)
    b lbl_fn_8047C1D8_00000E10
lbl_fn_8047C1D8_00000DFC:
    lfs f1, 0xb4(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0xbc(r1)
lbl_fn_8047C1D8_00000E10:
    addi r3, r1, 0xbc
    lfs f2, lbl_80886F8C
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x2c
    psq_st f1, 0x0(r31), 0, 0
    frsp f30, f2
    lfs f3, lbl_80886F98
    addi r4, r1, 0x20
    lfs f4, 0xe4(r1)
    lfs f0, lbl_80886F94
    fmuls f3, f4, f3
    stfs f2, 0xc4(r1)
    lfs f29, 0xe8(r1)
    stfs f2, 0xec(r1)
    fmuls f1, f0, f3
    bl fn_8072D210
    lfs f3, lbl_80886F98
    addi r3, r1, 0x30
    lfs f0, lbl_80886F94
    addi r4, r1, 0x24
    fmuls f3, f29, f3
    fmuls f1, f0, f3
    bl fn_8072D210
    lfs f3, lbl_80886F98
    addi r3, r1, 0x34
    lfs f0, lbl_80886F94
    addi r4, r1, 0x28
    fmuls f3, f30, f3
    fmuls f1, f0, f3
    bl fn_8072D210
    lfs f12, 0x24(r1)
    addi r31, r1, 0xd8
    lfs f9, 0x2c(r1)
    lfs f2, 0x8(r30)
    lfs f5, 0x30(r1)
    fmuls f4, f9, f12
    lfs f10, 0x34(r1)
    fabs f7, f2
    lfs f8, 0x20(r1)
    fmuls f3, f9, f5
    lfs f11, 0x28(r1)
    fmuls f6, f5, f10
    psq_l f1, 0x0(r30), 0, 0
    frsp f29, f7
    lfs f0, lbl_80886F80
    fmuls f5, f8, f5
    psq_st f1, 0x0(r31), 0, 0
    fmuls f4, f10, f4
    stfs f2, 0xe0(r1)
    fmuls f7, f9, f6
    fmuls f13, f12, f11
    fmadds f5, f11, f5, f4
    fmuls f6, f8, f6
    fmadds f7, f8, f13, f7
    stfs f5, 0x104(r1)
    fmuls f4, f8, f12
    fmsubs f6, f9, f13, f6
    stfs f7, 0x10c(r1)
    fmuls f3, f11, f3
    fcmpo cr0, f29, f0
    stfs f6, 0x100(r1)
    fmsubs f0, f10, f4, f3
    stfs f0, 0x108(r1)
    bge lbl_fn_8047C1D8_00000F34
    lfs f3, 0xd8(r1)
    lfs f0, lbl_80886F8C
    fcmpo cr0, f3, f0
    ble lbl_fn_8047C1D8_00000F28
    lfs f0, lbl_80886F84
    b lbl_fn_8047C1D8_00000F2C
lbl_fn_8047C1D8_00000F28:
    lfs f0, lbl_80886F88
lbl_fn_8047C1D8_00000F2C:
    stfs f0, 0x78(r1)
    b lbl_fn_8047C1D8_00000F48
lbl_fn_8047C1D8_00000F34:
    frsp f2, f2
    lfs f1, 0xd8(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x78(r1)
lbl_fn_8047C1D8_00000F48:
    lfs f0, 0x78(r1)
    addi r3, r1, 0x110
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80886F8C
    addi r4, r1, 0x68
    lfs f30, 0x118(r1)
    mr r5, r4
    lfs f29, 0x114(r1)
    addi r3, r1, 0x140
    lfs f13, 0x110(r1)
    lfs f12, 0x128(r1)
    lfs f11, 0x124(r1)
    lfs f10, 0x120(r1)
    lfs f9, 0x138(r1)
    lfs f8, 0x134(r1)
    lfs f7, 0x130(r1)
    lfs f6, 0x13c(r1)
    lfs f5, 0x12c(r1)
    lfs f4, 0x11c(r1)
    lfs f0, lbl_80886F90
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0xe0(r1)
    stfs f3, 0x170(r1)
    stfs f3, 0x174(r1)
    stfs f3, 0x178(r1)
    stfs f0, 0x17c(r1)
    stfs f13, 0x38(r1)
    stfs f29, 0x3c(r1)
    stfs f30, 0x40(r1)
    stfs f13, 0x140(r1)
    stfs f29, 0x144(r1)
    stfs f30, 0x148(r1)
    stfs f10, 0x44(r1)
    stfs f11, 0x48(r1)
    stfs f12, 0x4c(r1)
    stfs f10, 0x150(r1)
    stfs f11, 0x154(r1)
    stfs f12, 0x158(r1)
    stfs f7, 0x50(r1)
    stfs f8, 0x54(r1)
    stfs f9, 0x58(r1)
    stfs f7, 0x160(r1)
    stfs f8, 0x164(r1)
    stfs f9, 0x168(r1)
    stfs f4, 0x5c(r1)
    stfs f5, 0x60(r1)
    stfs f6, 0x64(r1)
    stfs f4, 0x14c(r1)
    stfs f5, 0x15c(r1)
    stfs f6, 0x16c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x70(r1)
    bl fn_805F9750
    lfs f2, 0x70(r1)
    lfs f0, lbl_80886F80
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8047C1D8_00001064
    lfs f3, 0x6c(r1)
    lfs f0, lbl_80886F8C
    fcmpo cr0, f3, f0
    ble lbl_fn_8047C1D8_00001054
    lfs f0, lbl_80886F84
    b lbl_fn_8047C1D8_00001058
lbl_fn_8047C1D8_00001054:
    lfs f0, lbl_80886F88
lbl_fn_8047C1D8_00001058:
    fneg f0, f0
    stfs f0, 0x74(r1)
    b lbl_fn_8047C1D8_00001078
lbl_fn_8047C1D8_00001064:
    lfs f1, 0x6c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x74(r1)
lbl_fn_8047C1D8_00001078:
    addi r3, r1, 0x74
    lfs f2, lbl_80886F8C
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x14
    psq_st f1, 0x0(r31), 0, 0
    frsp f29, f2
    lfs f3, lbl_80886F98
    addi r4, r1, 0x8
    lfs f4, 0xd8(r1)
    lfs f0, lbl_80886F94
    fmuls f3, f4, f3
    stfs f2, 0x7c(r1)
    lfs f30, 0xdc(r1)
    stfs f2, 0xe0(r1)
    fmuls f1, f0, f3
    bl fn_8072D210
    lfs f3, lbl_80886F98
    addi r3, r1, 0x18
    lfs f0, lbl_80886F94
    addi r4, r1, 0xc
    fmuls f3, f30, f3
    fmuls f1, f0, f3
    bl fn_8072D210
    lfs f3, lbl_80886F98
    addi r3, r1, 0x1c
    lfs f0, lbl_80886F94
    addi r4, r1, 0x10
    fmuls f3, f29, f3
    fmuls f1, f0, f3
    bl fn_8072D210
    lfs f11, 0xc(r1)
    fmr f1, f31
    lfs f8, 0x14(r1)
    addi r3, r1, 0xf0
    lfs f4, 0x18(r1)
    addi r4, r1, 0x100
    lfs f9, 0x1c(r1)
    fmuls f3, f8, f11
    lfs f7, 0x8(r1)
    fmuls f5, f4, f9
    lfs f10, 0x10(r1)
    fmuls f0, f8, f4
    addi r5, r1, 0xc8
    fmuls f6, f8, f5
    fmuls f12, f11, f10
    fmuls f5, f7, f5
    fmuls f4, f7, f4
    fmuls f3, f9, f3
    fmadds f6, f7, f12, f6
    fmsubs f5, f8, f12, f5
    fmadds f4, f10, f4, f3
    stfs f6, 0xfc(r1)
    fmuls f3, f7, f11
    fmuls f0, f10, f0
    stfs f5, 0xf0(r1)
    stfs f4, 0xf4(r1)
    fmsubs f0, f9, f3, f0
    stfs f0, 0xf8(r1)
    bl fn_805F9D20
    addi r3, r1, 0xc8
    addi r4, r1, 0xf0
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    addi r3, r1, 0x1f0
    psq_st f1, 0x0(r4), 0, 0
    lfs f3, lbl_80886F8C
    psq_st f2, 0x8(r4), 0, 0
    lfs f0, lbl_80886F90
    stfs f3, 0x0(r29)
    stfs f3, 0x4(r29)
    stfs f0, 0x8(r29)
    bl fn_805F9190
    mr r4, r29
    mr r5, r29
    addi r3, r1, 0x1f0
    bl fn_805F93C0
    lwz r0, 0x264(r1)
    psq_l f31, 0x258(r1), 0, 0
    lfd f31, 0x250(r1)
    psq_l f30, 0x248(r1), 0, 0
    lfd f30, 0x240(r1)
    psq_l f29, 0x238(r1), 0, 0
    lfd f29, 0x230(r1)
    lwz r31, 0x22c(r1)
    lwz r30, 0x228(r1)
    lwz r29, 0x224(r1)
    mtlr r0
    addi r1, r1, 0x260
    blr
}

asm void fn_8047C770(void)
{
    nofralloc
    addi r3, r3, 0x3c
    blr
}

asm void fn_8047C778(void)
{
    nofralloc
    addi r3, r3, 0x2c
    blr
}

asm void fn_8047C780(void)
{
    nofralloc
    addi r3, r3, 0x198
    blr
}

asm void fn_8047C788(void)
{
    nofralloc
    lwz r9, 0x0(r4)
    lwz r8, 0x4(r4)
    lfs f0, 0x8(r4)
    lwz r7, 0xc(r4)
    lwz r6, 0x10(r4)
    lwz r5, 0x14(r4)
    lwz r0, 0x18(r4)
    psq_l f1, 0x1c(r4), 0, 0
    lfs f2, 0x24(r4)
    stw r9, 0x0(r3)
    stw r8, 0x4(r3)
    stfs f0, 0x8(r3)
    stw r7, 0xc(r3)
    stw r6, 0x10(r3)
    stw r5, 0x14(r3)
    stw r0, 0x18(r3)
    psq_st f1, 0x1c(r3), 0, 0
    stfs f2, 0x24(r3)
    blr
}

asm void fn_8047C7D4(void)
{
    nofralloc
    addi r3, r3, 0x238
    blr
}

asm void fn_8047C7DC(void)
{
    nofralloc
    lwz r0, 0x260(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8047C7DC_0000125C
    addi r3, r3, 0x264
    blr
lbl_fn_8047C7DC_0000125C:
    lwz r3, lbl_8087EFA8
    addi r3, r3, 0x324
    blr
}

asm void fn_8047C7FC(void)
{
    nofralloc
    psq_l f1, 0xc(r4), 0, 0
    psq_st f1, 0xc(r3), 0, 0
    psq_l f1, 0x14(r4), 0, 0
    psq_st f1, 0x14(r3), 0, 0
    psq_l f1, 0x1c(r4), 0, 0
    psq_st f1, 0x1c(r3), 0, 0
    psq_l f1, 0x24(r4), 0, 0
    psq_st f1, 0x24(r3), 0, 0
    lwz r5, 0x0(r4)
    lwz r0, 0x4(r4)
    lfs f0, 0x8(r4)
    psq_l f1, 0x2c(r4), 0, 0
    psq_l f2, 0x34(r4), 0, 0
    stw r5, 0x0(r3)
    stw r0, 0x4(r3)
    stfs f0, 0x8(r3)
    psq_st f1, 0x2c(r3), 0, 0
    psq_st f2, 0x34(r3), 0, 0
    blr
}

asm void fn_8047C848(void)
{
    nofralloc
    addi r3, r3, 0x1f8
    blr
}

asm void fn_8047C850(void)
{
    nofralloc
    lwz r8, 0x0(r4)
    lfs f1, 0x4(r4)
    lfs f0, 0x8(r4)
    lwz r7, 0xc(r4)
    lwz r6, 0x10(r4)
    lwz r5, 0x14(r4)
    lwz r0, 0x18(r4)
    stw r8, 0x0(r3)
    stfs f1, 0x4(r3)
    stfs f0, 0x8(r3)
    stw r7, 0xc(r3)
    stw r6, 0x10(r3)
    stw r5, 0x14(r3)
    stw r0, 0x18(r3)
    blr
}

asm void fn_8047C88C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x0(r3)
    stw r0, 0x3c(r4)
    lwz r0, 0x260(r4)
    lfs f0, 0x4(r3)
    stfs f0, 0x40(r4)
    cmpwi r0, 0x0
    lfs f0, 0x8(r3)
    stfs f0, 0x44(r4)
    lwz r5, 0xc(r3)
    lwz r0, 0x10(r3)
    stw r0, 0x4c(r4)
    stw r5, 0x48(r4)
    lwz r5, 0x14(r3)
    lwz r0, 0x18(r3)
    stw r0, 0x54(r4)
    stw r5, 0x50(r4)
    lfs f0, 0x1c(r3)
    stfs f0, 0xc(r4)
    lfs f0, 0x20(r3)
    stfs f0, 0x10(r4)
    lfs f0, 0x24(r3)
    stfs f0, 0x14(r4)
    lfs f0, 0x28(r3)
    stfs f0, 0x18(r4)
    lfs f0, 0x2c(r3)
    stfs f0, 0x1c(r4)
    lfs f0, 0x30(r3)
    stfs f0, 0x20(r4)
    lfs f0, 0x34(r3)
    stfs f0, 0x24(r4)
    lfs f0, 0x38(r3)
    stfs f0, 0x28(r4)
    lfs f0, 0x3c(r3)
    stfs f0, 0x2c(r4)
    lfs f0, 0x40(r3)
    stfs f0, 0x30(r4)
    lfs f0, 0x44(r3)
    stfs f0, 0x34(r4)
    lfs f0, 0x48(r3)
    stfs f0, 0x38(r4)
    lwz r0, 0x4c(r3)
    stw r0, 0x198(r4)
    lwz r0, 0x50(r3)
    stw r0, 0x19c(r4)
    lwz r0, 0x54(r3)
    stw r0, 0x1a0(r4)
    lwz r0, 0x58(r3)
    stw r0, 0x1a4(r4)
    lwz r0, 0x5c(r3)
    stw r0, 0x1a8(r4)
    lwz r0, 0x60(r3)
    stw r0, 0x1ac(r4)
    lwz r0, 0x64(r3)
    stw r0, 0x1b0(r4)
    lfs f0, 0x68(r3)
    stfs f0, 0x1b4(r4)
    lfs f0, 0x6c(r3)
    stfs f0, 0x1b8(r4)
    lfs f0, 0x70(r3)
    stfs f0, 0x1bc(r4)
    lwz r5, 0x74(r3)
    lwz r0, 0x78(r3)
    stw r0, 0x1c4(r4)
    stw r5, 0x1c0(r4)
    lwz r5, 0x7c(r3)
    lwz r0, 0x80(r3)
    stw r0, 0x1cc(r4)
    stw r5, 0x1c8(r4)
    psq_l f1, 0x84(r3), 0, 0
    lfs f2, 0x8c(r3)
    stfs f2, 0x1d8(r4)
    psq_st f1, 0x1d0(r4), 0, 0
    lfs f0, 0x90(r3)
    stfs f0, 0x1dc(r4)
    lwz r0, 0x94(r3)
    stw r0, 0x238(r4)
    lwz r0, 0x98(r3)
    stw r0, 0x23c(r4)
    lfs f0, 0x9c(r3)
    stfs f0, 0x240(r4)
    lwz r5, 0xa0(r3)
    lwz r0, 0xa4(r3)
    stw r0, 0x248(r4)
    stw r5, 0x244(r4)
    lwz r5, 0xa8(r3)
    lwz r0, 0xac(r3)
    stw r0, 0x250(r4)
    stw r5, 0x24c(r4)
    psq_l f1, 0xb0(r3), 0, 0
    lfs f2, 0xb8(r3)
    stfs f2, 0x25c(r4)
    psq_st f1, 0x254(r4), 0, 0
    beq lbl_fn_8047C88C_00001488
    addi r5, r4, 0x264
    b lbl_fn_8047C88C_00001490
lbl_fn_8047C88C_00001488:
    lwz r5, lbl_8087EFA8
    addi r5, r5, 0x324
lbl_fn_8047C88C_00001490:
    lwz r0, 0xbc(r3)
    stw r0, 0x0(r5)
    psq_l f2, 0xc8(r3), 0, 0
    psq_l f1, 0xc0(r3), 0, 0
    psq_st f1, 0x4(r5), 0, 0
    psq_st f2, 0xc(r5), 0, 0
    psq_l f2, 0xd8(r3), 0, 0
    psq_l f1, 0xd0(r3), 0, 0
    psq_st f1, 0x14(r5), 0, 0
    psq_st f2, 0x1c(r5), 0, 0
    psq_l f2, 0xe8(r3), 0, 0
    psq_l f1, 0xe0(r3), 0, 0
    psq_st f1, 0x24(r5), 0, 0
    psq_st f2, 0x2c(r5), 0, 0
    psq_l f2, 0xf8(r3), 0, 0
    psq_l f1, 0xf0(r3), 0, 0
    psq_st f1, 0x34(r5), 0, 0
    psq_st f2, 0x3c(r5), 0, 0
    lwz r0, 0x100(r3)
    stw r0, 0x44(r5)
    lwz r0, 0x104(r3)
    stw r0, 0x48(r5)
    lfs f0, 0x108(r3)
    stfs f0, 0x4c(r5)
    lwz r0, 0x10c(r3)
    stw r0, 0x1f8(r4)
    lwz r0, 0x110(r3)
    stw r0, 0x1fc(r4)
    lfs f0, 0x114(r3)
    stfs f0, 0x200(r4)
    psq_l f1, 0x118(r3), 0, 0
    psq_st f1, 0x204(r4), 0, 0
    psq_l f1, 0x120(r3), 0, 0
    psq_st f1, 0x20c(r4), 0, 0
    psq_l f1, 0x128(r3), 0, 0
    psq_st f1, 0x214(r4), 0, 0
    psq_l f1, 0x130(r3), 0, 0
    psq_st f1, 0x21c(r4), 0, 0
    psq_l f1, 0x138(r3), 0, 0
    psq_l f2, 0x140(r3), 0, 0
    psq_st f2, 0x22c(r4), 0, 0
    psq_st f1, 0x224(r4), 0, 0
    lwz r0, 0x148(r3)
    mr r3, r4
    stw r0, 0x120(r4)
    li r4, 0x0
    bl fn_800C2448
    lwz r0, 0x14c(r31)
    stw r0, 0x0(r3)
    lwz r0, 0x150(r31)
    stw r0, 0x4(r3)
    lfs f2, 0x15c(r31)
    psq_l f1, 0x154(r31), 0, 0
    psq_st f1, 0x8(r3), 0, 0
    stfs f2, 0x10(r3)
    lfs f2, 0x168(r31)
    psq_l f1, 0x160(r31), 0, 0
    psq_st f1, 0x14(r3), 0, 0
    stfs f2, 0x1c(r3)
    lwz r0, 0x16c(r31)
    stw r0, 0x20(r3)
    lfs f0, 0x170(r31)
    stfs f0, 0x24(r3)
    lfs f0, 0x174(r31)
    stfs f0, 0x28(r3)
    lfs f0, 0x178(r31)
    stfs f0, 0x2c(r3)
    lfs f0, 0x17c(r31)
    stfs f0, 0x30(r3)
    lwz r0, 0x184(r31)
    lwz r4, 0x180(r31)
    stw r4, 0x34(r3)
    stw r0, 0x38(r3)
    lwz r0, 0x18c(r31)
    lwz r4, 0x188(r31)
    stw r4, 0x3c(r3)
    stw r0, 0x40(r3)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8047CB6C(void)
{
    nofralloc
    stw r4, 0x120(r3)
    blr
}

asm void fn_8047CB74(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    stfd f31, 0xa8(r1)
    stfd f30, 0xa0(r1)
    fmr f30, f1
    stmw r27, 0x8c(r1)
    mr r28, r4
    mr r27, r3
    mr r3, r28
    bl fn_8047C770
    mr r4, r27
    bl fn_8047C850
    mr r3, r28
    bl fn_801856A4
    fmr f1, f30
    mr r5, r3
    addi r3, r1, 0x78
    addi r4, r27, 0x1c
    bl fn_8047CEBC
    mr r3, r28
    bl fn_801856A4
    addi r4, r1, 0x78
    bl fn_80042108
    mr r3, r28
    bl fn_801856AC
    fmr f1, f30
    mr r5, r3
    addi r3, r1, 0x68
    addi r4, r27, 0x2c
    bl fn_8047CEBC
    mr r3, r28
    bl fn_801856AC
    addi r4, r1, 0x68
    bl fn_80042108
    mr r3, r28
    bl fn_8047C778
    fmr f1, f30
    mr r5, r3
    addi r3, r1, 0x58
    addi r4, r27, 0x3c
    bl fn_8047CEBC
    mr r3, r28
    bl fn_8047C778
    addi r4, r1, 0x58
    bl fn_80042108
    mr r3, r28
    bl fn_8047C780
    fmr f1, f30
    mr r5, r3
    addi r3, r1, 0x48
    addi r4, r27, 0x74
    addi r5, r5, 0x28
    bl fn_8047CEBC
    mr r3, r28
    bl fn_8047C780
    addi r3, r3, 0x28
    addi r4, r1, 0x48
    bl fn_80042108
    mr r3, r28
    bl fn_8047C780
    fmr f1, f30
    mr r5, r3
    addi r3, r1, 0x38
    addi r4, r27, 0x84
    addi r5, r5, 0x38
    bl fn_800F7260
    mr r3, r28
    bl fn_8047C780
    addi r3, r3, 0x38
    addi r4, r1, 0x38
    bl fn_8000D124
    mr r3, r28
    bl fn_8047C780
    fmr f1, f30
    mr r4, r3
    addi r3, r27, 0x70
    addi r4, r4, 0x24
    bl fn_800F8524
    fmr f31, f1
    mr r3, r28
    bl fn_8047C780
    stfs f31, 0x24(r3)
    mr r3, r28
    bl fn_8047C7D4
    addi r4, r27, 0x94
    bl fn_8047C788
    addi r30, r27, 0xc0
    li r29, 0x0
    li r31, 0x0
lbl_fn_8047CB74_00001748:
    mr r3, r28
    bl fn_8047C7DC
    fmr f1, f30
    add r5, r3, r31
    mr r4, r30
    addi r3, r1, 0x28
    addi r5, r5, 0x4
    bl fn_8047CE30
    mr r3, r28
    bl fn_8047C7DC
    add r3, r3, r31
    addi r4, r1, 0x28
    addi r3, r3, 0x4
    bl fn_803D7000
    addi r29, r29, 0x1
    addi r30, r30, 0x10
    cmplwi r29, 0x4
    addi r31, r31, 0x10
    blt lbl_fn_8047CB74_00001748
    mr r3, r28
    bl fn_8047C848
    addi r4, r27, 0x10c
    bl fn_8047C7FC
    lwz r4, 0x148(r27)
    mr r3, r28
    bl fn_8047CB6C
    mr r3, r28
    li r4, 0x0
    bl fn_800C2448
    bl fn_8047CDFC
    mr r31, r3
    addi r3, r27, 0x14c
    bl fn_8047CDFC
    fmr f1, f30
    mr r4, r3
    mr r5, r31
    addi r3, r1, 0x18
    bl fn_8047C1D8
    mr r3, r28
    li r4, 0x0
    bl fn_800C2448
    addi r4, r1, 0x18
    bl fn_8047CDE8
    mr r3, r28
    li r4, 0x0
    bl fn_800C2448
    bl fn_8047CE28
    mr r31, r3
    addi r3, r27, 0x14c
    bl fn_8047CE28
    fmr f1, f30
    mr r4, r3
    mr r5, r31
    addi r3, r1, 0x8
    bl fn_8047CEBC
    mr r3, r28
    li r4, 0x0
    bl fn_800C2448
    addi r4, r1, 0x8
    bl fn_8047CE04
    lfd f31, 0xa8(r1)
    lfd f30, 0xa0(r1)
    lmw r27, 0x8c(r1)
    lwz r0, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_8047CDE8(void)
{
    nofralloc
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    psq_st f1, 0x14(r3), 0, 0
    stfs f2, 0x1c(r3)
    blr
}

asm void fn_8047CDFC(void)
{
    nofralloc
    addi r3, r3, 0x14
    blr
}

asm void fn_8047CE04(void)
{
    nofralloc
    lfs f3, 0x0(r4)
    lfs f2, 0x4(r4)
    lfs f1, 0x8(r4)
    lfs f0, 0xc(r4)
    stfs f3, 0x34(r3)
    stfs f2, 0x38(r3)
    stfs f1, 0x3c(r3)
    stfs f0, 0x40(r3)
    blr
}

asm void fn_8047CE28(void)
{
    nofralloc
    addi r3, r3, 0x34
    blr
}

asm void fn_8047CE30(void)
{
    nofralloc
    lfs f0, 0xc(r5)
    lfs f5, 0xc(r4)
    lfs f2, 0x8(r5)
    fsubs f6, f0, f5
    lfs f4, 0x8(r4)
    lfs f0, 0x4(r5)
    fsubs f7, f2, f4
    lfs f3, 0x4(r4)
    fmuls f9, f6, f1
    fsubs f8, f0, f3
    lfs f2, 0x0(r5)
    lfs f0, 0x0(r4)
    fmuls f10, f7, f1
    stwu r1, -0x30(r1)
    fadds f11, f9, f5
    fmuls f5, f8, f1
    stfs f8, 0xc(r1)
    fsubs f2, f2, f0
    fadds f4, f10, f4
    stfs f7, 0x10(r1)
    fadds f3, f5, f3
    fmuls f1, f2, f1
    stfs f2, 0x8(r1)
    stfs f6, 0x14(r1)
    fadds f0, f1, f0
    stfs f1, 0x18(r1)
    stfs f5, 0x1c(r1)
    stfs f10, 0x20(r1)
    stfs f9, 0x24(r1)
    stfs f0, 0x0(r3)
    stfs f3, 0x4(r3)
    stfs f4, 0x8(r3)
    stfs f11, 0xc(r3)
    addi r1, r1, 0x30
    blr
}

asm void fn_8047CEBC(void)
{
    nofralloc
    lfs f0, 0xc(r5)
    lfs f5, 0xc(r4)
    lfs f2, 0x8(r5)
    fsubs f6, f0, f5
    lfs f4, 0x8(r4)
    lfs f0, 0x4(r5)
    fsubs f7, f2, f4
    lfs f3, 0x4(r4)
    fmuls f9, f6, f1
    fsubs f8, f0, f3
    lfs f2, 0x0(r5)
    lfs f0, 0x0(r4)
    fmuls f10, f7, f1
    stwu r1, -0x30(r1)
    fadds f11, f9, f5
    fmuls f5, f8, f1
    stfs f8, 0xc(r1)
    fsubs f2, f2, f0
    fadds f4, f10, f4
    stfs f7, 0x10(r1)
    fadds f3, f5, f3
    fmuls f1, f2, f1
    stfs f2, 0x8(r1)
    stfs f6, 0x14(r1)
    fadds f0, f1, f0
    stfs f1, 0x18(r1)
    stfs f5, 0x1c(r1)
    stfs f10, 0x20(r1)
    stfs f9, 0x24(r1)
    stfs f0, 0x0(r3)
    stfs f3, 0x4(r3)
    stfs f4, 0x8(r3)
    stfs f11, 0xc(r3)
    addi r1, r1, 0x30
    blr
}

asm void fn_8047CF48(void)
{
    nofralloc
    lfs f0, 0xc(r4)
    lfs f3, 0x8(r4)
    fmuls f4, f0, f1
    lfs f2, 0x4(r4)
    lfs f0, 0x0(r4)
    fmuls f3, f3, f1
    fmuls f2, f2, f1
    stfs f4, 0xc(r3)
    fmuls f0, f0, f1
    stfs f2, 0x4(r3)
    stfs f0, 0x0(r3)
    stfs f3, 0x8(r3)
    blr
}

asm void fn_8047CF7C(void)
{
    nofralloc
    stwu r1, -0x150(r1)
    mflr r0
    stw r0, 0x154(r1)
    addi r11, r1, 0x150
    bl _savegpr_26
    mr r31, r3
    bl fn_800D1D3C
    lfs f0, lbl_80886F90
    lis r3, lbl_807900C0@ha
    li r30, 0x0
    addi r8, r31, 0xbc
    addi r3, r3, lbl_807900C0@l
    lis r4, fn_80112254@ha
    lis r5, fn_8047DC98@ha
    stw r3, 0x0(r31)
    addi r3, r31, 0xc8
    addi r4, r4, fn_80112254@l
    stw r30, 0x64(r31)
    addi r5, r5, fn_8047DC98@l
    li r6, 0x65c
    li r7, 0x4
    stw r30, 0x68(r31)
    stw r30, 0x6c(r31)
    stw r30, 0x70(r31)
    stfs f0, 0xb4(r31)
    stw r30, 0xb8(r31)
    stw r8, 0x4(r8)
    stw r8, 0x0(r8)
    stw r30, 0xc4(r31)
    bl fn_806958E0
    lfs f2, lbl_80886F90
    li r6, 0x1
    lfs f12, lbl_80886F8C
    li r5, 0x3
    lfs f3, lbl_80886FA0
    li r3, 0x3e
    lfs f11, lbl_80886F98
    li r0, 0x5
    lfs f4, lbl_80886F9C
    lfs f0, lbl_80886FA4
    stw r30, 0x1a38(r31)
    stw r30, 0x1a3c(r31)
    stw r30, 0x1a40(r31)
    stw r30, 0x1a44(r31)
    stw r30, 0x1a48(r31)
    stw r6, 0x1a4c(r31)
    stw r3, 0x1a50(r31)
    stw r30, 0x1a54(r31)
    stfs f4, 0x1a58(r31)
    stw r30, 0x1a5c(r31)
    stw r30, 0x1a60(r31)
    stw r30, 0x1a64(r31)
    stw r30, 0x1a68(r31)
    stw r30, 0x1a6c(r31)
    stw r30, 0x1a70(r31)
    stw r30, 0x1a74(r31)
    stw r30, 0x1a78(r31)
    stfs f12, 0x1a84(r31)
    stw r30, 0x1a88(r31)
    stw r0, 0x1a8c(r31)
    stw r30, 0x1a90(r31)
    stw r30, 0x1a94(r31)
    stw r30, 0x1a98(r31)
    stw r30, 0x1a9c(r31)
    stw r6, 0x1ab8(r31)
    stw r30, 0x1abc(r31)
    stw r5, 0x1ac0(r31)
    stw r5, 0x1ac4(r31)
    stw r6, 0x1ac8(r31)
    stfs f2, 0x1acc(r31)
    stfs f3, 0x1ad0(r31)
    stfs f3, 0x1ad4(r31)
    stfs f12, 0x1ad8(r31)
    stfs f0, 0x1adc(r31)
    stfs f2, 0x1ae0(r31)
    stfs f2, 0x1ae8(r31)
    stfs f11, 0x1ae4(r31)
    stfs f11, 0x1aec(r31)
    stfs f2, 0x78(r1)
    lfs f0, lbl_80886FB8
    li r3, 0x140
    lfs f5, lbl_80886FA8
    li r0, 0xe0
    lfs f10, lbl_80886FAC
    lfs f4, lbl_80886FB0
    lfs f3, lbl_80886FB4
    stfs f2, 0x7c(r1)
    stfs f2, 0x80(r1)
    stfs f2, 0x84(r1)
    stfs f2, 0x1af0(r31)
    stfs f2, 0x1af4(r31)
    stfs f2, 0x1af8(r31)
    stfs f2, 0x1afc(r31)
    stfs f2, 0x68(r1)
    stfs f2, 0x6c(r1)
    stfs f2, 0x70(r1)
    stfs f2, 0x74(r1)
    stfs f2, 0x1b00(r31)
    stfs f2, 0x1b04(r31)
    stfs f2, 0x1b08(r31)
    stfs f2, 0x1b0c(r31)
    stfs f2, 0x58(r1)
    stfs f2, 0x5c(r1)
    stfs f2, 0x60(r1)
    stfs f2, 0x64(r1)
    stfs f2, 0x1b10(r31)
    stfs f2, 0x1b14(r31)
    stfs f2, 0x1b18(r31)
    stfs f2, 0x1b1c(r31)
    stw r30, 0x1b20(r31)
    stw r30, 0x1b24(r31)
    stw r30, 0x1b28(r31)
    stw r30, 0x1b2c(r31)
    stw r30, 0x1b30(r31)
    stw r30, 0x1b34(r31)
    stw r6, 0x1b38(r31)
    stw r30, 0x1b3c(r31)
    stw r30, 0x1b40(r31)
    stw r6, 0x1b44(r31)
    stfs f5, 0x1b48(r31)
    stfs f10, 0x1b4c(r31)
    stfs f4, 0x1b50(r31)
    stfs f3, 0x1b54(r31)
    stw r3, 0x1b58(r31)
    stw r0, 0x1b5c(r31)
    stfs f0, 0x1b60(r31)
    stfs f0, 0x1b64(r31)
    stw r30, 0x1b68(r31)
    stw r30, 0x1b6c(r31)
    stw r30, 0x1b70(r31)
    stfs f2, 0x1b74(r31)
    stfs f12, 0x1b78(r31)
    stw r30, 0x1b7c(r31)
    lfs f0, lbl_80886FD8
    addi r28, r1, 0xc8
    lfs f5, lbl_80886FCC
    li r29, 0x2
    lfs f9, lbl_80886FBC
    addi r7, r1, 0xd4
    lfs f6, lbl_80886FC8
    addi r27, r31, 0x1bd0
    lfs f8, lbl_80886FC0
    mr r3, r28
    lfs f7, lbl_80886FC4
    mr r4, r28
    lfs f4, lbl_80886FD0
    lfs f3, lbl_80886FD4
    stfs f2, 0xd4(r1)
    stfs f0, 0xd8(r1)
    stw r30, 0x1b80(r31)
    psq_l f1, 0x0(r7), 0, 0
    stfs f9, 0x1b84(r31)
    stfs f9, 0x1b88(r31)
    stw r30, 0x1b8c(r31)
    stw r30, 0x1b90(r31)
    stfs f2, 0x1b94(r31)
    stfs f2, 0x1b98(r31)
    stfs f2, 0x1b9c(r31)
    stfs f2, 0x1ba0(r31)
    stfs f12, 0x1ba4(r31)
    stfs f12, 0x1ba8(r31)
    stfs f12, 0x1bac(r31)
    stw r30, 0x1bb0(r31)
    stw r30, 0x1bb4(r31)
    stfs f2, 0x1bb8(r31)
    stfs f8, 0x1bbc(r31)
    stw r30, 0x1bc0(r31)
    stw r30, 0x1bc4(r31)
    stw r30, 0x1bc8(r31)
    stw r30, 0x1bd0(r31)
    stfs f7, 0x1bd4(r31)
    stfs f10, 0x1bd8(r31)
    stfs f11, 0x1bdc(r31)
    stfs f11, 0x1be0(r31)
    stfs f11, 0x1be4(r31)
    stfs f2, 0x1be8(r31)
    stw r30, 0x1c1c(r31)
    stw r30, 0x1c20(r31)
    stw r29, 0x1c24(r31)
    stw r5, 0x1c28(r31)
    stw r6, 0x1c2c(r31)
    stw r30, 0x1c30(r31)
    stw r30, 0x1c34(r31)
    stfs f6, 0x1c38(r31)
    stfs f6, 0x1c3c(r31)
    stfs f2, 0x1c40(r31)
    stfs f5, 0x1c44(r31)
    stfs f5, 0x1c48(r31)
    stfs f5, 0x1c4c(r31)
    stfs f2, 0x1c50(r31)
    stfs f12, 0x1c54(r31)
    stfs f2, 0x1c58(r31)
    stfs f12, 0x1c5c(r31)
    stfs f4, 0x1c60(r31)
    stw r6, 0x1c64(r31)
    stw r30, 0x1c68(r31)
    stfs f3, 0x1c6c(r31)
    stfs f11, 0x1c70(r31)
    stfs f11, 0x1c74(r31)
    stfs f11, 0x1c78(r31)
    stfs f2, 0x1c7c(r31)
    stfs f2, 0xdc(r1)
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0xd0(r1)
    bl fn_805F98D0
    lfs f8, lbl_80886F8C
    addi r7, r1, 0x88
    lfs f9, lbl_80886F90
    addi r6, r1, 0x98
    stfs f9, 0x88(r1)
    addi r5, r1, 0xa8
    psq_l f1, 0x0(r28), 0, 0
    addi r4, r1, 0xb8
    lfs f2, 0xd0(r1)
    addi r3, r27, 0x14c
    stfs f8, 0x8c(r1)
    lfs f3, lbl_80886FE8
    psq_st f1, 0xb0(r27), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    lfs f7, lbl_80886FDC
    lfs f6, lbl_80886FE0
    lfs f5, lbl_80886FB4
    lfs f4, lbl_80886FE4
    lfs f0, lbl_80886FEC
    stfs f8, 0x90(r1)
    stfs f8, 0x94(r1)
    stfs f2, 0xb8(r27)
    psq_l f2, 0x8(r7), 0, 0
    stfs f8, 0x98(r1)
    stfs f9, 0x9c(r1)
    psq_st f1, 0xc0(r27), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f8, 0xa0(r1)
    stfs f8, 0xa4(r1)
    psq_st f2, 0xc8(r27), 0, 0
    psq_l f2, 0x8(r6), 0, 0
    stfs f8, 0xa8(r1)
    stfs f8, 0xac(r1)
    psq_st f1, 0xd0(r27), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    stfs f9, 0xb0(r1)
    stfs f8, 0xb4(r1)
    psq_st f2, 0xd8(r27), 0, 0
    psq_l f2, 0x8(r5), 0, 0
    stfs f8, 0xb8(r1)
    stfs f8, 0xbc(r1)
    psq_st f1, 0xe0(r27), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    stfs f8, 0xc0(r1)
    stfs f8, 0xc4(r1)
    psq_st f2, 0xe8(r27), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    stw r30, 0xbc(r27)
    stw r30, 0x100(r27)
    stw r30, 0x104(r27)
    stfs f9, 0x108(r27)
    psq_st f1, 0xf0(r27), 0, 0
    psq_st f2, 0xf8(r27), 0, 0
    stw r30, 0x10c(r27)
    stw r30, 0x110(r27)
    stfs f7, 0x114(r27)
    stfs f8, 0x118(r27)
    stfs f6, 0x11c(r27)
    stfs f5, 0x120(r27)
    stfs f4, 0x124(r27)
    stfs f8, 0x128(r27)
    stfs f3, 0x12c(r27)
    stfs f0, 0x130(r27)
    stfs f3, 0x134(r27)
    stfs f8, 0x138(r27)
    stfs f8, 0x13c(r27)
    stfs f9, 0x140(r27)
    stfs f9, 0x144(r27)
    bl fn_80079044
    lfs f3, lbl_80886F8C
    addi r10, r1, 0x18
    lfs f4, lbl_80886F90
    addi r11, r31, 0x1d74
    stfs f4, 0x18(r1)
    addi r8, r1, 0x28
    lfs f0, lbl_80886FBC
    addi r9, r31, 0x1d84
    stfs f3, 0x1c(r1)
    addi r6, r1, 0x38
    addi r7, r31, 0x1d94
    addi r4, r1, 0x48
    psq_l f1, 0x0(r10), 0, 0
    addi r5, r31, 0x1da4
    stfs f3, 0x20(r1)
    addi r3, r31, 0x1dfc
    stfs f3, 0x24(r1)
    psq_l f2, 0x8(r10), 0, 0
    stfs f3, 0x28(r1)
    stfs f4, 0x2c(r1)
    psq_st f1, 0x0(r11), 0, 0
    psq_l f1, 0x0(r8), 0, 0
    stfs f3, 0x30(r1)
    stfs f3, 0x34(r1)
    psq_st f2, 0x8(r11), 0, 0
    psq_l f2, 0x8(r8), 0, 0
    stfs f3, 0x38(r1)
    stfs f3, 0x3c(r1)
    psq_st f1, 0x0(r9), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f4, 0x40(r1)
    stfs f3, 0x44(r1)
    psq_st f2, 0x8(r9), 0, 0
    psq_l f2, 0x8(r6), 0, 0
    stfs f3, 0x48(r1)
    stfs f3, 0x4c(r1)
    psq_st f1, 0x0(r7), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    stfs f3, 0x50(r1)
    stfs f3, 0x54(r1)
    psq_st f2, 0x8(r7), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    stw r30, 0x1d70(r31)
    stw r30, 0x1db4(r31)
    stw r30, 0x1db8(r31)
    stfs f4, 0x1dbc(r31)
    psq_st f1, 0x0(r5), 0, 0
    psq_st f2, 0x8(r5), 0, 0
    stw r30, 0x1dc0(r31)
    stw r30, 0x1dc4(r31)
    stw r30, 0x1dc8(r31)
    stfs f4, 0x1dcc(r31)
    stfs f3, 0x1dd0(r31)
    stw r30, 0x1dd4(r31)
    stw r30, 0x1dd8(r31)
    stfs f0, 0x1ddc(r31)
    stfs f0, 0x1de0(r31)
    bl fn_80221E08
    lfs f3, lbl_80886F8C
    addi r3, r31, 0x1eb8
    lfs f0, lbl_80886FB0
    stw r30, 0x1e74(r31)
    stw r30, 0x1e78(r31)
    stw r30, 0x1e7c(r31)
    stw r30, 0x1e80(r31)
    stw r30, 0x1e84(r31)
    stfs f3, 0x1e88(r31)
    stfs f3, 0x1e8c(r31)
    stw r30, 0x1e90(r31)
    stw r30, 0x1ea4(r31)
    stw r30, 0x1ea8(r31)
    stw r30, 0x1eac(r31)
    stw r30, 0x1eb0(r31)
    stfs f0, 0x1eb4(r31)
    bl fn_800C16C0
    stw r30, 0x1f10(r31)
    addi r3, r31, 0x1f20
    stw r30, 0x1f14(r31)
    stw r30, 0x1f18(r31)
    stw r30, 0x1f1c(r31)
    bl fn_8004AD9C
    addi r6, r31, 0x2378
    addi r4, r31, 0x1f80
    lfs f0, lbl_80886F8C
    cmplw r4, r6
    stw r30, 0x1f34(r31)
    stb r30, 0x1f38(r31)
    stw r30, 0x1f58(r31)
    stw r30, 0x1f5c(r31)
    stw r30, 0x1f60(r31)
    stw r29, 0x1f64(r31)
    stfs f0, 0x1f68(r31)
    stfs f0, 0x1f6c(r31)
    stw r30, 0x1f70(r31)
    stw r30, 0x1f74(r31)
    stw r30, 0x1f78(r31)
    stw r30, 0x1f7c(r31)
    bge lbl_fn_8047CF7C_00002078
    addi r0, r31, 0x1f80
    subi r5, r6, 0x40
    cmplw r0, r6
    li r3, 0x0
    li r0, 0x0
    bgt lbl_fn_8047CF7C_00001FD4
    li r3, 0x1
lbl_fn_8047CF7C_00001FD4:
    cmpwi r3, 0x0
    beq lbl_fn_8047CF7C_00001FE0
    li r0, 0x1
lbl_fn_8047CF7C_00001FE0:
    cmpwi r0, 0x0
    beq lbl_fn_8047CF7C_0000204C
    addi r0, r5, 0x3f
    li r3, 0x0
    subf r0, r4, r0
    srwi r0, r0, 6
    mtctr r0
    cmplw r4, r5
    bge lbl_fn_8047CF7C_0000204C
lbl_fn_8047CF7C_00002004:
    stw r3, 0x0(r4)
    stw r3, 0x4(r4)
    stw r3, 0x8(r4)
    stw r3, 0xc(r4)
    stw r3, 0x10(r4)
    stw r3, 0x14(r4)
    stw r3, 0x18(r4)
    stw r3, 0x1c(r4)
    stw r3, 0x20(r4)
    stw r3, 0x24(r4)
    stw r3, 0x28(r4)
    stw r3, 0x2c(r4)
    stw r3, 0x30(r4)
    stw r3, 0x34(r4)
    stw r3, 0x38(r4)
    stw r3, 0x3c(r4)
    addi r4, r4, 0x40
    bdnz lbl_fn_8047CF7C_00002004
lbl_fn_8047CF7C_0000204C:
    addi r0, r6, 0x7
    li r3, 0x0
    subf r0, r4, r0
    srwi r0, r0, 3
    mtctr r0
    cmplw r4, r6
    bge lbl_fn_8047CF7C_00002078
lbl_fn_8047CF7C_00002068:
    stw r3, 0x0(r4)
    stw r3, 0x4(r4)
    addi r4, r4, 0x8
    bdnz lbl_fn_8047CF7C_00002068
lbl_fn_8047CF7C_00002078:
    addi r5, r31, 0x23fc
    addi r4, r31, 0x23c4
    cmplw r4, r5
    li r3, 0x0
    li r0, 0x1
    stw r3, 0x237c(r31)
    stw r3, 0x2380(r31)
    stw r3, 0x2384(r31)
    stw r0, 0x2388(r31)
    stw r3, 0x238c(r31)
    stw r3, 0x2390(r31)
    stw r3, 0x2394(r31)
    stw r3, 0x2398(r31)
    stw r3, 0x239c(r31)
    stw r3, 0x23a0(r31)
    stw r3, 0x23a4(r31)
    stw r3, 0x23a8(r31)
    stw r3, 0x23b8(r31)
    stw r3, 0x23bc(r31)
    stw r3, 0x23c0(r31)
    bge lbl_fn_8047CF7C_000020F0
    addi r0, r5, 0x7
    subf r0, r4, r0
    srwi r0, r0, 3
    mtctr r0
    bge lbl_fn_8047CF7C_000020F0
lbl_fn_8047CF7C_000020E0:
    stw r3, 0x0(r4)
    stw r3, 0x4(r4)
    addi r4, r4, 0x8
    bdnz lbl_fn_8047CF7C_000020E0
lbl_fn_8047CF7C_000020F0:
    lfs f0, lbl_80886F90
    li r30, 0x0
    lfs f3, lbl_80886F98
    stw r30, 0x0(r5)
    stw r30, 0x2400(r31)
    stw r30, 0x240c(r31)
    stfs f3, 0x2410(r31)
    stfs f0, 0x2414(r31)
    stfs f0, 0x2418(r31)
    stw r30, 0x2448(r31)
    bl fn_8054E578
    bl fn_8010D98C
    li r6, 0x0
    stw r6, 0x74(r31)
    lis r29, lbl_80756380@ha
    li r0, -0x1
    stw r6, 0x78(r31)
    mr r3, r31
    addi r4, r29, lbl_80756380@l
    li r5, 0x0
    stw r6, 0x7c(r31)
    stw r6, 0x80(r31)
    stw r6, 0x84(r31)
    stw r6, 0x88(r31)
    stw r6, 0x8c(r31)
    stw r6, 0x90(r31)
    stw r6, 0x94(r31)
    stw r6, 0x98(r31)
    stw r6, 0x9c(r31)
    stw r6, 0xa0(r31)
    stw r6, 0xa4(r31)
    stw r6, 0xa8(r31)
    stw r6, 0xac(r31)
    stw r6, 0xb0(r31)
    stb r6, 0x1ab0(r31)
    stb r6, 0x1ab1(r31)
    stw r0, 0x1de4(r31)
    stw r6, 0x1de8(r31)
    stw r6, 0x1df8(r31)
    stw r6, 0x1dec(r31)
    stw r6, 0x1df0(r31)
    stw r6, 0x1df4(r31)
    bl fn_801F3FF8
    stw r3, 0x1a7c(r31)
    li r4, 0x1
    bl fn_800D246C
    addi r4, r29, lbl_80756380@l
    mr r3, r31
    addi r4, r4, 0x22
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x1a80(r31)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8006A250
    stw r3, 0x1aa8(r31)
    li r4, 0x1
    bl fn_800D246C
    stw r30, 0x1aa0(r31)
    stw r30, 0x1aa4(r31)
    stw r30, 0x1aac(r31)
    lwz r0, lbl_8087F544
    cmpwi r0, 0x0
    bne lbl_fn_8047CF7C_0000223C
    li r3, 0x48
    li r4, 0x3
    la r5, lbl_8087E0B4
    la r6, lbl_8087E0B0
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r27, r3
    beq lbl_fn_8047CF7C_00002238
    mr r4, r31
    bl fn_800D1D3C
    lis r3, lbl_80790130@ha
    addi r3, r3, lbl_80790130@l
    stw r3, 0x0(r27)
lbl_fn_8047CF7C_00002238:
    stw r27, lbl_8087F544
lbl_fn_8047CF7C_0000223C:
    lwz r0, lbl_8087F548
    cmpwi r0, 0x0
    bne lbl_fn_8047CF7C_00002284
    li r3, 0x48
    li r4, 0x3
    la r5, lbl_8087E0AC
    la r6, lbl_8087E0A8
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r27, r3
    beq lbl_fn_8047CF7C_00002280
    mr r4, r31
    bl fn_800D1D3C
    lis r3, lbl_807900F8@ha
    addi r3, r3, lbl_807900F8@l
    stw r3, 0x0(r27)
lbl_fn_8047CF7C_00002280:
    stw r27, lbl_8087F548
lbl_fn_8047CF7C_00002284:
    mr r3, r31
    bl fn_800D94F8
    lwz r0, 0x1a5c(r31)
    lis r3, lbl_80756380@ha
    addi r3, r3, lbl_80756380@l
    cmpwi r0, 0x0
    addi r4, r3, 0x4b
    bne lbl_fn_8047CF7C_000022C4
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_8047CF7C_000022C4
    addi r3, r3, 0x10
    bl fn_8008937C
    stw r3, 0x1a5c(r31)
    mr r27, r3
    b lbl_fn_8047CF7C_000022C8
lbl_fn_8047CF7C_000022C4:
    li r27, 0x0
lbl_fn_8047CF7C_000022C8:
    lis r29, lbl_80756380@ha
    mr r3, r27
    addi r29, r29, lbl_80756380@l
    addi r5, r31, 0x1a40
    addi r4, r29, 0x51
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r27
    addi r4, r29, 0x5d
    addi r5, r31, 0x1a44
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r27
    addi r4, r29, 0x6e
    addi r5, r31, 0x1e90
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r27
    addi r4, r29, 0x82
    addi r5, r31, 0x2384
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r27
    addi r4, r29, 0x8f
    addi r5, r31, 0x2388
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r27
    addi r4, r29, 0x9d
    addi r5, r31, 0x1f60
    li r6, 0x0
    li r7, 0x270f
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r27
    addi r4, r29, 0xab
    addi r5, r31, 0x1f64
    li r6, 0x0
    li r7, 0x270f
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r27
    addi r4, r29, 0xb8
    addi r5, r31, 0x238c
    li r6, 0x0
    li r7, 0x5
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r27
    addi r4, r29, 0xc3
    bl fn_8008937C
    mr r26, r3
    addi r4, r29, 0xd0
    addi r5, r31, 0x240c
    li r6, 0x0
    li r7, 0x3
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_80886F8C
    mr r3, r26
    lfs f2, lbl_80886F90
    addi r4, r29, 0xd5
    lfs f3, lbl_80886FF0
    addi r5, r31, 0x2410
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80886F8C
    mr r3, r26
    lfs f2, lbl_80886F90
    addi r4, r29, 0xdb
    lfs f3, lbl_80886FF0
    addi r5, r31, 0x2414
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80886F8C
    mr r3, r26
    lfs f2, lbl_80886F90
    addi r4, r29, 0xe8
    lfs f3, lbl_80886FF0
    addi r5, r31, 0x2418
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80886F8C
    mr r3, r27
    lfs f2, lbl_80886FB4
    addi r4, r29, 0xf9
    lfs f3, lbl_80886FF0
    addi r5, r31, 0x5c
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80886F8C
    mr r3, r27
    lfs f2, lbl_80886FB4
    addi r4, r29, 0x10a
    lfs f3, lbl_80886FF0
    addi r5, r31, 0x60
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80886F90
    mr r3, r27
    lfs f2, lbl_80886FD0
    addi r4, r29, 0x11b
    lfs f3, lbl_80886FF0
    addi r5, r31, 0x1a58
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    addi r3, r31, 0x1eb8
    addi r4, r29, 0x12c
    bl fn_800C1814
    lfs f3, lbl_80886F8C
    li r30, 0x0
    stfs f3, 0x10(r1)
    li r6, 0x1
    lfs f0, lbl_80886F90
    addi r4, r1, 0x10
    stfs f3, 0x14(r1)
    addi r3, r31, 0x1ebc
    addi r5, r1, 0x8
    addi r7, r31, 0x1ec4
    psq_l f1, 0x0(r4), 0, 0
    addi r9, r1, 0x128
    psq_st f1, 0x0(r3), 0, 0
    addi r8, r31, 0x1d74
    lbz r0, 0x2404(r31)
    addi r11, r1, 0x118
    stfs f3, 0x8(r1)
    addi r10, r31, 0x1d84
    rlwinm r0, r0, 0, 30, 23
    addi r27, r1, 0x108
    stfs f3, 0xc(r1)
    addi r12, r31, 0x1d94
    addi r26, r1, 0xf8
    addi r28, r31, 0x1da4
    psq_l f1, 0x0(r5), 0, 0
    mr r3, r31
    stfs f0, 0x128(r1)
    addi r4, r29, 0x14d
    li r5, 0x0
    stfs f3, 0x12c(r1)
    psq_st f1, 0x0(r7), 0, 0
    psq_l f1, 0x0(r9), 0, 0
    stfs f3, 0x130(r1)
    stfs f3, 0x134(r1)
    psq_l f2, 0x8(r9), 0, 0
    stfs f3, 0x118(r1)
    stfs f0, 0x11c(r1)
    psq_st f1, 0x0(r8), 0, 0
    psq_l f1, 0x0(r11), 0, 0
    stfs f3, 0x120(r1)
    stfs f3, 0x124(r1)
    psq_st f2, 0x8(r8), 0, 0
    psq_l f2, 0x8(r11), 0, 0
    stfs f3, 0x108(r1)
    stfs f3, 0x10c(r1)
    psq_st f1, 0x0(r10), 0, 0
    psq_l f1, 0x0(r27), 0, 0
    stfs f0, 0x110(r1)
    stfs f3, 0x114(r1)
    psq_st f2, 0x8(r10), 0, 0
    psq_l f2, 0x8(r27), 0, 0
    stfs f3, 0xf8(r1)
    stfs f3, 0xfc(r1)
    psq_st f1, 0x0(r12), 0, 0
    psq_l f1, 0x0(r26), 0, 0
    stfs f3, 0x100(r1)
    stfs f3, 0x104(r1)
    psq_st f2, 0x8(r12), 0, 0
    psq_l f2, 0x8(r26), 0, 0
    stw r30, 0x1eb8(r31)
    stw r6, 0x1f0c(r31)
    stw r30, 0x1d70(r31)
    psq_st f1, 0x0(r28), 0, 0
    psq_st f2, 0x8(r28), 0, 0
    stb r0, 0x2404(r31)
    bl fn_801F3FF8
    stw r3, 0x23ac(r31)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r31
    addi r4, r29, 0x14d
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x23b0(r31)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r31
    addi r4, r29, 0x16c
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x48(r31)
    li r4, 0x1
    bl fn_800D246C
    lis r4, lbl_807C7030@ha
    addi r6, r1, 0xec
    addi r4, r4, lbl_807C7030@l
    lfs f3, lbl_80886FE4
    psq_l f1, 0x0(r4), 0, 0
    mr r3, r31
    lfs f2, 0x8(r4)
    addi r4, r29, 0x18e
    lfs f0, lbl_80886FA4
    li r5, 0x0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0xf4(r1)
    psq_st f1, 0x4c(r31), 0, 0
    stfs f2, 0x54(r31)
    stfs f3, 0x5c(r31)
    stfs f0, 0x60(r31)
    bl fn_801F3FF8
    stw r3, 0x241c(r31)
    li r4, 0x1
    bl fn_800D246C
    lis r6, lbl_807C7028@ha
    addi r4, r31, 0x2424
    addi r6, r6, lbl_807C7028@l
    addi r7, r31, 0x242c
    psq_l f1, 0x0(r6), 0, 0
    mr r3, r31
    psq_st f1, 0x0(r4), 0, 0
    addi r4, r29, 0x1a8
    lfs f0, lbl_80886F8C
    li r5, 0x0
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r7), 0, 0
    stfs f0, 0x2434(r31)
    bl fn_801F3FF8
    stw r3, 0x2438(r31)
    li r4, 0x1
    bl fn_800D246C
    lfs f0, lbl_80886F8C
    addi r4, r1, 0xe0
    stfs f0, 0xe0(r1)
    addi r3, r31, 0x243c
    lfs f2, lbl_80886F90
    stfs f0, 0xe4(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x2444(r31)
    stw r30, 0x23b4(r31)
    lwz r3, lbl_8087F0A8
    stfs f2, 0xe8(r1)
    lwz r0, 0x17c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8047CF7C_000026E8
    stw r30, 0x1f60(r31)
lbl_fn_8047CF7C_000026E8:
    addi r11, r1, 0x150
    mr r3, r31
    bl _restgpr_26
    lwz r0, 0x154(r1)
    mtlr r0
    addi r1, r1, 0x150
    blr
}
