#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __register_global_object(void);
extern void dtor_80084684(void);
extern void fn_80013F78(void);
extern void fn_8004FF58(void);
extern void fn_80084320(void);
extern void fn_800D1D3C(void);
extern void fn_800D1E9C(void);
extern void fn_800D246C(void);
extern void fn_801F3FF8(void);
extern void fn_801F4484(void);
extern void fn_801F465C(void);
extern void fn_801FD5A0(void);
extern void fn_801FDA20(void);
extern void fn_805F89F0(void);
extern void fn_805F90D0(void);
extern void fn_805F9160(void);
extern void fn_805F93C0(void);
extern void fn_8068B100(void);
extern void fn_8068B770(void);
extern void fn_8068BC30(void);
extern void fn_8068BD60(void);
extern void fn_8068C240(void);
extern char* strcpy(char* dest, const char* src);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_8073E628[];
extern u8 lbl_8073E688[];
extern u8 lbl_8073E690[];
extern u8 lbl_8073E6A8[];
extern u8 lbl_80782DF0[];
extern u8 lbl_807C7F80[];
extern u8 lbl_807C7F8C[];

/* Small data declarations */
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EEE0;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F150;
extern u32 lbl_8087F154;
extern u32 lbl_80882CD0;
extern u32 lbl_80882CD8;
extern u32 lbl_80882CDC;
extern u32 lbl_80882CE0;
extern u32 lbl_80882CE4;
extern u32 lbl_80882CE8;
extern u32 lbl_80882CEC;
extern u32 lbl_80882CF0;

/* Function declarations */
void fn_80200ED0(void);
void fn_80201794(void);
void fn_80201DC4(void);
void fn_80201DD4(void);
void fn_80201DE8(void);
void fn_80201E10(void);
void fn_80201E1C(void);
void fn_80201E78(void);
void fn_80201EFC(void);
void fn_8020205C(void);
void fn_802020B4(void);
void fn_80202118(void);
void fn_80202138(void);
void fn_802021D0(void);
void fn_80202260(void);
void fn_80202460(void);

asm void fn_80200ED0(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stmw r25, 0x64(r1)
    mr r30, r5
    li r28, 0x0
    mr r29, r3
    li r5, 0x4
    lwz r4, 0xc(r3)
    addi r3, r1, 0x58
    lwz r31, 0x0(r4)
    stw r28, 0x58(r1)
    sth r28, 0x8(r1)
    lwz r4, 0x0(r29)
    lwz r0, 0x8(r29)
    add r4, r4, r0
    bl memcpy
    lwz r4, 0x8(r29)
    addi r3, r1, 0x8
    lwz r0, 0x0(r29)
    li r5, 0x2
    addi r4, r4, 0x4
    stw r4, 0x8(r29)
    add r4, r0, r4
    bl memcpy
    lwz r4, 0x8(r29)
    addi r3, r30, 0x10
    li r5, 0x4
    addi r0, r4, 0x2
    stw r0, 0x8(r29)
    lwz r0, 0x58(r1)
    stw r0, 0x4(r30)
    lwz r4, 0x0(r29)
    lwz r0, 0x8(r29)
    add r4, r4, r0
    bl memcpy
    lwz r4, 0x8(r29)
    addi r3, r30, 0x14
    lwz r0, 0x0(r29)
    li r5, 0x4
    addi r4, r4, 0x4
    stw r4, 0x8(r29)
    add r4, r0, r4
    bl memcpy
    lwz r4, 0x8(r29)
    addi r3, r30, 0x18
    lwz r0, 0x0(r29)
    li r5, 0x4
    addi r4, r4, 0x4
    stw r4, 0x8(r29)
    add r4, r0, r4
    bl memcpy
    lwz r5, 0x8(r29)
    addi r3, r1, 0x48
    lwz r4, 0xc(r29)
    addi r6, r5, 0x4
    stw r6, 0x8(r29)
    li r5, 0x4
    lwz r27, 0x0(r4)
    stw r28, 0x48(r1)
    lwz r0, 0x0(r29)
    add r4, r0, r6
    bl memcpy
    lwz r3, 0x8(r29)
    mr r25, r30
    li r26, 0x0
    addi r0, r3, 0x4
    stw r0, 0x8(r29)
    lwz r0, 0x48(r1)
    stw r0, 0x1c(r30)
lbl_fn_80200ED0_00000118:
    stw r28, 0x4c(r1)
    addi r3, r1, 0x4c
    li r5, 0x4
    stw r28, 0x50(r1)
    lwz r4, 0x0(r29)
    lwz r0, 0x8(r29)
    add r4, r4, r0
    bl memcpy
    lwz r4, 0x8(r29)
    addi r3, r1, 0x50
    lwz r0, 0x0(r29)
    li r5, 0x4
    addi r4, r4, 0x4
    stw r4, 0x8(r29)
    add r4, r0, r4
    bl memcpy
    lwz r3, 0x8(r29)
    addi r0, r3, 0x4
    stw r0, 0x8(r29)
    lwz r3, 0x50(r1)
    cmpwi r3, 0x0
    blt lbl_fn_80200ED0_00000194
    lwz r0, 0x70(r27)
    cmpwi r0, 0x0
    beq lbl_fn_80200ED0_00000194
    slwi r0, r3, 3
    lwz r3, 0x74(r27)
    lwz r4, 0x4c(r1)
    add r0, r3, r0
    stw r0, 0x20(r25)
    stw r4, 0x24(r25)
lbl_fn_80200ED0_00000194:
    addi r26, r26, 0x1
    addi r25, r25, 0x8
    cmplwi r26, 0x5
    blt lbl_fn_80200ED0_00000118
    lwz r4, 0xc(r29)
    li r27, 0x0
    addi r3, r1, 0x3c
    li r5, 0x4
    lwz r28, 0x0(r4)
    stw r27, 0x3c(r1)
    lwz r4, 0x0(r29)
    lwz r0, 0x8(r29)
    add r4, r4, r0
    bl memcpy
    lwz r3, 0x8(r29)
    mr r25, r30
    li r26, 0x0
    addi r0, r3, 0x4
    stw r0, 0x8(r29)
    lwz r0, 0x3c(r1)
    stw r0, 0x5c(r30)
lbl_fn_80200ED0_000001E8:
    stw r27, 0x40(r1)
    addi r3, r1, 0x40
    li r5, 0x4
    stw r27, 0x44(r1)
    lwz r4, 0x0(r29)
    lwz r0, 0x8(r29)
    add r4, r4, r0
    bl memcpy
    lwz r4, 0x8(r29)
    addi r3, r1, 0x44
    lwz r0, 0x0(r29)
    li r5, 0x4
    addi r4, r4, 0x4
    stw r4, 0x8(r29)
    add r4, r0, r4
    bl memcpy
    lwz r3, 0x8(r29)
    addi r0, r3, 0x4
    stw r0, 0x8(r29)
    lwz r3, 0x44(r1)
    cmpwi r3, 0x0
    blt lbl_fn_80200ED0_00000264
    lwz r0, 0x70(r28)
    cmpwi r0, 0x0
    beq lbl_fn_80200ED0_00000264
    slwi r0, r3, 3
    lwz r3, 0x74(r28)
    lwz r4, 0x40(r1)
    add r0, r3, r0
    stw r0, 0x60(r25)
    stw r4, 0x64(r25)
lbl_fn_80200ED0_00000264:
    addi r26, r26, 0x1
    addi r25, r25, 0x8
    cmplwi r26, 0x4
    blt lbl_fn_80200ED0_000001E8
    lwz r4, 0xc(r29)
    li r0, 0x0
    addi r3, r1, 0x30
    li r5, 0x4
    lwz r27, 0x0(r4)
    stw r0, 0x30(r1)
    lwz r4, 0x0(r29)
    lwz r0, 0x8(r29)
    add r4, r4, r0
    bl memcpy
    lwz r4, 0x8(r29)
    li r6, 0x0
    addi r3, r1, 0x34
    li r5, 0x4
    addi r0, r4, 0x4
    stw r0, 0x8(r29)
    lwz r0, 0x30(r1)
    stw r0, 0x90(r30)
    stw r6, 0x34(r1)
    stw r6, 0x38(r1)
    lwz r4, 0x0(r29)
    lwz r0, 0x8(r29)
    add r4, r4, r0
    bl memcpy
    lwz r4, 0x8(r29)
    addi r3, r1, 0x38
    lwz r0, 0x0(r29)
    li r5, 0x4
    addi r4, r4, 0x4
    stw r4, 0x8(r29)
    add r4, r0, r4
    bl memcpy
    lwz r3, 0x8(r29)
    addi r0, r3, 0x4
    stw r0, 0x8(r29)
    lwz r3, 0x38(r1)
    cmpwi r3, 0x0
    blt lbl_fn_80200ED0_00000330
    lwz r0, 0x70(r27)
    cmpwi r0, 0x0
    beq lbl_fn_80200ED0_00000330
    slwi r0, r3, 3
    lwz r3, 0x74(r27)
    lwz r4, 0x34(r1)
    add r0, r3, r0
    stw r0, 0x94(r30)
    stw r4, 0x98(r30)
lbl_fn_80200ED0_00000330:
    lwz r4, 0xc(r29)
    li r0, 0x0
    addi r3, r1, 0x24
    li r5, 0x4
    lwz r27, 0x0(r4)
    stw r0, 0x24(r1)
    lwz r4, 0x0(r29)
    lwz r0, 0x8(r29)
    add r4, r4, r0
    bl memcpy
    lwz r4, 0x8(r29)
    li r6, 0x0
    addi r3, r1, 0x28
    li r5, 0x4
    addi r0, r4, 0x4
    stw r0, 0x8(r29)
    lwz r0, 0x24(r1)
    stw r0, 0xa0(r30)
    stw r6, 0x28(r1)
    stw r6, 0x2c(r1)
    lwz r4, 0x0(r29)
    lwz r0, 0x8(r29)
    add r4, r4, r0
    bl memcpy
    lwz r4, 0x8(r29)
    addi r3, r1, 0x2c
    lwz r0, 0x0(r29)
    li r5, 0x4
    addi r4, r4, 0x4
    stw r4, 0x8(r29)
    add r4, r0, r4
    bl memcpy
    lwz r3, 0x8(r29)
    addi r0, r3, 0x4
    stw r0, 0x8(r29)
    lwz r3, 0x2c(r1)
    cmpwi r3, 0x0
    blt lbl_fn_80200ED0_000003EC
    lwz r0, 0x68(r27)
    cmpwi r0, 0x0
    beq lbl_fn_80200ED0_000003EC
    slwi r0, r3, 3
    lwz r3, 0x6c(r27)
    lwz r4, 0x28(r1)
    add r0, r3, r0
    stw r0, 0xa4(r30)
    stw r4, 0xa8(r30)
lbl_fn_80200ED0_000003EC:
    lwz r4, 0x0(r29)
    addi r3, r30, 0xb0
    lwz r0, 0x8(r29)
    li r5, 0x4
    add r4, r4, r0
    bl memcpy
    lwz r4, 0x8(r29)
    addi r3, r30, 0xb4
    lwz r0, 0x0(r29)
    li r5, 0x4
    addi r4, r4, 0x4
    stw r4, 0x8(r29)
    add r4, r0, r4
    bl memcpy
    lwz r4, 0x8(r29)
    addi r3, r30, 0xe
    lwz r0, 0x0(r29)
    li r5, 0x2
    addi r4, r4, 0x4
    stw r4, 0x8(r29)
    add r4, r0, r4
    bl memcpy
    lwz r5, 0x8(r29)
    li r28, 0x0
    lwz r4, 0xc(r29)
    addi r3, r1, 0x18
    addi r6, r5, 0x2
    stw r6, 0x8(r29)
    li r5, 0x4
    lwz r27, 0x0(r4)
    stw r28, 0x18(r1)
    lwz r0, 0x0(r29)
    add r4, r0, r6
    bl memcpy
    lwz r3, 0x8(r29)
    mr r25, r30
    li r26, 0x0
    addi r0, r3, 0x4
    stw r0, 0x8(r29)
    lwz r0, 0x18(r1)
    stw r0, 0xb8(r30)
lbl_fn_80200ED0_00000490:
    stw r28, 0x1c(r1)
    addi r3, r1, 0x1c
    li r5, 0x4
    stw r28, 0x20(r1)
    lwz r4, 0x0(r29)
    lwz r0, 0x8(r29)
    add r4, r4, r0
    bl memcpy
    lwz r4, 0x8(r29)
    addi r3, r1, 0x20
    lwz r0, 0x0(r29)
    li r5, 0x4
    addi r4, r4, 0x4
    stw r4, 0x8(r29)
    add r4, r0, r4
    bl memcpy
    lwz r3, 0x8(r29)
    addi r0, r3, 0x4
    stw r0, 0x8(r29)
    lwz r3, 0x20(r1)
    cmpwi r3, 0x0
    blt lbl_fn_80200ED0_0000050C
    lwz r0, 0x70(r27)
    cmpwi r0, 0x0
    beq lbl_fn_80200ED0_0000050C
    slwi r0, r3, 3
    lwz r3, 0x74(r27)
    lwz r4, 0x1c(r1)
    add r0, r3, r0
    stw r0, 0xbc(r25)
    stw r4, 0xc0(r25)
lbl_fn_80200ED0_0000050C:
    addi r26, r26, 0x1
    addi r25, r25, 0x8
    cmplwi r26, 0x4
    blt lbl_fn_80200ED0_00000490
    lwz r4, 0xc(r29)
    li r0, 0x0
    addi r3, r1, 0xc
    li r5, 0x4
    lwz r28, 0x0(r4)
    stw r0, 0xc(r1)
    lwz r4, 0x0(r29)
    lwz r0, 0x8(r29)
    add r4, r4, r0
    bl memcpy
    lwz r4, 0x8(r29)
    li r6, 0x0
    addi r3, r1, 0x10
    li r5, 0x4
    addi r0, r4, 0x4
    stw r0, 0x8(r29)
    lwz r0, 0xc(r1)
    stw r0, 0xec(r30)
    stw r6, 0x10(r1)
    stw r6, 0x14(r1)
    lwz r4, 0x0(r29)
    lwz r0, 0x8(r29)
    add r4, r4, r0
    bl memcpy
    lwz r4, 0x8(r29)
    addi r3, r1, 0x14
    lwz r0, 0x0(r29)
    li r5, 0x4
    addi r4, r4, 0x4
    stw r4, 0x8(r29)
    add r4, r0, r4
    bl memcpy
    lwz r3, 0x8(r29)
    addi r0, r3, 0x4
    stw r0, 0x8(r29)
    lwz r3, 0x14(r1)
    cmpwi r3, 0x0
    blt lbl_fn_80200ED0_000005D8
    lwz r0, 0x70(r28)
    cmpwi r0, 0x0
    beq lbl_fn_80200ED0_000005D8
    slwi r0, r3, 3
    lwz r3, 0x74(r28)
    lwz r4, 0x10(r1)
    add r0, r3, r0
    stw r0, 0xf0(r30)
    stw r4, 0xf4(r30)
lbl_fn_80200ED0_000005D8:
    li r0, 0x0
    stw r0, 0x54(r1)
    addi r3, r1, 0x54
    li r5, 0x4
    lwz r4, 0x0(r29)
    lwz r0, 0x8(r29)
    add r4, r4, r0
    bl memcpy
    lwz r3, 0x8(r29)
    addi r0, r3, 0x4
    stw r0, 0x8(r29)
    lwz r3, 0x54(r1)
    cmpwi r3, 0x0
    blt lbl_fn_80200ED0_00000628
    lwz r0, 0x80(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80200ED0_00000628
    lwz r0, 0x84(r31)
    add r0, r0, r3
    stw r0, 0x104(r30)
lbl_fn_80200ED0_00000628:
    lwz r4, 0x0(r29)
    addi r3, r1, 0x54
    lwz r0, 0x8(r29)
    li r5, 0x4
    add r4, r4, r0
    bl memcpy
    lwz r3, 0x8(r29)
    addi r0, r3, 0x4
    stw r0, 0x8(r29)
    lwz r3, 0x54(r1)
    cmpwi r3, 0x0
    blt lbl_fn_80200ED0_00000670
    lwz r0, 0x80(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80200ED0_00000670
    lwz r0, 0x84(r31)
    add r0, r0, r3
    stw r0, 0x108(r30)
lbl_fn_80200ED0_00000670:
    lwz r4, 0x0(r29)
    addi r3, r1, 0x54
    lwz r0, 0x8(r29)
    li r5, 0x4
    add r4, r4, r0
    bl memcpy
    lwz r3, 0x8(r29)
    addi r0, r3, 0x4
    stw r0, 0x8(r29)
    lwz r3, 0x54(r1)
    cmpwi r3, 0x0
    blt lbl_fn_80200ED0_000006B8
    lwz r0, 0x80(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80200ED0_000006B8
    lwz r0, 0x84(r31)
    add r0, r0, r3
    stw r0, 0x10c(r30)
lbl_fn_80200ED0_000006B8:
    lwz r4, 0x0(r29)
    addi r3, r1, 0x54
    lwz r0, 0x8(r29)
    li r5, 0x4
    add r4, r4, r0
    bl memcpy
    lwz r3, 0x8(r29)
    addi r0, r3, 0x4
    stw r0, 0x8(r29)
    lwz r3, 0x54(r1)
    cmpwi r3, 0x0
    blt lbl_fn_80200ED0_00000700
    lwz r0, 0x80(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80200ED0_00000700
    lwz r0, 0x84(r31)
    add r0, r0, r3
    stw r0, 0x110(r30)
lbl_fn_80200ED0_00000700:
    lwz r4, 0x0(r29)
    addi r3, r1, 0x54
    lwz r0, 0x8(r29)
    li r5, 0x4
    add r4, r4, r0
    bl memcpy
    lwz r3, 0x8(r29)
    addi r0, r3, 0x4
    stw r0, 0x8(r29)
    lwz r3, 0x54(r1)
    cmpwi r3, 0x0
    blt lbl_fn_80200ED0_00000748
    lwz r0, 0x80(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80200ED0_00000748
    lwz r0, 0x84(r31)
    add r0, r0, r3
    stw r0, 0x114(r30)
lbl_fn_80200ED0_00000748:
    lwz r4, 0x0(r29)
    addi r3, r1, 0x54
    lwz r0, 0x8(r29)
    li r5, 0x4
    add r4, r4, r0
    bl memcpy
    lwz r3, 0x8(r29)
    addi r0, r3, 0x4
    stw r0, 0x8(r29)
    lwz r3, 0x54(r1)
    cmpwi r3, 0x0
    blt lbl_fn_80200ED0_00000790
    lwz r0, 0x80(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80200ED0_00000790
    lwz r0, 0x84(r31)
    add r0, r0, r3
    stw r0, 0x118(r30)
lbl_fn_80200ED0_00000790:
    lwz r4, 0x0(r29)
    addi r3, r1, 0x54
    lwz r0, 0x8(r29)
    li r5, 0x4
    add r4, r4, r0
    bl memcpy
    lwz r3, 0x8(r29)
    addi r0, r3, 0x4
    stw r0, 0x8(r29)
    lwz r3, 0x54(r1)
    cmpwi r3, 0x0
    blt lbl_fn_80200ED0_000007D8
    lwz r0, 0x80(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80200ED0_000007D8
    lwz r0, 0x84(r31)
    add r0, r0, r3
    stw r0, 0x11c(r30)
lbl_fn_80200ED0_000007D8:
    lwz r4, 0x0(r29)
    addi r3, r1, 0x54
    lwz r0, 0x8(r29)
    li r5, 0x4
    add r4, r4, r0
    bl memcpy
    lwz r3, 0x8(r29)
    addi r0, r3, 0x4
    stw r0, 0x8(r29)
    lwz r3, 0x54(r1)
    cmpwi r3, 0x0
    blt lbl_fn_80200ED0_00000820
    lwz r0, 0x80(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80200ED0_00000820
    lwz r0, 0x84(r31)
    add r0, r0, r3
    stw r0, 0x120(r30)
lbl_fn_80200ED0_00000820:
    lwz r4, 0x0(r29)
    addi r3, r1, 0x54
    lwz r0, 0x8(r29)
    li r5, 0x4
    add r4, r4, r0
    bl memcpy
    lwz r3, 0x8(r29)
    addi r0, r3, 0x4
    stw r0, 0x8(r29)
    lwz r3, 0x54(r1)
    cmpwi r3, 0x0
    blt lbl_fn_80200ED0_00000868
    lwz r0, 0x80(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80200ED0_00000868
    lwz r0, 0x84(r31)
    add r0, r0, r3
    stw r0, 0x124(r30)
lbl_fn_80200ED0_00000868:
    lwz r4, 0x0(r29)
    addi r3, r1, 0x54
    lwz r0, 0x8(r29)
    li r5, 0x4
    add r4, r4, r0
    bl memcpy
    lwz r3, 0x8(r29)
    addi r0, r3, 0x4
    stw r0, 0x8(r29)
    lwz r3, 0x54(r1)
    cmpwi r3, 0x0
    blt lbl_fn_80200ED0_000008B0
    lwz r0, 0x80(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80200ED0_000008B0
    lwz r0, 0x84(r31)
    add r0, r0, r3
    stw r0, 0x128(r30)
lbl_fn_80200ED0_000008B0:
    lmw r25, 0x64(r1)
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_80201794(void)
{
    nofralloc
    stwu r1, -0x280(r1)
    mflr r0
    lis r4, lbl_8073E628@ha
    stw r0, 0x284(r1)
    addi r4, r4, lbl_8073E628@l
    addi r4, r4, 0x1c
    stmw r25, 0x264(r1)
    mr r25, r3
    mr r26, r5
    lwz r6, 0xc(r3)
    lwz r27, 0x0(r6)
    bl fn_80200ED0
    li r0, 0x0
    stw r0, 0x48(r1)
    addi r3, r1, 0x34
    li r5, 0x4
    stw r0, 0x4c(r1)
    stw r0, 0x50(r1)
    stw r0, 0x3c(r1)
    stw r0, 0x40(r1)
    stw r0, 0x44(r1)
    lwz r4, 0x0(r25)
    lwz r0, 0x8(r25)
    add r4, r4, r0
    bl memcpy
    lwz r3, 0x8(r25)
    addi r4, r3, 0x4
    stw r4, 0x8(r25)
    lwz r28, 0x34(r1)
    cmpwi r28, 0x0
    ble lbl_fn_80201794_00000960
    lwz r0, 0x0(r25)
    mr r5, r28
    addi r3, r1, 0x158
    add r4, r0, r4
    bl memcpy
    lwz r0, 0x8(r25)
    add r0, r0, r28
    stw r0, 0x8(r25)
lbl_fn_80201794_00000960:
    lwz r0, 0x48(r1)
    addi r3, r1, 0x158
    lwz r4, 0x34(r1)
    li r5, 0x0
    srwi. r0, r0, 31
    stbx r5, r3, r4
    bne lbl_fn_80201794_00000988
    lbz r0, 0x48(r1)
    clrlwi r28, r0, 25
    b lbl_fn_80201794_0000098C
lbl_fn_80201794_00000988:
    lwz r28, 0x4c(r1)
lbl_fn_80201794_0000098C:
    lbz r0, 0x10(r1)
    addi r3, r1, 0x158
    stb r0, 0x14(r1)
    bl strlen
    addi r6, r1, 0x158
    mr r0, r3
    mr r7, r6
    mr r5, r28
    addi r3, r1, 0x48
    addi r8, r1, 0x14
    add r7, r7, r0
    li r4, 0x0
    bl fn_80013F78
    lwz r4, 0x0(r25)
    addi r3, r1, 0x30
    lwz r0, 0x8(r25)
    li r5, 0x4
    add r4, r4, r0
    bl memcpy
    lwz r3, 0x8(r25)
    addi r4, r3, 0x4
    stw r4, 0x8(r25)
    lwz r28, 0x30(r1)
    cmpwi r28, 0x0
    ble lbl_fn_80201794_00000A10
    lwz r0, 0x0(r25)
    mr r5, r28
    addi r3, r1, 0x58
    add r4, r0, r4
    bl memcpy
    lwz r0, 0x8(r25)
    add r0, r0, r28
    stw r0, 0x8(r25)
lbl_fn_80201794_00000A10:
    lwz r0, 0x3c(r1)
    addi r3, r1, 0x58
    lwz r4, 0x30(r1)
    li r5, 0x0
    srwi. r0, r0, 31
    stbx r5, r3, r4
    bne lbl_fn_80201794_00000A38
    lbz r0, 0x3c(r1)
    clrlwi r28, r0, 25
    b lbl_fn_80201794_00000A3C
lbl_fn_80201794_00000A38:
    lwz r28, 0x40(r1)
lbl_fn_80201794_00000A3C:
    lbz r0, 0x8(r1)
    addi r3, r1, 0x58
    stb r0, 0xc(r1)
    bl strlen
    addi r6, r1, 0x58
    mr r0, r3
    mr r7, r6
    mr r5, r28
    addi r3, r1, 0x3c
    addi r8, r1, 0xc
    add r7, r7, r0
    li r4, 0x0
    bl fn_80013F78
    lwz r4, 0xc(r25)
    li r30, 0x0
    addi r3, r1, 0x24
    li r5, 0x4
    lwz r31, 0x0(r4)
    stw r30, 0x24(r1)
    lwz r4, 0x0(r25)
    lwz r0, 0x8(r25)
    add r4, r4, r0
    bl memcpy
    lwz r3, 0x8(r25)
    mr r28, r26
    li r29, 0x0
    addi r0, r3, 0x4
    stw r0, 0x8(r25)
    lwz r0, 0x24(r1)
    stw r0, 0x12c(r26)
lbl_fn_80201794_00000AB4:
    stw r30, 0x28(r1)
    addi r3, r1, 0x28
    li r5, 0x4
    stw r30, 0x2c(r1)
    lwz r4, 0x0(r25)
    lwz r0, 0x8(r25)
    add r4, r4, r0
    bl memcpy
    lwz r4, 0x8(r25)
    addi r3, r1, 0x2c
    lwz r0, 0x0(r25)
    li r5, 0x4
    addi r4, r4, 0x4
    stw r4, 0x8(r25)
    add r4, r0, r4
    bl memcpy
    lwz r3, 0x8(r25)
    addi r0, r3, 0x4
    stw r0, 0x8(r25)
    lwz r3, 0x2c(r1)
    cmpwi r3, 0x0
    blt lbl_fn_80201794_00000B30
    lwz r0, 0x70(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80201794_00000B30
    slwi r0, r3, 3
    lwz r3, 0x74(r31)
    lwz r4, 0x28(r1)
    add r0, r3, r0
    stw r0, 0x130(r28)
    stw r4, 0x134(r28)
lbl_fn_80201794_00000B30:
    addi r29, r29, 0x1
    addi r28, r28, 0x8
    cmplwi r29, 0x4
    blt lbl_fn_80201794_00000AB4
    lwz r4, 0xc(r25)
    li r31, 0x0
    addi r3, r1, 0x18
    li r5, 0x4
    lwz r30, 0x0(r4)
    stw r31, 0x18(r1)
    lwz r4, 0x0(r25)
    lwz r0, 0x8(r25)
    add r4, r4, r0
    bl memcpy
    lwz r3, 0x8(r25)
    mr r28, r26
    li r29, 0x0
    addi r0, r3, 0x4
    stw r0, 0x8(r25)
    lwz r0, 0x18(r1)
    stw r0, 0x160(r26)
lbl_fn_80201794_00000B84:
    stw r31, 0x1c(r1)
    addi r3, r1, 0x1c
    li r5, 0x4
    stw r31, 0x20(r1)
    lwz r4, 0x0(r25)
    lwz r0, 0x8(r25)
    add r4, r4, r0
    bl memcpy
    lwz r4, 0x8(r25)
    addi r3, r1, 0x20
    lwz r0, 0x0(r25)
    li r5, 0x4
    addi r4, r4, 0x4
    stw r4, 0x8(r25)
    add r4, r0, r4
    bl memcpy
    lwz r3, 0x8(r25)
    addi r0, r3, 0x4
    stw r0, 0x8(r25)
    lwz r3, 0x20(r1)
    cmpwi r3, 0x0
    blt lbl_fn_80201794_00000C00
    lwz r0, 0x70(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80201794_00000C00
    slwi r0, r3, 3
    lwz r3, 0x74(r30)
    lwz r4, 0x1c(r1)
    add r0, r3, r0
    stw r0, 0x164(r28)
    stw r4, 0x168(r28)
lbl_fn_80201794_00000C00:
    addi r29, r29, 0x1
    addi r28, r28, 0x8
    cmplwi r29, 0x4
    blt lbl_fn_80201794_00000B84
    li r0, 0x0
    stw r0, 0x38(r1)
    addi r3, r1, 0x38
    li r5, 0x4
    lwz r4, 0x0(r25)
    lwz r0, 0x8(r25)
    add r4, r4, r0
    bl memcpy
    lwz r3, 0x8(r25)
    addi r0, r3, 0x4
    stw r0, 0x8(r25)
    lwz r3, 0x38(r1)
    cmpwi r3, 0x0
    blt lbl_fn_80201794_00000C60
    lwz r0, 0x80(r27)
    cmpwi r0, 0x0
    beq lbl_fn_80201794_00000C60
    lwz r0, 0x84(r27)
    add r0, r0, r3
    stw r0, 0x1f4(r26)
lbl_fn_80201794_00000C60:
    lwz r4, 0x0(r25)
    addi r3, r1, 0x38
    lwz r0, 0x8(r25)
    li r5, 0x4
    add r4, r4, r0
    bl memcpy
    lwz r3, 0x8(r25)
    addi r0, r3, 0x4
    stw r0, 0x8(r25)
    lwz r3, 0x38(r1)
    cmpwi r3, 0x0
    blt lbl_fn_80201794_00000CA8
    lwz r0, 0x80(r27)
    cmpwi r0, 0x0
    beq lbl_fn_80201794_00000CA8
    lwz r0, 0x84(r27)
    add r0, r0, r3
    stw r0, 0x1f8(r26)
lbl_fn_80201794_00000CA8:
    lwz r4, 0x0(r25)
    addi r3, r1, 0x38
    lwz r0, 0x8(r25)
    li r5, 0x4
    add r4, r4, r0
    bl memcpy
    lwz r3, 0x8(r25)
    addi r0, r3, 0x4
    stw r0, 0x8(r25)
    lwz r3, 0x38(r1)
    cmpwi r3, 0x0
    blt lbl_fn_80201794_00000CF0
    lwz r0, 0x80(r27)
    cmpwi r0, 0x0
    beq lbl_fn_80201794_00000CF0
    lwz r0, 0x84(r27)
    add r0, r0, r3
    stw r0, 0x1fc(r26)
lbl_fn_80201794_00000CF0:
    lwz r4, 0x0(r25)
    addi r3, r1, 0x38
    lwz r0, 0x8(r25)
    li r5, 0x4
    add r4, r4, r0
    bl memcpy
    lwz r3, 0x8(r25)
    addi r0, r3, 0x4
    stw r0, 0x8(r25)
    lwz r3, 0x38(r1)
    cmpwi r3, 0x0
    blt lbl_fn_80201794_00000D38
    lwz r0, 0x80(r27)
    cmpwi r0, 0x0
    beq lbl_fn_80201794_00000D38
    lwz r0, 0x84(r27)
    add r0, r0, r3
    stw r0, 0x200(r26)
lbl_fn_80201794_00000D38:
    lwz r4, 0x0(r25)
    addi r3, r1, 0x38
    lwz r0, 0x8(r25)
    li r5, 0x4
    add r4, r4, r0
    bl memcpy
    lwz r3, 0x8(r25)
    addi r0, r3, 0x4
    stw r0, 0x8(r25)
    lwz r3, 0x38(r1)
    cmpwi r3, 0x0
    blt lbl_fn_80201794_00000D80
    lwz r0, 0x80(r27)
    cmpwi r0, 0x0
    beq lbl_fn_80201794_00000D80
    lwz r0, 0x84(r27)
    add r0, r0, r3
    stw r0, 0x204(r26)
lbl_fn_80201794_00000D80:
    lwz r4, 0x0(r25)
    addi r3, r1, 0x38
    lwz r0, 0x8(r25)
    li r5, 0x4
    add r4, r4, r0
    bl memcpy
    lwz r3, 0x8(r25)
    addi r0, r3, 0x4
    stw r0, 0x8(r25)
    lwz r3, 0x38(r1)
    cmpwi r3, 0x0
    blt lbl_fn_80201794_00000DC8
    lwz r0, 0x80(r27)
    cmpwi r0, 0x0
    beq lbl_fn_80201794_00000DC8
    lwz r0, 0x84(r27)
    add r0, r0, r3
    stw r0, 0x208(r26)
lbl_fn_80201794_00000DC8:
    lwz r4, 0x0(r25)
    addi r3, r1, 0x38
    lwz r0, 0x8(r25)
    li r5, 0x4
    add r4, r4, r0
    bl memcpy
    lwz r3, 0x8(r25)
    addi r0, r3, 0x4
    stw r0, 0x8(r25)
    lwz r3, 0x38(r1)
    cmpwi r3, 0x0
    blt lbl_fn_80201794_00000E10
    lwz r0, 0x80(r27)
    cmpwi r0, 0x0
    beq lbl_fn_80201794_00000E10
    lwz r0, 0x84(r27)
    add r0, r0, r3
    stw r0, 0x20c(r26)
lbl_fn_80201794_00000E10:
    lwz r4, 0x0(r25)
    addi r3, r1, 0x38
    lwz r0, 0x8(r25)
    li r5, 0x4
    add r4, r4, r0
    bl memcpy
    lwz r3, 0x8(r25)
    addi r0, r3, 0x4
    stw r0, 0x8(r25)
    lwz r3, 0x38(r1)
    cmpwi r3, 0x0
    blt lbl_fn_80201794_00000E58
    lwz r0, 0x80(r27)
    cmpwi r0, 0x0
    beq lbl_fn_80201794_00000E58
    lwz r0, 0x84(r27)
    add r0, r0, r3
    stw r0, 0x210(r26)
lbl_fn_80201794_00000E58:
    lwz r0, 0x48(r1)
    mr r3, r26
    lwz r5, 0xc(r25)
    srwi. r0, r0, 31
    bne lbl_fn_80201794_00000E74
    addi r4, r1, 0x49
    b lbl_fn_80201794_00000E78
lbl_fn_80201794_00000E74:
    lwz r4, 0x50(r1)
lbl_fn_80201794_00000E78:
    lwz r5, 0xc(r5)
    bl fn_801FD5A0
    lwz r0, 0x10(r26)
    rlwinm r0, r0, 0, 28, 28
    cmplwi r0, 0x8
    bne lbl_fn_80201794_00000EB8
    lwz r0, 0x3c(r1)
    mr r3, r26
    lwz r5, 0xc(r25)
    srwi. r0, r0, 31
    bne lbl_fn_80201794_00000EAC
    addi r4, r1, 0x3d
    b lbl_fn_80201794_00000EB0
lbl_fn_80201794_00000EAC:
    lwz r4, 0x44(r1)
lbl_fn_80201794_00000EB0:
    lwz r5, 0xc(r5)
    bl fn_801FDA20
lbl_fn_80201794_00000EB8:
    lwz r0, 0x3c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80201794_00000ECC
    lwz r3, 0x44(r1)
    bl dtor_80084684
lbl_fn_80201794_00000ECC:
    lwz r0, 0x48(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80201794_00000EE0
    lwz r3, 0x50(r1)
    bl dtor_80084684
lbl_fn_80201794_00000EE0:
    lmw r25, 0x264(r1)
    lwz r0, 0x284(r1)
    mtlr r0
    addi r1, r1, 0x280
    blr
}

asm void fn_80201DC4(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    blr
}

asm void fn_80201DD4(void)
{
    nofralloc
    lfs f0, lbl_80882CD0
    li r0, 0x0
    stw r0, 0x0(r3)
    stfs f0, 0x4(r3)
    blr
}

asm void fn_80201DE8(void)
{
    nofralloc
    li r4, 0x0
    stw r4, 0x4(r3)
    lbz r0, 0x4(r3)
    stw r4, 0x8(r3)
    clrrwi r0, r0, 7
    stw r4, 0xc(r3)
    stw r4, 0x0(r3)
    sth r4, 0x6(r3)
    stb r0, 0x4(r3)
    blr
}

asm void fn_80201E10(void)
{
    nofralloc
    sth r4, 0x0(r4)
    stw r4, 0x8(r3)
    blr
}

asm void fn_80201E1C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    la r3, lbl_8087F150
    stw r0, 0x14(r1)
    bl fn_8068B770
    lis r4, fn_8068BC30@ha
    lis r5, lbl_807C7F80@ha
    addi r4, r4, fn_8068BC30@l
    la r3, lbl_8087F150
    addi r5, r5, lbl_807C7F80@l
    bl __register_global_object
    la r3, lbl_8087F154
    bl fn_8068BD60
    lis r4, fn_8068C240@ha
    lis r5, lbl_807C7F8C@ha
    addi r4, r4, fn_8068C240@l
    la r3, lbl_8087F154
    addi r5, r5, lbl_807C7F8C@l
    bl __register_global_object
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80201E78(void)
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
    beq lbl_fn_80201E78_0000100C
    lis r5, lbl_8073E6A8@ha
    li r3, 0x108
    addi r5, r5, lbl_8073E6A8@l
    li r4, 0x8
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_80201E78_00001010
    mr r4, r29
    mr r5, r30
    mr r6, r31
    bl fn_80201EFC
    b lbl_fn_80201E78_00001010
lbl_fn_80201E78_0000100C:
    li r3, 0x0
lbl_fn_80201E78_00001010:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80201EFC(void)
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
    mr r29, r3
    bl fn_800D1D3C
    lwz r0, 0x104(r29)
    lis r3, lbl_80782DF0@ha
    lfs f0, lbl_80882CE0
    addi r3, r3, lbl_80782DF0@l
    clrlwi r0, r0, 8
    lfs f2, lbl_80882CD8
    oris r0, r0, 0x80
    lfs f1, lbl_80882CDC
    rlwinm r0, r0, 0, 10, 8
    li r4, 0x0
    stw r3, 0x0(r29)
    oris r0, r0, 0x30
    addi r3, r29, 0x4c
    li r5, 0x40
    stw r4, 0x48(r29)
    li r4, 0x0
    stfs f2, 0xbc(r29)
    stfs f1, 0xc0(r29)
    stfs f2, 0xc4(r29)
    stfs f0, 0xf8(r29)
    stfs f0, 0xfc(r29)
    stfs f0, 0x100(r29)
    stw r0, 0x104(r29)
    bl memset
    lfs f1, lbl_80882CD8
    mr r4, r30
    lfs f0, lbl_80882CE0
    addi r3, r29, 0x4c
    stfs f1, 0xf4(r29)
    stfs f1, 0xec(r29)
    stfs f1, 0xe8(r29)
    stfs f1, 0xe4(r29)
    stfs f1, 0xe0(r29)
    stfs f1, 0xd8(r29)
    stfs f1, 0xd4(r29)
    stfs f1, 0xd0(r29)
    stfs f1, 0xcc(r29)
    stfs f0, 0xf0(r29)
    stfs f0, 0xdc(r29)
    stfs f0, 0xc8(r29)
    stfs f1, 0xb8(r29)
    stfs f1, 0xb0(r29)
    stfs f1, 0xac(r29)
    stfs f1, 0xa8(r29)
    stfs f1, 0xa4(r29)
    stfs f1, 0x9c(r29)
    stfs f1, 0x98(r29)
    stfs f1, 0x94(r29)
    stfs f1, 0x90(r29)
    stfs f0, 0xb4(r29)
    stfs f0, 0xa0(r29)
    stfs f0, 0x8c(r29)
    bl strcpy
    cmpwi r31, 0x0
    beq lbl_fn_80201EFC_0000116C
    lwz r0, 0x104(r29)
    li r3, 0x1
    rlwimi r0, r3, 24, 0, 7
    stw r0, 0x104(r29)
    mr r3, r29
    addi r4, r29, 0x4c
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x48(r29)
    li r4, 0x1
    lwz r0, 0xfc(r3)
    rlwinm r0, r0, 0, 2, 0
    stw r0, 0xfc(r3)
    lwz r3, 0x48(r29)
    bl fn_800D246C
lbl_fn_80201EFC_0000116C:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8020205C(void)
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
    beq lbl_fn_8020205C_000011C8
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r31, 0x0
    ble lbl_fn_8020205C_000011C8
    mr r3, r30
    bl dtor_80084684
lbl_fn_8020205C_000011C8:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802020B4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x1
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x104(r3)
    rlwimi r0, r5, 24, 0, 7
    stw r0, 0x104(r3)
    mr r5, r4
    addi r4, r3, 0x4c
    bl fn_801F3FF8
    stw r3, 0x48(r31)
    li r4, 0x1
    lwz r0, 0xfc(r3)
    rlwinm r0, r0, 0, 2, 0
    stw r0, 0xfc(r3)
    lwz r3, 0x48(r31)
    bl fn_800D246C
    lwz r31, 0xc(r1)
    li r3, 0x1
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80202118(void)
{
    nofralloc
    lwz r0, 0x104(r3)
    srawi r0, r0, 24
    cmpwi r0, 0x1
    bne lbl_fn_80202118_00001260
    li r3, 0x0
    blr
lbl_fn_80202118_00001260:
    lwz r3, 0x48(r3)
    blr
}

asm void fn_80202138(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x104(r3)
    srawi r0, r0, 24
    cmpwi r0, 0x1
    bne lbl_fn_80202138_000012E0
    lwz r3, 0x48(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80202138_000012E0
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_80202138_000012D8
    li r4, 0x0
    bl fn_800D246C
    lwz r4, 0x48(r31)
    li r3, 0x2
    li r5, 0x0
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r0, 0x104(r31)
    rlwimi r0, r3, 24, 0, 7
    stw r0, 0x104(r31)
    b lbl_fn_80202138_000012E4
lbl_fn_80202138_000012D8:
    li r5, 0x1
    b lbl_fn_80202138_000012E4
lbl_fn_80202138_000012E0:
    li r5, 0x0
lbl_fn_80202138_000012E4:
    cntlzw r0, r5
    lwz r31, 0xc(r1)
    srwi r3, r0, 5
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802021D0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x104(r3)
    srawi r0, r0, 24
    cmpwi r0, 0x1
    bne lbl_fn_802021D0_00001378
    lwz r3, 0x48(r3)
    cmpwi r3, 0x0
    beq lbl_fn_802021D0_00001378
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_802021D0_00001370
    li r4, 0x0
    bl fn_800D246C
    lwz r4, 0x48(r31)
    li r3, 0x2
    li r5, 0x0
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r0, 0x104(r31)
    rlwimi r0, r3, 24, 0, 7
    stw r0, 0x104(r31)
    b lbl_fn_802021D0_0000137C
lbl_fn_802021D0_00001370:
    li r5, 0x1
    b lbl_fn_802021D0_0000137C
lbl_fn_802021D0_00001378:
    li r5, 0x0
lbl_fn_802021D0_0000137C:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80202260(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    stw r31, 0x9c(r1)
    mr r31, r3
    stw r30, 0x98(r1)
    stw r29, 0x94(r1)
    lwz r4, 0x104(r3)
    extlwi r0, r4, 2, 11
    srawi. r0, r0, 31
    beq lbl_fn_80202260_00001574
    srawi r0, r4, 24
    cmpwi r0, 0x1
    bne lbl_fn_80202260_0000141C
    lwz r3, 0x48(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80202260_0000141C
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_80202260_00001414
    li r4, 0x0
    bl fn_800D246C
    lwz r5, 0x48(r31)
    li r3, 0x2
    li r4, 0x0
    lwz r0, 0x38(r5)
    ori r0, r0, 0x4
    stw r0, 0x38(r5)
    lwz r0, 0x104(r31)
    rlwimi r0, r3, 24, 0, 7
    stw r0, 0x104(r31)
    b lbl_fn_80202260_00001420
lbl_fn_80202260_00001414:
    li r4, 0x1
    b lbl_fn_80202260_00001420
lbl_fn_80202260_0000141C:
    li r4, 0x0
lbl_fn_80202260_00001420:
    cmpwi r4, 0x0
    bne lbl_fn_80202260_00001574
    addi r29, r31, 0x8c
    psq_l f2, 0xd0(r31), 0, 0
    psq_l f4, 0xe0(r31), 0, 0
    addi r3, r1, 0x30
    psq_l f6, 0xf0(r31), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_l f1, 0xc8(r31), 0, 0
    psq_l f3, 0xd8(r31), 0, 0
    psq_l f5, 0xe8(r31), 0, 0
    lfs f8, 0xbc(r31)
    psq_st f1, 0x0(r29), 0, 0
    lfs f7, 0xc0(r31)
    psq_st f4, 0x18(r29), 0, 0
    lfs f0, 0xc4(r31)
    psq_st f6, 0x28(r29), 0, 0
    lfs f1, 0xf8(r31)
    psq_st f3, 0x10(r29), 0, 0
    lfs f2, 0xfc(r31)
    psq_st f5, 0x20(r29), 0, 0
    lfs f3, 0x100(r31)
    stfs f8, 0x98(r31)
    stfs f7, 0xa8(r31)
    stfs f0, 0xb8(r31)
    bl fn_805F9160
    mr r3, r29
    addi r4, r1, 0x30
    addi r5, r1, 0x60
    bl fn_805F89F0
    addi r4, r1, 0x60
    lwz r3, 0x48(r31)
    psq_l f1, 0x0(r4), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    cmpwi r3, 0x0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_st f6, 0x28(r29), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    beq lbl_fn_80202260_000014DC
    bl fn_801F4484
lbl_fn_80202260_000014DC:
    lwz r0, 0x104(r31)
    extlwi r0, r0, 2, 8
    srawi. r0, r0, 31
    beq lbl_fn_80202260_00001574
    lfs f8, lbl_80882CD8
    addi r5, r1, 0x14
    lfs f0, 0xc4(r31)
    addi r29, r1, 0x20
    lfs f9, lbl_80882CE4
    lis r3, lbl_8073E688@ha
    fadds f2, f0, f8
    lfs f7, 0xc0(r31)
    lfs f0, 0xbc(r31)
    fadds f7, f7, f9
    lwz r4, lbl_8087EFB4
    fadds f0, f0, f9
    stfs f7, 0x18(r1)
    addi r30, r4, 0x204
    stfs f0, 0x14(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    lfd f1, lbl_8073E688@l(r3)
    stfs f9, 0x8(r1)
    stfs f9, 0xc(r1)
    stfs f8, 0x10(r1)
    stfs f2, 0x1c(r1)
    stfs f2, 0x28(r1)
    bl fn_8068B100
    frsp f0, f1
    mr r3, r30
    mr r4, r29
    stfs f0, 0x2c(r1)
    bl fn_8004FF58
    cntlzw r0, r3
    srwi. r0, r0, 5
    bne lbl_fn_80202260_00001574
    mr r3, r31
    bl fn_80202460
lbl_fn_80202260_00001574:
    lwz r0, 0xa4(r1)
    lwz r31, 0x9c(r1)
    lwz r30, 0x98(r1)
    lwz r29, 0x94(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_80202460(void)
{
    nofralloc
    stwu r1, -0x360(r1)
    mflr r0
    lis r6, 0x4330
    lis r8, lbl_8073E690@ha
    stw r0, 0x364(r1)
    addi r9, r1, 0x2f0
    lfd f7, lbl_8073E690@l(r8)
    addi r10, r1, 0x2c0
    stfd f31, 0x350(r1)
    addi r11, r1, 0x290
    psq_st f31, 0x358(r1), 0, 0
    stfd f30, 0x340(r1)
    psq_st f30, 0x348(r1), 0, 0
    stw r31, 0x33c(r1)
    stw r30, 0x338(r1)
    mr r30, r3
    stw r29, 0x334(r1)
    stw r28, 0x330(r1)
    lwz r12, lbl_8087EEB0
    lwz r5, lbl_8087EEE0
    psq_l f2, 0xdc(r12), 0, 0
    lwz r0, 0x3c(r5)
    psq_l f3, 0xe4(r12), 0, 0
    psq_l f4, 0xec(r12), 0, 0
    xoris r7, r0, 0x8000
    psq_l f5, 0xf4(r12), 0, 0
    psq_l f6, 0xfc(r12), 0, 0
    lwz r5, 0x40(r5)
    psq_l f1, 0xd4(r12), 0, 0
    lwz r4, lbl_8087EFB4
    xoris r5, r5, 0x8000
    psq_st f2, 0x8(r9), 0, 0
    psq_l f2, 0x164(r4), 0, 0
    psq_st f3, 0x10(r9), 0, 0
    psq_l f3, 0x16c(r4), 0, 0
    psq_st f4, 0x18(r9), 0, 0
    psq_l f4, 0x174(r4), 0, 0
    psq_st f5, 0x20(r9), 0, 0
    psq_l f5, 0x17c(r4), 0, 0
    psq_st f6, 0x28(r9), 0, 0
    psq_l f6, 0x184(r4), 0, 0
    psq_st f1, 0x0(r9), 0, 0
    psq_l f1, 0x15c(r4), 0, 0
    psq_st f1, 0xd4(r12), 0, 0
    psq_st f2, 0xdc(r12), 0, 0
    psq_st f3, 0xe4(r12), 0, 0
    psq_st f4, 0xec(r12), 0, 0
    psq_st f5, 0xf4(r12), 0, 0
    psq_st f6, 0xfc(r12), 0, 0
    lwz r0, 0x104(r3)
    lwz r3, lbl_8087EEB0
    extlwi r0, r0, 2, 9
    psq_st f1, 0x0(r10), 0, 0
    psq_l f1, 0xa4(r3), 0, 0
    srawi. r0, r0, 31
    psq_st f2, 0x8(r10), 0, 0
    psq_l f2, 0xac(r3), 0, 0
    psq_st f3, 0x10(r10), 0, 0
    psq_l f3, 0xb4(r3), 0, 0
    psq_st f4, 0x18(r10), 0, 0
    psq_l f4, 0xbc(r3), 0, 0
    psq_st f5, 0x20(r10), 0, 0
    psq_l f5, 0xc4(r3), 0, 0
    psq_st f6, 0x28(r10), 0, 0
    psq_l f6, 0xcc(r3), 0, 0
    stw r7, 0x324(r1)
    lwz r31, 0xa0(r3)
    stw r6, 0x320(r1)
    lfd f0, 0x320(r1)
    stw r5, 0x32c(r1)
    fsubs f31, f0, f7
    stw r6, 0x328(r1)
    lfd f0, 0x328(r1)
    psq_st f1, 0x0(r11), 0, 0
    fsubs f30, f0, f7
    psq_st f2, 0x8(r11), 0, 0
    psq_st f3, 0x10(r11), 0, 0
    psq_st f4, 0x18(r11), 0, 0
    psq_st f5, 0x20(r11), 0, 0
    psq_st f6, 0x28(r11), 0, 0
    beq lbl_fn_80202460_000017AC
    lfs f1, lbl_80882CE0
    addi r3, r1, 0x200
    lfs f2, lbl_80882CE8
    fmr f3, f1
    stfs f1, 0x44(r1)
    stfs f2, 0x48(r1)
    stfs f1, 0x4c(r1)
    bl fn_805F9160
    fneg f8, f30
    addi r4, r1, 0x200
    lfs f7, lbl_80882CF0
    fneg f0, f31
    lfs f9, lbl_80882CEC
    addi r29, r1, 0x260
    fmuls f8, f7, f8
    psq_l f1, 0x0(r4), 0, 0
    fmuls f0, f7, f0
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    addi r3, r1, 0x110
    psq_st f1, 0x0(r29), 0, 0
    fmr f1, f0
    psq_l f4, 0x18(r4), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    fmr f2, f8
    psq_l f5, 0x20(r4), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    fmr f3, f9
    psq_l f6, 0x28(r4), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
    stfs f0, 0x38(r1)
    stfs f8, 0x3c(r1)
    stfs f9, 0x40(r1)
    bl fn_805F90D0
    mr r3, r29
    addi r4, r1, 0x110
    addi r5, r1, 0x140
    bl fn_805F89F0
    addi r3, r1, 0x140
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
    b lbl_fn_80202460_00001804
lbl_fn_80202460_000017AC:
    lfs f1, lbl_80882CE0
    addi r3, r1, 0x1d0
    lfs f2, lbl_80882CE8
    fmr f3, f1
    stfs f1, 0x2c(r1)
    stfs f2, 0x30(r1)
    stfs f1, 0x34(r1)
    bl fn_805F9160
    addi r4, r1, 0x1d0
    addi r3, r1, 0x260
    psq_l f1, 0x0(r4), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f4, 0x18(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    psq_st f6, 0x28(r3), 0, 0
lbl_fn_80202460_00001804:
    addi r4, r1, 0x260
    addi r3, r30, 0x8c
    mr r5, r4
    bl fn_805F89F0
    lwz r0, 0x104(r30)
    extlwi r0, r0, 2, 9
    srawi. r0, r0, 31
    beq lbl_fn_80202460_000018FC
    lfs f1, lbl_80882CE0
    addi r3, r1, 0x1a0
    lfs f2, lbl_80882CE8
    fmr f3, f1
    stfs f1, 0x20(r1)
    stfs f2, 0x24(r1)
    stfs f1, 0x28(r1)
    bl fn_805F9160
    fneg f8, f30
    addi r4, r1, 0x1a0
    lfs f7, lbl_80882CF0
    fneg f0, f31
    lfs f9, lbl_80882CD8
    addi r29, r1, 0x260
    fmuls f8, f7, f8
    psq_l f1, 0x0(r4), 0, 0
    fmuls f0, f7, f0
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    addi r3, r1, 0xb0
    psq_st f1, 0x0(r29), 0, 0
    fmr f1, f0
    psq_l f4, 0x18(r4), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    fmr f2, f8
    psq_l f5, 0x20(r4), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    fmr f3, f9
    psq_l f6, 0x28(r4), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
    stfs f0, 0x14(r1)
    stfs f8, 0x18(r1)
    stfs f9, 0x1c(r1)
    bl fn_805F90D0
    mr r3, r29
    addi r4, r1, 0xb0
    addi r5, r1, 0xe0
    bl fn_805F89F0
    addi r3, r1, 0xe0
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
    b lbl_fn_80202460_00001954
lbl_fn_80202460_000018FC:
    lfs f1, lbl_80882CE0
    addi r3, r1, 0x170
    lfs f2, lbl_80882CE8
    fmr f3, f1
    stfs f1, 0x8(r1)
    stfs f2, 0xc(r1)
    stfs f1, 0x10(r1)
    bl fn_805F9160
    addi r4, r1, 0x170
    addi r3, r1, 0x260
    psq_l f1, 0x0(r4), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f4, 0x18(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    psq_st f6, 0x28(r3), 0, 0
lbl_fn_80202460_00001954:
    addi r4, r1, 0x260
    addi r3, r30, 0x8c
    mr r5, r4
    bl fn_805F89F0
    lfs f2, lbl_80882CD8
    addi r29, r1, 0xa4
    stfs f2, 0x98(r1)
    addi r6, r1, 0x98
    mr r4, r29
    mr r5, r29
    stfs f2, 0x9c(r1)
    addi r3, r1, 0x260
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0xa0(r1)
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0xac(r1)
    bl fn_805F93C0
    lfs f0, lbl_80882CD8
    addi r28, r1, 0x8c
    lfs f7, lbl_80882CE0
    addi r6, r1, 0x230
    lfs f2, 0xac(r1)
    addi r7, r1, 0x80
    stfs f2, 0x238(r1)
    fmr f2, f0
    psq_l f1, 0x0(r29), 0, 0
    mr r4, r28
    stfs f7, 0x80(r1)
    mr r5, r28
    addi r3, r1, 0x260
    stfs f0, 0x84(r1)
    psq_st f1, 0x0(r6), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    stfs f0, 0x88(r1)
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x94(r1)
    bl fn_805F93C0
    lfs f7, lbl_80882CD8
    addi r29, r1, 0x74
    lfs f0, lbl_80882CE0
    addi r6, r1, 0x23c
    lfs f2, 0x94(r1)
    addi r7, r1, 0x68
    stfs f2, 0x244(r1)
    fmr f2, f7
    psq_l f1, 0x0(r28), 0, 0
    mr r4, r29
    stfs f7, 0x68(r1)
    mr r5, r29
    addi r3, r1, 0x260
    stfs f0, 0x6c(r1)
    psq_st f1, 0x0(r6), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    stfs f7, 0x70(r1)
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x7c(r1)
    bl fn_805F93C0
    lfs f7, lbl_80882CE0
    addi r28, r1, 0x5c
    lfs f0, lbl_80882CD8
    addi r6, r1, 0x248
    lfs f2, 0x7c(r1)
    addi r7, r1, 0x50
    stfs f2, 0x250(r1)
    fmr f2, f0
    psq_l f1, 0x0(r29), 0, 0
    mr r4, r28
    stfs f7, 0x50(r1)
    mr r5, r28
    addi r3, r1, 0x260
    stfs f7, 0x54(r1)
    psq_st f1, 0x0(r6), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    stfs f0, 0x58(r1)
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x64(r1)
    bl fn_805F93C0
    lfs f2, 0x64(r1)
    li r0, 0xd
    psq_l f1, 0x0(r28), 0, 0
    addi r3, r1, 0x254
    lwz r5, lbl_8087EEB0
    addi r4, r1, 0x260
    stfs f2, 0x25c(r1)
    stw r0, 0xa0(r5)
    psq_st f1, 0x0(r3), 0, 0
    lwz r3, lbl_8087EEB0
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0xa4(r3), 0, 0
    psq_st f2, 0xac(r3), 0, 0
    psq_st f3, 0xb4(r3), 0, 0
    psq_st f4, 0xbc(r3), 0, 0
    psq_st f5, 0xc4(r3), 0, 0
    psq_st f6, 0xcc(r3), 0, 0
    lwz r3, 0x48(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80202460_00001AF4
    li r4, 0x1
    bl fn_801F465C
lbl_fn_80202460_00001AF4:
    lwz r5, lbl_8087EEB0
    addi r3, r1, 0x290
    psq_l f1, 0x0(r3), 0, 0
    addi r4, r1, 0x2f0
    stw r31, 0xa0(r5)
    psq_l f2, 0x8(r3), 0, 0
    lwz r5, lbl_8087EEB0
    psq_l f3, 0x10(r3), 0, 0
    psq_st f1, 0xa4(r5), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_st f2, 0xac(r5), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_st f3, 0xb4(r5), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f4, 0xbc(r5), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    psq_st f5, 0xc4(r5), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    psq_st f6, 0xcc(r5), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    lwz r3, lbl_8087EEB0
    psq_l f4, 0x18(r4), 0, 0
    psq_st f1, 0xd4(r3), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_st f2, 0xdc(r3), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_st f3, 0xe4(r3), 0, 0
    psq_st f4, 0xec(r3), 0, 0
    psq_st f5, 0xf4(r3), 0, 0
    psq_st f6, 0xfc(r3), 0, 0
    psq_l f31, 0x358(r1), 0, 0
    lfd f31, 0x350(r1)
    psq_l f30, 0x348(r1), 0, 0
    lfd f30, 0x340(r1)
    lwz r31, 0x33c(r1)
    lwz r30, 0x338(r1)
    lwz r29, 0x334(r1)
    lwz r28, 0x330(r1)
    lwz r0, 0x364(r1)
    mtlr r0
    addi r1, r1, 0x360
    blr
}
