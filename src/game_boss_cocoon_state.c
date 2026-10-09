#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_25(void);
extern void _restgpr_27(void);
extern void _savegpr_25(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_80084320(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800D1D3C(void);
extern void fn_800D1E9C(void);
extern void fn_800D246C(void);
extern void fn_8010A828(void);
extern void fn_801F64D0(void);
extern void fn_801F6C2C(void);
extern void fn_801F791C(void);
extern void fn_80211480(void);
extern void fn_8021150C(void);
extern void fn_80213E60(void);
extern void fn_80219558(void);
extern void fn_80373148(void);
extern void fn_803750E4(void);
extern void fn_804439FC(void);
extern void fn_8044F434(void);
extern void fn_8044F96C(void);
extern void fn_80450590(void);
extern void fn_80680CF8(void);
extern void fn_80695720(void);
extern void fn_806958E0(void);
extern void fn_806959D8(void);
extern void fn_80695A50(void);

/* External data declarations */
extern u8 lbl_80754848[];
extern u8 lbl_807548CC[];
extern u8 lbl_8078F348[];
extern u8 lbl_8078F388[];
extern u8 lbl_8078F3C8[];
extern u8 lbl_8078F400[];
extern u8 lbl_8078F420[];
extern u8 lbl_8078F444[];
extern u8 lbl_8078F464[];
extern u8 lbl_8078F488[];
extern u8 lbl_8078F4A8[];
extern u8 lbl_8078F4C4[];
extern u8 lbl_8078F4E0[];

/* Small data declarations */
extern u32 lbl_8087E008;
extern u32 lbl_8087E00C;
extern u32 lbl_8087E010;
extern u32 lbl_8087E014;
extern u32 lbl_8087E018;
extern u32 lbl_8087E01C;
extern u32 lbl_8087E020;
extern u32 lbl_8087E024;
extern u32 lbl_8087EFE8;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F430;
extern u32 lbl_8087F4A0;
extern u32 lbl_8087F4F8;
extern u32 lbl_8087F4FC;
extern u32 lbl_80886B34;
extern u32 lbl_80886B3C;
extern u32 lbl_80886B40;
extern u32 lbl_80886B44;
extern u32 lbl_80886B48;
extern u32 lbl_80886B4C;

/* Function declarations */
void fn_8044D028(void);
void fn_8044D034(void);
void fn_8044D060(void);
void fn_8044D0DC(void);
void fn_8044D104(void);
void fn_8044D184(void);
void fn_8044D1A4(void);
void fn_8044D208(void);
void fn_8044D3A0(void);
void fn_8044D404(void);
void fn_8044D490(void);
void fn_8044D4F0(void);
void fn_8044D500(void);
void fn_8044D530(void);
void fn_8044D560(void);
void fn_8044D56C(void);
void fn_8044D678(void);
void fn_8044D6AC(void);
void fn_8044D6E0(void);
void fn_8044D710(void);
void fn_8044D878(void);
void fn_8044D884(void);
void fn_8044D9BC(void);
void fn_8044E0A8(void);
void fn_8044E158(void);
void fn_8044E198(void);
void fn_8044E1BC(void);
void fn_8044E418(void);
void fn_8044E610(void);
void fn_8044E644(void);
void fn_8044E88C(void);

asm void fn_8044D028(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x601c(r3)
    blr
}

asm void fn_8044D034(void)
{
    nofralloc
    cmpwi r4, 0x0
    blt lbl_fn_8044D034_0000001C
    cmpwi r4, 0x1c
    blt lbl_fn_8044D034_00000024
lbl_fn_8044D034_0000001C:
    li r3, 0x0
    blr
lbl_fn_8044D034_00000024:
    mulli r0, r4, 0x2d4
    addis r3, r3, 0x1
    add r3, r3, r0
    subi r3, r3, 0x7ba4
    blr
}

asm void fn_8044D060(void)
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
    mr r3, r7
    bl fn_80219558
    cmpwi r3, 0x0
    blt lbl_fn_8044D060_00000098
    cmpwi r3, 0x7
    bge lbl_fn_8044D060_00000098
    slwi r6, r3, 6
    addis r4, r29, 0x1
    slwi r0, r3, 2
    slwi r5, r30, 3
    add r3, r4, r6
    add r3, r3, r5
    add r0, r30, r0
    stw r31, -0x7d70(r3)
    stw r0, -0x7d6c(r3)
lbl_fn_8044D060_00000098:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8044D0DC(void)
{
    nofralloc
    slwi r8, r7, 6
    addis r3, r3, 0x1
    slwi r6, r4, 3
    slwi r0, r7, 2
    add r3, r3, r8
    add r3, r3, r6
    add r0, r4, r0
    stw r5, -0x7d70(r3)
    stw r0, -0x7d6c(r3)
    blr
}

asm void fn_8044D104(void)
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
    mr r3, r7
    bl fn_80219558
    cmpwi r3, 0x0
    blt lbl_fn_8044D104_0000013C
    cmpwi r3, 0x7
    bge lbl_fn_8044D104_0000013C
    slwi r4, r3, 6
    addis r0, r28, 0x1
    slwi r3, r29, 3
    add r0, r0, r4
    add r3, r0, r3
    stw r30, -0x7d50(r3)
    stw r31, -0x7d4c(r3)
lbl_fn_8044D104_0000013C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8044D184(void)
{
    nofralloc
    addis r0, r3, 0x1
    slwi r7, r7, 6
    slwi r3, r4, 3
    add r0, r0, r7
    add r3, r0, r3
    stw r5, -0x7d50(r3)
    stw r6, -0x7d4c(r3)
    blr
}

asm void fn_8044D1A4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    mr r3, r5
    bl fn_80219558
    cmplwi r3, 0x6
    bgt lbl_fn_8044D1A4_000001C4
    addis r4, r30, 0x1
    slwi r0, r3, 6
    add r3, r4, r0
    slwi r0, r31, 3
    add r3, r3, r0
    lwz r3, -0x7d6c(r3)
    b lbl_fn_8044D1A4_000001C8
lbl_fn_8044D1A4_000001C4:
    li r3, -0x1
lbl_fn_8044D1A4_000001C8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8044D208(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r26, 0x8(r1)
    mr r28, r3
    mr r29, r4
    mr r3, r5
    bl fn_80219558
    cmplwi r3, 0x6
    mr r31, r3
    ble lbl_fn_8044D208_00000214
    li r3, -0x1
    b lbl_fn_8044D208_00000364
lbl_fn_8044D208_00000214:
    lwz r4, lbl_8087F0A8
    lwz r0, 0x160(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8044D208_00000298
    cmpwi r3, 0x0
    beq lbl_fn_8044D208_00000260
    cmpwi r3, 0x2
    beq lbl_fn_8044D208_00000268
    cmpwi r3, 0x3
    beq lbl_fn_8044D208_00000270
    cmpwi r3, 0x4
    beq lbl_fn_8044D208_00000278
    cmpwi r3, 0x5
    beq lbl_fn_8044D208_00000280
    cmpwi r3, 0x6
    beq lbl_fn_8044D208_00000288
    cmpwi r3, 0x1
    beq lbl_fn_8044D208_00000290
    b lbl_fn_8044D208_0000034C
lbl_fn_8044D208_00000260:
    li r3, 0x0
    b lbl_fn_8044D208_00000364
lbl_fn_8044D208_00000268:
    li r3, 0x14
    b lbl_fn_8044D208_00000364
lbl_fn_8044D208_00000270:
    li r3, 0x28
    b lbl_fn_8044D208_00000364
lbl_fn_8044D208_00000278:
    li r3, 0x3c
    b lbl_fn_8044D208_00000364
lbl_fn_8044D208_00000280:
    li r3, 0x50
    b lbl_fn_8044D208_00000364
lbl_fn_8044D208_00000288:
    li r3, 0x64
    b lbl_fn_8044D208_00000364
lbl_fn_8044D208_00000290:
    li r3, 0x78
    b lbl_fn_8044D208_00000364
lbl_fn_8044D208_00000298:
    lwz r0, 0x18c(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8044D208_0000034C
    cmpwi r29, 0x2
    bne lbl_fn_8044D208_0000034C
    bl fn_80680CF8
    slwi r0, r3, 29
    srwi r3, r3, 31
    subf r0, r3, r0
    rotlwi r0, r0, 3
    add r0, r0, r3
    mulli r27, r0, 0x14
    bl fn_80680CF8
    lis r26, 0x6666
    addi r0, r26, 0x6667
    mulhw r0, r0, r3
    srawi r0, r0, 2
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0xa
    subf r0, r0, r3
    add r30, r0, r27
    bl fn_80680CF8
    slwi r0, r3, 29
    srwi r3, r3, 31
    subf r0, r3, r0
    rotlwi r0, r0, 3
    add r0, r0, r3
    mulli r27, r0, 0x14
    bl fn_80680CF8
    addi r0, r26, 0x6667
    slwi r4, r31, 6
    mulhw r5, r0, r3
    addis r0, r28, 0x1
    add r4, r0, r4
    stw r30, -0x7d70(r4)
    srawi r0, r5, 2
    srwi r5, r0, 31
    add r0, r0, r5
    mulli r0, r0, 0xa
    subf r0, r0, r3
    add r0, r0, r27
    stw r0, -0x7d68(r4)
    stw r30, -0x7d60(r4)
    stw r30, -0x7d58(r4)
lbl_fn_8044D208_0000034C:
    addis r3, r28, 0x1
    slwi r0, r31, 6
    add r3, r3, r0
    slwi r0, r29, 3
    add r3, r3, r0
    lwz r3, -0x7d70(r3)
lbl_fn_8044D208_00000364:
    lmw r26, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8044D3A0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    mr r3, r5
    bl fn_80219558
    cmplwi r3, 0x6
    bgt lbl_fn_8044D3A0_000003C0
    addis r4, r30, 0x1
    slwi r0, r3, 6
    add r3, r4, r0
    slwi r0, r31, 3
    add r3, r3, r0
    lwz r3, -0x7d50(r3)
    b lbl_fn_8044D3A0_000003C4
lbl_fn_8044D3A0_000003C0:
    li r3, -0x1
lbl_fn_8044D3A0_000003C4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8044D404(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r3, 0x0(r4)
    bl fn_80211480
    cmpwi r3, 0x0
    beq lbl_fn_8044D404_00000450
    lha r0, 0xbc(r3)
    cmpwi r0, 0x2
    bne lbl_fn_8044D404_00000450
    addis r3, r30, 0x1
    lwz r0, -0x24d4(r3)
    cmplwi r0, 0x100
    bge lbl_fn_8044D404_00000450
    lwz r0, -0x24d4(r3)
    slwi r0, r0, 2
    add r0, r3, r0
    subic. r3, r0, 0x24d0
    beq lbl_fn_8044D404_00000440
    lwz r0, 0x0(r31)
    stw r0, 0x0(r3)
lbl_fn_8044D404_00000440:
    addis r4, r30, 0x1
    lwz r3, -0x24d4(r4)
    addi r0, r3, 0x1
    stw r0, -0x24d4(r4)
lbl_fn_8044D404_00000450:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8044D490(void)
{
    nofralloc
    cmpwi r4, 0x0
    bltlr
    addis r5, r3, 0x1
    lwz r0, -0x24d4(r5)
    cmpw r4, r0
    blt lbl_fn_8044D490_00000484
    blr
lbl_fn_8044D490_00000484:
    slwi r0, r4, 2
    srawi r0, r0, 2
    addze r4, r0
    slwi r0, r4, 2
    add r6, r3, r0
    b lbl_fn_8044D490_000004B0
lbl_fn_8044D490_0000049C:
    addis r3, r6, 0x1
    addi r6, r6, 0x4
    lwz r0, -0x24cc(r3)
    addi r4, r4, 0x1
    stw r0, -0x24d0(r3)
lbl_fn_8044D490_000004B0:
    lwz r3, -0x24d4(r5)
    subi r0, r3, 0x1
    cmplw r4, r0
    blt lbl_fn_8044D490_0000049C
    stw r0, -0x24d4(r5)
    blr
}

asm void fn_8044D4F0(void)
{
    nofralloc
    addis r3, r3, 0x1
    li r0, 0x0
    stw r0, -0x24d4(r3)
    blr
}

asm void fn_8044D500(void)
{
    nofralloc
    cmpwi r4, 0x0
    blt lbl_fn_8044D500_000004F0
    addis r3, r3, 0x1
    lwz r0, -0x24d4(r3)
    cmpw r4, r0
    blt lbl_fn_8044D500_000004F8
lbl_fn_8044D500_000004F0:
    li r3, -0x1
    blr
lbl_fn_8044D500_000004F8:
    slwi r0, r4, 2
    add r3, r3, r0
    lwz r3, -0x24d0(r3)
    blr
}

asm void fn_8044D530(void)
{
    nofralloc
    cmpwi r4, 0x0
    blt lbl_fn_8044D530_00000520
    addis r3, r3, 0x1
    lwz r0, -0x24d4(r3)
    cmpw r4, r0
    blt lbl_fn_8044D530_00000528
lbl_fn_8044D530_00000520:
    li r3, -0x1
    blr
lbl_fn_8044D530_00000528:
    slwi r0, r4, 2
    add r3, r3, r0
    lwz r3, -0x24d0(r3)
    blr
}

asm void fn_8044D560(void)
{
    nofralloc
    addis r3, r3, 0x1
    lwz r3, -0x24d4(r3)
    blr
}

asm void fn_8044D56C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    blt lbl_fn_8044D56C_00000634
    addis r3, r3, 0x1
    lwz r0, -0x24d4(r3)
    cmpw r4, r0
    blt lbl_fn_8044D56C_00000580
    b lbl_fn_8044D56C_00000634
lbl_fn_8044D56C_00000580:
    slwi r0, r4, 2
    add r31, r3, r0
    lwz r3, -0x24d0(r31)
    bl fn_8021150C
    cmpwi r3, 0x0
    blt lbl_fn_8044D56C_00000634
    cmpwi r3, 0x600
    blt lbl_fn_8044D56C_000005A4
    b lbl_fn_8044D56C_00000634
lbl_fn_8044D56C_000005A4:
    lwz r4, -0x24d0(r31)
    mr r3, r29
    li r5, 0x1
    li r6, 0x1
    li r7, 0x0
    li r8, 0x0
    li r9, 0x1
    li r10, 0x1
    bl fn_804439FC
    lwz r3, -0x24d0(r31)
    bl fn_8021150C
    cmpwi r3, 0x0
    blt lbl_fn_8044D56C_000005F0
    cmpwi r3, 0x600
    bge lbl_fn_8044D56C_000005F0
    slwi r0, r3, 4
    li r4, 0x1
    add r3, r29, r0
    stw r4, 0xc(r3)
lbl_fn_8044D56C_000005F0:
    slwi r0, r30, 2
    addis r4, r29, 0x1
    srawi r0, r0, 2
    addze r5, r0
    slwi r0, r5, 2
    add r6, r29, r0
    b lbl_fn_8044D56C_00000620
lbl_fn_8044D56C_0000060C:
    addis r3, r6, 0x1
    addi r6, r6, 0x4
    lwz r0, -0x24cc(r3)
    addi r5, r5, 0x1
    stw r0, -0x24d0(r3)
lbl_fn_8044D56C_00000620:
    lwz r3, -0x24d4(r4)
    subi r0, r3, 0x1
    cmplw r5, r0
    blt lbl_fn_8044D56C_0000060C
    stw r0, -0x24d4(r4)
lbl_fn_8044D56C_00000634:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8044D678(void)
{
    nofralloc
    lwz r0, 0x6000(r3)
    add. r5, r0, r4
    stw r5, 0x6000(r3)
    bge lbl_fn_8044D678_0000066C
    li r0, 0x0
    stw r0, 0x6000(r3)
    blr
lbl_fn_8044D678_0000066C:
    lis r4, 0xf
    addi r0, r4, 0x423f
    cmpw r5, r0
    blelr
    stw r0, 0x6000(r3)
    blr
}

asm void fn_8044D6AC(void)
{
    nofralloc
    lwz r0, 0x6000(r3)
    subf. r5, r4, r0
    stw r5, 0x6000(r3)
    bge lbl_fn_8044D6AC_000006A0
    li r0, 0x0
    stw r0, 0x6000(r3)
    blr
lbl_fn_8044D6AC_000006A0:
    lis r4, 0xf
    addi r0, r4, 0x423f
    cmpw r5, r0
    blelr
    stw r0, 0x6000(r3)
    blr
}

asm void fn_8044D6E0(void)
{
    nofralloc
    cmpwi r4, 0x0
    stw r4, 0x6000(r3)
    bge lbl_fn_8044D6E0_000006D0
    li r0, 0x0
    stw r0, 0x6000(r3)
    blr
lbl_fn_8044D6E0_000006D0:
    lis r5, 0xf
    addi r0, r5, 0x423f
    cmpw r4, r0
    blelr
    stw r0, 0x6000(r3)
    blr
}

asm void fn_8044D710(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, fn_8044D878@ha
    lis r5, fn_8010A828@ha
    stw r0, 0x14(r1)
    addi r4, r4, fn_8044D878@l
    lfs f1, lbl_80886B3C
    addi r5, r5, fn_8010A828@l
    stw r31, 0xc(r1)
    mr r31, r3
    lfs f0, lbl_80886B40
    li r6, 0x40
    stw r30, 0x8(r1)
    li r30, 0x0
    li r7, 0x3
    stw r30, 0x0(r3)
    stw r30, 0x4(r3)
    stfs f1, 0x8(r3)
    stfs f1, 0xc(r3)
    stfs f1, 0x10(r3)
    stfs f0, 0x14(r3)
    stw r30, 0x18(r3)
    stw r30, 0x1c(r3)
    stw r30, 0x20(r3)
    stw r30, 0x24(r3)
    addi r3, r3, 0x2c
    bl fn_806958E0
    lwz r0, 0xec(r31)
    lwz r3, 0x0(r31)
    oris r0, r0, 0xf800
    stw r30, 0xf0(r31)
    rlwinm r0, r0, 0, 8, 4
    cmpwi r3, 0x0
    stw r0, 0xec(r31)
    stw r30, 0x4(r31)
    beq lbl_fn_8044D710_00000834
    lwz r0, lbl_8087F4F8
    cmpwi r0, 0x0
    beq lbl_fn_8044D710_0000082C
    addi r5, r3, 0x40
    addi r4, r5, 0x4
    b lbl_fn_8044D710_000007AC
lbl_fn_8044D710_00000790:
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8044D710_000007A8
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_8044D710_000007A8:
    addi r4, r4, 0x4
lbl_fn_8044D710_000007AC:
    lwz r0, 0x0(r5)
    slwi r0, r0, 2
    add r3, r5, r0
    addi r0, r3, 0x4
    cmplw r4, r0
    bne lbl_fn_8044D710_00000790
    lwz r6, lbl_8087F4F8
    li r4, 0x0
    lwz r3, 0x0(r31)
    li r5, 0x0
    lwz r0, 0x48(r6)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8044D710_0000082C
lbl_fn_8044D710_000007E4:
    lwz r0, 0x50(r6)
    add r0, r0, r5
    cmplw r0, r3
    bne lbl_fn_8044D710_00000820
    clrlwi r0, r4, 29
    li r3, 0x1
    slw r0, r3, r0
    lwz r5, 0x4c(r6)
    srwi r4, r4, 3
    nor r0, r0, r0
    lbzx r3, r5, r4
    clrlwi r0, r0, 24
    and r0, r3, r0
    stbx r0, r5, r4
    b lbl_fn_8044D710_0000082C
lbl_fn_8044D710_00000820:
    addi r5, r5, 0x84
    addi r4, r4, 0x1
    bdnz lbl_fn_8044D710_000007E4
lbl_fn_8044D710_0000082C:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_8044D710_00000834:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8044D878(void)
{
    nofralloc
    li r0, 0x0
    sth r0, 0x0(r3)
    blr
}

asm void fn_8044D884(void)
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
    beq lbl_fn_8044D884_00000978
    lwz r4, 0x0(r3)
    li r0, 0x0
    stw r0, 0x4(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8044D884_00000950
    lwz r0, lbl_8087F4F8
    cmpwi r0, 0x0
    beq lbl_fn_8044D884_00000948
    addi r6, r4, 0x40
    addi r5, r6, 0x4
    b lbl_fn_8044D884_000008C8
lbl_fn_8044D884_000008AC:
    lwz r4, 0x0(r5)
    cmpwi r4, 0x0
    beq lbl_fn_8044D884_000008C4
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
lbl_fn_8044D884_000008C4:
    addi r5, r5, 0x4
lbl_fn_8044D884_000008C8:
    lwz r0, 0x0(r6)
    slwi r0, r0, 2
    add r4, r6, r0
    addi r0, r4, 0x4
    cmplw r5, r0
    bne lbl_fn_8044D884_000008AC
    lwz r7, lbl_8087F4F8
    li r5, 0x0
    lwz r4, 0x0(r3)
    li r6, 0x0
    lwz r0, 0x48(r7)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8044D884_00000948
lbl_fn_8044D884_00000900:
    lwz r0, 0x50(r7)
    add r0, r0, r6
    cmplw r0, r4
    bne lbl_fn_8044D884_0000093C
    clrlwi r0, r5, 29
    li r4, 0x1
    slw r0, r4, r0
    lwz r6, 0x4c(r7)
    srwi r5, r5, 3
    nor r0, r0, r0
    lbzx r4, r6, r5
    clrlwi r0, r0, 24
    and r0, r4, r0
    stbx r0, r6, r5
    b lbl_fn_8044D884_00000948
lbl_fn_8044D884_0000093C:
    addi r6, r6, 0x84
    addi r5, r5, 0x1
    bdnz lbl_fn_8044D884_00000900
lbl_fn_8044D884_00000948:
    li r0, 0x0
    stw r0, 0x0(r3)
lbl_fn_8044D884_00000950:
    lis r4, fn_8010A828@ha
    li r5, 0x40
    addi r4, r4, fn_8010A828@l
    li r6, 0x3
    addi r3, r3, 0x2c
    bl fn_806959D8
    cmpwi r31, 0x0
    ble lbl_fn_8044D884_00000978
    mr r3, r30
    bl dtor_80084684
lbl_fn_8044D884_00000978:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8044D9BC(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stmw r19, 0xc(r1)
    lwz r0, lbl_8087F4F8
    cmpwi r0, 0x0
    bne lbl_fn_8044D9BC_00000EA4
    lwz r19, lbl_8087F4A0
    bne lbl_fn_8044D9BC_00000A04
    li r3, 0x58
    li r4, 0x1
    la r5, lbl_8087E024
    la r6, lbl_8087E020
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r20, r3
    beq lbl_fn_8044D9BC_00000A00
    mr r4, r19
    bl fn_800D1D3C
    li r0, 0x0
    stw r0, 0x48(r20)
    lis r3, lbl_8078F388@ha
    stw r0, 0x4c(r20)
    addi r3, r3, lbl_8078F388@l
    stw r0, 0x50(r20)
    stw r3, 0x0(r20)
lbl_fn_8044D9BC_00000A00:
    stw r20, lbl_8087F4F8
lbl_fn_8044D9BC_00000A04:
    lwz r20, lbl_8087F4F8
    lwz r0, 0x48(r20)
    cmplwi r0, 0xc
    beq lbl_fn_8044D9BC_00000AE4
    li r19, 0x0
    stw r19, 0x48(r20)
    lwz r3, 0x4c(r20)
    cmpwi r3, 0x0
    beq lbl_fn_8044D9BC_00000A30
    bl fn_80084C24
    stw r19, 0x4c(r20)
lbl_fn_8044D9BC_00000A30:
    lwz r3, 0x50(r20)
    cmpwi r3, 0x0
    beq lbl_fn_8044D9BC_00000A50
    lis r4, fn_8044E158@ha
    addi r4, r4, fn_8044E158@l
    bl fn_80695A50
    li r0, 0x0
    stw r0, 0x50(r20)
lbl_fn_8044D9BC_00000A50:
    li r3, 0x1
    li r0, 0xc
    cmplwi r3, 0x1
    stw r0, 0x48(r20)
    li r3, 0x1
    ble lbl_fn_8044D9BC_00000A6C
    li r3, 0x1
lbl_fn_8044D9BC_00000A6C:
    li r4, 0x1
    la r5, lbl_8087E014
    la r6, lbl_8087E010
    li r7, 0x0
    bl fn_800846FC
    stw r3, 0x4c(r20)
    li r4, 0x0
    li r5, 0x1
    lwz r0, 0x48(r20)
    srwi r0, r0, 3
    cmplwi r0, 0x1
    ble lbl_fn_8044D9BC_00000AA0
    mr r5, r0
lbl_fn_8044D9BC_00000AA0:
    bl memset
    lwz r19, 0x48(r20)
    li r4, 0x1
    la r5, lbl_8087E00C
    la r6, lbl_8087E008
    mulli r3, r19, 0x84
    li r7, 0x0
    addi r3, r3, 0x10
    bl fn_800846FC
    lis r4, fn_8044E198@ha
    lis r5, fn_8044E158@ha
    mr r7, r19
    li r6, 0x84
    addi r4, r4, fn_8044E198@l
    addi r5, r5, fn_8044E158@l
    bl fn_80695720
    stw r3, 0x50(r20)
lbl_fn_8044D9BC_00000AE4:
    lwz r23, lbl_8087F4F8
    li r20, 0x0
    li r19, 0x0
    lis r25, lbl_8078F4C4@ha
    lis r26, lbl_8078F4A8@ha
    lis r24, lbl_8078F4E0@ha
    lis r27, lbl_8078F488@ha
    lis r28, lbl_8078F464@ha
    lis r29, lbl_8078F444@ha
    lis r30, lbl_8078F420@ha
    lis r31, lbl_8078F400@ha
    b lbl_fn_8044D9BC_00000E98
lbl_fn_8044D9BC_00000B14:
    lwz r0, 0x50(r23)
    mr r3, r23
    addi r4, r24, lbl_8078F4E0@l
    add r21, r0, r19
    bl fn_801F64D0
    stw r3, 0x0(r21)
    li r22, 0x0
lbl_fn_8044D9BC_00000B30:
    mr r3, r23
    addi r4, r25, lbl_8078F4C4@l
    bl fn_801F64D0
    lwz r0, 0x4(r21)
    cmplwi r0, 0x3
    bge lbl_fn_8044D9BC_00000B6C
    lwz r0, 0x4(r21)
    slwi r0, r0, 2
    add r0, r21, r0
    addic. r4, r0, 0x8
    beq lbl_fn_8044D9BC_00000B60
    stw r3, 0x0(r4)
lbl_fn_8044D9BC_00000B60:
    lwz r3, 0x4(r21)
    addi r0, r3, 0x1
    stw r0, 0x4(r21)
lbl_fn_8044D9BC_00000B6C:
    mr r3, r23
    addi r4, r26, lbl_8078F4A8@l
    bl fn_801F64D0
    lwz r0, 0x14(r21)
    cmplwi r0, 0x3
    bge lbl_fn_8044D9BC_00000BA8
    lwz r0, 0x14(r21)
    slwi r0, r0, 2
    add r0, r21, r0
    addic. r4, r0, 0x18
    beq lbl_fn_8044D9BC_00000B9C
    stw r3, 0x0(r4)
lbl_fn_8044D9BC_00000B9C:
    lwz r3, 0x14(r21)
    addi r0, r3, 0x1
    stw r0, 0x14(r21)
lbl_fn_8044D9BC_00000BA8:
    addi r22, r22, 0x1
    cmpwi r22, 0x3
    blt lbl_fn_8044D9BC_00000B30
    mr r3, r23
    addi r4, r27, lbl_8078F488@l
    bl fn_801F64D0
    lwz r0, 0x24(r21)
    cmplwi r0, 0x2
    bge lbl_fn_8044D9BC_00000BF0
    lwz r0, 0x24(r21)
    slwi r0, r0, 2
    add r0, r21, r0
    addic. r4, r0, 0x28
    beq lbl_fn_8044D9BC_00000BE4
    stw r3, 0x0(r4)
lbl_fn_8044D9BC_00000BE4:
    lwz r3, 0x24(r21)
    addi r0, r3, 0x1
    stw r0, 0x24(r21)
lbl_fn_8044D9BC_00000BF0:
    mr r3, r23
    addi r4, r28, lbl_8078F464@l
    bl fn_801F64D0
    lwz r0, 0x24(r21)
    cmplwi r0, 0x2
    bge lbl_fn_8044D9BC_00000C2C
    lwz r0, 0x24(r21)
    slwi r0, r0, 2
    add r0, r21, r0
    addic. r4, r0, 0x28
    beq lbl_fn_8044D9BC_00000C20
    stw r3, 0x0(r4)
lbl_fn_8044D9BC_00000C20:
    lwz r3, 0x24(r21)
    addi r0, r3, 0x1
    stw r0, 0x24(r21)
lbl_fn_8044D9BC_00000C2C:
    mr r3, r23
    addi r4, r29, lbl_8078F444@l
    bl fn_801F64D0
    lwz r0, 0x30(r21)
    cmplwi r0, 0x2
    bge lbl_fn_8044D9BC_00000C68
    lwz r0, 0x30(r21)
    slwi r0, r0, 2
    add r0, r21, r0
    addic. r4, r0, 0x34
    beq lbl_fn_8044D9BC_00000C5C
    stw r3, 0x0(r4)
lbl_fn_8044D9BC_00000C5C:
    lwz r3, 0x30(r21)
    addi r0, r3, 0x1
    stw r0, 0x30(r21)
lbl_fn_8044D9BC_00000C68:
    mr r3, r23
    addi r4, r30, lbl_8078F420@l
    bl fn_801F64D0
    lwz r0, 0x30(r21)
    cmplwi r0, 0x2
    bge lbl_fn_8044D9BC_00000CA4
    lwz r0, 0x30(r21)
    slwi r0, r0, 2
    add r0, r21, r0
    addic. r4, r0, 0x34
    beq lbl_fn_8044D9BC_00000C98
    stw r3, 0x0(r4)
lbl_fn_8044D9BC_00000C98:
    lwz r3, 0x30(r21)
    addi r0, r3, 0x1
    stw r0, 0x30(r21)
lbl_fn_8044D9BC_00000CA4:
    mr r3, r23
    addi r4, r31, lbl_8078F400@l
    bl fn_801F64D0
    stw r3, 0x3c(r21)
    li r3, 0x0
    li r4, 0x0
    b lbl_fn_8044D9BC_00000D34
lbl_fn_8044D9BC_00000CC0:
    lwz r0, 0x40(r21)
    add r7, r21, r4
    lwz r6, 0x8(r7)
    cmplwi r0, 0x10
    bge lbl_fn_8044D9BC_00000CF8
    lwz r0, 0x40(r21)
    slwi r0, r0, 2
    add r0, r21, r0
    addic. r5, r0, 0x44
    beq lbl_fn_8044D9BC_00000CEC
    stw r6, 0x0(r5)
lbl_fn_8044D9BC_00000CEC:
    lwz r5, 0x40(r21)
    addi r0, r5, 0x1
    stw r0, 0x40(r21)
lbl_fn_8044D9BC_00000CF8:
    lwz r0, 0x40(r21)
    lwz r6, 0x18(r7)
    cmplwi r0, 0x10
    bge lbl_fn_8044D9BC_00000D2C
    lwz r0, 0x40(r21)
    slwi r0, r0, 2
    add r0, r21, r0
    addic. r5, r0, 0x44
    beq lbl_fn_8044D9BC_00000D20
    stw r6, 0x0(r5)
lbl_fn_8044D9BC_00000D20:
    lwz r5, 0x40(r21)
    addi r0, r5, 0x1
    stw r0, 0x40(r21)
lbl_fn_8044D9BC_00000D2C:
    addi r3, r3, 0x1
    addi r4, r4, 0x4
lbl_fn_8044D9BC_00000D34:
    lwz r0, 0x4(r21)
    cmplw r3, r0
    blt lbl_fn_8044D9BC_00000CC0
    lwz r0, 0x40(r21)
    lwz r4, 0x0(r21)
    cmplwi r0, 0x10
    bge lbl_fn_8044D9BC_00000D74
    lwz r0, 0x40(r21)
    slwi r0, r0, 2
    add r0, r21, r0
    addic. r3, r0, 0x44
    beq lbl_fn_8044D9BC_00000D68
    stw r4, 0x0(r3)
lbl_fn_8044D9BC_00000D68:
    lwz r3, 0x40(r21)
    addi r0, r3, 0x1
    stw r0, 0x40(r21)
lbl_fn_8044D9BC_00000D74:
    li r6, 0x0
    li r3, 0x0
    b lbl_fn_8044D9BC_00000DC0
lbl_fn_8044D9BC_00000D80:
    lwz r0, 0x40(r21)
    add r4, r21, r3
    lwz r5, 0x28(r4)
    cmplwi r0, 0x10
    bge lbl_fn_8044D9BC_00000DB8
    lwz r0, 0x40(r21)
    slwi r0, r0, 2
    add r0, r21, r0
    addic. r4, r0, 0x44
    beq lbl_fn_8044D9BC_00000DAC
    stw r5, 0x0(r4)
lbl_fn_8044D9BC_00000DAC:
    lwz r4, 0x40(r21)
    addi r0, r4, 0x1
    stw r0, 0x40(r21)
lbl_fn_8044D9BC_00000DB8:
    addi r6, r6, 0x1
    addi r3, r3, 0x4
lbl_fn_8044D9BC_00000DC0:
    lwz r0, 0x24(r21)
    cmplw r6, r0
    blt lbl_fn_8044D9BC_00000D80
    li r6, 0x0
    li r3, 0x0
    b lbl_fn_8044D9BC_00000E18
lbl_fn_8044D9BC_00000DD8:
    lwz r0, 0x40(r21)
    add r4, r21, r3
    lwz r5, 0x34(r4)
    cmplwi r0, 0x10
    bge lbl_fn_8044D9BC_00000E10
    lwz r0, 0x40(r21)
    slwi r0, r0, 2
    add r0, r21, r0
    addic. r4, r0, 0x44
    beq lbl_fn_8044D9BC_00000E04
    stw r5, 0x0(r4)
lbl_fn_8044D9BC_00000E04:
    lwz r4, 0x40(r21)
    addi r0, r4, 0x1
    stw r0, 0x40(r21)
lbl_fn_8044D9BC_00000E10:
    addi r6, r6, 0x1
    addi r3, r3, 0x4
lbl_fn_8044D9BC_00000E18:
    lwz r0, 0x30(r21)
    cmplw r6, r0
    blt lbl_fn_8044D9BC_00000DD8
    lwz r0, 0x40(r21)
    lwz r4, 0x3c(r21)
    cmplwi r0, 0x10
    bge lbl_fn_8044D9BC_00000E58
    lwz r0, 0x40(r21)
    slwi r0, r0, 2
    add r0, r21, r0
    addic. r3, r0, 0x44
    beq lbl_fn_8044D9BC_00000E4C
    stw r4, 0x0(r3)
lbl_fn_8044D9BC_00000E4C:
    lwz r3, 0x40(r21)
    addi r0, r3, 0x1
    stw r0, 0x40(r21)
lbl_fn_8044D9BC_00000E58:
    addi r22, r21, 0x44
    b lbl_fn_8044D9BC_00000E78
lbl_fn_8044D9BC_00000E60:
    lwz r3, 0x0(r22)
    cmpwi r3, 0x0
    beq lbl_fn_8044D9BC_00000E74
    li r4, 0x1
    bl fn_800D246C
lbl_fn_8044D9BC_00000E74:
    addi r22, r22, 0x4
lbl_fn_8044D9BC_00000E78:
    lwz r0, 0x40(r21)
    slwi r0, r0, 2
    add r3, r21, r0
    addi r0, r3, 0x44
    cmplw r22, r0
    bne lbl_fn_8044D9BC_00000E60
    addi r19, r19, 0x84
    addi r20, r20, 0x1
lbl_fn_8044D9BC_00000E98:
    lwz r0, 0x48(r23)
    cmplw r20, r0
    blt lbl_fn_8044D9BC_00000B14
lbl_fn_8044D9BC_00000EA4:
    lwz r0, lbl_8087F4FC
    cmpwi r0, 0x0
    bne lbl_fn_8044D9BC_0000106C
    lwz r19, lbl_8087F4A0
    bne lbl_fn_8044D9BC_0000106C
    lis r3, 0x1
    li r4, 0x1
    subi r3, r3, 0x2718
    la r5, lbl_8087E01C
    la r6, lbl_8087E018
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r20, r3
    beq lbl_fn_8044D9BC_00001068
    mr r4, r19
    bl fn_800D1D3C
    lis r3, lbl_8078F348@ha
    addis r6, r20, 0x1
    addi r3, r3, lbl_8078F348@l
    stw r3, 0x0(r20)
    addi r10, r20, 0x48
    subi r5, r6, 0x2728
    li r9, 0x0
    li r8, 0x1
    li r7, 0xa
    li r0, 0x60
    li r4, 0xc
lbl_fn_8044D9BC_00000F14:
    stw r9, 0x8(r10)
    addi r11, r10, 0x18
    addi r21, r10, 0x120c
    stw r9, 0xc(r10)
    cmplw r11, r21
    sth r8, 0x10(r10)
    sth r7, 0x12(r10)
    stw r9, 0x14(r10)
    bge lbl_fn_8044D9BC_00001038
    addi r3, r10, 0x18
    subi r12, r21, 0x60
    cmplw r3, r21
    li r19, 0x0
    li r3, 0x0
    bgt lbl_fn_8044D9BC_00000F54
    li r19, 0x1
lbl_fn_8044D9BC_00000F54:
    cmpwi r19, 0x0
    beq lbl_fn_8044D9BC_00000F60
    li r3, 0x1
lbl_fn_8044D9BC_00000F60:
    cmpwi r3, 0x0
    beq lbl_fn_8044D9BC_00001008
    addi r3, r12, 0x5f
    subf r3, r11, r3
    divwu r3, r3, r0
    mtctr r3
    cmplw r11, r12
    bge lbl_fn_8044D9BC_00001008
lbl_fn_8044D9BC_00000F80:
    stw r9, 0x0(r11)
    sth r8, 0x4(r11)
    sth r7, 0x6(r11)
    stw r9, 0x8(r11)
    stw r9, 0xc(r11)
    sth r8, 0x10(r11)
    sth r7, 0x12(r11)
    stw r9, 0x14(r11)
    stw r9, 0x18(r11)
    sth r8, 0x1c(r11)
    sth r7, 0x1e(r11)
    stw r9, 0x20(r11)
    stw r9, 0x24(r11)
    sth r8, 0x28(r11)
    sth r7, 0x2a(r11)
    stw r9, 0x2c(r11)
    stw r9, 0x30(r11)
    sth r8, 0x34(r11)
    sth r7, 0x36(r11)
    stw r9, 0x38(r11)
    stw r9, 0x3c(r11)
    sth r8, 0x40(r11)
    sth r7, 0x42(r11)
    stw r9, 0x44(r11)
    stw r9, 0x48(r11)
    sth r8, 0x4c(r11)
    sth r7, 0x4e(r11)
    stw r9, 0x50(r11)
    stw r9, 0x54(r11)
    sth r8, 0x58(r11)
    sth r7, 0x5a(r11)
    stw r9, 0x5c(r11)
    addi r11, r11, 0x60
    bdnz lbl_fn_8044D9BC_00000F80
lbl_fn_8044D9BC_00001008:
    addi r3, r21, 0xb
    subf r3, r11, r3
    divwu r3, r3, r4
    mtctr r3
    cmplw r11, r21
    bge lbl_fn_8044D9BC_00001038
lbl_fn_8044D9BC_00001020:
    stw r9, 0x0(r11)
    sth r8, 0x4(r11)
    sth r7, 0x6(r11)
    stw r9, 0x8(r11)
    addi r11, r11, 0xc
    bdnz lbl_fn_8044D9BC_00001020
lbl_fn_8044D9BC_00001038:
    stw r9, 0x0(r10)
    stw r9, 0x4(r10)
    stw r9, 0x8(r10)
    addi r10, r10, 0x120c
    cmplw r10, r5
    blt lbl_fn_8044D9BC_00000F14
    li r3, 0x0
    stw r3, -0x2728(r6)
    li r0, -0x1
    stw r0, -0x2724(r6)
    stw r3, -0x2720(r6)
    stw r3, -0x271c(r6)
lbl_fn_8044D9BC_00001068:
    stw r20, lbl_8087F4FC
lbl_fn_8044D9BC_0000106C:
    lmw r19, 0xc(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8044E0A8(void)
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
    beq lbl_fn_8044E0A8_00001110
    lwz r0, 0x4c(r3)
    lis r4, lbl_8078F3C8@ha
    addi r4, r4, lbl_8078F3C8@l
    li r31, 0x0
    cmpwi r0, 0x0
    stw r4, 0x0(r3)
    stw r31, 0x48(r3)
    beq lbl_fn_8044E0A8_000010D4
    mr r3, r0
    bl fn_80084C24
    stw r31, 0x4c(r29)
lbl_fn_8044E0A8_000010D4:
    lwz r3, 0x50(r29)
    cmpwi r3, 0x0
    beq lbl_fn_8044E0A8_000010F4
    lis r4, fn_8044E158@ha
    addi r4, r4, fn_8044E158@l
    bl fn_80695A50
    li r0, 0x0
    stw r0, 0x50(r29)
lbl_fn_8044E0A8_000010F4:
    mr r3, r29
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r30, 0x0
    ble lbl_fn_8044E0A8_00001110
    mr r3, r29
    bl dtor_80084684
lbl_fn_8044E0A8_00001110:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8044E158(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_8044E158_00001158
    cmpwi r4, 0x0
    ble lbl_fn_8044E158_00001158
    bl dtor_80084684
lbl_fn_8044E158_00001158:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8044E198(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x14(r3)
    stw r0, 0x24(r3)
    stw r0, 0x30(r3)
    stw r0, 0x3c(r3)
    stw r0, 0x40(r3)
    blr
}

asm void fn_8044E1BC(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r24, 0x10(r1)
    mr r26, r3
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    ble lbl_fn_8044E1BC_000011BC
    li r3, 0x0
    b lbl_fn_8044E1BC_000013DC
lbl_fn_8044E1BC_000011BC:
    lwz r27, lbl_8087F4F8
    li r5, 0x0
    lwz r0, 0x48(r27)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8044E1BC_00001240
lbl_fn_8044E1BC_000011D4:
    lwz r0, 0x50(r27)
    add r3, r0, r5
    lwz r0, 0x40(r3)
    addi r4, r3, 0x44
    slwi r0, r0, 2
    add r3, r3, r0
    addi r3, r3, 0x44
    b lbl_fn_8044E1BC_0000121C
lbl_fn_8044E1BC_000011F4:
    lwz r6, 0x0(r4)
    cmpwi r6, 0x0
    beq lbl_fn_8044E1BC_00001218
    lwz r0, 0x38(r6)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_8044E1BC_00001218
    li r0, 0x0
    b lbl_fn_8044E1BC_00001228
lbl_fn_8044E1BC_00001218:
    addi r4, r4, 0x4
lbl_fn_8044E1BC_0000121C:
    cmplw r4, r3
    bne lbl_fn_8044E1BC_000011F4
    li r0, 0x1
lbl_fn_8044E1BC_00001228:
    cmpwi r0, 0x0
    bne lbl_fn_8044E1BC_00001238
    li r0, 0x1
    b lbl_fn_8044E1BC_000013C0
lbl_fn_8044E1BC_00001238:
    addi r5, r5, 0x84
    bdnz lbl_fn_8044E1BC_000011D4
lbl_fn_8044E1BC_00001240:
    li r29, 0x0
    li r28, 0x0
    li r25, 0x1
    li r31, 0x0
    b lbl_fn_8044E1BC_000013B0
lbl_fn_8044E1BC_00001254:
    lwz r0, 0x50(r27)
    add r30, r0, r28
    addi r24, r30, 0x44
    b lbl_fn_8044E1BC_0000127C
lbl_fn_8044E1BC_00001264:
    lwz r3, 0x0(r24)
    cmpwi r3, 0x0
    beq lbl_fn_8044E1BC_00001278
    li r4, 0x0
    bl fn_800D246C
lbl_fn_8044E1BC_00001278:
    addi r24, r24, 0x4
lbl_fn_8044E1BC_0000127C:
    lwz r0, 0x40(r30)
    slwi r0, r0, 2
    add r3, r30, r0
    addi r0, r3, 0x44
    cmplw r24, r0
    bne lbl_fn_8044E1BC_00001264
    addi r4, r30, 0x44
    b lbl_fn_8044E1BC_000012B8
lbl_fn_8044E1BC_0000129C:
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8044E1BC_000012B4
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_8044E1BC_000012B4:
    addi r4, r4, 0x4
lbl_fn_8044E1BC_000012B8:
    lwz r0, 0x40(r30)
    slwi r0, r0, 2
    add r3, r30, r0
    addi r0, r3, 0x44
    cmplw r4, r0
    bne lbl_fn_8044E1BC_0000129C
    addi r4, r30, 0x44
    b lbl_fn_8044E1BC_000012EC
lbl_fn_8044E1BC_000012D8:
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8044E1BC_000012E8
    stb r31, 0x4d(r3)
lbl_fn_8044E1BC_000012E8:
    addi r4, r4, 0x4
lbl_fn_8044E1BC_000012EC:
    lwz r0, 0x40(r30)
    slwi r0, r0, 2
    add r3, r30, r0
    addi r0, r3, 0x44
    cmplw r4, r0
    bne lbl_fn_8044E1BC_000012D8
    addi r4, r30, 0x44
    b lbl_fn_8044E1BC_00001320
lbl_fn_8044E1BC_0000130C:
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8044E1BC_0000131C
    stb r25, 0x4c(r3)
lbl_fn_8044E1BC_0000131C:
    addi r4, r4, 0x4
lbl_fn_8044E1BC_00001320:
    lwz r0, 0x40(r30)
    slwi r0, r0, 2
    add r3, r30, r0
    addi r0, r3, 0x44
    cmplw r4, r0
    bne lbl_fn_8044E1BC_0000130C
    addi r4, r30, 0x8
    b lbl_fn_8044E1BC_00001354
lbl_fn_8044E1BC_00001340:
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8044E1BC_00001350
    stb r25, 0x4d(r3)
lbl_fn_8044E1BC_00001350:
    addi r4, r4, 0x4
lbl_fn_8044E1BC_00001354:
    lwz r0, 0x4(r30)
    slwi r0, r0, 2
    add r3, r30, r0
    addi r0, r3, 0x8
    cmplw r4, r0
    bne lbl_fn_8044E1BC_00001340
    addi r4, r30, 0x18
    b lbl_fn_8044E1BC_00001388
lbl_fn_8044E1BC_00001374:
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8044E1BC_00001384
    stb r25, 0x4d(r3)
lbl_fn_8044E1BC_00001384:
    addi r4, r4, 0x4
lbl_fn_8044E1BC_00001388:
    lwz r0, 0x14(r30)
    slwi r0, r0, 2
    add r3, r30, r0
    addi r0, r3, 0x18
    cmplw r4, r0
    bne lbl_fn_8044E1BC_00001374
    lwz r3, 0x3c(r30)
    addi r28, r28, 0x84
    addi r29, r29, 0x1
    stb r25, 0x4d(r3)
lbl_fn_8044E1BC_000013B0:
    lwz r0, 0x48(r27)
    cmplw r29, r0
    blt lbl_fn_8044E1BC_00001254
    li r0, 0x0
lbl_fn_8044E1BC_000013C0:
    cmpwi r0, 0x0
    beq lbl_fn_8044E1BC_000013D0
    li r3, 0x1
    b lbl_fn_8044E1BC_000013DC
lbl_fn_8044E1BC_000013D0:
    li r0, 0x1
    stw r0, 0x4(r26)
    li r3, 0x0
lbl_fn_8044E1BC_000013DC:
    lmw r24, 0x10(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8044E418(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    psq_l f1, 0x0(r4), 0, 0
    mr r31, r3
    lfs f2, 0x8(r4)
    mr r25, r5
    psq_st f1, 0x8(r3), 0, 0
    mr r26, r6
    mr r27, r7
    mr r28, r8
    stfs f2, 0x10(r3)
    mr r29, r9
    mr r30, r10
    bl fn_8044F434
    lwz r3, 0xec(r31)
    rlwimi r3, r29, 30, 1, 1
    li r0, 0x2
    stw r0, 0x4(r31)
    srwi. r0, r3, 31
    stw r25, 0x18(r31)
    stw r26, 0x1c(r31)
    stw r27, 0x20(r31)
    stw r28, 0x24(r31)
    stw r3, 0xec(r31)
    stw r30, 0x28(r31)
    bne lbl_fn_8044E418_000015D0
    lwz r0, 0x0(r31)
    li r6, 0x1
    stw r6, 0x4(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8044E418_000015D0
    lwz r10, lbl_8087F4F8
    lwz r5, 0x48(r10)
    cmpwi r5, 0x0
    bne lbl_fn_8044E418_00001490
    li r0, 0x0
    b lbl_fn_8044E418_000014F4
lbl_fn_8044E418_00001490:
    li r7, 0x0
    mtctr r5
    cmplwi r5, 0x0
    ble lbl_fn_8044E418_000014E4
lbl_fn_8044E418_000014A0:
    lwz r4, 0x4c(r10)
    srwi r9, r7, 3
    clrlwi r0, r7, 29
    lbzx r3, r4, r9
    slw r8, r6, r0
    and r0, r8, r3
    cmpw r8, r0
    beq lbl_fn_8044E418_000014DC
    clrlwi r0, r8, 24
    or r0, r3, r0
    stbx r0, r4, r9
    mulli r0, r7, 0x84
    lwz r3, 0x50(r10)
    add r0, r3, r0
    b lbl_fn_8044E418_000014F4
lbl_fn_8044E418_000014DC:
    addi r7, r7, 0x1
    bdnz lbl_fn_8044E418_000014A0
lbl_fn_8044E418_000014E4:
    subi r0, r5, 0x1
    lwz r3, 0x50(r10)
    mulli r0, r0, 0x84
    add r0, r3, r0
lbl_fn_8044E418_000014F4:
    cmpwi r0, 0x0
    stw r0, 0x0(r31)
    beq lbl_fn_8044E418_000015D0
    lwz r3, 0x20(r31)
    cmpwi cr1, r3, 0x0
    bne cr1, lbl_fn_8044E418_00001514
    li r3, 0x0
    b lbl_fn_8044E418_00001588
lbl_fn_8044E418_00001514:
    lwz r0, 0x4(r3)
    cmpwi r0, 0x12d
    bne lbl_fn_8044E418_00001528
    li r3, 0x1
    b lbl_fn_8044E418_00001588
lbl_fn_8044E418_00001528:
    bne cr1, lbl_fn_8044E418_00001534
    li r3, 0x0
    b lbl_fn_8044E418_00001588
lbl_fn_8044E418_00001534:
    lbz r0, 0xc2(r3)
    extsb. r0, r0
    beq lbl_fn_8044E418_00001548
    li r3, 0x1
    b lbl_fn_8044E418_00001588
lbl_fn_8044E418_00001548:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_8044E418_00001584
    bl fn_80373148
    cmpwi r3, 0x0
    beq lbl_fn_8044E418_00001584
    lwz r3, lbl_8087F430
    bl fn_80373148
    mr r6, r3
    lwz r3, 0x20(r31)
    lwz r4, 0x48(r6)
    lwz r5, 0x4c(r6)
    lwz r6, 0x50(r6)
    bl fn_80213E60
    b lbl_fn_8044E418_00001588
lbl_fn_8044E418_00001584:
    li r3, 0x0
lbl_fn_8044E418_00001588:
    cmpwi r3, 0x0
    beq lbl_fn_8044E418_000015D0
    lwz r3, 0x0(r31)
    lfs f0, lbl_80886B3C
    addi r4, r3, 0x24
    addi r5, r4, 0x4
    b lbl_fn_8044E418_000015B8
lbl_fn_8044E418_000015A4:
    lwz r3, 0x0(r5)
    cmpwi r3, 0x0
    beq lbl_fn_8044E418_000015B4
    stfs f0, 0x50(r3)
lbl_fn_8044E418_000015B4:
    addi r5, r5, 0x4
lbl_fn_8044E418_000015B8:
    lwz r0, 0x0(r4)
    slwi r0, r0, 2
    add r3, r4, r0
    addi r0, r3, 0x4
    cmplw r5, r0
    bne lbl_fn_8044E418_000015A4
lbl_fn_8044E418_000015D0:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8044E610(void)
{
    nofralloc
    lwz r0, 0x4(r3)
    li r4, 0x0
    cmpwi r0, 0x2
    bne lbl_fn_8044E610_00001614
    lwz r0, 0x20(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8044E610_00001614
    lwz r0, 0x24(r3)
    cmpwi r0, 0x0
    ble lbl_fn_8044E610_00001614
    li r4, 0x1
lbl_fn_8044E610_00001614:
    mr r3, r4
    blr
}

asm void fn_8044E644(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r30, 0x28(r1)
    lwz r0, 0xec(r3)
    srwi. r0, r0, 31
    beq lbl_fn_8044E644_0000184C
    lwz r0, 0x0(r3)
    li r5, 0x3
    li r4, 0x0
    stw r5, 0x4(r3)
    cmpwi r0, 0x0
    stw r4, 0xf0(r3)
    bne lbl_fn_8044E644_000016E0
    lwz r10, lbl_8087F4F8
    lwz r6, 0x48(r10)
    cmpwi r6, 0x0
    bne lbl_fn_8044E644_00001674
    li r0, 0x0
    b lbl_fn_8044E644_000016DC
lbl_fn_8044E644_00001674:
    li r7, 0x0
    li r5, 0x1
    mtctr r6
    cmplwi r6, 0x0
    ble lbl_fn_8044E644_000016CC
lbl_fn_8044E644_00001688:
    lwz r11, 0x4c(r10)
    srwi r9, r7, 3
    clrlwi r0, r7, 29
    lbzx r4, r11, r9
    slw r8, r5, r0
    and r0, r8, r4
    cmpw r8, r0
    beq lbl_fn_8044E644_000016C4
    clrlwi r0, r8, 24
    or r0, r4, r0
    stbx r0, r11, r9
    mulli r0, r7, 0x84
    lwz r4, 0x50(r10)
    add r0, r4, r0
    b lbl_fn_8044E644_000016DC
lbl_fn_8044E644_000016C4:
    addi r7, r7, 0x1
    bdnz lbl_fn_8044E644_00001688
lbl_fn_8044E644_000016CC:
    subi r0, r6, 0x1
    lwz r4, 0x50(r10)
    mulli r0, r0, 0x84
    add r0, r4, r0
lbl_fn_8044E644_000016DC:
    stw r0, 0x0(r3)
lbl_fn_8044E644_000016E0:
    lwz r4, 0x0(r3)
    lis r5, 0x4330
    li r0, 0x0
    lis r7, lbl_80754848@ha
    lwz r4, 0x0(r4)
    xoris r6, r0, 0x8000
    lfs f0, lbl_80886B3C
    li r0, 0x1
    stfs f0, 0x50(r4)
    xoris r4, r0, 0x8000
    li r0, 0x2
    lfs f4, lbl_80886B40
    lwz r8, 0x0(r3)
    xoris r0, r0, 0x8000
    stw r6, 0x14(r1)
    li r30, 0x0
    lwz r6, 0x0(r8)
    stw r5, 0x10(r1)
    lfd f3, lbl_80754848@l(r7)
    lfd f0, 0x10(r1)
    stfs f4, 0x54(r6)
    fsubs f0, f0, f3
    lfs f2, lbl_80886B48
    lwz r6, 0x0(r3)
    lfs f1, lbl_80886B44
    lwz r6, 0x8(r6)
    fmadds f0, f2, f0, f1
    stw r4, 0x1c(r1)
    stfs f0, 0x50(r6)
    stw r5, 0x18(r1)
    lfd f0, 0x18(r1)
    stfs f4, 0x54(r6)
    fsubs f0, f0, f3
    lwz r4, 0x0(r3)
    stw r0, 0x24(r1)
    fmadds f0, f2, f0, f1
    lwz r4, 0xc(r4)
    stw r5, 0x20(r1)
    stfs f0, 0x50(r4)
    lfd f0, 0x20(r1)
    stfs f4, 0x54(r4)
    fsubs f0, f0, f3
    lwz r3, 0x0(r3)
    fmadds f0, f2, f0, f1
    lwz r3, 0x10(r3)
    stfs f0, 0x50(r3)
    stfs f4, 0x54(r3)
lbl_fn_8044E644_0000179C:
    mr r3, r31
    bl fn_80450590
    addi r30, r30, 0x1
    cmpwi r30, 0x3
    blt lbl_fn_8044E644_0000179C
    mr r3, r31
    bl fn_8044F96C
    lwz r3, lbl_8087EFE8
    cmpwi r3, 0x0
    beq lbl_fn_8044E644_00001800
    lis r4, lbl_807548CC@ha
    stw r31, 0x34d8(r3)
    lfs f1, lbl_80886B40
    addi r3, r1, 0x8
    addi r4, r4, lbl_807548CC@l
    addi r5, r31, 0x8
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    lwz r3, lbl_8087EFE8
    li r0, 0x0
    stw r0, 0x34d8(r3)
lbl_fn_8044E644_00001800:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_8044E644_0000184C
    lis r4, 0x2
    lwz r5, 0x10d0(r3)
    subi r0, r4, 0x65d8
    cmpw r5, r0
    blt lbl_fn_8044E644_0000184C
    bl fn_80373148
    cmpwi r3, 0x0
    beq lbl_fn_8044E644_0000184C
    lwz r3, lbl_8087F430
    bl fn_80373148
    lwz r0, 0x48(r3)
    cmpwi r0, 0x2
    bne lbl_fn_8044E644_0000184C
    lwz r3, lbl_8087F430
    li r4, 0xba
    bl fn_803750E4
lbl_fn_8044E644_0000184C:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8044E88C(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r11, r1, 0x30
    stfd f31, 0x60(r1)
    psq_st f31, 0x68(r1), 0, 0
    stfd f30, 0x50(r1)
    psq_st f30, 0x58(r1), 0, 0
    stfd f29, 0x40(r1)
    psq_st f29, 0x48(r1), 0, 0
    stfd f28, 0x30(r1)
    psq_st f28, 0x38(r1), 0, 0
    bl _savegpr_27
    lwz r0, 0xec(r3)
    mr r31, r3
    srwi. r0, r0, 31
    beq lbl_fn_8044E88C_000019D4
    lwz r0, 0x0(r3)
    li r5, 0x4
    li r4, 0x0
    stw r5, 0x4(r3)
    cmpwi r0, 0x0
    stw r4, 0x18(r3)
    bne lbl_fn_8044E88C_00001948
    lwz r11, lbl_8087F4F8
    lwz r7, 0x48(r11)
    cmpwi r7, 0x0
    bne lbl_fn_8044E88C_000018DC
    li r0, 0x0
    b lbl_fn_8044E88C_00001944
lbl_fn_8044E88C_000018DC:
    li r8, 0x0
    li r6, 0x1
    mtctr r7
    cmplwi r7, 0x0
    ble lbl_fn_8044E88C_00001934
lbl_fn_8044E88C_000018F0:
    lwz r5, 0x4c(r11)
    srwi r10, r8, 3
    clrlwi r0, r8, 29
    lbzx r4, r5, r10
    slw r9, r6, r0
    and r0, r9, r4
    cmpw r9, r0
    beq lbl_fn_8044E88C_0000192C
    clrlwi r0, r9, 24
    or r0, r4, r0
    stbx r0, r5, r10
    mulli r0, r8, 0x84
    lwz r4, 0x50(r11)
    add r0, r4, r0
    b lbl_fn_8044E88C_00001944
lbl_fn_8044E88C_0000192C:
    addi r8, r8, 0x1
    bdnz lbl_fn_8044E88C_000018F0
lbl_fn_8044E88C_00001934:
    subi r0, r7, 0x1
    lwz r4, 0x50(r11)
    mulli r0, r0, 0x84
    add r0, r4, r0
lbl_fn_8044E88C_00001944:
    stw r0, 0x0(r3)
lbl_fn_8044E88C_00001948:
    lwz r3, 0x0(r3)
    lwz r29, 0x0(r3)
    mr r3, r29
    bl fn_801F6C2C
    lis r3, lbl_80754848@ha
    stfs f1, 0x50(r29)
    lwz r28, lbl_80886B34
    li r27, 0x0
    lfd f28, lbl_80754848@l(r3)
    li r30, 0x0
    lfs f29, lbl_80886B48
    lis r29, 0x4330
    lfs f30, lbl_80886B44
    lfs f31, lbl_80886B40
lbl_fn_8044E88C_00001980:
    xoris r0, r27, 0x8000
    stw r0, 0xc(r1)
    lwz r0, 0x0(r31)
    mr r4, r28
    stw r29, 0x8(r1)
    li r5, 0x0
    add r3, r0, r30
    lfs f1, lbl_80886B4C
    lfd f0, 0x8(r1)
    lwz r3, 0x18(r3)
    fsubs f0, f0, f28
    fmadds f0, f29, f0, f30
    stfs f0, 0x50(r3)
    stfs f31, 0x54(r3)
    bl fn_801F791C
    addi r27, r27, 0x1
    addi r30, r30, 0x4
    cmpwi r27, 0x3
    blt lbl_fn_8044E88C_00001980
    mr r3, r31
    bl fn_8044F96C
lbl_fn_8044E88C_000019D4:
    addi r11, r1, 0x30
    psq_l f31, 0x68(r1), 0, 0
    lfd f31, 0x60(r1)
    psq_l f30, 0x58(r1), 0, 0
    lfd f30, 0x50(r1)
    psq_l f29, 0x48(r1), 0, 0
    lfd f29, 0x40(r1)
    psq_l f28, 0x38(r1), 0, 0
    lfd f28, 0x30(r1)
    bl _restgpr_27
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}
