#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_800844D8(void);
extern void fn_800CB3A0(void);
extern void fn_8011F8F4(void);
extern void fn_8011F91C(void);
extern void fn_8011FC10(void);
extern void fn_8011FE3C(void);
extern void fn_80154654(void);
extern void fn_80155DAC(void);
extern void fn_8016E970(void);
extern void fn_8016F824(void);
extern void fn_8016FDCC(void);
extern void fn_8017039C(void);
extern void fn_80370094(void);
extern void fn_80370320(void);
extern void fn_803935FC(void);
extern void fn_8039BF04(void);
extern void fn_8039C7F0(void);
extern void fn_8039CCD0(void);
extern void fn_803B4C24(void);
extern void fn_803B57B0(void);
extern void fn_803B57EC(void);
extern void fn_803B583C(void);
extern void fn_803B58D8(void);
extern void fn_803CC6B4(void);
extern void fn_805F9940(void);
extern void fn_80680770(void);
extern void fn_80686EA4(void);
extern void memmove(void);

/* External data declarations */
extern u8 jumptable_8078AEF8[];
extern u8 lbl_8074ED24[];
extern u8 lbl_8074F8CC[];
extern u8 lbl_8078B2F8[];

/* Small data declarations */
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F408;
extern u32 lbl_8087F430;
extern u32 lbl_8087F490;
extern u32 lbl_8087F890;
extern u32 lbl_8087F8A0;
extern u32 lbl_8087FA20;
extern u32 lbl_80885B10;
extern u32 lbl_80885B30;
extern u32 lbl_80885B78;

/* Function declarations */
void fn_8039E280(void);
void fn_8039E328(void);
void fn_8039E80C(void);
void fn_8039E834(void);
void fn_8039E8A8(void);
void fn_8039E9C4(void);
void fn_8039E9D4(void);
void fn_8039EA50(void);
void fn_8039EACC(void);
void fn_8039EBB8(void);
void fn_8039F08C(void);
void fn_8039F600(void);
void fn_8039F7D8(void);
void fn_8039F878(void);
void fn_8039F9A4(void);

asm void fn_8039E280(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r27, r3
    mr r28, r4
    lwz r4, 0x8(r5)
    mr r29, r5
    lwz r6, lbl_8087F490
    lwz r3, 0x88(r3)
    lwz r31, 0x263c(r6)
    bl fn_803CC6B4
    lwz r5, lbl_8087F8A0
    cmpwi r3, 0x0
    mr r4, r3
    lwz r30, 0x48(r5)
    beq lbl_fn_8039E280_00000070
    mr r3, r31
    bl fn_803B58D8
    mr r3, r30
    li r4, 0x5
    bl fn_8016E970
    li r0, 0x0
    stw r0, 0xb4(r27)
    li r0, 0x1
    stw r0, 0xa8(r27)
    stw r0, 0x4(r28)
    b lbl_fn_8039E280_00000078
lbl_fn_8039E280_00000070:
    li r0, 0x0
    stw r0, 0x4(r28)
lbl_fn_8039E280_00000078:
    lwz r0, 0x0(r29)
    lis r3, lbl_8074ED24@ha
    addi r3, r3, lbl_8074ED24@l
    slwi r0, r0, 2
    lwzx r0, r3, r0
    add r0, r29, r0
    stw r0, 0x0(r28)
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8039E328(void)
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
    stw r28, 0x10(r1)
    lwz r0, 0xa8(r3)
    lwz r6, lbl_8087F490
    cmpwi r0, 0x0
    lwz r31, 0x263c(r6)
    beq lbl_fn_8039E328_00000524
    lwz r7, 0x0(r5)
    lis r6, lbl_8074ED24@ha
    li r0, 0x1
    stw r0, 0x4(r4)
    slwi r0, r7, 2
    addi r6, r6, lbl_8074ED24@l
    lwzx r0, r6, r0
    li r28, -0x1
    add r0, r5, r0
    stw r0, 0x0(r4)
    lwz r4, 0xb4(r3)
    addi r0, r4, 0x1
    stw r0, 0xb4(r3)
    lwz r3, 0x54(r31)
    bl fn_803B4C24
    cmpwi r3, 0x0
    beq lbl_fn_8039E328_00000148
    lwz r5, 0x54(r31)
    addi r3, r1, 0x8
    lfs f1, lbl_80885B30
    li r4, 0x0
    lwz r28, 0x7c(r5)
    bl fn_803935FC
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_8039E328_00000148:
    lwz r3, 0x2c(r30)
    lwz r0, 0xb4(r29)
    cmpw r0, r3
    blt lbl_fn_8039E328_0000016C
    cmpwi r3, 0x0
    ble lbl_fn_8039E328_0000016C
    lwz r3, 0x54(r31)
    lwz r3, 0x80(r3)
    subi r28, r3, 0x1
lbl_fn_8039E328_0000016C:
    cmpwi r28, 0x0
    blt lbl_fn_8039E328_0000056C
    slwi r0, r28, 2
    add r4, r30, r0
    lwz r0, 0xc(r4)
    cmpwi r0, 0x0
    bne lbl_fn_8039E328_000001A8
    lwz r0, 0x0(r30)
    lis r3, lbl_8074ED24@ha
    addi r3, r3, lbl_8074ED24@l
    slwi r0, r0, 2
    lwzx r0, r3, r0
    add r0, r30, r0
    stw r0, 0xac(r29)
    b lbl_fn_8039E328_00000224
lbl_fn_8039E328_000001A8:
    cmpwi r0, 0x1
    bne lbl_fn_8039E328_000001BC
    li r0, 0x0
    stw r0, 0xac(r29)
    b lbl_fn_8039E328_00000224
lbl_fn_8039E328_000001BC:
    lwz r5, 0x94(r29)
    lis r3, lbl_8074ED24@ha
    addi r3, r3, lbl_8074ED24@l
    lwz r4, 0x1c(r4)
    lwz r0, 0xcc(r5)
    addi r5, r5, 0xd0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8039E328_0000021C
lbl_fn_8039E328_000001E0:
    lwz r6, 0x0(r5)
    cmplwi r6, 0x9
    bne lbl_fn_8039E328_0000020C
    lwz r0, 0x4(r5)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_8039E328_0000020C
    lwz r0, 0x8(r5)
    cmpw r0, r4
    bne lbl_fn_8039E328_0000020C
    b lbl_fn_8039E328_00000220
lbl_fn_8039E328_0000020C:
    slwi r0, r6, 2
    lwzx r0, r3, r0
    add r5, r5, r0
    bdnz lbl_fn_8039E328_000001E0
lbl_fn_8039E328_0000021C:
    li r5, 0x0
lbl_fn_8039E328_00000220:
    stw r5, 0xac(r29)
lbl_fn_8039E328_00000224:
    li r0, 0x0
    stw r0, 0xa8(r29)
    mr r3, r31
    bl fn_803B57EC
    lwz r6, 0xac(r29)
    cmpwi r6, 0x0
    beq lbl_fn_8039E328_00000328
    lwz r5, 0x94(r29)
    li r4, 0x0
    lwz r7, 0xcc(r5)
    addi r8, r5, 0xd0
    mr r10, r8
    cmpwi r7, 0x0
    beq lbl_fn_8039E328_00000320
    cmplwi r7, 0x8
    subi r9, r7, 0x8
    ble lbl_fn_8039E328_000002F4
    addi r0, r9, 0x7
    lis r3, lbl_8074ED24@ha
    srwi r0, r0, 3
    addi r3, r3, lbl_8074ED24@l
    mtctr r0
    cmplwi r9, 0x0
    ble lbl_fn_8039E328_000002F4
lbl_fn_8039E328_00000284:
    lwz r0, 0x0(r10)
    addi r4, r4, 0x8
    slwi r0, r0, 2
    lwzx r0, r3, r0
    add r9, r10, r0
    lwzx r0, r10, r0
    slwi r0, r0, 2
    lwzx r0, r3, r0
    lwzux r0, r9, r0
    slwi r0, r0, 2
    lwzx r0, r3, r0
    lwzux r0, r9, r0
    slwi r0, r0, 2
    lwzx r0, r3, r0
    lwzux r0, r9, r0
    slwi r0, r0, 2
    lwzx r0, r3, r0
    lwzux r0, r9, r0
    slwi r0, r0, 2
    lwzx r0, r3, r0
    lwzux r0, r9, r0
    slwi r0, r0, 2
    lwzx r0, r3, r0
    lwzux r0, r9, r0
    slwi r0, r0, 2
    lwzx r0, r3, r0
    add r10, r9, r0
    bdnz lbl_fn_8039E328_00000284
lbl_fn_8039E328_000002F4:
    lis r3, lbl_8074ED24@ha
    subf r0, r4, r7
    addi r3, r3, lbl_8074ED24@l
    mtctr r0
    cmplw r4, r7
    bge lbl_fn_8039E328_00000320
lbl_fn_8039E328_0000030C:
    lwz r0, 0x0(r10)
    slwi r0, r0, 2
    lwzx r0, r3, r0
    add r10, r10, r0
    bdnz lbl_fn_8039E328_0000030C
lbl_fn_8039E328_00000320:
    cmplw r6, r10
    blt lbl_fn_8039E328_00000330
lbl_fn_8039E328_00000328:
    li r3, 0x0
    b lbl_fn_8039E328_000004F8
lbl_fn_8039E328_00000330:
    lwz r0, 0x4(r6)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_8039E328_0000034C
    lwz r4, 0x0(r6)
    cmplwi r4, 0x9
    bne lbl_fn_8039E328_000004C0
lbl_fn_8039E328_0000034C:
    lwz r0, 0x0(r6)
    lis r3, lbl_8074ED24@ha
    addi r3, r3, lbl_8074ED24@l
    slwi r0, r0, 2
    lwzx r0, r3, r0
    add. r6, r6, r0
    beq lbl_fn_8039E328_0000043C
    lwz r5, 0xcc(r5)
    li r4, 0x0
    cmpwi r5, 0x0
    beq lbl_fn_8039E328_00000434
    cmplwi r5, 0x8
    subi r7, r5, 0x8
    ble lbl_fn_8039E328_00000408
    addi r0, r7, 0x7
    srwi r0, r0, 3
    mtctr r0
    cmplwi r7, 0x0
    ble lbl_fn_8039E328_00000408
lbl_fn_8039E328_00000398:
    lwz r0, 0x0(r8)
    addi r4, r4, 0x8
    slwi r0, r0, 2
    lwzx r0, r3, r0
    add r7, r8, r0
    lwzx r0, r8, r0
    slwi r0, r0, 2
    lwzx r0, r3, r0
    lwzux r0, r7, r0
    slwi r0, r0, 2
    lwzx r0, r3, r0
    lwzux r0, r7, r0
    slwi r0, r0, 2
    lwzx r0, r3, r0
    lwzux r0, r7, r0
    slwi r0, r0, 2
    lwzx r0, r3, r0
    lwzux r0, r7, r0
    slwi r0, r0, 2
    lwzx r0, r3, r0
    lwzux r0, r7, r0
    slwi r0, r0, 2
    lwzx r0, r3, r0
    lwzux r0, r7, r0
    slwi r0, r0, 2
    lwzx r0, r3, r0
    add r8, r7, r0
    bdnz lbl_fn_8039E328_00000398
lbl_fn_8039E328_00000408:
    lis r3, lbl_8074ED24@ha
    subf r0, r4, r5
    addi r3, r3, lbl_8074ED24@l
    mtctr r0
    cmplw r4, r5
    bge lbl_fn_8039E328_00000434
lbl_fn_8039E328_00000420:
    lwz r0, 0x0(r8)
    slwi r0, r0, 2
    lwzx r0, r3, r0
    add r8, r8, r0
    bdnz lbl_fn_8039E328_00000420
lbl_fn_8039E328_00000434:
    cmplw r6, r8
    blt lbl_fn_8039E328_00000444
lbl_fn_8039E328_0000043C:
    li r3, 0x0
    b lbl_fn_8039E328_000004F8
lbl_fn_8039E328_00000444:
    lwz r0, 0x4(r6)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_8039E328_00000460
    lwz r4, 0x0(r6)
    cmplwi r4, 0x9
    bne lbl_fn_8039E328_00000484
lbl_fn_8039E328_00000460:
    lwz r0, 0x0(r6)
    lis r4, lbl_8074ED24@ha
    addi r4, r4, lbl_8074ED24@l
    mr r3, r29
    slwi r0, r0, 2
    lwzx r0, r4, r0
    add r4, r6, r0
    bl fn_8039CCD0
    b lbl_fn_8039E328_000004F8
lbl_fn_8039E328_00000484:
    subi r0, r4, 0x7
    cmplwi r0, 0x1
    bgt lbl_fn_8039E328_00000498
    li r3, 0x1
    b lbl_fn_8039E328_000004F8
lbl_fn_8039E328_00000498:
    lwz r3, lbl_8087F0A8
    lwz r0, 0xb8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8039E328_000004B8
    cmplwi r4, 0xf
    bne lbl_fn_8039E328_000004B8
    li r3, 0x1
    b lbl_fn_8039E328_000004F8
lbl_fn_8039E328_000004B8:
    li r3, 0x0
    b lbl_fn_8039E328_000004F8
lbl_fn_8039E328_000004C0:
    subi r0, r4, 0x7
    cmplwi r0, 0x1
    bgt lbl_fn_8039E328_000004D4
    li r3, 0x1
    b lbl_fn_8039E328_000004F8
lbl_fn_8039E328_000004D4:
    lwz r3, lbl_8087F0A8
    lwz r0, 0xb8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8039E328_000004F4
    cmplwi r4, 0xf
    bne lbl_fn_8039E328_000004F4
    li r3, 0x1
    b lbl_fn_8039E328_000004F8
lbl_fn_8039E328_000004F4:
    li r3, 0x0
lbl_fn_8039E328_000004F8:
    cmpwi r3, 0x0
    bne lbl_fn_8039E328_0000056C
    lwz r3, lbl_8087F490
    li r4, 0x0
    lwz r3, 0x263c(r3)
    bl fn_803B57B0
    lwz r3, lbl_8087F8A0
    li r4, 0x1
    lwz r3, 0x48(r3)
    bl fn_8016E970
    b lbl_fn_8039E328_0000056C
lbl_fn_8039E328_00000524:
    lwz r0, 0xac(r3)
    li r3, 0x1
    stw r0, 0x0(r4)
    li r0, 0x1
    lwz r5, 0x50(r31)
    cmpwi r5, 0x2
    beq lbl_fn_8039E328_0000054C
    cmpwi r5, 0x4
    beq lbl_fn_8039E328_0000054C
    li r0, 0x0
lbl_fn_8039E328_0000054C:
    cmpwi r0, 0x0
    bne lbl_fn_8039E328_00000560
    cmpwi r5, 0x0
    beq lbl_fn_8039E328_00000560
    li r3, 0x0
lbl_fn_8039E328_00000560:
    cntlzw r0, r3
    srwi r0, r0, 5
    stw r0, 0x4(r4)
lbl_fn_8039E328_0000056C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8039E80C(void)
{
    nofralloc
    lwz r6, 0x0(r5)
    lis r3, lbl_8074ED24@ha
    li r0, 0x0
    stw r0, 0x4(r4)
    slwi r0, r6, 2
    addi r3, r3, lbl_8074ED24@l
    lwzx r0, r3, r0
    add r0, r5, r0
    stw r0, 0x0(r4)
    blr
}

asm void fn_8039E834(void)
{
    nofralloc
    lwz r6, 0x94(r3)
    lis r3, lbl_8074ED24@ha
    addi r3, r3, lbl_8074ED24@l
    lwz r5, 0x8(r5)
    lwz r0, 0xcc(r6)
    addi r6, r6, 0xd0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8039E834_00000614
lbl_fn_8039E834_000005D8:
    lwz r7, 0x0(r6)
    cmplwi r7, 0x9
    bne lbl_fn_8039E834_00000604
    lwz r0, 0x4(r6)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_8039E834_00000604
    lwz r0, 0x8(r6)
    cmpw r0, r5
    bne lbl_fn_8039E834_00000604
    b lbl_fn_8039E834_00000618
lbl_fn_8039E834_00000604:
    slwi r0, r7, 2
    lwzx r0, r3, r0
    add r6, r6, r0
    bdnz lbl_fn_8039E834_000005D8
lbl_fn_8039E834_00000614:
    li r6, 0x0
lbl_fn_8039E834_00000618:
    li r0, 0x0
    stw r6, 0x0(r4)
    stw r0, 0x4(r4)
    blr
}

asm void fn_8039E8A8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    lwz r4, 0x8(r5)
    stw r30, 0x18(r1)
    mr r30, r5
    lwz r5, 0xc(r5)
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r6, 0x18(r30)
    lwz r7, 0x10(r30)
    lwz r8, 0x14(r30)
    bl fn_8039C7F0
    cmpwi r3, 0x0
    beq lbl_fn_8039E8A8_00000678
    lwz r0, 0x1c(r30)
    lwz r6, 0x20(r30)
    b lbl_fn_8039E8A8_00000680
lbl_fn_8039E8A8_00000678:
    lwz r0, 0x24(r30)
    lwz r6, 0x28(r30)
lbl_fn_8039E8A8_00000680:
    cmpwi r0, 0x0
    bne lbl_fn_8039E8A8_000006A8
    lwz r0, 0x0(r30)
    lis r3, lbl_8074ED24@ha
    addi r3, r3, lbl_8074ED24@l
    slwi r0, r0, 2
    lwzx r0, r3, r0
    add r0, r30, r0
    stw r0, 0x0(r31)
    b lbl_fn_8039E8A8_00000720
lbl_fn_8039E8A8_000006A8:
    cmpwi r0, 0x1
    bne lbl_fn_8039E8A8_000006BC
    li r0, 0x0
    stw r0, 0x0(r31)
    b lbl_fn_8039E8A8_00000720
lbl_fn_8039E8A8_000006BC:
    lwz r4, 0x94(r29)
    lis r3, lbl_8074ED24@ha
    addi r3, r3, lbl_8074ED24@l
    lwz r0, 0xcc(r4)
    addi r4, r4, 0xd0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8039E8A8_00000718
lbl_fn_8039E8A8_000006DC:
    lwz r5, 0x0(r4)
    cmplwi r5, 0x9
    bne lbl_fn_8039E8A8_00000708
    lwz r0, 0x4(r4)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_8039E8A8_00000708
    lwz r0, 0x8(r4)
    cmpw r0, r6
    bne lbl_fn_8039E8A8_00000708
    b lbl_fn_8039E8A8_0000071C
lbl_fn_8039E8A8_00000708:
    slwi r0, r5, 2
    lwzx r0, r3, r0
    add r4, r4, r0
    bdnz lbl_fn_8039E8A8_000006DC
lbl_fn_8039E8A8_00000718:
    li r4, 0x0
lbl_fn_8039E8A8_0000071C:
    stw r4, 0x0(r31)
lbl_fn_8039E8A8_00000720:
    li r0, 0x0
    stw r0, 0x4(r31)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8039E9C4(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r4)
    stw r0, 0x4(r4)
    blr
}

asm void fn_8039E9D4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    stw r30, 0x8(r1)
    mr r30, r4
    li r4, 0x1
    lwz r3, lbl_8087F8A0
    lwz r3, 0x48(r3)
    lwz r0, 0x12a8(r3)
    ori r0, r0, 0x4
    stw r0, 0x12a8(r3)
    lwz r3, lbl_8087F8A0
    lwz r3, 0x48(r3)
    bl fn_80155DAC
    lwz r4, 0x0(r31)
    lis r3, lbl_8074ED24@ha
    li r0, 0x0
    stw r0, 0x4(r30)
    slwi r0, r4, 2
    addi r3, r3, lbl_8074ED24@l
    lwzx r0, r3, r0
    add r0, r31, r0
    stw r0, 0x0(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8039EA50(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    stw r30, 0x8(r1)
    mr r30, r4
    li r4, 0x0
    lwz r3, lbl_8087F8A0
    lwz r3, 0x48(r3)
    lwz r0, 0x12a8(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x12a8(r3)
    lwz r3, lbl_8087F8A0
    lwz r3, 0x48(r3)
    bl fn_80155DAC
    lwz r4, 0x0(r31)
    lis r3, lbl_8074ED24@ha
    li r0, 0x0
    stw r0, 0x4(r30)
    slwi r0, r4, 2
    addi r3, r3, lbl_8074ED24@l
    lwzx r0, r3, r0
    add r0, r31, r0
    stw r0, 0x0(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8039EACC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    lwz r4, 0x8(r5)
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    mr r29, r5
    lwz r6, lbl_8087F490
    lwz r3, 0x263c(r6)
    bl fn_803B583C
    lfs f1, lbl_80885B30
    addi r3, r1, 0x8
    li r4, 0x1
    bl fn_803935FC
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    lwz r3, lbl_8087F0A8
    lwz r0, 0xb8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8039EACC_000008D8
    lwz r3, lbl_8087F490
    li r0, 0x1
    lwz r3, 0x263c(r3)
    lwz r3, 0x50(r3)
    cmpwi r3, 0x2
    beq lbl_fn_8039EACC_000008D0
    cmpwi r3, 0x4
    beq lbl_fn_8039EACC_000008D0
    li r0, 0x0
lbl_fn_8039EACC_000008D0:
    cmpwi r0, 0x0
    bne lbl_fn_8039EACC_000008E8
lbl_fn_8039EACC_000008D8:
    lwz r3, lbl_8087F8A0
    li r4, 0x5
    lwz r3, 0x48(r3)
    bl fn_8016E970
lbl_fn_8039EACC_000008E8:
    lwz r0, 0x0(r29)
    lis r3, lbl_8074ED24@ha
    li r5, 0x0
    li r4, 0x14
    slwi r0, r0, 2
    addi r3, r3, lbl_8074ED24@l
    lwzx r3, r3, r0
    li r0, 0x1
    stw r5, 0xb8(r30)
    add r3, r29, r3
    stw r4, 0xbc(r30)
    stw r3, 0x0(r31)
    stw r0, 0x4(r31)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8039EBB8(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    lwz r0, 0xb8(r3)
    mr r29, r3
    lwz r6, lbl_8087F490
    mr r30, r4
    cmpwi r0, 0x0
    mr r31, r5
    lwz r28, 0x263c(r6)
    li r27, 0x0
    bne lbl_fn_8039EBB8_00000A04
    lwz r4, 0xbc(r3)
    subic. r0, r4, 0x1
    stw r0, 0xbc(r3)
    bgt lbl_fn_8039EBB8_00000A18
    lwz r3, 0x54(r28)
    bl fn_803B4C24
    cmpwi r3, 0x0
    beq lbl_fn_8039EBB8_00000A18
    lwz r3, 0x54(r28)
    lwz r0, 0x7c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8039EBB8_000009C4
    lwz r4, 0xc(r31)
    li r5, 0x1
    lwz r0, 0x10(r31)
    mr r3, r28
    stw r5, 0xb8(r29)
    stw r4, 0xc0(r29)
    stw r0, 0xc4(r29)
    bl fn_803B57EC
    b lbl_fn_8039EBB8_000009E4
lbl_fn_8039EBB8_000009C4:
    lwz r4, 0x14(r31)
    li r5, 0x1
    lwz r0, 0x18(r31)
    mr r3, r28
    stw r5, 0xb8(r29)
    stw r4, 0xc0(r29)
    stw r0, 0xc4(r29)
    bl fn_803B57EC
lbl_fn_8039EBB8_000009E4:
    lfs f1, lbl_80885B30
    addi r3, r1, 0x8
    li r4, 0x0
    bl fn_803935FC
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_8039EBB8_00000A18
lbl_fn_8039EBB8_00000A04:
    lwz r3, 0x54(r28)
    lwz r0, 0x78(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8039EBB8_00000A18
    li r27, 0x1
lbl_fn_8039EBB8_00000A18:
    cmpwi r27, 0x0
    beq lbl_fn_8039EBB8_00000DD0
    lwz r0, 0xc0(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8039EBB8_00000A4C
    lwz r0, 0x0(r31)
    lis r3, lbl_8074ED24@ha
    addi r3, r3, lbl_8074ED24@l
    slwi r0, r0, 2
    lwzx r0, r3, r0
    add r0, r31, r0
    stw r0, 0x0(r30)
    b lbl_fn_8039EBB8_00000AC8
lbl_fn_8039EBB8_00000A4C:
    cmpwi r0, 0x1
    bne lbl_fn_8039EBB8_00000A60
    li r0, 0x0
    stw r0, 0x0(r30)
    b lbl_fn_8039EBB8_00000AC8
lbl_fn_8039EBB8_00000A60:
    lwz r4, 0x94(r29)
    lis r3, lbl_8074ED24@ha
    addi r3, r3, lbl_8074ED24@l
    lwz r5, 0xc4(r29)
    lwz r0, 0xcc(r4)
    addi r4, r4, 0xd0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8039EBB8_00000AC0
lbl_fn_8039EBB8_00000A84:
    lwz r6, 0x0(r4)
    cmplwi r6, 0x9
    bne lbl_fn_8039EBB8_00000AB0
    lwz r0, 0x4(r4)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_8039EBB8_00000AB0
    lwz r0, 0x8(r4)
    cmpw r0, r5
    bne lbl_fn_8039EBB8_00000AB0
    b lbl_fn_8039EBB8_00000AC4
lbl_fn_8039EBB8_00000AB0:
    slwi r0, r6, 2
    lwzx r0, r3, r0
    add r4, r4, r0
    bdnz lbl_fn_8039EBB8_00000A84
lbl_fn_8039EBB8_00000AC0:
    li r4, 0x0
lbl_fn_8039EBB8_00000AC4:
    stw r4, 0x0(r30)
lbl_fn_8039EBB8_00000AC8:
    lwz r3, lbl_8087F0A8
    lwz r0, 0xb8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8039EBB8_00000DB4
    lwz r6, 0x0(r30)
    cmpwi r6, 0x0
    beq lbl_fn_8039EBB8_00000BCC
    lwz r5, 0x94(r29)
    li r4, 0x0
    lwz r7, 0xcc(r5)
    addi r8, r5, 0xd0
    mr r11, r8
    cmpwi r7, 0x0
    beq lbl_fn_8039EBB8_00000BC4
    cmplwi r7, 0x8
    subi r10, r7, 0x8
    ble lbl_fn_8039EBB8_00000B98
    addi r9, r10, 0x7
    lis r3, lbl_8074ED24@ha
    srwi r9, r9, 3
    addi r3, r3, lbl_8074ED24@l
    mtctr r9
    cmplwi r10, 0x0
    ble lbl_fn_8039EBB8_00000B98
lbl_fn_8039EBB8_00000B28:
    lwz r9, 0x0(r11)
    addi r4, r4, 0x8
    slwi r9, r9, 2
    lwzx r9, r3, r9
    add r10, r11, r9
    lwzx r9, r11, r9
    slwi r9, r9, 2
    lwzx r9, r3, r9
    lwzux r9, r10, r9
    slwi r9, r9, 2
    lwzx r9, r3, r9
    lwzux r9, r10, r9
    slwi r9, r9, 2
    lwzx r9, r3, r9
    lwzux r9, r10, r9
    slwi r9, r9, 2
    lwzx r9, r3, r9
    lwzux r9, r10, r9
    slwi r9, r9, 2
    lwzx r9, r3, r9
    lwzux r9, r10, r9
    slwi r9, r9, 2
    lwzx r9, r3, r9
    lwzux r9, r10, r9
    slwi r9, r9, 2
    lwzx r9, r3, r9
    add r11, r10, r9
    bdnz lbl_fn_8039EBB8_00000B28
lbl_fn_8039EBB8_00000B98:
    lis r9, lbl_8074ED24@ha
    subf r3, r4, r7
    addi r9, r9, lbl_8074ED24@l
    mtctr r3
    cmplw r4, r7
    bge lbl_fn_8039EBB8_00000BC4
lbl_fn_8039EBB8_00000BB0:
    lwz r3, 0x0(r11)
    slwi r3, r3, 2
    lwzx r3, r9, r3
    add r11, r11, r3
    bdnz lbl_fn_8039EBB8_00000BB0
lbl_fn_8039EBB8_00000BC4:
    cmplw r6, r11
    blt lbl_fn_8039EBB8_00000BD4
lbl_fn_8039EBB8_00000BCC:
    li r3, 0x0
    b lbl_fn_8039EBB8_00000D88
lbl_fn_8039EBB8_00000BD4:
    lwz r3, 0x4(r6)
    clrlwi r3, r3, 31
    cmplwi r3, 0x1
    beq lbl_fn_8039EBB8_00000BF0
    lwz r4, 0x0(r6)
    cmplwi r4, 0x9
    bne lbl_fn_8039EBB8_00000D58
lbl_fn_8039EBB8_00000BF0:
    lwz r4, 0x0(r6)
    lis r3, lbl_8074ED24@ha
    addi r3, r3, lbl_8074ED24@l
    slwi r4, r4, 2
    lwzx r4, r3, r4
    add. r6, r6, r4
    beq lbl_fn_8039EBB8_00000CDC
    lwz r5, 0xcc(r5)
    li r4, 0x0
    cmpwi r5, 0x0
    beq lbl_fn_8039EBB8_00000CD4
    cmplwi r5, 0x8
    subi r9, r5, 0x8
    ble lbl_fn_8039EBB8_00000CA8
    addi r7, r9, 0x7
    srwi r7, r7, 3
    mtctr r7
    cmplwi r9, 0x0
    ble lbl_fn_8039EBB8_00000CA8
lbl_fn_8039EBB8_00000C3C:
    lwz r7, 0x0(r8)
    addi r4, r4, 0x8
    slwi r7, r7, 2
    lwzx r7, r3, r7
    lwzux r7, r8, r7
    slwi r7, r7, 2
    lwzx r7, r3, r7
    lwzux r7, r8, r7
    slwi r7, r7, 2
    lwzx r7, r3, r7
    lwzux r7, r8, r7
    slwi r7, r7, 2
    lwzx r7, r3, r7
    lwzux r7, r8, r7
    slwi r7, r7, 2
    lwzx r7, r3, r7
    lwzux r7, r8, r7
    slwi r7, r7, 2
    lwzx r7, r3, r7
    lwzux r7, r8, r7
    slwi r7, r7, 2
    lwzx r7, r3, r7
    lwzux r7, r8, r7
    slwi r7, r7, 2
    lwzx r7, r3, r7
    add r8, r8, r7
    bdnz lbl_fn_8039EBB8_00000C3C
lbl_fn_8039EBB8_00000CA8:
    lis r7, lbl_8074ED24@ha
    subf r3, r4, r5
    addi r7, r7, lbl_8074ED24@l
    mtctr r3
    cmplw r4, r5
    bge lbl_fn_8039EBB8_00000CD4
lbl_fn_8039EBB8_00000CC0:
    lwz r3, 0x0(r8)
    slwi r3, r3, 2
    lwzx r3, r7, r3
    add r8, r8, r3
    bdnz lbl_fn_8039EBB8_00000CC0
lbl_fn_8039EBB8_00000CD4:
    cmplw r6, r8
    blt lbl_fn_8039EBB8_00000CE4
lbl_fn_8039EBB8_00000CDC:
    li r3, 0x0
    b lbl_fn_8039EBB8_00000D88
lbl_fn_8039EBB8_00000CE4:
    lwz r3, 0x4(r6)
    clrlwi r3, r3, 31
    cmplwi r3, 0x1
    beq lbl_fn_8039EBB8_00000D00
    lwz r4, 0x0(r6)
    cmplwi r4, 0x9
    bne lbl_fn_8039EBB8_00000D24
lbl_fn_8039EBB8_00000D00:
    lwz r0, 0x0(r6)
    lis r4, lbl_8074ED24@ha
    addi r4, r4, lbl_8074ED24@l
    mr r3, r29
    slwi r0, r0, 2
    lwzx r0, r4, r0
    add r4, r6, r0
    bl fn_8039CCD0
    b lbl_fn_8039EBB8_00000D88
lbl_fn_8039EBB8_00000D24:
    subi r3, r4, 0x7
    cmplwi r3, 0x1
    bgt lbl_fn_8039EBB8_00000D38
    li r3, 0x1
    b lbl_fn_8039EBB8_00000D88
lbl_fn_8039EBB8_00000D38:
    cmpwi r0, 0x0
    beq lbl_fn_8039EBB8_00000D50
    cmplwi r4, 0xf
    bne lbl_fn_8039EBB8_00000D50
    li r3, 0x1
    b lbl_fn_8039EBB8_00000D88
lbl_fn_8039EBB8_00000D50:
    li r3, 0x0
    b lbl_fn_8039EBB8_00000D88
lbl_fn_8039EBB8_00000D58:
    subi r3, r4, 0x7
    cmplwi r3, 0x1
    bgt lbl_fn_8039EBB8_00000D6C
    li r3, 0x1
    b lbl_fn_8039EBB8_00000D88
lbl_fn_8039EBB8_00000D6C:
    cmpwi r0, 0x0
    beq lbl_fn_8039EBB8_00000D84
    cmplwi r4, 0xf
    bne lbl_fn_8039EBB8_00000D84
    li r3, 0x1
    b lbl_fn_8039EBB8_00000D88
lbl_fn_8039EBB8_00000D84:
    li r3, 0x0
lbl_fn_8039EBB8_00000D88:
    cmpwi r3, 0x0
    bne lbl_fn_8039EBB8_00000DC4
    lwz r3, lbl_8087F490
    li r4, 0x0
    lwz r3, 0x263c(r3)
    bl fn_803B57B0
    lwz r3, lbl_8087F8A0
    li r4, 0x1
    lwz r3, 0x48(r3)
    bl fn_8016E970
    b lbl_fn_8039EBB8_00000DC4
lbl_fn_8039EBB8_00000DB4:
    lwz r3, lbl_8087F8A0
    li r4, 0x1
    lwz r3, 0x48(r3)
    bl fn_8016E970
lbl_fn_8039EBB8_00000DC4:
    li r0, 0x0
    stw r0, 0x4(r30)
    b lbl_fn_8039EBB8_00000DF4
lbl_fn_8039EBB8_00000DD0:
    lwz r4, 0x0(r31)
    lis r3, lbl_8074ED24@ha
    li r0, 0x1
    stw r0, 0x4(r30)
    slwi r0, r4, 2
    addi r3, r3, lbl_8074ED24@l
    lwzx r0, r3, r0
    add r0, r31, r0
    stw r0, 0x0(r30)
lbl_fn_8039EBB8_00000DF4:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8039F08C(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    lwz r6, 0x10(r5)
    stw r0, 0x54(r1)
    cmpwi r6, 0x0
    lwz r0, 0x14(r5)
    stmw r22, 0x28(r1)
    mr r23, r3
    mr r24, r4
    mr r25, r5
    li r30, 0x0
    beq lbl_fn_8039F08C_00000E58
    cmpwi r6, 0x1
    beq lbl_fn_8039F08C_00000E84
    cmpwi r6, 0x2
    beq lbl_fn_8039F08C_00000EC0
    cmpwi r6, 0x3
    beq lbl_fn_8039F08C_00000ED4
    b lbl_fn_8039F08C_00000EE4
lbl_fn_8039F08C_00000E58:
    lwz r0, 0xdc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8039F08C_00000E70
    lwz r3, lbl_8087F8A0
    lwz r3, 0x48(r3)
    b lbl_fn_8039F08C_00000E7C
lbl_fn_8039F08C_00000E70:
    lwz r3, lbl_8087F8A0
    li r4, 0x1
    bl fn_8011F8F4
lbl_fn_8039F08C_00000E7C:
    mr r30, r3
    b lbl_fn_8039F08C_00000EE4
lbl_fn_8039F08C_00000E84:
    lwz r3, lbl_8087F890
    mr r4, r0
    bl fn_8011FE3C
    lwz r0, lbl_8087FA20
    mr r30, r3
    cmpwi r0, 0x0
    beq lbl_fn_8039F08C_00000EE4
    cmpwi r3, 0x0
    beq lbl_fn_8039F08C_00000EE4
    lwz r0, 0x38(r3)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_8039F08C_00000EE4
    li r30, 0x0
    b lbl_fn_8039F08C_00000EE4
lbl_fn_8039F08C_00000EC0:
    lwz r3, lbl_8087F408
    mr r4, r0
    bl fn_8011FC10
    mr r30, r3
    b lbl_fn_8039F08C_00000EE4
lbl_fn_8039F08C_00000ED4:
    lwz r3, lbl_8087F8A0
    mr r4, r0
    bl fn_8011F91C
    mr r30, r3
lbl_fn_8039F08C_00000EE4:
    cmpwi r30, 0x0
    beq lbl_fn_8039F08C_00001348
    lwz r0, 0x38(r30)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_8039F08C_00001348
    lwz r0, 0x48(r30)
    cmpwi r0, 0x2
    bne lbl_fn_8039F08C_00000F18
    lwz r0, 0x7e0(r30)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_8039F08C_00001348
lbl_fn_8039F08C_00000F18:
    lwz r0, 0x8(r25)
    cmpwi r0, 0x0
    beq lbl_fn_8039F08C_00000F38
    cmpwi r0, 0x1
    beq lbl_fn_8039F08C_00000F4C
    cmpwi r0, 0x2
    beq lbl_fn_8039F08C_00000F60
    b lbl_fn_8039F08C_00000F70
lbl_fn_8039F08C_00000F38:
    lwz r4, 0xc(r25)
    mr r3, r30
    li r5, 0x0
    bl fn_8016F824
    b lbl_fn_8039F08C_00000F70
lbl_fn_8039F08C_00000F4C:
    lwz r4, 0xc(r25)
    mr r3, r30
    li r5, 0x0
    bl fn_8016FDCC
    b lbl_fn_8039F08C_00000F70
lbl_fn_8039F08C_00000F60:
    lwz r4, 0xc(r25)
    mr r3, r30
    li r5, 0x0
    bl fn_8017039C
lbl_fn_8039F08C_00000F70:
    lwz r0, 0x18(r25)
    cmpwi r0, 0x0
    beq lbl_fn_8039F08C_00001348
    lwz r0, 0x130(r23)
    li r3, 0x0
    li r4, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8039F08C_00001000
lbl_fn_8039F08C_00000F94:
    lwz r6, 0x12c(r23)
    lwzx r0, r6, r4
    cmplw r0, r30
    bne lbl_fn_8039F08C_00000FF4
    lwz r0, 0x130(r23)
    mulli r4, r3, 0x14
    lis r3, 0x6666
    mulli r0, r0, 0x14
    addi r5, r3, 0x6667
    add r3, r6, r4
    add r0, r6, r0
    addi r4, r3, 0x14
    subf r0, r3, r0
    mulhw r0, r5, r0
    srawi r0, r0, 3
    srwi r5, r0, 31
    add r5, r0, r5
    subi r0, r5, 0x1
    mulli r5, r0, 0x14
    bl memmove
    lwz r3, 0x130(r23)
    subi r0, r3, 0x1
    stw r0, 0x130(r23)
    b lbl_fn_8039F08C_00001000
lbl_fn_8039F08C_00000FF4:
    addi r4, r4, 0x14
    addi r3, r3, 0x1
    bdnz lbl_fn_8039F08C_00000F94
lbl_fn_8039F08C_00001000:
    lwz r26, 0x94(r23)
    lis r3, lbl_8074ED24@ha
    addi r3, r3, lbl_8074ED24@l
    lwz r4, 0x1c(r25)
    lwz r0, 0xcc(r26)
    addi r29, r26, 0xd0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8039F08C_00001060
lbl_fn_8039F08C_00001024:
    lwz r5, 0x0(r29)
    cmplwi r5, 0x9
    bne lbl_fn_8039F08C_00001050
    lwz r0, 0x4(r29)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_8039F08C_00001050
    lwz r0, 0x8(r29)
    cmpw r0, r4
    bne lbl_fn_8039F08C_00001050
    b lbl_fn_8039F08C_00001064
lbl_fn_8039F08C_00001050:
    slwi r0, r5, 2
    lwzx r0, r3, r0
    add r29, r29, r0
    bdnz lbl_fn_8039F08C_00001024
lbl_fn_8039F08C_00001060:
    li r29, 0x0
lbl_fn_8039F08C_00001064:
    lwz r3, 0x130(r23)
    lwz r4, 0x134(r23)
    lwz r28, 0x9c(r23)
    cmplw r3, r4
    lwz r27, 0xa0(r23)
    bge lbl_fn_8039F08C_000010A8
    addi r4, r3, 0x1
    lwz r3, 0x12c(r23)
    subi r0, r4, 0x1
    stw r4, 0x130(r23)
    mulli r0, r0, 0x14
    stwux r30, r3, r0
    stw r26, 0x4(r3)
    stw r29, 0x8(r3)
    stw r28, 0xc(r3)
    stw r27, 0x10(r3)
    b lbl_fn_8039F08C_00001348
lbl_fn_8039F08C_000010A8:
    lis r3, 0xccd
    subi r0, r3, 0x3334
    subf r0, r4, r0
    cmplwi r0, 0x1
    bge lbl_fn_8039F08C_000010E0
    lis r4, lbl_8074F8CC@ha
    lis r3, __files@ha
    addi r4, r4, lbl_8074F8CC@l
    addi r3, r3, __files@l
    addi r4, r4, 0xce
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8039F08C_000010E0:
    lwz r4, 0x130(r23)
    li r6, 0x0
    lis r3, 0xccd
    lwz r31, 0x134(r23)
    subi r0, r3, 0x3334
    addi r4, r4, 0x1
    subf r3, r31, r4
    addi r5, r23, 0x134
    subf r0, r31, r0
    stw r6, 0x14(r1)
    cmplw r3, r0
    stw r6, 0x18(r1)
    stw r6, 0x1c(r1)
    stw r5, 0x20(r1)
    stw r6, 0x24(r1)
    stw r3, 0x10(r1)
    ble lbl_fn_8039F08C_00001148
    lis r4, lbl_8074F8CC@ha
    lis r3, __files@ha
    addi r4, r4, lbl_8074F8CC@l
    addi r3, r3, __files@l
    addi r4, r4, 0xce
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8039F08C_00001148:
    lis r3, 0x444
    addi r0, r3, 0x4444
    cmplw r31, r0
    bge lbl_fn_8039F08C_00001198
    addi r5, r31, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x10(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x8
    srwi r4, r4, 2
    stw r4, 0x8(r1)
    cmplw r4, r0
    bge lbl_fn_8039F08C_0000118C
    addi r3, r1, 0x10
lbl_fn_8039F08C_0000118C:
    lwz r0, 0x0(r3)
    add r31, r31, r0
    b lbl_fn_8039F08C_000011DC
lbl_fn_8039F08C_00001198:
    lis r3, 0x889
    subi r0, r3, 0x7778
    cmplw r31, r0
    bge lbl_fn_8039F08C_000011D4
    addi r3, r31, 0x1
    lwz r0, 0x10(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_8039F08C_000011C8
    addi r3, r1, 0x10
lbl_fn_8039F08C_000011C8:
    lwz r0, 0x0(r3)
    add r31, r31, r0
    b lbl_fn_8039F08C_000011DC
lbl_fn_8039F08C_000011D4:
    lis r3, 0xccd
    subi r31, r3, 0x3334
lbl_fn_8039F08C_000011DC:
    lis r3, 0xccd
    subi r0, r3, 0x3334
    cmplw r31, r0
    ble lbl_fn_8039F08C_00001210
    lis r4, lbl_8074F8CC@ha
    lis r3, __files@ha
    addi r4, r4, lbl_8074F8CC@l
    addi r3, r3, __files@l
    addi r4, r4, 0xce
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8039F08C_00001210:
    mulli r3, r31, 0x14
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r22, r3
    bne lbl_fn_8039F08C_00001244
    lis r3, __files@ha
    lis r4, lbl_8078B2F8@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8078B2F8@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8039F08C_00001244:
    lwz r6, 0x130(r23)
    li r0, 0x14
    lwz r4, 0x18(r1)
    mulli r5, r6, 0x14
    stw r6, 0x24(r1)
    addi r3, r4, 0x1
    stw r3, 0x18(r1)
    mulli r4, r4, 0x14
    add r5, r22, r5
    stw r22, 0x14(r1)
    stwx r30, r4, r5
    add r3, r4, r5
    stw r26, 0x4(r3)
    stw r29, 0x8(r3)
    stw r28, 0xc(r3)
    stw r27, 0x10(r3)
    lwz r3, 0x130(r23)
    lwz r4, 0x12c(r23)
    mulli r3, r3, 0x14
    stw r31, 0x1c(r1)
    add r6, r4, r3
    addi r3, r6, 0x13
    subf r3, r4, r3
    divwu r3, r3, r0
    mtctr r3
    cmplw r6, r4
    ble lbl_fn_8039F08C_00001300
lbl_fn_8039F08C_000012B0:
    subic. r5, r5, 0x14
    subi r6, r6, 0x14
    beq lbl_fn_8039F08C_000012E4
    lwz r0, 0x4(r6)
    lwz r3, 0x0(r6)
    stw r3, 0x0(r5)
    stw r0, 0x4(r5)
    lwz r0, 0xc(r6)
    lwz r3, 0x8(r6)
    stw r3, 0x8(r5)
    stw r0, 0xc(r5)
    lwz r0, 0x10(r6)
    stw r0, 0x10(r5)
lbl_fn_8039F08C_000012E4:
    lwz r4, 0x24(r1)
    lwz r3, 0x18(r1)
    subi r0, r4, 0x1
    stw r0, 0x24(r1)
    addi r0, r3, 0x1
    stw r0, 0x18(r1)
    bdnz lbl_fn_8039F08C_000012B0
lbl_fn_8039F08C_00001300:
    addic. r0, r1, 0x14
    lwz r0, 0x18(r1)
    lwz r7, 0x134(r23)
    li r6, 0x0
    lwz r5, 0x1c(r1)
    lwz r3, 0x12c(r23)
    lwz r4, 0x14(r1)
    stw r5, 0x134(r23)
    stw r7, 0x1c(r1)
    stw r4, 0x12c(r23)
    stw r3, 0x14(r1)
    stw r0, 0x130(r23)
    stw r6, 0x18(r1)
    beq lbl_fn_8039F08C_00001348
    cmpwi r3, 0x0
    beq lbl_fn_8039F08C_00001348
    stw r6, 0x18(r1)
    bl dtor_80084684
lbl_fn_8039F08C_00001348:
    lwz r4, 0x0(r25)
    lis r3, lbl_8074ED24@ha
    li r0, 0x0
    stw r0, 0x4(r24)
    slwi r0, r4, 2
    addi r3, r3, lbl_8074ED24@l
    lwzx r0, r3, r0
    add r0, r25, r0
    stw r0, 0x0(r24)
    lmw r22, 0x28(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8039F600(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lwz r6, 0x8(r5)
    stw r0, 0x24(r1)
    cmpwi r6, 0x0
    lwz r0, 0xc(r5)
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    beq lbl_fn_8039F600_000013D8
    cmpwi r6, 0x1
    beq lbl_fn_8039F600_00001404
    cmpwi r6, 0x2
    beq lbl_fn_8039F600_00001440
    cmpwi r6, 0x3
    beq lbl_fn_8039F600_00001454
    b lbl_fn_8039F600_00001464
lbl_fn_8039F600_000013D8:
    lwz r0, 0xdc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8039F600_000013F0
    lwz r3, lbl_8087F8A0
    lwz r3, 0x48(r3)
    b lbl_fn_8039F600_000013FC
lbl_fn_8039F600_000013F0:
    lwz r3, lbl_8087F8A0
    li r4, 0x1
    bl fn_8011F8F4
lbl_fn_8039F600_000013FC:
    mr r31, r3
    b lbl_fn_8039F600_00001464
lbl_fn_8039F600_00001404:
    lwz r3, lbl_8087F890
    mr r4, r0
    bl fn_8011FE3C
    lwz r0, lbl_8087FA20
    mr r31, r3
    cmpwi r0, 0x0
    beq lbl_fn_8039F600_00001464
    cmpwi r3, 0x0
    beq lbl_fn_8039F600_00001464
    lwz r0, 0x38(r3)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_8039F600_00001464
    li r31, 0x0
    b lbl_fn_8039F600_00001464
lbl_fn_8039F600_00001440:
    lwz r3, lbl_8087F408
    mr r4, r0
    bl fn_8011FC10
    mr r31, r3
    b lbl_fn_8039F600_00001464
lbl_fn_8039F600_00001454:
    lwz r3, lbl_8087F8A0
    mr r4, r0
    bl fn_8011F91C
    mr r31, r3
lbl_fn_8039F600_00001464:
    cmpwi r31, 0x0
    beq lbl_fn_8039F600_00001514
    lwz r0, 0x48(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8039F600_00001480
    li r0, 0x1
    stw r0, 0xd0(r28)
lbl_fn_8039F600_00001480:
    lwz r0, 0x130(r28)
    li r3, 0x0
    li r4, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8039F600_00001504
lbl_fn_8039F600_00001498:
    lwz r6, 0x12c(r28)
    lwzx r0, r6, r4
    cmplw r0, r31
    bne lbl_fn_8039F600_000014F8
    lwz r0, 0x130(r28)
    mulli r4, r3, 0x14
    lis r3, 0x6666
    mulli r0, r0, 0x14
    addi r5, r3, 0x6667
    add r3, r6, r4
    add r0, r6, r0
    addi r4, r3, 0x14
    subf r0, r3, r0
    mulhw r0, r5, r0
    srawi r0, r0, 3
    srwi r5, r0, 31
    add r5, r0, r5
    subi r0, r5, 0x1
    mulli r5, r0, 0x14
    bl memmove
    lwz r3, 0x130(r28)
    subi r0, r3, 0x1
    stw r0, 0x130(r28)
    b lbl_fn_8039F600_00001504
lbl_fn_8039F600_000014F8:
    addi r4, r4, 0x14
    addi r3, r3, 0x1
    bdnz lbl_fn_8039F600_00001498
lbl_fn_8039F600_00001504:
    lwz r4, 0xc50(r31)
    mr r3, r31
    lwz r5, 0x14(r30)
    bl fn_80154654
lbl_fn_8039F600_00001514:
    lwz r4, 0x0(r30)
    lis r3, lbl_8074ED24@ha
    li r0, 0x0
    stw r0, 0x4(r29)
    slwi r0, r4, 2
    addi r3, r3, lbl_8074ED24@l
    lwzx r0, r3, r0
    add r0, r30, r0
    stw r0, 0x0(r29)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8039F7D8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    lwz r4, 0x8(r5)
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r3, lbl_8087F430
    bl fn_80370094
    li r0, 0x1
    stw r0, 0xf0(r29)
    li r4, 0x63
    li r5, 0x0
    lwz r3, lbl_8087F430
    li r6, 0x0
    bl fn_80370320
    lwz r3, lbl_8087F430
    li r4, 0x11d
    li r5, 0x0
    li r6, 0x0
    bl fn_80370320
    lwz r4, 0x0(r31)
    lis r3, lbl_8074ED24@ha
    li r0, 0x0
    stw r0, 0x4(r30)
    slwi r0, r4, 2
    addi r3, r3, lbl_8074ED24@l
    lwzx r0, r3, r0
    add r0, r31, r0
    stw r0, 0x0(r30)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8039F878(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lwz r6, 0x8(r5)
    stw r0, 0x24(r1)
    cmpwi r6, 0x0
    lwz r0, 0xc(r5)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    li r4, 0x0
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_fn_8039F878_0000164C
    cmpwi r6, 0x1
    beq lbl_fn_8039F878_00001678
    cmpwi r6, 0x2
    beq lbl_fn_8039F878_000016B4
    cmpwi r6, 0x3
    beq lbl_fn_8039F878_000016C8
    b lbl_fn_8039F878_000016D8
lbl_fn_8039F878_0000164C:
    lwz r0, 0xdc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8039F878_00001664
    lwz r3, lbl_8087F8A0
    lwz r3, 0x48(r3)
    b lbl_fn_8039F878_00001670
lbl_fn_8039F878_00001664:
    lwz r3, lbl_8087F8A0
    li r4, 0x1
    bl fn_8011F8F4
lbl_fn_8039F878_00001670:
    mr r4, r3
    b lbl_fn_8039F878_000016D8
lbl_fn_8039F878_00001678:
    lwz r3, lbl_8087F890
    mr r4, r0
    bl fn_8011FE3C
    lwz r0, lbl_8087FA20
    mr r4, r3
    cmpwi r0, 0x0
    beq lbl_fn_8039F878_000016D8
    cmpwi r3, 0x0
    beq lbl_fn_8039F878_000016D8
    lwz r0, 0x38(r3)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_8039F878_000016D8
    li r4, 0x0
    b lbl_fn_8039F878_000016D8
lbl_fn_8039F878_000016B4:
    lwz r3, lbl_8087F408
    mr r4, r0
    bl fn_8011FC10
    mr r4, r3
    b lbl_fn_8039F878_000016D8
lbl_fn_8039F878_000016C8:
    lwz r3, lbl_8087F8A0
    mr r4, r0
    bl fn_8011F91C
    mr r4, r3
lbl_fn_8039F878_000016D8:
    mr r3, r29
    mr r5, r31
    bl fn_8039F9A4
    lwz r4, 0x0(r31)
    lis r3, lbl_8074ED24@ha
    li r0, 0x0
    stw r0, 0x4(r30)
    slwi r0, r4, 2
    addi r3, r3, lbl_8074ED24@l
    lwzx r0, r3, r0
    add r0, r31, r0
    stw r0, 0x0(r30)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8039F9A4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r5
    stw r30, 0x28(r1)
    mr r30, r3
    beq lbl_fn_8039F9A4_00001964
    lwz r0, 0x10(r5)
    li r8, 0x0
    cmplwi r0, 0x12
    bgt lbl_fn_8039F9A4_0000194C
    lis r3, jumptable_8078AEF8@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_8078AEF8@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lfs f1, 0x7d8(r4)
    lwz r0, 0x940(r4)
    fctiwz f0, f1
    stfd f0, 0x18(r1)
    lwz r3, 0x1c(r1)
    mulli r3, r3, 0x64
    divw. r8, r3, r0
    bne lbl_fn_8039F9A4_0000194C
    lfs f0, lbl_80885B10
    fcmpo cr0, f1, f0
    ble lbl_fn_8039F9A4_0000194C
    li r8, 0x1
    b lbl_fn_8039F9A4_0000194C
    lfs f1, 0x568(r4)
    lfs f0, lbl_80885B78
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r8, 0x1c(r1)
    b lbl_fn_8039F9A4_0000194C
    lwz r0, 0x958(r4)
    clrlwi r8, r0, 31
    b lbl_fn_8039F9A4_0000194C
    lwz r8, 0xd18(r4)
    b lbl_fn_8039F9A4_0000194C
    lwz r8, 0xd0c(r4)
    b lbl_fn_8039F9A4_0000194C
    lwz r0, 0xd30(r4)
    clrlwi r8, r0, 31
    b lbl_fn_8039F9A4_0000194C
    lwz r0, 0x674(r4)
    srwi r0, r0, 31
    xori r8, r0, 0x1
    b lbl_fn_8039F9A4_0000194C
    lbz r0, 0xd74(r4)
    extsb. r0, r0
    beq lbl_fn_8039F9A4_0000180C
    cmpwi r0, 0x2
    bne lbl_fn_8039F9A4_00001814
lbl_fn_8039F9A4_0000180C:
    li r8, 0x0
    b lbl_fn_8039F9A4_0000194C
lbl_fn_8039F9A4_00001814:
    cmpwi r0, 0x1
    bne lbl_fn_8039F9A4_00001824
    li r8, 0x2
    b lbl_fn_8039F9A4_0000194C
lbl_fn_8039F9A4_00001824:
    li r8, 0x1
    b lbl_fn_8039F9A4_0000194C
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_8039F9A4_00001840
    lwz r5, 0x48(r3)
    b lbl_fn_8039F9A4_00001844
lbl_fn_8039F9A4_00001840:
    li r5, 0x0
lbl_fn_8039F9A4_00001844:
    cmpwi r5, 0x0
    beq lbl_fn_8039F9A4_0000194C
    lfs f1, 0x530(r4)
    addi r3, r1, 0x8
    lfs f0, 0x530(r5)
    lfs f3, 0x52c(r4)
    fsubs f4, f1, f0
    lfs f2, 0x52c(r5)
    lfs f1, 0x528(r4)
    lfs f0, 0x528(r5)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f4, 0x10(r1)
    bl fn_805F9940
    fctiwz f0, f1
    stfd f0, 0x18(r1)
    lwz r8, 0x1c(r1)
    b lbl_fn_8039F9A4_0000194C
    lwz r0, 0x54c(r4)
    extrwi r8, r0, 1, 18
    b lbl_fn_8039F9A4_0000194C
    lwz r8, 0x9f8(r4)
    b lbl_fn_8039F9A4_0000194C
    lwz r8, 0x874(r4)
    b lbl_fn_8039F9A4_0000194C
    lwz r8, 0x7f0(r4)
    b lbl_fn_8039F9A4_0000194C
    lbz r0, 0xd75(r4)
    extsb. r0, r0
    beq lbl_fn_8039F9A4_000018CC
    cmpwi r0, 0x2
    bne lbl_fn_8039F9A4_000018D4
lbl_fn_8039F9A4_000018CC:
    li r8, 0x0
    b lbl_fn_8039F9A4_0000194C
lbl_fn_8039F9A4_000018D4:
    cmpwi r0, 0x1
    bne lbl_fn_8039F9A4_000018E4
    li r8, 0x2
    b lbl_fn_8039F9A4_0000194C
lbl_fn_8039F9A4_000018E4:
    li r8, 0x1
    b lbl_fn_8039F9A4_0000194C
    lwz r8, 0xf14(r4)
    b lbl_fn_8039F9A4_0000194C
    lwz r3, 0x5c(r4)
    lbz r8, 0x122(r3)
    extsb r8, r8
    b lbl_fn_8039F9A4_0000194C
    lbz r0, 0xd74(r4)
    extsb. r0, r0
    bne lbl_fn_8039F9A4_00001918
    li r8, -0x1
    b lbl_fn_8039F9A4_0000194C
lbl_fn_8039F9A4_00001918:
    cmpwi r0, 0x1
    bne lbl_fn_8039F9A4_00001930
    lwz r0, 0xd94(r4)
    extrwi r3, r0, 1, 29
    addi r8, r3, 0x1
    b lbl_fn_8039F9A4_0000194C
lbl_fn_8039F9A4_00001930:
    li r8, 0x0
    b lbl_fn_8039F9A4_0000194C
    lwz r0, 0x12a8(r4)
    extrwi r8, r0, 1, 17
    b lbl_fn_8039F9A4_0000194C
    lwz r0, 0x12a4(r4)
    extrwi r8, r0, 1, 3
lbl_fn_8039F9A4_0000194C:
    lwz r4, 0x14(r31)
    mr r3, r30
    lwz r5, 0x18(r31)
    li r6, 0x0
    li r7, 0x0
    bl fn_8039BF04
lbl_fn_8039F9A4_00001964:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}
