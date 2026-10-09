#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void NANDPrivateOpenAsync(void);
extern void OSGetTime(void);
extern void OSSleepTicks(void);
extern void __div2i(void);
extern void _restgpr_21(void);
extern void _restgpr_24(void);
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _savegpr_21(void);
extern void _savegpr_24(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void fn_8061E3F0(void);
extern void fn_8061E6A0(void);
extern void fn_8061E7D0(void);
extern void fn_8061E8C0(void);
extern void fn_8061FBE0(void);
extern void fn_806809C0(void);
extern void fn_8068236C(void);
extern void fn_80686A80(void);
extern void fn_80697D34(void);
extern void fn_8069FFF8(void);
extern void fn_806A0084(void);
extern void fn_806A05F8(void);
extern void fn_806A0638(void);
extern void fn_806A243C(void);
extern void fn_806A24DC(void);
extern void fn_806A257C(void);
extern void fn_806A264C(void);
extern void fn_806A72B0(void);
extern void fn_806A76B0(void);
extern void fn_806AB8B0(void);
extern void fn_806D1670(void);
extern void fn_806D16C0(void);
extern void fn_806D16E0(void);
extern void fn_806D1700(void);
extern void fn_806D1720(void);
extern void fn_806D2BD0(void);
extern void fn_806D2C40(void);

/* External data declarations */
extern u8 jumptable_807C202C[];
extern u8 lbl_807C1CB8[];
extern u8 lbl_807C1CC0[];
extern u8 lbl_807C1CE4[];
extern u8 lbl_807C1DD8[];
extern u8 lbl_807C1F60[];
extern u8 lbl_807C1F64[];
extern u8 lbl_807C1F68[];
extern u8 lbl_807C1F70[];
extern u8 lbl_808608C0[];
extern u8 lbl_80860C48[];

/* Small data declarations */

/* Function declarations */
void pad_03_806CF56C_text(void);
void fn_806CF570(void);
void fn_806CF700(void);
void fn_806CF960(void);
void fn_806CFA30(void);
void fn_806CFA80(void);
void fn_806CFAA0(void);
void fn_806CFAC0(void);
void fn_806CFAE0(void);
void fn_806CFB00(void);
void fn_806CFB40(void);
void fn_806CFCC0(void);
void fn_806CFD00(void);
void fn_806CFE90(void);
void fn_806CFEA0(void);
void fn_806CFEB0(void);
void fn_806D0030(void);
void fn_806D0060(void);
void fn_806D01C0(void);
void fn_806D0260(void);
void fn_806D02E0(void);
void fn_806D0350(void);
void fn_806D04E0(void);
void fn_806D05A0(void);
void fn_806D0810(void);
void fn_806D08E0(void);
void fn_806D0970(void);
void fn_806D0980(void);
void fn_806D0B40(void);
void fn_806D0C30(void);
void fn_806D0EA0(void);

asm void pad_03_806CF56C_text(void)
{
    nofralloc
    opword 0x00000000
}

asm void fn_806CF570(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_26
    lwz r7, 0x0(r3)
    lis r6, lbl_807C1CC0@ha
    lwz r0, 0x4(r3)
    mr r26, r5
    lis r5, lbl_807C1CE4@ha
    addi r6, r6, lbl_807C1CC0@l
    rotrwi r11, r0, 5
    clrlwi r0, r0, 27
    rlwimi r11, r7, 27, 0, 4
    lbzx r12, r6, r0
    rotrwi r9, r11, 5
    clrlwi r27, r7, 21
    rlwimi r9, r7, 22, 0, 4
    clrlwi r8, r11, 27
    lbzx r10, r6, r8
    rotrwi r0, r9, 5
    rlwimi r0, r27, 17, 0, 4
    clrlwi r8, r9, 27
    rotrwi r11, r0, 5
    lbzx r7, r6, r8
    rlwimi r11, r27, 12, 0, 4
    clrlwi r0, r0, 27
    rotrwi r9, r11, 5
    stb r12, 0x30(r1)
    lbzx r12, r6, r0
    rlwimi r9, r27, 7, 0, 4
    rotrwi r0, r9, 5
    clrlwi r8, r11, 27
    rlwimi r0, r27, 2, 0, 4
    stb r10, 0x2f(r1)
    lbzx r10, r6, r8
    rotrwi r11, r0, 5
    srwi r27, r27, 30
    clrlwi r8, r9, 27
    rlwimi r11, r27, 27, 0, 4
    stb r7, 0x2e(r1)
    lbzx r7, r6, r8
    rotrwi r9, r11, 5
    rlwimi r9, r27, 22, 0, 4
    li r27, 0x0
    stb r7, 0x2b(r1)
    clrlwi r8, r11, 27
    lbzx r7, r6, r9
    clrlwi r0, r0, 27
    stb r7, 0x28(r1)
    addi r5, r5, lbl_807C1CE4@l
    lwz r7, 0x8(r3)
    stb r10, 0x2c(r1)
    lbzx r10, r6, r8
    clrlwi r11, r7, 27
    stb r12, 0x2d(r1)
    extrwi r9, r7, 5, 12
    lbzx r12, r6, r0
    extrwi r0, r7, 5, 22
    lbzx r29, r6, r0
    extrwi r3, r7, 5, 7
    lbzx r30, r6, r9
    extrwi r8, r7, 5, 2
    lbzx r31, r6, r3
    addi r0, r1, 0x10
    stb r10, 0x29(r1)
    extrwi r10, r7, 5, 17
    lbzx r28, r6, r11
    srwi r7, r7, 30
    lbzx r11, r6, r7
    mr r3, r26
    stb r12, 0x2a(r1)
    srwi r7, r4, 24
    lbzx r12, r6, r8
    extrwi r8, r4, 8, 8
    lbzx r10, r6, r10
    addi r6, r1, 0x28
    stb r10, 0x14(r1)
    extrwi r9, r4, 8, 16
    clrlwi r10, r4, 24
    li r4, 0x15
    stb r27, 0x31(r1)
    stb r28, 0x16(r1)
    stb r29, 0x15(r1)
    stb r30, 0x13(r1)
    stb r31, 0x12(r1)
    stb r12, 0x11(r1)
    stb r11, 0x10(r1)
    stb r27, 0x17(r1)
    stw r0, 0x8(r1)
    crclr 6
    bl fn_806809C0
    addi r11, r1, 0x60
    bl _restgpr_26
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_806CF700(void)
{
    nofralloc
    stwu r1, -0x460(r1)
    mflr r0
    li r5, 0x40
    stw r0, 0x464(r1)
    stw r31, 0x45c(r1)
    stw r30, 0x458(r1)
    mr r30, r3
    stw r29, 0x454(r1)
    mr r29, r4
    li r4, 0x0
    bl memset
    li r3, 0x40
    li r0, 0x0
    stw r3, 0x0(r30)
    stw r0, 0x1c(r30)
    stw r29, 0x24(r30)
    bl OSGetTime
    mr r31, r4
    li r29, 0x0
    bl fn_806D1670
    clrrwi. r0, r3, 11
    bne lbl_fn_806CF700_000001FC
    lwz r0, 0x4(r30)
    clrrwi r0, r0, 11
    or r0, r0, r3
    stw r0, 0x4(r30)
lbl_fn_806CF700_000001FC:
    lis r5, 0x6c08
    lis r3, 0x5d59
    subi r6, r5, 0x769b
    stw r4, 0x8(r30)
    mulhwu r5, r31, r6
    lwz r0, 0x4(r30)
    subi r7, r3, 0x749b
    rlwinm r0, r0, 21, 11, 29
    lis r3, 0x27
    ori r8, r0, 0x1
    mullw r4, r29, r6
    clrrwi. r0, r8, 21
    subi r0, r3, 0x613d
    li r3, 0x0
    mullw r6, r31, r6
    add r5, r5, r4
    mullw r4, r31, r7
    addc r0, r6, r0
    add r0, r5, r4
    adde r0, r0, r3
    stw r0, 0xc(r30)
    bne lbl_fn_806CF700_00000264
    lwz r3, 0x4(r30)
    slwi r0, r8, 11
    rlwimi r0, r3, 0, 21, 31
    stw r0, 0x4(r30)
lbl_fn_806CF700_00000264:
    lwz r0, 0x10(r30)
    rlwinm r4, r0, 21, 11, 29
    clrrwi. r0, r4, 21
    bne lbl_fn_806CF700_00000284
    lwz r3, 0x10(r30)
    slwi r0, r4, 11
    rlwimi r0, r3, 0, 21, 31
    stw r0, 0x10(r30)
lbl_fn_806CF700_00000284:
    lis r4, 0xedb9
    addi r3, r1, 0x48
    subi r4, r4, 0x7ce0
    bl fn_806A24DC
    li r0, 0x2
    mr r5, r30
    addi r6, r1, 0x8
    mtctr r0
lbl_fn_806CF700_000002A4:
    lwz r4, 0x0(r5)
    rlwinm r3, r4, 24, 8, 15
    extlwi r0, r4, 8, 8
    rlwimi r3, r4, 24, 24, 31
    rlwimi r0, r4, 8, 16, 23
    or r0, r3, r0
    rotlwi r0, r0, 16
    stw r0, 0x0(r6)
    lwz r4, 0x4(r5)
    rlwinm r3, r4, 24, 8, 15
    extlwi r0, r4, 8, 8
    rlwimi r3, r4, 24, 24, 31
    rlwimi r0, r4, 8, 16, 23
    or r0, r3, r0
    rotlwi r0, r0, 16
    stw r0, 0x4(r6)
    lwz r4, 0x8(r5)
    rlwinm r3, r4, 24, 8, 15
    extlwi r0, r4, 8, 8
    rlwimi r3, r4, 24, 24, 31
    rlwimi r0, r4, 8, 16, 23
    or r0, r3, r0
    rotlwi r0, r0, 16
    stw r0, 0x8(r6)
    lwz r4, 0xc(r5)
    rlwinm r3, r4, 24, 8, 15
    extlwi r0, r4, 8, 8
    rlwimi r3, r4, 24, 24, 31
    rlwimi r0, r4, 8, 16, 23
    or r0, r3, r0
    rotlwi r0, r0, 16
    stw r0, 0xc(r6)
    lwz r4, 0x10(r5)
    rlwinm r3, r4, 24, 8, 15
    extlwi r0, r4, 8, 8
    rlwimi r3, r4, 24, 24, 31
    rlwimi r0, r4, 8, 16, 23
    or r0, r3, r0
    rotlwi r0, r0, 16
    stw r0, 0x10(r6)
    lwz r4, 0x14(r5)
    rlwinm r3, r4, 24, 8, 15
    extlwi r0, r4, 8, 8
    rlwimi r3, r4, 24, 24, 31
    rlwimi r0, r4, 8, 16, 23
    or r0, r3, r0
    rotlwi r0, r0, 16
    stw r0, 0x14(r6)
    lwz r4, 0x18(r5)
    rlwinm r3, r4, 24, 8, 15
    extlwi r0, r4, 8, 8
    rlwimi r3, r4, 24, 24, 31
    rlwimi r0, r4, 8, 16, 23
    or r0, r3, r0
    rotlwi r0, r0, 16
    stw r0, 0x18(r6)
    lwz r4, 0x1c(r5)
    addi r5, r5, 0x20
    rlwinm r3, r4, 24, 8, 15
    extlwi r0, r4, 8, 8
    rlwimi r3, r4, 24, 24, 31
    rlwimi r0, r4, 8, 16, 23
    or r0, r3, r0
    rotlwi r0, r0, 16
    stw r0, 0x1c(r6)
    addi r6, r6, 0x20
    bdnz lbl_fn_806CF700_000002A4
    addi r3, r1, 0x48
    addi r4, r1, 0x8
    li r5, 0x3c
    bl fn_806A264C
    lwz r0, 0x20(r30)
    stw r3, 0x3c(r30)
    ori r0, r0, 0x1
    stw r0, 0x20(r30)
    lwz r31, 0x45c(r1)
    lwz r30, 0x458(r1)
    lwz r29, 0x454(r1)
    lwz r0, 0x464(r1)
    mtlr r0
    addi r1, r1, 0x460
    blr
}

asm void fn_806CF960(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    bl OSGetTime
    mr r31, r4
    li r29, 0x0
    bl fn_806D1670
    clrrwi. r0, r3, 11
    bne lbl_fn_806CF960_00000438
    lwz r0, 0x0(r30)
    clrrwi r0, r0, 11
    or r0, r0, r3
    stw r0, 0x0(r30)
lbl_fn_806CF960_00000438:
    lis r5, 0x6c08
    lis r3, 0x5d59
    subi r6, r5, 0x769b
    stw r4, 0x4(r30)
    mulhwu r5, r31, r6
    lwz r0, 0x0(r30)
    subi r7, r3, 0x749b
    rlwinm r0, r0, 21, 11, 29
    lis r3, 0x27
    ori r8, r0, 0x1
    mullw r4, r29, r6
    clrrwi. r0, r8, 21
    subi r0, r3, 0x613d
    li r3, 0x0
    mullw r6, r31, r6
    add r5, r5, r4
    mullw r4, r31, r7
    addc r0, r6, r0
    add r0, r5, r4
    adde r0, r0, r3
    stw r0, 0x8(r30)
    bne lbl_fn_806CF960_000004A0
    lwz r3, 0x0(r30)
    slwi r0, r8, 11
    rlwimi r0, r3, 0, 21, 31
    stw r0, 0x0(r30)
lbl_fn_806CF960_000004A0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806CFA30(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, 0x0(r3)
    stw r31, 0xc(r1)
    lwz r31, 0x4(r3)
    stw r30, 0x8(r1)
    clrlwi r30, r0, 21
    bl fn_806D1670
    xor r4, r31, r4
    xor r0, r30, r3
    or r0, r4, r0
    lwz r31, 0xc(r1)
    cntlzw r0, r0
    lwz r30, 0x8(r1)
    srwi r3, r0, 5
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806CFA80(void)
{
    nofralloc
    lwz r0, 0x0(r3)
    extrwi r3, r0, 2, 19
    subi r0, r3, 0x1
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

asm void fn_806CFAA0(void)
{
    nofralloc
    lwz r0, 0x10(r3)
    extrwi r3, r0, 2, 19
    subi r0, r3, 0x1
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

asm void fn_806CFAC0(void)
{
    nofralloc
    lwz r0, 0x0(r3)
    extrwi r3, r0, 2, 19
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    blr
}

asm void fn_806CFAE0(void)
{
    nofralloc
    lwz r0, 0x0(r3)
    extrwi r3, r0, 2, 19
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    blr
}

asm void fn_806CFB00(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_806A72B0
    mr r4, r3
    mr r3, r31
    bl fn_806CF700
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806CFB40(void)
{
    nofralloc
    stwu r1, -0x480(r1)
    mflr r0
    stw r0, 0x484(r1)
    addi r11, r1, 0x480
    bl _savegpr_21
    lis r4, 0xedb9
    mr r31, r3
    addi r3, r1, 0x48
    subi r4, r4, 0x7ce0
    bl fn_806A24DC
    li r0, 0x2
    mr r29, r31
    addi r28, r1, 0x8
    mtctr r0
lbl_fn_806CFB40_0000060C:
    lwz r3, 0x0(r29)
    lwz r22, 0x8(r29)
    rlwinm r4, r3, 24, 8, 15
    extlwi r0, r3, 8, 8
    lwz r5, 0x4(r29)
    rlwimi r4, r3, 24, 24, 31
    rlwimi r0, r3, 8, 16, 23
    lwz r23, 0xc(r29)
    or r4, r4, r0
    rlwinm r3, r5, 24, 8, 15
    extlwi r0, r5, 8, 8
    rlwinm r30, r22, 24, 8, 15
    rotlwi r4, r4, 16
    extlwi r12, r22, 8, 8
    lwz r24, 0x10(r29)
    rlwinm r11, r23, 24, 8, 15
    extlwi r10, r23, 8, 8
    stw r4, 0x0(r28)
    lwz r25, 0x14(r29)
    rlwinm r9, r24, 24, 8, 15
    extlwi r8, r24, 8, 8
    rlwimi r3, r5, 24, 24, 31
    rlwimi r0, r5, 8, 16, 23
    lwz r26, 0x18(r29)
    or r0, r3, r0
    rlwinm r7, r25, 24, 8, 15
    lwz r27, 0x1c(r29)
    rotlwi r21, r0, 16
    extlwi r6, r25, 8, 8
    rlwinm r5, r26, 24, 8, 15
    extlwi r4, r26, 8, 8
    rlwinm r3, r27, 24, 8, 15
    extlwi r0, r27, 8, 8
    stw r21, 0x4(r28)
    rlwimi r30, r22, 24, 24, 31
    rlwimi r12, r22, 8, 16, 23
    or r12, r30, r12
    rlwimi r11, r23, 24, 24, 31
    rotlwi r12, r12, 16
    rlwimi r10, r23, 8, 16, 23
    or r10, r11, r10
    stw r12, 0x8(r28)
    rotlwi r10, r10, 16
    rlwimi r9, r24, 24, 24, 31
    rlwimi r8, r24, 8, 16, 23
    stw r10, 0xc(r28)
    or r8, r9, r8
    rlwimi r7, r25, 24, 24, 31
    rotlwi r8, r8, 16
    rlwimi r6, r25, 8, 16, 23
    or r6, r7, r6
    stw r8, 0x10(r28)
    rotlwi r6, r6, 16
    rlwimi r5, r26, 24, 24, 31
    rlwimi r4, r26, 8, 16, 23
    stw r6, 0x14(r28)
    or r4, r5, r4
    rlwimi r3, r27, 24, 24, 31
    rotlwi r4, r4, 16
    rlwimi r0, r27, 8, 16, 23
    or r0, r3, r0
    stw r4, 0x18(r28)
    rotlwi r0, r0, 16
    addi r29, r29, 0x20
    stw r0, 0x1c(r28)
    addi r28, r28, 0x20
    bdnz lbl_fn_806CFB40_0000060C
    addi r3, r1, 0x48
    addi r4, r1, 0x8
    li r5, 0x3c
    bl fn_806A264C
    lwz r0, 0x3c(r31)
    addi r11, r1, 0x480
    subf r0, r3, r0
    cntlzw r0, r0
    srwi r3, r0, 5
    bl _restgpr_21
    lwz r0, 0x484(r1)
    mtlr r0
    addi r1, r1, 0x480
    blr
}

asm void fn_806CFCC0(void)
{
    nofralloc
    lwz r0, 0x10(r3)
    li r4, 0x0
    extrwi r0, r0, 2, 19
    cmplwi r0, 0x1
    bne lbl_fn_806CFCC0_00000778
    lwz r0, 0x1c(r3)
    cmpwi r0, 0x0
    ble lbl_fn_806CFCC0_00000778
    li r4, 0x1
lbl_fn_806CFCC0_00000778:
    neg r0, r4
    or r0, r0, r4
    srwi r3, r0, 31
    blr
}

asm void fn_806CFD00(void)
{
    nofralloc
    stwu r1, -0x450(r1)
    mflr r0
    lwz r8, 0x0(r4)
    lis r6, 0xedb9
    stw r0, 0x454(r1)
    lwz r7, 0x4(r4)
    stw r31, 0x44c(r1)
    mr r31, r3
    lwz r0, 0x8(r4)
    subi r4, r6, 0x7ce0
    stw r8, 0x10(r3)
    stw r7, 0x14(r3)
    stw r0, 0x18(r3)
    stw r5, 0x1c(r3)
    addi r3, r1, 0x48
    bl fn_806A24DC
    li r0, 0x2
    mr r5, r31
    addi r6, r1, 0x8
    mtctr r0
lbl_fn_806CFD00_000007E4:
    lwz r4, 0x0(r5)
    rlwinm r3, r4, 24, 8, 15
    extlwi r0, r4, 8, 8
    rlwimi r3, r4, 24, 24, 31
    rlwimi r0, r4, 8, 16, 23
    or r0, r3, r0
    rotlwi r0, r0, 16
    stw r0, 0x0(r6)
    lwz r4, 0x4(r5)
    rlwinm r3, r4, 24, 8, 15
    extlwi r0, r4, 8, 8
    rlwimi r3, r4, 24, 24, 31
    rlwimi r0, r4, 8, 16, 23
    or r0, r3, r0
    rotlwi r0, r0, 16
    stw r0, 0x4(r6)
    lwz r4, 0x8(r5)
    rlwinm r3, r4, 24, 8, 15
    extlwi r0, r4, 8, 8
    rlwimi r3, r4, 24, 24, 31
    rlwimi r0, r4, 8, 16, 23
    or r0, r3, r0
    rotlwi r0, r0, 16
    stw r0, 0x8(r6)
    lwz r4, 0xc(r5)
    rlwinm r3, r4, 24, 8, 15
    extlwi r0, r4, 8, 8
    rlwimi r3, r4, 24, 24, 31
    rlwimi r0, r4, 8, 16, 23
    or r0, r3, r0
    rotlwi r0, r0, 16
    stw r0, 0xc(r6)
    lwz r4, 0x10(r5)
    rlwinm r3, r4, 24, 8, 15
    extlwi r0, r4, 8, 8
    rlwimi r3, r4, 24, 24, 31
    rlwimi r0, r4, 8, 16, 23
    or r0, r3, r0
    rotlwi r0, r0, 16
    stw r0, 0x10(r6)
    lwz r4, 0x14(r5)
    rlwinm r3, r4, 24, 8, 15
    extlwi r0, r4, 8, 8
    rlwimi r3, r4, 24, 24, 31
    rlwimi r0, r4, 8, 16, 23
    or r0, r3, r0
    rotlwi r0, r0, 16
    stw r0, 0x14(r6)
    lwz r4, 0x18(r5)
    rlwinm r3, r4, 24, 8, 15
    extlwi r0, r4, 8, 8
    rlwimi r3, r4, 24, 24, 31
    rlwimi r0, r4, 8, 16, 23
    or r0, r3, r0
    rotlwi r0, r0, 16
    stw r0, 0x18(r6)
    lwz r4, 0x1c(r5)
    addi r5, r5, 0x20
    rlwinm r3, r4, 24, 8, 15
    extlwi r0, r4, 8, 8
    rlwimi r3, r4, 24, 24, 31
    rlwimi r0, r4, 8, 16, 23
    or r0, r3, r0
    rotlwi r0, r0, 16
    stw r0, 0x1c(r6)
    addi r6, r6, 0x20
    bdnz lbl_fn_806CFD00_000007E4
    addi r3, r1, 0x48
    addi r4, r1, 0x8
    li r5, 0x3c
    bl fn_806A264C
    lwz r0, 0x20(r31)
    stw r3, 0x3c(r31)
    ori r0, r0, 0x1
    stw r0, 0x20(r31)
    lwz r31, 0x44c(r1)
    lwz r0, 0x454(r1)
    mtlr r0
    addi r1, r1, 0x450
    blr
}

asm void fn_806CFE90(void)
{
    nofralloc
    lwz r0, 0x20(r3)
    clrlwi r3, r0, 31
    blr
}

asm void fn_806CFEA0(void)
{
    nofralloc
    b fn_806CFEB0
}

asm void fn_806CFEB0(void)
{
    nofralloc
    stwu r1, -0x450(r1)
    mflr r0
    lis r4, 0xedb9
    stw r0, 0x454(r1)
    subi r4, r4, 0x7ce0
    stw r31, 0x44c(r1)
    mr r31, r3
    lwz r0, 0x20(r3)
    clrrwi r0, r0, 1
    stw r0, 0x20(r3)
    addi r3, r1, 0x48
    bl fn_806A24DC
    li r0, 0x2
    mr r5, r31
    addi r6, r1, 0x8
    mtctr r0
lbl_fn_806CFEB0_00000984:
    lwz r4, 0x0(r5)
    rlwinm r3, r4, 24, 8, 15
    extlwi r0, r4, 8, 8
    rlwimi r3, r4, 24, 24, 31
    rlwimi r0, r4, 8, 16, 23
    or r0, r3, r0
    rotlwi r0, r0, 16
    stw r0, 0x0(r6)
    lwz r4, 0x4(r5)
    rlwinm r3, r4, 24, 8, 15
    extlwi r0, r4, 8, 8
    rlwimi r3, r4, 24, 24, 31
    rlwimi r0, r4, 8, 16, 23
    or r0, r3, r0
    rotlwi r0, r0, 16
    stw r0, 0x4(r6)
    lwz r4, 0x8(r5)
    rlwinm r3, r4, 24, 8, 15
    extlwi r0, r4, 8, 8
    rlwimi r3, r4, 24, 24, 31
    rlwimi r0, r4, 8, 16, 23
    or r0, r3, r0
    rotlwi r0, r0, 16
    stw r0, 0x8(r6)
    lwz r4, 0xc(r5)
    rlwinm r3, r4, 24, 8, 15
    extlwi r0, r4, 8, 8
    rlwimi r3, r4, 24, 24, 31
    rlwimi r0, r4, 8, 16, 23
    or r0, r3, r0
    rotlwi r0, r0, 16
    stw r0, 0xc(r6)
    lwz r4, 0x10(r5)
    rlwinm r3, r4, 24, 8, 15
    extlwi r0, r4, 8, 8
    rlwimi r3, r4, 24, 24, 31
    rlwimi r0, r4, 8, 16, 23
    or r0, r3, r0
    rotlwi r0, r0, 16
    stw r0, 0x10(r6)
    lwz r4, 0x14(r5)
    rlwinm r3, r4, 24, 8, 15
    extlwi r0, r4, 8, 8
    rlwimi r3, r4, 24, 24, 31
    rlwimi r0, r4, 8, 16, 23
    or r0, r3, r0
    rotlwi r0, r0, 16
    stw r0, 0x14(r6)
    lwz r4, 0x18(r5)
    rlwinm r3, r4, 24, 8, 15
    extlwi r0, r4, 8, 8
    rlwimi r3, r4, 24, 24, 31
    rlwimi r0, r4, 8, 16, 23
    or r0, r3, r0
    rotlwi r0, r0, 16
    stw r0, 0x18(r6)
    lwz r4, 0x1c(r5)
    addi r5, r5, 0x20
    rlwinm r3, r4, 24, 8, 15
    extlwi r0, r4, 8, 8
    rlwimi r3, r4, 24, 24, 31
    rlwimi r0, r4, 8, 16, 23
    or r0, r3, r0
    rotlwi r0, r0, 16
    stw r0, 0x1c(r6)
    addi r6, r6, 0x20
    bdnz lbl_fn_806CFEB0_00000984
    addi r3, r1, 0x48
    addi r4, r1, 0x8
    li r5, 0x3c
    bl fn_806A264C
    stw r3, 0x3c(r31)
    lwz r31, 0x44c(r1)
    lwz r0, 0x454(r1)
    mtlr r0
    addi r1, r1, 0x450
    blr
}

asm void fn_806D0030(void)
{
    nofralloc
    lwz r0, 0x0(r3)
    extrwi r0, r0, 2, 19
    cmplwi r0, 0x2
    bne lbl_fn_806D0030_00000AE0
    lwz r4, 0x4(r3)
    lwz r3, 0x8(r3)
    blr
lbl_fn_806D0030_00000AE0:
    li r4, 0x0
    li r3, 0x0
    blr
}

asm void fn_806D0060(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    lwz r0, 0x0(r4)
    stw r31, 0x12c(r1)
    extrwi r0, r0, 2, 19
    stw r30, 0x128(r1)
    cmplwi r0, 0x2
    stw r29, 0x124(r1)
    stw r28, 0x120(r1)
    beq lbl_fn_806D0060_00000B34
    cmplwi r0, 0x3
    beq lbl_fn_806D0060_00000C1C
    cmplwi r0, 0x1
    beq lbl_fn_806D0060_00000C24
    b lbl_fn_806D0060_00000C2C
lbl_fn_806D0060_00000B34:
    lwz r30, 0x8(r4)
    li r28, 0x0
    lwz r31, 0x4(r4)
    lwz r29, 0x24(r3)
lbl_fn_806D0060_00000B44:
    cmpwi r31, 0x0
    bgt lbl_fn_806D0060_00000B54
    li r0, 0x0
    b lbl_fn_806D0060_00000BF4
lbl_fn_806D0060_00000B54:
    rlwinm r5, r31, 24, 8, 15
    extlwi r4, r31, 8, 8
    rlwinm r3, r29, 24, 8, 15
    extlwi r0, r29, 8, 8
    rlwimi r5, r31, 24, 24, 31
    rlwimi r4, r31, 8, 16, 23
    rlwimi r3, r29, 24, 24, 31
    rlwimi r0, r29, 8, 16, 23
    or r0, r3, r0
    or r4, r5, r4
    rotlwi r3, r4, 16
    cmpwi r28, 0x0
    rotlwi r0, r0, 16
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    beq lbl_fn_806D0060_00000BA0
    cmpwi r28, 0x1
    beq lbl_fn_806D0060_00000BC4
    b lbl_fn_806D0060_00000BDC
lbl_fn_806D0060_00000BA0:
    addi r3, r1, 0x20
    li r4, 0x7
    bl fn_806A243C
    addi r3, r1, 0x20
    addi r4, r1, 0x8
    li r5, 0x8
    bl fn_806A257C
    clrlwi r6, r3, 25
    b lbl_fn_806D0060_00000BDC
lbl_fn_806D0060_00000BC4:
    addi r3, r1, 0x10
    addi r4, r1, 0x8
    li r5, 0x8
    bl fn_806AB8B0
    lbz r0, 0x10(r1)
    srawi r6, r0, 1
lbl_fn_806D0060_00000BDC:
    xor r3, r31, r31
    xor r0, r30, r6
    or r0, r3, r0
    cntlzw r0, r0
    srawi r3, r6, 31
    srwi r0, r0, 5
lbl_fn_806D0060_00000BF4:
    cmpwi r0, 0x0
    beq lbl_fn_806D0060_00000C08
    li r0, -0x1
    and r3, r31, r0
    b lbl_fn_806D0060_00000C30
lbl_fn_806D0060_00000C08:
    addi r28, r28, 0x1
    cmpwi r28, 0x2
    blt lbl_fn_806D0060_00000B44
    li r3, 0x0
    b lbl_fn_806D0060_00000C30
lbl_fn_806D0060_00000C1C:
    lwz r3, 0x4(r4)
    b lbl_fn_806D0060_00000C30
lbl_fn_806D0060_00000C24:
    li r3, -0x1
    b lbl_fn_806D0060_00000C30
lbl_fn_806D0060_00000C2C:
    li r3, 0x0
lbl_fn_806D0060_00000C30:
    lwz r0, 0x134(r1)
    lwz r31, 0x12c(r1)
    lwz r30, 0x128(r1)
    lwz r29, 0x124(r1)
    lwz r28, 0x120(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

asm void fn_806D01C0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x34(r1)
    li r0, 0x0
    stw r31, 0x2c(r1)
    lwz r31, 0x1c(r3)
    cmpwi r31, 0x0
    beq lbl_fn_806D01C0_00000CD0
    lwz r6, 0x24(r3)
    rlwinm r5, r31, 24, 8, 15
    extlwi r4, r31, 8, 8
    rlwinm r3, r6, 24, 8, 15
    extlwi r0, r6, 8, 8
    rlwimi r5, r31, 24, 24, 31
    rlwimi r4, r31, 8, 16, 23
    or r4, r5, r4
    rlwimi r3, r6, 24, 24, 31
    rlwimi r0, r6, 8, 16, 23
    li r5, 0x8
    or r0, r3, r0
    rotlwi r3, r4, 16
    rotlwi r0, r0, 16
    stw r3, 0x8(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0x8
    stw r0, 0xc(r1)
    bl fn_806AB8B0
    lbz r0, 0x10(r1)
    mr r4, r31
    srawi r0, r0, 1
lbl_fn_806D01C0_00000CD0:
    mr r3, r0
    lwz r31, 0x2c(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806D0260(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    li r5, 0xc
    stw r30, 0x18(r1)
    mr r30, r6
    stw r29, 0x14(r1)
    mr r29, r3
    bl memset
    lwz r0, 0x0(r29)
    stw r30, 0x4(r29)
    rlwinm r0, r0, 21, 11, 29
    ori r4, r0, 0x2
    stw r31, 0x8(r29)
    clrrwi. r0, r4, 21
    bne lbl_fn_806D0260_00000D50
    lwz r3, 0x0(r29)
    slwi r0, r4, 11
    rlwimi r0, r3, 0, 21, 31
    stw r0, 0x0(r29)
lbl_fn_806D0260_00000D50:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806D02E0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0xc
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    li r4, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    bl memset
    lwz r0, 0x0(r30)
    stw r31, 0x4(r30)
    rlwinm r0, r0, 21, 11, 29
    ori r4, r0, 0x3
    clrrwi. r0, r4, 21
    bne lbl_fn_806D02E0_00000DC4
    lwz r3, 0x0(r30)
    slwi r0, r4, 11
    rlwimi r0, r3, 0, 21, 31
    stw r0, 0x0(r30)
lbl_fn_806D02E0_00000DC4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806D0350(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_26
    lwz r8, 0x0(r4)
    lis r6, lbl_807C1CC0@ha
    lwz r7, 0x4(r4)
    addi r6, r6, lbl_807C1CC0@l
    lwz r0, 0x24(r3)
    clrlwi r26, r8, 21
    rotrwi r11, r7, 5
    clrlwi r3, r7, 27
    rlwimi r11, r8, 27, 0, 4
    lbzx r12, r6, r3
    rotrwi r9, r11, 5
    stb r12, 0x18(r1)
    rlwimi r9, r8, 22, 0, 4
    clrlwi r8, r11, 27
    lbzx r10, r6, r8
    rotrwi r3, r9, 5
    rlwimi r3, r26, 17, 0, 4
    clrlwi r8, r9, 27
    rotrwi r11, r3, 5
    lbzx r7, r6, r8
    rlwimi r11, r26, 12, 0, 4
    clrlwi r3, r3, 27
    rotrwi r9, r11, 5
    lbzx r12, r6, r3
    rlwimi r9, r26, 7, 0, 4
    clrlwi r8, r11, 27
    rotrwi r3, r9, 5
    stb r10, 0x17(r1)
    rlwimi r3, r26, 2, 0, 4
    lbzx r10, r6, r8
    rotrwi r11, r3, 5
    srwi r26, r26, 30
    clrlwi r8, r9, 27
    stb r7, 0x16(r1)
    rlwimi r11, r26, 27, 0, 4
    lbzx r7, r6, r8
    rotrwi r9, r11, 5
    clrlwi r3, r3, 27
    rlwimi r9, r26, 22, 0, 4
    li r26, 0x0
    stb r12, 0x15(r1)
    clrlwi r8, r11, 27
    lbzx r12, r6, r3
    mr r3, r5
    lwz r4, 0x8(r4)
    lis r5, lbl_807C1CE4@ha
    stb r7, 0x13(r1)
    addi r5, r5, lbl_807C1CE4@l
    lbzx r7, r6, r9
    extrwi r11, r4, 5, 22
    lbzx r28, r6, r11
    extrwi r9, r4, 5, 12
    lbzx r29, r6, r9
    addi r11, r1, 0x28
    stb r10, 0x14(r1)
    extrwi r9, r0, 8, 16
    lbzx r10, r6, r8
    extrwi r8, r4, 5, 7
    lbzx r30, r6, r8
    extrwi r8, r0, 8, 8
    stb r12, 0x12(r1)
    clrlwi r12, r4, 27
    lbzx r27, r6, r12
    stb r10, 0x11(r1)
    extrwi r10, r4, 5, 17
    lbzx r10, r6, r10
    stb r7, 0x10(r1)
    extrwi r7, r4, 5, 2
    lbzx r31, r6, r7
    srwi r4, r4, 30
    lbzx r12, r6, r4
    addi r6, r1, 0x10
    stb r10, 0x2c(r1)
    srwi r7, r0, 24
    clrlwi r10, r0, 24
    li r4, 0x15
    stb r26, 0x19(r1)
    stb r27, 0x2e(r1)
    stb r28, 0x2d(r1)
    stb r29, 0x2b(r1)
    stb r30, 0x2a(r1)
    stb r31, 0x29(r1)
    stb r12, 0x28(r1)
    stb r26, 0x2f(r1)
    stw r11, 0x8(r1)
    crclr 6
    bl fn_806809C0
    addi r11, r1, 0x60
    bl _restgpr_26
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_806D04E0(void)
{
    nofralloc
    lwz r7, 0x0(r3)
    lwz r8, 0x0(r4)
    extrwi r5, r7, 2, 19
    extrwi r0, r8, 2, 19
    cmplw r5, r0
    beq lbl_fn_806D04E0_00000F94
    li r3, 0x0
    blr
lbl_fn_806D04E0_00000F94:
    cmplwi r5, 0x3
    bne lbl_fn_806D04E0_00000FB4
    lwz r3, 0x4(r3)
    lwz r0, 0x4(r4)
    subf r0, r3, r0
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
lbl_fn_806D04E0_00000FB4:
    cmplwi r5, 0x1
    bne lbl_fn_806D04E0_00000FFC
    lwz r6, 0x4(r3)
    clrlwi r7, r7, 21
    lwz r5, 0x4(r4)
    clrlwi r0, r8, 21
    xor r0, r7, r0
    li r7, 0x0
    xor r5, r6, r5
    or. r0, r5, r0
    bne lbl_fn_806D04E0_00000FF4
    lwz r3, 0x8(r3)
    lwz r0, 0x8(r4)
    cmplw r3, r0
    bne lbl_fn_806D04E0_00000FF4
    li r7, 0x1
lbl_fn_806D04E0_00000FF4:
    mr r3, r7
    blr
lbl_fn_806D04E0_00000FFC:
    cmplwi r5, 0x2
    bne lbl_fn_806D04E0_0000102C
    lwz r6, 0x8(r3)
    lwz r0, 0x8(r4)
    lwz r5, 0x4(r3)
    lwz r3, 0x4(r4)
    xor r0, r6, r0
    xor r3, r5, r3
    or r0, r3, r0
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
lbl_fn_806D04E0_0000102C:
    li r3, 0x0
    blr
}

asm void fn_806D05A0(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    addi r11, r1, 0xa0
    bl _savegpr_21
    lwz r6, 0x0(r4)
    lis r31, lbl_807C1CB8@ha
    addi r31, r31, lbl_807C1CB8@l
    extrwi r0, r6, 2, 19
    srwi r5, r6, 11
    cmplwi r0, 0x2
    beq lbl_fn_806D05A0_000010D4
    cmplwi r0, 0x3
    beq lbl_fn_806D05A0_00001078
    cmplwi r0, 0x1
    beq lbl_fn_806D05A0_00001108
    b lbl_fn_806D05A0_00001270
lbl_fn_806D05A0_00001078:
    rlwinm r0, r5, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_806D05A0_00001098
    rlwinm r0, r5, 0, 28, 28
    cmplwi r0, 0x8
    bne lbl_fn_806D05A0_00001098
    li r0, 0x1
    b lbl_fn_806D05A0_0000109C
lbl_fn_806D05A0_00001098:
    li r0, 0x0
lbl_fn_806D05A0_0000109C:
    cmpwi r0, 0x0
    beq lbl_fn_806D05A0_000010BC
    lwz r5, 0x4(r4)
    addi r4, r31, 0x5c
    li r3, 0x4
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806D05A0_00001280
lbl_fn_806D05A0_000010BC:
    lwz r5, 0x4(r4)
    addi r4, r31, 0x70
    li r3, 0x4
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806D05A0_00001280
lbl_fn_806D05A0_000010D4:
    lwz r7, 0x8(r4)
    addi r3, r1, 0x10
    lwz r8, 0x4(r4)
    addi r5, r31, 0x0
    li r4, 0xd
    crclr 6
    bl fn_806809C0
    addi r4, r31, 0x80
    addi r5, r1, 0x10
    li r3, 0x4
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806D05A0_00001280
lbl_fn_806D05A0_00001108:
    lwz r5, 0x4(r4)
    li r24, 0x0
    lwz r4, 0x8(r4)
    clrlwi r26, r6, 21
    rotrwi r10, r5, 5
    lwz r0, 0x24(r3)
    rlwimi r10, r6, 27, 0, 4
    clrlwi r9, r5, 27
    rotrwi r12, r10, 5
    addi r3, r31, 0x8
    rlwimi r12, r6, 22, 0, 4
    lbzx r21, r3, r9
    rotrwi r11, r12, 5
    clrlwi r27, r10, 27
    rlwimi r11, r26, 17, 0, 4
    clrlwi r9, r12, 27
    lbzx r23, r3, r9
    rotrwi r10, r11, 5
    rlwimi r10, r26, 12, 0, 4
    lbzx r22, r3, r27
    rotrwi r12, r10, 5
    extrwi r7, r4, 5, 12
    lbzx r28, r3, r7
    clrlwi r27, r10, 27
    stb r22, 0x27(r1)
    clrlwi r10, r4, 27
    lbzx r22, r3, r27
    extrwi r6, r4, 5, 7
    lbzx r29, r3, r6
    extrwi r5, r4, 5, 2
    lbzx r30, r3, r5
    rlwimi r12, r26, 7, 0, 4
    clrlwi r9, r11, 27
    stb r21, 0x28(r1)
    lbzx r21, r3, r9
    rotrwi r11, r12, 5
    lbzx r25, r3, r10
    rlwimi r11, r26, 2, 0, 4
    extrwi r9, r4, 5, 22
    srwi r27, r26, 30
    lbzx r26, r3, r9
    rotrwi r10, r11, 5
    extrwi r8, r4, 5, 17
    clrlwi r9, r12, 27
    rlwimi r10, r27, 27, 0, 4
    stb r23, 0x26(r1)
    lbzx r23, r3, r9
    rotrwi r12, r10, 5
    rlwimi r12, r27, 22, 0, 4
    clrlwi r9, r11, 27
    clrlwi r27, r10, 27
    stb r21, 0x25(r1)
    lbzx r21, r3, r9
    srwi r4, r4, 30
    stb r23, 0x23(r1)
    addi r11, r1, 0x38
    lbzx r23, r3, r12
    addi r5, r31, 0x2c
    lbzx r12, r3, r4
    addi r6, r1, 0x20
    stb r22, 0x24(r1)
    srwi r7, r0, 24
    lbzx r22, r3, r27
    extrwi r9, r0, 8, 16
    lbzx r27, r3, r8
    addi r3, r1, 0x50
    stb r21, 0x22(r1)
    extrwi r8, r0, 8, 8
    clrlwi r10, r0, 24
    li r4, 0x15
    stb r22, 0x21(r1)
    stb r23, 0x20(r1)
    stb r24, 0x29(r1)
    stb r25, 0x3e(r1)
    stb r26, 0x3d(r1)
    stb r27, 0x3c(r1)
    stb r28, 0x3b(r1)
    stb r29, 0x3a(r1)
    stb r30, 0x39(r1)
    stb r12, 0x38(r1)
    stb r24, 0x3f(r1)
    stw r11, 0x8(r1)
    crclr 6
    bl fn_806809C0
    addi r4, r31, 0x90
    addi r5, r1, 0x50
    li r3, 0x4
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806D05A0_00001280
lbl_fn_806D05A0_00001270:
    addi r4, r31, 0xa0
    li r3, 0x4
    crclr 6
    bl fn_806A76B0
lbl_fn_806D05A0_00001280:
    addi r11, r1, 0xa0
    bl _restgpr_21
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_806D0810(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_807C1CB8@ha
    addi r31, r31, lbl_807C1CB8@l
    stw r30, 0x8(r1)
    mr r30, r3
    li r3, -0x1
    addi r4, r31, 0xac
    crclr 6
    bl fn_806A76B0
    addi r4, r31, 0xd0
    li r3, -0x1
    crclr 6
    bl fn_806A76B0
    mr r3, r30
    addi r4, r30, 0x4
    bl fn_806D05A0
    addi r4, r31, 0xe4
    li r3, -0x1
    crclr 6
    bl fn_806A76B0
    addi r4, r31, 0x108
    li r3, -0x1
    crclr 6
    bl fn_806A76B0
    mr r3, r30
    addi r4, r30, 0x10
    bl fn_806D05A0
    addi r4, r31, 0xe4
    li r3, -0x1
    crclr 6
    bl fn_806A76B0
    lwz r5, 0x1c(r30)
    addi r4, r31, 0x70
    li r3, -0x1
    crclr 6
    bl fn_806A76B0
    addi r4, r31, 0xac
    li r3, -0x1
    crclr 6
    bl fn_806A76B0
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806D08E0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x1d0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_808608C0@ha
    addi r31, r31, lbl_808608C0@l
    stw r30, 0x8(r1)
    mr r30, r3
    addi r3, r31, 0x0
    bl memset
    addi r3, r31, 0x1d0
    li r4, 0x0
    li r5, 0x174
    bl memset
    addi r3, r31, 0x360
    li r4, 0x0
    li r5, 0x20
    bl memset
    addi r4, r31, 0x0
    li r0, 0x0
    stw r0, 0x380(r31)
    li r3, 0x1
    stw r0, 0x384(r31)
    stw r30, 0x388(r31)
    stw r0, 0x1b8(r4)
    stw r0, 0x38c(r31)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806D0970(void)
{
    nofralloc
    lis r3, lbl_80860C48@ha
    lwz r3, lbl_80860C48@l(r3)
    blr
}

asm void fn_806D0980(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    lis r28, lbl_808608C0@ha
    lis r29, lbl_807C1DD8@ha
    addi r28, r28, lbl_808608C0@l
    mr r24, r3
    lwz r0, 0x384(r28)
    mr r25, r4
    mr r31, r5
    mr r30, r6
    cmpwi r0, 0x0
    mr r26, r7
    mr r27, r8
    addi r29, r29, lbl_807C1DD8@l
    beq lbl_fn_806D0980_00001480
    lwz r0, 0x384(r28)
    cmpwi r0, 0x1a
    beq lbl_fn_806D0980_00001480
    addi r4, r29, 0x120
    lis r3, 0x100
    crclr 6
    bl fn_806A76B0
    li r3, 0x0
    b lbl_fn_806D0980_000015B8
lbl_fn_806D0980_00001480:
    mr r12, r26
    li r3, 0x0
    li r4, 0x5b30
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    stw r3, 0x380(r28)
    bne lbl_fn_806D0980_000014B8
    addi r4, r29, 0x138
    lis r3, 0x100
    crclr 6
    bl fn_806A76B0
    li r3, 0x0
    b lbl_fn_806D0980_000015B8
lbl_fn_806D0980_000014B8:
    li r4, 0x0
    li r5, 0x5b30
    bl memset
    lwz r3, 0x380(r28)
    stw r26, 0x5b14(r3)
    lwz r3, 0x380(r28)
    stw r27, 0x5b18(r3)
    lwz r3, 0x380(r28)
    addi r3, r3, 0x4000
    bl fn_80697D34
    cmpwi r3, 0x0
    beq lbl_fn_806D0980_00001500
    mr r5, r3
    addi r4, r29, 0x14c
    lis r3, 0x100
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806D0980_0000159C
lbl_fn_806D0980_00001500:
    lis r3, fn_806D16C0@ha
    lis r4, fn_806D16E0@ha
    addi r3, r3, fn_806D16C0@l
    li r5, 0x11
    addi r4, r4, fn_806D16E0@l
    bl fn_8069FFF8
    cmpwi r3, 0x0
    bge lbl_fn_806D0980_00001534
    addi r4, r29, 0x170
    lis r3, 0x100
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806D0980_0000159C
lbl_fn_806D0980_00001534:
    lwz r3, 0x380(r28)
    mr r4, r24
    li r5, 0x1a
    addi r3, r3, 0x415e
    bl fn_80686A80
    lwz r3, 0x380(r28)
    mr r4, r25
    li r5, 0xc
    addi r3, r3, 0x4192
    bl fn_8068236C
    lwz r5, 0x380(r28)
    li r29, 0x1
    addi r3, r28, 0x0
    li r4, 0x0
    stw r29, 0x59c8(r5)
    li r5, 0x1d0
    bl memset
    addi r3, r28, 0x0
    li r0, 0x0
    stw r0, 0x1b8(r3)
    li r3, 0x1
    lwz r4, 0x380(r28)
    stw r30, 0x5b2c(r4)
    stw r31, 0x5b28(r4)
    stw r29, 0x384(r28)
    b lbl_fn_806D0980_000015B8
lbl_fn_806D0980_0000159C:
    lwz r4, 0x380(r28)
    li r3, 0x0
    li r5, 0x0
    lwz r12, 0x5b18(r4)
    mtctr r12
    bctrl
    li r3, 0x0
lbl_fn_806D0980_000015B8:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806D0B40(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    lis r30, lbl_808608C0@ha
    mr r26, r4
    addi r30, r30, lbl_808608C0@l
    mr r25, r3
    mr r27, r5
    mr r28, r6
    mr r29, r7
    addi r3, r30, 0x390
    li r4, 0x0
    li r5, 0x38
    bl memset
    addi r5, r30, 0x390
    li r31, 0x0
    lis r3, lbl_807C1F60@ha
    lis r4, lbl_807C1F64@ha
    stw r31, 0x34(r5)
    mr r7, r28
    mr r8, r29
    addi r3, r3, lbl_807C1F60@l
    addi r4, r4, lbl_807C1F64@l
    li r6, 0x0
    li r5, 0x0
    bl fn_806D0980
    lwz r4, 0x380(r30)
    li r0, 0x3
    addi r3, r30, 0x360
    stw r25, 0x41a4(r4)
    lwz r4, 0x380(r30)
    stw r26, 0x41a8(r4)
    lwz r4, 0x380(r30)
    stb r27, 0x41b0(r4)
    lwz r4, 0x380(r30)
    stb r31, 0x41b1(r4)
    lwz r4, 0x380(r30)
    stw r0, 0x59c8(r4)
    lwz r0, 0x360(r30)
    lwz r3, 0x4(r3)
    or. r0, r3, r0
    bne lbl_fn_806D0B40_00001690
    lwz r3, 0x380(r30)
    stw r31, 0x41ac(r3)
    b lbl_fn_806D0B40_0000169C
lbl_fn_806D0B40_00001690:
    lwz r3, 0x380(r30)
    li r0, 0x1
    stw r0, 0x41ac(r3)
lbl_fn_806D0B40_0000169C:
    addi r11, r1, 0x30
    li r3, 0x1
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806D0C30(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r3, 0x1062
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_808608C0@ha
    addi r31, r31, lbl_808608C0@l
    stw r30, 0x18(r1)
    lis r30, 0x8000
    stw r29, 0x14(r1)
    lis r29, lbl_807C1F68@ha
    stw r28, 0x10(r1)
    addi r28, r3, 0x4dd3
    b lbl_fn_806D0C30_00001724
lbl_fn_806D0C30_000016FC:
    lwz r0, 0xf8(r30)
    li r3, 0x0
    srwi r0, r0, 2
    mulhwu r0, r28, r0
    srwi r4, r0, 6
    bl OSSleepTicks
    addi r4, r29, lbl_807C1F68@l
    lis r3, 0x100
    crclr 6
    bl fn_806A76B0
lbl_fn_806D0C30_00001724:
    lwz r0, 0x384(r31)
    cmpwi r0, 0x18
    beq lbl_fn_806D0C30_000016FC
    lwz r0, 0x384(r31)
    cmpwi r0, 0x19
    bne lbl_fn_806D0C30_0000174C
    li r0, 0x1a
    stw r0, 0x384(r31)
    li r0, 0x1
    b lbl_fn_806D0C30_00001770
lbl_fn_806D0C30_0000174C:
    lwz r0, 0x384(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806D0C30_00001764
    lwz r0, 0x384(r31)
    cmpwi r0, 0x1a
    bne lbl_fn_806D0C30_0000176C
lbl_fn_806D0C30_00001764:
    li r0, 0x1
    b lbl_fn_806D0C30_00001770
lbl_fn_806D0C30_0000176C:
    li r0, 0x0
lbl_fn_806D0C30_00001770:
    cmpwi r0, 0x0
    beq lbl_fn_806D0C30_00001784
    li r0, -0x4e84
    stw r0, 0x0(r31)
    b lbl_fn_806D0C30_0000190C
lbl_fn_806D0C30_00001784:
    lwz r4, 0x380(r31)
    cmpwi r4, 0x0
    beq lbl_fn_806D0C30_0000190C
    li r0, 0x1
    lis r3, 0x1062
    stw r0, 0x59c0(r4)
    addi r30, r3, 0x4dd3
    li r28, 0x1
    lis r29, 0x8000
    b lbl_fn_806D0C30_000017FC
lbl_fn_806D0C30_000017AC:
    lwz r3, 0x384(r31)
    subi r0, r3, 0x2
    cmplwi r0, 0x6
    ble lbl_fn_806D0C30_000017D8
    subi r0, r3, 0xf
    cmplwi r0, 0x3
    ble lbl_fn_806D0C30_000017D8
    cmpwi r3, 0xb
    beq lbl_fn_806D0C30_000017D8
    cmpwi r3, 0xd
    bne lbl_fn_806D0C30_000017F8
lbl_fn_806D0C30_000017D8:
    bl fn_806D0EA0
    lwz r0, 0xf8(r29)
    li r3, 0x0
    srwi r0, r0, 2
    mulhwu r0, r30, r0
    srwi r4, r0, 6
    bl OSSleepTicks
    b lbl_fn_806D0C30_000017FC
lbl_fn_806D0C30_000017F8:
    li r28, 0x0
lbl_fn_806D0C30_000017FC:
    cmpwi r28, 0x0
    bne lbl_fn_806D0C30_000017AC
    lwz r0, 0x384(r31)
    cmpwi r0, 0x14
    bne lbl_fn_806D0C30_00001850
    lwz r3, 0x380(r31)
    lwz r3, 0x59c4(r3)
    bl fn_806A05F8
    lis r3, 0x1062
    lis r29, 0x8000
    addi r30, r3, 0x4dd3
lbl_fn_806D0C30_00001828:
    lwz r0, 0x0(r31)
    cmpwi r0, 0x0
    bne lbl_fn_806D0C30_00001850
    lwz r0, 0xf8(r29)
    li r3, 0x0
    srwi r0, r0, 2
    mulhwu r0, r30, r0
    srwi r4, r0, 6
    bl OSSleepTicks
    b lbl_fn_806D0C30_00001828
lbl_fn_806D0C30_00001850:
    addi r29, r31, 0x0
    lwz r0, 0x1c8(r29)
    cmpwi r0, 0x0
    beq lbl_fn_806D0C30_00001884
    lis r4, lbl_807C1F70@ha
    lis r3, 0x100
    addi r4, r4, lbl_807C1F70@l
    crclr 6
    bl fn_806A76B0
    lwz r3, 0x1c8(r29)
    bl fn_806A0638
    li r0, 0x0
    stw r0, 0x1c8(r29)
lbl_fn_806D0C30_00001884:
    lwz r0, 0x384(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806D0C30_000018FC
    lwz r0, 0x384(r31)
    cmpwi r0, 0x18
    beq lbl_fn_806D0C30_000018FC
    lwz r0, 0x384(r31)
    cmpwi r0, 0x19
    beq lbl_fn_806D0C30_000018FC
    lwz r0, 0x384(r31)
    cmpwi r0, 0x1a
    beq lbl_fn_806D0C30_000018FC
    li r0, 0x18
    lis r3, fn_806D2BD0@ha
    stw r0, 0x384(r31)
    addi r3, r3, fn_806D2BD0@l
    bl fn_806A0084
    lis r3, 0x1062
    lis r30, 0x8000
    addi r29, r3, 0x4dd3
    b lbl_fn_806D0C30_000018F0
lbl_fn_806D0C30_000018D8:
    lwz r0, 0xf8(r30)
    li r3, 0x0
    srwi r0, r0, 2
    mulhwu r0, r29, r0
    srwi r4, r0, 6
    bl OSSleepTicks
lbl_fn_806D0C30_000018F0:
    lwz r0, 0x384(r31)
    cmpwi r0, 0x18
    beq lbl_fn_806D0C30_000018D8
lbl_fn_806D0C30_000018FC:
    li r0, 0x1a
    stw r0, 0x384(r31)
    li r0, -0x4e84
    stw r0, 0x0(r31)
lbl_fn_806D0C30_0000190C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806D0EA0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_808608C0@ha
    addi r31, r31, lbl_808608C0@l
    stw r30, 0x18(r1)
    lis r30, lbl_807C1DD8@ha
    addi r30, r30, lbl_807C1DD8@l
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    lwz r0, 0x384(r31)
    cmplwi r0, 0x1a
    bgt lbl_fn_806D0EA0_00002000
    lis r3, jumptable_807C202C@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_807C202C@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lwz r5, 0x380(r31)
    lwz r0, 0x59c8(r5)
    cmpwi r0, 0x3
    bne lbl_fn_806D0EA0_000019A0
    li r0, 0x13
    stw r0, 0x384(r31)
    b lbl_fn_806D0EA0_00002000
lbl_fn_806D0EA0_000019A0:
    addi r3, r31, 0x360
    lwz r0, 0x360(r31)
    lwz r3, 0x4(r3)
    or. r0, r3, r0
    beq lbl_fn_806D0EA0_000019C0
    li r0, 0x13
    stw r0, 0x384(r31)
    b lbl_fn_806D0EA0_00002000
lbl_fn_806D0EA0_000019C0:
    lis r6, fn_806D1700@ha
    lwz r3, 0x18(r30)
    addi r4, r5, 0x5a88
    addi r7, r5, 0x59cc
    addi r6, r6, fn_806D1700@l
    li r5, 0x1
    bl NANDPrivateOpenAsync
    li r0, 0x2
    stw r0, 0x384(r31)
    b lbl_fn_806D0EA0_00002000
    lwz r3, 0x380(r31)
    lwz r0, 0x59b8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806D0EA0_00002000
    li r3, 0x3
    li r4, 0x1
    li r5, 0x9
    li r6, 0x7
    bl fn_806D2C40
    b lbl_fn_806D0EA0_00002000
    lwz r7, 0x380(r31)
    lis r6, fn_806D1700@ha
    addi r4, r31, 0x360
    li r5, 0x20
    addi r3, r7, 0x5a88
    addi r6, r6, fn_806D1700@l
    addi r7, r7, 0x59cc
    bl fn_8061E7D0
    li r0, 0x4
    stw r0, 0x384(r31)
    b lbl_fn_806D0EA0_00002000
    lwz r3, 0x380(r31)
    lwz r0, 0x59b8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806D0EA0_00002000
    lwz r5, 0x59bc(r3)
    cmplwi r5, 0x20
    bne lbl_fn_806D0EA0_00001A84
    addi r3, r31, 0x360
    lwz r5, 0x360(r31)
    lwz r6, 0x4(r3)
    addi r4, r30, 0x1b0
    lis r3, 0x100
    crclr 6
    bl fn_806A76B0
    lwz r3, 0x380(r31)
    li r0, 0x0
    stw r0, 0x59bc(r3)
    b lbl_fn_806D0EA0_00001AA8
lbl_fn_806D0EA0_00001A84:
    cmpwi r5, 0x0
    blt lbl_fn_806D0EA0_00001AA8
    addi r4, r30, 0x1c8
    lis r3, 0x100
    crclr 6
    bl fn_806A76B0
    lwz r3, 0x380(r31)
    li r0, -0x1
    stw r0, 0x59bc(r3)
lbl_fn_806D0EA0_00001AA8:
    li r3, 0x11
    li r4, 0x3
    li r5, 0x1b
    li r6, 0x5
    bl fn_806D2C40
    b lbl_fn_806D0EA0_00002000
    lwz r5, 0x380(r31)
    lis r4, fn_806D1700@ha
    addi r4, r4, fn_806D1700@l
    addi r3, r5, 0x5a88
    addi r5, r5, 0x59cc
    bl fn_8061FBE0
    li r0, 0x6
    stw r0, 0x384(r31)
    b lbl_fn_806D0EA0_00002000
    lwz r3, 0x380(r31)
    lwz r0, 0x59b8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806D0EA0_00002000
    li r3, 0x7
    li r4, 0x5
    li r5, 0x1b
    li r6, 0x1b
    bl fn_806D2C40
    b lbl_fn_806D0EA0_00002000
    lwz r5, 0x380(r31)
    lis r4, fn_806D1700@ha
    lwz r3, 0x18(r30)
    addi r4, r4, fn_806D1700@l
    addi r5, r5, 0x59cc
    bl fn_8061E6A0
    li r0, 0x8
    stw r0, 0x384(r31)
    b lbl_fn_806D0EA0_00002000
    lwz r3, 0x380(r31)
    lwz r0, 0x59b8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806D0EA0_00002000
    lwz r0, 0x59bc(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806D0EA0_00001B5C
    addi r4, r30, 0x1e8
    lis r3, 0x100
    crclr 6
    bl fn_806A76B0
lbl_fn_806D0EA0_00001B5C:
    li r3, 0x9
    li r4, 0x7
    li r5, 0x9
    li r6, 0x1b
    bl fn_806D2C40
    b lbl_fn_806D0EA0_00002000
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r8, 0x0
    li r7, 0x0
    bl fn_806D1720
    bl OSGetTime
    lwz r5, 0x380(r31)
    li r0, 0xa
    stw r4, 0x5b24(r5)
    stw r3, 0x5b20(r5)
    stw r0, 0x384(r31)
    b lbl_fn_806D0EA0_00002000
    lwz r0, 0x0(r31)
    cmpwi r0, 0x1
    bne lbl_fn_806D0EA0_00001BC0
    li r0, 0xb
    stw r0, 0x384(r31)
    b lbl_fn_806D0EA0_00002000
lbl_fn_806D0EA0_00001BC0:
    lwz r0, 0x0(r31)
    cmpwi r0, -0x5207
    blt lbl_fn_806D0EA0_00001BE4
    lwz r0, 0x0(r31)
    cmpwi r0, -0x4e86
    bgt lbl_fn_806D0EA0_00001BE4
    li r0, 0x17
    stw r0, 0x384(r31)
    b lbl_fn_806D0EA0_00002000
lbl_fn_806D0EA0_00001BE4:
    lwz r0, 0x0(r31)
    cmpwi r0, 0x0
    bge lbl_fn_806D0EA0_00001C28
    lwz r4, 0x380(r31)
    lwz r3, 0x59b4(r4)
    addi r0, r3, 0x1
    stw r0, 0x59b4(r4)
    lwz r3, 0x380(r31)
    lwz r0, 0x59b4(r3)
    cmpwi r0, 0x3
    bge lbl_fn_806D0EA0_00001C1C
    li r0, 0x9
    stw r0, 0x384(r31)
    b lbl_fn_806D0EA0_00002000
lbl_fn_806D0EA0_00001C1C:
    li r0, 0x17
    stw r0, 0x384(r31)
    b lbl_fn_806D0EA0_00002000
lbl_fn_806D0EA0_00001C28:
    bl OSGetTime
    lis r5, 0x8000
    lwz r6, 0x380(r31)
    lwz r0, 0xf8(r5)
    lis r5, 0x1062
    lwz r7, 0x5b24(r6)
    addi r5, r5, 0x4dd3
    srwi r0, r0, 2
    lwz r6, 0x5b20(r6)
    mulhwu r0, r5, r0
    subfc r4, r7, r4
    subfe r3, r6, r3
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
    beq lbl_fn_806D0EA0_00002000
    addi r4, r30, 0x204
    lis r3, 0x100
    crclr 6
    bl fn_806A76B0
    li r0, 0x15
    stw r0, 0x384(r31)
    b lbl_fn_806D0EA0_00002000
    lwz r4, 0x380(r31)
    lis r6, fn_806D1700@ha
    lwz r3, 0x18(r30)
    addi r6, r6, fn_806D1700@l
    addi r7, r4, 0x59cc
    li r4, 0x3f
    li r5, 0x0
    bl fn_8061E3F0
    li r0, 0xc
    stw r0, 0x384(r31)
    b lbl_fn_806D0EA0_00002000
    lwz r3, 0x380(r31)
    lwz r0, 0x59b8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806D0EA0_00002000
    li r3, 0xd
    li r4, 0xb
    li r5, 0x1b
    li r6, 0x1b
    bl fn_806D2C40
    b lbl_fn_806D0EA0_00002000
    lwz r5, 0x380(r31)
    lis r6, fn_806D1700@ha
    lwz r3, 0x18(r30)
    addi r6, r6, fn_806D1700@l
    addi r4, r5, 0x5a88
    addi r7, r5, 0x59cc
    li r5, 0x2
    bl NANDPrivateOpenAsync
    li r0, 0xe
    stw r0, 0x384(r31)
    b lbl_fn_806D0EA0_00002000
    lwz r3, 0x380(r31)
    lwz r0, 0x59b8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806D0EA0_00002000
    li r3, 0xf
    li r4, 0xd
    li r5, 0x1b
    li r6, 0x1b
    bl fn_806D2C40
    b lbl_fn_806D0EA0_00002000
    lwz r7, 0x380(r31)
    lis r6, fn_806D1700@ha
    addi r4, r31, 0x360
    li r5, 0x20
    addi r3, r7, 0x5a88
    addi r6, r6, fn_806D1700@l
    addi r7, r7, 0x59cc
    bl fn_8061E8C0
    li r0, 0x10
    stw r0, 0x384(r31)
    b lbl_fn_806D0EA0_00002000
    lwz r3, 0x380(r31)
    lwz r0, 0x59b8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806D0EA0_00002000
    lwz r5, 0x59bc(r3)
    cmplwi r5, 0x20
    bne lbl_fn_806D0EA0_00001DA0
    li r0, 0x0
    stw r0, 0x59bc(r3)
    b lbl_fn_806D0EA0_00001DBC
lbl_fn_806D0EA0_00001DA0:
    addi r4, r30, 0x21c
    lis r3, 0x100
    crclr 6
    bl fn_806A76B0
    lwz r3, 0x380(r31)
    li r0, -0x1
    stw r0, 0x59bc(r3)
lbl_fn_806D0EA0_00001DBC:
    li r3, 0x11
    li r4, 0xf
    li r5, 0x1b
    li r6, 0x1b
    bl fn_806D2C40
    b lbl_fn_806D0EA0_00002000
    lwz r5, 0x380(r31)
    lis r4, fn_806D1700@ha
    addi r4, r4, fn_806D1700@l
    addi r3, r5, 0x5a88
    addi r5, r5, 0x59cc
    bl fn_8061FBE0
    li r0, 0x12
    stw r0, 0x384(r31)
    b lbl_fn_806D0EA0_00002000
    lwz r3, 0x380(r31)
    lwz r0, 0x59b8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806D0EA0_00002000
    li r3, 0x13
    li r4, 0x11
    li r5, 0x1b
    li r6, 0x1b
    bl fn_806D2C40
    b lbl_fn_806D0EA0_00002000
    lwz r0, 0x38c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806D0EA0_00001E4C
    lwz r6, 0x380(r31)
    lwz r3, 0x59c8(r6)
    addi r4, r6, 0x415e
    lwz r7, 0x5b28(r6)
    addi r5, r6, 0x4192
    lwz r8, 0x5b2c(r6)
    bl fn_806D1720
    b lbl_fn_806D0EA0_00001E6C
lbl_fn_806D0EA0_00001E4C:
    lwz r6, 0x380(r31)
    addi r5, r31, 0x360
    lwz r8, 0x4(r5)
    lwz r7, 0x360(r31)
    addi r4, r6, 0x415e
    lwz r3, 0x59c8(r6)
    addi r5, r6, 0x4192
    bl fn_806D1720
lbl_fn_806D0EA0_00001E6C:
    bl OSGetTime
    lwz r5, 0x380(r31)
    li r0, 0x14
    stw r4, 0x5b24(r5)
    stw r3, 0x5b20(r5)
    stw r0, 0x384(r31)
    b lbl_fn_806D0EA0_00002000
    lwz r0, 0x0(r31)
    cmpwi r0, 0x1
    bne lbl_fn_806D0EA0_00001EA0
    li r0, 0x17
    stw r0, 0x384(r31)
    b lbl_fn_806D0EA0_00002000
lbl_fn_806D0EA0_00001EA0:
    lwz r0, 0x0(r31)
    cmpwi r0, -0x5207
    blt lbl_fn_806D0EA0_00001EC4
    lwz r0, 0x0(r31)
    cmpwi r0, -0x4e86
    bgt lbl_fn_806D0EA0_00001EC4
    li r0, 0x17
    stw r0, 0x384(r31)
    b lbl_fn_806D0EA0_00002000
lbl_fn_806D0EA0_00001EC4:
    lwz r0, 0x0(r31)
    cmpwi r0, 0x0
    bge lbl_fn_806D0EA0_00001F08
    lwz r4, 0x380(r31)
    lwz r3, 0x59b4(r4)
    addi r0, r3, 0x1
    stw r0, 0x59b4(r4)
    lwz r3, 0x380(r31)
    lwz r0, 0x59b4(r3)
    cmpwi r0, 0x3
    bge lbl_fn_806D0EA0_00001EFC
    li r0, 0x13
    stw r0, 0x384(r31)
    b lbl_fn_806D0EA0_00002000
lbl_fn_806D0EA0_00001EFC:
    li r0, 0x17
    stw r0, 0x384(r31)
    b lbl_fn_806D0EA0_00002000
lbl_fn_806D0EA0_00001F08:
    bl OSGetTime
    lis r5, 0x8000
    lwz r6, 0x380(r31)
    lwz r0, 0xf8(r5)
    lis r5, 0x1062
    lwz r7, 0x5b24(r6)
    addi r5, r5, 0x4dd3
    srwi r0, r0, 2
    lwz r6, 0x5b20(r6)
    mulhwu r0, r5, r0
    subfc r4, r7, r4
    subfe r3, r6, r3
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
    beq lbl_fn_806D0EA0_00002000
    addi r4, r30, 0x240
    lis r3, 0x100
    crclr 6
    bl fn_806A76B0
    li r0, 0x15
    stw r0, 0x384(r31)
    b lbl_fn_806D0EA0_00002000
    li r0, 0x16
    stw r0, 0x384(r31)
    lwz r3, 0x380(r31)
    lwz r3, 0x59c4(r3)
    bl fn_806A05F8
    b lbl_fn_806D0EA0_00002000
    lwz r0, 0x0(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806D0EA0_00002000
    li r0, -0x4e84
    stw r0, 0x0(r31)
    li r0, 0x17
    stw r0, 0x384(r31)
    b lbl_fn_806D0EA0_00002000
    addi r28, r31, 0x0
    li r3, 0x18
    lwz r0, 0x1c8(r28)
    li r29, 0x0
    stw r3, 0x384(r31)
    cmplw r0, r29
    beq lbl_fn_806D0EA0_00001FF4
    addi r4, r30, 0x198
    lis r3, 0x100
    crclr 6
    bl fn_806A76B0
    lwz r3, 0x1c8(r28)
    bl fn_806A0638
    stw r29, 0x1c8(r28)
lbl_fn_806D0EA0_00001FF4:
    lis r3, fn_806D2BD0@ha
    addi r3, r3, fn_806D2BD0@l
    bl fn_806A0084
lbl_fn_806D0EA0_00002000:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
