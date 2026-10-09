#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __register_global_object(void);
extern void dtor_80084684(void);
extern void fn_803BAE54(void);
extern void fn_803BD0FC(void);
extern void fn_803BD22C(void);
extern void fn_804AE3BC(void);
extern void fn_804BA350(void);
extern void fn_804FB224(void);
extern void fn_8050DDE0(void);
extern void fn_8050DE38(void);
extern void fn_8050E098(void);
extern void fn_806A8E40(void);
extern void fn_806B0E30(void);
extern void fn_806B1250(void);

/* External data declarations */
extern u8 lbl_807C8AE8[];

/* Small data declarations */
extern u32 lbl_8087F5B8;
extern u32 lbl_8087F5F8;
extern u32 lbl_8087F5FC;
extern u32 lbl_8087F610;
extern u32 lbl_8087F628;

/* Function declarations */
void fn_804D807C(void);
void fn_804D8100(void);
void fn_804D8110(void);
void fn_804D8118(void);
void fn_804D818C(void);
void fn_804D81CC(void);
void fn_804D81D4(void);
void fn_804D8248(void);
void fn_804D8250(void);
void fn_804D8614(void);
void fn_804D87B4(void);
void fn_804D8914(void);
void fn_804D90E4(void);
void fn_804D97F4(void);
void fn_804D9970(void);

asm void fn_804D807C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    lwz r12, 0xc(r4)
    stw r31, 0x1c(r1)
    lwz r31, 0x8(r4)
    stw r30, 0x18(r1)
    lwz r30, 0x4(r4)
    stw r29, 0x14(r1)
    lwz r29, 0x0(r4)
    lwz r11, 0x10(r4)
    lwz r10, 0x14(r4)
    lwz r9, 0x18(r4)
    lwz r8, 0x1c(r4)
    lwz r7, 0x20(r4)
    lwz r6, 0x24(r4)
    lwz r5, 0x28(r4)
    lwz r0, 0x2c(r4)
    stw r29, 0x0(r3)
    stw r30, 0x4(r3)
    stw r31, 0x8(r3)
    stw r12, 0xc(r3)
    stw r11, 0x10(r3)
    stw r10, 0x14(r3)
    stw r9, 0x18(r3)
    stw r8, 0x1c(r3)
    stw r7, 0x20(r3)
    stw r6, 0x24(r3)
    stw r5, 0x28(r3)
    stw r0, 0x2c(r3)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    addi r1, r1, 0x20
    blr
}

asm void fn_804D8100(void)
{
    nofralloc
    mulli r0, r4, 0x30
    lwz r3, 0x4(r3)
    add r3, r3, r0
    blr
}

asm void fn_804D8110(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    blr
}

asm void fn_804D8118(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0x2
    stw r31, 0xc(r1)
    mr r31, r3
    sth r0, 0x0(r3)
    sth r4, 0x2(r3)
    lbz r0, lbl_8087F5F8
    extsb. r0, r0
    bne lbl_fn_804D8118_000000E8
    lis r4, fn_804D818C@ha
    lis r5, lbl_807C8AE8@ha
    addi r4, r4, fn_804D818C@l
    la r3, lbl_8087F5FC
    addi r5, r5, lbl_807C8AE8@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8087F5F8
lbl_fn_804D8118_000000E8:
    li r0, 0x0
    stw r0, lbl_8087F5FC
    li r0, 0x3
    mr r3, r31
    sth r0, 0x0(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804D818C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_804D818C_00000138
    cmpwi r4, 0x0
    ble lbl_fn_804D818C_00000138
    bl dtor_80084684
lbl_fn_804D818C_00000138:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804D81CC(void)
{
    nofralloc
    addi r3, r3, 0x4
    blr
}

asm void fn_804D81D4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0x2
    stw r31, 0xc(r1)
    mr r31, r3
    sth r0, 0x0(r3)
    sth r4, 0x2(r3)
    lbz r0, lbl_8087F5F8
    extsb. r0, r0
    bne lbl_fn_804D81D4_000001A4
    lis r4, fn_804D818C@ha
    lis r5, lbl_807C8AE8@ha
    addi r4, r4, fn_804D818C@l
    la r3, lbl_8087F5FC
    addi r5, r5, lbl_807C8AE8@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8087F5F8
lbl_fn_804D81D4_000001A4:
    li r0, 0x0
    stw r0, lbl_8087F5FC
    li r0, 0x16
    mr r3, r31
    sth r0, 0x0(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804D8248(void)
{
    nofralloc
    addi r3, r3, 0x4
    blr
}

asm void fn_804D8250(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    cmpwi r5, 0x2
    stw r0, 0xb4(r1)
    stmw r23, 0x8c(r1)
    mr r28, r3
    mr r29, r4
    mr r30, r5
    bne lbl_fn_804D8250_00000208
    addis r3, r3, 0x1
    lbz r0, -0x6663(r3)
    cmplwi r0, 0x1
    beq lbl_fn_804D8250_00000584
lbl_fn_804D8250_00000208:
    cmpwi r5, 0x2
    li r0, 0x2
    sth r0, 0x8(r1)
    li r3, 0x1040
    bne lbl_fn_804D8250_00000220
    li r3, 0x1048
lbl_fn_804D8250_00000220:
    lbz r0, lbl_8087F5F8
    sth r3, 0xa(r1)
    extsb. r0, r0
    bne lbl_fn_804D8250_00000250
    lis r4, fn_804D818C@ha
    lis r5, lbl_807C8AE8@ha
    addi r4, r4, fn_804D818C@l
    la r3, lbl_8087F5FC
    addi r5, r5, lbl_807C8AE8@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8087F5F8
lbl_fn_804D8250_00000250:
    li r4, 0x0
    li r0, 0x6f
    stw r4, lbl_8087F5FC
    addi r31, r1, 0xc
    li r7, 0x0
    sth r0, 0x8(r1)
    mr r5, r31
    lwz r0, 0xb0(r29)
    stw r0, 0x15(r1)
    lwz r3, 0xb4(r29)
    lwz r0, 0xb8(r29)
    stw r0, 0x1d(r1)
    stw r3, 0x19(r1)
    lwz r0, 0xbc(r29)
    stw r0, 0x21(r1)
    lwz r3, 0xc0(r29)
    lwz r0, 0xc4(r29)
    stw r0, 0x29(r1)
    stw r3, 0x25(r1)
    lwz r0, 0xc8(r29)
    stw r0, 0x2d(r1)
    lwz r0, 0xd0(r29)
    stw r0, 0x31(r1)
    b lbl_fn_804D8250_000002F0
lbl_fn_804D8250_000002B0:
    lwz r0, 0x5e4(r28)
    add r6, r31, r7
    addi r7, r7, 0x1
    add r3, r0, r4
    addi r4, r4, 0xd5c
    lwz r0, 0xd0(r3)
    extrwi r0, r0, 4, 6
    stb r0, 0x29(r6)
    lwz r0, 0xb0(r3)
    stb r0, 0x31(r6)
    lwz r0, 0xd8(r3)
    stw r0, 0x42(r5)
    addi r5, r5, 0x4
    lwz r0, 0xd4(r3)
    extrwi r0, r0, 4, 6
    stb r0, 0x39(r6)
lbl_fn_804D8250_000002F0:
    lwz r0, 0x5e8(r28)
    cmpw r7, r0
    blt lbl_fn_804D8250_000002B0
    lwz r0, 0x55c(r28)
    cmpwi r30, 0x0
    stw r0, 0xc(r1)
    lwz r0, 0x564(r28)
    stw r0, 0x10(r1)
    lwz r0, 0x5a0(r28)
    stb r0, 0x72(r1)
    lwz r0, 0x5a8(r28)
    stb r0, 0x73(r1)
    lbz r0, 0x5b4(r28)
    stb r0, 0x75(r1)
    stb r30, 0x78(r1)
    lwz r0, 0x540(r28)
    stb r0, 0x76(r1)
    lwz r0, 0x5a4(r28)
    stb r0, 0x77(r1)
    lwz r3, 0x5b0(r28)
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
    stb r0, 0x14(r1)
    lha r0, 0x508(r28)
    sth r0, 0x70(r1)
    beq lbl_fn_804D8250_00000370
    cmpwi r30, 0x1
    beq lbl_fn_804D8250_00000534
    cmpwi r30, 0x2
    beq lbl_fn_804D8250_0000056C
    b lbl_fn_804D8250_00000584
lbl_fn_804D8250_00000370:
    li r6, 0x0
    lwz r4, lbl_8087F610
    addis r3, r6, 0x1
    li r5, -0x1
    subi r0, r3, 0x65ac
    li r6, 0x4
    stwx r5, r4, r0
    addis r3, r6, 0x1
    subi r0, r3, 0x65ac
    li r6, 0x8
    lwz r4, lbl_8087F610
    addis r3, r6, 0x1
    li r6, 0xc
    li r30, 0x0
    stwx r5, r4, r0
    subi r0, r3, 0x65ac
    addis r3, r6, 0x1
    li r6, 0x10
    lwz r4, lbl_8087F610
    li r26, 0x0
    li r23, 0x1
    li r24, 0x0
    stwx r5, r4, r0
    subi r0, r3, 0x65ac
    addis r3, r6, 0x1
    li r6, 0x14
    lwz r4, lbl_8087F610
    li r25, 0x12c
    li r27, 0x20
    stwx r5, r4, r0
    subi r0, r3, 0x65ac
    addis r3, r6, 0x1
    li r6, 0x18
    lwz r4, lbl_8087F610
    stwx r5, r4, r0
    subi r0, r3, 0x65ac
    addis r3, r6, 0x1
    li r6, 0x1c
    lwz r4, lbl_8087F610
    stwx r5, r4, r0
    subi r0, r3, 0x65ac
    addis r3, r6, 0x1
    lwz r4, lbl_8087F610
    stwx r5, r4, r0
    subi r0, r3, 0x65ac
    lwz r4, lbl_8087F610
    stwx r5, r4, r0
    b lbl_fn_804D8250_00000524
lbl_fn_804D8250_00000430:
    lwz r0, 0x5e4(r28)
    add r4, r0, r26
    lwz r0, 0xd0(r4)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804D8250_0000051C
    lbz r3, 0xcc(r29)
    lbz r0, 0xcc(r4)
    cmplw r3, r0
    beq lbl_fn_804D8250_0000051C
    lbz r4, 0xd52(r29)
    addi r0, r4, 0x1
    stb r0, 0xd52(r29)
    lwz r0, 0x5e4(r28)
    stb r4, 0x74(r1)
    add r3, r0, r26
    lbz r0, 0xcc(r3)
    slwi r3, r0, 2
    addis r3, r3, 0x1
    subi r0, r3, 0x65ac
    stwx r4, r28, r0
    bl fn_804AE3BC
    lwz r0, 0x5e4(r28)
    mr r6, r31
    li r5, 0x1040
    li r7, 0x1
    add r4, r0, r26
    lbz r4, 0xcc(r4)
    bl fn_8050E098
    lwz r0, 0x5e4(r28)
    li r5, 0x0
    lwz r8, lbl_8087F610
    add r3, r0, r26
    lbz r7, 0xcc(r3)
    mr r6, r8
    slwi r3, r7, 2
    addis r3, r3, 0x1
    subi r0, r3, 0x65ac
    lwzx r0, r28, r0
    clrlwi r4, r0, 24
    mtctr r27
lbl_fn_804D8250_000004D4:
    lwz r0, 0x48(r6)
    cmpwi r0, 0x0
    bne lbl_fn_804D8250_000004F0
    mulli r0, r5, 0x18
    add r3, r8, r0
    addi r3, r3, 0x48
    b lbl_fn_804D8250_00000500
lbl_fn_804D8250_000004F0:
    addi r6, r6, 0x18
    addi r5, r5, 0x1
    bdnz lbl_fn_804D8250_000004D4
    li r3, 0x0
lbl_fn_804D8250_00000500:
    cmpwi r3, 0x0
    beq lbl_fn_804D8250_0000051C
    stw r23, 0x0(r3)
    stw r24, 0x4(r3)
    stb r7, 0x14(r3)
    stw r25, 0x8(r3)
    stb r4, 0x15(r3)
lbl_fn_804D8250_0000051C:
    addi r30, r30, 0x1
    addi r26, r26, 0xd5c
lbl_fn_804D8250_00000524:
    lwz r0, 0x5e8(r28)
    cmplw r30, r0
    blt lbl_fn_804D8250_00000430
    b lbl_fn_804D8250_00000584
lbl_fn_804D8250_00000534:
    addis r3, r28, 0x1
    li r0, 0x1
    stb r0, -0x6663(r3)
    bl fn_804AE3BC
    mr r6, r31
    li r4, -0x1
    li r5, 0x1040
    li r7, 0x1
    bl fn_8050E098
    bl fn_804AE3BC
    li r4, -0x1
    li r5, 0x1
    bl fn_8050DDE0
    b lbl_fn_804D8250_00000584
lbl_fn_804D8250_0000056C:
    bl fn_804AE3BC
    mr r6, r31
    li r4, -0x1
    li r5, 0x1048
    li r7, 0x1
    bl fn_8050E098
lbl_fn_804D8250_00000584:
    lmw r23, 0x8c(r1)
    lwz r0, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_804D8614(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    bl fn_804AE3BC
    bl fn_8050DE38
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804D8614_000005F0
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804D8614_000005E4
    li r0, 0x0
    b lbl_fn_804D8614_0000060C
lbl_fn_804D8614_000005E4:
    bl fn_806B0E30
    clrlwi r0, r3, 24
    b lbl_fn_804D8614_0000060C
lbl_fn_804D8614_000005F0:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804D8614_00000604
    li r3, 0x0
    b lbl_fn_804D8614_00000608
lbl_fn_804D8614_00000604:
    bl fn_806A8E40
lbl_fn_804D8614_00000608:
    clrlwi r0, r3, 24
lbl_fn_804D8614_0000060C:
    lwz r5, 0x5e8(r30)
    clrlwi r4, r0, 24
    li r3, 0x0
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_fn_804D8614_00000654
lbl_fn_804D8614_00000624:
    lwz r0, 0x5e4(r30)
    add r31, r0, r3
    lwz r0, 0xd0(r31)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804D8614_0000064C
    lbz r0, 0xcc(r31)
    cmplw r4, r0
    bne lbl_fn_804D8614_0000064C
    b lbl_fn_804D8614_00000658
lbl_fn_804D8614_0000064C:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804D8614_00000624
lbl_fn_804D8614_00000654:
    li r31, 0x0
lbl_fn_804D8614_00000658:
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804D8614_0000068C
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804D8614_00000680
    li r29, 0x0
    b lbl_fn_804D8614_000006A8
lbl_fn_804D8614_00000680:
    bl fn_806B0E30
    clrlwi r29, r3, 24
    b lbl_fn_804D8614_000006A8
lbl_fn_804D8614_0000068C:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804D8614_000006A0
    li r3, 0x0
    b lbl_fn_804D8614_000006A4
lbl_fn_804D8614_000006A0:
    bl fn_806A8E40
lbl_fn_804D8614_000006A4:
    clrlwi r29, r3, 24
lbl_fn_804D8614_000006A8:
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804D8614_000006DC
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804D8614_000006D0
    li r0, 0x0
    b lbl_fn_804D8614_000006E0
lbl_fn_804D8614_000006D0:
    bl fn_806B1250
    clrlwi r0, r3, 24
    b lbl_fn_804D8614_000006E0
lbl_fn_804D8614_000006DC:
    li r0, 0x0
lbl_fn_804D8614_000006E0:
    clrlwi r3, r29, 24
    clrlwi r0, r0, 24
    subf r0, r3, r0
    cntlzw r0, r0
    srwi r0, r0, 5
    cmpwi r0, 0x1
    bne lbl_fn_804D8614_00000710
    mr r3, r30
    mr r4, r31
    li r5, 0x1
    bl fn_804D8250
    b lbl_fn_804D8614_0000071C
lbl_fn_804D8614_00000710:
    addis r3, r30, 0x1
    li r0, 0x12c
    stw r0, -0x6648(r3)
lbl_fn_804D8614_0000071C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804D87B4(void)
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
    bne lbl_fn_804D87B4_00000784
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804D87B4_00000778
    li r30, 0x0
    b lbl_fn_804D87B4_000007A0
lbl_fn_804D87B4_00000778:
    bl fn_806B0E30
    clrlwi r30, r3, 24
    b lbl_fn_804D87B4_000007A0
lbl_fn_804D87B4_00000784:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804D87B4_00000798
    li r3, 0x0
    b lbl_fn_804D87B4_0000079C
lbl_fn_804D87B4_00000798:
    bl fn_806A8E40
lbl_fn_804D87B4_0000079C:
    clrlwi r30, r3, 24
lbl_fn_804D87B4_000007A0:
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804D87B4_000007D4
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804D87B4_000007C8
    li r0, 0x0
    b lbl_fn_804D87B4_000007D8
lbl_fn_804D87B4_000007C8:
    bl fn_806B1250
    clrlwi r0, r3, 24
    b lbl_fn_804D87B4_000007D8
lbl_fn_804D87B4_000007D4:
    li r0, 0x0
lbl_fn_804D87B4_000007D8:
    clrlwi r3, r30, 24
    clrlwi r0, r0, 24
    subf r0, r3, r0
    cntlzw r0, r0
    srwi r0, r0, 5
    cmpwi r0, 0x1
    bne lbl_fn_804D87B4_00000804
    addis r3, r31, 0x1
    li r0, 0x1
    stb r0, -0x658c(r3)
    b lbl_fn_804D87B4_00000880
lbl_fn_804D87B4_00000804:
    addis r3, r31, 0x1
    lwz r0, -0x6648(r3)
    cmpwi r0, 0x0
    bgt lbl_fn_804D87B4_00000880
    lwz r3, lbl_8087F628
    li r30, 0x9
    lwz r0, 0x25c(r3)
    cmpwi r0, 0x1
    bne lbl_fn_804D87B4_00000848
    lwz r3, lbl_8087F5B8
    cmpwi r3, 0x0
    beq lbl_fn_804D87B4_00000848
    lwz r0, 0x88(r3)
    cmpwi r0, 0x8
    bne lbl_fn_804D87B4_00000848
    li r4, 0x9
    bl fn_804BA350
lbl_fn_804D87B4_00000848:
    li r0, -0xa2
    addis r3, r31, 0x1
    cmplwi r0, 0x1
    li r0, -0x1
    stw r0, -0x68b0(r3)
    bgt lbl_fn_804D87B4_00000864
    li r30, 0x9
lbl_fn_804D87B4_00000864:
    addi r3, r31, 0x4fc
    li r4, 0x2b
    bl fn_804FB224
    addis r3, r31, 0x1
    li r0, 0x9e
    stw r0, -0x68ac(r3)
    stw r30, -0x68a8(r3)
lbl_fn_804D87B4_00000880:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804D8914(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    stmw r23, 0x7c(r1)
    mr r27, r3
    lwz r4, lbl_8087F628
    lwz r23, lbl_8087F610
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804D8914_000008E4
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804D8914_000008D8
    li r0, 0x0
    b lbl_fn_804D8914_00000900
lbl_fn_804D8914_000008D8:
    bl fn_806B0E30
    clrlwi r0, r3, 24
    b lbl_fn_804D8914_00000900
lbl_fn_804D8914_000008E4:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804D8914_000008F8
    li r3, 0x0
    b lbl_fn_804D8914_000008FC
lbl_fn_804D8914_000008F8:
    bl fn_806A8E40
lbl_fn_804D8914_000008FC:
    clrlwi r0, r3, 24
lbl_fn_804D8914_00000900:
    lwz r5, 0x5e8(r23)
    clrlwi r4, r0, 24
    li r3, 0x0
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_fn_804D8914_00000948
lbl_fn_804D8914_00000918:
    lwz r0, 0x5e4(r23)
    add r30, r0, r3
    lwz r0, 0xd0(r30)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804D8914_00000940
    lbz r0, 0xcc(r30)
    cmplw r4, r0
    bne lbl_fn_804D8914_00000940
    b lbl_fn_804D8914_0000094C
lbl_fn_804D8914_00000940:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804D8914_00000918
lbl_fn_804D8914_00000948:
    li r30, 0x0
lbl_fn_804D8914_0000094C:
    lwz r3, lbl_8087F610
    lwz r3, 0x514(r3)
    cmpwi r3, 0x0
    beq lbl_fn_804D8914_00000EDC
    lwz r31, 0x48(r3)
    cmpwi r31, 0x0
    beq lbl_fn_804D8914_00000EDC
    lwz r4, 0xb0(r30)
    li r6, -0x1
    lhz r0, 0x28(r1)
    li r3, 0x2
    addis r29, r4, 0xb
    li r4, 0x1009
    rlwinm r0, r0, 0, 17, 15
    sth r3, 0x1c(r1)
    addi r3, r1, 0x50
    li r5, 0x20
    sth r4, 0x1e(r1)
    li r4, 0x0
    subi r29, r29, 0x51a0
    stw r6, 0x24(r1)
    sth r0, 0x28(r1)
    stw r6, 0x2c(r1)
    stw r6, 0x30(r1)
    stw r6, 0x34(r1)
    stw r6, 0x38(r1)
    stw r6, 0x3c(r1)
    stw r6, 0x40(r1)
    stw r6, 0x44(r1)
    stw r6, 0x48(r1)
    stw r6, 0x4c(r1)
    bl memset
    lbz r0, lbl_8087F5F8
    extsb. r0, r0
    bne lbl_fn_804D8914_000009F8
    lis r4, fn_804D818C@ha
    lis r5, lbl_807C8AE8@ha
    addi r4, r4, fn_804D818C@l
    la r3, lbl_8087F5FC
    addi r5, r5, lbl_807C8AE8@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8087F5F8
lbl_fn_804D8914_000009F8:
    addis r3, r31, 0x1
    li r4, 0x0
    li r0, 0x52
    addi r28, r1, 0x20
    stw r4, lbl_8087F5FC
    mr r4, r28
    mr r5, r29
    li r6, 0x0
    sth r0, 0x1c(r1)
    subi r3, r3, 0x61a0
    bl fn_803BD0FC
    cmpwi r3, 0x0
    mr r23, r3
    beq lbl_fn_804D8914_00000A54
    mr r4, r28
    mr r5, r29
    addi r3, r31, 0x539c
    li r6, 0x0
    bl fn_803BAE54
    and r3, r23, r3
    neg r0, r3
    or r0, r0, r3
    srwi r23, r0, 31
lbl_fn_804D8914_00000A54:
    cmpwi r23, 0x0
    beq lbl_fn_804D8914_00000B0C
    lwz r0, 0x24(r1)
    stw r0, 0xe8(r30)
    lhz r0, 0x28(r1)
    sth r0, 0xec(r30)
    lwz r0, 0x2c(r1)
    stw r0, 0xf0(r30)
    lwz r0, 0x34(r1)
    lwz r3, 0x30(r1)
    stw r3, 0xf4(r30)
    stw r0, 0xf8(r30)
    lwz r0, 0x3c(r1)
    lwz r3, 0x38(r1)
    stw r3, 0xfc(r30)
    stw r0, 0x100(r30)
    lwz r0, 0x44(r1)
    lwz r3, 0x40(r1)
    stw r3, 0x104(r30)
    stw r0, 0x108(r30)
    lwz r0, 0x4c(r1)
    lwz r3, 0x48(r1)
    stw r3, 0x10c(r30)
    stw r0, 0x110(r30)
    lwz r0, 0x54(r1)
    lwz r3, 0x50(r1)
    stw r3, 0x114(r30)
    stw r0, 0x118(r30)
    lwz r0, 0x5c(r1)
    lwz r3, 0x58(r1)
    stw r3, 0x11c(r30)
    stw r0, 0x120(r30)
    lwz r0, 0x64(r1)
    lwz r3, 0x60(r1)
    stw r3, 0x124(r30)
    stw r0, 0x128(r30)
    lwz r0, 0x6c(r1)
    lwz r3, 0x68(r1)
    stw r3, 0x12c(r30)
    stw r0, 0x130(r30)
    bl fn_804AE3BC
    mr r6, r28
    li r4, -0x1
    li r5, 0x1009
    li r7, 0x1
    bl fn_8050E098
lbl_fn_804D8914_00000B0C:
    addis r3, r31, 0x1
    mr r4, r28
    mr r5, r29
    li r6, 0x1
    subi r3, r3, 0x61a0
    bl fn_803BD0FC
    cmpwi r3, 0x0
    mr r23, r3
    beq lbl_fn_804D8914_00000B54
    mr r4, r28
    mr r5, r29
    addi r3, r31, 0x539c
    li r6, 0x1
    bl fn_803BAE54
    and r3, r23, r3
    neg r0, r3
    or r0, r0, r3
    srwi r23, r0, 31
lbl_fn_804D8914_00000B54:
    cmpwi r23, 0x0
    beq lbl_fn_804D8914_00000C0C
    lwz r0, 0x24(r1)
    stw r0, 0x3fc(r30)
    lhz r0, 0x28(r1)
    sth r0, 0x400(r30)
    lwz r0, 0x2c(r1)
    stw r0, 0x404(r30)
    lwz r0, 0x34(r1)
    lwz r3, 0x30(r1)
    stw r3, 0x408(r30)
    stw r0, 0x40c(r30)
    lwz r0, 0x3c(r1)
    lwz r3, 0x38(r1)
    stw r3, 0x410(r30)
    stw r0, 0x414(r30)
    lwz r0, 0x44(r1)
    lwz r3, 0x40(r1)
    stw r3, 0x418(r30)
    stw r0, 0x41c(r30)
    lwz r0, 0x4c(r1)
    lwz r3, 0x48(r1)
    stw r3, 0x420(r30)
    stw r0, 0x424(r30)
    lwz r0, 0x54(r1)
    lwz r3, 0x50(r1)
    stw r3, 0x428(r30)
    stw r0, 0x42c(r30)
    lwz r0, 0x5c(r1)
    lwz r3, 0x58(r1)
    stw r3, 0x430(r30)
    stw r0, 0x434(r30)
    lwz r0, 0x64(r1)
    lwz r3, 0x60(r1)
    stw r3, 0x438(r30)
    stw r0, 0x43c(r30)
    lwz r0, 0x6c(r1)
    lwz r3, 0x68(r1)
    stw r3, 0x440(r30)
    stw r0, 0x444(r30)
    bl fn_804AE3BC
    mr r6, r28
    li r4, -0x1
    li r5, 0x1009
    li r7, 0x1
    bl fn_8050E098
lbl_fn_804D8914_00000C0C:
    addis r3, r31, 0x1
    mr r4, r28
    mr r5, r29
    li r6, 0x2
    subi r3, r3, 0x61a0
    bl fn_803BD0FC
    cmpwi r3, 0x0
    mr r23, r3
    beq lbl_fn_804D8914_00000C54
    mr r4, r28
    mr r5, r29
    addi r3, r31, 0x539c
    li r6, 0x2
    bl fn_803BAE54
    and r3, r23, r3
    neg r0, r3
    or r0, r0, r3
    srwi r23, r0, 31
lbl_fn_804D8914_00000C54:
    cmpwi r23, 0x0
    beq lbl_fn_804D8914_00000D0C
    lwz r0, 0x24(r1)
    stw r0, 0x710(r30)
    lhz r0, 0x28(r1)
    sth r0, 0x714(r30)
    lwz r0, 0x2c(r1)
    stw r0, 0x718(r30)
    lwz r0, 0x34(r1)
    lwz r3, 0x30(r1)
    stw r3, 0x71c(r30)
    stw r0, 0x720(r30)
    lwz r0, 0x3c(r1)
    lwz r3, 0x38(r1)
    stw r3, 0x724(r30)
    stw r0, 0x728(r30)
    lwz r0, 0x44(r1)
    lwz r3, 0x40(r1)
    stw r3, 0x72c(r30)
    stw r0, 0x730(r30)
    lwz r0, 0x4c(r1)
    lwz r3, 0x48(r1)
    stw r3, 0x734(r30)
    stw r0, 0x738(r30)
    lwz r0, 0x54(r1)
    lwz r3, 0x50(r1)
    stw r3, 0x73c(r30)
    stw r0, 0x740(r30)
    lwz r0, 0x5c(r1)
    lwz r3, 0x58(r1)
    stw r3, 0x744(r30)
    stw r0, 0x748(r30)
    lwz r0, 0x64(r1)
    lwz r3, 0x60(r1)
    stw r3, 0x74c(r30)
    stw r0, 0x750(r30)
    lwz r0, 0x6c(r1)
    lwz r3, 0x68(r1)
    stw r3, 0x754(r30)
    stw r0, 0x758(r30)
    bl fn_804AE3BC
    mr r6, r28
    li r4, -0x1
    li r5, 0x1009
    li r7, 0x1
    bl fn_8050E098
lbl_fn_804D8914_00000D0C:
    addis r3, r31, 0x1
    mr r4, r28
    mr r5, r29
    li r6, 0x3
    subi r3, r3, 0x61a0
    bl fn_803BD0FC
    cmpwi r3, 0x0
    mr r23, r3
    beq lbl_fn_804D8914_00000D54
    mr r4, r28
    mr r5, r29
    addi r3, r31, 0x539c
    li r6, 0x3
    bl fn_803BAE54
    and r3, r23, r3
    neg r0, r3
    or r0, r0, r3
    srwi r23, r0, 31
lbl_fn_804D8914_00000D54:
    cmpwi r23, 0x0
    beq lbl_fn_804D8914_00000E0C
    lwz r0, 0x24(r1)
    stw r0, 0xa24(r30)
    lhz r0, 0x28(r1)
    sth r0, 0xa28(r30)
    lwz r0, 0x2c(r1)
    stw r0, 0xa2c(r30)
    lwz r0, 0x34(r1)
    lwz r3, 0x30(r1)
    stw r3, 0xa30(r30)
    stw r0, 0xa34(r30)
    lwz r0, 0x3c(r1)
    lwz r3, 0x38(r1)
    stw r3, 0xa38(r30)
    stw r0, 0xa3c(r30)
    lwz r0, 0x44(r1)
    lwz r3, 0x40(r1)
    stw r3, 0xa40(r30)
    stw r0, 0xa44(r30)
    lwz r0, 0x4c(r1)
    lwz r3, 0x48(r1)
    stw r3, 0xa48(r30)
    stw r0, 0xa4c(r30)
    lwz r0, 0x54(r1)
    lwz r3, 0x50(r1)
    stw r3, 0xa50(r30)
    stw r0, 0xa54(r30)
    lwz r0, 0x5c(r1)
    lwz r3, 0x58(r1)
    stw r3, 0xa58(r30)
    stw r0, 0xa5c(r30)
    lwz r0, 0x64(r1)
    lwz r3, 0x60(r1)
    stw r3, 0xa60(r30)
    stw r0, 0xa64(r30)
    lwz r0, 0x6c(r1)
    lwz r3, 0x68(r1)
    stw r3, 0xa68(r30)
    stw r0, 0xa6c(r30)
    bl fn_804AE3BC
    mr r6, r28
    li r4, -0x1
    li r5, 0x1009
    li r7, 0x1
    bl fn_8050E098
lbl_fn_804D8914_00000E0C:
    lbz r0, lbl_8087F5F8
    li r4, 0x2
    li r3, 0x100a
    sth r4, 0x10(r1)
    extsb. r0, r0
    sth r3, 0x12(r1)
    bne lbl_fn_804D8914_00000E48
    lis r4, fn_804D818C@ha
    lis r5, lbl_807C8AE8@ha
    addi r4, r4, fn_804D818C@l
    la r3, lbl_8087F5FC
    addi r5, r5, lbl_807C8AE8@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8087F5F8
lbl_fn_804D8914_00000E48:
    addis r3, r31, 0x1
    li r4, 0x0
    li r0, 0xa
    addi r23, r1, 0x14
    stw r4, lbl_8087F5FC
    mr r4, r23
    mr r5, r29
    li r6, 0x0
    sth r0, 0x10(r1)
    subi r3, r3, 0x61a0
    bl fn_803BD22C
    cmpwi r3, 0x0
    beq lbl_fn_804D8914_00000E9C
    lwz r0, 0x18(r1)
    stw r0, 0xd38(r30)
    bl fn_804AE3BC
    mr r6, r23
    li r4, -0x1
    li r5, 0x100a
    li r7, 0x1
    bl fn_8050E098
lbl_fn_804D8914_00000E9C:
    addis r3, r31, 0x1
    mr r4, r23
    mr r5, r29
    li r6, 0x1
    subi r3, r3, 0x61a0
    bl fn_803BD22C
    cmpwi r3, 0x0
    beq lbl_fn_804D8914_00000EDC
    lwz r0, 0x18(r1)
    stw r0, 0xd3c(r30)
    bl fn_804AE3BC
    mr r6, r23
    li r4, -0x1
    li r5, 0x100a
    li r7, 0x1
    bl fn_8050E098
lbl_fn_804D8914_00000EDC:
    lbz r0, lbl_8087F5F8
    li r4, 0x2
    li r3, 0x1041
    sth r4, 0x8(r1)
    extsb. r0, r0
    sth r3, 0xa(r1)
    bne lbl_fn_804D8914_00000F18
    lis r4, fn_804D818C@ha
    lis r5, lbl_807C8AE8@ha
    addi r4, r4, fn_804D818C@l
    la r3, lbl_8087F5FC
    addi r5, r5, lbl_807C8AE8@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8087F5F8
lbl_fn_804D8914_00000F18:
    li r31, 0x0
    li r0, 0x3
    stw r31, lbl_8087F5FC
    addi r28, r1, 0xc
    li r29, 0x0
    li r25, 0x0
    sth r0, 0x8(r1)
    li r23, 0x1
    li r24, 0x12c
    li r26, 0x20
    b lbl_fn_804D8914_00001038
lbl_fn_804D8914_00000F44:
    lwz r0, 0x5e4(r27)
    add r4, r0, r25
    lwz r0, 0xd0(r4)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804D8914_00001030
    lbz r3, 0xcc(r30)
    lbz r0, 0xcc(r4)
    cmplw r3, r0
    beq lbl_fn_804D8914_00001030
    lbz r4, 0xd52(r30)
    addi r0, r4, 0x1
    stb r0, 0xd52(r30)
    lwz r0, 0x5e4(r27)
    stb r4, 0xc(r1)
    add r3, r0, r25
    lbz r0, 0xcc(r3)
    slwi r3, r0, 2
    addis r3, r3, 0x1
    subi r0, r3, 0x660c
    stwx r4, r27, r0
    bl fn_804AE3BC
    lwz r0, 0x5e4(r27)
    mr r6, r28
    li r5, 0x1041
    li r7, 0x1
    add r4, r0, r25
    lbz r4, 0xcc(r4)
    bl fn_8050E098
    lwz r0, 0x5e4(r27)
    li r5, 0x0
    lwz r8, lbl_8087F610
    add r3, r0, r25
    lbz r7, 0xcc(r3)
    mr r6, r8
    slwi r3, r7, 2
    addis r3, r3, 0x1
    subi r0, r3, 0x660c
    lwzx r0, r27, r0
    clrlwi r4, r0, 24
    mtctr r26
lbl_fn_804D8914_00000FE8:
    lwz r0, 0x48(r6)
    cmpwi r0, 0x0
    bne lbl_fn_804D8914_00001004
    mulli r0, r5, 0x18
    add r3, r8, r0
    addi r3, r3, 0x48
    b lbl_fn_804D8914_00001014
lbl_fn_804D8914_00001004:
    addi r6, r6, 0x18
    addi r5, r5, 0x1
    bdnz lbl_fn_804D8914_00000FE8
    li r3, 0x0
lbl_fn_804D8914_00001014:
    cmpwi r3, 0x0
    beq lbl_fn_804D8914_00001030
    stw r23, 0x0(r3)
    stw r31, 0x4(r3)
    stb r7, 0x14(r3)
    stw r24, 0x8(r3)
    stb r4, 0x15(r3)
lbl_fn_804D8914_00001030:
    addi r29, r29, 0x1
    addi r25, r25, 0xd5c
lbl_fn_804D8914_00001038:
    lwz r0, 0x5e8(r27)
    cmplw r29, r0
    blt lbl_fn_804D8914_00000F44
    bl fn_804AE3BC
    li r4, -0x1
    li r5, 0x1
    bl fn_8050DDE0
    lmw r23, 0x7c(r1)
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_804D90E4(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stmw r15, 0xc(r1)
    mr r26, r3
    li r29, 0x0
    li r28, 0x0
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804D90E4_000010B8
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804D90E4_000010AC
    li r0, 0x0
    b lbl_fn_804D90E4_000010D4
lbl_fn_804D90E4_000010AC:
    bl fn_806B0E30
    clrlwi r0, r3, 24
    b lbl_fn_804D90E4_000010D4
lbl_fn_804D90E4_000010B8:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804D90E4_000010CC
    li r3, 0x0
    b lbl_fn_804D90E4_000010D0
lbl_fn_804D90E4_000010CC:
    bl fn_806A8E40
lbl_fn_804D90E4_000010D0:
    clrlwi r0, r3, 24
lbl_fn_804D90E4_000010D4:
    lwz r5, 0x5e8(r26)
    clrlwi r4, r0, 24
    li r3, 0x0
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_fn_804D90E4_0000111C
lbl_fn_804D90E4_000010EC:
    lwz r0, 0x5e4(r26)
    add r31, r0, r3
    lwz r0, 0xd0(r31)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804D90E4_00001114
    lbz r0, 0xcc(r31)
    cmplw r4, r0
    bne lbl_fn_804D90E4_00001114
    b lbl_fn_804D90E4_00001120
lbl_fn_804D90E4_00001114:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804D90E4_000010EC
lbl_fn_804D90E4_0000111C:
    li r31, 0x0
lbl_fn_804D90E4_00001120:
    li r27, 0x0
    li r22, 0x0
    li r16, -0x3
    li r17, -0x1
    li r18, -0xa2
    li r19, 0x0
    li r21, -0x2
    li r20, 0x9e
    li r24, 0x4
    li r23, 0x4
    li r25, 0x4
    b lbl_fn_804D90E4_00001744
lbl_fn_804D90E4_00001150:
    lwz r0, 0x5e4(r26)
    add r3, r0, r22
    lwz r0, 0xd0(r3)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804D90E4_0000173C
    lbz r3, 0xcc(r3)
    lbz r0, 0xcc(r31)
    cmplw r0, r3
    beq lbl_fn_804D90E4_0000173C
    clrlslwi r0, r3, 24, 2
    addi r28, r28, 0x1
    add r3, r26, r0
    addis r30, r3, 0x1
    lwz r6, -0x660c(r30)
    cmpwi r6, 0x0
    blt lbl_fn_804D90E4_0000172C
    lwz r7, lbl_8087F610
    clrlwi r3, r6, 24
    li r4, 0x0
    mr r5, r7
    mtctr r23
lbl_fn_804D90E4_000011A8:
    lwz r0, 0x48(r5)
    cmpwi r0, 0x0
    beq lbl_fn_804D90E4_000011D0
    lbz r0, 0x5d(r5)
    cmplw r3, r0
    bne lbl_fn_804D90E4_000011D0
    mulli r0, r4, 0x18
    add r3, r7, r0
    addi r3, r3, 0x48
    b lbl_fn_804D90E4_00001314
lbl_fn_804D90E4_000011D0:
    lwz r0, 0x60(r5)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804D90E4_000011FC
    lbz r0, 0x75(r5)
    cmplw r3, r0
    bne lbl_fn_804D90E4_000011FC
    mulli r0, r4, 0x18
    add r3, r7, r0
    addi r3, r3, 0x48
    b lbl_fn_804D90E4_00001314
lbl_fn_804D90E4_000011FC:
    lwz r0, 0x78(r5)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804D90E4_00001228
    lbz r0, 0x8d(r5)
    cmplw r3, r0
    bne lbl_fn_804D90E4_00001228
    mulli r0, r4, 0x18
    add r3, r7, r0
    addi r3, r3, 0x48
    b lbl_fn_804D90E4_00001314
lbl_fn_804D90E4_00001228:
    lwz r0, 0x90(r5)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804D90E4_00001254
    lbz r0, 0xa5(r5)
    cmplw r3, r0
    bne lbl_fn_804D90E4_00001254
    mulli r0, r4, 0x18
    add r3, r7, r0
    addi r3, r3, 0x48
    b lbl_fn_804D90E4_00001314
lbl_fn_804D90E4_00001254:
    lwz r0, 0xa8(r5)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804D90E4_00001280
    lbz r0, 0xbd(r5)
    cmplw r3, r0
    bne lbl_fn_804D90E4_00001280
    mulli r0, r4, 0x18
    add r3, r7, r0
    addi r3, r3, 0x48
    b lbl_fn_804D90E4_00001314
lbl_fn_804D90E4_00001280:
    lwz r0, 0xc0(r5)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804D90E4_000012AC
    lbz r0, 0xd5(r5)
    cmplw r3, r0
    bne lbl_fn_804D90E4_000012AC
    mulli r0, r4, 0x18
    add r3, r7, r0
    addi r3, r3, 0x48
    b lbl_fn_804D90E4_00001314
lbl_fn_804D90E4_000012AC:
    lwz r0, 0xd8(r5)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804D90E4_000012D8
    lbz r0, 0xed(r5)
    cmplw r3, r0
    bne lbl_fn_804D90E4_000012D8
    mulli r0, r4, 0x18
    add r3, r7, r0
    addi r3, r3, 0x48
    b lbl_fn_804D90E4_00001314
lbl_fn_804D90E4_000012D8:
    lwz r0, 0xf0(r5)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804D90E4_00001304
    lbz r0, 0x105(r5)
    cmplw r3, r0
    bne lbl_fn_804D90E4_00001304
    mulli r0, r4, 0x18
    add r3, r7, r0
    addi r3, r3, 0x48
    b lbl_fn_804D90E4_00001314
lbl_fn_804D90E4_00001304:
    addi r5, r5, 0xc0
    addi r4, r4, 0x1
    bdnz lbl_fn_804D90E4_000011A8
    li r3, 0x0
lbl_fn_804D90E4_00001314:
    cmpwi r3, 0x0
    bne lbl_fn_804D90E4_00001324
    li r0, -0x2
    b lbl_fn_804D90E4_00001328
lbl_fn_804D90E4_00001324:
    lwz r0, 0x4(r3)
lbl_fn_804D90E4_00001328:
    cmpwi r0, -0x2
    bne lbl_fn_804D90E4_00001398
    stw r16, -0x660c(r30)
    li r15, 0x9
    lwz r3, lbl_8087F628
    lwz r0, 0x25c(r3)
    cmpwi r0, 0x1
    bne lbl_fn_804D90E4_00001368
    lwz r3, lbl_8087F5B8
    cmpwi r3, 0x0
    beq lbl_fn_804D90E4_00001368
    lwz r0, 0x88(r3)
    cmpwi r0, 0x8
    bne lbl_fn_804D90E4_00001368
    li r4, 0x9
    bl fn_804BA350
lbl_fn_804D90E4_00001368:
    addis r3, r26, 0x1
    cmplwi r18, 0x1
    stw r17, -0x68b0(r3)
    bgt lbl_fn_804D90E4_0000137C
    li r15, 0x9
lbl_fn_804D90E4_0000137C:
    addi r3, r26, 0x4fc
    li r4, 0x2b
    bl fn_804FB224
    addis r3, r26, 0x1
    stw r20, -0x68ac(r3)
    stw r15, -0x68a8(r3)
    b lbl_fn_804D90E4_0000172C
lbl_fn_804D90E4_00001398:
    cmpwi r0, -0x1
    bne lbl_fn_804D90E4_00001594
    lwz r7, lbl_8087F610
    clrlwi r3, r6, 24
    li r4, 0x0
    mr r5, r7
    mtctr r24
lbl_fn_804D90E4_000013B4:
    lwz r0, 0x48(r5)
    cmpwi r0, 0x0
    beq lbl_fn_804D90E4_000013DC
    lbz r0, 0x5d(r5)
    cmplw r3, r0
    bne lbl_fn_804D90E4_000013DC
    mulli r0, r4, 0x18
    add r3, r7, r0
    addi r3, r3, 0x48
    b lbl_fn_804D90E4_00001520
lbl_fn_804D90E4_000013DC:
    lwz r0, 0x60(r5)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804D90E4_00001408
    lbz r0, 0x75(r5)
    cmplw r3, r0
    bne lbl_fn_804D90E4_00001408
    mulli r0, r4, 0x18
    add r3, r7, r0
    addi r3, r3, 0x48
    b lbl_fn_804D90E4_00001520
lbl_fn_804D90E4_00001408:
    lwz r0, 0x78(r5)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804D90E4_00001434
    lbz r0, 0x8d(r5)
    cmplw r3, r0
    bne lbl_fn_804D90E4_00001434
    mulli r0, r4, 0x18
    add r3, r7, r0
    addi r3, r3, 0x48
    b lbl_fn_804D90E4_00001520
lbl_fn_804D90E4_00001434:
    lwz r0, 0x90(r5)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804D90E4_00001460
    lbz r0, 0xa5(r5)
    cmplw r3, r0
    bne lbl_fn_804D90E4_00001460
    mulli r0, r4, 0x18
    add r3, r7, r0
    addi r3, r3, 0x48
    b lbl_fn_804D90E4_00001520
lbl_fn_804D90E4_00001460:
    lwz r0, 0xa8(r5)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804D90E4_0000148C
    lbz r0, 0xbd(r5)
    cmplw r3, r0
    bne lbl_fn_804D90E4_0000148C
    mulli r0, r4, 0x18
    add r3, r7, r0
    addi r3, r3, 0x48
    b lbl_fn_804D90E4_00001520
lbl_fn_804D90E4_0000148C:
    lwz r0, 0xc0(r5)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804D90E4_000014B8
    lbz r0, 0xd5(r5)
    cmplw r3, r0
    bne lbl_fn_804D90E4_000014B8
    mulli r0, r4, 0x18
    add r3, r7, r0
    addi r3, r3, 0x48
    b lbl_fn_804D90E4_00001520
lbl_fn_804D90E4_000014B8:
    lwz r0, 0xd8(r5)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804D90E4_000014E4
    lbz r0, 0xed(r5)
    cmplw r3, r0
    bne lbl_fn_804D90E4_000014E4
    mulli r0, r4, 0x18
    add r3, r7, r0
    addi r3, r3, 0x48
    b lbl_fn_804D90E4_00001520
lbl_fn_804D90E4_000014E4:
    lwz r0, 0xf0(r5)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804D90E4_00001510
    lbz r0, 0x105(r5)
    cmplw r3, r0
    bne lbl_fn_804D90E4_00001510
    mulli r0, r4, 0x18
    add r3, r7, r0
    addi r3, r3, 0x48
    b lbl_fn_804D90E4_00001520
lbl_fn_804D90E4_00001510:
    addi r5, r5, 0xc0
    addi r4, r4, 0x1
    bdnz lbl_fn_804D90E4_000013B4
    li r3, 0x0
lbl_fn_804D90E4_00001520:
    cmpwi r3, 0x0
    beq lbl_fn_804D90E4_0000152C
    stw r19, 0x0(r3)
lbl_fn_804D90E4_0000152C:
    stw r16, -0x660c(r30)
    li r15, 0x9
    lwz r3, lbl_8087F628
    lwz r0, 0x25c(r3)
    cmpwi r0, 0x1
    bne lbl_fn_804D90E4_00001564
    lwz r3, lbl_8087F5B8
    cmpwi r3, 0x0
    beq lbl_fn_804D90E4_00001564
    lwz r0, 0x88(r3)
    cmpwi r0, 0x8
    bne lbl_fn_804D90E4_00001564
    li r4, 0x9
    bl fn_804BA350
lbl_fn_804D90E4_00001564:
    addis r3, r26, 0x1
    cmplwi r18, 0x1
    stw r17, -0x68b0(r3)
    bgt lbl_fn_804D90E4_00001578
    li r15, 0x9
lbl_fn_804D90E4_00001578:
    addi r3, r26, 0x4fc
    li r4, 0x2b
    bl fn_804FB224
    addis r3, r26, 0x1
    stw r20, -0x68ac(r3)
    stw r15, -0x68a8(r3)
    b lbl_fn_804D90E4_0000172C
lbl_fn_804D90E4_00001594:
    cmpwi r0, 0x1
    bne lbl_fn_804D90E4_0000172C
    lwz r7, lbl_8087F610
    clrlwi r3, r6, 24
    li r4, 0x0
    mr r5, r7
    mtctr r25
lbl_fn_804D90E4_000015B0:
    lwz r0, 0x48(r5)
    cmpwi r0, 0x0
    beq lbl_fn_804D90E4_000015D8
    lbz r0, 0x5d(r5)
    cmplw r3, r0
    bne lbl_fn_804D90E4_000015D8
    mulli r0, r4, 0x18
    add r3, r7, r0
    addi r3, r3, 0x48
    b lbl_fn_804D90E4_0000171C
lbl_fn_804D90E4_000015D8:
    lwz r0, 0x60(r5)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804D90E4_00001604
    lbz r0, 0x75(r5)
    cmplw r3, r0
    bne lbl_fn_804D90E4_00001604
    mulli r0, r4, 0x18
    add r3, r7, r0
    addi r3, r3, 0x48
    b lbl_fn_804D90E4_0000171C
lbl_fn_804D90E4_00001604:
    lwz r0, 0x78(r5)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804D90E4_00001630
    lbz r0, 0x8d(r5)
    cmplw r3, r0
    bne lbl_fn_804D90E4_00001630
    mulli r0, r4, 0x18
    add r3, r7, r0
    addi r3, r3, 0x48
    b lbl_fn_804D90E4_0000171C
lbl_fn_804D90E4_00001630:
    lwz r0, 0x90(r5)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804D90E4_0000165C
    lbz r0, 0xa5(r5)
    cmplw r3, r0
    bne lbl_fn_804D90E4_0000165C
    mulli r0, r4, 0x18
    add r3, r7, r0
    addi r3, r3, 0x48
    b lbl_fn_804D90E4_0000171C
lbl_fn_804D90E4_0000165C:
    lwz r0, 0xa8(r5)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804D90E4_00001688
    lbz r0, 0xbd(r5)
    cmplw r3, r0
    bne lbl_fn_804D90E4_00001688
    mulli r0, r4, 0x18
    add r3, r7, r0
    addi r3, r3, 0x48
    b lbl_fn_804D90E4_0000171C
lbl_fn_804D90E4_00001688:
    lwz r0, 0xc0(r5)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804D90E4_000016B4
    lbz r0, 0xd5(r5)
    cmplw r3, r0
    bne lbl_fn_804D90E4_000016B4
    mulli r0, r4, 0x18
    add r3, r7, r0
    addi r3, r3, 0x48
    b lbl_fn_804D90E4_0000171C
lbl_fn_804D90E4_000016B4:
    lwz r0, 0xd8(r5)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804D90E4_000016E0
    lbz r0, 0xed(r5)
    cmplw r3, r0
    bne lbl_fn_804D90E4_000016E0
    mulli r0, r4, 0x18
    add r3, r7, r0
    addi r3, r3, 0x48
    b lbl_fn_804D90E4_0000171C
lbl_fn_804D90E4_000016E0:
    lwz r0, 0xf0(r5)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804D90E4_0000170C
    lbz r0, 0x105(r5)
    cmplw r3, r0
    bne lbl_fn_804D90E4_0000170C
    mulli r0, r4, 0x18
    add r3, r7, r0
    addi r3, r3, 0x48
    b lbl_fn_804D90E4_0000171C
lbl_fn_804D90E4_0000170C:
    addi r5, r5, 0xc0
    addi r4, r4, 0x1
    bdnz lbl_fn_804D90E4_000015B0
    li r3, 0x0
lbl_fn_804D90E4_0000171C:
    cmpwi r3, 0x0
    beq lbl_fn_804D90E4_00001728
    stw r19, 0x0(r3)
lbl_fn_804D90E4_00001728:
    stw r21, -0x660c(r30)
lbl_fn_804D90E4_0000172C:
    lwz r0, -0x660c(r30)
    cmpwi r0, -0x2
    bne lbl_fn_804D90E4_0000173C
    addi r29, r29, 0x1
lbl_fn_804D90E4_0000173C:
    addi r27, r27, 0x1
    addi r22, r22, 0xd5c
lbl_fn_804D90E4_00001744:
    lwz r0, 0x5e8(r26)
    cmplw r27, r0
    blt lbl_fn_804D90E4_00001150
    cmpw r28, r29
    bne lbl_fn_804D90E4_00001764
    addis r3, r26, 0x1
    li r0, 0x1
    stb r0, -0x658b(r3)
lbl_fn_804D90E4_00001764:
    lmw r15, 0xc(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_804D97F4(void)
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
    bne lbl_fn_804D97F4_000017C4
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804D97F4_000017B8
    li r30, 0x0
    b lbl_fn_804D97F4_000017E0
lbl_fn_804D97F4_000017B8:
    bl fn_806B0E30
    clrlwi r30, r3, 24
    b lbl_fn_804D97F4_000017E0
lbl_fn_804D97F4_000017C4:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804D97F4_000017D8
    li r3, 0x0
    b lbl_fn_804D97F4_000017DC
lbl_fn_804D97F4_000017D8:
    bl fn_806A8E40
lbl_fn_804D97F4_000017DC:
    clrlwi r30, r3, 24
lbl_fn_804D97F4_000017E0:
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804D97F4_00001814
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804D97F4_00001808
    li r0, 0x0
    b lbl_fn_804D97F4_00001818
lbl_fn_804D97F4_00001808:
    bl fn_806B1250
    clrlwi r0, r3, 24
    b lbl_fn_804D97F4_00001818
lbl_fn_804D97F4_00001814:
    li r0, 0x0
lbl_fn_804D97F4_00001818:
    clrlwi r3, r30, 24
    clrlwi r0, r0, 24
    subf r0, r3, r0
    cntlzw r0, r0
    srwi r0, r0, 5
    cmpwi r0, 0x1
    bne lbl_fn_804D97F4_00001844
    addis r3, r31, 0x1
    li r0, 0x12c
    stw r0, -0x6648(r3)
    b lbl_fn_804D97F4_000018DC
lbl_fn_804D97F4_00001844:
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804D97F4_00001878
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804D97F4_0000186C
    li r30, 0x0
    b lbl_fn_804D97F4_0000187C
lbl_fn_804D97F4_0000186C:
    bl fn_806B1250
    clrlwi r30, r3, 24
    b lbl_fn_804D97F4_0000187C
lbl_fn_804D97F4_00001878:
    li r30, 0x0
lbl_fn_804D97F4_0000187C:
    bl fn_804AE3BC
    clrlwi r4, r30, 24
    li r5, 0x1042
    li r6, 0x0
    li r7, 0x1
    bl fn_8050E098
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804D97F4_000018C8
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804D97F4_000018BC
    li r30, 0x0
    b lbl_fn_804D97F4_000018CC
lbl_fn_804D97F4_000018BC:
    bl fn_806B1250
    clrlwi r30, r3, 24
    b lbl_fn_804D97F4_000018CC
lbl_fn_804D97F4_000018C8:
    li r30, 0x0
lbl_fn_804D97F4_000018CC:
    bl fn_804AE3BC
    clrlwi r4, r30, 24
    li r5, 0x1
    bl fn_8050DDE0
lbl_fn_804D97F4_000018DC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804D9970(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804D9970_00001944
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804D9970_00001938
    li r0, 0x0
    b lbl_fn_804D9970_00001960
lbl_fn_804D9970_00001938:
    bl fn_806B0E30
    clrlwi r0, r3, 24
    b lbl_fn_804D9970_00001960
lbl_fn_804D9970_00001944:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804D9970_00001958
    li r3, 0x0
    b lbl_fn_804D9970_0000195C
lbl_fn_804D9970_00001958:
    bl fn_806A8E40
lbl_fn_804D9970_0000195C:
    clrlwi r0, r3, 24
lbl_fn_804D9970_00001960:
    lwz r5, 0x5e8(r30)
    clrlwi r4, r0, 24
    li r3, 0x0
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_fn_804D9970_000019A8
lbl_fn_804D9970_00001978:
    lwz r0, 0x5e4(r30)
    add r31, r0, r3
    lwz r0, 0xd0(r31)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804D9970_000019A0
    lbz r0, 0xcc(r31)
    cmplw r4, r0
    bne lbl_fn_804D9970_000019A0
    b lbl_fn_804D9970_000019AC
lbl_fn_804D9970_000019A0:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804D9970_00001978
lbl_fn_804D9970_000019A8:
    li r31, 0x0
lbl_fn_804D9970_000019AC:
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804D9970_000019E0
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804D9970_000019D4
    li r29, 0x0
    b lbl_fn_804D9970_000019FC
lbl_fn_804D9970_000019D4:
    bl fn_806B0E30
    clrlwi r29, r3, 24
    b lbl_fn_804D9970_000019FC
lbl_fn_804D9970_000019E0:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804D9970_000019F4
    li r3, 0x0
    b lbl_fn_804D9970_000019F8
lbl_fn_804D9970_000019F4:
    bl fn_806A8E40
lbl_fn_804D9970_000019F8:
    clrlwi r29, r3, 24
lbl_fn_804D9970_000019FC:
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804D9970_00001A30
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804D9970_00001A24
    li r0, 0x0
    b lbl_fn_804D9970_00001A34
lbl_fn_804D9970_00001A24:
    bl fn_806B1250
    clrlwi r0, r3, 24
    b lbl_fn_804D9970_00001A34
lbl_fn_804D9970_00001A30:
    li r0, 0x0
lbl_fn_804D9970_00001A34:
    clrlwi r3, r29, 24
    clrlwi r0, r0, 24
    subf r0, r3, r0
    cntlzw r0, r0
    srwi r0, r0, 5
    cmpwi r0, 0x1
    bne lbl_fn_804D9970_00001B54
    addis r3, r30, 0x1
    lwz r0, -0x6648(r3)
    cmpwi r0, 0x0
    bgt lbl_fn_804D9970_00001AD0
    lwz r3, lbl_8087F628
    li r29, 0x9
    lwz r0, 0x25c(r3)
    cmpwi r0, 0x1
    bne lbl_fn_804D9970_00001A94
    lwz r3, lbl_8087F5B8
    cmpwi r3, 0x0
    beq lbl_fn_804D9970_00001A94
    lwz r0, 0x88(r3)
    cmpwi r0, 0x8
    bne lbl_fn_804D9970_00001A94
    li r4, 0x9
    bl fn_804BA350
lbl_fn_804D9970_00001A94:
    li r0, -0xa2
    addis r3, r30, 0x1
    cmplwi r0, 0x1
    li r0, -0x1
    stw r0, -0x68b0(r3)
    bgt lbl_fn_804D9970_00001AB0
    li r29, 0x9
lbl_fn_804D9970_00001AB0:
    addi r3, r30, 0x4fc
    li r4, 0x2b
    bl fn_804FB224
    addis r3, r30, 0x1
    li r0, 0x9e
    stw r0, -0x68ac(r3)
    stw r29, -0x68a8(r3)
    b lbl_fn_804D9970_00001B60
lbl_fn_804D9970_00001AD0:
    lwz r0, 0x5e8(r30)
    li r5, 0x0
    li r6, 0x0
    li r3, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_804D9970_00001B3C
lbl_fn_804D9970_00001AEC:
    lwz r0, 0x5e4(r30)
    add r4, r0, r3
    lwz r0, 0xd0(r4)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804D9970_00001B34
    lbz r4, 0xcc(r4)
    lbz r0, 0xcc(r31)
    cmplw r0, r4
    beq lbl_fn_804D9970_00001B34
    clrlslwi r4, r4, 24, 2
    addi r6, r6, 0x1
    addis r4, r4, 0x1
    subi r0, r4, 0x65ec
    lwzx r0, r30, r0
    cmpwi r0, 0x1
    bne lbl_fn_804D9970_00001B34
    addi r5, r5, 0x1
lbl_fn_804D9970_00001B34:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804D9970_00001AEC
lbl_fn_804D9970_00001B3C:
    cmpw r6, r5
    bne lbl_fn_804D9970_00001B60
    addis r3, r30, 0x1
    li r0, 0x1
    stb r0, -0x658a(r3)
    b lbl_fn_804D9970_00001B60
lbl_fn_804D9970_00001B54:
    addis r3, r30, 0x1
    li r0, 0x1
    stb r0, -0x658a(r3)
lbl_fn_804D9970_00001B60:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
