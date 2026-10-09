#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void OSGetTime(void);
extern void __div2i(void);
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void fn_806809C0(void);
extern void fn_806A72E0(void);
extern void fn_806A7400(void);
extern void fn_806A76B0(void);
extern void fn_806AB920(void);
extern void fn_806AB980(void);
extern void fn_806ACCF0(void);
extern void fn_806ACE00(void);
extern void fn_806B12F0(void);
extern void fn_806B15B0(void);
extern void fn_806B1A00(void);
extern void fn_806BB6C0(void);
extern void fn_806BBCA0(void);
extern void fn_806BC010(void);
extern void fn_806BC860(void);
extern void fn_806C5C10(void);
extern void fn_806C5EB0(void);
extern void fn_806CD150(void);
extern void fn_806CDAB0(void);
extern void fn_806EAC30(void);
extern void fn_806EF8B0(void);
extern void fn_806FC900(void);

/* External data declarations */
extern u8 lbl_807BE9D0[];
extern u8 lbl_807BEAE8[];
extern u8 lbl_807C0848[];
extern u8 lbl_807C08A8[];
extern u8 lbl_807C092C[];
extern u8 lbl_807C16F0[];
extern u8 lbl_80860890[];
extern u8 lbl_80860898[];

/* Small data declarations */

/* Function declarations */
void pad_03_806C287C_text(void);
void fn_806C2880(void);
void fn_806C2F70(void);
void fn_806C3270(void);
void fn_806C3670(void);
void fn_806C3ED0(void);
void fn_806C4430(void);
void fn_806C4740(void);

asm void pad_03_806C287C_text(void)
{
    nofralloc
    opword 0x00000000
}

asm void fn_806C2880(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r3, lbl_80860898@ha
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    lwz r31, lbl_80860898@l(r3)
    lbz r0, 0x14(r31)
    cmplwi r0, 0x2
    bne lbl_fn_806C2880_000000D0
    lwz r5, 0x660(r31)
    cmpwi r5, 0x0
    beq lbl_fn_806C2880_000006DC
    lwz r0, 0x58(r31)
    cmpwi r0, 0x20
    beq lbl_fn_806C2880_000000B4
    mulli r3, r0, 0x30
    lwz r0, 0x664(r31)
    add r4, r31, r3
    stw r5, 0x60(r4)
    stw r0, 0x64(r4)
    lwz r0, 0x66c(r31)
    lwz r3, 0x668(r31)
    stw r3, 0x68(r4)
    stw r0, 0x6c(r4)
    lwz r0, 0x674(r31)
    lwz r3, 0x670(r31)
    stw r3, 0x70(r4)
    stw r0, 0x74(r4)
    lwz r0, 0x67c(r31)
    lwz r3, 0x678(r31)
    stw r3, 0x78(r4)
    stw r0, 0x7c(r4)
    lwz r0, 0x684(r31)
    lwz r3, 0x680(r31)
    stw r3, 0x80(r4)
    stw r0, 0x84(r4)
    lwz r0, 0x68c(r31)
    lwz r3, 0x688(r31)
    stw r3, 0x88(r4)
    stw r0, 0x8c(r4)
    lwz r3, 0x58(r31)
    addi r0, r3, 0x1
    stw r0, 0x58(r31)
lbl_fn_806C2880_000000B4:
    lis r3, lbl_80860898@ha
    li r4, 0x0
    lwz r3, lbl_80860898@l(r3)
    li r5, 0x30
    addi r3, r3, 0x660
    bl memset
    b lbl_fn_806C2880_000006DC
lbl_fn_806C2880_000000D0:
    lwz r4, 0x58(r31)
    cmpwi r4, 0x1
    bne lbl_fn_806C2880_00000550
    cmpwi r4, 0x20
    beq lbl_fn_806C2880_00000534
    cmpwi r4, 0x0
    ble lbl_fn_806C2880_000004C0
    cmpwi r4, 0x8
    ble lbl_fn_806C2880_0000043C
    cmpwi r4, -0x1
    li r0, 0x0
    ble lbl_fn_806C2880_00000104
    li r0, 0x1
lbl_fn_806C2880_00000104:
    cmpwi r0, 0x0
    beq lbl_fn_806C2880_0000043C
    lis r5, lbl_80860898@ha
    subi r0, r4, 0x1
    mulli r3, r4, 0x30
    lwz r5, lbl_80860898@l(r5)
    srwi r0, r0, 3
    add r3, r5, r3
    mtctr r0
    cmpwi r4, 0x8
    ble lbl_fn_806C2880_0000043C
lbl_fn_806C2880_00000130:
    lwz r0, 0x34(r3)
    lwz r5, 0x30(r3)
    stw r5, 0x60(r3)
    stw r0, 0x64(r3)
    lwz r0, 0x3c(r3)
    lwz r5, 0x38(r3)
    stw r5, 0x68(r3)
    stw r0, 0x6c(r3)
    lwz r0, 0x44(r3)
    lwz r5, 0x40(r3)
    stw r5, 0x70(r3)
    stw r0, 0x74(r3)
    lwz r0, 0x4c(r3)
    lwz r5, 0x48(r3)
    stw r5, 0x78(r3)
    stw r0, 0x7c(r3)
    lwz r0, 0x54(r3)
    lwz r5, 0x50(r3)
    stw r5, 0x80(r3)
    stw r0, 0x84(r3)
    lwz r0, 0x5c(r3)
    lwz r5, 0x58(r3)
    stw r5, 0x88(r3)
    stw r0, 0x8c(r3)
    lwz r0, 0x4(r3)
    lwz r5, 0x0(r3)
    stw r5, 0x30(r3)
    stw r0, 0x34(r3)
    lwz r0, 0xc(r3)
    lwz r5, 0x8(r3)
    stw r5, 0x38(r3)
    stw r0, 0x3c(r3)
    lwz r0, 0x14(r3)
    lwz r5, 0x10(r3)
    stw r5, 0x40(r3)
    stw r0, 0x44(r3)
    lwz r0, 0x1c(r3)
    lwz r5, 0x18(r3)
    stw r5, 0x48(r3)
    stw r0, 0x4c(r3)
    lwz r0, 0x24(r3)
    lwz r5, 0x20(r3)
    stw r5, 0x50(r3)
    stw r0, 0x54(r3)
    lwz r0, 0x2c(r3)
    lwz r5, 0x28(r3)
    stw r5, 0x58(r3)
    stw r0, 0x5c(r3)
    lwz r0, -0x2c(r3)
    lwz r5, -0x30(r3)
    stw r5, 0x0(r3)
    stw r0, 0x4(r3)
    lwz r0, -0x24(r3)
    lwz r5, -0x28(r3)
    stw r5, 0x8(r3)
    stw r0, 0xc(r3)
    lwz r0, -0x1c(r3)
    lwz r5, -0x20(r3)
    stw r5, 0x10(r3)
    stw r0, 0x14(r3)
    lwz r0, -0x14(r3)
    lwz r5, -0x18(r3)
    stw r5, 0x18(r3)
    stw r0, 0x1c(r3)
    lwz r0, -0xc(r3)
    lwz r5, -0x10(r3)
    stw r5, 0x20(r3)
    stw r0, 0x24(r3)
    lwz r0, -0x4(r3)
    lwz r5, -0x8(r3)
    stw r5, 0x28(r3)
    stw r0, 0x2c(r3)
    lwz r0, -0x5c(r3)
    lwz r5, -0x60(r3)
    stw r5, -0x30(r3)
    stw r0, -0x2c(r3)
    lwz r0, -0x54(r3)
    lwz r5, -0x58(r3)
    stw r5, -0x28(r3)
    stw r0, -0x24(r3)
    lwz r0, -0x4c(r3)
    lwz r5, -0x50(r3)
    stw r5, -0x20(r3)
    stw r0, -0x1c(r3)
    lwz r0, -0x44(r3)
    lwz r5, -0x48(r3)
    stw r5, -0x18(r3)
    stw r0, -0x14(r3)
    lwz r0, -0x3c(r3)
    lwz r5, -0x40(r3)
    stw r5, -0x10(r3)
    stw r0, -0xc(r3)
    lwz r0, -0x34(r3)
    lwz r5, -0x38(r3)
    stw r5, -0x8(r3)
    stw r0, -0x4(r3)
    lwz r0, -0x8c(r3)
    lwz r5, -0x90(r3)
    stw r5, -0x60(r3)
    stw r0, -0x5c(r3)
    lwz r0, -0x84(r3)
    lwz r5, -0x88(r3)
    stw r5, -0x58(r3)
    stw r0, -0x54(r3)
    lwz r0, -0x7c(r3)
    lwz r5, -0x80(r3)
    stw r5, -0x50(r3)
    stw r0, -0x4c(r3)
    lwz r0, -0x74(r3)
    lwz r5, -0x78(r3)
    stw r5, -0x48(r3)
    stw r0, -0x44(r3)
    lwz r0, -0x6c(r3)
    lwz r5, -0x70(r3)
    stw r5, -0x40(r3)
    stw r0, -0x3c(r3)
    lwz r0, -0x64(r3)
    lwz r5, -0x68(r3)
    stw r5, -0x38(r3)
    stw r0, -0x34(r3)
    lwz r0, -0xbc(r3)
    subi r4, r4, 0x8
    lwz r5, -0xc0(r3)
    stw r5, -0x90(r3)
    stw r0, -0x8c(r3)
    lwz r0, -0xb4(r3)
    lwz r5, -0xb8(r3)
    stw r5, -0x88(r3)
    stw r0, -0x84(r3)
    lwz r0, -0xac(r3)
    lwz r5, -0xb0(r3)
    stw r5, -0x80(r3)
    stw r0, -0x7c(r3)
    lwz r0, -0xa4(r3)
    lwz r5, -0xa8(r3)
    stw r5, -0x78(r3)
    stw r0, -0x74(r3)
    lwz r0, -0x9c(r3)
    lwz r5, -0xa0(r3)
    stw r5, -0x70(r3)
    stw r0, -0x6c(r3)
    lwz r0, -0x94(r3)
    lwz r5, -0x98(r3)
    stw r5, -0x68(r3)
    stw r0, -0x64(r3)
    lwz r0, -0xec(r3)
    lwz r5, -0xf0(r3)
    stw r5, -0xc0(r3)
    stw r0, -0xbc(r3)
    lwz r0, -0xe4(r3)
    lwz r5, -0xe8(r3)
    stw r5, -0xb8(r3)
    stw r0, -0xb4(r3)
    lwz r0, -0xdc(r3)
    lwz r5, -0xe0(r3)
    stw r5, -0xb0(r3)
    stw r0, -0xac(r3)
    lwz r0, -0xd4(r3)
    lwz r5, -0xd8(r3)
    stw r5, -0xa8(r3)
    stw r0, -0xa4(r3)
    lwz r0, -0xcc(r3)
    lwz r5, -0xd0(r3)
    stw r5, -0xa0(r3)
    stw r0, -0x9c(r3)
    lwz r0, -0xc4(r3)
    lwz r5, -0xc8(r3)
    stw r5, -0x98(r3)
    stw r0, -0x94(r3)
    lwz r0, -0x11c(r3)
    lwz r5, -0x120(r3)
    stw r5, -0xf0(r3)
    stw r0, -0xec(r3)
    lwz r0, -0x114(r3)
    lwz r5, -0x118(r3)
    stw r5, -0xe8(r3)
    stw r0, -0xe4(r3)
    lwz r0, -0x10c(r3)
    lwz r5, -0x110(r3)
    stw r5, -0xe0(r3)
    stw r0, -0xdc(r3)
    lwz r0, -0x104(r3)
    lwz r5, -0x108(r3)
    stw r5, -0xd8(r3)
    stw r0, -0xd4(r3)
    lwz r0, -0xfc(r3)
    lwz r5, -0x100(r3)
    stw r5, -0xd0(r3)
    stw r0, -0xcc(r3)
    lwz r0, -0xf4(r3)
    lwz r5, -0xf8(r3)
    stw r5, -0xc8(r3)
    stw r0, -0xc4(r3)
    subi r3, r3, 0x180
    bdnz lbl_fn_806C2880_00000130
lbl_fn_806C2880_0000043C:
    lis r3, lbl_80860898@ha
    mulli r0, r4, 0x30
    lwz r3, lbl_80860898@l(r3)
    add r5, r3, r0
    mtctr r4
    cmpwi r4, 0x0
    ble lbl_fn_806C2880_000004C0
lbl_fn_806C2880_00000458:
    lwz r0, 0x34(r5)
    lwz r3, 0x30(r5)
    stw r3, 0x60(r5)
    stw r0, 0x64(r5)
    lwz r0, 0x3c(r5)
    lwz r3, 0x38(r5)
    stw r3, 0x68(r5)
    stw r0, 0x6c(r5)
    lwz r0, 0x44(r5)
    lwz r3, 0x40(r5)
    stw r3, 0x70(r5)
    stw r0, 0x74(r5)
    lwz r0, 0x4c(r5)
    lwz r3, 0x48(r5)
    stw r3, 0x78(r5)
    stw r0, 0x7c(r5)
    lwz r0, 0x54(r5)
    lwz r3, 0x50(r5)
    stw r3, 0x80(r5)
    stw r0, 0x84(r5)
    lwz r0, 0x5c(r5)
    lwz r3, 0x58(r5)
    stw r3, 0x88(r5)
    stw r0, 0x8c(r5)
    subi r5, r5, 0x30
    bdnz lbl_fn_806C2880_00000458
lbl_fn_806C2880_000004C0:
    lis r3, lbl_80860898@ha
    lwz r0, 0x664(r31)
    lwz r4, lbl_80860898@l(r3)
    lwz r3, 0x660(r31)
    stw r3, 0x60(r4)
    stw r0, 0x64(r4)
    lwz r0, 0x66c(r31)
    lwz r3, 0x668(r31)
    stw r3, 0x68(r4)
    stw r0, 0x6c(r4)
    lwz r0, 0x674(r31)
    lwz r3, 0x670(r31)
    stw r3, 0x70(r4)
    stw r0, 0x74(r4)
    lwz r0, 0x67c(r31)
    lwz r3, 0x678(r31)
    stw r3, 0x78(r4)
    stw r0, 0x7c(r4)
    lwz r0, 0x684(r31)
    lwz r3, 0x680(r31)
    stw r3, 0x80(r4)
    stw r0, 0x84(r4)
    lwz r0, 0x68c(r31)
    lwz r3, 0x688(r31)
    stw r3, 0x88(r4)
    stw r0, 0x8c(r4)
    lwz r3, 0x58(r4)
    addi r0, r3, 0x1
    stw r0, 0x58(r4)
lbl_fn_806C2880_00000534:
    lis r3, lbl_80860898@ha
    li r4, 0x0
    lwz r3, lbl_80860898@l(r3)
    li r5, 0x30
    addi r3, r3, 0x660
    bl memset
    b lbl_fn_806C2880_000006DC
lbl_fn_806C2880_00000550:
    lwz r6, 0x690(r31)
    cmpwi r6, 0x0
    beq lbl_fn_806C2880_000006DC
    mr r5, r31
    li r3, 0x0
    mtctr r4
    cmpwi r4, 0x0
    ble lbl_fn_806C2880_0000059C
    nop
lbl_fn_806C2880_00000574:
    lwz r0, 0x60(r5)
    cmpw r6, r0
    bne lbl_fn_806C2880_00000590
    mulli r0, r3, 0x30
    add r3, r31, r0
    addi r30, r3, 0x60
    b lbl_fn_806C2880_000005A0
lbl_fn_806C2880_00000590:
    addi r5, r5, 0x30
    addi r3, r3, 0x1
    bdnz lbl_fn_806C2880_00000574
lbl_fn_806C2880_0000059C:
    li r30, 0x0
lbl_fn_806C2880_000005A0:
    cmpwi r30, 0x0
    beq lbl_fn_806C2880_000005CC
    lis r4, lbl_807C0848@ha
    lwz r5, 0x0(r30)
    lbz r6, 0x16(r30)
    addi r4, r4, lbl_807C0848@l
    li r3, 0x4
    crclr 6
    bl fn_806A76B0
    lbz r3, 0x16(r30)
    bl fn_806B1A00
lbl_fn_806C2880_000005CC:
    lis r3, lbl_80860898@ha
    lbz r4, 0x6a6(r31)
    lwz r6, lbl_80860898@l(r3)
    li r3, 0x0
    lwz r0, 0x58(r6)
    mr r5, r6
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_806C2880_0000061C
    nop
lbl_fn_806C2880_000005F4:
    lbz r0, 0x76(r5)
    cmplw r4, r0
    bne lbl_fn_806C2880_00000610
    mulli r0, r3, 0x30
    add r3, r6, r0
    addi r30, r3, 0x60
    b lbl_fn_806C2880_00000620
lbl_fn_806C2880_00000610:
    addi r5, r5, 0x30
    addi r3, r3, 0x1
    bdnz lbl_fn_806C2880_000005F4
lbl_fn_806C2880_0000061C:
    li r30, 0x0
lbl_fn_806C2880_00000620:
    cmpwi r30, 0x0
    beq lbl_fn_806C2880_0000064C
    lis r4, lbl_807C0848@ha
    lwz r5, 0x0(r30)
    lbz r6, 0x16(r30)
    addi r4, r4, lbl_807C0848@l
    li r3, 0x4
    crclr 6
    bl fn_806A76B0
    lbz r3, 0x16(r30)
    bl fn_806B1A00
lbl_fn_806C2880_0000064C:
    lis r3, lbl_80860898@ha
    lwz r5, lbl_80860898@l(r3)
    lwz r0, 0x58(r5)
    cmpwi r0, 0x20
    beq lbl_fn_806C2880_000006D4
    mulli r4, r0, 0x30
    lwz r0, 0x694(r31)
    lwz r3, 0x690(r31)
    add r4, r5, r4
    stw r3, 0x60(r4)
    stw r0, 0x64(r4)
    lwz r0, 0x69c(r31)
    lwz r3, 0x698(r31)
    stw r3, 0x68(r4)
    stw r0, 0x6c(r4)
    lwz r0, 0x6a4(r31)
    lwz r3, 0x6a0(r31)
    stw r3, 0x70(r4)
    stw r0, 0x74(r4)
    lwz r0, 0x6ac(r31)
    lwz r3, 0x6a8(r31)
    stw r3, 0x78(r4)
    stw r0, 0x7c(r4)
    lwz r0, 0x6b4(r31)
    lwz r3, 0x6b0(r31)
    stw r3, 0x80(r4)
    stw r0, 0x84(r4)
    lwz r0, 0x6bc(r31)
    lwz r3, 0x6b8(r31)
    stw r3, 0x88(r4)
    stw r0, 0x8c(r4)
    lwz r3, 0x58(r5)
    addi r0, r3, 0x1
    stw r0, 0x58(r5)
lbl_fn_806C2880_000006D4:
    li r0, 0x0
    stw r0, 0x690(r31)
lbl_fn_806C2880_000006DC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806C2F70(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    lis r27, lbl_80860898@ha
    lis r31, lbl_807BE9D0@ha
    lwz r3, lbl_80860898@l(r27)
    addi r31, r31, lbl_807BE9D0@l
    li r30, 0x0
    lwz r0, 0x6c0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806C2F70_00000734
    lwz r0, 0x6c4(r3)
    cmpwi r0, 0xf
    bne lbl_fn_806C2F70_00000824
lbl_fn_806C2F70_00000734:
    li r0, 0x0
    stb r0, 0x18(r3)
    lis r4, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r4)
    stw r0, 0x700(r3)
    lwz r3, lbl_80860898@l(r4)
    lwz r29, 0x744(r3)
    cmpwi r29, 0x1
    beq lbl_fn_806C2F70_000007F8
    lis r28, lbl_80860890@ha
    addi r27, r28, lbl_80860890@l
    lwz r30, lbl_80860890@l(r28)
    lwz r26, 0x4(r27)
    bl OSGetTime
    stw r4, 0x4(r27)
    lis r27, 0x1062
    lis r6, 0x8000
    subfc r4, r26, r4
    stw r3, lbl_80860890@l(r28)
    addi r7, r27, 0x4dd3
    subfe r3, r30, r3
    li r5, 0x0
    lwz r0, 0xf8(r6)
    srwi r0, r0, 2
    mulhwu r0, r7, r0
    srwi r6, r0, 6
    bl __div2i
    addi r0, r27, 0x4dd3
    lis r3, lbl_807C16F0@ha
    mulhw r6, r0, r4
    lis r5, 0x51ec
    addi r3, r3, lbl_807C16F0@l
    slwi r0, r29, 2
    lwz r8, 0x4(r3)
    subi r9, r5, 0x7ae1
    lwzx r5, r3, r0
    srawi r6, r6, 6
    srwi r0, r6, 31
    li r3, 0x1
    add r6, r6, r0
    subf r7, r6, r4
    addi r4, r31, 0x118
    addi r0, r7, 0x32
    mulhw r0, r9, r0
    srawi r0, r0, 5
    srwi r7, r0, 31
    add r7, r0, r7
    crclr 6
    bl fn_806A76B0
lbl_fn_806C2F70_000007F8:
    lis r3, lbl_80860898@ha
    li r0, 0x1
    lwz r3, lbl_80860898@l(r3)
    stw r0, 0x744(r3)
    bl fn_806CD150
    addi r4, r31, 0x1e38
    li r3, 0x40
    crclr 6
    bl fn_806A76B0
    li r3, 0x0
    b lbl_fn_806C2F70_000009D4
lbl_fn_806C2F70_00000824:
    addi r4, r31, 0x1eac
    li r3, 0x40
    crclr 6
    bl fn_806A76B0
    lwz r3, lbl_80860898@l(r27)
    li r0, 0x0
    stb r0, 0x18(r3)
    lwz r3, lbl_80860898@l(r27)
    stw r0, 0x700(r3)
    lwz r5, lbl_80860898@l(r27)
    lbz r0, 0xd(r5)
    cmpwi r0, 0x0
    bne lbl_fn_806C2F70_00000874
    lwz r0, 0x58(r5)
    cmpwi r0, 0x1
    bne lbl_fn_806C2F70_00000874
    bl OSGetTime
    lwz r5, lbl_80860898@l(r27)
    stw r4, 0x8d4(r5)
    stw r3, 0x8d0(r5)
lbl_fn_806C2F70_00000874:
    lwz r3, 0x10(r5)
    bl fn_806EF8B0
    lis r3, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r3)
    lbz r0, 0x14(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806C2F70_00000898
    lwz r0, 0x660(r3)
    stw r0, 0x7b0(r3)
lbl_fn_806C2F70_00000898:
    lis r3, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r3)
    lwz r27, 0x744(r3)
    cmpwi r27, 0x13
    beq lbl_fn_806C2F70_0000094C
    lis r28, lbl_80860890@ha
    addi r29, r28, lbl_80860890@l
    lwz r26, lbl_80860890@l(r28)
    lwz r25, 0x4(r29)
    bl OSGetTime
    stw r4, 0x4(r29)
    lis r29, 0x1062
    lis r6, 0x8000
    subfc r4, r25, r4
    stw r3, lbl_80860890@l(r28)
    addi r7, r29, 0x4dd3
    subfe r3, r26, r3
    li r5, 0x0
    lwz r0, 0xf8(r6)
    srwi r0, r0, 2
    mulhwu r0, r7, r0
    srwi r6, r0, 6
    bl __div2i
    addi r0, r29, 0x4dd3
    lis r3, lbl_807C16F0@ha
    mulhw r6, r0, r4
    lis r5, 0x51ec
    addi r3, r3, lbl_807C16F0@l
    slwi r0, r27, 2
    lwz r8, 0x4c(r3)
    subi r9, r5, 0x7ae1
    lwzx r5, r3, r0
    srawi r6, r6, 6
    srwi r0, r6, 31
    li r3, 0x1
    add r6, r6, r0
    subf r7, r6, r4
    addi r4, r31, 0x118
    addi r0, r7, 0x32
    mulhw r0, r9, r0
    srawi r0, r0, 5
    srwi r7, r0, 31
    add r7, r0, r7
    crclr 6
    bl fn_806A76B0
lbl_fn_806C2F70_0000094C:
    lis r31, lbl_80860898@ha
    li r4, 0x13
    lwz r3, lbl_80860898@l(r31)
    li r0, 0x0
    li r26, 0x1
    li r25, 0x30
    stw r4, 0x744(r3)
    lwz r3, lbl_80860898@l(r31)
    stw r0, 0x780(r3)
    b lbl_fn_806C2F70_000009A0
lbl_fn_806C2F70_00000974:
    cmpw r26, r0
    bge lbl_fn_806C2F70_00000988
    add r3, r3, r25
    addi r3, r3, 0x60
    b lbl_fn_806C2F70_0000098C
lbl_fn_806C2F70_00000988:
    li r3, 0x0
lbl_fn_806C2F70_0000098C:
    lbz r3, 0x16(r3)
    li r4, 0x2
    bl fn_806C4740
    addi r25, r25, 0x30
    addi r26, r26, 0x1
lbl_fn_806C2F70_000009A0:
    lwz r3, lbl_80860898@l(r31)
    lwz r0, 0x58(r3)
    cmpw r26, r0
    blt lbl_fn_806C2F70_00000974
    lbz r3, 0x676(r3)
    li r4, 0x2
    bl fn_806C4740
    lwz r3, lbl_80860898@l(r31)
    lbz r0, 0x14(r3)
    cmplwi r0, 0x2
    beq lbl_fn_806C2F70_000009D0
    li r30, 0x1
lbl_fn_806C2F70_000009D0:
    mr r3, r30
lbl_fn_806C2F70_000009D4:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806C3270(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    addi r11, r1, 0x90
    bl _savegpr_26
    lis r30, lbl_80860898@ha
    lwz r27, lbl_80860898@l(r30)
    lwz r3, 0x58(r27)
    lbz r26, 0x748(r27)
    subi r0, r3, 0x1
    lwz r29, 0x660(r27)
    lwz r28, 0x664(r27)
    cmpw r26, r0
    lwz r12, 0x668(r27)
    lwz r11, 0x66c(r27)
    lwz r10, 0x670(r27)
    lwz r9, 0x674(r27)
    lwz r8, 0x678(r27)
    lwz r7, 0x67c(r27)
    lwz r6, 0x680(r27)
    lwz r5, 0x684(r27)
    lwz r4, 0x688(r27)
    lwz r3, 0x68c(r27)
    stw r29, 0x8(r1)
    stw r28, 0xc(r1)
    stw r12, 0x10(r1)
    stw r11, 0x14(r1)
    stw r10, 0x18(r1)
    stw r9, 0x1c(r1)
    stw r8, 0x20(r1)
    stw r7, 0x24(r1)
    stw r6, 0x28(r1)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r3, 0x34(r1)
    bge lbl_fn_806C3270_00000CA0
    subf r0, r26, r0
    lis r4, lbl_807C08A8@ha
    clrlwi r31, r0, 24
    li r3, 0x40
    mr r5, r31
    addi r4, r4, lbl_807C08A8@l
    crclr 6
    bl fn_806A76B0
    lwz r3, lbl_80860898@l(r30)
    lwz r28, 0x744(r3)
    cmpwi r28, 0x10
    beq lbl_fn_806C3270_00000B58
    lis r29, lbl_80860890@ha
    addi r30, r29, lbl_80860890@l
    lwz r27, lbl_80860890@l(r29)
    lwz r26, 0x4(r30)
    bl OSGetTime
    stw r4, 0x4(r30)
    lis r30, 0x1062
    lis r6, 0x8000
    subfc r4, r26, r4
    stw r3, lbl_80860890@l(r29)
    addi r7, r30, 0x4dd3
    subfe r3, r27, r3
    li r5, 0x0
    lwz r0, 0xf8(r6)
    srwi r0, r0, 2
    mulhwu r0, r7, r0
    srwi r6, r0, 6
    bl __div2i
    addi r0, r30, 0x4dd3
    lis r3, lbl_807C16F0@ha
    mulhw r6, r0, r4
    lis r5, 0x51ec
    addi r3, r3, lbl_807C16F0@l
    slwi r0, r28, 2
    lwz r8, 0x40(r3)
    subi r9, r5, 0x7ae1
    lwzx r5, r3, r0
    srawi r6, r6, 6
    srwi r0, r6, 31
    lis r3, lbl_807BEAE8@ha
    add r6, r6, r0
    subf r7, r6, r4
    addi r4, r3, lbl_807BEAE8@l
    addi r0, r7, 0x32
    li r3, 0x1
    mulhw r0, r9, r0
    srawi r0, r0, 5
    srwi r7, r0, 31
    add r7, r0, r7
    crclr 6
    bl fn_806A76B0
lbl_fn_806C3270_00000B58:
    lis r4, lbl_80860898@ha
    li r0, 0x10
    lwz r3, lbl_80860898@l(r4)
    stw r0, 0x744(r3)
    lwz r4, lbl_80860898@l(r4)
    lwz r0, 0x58(r4)
    cmpw r31, r0
    bge lbl_fn_806C3270_00000B88
    mulli r0, r31, 0x30
    add r3, r4, r0
    addi r3, r3, 0x60
    b lbl_fn_806C3270_00000B8C
lbl_fn_806C3270_00000B88:
    li r3, 0x0
lbl_fn_806C3270_00000B8C:
    lwz r9, 0x0(r3)
    clrlslwi r5, r31, 24, 8
    clrrwi r0, r5, 24
    addi r7, r1, 0x38
    or r0, r5, r0
    rlwinm r8, r9, 24, 8, 15
    extlwi r6, r9, 8, 8
    srwi r5, r0, 16
    slwi r0, r0, 16
    or r0, r5, r0
    rlwimi r8, r9, 24, 24, 31
    rlwimi r6, r9, 8, 16, 23
    stw r0, 0x3c(r1)
    or r6, r8, r6
    rotlwi r6, r6, 16
    stw r6, 0x38(r1)
    lbz r0, 0x16(r3)
    extrwi r8, r0, 8, 16
    rlwinm r6, r0, 24, 8, 15
    clrlslwi r5, r0, 24, 8
    extlwi r0, r0, 8, 8
    or r6, r8, r6
    or r0, r5, r0
    or r0, r6, r0
    srwi r5, r0, 16
    slwi r0, r0, 16
    or r0, r5, r0
    stw r0, 0x40(r1)
    lwz r0, 0x4(r3)
    stw r0, 0x44(r1)
    lhz r0, 0xc(r3)
    extrwi r8, r0, 8, 16
    rlwinm r6, r0, 24, 8, 15
    clrlslwi r5, r0, 24, 8
    extlwi r0, r0, 8, 8
    or r6, r8, r6
    or r0, r5, r0
    or r0, r6, r0
    srwi r5, r0, 16
    slwi r0, r0, 16
    or r0, r5, r0
    stw r0, 0x48(r1)
    lwz r0, 0x8(r3)
    stw r0, 0x4c(r1)
    lhz r0, 0xe(r3)
    extrwi r8, r0, 8, 16
    rlwinm r6, r0, 24, 8, 15
    clrlslwi r5, r0, 24, 8
    extlwi r0, r0, 8, 8
    or r6, r8, r6
    or r0, r5, r0
    or r0, r6, r0
    srwi r5, r0, 16
    slwi r0, r0, 16
    or r0, r5, r0
    stw r0, 0x50(r1)
    lbz r0, 0x17(r3)
    extrwi r8, r0, 8, 16
    rlwinm r6, r0, 24, 8, 15
    clrlslwi r5, r0, 24, 8
    extlwi r0, r0, 8, 8
    or r6, r8, r6
    or r0, r5, r0
    or r0, r6, r0
    rotlwi r0, r0, 16
    stw r0, 0x54(r1)
    lwz r0, 0x28(r3)
    stw r0, 0x58(r1)
    b lbl_fn_806C3270_00000CB0
lbl_fn_806C3270_00000CA0:
    li r0, 0x0
    stb r0, 0x748(r27)
    bl fn_806C2F70
    b lbl_fn_806C3270_00000DDC
lbl_fn_806C3270_00000CB0:
    lwz r0, 0x744(r4)
    cmpwi r0, 0x13
    beq lbl_fn_806C3270_00000DD8
    lwz r4, 0x8(r1)
    li r3, 0x8
    lwz r5, 0xc(r1)
    li r8, 0x9
    lhz r6, 0x14(r1)
    bl fn_806BC860
    lis r4, lbl_80860898@ha
    lwz r4, lbl_80860898@l(r4)
    lbz r0, 0x15(r4)
    cmpwi r0, 0x0
    bne lbl_fn_806C3270_00000CF0
    bl fn_806C5EB0
    b lbl_fn_806C3270_00000CF4
lbl_fn_806C3270_00000CF0:
    bl fn_806C5C10
lbl_fn_806C3270_00000CF4:
    cmpwi r3, 0x0
    beq lbl_fn_806C3270_00000D04
    li r3, 0x0
    b lbl_fn_806C3270_00000DDC
lbl_fn_806C3270_00000D04:
    lis r3, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r3)
    lwz r0, 0x58(r3)
    cmpw r31, r0
    bge lbl_fn_806C3270_00000D28
    mulli r0, r31, 0x30
    add r3, r3, r0
    addi r9, r3, 0x60
    b lbl_fn_806C3270_00000D2C
lbl_fn_806C3270_00000D28:
    li r9, 0x0
lbl_fn_806C3270_00000D2C:
    lbz r0, 0x1e(r1)
    addi r7, r1, 0x38
    lwz r10, 0x8(r1)
    extrwi r5, r0, 8, 16
    rlwinm r4, r0, 24, 8, 15
    clrlslwi r3, r0, 24, 8
    extlwi r0, r0, 8, 8
    or r0, r3, r0
    or r4, r5, r4
    rlwinm r8, r10, 24, 8, 15
    extlwi r6, r10, 8, 8
    or r0, r4, r0
    li r3, 0xa
    srwi r4, r0, 16
    rlwimi r8, r10, 24, 24, 31
    rlwimi r6, r10, 8, 16, 23
    slwi r0, r0, 16
    or r5, r8, r6
    li r8, 0x2
    rotlwi r5, r5, 16
    or r0, r4, r0
    stw r5, 0x38(r1)
    stw r0, 0x3c(r1)
    lwz r4, 0x0(r9)
    lwz r5, 0x4(r9)
    lhz r6, 0xc(r9)
    bl fn_806BC860
    lis r4, lbl_80860898@ha
    lwz r4, lbl_80860898@l(r4)
    lbz r0, 0x15(r4)
    cmpwi r0, 0x0
    bne lbl_fn_806C3270_00000DB4
    bl fn_806C5EB0
    b lbl_fn_806C3270_00000DB8
lbl_fn_806C3270_00000DB4:
    bl fn_806C5C10
lbl_fn_806C3270_00000DB8:
    cmpwi r3, 0x0
    beq lbl_fn_806C3270_00000DC8
    li r3, 0x0
    b lbl_fn_806C3270_00000DDC
lbl_fn_806C3270_00000DC8:
    lis r3, lbl_80860898@ha
    li r0, 0x0
    lwz r3, lbl_80860898@l(r3)
    stb r0, 0x809(r3)
lbl_fn_806C3270_00000DD8:
    li r3, 0x0
lbl_fn_806C3270_00000DDC:
    addi r11, r1, 0x90
    bl _restgpr_26
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_806C3670(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    addi r11, r1, 0xc0
    bl _savegpr_27
    lis r29, lbl_80860898@ha
    lis r31, lbl_807BE9D0@ha
    lwz r6, lbl_80860898@l(r29)
    addi r31, r31, lbl_807BE9D0@l
    addi r4, r31, 0x1f00
    li r3, 0x4
    lwz r5, 0x744(r6)
    lwz r6, 0x58(r6)
    crclr 6
    bl fn_806A76B0
    lwz r3, lbl_80860898@l(r29)
    li r28, 0x0
    stw r28, 0x7b0(r3)
    lwz r3, lbl_80860898@l(r29)
    lwz r0, 0x744(r3)
    cmpwi r0, 0x16
    bne lbl_fn_806C3670_00001020
    lbz r6, 0x17(r3)
    addi r3, r1, 0x24
    addi r5, r31, 0x5c
    li r4, 0xc
    addi r6, r6, 0x1
    crclr 6
    bl fn_806809C0
    addi r3, r31, 0x60
    addi r4, r1, 0x24
    addi r5, r1, 0x80
    li r6, 0x2f
    bl fn_806AB920
    lwz r3, lbl_80860898@l(r29)
    lbz r0, 0x15(r3)
    lwz r6, 0x58(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806C3670_00000E9C
    cmpwi r6, 0x0
    bne lbl_fn_806C3670_00000E9C
    li r6, 0x1
lbl_fn_806C3670_00000E9C:
    addi r3, r1, 0x24
    addi r5, r31, 0x5c
    li r4, 0xc
    crclr 6
    bl fn_806809C0
    addi r3, r31, 0x64
    addi r4, r1, 0x24
    addi r5, r1, 0x80
    li r6, 0x2f
    bl fn_806AB980
    addi r3, r1, 0x24
    addi r5, r31, 0x5c
    li r4, 0xc
    li r6, 0x5a
    crclr 6
    bl fn_806809C0
    addi r3, r31, 0x68
    addi r4, r1, 0x24
    addi r5, r1, 0x80
    li r6, 0x2f
    bl fn_806AB980
    lis r28, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r28)
    lwz r0, 0x908(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806C3670_00000F0C
    li r4, 0x0
    b lbl_fn_806C3670_00000F58
lbl_fn_806C3670_00000F0C:
    bl fn_806B12F0
    cmpwi r3, 0x0
    beq lbl_fn_806C3670_00000F54
    lwz r3, lbl_80860898@l(r28)
    lbz r0, 0x15(r3)
    cmplwi r0, 0x1
    beq lbl_fn_806C3670_00000F40
    lbz r0, 0x15(r3)
    cmplwi r0, 0x3
    beq lbl_fn_806C3670_00000F40
    lbz r0, 0x15(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806C3670_00000F54
lbl_fn_806C3670_00000F40:
    lwz r0, 0x8f4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806C3670_00000F54
    li r4, 0x1
    b lbl_fn_806C3670_00000F58
lbl_fn_806C3670_00000F54:
    li r4, 0x0
lbl_fn_806C3670_00000F58:
    neg r0, r4
    addi r3, r1, 0x24
    or r0, r0, r4
    addi r5, r31, 0x5c
    srwi r6, r0, 31
    li r4, 0xc
    crclr 6
    bl fn_806809C0
    addi r3, r31, 0x6c
    addi r4, r1, 0x24
    addi r5, r1, 0x80
    li r6, 0x2f
    bl fn_806AB980
    addi r4, r1, 0x80
    li r3, 0x1
    li r5, 0x0
    bl fn_806ACE00
    bl fn_806C5C10
    cmpwi r3, 0x0
    bne lbl_fn_806C3670_00001634
    bl fn_806BBCA0
    lis r3, lbl_80860898@ha
    lwz r29, lbl_80860898@l(r3)
    lwz r4, 0x7b0(r29)
    cmpwi r4, 0x0
    beq lbl_fn_806C3670_00000FC8
    li r27, 0x1
    b lbl_fn_806C3670_00000FD8
lbl_fn_806C3670_00000FC8:
    lbz r3, 0x14(r29)
    subi r0, r3, 0x2
    cntlzw r0, r0
    srwi r27, r0, 5
lbl_fn_806C3670_00000FD8:
    cntlzw r0, r4
    lwz r3, 0x7b0(r29)
    srwi r28, r0, 5
    bl fn_806ACCF0
    lwz r12, 0x8a0(r29)
    mr r7, r3
    mr r5, r28
    mr r6, r27
    lwz r8, 0x8a4(r29)
    li r3, 0x0
    li r4, 0x1
    mtctr r12
    bctrl
    lis r3, lbl_80860898@ha
    li r0, 0x0
    lwz r3, lbl_80860898@l(r3)
    stb r0, 0x752(r3)
    b lbl_fn_806C3670_00001634
lbl_fn_806C3670_00001020:
    bl fn_806B15B0
    lwz r4, lbl_80860898@l(r29)
    li r0, 0x1
    neg r5, r3
    stb r0, 0x752(r4)
    or r0, r5, r3
    srwi r30, r0, 31
    lwz r3, lbl_80860898@l(r29)
    lbz r0, 0x14(r3)
    cmplwi r0, 0x3
    bne lbl_fn_806C3670_000012D0
    lwz r3, 0x740(r3)
    cmpwi r3, 0x0
    beq lbl_fn_806C3670_00001064
    bl fn_806FC900
    lwz r3, lbl_80860898@l(r29)
    stw r28, 0x740(r3)
lbl_fn_806C3670_00001064:
    lis r28, lbl_80860898@ha
    cmpwi r30, 0x0
    lwz r3, lbl_80860898@l(r28)
    li r0, 0x1
    stb r0, 0x752(r3)
    beq lbl_fn_806C3670_00001090
    lwz r3, lbl_80860898@l(r28)
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    bl fn_806EAC30
    b lbl_fn_806C3670_000010F4
lbl_fn_806C3670_00001090:
    lwz r3, lbl_80860898@l(r28)
    lwz r4, 0x660(r3)
    cmpwi r4, 0x0
    bne lbl_fn_806C3670_000010A8
    li r3, 0x0
    b lbl_fn_806C3670_000010CC
lbl_fn_806C3670_000010A8:
    lwz r5, 0x664(r3)
    li r7, 0x0
    lhz r6, 0x66c(r3)
    li r3, 0x5
    li r8, 0x0
    bl fn_806BC860
    lwz r4, lbl_80860898@l(r28)
    li r0, 0x0
    stw r0, 0x7ac(r4)
lbl_fn_806C3670_000010CC:
    lis r4, lbl_80860898@ha
    lwz r4, lbl_80860898@l(r4)
    lbz r0, 0x15(r4)
    cmpwi r0, 0x0
    bne lbl_fn_806C3670_000010E8
    bl fn_806C5EB0
    b lbl_fn_806C3670_000010EC
lbl_fn_806C3670_000010E8:
    bl fn_806C5C10
lbl_fn_806C3670_000010EC:
    cmpwi r3, 0x0
    bne lbl_fn_806C3670_00001634
lbl_fn_806C3670_000010F4:
    lis r28, lbl_80860898@ha
    addi r3, r1, 0x18
    lwz r6, lbl_80860898@l(r28)
    addi r5, r31, 0x5c
    li r4, 0xc
    lbz r6, 0x17(r6)
    addi r6, r6, 0x1
    crclr 6
    bl fn_806809C0
    addi r3, r31, 0x60
    addi r4, r1, 0x18
    addi r5, r1, 0x58
    li r6, 0x2f
    bl fn_806AB920
    lwz r3, lbl_80860898@l(r28)
    lbz r0, 0x15(r3)
    lwz r6, 0x58(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806C3670_0000114C
    cmpwi r6, 0x0
    bne lbl_fn_806C3670_0000114C
    li r6, 0x1
lbl_fn_806C3670_0000114C:
    addi r3, r1, 0x18
    addi r5, r31, 0x5c
    li r4, 0xc
    crclr 6
    bl fn_806809C0
    addi r3, r31, 0x64
    addi r4, r1, 0x18
    addi r5, r1, 0x58
    li r6, 0x2f
    bl fn_806AB980
    addi r3, r1, 0x18
    addi r5, r31, 0x5c
    li r4, 0xc
    li r6, 0x5a
    crclr 6
    bl fn_806809C0
    addi r3, r31, 0x68
    addi r4, r1, 0x18
    addi r5, r1, 0x58
    li r6, 0x2f
    bl fn_806AB980
    lis r28, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r28)
    lwz r0, 0x908(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806C3670_000011BC
    li r4, 0x0
    b lbl_fn_806C3670_00001208
lbl_fn_806C3670_000011BC:
    bl fn_806B12F0
    cmpwi r3, 0x0
    beq lbl_fn_806C3670_00001204
    lwz r3, lbl_80860898@l(r28)
    lbz r0, 0x15(r3)
    cmplwi r0, 0x1
    beq lbl_fn_806C3670_000011F0
    lbz r0, 0x15(r3)
    cmplwi r0, 0x3
    beq lbl_fn_806C3670_000011F0
    lbz r0, 0x15(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806C3670_00001204
lbl_fn_806C3670_000011F0:
    lwz r0, 0x8f4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806C3670_00001204
    li r4, 0x1
    b lbl_fn_806C3670_00001208
lbl_fn_806C3670_00001204:
    li r4, 0x0
lbl_fn_806C3670_00001208:
    neg r0, r4
    addi r3, r1, 0x18
    or r0, r0, r4
    addi r5, r31, 0x5c
    srwi r6, r0, 31
    li r4, 0xc
    crclr 6
    bl fn_806809C0
    addi r3, r31, 0x6c
    addi r4, r1, 0x18
    addi r5, r1, 0x58
    li r6, 0x2f
    bl fn_806AB980
    addi r4, r1, 0x58
    li r3, 0x1
    li r5, 0x0
    bl fn_806ACE00
    bl fn_806C5C10
    cmpwi r3, 0x0
    bne lbl_fn_806C3670_00001634
    bl fn_806BBCA0
    lis r3, lbl_80860898@ha
    lwz r29, lbl_80860898@l(r3)
    lwz r4, 0x7b0(r29)
    cmpwi r4, 0x0
    beq lbl_fn_806C3670_00001278
    li r27, 0x1
    b lbl_fn_806C3670_00001288
lbl_fn_806C3670_00001278:
    lbz r3, 0x14(r29)
    subi r0, r3, 0x2
    cntlzw r0, r0
    srwi r27, r0, 5
lbl_fn_806C3670_00001288:
    cntlzw r0, r4
    lwz r3, 0x7b0(r29)
    srwi r28, r0, 5
    bl fn_806ACCF0
    lwz r12, 0x8a0(r29)
    mr r7, r3
    mr r5, r28
    mr r6, r27
    lwz r8, 0x8a4(r29)
    li r3, 0x0
    li r4, 0x1
    mtctr r12
    bctrl
    lis r3, lbl_80860898@ha
    li r0, 0x0
    lwz r3, lbl_80860898@l(r3)
    stb r0, 0x752(r3)
    b lbl_fn_806C3670_00001634
lbl_fn_806C3670_000012D0:
    lwz r3, 0x744(r3)
    subi r0, r3, 0x3
    cmplwi r0, 0x3
    ble lbl_fn_806C3670_000012EC
    subi r0, r3, 0xe
    cmplwi r0, 0x1
    bgt lbl_fn_806C3670_00001410
lbl_fn_806C3670_000012EC:
    lis r28, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r28)
    lwz r0, 0x7ac(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806C3670_00001360
    lwz r4, 0x660(r3)
    cmpwi r4, 0x0
    bne lbl_fn_806C3670_00001314
    li r3, 0x0
    b lbl_fn_806C3670_00001338
lbl_fn_806C3670_00001314:
    lwz r5, 0x664(r3)
    li r7, 0x0
    lhz r6, 0x66c(r3)
    li r3, 0x5
    li r8, 0x0
    bl fn_806BC860
    lwz r4, lbl_80860898@l(r28)
    li r0, 0x0
    stw r0, 0x7ac(r4)
lbl_fn_806C3670_00001338:
    lis r4, lbl_80860898@ha
    lwz r4, lbl_80860898@l(r4)
    lbz r0, 0x15(r4)
    cmpwi r0, 0x0
    bne lbl_fn_806C3670_00001354
    bl fn_806C5EB0
    b lbl_fn_806C3670_00001358
lbl_fn_806C3670_00001354:
    bl fn_806C5C10
lbl_fn_806C3670_00001358:
    cmpwi r3, 0x0
    bne lbl_fn_806C3670_00001634
lbl_fn_806C3670_00001360:
    lis r29, lbl_80860898@ha
    li r28, 0x0
    stw r28, 0x8(r1)
    li r27, 0x0
    lwz r6, lbl_80860898@l(r29)
    lbz r0, 0x18(r6)
    cmpwi r0, 0x0
    beq lbl_fn_806C3670_000013E0
    lwz r0, 0x700(r6)
    cmpwi r0, 0x0
    beq lbl_fn_806C3670_000013E0
    lwz r3, 0x700(r6)
    lwz r0, 0x7a8(r6)
    cmpw r3, r0
    beq lbl_fn_806C3670_000013E0
    lwz r4, 0x700(r6)
    addi r7, r1, 0x8
    lwz r5, 0x664(r6)
    li r3, 0xc
    lhz r6, 0x66c(r6)
    li r8, 0x1
    bl fn_806BC860
    lwz r4, lbl_80860898@l(r29)
    mr r27, r3
    li r5, 0x30
    stb r28, 0x18(r4)
    li r4, 0x0
    lwz r3, lbl_80860898@l(r29)
    stw r28, 0x700(r3)
    lwz r3, lbl_80860898@l(r29)
    addi r3, r3, 0x660
    bl memset
lbl_fn_806C3670_000013E0:
    lis r3, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r3)
    lbz r0, 0x15(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806C3670_00001400
    mr r3, r27
    bl fn_806C5EB0
    b lbl_fn_806C3670_00001408
lbl_fn_806C3670_00001400:
    mr r3, r27
    bl fn_806C5C10
lbl_fn_806C3670_00001408:
    cmpwi r3, 0x0
    bne lbl_fn_806C3670_00001634
lbl_fn_806C3670_00001410:
    lis r29, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r29)
    lwz r3, 0x740(r3)
    cmpwi r3, 0x0
    beq lbl_fn_806C3670_00001434
    bl fn_806FC900
    lwz r3, lbl_80860898@l(r29)
    li r0, 0x0
    stw r0, 0x740(r3)
lbl_fn_806C3670_00001434:
    cmpwi r30, 0x0
    beq lbl_fn_806C3670_0000145C
    lis r4, lbl_80860898@ha
    li r0, 0x1
    lwz r3, lbl_80860898@l(r4)
    stb r0, 0x752(r3)
    lwz r3, lbl_80860898@l(r4)
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    bl fn_806EAC30
lbl_fn_806C3670_0000145C:
    lis r30, lbl_80860898@ha
    addi r3, r1, 0xc
    lwz r6, lbl_80860898@l(r30)
    addi r5, r31, 0x5c
    li r4, 0xc
    lbz r6, 0x17(r6)
    addi r6, r6, 0x1
    crclr 6
    bl fn_806809C0
    addi r3, r31, 0x60
    addi r4, r1, 0xc
    addi r5, r1, 0x30
    li r6, 0x2f
    bl fn_806AB920
    lwz r3, lbl_80860898@l(r30)
    lbz r0, 0x15(r3)
    lwz r6, 0x58(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806C3670_000014B4
    cmpwi r6, 0x0
    bne lbl_fn_806C3670_000014B4
    li r6, 0x1
lbl_fn_806C3670_000014B4:
    addi r3, r1, 0xc
    addi r5, r31, 0x5c
    li r4, 0xc
    crclr 6
    bl fn_806809C0
    addi r3, r31, 0x64
    addi r4, r1, 0xc
    addi r5, r1, 0x30
    li r6, 0x2f
    bl fn_806AB980
    addi r3, r1, 0xc
    addi r5, r31, 0x5c
    li r4, 0xc
    li r6, 0x5a
    crclr 6
    bl fn_806809C0
    addi r3, r31, 0x68
    addi r4, r1, 0xc
    addi r5, r1, 0x30
    li r6, 0x2f
    bl fn_806AB980
    lis r30, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r30)
    lwz r0, 0x908(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806C3670_00001524
    li r4, 0x0
    b lbl_fn_806C3670_00001570
lbl_fn_806C3670_00001524:
    bl fn_806B12F0
    cmpwi r3, 0x0
    beq lbl_fn_806C3670_0000156C
    lwz r3, lbl_80860898@l(r30)
    lbz r0, 0x15(r3)
    cmplwi r0, 0x1
    beq lbl_fn_806C3670_00001558
    lbz r0, 0x15(r3)
    cmplwi r0, 0x3
    beq lbl_fn_806C3670_00001558
    lbz r0, 0x15(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806C3670_0000156C
lbl_fn_806C3670_00001558:
    lwz r0, 0x8f4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806C3670_0000156C
    li r4, 0x1
    b lbl_fn_806C3670_00001570
lbl_fn_806C3670_0000156C:
    li r4, 0x0
lbl_fn_806C3670_00001570:
    neg r0, r4
    addi r3, r1, 0xc
    or r0, r0, r4
    addi r5, r31, 0x5c
    srwi r6, r0, 31
    li r4, 0xc
    crclr 6
    bl fn_806809C0
    addi r3, r31, 0x6c
    addi r4, r1, 0xc
    addi r5, r1, 0x30
    li r6, 0x2f
    bl fn_806AB980
    addi r4, r1, 0x30
    li r3, 0x1
    li r5, 0x0
    bl fn_806ACE00
    bl fn_806C5C10
    cmpwi r3, 0x0
    bne lbl_fn_806C3670_00001634
    bl fn_806BBCA0
    lis r3, lbl_80860898@ha
    lwz r29, lbl_80860898@l(r3)
    lwz r4, 0x7b0(r29)
    cmpwi r4, 0x0
    beq lbl_fn_806C3670_000015E0
    li r27, 0x1
    b lbl_fn_806C3670_000015F0
lbl_fn_806C3670_000015E0:
    lbz r3, 0x14(r29)
    subi r0, r3, 0x2
    cntlzw r0, r0
    srwi r27, r0, 5
lbl_fn_806C3670_000015F0:
    cntlzw r0, r4
    lwz r3, 0x7b0(r29)
    srwi r28, r0, 5
    bl fn_806ACCF0
    lwz r12, 0x8a0(r29)
    mr r7, r3
    mr r5, r28
    mr r6, r27
    lwz r8, 0x8a4(r29)
    li r3, 0x0
    li r4, 0x1
    mtctr r12
    bctrl
    lis r3, lbl_80860898@ha
    li r0, 0x0
    lwz r3, lbl_80860898@l(r3)
    stb r0, 0x752(r3)
lbl_fn_806C3670_00001634:
    addi r11, r1, 0xc0
    bl _restgpr_27
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

asm void fn_806C3ED0(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_26
    cmpwi r3, 0x0
    lis r31, lbl_807BE9D0@ha
    mr r28, r3
    addi r31, r31, lbl_807BE9D0@l
    bne lbl_fn_806C3ED0_00001858
    lis r28, lbl_80860898@ha
    addi r3, r1, 0x8
    lwz r6, lbl_80860898@l(r28)
    addi r5, r31, 0x5c
    li r4, 0xc
    lbz r6, 0x17(r6)
    addi r6, r6, 0x1
    crclr 6
    bl fn_806809C0
    addi r3, r31, 0x60
    addi r4, r1, 0x8
    addi r5, r1, 0x14
    li r6, 0x2f
    bl fn_806AB920
    lwz r3, lbl_80860898@l(r28)
    lbz r0, 0x15(r3)
    lwz r6, 0x58(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806C3ED0_000016D4
    cmpwi r6, 0x0
    bne lbl_fn_806C3ED0_000016D4
    li r6, 0x1
lbl_fn_806C3ED0_000016D4:
    addi r3, r1, 0x8
    addi r5, r31, 0x5c
    li r4, 0xc
    crclr 6
    bl fn_806809C0
    addi r3, r31, 0x64
    addi r4, r1, 0x8
    addi r5, r1, 0x14
    li r6, 0x2f
    bl fn_806AB980
    addi r3, r1, 0x8
    addi r5, r31, 0x5c
    li r4, 0xc
    li r6, 0x5a
    crclr 6
    bl fn_806809C0
    addi r3, r31, 0x68
    addi r4, r1, 0x8
    addi r5, r1, 0x14
    li r6, 0x2f
    bl fn_806AB980
    lis r28, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r28)
    lwz r0, 0x908(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806C3ED0_00001744
    li r4, 0x0
    b lbl_fn_806C3ED0_00001790
lbl_fn_806C3ED0_00001744:
    bl fn_806B12F0
    cmpwi r3, 0x0
    beq lbl_fn_806C3ED0_0000178C
    lwz r3, lbl_80860898@l(r28)
    lbz r0, 0x15(r3)
    cmplwi r0, 0x1
    beq lbl_fn_806C3ED0_00001778
    lbz r0, 0x15(r3)
    cmplwi r0, 0x3
    beq lbl_fn_806C3ED0_00001778
    lbz r0, 0x15(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806C3ED0_0000178C
lbl_fn_806C3ED0_00001778:
    lwz r0, 0x8f4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806C3ED0_0000178C
    li r4, 0x1
    b lbl_fn_806C3ED0_00001790
lbl_fn_806C3ED0_0000178C:
    li r4, 0x0
lbl_fn_806C3ED0_00001790:
    neg r0, r4
    addi r3, r1, 0x8
    or r0, r0, r4
    addi r5, r31, 0x5c
    srwi r6, r0, 31
    li r4, 0xc
    crclr 6
    bl fn_806809C0
    addi r3, r31, 0x6c
    addi r4, r1, 0x8
    addi r5, r1, 0x14
    li r6, 0x2f
    bl fn_806AB980
    addi r4, r1, 0x14
    li r3, 0x1
    li r5, 0x0
    bl fn_806ACE00
    bl fn_806C5C10
    cmpwi r3, 0x0
    bne lbl_fn_806C3ED0_00001B90
    bl fn_806BBCA0
    lis r3, lbl_80860898@ha
    lwz r28, lbl_80860898@l(r3)
    lwz r4, 0x7b0(r28)
    cmpwi r4, 0x0
    beq lbl_fn_806C3ED0_00001800
    li r26, 0x1
    b lbl_fn_806C3ED0_00001810
lbl_fn_806C3ED0_00001800:
    lbz r3, 0x14(r28)
    subi r0, r3, 0x2
    cntlzw r0, r0
    srwi r26, r0, 5
lbl_fn_806C3ED0_00001810:
    cntlzw r0, r4
    lwz r3, 0x7b0(r28)
    srwi r27, r0, 5
    bl fn_806ACCF0
    lwz r12, 0x8a0(r28)
    mr r7, r3
    mr r5, r27
    mr r6, r26
    lwz r8, 0x8a4(r28)
    li r3, 0x0
    li r4, 0x1
    mtctr r12
    bctrl
    lis r3, lbl_80860898@ha
    li r0, 0x0
    lwz r3, lbl_80860898@l(r3)
    stb r0, 0x752(r3)
    b lbl_fn_806C3ED0_00001B90
lbl_fn_806C3ED0_00001858:
    bl fn_806BB6C0
    lis r3, lbl_80860898@ha
    lwz r27, lbl_80860898@l(r3)
    lbz r0, 0x15(r27)
    cmplwi r0, 0x2
    beq lbl_fn_806C3ED0_0000187C
    lbz r0, 0x15(r27)
    cmplwi r0, 0x3
    bne lbl_fn_806C3ED0_000018BC
lbl_fn_806C3ED0_0000187C:
    lis r3, lbl_80860898@ha
    lwz r28, lbl_80860898@l(r3)
    lwz r3, 0x7b0(r28)
    cntlzw r0, r3
    srwi r26, r0, 5
    bl fn_806ACCF0
    lwz r12, 0x8a0(r27)
    mr r7, r3
    mr r5, r26
    lwz r8, 0x8a4(r28)
    li r3, 0x0
    li r4, 0x1
    li r6, 0x0
    mtctr r12
    bctrl
    b lbl_fn_806C3ED0_00001B90
lbl_fn_806C3ED0_000018BC:
    lbz r0, 0x15(r27)
    cmpwi r0, 0x0
    bne lbl_fn_806C3ED0_00001A14
    lbz r0, 0xd(r27)
    cmpwi r0, 0x0
    beq lbl_fn_806C3ED0_00001908
    lwz r3, 0x7b0(r27)
    cntlzw r0, r3
    srwi r26, r0, 5
    bl fn_806ACCF0
    lwz r12, 0x8a0(r27)
    mr r7, r3
    mr r5, r26
    lwz r8, 0x8a4(r27)
    li r3, 0x0
    li r4, 0x1
    li r6, 0x0
    mtctr r12
    bctrl
lbl_fn_806C3ED0_00001908:
    cmpwi r28, 0x1
    bne lbl_fn_806C3ED0_00001B90
    lis r4, lbl_80860898@ha
    li r0, 0x0
    lwz r3, lbl_80860898@l(r4)
    stb r0, 0x16(r3)
    lwz r3, lbl_80860898@l(r4)
    lwz r3, 0x10(r3)
    cmpwi r3, 0x0
    beq lbl_fn_806C3ED0_00001934
    bl fn_806EF8B0
lbl_fn_806C3ED0_00001934:
    lis r3, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r3)
    lwz r30, 0x744(r3)
    cmpwi r30, 0x16
    beq lbl_fn_806C3ED0_000019E8
    lis r29, lbl_80860890@ha
    addi r28, r29, lbl_80860890@l
    lwz r27, lbl_80860890@l(r29)
    lwz r26, 0x4(r28)
    bl OSGetTime
    stw r4, 0x4(r28)
    lis r28, 0x1062
    lis r6, 0x8000
    subfc r4, r26, r4
    stw r3, lbl_80860890@l(r29)
    addi r7, r28, 0x4dd3
    subfe r3, r27, r3
    li r5, 0x0
    lwz r0, 0xf8(r6)
    srwi r0, r0, 2
    mulhwu r0, r7, r0
    srwi r6, r0, 6
    bl __div2i
    addi r0, r28, 0x4dd3
    lis r3, lbl_807C16F0@ha
    mulhw r6, r0, r4
    lis r5, 0x51ec
    addi r3, r3, lbl_807C16F0@l
    slwi r0, r30, 2
    lwz r8, 0x58(r3)
    subi r9, r5, 0x7ae1
    lwzx r5, r3, r0
    srawi r6, r6, 6
    srwi r0, r6, 31
    li r3, 0x1
    add r6, r6, r0
    subf r7, r6, r4
    addi r4, r31, 0x118
    addi r0, r7, 0x32
    mulhw r0, r9, r0
    srawi r0, r0, 5
    srwi r7, r0, 31
    add r7, r0, r7
    crclr 6
    bl fn_806A76B0
lbl_fn_806C3ED0_000019E8:
    lis r4, lbl_80860898@ha
    li r0, 0x16
    lwz r3, lbl_80860898@l(r4)
    stw r0, 0x744(r3)
    lwz r3, lbl_80860898@l(r4)
    lwz r3, 0x7a8(r3)
    bl fn_806BC010
    bl fn_806C5EB0
    cmpwi r3, 0x0
    beq lbl_fn_806C3ED0_00001B90
    b lbl_fn_806C3ED0_00001B90
lbl_fn_806C3ED0_00001A14:
    lbz r0, 0x15(r27)
    cmplwi r0, 0x1
    bne lbl_fn_806C3ED0_00001B78
    lbz r0, 0xd(r27)
    cmpwi r0, 0x0
    beq lbl_fn_806C3ED0_00001A60
    lwz r3, 0x7b0(r27)
    cntlzw r0, r3
    srwi r26, r0, 5
    bl fn_806ACCF0
    lwz r12, 0x8a0(r27)
    mr r7, r3
    mr r5, r26
    lwz r8, 0x8a4(r27)
    li r3, 0x0
    li r4, 0x1
    li r6, 0x0
    mtctr r12
    bctrl
lbl_fn_806C3ED0_00001A60:
    cmpwi r28, 0x1
    bne lbl_fn_806C3ED0_00001B90
    lis r4, lbl_80860898@ha
    li r0, 0x0
    lwz r3, lbl_80860898@l(r4)
    stb r0, 0x16(r3)
    lwz r3, lbl_80860898@l(r4)
    lwz r3, 0x10(r3)
    cmpwi r3, 0x0
    beq lbl_fn_806C3ED0_00001A8C
    bl fn_806EF8B0
lbl_fn_806C3ED0_00001A8C:
    lis r4, lbl_80860898@ha
    li r0, 0x0
    lwz r3, lbl_80860898@l(r4)
    stw r0, 0x8c8(r3)
    lwz r3, lbl_80860898@l(r4)
    lwz r28, 0x744(r3)
    cmpwi r28, 0x16
    beq lbl_fn_806C3ED0_00001B4C
    lis r29, lbl_80860890@ha
    addi r30, r29, lbl_80860890@l
    lwz r26, lbl_80860890@l(r29)
    lwz r27, 0x4(r30)
    bl OSGetTime
    stw r4, 0x4(r30)
    lis r30, 0x1062
    lis r6, 0x8000
    subfc r4, r27, r4
    stw r3, lbl_80860890@l(r29)
    addi r7, r30, 0x4dd3
    subfe r3, r26, r3
    li r5, 0x0
    lwz r0, 0xf8(r6)
    srwi r0, r0, 2
    mulhwu r0, r7, r0
    srwi r6, r0, 6
    bl __div2i
    addi r0, r30, 0x4dd3
    lis r3, lbl_807C16F0@ha
    mulhw r6, r0, r4
    lis r5, 0x51ec
    addi r3, r3, lbl_807C16F0@l
    slwi r0, r28, 2
    lwz r8, 0x58(r3)
    subi r9, r5, 0x7ae1
    lwzx r5, r3, r0
    srawi r6, r6, 6
    srwi r0, r6, 31
    li r3, 0x1
    add r6, r6, r0
    subf r7, r6, r4
    addi r4, r31, 0x118
    addi r0, r7, 0x32
    mulhw r0, r9, r0
    srawi r0, r0, 5
    srwi r7, r0, 31
    add r7, r0, r7
    crclr 6
    bl fn_806A76B0
lbl_fn_806C3ED0_00001B4C:
    lis r4, lbl_80860898@ha
    li r0, 0x16
    lwz r3, lbl_80860898@l(r4)
    stw r0, 0x744(r3)
    lwz r3, lbl_80860898@l(r4)
    lwz r3, 0x7a8(r3)
    bl fn_806BC010
    bl fn_806C5EB0
    cmpwi r3, 0x0
    beq lbl_fn_806C3ED0_00001B90
    b lbl_fn_806C3ED0_00001B90
lbl_fn_806C3ED0_00001B78:
    lbz r5, 0x14(r27)
    mr r6, r28
    addi r4, r31, 0x1f20
    li r3, 0x2
    crclr 6
    bl fn_806A76B0
lbl_fn_806C3ED0_00001B90:
    addi r11, r1, 0x60
    bl _restgpr_26
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_806C4430(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    addi r11, r1, 0x130
    bl _savegpr_25
    lis r4, lbl_80860898@ha
    addi r8, r1, 0x8
    lwz r10, lbl_80860898@l(r4)
    addi r9, r1, 0x88
    li r30, 0x0
    li r29, 0x0
    addi r7, r10, 0x90
    li r28, 0x0
    li r27, 0x1
    li r11, 0x1
    li r5, 0x1
    b lbl_fn_806C4430_00001C6C
    nop
lbl_fn_806C4430_00001BFC:
    cmpw r11, r0
    bge lbl_fn_806C4430_00001C0C
    mr r4, r7
    b lbl_fn_806C4430_00001C10
lbl_fn_806C4430_00001C0C:
    li r4, 0x0
lbl_fn_806C4430_00001C10:
    cmpwi r4, 0x0
    beq lbl_fn_806C4430_00001C64
    lbz r0, 0x16(r4)
    slw r0, r5, r0
    and. r0, r3, r0
    beq lbl_fn_806C4430_00001C3C
    lwz r0, 0x0(r4)
    addi r29, r29, 0x1
    stw r0, 0x0(r8)
    addi r8, r8, 0x4
    b lbl_fn_806C4430_00001C64
lbl_fn_806C4430_00001C3C:
    lwz r6, 0x0(r4)
    addi r30, r30, 0x1
    rlwinm r4, r6, 24, 8, 15
    extlwi r0, r6, 8, 8
    rlwimi r4, r6, 24, 24, 31
    rlwimi r0, r6, 8, 16, 23
    or r0, r4, r0
    rotlwi r0, r0, 16
    stw r0, 0x0(r9)
    addi r9, r9, 0x4
lbl_fn_806C4430_00001C64:
    addi r7, r7, 0x30
    addi r11, r11, 0x1
lbl_fn_806C4430_00001C6C:
    lwz r0, 0x58(r10)
    cmpw r11, r0
    blt lbl_fn_806C4430_00001BFC
    lis r4, lbl_80860898@ha
    lwz r4, lbl_80860898@l(r4)
    lwz r6, 0x660(r4)
    cmpwi r6, 0x0
    beq lbl_fn_806C4430_00001CE0
    lbz r0, 0x676(r4)
    li r4, 0x1
    slw r0, r4, r0
    and. r0, r3, r0
    beq lbl_fn_806C4430_00001CB4
    slwi r0, r29, 2
    addi r3, r1, 0x8
    stwx r6, r3, r0
    addi r29, r29, 0x1
    b lbl_fn_806C4430_00001CE0
lbl_fn_806C4430_00001CB4:
    rlwinm r5, r6, 24, 8, 15
    extlwi r4, r6, 8, 8
    slwi r0, r30, 2
    addi r3, r1, 0x88
    rlwimi r5, r6, 24, 24, 31
    rlwimi r4, r6, 8, 16, 23
    or r4, r5, r4
    li r28, 0x1
    rotlwi r4, r4, 16
    stwx r4, r3, r0
    addi r30, r30, 0x1
lbl_fn_806C4430_00001CE0:
    addi r25, r1, 0x8
    li r31, 0x0
    lis r26, lbl_80860898@ha
    b lbl_fn_806C4430_00001DB4
lbl_fn_806C4430_00001CF0:
    lwz r6, lbl_80860898@l(r26)
    li r3, 0x0
    lwz r4, 0x0(r25)
    lwz r0, 0x58(r6)
    mr r5, r6
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_806C4430_00001D3C
    nop
lbl_fn_806C4430_00001D14:
    lwz r0, 0x60(r5)
    cmpw r4, r0
    bne lbl_fn_806C4430_00001D30
    mulli r0, r3, 0x30
    add r3, r6, r0
    addi r7, r3, 0x60
    b lbl_fn_806C4430_00001D40
lbl_fn_806C4430_00001D30:
    addi r5, r5, 0x30
    addi r3, r3, 0x1
    bdnz lbl_fn_806C4430_00001D14
lbl_fn_806C4430_00001D3C:
    li r7, 0x0
lbl_fn_806C4430_00001D40:
    lwz r0, 0x660(r6)
    addi r3, r6, 0x660
    cmpwi r0, 0x0
    beq lbl_fn_806C4430_00001D64
    cmpwi r7, 0x0
    bne lbl_fn_806C4430_00001D64
    cmpw r4, r0
    bne lbl_fn_806C4430_00001D64
    mr r7, r3
lbl_fn_806C4430_00001D64:
    cmpwi r7, 0x0
    beq lbl_fn_806C4430_00001DAC
    lwz r5, 0x4(r7)
    mr r8, r30
    lhz r6, 0xc(r7)
    addi r7, r1, 0x88
    li r3, 0x10
    bl fn_806BC860
    lwz r4, lbl_80860898@l(r26)
    lbz r0, 0x15(r4)
    cmpwi r0, 0x0
    bne lbl_fn_806C4430_00001D9C
    bl fn_806C5EB0
    b lbl_fn_806C4430_00001DA0
lbl_fn_806C4430_00001D9C:
    bl fn_806C5C10
lbl_fn_806C4430_00001DA0:
    cmpwi r3, 0x0
    beq lbl_fn_806C4430_00001DAC
    li r27, 0x0
lbl_fn_806C4430_00001DAC:
    addi r25, r25, 0x4
    addi r31, r31, 0x1
lbl_fn_806C4430_00001DB4:
    cmpw r31, r29
    blt lbl_fn_806C4430_00001CF0
    lis r29, lbl_80860898@ha
    cmpwi r28, 0x0
    lwz r3, lbl_80860898@l(r29)
    li r0, 0x1
    stb r0, 0x751(r3)
    beq lbl_fn_806C4430_00001DF4
    lwz r3, lbl_80860898@l(r29)
    lbz r3, 0x676(r3)
    bl fn_806B1A00
    lwz r3, lbl_80860898@l(r29)
    li r4, 0x0
    li r5, 0x30
    addi r3, r3, 0x660
    bl memset
lbl_fn_806C4430_00001DF4:
    addi r26, r1, 0x88
    li r31, 0x0
    lis r28, lbl_80860898@ha
    b lbl_fn_806C4430_00001E90
lbl_fn_806C4430_00001E04:
    lwz r4, 0x0(r26)
    li r5, 0x0
    lwz r7, lbl_80860898@l(r28)
    rlwinm r3, r4, 24, 8, 15
    extlwi r0, r4, 8, 8
    rlwimi r3, r4, 24, 24, 31
    lwz r6, 0x58(r7)
    rlwimi r0, r4, 8, 16, 23
    mr r4, r7
    or r0, r3, r0
    rotlwi r3, r0, 16
    mtctr r6
    cmpwi r6, 0x0
    ble lbl_fn_806C4430_00001E64
lbl_fn_806C4430_00001E3C:
    lwz r0, 0x60(r4)
    cmpw r3, r0
    bne lbl_fn_806C4430_00001E58
    mulli r0, r5, 0x30
    add r3, r7, r0
    addi r3, r3, 0x60
    b lbl_fn_806C4430_00001E68
lbl_fn_806C4430_00001E58:
    addi r4, r4, 0x30
    addi r5, r5, 0x1
    bdnz lbl_fn_806C4430_00001E3C
lbl_fn_806C4430_00001E64:
    li r3, 0x0
lbl_fn_806C4430_00001E68:
    cmpwi r3, 0x0
    bne lbl_fn_806C4430_00001E78
    li r3, 0xff
    b lbl_fn_806C4430_00001E7C
lbl_fn_806C4430_00001E78:
    lbz r3, 0x16(r3)
lbl_fn_806C4430_00001E7C:
    cmplwi r3, 0xff
    beq lbl_fn_806C4430_00001E88
    bl fn_806B1A00
lbl_fn_806C4430_00001E88:
    addi r26, r26, 0x4
    addi r31, r31, 0x1
lbl_fn_806C4430_00001E90:
    cmpw r31, r30
    blt lbl_fn_806C4430_00001E04
    lis r3, lbl_80860898@ha
    li r0, 0x0
    lwz r4, lbl_80860898@l(r3)
    addi r11, r1, 0x130
    mr r3, r27
    stb r0, 0x751(r4)
    bl _restgpr_25
    lwz r0, 0x134(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

asm void fn_806C4740(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    lis r4, lbl_807C092C@ha
    addi r30, r1, 0x8
    mr r6, r27
    subi r5, r28, 0x2
    addi r4, r4, lbl_807C092C@l
    li r31, 0x4
    li r3, 0x80
    crclr 6
    bl fn_806A76B0
    cmpwi r28, 0x2
    beq lbl_fn_806C4740_00001F20
    cmpwi r28, 0x3
    beq lbl_fn_806C4740_00002008
    cmpwi r28, 0x4
    beq lbl_fn_806C4740_00002028
    b lbl_fn_806C4740_00002254
lbl_fn_806C4740_00001F20:
    lis r3, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r3)
    lwz r0, 0x660(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806C4740_00001F4C
    lbz r0, 0x676(r3)
    cmplw r27, r0
    bne lbl_fn_806C4740_00001F4C
    lis r0, 0x100
    stw r0, 0x8(r1)
    b lbl_fn_806C4740_00002254
lbl_fn_806C4740_00001F4C:
    li r31, 0x1c
    li r3, 0x4
    li r4, 0x1c
    bl fn_806A72E0
    cmpwi r3, 0x0
    beq lbl_fn_806C4740_00002298
    li r0, 0x0
    stw r0, 0x0(r3)
    lis r4, lbl_80860898@ha
    mr r30, r3
    lwz r6, lbl_80860898@l(r4)
    lbz r0, 0x677(r6)
    lbz r7, 0x676(r6)
    rlwimi r7, r0, 16, 8, 15
    extrwi r5, r7, 8, 16
    rlwinm r4, r7, 24, 8, 15
    extlwi r0, r7, 8, 8
    or r4, r5, r4
    rlwimi r0, r7, 8, 16, 23
    or r0, r4, r0
    rotlwi r0, r0, 16
    stw r0, 0x4(r3)
    lwz r5, 0x660(r6)
    rlwinm r4, r5, 24, 8, 15
    extlwi r0, r5, 8, 8
    rlwimi r4, r5, 24, 24, 31
    rlwimi r0, r5, 8, 16, 23
    or r0, r4, r0
    rotlwi r0, r0, 16
    stw r0, 0x8(r3)
    lwz r0, 0x664(r6)
    stw r0, 0xc(r3)
    lwz r0, 0x668(r6)
    stw r0, 0x10(r3)
    lhz r0, 0x66c(r6)
    lhz r5, 0x66e(r6)
    rlwimi r5, r0, 16, 0, 15
    rlwinm r4, r5, 24, 8, 15
    extlwi r0, r5, 8, 8
    rlwimi r4, r5, 24, 24, 31
    rlwimi r0, r5, 8, 16, 23
    or r0, r4, r0
    rotlwi r0, r0, 16
    stw r0, 0x14(r3)
    lwz r0, 0x688(r6)
    stw r0, 0x18(r3)
    b lbl_fn_806C4740_00002254
lbl_fn_806C4740_00002008:
    lis r3, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r3)
    lhz r0, 0x758(r3)
    stb r0, 0x8(r1)
    lhz r0, 0x758(r3)
    extrwi r0, r0, 8, 16
    stb r0, 0x9(r1)
    b lbl_fn_806C4740_00002254
lbl_fn_806C4740_00002028:
    lis r3, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r3)
    lwz r0, 0x660(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806C4740_00002214
    lbz r0, 0x676(r3)
    cmplw r27, r0
    bne lbl_fn_806C4740_00002214
    lwz r0, 0x8e0(r3)
    cmpwi r0, 0x2
    bne lbl_fn_806C4740_0000205C
    li r29, 0x0
    b lbl_fn_806C4740_00002064
lbl_fn_806C4740_0000205C:
    lwz r3, 0x58(r3)
    subi r29, r3, 0x1
lbl_fn_806C4740_00002064:
    cmpwi r29, 0x0
    bne lbl_fn_806C4740_000020B0
    lis r3, lbl_80860898@ha
    li r0, 0x0
    stb r0, 0x8(r1)
    li r31, 0x8
    lwz r3, lbl_80860898@l(r3)
    stb r0, 0x9(r1)
    stb r0, 0xa(r1)
    stb r0, 0xb(r1)
    lwz r4, 0x8f8(r3)
    rlwinm r3, r4, 24, 8, 15
    extlwi r0, r4, 8, 8
    rlwimi r3, r4, 24, 24, 31
    rlwimi r0, r4, 8, 16, 23
    or r0, r3, r0
    rotlwi r0, r0, 16
    stw r0, 0xc(r1)
    b lbl_fn_806C4740_00002254
lbl_fn_806C4740_000020B0:
    mulli r4, r29, 0x18
    li r3, 0x4
    addi r31, r4, 0x8
    mr r4, r31
    bl fn_806A72E0
    cmpwi r3, 0x0
    beq lbl_fn_806C4740_00002298
    rlwinm r4, r29, 24, 8, 15
    extlwi r0, r29, 8, 8
    rlwimi r4, r29, 24, 24, 31
    li r6, 0x1
    rlwimi r0, r29, 8, 16, 23
    li r7, 0x4
    or r0, r4, r0
    li r5, 0x0
    rotlwi r0, r0, 16
    stw r0, 0x0(r3)
    lis r4, lbl_80860898@ha
    b lbl_fn_806C4740_000021D4
lbl_fn_806C4740_000020FC:
    lwz r9, lbl_80860898@l(r4)
    clrlwi r8, r5, 24
    addi r8, r8, 0x1
    lwz r0, 0x58(r9)
    cmpw r8, r0
    bge lbl_fn_806C4740_00002124
    mulli r0, r8, 0x30
    add r8, r9, r0
    addi r10, r8, 0x60
    b lbl_fn_806C4740_00002128
lbl_fn_806C4740_00002124:
    li r10, 0x0
lbl_fn_806C4740_00002128:
    lbz r0, 0x17(r10)
    addi r5, r5, 0x1
    lbz r11, 0x16(r10)
    addi r6, r6, 0x6
    rlwimi r11, r0, 16, 8, 15
    extrwi r9, r11, 8, 16
    rlwinm r8, r11, 24, 8, 15
    extlwi r0, r11, 8, 8
    or r8, r9, r8
    rlwimi r0, r11, 8, 16, 23
    or r0, r8, r0
    rotlwi r0, r0, 16
    stwx r0, r3, r7
    addi r7, r7, 0x4
    lwz r9, 0x0(r10)
    rlwinm r8, r9, 24, 8, 15
    extlwi r0, r9, 8, 8
    rlwimi r8, r9, 24, 24, 31
    rlwimi r0, r9, 8, 16, 23
    or r0, r8, r0
    rotlwi r0, r0, 16
    stwx r0, r3, r7
    addi r7, r7, 0x4
    lwz r0, 0x4(r10)
    stwx r0, r3, r7
    addi r7, r7, 0x4
    lwz r0, 0x8(r10)
    stwx r0, r3, r7
    addi r7, r7, 0x4
    lhz r0, 0xc(r10)
    lhz r9, 0xe(r10)
    rlwimi r9, r0, 16, 0, 15
    rlwinm r8, r9, 24, 8, 15
    extlwi r0, r9, 8, 8
    rlwimi r8, r9, 24, 24, 31
    rlwimi r0, r9, 8, 16, 23
    or r0, r8, r0
    rotlwi r0, r0, 16
    stwx r0, r3, r7
    addi r7, r7, 0x4
    lwz r0, 0x28(r10)
    stwx r0, r3, r7
    addi r7, r7, 0x4
lbl_fn_806C4740_000021D4:
    clrlwi r0, r5, 24
    cmpw r0, r29
    blt lbl_fn_806C4740_000020FC
    lis r4, lbl_80860898@ha
    slwi r0, r6, 2
    lwz r4, lbl_80860898@l(r4)
    mr r30, r3
    lwz r6, 0x8f8(r4)
    rlwinm r5, r6, 24, 8, 15
    extlwi r4, r6, 8, 8
    rlwimi r5, r6, 24, 24, 31
    rlwimi r4, r6, 8, 16, 23
    or r4, r5, r4
    rotlwi r4, r4, 16
    stwx r4, r3, r0
    b lbl_fn_806C4740_00002254
lbl_fn_806C4740_00002214:
    lis r3, lbl_80860898@ha
    li r0, 0x0
    stb r0, 0x8(r1)
    li r31, 0x8
    lwz r3, lbl_80860898@l(r3)
    stb r0, 0x9(r1)
    stb r0, 0xa(r1)
    stb r0, 0xb(r1)
    lwz r4, 0x8f8(r3)
    rlwinm r3, r4, 24, 8, 15
    extlwi r0, r4, 8, 8
    rlwimi r3, r4, 24, 24, 31
    rlwimi r0, r4, 8, 16, 23
    or r0, r3, r0
    rotlwi r0, r0, 16
    stw r0, 0xc(r1)
lbl_fn_806C4740_00002254:
    mr r3, r28
    mr r4, r27
    mr r5, r30
    mr r6, r31
    bl fn_806CDAB0
    addi r0, r1, 0x8
    cmplw r30, r0
    beq lbl_fn_806C4740_00002284
    mr r4, r30
    li r3, 0x4
    li r5, 0x0
    bl fn_806A7400
lbl_fn_806C4740_00002284:
    bl OSGetTime
    lis r5, lbl_80860898@ha
    lwz r5, lbl_80860898@l(r5)
    stw r4, 0x78c(r5)
    stw r3, 0x788(r5)
lbl_fn_806C4740_00002298:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}
