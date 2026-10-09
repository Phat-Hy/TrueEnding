#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void __register_global_object(void);
extern void _restgpr_14(void);
extern void _savegpr_14(void);
extern void dtor_80084684(void);
extern void fn_8003EFB0(void);
extern void fn_800827E0(void);
extern void fn_80083AD4(void);
extern void fn_800D246C(void);
extern void fn_800E2FE0(void);
extern void fn_800EE5AC(void);
extern void fn_8013655C(void);
extern void fn_80139560(void);
extern void fn_80145334(void);
extern void fn_80149A30(void);
extern void fn_8014C540(void);
extern void fn_8015EB2C(void);
extern void fn_80176ACC(void);
extern void fn_8035B78C(void);
extern void fn_8050128C(void);
extern void fn_80508F0C(void);
extern void fn_80680770(void);
extern void fn_80686EA4(void);

/* External data declarations */
extern u8 lbl_80759E48[];
extern u8 lbl_80791718[];
extern u8 lbl_80792A28[];
extern u8 lbl_807C6BB8[];
extern u8 lbl_807C8F48[];

/* Small data declarations */
extern u32 lbl_8087EE74;
extern u32 lbl_8087F61C;
extern u32 lbl_80887590;
extern u32 lbl_808875CC;

/* Function declarations */
void fn_804FC244(void);
void fn_804FC26C(void);
void fn_804FC294(void);
void fn_804FC2F4(void);
void fn_804FC514(void);
void fn_804FC51C(void);
void fn_804FC524(void);
void fn_804FC52C(void);
void fn_804FC584(void);
void fn_804FC5AC(void);
void fn_804FC7E0(void);
void fn_804FC7E4(void);
void fn_804FC8D0(void);
void fn_804FC9C4(void);
void fn_804FCA38(void);

asm void fn_804FC244(void)
{
    nofralloc
    lwz r0, 0x270(r3)
    clrlwi r4, r4, 28
    cmplw r4, r0
    blt lbl_fn_804FC244_00000018
    li r3, 0x0
    blr
lbl_fn_804FC244_00000018:
    mulli r0, r4, 0x34
    add r3, r3, r0
    addi r3, r3, 0x274
    blr
}

asm void fn_804FC26C(void)
{
    nofralloc
    lwz r0, 0x270(r3)
    clrlwi r4, r4, 28
    cmplw r4, r0
    blt lbl_fn_804FC26C_00000040
    li r3, 0x0
    blr
lbl_fn_804FC26C_00000040:
    mulli r0, r4, 0x34
    add r3, r3, r0
    addi r3, r3, 0x274
    blr
}

asm void fn_804FC294(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    bl fn_80508F0C
    lwz r0, lbl_8087F61C
    mr r31, r3
    cmpwi r0, 0x0
    beq lbl_fn_804FC294_00000098
    beq lbl_fn_804FC294_00000090
    mr r3, r0
    li r4, 0x1
    lwz r12, 0x0(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_804FC294_00000090:
    li r0, 0x0
    stw r0, lbl_8087F61C
lbl_fn_804FC294_00000098:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804FC2F4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x34(r1)
    stmw r24, 0x10(r1)
    mr r30, r3
    mr r31, r4
    beq lbl_fn_804FC2F4_000002B8
    lwz r0, 0x14(r3)
    lis r4, lbl_80792A28@ha
    addi r4, r4, lbl_80792A28@l
    stw r4, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804FC2F4_0000010C
    beq lbl_fn_804FC2F4_00000104
    mr r3, r0
    li r4, 0x1
    lwz r12, 0x0(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_804FC2F4_00000104:
    li r0, 0x0
    stw r0, 0x14(r30)
lbl_fn_804FC2F4_0000010C:
    cmpwi r30, 0x0
    beq lbl_fn_804FC2F4_000002A8
    lis r3, lbl_80791718@ha
    lwz r26, 0xc(r30)
    addi r3, r3, lbl_80791718@l
    stw r3, 0x0(r30)
    addi r28, r30, 0x8
    li r29, 0x0
    b lbl_fn_804FC2F4_0000016C
lbl_fn_804FC2F4_00000130:
    lwz r27, 0x28(r26)
    cmpwi r27, 0x0
    beq lbl_fn_804FC2F4_0000014C
    bl fn_800827E0
    mr r4, r27
    bl fn_80083AD4
    stw r29, 0x28(r26)
lbl_fn_804FC2F4_0000014C:
    lwz r27, 0x2c(r26)
    cmpwi r27, 0x0
    beq lbl_fn_804FC2F4_00000168
    bl fn_800827E0
    mr r4, r27
    bl fn_80083AD4
    stw r29, 0x2c(r26)
lbl_fn_804FC2F4_00000168:
    lwz r26, 0x4(r26)
lbl_fn_804FC2F4_0000016C:
    cmplw r26, r28
    bne lbl_fn_804FC2F4_00000130
    lwz r25, 0xc(r30)
    cmplw r25, r28
    beq lbl_fn_804FC2F4_00000204
    lwz r4, 0x0(r28)
    li r29, 0x0
    lwz r3, 0x0(r25)
    lwz r0, 0x4(r4)
    stw r0, 0x4(r3)
    lwz r3, 0x4(r4)
    lwz r0, 0x0(r25)
    stw r0, 0x0(r3)
    b lbl_fn_804FC2F4_000001FC
lbl_fn_804FC2F4_000001A4:
    addic. r27, r25, 0x20
    beq lbl_fn_804FC2F4_000001E4
    lwz r26, 0x8(r27)
    cmpwi r26, 0x0
    beq lbl_fn_804FC2F4_000001C8
    bl fn_800827E0
    mr r4, r26
    bl fn_80083AD4
    stw r29, 0x8(r27)
lbl_fn_804FC2F4_000001C8:
    lwz r26, 0xc(r27)
    cmpwi r26, 0x0
    beq lbl_fn_804FC2F4_000001E4
    bl fn_800827E0
    mr r4, r26
    bl fn_80083AD4
    stw r29, 0xc(r27)
lbl_fn_804FC2F4_000001E4:
    mr r3, r25
    lwz r25, 0x4(r25)
    bl dtor_80084684
    lwz r3, 0x4(r30)
    subi r0, r3, 0x1
    stw r0, 0x4(r30)
lbl_fn_804FC2F4_000001FC:
    cmplw r25, r28
    bne lbl_fn_804FC2F4_000001A4
lbl_fn_804FC2F4_00000204:
    addic. r28, r30, 0x4
    beq lbl_fn_804FC2F4_000002A8
    beq lbl_fn_804FC2F4_000002A8
    beq lbl_fn_804FC2F4_000002A8
    lwz r24, 0x8(r28)
    addi r25, r28, 0x4
    cmplw r24, r25
    beq lbl_fn_804FC2F4_000002A8
    lwz r4, 0x0(r25)
    li r29, 0x0
    lwz r3, 0x0(r24)
    lwz r0, 0x4(r4)
    stw r0, 0x4(r3)
    lwz r3, 0x4(r4)
    lwz r0, 0x0(r24)
    stw r0, 0x0(r3)
    b lbl_fn_804FC2F4_000002A0
lbl_fn_804FC2F4_00000248:
    addic. r27, r24, 0x20
    beq lbl_fn_804FC2F4_00000288
    lwz r26, 0x8(r27)
    cmpwi r26, 0x0
    beq lbl_fn_804FC2F4_0000026C
    bl fn_800827E0
    mr r4, r26
    bl fn_80083AD4
    stw r29, 0x8(r27)
lbl_fn_804FC2F4_0000026C:
    lwz r26, 0xc(r27)
    cmpwi r26, 0x0
    beq lbl_fn_804FC2F4_00000288
    bl fn_800827E0
    mr r4, r26
    bl fn_80083AD4
    stw r29, 0xc(r27)
lbl_fn_804FC2F4_00000288:
    mr r3, r24
    lwz r24, 0x4(r24)
    bl dtor_80084684
    lwz r3, 0x0(r28)
    subi r0, r3, 0x1
    stw r0, 0x0(r28)
lbl_fn_804FC2F4_000002A0:
    cmplw r24, r25
    bne lbl_fn_804FC2F4_00000248
lbl_fn_804FC2F4_000002A8:
    cmpwi r31, 0x0
    ble lbl_fn_804FC2F4_000002B8
    mr r3, r30
    bl dtor_80084684
lbl_fn_804FC2F4_000002B8:
    mr r3, r30
    lmw r24, 0x10(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_804FC514(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_804FC51C(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_804FC524(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_804FC52C(void)
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
    beq lbl_fn_804FC52C_00000324
    li r4, 0x0
    bl fn_8035B78C
    cmpwi r31, 0x0
    ble lbl_fn_804FC52C_00000324
    mr r3, r30
    bl dtor_80084684
lbl_fn_804FC52C_00000324:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804FC584(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_8013655C
    cntlzw r0, r3
    srwi r3, r0, 5
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804FC5AC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    lwz r0, 0x14b0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804FC5AC_000003A0
    bl fn_80176ACC
    li r0, 0x1
    stw r0, 0x14b0(r31)
lbl_fn_804FC5AC_000003A0:
    lwz r0, 0x38(r31)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_804FC5AC_0000057C
    lwz r0, 0x7e0(r31)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_804FC5AC_000003D4
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x2
    beq lbl_fn_804FC5AC_000003D4
    li r0, 0x2
    stw r0, 0x58c(r31)
lbl_fn_804FC5AC_000003D4:
    lwz r0, 0x14a8(r31)
    extrwi. r3, r0, 1, 6
    beq lbl_fn_804FC5AC_000003EC
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x2
    bne lbl_fn_804FC5AC_0000056C
lbl_fn_804FC5AC_000003EC:
    cmpwi r3, 0x0
    beq lbl_fn_804FC5AC_00000418
    lwz r0, 0x12a4(r31)
    extrwi. r0, r0, 1, 29
    bne lbl_fn_804FC5AC_00000418
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x6
    beq lbl_fn_804FC5AC_00000418
    lwz r0, 0x12a4(r31)
    ori r0, r0, 0x4
    stw r0, 0x12a4(r31)
lbl_fn_804FC5AC_00000418:
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x2
    bne lbl_fn_804FC5AC_00000530
    mr r3, r31
    bl fn_8015EB2C
    cmpwi r3, 0x0
    bne lbl_fn_804FC5AC_00000454
    lwz r0, 0x14b4(r31)
    cmpwi r0, 0x0
    bne lbl_fn_804FC5AC_00000454
    mr r3, r31
    bl fn_80139560
    li r0, 0x0
    stw r0, 0x1450(r31)
    b lbl_fn_804FC5AC_00000538
lbl_fn_804FC5AC_00000454:
    lwz r0, 0x1450(r31)
    cmpwi r0, 0x0
    bne lbl_fn_804FC5AC_00000538
    lbz r0, lbl_8087EE74
    extsb. r0, r0
    bne lbl_fn_804FC5AC_000004A0
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
lbl_fn_804FC5AC_000004A0:
    lis r29, lbl_807C6BB8@ha
    addi r29, r29, lbl_807C6BB8@l
    lwz r0, 0xc(r29)
    cmpwi r0, 0x0
    beq lbl_fn_804FC5AC_00000508
    li r28, 0x0
    li r30, 0x0
    b lbl_fn_804FC5AC_000004FC
lbl_fn_804FC5AC_000004C0:
    lwz r0, 0x0(r29)
    add r3, r0, r30
    lwzx r0, r30, r0
    cmpwi r0, -0x1
    beq lbl_fn_804FC5AC_000004DC
    cmpwi r0, 0x5
    bne lbl_fn_804FC5AC_000004F4
lbl_fn_804FC5AC_000004DC:
    lwz r12, 0x4(r3)
    mr r4, r31
    li r3, 0x5
    li r5, 0x0
    mtctr r12
    bctrl
lbl_fn_804FC5AC_000004F4:
    addi r28, r28, 0x1
    addi r30, r30, 0x8
lbl_fn_804FC5AC_000004FC:
    lwz r0, 0x4(r29)
    cmpw r28, r0
    blt lbl_fn_804FC5AC_000004C0
lbl_fn_804FC5AC_00000508:
    lwz r0, 0x5c0(r31)
    mr r3, r31
    li r4, 0x1
    clrrwi r0, r0, 1
    stw r0, 0x5c0(r31)
    bl fn_800D246C
    li r0, 0x1
    stw r0, 0x14b4(r31)
    stw r0, 0x1450(r31)
    b lbl_fn_804FC5AC_00000538
lbl_fn_804FC5AC_00000530:
    li r0, 0x0
    stw r0, 0x14b4(r31)
lbl_fn_804FC5AC_00000538:
    mr r3, r31
    bl fn_8014C540
    lwz r4, 0x648(r31)
    mr r3, r31
    bl fn_800EE5AC
    lwz r4, 0x64c(r31)
    cmpwi r4, 0x0
    beq lbl_fn_804FC5AC_00000560
    mr r3, r31
    bl fn_800EE5AC
lbl_fn_804FC5AC_00000560:
    mr r3, r31
    bl fn_80145334
    b lbl_fn_804FC5AC_0000057C
lbl_fn_804FC5AC_0000056C:
    li r0, 0x0
    stw r0, 0x14b4(r31)
    mr r3, r31
    bl fn_800E2FE0
lbl_fn_804FC5AC_0000057C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804FC7E0(void)
{
    nofralloc
    b fn_80149A30
}

asm void fn_804FC7E4(void)
{
    nofralloc
    lwz r6, 0x5e0(r3)
    cmpwi r6, 0x0
    beq lbl_fn_804FC7E4_000005C8
    lwz r9, 0x10d8(r6)
    cmpwi r9, 0x0
    beq lbl_fn_804FC7E4_000005C8
    lwz r0, 0x38(r9)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_804FC7E4_000005D0
lbl_fn_804FC7E4_000005C8:
    li r3, 0x0
    blr
lbl_fn_804FC7E4_000005D0:
    li r10, 0x0
    li r8, 0x0
    b lbl_fn_804FC7E4_00000678
lbl_fn_804FC7E4_000005DC:
    lwz r6, 0x540(r3)
    lwz r0, 0x7c(r9)
    cmpwi r6, 0x0
    add r7, r0, r8
    bne lbl_fn_804FC7E4_00000608
    lwz r0, 0x0(r7)
    cmpwi r0, 0x64
    blt lbl_fn_804FC7E4_00000670
    cmpwi r0, 0x78
    ble lbl_fn_804FC7E4_0000064C
    b lbl_fn_804FC7E4_00000670
lbl_fn_804FC7E4_00000608:
    lwz r0, 0x0(r7)
    cmpwi r0, 0x64
    bge lbl_fn_804FC7E4_00000670
    cmpwi r6, 0x1
    bne lbl_fn_804FC7E4_0000063C
    cmpwi r5, 0x2
    bne lbl_fn_804FC7E4_0000062C
    cmpwi r0, 0x32
    bge lbl_fn_804FC7E4_00000670
lbl_fn_804FC7E4_0000062C:
    cmpwi r5, 0x1
    bne lbl_fn_804FC7E4_0000063C
    cmpwi r0, 0x32
    blt lbl_fn_804FC7E4_00000670
lbl_fn_804FC7E4_0000063C:
    cmpwi r6, 0x2
    bne lbl_fn_804FC7E4_0000064C
    cmpwi r0, 0xa
    bge lbl_fn_804FC7E4_00000670
lbl_fn_804FC7E4_0000064C:
    lwz r0, 0x0(r4)
    slwi r0, r0, 2
    add r0, r4, r0
    addic. r6, r0, 0x4
    beq lbl_fn_804FC7E4_00000664
    stw r7, 0x0(r6)
lbl_fn_804FC7E4_00000664:
    lwz r6, 0x0(r4)
    addi r0, r6, 0x1
    stw r0, 0x0(r4)
lbl_fn_804FC7E4_00000670:
    addi r8, r8, 0x28
    addi r10, r10, 0x1
lbl_fn_804FC7E4_00000678:
    lwz r0, 0x78(r9)
    cmplw r10, r0
    blt lbl_fn_804FC7E4_000005DC
    li r3, 0x1
    blr
}

asm void fn_804FC8D0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r5, 0x13
    stw r0, 0x24(r1)
    addi r0, r5, 0x299e
    stw r31, 0x1c(r1)
    stw r4, 0x8(r1)
    lwz r31, 0x8(r3)
    subf r0, r31, r0
    cmplw r4, r0
    ble lbl_fn_804FC8D0_000006D8
    lis r3, __files@ha
    lis r4, lbl_80759E48@ha
    addi r3, r3, __files@l
    addi r4, r4, lbl_80759E48@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_804FC8D0_000006D8:
    lis r3, 0x6
    addi r0, r3, 0x6334
    cmplw r31, r0
    bge lbl_fn_804FC8D0_00000728
    addi r5, r31, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x8(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x10
    srwi r4, r4, 2
    stw r4, 0x10(r1)
    cmplw r4, r0
    bge lbl_fn_804FC8D0_0000071C
    addi r3, r1, 0x8
lbl_fn_804FC8D0_0000071C:
    lwz r0, 0x0(r3)
    add r3, r31, r0
    b lbl_fn_804FC8D0_0000076C
lbl_fn_804FC8D0_00000728:
    lis r3, 0xd
    subi r0, r3, 0x3998
    cmplw r31, r0
    bge lbl_fn_804FC8D0_00000764
    addi r3, r31, 0x1
    lwz r0, 0x8(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_804FC8D0_00000758
    addi r3, r1, 0x8
lbl_fn_804FC8D0_00000758:
    lwz r0, 0x0(r3)
    add r3, r31, r0
    b lbl_fn_804FC8D0_0000076C
lbl_fn_804FC8D0_00000764:
    lis r3, 0x13
    addi r3, r3, 0x299e
lbl_fn_804FC8D0_0000076C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804FC9C4(void)
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
    beq lbl_fn_804FC9C4_000007D8
    li r4, 0x0
    stw r4, 0x4(r3)
    beq lbl_fn_804FC9C4_000007C8
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804FC9C4_000007C8
    stw r4, 0x4(r3)
    mr r3, r0
    bl dtor_80084684
lbl_fn_804FC9C4_000007C8:
    cmpwi r31, 0x0
    ble lbl_fn_804FC9C4_000007D8
    mr r3, r30
    bl dtor_80084684
lbl_fn_804FC9C4_000007D8:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804FCA38(void)
{
    nofralloc
    stwu r1, -0xdd0(r1)
    mflr r0
    stw r0, 0xdd4(r1)
    li r0, 0xdc8
    addi r11, r1, 0xdb0
    stfd f31, 0xdc0(r1)
    psq_stx f31, r1, r0, 0, 0
    li r0, 0xdb8
    stfd f30, 0xdb0(r1)
    psq_stx f30, r1, r0, 0, 0
    bl _savegpr_14
    lwz r5, 0x10(r3)
    mr r21, r4
    lwz r0, 0x4(r3)
    cmpwi r4, 0x0
    mulli r4, r5, 0xd5c
    lwz r5, 0x0(r3)
    mr r15, r3
    mulli r3, r0, 0xd5c
    add r0, r5, r4
    add r20, r3, r0
    beq lbl_fn_804FCA38_0000206C
    lfs f30, lbl_808875CC
    addi r22, r1, 0x3c0
    lfs f31, lbl_80887590
    addi r23, r1, 0x6d4
    addi r24, r1, 0x9e8
    addi r25, r1, 0xcfc
    addi r19, r1, 0xc5c
    addi r18, r1, 0x948
    addi r17, r1, 0x634
    addi r16, r1, 0x320
    li r26, -0x1
    li r27, 0x0
    li r28, 0xff
    li r31, 0xa0
    li r14, 0x14
    li r29, 0xa0
    li r30, 0x14
    b lbl_fn_804FCA38_00002064
lbl_fn_804FCA38_00000894:
    stw r27, 0x8(r1)
    addi r3, r1, 0x3c
    li r4, 0x0
    li r5, 0x7c
    bl memset
    lhz r0, 0xf4(r1)
    addi r3, r1, 0x11c
    stw r26, 0xf0(r1)
    li r4, 0x0
    rlwinm r0, r0, 0, 17, 15
    li r5, 0x20
    sth r0, 0xf4(r1)
    stw r26, 0xf8(r1)
    stw r26, 0xfc(r1)
    stw r26, 0x100(r1)
    stw r26, 0x104(r1)
    stw r26, 0x108(r1)
    stw r26, 0x10c(r1)
    stw r26, 0x110(r1)
    stw r26, 0x114(r1)
    stw r26, 0x118(r1)
    bl memset
    addi r3, r1, 0x154
    stw r26, 0x13c(r1)
    cmplw r3, r22
    sth r26, 0x140(r1)
    sth r27, 0x142(r1)
    stfs f30, 0x144(r1)
    stfs f31, 0x148(r1)
    stfs f31, 0x14c(r1)
    stfs f30, 0x150(r1)
    bge lbl_fn_804FCA38_00000A50
    li r0, 0x0
    li r4, 0x0
    bgt lbl_fn_804FCA38_00000924
    li r4, 0x1
lbl_fn_804FCA38_00000924:
    cmpwi r4, 0x0
    beq lbl_fn_804FCA38_00000930
    li r0, 0x1
lbl_fn_804FCA38_00000930:
    cmpwi r0, 0x0
    beq lbl_fn_804FCA38_00000A18
    addi r0, r16, 0x9f
    subf r0, r3, r0
    divwu r0, r0, r29
    mtctr r0
    cmplw r3, r16
    bge lbl_fn_804FCA38_00000A18
lbl_fn_804FCA38_00000950:
    sth r26, 0x0(r3)
    sth r27, 0x2(r3)
    stfs f30, 0x4(r3)
    stfs f31, 0x8(r3)
    stfs f31, 0xc(r3)
    stfs f30, 0x10(r3)
    sth r26, 0x14(r3)
    sth r27, 0x16(r3)
    stfs f30, 0x18(r3)
    stfs f31, 0x1c(r3)
    stfs f31, 0x20(r3)
    stfs f30, 0x24(r3)
    sth r26, 0x28(r3)
    sth r27, 0x2a(r3)
    stfs f30, 0x2c(r3)
    stfs f31, 0x30(r3)
    stfs f31, 0x34(r3)
    stfs f30, 0x38(r3)
    sth r26, 0x3c(r3)
    sth r27, 0x3e(r3)
    stfs f30, 0x40(r3)
    stfs f31, 0x44(r3)
    stfs f31, 0x48(r3)
    stfs f30, 0x4c(r3)
    sth r26, 0x50(r3)
    sth r27, 0x52(r3)
    stfs f30, 0x54(r3)
    stfs f31, 0x58(r3)
    stfs f31, 0x5c(r3)
    stfs f30, 0x60(r3)
    sth r26, 0x64(r3)
    sth r27, 0x66(r3)
    stfs f30, 0x68(r3)
    stfs f31, 0x6c(r3)
    stfs f31, 0x70(r3)
    stfs f30, 0x74(r3)
    sth r26, 0x78(r3)
    sth r27, 0x7a(r3)
    stfs f30, 0x7c(r3)
    stfs f31, 0x80(r3)
    stfs f31, 0x84(r3)
    stfs f30, 0x88(r3)
    sth r26, 0x8c(r3)
    sth r27, 0x8e(r3)
    stfs f30, 0x90(r3)
    stfs f31, 0x94(r3)
    stfs f31, 0x98(r3)
    stfs f30, 0x9c(r3)
    addi r3, r3, 0xa0
    bdnz lbl_fn_804FCA38_00000950
lbl_fn_804FCA38_00000A18:
    addi r0, r22, 0x13
    subf r0, r3, r0
    divwu r0, r0, r30
    mtctr r0
    cmplw r3, r22
    bge lbl_fn_804FCA38_00000A50
lbl_fn_804FCA38_00000A30:
    sth r26, 0x0(r3)
    sth r27, 0x2(r3)
    stfs f30, 0x4(r3)
    stfs f31, 0x8(r3)
    stfs f31, 0xc(r3)
    stfs f30, 0x10(r3)
    addi r3, r3, 0x14
    bdnz lbl_fn_804FCA38_00000A30
lbl_fn_804FCA38_00000A50:
    lhz r0, 0x408(r1)
    addi r3, r1, 0x430
    stw r27, 0x3c0(r1)
    li r4, 0x0
    rlwinm r0, r0, 0, 17, 15
    li r5, 0x20
    sth r27, 0x3c4(r1)
    stw r26, 0x404(r1)
    sth r0, 0x408(r1)
    stw r26, 0x40c(r1)
    stw r26, 0x410(r1)
    stw r26, 0x414(r1)
    stw r26, 0x418(r1)
    stw r26, 0x41c(r1)
    stw r26, 0x420(r1)
    stw r26, 0x424(r1)
    stw r26, 0x428(r1)
    stw r26, 0x42c(r1)
    bl memset
    addi r3, r1, 0x468
    stw r26, 0x450(r1)
    cmplw r3, r23
    sth r26, 0x454(r1)
    sth r27, 0x456(r1)
    stfs f30, 0x458(r1)
    stfs f31, 0x45c(r1)
    stfs f31, 0x460(r1)
    stfs f30, 0x464(r1)
    bge lbl_fn_804FCA38_00000C00
    li r0, 0x0
    li r4, 0x0
    bgt lbl_fn_804FCA38_00000AD4
    li r4, 0x1
lbl_fn_804FCA38_00000AD4:
    cmpwi r4, 0x0
    beq lbl_fn_804FCA38_00000AE0
    li r0, 0x1
lbl_fn_804FCA38_00000AE0:
    cmpwi r0, 0x0
    beq lbl_fn_804FCA38_00000BC8
    addi r0, r17, 0x9f
    subf r0, r3, r0
    divwu r0, r0, r31
    mtctr r0
    cmplw r3, r17
    bge lbl_fn_804FCA38_00000BC8
lbl_fn_804FCA38_00000B00:
    sth r26, 0x0(r3)
    sth r27, 0x2(r3)
    stfs f30, 0x4(r3)
    stfs f31, 0x8(r3)
    stfs f31, 0xc(r3)
    stfs f30, 0x10(r3)
    sth r26, 0x14(r3)
    sth r27, 0x16(r3)
    stfs f30, 0x18(r3)
    stfs f31, 0x1c(r3)
    stfs f31, 0x20(r3)
    stfs f30, 0x24(r3)
    sth r26, 0x28(r3)
    sth r27, 0x2a(r3)
    stfs f30, 0x2c(r3)
    stfs f31, 0x30(r3)
    stfs f31, 0x34(r3)
    stfs f30, 0x38(r3)
    sth r26, 0x3c(r3)
    sth r27, 0x3e(r3)
    stfs f30, 0x40(r3)
    stfs f31, 0x44(r3)
    stfs f31, 0x48(r3)
    stfs f30, 0x4c(r3)
    sth r26, 0x50(r3)
    sth r27, 0x52(r3)
    stfs f30, 0x54(r3)
    stfs f31, 0x58(r3)
    stfs f31, 0x5c(r3)
    stfs f30, 0x60(r3)
    sth r26, 0x64(r3)
    sth r27, 0x66(r3)
    stfs f30, 0x68(r3)
    stfs f31, 0x6c(r3)
    stfs f31, 0x70(r3)
    stfs f30, 0x74(r3)
    sth r26, 0x78(r3)
    sth r27, 0x7a(r3)
    stfs f30, 0x7c(r3)
    stfs f31, 0x80(r3)
    stfs f31, 0x84(r3)
    stfs f30, 0x88(r3)
    sth r26, 0x8c(r3)
    sth r27, 0x8e(r3)
    stfs f30, 0x90(r3)
    stfs f31, 0x94(r3)
    stfs f31, 0x98(r3)
    stfs f30, 0x9c(r3)
    addi r3, r3, 0xa0
    bdnz lbl_fn_804FCA38_00000B00
lbl_fn_804FCA38_00000BC8:
    addi r0, r23, 0x13
    subf r0, r3, r0
    divwu r0, r0, r14
    mtctr r0
    cmplw r3, r23
    bge lbl_fn_804FCA38_00000C00
lbl_fn_804FCA38_00000BE0:
    sth r26, 0x0(r3)
    sth r27, 0x2(r3)
    stfs f30, 0x4(r3)
    stfs f31, 0x8(r3)
    stfs f31, 0xc(r3)
    stfs f30, 0x10(r3)
    addi r3, r3, 0x14
    bdnz lbl_fn_804FCA38_00000BE0
lbl_fn_804FCA38_00000C00:
    lhz r0, 0x71c(r1)
    addi r3, r1, 0x744
    stw r27, 0x6d4(r1)
    li r4, 0x0
    rlwinm r0, r0, 0, 17, 15
    li r5, 0x20
    sth r27, 0x6d8(r1)
    stw r26, 0x718(r1)
    sth r0, 0x71c(r1)
    stw r26, 0x720(r1)
    stw r26, 0x724(r1)
    stw r26, 0x728(r1)
    stw r26, 0x72c(r1)
    stw r26, 0x730(r1)
    stw r26, 0x734(r1)
    stw r26, 0x738(r1)
    stw r26, 0x73c(r1)
    stw r26, 0x740(r1)
    bl memset
    addi r4, r1, 0x77c
    stw r26, 0x764(r1)
    cmplw r4, r24
    sth r26, 0x768(r1)
    sth r27, 0x76a(r1)
    stfs f30, 0x76c(r1)
    stfs f31, 0x770(r1)
    stfs f31, 0x774(r1)
    stfs f30, 0x778(r1)
    bge lbl_fn_804FCA38_00000DB8
    li r0, 0x0
    li r3, 0x0
    bgt lbl_fn_804FCA38_00000C84
    li r3, 0x1
lbl_fn_804FCA38_00000C84:
    cmpwi r3, 0x0
    beq lbl_fn_804FCA38_00000C90
    li r0, 0x1
lbl_fn_804FCA38_00000C90:
    cmpwi r0, 0x0
    beq lbl_fn_804FCA38_00000D7C
    addi r3, r18, 0x9f
    li r0, 0xa0
    subf r3, r4, r3
    divwu r3, r3, r0
    mtctr r3
    cmplw r4, r18
    bge lbl_fn_804FCA38_00000D7C
lbl_fn_804FCA38_00000CB4:
    sth r26, 0x0(r4)
    sth r27, 0x2(r4)
    stfs f30, 0x4(r4)
    stfs f31, 0x8(r4)
    stfs f31, 0xc(r4)
    stfs f30, 0x10(r4)
    sth r26, 0x14(r4)
    sth r27, 0x16(r4)
    stfs f30, 0x18(r4)
    stfs f31, 0x1c(r4)
    stfs f31, 0x20(r4)
    stfs f30, 0x24(r4)
    sth r26, 0x28(r4)
    sth r27, 0x2a(r4)
    stfs f30, 0x2c(r4)
    stfs f31, 0x30(r4)
    stfs f31, 0x34(r4)
    stfs f30, 0x38(r4)
    sth r26, 0x3c(r4)
    sth r27, 0x3e(r4)
    stfs f30, 0x40(r4)
    stfs f31, 0x44(r4)
    stfs f31, 0x48(r4)
    stfs f30, 0x4c(r4)
    sth r26, 0x50(r4)
    sth r27, 0x52(r4)
    stfs f30, 0x54(r4)
    stfs f31, 0x58(r4)
    stfs f31, 0x5c(r4)
    stfs f30, 0x60(r4)
    sth r26, 0x64(r4)
    sth r27, 0x66(r4)
    stfs f30, 0x68(r4)
    stfs f31, 0x6c(r4)
    stfs f31, 0x70(r4)
    stfs f30, 0x74(r4)
    sth r26, 0x78(r4)
    sth r27, 0x7a(r4)
    stfs f30, 0x7c(r4)
    stfs f31, 0x80(r4)
    stfs f31, 0x84(r4)
    stfs f30, 0x88(r4)
    sth r26, 0x8c(r4)
    sth r27, 0x8e(r4)
    stfs f30, 0x90(r4)
    stfs f31, 0x94(r4)
    stfs f31, 0x98(r4)
    stfs f30, 0x9c(r4)
    addi r4, r4, 0xa0
    bdnz lbl_fn_804FCA38_00000CB4
lbl_fn_804FCA38_00000D7C:
    addi r3, r24, 0x13
    li r0, 0x14
    subf r3, r4, r3
    divwu r3, r3, r0
    mtctr r3
    cmplw r4, r24
    bge lbl_fn_804FCA38_00000DB8
lbl_fn_804FCA38_00000D98:
    sth r26, 0x0(r4)
    sth r27, 0x2(r4)
    stfs f30, 0x4(r4)
    stfs f31, 0x8(r4)
    stfs f31, 0xc(r4)
    stfs f30, 0x10(r4)
    addi r4, r4, 0x14
    bdnz lbl_fn_804FCA38_00000D98
lbl_fn_804FCA38_00000DB8:
    lhz r0, 0xa30(r1)
    addi r3, r1, 0xa58
    stw r27, 0x9e8(r1)
    li r4, 0x0
    rlwinm r0, r0, 0, 17, 15
    li r5, 0x20
    sth r27, 0x9ec(r1)
    stw r26, 0xa2c(r1)
    sth r0, 0xa30(r1)
    stw r26, 0xa34(r1)
    stw r26, 0xa38(r1)
    stw r26, 0xa3c(r1)
    stw r26, 0xa40(r1)
    stw r26, 0xa44(r1)
    stw r26, 0xa48(r1)
    stw r26, 0xa4c(r1)
    stw r26, 0xa50(r1)
    stw r26, 0xa54(r1)
    bl memset
    addi r4, r1, 0xa90
    stw r26, 0xa78(r1)
    cmplw r4, r25
    sth r26, 0xa7c(r1)
    sth r27, 0xa7e(r1)
    stfs f30, 0xa80(r1)
    stfs f31, 0xa84(r1)
    stfs f31, 0xa88(r1)
    stfs f30, 0xa8c(r1)
    bge lbl_fn_804FCA38_00000F70
    li r0, 0x0
    li r3, 0x0
    bgt lbl_fn_804FCA38_00000E3C
    li r3, 0x1
lbl_fn_804FCA38_00000E3C:
    cmpwi r3, 0x0
    beq lbl_fn_804FCA38_00000E48
    li r0, 0x1
lbl_fn_804FCA38_00000E48:
    cmpwi r0, 0x0
    beq lbl_fn_804FCA38_00000F34
    addi r3, r19, 0x9f
    li r0, 0xa0
    subf r3, r4, r3
    divwu r3, r3, r0
    mtctr r3
    cmplw r4, r19
    bge lbl_fn_804FCA38_00000F34
lbl_fn_804FCA38_00000E6C:
    sth r26, 0x0(r4)
    sth r27, 0x2(r4)
    stfs f30, 0x4(r4)
    stfs f31, 0x8(r4)
    stfs f31, 0xc(r4)
    stfs f30, 0x10(r4)
    sth r26, 0x14(r4)
    sth r27, 0x16(r4)
    stfs f30, 0x18(r4)
    stfs f31, 0x1c(r4)
    stfs f31, 0x20(r4)
    stfs f30, 0x24(r4)
    sth r26, 0x28(r4)
    sth r27, 0x2a(r4)
    stfs f30, 0x2c(r4)
    stfs f31, 0x30(r4)
    stfs f31, 0x34(r4)
    stfs f30, 0x38(r4)
    sth r26, 0x3c(r4)
    sth r27, 0x3e(r4)
    stfs f30, 0x40(r4)
    stfs f31, 0x44(r4)
    stfs f31, 0x48(r4)
    stfs f30, 0x4c(r4)
    sth r26, 0x50(r4)
    sth r27, 0x52(r4)
    stfs f30, 0x54(r4)
    stfs f31, 0x58(r4)
    stfs f31, 0x5c(r4)
    stfs f30, 0x60(r4)
    sth r26, 0x64(r4)
    sth r27, 0x66(r4)
    stfs f30, 0x68(r4)
    stfs f31, 0x6c(r4)
    stfs f31, 0x70(r4)
    stfs f30, 0x74(r4)
    sth r26, 0x78(r4)
    sth r27, 0x7a(r4)
    stfs f30, 0x7c(r4)
    stfs f31, 0x80(r4)
    stfs f31, 0x84(r4)
    stfs f30, 0x88(r4)
    sth r26, 0x8c(r4)
    sth r27, 0x8e(r4)
    stfs f30, 0x90(r4)
    stfs f31, 0x94(r4)
    stfs f31, 0x98(r4)
    stfs f30, 0x9c(r4)
    addi r4, r4, 0xa0
    bdnz lbl_fn_804FCA38_00000E6C
lbl_fn_804FCA38_00000F34:
    addi r3, r25, 0x13
    li r0, 0x14
    subf r3, r4, r3
    divwu r3, r3, r0
    mtctr r3
    cmplw r4, r25
    bge lbl_fn_804FCA38_00000F70
lbl_fn_804FCA38_00000F50:
    sth r26, 0x0(r4)
    sth r27, 0x2(r4)
    stfs f30, 0x4(r4)
    stfs f31, 0x8(r4)
    stfs f31, 0xc(r4)
    stfs f30, 0x10(r4)
    addi r4, r4, 0x14
    bdnz lbl_fn_804FCA38_00000F50
lbl_fn_804FCA38_00000F70:
    stw r27, 0xcfc(r1)
    addi r3, r1, 0xe4
    li r4, 0x0
    sth r27, 0xd00(r1)
    stw r26, 0xd40(r1)
    stw r26, 0xd44(r1)
    stw r26, 0xd48(r1)
    stw r26, 0xd4c(r1)
    stb r28, 0xd4(r1)
    bl fn_8050128C
    cmpwi r20, 0x0
    stw r27, 0xd8(r1)
    stw r27, 0xb8(r1)
    stw r27, 0xd50(r1)
    sth r26, 0xd58(r1)
    stw r27, 0xd54(r1)
    stb r27, 0xd5b(r1)
    stw r26, 0xd5c(r1)
    stw r27, 0xd60(r1)
    stw r27, 0xe0(r1)
    stw r27, 0xdc(r1)
    beq lbl_fn_804FCA38_00002050
    lwz r0, 0x8(r1)
    stw r0, 0x0(r20)
    lwz r0, 0x10(r1)
    lwz r3, 0xc(r1)
    stw r3, 0x4(r20)
    stw r0, 0x8(r20)
    lwz r0, 0x18(r1)
    lwz r3, 0x14(r1)
    stw r3, 0xc(r20)
    stw r0, 0x10(r20)
    lwz r0, 0x20(r1)
    lwz r3, 0x1c(r1)
    stw r3, 0x14(r20)
    stw r0, 0x18(r20)
    lwz r0, 0x28(r1)
    lwz r3, 0x24(r1)
    stw r3, 0x1c(r20)
    stw r0, 0x20(r20)
    lwz r0, 0x30(r1)
    lwz r3, 0x2c(r1)
    stw r3, 0x24(r20)
    stw r0, 0x28(r20)
    lwz r0, 0x38(r1)
    lwz r3, 0x34(r1)
    stw r3, 0x2c(r20)
    stw r0, 0x30(r20)
    lwz r0, 0x3c(r1)
    stw r0, 0x34(r20)
    lwz r0, 0x40(r1)
    stw r0, 0x38(r20)
    lfs f0, 0x44(r1)
    stfs f0, 0x3c(r20)
    lfs f0, 0x48(r1)
    stfs f0, 0x40(r20)
    lfs f0, 0x4c(r1)
    stfs f0, 0x44(r20)
    lfs f0, 0x50(r1)
    stfs f0, 0x48(r20)
    lfs f0, 0x54(r1)
    stfs f0, 0x4c(r20)
    lfs f0, 0x58(r1)
    stfs f0, 0x50(r20)
    lwz r0, 0x5c(r1)
    stw r0, 0x54(r20)
    lwz r0, 0x64(r1)
    lwz r3, 0x60(r1)
    stw r3, 0x58(r20)
    stw r0, 0x5c(r20)
    lwz r0, 0x6c(r1)
    lwz r3, 0x68(r1)
    stw r3, 0x60(r20)
    stw r0, 0x64(r20)
    lwz r0, 0x74(r1)
    lwz r3, 0x70(r1)
    stw r3, 0x68(r20)
    stw r0, 0x6c(r20)
    lwz r0, 0x7c(r1)
    lwz r3, 0x78(r1)
    stw r3, 0x70(r20)
    stw r0, 0x74(r20)
    lwz r0, 0x84(r1)
    lwz r3, 0x80(r1)
    stw r3, 0x78(r20)
    stw r0, 0x7c(r20)
    lwz r0, 0x8c(r1)
    lwz r3, 0x88(r1)
    stw r3, 0x80(r20)
    stw r0, 0x84(r20)
    lwz r0, 0x94(r1)
    lwz r3, 0x90(r1)
    stw r3, 0x88(r20)
    stw r0, 0x8c(r20)
    lwz r0, 0x9c(r1)
    lwz r3, 0x98(r1)
    stw r3, 0x90(r20)
    stw r0, 0x94(r20)
    lwz r0, 0xa4(r1)
    lwz r3, 0xa0(r1)
    stw r3, 0x98(r20)
    stw r0, 0x9c(r20)
    lwz r0, 0xac(r1)
    lwz r3, 0xa8(r1)
    stw r3, 0xa0(r20)
    stw r0, 0xa4(r20)
    lwz r0, 0xb4(r1)
    lwz r3, 0xb0(r1)
    stw r3, 0xa8(r20)
    stw r0, 0xac(r20)
    lwz r0, 0xbc(r1)
    lwz r3, 0xb8(r1)
    stw r3, 0xb0(r20)
    stw r0, 0xb4(r20)
    lwz r0, 0xc4(r1)
    lwz r3, 0xc0(r1)
    stw r3, 0xb8(r20)
    stw r0, 0xbc(r20)
    lwz r0, 0xcc(r1)
    lwz r3, 0xc8(r1)
    stw r3, 0xc0(r20)
    stw r0, 0xc4(r20)
    lwz r0, 0xd0(r1)
    stw r0, 0xc8(r20)
    lbz r0, 0xd4(r1)
    addi r3, r20, 0x14c
    stb r0, 0xcc(r20)
    addi r0, r20, 0x3b8
    cmplw r3, r0
    addi r4, r1, 0x154
    lwz r0, 0xd8(r1)
    stw r0, 0xd0(r20)
    lwz r0, 0xdc(r1)
    stw r0, 0xd4(r20)
    lwz r0, 0xe0(r1)
    stw r0, 0xd8(r20)
    lwz r0, 0xe4(r1)
    stw r0, 0xdc(r20)
    lwz r0, 0xe8(r1)
    stw r0, 0xe0(r20)
    lwz r0, 0xec(r1)
    stw r0, 0xe4(r20)
    lwz r0, 0xf0(r1)
    stw r0, 0xe8(r20)
    lhz r0, 0xf4(r1)
    sth r0, 0xec(r20)
    lwz r0, 0xf8(r1)
    stw r0, 0xf0(r20)
    lwz r0, 0x100(r1)
    lwz r5, 0xfc(r1)
    stw r5, 0xf4(r20)
    stw r0, 0xf8(r20)
    lwz r0, 0x108(r1)
    lwz r5, 0x104(r1)
    stw r5, 0xfc(r20)
    stw r0, 0x100(r20)
    lwz r0, 0x110(r1)
    lwz r5, 0x10c(r1)
    stw r5, 0x104(r20)
    stw r0, 0x108(r20)
    lwz r0, 0x118(r1)
    lwz r5, 0x114(r1)
    stw r5, 0x10c(r20)
    stw r0, 0x110(r20)
    lwz r0, 0x120(r1)
    lwz r5, 0x11c(r1)
    stw r5, 0x114(r20)
    stw r0, 0x118(r20)
    lwz r0, 0x128(r1)
    lwz r5, 0x124(r1)
    stw r5, 0x11c(r20)
    stw r0, 0x120(r20)
    lwz r0, 0x130(r1)
    lwz r5, 0x12c(r1)
    stw r5, 0x124(r20)
    stw r0, 0x128(r20)
    lwz r0, 0x138(r1)
    lwz r5, 0x134(r1)
    stw r5, 0x12c(r20)
    stw r0, 0x130(r20)
    lwz r0, 0x13c(r1)
    stw r0, 0x134(r20)
    lha r0, 0x140(r1)
    sth r0, 0x138(r20)
    lha r0, 0x142(r1)
    sth r0, 0x13a(r20)
    lfs f0, 0x144(r1)
    stfs f0, 0x13c(r20)
    lfs f0, 0x148(r1)
    stfs f0, 0x140(r20)
    lfs f0, 0x14c(r1)
    stfs f0, 0x144(r20)
    lfs f0, 0x150(r1)
    stfs f0, 0x148(r20)
    bge lbl_fn_804FCA38_000014A8
    addi r6, r20, 0x318
    li r0, 0x0
    li r5, 0x0
    bgt lbl_fn_804FCA38_00001290
    li r5, 0x1
lbl_fn_804FCA38_00001290:
    cmpwi r5, 0x0
    beq lbl_fn_804FCA38_0000129C
    li r0, 0x1
lbl_fn_804FCA38_0000129C:
    cmpwi r0, 0x0
    beq lbl_fn_804FCA38_0000144C
    addi r5, r6, 0x9f
    li r0, 0xa0
    subf r5, r3, r5
    divwu r5, r5, r0
    mtctr r5
    cmplw r3, r6
    bge lbl_fn_804FCA38_0000144C
lbl_fn_804FCA38_000012C0:
    lha r0, 0x0(r4)
    sth r0, 0x0(r3)
    lha r0, 0x2(r4)
    sth r0, 0x2(r3)
    lfs f0, 0x4(r4)
    stfs f0, 0x4(r3)
    lfs f0, 0x8(r4)
    stfs f0, 0x8(r3)
    lfs f0, 0xc(r4)
    stfs f0, 0xc(r3)
    lfs f0, 0x10(r4)
    stfs f0, 0x10(r3)
    lha r0, 0x14(r4)
    sth r0, 0x14(r3)
    lha r0, 0x16(r4)
    sth r0, 0x16(r3)
    lfs f0, 0x18(r4)
    stfs f0, 0x18(r3)
    lfs f0, 0x1c(r4)
    stfs f0, 0x1c(r3)
    lfs f0, 0x20(r4)
    stfs f0, 0x20(r3)
    lfs f0, 0x24(r4)
    stfs f0, 0x24(r3)
    lha r0, 0x28(r4)
    sth r0, 0x28(r3)
    lha r0, 0x2a(r4)
    sth r0, 0x2a(r3)
    lfs f0, 0x2c(r4)
    stfs f0, 0x2c(r3)
    lfs f0, 0x30(r4)
    stfs f0, 0x30(r3)
    lfs f0, 0x34(r4)
    stfs f0, 0x34(r3)
    lfs f0, 0x38(r4)
    stfs f0, 0x38(r3)
    lha r0, 0x3c(r4)
    sth r0, 0x3c(r3)
    lha r0, 0x3e(r4)
    sth r0, 0x3e(r3)
    lfs f0, 0x40(r4)
    stfs f0, 0x40(r3)
    lfs f0, 0x44(r4)
    stfs f0, 0x44(r3)
    lfs f0, 0x48(r4)
    stfs f0, 0x48(r3)
    lfs f0, 0x4c(r4)
    stfs f0, 0x4c(r3)
    lha r0, 0x50(r4)
    sth r0, 0x50(r3)
    lha r0, 0x52(r4)
    sth r0, 0x52(r3)
    lfs f0, 0x54(r4)
    stfs f0, 0x54(r3)
    lfs f0, 0x58(r4)
    stfs f0, 0x58(r3)
    lfs f0, 0x5c(r4)
    stfs f0, 0x5c(r3)
    lfs f0, 0x60(r4)
    stfs f0, 0x60(r3)
    lha r0, 0x64(r4)
    sth r0, 0x64(r3)
    lha r0, 0x66(r4)
    sth r0, 0x66(r3)
    lfs f0, 0x68(r4)
    stfs f0, 0x68(r3)
    lfs f0, 0x6c(r4)
    stfs f0, 0x6c(r3)
    lfs f0, 0x70(r4)
    stfs f0, 0x70(r3)
    lfs f0, 0x74(r4)
    stfs f0, 0x74(r3)
    lha r0, 0x78(r4)
    sth r0, 0x78(r3)
    lha r0, 0x7a(r4)
    sth r0, 0x7a(r3)
    lfs f0, 0x7c(r4)
    stfs f0, 0x7c(r3)
    lfs f0, 0x80(r4)
    stfs f0, 0x80(r3)
    lfs f0, 0x84(r4)
    stfs f0, 0x84(r3)
    lfs f0, 0x88(r4)
    stfs f0, 0x88(r3)
    lha r0, 0x8c(r4)
    sth r0, 0x8c(r3)
    lha r0, 0x8e(r4)
    sth r0, 0x8e(r3)
    lfs f0, 0x90(r4)
    stfs f0, 0x90(r3)
    lfs f0, 0x94(r4)
    stfs f0, 0x94(r3)
    lfs f0, 0x98(r4)
    stfs f0, 0x98(r3)
    lfs f0, 0x9c(r4)
    addi r4, r4, 0xa0
    stfs f0, 0x9c(r3)
    addi r3, r3, 0xa0
    bdnz lbl_fn_804FCA38_000012C0
lbl_fn_804FCA38_0000144C:
    addi r6, r20, 0x3b8
    li r0, 0x14
    addi r5, r6, 0x13
    subf r5, r3, r5
    divwu r5, r5, r0
    mtctr r5
    cmplw r3, r6
    bge lbl_fn_804FCA38_000014A8
lbl_fn_804FCA38_0000146C:
    lha r0, 0x0(r4)
    sth r0, 0x0(r3)
    lha r0, 0x2(r4)
    sth r0, 0x2(r3)
    lfs f0, 0x4(r4)
    stfs f0, 0x4(r3)
    lfs f0, 0x8(r4)
    stfs f0, 0x8(r3)
    lfs f0, 0xc(r4)
    stfs f0, 0xc(r3)
    lfs f0, 0x10(r4)
    addi r4, r4, 0x14
    stfs f0, 0x10(r3)
    addi r3, r3, 0x14
    bdnz lbl_fn_804FCA38_0000146C
lbl_fn_804FCA38_000014A8:
    lwz r0, 0x3c0(r1)
    addi r3, r20, 0x460
    stw r0, 0x3b8(r20)
    addi r0, r20, 0x6cc
    cmplw r3, r0
    addi r4, r1, 0x468
    lwz r0, 0x3c8(r1)
    lwz r5, 0x3c4(r1)
    stw r5, 0x3bc(r20)
    stw r0, 0x3c0(r20)
    lwz r0, 0x3d0(r1)
    lwz r5, 0x3cc(r1)
    stw r5, 0x3c4(r20)
    stw r0, 0x3c8(r20)
    lwz r0, 0x3d8(r1)
    lwz r5, 0x3d4(r1)
    stw r5, 0x3cc(r20)
    stw r0, 0x3d0(r20)
    lwz r0, 0x3e0(r1)
    lwz r5, 0x3dc(r1)
    stw r5, 0x3d4(r20)
    stw r0, 0x3d8(r20)
    lwz r0, 0x3e8(r1)
    lwz r5, 0x3e4(r1)
    stw r5, 0x3dc(r20)
    stw r0, 0x3e0(r20)
    lwz r0, 0x3f0(r1)
    lwz r5, 0x3ec(r1)
    stw r5, 0x3e4(r20)
    stw r0, 0x3e8(r20)
    lwz r0, 0x3f8(r1)
    lwz r5, 0x3f4(r1)
    stw r5, 0x3ec(r20)
    stw r0, 0x3f0(r20)
    lwz r0, 0x400(r1)
    lwz r5, 0x3fc(r1)
    stw r5, 0x3f4(r20)
    stw r0, 0x3f8(r20)
    lwz r0, 0x404(r1)
    stw r0, 0x3fc(r20)
    lhz r0, 0x408(r1)
    sth r0, 0x400(r20)
    lwz r0, 0x40c(r1)
    stw r0, 0x404(r20)
    lwz r0, 0x414(r1)
    lwz r5, 0x410(r1)
    stw r5, 0x408(r20)
    stw r0, 0x40c(r20)
    lwz r0, 0x41c(r1)
    lwz r5, 0x418(r1)
    stw r5, 0x410(r20)
    stw r0, 0x414(r20)
    lwz r0, 0x424(r1)
    lwz r5, 0x420(r1)
    stw r5, 0x418(r20)
    stw r0, 0x41c(r20)
    lwz r0, 0x42c(r1)
    lwz r5, 0x428(r1)
    stw r5, 0x420(r20)
    stw r0, 0x424(r20)
    lwz r0, 0x434(r1)
    lwz r5, 0x430(r1)
    stw r5, 0x428(r20)
    stw r0, 0x42c(r20)
    lwz r0, 0x43c(r1)
    lwz r5, 0x438(r1)
    stw r5, 0x430(r20)
    stw r0, 0x434(r20)
    lwz r0, 0x444(r1)
    lwz r5, 0x440(r1)
    stw r5, 0x438(r20)
    stw r0, 0x43c(r20)
    lwz r0, 0x44c(r1)
    lwz r5, 0x448(r1)
    stw r5, 0x440(r20)
    stw r0, 0x444(r20)
    lwz r0, 0x450(r1)
    stw r0, 0x448(r20)
    lha r0, 0x454(r1)
    sth r0, 0x44c(r20)
    lha r0, 0x456(r1)
    sth r0, 0x44e(r20)
    lfs f0, 0x458(r1)
    stfs f0, 0x450(r20)
    lfs f0, 0x45c(r1)
    stfs f0, 0x454(r20)
    lfs f0, 0x460(r1)
    stfs f0, 0x458(r20)
    lfs f0, 0x464(r1)
    stfs f0, 0x45c(r20)
    bge lbl_fn_804FCA38_00001840
    addi r6, r20, 0x62c
    li r0, 0x0
    li r5, 0x0
    bgt lbl_fn_804FCA38_00001628
    li r5, 0x1
lbl_fn_804FCA38_00001628:
    cmpwi r5, 0x0
    beq lbl_fn_804FCA38_00001634
    li r0, 0x1
lbl_fn_804FCA38_00001634:
    cmpwi r0, 0x0
    beq lbl_fn_804FCA38_000017E4
    addi r5, r6, 0x9f
    li r0, 0xa0
    subf r5, r3, r5
    divwu r5, r5, r0
    mtctr r5
    cmplw r3, r6
    bge lbl_fn_804FCA38_000017E4
lbl_fn_804FCA38_00001658:
    lha r0, 0x0(r4)
    sth r0, 0x0(r3)
    lha r0, 0x2(r4)
    sth r0, 0x2(r3)
    lfs f0, 0x4(r4)
    stfs f0, 0x4(r3)
    lfs f0, 0x8(r4)
    stfs f0, 0x8(r3)
    lfs f0, 0xc(r4)
    stfs f0, 0xc(r3)
    lfs f0, 0x10(r4)
    stfs f0, 0x10(r3)
    lha r0, 0x14(r4)
    sth r0, 0x14(r3)
    lha r0, 0x16(r4)
    sth r0, 0x16(r3)
    lfs f0, 0x18(r4)
    stfs f0, 0x18(r3)
    lfs f0, 0x1c(r4)
    stfs f0, 0x1c(r3)
    lfs f0, 0x20(r4)
    stfs f0, 0x20(r3)
    lfs f0, 0x24(r4)
    stfs f0, 0x24(r3)
    lha r0, 0x28(r4)
    sth r0, 0x28(r3)
    lha r0, 0x2a(r4)
    sth r0, 0x2a(r3)
    lfs f0, 0x2c(r4)
    stfs f0, 0x2c(r3)
    lfs f0, 0x30(r4)
    stfs f0, 0x30(r3)
    lfs f0, 0x34(r4)
    stfs f0, 0x34(r3)
    lfs f0, 0x38(r4)
    stfs f0, 0x38(r3)
    lha r0, 0x3c(r4)
    sth r0, 0x3c(r3)
    lha r0, 0x3e(r4)
    sth r0, 0x3e(r3)
    lfs f0, 0x40(r4)
    stfs f0, 0x40(r3)
    lfs f0, 0x44(r4)
    stfs f0, 0x44(r3)
    lfs f0, 0x48(r4)
    stfs f0, 0x48(r3)
    lfs f0, 0x4c(r4)
    stfs f0, 0x4c(r3)
    lha r0, 0x50(r4)
    sth r0, 0x50(r3)
    lha r0, 0x52(r4)
    sth r0, 0x52(r3)
    lfs f0, 0x54(r4)
    stfs f0, 0x54(r3)
    lfs f0, 0x58(r4)
    stfs f0, 0x58(r3)
    lfs f0, 0x5c(r4)
    stfs f0, 0x5c(r3)
    lfs f0, 0x60(r4)
    stfs f0, 0x60(r3)
    lha r0, 0x64(r4)
    sth r0, 0x64(r3)
    lha r0, 0x66(r4)
    sth r0, 0x66(r3)
    lfs f0, 0x68(r4)
    stfs f0, 0x68(r3)
    lfs f0, 0x6c(r4)
    stfs f0, 0x6c(r3)
    lfs f0, 0x70(r4)
    stfs f0, 0x70(r3)
    lfs f0, 0x74(r4)
    stfs f0, 0x74(r3)
    lha r0, 0x78(r4)
    sth r0, 0x78(r3)
    lha r0, 0x7a(r4)
    sth r0, 0x7a(r3)
    lfs f0, 0x7c(r4)
    stfs f0, 0x7c(r3)
    lfs f0, 0x80(r4)
    stfs f0, 0x80(r3)
    lfs f0, 0x84(r4)
    stfs f0, 0x84(r3)
    lfs f0, 0x88(r4)
    stfs f0, 0x88(r3)
    lha r0, 0x8c(r4)
    sth r0, 0x8c(r3)
    lha r0, 0x8e(r4)
    sth r0, 0x8e(r3)
    lfs f0, 0x90(r4)
    stfs f0, 0x90(r3)
    lfs f0, 0x94(r4)
    stfs f0, 0x94(r3)
    lfs f0, 0x98(r4)
    stfs f0, 0x98(r3)
    lfs f0, 0x9c(r4)
    addi r4, r4, 0xa0
    stfs f0, 0x9c(r3)
    addi r3, r3, 0xa0
    bdnz lbl_fn_804FCA38_00001658
lbl_fn_804FCA38_000017E4:
    addi r6, r20, 0x6cc
    li r0, 0x14
    addi r5, r6, 0x13
    subf r5, r3, r5
    divwu r5, r5, r0
    mtctr r5
    cmplw r3, r6
    bge lbl_fn_804FCA38_00001840
lbl_fn_804FCA38_00001804:
    lha r0, 0x0(r4)
    sth r0, 0x0(r3)
    lha r0, 0x2(r4)
    sth r0, 0x2(r3)
    lfs f0, 0x4(r4)
    stfs f0, 0x4(r3)
    lfs f0, 0x8(r4)
    stfs f0, 0x8(r3)
    lfs f0, 0xc(r4)
    stfs f0, 0xc(r3)
    lfs f0, 0x10(r4)
    addi r4, r4, 0x14
    stfs f0, 0x10(r3)
    addi r3, r3, 0x14
    bdnz lbl_fn_804FCA38_00001804
lbl_fn_804FCA38_00001840:
    lwz r0, 0x6d4(r1)
    addi r3, r20, 0x774
    stw r0, 0x6cc(r20)
    addi r0, r20, 0x9e0
    cmplw r3, r0
    addi r4, r1, 0x77c
    lwz r0, 0x6dc(r1)
    lwz r5, 0x6d8(r1)
    stw r5, 0x6d0(r20)
    stw r0, 0x6d4(r20)
    lwz r0, 0x6e4(r1)
    lwz r5, 0x6e0(r1)
    stw r5, 0x6d8(r20)
    stw r0, 0x6dc(r20)
    lwz r0, 0x6ec(r1)
    lwz r5, 0x6e8(r1)
    stw r5, 0x6e0(r20)
    stw r0, 0x6e4(r20)
    lwz r0, 0x6f4(r1)
    lwz r5, 0x6f0(r1)
    stw r5, 0x6e8(r20)
    stw r0, 0x6ec(r20)
    lwz r0, 0x6fc(r1)
    lwz r5, 0x6f8(r1)
    stw r5, 0x6f0(r20)
    stw r0, 0x6f4(r20)
    lwz r0, 0x704(r1)
    lwz r5, 0x700(r1)
    stw r5, 0x6f8(r20)
    stw r0, 0x6fc(r20)
    lwz r0, 0x70c(r1)
    lwz r5, 0x708(r1)
    stw r5, 0x700(r20)
    stw r0, 0x704(r20)
    lwz r0, 0x714(r1)
    lwz r5, 0x710(r1)
    stw r5, 0x708(r20)
    stw r0, 0x70c(r20)
    lwz r0, 0x718(r1)
    stw r0, 0x710(r20)
    lhz r0, 0x71c(r1)
    sth r0, 0x714(r20)
    lwz r0, 0x720(r1)
    stw r0, 0x718(r20)
    lwz r0, 0x728(r1)
    lwz r5, 0x724(r1)
    stw r5, 0x71c(r20)
    stw r0, 0x720(r20)
    lwz r0, 0x730(r1)
    lwz r5, 0x72c(r1)
    stw r5, 0x724(r20)
    stw r0, 0x728(r20)
    lwz r0, 0x738(r1)
    lwz r5, 0x734(r1)
    stw r5, 0x72c(r20)
    stw r0, 0x730(r20)
    lwz r0, 0x740(r1)
    lwz r5, 0x73c(r1)
    stw r5, 0x734(r20)
    stw r0, 0x738(r20)
    lwz r0, 0x748(r1)
    lwz r5, 0x744(r1)
    stw r5, 0x73c(r20)
    stw r0, 0x740(r20)
    lwz r0, 0x750(r1)
    lwz r5, 0x74c(r1)
    stw r5, 0x744(r20)
    stw r0, 0x748(r20)
    lwz r0, 0x758(r1)
    lwz r5, 0x754(r1)
    stw r5, 0x74c(r20)
    stw r0, 0x750(r20)
    lwz r0, 0x760(r1)
    lwz r5, 0x75c(r1)
    stw r5, 0x754(r20)
    stw r0, 0x758(r20)
    lwz r0, 0x764(r1)
    stw r0, 0x75c(r20)
    lha r0, 0x768(r1)
    sth r0, 0x760(r20)
    lha r0, 0x76a(r1)
    sth r0, 0x762(r20)
    lfs f0, 0x76c(r1)
    stfs f0, 0x764(r20)
    lfs f0, 0x770(r1)
    stfs f0, 0x768(r20)
    lfs f0, 0x774(r1)
    stfs f0, 0x76c(r20)
    lfs f0, 0x778(r1)
    stfs f0, 0x770(r20)
    bge lbl_fn_804FCA38_00001BD8
    addi r6, r20, 0x940
    li r0, 0x0
    li r5, 0x0
    bgt lbl_fn_804FCA38_000019C0
    li r5, 0x1
lbl_fn_804FCA38_000019C0:
    cmpwi r5, 0x0
    beq lbl_fn_804FCA38_000019CC
    li r0, 0x1
lbl_fn_804FCA38_000019CC:
    cmpwi r0, 0x0
    beq lbl_fn_804FCA38_00001B7C
    addi r5, r6, 0x9f
    li r0, 0xa0
    subf r5, r3, r5
    divwu r5, r5, r0
    mtctr r5
    cmplw r3, r6
    bge lbl_fn_804FCA38_00001B7C
lbl_fn_804FCA38_000019F0:
    lha r0, 0x0(r4)
    sth r0, 0x0(r3)
    lha r0, 0x2(r4)
    sth r0, 0x2(r3)
    lfs f0, 0x4(r4)
    stfs f0, 0x4(r3)
    lfs f0, 0x8(r4)
    stfs f0, 0x8(r3)
    lfs f0, 0xc(r4)
    stfs f0, 0xc(r3)
    lfs f0, 0x10(r4)
    stfs f0, 0x10(r3)
    lha r0, 0x14(r4)
    sth r0, 0x14(r3)
    lha r0, 0x16(r4)
    sth r0, 0x16(r3)
    lfs f0, 0x18(r4)
    stfs f0, 0x18(r3)
    lfs f0, 0x1c(r4)
    stfs f0, 0x1c(r3)
    lfs f0, 0x20(r4)
    stfs f0, 0x20(r3)
    lfs f0, 0x24(r4)
    stfs f0, 0x24(r3)
    lha r0, 0x28(r4)
    sth r0, 0x28(r3)
    lha r0, 0x2a(r4)
    sth r0, 0x2a(r3)
    lfs f0, 0x2c(r4)
    stfs f0, 0x2c(r3)
    lfs f0, 0x30(r4)
    stfs f0, 0x30(r3)
    lfs f0, 0x34(r4)
    stfs f0, 0x34(r3)
    lfs f0, 0x38(r4)
    stfs f0, 0x38(r3)
    lha r0, 0x3c(r4)
    sth r0, 0x3c(r3)
    lha r0, 0x3e(r4)
    sth r0, 0x3e(r3)
    lfs f0, 0x40(r4)
    stfs f0, 0x40(r3)
    lfs f0, 0x44(r4)
    stfs f0, 0x44(r3)
    lfs f0, 0x48(r4)
    stfs f0, 0x48(r3)
    lfs f0, 0x4c(r4)
    stfs f0, 0x4c(r3)
    lha r0, 0x50(r4)
    sth r0, 0x50(r3)
    lha r0, 0x52(r4)
    sth r0, 0x52(r3)
    lfs f0, 0x54(r4)
    stfs f0, 0x54(r3)
    lfs f0, 0x58(r4)
    stfs f0, 0x58(r3)
    lfs f0, 0x5c(r4)
    stfs f0, 0x5c(r3)
    lfs f0, 0x60(r4)
    stfs f0, 0x60(r3)
    lha r0, 0x64(r4)
    sth r0, 0x64(r3)
    lha r0, 0x66(r4)
    sth r0, 0x66(r3)
    lfs f0, 0x68(r4)
    stfs f0, 0x68(r3)
    lfs f0, 0x6c(r4)
    stfs f0, 0x6c(r3)
    lfs f0, 0x70(r4)
    stfs f0, 0x70(r3)
    lfs f0, 0x74(r4)
    stfs f0, 0x74(r3)
    lha r0, 0x78(r4)
    sth r0, 0x78(r3)
    lha r0, 0x7a(r4)
    sth r0, 0x7a(r3)
    lfs f0, 0x7c(r4)
    stfs f0, 0x7c(r3)
    lfs f0, 0x80(r4)
    stfs f0, 0x80(r3)
    lfs f0, 0x84(r4)
    stfs f0, 0x84(r3)
    lfs f0, 0x88(r4)
    stfs f0, 0x88(r3)
    lha r0, 0x8c(r4)
    sth r0, 0x8c(r3)
    lha r0, 0x8e(r4)
    sth r0, 0x8e(r3)
    lfs f0, 0x90(r4)
    stfs f0, 0x90(r3)
    lfs f0, 0x94(r4)
    stfs f0, 0x94(r3)
    lfs f0, 0x98(r4)
    stfs f0, 0x98(r3)
    lfs f0, 0x9c(r4)
    addi r4, r4, 0xa0
    stfs f0, 0x9c(r3)
    addi r3, r3, 0xa0
    bdnz lbl_fn_804FCA38_000019F0
lbl_fn_804FCA38_00001B7C:
    addi r6, r20, 0x9e0
    li r0, 0x14
    addi r5, r6, 0x13
    subf r5, r3, r5
    divwu r5, r5, r0
    mtctr r5
    cmplw r3, r6
    bge lbl_fn_804FCA38_00001BD8
lbl_fn_804FCA38_00001B9C:
    lha r0, 0x0(r4)
    sth r0, 0x0(r3)
    lha r0, 0x2(r4)
    sth r0, 0x2(r3)
    lfs f0, 0x4(r4)
    stfs f0, 0x4(r3)
    lfs f0, 0x8(r4)
    stfs f0, 0x8(r3)
    lfs f0, 0xc(r4)
    stfs f0, 0xc(r3)
    lfs f0, 0x10(r4)
    addi r4, r4, 0x14
    stfs f0, 0x10(r3)
    addi r3, r3, 0x14
    bdnz lbl_fn_804FCA38_00001B9C
lbl_fn_804FCA38_00001BD8:
    lwz r0, 0x9e8(r1)
    addi r3, r20, 0xa88
    stw r0, 0x9e0(r20)
    addi r0, r20, 0xcf4
    cmplw r3, r0
    addi r4, r1, 0xa90
    lwz r0, 0x9f0(r1)
    lwz r5, 0x9ec(r1)
    stw r5, 0x9e4(r20)
    stw r0, 0x9e8(r20)
    lwz r0, 0x9f8(r1)
    lwz r5, 0x9f4(r1)
    stw r5, 0x9ec(r20)
    stw r0, 0x9f0(r20)
    lwz r0, 0xa00(r1)
    lwz r5, 0x9fc(r1)
    stw r5, 0x9f4(r20)
    stw r0, 0x9f8(r20)
    lwz r0, 0xa08(r1)
    lwz r5, 0xa04(r1)
    stw r5, 0x9fc(r20)
    stw r0, 0xa00(r20)
    lwz r0, 0xa10(r1)
    lwz r5, 0xa0c(r1)
    stw r5, 0xa04(r20)
    stw r0, 0xa08(r20)
    lwz r0, 0xa18(r1)
    lwz r5, 0xa14(r1)
    stw r5, 0xa0c(r20)
    stw r0, 0xa10(r20)
    lwz r0, 0xa20(r1)
    lwz r5, 0xa1c(r1)
    stw r5, 0xa14(r20)
    stw r0, 0xa18(r20)
    lwz r0, 0xa28(r1)
    lwz r5, 0xa24(r1)
    stw r5, 0xa1c(r20)
    stw r0, 0xa20(r20)
    lwz r0, 0xa2c(r1)
    stw r0, 0xa24(r20)
    lhz r0, 0xa30(r1)
    sth r0, 0xa28(r20)
    lwz r0, 0xa34(r1)
    stw r0, 0xa2c(r20)
    lwz r0, 0xa3c(r1)
    lwz r5, 0xa38(r1)
    stw r5, 0xa30(r20)
    stw r0, 0xa34(r20)
    lwz r0, 0xa44(r1)
    lwz r5, 0xa40(r1)
    stw r5, 0xa38(r20)
    stw r0, 0xa3c(r20)
    lwz r0, 0xa4c(r1)
    lwz r5, 0xa48(r1)
    stw r5, 0xa40(r20)
    stw r0, 0xa44(r20)
    lwz r0, 0xa54(r1)
    lwz r5, 0xa50(r1)
    stw r5, 0xa48(r20)
    stw r0, 0xa4c(r20)
    lwz r0, 0xa5c(r1)
    lwz r5, 0xa58(r1)
    stw r5, 0xa50(r20)
    stw r0, 0xa54(r20)
    lwz r0, 0xa64(r1)
    lwz r5, 0xa60(r1)
    stw r5, 0xa58(r20)
    stw r0, 0xa5c(r20)
    lwz r0, 0xa6c(r1)
    lwz r5, 0xa68(r1)
    stw r5, 0xa60(r20)
    stw r0, 0xa64(r20)
    lwz r0, 0xa74(r1)
    lwz r5, 0xa70(r1)
    stw r5, 0xa68(r20)
    stw r0, 0xa6c(r20)
    lwz r0, 0xa78(r1)
    stw r0, 0xa70(r20)
    lha r0, 0xa7c(r1)
    sth r0, 0xa74(r20)
    lha r0, 0xa7e(r1)
    sth r0, 0xa76(r20)
    lfs f0, 0xa80(r1)
    stfs f0, 0xa78(r20)
    lfs f0, 0xa84(r1)
    stfs f0, 0xa7c(r20)
    lfs f0, 0xa88(r1)
    stfs f0, 0xa80(r20)
    lfs f0, 0xa8c(r1)
    stfs f0, 0xa84(r20)
    bge lbl_fn_804FCA38_00001F70
    addi r6, r20, 0xc54
    li r0, 0x0
    li r5, 0x0
    bgt lbl_fn_804FCA38_00001D58
    li r5, 0x1
lbl_fn_804FCA38_00001D58:
    cmpwi r5, 0x0
    beq lbl_fn_804FCA38_00001D64
    li r0, 0x1
lbl_fn_804FCA38_00001D64:
    cmpwi r0, 0x0
    beq lbl_fn_804FCA38_00001F14
    addi r5, r6, 0x9f
    li r0, 0xa0
    subf r5, r3, r5
    divwu r5, r5, r0
    mtctr r5
    cmplw r3, r6
    bge lbl_fn_804FCA38_00001F14
lbl_fn_804FCA38_00001D88:
    lha r0, 0x0(r4)
    sth r0, 0x0(r3)
    lha r0, 0x2(r4)
    sth r0, 0x2(r3)
    lfs f0, 0x4(r4)
    stfs f0, 0x4(r3)
    lfs f0, 0x8(r4)
    stfs f0, 0x8(r3)
    lfs f0, 0xc(r4)
    stfs f0, 0xc(r3)
    lfs f0, 0x10(r4)
    stfs f0, 0x10(r3)
    lha r0, 0x14(r4)
    sth r0, 0x14(r3)
    lha r0, 0x16(r4)
    sth r0, 0x16(r3)
    lfs f0, 0x18(r4)
    stfs f0, 0x18(r3)
    lfs f0, 0x1c(r4)
    stfs f0, 0x1c(r3)
    lfs f0, 0x20(r4)
    stfs f0, 0x20(r3)
    lfs f0, 0x24(r4)
    stfs f0, 0x24(r3)
    lha r0, 0x28(r4)
    sth r0, 0x28(r3)
    lha r0, 0x2a(r4)
    sth r0, 0x2a(r3)
    lfs f0, 0x2c(r4)
    stfs f0, 0x2c(r3)
    lfs f0, 0x30(r4)
    stfs f0, 0x30(r3)
    lfs f0, 0x34(r4)
    stfs f0, 0x34(r3)
    lfs f0, 0x38(r4)
    stfs f0, 0x38(r3)
    lha r0, 0x3c(r4)
    sth r0, 0x3c(r3)
    lha r0, 0x3e(r4)
    sth r0, 0x3e(r3)
    lfs f0, 0x40(r4)
    stfs f0, 0x40(r3)
    lfs f0, 0x44(r4)
    stfs f0, 0x44(r3)
    lfs f0, 0x48(r4)
    stfs f0, 0x48(r3)
    lfs f0, 0x4c(r4)
    stfs f0, 0x4c(r3)
    lha r0, 0x50(r4)
    sth r0, 0x50(r3)
    lha r0, 0x52(r4)
    sth r0, 0x52(r3)
    lfs f0, 0x54(r4)
    stfs f0, 0x54(r3)
    lfs f0, 0x58(r4)
    stfs f0, 0x58(r3)
    lfs f0, 0x5c(r4)
    stfs f0, 0x5c(r3)
    lfs f0, 0x60(r4)
    stfs f0, 0x60(r3)
    lha r0, 0x64(r4)
    sth r0, 0x64(r3)
    lha r0, 0x66(r4)
    sth r0, 0x66(r3)
    lfs f0, 0x68(r4)
    stfs f0, 0x68(r3)
    lfs f0, 0x6c(r4)
    stfs f0, 0x6c(r3)
    lfs f0, 0x70(r4)
    stfs f0, 0x70(r3)
    lfs f0, 0x74(r4)
    stfs f0, 0x74(r3)
    lha r0, 0x78(r4)
    sth r0, 0x78(r3)
    lha r0, 0x7a(r4)
    sth r0, 0x7a(r3)
    lfs f0, 0x7c(r4)
    stfs f0, 0x7c(r3)
    lfs f0, 0x80(r4)
    stfs f0, 0x80(r3)
    lfs f0, 0x84(r4)
    stfs f0, 0x84(r3)
    lfs f0, 0x88(r4)
    stfs f0, 0x88(r3)
    lha r0, 0x8c(r4)
    sth r0, 0x8c(r3)
    lha r0, 0x8e(r4)
    sth r0, 0x8e(r3)
    lfs f0, 0x90(r4)
    stfs f0, 0x90(r3)
    lfs f0, 0x94(r4)
    stfs f0, 0x94(r3)
    lfs f0, 0x98(r4)
    stfs f0, 0x98(r3)
    lfs f0, 0x9c(r4)
    addi r4, r4, 0xa0
    stfs f0, 0x9c(r3)
    addi r3, r3, 0xa0
    bdnz lbl_fn_804FCA38_00001D88
lbl_fn_804FCA38_00001F14:
    addi r6, r20, 0xcf4
    li r0, 0x14
    addi r5, r6, 0x13
    subf r5, r3, r5
    divwu r5, r5, r0
    mtctr r5
    cmplw r3, r6
    bge lbl_fn_804FCA38_00001F70
lbl_fn_804FCA38_00001F34:
    lha r0, 0x0(r4)
    sth r0, 0x0(r3)
    lha r0, 0x2(r4)
    sth r0, 0x2(r3)
    lfs f0, 0x4(r4)
    stfs f0, 0x4(r3)
    lfs f0, 0x8(r4)
    stfs f0, 0x8(r3)
    lfs f0, 0xc(r4)
    stfs f0, 0xc(r3)
    lfs f0, 0x10(r4)
    addi r4, r4, 0x14
    stfs f0, 0x10(r3)
    addi r3, r3, 0x14
    bdnz lbl_fn_804FCA38_00001F34
lbl_fn_804FCA38_00001F70:
    lwz r0, 0xcfc(r1)
    stw r0, 0xcf4(r20)
    lwz r0, 0xd04(r1)
    lwz r3, 0xd00(r1)
    stw r3, 0xcf8(r20)
    stw r0, 0xcfc(r20)
    lwz r0, 0xd0c(r1)
    lwz r3, 0xd08(r1)
    stw r3, 0xd00(r20)
    stw r0, 0xd04(r20)
    lwz r0, 0xd14(r1)
    lwz r3, 0xd10(r1)
    stw r3, 0xd08(r20)
    stw r0, 0xd0c(r20)
    lwz r0, 0xd1c(r1)
    lwz r3, 0xd18(r1)
    stw r3, 0xd10(r20)
    stw r0, 0xd14(r20)
    lwz r0, 0xd24(r1)
    lwz r3, 0xd20(r1)
    stw r3, 0xd18(r20)
    stw r0, 0xd1c(r20)
    lwz r0, 0xd2c(r1)
    lwz r3, 0xd28(r1)
    stw r3, 0xd20(r20)
    stw r0, 0xd24(r20)
    lwz r0, 0xd34(r1)
    lwz r3, 0xd30(r1)
    stw r3, 0xd28(r20)
    stw r0, 0xd2c(r20)
    lwz r0, 0xd3c(r1)
    lwz r3, 0xd38(r1)
    stw r3, 0xd30(r20)
    stw r0, 0xd34(r20)
    lwz r0, 0xd44(r1)
    lwz r3, 0xd40(r1)
    stw r3, 0xd38(r20)
    stw r0, 0xd3c(r20)
    lwz r0, 0xd4c(r1)
    lwz r3, 0xd48(r1)
    stw r3, 0xd40(r20)
    stw r0, 0xd44(r20)
    lwz r0, 0xd50(r1)
    stw r0, 0xd48(r20)
    lwz r0, 0xd54(r1)
    stw r0, 0xd4c(r20)
    lha r0, 0xd58(r1)
    sth r0, 0xd50(r20)
    lbz r0, 0xd5a(r1)
    stb r0, 0xd52(r20)
    lbz r0, 0xd5b(r1)
    stb r0, 0xd53(r20)
    lwz r0, 0xd5c(r1)
    stw r0, 0xd54(r20)
    lwz r0, 0xd60(r1)
    stw r0, 0xd58(r20)
lbl_fn_804FCA38_00002050:
    lwz r3, 0x4(r15)
    subi r21, r21, 0x1
    addi r20, r20, 0xd5c
    addi r0, r3, 0x1
    stw r0, 0x4(r15)
lbl_fn_804FCA38_00002064:
    cmpwi r21, 0x0
    bne lbl_fn_804FCA38_00000894
lbl_fn_804FCA38_0000206C:
    li r0, 0xdc8
    addi r11, r1, 0xdb0
    psq_lx f31, r1, r0, 0, 0
    lfd f31, 0xdc0(r1)
    li r0, 0xdb8
    psq_lx f30, r1, r0, 0, 0
    lfd f30, 0xdb0(r1)
    bl _restgpr_14
    lwz r0, 0xdd4(r1)
    mtlr r0
    addi r1, r1, 0xdd0
    blr
}
