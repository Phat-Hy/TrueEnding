#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void OSGetTime(void);
extern void __div2i(void);
extern void __register_global_object(void);
extern void _restgpr_23(void);
extern void _savegpr_23(void);
extern void fn_800C31F4(void);
extern void fn_800CB3A0(void);
extern void fn_800CB440(void);
extern void fn_800CB518(void);
extern void fn_800CB58C(void);
extern void fn_800CB5C8(void);
extern void fn_80102EAC(void);
extern void fn_801031D0(void);
extern void fn_8016F3D0(void);
extern void fn_80219E6C(void);
extern void fn_8021A684(void);
extern void fn_803E9608(void);
extern void fn_803EBA54(void);
extern void fn_804AE3BC(void);
extern void fn_804D818C(void);
extern void fn_804E82C8(void);
extern void fn_804E8BF8(void);
extern void fn_804EAEE4(void);
extern void fn_8050128C(void);
extern void fn_8050DDE0(void);
extern void fn_8050E098(void);
extern void fn_8054D798(void);
extern void fn_80680CF8(void);
extern void fn_806A8E40(void);
extern void fn_806B0E30(void);
extern void fn_806B1250(void);

/* External data declarations */
extern u8 jumptable_807912B0[];
extern u8 lbl_80790FF0[];
extern u8 lbl_807910A8[];
extern u8 lbl_807C8AE8[];

/* Small data declarations */
extern u32 lbl_8087E1C4;
extern u32 lbl_8087F048;
extern u32 lbl_8087F498;
extern u32 lbl_8087F5F8;
extern u32 lbl_8087F5FC;
extern u32 lbl_8087F610;
extern u32 lbl_8087F628;
extern u32 lbl_8087F8A8;
extern u32 lbl_80887590;

/* Function declarations */
void fn_804EB754(void);
void fn_804EB7C8(void);
void fn_804EB818(void);
void fn_804EB874(void);
void fn_804EB938(void);

asm void fn_804EB754(void)
{
    nofralloc
    lwz r0, 0x5e8(r3)
    li r6, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_804EB754_00000044
lbl_fn_804EB754_00000014:
    lwz r0, 0x5e4(r3)
    add r7, r0, r6
    lwz r0, 0xd0(r7)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804EB754_0000003C
    lwz r0, 0x0(r7)
    cmplw r0, r4
    bne lbl_fn_804EB754_0000003C
    b lbl_fn_804EB754_00000048
lbl_fn_804EB754_0000003C:
    addi r6, r6, 0xd5c
    bdnz lbl_fn_804EB754_00000014
lbl_fn_804EB754_00000044:
    li r7, 0x0
lbl_fn_804EB754_00000048:
    cmpwi r7, 0x0
    bne lbl_fn_804EB754_00000064
    lwz r7, 0x5fc(r3)
    cmpwi r7, 0x0
    bne lbl_fn_804EB754_00000064
    li r3, -0x1
    blr
lbl_fn_804EB754_00000064:
    slwi r0, r5, 2
    add r3, r7, r0
    lwz r3, 0xd38(r3)
    blr
}

asm void fn_804EB7C8(void)
{
    nofralloc
    lwz r0, 0x5e8(r3)
    li r5, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_804EB7C8_000000BC
lbl_fn_804EB7C8_00000088:
    lwz r0, 0x5e4(r3)
    add r6, r0, r5
    lwz r0, 0xd0(r6)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804EB7C8_000000B4
    lwz r0, 0x0(r6)
    cmplw r0, r4
    bne lbl_fn_804EB7C8_000000B4
    mr r3, r6
    blr
lbl_fn_804EB7C8_000000B4:
    addi r5, r5, 0xd5c
    bdnz lbl_fn_804EB7C8_00000088
lbl_fn_804EB7C8_000000BC:
    li r3, 0x0
    blr
}

asm void fn_804EB818(void)
{
    nofralloc
    lwz r0, 0x5f4(r3)
    li r7, 0x0
    li r5, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_804EB818_000000FC
lbl_fn_804EB818_000000DC:
    lwz r6, 0x5f0(r3)
    lwzx r0, r6, r5
    cmplw r0, r4
    bne lbl_fn_804EB818_000000F0
    b lbl_fn_804EB818_00000100
lbl_fn_804EB818_000000F0:
    addi r7, r7, 0x1
    addi r5, r5, 0xb4
    bdnz lbl_fn_804EB818_000000DC
lbl_fn_804EB818_000000FC:
    li r7, -0x1
lbl_fn_804EB818_00000100:
    cmpwi r7, 0x0
    blt lbl_fn_804EB818_00000118
    mulli r0, r7, 0xb4
    lwz r3, 0x5f0(r3)
    add r3, r3, r0
    blr
lbl_fn_804EB818_00000118:
    li r3, 0x0
    blr
}

asm void fn_804EB874(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804EB874_00000168
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804EB874_0000015C
    li r0, 0x0
    b lbl_fn_804EB874_00000184
lbl_fn_804EB874_0000015C:
    bl fn_806B0E30
    clrlwi r0, r3, 24
    b lbl_fn_804EB874_00000184
lbl_fn_804EB874_00000168:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804EB874_0000017C
    li r3, 0x0
    b lbl_fn_804EB874_00000180
lbl_fn_804EB874_0000017C:
    bl fn_806A8E40
lbl_fn_804EB874_00000180:
    clrlwi r0, r3, 24
lbl_fn_804EB874_00000184:
    lwz r3, 0x5e8(r31)
    clrlwi r5, r0, 24
    li r4, 0x0
    mtctr r3
    cmpwi r3, 0x0
    ble lbl_fn_804EB874_000001CC
lbl_fn_804EB874_0000019C:
    lwz r0, 0x5e4(r31)
    add r3, r0, r4
    lwz r0, 0xd0(r3)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804EB874_000001C4
    lbz r0, 0xcc(r3)
    cmplw r5, r0
    bne lbl_fn_804EB874_000001C4
    b lbl_fn_804EB874_000001D0
lbl_fn_804EB874_000001C4:
    addi r4, r4, 0xd5c
    bdnz lbl_fn_804EB874_0000019C
lbl_fn_804EB874_000001CC:
    li r3, 0x0
lbl_fn_804EB874_000001D0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804EB938(void)
{
    nofralloc
    stwu r1, -0x230(r1)
    mflr r0
    stw r0, 0x234(r1)
    addi r11, r1, 0x230
    bl _savegpr_23
    lwz r27, lbl_8087F610
    mr r31, r3
    mr r24, r4
    mr r30, r5
    lwz r0, 0x4fc(r27)
    cmpwi r0, 0x1e
    bne lbl_fn_804EB938_00002000
    subi r0, r3, 0x5
    cmplwi r0, 0xa
    bgt lbl_fn_804EB938_00002000
    lis r3, jumptable_807912B0@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_807912B0@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lwz r0, 0x5e8(r27)
    li r3, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_804EB938_0000027C
lbl_fn_804EB938_0000024C:
    lwz r0, 0x5e4(r27)
    add r28, r0, r3
    lwz r0, 0xd0(r28)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804EB938_00000274
    lwz r0, 0x0(r28)
    cmplw r0, r4
    bne lbl_fn_804EB938_00000274
    b lbl_fn_804EB938_00000280
lbl_fn_804EB938_00000274:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804EB938_0000024C
lbl_fn_804EB938_0000027C:
    li r28, 0x0
lbl_fn_804EB938_00000280:
    cmpwi r28, 0x0
    beq lbl_fn_804EB938_00002000
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804EB938_000002BC
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804EB938_000002B0
    li r0, 0x0
    b lbl_fn_804EB938_000002D8
lbl_fn_804EB938_000002B0:
    bl fn_806B0E30
    clrlwi r0, r3, 24
    b lbl_fn_804EB938_000002D8
lbl_fn_804EB938_000002BC:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804EB938_000002D0
    li r3, 0x0
    b lbl_fn_804EB938_000002D4
lbl_fn_804EB938_000002D0:
    bl fn_806A8E40
lbl_fn_804EB938_000002D4:
    clrlwi r0, r3, 24
lbl_fn_804EB938_000002D8:
    lwz r5, 0x5e8(r27)
    clrlwi r4, r0, 24
    li r3, 0x0
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_fn_804EB938_00000320
lbl_fn_804EB938_000002F0:
    lwz r0, 0x5e4(r27)
    add r5, r0, r3
    lwz r0, 0xd0(r5)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804EB938_00000318
    lbz r0, 0xcc(r5)
    cmplw r4, r0
    bne lbl_fn_804EB938_00000318
    b lbl_fn_804EB938_00000324
lbl_fn_804EB938_00000318:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804EB938_000002F0
lbl_fn_804EB938_00000320:
    li r5, 0x0
lbl_fn_804EB938_00000324:
    cmplw r28, r5
    beq lbl_fn_804EB938_00000430
    lwz r4, lbl_8087F628
    lwz r23, lbl_8087F610
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804EB938_00000364
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804EB938_00000358
    li r0, 0x0
    b lbl_fn_804EB938_00000380
lbl_fn_804EB938_00000358:
    bl fn_806B0E30
    clrlwi r0, r3, 24
    b lbl_fn_804EB938_00000380
lbl_fn_804EB938_00000364:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804EB938_00000378
    li r3, 0x0
    b lbl_fn_804EB938_0000037C
lbl_fn_804EB938_00000378:
    bl fn_806A8E40
lbl_fn_804EB938_0000037C:
    clrlwi r0, r3, 24
lbl_fn_804EB938_00000380:
    lwz r5, 0x5e8(r23)
    clrlwi r4, r0, 24
    li r3, 0x0
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_fn_804EB938_000003C8
lbl_fn_804EB938_00000398:
    lwz r0, 0x5e4(r23)
    add r5, r0, r3
    lwz r0, 0xd0(r5)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804EB938_000003C0
    lbz r0, 0xcc(r5)
    cmplw r4, r0
    bne lbl_fn_804EB938_000003C0
    b lbl_fn_804EB938_000003CC
lbl_fn_804EB938_000003C0:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804EB938_00000398
lbl_fn_804EB938_000003C8:
    li r5, 0x0
lbl_fn_804EB938_000003CC:
    cmpwi r5, 0x0
    beq lbl_fn_804EB938_00000408
    cmpwi r28, 0x0
    beq lbl_fn_804EB938_00000408
    beq lbl_fn_804EB938_000003FC
    lbz r0, 0xcc(r28)
    cmplwi r0, 0xff
    beq lbl_fn_804EB938_000003FC
    rlwinm. r0, r0, 0, 24, 27
    beq lbl_fn_804EB938_000003FC
    li r0, 0x1
    b lbl_fn_804EB938_00000400
lbl_fn_804EB938_000003FC:
    li r0, 0x0
lbl_fn_804EB938_00000400:
    cmpwi r0, 0x0
    bne lbl_fn_804EB938_00000410
lbl_fn_804EB938_00000408:
    li r0, 0x0
    b lbl_fn_804EB938_00000428
lbl_fn_804EB938_00000410:
    lbz r0, 0xcc(r28)
    lbz r3, 0xcc(r5)
    clrlwi r0, r0, 28
    subf r0, r3, r0
    cntlzw r0, r0
    srwi r0, r0, 5
lbl_fn_804EB938_00000428:
    cmpwi r0, 0x1
    bne lbl_fn_804EB938_00000520
lbl_fn_804EB938_00000430:
    lwz r4, lbl_8087F610
    lwz r0, 0x540(r4)
    cmpwi r0, 0x2
    bne lbl_fn_804EB938_00000448
    lwz r0, 0x5c4(r4)
    b lbl_fn_804EB938_00000460
lbl_fn_804EB938_00000448:
    lis r3, 0x5555
    lwz r0, 0x5c4(r4)
    addi r3, r3, 0x5556
    mulhw r3, r3, r0
    srwi r0, r3, 31
    add r0, r3, r0
lbl_fn_804EB938_00000460:
    stw r0, 0xd48(r28)
    lwz r4, lbl_8087F628
    lwz r23, lbl_8087F610
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804EB938_0000049C
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804EB938_00000490
    li r0, 0x0
    b lbl_fn_804EB938_000004B8
lbl_fn_804EB938_00000490:
    bl fn_806B0E30
    clrlwi r0, r3, 24
    b lbl_fn_804EB938_000004B8
lbl_fn_804EB938_0000049C:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804EB938_000004B0
    li r3, 0x0
    b lbl_fn_804EB938_000004B4
lbl_fn_804EB938_000004B0:
    bl fn_806A8E40
lbl_fn_804EB938_000004B4:
    clrlwi r0, r3, 24
lbl_fn_804EB938_000004B8:
    lwz r5, 0x5e8(r23)
    clrlwi r4, r0, 24
    li r3, 0x0
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_fn_804EB938_00000500
lbl_fn_804EB938_000004D0:
    lwz r0, 0x5e4(r23)
    add r5, r0, r3
    lwz r0, 0xd0(r5)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804EB938_000004F8
    lbz r0, 0xcc(r5)
    cmplw r4, r0
    bne lbl_fn_804EB938_000004F8
    b lbl_fn_804EB938_00000504
lbl_fn_804EB938_000004F8:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804EB938_000004D0
lbl_fn_804EB938_00000500:
    li r5, 0x0
lbl_fn_804EB938_00000504:
    cmplw r28, r5
    bne lbl_fn_804EB938_00000520
    lwz r4, lbl_8087F628
    lwz r3, lbl_8087F610
    lbz r4, 0xcdc(r4)
    extsb r4, r4
    bl fn_804E82C8
lbl_fn_804EB938_00000520:
    lwz r3, lbl_8087F610
    lwz r0, 0x540(r3)
    cmpwi r0, 0x2
    beq lbl_fn_804EB938_00002000
    lwz r3, lbl_8087F498
    cmpwi r3, 0x0
    beq lbl_fn_804EB938_000005C0
    bl fn_803EBA54
    cmpwi r3, 0x0
    beq lbl_fn_804EB938_000005C0
    lwz r3, lbl_8087F610
    addi r3, r3, 0x2b74
    bl fn_800CB58C
    cmpwi r3, 0x0
    bne lbl_fn_804EB938_000005C0
    lwz r23, lbl_8087F498
    bl fn_80680CF8
    lis r4, 0xcccd
    lis r5, lbl_80790FF0@ha
    subi r0, r4, 0x3333
    lfs f1, lbl_80887590
    mulhwu r0, r0, r3
    addi r5, r5, lbl_80790FF0@l
    mr r4, r23
    li r6, 0x0
    li r7, 0x1
    srwi r0, r0, 3
    mulli r0, r0, 0xa
    subf r0, r0, r3
    addi r3, r1, 0x4c
    slwi r0, r0, 2
    lwzx r5, r5, r0
    bl fn_803E9608
    lwz r3, lbl_8087F610
    addi r4, r1, 0x4c
    addi r3, r3, 0x2b74
    bl fn_800CB440
    addi r3, r1, 0x4c
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_804EB938_000005C0:
    lwz r3, lbl_8087F610
    li r4, 0xf
    li r5, 0x0
    addi r3, r3, 0x2b78
    bl fn_800CB5C8
    bl fn_80680CF8
    lis r4, lbl_807910A8@ha
    clrlslwi r0, r3, 31, 2
    addi r4, r4, lbl_807910A8@l
    lfs f1, lbl_80887590
    lwzx r4, r4, r0
    addi r3, r1, 0x48
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    lwz r3, lbl_8087F610
    addi r4, r1, 0x48
    addi r3, r3, 0x2b78
    bl fn_800CB440
    addi r3, r1, 0x48
    li r4, -0x1
    bl fn_800CB3A0
    lwz r3, lbl_8087F610
    li r4, 0xa
    addi r3, r3, 0x2b78
    bl fn_800CB518
    b lbl_fn_804EB938_00002000
    lwz r0, 0x10(r5)
    cmpwi r0, 0x0
    beq lbl_fn_804EB938_00001098
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804EB938_0000066C
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804EB938_00000660
    li r0, 0x0
    b lbl_fn_804EB938_00000688
lbl_fn_804EB938_00000660:
    bl fn_806B0E30
    clrlwi r0, r3, 24
    b lbl_fn_804EB938_00000688
lbl_fn_804EB938_0000066C:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804EB938_00000680
    li r3, 0x0
    b lbl_fn_804EB938_00000684
lbl_fn_804EB938_00000680:
    bl fn_806A8E40
lbl_fn_804EB938_00000684:
    clrlwi r0, r3, 24
lbl_fn_804EB938_00000688:
    lwz r5, 0x5e8(r27)
    clrlwi r4, r0, 24
    li r3, 0x0
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_fn_804EB938_000006D0
lbl_fn_804EB938_000006A0:
    lwz r0, 0x5e4(r27)
    add r26, r0, r3
    lwz r0, 0xd0(r26)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804EB938_000006C8
    lbz r0, 0xcc(r26)
    cmplw r4, r0
    bne lbl_fn_804EB938_000006C8
    b lbl_fn_804EB938_000006D4
lbl_fn_804EB938_000006C8:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804EB938_000006A0
lbl_fn_804EB938_000006D0:
    li r26, 0x0
lbl_fn_804EB938_000006D4:
    li r24, 0x0
    li r23, 0x0
    b lbl_fn_804EB938_00000EC8
lbl_fn_804EB938_000006E0:
    cmpwi r24, 0x0
    blt lbl_fn_804EB938_00000700
    lwz r0, 0x5e8(r27)
    cmpw r24, r0
    bge lbl_fn_804EB938_00000700
    lwz r0, 0x5e4(r27)
    add r29, r0, r23
    b lbl_fn_804EB938_00000704
lbl_fn_804EB938_00000700:
    li r29, 0x0
lbl_fn_804EB938_00000704:
    lwz r0, 0x0(r29)
    cmpwi r0, 0x0
    beq lbl_fn_804EB938_00000EC0
    lwz r0, 0xd0(r29)
    extrwi r0, r0, 1, 1
    cmplwi r0, 0x1
    beq lbl_fn_804EB938_00000828
    lwz r5, lbl_8087F628
    lwz r4, 0x5e4(r27)
    addis r3, r5, 0x1
    lbz r0, -0x3deb(r3)
    add r28, r4, r23
    cmpwi r0, 0x0
    bne lbl_fn_804EB938_0000075C
    lwz r0, 0x1f8(r5)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804EB938_00000750
    li r0, 0x0
    b lbl_fn_804EB938_00000778
lbl_fn_804EB938_00000750:
    bl fn_806B0E30
    clrlwi r0, r3, 24
    b lbl_fn_804EB938_00000778
lbl_fn_804EB938_0000075C:
    lwz r0, 0x1f8(r5)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804EB938_00000770
    li r3, 0x0
    b lbl_fn_804EB938_00000774
lbl_fn_804EB938_00000770:
    bl fn_806A8E40
lbl_fn_804EB938_00000774:
    clrlwi r0, r3, 24
lbl_fn_804EB938_00000778:
    lwz r5, 0x5e8(r27)
    clrlwi r4, r0, 24
    li r3, 0x0
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_fn_804EB938_000007C0
lbl_fn_804EB938_00000790:
    lwz r0, 0x5e4(r27)
    add r5, r0, r3
    lwz r0, 0xd0(r5)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804EB938_000007B8
    lbz r0, 0xcc(r5)
    cmplw r4, r0
    bne lbl_fn_804EB938_000007B8
    b lbl_fn_804EB938_000007C4
lbl_fn_804EB938_000007B8:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804EB938_00000790
lbl_fn_804EB938_000007C0:
    li r5, 0x0
lbl_fn_804EB938_000007C4:
    cmpwi r5, 0x0
    beq lbl_fn_804EB938_00000800
    cmpwi r28, 0x0
    beq lbl_fn_804EB938_00000800
    beq lbl_fn_804EB938_000007F4
    lbz r0, 0xcc(r28)
    cmplwi r0, 0xff
    beq lbl_fn_804EB938_000007F4
    rlwinm. r0, r0, 0, 24, 27
    beq lbl_fn_804EB938_000007F4
    li r0, 0x1
    b lbl_fn_804EB938_000007F8
lbl_fn_804EB938_000007F4:
    li r0, 0x0
lbl_fn_804EB938_000007F8:
    cmpwi r0, 0x0
    bne lbl_fn_804EB938_00000808
lbl_fn_804EB938_00000800:
    li r0, 0x0
    b lbl_fn_804EB938_00000820
lbl_fn_804EB938_00000808:
    lbz r0, 0xcc(r28)
    lbz r3, 0xcc(r5)
    clrlwi r0, r0, 28
    subf r0, r3, r0
    cntlzw r0, r0
    srwi r0, r0, 5
lbl_fn_804EB938_00000820:
    cmpwi r0, 0x0
    beq lbl_fn_804EB938_00000EC0
lbl_fn_804EB938_00000828:
    lwz r3, 0x0(r30)
    lwz r0, 0x0(r29)
    cmplw r0, r3
    bne lbl_fn_804EB938_00000EC0
    cmpwi r3, 0x0
    beq lbl_fn_804EB938_00000EC0
    lwz r4, 0x4(r30)
    li r5, 0x1
    bl fn_8016F3D0
    cmpwi r3, 0x0
    bne lbl_fn_804EB938_00000EC0
    lwz r27, lbl_8087F610
    li r23, 0xa
    lwz r4, 0x4(r30)
    li r3, 0x0
    lwz r0, 0x5e8(r27)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_804EB938_000008A4
lbl_fn_804EB938_00000874:
    lwz r0, 0x5e4(r27)
    add r5, r0, r3
    lwz r0, 0xd0(r5)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804EB938_0000089C
    lwz r0, 0x0(r5)
    cmplw r0, r4
    bne lbl_fn_804EB938_0000089C
    b lbl_fn_804EB938_000008A8
lbl_fn_804EB938_0000089C:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804EB938_00000874
lbl_fn_804EB938_000008A4:
    li r5, 0x0
lbl_fn_804EB938_000008A8:
    cmpwi r5, 0x0
    beq lbl_fn_804EB938_000008D8
    beq lbl_fn_804EB938_000008D0
    lbz r0, 0xcc(r5)
    cmplwi r0, 0xff
    beq lbl_fn_804EB938_000008D0
    rlwinm. r0, r0, 0, 24, 27
    beq lbl_fn_804EB938_000008D0
    li r0, 0x1
    b lbl_fn_804EB938_000008DC
lbl_fn_804EB938_000008D0:
    li r0, 0x0
    b lbl_fn_804EB938_000008DC
lbl_fn_804EB938_000008D8:
    li r0, 0x0
lbl_fn_804EB938_000008DC:
    cmpwi r0, 0x0
    beq lbl_fn_804EB938_000008EC
    li r0, 0xa
    srawi r23, r0, 1
lbl_fn_804EB938_000008EC:
    lwz r0, 0x564(r27)
    cmpwi r0, 0x0
    blt lbl_fn_804EB938_0000092C
    bl OSGetTime
    lwz r6, 0x5bc(r27)
    lis r5, 0x8000
    lwz r0, 0xf8(r5)
    li r5, 0x0
    subfc r4, r6, r4
    lwz r7, 0x5b8(r27)
    srwi r6, r0, 2
    subfe r3, r7, r3
    bl __div2i
    lwz r0, 0x564(r27)
    subf r0, r4, r0
    b lbl_fn_804EB938_00000930
lbl_fn_804EB938_0000092C:
    li r0, -0x1
lbl_fn_804EB938_00000930:
    srwi r0, r0, 31
    xori r0, r0, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804EB938_00000998
    lwz r0, 0x564(r27)
    cmpwi r0, 0x0
    blt lbl_fn_804EB938_00000980
    bl OSGetTime
    lwz r6, 0x5bc(r27)
    lis r5, 0x8000
    lwz r0, 0xf8(r5)
    li r5, 0x0
    subfc r4, r6, r4
    lwz r7, 0x5b8(r27)
    srwi r6, r0, 2
    subfe r3, r7, r3
    bl __div2i
    lwz r0, 0x564(r27)
    subf r0, r4, r0
    b lbl_fn_804EB938_00000984
lbl_fn_804EB938_00000980:
    li r0, -0x1
lbl_fn_804EB938_00000984:
    xori r0, r0, 0x3c
    srawi r3, r0, 1
    rlwinm r0, r0, 0, 26, 29
    subf r0, r0, r3
    srwi r0, r0, 31
lbl_fn_804EB938_00000998:
    cmpwi r0, 0x0
    beq lbl_fn_804EB938_000009A4
    slwi r23, r23, 1
lbl_fn_804EB938_000009A4:
    lwz r6, lbl_8087F610
    lwz r0, 0x4(r30)
    lwz r4, 0x540(r6)
    cmpwi r4, 0x0
    bne lbl_fn_804EB938_000009C0
    li r3, 0x1
    b lbl_fn_804EB938_00000A6C
lbl_fn_804EB938_000009C0:
    lwz r8, 0x5e8(r6)
    li r3, 0x0
    mtctr r8
    cmpwi r8, 0x0
    ble lbl_fn_804EB938_00000A04
lbl_fn_804EB938_000009D4:
    lwz r5, 0x5e4(r6)
    add r7, r5, r3
    lwz r5, 0xd0(r7)
    srwi r5, r5, 31
    cmplwi r5, 0x1
    bne lbl_fn_804EB938_000009FC
    lwz r5, 0x0(r7)
    cmplw r5, r0
    bne lbl_fn_804EB938_000009FC
    b lbl_fn_804EB938_00000A08
lbl_fn_804EB938_000009FC:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804EB938_000009D4
lbl_fn_804EB938_00000A04:
    li r7, 0x0
lbl_fn_804EB938_00000A08:
    cmpwi r7, 0x0
    bne lbl_fn_804EB938_00000A18
    li r3, 0x0
    b lbl_fn_804EB938_00000A6C
lbl_fn_804EB938_00000A18:
    lwz r7, 0xd0(r7)
    li r3, 0x0
    li r5, 0x0
    extrwi r9, r7, 4, 6
    mtctr r8
    cmpwi r8, 0x0
    ble lbl_fn_804EB938_00000A6C
lbl_fn_804EB938_00000A34:
    lwz r7, 0x5e4(r6)
    add r10, r7, r5
    lwz r8, 0xd0(r10)
    srwi. r7, r8, 31
    beq lbl_fn_804EB938_00000A64
    lwz r7, 0x0(r10)
    cmpwi r7, 0x0
    beq lbl_fn_804EB938_00000A64
    extrwi r7, r8, 4, 6
    cmplw r7, r9
    bne lbl_fn_804EB938_00000A64
    addi r3, r3, 0x1
lbl_fn_804EB938_00000A64:
    addi r5, r5, 0xd5c
    bdnz lbl_fn_804EB938_00000A34
lbl_fn_804EB938_00000A6C:
    lwz r7, 0x540(r6)
    lwz r5, 0x0(r30)
    cmpwi r7, 0x0
    bne lbl_fn_804EB938_00000A84
    li r10, 0x1
    b lbl_fn_804EB938_00000B30
lbl_fn_804EB938_00000A84:
    lwz r12, 0x5e8(r6)
    li r7, 0x0
    mtctr r12
    cmpwi r12, 0x0
    ble lbl_fn_804EB938_00000AC8
lbl_fn_804EB938_00000A98:
    lwz r8, 0x5e4(r6)
    add r9, r8, r7
    lwz r8, 0xd0(r9)
    srwi r8, r8, 31
    cmplwi r8, 0x1
    bne lbl_fn_804EB938_00000AC0
    lwz r8, 0x0(r9)
    cmplw r8, r5
    bne lbl_fn_804EB938_00000AC0
    b lbl_fn_804EB938_00000ACC
lbl_fn_804EB938_00000AC0:
    addi r7, r7, 0xd5c
    bdnz lbl_fn_804EB938_00000A98
lbl_fn_804EB938_00000AC8:
    li r9, 0x0
lbl_fn_804EB938_00000ACC:
    cmpwi r9, 0x0
    bne lbl_fn_804EB938_00000ADC
    li r10, 0x0
    b lbl_fn_804EB938_00000B30
lbl_fn_804EB938_00000ADC:
    lwz r8, 0xd0(r9)
    li r10, 0x0
    li r7, 0x0
    extrwi r11, r8, 4, 6
    mtctr r12
    cmpwi r12, 0x0
    ble lbl_fn_804EB938_00000B30
lbl_fn_804EB938_00000AF8:
    lwz r8, 0x5e4(r6)
    add r12, r8, r7
    lwz r9, 0xd0(r12)
    srwi. r8, r9, 31
    beq lbl_fn_804EB938_00000B28
    lwz r8, 0x0(r12)
    cmpwi r8, 0x0
    beq lbl_fn_804EB938_00000B28
    extrwi r8, r9, 4, 6
    cmplw r8, r11
    bne lbl_fn_804EB938_00000B28
    addi r10, r10, 0x1
lbl_fn_804EB938_00000B28:
    addi r7, r7, 0xd5c
    bdnz lbl_fn_804EB938_00000AF8
lbl_fn_804EB938_00000B30:
    subf. r3, r10, r3
    ble lbl_fn_804EB938_00000CBC
    cmpwi r4, 0x0
    bne lbl_fn_804EB938_00000B48
    li r3, 0x1
    b lbl_fn_804EB938_00000BF4
lbl_fn_804EB938_00000B48:
    lwz r9, 0x5e8(r6)
    li r3, 0x0
    mtctr r9
    cmpwi r9, 0x0
    ble lbl_fn_804EB938_00000B8C
lbl_fn_804EB938_00000B5C:
    lwz r4, 0x5e4(r6)
    add r7, r4, r3
    lwz r4, 0xd0(r7)
    srwi r4, r4, 31
    cmplwi r4, 0x1
    bne lbl_fn_804EB938_00000B84
    lwz r4, 0x0(r7)
    cmplw r4, r0
    bne lbl_fn_804EB938_00000B84
    b lbl_fn_804EB938_00000B90
lbl_fn_804EB938_00000B84:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804EB938_00000B5C
lbl_fn_804EB938_00000B8C:
    li r7, 0x0
lbl_fn_804EB938_00000B90:
    cmpwi r7, 0x0
    bne lbl_fn_804EB938_00000BA0
    li r3, 0x0
    b lbl_fn_804EB938_00000BF4
lbl_fn_804EB938_00000BA0:
    lwz r0, 0xd0(r7)
    li r3, 0x0
    li r4, 0x0
    extrwi r8, r0, 4, 6
    mtctr r9
    cmpwi r9, 0x0
    ble lbl_fn_804EB938_00000BF4
lbl_fn_804EB938_00000BBC:
    lwz r0, 0x5e4(r6)
    add r9, r0, r4
    lwz r7, 0xd0(r9)
    srwi. r0, r7, 31
    beq lbl_fn_804EB938_00000BEC
    lwz r0, 0x0(r9)
    cmpwi r0, 0x0
    beq lbl_fn_804EB938_00000BEC
    extrwi r0, r7, 4, 6
    cmplw r0, r8
    bne lbl_fn_804EB938_00000BEC
    addi r3, r3, 0x1
lbl_fn_804EB938_00000BEC:
    addi r4, r4, 0xd5c
    bdnz lbl_fn_804EB938_00000BBC
lbl_fn_804EB938_00000BF4:
    lwz r0, 0x540(r6)
    cmpwi r0, 0x0
    bne lbl_fn_804EB938_00000C08
    li r7, 0x1
    b lbl_fn_804EB938_00000CB4
lbl_fn_804EB938_00000C08:
    lwz r9, 0x5e8(r6)
    li r4, 0x0
    mtctr r9
    cmpwi r9, 0x0
    ble lbl_fn_804EB938_00000C4C
lbl_fn_804EB938_00000C1C:
    lwz r0, 0x5e4(r6)
    add r7, r0, r4
    lwz r0, 0xd0(r7)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804EB938_00000C44
    lwz r0, 0x0(r7)
    cmplw r0, r5
    bne lbl_fn_804EB938_00000C44
    b lbl_fn_804EB938_00000C50
lbl_fn_804EB938_00000C44:
    addi r4, r4, 0xd5c
    bdnz lbl_fn_804EB938_00000C1C
lbl_fn_804EB938_00000C4C:
    li r7, 0x0
lbl_fn_804EB938_00000C50:
    cmpwi r7, 0x0
    bne lbl_fn_804EB938_00000C60
    li r7, 0x0
    b lbl_fn_804EB938_00000CB4
lbl_fn_804EB938_00000C60:
    lwz r0, 0xd0(r7)
    li r7, 0x0
    li r4, 0x0
    extrwi r8, r0, 4, 6
    mtctr r9
    cmpwi r9, 0x0
    ble lbl_fn_804EB938_00000CB4
lbl_fn_804EB938_00000C7C:
    lwz r0, 0x5e4(r6)
    add r9, r0, r4
    lwz r5, 0xd0(r9)
    srwi. r0, r5, 31
    beq lbl_fn_804EB938_00000CAC
    lwz r0, 0x0(r9)
    cmpwi r0, 0x0
    beq lbl_fn_804EB938_00000CAC
    extrwi r0, r5, 4, 6
    cmplw r0, r8
    bne lbl_fn_804EB938_00000CAC
    addi r7, r7, 0x1
lbl_fn_804EB938_00000CAC:
    addi r4, r4, 0xd5c
    bdnz lbl_fn_804EB938_00000C7C
lbl_fn_804EB938_00000CB4:
    subf r3, r7, r3
    b lbl_fn_804EB938_00000CC0
lbl_fn_804EB938_00000CBC:
    li r3, 0x0
lbl_fn_804EB938_00000CC0:
    lwz r25, lbl_8087F610
    slwi r0, r3, 2
    add r3, r0, r3
    lwz r4, 0x0(r29)
    lwz r0, 0x50c(r25)
    add r23, r23, r3
    lwz r28, 0xdc(r29)
    cmpwi r0, 0x0
    bne lbl_fn_804EB938_00000E88
    lwz r0, 0x5e8(r25)
    li r3, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_804EB938_00000D28
lbl_fn_804EB938_00000CF8:
    lwz r0, 0x5e4(r25)
    add r24, r0, r3
    lwz r0, 0xd0(r24)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804EB938_00000D20
    lwz r0, 0x0(r24)
    cmplw r0, r4
    bne lbl_fn_804EB938_00000D20
    b lbl_fn_804EB938_00000D2C
lbl_fn_804EB938_00000D20:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804EB938_00000CF8
lbl_fn_804EB938_00000D28:
    li r24, 0x0
lbl_fn_804EB938_00000D2C:
    cmpwi r24, 0x0
    beq lbl_fn_804EB938_00000E88
    lwz r0, 0x0(r24)
    cmpwi r0, 0x0
    beq lbl_fn_804EB938_00000E88
    lwz r0, 0xdc(r24)
    addi r3, r24, 0xdc
    lwz r27, 0xdc(r24)
    add r4, r0, r23
    neg r0, r4
    andc r0, r0, r4
    srawi r0, r0, 31
    and r4, r4, r0
    bl fn_8050128C
    lwz r0, 0x540(r25)
    cmpwi r0, 0x2
    beq lbl_fn_804EB938_00000E88
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804EB938_00000DA4
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804EB938_00000D98
    li r0, 0x0
    b lbl_fn_804EB938_00000DC0
lbl_fn_804EB938_00000D98:
    bl fn_806B0E30
    clrlwi r0, r3, 24
    b lbl_fn_804EB938_00000DC0
lbl_fn_804EB938_00000DA4:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804EB938_00000DB8
    li r3, 0x0
    b lbl_fn_804EB938_00000DBC
lbl_fn_804EB938_00000DB8:
    bl fn_806A8E40
lbl_fn_804EB938_00000DBC:
    clrlwi r0, r3, 24
lbl_fn_804EB938_00000DC0:
    lwz r5, 0x5e8(r25)
    clrlwi r4, r0, 24
    li r3, 0x0
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_fn_804EB938_00000E08
lbl_fn_804EB938_00000DD8:
    lwz r0, 0x5e4(r25)
    add r5, r0, r3
    lwz r0, 0xd0(r5)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804EB938_00000E00
    lbz r0, 0xcc(r5)
    cmplw r4, r0
    bne lbl_fn_804EB938_00000E00
    b lbl_fn_804EB938_00000E0C
lbl_fn_804EB938_00000E00:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804EB938_00000DD8
lbl_fn_804EB938_00000E08:
    li r5, 0x0
lbl_fn_804EB938_00000E0C:
    cmplw r24, r5
    bne lbl_fn_804EB938_00000E88
    lwz r23, 0xdc(r24)
    cmpw r27, r23
    beq lbl_fn_804EB938_00000E88
    lwz r25, lbl_8087F8A8
    cmpwi r25, 0x0
    beq lbl_fn_804EB938_00000E88
    lwz r4, 0x0(r24)
    addi r3, r1, 0x58
    lwz r12, 0x0(r4)
    lwz r12, 0x58(r12)
    mtctr r12
    bctrl
    li r3, 0x0
    stw r3, 0x8(r1)
    li r4, 0x1
    li r0, -0x1
    stw r3, 0xc(r1)
    mr r3, r25
    addi r6, r1, 0x58
    subf r7, r27, r23
    stw r4, 0x10(r1)
    li r4, 0x8
    la r5, lbl_8087E1C4
    li r8, 0x0
    stw r0, 0x14(r1)
    li r9, 0x1
    li r10, 0x0
    stw r0, 0x18(r1)
    bl fn_8054D798
lbl_fn_804EB938_00000E88:
    lwz r0, 0xdc(r29)
    cmpw r28, r0
    bge lbl_fn_804EB938_00000EA0
    lwz r3, 0xe0(r29)
    addi r0, r3, 0x1
    stw r0, 0xe0(r29)
lbl_fn_804EB938_00000EA0:
    cmplw r29, r26
    bne lbl_fn_804EB938_00000ED8
    lwz r4, lbl_8087F628
    lwz r3, lbl_8087F610
    lbz r4, 0xcdb(r4)
    extsb r4, r4
    bl fn_804E82C8
    b lbl_fn_804EB938_00000ED8
lbl_fn_804EB938_00000EC0:
    addi r24, r24, 0x1
    addi r23, r23, 0xd5c
lbl_fn_804EB938_00000EC8:
    lwz r27, lbl_8087F610
    lwz r0, 0x5e8(r27)
    cmpw r24, r0
    blt lbl_fn_804EB938_000006E0
lbl_fn_804EB938_00000ED8:
    li r23, 0x0
    li r24, 0x0
    b lbl_fn_804EB938_00001088
lbl_fn_804EB938_00000EE4:
    cmpwi r23, 0x0
    blt lbl_fn_804EB938_00000F04
    lwz r0, 0x5e8(r28)
    cmpw r23, r0
    bge lbl_fn_804EB938_00000F04
    lwz r0, 0x5e4(r28)
    add r29, r0, r24
    b lbl_fn_804EB938_00000F08
lbl_fn_804EB938_00000F04:
    li r29, 0x0
lbl_fn_804EB938_00000F08:
    lwz r3, 0xd0(r29)
    srwi. r0, r3, 31
    beq lbl_fn_804EB938_00001080
    lwz r0, 0x0(r29)
    cmpwi r0, 0x0
    beq lbl_fn_804EB938_00001080
    extrwi r0, r3, 1, 1
    cmplwi r0, 0x1
    beq lbl_fn_804EB938_00001034
    lwz r5, lbl_8087F628
    lwz r4, 0x5e4(r28)
    addis r3, r5, 0x1
    lbz r0, -0x3deb(r3)
    add r27, r4, r24
    cmpwi r0, 0x0
    bne lbl_fn_804EB938_00000F68
    lwz r0, 0x1f8(r5)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804EB938_00000F5C
    li r0, 0x0
    b lbl_fn_804EB938_00000F84
lbl_fn_804EB938_00000F5C:
    bl fn_806B0E30
    clrlwi r0, r3, 24
    b lbl_fn_804EB938_00000F84
lbl_fn_804EB938_00000F68:
    lwz r0, 0x1f8(r5)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804EB938_00000F7C
    li r3, 0x0
    b lbl_fn_804EB938_00000F80
lbl_fn_804EB938_00000F7C:
    bl fn_806A8E40
lbl_fn_804EB938_00000F80:
    clrlwi r0, r3, 24
lbl_fn_804EB938_00000F84:
    lwz r5, 0x5e8(r28)
    clrlwi r4, r0, 24
    li r3, 0x0
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_fn_804EB938_00000FCC
lbl_fn_804EB938_00000F9C:
    lwz r0, 0x5e4(r28)
    add r5, r0, r3
    lwz r0, 0xd0(r5)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804EB938_00000FC4
    lbz r0, 0xcc(r5)
    cmplw r4, r0
    bne lbl_fn_804EB938_00000FC4
    b lbl_fn_804EB938_00000FD0
lbl_fn_804EB938_00000FC4:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804EB938_00000F9C
lbl_fn_804EB938_00000FCC:
    li r5, 0x0
lbl_fn_804EB938_00000FD0:
    cmpwi r5, 0x0
    beq lbl_fn_804EB938_0000100C
    cmpwi r27, 0x0
    beq lbl_fn_804EB938_0000100C
    beq lbl_fn_804EB938_00001000
    lbz r0, 0xcc(r27)
    cmplwi r0, 0xff
    beq lbl_fn_804EB938_00001000
    rlwinm. r0, r0, 0, 24, 27
    beq lbl_fn_804EB938_00001000
    li r0, 0x1
    b lbl_fn_804EB938_00001004
lbl_fn_804EB938_00001000:
    li r0, 0x0
lbl_fn_804EB938_00001004:
    cmpwi r0, 0x0
    bne lbl_fn_804EB938_00001014
lbl_fn_804EB938_0000100C:
    li r0, 0x0
    b lbl_fn_804EB938_0000102C
lbl_fn_804EB938_00001014:
    lbz r0, 0xcc(r27)
    lbz r3, 0xcc(r5)
    clrlwi r0, r0, 28
    subf r0, r3, r0
    cntlzw r0, r0
    srwi r0, r0, 5
lbl_fn_804EB938_0000102C:
    cmpwi r0, 0x0
    beq lbl_fn_804EB938_00001080
lbl_fn_804EB938_00001034:
    lwz r3, 0x0(r30)
    lwz r4, 0x0(r29)
    cmplw r4, r3
    beq lbl_fn_804EB938_00001050
    lwz r0, 0x4(r30)
    cmplw r4, r0
    bne lbl_fn_804EB938_00001080
lbl_fn_804EB938_00001050:
    cmpwi r3, 0x0
    beq lbl_fn_804EB938_00001080
    lwz r4, 0x4(r30)
    li r5, 0x1
    bl fn_8016F3D0
    cmpwi r3, 0x0
    bne lbl_fn_804EB938_00001080
    lwz r3, lbl_8087F610
    lwz r4, 0x0(r30)
    lwz r5, 0x4(r30)
    bl fn_804E8BF8
    b lbl_fn_804EB938_00001098
lbl_fn_804EB938_00001080:
    addi r23, r23, 0x1
    addi r24, r24, 0xd5c
lbl_fn_804EB938_00001088:
    lwz r28, lbl_8087F610
    lwz r0, 0x5e8(r28)
    cmpw r23, r0
    blt lbl_fn_804EB938_00000EE4
lbl_fn_804EB938_00001098:
    lwz r0, lbl_8087F048
    cmpwi r0, 0x0
    beq lbl_fn_804EB938_000010E4
    lwz r3, 0x8(r30)
    bl fn_80219E6C
    bl fn_8021A684
    cmpwi r3, 0x0
    beq lbl_fn_804EB938_000010E4
    lwz r3, lbl_8087F048
    li r6, 0x5a
    lwz r4, 0x4(r30)
    li r7, -0x1
    lwz r5, 0x0(r30)
    bl fn_80102EAC
    lwz r3, lbl_8087F048
    li r6, 0x0
    lwz r4, 0x0(r30)
    lwz r5, 0x4(r30)
    bl fn_801031D0
lbl_fn_804EB938_000010E4:
    lwz r4, lbl_8087F628
    lwz r27, lbl_8087F610
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804EB938_0000111C
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804EB938_00001110
    li r0, 0x0
    b lbl_fn_804EB938_00001138
lbl_fn_804EB938_00001110:
    bl fn_806B0E30
    clrlwi r0, r3, 24
    b lbl_fn_804EB938_00001138
lbl_fn_804EB938_0000111C:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804EB938_00001130
    li r3, 0x0
    b lbl_fn_804EB938_00001134
lbl_fn_804EB938_00001130:
    bl fn_806A8E40
lbl_fn_804EB938_00001134:
    clrlwi r0, r3, 24
lbl_fn_804EB938_00001138:
    lwz r5, 0x5e8(r27)
    clrlwi r4, r0, 24
    li r3, 0x0
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_fn_804EB938_0000117C
lbl_fn_804EB938_00001150:
    lwz r0, 0x5e4(r27)
    add r5, r0, r3
    lwz r0, 0xd0(r5)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804EB938_00001174
    lbz r0, 0xcc(r5)
    cmplw r4, r0
    beq lbl_fn_804EB938_0000117C
lbl_fn_804EB938_00001174:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804EB938_00001150
lbl_fn_804EB938_0000117C:
    addi r5, r1, 0x198
    addi r3, r1, 0x1fc
    cmplw r5, r3
    li r4, 0x0
    li r0, 0x2
    sth r0, 0x170(r1)
    sth r4, 0x172(r1)
    stw r4, 0x184(r1)
    stw r4, 0x188(r1)
    stw r4, 0x18c(r1)
    stw r4, 0x190(r1)
    stw r4, 0x194(r1)
    bge lbl_fn_804EB938_000011E4
    addi r3, r3, 0x13
    li r0, 0x14
    subf r3, r5, r3
    divwu r3, r3, r0
    mtctr r3
    bge lbl_fn_804EB938_000011E4
lbl_fn_804EB938_000011C8:
    stw r4, 0x0(r5)
    stw r4, 0x4(r5)
    stw r4, 0x8(r5)
    stw r4, 0xc(r5)
    stw r4, 0x10(r5)
    addi r5, r5, 0x14
    bdnz lbl_fn_804EB938_000011C8
lbl_fn_804EB938_000011E4:
    lbz r0, lbl_8087F5F8
    extsb. r0, r0
    bne lbl_fn_804EB938_00001210
    lis r4, fn_804D818C@ha
    lis r5, lbl_807C8AE8@ha
    addi r4, r4, fn_804D818C@l
    la r3, lbl_8087F5FC
    addi r5, r5, lbl_807C8AE8@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8087F5F8
lbl_fn_804EB938_00001210:
    cmpwi r31, 0x7
    li r3, 0x0
    li r0, 0x8e
    stw r3, lbl_8087F5FC
    sth r0, 0x170(r1)
    bne lbl_fn_804EB938_00001230
    li r31, 0x1022
    b lbl_fn_804EB938_0000123C
lbl_fn_804EB938_00001230:
    cmpwi r31, 0x6
    bne lbl_fn_804EB938_0000123C
    li r31, 0x1021
lbl_fn_804EB938_0000123C:
    sth r31, 0x172(r1)
    lwz r0, 0x8(r30)
    stw r0, 0x174(r1)
    lwz r0, 0xc(r30)
    oris r0, r0, 0x1000
    stw r0, 0x178(r1)
    lfs f0, 0x14(r30)
    stfs f0, 0x17c(r1)
    lwz r3, 0x4(r30)
    cmpwi r3, 0x0
    beq lbl_fn_804EB938_00001270
    lwz r0, 0xfe4(r3)
    b lbl_fn_804EB938_00001274
lbl_fn_804EB938_00001270:
    li r0, 0x1
lbl_fn_804EB938_00001274:
    stw r0, 0x180(r1)
    lwz r4, 0x0(r30)
    cmpwi r4, 0x0
    beq lbl_fn_804EB938_000012E0
    addi r6, r1, 0x170
    li r7, 0x0
    li r5, 0x0
    b lbl_fn_804EB938_000012CC
lbl_fn_804EB938_00001294:
    add r3, r3, r5
    addi r5, r5, 0x14
    lwz r0, 0x308(r3)
    addi r7, r7, 0x1
    stw r0, 0x14(r6)
    lwz r0, 0x30c(r3)
    stw r0, 0x18(r6)
    lwz r0, 0x310(r3)
    stw r0, 0x1c(r6)
    lwz r0, 0x314(r3)
    stw r0, 0x20(r6)
    lwz r0, 0x318(r3)
    stw r0, 0x24(r6)
    addi r6, r6, 0x14
lbl_fn_804EB938_000012CC:
    lwz r4, 0x0(r30)
    lwz r0, 0xad8(r4)
    addi r3, r4, 0x7d4
    cmplw r7, r0
    blt lbl_fn_804EB938_00001294
lbl_fn_804EB938_000012E0:
    lwz r3, lbl_8087F610
    bl fn_804EAEE4
    srwi r0, r3, 16
    sth r0, 0x3c(r1)
    lwz r3, lbl_8087F610
    lbz r4, 0x3c(r1)
    lbz r0, 0x3d(r1)
    stb r4, 0x1fc(r1)
    stb r0, 0x1fd(r1)
    lwz r4, 0x4(r30)
    bl fn_804EAEE4
    srwi r0, r3, 16
    sth r0, 0x38(r1)
    lbz r3, 0x38(r1)
    lbz r0, 0x39(r1)
    stb r3, 0x1fe(r1)
    stb r0, 0x1ff(r1)
    bl fn_804AE3BC
    mr r5, r31
    addi r6, r1, 0x174
    li r4, -0x1
    li r7, 0x1
    bl fn_8050E098
    b lbl_fn_804EB938_00002000
    lwz r4, 0x0(r5)
    mr r3, r27
    bl fn_804EAEE4
    srwi r0, r3, 16
    sth r0, 0x44(r1)
    lwz r3, lbl_8087F610
    lwz r4, 0x4(r30)
    bl fn_804EAEE4
    lbz r0, lbl_8087F5F8
    srwi r5, r3, 16
    li r4, 0x2
    li r3, 0x1023
    extsb. r0, r0
    sth r5, 0x40(r1)
    sth r4, 0x70(r1)
    sth r3, 0x72(r1)
    bne lbl_fn_804EB938_000013A4
    lis r4, fn_804D818C@ha
    lis r5, lbl_807C8AE8@ha
    addi r4, r4, fn_804D818C@l
    la r3, lbl_8087F5FC
    addi r5, r5, lbl_807C8AE8@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8087F5F8
lbl_fn_804EB938_000013A4:
    li r3, 0x0
    li r0, 0x11
    stw r3, lbl_8087F5FC
    addi r23, r1, 0x74
    lwz r7, 0x7c(r1)
    sth r0, 0x70(r1)
    lbz r5, 0x44(r1)
    lwz r3, 0x8(r30)
    lbz r4, 0x45(r1)
    lwz r0, 0x4(r3)
    stw r0, 0x74(r1)
    lbz r3, 0x40(r1)
    lwz r6, 0x94(r30)
    lbz r0, 0x41(r1)
    oris r6, r6, 0x1000
    stw r6, 0x78(r1)
    lwz r6, 0x44(r30)
    rlwimi r7, r6, 28, 0, 3
    stw r7, 0x7c(r1)
    lwz r6, 0x3c(r30)
    rlwimi r7, r6, 24, 4, 7
    stw r7, 0x7c(r1)
    lwz r6, 0x40(r30)
    rlwimi r7, r6, 16, 8, 15
    stw r7, 0x7c(r1)
    lwz r6, 0x48(r30)
    rlwimi r7, r6, 15, 16, 16
    stw r7, 0x7c(r1)
    stb r5, 0x7f(r1)
    stb r4, 0x80(r1)
    stb r3, 0x81(r1)
    stb r0, 0x82(r1)
    bl fn_804AE3BC
    mr r6, r23
    li r4, -0x1
    li r5, 0x1023
    li r7, 0x1
    bl fn_8050E098
    b lbl_fn_804EB938_00002000
    lbz r0, lbl_8087F5F8
    li r4, 0x2
    li r3, 0x1031
    sth r4, 0x64(r1)
    extsb. r0, r0
    sth r3, 0x66(r1)
    bne lbl_fn_804EB938_0000147C
    lis r4, fn_804D818C@ha
    lis r5, lbl_807C8AE8@ha
    addi r4, r4, fn_804D818C@l
    la r3, lbl_8087F5FC
    addi r5, r5, lbl_807C8AE8@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8087F5F8
lbl_fn_804EB938_0000147C:
    cmpwi r30, 0x0
    li r4, 0x0
    li r0, 0x7
    stw r4, lbl_8087F5FC
    addi r23, r1, 0x68
    sth r0, 0x64(r1)
    beq lbl_fn_804EB938_0000149C
    lwz r4, 0x0(r30)
lbl_fn_804EB938_0000149C:
    neg r3, r30
    lbz r0, 0x6c(r1)
    or r3, r3, r30
    stw r4, 0x68(r1)
    rlwimi r0, r3, 8, 24, 24
    stb r0, 0x6c(r1)
    bl fn_804AE3BC
    mr r6, r23
    li r4, -0x1
    li r5, 0x1031
    li r7, 0x1
    bl fn_8050E098
    b lbl_fn_804EB938_00002000
    lbz r0, lbl_8087F5F8
    li r4, 0x2
    li r3, 0x103f
    sth r4, 0x50(r1)
    extsb. r0, r0
    sth r3, 0x52(r1)
    bne lbl_fn_804EB938_0000150C
    lis r4, fn_804D818C@ha
    lis r5, lbl_807C8AE8@ha
    addi r4, r4, fn_804D818C@l
    la r3, lbl_8087F5FC
    addi r5, r5, lbl_807C8AE8@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8087F5F8
lbl_fn_804EB938_0000150C:
    li r4, 0x0
    li r3, 0x6
    li r0, -0x1
    sth r3, 0x50(r1)
    lwz r5, lbl_8087F610
    addi r23, r1, 0x54
    stw r4, lbl_8087F5FC
    li r6, 0x0
    li r3, 0x0
    stw r0, 0x54(r1)
    lwz r0, 0x5f4(r5)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_804EB938_00001568
lbl_fn_804EB938_00001544:
    lwz r4, 0x5f0(r5)
    lwzx r0, r4, r3
    cmplw r0, r30
    bne lbl_fn_804EB938_0000155C
    stw r6, 0x54(r1)
    b lbl_fn_804EB938_00001568
lbl_fn_804EB938_0000155C:
    addi r6, r6, 0x1
    addi r3, r3, 0xb4
    bdnz lbl_fn_804EB938_00001544
lbl_fn_804EB938_00001568:
    lwz r0, 0x54(r1)
    cmpwi r0, 0x0
    blt lbl_fn_804EB938_00002000
    bl fn_804AE3BC
    mr r6, r23
    li r4, -0x1
    li r5, 0x103f
    li r7, 0x1
    bl fn_8050E098
    b lbl_fn_804EB938_00002000
    lwz r0, 0x24(r5)
    cmpwi r0, 0x0
    bne lbl_fn_804EB938_0000165C
    lbz r0, lbl_8087F5F8
    li r4, 0x2
    li r3, 0x1024
    sth r4, 0xf8(r1)
    extsb. r0, r0
    sth r3, 0xfa(r1)
    bne lbl_fn_804EB938_000015D8
    lis r4, fn_804D818C@ha
    lis r5, lbl_807C8AE8@ha
    addi r4, r4, fn_804D818C@l
    la r3, lbl_8087F5FC
    addi r5, r5, lbl_807C8AE8@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8087F5F8
lbl_fn_804EB938_000015D8:
    li r3, 0x0
    li r0, 0x28
    stw r3, lbl_8087F5FC
    addi r23, r1, 0xfc
    lwz r3, lbl_8087F610
    sth r0, 0xf8(r1)
    lwz r4, 0x0(r30)
    bl fn_804EAEE4
    srwi r0, r3, 16
    sth r0, 0x34(r1)
    lbz r3, 0x34(r1)
    lbz r0, 0x35(r1)
    stb r3, 0x120(r1)
    stb r0, 0x121(r1)
    lwz r0, 0x4(r30)
    stw r0, 0xfc(r1)
    psq_l f1, 0x8(r30), 0, 0
    lfs f2, 0x10(r30)
    stfs f2, 0x108(r1)
    psq_st f1, 0x4(r23), 0, 0
    psq_l f1, 0x14(r30), 0, 0
    lfs f2, 0x1c(r30)
    stfs f2, 0x114(r1)
    psq_st f1, 0x10(r23), 0, 0
    lwz r0, 0x20(r30)
    stw r0, 0x11c(r1)
    bl fn_804AE3BC
    mr r6, r23
    li r4, -0x1
    li r5, 0x1024
    li r7, 0x0
    bl fn_8050E098
    b lbl_fn_804EB938_00002000
lbl_fn_804EB938_0000165C:
    lbz r0, lbl_8087F5F8
    li r4, 0x2
    li r3, 0x1025
    sth r4, 0x128(r1)
    extsb. r0, r0
    sth r3, 0x12a(r1)
    bne lbl_fn_804EB938_00001698
    lis r4, fn_804D818C@ha
    lis r5, lbl_807C8AE8@ha
    addi r4, r4, fn_804D818C@l
    la r3, lbl_8087F5FC
    addi r5, r5, lbl_807C8AE8@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8087F5F8
lbl_fn_804EB938_00001698:
    li r3, 0x0
    li r0, 0x46
    stw r3, lbl_8087F5FC
    addi r23, r1, 0x12c
    lwz r3, lbl_8087F610
    sth r0, 0x128(r1)
    lwz r4, 0x0(r30)
    bl fn_804EAEE4
    srwi r0, r3, 16
    sth r0, 0x30(r1)
    lwz r3, lbl_8087F610
    lbz r4, 0x30(r1)
    lbz r0, 0x31(r1)
    stb r4, 0x150(r1)
    stb r0, 0x151(r1)
    lwz r0, 0x4(r30)
    stw r0, 0x12c(r1)
    psq_l f1, 0x8(r30), 0, 0
    lfs f2, 0x10(r30)
    stfs f2, 0x138(r1)
    psq_st f1, 0x4(r23), 0, 0
    psq_l f1, 0x14(r30), 0, 0
    lfs f2, 0x1c(r30)
    stfs f2, 0x144(r1)
    psq_st f1, 0x10(r23), 0, 0
    lwz r0, 0x20(r30)
    stw r0, 0x14c(r1)
    lwz r4, 0x24(r30)
    lwz r4, 0x0(r4)
    bl fn_804EAEE4
    srwi r0, r3, 16
    sth r0, 0x2c(r1)
    lbz r3, 0x2c(r1)
    lbz r0, 0x2d(r1)
    stb r3, 0x152(r1)
    stb r0, 0x153(r1)
    lwz r3, 0x24(r30)
    lfs f0, 0x4(r3)
    stfs f0, 0x154(r1)
    lfs f0, 0x8(r3)
    stfs f0, 0x158(r1)
    lfs f0, 0xc(r3)
    stfs f0, 0x15c(r1)
    lfs f0, 0x10(r3)
    stfs f0, 0x160(r1)
    lfs f0, 0x14(r3)
    stfs f0, 0x164(r1)
    lfs f0, 0x18(r3)
    stfs f0, 0x168(r1)
    lwz r0, 0x1c(r3)
    stw r0, 0x16c(r1)
    bl fn_804AE3BC
    mr r6, r23
    li r4, -0x1
    li r5, 0x1025
    li r7, 0x0
    bl fn_8050E098
    b lbl_fn_804EB938_00002000
    lbz r0, lbl_8087F5F8
    li r4, 0x2
    li r3, 0x102e
    sth r4, 0xcc(r1)
    extsb. r0, r0
    sth r3, 0xce(r1)
    bne lbl_fn_804EB938_000017BC
    lis r4, fn_804D818C@ha
    lis r5, lbl_807C8AE8@ha
    addi r4, r4, fn_804D818C@l
    la r3, lbl_8087F5FC
    addi r5, r5, lbl_807C8AE8@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8087F5F8
lbl_fn_804EB938_000017BC:
    li r3, 0x0
    li r0, 0x28
    stw r3, lbl_8087F5FC
    mr r4, r24
    lwz r3, lbl_8087F610
    addi r23, r1, 0xd0
    sth r0, 0xcc(r1)
    bl fn_804EAEE4
    srwi r0, r3, 16
    sth r0, 0x28(r1)
    lbz r3, 0x28(r1)
    lbz r0, 0x29(r1)
    stb r3, 0xf4(r1)
    stb r0, 0xf5(r1)
    lwz r0, 0x0(r30)
    stw r0, 0xec(r1)
    psq_l f1, 0x4(r30), 0, 0
    lfs f2, 0xc(r30)
    stfs f2, 0xd8(r1)
    psq_st f1, 0x0(r23), 0, 0
    psq_l f1, 0x10(r30), 0, 0
    lfs f2, 0x18(r30)
    stfs f2, 0xe4(r1)
    psq_st f1, 0xc(r23), 0, 0
    lwz r0, 0x1c(r30)
    stw r0, 0xf0(r1)
    lwz r0, 0x20(r30)
    oris r0, r0, 0x1000
    stw r0, 0xe8(r1)
    bl fn_804AE3BC
    mr r6, r23
    li r4, -0x1
    li r5, 0x102e
    li r7, 0x0
    bl fn_8050E098
    b lbl_fn_804EB938_00002000
    lwz r3, 0x0(r5)
    li r23, 0x0
    bl fn_80219E6C
    cmpwi r3, 0x0
    beq lbl_fn_804EB938_00001894
    lbz r0, 0x1(r3)
    extsb r0, r0
    cmpwi r0, 0x1
    beq lbl_fn_804EB938_00001878
    cmpwi r0, 0x0
    bne lbl_fn_804EB938_00001890
lbl_fn_804EB938_00001878:
    lwz r0, 0x6c(r3)
    cmpwi r0, 0x0
    bgt lbl_fn_804EB938_00001890
    lwz r0, 0x70(r3)
    cmpwi r0, 0x0
    ble lbl_fn_804EB938_00001894
lbl_fn_804EB938_00001890:
    li r23, 0x1
lbl_fn_804EB938_00001894:
    cmpwi r23, 0x1
    li r25, 0x102f
    bne lbl_fn_804EB938_000018A4
    li r25, 0x1049
lbl_fn_804EB938_000018A4:
    lbz r0, lbl_8087F5F8
    li r3, 0x2
    sth r3, 0xa8(r1)
    extsb. r0, r0
    sth r25, 0xaa(r1)
    bne lbl_fn_804EB938_000018DC
    lis r4, fn_804D818C@ha
    lis r5, lbl_807C8AE8@ha
    addi r4, r4, fn_804D818C@l
    la r3, lbl_8087F5FC
    addi r5, r5, lbl_807C8AE8@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8087F5F8
lbl_fn_804EB938_000018DC:
    li r3, 0x0
    li r0, 0x21
    stw r3, lbl_8087F5FC
    mr r4, r24
    lwz r3, lbl_8087F610
    addi r24, r1, 0xac
    sth r0, 0xa8(r1)
    bl fn_804EAEE4
    srwi r0, r3, 16
    sth r0, 0x24(r1)
    lbz r3, 0x24(r1)
    lbz r0, 0x25(r1)
    stb r3, 0xc9(r1)
    stb r0, 0xca(r1)
    lhz r0, 0xc8(r1)
    lwz r3, 0x0(r30)
    stw r3, 0xac(r1)
    psq_l f1, 0x4(r30), 0, 0
    lfs f2, 0xc(r30)
    stfs f2, 0xb8(r1)
    psq_st f1, 0x4(r24), 0, 0
    psq_l f1, 0x10(r30), 0, 0
    lfs f2, 0x18(r30)
    stfs f2, 0xc4(r1)
    psq_st f1, 0x10(r24), 0, 0
    lwz r3, 0x1c(r30)
    rlwimi r0, r3, 15, 16, 16
    sth r0, 0xc8(r1)
    bl fn_804AE3BC
    mr r5, r25
    mr r6, r24
    mr r7, r23
    li r4, -0x1
    bl fn_8050E098
    b lbl_fn_804EB938_00002000
    lbz r0, lbl_8087F5F8
    li r4, 0x2
    li r3, 0x1027
    sth r4, 0x84(r1)
    extsb. r0, r0
    sth r3, 0x86(r1)
    bne lbl_fn_804EB938_000019A4
    lis r4, fn_804D818C@ha
    lis r5, lbl_807C8AE8@ha
    addi r4, r4, fn_804D818C@l
    la r3, lbl_8087F5FC
    addi r5, r5, lbl_807C8AE8@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8087F5F8
lbl_fn_804EB938_000019A4:
    li r29, 0x0
    li r0, 0x21
    stw r29, lbl_8087F5FC
    addi r23, r1, 0x88
    lwz r3, lbl_8087F610
    sth r0, 0x84(r1)
    lwz r0, 0x48(r24)
    stw r0, 0x88(r1)
    lwz r0, 0x4c(r24)
    sth r0, 0x94(r1)
    lwz r0, 0x0(r30)
    sth r0, 0x96(r1)
    lwz r0, 0x4(r30)
    stw r0, 0x8c(r1)
    lwz r0, 0x8(r30)
    stw r0, 0x90(r1)
    psq_l f1, 0x14(r30), 0, 0
    lfs f2, 0x1c(r30)
    stfs f2, 0xa0(r1)
    psq_st f1, 0x10(r23), 0, 0
    lwz r4, 0x10(r30)
    bl fn_804EAEE4
    srwi r0, r3, 16
    sth r0, 0x20(r1)
    lbz r3, 0x20(r1)
    lbz r0, 0x21(r1)
    stb r3, 0xa4(r1)
    stb r0, 0xa5(r1)
    lwz r3, 0x50(r24)
    cmpwi r3, 0x12
    bne lbl_fn_804EB938_00001CC4
    lwz r0, 0x0(r30)
    cmpwi r0, 0x5
    bne lbl_fn_804EB938_00001CC4
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804EB938_00001A5C
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804EB938_00001A50
    b lbl_fn_804EB938_00001A78
lbl_fn_804EB938_00001A50:
    bl fn_806B0E30
    clrlwi r29, r3, 24
    b lbl_fn_804EB938_00001A78
lbl_fn_804EB938_00001A5C:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804EB938_00001A6C
    b lbl_fn_804EB938_00001A74
lbl_fn_804EB938_00001A6C:
    bl fn_806A8E40
    mr r29, r3
lbl_fn_804EB938_00001A74:
    clrlwi r29, r29, 24
lbl_fn_804EB938_00001A78:
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804EB938_00001AAC
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804EB938_00001AA0
    li r0, 0x0
    b lbl_fn_804EB938_00001AB0
lbl_fn_804EB938_00001AA0:
    bl fn_806B1250
    clrlwi r0, r3, 24
    b lbl_fn_804EB938_00001AB0
lbl_fn_804EB938_00001AAC:
    li r0, 0x0
lbl_fn_804EB938_00001AB0:
    clrlwi r3, r29, 24
    clrlwi r0, r0, 24
    subf r0, r3, r0
    cntlzw r0, r0
    srwi r0, r0, 5
    cmpwi r0, 0x1
    bne lbl_fn_804EB938_00001AF0
    li r0, -0x2
    stw r0, 0x2a0(r24)
    bl fn_804AE3BC
    mr r6, r23
    li r4, -0x1
    li r5, 0x1027
    li r7, 0x1
    bl fn_8050E098
    b lbl_fn_804EB938_00002000
lbl_fn_804EB938_00001AF0:
    lwz r4, lbl_8087F628
    lwz r25, lbl_8087F610
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804EB938_00001B28
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804EB938_00001B1C
    li r0, 0x0
    b lbl_fn_804EB938_00001B44
lbl_fn_804EB938_00001B1C:
    bl fn_806B0E30
    clrlwi r0, r3, 24
    b lbl_fn_804EB938_00001B44
lbl_fn_804EB938_00001B28:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804EB938_00001B3C
    li r3, 0x0
    b lbl_fn_804EB938_00001B40
lbl_fn_804EB938_00001B3C:
    bl fn_806A8E40
lbl_fn_804EB938_00001B40:
    clrlwi r0, r3, 24
lbl_fn_804EB938_00001B44:
    lwz r5, 0x5e8(r25)
    clrlwi r4, r0, 24
    li r3, 0x0
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_fn_804EB938_00001B8C
lbl_fn_804EB938_00001B5C:
    lwz r0, 0x5e4(r25)
    add r5, r0, r3
    lwz r0, 0xd0(r5)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804EB938_00001B84
    lbz r0, 0xcc(r5)
    cmplw r4, r0
    bne lbl_fn_804EB938_00001B84
    b lbl_fn_804EB938_00001B90
lbl_fn_804EB938_00001B84:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804EB938_00001B5C
lbl_fn_804EB938_00001B8C:
    li r5, 0x0
lbl_fn_804EB938_00001B90:
    lbz r3, 0xd52(r5)
    addi r0, r3, 0x1
    stb r0, 0xd52(r5)
    lwz r4, lbl_8087F628
    stb r3, 0xa6(r1)
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804EB938_00001BD4
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804EB938_00001BC8
    li r4, 0x0
    b lbl_fn_804EB938_00001BD8
lbl_fn_804EB938_00001BC8:
    bl fn_806B1250
    clrlwi r4, r3, 24
    b lbl_fn_804EB938_00001BD8
lbl_fn_804EB938_00001BD4:
    li r4, 0x0
lbl_fn_804EB938_00001BD8:
    lwz r7, lbl_8087F610
    li r0, 0x20
    lbz r5, 0xa6(r1)
    li r3, 0x0
    mr r6, r7
    mtctr r0
lbl_fn_804EB938_00001BF0:
    lwz r0, 0x48(r6)
    cmpwi r0, 0x0
    bne lbl_fn_804EB938_00001C0C
    mulli r0, r3, 0x18
    add r3, r7, r0
    addi r6, r3, 0x48
    b lbl_fn_804EB938_00001C1C
lbl_fn_804EB938_00001C0C:
    addi r6, r6, 0x18
    addi r3, r3, 0x1
    bdnz lbl_fn_804EB938_00001BF0
    li r6, 0x0
lbl_fn_804EB938_00001C1C:
    cmpwi r6, 0x0
    bne lbl_fn_804EB938_00001C2C
    li r3, 0x0
    b lbl_fn_804EB938_00001C50
lbl_fn_804EB938_00001C2C:
    li r0, 0x1
    stw r0, 0x0(r6)
    li r3, 0x0
    stw r3, 0x4(r6)
    li r0, 0x96
    li r3, 0x1
    stb r4, 0x14(r6)
    stw r0, 0x8(r6)
    stb r5, 0x15(r6)
lbl_fn_804EB938_00001C50:
    cmplwi r3, 0x1
    bne lbl_fn_804EB938_00002000
    lbz r0, 0xa6(r1)
    stw r0, 0x2a0(r24)
    bl fn_804AE3BC
    mr r6, r23
    li r4, -0x1
    li r5, 0x1027
    li r7, 0x1
    bl fn_8050E098
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804EB938_00001CAC
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804EB938_00001CA0
    li r23, 0x0
    b lbl_fn_804EB938_00001CB0
lbl_fn_804EB938_00001CA0:
    bl fn_806B1250
    clrlwi r23, r3, 24
    b lbl_fn_804EB938_00001CB0
lbl_fn_804EB938_00001CAC:
    li r23, 0x0
lbl_fn_804EB938_00001CB0:
    bl fn_804AE3BC
    clrlwi r4, r23, 24
    li r5, 0x1
    bl fn_8050DDE0
    b lbl_fn_804EB938_00002000
lbl_fn_804EB938_00001CC4:
    cmpwi r3, 0x7
    bne lbl_fn_804EB938_00001FE8
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804EB938_00001D00
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804EB938_00001CF4
    li r25, 0x0
    b lbl_fn_804EB938_00001D1C
lbl_fn_804EB938_00001CF4:
    bl fn_806B0E30
    clrlwi r25, r3, 24
    b lbl_fn_804EB938_00001D1C
lbl_fn_804EB938_00001D00:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804EB938_00001D14
    li r3, 0x0
    b lbl_fn_804EB938_00001D18
lbl_fn_804EB938_00001D14:
    bl fn_806A8E40
lbl_fn_804EB938_00001D18:
    clrlwi r25, r3, 24
lbl_fn_804EB938_00001D1C:
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804EB938_00001D50
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804EB938_00001D44
    li r0, 0x0
    b lbl_fn_804EB938_00001D54
lbl_fn_804EB938_00001D44:
    bl fn_806B1250
    clrlwi r0, r3, 24
    b lbl_fn_804EB938_00001D54
lbl_fn_804EB938_00001D50:
    li r0, 0x0
lbl_fn_804EB938_00001D54:
    clrlwi r3, r25, 24
    clrlwi r0, r0, 24
    subf r0, r3, r0
    cntlzw r0, r0
    srwi r0, r0, 5
    cmpwi r0, 0x1
    bne lbl_fn_804EB938_00001E14
    li r0, -0x2
    stw r0, 0x524(r24)
    lwz r0, 0x0(r30)
    cmpwi r0, 0x3
    bne lbl_fn_804EB938_00001DF8
    lwz r0, 0x8(r30)
    cmpwi r0, -0x1
    bne lbl_fn_804EB938_00001DF8
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804EB938_00001DC4
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804EB938_00001DB8
    li r0, 0x0
    b lbl_fn_804EB938_00001DE0
lbl_fn_804EB938_00001DB8:
    bl fn_806B0E30
    clrlwi r0, r3, 24
    b lbl_fn_804EB938_00001DE0
lbl_fn_804EB938_00001DC4:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804EB938_00001DD8
    li r3, 0x0
    b lbl_fn_804EB938_00001DDC
lbl_fn_804EB938_00001DD8:
    bl fn_806A8E40
lbl_fn_804EB938_00001DDC:
    clrlwi r0, r3, 24
lbl_fn_804EB938_00001DE0:
    lbz r3, 0x520(r24)
    clrlwi r0, r0, 24
    cmplw r3, r0
    bne lbl_fn_804EB938_00001DF8
    li r0, 0xff
    stb r0, 0x520(r24)
lbl_fn_804EB938_00001DF8:
    bl fn_804AE3BC
    mr r6, r23
    li r4, -0x1
    li r5, 0x1027
    li r7, 0x1
    bl fn_8050E098
    b lbl_fn_804EB938_00002000
lbl_fn_804EB938_00001E14:
    lwz r4, lbl_8087F628
    lwz r25, lbl_8087F610
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804EB938_00001E4C
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804EB938_00001E40
    li r0, 0x0
    b lbl_fn_804EB938_00001E68
lbl_fn_804EB938_00001E40:
    bl fn_806B0E30
    clrlwi r0, r3, 24
    b lbl_fn_804EB938_00001E68
lbl_fn_804EB938_00001E4C:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804EB938_00001E60
    li r3, 0x0
    b lbl_fn_804EB938_00001E64
lbl_fn_804EB938_00001E60:
    bl fn_806A8E40
lbl_fn_804EB938_00001E64:
    clrlwi r0, r3, 24
lbl_fn_804EB938_00001E68:
    lwz r5, 0x5e8(r25)
    clrlwi r4, r0, 24
    li r3, 0x0
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_fn_804EB938_00001EB0
lbl_fn_804EB938_00001E80:
    lwz r0, 0x5e4(r25)
    add r5, r0, r3
    lwz r0, 0xd0(r5)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804EB938_00001EA8
    lbz r0, 0xcc(r5)
    cmplw r4, r0
    bne lbl_fn_804EB938_00001EA8
    b lbl_fn_804EB938_00001EB4
lbl_fn_804EB938_00001EA8:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804EB938_00001E80
lbl_fn_804EB938_00001EB0:
    li r5, 0x0
lbl_fn_804EB938_00001EB4:
    lbz r3, 0xd52(r5)
    addi r0, r3, 0x1
    stb r0, 0xd52(r5)
    lwz r4, lbl_8087F628
    stb r3, 0xa6(r1)
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804EB938_00001EF8
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804EB938_00001EEC
    li r4, 0x0
    b lbl_fn_804EB938_00001EFC
lbl_fn_804EB938_00001EEC:
    bl fn_806B1250
    clrlwi r4, r3, 24
    b lbl_fn_804EB938_00001EFC
lbl_fn_804EB938_00001EF8:
    li r4, 0x0
lbl_fn_804EB938_00001EFC:
    lwz r7, lbl_8087F610
    li r0, 0x20
    lbz r5, 0xa6(r1)
    li r3, 0x0
    mr r6, r7
    mtctr r0
lbl_fn_804EB938_00001F14:
    lwz r0, 0x48(r6)
    cmpwi r0, 0x0
    bne lbl_fn_804EB938_00001F30
    mulli r0, r3, 0x18
    add r3, r7, r0
    addi r6, r3, 0x48
    b lbl_fn_804EB938_00001F40
lbl_fn_804EB938_00001F30:
    addi r6, r6, 0x18
    addi r3, r3, 0x1
    bdnz lbl_fn_804EB938_00001F14
    li r6, 0x0
lbl_fn_804EB938_00001F40:
    cmpwi r6, 0x0
    bne lbl_fn_804EB938_00001F50
    li r3, 0x0
    b lbl_fn_804EB938_00001F74
lbl_fn_804EB938_00001F50:
    li r0, 0x1
    stw r0, 0x0(r6)
    li r3, 0x0
    stw r3, 0x4(r6)
    li r0, 0x96
    li r3, 0x1
    stb r4, 0x14(r6)
    stw r0, 0x8(r6)
    stb r5, 0x15(r6)
lbl_fn_804EB938_00001F74:
    cmplwi r3, 0x1
    bne lbl_fn_804EB938_00002000
    lbz r0, 0xa6(r1)
    stw r0, 0x524(r24)
    bl fn_804AE3BC
    mr r6, r23
    li r4, -0x1
    li r5, 0x1027
    li r7, 0x1
    bl fn_8050E098
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804EB938_00001FD0
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804EB938_00001FC4
    li r23, 0x0
    b lbl_fn_804EB938_00001FD4
lbl_fn_804EB938_00001FC4:
    bl fn_806B1250
    clrlwi r23, r3, 24
    b lbl_fn_804EB938_00001FD4
lbl_fn_804EB938_00001FD0:
    li r23, 0x0
lbl_fn_804EB938_00001FD4:
    bl fn_804AE3BC
    clrlwi r4, r23, 24
    li r5, 0x1
    bl fn_8050DDE0
    b lbl_fn_804EB938_00002000
lbl_fn_804EB938_00001FE8:
    bl fn_804AE3BC
    mr r6, r23
    li r4, -0x1
    li r5, 0x1027
    li r7, 0x1
    bl fn_8050E098
lbl_fn_804EB938_00002000:
    addi r11, r1, 0x230
    bl _restgpr_23
    lwz r0, 0x234(r1)
    mtlr r0
    addi r1, r1, 0x230
    blr
}
