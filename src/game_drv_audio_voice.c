#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_18(void);
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _savegpr_18(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void dtor_80084684(void);
extern void fn_8003E120(void);
extern void fn_8004B290(void);
extern void fn_8006AA20(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_80097A9C(void);
extern void fn_800A03A0(void);
extern void fn_800A0448(void);
extern void fn_800D1D3C(void);
extern void fn_800D1E9C(void);
extern void fn_800D2338(void);
extern void fn_800D246C(void);
extern void fn_800D3FA4(void);
extern void fn_800DC6B4(void);
extern void fn_80116FC0(void);
extern void fn_8016E970(void);
extern void fn_801F4C14(void);
extern void fn_801FEE08(void);
extern void fn_8021F09C(void);
extern void fn_803957F0(void);
extern void fn_803C0634(void);
extern void fn_803CC718(void);
extern void fn_803CC754(void);
extern void fn_803CC774(void);
extern void fn_803EAC3C(void);
extern void fn_80473E74(void);
extern void fn_80473E8C(void);
extern void fn_80473F50(void);
extern void fn_80473F88(void);
extern void fn_8049D68C(void);
extern void fn_805B8114(void);
extern void fn_805B8280(void);
extern void fn_805BA938(void);
extern void fn_805BB658(void);
extern void fn_805F9920(void);
extern void fn_80680770(void);
extern void fn_80686EA4(void);
extern void fn_806958E0(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 lbl_80763DE8[];
extern u8 lbl_80763DFC[];
extern u8 lbl_80763EC8[];
extern u8 lbl_80763F38[];
extern u8 lbl_8078FBB0[];
extern u8 lbl_80797908[];
extern u8 lbl_80797928[];
extern u8 lbl_807979B0[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087E6F8;
extern u32 lbl_8087E6FC;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F430;
extern u32 lbl_8087F490;
extern u32 lbl_8087F498;
extern u32 lbl_8087FA20;
extern u32 lbl_808883E4;
extern u32 lbl_808883EC;
extern u32 lbl_808883F0;
extern u32 lbl_80888438;
extern u32 lbl_8088843C;
extern u32 lbl_80888440;
extern u32 lbl_80888448;
extern u32 lbl_80888454;
extern u32 lbl_80888458;

/* Function declarations */
void fn_805B8DB8(void);
void fn_805B96AC(void);
void fn_805B983C(void);
void fn_805B99AC(void);
void fn_805B9B0C(void);
void fn_805B9BA8(void);
void fn_805B9D5C(void);
void fn_805B9E74(void);
void fn_805B9ECC(void);
void fn_805B9F54(void);
void fn_805B9FC8(void);
void fn_805BA11C(void);
void fn_805BA16C(void);
void fn_805BA34C(void);
void fn_805BA358(void);

asm void fn_805B8DB8(void)
{
    nofralloc
    stwu r1, -0x4a0(r1)
    mflr r0
    stw r0, 0x4a4(r1)
    addi r11, r1, 0x4a0
    bl _savegpr_18
    lwz r5, lbl_8087F0A8
    mr r22, r3
    mr r23, r4
    lwz r0, 0x164(r5)
    cmpwi r0, 0x0
    beq lbl_fn_805B8DB8_00000110
    lwz r0, 0x124(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805B8DB8_000008DC
    lis r19, lbl_80763DFC@ha
    addi r20, r3, 0x14d
    addi r21, r3, 0x159
    li r23, 0x0
    addi r19, r19, lbl_80763DFC@l
    li r18, 0x1
lbl_fn_805B8DB8_00000050:
    li r24, 0x0
lbl_fn_805B8DB8_00000054:
    lwz r0, 0x14c(r22)
    addi r3, r1, 0x350
    srwi. r0, r0, 31
    bne lbl_fn_805B8DB8_0000006C
    mr r4, r20
    b lbl_fn_805B8DB8_00000070
lbl_fn_805B8DB8_0000006C:
    lwz r4, 0x154(r22)
lbl_fn_805B8DB8_00000070:
    mr r5, r23
    mr r6, r24
    crclr 6
    bl sprintf
    lwz r0, 0x158(r22)
    addi r3, r1, 0x250
    addi r4, r19, 0x5f
    srwi. r0, r0, 31
    bne lbl_fn_805B8DB8_0000009C
    mr r5, r21
    b lbl_fn_805B8DB8_000000A0
lbl_fn_805B8DB8_0000009C:
    lwz r5, 0x160(r22)
lbl_fn_805B8DB8_000000A0:
    addi r6, r1, 0x350
    crclr 6
    bl sprintf
    addi r3, r1, 0x250
    bl fn_8006AA20
    cmpwi r3, 0x0
    beq lbl_fn_805B8DB8_000000F4
    mr r3, r22
    addi r4, r1, 0x250
    bl fn_8049D68C
    cmpwi r3, 0x0
    beq lbl_fn_805B8DB8_000000D4
    stw r18, 0xf4(r3)
lbl_fn_805B8DB8_000000D4:
    lwz r0, lbl_8087F430
    cmpwi r0, 0x0
    beq lbl_fn_805B8DB8_000000F4
    mr r3, r22
    mr r4, r23
    mr r5, r24
    li r6, 0x0
    bl fn_805B9B0C
lbl_fn_805B8DB8_000000F4:
    addi r24, r24, 0x1
    cmpwi r24, 0x5
    blt lbl_fn_805B8DB8_00000054
    addi r23, r23, 0x1
    cmpwi r23, 0x6
    blt lbl_fn_805B8DB8_00000050
    b lbl_fn_805B8DB8_000008DC
lbl_fn_805B8DB8_00000110:
    lfs f2, 0x134(r3)
    lfs f0, lbl_808883F0
    lfs f1, 0x168(r3)
    fdivs f6, f0, f2
    lfs f0, 0x140(r3)
    lfs f5, 0x170(r3)
    lfs f4, 0x148(r3)
    lfs f3, 0x16c(r3)
    lfs f2, 0x144(r3)
    fsubs f0, f1, f0
    lwz r0, lbl_8087E6F8
    fsubs f1, f3, f2
    lwz r6, lbl_8087E6F8
    fsubs f5, f5, f4
    stfs f0, 0x8(r1)
    fmuls f2, f0, f6
    stfs f1, 0xc(r1)
    fmuls f4, f5, f6
    fmuls f3, f1, f6
    stfs f5, 0x10(r1)
    fctiwz f1, f2
    fctiwz f0, f4
    stfs f2, 0x14(r1)
    stfd f1, 0x450(r1)
    lwz r4, 0x454(r1)
    stfd f0, 0x458(r1)
    cmpw r4, r0
    stfs f3, 0x18(r1)
    lwz r5, 0x45c(r1)
    stfs f4, 0x1c(r1)
    bge lbl_fn_805B8DB8_00000190
    b lbl_fn_805B8DB8_000001A4
lbl_fn_805B8DB8_00000190:
    lwz r0, 0x138(r3)
    cmpw r4, r0
    ble lbl_fn_805B8DB8_000001A0
    mr r4, r0
lbl_fn_805B8DB8_000001A0:
    mr r6, r4
lbl_fn_805B8DB8_000001A4:
    lwz r0, lbl_8087E6FC
    lwz r7, lbl_8087E6FC
    cmpw r5, r0
    bge lbl_fn_805B8DB8_000001B8
    b lbl_fn_805B8DB8_000001CC
lbl_fn_805B8DB8_000001B8:
    lwz r0, 0x13c(r3)
    cmpw r5, r0
    ble lbl_fn_805B8DB8_000001C8
    mr r5, r0
lbl_fn_805B8DB8_000001C8:
    mr r7, r5
lbl_fn_805B8DB8_000001CC:
    lwz r5, 0x174(r3)
    cmpw r5, r6
    bne lbl_fn_805B8DB8_000001E4
    lwz r0, 0x178(r3)
    cmpw r0, r7
    beq lbl_fn_805B8DB8_000002A4
lbl_fn_805B8DB8_000001E4:
    lwz r0, 0x178(r3)
    lis r4, 0x4330
    xoris r5, r5, 0x8000
    stw r5, 0x45c(r1)
    xoris r0, r0, 0x8000
    lfs f7, 0x164(r3)
    stw r4, 0x458(r1)
    lis r5, lbl_80763DE8@ha
    lfs f0, lbl_808883F0
    stw r0, 0x454(r1)
    lfd f3, lbl_80763DE8@l(r5)
    fsubs f6, f7, f0
    stw r4, 0x450(r1)
    lfd f1, 0x458(r1)
    lfd f0, 0x450(r1)
    fsubs f2, f1, f3
    lfs f1, lbl_808883EC
    fsubs f0, f0, f3
    lfs f4, 0x134(r3)
    lfs f3, 0x140(r3)
    fnmsubs f5, f6, f1, f2
    fnmsubs f2, f6, f1, f0
    lfs f1, 0x148(r3)
    lfs f0, 0x168(r3)
    fmadds f5, f4, f5, f3
    fmadds f3, f4, f2, f1
    fcmpo cr0, f0, f5
    fmadds f2, f4, f7, f5
    fmadds f1, f4, f7, f3
    cror eq, gt, eq
    bne lbl_fn_805B8DB8_00000290
    fcmpo cr0, f0, f2
    cror eq, lt, eq
    bne lbl_fn_805B8DB8_00000290
    lfs f0, 0x170(r3)
    fcmpo cr0, f0, f3
    cror eq, gt, eq
    bne lbl_fn_805B8DB8_00000290
    fcmpo cr0, f0, f1
    cror eq, lt, eq
    bne lbl_fn_805B8DB8_00000290
    li r0, 0x1
    b lbl_fn_805B8DB8_00000294
lbl_fn_805B8DB8_00000290:
    li r0, 0x0
lbl_fn_805B8DB8_00000294:
    cmpwi r0, 0x0
    bne lbl_fn_805B8DB8_000002A4
    stw r6, 0x174(r3)
    stw r7, 0x178(r3)
lbl_fn_805B8DB8_000002A4:
    li r0, 0x0
    stw r0, 0x17c(r3)
    mr r4, r22
    mr r7, r23
    stw r0, 0x190(r3)
    stw r0, 0x1a4(r3)
    stw r0, 0x1b8(r3)
    stw r0, 0x1cc(r3)
    stw r0, 0x1e0(r3)
    stw r0, 0x1f4(r3)
    stw r0, 0x208(r3)
    stw r0, 0x21c(r3)
    addi r3, r1, 0x2c
    lwz r5, 0x174(r22)
    lwz r6, 0x178(r22)
    bl fn_805B8280
    addi r27, r22, 0x17c
    mr r8, r22
    mr r7, r27
    li r10, 0x0
    li r3, 0x1
    li r0, 0x3
lbl_fn_805B8DB8_000002FC:
    lwz r5, 0x8(r7)
    addi r9, r1, 0x2c
    lwz r4, 0x138(r22)
    li r11, 0x0
    lwz r6, 0x4(r7)
    mullw r4, r5, r4
    add r5, r6, r4
    mtctr r0
lbl_fn_805B8DB8_0000031C:
    lwz r4, 0x0(r9)
    cmpwi r4, -0x1
    beq lbl_fn_805B8DB8_00000370
    cmpw r5, r4
    bne lbl_fn_805B8DB8_00000334
    stw r3, 0x17c(r8)
lbl_fn_805B8DB8_00000334:
    lwz r4, 0x4(r9)
    cmpwi r4, -0x1
    beq lbl_fn_805B8DB8_00000370
    cmpw r5, r4
    bne lbl_fn_805B8DB8_0000034C
    stw r3, 0x17c(r8)
lbl_fn_805B8DB8_0000034C:
    lwz r4, 0x8(r9)
    cmpwi r4, -0x1
    beq lbl_fn_805B8DB8_00000370
    cmpw r5, r4
    bne lbl_fn_805B8DB8_00000364
    stw r3, 0x17c(r8)
lbl_fn_805B8DB8_00000364:
    addi r9, r9, 0xc
    addi r11, r11, 0x2
    bdnz lbl_fn_805B8DB8_0000031C
lbl_fn_805B8DB8_00000370:
    addi r10, r10, 0x1
    addi r8, r8, 0x14
    cmpwi r10, 0x9
    addi r7, r7, 0x14
    blt lbl_fn_805B8DB8_000002FC
    mr r19, r27
    li r20, 0x0
    li r18, 0x0
lbl_fn_805B8DB8_00000390:
    lwz r0, 0x0(r19)
    cmpwi r0, 0x0
    bne lbl_fn_805B8DB8_000003C4
    lwz r3, 0xc(r19)
    cmpwi r3, 0x0
    beq lbl_fn_805B8DB8_000003C4
    bl fn_800D2338
    stw r18, 0xc(r19)
    lwz r3, 0x10(r19)
    cmpwi r3, 0x0
    beq lbl_fn_805B8DB8_000003C4
    bl fn_805B9D5C
    stw r18, 0x10(r19)
lbl_fn_805B8DB8_000003C4:
    addi r20, r20, 0x1
    addi r19, r19, 0x14
    cmpwi r20, 0x9
    blt lbl_fn_805B8DB8_00000390
    lis r18, lbl_80763DFC@ha
    addi r31, r1, 0x2c
    addi r30, r22, 0x14d
    addi r29, r22, 0x159
    addi r18, r18, lbl_80763DFC@l
    li r26, 0x0
    li r19, 0x1
    li r20, 0x3
    li r21, 0x9
lbl_fn_805B8DB8_000003F8:
    lwz r3, 0x0(r31)
    cmpwi r3, 0x0
    blt lbl_fn_805B8DB8_000005F0
    lwz r0, 0x138(r22)
    divw r25, r3, r0
    mullw r0, r25, r0
    subf. r24, r0, r3
    bne lbl_fn_805B8DB8_00000420
    cmpwi r25, 0x3
    beq lbl_fn_805B8DB8_000005F0
lbl_fn_805B8DB8_00000420:
    cmpwi r24, 0x0
    bne lbl_fn_805B8DB8_00000430
    cmpwi r25, 0x4
    beq lbl_fn_805B8DB8_000005F0
lbl_fn_805B8DB8_00000430:
    cmpwi r24, 0x1
    bne lbl_fn_805B8DB8_00000440
    cmpwi r25, 0x4
    beq lbl_fn_805B8DB8_000005F0
lbl_fn_805B8DB8_00000440:
    mr r3, r27
    li r4, 0x0
    li r5, 0x0
    mtctr r20
lbl_fn_805B8DB8_00000450:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805B8DB8_00000488
    lwz r0, 0x8(r3)
    cmpw r0, r25
    bne lbl_fn_805B8DB8_00000488
    lwz r0, 0x4(r3)
    cmpw r0, r24
    bne lbl_fn_805B8DB8_00000488
    lwz r0, 0xc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805B8DB8_00000488
    li r4, 0x1
    b lbl_fn_805B8DB8_00000504
lbl_fn_805B8DB8_00000488:
    lwz r0, 0x14(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805B8DB8_000004C0
    lwz r0, 0x1c(r3)
    cmpw r0, r25
    bne lbl_fn_805B8DB8_000004C0
    lwz r0, 0x18(r3)
    cmpw r0, r24
    bne lbl_fn_805B8DB8_000004C0
    lwz r0, 0x20(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805B8DB8_000004C0
    li r4, 0x1
    b lbl_fn_805B8DB8_00000504
lbl_fn_805B8DB8_000004C0:
    lwz r0, 0x28(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805B8DB8_000004F8
    lwz r0, 0x30(r3)
    cmpw r0, r25
    bne lbl_fn_805B8DB8_000004F8
    lwz r0, 0x2c(r3)
    cmpw r0, r24
    bne lbl_fn_805B8DB8_000004F8
    lwz r0, 0x34(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805B8DB8_000004F8
    li r4, 0x1
    b lbl_fn_805B8DB8_00000504
lbl_fn_805B8DB8_000004F8:
    addi r3, r3, 0x3c
    addi r5, r5, 0x2
    bdnz lbl_fn_805B8DB8_00000450
lbl_fn_805B8DB8_00000504:
    cmpwi r4, 0x0
    bne lbl_fn_805B8DB8_000005F0
    mr r28, r27
    mtctr r21
lbl_fn_805B8DB8_00000514:
    lwz r0, 0x0(r28)
    cmpwi r0, 0x0
    bne lbl_fn_805B8DB8_000005E8
    lwz r0, 0x14c(r22)
    addi r3, r1, 0x150
    srwi. r0, r0, 31
    bne lbl_fn_805B8DB8_00000538
    mr r4, r30
    b lbl_fn_805B8DB8_0000053C
lbl_fn_805B8DB8_00000538:
    lwz r4, 0x154(r22)
lbl_fn_805B8DB8_0000053C:
    mr r5, r24
    mr r6, r25
    crclr 6
    bl sprintf
    lwz r0, 0x158(r22)
    addi r3, r1, 0x50
    addi r4, r18, 0x5f
    srwi. r0, r0, 31
    bne lbl_fn_805B8DB8_00000568
    mr r5, r29
    b lbl_fn_805B8DB8_0000056C
lbl_fn_805B8DB8_00000568:
    lwz r5, 0x160(r22)
lbl_fn_805B8DB8_0000056C:
    addi r6, r1, 0x150
    crclr 6
    bl sprintf
    addi r3, r1, 0x50
    bl fn_8006AA20
    cmpwi r3, 0x0
    beq lbl_fn_805B8DB8_000005F0
    stw r24, 0x4(r28)
    mr r3, r22
    addi r4, r1, 0x50
    stw r25, 0x8(r28)
    stw r19, 0x0(r28)
    bl fn_8049D68C
    cmpwi r3, 0x0
    stw r3, 0xc(r28)
    beq lbl_fn_805B8DB8_000005B0
    stw r19, 0xf4(r3)
lbl_fn_805B8DB8_000005B0:
    lwz r0, lbl_8087F430
    cmpwi r0, 0x0
    beq lbl_fn_805B8DB8_000005F0
    cmpwi r23, 0x0
    mr r3, r22
    mr r4, r24
    mr r5, r25
    beq lbl_fn_805B8DB8_000005D8
    li r6, 0x0
    b lbl_fn_805B8DB8_000005DC
lbl_fn_805B8DB8_000005D8:
    lwz r6, 0xc(r28)
lbl_fn_805B8DB8_000005DC:
    bl fn_805B9B0C
    stw r3, 0x10(r28)
    b lbl_fn_805B8DB8_000005F0
lbl_fn_805B8DB8_000005E8:
    addi r28, r28, 0x14
    bdnz lbl_fn_805B8DB8_00000514
lbl_fn_805B8DB8_000005F0:
    addi r26, r26, 0x1
    addi r31, r31, 0x4
    cmpwi r26, 0x9
    blt lbl_fn_805B8DB8_000003F8
    lwz r6, 0x178(r22)
    addi r18, r22, 0x244
    lwz r0, 0x138(r22)
    lwz r5, 0x174(r22)
    mullw r0, r6, r0
    lwz r4, 0x244(r22)
    add r3, r5, r0
    b lbl_fn_805B8DB8_0000063C
lbl_fn_805B8DB8_00000620:
    lwz r0, 0xc(r4)
    cmpw r0, r3
    blt lbl_fn_805B8DB8_00000638
    mr r18, r4
    lwz r4, 0x0(r4)
    b lbl_fn_805B8DB8_0000063C
lbl_fn_805B8DB8_00000638:
    lwz r4, 0x4(r4)
lbl_fn_805B8DB8_0000063C:
    cmpwi r4, 0x0
    bne lbl_fn_805B8DB8_00000620
    addi r0, r22, 0x244
    cmplw r18, r0
    beq lbl_fn_805B8DB8_0000065C
    lwz r0, 0xc(r18)
    cmpw r3, r0
    bge lbl_fn_805B8DB8_00000660
lbl_fn_805B8DB8_0000065C:
    addi r18, r22, 0x244
lbl_fn_805B8DB8_00000660:
    cmpwi r5, 0x4
    bne lbl_fn_805B8DB8_000006C8
    cmpwi r6, 0x3
    bne lbl_fn_805B8DB8_000006C8
    lfs f3, lbl_80888438
    addi r3, r1, 0x20
    lfs f2, lbl_808883E4
    lfs f1, lbl_8088843C
    stfs f3, 0x20(r1)
    stfs f2, 0x24(r1)
    stfs f1, 0x28(r1)
    lfs f0, 0x168(r22)
    fsubs f0, f3, f0
    stfs f0, 0x20(r1)
    lfs f0, 0x16c(r22)
    fsubs f0, f2, f0
    stfs f0, 0x24(r1)
    lfs f0, 0x170(r22)
    fsubs f0, f1, f0
    stfs f2, 0x24(r1)
    stfs f0, 0x28(r1)
    bl fn_805F9920
    lfs f0, lbl_80888440
    fcmpo cr0, f1, f0
    bge lbl_fn_805B8DB8_000006C8
    addi r18, r22, 0x244
lbl_fn_805B8DB8_000006C8:
    addi r0, r22, 0x244
    cmplw r18, r0
    beq lbl_fn_805B8DB8_0000087C
    li r0, 0x3
    mr r3, r27
    addi r6, r18, 0x10
    li r5, 0x0
    mtctr r0
lbl_fn_805B8DB8_000006E8:
    lwz r4, 0xc(r3)
    cmpwi r4, 0x0
    beq lbl_fn_805B8DB8_00000710
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_805B8DB8_00000710
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
lbl_fn_805B8DB8_00000710:
    lwz r4, 0x20(r3)
    cmpwi r4, 0x0
    beq lbl_fn_805B8DB8_00000738
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_805B8DB8_00000738
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
lbl_fn_805B8DB8_00000738:
    lwz r4, 0x34(r3)
    cmpwi r4, 0x0
    beq lbl_fn_805B8DB8_00000760
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_805B8DB8_00000760
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
lbl_fn_805B8DB8_00000760:
    addi r3, r3, 0x3c
    addi r5, r5, 0x2
    bdnz lbl_fn_805B8DB8_000006E8
    li r7, 0x0
    li r0, 0x3
lbl_fn_805B8DB8_00000774:
    lwz r5, 0x0(r6)
    cmpwi r5, 0x0
    blt lbl_fn_805B8DB8_00000868
    lwz r3, 0x138(r22)
    mr r4, r27
    li r10, 0x0
    divw r8, r5, r3
    mullw r3, r8, r3
    subf r9, r3, r5
    mtctr r0
lbl_fn_805B8DB8_0000079C:
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_805B8DB8_000007DC
    lwz r3, 0x8(r4)
    cmpw r3, r8
    bne lbl_fn_805B8DB8_000007DC
    lwz r3, 0x4(r4)
    cmpw r3, r9
    bne lbl_fn_805B8DB8_000007DC
    lwz r5, 0xc(r4)
    cmpwi r5, 0x0
    beq lbl_fn_805B8DB8_000007DC
    lwz r3, 0x38(r5)
    rlwinm r3, r3, 0, 30, 28
    stw r3, 0x38(r5)
    b lbl_fn_805B8DB8_00000868
lbl_fn_805B8DB8_000007DC:
    lwz r3, 0x14(r4)
    cmpwi r3, 0x0
    beq lbl_fn_805B8DB8_0000081C
    lwz r3, 0x1c(r4)
    cmpw r3, r8
    bne lbl_fn_805B8DB8_0000081C
    lwz r3, 0x18(r4)
    cmpw r3, r9
    bne lbl_fn_805B8DB8_0000081C
    lwz r5, 0x20(r4)
    cmpwi r5, 0x0
    beq lbl_fn_805B8DB8_0000081C
    lwz r3, 0x38(r5)
    rlwinm r3, r3, 0, 30, 28
    stw r3, 0x38(r5)
    b lbl_fn_805B8DB8_00000868
lbl_fn_805B8DB8_0000081C:
    lwz r3, 0x28(r4)
    cmpwi r3, 0x0
    beq lbl_fn_805B8DB8_0000085C
    lwz r3, 0x30(r4)
    cmpw r3, r8
    bne lbl_fn_805B8DB8_0000085C
    lwz r3, 0x2c(r4)
    cmpw r3, r9
    bne lbl_fn_805B8DB8_0000085C
    lwz r5, 0x34(r4)
    cmpwi r5, 0x0
    beq lbl_fn_805B8DB8_0000085C
    lwz r3, 0x38(r5)
    rlwinm r3, r3, 0, 30, 28
    stw r3, 0x38(r5)
    b lbl_fn_805B8DB8_00000868
lbl_fn_805B8DB8_0000085C:
    addi r4, r4, 0x3c
    addi r10, r10, 0x2
    bdnz lbl_fn_805B8DB8_0000079C
lbl_fn_805B8DB8_00000868:
    addi r7, r7, 0x1
    addi r6, r6, 0x4
    cmpwi r7, 0x9
    blt lbl_fn_805B8DB8_00000774
    b lbl_fn_805B8DB8_000008DC
lbl_fn_805B8DB8_0000087C:
    li r0, 0x3
    li r4, 0x0
    mtctr r0
lbl_fn_805B8DB8_00000888:
    lwz r3, 0xc(r27)
    cmpwi r3, 0x0
    beq lbl_fn_805B8DB8_000008A0
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
lbl_fn_805B8DB8_000008A0:
    lwz r3, 0x20(r27)
    cmpwi r3, 0x0
    beq lbl_fn_805B8DB8_000008B8
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
lbl_fn_805B8DB8_000008B8:
    lwz r3, 0x34(r27)
    cmpwi r3, 0x0
    beq lbl_fn_805B8DB8_000008D0
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
lbl_fn_805B8DB8_000008D0:
    addi r27, r27, 0x3c
    addi r4, r4, 0x2
    bdnz lbl_fn_805B8DB8_00000888
lbl_fn_805B8DB8_000008DC:
    addi r11, r1, 0x4a0
    bl _restgpr_18
    lwz r0, 0x4a4(r1)
    mtlr r0
    addi r1, r1, 0x4a0
    blr
}

asm void fn_805B96AC(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    lfs f0, lbl_808883F0
    lfs f2, 0x134(r3)
    lfs f1, 0x0(r4)
    fdivs f6, f0, f2
    lfs f0, 0x140(r3)
    lfs f5, 0x8(r4)
    lfs f4, 0x148(r3)
    lfs f3, 0x4(r4)
    lfs f2, 0x144(r3)
    fsubs f0, f1, f0
    lwz r0, lbl_8087E6F8
    fsubs f1, f3, f2
    lwz r4, lbl_8087E6F8
    fsubs f5, f5, f4
    stfs f0, 0x8(r1)
    fmuls f2, f0, f6
    stfs f1, 0xc(r1)
    fmuls f4, f5, f6
    fmuls f3, f1, f6
    stfs f5, 0x10(r1)
    fctiwz f1, f2
    fctiwz f0, f4
    stfs f2, 0x14(r1)
    stfd f1, 0x20(r1)
    lwz r5, 0x24(r1)
    stfd f0, 0x28(r1)
    cmpw r5, r0
    stfs f3, 0x18(r1)
    lwz r6, 0x2c(r1)
    stfs f4, 0x1c(r1)
    bge lbl_fn_805B96AC_00000978
    b lbl_fn_805B96AC_0000098C
lbl_fn_805B96AC_00000978:
    lwz r0, 0x138(r3)
    cmpw r5, r0
    ble lbl_fn_805B96AC_00000988
    mr r5, r0
lbl_fn_805B96AC_00000988:
    mr r4, r5
lbl_fn_805B96AC_0000098C:
    lwz r0, lbl_8087E6FC
    lwz r5, lbl_8087E6FC
    cmpw r6, r0
    bge lbl_fn_805B96AC_000009A0
    b lbl_fn_805B96AC_000009B4
lbl_fn_805B96AC_000009A0:
    lwz r0, 0x13c(r3)
    cmpw r6, r0
    ble lbl_fn_805B96AC_000009B0
    mr r6, r0
lbl_fn_805B96AC_000009B0:
    mr r5, r6
lbl_fn_805B96AC_000009B4:
    cmpwi r4, 0x2
    bne lbl_fn_805B96AC_000009CC
    cmpwi r5, 0x0
    bne lbl_fn_805B96AC_000009CC
    li r3, 0x1
    b lbl_fn_805B96AC_00000A7C
lbl_fn_805B96AC_000009CC:
    li r0, 0x3
    addi r3, r3, 0x17c
    li r7, 0x0
    mtctr r0
lbl_fn_805B96AC_000009DC:
    lwz r6, 0xc(r3)
    cmpwi r6, 0x0
    beq lbl_fn_805B96AC_00000A0C
    lwz r0, 0x4(r3)
    cmpw r0, r4
    bne lbl_fn_805B96AC_00000A0C
    lwz r0, 0x8(r3)
    cmpw r0, r5
    bne lbl_fn_805B96AC_00000A0C
    lwz r0, 0x38(r6)
    extrwi r3, r0, 1, 30
    b lbl_fn_805B96AC_00000A7C
lbl_fn_805B96AC_00000A0C:
    lwz r6, 0x20(r3)
    cmpwi r6, 0x0
    beq lbl_fn_805B96AC_00000A3C
    lwz r0, 0x18(r3)
    cmpw r0, r4
    bne lbl_fn_805B96AC_00000A3C
    lwz r0, 0x1c(r3)
    cmpw r0, r5
    bne lbl_fn_805B96AC_00000A3C
    lwz r0, 0x38(r6)
    extrwi r3, r0, 1, 30
    b lbl_fn_805B96AC_00000A7C
lbl_fn_805B96AC_00000A3C:
    lwz r6, 0x34(r3)
    cmpwi r6, 0x0
    beq lbl_fn_805B96AC_00000A6C
    lwz r0, 0x2c(r3)
    cmpw r0, r4
    bne lbl_fn_805B96AC_00000A6C
    lwz r0, 0x30(r3)
    cmpw r0, r5
    bne lbl_fn_805B96AC_00000A6C
    lwz r0, 0x38(r6)
    extrwi r3, r0, 1, 30
    b lbl_fn_805B96AC_00000A7C
lbl_fn_805B96AC_00000A6C:
    addi r3, r3, 0x3c
    addi r7, r7, 0x2
    bdnz lbl_fn_805B96AC_000009DC
    li r3, 0x0
lbl_fn_805B96AC_00000A7C:
    addi r1, r1, 0x30
    blr
}

asm void fn_805B983C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r26, 0x18(r1)
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r30, r6
    mr r31, r7
    lwz r8, 0x0(r3)
    addis r0, r8, 0x1
    cmplwi r0, 0xffff
    bne lbl_fn_805B983C_00000ADC
    lis r4, lbl_80763DFC@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80763DFC@l
    addi r3, r3, __files@l
    addi r4, r4, 0x69
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805B983C_00000ADC:
    li r3, 0x34
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r26, r3
    bne lbl_fn_805B983C_00000B10
    lis r3, __files@ha
    lis r4, lbl_80797908@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80797908@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805B983C_00000B10:
    addic. r3, r26, 0xc
    addi r0, r27, 0x4
    stw r0, 0x8(r1)
    stw r26, 0xc(r1)
    beq lbl_fn_805B983C_00000B74
    lwz r0, 0x0(r31)
    stw r0, 0x0(r3)
    lwz r0, 0x4(r31)
    stw r0, 0x4(r3)
    lwz r0, 0x8(r31)
    stw r0, 0x8(r3)
    lwz r0, 0xc(r31)
    stw r0, 0xc(r3)
    lwz r0, 0x10(r31)
    stw r0, 0x10(r3)
    lwz r0, 0x14(r31)
    stw r0, 0x14(r3)
    lwz r0, 0x18(r31)
    stw r0, 0x18(r3)
    lwz r0, 0x1c(r31)
    stw r0, 0x1c(r3)
    lwz r0, 0x20(r31)
    stw r0, 0x20(r3)
    lwz r0, 0x24(r31)
    stw r0, 0x24(r3)
lbl_fn_805B983C_00000B74:
    lwz r26, 0xc(r1)
    li r0, 0x0
    stw r0, 0x4(r26)
    addic. r3, r26, 0x8
    stw r0, 0xc(r1)
    stw r0, 0x0(r26)
    beq lbl_fn_805B983C_00000B94
    stw r28, 0x0(r3)
lbl_fn_805B983C_00000B94:
    cmpwi r29, 0x0
    beq lbl_fn_805B983C_00000BA4
    stw r26, 0x0(r28)
    b lbl_fn_805B983C_00000BA8
lbl_fn_805B983C_00000BA4:
    stw r26, 0x4(r28)
lbl_fn_805B983C_00000BA8:
    lwz r5, 0x0(r27)
    mr r3, r26
    lwz r4, 0x4(r27)
    addi r0, r5, 0x1
    stw r0, 0x0(r27)
    bl fn_8003E120
    cmpwi r30, 0x0
    beq lbl_fn_805B983C_00000BCC
    stw r26, 0xc(r27)
lbl_fn_805B983C_00000BCC:
    lwz r3, 0xc(r1)
    cmpwi r3, 0x0
    beq lbl_fn_805B983C_00000BDC
    bl dtor_80084684
lbl_fn_805B983C_00000BDC:
    mr r3, r26
    lmw r26, 0x18(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_805B99AC(void)
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
    lwz r31, 0x0(r4)
    cmpwi r31, 0x0
    beq lbl_fn_805B99AC_00000CA0
    lwz r30, 0x0(r31)
    cmpwi r30, 0x0
    beq lbl_fn_805B99AC_00000C5C
    lwz r4, 0x0(r30)
    cmpwi r4, 0x0
    beq lbl_fn_805B99AC_00000C40
    bl fn_805B99AC
lbl_fn_805B99AC_00000C40:
    lwz r4, 0x4(r30)
    cmpwi r4, 0x0
    beq lbl_fn_805B99AC_00000C54
    mr r3, r28
    bl fn_805B99AC
lbl_fn_805B99AC_00000C54:
    mr r3, r30
    bl dtor_80084684
lbl_fn_805B99AC_00000C5C:
    lwz r30, 0x4(r31)
    cmpwi r30, 0x0
    beq lbl_fn_805B99AC_00000C98
    lwz r4, 0x0(r30)
    cmpwi r4, 0x0
    beq lbl_fn_805B99AC_00000C7C
    mr r3, r28
    bl fn_805B99AC
lbl_fn_805B99AC_00000C7C:
    lwz r4, 0x4(r30)
    cmpwi r4, 0x0
    beq lbl_fn_805B99AC_00000C90
    mr r3, r28
    bl fn_805B99AC
lbl_fn_805B99AC_00000C90:
    mr r3, r30
    bl dtor_80084684
lbl_fn_805B99AC_00000C98:
    mr r3, r31
    bl dtor_80084684
lbl_fn_805B99AC_00000CA0:
    lwz r30, 0x4(r29)
    cmpwi r30, 0x0
    beq lbl_fn_805B99AC_00000D2C
    lwz r31, 0x0(r30)
    cmpwi r31, 0x0
    beq lbl_fn_805B99AC_00000CE8
    lwz r4, 0x0(r31)
    cmpwi r4, 0x0
    beq lbl_fn_805B99AC_00000CCC
    mr r3, r28
    bl fn_805B99AC
lbl_fn_805B99AC_00000CCC:
    lwz r4, 0x4(r31)
    cmpwi r4, 0x0
    beq lbl_fn_805B99AC_00000CE0
    mr r3, r28
    bl fn_805B99AC
lbl_fn_805B99AC_00000CE0:
    mr r3, r31
    bl dtor_80084684
lbl_fn_805B99AC_00000CE8:
    lwz r31, 0x4(r30)
    cmpwi r31, 0x0
    beq lbl_fn_805B99AC_00000D24
    lwz r4, 0x0(r31)
    cmpwi r4, 0x0
    beq lbl_fn_805B99AC_00000D08
    mr r3, r28
    bl fn_805B99AC
lbl_fn_805B99AC_00000D08:
    lwz r4, 0x4(r31)
    cmpwi r4, 0x0
    beq lbl_fn_805B99AC_00000D1C
    mr r3, r28
    bl fn_805B99AC
lbl_fn_805B99AC_00000D1C:
    mr r3, r31
    bl dtor_80084684
lbl_fn_805B99AC_00000D24:
    mr r3, r30
    bl dtor_80084684
lbl_fn_805B99AC_00000D2C:
    mr r3, r29
    bl dtor_80084684
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805B9B0C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r30, r6
    beq lbl_fn_805B9B0C_00000DD8
    lis r5, lbl_80763EC8@ha
    li r3, 0x160
    addi r5, r5, lbl_80763EC8@l
    li r4, 0x1
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_805B9B0C_00000DD0
    mr r4, r27
    bl fn_800D1D3C
    lis r3, lbl_80797928@ha
    li r0, 0x0
    addi r3, r3, lbl_80797928@l
    stw r3, 0x0(r31)
    stw r0, 0x48(r31)
    stw r28, 0x14c(r31)
    stw r29, 0x150(r31)
    stw r0, 0x154(r31)
    stw r30, 0x158(r31)
lbl_fn_805B9B0C_00000DD0:
    mr r3, r31
    b lbl_fn_805B9B0C_00000DDC
lbl_fn_805B9B0C_00000DD8:
    li r3, 0x0
lbl_fn_805B9B0C_00000DDC:
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805B9BA8(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    stw r28, 0x20(r1)
    lwz r0, 0x154(r3)
    cmpwi r0, 0x2
    bge lbl_fn_805B9BA8_00000F08
    cmpwi r0, 0x1
    blt lbl_fn_805B9BA8_00000ED8
    lwz r3, lbl_8087F430
    lwz r29, 0x10d8(r3)
    lwz r0, 0x48(r29)
    cmpwi r0, 0x0
    ble lbl_fn_805B9BA8_00000ED8
    li r28, 0x0
    li r30, 0x0
    b lbl_fn_805B9BA8_00000ECC
lbl_fn_805B9BA8_00000E44:
    mr r4, r29
    mr r5, r28
    addi r3, r1, 0x10
    bl fn_803CC754
    stw r30, 0xc(r1)
    addi r4, r1, 0x10
    lwz r3, lbl_8087FA20
    addi r5, r1, 0xc
    stw r30, 0x8(r1)
    addi r6, r1, 0x8
    bl fn_805B8114
    lwz r3, 0xc(r1)
    lwz r0, 0x14c(r31)
    cmpw r3, r0
    bne lbl_fn_805B9BA8_00000EC8
    lwz r3, 0x8(r1)
    lwz r0, 0x150(r31)
    cmpw r3, r0
    bne lbl_fn_805B9BA8_00000EC8
    mr r3, r29
    mr r4, r28
    bl fn_803C0634
    cmpwi r3, 0x0
    beq lbl_fn_805B9BA8_00000EC8
    lwz r0, 0x48(r31)
    slwi r0, r0, 2
    add r0, r31, r0
    addic. r4, r0, 0x4c
    beq lbl_fn_805B9BA8_00000EBC
    stw r3, 0x0(r4)
lbl_fn_805B9BA8_00000EBC:
    lwz r3, 0x48(r31)
    addi r0, r3, 0x1
    stw r0, 0x48(r31)
lbl_fn_805B9BA8_00000EC8:
    addi r28, r28, 0x1
lbl_fn_805B9BA8_00000ECC:
    lwz r0, 0x80(r29)
    cmplw r28, r0
    blt lbl_fn_805B9BA8_00000E44
lbl_fn_805B9BA8_00000ED8:
    lwz r3, 0x158(r31)
    cmpwi r3, 0x0
    beq lbl_fn_805B9BA8_00000EF4
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_805B9BA8_00000F00
lbl_fn_805B9BA8_00000EF4:
    lwz r3, 0x154(r31)
    addi r0, r3, 0x1
    stw r0, 0x154(r31)
lbl_fn_805B9BA8_00000F00:
    li r3, 0x0
    b lbl_fn_805B9BA8_00000F84
lbl_fn_805B9BA8_00000F08:
    lwz r0, 0x48(r3)
    mr r4, r31
    li r28, 0x1
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_805B9BA8_00000F40
lbl_fn_805B9BA8_00000F20:
    lwz r3, 0x4c(r4)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_805B9BA8_00000F38
    li r28, 0x0
lbl_fn_805B9BA8_00000F38:
    addi r4, r4, 0x4
    bdnz lbl_fn_805B9BA8_00000F20
lbl_fn_805B9BA8_00000F40:
    cmpwi r28, 0x0
    beq lbl_fn_805B9BA8_00000F80
    mr r29, r31
    li r30, 0x0
    b lbl_fn_805B9BA8_00000F74
lbl_fn_805B9BA8_00000F54:
    lwz r3, 0x4c(r29)
    li r4, 0x2
    bl fn_8016E970
    lwz r3, 0x4c(r29)
    li r4, 0x0
    bl fn_800D246C
    addi r29, r29, 0x4
    addi r30, r30, 0x1
lbl_fn_805B9BA8_00000F74:
    lwz r0, 0x48(r31)
    cmplw r30, r0
    blt lbl_fn_805B9BA8_00000F54
lbl_fn_805B9BA8_00000F80:
    mr r3, r28
lbl_fn_805B9BA8_00000F84:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_805B9D5C(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x30
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    bl _savegpr_25
    lwz r4, lbl_8087F430
    li r26, 0x0
    lis r29, lbl_807C7030@ha
    lfs f31, lbl_80888448
    lwz r27, 0x10d8(r4)
    mr r25, r3
    mr r30, r26
    addi r29, r29, lbl_807C7030@l
    li r31, 0x0
    b lbl_fn_805B9D5C_00001088
lbl_fn_805B9D5C_00000FE8:
    add r28, r25, r31
    mr r3, r27
    lwz r4, 0x4c(r28)
    bl fn_803CC774
    lwz r4, 0x4c(r28)
    lwz r3, 0x134(r27)
    lwz r4, 0x58(r4)
    bl fn_803957F0
    lwz r4, 0x4c(r28)
    mr r3, r27
    li r5, 0x0
    bl fn_803CC718
    lwz r3, lbl_8087F498
    cmpwi r3, 0x0
    beq lbl_fn_805B9D5C_0000102C
    lwz r4, 0x4c(r28)
    bl fn_803EAC3C
lbl_fn_805B9D5C_0000102C:
    lwz r4, lbl_8087F490
    cmpwi r4, 0x0
    beq lbl_fn_805B9D5C_00001074
    lwz r3, 0xd50(r4)
    lwz r0, 0x4c(r28)
    cmplw r3, r0
    bne lbl_fn_805B9D5C_00001074
    stw r30, 0xd40(r4)
    addi r3, r4, 0xd44
    stw r30, 0xd50(r4)
    lfs f2, 0x8(r29)
    psq_l f1, 0x0(r29), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0xd4c(r4)
    stw r30, 0xd54(r4)
    stw r30, 0xd58(r4)
    stfs f31, 0xd5c(r4)
    stw r30, 0xd3c(r4)
lbl_fn_805B9D5C_00001074:
    add r3, r25, r31
    lwz r3, 0x4c(r3)
    bl fn_800D2338
    addi r26, r26, 0x1
    addi r31, r31, 0x4
lbl_fn_805B9D5C_00001088:
    lwz r0, 0x48(r25)
    cmplw r26, r0
    blt lbl_fn_805B9D5C_00000FE8
    mr r3, r25
    bl fn_800D2338
    addi r11, r1, 0x30
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    bl _restgpr_25
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_805B9E74(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_fn_805B9E74_000010F8
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r31, 0x0
    ble lbl_fn_805B9E74_000010F8
    mr r3, r30
    bl dtor_80084684
lbl_fn_805B9E74_000010F8:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805B9ECC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_fn_805B9ECC_00001180
    lwz r3, 0x3c(r3)
    cmpwi r3, 0x0
    beq lbl_fn_805B9ECC_0000115C
    beq lbl_fn_805B9ECC_0000115C
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_805B9ECC_0000115C:
    addic. r3, r30, 0x8
    beq lbl_fn_805B9ECC_00001170
    beq lbl_fn_805B9ECC_00001170
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_805B9ECC_00001170:
    cmpwi r31, 0x0
    ble lbl_fn_805B9ECC_00001180
    mr r3, r30
    bl dtor_80084684
lbl_fn_805B9ECC_00001180:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805B9F54(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r6, lbl_80763F38@ha
    li r7, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    addi r5, r6, lbl_80763F38@l
    stw r30, 0x18(r1)
    mr r30, r4
    mr r6, r5
    li r4, 0x4
    stw r29, 0x14(r1)
    mr r29, r3
    li r3, 0x5c8
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_805B9F54_000011F4
    mr r4, r29
    mr r5, r30
    mr r6, r31
    bl fn_805B9FC8
lbl_fn_805B9F54_000011F4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805B9FC8(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    stw r31, 0x11c(r1)
    stw r30, 0x118(r1)
    mr r30, r5
    stw r29, 0x114(r1)
    mr r29, r6
    stw r28, 0x110(r1)
    mr r28, r3
    bl fn_800D1D3C
    lis r4, lbl_807979B0@ha
    stw r30, 0x48(r28)
    addi r4, r4, lbl_807979B0@l
    mr r3, r30
    stw r4, 0x0(r28)
    bl fn_8021F09C
    lfs f0, lbl_80888454
    li r30, 0x0
    stw r3, 0x4c(r28)
    addi r3, r28, 0x8c
    li r4, 0x0
    li r5, 0x0
    stw r29, 0x50(r28)
    stfs f0, 0x84(r28)
    stw r30, 0x88(r28)
    bl fn_8004B290
    addi r3, r28, 0x280
    li r4, 0x0
    li r5, 0x0
    bl fn_8004B290
    lis r4, fn_805BA11C@ha
    lis r5, fn_805B9ECC@ha
    addi r3, r28, 0x474
    li r6, 0x4c
    addi r4, r4, fn_805BA11C@l
    addi r5, r5, fn_805B9ECC@l
    li r7, 0x4
    bl fn_806958E0
    addi r29, r28, 0x5a4
    mr r3, r29
    bl fn_80473E74
    lwz r5, 0x4c(r28)
    lis r3, lbl_8078FBB0@ha
    lis r4, lbl_80763F38@ha
    li r31, 0x1
    addi r3, r3, lbl_8078FBB0@l
    stw r3, 0x0(r29)
    addi r4, r4, lbl_80763F38@l
    addi r5, r5, 0x8
    stw r31, 0x5ac(r28)
    addi r3, r1, 0x8
    addi r4, r4, 0x1
    stw r30, 0x5b0(r28)
    stw r30, 0x5b4(r28)
    stw r30, 0x5b8(r28)
    stw r30, 0x5bc(r28)
    stw r30, 0x5c0(r28)
    crclr 6
    bl sprintf
    lwz r12, 0x0(r29)
    mr r3, r29
    addi r4, r1, 0x8
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lwz r3, 0x50(r28)
    cmpwi r3, 0x0
    beq lbl_fn_805B9FC8_00001340
    stw r31, 0x3fc(r3)
    lfs f1, lbl_80888458
    lwz r3, 0x50(r28)
    lfs f0, lbl_80888454
    stfs f1, 0x2fc(r3)
    lwz r3, 0x50(r28)
    stfs f0, 0x2e8(r3)
lbl_fn_805B9FC8_00001340:
    lwz r31, 0x11c(r1)
    mr r3, r28
    lwz r30, 0x118(r1)
    lwz r29, 0x114(r1)
    lwz r28, 0x110(r1)
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_805BA11C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    stw r31, 0x0(r3)
    stw r31, 0x4(r3)
    addi r3, r3, 0x8
    bl fn_800A03A0
    stw r31, 0x3c(r30)
    mr r3, r30
    stw r31, 0x40(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805BA16C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x20
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    bl _savegpr_26
    lwz r0, 0x5ac(r3)
    mr r29, r3
    cmpwi r0, 0x0
    beq lbl_fn_805BA16C_0000140C
    addi r3, r3, 0x5a4
    bl fn_80473F50
    cmpwi r3, 0x0
    bne lbl_fn_805BA16C_00001570
    li r0, 0x0
    stw r0, 0x5ac(r29)
    mr r3, r29
    bl fn_805BB658
    addi r3, r29, 0x5a4
    bl fn_80473F88
    b lbl_fn_805BA16C_00001570
lbl_fn_805BA16C_0000140C:
    addi r26, r3, 0x474
    li r27, 0x0
    li r28, 0x0
lbl_fn_805BA16C_00001418:
    lwz r0, 0x0(r26)
    cmpwi r0, 0x0
    beq lbl_fn_805BA16C_00001438
    addi r3, r26, 0x8
    bl fn_800A0448
    cmpwi r3, 0x0
    beq lbl_fn_805BA16C_00001438
    li r27, 0x1
lbl_fn_805BA16C_00001438:
    addi r28, r28, 0x1
    addi r26, r26, 0x4c
    cmplwi r28, 0x4
    blt lbl_fn_805BA16C_00001418
    cmpwi r27, 0x0
    bne lbl_fn_805BA16C_00001570
    mr r3, r29
    bl fn_800D3FA4
    cmpwi r3, 0x0
    beq lbl_fn_805BA16C_00001570
    lis r28, lbl_80763F38@ha
    lfs f31, lbl_80888454
    addi r31, r29, 0x474
    li r30, 0x0
    addi r28, r28, lbl_80763F38@l
lbl_fn_805BA16C_00001474:
    lwz r0, 0x0(r31)
    cmpwi r0, 0x0
    beq lbl_fn_805BA16C_00001558
    lwz r3, 0x4(r31)
    li r4, 0x0
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x4(r31)
    bl fn_800D246C
    lwz r5, 0x4c(r29)
    addi r4, r28, 0x16
    lwz r3, 0x4(r31)
    addi r5, r5, 0xac
    bl fn_801F4C14
    lwz r0, 0x3c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_805BA16C_0000151C
    lwz r4, 0x44(r31)
    li r3, 0x0
    bl fn_80116FC0
    lwz r4, 0x4(r31)
    mr r27, r3
    addi r3, r28, 0x1e
    addi r26, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r26
    mr r5, r27
    bl fn_801FEE08
    lwz r4, 0x48(r31)
    li r3, 0x0
    bl fn_80116FC0
    lwz r4, 0x4(r31)
    mr r27, r3
    addi r3, r28, 0x2f
    addi r26, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r26
    mr r5, r27
    bl fn_801FEE08
lbl_fn_805BA16C_0000151C:
    lwz r3, 0x40(r31)
    cmpwi r3, 0x0
    beq lbl_fn_805BA16C_00001558
    lwz r0, 0x38(r3)
    li r4, 0x0
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x40(r31)
    bl fn_800D246C
    lwz r3, 0x40(r31)
    stfs f31, 0x104(r3)
    lwz r3, 0x40(r31)
    lwz r0, 0xfc(r3)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r3)
lbl_fn_805BA16C_00001558:
    addi r30, r30, 0x1
    addi r31, r31, 0x4c
    cmplwi r30, 0x4
    blt lbl_fn_805BA16C_00001474
    li r3, 0x1
    b lbl_fn_805BA16C_00001574
lbl_fn_805BA16C_00001570:
    li r3, 0x0
lbl_fn_805BA16C_00001574:
    addi r11, r1, 0x20
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_805BA34C(void)
{
    nofralloc
    mulli r0, r4, 0x4c
    add r3, r3, r0
    blr
}

asm void fn_805BA358(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stfd f31, 0x50(r1)
    psq_st f31, 0x58(r1), 0, 0
    stfd f30, 0x40(r1)
    psq_st f30, 0x48(r1), 0, 0
    stfd f29, 0x30(r1)
    psq_st f29, 0x38(r1), 0, 0
    stfd f28, 0x20(r1)
    psq_st f28, 0x28(r1), 0, 0
    lfs f28, lbl_80888454
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    addi r29, r3, 0x474
    stw r28, 0x10(r1)
    li r28, 0x0
lbl_fn_805BA358_000015F0:
    lwz r0, 0x0(r29)
    cmpwi r0, 0x0
    beq lbl_fn_805BA358_0000163C
    lwz r0, 0x10(r29)
    cmpwi r0, 0x0
    beq lbl_fn_805BA358_00001624
    lwz r3, 0x50(r30)
    cmpwi r3, 0x0
    beq lbl_fn_805BA358_00001624
    addi r3, r3, 0xb0
    addi r4, r28, 0xea
    addi r5, r29, 0x8
    bl fn_80097A9C
lbl_fn_805BA358_00001624:
    lwz r3, 0x4(r29)
    stfs f28, 0x100(r3)
    lwz r3, 0x4(r29)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_805BA358_0000163C:
    addi r28, r28, 0x1
    addi r29, r29, 0x4c
    cmplwi r28, 0x4
    blt lbl_fn_805BA358_000015F0
    psq_l f1, 0x8(r31), 0, 0
    li r4, 0x0
    lfs f2, 0x10(r31)
    psq_st f1, 0x94(r30), 0, 0
    psq_l f1, 0x14(r31), 0, 0
    stfs f2, 0x9c(r30)
    lfs f2, 0x1c(r31)
    psq_st f1, 0xa0(r30), 0, 0
    psq_l f1, 0x20(r31), 0, 0
    stfs f2, 0xa8(r30)
    lfs f2, 0x28(r31)
    psq_st f1, 0xac(r30), 0, 0
    psq_l f1, 0x2c(r31), 0, 0
    stfs f2, 0xb4(r30)
    lfs f2, 0x34(r31)
    psq_st f1, 0xb8(r30), 0, 0
    psq_l f1, 0x58(r31), 0, 0
    stfs f2, 0xc0(r30)
    psq_l f2, 0x60(r31), 0, 0
    psq_l f3, 0x68(r31), 0, 0
    psq_l f4, 0x70(r31), 0, 0
    psq_l f5, 0x78(r31), 0, 0
    psq_l f6, 0x80(r31), 0, 0
    psq_st f1, 0xe4(r30), 0, 0
    lwz r3, 0x0(r31)
    psq_st f2, 0xec(r30), 0, 0
    lwz r0, 0x4(r31)
    psq_st f3, 0xf4(r30), 0, 0
    lfs f31, 0x38(r31)
    psq_st f4, 0xfc(r30), 0, 0
    lfs f30, 0x3c(r31)
    psq_st f5, 0x104(r30), 0, 0
    lfs f29, 0x40(r31)
    psq_st f6, 0x10c(r30), 0, 0
    lfs f28, 0x44(r31)
    lfs f13, 0x48(r31)
    lfs f12, 0x4c(r31)
    lfs f11, 0x50(r31)
    lfs f10, 0x54(r31)
    psq_l f1, 0x88(r31), 0, 0
    psq_l f2, 0x90(r31), 0, 0
    psq_l f3, 0x98(r31), 0, 0
    psq_l f4, 0xa0(r31), 0, 0
    psq_l f5, 0xa8(r31), 0, 0
    psq_l f6, 0xb0(r31), 0, 0
    psq_l f7, 0xb8(r31), 0, 0
    psq_l f8, 0xc0(r31), 0, 0
    lfs f9, 0xc8(r31)
    lfs f0, 0xcc(r31)
    stw r4, 0x5b0(r30)
    stw r3, 0x8c(r30)
    stw r0, 0x90(r30)
    stfs f31, 0xc4(r30)
    stfs f30, 0xc8(r30)
    stfs f29, 0xcc(r30)
    stfs f28, 0xd0(r30)
    stfs f13, 0xd4(r30)
    stfs f12, 0xd8(r30)
    stfs f11, 0xdc(r30)
    stfs f10, 0xe0(r30)
    psq_st f1, 0x114(r30), 0, 0
    psq_st f2, 0x11c(r30), 0, 0
    psq_st f3, 0x124(r30), 0, 0
    psq_st f4, 0x12c(r30), 0, 0
    psq_st f5, 0x134(r30), 0, 0
    psq_st f6, 0x13c(r30), 0, 0
    psq_st f7, 0x144(r30), 0, 0
    psq_st f8, 0x14c(r30), 0, 0
    stfs f9, 0x154(r30)
    stfs f0, 0x158(r30)
    psq_l f1, 0xd0(r31), 0, 0
    addi r4, r30, 0x220
    psq_l f2, 0xd8(r31), 0, 0
    addi r5, r31, 0x194
    psq_st f1, 0x15c(r30), 0, 0
    addi r0, r30, 0x280
    psq_l f1, 0x100(r31), 0, 0
    psq_st f2, 0x164(r30), 0, 0
    psq_l f2, 0x108(r31), 0, 0
    psq_st f1, 0x18c(r30), 0, 0
    psq_l f1, 0x13c(r31), 0, 0
    psq_st f2, 0x194(r30), 0, 0
    lfs f2, 0x144(r31)
    psq_st f1, 0x1c8(r30), 0, 0
    psq_l f1, 0x14c(r31), 0, 0
    stfs f2, 0x1d0(r30)
    lfs f2, 0x154(r31)
    psq_st f1, 0x1d8(r30), 0, 0
    psq_l f1, 0x15c(r31), 0, 0
    stfs f2, 0x1e0(r30)
    lfs f2, 0x164(r31)
    psq_st f1, 0x1e8(r30), 0, 0
    psq_l f1, 0x16c(r31), 0, 0
    stfs f2, 0x1f0(r30)
    lfs f2, 0x174(r31)
    psq_st f1, 0x1f8(r30), 0, 0
    psq_l f3, 0xe0(r31), 0, 0
    stfs f2, 0x200(r30)
    psq_l f4, 0xe8(r31), 0, 0
    psq_l f5, 0xf0(r31), 0, 0
    psq_l f6, 0xf8(r31), 0, 0
    psq_l f1, 0x17c(r31), 0, 0
    lfs f2, 0x184(r31)
    psq_st f3, 0x16c(r30), 0, 0
    psq_l f3, 0x110(r31), 0, 0
    psq_st f4, 0x174(r30), 0, 0
    psq_l f4, 0x118(r31), 0, 0
    psq_st f5, 0x17c(r30), 0, 0
    psq_l f5, 0x120(r31), 0, 0
    psq_st f6, 0x184(r30), 0, 0
    psq_l f6, 0x128(r31), 0, 0
    psq_st f1, 0x208(r30), 0, 0
    lwz r3, 0x130(r31)
    stfs f2, 0x210(r30)
    lfs f13, 0x134(r31)
    lfs f12, 0x138(r31)
    lfs f11, 0x148(r31)
    lfs f10, 0x158(r31)
    lfs f9, 0x168(r31)
    lfs f0, 0x178(r31)
    psq_l f1, 0x188(r31), 0, 0
    lfs f2, 0x190(r31)
    psq_st f3, 0x19c(r30), 0, 0
    psq_st f4, 0x1a4(r30), 0, 0
    psq_st f5, 0x1ac(r30), 0, 0
    psq_st f6, 0x1b4(r30), 0, 0
    stw r3, 0x1bc(r30)
    stfs f13, 0x1c0(r30)
    stfs f12, 0x1c4(r30)
    stfs f11, 0x1d4(r30)
    stfs f10, 0x1e4(r30)
    stfs f9, 0x1f4(r30)
    stfs f0, 0x204(r30)
    psq_st f1, 0x214(r30), 0, 0
    stfs f2, 0x21c(r30)
lbl_fn_805BA358_00001868:
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r5)
    stfs f2, 0x8(r4)
    lfs f0, 0xc(r5)
    addi r5, r5, 0x10
    stfs f0, 0xc(r4)
    addi r4, r4, 0x10
    cmplw r4, r0
    blt lbl_fn_805BA358_00001868
    psq_l f1, 0x94(r30), 0, 0
    lfs f2, 0x9c(r30)
    psq_st f1, 0x288(r30), 0, 0
    psq_l f1, 0xa0(r30), 0, 0
    stfs f2, 0x290(r30)
    lfs f2, 0xa8(r30)
    psq_st f1, 0x294(r30), 0, 0
    psq_l f1, 0xac(r30), 0, 0
    stfs f2, 0x29c(r30)
    lfs f2, 0xb4(r30)
    psq_st f1, 0x2a0(r30), 0, 0
    psq_l f1, 0xb8(r30), 0, 0
    stfs f2, 0x2a8(r30)
    lfs f2, 0xc0(r30)
    psq_st f1, 0x2ac(r30), 0, 0
    psq_l f1, 0xe4(r30), 0, 0
    stfs f2, 0x2b4(r30)
    psq_l f2, 0xec(r30), 0, 0
    psq_l f3, 0xf4(r30), 0, 0
    psq_l f4, 0xfc(r30), 0, 0
    psq_l f5, 0x104(r30), 0, 0
    psq_l f6, 0x10c(r30), 0, 0
    psq_st f1, 0x2d8(r30), 0, 0
    lwz r3, 0x8c(r30)
    psq_st f2, 0x2e0(r30), 0, 0
    lwz r0, 0x90(r30)
    psq_st f3, 0x2e8(r30), 0, 0
    lfs f28, 0xc4(r30)
    psq_st f4, 0x2f0(r30), 0, 0
    lfs f29, 0xc8(r30)
    psq_st f5, 0x2f8(r30), 0, 0
    lfs f30, 0xcc(r30)
    psq_st f6, 0x300(r30), 0, 0
    lfs f31, 0xd0(r30)
    lfs f13, 0xd4(r30)
    lfs f12, 0xd8(r30)
    lfs f11, 0xdc(r30)
    lfs f10, 0xe0(r30)
    psq_l f1, 0x114(r30), 0, 0
    psq_l f2, 0x11c(r30), 0, 0
    psq_l f3, 0x124(r30), 0, 0
    psq_l f4, 0x12c(r30), 0, 0
    psq_l f5, 0x134(r30), 0, 0
    psq_l f6, 0x13c(r30), 0, 0
    psq_l f7, 0x144(r30), 0, 0
    psq_l f8, 0x14c(r30), 0, 0
    lfs f9, 0x154(r30)
    lfs f0, 0x158(r30)
    stw r3, 0x280(r30)
    stw r0, 0x284(r30)
    stfs f28, 0x2b8(r30)
    stfs f29, 0x2bc(r30)
    stfs f30, 0x2c0(r30)
    stfs f31, 0x2c4(r30)
    stfs f13, 0x2c8(r30)
    stfs f12, 0x2cc(r30)
    stfs f11, 0x2d0(r30)
    stfs f10, 0x2d4(r30)
    psq_st f1, 0x308(r30), 0, 0
    psq_st f2, 0x310(r30), 0, 0
    psq_st f3, 0x318(r30), 0, 0
    psq_st f4, 0x320(r30), 0, 0
    psq_st f5, 0x328(r30), 0, 0
    psq_st f6, 0x330(r30), 0, 0
    psq_st f7, 0x338(r30), 0, 0
    psq_st f8, 0x340(r30), 0, 0
    stfs f9, 0x348(r30)
    stfs f0, 0x34c(r30)
    psq_l f1, 0x15c(r30), 0, 0
    addi r4, r30, 0x414
    psq_l f2, 0x164(r30), 0, 0
    addi r5, r30, 0x220
    psq_st f1, 0x350(r30), 0, 0
    addi r0, r30, 0x474
    psq_l f1, 0x18c(r30), 0, 0
    psq_st f2, 0x358(r30), 0, 0
    psq_l f2, 0x194(r30), 0, 0
    psq_st f1, 0x380(r30), 0, 0
    psq_l f1, 0x1c8(r30), 0, 0
    psq_st f2, 0x388(r30), 0, 0
    lfs f2, 0x1d0(r30)
    psq_st f1, 0x3bc(r30), 0, 0
    psq_l f1, 0x1d8(r30), 0, 0
    stfs f2, 0x3c4(r30)
    lfs f2, 0x1e0(r30)
    psq_st f1, 0x3cc(r30), 0, 0
    psq_l f1, 0x1e8(r30), 0, 0
    stfs f2, 0x3d4(r30)
    lfs f2, 0x1f0(r30)
    psq_st f1, 0x3dc(r30), 0, 0
    psq_l f1, 0x1f8(r30), 0, 0
    stfs f2, 0x3e4(r30)
    lfs f2, 0x200(r30)
    psq_st f1, 0x3ec(r30), 0, 0
    psq_l f3, 0x16c(r30), 0, 0
    stfs f2, 0x3f4(r30)
    psq_l f4, 0x174(r30), 0, 0
    psq_l f5, 0x17c(r30), 0, 0
    psq_l f6, 0x184(r30), 0, 0
    psq_l f1, 0x208(r30), 0, 0
    lfs f2, 0x210(r30)
    psq_st f3, 0x360(r30), 0, 0
    psq_l f3, 0x19c(r30), 0, 0
    psq_st f4, 0x368(r30), 0, 0
    psq_l f4, 0x1a4(r30), 0, 0
    psq_st f5, 0x370(r30), 0, 0
    psq_l f5, 0x1ac(r30), 0, 0
    psq_st f6, 0x378(r30), 0, 0
    psq_l f6, 0x1b4(r30), 0, 0
    psq_st f1, 0x3fc(r30), 0, 0
    lwz r3, 0x1bc(r30)
    stfs f2, 0x404(r30)
    lfs f13, 0x1c0(r30)
    lfs f12, 0x1c4(r30)
    lfs f11, 0x1d4(r30)
    lfs f10, 0x1e4(r30)
    lfs f9, 0x1f4(r30)
    lfs f0, 0x204(r30)
    psq_l f1, 0x214(r30), 0, 0
    lfs f2, 0x21c(r30)
    psq_st f3, 0x390(r30), 0, 0
    psq_st f4, 0x398(r30), 0, 0
    psq_st f5, 0x3a0(r30), 0, 0
    psq_st f6, 0x3a8(r30), 0, 0
    stw r3, 0x3b0(r30)
    stfs f13, 0x3b4(r30)
    stfs f12, 0x3b8(r30)
    stfs f11, 0x3c8(r30)
    stfs f10, 0x3d8(r30)
    stfs f9, 0x3e8(r30)
    stfs f0, 0x3f8(r30)
    psq_st f1, 0x408(r30), 0, 0
    stfs f2, 0x410(r30)
lbl_fn_805BA358_00001AA4:
    lfs f2, 0x8(r5)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x8(r4)
    lfs f0, 0xc(r5)
    addi r5, r5, 0x10
    stfs f0, 0xc(r4)
    addi r4, r4, 0x10
    cmplw r4, r0
    blt lbl_fn_805BA358_00001AA4
    lwz r3, 0x50(r30)
    cmpwi r3, 0x0
    beq lbl_fn_805BA358_00001AFC
    psq_l f1, 0x528(r3), 0, 0
    lfs f2, 0x530(r3)
    stfs f2, 0x5c(r30)
    psq_st f1, 0x54(r30), 0, 0
    psq_l f1, 0x534(r3), 0, 0
    lfs f2, 0x53c(r3)
    stfs f2, 0x68(r30)
    psq_st f1, 0x60(r30), 0, 0
    b lbl_fn_805BA358_00001B24
lbl_fn_805BA358_00001AFC:
    lis r3, lbl_807C7030@ha
    addi r3, r3, lbl_807C7030@l
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x8(r3)
    stfs f2, 0x5c(r30)
    psq_st f1, 0x54(r30), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x8(r3)
    stfs f2, 0x68(r30)
    psq_st f1, 0x60(r30), 0, 0
lbl_fn_805BA358_00001B24:
    mr r3, r30
    bl fn_805BA938
    lwz r0, 0x64(r1)
    psq_l f31, 0x58(r1), 0, 0
    lfd f31, 0x50(r1)
    psq_l f30, 0x48(r1), 0, 0
    lfd f30, 0x40(r1)
    psq_l f29, 0x38(r1), 0, 0
    lfd f29, 0x30(r1)
    psq_l f28, 0x28(r1), 0, 0
    lfd f28, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}
