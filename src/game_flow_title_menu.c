#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_20(void);
extern void _restgpr_23(void);
extern void _savegpr_20(void);
extern void _savegpr_23(void);
extern void fn_80084320(void);
extern void fn_800C3094(void);
extern void fn_800C3124(void);
extern void fn_800D2338(void);
extern void fn_800D246C(void);
extern void fn_801027A4(void);
extern void fn_801546F4(void);
extern void fn_8015495C(void);
extern void fn_8016DF3C(void);
extern void fn_8016E970(void);
extern void fn_80237654(void);
extern void fn_8023772C(void);
extern void fn_8023780C(void);
extern void fn_8023781C(void);
extern void fn_8035B694(void);
extern void fn_80365708(void);
extern void fn_80370AE4(void);
extern void fn_80374964(void);
extern void fn_8037624C(void);
extern void fn_804AE3BC(void);
extern void fn_804C566C(void);
extern void fn_804D8250(void);
extern void fn_804DCA58(void);
extern void fn_804DD1AC(void);
extern void fn_804DD578(void);
extern void fn_804E9364(void);
extern void fn_8050128C(void);
extern void fn_805012C8(void);
extern void fn_80509B50(void);
extern void fn_8050BA6C(void);
extern void fn_8050DDE0(void);
extern void fn_8050E098(void);
extern void fn_80680CF8(void);
extern void fn_806A8E40(void);
extern void fn_806A8E70(void);
extern void fn_806B0DE0(void);
extern void fn_806B0E30(void);
extern void fn_806B1250(void);

/* External data declarations */
extern u8 lbl_80759748[];
extern u8 lbl_80759E48[];
extern u8 lbl_80791570[];
extern u8 lbl_807C7030[];
extern u8 lbl_807C8B10[];

/* Small data declarations */
extern u32 lbl_8087E174;
extern u32 lbl_8087E178;
extern u32 lbl_8087F048;
extern u32 lbl_8087F5E4;
extern u32 lbl_8087F610;
extern u32 lbl_8087F628;
extern u32 lbl_8087F840;
extern u32 lbl_8087F9C0;
extern u32 lbl_80887570;
extern u32 lbl_80887588;
extern u32 lbl_808875A4;
extern u32 lbl_808875A8;
extern u32 lbl_808875F8;
extern u32 lbl_808875FC;
extern u32 lbl_80887600;

/* Function declarations */
void fn_804DD9D0(void);
void fn_804DDA08(void);
void fn_804DDD54(void);
void fn_804DDE38(void);
void fn_804DE000(void);
void fn_804DE2FC(void);
void fn_804DE564(void);
void fn_804DE888(void);
void fn_804DF120(void);
void fn_804DF314(void);

asm void fn_804DD9D0(void)
{
    nofralloc
    cmpwi r4, 0x0
    bne lbl_fn_804DD9D0_00000010
    li r3, 0x0
    blr
lbl_fn_804DD9D0_00000010:
    lwz r6, 0xd0(r4)
    extrwi r0, r6, 4, 6
    cmplw r0, r5
    bne lbl_fn_804DD9D0_00000028
    li r3, 0x0
    blr
lbl_fn_804DD9D0_00000028:
    rlwimi r6, r5, 22, 6, 9
    stw r6, 0xd0(r4)
    mr r3, r5
    blr
}

asm void fn_804DDA08(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    stw r0, 0xd4(r1)
    addi r11, r1, 0xa0
    stfd f31, 0xc0(r1)
    psq_st f31, 0xc8(r1), 0, 0
    stfd f30, 0xb0(r1)
    psq_st f30, 0xb8(r1), 0, 0
    stfd f29, 0xa0(r1)
    psq_st f29, 0xa8(r1), 0, 0
    bl _savegpr_23
    li r0, 0x0
    stw r0, 0x18(r1)
    mr r26, r3
    li r23, 0x0
    b lbl_fn_804DDA08_000000A0
lbl_fn_804DDA08_00000078:
    lwz r0, 0x18(r1)
    addi r3, r1, 0x1c
    slwi r0, r0, 2
    add. r3, r3, r0
    beq lbl_fn_804DDA08_00000090
    stw r23, 0x0(r3)
lbl_fn_804DDA08_00000090:
    lwz r3, 0x18(r1)
    addi r23, r23, 0x1
    addi r0, r3, 0x1
    stw r0, 0x18(r1)
lbl_fn_804DDA08_000000A0:
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804DDA08_000000D0
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804DDA08_000000C8
    li r3, 0x1
    b lbl_fn_804DDA08_000000E8
lbl_fn_804DDA08_000000C8:
    bl fn_806B0DE0
    b lbl_fn_804DDA08_000000E8
lbl_fn_804DDA08_000000D0:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804DDA08_000000E4
    li r3, 0x1
    b lbl_fn_804DDA08_000000E8
lbl_fn_804DDA08_000000E4:
    bl fn_806A8E70
lbl_fn_804DDA08_000000E8:
    cmpw r23, r3
    blt lbl_fn_804DDA08_00000078
    addi r23, r1, 0x18
    li r24, 0x0
    li r25, 0x0
    b lbl_fn_804DDA08_00000138
lbl_fn_804DDA08_00000100:
    bl fn_80680CF8
    addi r4, r24, 0x1
    add r5, r23, r25
    divw r0, r3, r4
    lwz r6, 0x4(r5)
    addi r24, r24, 0x1
    addi r25, r25, 0x4
    mullw r0, r0, r4
    subf r0, r0, r3
    slwi r0, r0, 2
    add r3, r23, r0
    lwz r0, 0x4(r3)
    stw r0, 0x4(r5)
    stw r6, 0x4(r3)
lbl_fn_804DDA08_00000138:
    lwz r0, 0x18(r1)
    cmpw r24, r0
    blt lbl_fn_804DDA08_00000100
    lis r3, lbl_80759748@ha
    lfs f30, lbl_808875F8
    lfd f29, lbl_80759748@l(r3)
    addi r30, r1, 0xc
    lfs f31, lbl_80887588
    addi r29, r1, 0x18
    li r27, 0x0
    li r25, 0x0
    lis r31, 0x4330
    li r24, 0x2
    li r23, 0x1
    b lbl_fn_804DDA08_00000348
lbl_fn_804DDA08_00000174:
    lwz r3, lbl_8087F628
    add r4, r29, r25
    lwz r28, 0x4(r4)
    lwz r0, 0x1f8(r3)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804DDA08_00000194
    li r4, 0x0
    b lbl_fn_804DDA08_000001B4
lbl_fn_804DDA08_00000194:
    addi r3, r1, 0x8
    bl fn_8050BA6C
    cmpw r3, r28
    ble lbl_fn_804DDA08_000001B0
    lwz r3, 0x8(r1)
    lbzx r4, r3, r28
    b lbl_fn_804DDA08_000001B4
lbl_fn_804DDA08_000001B0:
    li r4, 0xff
lbl_fn_804DDA08_000001B4:
    lwz r0, 0x5e8(r26)
    li r3, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_804DDA08_000001F8
lbl_fn_804DDA08_000001C8:
    lwz r0, 0x5e4(r26)
    add r28, r0, r3
    lwz r0, 0xd0(r28)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804DDA08_000001F0
    lbz r0, 0xcc(r28)
    cmplw r4, r0
    bne lbl_fn_804DDA08_000001F0
    b lbl_fn_804DDA08_000001FC
lbl_fn_804DDA08_000001F0:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804DDA08_000001C8
lbl_fn_804DDA08_000001F8:
    li r28, 0x0
lbl_fn_804DDA08_000001FC:
    cmpwi r28, 0x0
    beq lbl_fn_804DDA08_00000340
    lwz r0, 0x540(r26)
    cmpwi r0, 0x1
    bne lbl_fn_804DDA08_00000334
    addi r3, r1, 0xc
    li r4, 0x0
    li r5, 0xc
    bl memset
    lwz r7, lbl_8087F610
    li r6, 0x0
    li r3, 0x0
    b lbl_fn_804DDA08_0000027C
lbl_fn_804DDA08_00000230:
    cmpwi r6, 0x0
    blt lbl_fn_804DDA08_00000250
    lwz r0, 0x5e8(r7)
    cmpw r6, r0
    bge lbl_fn_804DDA08_00000250
    lwz r0, 0x5e4(r7)
    add r4, r0, r3
    b lbl_fn_804DDA08_00000254
lbl_fn_804DDA08_00000250:
    li r4, 0x0
lbl_fn_804DDA08_00000254:
    lwz r4, 0xd0(r4)
    srwi r0, r4, 31
    cmplwi r0, 0x1
    bne lbl_fn_804DDA08_00000274
    rlwinm r5, r4, 12, 26, 29
    lwzx r4, r30, r5
    addi r0, r4, 0x1
    stwx r0, r30, r5
lbl_fn_804DDA08_00000274:
    addi r6, r6, 0x1
    addi r3, r3, 0xd5c
lbl_fn_804DDA08_0000027C:
    lwz r0, 0x5e8(r7)
    cmpw r6, r0
    blt lbl_fn_804DDA08_00000230
    lwz r0, 0xd0(r28)
    extrwi. r0, r0, 4, 6
    bne lbl_fn_804DDA08_00000340
    lwz r3, 0x10(r1)
    lwz r0, 0x14(r1)
    cmpw r0, r3
    bge lbl_fn_804DDA08_000002AC
    li r0, 0x0
    b lbl_fn_804DDA08_000002F4
lbl_fn_804DDA08_000002AC:
    cmpw r3, r0
    bge lbl_fn_804DDA08_000002BC
    li r0, 0x1
    b lbl_fn_804DDA08_000002F4
lbl_fn_804DDA08_000002BC:
    bl fn_80680CF8
    xoris r0, r3, 0x8000
    stw r0, 0x64(r1)
    stw r31, 0x60(r1)
    lfd f0, 0x60(r1)
    fsubs f0, f0, f29
    fdivs f0, f0, f30
    fmuls f0, f31, f0
    fctiwz f0, f0
    stfd f0, 0x68(r1)
    lwz r3, 0x6c(r1)
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
lbl_fn_804DDA08_000002F4:
    cmplwi r0, 0x1
    bne lbl_fn_804DDA08_00000318
    lwz r3, 0x10(r1)
    addi r0, r3, 0x1
    stw r0, 0x10(r1)
    lwz r0, 0xd0(r28)
    rlwimi r0, r23, 22, 6, 9
    stw r0, 0xd0(r28)
    b lbl_fn_804DDA08_00000340
lbl_fn_804DDA08_00000318:
    lwz r3, 0x14(r1)
    addi r0, r3, 0x1
    stw r0, 0x14(r1)
    lwz r0, 0xd0(r28)
    rlwimi r0, r24, 22, 6, 9
    stw r0, 0xd0(r28)
    b lbl_fn_804DDA08_00000340
lbl_fn_804DDA08_00000334:
    lwz r0, 0xd0(r28)
    rlwimi r0, r24, 22, 6, 9
    stw r0, 0xd0(r28)
lbl_fn_804DDA08_00000340:
    addi r27, r27, 0x1
    addi r25, r25, 0x4
lbl_fn_804DDA08_00000348:
    lwz r0, 0x18(r1)
    cmpw r27, r0
    blt lbl_fn_804DDA08_00000174
    addi r11, r1, 0xa0
    psq_l f31, 0xc8(r1), 0, 0
    lfd f31, 0xc0(r1)
    psq_l f30, 0xb8(r1), 0, 0
    lfd f30, 0xb0(r1)
    psq_l f29, 0xa8(r1), 0, 0
    lfd f29, 0xa0(r1)
    bl _restgpr_23
    lwz r0, 0xd4(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

asm void fn_804DDD54(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804DDD54_000003C8
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804DDD54_000003BC
    li r31, 0x0
    b lbl_fn_804DDD54_000003E4
lbl_fn_804DDD54_000003BC:
    bl fn_806B0E30
    clrlwi r31, r3, 24
    b lbl_fn_804DDD54_000003E4
lbl_fn_804DDD54_000003C8:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804DDD54_000003DC
    li r3, 0x0
    b lbl_fn_804DDD54_000003E0
lbl_fn_804DDD54_000003DC:
    bl fn_806A8E40
lbl_fn_804DDD54_000003E0:
    clrlwi r31, r3, 24
lbl_fn_804DDD54_000003E4:
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804DDD54_00000418
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804DDD54_0000040C
    li r0, 0x0
    b lbl_fn_804DDD54_0000041C
lbl_fn_804DDD54_0000040C:
    bl fn_806B1250
    clrlwi r0, r3, 24
    b lbl_fn_804DDD54_0000041C
lbl_fn_804DDD54_00000418:
    li r0, 0x0
lbl_fn_804DDD54_0000041C:
    clrlwi r3, r31, 24
    clrlwi r0, r0, 24
    cmplw r3, r0
    bne lbl_fn_804DDD54_00000454
    bl fn_804AE3BC
    li r4, -0x1
    li r5, 0x1047
    li r6, 0x0
    li r7, 0x1
    bl fn_8050E098
    bl fn_804AE3BC
    li r4, -0x1
    li r5, 0x1
    bl fn_8050DDE0
lbl_fn_804DDD54_00000454:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804DDE38(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804DDE38_000004B4
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804DDE38_000004A8
    li r30, 0x0
    b lbl_fn_804DDE38_000004D0
lbl_fn_804DDE38_000004A8:
    bl fn_806B0E30
    clrlwi r30, r3, 24
    b lbl_fn_804DDE38_000004D0
lbl_fn_804DDE38_000004B4:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804DDE38_000004C8
    li r3, 0x0
    b lbl_fn_804DDE38_000004CC
lbl_fn_804DDE38_000004C8:
    bl fn_806A8E40
lbl_fn_804DDE38_000004CC:
    clrlwi r30, r3, 24
lbl_fn_804DDE38_000004D0:
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804DDE38_00000504
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804DDE38_000004F8
    li r0, 0x0
    b lbl_fn_804DDE38_00000508
lbl_fn_804DDE38_000004F8:
    bl fn_806B1250
    clrlwi r0, r3, 24
    b lbl_fn_804DDE38_00000508
lbl_fn_804DDE38_00000504:
    li r0, 0x0
lbl_fn_804DDE38_00000508:
    clrlwi r3, r30, 24
    clrlwi r0, r0, 24
    subf r0, r3, r0
    cntlzw r0, r0
    srwi r0, r0, 5
    cmpwi r0, 0x1
    bne lbl_fn_804DDE38_00000614
    mr r3, r31
    bl fn_804E9364
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804DDE38_00000560
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804DDE38_00000554
    li r0, 0x0
    b lbl_fn_804DDE38_0000057C
lbl_fn_804DDE38_00000554:
    bl fn_806B0E30
    clrlwi r0, r3, 24
    b lbl_fn_804DDE38_0000057C
lbl_fn_804DDE38_00000560:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804DDE38_00000574
    li r3, 0x0
    b lbl_fn_804DDE38_00000578
lbl_fn_804DDE38_00000574:
    bl fn_806A8E40
lbl_fn_804DDE38_00000578:
    clrlwi r0, r3, 24
lbl_fn_804DDE38_0000057C:
    lwz r5, 0x5e8(r31)
    clrlwi r4, r0, 24
    li r3, 0x0
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_fn_804DDE38_000005C4
lbl_fn_804DDE38_00000594:
    lwz r0, 0x5e4(r31)
    add r30, r0, r3
    lwz r0, 0xd0(r30)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804DDE38_000005BC
    lbz r0, 0xcc(r30)
    cmplw r4, r0
    bne lbl_fn_804DDE38_000005BC
    b lbl_fn_804DDE38_000005C8
lbl_fn_804DDE38_000005BC:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804DDE38_00000594
lbl_fn_804DDE38_000005C4:
    li r30, 0x0
lbl_fn_804DDE38_000005C8:
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    bl fn_804DE564
    cmpwi r3, 0x0
    bne lbl_fn_804DDE38_000005E8
    li r3, 0x0
    b lbl_fn_804DDE38_00000618
lbl_fn_804DDE38_000005E8:
    lwz r0, 0xd0(r30)
    mr r3, r31
    mr r4, r30
    li r5, 0x2
    rlwinm r0, r0, 0, 22, 19
    stw r0, 0xd0(r30)
    bl fn_804D8250
    bl fn_804AE3BC
    li r4, -0x1
    li r5, 0x1
    bl fn_8050DDE0
lbl_fn_804DDE38_00000614:
    li r3, 0x1
lbl_fn_804DDE38_00000618:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804DE000(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804DE000_00000680
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804DE000_00000674
    li r30, 0x0
    b lbl_fn_804DE000_0000069C
lbl_fn_804DE000_00000674:
    bl fn_806B0E30
    clrlwi r30, r3, 24
    b lbl_fn_804DE000_0000069C
lbl_fn_804DE000_00000680:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804DE000_00000694
    li r3, 0x0
    b lbl_fn_804DE000_00000698
lbl_fn_804DE000_00000694:
    bl fn_806A8E40
lbl_fn_804DE000_00000698:
    clrlwi r30, r3, 24
lbl_fn_804DE000_0000069C:
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804DE000_000006D0
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804DE000_000006C4
    li r0, 0x0
    b lbl_fn_804DE000_000006D4
lbl_fn_804DE000_000006C4:
    bl fn_806B1250
    clrlwi r0, r3, 24
    b lbl_fn_804DE000_000006D4
lbl_fn_804DE000_000006D0:
    li r0, 0x0
lbl_fn_804DE000_000006D4:
    clrlwi r3, r30, 24
    clrlwi r0, r0, 24
    subf r0, r3, r0
    cntlzw r0, r0
    srwi r0, r0, 5
    cmpwi r0, 0x1
    bne lbl_fn_804DE000_0000090C
    mr r3, r29
    bl fn_804E9364
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804DE000_0000072C
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804DE000_00000720
    li r0, 0x0
    b lbl_fn_804DE000_00000748
lbl_fn_804DE000_00000720:
    bl fn_806B0E30
    clrlwi r0, r3, 24
    b lbl_fn_804DE000_00000748
lbl_fn_804DE000_0000072C:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804DE000_00000740
    li r3, 0x0
    b lbl_fn_804DE000_00000744
lbl_fn_804DE000_00000740:
    bl fn_806A8E40
lbl_fn_804DE000_00000744:
    clrlwi r0, r3, 24
lbl_fn_804DE000_00000748:
    lwz r5, 0x5e8(r29)
    clrlwi r4, r0, 24
    li r3, 0x0
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_fn_804DE000_00000790
lbl_fn_804DE000_00000760:
    lwz r0, 0x5e4(r29)
    add r30, r0, r3
    lwz r0, 0xd0(r30)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804DE000_00000788
    lbz r0, 0xcc(r30)
    cmplw r4, r0
    bne lbl_fn_804DE000_00000788
    b lbl_fn_804DE000_00000794
lbl_fn_804DE000_00000788:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804DE000_00000760
lbl_fn_804DE000_00000790:
    li r30, 0x0
lbl_fn_804DE000_00000794:
    li r5, 0x0
    li r3, 0x0
    b lbl_fn_804DE000_000007C0
lbl_fn_804DE000_000007A0:
    lwz r0, 0x5e4(r29)
    addi r5, r5, 0x1
    add r4, r0, r3
    addi r3, r3, 0xd5c
    lwz r0, 0xd0(r4)
    stw r0, 0xd4(r4)
    lwz r0, 0xb0(r4)
    stw r0, 0xd8(r4)
lbl_fn_804DE000_000007C0:
    lwz r0, 0x5e8(r29)
    cmplw r5, r0
    blt lbl_fn_804DE000_000007A0
    mr r3, r29
    bl fn_804DDA08
    li r31, 0x0
    b lbl_fn_804DE000_00000894
lbl_fn_804DE000_000007DC:
    lwz r3, lbl_8087F628
    lwz r0, 0x1f8(r3)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804DE000_000007F4
    li r4, 0x0
    b lbl_fn_804DE000_00000814
lbl_fn_804DE000_000007F4:
    addi r3, r1, 0x8
    bl fn_8050BA6C
    cmpw r3, r31
    ble lbl_fn_804DE000_00000810
    lwz r3, 0x8(r1)
    lbzx r4, r3, r31
    b lbl_fn_804DE000_00000814
lbl_fn_804DE000_00000810:
    li r4, 0xff
lbl_fn_804DE000_00000814:
    lwz r0, 0x5e8(r29)
    li r3, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_804DE000_00000858
lbl_fn_804DE000_00000828:
    lwz r0, 0x5e4(r29)
    add r5, r0, r3
    lwz r0, 0xd0(r5)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804DE000_00000850
    lbz r0, 0xcc(r5)
    cmplw r4, r0
    bne lbl_fn_804DE000_00000850
    b lbl_fn_804DE000_0000085C
lbl_fn_804DE000_00000850:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804DE000_00000828
lbl_fn_804DE000_00000858:
    li r5, 0x0
lbl_fn_804DE000_0000085C:
    cmpwi r5, 0x0
    beq lbl_fn_804DE000_00000890
    lwz r0, 0xd0(r5)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804DE000_00000890
    lwz r0, 0xb0(r5)
    cmpwi r0, -0x1
    bne lbl_fn_804DE000_00000890
    lbz r4, 0xcc(r5)
    mr r3, r29
    li r5, 0x0
    bl fn_804DD578
lbl_fn_804DE000_00000890:
    addi r31, r31, 0x1
lbl_fn_804DE000_00000894:
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804DE000_000008C4
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804DE000_000008BC
    li r3, 0x1
    b lbl_fn_804DE000_000008DC
lbl_fn_804DE000_000008BC:
    bl fn_806B0DE0
    b lbl_fn_804DE000_000008DC
lbl_fn_804DE000_000008C4:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804DE000_000008D8
    li r3, 0x1
    b lbl_fn_804DE000_000008DC
lbl_fn_804DE000_000008D8:
    bl fn_806A8E70
lbl_fn_804DE000_000008DC:
    cmpw r31, r3
    blt lbl_fn_804DE000_000007DC
    mr r3, r29
    bl fn_804DCA58
    mr r3, r29
    mr r4, r30
    li r5, 0x2
    bl fn_804D8250
    bl fn_804AE3BC
    li r4, -0x1
    li r5, 0x1
    bl fn_8050DDE0
lbl_fn_804DE000_0000090C:
    lwz r31, 0x1c(r1)
    li r3, 0x1
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804DE2FC(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r4
    stw r30, 0x28(r1)
    mr r30, r3
    stw r29, 0x24(r1)
    lwz r5, lbl_8087F628
    addis r3, r5, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804DE2FC_00000980
    lwz r0, 0x1f8(r5)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804DE2FC_00000974
    li r29, 0x0
    b lbl_fn_804DE2FC_0000099C
lbl_fn_804DE2FC_00000974:
    bl fn_806B0E30
    clrlwi r29, r3, 24
    b lbl_fn_804DE2FC_0000099C
lbl_fn_804DE2FC_00000980:
    lwz r0, 0x1f8(r5)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804DE2FC_00000994
    li r3, 0x0
    b lbl_fn_804DE2FC_00000998
lbl_fn_804DE2FC_00000994:
    bl fn_806A8E40
lbl_fn_804DE2FC_00000998:
    clrlwi r29, r3, 24
lbl_fn_804DE2FC_0000099C:
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804DE2FC_000009D0
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804DE2FC_000009C4
    li r0, 0x0
    b lbl_fn_804DE2FC_000009D4
lbl_fn_804DE2FC_000009C4:
    bl fn_806B1250
    clrlwi r0, r3, 24
    b lbl_fn_804DE2FC_000009D4
lbl_fn_804DE2FC_000009D0:
    li r0, 0x0
lbl_fn_804DE2FC_000009D4:
    clrlwi r3, r29, 24
    clrlwi r0, r0, 24
    subf r0, r3, r0
    cntlzw r0, r0
    srwi r0, r0, 5
    cmpwi r0, 0x1
    bne lbl_fn_804DE2FC_00000B74
    cmpwi r31, 0x2
    beq lbl_fn_804DE2FC_00000AB0
    cmpwi r31, 0x3
    beq lbl_fn_804DE2FC_00000AB0
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0xc
    bl memset
    lwz r8, lbl_8087F610
    addi r5, r1, 0x8
    li r7, 0x0
    li r3, 0x0
    b lbl_fn_804DE2FC_00000A70
lbl_fn_804DE2FC_00000A24:
    cmpwi r7, 0x0
    blt lbl_fn_804DE2FC_00000A44
    lwz r0, 0x5e8(r8)
    cmpw r7, r0
    bge lbl_fn_804DE2FC_00000A44
    lwz r0, 0x5e4(r8)
    add r4, r0, r3
    b lbl_fn_804DE2FC_00000A48
lbl_fn_804DE2FC_00000A44:
    li r4, 0x0
lbl_fn_804DE2FC_00000A48:
    lwz r4, 0xd0(r4)
    srwi r0, r4, 31
    cmplwi r0, 0x1
    bne lbl_fn_804DE2FC_00000A68
    rlwinm r6, r4, 12, 26, 29
    lwzx r4, r5, r6
    addi r0, r4, 0x1
    stwx r0, r5, r6
lbl_fn_804DE2FC_00000A68:
    addi r7, r7, 0x1
    addi r3, r3, 0xd5c
lbl_fn_804DE2FC_00000A70:
    lwz r0, 0x5e8(r8)
    cmpw r7, r0
    blt lbl_fn_804DE2FC_00000A24
    lwz r0, 0xc(r1)
    cmpwi r0, 0x0
    beq lbl_fn_804DE2FC_00000A94
    lwz r0, 0x10(r1)
    cmpwi r0, 0x0
    bne lbl_fn_804DE2FC_00000A9C
lbl_fn_804DE2FC_00000A94:
    li r0, 0x0
    b lbl_fn_804DE2FC_00000AA0
lbl_fn_804DE2FC_00000A9C:
    li r0, 0x1
lbl_fn_804DE2FC_00000AA0:
    cmpwi r0, 0x0
    bne lbl_fn_804DE2FC_00000AB0
    li r3, 0x0
    b lbl_fn_804DE2FC_00000B78
lbl_fn_804DE2FC_00000AB0:
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804DE2FC_00000AE4
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804DE2FC_00000AD8
    li r0, 0x0
    b lbl_fn_804DE2FC_00000B00
lbl_fn_804DE2FC_00000AD8:
    bl fn_806B0E30
    clrlwi r0, r3, 24
    b lbl_fn_804DE2FC_00000B00
lbl_fn_804DE2FC_00000AE4:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804DE2FC_00000AF8
    li r3, 0x0
    b lbl_fn_804DE2FC_00000AFC
lbl_fn_804DE2FC_00000AF8:
    bl fn_806A8E40
lbl_fn_804DE2FC_00000AFC:
    clrlwi r0, r3, 24
lbl_fn_804DE2FC_00000B00:
    lwz r5, 0x5e8(r30)
    clrlwi r4, r0, 24
    li r3, 0x0
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_fn_804DE2FC_00000B44
lbl_fn_804DE2FC_00000B18:
    lwz r0, 0x5e4(r30)
    add r5, r0, r3
    lwz r0, 0xd0(r5)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804DE2FC_00000B3C
    lbz r0, 0xcc(r5)
    cmplw r4, r0
    beq lbl_fn_804DE2FC_00000B44
lbl_fn_804DE2FC_00000B3C:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804DE2FC_00000B18
lbl_fn_804DE2FC_00000B44:
    mr r3, r30
    li r4, 0x0
    li r5, 0x0
    bl fn_804DE564
    cmpwi r3, 0x0
    bne lbl_fn_804DE2FC_00000B64
    li r3, 0x0
    b lbl_fn_804DE2FC_00000B78
lbl_fn_804DE2FC_00000B64:
    lwz r3, lbl_8087F628
    li r6, 0x0
    li r5, 0x0
    bl fn_80509B50
lbl_fn_804DE2FC_00000B74:
    li r3, 0x1
lbl_fn_804DE2FC_00000B78:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_804DE564(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stmw r23, 0x1c(r1)
    mr r23, r3
    mr r24, r4
    mr r25, r5
    lwz r6, lbl_8087F628
    addis r3, r6, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804DE564_00000BE4
    lwz r0, 0x1f8(r6)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804DE564_00000BD8
    li r26, 0x0
    b lbl_fn_804DE564_00000C00
lbl_fn_804DE564_00000BD8:
    bl fn_806B0E30
    clrlwi r26, r3, 24
    b lbl_fn_804DE564_00000C00
lbl_fn_804DE564_00000BE4:
    lwz r0, 0x1f8(r6)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804DE564_00000BF8
    li r3, 0x0
    b lbl_fn_804DE564_00000BFC
lbl_fn_804DE564_00000BF8:
    bl fn_806A8E40
lbl_fn_804DE564_00000BFC:
    clrlwi r26, r3, 24
lbl_fn_804DE564_00000C00:
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804DE564_00000C34
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804DE564_00000C28
    li r0, 0x0
    b lbl_fn_804DE564_00000C38
lbl_fn_804DE564_00000C28:
    bl fn_806B1250
    clrlwi r0, r3, 24
    b lbl_fn_804DE564_00000C38
lbl_fn_804DE564_00000C34:
    li r0, 0x0
lbl_fn_804DE564_00000C38:
    clrlwi r3, r26, 24
    clrlwi r0, r0, 24
    cmplw r3, r0
    beq lbl_fn_804DE564_00000C50
    li r3, 0x0
    b lbl_fn_804DE564_00000EA4
lbl_fn_804DE564_00000C50:
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804DE564_00000C84
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804DE564_00000C78
    li r0, 0x0
    b lbl_fn_804DE564_00000CA0
lbl_fn_804DE564_00000C78:
    bl fn_806B0E30
    clrlwi r0, r3, 24
    b lbl_fn_804DE564_00000CA0
lbl_fn_804DE564_00000C84:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804DE564_00000C98
    li r3, 0x0
    b lbl_fn_804DE564_00000C9C
lbl_fn_804DE564_00000C98:
    bl fn_806A8E40
lbl_fn_804DE564_00000C9C:
    clrlwi r0, r3, 24
lbl_fn_804DE564_00000CA0:
    lwz r5, 0x5e8(r23)
    clrlwi r4, r0, 24
    li r3, 0x0
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_fn_804DE564_00000CE8
lbl_fn_804DE564_00000CB8:
    lwz r0, 0x5e4(r23)
    add r30, r0, r3
    lwz r0, 0xd0(r30)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804DE564_00000CE0
    lbz r0, 0xcc(r30)
    cmplw r4, r0
    bne lbl_fn_804DE564_00000CE0
    b lbl_fn_804DE564_00000CEC
lbl_fn_804DE564_00000CE0:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804DE564_00000CB8
lbl_fn_804DE564_00000CE8:
    li r30, 0x0
lbl_fn_804DE564_00000CEC:
    cmpwi r30, 0x0
    bne lbl_fn_804DE564_00000CFC
    li r3, 0x0
    b lbl_fn_804DE564_00000EA4
lbl_fn_804DE564_00000CFC:
    lwz r4, lbl_8087F628
    li r29, 0x0
    li r28, 0x1
    li r27, 0x0
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804DE564_00000D3C
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804DE564_00000D30
    li r3, 0x1
    b lbl_fn_804DE564_00000D34
lbl_fn_804DE564_00000D30:
    bl fn_806B0DE0
lbl_fn_804DE564_00000D34:
    mr r31, r3
    b lbl_fn_804DE564_00000D58
lbl_fn_804DE564_00000D3C:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804DE564_00000D50
    li r3, 0x1
    b lbl_fn_804DE564_00000D54
lbl_fn_804DE564_00000D50:
    bl fn_806A8E70
lbl_fn_804DE564_00000D54:
    mr r31, r3
lbl_fn_804DE564_00000D58:
    li r26, 0x0
    b lbl_fn_804DE564_00000E20
lbl_fn_804DE564_00000D60:
    lwz r3, lbl_8087F628
    lwz r0, 0x1f8(r3)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804DE564_00000D78
    li r4, 0x0
    b lbl_fn_804DE564_00000D98
lbl_fn_804DE564_00000D78:
    addi r3, r1, 0x8
    bl fn_8050BA6C
    cmpw r3, r26
    ble lbl_fn_804DE564_00000D94
    lwz r3, 0x8(r1)
    lbzx r4, r3, r26
    b lbl_fn_804DE564_00000D98
lbl_fn_804DE564_00000D94:
    li r4, 0xff
lbl_fn_804DE564_00000D98:
    lbz r0, 0xcc(r30)
    cmpw r0, r4
    beq lbl_fn_804DE564_00000E1C
    lwz r0, 0x5e8(r23)
    li r3, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_804DE564_00000DE8
lbl_fn_804DE564_00000DB8:
    lwz r0, 0x5e4(r23)
    add r5, r0, r3
    lwz r0, 0xd0(r5)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804DE564_00000DE0
    lbz r0, 0xcc(r5)
    cmplw r4, r0
    bne lbl_fn_804DE564_00000DE0
    b lbl_fn_804DE564_00000DEC
lbl_fn_804DE564_00000DE0:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804DE564_00000DB8
lbl_fn_804DE564_00000DE8:
    li r5, 0x0
lbl_fn_804DE564_00000DEC:
    cmpwi r5, 0x0
    beq lbl_fn_804DE564_00000E1C
    lbz r0, 0xcc(r5)
    li r29, 0x1
    lbz r3, 0xd53(r30)
    slw r0, r29, r0
    and. r0, r3, r0
    bne lbl_fn_804DE564_00000E10
    li r28, 0x0
lbl_fn_804DE564_00000E10:
    cmpwi r0, 0x0
    beq lbl_fn_804DE564_00000E1C
    addi r27, r27, 0x1
lbl_fn_804DE564_00000E1C:
    addi r26, r26, 0x1
lbl_fn_804DE564_00000E20:
    cmpw r26, r31
    blt lbl_fn_804DE564_00000D60
    cmpwi r24, 0x0
    beq lbl_fn_804DE564_00000E34
    stw r27, 0x0(r24)
lbl_fn_804DE564_00000E34:
    cmpwi r25, 0x0
    beq lbl_fn_804DE564_00000E40
    stb r29, 0x0(r25)
lbl_fn_804DE564_00000E40:
    cmplwi r28, 0x1
    bne lbl_fn_804DE564_00000EA0
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804DE564_00000E78
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804DE564_00000E70
    li r3, 0x1
    b lbl_fn_804DE564_00000E90
lbl_fn_804DE564_00000E70:
    bl fn_806B0DE0
    b lbl_fn_804DE564_00000E90
lbl_fn_804DE564_00000E78:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804DE564_00000E8C
    li r3, 0x1
    b lbl_fn_804DE564_00000E90
lbl_fn_804DE564_00000E8C:
    bl fn_806A8E70
lbl_fn_804DE564_00000E90:
    addi r0, r27, 0x1
    cmpw r0, r3
    beq lbl_fn_804DE564_00000EA0
    li r28, 0x0
lbl_fn_804DE564_00000EA0:
    mr r3, r28
lbl_fn_804DE564_00000EA4:
    lmw r23, 0x1c(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_804DE888(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r11, r1, 0x50
    stfd f31, 0x60(r1)
    psq_st f31, 0x68(r1), 0, 0
    stfd f30, 0x50(r1)
    psq_st f30, 0x58(r1), 0, 0
    bl _savegpr_20
    lwz r4, 0x540(r3)
    lis r5, lbl_807C8B10@ha
    lwz r0, 0x560(r3)
    addi r5, r5, lbl_807C8B10@l
    mulli r6, r4, 0x168
    mr r24, r3
    mulli r4, r0, 0x24
    add r0, r5, r6
    add r4, r4, r0
    bl fn_80365708
    stw r3, 0x5e0(r24)
    li r4, 0x0
    bl fn_80374964
    lwz r3, 0x5e0(r24)
    li r4, 0x0
    bl fn_8037624C
    lis r23, 0x6666
    lwz r6, 0x598(r24)
    addi r0, r23, 0x6667
    lwz r3, 0x5e0(r24)
    mulhw r0, r0, r6
    li r4, 0xfc
    srawi r0, r0, 2
    srwi r5, r0, 31
    add r0, r0, r5
    mulli r0, r0, 0xa
    subf r5, r0, r6
    bl fn_80370AE4
    lwz r0, 0x598(r24)
    addi r7, r23, 0x6667
    lwz r3, 0x5e0(r24)
    li r4, 0xfd
    mulhw r0, r7, r0
    srawi r0, r0, 2
    srwi r5, r0, 31
    add r6, r0, r5
    mulhw r0, r7, r6
    srawi r0, r0, 2
    srwi r5, r0, 31
    add r0, r0, r5
    mulli r0, r0, 0xa
    subf r5, r0, r6
    bl fn_80370AE4
    lis r3, 0x51ec
    lwz r4, 0x598(r24)
    subi r3, r3, 0x7ae1
    addi r0, r23, 0x6667
    mulhw r5, r3, r4
    lwz r3, 0x5e0(r24)
    li r4, 0xfe
    srawi r5, r5, 5
    srwi r6, r5, 31
    add r6, r5, r6
    mulhw r0, r0, r6
    srawi r0, r0, 2
    srwi r5, r0, 31
    add r0, r0, r5
    mulli r0, r0, 0xa
    subf r5, r0, r6
    bl fn_80370AE4
    lwz r3, 0x5e0(r24)
    li r4, 0xff
    li r5, 0x0
    bl fn_80370AE4
    lwz r4, lbl_8087F9C0
    li r23, 0x0
    addis r3, r24, 0x1
    li r6, 0x5
    stw r23, 0x7c(r4)
    li r0, -0x1
    li r4, -0x1
    li r5, 0x20
    stw r23, 0x60c(r24)
    stw r23, 0x2b80(r24)
    stw r6, 0x2b84(r24)
    stw r23, 0x2b88(r24)
    stw r0, -0x6994(r3)
    stw r0, -0x6990(r3)
    stw r23, -0x698c(r3)
    stw r23, -0x6988(r3)
    stw r23, -0x6984(r3)
    stw r23, -0x6980(r3)
    stw r23, -0x697c(r3)
    stw r23, -0x6978(r3)
    stw r23, -0x6974(r3)
    stw r23, -0x6970(r3)
    subi r3, r3, 0x696c
    bl memset
    mr r3, r24
    bl fn_804C566C
    lwz r3, lbl_8087F5E4
    li r4, 0x1
    bl fn_800D246C
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804DE888_00001080
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804DE888_00001074
    b lbl_fn_804DE888_00001084
lbl_fn_804DE888_00001074:
    bl fn_806B1250
    clrlwi r23, r3, 24
    b lbl_fn_804DE888_00001084
lbl_fn_804DE888_00001080:
    li r23, 0x0
lbl_fn_804DE888_00001084:
    addis r4, r24, 0x1
    li r3, 0x1
    li r0, 0x0
    stb r23, -0x6686(r4)
    li r26, 0x0
    stw r3, 0x604(r24)
    stw r3, -0x689c(r4)
    stw r0, -0x6898(r4)
lbl_fn_804DE888_000010A4:
    add r5, r24, r26
    addis r3, r5, 0x1
    lbz r0, -0x667c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804DE888_000011B4
    lwz r6, 0x5e8(r24)
    clrlwi r4, r0, 28
    li r3, 0x0
    mtctr r6
    cmpwi r6, 0x0
    ble lbl_fn_804DE888_00001100
lbl_fn_804DE888_000010D0:
    lwz r0, 0x5e4(r24)
    add r7, r0, r3
    lwz r0, 0xd0(r7)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804DE888_000010F8
    lbz r0, 0xcc(r7)
    cmplw r4, r0
    bne lbl_fn_804DE888_000010F8
    b lbl_fn_804DE888_00001104
lbl_fn_804DE888_000010F8:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804DE888_000010D0
lbl_fn_804DE888_00001100:
    li r7, 0x0
lbl_fn_804DE888_00001104:
    cmpwi r7, 0x0
    beq lbl_fn_804DE888_000011B4
    li r7, 0x0
    li r3, 0x0
    mtctr r6
    cmpwi r6, 0x0
    ble lbl_fn_804DE888_000011B4
lbl_fn_804DE888_00001120:
    cmpwi r7, 0x0
    blt lbl_fn_804DE888_0000113C
    cmpw r7, r6
    bge lbl_fn_804DE888_0000113C
    lwz r0, 0x5e4(r24)
    add r23, r0, r3
    b lbl_fn_804DE888_00001140
lbl_fn_804DE888_0000113C:
    li r23, 0x0
lbl_fn_804DE888_00001140:
    lwz r4, 0xd0(r23)
    srwi. r0, r4, 31
    bne lbl_fn_804DE888_000011A8
    oris r0, r4, 0x8000
    stw r0, 0xd0(r23)
    addis r4, r5, 0x1
    lbz r0, -0x667c(r4)
    stb r0, 0xcc(r23)
    lbz r0, -0x6674(r4)
    extsb r0, r0
    stw r0, 0xb0(r23)
    lwz r3, lbl_8087F610
    lbz r4, -0x667c(r4)
    bl fn_804DD1AC
    lwz r0, 0xd0(r23)
    rlwimi r0, r3, 22, 6, 9
    stw r0, 0xd0(r23)
    li r3, 0x3c
    lwz r0, 0x540(r24)
    cmpwi r0, 0x2
    bne lbl_fn_804DE888_00001198
    li r3, 0x50
lbl_fn_804DE888_00001198:
    lwz r0, 0xd0(r23)
    rlwimi r0, r3, 14, 10, 17
    stw r0, 0xd0(r23)
    b lbl_fn_804DE888_000011B4
lbl_fn_804DE888_000011A8:
    addi r7, r7, 0x1
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804DE888_00001120
lbl_fn_804DE888_000011B4:
    addi r26, r26, 0x1
    cmpwi r26, 0x8
    blt lbl_fn_804DE888_000010A4
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804DE888_000011F4
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804DE888_000011E8
    li r0, 0x0
    b lbl_fn_804DE888_00001210
lbl_fn_804DE888_000011E8:
    bl fn_806B0E30
    clrlwi r0, r3, 24
    b lbl_fn_804DE888_00001210
lbl_fn_804DE888_000011F4:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804DE888_00001208
    li r3, 0x0
    b lbl_fn_804DE888_0000120C
lbl_fn_804DE888_00001208:
    bl fn_806A8E40
lbl_fn_804DE888_0000120C:
    clrlwi r0, r3, 24
lbl_fn_804DE888_00001210:
    lwz r5, 0x5e8(r24)
    clrlwi r4, r0, 24
    li r3, 0x0
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_fn_804DE888_00001258
lbl_fn_804DE888_00001228:
    lwz r0, 0x5e4(r24)
    add r26, r0, r3
    lwz r0, 0xd0(r26)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804DE888_00001250
    lbz r0, 0xcc(r26)
    cmplw r4, r0
    bne lbl_fn_804DE888_00001250
    b lbl_fn_804DE888_0000125C
lbl_fn_804DE888_00001250:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804DE888_00001228
lbl_fn_804DE888_00001258:
    li r26, 0x0
lbl_fn_804DE888_0000125C:
    lis r30, lbl_80791570@ha
    lis r27, lbl_807C7030@ha
    lfs f30, lbl_808875FC
    addi r30, r30, lbl_80791570@l
    lfs f31, lbl_80887600
    addi r28, r1, 0x8
    addi r27, r27, lbl_807C7030@l
    li r25, 0x0
    li r23, 0x0
    li r31, 0x0
    b lbl_fn_804DE888_00001530
lbl_fn_804DE888_00001288:
    cmpwi r25, 0x0
    blt lbl_fn_804DE888_000012A8
    lwz r0, 0x5e8(r24)
    cmpw r25, r0
    bge lbl_fn_804DE888_000012A8
    lwz r0, 0x5e4(r24)
    add r29, r0, r23
    b lbl_fn_804DE888_000012AC
lbl_fn_804DE888_000012A8:
    li r29, 0x0
lbl_fn_804DE888_000012AC:
    lwz r0, 0xd0(r29)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804DE888_00001528
    addi r3, r29, 0xdc
    li r4, 0x0
    bl fn_8050128C
    stw r31, 0xe0(r29)
    cmplw r29, r26
    stw r31, 0xe4(r29)
    lwz r0, 0xd0(r29)
    rlwinm r0, r0, 0, 6, 2
    rlwinm r0, r0, 0, 20, 17
    stw r0, 0xd0(r29)
    beq lbl_fn_804DE888_00001528
    lwz r0, 0x0(r29)
    cmpwi r0, 0x0
    bne lbl_fn_804DE888_00001528
    stw r29, 0x5fc(r24)
    lwz r20, lbl_8087F610
    lwz r3, 0xb0(r29)
    cmpwi r20, 0x0
    addis r22, r3, 0xb
    subi r22, r22, 0x51a0
    beq lbl_fn_804DE888_00001390
    li r3, 0x14b8
    li r4, 0x3
    la r5, lbl_8087E178
    la r6, lbl_8087E174
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r21, r3
    beq lbl_fn_804DE888_00001394
    mr r4, r20
    mr r5, r22
    bl fn_8035B694
    stw r30, 0x0(r21)
    stw r31, 0x14b0(r21)
    stw r31, 0x14b4(r21)
    lwz r0, 0x12a4(r21)
    ori r0, r0, 0x4
    stw r0, 0x12a4(r21)
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_804DE888_0000136C
    mr r4, r21
    bl fn_801027A4
lbl_fn_804DE888_0000136C:
    stfs f30, 0x8(r1)
    fmr f2, f31
    stfs f30, 0xc(r1)
    stw r31, 0x9f8(r21)
    psq_l f1, 0x0(r28), 0, 0
    psq_st f1, 0x528(r21), 0, 0
    stfs f2, 0x530(r21)
    stfs f31, 0x10(r1)
    b lbl_fn_804DE888_00001394
lbl_fn_804DE888_00001390:
    li r21, 0x0
lbl_fn_804DE888_00001394:
    stw r21, 0x0(r29)
    lwz r0, 0xd0(r29)
    extrwi. r3, r0, 4, 6
    bne lbl_fn_804DE888_000013AC
    li r3, 0x0
    b lbl_fn_804DE888_00001728
lbl_fn_804DE888_000013AC:
    lwz r0, 0x540(r24)
    cmpwi r0, 0x1
    bne lbl_fn_804DE888_000013E8
    lwz r0, 0xd0(r26)
    extrwi r0, r0, 4, 6
    cmplw r3, r0
    bne lbl_fn_804DE888_000013D8
    lwz r3, 0x0(r29)
    li r4, 0x3
    bl fn_8016DF3C
    b lbl_fn_804DE888_0000140C
lbl_fn_804DE888_000013D8:
    lwz r3, 0x0(r29)
    li r4, 0x2
    bl fn_8016DF3C
    b lbl_fn_804DE888_0000140C
lbl_fn_804DE888_000013E8:
    cmpwi r0, 0x0
    bne lbl_fn_804DE888_00001400
    lwz r3, 0x0(r29)
    li r4, 0x2
    bl fn_8016DF3C
    b lbl_fn_804DE888_0000140C
lbl_fn_804DE888_00001400:
    lwz r3, 0x0(r29)
    li r4, 0x3
    bl fn_8016DF3C
lbl_fn_804DE888_0000140C:
    lwz r0, 0x0(r29)
    cmpwi r0, 0x0
    bne lbl_fn_804DE888_00001420
    li r3, 0x0
    b lbl_fn_804DE888_00001728
lbl_fn_804DE888_00001420:
    lwz r0, 0x5e4(r24)
    add. r3, r0, r23
    beq lbl_fn_804DE888_00001448
    lbz r0, 0xcc(r3)
    cmplwi r0, 0xff
    beq lbl_fn_804DE888_00001448
    rlwinm. r0, r0, 0, 24, 27
    beq lbl_fn_804DE888_00001448
    li r0, 0x1
    b lbl_fn_804DE888_0000144C
lbl_fn_804DE888_00001448:
    li r0, 0x0
lbl_fn_804DE888_0000144C:
    cmpwi r0, 0x1
    bne lbl_fn_804DE888_00001528
    lwz r3, 0x0(r29)
    lwz r0, 0x14a8(r3)
    oris r0, r0, 0x200
    stw r0, 0x14a8(r3)
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804DE888_00001498
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804DE888_0000148C
    li r0, 0x0
    b lbl_fn_804DE888_000014B4
lbl_fn_804DE888_0000148C:
    bl fn_806B0E30
    clrlwi r0, r3, 24
    b lbl_fn_804DE888_000014B4
lbl_fn_804DE888_00001498:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804DE888_000014AC
    li r3, 0x0
    b lbl_fn_804DE888_000014B0
lbl_fn_804DE888_000014AC:
    bl fn_806A8E40
lbl_fn_804DE888_000014B0:
    clrlwi r0, r3, 24
lbl_fn_804DE888_000014B4:
    lbz r3, 0xcc(r29)
    clrlwi r0, r0, 24
    clrlwi r3, r3, 28
    cmpw r3, r0
    bne lbl_fn_804DE888_00001528
    lwz r3, 0x0(r29)
    li r4, 0x2
    bl fn_8016E970
    lwz r3, 0x0(r29)
    addi r5, r1, 0x14
    li r4, 0x0
    stw r31, 0x58c(r3)
    psq_l f1, 0x0(r27), 0, 0
    lfs f2, 0x8(r27)
    psq_st f1, 0x0(r5), 0, 0
    lfs f1, lbl_80887570
    stfs f2, 0x1c(r1)
    lwz r3, 0x0(r29)
    bl fn_801546F4
    lwz r3, 0x0(r29)
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    bl fn_8015495C
    lwz r3, 0x0(r29)
    lwz r0, 0x12a4(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x12a4(r3)
lbl_fn_804DE888_00001528:
    addi r25, r25, 0x1
    addi r23, r23, 0xd5c
lbl_fn_804DE888_00001530:
    lwz r0, 0x5e8(r24)
    cmpw r25, r0
    blt lbl_fn_804DE888_00001288
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804DE888_00001570
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804DE888_00001564
    li r0, 0x0
    b lbl_fn_804DE888_0000158C
lbl_fn_804DE888_00001564:
    bl fn_806B0E30
    clrlwi r0, r3, 24
    b lbl_fn_804DE888_0000158C
lbl_fn_804DE888_00001570:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804DE888_00001584
    li r3, 0x0
    b lbl_fn_804DE888_00001588
lbl_fn_804DE888_00001584:
    bl fn_806A8E40
lbl_fn_804DE888_00001588:
    clrlwi r0, r3, 24
lbl_fn_804DE888_0000158C:
    lwz r5, 0x5e8(r24)
    clrlwi r4, r0, 24
    li r3, 0x0
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_fn_804DE888_000015D4
lbl_fn_804DE888_000015A4:
    lwz r0, 0x5e4(r24)
    add r5, r0, r3
    lwz r0, 0xd0(r5)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804DE888_000015CC
    lbz r0, 0xcc(r5)
    cmplw r4, r0
    bne lbl_fn_804DE888_000015CC
    b lbl_fn_804DE888_000015D8
lbl_fn_804DE888_000015CC:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804DE888_000015A4
lbl_fn_804DE888_000015D4:
    li r5, 0x0
lbl_fn_804DE888_000015D8:
    stw r5, 0x5fc(r24)
    mr r3, r24
    bl fn_805012C8
    lwz r3, lbl_8087F840
    li r4, 0x1
    bl fn_800D246C
    addis r3, r24, 0x1
    lwz r4, lbl_808875A4
    subi r3, r3, 0x694c
    bl fn_8023780C
    addis r3, r24, 0x1
    lwz r4, lbl_808875A8
    subi r3, r3, 0x6940
    bl fn_80237654
    lwz r5, 0x5e8(r24)
    li r6, 0x0
    li r20, 0x0
    li r21, 0x0
    li r25, 0x0
    li r7, 0x0
    li r3, 0x0
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_fn_804DE888_000016C4
lbl_fn_804DE888_00001638:
    cmpwi r7, 0x0
    blt lbl_fn_804DE888_00001654
    cmpw r7, r5
    bge lbl_fn_804DE888_00001654
    lwz r0, 0x5e4(r24)
    add r4, r0, r3
    b lbl_fn_804DE888_00001658
lbl_fn_804DE888_00001654:
    li r4, 0x0
lbl_fn_804DE888_00001658:
    lwz r0, 0xd0(r4)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804DE888_000016B8
    lwz r4, 0xb0(r4)
    subi r0, r4, 0xb
    cmplwi r0, 0x2
    ble lbl_fn_804DE888_0000169C
    subi r0, r4, 0xe
    cmplwi r0, 0x2
    ble lbl_fn_804DE888_000016A4
    subi r0, r4, 0x13
    cmplwi r0, 0x1
    ble lbl_fn_804DE888_000016AC
    cmpwi r4, 0x17
    beq lbl_fn_804DE888_000016B4
    b lbl_fn_804DE888_000016B8
lbl_fn_804DE888_0000169C:
    addi r6, r6, 0x1
    b lbl_fn_804DE888_000016B8
lbl_fn_804DE888_000016A4:
    addi r20, r20, 0x1
    b lbl_fn_804DE888_000016B8
lbl_fn_804DE888_000016AC:
    addi r21, r21, 0x1
    b lbl_fn_804DE888_000016B8
lbl_fn_804DE888_000016B4:
    addi r25, r25, 0x1
lbl_fn_804DE888_000016B8:
    addi r7, r7, 0x1
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804DE888_00001638
lbl_fn_804DE888_000016C4:
    cmpwi r6, 0x0
    ble lbl_fn_804DE888_000016DC
    lis r3, lbl_80759E48@ha
    addi r3, r3, lbl_80759E48@l
    addi r3, r3, 0x1b2
    bl fn_800C3094
lbl_fn_804DE888_000016DC:
    cmpwi r20, 0x0
    ble lbl_fn_804DE888_000016F4
    lis r3, lbl_80759E48@ha
    addi r3, r3, lbl_80759E48@l
    addi r3, r3, 0x1c1
    bl fn_800C3094
lbl_fn_804DE888_000016F4:
    cmpwi r21, 0x0
    ble lbl_fn_804DE888_0000170C
    lis r3, lbl_80759E48@ha
    addi r3, r3, lbl_80759E48@l
    addi r3, r3, 0x1d0
    bl fn_800C3094
lbl_fn_804DE888_0000170C:
    cmpwi r25, 0x0
    ble lbl_fn_804DE888_00001724
    lis r3, lbl_80759E48@ha
    addi r3, r3, lbl_80759E48@l
    addi r3, r3, 0x1df
    bl fn_800C3094
lbl_fn_804DE888_00001724:
    li r3, 0x1
lbl_fn_804DE888_00001728:
    addi r11, r1, 0x50
    psq_l f31, 0x68(r1), 0, 0
    lfd f31, 0x60(r1)
    psq_l f30, 0x58(r1), 0, 0
    lfd f30, 0x50(r1)
    bl _restgpr_20
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_804DF120(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r26, 0x8(r1)
    mr r30, r3
    mr r31, r4
    lwz r0, 0x5e0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804DF120_000018D0
    mr r3, r0
    bl fn_800D2338
    lwz r0, 0x5f4(r30)
    li r3, 0x0
    stw r3, 0x5e0(r30)
    subf r0, r0, r0
    stw r0, 0x5f4(r30)
    lwz r5, lbl_8087F628
    addis r4, r5, 0x1
    lbz r0, -0x3deb(r4)
    cmpwi r0, 0x0
    bne lbl_fn_804DF120_000017C0
    lwz r0, 0x1f8(r5)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804DF120_000017B4
    b lbl_fn_804DF120_000017D8
lbl_fn_804DF120_000017B4:
    bl fn_806B0E30
    clrlwi r3, r3, 24
    b lbl_fn_804DF120_000017D8
lbl_fn_804DF120_000017C0:
    lwz r0, 0x1f8(r5)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804DF120_000017D0
    b lbl_fn_804DF120_000017D4
lbl_fn_804DF120_000017D0:
    bl fn_806A8E40
lbl_fn_804DF120_000017D4:
    clrlwi r3, r3, 24
lbl_fn_804DF120_000017D8:
    lwz r0, 0x5e8(r30)
    clrlwi r4, r3, 24
    li r3, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_804DF120_00001820
lbl_fn_804DF120_000017F0:
    lwz r0, 0x5e4(r30)
    add r5, r0, r3
    lwz r0, 0xd0(r5)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804DF120_00001818
    lbz r0, 0xcc(r5)
    cmplw r4, r0
    bne lbl_fn_804DF120_00001818
    b lbl_fn_804DF120_00001824
lbl_fn_804DF120_00001818:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804DF120_000017F0
lbl_fn_804DF120_00001820:
    li r5, 0x0
lbl_fn_804DF120_00001824:
    cmpwi r5, 0x0
    beq lbl_fn_804DF120_00001834
    li r0, 0x0
    stw r0, 0x0(r5)
lbl_fn_804DF120_00001834:
    li r26, 0x0
    li r29, 0x0
    li r28, 0x0
    b lbl_fn_804DF120_000018C4
lbl_fn_804DF120_00001844:
    cmpwi r26, 0x0
    blt lbl_fn_804DF120_00001860
    cmpw r26, r0
    bge lbl_fn_804DF120_00001860
    lwz r0, 0x5e4(r30)
    add r27, r0, r29
    b lbl_fn_804DF120_00001864
lbl_fn_804DF120_00001860:
    li r27, 0x0
lbl_fn_804DF120_00001864:
    lwz r3, 0x0(r27)
    cmpwi r3, 0x0
    beq lbl_fn_804DF120_000018BC
    bl fn_800D2338
    stw r28, 0x0(r27)
    lwz r0, 0x5e4(r30)
    add. r3, r0, r29
    beq lbl_fn_804DF120_000018A0
    lbz r0, 0xcc(r3)
    cmplwi r0, 0xff
    beq lbl_fn_804DF120_000018A0
    rlwinm. r0, r0, 0, 24, 27
    beq lbl_fn_804DF120_000018A0
    li r0, 0x1
    b lbl_fn_804DF120_000018A4
lbl_fn_804DF120_000018A0:
    li r0, 0x0
lbl_fn_804DF120_000018A4:
    cmpwi r0, 0x1
    bne lbl_fn_804DF120_000018BC
    lwz r0, 0xd0(r27)
    clrlwi r0, r0, 1
    rlwinm r0, r0, 0, 10, 5
    stw r0, 0xd0(r27)
lbl_fn_804DF120_000018BC:
    addi r26, r26, 0x1
    addi r29, r29, 0xd5c
lbl_fn_804DF120_000018C4:
    lwz r0, 0x5e8(r30)
    cmpw r26, r0
    blt lbl_fn_804DF120_00001844
lbl_fn_804DF120_000018D0:
    lwz r3, lbl_8087F840
    cmpwi r3, 0x0
    beq lbl_fn_804DF120_000018E0
    bl fn_800D2338
lbl_fn_804DF120_000018E0:
    addis r3, r30, 0x1
    subi r3, r3, 0x694c
    bl fn_8023781C
    addis r3, r30, 0x1
    subi r3, r3, 0x6940
    bl fn_8023772C
    cmplwi r31, 0x1
    bne lbl_fn_804DF120_00001908
    mr r3, r30
    bl fn_804DF314
lbl_fn_804DF120_00001908:
    lis r29, lbl_80759E48@ha
    addi r29, r29, lbl_80759E48@l
    addi r3, r29, 0x1b2
    bl fn_800C3124
    addi r3, r29, 0x1c1
    bl fn_800C3124
    addi r3, r29, 0x1d0
    bl fn_800C3124
    addi r3, r29, 0x1df
    bl fn_800C3124
    lmw r26, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804DF314(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x8
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    addis r3, r3, 0x1
    subi r3, r3, 0x667c
    bl memset
    addis r3, r31, 0x1
    li r4, 0xff
    li r5, 0x8
    subi r3, r3, 0x6674
    bl memset
    li r10, 0x0
    li r3, 0x0
    mr r5, r10
    li r8, 0xff
    mr r9, r10
    li r7, 0x2
    li r6, -0x1
    b lbl_fn_804DF314_00001A14
lbl_fn_804DF314_000019A0:
    cmpwi r10, 0x0
    lwz r4, lbl_8087F610
    blt lbl_fn_804DF314_000019C4
    lwz r0, 0x5e8(r4)
    cmpw r10, r0
    bge lbl_fn_804DF314_000019C4
    lwz r0, 0x5e4(r4)
    add r4, r0, r3
    b lbl_fn_804DF314_000019C8
lbl_fn_804DF314_000019C4:
    li r4, 0x0
lbl_fn_804DF314_000019C8:
    stw r9, 0xb0(r4)
    stb r8, 0xcc(r4)
    lwz r0, 0xd0(r4)
    clrlwi r0, r0, 1
    rlwinm r0, r0, 0, 3, 1
    oris r0, r0, 0x400
    rlwinm r0, r0, 0, 10, 5
    rlwimi r0, r7, 10, 20, 21
    ori r0, r0, 0x3c0
    rlwinm r0, r0, 0, 2, 0
    stw r0, 0xd0(r4)
    sth r6, 0xd50(r4)
    stw r9, 0xd4c(r4)
    lwz r4, 0x0(r4)
    cmpwi r4, 0x0
    beq lbl_fn_804DF314_00001A0C
    stw r5, 0x9f8(r4)
lbl_fn_804DF314_00001A0C:
    addi r10, r10, 0x1
    addi r3, r3, 0xd5c
lbl_fn_804DF314_00001A14:
    lwz r4, lbl_8087F610
    lwz r0, 0x5e8(r4)
    cmpw r10, r0
    blt lbl_fn_804DF314_000019A0
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
