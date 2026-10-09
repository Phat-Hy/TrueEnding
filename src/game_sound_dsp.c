#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_22(void);
extern void _savegpr_22(void);
extern void fn_801CF3C0(void);
extern void fn_801CFA5C(void);
extern void fn_801CFAA8(void);
extern void fn_801D08D4(void);
extern void fn_801D08E8(void);
extern void fn_801D80A0(void);
extern void fn_801D80B4(void);
extern void fn_801D8C90(void);
extern void fn_801D8CAC(void);
extern void fn_801D8CB4(void);
extern void fn_801DA2F0(void);
extern void fn_801DA2F8(void);
extern void fn_801DA308(void);
extern void fn_801DC08C(void);
extern void fn_801DC09C(void);
extern void fn_801DC410(void);
extern void fn_801DC418(void);
extern void fn_801DE38C(void);
extern void fn_801DEF68(void);
extern void fn_801DF3D4(void);
extern void fn_801E07A4(void);
extern void fn_80206BE4(void);
extern void fn_80206C50(void);
extern void fn_80206D18(void);
extern void fn_8020ED84(void);
extern void fn_8020EF04(void);
extern void fn_8020EF4C(void);
extern void fn_8020EF80(void);
extern void fn_8020EFEC(void);
extern void fn_8020F0AC(void);
extern void fn_80211480(void);
extern void fn_802114D8(void);
extern void fn_802114E0(void);
extern void fn_80218BB4(void);
extern void fn_80218BC4(void);
extern void fn_80219544(void);
extern void fn_804444E8(void);
extern void fn_8044D034(void);
extern void fn_80686AF0(void);

/* External data declarations */

/* Small data declarations */
extern u32 lbl_8087DA78;
extern u32 lbl_8087F4F0;
extern u32 lbl_80882AF0;

/* Function declarations */
void fn_801DC8C8(void);
void fn_801DC9A4(void);
void fn_801DCBA8(void);
void fn_801DCDAC(void);
void fn_801DCE88(void);
void fn_801DCF60(void);
void fn_801DD12C(void);
void fn_801DD26C(void);
void fn_801DD7B0(void);

asm void fn_801DC8C8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    slwi r3, r4, 6
    stw r0, 0x24(r1)
    slwi r0, r5, 3
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r6
    stw r29, 0x14(r1)
    mr r29, r5
    stw r28, 0x10(r1)
    mr r28, r4
    lwz r7, lbl_8087F4F0
    addis r5, r7, 0x1
    add r3, r5, r3
    add r4, r3, r0
    lwz r4, -0x7d70(r4)
    mr r3, r29
    bl fn_8020ED84
    mr r31, r3
    mr r3, r29
    mr r4, r30
    bl fn_8020ED84
    cmpwi r31, 0x0
    slwi r0, r28, 2
    add r4, r29, r0
    bne lbl_fn_801DC8C8_00000088
    lwz r3, lbl_8087F4F0
    bl fn_8044D034
    cmpwi r3, 0x0
    beq lbl_fn_801DC8C8_000000BC
    li r0, -0x1
    stw r0, 0x0(r3)
    b lbl_fn_801DC8C8_000000BC
lbl_fn_801DC8C8_00000088:
    beq lbl_fn_801DC8C8_000000BC
    cmpwi r3, 0x0
    beq lbl_fn_801DC8C8_000000BC
    lwz r5, 0xa8(r31)
    lwz r0, 0xa8(r3)
    cmpw r5, r0
    beq lbl_fn_801DC8C8_000000BC
    lwz r3, lbl_8087F4F0
    bl fn_8044D034
    cmpwi r3, 0x0
    beq lbl_fn_801DC8C8_000000BC
    li r0, -0x1
    stw r0, 0x0(r3)
lbl_fn_801DC8C8_000000BC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801DC9A4(void)
{
    nofralloc
    cmpwi r4, 0x0
    bne lbl_fn_801DC9A4_000000EC
    mr r3, r5
    blr
lbl_fn_801DC9A4_000000EC:
    cmpwi r5, 0x0
    beq lbl_fn_801DC9A4_00000104
    cmpwi r6, 0x0
    bne lbl_fn_801DC9A4_00000104
    mr r3, r5
    blr
lbl_fn_801DC9A4_00000104:
    cmpwi r5, 0x0
    bne lbl_fn_801DC9A4_0000011C
    cmpwi r6, 0x0
    beq lbl_fn_801DC9A4_0000011C
    mr r3, r6
    blr
lbl_fn_801DC9A4_0000011C:
    li r0, 0x1e
    addi r3, r4, 0x4
    mtctr r0
lbl_fn_801DC9A4_00000128:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801DC9A4_000002D8
    cmpwi r0, 0x1
    beq lbl_fn_801DC9A4_00000160
    cmpwi r0, 0x2
    beq lbl_fn_801DC9A4_00000184
    cmpwi r0, 0x3
    beq lbl_fn_801DC9A4_000001A8
    cmpwi r0, 0x4
    beq lbl_fn_801DC9A4_000001CC
    cmpwi r0, 0x6
    beq lbl_fn_801DC9A4_000001F0
    b lbl_fn_801DC9A4_000002D0
lbl_fn_801DC9A4_00000160:
    lfs f1, 0x0(r5)
    lfs f0, 0x0(r6)
    fcmpo cr0, f1, f0
    ble lbl_fn_801DC9A4_00000178
    mr r3, r5
    blr
lbl_fn_801DC9A4_00000178:
    bge lbl_fn_801DC9A4_000002D0
    mr r3, r6
    blr
lbl_fn_801DC9A4_00000184:
    lfs f1, 0x8(r5)
    lfs f0, 0x8(r6)
    fcmpo cr0, f1, f0
    ble lbl_fn_801DC9A4_0000019C
    mr r3, r5
    blr
lbl_fn_801DC9A4_0000019C:
    bge lbl_fn_801DC9A4_000002D0
    mr r3, r6
    blr
lbl_fn_801DC9A4_000001A8:
    lfs f1, 0x4(r5)
    lfs f0, 0x4(r6)
    fcmpo cr0, f1, f0
    ble lbl_fn_801DC9A4_000001C0
    mr r3, r5
    blr
lbl_fn_801DC9A4_000001C0:
    bge lbl_fn_801DC9A4_000002D0
    mr r3, r6
    blr
lbl_fn_801DC9A4_000001CC:
    lfs f1, 0xc(r5)
    lfs f0, 0xc(r6)
    fcmpo cr0, f1, f0
    ble lbl_fn_801DC9A4_000001E4
    mr r3, r5
    blr
lbl_fn_801DC9A4_000001E4:
    bge lbl_fn_801DC9A4_000002D0
    mr r3, r6
    blr
lbl_fn_801DC9A4_000001F0:
    lwz r4, 0x4(r3)
    li r7, 0x0
    lwz r0, 0xe4(r5)
    cmpw r0, r4
    bne lbl_fn_801DC9A4_00000214
    lwz r0, 0xe8(r5)
    cmpwi r0, 0x0
    ble lbl_fn_801DC9A4_00000214
    addi r7, r5, 0xe4
lbl_fn_801DC9A4_00000214:
    lwz r0, 0xf8(r5)
    cmpw r0, r4
    bne lbl_fn_801DC9A4_00000230
    lwz r0, 0xfc(r5)
    cmpwi r0, 0x0
    ble lbl_fn_801DC9A4_00000230
    addi r7, r5, 0xf8
lbl_fn_801DC9A4_00000230:
    lwz r0, 0xe4(r6)
    li r8, 0x0
    cmpw r0, r4
    bne lbl_fn_801DC9A4_00000250
    lwz r0, 0xe8(r6)
    cmpwi r0, 0x0
    ble lbl_fn_801DC9A4_00000250
    addi r8, r6, 0xe4
lbl_fn_801DC9A4_00000250:
    lwz r0, 0xf8(r6)
    cmpw r0, r4
    bne lbl_fn_801DC9A4_0000026C
    lwz r0, 0xfc(r6)
    cmpwi r0, 0x0
    ble lbl_fn_801DC9A4_0000026C
    addi r8, r6, 0xf8
lbl_fn_801DC9A4_0000026C:
    cmpwi r7, 0x0
    beq lbl_fn_801DC9A4_000002A0
    cmpwi r8, 0x0
    beq lbl_fn_801DC9A4_000002A0
    lwz r0, 0x4(r8)
    lwz r4, 0x4(r7)
    cmpw r4, r0
    ble lbl_fn_801DC9A4_00000294
    mr r3, r5
    blr
lbl_fn_801DC9A4_00000294:
    bge lbl_fn_801DC9A4_000002D0
    mr r3, r6
    blr
lbl_fn_801DC9A4_000002A0:
    cmpwi r7, 0x0
    beq lbl_fn_801DC9A4_000002B8
    cmpwi r8, 0x0
    bne lbl_fn_801DC9A4_000002B8
    mr r3, r5
    blr
lbl_fn_801DC9A4_000002B8:
    cmpwi r7, 0x0
    bne lbl_fn_801DC9A4_000002D0
    cmpwi r8, 0x0
    beq lbl_fn_801DC9A4_000002D0
    mr r3, r6
    blr
lbl_fn_801DC9A4_000002D0:
    addi r3, r3, 0x8
    bdnz lbl_fn_801DC9A4_00000128
lbl_fn_801DC9A4_000002D8:
    mr r3, r5
    blr
}

asm void fn_801DCBA8(void)
{
    nofralloc
    cmpwi r4, 0x0
    bne lbl_fn_801DCBA8_000002F0
    mr r3, r5
    blr
lbl_fn_801DCBA8_000002F0:
    cmpwi r5, 0x0
    beq lbl_fn_801DCBA8_00000308
    cmpwi r6, 0x0
    bne lbl_fn_801DCBA8_00000308
    mr r3, r5
    blr
lbl_fn_801DCBA8_00000308:
    cmpwi r5, 0x0
    bne lbl_fn_801DCBA8_00000320
    cmpwi r6, 0x0
    beq lbl_fn_801DCBA8_00000320
    mr r3, r6
    blr
lbl_fn_801DCBA8_00000320:
    li r0, 0x1e
    addi r3, r4, 0x4
    mtctr r0
lbl_fn_801DCBA8_0000032C:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801DCBA8_000004DC
    cmpwi r0, 0x1
    beq lbl_fn_801DCBA8_00000364
    cmpwi r0, 0x2
    beq lbl_fn_801DCBA8_00000388
    cmpwi r0, 0x3
    beq lbl_fn_801DCBA8_000003AC
    cmpwi r0, 0x4
    beq lbl_fn_801DCBA8_000003D0
    cmpwi r0, 0x6
    beq lbl_fn_801DCBA8_000003F4
    b lbl_fn_801DCBA8_000004D4
lbl_fn_801DCBA8_00000364:
    lfs f1, 0x0(r5)
    lfs f0, 0x0(r6)
    fcmpo cr0, f1, f0
    ble lbl_fn_801DCBA8_0000037C
    mr r3, r5
    blr
lbl_fn_801DCBA8_0000037C:
    bge lbl_fn_801DCBA8_000004D4
    mr r3, r6
    blr
lbl_fn_801DCBA8_00000388:
    lfs f1, 0x8(r5)
    lfs f0, 0x8(r6)
    fcmpo cr0, f1, f0
    ble lbl_fn_801DCBA8_000003A0
    mr r3, r5
    blr
lbl_fn_801DCBA8_000003A0:
    bge lbl_fn_801DCBA8_000004D4
    mr r3, r6
    blr
lbl_fn_801DCBA8_000003AC:
    lfs f1, 0x4(r5)
    lfs f0, 0x4(r6)
    fcmpo cr0, f1, f0
    ble lbl_fn_801DCBA8_000003C4
    mr r3, r5
    blr
lbl_fn_801DCBA8_000003C4:
    bge lbl_fn_801DCBA8_000004D4
    mr r3, r6
    blr
lbl_fn_801DCBA8_000003D0:
    lfs f1, 0xc(r5)
    lfs f0, 0xc(r6)
    fcmpo cr0, f1, f0
    ble lbl_fn_801DCBA8_000003E8
    mr r3, r5
    blr
lbl_fn_801DCBA8_000003E8:
    bge lbl_fn_801DCBA8_000004D4
    mr r3, r6
    blr
lbl_fn_801DCBA8_000003F4:
    lwz r4, 0x4(r3)
    li r7, 0x0
    lwz r0, 0xc4(r5)
    cmpw r0, r4
    bne lbl_fn_801DCBA8_00000418
    lwz r0, 0xc8(r5)
    cmpwi r0, 0x0
    ble lbl_fn_801DCBA8_00000418
    addi r7, r5, 0xc4
lbl_fn_801DCBA8_00000418:
    lwz r0, 0xd8(r5)
    cmpw r0, r4
    bne lbl_fn_801DCBA8_00000434
    lwz r0, 0xdc(r5)
    cmpwi r0, 0x0
    ble lbl_fn_801DCBA8_00000434
    addi r7, r5, 0xd8
lbl_fn_801DCBA8_00000434:
    lwz r0, 0xc4(r6)
    li r8, 0x0
    cmpw r0, r4
    bne lbl_fn_801DCBA8_00000454
    lwz r0, 0xc8(r6)
    cmpwi r0, 0x0
    ble lbl_fn_801DCBA8_00000454
    addi r8, r6, 0xc4
lbl_fn_801DCBA8_00000454:
    lwz r0, 0xd8(r6)
    cmpw r0, r4
    bne lbl_fn_801DCBA8_00000470
    lwz r0, 0xdc(r6)
    cmpwi r0, 0x0
    ble lbl_fn_801DCBA8_00000470
    addi r8, r6, 0xd8
lbl_fn_801DCBA8_00000470:
    cmpwi r7, 0x0
    beq lbl_fn_801DCBA8_000004A4
    cmpwi r8, 0x0
    beq lbl_fn_801DCBA8_000004A4
    lwz r0, 0x4(r8)
    lwz r4, 0x4(r7)
    cmpw r4, r0
    ble lbl_fn_801DCBA8_00000498
    mr r3, r5
    blr
lbl_fn_801DCBA8_00000498:
    bge lbl_fn_801DCBA8_000004D4
    mr r3, r6
    blr
lbl_fn_801DCBA8_000004A4:
    cmpwi r7, 0x0
    beq lbl_fn_801DCBA8_000004BC
    cmpwi r8, 0x0
    bne lbl_fn_801DCBA8_000004BC
    mr r3, r5
    blr
lbl_fn_801DCBA8_000004BC:
    cmpwi r7, 0x0
    bne lbl_fn_801DCBA8_000004D4
    cmpwi r8, 0x0
    beq lbl_fn_801DCBA8_000004D4
    mr r3, r6
    blr
lbl_fn_801DCBA8_000004D4:
    addi r3, r3, 0x8
    bdnz lbl_fn_801DCBA8_0000032C
lbl_fn_801DCBA8_000004DC:
    mr r3, r5
    blr
}

asm void fn_801DCDAC(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r23, 0xc(r1)
    mr r26, r4
    mr r23, r3
    mr r25, r5
    mr r24, r6
    mr r3, r26
    bl fn_80218BC4
    mr r29, r3
    mr r3, r23
    mr r4, r26
    mr r5, r25
    bl fn_801CFA5C
    cmpwi r24, 0x0
    mr r28, r3
    li r27, 0x0
    bne lbl_fn_801DCDAC_00000534
    li r28, 0x0
lbl_fn_801DCDAC_00000534:
    mr r3, r23
    mr r4, r26
    mr r5, r25
    bl fn_801E07A4
    lwz r26, 0xb50(r23)
    li r25, 0x0
    li r30, 0x0
    b lbl_fn_801DCDAC_000005A0
lbl_fn_801DCDAC_00000554:
    lwz r0, 0xb4c(r23)
    add r31, r0, r30
    lwz r0, 0xc(r31)
    cmpwi r0, 0x0
    bge lbl_fn_801DCDAC_00000598
    lwz r3, 0x4(r31)
    bl fn_80206C50
    mr r24, r3
    mr r3, r23
    mr r4, r29
    mr r5, r28
    mr r6, r24
    bl fn_801DCBA8
    cmplw r3, r24
    bne lbl_fn_801DCDAC_00000598
    mr r28, r24
    mr r27, r31
lbl_fn_801DCDAC_00000598:
    addi r30, r30, 0x18
    addi r25, r25, 0x1
lbl_fn_801DCDAC_000005A0:
    cmplw r25, r26
    blt lbl_fn_801DCDAC_00000554
    mr r3, r27
    lmw r23, 0xc(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_801DCE88(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r22, 0x8(r1)
    mr r25, r4
    mr r22, r3
    mr r24, r5
    mr r23, r6
    mr r3, r25
    bl fn_80218BB4
    mr r27, r3
    mr r3, r22
    mr r4, r25
    mr r5, r24
    li r26, 0x0
    bl fn_801CFAA8
    cmpwi r23, 0x0
    mr r25, r3
    bne lbl_fn_801DCE88_00000610
    li r25, 0x0
lbl_fn_801DCE88_00000610:
    mulli r0, r24, 0xc
    li r23, 0x0
    li r29, 0x0
    add r31, r22, r0
    lwz r24, 0xb38(r31)
    b lbl_fn_801DCE88_00000678
lbl_fn_801DCE88_00000628:
    lwz r0, 0xb34(r31)
    add r30, r0, r29
    lwz r0, 0xc(r30)
    cmpwi r0, 0x0
    bge lbl_fn_801DCE88_00000670
    lwz r0, 0x10(r30)
    cmpwi r0, 0x0
    beq lbl_fn_801DCE88_00000670
    lwz r28, 0x0(r30)
    mr r3, r22
    mr r4, r27
    mr r5, r25
    mr r6, r28
    bl fn_801DC9A4
    cmplw r3, r28
    bne lbl_fn_801DCE88_00000670
    mr r25, r28
    mr r26, r30
lbl_fn_801DCE88_00000670:
    addi r29, r29, 0x18
    addi r23, r23, 0x1
lbl_fn_801DCE88_00000678:
    cmplw r23, r24
    blt lbl_fn_801DCE88_00000628
    mr r3, r26
    lmw r22, 0x8(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_801DCF60(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stmw r22, 0x28(r1)
    mr r31, r6
    mr r22, r7
    mr r30, r5
    mr r28, r3
    mr r29, r4
    mr r5, r31
    mr r6, r22
    bl fn_801DCDAC
    cmpwi r3, 0x0
    mr r6, r3
    beq lbl_fn_801DCF60_000006F0
    mr r3, r28
    mr r4, r29
    mr r5, r30
    mr r7, r31
    mr r8, r22
    li r9, 0x1
    bl fn_801CF3C0
lbl_fn_801DCF60_000006F0:
    lwz r4, lbl_8087F4F0
    slwi r3, r29, 6
    slwi r0, r31, 3
    addis r4, r4, 0x1
    add r3, r4, r3
    add r3, r3, r0
    lwz r0, -0x7d50(r3)
    cmpwi r0, 0x0
    bge lbl_fn_801DCF60_00000850
    lwz r3, 0x1c54(r28)
    cmpwi r3, 0x0
    beq lbl_fn_801DCF60_00000850
    subi r26, r3, 0x1
    slwi r27, r26, 2
    b lbl_fn_801DCF60_00000848
lbl_fn_801DCF60_0000072C:
    add r3, r28, r27
    li r24, 0x0
    lwz r25, 0x1c58(r3)
lbl_fn_801DCF60_00000738:
    cmpwi r24, 0x1
    bne lbl_fn_801DCF60_0000074C
    lwz r0, 0x0(r25)
    cmpwi r0, 0x3
    bne lbl_fn_801DCF60_00000834
lbl_fn_801DCF60_0000074C:
    lwz r4, 0x0(r25)
    mr r3, r28
    mr r5, r24
    bl fn_801CFA5C
    mr r23, r3
    mr r4, r29
    mr r5, r31
    bl fn_80206D18
    cmpwi r3, 0x0
    beq lbl_fn_801DCF60_00000834
    lwz r4, 0x0(r25)
    mr r3, r28
    mr r5, r24
    li r6, 0x0
    bl fn_801DCDAC
    cmpwi r3, 0x0
    mr r22, r3
    bne lbl_fn_801DCF60_000007A8
    mr r3, r28
    mr r4, r25
    mr r5, r24
    bl fn_801DD12C
    mr r22, r3
lbl_fn_801DCF60_000007A8:
    cmpwi r22, 0x0
    beq lbl_fn_801DCF60_00000834
    mr r3, r23
    mr r4, r29
    mr r5, r31
    bl fn_80206D18
    cmpwi r3, 0x0
    beq lbl_fn_801DCF60_00000834
    stw r23, 0x8(r1)
    mr r3, r23
    bl fn_80206BE4
    li r10, -0x1
    stw r3, 0xc(r1)
    li r0, 0x1
    mr r3, r28
    stw r10, 0x10(r1)
    mr r4, r29
    mr r5, r30
    mr r7, r31
    stw r10, 0x14(r1)
    addi r6, r1, 0x8
    li r8, 0x0
    li r9, 0x0
    stw r0, 0x18(r1)
    stw r10, 0x1c(r1)
    bl fn_801CF3C0
    lwz r4, 0x0(r25)
    mr r3, r28
    lwz r5, 0x4(r25)
    mr r6, r22
    mr r7, r24
    li r8, 0x0
    li r9, 0x1
    bl fn_801CF3C0
    b lbl_fn_801DCF60_00000850
lbl_fn_801DCF60_00000834:
    addi r24, r24, 0x1
    cmpwi r24, 0x2
    blt lbl_fn_801DCF60_00000738
    subi r26, r26, 0x1
    subi r27, r27, 0x4
lbl_fn_801DCF60_00000848:
    cmpwi r26, 0x0
    bge lbl_fn_801DCF60_0000072C
lbl_fn_801DCF60_00000850:
    lmw r22, 0x28(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_801DD12C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r23, 0xc(r1)
    mr r23, r3
    mr r24, r4
    mr r25, r5
    lwz r6, 0x1c54(r3)
    subi r30, r6, 0x1
    slwi r31, r30, 2
    b lbl_fn_801DD12C_00000984
lbl_fn_801DD12C_00000890:
    add r3, r23, r31
    lwz r29, 0x1c58(r3)
    cmplw r24, r29
    beq lbl_fn_801DD12C_0000097C
    li r28, 0x0
lbl_fn_801DD12C_000008A4:
    cmpwi r28, 0x1
    bne lbl_fn_801DD12C_000008B8
    lwz r0, 0x0(r29)
    cmpwi r0, 0x3
    bne lbl_fn_801DD12C_00000970
lbl_fn_801DD12C_000008B8:
    lwz r4, 0x0(r29)
    mr r3, r23
    mr r5, r28
    bl fn_801CFA5C
    lwz r4, 0x0(r24)
    mr r27, r3
    mr r5, r25
    bl fn_80206D18
    cmpwi r3, 0x0
    beq lbl_fn_801DD12C_00000970
    lwz r4, 0x0(r29)
    mr r3, r23
    mr r5, r28
    li r6, 0x0
    bl fn_801DCDAC
    cmpwi r3, 0x0
    mr r26, r3
    beq lbl_fn_801DD12C_00000970
    stw r27, 0xb64(r23)
    mr r3, r27
    bl fn_80206BE4
    li r4, -0x1
    stw r3, 0xb68(r23)
    li r0, 0x1
    mr r3, r23
    stw r4, 0xb6c(r23)
    mr r7, r25
    addi r6, r23, 0xb64
    li r8, 0x0
    stw r4, 0xb70(r23)
    li r9, 0x0
    stw r0, 0xb74(r23)
    stw r4, 0xb78(r23)
    lwz r4, 0x0(r24)
    lwz r5, 0x4(r24)
    bl fn_801CF3C0
    lwz r4, 0x0(r29)
    mr r3, r23
    lwz r5, 0x4(r29)
    mr r6, r26
    mr r7, r28
    li r8, 0x0
    li r9, 0x1
    bl fn_801CF3C0
    addi r3, r23, 0xb64
    b lbl_fn_801DD12C_00000990
lbl_fn_801DD12C_00000970:
    addi r28, r28, 0x1
    cmpwi r28, 0x2
    blt lbl_fn_801DD12C_000008A4
lbl_fn_801DD12C_0000097C:
    subi r30, r30, 0x1
    subi r31, r31, 0x4
lbl_fn_801DD12C_00000984:
    cmpwi r30, 0x0
    bge lbl_fn_801DD12C_00000890
    li r3, 0x0
lbl_fn_801DD12C_00000990:
    lmw r23, 0xc(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_801DD26C(void)
{
    nofralloc
    stwu r1, -0xe0(r1)
    mflr r0
    stw r0, 0xe4(r1)
    stmw r16, 0xa0(r1)
    mr r21, r3
    mr r22, r4
    addi r3, r1, 0x80
    bl fn_801D08D4
    addi r3, r1, 0x8c
    bl fn_801D08D4
    addi r26, r21, 0xb34
    li r19, 0x0
    mr r18, r26
lbl_fn_801DD26C_000009D8:
    mr r3, r18
    bl fn_801DC08C
    addi r19, r19, 0x1
    addi r18, r18, 0xc
    cmpwi r19, 0x2
    blt lbl_fn_801DD26C_000009D8
    bl fn_801D80B4
    mr r4, r22
    bl fn_801D80A0
    mr r29, r3
    bl fn_801D80B4
    cmpwi r3, 0x0
    beq lbl_fn_801DD26C_00000EBC
    addi r27, r1, 0x80
    li r25, 0x0
    li r28, 0x0
    li r19, -0x1
    li r20, 0x1
    li r30, 0x0
lbl_fn_801DD26C_00000A24:
    mr r3, r21
    mr r4, r22
    mr r5, r25
    bl fn_801CFAA8
    mr r31, r3
    li r17, 0x0
    b lbl_fn_801DD26C_00000AD8
lbl_fn_801DD26C_00000A40:
    lwz r3, 0x48(r21)
    mr r4, r17
    bl fn_801DA2F8
    mr r24, r3
    bl fn_801D80B4
    lwz r4, 0x0(r24)
    bl fn_801D80A0
    mr r23, r3
    lwz r3, 0x0(r24)
    bl fn_80219544
    lwzx r4, r28, r23
    mr r18, r3
    mr r3, r25
    bl fn_8020ED84
    mr r16, r3
    addi r3, r1, 0x68
    bl fn_801D8C90
    stw r25, 0x6c(r1)
    mr r3, r16
    mr r4, r22
    lwzx r0, r28, r23
    stw r0, 0x70(r1)
    stw r18, 0x74(r1)
    stw r16, 0x68(r1)
    stw r30, 0x78(r1)
    bl fn_8020F0AC
    cmpwi r3, 0x0
    beq lbl_fn_801DD26C_00000AC8
    lwz r4, 0x0(r24)
    mr r3, r31
    bl fn_8020F0AC
    cmpwi r3, 0x0
    beq lbl_fn_801DD26C_00000AC8
    stw r20, 0x78(r1)
lbl_fn_801DD26C_00000AC8:
    mr r3, r27
    addi r4, r1, 0x68
    bl fn_801DC09C
    addi r17, r17, 0x1
lbl_fn_801DD26C_00000AD8:
    lwz r3, 0x48(r21)
    bl fn_801DA2F0
    cmpw r17, r3
    blt lbl_fn_801DD26C_00000A40
    li r24, 0x0
    b lbl_fn_801DD26C_00000C60
lbl_fn_801DD26C_00000AF0:
    bl fn_801D80B4
    cmpwi r3, 0x0
    beq lbl_fn_801DD26C_00000C5C
    mr r3, r24
    bl fn_802114E0
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_801DD26C_00000C5C
    lwz r3, 0x4(r3)
    bl fn_8020EF04
    cmpwi r3, 0x0
    beq lbl_fn_801DD26C_00000C5C
    lwz r3, 0x4(r31)
    bl fn_8020EFEC
    cmpwi r3, 0x0
    mr r23, r3
    beq lbl_fn_801DD26C_00000C5C
    lwz r0, 0x78(r3)
    cmpw r0, r25
    bne lbl_fn_801DD26C_00000C5C
    cmpwi r0, 0x1
    bne lbl_fn_801DD26C_00000B54
    bl fn_8020EF4C
    cmpwi r3, 0x0
    bne lbl_fn_801DD26C_00000C5C
lbl_fn_801DD26C_00000B54:
    mr r3, r23
    mr r4, r22
    bl fn_8020F0AC
    cmpwi r3, 0x0
    beq lbl_fn_801DD26C_00000C5C
    li r16, 0x0
    li r17, 0x0
    b lbl_fn_801DD26C_00000B9C
lbl_fn_801DD26C_00000B74:
    mr r3, r26
    mr r4, r17
    bl fn_801D8CB4
    lwz r3, 0x14(r3)
    lwz r0, 0x4(r31)
    cmpw r0, r3
    bne lbl_fn_801DD26C_00000B98
    li r16, 0x1
    b lbl_fn_801DD26C_00000BAC
lbl_fn_801DD26C_00000B98:
    addi r17, r17, 0x1
lbl_fn_801DD26C_00000B9C:
    mr r3, r26
    bl fn_801D8CAC
    cmplw r17, r3
    blt lbl_fn_801DD26C_00000B74
lbl_fn_801DD26C_00000BAC:
    cmpwi r16, 0x0
    bne lbl_fn_801DD26C_00000C5C
    li r16, 0x0
    b lbl_fn_801DD26C_00000BF4
lbl_fn_801DD26C_00000BBC:
    mr r3, r27
    mr r4, r16
    bl fn_801D8CB4
    lwz r3, 0x8(r3)
    lwz r0, 0x7c(r23)
    cmpw r0, r3
    bne lbl_fn_801DD26C_00000BF0
    mr r3, r27
    mr r4, r16
    bl fn_801D8CB4
    mr r4, r3
    mr r3, r26
    bl fn_801DC09C
lbl_fn_801DD26C_00000BF0:
    addi r16, r16, 0x1
lbl_fn_801DD26C_00000BF4:
    mr r3, r27
    bl fn_801D8CAC
    cmplw r16, r3
    blt lbl_fn_801DD26C_00000BBC
    bl fn_801D80B4
    lwz r4, 0x4(r31)
    bl fn_804444E8
    mr r18, r3
    li r16, 0x0
    b lbl_fn_801DD26C_00000C54
lbl_fn_801DD26C_00000C1C:
    addi r3, r1, 0x50
    bl fn_801D8C90
    stw r25, 0x54(r1)
    mr r3, r26
    addi r4, r1, 0x50
    lwz r0, 0x7c(r23)
    stw r0, 0x58(r1)
    stw r19, 0x5c(r1)
    stw r23, 0x50(r1)
    stw r20, 0x60(r1)
    lwz r0, 0x4(r31)
    stw r0, 0x64(r1)
    bl fn_801DC09C
    addi r16, r16, 0x1
lbl_fn_801DD26C_00000C54:
    cmpw r16, r18
    blt lbl_fn_801DD26C_00000C1C
lbl_fn_801DD26C_00000C5C:
    addi r24, r24, 0x1
lbl_fn_801DD26C_00000C60:
    bl fn_802114D8
    cmpw r24, r3
    blt lbl_fn_801DD26C_00000AF0
    addi r25, r25, 0x1
    addi r27, r27, 0xc
    cmpwi r25, 0x2
    addi r26, r26, 0xc
    addi r28, r28, 0x8
    blt lbl_fn_801DD26C_00000A24
    lwz r4, 0x0(r29)
    li r3, 0x0
    bl fn_8020ED84
    bl fn_8020EF4C
    cmpwi r3, 0x0
    beq lbl_fn_801DD26C_00000D54
    li r16, 0x0
    li r17, 0x0
    b lbl_fn_801DD26C_00000CCC
lbl_fn_801DD26C_00000CA8:
    mr r4, r17
    addi r3, r21, 0xb40
    bl fn_801D8CB4
    lwz r0, 0xc(r3)
    cmpwi r0, 0x0
    bge lbl_fn_801DD26C_00000CC8
    li r16, 0x1
    b lbl_fn_801DD26C_00000CDC
lbl_fn_801DD26C_00000CC8:
    addi r17, r17, 0x1
lbl_fn_801DD26C_00000CCC:
    addi r3, r21, 0xb40
    bl fn_801D8CAC
    cmplw r17, r3
    blt lbl_fn_801DD26C_00000CA8
lbl_fn_801DD26C_00000CDC:
    cmpwi r16, 0x0
    bne lbl_fn_801DD26C_00000D54
    li r16, 0x0
    li r23, 0x0
    b lbl_fn_801DD26C_00000D44
lbl_fn_801DD26C_00000CF0:
    mr r4, r16
    addi r3, r21, 0xb34
    bl fn_801D8CB4
    lwz r0, 0xc(r3)
    cmpwi r0, 0x0
    bge lbl_fn_801DD26C_00000D40
    mr r4, r16
    addi r3, r21, 0xb34
    bl fn_801D8CB4
    mr r4, r3
    li r3, 0x0
    lwz r4, 0x8(r4)
    bl fn_8020ED84
    bl fn_8020EF4C
    cmpwi r3, 0x0
    bne lbl_fn_801DD26C_00000D40
    mr r4, r16
    addi r3, r21, 0xb34
    bl fn_801D8CB4
    stw r23, 0x10(r3)
lbl_fn_801DD26C_00000D40:
    addi r16, r16, 0x1
lbl_fn_801DD26C_00000D44:
    addi r3, r21, 0xb34
    bl fn_801D8CAC
    cmplw r16, r3
    blt lbl_fn_801DD26C_00000CF0
lbl_fn_801DD26C_00000D54:
    lwz r0, 0xb7c(r21)
    cmpwi r0, 0x1
    beq lbl_fn_801DD26C_00000D6C
    cmpwi r0, 0x0
    beq lbl_fn_801DD26C_00000DCC
    b lbl_fn_801DD26C_00000EBC
lbl_fn_801DD26C_00000D6C:
    li r22, 0x0
    stb r22, 0x1c(r1)
    addi r3, r21, 0xb34
    bl fn_801DC418
    stw r3, 0x48(r1)
    addi r3, r21, 0xb34
    bl fn_801DC410
    stw r3, 0x4c(r1)
    addi r3, r1, 0x4c
    addi r4, r1, 0x48
    addi r5, r1, 0x1c
    bl fn_801DF3D4
    stb r22, 0x18(r1)
    addi r3, r21, 0xb40
    bl fn_801DC418
    stw r3, 0x40(r1)
    addi r3, r21, 0xb40
    bl fn_801DC410
    stw r3, 0x44(r1)
    addi r3, r1, 0x44
    addi r4, r1, 0x40
    addi r5, r1, 0x18
    bl fn_801DF3D4
    b lbl_fn_801DD26C_00000EBC
lbl_fn_801DD26C_00000DCC:
    cmpwi r22, 0x0
    beq lbl_fn_801DD26C_00000DEC
    cmpwi r22, 0x2
    beq lbl_fn_801DD26C_00000DEC
    cmpwi r22, 0x3
    beq lbl_fn_801DD26C_00000DEC
    cmpwi r22, 0x6
    bne lbl_fn_801DD26C_00000E4C
lbl_fn_801DD26C_00000DEC:
    li r22, 0x0
    stb r22, 0x14(r1)
    addi r3, r21, 0xb34
    bl fn_801DC418
    stw r3, 0x38(r1)
    addi r3, r21, 0xb34
    bl fn_801DC410
    stw r3, 0x3c(r1)
    addi r3, r1, 0x3c
    addi r4, r1, 0x38
    addi r5, r1, 0x14
    bl fn_801DA308
    stb r22, 0x10(r1)
    addi r3, r21, 0xb40
    bl fn_801DC418
    stw r3, 0x30(r1)
    addi r3, r21, 0xb40
    bl fn_801DC410
    stw r3, 0x34(r1)
    addi r3, r1, 0x34
    addi r4, r1, 0x30
    addi r5, r1, 0x10
    bl fn_801DA308
    b lbl_fn_801DD26C_00000EBC
lbl_fn_801DD26C_00000E4C:
    cmpwi r22, 0x1
    beq lbl_fn_801DD26C_00000E60
    subi r0, r22, 0x4
    cmplwi r0, 0x1
    bgt lbl_fn_801DD26C_00000EBC
lbl_fn_801DD26C_00000E60:
    li r22, 0x0
    stb r22, 0xc(r1)
    addi r3, r21, 0xb34
    bl fn_801DC418
    stw r3, 0x28(r1)
    addi r3, r21, 0xb34
    bl fn_801DC410
    stw r3, 0x2c(r1)
    addi r3, r1, 0x2c
    addi r4, r1, 0x28
    addi r5, r1, 0xc
    bl fn_801DD7B0
    stb r22, 0x8(r1)
    addi r3, r21, 0xb40
    bl fn_801DC418
    stw r3, 0x20(r1)
    addi r3, r21, 0xb40
    bl fn_801DC410
    stw r3, 0x24(r1)
    addi r3, r1, 0x24
    addi r4, r1, 0x20
    addi r5, r1, 0x8
    bl fn_801DD7B0
lbl_fn_801DD26C_00000EBC:
    addi r3, r1, 0x8c
    li r4, -0x1
    bl fn_801D08E8
    addi r3, r1, 0x80
    li r4, -0x1
    bl fn_801D08E8
    lmw r16, 0xa0(r1)
    lwz r0, 0xe4(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}

asm void fn_801DD7B0(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x50
    stfd f31, 0x50(r1)
    psq_st f31, 0x58(r1), 0, 0
    bl _savegpr_22
    lis r31, 0x2aab
    lis r6, 0x6666
    lfs f31, lbl_80882AF0
    mr r24, r3
    mr r25, r4
    mr r26, r5
    addi r28, r6, 0x6667
    subi r27, r31, 0x5555
lbl_fn_801DD7B0_00000F24:
    lwz r30, 0x0(r24)
    lwz r29, 0x0(r25)
    subf r0, r30, r29
    mulhw r0, r27, r0
    srawi r0, r0, 2
    srwi r3, r0, 31
    add r7, r0, r3
    cmpwi r7, 0x1
    ble lbl_fn_801DD7B0_00001AA4
    cmpwi r7, 0x14
    bgt lbl_fn_801DD7B0_000010C8
    cmplw r30, r29
    beq lbl_fn_801DD7B0_00001AA4
    subi r28, r29, 0x18
    cmplw r30, r28
    beq lbl_fn_801DD7B0_00001AA4
    lfs f31, lbl_80882AF0
    b lbl_fn_801DD7B0_000010BC
lbl_fn_801DD7B0_00000F6C:
    cmplw r30, r29
    mr r25, r30
    beq lbl_fn_801DD7B0_00001050
    addi r24, r30, 0x18
    b lbl_fn_801DD7B0_00001048
lbl_fn_801DD7B0_00000F80:
    lwz r3, 0x8(r24)
    lwz r0, 0x8(r25)
    cmpw r3, r0
    bne lbl_fn_801DD7B0_00000FD8
    lwz r0, 0xc(r24)
    cmpwi r0, 0x0
    blt lbl_fn_801DD7B0_00000FC0
    lwz r4, 0xc(r25)
    cmpwi r4, 0x0
    blt lbl_fn_801DD7B0_00000FC0
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801DD7B0_00001038
lbl_fn_801DD7B0_00000FC0:
    cmpwi r0, 0x0
    blt lbl_fn_801DD7B0_00000FD0
    li r0, 0x1
    b lbl_fn_801DD7B0_00001038
lbl_fn_801DD7B0_00000FD0:
    li r0, 0x0
    b lbl_fn_801DD7B0_00001038
lbl_fn_801DD7B0_00000FD8:
    lwz r4, 0x0(r25)
    lwz r3, 0x0(r24)
    lfs f0, 0xc(r4)
    lfs f1, 0xc(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_801DD7B0_0000102C
    bl fn_8020EF80
    bl fn_80211480
    mr r22, r3
    lwz r3, 0x0(r25)
    bl fn_8020EF80
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r22)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_801DD7B0_00001038
lbl_fn_801DD7B0_0000102C:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_801DD7B0_00001038:
    cmpwi r0, 0x0
    beq lbl_fn_801DD7B0_00001044
    mr r25, r24
lbl_fn_801DD7B0_00001044:
    addi r24, r24, 0x18
lbl_fn_801DD7B0_00001048:
    cmplw r24, r29
    bne lbl_fn_801DD7B0_00000F80
lbl_fn_801DD7B0_00001050:
    cmplw r25, r30
    beq lbl_fn_801DD7B0_000010B8
    lwz r3, 0x0(r25)
    lwz r4, 0x4(r25)
    lwz r5, 0x8(r25)
    lwz r6, 0xc(r25)
    lwz r7, 0x10(r25)
    lwz r8, 0x14(r25)
    lwz r0, 0x0(r30)
    stw r0, 0x0(r25)
    lwz r0, 0x4(r30)
    stw r0, 0x4(r25)
    lwz r0, 0x8(r30)
    stw r0, 0x8(r25)
    lwz r0, 0xc(r30)
    stw r0, 0xc(r25)
    lwz r0, 0x10(r30)
    stw r0, 0x10(r25)
    lwz r0, 0x14(r30)
    stw r0, 0x14(r25)
    stw r3, 0x0(r30)
    stw r4, 0x4(r30)
    stw r5, 0x8(r30)
    stw r6, 0xc(r30)
    stw r7, 0x10(r30)
    stw r8, 0x14(r30)
lbl_fn_801DD7B0_000010B8:
    addi r30, r30, 0x18
lbl_fn_801DD7B0_000010BC:
    cmplw r30, r28
    bne lbl_fn_801DD7B0_00000F6C
    b lbl_fn_801DD7B0_00001AA4
lbl_fn_801DD7B0_000010C8:
    lwz r4, lbl_8087DA78
    srawi r0, r7, 2
    addze r5, r0
    mulhw r0, r28, r4
    addi r8, r4, 0x1
    cmpwi r8, 0x5
    srawi r0, r0, 1
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r0, r0, 0x5
    subf r0, r0, r4
    add r0, r5, r0
    mulli r0, r0, 0x18
    add r0, r30, r0
    blt lbl_fn_801DD7B0_00001108
    li r8, -0x4
lbl_fn_801DD7B0_00001108:
    mulhw r4, r28, r8
    addi r3, r8, 0x1
    slwi r5, r7, 2
    stw r3, lbl_8087DA78
    cmpwi r3, 0x5
    lwz r6, 0x0(r24)
    subf r3, r7, r5
    srawi r3, r3, 2
    addze r5, r3
    srawi r3, r4, 1
    srwi r4, r3, 31
    add r3, r3, r4
    mulli r3, r3, 0x5
    subf r3, r3, r8
    add r3, r5, r3
    mulli r3, r3, 0x18
    add r7, r6, r3
    blt lbl_fn_801DD7B0_00001158
    li r8, -0x4
    stw r8, lbl_8087DA78
lbl_fn_801DD7B0_00001158:
    lwz r5, 0x0(r25)
    mr r6, r26
    addi r3, r1, 0x20
    addi r4, r1, 0x1c
    subi r29, r5, 0x18
    stw r29, 0x18(r1)
    addi r5, r1, 0x18
    stw r7, 0x1c(r1)
    stw r0, 0x20(r1)
    bl fn_801DEF68
    lwz r23, 0x0(r24)
    mr r30, r29
    b lbl_fn_801DD7B0_00001190
lbl_fn_801DD7B0_0000118C:
    addi r23, r23, 0x18
lbl_fn_801DD7B0_00001190:
    lwz r3, 0x8(r23)
    lwz r0, 0x8(r29)
    cmpw r3, r0
    bne lbl_fn_801DD7B0_000011E8
    lwz r0, 0xc(r23)
    cmpwi r0, 0x0
    blt lbl_fn_801DD7B0_000011D0
    lwz r4, 0xc(r29)
    cmpwi r4, 0x0
    blt lbl_fn_801DD7B0_000011D0
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801DD7B0_00001248
lbl_fn_801DD7B0_000011D0:
    cmpwi r0, 0x0
    blt lbl_fn_801DD7B0_000011E0
    li r0, 0x1
    b lbl_fn_801DD7B0_00001248
lbl_fn_801DD7B0_000011E0:
    li r0, 0x0
    b lbl_fn_801DD7B0_00001248
lbl_fn_801DD7B0_000011E8:
    lwz r4, 0x0(r29)
    lwz r3, 0x0(r23)
    lfs f0, 0xc(r4)
    lfs f1, 0xc(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_801DD7B0_0000123C
    bl fn_8020EF80
    bl fn_80211480
    mr r22, r3
    lwz r3, 0x0(r29)
    bl fn_8020EF80
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r22)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_801DD7B0_00001248
lbl_fn_801DD7B0_0000123C:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_801DD7B0_00001248:
    cmpwi r0, 0x0
    bne lbl_fn_801DD7B0_0000118C
lbl_fn_801DD7B0_00001250:
    subi r30, r30, 0x18
    cmplw r23, r30
    beq lbl_fn_801DD7B0_0000131C
    lwz r3, 0x8(r30)
    lwz r0, 0x8(r29)
    cmpw r3, r0
    bne lbl_fn_801DD7B0_000012B4
    lwz r0, 0xc(r30)
    cmpwi r0, 0x0
    blt lbl_fn_801DD7B0_0000129C
    lwz r4, 0xc(r29)
    cmpwi r4, 0x0
    blt lbl_fn_801DD7B0_0000129C
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801DD7B0_00001314
lbl_fn_801DD7B0_0000129C:
    cmpwi r0, 0x0
    blt lbl_fn_801DD7B0_000012AC
    li r0, 0x1
    b lbl_fn_801DD7B0_00001314
lbl_fn_801DD7B0_000012AC:
    li r0, 0x0
    b lbl_fn_801DD7B0_00001314
lbl_fn_801DD7B0_000012B4:
    lwz r4, 0x0(r29)
    lwz r3, 0x0(r30)
    lfs f0, 0xc(r4)
    lfs f1, 0xc(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_801DD7B0_00001308
    bl fn_8020EF80
    bl fn_80211480
    mr r22, r3
    lwz r3, 0x0(r29)
    bl fn_8020EF80
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r22)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_801DD7B0_00001314
lbl_fn_801DD7B0_00001308:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_801DD7B0_00001314:
    cmpwi r0, 0x0
    beq lbl_fn_801DD7B0_00001250
lbl_fn_801DD7B0_0000131C:
    cmplw r23, r30
    bge lbl_fn_801DD7B0_00001590
    lwz r3, 0x0(r23)
    lwz r4, 0x4(r23)
    lwz r5, 0x8(r23)
    lwz r6, 0xc(r23)
    lwz r7, 0x10(r23)
    lwz r8, 0x14(r23)
    lwz r0, 0x0(r30)
    stw r0, 0x0(r23)
    lwz r0, 0x4(r30)
    stw r0, 0x4(r23)
    lwz r0, 0x8(r30)
    stw r0, 0x8(r23)
    lwz r0, 0xc(r30)
    stw r0, 0xc(r23)
    lwz r0, 0x10(r30)
    stw r0, 0x10(r23)
    lwz r0, 0x14(r30)
    stw r0, 0x14(r23)
    addi r23, r23, 0x18
    stw r3, 0x0(r30)
    stw r4, 0x4(r30)
    stw r5, 0x8(r30)
    stw r6, 0xc(r30)
    stw r7, 0x10(r30)
    stw r8, 0x14(r30)
    b lbl_fn_801DD7B0_00001390
lbl_fn_801DD7B0_0000138C:
    addi r23, r23, 0x18
lbl_fn_801DD7B0_00001390:
    lwz r3, 0x8(r23)
    lwz r0, 0x8(r29)
    cmpw r3, r0
    bne lbl_fn_801DD7B0_000013E8
    lwz r0, 0xc(r23)
    cmpwi r0, 0x0
    blt lbl_fn_801DD7B0_000013D0
    lwz r4, 0xc(r29)
    cmpwi r4, 0x0
    blt lbl_fn_801DD7B0_000013D0
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801DD7B0_00001448
lbl_fn_801DD7B0_000013D0:
    cmpwi r0, 0x0
    blt lbl_fn_801DD7B0_000013E0
    li r0, 0x1
    b lbl_fn_801DD7B0_00001448
lbl_fn_801DD7B0_000013E0:
    li r0, 0x0
    b lbl_fn_801DD7B0_00001448
lbl_fn_801DD7B0_000013E8:
    lwz r4, 0x0(r29)
    lwz r3, 0x0(r23)
    lfs f0, 0xc(r4)
    lfs f1, 0xc(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_801DD7B0_0000143C
    bl fn_8020EF80
    bl fn_80211480
    mr r22, r3
    lwz r3, 0x0(r29)
    bl fn_8020EF80
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r22)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_801DD7B0_00001448
lbl_fn_801DD7B0_0000143C:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_801DD7B0_00001448:
    cmpwi r0, 0x0
    bne lbl_fn_801DD7B0_0000138C
lbl_fn_801DD7B0_00001450:
    subi r30, r30, 0x18
    lwz r0, 0x8(r29)
    lwz r3, 0x8(r30)
    cmpw r3, r0
    bne lbl_fn_801DD7B0_000014AC
    lwz r0, 0xc(r30)
    cmpwi r0, 0x0
    blt lbl_fn_801DD7B0_00001494
    lwz r4, 0xc(r29)
    cmpwi r4, 0x0
    blt lbl_fn_801DD7B0_00001494
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801DD7B0_0000150C
lbl_fn_801DD7B0_00001494:
    cmpwi r0, 0x0
    blt lbl_fn_801DD7B0_000014A4
    li r0, 0x1
    b lbl_fn_801DD7B0_0000150C
lbl_fn_801DD7B0_000014A4:
    li r0, 0x0
    b lbl_fn_801DD7B0_0000150C
lbl_fn_801DD7B0_000014AC:
    lwz r4, 0x0(r29)
    lwz r3, 0x0(r30)
    lfs f0, 0xc(r4)
    lfs f1, 0xc(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_801DD7B0_00001500
    bl fn_8020EF80
    bl fn_80211480
    mr r22, r3
    lwz r3, 0x0(r29)
    bl fn_8020EF80
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r22)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_801DD7B0_0000150C
lbl_fn_801DD7B0_00001500:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_801DD7B0_0000150C:
    cmpwi r0, 0x0
    beq lbl_fn_801DD7B0_00001450
    xor r0, r30, r23
    cntlzw r0, r0
    slw r0, r30, r0
    srwi. r0, r0, 31
    beq lbl_fn_801DD7B0_00001590
    lwz r3, 0x0(r23)
    lwz r4, 0x4(r23)
    lwz r5, 0x8(r23)
    lwz r6, 0xc(r23)
    lwz r7, 0x10(r23)
    lwz r8, 0x14(r23)
    lwz r0, 0x0(r30)
    stw r0, 0x0(r23)
    lwz r0, 0x4(r30)
    stw r0, 0x4(r23)
    lwz r0, 0x8(r30)
    stw r0, 0x8(r23)
    lwz r0, 0xc(r30)
    stw r0, 0xc(r23)
    lwz r0, 0x10(r30)
    stw r0, 0x10(r23)
    lwz r0, 0x14(r30)
    stw r0, 0x14(r23)
    addi r23, r23, 0x18
    stw r3, 0x0(r30)
    stw r4, 0x4(r30)
    stw r5, 0x8(r30)
    stw r6, 0xc(r30)
    stw r7, 0x10(r30)
    stw r8, 0x14(r30)
    b lbl_fn_801DD7B0_00001390
lbl_fn_801DD7B0_00001590:
    lwz r6, 0x0(r24)
    cmplw r23, r6
    bne lbl_fn_801DD7B0_00001A2C
    lwz r3, 0x0(r23)
    lwz r4, 0x4(r23)
    lwz r5, 0x8(r23)
    lwz r6, 0xc(r23)
    lwz r7, 0x10(r23)
    lwz r8, 0x14(r23)
    lwz r0, 0x0(r29)
    stw r0, 0x0(r23)
    lwz r0, 0x4(r29)
    stw r0, 0x4(r23)
    lwz r0, 0x8(r29)
    stw r0, 0x8(r23)
    lwz r0, 0xc(r29)
    stw r0, 0xc(r23)
    lwz r0, 0x10(r29)
    stw r0, 0x10(r23)
    lwz r0, 0x14(r29)
    stw r0, 0x14(r23)
    addi r23, r23, 0x18
    stw r3, 0x0(r29)
    stw r4, 0x4(r29)
    stw r5, 0x8(r29)
    stw r6, 0xc(r29)
    stw r7, 0x10(r29)
    stw r8, 0x14(r29)
    lwz r3, 0x0(r25)
    lwz r5, 0x0(r24)
    subi r30, r3, 0x18
    lwz r3, 0x8(r5)
    lwz r0, 0x8(r30)
    cmpw r3, r0
    bne lbl_fn_801DD7B0_00001664
    lwz r0, 0xc(r5)
    cmpwi r0, 0x0
    blt lbl_fn_801DD7B0_0000164C
    lwz r4, 0xc(r30)
    cmpwi r4, 0x0
    blt lbl_fn_801DD7B0_0000164C
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801DD7B0_000016C4
lbl_fn_801DD7B0_0000164C:
    cmpwi r0, 0x0
    blt lbl_fn_801DD7B0_0000165C
    li r0, 0x1
    b lbl_fn_801DD7B0_000016C4
lbl_fn_801DD7B0_0000165C:
    li r0, 0x0
    b lbl_fn_801DD7B0_000016C4
lbl_fn_801DD7B0_00001664:
    lwz r4, 0x0(r30)
    lwz r3, 0x0(r5)
    lfs f0, 0xc(r4)
    lfs f1, 0xc(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_801DD7B0_000016B8
    bl fn_8020EF80
    bl fn_80211480
    mr r29, r3
    lwz r3, 0x0(r30)
    bl fn_8020EF80
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r29)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_801DD7B0_000016C4
lbl_fn_801DD7B0_000016B8:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_801DD7B0_000016C4:
    cmpwi r0, 0x0
    bne lbl_fn_801DD7B0_0000180C
    b lbl_fn_801DD7B0_000016D4
lbl_fn_801DD7B0_000016D0:
    addi r23, r23, 0x18
lbl_fn_801DD7B0_000016D4:
    lwz r0, 0x0(r25)
    cmplw r23, r0
    beq lbl_fn_801DD7B0_000017A4
    lwz r5, 0x0(r24)
    lwz r0, 0x8(r23)
    lwz r3, 0x8(r5)
    cmpw r3, r0
    bne lbl_fn_801DD7B0_0000173C
    lwz r0, 0xc(r5)
    cmpwi r0, 0x0
    blt lbl_fn_801DD7B0_00001724
    lwz r4, 0xc(r23)
    cmpwi r4, 0x0
    blt lbl_fn_801DD7B0_00001724
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801DD7B0_0000179C
lbl_fn_801DD7B0_00001724:
    cmpwi r0, 0x0
    blt lbl_fn_801DD7B0_00001734
    li r0, 0x1
    b lbl_fn_801DD7B0_0000179C
lbl_fn_801DD7B0_00001734:
    li r0, 0x0
    b lbl_fn_801DD7B0_0000179C
lbl_fn_801DD7B0_0000173C:
    lwz r4, 0x0(r23)
    lwz r3, 0x0(r5)
    lfs f0, 0xc(r4)
    lfs f1, 0xc(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_801DD7B0_00001790
    bl fn_8020EF80
    bl fn_80211480
    mr r29, r3
    lwz r3, 0x0(r23)
    bl fn_8020EF80
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r29)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_801DD7B0_0000179C
lbl_fn_801DD7B0_00001790:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_801DD7B0_0000179C:
    cmpwi r0, 0x0
    beq lbl_fn_801DD7B0_000016D0
lbl_fn_801DD7B0_000017A4:
    cmplw r23, r30
    bge lbl_fn_801DD7B0_0000180C
    lwz r3, 0x0(r23)
    lwz r4, 0x4(r23)
    lwz r5, 0x8(r23)
    lwz r6, 0xc(r23)
    lwz r7, 0x10(r23)
    lwz r8, 0x14(r23)
    lwz r0, 0x0(r30)
    stw r0, 0x0(r23)
    lwz r0, 0x4(r30)
    stw r0, 0x4(r23)
    lwz r0, 0x8(r30)
    stw r0, 0x8(r23)
    lwz r0, 0xc(r30)
    stw r0, 0xc(r23)
    lwz r0, 0x10(r30)
    stw r0, 0x10(r23)
    lwz r0, 0x14(r30)
    stw r0, 0x14(r23)
    stw r3, 0x0(r30)
    stw r4, 0x4(r30)
    stw r5, 0x8(r30)
    stw r6, 0xc(r30)
    stw r7, 0x10(r30)
    stw r8, 0x14(r30)
lbl_fn_801DD7B0_0000180C:
    cmplw r23, r30
    bge lbl_fn_801DD7B0_00001A24
    b lbl_fn_801DD7B0_0000181C
lbl_fn_801DD7B0_00001818:
    addi r23, r23, 0x18
lbl_fn_801DD7B0_0000181C:
    lwz r5, 0x0(r24)
    lwz r0, 0x8(r23)
    lwz r3, 0x8(r5)
    cmpw r3, r0
    bne lbl_fn_801DD7B0_00001878
    lwz r0, 0xc(r5)
    cmpwi r0, 0x0
    blt lbl_fn_801DD7B0_00001860
    lwz r4, 0xc(r23)
    cmpwi r4, 0x0
    blt lbl_fn_801DD7B0_00001860
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801DD7B0_000018D8
lbl_fn_801DD7B0_00001860:
    cmpwi r0, 0x0
    blt lbl_fn_801DD7B0_00001870
    li r0, 0x1
    b lbl_fn_801DD7B0_000018D8
lbl_fn_801DD7B0_00001870:
    li r0, 0x0
    b lbl_fn_801DD7B0_000018D8
lbl_fn_801DD7B0_00001878:
    lwz r4, 0x0(r23)
    lwz r3, 0x0(r5)
    lfs f0, 0xc(r4)
    lfs f1, 0xc(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_801DD7B0_000018CC
    bl fn_8020EF80
    bl fn_80211480
    mr r29, r3
    lwz r3, 0x0(r23)
    bl fn_8020EF80
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r29)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_801DD7B0_000018D8
lbl_fn_801DD7B0_000018CC:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_801DD7B0_000018D8:
    cmpwi r0, 0x0
    beq lbl_fn_801DD7B0_00001818
lbl_fn_801DD7B0_000018E0:
    lwz r5, 0x0(r24)
    subi r30, r30, 0x18
    lwz r0, 0x8(r30)
    lwz r3, 0x8(r5)
    cmpw r3, r0
    bne lbl_fn_801DD7B0_00001940
    lwz r0, 0xc(r5)
    cmpwi r0, 0x0
    blt lbl_fn_801DD7B0_00001928
    lwz r4, 0xc(r30)
    cmpwi r4, 0x0
    blt lbl_fn_801DD7B0_00001928
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801DD7B0_000019A0
lbl_fn_801DD7B0_00001928:
    cmpwi r0, 0x0
    blt lbl_fn_801DD7B0_00001938
    li r0, 0x1
    b lbl_fn_801DD7B0_000019A0
lbl_fn_801DD7B0_00001938:
    li r0, 0x0
    b lbl_fn_801DD7B0_000019A0
lbl_fn_801DD7B0_00001940:
    lwz r4, 0x0(r30)
    lwz r3, 0x0(r5)
    lfs f0, 0xc(r4)
    lfs f1, 0xc(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_801DD7B0_00001994
    bl fn_8020EF80
    bl fn_80211480
    mr r29, r3
    lwz r3, 0x0(r30)
    bl fn_8020EF80
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r29)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_801DD7B0_000019A0
lbl_fn_801DD7B0_00001994:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_801DD7B0_000019A0:
    cmpwi r0, 0x0
    bne lbl_fn_801DD7B0_000018E0
    xor r0, r30, r23
    cntlzw r0, r0
    slw r0, r30, r0
    srwi. r0, r0, 31
    beq lbl_fn_801DD7B0_00001A24
    lwz r3, 0x0(r23)
    lwz r4, 0x4(r23)
    lwz r5, 0x8(r23)
    lwz r6, 0xc(r23)
    lwz r7, 0x10(r23)
    lwz r8, 0x14(r23)
    lwz r0, 0x0(r30)
    stw r0, 0x0(r23)
    lwz r0, 0x4(r30)
    stw r0, 0x4(r23)
    lwz r0, 0x8(r30)
    stw r0, 0x8(r23)
    lwz r0, 0xc(r30)
    stw r0, 0xc(r23)
    lwz r0, 0x10(r30)
    stw r0, 0x10(r23)
    lwz r0, 0x14(r30)
    stw r0, 0x14(r23)
    addi r23, r23, 0x18
    stw r3, 0x0(r30)
    stw r4, 0x4(r30)
    stw r5, 0x8(r30)
    stw r6, 0xc(r30)
    stw r7, 0x10(r30)
    stw r8, 0x14(r30)
    b lbl_fn_801DD7B0_0000181C
lbl_fn_801DD7B0_00001A24:
    stw r23, 0x0(r24)
    b lbl_fn_801DD7B0_00000F24
lbl_fn_801DD7B0_00001A2C:
    lwz r3, 0x0(r25)
    subf r0, r6, r23
    subi r5, r31, 0x5555
    mulhw r4, r5, r0
    subf r0, r23, r3
    mulhw r0, r5, r0
    srawi r4, r4, 2
    srwi r5, r4, 31
    srawi r0, r0, 2
    add r5, r4, r5
    srwi r4, r0, 31
    add r0, r0, r4
    cmpw r5, r0
    bge lbl_fn_801DD7B0_00001A84
    stw r23, 0x10(r1)
    mr r5, r26
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    stw r6, 0x14(r1)
    bl fn_801DE38C
    stw r23, 0x0(r24)
    b lbl_fn_801DD7B0_00000F24
lbl_fn_801DD7B0_00001A84:
    stw r3, 0x8(r1)
    mr r5, r26
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    stw r23, 0xc(r1)
    bl fn_801DE38C
    stw r23, 0x0(r25)
    b lbl_fn_801DD7B0_00000F24
lbl_fn_801DD7B0_00001AA4:
    addi r11, r1, 0x50
    psq_l f31, 0x58(r1), 0, 0
    lfd f31, 0x50(r1)
    bl _restgpr_22
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}
