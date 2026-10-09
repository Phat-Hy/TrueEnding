#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_21(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_21(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_8000D430(void);
extern void fn_80041C0C(void);
extern void fn_8005B9CC(void);
extern void fn_8005BBF8(void);
extern void fn_8005BCE8(void);
extern void fn_80084320(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_8009EE30(void);
extern void fn_800C16B4(void);
extern void fn_800C1990(void);
extern void fn_800C31F4(void);
extern void fn_800CB3A0(void);
extern void fn_800D5808(void);
extern void fn_800DC288(void);
extern void fn_800EF73C(void);
extern void fn_80232B7C(void);
extern void fn_8023780C(void);
extern void fn_80237874(void);
extern void fn_8023A8B4(void);
extern void fn_803EC568(void);
extern void fn_803EC69C(void);
extern void fn_803EC91C(void);
extern void fn_803EDCF4(void);
extern void fn_8041CD24(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80491528(void);
extern void fn_8049994C(void);
extern void fn_80499B9C(void);
extern void fn_80499C48(void);
extern void fn_8049D68C(void);
extern void fn_805F9940(void);
extern void fn_80680CF8(void);
extern void fn_80682428(void);
extern void fn_80684600(void);
extern void fn_80695720(void);
extern void fn_806959D8(void);
extern void fn_80695A50(void);
extern char* strcpy(char* dest, const char* src);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80753188[];
extern u8 lbl_807531A0[];
extern u8 lbl_807531F0[];
extern u8 lbl_807774B8[];
extern u8 lbl_807774D8[];
extern u8 lbl_8078DE50[];
extern u8 lbl_8078DE58[];
extern u8 lbl_8078DEF0[];
extern u8 lbl_807C88F0[];

/* Small data declarations */
extern u32 lbl_8087D710;
extern u32 lbl_8087DF90;
extern u32 lbl_8087DF98;
extern u32 lbl_8087DF9C;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F4A0;
extern u32 lbl_8087F4C0;
extern u32 lbl_8087F558;
extern u32 lbl_80886558;
extern u32 lbl_80886560;
extern u32 lbl_80886564;
extern u32 lbl_80886568;
extern u32 lbl_80886570;
extern u32 lbl_80886574;

/* Function declarations */
void fn_8041CF94(void);
void fn_8041D180(void);
void fn_8041D198(void);
void fn_8041D23C(void);
void fn_8041D2C4(void);
void fn_8041D320(void);
void fn_8041D4B4(void);
void fn_8041DA40(void);
void fn_8041DA58(void);
void fn_8041DAB8(void);
void fn_8041DD8C(void);
void fn_8041DDE4(void);
void fn_8041DEB0(void);
void fn_8041DF38(void);
void fn_8041E23C(void);
void fn_8041E258(void);
void fn_8041E2C8(void);
void fn_8041E480(void);
void fn_8041E7E4(void);
void fn_8041E86C(void);
void fn_8041E870(void);
void fn_8041E89C(void);

asm void fn_8041CF94(void)
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
    stw r29, 0x24(r1)
    beq lbl_fn_8041CF94_000001CC
    lis r4, lbl_8078DE58@ha
    addi r4, r4, lbl_8078DE58@l
    stw r4, 0x0(r3)
    lwz r3, lbl_8087EFB4
    bl fn_800C16B4
    li r4, 0x0
    stw r4, 0x74(r3)
    lwz r0, 0x70(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8041CF94_00000054
    li r4, 0x1
lbl_fn_8041CF94_00000054:
    stw r4, 0x70(r3)
    lwz r0, lbl_8087F558
    cmpwi r0, 0x0
    beq lbl_fn_8041CF94_0000014C
    lbz r0, lbl_8087F4C0
    li r3, 0x0
    stw r3, 0x8(r1)
    extsb. r0, r0
    bne lbl_fn_8041CF94_000000A0
    lis r6, lbl_807C88F0@ha
    lis r4, fn_8041D180@ha
    lis r3, fn_8041D198@ha
    li r0, 0x1
    addi r3, r3, fn_8041D198@l
    addi r5, r6, lbl_807C88F0@l
    addi r4, r4, fn_8041D180@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C88F0@l(r6)
    stb r0, lbl_8087F4C0
lbl_fn_8041CF94_000000A0:
    lis r3, lbl_807C88F0@ha
    lwz r12, lbl_807C88F0@l(r3)
    cmpwi r12, 0x0
    beq lbl_fn_8041CF94_000000C4
    addi r3, r1, 0xc
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8041CF94_000000C4:
    lis r0, fn_8041CD24@ha
    addic. r0, r0, -13020
    beq lbl_fn_8041CF94_000000DC
    stw r0, 0xc(r1)
    li r0, 0x1
    b lbl_fn_8041CF94_000000E0
lbl_fn_8041CF94_000000DC:
    li r0, 0x0
lbl_fn_8041CF94_000000E0:
    cmpwi r0, 0x0
    beq lbl_fn_8041CF94_000000F8
    lis r3, lbl_807C88F0@ha
    addi r3, r3, lbl_807C88F0@l
    stw r3, 0x8(r1)
    b lbl_fn_8041CF94_00000100
lbl_fn_8041CF94_000000F8:
    li r0, 0x0
    stw r0, 0x8(r1)
lbl_fn_8041CF94_00000100:
    lwz r3, lbl_8087F558
    addi r4, r1, 0x8
    li r5, 0x0
    bl fn_80491528
    addic. r3, r1, 0x8
    beq lbl_fn_8041CF94_0000014C
    lwz r4, 0x8(r1)
    cmpwi r4, 0x0
    beq lbl_fn_8041CF94_0000014C
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_8041CF94_00000144
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8041CF94_00000144:
    li r0, 0x0
    stw r0, 0x8(r1)
lbl_fn_8041CF94_0000014C:
    addic. r29, r30, 0x2dc
    beq lbl_fn_8041CF94_00000180
    addic. r0, r29, 0x3c
    beq lbl_fn_8041CF94_00000180
    lwz r3, 0x40(r29)
    cmpwi r3, 0x0
    beq lbl_fn_8041CF94_00000174
    lis r4, fn_800D5808@ha
    addi r4, r4, fn_800D5808@l
    bl fn_80695A50
lbl_fn_8041CF94_00000174:
    li r0, 0x0
    stw r0, 0x40(r29)
    stw r0, 0x3c(r29)
lbl_fn_8041CF94_00000180:
    lis r4, fn_80041C0C@ha
    addi r3, r30, 0x13c
    addi r4, r4, fn_80041C0C@l
    li r5, 0x20
    li r6, 0x6
    bl fn_806959D8
    lis r4, fn_800EF73C@ha
    addi r3, r30, 0xf4
    addi r4, r4, fn_800EF73C@l
    li r5, 0xc
    li r6, 0x6
    bl fn_806959D8
    mr r3, r30
    li r4, 0x0
    bl fn_803EC69C
    cmpwi r31, 0x0
    ble lbl_fn_8041CF94_000001CC
    mr r3, r30
    bl dtor_80084684
lbl_fn_8041CF94_000001CC:
    mr r3, r30
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8041D180(void)
{
    nofralloc
    mr r6, r3
    mr r3, r4
    lwz r12, 0x0(r6)
    mr r4, r5
    mtctr r12
    bctr
}

asm void fn_8041D198(void)
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
    bne lbl_fn_8041D198_00000238
    lis r3, lbl_8078DE50@ha
    addi r3, r3, lbl_8078DE50@l
    stw r3, 0x0(r4)
    b lbl_fn_8041D198_00000290
lbl_fn_8041D198_00000238:
    cmpwi r5, 0x0
    bne lbl_fn_8041D198_0000024C
    lwz r0, 0x0(r3)
    stw r0, 0x0(r4)
    b lbl_fn_8041D198_00000290
lbl_fn_8041D198_0000024C:
    cmpwi r5, 0x1
    bne lbl_fn_8041D198_00000260
    li r0, 0x0
    stw r0, 0x0(r4)
    b lbl_fn_8041D198_00000290
lbl_fn_8041D198_00000260:
    lwz r5, 0x0(r4)
    lis r3, lbl_8078DE50@ha
    lwz r4, lbl_8078DE50@l(r3)
    lwz r3, 0x0(r5)
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_8041D198_00000288
    stw r30, 0x0(r31)
    b lbl_fn_8041D198_00000290
lbl_fn_8041D198_00000288:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_8041D198_00000290:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8041D23C(void)
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
    beq lbl_fn_8041D23C_00000314
    beq lbl_fn_8041D23C_00000304
    lwz r4, 0x0(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8041D23C_00000304
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_8041D23C_000002FC
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8041D23C_000002FC:
    li r0, 0x0
    stw r0, 0x0(r30)
lbl_fn_8041D23C_00000304:
    cmpwi r31, 0x0
    ble lbl_fn_8041D23C_00000314
    mr r3, r30
    bl dtor_80084684
lbl_fn_8041D23C_00000314:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8041D2C4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    addi r3, r3, 0x2dc
    bl fn_800C1990
    cmpwi r3, 0x0
    bne lbl_fn_8041D2C4_00000364
    mr r3, r31
    bl fn_803EC91C
    cmpwi r3, 0x0
    beq lbl_fn_8041D2C4_00000374
lbl_fn_8041D2C4_00000364:
    li r0, 0x1
    stw r0, 0x54(r31)
    li r3, 0x0
    b lbl_fn_8041D2C4_00000378
lbl_fn_8041D2C4_00000374:
    li r3, 0x1
lbl_fn_8041D2C4_00000378:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8041D320(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r3
    lwz r3, lbl_8087EFB4
    bl fn_800C16B4
    addic. r0, r31, 0x2dc
    li r4, 0x0
    stw r0, 0x74(r3)
    bne lbl_fn_8041D320_000003C4
    lwz r0, 0x70(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8041D320_000003C8
lbl_fn_8041D320_000003C4:
    li r4, 0x1
lbl_fn_8041D320_000003C8:
    stw r4, 0x70(r3)
    lwz r3, lbl_8087EFB4
    bl fn_800C16B4
    li r0, -0x1
    stw r0, 0xc8(r3)
    li r3, 0x0
    lbz r0, lbl_8087F4C0
    stw r3, 0x8(r1)
    extsb. r0, r0
    bne lbl_fn_8041D320_00000418
    lis r6, lbl_807C88F0@ha
    lis r4, fn_8041D180@ha
    lis r3, fn_8041D198@ha
    li r0, 0x1
    addi r3, r3, fn_8041D198@l
    addi r5, r6, lbl_807C88F0@l
    addi r4, r4, fn_8041D180@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C88F0@l(r6)
    stb r0, lbl_8087F4C0
lbl_fn_8041D320_00000418:
    lis r3, lbl_807C88F0@ha
    lwz r12, lbl_807C88F0@l(r3)
    cmpwi r12, 0x0
    beq lbl_fn_8041D320_0000043C
    addi r3, r1, 0xc
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8041D320_0000043C:
    lis r0, fn_8041CD24@ha
    addic. r0, r0, -13020
    beq lbl_fn_8041D320_00000454
    stw r0, 0xc(r1)
    li r0, 0x1
    b lbl_fn_8041D320_00000458
lbl_fn_8041D320_00000454:
    li r0, 0x0
lbl_fn_8041D320_00000458:
    cmpwi r0, 0x0
    beq lbl_fn_8041D320_00000470
    lis r3, lbl_807C88F0@ha
    addi r3, r3, lbl_807C88F0@l
    stw r3, 0x8(r1)
    b lbl_fn_8041D320_00000478
lbl_fn_8041D320_00000470:
    li r0, 0x0
    stw r0, 0x8(r1)
lbl_fn_8041D320_00000478:
    lwz r3, lbl_8087F558
    addi r4, r1, 0x8
    addi r5, r31, 0x2dc
    bl fn_80491528
    addic. r3, r1, 0x8
    beq lbl_fn_8041D320_000004C4
    lwz r4, 0x8(r1)
    cmpwi r4, 0x0
    beq lbl_fn_8041D320_000004C4
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_8041D320_000004BC
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8041D320_000004BC:
    li r0, 0x0
    stw r0, 0x8(r1)
lbl_fn_8041D320_000004C4:
    lwz r4, 0x58(r31)
    li r0, 0x0
    lfs f0, lbl_80886558
    mr r3, r31
    addi r4, r4, 0x1
    stw r4, 0x20(r1)
    addi r4, r1, 0x20
    stw r0, 0x24(r1)
    stw r0, 0x28(r1)
    stw r0, 0x2c(r1)
    stw r0, 0x30(r1)
    stfs f0, 0x34(r1)
    stfs f0, 0x38(r1)
    stfs f0, 0x3c(r1)
    lwz r12, 0x0(r31)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8041D4B4(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    addi r11, r1, 0x90
    bl _savegpr_27
    lwz r0, 0x54(r3)
    mr r30, r3
    cmpwi r0, 0x0
    bne lbl_fn_8041D4B4_00000554
    lwz r12, 0x0(r3)
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
lbl_fn_8041D4B4_00000554:
    lbz r0, lbl_8087F4C0
    li r3, 0x0
    stw r3, 0x44(r1)
    extsb. r0, r0
    bne lbl_fn_8041D4B4_00000590
    lis r6, lbl_807C88F0@ha
    lis r4, fn_8041D180@ha
    lis r3, fn_8041D198@ha
    li r0, 0x1
    addi r3, r3, fn_8041D198@l
    addi r5, r6, lbl_807C88F0@l
    addi r4, r4, fn_8041D180@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C88F0@l(r6)
    stb r0, lbl_8087F4C0
lbl_fn_8041D4B4_00000590:
    lis r3, lbl_807C88F0@ha
    lwz r12, lbl_807C88F0@l(r3)
    cmpwi r12, 0x0
    beq lbl_fn_8041D4B4_000005B4
    addi r3, r1, 0x48
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8041D4B4_000005B4:
    lis r0, fn_8041CD24@ha
    addic. r0, r0, -13020
    beq lbl_fn_8041D4B4_000005CC
    stw r0, 0x48(r1)
    li r0, 0x1
    b lbl_fn_8041D4B4_000005D0
lbl_fn_8041D4B4_000005CC:
    li r0, 0x0
lbl_fn_8041D4B4_000005D0:
    cmpwi r0, 0x0
    beq lbl_fn_8041D4B4_000005E8
    lis r3, lbl_807C88F0@ha
    addi r3, r3, lbl_807C88F0@l
    stw r3, 0x44(r1)
    b lbl_fn_8041D4B4_000005F0
lbl_fn_8041D4B4_000005E8:
    li r0, 0x0
    stw r0, 0x44(r1)
lbl_fn_8041D4B4_000005F0:
    lwz r3, lbl_8087F558
    addi r4, r1, 0x44
    addi r5, r30, 0x2dc
    bl fn_80491528
    addic. r3, r1, 0x44
    beq lbl_fn_8041D4B4_0000063C
    lwz r4, 0x44(r1)
    cmpwi r4, 0x0
    beq lbl_fn_8041D4B4_0000063C
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_8041D4B4_00000634
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8041D4B4_00000634:
    li r0, 0x0
    stw r0, 0x44(r1)
lbl_fn_8041D4B4_0000063C:
    lwz r3, 0x278(r30)
    lis r5, 0x2aab
    lfs f2, lbl_80886558
    subic. r4, r3, 0x1
    addi r0, r4, 0x1
    mulli r3, r4, 0xc
    mtctr r0
    blt lbl_fn_8041D4B4_000006FC
lbl_fn_8041D4B4_0000065C:
    add r7, r30, r3
    lwz r4, 0x27c(r7)
    addi r6, r7, 0x27c
    cmpwi r4, 0x0
    ble lbl_fn_8041D4B4_0000067C
    subi r0, r4, 0x1
    stw r0, 0x0(r6)
    b lbl_fn_8041D4B4_000006F4
lbl_fn_8041D4B4_0000067C:
    lwz r4, 0x280(r7)
    subic. r0, r4, 0x1
    stw r0, 0x280(r7)
    ble lbl_fn_8041D4B4_00000698
    lfs f0, 0x284(r7)
    fadds f2, f2, f0
    b lbl_fn_8041D4B4_000006F4
lbl_fn_8041D4B4_00000698:
    addi r0, r30, 0x27c
    subi r4, r5, 0x5555
    subf r0, r0, r6
    mulhw r0, r4, r0
    srawi r0, r0, 1
    srwi r4, r0, 31
    add r6, r0, r4
    mulli r0, r6, 0xc
    add r7, r30, r0
    b lbl_fn_8041D4B4_000006E0
lbl_fn_8041D4B4_000006C0:
    lwz r0, 0x288(r7)
    addi r6, r6, 0x1
    stw r0, 0x27c(r7)
    lwz r0, 0x28c(r7)
    stw r0, 0x280(r7)
    lfs f0, 0x290(r7)
    stfs f0, 0x284(r7)
    addi r7, r7, 0xc
lbl_fn_8041D4B4_000006E0:
    lwz r4, 0x278(r30)
    subi r0, r4, 0x1
    cmplw r6, r0
    blt lbl_fn_8041D4B4_000006C0
    stw r0, 0x278(r30)
lbl_fn_8041D4B4_000006F4:
    subi r3, r3, 0xc
    bdnz lbl_fn_8041D4B4_0000065C
lbl_fn_8041D4B4_000006FC:
    lfs f3, 0x2e8(r30)
    fcmpu cr0, f2, f3
    fsubs f2, f2, f3
    beq lbl_fn_8041D4B4_00000714
    lfs f0, lbl_8087DF90
    fmadds f3, f2, f0, f3
lbl_fn_8041D4B4_00000714:
    lwz r3, 0x218(r30)
    addi r4, r1, 0x20
    stfs f3, 0x20(r1)
    cmpwi r3, 0x0
    stfs f3, 0x24(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x2e8(r30), 0, 0
    ble lbl_fn_8041D4B4_000009D8
    subic. r0, r3, 0x1
    stw r0, 0x218(r30)
    bgt lbl_fn_8041D4B4_00000A94
    lwz r3, 0x54(r30)
    li r0, 0x0
    stw r0, 0x218(r30)
    li r31, -0x1
    cmpwi r3, 0x2
    bne lbl_fn_8041D4B4_0000077C
    bl fn_80680CF8
    lis r4, 0x2aab
    subi r0, r4, 0x5555
    mulhw r4, r0, r3
    srwi r0, r4, 31
    add r0, r4, r0
    mulli r0, r0, 0x6
    subf r31, r0, r3
    b lbl_fn_8041D4B4_00000788
lbl_fn_8041D4B4_0000077C:
    cmpwi r3, 0x3
    blt lbl_fn_8041D4B4_00000788
    subi r31, r3, 0x3
lbl_fn_8041D4B4_00000788:
    cmpwi r31, 0x0
    blt lbl_fn_8041D4B4_00000A94
    lfs f2, 0x74(r30)
    lfs f0, 0x204(r30)
    lfs f4, 0x70(r30)
    fadds f5, f2, f0
    lfs f3, 0x200(r30)
    lfs f2, 0x6c(r30)
    lfs f0, 0x1fc(r30)
    fadds f3, f4, f3
    fadds f0, f2, f0
    stfs f3, 0x3c(r1)
    stfs f0, 0x38(r1)
    stfs f5, 0x40(r1)
    bl fn_80680CF8
    lis r27, 0x4178
    lis r29, 0x4330
    addi r0, r27, 0x749f
    lis r28, lbl_80753188@ha
    mulhw r0, r0, r3
    stw r29, 0x58(r1)
    lfd f6, lbl_80753188@l(r28)
    lfs f4, lbl_80886560
    lfs f3, 0x208(r30)
    lfs f0, lbl_80886564
    srawi r0, r0, 8
    fmuls f2, f3, f0
    srwi r4, r0, 31
    lfs f0, 0x38(r1)
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x5c(r1)
    lfd f5, 0x58(r1)
    fsubs f5, f5, f6
    fdivs f4, f5, f4
    fmsubs f2, f3, f4, f2
    fadds f0, f0, f2
    stfs f0, 0x38(r1)
    bl fn_80680CF8
    addi r0, r27, 0x749f
    stw r29, 0x60(r1)
    mulhw r0, r0, r3
    lfd f6, lbl_80753188@l(r28)
    lfs f4, lbl_80886560
    lfs f3, 0x20c(r30)
    lfs f2, lbl_80886564
    lfs f0, 0x3c(r1)
    srawi r0, r0, 8
    fmuls f2, f3, f2
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x64(r1)
    lfd f5, 0x60(r1)
    fsubs f5, f5, f6
    fdivs f4, f5, f4
    fmsubs f2, f3, f4, f2
    fadds f0, f0, f2
    stfs f0, 0x3c(r1)
    bl fn_80680CF8
    addi r0, r27, 0x749f
    stw r29, 0x68(r1)
    mulhw r0, r0, r3
    lfd f6, lbl_80753188@l(r28)
    lfs f4, lbl_80886560
    lfs f3, 0x210(r30)
    lfs f2, lbl_80886564
    lfs f0, 0x40(r1)
    srawi r0, r0, 8
    fmuls f2, f3, f2
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    li r4, 0x0
    subf r0, r0, r3
    mr r3, r30
    xoris r0, r0, 0x8000
    stw r0, 0x6c(r1)
    lfd f5, 0x68(r1)
    fsubs f5, f5, f6
    fdivs f4, f5, f4
    fmsubs f2, f3, f4, f2
    fadds f0, f0, f2
    stfs f0, 0x40(r1)
    bl fn_80232B7C
    lfs f1, 0x90(r30)
    mulli r0, r31, 0xc
    lfs f0, lbl_80886568
    li r11, -0x1
    stfs f0, 0x28(r1)
    addi r7, r1, 0x38
    lwz r3, lbl_8087F3C0
    stfs f0, 0x2c(r1)
    add r4, r30, r0
    li r0, 0x1
    addi r8, r30, 0x78
    stfs f0, 0x30(r1)
    addi r4, r4, 0xf4
    addi r9, r1, 0x28
    li r5, 0x0
    stfs f0, 0x34(r1)
    li r6, 0x0
    li r10, -0x1
    stw r11, 0x8(r1)
    stw r0, 0xc(r1)
    bl fn_8023A8B4
    slwi r0, r31, 5
    lfs f1, lbl_80886568
    add r4, r30, r0
    addi r3, r1, 0x10
    addi r4, r4, 0x13c
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    lfs f2, 0x40(r1)
    addi r3, r1, 0x18
    lfs f0, 0x38(r1)
    lwz r0, 0x278(r30)
    stfs f0, 0x18(r1)
    cmplwi r0, 0x8
    stfs f2, 0x1c(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x2e0(r30), 0, 0
    bge lbl_fn_8041D4B4_00000A94
    lwz r0, 0x278(r30)
    mulli r0, r0, 0xc
    add r0, r30, r0
    addic. r4, r0, 0x27c
    beq lbl_fn_8041D4B4_000009C8
    mulli r0, r31, 0xc
    add r3, r30, r0
    lwz r0, 0x230(r3)
    stw r0, 0x0(r4)
    lwz r0, 0x234(r3)
    stw r0, 0x4(r4)
    lfs f0, 0x238(r3)
    stfs f0, 0x8(r4)
lbl_fn_8041D4B4_000009C8:
    lwz r3, 0x278(r30)
    addi r0, r3, 0x1
    stw r0, 0x278(r30)
    b lbl_fn_8041D4B4_00000A94
lbl_fn_8041D4B4_000009D8:
    lwz r3, 0x22c(r30)
    cmpwi r3, 0x0
    ble lbl_fn_8041D4B4_000009EC
    subi r0, r3, 0x1
    stw r0, 0x22c(r30)
lbl_fn_8041D4B4_000009EC:
    lwz r0, 0x22c(r30)
    cmpwi r0, 0x0
    bgt lbl_fn_8041D4B4_00000A94
    lwz r0, 0x54(r30)
    cmpwi r0, 0x1
    ble lbl_fn_8041D4B4_00000A94
    lwz r0, 0x21c(r30)
    li r3, 0x0
    stw r3, 0x22c(r30)
    li r4, 0x1
    cmpwi r0, 0x0
    ble lbl_fn_8041D4B4_00000A28
    lwz r3, 0x220(r30)
    subi r0, r3, 0x1
    stw r0, 0x220(r30)
lbl_fn_8041D4B4_00000A28:
    lwz r0, 0x21c(r30)
    cmpwi r0, 0x0
    ble lbl_fn_8041D4B4_00000A44
    lwz r0, 0x220(r30)
    cmpwi r0, 0x0
    bgt lbl_fn_8041D4B4_00000A44
    li r4, 0x0
lbl_fn_8041D4B4_00000A44:
    cmpwi r4, 0x0
    beq lbl_fn_8041D4B4_00000A94
    lwz r27, 0x228(r30)
    lwz r0, 0x224(r30)
    cmpwi r27, 0x0
    stw r0, 0x22c(r30)
    ble lbl_fn_8041D4B4_00000A8C
    bl fn_80680CF8
    divw r5, r3, r27
    srwi r4, r27, 31
    lwz r0, 0x22c(r30)
    add r4, r4, r27
    srawi r4, r4, 1
    mullw r5, r5, r27
    subf r3, r5, r3
    subf r3, r4, r3
    add r0, r0, r3
    stw r0, 0x22c(r30)
lbl_fn_8041D4B4_00000A8C:
    lwz r0, 0x214(r30)
    stw r0, 0x218(r30)
lbl_fn_8041D4B4_00000A94:
    addi r11, r1, 0x90
    bl _restgpr_27
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_8041DA40(void)
{
    nofralloc
    lwz r4, lbl_8087F0A8
    lwz r0, 0x74(r4)
    cmpwi r0, 0x0
    beqlr
    b fn_803EDCF4
    blr
}

asm void fn_8041DA58(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    addi r31, r3, 0xf4
    stw r30, 0x8(r1)
    li r30, 0x0
lbl_fn_8041DA58_00000AE0:
    mr r3, r31
    bl fn_80237874
    cmpwi r3, 0x0
    beq lbl_fn_8041DA58_00000AF8
    li r3, 0x1
    b lbl_fn_8041DA58_00000B0C
lbl_fn_8041DA58_00000AF8:
    addi r30, r30, 0x1
    addi r31, r31, 0xc
    cmpwi r30, 0x6
    blt lbl_fn_8041DA58_00000AE0
    li r3, 0x0
lbl_fn_8041DA58_00000B0C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8041DAB8(void)
{
    nofralloc
    stwu r1, -0x760(r1)
    mflr r0
    stw r0, 0x764(r1)
    stfd f31, 0x758(r1)
    stmw r27, 0x744(r1)
    mr r31, r3
    addi r3, r3, 0x60
    bl fn_8047059C
    mr r28, r3
    addi r3, r31, 0x60
    bl fn_80470580
    lis r4, lbl_807774D8@ha
    li r0, 0x0
    addi r4, r4, lbl_807774D8@l
    stw r4, 0x108(r1)
    mr r27, r3
    addi r3, r1, 0x118
    stw r0, 0x10c(r1)
    li r4, 0x0
    li r5, 0x400
    stw r0, 0x110(r1)
    stw r0, 0x114(r1)
    stw r0, 0x738(r1)
    bl memset
    addi r3, r1, 0x718
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x108(r1)
    mr r4, r27
    mr r5, r28
    addi r3, r1, 0x108
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807774B8@ha
    addi r3, r1, 0x108
    addi r4, r4, lbl_807774B8@l
    stw r4, 0x108(r1)
    la r4, lbl_8087D710
    bl fn_8005BCE8
    lis r27, lbl_807531A0@ha
    addi r30, r1, 0x8
    addi r27, r27, lbl_807531A0@l
lbl_fn_8041DAB8_00000BD4:
    addi r3, r1, 0x108
    bl fn_8005B9CC
    lbz r0, 0x0(r3)
    mr r28, r3
    cmpwi r0, 0x3b
    beq lbl_fn_8041DAB8_00000DD0
    addi r4, r27, 0x1a
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8041DAB8_00000C34
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r1, 0x8
    bl strcpy
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_80684600
    mulli r0, r3, 0xc
    addi r4, r1, 0x8
    add r3, r31, r0
    addi r3, r3, 0xf4
    bl fn_8023780C
    b lbl_fn_8041DAB8_00000DD0
lbl_fn_8041DAB8_00000C34:
    mr r3, r28
    addi r4, r27, 0x1e
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8041DAB8_00000C9C
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_80684600
    mr r28, r3
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_80684600
    mr r29, r3
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_800DC288
    fmr f31, f1
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_80684600
    mulli r0, r28, 0xc
    add r4, r31, r0
    stw r29, 0x230(r4)
    stfs f31, 0x238(r4)
    stw r3, 0x234(r4)
    b lbl_fn_8041DAB8_00000DD0
lbl_fn_8041DAB8_00000C9C:
    mr r3, r28
    addi r4, r27, 0x27
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8041DAB8_00000D04
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r1, 0x8
    bl strcpy
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_80684600
    slwi r0, r3, 5
    add r3, r31, r0
    addi r28, r3, 0x13c
    cmplw r30, r28
    beq lbl_fn_8041DAB8_00000DD0
    mr r3, r30
    bl strlen
    mr r5, r3
    mr r3, r28
    mr r4, r30
    addi r5, r5, 0x1
    bl memcpy
    b lbl_fn_8041DAB8_00000DD0
lbl_fn_8041DAB8_00000D04:
    mr r3, r28
    addi r4, r27, 0x2a
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8041DAB8_00000D4C
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_80684600
    stw r3, 0x21c(r31)
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_80684600
    stw r3, 0x224(r31)
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_80684600
    stw r3, 0x228(r31)
    b lbl_fn_8041DAB8_00000DD0
lbl_fn_8041DAB8_00000D4C:
    mr r3, r28
    addi r4, r27, 0x31
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8041DAB8_00000DD0
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_80684600
    stw r3, 0x214(r31)
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x1fc(r31)
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x200(r31)
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x204(r31)
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x208(r31)
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x20c(r31)
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x210(r31)
lbl_fn_8041DAB8_00000DD0:
    addi r3, r1, 0x108
    bl fn_8005BBF8
    cmpwi r3, 0x0
    bne lbl_fn_8041DAB8_00000BD4
    lfd f31, 0x758(r1)
    lmw r27, 0x744(r1)
    lwz r0, 0x764(r1)
    mtlr r0
    addi r1, r1, 0x760
    blr
}

asm void fn_8041DD8C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bne lbl_fn_8041DD8C_00000E1C
    li r3, 0x0
    b lbl_fn_8041DD8C_00000E3C
lbl_fn_8041DD8C_00000E1C:
    lwz r12, 0x0(r3)
    lwz r4, 0x0(r4)
    lwz r12, 0x70(r12)
    mtctr r12
    bctrl
    li r0, 0x1
    stw r0, 0x218(r31)
    lwz r3, 0x54(r31)
lbl_fn_8041DD8C_00000E3C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8041DDE4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    beq lbl_fn_8041DDE4_00000EF8
    lis r5, lbl_807531F0@ha
    li r3, 0x118
    addi r5, r5, lbl_807531F0@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_8041DDE4_00000EF0
    mr r4, r28
    mr r5, r29
    mr r6, r30
    bl fn_803EC568
    lis r3, lbl_8078DEF0@ha
    li r0, 0x0
    addi r3, r3, lbl_8078DEF0@l
    stw r3, 0x0(r31)
    lfs f0, lbl_80886570
    stw r0, 0xf4(r31)
    stfs f0, 0xf8(r31)
    stfs f0, 0xfc(r31)
    stfs f0, 0x100(r31)
    stfs f0, 0x104(r31)
    stfs f0, 0x108(r31)
    stw r0, 0x10c(r31)
    stw r0, 0x110(r31)
    stw r0, 0x54(r31)
lbl_fn_8041DDE4_00000EF0:
    mr r3, r31
    b lbl_fn_8041DDE4_00000EFC
lbl_fn_8041DDE4_00000EF8:
    li r3, 0x0
lbl_fn_8041DDE4_00000EFC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8041DEB0(void)
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
    beq lbl_fn_8041DEB0_00000F88
    addic. r0, r3, 0x10c
    beq lbl_fn_8041DEB0_00000F6C
    lwz r3, 0x110(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8041DEB0_00000F60
    beq lbl_fn_8041DEB0_00000F60
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_8041DEB0_00000F60:
    li r0, 0x0
    stw r0, 0x110(r30)
    stw r0, 0x10c(r30)
lbl_fn_8041DEB0_00000F6C:
    mr r3, r30
    li r4, 0x0
    bl fn_803EC69C
    cmpwi r31, 0x0
    ble lbl_fn_8041DEB0_00000F88
    mr r3, r30
    bl dtor_80084684
lbl_fn_8041DEB0_00000F88:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8041DF38(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_26
    mr r26, r3
    bl fn_803EC91C
    cmpwi r3, 0x0
    bne lbl_fn_8041DF38_0000128C
    lwz r3, 0xf4(r26)
    li r0, 0x5
    stw r0, 0x54(r26)
    cmpwi r3, 0x0
    beq lbl_fn_8041DF38_00001284
    lwz r4, 0x70(r3)
    li r27, 0x0
    lwz r3, lbl_8087F4A0
    b lbl_fn_8041DF38_00001048
lbl_fn_8041DF38_00000FEC:
    lwz r0, 0x48(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8041DF38_0000100C
    cmpwi r0, 0x4
    beq lbl_fn_8041DF38_00001014
    cmpwi r0, 0x5
    beq lbl_fn_8041DF38_00001020
    b lbl_fn_8041DF38_00001044
lbl_fn_8041DF38_0000100C:
    addi r27, r27, 0x1
    b lbl_fn_8041DF38_00001044
lbl_fn_8041DF38_00001014:
    lwz r0, 0x344(r4)
    add r27, r27, r0
    b lbl_fn_8041DF38_00001044
lbl_fn_8041DF38_00001020:
    lwz r5, 0x48(r3)
    b lbl_fn_8041DF38_0000103C
lbl_fn_8041DF38_00001028:
    lwz r0, 0x20(r5)
    cmplw r0, r4
    bne lbl_fn_8041DF38_00001038
    addi r27, r27, 0x1
lbl_fn_8041DF38_00001038:
    lwz r5, 0x5c(r5)
lbl_fn_8041DF38_0000103C:
    cmpwi r5, 0x0
    bne lbl_fn_8041DF38_00001028
lbl_fn_8041DF38_00001044:
    lwz r4, 0x4c(r4)
lbl_fn_8041DF38_00001048:
    cmpwi r4, 0x0
    bne lbl_fn_8041DF38_00000FEC
    lwz r3, 0x110(r26)
    cmpwi r3, 0x0
    beq lbl_fn_8041DF38_00001068
    beq lbl_fn_8041DF38_00001068
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_8041DF38_00001068:
    cmpwi r27, 0x0
    stw r27, 0x10c(r26)
    beq lbl_fn_8041DF38_000010B0
    mulli r3, r27, 0x14
    li r4, 0x0
    la r5, lbl_8087DF9C
    la r6, lbl_8087DF98
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_8041E23C@ha
    mr r7, r27
    addi r4, r4, fn_8041E23C@l
    li r5, 0x0
    li r6, 0x14
    bl fn_80695720
    stw r3, 0x110(r26)
    b lbl_fn_8041DF38_000010B8
lbl_fn_8041DF38_000010B0:
    li r0, 0x0
    stw r0, 0x110(r26)
lbl_fn_8041DF38_000010B8:
    lwz r3, 0xf4(r26)
    addi r29, r1, 0x8
    addi r30, r1, 0x20
    addi r31, r1, 0x38
    lwz r27, 0x70(r3)
    li r28, 0x0
    b lbl_fn_8041DF38_0000127C
lbl_fn_8041DF38_000010D4:
    lwz r5, 0x48(r27)
    cmpwi r5, 0x0
    beq lbl_fn_8041DF38_000010F4
    cmpwi r5, 0x4
    beq lbl_fn_8041DF38_00001158
    cmpwi r5, 0x5
    beq lbl_fn_8041DF38_000011EC
    b lbl_fn_8041DF38_00001278
lbl_fn_8041DF38_000010F4:
    mulli r0, r28, 0x14
    lwz r3, 0x110(r26)
    addi r4, r27, 0x50
    addi r28, r28, 0x1
    stwux r5, r3, r0
    stw r4, 0x4(r3)
    lfs f4, 0x74(r27)
    lfs f5, 0x64(r27)
    lfs f3, 0x70(r26)
    lfs f0, 0x6c(r26)
    fadds f6, f4, f3
    lfs f3, 0x84(r27)
    fadds f7, f5, f0
    lfs f0, 0x74(r26)
    stfs f6, 0x3c(r1)
    fadds f2, f3, f0
    stfs f7, 0x38(r1)
    psq_l f1, 0x0(r31), 0, 0
    psq_st f1, 0x8(r3), 0, 0
    stfs f5, 0x2c(r1)
    stfs f4, 0x30(r1)
    stfs f3, 0x34(r1)
    stfs f2, 0x40(r1)
    stfs f2, 0x10(r3)
    b lbl_fn_8041DF38_00001278
lbl_fn_8041DF38_00001158:
    mulli r3, r28, 0x14
    li r7, 0x0
    li r4, 0x0
    b lbl_fn_8041DF38_000011DC
lbl_fn_8041DF38_00001168:
    lwz r5, 0x348(r27)
    addi r28, r28, 0x1
    lwz r0, 0x110(r26)
    addi r7, r7, 0x1
    lwzx r5, r5, r4
    addi r4, r4, 0x4
    add r6, r0, r3
    lwz r0, 0x48(r27)
    stw r0, 0x0(r6)
    addi r3, r3, 0x14
    stw r5, 0x4(r6)
    lfs f4, 0x4c(r5)
    lfs f5, 0x3c(r5)
    lfs f3, 0x70(r26)
    lfs f0, 0x6c(r26)
    fadds f6, f4, f3
    lfs f3, 0x5c(r5)
    fadds f7, f5, f0
    lfs f0, 0x74(r26)
    stfs f6, 0x24(r1)
    fadds f2, f3, f0
    stfs f7, 0x20(r1)
    psq_l f1, 0x0(r30), 0, 0
    psq_st f1, 0x8(r6), 0, 0
    stfs f5, 0x14(r1)
    stfs f4, 0x18(r1)
    stfs f3, 0x1c(r1)
    stfs f2, 0x28(r1)
    stfs f2, 0x10(r6)
lbl_fn_8041DF38_000011DC:
    lwz r0, 0x344(r27)
    cmpw r7, r0
    blt lbl_fn_8041DF38_00001168
    b lbl_fn_8041DF38_00001278
lbl_fn_8041DF38_000011EC:
    mr r3, r27
    addi r4, r26, 0x6c
    addi r5, r26, 0x78
    bl fn_8049994C
    lwz r4, lbl_8087F4A0
    mulli r3, r28, 0x14
    lwz r5, 0x48(r4)
    b lbl_fn_8041DF38_00001270
lbl_fn_8041DF38_0000120C:
    lwz r0, 0x20(r5)
    cmplw r0, r27
    bne lbl_fn_8041DF38_0000126C
    lwz r4, 0x110(r26)
    addi r28, r28, 0x1
    lwz r0, 0x48(r27)
    stwux r0, r4, r3
    addi r3, r3, 0x14
    stw r5, 0x4(r4)
    lfs f5, 0x70(r5)
    lfs f4, 0x70(r26)
    lfs f3, 0x6c(r5)
    fadds f5, f5, f4
    lfs f0, 0x6c(r26)
    lfs f4, 0x74(r5)
    fadds f3, f3, f0
    lfs f0, 0x74(r26)
    stfs f5, 0xc(r1)
    fadds f2, f4, f0
    stfs f3, 0x8(r1)
    psq_l f1, 0x0(r29), 0, 0
    psq_st f1, 0x8(r4), 0, 0
    stfs f2, 0x10(r1)
    stfs f2, 0x10(r4)
lbl_fn_8041DF38_0000126C:
    lwz r5, 0x5c(r5)
lbl_fn_8041DF38_00001270:
    cmpwi r5, 0x0
    bne lbl_fn_8041DF38_0000120C
lbl_fn_8041DF38_00001278:
    lwz r27, 0x4c(r27)
lbl_fn_8041DF38_0000127C:
    cmpwi r27, 0x0
    bne lbl_fn_8041DF38_000010D4
lbl_fn_8041DF38_00001284:
    li r3, 0x1
    b lbl_fn_8041DF38_00001290
lbl_fn_8041DF38_0000128C:
    li r3, 0x0
lbl_fn_8041DF38_00001290:
    addi r11, r1, 0x60
    bl _restgpr_26
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_8041E23C(void)
{
    nofralloc
    lfs f0, lbl_80886570
    li r0, 0x0
    stw r0, 0x0(r3)
    stfs f0, 0x8(r3)
    stfs f0, 0xc(r3)
    stfs f0, 0x10(r3)
    blr
}

asm void fn_8041E258(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lfs f0, lbl_80886570
    li r4, 0x1
    stw r0, 0x34(r1)
    li r0, 0x0
    stw r4, 0x8(r1)
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    lwz r0, 0x58(r3)
    cmpwi r0, 0x1
    bne lbl_fn_8041E258_00001310
    li r0, 0x4
    stw r0, 0x8(r1)
lbl_fn_8041E258_00001310:
    lwz r12, 0x0(r3)
    addi r4, r1, 0x8
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8041E2C8(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stfd f31, 0x70(r1)
    psq_st f31, 0x78(r1), 0, 0
    stw r31, 0x6c(r1)
    mr r31, r3
    lwz r0, 0x54(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8041E2C8_0000136C
    lwz r12, 0x0(r3)
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
lbl_fn_8041E2C8_0000136C:
    lwz r0, 0x54(r31)
    cmpwi r0, 0x2
    bne lbl_fn_8041E2C8_000013BC
    lfs f0, lbl_80886570
    li r0, 0x0
    li r3, 0x3
    stw r3, 0x48(r1)
    mr r3, r31
    addi r4, r1, 0x48
    stw r0, 0x4c(r1)
    stw r0, 0x50(r1)
    stw r0, 0x54(r1)
    stw r0, 0x58(r1)
    stfs f0, 0x5c(r1)
    stfs f0, 0x60(r1)
    stfs f0, 0x64(r1)
    lwz r12, 0x0(r31)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
lbl_fn_8041E2C8_000013BC:
    lwz r0, 0x54(r31)
    cmpwi r0, 0x3
    beq lbl_fn_8041E2C8_000013D0
    cmpwi r0, 0x5
    bne lbl_fn_8041E2C8_000014D0
lbl_fn_8041E2C8_000013D0:
    lfs f1, 0x108(r31)
    mr r3, r31
    lfs f0, 0x104(r31)
    lwz r4, lbl_8087EFA8
    fdivs f1, f1, f0
    lfs f0, lbl_80886574
    lfs f31, 0x3a4(r4)
    fsubs f1, f0, f1
    bl fn_8041E480
    lwz r0, 0x54(r31)
    cmpwi r0, 0x3
    bne lbl_fn_8041E2C8_00001474
    lfs f1, 0x108(r31)
    lfs f0, 0x104(r31)
    fadds f1, f1, f31
    stfs f1, 0x108(r31)
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_8041E2C8_000014D0
    stfs f0, 0x108(r31)
    li r0, 0x0
    lfs f0, lbl_80886570
    li r3, 0x4
    stw r3, 0x28(r1)
    mr r3, r31
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
    mr r3, r31
    li r4, 0x1
    bl fn_8041E7E4
    b lbl_fn_8041E2C8_000014D0
lbl_fn_8041E2C8_00001474:
    lfs f1, 0x108(r31)
    lfs f0, lbl_80886570
    fsubs f1, f1, f31
    stfs f1, 0x108(r31)
    fcmpo cr0, f1, f0
    bge lbl_fn_8041E2C8_000014D0
    stfs f0, 0x108(r31)
    li r0, 0x0
    li r4, 0x1
    mr r3, r31
    stw r4, 0x8(r1)
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
lbl_fn_8041E2C8_000014D0:
    lwz r0, 0x84(r1)
    psq_l f31, 0x78(r1), 0, 0
    lfd f31, 0x70(r1)
    lwz r31, 0x6c(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_8041E480(void)
{
    nofralloc
    stwu r1, -0x160(r1)
    mflr r0
    stw r0, 0x164(r1)
    addi r11, r1, 0x130
    stfd f31, 0x150(r1)
    psq_st f31, 0x158(r1), 0, 0
    stfd f30, 0x140(r1)
    psq_st f30, 0x148(r1), 0, 0
    stfd f29, 0x130(r1)
    psq_st f29, 0x138(r1), 0, 0
    bl _savegpr_21
    fmr f31, f1
    li r22, 0x0
    mr r21, r3
    addi r28, r1, 0xc8
    mr r29, r22
    mr r30, r22
    addi r26, r1, 0x98
    addi r25, r1, 0x44
    addi r27, r1, 0x80
    li r31, 0x0
    b lbl_fn_8041E480_00001814
lbl_fn_8041E480_00001544:
    lwz r0, 0x110(r21)
    add r24, r0, r31
    lwzx r0, r31, r0
    cmpwi r0, 0x0
    beq lbl_fn_8041E480_0000156C
    cmpwi r0, 0x4
    beq lbl_fn_8041E480_0000171C
    cmpwi r0, 0x5
    beq lbl_fn_8041E480_000017B4
    b lbl_fn_8041E480_0000180C
lbl_fn_8041E480_0000156C:
    lfs f0, 0xf8(r21)
    addi r3, r1, 0x14
    lwz r23, 0x4(r24)
    fmuls f10, f0, f31
    lfs f7, 0xfc(r21)
    lfs f0, 0x8(r24)
    fmuls f9, f7, f31
    psq_l f2, 0x10(r23), 0, 0
    fadds f12, f0, f10
    lfs f7, 0x100(r21)
    psq_st f2, 0x8(r28), 0, 0
    fmuls f8, f7, f31
    psq_l f3, 0x18(r23), 0, 0
    psq_l f4, 0x20(r23), 0, 0
    psq_l f5, 0x28(r23), 0, 0
    psq_l f6, 0x30(r23), 0, 0
    lfs f0, 0xc(r24)
    stfs f12, 0xd4(r1)
    psq_l f1, 0x8(r23), 0, 0
    fadds f11, f0, f9
    lfs f7, 0x10(r24)
    psq_st f4, 0x18(r28), 0, 0
    fadds f0, f7, f8
    psq_l f2, 0x8(r28), 0, 0
    psq_st f6, 0x28(r28), 0, 0
    lfs f13, 0xe0(r1)
    psq_st f1, 0x8(r23), 0, 0
    lfs f29, 0xf0(r1)
    psq_st f2, 0x10(r23), 0, 0
    lfs f7, 0xd0(r1)
    stfs f11, 0xe4(r1)
    stfs f0, 0xf4(r1)
    psq_l f4, 0x18(r28), 0, 0
    psq_st f3, 0x18(r23), 0, 0
    psq_l f6, 0x28(r28), 0, 0
    psq_st f4, 0x20(r23), 0, 0
    psq_st f5, 0x28(r23), 0, 0
    psq_st f6, 0x30(r23), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    psq_st f3, 0x10(r28), 0, 0
    psq_st f5, 0x20(r28), 0, 0
    stfs f10, 0x68(r1)
    stfs f9, 0x6c(r1)
    stfs f8, 0x70(r1)
    stfs f12, 0x74(r1)
    stfs f11, 0x78(r1)
    stfs f0, 0x7c(r1)
    stfs f7, 0x14(r1)
    stfs f13, 0x18(r1)
    stfs f29, 0x1c(r1)
    bl fn_805F9940
    lfs f8, 0xec(r1)
    fmr f29, f1
    lfs f7, 0xdc(r1)
    addi r3, r1, 0x20
    lfs f0, 0xcc(r1)
    stfs f0, 0x20(r1)
    stfs f7, 0x24(r1)
    stfs f8, 0x28(r1)
    bl fn_805F9940
    lfs f8, 0xe8(r1)
    fmr f30, f1
    lfs f7, 0xd8(r1)
    addi r3, r1, 0x2c
    lfs f0, 0xc8(r1)
    stfs f0, 0x2c(r1)
    stfs f7, 0x30(r1)
    stfs f8, 0x34(r1)
    bl fn_805F9940
    frsp f7, f30
    stfs f1, 0x8(r1)
    frsp f0, f29
    stfs f30, 0xc(r1)
    fcmpo cr0, f7, f0
    stfs f29, 0x10(r1)
    ble lbl_fn_8041E480_000016A0
    b lbl_fn_8041E480_000016A4
lbl_fn_8041E480_000016A0:
    fmr f7, f0
lbl_fn_8041E480_000016A4:
    lfs f8, 0x8(r1)
    fcmpo cr0, f8, f7
    ble lbl_fn_8041E480_000016B4
    b lbl_fn_8041E480_000016CC
lbl_fn_8041E480_000016B4:
    lfs f8, 0xc(r1)
    lfs f0, 0x10(r1)
    fcmpo cr0, f8, f0
    ble lbl_fn_8041E480_000016C8
    b lbl_fn_8041E480_000016CC
lbl_fn_8041E480_000016C8:
    fmr f8, f0
lbl_fn_8041E480_000016CC:
    stfs f8, 0x54(r23)
    addi r4, r1, 0x80
    stw r29, 0x80(r1)
    lwz r3, 0x4(r24)
    bl fn_8000D430
    cmpwi r27, 0x0
    beq lbl_fn_8041E480_0000180C
    lwz r3, 0x80(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8041E480_0000180C
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_8041E480_00001714
    addi r3, r27, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8041E480_00001714:
    stw r30, 0x80(r1)
    b lbl_fn_8041E480_0000180C
lbl_fn_8041E480_0000171C:
    lwz r3, 0x4(r24)
    mr r4, r26
    psq_l f1, 0x30(r3), 0, 0
    psq_l f2, 0x38(r3), 0, 0
    psq_l f3, 0x40(r3), 0, 0
    psq_l f4, 0x48(r3), 0, 0
    psq_l f5, 0x50(r3), 0, 0
    psq_l f6, 0x58(r3), 0, 0
    psq_st f6, 0x28(r26), 0, 0
    psq_st f1, 0x0(r26), 0, 0
    psq_st f2, 0x8(r26), 0, 0
    psq_st f3, 0x10(r26), 0, 0
    psq_st f4, 0x18(r26), 0, 0
    psq_st f5, 0x20(r26), 0, 0
    lfs f8, 0x100(r21)
    lfs f7, 0xfc(r21)
    fmuls f9, f8, f31
    lfs f0, 0xf8(r21)
    fmuls f10, f7, f31
    lfs f8, 0x10(r24)
    fmuls f11, f0, f31
    lfs f7, 0xc(r24)
    lfs f0, 0x8(r24)
    fadds f8, f8, f9
    fadds f7, f7, f10
    stfs f11, 0x50(r1)
    fadds f0, f0, f11
    stfs f7, 0xb4(r1)
    stfs f0, 0xa4(r1)
    stfs f8, 0xc4(r1)
    stfs f10, 0x54(r1)
    lwz r3, 0x4(r24)
    stfs f9, 0x58(r1)
    stfs f0, 0x5c(r1)
    stfs f7, 0x60(r1)
    stfs f8, 0x64(r1)
    bl fn_8009EE30
    b lbl_fn_8041E480_0000180C
lbl_fn_8041E480_000017B4:
    lfs f7, 0xfc(r21)
    lfs f0, 0xf8(r21)
    fmuls f9, f7, f31
    lfs f7, 0xc(r24)
    fmuls f10, f0, f31
    lfs f0, 0x8(r24)
    lfs f8, 0x100(r21)
    fadds f11, f7, f9
    fadds f0, f0, f10
    lfs f7, 0x10(r24)
    fmuls f8, f8, f31
    stfs f11, 0x48(r1)
    lwz r3, 0x4(r24)
    stfs f0, 0x44(r1)
    fadds f2, f7, f8
    psq_l f1, 0x0(r25), 0, 0
    psq_st f1, 0x6c(r3), 0, 0
    stfs f10, 0x38(r1)
    stfs f9, 0x3c(r1)
    stfs f8, 0x40(r1)
    stfs f2, 0x4c(r1)
    stfs f2, 0x74(r3)
lbl_fn_8041E480_0000180C:
    addi r22, r22, 0x1
    addi r31, r31, 0x14
lbl_fn_8041E480_00001814:
    lwz r0, 0x10c(r21)
    cmplw r22, r0
    blt lbl_fn_8041E480_00001544
    addi r11, r1, 0x130
    psq_l f31, 0x158(r1), 0, 0
    lfd f31, 0x150(r1)
    psq_l f30, 0x148(r1), 0, 0
    lfd f30, 0x140(r1)
    psq_l f29, 0x138(r1), 0, 0
    lfd f29, 0x130(r1)
    bl _restgpr_21
    lwz r0, 0x164(r1)
    mtlr r0
    addi r1, r1, 0x160
    blr
}

asm void fn_8041E7E4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    beq lbl_fn_8041E7E4_00001898
    lwz r3, 0xf4(r3)
    lwz r31, 0x70(r3)
    b lbl_fn_8041E7E4_0000188C
lbl_fn_8041E7E4_00001874:
    lwz r0, 0x48(r31)
    cmpwi r0, 0x5
    bne lbl_fn_8041E7E4_00001888
    mr r3, r31
    bl fn_80499B9C
lbl_fn_8041E7E4_00001888:
    lwz r31, 0x4c(r31)
lbl_fn_8041E7E4_0000188C:
    cmpwi r31, 0x0
    bne lbl_fn_8041E7E4_00001874
    b lbl_fn_8041E7E4_000018C4
lbl_fn_8041E7E4_00001898:
    lwz r3, 0xf4(r3)
    lwz r31, 0x70(r3)
    b lbl_fn_8041E7E4_000018BC
lbl_fn_8041E7E4_000018A4:
    lwz r0, 0x48(r31)
    cmpwi r0, 0x5
    bne lbl_fn_8041E7E4_000018B8
    mr r3, r31
    bl fn_80499C48
lbl_fn_8041E7E4_000018B8:
    lwz r31, 0x4c(r31)
lbl_fn_8041E7E4_000018BC:
    cmpwi r31, 0x0
    bne lbl_fn_8041E7E4_000018A4
lbl_fn_8041E7E4_000018C4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8041E86C(void)
{
    nofralloc
    blr
}

asm void fn_8041E870(void)
{
    nofralloc
    lwz r3, 0xf4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8041E870_00001900
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_8041E870_00001900
    li r3, 0x1
    blr
lbl_fn_8041E870_00001900:
    li r3, 0x0
    blr
}

asm void fn_8041E89C(void)
{
    nofralloc
    stwu r1, -0x660(r1)
    mflr r0
    stw r0, 0x664(r1)
    stmw r27, 0x64c(r1)
    mr r27, r3
    addi r3, r3, 0x60
    bl fn_8047059C
    mr r31, r3
    addi r3, r27, 0x60
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
    mr r5, r31
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
    lis r3, lbl_807531F0@ha
    li r31, 0x1
    addi r30, r3, lbl_807531F0@l
lbl_fn_8041E89C_000019B4:
    addi r3, r1, 0x8
    bl fn_8005B9CC
    lbz r0, 0x0(r3)
    mr r28, r3
    cmpwi r0, 0x3b
    beq lbl_fn_8041E89C_00001A64
    addi r4, r30, 0x1
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8041E89C_00001A10
    lwz r29, 0x20(r27)
    cmpwi r29, 0x0
    beq lbl_fn_8041E89C_00001A10
    addi r3, r1, 0x8
    bl fn_8005B9CC
    mr r4, r3
    mr r3, r29
    bl fn_8049D68C
    cmpwi r3, 0x0
    stw r3, 0xf4(r27)
    beq lbl_fn_8041E89C_00001A64
    stw r31, 0xf4(r3)
    b lbl_fn_8041E89C_00001A64
lbl_fn_8041E89C_00001A10:
    mr r3, r28
    addi r4, r30, 0x5
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8041E89C_00001A64
    addi r3, r1, 0x8
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0xf8(r27)
    addi r3, r1, 0x8
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0xfc(r27)
    addi r3, r1, 0x8
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x100(r27)
    addi r3, r1, 0x8
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x104(r27)
lbl_fn_8041E89C_00001A64:
    addi r3, r1, 0x8
    bl fn_8005BBF8
    cmpwi r3, 0x0
    bne lbl_fn_8041E89C_000019B4
    lmw r27, 0x64c(r1)
    lwz r0, 0x664(r1)
    mtlr r0
    addi r1, r1, 0x660
    blr
}
