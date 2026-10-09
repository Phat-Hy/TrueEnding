#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void OSCancelThread(void);
extern void OSCreateThread(void);
extern void OSGetTime(void);
extern void OSIsThreadTerminated(void);
extern void OSResumeThread(void);
extern void OSSleepTicks(void);
extern void __div2i(void);
extern void _restgpr_23(void);
extern void _restgpr_25(void);
extern void _restgpr_27(void);
extern void _savegpr_23(void);
extern void _savegpr_25(void);
extern void _savegpr_27(void);
extern void fn_805F30F0(void);
extern void fn_805F3130(void);
extern void fn_805F3210(void);
extern void fn_8067AEC4(void);
extern void fn_8067AF64(void);
extern void fn_8067B094(void);
extern void fn_8067B3AC(void);
extern void fn_8067E23C(void);
extern void fn_80682428(void);
extern void fn_80682544(void);
extern void fn_806A38C8(void);
extern void fn_806A39B8(void);
extern void fn_806A3A5C(void);
extern void fn_806A3B44(void);
extern void fn_806A3C2C(void);
extern void fn_806A3D28(void);
extern void fn_806A3D50(void);
extern void fn_806A3D74(void);
extern void fn_806A3D9C(void);
extern void fn_806A3DC0(void);
extern void fn_806A3EF0(void);
extern void fn_806A3FA4(void);
extern void fn_806A4100(void);
extern void fn_806A420C(void);
extern void fn_806A4260(void);
extern void fn_806A47D4(void);
extern void fn_806A4C5C(void);
extern void fn_806A4D60(void);
extern void fn_806D5850(void);
extern void fn_806D58F0(void);
extern void fn_806D5900(void);
extern void fn_806D5C90(void);
extern void fn_806D5E60(void);
extern void fn_806EAC90(void);
extern void fn_806EACA0(void);
extern void fn_806EEDC0(void);
extern char* strcpy(char* dest, const char* src);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_8076B678[];
extern u8 lbl_807BB380[];
extern u8 lbl_807C2AAC[];
extern u8 lbl_807C2AB0[];
extern u8 lbl_807C2AC0[];
extern u8 lbl_807C2AC8[];
extern u8 lbl_807C2AD8[];
extern u8 lbl_80860DD0[];
extern u8 lbl_80860E58[];
extern u8 lbl_80860EB0[];
extern u8 lbl_80860EB4[];
extern u8 lbl_80860EB8[];
extern u8 lbl_80860EC8[];
extern u8 lbl_80860ECC[];
extern u8 lbl_80860F08[];
extern u8 lbl_80860F20[];
extern u8 lbl_80860F38[];
extern u8 lbl_80860F50[];
extern u8 lbl_80860F58[];

/* Small data declarations */

/* Function declarations */
void fn_806D7860(void);
void fn_806D7A30(void);
void fn_806D7A40(void);
void fn_806D7A50(void);
void fn_806D7A60(void);
void fn_806D7A70(void);
void fn_806D7A90(void);
void fn_806D7AA0(void);
void fn_806D7AC0(void);
void fn_806D7AE0(void);
void fn_806D7B30(void);
void fn_806D7B70(void);
void fn_806D7BB0(void);
void fn_806D7C40(void);
void fn_806D7CB0(void);
void fn_806D7CF0(void);
void fn_806D7D60(void);
void fn_806D7DA0(void);
void fn_806D7E30(void);
void fn_806D7E70(void);
void fn_806D7EE0(void);
void fn_806D7F20(void);
void fn_806D7F30(void);
void fn_806D8060(void);
void fn_806D8560(void);
void fn_806D85E0(void);
void fn_806D8650(void);
void fn_806D86A0(void);
void fn_806D86F0(void);
void fn_806D8850(void);
void fn_806D88D0(void);
void fn_806D89B0(void);
void fn_806D8A40(void);
void fn_806D8A90(void);
void fn_806D8AF0(void);
void fn_806D8B00(void);
void fn_806D8B10(void);
void fn_806D8B20(void);
void fn_806D8B70(void);
void fn_806D8C20(void);
void fn_806D8D20(void);
void fn_806D8DA0(void);
void fn_806D8E30(void);
void fn_806D8EB0(void);
void fn_806D8F10(void);
void fn_806D8F20(void);
void fn_806D8F30(void);
void fn_806D8F80(void);
void fn_806D8FC0(void);
void fn_806D8FE0(void);
void fn_806D9060(void);
void fn_806D9380(void);
void fn_806D9590(void);
void fn_806D9610(void);
void fn_806D9620(void);
void fn_806D9630(void);
void fn_806D9640(void);
void fn_806D9680(void);
void fn_806D96A0(void);
void fn_806D9740(void);

asm void fn_806D7860(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    li r0, 0x8
    stw r31, 0x5c(r1)
    lis r31, lbl_80860E58@ha
    lwz r3, lbl_80860E58@l(r31)
    stw r0, 0x8(r1)
    cmpwi r3, -0x1
    bne lbl_fn_806D7860_0000003C
    lis r4, lbl_80860DD0@ha
    li r3, 0x1
    stw r3, lbl_80860DD0@l(r4)
    li r3, 0x1
    b lbl_fn_806D7860_000001BC
lbl_fn_806D7860_0000003C:
    bl fn_806D8650
    cmpwi r3, 0x0
    beq lbl_fn_806D7860_00000144
    lwz r3, lbl_80860E58@l(r31)
    addi r4, r1, 0x18
    addi r7, r1, 0x10
    addi r8, r1, 0x8
    li r5, 0x40
    li r6, 0x0
    bl fn_806D7CF0
    cmpwi r3, 0x7
    bge lbl_fn_806D7860_00000074
    li r5, 0x1
    b lbl_fn_806D7860_000000FC
lbl_fn_806D7860_00000074:
    addi r31, r31, lbl_80860E58@l
    addi r3, r1, 0x14
    addi r4, r31, 0x8
    li r5, 0x4
    bl fn_8067E23C
    cmpwi r3, 0x0
    beq lbl_fn_806D7860_00000098
    li r5, 0x1
    b lbl_fn_806D7860_000000FC
lbl_fn_806D7860_00000098:
    lhz r3, 0x12(r1)
    lhz r0, 0x6(r31)
    cmplw r3, r0
    beq lbl_fn_806D7860_000000B0
    li r5, 0x1
    b lbl_fn_806D7860_000000FC
lbl_fn_806D7860_000000B0:
    lis r4, lbl_807C2AAC@ha
    addi r3, r1, 0x18
    addi r4, r4, lbl_807C2AAC@l
    li r5, 0x3
    bl fn_8067E23C
    cmpwi r3, 0x0
    beq lbl_fn_806D7860_000000D4
    li r5, 0x1
    b lbl_fn_806D7860_000000FC
lbl_fn_806D7860_000000D4:
    lbz r0, 0x1c(r1)
    li r5, 0x0
    lbz r3, 0x1d(r1)
    clrlslwi r6, r0, 24, 16
    lbz r4, 0x1b(r1)
    lbz r0, 0x1e(r1)
    clrlslwi r3, r3, 24, 8
    rlwimi r6, r4, 24, 0, 7
    or r6, r6, r3
    or r31, r6, r0
lbl_fn_806D7860_000000FC:
    cmpwi r5, 0x0
    bne lbl_fn_806D7860_00000144
    lis r3, lbl_80860E58@ha
    lwz r3, lbl_80860E58@l(r3)
    bl fn_806D7B30
    clrlwi. r0, r31, 31
    beq lbl_fn_806D7860_00000128
    lis r4, lbl_80860DD0@ha
    li r3, 0x2
    stw r3, lbl_80860DD0@l(r4)
    b lbl_fn_806D7860_000001BC
lbl_fn_806D7860_00000128:
    rlwinm. r0, r31, 0, 30, 30
    li r3, 0x1
    beq lbl_fn_806D7860_00000138
    li r3, 0x3
lbl_fn_806D7860_00000138:
    lis r4, lbl_80860DD0@ha
    stw r3, lbl_80860DD0@l(r4)
    b lbl_fn_806D7860_000001BC
lbl_fn_806D7860_00000144:
    bl fn_806D8F30
    lis r5, lbl_80860E58@ha
    addi r31, r5, lbl_80860E58@l
    lwz r4, 0x50(r31)
    addi r0, r4, 0x7d0
    cmplw r3, r0
    ble lbl_fn_806D7860_000001B8
    lwz r0, 0x54(r31)
    cmpwi r0, 0x1
    bne lbl_fn_806D7860_00000188
    lwz r3, lbl_80860E58@l(r5)
    bl fn_806D7B30
    lis r4, lbl_80860DD0@ha
    li r3, 0x1
    stw r3, lbl_80860DD0@l(r4)
    li r3, 0x1
    b lbl_fn_806D7860_000001BC
lbl_fn_806D7860_00000188:
    lwz r3, lbl_80860E58@l(r5)
    addi r4, r31, 0xc
    lwz r5, 0x4c(r31)
    addi r7, r31, 0x4
    li r6, 0x0
    li r8, 0x8
    bl fn_806D7DA0
    bl fn_806D8F30
    lwz r4, 0x54(r31)
    stw r3, 0x50(r31)
    addi r0, r4, 0x1
    stw r0, 0x54(r31)
lbl_fn_806D7860_000001B8:
    li r3, 0x0
lbl_fn_806D7860_000001BC:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_806D7A30(void)
{
    nofralloc
    b fn_8067AEC4
}

asm void fn_806D7A40(void)
{
    nofralloc
    b fn_8067AF64
}

asm void fn_806D7A50(void)
{
    nofralloc
    b fn_8067B094
}

asm void fn_806D7A60(void)
{
    nofralloc
    mr r0, r3
    divwu r3, r4, r3
    mr r4, r0
    b fn_8067B3AC
}

asm void fn_806D7A70(void)
{
    nofralloc
    lis r8, lbl_807C2AB0@ha
    addi r7, r8, lbl_807C2AB0@l
    stw r3, lbl_807C2AB0@l(r8)
    stw r4, 0x4(r7)
    stw r5, 0x8(r7)
    stw r6, 0xc(r7)
    blr
}

asm void fn_806D7A90(void)
{
    nofralloc
    lis r4, lbl_807C2AB0@ha
    lwz r12, lbl_807C2AB0@l(r4)
    mtctr r12
    bctr
}

asm void fn_806D7AA0(void)
{
    nofralloc
    lis r5, lbl_807C2AB0@ha
    addi r5, r5, lbl_807C2AB0@l
    lwz r12, 0x8(r5)
    mtctr r12
    bctr
}

asm void fn_806D7AC0(void)
{
    nofralloc
    cmpwi r3, 0x0
    beqlr
    lis r4, lbl_807C2AB0@ha
    addi r4, r4, lbl_807C2AB0@l
    lwz r12, 0x4(r4)
    mtctr r12
    bctr
    blr
}

asm void fn_806D7AE0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x0
    stw r0, 0x14(r1)
    bl fn_806A38C8
    cmpwi r3, 0x0
    blt lbl_fn_806D7AE0_000002A4
    mr r0, r3
    b lbl_fn_806D7AE0_000002B0
lbl_fn_806D7AE0_000002A4:
    lis r4, lbl_80860EB0@ha
    li r0, -0x1
    stw r3, lbl_80860EB0@l(r4)
lbl_fn_806D7AE0_000002B0:
    mr r3, r0
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806D7B30(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_806A39B8
    cmpwi r3, 0x0
    blt lbl_fn_806D7B30_000002F0
    mr r0, r3
    b lbl_fn_806D7B30_000002FC
lbl_fn_806D7B30_000002F0:
    lis r4, lbl_80860EB0@ha
    li r0, -0x1
    stw r3, lbl_80860EB0@l(r4)
lbl_fn_806D7B30_000002FC:
    mr r3, r0
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806D7B70(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_806A3EF0
    cmpwi r3, 0x0
    blt lbl_fn_806D7B70_00000330
    mr r0, r3
    b lbl_fn_806D7B70_0000033C
lbl_fn_806D7B70_00000330:
    lis r4, lbl_80860EB0@ha
    li r0, -0x1
    stw r3, lbl_80860EB0@l(r4)
lbl_fn_806D7B70_0000033C:
    mr r3, r0
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806D7BB0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    lhz r0, 0x2(r4)
    stw r31, 0x1c(r1)
    mr r31, r5
    cmpwi r0, 0x0
    stw r30, 0x18(r1)
    mr r30, r3
    bne lbl_fn_806D7BB0_00000380
    li r3, 0x0
    b lbl_fn_806D7BB0_000003BC
lbl_fn_806D7BB0_00000380:
    addi r3, r1, 0x8
    li r5, 0x8
    bl memcpy
    stb r31, 0x8(r1)
    mr r3, r30
    addi r4, r1, 0x8
    bl fn_806A3A5C
    cmpwi r3, 0x0
    blt lbl_fn_806D7BB0_000003AC
    mr r0, r3
    b lbl_fn_806D7BB0_000003B8
lbl_fn_806D7BB0_000003AC:
    lis r4, lbl_80860EB0@ha
    li r0, -0x1
    stw r3, lbl_80860EB0@l(r4)
lbl_fn_806D7BB0_000003B8:
    mr r3, r0
lbl_fn_806D7BB0_000003BC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806D7C40(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    li r5, 0x8
    stw r30, 0x18(r1)
    mr r30, r3
    addi r3, r1, 0x8
    bl memcpy
    stb r31, 0x8(r1)
    mr r3, r30
    addi r4, r1, 0x8
    bl fn_806A3B44
    cmpwi r3, 0x0
    blt lbl_fn_806D7C40_00000428
    mr r0, r3
    b lbl_fn_806D7C40_00000434
lbl_fn_806D7C40_00000428:
    lis r4, lbl_80860EB0@ha
    li r0, -0x1
    stw r3, lbl_80860EB0@l(r4)
lbl_fn_806D7C40_00000434:
    lwz r31, 0x1c(r1)
    mr r3, r0
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806D7CB0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_806A3D50
    cmpwi r3, 0x0
    blt lbl_fn_806D7CB0_00000470
    mr r0, r3
    b lbl_fn_806D7CB0_0000047C
lbl_fn_806D7CB0_00000470:
    lis r4, lbl_80860EB0@ha
    li r0, -0x1
    stw r3, lbl_80860EB0@l(r4)
lbl_fn_806D7CB0_0000047C:
    mr r3, r0
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806D7CF0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r8
    stw r30, 0x8(r1)
    mr r30, r7
    lwz r0, 0x0(r8)
    stb r0, 0x0(r7)
    bl fn_806A3D28
    lbz r0, 0x0(r30)
    cmpwi r3, 0x0
    stw r0, 0x0(r31)
    blt lbl_fn_806D7CF0_000004D0
    mr r0, r3
    b lbl_fn_806D7CF0_000004DC
lbl_fn_806D7CF0_000004D0:
    lis r4, lbl_80860EB0@ha
    li r0, -0x1
    stw r3, lbl_80860EB0@l(r4)
lbl_fn_806D7CF0_000004DC:
    lwz r31, 0xc(r1)
    mr r3, r0
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806D7D60(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_806A3D9C
    cmpwi r3, 0x0
    blt lbl_fn_806D7D60_00000520
    mr r0, r3
    b lbl_fn_806D7D60_0000052C
lbl_fn_806D7D60_00000520:
    lis r4, lbl_80860EB0@ha
    li r0, -0x1
    stw r3, lbl_80860EB0@l(r4)
lbl_fn_806D7D60_0000052C:
    mr r3, r0
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806D7DA0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r30, r6
    mr r4, r7
    mr r31, r8
    addi r3, r1, 0x8
    li r5, 0x8
    bl memcpy
    stb r31, 0x8(r1)
    mr r3, r27
    mr r4, r28
    mr r5, r29
    mr r6, r30
    addi r7, r1, 0x8
    bl fn_806A3D74
    cmpwi r3, 0x0
    blt lbl_fn_806D7DA0_000005A4
    mr r0, r3
    b lbl_fn_806D7DA0_000005B0
lbl_fn_806D7DA0_000005A4:
    lis r4, lbl_80860EB0@ha
    li r0, -0x1
    stw r3, lbl_80860EB0@l(r4)
lbl_fn_806D7DA0_000005B0:
    addi r11, r1, 0x30
    mr r3, r0
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806D7E30(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_806A4C5C
    cmpwi r3, 0x0
    blt lbl_fn_806D7E30_000005F0
    mr r0, r3
    b lbl_fn_806D7E30_000005FC
lbl_fn_806D7E30_000005F0:
    lis r4, lbl_80860EB0@ha
    li r0, -0x1
    stw r3, lbl_80860EB0@l(r4)
lbl_fn_806D7E30_000005FC:
    mr r3, r0
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806D7E70(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    stw r30, 0x8(r1)
    mr r30, r4
    lwz r0, 0x0(r5)
    stb r0, 0x0(r4)
    bl fn_806A3C2C
    lbz r0, 0x0(r30)
    cmpwi r3, 0x0
    stw r0, 0x0(r31)
    blt lbl_fn_806D7E70_00000650
    mr r0, r3
    b lbl_fn_806D7E70_0000065C
lbl_fn_806D7E70_00000650:
    lis r4, lbl_80860EB0@ha
    li r0, -0x1
    stw r3, lbl_80860EB0@l(r4)
lbl_fn_806D7E70_0000065C:
    lwz r31, 0xc(r1)
    mr r3, r0
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806D7EE0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    addi r4, r1, 0x8
    bl fn_806A4100
    cmpwi r3, 0x0
    bne lbl_fn_806D7EE0_000006A4
    li r3, -0x1
    b lbl_fn_806D7EE0_000006A8
lbl_fn_806D7EE0_000006A4:
    lwz r3, 0x8(r1)
lbl_fn_806D7EE0_000006A8:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806D7F20(void)
{
    nofralloc
    lis r3, lbl_80860EB0@ha
    lwz r3, lbl_80860EB0@l(r3)
    blr
}

asm void fn_806D7F30(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x34(r1)
    li r0, 0x0
    stw r31, 0x2c(r1)
    mr r31, r6
    stw r30, 0x28(r1)
    mr r30, r5
    stw r29, 0x24(r1)
    mr r29, r4
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    beq lbl_fn_806D7F30_00000710
    ori r0, r0, 0x1
    stw r0, 0xc(r1)
lbl_fn_806D7F30_00000710:
    cmpwi r5, 0x0
    beq lbl_fn_806D7F30_00000724
    lwz r0, 0xc(r1)
    ori r0, r0, 0x8
    stw r0, 0xc(r1)
lbl_fn_806D7F30_00000724:
    li r0, 0x0
    stw r0, 0x10(r1)
    addi r3, r1, 0x8
    li r4, 0x1
    li r6, 0x0
    li r5, 0x0
    bl fn_806A3FA4
    cmpwi cr1, r3, 0x0
    bge cr1, lbl_fn_806D7F30_00000750
    li r3, -0x1
    b lbl_fn_806D7F30_000007DC
lbl_fn_806D7F30_00000750:
    cmpwi r29, 0x0
    beq lbl_fn_806D7F30_0000077C
    ble cr1, lbl_fn_806D7F30_00000774
    lwz r0, 0x10(r1)
    andi. r0, r0, 0x41
    beq lbl_fn_806D7F30_00000774
    li r0, 0x1
    stw r0, 0x0(r29)
    b lbl_fn_806D7F30_0000077C
lbl_fn_806D7F30_00000774:
    li r0, 0x0
    stw r0, 0x0(r29)
lbl_fn_806D7F30_0000077C:
    cmpwi r30, 0x0
    beq lbl_fn_806D7F30_000007AC
    cmpwi r3, 0x0
    ble lbl_fn_806D7F30_000007A4
    lwz r0, 0x10(r1)
    rlwinm. r0, r0, 0, 28, 28
    beq lbl_fn_806D7F30_000007A4
    li r0, 0x1
    stw r0, 0x0(r30)
    b lbl_fn_806D7F30_000007AC
lbl_fn_806D7F30_000007A4:
    li r0, 0x0
    stw r0, 0x0(r30)
lbl_fn_806D7F30_000007AC:
    cmpwi r31, 0x0
    beq lbl_fn_806D7F30_000007DC
    cmpwi r3, 0x0
    ble lbl_fn_806D7F30_000007D4
    lwz r0, 0x10(r1)
    rlwinm. r0, r0, 0, 26, 26
    beq lbl_fn_806D7F30_000007D4
    li r0, 0x1
    stw r0, 0x0(r31)
    b lbl_fn_806D7F30_000007DC
lbl_fn_806D7F30_000007D4:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_806D7F30_000007DC:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806D8060(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_23
    lis r24, lbl_807C2AC0@ha
    mr r27, r3
    addi r3, r24, lbl_807C2AC0@l
    bl strlen
    mr r5, r3
    mr r4, r27
    addi r3, r24, lbl_807C2AC0@l
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_806D8060_000008F8
    lis r24, lbl_80860EB4@ha
    lwz r0, lbl_80860EB4@l(r24)
    cmpwi r0, 0x0
    beq lbl_fn_806D8060_000008F0
    li r23, 0x0
    li r25, 0x0
lbl_fn_806D8060_00000854:
    lwz r3, lbl_80860EB4@l(r24)
    lwzx r0, r3, r25
    cmpwi r0, 0x0
    beq lbl_fn_806D8060_000008C0
    li r27, 0x0
    li r26, 0x0
    b lbl_fn_806D8060_0000087C
lbl_fn_806D8060_00000870:
    bl fn_806D7AC0
    addi r26, r26, 0x4
    addi r27, r27, 0x1
lbl_fn_806D8060_0000087C:
    lwz r0, lbl_80860EB4@l(r24)
    lwzx r3, r25, r0
    lwz r4, 0xc(r3)
    lwzx r3, r4, r26
    cmpwi r3, 0x0
    bne lbl_fn_806D8060_00000870
    slwi r0, r27, 2
    lwzx r3, r4, r0
    bl fn_806D7AC0
    lwz r3, lbl_80860EB4@l(r24)
    lwzx r3, r3, r25
    lwz r3, 0xc(r3)
    bl fn_806D7AC0
    lwz r3, lbl_80860EB4@l(r24)
    lwzx r3, r3, r25
    lwz r3, 0x10(r3)
    bl fn_806D7AC0
lbl_fn_806D8060_000008C0:
    lwz r3, lbl_80860EB4@l(r24)
    lwzx r3, r3, r25
    bl fn_806D7AC0
    addi r23, r23, 0x1
    addi r25, r25, 0x4
    cmplwi r23, 0x1f
    blt lbl_fn_806D8060_00000854
    lis r24, lbl_80860EB4@ha
    lwz r3, lbl_80860EB4@l(r24)
    bl fn_806D7AC0
    li r0, 0x0
    stw r0, lbl_80860EB4@l(r24)
lbl_fn_806D8060_000008F0:
    li r3, 0x0
    b lbl_fn_806D8060_00000CE4
lbl_fn_806D8060_000008F8:
    lis r24, lbl_80860EB4@ha
    lwz r0, lbl_80860EB4@l(r24)
    cmpwi r0, 0x0
    bne lbl_fn_806D8060_00000920
    li r3, 0x7c
    bl fn_806D7A90
    stw r3, lbl_80860EB4@l(r24)
    li r4, 0x0
    li r5, 0x7c
    bl memset
lbl_fn_806D8060_00000920:
    mr r3, r27
    bl strlen
    cmpwi r3, 0x0
    li r28, 0x0
    li r4, 0x0
    beq lbl_fn_806D8060_00000A54
    cmplwi r3, 0x8
    subi r5, r3, 0x8
    ble lbl_fn_806D8060_00000A20
    addi r0, r5, 0x7
    srwi r0, r0, 3
    mtctr r0
    cmplwi r5, 0x0
    ble lbl_fn_806D8060_00000A20
lbl_fn_806D8060_00000958:
    add r23, r27, r4
    lbzx r0, r27, r4
    lbz r25, 0x1(r23)
    addi r26, r4, 0x1
    lbz r31, 0x2(r23)
    extsb r5, r0
    clrlslwi r0, r4, 29, 2
    addi r30, r4, 0x2
    slw r24, r5, r0
    lbz r29, 0x3(r23)
    addi r12, r4, 0x3
    lbz r11, 0x4(r23)
    addi r10, r4, 0x4
    lbz r9, 0x5(r23)
    addi r8, r4, 0x5
    lbz r7, 0x6(r23)
    addi r6, r4, 0x6
    addi r0, r4, 0x7
    lbz r5, 0x7(r23)
    extsb r25, r25
    clrlslwi r26, r26, 29, 2
    add r28, r28, r24
    slw r26, r25, r26
    extsb r31, r31
    clrlslwi r30, r30, 29, 2
    extsb r29, r29
    clrlslwi r12, r12, 29, 2
    add r28, r28, r26
    slw r30, r31, r30
    extsb r11, r11
    clrlslwi r10, r10, 29, 2
    slw r12, r29, r12
    add r28, r28, r30
    extsb r9, r9
    clrlslwi r8, r8, 29, 2
    slw r10, r11, r10
    add r28, r28, r12
    extsb r7, r7
    clrlslwi r6, r6, 29, 2
    slw r8, r9, r8
    add r28, r28, r10
    extsb r5, r5
    clrlslwi r0, r0, 29, 2
    slw r6, r7, r6
    add r28, r28, r8
    addi r4, r4, 0x8
    add r28, r28, r6
    slw r0, r5, r0
    add r28, r28, r0
    bdnz lbl_fn_806D8060_00000958
lbl_fn_806D8060_00000A20:
    subf r0, r4, r3
    add r5, r27, r4
    mtctr r0
    cmplw r4, r3
    bge lbl_fn_806D8060_00000A54
lbl_fn_806D8060_00000A34:
    lbz r3, 0x0(r5)
    clrlslwi r0, r4, 29, 2
    addi r4, r4, 0x1
    addi r5, r5, 0x1
    extsb r3, r3
    slw r0, r3, r0
    add r28, r28, r0
    bdnz lbl_fn_806D8060_00000A34
lbl_fn_806D8060_00000A54:
    lis r4, 0x842
    lis r3, lbl_80860EB4@ha
    addi r31, r4, 0x1085
    lwz r30, lbl_80860EB4@l(r3)
    mulhwu r3, r31, r28
    li r29, 0x0
    subf r0, r3, r28
    srwi r0, r0, 1
    add r0, r0, r3
    srwi r0, r0, 4
    mulli r0, r0, 0x1f
    subf r28, r0, r28
lbl_fn_806D8060_00000A84:
    mullw r0, r29, r29
    add r4, r28, r0
    mulhwu r3, r31, r4
    subf r0, r3, r4
    srwi r0, r0, 1
    add r0, r0, r3
    srwi r0, r0, 4
    mulli r0, r0, 0x1f
    subf r0, r0, r4
    slwi r0, r0, 2
    lwzx r23, r30, r0
    cmpwi r23, 0x0
    beq lbl_fn_806D8060_00000AD4
    lwz r3, 0x10(r23)
    mr r4, r27
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_806D8060_00000AD4
    mr r3, r23
    b lbl_fn_806D8060_00000CE4
lbl_fn_806D8060_00000AD4:
    addi r29, r29, 0x1
    cmplwi r29, 0xf
    blt lbl_fn_806D8060_00000A84
    slwi r0, r28, 2
    lwzx r0, r30, r0
    cmpwi r0, 0x0
    beq lbl_fn_806D8060_00000B9C
    lis r3, 0x842
    li r0, 0x7
    addi r3, r3, 0x1085
    li r6, 0x1
    mtctr r0
lbl_fn_806D8060_00000B04:
    mullw r0, r6, r6
    add r5, r28, r0
    mulhwu r4, r3, r5
    subf r0, r4, r5
    srwi r0, r0, 1
    add r0, r0, r4
    srwi r0, r0, 4
    mulli r0, r0, 0x1f
    subf r4, r0, r5
    slwi r0, r4, 2
    lwzx r0, r30, r0
    cmpwi r0, 0x0
    bne lbl_fn_806D8060_00000B40
    mr r28, r4
    b lbl_fn_806D8060_00000B88
lbl_fn_806D8060_00000B40:
    addi r6, r6, 0x1
    mullw r0, r6, r6
    add r5, r28, r0
    mulhwu r4, r3, r5
    subf r0, r4, r5
    srwi r0, r0, 1
    add r0, r0, r4
    srwi r0, r0, 4
    mulli r0, r0, 0x1f
    subf r4, r0, r5
    slwi r0, r4, 2
    lwzx r0, r30, r0
    cmpwi r0, 0x0
    bne lbl_fn_806D8060_00000B80
    mr r28, r4
    b lbl_fn_806D8060_00000B88
lbl_fn_806D8060_00000B80:
    addi r6, r6, 0x1
    bdnz lbl_fn_806D8060_00000B04
lbl_fn_806D8060_00000B88:
    cmplwi r6, 0xf
    bne lbl_fn_806D8060_00000B9C
    mr r3, r27
    bl fn_806A47D4
    b lbl_fn_806D8060_00000CE4
lbl_fn_806D8060_00000B9C:
    mr r3, r27
    bl fn_806A47D4
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_fn_806D8060_00000BB8
    li r3, 0x0
    b lbl_fn_806D8060_00000CE4
lbl_fn_806D8060_00000BB8:
    slwi r30, r28, 2
    li r3, 0x14
    bl fn_806D7A90
    lis r4, lbl_80860EB4@ha
    li r5, 0x0
    lwz r4, lbl_80860EB4@l(r4)
    stwx r3, r4, r30
    lwz r3, 0xc(r29)
    b lbl_fn_806D8060_00000BE8
    nop
lbl_fn_806D8060_00000BE0:
    addi r3, r3, 0x4
    addi r5, r5, 0x1
lbl_fn_806D8060_00000BE8:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806D8060_00000BE0
    lis r31, lbl_80860EB4@ha
    addi r0, r5, 0x1
    lwz r6, lbl_80860EB4@l(r31)
    li r7, 0x2
    slwi r3, r0, 2
    li r5, 0x0
    lwzx r4, r6, r30
    sth r7, 0x8(r4)
    lwzx r4, r6, r30
    lha r0, 0xa(r29)
    sth r0, 0xa(r4)
    lwzx r4, r6, r30
    stw r5, 0x0(r4)
    lwzx r4, r6, r30
    stw r5, 0x4(r4)
    bl fn_806D7A90
    lwz r4, lbl_80860EB4@l(r31)
    li r23, 0x0
    li r24, 0x0
    lwzx r4, r4, r30
    stw r3, 0xc(r4)
    b lbl_fn_806D8060_00000C88
lbl_fn_806D8060_00000C4C:
    lha r3, 0xa(r29)
    bl fn_806D7A90
    lwz r0, lbl_80860EB4@l(r31)
    lwzx r4, r30, r0
    lwz r4, 0xc(r4)
    stwx r3, r4, r24
    lwzx r4, r30, r0
    lwz r3, 0xc(r29)
    lwz r5, 0xc(r4)
    lwzx r4, r3, r24
    lwzx r3, r5, r24
    lha r5, 0xa(r29)
    bl memcpy
    addi r24, r24, 0x4
    addi r23, r23, 0x1
lbl_fn_806D8060_00000C88:
    lwz r3, 0xc(r29)
    lwzx r0, r3, r24
    cmpwi r0, 0x0
    bne lbl_fn_806D8060_00000C4C
    lis r28, lbl_80860EB4@ha
    slwi r0, r23, 2
    lwz r4, lbl_80860EB4@l(r28)
    li r5, 0x0
    mr r3, r27
    lwzx r4, r4, r30
    lwz r4, 0xc(r4)
    stwx r5, r4, r0
    bl strlen
    addi r3, r3, 0x1
    bl fn_806D7A90
    lwz r6, lbl_80860EB4@l(r28)
    mr r4, r27
    lwzx r5, r6, r30
    stw r3, 0x10(r5)
    lwzx r3, r6, r30
    lwz r3, 0x10(r3)
    bl strcpy
    mr r3, r29
lbl_fn_806D8060_00000CE4:
    addi r11, r1, 0x30
    bl _restgpr_23
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806D8560(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    li r4, 0x3
    stw r30, 0x8(r1)
    mr r30, r3
    crclr 6
    bl fn_806A3DC0
    cmpwi r31, 0x0
    ori r5, r3, 0x4
    beq lbl_fn_806D8560_00000D3C
    rlwinm r5, r3, 0, 30, 28
lbl_fn_806D8560_00000D3C:
    mr r3, r30
    li r4, 0x4
    crclr 6
    bl fn_806A3DC0
    cmpwi r3, 0x0
    bne lbl_fn_806D8560_00000D5C
    li r3, 0x1
    b lbl_fn_806D8560_00000D60
lbl_fn_806D8560_00000D5C:
    li r3, 0x0
lbl_fn_806D8560_00000D60:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806D85E0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x1002
    li r7, 0x4
    stw r0, 0x14(r1)
    addi r6, r1, 0x8
    stw r4, 0x8(r1)
    lis r4, 0x1
    subi r4, r4, 0x1
    bl fn_806A4C5C
    cmpwi r3, 0x0
    blt lbl_fn_806D85E0_00000DB8
    mr r5, r3
    b lbl_fn_806D85E0_00000DC4
lbl_fn_806D85E0_00000DB8:
    lis r4, lbl_80860EB0@ha
    li r5, -0x1
    stw r3, lbl_80860EB0@l(r4)
lbl_fn_806D85E0_00000DC4:
    subfic r3, r5, -0x1
    addi r0, r5, 0x1
    or r0, r3, r0
    srwi r3, r0, 31
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806D8650(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x0
    li r6, 0x0
    stw r0, 0x14(r1)
    li r0, 0x0
    addi r4, r1, 0x8
    stw r0, 0x8(r1)
    bl fn_806D7F30
    cmpwi r3, 0x1
    bne lbl_fn_806D8650_00000E24
    lwz r3, 0x8(r1)
    b lbl_fn_806D8650_00000E28
lbl_fn_806D8650_00000E24:
    li r3, 0x0
lbl_fn_806D8650_00000E28:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806D86A0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    li r6, 0x0
    stw r0, 0x14(r1)
    li r0, 0x0
    addi r5, r1, 0x8
    stw r0, 0x8(r1)
    bl fn_806D7F30
    cmpwi r3, 0x1
    bne lbl_fn_806D86A0_00000E74
    lwz r3, 0x8(r1)
    b lbl_fn_806D86A0_00000E78
lbl_fn_806D86A0_00000E74:
    li r3, 0x0
lbl_fn_806D86A0_00000E78:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806D86F0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    li r0, 0x4
    lis r31, 0x1
    stw r0, 0xc(r1)
    subi r4, r31, 0x2
    addi r6, r1, 0x10
    addi r7, r1, 0xc
    li r3, 0x0
    li r5, 0x4002
    bl fn_806A4D60
    cmpwi r3, 0x0
    beq lbl_fn_806D86F0_00000ED8
    li r3, 0x0
    b lbl_fn_806D86F0_00000FD8
lbl_fn_806D86F0_00000ED8:
    li r0, 0x3c
    lis r6, lbl_80860ECC@ha
    stw r0, 0x8(r1)
    subi r4, r31, 0x2
    addi r6, r6, lbl_80860ECC@l
    addi r7, r1, 0x8
    li r3, 0x0
    li r5, 0x4003
    bl fn_806A4D60
    cmpwi r3, 0x0
    beq lbl_fn_806D86F0_00000F0C
    li r3, 0x0
    b lbl_fn_806D86F0_00000FD8
lbl_fn_806D86F0_00000F0C:
    lwz r4, 0x8(r1)
    cmpwi r4, 0x3c
    beq lbl_fn_806D86F0_00000F34
    lis r3, 0x2aab
    subi r0, r3, 0x5555
    mulhw r0, r0, r4
    srawi r0, r0, 1
    srwi r3, r0, 31
    add r0, r0, r3
    stw r0, 0x10(r1)
lbl_fn_806D86F0_00000F34:
    lis r6, lbl_80860EB8@ha
    lis r7, lbl_807C2AC8@ha
    lis r5, lbl_80860EC8@ha
    lis r30, lbl_80860ECC@ha
    addi r7, r7, lbl_807C2AC8@l
    lis r29, lbl_80860F20@ha
    lis r28, lbl_80860F08@ha
    addi r4, r6, lbl_80860EB8@l
    addi r5, r5, lbl_80860EC8@l
    li r3, 0x2
    li r0, 0x4
    stw r7, lbl_80860EB8@l(r6)
    addi r30, r30, lbl_80860ECC@l
    addi r29, r29, lbl_80860F20@l
    stw r5, 0x4(r4)
    addi r28, r28, lbl_80860F08@l
    li r27, 0x0
    li r31, 0x0
    sth r3, 0x8(r4)
    sth r0, 0xa(r4)
lbl_fn_806D86F0_00000F84:
    lwz r0, 0x10(r1)
    cmpw r27, r0
    bge lbl_fn_806D86F0_00000FA8
    mr r3, r29
    mr r4, r30
    li r5, 0x4
    bl memcpy
    stw r29, 0x0(r28)
    b lbl_fn_806D86F0_00000FAC
lbl_fn_806D86F0_00000FA8:
    stw r31, 0x0(r28)
lbl_fn_806D86F0_00000FAC:
    addi r27, r27, 0x1
    addi r29, r29, 0x4
    cmpwi r27, 0x5
    addi r28, r28, 0x4
    addi r30, r30, 0xc
    blt lbl_fn_806D86F0_00000F84
    lis r3, lbl_80860EB8@ha
    lis r4, lbl_80860F08@ha
    addi r3, r3, lbl_80860EB8@l
    addi r4, r4, lbl_80860F08@l
    stw r4, 0xc(r3)
lbl_fn_806D86F0_00000FD8:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806D8850(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r3, 0x0(r3)
    bl fn_806A4260
    srwi r4, r3, 24
    extrwi r3, r3, 8, 8
    cmpwi r4, 0xa
    bne lbl_fn_806D8850_0000101C
    li r3, 0x1
    b lbl_fn_806D8850_00001054
lbl_fn_806D8850_0000101C:
    cmpwi r4, 0xac
    bne lbl_fn_806D8850_00001038
    subi r0, r3, 0x10
    cmplwi r0, 0xf
    bgt lbl_fn_806D8850_00001038
    li r3, 0x1
    b lbl_fn_806D8850_00001054
lbl_fn_806D8850_00001038:
    cmpwi r4, 0xc0
    bne lbl_fn_806D8850_00001050
    cmpwi r3, 0xa8
    bne lbl_fn_806D8850_00001050
    li r3, 0x1
    b lbl_fn_806D8850_00001054
lbl_fn_806D8850_00001050:
    li r3, 0x0
lbl_fn_806D8850_00001054:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806D88D0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r3, 0x0
    li r5, 0x4002
    stw r0, 0x24(r1)
    li r0, 0x4
    addi r6, r1, 0xc
    addi r7, r1, 0x8
    stw r31, 0x1c(r1)
    lis r31, 0x1
    subi r4, r31, 0x2
    stw r30, 0x18(r1)
    stw r0, 0x8(r1)
    bl fn_806A4D60
    cmpwi r3, 0x0
    blt lbl_fn_806D88D0_000010B8
    li r3, -0x1
    b lbl_fn_806D88D0_00001134
lbl_fn_806D88D0_000010B8:
    lwz r0, 0xc(r1)
    mulli r3, r0, 0xc
    stw r3, 0x8(r1)
    bl fn_806D7A90
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_806D88D0_000010DC
    li r3, -0x1
    b lbl_fn_806D88D0_00001134
lbl_fn_806D88D0_000010DC:
    mr r6, r30
    subi r4, r31, 0x2
    addi r7, r1, 0x8
    li r3, 0x0
    li r5, 0x4003
    bl fn_806A4D60
    cmpwi r3, 0x0
    bge lbl_fn_806D88D0_0000110C
    mr r3, r30
    bl fn_806D7AC0
    li r3, -0x1
    b lbl_fn_806D88D0_00001134
lbl_fn_806D88D0_0000110C:
    lbz r0, 0xa(r30)
    mr r3, r30
    lbz r31, 0xb(r30)
    rlwimi r31, r0, 8, 16, 23
    lbz r4, 0x9(r30)
    lbz r0, 0x8(r30)
    rlwimi r31, r4, 16, 8, 15
    rlwimi r31, r0, 24, 0, 7
    bl fn_806D7AC0
    mr r3, r31
lbl_fn_806D88D0_00001134:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806D89B0(void)
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
    mr r3, r29
    bl fn_806D7A90
    stw r3, 0x318(r31)
    add r6, r3, r29
    mr r3, r31
    mr r4, r28
    mr r5, r30
    mr r7, r29
    li r8, 0x10
    li r9, 0x1
    bl OSCreateThread
    mr r3, r31
    bl OSResumeThread
    lwz r31, 0x1c(r1)
    li r3, 0x0
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806D8A40(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl OSCancelThread
    lwz r3, 0x318(r31)
    cmpwi r3, 0x0
    beq lbl_fn_806D8A40_00001210
    bl fn_806D7AC0
    li r0, 0x0
    stw r0, 0x318(r31)
lbl_fn_806D8A40_00001210:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806D8A90(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl OSIsThreadTerminated
    cmpwi r3, 0x0
    bne lbl_fn_806D8A90_00001258
    mr r3, r31
    bl OSCancelThread
lbl_fn_806D8A90_00001258:
    lwz r3, 0x318(r31)
    cmpwi r3, 0x0
    beq lbl_fn_806D8A90_00001270
    bl fn_806D7AC0
    li r0, 0x0
    stw r0, 0x318(r31)
lbl_fn_806D8A90_00001270:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806D8AF0(void)
{
    nofralloc
    b fn_805F30F0
}

asm void fn_806D8B00(void)
{
    nofralloc
    b fn_805F3130
}

asm void fn_806D8B10(void)
{
    nofralloc
    b fn_805F3210
}

asm void fn_806D8B20(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl OSGetTime
    lis r6, 0x8000
    li r5, 0x0
    lwz r0, 0xf8(r6)
    srwi r6, r0, 2
    bl __div2i
    cmpwi r31, 0x0
    beq lbl_fn_806D8B20_000012F8
    stw r4, 0x0(r31)
lbl_fn_806D8B20_000012F8:
    lwz r31, 0xc(r1)
    mr r3, r4
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806D8B70(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_80860F50@ha
    stw r30, 0x18(r1)
    mr r30, r3
    lwz r0, lbl_80860F50@l(r31)
    cmpwi r0, 0x0
    bne lbl_fn_806D8B70_0000134C
    lis r3, lbl_80860F38@ha
    addi r3, r3, lbl_80860F38@l
    bl fn_806D8AF0
    li r0, 0x1
    stw r0, lbl_80860F50@l(r31)
lbl_fn_806D8B70_0000134C:
    lis r3, lbl_80860F38@ha
    addi r3, r3, lbl_80860F38@l
    bl fn_806D8B00
    lwz r3, 0x0(r30)
    bl fn_806D8060
    cmpwi r3, 0x0
    beq lbl_fn_806D8B70_0000138C
    lwz r4, 0xc(r3)
    addi r3, r1, 0x8
    lwz r4, 0x0(r4)
    lwz r0, 0x0(r4)
    stw r0, 0x8(r1)
    bl fn_806A420C
    bl fn_806D7EE0
    stw r3, 0x4(r30)
    b lbl_fn_806D8B70_00001394
lbl_fn_806D8B70_0000138C:
    li r0, -0x1
    stw r0, 0x4(r30)
lbl_fn_806D8B70_00001394:
    li r0, 0x1
    lis r3, lbl_80860F38@ha
    stw r0, 0x8(r30)
    addi r3, r3, lbl_80860F38@l
    bl fn_806D8B10
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806D8C20(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    li r3, 0x330
    bl fn_806D7A90
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_fn_806D8C20_000013F8
    li r3, -0x1
    b lbl_fn_806D8C20_0000149C
lbl_fn_806D8C20_000013F8:
    cmpwi r27, 0x0
    bne lbl_fn_806D8C20_00001408
    li r30, 0x0
    b lbl_fn_806D8C20_00001434
lbl_fn_806D8C20_00001408:
    mr r3, r27
    bl strlen
    addi r31, r3, 0x1
    mr r3, r31
    bl fn_806D7A90
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_806D8C20_00001434
    mr r4, r27
    mr r5, r31
    bl memcpy
lbl_fn_806D8C20_00001434:
    cmpwi r30, 0x0
    stw r30, 0x0(r29)
    bne lbl_fn_806D8C20_00001450
    mr r3, r29
    bl fn_806D7AC0
    li r3, -0x1
    b lbl_fn_806D8C20_0000149C
lbl_fn_806D8C20_00001450:
    li r31, 0x0
    lis r3, fn_806D8B70@ha
    stw r31, 0x8(r29)
    mr r5, r29
    addi r3, r3, fn_806D8B70@l
    addi r6, r29, 0x10
    li r4, 0x1000
    bl fn_806D89B0
    cmpwi r3, -0x1
    bne lbl_fn_806D8C20_00001494
    lwz r3, 0x0(r29)
    bl fn_806D7AC0
    stw r31, 0x0(r29)
    mr r3, r29
    bl fn_806D7AC0
    li r3, -0x1
    b lbl_fn_806D8C20_0000149C
lbl_fn_806D8C20_00001494:
    stw r29, 0x0(r28)
    li r3, 0x0
lbl_fn_806D8C20_0000149C:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806D8D20(void)
{
    nofralloc
    stwu r1, -0x330(r1)
    mflr r0
    addi r4, r3, 0xc
    stw r0, 0x334(r1)
    li r0, 0x64
    addi r5, r1, 0x4
    stw r31, 0x32c(r1)
    mr r31, r3
    mtctr r0
    nop
lbl_fn_806D8D20_000014E8:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_fn_806D8D20_000014E8
    addi r3, r1, 0x8
    bl fn_806D8A40
    lwz r3, 0x0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_806D8D20_0000151C
    bl fn_806D7AC0
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_806D8D20_0000151C:
    mr r3, r31
    bl fn_806D7AC0
    lwz r0, 0x334(r1)
    lwz r31, 0x32c(r1)
    mtlr r0
    addi r1, r1, 0x330
    blr
}

asm void fn_806D8DA0(void)
{
    nofralloc
    stwu r1, -0x330(r1)
    mflr r0
    stw r0, 0x334(r1)
    stw r31, 0x32c(r1)
    stw r30, 0x328(r1)
    mr r30, r3
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806D8DA0_0000156C
    li r3, 0x0
    b lbl_fn_806D8DA0_000015B0
lbl_fn_806D8DA0_0000156C:
    li r0, 0x64
    addi r5, r1, 0x4
    addi r4, r3, 0xc
    lwz r31, 0x4(r3)
    mtctr r0
lbl_fn_806D8DA0_00001580:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_fn_806D8DA0_00001580
    addi r3, r1, 0x8
    bl fn_806D8A90
    lwz r3, 0x0(r30)
    bl fn_806D7AC0
    mr r3, r30
    bl fn_806D7AC0
    mr r3, r31
lbl_fn_806D8DA0_000015B0:
    lwz r0, 0x334(r1)
    lwz r31, 0x32c(r1)
    lwz r30, 0x328(r1)
    mtlr r0
    addi r1, r1, 0x330
    blr
}

asm void fn_806D8E30(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    bne lbl_fn_806D8E30_000015FC
    li r3, 0x0
    b lbl_fn_806D8E30_00001628
lbl_fn_806D8E30_000015FC:
    bl strlen
    addi r30, r3, 0x1
    mr r3, r30
    bl fn_806D7A90
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_806D8E30_00001624
    mr r4, r29
    mr r5, r30
    bl memcpy
lbl_fn_806D8E30_00001624:
    mr r3, r31
lbl_fn_806D8E30_00001628:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806D8EB0(void)
{
    nofralloc
    lis r5, lbl_807BB380@ha
    mr r6, r3
    addi r5, r5, lbl_807BB380@l
    b lbl_fn_806D8EB0_00001694
lbl_fn_806D8EB0_00001660:
    extsb r0, r4
    li r4, 0x1
    cmplwi r0, 0xff
    bgt lbl_fn_806D8EB0_00001674
    li r4, 0x0
lbl_fn_806D8EB0_00001674:
    cmpwi r4, 0x0
    beq lbl_fn_806D8EB0_00001680
    b lbl_fn_806D8EB0_0000168C
lbl_fn_806D8EB0_00001680:
    lwz r4, 0x38(r5)
    lwz r4, 0x10(r4)
    lbzx r0, r4, r0
lbl_fn_806D8EB0_0000168C:
    stb r0, 0x0(r3)
    addi r3, r3, 0x1
lbl_fn_806D8EB0_00001694:
    lbz r4, 0x0(r3)
    extsb. r0, r4
    bne lbl_fn_806D8EB0_00001660
    mr r3, r6
    blr
}

asm void fn_806D8F10(void)
{
    nofralloc
    blr
}

asm void fn_806D8F20(void)
{
    nofralloc
    blr
}

asm void fn_806D8F30(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl OSGetTime
    lis r6, 0x8000
    lis r5, 0x1062
    lwz r0, 0xf8(r6)
    addi r6, r5, 0x4dd3
    li r5, 0x0
    srwi r0, r0, 2
    mulhwu r0, r6, r0
    srwi r6, r0, 6
    bl __div2i
    lwz r0, 0x14(r1)
    mr r3, r4
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806D8F80(void)
{
    nofralloc
    lis r5, 0x8000
    lis r4, 0x1062
    lwz r0, 0xf8(r5)
    addi r4, r4, 0x4dd3
    li r6, 0x0
    srwi r0, r0, 2
    mulhwu r4, r4, r0
    mullw r0, r3, r6
    srwi r4, r4, 6
    mulhwu r5, r3, r4
    mullw r6, r6, r4
    mullw r4, r3, r4
    add r3, r5, r6
    add r3, r3, r0
    b OSSleepTicks
}

asm void fn_806D8FC0(void)
{
    nofralloc
    cmpwi r3, 0x0
    li r0, 0x1
    beq lbl_fn_806D8FC0_00001770
    clrlwi r0, r3, 1
lbl_fn_806D8FC0_00001770:
    lis r3, lbl_807C2AD8@ha
    stw r0, lbl_807C2AD8@l(r3)
    blr
}

asm void fn_806D8FE0(void)
{
    nofralloc
    subf. r7, r3, r4
    beqlr
    lis r5, lbl_807C2AD8@ha
    lis r4, 0x8000
    lwz r5, lbl_807C2AD8@l(r5)
    subi r0, r4, 0x1
    srwi r4, r5, 16
    clrlwi r5, r5, 16
    mulli r6, r4, 0x41a7
    mulli r5, r5, 0x41a7
    clrlslwi r4, r6, 17, 16
    add r5, r5, r4
    cmplw r5, r0
    ble lbl_fn_806D8FE0_000017C0
    clrlwi r5, r5, 1
    addi r5, r5, 0x1
lbl_fn_806D8FE0_000017C0:
    srwi r0, r6, 15
    lis r4, 0x8000
    add r5, r5, r0
    subi r0, r4, 0x1
    cmplw r5, r0
    ble lbl_fn_806D8FE0_000017E0
    clrlwi r5, r5, 1
    addi r5, r5, 0x1
lbl_fn_806D8FE0_000017E0:
    divwu r0, r5, r7
    lis r4, lbl_807C2AD8@ha
    stw r5, lbl_807C2AD8@l(r4)
    mullw r0, r0, r7
    subf r0, r0, r5
    add r3, r0, r3
    blr
}

asm void fn_806D9060(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    cmpwi r7, 0x1
    lis r8, lbl_8076B678@ha
    mr r28, r4
    mr r29, r6
    addi r8, r8, lbl_8076B678@l
    li r11, 0x0
    li r30, 0x0
    beq lbl_fn_806D9060_00001840
    cmpwi r7, 0x2
    beq lbl_fn_806D9060_00001848
    b lbl_fn_806D9060_00001850
lbl_fn_806D9060_00001840:
    addi r10, r8, 0x44
    b lbl_fn_806D9060_00001854
lbl_fn_806D9060_00001848:
    addi r10, r8, 0x48
    b lbl_fn_806D9060_00001854
lbl_fn_806D9060_00001850:
    addi r10, r8, 0x40
lbl_fn_806D9060_00001854:
    cmpwi r5, 0x0
    bgt lbl_fn_806D9060_00001878
    cmpwi r6, 0x0
    beq lbl_fn_806D9060_0000186C
    li r0, 0x0
    stw r0, 0x0(r6)
lbl_fn_806D9060_0000186C:
    li r0, 0x0
    stb r0, 0x0(r4)
    b lbl_fn_806D9060_00001B04
lbl_fn_806D9060_00001878:
    mr r12, r3
    addi r7, r1, 0x8
    li r0, 0x3f
    li r8, 0x3e
    b lbl_fn_806D9060_00001A1C
    nop
lbl_fn_806D9060_00001890:
    subi r27, r9, 0x30
    clrlwi r27, r27, 24
    cmplwi r27, 0x9
    bgt lbl_fn_806D9060_000018C0
    slwi r27, r11, 30
    srwi r31, r11, 31
    subf r27, r31, r27
    addi r9, r9, 0x4
    rotlwi r27, r27, 2
    add r27, r27, r31
    stbx r9, r7, r27
    b lbl_fn_806D9060_000019B4
lbl_fn_806D9060_000018C0:
    subi r27, r9, 0x61
    clrlwi r27, r27, 24
    cmplwi r27, 0x19
    bgt lbl_fn_806D9060_000018F0
    slwi r27, r11, 30
    srwi r31, r11, 31
    subf r27, r31, r27
    subi r9, r9, 0x47
    rotlwi r27, r27, 2
    add r27, r27, r31
    stbx r9, r7, r27
    b lbl_fn_806D9060_000019B4
lbl_fn_806D9060_000018F0:
    subi r31, r9, 0x41
    clrlwi r27, r31, 24
    cmplwi r27, 0x19
    bgt lbl_fn_806D9060_0000191C
    slwi r9, r11, 30
    srwi r27, r11, 31
    subf r9, r27, r9
    rotlwi r9, r9, 2
    add r27, r9, r27
    stbx r31, r7, r27
    b lbl_fn_806D9060_000019B4
lbl_fn_806D9060_0000191C:
    lbz r31, 0x0(r10)
    extsb r27, r9
    extsb r9, r31
    cmpw r9, r27
    bne lbl_fn_806D9060_0000194C
    slwi r9, r11, 30
    srwi r27, r11, 31
    subf r9, r27, r9
    rotlwi r9, r9, 2
    add r27, r9, r27
    stbx r8, r7, r27
    b lbl_fn_806D9060_000019B4
lbl_fn_806D9060_0000194C:
    lbz r9, 0x1(r10)
    extsb r9, r9
    cmpw r9, r27
    bne lbl_fn_806D9060_00001978
    slwi r9, r11, 30
    srwi r27, r11, 31
    subf r9, r27, r9
    rotlwi r9, r9, 2
    add r27, r9, r27
    stbx r0, r7, r27
    b lbl_fn_806D9060_000019B4
lbl_fn_806D9060_00001978:
    lbzx r0, r3, r11
    lbz r3, 0x2(r10)
    extsb r0, r0
    extsb r3, r3
    cmpw r3, r0
    beq lbl_fn_806D9060_00001A3C
    cmpwi r0, 0x0
    beq lbl_fn_806D9060_00001A3C
    cmpwi r6, 0x0
    beq lbl_fn_806D9060_000019A8
    li r0, 0x0
    stw r0, 0x0(r6)
lbl_fn_806D9060_000019A8:
    li r0, 0x0
    stb r0, 0x0(r4)
    b lbl_fn_806D9060_00001B04
lbl_fn_806D9060_000019B4:
    cmpwi r27, 0x3
    bne lbl_fn_806D9060_00001A14
    lbz r31, 0x8(r1)
    add r9, r4, r30
    lbz r27, 0x9(r1)
    extsb r31, r31
    extsb r27, r27
    slwi r31, r31, 2
    srawi r27, r27, 4
    or r27, r31, r27
    stbx r27, r4, r30
    addi r30, r30, 0x3
    lbz r27, 0xa(r1)
    lbz r31, 0x9(r1)
    extsb r27, r27
    clrlslwi r31, r31, 28, 4
    srawi r27, r27, 2
    or r27, r31, r27
    stb r27, 0x1(r9)
    lbz r31, 0xa(r1)
    lbz r27, 0xb(r1)
    clrlslwi r31, r31, 30, 6
    or r27, r31, r27
    stb r27, 0x2(r9)
lbl_fn_806D9060_00001A14:
    addi r11, r11, 0x1
    addi r12, r12, 0x1
lbl_fn_806D9060_00001A1C:
    cmpw r11, r5
    bge lbl_fn_806D9060_00001A3C
    lbz r9, 0x0(r12)
    lbz r27, 0x2(r10)
    extsb r31, r9
    extsb r27, r27
    cmpw r27, r31
    bne lbl_fn_806D9060_00001890
lbl_fn_806D9060_00001A3C:
    cmpwi r11, 0x0
    beq lbl_fn_806D9060_00001AF8
    slwi r0, r11, 30
    srwi r3, r11, 31
    subf r0, r3, r0
    rotlwi r0, r0, 2
    add. r31, r0, r3
    beq lbl_fn_806D9060_00001AF8
    lbz r4, 0x2(r10)
    addi r3, r1, 0x8
    add r3, r3, r31
    subfic r5, r31, 0x4
    extsb r4, r4
    bl memset
    cmpwi r31, 0x2
    blt lbl_fn_806D9060_00001A9C
    lbz r3, 0x8(r1)
    lbz r0, 0x9(r1)
    extsb r3, r3
    extsb r0, r0
    slwi r3, r3, 2
    srawi r0, r0, 4
    or r0, r3, r0
    stbx r0, r28, r30
lbl_fn_806D9060_00001A9C:
    cmpwi r31, 0x3
    blt lbl_fn_806D9060_00001AC4
    lbz r0, 0xa(r1)
    add r3, r28, r30
    lbz r4, 0x9(r1)
    extsb r0, r0
    clrlslwi r4, r4, 28, 4
    srawi r0, r0, 2
    or r0, r4, r0
    stb r0, 0x1(r3)
lbl_fn_806D9060_00001AC4:
    cmpwi r31, 0x4
    blt lbl_fn_806D9060_00001AE4
    lbz r4, 0xa(r1)
    add r3, r28, r30
    lbz r0, 0xb(r1)
    clrlslwi r4, r4, 30, 6
    or r0, r4, r0
    stb r0, 0x2(r3)
lbl_fn_806D9060_00001AE4:
    cmpwi r31, 0x3
    addi r0, r30, 0x1
    bne lbl_fn_806D9060_00001AF4
    addi r0, r30, 0x2
lbl_fn_806D9060_00001AF4:
    mr r30, r0
lbl_fn_806D9060_00001AF8:
    cmpwi r29, 0x0
    beq lbl_fn_806D9060_00001B04
    stw r30, 0x0(r29)
lbl_fn_806D9060_00001B04:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806D9380(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    lis r7, lbl_8076B678@ha
    cmpwi r6, 0x1
    mr r0, r4
    stw r31, 0x1c(r1)
    mr r31, r5
    addi r7, r7, lbl_8076B678@l
    beq lbl_fn_806D9380_00001B4C
    cmpwi r6, 0x2
    beq lbl_fn_806D9380_00001B54
    b lbl_fn_806D9380_00001B5C
lbl_fn_806D9380_00001B4C:
    addi r6, r7, 0x44
    b lbl_fn_806D9380_00001B60
lbl_fn_806D9380_00001B54:
    addi r6, r7, 0x48
    b lbl_fn_806D9380_00001B60
lbl_fn_806D9380_00001B5C:
    addi r6, r7, 0x40
lbl_fn_806D9380_00001B60:
    li r12, 0x0
    b lbl_fn_806D9380_00001C44
lbl_fn_806D9380_00001B68:
    mr r7, r3
    addi r10, r1, 0x8
    li r9, 0x0
    b lbl_fn_806D9380_00001B8C
lbl_fn_806D9380_00001B78:
    lbz r8, 0x0(r7)
    addi r7, r7, 0x1
    stb r8, 0x0(r10)
    addi r10, r10, 0x1
    addi r9, r9, 0x1
lbl_fn_806D9380_00001B8C:
    cmpwi r31, 0x3
    li r8, 0x3
    bge lbl_fn_806D9380_00001B9C
    mr r8, r31
lbl_fn_806D9380_00001B9C:
    cmpw r9, r8
    blt lbl_fn_806D9380_00001B78
    cmpwi r9, 0x3
    addi r10, r1, 0x8
    add r10, r10, r9
    subfic r8, r9, 0x3
    bge lbl_fn_806D9380_00001C04
    srwi. r7, r8, 3
    mtctr r7
    beq lbl_fn_806D9380_00001BF4
lbl_fn_806D9380_00001BC4:
    stb r12, 0x0(r10)
    stb r12, 0x1(r10)
    stb r12, 0x2(r10)
    stb r12, 0x3(r10)
    stb r12, 0x4(r10)
    stb r12, 0x5(r10)
    stb r12, 0x6(r10)
    stb r12, 0x7(r10)
    addi r10, r10, 0x8
    bdnz lbl_fn_806D9380_00001BC4
    andi. r8, r8, 0x7
    beq lbl_fn_806D9380_00001C04
lbl_fn_806D9380_00001BF4:
    mtctr r8
lbl_fn_806D9380_00001BF8:
    stb r12, 0x0(r10)
    addi r10, r10, 0x1
    bdnz lbl_fn_806D9380_00001BF8
lbl_fn_806D9380_00001C04:
    lbz r11, 0x8(r1)
    addi r3, r3, 0x3
    lbz r10, 0x9(r1)
    subi r31, r31, 0x3
    srawi r7, r11, 2
    stb r7, 0x0(r4)
    lbz r8, 0xa(r1)
    srawi r9, r10, 4
    rlwimi r9, r11, 4, 26, 27
    stb r9, 0x1(r4)
    clrlwi r7, r8, 26
    srawi r8, r8, 6
    rlwimi r8, r10, 2, 26, 29
    stb r8, 0x2(r4)
    stb r7, 0x3(r4)
    addi r4, r4, 0x4
lbl_fn_806D9380_00001C44:
    cmpwi r31, 0x0
    bgt lbl_fn_806D9380_00001B68
    lis r3, 0x5555
    mr r8, r4
    addi r3, r3, 0x5556
    mulhw r7, r3, r5
    srwi r3, r7, 31
    add r3, r7, r3
    mulli r3, r3, 0x3
    subf r3, r3, r5
    cmpwi r3, 0x1
    bne lbl_fn_806D9380_00001C7C
    subi r8, r4, 0x2
    b lbl_fn_806D9380_00001C88
lbl_fn_806D9380_00001C7C:
    cmpwi r3, 0x2
    bne lbl_fn_806D9380_00001C88
    subi r8, r4, 0x1
lbl_fn_806D9380_00001C88:
    subf r3, r0, r4
    li r5, 0x0
    stb r5, 0x0(r4)
    mtctr r3
    cmplw r4, r0
    ble lbl_fn_806D9380_00001D24
lbl_fn_806D9380_00001CA0:
    subi r4, r4, 0x1
    cmplw r4, r8
    blt lbl_fn_806D9380_00001CB8
    lbz r0, 0x2(r6)
    stb r0, 0x0(r4)
    b lbl_fn_806D9380_00001D20
lbl_fn_806D9380_00001CB8:
    lbz r3, 0x0(r4)
    extsb r0, r3
    cmpwi r0, 0x19
    bgt lbl_fn_806D9380_00001CD4
    addi r0, r3, 0x41
    stb r0, 0x0(r4)
    b lbl_fn_806D9380_00001D20
lbl_fn_806D9380_00001CD4:
    cmpwi r0, 0x33
    bgt lbl_fn_806D9380_00001CE8
    addi r0, r3, 0x47
    stb r0, 0x0(r4)
    b lbl_fn_806D9380_00001D20
lbl_fn_806D9380_00001CE8:
    cmpwi r0, 0x3d
    bgt lbl_fn_806D9380_00001CFC
    subi r0, r3, 0x4
    stb r0, 0x0(r4)
    b lbl_fn_806D9380_00001D20
lbl_fn_806D9380_00001CFC:
    cmpwi r0, 0x3e
    bne lbl_fn_806D9380_00001D10
    lbz r0, 0x0(r6)
    stb r0, 0x0(r4)
    b lbl_fn_806D9380_00001D20
lbl_fn_806D9380_00001D10:
    cmpwi r0, 0x3f
    bne lbl_fn_806D9380_00001D20
    lbz r0, 0x1(r6)
    stb r0, 0x0(r4)
lbl_fn_806D9380_00001D20:
    bdnz lbl_fn_806D9380_00001CA0
lbl_fn_806D9380_00001D24:
    lwz r31, 0x1c(r1)
    addi r1, r1, 0x20
    blr
}

asm void fn_806D9590(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    mr r3, r30
    bl strlen
    subi r0, r31, 0x1
    mr r31, r3
    cmplw r3, r0
    ble lbl_fn_806D9590_00001D70
    mr r31, r0
lbl_fn_806D9590_00001D70:
    mr r3, r29
    mr r4, r30
    mr r5, r31
    bl memcpy
    li r0, 0x0
    stbx r0, r29, r31
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806D9610(void)
{
    nofralloc
    lwz r3, 0x20(r3)
    b fn_806D5850
}

asm void fn_806D9620(void)
{
    nofralloc
    li r5, 0x10
    b fn_8067E23C
}

asm void fn_806D9630(void)
{
    nofralloc
    li r5, 0x10
    addi r3, r3, 0x10
    addi r4, r4, 0x10
    b fn_8067E23C
}

asm void fn_806D9640(void)
{
    nofralloc
    lwz r5, 0x0(r3)
    lwz r0, 0x0(r4)
    cmplw r5, r0
    beq lbl_fn_806D9640_00001DF8
    li r3, 0x1
    blr
lbl_fn_806D9640_00001DF8:
    lhz r5, 0x4(r3)
    lhz r0, 0x4(r4)
    subf r3, r5, r0
    subf r0, r0, r5
    or r0, r3, r0
    srwi r3, r0, 31
    blr
}

asm void fn_806D9680(void)
{
    nofralloc
    lwz r5, 0x8(r3)
    lwz r0, 0x8(r4)
    subf r3, r5, r0
    subf r0, r0, r5
    or r0, r3, r0
    srwi r3, r0, 31
    blr
}

asm void fn_806D96A0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    lis r29, lbl_80860F58@ha
    addi r29, r29, lbl_80860F58@l
    lwz r12, 0x24(r29)
    cmpwi r12, 0x0
    beq lbl_fn_806D96A0_00001E7C
    lwz r4, 0x2c(r29)
    li r3, 0x3
    mtctr r12
    bctrl
lbl_fn_806D96A0_00001E7C:
    lwz r3, 0x8(r29)
    bl fn_806D58F0
    mr r31, r3
    li r30, 0x0
    b lbl_fn_806D96A0_00001EBC
lbl_fn_806D96A0_00001E90:
    lwz r3, 0x8(r29)
    mr r4, r30
    bl fn_806D5900
    lwz r12, 0x34(r3)
    cmpwi r12, 0x0
    beq lbl_fn_806D96A0_00001EB8
    lwz r4, 0x38(r3)
    li r3, 0x3
    mtctr r12
    bctrl
lbl_fn_806D96A0_00001EB8:
    addi r30, r30, 0x1
lbl_fn_806D96A0_00001EBC:
    cmpw r30, r31
    blt lbl_fn_806D96A0_00001E90
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806D9740(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_25
    subi r0, r4, 0x2
    lis r28, lbl_80860F58@ha
    cmplwi r0, 0x1
    mr r25, r3
    addi r28, r28, lbl_80860F58@l
    bgt lbl_fn_806D9740_00001F14
    li r26, 0x2
    b lbl_fn_806D9740_00001F24
lbl_fn_806D9740_00001F14:
    cmpwi r4, 0x4
    bne lbl_fn_806D9740_00001F20
    li r4, 0x3
lbl_fn_806D9740_00001F20:
    mr r26, r4
lbl_fn_806D9740_00001F24:
    mr r3, r25
    bl fn_806EACA0
    mr r29, r3
    mr r3, r25
    bl fn_806EAC90
    clrlwi r4, r29, 16
    addi r5, r1, 0x14
    bl fn_806EEDC0
    lwz r3, 0x8(r28)
    bl fn_806D58F0
    mr r29, r3
    li r27, 0x0
    b lbl_fn_806D9740_00001FA4
lbl_fn_806D9740_00001F58:
    lwz r3, 0x8(r28)
    mr r4, r27
    bl fn_806D5900
    lwz r0, 0x24(r3)
    mr r30, r3
    cmpwi r0, 0x0
    beq lbl_fn_806D9740_00001FA0
    mr r3, r25
    bl fn_806EACA0
    mr r31, r3
    mr r3, r25
    bl fn_806EAC90
    lwz r12, 0x24(r30)
    mr r5, r26
    clrlwi r4, r31, 16
    lwz r6, 0x38(r30)
    mtctr r12
    bctrl
lbl_fn_806D9740_00001FA0:
    addi r27, r27, 0x1
lbl_fn_806D9740_00001FA4:
    cmpw r27, r29
    blt lbl_fn_806D9740_00001F58
    lwz r0, 0x14(r28)
    cmpwi r0, 0x0
    beq lbl_fn_806D9740_00001FE4
    mr r3, r25
    bl fn_806EACA0
    mr r31, r3
    mr r3, r25
    bl fn_806EAC90
    lwz r12, 0x14(r28)
    mr r5, r26
    clrlwi r4, r31, 16
    lwz r6, 0x2c(r28)
    mtctr r12
    bctrl
lbl_fn_806D9740_00001FE4:
    lis r5, fn_806D9680@ha
    stw r25, 0x10(r1)
    lwz r3, 0x4(r28)
    addi r4, r1, 0x8
    addi r5, r5, fn_806D9680@l
    li r6, 0x0
    li r7, 0x0
    bl fn_806D5E60
    cmpwi r3, -0x1
    mr r4, r3
    beq lbl_fn_806D9740_00002018
    lwz r3, 0x4(r28)
    bl fn_806D5C90
lbl_fn_806D9740_00002018:
    addi r11, r1, 0x50
    bl _restgpr_25
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}
