#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void fn_800CB3A0(void);
extern void fn_800D3FA4(void);
extern void fn_80145334(void);
extern void fn_801539E0(void);
extern void fn_8016E970(void);
extern void fn_8036554C(void);
extern void fn_8036F268(void);
extern void fn_80370174(void);
extern void fn_80370A78(void);
extern void fn_80370B78(void);
extern void fn_80370BD0(void);
extern void fn_80370C6C(void);
extern void fn_8037D3E8(void);
extern void fn_8037EF30(void);
extern void fn_803935FC(void);
extern void fn_8039BF04(void);
extern void fn_803B5774(void);
extern void fn_803B57B0(void);
extern void fn_803B5830(void);
extern void fn_803B5950(void);
extern void fn_803CC6B4(void);
extern void fn_8046ECDC(void);
extern void fn_8047F580(void);
extern void fn_80680CF8(void);
extern void fn_80695B00(void);

/* External data declarations */
extern u8 jumptable_8078AD40[];
extern u8 lbl_8074ED24[];
extern u8 lbl_8074F0B0[];

/* Small data declarations */
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F408;
extern u32 lbl_8087F428;
extern u32 lbl_8087F430;
extern u32 lbl_8087F448;
extern u32 lbl_8087F490;
extern u32 lbl_8087F518;
extern u32 lbl_8087F540;
extern u32 lbl_8087F890;
extern u32 lbl_8087F8A0;
extern u32 lbl_8087FA20;
extern u32 lbl_80885B10;
extern u32 lbl_80885B14;
extern u32 lbl_80885B30;
extern u32 lbl_80885B74;

/* Function declarations */
void fn_8039C7F0(void);
void fn_8039CC24(void);
void fn_8039CCB4(void);
void fn_8039CCD0(void);
void fn_8039CF8C(void);
void fn_8039D178(void);
void fn_8039D1E8(void);
void fn_8039D274(void);
void fn_8039D3E0(void);
void fn_8039D4C4(void);
void fn_8039D930(void);
void fn_8039D99C(void);
void fn_8039D9B0(void);
void fn_8039DA00(void);
void fn_8039DA10(void);
void fn_8039DA38(void);
void fn_8039DB2C(void);

asm void fn_8039C7F0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r8
    stw r29, 0x14(r1)
    mr r29, r7
    lwz r3, lbl_8087F430
    cmpwi cr1, r3, 0x0
    bne cr1, lbl_fn_8039C7F0_00000034
    li r3, 0x0
    b lbl_fn_8039C7F0_00000418
lbl_fn_8039C7F0_00000034:
    cmpwi r6, 0x5
    li r0, 0x0
    beq lbl_fn_8039C7F0_0000006C
    cmpwi r6, 0x6
    beq lbl_fn_8039C7F0_00000104
    cmpwi r6, 0x7
    beq lbl_fn_8039C7F0_000001A0
    cmpwi r6, 0x8
    beq lbl_fn_8039C7F0_00000240
    cmpwi r6, 0x9
    beq lbl_fn_8039C7F0_000002DC
    cmpwi r6, 0xa
    beq lbl_fn_8039C7F0_0000037C
    b lbl_fn_8039C7F0_00000414
lbl_fn_8039C7F0_0000006C:
    bne cr1, lbl_fn_8039C7F0_00000078
    li r31, 0x0
    b lbl_fn_8039C7F0_00000098
lbl_fn_8039C7F0_00000078:
    cmpwi r4, 0x1
    bne lbl_fn_8039C7F0_0000008C
    mr r4, r5
    bl fn_80370174
    b lbl_fn_8039C7F0_00000094
lbl_fn_8039C7F0_0000008C:
    mr r4, r5
    bl fn_80370A78
lbl_fn_8039C7F0_00000094:
    mr r31, r3
lbl_fn_8039C7F0_00000098:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    bne lbl_fn_8039C7F0_000000AC
    li r3, 0x0
    b lbl_fn_8039C7F0_000000F4
lbl_fn_8039C7F0_000000AC:
    cmpwi r29, 0x2
    bne lbl_fn_8039C7F0_000000C0
    mr r4, r30
    bl fn_80370174
    b lbl_fn_8039C7F0_000000F4
lbl_fn_8039C7F0_000000C0:
    cmpwi r29, 0x1
    bne lbl_fn_8039C7F0_000000D4
    mr r4, r30
    bl fn_80370A78
    b lbl_fn_8039C7F0_000000F4
lbl_fn_8039C7F0_000000D4:
    cmpwi r29, 0x3
    bne lbl_fn_8039C7F0_000000F0
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r3, r0, r3
    addi r30, r3, 0x1
lbl_fn_8039C7F0_000000F0:
    mr r3, r30
lbl_fn_8039C7F0_000000F4:
    subf r0, r31, r3
    cntlzw r0, r0
    srwi r0, r0, 5
    b lbl_fn_8039C7F0_00000414
lbl_fn_8039C7F0_00000104:
    bne cr1, lbl_fn_8039C7F0_00000110
    li r31, 0x0
    b lbl_fn_8039C7F0_00000130
lbl_fn_8039C7F0_00000110:
    cmpwi r4, 0x1
    bne lbl_fn_8039C7F0_00000124
    mr r4, r5
    bl fn_80370174
    b lbl_fn_8039C7F0_0000012C
lbl_fn_8039C7F0_00000124:
    mr r4, r5
    bl fn_80370A78
lbl_fn_8039C7F0_0000012C:
    mr r31, r3
lbl_fn_8039C7F0_00000130:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    bne lbl_fn_8039C7F0_00000144
    li r3, 0x0
    b lbl_fn_8039C7F0_0000018C
lbl_fn_8039C7F0_00000144:
    cmpwi r29, 0x2
    bne lbl_fn_8039C7F0_00000158
    mr r4, r30
    bl fn_80370174
    b lbl_fn_8039C7F0_0000018C
lbl_fn_8039C7F0_00000158:
    cmpwi r29, 0x1
    bne lbl_fn_8039C7F0_0000016C
    mr r4, r30
    bl fn_80370A78
    b lbl_fn_8039C7F0_0000018C
lbl_fn_8039C7F0_0000016C:
    cmpwi r29, 0x3
    bne lbl_fn_8039C7F0_00000188
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r3, r0, r3
    addi r30, r3, 0x1
lbl_fn_8039C7F0_00000188:
    mr r3, r30
lbl_fn_8039C7F0_0000018C:
    subf r4, r31, r3
    subf r0, r3, r31
    or r0, r4, r0
    srwi r0, r0, 31
    b lbl_fn_8039C7F0_00000414
lbl_fn_8039C7F0_000001A0:
    bne cr1, lbl_fn_8039C7F0_000001AC
    li r31, 0x0
    b lbl_fn_8039C7F0_000001CC
lbl_fn_8039C7F0_000001AC:
    cmpwi r4, 0x1
    bne lbl_fn_8039C7F0_000001C0
    mr r4, r5
    bl fn_80370174
    b lbl_fn_8039C7F0_000001C8
lbl_fn_8039C7F0_000001C0:
    mr r4, r5
    bl fn_80370A78
lbl_fn_8039C7F0_000001C8:
    mr r31, r3
lbl_fn_8039C7F0_000001CC:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    bne lbl_fn_8039C7F0_000001E0
    li r3, 0x0
    b lbl_fn_8039C7F0_00000228
lbl_fn_8039C7F0_000001E0:
    cmpwi r29, 0x2
    bne lbl_fn_8039C7F0_000001F4
    mr r4, r30
    bl fn_80370174
    b lbl_fn_8039C7F0_00000228
lbl_fn_8039C7F0_000001F4:
    cmpwi r29, 0x1
    bne lbl_fn_8039C7F0_00000208
    mr r4, r30
    bl fn_80370A78
    b lbl_fn_8039C7F0_00000228
lbl_fn_8039C7F0_00000208:
    cmpwi r29, 0x3
    bne lbl_fn_8039C7F0_00000224
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r3, r0, r3
    addi r30, r3, 0x1
lbl_fn_8039C7F0_00000224:
    mr r3, r30
lbl_fn_8039C7F0_00000228:
    xor r0, r3, r31
    srawi r4, r0, 1
    and r0, r0, r3
    subf r0, r0, r4
    srwi r0, r0, 31
    b lbl_fn_8039C7F0_00000414
lbl_fn_8039C7F0_00000240:
    bne cr1, lbl_fn_8039C7F0_0000024C
    li r31, 0x0
    b lbl_fn_8039C7F0_0000026C
lbl_fn_8039C7F0_0000024C:
    cmpwi r4, 0x1
    bne lbl_fn_8039C7F0_00000260
    mr r4, r5
    bl fn_80370174
    b lbl_fn_8039C7F0_00000268
lbl_fn_8039C7F0_00000260:
    mr r4, r5
    bl fn_80370A78
lbl_fn_8039C7F0_00000268:
    mr r31, r3
lbl_fn_8039C7F0_0000026C:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    bne lbl_fn_8039C7F0_00000280
    li r3, 0x0
    b lbl_fn_8039C7F0_000002C8
lbl_fn_8039C7F0_00000280:
    cmpwi r29, 0x2
    bne lbl_fn_8039C7F0_00000294
    mr r4, r30
    bl fn_80370174
    b lbl_fn_8039C7F0_000002C8
lbl_fn_8039C7F0_00000294:
    cmpwi r29, 0x1
    bne lbl_fn_8039C7F0_000002A8
    mr r4, r30
    bl fn_80370A78
    b lbl_fn_8039C7F0_000002C8
lbl_fn_8039C7F0_000002A8:
    cmpwi r29, 0x3
    bne lbl_fn_8039C7F0_000002C4
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r3, r0, r3
    addi r30, r3, 0x1
lbl_fn_8039C7F0_000002C4:
    mr r3, r30
lbl_fn_8039C7F0_000002C8:
    srawi r5, r3, 31
    srwi r4, r31, 31
    subfc r0, r31, r3
    adde r0, r5, r4
    b lbl_fn_8039C7F0_00000414
lbl_fn_8039C7F0_000002DC:
    bne cr1, lbl_fn_8039C7F0_000002E8
    li r31, 0x0
    b lbl_fn_8039C7F0_00000308
lbl_fn_8039C7F0_000002E8:
    cmpwi r4, 0x1
    bne lbl_fn_8039C7F0_000002FC
    mr r4, r5
    bl fn_80370174
    b lbl_fn_8039C7F0_00000304
lbl_fn_8039C7F0_000002FC:
    mr r4, r5
    bl fn_80370A78
lbl_fn_8039C7F0_00000304:
    mr r31, r3
lbl_fn_8039C7F0_00000308:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    bne lbl_fn_8039C7F0_0000031C
    li r3, 0x0
    b lbl_fn_8039C7F0_00000364
lbl_fn_8039C7F0_0000031C:
    cmpwi r29, 0x2
    bne lbl_fn_8039C7F0_00000330
    mr r4, r30
    bl fn_80370174
    b lbl_fn_8039C7F0_00000364
lbl_fn_8039C7F0_00000330:
    cmpwi r29, 0x1
    bne lbl_fn_8039C7F0_00000344
    mr r4, r30
    bl fn_80370A78
    b lbl_fn_8039C7F0_00000364
lbl_fn_8039C7F0_00000344:
    cmpwi r29, 0x3
    bne lbl_fn_8039C7F0_00000360
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r3, r0, r3
    addi r30, r3, 0x1
lbl_fn_8039C7F0_00000360:
    mr r3, r30
lbl_fn_8039C7F0_00000364:
    xor r0, r31, r3
    srawi r3, r0, 1
    and r0, r0, r31
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_8039C7F0_00000414
lbl_fn_8039C7F0_0000037C:
    bne cr1, lbl_fn_8039C7F0_00000388
    li r31, 0x0
    b lbl_fn_8039C7F0_000003A8
lbl_fn_8039C7F0_00000388:
    cmpwi r4, 0x1
    bne lbl_fn_8039C7F0_0000039C
    mr r4, r5
    bl fn_80370174
    b lbl_fn_8039C7F0_000003A4
lbl_fn_8039C7F0_0000039C:
    mr r4, r5
    bl fn_80370A78
lbl_fn_8039C7F0_000003A4:
    mr r31, r3
lbl_fn_8039C7F0_000003A8:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    bne lbl_fn_8039C7F0_000003BC
    li r3, 0x0
    b lbl_fn_8039C7F0_00000404
lbl_fn_8039C7F0_000003BC:
    cmpwi r29, 0x2
    bne lbl_fn_8039C7F0_000003D0
    mr r4, r30
    bl fn_80370174
    b lbl_fn_8039C7F0_00000404
lbl_fn_8039C7F0_000003D0:
    cmpwi r29, 0x1
    bne lbl_fn_8039C7F0_000003E4
    mr r4, r30
    bl fn_80370A78
    b lbl_fn_8039C7F0_00000404
lbl_fn_8039C7F0_000003E4:
    cmpwi r29, 0x3
    bne lbl_fn_8039C7F0_00000400
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r3, r0, r3
    addi r30, r3, 0x1
lbl_fn_8039C7F0_00000400:
    mr r3, r30
lbl_fn_8039C7F0_00000404:
    srawi r5, r31, 31
    srwi r4, r3, 31
    subfc r0, r3, r31
    adde r0, r5, r4
lbl_fn_8039C7F0_00000414:
    mr r3, r0
lbl_fn_8039C7F0_00000418:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8039CC24(void)
{
    nofralloc
    lwz r5, 0x80(r3)
    addi r6, r3, 0x80
    b lbl_fn_8039CC24_0000045C
lbl_fn_8039CC24_00000440:
    lwz r0, 0xc(r5)
    cmpw r0, r4
    blt lbl_fn_8039CC24_00000458
    mr r6, r5
    lwz r5, 0x0(r5)
    b lbl_fn_8039CC24_0000045C
lbl_fn_8039CC24_00000458:
    lwz r5, 0x4(r5)
lbl_fn_8039CC24_0000045C:
    cmpwi r5, 0x0
    bne lbl_fn_8039CC24_00000440
    addi r0, r3, 0x80
    cmplw r6, r0
    beq lbl_fn_8039CC24_0000047C
    lwz r0, 0xc(r6)
    cmpw r4, r0
    bge lbl_fn_8039CC24_00000480
lbl_fn_8039CC24_0000047C:
    addi r6, r3, 0x80
lbl_fn_8039CC24_00000480:
    addi r0, r3, 0x80
    cmplw r6, r0
    beq lbl_fn_8039CC24_000004BC
    lis r5, 0x68dc
    lwz r0, 0x10(r6)
    subi r5, r5, 0x7453
    mulhw r4, r5, r4
    srawi r4, r4, 12
    srwi r5, r4, 31
    add r4, r4, r5
    slwi r4, r4, 2
    add r3, r3, r4
    lwz r3, 0x64(r3)
    add r3, r3, r0
    blr
lbl_fn_8039CC24_000004BC:
    li r3, 0x0
    blr
}

asm void fn_8039CCB4(void)
{
    nofralloc
    lwz r0, 0x0(r4)
    lis r3, lbl_8074ED24@ha
    addi r3, r3, lbl_8074ED24@l
    slwi r0, r0, 2
    lwzx r0, r3, r0
    add r3, r4, r0
    blr
}

asm void fn_8039CCD0(void)
{
    nofralloc
    cmpwi r4, 0x0
    beq lbl_fn_8039CCD0_000005D0
    lwz r7, 0x94(r3)
    li r6, 0x0
    lwz r8, 0xcc(r7)
    addi r9, r7, 0xd0
    mr r11, r9
    cmpwi r8, 0x0
    beq lbl_fn_8039CCD0_000005C8
    cmplwi r8, 0x8
    subi r10, r8, 0x8
    ble lbl_fn_8039CCD0_0000059C
    addi r0, r10, 0x7
    lis r5, lbl_8074ED24@ha
    srwi r0, r0, 3
    addi r5, r5, lbl_8074ED24@l
    mtctr r0
    cmplwi r10, 0x0
    ble lbl_fn_8039CCD0_0000059C
lbl_fn_8039CCD0_0000052C:
    lwz r0, 0x0(r11)
    addi r6, r6, 0x8
    slwi r0, r0, 2
    lwzx r0, r5, r0
    add r10, r11, r0
    lwzx r0, r11, r0
    slwi r0, r0, 2
    lwzx r0, r5, r0
    lwzux r0, r10, r0
    slwi r0, r0, 2
    lwzx r0, r5, r0
    lwzux r0, r10, r0
    slwi r0, r0, 2
    lwzx r0, r5, r0
    lwzux r0, r10, r0
    slwi r0, r0, 2
    lwzx r0, r5, r0
    lwzux r0, r10, r0
    slwi r0, r0, 2
    lwzx r0, r5, r0
    lwzux r0, r10, r0
    slwi r0, r0, 2
    lwzx r0, r5, r0
    lwzux r0, r10, r0
    slwi r0, r0, 2
    lwzx r0, r5, r0
    add r11, r10, r0
    bdnz lbl_fn_8039CCD0_0000052C
lbl_fn_8039CCD0_0000059C:
    lis r5, lbl_8074ED24@ha
    subf r0, r6, r8
    addi r5, r5, lbl_8074ED24@l
    mtctr r0
    cmplw r6, r8
    bge lbl_fn_8039CCD0_000005C8
lbl_fn_8039CCD0_000005B4:
    lwz r0, 0x0(r11)
    slwi r0, r0, 2
    lwzx r0, r5, r0
    add r11, r11, r0
    bdnz lbl_fn_8039CCD0_000005B4
lbl_fn_8039CCD0_000005C8:
    cmplw r4, r11
    blt lbl_fn_8039CCD0_000005D8
lbl_fn_8039CCD0_000005D0:
    li r3, 0x0
    blr
lbl_fn_8039CCD0_000005D8:
    lwz r0, 0x4(r4)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_8039CCD0_000005F4
    lwz r5, 0x0(r4)
    cmplwi r5, 0x9
    bne lbl_fn_8039CCD0_00000760
lbl_fn_8039CCD0_000005F4:
    lwz r0, 0x0(r4)
    lis r5, lbl_8074ED24@ha
    addi r5, r5, lbl_8074ED24@l
    slwi r0, r0, 2
    lwzx r0, r5, r0
    add. r6, r4, r0
    beq lbl_fn_8039CCD0_000006E4
    lwz r7, 0xcc(r7)
    li r4, 0x0
    cmpwi r7, 0x0
    beq lbl_fn_8039CCD0_000006DC
    cmplwi r7, 0x8
    subi r8, r7, 0x8
    ble lbl_fn_8039CCD0_000006B0
    addi r0, r8, 0x7
    srwi r0, r0, 3
    mtctr r0
    cmplwi r8, 0x0
    ble lbl_fn_8039CCD0_000006B0
lbl_fn_8039CCD0_00000640:
    lwz r0, 0x0(r9)
    addi r4, r4, 0x8
    slwi r0, r0, 2
    lwzx r0, r5, r0
    add r8, r9, r0
    lwzx r0, r9, r0
    slwi r0, r0, 2
    lwzx r0, r5, r0
    lwzux r0, r8, r0
    slwi r0, r0, 2
    lwzx r0, r5, r0
    lwzux r0, r8, r0
    slwi r0, r0, 2
    lwzx r0, r5, r0
    lwzux r0, r8, r0
    slwi r0, r0, 2
    lwzx r0, r5, r0
    lwzux r0, r8, r0
    slwi r0, r0, 2
    lwzx r0, r5, r0
    lwzux r0, r8, r0
    slwi r0, r0, 2
    lwzx r0, r5, r0
    lwzux r0, r8, r0
    slwi r0, r0, 2
    lwzx r0, r5, r0
    add r9, r8, r0
    bdnz lbl_fn_8039CCD0_00000640
lbl_fn_8039CCD0_000006B0:
    lis r5, lbl_8074ED24@ha
    subf r0, r4, r7
    addi r5, r5, lbl_8074ED24@l
    mtctr r0
    cmplw r4, r7
    bge lbl_fn_8039CCD0_000006DC
lbl_fn_8039CCD0_000006C8:
    lwz r0, 0x0(r9)
    slwi r0, r0, 2
    lwzx r0, r5, r0
    add r9, r9, r0
    bdnz lbl_fn_8039CCD0_000006C8
lbl_fn_8039CCD0_000006DC:
    cmplw r6, r9
    blt lbl_fn_8039CCD0_000006EC
lbl_fn_8039CCD0_000006E4:
    li r3, 0x0
    blr
lbl_fn_8039CCD0_000006EC:
    lwz r0, 0x4(r6)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_8039CCD0_00000708
    lwz r4, 0x0(r6)
    cmplwi r4, 0x9
    bne lbl_fn_8039CCD0_00000724
lbl_fn_8039CCD0_00000708:
    lwz r0, 0x0(r6)
    lis r4, lbl_8074ED24@ha
    addi r4, r4, lbl_8074ED24@l
    slwi r0, r0, 2
    lwzx r0, r4, r0
    add r4, r6, r0
    b fn_8039CCD0
lbl_fn_8039CCD0_00000724:
    subi r0, r4, 0x7
    cmplwi r0, 0x1
    bgt lbl_fn_8039CCD0_00000738
    li r3, 0x1
    blr
lbl_fn_8039CCD0_00000738:
    lwz r3, lbl_8087F0A8
    lwz r0, 0xb8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8039CCD0_00000758
    cmplwi r4, 0xf
    bne lbl_fn_8039CCD0_00000758
    li r3, 0x1
    blr
lbl_fn_8039CCD0_00000758:
    li r3, 0x0
    blr
lbl_fn_8039CCD0_00000760:
    subi r0, r5, 0x7
    cmplwi r0, 0x1
    bgt lbl_fn_8039CCD0_00000774
    li r3, 0x1
    blr
lbl_fn_8039CCD0_00000774:
    lwz r3, lbl_8087F0A8
    lwz r0, 0xb8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8039CCD0_00000794
    cmplwi r5, 0xf
    bne lbl_fn_8039CCD0_00000794
    li r3, 0x1
    blr
lbl_fn_8039CCD0_00000794:
    li r3, 0x0
    blr
}

asm void fn_8039CF8C(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stmw r23, 0x1c(r1)
    mr r26, r3
    mr r27, r5
    addi r29, r4, 0xd0
    stw r4, 0x94(r3)
    lwz r30, 0xcc(r4)
    li r4, 0x0
    cmpwi r30, 0x0
    beq lbl_fn_8039CF8C_00000890
    cmplwi r30, 0x8
    subi r5, r30, 0x8
    ble lbl_fn_8039CF8C_00000864
    addi r0, r5, 0x7
    lis r3, lbl_8074ED24@ha
    srwi r0, r0, 3
    addi r3, r3, lbl_8074ED24@l
    mtctr r0
    cmplwi r5, 0x0
    ble lbl_fn_8039CF8C_00000864
lbl_fn_8039CF8C_000007F4:
    lwz r0, 0x0(r29)
    addi r4, r4, 0x8
    slwi r0, r0, 2
    lwzx r0, r3, r0
    add r5, r29, r0
    lwzx r0, r29, r0
    slwi r0, r0, 2
    lwzx r0, r3, r0
    lwzux r0, r5, r0
    slwi r0, r0, 2
    lwzx r0, r3, r0
    lwzux r0, r5, r0
    slwi r0, r0, 2
    lwzx r0, r3, r0
    lwzux r0, r5, r0
    slwi r0, r0, 2
    lwzx r0, r3, r0
    lwzux r0, r5, r0
    slwi r0, r0, 2
    lwzx r0, r3, r0
    lwzux r0, r5, r0
    slwi r0, r0, 2
    lwzx r0, r3, r0
    lwzux r0, r5, r0
    slwi r0, r0, 2
    lwzx r0, r3, r0
    add r29, r5, r0
    bdnz lbl_fn_8039CF8C_000007F4
lbl_fn_8039CF8C_00000864:
    lis r3, lbl_8074ED24@ha
    subf r0, r4, r30
    addi r3, r3, lbl_8074ED24@l
    mtctr r0
    cmplw r4, r30
    bge lbl_fn_8039CF8C_00000890
lbl_fn_8039CF8C_0000087C:
    lwz r0, 0x0(r29)
    slwi r0, r0, 2
    lwzx r0, r3, r0
    add r29, r29, r0
    bdnz lbl_fn_8039CF8C_0000087C
lbl_fn_8039CF8C_00000890:
    lis r25, lbl_8074F0B0@ha
    lis r31, lbl_8074ED24@ha
    addi r25, r25, lbl_8074F0B0@l
    li r28, 0x0
    addi r31, r31, lbl_8074ED24@l
    li r24, 0x0
    lis r23, jumptable_8078AD40@ha
    b lbl_fn_8039CF8C_00000968
lbl_fn_8039CF8C_000008B0:
    cmpwi r27, 0x0
    beq lbl_fn_8039CF8C_00000970
    cmplw r27, r29
    bge lbl_fn_8039CF8C_00000970
    stw r27, 0x90(r26)
    lwz r0, 0x4(r27)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_8039CF8C_000008F0
    lwz r0, 0x0(r27)
    slwi r0, r0, 2
    stw r24, 0xc(r1)
    lwzx r0, r31, r0
    add r0, r27, r0
    stw r0, 0x8(r1)
    b lbl_fn_8039CF8C_0000094C
lbl_fn_8039CF8C_000008F0:
    lwz r0, 0x0(r27)
    cmplwi r0, 0x6d
    bgt lbl_fn_8039CF8C_0000092C
    addi r3, r23, jumptable_8078AD40@l
    slwi r0, r0, 2
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lwz r0, 0xe8(r26)
    cmpwi r0, 0x0
    ble lbl_fn_8039CF8C_0000092C
    lwz r3, lbl_8087F540
    bl fn_8047F580
    stw r24, 0xe8(r26)
    stw r24, 0xec(r26)
lbl_fn_8039CF8C_0000092C:
    lwz r0, 0x0(r27)
    mr r3, r26
    mr r5, r27
    addi r4, r1, 0x8
    mulli r0, r0, 0xc
    add r12, r25, r0
    bl fn_80695B00
    nop
lbl_fn_8039CF8C_0000094C:
    lwz r0, 0xc(r1)
    cmpwi r0, 0x0
    beq lbl_fn_8039CF8C_00000960
    li r3, 0x0
    b lbl_fn_8039CF8C_00000974
lbl_fn_8039CF8C_00000960:
    lwz r27, 0x8(r1)
    addi r28, r28, 0x1
lbl_fn_8039CF8C_00000968:
    cmplw r28, r30
    blt lbl_fn_8039CF8C_000008B0
lbl_fn_8039CF8C_00000970:
    li r3, 0x1
lbl_fn_8039CF8C_00000974:
    lmw r23, 0x1c(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8039D178(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    lwz r6, 0x18(r31)
    stw r30, 0x8(r1)
    mr r30, r4
    lwz r4, 0x8(r5)
    lwz r5, 0xc(r5)
    lwz r7, 0x10(r31)
    lwz r8, 0x14(r31)
    bl fn_8039BF04
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

asm void fn_8039D1E8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r31, 0xc(r1)
    mr r31, r5
    stw r30, 0x8(r1)
    mr r30, r4
    stw r0, 0xb4(r3)
    lwz r0, 0x8(r5)
    lwz r4, lbl_8087F8A0
    cmpwi r0, 0x0
    lwz r4, 0x48(r4)
    bne lbl_fn_8039D1E8_00000A48
    lwz r0, 0xd0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8039D1E8_00000A48
    mr r3, r4
    li r4, 0x0
    bl fn_8016E970
lbl_fn_8039D1E8_00000A48:
    lwz r4, 0x0(r31)
    lis r3, lbl_8074ED24@ha
    li r0, 0x1
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

asm void fn_8039D274(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lwz r8, 0x8(r5)
    stw r0, 0x14(r1)
    li r0, 0x1
    cmpwi r8, 0x0
    stw r31, 0xc(r1)
    mr r31, r5
    stw r30, 0x8(r1)
    mr r30, r4
    lwz r6, 0xb4(r3)
    addi r6, r6, 0x1
    stw r6, 0xb4(r3)
    stw r0, 0x4(r4)
    lwz r6, lbl_8087F8A0
    lwz r7, 0x48(r6)
    bne lbl_fn_8039D274_00000AFC
    lwz r6, 0xb4(r3)
    lwz r0, 0xc(r5)
    cmpw r6, r0
    blt lbl_fn_8039D274_00000BBC
    li r0, 0x0
    stw r0, 0x4(r4)
    lwz r0, 0xd0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8039D274_00000BBC
    mr r3, r7
    li r4, 0x1
    bl fn_8016E970
    b lbl_fn_8039D274_00000BBC
lbl_fn_8039D274_00000AFC:
    cmpwi r8, 0x1
    bne lbl_fn_8039D274_00000B28
    lwz r0, 0xd0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8039D274_00000BBC
    lwz r0, 0x105c(r7)
    cmpwi r0, 0x0
    beq lbl_fn_8039D274_00000BBC
    li r0, 0x0
    stw r0, 0x4(r4)
    b lbl_fn_8039D274_00000BBC
lbl_fn_8039D274_00000B28:
    cmpwi r8, 0x2
    bne lbl_fn_8039D274_00000BBC
    lwz r0, lbl_8087FA20
    cmpwi r0, 0x0
    beq lbl_fn_8039D274_00000B64
    lwz r3, lbl_8087F448
    cmpwi r3, 0x0
    beq lbl_fn_8039D274_00000B64
    lwz r0, 0x48(r3)
    cmpwi r0, 0x2
    bne lbl_fn_8039D274_00000B64
    li r4, 0x1
    li r5, 0x4
    li r6, 0xf
    bl fn_8037D3E8
lbl_fn_8039D274_00000B64:
    lwz r3, lbl_8087FA20
    cmpwi r3, 0x0
    beq lbl_fn_8039D274_00000B7C
    bl fn_800D3FA4
    cmpwi r3, 0x0
    beq lbl_fn_8039D274_00000BB0
lbl_fn_8039D274_00000B7C:
    li r0, 0x0
    stw r0, 0x4(r30)
    lwz r0, lbl_8087FA20
    cmpwi r0, 0x0
    beq lbl_fn_8039D274_00000BBC
    lwz r3, lbl_8087F448
    cmpwi r3, 0x0
    beq lbl_fn_8039D274_00000BBC
    li r4, 0x0
    li r5, 0x4
    li r6, 0x1e
    bl fn_8037D3E8
    b lbl_fn_8039D274_00000BBC
lbl_fn_8039D274_00000BB0:
    lwz r3, lbl_8087F518
    li r4, 0x0
    bl fn_8046ECDC
lbl_fn_8039D274_00000BBC:
    lwz r0, 0x0(r31)
    lis r3, lbl_8074ED24@ha
    addi r3, r3, lbl_8074ED24@l
    slwi r0, r0, 2
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

asm void fn_8039D3E0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, 0x8(r5)
    stw r31, 0xc(r1)
    mr r31, r5
    cmpwi r0, 0x0
    stw r30, 0x8(r1)
    mr r30, r4
    beq lbl_fn_8039D3E0_00000C34
    cmpwi r0, 0x2
    beq lbl_fn_8039D3E0_00000C50
    cmpwi r0, 0x1
    beq lbl_fn_8039D3E0_00000C6C
    cmpwi r0, 0x3
    beq lbl_fn_8039D3E0_00000C84
    b lbl_fn_8039D3E0_00000C98
lbl_fn_8039D3E0_00000C34:
    lwz r4, 0xc(r5)
    li r6, 0x0
    lwz r3, lbl_8087F430
    lwz r5, 0x10(r5)
    lfs f1, lbl_80885B74
    bl fn_80370B78
    b lbl_fn_8039D3E0_00000C98
lbl_fn_8039D3E0_00000C50:
    lwz r4, 0xc(r5)
    li r6, 0x0
    lwz r3, lbl_8087F430
    lwz r5, 0x10(r5)
    lfs f1, lbl_80885B14
    bl fn_80370B78
    b lbl_fn_8039D3E0_00000C98
lbl_fn_8039D3E0_00000C6C:
    lwz r4, 0x10(r5)
    li r5, 0x0
    lwz r3, lbl_8087F430
    lfs f1, lbl_80885B74
    bl fn_80370BD0
    b lbl_fn_8039D3E0_00000C98
lbl_fn_8039D3E0_00000C84:
    lwz r4, 0x10(r5)
    li r5, 0x0
    lwz r3, lbl_8087F430
    lfs f1, lbl_80885B14
    bl fn_80370BD0
lbl_fn_8039D3E0_00000C98:
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

asm void fn_8039D4C4(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    li r7, 0x0
    li r8, 0x0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r5
    stw r30, 0x48(r1)
    mr r30, r4
    lwz r4, 0x8(r5)
    stw r29, 0x44(r1)
    stw r28, 0x40(r1)
    lwz r6, 0x88(r3)
    lwz r0, 0x78(r6)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8039D4C4_00000D40
lbl_fn_8039D4C4_00000D18:
    lwz r3, 0x7c(r6)
    lwzx r0, r3, r8
    cmpw r4, r0
    bne lbl_fn_8039D4C4_00000D34
    mulli r0, r7, 0x28
    add r29, r3, r0
    b lbl_fn_8039D4C4_00000D44
lbl_fn_8039D4C4_00000D34:
    addi r8, r8, 0x28
    addi r7, r7, 0x1
    bdnz lbl_fn_8039D4C4_00000D18
lbl_fn_8039D4C4_00000D40:
    li r29, 0x0
lbl_fn_8039D4C4_00000D44:
    lwz r0, 0xc(r5)
    cmpwi r0, 0x0
    bne lbl_fn_8039D4C4_00000E2C
    lwz r3, lbl_8087F8A0
    lwz r28, 0x48(r3)
    lwz r0, 0x12a4(r28)
    srwi. r0, r0, 31
    beq lbl_fn_8039D4C4_00000D6C
    mr r3, r28
    bl fn_801539E0
lbl_fn_8039D4C4_00000D6C:
    lwz r0, 0x12a4(r28)
    extrwi. r0, r0, 1, 13
    beq lbl_fn_8039D4C4_00000DA4
    lwz r12, 0x0(r28)
    mr r3, r28
    li r4, 0x0
    lwz r12, 0x9c(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r28)
    mr r3, r28
    lwz r12, 0x98(r12)
    mtctr r12
    bctrl
lbl_fn_8039D4C4_00000DA4:
    lfs f2, 0xc(r29)
    addi r4, r1, 0x2c
    psq_l f1, 0x4(r29), 0, 0
    mr r3, r28
    psq_st f1, 0x528(r28), 0, 0
    lfs f0, lbl_80885B10
    stfs f2, 0x530(r28)
    fmr f2, f0
    lfs f3, 0x14(r29)
    stfs f0, 0x2c(r1)
    stfs f3, 0x30(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x534(r28), 0, 0
    stfs f2, 0x53c(r28)
    lwz r0, 0x5c0(r28)
    stfs f0, 0x34(r1)
    clrlwi r29, r0, 31
    bl fn_80145334
    cmpwi r29, 0x0
    beq lbl_fn_8039D4C4_00000E04
    lwz r0, 0x5c0(r28)
    ori r0, r0, 0x1
    stw r0, 0x5c0(r28)
    b lbl_fn_8039D4C4_00000E10
lbl_fn_8039D4C4_00000E04:
    lwz r0, 0x5c0(r28)
    clrrwi r0, r0, 1
    stw r0, 0x5c0(r28)
lbl_fn_8039D4C4_00000E10:
    lwz r3, lbl_8087F430
    li r4, 0x1
    lfs f1, lbl_80885B14
    li r5, 0x1
    addi r3, r3, 0x6c
    bl fn_8037EF30
    b lbl_fn_8039D4C4_000010FC
lbl_fn_8039D4C4_00000E2C:
    cmpwi r0, 0x1
    bne lbl_fn_8039D4C4_00000F1C
    lwz r3, lbl_8087F890
    lwz r28, 0x48(r3)
    b lbl_fn_8039D4C4_00000F10
lbl_fn_8039D4C4_00000E40:
    lwz r3, 0x10(r5)
    lwz r0, 0x58(r28)
    cmpw r3, r0
    bne lbl_fn_8039D4C4_00000F0C
    lwz r0, 0x12a4(r28)
    srwi. r0, r0, 31
    beq lbl_fn_8039D4C4_00000E64
    mr r3, r28
    bl fn_801539E0
lbl_fn_8039D4C4_00000E64:
    lwz r0, 0x12a4(r28)
    extrwi. r0, r0, 1, 13
    beq lbl_fn_8039D4C4_00000E9C
    lwz r12, 0x0(r28)
    mr r3, r28
    li r4, 0x0
    lwz r12, 0x9c(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r28)
    mr r3, r28
    lwz r12, 0x98(r12)
    mtctr r12
    bctrl
lbl_fn_8039D4C4_00000E9C:
    lfs f2, 0xc(r29)
    addi r4, r1, 0x20
    psq_l f1, 0x4(r29), 0, 0
    mr r3, r28
    psq_st f1, 0x528(r28), 0, 0
    lfs f0, lbl_80885B10
    stfs f2, 0x530(r28)
    fmr f2, f0
    lfs f3, 0x14(r29)
    stfs f0, 0x20(r1)
    stfs f3, 0x24(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x534(r28), 0, 0
    stfs f2, 0x53c(r28)
    lwz r0, 0x5c0(r28)
    stfs f0, 0x28(r1)
    clrlwi r29, r0, 31
    bl fn_80145334
    cmpwi r29, 0x0
    beq lbl_fn_8039D4C4_00000EFC
    lwz r0, 0x5c0(r28)
    ori r0, r0, 0x1
    stw r0, 0x5c0(r28)
    b lbl_fn_8039D4C4_000010FC
lbl_fn_8039D4C4_00000EFC:
    lwz r0, 0x5c0(r28)
    clrrwi r0, r0, 1
    stw r0, 0x5c0(r28)
    b lbl_fn_8039D4C4_000010FC
lbl_fn_8039D4C4_00000F0C:
    lwz r28, 0x1424(r28)
lbl_fn_8039D4C4_00000F10:
    cmpwi r28, 0x0
    bne lbl_fn_8039D4C4_00000E40
    b lbl_fn_8039D4C4_000010FC
lbl_fn_8039D4C4_00000F1C:
    cmpwi r0, 0x2
    bne lbl_fn_8039D4C4_0000100C
    lwz r3, lbl_8087F408
    lwz r28, 0x48(r3)
    b lbl_fn_8039D4C4_00001000
lbl_fn_8039D4C4_00000F30:
    lwz r3, 0x10(r5)
    lwz r0, 0x58(r28)
    cmpw r3, r0
    bne lbl_fn_8039D4C4_00000FFC
    lwz r0, 0x12a4(r28)
    srwi. r0, r0, 31
    beq lbl_fn_8039D4C4_00000F54
    mr r3, r28
    bl fn_801539E0
lbl_fn_8039D4C4_00000F54:
    lwz r0, 0x12a4(r28)
    extrwi. r0, r0, 1, 13
    beq lbl_fn_8039D4C4_00000F8C
    lwz r12, 0x0(r28)
    mr r3, r28
    li r4, 0x0
    lwz r12, 0x9c(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r28)
    mr r3, r28
    lwz r12, 0x98(r12)
    mtctr r12
    bctrl
lbl_fn_8039D4C4_00000F8C:
    lfs f2, 0xc(r29)
    addi r4, r1, 0x14
    psq_l f1, 0x4(r29), 0, 0
    mr r3, r28
    psq_st f1, 0x528(r28), 0, 0
    lfs f0, lbl_80885B10
    stfs f2, 0x530(r28)
    fmr f2, f0
    lfs f3, 0x14(r29)
    stfs f0, 0x14(r1)
    stfs f3, 0x18(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x534(r28), 0, 0
    stfs f2, 0x53c(r28)
    lwz r0, 0x5c0(r28)
    stfs f0, 0x1c(r1)
    clrlwi r29, r0, 31
    bl fn_80145334
    cmpwi r29, 0x0
    beq lbl_fn_8039D4C4_00000FEC
    lwz r0, 0x5c0(r28)
    ori r0, r0, 0x1
    stw r0, 0x5c0(r28)
    b lbl_fn_8039D4C4_000010FC
lbl_fn_8039D4C4_00000FEC:
    lwz r0, 0x5c0(r28)
    clrrwi r0, r0, 1
    stw r0, 0x5c0(r28)
    b lbl_fn_8039D4C4_000010FC
lbl_fn_8039D4C4_00000FFC:
    lwz r28, 0x14ac(r28)
lbl_fn_8039D4C4_00001000:
    cmpwi r28, 0x0
    bne lbl_fn_8039D4C4_00000F30
    b lbl_fn_8039D4C4_000010FC
lbl_fn_8039D4C4_0000100C:
    cmpwi r0, 0x3
    bne lbl_fn_8039D4C4_000010FC
    lwz r3, lbl_8087F428
    bl fn_8036554C
    mr r28, r3
    b lbl_fn_8039D4C4_000010F4
lbl_fn_8039D4C4_00001024:
    lwz r3, 0x10(r31)
    lwz r0, 0x58(r28)
    cmpw r3, r0
    bne lbl_fn_8039D4C4_000010F0
    lwz r0, 0x12a4(r28)
    srwi. r0, r0, 31
    beq lbl_fn_8039D4C4_00001048
    mr r3, r28
    bl fn_801539E0
lbl_fn_8039D4C4_00001048:
    lwz r0, 0x12a4(r28)
    extrwi. r0, r0, 1, 13
    beq lbl_fn_8039D4C4_00001080
    lwz r12, 0x0(r28)
    mr r3, r28
    li r4, 0x0
    lwz r12, 0x9c(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r28)
    mr r3, r28
    lwz r12, 0x98(r12)
    mtctr r12
    bctrl
lbl_fn_8039D4C4_00001080:
    lfs f2, 0xc(r29)
    addi r4, r1, 0x8
    psq_l f1, 0x4(r29), 0, 0
    mr r3, r28
    psq_st f1, 0x528(r28), 0, 0
    lfs f0, lbl_80885B10
    stfs f2, 0x530(r28)
    fmr f2, f0
    lfs f3, 0x14(r29)
    stfs f0, 0x8(r1)
    stfs f3, 0xc(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x534(r28), 0, 0
    stfs f2, 0x53c(r28)
    lwz r0, 0x5c0(r28)
    stfs f0, 0x10(r1)
    clrlwi r29, r0, 31
    bl fn_80145334
    cmpwi r29, 0x0
    beq lbl_fn_8039D4C4_000010E0
    lwz r0, 0x5c0(r28)
    ori r0, r0, 0x1
    stw r0, 0x5c0(r28)
    b lbl_fn_8039D4C4_000010FC
lbl_fn_8039D4C4_000010E0:
    lwz r0, 0x5c0(r28)
    clrrwi r0, r0, 1
    stw r0, 0x5c0(r28)
    b lbl_fn_8039D4C4_000010FC
lbl_fn_8039D4C4_000010F0:
    lwz r28, 0x14ac(r28)
lbl_fn_8039D4C4_000010F4:
    cmpwi r28, 0x0
    bne lbl_fn_8039D4C4_00001024
lbl_fn_8039D4C4_000010FC:
    lwz r4, 0x0(r31)
    lis r3, lbl_8074ED24@ha
    li r0, 0x0
    stw r0, 0x4(r30)
    slwi r0, r4, 2
    addi r3, r3, lbl_8074ED24@l
    lwzx r0, r3, r0
    add r0, r31, r0
    stw r0, 0x0(r30)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    lwz r28, 0x40(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8039D930(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    mr r8, r5
    li r9, 0x0
    stw r0, 0x24(r1)
    li r10, 0x12
    lwz r6, 0x10(r8)
    stw r31, 0x1c(r1)
    li r31, 0x0
    lwz r7, 0x14(r8)
    stw r30, 0x18(r1)
    mr r30, r4
    lwz r4, 0x8(r5)
    stw r31, 0x8(r1)
    lwz r5, 0xc(r5)
    lwz r3, lbl_8087F430
    lwz r8, 0x18(r8)
    bl fn_8036F268
    li r0, 0x1
    stw r31, 0x0(r30)
    stw r0, 0x4(r30)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8039D99C(void)
{
    nofralloc
    li r3, 0x0
    li r0, 0x1
    stw r3, 0x0(r4)
    stw r0, 0x4(r4)
    blr
}

asm void fn_8039D9B0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    lwz r3, lbl_8087F430
    bl fn_80370C6C
    lwz r3, lbl_8087F8A0
    li r4, 0x0
    lwz r3, 0x48(r3)
    bl fn_8016E970
    li r3, 0x0
    li r0, 0x1
    stw r3, 0x0(r31)
    stw r0, 0x4(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8039DA00(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r4)
    stw r0, 0x4(r4)
    blr
}

asm void fn_8039DA10(void)
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

asm void fn_8039DA38(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r27, r3
    mr r31, r4
    lwz r4, 0x8(r5)
    mr r28, r5
    lwz r6, lbl_8087F8A0
    lwz r3, 0x88(r3)
    lwz r29, 0x48(r6)
    bl fn_803CC6B4
    lwz r5, lbl_8087F490
    cmpwi r3, 0x0
    mr r4, r3
    lwz r3, 0x263c(r5)
    beq lbl_fn_8039DA38_00001304
    lwz r5, 0x50(r3)
    li r0, 0x1
    cmpwi r5, 0x2
    beq lbl_fn_8039DA38_000012A8
    cmpwi r5, 0x4
    beq lbl_fn_8039DA38_000012A8
    li r0, 0x0
lbl_fn_8039DA38_000012A8:
    cmpwi r0, 0x0
    beq lbl_fn_8039DA38_000012BC
    li r5, 0x0
    bl fn_803B5830
    b lbl_fn_8039DA38_000012C4
lbl_fn_8039DA38_000012BC:
    li r5, 0x0
    bl fn_803B5774
lbl_fn_8039DA38_000012C4:
    lwz r0, 0xc(r28)
    li r3, 0x0
    stw r3, 0xb4(r27)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_8039DA38_000012F8
    li r30, 0x1
    stw r30, 0xa8(r27)
    mr r3, r29
    li r4, 0x5
    bl fn_8016E970
    stw r30, 0x4(r31)
    b lbl_fn_8039DA38_0000130C
lbl_fn_8039DA38_000012F8:
    li r0, 0x1
    stw r0, 0x4(r31)
    b lbl_fn_8039DA38_0000130C
lbl_fn_8039DA38_00001304:
    li r0, 0x0
    stw r0, 0x4(r31)
lbl_fn_8039DA38_0000130C:
    lwz r0, 0x0(r28)
    lis r3, lbl_8074ED24@ha
    addi r3, r3, lbl_8074ED24@l
    slwi r0, r0, 2
    lwzx r0, r3, r0
    add r0, r28, r0
    stw r0, 0x0(r31)
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8039DB2C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r5
    lwz r0, 0xa8(r3)
    lwz r6, lbl_8087F490
    cmpwi r0, 0x0
    lwz r9, 0x263c(r6)
    beq lbl_fn_8039DB2C_000016E8
    lwz r7, 0x0(r5)
    lis r6, lbl_8074ED24@ha
    li r0, 0x1
    stw r0, 0x4(r4)
    slwi r0, r7, 2
    addi r6, r6, lbl_8074ED24@l
    lwzx r0, r6, r0
    add r0, r5, r0
    stw r0, 0x0(r4)
    lwz r4, 0xb4(r3)
    addi r0, r4, 0x1
    stw r0, 0xb4(r3)
    mr r3, r9
    bl fn_803B5950
    cmpwi r3, 0x0
    bne lbl_fn_8039DB2C_000013CC
    lwz r3, 0x10(r29)
    lwz r0, 0xb4(r31)
    cmpw r0, r3
    blt lbl_fn_8039DB2C_00001A74
    cmpwi r3, 0x0
    ble lbl_fn_8039DB2C_00001A74
lbl_fn_8039DB2C_000013CC:
    lfs f1, lbl_80885B30
    addi r3, r1, 0x8
    li r4, 0x2
    bl fn_803935FC
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    lwz r3, 0x10(r29)
    li r0, 0x0
    stw r3, 0xb4(r31)
    stw r0, 0xa8(r31)
    lwz r6, 0x0(r30)
    cmpwi r6, 0x0
    beq lbl_fn_8039DB2C_000014EC
    lwz r5, 0x94(r31)
    li r4, 0x0
    lwz r7, 0xcc(r5)
    addi r8, r5, 0xd0
    mr r10, r8
    cmpwi r7, 0x0
    beq lbl_fn_8039DB2C_000014E4
    cmplwi r7, 0x8
    subi r9, r7, 0x8
    ble lbl_fn_8039DB2C_000014B8
    addi r0, r9, 0x7
    lis r3, lbl_8074ED24@ha
    srwi r0, r0, 3
    addi r3, r3, lbl_8074ED24@l
    mtctr r0
    cmplwi r9, 0x0
    ble lbl_fn_8039DB2C_000014B8
lbl_fn_8039DB2C_00001448:
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
    bdnz lbl_fn_8039DB2C_00001448
lbl_fn_8039DB2C_000014B8:
    lis r3, lbl_8074ED24@ha
    subf r0, r4, r7
    addi r3, r3, lbl_8074ED24@l
    mtctr r0
    cmplw r4, r7
    bge lbl_fn_8039DB2C_000014E4
lbl_fn_8039DB2C_000014D0:
    lwz r0, 0x0(r10)
    slwi r0, r0, 2
    lwzx r0, r3, r0
    add r10, r10, r0
    bdnz lbl_fn_8039DB2C_000014D0
lbl_fn_8039DB2C_000014E4:
    cmplw r6, r10
    blt lbl_fn_8039DB2C_000014F4
lbl_fn_8039DB2C_000014EC:
    li r3, 0x0
    b lbl_fn_8039DB2C_000016BC
lbl_fn_8039DB2C_000014F4:
    lwz r0, 0x4(r6)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_8039DB2C_00001510
    lwz r4, 0x0(r6)
    cmplwi r4, 0x9
    bne lbl_fn_8039DB2C_00001684
lbl_fn_8039DB2C_00001510:
    lwz r0, 0x0(r6)
    lis r3, lbl_8074ED24@ha
    addi r3, r3, lbl_8074ED24@l
    slwi r0, r0, 2
    lwzx r0, r3, r0
    add. r6, r6, r0
    beq lbl_fn_8039DB2C_00001600
    lwz r5, 0xcc(r5)
    li r4, 0x0
    cmpwi r5, 0x0
    beq lbl_fn_8039DB2C_000015F8
    cmplwi r5, 0x8
    subi r7, r5, 0x8
    ble lbl_fn_8039DB2C_000015CC
    addi r0, r7, 0x7
    srwi r0, r0, 3
    mtctr r0
    cmplwi r7, 0x0
    ble lbl_fn_8039DB2C_000015CC
lbl_fn_8039DB2C_0000155C:
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
    bdnz lbl_fn_8039DB2C_0000155C
lbl_fn_8039DB2C_000015CC:
    lis r3, lbl_8074ED24@ha
    subf r0, r4, r5
    addi r3, r3, lbl_8074ED24@l
    mtctr r0
    cmplw r4, r5
    bge lbl_fn_8039DB2C_000015F8
lbl_fn_8039DB2C_000015E4:
    lwz r0, 0x0(r8)
    slwi r0, r0, 2
    lwzx r0, r3, r0
    add r8, r8, r0
    bdnz lbl_fn_8039DB2C_000015E4
lbl_fn_8039DB2C_000015F8:
    cmplw r6, r8
    blt lbl_fn_8039DB2C_00001608
lbl_fn_8039DB2C_00001600:
    li r3, 0x0
    b lbl_fn_8039DB2C_000016BC
lbl_fn_8039DB2C_00001608:
    lwz r0, 0x4(r6)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_8039DB2C_00001624
    lwz r4, 0x0(r6)
    cmplwi r4, 0x9
    bne lbl_fn_8039DB2C_00001648
lbl_fn_8039DB2C_00001624:
    lwz r0, 0x0(r6)
    lis r4, lbl_8074ED24@ha
    addi r4, r4, lbl_8074ED24@l
    mr r3, r31
    slwi r0, r0, 2
    lwzx r0, r4, r0
    add r4, r6, r0
    bl fn_8039CCD0
    b lbl_fn_8039DB2C_000016BC
lbl_fn_8039DB2C_00001648:
    subi r0, r4, 0x7
    cmplwi r0, 0x1
    bgt lbl_fn_8039DB2C_0000165C
    li r3, 0x1
    b lbl_fn_8039DB2C_000016BC
lbl_fn_8039DB2C_0000165C:
    lwz r3, lbl_8087F0A8
    lwz r0, 0xb8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8039DB2C_0000167C
    cmplwi r4, 0xf
    bne lbl_fn_8039DB2C_0000167C
    li r3, 0x1
    b lbl_fn_8039DB2C_000016BC
lbl_fn_8039DB2C_0000167C:
    li r3, 0x0
    b lbl_fn_8039DB2C_000016BC
lbl_fn_8039DB2C_00001684:
    subi r0, r4, 0x7
    cmplwi r0, 0x1
    bgt lbl_fn_8039DB2C_00001698
    li r3, 0x1
    b lbl_fn_8039DB2C_000016BC
lbl_fn_8039DB2C_00001698:
    lwz r3, lbl_8087F0A8
    lwz r0, 0xb8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8039DB2C_000016B8
    cmplwi r4, 0xf
    bne lbl_fn_8039DB2C_000016B8
    li r3, 0x1
    b lbl_fn_8039DB2C_000016BC
lbl_fn_8039DB2C_000016B8:
    li r3, 0x0
lbl_fn_8039DB2C_000016BC:
    cmpwi r3, 0x0
    bne lbl_fn_8039DB2C_00001A74
    lwz r3, lbl_8087F490
    li r4, 0x0
    lwz r3, 0x263c(r3)
    bl fn_803B57B0
    lwz r3, lbl_8087F8A0
    li r4, 0x1
    lwz r3, 0x48(r3)
    bl fn_8016E970
    b lbl_fn_8039DB2C_00001A74
lbl_fn_8039DB2C_000016E8:
    lwz r0, 0xb4(r3)
    lwz r8, 0x10(r5)
    cmpw r0, r8
    blt lbl_fn_8039DB2C_00001758
    lwz r0, 0x0(r5)
    lis r3, lbl_8074ED24@ha
    addi r3, r3, lbl_8074ED24@l
    li r6, 0x1
    slwi r0, r0, 2
    li r7, 0x1
    lwzx r0, r3, r0
    add r0, r5, r0
    stw r0, 0x0(r4)
    lwz r0, 0x50(r9)
    cmpwi r0, 0x2
    beq lbl_fn_8039DB2C_00001734
    cmpwi r0, 0x4
    beq lbl_fn_8039DB2C_00001734
    li r7, 0x0
lbl_fn_8039DB2C_00001734:
    cmpwi r7, 0x0
    bne lbl_fn_8039DB2C_00001748
    cmpwi r0, 0x0
    beq lbl_fn_8039DB2C_00001748
    li r6, 0x0
lbl_fn_8039DB2C_00001748:
    cntlzw r0, r6
    srwi r0, r0, 5
    stw r0, 0x4(r4)
    b lbl_fn_8039DB2C_00001A74
lbl_fn_8039DB2C_00001758:
    lwz r7, 0x0(r5)
    lis r6, lbl_8074ED24@ha
    li r0, 0x1
    stw r0, 0x4(r4)
    slwi r0, r7, 2
    addi r6, r6, lbl_8074ED24@l
    lwzx r0, r6, r0
    add r0, r5, r0
    stw r0, 0x0(r4)
    lwz r5, 0xb4(r3)
    addi r0, r5, 0x1
    stw r0, 0xb4(r3)
    cmpw r0, r8
    blt lbl_fn_8039DB2C_00001A74
    lwz r5, 0x0(r4)
    cmpwi r5, 0x0
    beq lbl_fn_8039DB2C_0000187C
    lwz r4, 0x94(r3)
    li r3, 0x0
    lwz r7, 0xcc(r4)
    addi r8, r4, 0xd0
    mr r10, r8
    cmpwi r7, 0x0
    beq lbl_fn_8039DB2C_00001874
    cmplwi r7, 0x8
    subi r9, r7, 0x8
    ble lbl_fn_8039DB2C_00001848
    addi r0, r9, 0x7
    srwi r0, r0, 3
    mtctr r0
    cmplwi r9, 0x0
    ble lbl_fn_8039DB2C_00001848
lbl_fn_8039DB2C_000017D8:
    lwz r0, 0x0(r10)
    addi r3, r3, 0x8
    slwi r0, r0, 2
    lwzx r0, r6, r0
    add r9, r10, r0
    lwzx r0, r10, r0
    slwi r0, r0, 2
    lwzx r0, r6, r0
    lwzux r0, r9, r0
    slwi r0, r0, 2
    lwzx r0, r6, r0
    lwzux r0, r9, r0
    slwi r0, r0, 2
    lwzx r0, r6, r0
    lwzux r0, r9, r0
    slwi r0, r0, 2
    lwzx r0, r6, r0
    lwzux r0, r9, r0
    slwi r0, r0, 2
    lwzx r0, r6, r0
    lwzux r0, r9, r0
    slwi r0, r0, 2
    lwzx r0, r6, r0
    lwzux r0, r9, r0
    slwi r0, r0, 2
    lwzx r0, r6, r0
    add r10, r9, r0
    bdnz lbl_fn_8039DB2C_000017D8
lbl_fn_8039DB2C_00001848:
    lis r6, lbl_8074ED24@ha
    subf r0, r3, r7
    addi r6, r6, lbl_8074ED24@l
    mtctr r0
    cmplw r3, r7
    bge lbl_fn_8039DB2C_00001874
lbl_fn_8039DB2C_00001860:
    lwz r0, 0x0(r10)
    slwi r0, r0, 2
    lwzx r0, r6, r0
    add r10, r10, r0
    bdnz lbl_fn_8039DB2C_00001860
lbl_fn_8039DB2C_00001874:
    cmplw r5, r10
    blt lbl_fn_8039DB2C_00001884
lbl_fn_8039DB2C_0000187C:
    li r3, 0x0
    b lbl_fn_8039DB2C_00001A4C
lbl_fn_8039DB2C_00001884:
    lwz r0, 0x4(r5)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_8039DB2C_000018A0
    lwz r6, 0x0(r5)
    cmplwi r6, 0x9
    bne lbl_fn_8039DB2C_00001A14
lbl_fn_8039DB2C_000018A0:
    lwz r0, 0x0(r5)
    lis r3, lbl_8074ED24@ha
    addi r3, r3, lbl_8074ED24@l
    slwi r0, r0, 2
    lwzx r0, r3, r0
    add. r5, r5, r0
    beq lbl_fn_8039DB2C_00001990
    lwz r6, 0xcc(r4)
    li r4, 0x0
    cmpwi r6, 0x0
    beq lbl_fn_8039DB2C_00001988
    cmplwi r6, 0x8
    subi r7, r6, 0x8
    ble lbl_fn_8039DB2C_0000195C
    addi r0, r7, 0x7
    srwi r0, r0, 3
    mtctr r0
    cmplwi r7, 0x0
    ble lbl_fn_8039DB2C_0000195C
lbl_fn_8039DB2C_000018EC:
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
    bdnz lbl_fn_8039DB2C_000018EC
lbl_fn_8039DB2C_0000195C:
    lis r3, lbl_8074ED24@ha
    subf r0, r4, r6
    addi r3, r3, lbl_8074ED24@l
    mtctr r0
    cmplw r4, r6
    bge lbl_fn_8039DB2C_00001988
lbl_fn_8039DB2C_00001974:
    lwz r0, 0x0(r8)
    slwi r0, r0, 2
    lwzx r0, r3, r0
    add r8, r8, r0
    bdnz lbl_fn_8039DB2C_00001974
lbl_fn_8039DB2C_00001988:
    cmplw r5, r8
    blt lbl_fn_8039DB2C_00001998
lbl_fn_8039DB2C_00001990:
    li r3, 0x0
    b lbl_fn_8039DB2C_00001A4C
lbl_fn_8039DB2C_00001998:
    lwz r0, 0x4(r5)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_8039DB2C_000019B4
    lwz r4, 0x0(r5)
    cmplwi r4, 0x9
    bne lbl_fn_8039DB2C_000019D8
lbl_fn_8039DB2C_000019B4:
    lwz r0, 0x0(r5)
    lis r4, lbl_8074ED24@ha
    addi r4, r4, lbl_8074ED24@l
    mr r3, r31
    slwi r0, r0, 2
    lwzx r0, r4, r0
    add r4, r5, r0
    bl fn_8039CCD0
    b lbl_fn_8039DB2C_00001A4C
lbl_fn_8039DB2C_000019D8:
    subi r0, r4, 0x7
    cmplwi r0, 0x1
    bgt lbl_fn_8039DB2C_000019EC
    li r3, 0x1
    b lbl_fn_8039DB2C_00001A4C
lbl_fn_8039DB2C_000019EC:
    lwz r3, lbl_8087F0A8
    lwz r0, 0xb8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8039DB2C_00001A0C
    cmplwi r4, 0xf
    bne lbl_fn_8039DB2C_00001A0C
    li r3, 0x1
    b lbl_fn_8039DB2C_00001A4C
lbl_fn_8039DB2C_00001A0C:
    li r3, 0x0
    b lbl_fn_8039DB2C_00001A4C
lbl_fn_8039DB2C_00001A14:
    subi r0, r6, 0x7
    cmplwi r0, 0x1
    bgt lbl_fn_8039DB2C_00001A28
    li r3, 0x1
    b lbl_fn_8039DB2C_00001A4C
lbl_fn_8039DB2C_00001A28:
    lwz r3, lbl_8087F0A8
    lwz r0, 0xb8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8039DB2C_00001A48
    cmplwi r6, 0xf
    bne lbl_fn_8039DB2C_00001A48
    li r3, 0x1
    b lbl_fn_8039DB2C_00001A4C
lbl_fn_8039DB2C_00001A48:
    li r3, 0x0
lbl_fn_8039DB2C_00001A4C:
    cmpwi r3, 0x0
    bne lbl_fn_8039DB2C_00001A74
    lwz r3, lbl_8087F490
    li r4, 0x0
    lwz r3, 0x263c(r3)
    bl fn_803B57B0
    lwz r3, lbl_8087F8A0
    li r4, 0x1
    lwz r3, 0x48(r3)
    bl fn_8016E970
lbl_fn_8039DB2C_00001A74:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
