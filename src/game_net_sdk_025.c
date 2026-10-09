#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void OSGetTime(void);
extern void __div2i(void);
extern void _restgpr_18(void);
extern void _restgpr_22(void);
extern void _restgpr_23(void);
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_18(void);
extern void _savegpr_22(void);
extern void _savegpr_23(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void fn_805EBFD0(void);
extern void fn_806809C0(void);
extern void fn_8068236C(void);
extern void fn_8068446C(void);
extern void fn_80686A48(void);
extern void fn_80686A64(void);
extern void fn_80696324(void);
extern void fn_806A7110(void);
extern void fn_806A7130(void);
extern void fn_806A72E0(void);
extern void fn_806A7400(void);
extern void fn_806A75C0(void);
extern void fn_806A76B0(void);
extern void fn_806A7A00(void);
extern void fn_806A7A50(void);
extern void fn_806A7B10(void);
extern void fn_806A7CC0(void);
extern void fn_806A7FB0(void);
extern void fn_806CFB40(void);
extern void fn_806CFCC0(void);
extern void fn_806D0970(void);
extern void fn_806D0B40(void);
extern void fn_806D0C30(void);
extern void fn_806D0EA0(void);
extern void fn_806D1590(void);
extern void fn_806D15E0(void);
extern void fn_806D1600(void);
extern void fn_806D16A0(void);
extern void fn_806D16B0(void);
extern void fn_806D2D80(void);
extern void fn_806D3200(void);
extern void fn_806D3210(void);
extern void fn_806D9380(void);
extern int sprintf(char* str, const char* format, ...);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_807C2710[];
extern u8 lbl_807C2908[];
extern u8 lbl_807C29B8[];
extern u8 lbl_807C29DC[];
extern u8 lbl_807C29E8[];
extern u8 lbl_807C2A00[];
extern u8 lbl_807C2A18[];
extern u8 lbl_807C2A2C[];
extern u8 lbl_80860D88[];
extern u8 lbl_80860D8C[];
extern u8 lbl_80860D90[];
extern u8 lbl_80860DC0[];
extern u8 lbl_80860DC8[];

/* Small data declarations */

/* Function declarations */
void pad_03_806D35EC_text(void);
void fn_806D35F0(void);
void fn_806D3BF0(void);
void fn_806D3D70(void);
void fn_806D3F50(void);
void fn_806D3F90(void);
void fn_806D4030(void);
void fn_806D4050(void);
void fn_806D42D0(void);
void fn_806D42E0(void);
void fn_806D42F0(void);
void fn_806D45D0(void);
void fn_806D4950(void);
void fn_806D49C0(void);
void fn_806D4A90(void);
void fn_806D4AC0(void);
void fn_806D4BE0(void);
void fn_806D4E00(void);
void fn_806D4E70(void);
void fn_806D4FD0(void);
void fn_806D4FE0(void);
void fn_806D51D0(void);
void fn_806D52B0(void);
void fn_806D52C0(void);
void fn_806D52D0(void);
void fn_806D52E0(void);
void fn_806D52F0(void);
void fn_806D5300(void);
void fn_806D5420(void);
void fn_806D55A0(void);

asm void pad_03_806D35EC_text(void)
{
    nofralloc
    opword 0x00000000
}

asm void fn_806D35F0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_23
    add r30, r7, r5
    mr r23, r3
    addi r31, r30, 0x4
    mr r24, r4
    mr r25, r5
    mr r26, r6
    mr r27, r7
    mr r4, r31
    li r28, 0x0
    li r3, 0x8
    bl fn_806A72E0
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_fn_806D35F0_00000058
    li r3, 0x2
    b lbl_fn_806D35F0_000005E4
lbl_fn_806D35F0_00000058:
    cmpwi cr1, r25, 0x0
    li r4, 0x0
    ble cr1, lbl_fn_806D35F0_00000124
    cmpwi r25, 0x8
    subi r6, r25, 0x8
    ble lbl_fn_806D35F0_000000F8
    li r7, 0x0
    blt cr1, lbl_fn_806D35F0_0000008C
    lis r5, 0x8000
    subi r0, r5, 0x2
    cmpw r25, r0
    bgt lbl_fn_806D35F0_0000008C
    li r7, 0x1
lbl_fn_806D35F0_0000008C:
    cmpwi r7, 0x0
    beq lbl_fn_806D35F0_000000F8
    addi r0, r6, 0x7
    srwi r0, r0, 3
    mtctr r0
    cmpwi r6, 0x0
    ble lbl_fn_806D35F0_000000F8
lbl_fn_806D35F0_000000A8:
    add r5, r24, r4
    add r6, r3, r4
    lbzx r0, r24, r4
    addi r4, r4, 0x8
    stb r0, 0x4(r6)
    lbz r0, 0x1(r5)
    stb r0, 0x5(r6)
    lbz r0, 0x2(r5)
    stb r0, 0x6(r6)
    lbz r0, 0x3(r5)
    stb r0, 0x7(r6)
    lbz r0, 0x4(r5)
    stb r0, 0x8(r6)
    lbz r0, 0x5(r5)
    stb r0, 0x9(r6)
    lbz r0, 0x6(r5)
    stb r0, 0xa(r6)
    lbz r0, 0x7(r5)
    stb r0, 0xb(r6)
    bdnz lbl_fn_806D35F0_000000A8
lbl_fn_806D35F0_000000F8:
    subf r0, r4, r25
    add r5, r24, r4
    mtctr r0
    cmpw r4, r25
    bge lbl_fn_806D35F0_00000124
lbl_fn_806D35F0_0000010C:
    add r6, r3, r4
    lbz r0, 0x0(r5)
    stb r0, 0x4(r6)
    addi r4, r4, 0x1
    addi r5, r5, 0x1
    bdnz lbl_fn_806D35F0_0000010C
lbl_fn_806D35F0_00000124:
    cmpwi cr1, r27, 0x0
    li r4, 0x0
    ble cr1, lbl_fn_806D35F0_000001F8
    cmpwi r27, 0x8
    subi r6, r27, 0x8
    ble lbl_fn_806D35F0_000001C8
    li r7, 0x0
    blt cr1, lbl_fn_806D35F0_00000158
    lis r5, 0x8000
    subi r0, r5, 0x2
    cmpw r27, r0
    bgt lbl_fn_806D35F0_00000158
    li r7, 0x1
lbl_fn_806D35F0_00000158:
    cmpwi r7, 0x0
    beq lbl_fn_806D35F0_000001C8
    addi r0, r6, 0x7
    add r7, r3, r25
    srwi r0, r0, 3
    mtctr r0
    cmpwi r6, 0x0
    ble lbl_fn_806D35F0_000001C8
lbl_fn_806D35F0_00000178:
    add r6, r26, r4
    add r5, r7, r4
    lbzx r0, r26, r4
    addi r4, r4, 0x8
    stb r0, 0x4(r5)
    lbz r0, 0x1(r6)
    stb r0, 0x5(r5)
    lbz r0, 0x2(r6)
    stb r0, 0x6(r5)
    lbz r0, 0x3(r6)
    stb r0, 0x7(r5)
    lbz r0, 0x4(r6)
    stb r0, 0x8(r5)
    lbz r0, 0x5(r6)
    stb r0, 0x9(r5)
    lbz r0, 0x6(r6)
    stb r0, 0xa(r5)
    lbz r0, 0x7(r6)
    stb r0, 0xb(r5)
    bdnz lbl_fn_806D35F0_00000178
lbl_fn_806D35F0_000001C8:
    subf r0, r4, r27
    add r7, r3, r25
    add r5, r26, r4
    mtctr r0
    cmpw r4, r27
    bge lbl_fn_806D35F0_000001F8
lbl_fn_806D35F0_000001E0:
    add r6, r7, r4
    lbz r0, 0x0(r5)
    stb r0, 0x4(r6)
    addi r4, r4, 0x1
    addi r5, r5, 0x1
    bdnz lbl_fn_806D35F0_000001E0
lbl_fn_806D35F0_000001F8:
    cmpwi cr1, r30, 0x0
    li r7, 0x0
    ble cr1, lbl_fn_806D35F0_000002B8
    cmpwi r30, 0x8
    subi r5, r30, 0x8
    ble lbl_fn_806D35F0_00000294
    li r6, 0x0
    blt cr1, lbl_fn_806D35F0_0000022C
    lis r4, 0x8000
    subi r0, r4, 0x2
    cmpw r30, r0
    bgt lbl_fn_806D35F0_0000022C
    li r6, 0x1
lbl_fn_806D35F0_0000022C:
    cmpwi r6, 0x0
    beq lbl_fn_806D35F0_00000294
    addi r0, r5, 0x7
    srwi r0, r0, 3
    mtctr r0
    cmpwi r5, 0x0
    ble lbl_fn_806D35F0_00000294
lbl_fn_806D35F0_00000248:
    add r5, r3, r7
    addi r7, r7, 0x8
    lbz r4, 0x4(r5)
    lbz r0, 0x5(r5)
    add r28, r28, r4
    lbz r4, 0x6(r5)
    add r28, r28, r0
    lbz r0, 0x7(r5)
    add r28, r28, r4
    lbz r4, 0x8(r5)
    add r28, r28, r0
    lbz r0, 0x9(r5)
    add r28, r28, r4
    lbz r4, 0xa(r5)
    add r28, r28, r0
    lbz r0, 0xb(r5)
    add r28, r28, r4
    add r28, r28, r0
    bdnz lbl_fn_806D35F0_00000248
lbl_fn_806D35F0_00000294:
    subf r0, r7, r30
    mtctr r0
    cmpw r7, r30
    bge lbl_fn_806D35F0_000002B8
lbl_fn_806D35F0_000002A4:
    add r4, r3, r7
    addi r7, r7, 0x1
    lbz r0, 0x4(r4)
    add r28, r28, r0
    bdnz lbl_fn_806D35F0_000002A4
lbl_fn_806D35F0_000002B8:
    slwi r0, r28, 16
    cmpwi cr1, r30, 0x0
    lis r4, lbl_80860D8C@ha
    li r7, 0x0
    or r0, r28, r0
    stw r0, lbl_80860D8C@l(r4)
    ble cr1, lbl_fn_806D35F0_00000550
    cmpwi r30, 0x8
    subi r6, r30, 0x8
    ble lbl_fn_806D35F0_000004F0
    li r5, 0x0
    blt cr1, lbl_fn_806D35F0_000002FC
    lis r4, 0x8000
    subi r0, r4, 0x2
    cmpw r30, r0
    bgt lbl_fn_806D35F0_000002FC
    li r5, 0x1
lbl_fn_806D35F0_000002FC:
    cmpwi r5, 0x0
    beq lbl_fn_806D35F0_000004F0
    addi r0, r6, 0x7
    lis r5, lbl_807C2710@ha
    srwi r0, r0, 3
    lis r4, lbl_80860D8C@ha
    addi r5, r5, lbl_807C2710@l
    mtctr r0
    cmpwi r6, 0x0
    ble lbl_fn_806D35F0_000004F0
lbl_fn_806D35F0_00000324:
    lwz r8, 0x44(r5)
    add r6, r3, r7
    lwz r0, lbl_80860D8C@l(r4)
    lwz r9, 0x48(r5)
    mullw r0, r8, r0
    lwz r8, 0x4c(r5)
    add r9, r9, r0
    divwu r0, r9, r8
    mullw r0, r0, r8
    subf r0, r0, r9
    stw r0, lbl_80860D8C@l(r4)
    extrwi r8, r0, 8, 8
    lbz r0, 0x4(r6)
    xor r0, r0, r8
    stb r0, 0x4(r6)
    lwz r8, 0x44(r5)
    lwz r0, lbl_80860D8C@l(r4)
    lwz r9, 0x48(r5)
    mullw r0, r8, r0
    lwz r8, 0x4c(r5)
    add r9, r9, r0
    divwu r0, r9, r8
    mullw r0, r0, r8
    subf r0, r0, r9
    stw r0, lbl_80860D8C@l(r4)
    extrwi r8, r0, 8, 8
    lbz r0, 0x5(r6)
    xor r0, r0, r8
    stb r0, 0x5(r6)
    lwz r8, 0x44(r5)
    lwz r0, lbl_80860D8C@l(r4)
    lwz r9, 0x48(r5)
    mullw r0, r8, r0
    lwz r8, 0x4c(r5)
    add r9, r9, r0
    divwu r0, r9, r8
    mullw r0, r0, r8
    subf r0, r0, r9
    stw r0, lbl_80860D8C@l(r4)
    extrwi r8, r0, 8, 8
    lbz r0, 0x6(r6)
    xor r0, r0, r8
    stb r0, 0x6(r6)
    lwz r8, 0x44(r5)
    lwz r0, lbl_80860D8C@l(r4)
    lwz r9, 0x48(r5)
    mullw r0, r8, r0
    lwz r8, 0x4c(r5)
    add r9, r9, r0
    divwu r0, r9, r8
    mullw r0, r0, r8
    subf r0, r0, r9
    stw r0, lbl_80860D8C@l(r4)
    extrwi r8, r0, 8, 8
    lbz r0, 0x7(r6)
    xor r0, r0, r8
    stb r0, 0x7(r6)
    lwz r8, 0x44(r5)
    addi r7, r7, 0x8
    lwz r0, lbl_80860D8C@l(r4)
    lwz r9, 0x48(r5)
    mullw r0, r8, r0
    lwz r8, 0x4c(r5)
    add r9, r9, r0
    divwu r0, r9, r8
    mullw r0, r0, r8
    subf r0, r0, r9
    stw r0, lbl_80860D8C@l(r4)
    extrwi r8, r0, 8, 8
    lbz r0, 0x8(r6)
    xor r0, r0, r8
    stb r0, 0x8(r6)
    lwz r8, 0x44(r5)
    lwz r0, lbl_80860D8C@l(r4)
    lwz r9, 0x48(r5)
    mullw r0, r8, r0
    lwz r8, 0x4c(r5)
    add r9, r9, r0
    divwu r0, r9, r8
    mullw r0, r0, r8
    subf r0, r0, r9
    stw r0, lbl_80860D8C@l(r4)
    extrwi r8, r0, 8, 8
    lbz r0, 0x9(r6)
    xor r0, r0, r8
    stb r0, 0x9(r6)
    lwz r8, 0x44(r5)
    lwz r0, lbl_80860D8C@l(r4)
    lwz r9, 0x48(r5)
    mullw r0, r8, r0
    lwz r8, 0x4c(r5)
    add r9, r9, r0
    divwu r0, r9, r8
    mullw r0, r0, r8
    subf r0, r0, r9
    stw r0, lbl_80860D8C@l(r4)
    extrwi r8, r0, 8, 8
    lbz r0, 0xa(r6)
    xor r0, r0, r8
    stb r0, 0xa(r6)
    lwz r8, 0x44(r5)
    lwz r0, lbl_80860D8C@l(r4)
    lwz r9, 0x48(r5)
    mullw r0, r8, r0
    lwz r8, 0x4c(r5)
    add r9, r9, r0
    divwu r0, r9, r8
    mullw r0, r0, r8
    subf r0, r0, r9
    stw r0, lbl_80860D8C@l(r4)
    extrwi r0, r0, 8, 8
    lbz r8, 0xb(r6)
    xor r0, r8, r0
    stb r0, 0xb(r6)
    bdnz lbl_fn_806D35F0_00000324
lbl_fn_806D35F0_000004F0:
    lis r9, lbl_807C2710@ha
    subf r0, r7, r30
    addi r9, r9, lbl_807C2710@l
    lis r8, lbl_80860D8C@ha
    mtctr r0
    cmpw r7, r30
    bge lbl_fn_806D35F0_00000550
lbl_fn_806D35F0_0000050C:
    lwz r4, 0x44(r9)
    add r5, r3, r7
    lwz r0, lbl_80860D8C@l(r8)
    addi r7, r7, 0x1
    lwz r6, 0x48(r9)
    mullw r0, r4, r0
    lwz r4, 0x4c(r9)
    add r6, r6, r0
    divwu r0, r6, r4
    mullw r0, r0, r4
    subf r0, r0, r6
    stw r0, lbl_80860D8C@l(r8)
    extrwi r0, r0, 8, 8
    lbz r4, 0x4(r5)
    xor r0, r4, r0
    stb r0, 0x4(r5)
    bdnz lbl_fn_806D35F0_0000050C
lbl_fn_806D35F0_00000550:
    lis r5, lbl_807C2710@ha
    addi r24, r30, 0x4
    addi r5, r5, lbl_807C2710@l
    mr r4, r23
    lwz r0, 0x50(r5)
    mr r5, r24
    li r6, 0x2
    xor r28, r28, r0
    srwi r0, r28, 24
    stb r0, 0x0(r3)
    extrwi r7, r28, 8, 8
    stb r7, 0x1(r3)
    extrwi r0, r28, 8, 16
    stb r0, 0x2(r3)
    stb r28, 0x3(r3)
    mr r3, r29
    bl fn_806D9380
    mr r4, r29
    li r3, 0x8
    li r5, 0x0
    bl fn_806A7400
    lis r3, 0xaaab
    li r6, 0x0
    subi r4, r3, 0x5555
    mulhwu r0, r4, r24
    li r3, 0x0
    mulhwu r4, r4, r31
    srwi r0, r0, 1
    mulli r0, r0, 0x3
    srwi r5, r4, 1
    subf r4, r0, r24
    neg r0, r4
    or r0, r0, r4
    srwi r0, r0, 31
    add r0, r5, r0
    slwi r4, r0, 2
    stbx r6, r4, r23
lbl_fn_806D35F0_000005E4:
    addi r11, r1, 0x30
    bl _restgpr_23
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806D3BF0(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_27
    lis r31, lbl_807C2710@ha
    li r6, 0x0
    addi r31, r31, lbl_807C2710@l
    cmpwi r3, 0x0
    addi r5, r31, 0x0
    li r0, -0x1
    stw r6, 0x8(r1)
    mr r27, r4
    stw r6, 0xc(r1)
    stb r6, 0x10(r1)
    stw r0, 0x8(r5)
    stw r6, 0x54(r5)
    stw r6, 0x58(r5)
    stw r6, 0x5c(r5)
    stw r6, 0x60(r5)
    stw r6, 0x64(r5)
    beq lbl_fn_806D3BF0_00000670
    cmpwi r3, 0x1
    beq lbl_fn_806D3BF0_00000680
    cmpwi r3, 0x2
    beq lbl_fn_806D3BF0_00000690
    b lbl_fn_806D3BF0_0000069C
lbl_fn_806D3BF0_00000670:
    lis r3, lbl_80860D88@ha
    addi r0, r31, 0x124
    stw r0, lbl_80860D88@l(r3)
    b lbl_fn_806D3BF0_0000069C
lbl_fn_806D3BF0_00000680:
    lis r3, lbl_80860D88@ha
    addi r0, r31, 0x14c
    stw r0, lbl_80860D88@l(r3)
    b lbl_fn_806D3BF0_0000069C
lbl_fn_806D3BF0_00000690:
    lis r3, lbl_80860D88@ha
    addi r0, r31, 0x170
    stw r0, lbl_80860D88@l(r3)
lbl_fn_806D3BF0_0000069C:
    mr r4, r27
    addi r3, r1, 0x14
    li r5, 0x14
    bl fn_8068236C
    li r0, 0x0
    stb r0, 0x28(r1)
    addi r3, r1, 0x8
    addi r4, r27, 0x14
    li r5, 0x8
    bl fn_8068236C
    li r4, 0x0
    li r5, 0x10
    bl fn_8068446C
    mr r30, r3
    addi r3, r1, 0x8
    addi r4, r27, 0x1c
    li r5, 0x8
    bl fn_8068236C
    li r4, 0x0
    li r5, 0x10
    bl fn_8068446C
    mr r29, r3
    addi r3, r1, 0x8
    addi r4, r27, 0x24
    li r5, 0x8
    bl fn_8068236C
    li r4, 0x0
    li r5, 0x10
    bl fn_8068446C
    mr r28, r3
    addi r3, r1, 0x8
    addi r4, r27, 0x2c
    li r5, 0x8
    bl fn_8068236C
    li r4, 0x0
    li r5, 0x10
    bl fn_8068446C
    mr r8, r3
    mr r5, r30
    mr r6, r29
    mr r7, r28
    addi r3, r27, 0x34
    addi r4, r1, 0x14
    bl fn_806D2D80
    li r3, 0x0
    bl fn_806A7A00
    addi r3, r31, 0x0
    li r4, 0x3
    li r0, 0x1
    stw r4, 0x0(r31)
    addi r11, r1, 0x50
    stw r0, 0x4(r3)
    bl _restgpr_27
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_806D3D70(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    lis r30, lbl_807C2710@ha
    lwz r0, lbl_807C2710@l(r30)
    cmpwi r0, 0x1
    beq lbl_fn_806D3D70_000007CC
    cmpwi r0, 0x4
    beq lbl_fn_806D3D70_000007F8
    cmpwi r0, 0x5
    beq lbl_fn_806D3D70_00000864
    cmpwi r0, 0x6
    beq lbl_fn_806D3D70_0000089C
    cmpwi r0, 0x7
    beq lbl_fn_806D3D70_00000908
    b lbl_fn_806D3D70_0000093C
lbl_fn_806D3D70_000007CC:
    bl fn_806A7110
    cmpwi r3, 0x0
    bne lbl_fn_806D3D70_000007E8
    lis r4, 0xffff
    li r3, 0x6
    subi r4, r4, 0x5fb8
    bl fn_806A7130
lbl_fn_806D3D70_000007E8:
    lis r3, lbl_807C2710@ha
    li r0, 0x1
    stw r0, lbl_807C2710@l(r3)
    b lbl_fn_806D3D70_0000093C
lbl_fn_806D3D70_000007F8:
    addi r31, r30, lbl_807C2710@l
    lis r6, fn_806D3200@ha
    lis r7, fn_806D3210@ha
    lwz r3, 0x54(r31)
    addi r6, r6, fn_806D3200@l
    li r4, 0x0
    addi r7, r7, fn_806D3210@l
    li r5, 0x0
    li r8, 0x0
    bl fn_806A7CC0
    cmpwi r3, 0x0
    stw r3, 0x8(r31)
    blt lbl_fn_806D3D70_00000838
    li r0, 0x5
    stw r0, lbl_807C2710@l(r30)
    b lbl_fn_806D3D70_0000093C
lbl_fn_806D3D70_00000838:
    bl fn_806A7110
    cmpwi r3, 0x0
    bne lbl_fn_806D3D70_00000854
    lis r4, 0xffff
    li r3, 0x6
    subi r4, r4, 0x5fb8
    bl fn_806A7130
lbl_fn_806D3D70_00000854:
    lis r3, lbl_807C2710@ha
    li r0, 0x1
    stw r0, lbl_807C2710@l(r3)
    b lbl_fn_806D3D70_0000093C
lbl_fn_806D3D70_00000864:
    bl fn_806A7B10
    cmpwi r3, 0x0
    bne lbl_fn_806D3D70_0000093C
    bl fn_806A7110
    cmpwi r3, 0x0
    bne lbl_fn_806D3D70_0000088C
    lis r4, 0xffff
    li r3, 0x6
    subi r4, r4, 0x5fb8
    bl fn_806A7130
lbl_fn_806D3D70_0000088C:
    lis r3, lbl_807C2710@ha
    li r0, 0x1
    stw r0, lbl_807C2710@l(r3)
    b lbl_fn_806D3D70_0000093C
lbl_fn_806D3D70_0000089C:
    addi r31, r30, lbl_807C2710@l
    lis r6, fn_806D3200@ha
    lis r7, fn_806D3210@ha
    lwz r3, 0x54(r31)
    addi r6, r6, fn_806D3200@l
    li r4, 0x0
    addi r7, r7, fn_806D3210@l
    li r5, 0x0
    li r8, 0x0
    bl fn_806A7CC0
    cmpwi r3, 0x0
    stw r3, 0x8(r31)
    blt lbl_fn_806D3D70_000008DC
    li r0, 0x7
    stw r0, lbl_807C2710@l(r30)
    b lbl_fn_806D3D70_0000093C
lbl_fn_806D3D70_000008DC:
    bl fn_806A7110
    cmpwi r3, 0x0
    bne lbl_fn_806D3D70_000008F8
    lis r4, 0xffff
    li r3, 0x6
    subi r4, r4, 0x5fb8
    bl fn_806A7130
lbl_fn_806D3D70_000008F8:
    lis r3, lbl_807C2710@ha
    li r0, 0x1
    stw r0, lbl_807C2710@l(r3)
    b lbl_fn_806D3D70_0000093C
lbl_fn_806D3D70_00000908:
    bl fn_806A7B10
    cmpwi r3, 0x0
    bne lbl_fn_806D3D70_0000093C
    bl fn_806A7110
    cmpwi r3, 0x0
    bne lbl_fn_806D3D70_00000930
    lis r4, 0xffff
    li r3, 0x6
    subi r4, r4, 0x5fb8
    bl fn_806A7130
lbl_fn_806D3D70_00000930:
    lis r3, lbl_807C2710@ha
    li r0, 0x1
    stw r0, lbl_807C2710@l(r3)
lbl_fn_806D3D70_0000093C:
    lwz r31, 0xc(r1)
    lis r3, lbl_807C2710@ha
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    lwz r3, lbl_807C2710@l(r3)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806D3F50(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r3, lbl_807C2710@ha
    stw r0, 0x14(r1)
    addi r3, r3, lbl_807C2710@l
    lwz r3, 0x8(r3)
    cmpwi r3, 0x0
    blt lbl_fn_806D3F50_00000988
    bl fn_806A7FB0
lbl_fn_806D3F50_00000988:
    lis r3, lbl_807C2710@ha
    li r0, 0x0
    stw r0, lbl_807C2710@l(r3)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806D3F90(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_807C2710@ha
    addi r31, r31, lbl_807C2710@l
    lwz r0, 0x4(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806D3F90_00000A28
    lwz r4, 0x54(r31)
    cmpwi r4, 0x0
    beq lbl_fn_806D3F90_000009E8
    li r3, 0x8
    li r5, 0x0
    bl fn_806A7400
    li r0, 0x0
    stw r0, 0x54(r31)
lbl_fn_806D3F90_000009E8:
    lis r31, lbl_807C2710@ha
    addi r31, r31, lbl_807C2710@l
    lwz r3, 0x60(r31)
    cmpwi r3, 0x0
    beq lbl_fn_806D3F90_00000A0C
    bl fn_806A75C0
    li r0, 0x0
    stw r0, 0x64(r31)
    stw r0, 0x60(r31)
lbl_fn_806D3F90_00000A0C:
    bl fn_806A7A50
    lis r4, lbl_807C2710@ha
    li r5, 0x2
    addi r3, r4, lbl_807C2710@l
    li r0, 0x0
    stw r5, lbl_807C2710@l(r4)
    stw r0, 0x4(r3)
lbl_fn_806D3F90_00000A28:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806D4030(void)
{
    nofralloc
    lis r4, lbl_807C2710@ha
    addi r4, r4, lbl_807C2710@l
    lwz r0, 0x6c(r4)
    stw r0, 0x0(r3)
    lwz r3, 0x68(r4)
    blr
}

asm void fn_806D4050(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_18
    lis r28, lbl_807C2710@ha
    mr r21, r3
    addi r28, r28, lbl_807C2710@l
    mr r22, r4
    addi r18, r28, 0x0
    mr r23, r5
    lwz r0, 0xc(r18)
    mr r24, r6
    mr r25, r7
    mr r26, r8
    cmpwi r0, 0x1
    beq lbl_fn_806D4050_00000AB0
    li r3, 0x3
    b lbl_fn_806D4050_00000CC0
lbl_fn_806D4050_00000AB0:
    lwz r4, 0x54(r18)
    cmpwi r4, 0x0
    beq lbl_fn_806D4050_00000AD0
    li r3, 0x8
    li r5, 0x0
    bl fn_806A7400
    li r0, 0x0
    stw r0, 0x54(r18)
lbl_fn_806D4050_00000AD0:
    lis r29, 0xaaab
    addi r30, r28, 0x0
    addi r4, r24, 0xc
    subi r0, r29, 0x5555
    addi r3, r30, 0x10
    mulhwu r0, r0, r4
    srwi r0, r0, 1
    mulli r0, r0, 0x3
    subf r4, r0, r4
    neg r0, r4
    or r0, r0, r4
    srwi r27, r0, 31
    bl strlen
    lis r31, lbl_80860D88@ha
    mr r19, r3
    lwz r3, lbl_80860D88@l(r31)
    bl strlen
    mr r18, r3
    mr r3, r21
    bl strlen
    mr r20, r3
    add r19, r18, r19
    addi r3, r28, 0x1a4
    bl strlen
    mr r18, r3
    mr r6, r22
    add r20, r20, r19
    addi r3, r1, 0x10
    addi r5, r28, 0x1a0
    li r4, 0x10
    crclr 6
    bl fn_806809C0
    mr r19, r3
    add r20, r18, r20
    addi r3, r28, 0xd8
    bl strlen
    add r0, r19, r20
    add r20, r3, r0
    addi r3, r28, 0x198
    bl strlen
    addi r0, r24, 0xc
    subi r4, r29, 0x5555
    mulhwu r0, r4, r0
    add r4, r20, r3
    li r3, 0x8
    srwi r0, r0, 1
    add r0, r0, r27
    slwi r0, r0, 2
    add r4, r4, r0
    addi r4, r4, 0x29
    bl fn_806A72E0
    cmpwi r3, 0x0
    stw r3, 0x54(r30)
    bne lbl_fn_806D4050_00000BB0
    li r3, 0x2
    b lbl_fn_806D4050_00000CC0
lbl_fn_806D4050_00000BB0:
    lwz r5, lbl_80860D88@l(r31)
    mr r7, r21
    mr r8, r22
    addi r4, r28, 0x1ac
    addi r6, r30, 0x10
    addi r9, r28, 0x1c8
    addi r10, r28, 0x1f4
    crclr 6
    bl sprintf
    lwz r18, 0x54(r30)
    mr r3, r18
    bl strlen
    add r0, r18, r3
    stw r0, 0x5c(r30)
    addi r3, r28, 0x198
    bl strlen
    lwz r7, 0x5c(r30)
    rlwinm r6, r22, 24, 16, 23
    rlwinm r5, r22, 8, 8, 15
    rlwinm r4, r24, 24, 16, 23
    subf r3, r3, r7
    rlwinm r0, r24, 8, 8, 15
    subi r3, r3, 0x28
    stw r3, 0x58(r30)
    mr r3, r7
    rlwimi r6, r22, 8, 24, 31
    rlwimi r5, r22, 24, 0, 7
    rlwimi r4, r24, 8, 24, 31
    or r5, r6, r5
    rlwimi r0, r24, 24, 0, 7
    or r0, r4, r0
    stw r5, 0x8(r1)
    mr r6, r23
    mr r7, r24
    stw r0, 0xc(r1)
    addi r4, r1, 0x8
    li r5, 0x8
    bl fn_806D35F0
    cmpwi r3, 0x2
    bne lbl_fn_806D4050_00000C70
    lwz r4, 0x54(r30)
    li r3, 0x8
    li r5, 0x0
    bl fn_806A7400
    li r0, 0x0
    stw r0, 0x54(r30)
    li r3, 0x2
    b lbl_fn_806D4050_00000CC0
lbl_fn_806D4050_00000C70:
    cmpwi r26, 0x0
    beq lbl_fn_806D4050_00000C94
    lwz r3, 0x58(r30)
    addi r4, r30, 0x74
    li r5, 0x28
    bl memcpy
    li r0, 0x6
    stw r0, 0x0(r28)
    b lbl_fn_806D4050_00000CB4
lbl_fn_806D4050_00000C94:
    addi r3, r28, 0xd8
    li r21, 0x0
    bl strlen
    lwz r4, 0x58(r30)
    li r0, 0x4
    subf r3, r3, r4
    stb r21, 0x0(r3)
    stw r0, 0x0(r28)
lbl_fn_806D4050_00000CB4:
    addi r4, r28, 0x0
    li r3, 0x0
    stw r25, 0x70(r4)
lbl_fn_806D4050_00000CC0:
    addi r11, r1, 0x60
    bl _restgpr_18
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_806D42D0(void)
{
    nofralloc
    li r8, 0x0
    b fn_806D4050
}

asm void fn_806D42E0(void)
{
    nofralloc
    b fn_806D16A0
}

asm void fn_806D42F0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_22
    lis r25, lbl_80860D90@ha
    mr r26, r3
    mr r27, r4
    mr r28, r6
    mr r23, r7
    mr r22, r8
    mr r29, r9
    addi r3, r25, lbl_80860D90@l
    li r4, 0x0
    li r5, 0x30
    bl memset
    addi r24, r25, lbl_80860D90@l
    cmpwi r26, 0x0
    li r0, 0x0
    stw r0, 0x18(r24)
    stw r27, lbl_80860D90@l(r25)
    stw r23, 0x8(r24)
    stw r22, 0xc(r24)
    beq lbl_fn_806D42F0_00000D80
    subi r0, r27, 0x1
    cmplwi r0, 0x31
    bgt lbl_fn_806D42F0_00000D80
    cmpwi r23, 0x0
    beq lbl_fn_806D42F0_00000D80
    cmpwi r22, 0x0
    bne lbl_fn_806D42F0_00000D88
lbl_fn_806D42F0_00000D80:
    li r3, 0x0
    b lbl_fn_806D42F0_00000FC8
lbl_fn_806D42F0_00000D88:
    mr r25, r26
    li r30, 0x0
    li r23, 0x0
    b lbl_fn_806D42F0_00000DFC
lbl_fn_806D42F0_00000D98:
    lwz r31, 0x0(r25)
    mr r3, r31
    bl fn_80686A48
    cmpwi r3, 0x0
    beq lbl_fn_806D42F0_00000DE8
    mr r3, r31
    bl fn_80686A48
    add r3, r3, r30
    mr r5, r23
    addi r30, r3, 0x1
    li r4, 0x1
    li r3, 0x0
    bl fn_80696324
    lwz r0, 0x20(r24)
    lwz r5, 0x24(r24)
    or r0, r0, r3
    stw r0, 0x20(r24)
    or r0, r5, r4
    stw r0, 0x24(r24)
    b lbl_fn_806D42F0_00000DF4
lbl_fn_806D42F0_00000DE8:
    lwz r3, 0x28(r24)
    addi r0, r3, 0x1
    stw r0, 0x28(r24)
lbl_fn_806D42F0_00000DF4:
    addi r25, r25, 0x4
    addi r23, r23, 0x1
lbl_fn_806D42F0_00000DFC:
    cmpw r23, r27
    blt lbl_fn_806D42F0_00000D98
    cmpwi r30, 0x0
    ble lbl_fn_806D42F0_00000E10
    subi r30, r30, 0x1
lbl_fn_806D42F0_00000E10:
    cmpwi r30, 0x1f4
    ble lbl_fn_806D42F0_00000E38
    lis r4, lbl_807C2908@ha
    mr r5, r30
    addi r4, r4, lbl_807C2908@l
    lis r3, 0x100
    crclr 6
    bl fn_806A76B0
    li r3, 0x0
    b lbl_fn_806D42F0_00000FC8
lbl_fn_806D42F0_00000E38:
    lis r3, lbl_80860D90@ha
    addi r31, r3, lbl_80860D90@l
    lwz r0, 0x20(r31)
    lwz r3, 0x24(r31)
    or. r0, r3, r0
    bne lbl_fn_806D42F0_00000E58
    li r3, 0x1
    b lbl_fn_806D42F0_00000FC8
lbl_fn_806D42F0_00000E58:
    addi r0, r30, 0x1
    li r3, 0x0
    slwi r4, r0, 1
    bl fn_806A72E0
    cmpwi r3, 0x0
    stw r3, 0x4(r31)
    mr r24, r3
    bne lbl_fn_806D42F0_00000E80
    li r3, 0x0
    b lbl_fn_806D42F0_00000FC8
lbl_fn_806D42F0_00000E80:
    li r23, 0x0
    li r22, 0x0
    li r25, 0x9
    b lbl_fn_806D42F0_00000EF0
lbl_fn_806D42F0_00000E90:
    mr r5, r22
    li r4, 0x1
    li r3, 0x0
    bl fn_80696324
    lwz r0, 0x20(r31)
    lwz r5, 0x24(r31)
    and r0, r0, r3
    and r3, r5, r4
    or. r0, r3, r0
    beq lbl_fn_806D42F0_00000EE8
    slwi r0, r23, 1
    lwz r4, 0x0(r26)
    add r3, r24, r0
    bl fn_80686A64
    lwz r3, 0x0(r26)
    bl fn_80686A48
    add r23, r23, r3
    cmpw r23, r30
    bge lbl_fn_806D42F0_00000EF8
    slwi r0, r23, 1
    addi r23, r23, 0x1
    sthx r25, r24, r0
lbl_fn_806D42F0_00000EE8:
    addi r26, r26, 0x4
    addi r22, r22, 0x1
lbl_fn_806D42F0_00000EF0:
    cmpw r22, r27
    blt lbl_fn_806D42F0_00000E90
lbl_fn_806D42F0_00000EF8:
    lis r31, lbl_80860D90@ha
    lis r6, fn_806A72E0@ha
    addi r31, r31, lbl_80860D90@l
    lis r7, fn_806A7400@ha
    lwz r3, 0x4(r31)
    slwi r4, r30, 1
    extsb r5, r29
    addi r6, r6, fn_806A72E0@l
    addi r7, r7, fn_806A7400@l
    bl fn_806D0B40
    cmpwi r3, 0x1
    mr r30, r3
    bne lbl_fn_806D42F0_00000FAC
    cmpwi r28, 0x0
    bgt lbl_fn_806D42F0_00000F70
    bl OSGetTime
    lis r6, 0x8000
    lis r5, 0x1062
    lwz r0, 0xf8(r6)
    addi r6, r5, 0x4dd3
    li r5, 0x0
    srwi r0, r0, 2
    mulhwu r0, r6, r0
    srwi r0, r0, 6
    mulli r0, r0, 0x7530
    addc r0, r0, r4
    stw r0, 0x14(r31)
    adde r0, r5, r3
    stw r0, 0x10(r31)
    b lbl_fn_806D42F0_00000FC4
lbl_fn_806D42F0_00000F70:
    bl OSGetTime
    lis r6, 0x8000
    lis r5, 0x1062
    lwz r0, 0xf8(r6)
    addi r6, r5, 0x4dd3
    li r5, 0x0
    srwi r0, r0, 2
    mulhwu r0, r6, r0
    srwi r0, r0, 6
    mullw r0, r28, r0
    addc r0, r0, r4
    stw r0, 0x14(r31)
    adde r0, r5, r3
    stw r0, 0x10(r31)
    b lbl_fn_806D42F0_00000FC4
lbl_fn_806D42F0_00000FAC:
    lwz r4, 0x4(r31)
    li r3, 0x0
    li r5, 0x0
    bl fn_806A7400
    li r0, 0x0
    stw r0, 0x4(r31)
lbl_fn_806D42F0_00000FC4:
    mr r3, r30
lbl_fn_806D42F0_00000FC8:
    addi r11, r1, 0x30
    bl _restgpr_22
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806D45D0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    lis r29, lbl_80860D90@ha
    lis r31, lbl_807C2908@ha
    addi r30, r29, lbl_80860D90@l
    lwz r0, 0x4(r30)
    addi r31, r31, lbl_807C2908@l
    cmpwi r0, 0x0
    bne lbl_fn_806D45D0_0000101C
    li r3, 0x0
    b lbl_fn_806D45D0_00001340
lbl_fn_806D45D0_0000101C:
    lwz r0, 0x20(r30)
    lwz r3, 0x24(r30)
    or. r0, r3, r0
    bne lbl_fn_806D45D0_00001084
    addi r4, r31, 0x20
    lis r3, 0x100
    crclr 6
    bl fn_806A76B0
    lwz r3, 0x8(r30)
    li r4, 0x0
    lwz r5, lbl_80860D90@l(r29)
    bl memset
    lwz r3, 0xc(r30)
    li r4, 0x0
    li r5, 0x0
    stw r4, 0x0(r3)
    b lbl_fn_806D45D0_00001070
    nop
lbl_fn_806D45D0_00001064:
    lwz r3, 0x8(r30)
    stbx r4, r3, r5
    addi r5, r5, 0x1
lbl_fn_806D45D0_00001070:
    lwz r0, lbl_80860D90@l(r29)
    cmpw r5, r0
    blt lbl_fn_806D45D0_00001064
    li r25, 0x2
    b lbl_fn_806D45D0_0000130C
lbl_fn_806D45D0_00001084:
    bl fn_806D1590
    cmpwi r3, 0x0
    beq lbl_fn_806D45D0_00001270
    addi r4, r31, 0x5c
    lis r3, 0x100
    crclr 6
    bl fn_806A76B0
    bl fn_806D16B0
    mr r28, r3
    bl fn_806D15E0
    cmpwi r3, 0x0
    beq lbl_fn_806D45D0_000011AC
    addi r4, r31, 0x70
    lis r3, 0x100
    crclr 6
    bl fn_806A76B0
    lwz r3, 0x8(r30)
    li r4, 0x0
    lwz r5, lbl_80860D90@l(r29)
    bl memset
    lwz r4, 0xc(r30)
    li r31, 0x0
    mr r3, r28
    stw r31, 0x0(r4)
    bl strlen
    lwz r4, 0x28(r30)
    lwz r0, lbl_80860D90@l(r29)
    subf r0, r4, r0
    cmplw r0, r3
    beq lbl_fn_806D45D0_00001114
    lis r4, 0xffff
    li r3, 0x11
    addi r4, r4, 0x7f04
    bl fn_806A7130
    li r25, 0x3
    b lbl_fn_806D45D0_0000130C
lbl_fn_806D45D0_00001114:
    li r27, 0x0
    li r26, 0x0
    li r25, 0x1
    b lbl_fn_806D45D0_00001198
lbl_fn_806D45D0_00001124:
    mr r5, r26
    li r4, 0x1
    li r3, 0x0
    bl fn_80696324
    lwz r0, 0x20(r30)
    lwz r5, 0x24(r30)
    and r0, r0, r3
    and r3, r5, r4
    or. r0, r3, r0
    bne lbl_fn_806D45D0_0000115C
    lwz r3, 0x8(r30)
    addi r27, r27, 0x1
    stbx r31, r3, r26
    b lbl_fn_806D45D0_00001194
lbl_fn_806D45D0_0000115C:
    subf r0, r27, r26
    lbzx r0, r28, r0
    extsb r0, r0
    cmpwi r0, 0x30
    bne lbl_fn_806D45D0_0000117C
    lwz r3, 0x8(r30)
    stbx r31, r3, r26
    b lbl_fn_806D45D0_00001194
lbl_fn_806D45D0_0000117C:
    lwz r3, 0x8(r30)
    stbx r25, r3, r26
    lwz r4, 0xc(r30)
    lwz r3, 0x0(r4)
    addi r0, r3, 0x1
    stw r0, 0x0(r4)
lbl_fn_806D45D0_00001194:
    addi r26, r26, 0x1
lbl_fn_806D45D0_00001198:
    lwz r0, lbl_80860D90@l(r29)
    cmpw r26, r0
    blt lbl_fn_806D45D0_00001124
    li r25, 0x2
    b lbl_fn_806D45D0_0000130C
lbl_fn_806D45D0_000011AC:
    bl fn_806D1600
    mr r25, r3
    addi r4, r31, 0x88
    mr r5, r25
    lis r3, 0x100
    crclr 6
    bl fn_806A76B0
    lwz r0, 0x34(r28)
    cmpwi r0, 0x1
    bne lbl_fn_806D45D0_000011E8
    lis r4, 0xffff
    li r3, 0x12
    addi r4, r4, 0x7f0e
    bl fn_806A7130
    b lbl_fn_806D45D0_00001268
lbl_fn_806D45D0_000011E8:
    addi r0, r25, 0x5dbf
    cmplwi r0, 0x3e7
    ble lbl_fn_806D45D0_000011FC
    cmpwi r25, -0x4e85
    bne lbl_fn_806D45D0_00001210
lbl_fn_806D45D0_000011FC:
    lis r4, 0xffff
    li r3, 0x12
    addi r4, r4, 0x7f04
    bl fn_806A7130
    b lbl_fn_806D45D0_00001268
lbl_fn_806D45D0_00001210:
    addi r0, r25, 0x752f
    cmplwi r0, 0x3e7
    ble lbl_fn_806D45D0_00001224
    cmpwi r25, -0x4e84
    bne lbl_fn_806D45D0_00001238
lbl_fn_806D45D0_00001224:
    lis r4, 0xffff
    li r3, 0x12
    addi r4, r4, 0x7efa
    bl fn_806A7130
    b lbl_fn_806D45D0_00001268
lbl_fn_806D45D0_00001238:
    lis r4, 0x1062
    li r3, 0x11
    addi r0, r4, 0x4dd3
    mulhw r0, r0, r25
    srawi r0, r0, 6
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e8
    subf r4, r0, r25
    subis r4, r4, 0x1
    addi r4, r4, 0x7f18
    bl fn_806A7130
lbl_fn_806D45D0_00001268:
    li r25, 0x3
    b lbl_fn_806D45D0_0000130C
lbl_fn_806D45D0_00001270:
    lwz r4, 0x10(r30)
    li r3, 0x0
    lwz r5, 0x14(r30)
    xoris r0, r3, 0x8000
    xoris r4, r4, 0x8000
    subfc r3, r5, r3
    subfe r4, r4, r0
    subfe r4, r0, r0
    neg. r4, r4
    beq lbl_fn_806D45D0_00001300
    bl OSGetTime
    lwz r0, 0x10(r30)
    xoris r5, r3, 0x8000
    lwz r3, 0x14(r30)
    xoris r0, r0, 0x8000
    subfc r3, r4, r3
    subfe r5, r5, r0
    subfe r5, r0, r0
    neg. r5, r5
    beq lbl_fn_806D45D0_00001300
    lwz r0, 0x18(r30)
    cmpwi r0, 0x0
    bne lbl_fn_806D45D0_00001300
    addi r4, r31, 0xa0
    lis r3, 0x100
    crclr 6
    bl fn_806A76B0
    li r0, 0x1
    stw r0, 0x18(r30)
    bl fn_806D0C30
    lis r4, 0xffff
    li r3, 0x12
    addi r4, r4, 0x7f0e
    bl fn_806A7130
    li r25, 0x3
    b lbl_fn_806D45D0_0000130C
lbl_fn_806D45D0_00001300:
    bl fn_806D0EA0
    li r3, 0x1
    b lbl_fn_806D45D0_00001340
lbl_fn_806D45D0_0000130C:
    lis r3, lbl_80860D90@ha
    addi r3, r3, lbl_80860D90@l
    lwz r4, 0x4(r3)
    cmpwi r4, 0x0
    beq lbl_fn_806D45D0_0000132C
    li r3, 0x0
    li r5, 0x0
    bl fn_806A7400
lbl_fn_806D45D0_0000132C:
    lis r4, lbl_80860D90@ha
    li r0, 0x0
    addi r4, r4, lbl_80860D90@l
    mr r3, r25
    stw r0, 0x4(r4)
lbl_fn_806D45D0_00001340:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806D4950(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    mr r31, r8
    bl fn_805EBFD0
    lbz r0, 0x3(r3)
    mr r3, r26
    mr r4, r27
    mr r5, r28
    mr r6, r29
    mr r7, r30
    mr r8, r31
    extsb r9, r0
    bl fn_806D42F0
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806D49C0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    mr r3, r31
    bl fn_806CFB40
    cmpwi r3, 0x0
    beq lbl_fn_806D49C0_00001410
    mr r3, r31
    bl fn_806CFCC0
    cmpwi r3, 0x0
    bne lbl_fn_806D49C0_00001418
lbl_fn_806D49C0_00001410:
    li r3, 0x6
    b lbl_fn_806D49C0_00001488
lbl_fn_806D49C0_00001418:
    lwz r31, 0x1c(r31)
    bl fn_806A7110
    cmpwi r3, 0x0
    beq lbl_fn_806D49C0_00001430
    li r3, 0x1
    b lbl_fn_806D49C0_00001488
lbl_fn_806D49C0_00001430:
    lis r3, lbl_80860DC0@ha
    lwz r0, lbl_80860DC0@l(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806D49C0_00001448
    li r3, 0x3
    b lbl_fn_806D49C0_00001488
lbl_fn_806D49C0_00001448:
    addi r3, r3, lbl_80860DC0@l
    stw r31, 0x4(r3)
    bl fn_806D0970
    cmpwi r3, 0x1
    bne lbl_fn_806D49C0_0000146C
    mr r4, r30
    li r3, 0x1
    bl fn_806D52B0
    b lbl_fn_806D49C0_00001478
lbl_fn_806D49C0_0000146C:
    mr r4, r30
    li r3, 0x0
    bl fn_806D52B0
lbl_fn_806D49C0_00001478:
    lis r3, lbl_80860DC0@ha
    li r0, 0x1
    stw r0, lbl_80860DC0@l(r3)
    li r3, 0x0
lbl_fn_806D49C0_00001488:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806D4A90(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_806D52E0
    lis r3, lbl_80860DC0@ha
    li r0, 0x0
    stw r0, lbl_80860DC0@l(r3)
    li r3, 0x0
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806D4AC0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    bl fn_806A7110
    cmpwi r3, 0x0
    beq lbl_fn_806D4AC0_00001510
    li r3, 0x1
    b lbl_fn_806D4AC0_000015DC
lbl_fn_806D4AC0_00001510:
    lis r3, lbl_80860DC0@ha
    lwz r0, lbl_80860DC0@l(r3)
    cmpwi r0, 0x1
    beq lbl_fn_806D4AC0_00001530
    cmpwi r0, 0x4
    beq lbl_fn_806D4AC0_00001530
    li r3, 0x7
    b lbl_fn_806D4AC0_000015DC
lbl_fn_806D4AC0_00001530:
    cmplwi r26, 0x3e8
    bgt lbl_fn_806D4AC0_00001540
    cmplwi r30, 0x2fc
    ble lbl_fn_806D4AC0_00001548
lbl_fn_806D4AC0_00001540:
    li r3, 0x2
    b lbl_fn_806D4AC0_000015DC
lbl_fn_806D4AC0_00001548:
    cmpwi r29, 0x0
    bne lbl_fn_806D4AC0_00001560
    cmpwi r30, 0x0
    beq lbl_fn_806D4AC0_00001560
    li r3, 0x2
    b lbl_fn_806D4AC0_000015DC
lbl_fn_806D4AC0_00001560:
    lis r31, lbl_80860DC0@ha
    mr r3, r26
    addi r4, r31, lbl_80860DC0@l
    mr r5, r27
    lwz r4, 0x4(r4)
    mr r6, r28
    mr r7, r29
    mr r8, r30
    bl fn_806D5300
    cmpwi r3, 0x3
    beq lbl_fn_806D4AC0_00001598
    cmpwi r3, 0x2
    beq lbl_fn_806D4AC0_000015A0
    b lbl_fn_806D4AC0_000015A8
lbl_fn_806D4AC0_00001598:
    li r3, 0x8
    b lbl_fn_806D4AC0_000015DC
lbl_fn_806D4AC0_000015A0:
    li r3, 0x9
    b lbl_fn_806D4AC0_000015DC
lbl_fn_806D4AC0_000015A8:
    li r0, 0x2
    stw r0, lbl_80860DC0@l(r31)
    bl OSGetTime
    lis r7, lbl_80860DC8@ha
    lis r5, lbl_807C29B8@ha
    addi r6, r7, lbl_80860DC8@l
    stw r3, lbl_80860DC8@l(r7)
    li r3, 0x1
    stw r4, 0x4(r6)
    addi r4, r5, lbl_807C29B8@l
    crclr 6
    bl fn_806A76B0
    li r3, 0x0
lbl_fn_806D4AC0_000015DC:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806D4BE0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r28, r3
    mr r29, r4
    mr r30, r5
    mr r31, r6
    bl fn_806A7110
    cmpwi r3, 0x0
    beq lbl_fn_806D4BE0_0000162C
    li r3, 0x1
    b lbl_fn_806D4BE0_000017F8
lbl_fn_806D4BE0_0000162C:
    lis r3, lbl_80860DC0@ha
    lwz r0, lbl_80860DC0@l(r3)
    cmpwi r0, 0x1
    beq lbl_fn_806D4BE0_0000164C
    cmpwi r0, 0x4
    beq lbl_fn_806D4BE0_0000164C
    li r3, 0xa
    b lbl_fn_806D4BE0_000017F8
lbl_fn_806D4BE0_0000164C:
    cmplwi r29, 0x3e8
    bgt lbl_fn_806D4BE0_0000165C
    cmpwi r31, 0x0
    bne lbl_fn_806D4BE0_00001664
lbl_fn_806D4BE0_0000165C:
    li r3, 0x2
    b lbl_fn_806D4BE0_000017F8
lbl_fn_806D4BE0_00001664:
    subi r0, r28, 0x4
    cmplwi r0, 0x1
    ble lbl_fn_806D4BE0_00001700
    cmpwi r28, 0x0
    beq lbl_fn_806D4BE0_00001694
    cmpwi r28, 0x1
    beq lbl_fn_806D4BE0_000016BC
    cmpwi r28, 0x2
    beq lbl_fn_806D4BE0_00001700
    cmpwi r28, 0x3
    beq lbl_fn_806D4BE0_00001740
    b lbl_fn_806D4BE0_00001780
lbl_fn_806D4BE0_00001694:
    lwz r0, 0x0(r31)
    cmplwi r0, 0x8
    beq lbl_fn_806D4BE0_000016A8
    li r3, 0x2
    b lbl_fn_806D4BE0_000017F8
lbl_fn_806D4BE0_000016A8:
    lwz r0, 0x4(r31)
    cmplwi r0, 0x1
    ble lbl_fn_806D4BE0_00001780
    li r3, 0x2
    b lbl_fn_806D4BE0_000017F8
lbl_fn_806D4BE0_000016BC:
    lwz r0, 0x0(r31)
    cmplwi r0, 0xc
    beq lbl_fn_806D4BE0_000016D0
    li r3, 0x2
    b lbl_fn_806D4BE0_000017F8
lbl_fn_806D4BE0_000016D0:
    lwz r0, 0x4(r31)
    cmplwi r0, 0x1
    ble lbl_fn_806D4BE0_000016E4
    li r3, 0x2
    b lbl_fn_806D4BE0_000017F8
lbl_fn_806D4BE0_000016E4:
    lwz r0, 0x8(r31)
    cmplwi r0, 0x1e
    bgt lbl_fn_806D4BE0_000016F8
    cmpwi r0, 0x0
    bne lbl_fn_806D4BE0_00001780
lbl_fn_806D4BE0_000016F8:
    li r3, 0x2
    b lbl_fn_806D4BE0_000017F8
lbl_fn_806D4BE0_00001700:
    lwz r0, 0x0(r31)
    cmplwi r0, 0xc
    beq lbl_fn_806D4BE0_00001714
    li r3, 0x2
    b lbl_fn_806D4BE0_000017F8
lbl_fn_806D4BE0_00001714:
    lwz r0, 0x4(r31)
    cmplwi r0, 0x1
    ble lbl_fn_806D4BE0_00001728
    li r3, 0x2
    b lbl_fn_806D4BE0_000017F8
lbl_fn_806D4BE0_00001728:
    lwz r3, 0x8(r31)
    subi r0, r3, 0x2
    cmplwi r0, 0x1c
    ble lbl_fn_806D4BE0_00001780
    li r3, 0x2
    b lbl_fn_806D4BE0_000017F8
lbl_fn_806D4BE0_00001740:
    lwz r0, 0x0(r31)
    cmplwi r0, 0x10c
    beq lbl_fn_806D4BE0_00001754
    li r3, 0x2
    b lbl_fn_806D4BE0_000017F8
lbl_fn_806D4BE0_00001754:
    lwz r0, 0x4(r31)
    cmplwi r0, 0x1
    ble lbl_fn_806D4BE0_00001768
    li r3, 0x2
    b lbl_fn_806D4BE0_000017F8
lbl_fn_806D4BE0_00001768:
    lwz r3, 0x8(r31)
    subi r0, r3, 0x2
    cmplwi r0, 0x3f
    ble lbl_fn_806D4BE0_00001780
    li r3, 0x2
    b lbl_fn_806D4BE0_000017F8
lbl_fn_806D4BE0_00001780:
    lis r27, lbl_80860DC0@ha
    mr r3, r28
    addi r5, r27, lbl_80860DC0@l
    mr r4, r29
    lwz r5, 0x4(r5)
    mr r6, r30
    mr r7, r31
    bl fn_806D5420
    cmpwi r3, 0x3
    beq lbl_fn_806D4BE0_000017B4
    cmpwi r3, 0x2
    beq lbl_fn_806D4BE0_000017BC
    b lbl_fn_806D4BE0_000017C4
lbl_fn_806D4BE0_000017B4:
    li r3, 0xb
    b lbl_fn_806D4BE0_000017F8
lbl_fn_806D4BE0_000017BC:
    li r3, 0xc
    b lbl_fn_806D4BE0_000017F8
lbl_fn_806D4BE0_000017C4:
    li r0, 0x3
    stw r0, lbl_80860DC0@l(r27)
    bl OSGetTime
    lis r7, lbl_80860DC8@ha
    lis r5, lbl_807C29B8@ha
    addi r6, r7, lbl_80860DC8@l
    stw r3, lbl_80860DC8@l(r7)
    li r3, 0x1
    stw r4, 0x4(r6)
    addi r4, r5, lbl_807C29B8@l
    crclr 6
    bl fn_806A76B0
    li r3, 0x0
lbl_fn_806D4BE0_000017F8:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806D4E00(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_806A7110
    cmpwi r3, 0x0
    beq lbl_fn_806D4E00_00001834
    li r3, 0x1
    b lbl_fn_806D4E00_00001868
lbl_fn_806D4E00_00001834:
    lis r3, lbl_80860DC0@ha
    lwz r0, lbl_80860DC0@l(r3)
    cmpwi r0, 0x2
    beq lbl_fn_806D4E00_00001854
    cmpwi r0, 0x3
    beq lbl_fn_806D4E00_00001854
    li r3, 0xd
    b lbl_fn_806D4E00_00001868
lbl_fn_806D4E00_00001854:
    bl fn_806D52D0
    lis r3, lbl_80860DC0@ha
    li r0, 0x6
    stw r0, lbl_80860DC0@l(r3)
    li r3, 0x0
lbl_fn_806D4E00_00001868:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806D4E70(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_806A7110
    cmpwi r3, 0x0
    beq lbl_fn_806D4E70_000018A4
    li r3, 0x1
    b lbl_fn_806D4E70_000019D0
lbl_fn_806D4E70_000018A4:
    lis r3, lbl_80860DC0@ha
    lwz r0, lbl_80860DC0@l(r3)
    cmpwi r0, 0x5
    bne lbl_fn_806D4E70_000018BC
    li r3, 0xf
    b lbl_fn_806D4E70_000019D0
lbl_fn_806D4E70_000018BC:
    cmpwi r0, 0x2
    beq lbl_fn_806D4E70_000018D4
    cmpwi r0, 0x3
    beq lbl_fn_806D4E70_000018D4
    li r3, 0xe
    b lbl_fn_806D4E70_000019D0
lbl_fn_806D4E70_000018D4:
    bl fn_806D52C0
    subi r0, r3, 0x4
    cmplwi r0, 0x3
    ble lbl_fn_806D4E70_00001920
    cmpwi r3, 0x1
    beq lbl_fn_806D4E70_00001900
    cmpwi r3, 0x0
    beq lbl_fn_806D4E70_00001910
    cmpwi r3, 0x8
    beq lbl_fn_806D4E70_000019C0
    b lbl_fn_806D4E70_000019CC
lbl_fn_806D4E70_00001900:
    lis r3, lbl_80860DC0@ha
    li r0, 0x6
    stw r0, lbl_80860DC0@l(r3)
    b lbl_fn_806D4E70_000019CC
lbl_fn_806D4E70_00001910:
    lis r3, lbl_80860DC0@ha
    li r0, 0x6
    stw r0, lbl_80860DC0@l(r3)
    b lbl_fn_806D4E70_000019CC
lbl_fn_806D4E70_00001920:
    bl OSGetTime
    lis r5, 0x8000
    lis r7, lbl_80860DC8@ha
    lwz r0, 0xf8(r5)
    addi r6, r7, lbl_80860DC8@l
    lis r5, 0x1062
    lwz r6, 0x4(r6)
    srwi r0, r0, 2
    lwz r7, lbl_80860DC8@l(r7)
    addi r5, r5, 0x4dd3
    subfc r4, r6, r4
    mulhwu r0, r5, r0
    subfe r3, r7, r3
    li r5, 0x0
    srwi r6, r0, 6
    bl __div2i
    li r0, 0x0
    li r6, 0x7530
    xoris r5, r3, 0x8000
    xoris r0, r0, 0x8000
    subfc r3, r4, r6
    subfe r5, r5, r0
    subfe r5, r0, r0
    neg. r5, r5
    beq lbl_fn_806D4E70_000019CC
    lis r4, lbl_807C29DC@ha
    li r3, 0x1
    addi r4, r4, lbl_807C29DC@l
    crclr 6
    bl fn_806A76B0
    bl fn_806D52D0
    lis r4, lbl_80860DC0@ha
    li r0, 0x5
    lis r3, 0xffff
    stw r0, lbl_80860DC0@l(r4)
    subi r4, r3, 0x7f16
    li r3, 0x7
    bl fn_806A7130
    li r3, 0xf
    b lbl_fn_806D4E70_000019D0
lbl_fn_806D4E70_000019C0:
    lis r3, lbl_80860DC0@ha
    li r0, 0x4
    stw r0, lbl_80860DC0@l(r3)
lbl_fn_806D4E70_000019CC:
    li r3, 0x0
lbl_fn_806D4E70_000019D0:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806D4FD0(void)
{
    nofralloc
    lis r3, lbl_80860DC0@ha
    lwz r3, lbl_80860DC0@l(r3)
    blr
}

asm void fn_806D4FE0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    mr r30, r4
    bl fn_806A7110
    cmpwi r3, 0x0
    beq lbl_fn_806D4FE0_00001A24
    li r3, 0x1
    b lbl_fn_806D4FE0_00001BC0
lbl_fn_806D4FE0_00001A24:
    bl fn_806A7110
    cmpwi r3, 0x0
    beq lbl_fn_806D4FE0_00001A38
    li r3, 0x1
    b lbl_fn_806D4FE0_00001A80
lbl_fn_806D4FE0_00001A38:
    lis r3, lbl_80860DC0@ha
    lwz r0, lbl_80860DC0@l(r3)
    cmpwi r0, 0x4
    beq lbl_fn_806D4FE0_00001A50
    li r3, 0x11
    b lbl_fn_806D4FE0_00001A80
lbl_fn_806D4FE0_00001A50:
    addi r3, r1, 0x8
    bl fn_806D52F0
    lwz r5, 0x8(r1)
    cmpwi r5, 0x0
    bne lbl_fn_806D4FE0_00001A6C
    li r3, 0x12
    b lbl_fn_806D4FE0_00001A80
lbl_fn_806D4FE0_00001A6C:
    lwz r4, 0x0(r3)
    addi r0, r3, 0x4
    stw r4, 0x10(r1)
    li r3, 0x0
    stw r0, 0x14(r1)
lbl_fn_806D4FE0_00001A80:
    cmpwi r3, 0x0
    beq lbl_fn_806D4FE0_00001A8C
    b lbl_fn_806D4FE0_00001BC0
lbl_fn_806D4FE0_00001A8C:
    lwz r0, 0x10(r1)
    cmpwi r0, 0x0
    bne lbl_fn_806D4FE0_00001AA0
    li r3, 0x10
    b lbl_fn_806D4FE0_00001BC0
lbl_fn_806D4FE0_00001AA0:
    cmpwi r31, 0x0
    bne lbl_fn_806D4FE0_00001AB0
    li r3, 0x2
    b lbl_fn_806D4FE0_00001BC0
lbl_fn_806D4FE0_00001AB0:
    lwz r4, 0x14(r1)
    lwz r0, 0x0(r4)
    cmplw r30, r0
    blt lbl_fn_806D4FE0_00001AC8
    li r3, 0x2
    b lbl_fn_806D4FE0_00001BC0
lbl_fn_806D4FE0_00001AC8:
    cmpwi r30, 0x0
    addi r6, r4, 0x8
    beq lbl_fn_806D4FE0_00001B64
    srwi. r0, r30, 3
    mtctr r0
    beq lbl_fn_806D4FE0_00001B4C
lbl_fn_806D4FE0_00001AE0:
    lwz r0, 0x14(r6)
    add r3, r6, r0
    lwz r0, 0x2c(r3)
    addi r6, r3, 0x18
    add r3, r6, r0
    lwz r0, 0x2c(r3)
    addi r6, r3, 0x18
    add r3, r6, r0
    lwz r0, 0x2c(r3)
    addi r6, r3, 0x18
    add r3, r6, r0
    lwz r0, 0x2c(r3)
    addi r6, r3, 0x18
    add r3, r6, r0
    lwz r0, 0x2c(r3)
    addi r6, r3, 0x18
    add r3, r6, r0
    lwz r0, 0x2c(r3)
    addi r6, r3, 0x18
    add r3, r6, r0
    lwz r0, 0x2c(r3)
    addi r6, r3, 0x18
    add r3, r6, r0
    addi r6, r3, 0x18
    bdnz lbl_fn_806D4FE0_00001AE0
    andi. r30, r30, 0x7
    beq lbl_fn_806D4FE0_00001B64
lbl_fn_806D4FE0_00001B4C:
    mtctr r30
    nop
lbl_fn_806D4FE0_00001B54:
    lwz r0, 0x14(r6)
    add r3, r6, r0
    addi r6, r3, 0x18
    bdnz lbl_fn_806D4FE0_00001B54
lbl_fn_806D4FE0_00001B64:
    lwz r3, 0x14(r6)
    add r0, r4, r5
    add r3, r6, r3
    addi r3, r3, 0x18
    cmplw r3, r0
    ble lbl_fn_806D4FE0_00001B84
    li r3, 0x2
    b lbl_fn_806D4FE0_00001BC0
lbl_fn_806D4FE0_00001B84:
    lwz r5, 0x0(r6)
    addi r0, r6, 0x18
    lwz r4, 0x4(r6)
    li r3, 0x0
    stw r4, 0x4(r31)
    stw r5, 0x0(r31)
    lwz r5, 0x8(r6)
    lwz r4, 0xc(r6)
    stw r4, 0xc(r31)
    stw r5, 0x8(r31)
    lwz r5, 0x10(r6)
    lwz r4, 0x14(r6)
    stw r4, 0x14(r31)
    stw r5, 0x10(r31)
    stw r0, 0x18(r31)
lbl_fn_806D4FE0_00001BC0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806D51D0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    bl fn_806A7110
    cmpwi r3, 0x0
    beq lbl_fn_806D51D0_00001C0C
    li r3, 0x1
    b lbl_fn_806D51D0_00001CA8
lbl_fn_806D51D0_00001C0C:
    bl fn_806A7110
    cmpwi r3, 0x0
    beq lbl_fn_806D51D0_00001C20
    li r3, 0x1
    b lbl_fn_806D51D0_00001C68
lbl_fn_806D51D0_00001C20:
    lis r3, lbl_80860DC0@ha
    lwz r0, lbl_80860DC0@l(r3)
    cmpwi r0, 0x4
    beq lbl_fn_806D51D0_00001C38
    li r3, 0x11
    b lbl_fn_806D51D0_00001C68
lbl_fn_806D51D0_00001C38:
    addi r3, r1, 0x8
    bl fn_806D52F0
    lwz r0, 0x8(r1)
    cmpwi r0, 0x0
    bne lbl_fn_806D51D0_00001C54
    li r3, 0x12
    b lbl_fn_806D51D0_00001C68
lbl_fn_806D51D0_00001C54:
    lwz r4, 0x0(r3)
    addi r0, r3, 0x4
    stw r4, 0x10(r1)
    li r3, 0x0
    stw r0, 0x14(r1)
lbl_fn_806D51D0_00001C68:
    cmpwi r3, 0x0
    beq lbl_fn_806D51D0_00001C74
    b lbl_fn_806D51D0_00001CA8
lbl_fn_806D51D0_00001C74:
    cmpwi r31, 0x0
    bne lbl_fn_806D51D0_00001C84
    li r3, 0x2
    b lbl_fn_806D51D0_00001CA8
lbl_fn_806D51D0_00001C84:
    lwz r0, 0x10(r1)
    cmpwi r0, 0x0
    bne lbl_fn_806D51D0_00001C98
    li r3, 0x10
    b lbl_fn_806D51D0_00001CA8
lbl_fn_806D51D0_00001C98:
    lwz r4, 0x14(r1)
    li r3, 0x0
    lwz r0, 0x0(r4)
    stw r0, 0x0(r31)
lbl_fn_806D51D0_00001CA8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806D52B0(void)
{
    nofralloc
    cntlzw r0, r3
    srwi r3, r0, 5
    b fn_806D3BF0
}

asm void fn_806D52C0(void)
{
    nofralloc
    b fn_806D3D70
}

asm void fn_806D52D0(void)
{
    nofralloc
    b fn_806D3F50
}

asm void fn_806D52E0(void)
{
    nofralloc
    b fn_806D3F90
}

asm void fn_806D52F0(void)
{
    nofralloc
    b fn_806D4030
}

asm void fn_806D5300(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    rlwinm r12, r3, 8, 8, 15
    rlwinm r11, r6, 24, 16, 23
    stw r0, 0x34(r1)
    rlwinm r10, r6, 8, 8, 15
    rlwinm r9, r8, 24, 16, 23
    rlwinm r0, r8, 8, 8, 15
    stw r31, 0x2c(r1)
    rlwinm r31, r3, 24, 16, 23
    rlwimi r31, r3, 8, 24, 31
    rlwimi r12, r3, 24, 0, 7
    stw r30, 0x28(r1)
    rlwinm r30, r5, 8, 8, 15
    or r3, r31, r12
    rlwimi r11, r6, 8, 24, 31
    stw r29, 0x24(r1)
    rlwinm r29, r5, 24, 16, 23
    rlwimi r29, r5, 8, 24, 31
    rlwimi r30, r5, 24, 0, 7
    stw r28, 0x20(r1)
    rlwimi r10, r6, 24, 0, 7
    rlwimi r9, r8, 8, 24, 31
    rlwimi r0, r8, 24, 0, 7
    mr r28, r4
    or r4, r29, r30
    or r5, r11, r10
    or r0, r9, r0
    stw r4, 0x8(r1)
    mr r31, r7
    mr r29, r8
    addi r4, r8, 0x10
    stw r3, 0xc(r1)
    li r3, 0x7
    stw r5, 0x10(r1)
    stw r0, 0x14(r1)
    bl fn_806A72E0
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_806D5300_00001DBC
    li r3, 0x2
    b lbl_fn_806D5300_00001E0C
lbl_fn_806D5300_00001DBC:
    addi r4, r1, 0x8
    li r5, 0x10
    bl memcpy
    mr r4, r31
    mr r5, r29
    addi r3, r30, 0x10
    bl memcpy
    lis r3, lbl_807C29E8@ha
    mr r4, r28
    mr r5, r30
    addi r6, r29, 0x10
    addi r3, r3, lbl_807C29E8@l
    li r7, 0x0
    bl fn_806D42D0
    mr r29, r3
    mr r4, r30
    li r3, 0x7
    li r5, 0x0
    bl fn_806A7400
    mr r3, r29
lbl_fn_806D5300_00001E0C:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806D5420(void)
{
    nofralloc
    stwu r1, -0x140(r1)
    mflr r0
    subi r7, r7, 0x4
    stw r0, 0x144(r1)
    li r0, 0x22
    addi r8, r1, 0x14
    stw r31, 0x13c(r1)
    mr r31, r5
    stw r30, 0x138(r1)
    stw r29, 0x134(r1)
    mtctr r0
    nop
lbl_fn_806D5420_00001E64:
    lwz r5, 0x4(r7)
    lwzu r0, 0x8(r7)
    stw r5, 0x4(r8)
    stwu r0, 0x8(r8)
    bdnz lbl_fn_806D5420_00001E64
    lwz r30, 0x18(r1)
    rlwinm r12, r6, 24, 16, 23
    rlwinm r11, r6, 8, 8, 15
    rlwinm r10, r4, 24, 16, 23
    rlwinm r9, r4, 8, 8, 15
    rlwinm r8, r3, 24, 16, 23
    rlwinm r7, r3, 8, 8, 15
    rlwinm r5, r30, 24, 16, 23
    rlwinm r0, r30, 8, 8, 15
    rlwimi r12, r6, 8, 24, 31
    rlwimi r11, r6, 24, 0, 7
    rlwimi r10, r4, 8, 24, 31
    rlwimi r9, r4, 24, 0, 7
    rlwimi r8, r3, 8, 24, 31
    rlwimi r7, r3, 24, 0, 7
    or r6, r12, r11
    or r4, r10, r9
    stw r6, 0x8(r1)
    or r3, r8, r7
    rlwimi r5, r30, 8, 24, 31
    rlwimi r0, r30, 24, 0, 7
    stw r4, 0xc(r1)
    or r0, r5, r0
    addi r5, r1, 0x1c
    stw r3, 0x10(r1)
    li r6, 0x0
    stw r0, 0x14(r1)
    b lbl_fn_806D5420_00001F0C
lbl_fn_806D5420_00001EE8:
    lwz r4, 0x0(r5)
    addi r6, r6, 0x1
    rlwinm r3, r4, 24, 16, 23
    rlwinm r0, r4, 8, 8, 15
    rlwimi r3, r4, 8, 24, 31
    rlwimi r0, r4, 24, 0, 7
    or r0, r3, r0
    stw r0, 0x0(r5)
    addi r5, r5, 0x4
lbl_fn_806D5420_00001F0C:
    lwz r3, 0x18(r1)
    srwi r0, r3, 2
    cmplw r6, r0
    blt lbl_fn_806D5420_00001EE8
    addi r4, r3, 0x10
    li r3, 0x7
    bl fn_806A72E0
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_fn_806D5420_00001F3C
    li r3, 0x2
    b lbl_fn_806D5420_00001F94
lbl_fn_806D5420_00001F3C:
    addi r4, r1, 0x8
    li r5, 0x10
    bl memcpy
    lwz r5, 0x18(r1)
    addi r3, r29, 0x10
    addi r4, r1, 0x1c
    bl memcpy
    lwz r6, 0x18(r1)
    lis r3, lbl_807C2A00@ha
    lis r7, fn_806D55A0@ha
    mr r4, r31
    mr r5, r29
    addi r3, r3, lbl_807C2A00@l
    addi r6, r6, 0x10
    addi r7, r7, fn_806D55A0@l
    bl fn_806D42D0
    mr r30, r3
    mr r4, r29
    li r3, 0x7
    li r5, 0x0
    bl fn_806A7400
    mr r3, r30
lbl_fn_806D5420_00001F94:
    lwz r0, 0x144(r1)
    lwz r31, 0x13c(r1)
    lwz r30, 0x138(r1)
    lwz r29, 0x134(r1)
    mtlr r0
    addi r1, r1, 0x140
    blr
}

asm void fn_806D55A0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    ble lbl_fn_806D55A0_00002198
    lwz r6, 0x0(r3)
    rlwinm r5, r6, 24, 16, 23
    rlwinm r0, r6, 8, 8, 15
    rlwimi r5, r6, 8, 24, 31
    rlwimi r0, r6, 24, 0, 7
    or r5, r5, r0
    stw r5, 0x0(r3)
    subi r0, r5, 0x1
    cmplwi r0, 0x4
    ble lbl_fn_806D55A0_00002034
    cmpwi r5, 0x0
    bne lbl_fn_806D55A0_0000217C
    lwz r7, 0x4(r3)
    lwz r8, 0x8(r3)
    rlwinm r6, r7, 24, 16, 23
    rlwinm r5, r7, 8, 8, 15
    rlwinm r4, r8, 24, 16, 23
    rlwinm r0, r8, 8, 8, 15
    rlwimi r6, r7, 8, 24, 31
    rlwimi r5, r7, 24, 0, 7
    or r5, r6, r5
    rlwimi r4, r8, 8, 24, 31
    rlwimi r0, r8, 24, 0, 7
    stw r5, 0x4(r3)
    or r0, r4, r0
    stw r0, 0x8(r3)
    b lbl_fn_806D55A0_00002198
lbl_fn_806D55A0_00002034:
    lwz r9, 0x4(r3)
    add r0, r3, r4
    lwz r10, 0x8(r3)
    li r4, 0x3
    rlwinm r8, r9, 24, 16, 23
    rlwinm r7, r9, 8, 8, 15
    rlwinm r6, r10, 24, 16, 23
    rlwinm r5, r10, 8, 8, 15
    rlwimi r8, r9, 8, 24, 31
    rlwimi r7, r9, 24, 0, 7
    or r7, r8, r7
    rlwimi r6, r10, 8, 24, 31
    rlwimi r5, r10, 24, 0, 7
    stw r7, 0x4(r3)
    or r6, r6, r5
    stw r6, 0x8(r3)
    li r5, 0x0
    b lbl_fn_806D55A0_0000216C
lbl_fn_806D55A0_0000207C:
    addi r6, r4, 0x5
    slwi r6, r6, 2
    add r6, r3, r6
    cmplw r6, r0
    ble lbl_fn_806D55A0_000020AC
    lis r4, lbl_807C2A18@ha
    li r3, 0x2
    addi r4, r4, lbl_807C2A18@l
    crclr 6
    bl fn_806A76B0
    li r3, 0x0
    b lbl_fn_806D55A0_0000219C
lbl_fn_806D55A0_000020AC:
    slwi r6, r4, 2
    addi r5, r5, 0x1
    lwzx r9, r3, r6
    add r8, r3, r6
    rlwinm r7, r9, 24, 16, 23
    rlwinm r6, r9, 8, 8, 15
    rlwimi r7, r9, 8, 24, 31
    rlwimi r6, r9, 24, 0, 7
    or r6, r7, r6
    stw r6, 0x0(r8)
    lwz r9, 0x4(r8)
    rlwinm r7, r9, 24, 16, 23
    rlwinm r6, r9, 8, 8, 15
    rlwimi r7, r9, 8, 24, 31
    rlwimi r6, r9, 24, 0, 7
    or r6, r7, r6
    stw r6, 0x4(r8)
    lwz r9, 0x8(r8)
    rlwinm r7, r9, 24, 16, 23
    rlwinm r6, r9, 8, 8, 15
    rlwimi r7, r9, 8, 24, 31
    rlwimi r6, r9, 24, 0, 7
    or r6, r7, r6
    stw r6, 0x8(r8)
    lwz r9, 0xc(r8)
    rlwinm r7, r9, 24, 16, 23
    rlwinm r6, r9, 8, 8, 15
    rlwimi r7, r9, 8, 24, 31
    rlwimi r6, r9, 24, 0, 7
    or r6, r7, r6
    stw r6, 0xc(r8)
    lwz r9, 0x10(r8)
    rlwinm r7, r9, 24, 16, 23
    rlwinm r6, r9, 8, 8, 15
    rlwimi r7, r9, 8, 24, 31
    rlwimi r6, r9, 24, 0, 7
    or r6, r7, r6
    stw r6, 0x10(r8)
    lwz r9, 0x14(r8)
    rlwinm r7, r9, 24, 16, 23
    rlwinm r6, r9, 8, 8, 15
    rlwimi r7, r9, 8, 24, 31
    rlwimi r6, r9, 24, 0, 7
    or r6, r7, r6
    stw r6, 0x14(r8)
    srwi r6, r6, 2
    add r4, r6, r4
    addi r4, r4, 0x6
lbl_fn_806D55A0_0000216C:
    lwz r6, 0x4(r3)
    cmplw r5, r6
    blt lbl_fn_806D55A0_0000207C
    b lbl_fn_806D55A0_00002198
lbl_fn_806D55A0_0000217C:
    lis r4, lbl_807C2A2C@ha
    li r3, 0x2
    addi r4, r4, lbl_807C2A2C@l
    crclr 6
    bl fn_806A76B0
    li r3, 0x0
    b lbl_fn_806D55A0_0000219C
lbl_fn_806D55A0_00002198:
    li r3, 0x1
lbl_fn_806D55A0_0000219C:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
