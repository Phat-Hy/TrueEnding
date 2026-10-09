#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_14(void);
extern void _restgpr_25(void);
extern void _savegpr_14(void);
extern void _savegpr_25(void);
extern void fn_80018394(void);
extern void fn_800185B4(void);
extern void fn_800EEFDC(void);
extern void fn_801081D8(void);
extern void fn_801083D8(void);
extern void fn_801088B8(void);
extern void fn_8010895C(void);
extern void fn_8011D1FC(void);
extern void fn_8011D21C(void);
extern void fn_8011F970(void);
extern void fn_8012F188(void);
extern void fn_80164EF4(void);
extern void fn_80164F54(void);
extern void fn_80165284(void);
extern void fn_8016E970(void);
extern void fn_8016F3D0(void);
extern void fn_8016F4D8(void);
extern void fn_8016F5EC(void);
extern void fn_801789D8(void);
extern void fn_8017A5D8(void);
extern void fn_80210220(void);
extern void fn_80219558(void);
extern void fn_80370174(void);
extern void fn_80373148(void);
extern void fn_803C1884(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_80680CF8(void);

/* External data declarations */
extern u8 lbl_80735EB0[];

/* Small data declarations */
extern u32 lbl_8087EE68;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F430;
extern u32 lbl_8087F610;
extern u32 lbl_8087F8A0;
extern u32 lbl_80881478;
extern u32 lbl_8088148C;
extern u32 lbl_80881490;
extern u32 lbl_80881494;
extern u32 lbl_808814A0;
extern u32 lbl_808814C4;
extern u32 lbl_808814C8;
extern u32 lbl_80881500;
extern u32 lbl_80881508;
extern u32 lbl_8088152C;
extern u32 lbl_80881550;
extern u32 lbl_80881598;
extern u32 lbl_808815A0;
extern u32 lbl_808815A4;
extern u32 lbl_808815A8;
extern u32 lbl_808815AC;
extern u32 lbl_808815B0;
extern u32 lbl_808815B4;
extern u32 lbl_808815B8;
extern u32 lbl_808815BC;
extern u32 lbl_808815C0;
extern u32 lbl_808815C4;
extern u32 lbl_808815C8;

/* Function declarations */
void fn_80102EAC(void);
void fn_801031D0(void);
void fn_8010337C(void);
void fn_80103484(void);
void fn_80103600(void);
void fn_80103B58(void);
void fn_80103E60(void);
void fn_80103F60(void);
void fn_80103FD4(void);

asm void fn_80102EAC(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_25
    lwz r7, lbl_8087F0A8
    mr r25, r3
    mr r26, r4
    mr r28, r5
    lwz r3, 0x3cc(r7)
    mr r27, r6
    bl fn_80210220
    cmpwi r28, 0x0
    beq lbl_fn_80102EAC_0000007C
    lwz r0, 0x48(r28)
    cmpwi r0, 0x0
    bne lbl_fn_80102EAC_0000007C
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    bne lbl_fn_80102EAC_0000007C
    xoris r3, r27, 0x8000
    lis r0, 0x4330
    lis r4, lbl_80735EB0@ha
    stw r3, 0xc(r1)
    lfd f1, lbl_80735EB0@l(r4)
    stw r0, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x10(r1)
    lwz r27, 0x14(r1)
lbl_fn_80102EAC_0000007C:
    cmpwi r26, 0x0
    bne lbl_fn_80102EAC_0000008C
    li r4, -0x1
    b lbl_fn_80102EAC_000000CC
lbl_fn_80102EAC_0000008C:
    addis r3, r25, 0x3
    mr r5, r25
    lwz r0, 0x63b0(r3)
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80102EAC_000000C8
lbl_fn_80102EAC_000000A8:
    addis r3, r5, 0x1
    lwz r0, -0x3410(r3)
    cmplw r0, r26
    bne lbl_fn_80102EAC_000000BC
    b lbl_fn_80102EAC_000000CC
lbl_fn_80102EAC_000000BC:
    addi r5, r5, 0x934
    addi r4, r4, 0x1
    bdnz lbl_fn_80102EAC_000000A8
lbl_fn_80102EAC_000000C8:
    li r4, -0x1
lbl_fn_80102EAC_000000CC:
    cmpwi r28, 0x0
    bne lbl_fn_80102EAC_000000DC
    li r31, -0x1
    b lbl_fn_80102EAC_0000011C
lbl_fn_80102EAC_000000DC:
    addis r3, r25, 0x3
    mr r5, r25
    lwz r0, 0x63b0(r3)
    li r31, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80102EAC_00000118
lbl_fn_80102EAC_000000F8:
    addis r3, r5, 0x1
    lwz r0, -0x3410(r3)
    cmplw r0, r28
    bne lbl_fn_80102EAC_0000010C
    b lbl_fn_80102EAC_0000011C
lbl_fn_80102EAC_0000010C:
    addi r5, r5, 0x934
    addi r31, r31, 0x1
    bdnz lbl_fn_80102EAC_000000F8
lbl_fn_80102EAC_00000118:
    li r31, -0x1
lbl_fn_80102EAC_0000011C:
    cmpwi r31, 0x0
    blt lbl_fn_80102EAC_0000030C
    cmpwi r4, 0x0
    blt lbl_fn_80102EAC_0000030C
    mulli r0, r4, 0x934
    addis r3, r25, 0x1
    add r29, r3, r0
    lwzu r6, -0x3410(r29)
    cmpwi r6, 0x0
    beq lbl_fn_80102EAC_000002D0
    lwz r7, 0x38(r6)
    li r4, 0x0
    li r3, 0x0
    li r5, 0x0
    rlwinm r0, r7, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80102EAC_00000170
    clrlwi r0, r7, 31
    cmplwi r0, 0x1
    beq lbl_fn_80102EAC_00000170
    li r5, 0x1
lbl_fn_80102EAC_00000170:
    cmpwi r5, 0x0
    beq lbl_fn_80102EAC_0000018C
    lwz r0, 0x7e0(r6)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_80102EAC_0000018C
    li r3, 0x1
lbl_fn_80102EAC_0000018C:
    cmpwi r3, 0x0
    beq lbl_fn_80102EAC_000001C0
    lwz r0, 0x55c(r6)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_80102EAC_000001B4
    lwz r0, 0x560(r6)
    cmpwi r0, 0x1c
    bne lbl_fn_80102EAC_000001B4
    li r3, 0x1
lbl_fn_80102EAC_000001B4:
    cmpwi r3, 0x0
    bne lbl_fn_80102EAC_000001C0
    li r4, 0x1
lbl_fn_80102EAC_000001C0:
    cmpwi r4, 0x0
    beq lbl_fn_80102EAC_000002D0
    mr r3, r29
    mr r4, r31
    mr r5, r27
    bl fn_801088B8
    addis r30, r25, 0x1
    addis r25, r25, 0x3
    li r28, 0x0
    subi r30, r30, 0x3410
    b lbl_fn_80102EAC_000002C4
lbl_fn_80102EAC_000001EC:
    lwz r3, 0x0(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80102EAC_000002BC
    lwz r7, 0x38(r3)
    li r5, 0x0
    li r4, 0x0
    li r6, 0x0
    rlwinm r0, r7, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80102EAC_00000224
    clrlwi r0, r7, 31
    cmplwi r0, 0x1
    beq lbl_fn_80102EAC_00000224
    li r6, 0x1
lbl_fn_80102EAC_00000224:
    cmpwi r6, 0x0
    beq lbl_fn_80102EAC_00000240
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_80102EAC_00000240
    li r4, 0x1
lbl_fn_80102EAC_00000240:
    cmpwi r4, 0x0
    beq lbl_fn_80102EAC_00000274
    lwz r0, 0x55c(r3)
    li r4, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_80102EAC_00000268
    lwz r0, 0x560(r3)
    cmpwi r0, 0x1c
    bne lbl_fn_80102EAC_00000268
    li r4, 0x1
lbl_fn_80102EAC_00000268:
    cmpwi r4, 0x0
    bne lbl_fn_80102EAC_00000274
    li r5, 0x1
lbl_fn_80102EAC_00000274:
    cmpwi r5, 0x0
    beq lbl_fn_80102EAC_000002BC
    mr r4, r26
    li r5, 0x1
    bl fn_8016F3D0
    cmpwi r3, 0x0
    beq lbl_fn_80102EAC_000002BC
    lwz r3, 0x0(r30)
    lha r0, 0xd3a(r3)
    cmpwi r0, 0x11
    bne lbl_fn_80102EAC_000002BC
    lwz r0, 0xd24(r3)
    cmplw r0, r26
    bne lbl_fn_80102EAC_000002BC
    mr r3, r30
    mr r4, r31
    mr r5, r27
    bl fn_801088B8
lbl_fn_80102EAC_000002BC:
    addi r30, r30, 0x934
    addi r28, r28, 0x1
lbl_fn_80102EAC_000002C4:
    lwz r0, 0x63b0(r25)
    cmpw r28, r0
    blt lbl_fn_80102EAC_000001EC
lbl_fn_80102EAC_000002D0:
    lwz r0, 0x804(r29)
    cmpwi r0, 0x0
    ble lbl_fn_80102EAC_0000030C
    lwz r3, 0x0(r29)
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_80102EAC_0000030C
    lwz r0, 0x560(r3)
    cmpwi r0, 0x60
    bne lbl_fn_80102EAC_0000030C
    li r0, 0x0
    stw r0, 0x804(r29)
    lwz r3, 0x0(r29)
    lwz r4, 0x564(r3)
    bl fn_8016E970
lbl_fn_80102EAC_0000030C:
    addi r11, r1, 0x40
    bl _restgpr_25
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_801031D0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r6
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r7, lbl_8087F0A8
    lwz r3, 0x3cc(r7)
    bl fn_80210220
    cmpwi r29, 0x0
    bne lbl_fn_801031D0_0000036C
    li r5, -0x1
    b lbl_fn_801031D0_000003AC
lbl_fn_801031D0_0000036C:
    addis r3, r28, 0x3
    mr r4, r28
    lwz r0, 0x63b0(r3)
    li r5, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_801031D0_000003A8
lbl_fn_801031D0_00000388:
    addis r3, r4, 0x1
    lwz r0, -0x3410(r3)
    cmplw r0, r29
    bne lbl_fn_801031D0_0000039C
    b lbl_fn_801031D0_000003AC
lbl_fn_801031D0_0000039C:
    addi r4, r4, 0x934
    addi r5, r5, 0x1
    bdnz lbl_fn_801031D0_00000388
lbl_fn_801031D0_000003A8:
    li r5, -0x1
lbl_fn_801031D0_000003AC:
    cmpwi r30, 0x0
    bne lbl_fn_801031D0_000003BC
    li r4, -0x1
    b lbl_fn_801031D0_000003FC
lbl_fn_801031D0_000003BC:
    addis r3, r28, 0x3
    mr r6, r28
    lwz r0, 0x63b0(r3)
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_801031D0_000003F8
lbl_fn_801031D0_000003D8:
    addis r3, r6, 0x1
    lwz r0, -0x3410(r3)
    cmplw r0, r30
    bne lbl_fn_801031D0_000003EC
    b lbl_fn_801031D0_000003FC
lbl_fn_801031D0_000003EC:
    addi r6, r6, 0x934
    addi r4, r4, 0x1
    bdnz lbl_fn_801031D0_000003D8
lbl_fn_801031D0_000003F8:
    li r4, -0x1
lbl_fn_801031D0_000003FC:
    cmpwi r4, 0x0
    blt lbl_fn_801031D0_000004B0
    cmpwi r5, 0x0
    blt lbl_fn_801031D0_000004B0
    mulli r0, r5, 0x934
    addis r3, r28, 0x1
    add r3, r3, r0
    lwzu r8, -0x3410(r3)
    cmpwi r8, 0x0
    beq lbl_fn_801031D0_000004B0
    lwz r9, 0x38(r8)
    li r6, 0x0
    li r5, 0x0
    li r7, 0x0
    rlwinm r0, r9, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_801031D0_00000450
    clrlwi r0, r9, 31
    cmplwi r0, 0x1
    beq lbl_fn_801031D0_00000450
    li r7, 0x1
lbl_fn_801031D0_00000450:
    cmpwi r7, 0x0
    beq lbl_fn_801031D0_0000046C
    lwz r0, 0x7e0(r8)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_801031D0_0000046C
    li r5, 0x1
lbl_fn_801031D0_0000046C:
    cmpwi r5, 0x0
    beq lbl_fn_801031D0_000004A0
    lwz r0, 0x55c(r8)
    li r5, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_801031D0_00000494
    lwz r0, 0x560(r8)
    cmpwi r0, 0x1c
    bne lbl_fn_801031D0_00000494
    li r5, 0x1
lbl_fn_801031D0_00000494:
    cmpwi r5, 0x0
    bne lbl_fn_801031D0_000004A0
    li r6, 0x1
lbl_fn_801031D0_000004A0:
    cmpwi r6, 0x0
    beq lbl_fn_801031D0_000004B0
    mr r5, r31
    bl fn_8010895C
lbl_fn_801031D0_000004B0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8010337C(void)
{
    nofralloc
    cmpwi r4, 0x0
    bne lbl_fn_8010337C_000004E0
    li r7, -0x1
    b lbl_fn_8010337C_00000520
lbl_fn_8010337C_000004E0:
    addis r6, r3, 0x3
    mr r8, r3
    lwz r0, 0x63b0(r6)
    li r7, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8010337C_0000051C
lbl_fn_8010337C_000004FC:
    addis r6, r8, 0x1
    lwz r0, -0x3410(r6)
    cmplw r0, r4
    bne lbl_fn_8010337C_00000510
    b lbl_fn_8010337C_00000520
lbl_fn_8010337C_00000510:
    addi r8, r8, 0x934
    addi r7, r7, 0x1
    bdnz lbl_fn_8010337C_000004FC
lbl_fn_8010337C_0000051C:
    li r7, -0x1
lbl_fn_8010337C_00000520:
    cmpwi r5, 0x0
    bne lbl_fn_8010337C_00000530
    li r6, -0x1
    b lbl_fn_8010337C_00000570
lbl_fn_8010337C_00000530:
    addis r4, r3, 0x3
    mr r8, r3
    lwz r0, 0x63b0(r4)
    li r6, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8010337C_0000056C
lbl_fn_8010337C_0000054C:
    addis r4, r8, 0x1
    lwz r0, -0x3410(r4)
    cmplw r0, r5
    bne lbl_fn_8010337C_00000560
    b lbl_fn_8010337C_00000570
lbl_fn_8010337C_00000560:
    addi r8, r8, 0x934
    addi r6, r6, 0x1
    bdnz lbl_fn_8010337C_0000054C
lbl_fn_8010337C_0000056C:
    li r6, -0x1
lbl_fn_8010337C_00000570:
    cmpwi r6, 0x0
    bltlr
    cmpwi r7, 0x0
    blt lbl_fn_8010337C_000005A0
    mulli r4, r7, 0x934
    addis r3, r3, 0x1
    slwi r0, r6, 2
    lfs f0, lbl_80881478
    add r3, r3, r4
    add r3, r3, r0
    stfs f0, -0x2d2c(r3)
    blr
lbl_fn_8010337C_000005A0:
    slwi r0, r6, 2
    lfs f0, lbl_80881478
    add r5, r3, r0
    addis r3, r3, 0x3
    li r6, 0x0
    b lbl_fn_8010337C_000005C8
lbl_fn_8010337C_000005B8:
    addis r4, r5, 0x1
    addi r6, r6, 0x1
    stfs f0, -0x2d2c(r4)
    addi r5, r5, 0x934
lbl_fn_8010337C_000005C8:
    lwz r0, 0x63b0(r3)
    cmpw r6, r0
    blt lbl_fn_8010337C_000005B8
    blr
}

asm void fn_80103484(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stmw r26, 0x8(r1)
    bne lbl_fn_80103484_000005F8
    li r7, -0x1
    b lbl_fn_80103484_00000638
lbl_fn_80103484_000005F8:
    addis r6, r3, 0x3
    mr r8, r3
    lwz r0, 0x63b0(r6)
    li r7, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80103484_00000634
lbl_fn_80103484_00000614:
    addis r6, r8, 0x1
    lwz r0, -0x3410(r6)
    cmplw r0, r4
    bne lbl_fn_80103484_00000628
    b lbl_fn_80103484_00000638
lbl_fn_80103484_00000628:
    addi r8, r8, 0x934
    addi r7, r7, 0x1
    bdnz lbl_fn_80103484_00000614
lbl_fn_80103484_00000634:
    li r7, -0x1
lbl_fn_80103484_00000638:
    cmpwi r5, 0x0
    bne lbl_fn_80103484_00000648
    li r31, -0x1
    b lbl_fn_80103484_00000688
lbl_fn_80103484_00000648:
    addis r4, r3, 0x3
    mr r6, r3
    lwz r0, 0x63b0(r4)
    li r31, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80103484_00000684
lbl_fn_80103484_00000664:
    addis r4, r6, 0x1
    lwz r0, -0x3410(r4)
    cmplw r0, r5
    bne lbl_fn_80103484_00000678
    b lbl_fn_80103484_00000688
lbl_fn_80103484_00000678:
    addi r6, r6, 0x934
    addi r31, r31, 0x1
    bdnz lbl_fn_80103484_00000664
lbl_fn_80103484_00000684:
    li r31, -0x1
lbl_fn_80103484_00000688:
    cmpwi r31, 0x0
    bge lbl_fn_80103484_00000698
    li r3, -0x1
    b lbl_fn_80103484_00000740
lbl_fn_80103484_00000698:
    cmpwi r7, 0x0
    blt lbl_fn_80103484_000006D4
    mulli r0, r7, 0x934
    addis r3, r3, 0x1
    add r3, r3, r0
    lwzu r4, -0x3410(r3)
    lwz r0, 0x38(r4)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_80103484_000006C8
    li r3, -0x1
    b lbl_fn_80103484_00000740
lbl_fn_80103484_000006C8:
    mr r4, r31
    bl fn_801083D8
    b lbl_fn_80103484_00000740
lbl_fn_80103484_000006D4:
    addis r29, r3, 0x1
    addis r30, r3, 0x3
    li r28, 0x0
    li r27, 0x0
    li r26, 0x0
    subi r29, r29, 0x3410
    b lbl_fn_80103484_00000720
lbl_fn_80103484_000006F0:
    lwz r3, 0x0(r29)
    lwz r0, 0x38(r3)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_80103484_00000718
    mr r3, r29
    mr r4, r31
    bl fn_801083D8
    add r28, r28, r3
    addi r27, r27, 0x1
lbl_fn_80103484_00000718:
    addi r29, r29, 0x934
    addi r26, r26, 0x1
lbl_fn_80103484_00000720:
    lwz r0, 0x63b0(r30)
    cmpw r26, r0
    blt lbl_fn_80103484_000006F0
    cmpwi r27, 0x0
    ble lbl_fn_80103484_0000073C
    divw r3, r28, r27
    b lbl_fn_80103484_00000740
lbl_fn_80103484_0000073C:
    li r3, -0x1
lbl_fn_80103484_00000740:
    lmw r26, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80103600(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x54(r1)
    stmw r15, 0xc(r1)
    mr r30, r3
    mr r31, r4
    beq lbl_fn_80103600_00000C98
    lwz r3, lbl_8087F0A8
    lwz r3, 0x3cc(r3)
    bl fn_80210220
    lwz r3, 0xd20(r31)
    lwz r0, 0xd1c(r31)
    cmplw r3, r0
    beq lbl_fn_80103600_000007F4
    cmpwi r3, 0x0
    beq lbl_fn_80103600_000007B4
    mr r4, r31
    bl fn_8016F4D8
    cmpwi r3, 0x0
    beq lbl_fn_80103600_000007B4
    lwz r3, 0xd20(r31)
    mr r4, r31
    bl fn_8016F5EC
lbl_fn_80103600_000007B4:
    lwz r0, 0xd1c(r31)
    stw r0, 0xfc0(r31)
    lwz r3, lbl_8087F0A8
    lwz r4, 0x50(r3)
    cmpwi r4, 0x0
    ble lbl_fn_80103600_000007F4
    cmpwi r0, 0x0
    beq lbl_fn_80103600_000007F4
    lwz r0, 0xd20(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80103600_000007F4
    lwz r0, 0x12a4(r31)
    extrwi. r0, r0, 1, 29
    bne lbl_fn_80103600_000007F4
    mr r3, r31
    bl fn_80164F54
lbl_fn_80103600_000007F4:
    lwz r0, 0x1454(r31)
    lwz r27, 0xd1c(r31)
    cmpwi r0, 0x1
    stw r27, 0xd20(r31)
    bne lbl_fn_80103600_00000C98
    lwz r3, 0xd2c(r31)
    li r0, 0x0
    stw r0, 0xd1c(r31)
    li r26, 0x0
    cmpwi r3, 0x0
    beq lbl_fn_80103600_0000083C
    lwz r3, 0x218(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80103600_00000834
    lwz r4, 0x8c(r3)
    b lbl_fn_80103600_00000840
lbl_fn_80103600_00000834:
    li r4, 0x0
    b lbl_fn_80103600_00000840
lbl_fn_80103600_0000083C:
    li r4, 0x0
lbl_fn_80103600_00000840:
    lwz r0, 0xd6c(r31)
    cmpwi r0, 0x6
    bne lbl_fn_80103600_000008DC
    cmpwi r4, 0x0
    beq lbl_fn_80103600_000008DC
    lwz r7, 0x38(r4)
    li r5, 0x0
    li r3, 0x0
    li r6, 0x0
    rlwinm r0, r7, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80103600_00000880
    clrlwi r0, r7, 31
    cmplwi r0, 0x1
    beq lbl_fn_80103600_00000880
    li r6, 0x1
lbl_fn_80103600_00000880:
    cmpwi r6, 0x0
    beq lbl_fn_80103600_0000089C
    lwz r0, 0x7e0(r4)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_80103600_0000089C
    li r3, 0x1
lbl_fn_80103600_0000089C:
    cmpwi r3, 0x0
    beq lbl_fn_80103600_000008D0
    lwz r0, 0x55c(r4)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_80103600_000008C4
    lwz r0, 0x560(r4)
    cmpwi r0, 0x1c
    bne lbl_fn_80103600_000008C4
    li r3, 0x1
lbl_fn_80103600_000008C4:
    cmpwi r3, 0x0
    bne lbl_fn_80103600_000008D0
    li r5, 0x1
lbl_fn_80103600_000008D0:
    cmpwi r5, 0x0
    beq lbl_fn_80103600_000008DC
    li r26, 0x1
lbl_fn_80103600_000008DC:
    cmpwi r31, 0x0
    bne lbl_fn_80103600_000008EC
    li r4, -0x1
    b lbl_fn_80103600_0000092C
lbl_fn_80103600_000008EC:
    addis r3, r30, 0x3
    mr r5, r30
    lwz r0, 0x63b0(r3)
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80103600_00000928
lbl_fn_80103600_00000908:
    addis r3, r5, 0x1
    lwz r0, -0x3410(r3)
    cmplw r0, r31
    bne lbl_fn_80103600_0000091C
    b lbl_fn_80103600_0000092C
lbl_fn_80103600_0000091C:
    addi r5, r5, 0x934
    addi r4, r4, 0x1
    bdnz lbl_fn_80103600_00000908
lbl_fn_80103600_00000928:
    li r4, -0x1
lbl_fn_80103600_0000092C:
    mulli r0, r4, 0x934
    addis r3, r30, 0x1
    cmpwi r4, 0x0
    add r3, r3, r0
    subi r25, r3, 0x3410
    blt lbl_fn_80103600_00000C98
    lwz r0, 0xd18(r31)
    cmpwi r0, 0x0
    ble lbl_fn_80103600_00000C98
    lwz r0, 0x804(r25)
    cmpwi r0, 0x0
    bgt lbl_fn_80103600_00000C98
    lwz r3, lbl_8087F0A8
    lwz r3, 0x3cc(r3)
    bl fn_80210220
    mr r16, r30
    addis r15, r30, 0x3
    li r24, -0x1
    li r23, -0x1
    li r22, -0x1
    li r21, -0x1
    li r20, 0x0
    li r17, 0x0
    b lbl_fn_80103600_000009BC
lbl_fn_80103600_0000098C:
    addis r4, r16, 0x1
    mr r3, r30
    lwz r5, -0x3410(r4)
    mr r4, r31
    li r6, 0x1
    bl fn_80103B58
    cmpwi r3, 0x0
    beq lbl_fn_80103600_000009B4
    li r20, 0x1
    b lbl_fn_80103600_000009C8
lbl_fn_80103600_000009B4:
    addi r16, r16, 0x934
    addi r17, r17, 0x1
lbl_fn_80103600_000009BC:
    lwz r0, 0x63b0(r15)
    cmpw r17, r0
    blt lbl_fn_80103600_0000098C
lbl_fn_80103600_000009C8:
    lwz r0, 0x48(r31)
    cmpwi r0, 0x3
    bne lbl_fn_80103600_00000A04
    lwz r0, 0x7e0(r31)
    rlwinm r0, r0, 0, 23, 23
    cmplwi r0, 0x100
    bne lbl_fn_80103600_00000A04
    lwz r3, lbl_8087F8A0
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80103600_00000A04
    cmplw r0, r31
    beq lbl_fn_80103600_00000A04
    stw r0, 0xd1c(r31)
    b lbl_fn_80103600_00000AC8
lbl_fn_80103600_00000A04:
    mr r28, r30
    addis r29, r30, 0x3
    li r19, 0x0
    b lbl_fn_80103600_00000ABC
lbl_fn_80103600_00000A14:
    addis r4, r28, 0x1
    mr r3, r30
    lwz r5, -0x3410(r4)
    mr r4, r31
    mr r6, r20
    bl fn_80103B58
    cmpwi r3, 0x0
    beq lbl_fn_80103600_00000AB4
    mr r3, r25
    mr r4, r19
    bl fn_801083D8
    cmpw r22, r3
    mr r18, r3
    bge lbl_fn_80103600_00000A54
    mr r22, r18
    mr r21, r19
lbl_fn_80103600_00000A54:
    lwz r4, 0xd2c(r31)
    cmpwi r4, 0x0
    beq lbl_fn_80103600_00000AA4
    addis r3, r28, 0x1
    cmpwi r26, 0x0
    lwz r17, -0x3410(r3)
    lbz r15, 0x245(r4)
    lwz r16, 0x102c(r17)
    beq lbl_fn_80103600_00000A7C
    li r15, 0x1
lbl_fn_80103600_00000A7C:
    mr r3, r17
    bl fn_800EEFDC
    cmpwi r3, 0x0
    beq lbl_fn_80103600_00000AA4
    lwz r0, 0xd1c(r31)
    cmplw r17, r0
    bne lbl_fn_80103600_00000A9C
    subi r16, r16, 0x1
lbl_fn_80103600_00000A9C:
    cmpw r16, r15
    bge lbl_fn_80103600_00000AB4
lbl_fn_80103600_00000AA4:
    cmpw r24, r18
    bge lbl_fn_80103600_00000AB4
    mr r24, r18
    mr r23, r19
lbl_fn_80103600_00000AB4:
    addi r28, r28, 0x934
    addi r19, r19, 0x1
lbl_fn_80103600_00000ABC:
    lwz r0, 0x63b0(r29)
    cmpw r19, r0
    blt lbl_fn_80103600_00000A14
lbl_fn_80103600_00000AC8:
    cmpwi r23, 0x0
    blt lbl_fn_80103600_00000AD4
    b lbl_fn_80103600_00000AE4
lbl_fn_80103600_00000AD4:
    cmpwi r21, 0x0
    li r23, -0x1
    blt lbl_fn_80103600_00000AE4
    mr r23, r21
lbl_fn_80103600_00000AE4:
    cmpwi r23, 0x0
    blt lbl_fn_80103600_00000C98
    cmpwi r27, 0x0
    bne lbl_fn_80103600_00000AFC
    li r29, -0x1
    b lbl_fn_80103600_00000B3C
lbl_fn_80103600_00000AFC:
    addis r3, r30, 0x3
    mr r4, r30
    lwz r0, 0x63b0(r3)
    li r29, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80103600_00000B38
lbl_fn_80103600_00000B18:
    addis r3, r4, 0x1
    lwz r0, -0x3410(r3)
    cmplw r0, r27
    bne lbl_fn_80103600_00000B2C
    b lbl_fn_80103600_00000B3C
lbl_fn_80103600_00000B2C:
    addi r4, r4, 0x934
    addi r29, r29, 0x1
    bdnz lbl_fn_80103600_00000B18
lbl_fn_80103600_00000B38:
    li r29, -0x1
lbl_fn_80103600_00000B3C:
    cmpwi r29, 0x0
    blt lbl_fn_80103600_00000C54
    lwz r6, 0x38(r27)
    li r4, 0x0
    li r3, 0x0
    li r5, 0x0
    rlwinm r0, r6, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80103600_00000B70
    clrlwi r0, r6, 31
    cmplwi r0, 0x1
    beq lbl_fn_80103600_00000B70
    li r5, 0x1
lbl_fn_80103600_00000B70:
    cmpwi r5, 0x0
    beq lbl_fn_80103600_00000B8C
    lwz r0, 0x7e0(r27)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_80103600_00000B8C
    li r3, 0x1
lbl_fn_80103600_00000B8C:
    cmpwi r3, 0x0
    beq lbl_fn_80103600_00000BC0
    lwz r0, 0x55c(r27)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_80103600_00000BB4
    lwz r0, 0x560(r27)
    cmpwi r0, 0x1c
    bne lbl_fn_80103600_00000BB4
    li r3, 0x1
lbl_fn_80103600_00000BB4:
    cmpwi r3, 0x0
    bne lbl_fn_80103600_00000BC0
    li r4, 0x1
lbl_fn_80103600_00000BC0:
    cmpwi r4, 0x0
    beq lbl_fn_80103600_00000C54
    lwz r0, 0x54c(r27)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    beq lbl_fn_80103600_00000C54
    mr r3, r27
    mr r4, r31
    li r5, 0x1
    bl fn_8016F3D0
    cmpwi r3, 0x0
    bne lbl_fn_80103600_00000C54
    lwz r0, 0x12a8(r27)
    extrwi. r0, r0, 1, 22
    bne lbl_fn_80103600_00000C54
    stw r27, 0xd1c(r31)
    mr r3, r25
    mr r4, r29
    bl fn_801083D8
    addi r15, r3, 0x1e
    mr r3, r25
    mr r4, r23
    bl fn_801083D8
    cmpw r3, r15
    ble lbl_fn_80103600_00000C80
    mulli r4, r23, 0x934
    addis r5, r30, 0x1
    addis r3, r30, 0x3
    slwi r0, r23, 2
    add r4, r5, r4
    lwz r5, -0x3410(r4)
    add r4, r3, r0
    stw r5, 0xd1c(r31)
    lwz r3, 0x6290(r4)
    addi r0, r3, 0x1
    stw r0, 0x6290(r4)
    b lbl_fn_80103600_00000C80
lbl_fn_80103600_00000C54:
    mulli r4, r23, 0x934
    addis r5, r30, 0x1
    addis r3, r30, 0x3
    slwi r0, r23, 2
    add r4, r5, r4
    lwz r5, -0x3410(r4)
    add r4, r3, r0
    stw r5, 0xd1c(r31)
    lwz r3, 0x6290(r4)
    addi r0, r3, 0x1
    stw r0, 0x6290(r4)
lbl_fn_80103600_00000C80:
    lwz r4, 0xd20(r31)
    mr r3, r30
    bl fn_80103E60
    lwz r4, 0xd1c(r31)
    mr r3, r30
    bl fn_80103E60
lbl_fn_80103600_00000C98:
    lmw r15, 0xc(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80103B58(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r6
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    beq lbl_fn_80103B58_00000CE8
    cmpwi r5, 0x0
    bne lbl_fn_80103B58_00000CF0
lbl_fn_80103B58_00000CE8:
    li r3, 0x0
    b lbl_fn_80103B58_00000F94
lbl_fn_80103B58_00000CF0:
    lwz r7, 0x38(r5)
    li r4, 0x0
    li r3, 0x0
    li r6, 0x0
    rlwinm r0, r7, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80103B58_00000D1C
    clrlwi r0, r7, 31
    cmplwi r0, 0x1
    beq lbl_fn_80103B58_00000D1C
    li r6, 0x1
lbl_fn_80103B58_00000D1C:
    cmpwi r6, 0x0
    beq lbl_fn_80103B58_00000D38
    lwz r0, 0x7e0(r5)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_80103B58_00000D38
    li r3, 0x1
lbl_fn_80103B58_00000D38:
    cmpwi r3, 0x0
    beq lbl_fn_80103B58_00000D6C
    lwz r0, 0x55c(r5)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_80103B58_00000D60
    lwz r0, 0x560(r5)
    cmpwi r0, 0x1c
    bne lbl_fn_80103B58_00000D60
    li r3, 0x1
lbl_fn_80103B58_00000D60:
    cmpwi r3, 0x0
    bne lbl_fn_80103B58_00000D6C
    li r4, 0x1
lbl_fn_80103B58_00000D6C:
    cmpwi r4, 0x0
    beq lbl_fn_80103B58_00000DA8
    lwz r0, 0x54c(r5)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    beq lbl_fn_80103B58_00000DA8
    mr r3, r30
    mr r4, r29
    li r5, 0x1
    bl fn_8016F3D0
    cmpwi r3, 0x0
    bne lbl_fn_80103B58_00000DA8
    lwz r0, 0x12a8(r30)
    extrwi. r0, r0, 1, 22
    beq lbl_fn_80103B58_00000DB0
lbl_fn_80103B58_00000DA8:
    li r3, 0x0
    b lbl_fn_80103B58_00000F94
lbl_fn_80103B58_00000DB0:
    lwz r0, 0x55c(r30)
    cmpwi r0, 0x6
    bne lbl_fn_80103B58_00000DD8
    lwz r0, 0x560(r30)
    cmpwi r0, 0x11
    beq lbl_fn_80103B58_00000DD0
    cmpwi r0, 0x3b
    bne lbl_fn_80103B58_00000DD8
lbl_fn_80103B58_00000DD0:
    li r3, 0x0
    b lbl_fn_80103B58_00000F94
lbl_fn_80103B58_00000DD8:
    cmpwi r29, 0x0
    bne lbl_fn_80103B58_00000DE8
    li r4, -0x1
    b lbl_fn_80103B58_00000E28
lbl_fn_80103B58_00000DE8:
    addis r3, r28, 0x3
    mr r5, r28
    lwz r0, 0x63b0(r3)
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80103B58_00000E24
lbl_fn_80103B58_00000E04:
    addis r3, r5, 0x1
    lwz r0, -0x3410(r3)
    cmplw r0, r29
    bne lbl_fn_80103B58_00000E18
    b lbl_fn_80103B58_00000E28
lbl_fn_80103B58_00000E18:
    addi r5, r5, 0x934
    addi r4, r4, 0x1
    bdnz lbl_fn_80103B58_00000E04
lbl_fn_80103B58_00000E24:
    li r4, -0x1
lbl_fn_80103B58_00000E28:
    cmpwi r30, 0x0
    bne lbl_fn_80103B58_00000E38
    li r5, -0x1
    b lbl_fn_80103B58_00000E78
lbl_fn_80103B58_00000E38:
    addis r3, r28, 0x3
    mr r6, r28
    lwz r0, 0x63b0(r3)
    li r5, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80103B58_00000E74
lbl_fn_80103B58_00000E54:
    addis r3, r6, 0x1
    lwz r0, -0x3410(r3)
    cmplw r0, r30
    bne lbl_fn_80103B58_00000E68
    b lbl_fn_80103B58_00000E78
lbl_fn_80103B58_00000E68:
    addi r6, r6, 0x934
    addi r5, r5, 0x1
    bdnz lbl_fn_80103B58_00000E54
lbl_fn_80103B58_00000E74:
    li r5, -0x1
lbl_fn_80103B58_00000E78:
    cmpwi r4, 0x0
    blt lbl_fn_80103B58_00000E88
    cmpwi r5, 0x0
    bge lbl_fn_80103B58_00000E90
lbl_fn_80103B58_00000E88:
    li r3, 0x0
    b lbl_fn_80103B58_00000F94
lbl_fn_80103B58_00000E90:
    mulli r3, r5, 0x934
    addis r0, r28, 0x1
    add r3, r0, r3
    lwz r0, -0x2c08(r3)
    cmpwi r0, 0x0
    ble lbl_fn_80103B58_00000EB0
    li r3, 0x0
    b lbl_fn_80103B58_00000F94
lbl_fn_80103B58_00000EB0:
    cmpwi r31, 0x0
    beq lbl_fn_80103B58_00000ED4
    lfs f1, -0x31c8(r3)
    lfs f0, lbl_80881478
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_80103B58_00000ED4
    li r3, 0x0
    b lbl_fn_80103B58_00000F94
lbl_fn_80103B58_00000ED4:
    lwz r0, 0xd18(r30)
    cmpwi r0, 0x0
    ble lbl_fn_80103B58_00000EF0
    lwz r0, 0xd30(r30)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_80103B58_00000EF8
lbl_fn_80103B58_00000EF0:
    li r3, 0x0
    b lbl_fn_80103B58_00000F94
lbl_fn_80103B58_00000EF8:
    addi r3, r30, 0xd74
    bl fn_8011D1FC
    cmpwi r3, 0x0
    beq lbl_fn_80103B58_00000F20
    addi r3, r30, 0xd74
    bl fn_8011D21C
    cmpwi r3, 0x0
    bne lbl_fn_80103B58_00000F20
    li r3, 0x0
    b lbl_fn_80103B58_00000F94
lbl_fn_80103B58_00000F20:
    lwz r4, 0xd0c(r29)
    cmpwi r4, 0x0
    ble lbl_fn_80103B58_00000F90
    lwz r0, 0xd0c(r30)
    cmpwi r0, 0x0
    ble lbl_fn_80103B58_00000F90
    cmpw r4, r0
    beq lbl_fn_80103B58_00000F90
    lwz r0, 0xd6c(r29)
    cmpwi r0, 0x1
    beq lbl_fn_80103B58_00000F54
    cmpwi r0, 0x6
    bne lbl_fn_80103B58_00000F5C
lbl_fn_80103B58_00000F54:
    li r3, 0x0
    b lbl_fn_80103B58_00000F94
lbl_fn_80103B58_00000F5C:
    lwz r3, lbl_8087F430
    lwz r3, 0x10d8(r3)
    bl fn_803C1884
    cmpwi r3, 0x0
    beq lbl_fn_80103B58_00000F90
    lwz r3, 0x28(r3)
    cmpwi r3, 0x0
    blt lbl_fn_80103B58_00000F90
    lwz r0, 0xd0c(r30)
    cmpw r3, r0
    beq lbl_fn_80103B58_00000F90
    li r3, 0x0
    b lbl_fn_80103B58_00000F94
lbl_fn_80103B58_00000F90:
    li r3, 0x1
lbl_fn_80103B58_00000F94:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80103E60(void)
{
    nofralloc
    cmpwi r4, 0x0
    beqlr
    addis r5, r3, 0x3
    addis r7, r3, 0x1
    lwz r0, 0x63b0(r5)
    li r10, 0x0
    mtctr r0
    cmpwi r0, 0x0
    subi r7, r7, 0x3410
    ble lbl_fn_80103E60_000010AC
lbl_fn_80103E60_00000FDC:
    lwz r8, 0x0(r7)
    cmpwi r8, 0x0
    beq lbl_fn_80103E60_000010A4
    lwz r9, 0x38(r8)
    li r5, 0x0
    li r3, 0x0
    li r6, 0x0
    rlwinm r0, r9, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80103E60_00001014
    clrlwi r0, r9, 31
    cmplwi r0, 0x1
    beq lbl_fn_80103E60_00001014
    li r6, 0x1
lbl_fn_80103E60_00001014:
    cmpwi r6, 0x0
    beq lbl_fn_80103E60_00001030
    lwz r0, 0x7e0(r8)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_80103E60_00001030
    li r3, 0x1
lbl_fn_80103E60_00001030:
    cmpwi r3, 0x0
    beq lbl_fn_80103E60_00001064
    lwz r0, 0x55c(r8)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_80103E60_00001058
    lwz r0, 0x560(r8)
    cmpwi r0, 0x1c
    bne lbl_fn_80103E60_00001058
    li r3, 0x1
lbl_fn_80103E60_00001058:
    cmpwi r3, 0x0
    bne lbl_fn_80103E60_00001064
    li r5, 0x1
lbl_fn_80103E60_00001064:
    cmpwi r5, 0x0
    beq lbl_fn_80103E60_000010A4
    lwz r0, 0x54c(r8)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    beq lbl_fn_80103E60_000010A4
    lwz r0, 0x48(r8)
    cmpwi r0, 0x0
    beq lbl_fn_80103E60_00001094
    lwz r0, 0xc58(r8)
    cmpwi r0, 0x0
    beq lbl_fn_80103E60_000010A4
lbl_fn_80103E60_00001094:
    lwz r0, 0xd1c(r8)
    cmplw r0, r4
    bne lbl_fn_80103E60_000010A4
    addi r10, r10, 0x1
lbl_fn_80103E60_000010A4:
    addi r7, r7, 0x934
    bdnz lbl_fn_80103E60_00000FDC
lbl_fn_80103E60_000010AC:
    stw r10, 0x102c(r4)
    blr
}

asm void fn_80103F60(void)
{
    nofralloc
    cmpwi r4, 0x0
    bne lbl_fn_80103F60_000010C4
    li r6, -0x1
    b lbl_fn_80103F60_00001104
lbl_fn_80103F60_000010C4:
    addis r5, r3, 0x3
    mr r7, r3
    lwz r0, 0x63b0(r5)
    li r6, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80103F60_00001100
lbl_fn_80103F60_000010E0:
    addis r5, r7, 0x1
    lwz r0, -0x3410(r5)
    cmplw r0, r4
    bne lbl_fn_80103F60_000010F4
    b lbl_fn_80103F60_00001104
lbl_fn_80103F60_000010F4:
    addi r7, r7, 0x934
    addi r6, r6, 0x1
    bdnz lbl_fn_80103F60_000010E0
lbl_fn_80103F60_00001100:
    li r6, -0x1
lbl_fn_80103F60_00001104:
    cmpwi r6, 0x0
    blt lbl_fn_80103F60_00001120
    mulli r0, r6, 0x934
    addis r3, r3, 0x1
    add r3, r3, r0
    subi r3, r3, 0x3410
    blr
lbl_fn_80103F60_00001120:
    li r3, 0x0
    blr
}

asm void fn_80103FD4(void)
{
    nofralloc
    stwu r1, -0x250(r1)
    mflr r0
    stw r0, 0x254(r1)
    addi r11, r1, 0x130
    stfd f31, 0x240(r1)
    psq_st f31, 0x248(r1), 0, 0
    stfd f30, 0x230(r1)
    psq_st f30, 0x238(r1), 0, 0
    stfd f29, 0x220(r1)
    psq_st f29, 0x228(r1), 0, 0
    stfd f28, 0x210(r1)
    psq_st f28, 0x218(r1), 0, 0
    stfd f27, 0x200(r1)
    psq_st f27, 0x208(r1), 0, 0
    stfd f26, 0x1f0(r1)
    psq_st f26, 0x1f8(r1), 0, 0
    stfd f25, 0x1e0(r1)
    psq_st f25, 0x1e8(r1), 0, 0
    stfd f24, 0x1d0(r1)
    psq_st f24, 0x1d8(r1), 0, 0
    stfd f23, 0x1c0(r1)
    psq_st f23, 0x1c8(r1), 0, 0
    stfd f22, 0x1b0(r1)
    psq_st f22, 0x1b8(r1), 0, 0
    stfd f21, 0x1a0(r1)
    psq_st f21, 0x1a8(r1), 0, 0
    stfd f20, 0x190(r1)
    psq_st f20, 0x198(r1), 0, 0
    stfd f19, 0x180(r1)
    psq_st f19, 0x188(r1), 0, 0
    stfd f18, 0x170(r1)
    psq_st f18, 0x178(r1), 0, 0
    stfd f17, 0x160(r1)
    psq_st f17, 0x168(r1), 0, 0
    stfd f16, 0x150(r1)
    psq_st f16, 0x158(r1), 0, 0
    stfd f15, 0x140(r1)
    psq_st f15, 0x148(r1), 0, 0
    stfd f14, 0x130(r1)
    psq_st f14, 0x138(r1), 0, 0
    bl _savegpr_14
    lwz r5, lbl_8087F0A8
    lis r4, 0x4330
    mr r25, r3
    stw r4, 0x80(r1)
    addi r0, r5, 0x350
    lwz r3, 0x3cc(r5)
    stw r0, 0xd8(r1)
    stw r4, 0x88(r1)
    bl fn_80210220
    addis r4, r25, 0x3
    lwz r3, 0x63b4(r4)
    cmpwi r3, 0x0
    ble lbl_fn_80103FD4_00001208
    subi r0, r3, 0x1
    stw r0, 0x63b4(r4)
lbl_fn_80103FD4_00001208:
    lfs f0, lbl_80881550
    lis r3, lbl_80735EB0@ha
    stfd f0, 0xa0(r1)
    addis r0, r25, 0x1
    lfs f0, lbl_808815BC
    addi r17, r1, 0x44
    stfd f0, 0xb0(r1)
    li r31, 0x0
    lfs f0, lbl_808815C0
    li r14, 0x0
    stfd f0, 0xb8(r1)
    li r18, 0x0
    lfs f0, lbl_8088148C
    li r19, 0xdc
    stfd f0, 0xa8(r1)
    li r21, 0xc8
    lfs f0, lbl_80881500
    li r20, 0x258
    stfd f0, 0xc0(r1)
    lfs f0, lbl_808815C4
    stfd f0, 0xc8(r1)
    lfs f0, lbl_808815C8
    stw r0, 0xdc(r1)
    addis r0, r25, 0x3
    lfs f19, lbl_80881478
    stw r0, 0xe0(r1)
    li r0, 0x0
    lfs f20, lbl_80881494
    lfd f30, lbl_80735EB0@l(r3)
    lfs f31, lbl_80881598
    lfs f23, lbl_8088152C
    lfs f24, lbl_808815AC
    lfs f25, lbl_808815B0
    lfs f26, lbl_80881508
    lfs f18, lbl_808815A4
    lfs f17, lbl_808815A8
    lfs f22, lbl_808814A0
    lfs f21, lbl_808815A0
    lfs f27, lbl_808815B8
    lfs f15, lbl_808815B4
    lfs f14, lbl_80881490
    lfs f28, lbl_808814C8
    lfs f29, lbl_808814C4
    stfd f0, 0xd0(r1)
    stw r0, 0xe4(r1)
    b lbl_fn_80103FD4_000025AC
lbl_fn_80103FD4_000012C0:
    lwz r3, 0xdc(r1)
    li r30, 0x0
    lwz r0, 0xe4(r1)
    li r29, 0x0
    li r5, 0x0
    li r4, 0x0
    add r28, r3, r0
    lwzu r3, -0x3410(r28)
    lwz r0, 0xe0(r1)
    lwz r7, 0x38(r3)
    add r15, r0, r14
    li r0, 0x0
    rlwinm r6, r7, 0, 29, 29
    cmplwi r6, 0x4
    beq lbl_fn_80103FD4_0000130C
    clrlwi r6, r7, 31
    cmplwi r6, 0x1
    beq lbl_fn_80103FD4_0000130C
    li r4, 0x1
lbl_fn_80103FD4_0000130C:
    cmpwi r4, 0x0
    beq lbl_fn_80103FD4_00001328
    lwz r4, 0x7e0(r3)
    rlwinm r4, r4, 0, 26, 26
    cmplwi r4, 0x20
    beq lbl_fn_80103FD4_00001328
    li r0, 0x1
lbl_fn_80103FD4_00001328:
    cmpwi r0, 0x0
    beq lbl_fn_80103FD4_0000135C
    lwz r0, 0x55c(r3)
    li r4, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_80103FD4_00001350
    lwz r0, 0x560(r3)
    cmpwi r0, 0x1c
    bne lbl_fn_80103FD4_00001350
    li r4, 0x1
lbl_fn_80103FD4_00001350:
    cmpwi r4, 0x0
    bne lbl_fn_80103FD4_0000135C
    li r5, 0x1
lbl_fn_80103FD4_0000135C:
    cmpwi r5, 0x0
    beq lbl_fn_80103FD4_00001374
    lwz r0, 0x54c(r3)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    bne lbl_fn_80103FD4_000014D4
lbl_fn_80103FD4_00001374:
    cmpwi r3, 0x0
    bne lbl_fn_80103FD4_00001384
    li r5, -0x1
    b lbl_fn_80103FD4_000013C4
lbl_fn_80103FD4_00001384:
    addis r4, r25, 0x3
    mr r6, r25
    lwz r0, 0x63b0(r4)
    li r5, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80103FD4_000013C0
lbl_fn_80103FD4_000013A0:
    addis r4, r6, 0x1
    lwz r0, -0x3410(r4)
    cmplw r0, r3
    bne lbl_fn_80103FD4_000013B4
    b lbl_fn_80103FD4_000013C4
lbl_fn_80103FD4_000013B4:
    addi r6, r6, 0x934
    addi r5, r5, 0x1
    bdnz lbl_fn_80103FD4_000013A0
lbl_fn_80103FD4_000013C0:
    li r5, -0x1
lbl_fn_80103FD4_000013C4:
    cmpwi r5, 0x0
    blt lbl_fn_80103FD4_00001458
    slwi r0, r5, 2
    add r4, r25, r0
    li r0, 0x3
    mtctr r0
lbl_fn_80103FD4_000013DC:
    addis r3, r4, 0x1
    addi r4, r4, 0x49a0
    stw r18, -0x3408(r3)
    stw r18, -0x2ad4(r3)
    stw r18, -0x21a0(r3)
    stw r18, -0x186c(r3)
    stw r18, -0xf38(r3)
    stw r18, -0x604(r3)
    stw r18, 0x330(r3)
    stw r18, 0xc64(r3)
    addis r3, r4, 0x1
    addi r4, r4, 0x49a0
    stw r18, -0x3408(r3)
    stw r18, -0x2ad4(r3)
    stw r18, -0x21a0(r3)
    stw r18, -0x186c(r3)
    stw r18, -0xf38(r3)
    stw r18, -0x604(r3)
    stw r18, 0x330(r3)
    stw r18, 0xc64(r3)
    addis r3, r4, 0x1
    addi r4, r4, 0x49a0
    stw r18, -0x3408(r3)
    stw r18, -0x2ad4(r3)
    stw r18, -0x21a0(r3)
    stw r18, -0x186c(r3)
    stw r18, -0xf38(r3)
    stw r18, -0x604(r3)
    stw r18, 0x330(r3)
    stw r18, 0xc64(r3)
    bdnz lbl_fn_80103FD4_000013DC
lbl_fn_80103FD4_00001458:
    lbz r0, 0x92f(r28)
    cmpwi r0, 0x0
    beq lbl_fn_80103FD4_0000146C
    mr r3, r28
    bl fn_801081D8
lbl_fn_80103FD4_0000146C:
    lhz r0, 0x682e(r15)
    stw r18, 0x6828(r15)
    clrlwi. r0, r0, 31
    sth r18, 0x682e(r15)
    sth r18, 0x682c(r15)
    beq lbl_fn_80103FD4_00001490
    lhz r0, 0x682e(r15)
    ori r0, r0, 0x1
    sth r0, 0x682e(r15)
lbl_fn_80103FD4_00001490:
    lwz r4, 0x0(r28)
    li r3, 0x0
    lwz r0, 0x55c(r4)
    cmpwi r0, 0x6
    bne lbl_fn_80103FD4_000014B4
    lwz r0, 0x560(r4)
    cmpwi r0, 0x1c
    bne lbl_fn_80103FD4_000014B4
    li r3, 0x1
lbl_fn_80103FD4_000014B4:
    cmpwi r3, 0x0
    beq lbl_fn_80103FD4_000014C4
    li r0, 0x3c
    stw r0, 0x808(r28)
lbl_fn_80103FD4_000014C4:
    lwz r3, 0x0(r28)
    li r4, 0x0
    bl fn_8017A5D8
    b lbl_fn_80103FD4_00002458
lbl_fn_80103FD4_000014D4:
    li r0, 0x1
    stb r0, 0x92f(r28)
    lwz r3, 0x808(r28)
    cmpwi r3, 0x0
    ble lbl_fn_80103FD4_000014F0
    subi r0, r3, 0x1
    stw r0, 0x808(r28)
lbl_fn_80103FD4_000014F0:
    lwz r3, 0x804(r28)
    cmpwi r3, 0x0
    ble lbl_fn_80103FD4_00001528
    lwz r4, 0x0(r28)
    lwz r0, 0x55c(r4)
    cmpwi r0, 0x6
    bne lbl_fn_80103FD4_00001524
    lwz r0, 0x560(r4)
    cmpwi r0, 0x60
    bne lbl_fn_80103FD4_00001524
    subi r0, r3, 0x1
    stw r0, 0x804(r28)
    b lbl_fn_80103FD4_00001528
lbl_fn_80103FD4_00001524:
    stw r18, 0x804(r28)
lbl_fn_80103FD4_00001528:
    lwz r3, 0xd8(r1)
    lwz r0, 0x28(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80103FD4_000015C0
    lwz r4, 0x0(r28)
    cmpwi r4, 0x0
    beq lbl_fn_80103FD4_000015C0
    lwz r3, 0x5c(r4)
    lbz r0, 0x121(r3)
    extsb r0, r0
    slwi r3, r0, 2
    lwz r0, 0xd8(r1)
    add r15, r0, r3
    lwz r0, 0x2c(r15)
    cmpwi r0, 0x0
    ble lbl_fn_80103FD4_000015C0
    lwz r3, 0xd1c(r4)
    lwz r0, 0xd20(r4)
    cmplw r3, r0
    beq lbl_fn_80103FD4_000015B4
    stw r18, 0x6dc(r28)
    lwz r0, 0x2c(r15)
    stw r0, 0x6e0(r28)
    lwz r0, 0x54(r15)
    cmpwi r0, 0x0
    ble lbl_fn_80103FD4_000015C0
    bl fn_80680CF8
    lwz r5, 0x54(r15)
    lwz r0, 0x6e0(r28)
    divw r4, r3, r5
    mullw r4, r4, r5
    subf r3, r4, r3
    add r0, r0, r3
    stw r0, 0x6e0(r28)
    b lbl_fn_80103FD4_000015C0
lbl_fn_80103FD4_000015B4:
    lwz r3, 0x6dc(r28)
    addi r0, r3, 0x1
    stw r0, 0x6dc(r28)
lbl_fn_80103FD4_000015C0:
    addis r22, r25, 0x3
    li r27, 0x0
    li r24, 0x0
    li r23, 0x0
    b lbl_fn_80103FD4_00001F18
lbl_fn_80103FD4_000015D4:
    addis r3, r24, 0x1
    subi r0, r3, 0x3410
    lwzx r26, r25, r0
    cmpwi r26, 0x0
    beq lbl_fn_80103FD4_00001F0C
    lwz r4, 0x6e0(r28)
    cmpwi r4, 0x0
    ble lbl_fn_80103FD4_00001720
    lwz r3, 0x0(r28)
    lwz r0, 0xd1c(r3)
    cmplw r26, r0
    bne lbl_fn_80103FD4_000016C8
    lwz r5, 0x6dc(r28)
    xoris r0, r4, 0x8000
    stw r0, 0x8c(r1)
    xoris r3, r5, 0x8000
    stw r3, 0x84(r1)
    lfd f0, 0x88(r1)
    lfd f3, 0x80(r1)
    fsubs f0, f0, f30
    fsubs f3, f3, f30
    fdivs f0, f3, f0
    fcmpo cr0, f0, f19
    ble lbl_fn_80103FD4_00001654
    stw r3, 0x84(r1)
    stw r0, 0x8c(r1)
    lfd f3, 0x80(r1)
    lfd f0, 0x88(r1)
    fsubs f3, f3, f30
    fsubs f0, f0, f30
    fdivs f0, f3, f0
    b lbl_fn_80103FD4_00001658
lbl_fn_80103FD4_00001654:
    fmr f0, f19
lbl_fn_80103FD4_00001658:
    fcmpo cr0, f0, f20
    bge lbl_fn_80103FD4_000016B4
    xoris r3, r5, 0x8000
    stw r3, 0x84(r1)
    xoris r0, r4, 0x8000
    stw r0, 0x8c(r1)
    lfd f3, 0x80(r1)
    lfd f0, 0x88(r1)
    fsubs f3, f3, f30
    fsubs f0, f0, f30
    fdivs f0, f3, f0
    fcmpo cr0, f0, f19
    ble lbl_fn_80103FD4_000016AC
    stw r3, 0x84(r1)
    stw r0, 0x8c(r1)
    lfd f3, 0x80(r1)
    lfd f0, 0x88(r1)
    fsubs f3, f3, f30
    fsubs f0, f0, f30
    fdivs f0, f3, f0
    b lbl_fn_80103FD4_000016B8
lbl_fn_80103FD4_000016AC:
    fmr f0, f19
    b lbl_fn_80103FD4_000016B8
lbl_fn_80103FD4_000016B4:
    fmr f0, f20
lbl_fn_80103FD4_000016B8:
    add r16, r28, r23
    stfs f0, 0x6e4(r16)
    addi r15, r16, 0x6e4
    b lbl_fn_80103FD4_0000172C
lbl_fn_80103FD4_000016C8:
    add r16, r28, r23
    lfs f0, 0x6e4(r16)
    addi r15, r16, 0x6e4
    fcmpo cr0, f0, f19
    ble lbl_fn_80103FD4_0000172C
    fsubs f0, f0, f21
    fcmpo cr0, f0, f19
    ble lbl_fn_80103FD4_000016EC
    b lbl_fn_80103FD4_000016F0
lbl_fn_80103FD4_000016EC:
    fmr f0, f19
lbl_fn_80103FD4_000016F0:
    fcmpo cr0, f0, f20
    bge lbl_fn_80103FD4_00001714
    lfs f0, 0x0(r15)
    fsubs f0, f0, f21
    fcmpo cr0, f0, f19
    ble lbl_fn_80103FD4_0000170C
    b lbl_fn_80103FD4_00001718
lbl_fn_80103FD4_0000170C:
    fmr f0, f19
    b lbl_fn_80103FD4_00001718
lbl_fn_80103FD4_00001714:
    fmr f0, f20
lbl_fn_80103FD4_00001718:
    stfs f0, 0x0(r15)
    b lbl_fn_80103FD4_0000172C
lbl_fn_80103FD4_00001720:
    add r16, r28, r23
    stfs f19, 0x6e4(r16)
    addi r15, r16, 0x6e4
lbl_fn_80103FD4_0000172C:
    lwz r4, 0x0(r28)
    addi r3, r1, 0x2c
    lfs f0, 0x530(r26)
    lfs f3, 0x530(r4)
    lfs f5, 0x52c(r4)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r26)
    lfs f3, 0x528(r4)
    lfs f0, 0x528(r26)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x30(r1)
    stfs f0, 0x2c(r1)
    stfs f6, 0x34(r1)
    bl fn_805F9940
    stfs f1, 0x24c(r16)
    lwz r0, 0x12a4(r26)
    extrwi. r0, r0, 1, 3
    beq lbl_fn_80103FD4_00001914
    lfs f0, 0x24c(r16)
    fsubs f3, f0, f18
    fcmpo cr0, f19, f3
    ble lbl_fn_80103FD4_0000178C
    fmr f3, f19
lbl_fn_80103FD4_0000178C:
    fsubs f0, f17, f18
    fdivs f0, f3, f0
    fcmpo cr0, f20, f0
    bge lbl_fn_80103FD4_000017A0
    fmr f0, f20
lbl_fn_80103FD4_000017A0:
    lwz r3, 0x0(r28)
    fsubs f3, f20, f0
    lwz r0, 0xd1c(r3)
    cmplw r26, r0
    beq lbl_fn_80103FD4_000017C4
    lfs f0, 0x0(r15)
    fcmpo cr0, f0, f22
    ble lbl_fn_80103FD4_000017C4
    lfs f3, lbl_80881478
lbl_fn_80103FD4_000017C4:
    fcmpo cr0, f3, f19
    ble lbl_fn_80103FD4_0000190C
    fmadds f0, f23, f3, f24
    lwz r0, 0x6cc(r28)
    mr r3, r26
    fctiwz f0, f0
    stfd f0, 0x90(r1)
    lwz r15, 0x94(r1)
    add r15, r15, r0
    bl fn_80164EF4
    xoris r0, r3, 0x8000
    stw r0, 0x84(r1)
    lwz r3, lbl_8087F0A8
    lfd f0, 0x80(r1)
    lwz r0, 0x3d0(r3)
    fsubs f16, f0, f30
    lfs f3, lbl_80881494
    cmpwi r0, 0x0
    beq lbl_fn_80103FD4_00001834
    fsubs f0, f16, f25
    fcmpo cr0, f19, f0
    ble lbl_fn_80103FD4_00001820
    fmr f0, f19
lbl_fn_80103FD4_00001820:
    fdivs f0, f0, f26
    fcmpo cr0, f20, f0
    bge lbl_fn_80103FD4_00001830
    fmr f0, f20
lbl_fn_80103FD4_00001830:
    fsubs f3, f20, f0
lbl_fn_80103FD4_00001834:
    xoris r0, r15, 0x8000
    stw r0, 0x8c(r1)
    lfd f0, 0x88(r1)
    fsubs f0, f0, f30
    fmuls f0, f0, f3
    fctiwz f0, f0
    stfd f0, 0x90(r1)
    lwz r0, 0x94(r1)
    stw r0, 0x36c(r16)
    lwz r4, 0x0(r28)
    cmpwi r4, 0x0
    beq lbl_fn_80103FD4_000018D0
    lwz r0, 0x7e0(r4)
    rlwinm r0, r0, 0, 20, 20
    cmplwi r0, 0x800
    beq lbl_fn_80103FD4_000018D0
    addis r3, r25, 0x3
    lfs f3, 0x24c(r16)
    lwz r0, 0x63bc(r3)
    xoris r0, r0, 0x8000
    stw r0, 0x84(r1)
    lfd f0, 0x80(r1)
    fsubs f0, f0, f30
    fcmpo cr0, f3, f0
    blt lbl_fn_80103FD4_000018C8
    lwz r0, 0xd1c(r4)
    cmplw r0, r26
    beq lbl_fn_80103FD4_000018C8
    lwz r0, 0x137c(r4)
    rlwinm r0, r0, 0, 19, 19
    cmplwi r0, 0x1000
    beq lbl_fn_80103FD4_000018C8
    lwz r3, lbl_8087F430
    li r4, 0xa
    bl fn_80370174
    cmpwi r3, 0x0
    ble lbl_fn_80103FD4_000018D4
lbl_fn_80103FD4_000018C8:
    mr r30, r26
    b lbl_fn_80103FD4_000018D4
lbl_fn_80103FD4_000018D0:
    mr r30, r26
lbl_fn_80103FD4_000018D4:
    fcmpu cr0, f20, f16
    bne lbl_fn_80103FD4_00001918
    bl fn_80680CF8
    xoris r0, r3, 0x8000
    stw r0, 0x8c(r1)
    lfd f0, 0x88(r1)
    fsubs f0, f0, f30
    fdivs f0, f0, f27
    fmuls f0, f15, f0
    fctiwz f0, f0
    stfd f0, 0x90(r1)
    lwz r0, 0x94(r1)
    stw r0, 0x6cc(r28)
    b lbl_fn_80103FD4_00001918
lbl_fn_80103FD4_0000190C:
    stw r18, 0x36c(r16)
    b lbl_fn_80103FD4_00001918
lbl_fn_80103FD4_00001914:
    stw r18, 0x36c(r16)
lbl_fn_80103FD4_00001918:
    lwz r0, 0x12a8(r26)
    extrwi. r0, r0, 1, 15
    beq lbl_fn_80103FD4_00001960
    addis r3, r25, 0x3
    lfs f3, 0x24c(r16)
    lwz r0, 0x63bc(r3)
    xoris r0, r0, 0x8000
    stw r0, 0x84(r1)
    lfd f0, 0x80(r1)
    fsubs f0, f0, f30
    fmuls f0, f14, f0
    fcmpo cr0, f3, f0
    bge lbl_fn_80103FD4_00001960
    lwz r3, 0x138c(r26)
    lwz r0, 0x930(r28)
    cmplw r0, r3
    bge lbl_fn_80103FD4_00001960
    mr r29, r26
lbl_fn_80103FD4_00001960:
    lwz r3, 0x0(r28)
    lwz r4, 0xd2c(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80103FD4_0000198C
    lwz r4, 0x218(r4)
    cmpwi r4, 0x0
    beq lbl_fn_80103FD4_00001984
    lwz r5, 0x8c(r4)
    b lbl_fn_80103FD4_00001990
lbl_fn_80103FD4_00001984:
    li r5, 0x0
    b lbl_fn_80103FD4_00001990
lbl_fn_80103FD4_0000198C:
    li r5, 0x0
lbl_fn_80103FD4_00001990:
    cmpwi r5, 0x0
    beq lbl_fn_80103FD4_00001B50
    lwz r8, 0x38(r5)
    li r6, 0x0
    li r0, 0x0
    li r4, 0x0
    rlwinm r7, r8, 0, 29, 29
    cmplwi r7, 0x4
    beq lbl_fn_80103FD4_000019C4
    clrlwi r7, r8, 31
    cmplwi r7, 0x1
    beq lbl_fn_80103FD4_000019C4
    li r4, 0x1
lbl_fn_80103FD4_000019C4:
    cmpwi r4, 0x0
    beq lbl_fn_80103FD4_000019E0
    lwz r4, 0x7e0(r5)
    rlwinm r4, r4, 0, 26, 26
    cmplwi r4, 0x20
    beq lbl_fn_80103FD4_000019E0
    li r0, 0x1
lbl_fn_80103FD4_000019E0:
    cmpwi r0, 0x0
    beq lbl_fn_80103FD4_00001A14
    lwz r0, 0x55c(r5)
    li r4, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_80103FD4_00001A08
    lwz r0, 0x560(r5)
    cmpwi r0, 0x1c
    bne lbl_fn_80103FD4_00001A08
    li r4, 0x1
lbl_fn_80103FD4_00001A08:
    cmpwi r4, 0x0
    bne lbl_fn_80103FD4_00001A14
    li r6, 0x1
lbl_fn_80103FD4_00001A14:
    cmpwi r6, 0x0
    beq lbl_fn_80103FD4_00001B50
    lwz r0, 0x12a4(r5)
    extrwi. r0, r0, 1, 3
    beq lbl_fn_80103FD4_00001B50
    lwz r0, 0xd6c(r3)
    cmpwi r0, 0x3
    beq lbl_fn_80103FD4_00001A3C
    cmpwi r0, 0x1
    bne lbl_fn_80103FD4_00001B50
lbl_fn_80103FD4_00001A3C:
    lfd f0, 0xa0(r1)
    addi r3, r1, 0x50
    stfs f19, 0x38(r1)
    li r4, 0x79
    stfs f19, 0x3c(r1)
    stfs f0, 0x40(r1)
    psq_l f1, 0x528(r5), 0, 0
    lfs f2, 0x530(r5)
    lfs f0, 0x538(r5)
    psq_st f1, 0x0(r17), 0, 0
    fmr f1, f0
    stfs f2, 0x4c(r1)
    bl fn_805F8E70
    addi r4, r1, 0x38
    addi r3, r1, 0x50
    mr r5, r4
    bl fn_805F93C0
    lfs f5, 0x44(r1)
    addi r3, r1, 0x20
    lfs f0, 0x38(r1)
    lfs f4, 0x48(r1)
    fadds f7, f5, f0
    lfs f3, 0x3c(r1)
    lfs f0, 0x528(r26)
    fadds f6, f4, f3
    lfs f3, 0x52c(r26)
    fsubs f8, f7, f0
    lfs f0, 0x530(r26)
    fsubs f3, f6, f3
    lfs f5, 0x4c(r1)
    lfs f4, 0x40(r1)
    stfs f7, 0x44(r1)
    fadds f4, f5, f4
    stfs f6, 0x48(r1)
    fsubs f0, f4, f0
    stfs f4, 0x4c(r1)
    stfs f8, 0x20(r1)
    stfs f3, 0x24(r1)
    stfs f0, 0x28(r1)
    bl fn_805F9940
    fsubs f0, f1, f28
    fcmpo cr0, f19, f0
    ble lbl_fn_80103FD4_00001AEC
    fmr f0, f19
lbl_fn_80103FD4_00001AEC:
    fdivs f0, f0, f29
    fcmpo cr0, f20, f0
    bge lbl_fn_80103FD4_00001AFC
    fmr f0, f20
lbl_fn_80103FD4_00001AFC:
    fsubs f0, f20, f0
    fcmpo cr0, f0, f19
    ble lbl_fn_80103FD4_00001B50
    fmadds f0, f29, f0, f28
    add r4, r28, r23
    lwz r0, 0x6cc(r28)
    lwz r3, 0x36c(r4)
    fctiwz f0, f0
    stfd f0, 0x90(r1)
    lwz r5, 0x94(r1)
    add r5, r5, r0
    xoris r0, r5, 0x8000
    stw r0, 0x8c(r1)
    lfd f0, 0x88(r1)
    fsubs f0, f0, f30
    fmuls f0, f0, f20
    fctiwz f0, f0
    stfd f0, 0x98(r1)
    lwz r0, 0x9c(r1)
    add r0, r3, r0
    stw r0, 0x36c(r4)
lbl_fn_80103FD4_00001B50:
    lfs f3, 0xfb8(r26)
    lfd f0, 0xa8(r1)
    fcmpo cr0, f3, f0
    ble lbl_fn_80103FD4_00001C58
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    bne lbl_fn_80103FD4_00001C4C
    lwz r0, 0x48(r26)
    cmpwi r0, 0x2
    bne lbl_fn_80103FD4_00001B88
    add r3, r28, r23
    stw r18, 0x48c(r3)
    stw r18, 0x5ac(r3)
    b lbl_fn_80103FD4_00001C58
lbl_fn_80103FD4_00001B88:
    lwz r3, 0x638(r26)
    cmpwi r3, 0x0
    beq lbl_fn_80103FD4_00001BA4
    add r15, r28, r23
    lwz r0, 0xa8(r3)
    stw r0, 0x48c(r15)
    b lbl_fn_80103FD4_00001BAC
lbl_fn_80103FD4_00001BA4:
    add r15, r28, r23
    stw r19, 0x48c(r15)
lbl_fn_80103FD4_00001BAC:
    lwz r3, 0x0(r28)
    lwz r3, 0x648(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80103FD4_00001BF8
    lwz r0, 0x4(r3)
    cmpwi r0, 0x1
    beq lbl_fn_80103FD4_00001BF8
    add r3, r28, r23
    lwz r0, 0x48c(r3)
    xoris r0, r0, 0x8000
    stw r0, 0x84(r1)
    lfd f0, 0x80(r1)
    fsubs f3, f0, f30
    lfd f0, 0xb0(r1)
    fmuls f0, f0, f3
    fctiwz f0, f0
    stfd f0, 0x98(r1)
    lwz r0, 0x9c(r1)
    stw r0, 0x48c(r3)
lbl_fn_80103FD4_00001BF8:
    lwz r3, 0x50(r26)
    bl fn_80219558
    subi r0, r3, 0x9
    cmplwi r0, 0x1
    ble lbl_fn_80103FD4_00001C14
    cmpwi r3, 0x1
    bne lbl_fn_80103FD4_00001C44
lbl_fn_80103FD4_00001C14:
    add r3, r28, r23
    lwz r0, 0x48c(r3)
    xoris r0, r0, 0x8000
    stw r0, 0x8c(r1)
    lfd f0, 0x88(r1)
    fsubs f3, f0, f30
    lfd f0, 0xb8(r1)
    fmuls f0, f0, f3
    fctiwz f0, f0
    stfd f0, 0x98(r1)
    lwz r0, 0x9c(r1)
    stw r0, 0x48c(r3)
lbl_fn_80103FD4_00001C44:
    stw r20, 0x5ac(r15)
    b lbl_fn_80103FD4_00001C58
lbl_fn_80103FD4_00001C4C:
    add r3, r28, r23
    stw r19, 0x48c(r3)
    stw r21, 0x5ac(r3)
lbl_fn_80103FD4_00001C58:
    add r15, r28, r23
    lwz r3, 0x5ac(r15)
    cmpwi r3, 0x0
    ble lbl_fn_80103FD4_00001C70
    subi r0, r3, 0x1
    stw r0, 0x5ac(r15)
lbl_fn_80103FD4_00001C70:
    lwz r0, 0x7e0(r26)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_80103FD4_00001C8C
    add r3, r28, r23
    stw r18, 0x48c(r3)
    stw r18, 0x5ac(r15)
lbl_fn_80103FD4_00001C8C:
    lwz r0, 0x48(r26)
    cmpwi r0, 0x0
    bne lbl_fn_80103FD4_00001D54
    lwz r0, 0x12a4(r26)
    srwi. r0, r0, 31
    beq lbl_fn_80103FD4_00001D54
    li r3, 0x0
    beq lbl_fn_80103FD4_00001CBC
    lwz r0, 0xc48(r26)
    cmpwi r0, 0x0
    beq lbl_fn_80103FD4_00001CBC
    li r3, 0x1
lbl_fn_80103FD4_00001CBC:
    cmpwi r3, 0x0
    bne lbl_fn_80103FD4_00001D54
    add r4, r28, r23
    li r3, 0x0
    lwz r0, 0x48c(r4)
    li r5, 0x0
    xoris r0, r0, 0x8000
    stw r0, 0x84(r1)
    lfd f0, 0x80(r1)
    fsubs f0, f0, f30
    fmuls f0, f31, f0
    fctiwz f0, f0
    stfd f0, 0x98(r1)
    lwz r0, 0x9c(r1)
    stw r0, 0x48c(r4)
    b lbl_fn_80103FD4_00001D48
lbl_fn_80103FD4_00001CFC:
    lwz r7, 0x6d0(r28)
    lhax r6, r7, r5
    cmpwi r6, 0x0
    ble lbl_fn_80103FD4_00001D40
    lwz r4, 0x6d4(r28)
    lhax r0, r4, r5
    cmpw r27, r0
    bne lbl_fn_80103FD4_00001D40
    xoris r0, r6, 0x8000
    stw r0, 0x8c(r1)
    lfd f0, 0x88(r1)
    fsubs f0, f0, f30
    fmuls f0, f31, f0
    fctiwz f0, f0
    stfd f0, 0x98(r1)
    lwz r0, 0x9c(r1)
    sthx r0, r7, r5
lbl_fn_80103FD4_00001D40:
    addi r5, r5, 0x2
    addi r3, r3, 0x1
lbl_fn_80103FD4_00001D48:
    lwz r0, 0x6d8(r28)
    cmpw r3, r0
    blt lbl_fn_80103FD4_00001CFC
lbl_fn_80103FD4_00001D54:
    lwz r3, 0x0(r28)
    lha r0, 0xd3a(r3)
    cmpwi r0, 0x11
    bne lbl_fn_80103FD4_00001D8C
    lwz r3, 0xd24(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80103FD4_00001D8C
    lwz r0, 0xd1c(r26)
    cmplw r3, r0
    bne lbl_fn_80103FD4_00001D8C
    lfs f3, 0x24c(r15)
    lfd f0, 0xc0(r1)
    fmuls f0, f3, f0
    stfs f0, 0x24c(r15)
lbl_fn_80103FD4_00001D8C:
    stw r18, 0x80c(r15)
    lwz r4, 0x0(r28)
    lwz r0, 0x48(r4)
    cmpwi r0, 0x3
    bne lbl_fn_80103FD4_00001EF0
    lwz r3, lbl_8087EE68
    cmpwi r3, 0x0
    beq lbl_fn_80103FD4_00001DBC
    li r5, 0x0
    bl fn_800185B4
    mr r16, r3
    b lbl_fn_80103FD4_00001DC0
lbl_fn_80103FD4_00001DBC:
    li r16, 0x0
lbl_fn_80103FD4_00001DC0:
    lwz r3, lbl_8087EE68
    cmpwi r3, 0x0
    beq lbl_fn_80103FD4_00001DD8
    mr r4, r26
    bl fn_80018394
    b lbl_fn_80103FD4_00001DDC
lbl_fn_80103FD4_00001DD8:
    li r3, 0x0
lbl_fn_80103FD4_00001DDC:
    lwz r4, lbl_8087F8A0
    cmpwi r4, 0x0
    beq lbl_fn_80103FD4_00001DF0
    lwz r4, 0x48(r4)
    b lbl_fn_80103FD4_00001DF4
lbl_fn_80103FD4_00001DF0:
    li r4, 0x0
lbl_fn_80103FD4_00001DF4:
    cmpwi r16, 0x0
    beq lbl_fn_80103FD4_00001E24
    lwz r0, 0x8(r16)
    cmpwi r0, 0x0
    bne lbl_fn_80103FD4_00001E24
    lwz r0, 0xc(r16)
    cmplw r0, r26
    bne lbl_fn_80103FD4_00001E24
    lwz r3, 0x80c(r15)
    addi r0, r3, 0x7d0
    stw r0, 0x80c(r15)
    b lbl_fn_80103FD4_00001EF0
lbl_fn_80103FD4_00001E24:
    cmpwi r3, 0x0
    beq lbl_fn_80103FD4_00001E48
    lwz r3, 0x2c(r3)
    lwz r4, 0x80c(r15)
    addi r0, r3, 0x1
    mulli r0, r0, 0xc8
    add r0, r4, r0
    stw r0, 0x80c(r15)
    b lbl_fn_80103FD4_00001EF0
lbl_fn_80103FD4_00001E48:
    cmpwi r4, 0x0
    beq lbl_fn_80103FD4_00001EF0
    lwz r0, 0xfc0(r4)
    cmplw r0, r26
    beq lbl_fn_80103FD4_00001E68
    lwz r0, 0xfdc(r26)
    cmplw r4, r0
    bne lbl_fn_80103FD4_00001EF0
lbl_fn_80103FD4_00001E68:
    lwz r0, 0x12a4(r4)
    extrwi. r0, r0, 1, 3
    beq lbl_fn_80103FD4_00001EC0
    lwz r3, 0x0(r28)
    lwz r3, 0x5c(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80103FD4_00001E90
    lbz r0, 0x122(r3)
    extsb r0, r0
    b lbl_fn_80103FD4_00001E94
lbl_fn_80103FD4_00001E90:
    li r0, -0x1
lbl_fn_80103FD4_00001E94:
    cmpwi r0, 0x3
    beq lbl_fn_80103FD4_00001EC0
    cmpwi r0, 0x2
    bne lbl_fn_80103FD4_00001EB4
    lwz r3, 0x80c(r15)
    addi r0, r3, 0x46
    stw r0, 0x80c(r15)
    b lbl_fn_80103FD4_00001EC0
lbl_fn_80103FD4_00001EB4:
    lwz r3, 0x80c(r15)
    addi r0, r3, 0x23
    stw r0, 0x80c(r15)
lbl_fn_80103FD4_00001EC0:
    lwz r0, 0xfdc(r26)
    cmplw r4, r0
    bne lbl_fn_80103FD4_00001EF0
    lwz r3, 0x0(r28)
    li r4, 0x0
    lis r5, 0x400
    bl fn_801789D8
    cmpwi r3, 0x0
    beq lbl_fn_80103FD4_00001EF0
    lwz r3, 0x80c(r15)
    addi r0, r3, 0xaf
    stw r0, 0x80c(r15)
lbl_fn_80103FD4_00001EF0:
    cmpwi r29, 0x0
    beq lbl_fn_80103FD4_00001F0C
    cmplw r29, r26
    bne lbl_fn_80103FD4_00001F0C
    lwz r3, 0x80c(r15)
    addi r0, r3, 0xbb8
    stw r0, 0x80c(r15)
lbl_fn_80103FD4_00001F0C:
    addi r27, r27, 0x1
    addi r24, r24, 0x934
    addi r23, r23, 0x4
lbl_fn_80103FD4_00001F18:
    lwz r0, 0x63b0(r22)
    cmpw r27, r0
    blt lbl_fn_80103FD4_000015D4
    cmpwi r30, 0x0
    beq lbl_fn_80103FD4_00002124
    lwz r3, 0x0(r28)
    lwz r0, 0x48(r3)
    cmpwi r0, 0x2
    bne lbl_fn_80103FD4_00002124
    lwz r0, 0x137c(r3)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    bne lbl_fn_80103FD4_00002124
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80103FD4_00002124
    bl fn_80373148
    cmpwi r3, 0x0
    beq lbl_fn_80103FD4_00002124
    lwz r0, lbl_8087F8A0
    cmpwi r0, 0x0
    beq lbl_fn_80103FD4_00002124
    lwz r3, lbl_8087F430
    bl fn_80373148
    lwz r0, 0x48(r3)
    cmpwi r0, 0x2
    bne lbl_fn_80103FD4_00002124
    lwz r0, 0x4c(r3)
    cmpwi r0, 0xd
    bne lbl_fn_80103FD4_00002124
    lwz r3, lbl_8087F8A0
    li r4, 0x8
    bl fn_8011F970
    cmpwi r3, 0x0
    mr r15, r3
    beq lbl_fn_80103FD4_00002124
    lwz r7, 0x38(r3)
    li r5, 0x0
    li r0, 0x0
    li r4, 0x0
    rlwinm r6, r7, 0, 29, 29
    cmplwi r6, 0x4
    beq lbl_fn_80103FD4_00001FD4
    clrlwi r6, r7, 31
    cmplwi r6, 0x1
    beq lbl_fn_80103FD4_00001FD4
    li r4, 0x1
lbl_fn_80103FD4_00001FD4:
    cmpwi r4, 0x0
    beq lbl_fn_80103FD4_00001FF0
    lwz r4, 0x7e0(r3)
    rlwinm r4, r4, 0, 26, 26
    cmplwi r4, 0x20
    beq lbl_fn_80103FD4_00001FF0
    li r0, 0x1
lbl_fn_80103FD4_00001FF0:
    cmpwi r0, 0x0
    beq lbl_fn_80103FD4_00002024
    lwz r0, 0x55c(r3)
    li r4, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_80103FD4_00002018
    lwz r0, 0x560(r3)
    cmpwi r0, 0x1c
    bne lbl_fn_80103FD4_00002018
    li r4, 0x1
lbl_fn_80103FD4_00002018:
    cmpwi r4, 0x0
    bne lbl_fn_80103FD4_00002024
    li r5, 0x1
lbl_fn_80103FD4_00002024:
    cmpwi r5, 0x0
    beq lbl_fn_80103FD4_00002124
    lwz r0, 0x54c(r3)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    beq lbl_fn_80103FD4_00002124
    lwz r4, 0x0(r28)
    addi r3, r1, 0x14
    lfs f0, 0x530(r30)
    lfs f3, 0x530(r4)
    lfs f5, 0x52c(r4)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r30)
    lfs f3, 0x528(r4)
    lfs f0, 0x528(r30)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x18(r1)
    stfs f0, 0x14(r1)
    stfs f6, 0x1c(r1)
    bl fn_805F9920
    lwz r4, 0x0(r28)
    fmr f16, f1
    lfs f0, 0x530(r15)
    addi r3, r1, 0x8
    lfs f3, 0x530(r4)
    lfs f5, 0x52c(r4)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r15)
    lfs f3, 0x528(r4)
    lfs f0, 0x528(r15)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f6, 0x10(r1)
    bl fn_805F9920
    fmuls f0, f31, f1
    fcmpo cr0, f16, f0
    ble lbl_fn_80103FD4_00002124
    cmpwi r30, 0x0
    bne lbl_fn_80103FD4_000020D4
    li r4, -0x1
    b lbl_fn_80103FD4_00002114
lbl_fn_80103FD4_000020D4:
    addis r3, r25, 0x3
    mr r5, r25
    lwz r0, 0x63b0(r3)
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80103FD4_00002110
lbl_fn_80103FD4_000020F0:
    addis r3, r5, 0x1
    lwz r0, -0x3410(r3)
    cmplw r0, r30
    bne lbl_fn_80103FD4_00002104
    b lbl_fn_80103FD4_00002114
lbl_fn_80103FD4_00002104:
    addi r5, r5, 0x934
    addi r4, r4, 0x1
    bdnz lbl_fn_80103FD4_000020F0
lbl_fn_80103FD4_00002110:
    li r4, -0x1
lbl_fn_80103FD4_00002114:
    slwi r0, r4, 2
    li r30, 0x0
    add r3, r28, r0
    stw r18, 0x36c(r3)
lbl_fn_80103FD4_00002124:
    cmpwi cr6, r30, 0x0
    beq cr6, lbl_fn_80103FD4_0000220C
    cmpwi cr1, r29, 0x0
    beq cr1, lbl_fn_80103FD4_0000220C
    lwz r3, 0x0(r28)
    lwz r0, 0x48(r3)
    cmpwi r0, 0x2
    bne lbl_fn_80103FD4_0000220C
    lwz r0, 0x138c(r29)
    lwz r3, 0xfd8(r30)
    cmplw r3, r0
    bge lbl_fn_80103FD4_000021B4
    bne cr6, lbl_fn_80103FD4_00002160
    li r4, -0x1
    b lbl_fn_80103FD4_000021A0
lbl_fn_80103FD4_00002160:
    addis r3, r25, 0x3
    mr r5, r25
    lwz r0, 0x63b0(r3)
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80103FD4_0000219C
lbl_fn_80103FD4_0000217C:
    addis r3, r5, 0x1
    lwz r0, -0x3410(r3)
    cmplw r0, r30
    bne lbl_fn_80103FD4_00002190
    b lbl_fn_80103FD4_000021A0
lbl_fn_80103FD4_00002190:
    addi r5, r5, 0x934
    addi r4, r4, 0x1
    bdnz lbl_fn_80103FD4_0000217C
lbl_fn_80103FD4_0000219C:
    li r4, -0x1
lbl_fn_80103FD4_000021A0:
    slwi r0, r4, 2
    li r30, 0x0
    add r3, r28, r0
    stw r18, 0x36c(r3)
    b lbl_fn_80103FD4_0000220C
lbl_fn_80103FD4_000021B4:
    bne cr1, lbl_fn_80103FD4_000021C0
    li r4, -0x1
    b lbl_fn_80103FD4_00002200
lbl_fn_80103FD4_000021C0:
    addis r3, r25, 0x3
    mr r5, r25
    lwz r0, 0x63b0(r3)
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80103FD4_000021FC
lbl_fn_80103FD4_000021DC:
    addis r3, r5, 0x1
    lwz r0, -0x3410(r3)
    cmplw r0, r29
    bne lbl_fn_80103FD4_000021F0
    b lbl_fn_80103FD4_00002200
lbl_fn_80103FD4_000021F0:
    addi r5, r5, 0x934
    addi r4, r4, 0x1
    bdnz lbl_fn_80103FD4_000021DC
lbl_fn_80103FD4_000021FC:
    li r4, -0x1
lbl_fn_80103FD4_00002200:
    slwi r0, r4, 2
    add r3, r28, r0
    stw r18, 0x80c(r3)
lbl_fn_80103FD4_0000220C:
    lwz r3, 0x0(r28)
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 20, 20
    cmplwi r0, 0x800
    bne lbl_fn_80103FD4_000023BC
    cmpwi r30, 0x0
    bne lbl_fn_80103FD4_00002458
    li r4, 0x0
    bl fn_8017A5D8
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_80103FD4_00002244
    lwz r15, 0x48(r3)
    b lbl_fn_80103FD4_00002248
lbl_fn_80103FD4_00002244:
    li r15, 0x0
lbl_fn_80103FD4_00002248:
    cmpwi r15, 0x0
    beq lbl_fn_80103FD4_000023B4
    lwz r3, lbl_8087F0A8
    lwz r16, 0x0(r28)
    lwz r3, 0x3cc(r3)
    bl fn_80210220
    cmpwi r16, 0x0
    bne lbl_fn_80103FD4_00002270
    li r5, -0x1
    b lbl_fn_80103FD4_000022B0
lbl_fn_80103FD4_00002270:
    addis r3, r25, 0x3
    mr r4, r25
    lwz r0, 0x63b0(r3)
    li r5, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80103FD4_000022AC
lbl_fn_80103FD4_0000228C:
    addis r3, r4, 0x1
    lwz r0, -0x3410(r3)
    cmplw r0, r16
    bne lbl_fn_80103FD4_000022A0
    b lbl_fn_80103FD4_000022B0
lbl_fn_80103FD4_000022A0:
    addi r4, r4, 0x934
    addi r5, r5, 0x1
    bdnz lbl_fn_80103FD4_0000228C
lbl_fn_80103FD4_000022AC:
    li r5, -0x1
lbl_fn_80103FD4_000022B0:
    cmpwi r15, 0x0
    bne lbl_fn_80103FD4_000022C0
    li r4, -0x1
    b lbl_fn_80103FD4_00002300
lbl_fn_80103FD4_000022C0:
    addis r3, r25, 0x3
    mr r6, r25
    lwz r0, 0x63b0(r3)
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80103FD4_000022FC
lbl_fn_80103FD4_000022DC:
    addis r3, r6, 0x1
    lwz r0, -0x3410(r3)
    cmplw r0, r15
    bne lbl_fn_80103FD4_000022F0
    b lbl_fn_80103FD4_00002300
lbl_fn_80103FD4_000022F0:
    addi r6, r6, 0x934
    addi r4, r4, 0x1
    bdnz lbl_fn_80103FD4_000022DC
lbl_fn_80103FD4_000022FC:
    li r4, -0x1
lbl_fn_80103FD4_00002300:
    cmpwi r4, 0x0
    blt lbl_fn_80103FD4_000023B4
    cmpwi r5, 0x0
    blt lbl_fn_80103FD4_000023B4
    mulli r0, r5, 0x934
    addis r3, r25, 0x1
    add r3, r3, r0
    lwzu r7, -0x3410(r3)
    cmpwi r7, 0x0
    beq lbl_fn_80103FD4_000023B4
    lwz r9, 0x38(r7)
    li r6, 0x0
    li r0, 0x0
    li r5, 0x0
    rlwinm r8, r9, 0, 29, 29
    cmplwi r8, 0x4
    beq lbl_fn_80103FD4_00002354
    clrlwi r8, r9, 31
    cmplwi r8, 0x1
    beq lbl_fn_80103FD4_00002354
    li r5, 0x1
lbl_fn_80103FD4_00002354:
    cmpwi r5, 0x0
    beq lbl_fn_80103FD4_00002370
    lwz r5, 0x7e0(r7)
    rlwinm r5, r5, 0, 26, 26
    cmplwi r5, 0x20
    beq lbl_fn_80103FD4_00002370
    li r0, 0x1
lbl_fn_80103FD4_00002370:
    cmpwi r0, 0x0
    beq lbl_fn_80103FD4_000023A4
    lwz r0, 0x55c(r7)
    li r5, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_80103FD4_00002398
    lwz r0, 0x560(r7)
    cmpwi r0, 0x1c
    bne lbl_fn_80103FD4_00002398
    li r5, 0x1
lbl_fn_80103FD4_00002398:
    cmpwi r5, 0x0
    bne lbl_fn_80103FD4_000023A4
    li r6, 0x1
lbl_fn_80103FD4_000023A4:
    cmpwi r6, 0x0
    beq lbl_fn_80103FD4_000023B4
    li r5, 0x1
    bl fn_8010895C
lbl_fn_80103FD4_000023B4:
    stw r18, 0x930(r28)
    b lbl_fn_80103FD4_00002458
lbl_fn_80103FD4_000023BC:
    cmpwi r30, 0x0
    beq lbl_fn_80103FD4_00002458
    lwz r0, 0x54c(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80103FD4_00002458
    lwz r0, 0x48(r3)
    cmpwi r0, 0x2
    bne lbl_fn_80103FD4_000023E8
    mr r4, r30
    bl fn_80165284
lbl_fn_80103FD4_000023E8:
    lwz r3, 0x0(r28)
    li r4, 0x1
    bl fn_8017A5D8
    lwz r3, 0x0(r28)
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 20, 20
    cmplwi r0, 0x800
    bne lbl_fn_80103FD4_00002418
    lwz r4, lbl_8087F0A8
    addi r3, r30, 0x7d4
    lfs f1, 0x40c(r4)
    bl fn_8012F188
lbl_fn_80103FD4_00002418:
    lwz r0, 0x804(r28)
    cmpwi r0, 0x0
    ble lbl_fn_80103FD4_00002450
    lwz r3, 0x0(r28)
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_80103FD4_00002450
    lwz r0, 0x560(r3)
    cmpwi r0, 0x60
    bne lbl_fn_80103FD4_00002450
    stw r18, 0x804(r28)
    lwz r3, 0x0(r28)
    lwz r4, 0x564(r3)
    bl fn_8016E970
lbl_fn_80103FD4_00002450:
    lwz r0, 0xfd8(r30)
    stw r0, 0x930(r28)
lbl_fn_80103FD4_00002458:
    lwz r4, 0x0(r28)
    lwz r0, 0x48(r4)
    cmpwi r0, 0x2
    beq lbl_fn_80103FD4_000024E4
    lwz r0, 0x12a4(r4)
    srwi. r0, r0, 31
    beq lbl_fn_80103FD4_000024E4
    li r3, 0x0
    beq lbl_fn_80103FD4_0000248C
    lwz r0, 0xc48(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80103FD4_0000248C
    li r3, 0x1
lbl_fn_80103FD4_0000248C:
    cmpwi r3, 0x0
    bne lbl_fn_80103FD4_000024E4
    lfs f3, 0x248(r28)
    lfd f0, 0xc8(r1)
    fsubs f0, f3, f0
    fcmpo cr0, f0, f19
    ble lbl_fn_80103FD4_000024AC
    b lbl_fn_80103FD4_000024B0
lbl_fn_80103FD4_000024AC:
    fmr f0, f19
lbl_fn_80103FD4_000024B0:
    fcmpo cr0, f0, f20
    bge lbl_fn_80103FD4_000024D8
    lfs f3, 0x248(r28)
    lfd f0, 0xc8(r1)
    fsubs f0, f3, f0
    fcmpo cr0, f0, f19
    ble lbl_fn_80103FD4_000024D0
    b lbl_fn_80103FD4_000024DC
lbl_fn_80103FD4_000024D0:
    fmr f0, f19
    b lbl_fn_80103FD4_000024DC
lbl_fn_80103FD4_000024D8:
    fmr f0, f20
lbl_fn_80103FD4_000024DC:
    stfs f0, 0x248(r28)
    b lbl_fn_80103FD4_00002598
lbl_fn_80103FD4_000024E4:
    lwz r0, 0x48(r4)
    cmpwi r0, 0x0
    bne lbl_fn_80103FD4_0000254C
    lwz r0, 0x55c(r4)
    cmpwi r0, 0x5
    bne lbl_fn_80103FD4_0000254C
    lfs f3, 0x248(r28)
    lfd f0, 0xd0(r1)
    fsubs f0, f3, f0
    fcmpo cr0, f0, f19
    ble lbl_fn_80103FD4_00002514
    b lbl_fn_80103FD4_00002518
lbl_fn_80103FD4_00002514:
    fmr f0, f19
lbl_fn_80103FD4_00002518:
    fcmpo cr0, f0, f20
    bge lbl_fn_80103FD4_00002540
    lfs f3, 0x248(r28)
    lfd f0, 0xd0(r1)
    fsubs f0, f3, f0
    fcmpo cr0, f0, f19
    ble lbl_fn_80103FD4_00002538
    b lbl_fn_80103FD4_00002544
lbl_fn_80103FD4_00002538:
    fmr f0, f19
    b lbl_fn_80103FD4_00002544
lbl_fn_80103FD4_00002540:
    fmr f0, f20
lbl_fn_80103FD4_00002544:
    stfs f0, 0x248(r28)
    b lbl_fn_80103FD4_00002598
lbl_fn_80103FD4_0000254C:
    lfs f3, 0x248(r28)
    lfd f0, 0xc8(r1)
    fadds f0, f0, f3
    fcmpo cr0, f0, f19
    ble lbl_fn_80103FD4_00002564
    b lbl_fn_80103FD4_00002568
lbl_fn_80103FD4_00002564:
    fmr f0, f19
lbl_fn_80103FD4_00002568:
    fcmpo cr0, f0, f20
    bge lbl_fn_80103FD4_00002590
    lfs f3, 0x248(r28)
    lfd f0, 0xc8(r1)
    fadds f0, f0, f3
    fcmpo cr0, f0, f19
    ble lbl_fn_80103FD4_00002588
    b lbl_fn_80103FD4_00002594
lbl_fn_80103FD4_00002588:
    fmr f0, f19
    b lbl_fn_80103FD4_00002594
lbl_fn_80103FD4_00002590:
    fmr f0, f20
lbl_fn_80103FD4_00002594:
    stfs f0, 0x248(r28)
lbl_fn_80103FD4_00002598:
    lwz r3, 0xe4(r1)
    addi r31, r31, 0x1
    addi r14, r14, 0x78
    addi r3, r3, 0x934
    stw r3, 0xe4(r1)
lbl_fn_80103FD4_000025AC:
    lwz r3, 0xe0(r1)
    lwz r0, 0x63b0(r3)
    cmpw r31, r0
    blt lbl_fn_80103FD4_000012C0
    addi r11, r1, 0x130
    psq_l f31, 0x248(r1), 0, 0
    lfd f31, 0x240(r1)
    psq_l f30, 0x238(r1), 0, 0
    lfd f30, 0x230(r1)
    psq_l f29, 0x228(r1), 0, 0
    lfd f29, 0x220(r1)
    psq_l f28, 0x218(r1), 0, 0
    lfd f28, 0x210(r1)
    psq_l f27, 0x208(r1), 0, 0
    lfd f27, 0x200(r1)
    psq_l f26, 0x1f8(r1), 0, 0
    lfd f26, 0x1f0(r1)
    psq_l f25, 0x1e8(r1), 0, 0
    lfd f25, 0x1e0(r1)
    psq_l f24, 0x1d8(r1), 0, 0
    lfd f24, 0x1d0(r1)
    psq_l f23, 0x1c8(r1), 0, 0
    lfd f23, 0x1c0(r1)
    psq_l f22, 0x1b8(r1), 0, 0
    lfd f22, 0x1b0(r1)
    psq_l f21, 0x1a8(r1), 0, 0
    lfd f21, 0x1a0(r1)
    psq_l f20, 0x198(r1), 0, 0
    lfd f20, 0x190(r1)
    psq_l f19, 0x188(r1), 0, 0
    lfd f19, 0x180(r1)
    psq_l f18, 0x178(r1), 0, 0
    lfd f18, 0x170(r1)
    psq_l f17, 0x168(r1), 0, 0
    lfd f17, 0x160(r1)
    psq_l f16, 0x158(r1), 0, 0
    lfd f16, 0x150(r1)
    psq_l f15, 0x148(r1), 0, 0
    lfd f15, 0x140(r1)
    psq_l f14, 0x138(r1), 0, 0
    lfd f14, 0x130(r1)
    bl _restgpr_14
    lwz r0, 0x254(r1)
    mtlr r0
    addi r1, r1, 0x250
    blr
}
