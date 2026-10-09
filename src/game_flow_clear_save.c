#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __register_global_object(void);
extern void _restgpr_25(void);
extern void _restgpr_27(void);
extern void _savegpr_25(void);
extern void _savegpr_27(void);
extern void fn_8003EFB0(void);
extern void fn_800827E0(void);
extern void fn_800838B8(void);
extern void fn_800EFD04(void);
extern void fn_800F7F90(void);
extern void fn_801010A0(void);
extern void fn_801010E8(void);
extern void fn_8010EE78(void);
extern void fn_8014FAD0(void);
extern void fn_80219E6C(void);
extern void fn_804AE3BC(void);
extern void fn_804CF198(void);
extern void fn_804CF640(void);
extern void fn_804D1698(void);
extern void fn_804D5F44(void);
extern void fn_804D5F4C(void);
extern void fn_804D634C(void);
extern void fn_804D818C(void);
extern void fn_804DD15C(void);
extern void fn_804EB1B0(void);
extern void fn_804EF9B8(void);
extern void fn_804EFC98(void);
extern void fn_804EFE9C(void);
extern void fn_804EFF78(void);
extern void fn_804F106C(void);
extern void fn_804F1128(void);
extern void fn_804F12A4(void);
extern void fn_804F1360(void);
extern void fn_804F147C(void);
extern void fn_804F148C(void);
extern void fn_804F149C(void);
extern void fn_804F1568(void);
extern void fn_804F1954(void);
extern void fn_804F1CA4(void);
extern void fn_804F1D74(void);
extern void fn_804F1F28(void);
extern void fn_804F1F38(void);
extern void fn_804F2044(void);
extern void fn_804F225C(void);
extern void fn_804F2454(void);
extern void fn_804F2998(void);
extern void fn_804F2C48(void);
extern void fn_804F2CE8(void);
extern void fn_804F2CEC(void);
extern void fn_804F2DB0(void);
extern void fn_804F2E40(void);
extern void fn_804F2ED0(void);
extern void fn_804F2F94(void);
extern void fn_804F3024(void);
extern void fn_804F30B4(void);
extern void fn_804F3174(void);
extern void fn_804F325C(void);
extern void fn_804F34B8(void);
extern void fn_804F36F8(void);
extern void fn_804F36FC(void);
extern void fn_804F3884(void);
extern void fn_804F39D8(void);
extern void fn_804F3AF4(void);
extern void fn_804F3BB0(void);
extern void fn_804F3D84(void);
extern void fn_804F3E54(void);
extern void fn_804F3EF0(void);
extern void fn_804F472C(void);
extern void fn_804F4800(void);
extern void fn_804F4CBC(void);
extern void fn_804F4E20(void);
extern void fn_804F4E44(void);
extern void fn_804F4F44(void);
extern void fn_804F4F68(void);
extern void fn_804F4FC8(void);
extern void fn_804F50C8(void);
extern void fn_804FC0D8(void);
extern void fn_8050128C(void);
extern void fn_8050DDE0(void);
extern void fn_8050E098(void);
extern void fn_8050E414(void);
extern void fn_8050E534(void);
extern void fn_8050E59C(void);
extern void fn_8050E630(void);
extern void fn_8050F8B4(void);
extern void fn_805F9920(void);
extern void fn_805F9990(void);
extern void fn_8067CE80(void);
extern void fn_80682428(void);
extern void fn_80695B28(void);
extern void fn_806A8E40(void);
extern void fn_806B0E30(void);
extern void fn_806B1250(void);
extern void fn_806B3AE0(void);
extern void fn_806B3B80(void);

/* External data declarations */
extern u8 jumptable_807912DC[];
extern u8 lbl_807596F0[];
extern u8 lbl_80759718[];
extern u8 lbl_80759748[];
extern u8 lbl_80759E48[];
extern u8 lbl_8078CA58[];
extern u8 lbl_8078CF20[];
extern u8 lbl_8078D4E8[];
extern u8 lbl_80791B00[];
extern u8 lbl_807C6BB8[];
extern u8 lbl_807C7030[];
extern u8 lbl_807C8AE8[];
extern u8 lbl_807C8F48[];

/* Small data declarations */
extern u32 lbl_8087E160;
extern u32 lbl_8087E1AC;
extern u32 lbl_8087E1B0;
extern u32 lbl_8087EE74;
extern u32 lbl_8087F048;
extern u32 lbl_8087F4A0;
extern u32 lbl_8087F5F8;
extern u32 lbl_8087F5FC;
extern u32 lbl_8087F600;
extern u32 lbl_8087F604;
extern u32 lbl_8087F610;
extern u32 lbl_8087F628;
extern u32 lbl_80887570;
extern u32 lbl_80887574;
extern u32 lbl_80887590;
extern u32 lbl_808875C4;
extern u32 lbl_808875CC;
extern u32 lbl_80887610;
extern u32 lbl_8088761C;
extern u32 lbl_80887620;
extern u32 lbl_80887624;
extern u32 lbl_80887628;
extern u32 lbl_8088762C;

/* Function declarations */
void fn_804ED76C(void);
void fn_804EDB10(void);
void fn_804EDCD0(void);
void fn_804EE034(void);
void fn_804EE03C(void);
void fn_804EE044(void);
void fn_804EE4E4(void);
void fn_804EE4E8(void);
void fn_804EE4EC(void);
void fn_804EE4F0(void);
void fn_804EE4F4(void);
void fn_804EE838(void);
void fn_804EE908(void);
void fn_804EE9F4(void);
void fn_804EEB38(void);
void fn_804EED80(void);
void fn_804EF0F4(void);

asm void fn_804ED76C(void)
{
    nofralloc
    stwu r1, -0x150(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x154(r1)
    stmw r20, 0x120(r1)
    mr r31, r3
    bne lbl_fn_804ED76C_00000024
    li r3, 0x0
    b lbl_fn_804ED76C_0000004C
lbl_fn_804ED76C_00000024:
    lwz r5, 0x0(r3)
    lwz r0, lbl_8087F604
    cmpw r5, r0
    bne lbl_fn_804ED76C_00000040
    lwz r0, 0x4(r3)
    cmpwi r0, 0x5
    beq lbl_fn_804ED76C_00000048
lbl_fn_804ED76C_00000040:
    li r3, 0x0
    b lbl_fn_804ED76C_0000004C
lbl_fn_804ED76C_00000048:
    li r3, 0x1
lbl_fn_804ED76C_0000004C:
    cmpwi r4, 0x0
    bne lbl_fn_804ED76C_00000058
    b lbl_fn_804ED76C_00000390
lbl_fn_804ED76C_00000058:
    addi r6, r1, 0x74
    addi r0, r1, 0x110
    lwz r5, lbl_8087F604
    cmplw r6, r0
    li r3, 0x0
    li r4, 0x5
    li r0, -0x1
    stw r5, 0x58(r1)
    stw r4, 0x5c(r1)
    stw r3, 0x60(r1)
    stw r3, 0x64(r1)
    sth r0, 0x70(r1)
    sth r3, 0x72(r1)
    bge lbl_fn_804ED76C_00000154
    addi r5, r1, 0xf0
    li r0, 0x0
    li r3, 0x0
    bgt lbl_fn_804ED76C_000000A4
    li r3, 0x1
lbl_fn_804ED76C_000000A4:
    cmpwi r3, 0x0
    beq lbl_fn_804ED76C_000000B0
    li r0, 0x1
lbl_fn_804ED76C_000000B0:
    cmpwi r0, 0x0
    beq lbl_fn_804ED76C_00000120
    addi r0, r5, 0x1f
    li r4, -0x1
    subf r0, r6, r0
    li r3, 0x0
    srwi r0, r0, 5
    mtctr r0
    cmplw r6, r5
    bge lbl_fn_804ED76C_00000120
lbl_fn_804ED76C_000000D8:
    sth r4, 0x0(r6)
    sth r3, 0x2(r6)
    sth r4, 0x4(r6)
    sth r3, 0x6(r6)
    sth r4, 0x8(r6)
    sth r3, 0xa(r6)
    sth r4, 0xc(r6)
    sth r3, 0xe(r6)
    sth r4, 0x10(r6)
    sth r3, 0x12(r6)
    sth r4, 0x14(r6)
    sth r3, 0x16(r6)
    sth r4, 0x18(r6)
    sth r3, 0x1a(r6)
    sth r4, 0x1c(r6)
    sth r3, 0x1e(r6)
    addi r6, r6, 0x20
    bdnz lbl_fn_804ED76C_000000D8
lbl_fn_804ED76C_00000120:
    addi r3, r1, 0x110
    li r5, -0x1
    addi r0, r3, 0x3
    li r4, 0x0
    subf r0, r6, r0
    srwi r0, r0, 2
    mtctr r0
    cmplw r6, r3
    bge lbl_fn_804ED76C_00000154
lbl_fn_804ED76C_00000144:
    sth r5, 0x0(r6)
    sth r4, 0x2(r6)
    addi r6, r6, 0x4
    bdnz lbl_fn_804ED76C_00000144
lbl_fn_804ED76C_00000154:
    addi r3, r1, 0x68
    li r4, 0x0
    li r5, 0x8
    bl memset
    lis r3, lbl_807596F0@ha
    lwzu r20, lbl_807596F0@l(r3)
    li r24, 0x14
    lis r4, lbl_80759718@ha
    lwz r21, 0x4(r3)
    lwz r22, 0x8(r3)
    lwz r23, 0xc(r3)
    lwz r10, 0x10(r3)
    lwz r9, 0x14(r3)
    lwz r8, 0x18(r3)
    lwz r7, 0x1c(r3)
    lwz r6, 0x20(r3)
    lwz r0, 0x24(r3)
    lwzu r3, lbl_80759718@l(r4)
    stw r20, 0x30(r1)
    lwz r5, 0x4(r4)
    lwz r25, 0x8(r4)
    lwz r26, 0xc(r4)
    lwz r27, 0x10(r4)
    lwz r28, 0x14(r4)
    lwz r29, 0x18(r4)
    lwz r30, 0x1c(r4)
    lwz r12, 0x20(r4)
    lwz r11, 0x24(r4)
    stw r21, 0x34(r1)
    stw r22, 0x38(r1)
    stw r23, 0x3c(r1)
    stw r10, 0x40(r1)
    stw r9, 0x44(r1)
    stw r8, 0x48(r1)
    stw r7, 0x4c(r1)
    stw r6, 0x50(r1)
    stw r0, 0x54(r1)
    sth r24, 0x70(r1)
    sth r20, 0x72(r1)
    sth r24, 0x74(r1)
    sth r21, 0x76(r1)
    sth r24, 0x78(r1)
    sth r22, 0x7a(r1)
    sth r24, 0x7c(r1)
    sth r23, 0x7e(r1)
    sth r24, 0x80(r1)
    sth r10, 0x82(r1)
    sth r24, 0x84(r1)
    sth r9, 0x86(r1)
    sth r24, 0x88(r1)
    sth r8, 0x8a(r1)
    sth r24, 0x8c(r1)
    sth r7, 0x8e(r1)
    sth r24, 0x90(r1)
    sth r6, 0x92(r1)
    sth r24, 0x94(r1)
    sth r0, 0x96(r1)
    stw r3, 0x8(r1)
    stw r5, 0xc(r1)
    stw r25, 0x10(r1)
    stw r26, 0x14(r1)
    stw r27, 0x18(r1)
    stw r28, 0x1c(r1)
    stw r29, 0x20(r1)
    stw r30, 0x24(r1)
    stw r12, 0x28(r1)
    stw r11, 0x2c(r1)
    li r9, 0x0
    li r10, -0x1
    li r8, 0x1
    li r7, 0x2
    li r6, 0x8
    li r0, 0x9
    sth r3, 0x9a(r1)
    mr r3, r31
    addi r4, r1, 0x58
    sth r5, 0x9e(r1)
    li r5, 0xc0
    sth r24, 0x98(r1)
    sth r24, 0x9c(r1)
    sth r24, 0xa0(r1)
    sth r25, 0xa2(r1)
    sth r24, 0xa4(r1)
    sth r26, 0xa6(r1)
    sth r24, 0xa8(r1)
    sth r27, 0xaa(r1)
    sth r24, 0xac(r1)
    sth r28, 0xae(r1)
    sth r24, 0xb0(r1)
    sth r29, 0xb2(r1)
    sth r24, 0xb4(r1)
    sth r30, 0xb6(r1)
    sth r24, 0xb8(r1)
    sth r12, 0xba(r1)
    sth r24, 0xbc(r1)
    sth r11, 0xbe(r1)
    sth r10, 0xc0(r1)
    sth r9, 0xc2(r1)
    sth r10, 0xc4(r1)
    sth r9, 0xc6(r1)
    sth r10, 0xc8(r1)
    sth r9, 0xca(r1)
    sth r10, 0xcc(r1)
    sth r9, 0xce(r1)
    sth r10, 0xd0(r1)
    sth r9, 0xd2(r1)
    sth r10, 0xd4(r1)
    sth r9, 0xd6(r1)
    sth r10, 0xd8(r1)
    sth r9, 0xda(r1)
    sth r10, 0xdc(r1)
    sth r9, 0xde(r1)
    sth r10, 0xe0(r1)
    sth r9, 0xe2(r1)
    sth r10, 0xe4(r1)
    sth r9, 0xe6(r1)
    sth r10, 0xe8(r1)
    sth r9, 0xea(r1)
    sth r10, 0xec(r1)
    sth r9, 0xee(r1)
    sth r10, 0xf0(r1)
    sth r9, 0xf2(r1)
    sth r10, 0xf4(r1)
    sth r9, 0xf6(r1)
    sth r10, 0xf8(r1)
    sth r9, 0xfa(r1)
    sth r10, 0xfc(r1)
    sth r9, 0xfe(r1)
    sth r10, 0x100(r1)
    sth r9, 0x102(r1)
    sth r10, 0x104(r1)
    sth r9, 0x106(r1)
    sth r10, 0x108(r1)
    sth r9, 0x10a(r1)
    sth r10, 0x10c(r1)
    sth r9, 0x10e(r1)
    stb r9, 0x110(r1)
    stb r8, 0x112(r1)
    stb r7, 0x111(r1)
    stb r6, 0x113(r1)
    stb r0, 0x114(r1)
    bl memcpy
    li r3, 0x1
lbl_fn_804ED76C_00000390:
    lmw r20, 0x120(r1)
    lwz r0, 0x154(r1)
    mtlr r0
    addi r1, r1, 0x150
    blr
}

asm void fn_804EDB10(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r4, lbl_80791B00@ha
    stw r0, 0x34(r1)
    addi r4, r4, lbl_80791B00@l
    stmw r22, 0x8(r1)
    lis r29, 0x1
    mr r24, r3
    lis r26, 0x80
    lwz r5, lbl_8087F628
    addi r28, r5, 0x430
    addi r5, r29, 0x46a
    bl fn_806B3AE0
    subis r0, r3, 0x1
    cmplwi r0, 0x46a
    beq lbl_fn_804EDB10_0000054C
    lwz r0, lbl_8087E160
    cmpw r3, r0
    bne lbl_fn_804EDB10_0000054C
    lis r31, lbl_80759E48@ha
    li r25, 0x0
    addi r31, r31, lbl_80759E48@l
    li r27, 0x0
lbl_fn_804EDB10_00000400:
    lwz r0, lbl_8087F628
    add r30, r0, r27
    lwz r0, 0xe4(r30)
    cmplwi r0, 0x1
    bne lbl_fn_804EDB10_00000490
    lwz r0, 0xf8(r30)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_804EDB10_000004E4
    lwz r0, 0xd8(r30)
    mr r3, r24
    addi r23, r31, 0x1ee
    srwi. r0, r0, 31
    bne lbl_fn_804EDB10_00000440
    addi r4, r30, 0xd9
    b lbl_fn_804EDB10_00000444
lbl_fn_804EDB10_00000440:
    lwz r4, 0xe0(r30)
lbl_fn_804EDB10_00000444:
    mr r5, r23
    bl fn_806B3B80
    mr r22, r3
    mr r3, r23
    mr r4, r22
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_804EDB10_0000054C
    lwz r0, 0xe8(r30)
    srwi. r0, r0, 31
    bne lbl_fn_804EDB10_00000478
    addi r3, r30, 0xe9
    b lbl_fn_804EDB10_0000047C
lbl_fn_804EDB10_00000478:
    lwz r3, 0xf0(r30)
lbl_fn_804EDB10_0000047C:
    mr r4, r22
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_804EDB10_0000054C
    b lbl_fn_804EDB10_000004E4
lbl_fn_804EDB10_00000490:
    cmplwi r0, 0x2
    bne lbl_fn_804EDB10_000004F4
    lwz r0, 0xf8(r30)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_804EDB10_000004E4
    lwz r0, 0xd8(r30)
    mr r3, r24
    srwi. r0, r0, 31
    bne lbl_fn_804EDB10_000004C0
    addi r4, r30, 0xd9
    b lbl_fn_804EDB10_000004C4
lbl_fn_804EDB10_000004C0:
    lwz r4, 0xe0(r30)
lbl_fn_804EDB10_000004C4:
    addi r5, r29, 0x46a
    bl fn_806B3AE0
    subis r0, r3, 0x1
    cmplwi r0, 0x46a
    beq lbl_fn_804EDB10_0000054C
    lwz r0, 0xf4(r30)
    cmpw r3, r0
    bne lbl_fn_804EDB10_0000054C
lbl_fn_804EDB10_000004E4:
    addi r25, r25, 0x1
    addi r27, r27, 0x24
    cmpwi r25, 0x8
    blt lbl_fn_804EDB10_00000400
lbl_fn_804EDB10_000004F4:
    lwz r3, lbl_8087F628
    lwz r0, 0x25c(r3)
    cmpwi r0, 0x1
    beq lbl_fn_804EDB10_00000544
    mr r3, r28
    li r4, 0x3
    bl fn_8050F8B4
    lis r5, 0x1
    mr r4, r3
    mr r3, r24
    addi r5, r5, 0x46a
    bl fn_806B3AE0
    subis r0, r3, 0x1
    cmplwi r0, 0x46a
    beq lbl_fn_804EDB10_0000054C
    lwz r0, 0x1e8(r28)
    subf r3, r3, r0
    bl fn_8067CE80
    subfic r0, r3, 0x80
    slwi r26, r0, 16
lbl_fn_804EDB10_00000544:
    mr r3, r26
    b lbl_fn_804EDB10_00000550
lbl_fn_804EDB10_0000054C:
    li r3, -0x1
lbl_fn_804EDB10_00000550:
    lmw r22, 0x8(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_804EDCD0(void)
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
    bne lbl_fn_804EDCD0_000005B0
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804EDCD0_000005A4
    li r30, 0x0
    b lbl_fn_804EDCD0_000005CC
lbl_fn_804EDCD0_000005A4:
    bl fn_806B0E30
    clrlwi r30, r3, 24
    b lbl_fn_804EDCD0_000005CC
lbl_fn_804EDCD0_000005B0:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804EDCD0_000005C4
    li r3, 0x0
    b lbl_fn_804EDCD0_000005C8
lbl_fn_804EDCD0_000005C4:
    bl fn_806A8E40
lbl_fn_804EDCD0_000005C8:
    clrlwi r30, r3, 24
lbl_fn_804EDCD0_000005CC:
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804EDCD0_00000600
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804EDCD0_000005F4
    li r0, 0x0
    b lbl_fn_804EDCD0_00000604
lbl_fn_804EDCD0_000005F4:
    bl fn_806B1250
    clrlwi r0, r3, 24
    b lbl_fn_804EDCD0_00000604
lbl_fn_804EDCD0_00000600:
    li r0, 0x0
lbl_fn_804EDCD0_00000604:
    clrlwi r3, r30, 24
    clrlwi r0, r0, 24
    subf r0, r3, r0
    cntlzw r0, r0
    srwi r0, r0, 5
    cmpwi r0, 0x1
    bne lbl_fn_804EDCD0_00000698
    lwz r3, lbl_8087F628
    lwz r4, 0x25c(r3)
    cmpwi r4, 0x1
    bne lbl_fn_804EDCD0_00000648
    lwz r3, lbl_8087F610
    lwz r0, 0x4fc(r3)
    cmpwi r0, 0xc
    beq lbl_fn_804EDCD0_00000648
    li r3, 0x0
    b lbl_fn_804EDCD0_000008B0
lbl_fn_804EDCD0_00000648:
    cmpwi r31, 0x0
    beq lbl_fn_804EDCD0_00000698
    lbz r0, 0x0(r31)
    cmpw r0, r4
    beq lbl_fn_804EDCD0_00000664
    li r3, 0x0
    b lbl_fn_804EDCD0_000008B0
lbl_fn_804EDCD0_00000664:
    cmpwi r4, 0x1
    bne lbl_fn_804EDCD0_00000698
    lwz r3, lbl_8087F610
    lbz r4, 0x1(r31)
    lwz r0, 0x540(r3)
    cmpw r4, r0
    beq lbl_fn_804EDCD0_00000698
    cmplwi r4, 0x2
    beq lbl_fn_804EDCD0_00000690
    cmpwi r0, 0x2
    bne lbl_fn_804EDCD0_00000698
lbl_fn_804EDCD0_00000690:
    li r3, 0x0
    b lbl_fn_804EDCD0_000008B0
lbl_fn_804EDCD0_00000698:
    lwz r3, lbl_8087F610
    lwz r0, 0x53c(r3)
    cmpwi r0, 0x1
    bne lbl_fn_804EDCD0_000006B0
    li r3, 0x0
    b lbl_fn_804EDCD0_000008B0
lbl_fn_804EDCD0_000006B0:
    lwz r4, lbl_8087F628
    li r0, 0x1518
    lwz r3, 0x8(r4)
    addi r3, r3, 0x1
    stw r3, 0x8(r4)
    stw r0, 0x4(r4)
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804EDCD0_000006FC
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804EDCD0_000006F0
    li r30, 0x0
    b lbl_fn_804EDCD0_00000718
lbl_fn_804EDCD0_000006F0:
    bl fn_806B0E30
    clrlwi r30, r3, 24
    b lbl_fn_804EDCD0_00000718
lbl_fn_804EDCD0_000006FC:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804EDCD0_00000710
    li r3, 0x0
    b lbl_fn_804EDCD0_00000714
lbl_fn_804EDCD0_00000710:
    bl fn_806A8E40
lbl_fn_804EDCD0_00000714:
    clrlwi r30, r3, 24
lbl_fn_804EDCD0_00000718:
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804EDCD0_0000074C
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804EDCD0_00000740
    li r0, 0x0
    b lbl_fn_804EDCD0_00000750
lbl_fn_804EDCD0_00000740:
    bl fn_806B1250
    clrlwi r0, r3, 24
    b lbl_fn_804EDCD0_00000750
lbl_fn_804EDCD0_0000074C:
    li r0, 0x0
lbl_fn_804EDCD0_00000750:
    clrlwi r3, r30, 24
    clrlwi r0, r0, 24
    subf r0, r3, r0
    cntlzw r0, r0
    srwi r0, r0, 5
    cmpwi r0, 0x1
    bne lbl_fn_804EDCD0_000008AC
    lwz r3, lbl_8087F610
    li r0, 0x1c2
    sth r0, 0x50a(r3)
    lwz r4, lbl_8087F628
    lwz r31, lbl_8087F610
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804EDCD0_000007B0
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804EDCD0_000007A4
    li r30, 0x0
    b lbl_fn_804EDCD0_000007CC
lbl_fn_804EDCD0_000007A4:
    bl fn_806B0E30
    clrlwi r30, r3, 24
    b lbl_fn_804EDCD0_000007CC
lbl_fn_804EDCD0_000007B0:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804EDCD0_000007C4
    li r3, 0x0
    b lbl_fn_804EDCD0_000007C8
lbl_fn_804EDCD0_000007C4:
    bl fn_806A8E40
lbl_fn_804EDCD0_000007C8:
    clrlwi r30, r3, 24
lbl_fn_804EDCD0_000007CC:
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804EDCD0_00000800
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804EDCD0_000007F4
    li r0, 0x0
    b lbl_fn_804EDCD0_00000804
lbl_fn_804EDCD0_000007F4:
    bl fn_806B1250
    clrlwi r0, r3, 24
    b lbl_fn_804EDCD0_00000804
lbl_fn_804EDCD0_00000800:
    li r0, 0x0
lbl_fn_804EDCD0_00000804:
    clrlwi r3, r30, 24
    clrlwi r0, r0, 24
    cmplw r3, r0
    bne lbl_fn_804EDCD0_000008AC
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804EDCD0_00000848
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804EDCD0_0000083C
    li r0, 0x0
    b lbl_fn_804EDCD0_0000084C
lbl_fn_804EDCD0_0000083C:
    bl fn_806B1250
    clrlwi r0, r3, 24
    b lbl_fn_804EDCD0_0000084C
lbl_fn_804EDCD0_00000848:
    li r0, 0x0
lbl_fn_804EDCD0_0000084C:
    lwz r5, 0x5e8(r31)
    clrlwi r4, r0, 24
    li r3, 0x0
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_fn_804EDCD0_00000894
lbl_fn_804EDCD0_00000864:
    lwz r0, 0x5e4(r31)
    add r5, r0, r3
    lwz r0, 0xd0(r5)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804EDCD0_0000088C
    lbz r0, 0xcc(r5)
    cmplw r4, r0
    bne lbl_fn_804EDCD0_0000088C
    b lbl_fn_804EDCD0_00000898
lbl_fn_804EDCD0_0000088C:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804EDCD0_00000864
lbl_fn_804EDCD0_00000894:
    li r5, 0x0
lbl_fn_804EDCD0_00000898:
    cmpwi r5, 0x0
    beq lbl_fn_804EDCD0_000008AC
    lwz r0, 0xd0(r5)
    ori r0, r0, 0x2
    stw r0, 0xd0(r5)
lbl_fn_804EDCD0_000008AC:
    li r3, 0x1
lbl_fn_804EDCD0_000008B0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804EE034(void)
{
    nofralloc
    lwz r3, 0x4fc(r3)
    blr
}

asm void fn_804EE03C(void)
{
    nofralloc
    sth r4, 0x50a(r3)
    blr
}

asm void fn_804EE044(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r26, 0x18(r1)
    mr r31, r3
    mr r28, r4
    mr r26, r5
    bl fn_804D1698
    bl fn_804AE3BC
    mr r4, r31
    clrlwi r5, r26, 16
    bl fn_804EE4E4
    bl fn_800F7F90
    mr r4, r31
    bl fn_804DD15C
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_fn_804EE044_00000998
    bl fn_800F7F90
    bl fn_804EE034
    cmpwi r3, 0xc
    bgt lbl_fn_804EE044_00000998
    bl fn_800F7F90
    addi r3, r3, 0x5e4
    bl fn_804D5F44
    cmplw r31, r3
    bge lbl_fn_804EE044_00000998
    bl fn_800F7F90
    mr r4, r31
    addi r3, r3, 0x5e4
    bl fn_804D5F4C
    stb r31, 0xcc(r3)
    mr r27, r3
    lwz r0, 0xd0(r3)
    oris r0, r0, 0x8000
    rlwinm r0, r0, 0, 2, 0
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xd0(r3)
    bl fn_800F7F90
    bl fn_804EB1B0
    cmpwi r3, 0x1
    bne lbl_fn_804EE044_00000998
    bl fn_800F7F90
    li r4, 0x5a
    bl fn_804EE03C
    bl fn_800F7F90
    li r4, 0x1
    bl fn_804FC0D8
lbl_fn_804EE044_00000998:
    mr r3, r28
    bl fn_804EE4E8
    mr r28, r3
    bl fn_804D1698
    bl fn_804AE3BC
    mr r4, r28
    mr r5, r26
    bl fn_8050E534
    cmpwi r3, 0x0
    stw r3, 0x8(r1)
    bne lbl_fn_804EE044_000009E0
    bl fn_804D1698
    bl fn_804AE3BC
    mr r4, r31
    clrlwi r5, r26, 16
    bl fn_804EE4EC
    li r3, 0x0
    b lbl_fn_804EE044_00000D64
lbl_fn_804EE044_000009E0:
    bl fn_804D1698
    bl fn_804AE3BC
    lwz r4, 0x8(r1)
    clrlwi r5, r26, 16
    bl fn_804EE4F0
    li r28, 0x0
    bl fn_800F7F90
    addis r3, r3, 0x1
    lis r30, lbl_80759E48@ha
    stb r28, -0x6650(r3)
    addi r30, r30, lbl_80759E48@l
    lis r29, jumptable_807912DC@ha
lbl_fn_804EE044_00000A10:
    lwz r26, 0x8(r1)
    bl fn_804D1698
    bl fn_804AE3BC
    addi r4, r1, 0x8
    li r5, 0x1
    bl fn_8050E414
    clrlwi. r0, r3, 24
    mr r28, r3
    beq lbl_fn_804EE044_00000D24
    bl fn_804D1698
    bl fn_804D634C
    cmpwi r3, 0x0
    bne lbl_fn_804EE044_00000A84
    clrlwi r0, r28, 24
    cmplwi r0, 0x8
    beq lbl_fn_804EE044_00000A84
    cmplwi r0, 0x40
    beq lbl_fn_804EE044_00000A84
    cmplwi r0, 0xa
    beq lbl_fn_804EE044_00000A84
    cmplwi r0, 0x1e
    beq lbl_fn_804EE044_00000A84
    bl fn_804D1698
    bl fn_804AE3BC
    mr r4, r31
    mr r5, r26
    bl fn_8050E59C
    cmplwi r3, 0x1
    beq lbl_fn_804EE044_00000A10
lbl_fn_804EE044_00000A84:
    cmpwi r27, 0x0
    beq lbl_fn_804EE044_00000A10
    clrlwi r4, r28, 24
    cmplwi r4, 0x40
    bgt lbl_fn_804EE044_00000A10
    addi r3, r29, jumptable_807912DC@l
    slwi r0, r4, 2
    lwzx r3, r3, r0
    mtctr r3
    bctr
    bl fn_804D1698
    bl fn_804AE3BC
    addi r5, r30, 0x1fd
    li r4, 0x0
    crclr 6
    bl fn_8050E630
    b lbl_fn_804EE044_00000A10
    mr r3, r27
    bl fn_804EE908
    b lbl_fn_804EE044_00000A10
    mr r3, r27
    bl fn_804EE9F4
    b lbl_fn_804EE044_00000A10
    mr r3, r27
    bl fn_804EE838
    b lbl_fn_804EE044_00000A10
    bl fn_804EEB38
    b lbl_fn_804EE044_00000A10
    bl fn_804EED80
    b lbl_fn_804EE044_00000A10
    mr r3, r31
    bl fn_804EF0F4
    b lbl_fn_804EE044_00000A10
    bl fn_804EF9B8
    b lbl_fn_804EE044_00000A10
    bl fn_804EFC98
    b lbl_fn_804EE044_00000A10
    mr r3, r27
    bl fn_804EFE9C
    b lbl_fn_804EE044_00000A10
    mr r3, r27
    bl fn_804EFF78
    b lbl_fn_804EE044_00000A10
    bl fn_804F106C
    b lbl_fn_804EE044_00000A10
    bl fn_804F1128
    b lbl_fn_804EE044_00000A10
    bl fn_804F12A4
    b lbl_fn_804EE044_00000A10
    bl fn_804F1360
    b lbl_fn_804EE044_00000A10
    mr r3, r27
    bl fn_804F147C
    b lbl_fn_804EE044_00000A10
    mr r3, r27
    bl fn_804F148C
    b lbl_fn_804EE044_00000A10
    mr r3, r27
    bl fn_804F149C
    b lbl_fn_804EE044_00000A10
    mr r3, r27
    bl fn_804F1568
    b lbl_fn_804EE044_00000A10
    mr r3, r27
    bl fn_804F1954
    b lbl_fn_804EE044_00000A10
    mr r3, r27
    bl fn_804F1CA4
    b lbl_fn_804EE044_00000A10
    mr r3, r27
    bl fn_804F1D74
    b lbl_fn_804EE044_00000A10
    mr r3, r27
    bl fn_804F1F28
    b lbl_fn_804EE044_00000A10
    mr r3, r27
    bl fn_804F1F38
    b lbl_fn_804EE044_00000A10
    mr r3, r4
    bl fn_804F2044
    b lbl_fn_804EE044_00000A10
    bl fn_804F225C
    b lbl_fn_804EE044_00000A10
    mr r3, r4
    bl fn_804F2454
    b lbl_fn_804EE044_00000A10
    bl fn_804F2998
    b lbl_fn_804EE044_00000A10
    mr r3, r27
    bl fn_804F2C48
    b lbl_fn_804EE044_00000A10
    bl fn_804F2CE8
    b lbl_fn_804EE044_00000A10
    mr r3, r31
    bl fn_804F2CEC
    b lbl_fn_804EE044_00000A10
    mr r3, r31
    bl fn_804F2DB0
    b lbl_fn_804EE044_00000A10
    mr r3, r31
    bl fn_804F2E40
    b lbl_fn_804EE044_00000A10
    mr r3, r31
    bl fn_804F2ED0
    b lbl_fn_804EE044_00000A10
    mr r3, r31
    bl fn_804F2F94
    b lbl_fn_804EE044_00000A10
    mr r3, r31
    bl fn_804F3024
    b lbl_fn_804EE044_00000A10
    bl fn_804F30B4
    b lbl_fn_804EE044_00000A10
    bl fn_804F3174
    b lbl_fn_804EE044_00000A10
    bl fn_804F325C
    b lbl_fn_804EE044_00000A10
    mr r3, r27
    mr r4, r31
    bl fn_804F34B8
    b lbl_fn_804EE044_00000A10
    mr r3, r27
    mr r4, r31
    bl fn_804F36F8
    b lbl_fn_804EE044_00000A10
    mr r3, r27
    bl fn_804F36FC
    b lbl_fn_804EE044_00000A10
    bl fn_804F3884
    b lbl_fn_804EE044_00000A10
    bl fn_804F39D8
    b lbl_fn_804EE044_00000A10
    bl fn_804F3AF4
    b lbl_fn_804EE044_00000A10
    bl fn_804F3BB0
    b lbl_fn_804EE044_00000A10
    mr r3, r27
    bl fn_804F3D84
    b lbl_fn_804EE044_00000A10
    bl fn_804F3E54
    b lbl_fn_804EE044_00000A10
    bl fn_804F3EF0
    b lbl_fn_804EE044_00000A10
    bl fn_804F472C
    b lbl_fn_804EE044_00000A10
    mr r3, r27
    mr r4, r31
    bl fn_804F4800
    b lbl_fn_804EE044_00000A10
    mr r3, r31
    bl fn_804F4CBC
    b lbl_fn_804EE044_00000A10
    mr r3, r31
    bl fn_804F4E20
    b lbl_fn_804EE044_00000A10
    bl fn_804F4E44
    b lbl_fn_804EE044_00000A10
    mr r3, r31
    bl fn_804F4F44
    b lbl_fn_804EE044_00000A10
    bl fn_804F4F68
    b lbl_fn_804EE044_00000A10
    mr r3, r31
    bl fn_804F4FC8
    b lbl_fn_804EE044_00000A10
    mr r3, r31
    bl fn_804F50C8
    b lbl_fn_804EE044_00000A10
lbl_fn_804EE044_00000D24:
    bl fn_800F7F90
    addis r3, r3, 0x1
    lbz r0, -0x6650(r3)
    cmplwi r0, 0x1
    bne lbl_fn_804EE044_00000D60
    bl fn_804D1698
    bl fn_800F7F90
    addis r30, r3, 0x1
    bl fn_800F7F90
    addis r3, r3, 0x1
    lbz r31, -0x664f(r3)
    bl fn_804AE3BC
    lwz r5, -0x664c(r30)
    mr r4, r31
    bl fn_8050DDE0
lbl_fn_804EE044_00000D60:
    li r3, 0x0
lbl_fn_804EE044_00000D64:
    lmw r26, 0x18(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_804EE4E4(void)
{
    nofralloc
    blr
}

asm void fn_804EE4E8(void)
{
    nofralloc
    blr
}

asm void fn_804EE4EC(void)
{
    nofralloc
    blr
}

asm void fn_804EE4F0(void)
{
    nofralloc
    blr
}

asm void fn_804EE4F4(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    stw r31, 0x8c(r1)
    stw r30, 0x88(r1)
    mr r30, r4
    stw r29, 0x84(r1)
    lwz r5, lbl_8087F610
    lwz r0, 0x4fc(r5)
    cmpwi r0, 0x1e
    beq lbl_fn_804EE4F4_00000DBC
    li r3, 0x0
    b lbl_fn_804EE4F4_000010B0
lbl_fn_804EE4F4_00000DBC:
    lwz r31, 0x0(r3)
    cmpwi r31, 0x0
    bne lbl_fn_804EE4F4_00000DD0
    li r3, 0x0
    b lbl_fn_804EE4F4_000010B0
lbl_fn_804EE4F4_00000DD0:
    lwz r0, 0x38(r31)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_804EE4F4_00000DE8
    li r3, 0x0
    b lbl_fn_804EE4F4_000010B0
lbl_fn_804EE4F4_00000DE8:
    mr r3, r31
    bl fn_8014FAD0
    cmpwi r3, 0x0
    beq lbl_fn_804EE4F4_00000E00
    li r3, 0x0
    b lbl_fn_804EE4F4_000010B0
lbl_fn_804EE4F4_00000E00:
    lwz r0, 0x12a4(r31)
    extrwi. r0, r0, 1, 29
    bne lbl_fn_804EE4F4_00000E14
    li r3, 0x0
    b lbl_fn_804EE4F4_000010B0
lbl_fn_804EE4F4_00000E14:
    psq_l f1, 0x0(r30), 0, 0
    addi r29, r1, 0x68
    psq_st f1, 0x528(r31), 0, 0
    mr r3, r29
    lfs f2, 0x8(r30)
    stfs f2, 0x530(r31)
    psq_l f1, 0xc(r30), 0, 0
    lfs f2, 0x14(r30)
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x70(r1)
    bl fn_805F9920
    lfs f0, lbl_8088761C
    fcmpo cr0, f1, f0
    ble lbl_fn_804EE4F4_00000E6C
    lis r3, lbl_807C7030@ha
    addi r4, r31, 0x13d8
    addi r3, r3, lbl_807C7030@l
    lfs f2, 0x8(r3)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x13e0(r31)
    b lbl_fn_804EE4F4_00000E80
lbl_fn_804EE4F4_00000E6C:
    lfs f2, 0x70(r1)
    addi r3, r31, 0x13d8
    psq_l f1, 0x0(r29), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x13e0(r31)
lbl_fn_804EE4F4_00000E80:
    lfs f2, lbl_80887570
    addi r3, r1, 0x50
    lfs f0, 0x24(r30)
    stfs f0, 0x54(r1)
    lha r4, 0x18(r30)
    stfs f2, 0x50(r1)
    cmpwi r4, 0x0
    lfs f0, 0x28(r30)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x534(r31), 0, 0
    stfs f2, 0x53c(r31)
    stfs f2, 0x58(r1)
    stfs f0, 0x13e4(r31)
    bne lbl_fn_804EE4F4_00000EBC
    b lbl_fn_804EE4F4_00000ED8
lbl_fn_804EE4F4_00000EBC:
    extrwi r3, r4, 5, 17
    extlwi r0, r4, 1, 16
    addi r3, r3, 0x70
    rlwimi r0, r4, 13, 9, 18
    rlwimi r0, r3, 23, 1, 8
    stw r0, 0x14(r1)
    lfs f2, 0x14(r1)
lbl_fn_804EE4F4_00000ED8:
    lha r3, 0x1a(r30)
    cmpwi r3, 0x0
    bne lbl_fn_804EE4F4_00000EEC
    lfs f3, lbl_80887570
    b lbl_fn_804EE4F4_00000F08
lbl_fn_804EE4F4_00000EEC:
    extrwi r4, r3, 5, 17
    extlwi r0, r3, 1, 16
    rlwimi r0, r3, 13, 9, 18
    addi r3, r4, 0x70
    rlwimi r0, r3, 23, 1, 8
    stw r0, 0x18(r1)
    lfs f3, 0x18(r1)
lbl_fn_804EE4F4_00000F08:
    lha r3, 0x1c(r30)
    cmpwi r3, 0x0
    bne lbl_fn_804EE4F4_00000F1C
    lfs f0, lbl_80887570
    b lbl_fn_804EE4F4_00000F38
lbl_fn_804EE4F4_00000F1C:
    extrwi r4, r3, 5, 17
    extlwi r0, r3, 1, 16
    rlwimi r0, r3, 13, 9, 18
    addi r3, r4, 0x70
    rlwimi r0, r3, 23, 1, 8
    stw r0, 0x1c(r1)
    lfs f0, 0x1c(r1)
lbl_fn_804EE4F4_00000F38:
    stfs f2, 0x44(r1)
    addi r3, r1, 0x44
    lha r5, 0x1e(r30)
    addi r4, r31, 0x13e8
    stfs f3, 0x48(r1)
    frsp f2, f0
    cmpwi r5, 0x0
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f0, 0x4c(r1)
    stfs f2, 0x13f0(r31)
    bne lbl_fn_804EE4F4_00000F70
    lfs f4, lbl_80887570
    b lbl_fn_804EE4F4_00000F8C
lbl_fn_804EE4F4_00000F70:
    extrwi r3, r5, 5, 17
    extlwi r0, r5, 1, 16
    addi r3, r3, 0x70
    rlwimi r0, r5, 13, 9, 18
    rlwimi r0, r3, 23, 1, 8
    stw r0, 0x8(r1)
    lfs f4, 0x8(r1)
lbl_fn_804EE4F4_00000F8C:
    lha r3, 0x20(r30)
    cmpwi r3, 0x0
    bne lbl_fn_804EE4F4_00000FA0
    lfs f3, lbl_80887570
    b lbl_fn_804EE4F4_00000FBC
lbl_fn_804EE4F4_00000FA0:
    extrwi r4, r3, 5, 17
    extlwi r0, r3, 1, 16
    rlwimi r0, r3, 13, 9, 18
    addi r3, r4, 0x70
    rlwimi r0, r3, 23, 1, 8
    stw r0, 0xc(r1)
    lfs f3, 0xc(r1)
lbl_fn_804EE4F4_00000FBC:
    lha r3, 0x22(r30)
    cmpwi r3, 0x0
    bne lbl_fn_804EE4F4_00000FD0
    lfs f0, lbl_80887570
    b lbl_fn_804EE4F4_00000FEC
lbl_fn_804EE4F4_00000FD0:
    extrwi r4, r3, 5, 17
    extlwi r0, r3, 1, 16
    rlwimi r0, r3, 13, 9, 18
    addi r3, r4, 0x70
    rlwimi r0, r3, 23, 1, 8
    stw r0, 0x10(r1)
    lfs f0, 0x10(r1)
lbl_fn_804EE4F4_00000FEC:
    stfs f4, 0x5c(r1)
    addi r4, r31, 0xfa4
    addi r3, r1, 0x5c
    stfs f3, 0x60(r1)
    stfs f0, 0x64(r1)
    bl fn_805F9990
    lfs f0, lbl_80887620
    fcmpo cr0, f1, f0
    ble lbl_fn_804EE4F4_00001088
    lfs f3, 0x60(r1)
    addi r4, r1, 0x38
    lfs f5, 0xfa8(r31)
    addi r3, r1, 0x5c
    lfs f0, 0x64(r1)
    fsubs f7, f3, f5
    lfs f6, 0xfac(r31)
    lfs f4, 0x5c(r1)
    fsubs f9, f0, f6
    lfs f3, 0xfa4(r31)
    lfs f0, lbl_80887624
    fsubs f4, f4, f3
    stfs f7, 0x30(r1)
    fmuls f8, f9, f0
    fmuls f7, f7, f0
    stfs f4, 0x2c(r1)
    fmuls f0, f4, f0
    fadds f2, f8, f6
    stfs f9, 0x34(r1)
    fadds f4, f7, f5
    stfs f0, 0x20(r1)
    fadds f0, f0, f3
    stfs f4, 0x3c(r1)
    stfs f0, 0x38(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f7, 0x24(r1)
    stfs f8, 0x28(r1)
    stfs f2, 0x40(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x64(r1)
lbl_fn_804EE4F4_00001088:
    addi r3, r1, 0x5c
    lfs f2, 0x64(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r4, r31, 0xfa4
    psq_st f1, 0x0(r4), 0, 0
    li r3, 0x1
    stfs f2, 0xfac(r31)
    lwz r0, 0x12a4(r31)
    ori r0, r0, 0x2
    stw r0, 0x12a4(r31)
lbl_fn_804EE4F4_000010B0:
    lwz r0, 0x94(r1)
    lwz r31, 0x8c(r1)
    lwz r30, 0x88(r1)
    lwz r29, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_804EE838(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_804AE3BC
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804EE838_00001114
    bl fn_800827E0
    li r4, 0x1000
    li r5, 0x4
    li r6, 0x5
    la r7, lbl_8087E1B0
    la r8, lbl_8087E1AC
    li r9, 0x0
    bl fn_800838B8
    stw r3, lbl_8087F600
lbl_fn_804EE838_00001114:
    lwz r4, lbl_8087F600
    mr r3, r31
    bl fn_804EE4F4
    cmplwi r3, 0x1
    bne lbl_fn_804EE838_00001188
    bl fn_804AE3BC
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804EE838_0000115C
    bl fn_800827E0
    li r4, 0x1000
    li r5, 0x4
    li r6, 0x5
    la r7, lbl_8087E1B0
    la r8, lbl_8087E1AC
    li r9, 0x0
    bl fn_800838B8
    stw r3, lbl_8087F600
lbl_fn_804EE838_0000115C:
    lwz r4, 0x0(r31)
    lwz r3, lbl_8087F600
    cmpwi r4, 0x0
    beq lbl_fn_804EE838_00001188
    addi r3, r3, 0x2c
    addi r4, r4, 0xb0
    li r5, 0x0
    bl fn_804CF198
    lwz r3, 0x0(r31)
    li r0, 0x1
    stw r0, 0x3fc(r3)
lbl_fn_804EE838_00001188:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804EE908(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r4, lbl_8087F610
    lwz r0, 0x4fc(r4)
    cmpwi r0, 0x1e
    bne lbl_fn_804EE908_00001270
    bl fn_804AE3BC
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804EE908_000011F8
    bl fn_800827E0
    li r4, 0x1000
    li r5, 0x4
    li r6, 0x5
    la r7, lbl_8087E1B0
    la r8, lbl_8087E1AC
    li r9, 0x0
    bl fn_800838B8
    stw r3, lbl_8087F600
lbl_fn_804EE908_000011F8:
    lwz r4, lbl_8087F628
    lwz r31, lbl_8087F600
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804EE908_00001230
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804EE908_00001224
    li r0, 0x0
    b lbl_fn_804EE908_0000124C
lbl_fn_804EE908_00001224:
    bl fn_806B0E30
    clrlwi r0, r3, 24
    b lbl_fn_804EE908_0000124C
lbl_fn_804EE908_00001230:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804EE908_00001244
    li r3, 0x0
    b lbl_fn_804EE908_00001248
lbl_fn_804EE908_00001244:
    bl fn_806A8E40
lbl_fn_804EE908_00001248:
    clrlwi r0, r3, 24
lbl_fn_804EE908_0000124C:
    lbz r3, 0x14(r31)
    clrlwi r0, r0, 24
    cmplw r3, r0
    beq lbl_fn_804EE908_00001270
    lwz r4, 0x0(r30)
    cmpwi r4, 0x0
    beq lbl_fn_804EE908_00001270
    mr r3, r31
    bl fn_804CF640
lbl_fn_804EE908_00001270:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804EE9F4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    lwz r4, lbl_8087F610
    lwz r0, 0x4fc(r4)
    cmpwi r0, 0x1e
    bne lbl_fn_804EE9F4_000013B4
    bl fn_804AE3BC
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804EE9F4_000012E4
    bl fn_800827E0
    li r4, 0x1000
    li r5, 0x4
    li r6, 0x5
    la r7, lbl_8087E1B0
    la r8, lbl_8087E1AC
    li r9, 0x0
    bl fn_800838B8
    stw r3, lbl_8087F600
lbl_fn_804EE9F4_000012E4:
    lwz r4, lbl_8087F628
    lwz r31, lbl_8087F600
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804EE9F4_0000131C
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804EE9F4_00001310
    li r0, 0x0
    b lbl_fn_804EE9F4_00001338
lbl_fn_804EE9F4_00001310:
    bl fn_806B0E30
    clrlwi r0, r3, 24
    b lbl_fn_804EE9F4_00001338
lbl_fn_804EE9F4_0000131C:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804EE9F4_00001330
    li r3, 0x0
    b lbl_fn_804EE9F4_00001334
lbl_fn_804EE9F4_00001330:
    bl fn_806A8E40
lbl_fn_804EE9F4_00001334:
    clrlwi r0, r3, 24
lbl_fn_804EE9F4_00001338:
    lbz r3, 0x9(r31)
    clrlwi r0, r0, 24
    cmplw r3, r0
    beq lbl_fn_804EE9F4_000013B4
    lwz r5, 0x0(r30)
    cmpwi r5, 0x0
    beq lbl_fn_804EE9F4_0000137C
    lwz r4, 0x0(r31)
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lis r3, lbl_80759748@ha
    xoris r0, r4, 0x8000
    lfd f1, lbl_80759748@l(r3)
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f1
    stfs f0, 0x7d8(r5)
lbl_fn_804EE9F4_0000137C:
    lha r4, 0x4(r31)
    addi r3, r30, 0xdc
    bl fn_8050128C
    lbz r0, 0x6(r31)
    stw r0, 0xe0(r30)
    lwz r3, 0xd0(r30)
    lbz r0, 0x7(r31)
    stw r0, 0xe4(r30)
    lbz r0, 0x8(r31)
    rlwimi r3, r0, 7, 18, 18
    stw r3, 0xd0(r30)
    lbz r0, 0x8(r31)
    rlwimi r3, r0, 7, 19, 19
    stw r3, 0xd0(r30)
lbl_fn_804EE9F4_000013B4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804EEB38(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_27
    lwz r3, lbl_8087F610
    lwz r0, 0x4fc(r3)
    cmpwi r0, 0x1e
    bne lbl_fn_804EEB38_000015FC
    bl fn_804AE3BC
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804EEB38_00001424
    bl fn_800827E0
    li r4, 0x1000
    li r5, 0x4
    li r6, 0x5
    la r7, lbl_8087E1B0
    la r8, lbl_8087E1AC
    li r9, 0x0
    bl fn_800838B8
    stw r3, lbl_8087F600
lbl_fn_804EEB38_00001424:
    lwz r31, lbl_8087F600
    lwz r7, lbl_8087F610
    lbz r0, 0x24(r31)
    cmpwi r0, 0x1
    beq lbl_fn_804EEB38_0000144C
    cmpwi r0, 0x2
    beq lbl_fn_804EEB38_00001454
    cmpwi r0, 0x3
    beq lbl_fn_804EEB38_000014A8
    b lbl_fn_804EEB38_000014D0
lbl_fn_804EEB38_0000144C:
    li r28, 0x0
    b lbl_fn_804EEB38_000014D4
lbl_fn_804EEB38_00001454:
    lwz r0, 0x5e8(r7)
    li r3, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_804EEB38_000014A0
lbl_fn_804EEB38_00001468:
    lwz r5, 0x5e4(r7)
    add r6, r5, r3
    lwz r0, 0xd0(r6)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804EEB38_00001498
    lbz r4, 0x25(r31)
    lbz r0, 0xcc(r6)
    cmplw r4, r0
    bne lbl_fn_804EEB38_00001498
    lwzx r28, r5, r3
    b lbl_fn_804EEB38_000014D4
lbl_fn_804EEB38_00001498:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804EEB38_00001468
lbl_fn_804EEB38_000014A0:
    li r28, 0x0
    b lbl_fn_804EEB38_000014D4
lbl_fn_804EEB38_000014A8:
    lbz r3, 0x25(r31)
    lwz r0, 0x5f4(r7)
    cmplw r0, r3
    ble lbl_fn_804EEB38_000014C8
    mulli r0, r3, 0xb4
    lwz r3, 0x5f0(r7)
    lwzx r28, r3, r0
    b lbl_fn_804EEB38_000014D4
lbl_fn_804EEB38_000014C8:
    li r28, 0x0
    b lbl_fn_804EEB38_000014D4
lbl_fn_804EEB38_000014D0:
    li r28, 0x0
lbl_fn_804EEB38_000014D4:
    cmpwi r28, 0x0
    beq lbl_fn_804EEB38_000015FC
    lwz r3, 0x0(r31)
    bl fn_80219E6C
    cmpwi r3, 0x0
    mr r29, r3
    beq lbl_fn_804EEB38_000015FC
    lfs f2, lbl_80887574
    li r30, 0x0
    lfs f1, lbl_80887570
    lfs f0, lbl_80887590
    stfs f2, 0x8(r1)
    stw r30, 0xc(r1)
    stw r30, 0x10(r1)
    stw r30, 0x18(r1)
    stfs f1, 0x1c(r1)
    stfs f0, 0x20(r1)
    lwz r3, 0xb0(r3)
    bl fn_800EFD04
    stw r3, 0xc(r1)
    lwz r3, lbl_8087F048
    stw r29, 0x14(r1)
    bl fn_801010A0
    cmpwi r3, 0x0
    mr r27, r3
    beq lbl_fn_804EEB38_000015FC
    lbz r0, lbl_8087EE74
    extsb. r0, r0
    bne lbl_fn_804EEB38_00001578
    lis r3, lbl_807C6BB8@ha
    stwu r30, lbl_807C6BB8@l(r3)
    lis r4, fn_8003EFB0@ha
    li r29, 0x1
    lis r5, lbl_807C8F48@ha
    stw r30, 0x4(r3)
    addi r4, r4, fn_8003EFB0@l
    stw r30, 0x8(r3)
    addi r5, r5, lbl_807C8F48@l
    stw r29, 0xc(r3)
    bl __register_global_object
    stb r29, lbl_8087EE74
lbl_fn_804EEB38_00001578:
    lis r30, lbl_807C6BB8@ha
    li r29, 0x0
    addi r30, r30, lbl_807C6BB8@l
    lfs f1, lbl_808875CC
    stw r29, 0xc(r30)
    mr r3, r27
    mr r7, r28
    addi r4, r1, 0x8
    lwz r0, 0x20(r31)
    addi r5, r31, 0x4
    addi r6, r31, 0x10
    li r8, -0x1
    ori r9, r0, 0x80
    bl fn_8010EE78
    lbz r0, lbl_8087EE74
    extsb. r0, r0
    bne lbl_fn_804EEB38_000015EC
    li r31, 0x1
    lis r4, fn_8003EFB0@ha
    lis r5, lbl_807C8F48@ha
    stw r29, 0x0(r30)
    mr r3, r30
    addi r4, r4, fn_8003EFB0@l
    stw r29, 0x4(r30)
    addi r5, r5, lbl_807C8F48@l
    stw r29, 0x8(r30)
    stw r31, 0xc(r30)
    bl __register_global_object
    stb r31, lbl_8087EE74
lbl_fn_804EEB38_000015EC:
    lis r3, lbl_807C6BB8@ha
    li r0, 0x1
    addi r3, r3, lbl_807C6BB8@l
    stw r0, 0xc(r3)
lbl_fn_804EEB38_000015FC:
    addi r11, r1, 0x40
    bl _restgpr_27
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_804EED80(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    stw r30, 0x58(r1)
    stw r29, 0x54(r1)
    stw r28, 0x50(r1)
    lwz r3, lbl_8087F610
    lwz r0, 0x4fc(r3)
    cmpwi r0, 0x1e
    bne lbl_fn_804EED80_00001968
    bl fn_804AE3BC
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804EED80_00001674
    bl fn_800827E0
    li r4, 0x1000
    li r5, 0x4
    li r6, 0x5
    la r7, lbl_8087E1B0
    la r8, lbl_8087E1AC
    li r9, 0x0
    bl fn_800838B8
    stw r3, lbl_8087F600
lbl_fn_804EED80_00001674:
    lwz r30, lbl_8087F600
    lwz r7, lbl_8087F610
    lbz r0, 0x24(r30)
    cmpwi r0, 0x1
    beq lbl_fn_804EED80_0000169C
    cmpwi r0, 0x2
    beq lbl_fn_804EED80_000016A4
    cmpwi r0, 0x3
    beq lbl_fn_804EED80_000016F8
    b lbl_fn_804EED80_00001720
lbl_fn_804EED80_0000169C:
    li r31, 0x0
    b lbl_fn_804EED80_00001724
lbl_fn_804EED80_000016A4:
    lwz r0, 0x5e8(r7)
    li r3, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_804EED80_000016F0
lbl_fn_804EED80_000016B8:
    lwz r5, 0x5e4(r7)
    add r6, r5, r3
    lwz r0, 0xd0(r6)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804EED80_000016E8
    lbz r4, 0x25(r30)
    lbz r0, 0xcc(r6)
    cmplw r4, r0
    bne lbl_fn_804EED80_000016E8
    lwzx r31, r5, r3
    b lbl_fn_804EED80_00001724
lbl_fn_804EED80_000016E8:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804EED80_000016B8
lbl_fn_804EED80_000016F0:
    li r31, 0x0
    b lbl_fn_804EED80_00001724
lbl_fn_804EED80_000016F8:
    lbz r3, 0x25(r30)
    lwz r0, 0x5f4(r7)
    cmplw r0, r3
    ble lbl_fn_804EED80_00001718
    mulli r0, r3, 0xb4
    lwz r3, 0x5f0(r7)
    lwzx r31, r3, r0
    b lbl_fn_804EED80_00001724
lbl_fn_804EED80_00001718:
    li r31, 0x0
    b lbl_fn_804EED80_00001724
lbl_fn_804EED80_00001720:
    li r31, 0x0
lbl_fn_804EED80_00001724:
    lbz r0, lbl_8087EE74
    extsb. r0, r0
    bne lbl_fn_804EED80_00001764
    lis r3, lbl_807C6BB8@ha
    li r0, 0x0
    stwu r0, lbl_807C6BB8@l(r3)
    lis r4, fn_8003EFB0@ha
    li r28, 0x1
    lis r5, lbl_807C8F48@ha
    stw r0, 0x4(r3)
    addi r4, r4, fn_8003EFB0@l
    addi r5, r5, lbl_807C8F48@l
    stw r0, 0x8(r3)
    stw r28, 0xc(r3)
    bl __register_global_object
    stb r28, lbl_8087EE74
lbl_fn_804EED80_00001764:
    lis r3, lbl_807C6BB8@ha
    li r28, 0x0
    addi r3, r3, lbl_807C6BB8@l
    stw r28, 0xc(r3)
    lwz r3, 0x0(r30)
    bl fn_80219E6C
    cmpwi r3, 0x0
    mr r29, r3
    beq lbl_fn_804EED80_00001968
    lfs f2, lbl_80887574
    lfs f1, lbl_80887570
    lfs f0, lbl_80887590
    stfs f2, 0x8(r1)
    stw r28, 0xc(r1)
    stw r28, 0x10(r1)
    stw r28, 0x18(r1)
    stfs f1, 0x1c(r1)
    stfs f0, 0x20(r1)
    lwz r3, 0xb0(r3)
    bl fn_800EFD04
    lfs f5, lbl_80887570
    li r0, -0x1
    lfs f4, lbl_808875CC
    lfs f3, lbl_808875C4
    lfs f2, lbl_80887628
    lfs f1, lbl_8088762C
    lfs f0, lbl_80887610
    stw r3, 0xc(r1)
    lwz r7, lbl_8087F610
    stw r29, 0x14(r1)
    stw r28, 0x24(r1)
    stfs f5, 0x28(r1)
    stfs f4, 0x2c(r1)
    stfs f3, 0x30(r1)
    stfs f2, 0x34(r1)
    stfs f1, 0x38(r1)
    stfs f0, 0x3c(r1)
    stw r28, 0x40(r1)
    stw r0, 0x44(r1)
    lbz r0, 0x26(r30)
    cmpwi r0, 0x1
    beq lbl_fn_804EED80_00001820
    cmpwi r0, 0x2
    beq lbl_fn_804EED80_00001828
    cmpwi r0, 0x3
    beq lbl_fn_804EED80_0000187C
    b lbl_fn_804EED80_000018A4
lbl_fn_804EED80_00001820:
    li r0, 0x0
    b lbl_fn_804EED80_000018A8
lbl_fn_804EED80_00001828:
    lwz r0, 0x5e8(r7)
    li r3, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_804EED80_00001874
lbl_fn_804EED80_0000183C:
    lwz r5, 0x5e4(r7)
    add r6, r5, r3
    lwz r0, 0xd0(r6)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804EED80_0000186C
    lbz r4, 0x27(r30)
    lbz r0, 0xcc(r6)
    cmplw r4, r0
    bne lbl_fn_804EED80_0000186C
    lwzx r0, r5, r3
    b lbl_fn_804EED80_000018A8
lbl_fn_804EED80_0000186C:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804EED80_0000183C
lbl_fn_804EED80_00001874:
    li r0, 0x0
    b lbl_fn_804EED80_000018A8
lbl_fn_804EED80_0000187C:
    lbz r3, 0x27(r30)
    lwz r0, 0x5f4(r7)
    cmplw r0, r3
    ble lbl_fn_804EED80_0000189C
    mulli r0, r3, 0xb4
    lwz r3, 0x5f0(r7)
    lwzx r0, r3, r0
    b lbl_fn_804EED80_000018A8
lbl_fn_804EED80_0000189C:
    li r0, 0x0
    b lbl_fn_804EED80_000018A8
lbl_fn_804EED80_000018A4:
    li r0, 0x0
lbl_fn_804EED80_000018A8:
    stw r0, 0x24(r1)
    lwz r3, lbl_8087F048
    lfs f0, 0x28(r30)
    stfs f0, 0x28(r1)
    lfs f0, 0x2c(r30)
    stfs f0, 0x2c(r1)
    lfs f0, 0x30(r30)
    stfs f0, 0x30(r1)
    lfs f0, 0x34(r30)
    stfs f0, 0x34(r1)
    lfs f0, 0x38(r30)
    stfs f0, 0x38(r1)
    lwz r0, 0x40(r30)
    stw r0, 0x40(r1)
    bl fn_801010E8
    cmpwi r3, 0x0
    beq lbl_fn_804EED80_00001968
    lwz r12, 0x0(r3)
    mr r7, r31
    lwz r0, 0x20(r30)
    addi r4, r1, 0x8
    lwz r12, 0x28(r12)
    addi r5, r30, 0x4
    addi r6, r30, 0x10
    addi r8, r1, 0x24
    ori r9, r0, 0x80
    mtctr r12
    bctrl
    lbz r0, lbl_8087EE74
    extsb. r0, r0
    bne lbl_fn_804EED80_00001958
    lis r3, lbl_807C6BB8@ha
    li r0, 0x0
    stwu r0, lbl_807C6BB8@l(r3)
    lis r4, fn_8003EFB0@ha
    li r30, 0x1
    lis r5, lbl_807C8F48@ha
    stw r0, 0x4(r3)
    addi r4, r4, fn_8003EFB0@l
    addi r5, r5, lbl_807C8F48@l
    stw r0, 0x8(r3)
    stw r30, 0xc(r3)
    bl __register_global_object
    stb r30, lbl_8087EE74
lbl_fn_804EED80_00001958:
    lis r3, lbl_807C6BB8@ha
    li r0, 0x1
    addi r3, r3, lbl_807C6BB8@l
    stw r0, 0xc(r3)
lbl_fn_804EED80_00001968:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    lwz r28, 0x50(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_804EF0F4(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r11, r1, 0x70
    bl _savegpr_25
    lwz r4, lbl_8087F610
    mr r26, r3
    lwz r0, 0x4fc(r4)
    cmpwi r0, 0x1e
    bne lbl_fn_804EF0F4_00002234
    bl fn_804AE3BC
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804EF0F4_000019E4
    bl fn_800827E0
    li r4, 0x1000
    li r5, 0x4
    li r6, 0x5
    la r7, lbl_8087E1B0
    la r8, lbl_8087E1AC
    li r9, 0x0
    bl fn_800838B8
    stw r3, lbl_8087F600
lbl_fn_804EF0F4_000019E4:
    lwz r3, lbl_8087F4A0
    lwz r30, lbl_8087F600
    lwz r29, 0x48(r3)
    b lbl_fn_804EF0F4_0000222C
lbl_fn_804EF0F4_000019F4:
    lwz r3, 0x0(r30)
    lwz r0, 0x48(r29)
    cmplw r3, r0
    bne lbl_fn_804EF0F4_00002228
    lhz r3, 0xc(r30)
    lwz r0, 0x4c(r29)
    cmpw r3, r0
    bne lbl_fn_804EF0F4_00002228
    lwz r0, 0x38(r29)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r29)
    lbz r0, lbl_8087EE74
    extsb. r0, r0
    bne lbl_fn_804EF0F4_00001A60
    lis r3, lbl_807C6BB8@ha
    li r0, 0x0
    stwu r0, lbl_807C6BB8@l(r3)
    lis r4, fn_8003EFB0@ha
    li r25, 0x1
    lis r5, lbl_807C8F48@ha
    stw r0, 0x4(r3)
    addi r4, r4, fn_8003EFB0@l
    addi r5, r5, lbl_807C8F48@l
    stw r0, 0x8(r3)
    stw r25, 0xc(r3)
    bl __register_global_object
    stb r25, lbl_8087EE74
lbl_fn_804EF0F4_00001A60:
    lis r3, lbl_807C6BB8@ha
    li r5, 0x0
    addi r3, r3, lbl_807C6BB8@l
    lfs f0, lbl_80887570
    stw r5, 0xc(r3)
    li r0, 0x1
    addi r4, r1, 0x3c
    lwz r7, lbl_8087F610
    lhz r3, 0xe(r30)
    stw r3, 0x28(r1)
    stw r5, 0x2c(r1)
    stw r5, 0x30(r1)
    stw r5, 0x34(r1)
    stw r5, 0x38(r1)
    stfs f0, 0x3c(r1)
    stfs f0, 0x40(r1)
    stfs f0, 0x44(r1)
    lwz r3, 0x4(r30)
    stw r3, 0x2c(r1)
    lwz r3, 0x8(r30)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    psq_l f1, 0x10(r30), 0, 0
    lfs f2, 0x18(r30)
    stfs f2, 0x44(r1)
    psq_st f1, 0x0(r4), 0, 0
    lbz r0, 0x1c(r30)
    cmpwi r0, 0x1
    beq lbl_fn_804EF0F4_00001AE8
    cmpwi r0, 0x2
    beq lbl_fn_804EF0F4_00001AF0
    cmpwi r0, 0x3
    beq lbl_fn_804EF0F4_00001B40
    b lbl_fn_804EF0F4_00001B68
lbl_fn_804EF0F4_00001AE8:
    li r0, 0x0
    b lbl_fn_804EF0F4_00001B6C
lbl_fn_804EF0F4_00001AF0:
    lwz r0, 0x5e8(r7)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_804EF0F4_00001B38
lbl_fn_804EF0F4_00001B00:
    lwz r4, 0x5e4(r7)
    add r6, r4, r5
    lwz r0, 0xd0(r6)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804EF0F4_00001B30
    lbz r3, 0x1d(r30)
    lbz r0, 0xcc(r6)
    cmplw r3, r0
    bne lbl_fn_804EF0F4_00001B30
    lwzx r0, r4, r5
    b lbl_fn_804EF0F4_00001B6C
lbl_fn_804EF0F4_00001B30:
    addi r5, r5, 0xd5c
    bdnz lbl_fn_804EF0F4_00001B00
lbl_fn_804EF0F4_00001B38:
    li r0, 0x0
    b lbl_fn_804EF0F4_00001B6C
lbl_fn_804EF0F4_00001B40:
    lbz r3, 0x1d(r30)
    lwz r0, 0x5f4(r7)
    cmplw r0, r3
    ble lbl_fn_804EF0F4_00001B60
    mulli r0, r3, 0xb4
    lwz r3, 0x5f0(r7)
    lwzx r0, r3, r0
    b lbl_fn_804EF0F4_00001B6C
lbl_fn_804EF0F4_00001B60:
    li r0, 0x0
    b lbl_fn_804EF0F4_00001B6C
lbl_fn_804EF0F4_00001B68:
    li r0, 0x0
lbl_fn_804EF0F4_00001B6C:
    stw r0, 0x38(r1)
    li r28, 0x0
    lwz r0, 0x50(r29)
    cmpwi r0, 0x7
    bne lbl_fn_804EF0F4_00001EF4
    lwz r0, 0x30(r1)
    li r27, 0x1
    cmpwi r0, 0x0
    bgt lbl_fn_804EF0F4_00001E30
    lis r5, lbl_8078CF20@ha
    lis r6, lbl_8078CA58@ha
    mr r3, r29
    li r4, 0x0
    addi r5, r5, lbl_8078CF20@l
    addi r6, r6, lbl_8078CA58@l
    li r7, 0x0
    bl fn_80695B28
    lhz r0, 0xe(r30)
    mr r31, r3
    cmplwi r0, 0x2
    bne lbl_fn_804EF0F4_00001C2C
    lwz r6, lbl_8087F628
    li r28, 0x1
    lwz r5, 0x30(r1)
    addis r3, r6, 0x1
    lbz r0, -0x3deb(r3)
    subfic r4, r5, -0x1
    addi r3, r5, 0x1
    cmpwi r0, 0x0
    or r0, r4, r3
    srwi r27, r0, 31
    bne lbl_fn_804EF0F4_00001C0C
    lwz r0, 0x1f8(r6)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804EF0F4_00001C00
    li r0, 0x0
    b lbl_fn_804EF0F4_00001C10
lbl_fn_804EF0F4_00001C00:
    bl fn_806B1250
    clrlwi r0, r3, 24
    b lbl_fn_804EF0F4_00001C10
lbl_fn_804EF0F4_00001C0C:
    li r0, 0x0
lbl_fn_804EF0F4_00001C10:
    clrlwi r0, r0, 24
    cmplw r26, r0
    bne lbl_fn_804EF0F4_00001E30
    cmpwi r31, 0x0
    beq lbl_fn_804EF0F4_00001E30
    stb r26, 0x520(r31)
    b lbl_fn_804EF0F4_00001E30
lbl_fn_804EF0F4_00001C2C:
    cmplwi r0, 0x3
    bne lbl_fn_804EF0F4_00001E04
    lwz r0, 0x30(r1)
    cmpwi r0, -0x1
    bne lbl_fn_804EF0F4_00001DDC
    lwz r4, lbl_8087F628
    li r27, 0x0
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804EF0F4_00001C78
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804EF0F4_00001C6C
    li r25, 0x0
    b lbl_fn_804EF0F4_00001C94
lbl_fn_804EF0F4_00001C6C:
    bl fn_806B0E30
    clrlwi r25, r3, 24
    b lbl_fn_804EF0F4_00001C94
lbl_fn_804EF0F4_00001C78:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804EF0F4_00001C8C
    li r3, 0x0
    b lbl_fn_804EF0F4_00001C90
lbl_fn_804EF0F4_00001C8C:
    bl fn_806A8E40
lbl_fn_804EF0F4_00001C90:
    clrlwi r25, r3, 24
lbl_fn_804EF0F4_00001C94:
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804EF0F4_00001CC8
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804EF0F4_00001CBC
    li r0, 0x0
    b lbl_fn_804EF0F4_00001CCC
lbl_fn_804EF0F4_00001CBC:
    bl fn_806B1250
    clrlwi r0, r3, 24
    b lbl_fn_804EF0F4_00001CCC
lbl_fn_804EF0F4_00001CC8:
    li r0, 0x0
lbl_fn_804EF0F4_00001CCC:
    clrlwi r3, r25, 24
    clrlwi r0, r0, 24
    cmplw r3, r0
    bne lbl_fn_804EF0F4_00001E30
    lwz r3, 0x38(r1)
    cmpwi r3, 0x0
    beq lbl_fn_804EF0F4_00001CFC
    lwz r0, 0x1208(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804EF0F4_00001CFC
    li r0, 0x0
    stw r0, 0x1208(r3)
lbl_fn_804EF0F4_00001CFC:
    cmpwi r31, 0x0
    beq lbl_fn_804EF0F4_00001E30
    lbz r0, 0x520(r31)
    cmplw r26, r0
    bne lbl_fn_804EF0F4_00001E30
    li r0, 0xff
    stb r0, 0x520(r31)
    li r6, 0x0
    lbz r0, lbl_8087EE74
    stw r6, 0x30(r1)
    extsb. r0, r0
    bne lbl_fn_804EF0F4_00001D5C
    lis r3, lbl_807C6BB8@ha
    stwu r6, lbl_807C6BB8@l(r3)
    lis r4, fn_8003EFB0@ha
    li r25, 0x1
    lis r5, lbl_807C8F48@ha
    stw r6, 0x4(r3)
    addi r4, r4, fn_8003EFB0@l
    stw r6, 0x8(r3)
    addi r5, r5, lbl_807C8F48@l
    stw r25, 0xc(r3)
    bl __register_global_object
    stb r25, lbl_8087EE74
lbl_fn_804EF0F4_00001D5C:
    lis r31, lbl_807C6BB8@ha
    li r25, 0x1
    addi r31, r31, lbl_807C6BB8@l
    mr r3, r29
    stw r25, 0xc(r31)
    addi r4, r1, 0x28
    lwz r12, 0x0(r29)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lbz r0, lbl_8087EE74
    extsb. r0, r0
    bne lbl_fn_804EF0F4_00001DC0
    li r0, 0x0
    lis r4, fn_8003EFB0@ha
    lis r5, lbl_807C8F48@ha
    stw r0, 0x0(r31)
    mr r3, r31
    addi r4, r4, fn_8003EFB0@l
    stw r0, 0x4(r31)
    addi r5, r5, lbl_807C8F48@l
    stw r0, 0x8(r31)
    stw r25, 0xc(r31)
    bl __register_global_object
    stb r25, lbl_8087EE74
lbl_fn_804EF0F4_00001DC0:
    lis r3, lbl_807C6BB8@ha
    li r0, -0x1
    addi r3, r3, lbl_807C6BB8@l
    li r4, 0x0
    stw r4, 0xc(r3)
    stw r0, 0x30(r1)
    b lbl_fn_804EF0F4_00001E30
lbl_fn_804EF0F4_00001DDC:
    lwz r4, 0x38(r1)
    cmpwi r4, 0x0
    beq lbl_fn_804EF0F4_00001DF0
    li r0, 0x0
    stw r0, 0x1208(r4)
lbl_fn_804EF0F4_00001DF0:
    cmpwi r3, 0x0
    beq lbl_fn_804EF0F4_00001E30
    li r0, 0xff
    stb r0, 0x520(r3)
    b lbl_fn_804EF0F4_00001E30
lbl_fn_804EF0F4_00001E04:
    cmplwi r0, 0x5
    bne lbl_fn_804EF0F4_00001E30
    lwz r4, 0x38(r1)
    cmpwi r4, 0x0
    beq lbl_fn_804EF0F4_00001E20
    li r0, 0x0
    stw r0, 0x1208(r4)
lbl_fn_804EF0F4_00001E20:
    cmpwi r3, 0x0
    beq lbl_fn_804EF0F4_00001E30
    li r0, 0xff
    stb r0, 0x520(r3)
lbl_fn_804EF0F4_00001E30:
    cmpwi r28, 0x0
    beq lbl_fn_804EF0F4_00001ED0
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804EF0F4_00001E6C
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804EF0F4_00001E60
    li r25, 0x0
    b lbl_fn_804EF0F4_00001E88
lbl_fn_804EF0F4_00001E60:
    bl fn_806B0E30
    clrlwi r25, r3, 24
    b lbl_fn_804EF0F4_00001E88
lbl_fn_804EF0F4_00001E6C:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804EF0F4_00001E80
    li r3, 0x0
    b lbl_fn_804EF0F4_00001E84
lbl_fn_804EF0F4_00001E80:
    bl fn_806A8E40
lbl_fn_804EF0F4_00001E84:
    clrlwi r25, r3, 24
lbl_fn_804EF0F4_00001E88:
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804EF0F4_00001EBC
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804EF0F4_00001EB0
    li r0, 0x0
    b lbl_fn_804EF0F4_00001EC0
lbl_fn_804EF0F4_00001EB0:
    bl fn_806B1250
    clrlwi r0, r3, 24
    b lbl_fn_804EF0F4_00001EC0
lbl_fn_804EF0F4_00001EBC:
    li r0, 0x0
lbl_fn_804EF0F4_00001EC0:
    clrlwi r3, r25, 24
    clrlwi r0, r0, 24
    cmplw r3, r0
    beq lbl_fn_804EF0F4_00001F0C
lbl_fn_804EF0F4_00001ED0:
    cmpwi r27, 0x0
    beq lbl_fn_804EF0F4_00001F0C
    lwz r12, 0x0(r29)
    mr r3, r29
    addi r4, r1, 0x28
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    b lbl_fn_804EF0F4_00001F0C
lbl_fn_804EF0F4_00001EF4:
    lwz r12, 0x0(r29)
    mr r3, r29
    addi r4, r1, 0x28
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
lbl_fn_804EF0F4_00001F0C:
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804EF0F4_00001F40
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804EF0F4_00001F34
    li r25, 0x0
    b lbl_fn_804EF0F4_00001F5C
lbl_fn_804EF0F4_00001F34:
    bl fn_806B0E30
    clrlwi r25, r3, 24
    b lbl_fn_804EF0F4_00001F5C
lbl_fn_804EF0F4_00001F40:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804EF0F4_00001F54
    li r3, 0x0
    b lbl_fn_804EF0F4_00001F58
lbl_fn_804EF0F4_00001F54:
    bl fn_806A8E40
lbl_fn_804EF0F4_00001F58:
    clrlwi r25, r3, 24
lbl_fn_804EF0F4_00001F5C:
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804EF0F4_00001F90
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804EF0F4_00001F84
    li r0, 0x0
    b lbl_fn_804EF0F4_00001F94
lbl_fn_804EF0F4_00001F84:
    bl fn_806B1250
    clrlwi r0, r3, 24
    b lbl_fn_804EF0F4_00001F94
lbl_fn_804EF0F4_00001F90:
    li r0, 0x0
lbl_fn_804EF0F4_00001F94:
    clrlwi r3, r25, 24
    clrlwi r0, r0, 24
    subf r0, r3, r0
    cntlzw r0, r0
    srwi r0, r0, 5
    cmpwi r0, 0x1
    bne lbl_fn_804EF0F4_000021D4
    cmplwi r28, 0x1
    bne lbl_fn_804EF0F4_000020C8
    lis r5, lbl_8078CF20@ha
    lis r6, lbl_8078CA58@ha
    mr r3, r29
    li r4, 0x0
    addi r5, r5, lbl_8078CF20@l
    addi r6, r6, lbl_8078CA58@l
    li r7, 0x0
    bl fn_80695B28
    cmpwi r3, 0x0
    mr r27, r3
    beq lbl_fn_804EF0F4_000021D4
    lbz r0, lbl_8087F5F8
    li r4, 0x2
    li r3, 0x1035
    sth r4, 0x18(r1)
    extsb. r0, r0
    sth r3, 0x1a(r1)
    bne lbl_fn_804EF0F4_00002020
    lis r4, fn_804D818C@ha
    lis r5, lbl_807C8AE8@ha
    addi r4, r4, fn_804D818C@l
    la r3, lbl_8087F5FC
    addi r5, r5, lbl_807C8AE8@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8087F5F8
lbl_fn_804EF0F4_00002020:
    li r3, 0x0
    li r0, 0xb
    stw r3, lbl_8087F5FC
    addi r25, r1, 0x1c
    sth r0, 0x18(r1)
    lbz r0, 0x1e(r30)
    stb r0, 0x1c(r1)
    lbz r0, 0x520(r27)
    cmplwi r0, 0xff
    bne lbl_fn_804EF0F4_00002078
    lwz r0, 0x0(r30)
    mr r3, r29
    stw r0, 0x1d(r1)
    addi r4, r1, 0x28
    lhz r0, 0xc(r30)
    stw r0, 0x21(r1)
    stb r26, 0x520(r27)
    lwz r12, 0x0(r29)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    b lbl_fn_804EF0F4_00002084
lbl_fn_804EF0F4_00002078:
    li r0, -0x1
    stw r0, 0x1d(r1)
    stw r0, 0x21(r1)
lbl_fn_804EF0F4_00002084:
    bl fn_804AE3BC
    mr r4, r26
    mr r6, r25
    li r5, 0x1035
    li r7, 0x1
    bl fn_8050E098
    lwz r3, lbl_8087F610
    li r0, 0x1
    addis r3, r3, 0x1
    stb r0, -0x6650(r3)
    lwz r3, lbl_8087F610
    addis r3, r3, 0x1
    stb r26, -0x664f(r3)
    lwz r3, lbl_8087F610
    addis r3, r3, 0x1
    stw r0, -0x664c(r3)
    b lbl_fn_804EF0F4_000021D4
lbl_fn_804EF0F4_000020C8:
    lwz r0, 0x50(r29)
    cmpwi r0, 0x12
    bne lbl_fn_804EF0F4_000021D4
    lhz r0, 0xe(r30)
    cmplwi r0, 0x5
    bne lbl_fn_804EF0F4_000021D4
    lis r5, lbl_8078D4E8@ha
    lis r6, lbl_8078CA58@ha
    mr r3, r29
    li r4, 0x0
    addi r5, r5, lbl_8078D4E8@l
    addi r6, r6, lbl_8078CA58@l
    li r7, 0x0
    bl fn_80695B28
    cmpwi r3, 0x0
    mr r27, r3
    beq lbl_fn_804EF0F4_000021D4
    lbz r0, lbl_8087F5F8
    li r4, 0x2
    li r3, 0x1035
    sth r4, 0x8(r1)
    extsb. r0, r0
    sth r3, 0xa(r1)
    bne lbl_fn_804EF0F4_00002148
    lis r4, fn_804D818C@ha
    lis r5, lbl_807C8AE8@ha
    addi r4, r4, fn_804D818C@l
    la r3, lbl_8087F5FC
    addi r5, r5, lbl_807C8AE8@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8087F5F8
lbl_fn_804EF0F4_00002148:
    li r3, 0x0
    li r0, 0xb
    stw r3, lbl_8087F5FC
    addi r25, r1, 0xc
    sth r0, 0x8(r1)
    lbz r0, 0x1e(r30)
    stb r0, 0xc(r1)
    lbz r0, 0x29c(r27)
    cmplwi r0, 0xff
    bne lbl_fn_804EF0F4_00002188
    lwz r0, 0x0(r30)
    stw r0, 0xd(r1)
    lhz r0, 0xc(r30)
    stw r0, 0x11(r1)
    stb r26, 0x29c(r27)
    b lbl_fn_804EF0F4_00002194
lbl_fn_804EF0F4_00002188:
    li r0, -0x1
    stw r0, 0xd(r1)
    stw r0, 0x11(r1)
lbl_fn_804EF0F4_00002194:
    bl fn_804AE3BC
    mr r4, r26
    mr r6, r25
    li r5, 0x1035
    li r7, 0x1
    bl fn_8050E098
    lwz r3, lbl_8087F610
    li r0, 0x1
    addis r3, r3, 0x1
    stb r0, -0x6650(r3)
    lwz r3, lbl_8087F610
    addis r3, r3, 0x1
    stb r26, -0x664f(r3)
    lwz r3, lbl_8087F610
    addis r3, r3, 0x1
    stw r0, -0x664c(r3)
lbl_fn_804EF0F4_000021D4:
    lbz r0, lbl_8087EE74
    extsb. r0, r0
    bne lbl_fn_804EF0F4_00002214
    lis r3, lbl_807C6BB8@ha
    li r0, 0x0
    stwu r0, lbl_807C6BB8@l(r3)
    lis r4, fn_8003EFB0@ha
    li r26, 0x1
    lis r5, lbl_807C8F48@ha
    stw r0, 0x4(r3)
    addi r4, r4, fn_8003EFB0@l
    addi r5, r5, lbl_807C8F48@l
    stw r0, 0x8(r3)
    stw r26, 0xc(r3)
    bl __register_global_object
    stb r26, lbl_8087EE74
lbl_fn_804EF0F4_00002214:
    lis r3, lbl_807C6BB8@ha
    li r0, 0x1
    addi r3, r3, lbl_807C6BB8@l
    stw r0, 0xc(r3)
    b lbl_fn_804EF0F4_00002234
lbl_fn_804EF0F4_00002228:
    lwz r29, 0x5c(r29)
lbl_fn_804EF0F4_0000222C:
    cmpwi r29, 0x0
    bne lbl_fn_804EF0F4_000019F4
lbl_fn_804EF0F4_00002234:
    addi r11, r1, 0x70
    bl _restgpr_25
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}
