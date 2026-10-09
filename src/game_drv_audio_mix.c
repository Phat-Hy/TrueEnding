#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void DCFlushRange(void);
extern void DCInvalidateRange(void);
extern void OSDisableInterrupts(void);
extern void OSEnableInterrupts(void);
extern void OSRestoreInterrupts(void);
extern void _restgpr_21(void);
extern void _restgpr_25(void);
extern void _restgpr_27(void);
extern void _savegpr_21(void);
extern void _savegpr_25(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_80013F78(void);
extern void fn_8005B9CC(void);
extern void fn_8005BBF8(void);
extern void fn_8005BCE8(void);
extern void fn_800874C8(void);
extern void fn_8008937C(void);
extern void fn_800897D8(void);
extern void fn_800C16B4(void);
extern void fn_800C18BC(void);
extern void fn_800C2448(void);
extern void fn_800C24B4(void);
extern void fn_80370174(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473F50(void);
extern void fn_8049B780(void);
extern void fn_8049D974(void);
extern void fn_8049DDD8(void);
extern void fn_8049DEE4(void);
extern void fn_8049EBAC(void);
extern void fn_8049ED6C(void);
extern void fn_804A7EA4(void);
extern void fn_805B6508(void);
extern void fn_805B8DB8(void);
extern void fn_805B983C(void);
extern void fn_805B99AC(void);
extern void fn_805F9920(void);
extern void fn_806077F0(void);
extern void fn_806078A0(void);
extern void fn_806078E0(void);
extern void fn_806820D4(void);
extern void fn_80682428(void);
extern void fn_80683B54(void);
extern void fn_80684600(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80763DD8[];
extern u8 lbl_80763DE8[];
extern u8 lbl_80763DFC[];
extern u8 lbl_807774B8[];
extern u8 lbl_807774D8[];
extern u8 lbl_807978C8[];
extern u8 lbl_807C9AA0[];
extern u8 lbl_807C9C80[];

/* Small data declarations */
extern u32 lbl_8087D710;
extern u32 lbl_8087E6F8;
extern u32 lbl_8087E6FC;
extern u32 lbl_8087EF10;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F430;
extern u32 lbl_8087F8A0;
extern u32 lbl_8087FA0C;
extern u32 lbl_8087FA10;
extern u32 lbl_8087FA14;
extern u32 lbl_8087FA18;
extern u32 lbl_8087FA1C;
extern u32 lbl_8087FA20;
extern u32 lbl_808883DC;
extern u32 lbl_808883E0;
extern u32 lbl_808883E4;
extern u32 lbl_808883E8;
extern u32 lbl_808883EC;
extern u32 lbl_808883F0;
extern u32 lbl_808883F4;
extern u32 lbl_808883F8;
extern u32 lbl_808883FC;
extern u32 lbl_80888400;
extern u32 lbl_80888404;
extern u32 lbl_80888408;
extern u32 lbl_8088840C;
extern u32 lbl_80888410;
extern u32 lbl_80888414;
extern u32 lbl_80888418;
extern u32 lbl_8088841C;
extern u32 lbl_80888420;
extern u32 lbl_80888424;
extern u32 lbl_80888428;
extern u32 lbl_8088842C;
extern u32 lbl_80888430;
extern u32 lbl_80888434;
extern u32 lbl_80888438;
extern u32 lbl_8088843C;
extern u32 lbl_80888440;

/* Function declarations */
void fn_805B68A4(void);
void fn_805B68EC(void);
void fn_805B6934(void);
void fn_805B6958(void);
void fn_805B697C(void);
void fn_805B6AE4(void);
void fn_805B6C10(void);
void fn_805B6C48(void);
void fn_805B6C60(void);
void fn_805B6EB0(void);
void fn_805B7220(void);
void fn_805B739C(void);
void fn_805B7B08(void);
void fn_805B7B24(void);
void fn_805B7B28(void);
void fn_805B80B4(void);
void fn_805B8114(void);
void fn_805B81F4(void);
void fn_805B8280(void);

asm void fn_805B68A4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_807C9AA0@ha
    stw r0, 0x14(r1)
    addi r4, r4, lbl_807C9AA0@l
    lwz r0, 0xa0(r4)
    cmpwi r0, 0x0
    beq lbl_fn_805B68A4_00000034
    addi r4, r4, 0x80
    li r5, 0xc
    bl memcpy
    li r3, 0x1
    b lbl_fn_805B68A4_00000038
lbl_fn_805B68A4_00000034:
    li r3, 0x0
lbl_fn_805B68A4_00000038:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805B68EC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_807C9AA0@ha
    stw r0, 0x14(r1)
    addi r4, r4, lbl_807C9AA0@l
    lwz r0, 0xa0(r4)
    cmpwi r0, 0x0
    beq lbl_fn_805B68EC_0000007C
    addi r4, r4, 0x8c
    li r5, 0x10
    bl memcpy
    li r3, 0x1
    b lbl_fn_805B68EC_00000080
lbl_fn_805B68EC_0000007C:
    li r3, 0x0
lbl_fn_805B68EC_00000080:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805B6934(void)
{
    nofralloc
    lis r3, lbl_807C9AA0@ha
    addi r3, r3, lbl_807C9AA0@l
    lwz r0, 0xa0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805B6934_000000AC
    lfs f1, 0x4c(r3)
    blr
lbl_fn_805B6934_000000AC:
    lfs f1, lbl_808883DC
    blr
}

asm void fn_805B6958(void)
{
    nofralloc
    lis r3, lbl_807C9AA0@ha
    addi r3, r3, lbl_807C9AA0@l
    lwz r0, 0xa0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805B6958_000000D0
    lwz r3, 0x50(r3)
    blr
lbl_fn_805B6958_000000D0:
    li r3, 0x0
    blr
}

asm void fn_805B697C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    lwz r0, lbl_8087FA1C
    cmpwi r0, 0x0
    bne lbl_fn_805B697C_0000015C
    lwz r0, lbl_8087FA0C
    lis r31, lbl_807C9C80@ha
    addi r31, r31, lbl_807C9C80@l
    li r4, 0x180
    xori r0, r0, 0x1
    stw r0, lbl_8087FA0C
    mulli r0, r0, 0x180
    add r3, r31, r0
    bl fn_806077F0
    bl OSEnableInterrupts
    lwz r0, lbl_8087FA0C
    mr r30, r3
    li r4, 0x0
    li r5, 0x60
    mulli r0, r0, 0x180
    add r3, r31, r0
    bl fn_805B6508
    lwz r0, lbl_8087FA0C
    li r4, 0x180
    mulli r0, r0, 0x180
    add r3, r31, r0
    bl DCFlushRange
    mr r3, r30
    bl OSRestoreInterrupts
    b lbl_fn_805B697C_00000228
lbl_fn_805B697C_0000015C:
    cmpwi r0, 0x1
    bne lbl_fn_805B697C_00000190
    lwz r0, lbl_8087FA14
    cmpwi r0, 0x0
    beq lbl_fn_805B697C_00000174
    stw r0, lbl_8087FA18
lbl_fn_805B697C_00000174:
    lwz r12, lbl_8087FA10
    mtctr r12
    bctrl
    bl fn_806078A0
    addis r0, r3, 0x8000
    stw r0, lbl_8087FA14
    b lbl_fn_805B697C_000001A8
lbl_fn_805B697C_00000190:
    lwz r12, lbl_8087FA10
    mtctr r12
    bctrl
    bl fn_806078A0
    addis r0, r3, 0x8000
    stw r0, lbl_8087FA18
lbl_fn_805B697C_000001A8:
    lwz r0, lbl_8087FA0C
    lis r3, lbl_807C9C80@ha
    addi r3, r3, lbl_807C9C80@l
    li r4, 0x180
    xori r0, r0, 0x1
    stw r0, lbl_8087FA0C
    mulli r0, r0, 0x180
    add r3, r3, r0
    bl fn_806077F0
    bl OSEnableInterrupts
    lwz r0, lbl_8087FA18
    mr r30, r3
    cmpwi r0, 0x0
    beq lbl_fn_805B697C_000001EC
    mr r3, r0
    li r4, 0x180
    bl DCInvalidateRange
lbl_fn_805B697C_000001EC:
    lwz r0, lbl_8087FA0C
    lis r31, lbl_807C9C80@ha
    addi r31, r31, lbl_807C9C80@l
    lwz r4, lbl_8087FA18
    mulli r0, r0, 0x180
    li r5, 0x60
    add r3, r31, r0
    bl fn_805B6508
    lwz r0, lbl_8087FA0C
    li r4, 0x180
    mulli r0, r0, 0x180
    add r3, r31, r0
    bl DCFlushRange
    mr r3, r30
    bl OSRestoreInterrupts
lbl_fn_805B697C_00000228:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805B6AE4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r5, lbl_807C9AA0@ha
    stw r0, 0x24(r1)
    addi r5, r5, lbl_807C9AA0@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r0, 0xa0(r5)
    cmpwi r0, 0x0
    beq lbl_fn_805B6AE4_0000034C
    lbz r0, 0xa7(r5)
    cmpwi r0, 0x0
    beq lbl_fn_805B6AE4_0000034C
    bl fn_806078E0
    cmpwi r3, 0x0
    li r31, 0x30
    bne lbl_fn_805B6AE4_00000294
    li r31, 0x20
lbl_fn_805B6AE4_00000294:
    cmpwi r29, 0x7f
    ble lbl_fn_805B6AE4_000002A0
    li r29, 0x7f
lbl_fn_805B6AE4_000002A0:
    cmpwi r29, 0x0
    bge lbl_fn_805B6AE4_000002AC
    li r29, 0x0
lbl_fn_805B6AE4_000002AC:
    lis r3, 0x1
    subi r0, r3, 0x15a0
    cmpw r30, r0
    ble lbl_fn_805B6AE4_000002C0
    mr r30, r0
lbl_fn_805B6AE4_000002C0:
    cmpwi r30, 0x0
    bge lbl_fn_805B6AE4_000002CC
    li r30, 0x0
lbl_fn_805B6AE4_000002CC:
    bl OSDisableInterrupts
    xoris r0, r29, 0x8000
    lis r5, 0x4330
    lis r4, lbl_80763DD8@ha
    stw r0, 0xc(r1)
    lfd f2, lbl_80763DD8@l(r4)
    lis r4, lbl_807C9AA0@ha
    stw r5, 0x8(r1)
    cmpwi r30, 0x0
    addi r4, r4, lbl_807C9AA0@l
    lfd f0, 0x8(r1)
    fsubs f1, f0, f2
    stfs f1, 0xc8(r4)
    beq lbl_fn_805B6AE4_00000334
    mullw r0, r31, r30
    lfs f0, 0xc4(r4)
    stw r5, 0x8(r1)
    fsubs f1, f1, f0
    stw r0, 0xd0(r4)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f2
    fdivs f0, f1, f0
    stfs f0, 0xcc(r4)
    b lbl_fn_805B6AE4_00000340
lbl_fn_805B6AE4_00000334:
    li r0, 0x0
    stw r0, 0xd0(r4)
    stfs f1, 0xc4(r4)
lbl_fn_805B6AE4_00000340:
    bl OSRestoreInterrupts
    li r3, 0x1
    b lbl_fn_805B6AE4_00000350
lbl_fn_805B6AE4_0000034C:
    li r3, 0x0
lbl_fn_805B6AE4_00000350:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805B6C10(void)
{
    nofralloc
    lis r3, lbl_807C9AA0@ha
    stwu r1, -0x10(r1)
    addi r3, r3, lbl_807C9AA0@l
    lwz r0, 0xa0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805B6C10_00000398
    lfs f0, 0xc4(r3)
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r3, 0xc(r1)
    b lbl_fn_805B6C10_0000039C
lbl_fn_805B6C10_00000398:
    li r3, -0x1
lbl_fn_805B6C10_0000039C:
    addi r1, r1, 0x10
    blr
}

asm void fn_805B6C48(void)
{
    nofralloc
    cmplwi r3, 0x1
    bgtlr
    lis r4, lbl_807C9AA0@ha
    addi r4, r4, lbl_807C9AA0@l
    stw r3, 0x188(r4)
    blr
}

asm void fn_805B6C60(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_8049D974
    addi r8, r31, 0x190
    addi r0, r31, 0x230
    lfs f1, lbl_808883E4
    lis r7, lbl_807978C8@ha
    li r6, 0x0
    li r3, -0x1
    lfs f2, lbl_808883E0
    addi r7, r7, lbl_807978C8@l
    lfs f0, lbl_808883E8
    li r5, 0x1
    li r4, 0x2
    cmplw r8, r0
    stw r7, 0x0(r31)
    stw r6, 0x11c(r31)
    stw r6, 0x120(r31)
    stw r5, 0x124(r31)
    stw r6, 0x128(r31)
    stw r4, 0x12c(r31)
    stw r6, 0x130(r31)
    stfs f2, 0x134(r31)
    stw r6, 0x138(r31)
    stw r6, 0x13c(r31)
    stfs f1, 0x140(r31)
    stfs f1, 0x144(r31)
    stfs f1, 0x148(r31)
    stw r6, 0x14c(r31)
    stw r6, 0x150(r31)
    stw r6, 0x154(r31)
    stw r6, 0x158(r31)
    stw r6, 0x15c(r31)
    stw r6, 0x160(r31)
    stfs f0, 0x164(r31)
    stfs f1, 0x168(r31)
    stfs f1, 0x16c(r31)
    stfs f1, 0x170(r31)
    stw r6, 0x174(r31)
    stw r6, 0x178(r31)
    stw r3, 0x180(r31)
    stw r3, 0x184(r31)
    stw r6, 0x188(r31)
    stw r6, 0x18c(r31)
    bge lbl_fn_805B6C60_00000594
    addi r5, r31, 0x190
    li r3, 0x0
    cmplw r5, r0
    li r0, 0x0
    bgt lbl_fn_805B6C60_00000494
    li r0, 0x1
lbl_fn_805B6C60_00000494:
    cmpwi r0, 0x0
    beq lbl_fn_805B6C60_000004A0
    li r3, 0x1
lbl_fn_805B6C60_000004A0:
    cmpwi r3, 0x0
    beq lbl_fn_805B6C60_00000554
    addi r3, r5, 0x9f
    li r0, 0xa0
    subf r3, r8, r3
    li r4, -0x1
    divwu r3, r3, r0
    li r0, 0x0
    mtctr r3
    cmplw r8, r5
    bge lbl_fn_805B6C60_00000554
lbl_fn_805B6C60_000004CC:
    stw r4, 0x4(r8)
    stw r4, 0x8(r8)
    stw r0, 0xc(r8)
    stw r0, 0x10(r8)
    stw r4, 0x18(r8)
    stw r4, 0x1c(r8)
    stw r0, 0x20(r8)
    stw r0, 0x24(r8)
    stw r4, 0x2c(r8)
    stw r4, 0x30(r8)
    stw r0, 0x34(r8)
    stw r0, 0x38(r8)
    stw r4, 0x40(r8)
    stw r4, 0x44(r8)
    stw r0, 0x48(r8)
    stw r0, 0x4c(r8)
    stw r4, 0x54(r8)
    stw r4, 0x58(r8)
    stw r0, 0x5c(r8)
    stw r0, 0x60(r8)
    stw r4, 0x68(r8)
    stw r4, 0x6c(r8)
    stw r0, 0x70(r8)
    stw r0, 0x74(r8)
    stw r4, 0x7c(r8)
    stw r4, 0x80(r8)
    stw r0, 0x84(r8)
    stw r0, 0x88(r8)
    stw r4, 0x90(r8)
    stw r4, 0x94(r8)
    stw r0, 0x98(r8)
    stw r0, 0x9c(r8)
    addi r8, r8, 0xa0
    bdnz lbl_fn_805B6C60_000004CC
lbl_fn_805B6C60_00000554:
    addi r4, r31, 0x230
    li r0, 0x14
    addi r3, r4, 0x13
    li r6, -0x1
    subf r3, r8, r3
    li r5, 0x0
    divwu r3, r3, r0
    mtctr r3
    cmplw r8, r4
    bge lbl_fn_805B6C60_00000594
lbl_fn_805B6C60_0000057C:
    stw r6, 0x4(r8)
    stw r6, 0x8(r8)
    stw r5, 0xc(r8)
    stw r5, 0x10(r8)
    addi r8, r8, 0x14
    bdnz lbl_fn_805B6C60_0000057C
lbl_fn_805B6C60_00000594:
    li r8, 0x0
    li r5, 0x3
    addi r7, r31, 0x234
    addi r6, r31, 0x244
    stw r8, 0x230(r31)
    lis r4, lbl_80763DFC@ha
    addi r4, r4, lbl_80763DFC@l
    li r0, 0x1
    stw r8, 0x234(r31)
    mr r3, r31
    addi r4, r4, 0x1
    stw r7, 0x23c(r31)
    stw r8, 0x240(r31)
    stw r8, 0x244(r31)
    stw r6, 0x24c(r31)
    stw r5, 0x250(r31)
    stw r5, 0x254(r31)
    stw r8, 0x25c(r31)
    stw r8, 0x260(r31)
    stw r8, 0x264(r31)
    stw r31, lbl_8087FA20
    stw r0, 0xf8(r31)
    bl fn_804A7EA4
    stw r3, 0x258(r31)
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805B6EB0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stmw r26, 0x8(r1)
    mr r30, r3
    mr r31, r4
    beq lbl_fn_805B6EB0_00000964
    addic. r4, r3, 0x25c
    li r0, 0x0
    stw r0, lbl_8087FA20
    beq lbl_fn_805B6EB0_00000664
    beq lbl_fn_805B6EB0_00000664
    beq lbl_fn_805B6EB0_00000664
    beq lbl_fn_805B6EB0_00000664
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_805B6EB0_00000664
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_805B6EB0_00000664:
    addic. r29, r30, 0x240
    beq lbl_fn_805B6EB0_000007A8
    beq lbl_fn_805B6EB0_000007A8
    beq lbl_fn_805B6EB0_000007A8
    beq lbl_fn_805B6EB0_000007A8
    beq lbl_fn_805B6EB0_000007A8
    lwz r28, 0x4(r29)
    cmpwi r28, 0x0
    beq lbl_fn_805B6EB0_000007A8
    lwz r27, 0x0(r28)
    cmpwi r27, 0x0
    beq lbl_fn_805B6EB0_00000714
    lwz r26, 0x0(r27)
    cmpwi r26, 0x0
    beq lbl_fn_805B6EB0_000006D0
    lwz r4, 0x0(r26)
    cmpwi r4, 0x0
    beq lbl_fn_805B6EB0_000006B4
    mr r3, r29
    bl fn_805B99AC
lbl_fn_805B6EB0_000006B4:
    lwz r4, 0x4(r26)
    cmpwi r4, 0x0
    beq lbl_fn_805B6EB0_000006C8
    mr r3, r29
    bl fn_805B99AC
lbl_fn_805B6EB0_000006C8:
    mr r3, r26
    bl dtor_80084684
lbl_fn_805B6EB0_000006D0:
    lwz r26, 0x4(r27)
    cmpwi r26, 0x0
    beq lbl_fn_805B6EB0_0000070C
    lwz r4, 0x0(r26)
    cmpwi r4, 0x0
    beq lbl_fn_805B6EB0_000006F0
    mr r3, r29
    bl fn_805B99AC
lbl_fn_805B6EB0_000006F0:
    lwz r4, 0x4(r26)
    cmpwi r4, 0x0
    beq lbl_fn_805B6EB0_00000704
    mr r3, r29
    bl fn_805B99AC
lbl_fn_805B6EB0_00000704:
    mr r3, r26
    bl dtor_80084684
lbl_fn_805B6EB0_0000070C:
    mr r3, r27
    bl dtor_80084684
lbl_fn_805B6EB0_00000714:
    lwz r26, 0x4(r28)
    cmpwi r26, 0x0
    beq lbl_fn_805B6EB0_000007A0
    lwz r27, 0x0(r26)
    cmpwi r27, 0x0
    beq lbl_fn_805B6EB0_0000075C
    lwz r4, 0x0(r27)
    cmpwi r4, 0x0
    beq lbl_fn_805B6EB0_00000740
    mr r3, r29
    bl fn_805B99AC
lbl_fn_805B6EB0_00000740:
    lwz r4, 0x4(r27)
    cmpwi r4, 0x0
    beq lbl_fn_805B6EB0_00000754
    mr r3, r29
    bl fn_805B99AC
lbl_fn_805B6EB0_00000754:
    mr r3, r27
    bl dtor_80084684
lbl_fn_805B6EB0_0000075C:
    lwz r27, 0x4(r26)
    cmpwi r27, 0x0
    beq lbl_fn_805B6EB0_00000798
    lwz r4, 0x0(r27)
    cmpwi r4, 0x0
    beq lbl_fn_805B6EB0_0000077C
    mr r3, r29
    bl fn_805B99AC
lbl_fn_805B6EB0_0000077C:
    lwz r4, 0x4(r27)
    cmpwi r4, 0x0
    beq lbl_fn_805B6EB0_00000790
    mr r3, r29
    bl fn_805B99AC
lbl_fn_805B6EB0_00000790:
    mr r3, r27
    bl dtor_80084684
lbl_fn_805B6EB0_00000798:
    mr r3, r26
    bl dtor_80084684
lbl_fn_805B6EB0_000007A0:
    mr r3, r28
    bl dtor_80084684
lbl_fn_805B6EB0_000007A8:
    addic. r29, r30, 0x230
    beq lbl_fn_805B6EB0_000008EC
    beq lbl_fn_805B6EB0_000008EC
    beq lbl_fn_805B6EB0_000008EC
    beq lbl_fn_805B6EB0_000008EC
    beq lbl_fn_805B6EB0_000008EC
    lwz r26, 0x4(r29)
    cmpwi r26, 0x0
    beq lbl_fn_805B6EB0_000008EC
    lwz r27, 0x0(r26)
    cmpwi r27, 0x0
    beq lbl_fn_805B6EB0_00000858
    lwz r28, 0x0(r27)
    cmpwi r28, 0x0
    beq lbl_fn_805B6EB0_00000814
    lwz r4, 0x0(r28)
    cmpwi r4, 0x0
    beq lbl_fn_805B6EB0_000007F8
    mr r3, r29
    bl fn_805B99AC
lbl_fn_805B6EB0_000007F8:
    lwz r4, 0x4(r28)
    cmpwi r4, 0x0
    beq lbl_fn_805B6EB0_0000080C
    mr r3, r29
    bl fn_805B99AC
lbl_fn_805B6EB0_0000080C:
    mr r3, r28
    bl dtor_80084684
lbl_fn_805B6EB0_00000814:
    lwz r28, 0x4(r27)
    cmpwi r28, 0x0
    beq lbl_fn_805B6EB0_00000850
    lwz r4, 0x0(r28)
    cmpwi r4, 0x0
    beq lbl_fn_805B6EB0_00000834
    mr r3, r29
    bl fn_805B99AC
lbl_fn_805B6EB0_00000834:
    lwz r4, 0x4(r28)
    cmpwi r4, 0x0
    beq lbl_fn_805B6EB0_00000848
    mr r3, r29
    bl fn_805B99AC
lbl_fn_805B6EB0_00000848:
    mr r3, r28
    bl dtor_80084684
lbl_fn_805B6EB0_00000850:
    mr r3, r27
    bl dtor_80084684
lbl_fn_805B6EB0_00000858:
    lwz r27, 0x4(r26)
    cmpwi r27, 0x0
    beq lbl_fn_805B6EB0_000008E4
    lwz r28, 0x0(r27)
    cmpwi r28, 0x0
    beq lbl_fn_805B6EB0_000008A0
    lwz r4, 0x0(r28)
    cmpwi r4, 0x0
    beq lbl_fn_805B6EB0_00000884
    mr r3, r29
    bl fn_805B99AC
lbl_fn_805B6EB0_00000884:
    lwz r4, 0x4(r28)
    cmpwi r4, 0x0
    beq lbl_fn_805B6EB0_00000898
    mr r3, r29
    bl fn_805B99AC
lbl_fn_805B6EB0_00000898:
    mr r3, r28
    bl dtor_80084684
lbl_fn_805B6EB0_000008A0:
    lwz r28, 0x4(r27)
    cmpwi r28, 0x0
    beq lbl_fn_805B6EB0_000008DC
    lwz r4, 0x0(r28)
    cmpwi r4, 0x0
    beq lbl_fn_805B6EB0_000008C0
    mr r3, r29
    bl fn_805B99AC
lbl_fn_805B6EB0_000008C0:
    lwz r4, 0x4(r28)
    cmpwi r4, 0x0
    beq lbl_fn_805B6EB0_000008D4
    mr r3, r29
    bl fn_805B99AC
lbl_fn_805B6EB0_000008D4:
    mr r3, r28
    bl dtor_80084684
lbl_fn_805B6EB0_000008DC:
    mr r3, r27
    bl dtor_80084684
lbl_fn_805B6EB0_000008E4:
    mr r3, r26
    bl dtor_80084684
lbl_fn_805B6EB0_000008EC:
    addic. r0, r30, 0x158
    beq lbl_fn_805B6EB0_00000908
    lwz r0, 0x158(r30)
    srwi. r0, r0, 31
    beq lbl_fn_805B6EB0_00000908
    lwz r3, 0x160(r30)
    bl dtor_80084684
lbl_fn_805B6EB0_00000908:
    addic. r0, r30, 0x14c
    beq lbl_fn_805B6EB0_00000924
    lwz r0, 0x14c(r30)
    srwi. r0, r0, 31
    beq lbl_fn_805B6EB0_00000924
    lwz r3, 0x154(r30)
    bl dtor_80084684
lbl_fn_805B6EB0_00000924:
    addic. r0, r30, 0x11c
    beq lbl_fn_805B6EB0_00000948
    lwz r4, 0x11c(r30)
    cmpwi r4, 0x0
    beq lbl_fn_805B6EB0_00000948
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_805B6EB0_00000948
    bl fn_800897D8
lbl_fn_805B6EB0_00000948:
    mr r3, r30
    li r4, 0x0
    bl fn_8049DDD8
    cmpwi r31, 0x0
    ble lbl_fn_805B6EB0_00000964
    mr r3, r30
    bl dtor_80084684
lbl_fn_805B6EB0_00000964:
    mr r3, r30
    lmw r26, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805B7220(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    addi r3, r3, 0x58
    bl fn_80473F50
    cmpwi r3, 0x0
    beq lbl_fn_805B7220_000009B0
    li r3, 0x0
    b lbl_fn_805B7220_00000ADC
lbl_fn_805B7220_000009B0:
    lwz r0, 0x120(r29)
    cmpwi r0, 0x0
    bne lbl_fn_805B7220_00000A58
    li r0, 0x1
    stw r0, 0x120(r29)
    mr r3, r29
    bl fn_805B7B28
    lwz r0, 0x11c(r29)
    lis r3, lbl_80763DFC@ha
    addi r3, r3, lbl_80763DFC@l
    cmpwi r0, 0x0
    addi r4, r3, 0x17
    bne lbl_fn_805B7220_00000A04
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_805B7220_00000A04
    addi r3, r3, 0x10
    bl fn_8008937C
    stw r3, 0x11c(r29)
    mr r30, r3
    b lbl_fn_805B7220_00000A08
lbl_fn_805B7220_00000A04:
    li r30, 0x0
lbl_fn_805B7220_00000A08:
    lis r31, lbl_80763DFC@ha
    mr r3, r30
    addi r31, r31, lbl_80763DFC@l
    addi r5, r29, 0x250
    addi r4, r31, 0x1c
    li r6, 0x1
    li r7, 0x3
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r30
    addi r4, r31, 0x22
    addi r5, r29, 0x254
    li r6, 0x1
    li r7, 0x3
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
lbl_fn_805B7220_00000A58:
    lwz r0, 0x128(r29)
    cmpwi r0, 0x0
    beq lbl_fn_805B7220_00000A6C
    li r3, 0x0
    b lbl_fn_805B7220_00000ADC
lbl_fn_805B7220_00000A6C:
    lwz r0, 0x124(r29)
    cmpwi r0, 0x0
    beq lbl_fn_805B7220_00000A8C
    mr r3, r29
    li r4, 0x1
    bl fn_805B8DB8
    li r0, 0x0
    stw r0, 0x124(r29)
lbl_fn_805B7220_00000A8C:
    mr r3, r29
    bl fn_8049DEE4
    cmpwi r3, 0x0
    beq lbl_fn_805B7220_00000AD8
    lwz r30, 0x70(r29)
    b lbl_fn_805B7220_00000AC8
lbl_fn_805B7220_00000AA4:
    lwz r0, 0x48(r30)
    cmpwi r0, 0x4
    bne lbl_fn_805B7220_00000AC4
    lwz r3, lbl_8087EFB4
    bl fn_800C16B4
    mr r4, r3
    mr r3, r30
    bl fn_8049B780
lbl_fn_805B7220_00000AC4:
    lwz r30, 0x4c(r30)
lbl_fn_805B7220_00000AC8:
    cmpwi r30, 0x0
    bne lbl_fn_805B7220_00000AA4
    li r3, 0x1
    b lbl_fn_805B7220_00000ADC
lbl_fn_805B7220_00000AD8:
    li r3, 0x0
lbl_fn_805B7220_00000ADC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805B739C(void)
{
    nofralloc
    stwu r1, -0xe0(r1)
    mflr r0
    stw r0, 0xe4(r1)
    addi r11, r1, 0xb0
    stfd f31, 0xd0(r1)
    psq_st f31, 0xd8(r1), 0, 0
    stfd f30, 0xc0(r1)
    psq_st f30, 0xc8(r1), 0, 0
    stfd f29, 0xb0(r1)
    psq_st f29, 0xb8(r1), 0, 0
    bl _savegpr_21
    lwz r5, 0x130(r3)
    mr r24, r3
    lwz r4, 0x12c(r3)
    cmpwi r5, 0x0
    subi r0, r4, 0x1
    stw r0, 0x12c(r3)
    beq lbl_fn_805B739C_00000B4C
    cmpwi r5, 0x1
    beq lbl_fn_805B739C_00000B64
    b lbl_fn_805B739C_00000B78
lbl_fn_805B739C_00000B4C:
    lwz r4, lbl_8087EFB4
    psq_l f1, 0x118(r4), 0, 0
    lfs f2, 0x120(r4)
    stfs f2, 0x170(r3)
    psq_st f1, 0x168(r3), 0, 0
    b lbl_fn_805B739C_00000B78
lbl_fn_805B739C_00000B64:
    lwz r4, lbl_8087EFB4
    psq_l f1, 0x10c(r4), 0, 0
    lfs f2, 0x114(r4)
    stfs f2, 0x170(r3)
    psq_st f1, 0x168(r3), 0, 0
lbl_fn_805B739C_00000B78:
    lwz r4, lbl_8087F430
    cmpwi r4, 0x0
    beq lbl_fn_805B739C_00000BAC
    lwz r4, 0x868(r4)
    subi r0, r4, 0x3
    cmplwi r0, 0x1
    bgt lbl_fn_805B739C_00000BAC
    lwz r4, lbl_8087F8A0
    lwz r4, 0x48(r4)
    psq_l f1, 0x528(r4), 0, 0
    lfs f2, 0x530(r4)
    stfs f2, 0x170(r3)
    psq_st f1, 0x168(r3), 0, 0
lbl_fn_805B739C_00000BAC:
    lwz r4, lbl_8087F430
    cmpwi r4, 0x0
    beq lbl_fn_805B739C_00000BDC
    lwz r0, 0x54e4(r4)
    cmpwi r0, 0x8
    beq lbl_fn_805B739C_00000BDC
    lwz r0, 0x12c(r3)
    cmpwi r0, 0x0
    bge lbl_fn_805B739C_00000BDC
    mr r3, r24
    li r4, 0x0
    bl fn_805B8DB8
lbl_fn_805B739C_00000BDC:
    mr r3, r24
    bl fn_8049EBAC
    lwz r29, 0xc4(r24)
    cmpwi r29, 0x0
    beq lbl_fn_805B739C_00000C04
    lwz r3, 0x108(r24)
    lwz r0, 0x10c(r24)
    cmpw r3, r0
    beq lbl_fn_805B739C_00000C04
    b lbl_fn_805B739C_00000C40
lbl_fn_805B739C_00000C04:
    lwz r4, 0x108(r24)
    li r0, 0x0
    cmpwi r4, 0x0
    blt lbl_fn_805B739C_00000C24
    lwz r3, 0xa0(r24)
    cmpw r4, r3
    bge lbl_fn_805B739C_00000C24
    li r0, 0x1
lbl_fn_805B739C_00000C24:
    cmpwi r0, 0x0
    beq lbl_fn_805B739C_00000C3C
    slwi r0, r4, 2
    add r3, r24, r0
    lwz r29, 0xa4(r3)
    b lbl_fn_805B739C_00000C40
lbl_fn_805B739C_00000C3C:
    li r29, 0x0
lbl_fn_805B739C_00000C40:
    cmpwi r29, 0x0
    beq lbl_fn_805B739C_000011B4
    li r27, 0x0
    li r23, 0x0
    li r31, 0x1
lbl_fn_805B739C_00000C54:
    add r3, r24, r23
    lwz r4, 0x180(r3)
    cmpwi r4, 0x0
    bne lbl_fn_805B739C_00000C70
    lwz r0, 0x184(r3)
    cmpwi r0, 0x3
    beq lbl_fn_805B739C_00001020
lbl_fn_805B739C_00000C70:
    cmpwi r4, 0x0
    bne lbl_fn_805B739C_00000C84
    lwz r0, 0x184(r3)
    cmpwi r0, 0x4
    beq lbl_fn_805B739C_00001020
lbl_fn_805B739C_00000C84:
    cmpwi r4, 0x1
    bne lbl_fn_805B739C_00000C98
    lwz r0, 0x184(r3)
    cmpwi r0, 0x4
    beq lbl_fn_805B739C_00001020
lbl_fn_805B739C_00000C98:
    lwz r4, 0x188(r3)
    cmpwi r4, 0x0
    beq lbl_fn_805B739C_00001020
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_805B739C_00001020
    lwz r28, 0xc4(r4)
    cmpwi r28, 0x0
    beq lbl_fn_805B739C_00000CD4
    lwz r3, 0x108(r4)
    lwz r0, 0x10c(r4)
    cmpw r3, r0
    beq lbl_fn_805B739C_00000CD4
    b lbl_fn_805B739C_00000D10
lbl_fn_805B739C_00000CD4:
    lwz r5, 0x108(r4)
    li r3, 0x0
    cmpwi r5, 0x0
    blt lbl_fn_805B739C_00000CF4
    lwz r0, 0xa0(r4)
    cmpw r5, r0
    bge lbl_fn_805B739C_00000CF4
    li r3, 0x1
lbl_fn_805B739C_00000CF4:
    cmpwi r3, 0x0
    beq lbl_fn_805B739C_00000D0C
    slwi r0, r5, 2
    add r3, r4, r0
    lwz r28, 0xa4(r3)
    b lbl_fn_805B739C_00000D10
lbl_fn_805B739C_00000D0C:
    li r28, 0x0
lbl_fn_805B739C_00000D10:
    li r26, 0x0
    li r22, 0x0
    b lbl_fn_805B739C_00001008
lbl_fn_805B739C_00000D1C:
    lwz r3, 0x58(r29)
    li r4, 0x0
    lwz r5, 0x58(r28)
    lwzx r30, r3, r22
    lwzx r25, r5, r22
    lfs f0, 0x58(r30)
    addi r3, r30, 0x4c
    stfs f0, 0x58(r25)
    lfs f0, 0x5c(r30)
    stfs f0, 0x5c(r25)
    lfs f0, 0x60(r30)
    stfs f0, 0x60(r25)
    lfs f0, 0x64(r30)
    stfs f0, 0x64(r25)
    lfs f0, 0x68(r30)
    stfs f0, 0x68(r25)
    lfs f0, 0x6c(r30)
    stfs f0, 0x6c(r25)
    lfs f0, 0x70(r30)
    stfs f0, 0x70(r25)
    lfs f0, 0x74(r30)
    stfs f0, 0x74(r25)
    bl fn_800C24B4
    mr r21, r3
    addi r3, r25, 0x4c
    li r4, 0x0
    bl fn_800C2448
    lwz r0, 0x0(r21)
    stw r0, 0x0(r3)
    lwz r0, 0x4(r21)
    stw r0, 0x4(r3)
    lfs f2, 0x10(r21)
    psq_l f1, 0x8(r21), 0, 0
    psq_st f1, 0x8(r3), 0, 0
    stfs f2, 0x10(r3)
    lfs f2, 0x1c(r21)
    psq_l f1, 0x14(r21), 0, 0
    psq_st f1, 0x14(r3), 0, 0
    stfs f2, 0x1c(r3)
    lwz r0, 0x20(r21)
    stw r0, 0x20(r3)
    lfs f0, 0x24(r21)
    stfs f0, 0x24(r3)
    lfs f0, 0x28(r21)
    stfs f0, 0x28(r3)
    lfs f0, 0x2c(r21)
    stfs f0, 0x2c(r3)
    lfs f0, 0x30(r21)
    stfs f0, 0x30(r3)
    lwz r0, 0x38(r21)
    lwz r4, 0x34(r21)
    stw r4, 0x34(r3)
    stw r0, 0x38(r3)
    lwz r0, 0x40(r21)
    lwz r4, 0x3c(r21)
    stw r4, 0x3c(r3)
    stw r0, 0x40(r3)
    lwz r0, 0x88(r30)
    stw r0, 0x88(r25)
    lfs f0, 0x8c(r30)
    stfs f0, 0x8c(r25)
    lfs f0, 0x90(r30)
    stfs f0, 0x90(r25)
    lwz r0, 0x98(r30)
    lwz r3, 0x94(r30)
    stw r3, 0x94(r25)
    stw r0, 0x98(r25)
    lwz r0, 0xa0(r30)
    lwz r3, 0x9c(r30)
    stw r3, 0x9c(r25)
    stw r0, 0xa0(r25)
    stw r31, 0x280(r25)
    lwz r0, 0x284(r30)
    stw r0, 0x284(r25)
    lwz r0, 0x288(r30)
    stw r0, 0x288(r25)
    lfs f0, 0x28c(r30)
    stfs f0, 0x28c(r25)
    lwz r0, 0x294(r30)
    lwz r3, 0x290(r30)
    stw r3, 0x290(r25)
    stw r0, 0x294(r25)
    lwz r0, 0x29c(r30)
    lwz r3, 0x298(r30)
    stw r3, 0x298(r25)
    stw r0, 0x29c(r25)
    lfs f2, 0x2a8(r30)
    psq_l f1, 0x2a0(r30), 0, 0
    psq_st f1, 0x2a0(r25), 0, 0
    stfs f2, 0x2a8(r25)
    stw r31, 0x1e0(r25)
    lwz r0, 0x1e4(r30)
    stw r0, 0x1e4(r25)
    lwz r0, 0x1e8(r30)
    stw r0, 0x1e8(r25)
    lwz r0, 0x1ec(r30)
    stw r0, 0x1ec(r25)
    lwz r0, 0x1f0(r30)
    stw r0, 0x1f0(r25)
    lwz r0, 0x1f4(r30)
    stw r0, 0x1f4(r25)
    lwz r0, 0x1f8(r30)
    stw r0, 0x1f8(r25)
    lwz r0, 0x1fc(r30)
    stw r0, 0x1fc(r25)
    lfs f0, 0x200(r30)
    stfs f0, 0x200(r25)
    lfs f0, 0x204(r30)
    stfs f0, 0x204(r25)
    lfs f0, 0x208(r30)
    stfs f0, 0x208(r25)
    lwz r0, 0x210(r30)
    lwz r3, 0x20c(r30)
    stw r3, 0x20c(r25)
    stw r0, 0x210(r25)
    lwz r0, 0x218(r30)
    lwz r3, 0x214(r30)
    stw r3, 0x214(r25)
    stw r0, 0x218(r25)
    lfs f2, 0x224(r30)
    psq_l f1, 0x21c(r30), 0, 0
    psq_st f1, 0x21c(r25), 0, 0
    stfs f2, 0x224(r25)
    lfs f0, 0x228(r30)
    stfs f0, 0x228(r25)
    lwz r0, 0x2ac(r30)
    cmpwi r0, 0x0
    beq lbl_fn_805B739C_00000F24
    addi r3, r30, 0x2b0
    b lbl_fn_805B739C_00000F2C
lbl_fn_805B739C_00000F24:
    lwz r3, lbl_8087EFA8
    addi r3, r3, 0x324
lbl_fn_805B739C_00000F2C:
    stw r31, 0x2ac(r25)
    addi r26, r26, 0x1
    addi r22, r22, 0x4
    lwz r0, 0x0(r3)
    stw r0, 0x2b0(r25)
    psq_l f2, 0xc(r3), 0, 0
    psq_l f1, 0x4(r3), 0, 0
    psq_st f1, 0x2b4(r25), 0, 0
    psq_st f2, 0x2bc(r25), 0, 0
    psq_l f2, 0x1c(r3), 0, 0
    psq_l f1, 0x14(r3), 0, 0
    psq_st f1, 0x2c4(r25), 0, 0
    psq_st f2, 0x2cc(r25), 0, 0
    psq_l f2, 0x2c(r3), 0, 0
    psq_l f1, 0x24(r3), 0, 0
    psq_st f1, 0x2d4(r25), 0, 0
    psq_st f2, 0x2dc(r25), 0, 0
    psq_l f2, 0x3c(r3), 0, 0
    psq_l f1, 0x34(r3), 0, 0
    psq_st f1, 0x2e4(r25), 0, 0
    psq_st f2, 0x2ec(r25), 0, 0
    lwz r0, 0x44(r3)
    stw r0, 0x2f4(r25)
    lwz r0, 0x48(r3)
    stw r0, 0x2f8(r25)
    lfs f0, 0x4c(r3)
    stfs f0, 0x2fc(r25)
    stw r31, 0x22c(r25)
    lwz r0, 0x230(r30)
    stw r0, 0x230(r25)
    lwz r0, 0x234(r30)
    stw r0, 0x234(r25)
    lfs f0, 0x238(r30)
    stfs f0, 0x238(r25)
    lfs f0, 0x23c(r30)
    stfs f0, 0x23c(r25)
    stw r31, 0x240(r25)
    lwz r0, 0x244(r30)
    stw r0, 0x244(r25)
    lwz r0, 0x248(r30)
    stw r0, 0x248(r25)
    lfs f0, 0x24c(r30)
    stfs f0, 0x24c(r25)
    psq_l f1, 0x250(r30), 0, 0
    psq_st f1, 0x250(r25), 0, 0
    psq_l f1, 0x258(r30), 0, 0
    psq_st f1, 0x258(r25), 0, 0
    psq_l f1, 0x260(r30), 0, 0
    psq_st f1, 0x260(r25), 0, 0
    psq_l f1, 0x268(r30), 0, 0
    psq_st f1, 0x268(r25), 0, 0
    psq_l f2, 0x278(r30), 0, 0
    psq_l f1, 0x270(r30), 0, 0
    psq_st f1, 0x270(r25), 0, 0
    psq_st f2, 0x278(r25), 0, 0
lbl_fn_805B739C_00001008:
    lwz r0, 0x5c(r28)
    cmplwi r0, 0x1
    ble lbl_fn_805B739C_00001018
    li r0, 0x1
lbl_fn_805B739C_00001018:
    cmplw r26, r0
    blt lbl_fn_805B739C_00000D1C
lbl_fn_805B739C_00001020:
    addi r27, r27, 0x1
    addi r23, r23, 0x14
    cmplwi r27, 0x9
    blt lbl_fn_805B739C_00000C54
    lwz r0, 0xc4(r24)
    cmpwi r0, 0x0
    beq lbl_fn_805B739C_000011B4
    lfs f5, lbl_808883EC
    addi r5, r1, 0x60
    addi r6, r1, 0x48
    addi r7, r1, 0x2c
    addi r9, r1, 0x14
    addi r8, r1, 0x6c
    li r11, 0x0
    li r3, 0x0
    b lbl_fn_805B739C_000011A4
lbl_fn_805B739C_00001060:
    lwz r4, 0x58(r4)
    addi r11, r11, 0x1
    lwz r10, 0xc4(r24)
    lwzx r4, r4, r3
    lwz r10, 0x58(r10)
    lwz r4, 0x304(r4)
    lwzx r10, r10, r3
    addi r3, r3, 0x4
    psq_l f1, 0x84(r4), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    psq_l f1, 0x90(r4), 0, 0
    psq_st f1, 0xc(r5), 0, 0
    lfs f0, 0x64(r1)
    lfs f4, 0x70(r1)
    lfs f2, 0x8c(r4)
    fsubs f7, f4, f0
    stfs f2, 0x68(r1)
    lfs f2, 0x98(r4)
    lfs f3, 0x6c(r1)
    lfs f0, 0x60(r1)
    frsp f4, f2
    fmuls f10, f7, f5
    psq_l f1, 0x0(r5), 0, 0
    fsubs f8, f3, f0
    lfs f3, 0x16c(r24)
    lfs f0, 0x68(r1)
    fsubs f13, f3, f10
    fsubs f6, f4, f0
    lfs f0, 0x168(r24)
    fmuls f11, f8, f5
    lfs f4, 0x170(r24)
    psq_st f1, 0x0(r6), 0, 0
    fmuls f9, f6, f5
    fadds f30, f3, f10
    psq_l f1, 0xc(r5), 0, 0
    fsubs f31, f0, f11
    stfs f2, 0x74(r1)
    fsubs f12, f4, f9
    fadds f29, f0, f11
    psq_st f1, 0xc(r6), 0, 0
    fadds f4, f4, f9
    lfs f2, 0x68(r1)
    stfs f2, 0x50(r1)
    lfs f2, 0x74(r1)
    stfs f2, 0x5c(r1)
    fmr f2, f12
    lfs f3, 0x4c(r1)
    stfs f2, 0x68(r1)
    fmr f2, f4
    lwz r4, 0x304(r10)
    stfs f2, 0x74(r1)
    lfs f0, 0x58(r1)
    stfs f31, 0x2c(r1)
    lfs f2, 0x68(r1)
    stfs f13, 0x30(r1)
    psq_l f1, 0x0(r7), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f29, 0x14(r1)
    stfs f30, 0x18(r1)
    psq_l f1, 0x0(r9), 0, 0
    psq_st f1, 0x0(r8), 0, 0
    stfs f3, 0x64(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x84(r4), 0, 0
    stfs f0, 0x70(r1)
    stfs f2, 0x8c(r4)
    psq_l f1, 0xc(r5), 0, 0
    psq_st f1, 0x90(r4), 0, 0
    lfs f2, 0x74(r1)
    stfs f8, 0x38(r1)
    stfs f7, 0x3c(r1)
    stfs f6, 0x40(r1)
    stfs f11, 0x20(r1)
    stfs f10, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f12, 0x34(r1)
    stfs f11, 0x8(r1)
    stfs f10, 0xc(r1)
    stfs f9, 0x10(r1)
    stfs f4, 0x1c(r1)
    stfs f2, 0x98(r4)
lbl_fn_805B739C_000011A4:
    lwz r4, 0xc4(r24)
    lwz r0, 0x5c(r4)
    cmplw r11, r0
    blt lbl_fn_805B739C_00001060
lbl_fn_805B739C_000011B4:
    lwz r3, lbl_8087EFB4
    lwz r4, 0x2fc(r3)
    lwz r0, 0x74(r4)
    cmpwi r0, 0x0
    bne lbl_fn_805B739C_00001234
    bl fn_800C16B4
    lwz r0, 0x70(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805B739C_000011F0
    lwz r0, 0x74(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805B739C_000011E8
    b lbl_fn_805B739C_000011F4
lbl_fn_805B739C_000011E8:
    addi r0, r3, 0x78
    b lbl_fn_805B739C_000011F4
lbl_fn_805B739C_000011F0:
    li r0, 0x0
lbl_fn_805B739C_000011F4:
    cmpwi r0, 0x0
    beq lbl_fn_805B739C_00001234
    lwz r3, lbl_8087EFB4
    bl fn_800C16B4
    lwz r0, 0x70(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805B739C_00001228
    lwz r0, 0x74(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805B739C_00001220
    b lbl_fn_805B739C_0000122C
lbl_fn_805B739C_00001220:
    addi r0, r3, 0x78
    b lbl_fn_805B739C_0000122C
lbl_fn_805B739C_00001228:
    li r0, 0x0
lbl_fn_805B739C_0000122C:
    mr r3, r0
    bl fn_800C18BC
lbl_fn_805B739C_00001234:
    addi r11, r1, 0xb0
    psq_l f31, 0xd8(r1), 0, 0
    lfd f31, 0xd0(r1)
    psq_l f30, 0xc8(r1), 0, 0
    lfd f30, 0xc0(r1)
    psq_l f29, 0xb8(r1), 0, 0
    lfd f29, 0xb0(r1)
    bl _restgpr_21
    lwz r0, 0xe4(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}

asm void fn_805B7B08(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x128(r3)
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    stfs f2, 0x170(r3)
    psq_st f1, 0x168(r3), 0, 0
    blr
}

asm void fn_805B7B24(void)
{
    nofralloc
    b fn_8049ED6C
}

asm void fn_805B7B28(void)
{
    nofralloc
    stwu r1, -0x770(r1)
    mflr r0
    stw r0, 0x774(r1)
    addi r11, r1, 0x770
    bl _savegpr_25
    mr r27, r3
    addi r3, r3, 0x58
    bl fn_8047059C
    mr r28, r3
    addi r3, r27, 0x58
    bl fn_80470580
    lis r4, lbl_807774D8@ha
    li r0, 0x0
    addi r4, r4, lbl_807774D8@l
    stw r4, 0x118(r1)
    mr r26, r3
    addi r3, r1, 0x128
    stw r0, 0x11c(r1)
    li r4, 0x0
    li r5, 0x400
    stw r0, 0x120(r1)
    stw r0, 0x124(r1)
    stw r0, 0x748(r1)
    bl memset
    addi r3, r1, 0x728
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x118(r1)
    mr r4, r26
    mr r5, r28
    addi r3, r1, 0x118
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807774B8@ha
    addi r3, r1, 0x118
    addi r4, r4, lbl_807774B8@l
    stw r4, 0x118(r1)
    la r4, lbl_8087D710
    bl fn_8005BCE8
    lis r29, lbl_80763DFC@ha
    li r28, -0x1
    addi r29, r29, lbl_80763DFC@l
    addi r30, r1, 0xa8
    addi r31, r1, 0x34
lbl_fn_805B7B28_0000133C:
    addi r3, r1, 0x118
    bl fn_8005B9CC
    mr r25, r3
    addi r4, r29, 0x29
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_805B7B28_000013B4
    addi r3, r1, 0x118
    bl fn_8005B9CC
    lwz r0, 0x158(r27)
    mr r26, r3
    srwi. r0, r0, 31
    bne lbl_fn_805B7B28_0000137C
    lbz r0, 0x158(r27)
    clrlwi r25, r0, 25
    b lbl_fn_805B7B28_00001380
lbl_fn_805B7B28_0000137C:
    lwz r25, 0x15c(r27)
lbl_fn_805B7B28_00001380:
    lbz r0, 0x18(r1)
    mr r3, r26
    stb r0, 0x14(r1)
    bl strlen
    mr r0, r3
    mr r5, r25
    mr r6, r26
    addi r3, r27, 0x158
    add r7, r26, r0
    addi r8, r1, 0x14
    li r4, 0x0
    bl fn_80013F78
    b lbl_fn_805B7B28_000017E8
lbl_fn_805B7B28_000013B4:
    mr r3, r25
    addi r4, r29, 0x2e
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_805B7B28_00001424
    addi r3, r1, 0x118
    bl fn_8005B9CC
    lwz r0, 0x14c(r27)
    mr r26, r3
    srwi. r0, r0, 31
    bne lbl_fn_805B7B28_000013EC
    lbz r0, 0x14c(r27)
    clrlwi r25, r0, 25
    b lbl_fn_805B7B28_000013F0
lbl_fn_805B7B28_000013EC:
    lwz r25, 0x150(r27)
lbl_fn_805B7B28_000013F0:
    lbz r0, 0x10(r1)
    mr r3, r26
    stb r0, 0xc(r1)
    bl strlen
    mr r0, r3
    mr r5, r25
    mr r6, r26
    addi r3, r27, 0x14c
    add r7, r26, r0
    addi r8, r1, 0xc
    li r4, 0x0
    bl fn_80013F78
    b lbl_fn_805B7B28_000017E8
lbl_fn_805B7B28_00001424:
    mr r3, r25
    addi r4, r29, 0x36
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_805B7B28_00001470
    addi r3, r1, 0x118
    bl fn_8005B9CC
    bl fn_80684600
    stw r3, 0x138(r27)
    addi r3, r1, 0x118
    bl fn_8005B9CC
    bl fn_80684600
    stw r3, 0x13c(r27)
    addi r3, r1, 0x118
    bl fn_8005B9CC
    bl fn_80683B54
    frsp f0, f1
    stfs f0, 0x134(r27)
    b lbl_fn_805B7B28_000017E8
lbl_fn_805B7B28_00001470:
    mr r3, r25
    addi r4, r29, 0x3b
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_805B7B28_000014C4
    addi r3, r1, 0x118
    bl fn_8005B9CC
    bl fn_80683B54
    frsp f0, f1
    addi r3, r1, 0x118
    stfs f0, 0x140(r27)
    bl fn_8005B9CC
    bl fn_80683B54
    frsp f0, f1
    addi r3, r1, 0x118
    stfs f0, 0x144(r27)
    bl fn_8005B9CC
    bl fn_80683B54
    frsp f0, f1
    stfs f0, 0x148(r27)
    b lbl_fn_805B7B28_000017E8
lbl_fn_805B7B28_000014C4:
    mr r3, r25
    addi r4, r29, 0x42
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_805B7B28_00001658
    addi r3, r1, 0x118
    bl fn_8005B9CC
    stw r28, 0x28(r1)
    mr r25, r3
    li r26, 0x0
    stw r28, 0x2c(r1)
    stw r28, 0xa8(r1)
    stw r28, 0xac(r1)
    stw r28, 0xb0(r1)
    stw r28, 0xb4(r1)
    stw r28, 0xb8(r1)
    stw r28, 0xbc(r1)
    stw r28, 0xc0(r1)
    stw r28, 0xc4(r1)
    stw r28, 0xc8(r1)
lbl_fn_805B7B28_00001514:
    mr r3, r25
    addi r4, r29, 0x4b
    addi r5, r1, 0x28
    addi r6, r1, 0x2c
    crclr 6
    bl fn_806820D4
    lwz r4, 0x2c(r1)
    addi r3, r1, 0x118
    lwz r0, 0x138(r27)
    lwz r5, 0x28(r1)
    mullw r0, r4, r0
    add r0, r5, r0
    stwx r0, r30, r26
    addi r26, r26, 0x4
    bl fn_8005B9CC
    mr r25, r3
    mr r3, r29
    mr r4, r25
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_805B7B28_00001514
    mr r4, r30
    addi r3, r27, 0x230
    addi r5, r1, 0x30
    addi r6, r1, 0xb
    addi r7, r1, 0xa
    bl fn_805B80B4
    lwz r4, 0x30(r1)
    cmpwi r4, 0x0
    beq lbl_fn_805B7B28_000015A0
    addi r5, r4, 0xc
    lwz r0, 0xa8(r1)
    lwz r4, 0xc(r4)
    cmpw r4, r0
    bge lbl_fn_805B7B28_0000160C
lbl_fn_805B7B28_000015A0:
    lwz r0, 0xa8(r1)
    mr r4, r3
    stw r28, 0xcc(r1)
    addi r3, r27, 0x230
    lbz r5, 0xb(r1)
    addi r7, r1, 0xf0
    stw r28, 0xd0(r1)
    lbz r6, 0xa(r1)
    stw r28, 0xd4(r1)
    stw r28, 0xd8(r1)
    stw r28, 0xdc(r1)
    stw r28, 0xe0(r1)
    stw r28, 0xe4(r1)
    stw r28, 0xe8(r1)
    stw r28, 0xec(r1)
    stw r0, 0xf0(r1)
    stw r28, 0xf4(r1)
    stw r28, 0xf8(r1)
    stw r28, 0xfc(r1)
    stw r28, 0x100(r1)
    stw r28, 0x104(r1)
    stw r28, 0x108(r1)
    stw r28, 0x10c(r1)
    stw r28, 0x110(r1)
    stw r28, 0x114(r1)
    bl fn_805B983C
    addi r5, r3, 0xc
lbl_fn_805B7B28_0000160C:
    lwz r0, 0xac(r1)
    lwz r3, 0xa8(r1)
    stw r3, 0x4(r5)
    stw r0, 0x8(r5)
    lwz r0, 0xb4(r1)
    lwz r3, 0xb0(r1)
    stw r3, 0xc(r5)
    stw r0, 0x10(r5)
    lwz r0, 0xbc(r1)
    lwz r3, 0xb8(r1)
    stw r3, 0x14(r5)
    stw r0, 0x18(r5)
    lwz r0, 0xc4(r1)
    lwz r3, 0xc0(r1)
    stw r3, 0x1c(r5)
    stw r0, 0x20(r5)
    lwz r0, 0xc8(r1)
    stw r0, 0x24(r5)
    b lbl_fn_805B7B28_000017E8
lbl_fn_805B7B28_00001658:
    mr r3, r25
    addi r4, r29, 0x55
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_805B7B28_000017E8
    addi r3, r1, 0x118
    bl fn_8005B9CC
    stw r28, 0x1c(r1)
    mr r25, r3
    li r26, 0x0
    stw r28, 0x20(r1)
    stw r28, 0x34(r1)
    stw r28, 0x38(r1)
    stw r28, 0x3c(r1)
    stw r28, 0x40(r1)
    stw r28, 0x44(r1)
    stw r28, 0x48(r1)
    stw r28, 0x4c(r1)
    stw r28, 0x50(r1)
    stw r28, 0x54(r1)
lbl_fn_805B7B28_000016A8:
    mr r3, r25
    addi r4, r29, 0x4b
    addi r5, r1, 0x1c
    addi r6, r1, 0x20
    crclr 6
    bl fn_806820D4
    lwz r4, 0x20(r1)
    addi r3, r1, 0x118
    lwz r0, 0x138(r27)
    lwz r5, 0x1c(r1)
    mullw r0, r4, r0
    add r0, r5, r0
    stwx r0, r31, r26
    addi r26, r26, 0x4
    bl fn_8005B9CC
    mr r25, r3
    mr r3, r29
    mr r4, r25
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_805B7B28_000016A8
    mr r4, r31
    addi r3, r27, 0x240
    addi r5, r1, 0x24
    addi r6, r1, 0x9
    addi r7, r1, 0x8
    bl fn_805B80B4
    lwz r4, 0x24(r1)
    cmpwi r4, 0x0
    beq lbl_fn_805B7B28_00001734
    addi r5, r4, 0xc
    lwz r0, 0x34(r1)
    lwz r4, 0xc(r4)
    cmpw r4, r0
    bge lbl_fn_805B7B28_000017A0
lbl_fn_805B7B28_00001734:
    lwz r0, 0x34(r1)
    mr r4, r3
    stw r28, 0x58(r1)
    addi r3, r27, 0x240
    lbz r5, 0x9(r1)
    addi r7, r1, 0x80
    stw r28, 0x5c(r1)
    lbz r6, 0x8(r1)
    stw r28, 0x60(r1)
    stw r28, 0x64(r1)
    stw r28, 0x68(r1)
    stw r28, 0x6c(r1)
    stw r28, 0x70(r1)
    stw r28, 0x74(r1)
    stw r28, 0x78(r1)
    stw r0, 0x80(r1)
    stw r28, 0x84(r1)
    stw r28, 0x88(r1)
    stw r28, 0x8c(r1)
    stw r28, 0x90(r1)
    stw r28, 0x94(r1)
    stw r28, 0x98(r1)
    stw r28, 0x9c(r1)
    stw r28, 0xa0(r1)
    stw r28, 0xa4(r1)
    bl fn_805B983C
    addi r5, r3, 0xc
lbl_fn_805B7B28_000017A0:
    lwz r0, 0x38(r1)
    lwz r3, 0x34(r1)
    stw r3, 0x4(r5)
    stw r0, 0x8(r5)
    lwz r0, 0x40(r1)
    lwz r3, 0x3c(r1)
    stw r3, 0xc(r5)
    stw r0, 0x10(r5)
    lwz r0, 0x48(r1)
    lwz r3, 0x44(r1)
    stw r3, 0x14(r5)
    stw r0, 0x18(r5)
    lwz r0, 0x50(r1)
    lwz r3, 0x4c(r1)
    stw r3, 0x1c(r5)
    stw r0, 0x20(r5)
    lwz r0, 0x54(r1)
    stw r0, 0x24(r5)
lbl_fn_805B7B28_000017E8:
    addi r3, r1, 0x118
    bl fn_8005BBF8
    cmpwi r3, 0x0
    bne lbl_fn_805B7B28_0000133C
    addi r11, r1, 0x770
    bl _restgpr_25
    lwz r0, 0x774(r1)
    mtlr r0
    addi r1, r1, 0x770
    blr
}

asm void fn_805B80B4(void)
{
    nofralloc
    li r9, 0x0
    stw r9, 0x0(r5)
    li r8, 0x1
    addi r10, r3, 0x4
    lwz r11, 0x4(r3)
    stb r8, 0x0(r6)
    stb r8, 0x0(r7)
    b lbl_fn_805B80B4_00001860
lbl_fn_805B80B4_00001830:
    lwz r3, 0x0(r4)
    mr r10, r11
    lwz r0, 0xc(r11)
    cmpw r3, r0
    bge lbl_fn_805B80B4_00001850
    lwz r11, 0x0(r11)
    stb r8, 0x0(r6)
    b lbl_fn_805B80B4_00001860
lbl_fn_805B80B4_00001850:
    stw r11, 0x0(r5)
    lwz r11, 0x4(r11)
    stb r9, 0x0(r6)
    stb r9, 0x0(r7)
lbl_fn_805B80B4_00001860:
    cmpwi r11, 0x0
    bne lbl_fn_805B80B4_00001830
    mr r3, r10
    blr
}

asm void fn_805B8114(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    lfs f0, lbl_808883F0
    lfs f2, 0x134(r3)
    lfs f1, 0x0(r4)
    fdivs f7, f0, f2
    lfs f0, 0x140(r3)
    lfs f5, 0x8(r4)
    lfs f4, 0x148(r3)
    lfs f2, 0x144(r3)
    lfs f3, 0x4(r4)
    fsubs f6, f1, f0
    fsubs f0, f5, f4
    fsubs f1, f3, f2
    stfs f6, 0x14(r1)
    fmuls f4, f6, f7
    fmuls f2, f0, f7
    stfs f0, 0x1c(r1)
    fmuls f3, f1, f7
    stfs f1, 0x18(r1)
    fctiwz f1, f4
    fctiwz f0, f2
    stfd f1, 0x20(r1)
    lwz r0, 0x24(r1)
    stfd f0, 0x28(r1)
    stw r0, 0x0(r5)
    lwz r0, 0x2c(r1)
    stw r0, 0x0(r6)
    lwz r4, 0x0(r5)
    lwz r0, lbl_8087E6F8
    stfs f4, 0x8(r1)
    cmpw r4, r0
    lwz r0, lbl_8087E6F8
    stfs f3, 0xc(r1)
    stfs f2, 0x10(r1)
    bge lbl_fn_805B8114_00001900
    b lbl_fn_805B8114_00001914
lbl_fn_805B8114_00001900:
    lwz r0, 0x138(r3)
    cmpw r4, r0
    ble lbl_fn_805B8114_00001910
    mr r4, r0
lbl_fn_805B8114_00001910:
    mr r0, r4
lbl_fn_805B8114_00001914:
    stw r0, 0x0(r5)
    lwz r5, 0x0(r6)
    lwz r0, lbl_8087E6FC
    lwz r4, lbl_8087E6FC
    cmpw r5, r0
    bge lbl_fn_805B8114_00001930
    b lbl_fn_805B8114_00001944
lbl_fn_805B8114_00001930:
    lwz r0, 0x13c(r3)
    cmpw r5, r0
    ble lbl_fn_805B8114_00001940
    mr r5, r0
lbl_fn_805B8114_00001940:
    mr r4, r5
lbl_fn_805B8114_00001944:
    stw r4, 0x0(r6)
    addi r1, r1, 0x30
    blr
}

asm void fn_805B81F4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    lis r7, 0x4330
    xoris r0, r6, 0x8000
    xoris r5, r5, 0x8000
    stw r5, 0x1c(r1)
    lis r6, lbl_80763DE8@ha
    lfs f4, lbl_808883E4
    stw r7, 0x18(r1)
    lfd f2, lbl_80763DE8@l(r6)
    lfd f0, 0x18(r1)
    stw r0, 0x24(r1)
    fsubs f1, f0, f2
    lfs f7, 0x134(r4)
    stw r7, 0x20(r1)
    lfs f6, lbl_808883EC
    fmuls f5, f1, f7
    lfd f0, 0x20(r1)
    lfs f1, 0x144(r4)
    fsubs f3, f0, f2
    lfs f0, 0x140(r4)
    fadds f8, f4, f1
    fmadds f5, f6, f7, f5
    lfs f2, 0x148(r4)
    fmuls f1, f3, f7
    stfs f4, 0xc(r1)
    fadds f3, f5, f0
    fmadds f0, f6, f7, f1
    stfs f5, 0x8(r1)
    stfs f8, 0x4(r3)
    fadds f1, f0, f2
    stfs f3, 0x0(r3)
    stfs f0, 0x10(r1)
    stfs f1, 0x8(r3)
    addi r1, r1, 0x30
    blr
}

asm void fn_805B8280(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    addi r11, r1, 0x120
    bl _savegpr_27
    cmpwi r7, 0x0
    li r27, -0x1
    lis r0, 0x4330
    stw r0, 0xf0(r1)
    mr r28, r3
    mr r29, r4
    stw r0, 0xf8(r1)
    mr r30, r5
    mr r31, r6
    stw r27, 0xc8(r1)
    stw r27, 0xcc(r1)
    stw r27, 0xd0(r1)
    stw r27, 0xd4(r1)
    stw r27, 0xd8(r1)
    stw r27, 0xdc(r1)
    stw r27, 0xe0(r1)
    stw r27, 0xe4(r1)
    stw r27, 0xe8(r1)
    beq lbl_fn_805B8280_00001E8C
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_805B8280_00001E8C
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_805B8280_00001E8C
    lwz r0, 0x553c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_805B8280_00001E8C
    lfs f6, lbl_808883F4
    addi r3, r1, 0xbc
    lfs f4, lbl_808883F8
    lfs f3, 0x170(r4)
    lfs f0, 0x168(r4)
    lfs f5, lbl_808883E4
    fsubs f3, f3, f4
    fsubs f0, f0, f6
    stfs f6, 0x80(r1)
    stfs f5, 0x84(r1)
    stfs f4, 0x88(r1)
    stfs f0, 0xbc(r1)
    stfs f3, 0xc4(r1)
    stfs f5, 0xc0(r1)
    bl fn_805F9920
    lfs f0, lbl_808883FC
    fcmpo cr0, f1, f0
    bge lbl_fn_805B8280_00001B40
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_805B8280_00001B40
    li r4, 0x713
    bl fn_80370174
    cmpwi r3, 0x0
    beq lbl_fn_805B8280_00001B40
    lwz r4, 0x138(r29)
    slwi r0, r4, 2
    addi r3, r4, 0x1
    slwi r5, r4, 1
    stw r27, 0xdc(r1)
    subf r4, r4, r0
    slwi r0, r3, 2
    addi r7, r5, 0x3
    addi r6, r5, 0x2
    addi r5, r5, 0x4
    addi r4, r4, 0x2
    subf r0, r3, r0
    stw r7, 0xc8(r1)
    stw r6, 0xcc(r1)
    stw r5, 0xd0(r1)
    stw r4, 0xd4(r1)
    stw r0, 0xd8(r1)
    stw r27, 0xe0(r1)
    stw r27, 0xe4(r1)
    stw r27, 0xe8(r1)
    stw r7, 0x0(r28)
    stw r6, 0x4(r28)
    stw r5, 0x8(r28)
    stw r4, 0xc(r28)
    stw r0, 0x10(r28)
    stw r27, 0x14(r28)
    stw r27, 0x18(r28)
    stw r27, 0x1c(r28)
    stw r27, 0x20(r28)
    b lbl_fn_805B8280_000024FC
lbl_fn_805B8280_00001B40:
    lfs f5, lbl_80888400
    addi r27, r1, 0xbc
    lfs f4, lbl_808883E4
    addi r4, r1, 0x74
    lfs f3, 0x16c(r29)
    mr r3, r27
    lfs f0, 0x168(r29)
    fsubs f6, f3, f4
    lfs f3, lbl_80888404
    fsubs f7, f0, f5
    lfs f0, 0x170(r29)
    stfs f6, 0x78(r1)
    fsubs f2, f0, f3
    stfs f7, 0x74(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    stfs f5, 0x68(r1)
    stfs f4, 0x6c(r1)
    stfs f3, 0x70(r1)
    stfs f2, 0x7c(r1)
    stfs f2, 0xc4(r1)
    stfs f4, 0xc0(r1)
    bl fn_805F9920
    lfs f0, lbl_80888408
    fcmpo cr0, f1, f0
    bge lbl_fn_805B8280_00001C14
    li r7, 0x3
    stw r7, 0xc8(r1)
    li r0, -0x1
    lwz r4, 0x138(r29)
    slwi r3, r4, 1
    addi r6, r4, 0x2
    addi r5, r4, 0x3
    addi r4, r4, 0x4
    addi r3, r3, 0x3
    stw r6, 0xcc(r1)
    stw r5, 0xd0(r1)
    stw r4, 0xd4(r1)
    stw r3, 0xd8(r1)
    stw r0, 0xdc(r1)
    stw r0, 0xe0(r1)
    stw r0, 0xe4(r1)
    stw r0, 0xe8(r1)
    stw r7, 0x0(r28)
    stw r6, 0x4(r28)
    stw r5, 0x8(r28)
    stw r4, 0xc(r28)
    stw r3, 0x10(r28)
    stw r0, 0x14(r28)
    stw r0, 0x18(r28)
    stw r0, 0x1c(r28)
    stw r0, 0x20(r28)
    b lbl_fn_805B8280_000024FC
lbl_fn_805B8280_00001C14:
    lfs f5, lbl_8088840C
    addi r4, r1, 0x5c
    lfs f4, lbl_808883E4
    mr r3, r27
    lfs f3, 0x16c(r29)
    lfs f0, 0x168(r29)
    fsubs f6, f3, f4
    lfs f3, lbl_80888410
    fsubs f7, f0, f5
    lfs f0, 0x170(r29)
    stfs f6, 0x60(r1)
    fsubs f2, f0, f3
    stfs f7, 0x5c(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    stfs f5, 0x50(r1)
    stfs f4, 0x54(r1)
    stfs f3, 0x58(r1)
    stfs f2, 0x64(r1)
    stfs f2, 0xc4(r1)
    stfs f4, 0xc0(r1)
    bl fn_805F9920
    lfs f0, lbl_80888414
    fcmpo cr0, f1, f0
    bge lbl_fn_805B8280_00001CDC
    lwz r7, 0x138(r29)
    li r0, -0x1
    stw r7, 0xcc(r1)
    slwi r6, r7, 1
    addi r4, r7, 0x1
    addi r5, r6, 0x1
    stw r5, 0xc8(r1)
    addi r3, r6, 0x2
    stw r4, 0xd0(r1)
    stw r6, 0xd4(r1)
    stw r5, 0xd8(r1)
    stw r3, 0xdc(r1)
    stw r0, 0xe0(r1)
    stw r0, 0xe4(r1)
    stw r0, 0xe8(r1)
    stw r5, 0x0(r28)
    stw r7, 0x4(r28)
    stw r4, 0x8(r28)
    stw r6, 0xc(r28)
    stw r5, 0x10(r28)
    stw r3, 0x14(r28)
    stw r0, 0x18(r28)
    stw r0, 0x1c(r28)
    stw r0, 0x20(r28)
    b lbl_fn_805B8280_000024FC
lbl_fn_805B8280_00001CDC:
    lfs f5, lbl_80888418
    addi r4, r1, 0x44
    lfs f4, lbl_808883E4
    mr r3, r27
    lfs f3, 0x16c(r29)
    lfs f0, 0x168(r29)
    fsubs f6, f3, f4
    lfs f3, lbl_8088841C
    fsubs f7, f0, f5
    lfs f0, 0x170(r29)
    stfs f6, 0x48(r1)
    fsubs f2, f0, f3
    stfs f7, 0x44(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    stfs f5, 0x38(r1)
    stfs f4, 0x3c(r1)
    stfs f3, 0x40(r1)
    stfs f2, 0x4c(r1)
    stfs f2, 0xc4(r1)
    stfs f4, 0xc0(r1)
    bl fn_805F9920
    lfs f0, lbl_808883FC
    fcmpo cr0, f1, f0
    bge lbl_fn_805B8280_00001DB8
    lwz r5, 0x138(r29)
    li r0, -0x1
    slwi r3, r5, 2
    slwi r4, r5, 1
    subf r3, r5, r3
    addi r7, r5, 0x4
    addi r8, r4, 0x4
    addi r5, r5, 0x5
    addi r6, r3, 0x4
    addi r4, r4, 0x5
    addi r3, r3, 0x5
    stw r8, 0xc8(r1)
    stw r7, 0xcc(r1)
    stw r6, 0xd0(r1)
    stw r5, 0xd4(r1)
    stw r4, 0xd8(r1)
    stw r3, 0xdc(r1)
    stw r0, 0xe0(r1)
    stw r0, 0xe4(r1)
    stw r0, 0xe8(r1)
    stw r8, 0x0(r28)
    stw r7, 0x4(r28)
    stw r6, 0x8(r28)
    stw r5, 0xc(r28)
    stw r4, 0x10(r28)
    stw r3, 0x14(r28)
    stw r0, 0x18(r28)
    stw r0, 0x1c(r28)
    stw r0, 0x20(r28)
    b lbl_fn_805B8280_000024FC
lbl_fn_805B8280_00001DB8:
    lfs f5, lbl_80888420
    addi r4, r1, 0x2c
    lfs f4, lbl_808883E4
    mr r3, r27
    lfs f3, 0x16c(r29)
    lfs f0, 0x168(r29)
    fsubs f6, f3, f4
    lfs f3, lbl_80888424
    fsubs f7, f0, f5
    lfs f0, 0x170(r29)
    stfs f6, 0x30(r1)
    fsubs f2, f0, f3
    stfs f7, 0x2c(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    stfs f5, 0x20(r1)
    stfs f4, 0x24(r1)
    stfs f3, 0x28(r1)
    stfs f2, 0x34(r1)
    stfs f2, 0xc4(r1)
    stfs f4, 0xc0(r1)
    bl fn_805F9920
    lfs f0, lbl_808883FC
    fcmpo cr0, f1, f0
    bge lbl_fn_805B8280_00001E8C
    lwz r4, 0x138(r29)
    li r0, -0x1
    slwi r3, r4, 1
    addi r8, r4, 0x4
    addi r7, r4, 0x3
    addi r4, r4, 0x5
    addi r6, r3, 0x3
    addi r5, r3, 0x4
    addi r3, r3, 0x5
    stw r8, 0xc8(r1)
    stw r7, 0xcc(r1)
    stw r6, 0xd0(r1)
    stw r5, 0xd4(r1)
    stw r4, 0xd8(r1)
    stw r3, 0xdc(r1)
    stw r0, 0xe0(r1)
    stw r0, 0xe4(r1)
    stw r0, 0xe8(r1)
    stw r8, 0x0(r28)
    stw r7, 0x4(r28)
    stw r6, 0x8(r28)
    stw r5, 0xc(r28)
    stw r4, 0x10(r28)
    stw r3, 0x14(r28)
    stw r0, 0x18(r28)
    stw r0, 0x1c(r28)
    stw r0, 0x20(r28)
    b lbl_fn_805B8280_000024FC
lbl_fn_805B8280_00001E8C:
    lfs f3, 0x16c(r29)
    lfs f0, lbl_80888428
    fcmpo cr0, f3, f0
    bge lbl_fn_805B8280_00001F34
    cmpwi r30, 0x4
    bne lbl_fn_805B8280_00002340
    cmpwi r31, 0x2
    bne lbl_fn_805B8280_00002340
    lwz r12, 0x138(r29)
    addi r5, r12, 0x1
    slwi r0, r12, 2
    slwi r11, r12, 1
    addi r9, r12, 0x3
    slwi r4, r5, 2
    subf r3, r12, r0
    subf r7, r5, r4
    addi r10, r11, 0x4
    addi r5, r3, 0x4
    addi r8, r11, 0x3
    addi r6, r12, 0x4
    addi r4, r12, 0x5
    addi r3, r11, 0x5
    addi r0, r11, 0x2
    stw r10, 0xc8(r1)
    stw r9, 0xcc(r1)
    stw r8, 0xd0(r1)
    stw r7, 0xd4(r1)
    stw r6, 0xd8(r1)
    stw r5, 0xdc(r1)
    stw r4, 0xe0(r1)
    stw r3, 0xe4(r1)
    stw r0, 0xe8(r1)
    stw r10, 0x0(r28)
    stw r9, 0x4(r28)
    stw r8, 0x8(r28)
    stw r7, 0xc(r28)
    stw r6, 0x10(r28)
    stw r5, 0x14(r28)
    stw r4, 0x18(r28)
    stw r3, 0x1c(r28)
    stw r0, 0x20(r28)
    b lbl_fn_805B8280_000024FC
lbl_fn_805B8280_00001F34:
    cmpwi r30, 0x4
    bne lbl_fn_805B8280_00002058
    cmpwi r31, 0x2
    bne lbl_fn_805B8280_00002058
    xoris r0, r30, 0x8000
    stw r0, 0xf4(r1)
    lis r3, lbl_80763DE8@ha
    lfs f7, lbl_808883E4
    xoris r0, r31, 0x8000
    stw r0, 0xfc(r1)
    lfd f4, lbl_80763DE8@l(r3)
    lfd f3, 0xf0(r1)
    lfd f0, 0xf8(r1)
    fsubs f3, f3, f4
    lfs f9, 0x134(r29)
    fsubs f0, f0, f4
    lfs f4, 0x144(r29)
    lfs f6, lbl_808883EC
    fmuls f5, f3, f9
    fmuls f0, f0, f9
    lfs f3, 0x140(r29)
    fadds f4, f7, f4
    stfs f7, 0x18(r1)
    fmadds f8, f6, f9, f5
    fmadds f6, f6, f9, f0
    lfs f5, 0x148(r29)
    fadds f3, f8, f3
    lfs f0, 0x168(r29)
    fadds f5, f6, f5
    stfs f8, 0x14(r1)
    fcmpo cr0, f0, f3
    stfs f6, 0x1c(r1)
    stfs f3, 0xb0(r1)
    stfs f4, 0xb4(r1)
    stfs f5, 0xb8(r1)
    bge lbl_fn_805B8280_00002058
    lfs f0, 0x170(r29)
    fcmpo cr0, f0, f5
    ble lbl_fn_805B8280_00002058
    lwz r4, 0x138(r29)
    slwi r0, r4, 2
    addi r3, r4, 0x1
    slwi r12, r4, 1
    addi r7, r4, 0x4
    subf r6, r4, r0
    slwi r0, r3, 2
    subf r8, r3, r0
    addi r11, r12, 0x4
    addi r10, r12, 0x2
    addi r9, r12, 0x3
    addi r5, r6, 0x4
    addi r4, r6, 0x2
    addi r3, r12, 0x5
    addi r0, r6, 0x5
    stw r11, 0xc8(r1)
    stw r10, 0xcc(r1)
    stw r9, 0xd0(r1)
    stw r8, 0xd4(r1)
    stw r7, 0xd8(r1)
    stw r5, 0xdc(r1)
    stw r4, 0xe0(r1)
    stw r3, 0xe4(r1)
    stw r0, 0xe8(r1)
    stw r11, 0x0(r28)
    stw r10, 0x4(r28)
    stw r9, 0x8(r28)
    stw r8, 0xc(r28)
    stw r7, 0x10(r28)
    stw r5, 0x14(r28)
    stw r4, 0x18(r28)
    stw r3, 0x1c(r28)
    stw r0, 0x20(r28)
    b lbl_fn_805B8280_000024FC
lbl_fn_805B8280_00002058:
    cmpwi r30, 0x2
    bne lbl_fn_805B8280_00002178
    cmpwi r31, 0x2
    bne lbl_fn_805B8280_00002178
    xoris r0, r30, 0x8000
    stw r0, 0xf4(r1)
    lis r3, lbl_80763DE8@ha
    lfs f7, lbl_808883E4
    xoris r0, r31, 0x8000
    stw r0, 0xfc(r1)
    lfd f4, lbl_80763DE8@l(r3)
    lfd f3, 0xf0(r1)
    lfd f0, 0xf8(r1)
    fsubs f3, f3, f4
    lfs f9, 0x134(r29)
    fsubs f0, f0, f4
    lfs f4, 0x144(r29)
    lfs f6, lbl_808883EC
    fmuls f5, f3, f9
    fmuls f0, f0, f9
    lfs f3, 0x140(r29)
    fadds f4, f7, f4
    stfs f7, 0xc(r1)
    fmadds f8, f6, f9, f5
    fmadds f6, f6, f9, f0
    lfs f5, 0x148(r29)
    fadds f3, f8, f3
    lfs f0, 0x168(r29)
    fadds f5, f6, f5
    stfs f8, 0x8(r1)
    fcmpo cr0, f0, f3
    stfs f6, 0x10(r1)
    stfs f3, 0xa4(r1)
    stfs f4, 0xa8(r1)
    stfs f5, 0xac(r1)
    ble lbl_fn_805B8280_00002178
    lfs f0, 0x170(r29)
    fcmpo cr0, f0, f5
    bge lbl_fn_805B8280_00002178
    lwz r4, 0x138(r29)
    li r9, 0x3
    addi r8, r4, 0x1
    slwi r0, r4, 2
    slwi r11, r4, 1
    addi r6, r4, 0x2
    subf r3, r4, r0
    slwi r0, r8, 2
    addi r5, r3, 0x2
    addi r10, r11, 0x2
    addi r7, r11, 0x1
    addi r4, r4, 0x3
    addi r3, r11, 0x3
    subf r0, r8, r0
    stw r10, 0xc8(r1)
    stw r9, 0xcc(r1)
    stw r8, 0xd0(r1)
    stw r7, 0xd4(r1)
    stw r6, 0xd8(r1)
    stw r5, 0xdc(r1)
    stw r4, 0xe0(r1)
    stw r3, 0xe4(r1)
    stw r0, 0xe8(r1)
    stw r10, 0x0(r28)
    stw r9, 0x4(r28)
    stw r8, 0x8(r28)
    stw r7, 0xc(r28)
    stw r6, 0x10(r28)
    stw r5, 0x14(r28)
    stw r4, 0x18(r28)
    stw r3, 0x1c(r28)
    stw r0, 0x20(r28)
    b lbl_fn_805B8280_000024FC
lbl_fn_805B8280_00002178:
    cmpwi r30, 0x3
    bne lbl_fn_805B8280_00002254
    cmpwi r31, 0x1
    bne lbl_fn_805B8280_00002254
    lfs f5, lbl_8088842C
    addi r3, r1, 0x98
    lfs f4, lbl_808883E4
    lfs f3, lbl_80888430
    stfs f5, 0x98(r1)
    stfs f4, 0x9c(r1)
    stfs f3, 0xa0(r1)
    lfs f0, 0x168(r29)
    fsubs f0, f5, f0
    stfs f0, 0x98(r1)
    lfs f0, 0x16c(r29)
    fsubs f0, f4, f0
    stfs f0, 0x9c(r1)
    lfs f0, 0x170(r29)
    fsubs f0, f3, f0
    stfs f4, 0x9c(r1)
    stfs f0, 0xa0(r1)
    bl fn_805F9920
    lfs f0, lbl_80888434
    fcmpo cr0, f1, f0
    bge lbl_fn_805B8280_00002254
    lwz r11, 0x138(r29)
    li r6, 0x3
    slwi r3, r11, 1
    addi r10, r11, 0x3
    addi r9, r3, 0x5
    addi r8, r11, 0x2
    addi r7, r3, 0x2
    addi r5, r3, 0x3
    addi r4, r11, 0x4
    addi r3, r3, 0x4
    addi r0, r11, 0x5
    stw r10, 0xc8(r1)
    stw r9, 0xcc(r1)
    stw r8, 0xd0(r1)
    stw r7, 0xd4(r1)
    stw r6, 0xd8(r1)
    stw r5, 0xdc(r1)
    stw r4, 0xe0(r1)
    stw r3, 0xe4(r1)
    stw r0, 0xe8(r1)
    stw r10, 0x0(r28)
    stw r9, 0x4(r28)
    stw r8, 0x8(r28)
    stw r7, 0xc(r28)
    stw r6, 0x10(r28)
    stw r5, 0x14(r28)
    stw r4, 0x18(r28)
    stw r3, 0x1c(r28)
    stw r0, 0x20(r28)
    b lbl_fn_805B8280_000024FC
lbl_fn_805B8280_00002254:
    cmpwi r30, 0x4
    bne lbl_fn_805B8280_00002340
    cmpwi r31, 0x3
    bne lbl_fn_805B8280_00002340
    lfs f5, lbl_80888438
    addi r3, r1, 0x8c
    lfs f4, lbl_808883E4
    lfs f3, lbl_8088843C
    stfs f5, 0x8c(r1)
    stfs f4, 0x90(r1)
    stfs f3, 0x94(r1)
    lfs f0, 0x168(r29)
    fsubs f0, f5, f0
    stfs f0, 0x8c(r1)
    lfs f0, 0x16c(r29)
    fsubs f0, f4, f0
    stfs f0, 0x90(r1)
    lfs f0, 0x170(r29)
    fsubs f0, f3, f0
    stfs f4, 0x90(r1)
    stfs f0, 0x94(r1)
    bl fn_805F9920
    lfs f0, lbl_80888440
    fcmpo cr0, f1, f0
    bge lbl_fn_805B8280_00002340
    lwz r4, 0x138(r29)
    slwi r0, r4, 2
    addi r3, r4, 0x1
    slwi r10, r4, 1
    addi r6, r4, 0x4
    subf r12, r4, r0
    slwi r0, r3, 2
    subf r7, r3, r0
    addi r9, r10, 0x2
    addi r11, r12, 0x4
    addi r8, r10, 0x3
    addi r5, r10, 0x4
    addi r4, r12, 0x2
    addi r3, r10, 0x5
    addi r0, r12, 0x5
    stw r11, 0xc8(r1)
    stw r9, 0xcc(r1)
    stw r8, 0xd0(r1)
    stw r7, 0xd4(r1)
    stw r6, 0xd8(r1)
    stw r5, 0xdc(r1)
    stw r4, 0xe0(r1)
    stw r3, 0xe4(r1)
    stw r0, 0xe8(r1)
    stw r11, 0x0(r28)
    stw r9, 0x4(r28)
    stw r8, 0x8(r28)
    stw r7, 0xc(r28)
    stw r6, 0x10(r28)
    stw r5, 0x14(r28)
    stw r4, 0x18(r28)
    stw r3, 0x1c(r28)
    stw r0, 0x20(r28)
    b lbl_fn_805B8280_000024FC
lbl_fn_805B8280_00002340:
    lwz r0, 0x138(r29)
    addi r4, r29, 0x234
    lwz r3, 0x234(r29)
    mullw r0, r31, r0
    add r5, r30, r0
    b lbl_fn_805B8280_00002374
lbl_fn_805B8280_00002358:
    lwz r0, 0xc(r3)
    cmpw r0, r5
    blt lbl_fn_805B8280_00002370
    mr r4, r3
    lwz r3, 0x0(r3)
    b lbl_fn_805B8280_00002374
lbl_fn_805B8280_00002370:
    lwz r3, 0x4(r3)
lbl_fn_805B8280_00002374:
    cmpwi r3, 0x0
    bne lbl_fn_805B8280_00002358
    addi r0, r29, 0x234
    cmplw r4, r0
    beq lbl_fn_805B8280_00002394
    lwz r0, 0xc(r4)
    cmpw r5, r0
    bge lbl_fn_805B8280_00002398
lbl_fn_805B8280_00002394:
    addi r4, r29, 0x234
lbl_fn_805B8280_00002398:
    addi r0, r29, 0x234
    cmplw r4, r0
    beq lbl_fn_805B8280_000023F0
    lwz r3, 0x10(r4)
    lwz r0, 0x14(r4)
    stw r0, 0x4(r28)
    stw r3, 0x0(r28)
    lwz r3, 0x18(r4)
    lwz r0, 0x1c(r4)
    stw r0, 0xc(r28)
    stw r3, 0x8(r28)
    lwz r3, 0x20(r4)
    lwz r0, 0x24(r4)
    stw r0, 0x14(r28)
    stw r3, 0x10(r28)
    lwz r3, 0x28(r4)
    lwz r0, 0x2c(r4)
    stw r0, 0x1c(r28)
    stw r3, 0x18(r28)
    lwz r0, 0x30(r4)
    stw r0, 0x20(r28)
    b lbl_fn_805B8280_000024FC
lbl_fn_805B8280_000023F0:
    stw r5, 0xc8(r1)
    addi r3, r1, 0xcc
    lwz r4, 0x250(r29)
    srwi r0, r4, 31
    add r0, r0, r4
    srawi r0, r0, 1
    subf r5, r0, r30
    b lbl_fn_805B8280_00002498
lbl_fn_805B8280_00002410:
    cmpwi r5, 0x0
    blt lbl_fn_805B8280_00002494
    lwz r0, 0x138(r29)
    cmpw r5, r0
    bge lbl_fn_805B8280_00002494
    lwz r4, 0x254(r29)
    srwi r0, r4, 31
    add r0, r0, r4
    srawi r0, r0, 1
    subf r6, r0, r31
    b lbl_fn_805B8280_00002478
lbl_fn_805B8280_0000243C:
    cmpwi r6, 0x0
    blt lbl_fn_805B8280_00002474
    lwz r0, 0x13c(r29)
    cmpw r6, r0
    bge lbl_fn_805B8280_00002474
    cmpw r5, r30
    bne lbl_fn_805B8280_00002460
    cmpw r6, r31
    beq lbl_fn_805B8280_00002474
lbl_fn_805B8280_00002460:
    lwz r0, 0x138(r29)
    mullw r0, r6, r0
    add r0, r5, r0
    stw r0, 0x0(r3)
    addi r3, r3, 0x4
lbl_fn_805B8280_00002474:
    addi r6, r6, 0x1
lbl_fn_805B8280_00002478:
    lwz r4, 0x254(r29)
    srwi r0, r4, 31
    add r0, r0, r4
    srawi r0, r0, 1
    add r0, r31, r0
    cmpw r6, r0
    ble lbl_fn_805B8280_0000243C
lbl_fn_805B8280_00002494:
    addi r5, r5, 0x1
lbl_fn_805B8280_00002498:
    lwz r4, 0x250(r29)
    srwi r0, r4, 31
    add r0, r0, r4
    srawi r0, r0, 1
    add r0, r30, r0
    cmpw r5, r0
    ble lbl_fn_805B8280_00002410
    lwz r3, 0xc8(r1)
    lwz r0, 0xcc(r1)
    stw r0, 0x4(r28)
    stw r3, 0x0(r28)
    lwz r3, 0xd0(r1)
    lwz r0, 0xd4(r1)
    stw r0, 0xc(r28)
    stw r3, 0x8(r28)
    lwz r3, 0xd8(r1)
    lwz r0, 0xdc(r1)
    stw r0, 0x14(r28)
    stw r3, 0x10(r28)
    lwz r3, 0xe0(r1)
    lwz r0, 0xe4(r1)
    stw r0, 0x1c(r28)
    stw r3, 0x18(r28)
    lwz r0, 0xe8(r1)
    stw r0, 0x20(r28)
lbl_fn_805B8280_000024FC:
    addi r11, r1, 0x120
    bl _restgpr_27
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}
