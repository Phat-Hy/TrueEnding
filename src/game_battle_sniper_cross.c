#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_14(void);
extern void _savegpr_14(void);
extern void dtor_80084684(void);
extern void fn_8000D430(void);
extern void fn_80056DB8(void);
extern void fn_80056E40(void);
extern void fn_80057F28(void);
extern void fn_8005B9CC(void);
extern void fn_8005BBF8(void);
extern void fn_8005BCE8(void);
extern void fn_80084320(void);
extern void fn_8008AD4C(void);
extern void fn_8008B140(void);
extern void fn_80096E94(void);
extern void fn_800971D4(void);
extern void fn_8009EE30(void);
extern void fn_800C344C(void);
extern void fn_800CB360(void);
extern void fn_800CB3A0(void);
extern void fn_800CB440(void);
extern void fn_800CB5C8(void);
extern void fn_80232B7C(void);
extern void fn_80237518(void);
extern void fn_802375C4(void);
extern void fn_80237654(void);
extern void fn_802376D0(void);
extern void fn_802377B8(void);
extern void fn_8023780C(void);
extern void fn_8023781C(void);
extern void fn_80237874(void);
extern void fn_80239DAC(void);
extern void fn_8023A02C(void);
extern void fn_8023A680(void);
extern void fn_8023A8B4(void);
extern void fn_803EC568(void);
extern void fn_803EC69C(void);
extern void fn_803EC7A0(void);
extern void fn_803EC91C(void);
extern void fn_803ED0D4(void);
extern void fn_803ED5D0(void);
extern void fn_803EDB18(void);
extern void fn_803EDCF4(void);
extern void fn_803F8324(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473E8C(void);
extern void fn_8049994C(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F9160(void);
extern void fn_805F9940(void);
extern void fn_80682428(void);
extern void fn_806958E0(void);
extern void fn_806959D8(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_807523B0[];
extern u8 lbl_807523EC[];
extern u8 lbl_807774B8[];
extern u8 lbl_807774D8[];
extern u8 lbl_807775F8[];
extern u8 lbl_80777668[];
extern u8 lbl_8078CCC8[];
extern u8 lbl_8078CD60[];
extern u8 lbl_807C7060[];

/* Small data declarations */
extern u32 lbl_8087D710;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F4A0;
extern u32 lbl_80885FF0;
extern u32 lbl_80886010;
extern u32 lbl_80886014;
extern u32 lbl_80886018;
extern u32 lbl_8088601C;

/* Function declarations */
void fn_803F68B4(void);
void fn_803F699C(void);
void fn_803F69C8(void);
void fn_803F69DC(void);
void fn_803F69E4(void);
void fn_803F6AC4(void);
void fn_803F6B04(void);
void fn_803F6B88(void);
void fn_803F6C48(void);
void fn_803F6C70(void);
void fn_803F6D48(void);
void fn_803F6D60(void);
void fn_803F6E0C(void);
void fn_803F70E4(void);
void fn_803F7178(void);
void fn_803F7198(void);
void fn_803F73F4(void);
void fn_803F744C(void);
void fn_803F74D0(void);
void fn_803F75B8(void);
void fn_803F76D8(void);
void fn_803F77B8(void);
void fn_803F7E7C(void);
void fn_803F7F30(void);

asm void fn_803F68B4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lfs f0, lbl_80885FF0
    cmplwi r4, 0x2
    stw r0, 0x34(r1)
    li r0, 0x0
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r0, 0x8(r1)
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    ble lbl_fn_803F68B4_00000058
    cmpwi r4, 0x3
    beq lbl_fn_803F68B4_0000007C
    cmpwi r4, 0x4
    beq lbl_fn_803F68B4_000000A0
    b lbl_fn_803F68B4_000000C0
lbl_fn_803F68B4_00000058:
    li r0, 0x1
    stw r0, 0x54(r3)
    addi r4, r1, 0x8
    stw r0, 0x8(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    b lbl_fn_803F68B4_000000C0
lbl_fn_803F68B4_0000007C:
    li r0, 0x3
    stw r0, 0x54(r3)
    addi r4, r1, 0x8
    stw r0, 0x8(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    b lbl_fn_803F68B4_000000C0
lbl_fn_803F68B4_000000A0:
    li r0, 0x4
    stw r0, 0x54(r3)
    addi r4, r1, 0x8
    stw r0, 0x8(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
lbl_fn_803F68B4_000000C0:
    lwz r3, 0xe4(r31)
    cmpwi r3, 0x0
    beq lbl_fn_803F68B4_000000D4
    li r0, 0x1
    stw r0, 0x58(r3)
lbl_fn_803F68B4_000000D4:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_803F699C(void)
{
    nofralloc
    cmpwi r4, 0x0
    beq lbl_fn_803F699C_000000FC
    cmpwi r4, 0x9
    beq lbl_fn_803F699C_00000104
    b lbl_fn_803F699C_0000010C
lbl_fn_803F699C_000000FC:
    lwz r3, 0x5e8(r3)
    blr
lbl_fn_803F699C_00000104:
    lwz r3, 0x5ec(r3)
    blr
lbl_fn_803F699C_0000010C:
    li r3, 0x0
    blr
}

asm void fn_803F69C8(void)
{
    nofralloc
    lwz r0, 0xf8(r3)
    stw r4, 0x2d0(r3)
    oris r0, r0, 0x1
    stw r0, 0xf8(r3)
    blr
}

asm void fn_803F69DC(void)
{
    nofralloc
    addi r3, r3, 0xf4
    blr
}

asm void fn_803F69E4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    beq lbl_fn_803F69E4_000001EC
    lis r5, lbl_807523B0@ha
    li r3, 0x178
    addi r5, r5, lbl_807523B0@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_803F69E4_000001E4
    mr r4, r28
    mr r5, r29
    mr r6, r31
    bl fn_803EC568
    lis r3, lbl_8078CCC8@ha
    lis r4, fn_803F6AC4@ha
    addi r3, r3, lbl_8078CCC8@l
    stw r3, 0x0(r30)
    li r31, 0x0
    lis r5, fn_803F6B04@ha
    stw r31, 0xf4(r30)
    addi r3, r30, 0xf8
    addi r4, r4, fn_803F6AC4@l
    addi r5, r5, fn_803F6B04@l
    li r6, 0x38
    li r7, 0x2
    bl fn_806958E0
    addi r3, r30, 0x168
    bl fn_800CB360
    li r0, 0x1
    stw r0, 0x170(r30)
    stw r31, 0x174(r30)
    stw r31, 0x54(r30)
lbl_fn_803F69E4_000001E4:
    mr r3, r30
    b lbl_fn_803F69E4_000001F0
lbl_fn_803F69E4_000001EC:
    li r3, 0x0
lbl_fn_803F69E4_000001F0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803F6AC4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80237518
    addi r3, r31, 0xc
    bl fn_802377B8
    li r0, 0x0
    stb r0, 0x18(r31)
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803F6B04(void)
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
    beq lbl_fn_803F6B04_000002B4
    addic. r31, r3, 0xc
    beq lbl_fn_803F6B04_00000298
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_803F6B04_00000298
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_803F6B04_00000298:
    mr r3, r29
    li r4, -0x1
    bl fn_802375C4
    cmpwi r30, 0x0
    ble lbl_fn_803F6B04_000002B4
    mr r3, r29
    bl dtor_80084684
lbl_fn_803F6B04_000002B4:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803F6B88(void)
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
    beq lbl_fn_803F6B88_00000378
    lis r5, lbl_8078CCC8@ha
    li r4, 0x0
    addi r5, r5, lbl_8078CCC8@l
    stw r5, 0x0(r3)
    li r5, 0x0
    addi r3, r3, 0x168
    bl fn_800CB5C8
    lwz r3, 0x174(r30)
    cmpwi r3, 0x0
    beq lbl_fn_803F6B88_00000338
    beq lbl_fn_803F6B88_00000338
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_803F6B88_00000338:
    addi r3, r30, 0x168
    li r4, -0x1
    bl fn_800CB3A0
    lis r4, fn_803F6B04@ha
    addi r3, r30, 0xf8
    addi r4, r4, fn_803F6B04@l
    li r5, 0x38
    li r6, 0x2
    bl fn_806959D8
    mr r3, r30
    li r4, 0x0
    bl fn_803EC69C
    cmpwi r31, 0x0
    ble lbl_fn_803F6B88_00000378
    mr r3, r30
    bl dtor_80084684
lbl_fn_803F6B88_00000378:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803F6C48(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_803EC91C
    cntlzw r0, r3
    srwi r3, r0, 5
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803F6C70(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x54(r3)
    cmpwi r0, 0x0
    bne lbl_fn_803F6C70_0000041C
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x0
    li r6, 0x1
    bl fn_80239DAC
    addi r3, r31, 0x168
    li r4, 0xa
    li r5, 0x0
    bl fn_800CB5C8
    li r0, 0x0
    stw r0, 0xf4(r31)
    mr r3, r31
    lwz r12, 0x0(r31)
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
lbl_fn_803F6C70_0000041C:
    lwz r4, 0x174(r31)
    cmpwi r4, 0x0
    beq lbl_fn_803F6C70_00000434
    mr r3, r31
    li r5, 0x1
    bl fn_803ED0D4
lbl_fn_803F6C70_00000434:
    lwz r3, 0x54(r31)
    subi r0, r3, 0x2
    cmplwi r0, 0x1
    ble lbl_fn_803F6C70_00000468
    cmpwi r3, 0x1
    bne lbl_fn_803F6C70_00000480
    lwz r0, 0xf4(r31)
    cmpwi r0, 0x0
    beq lbl_fn_803F6C70_00000480
    mr r3, r31
    li r4, 0x1
    bl fn_803F7198
    b lbl_fn_803F6C70_00000480
lbl_fn_803F6C70_00000468:
    lwz r0, 0xf4(r31)
    cmpwi r0, 0x0
    bne lbl_fn_803F6C70_00000480
    mr r3, r31
    li r4, 0x0
    bl fn_803F7198
lbl_fn_803F6C70_00000480:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803F6D48(void)
{
    nofralloc
    lwz r4, lbl_8087F0A8
    lwz r0, 0x74(r4)
    cmpwi r0, 0x0
    beqlr
    b fn_803EDCF4
    blr
}

asm void fn_803F6D60(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    addi r31, r3, 0xf8
    stw r30, 0x18(r1)
    addi r30, r3, 0x104
    stw r29, 0x14(r1)
    li r29, 0x0
    stw r28, 0x10(r1)
    mr r28, r3
lbl_fn_803F6D60_000004D8:
    mr r3, r31
    bl fn_802376D0
    cmpwi r3, 0x0
    bne lbl_fn_803F6D60_000004F8
    mr r3, r30
    bl fn_80237874
    cmpwi r3, 0x0
    beq lbl_fn_803F6D60_00000500
lbl_fn_803F6D60_000004F8:
    li r3, 0x1
    b lbl_fn_803F6D60_00000538
lbl_fn_803F6D60_00000500:
    addi r29, r29, 0x1
    addi r30, r30, 0x38
    cmpwi r29, 0x2
    addi r31, r31, 0x38
    blt lbl_fn_803F6D60_000004D8
    lwz r3, 0x174(r28)
    cmpwi r3, 0x0
    beq lbl_fn_803F6D60_00000534
    bl fn_8008B140
    cmpwi r3, 0x0
    beq lbl_fn_803F6D60_00000534
    li r3, 0x1
    b lbl_fn_803F6D60_00000538
lbl_fn_803F6D60_00000534:
    li r3, 0x0
lbl_fn_803F6D60_00000538:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803F6E0C(void)
{
    nofralloc
    stwu r1, -0x660(r1)
    mflr r0
    stw r0, 0x664(r1)
    stmw r27, 0x64c(r1)
    mr r31, r3
    addi r3, r3, 0x60
    bl fn_8047059C
    mr r29, r3
    addi r3, r31, 0x60
    bl fn_80470580
    lis r4, lbl_807774D8@ha
    li r0, 0x0
    addi r4, r4, lbl_807774D8@l
    stw r4, 0x8(r1)
    mr r30, r3
    addi r3, r1, 0x18
    stw r0, 0xc(r1)
    li r4, 0x0
    li r5, 0x400
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x638(r1)
    bl memset
    addi r3, r1, 0x618
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x8(r1)
    mr r4, r30
    mr r5, r29
    addi r3, r1, 0x8
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807774B8@ha
    addi r3, r1, 0x8
    addi r4, r4, lbl_807774B8@l
    stw r4, 0x8(r1)
    la r4, lbl_8087D710
    bl fn_8005BCE8
    lis r30, lbl_807523B0@ha
    addi r30, r30, lbl_807523B0@l
lbl_fn_803F6E0C_00000600:
    addi r3, r1, 0x8
    bl fn_8005B9CC
    lbz r0, 0x0(r3)
    mr r28, r3
    cmpwi r0, 0x3b
    beq lbl_fn_803F6E0C_0000080C
    addi r4, r30, 0x1
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803F6E0C_00000684
    mr r5, r30
    mr r6, r30
    li r3, 0x3d0
    li r4, 0xc
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_803F6E0C_00000654
    li r4, 0x8
    li r5, 0x20
    bl fn_80096E94
lbl_fn_803F6E0C_00000654:
    stw r3, 0x174(r31)
    addi r3, r1, 0x8
    bl fn_8005B9CC
    mr r4, r3
    lwz r3, 0x174(r31)
    li r5, 0x0
    bl fn_8008AD4C
    lwz r4, 0x174(r31)
    mr r3, r31
    addi r5, r1, 0x8
    bl fn_803EC7A0
    b lbl_fn_803F6E0C_0000080C
lbl_fn_803F6E0C_00000684:
    mr r3, r28
    addi r4, r30, 0x7
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803F6E0C_000006D4
    addi r28, r31, 0xf8
    li r29, 0x0
lbl_fn_803F6E0C_000006A0:
    addi r3, r1, 0x8
    bl fn_8005B9CC
    bl strlen
    cmpwi r3, 0x0
    beq lbl_fn_803F6E0C_000006C0
    mr r3, r28
    addi r4, r1, 0x18
    bl fn_80237654
lbl_fn_803F6E0C_000006C0:
    addi r29, r29, 0x1
    addi r28, r28, 0x38
    cmpwi r29, 0x2
    blt lbl_fn_803F6E0C_000006A0
    b lbl_fn_803F6E0C_0000080C
lbl_fn_803F6E0C_000006D4:
    mr r3, r28
    addi r4, r30, 0xb
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803F6E0C_00000724
    addi r28, r31, 0x104
    li r29, 0x0
lbl_fn_803F6E0C_000006F0:
    addi r3, r1, 0x8
    bl fn_8005B9CC
    bl strlen
    cmpwi r3, 0x0
    beq lbl_fn_803F6E0C_00000710
    mr r3, r28
    addi r4, r1, 0x18
    bl fn_8023780C
lbl_fn_803F6E0C_00000710:
    addi r29, r29, 0x1
    addi r28, r28, 0x38
    cmpwi r29, 0x2
    blt lbl_fn_803F6E0C_000006F0
    b lbl_fn_803F6E0C_0000080C
lbl_fn_803F6E0C_00000724:
    mr r3, r28
    addi r4, r30, 0xf
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803F6E0C_00000780
    addi r28, r31, 0x110
    li r27, 0x0
lbl_fn_803F6E0C_00000740:
    addi r3, r1, 0x8
    bl fn_8005B9CC
    cmplw r3, r28
    mr r29, r3
    beq lbl_fn_803F6E0C_0000076C
    bl strlen
    mr r5, r3
    mr r3, r28
    mr r4, r29
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_803F6E0C_0000076C:
    addi r27, r27, 0x1
    addi r28, r28, 0x38
    cmpwi r27, 0x2
    blt lbl_fn_803F6E0C_00000740
    b lbl_fn_803F6E0C_0000080C
lbl_fn_803F6E0C_00000780:
    mr r3, r28
    addi r4, r30, 0x12
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803F6E0C_000007D4
    addi r3, r1, 0x8
    bl fn_8005B9CC
    b lbl_fn_803F6E0C_000007C4
lbl_fn_803F6E0C_000007A0:
    addi r4, r30, 0x17
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803F6E0C_000007BC
    lwz r0, 0x16c(r31)
    ori r0, r0, 0x1
    stw r0, 0x16c(r31)
lbl_fn_803F6E0C_000007BC:
    addi r3, r1, 0x8
    bl fn_8005B9CC
lbl_fn_803F6E0C_000007C4:
    lbz r0, 0x0(r3)
    extsb. r0, r0
    bne lbl_fn_803F6E0C_000007A0
    b lbl_fn_803F6E0C_0000080C
lbl_fn_803F6E0C_000007D4:
    mr r3, r28
    addi r4, r30, 0x23
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803F6E0C_0000080C
    addi r3, r1, 0x8
    bl fn_8005B9CC
    addi r4, r30, 0x28
    bl fn_80682428
    cmpwi r3, 0x0
    li r0, 0x1
    bne lbl_fn_803F6E0C_00000808
    li r0, 0x3
lbl_fn_803F6E0C_00000808:
    stw r0, 0x170(r31)
lbl_fn_803F6E0C_0000080C:
    addi r3, r1, 0x8
    bl fn_8005BBF8
    cmpwi r3, 0x0
    bne lbl_fn_803F6E0C_00000600
    lmw r27, 0x64c(r1)
    lwz r0, 0x664(r1)
    mtlr r0
    addi r1, r1, 0x660
    blr
}

asm void fn_803F70E4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    lwz r12, 0x0(r3)
    lwz r12, 0x2c(r12)
    mtctr r12
    bctrl
    lfs f0, lbl_80886010
    li r0, 0x0
    stw r0, 0x8(r1)
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    lwz r0, 0x58(r31)
    cmpwi r0, 0x0
    bne lbl_fn_803F70E4_00000890
    lwz r0, 0x170(r31)
    b lbl_fn_803F70E4_00000894
lbl_fn_803F70E4_00000890:
    li r0, 0x3
lbl_fn_803F70E4_00000894:
    stw r0, 0x8(r1)
    mr r3, r31
    addi r4, r1, 0x8
    lwz r12, 0x0(r31)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_803F7178(void)
{
    nofralloc
    cmpwi r4, 0x0
    bne lbl_fn_803F7178_000008D4
    li r3, 0x0
    blr
lbl_fn_803F7178_000008D4:
    lwz r0, 0x0(r4)
    stw r0, 0x54(r3)
    mr r3, r0
    blr
}

asm void fn_803F7198(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    li r5, 0x0
    li r6, 0x1
    stw r0, 0x74(r1)
    stw r31, 0x6c(r1)
    stw r30, 0x68(r1)
    mr r30, r4
    stw r29, 0x64(r1)
    mr r29, r3
    mr r4, r29
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    addi r3, r29, 0x168
    li r4, 0xa
    li r5, 0x0
    bl fn_800CB5C8
    mulli r0, r30, 0x38
    cmpwi r30, 0x0
    add r3, r29, r0
    addi r31, r3, 0xf8
    bne lbl_fn_803F7198_00000948
    lwz r3, lbl_8087F3C0
    li r0, 0x1
    stw r0, 0xb8(r3)
lbl_fn_803F7198_00000948:
    mr r3, r29
    li r4, 0x0
    bl fn_80232B7C
    lwz r0, 0x0(r31)
    cmpwi r0, 0x0
    beq lbl_fn_803F7198_000009EC
    lwz r7, 0x174(r29)
    cmpwi r7, 0x0
    beq lbl_fn_803F7198_000009AC
    li r0, 0x0
    stw r0, 0x8(r1)
    li r3, -0x1
    lfs f1, lbl_80886014
    stw r3, 0xc(r1)
    li r0, 0x1
    mr r4, r31
    li r5, -0x1
    stw r0, 0x10(r1)
    li r6, 0x4
    li r8, 0x0
    li r9, 0x0
    lwz r3, lbl_8087F3C0
    li r10, 0x0
    bl fn_8023A680
    b lbl_fn_803F7198_000009EC
lbl_fn_803F7198_000009AC:
    li r0, 0x0
    stw r0, 0x8(r1)
    li r3, -0x1
    lfs f1, lbl_80886014
    stw r3, 0xc(r1)
    li r0, 0x1
    mr r4, r31
    addi r8, r29, 0x6c
    stw r0, 0x10(r1)
    addi r9, r29, 0x78
    li r5, -0x1
    li r6, 0x0
    lwz r3, lbl_8087F3C0
    li r7, 0x0
    li r10, 0x0
    bl fn_8023A680
lbl_fn_803F7198_000009EC:
    lwz r5, 0x174(r29)
    cmpwi r5, 0x0
    beq lbl_fn_803F7198_00000A5C
    lfs f0, lbl_80886010
    li r3, -0x1
    lfs f1, lbl_80886014
    li r0, 0x1
    stfs f0, 0x3c(r1)
    addi r4, r31, 0xc
    addi r7, r1, 0x30
    addi r8, r1, 0x3c
    stfs f0, 0x40(r1)
    addi r9, r1, 0x48
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x44(r1)
    stfs f0, 0x30(r1)
    stfs f0, 0x34(r1)
    stfs f0, 0x38(r1)
    stfs f1, 0x48(r1)
    stfs f1, 0x4c(r1)
    stfs f1, 0x50(r1)
    stfs f1, 0x54(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    b lbl_fn_803F7198_00000AA4
lbl_fn_803F7198_00000A5C:
    lfs f1, lbl_80886014
    li r3, -0x1
    stfs f1, 0x20(r1)
    li r0, 0x1
    addi r4, r31, 0xc
    addi r7, r29, 0x6c
    stfs f1, 0x24(r1)
    addi r8, r29, 0x78
    addi r9, r1, 0x20
    li r5, 0x0
    stfs f1, 0x28(r1)
    li r6, 0x0
    li r10, -0x1
    stfs f1, 0x2c(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
lbl_fn_803F7198_00000AA4:
    lwz r0, 0x16c(r29)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_803F7198_00000AC8
    lwz r3, lbl_8087F3C0
    mr r4, r29
    li r5, 0x0
    li r6, 0x8
    bl fn_8023A02C
lbl_fn_803F7198_00000AC8:
    cmpwi r30, 0x0
    bne lbl_fn_803F7198_00000ADC
    lwz r3, lbl_8087F3C0
    li r0, 0x0
    stw r0, 0xb8(r3)
lbl_fn_803F7198_00000ADC:
    lfs f1, lbl_80886014
    addi r3, r1, 0x18
    addi r4, r31, 0x18
    addi r5, r29, 0x6c
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    cmpwi r30, 0x0
    bne lbl_fn_803F7198_00000B0C
    addi r3, r29, 0x168
    addi r4, r1, 0x18
    bl fn_800CB440
lbl_fn_803F7198_00000B0C:
    cntlzw r0, r30
    addi r3, r1, 0x18
    srwi r0, r0, 5
    stw r0, 0xf4(r29)
    li r4, -0x1
    bl fn_800CB3A0
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    lwz r29, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_803F73F4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lfs f0, lbl_80886010
    stw r0, 0x34(r1)
    li r0, 0x0
    stw r4, 0x8(r1)
    addi r4, r1, 0x8
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_803F744C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_fn_803F744C_00000BFC
    lis r5, lbl_807523EC@ha
    li r3, 0x9b8
    addi r5, r5, lbl_807523EC@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_803F744C_00000C00
    mr r4, r29
    mr r5, r30
    mr r6, r31
    bl fn_803F75B8
    b lbl_fn_803F744C_00000C00
lbl_fn_803F744C_00000BFC:
    li r3, 0x0
lbl_fn_803F744C_00000C00:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803F74D0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r4
    stw r30, 0x28(r1)
    mr r30, r3
    beq lbl_fn_803F74D0_00000CE8
    lis r5, lbl_807523EC@ha
    li r3, 0x9b8
    addi r5, r5, lbl_807523EC@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_803F74D0_00000C7C
    lwz r5, 0x18(r31)
    mr r4, r30
    lwz r0, 0x20(r31)
    lwz r6, 0x1c(r31)
    add r5, r5, r0
    bl fn_803F75B8
lbl_fn_803F74D0_00000C7C:
    cmpwi r3, 0x0
    beq lbl_fn_803F74D0_00000CEC
    lfs f2, 0xc(r31)
    addi r4, r1, 0x14
    psq_l f1, 0x4(r31), 0, 0
    addi r5, r1, 0x8
    psq_st f1, 0x6c(r3), 0, 0
    lfs f0, lbl_8088601C
    stfs f2, 0x74(r3)
    lfs f3, lbl_80886018
    lfs f4, 0x14(r31)
    stfs f3, 0x14(r1)
    fmr f2, f3
    stfs f4, 0x18(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x78(r3), 0, 0
    stfs f2, 0x80(r3)
    fmr f2, f0
    stfs f0, 0x8(r1)
    stfs f0, 0xc(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x90(r3), 0, 0
    stfs f2, 0x98(r3)
    stfs f3, 0x1c(r1)
    stfs f0, 0x10(r1)
    stw r31, 0x9b0(r3)
    b lbl_fn_803F74D0_00000CEC
lbl_fn_803F74D0_00000CE8:
    li r3, 0x0
lbl_fn_803F74D0_00000CEC:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_803F75B8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    bl fn_803EC568
    lis r4, lbl_8078CD60@ha
    addi r3, r28, 0xf4
    addi r4, r4, lbl_8078CD60@l
    stw r4, 0x0(r28)
    li r4, 0x8
    li r5, 0x20
    bl fn_80096E94
    li r31, 0x0
    stw r31, 0x4c4(r28)
    addi r3, r28, 0x4c8
    bl fn_80057F28
    addi r30, r28, 0x554
    stw r31, 0x550(r28)
    li r4, 0x2
    mr r3, r30
    bl fn_80056DB8
    lis r3, lbl_807775F8@ha
    addi r29, r28, 0x8d0
    addi r3, r3, lbl_807775F8@l
    stw r3, 0x0(r30)
    mr r3, r29
    li r4, 0x0
    stw r31, 0x8cc(r28)
    bl fn_80056DB8
    lis r3, lbl_80777668@ha
    stw r31, 0x91c(r28)
    addi r3, r3, lbl_80777668@l
    stw r3, 0x0(r29)
    addi r3, r28, 0x920
    bl fn_80237518
    addi r3, r28, 0x92c
    bl fn_802377B8
    lfs f0, lbl_80886018
    li r0, 0x1
    stw r31, 0x968(r28)
    mr r3, r28
    stw r31, 0x96c(r28)
    stw r31, 0x970(r28)
    stfs f0, 0x974(r28)
    stfs f0, 0x978(r28)
    stfs f0, 0x97c(r28)
    stfs f0, 0x980(r28)
    stfs f0, 0x984(r28)
    stfs f0, 0x988(r28)
    stfs f0, 0x98c(r28)
    stfs f0, 0x990(r28)
    stfs f0, 0x994(r28)
    stfs f0, 0x998(r28)
    stfs f0, 0x99c(r28)
    stfs f0, 0x9a0(r28)
    stfs f0, 0x9a4(r28)
    stw r0, 0x9a8(r28)
    stw r31, 0x9ac(r28)
    stw r31, 0x9b0(r28)
    stw r31, 0x54(r28)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803F76D8(void)
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
    beq lbl_fn_803F76D8_00000EE4
    addic. r31, r3, 0x92c
    beq lbl_fn_803F76D8_00000E6C
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_803F76D8_00000E6C
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_803F76D8_00000E6C:
    addi r3, r29, 0x920
    li r4, -0x1
    bl fn_802375C4
    addic. r3, r29, 0x8d0
    beq lbl_fn_803F76D8_00000E88
    li r4, 0x0
    bl fn_80056E40
lbl_fn_803F76D8_00000E88:
    addic. r3, r29, 0x554
    beq lbl_fn_803F76D8_00000E98
    li r4, 0x0
    bl fn_80056E40
lbl_fn_803F76D8_00000E98:
    addic. r31, r29, 0x4c8
    beq lbl_fn_803F76D8_00000EBC
    addic. r3, r31, 0x3c
    beq lbl_fn_803F76D8_00000EB0
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_803F76D8_00000EB0:
    mr r3, r31
    li r4, 0x0
    bl fn_80056E40
lbl_fn_803F76D8_00000EBC:
    addi r3, r29, 0xf4
    li r4, -0x1
    bl fn_800971D4
    mr r3, r29
    li r4, 0x0
    bl fn_803EC69C
    cmpwi r30, 0x0
    ble lbl_fn_803F76D8_00000EE4
    mr r3, r29
    bl dtor_80084684
lbl_fn_803F76D8_00000EE4:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803F77B8(void)
{
    nofralloc
    stwu r1, -0x420(r1)
    mflr r0
    stw r0, 0x424(r1)
    addi r11, r1, 0x3e0
    stfd f31, 0x410(r1)
    psq_st f31, 0x418(r1), 0, 0
    stfd f30, 0x400(r1)
    psq_st f30, 0x408(r1), 0, 0
    stfd f29, 0x3f0(r1)
    psq_st f29, 0x3f8(r1), 0, 0
    stfd f28, 0x3e0(r1)
    psq_st f28, 0x3e8(r1), 0, 0
    bl _savegpr_14
    mr r15, r3
    bl fn_803EC91C
    cmpwi r3, 0x0
    bne lbl_fn_803F77B8_0000158C
    lwz r0, 0x4c4(r15)
    cmpwi r0, 0x0
    beq lbl_fn_803F77B8_00000F60
    mr r3, r15
    addi r4, r15, 0xf4
    bl fn_803EDB18
lbl_fn_803F77B8_00000F60:
    lwz r3, 0x968(r15)
    cmpwi r3, 0x0
    beq lbl_fn_803F77B8_00001584
    lwz r18, 0x70(r3)
    addi r20, r1, 0x44
    lfs f30, lbl_80886018
    addi r19, r1, 0x38
    lfs f31, lbl_8088601C
    addi r21, r1, 0x98
    addi r25, r1, 0x338
    addi r24, r1, 0x2d8
    addi r22, r1, 0xf8
    addi r23, r1, 0x158
    addi r26, r1, 0x1b8
    addi r30, r1, 0x368
    addi r29, r1, 0x308
    addi r27, r1, 0x218
    addi r28, r1, 0x278
    addi r14, r1, 0x80
    b lbl_fn_803F77B8_0000157C
lbl_fn_803F77B8_00000FB0:
    lwz r0, 0x48(r18)
    cmpwi r0, 0x0
    beq lbl_fn_803F77B8_00000FD0
    cmpwi r0, 0x4
    beq lbl_fn_803F77B8_000012D0
    cmpwi r0, 0x5
    beq lbl_fn_803F77B8_000014C8
    b lbl_fn_803F77B8_00001578
lbl_fn_803F77B8_00000FD0:
    addi r16, r18, 0x50
    psq_l f1, 0x8(r16), 0, 0
    psq_l f2, 0x10(r16), 0, 0
    psq_l f3, 0x18(r16), 0, 0
    psq_l f4, 0x20(r16), 0, 0
    psq_l f5, 0x28(r16), 0, 0
    psq_l f6, 0x30(r16), 0, 0
    psq_st f6, 0x28(r30), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    stfs f30, 0x334(r1)
    stfs f30, 0x32c(r1)
    stfs f30, 0x328(r1)
    stfs f30, 0x324(r1)
    stfs f30, 0x320(r1)
    stfs f30, 0x318(r1)
    stfs f30, 0x314(r1)
    stfs f30, 0x310(r1)
    stfs f30, 0x30c(r1)
    stfs f31, 0x330(r1)
    stfs f31, 0x31c(r1)
    stfs f31, 0x308(r1)
    lfs f1, 0x80(r15)
    fcmpu cr0, f30, f1
    beq lbl_fn_803F77B8_0000108C
    addi r3, r1, 0x1e8
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0x1e8
    addi r5, r1, 0x1b8
    bl fn_805F89F0
    psq_l f1, 0x0(r26), 0, 0
    psq_l f2, 0x8(r26), 0, 0
    psq_l f3, 0x10(r26), 0, 0
    psq_l f4, 0x18(r26), 0, 0
    psq_l f5, 0x20(r26), 0, 0
    psq_l f6, 0x28(r26), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
lbl_fn_803F77B8_0000108C:
    lfs f1, 0x7c(r15)
    fcmpu cr0, f30, f1
    beq lbl_fn_803F77B8_000010E4
    addi r3, r1, 0x248
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0x248
    addi r5, r1, 0x218
    bl fn_805F89F0
    psq_l f1, 0x0(r27), 0, 0
    psq_l f2, 0x8(r27), 0, 0
    psq_l f3, 0x10(r27), 0, 0
    psq_l f4, 0x18(r27), 0, 0
    psq_l f5, 0x20(r27), 0, 0
    psq_l f6, 0x28(r27), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
lbl_fn_803F77B8_000010E4:
    lfs f1, 0x78(r15)
    fcmpu cr0, f30, f1
    beq lbl_fn_803F77B8_0000113C
    addi r3, r1, 0x2a8
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0x2a8
    addi r5, r1, 0x278
    bl fn_805F89F0
    psq_l f1, 0x0(r28), 0, 0
    psq_l f2, 0x8(r28), 0, 0
    psq_l f3, 0x10(r28), 0, 0
    psq_l f4, 0x18(r28), 0, 0
    psq_l f5, 0x20(r28), 0, 0
    psq_l f6, 0x28(r28), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
lbl_fn_803F77B8_0000113C:
    addi r4, r1, 0x368
    addi r3, r1, 0x308
    mr r5, r4
    bl fn_805F89F0
    lfs f9, 0x394(r1)
    addi r3, r1, 0x14
    lfs f10, 0x384(r1)
    lfs f11, 0x374(r1)
    lfs f8, 0x74(r15)
    lfs f7, 0x70(r15)
    lfs f0, 0x6c(r15)
    fadds f8, f9, f8
    fadds f7, f10, f7
    psq_l f3, 0x10(r30), 0, 0
    fadds f0, f11, f0
    stfs f8, 0x394(r1)
    psq_l f5, 0x20(r30), 0, 0
    stfs f0, 0x374(r1)
    psq_l f6, 0x28(r30), 0, 0
    stfs f7, 0x384(r1)
    psq_l f2, 0x8(r30), 0, 0
    psq_l f4, 0x18(r30), 0, 0
    psq_l f1, 0x0(r30), 0, 0
    psq_st f1, 0x8(r16), 0, 0
    psq_st f2, 0x10(r16), 0, 0
    psq_st f3, 0x18(r16), 0, 0
    psq_st f4, 0x20(r16), 0, 0
    psq_st f5, 0x28(r16), 0, 0
    psq_st f6, 0x30(r16), 0, 0
    lfs f28, 0x390(r1)
    lfs f13, 0x380(r1)
    lfs f12, 0x370(r1)
    stfs f11, 0x68(r1)
    stfs f10, 0x6c(r1)
    stfs f9, 0x70(r1)
    stfs f0, 0x74(r1)
    stfs f7, 0x78(r1)
    stfs f8, 0x7c(r1)
    stfs f12, 0x14(r1)
    stfs f13, 0x18(r1)
    stfs f28, 0x1c(r1)
    bl fn_805F9940
    lfs f8, 0x38c(r1)
    fmr f28, f1
    lfs f7, 0x37c(r1)
    addi r3, r1, 0x20
    lfs f0, 0x36c(r1)
    stfs f0, 0x20(r1)
    stfs f7, 0x24(r1)
    stfs f8, 0x28(r1)
    bl fn_805F9940
    lfs f8, 0x388(r1)
    fmr f29, f1
    lfs f7, 0x378(r1)
    addi r3, r1, 0x2c
    lfs f0, 0x368(r1)
    stfs f0, 0x2c(r1)
    stfs f7, 0x30(r1)
    stfs f8, 0x34(r1)
    bl fn_805F9940
    frsp f7, f29
    stfs f1, 0x8(r1)
    frsp f0, f28
    stfs f29, 0xc(r1)
    fcmpo cr0, f7, f0
    stfs f28, 0x10(r1)
    ble lbl_fn_803F77B8_0000124C
    b lbl_fn_803F77B8_00001250
lbl_fn_803F77B8_0000124C:
    fmr f7, f0
lbl_fn_803F77B8_00001250:
    lfs f8, 0x8(r1)
    fcmpo cr0, f8, f7
    ble lbl_fn_803F77B8_00001260
    b lbl_fn_803F77B8_00001278
lbl_fn_803F77B8_00001260:
    lfs f8, 0xc(r1)
    lfs f0, 0x10(r1)
    fcmpo cr0, f8, f0
    ble lbl_fn_803F77B8_00001274
    b lbl_fn_803F77B8_00001278
lbl_fn_803F77B8_00001274:
    fmr f8, f0
lbl_fn_803F77B8_00001278:
    stfs f8, 0x54(r16)
    li r0, 0x0
    mr r3, r16
    addi r4, r1, 0x80
    stw r0, 0x80(r1)
    bl fn_8000D430
    cmpwi r14, 0x0
    beq lbl_fn_803F77B8_00001578
    lwz r3, 0x80(r1)
    cmpwi r3, 0x0
    beq lbl_fn_803F77B8_00001578
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_803F77B8_000012C4
    addi r3, r14, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_803F77B8_000012C4:
    li r0, 0x0
    stw r0, 0x80(r1)
    b lbl_fn_803F77B8_00001578
lbl_fn_803F77B8_000012D0:
    li r17, 0x0
    li r31, 0x0
    b lbl_fn_803F77B8_000014B8
lbl_fn_803F77B8_000012DC:
    lwz r3, 0x348(r18)
    lwzx r16, r3, r31
    psq_l f1, 0x30(r16), 0, 0
    psq_l f2, 0x38(r16), 0, 0
    psq_l f3, 0x40(r16), 0, 0
    psq_l f4, 0x48(r16), 0, 0
    psq_l f5, 0x50(r16), 0, 0
    psq_l f6, 0x58(r16), 0, 0
    psq_st f6, 0x28(r25), 0, 0
    psq_st f1, 0x0(r25), 0, 0
    psq_st f2, 0x8(r25), 0, 0
    psq_st f3, 0x10(r25), 0, 0
    psq_st f4, 0x18(r25), 0, 0
    psq_st f5, 0x20(r25), 0, 0
    stfs f30, 0x304(r1)
    stfs f30, 0x2fc(r1)
    stfs f30, 0x2f8(r1)
    stfs f30, 0x2f4(r1)
    stfs f30, 0x2f0(r1)
    stfs f30, 0x2e8(r1)
    stfs f30, 0x2e4(r1)
    stfs f30, 0x2e0(r1)
    stfs f30, 0x2dc(r1)
    stfs f31, 0x300(r1)
    stfs f31, 0x2ec(r1)
    stfs f31, 0x2d8(r1)
    lfs f1, 0x80(r15)
    fcmpu cr0, f30, f1
    beq lbl_fn_803F77B8_0000139C
    addi r3, r1, 0xc8
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r24
    addi r4, r1, 0xc8
    addi r5, r1, 0x98
    bl fn_805F89F0
    psq_l f1, 0x0(r21), 0, 0
    psq_l f2, 0x8(r21), 0, 0
    psq_l f3, 0x10(r21), 0, 0
    psq_l f4, 0x18(r21), 0, 0
    psq_l f5, 0x20(r21), 0, 0
    psq_l f6, 0x28(r21), 0, 0
    psq_st f1, 0x0(r24), 0, 0
    psq_st f2, 0x8(r24), 0, 0
    psq_st f3, 0x10(r24), 0, 0
    psq_st f4, 0x18(r24), 0, 0
    psq_st f5, 0x20(r24), 0, 0
    psq_st f6, 0x28(r24), 0, 0
lbl_fn_803F77B8_0000139C:
    lfs f1, 0x7c(r15)
    fcmpu cr0, f30, f1
    beq lbl_fn_803F77B8_000013F4
    addi r3, r1, 0x128
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r24
    addi r4, r1, 0x128
    addi r5, r1, 0xf8
    bl fn_805F89F0
    psq_l f1, 0x0(r22), 0, 0
    psq_l f2, 0x8(r22), 0, 0
    psq_l f3, 0x10(r22), 0, 0
    psq_l f4, 0x18(r22), 0, 0
    psq_l f5, 0x20(r22), 0, 0
    psq_l f6, 0x28(r22), 0, 0
    psq_st f1, 0x0(r24), 0, 0
    psq_st f2, 0x8(r24), 0, 0
    psq_st f3, 0x10(r24), 0, 0
    psq_st f4, 0x18(r24), 0, 0
    psq_st f5, 0x20(r24), 0, 0
    psq_st f6, 0x28(r24), 0, 0
lbl_fn_803F77B8_000013F4:
    lfs f1, 0x78(r15)
    fcmpu cr0, f30, f1
    beq lbl_fn_803F77B8_0000144C
    addi r3, r1, 0x188
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r24
    addi r4, r1, 0x188
    addi r5, r1, 0x158
    bl fn_805F89F0
    psq_l f1, 0x0(r23), 0, 0
    psq_l f2, 0x8(r23), 0, 0
    psq_l f3, 0x10(r23), 0, 0
    psq_l f4, 0x18(r23), 0, 0
    psq_l f5, 0x20(r23), 0, 0
    psq_l f6, 0x28(r23), 0, 0
    psq_st f1, 0x0(r24), 0, 0
    psq_st f2, 0x8(r24), 0, 0
    psq_st f3, 0x10(r24), 0, 0
    psq_st f4, 0x18(r24), 0, 0
    psq_st f5, 0x20(r24), 0, 0
    psq_st f6, 0x28(r24), 0, 0
lbl_fn_803F77B8_0000144C:
    addi r4, r1, 0x338
    addi r3, r1, 0x2d8
    mr r5, r4
    bl fn_805F89F0
    lfs f9, 0x364(r1)
    mr r3, r16
    lfs f10, 0x354(r1)
    addi r4, r1, 0x338
    lfs f11, 0x344(r1)
    lfs f8, 0x74(r15)
    lfs f7, 0x70(r15)
    lfs f0, 0x6c(r15)
    fadds f8, f9, f8
    fadds f7, f10, f7
    stfs f11, 0x50(r1)
    fadds f0, f11, f0
    stfs f10, 0x54(r1)
    stfs f9, 0x58(r1)
    stfs f0, 0x5c(r1)
    stfs f7, 0x60(r1)
    stfs f8, 0x64(r1)
    stfs f0, 0x344(r1)
    stfs f7, 0x354(r1)
    stfs f8, 0x364(r1)
    bl fn_8009EE30
    addi r17, r17, 0x1
    addi r31, r31, 0x4
lbl_fn_803F77B8_000014B8:
    lwz r0, 0x344(r18)
    cmpw r17, r0
    blt lbl_fn_803F77B8_000012DC
    b lbl_fn_803F77B8_00001578
lbl_fn_803F77B8_000014C8:
    mr r3, r18
    addi r4, r15, 0x6c
    addi r5, r15, 0x78
    bl fn_8049994C
    lwz r3, lbl_8087F4A0
    lwz r3, 0x48(r3)
    b lbl_fn_803F77B8_00001570
lbl_fn_803F77B8_000014E4:
    lwz r0, 0x20(r3)
    cmplw r0, r18
    bne lbl_fn_803F77B8_0000156C
    lfs f9, 0x70(r3)
    lfs f8, 0x70(r15)
    lfs f7, 0x6c(r3)
    fadds f9, f9, f8
    lfs f0, 0x6c(r15)
    lfs f8, 0x74(r3)
    fadds f7, f7, f0
    lfs f0, 0x74(r15)
    stfs f9, 0x48(r1)
    fadds f10, f8, f0
    stfs f7, 0x44(r1)
    psq_l f1, 0x0(r20), 0, 0
    fmr f2, f10
    psq_st f1, 0x6c(r3), 0, 0
    stfs f2, 0x74(r3)
    lfs f9, 0x7c(r3)
    lfs f8, 0x7c(r15)
    lfs f7, 0x78(r3)
    fadds f9, f9, f8
    lfs f0, 0x78(r15)
    lfs f8, 0x80(r3)
    fadds f7, f7, f0
    lfs f0, 0x80(r15)
    stfs f9, 0x3c(r1)
    fadds f2, f8, f0
    stfs f7, 0x38(r1)
    psq_l f1, 0x0(r19), 0, 0
    psq_st f1, 0x78(r3), 0, 0
    stfs f10, 0x4c(r1)
    stfs f2, 0x40(r1)
    stfs f2, 0x80(r3)
lbl_fn_803F77B8_0000156C:
    lwz r3, 0x5c(r3)
lbl_fn_803F77B8_00001570:
    cmpwi r3, 0x0
    bne lbl_fn_803F77B8_000014E4
lbl_fn_803F77B8_00001578:
    lwz r18, 0x4c(r18)
lbl_fn_803F77B8_0000157C:
    cmpwi r18, 0x0
    bne lbl_fn_803F77B8_00000FB0
lbl_fn_803F77B8_00001584:
    li r3, 0x1
    b lbl_fn_803F77B8_00001590
lbl_fn_803F77B8_0000158C:
    li r3, 0x0
lbl_fn_803F77B8_00001590:
    addi r11, r1, 0x3e0
    psq_l f31, 0x418(r1), 0, 0
    lfd f31, 0x410(r1)
    psq_l f30, 0x408(r1), 0, 0
    lfd f30, 0x400(r1)
    psq_l f29, 0x3f8(r1), 0, 0
    lfd f29, 0x3f0(r1)
    psq_l f28, 0x3e8(r1), 0, 0
    lfd f28, 0x3e0(r1)
    bl _restgpr_14
    lwz r0, 0x424(r1)
    mtlr r0
    addi r1, r1, 0x420
    blr
}

asm void fn_803F7E7C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    lwz r12, 0x0(r3)
    lwz r12, 0x2c(r12)
    mtctr r12
    bctrl
    lwz r0, 0x4c4(r31)
    cmpwi r0, 0x0
    beq lbl_fn_803F7E7C_00001608
    mr r3, r31
    addi r4, r31, 0xf4
    li r5, 0x1
    bl fn_803ED0D4
lbl_fn_803F7E7C_00001608:
    mr r3, r31
    bl fn_803F8324
    lwz r3, 0x9a8(r31)
    li r0, 0x0
    lfs f0, lbl_80886018
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    lwz r0, 0x58(r31)
    cmpwi r0, 0x0
    beq lbl_fn_803F7E7C_00001650
    li r0, 0x2
    stw r0, 0x8(r1)
lbl_fn_803F7E7C_00001650:
    lwz r12, 0x0(r31)
    mr r3, r31
    addi r4, r1, 0x8
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_803F7F30(void)
{
    nofralloc
    stwu r1, -0x1d0(r1)
    mflr r0
    stw r0, 0x1d4(r1)
    stw r31, 0x1cc(r1)
    mr r31, r3
    stw r30, 0x1c8(r1)
    lwz r4, 0x9b0(r3)
    cmpwi r4, 0x0
    beq lbl_fn_803F7F30_00001704
    lwz r0, 0x7c(r4)
    cmpwi r0, 0x0
    bne lbl_fn_803F7F30_00001704
    lwz r0, 0x55c(r3)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_803F7F30_000016C8
    lwz r0, 0x55c(r3)
    clrrwi r0, r0, 1
    stw r0, 0x55c(r3)
lbl_fn_803F7F30_000016C8:
    lwz r0, 0x8d8(r3)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_803F7F30_000016E4
    lwz r0, 0x8d8(r3)
    clrrwi r0, r0, 1
    stw r0, 0x8d8(r3)
lbl_fn_803F7F30_000016E4:
    lwz r0, 0x4d0(r3)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_803F7F30_00001A58
    lwz r0, 0x4d0(r3)
    clrrwi r0, r0, 1
    stw r0, 0x4d0(r3)
    b lbl_fn_803F7F30_00001A58
lbl_fn_803F7F30_00001704:
    lwz r0, 0x54(r3)
    cmpwi r0, 0x0
    bne lbl_fn_803F7F30_00001754
    lwz r4, 0x9a8(r3)
    li r0, 0x0
    lfs f0, lbl_80886018
    mr r3, r31
    stw r4, 0x28(r1)
    addi r4, r1, 0x28
    stw r0, 0x2c(r1)
    stw r0, 0x30(r1)
    stw r0, 0x34(r1)
    stw r0, 0x38(r1)
    stfs f0, 0x3c(r1)
    stfs f0, 0x40(r1)
    stfs f0, 0x44(r1)
    lwz r12, 0x0(r31)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
lbl_fn_803F7F30_00001754:
    lwz r0, 0x96c(r31)
    cmpwi r0, 0x0
    bne lbl_fn_803F7F30_00001770
    lwz r0, 0x9ac(r31)
    rlwinm r0, r0, 0, 24, 24
    cmplwi r0, 0x80
    bne lbl_fn_803F7F30_000017AC
lbl_fn_803F7F30_00001770:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_803F7F30_000017AC
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    bl fn_803ED5D0
lbl_fn_803F7F30_000017AC:
    lwz r0, 0x4c4(r31)
    cmpwi r0, 0x0
    beq lbl_fn_803F7F30_000017F8
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_803F7F30_000017F8
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    li r5, 0x1
    bl fn_803ED0D4
lbl_fn_803F7F30_000017F8:
    mr r3, r31
    bl fn_803F8324
    lwz r3, 0x54(r31)
    cmpwi r3, 0x1
    bne lbl_fn_803F7F30_00001818
    lwz r0, 0x96c(r31)
    cmpwi r0, 0x0
    bne lbl_fn_803F7F30_0000182C
lbl_fn_803F7F30_00001818:
    cmpwi r3, 0x2
    bne lbl_fn_803F7F30_0000186C
    lwz r0, 0x96c(r31)
    cmpwi r0, 0x0
    bne lbl_fn_803F7F30_0000186C
lbl_fn_803F7F30_0000182C:
    lfs f0, lbl_80886018
    li r0, 0x0
    stw r3, 0x8(r1)
    mr r3, r31
    addi r4, r1, 0x8
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    lwz r12, 0x0(r31)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
lbl_fn_803F7F30_0000186C:
    lwz r0, 0x96c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_803F7F30_00001A58
    lis r4, lbl_807C7060@ha
    addi r3, r31, 0x938
    addi r4, r4, lbl_807C7060@l
    lfs f7, lbl_80886018
    psq_l f1, 0x0(r4), 0, 0
    addi r30, r1, 0x198
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_st f6, 0x28(r3), 0, 0
    lfs f0, lbl_8088601C
    psq_st f1, 0x0(r3), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f4, 0x18(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    stfs f7, 0x1c4(r1)
    stfs f7, 0x1bc(r1)
    stfs f7, 0x1b8(r1)
    stfs f7, 0x1b4(r1)
    stfs f7, 0x1b0(r1)
    stfs f7, 0x1a8(r1)
    stfs f7, 0x1a4(r1)
    stfs f7, 0x1a0(r1)
    stfs f7, 0x19c(r1)
    stfs f0, 0x1c0(r1)
    stfs f0, 0x1ac(r1)
    stfs f0, 0x198(r1)
    lfs f1, 0x80(r31)
    fcmpu cr0, f7, f1
    beq lbl_fn_803F7F30_0000194C
    addi r3, r1, 0x78
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x78
    addi r5, r1, 0x48
    bl fn_805F89F0
    addi r3, r1, 0x48
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_803F7F30_0000194C:
    lfs f0, lbl_80886018
    lfs f1, 0x7c(r31)
    fcmpu cr0, f0, f1
    beq lbl_fn_803F7F30_000019AC
    addi r3, r1, 0xd8
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0xd8
    addi r5, r1, 0xa8
    bl fn_805F89F0
    addi r3, r1, 0xa8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_803F7F30_000019AC:
    lfs f0, lbl_80886018
    lfs f1, 0x78(r31)
    fcmpu cr0, f0, f1
    beq lbl_fn_803F7F30_00001A0C
    addi r3, r1, 0x138
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x138
    addi r5, r1, 0x108
    bl fn_805F89F0
    addi r3, r1, 0x108
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_803F7F30_00001A0C:
    lfs f1, 0x90(r31)
    addi r3, r1, 0x168
    lfs f2, 0x94(r31)
    lfs f3, 0x98(r31)
    bl fn_805F9160
    addi r4, r31, 0x938
    addi r3, r1, 0x168
    mr r5, r4
    bl fn_805F89F0
    addi r4, r31, 0x938
    addi r3, r1, 0x198
    mr r5, r4
    bl fn_805F89F0
    lfs f8, 0x74(r31)
    lfs f7, 0x70(r31)
    lfs f0, 0x6c(r31)
    stfs f0, 0x944(r31)
    stfs f7, 0x954(r31)
    stfs f8, 0x964(r31)
lbl_fn_803F7F30_00001A58:
    lwz r0, 0x1d4(r1)
    lwz r31, 0x1cc(r1)
    lwz r30, 0x1c8(r1)
    mtlr r0
    addi r1, r1, 0x1d0
    blr
}
