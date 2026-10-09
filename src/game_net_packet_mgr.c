#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __register_global_object(void);
extern void _restfpr_28(void);
extern void _restgpr_25(void);
extern void _savefpr_28(void);
extern void _savegpr_25(void);
extern void dtor_80084684(void);
extern void fn_800827E0(void);
extern void fn_80083AD4(void);
extern void fn_80084320(void);
extern void fn_800A2664(void);
extern void fn_800A555C(void);
extern void fn_800CB3A0(void);
extern void fn_800D1D3C(void);
extern void fn_800D246C(void);
extern void fn_800DC6B4(void);
extern void fn_800DD3FC(void);
extern void fn_80117228(void);
extern void fn_801F3FF8(void);
extern void fn_801F4E8C(void);
extern void fn_80473E74(void);
extern void fn_804A29C4(void);
extern void fn_804A436C(void);
extern void fn_804A53D4(void);
extern void fn_804AF1BC(void);
extern void fn_804AF210(void);
extern void fn_804B9D44(void);
extern void fn_8050E414(void);
extern void fn_805F8430(void);
extern void fn_8068B770(void);
extern void fn_8068BC30(void);
extern void fn_8068BD60(void);
extern void fn_8068C240(void);
extern void fn_806958E0(void);
extern void fn_806B3C20(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 lbl_80757834[];
extern u8 lbl_80757A30[];
extern u8 lbl_80757B7C[];
extern u8 lbl_8078FBB0[];
extern u8 lbl_807908C0[];
extern u8 lbl_807908C8[];
extern u8 lbl_807908D0[];
extern u8 lbl_80790908[];
extern u8 lbl_80790A78[];
extern u8 lbl_80790AB0[];
extern u8 lbl_80790AF0[];
extern u8 lbl_80790B18[];
extern u8 lbl_80790B40[];
extern u8 lbl_807C8AD0[];
extern u8 lbl_807C8ADC[];

/* Small data declarations */
extern u32 lbl_8087E0F0;
extern u32 lbl_8087E0FC;
extern u32 lbl_8087EF70;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087F580;
extern u32 lbl_8087F590;
extern u32 lbl_8087F594;
extern u32 lbl_8087F59C;
extern u32 lbl_8087F5A0;
extern u32 lbl_8087F628;
extern u32 lbl_8087F62C;
extern u32 lbl_808872E4;
extern u32 lbl_808872F8;
extern u32 lbl_80887304;
extern u32 lbl_80887308;

/* Function declarations */
void fn_804AD738(void);
void fn_804AD8CC(void);
void fn_804ADB60(void);
void fn_804ADCAC(void);
void fn_804AE11C(void);
void fn_804AE124(void);
void fn_804AE264(void);
void fn_804AE2DC(void);
void fn_804AE3BC(void);
void fn_804AE3C4(void);
void fn_804AE3CC(void);
void fn_804AE4C4(void);
void fn_804AE568(void);
void fn_804AE7C4(void);
void fn_804AE820(void);
void fn_804AE888(void);

asm void fn_804AD738(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    lwz r0, 0x4c(r3)
    cmpwi r0, 0x1
    beq lbl_fn_804AD738_00000030
    cmpwi r0, 0x3
    beq lbl_fn_804AD738_00000054
    b lbl_fn_804AD738_0000017C
lbl_fn_804AD738_00000030:
    li r0, 0x2
    stw r0, 0x4c(r3)
    addi r3, r1, 0xc
    li r4, 0x1
    bl fn_80117228
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_804AD738_00000074
lbl_fn_804AD738_00000054:
    li r0, 0x5
    stw r0, 0x4c(r3)
    addi r3, r1, 0x8
    li r4, 0x2
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_804AD738_00000074:
    lwz r31, 0x54(r30)
    cmpwi r31, 0x0
    beq lbl_fn_804AD738_000000A0
    mr r3, r31
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_808872F8
    stfs f0, 0x104(r31)
    lwz r0, 0xfc(r31)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r31)
lbl_fn_804AD738_000000A0:
    lwz r31, 0x58(r30)
    cmpwi r31, 0x0
    beq lbl_fn_804AD738_000000CC
    mr r3, r31
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_808872F8
    stfs f0, 0x104(r31)
    lwz r0, 0xfc(r31)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r31)
lbl_fn_804AD738_000000CC:
    lwz r31, 0x5c(r30)
    cmpwi r31, 0x0
    beq lbl_fn_804AD738_000000F8
    mr r3, r31
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_808872F8
    stfs f0, 0x104(r31)
    lwz r0, 0xfc(r31)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r31)
lbl_fn_804AD738_000000F8:
    lwz r31, 0x60(r30)
    cmpwi r31, 0x0
    beq lbl_fn_804AD738_00000124
    mr r3, r31
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_808872F8
    stfs f0, 0x104(r31)
    lwz r0, 0xfc(r31)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r31)
lbl_fn_804AD738_00000124:
    lwz r31, 0x68(r30)
    cmpwi r31, 0x0
    beq lbl_fn_804AD738_00000150
    mr r3, r31
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_808872F8
    stfs f0, 0x104(r31)
    lwz r0, 0xfc(r31)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r31)
lbl_fn_804AD738_00000150:
    lwz r31, 0x64(r30)
    cmpwi r31, 0x0
    beq lbl_fn_804AD738_0000017C
    mr r3, r31
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_808872F8
    stfs f0, 0x104(r31)
    lwz r0, 0xfc(r31)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r31)
lbl_fn_804AD738_0000017C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804AD8CC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    lwz r0, 0x4c(r3)
    cmpwi r0, 0x1
    beq lbl_fn_804AD8CC_000001C8
    cmpwi r0, 0x3
    beq lbl_fn_804AD8CC_000001DC
    b lbl_fn_804AD8CC_0000040C
lbl_fn_804AD8CC_000001C8:
    lwz r4, 0x68(r3)
    lfs f0, lbl_80887304
    lfs f1, 0x100(r4)
    fcmpo cr0, f1, f0
    blt lbl_fn_804AD8CC_0000040C
lbl_fn_804AD8CC_000001DC:
    cmpwi cr1, r0, 0x3
    bne cr1, lbl_fn_804AD8CC_0000020C
    lwz r4, 0x60(r3)
    lfs f0, lbl_80887304
    lfs f1, 0x100(r4)
    fcmpo cr0, f1, f0
    bge lbl_fn_804AD8CC_0000020C
    bne cr1, lbl_fn_804AD8CC_0000020C
    lwz r4, 0x64(r3)
    lfs f1, 0x100(r4)
    fcmpo cr0, f1, f0
    blt lbl_fn_804AD8CC_0000040C
lbl_fn_804AD8CC_0000020C:
    lwz r30, lbl_8087EF70
    li r6, 0x1
    lwz r4, 0x6c(r3)
    li r7, 0x3
    lwz r5, 0x70(r3)
    addi r3, r3, 0x48
    bl fn_804A436C
    mr r3, r30
    li r29, 0x0
    li r4, 0x0
    li r5, 0x4
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_804AD8CC_00000278
    lwz r0, 0x4c(r31)
    cmpwi r0, 0x1
    bne lbl_fn_804AD8CC_0000025C
    li r0, 0x2
    stw r0, 0x4c(r31)
    b lbl_fn_804AD8CC_00000270
lbl_fn_804AD8CC_0000025C:
    cmpwi r0, 0x3
    bne lbl_fn_804AD8CC_00000270
    lwz r3, 0x48(r31)
    addi r0, r3, 0x4
    stw r0, 0x4c(r31)
lbl_fn_804AD8CC_00000270:
    li r29, 0x1
    b lbl_fn_804AD8CC_000002BC
lbl_fn_804AD8CC_00000278:
    mr r3, r30
    li r4, 0x0
    li r5, 0x5
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_804AD8CC_000002BC
    lwz r0, 0x4c(r31)
    cmpwi r0, 0x1
    bne lbl_fn_804AD8CC_000002A8
    li r0, 0x2
    stw r0, 0x4c(r31)
    b lbl_fn_804AD8CC_000002B8
lbl_fn_804AD8CC_000002A8:
    cmpwi r0, 0x3
    bne lbl_fn_804AD8CC_000002B8
    li r0, 0x5
    stw r0, 0x4c(r31)
lbl_fn_804AD8CC_000002B8:
    li r29, 0x1
lbl_fn_804AD8CC_000002BC:
    cmpwi r29, 0x0
    beq lbl_fn_804AD8CC_0000040C
    lwz r0, 0x4c(r31)
    cmpwi r0, 0x5
    bne lbl_fn_804AD8CC_000002EC
    addi r3, r1, 0xc
    li r4, 0x2
    bl fn_80117228
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_804AD8CC_00000304
lbl_fn_804AD8CC_000002EC:
    addi r3, r1, 0x8
    li r4, 0x1
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_804AD8CC_00000304:
    lwz r30, 0x54(r31)
    cmpwi r30, 0x0
    beq lbl_fn_804AD8CC_00000330
    mr r3, r30
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_808872F8
    stfs f0, 0x104(r30)
    lwz r0, 0xfc(r30)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r30)
lbl_fn_804AD8CC_00000330:
    lwz r30, 0x58(r31)
    cmpwi r30, 0x0
    beq lbl_fn_804AD8CC_0000035C
    mr r3, r30
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_808872F8
    stfs f0, 0x104(r30)
    lwz r0, 0xfc(r30)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r30)
lbl_fn_804AD8CC_0000035C:
    lwz r30, 0x5c(r31)
    cmpwi r30, 0x0
    beq lbl_fn_804AD8CC_00000388
    mr r3, r30
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_808872F8
    stfs f0, 0x104(r30)
    lwz r0, 0xfc(r30)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r30)
lbl_fn_804AD8CC_00000388:
    lwz r30, 0x60(r31)
    cmpwi r30, 0x0
    beq lbl_fn_804AD8CC_000003B4
    mr r3, r30
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_808872F8
    stfs f0, 0x104(r30)
    lwz r0, 0xfc(r30)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r30)
lbl_fn_804AD8CC_000003B4:
    lwz r30, 0x64(r31)
    cmpwi r30, 0x0
    beq lbl_fn_804AD8CC_000003E0
    mr r3, r30
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_808872F8
    stfs f0, 0x104(r30)
    lwz r0, 0xfc(r30)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r30)
lbl_fn_804AD8CC_000003E0:
    lwz r30, 0x68(r31)
    cmpwi r30, 0x0
    beq lbl_fn_804AD8CC_0000040C
    mr r3, r30
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_808872F8
    stfs f0, 0x104(r30)
    lwz r0, 0xfc(r30)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r30)
lbl_fn_804AD8CC_0000040C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804ADB60(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    stw r31, 0x8c(r1)
    mr r31, r3
    lwz r0, lbl_8087F580
    cmpwi r0, 0x0
    beq lbl_fn_804ADB60_00000560
    lwz r0, 0x4c(r3)
    cmpwi r0, 0x3
    bne lbl_fn_804ADB60_00000560
    lfs f0, lbl_808872E4
    stfs f0, 0x30(r1)
    stfs f0, 0x34(r1)
    stfs f0, 0x38(r1)
    stfs f0, 0x3c(r1)
    stfs f0, 0x40(r1)
    lwz r0, 0x50(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804ADB60_000004E0
    lwz r5, 0x48(r31)
    lis r4, lbl_80757834@ha
    addi r4, r4, lbl_80757834@l
    addi r3, r1, 0x48
    addi r4, r4, 0x18f
    addi r5, r5, 0x1
    crclr 6
    bl sprintf
    lwz r31, 0x60(r31)
    addi r3, r1, 0x48
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r31
    addi r3, r1, 0x1c
    bl fn_801F4E8C
    lfs f4, 0x1c(r1)
    lfs f3, 0x20(r1)
    lfs f2, 0x24(r1)
    lfs f1, 0x28(r1)
    lfs f0, 0x2c(r1)
    stfs f4, 0x30(r1)
    stfs f3, 0x34(r1)
    stfs f2, 0x38(r1)
    stfs f1, 0x3c(r1)
    stfs f0, 0x40(r1)
    b lbl_fn_804ADB60_00000548
lbl_fn_804ADB60_000004E0:
    cmpwi r0, 0x1
    bne lbl_fn_804ADB60_00000548
    lis r4, lbl_80757834@ha
    lwz r5, 0x48(r31)
    addi r4, r4, lbl_80757834@l
    addi r3, r1, 0x48
    addi r4, r4, 0x18f
    crclr 6
    bl sprintf
    lwz r31, 0x64(r31)
    addi r3, r1, 0x48
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r31
    addi r3, r1, 0x8
    bl fn_801F4E8C
    lfs f4, 0x8(r1)
    lfs f3, 0xc(r1)
    lfs f2, 0x10(r1)
    lfs f1, 0x14(r1)
    lfs f0, 0x18(r1)
    stfs f4, 0x30(r1)
    stfs f3, 0x34(r1)
    stfs f2, 0x38(r1)
    stfs f1, 0x3c(r1)
    stfs f0, 0x40(r1)
lbl_fn_804ADB60_00000548:
    lwz r3, lbl_8087F580
    addi r6, r1, 0x30
    li r4, 0x0
    li r5, 0x0
    li r7, 0x0
    bl fn_804A53D4
lbl_fn_804ADB60_00000560:
    lwz r0, 0x94(r1)
    lwz r31, 0x8c(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_804ADCAC(void)
{
    nofralloc
    stwu r1, -0x6220(r1)
    mflr r0
    stw r0, 0x6224(r1)
    addi r11, r1, 0x6220
    bl _savefpr_28
    stmw r26, 0x61e8(r1)
    mr r31, r1
    lwz r0, 0x0(r1)
    stwu r0, 0x0(r1)
    lbz r0, 0x10(r3)
    lis r4, lbl_80757A30@ha
    mr r27, r3
    cmpwi r0, 0x0
    addi r4, r4, lbl_80757A30@l
    bne lbl_fn_804ADCAC_00000910
    lis r3, 0xfc07
    li r0, 0x1
    subi r5, r3, 0x5eb8
    stw r5, 0x28(r31)
    lis r3, 0x6c08
    stw r0, 0x13a8(r31)
    subi r5, r3, 0x769b
    b lbl_fn_804ADCAC_00000600
lbl_fn_804ADCAC_000005D0:
    slwi r0, r7, 2
    addi r3, r31, 0x28
    add r3, r3, r0
    lwz r6, -0x4(r3)
    srwi r0, r6, 30
    xor r0, r6, r0
    mullw r0, r0, r5
    add r0, r7, r0
    stw r0, 0x0(r3)
    lwz r3, 0x13a8(r31)
    addi r0, r3, 0x1
    stw r0, 0x13a8(r31)
lbl_fn_804ADCAC_00000600:
    lwz r7, 0x13a8(r31)
    cmpwi r7, 0x270
    blt lbl_fn_804ADCAC_000005D0
    lis r5, lbl_807908C8@ha
    lis r3, lbl_807908C0@ha
    lfd f0, lbl_807908C8@l(r5)
    li r0, 0x270
    stfd f0, 0x20(r31)
    addi r6, r31, 0x13a8
    lfd f0, lbl_807908C0@l(r3)
    addi r5, r31, 0x24
    stfd f0, 0x18(r31)
    lwz r7, 0x20(r31)
    lwz r9, 0x18(r31)
    lwz r8, 0x1c(r31)
    lwz r3, 0x24(r31)
    stw r9, 0x8(r31)
    stw r8, 0xc(r31)
    stw r7, 0x10(r31)
    stw r3, 0x14(r31)
    mtctr r0
lbl_fn_804ADCAC_00000654:
    lwz r3, 0x4(r5)
    lwzu r0, 0x8(r5)
    stw r3, 0x4(r6)
    stwu r0, 0x8(r6)
    bdnz lbl_fn_804ADCAC_00000654
    lwz r3, 0x4(r5)
    li r0, 0x270
    stw r3, 0x4(r6)
    addi r6, r31, 0x272c
    addi r5, r31, 0x13a8
    mtctr r0
lbl_fn_804ADCAC_00000680:
    lwz r3, 0x4(r5)
    lwzu r0, 0x8(r5)
    stw r3, 0x4(r6)
    stwu r0, 0x8(r6)
    bdnz lbl_fn_804ADCAC_00000680
    lwz r3, 0x272c(r31)
    li r0, 0x270
    stw r3, 0x3ab0(r31)
    addi r6, r31, 0x3ab0
    addi r5, r31, 0x272c
    mtctr r0
lbl_fn_804ADCAC_000006AC:
    lwz r3, 0x4(r5)
    lwzu r0, 0x8(r5)
    stw r3, 0x4(r6)
    stwu r0, 0x8(r6)
    bdnz lbl_fn_804ADCAC_000006AC
    lwz r3, 0x4(r5)
    li r0, 0x270
    stw r3, 0x4(r6)
    addi r6, r31, 0x4e34
    addi r5, r31, 0x3ab0
    mtctr r0
lbl_fn_804ADCAC_000006D8:
    lwz r3, 0x4(r5)
    lwzu r0, 0x8(r5)
    stw r3, 0x4(r6)
    stwu r0, 0x8(r6)
    bdnz lbl_fn_804ADCAC_000006D8
    lwz r3, 0x4e34(r31)
    li r0, 0x2
    stw r3, 0x61b8(r31)
    li r26, 0x0
    li r12, 0x0
    li r11, 0x1
    mtctr r0
lbl_fn_804ADCAC_00000708:
    slw r10, r11, r12
    addi r9, r12, 0x1
    addi r8, r12, 0x2
    addi r7, r12, 0x3
    or r26, r26, r10
    slw r9, r11, r9
    or r26, r26, r9
    slw r8, r11, r8
    addi r6, r12, 0x4
    addi r5, r12, 0x5
    or r26, r26, r8
    slw r7, r11, r7
    or r26, r26, r7
    slw r6, r11, r6
    addi r3, r12, 0x6
    addi r0, r12, 0x7
    or r26, r26, r6
    slw r5, r11, r5
    or r26, r26, r5
    slw r3, r11, r3
    or r26, r26, r3
    slw r0, r11, r0
    addi r9, r12, 0x9
    addi r8, r12, 0xa
    addi r7, r12, 0xb
    addi r6, r12, 0xc
    addi r5, r12, 0xd
    addi r3, r12, 0xe
    addi r12, r12, 0x8
    or r26, r26, r0
    slw r10, r11, r12
    slw r9, r11, r9
    addi r0, r12, 0x7
    slw r8, r11, r8
    or r26, r26, r10
    slw r7, r11, r7
    or r26, r26, r9
    slw r6, r11, r6
    or r26, r26, r8
    slw r5, r11, r5
    or r26, r26, r7
    slw r3, r11, r3
    or r26, r26, r6
    slw r0, r11, r0
    or r26, r26, r5
    addi r12, r12, 0x8
    or r26, r26, r3
    or r26, r26, r0
    bdnz lbl_fn_804ADCAC_00000708
    lis r30, 0x4330
    stw r26, 0x61dc(r31)
    lfd f1, 0x8(r31)
    lis r3, 0x9d2c
    stw r30, 0x61d8(r31)
    addi r29, r31, 0x4e38
    lfd f31, 0x18(r4)
    addi r26, r3, 0x5680
    lfd f0, 0x61d8(r31)
    li r28, 0x0
    lfd f28, 0x0(r4)
    fsub f2, f0, f31
    stfd f1, 0x61c8(r31)
    lfd f0, 0x10(r31)
    stfd f0, 0x61d0(r31)
    fadd f1, f28, f2
    lfd f29, 0x8(r4)
    lfd f30, 0x10(r4)
    fdiv f0, f28, f1
    stfd f0, 0x61c0(r31)
    b lbl_fn_804ADCAC_000008DC
lbl_fn_804ADCAC_00000820:
    lwz r0, 0x61b8(r31)
    cmpwi r0, 0x270
    bne lbl_fn_804ADCAC_0000083C
    mr r3, r29
    li r4, 0x0
    bl fn_804AE568
    b lbl_fn_804ADCAC_00000850
lbl_fn_804ADCAC_0000083C:
    cmpwi r0, 0x4e0
    blt lbl_fn_804ADCAC_00000850
    mr r3, r29
    li r4, 0x1
    bl fn_804AE568
lbl_fn_804ADCAC_00000850:
    lwz r3, 0x61b8(r31)
    stw r30, 0x61d8(r31)
    slwi r0, r3, 2
    lfd f0, 0x61d0(r31)
    lwzx r4, r29, r0
    addi r3, r3, 0x1
    lfd f2, 0x61c8(r31)
    srwi r0, r4, 11
    stw r3, 0x61b8(r31)
    xor r4, r4, r0
    fsub f1, f0, f2
    slwi r0, r4, 7
    lfd f3, 0x61c0(r31)
    and r0, r0, r26
    lwz r3, 0x14(r27)
    xor r4, r4, r0
    slwi r0, r4, 15
    andis. r0, r0, 0xefc6
    xor r4, r4, r0
    srwi r0, r4, 18
    xor r4, r4, r0
    stw r4, 0x61dc(r31)
    lfd f0, 0x61d8(r31)
    fsub f0, f0, f31
    fmul f0, f3, f0
    fsub f0, f0, f29
    fdiv f0, f0, f28
    fmadd f0, f1, f0, f2
    fmul f0, f30, f0
    fctiwz f0, f0
    stfd f0, 0x61e0(r31)
    lwz r4, 0x61e4(r31)
    addi r0, r4, 0x21
    stbx r0, r3, r28
    addi r28, r28, 0x1
lbl_fn_804ADCAC_000008DC:
    lwz r12, 0x0(r27)
    mr r3, r27
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    slwi r0, r3, 1
    cmplw r28, r0
    blt lbl_fn_804ADCAC_00000820
    lwz r3, 0x14(r27)
    li r4, 0x0
    li r0, 0x1
    stbx r4, r3, r28
    stb r0, 0x10(r27)
lbl_fn_804ADCAC_00000910:
    li r26, 0x0
    li r28, 0x0
    b lbl_fn_804ADCAC_00000948
lbl_fn_804ADCAC_0000091C:
    srwi r3, r28, 31
    clrlwi r0, r28, 31
    xor r0, r0, r3
    subf. r0, r3, r0
    bne lbl_fn_804ADCAC_00000944
    lwz r4, 0x14(r27)
    lwz r3, 0x18(r27)
    lbzx r0, r4, r28
    stbx r0, r3, r26
    addi r26, r26, 0x1
lbl_fn_804ADCAC_00000944:
    addi r28, r28, 0x1
lbl_fn_804ADCAC_00000948:
    lwz r12, 0x0(r27)
    mr r3, r27
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    slwi r0, r3, 1
    cmplw r28, r0
    blt lbl_fn_804ADCAC_0000091C
    lwz r3, 0x18(r27)
    li r28, 0x0
    stbx r28, r3, r26
    bl fn_806B3C20
    mr r26, r3
    li r29, 0x0
    b lbl_fn_804ADCAC_0000099C
lbl_fn_804ADCAC_00000984:
    lwz r3, 0x18(r27)
    addi r29, r29, 0x1
    lwzx r0, r3, r28
    xor r26, r0, r26
    stwx r26, r3, r28
    addi r28, r28, 0x4
lbl_fn_804ADCAC_0000099C:
    lwz r12, 0x0(r27)
    mr r3, r27
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    srwi r0, r3, 2
    cmplw r29, r0
    blt lbl_fn_804ADCAC_00000984
    mr r10, r31
    lwz r3, 0x18(r27)
    addi r11, r10, 0x6220
    bl _restfpr_28
    lmw r26, 0x61e8(r10)
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mr r1, r10
    mtlr r0
    blr
}

asm void fn_804AE11C(void)
{
    nofralloc
    li r3, 0x20
    blr
}

asm void fn_804AE124(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savefpr_28
    stmw r26, 0x18(r1)
    cmpwi r4, 0x0
    lis r4, lbl_80757A30@ha
    addi r4, r4, lbl_80757A30@l
    bne lbl_fn_804AE124_00000B04
    add r30, r5, r6
    lis r3, 0x9d2c
    lfd f28, 0x18(r4)
    mr r29, r30
    lfd f29, 0x8(r4)
    addi r27, r3, 0x5680
    lfd f30, 0x0(r4)
    li r31, 0x0
    lfd f31, 0x10(r4)
    lis r28, 0x4330
lbl_fn_804AE124_00000A3C:
    bl fn_800A2664
    lwz r0, 0x1380(r3)
    mr r26, r3
    cmpwi r0, 0x270
    bne lbl_fn_804AE124_00000A5C
    li r4, 0x0
    bl fn_804AE568
    b lbl_fn_804AE124_00000A6C
lbl_fn_804AE124_00000A5C:
    cmpwi r0, 0x4e0
    blt lbl_fn_804AE124_00000A6C
    li r4, 0x1
    bl fn_804AE568
lbl_fn_804AE124_00000A6C:
    lwz r3, 0x1380(r26)
    addi r31, r31, 0x1
    stw r28, 0x8(r1)
    cmpwi cr1, r31, 0x10
    slwi r0, r3, 2
    addi r3, r3, 0x1
    lwzx r4, r26, r0
    srwi r0, r4, 11
    stw r3, 0x1380(r26)
    xor r4, r4, r0
    slwi r0, r4, 7
    lfd f0, 0x1398(r26)
    and r0, r0, r27
    lfd f2, 0x1390(r26)
    xor r4, r4, r0
    lfd f3, 0x1388(r26)
    slwi r0, r4, 15
    fsub f1, f0, f2
    andis. r0, r0, 0xefc6
    xor r4, r4, r0
    srwi r0, r4, 18
    xor r4, r4, r0
    stw r4, 0xc(r1)
    lfd f0, 0x8(r1)
    fsub f0, f0, f28
    fmul f0, f3, f0
    fsub f0, f0, f29
    fdiv f0, f0, f30
    fmadd f0, f1, f0, f2
    fmul f0, f31, f0
    fctiwz f0, f0
    stfd f0, 0x10(r1)
    lwz r3, 0x14(r1)
    addi r0, r3, 0x21
    stb r0, 0x0(r29)
    addi r29, r29, 0x1
    blt cr1, lbl_fn_804AE124_00000A3C
    b lbl_fn_804AE124_00000B0C
lbl_fn_804AE124_00000B04:
    add r3, r6, r5
    subi r30, r3, 0x10
lbl_fn_804AE124_00000B0C:
    addi r11, r1, 0x50
    mr r3, r30
    bl _restfpr_28
    lmw r26, 0x18(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_804AE264(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    mr r3, r6
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r7
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    mr r4, r31
    bl fn_805F8430
    addi r0, r31, 0x2
    sth r3, 0x8(r1)
    cmplw r0, r30
    ble lbl_fn_804AE264_00000B74
    li r3, 0x0
    b lbl_fn_804AE264_00000B88
lbl_fn_804AE264_00000B74:
    add r3, r29, r31
    addi r4, r1, 0x8
    li r5, 0x2
    bl memcpy
    li r3, 0x1
lbl_fn_804AE264_00000B88:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804AE2DC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    lwz r0, lbl_8087F628
    cmpwi r0, 0x0
    bne lbl_fn_804AE2DC_00000BD8
    li r3, 0x0
    b lbl_fn_804AE2DC_00000C68
lbl_fn_804AE2DC_00000BD8:
    stw r4, 0xc(r1)
lbl_fn_804AE2DC_00000BDC:
    bl fn_804AE3BC
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    clrlwi r31, r3, 24
    bl fn_804AE3BC
    addi r4, r1, 0xc
    li r5, 0x0
    bl fn_8050E414
    clrlwi r0, r3, 24
    cmplw r0, r31
    beq lbl_fn_804AE2DC_00000C28
    lwz r0, 0xc(r1)
    subf r0, r29, r0
    cmpw r0, r30
    ble lbl_fn_804AE2DC_00000BDC
    li r3, 0x0
    b lbl_fn_804AE2DC_00000C68
lbl_fn_804AE2DC_00000C28:
    lwz r4, 0xc(r1)
    mr r3, r29
    addi r0, r4, 0x1
    stw r0, 0xc(r1)
    subf r4, r29, r0
    bl fn_805F8430
    lwz r4, 0xc(r1)
    mr r31, r3
    addi r3, r1, 0x8
    li r5, 0x2
    bl memcpy
    lhz r0, 0x8(r1)
    clrlwi r3, r31, 16
    subf r0, r3, r0
    cntlzw r0, r0
    srwi r3, r0, 5
lbl_fn_804AE2DC_00000C68:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804AE3BC(void)
{
    nofralloc
    lwz r3, lbl_8087F62C
    blr
}

asm void fn_804AE3C4(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_804AE3CC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_fn_804AE3CC_00000D6C
    lwz r31, 0x14(r3)
    lis r4, lbl_807908D0@ha
    addi r4, r4, lbl_807908D0@l
    stw r4, 0x0(r3)
    cmpwi r31, 0x0
    beq lbl_fn_804AE3CC_00000CE8
    bl fn_800827E0
    mr r4, r31
    bl fn_80083AD4
    li r0, 0x0
    stw r0, 0x14(r29)
lbl_fn_804AE3CC_00000CE8:
    lwz r31, 0x18(r29)
    cmpwi r31, 0x0
    beq lbl_fn_804AE3CC_00000D08
    bl fn_800827E0
    mr r4, r31
    bl fn_80083AD4
    li r0, 0x0
    stw r0, 0x18(r29)
lbl_fn_804AE3CC_00000D08:
    cmpwi r29, 0x0
    beq lbl_fn_804AE3CC_00000D5C
    lwz r31, 0x8(r29)
    lis r3, lbl_80790908@ha
    addi r3, r3, lbl_80790908@l
    stw r3, 0x0(r29)
    cmpwi r31, 0x0
    beq lbl_fn_804AE3CC_00000D3C
    bl fn_800827E0
    mr r4, r31
    bl fn_80083AD4
    li r0, 0x0
    stw r0, 0x8(r29)
lbl_fn_804AE3CC_00000D3C:
    lwz r31, 0xc(r29)
    cmpwi r31, 0x0
    beq lbl_fn_804AE3CC_00000D5C
    bl fn_800827E0
    mr r4, r31
    bl fn_80083AD4
    li r0, 0x0
    stw r0, 0xc(r29)
lbl_fn_804AE3CC_00000D5C:
    cmpwi r30, 0x0
    ble lbl_fn_804AE3CC_00000D6C
    mr r3, r29
    bl dtor_80084684
lbl_fn_804AE3CC_00000D6C:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804AE4C4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_fn_804AE4C4_00000E10
    lwz r31, 0x8(r3)
    lis r4, lbl_80790908@ha
    addi r4, r4, lbl_80790908@l
    stw r4, 0x0(r3)
    cmpwi r31, 0x0
    beq lbl_fn_804AE4C4_00000DE0
    bl fn_800827E0
    mr r4, r31
    bl fn_80083AD4
    li r0, 0x0
    stw r0, 0x8(r29)
lbl_fn_804AE4C4_00000DE0:
    lwz r31, 0xc(r29)
    cmpwi r31, 0x0
    beq lbl_fn_804AE4C4_00000E00
    bl fn_800827E0
    mr r4, r31
    bl fn_80083AD4
    li r0, 0x0
    stw r0, 0xc(r29)
lbl_fn_804AE4C4_00000E00:
    cmpwi r30, 0x0
    ble lbl_fn_804AE4C4_00000E10
    mr r3, r29
    bl dtor_80084684
lbl_fn_804AE4C4_00000E10:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804AE568(void)
{
    nofralloc
    cmpwi r4, 0x0
    bne lbl_fn_804AE568_00000F18
    lis r4, 0x9909
    li r0, 0x9c
    addi r6, r3, 0x9c0
    subi r3, r4, 0x4f21
    mtctr r0
lbl_fn_804AE568_00000E4C:
    lwz r0, -0x9bc(r6)
    lwz r5, -0x9c0(r6)
    clrlwi r7, r0, 1
    lwz r4, -0x38c(r6)
    rlwimi r7, r5, 0, 0, 0
    clrlwi r0, r7, 31
    srwi r5, r7, 1
    neg r0, r0
    xor r4, r5, r4
    and r0, r3, r0
    xor r0, r4, r0
    stw r0, 0x0(r6)
    lwz r0, -0x9b8(r6)
    lwz r5, -0x9bc(r6)
    clrlwi r7, r0, 1
    lwz r4, -0x388(r6)
    rlwimi r7, r5, 0, 0, 0
    clrlwi r0, r7, 31
    srwi r5, r7, 1
    neg r0, r0
    xor r4, r5, r4
    and r0, r3, r0
    xor r0, r4, r0
    stw r0, 0x4(r6)
    lwz r0, -0x9b4(r6)
    lwz r5, -0x9b8(r6)
    clrlwi r7, r0, 1
    lwz r4, -0x384(r6)
    rlwimi r7, r5, 0, 0, 0
    clrlwi r0, r7, 31
    srwi r5, r7, 1
    neg r0, r0
    xor r4, r5, r4
    and r0, r3, r0
    xor r0, r4, r0
    stw r0, 0x8(r6)
    lwz r0, -0x9b0(r6)
    lwz r5, -0x9b4(r6)
    clrlwi r7, r0, 1
    lwz r4, -0x380(r6)
    rlwimi r7, r5, 0, 0, 0
    clrlwi r0, r7, 31
    srwi r5, r7, 1
    neg r0, r0
    xor r4, r5, r4
    and r0, r3, r0
    xor r0, r4, r0
    stw r0, 0xc(r6)
    addi r6, r6, 0x10
    bdnz lbl_fn_804AE568_00000E4C
    blr
lbl_fn_804AE568_00000F18:
    cmpwi r4, 0x1
    bnelr
    lis r4, 0x9909
    li r0, 0xe3
    mr r7, r3
    subi r4, r4, 0x4f21
    mtctr r0
lbl_fn_804AE568_00000F34:
    lwz r0, 0x9c4(r7)
    lwz r6, 0x9c0(r7)
    clrlwi r8, r0, 1
    lwz r5, 0xff4(r7)
    rlwimi r8, r6, 0, 0, 0
    clrlwi r0, r8, 31
    srwi r6, r8, 1
    neg r0, r0
    xor r5, r6, r5
    and r0, r4, r0
    xor r0, r5, r0
    stw r0, 0x0(r7)
    addi r7, r7, 0x4
    bdnz lbl_fn_804AE568_00000F34
    lis r4, 0x9909
    li r0, 0x63
    addi r7, r3, 0x38c
    subi r4, r4, 0x4f21
    mtctr r0
lbl_fn_804AE568_00000F80:
    lwz r0, 0x9c4(r7)
    lwz r6, 0x9c0(r7)
    clrlwi r8, r0, 1
    lwz r5, -0x38c(r7)
    rlwimi r8, r6, 0, 0, 0
    clrlwi r0, r8, 31
    srwi r6, r8, 1
    neg r0, r0
    xor r5, r6, r5
    and r0, r4, r0
    xor r0, r5, r0
    stw r0, 0x0(r7)
    lwz r0, 0x9c8(r7)
    lwz r6, 0x9c4(r7)
    clrlwi r8, r0, 1
    lwz r5, -0x388(r7)
    rlwimi r8, r6, 0, 0, 0
    clrlwi r0, r8, 31
    srwi r6, r8, 1
    neg r0, r0
    xor r5, r6, r5
    and r0, r4, r0
    xor r0, r5, r0
    stw r0, 0x4(r7)
    lwz r0, 0x9cc(r7)
    lwz r6, 0x9c8(r7)
    clrlwi r8, r0, 1
    lwz r5, -0x384(r7)
    rlwimi r8, r6, 0, 0, 0
    clrlwi r0, r8, 31
    srwi r6, r8, 1
    neg r0, r0
    xor r5, r6, r5
    and r0, r4, r0
    xor r0, r5, r0
    stw r0, 0x8(r7)
    lwz r0, 0x9d0(r7)
    lwz r6, 0x9cc(r7)
    clrlwi r8, r0, 1
    lwz r5, -0x380(r7)
    rlwimi r8, r6, 0, 0, 0
    clrlwi r0, r8, 31
    srwi r6, r8, 1
    neg r0, r0
    xor r5, r6, r5
    and r0, r4, r0
    xor r0, r5, r0
    stw r0, 0xc(r7)
    addi r7, r7, 0x10
    bdnz lbl_fn_804AE568_00000F80
    lwz r5, 0x0(r3)
    lis r4, 0x9909
    lwz r6, 0x137c(r3)
    li r0, 0x0
    clrlwi r8, r5, 1
    lwz r7, 0x630(r3)
    rlwimi r8, r6, 0, 0, 0
    subi r4, r4, 0x4f21
    clrlwi r5, r8, 31
    stw r0, 0x1380(r3)
    neg r0, r5
    srwi r6, r8, 1
    xor r5, r7, r6
    and r0, r4, r0
    xor r0, r5, r0
    stw r0, 0x9bc(r3)
    blr
}

asm void fn_804AE7C4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    la r3, lbl_8087F590
    stw r0, 0x14(r1)
    bl fn_8068B770
    lis r4, fn_8068BC30@ha
    lis r5, lbl_807C8AD0@ha
    addi r4, r4, fn_8068BC30@l
    la r3, lbl_8087F590
    addi r5, r5, lbl_807C8AD0@l
    bl __register_global_object
    la r3, lbl_8087F594
    bl fn_8068BD60
    lis r4, fn_8068C240@ha
    lis r5, lbl_807C8ADC@ha
    addi r4, r4, fn_8068C240@l
    la r3, lbl_8087F594
    addi r5, r5, lbl_807C8ADC@l
    bl __register_global_object
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804AE820(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, lbl_8087F59C
    cmpwi r0, 0x0
    bne lbl_fn_804AE820_00001138
    lis r5, lbl_80757B7C@ha
    li r3, 0x29b0
    addi r5, r5, lbl_80757B7C@l
    li r4, 0x1
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_804AE820_00001134
    mr r4, r31
    bl fn_804AE888
lbl_fn_804AE820_00001134:
    stw r3, lbl_8087F59C
lbl_fn_804AE820_00001138:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    lwz r3, lbl_8087F59C
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804AE888(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_25
    mr r31, r3
    bl fn_800D1D3C
    lis r3, lbl_80790AB0@ha
    lis r8, lbl_80790B40@ha
    li r28, 0x0
    li r9, -0x1
    addi r3, r3, lbl_80790AB0@l
    addi r8, r8, lbl_80790B40@l
    li r0, 0x3
    lis r30, fn_804AF1BC@ha
    lis r29, fn_804AF210@ha
    stw r3, 0x0(r31)
    addi r3, r31, 0x274
    addi r4, r30, fn_804AF1BC@l
    stw r28, 0xbc(r31)
    addi r5, r29, fn_804AF210@l
    li r6, 0x50
    li r7, 0x1e
    stw r28, 0xc4(r31)
    stw r28, 0xc8(r31)
    stw r9, 0xcc(r31)
    stw r28, 0xd0(r31)
    stw r28, 0xd4(r31)
    stw r28, 0xd8(r31)
    stw r28, 0xdc(r31)
    stw r28, 0xe4(r31)
    stw r9, 0xe8(r31)
    stw r0, 0x154(r31)
    stw r28, 0x158(r31)
    stw r28, 0x268(r31)
    stw r28, 0x26c(r31)
    stw r8, 0x270(r31)
    bl fn_806958E0
    lis r6, lbl_80790B18@ha
    stw r28, 0xbd4(r31)
    addi r6, r6, lbl_80790B18@l
    addi r3, r31, 0xbe0
    stw r6, 0xbdc(r31)
    addi r4, r30, fn_804AF1BC@l
    addi r5, r29, fn_804AF210@l
    li r6, 0x50
    stw r28, 0xbd8(r31)
    li r7, 0x1e
    bl fn_806958E0
    lis r6, lbl_80790AF0@ha
    stw r28, 0x1540(r31)
    addi r6, r6, lbl_80790AF0@l
    addi r3, r31, 0x154c
    stw r6, 0x1548(r31)
    addi r4, r30, fn_804AF1BC@l
    addi r5, r29, fn_804AF210@l
    li r6, 0x50
    stw r28, 0x1544(r31)
    li r7, 0x41
    bl fn_806958E0
    stw r28, 0x299c(r31)
    lis r4, lbl_80757B7C@ha
    lfs f0, lbl_80887308
    addi r4, r4, lbl_80757B7C@l
    stw r28, 0x29a4(r31)
    addi r7, r31, 0x268
    addi r6, r31, 0xbd4
    addi r0, r31, 0x1540
    stw r28, 0x29a0(r31)
    mr r3, r31
    addi r4, r4, 0x1
    li r5, 0x0
    stw r28, 0x29a8(r31)
    lwz r8, lbl_8087EFA8
    stfs f0, 0x8(r1)
    stfs f0, 0x3c(r8)
    stfs f0, 0x40(r8)
    stfs f0, 0x44(r8)
    stfs f0, 0x48(r8)
    stfs f0, 0xc(r1)
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stw r7, 0x25c(r31)
    stw r6, 0x260(r31)
    stw r0, 0x264(r31)
    bl fn_801F3FF8
    lwz r0, 0x158(r31)
    stw r3, 0x48(r31)
    cmplwi r0, 0x40
    bge lbl_fn_804AE888_000012DC
    lwz r0, 0x158(r31)
    slwi r0, r0, 2
    add r0, r31, r0
    addic. r4, r0, 0x15c
    beq lbl_fn_804AE888_000012D0
    stw r3, 0x0(r4)
lbl_fn_804AE888_000012D0:
    lwz r3, 0x158(r31)
    addi r0, r3, 0x1
    stw r0, 0x158(r31)
lbl_fn_804AE888_000012DC:
    lis r4, lbl_80757B7C@ha
    mr r3, r31
    addi r4, r4, lbl_80757B7C@l
    li r5, 0x0
    addi r4, r4, 0x29
    bl fn_801F3FF8
    lwz r0, 0x158(r31)
    stw r3, 0x4c(r31)
    cmplwi r0, 0x40
    bge lbl_fn_804AE888_00001328
    lwz r0, 0x158(r31)
    slwi r0, r0, 2
    add r0, r31, r0
    addic. r4, r0, 0x15c
    beq lbl_fn_804AE888_0000131C
    stw r3, 0x0(r4)
lbl_fn_804AE888_0000131C:
    lwz r3, 0x158(r31)
    addi r0, r3, 0x1
    stw r0, 0x158(r31)
lbl_fn_804AE888_00001328:
    lis r4, lbl_80757B7C@ha
    mr r3, r31
    addi r4, r4, lbl_80757B7C@l
    li r5, 0x0
    addi r4, r4, 0x4d
    bl fn_801F3FF8
    lwz r0, 0x158(r31)
    stw r3, 0x50(r31)
    cmplwi r0, 0x40
    bge lbl_fn_804AE888_00001374
    lwz r0, 0x158(r31)
    slwi r0, r0, 2
    add r0, r31, r0
    addic. r4, r0, 0x15c
    beq lbl_fn_804AE888_00001368
    stw r3, 0x0(r4)
lbl_fn_804AE888_00001368:
    lwz r3, 0x158(r31)
    addi r0, r3, 0x1
    stw r0, 0x158(r31)
lbl_fn_804AE888_00001374:
    lis r4, lbl_80757B7C@ha
    mr r3, r31
    addi r4, r4, lbl_80757B7C@l
    li r5, 0x0
    addi r4, r4, 0x78
    bl fn_801F3FF8
    lwz r0, 0x158(r31)
    stw r3, 0x54(r31)
    cmplwi r0, 0x40
    bge lbl_fn_804AE888_000013C0
    lwz r0, 0x158(r31)
    slwi r0, r0, 2
    add r0, r31, r0
    addic. r4, r0, 0x15c
    beq lbl_fn_804AE888_000013B4
    stw r3, 0x0(r4)
lbl_fn_804AE888_000013B4:
    lwz r3, 0x158(r31)
    addi r0, r3, 0x1
    stw r0, 0x158(r31)
lbl_fn_804AE888_000013C0:
    lis r29, lbl_80757B7C@ha
    li r28, 0x0
    addi r29, r29, lbl_80757B7C@l
    li r26, 0x0
lbl_fn_804AE888_000013D0:
    mr r3, r31
    add r27, r31, r26
    addi r4, r29, 0xa3
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x58(r27)
    lwz r0, 0x158(r31)
    cmplwi r0, 0x40
    bge lbl_fn_804AE888_00001418
    lwz r0, 0x158(r31)
    slwi r0, r0, 2
    add r0, r31, r0
    addic. r4, r0, 0x15c
    beq lbl_fn_804AE888_0000140C
    stw r3, 0x0(r4)
lbl_fn_804AE888_0000140C:
    lwz r3, 0x158(r31)
    addi r0, r3, 0x1
    stw r0, 0x158(r31)
lbl_fn_804AE888_00001418:
    addi r28, r28, 0x1
    addi r26, r26, 0x4
    cmplwi r28, 0x3
    blt lbl_fn_804AE888_000013D0
    lis r4, lbl_80757B7C@ha
    mr r3, r31
    addi r4, r4, lbl_80757B7C@l
    li r5, 0x0
    addi r4, r4, 0xc6
    bl fn_801F3FF8
    lwz r0, 0x158(r31)
    stw r3, 0x64(r31)
    cmplwi r0, 0x40
    bge lbl_fn_804AE888_00001474
    lwz r0, 0x158(r31)
    slwi r0, r0, 2
    add r0, r31, r0
    addic. r4, r0, 0x15c
    beq lbl_fn_804AE888_00001468
    stw r3, 0x0(r4)
lbl_fn_804AE888_00001468:
    lwz r3, 0x158(r31)
    addi r0, r3, 0x1
    stw r0, 0x158(r31)
lbl_fn_804AE888_00001474:
    lis r4, lbl_80757B7C@ha
    mr r3, r31
    addi r4, r4, lbl_80757B7C@l
    li r5, 0x0
    addi r4, r4, 0xe7
    bl fn_801F3FF8
    lwz r0, 0x158(r31)
    stw r3, 0x68(r31)
    cmplwi r0, 0x40
    bge lbl_fn_804AE888_000014C0
    lwz r0, 0x158(r31)
    slwi r0, r0, 2
    add r0, r31, r0
    addic. r4, r0, 0x15c
    beq lbl_fn_804AE888_000014B4
    stw r3, 0x0(r4)
lbl_fn_804AE888_000014B4:
    lwz r3, 0x158(r31)
    addi r0, r3, 0x1
    stw r0, 0x158(r31)
lbl_fn_804AE888_000014C0:
    lis r4, lbl_80757B7C@ha
    mr r3, r31
    addi r4, r4, lbl_80757B7C@l
    li r5, 0x0
    addi r4, r4, 0x111
    bl fn_801F3FF8
    lwz r0, 0x158(r31)
    stw r3, 0x6c(r31)
    cmplwi r0, 0x40
    bge lbl_fn_804AE888_0000150C
    lwz r0, 0x158(r31)
    slwi r0, r0, 2
    add r0, r31, r0
    addic. r4, r0, 0x15c
    beq lbl_fn_804AE888_00001500
    stw r3, 0x0(r4)
lbl_fn_804AE888_00001500:
    lwz r3, 0x158(r31)
    addi r0, r3, 0x1
    stw r0, 0x158(r31)
lbl_fn_804AE888_0000150C:
    lis r4, lbl_80757B7C@ha
    mr r3, r31
    addi r4, r4, lbl_80757B7C@l
    li r5, 0x0
    addi r4, r4, 0x13b
    bl fn_801F3FF8
    lwz r0, 0x158(r31)
    stw r3, 0xb8(r31)
    cmplwi r0, 0x40
    bge lbl_fn_804AE888_00001558
    lwz r0, 0x158(r31)
    slwi r0, r0, 2
    add r0, r31, r0
    addic. r4, r0, 0x15c
    beq lbl_fn_804AE888_0000154C
    stw r3, 0x0(r4)
lbl_fn_804AE888_0000154C:
    lwz r3, 0x158(r31)
    addi r0, r3, 0x1
    stw r0, 0x158(r31)
lbl_fn_804AE888_00001558:
    lis r4, lbl_80757B7C@ha
    mr r3, r31
    addi r4, r4, lbl_80757B7C@l
    li r5, 0x0
    addi r4, r4, 0x161
    bl fn_801F3FF8
    lwz r0, 0x158(r31)
    stw r3, 0x70(r31)
    cmplwi r0, 0x40
    bge lbl_fn_804AE888_000015A4
    lwz r0, 0x158(r31)
    slwi r0, r0, 2
    add r0, r31, r0
    addic. r4, r0, 0x15c
    beq lbl_fn_804AE888_00001598
    stw r3, 0x0(r4)
lbl_fn_804AE888_00001598:
    lwz r3, 0x158(r31)
    addi r0, r3, 0x1
    stw r0, 0x158(r31)
lbl_fn_804AE888_000015A4:
    lis r4, lbl_80757B7C@ha
    mr r3, r31
    addi r4, r4, lbl_80757B7C@l
    li r5, 0x0
    addi r4, r4, 0x184
    bl fn_801F3FF8
    lwz r0, 0x158(r31)
    stw r3, 0x74(r31)
    cmplwi r0, 0x40
    bge lbl_fn_804AE888_000015F0
    lwz r0, 0x158(r31)
    slwi r0, r0, 2
    add r0, r31, r0
    addic. r4, r0, 0x15c
    beq lbl_fn_804AE888_000015E4
    stw r3, 0x0(r4)
lbl_fn_804AE888_000015E4:
    lwz r3, 0x158(r31)
    addi r0, r3, 0x1
    stw r0, 0x158(r31)
lbl_fn_804AE888_000015F0:
    lis r4, lbl_80757B7C@ha
    mr r3, r31
    addi r4, r4, lbl_80757B7C@l
    li r5, 0x0
    addi r4, r4, 0x1a9
    bl fn_801F3FF8
    lwz r0, 0x158(r31)
    stw r3, 0x78(r31)
    cmplwi r0, 0x40
    bge lbl_fn_804AE888_0000163C
    lwz r0, 0x158(r31)
    slwi r0, r0, 2
    add r0, r31, r0
    addic. r4, r0, 0x15c
    beq lbl_fn_804AE888_00001630
    stw r3, 0x0(r4)
lbl_fn_804AE888_00001630:
    lwz r3, 0x158(r31)
    addi r0, r3, 0x1
    stw r0, 0x158(r31)
lbl_fn_804AE888_0000163C:
    lis r4, lbl_80757B7C@ha
    mr r3, r31
    addi r4, r4, lbl_80757B7C@l
    li r5, 0x0
    addi r4, r4, 0x1ce
    bl fn_801F3FF8
    lwz r0, 0x158(r31)
    stw r3, 0x7c(r31)
    cmplwi r0, 0x40
    bge lbl_fn_804AE888_00001688
    lwz r0, 0x158(r31)
    slwi r0, r0, 2
    add r0, r31, r0
    addic. r4, r0, 0x15c
    beq lbl_fn_804AE888_0000167C
    stw r3, 0x0(r4)
lbl_fn_804AE888_0000167C:
    lwz r3, 0x158(r31)
    addi r0, r3, 0x1
    stw r0, 0x158(r31)
lbl_fn_804AE888_00001688:
    lis r4, lbl_80757B7C@ha
    mr r3, r31
    addi r4, r4, lbl_80757B7C@l
    li r5, 0x0
    addi r4, r4, 0x1f4
    bl fn_801F3FF8
    lwz r0, 0x158(r31)
    stw r3, 0x80(r31)
    cmplwi r0, 0x40
    bge lbl_fn_804AE888_000016D4
    lwz r0, 0x158(r31)
    slwi r0, r0, 2
    add r0, r31, r0
    addic. r4, r0, 0x15c
    beq lbl_fn_804AE888_000016C8
    stw r3, 0x0(r4)
lbl_fn_804AE888_000016C8:
    lwz r3, 0x158(r31)
    addi r0, r3, 0x1
    stw r0, 0x158(r31)
lbl_fn_804AE888_000016D4:
    lis r4, lbl_80757B7C@ha
    mr r3, r31
    addi r4, r4, lbl_80757B7C@l
    li r5, 0x0
    addi r4, r4, 0x21a
    bl fn_801F3FF8
    lwz r0, 0x158(r31)
    stw r3, 0x84(r31)
    cmplwi r0, 0x40
    bge lbl_fn_804AE888_00001720
    lwz r0, 0x158(r31)
    slwi r0, r0, 2
    add r0, r31, r0
    addic. r4, r0, 0x15c
    beq lbl_fn_804AE888_00001714
    stw r3, 0x0(r4)
lbl_fn_804AE888_00001714:
    lwz r3, 0x158(r31)
    addi r0, r3, 0x1
    stw r0, 0x158(r31)
lbl_fn_804AE888_00001720:
    lis r4, lbl_80757B7C@ha
    mr r3, r31
    addi r4, r4, lbl_80757B7C@l
    li r5, 0x0
    addi r4, r4, 0x240
    bl fn_801F3FF8
    lwz r0, 0x158(r31)
    stw r3, 0x88(r31)
    cmplwi r0, 0x40
    bge lbl_fn_804AE888_0000176C
    lwz r0, 0x158(r31)
    slwi r0, r0, 2
    add r0, r31, r0
    addic. r4, r0, 0x15c
    beq lbl_fn_804AE888_00001760
    stw r3, 0x0(r4)
lbl_fn_804AE888_00001760:
    lwz r3, 0x158(r31)
    addi r0, r3, 0x1
    stw r0, 0x158(r31)
lbl_fn_804AE888_0000176C:
    lis r4, lbl_80757B7C@ha
    mr r3, r31
    addi r4, r4, lbl_80757B7C@l
    li r5, 0x0
    addi r4, r4, 0x268
    bl fn_801F3FF8
    lwz r0, 0x158(r31)
    stw r3, 0xb4(r31)
    cmplwi r0, 0x40
    bge lbl_fn_804AE888_000017B8
    lwz r0, 0x158(r31)
    slwi r0, r0, 2
    add r0, r31, r0
    addic. r4, r0, 0x15c
    beq lbl_fn_804AE888_000017AC
    stw r3, 0x0(r4)
lbl_fn_804AE888_000017AC:
    lwz r3, 0x158(r31)
    addi r0, r3, 0x1
    stw r0, 0x158(r31)
lbl_fn_804AE888_000017B8:
    lis r29, lbl_80757B7C@ha
    li r28, 0x0
    addi r29, r29, lbl_80757B7C@l
    li r26, 0x0
lbl_fn_804AE888_000017C8:
    mr r3, r31
    add r27, r31, r26
    addi r4, r29, 0x285
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x8c(r27)
    lwz r0, 0x158(r31)
    cmplwi r0, 0x40
    bge lbl_fn_804AE888_00001810
    lwz r0, 0x158(r31)
    slwi r0, r0, 2
    add r0, r31, r0
    addic. r4, r0, 0x15c
    beq lbl_fn_804AE888_00001804
    stw r3, 0x0(r4)
lbl_fn_804AE888_00001804:
    lwz r3, 0x158(r31)
    addi r0, r3, 0x1
    stw r0, 0x158(r31)
lbl_fn_804AE888_00001810:
    addi r28, r28, 0x1
    addi r26, r26, 0x4
    cmpwi r28, 0xa
    blt lbl_fn_804AE888_000017C8
    addi r28, r31, 0x15c
    b lbl_fn_804AE888_00001840
lbl_fn_804AE888_00001828:
    lwz r3, 0x0(r28)
    cmpwi r3, 0x0
    beq lbl_fn_804AE888_0000183C
    li r4, 0x1
    bl fn_800D246C
lbl_fn_804AE888_0000183C:
    addi r28, r28, 0x4
lbl_fn_804AE888_00001840:
    lwz r0, 0x158(r31)
    slwi r0, r0, 2
    add r3, r31, r0
    addi r0, r3, 0x15c
    cmplw r28, r0
    bne lbl_fn_804AE888_00001828
    lfs f0, lbl_80887308
    addi r4, r31, 0x15c
    b lbl_fn_804AE888_00001878
lbl_fn_804AE888_00001864:
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_804AE888_00001874
    stfs f0, 0x104(r3)
lbl_fn_804AE888_00001874:
    addi r4, r4, 0x4
lbl_fn_804AE888_00001878:
    lwz r0, 0x158(r31)
    slwi r0, r0, 2
    add r3, r31, r0
    addi r0, r3, 0x15c
    cmplw r4, r0
    bne lbl_fn_804AE888_00001864
    mr r3, r31
    bl fn_804A29C4
    lwz r0, lbl_8087F5A0
    cmpwi r0, 0x0
    bne lbl_fn_804AE888_0000195C
    lis r29, lbl_80757B7C@ha
    li r3, 0xc8
    addi r5, r29, lbl_80757B7C@l
    li r4, 0x1
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_804AE888_00001958
    mr r4, r31
    bl fn_800D1D3C
    lis r3, lbl_80790A78@ha
    addi r28, r30, 0x48
    addi r3, r3, lbl_80790A78@l
    stw r3, 0x0(r30)
    mr r3, r28
    bl fn_80473E74
    lis r3, lbl_8078FBB0@ha
    li r0, 0x0
    addi r3, r3, lbl_8078FBB0@l
    stw r3, 0x0(r28)
    addi r29, r29, lbl_80757B7C@l
    li r28, 0x0
    stw r0, 0xb0(r30)
    li r26, 0x0
    stw r0, 0xb4(r30)
lbl_fn_804AE888_00001910:
    mr r3, r30
    add r27, r30, r26
    addi r4, r29, 0x2ab
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0xb8(r27)
    li r4, 0x1
    bl fn_800D246C
    addi r28, r28, 0x1
    addi r26, r26, 0x4
    cmpwi r28, 0x3
    blt lbl_fn_804AE888_00001910
    lwz r12, 0x48(r30)
    addi r3, r30, 0x48
    lwz r4, lbl_8087E0F0
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
lbl_fn_804AE888_00001958:
    stw r30, lbl_8087F5A0
lbl_fn_804AE888_0000195C:
    mr r3, r31
    bl fn_804B9D44
    li r25, 0x0
    li r26, 0x0
    li r29, 0x0
    li r30, -0x1
lbl_fn_804AE888_00001974:
    add r3, r31, r26
    li r27, 0x0
    lwz r28, 0x25c(r3)
    b lbl_fn_804AE888_000019C0
lbl_fn_804AE888_00001984:
    lwz r12, 0x8(r28)
    mr r3, r28
    mr r4, r27
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    stw r29, 0x0(r3)
    la r4, lbl_8087E0FC
    stw r29, 0x4(r3)
    stw r30, 0x4c(r3)
    stw r29, 0x48(r3)
    crclr 6
    addi r3, r3, 0x8
    bl fn_800DD3FC
    addi r27, r27, 0x1
lbl_fn_804AE888_000019C0:
    lwz r12, 0x8(r28)
    mr r3, r28
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    cmpw r27, r3
    blt lbl_fn_804AE888_00001984
    addi r25, r25, 0x1
    addi r26, r26, 0x4
    cmpwi r25, 0x3
    blt lbl_fn_804AE888_00001974
    li r4, -0x1
    stw r4, 0xec(r31)
    li r0, 0x0
    addi r11, r1, 0x40
    stw r4, 0xf0(r31)
    mr r3, r31
    stw r4, 0xf4(r31)
    stw r4, 0xf8(r31)
    stw r4, 0xfc(r31)
    stw r4, 0x100(r31)
    stw r4, 0x104(r31)
    stw r4, 0x108(r31)
    stw r4, 0x10c(r31)
    stw r4, 0x110(r31)
    stw r4, 0x114(r31)
    stw r4, 0x118(r31)
    stw r4, 0x11c(r31)
    stw r4, 0x120(r31)
    stw r4, 0x124(r31)
    stw r4, 0x128(r31)
    stw r4, 0x12c(r31)
    stw r4, 0x130(r31)
    stw r4, 0x134(r31)
    stw r4, 0x138(r31)
    stw r4, 0x13c(r31)
    stw r4, 0x140(r31)
    stw r4, 0x144(r31)
    stw r4, 0x148(r31)
    stw r4, 0x14c(r31)
    stw r0, 0x299c(r31)
    stw r0, 0x29a4(r31)
    stw r0, 0x29a0(r31)
    stw r0, 0x29a8(r31)
    bl _restgpr_25
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}
