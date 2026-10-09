#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_24(void);
extern void _savegpr_24(void);
extern void dtor_80084684(void);
extern void fn_8004B20C(void);
extern void fn_8006BA30(void);
extern void fn_80084320(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_8008BBD8(void);
extern void fn_800C622C(void);
extern void fn_800C62B4(void);
extern void fn_800C63D8(void);
extern void fn_800C7844(void);
extern void fn_800C78CC(void);
extern void fn_800C7954(void);
extern void fn_800D1D3C(void);
extern void fn_800D1E9C(void);
extern void fn_800D246C(void);
extern void fn_80119ECC(void);
extern void fn_8012AFE8(void);
extern void fn_801F3FF8(void);
extern void fn_803B33F8(void);
extern void fn_803B3530(void);
extern void fn_803B8144(void);
extern void fn_803B8454(void);
extern void fn_803B8C6C(void);
extern void fn_803B8E60(void);
extern void fn_803B8F50(void);
extern void fn_803BE550(void);
extern void fn_803BE8C0(void);
extern void fn_803BEA08(void);
extern void fn_803BEA7C(void);
extern void fn_8046ECDC(void);
extern void fn_80503B08(void);
extern void fn_80503B10(void);
extern void fn_80503D3C(void);
extern void fn_80503F68(void);
extern void fn_80504194(void);
extern void fn_805043C0(void);
extern void fn_805045EC(void);
extern void fn_80504818(void);
extern void fn_80682428(void);
extern void fn_806959D8(void);
extern void fn_80695B00(void);

/* External data declarations */
extern u8 lbl_8075A980[];
extern u8 lbl_8075A988[];
extern u8 lbl_8075AAA0[];
extern u8 lbl_8075AEDC[];
extern u8 lbl_80792AA8[];
extern u8 lbl_80792AE0[];
extern u8 lbl_80792D00[];
extern u8 lbl_80792D08[];
extern u8 lbl_80792D10[];
extern u8 lbl_80792D18[];
extern u8 lbl_80792D38[];
extern u8 lbl_80792D70[];
extern u8 lbl_807C8508[];
extern u8 lbl_807C8FA8[];
extern u8 lbl_807C8FB0[];
extern u8 lbl_807C8FB8[];
extern u8 lbl_807C8FC0[];

/* Small data declarations */
extern u32 lbl_8087DD60;
extern u32 lbl_8087DD64;
extern u32 lbl_8087F460;
extern u32 lbl_8087F518;
extern u32 lbl_8087F848;
extern u32 lbl_8087F84C;
extern u32 lbl_8087F850;
extern u32 lbl_8087F854;
extern u32 lbl_8087F858;
extern u32 lbl_8087F85C;
extern u32 lbl_8087F860;
extern u32 lbl_8087F864;
extern u32 lbl_8087F865;
extern u32 lbl_8087F866;
extern u32 lbl_8087F867;
extern u32 lbl_80887750;
extern u32 lbl_80887754;
extern u32 lbl_80887758;
extern u32 lbl_8088775C;

/* Function declarations */
void fn_80502100(void);
void fn_80502154(void);
void fn_80502368(void);
void fn_80502460(void);
void fn_8050270C(void);
void fn_80502730(void);
void fn_8050284C(void);
void fn_80502874(void);
void fn_805028DC(void);
void fn_80502978(void);
void fn_805029E0(void);
void fn_80503100(void);
void fn_8050310C(void);
void fn_8050314C(void);
void fn_8050326C(void);
void fn_80503298(void);
void fn_80503350(void);
void fn_80503390(void);
void fn_805034B0(void);
void fn_805034DC(void);
void fn_80503594(void);
void fn_805035D4(void);
void fn_805036F4(void);
void fn_80503720(void);
void fn_805037D8(void);
void fn_80503818(void);
void fn_80503938(void);
void fn_80503964(void);
void fn_80503A1C(void);
void fn_80503A58(void);
void fn_80503AB0(void);
void fn_80503ABC(void);

asm void fn_80502100(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_8075A980@ha
    li r4, 0x1
    stw r0, 0x14(r1)
    addi r5, r5, lbl_8075A980@l
    mr r6, r5
    li r7, 0x0
    stw r31, 0xc(r1)
    mr r31, r3
    li r3, 0x378
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_80502100_00000040
    mr r4, r31
    bl fn_80502154
lbl_fn_80502100_00000040:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80502154(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    bl fn_800D1D3C
    addi r7, r31, 0x368
    addi r6, r31, 0x78
    lis r5, lbl_80792AA8@ha
    li r4, 0x0
    li r3, -0x1
    li r0, 0x3
    addi r5, r5, lbl_80792AA8@l
    cmplw r6, r7
    stw r5, 0x0(r31)
    stw r4, 0x48(r31)
    stw r3, 0x4c(r31)
    stw r3, 0x50(r31)
    stw r4, 0x54(r31)
    stw r4, 0x58(r31)
    stw r4, 0x5c(r31)
    stw r4, 0x60(r31)
    stw r4, 0x64(r31)
    stw r0, 0x68(r31)
    stw r0, 0x6c(r31)
    stw r4, 0x70(r31)
    stw r4, 0x74(r31)
    bge lbl_fn_80502154_000001DC
    addi r0, r31, 0x78
    subi r5, r7, 0x80
    cmplw r0, r7
    li r3, 0x0
    li r0, 0x0
    bgt lbl_fn_80502154_000000E8
    li r3, 0x1
lbl_fn_80502154_000000E8:
    cmpwi r3, 0x0
    beq lbl_fn_80502154_000000F4
    li r0, 0x1
lbl_fn_80502154_000000F4:
    cmpwi r0, 0x0
    beq lbl_fn_80502154_000001A4
    addi r0, r5, 0x7f
    li r4, 0x3
    subf r0, r6, r0
    li r3, 0x0
    srwi r0, r0, 7
    mtctr r0
    cmplw r6, r5
    bge lbl_fn_80502154_000001A4
lbl_fn_80502154_0000011C:
    stw r4, 0x0(r6)
    stw r4, 0x4(r6)
    stw r3, 0x8(r6)
    stw r3, 0xc(r6)
    stw r4, 0x10(r6)
    stw r4, 0x14(r6)
    stw r3, 0x18(r6)
    stw r3, 0x1c(r6)
    stw r4, 0x20(r6)
    stw r4, 0x24(r6)
    stw r3, 0x28(r6)
    stw r3, 0x2c(r6)
    stw r4, 0x30(r6)
    stw r4, 0x34(r6)
    stw r3, 0x38(r6)
    stw r3, 0x3c(r6)
    stw r4, 0x40(r6)
    stw r4, 0x44(r6)
    stw r3, 0x48(r6)
    stw r3, 0x4c(r6)
    stw r4, 0x50(r6)
    stw r4, 0x54(r6)
    stw r3, 0x58(r6)
    stw r3, 0x5c(r6)
    stw r4, 0x60(r6)
    stw r4, 0x64(r6)
    stw r3, 0x68(r6)
    stw r3, 0x6c(r6)
    stw r4, 0x70(r6)
    stw r4, 0x74(r6)
    stw r3, 0x78(r6)
    stw r3, 0x7c(r6)
    addi r6, r6, 0x80
    bdnz lbl_fn_80502154_0000011C
lbl_fn_80502154_000001A4:
    addi r0, r7, 0xf
    li r4, 0x3
    subf r0, r6, r0
    li r3, 0x0
    srwi r0, r0, 4
    mtctr r0
    cmplw r6, r7
    bge lbl_fn_80502154_000001DC
lbl_fn_80502154_000001C4:
    stw r4, 0x0(r6)
    stw r4, 0x4(r6)
    stw r3, 0x8(r6)
    stw r3, 0xc(r6)
    addi r6, r6, 0x10
    bdnz lbl_fn_80502154_000001C4
lbl_fn_80502154_000001DC:
    lis r5, lbl_8075A980@ha
    li r0, 0x0
    addi r5, r5, lbl_8075A980@l
    lis r30, 0x1
    stw r0, 0x0(r7)
    mr r6, r5
    addi r3, r30, 0x3560
    li r4, 0x1
    stw r0, 0x36c(r31)
    li r7, 0x0
    stw r0, 0x370(r31)
    bl fn_80084320
    cmpwi r3, 0x0
    mr r29, r3
    beq lbl_fn_80502154_00000224
    addi r5, r30, 0x3560
    li r4, 0x0
    bl memset
lbl_fn_80502154_00000224:
    lwz r3, 0x54(r31)
    stw r29, 0x54(r31)
    bl dtor_80084684
    mr r3, r31
    bl fn_803B33F8
    stw r3, 0x58(r31)
    mr r3, r31
    bl fn_803B8C6C
    stw r3, 0x5c(r31)
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80502368(void)
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
    beq lbl_fn_80502368_00000340
    lwz r31, 0x48(r3)
    lis r4, lbl_80792AA8@ha
    addi r4, r4, lbl_80792AA8@l
    stw r4, 0x0(r3)
    cmpwi r31, 0x0
    beq lbl_fn_80502368_00000304
    beq lbl_fn_80502368_000002F4
    addis r3, r31, 0x1
    subic. r3, r3, 0x61a0
    beq lbl_fn_80502368_000002D0
    lis r4, fn_80119ECC@ha
    addi r3, r3, 0x11c4
    addi r4, r4, fn_80119ECC@l
    li r5, 0x2d4
    li r6, 0x1c
    bl fn_806959D8
lbl_fn_80502368_000002D0:
    addic. r3, r31, 0x539c
    beq lbl_fn_80502368_000002EC
    lis r4, fn_8012AFE8@ha
    li r5, 0x240
    addi r4, r4, fn_8012AFE8@l
    li r6, 0x7
    bl fn_806959D8
lbl_fn_80502368_000002EC:
    mr r3, r31
    bl dtor_80084684
lbl_fn_80502368_000002F4:
    li r3, 0x0
    li r0, -0x1
    stw r3, 0x48(r29)
    stw r0, 0x4c(r29)
lbl_fn_80502368_00000304:
    addic. r0, r29, 0x60
    beq lbl_fn_80502368_00000314
    lwz r3, 0x60(r29)
    bl fn_80084C24
lbl_fn_80502368_00000314:
    addic. r0, r29, 0x54
    beq lbl_fn_80502368_00000324
    lwz r3, 0x54(r29)
    bl dtor_80084684
lbl_fn_80502368_00000324:
    mr r3, r29
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r30, 0x0
    ble lbl_fn_80502368_00000340
    mr r3, r29
    bl dtor_80084684
lbl_fn_80502368_00000340:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80502460(void)
{
    nofralloc
    stwu r1, -0x220(r1)
    mflr r0
    stw r0, 0x224(r1)
    stw r31, 0x21c(r1)
    mr r31, r3
    stw r30, 0x218(r1)
    lwz r0, 0x36c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80502460_000003A0
    cmpwi r0, 0x1
    beq lbl_fn_80502460_000004E4
    cmpwi r0, 0x2
    beq lbl_fn_80502460_0000057C
    cmpwi r0, 0x3
    beq lbl_fn_80502460_000005EC
    b lbl_fn_80502460_000005F4
lbl_fn_80502460_000003A0:
    lwz r0, 0x64(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80502460_000005F4
    lwz r0, 0x368(r3)
    slwi r0, r0, 4
    add r30, r3, r0
    lwz r0, 0x68(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80502460_00000430
    addi r3, r1, 0x110
    addi r4, r1, 0xc
    bl fn_803B8454
    lwz r3, 0x74(r30)
    lis r5, lbl_8075A980@ha
    addi r5, r5, lbl_8075A980@l
    li r4, 0x1
    addi r0, r3, 0x1f
    li r7, 0x0
    mr r6, r5
    clrrwi r3, r0, 5
    bl fn_800846FC
    mr r0, r3
    lwz r3, 0x60(r31)
    stw r0, 0x60(r31)
    bl fn_80084C24
    lwz r5, 0x74(r30)
    addi r4, r1, 0x110
    lwz r3, 0x58(r31)
    addi r0, r5, 0x1f
    lwz r5, 0x60(r31)
    lwz r7, 0xc(r1)
    clrrwi r6, r0, 5
    bl fn_803B3530
    li r0, 0x1
    stw r0, 0x36c(r31)
    b lbl_fn_80502460_000005F4
lbl_fn_80502460_00000430:
    cmpwi r0, 0x1
    bne lbl_fn_80502460_000004B0
    addi r3, r1, 0x10
    addi r4, r1, 0x8
    bl fn_803B8454
    lwz r3, 0x74(r30)
    lis r5, lbl_8075A980@ha
    addi r5, r5, lbl_8075A980@l
    li r4, 0x1
    addi r0, r3, 0x1f
    li r7, 0x0
    mr r6, r5
    clrrwi r3, r0, 5
    bl fn_800846FC
    mr r0, r3
    lwz r3, 0x60(r31)
    stw r0, 0x60(r31)
    bl fn_80084C24
    lwz r3, 0x60(r31)
    lwz r4, 0x70(r30)
    lwz r5, 0x74(r30)
    bl memcpy
    lwz r3, 0x5c(r31)
    addi r4, r1, 0x10
    lwz r5, 0x60(r31)
    li r8, 0x1
    lwz r6, 0x74(r30)
    lwz r7, 0x8(r1)
    bl fn_803B8F50
    li r0, 0x2
    stw r0, 0x36c(r31)
    b lbl_fn_80502460_000005F4
lbl_fn_80502460_000004B0:
    cmpwi r0, 0x2
    bne lbl_fn_80502460_000005F4
    lwz r3, 0x5c(r3)
    li r6, 0x1
    lwz r4, 0x70(r30)
    lwz r5, 0x74(r30)
    bl fn_803B8E60
    lwz r3, 0x5c(r31)
    li r4, 0x0
    li r0, 0x2
    stb r4, 0x160(r3)
    stw r0, 0x36c(r31)
    b lbl_fn_80502460_000005F4
lbl_fn_80502460_000004E4:
    lwz r3, 0x58(r3)
    lbz r0, 0x154(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80502460_0000056C
    bl fn_803B8144
    cmpwi r3, 0x0
    bne lbl_fn_80502460_00000528
    lwz r0, 0x368(r31)
    lwz r4, 0x60(r31)
    slwi r0, r0, 4
    add r5, r31, r0
    lwz r3, 0x70(r5)
    lwz r5, 0x74(r5)
    bl memcpy
    li r0, 0x0
    stw r0, 0x36c(r31)
    b lbl_fn_80502460_0000053C
lbl_fn_80502460_00000528:
    lwz r3, 0x58(r31)
    bl fn_803B8144
    li r0, 0x3
    stw r3, 0x370(r31)
    stw r0, 0x36c(r31)
lbl_fn_80502460_0000053C:
    lwz r5, 0x368(r31)
    lis r4, 0xaaab
    subi r0, r4, 0x5555
    lwz r3, 0x64(r31)
    addi r5, r5, 0x1
    mulhwu r4, r0, r5
    subi r0, r3, 0x1
    stw r0, 0x64(r31)
    srwi r4, r4, 5
    mulli r0, r4, 0x30
    subf r0, r0, r5
    stw r0, 0x368(r31)
lbl_fn_80502460_0000056C:
    lwz r3, lbl_8087F518
    li r4, 0x0
    bl fn_8046ECDC
    b lbl_fn_80502460_000005F4
lbl_fn_80502460_0000057C:
    lwz r3, 0x5c(r3)
    lbz r0, 0x154(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80502460_000005F4
    bl fn_803B8144
    cmpwi r3, 0x0
    bne lbl_fn_80502460_000005A4
    li r0, 0x0
    stw r0, 0x36c(r31)
    b lbl_fn_80502460_000005B8
lbl_fn_80502460_000005A4:
    lwz r3, 0x58(r31)
    bl fn_803B8144
    li r0, 0x3
    stw r3, 0x370(r31)
    stw r0, 0x36c(r31)
lbl_fn_80502460_000005B8:
    lwz r5, 0x368(r31)
    lis r4, 0xaaab
    subi r0, r4, 0x5555
    lwz r3, 0x64(r31)
    addi r5, r5, 0x1
    mulhwu r4, r0, r5
    subi r0, r3, 0x1
    stw r0, 0x64(r31)
    srwi r4, r4, 5
    mulli r0, r4, 0x30
    subf r0, r0, r5
    stw r0, 0x368(r31)
    b lbl_fn_80502460_000005F4
lbl_fn_80502460_000005EC:
    li r0, 0x0
    stw r0, 0x36c(r3)
lbl_fn_80502460_000005F4:
    lwz r0, 0x224(r1)
    lwz r31, 0x21c(r1)
    lwz r30, 0x218(r1)
    mtlr r0
    addi r1, r1, 0x220
    blr
}

asm void fn_8050270C(void)
{
    nofralloc
    lwz r4, lbl_8087F460
    li r0, 0x0
    stw r4, 0x48(r3)
    lwz r4, lbl_8087DD60
    stw r4, 0x4c(r3)
    lwz r4, lbl_8087DD64
    stw r4, 0x50(r3)
    stw r0, lbl_8087F460
    blr
}

asm void fn_80502730(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r3
    stw r30, 0x48(r1)
    lwz r4, 0x48(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80502730_00000734
    lwz r0, 0x54(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80502730_00000734
    lwz r0, 0x4c(r3)
    cmpwi r0, 0x0
    bge lbl_fn_80502730_00000670
    b lbl_fn_80502730_00000734
lbl_fn_80502730_00000670:
    mr r3, r4
    bl fn_803BE550
    lwz r6, 0x54(r31)
    lis r3, 0x1
    lwz r4, 0x48(r31)
    addi r5, r3, 0x34a8
    addi r3, r6, 0xb8
    bl memcpy
    lwz r30, 0x54(r31)
    addi r3, r1, 0x18
    bl fn_8004B20C
    mr r3, r30
    addi r4, r30, 0xb8
    addi r5, r1, 0x18
    bl fn_803BE8C0
    lis r4, lbl_807C8508@ha
    lwz r3, 0x54(r31)
    addi r4, r4, lbl_807C8508@l
    bl fn_803BEA08
    lwz r3, 0x54(r31)
    lwz r0, 0x50(r31)
    stw r0, 0x4(r3)
    lwz r3, 0x54(r31)
    bl fn_803BEA7C
    lwz r5, 0x368(r31)
    li r7, 0x2
    lis r3, 0xaaab
    lwz r4, 0x64(r31)
    subi r0, r3, 0x5555
    lwz r6, 0x54(r31)
    add r3, r5, r4
    lwz r4, 0x4c(r31)
    mulhwu r0, r0, r3
    stw r7, 0x8(r1)
    stw r7, 0xc(r1)
    stw r6, 0x10(r1)
    srwi r0, r0, 5
    stw r4, 0x14(r1)
    mulli r0, r0, 0x30
    subf r0, r0, r3
    slwi r0, r0, 4
    add r3, r31, r0
    stw r7, 0x68(r3)
    stw r7, 0x6c(r3)
    stw r6, 0x70(r3)
    stw r4, 0x74(r3)
    lwz r3, 0x64(r31)
    addi r0, r3, 0x1
    stw r0, 0x64(r31)
lbl_fn_80502730_00000734:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8050284C(void)
{
    nofralloc
    lwz r0, 0x36c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8050284C_0000076C
    lwz r0, 0x64(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8050284C_0000076C
    li r3, 0x0
    blr
lbl_fn_8050284C_0000076C:
    li r3, 0x1
    blr
}

asm void fn_80502874(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    lis r7, 0xaaab
    subi r0, r7, 0x5555
    lwz r9, 0x368(r3)
    lwz r8, 0x64(r3)
    stw r4, 0x8(r1)
    add r7, r9, r8
    mulhwu r0, r0, r7
    stw r4, 0xc(r1)
    stw r5, 0x10(r1)
    stw r6, 0x14(r1)
    srwi r0, r0, 5
    mulli r0, r0, 0x30
    subf r0, r0, r7
    slwi r0, r0, 4
    add r7, r3, r0
    stw r4, 0x68(r7)
    stw r4, 0x6c(r7)
    stw r5, 0x70(r7)
    stw r6, 0x74(r7)
    lwz r4, 0x64(r3)
    addi r0, r4, 0x1
    stw r0, 0x64(r3)
    li r3, 0x1
    addi r1, r1, 0x20
    blr
}

asm void fn_805028DC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_8075A988@ha
    addi r31, r31, lbl_8075A988@l
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bl fn_8006BA30
    cmpwi r3, 0x3
    bne lbl_fn_805028DC_00000828
    mulli r4, r29, 0x16
    addi r0, r31, 0x58
    slwi r3, r30, 1
    add r0, r0, r4
    lhzx r3, r3, r0
    b lbl_fn_805028DC_0000085C
lbl_fn_805028DC_00000828:
    cmpwi r3, 0x2
    bne lbl_fn_805028DC_00000848
    mulli r4, r29, 0x16
    addi r0, r31, 0xb0
    slwi r3, r30, 1
    add r0, r0, r4
    lhzx r3, r3, r0
    b lbl_fn_805028DC_0000085C
lbl_fn_805028DC_00000848:
    mulli r4, r29, 0x16
    addi r0, r31, 0x0
    slwi r3, r30, 1
    add r0, r0, r4
    lhzx r3, r3, r0
lbl_fn_805028DC_0000085C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80502978(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, lbl_8087F860
    cmpwi r0, 0x0
    bne lbl_fn_80502978_000008C8
    lis r5, lbl_8075AEDC@ha
    li r3, 0x25c0
    addi r5, r5, lbl_8075AEDC@l
    li r4, 0x1
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_80502978_000008C4
    mr r4, r31
    bl fn_805029E0
lbl_fn_80502978_000008C4:
    stw r3, lbl_8087F860
lbl_fn_80502978_000008C8:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    lwz r3, lbl_8087F860
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805029E0(void)
{
    nofralloc
    stwu r1, -0x360(r1)
    mflr r0
    stw r0, 0x364(r1)
    addi r11, r1, 0x310
    stfd f31, 0x350(r1)
    psq_st f31, 0x358(r1), 0, 0
    stfd f30, 0x340(r1)
    psq_st f30, 0x348(r1), 0, 0
    stfd f29, 0x330(r1)
    psq_st f29, 0x338(r1), 0, 0
    stfd f28, 0x320(r1)
    psq_st f28, 0x328(r1), 0, 0
    stfd f27, 0x310(r1)
    psq_st f27, 0x318(r1), 0, 0
    bl _savegpr_24
    lis r0, 0x4330
    lis r31, lbl_80792AE0@ha
    stw r0, 0x2d8(r1)
    mr r30, r3
    addi r31, r31, lbl_80792AE0@l
    stw r0, 0x2e0(r1)
    bl fn_800D1D3C
    lis r4, lbl_80792D38@ha
    addi r3, r30, 0xf8
    addi r4, r4, lbl_80792D38@l
    stw r4, 0x0(r30)
    bl fn_80503A1C
    lis r3, lbl_8075AAA0@ha
    li r4, 0x0
    li r0, 0x1
    stw r4, 0x25ac(r30)
    lfd f29, lbl_8075AAA0@l(r3)
    li r26, 0x0
    stw r4, 0x25b0(r30)
    lfs f30, lbl_80887754
    stw r4, 0x25b4(r30)
    lfs f31, lbl_80887750
    stw r0, 0x25b8(r30)
    lfs f27, lbl_80887758
    lfs f28, lbl_8088775C
lbl_fn_805029E0_00000980:
    addi r0, r26, 0x1
    xoris r25, r26, 0x8000
    xoris r24, r0, 0x8000
    li r27, 0x0
lbl_fn_805029E0_00000990:
    addi r3, r1, 0x2b8
    bl fn_80503AB0
    mr r3, r26
    mr r4, r27
    bl fn_805028DC
    stw r25, 0x2e4(r1)
    xoris r0, r27, 0x8000
    lfd f0, 0x2e0(r1)
    stw r0, 0x2dc(r1)
    fsubs f0, f0, f29
    lfd f1, 0x2d8(r1)
    sth r3, 0x2bc(r1)
    addi r3, r1, 0x2c0
    fmuls f0, f30, f0
    fsubs f2, f1, f29
    stw r25, 0x2dc(r1)
    fdivs f1, f0, f27
    lfd f0, 0x2d8(r1)
    fmadds f2, f30, f2, f31
    fsubs f0, f0, f29
    fadds f1, f2, f1
    fmadds f2, f30, f0, f28
    bl fn_80503100
    stw r25, 0x2dc(r1)
    addi r0, r27, 0x1
    xoris r0, r0, 0x8000
    addi r3, r1, 0x2c8
    lfd f0, 0x2d8(r1)
    stw r0, 0x2e4(r1)
    fsubs f0, f0, f29
    lfd f2, 0x2e0(r1)
    fmuls f1, f30, f0
    stw r24, 0x2e4(r1)
    fsubs f2, f2, f29
    lfd f0, 0x2e0(r1)
    fdivs f1, f1, f27
    fmadds f2, f30, f2, f31
    fsubs f0, f0, f29
    fadds f1, f2, f1
    fmadds f2, f30, f0, f28
    bl fn_80503100
    mr r4, r26
    mr r5, r27
    addi r3, r30, 0xf8
    addi r6, r1, 0x2b8
    bl fn_80503ABC
    addi r27, r27, 0x1
    cmpwi r27, 0xb
    blt lbl_fn_805029E0_00000990
    addi r26, r26, 0x1
    cmpwi r26, 0x4
    blt lbl_fn_805029E0_00000980
    addi r3, r30, 0xf8
    li r4, 0x10
    bl fn_80503B08
    addi r9, r31, 0x1c8
    lbz r10, lbl_8087F85C
    lbz r24, lbl_8087F858
    addi r0, r1, 0x38
    lbz r25, lbl_8087F854
    mr r5, r30
    lbz r26, lbl_8087F850
    addi r3, r1, 0x180
    lbz r27, lbl_8087F84C
    addi r4, r1, 0x170
    lbz r29, lbl_8087F848
    addi r6, r1, 0x4c
    lwz r28, 0x1c8(r31)
    addi r7, r1, 0x48
    lwz r12, 0x4(r9)
    addi r8, r1, 0x44
    lwz r11, 0x8(r9)
    addi r9, r1, 0x40
    stb r10, 0x38(r1)
    addi r10, r1, 0x3c
    stb r24, 0x3c(r1)
    stb r25, 0x40(r1)
    stb r26, 0x44(r1)
    stb r27, 0x48(r1)
    stb r29, 0x4c(r1)
    stw r28, 0x170(r1)
    stw r12, 0x174(r1)
    stw r11, 0x178(r1)
    stw r0, 0x8(r1)
    bl fn_805037D8
    lwz r8, 0x180(r1)
    addi r3, r1, 0x2a4
    lwz r7, 0x184(r1)
    addi r4, r1, 0x190
    lwz r6, 0x188(r1)
    li r5, 0x0
    lwz r0, 0x18c(r1)
    stw r8, 0x190(r1)
    stw r7, 0x194(r1)
    stw r6, 0x198(r1)
    stw r0, 0x19c(r1)
    bl fn_80503818
    addi r3, r1, 0x290
    addi r4, r30, 0xf8
    addi r5, r1, 0x2a4
    bl fn_80503B10
    addi r3, r1, 0x290
    li r4, -0x1
    bl fn_800C7844
    addi r3, r1, 0x2a4
    li r4, -0x1
    bl fn_800C7844
    addi r7, r31, 0x1d4
    lbz r8, lbl_8087F850
    lbz r12, lbl_8087F84C
    mr r5, r30
    lbz r11, lbl_8087F848
    addi r3, r1, 0x150
    lwz r10, 0x1d4(r31)
    addi r4, r1, 0x140
    lwz r9, 0x4(r7)
    addi r6, r1, 0x34
    lwz r0, 0x8(r7)
    addi r7, r1, 0x30
    stb r8, 0x2c(r1)
    addi r8, r1, 0x2c
    stb r12, 0x30(r1)
    stb r11, 0x34(r1)
    stw r10, 0x140(r1)
    stw r9, 0x144(r1)
    stw r0, 0x148(r1)
    bl fn_80503594
    lwz r8, 0x150(r1)
    addi r3, r1, 0x27c
    lwz r7, 0x154(r1)
    addi r4, r1, 0x160
    lwz r6, 0x158(r1)
    li r5, 0x0
    lwz r0, 0x15c(r1)
    stw r8, 0x160(r1)
    stw r7, 0x164(r1)
    stw r6, 0x168(r1)
    stw r0, 0x16c(r1)
    bl fn_805035D4
    addi r3, r1, 0x268
    addi r4, r30, 0xf8
    addi r5, r1, 0x27c
    bl fn_80503D3C
    addi r3, r1, 0x268
    li r4, -0x1
    bl fn_800C78CC
    addi r3, r1, 0x27c
    li r4, -0x1
    bl fn_800C78CC
    addi r7, r31, 0x1e0
    lbz r8, lbl_8087F850
    lbz r12, lbl_8087F84C
    mr r5, r30
    lbz r11, lbl_8087F848
    addi r3, r1, 0x120
    lwz r10, 0x1e0(r31)
    addi r4, r1, 0x110
    lwz r9, 0x4(r7)
    addi r6, r1, 0x28
    lwz r0, 0x8(r7)
    addi r7, r1, 0x24
    stb r8, 0x20(r1)
    addi r8, r1, 0x20
    stb r12, 0x24(r1)
    stb r11, 0x28(r1)
    stw r10, 0x110(r1)
    stw r9, 0x114(r1)
    stw r0, 0x118(r1)
    bl fn_80503594
    lwz r8, 0x120(r1)
    addi r3, r1, 0x254
    lwz r7, 0x124(r1)
    addi r4, r1, 0x130
    lwz r6, 0x128(r1)
    li r5, 0x0
    lwz r0, 0x12c(r1)
    stw r8, 0x130(r1)
    stw r7, 0x134(r1)
    stw r6, 0x138(r1)
    stw r0, 0x13c(r1)
    bl fn_805035D4
    addi r3, r1, 0x240
    addi r4, r30, 0xf8
    addi r5, r1, 0x254
    bl fn_80503F68
    addi r3, r1, 0x240
    li r4, -0x1
    bl fn_800C78CC
    addi r3, r1, 0x254
    li r4, -0x1
    bl fn_800C78CC
    addi r3, r31, 0x1ec
    lwz r4, 0x1ec(r31)
    lwz r6, 0x4(r3)
    mr r5, r30
    lwz r0, 0x8(r3)
    addi r3, r1, 0xf0
    stw r4, 0xe0(r1)
    addi r4, r1, 0xe0
    stw r6, 0xe4(r1)
    stw r0, 0xe8(r1)
    bl fn_80503350
    lwz r8, 0xf0(r1)
    addi r3, r1, 0x22c
    lwz r7, 0xf4(r1)
    addi r4, r1, 0x100
    lwz r6, 0xf8(r1)
    li r5, 0x0
    lwz r0, 0xfc(r1)
    stw r8, 0x100(r1)
    stw r7, 0x104(r1)
    stw r6, 0x108(r1)
    stw r0, 0x10c(r1)
    bl fn_80503390
    addi r3, r1, 0x218
    addi r4, r30, 0xf8
    addi r5, r1, 0x22c
    bl fn_80504194
    addi r3, r1, 0x218
    li r4, -0x1
    bl fn_800C622C
    addi r3, r1, 0x22c
    li r4, -0x1
    bl fn_800C622C
    addi r3, r31, 0x1f8
    lwz r4, 0x1f8(r31)
    lwz r6, 0x4(r3)
    mr r5, r30
    lwz r0, 0x8(r3)
    addi r3, r1, 0xc0
    stw r4, 0xb0(r1)
    addi r4, r1, 0xb0
    stw r6, 0xb4(r1)
    stw r0, 0xb8(r1)
    bl fn_80503350
    lwz r8, 0xc0(r1)
    addi r3, r1, 0x204
    lwz r7, 0xc4(r1)
    addi r4, r1, 0xd0
    lwz r6, 0xc8(r1)
    li r5, 0x0
    lwz r0, 0xcc(r1)
    stw r8, 0xd0(r1)
    stw r7, 0xd4(r1)
    stw r6, 0xd8(r1)
    stw r0, 0xdc(r1)
    bl fn_80503390
    addi r3, r1, 0x1f0
    addi r4, r30, 0xf8
    addi r5, r1, 0x204
    bl fn_805043C0
    addi r3, r1, 0x1f0
    li r4, -0x1
    bl fn_800C622C
    addi r3, r1, 0x204
    li r4, -0x1
    bl fn_800C622C
    addi r3, r31, 0x204
    lwz r4, 0x204(r31)
    lwz r6, 0x4(r3)
    mr r5, r30
    lwz r0, 0x8(r3)
    addi r3, r1, 0x90
    stw r4, 0x80(r1)
    addi r4, r1, 0x80
    stw r6, 0x84(r1)
    stw r0, 0x88(r1)
    bl fn_80503350
    lwz r8, 0x90(r1)
    addi r3, r1, 0x1dc
    lwz r7, 0x94(r1)
    addi r4, r1, 0xa0
    lwz r6, 0x98(r1)
    li r5, 0x0
    lwz r0, 0x9c(r1)
    stw r8, 0xa0(r1)
    stw r7, 0xa4(r1)
    stw r6, 0xa8(r1)
    stw r0, 0xac(r1)
    bl fn_80503390
    addi r3, r1, 0x1c8
    addi r4, r30, 0xf8
    addi r5, r1, 0x1dc
    bl fn_805045EC
    addi r3, r1, 0x1c8
    li r4, -0x1
    bl fn_800C622C
    addi r3, r1, 0x1dc
    li r4, -0x1
    bl fn_800C622C
    addi r8, r31, 0x210
    lbz r9, lbl_8087F854
    lbz r28, lbl_8087F850
    mr r5, r30
    lbz r29, lbl_8087F84C
    addi r3, r1, 0x60
    lbz r12, lbl_8087F848
    addi r4, r1, 0x50
    lwz r11, 0x210(r31)
    addi r6, r1, 0x1c
    lwz r10, 0x4(r8)
    addi r7, r1, 0x18
    lwz r0, 0x8(r8)
    addi r8, r1, 0x14
    stb r9, 0x10(r1)
    addi r9, r1, 0x10
    stb r28, 0x14(r1)
    stb r29, 0x18(r1)
    stb r12, 0x1c(r1)
    stw r11, 0x50(r1)
    stw r10, 0x54(r1)
    stw r0, 0x58(r1)
    bl fn_8050310C
    lwz r8, 0x60(r1)
    addi r3, r1, 0x1b4
    lwz r7, 0x64(r1)
    addi r4, r1, 0x70
    lwz r6, 0x68(r1)
    li r5, 0x0
    lwz r0, 0x6c(r1)
    stw r8, 0x70(r1)
    stw r7, 0x74(r1)
    stw r6, 0x78(r1)
    stw r0, 0x7c(r1)
    bl fn_8050314C
    addi r3, r1, 0x1a0
    addi r4, r30, 0xf8
    addi r5, r1, 0x1b4
    bl fn_80504818
    addi r3, r1, 0x1a0
    li r4, -0x1
    bl fn_800C7954
    addi r3, r1, 0x1b4
    li r4, -0x1
    bl fn_800C7954
    lis r4, lbl_8075AEDC@ha
    mr r3, r30
    addi r31, r4, lbl_8075AEDC@l
    li r5, 0x0
    addi r4, r31, 0x1
    bl fn_801F3FF8
    stw r3, 0x48(r30)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r30
    addi r4, r31, 0x24
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x4c(r30)
    li r4, 0x1
    bl fn_800D246C
    li r26, 0x0
    li r24, 0x0
lbl_fn_805029E0_00000F14:
    mr r3, r30
    add r25, r30, r24
    addi r4, r31, 0x47
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x50(r25)
    li r4, 0x1
    bl fn_800D246C
    addi r26, r26, 0x1
    addi r24, r24, 0x4
    cmpwi r26, 0x26
    blt lbl_fn_805029E0_00000F14
    lis r3, lbl_8075AEDC@ha
    li r26, 0x0
    li r24, 0x0
    addi r31, r3, lbl_8075AEDC@l
lbl_fn_805029E0_00000F54:
    cmpwi r26, 0x0
    beq lbl_fn_805029E0_00000F64
    cmpwi r26, 0x3
    bne lbl_fn_805029E0_00000F84
lbl_fn_805029E0_00000F64:
    add r25, r30, r24
    mr r3, r30
    addi r4, r31, 0x6a
    li r5, 0x0
    addi r25, r25, 0xe8
    bl fn_801F3FF8
    stw r3, 0x0(r25)
    b lbl_fn_805029E0_00000FA0
lbl_fn_805029E0_00000F84:
    add r25, r30, r24
    mr r3, r30
    addi r4, r31, 0x8d
    li r5, 0x0
    addi r25, r25, 0xe8
    bl fn_801F3FF8
    stw r3, 0x0(r25)
lbl_fn_805029E0_00000FA0:
    lwz r3, 0x0(r25)
    li r4, 0x1
    bl fn_800D246C
    addi r26, r26, 0x1
    addi r24, r24, 0x4
    cmpwi r26, 0x4
    blt lbl_fn_805029E0_00000F54
    psq_l f31, 0x358(r1), 0, 0
    mr r3, r30
    lfd f31, 0x350(r1)
    psq_l f30, 0x348(r1), 0, 0
    lfd f30, 0x340(r1)
    psq_l f29, 0x338(r1), 0, 0
    lfd f29, 0x330(r1)
    psq_l f28, 0x328(r1), 0, 0
    lfd f28, 0x320(r1)
    psq_l f27, 0x318(r1), 0, 0
    lfd f27, 0x310(r1)
    addi r11, r1, 0x310
    bl _restgpr_24
    lwz r0, 0x364(r1)
    mtlr r0
    addi r1, r1, 0x360
    blr
}

asm void fn_80503100(void)
{
    nofralloc
    stfs f1, 0x0(r3)
    stfs f2, 0x4(r3)
    blr
}

asm void fn_8050310C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    lwz r7, 0x0(r4)
    lwz r6, 0x4(r4)
    lwz r0, 0x8(r4)
    stw r7, 0x8(r1)
    stw r6, 0xc(r1)
    stw r0, 0x10(r1)
    stw r7, 0x14(r1)
    stw r6, 0x18(r1)
    stw r0, 0x1c(r1)
    stw r7, 0x0(r3)
    stw r6, 0x4(r3)
    stw r0, 0x8(r3)
    stw r5, 0xc(r3)
    addi r1, r1, 0x20
    blr
}

asm void fn_8050314C(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    li r0, 0x0
    stw r31, 0x3c(r1)
    mr r31, r3
    lwz r7, 0x0(r4)
    lwz r6, 0x4(r4)
    lwz r5, 0x8(r4)
    lwz r4, 0xc(r4)
    stw r7, 0x28(r1)
    stw r0, 0x0(r3)
    lbz r0, lbl_8087F864
    stw r6, 0x2c(r1)
    extsb. r0, r0
    stw r5, 0x30(r1)
    stw r4, 0x34(r1)
    bne lbl_fn_8050314C_000010BC
    lis r6, lbl_807C8FA8@ha
    lis r4, fn_8050326C@ha
    lis r3, fn_80503298@ha
    li r0, 0x1
    addi r3, r3, fn_80503298@l
    addi r5, r6, lbl_807C8FA8@l
    addi r4, r4, fn_8050326C@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C8FA8@l(r6)
    stb r0, lbl_8087F864
lbl_fn_8050314C_000010BC:
    lwz r6, 0x28(r1)
    addi r3, r1, 0x8
    lwz r5, 0x2c(r1)
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r6, 0x8(r1)
    stw r5, 0xc(r1)
    stw r4, 0x10(r1)
    stw r0, 0x14(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_8050314C_00001130
    lwz r5, 0x8(r1)
    addic. r6, r31, 0x4
    lwz r4, 0xc(r1)
    lwz r3, 0x10(r1)
    lwz r0, 0x14(r1)
    stw r5, 0x18(r1)
    stw r4, 0x1c(r1)
    stw r3, 0x20(r1)
    stw r0, 0x24(r1)
    beq lbl_fn_8050314C_00001128
    stw r5, 0x0(r6)
    stw r4, 0x4(r6)
    stw r3, 0x8(r6)
    stw r0, 0xc(r6)
lbl_fn_8050314C_00001128:
    li r0, 0x1
    b lbl_fn_8050314C_00001134
lbl_fn_8050314C_00001130:
    li r0, 0x0
lbl_fn_8050314C_00001134:
    cmpwi r0, 0x0
    beq lbl_fn_8050314C_0000114C
    lis r3, lbl_807C8FA8@ha
    addi r3, r3, lbl_807C8FA8@l
    stw r3, 0x0(r31)
    b lbl_fn_8050314C_00001154
lbl_fn_8050314C_0000114C:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_8050314C_00001154:
    mr r3, r31
    lwz r31, 0x3c(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8050326C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    mr r12, r3
    stw r0, 0x14(r1)
    lwz r3, 0xc(r3)
    bl fn_80695B00
    nop
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80503298(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r5, 0x3
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bne lbl_fn_80503298_000011CC
    lis r3, lbl_80792D00@ha
    addi r3, r3, lbl_80792D00@l
    stw r3, 0x0(r4)
    b lbl_fn_80503298_00001238
lbl_fn_80503298_000011CC:
    cmpwi r5, 0x0
    bne lbl_fn_80503298_00001200
    cmpwi r4, 0x0
    beq lbl_fn_80503298_00001238
    lwz r5, 0x0(r3)
    lwz r0, 0x4(r3)
    stw r0, 0x4(r4)
    stw r5, 0x0(r4)
    lwz r0, 0x8(r3)
    stw r0, 0x8(r4)
    lwz r0, 0xc(r3)
    stw r0, 0xc(r4)
    b lbl_fn_80503298_00001238
lbl_fn_80503298_00001200:
    cmpwi r5, 0x1
    beq lbl_fn_80503298_00001238
    lwz r5, 0x0(r4)
    lis r3, lbl_80792D00@ha
    lwz r4, lbl_80792D00@l(r3)
    lwz r3, 0x0(r5)
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_80503298_00001230
    stw r30, 0x0(r31)
    b lbl_fn_80503298_00001238
lbl_fn_80503298_00001230:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_80503298_00001238:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80503350(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    lwz r7, 0x0(r4)
    lwz r6, 0x4(r4)
    lwz r0, 0x8(r4)
    stw r7, 0x8(r1)
    stw r6, 0xc(r1)
    stw r0, 0x10(r1)
    stw r7, 0x14(r1)
    stw r6, 0x18(r1)
    stw r0, 0x1c(r1)
    stw r7, 0x0(r3)
    stw r6, 0x4(r3)
    stw r0, 0x8(r3)
    stw r5, 0xc(r3)
    addi r1, r1, 0x20
    blr
}

asm void fn_80503390(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    li r0, 0x0
    stw r31, 0x3c(r1)
    mr r31, r3
    lwz r7, 0x0(r4)
    lwz r6, 0x4(r4)
    lwz r5, 0x8(r4)
    lwz r4, 0xc(r4)
    stw r7, 0x28(r1)
    stw r0, 0x0(r3)
    lbz r0, lbl_8087F865
    stw r6, 0x2c(r1)
    extsb. r0, r0
    stw r5, 0x30(r1)
    stw r4, 0x34(r1)
    bne lbl_fn_80503390_00001300
    lis r6, lbl_807C8FB0@ha
    lis r4, fn_805034B0@ha
    lis r3, fn_805034DC@ha
    li r0, 0x1
    addi r3, r3, fn_805034DC@l
    addi r5, r6, lbl_807C8FB0@l
    addi r4, r4, fn_805034B0@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C8FB0@l(r6)
    stb r0, lbl_8087F865
lbl_fn_80503390_00001300:
    lwz r6, 0x28(r1)
    addi r3, r1, 0x8
    lwz r5, 0x2c(r1)
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r6, 0x8(r1)
    stw r5, 0xc(r1)
    stw r4, 0x10(r1)
    stw r0, 0x14(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_80503390_00001374
    lwz r5, 0x8(r1)
    addic. r6, r31, 0x4
    lwz r4, 0xc(r1)
    lwz r3, 0x10(r1)
    lwz r0, 0x14(r1)
    stw r5, 0x18(r1)
    stw r4, 0x1c(r1)
    stw r3, 0x20(r1)
    stw r0, 0x24(r1)
    beq lbl_fn_80503390_0000136C
    stw r5, 0x0(r6)
    stw r4, 0x4(r6)
    stw r3, 0x8(r6)
    stw r0, 0xc(r6)
lbl_fn_80503390_0000136C:
    li r0, 0x1
    b lbl_fn_80503390_00001378
lbl_fn_80503390_00001374:
    li r0, 0x0
lbl_fn_80503390_00001378:
    cmpwi r0, 0x0
    beq lbl_fn_80503390_00001390
    lis r3, lbl_807C8FB0@ha
    addi r3, r3, lbl_807C8FB0@l
    stw r3, 0x0(r31)
    b lbl_fn_80503390_00001398
lbl_fn_80503390_00001390:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_80503390_00001398:
    mr r3, r31
    lwz r31, 0x3c(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_805034B0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    mr r12, r3
    stw r0, 0x14(r1)
    lwz r3, 0xc(r3)
    bl fn_80695B00
    nop
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805034DC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r5, 0x3
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bne lbl_fn_805034DC_00001410
    lis r3, lbl_80792D08@ha
    addi r3, r3, lbl_80792D08@l
    stw r3, 0x0(r4)
    b lbl_fn_805034DC_0000147C
lbl_fn_805034DC_00001410:
    cmpwi r5, 0x0
    bne lbl_fn_805034DC_00001444
    cmpwi r4, 0x0
    beq lbl_fn_805034DC_0000147C
    lwz r5, 0x0(r3)
    lwz r0, 0x4(r3)
    stw r0, 0x4(r4)
    stw r5, 0x0(r4)
    lwz r0, 0x8(r3)
    stw r0, 0x8(r4)
    lwz r0, 0xc(r3)
    stw r0, 0xc(r4)
    b lbl_fn_805034DC_0000147C
lbl_fn_805034DC_00001444:
    cmpwi r5, 0x1
    beq lbl_fn_805034DC_0000147C
    lwz r5, 0x0(r4)
    lis r3, lbl_80792D08@ha
    lwz r4, lbl_80792D08@l(r3)
    lwz r3, 0x0(r5)
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_805034DC_00001474
    stw r30, 0x0(r31)
    b lbl_fn_805034DC_0000147C
lbl_fn_805034DC_00001474:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_805034DC_0000147C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80503594(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    lwz r7, 0x0(r4)
    lwz r6, 0x4(r4)
    lwz r0, 0x8(r4)
    stw r7, 0x8(r1)
    stw r6, 0xc(r1)
    stw r0, 0x10(r1)
    stw r7, 0x14(r1)
    stw r6, 0x18(r1)
    stw r0, 0x1c(r1)
    stw r7, 0x0(r3)
    stw r6, 0x4(r3)
    stw r0, 0x8(r3)
    stw r5, 0xc(r3)
    addi r1, r1, 0x20
    blr
}

asm void fn_805035D4(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    li r0, 0x0
    stw r31, 0x3c(r1)
    mr r31, r3
    lwz r7, 0x0(r4)
    lwz r6, 0x4(r4)
    lwz r5, 0x8(r4)
    lwz r4, 0xc(r4)
    stw r7, 0x28(r1)
    stw r0, 0x0(r3)
    lbz r0, lbl_8087F866
    stw r6, 0x2c(r1)
    extsb. r0, r0
    stw r5, 0x30(r1)
    stw r4, 0x34(r1)
    bne lbl_fn_805035D4_00001544
    lis r6, lbl_807C8FB8@ha
    lis r4, fn_805036F4@ha
    lis r3, fn_80503720@ha
    li r0, 0x1
    addi r3, r3, fn_80503720@l
    addi r5, r6, lbl_807C8FB8@l
    addi r4, r4, fn_805036F4@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C8FB8@l(r6)
    stb r0, lbl_8087F866
lbl_fn_805035D4_00001544:
    lwz r6, 0x28(r1)
    addi r3, r1, 0x8
    lwz r5, 0x2c(r1)
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r6, 0x8(r1)
    stw r5, 0xc(r1)
    stw r4, 0x10(r1)
    stw r0, 0x14(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_805035D4_000015B8
    lwz r5, 0x8(r1)
    addic. r6, r31, 0x4
    lwz r4, 0xc(r1)
    lwz r3, 0x10(r1)
    lwz r0, 0x14(r1)
    stw r5, 0x18(r1)
    stw r4, 0x1c(r1)
    stw r3, 0x20(r1)
    stw r0, 0x24(r1)
    beq lbl_fn_805035D4_000015B0
    stw r5, 0x0(r6)
    stw r4, 0x4(r6)
    stw r3, 0x8(r6)
    stw r0, 0xc(r6)
lbl_fn_805035D4_000015B0:
    li r0, 0x1
    b lbl_fn_805035D4_000015BC
lbl_fn_805035D4_000015B8:
    li r0, 0x0
lbl_fn_805035D4_000015BC:
    cmpwi r0, 0x0
    beq lbl_fn_805035D4_000015D4
    lis r3, lbl_807C8FB8@ha
    addi r3, r3, lbl_807C8FB8@l
    stw r3, 0x0(r31)
    b lbl_fn_805035D4_000015DC
lbl_fn_805035D4_000015D4:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_805035D4_000015DC:
    mr r3, r31
    lwz r31, 0x3c(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_805036F4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    mr r12, r3
    stw r0, 0x14(r1)
    lwz r3, 0xc(r3)
    bl fn_80695B00
    nop
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80503720(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r5, 0x3
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bne lbl_fn_80503720_00001654
    lis r3, lbl_80792D10@ha
    addi r3, r3, lbl_80792D10@l
    stw r3, 0x0(r4)
    b lbl_fn_80503720_000016C0
lbl_fn_80503720_00001654:
    cmpwi r5, 0x0
    bne lbl_fn_80503720_00001688
    cmpwi r4, 0x0
    beq lbl_fn_80503720_000016C0
    lwz r5, 0x0(r3)
    lwz r0, 0x4(r3)
    stw r0, 0x4(r4)
    stw r5, 0x0(r4)
    lwz r0, 0x8(r3)
    stw r0, 0x8(r4)
    lwz r0, 0xc(r3)
    stw r0, 0xc(r4)
    b lbl_fn_80503720_000016C0
lbl_fn_80503720_00001688:
    cmpwi r5, 0x1
    beq lbl_fn_80503720_000016C0
    lwz r5, 0x0(r4)
    lis r3, lbl_80792D10@ha
    lwz r4, lbl_80792D10@l(r3)
    lwz r3, 0x0(r5)
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_80503720_000016B8
    stw r30, 0x0(r31)
    b lbl_fn_80503720_000016C0
lbl_fn_80503720_000016B8:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_80503720_000016C0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805037D8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    lwz r7, 0x0(r4)
    lwz r6, 0x4(r4)
    lwz r0, 0x8(r4)
    stw r7, 0x8(r1)
    stw r6, 0xc(r1)
    stw r0, 0x10(r1)
    stw r7, 0x14(r1)
    stw r6, 0x18(r1)
    stw r0, 0x1c(r1)
    stw r7, 0x0(r3)
    stw r6, 0x4(r3)
    stw r0, 0x8(r3)
    stw r5, 0xc(r3)
    addi r1, r1, 0x20
    blr
}

asm void fn_80503818(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    li r0, 0x0
    stw r31, 0x3c(r1)
    mr r31, r3
    lwz r7, 0x0(r4)
    lwz r6, 0x4(r4)
    lwz r5, 0x8(r4)
    lwz r4, 0xc(r4)
    stw r7, 0x28(r1)
    stw r0, 0x0(r3)
    lbz r0, lbl_8087F867
    stw r6, 0x2c(r1)
    extsb. r0, r0
    stw r5, 0x30(r1)
    stw r4, 0x34(r1)
    bne lbl_fn_80503818_00001788
    lis r6, lbl_807C8FC0@ha
    lis r4, fn_80503938@ha
    lis r3, fn_80503964@ha
    li r0, 0x1
    addi r3, r3, fn_80503964@l
    addi r5, r6, lbl_807C8FC0@l
    addi r4, r4, fn_80503938@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C8FC0@l(r6)
    stb r0, lbl_8087F867
lbl_fn_80503818_00001788:
    lwz r6, 0x28(r1)
    addi r3, r1, 0x8
    lwz r5, 0x2c(r1)
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r6, 0x8(r1)
    stw r5, 0xc(r1)
    stw r4, 0x10(r1)
    stw r0, 0x14(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_80503818_000017FC
    lwz r5, 0x8(r1)
    addic. r6, r31, 0x4
    lwz r4, 0xc(r1)
    lwz r3, 0x10(r1)
    lwz r0, 0x14(r1)
    stw r5, 0x18(r1)
    stw r4, 0x1c(r1)
    stw r3, 0x20(r1)
    stw r0, 0x24(r1)
    beq lbl_fn_80503818_000017F4
    stw r5, 0x0(r6)
    stw r4, 0x4(r6)
    stw r3, 0x8(r6)
    stw r0, 0xc(r6)
lbl_fn_80503818_000017F4:
    li r0, 0x1
    b lbl_fn_80503818_00001800
lbl_fn_80503818_000017FC:
    li r0, 0x0
lbl_fn_80503818_00001800:
    cmpwi r0, 0x0
    beq lbl_fn_80503818_00001818
    lis r3, lbl_807C8FC0@ha
    addi r3, r3, lbl_807C8FC0@l
    stw r3, 0x0(r31)
    b lbl_fn_80503818_00001820
lbl_fn_80503818_00001818:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_80503818_00001820:
    mr r3, r31
    lwz r31, 0x3c(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80503938(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    mr r12, r3
    stw r0, 0x14(r1)
    lwz r3, 0xc(r3)
    bl fn_80695B00
    nop
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80503964(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r5, 0x3
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bne lbl_fn_80503964_00001898
    lis r3, lbl_80792D18@ha
    addi r3, r3, lbl_80792D18@l
    stw r3, 0x0(r4)
    b lbl_fn_80503964_00001904
lbl_fn_80503964_00001898:
    cmpwi r5, 0x0
    bne lbl_fn_80503964_000018CC
    cmpwi r4, 0x0
    beq lbl_fn_80503964_00001904
    lwz r5, 0x0(r3)
    lwz r0, 0x4(r3)
    stw r0, 0x4(r4)
    stw r5, 0x0(r4)
    lwz r0, 0x8(r3)
    stw r0, 0x8(r4)
    lwz r0, 0xc(r3)
    stw r0, 0xc(r4)
    b lbl_fn_80503964_00001904
lbl_fn_80503964_000018CC:
    cmpwi r5, 0x1
    beq lbl_fn_80503964_00001904
    lwz r5, 0x0(r4)
    lis r3, lbl_80792D18@ha
    lwz r4, lbl_80792D18@l(r3)
    lwz r3, 0x0(r5)
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_80503964_000018FC
    stw r30, 0x0(r31)
    b lbl_fn_80503964_00001904
lbl_fn_80503964_000018FC:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_80503964_00001904:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80503A1C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_800C62B4
    lis r4, lbl_80792D70@ha
    mr r3, r31
    addi r4, r4, lbl_80792D70@l
    stw r4, 0x0(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80503A58(void)
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
    beq lbl_fn_80503A58_00001994
    li r4, 0x0
    bl fn_800C63D8
    cmpwi r31, 0x0
    ble lbl_fn_80503A58_00001994
    mr r3, r30
    bl dtor_80084684
lbl_fn_80503A58_00001994:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80503AB0(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    blr
}

asm void fn_80503ABC(void)
{
    nofralloc
    mulli r8, r4, 0x380
    lwz r7, 0x0(r6)
    lhz r4, 0x4(r6)
    li r0, 0x1
    psq_l f1, 0x8(r6), 0, 0
    add r8, r3, r8
    mulli r5, r5, 0x1c
    lwz r3, 0x18(r6)
    add r5, r8, r5
    stw r7, 0x804(r5)
    addi r8, r5, 0x80c
    addi r7, r5, 0x814
    sth r4, 0x808(r5)
    psq_st f1, 0x0(r8), 0, 0
    psq_l f1, 0x10(r6), 0, 0
    psq_st f1, 0x0(r7), 0, 0
    stw r3, 0x81c(r5)
    stw r0, 0x804(r5)
    blr
}
