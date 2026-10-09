#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __register_global_object(void);
extern void dtor_80084684(void);
extern void fn_8005B3CC(void);
extern void fn_8005B5F8(void);
extern void fn_8005B6E8(void);
extern void fn_8005B710(void);
extern void fn_8005B8F8(void);
extern void fn_8005B9AC(void);
extern void fn_8006F420(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_800DC12C(void);
extern void fn_800DC1DC(void);
extern void fn_800DC288(void);
extern void fn_800DC3CC(void);
extern void fn_801360D8(void);
extern void fn_80208A3C(void);
extern void fn_80208B70(void);
extern void fn_8046DC5C(void);
extern void fn_8046DD20(void);
extern void fn_8068236C(void);
extern void fn_80682428(void);
extern void fn_80682544(void);
extern void fn_80684600(void);
extern void fn_80686A80(void);
extern void fn_80686AF0(void);
extern void fn_80695720(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_8073FBF0[];
extern u8 lbl_8073FC18[];
extern u8 lbl_8073FC54[];
extern u8 lbl_807772B0[];
extern u8 lbl_807772D0[];
extern u8 lbl_8077A070[];
extern u8 lbl_8077A090[];
extern u8 lbl_8077A0A8[];
extern u8 lbl_807C7FB0[];
extern u8 lbl_807C7FBC[];
extern u8 lbl_807C7FD4[];
extern u8 lbl_807C7FEC[];

/* Small data declarations */
extern u32 lbl_8087D708;
extern u32 lbl_8087D720;
extern u32 lbl_8087DB90;
extern u32 lbl_8087EEC8;
extern u32 lbl_8087F258;
extern u32 lbl_8087F25C;
extern u32 lbl_8087F260;
extern u32 lbl_8087F264;
extern u32 lbl_8087F268;
extern u32 lbl_8087F26C;
extern u32 lbl_8087F270;
extern u32 lbl_8087F274;
extern u32 lbl_8087F278;
extern u32 lbl_8087F27C;
extern u32 lbl_8087F280;
extern u32 lbl_8087F288;
extern u32 lbl_8087F28C;
extern u32 lbl_8087F518;
extern u32 lbl_80882F18;
extern u32 lbl_80882F1C;
extern u32 lbl_80882F20;
extern u32 lbl_80882F24;
extern u32 lbl_80882F28;
extern u32 lbl_80882F2C;
extern u32 lbl_80882F30;
extern u32 lbl_80882F38;
extern u32 lbl_80882F3C;

/* Function declarations */
void fn_80216440(void);
void fn_80216488(void);
void fn_802164A0(void);
void fn_802164E8(void);
void fn_80216500(void);
void fn_80216544(void);
void fn_80216624(void);
void fn_80216700(void);
void fn_802167E0(void);
void fn_802168BC(void);
void fn_80216908(void);
void fn_80216954(void);
void fn_80216988(void);
void fn_80216994(void);
void fn_80216A2C(void);
void fn_80216A94(void);
void fn_80216AFC(void);
void fn_80216CD0(void);
void fn_802174E8(void);
void fn_802174F4(void);
void fn_8021771C(void);
void fn_80217778(void);
void fn_802178C4(void);
void fn_802179B4(void);
void fn_802179BC(void);
void fn_802179FC(void);
void fn_80217D64(void);
void fn_80217D9C(void);

asm void fn_80216440(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x70
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r31, 0xc(r1)
    mr r31, r3
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    addi r3, r3, 0x8
    bl memset
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80216488(void)
{
    nofralloc
    li r0, 0x0
    stb r0, 0x0(r3)
    stb r0, 0x1(r3)
    stb r0, 0x2(r3)
    stw r0, 0x4(r3)
    blr
}

asm void fn_802164A0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x70
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r31, 0xc(r1)
    mr r31, r3
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    addi r3, r3, 0x8
    bl memset
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802164E8(void)
{
    nofralloc
    lbz r0, 0x1(r3)
    li r4, 0x0
    stb r4, 0x0(r3)
    rlwinm r0, r0, 0, 25, 23
    stb r0, 0x1(r3)
    blr
}

asm void fn_80216500(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x80
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r31, 0xc(r1)
    mr r31, r3
    stw r0, 0x0(r3)
    addi r3, r3, 0x4
    bl memset
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80216544(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r6, lbl_807C7FBC@ha
    mr r7, r5
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, -0x1
    lwz r0, lbl_807C7FBC@l(r6)
    addi r6, r6, lbl_807C7FBC@l
    lwz r5, 0x8(r6)
    li r6, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80216544_0000015C
lbl_fn_80216544_0000013C:
    lwz r0, 0x0(r5)
    cmpw r3, r0
    bne lbl_fn_80216544_00000150
    mr r31, r6
    b lbl_fn_80216544_0000015C
lbl_fn_80216544_00000150:
    addi r5, r5, 0x4
    addi r6, r6, 0x1
    bdnz lbl_fn_80216544_0000013C
lbl_fn_80216544_0000015C:
    cmpwi r31, 0x0
    blt lbl_fn_80216544_000001CC
    lwz r5, lbl_8087F258
    mr r3, r4
    lwz r6, lbl_8087F25C
    mr r4, r7
    bl fn_80216624
    cmpwi r3, 0x0
    beq lbl_fn_80216544_000001A4
    slwi r0, r31, 1
    lis r4, lbl_807C7FD4@ha
    add r3, r3, r0
    lha r0, 0x8(r3)
    addi r4, r4, lbl_807C7FD4@l
    lwz r3, 0x8(r4)
    slwi r0, r0, 3
    add r3, r3, r0
    b lbl_fn_80216544_000001D0
lbl_fn_80216544_000001A4:
    lwz r3, lbl_8087F258
    slwi r0, r31, 1
    lis r4, lbl_807C7FD4@ha
    add r3, r3, r0
    lha r0, 0x8(r3)
    addi r4, r4, lbl_807C7FD4@l
    lwz r3, 0x8(r4)
    slwi r0, r0, 3
    add r3, r3, r0
    b lbl_fn_80216544_000001D0
lbl_fn_80216544_000001CC:
    li r3, 0x0
lbl_fn_80216544_000001D0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80216624(void)
{
    nofralloc
    subi r0, r6, 0x1
    addi r7, r5, 0x78
    li r8, -0x1
    li r9, 0x0
    li r10, 0x1
    mtctr r0
    cmpwi r6, 0x1
    ble lbl_fn_80216624_00000224
lbl_fn_80216624_00000204:
    lwz r0, 0x0(r7)
    cmpw r3, r0
    bge lbl_fn_80216624_00000218
    subi r8, r10, 0x1
    b lbl_fn_80216624_00000224
lbl_fn_80216624_00000218:
    addi r7, r7, 0x78
    addi r10, r10, 0x1
    bdnz lbl_fn_80216624_00000204
lbl_fn_80216624_00000224:
    cmpwi r8, 0x0
    bge lbl_fn_80216624_00000230
    subi r8, r6, 0x1
lbl_fn_80216624_00000230:
    mulli r3, r8, 0x78
    addi r0, r8, 0x1
    add r7, r5, r3
    mr r6, r7
    mtctr r0
    cmpwi r8, 0x0
    blt lbl_fn_80216624_00000268
lbl_fn_80216624_0000024C:
    lwz r3, 0x0(r6)
    lwz r0, 0x0(r7)
    cmpw r3, r0
    bne lbl_fn_80216624_00000268
    addi r9, r9, 0x1
    subi r6, r6, 0x78
    bdnz lbl_fn_80216624_0000024C
lbl_fn_80216624_00000268:
    subi r0, r9, 0x1
    subf. r8, r0, r8
    blt lbl_fn_80216624_000002B8
    mulli r0, r8, 0x78
    li r6, 0x0
    add r3, r5, r0
    mtctr r9
    cmpwi r9, 0x0
    ble lbl_fn_80216624_000002AC
lbl_fn_80216624_0000028C:
    lwz r0, 0x4(r3)
    cmpw r0, r4
    bne lbl_fn_80216624_000002A0
    add r8, r8, r6
    b lbl_fn_80216624_000002AC
lbl_fn_80216624_000002A0:
    addi r3, r3, 0x78
    addi r6, r6, 0x1
    bdnz lbl_fn_80216624_0000028C
lbl_fn_80216624_000002AC:
    mulli r0, r8, 0x78
    add r3, r5, r0
    blr
lbl_fn_80216624_000002B8:
    li r3, 0x0
    blr
}

asm void fn_80216700(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r6, lbl_807C7FBC@ha
    mr r7, r5
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, -0x1
    lwz r0, lbl_807C7FBC@l(r6)
    addi r6, r6, lbl_807C7FBC@l
    lwz r5, 0x8(r6)
    li r6, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80216700_00000318
lbl_fn_80216700_000002F8:
    lwz r0, 0x0(r5)
    cmpw r3, r0
    bne lbl_fn_80216700_0000030C
    mr r31, r6
    b lbl_fn_80216700_00000318
lbl_fn_80216700_0000030C:
    addi r5, r5, 0x4
    addi r6, r6, 0x1
    bdnz lbl_fn_80216700_000002F8
lbl_fn_80216700_00000318:
    cmpwi r31, 0x0
    blt lbl_fn_80216700_00000388
    lwz r5, lbl_8087F260
    mr r3, r4
    lwz r6, lbl_8087F264
    mr r4, r7
    bl fn_802167E0
    cmpwi r3, 0x0
    beq lbl_fn_80216700_00000360
    slwi r0, r31, 1
    lis r4, lbl_807C7FEC@ha
    add r3, r3, r0
    lha r0, 0x8(r3)
    addi r4, r4, lbl_807C7FEC@l
    lwz r3, 0x8(r4)
    slwi r0, r0, 1
    add r3, r3, r0
    b lbl_fn_80216700_0000038C
lbl_fn_80216700_00000360:
    lwz r3, lbl_8087F260
    slwi r0, r31, 1
    lis r4, lbl_807C7FEC@ha
    add r3, r3, r0
    lha r0, 0x8(r3)
    addi r4, r4, lbl_807C7FEC@l
    lwz r3, 0x8(r4)
    slwi r0, r0, 1
    add r3, r3, r0
    b lbl_fn_80216700_0000038C
lbl_fn_80216700_00000388:
    li r3, 0x0
lbl_fn_80216700_0000038C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802167E0(void)
{
    nofralloc
    subi r0, r6, 0x1
    addi r7, r5, 0x78
    li r8, -0x1
    li r9, 0x0
    li r10, 0x1
    mtctr r0
    cmpwi r6, 0x1
    ble lbl_fn_802167E0_000003E0
lbl_fn_802167E0_000003C0:
    lwz r0, 0x0(r7)
    cmpw r3, r0
    bge lbl_fn_802167E0_000003D4
    subi r8, r10, 0x1
    b lbl_fn_802167E0_000003E0
lbl_fn_802167E0_000003D4:
    addi r7, r7, 0x78
    addi r10, r10, 0x1
    bdnz lbl_fn_802167E0_000003C0
lbl_fn_802167E0_000003E0:
    cmpwi r8, 0x0
    bge lbl_fn_802167E0_000003EC
    subi r8, r6, 0x1
lbl_fn_802167E0_000003EC:
    mulli r3, r8, 0x78
    addi r0, r8, 0x1
    add r7, r5, r3
    mr r6, r7
    mtctr r0
    cmpwi r8, 0x0
    blt lbl_fn_802167E0_00000424
lbl_fn_802167E0_00000408:
    lwz r3, 0x0(r6)
    lwz r0, 0x0(r7)
    cmpw r3, r0
    bne lbl_fn_802167E0_00000424
    addi r9, r9, 0x1
    subi r6, r6, 0x78
    bdnz lbl_fn_802167E0_00000408
lbl_fn_802167E0_00000424:
    subi r0, r9, 0x1
    subf. r8, r0, r8
    blt lbl_fn_802167E0_00000474
    mulli r0, r8, 0x78
    li r6, 0x0
    add r3, r5, r0
    mtctr r9
    cmpwi r9, 0x0
    ble lbl_fn_802167E0_00000468
lbl_fn_802167E0_00000448:
    lwz r0, 0x4(r3)
    cmpw r0, r4
    bne lbl_fn_802167E0_0000045C
    add r8, r8, r6
    b lbl_fn_802167E0_00000468
lbl_fn_802167E0_0000045C:
    addi r3, r3, 0x78
    addi r6, r6, 0x1
    bdnz lbl_fn_802167E0_00000448
lbl_fn_802167E0_00000468:
    mulli r0, r8, 0x78
    add r3, r5, r0
    blr
lbl_fn_802167E0_00000474:
    li r3, 0x0
    blr
}

asm void fn_802168BC(void)
{
    nofralloc
    lwz r5, lbl_8087F268
    li r6, 0x0
    lwz r0, lbl_8087F26C
    mr r4, r5
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_802168BC_000004C0
lbl_fn_802168BC_00000498:
    lwz r0, 0x0(r4)
    cmpw r3, r0
    bne lbl_fn_802168BC_000004B4
    mulli r0, r6, 0x88
    add r3, r5, r0
    addi r3, r3, 0x4
    blr
lbl_fn_802168BC_000004B4:
    addi r4, r4, 0x88
    addi r6, r6, 0x1
    bdnz lbl_fn_802168BC_00000498
lbl_fn_802168BC_000004C0:
    li r3, 0x0
    blr
}

asm void fn_80216908(void)
{
    nofralloc
    lwz r5, lbl_8087F268
    li r6, 0x0
    lwz r0, lbl_8087F26C
    mr r4, r5
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80216908_0000050C
lbl_fn_80216908_000004E4:
    lwz r0, 0x0(r4)
    cmpw r3, r0
    bne lbl_fn_80216908_00000500
    mulli r0, r6, 0x88
    add r3, r5, r0
    lwz r3, 0x84(r3)
    blr
lbl_fn_80216908_00000500:
    addi r4, r4, 0x88
    addi r6, r6, 0x1
    bdnz lbl_fn_80216908_000004E4
lbl_fn_80216908_0000050C:
    li r3, 0x0
    blr
}

asm void fn_80216954(void)
{
    nofralloc
    cmpwi r3, 0x0
    blt lbl_fn_80216954_0000052C
    lis r4, lbl_807C7FBC@ha
    lwz r0, lbl_807C7FBC@l(r4)
    cmpw r0, r3
    bgt lbl_fn_80216954_00000534
lbl_fn_80216954_0000052C:
    li r3, -0x1
    blr
lbl_fn_80216954_00000534:
    addi r4, r4, lbl_807C7FBC@l
    slwi r0, r3, 2
    lwz r3, 0x8(r4)
    lwzx r3, r3, r0
    blr
}

asm void fn_80216988(void)
{
    nofralloc
    lis r3, lbl_807C7FBC@ha
    lwz r3, lbl_807C7FBC@l(r3)
    blr
}

asm void fn_80216994(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, fn_801360D8@ha
    stw r0, 0x14(r1)
    addi r4, r4, fn_801360D8@l
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    lis r30, lbl_807C7FB0@ha
    addi r30, r30, lbl_807C7FB0@l
    addi r3, r30, 0xc
    stw r31, 0xc(r30)
    addi r5, r30, 0x0
    stw r31, 0x4(r3)
    stw r31, 0x8(r3)
    bl __register_global_object
    addi r3, r30, 0x24
    lis r4, fn_80216A2C@ha
    stw r31, 0x24(r30)
    addi r4, r4, fn_80216A2C@l
    addi r5, r30, 0x18
    stw r31, 0x4(r3)
    stw r31, 0x8(r3)
    bl __register_global_object
    addi r3, r30, 0x3c
    lis r4, fn_80216A94@ha
    stw r31, 0x3c(r30)
    addi r4, r4, fn_80216A94@l
    addi r5, r30, 0x30
    stw r31, 0x4(r3)
    stw r31, 0x8(r3)
    bl __register_global_object
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80216A2C(void)
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
    beq lbl_fn_80216A2C_00000638
    lwz r3, 0x8(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80216A2C_00000628
    beq lbl_fn_80216A2C_00000628
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80216A2C_00000628:
    cmpwi r31, 0x0
    ble lbl_fn_80216A2C_00000638
    mr r3, r30
    bl dtor_80084684
lbl_fn_80216A2C_00000638:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80216A94(void)
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
    beq lbl_fn_80216A94_000006A0
    lwz r3, 0x8(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80216A94_00000690
    beq lbl_fn_80216A94_00000690
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80216A94_00000690:
    cmpwi r31, 0x0
    ble lbl_fn_80216A94_000006A0
    mr r3, r30
    bl dtor_80084684
lbl_fn_80216A94_000006A0:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80216AFC(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x34(r1)
    stmw r26, 0x18(r1)
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    bne lbl_fn_80216AFC_000006EC
    li r3, 0x0
    b lbl_fn_80216AFC_0000087C
lbl_fn_80216AFC_000006EC:
    li r30, 0x0
    lis r31, lbl_8073FBF0@ha
    stw r30, 0xc(r1)
    addi r4, r31, lbl_8073FBF0@l
    li r5, 0x2
    stw r30, 0x8(r1)
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_80216AFC_00000750
    stw r30, 0x0(r27)
    addi r3, r1, 0xc
    addi r4, r26, 0x2
    li r5, 0x3
    bl fn_8068236C
    addi r3, r1, 0x8
    addi r4, r26, 0x6
    li r5, 0x2
    bl fn_8068236C
    addi r3, r1, 0xc
    bl fn_800DC12C
    stw r3, 0x0(r28)
    addi r3, r1, 0x8
    bl fn_800DC12C
    stw r3, 0x0(r29)
    b lbl_fn_80216AFC_00000878
lbl_fn_80216AFC_00000750:
    addi r31, r31, lbl_8073FBF0@l
    mr r3, r26
    addi r4, r31, 0x3
    li r5, 0x2
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_80216AFC_000007B0
    li r0, 0x1
    stw r0, 0x0(r27)
    addi r3, r1, 0xc
    addi r4, r26, 0x2
    li r5, 0x2
    bl fn_8068236C
    addi r3, r1, 0x8
    addi r4, r26, 0x5
    li r5, 0x2
    bl fn_8068236C
    addi r3, r1, 0xc
    bl fn_800DC12C
    stw r3, 0x0(r28)
    addi r3, r1, 0x8
    bl fn_800DC12C
    stw r3, 0x0(r29)
    b lbl_fn_80216AFC_00000878
lbl_fn_80216AFC_000007B0:
    mr r3, r26
    addi r4, r31, 0x6
    li r5, 0x2
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_80216AFC_0000080C
    li r0, 0x2
    stw r0, 0x0(r27)
    addi r3, r1, 0xc
    addi r4, r26, 0x2
    li r5, 0x3
    bl fn_8068236C
    addi r3, r1, 0x8
    addi r4, r26, 0x6
    li r5, 0x2
    bl fn_8068236C
    addi r3, r1, 0xc
    bl fn_800DC12C
    stw r3, 0x0(r28)
    addi r3, r1, 0x8
    bl fn_800DC12C
    stw r3, 0x0(r29)
    b lbl_fn_80216AFC_00000878
lbl_fn_80216AFC_0000080C:
    mr r3, r26
    addi r4, r31, 0x9
    li r5, 0x2
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_80216AFC_00000868
    li r0, 0x3
    stw r0, 0x0(r27)
    addi r3, r1, 0xc
    addi r4, r26, 0x2
    li r5, 0x3
    bl fn_8068236C
    addi r3, r1, 0x8
    addi r4, r26, 0x6
    li r5, 0x2
    bl fn_8068236C
    addi r3, r1, 0xc
    bl fn_800DC12C
    stw r3, 0x0(r28)
    addi r3, r1, 0x8
    bl fn_800DC12C
    stw r3, 0x0(r29)
    b lbl_fn_80216AFC_00000878
lbl_fn_80216AFC_00000868:
    li r0, 0x2
    stw r0, 0x0(r27)
    stw r30, 0x0(r28)
    stw r30, 0x0(r29)
lbl_fn_80216AFC_00000878:
    li r3, 0x1
lbl_fn_80216AFC_0000087C:
    lmw r26, 0x18(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80216CD0(void)
{
    nofralloc
    stwu r1, -0x1960(r1)
    mflr r0
    lwz r4, lbl_80882F18
    li r6, 0x20
    stw r0, 0x1964(r1)
    addi r5, r1, 0x14
    stmw r24, 0x1940(r1)
    li r29, 0x0
    li r30, 0x0
    stw r29, 0x14(r1)
    lwz r3, lbl_8087F518
    bl fn_8046DC5C
    lwz r5, 0x14(r1)
    lis r4, lbl_8077A090@ha
    addi r4, r4, lbl_8077A090@l
    stw r4, 0xce0(r1)
    srwi r0, r5, 31
    mr r31, r3
    add r0, r0, r5
    stw r29, 0xce4(r1)
    srawi r27, r0, 1
    addi r28, r1, 0xce0
    stw r29, 0xce8(r1)
    addi r3, r1, 0xcf0
    li r4, 0x0
    li r5, 0x800
    stw r29, 0xcec(r1)
    stw r29, 0x1930(r1)
    bl memset
    addi r3, r1, 0x18f0
    li r4, 0x0
    li r5, 0x40
    bl memset
    cmpwi r27, 0x0
    mr r5, r27
    beq lbl_fn_80216CD0_00000924
    subi r5, r27, 0x1
lbl_fn_80216CD0_00000924:
    cmpwi r27, 0x0
    mr r3, r28
    beq lbl_fn_80216CD0_00000938
    addi r4, r31, 0x2
    b lbl_fn_80216CD0_0000093C
lbl_fn_80216CD0_00000938:
    mr r4, r31
lbl_fn_80216CD0_0000093C:
    lwz r12, 0x0(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r3, lbl_8077A070@ha
    lis r4, lbl_8077A0A8@ha
    addi r3, r3, lbl_8077A070@l
    stw r3, 0xce0(r1)
    mr r3, r28
    addi r4, r4, lbl_8077A0A8@l
    bl fn_8005B9AC
    lis r29, lbl_8073FBF0@ha
    addi r29, r29, lbl_8073FBF0@l
    b lbl_fn_80216CD0_00000AFC
lbl_fn_80216CD0_00000974:
    addi r3, r1, 0xce0
    bl fn_8005B710
    la r4, lbl_8087DB90
    bl fn_80686AF0
    cmpwi r3, 0x0
    bne lbl_fn_80216CD0_00000AFC
    lwz r27, lbl_8087EEC8
    addi r3, r1, 0xce0
    bl fn_8005B710
    mr r5, r3
    mr r3, r27
    addi r4, r1, 0x38
    li r6, 0x20
    bl fn_8006F420
    addi r3, r1, 0x38
    addi r4, r29, 0xc
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_80216CD0_00000AFC
    addi r3, r1, 0x38
    bl strlen
    add r4, r3, r30
    addi r3, r1, 0xce0
    addi r30, r4, 0x2
    bl fn_8005B710
    addi r3, r1, 0xce0
    bl fn_8005B710
    addi r3, r1, 0xce0
    bl fn_8005B710
    addi r3, r1, 0xce0
    bl fn_8005B710
    addi r3, r1, 0xce0
    bl fn_8005B710
    lwz r27, lbl_8087EEC8
    addi r3, r1, 0xce0
    bl fn_8005B710
    mr r5, r3
    mr r3, r27
    addi r4, r1, 0x38
    li r6, 0x20
    bl fn_8006F420
    addi r3, r1, 0x38
    bl strlen
    add r3, r3, r30
    lwz r27, lbl_8087EEC8
    addi r30, r3, 0x2
    addi r3, r1, 0xce0
    bl fn_8005B710
    mr r5, r3
    mr r3, r27
    addi r4, r1, 0x38
    li r6, 0x20
    bl fn_8006F420
    addi r3, r1, 0x38
    bl strlen
    add r4, r3, r30
    addi r3, r1, 0xce0
    addi r30, r4, 0x2
    bl fn_8005B710
    lwz r27, lbl_8087EEC8
    addi r3, r1, 0xce0
    bl fn_8005B710
    mr r5, r3
    mr r3, r27
    addi r4, r1, 0x38
    li r6, 0x20
    bl fn_8006F420
    addi r3, r1, 0x38
    bl strlen
    add r3, r3, r30
    lwz r27, lbl_8087EEC8
    addi r30, r3, 0x2
    addi r3, r1, 0xce0
    bl fn_8005B710
    mr r5, r3
    mr r3, r27
    addi r4, r1, 0x38
    li r6, 0x20
    bl fn_8006F420
    addi r3, r1, 0x38
    bl strlen
    add r3, r3, r30
    lwz r27, lbl_8087EEC8
    addi r30, r3, 0x2
    addi r3, r1, 0xce0
    bl fn_8005B710
    mr r5, r3
    mr r3, r27
    addi r4, r1, 0x38
    li r6, 0x40
    bl fn_8006F420
    addi r3, r1, 0x38
    bl strlen
    lwz r4, lbl_8087F274
    add r3, r3, r30
    addi r30, r3, 0x2
    addi r0, r4, 0x1
    stw r0, lbl_8087F274
lbl_fn_80216CD0_00000AFC:
    addi r3, r1, 0xce0
    bl fn_8005B8F8
    cmpwi r3, 0x0
    bne lbl_fn_80216CD0_00000974
    lwz r28, lbl_8087F274
    lis r29, lbl_8073FBF0@ha
    addi r29, r29, lbl_8073FBF0@l
    li r4, 0x1
    mulli r3, r28, 0xcc
    li r7, 0x0
    addi r5, r29, 0xc
    mr r6, r5
    addi r3, r3, 0x10
    bl fn_800846FC
    lis r4, fn_802174E8@ha
    mr r7, r28
    addi r4, r4, fn_802174E8@l
    li r5, 0x0
    li r6, 0xcc
    bl fn_80695720
    stw r3, lbl_8087F270
    addi r5, r29, 0xc
    mr r3, r30
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_800846FC
    lwz r4, 0x14(r1)
    li r26, 0x0
    stw r3, lbl_8087F27C
    srwi r0, r4, 31
    add r0, r0, r4
    srawi. r3, r0, 1
    beq lbl_fn_80216CD0_00000B8C
    addi r0, r31, 0x2
    b lbl_fn_80216CD0_00000B90
lbl_fn_80216CD0_00000B8C:
    mr r0, r31
lbl_fn_80216CD0_00000B90:
    cmpwi r3, 0x0
    stw r0, 0xce4(r1)
    beq lbl_fn_80216CD0_00000BA0
    subi r3, r3, 0x1
lbl_fn_80216CD0_00000BA0:
    li r30, 0x0
    lis r29, lbl_8073FBF0@ha
    stw r3, 0xce8(r1)
    addi r29, r29, lbl_8073FBF0@l
    li r28, 0x0
    stw r30, 0xcec(r1)
    b lbl_fn_80216CD0_00000D70
lbl_fn_80216CD0_00000BBC:
    addi r3, r1, 0xce0
    bl fn_8005B710
    la r4, lbl_8087DB90
    bl fn_80686AF0
    cmpwi r3, 0x0
    bne lbl_fn_80216CD0_00000D70
    lwz r27, lbl_8087EEC8
    addi r3, r1, 0xce0
    bl fn_8005B710
    mr r5, r3
    mr r3, r27
    addi r4, r1, 0x38
    li r6, 0x20
    bl fn_8006F420
    addi r3, r1, 0x38
    addi r4, r29, 0xc
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_80216CD0_00000D70
    lwz r0, lbl_8087F270
    mr r6, r26
    lwz r5, lbl_8087F27C
    addi r4, r1, 0x38
    add r25, r0, r28
    mr r3, r25
    bl fn_80208B70
    mr r26, r3
    lwz r3, 0x0(r25)
    addi r4, r25, 0x44
    addi r5, r25, 0x48
    addi r6, r25, 0x4c
    bl fn_80216AFC
    addi r3, r1, 0xce0
    bl fn_8005B710
    mr r4, r3
    addi r3, r25, 0x4
    li r5, 0x20
    bl fn_80686A80
    addi r3, r1, 0xce0
    bl fn_8005B710
    addi r3, r1, 0xce0
    bl fn_8005B710
    bl fn_800DC1DC
    stw r3, 0x50(r25)
    addi r3, r1, 0xce0
    bl fn_8005B710
    bl fn_800DC1DC
    stw r3, 0x54(r25)
    addi r3, r1, 0xce0
    bl fn_8005B710
    bl fn_800DC1DC
    stw r3, 0x58(r25)
    addi r3, r1, 0xce0
    bl fn_8005B710
    lwz r5, lbl_8087F27C
    mr r4, r3
    mr r6, r26
    addi r3, r25, 0x5c
    bl fn_80208A3C
    mr r26, r3
    addi r3, r1, 0xce0
    bl fn_8005B710
    lwz r5, lbl_8087F27C
    mr r4, r3
    mr r6, r26
    addi r3, r25, 0x60
    bl fn_80208A3C
    mr r26, r3
    addi r3, r1, 0xce0
    bl fn_8005B710
    bl fn_800DC3CC
    stfs f1, 0x64(r25)
    addi r3, r1, 0xce0
    bl fn_8005B710
    lwz r5, lbl_8087F27C
    mr r4, r3
    mr r6, r26
    addi r3, r25, 0x68
    bl fn_80208A3C
    mr r26, r3
    addi r3, r1, 0xce0
    bl fn_8005B710
    lwz r5, lbl_8087F27C
    mr r4, r3
    mr r6, r26
    addi r3, r25, 0x6c
    bl fn_80208A3C
    mr r26, r3
    addi r3, r1, 0xce0
    bl fn_8005B710
    lwz r5, lbl_8087F27C
    mr r4, r3
    mr r6, r26
    addi r3, r25, 0x70
    bl fn_80208A3C
    mr r26, r3
    mr r27, r25
    li r24, 0x0
lbl_fn_80216CD0_00000D44:
    addi r3, r1, 0xce0
    bl fn_8005B710
    bl fn_800DC1DC
    addi r24, r24, 0x1
    stw r3, 0x74(r27)
    cmpwi r24, 0x10
    addi r27, r27, 0x4
    blt lbl_fn_80216CD0_00000D44
    stw r30, 0xb8(r25)
    addi r28, r28, 0xcc
    stw r30, 0xbc(r25)
lbl_fn_80216CD0_00000D70:
    addi r3, r1, 0xce0
    bl fn_8005B8F8
    cmpwi r3, 0x0
    bne lbl_fn_80216CD0_00000BBC
    lwz r3, lbl_8087F518
    mr r4, r31
    bl fn_8046DD20
    lwz r3, lbl_8087F518
    addi r5, r1, 0x14
    lwz r4, lbl_80882F24
    li r6, 0x20
    bl fn_8046DC5C
    lis r4, lbl_807772D0@ha
    li r0, 0x0
    addi r4, r4, lbl_807772D0@l
    stw r4, 0x6ac(r1)
    mr r31, r3
    lwz r27, 0x14(r1)
    stw r0, 0x6b0(r1)
    addi r3, r1, 0x6bc
    li r4, 0x0
    li r5, 0x400
    stw r0, 0x6b4(r1)
    stw r0, 0x6b8(r1)
    stw r0, 0xcdc(r1)
    bl memset
    addi r3, r1, 0xcbc
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x6ac(r1)
    mr r4, r31
    mr r5, r27
    addi r3, r1, 0x6ac
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0x6ac
    addi r4, r4, lbl_807772B0@l
    stw r4, 0x6ac(r1)
    la r4, lbl_8087D708
    bl fn_8005B6E8
    lis r29, lbl_8073FBF0@ha
    addi r29, r29, lbl_8073FBF0@l
    b lbl_fn_80216CD0_00000EE4
lbl_fn_80216CD0_00000E28:
    addi r3, r1, 0x6ac
    bl fn_8005B3CC
    addi r4, r29, 0xc
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80216CD0_00000EE4
    addi r3, r1, 0x6ac
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r1, 0x18
    li r5, 0x20
    bl fn_8068236C
    addi r3, r1, 0x6ac
    bl fn_8005B3CC
    lwz r28, lbl_8087F270
    li r27, 0x0
    lwz r30, lbl_8087F274
    b lbl_fn_80216CD0_00000E90
lbl_fn_80216CD0_00000E70:
    lwz r3, 0x0(r28)
    addi r4, r1, 0x18
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80216CD0_00000E88
    b lbl_fn_80216CD0_00000E9C
lbl_fn_80216CD0_00000E88:
    addi r28, r28, 0xcc
    addi r27, r27, 0x1
lbl_fn_80216CD0_00000E90:
    cmplw r27, r30
    blt lbl_fn_80216CD0_00000E70
    li r28, 0x0
lbl_fn_80216CD0_00000E9C:
    cmpwi r28, 0x0
    beq lbl_fn_80216CD0_00000EE4
    addi r3, r1, 0x6ac
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0xbc(r28)
    addi r3, r1, 0x6ac
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0xc4(r28)
    addi r3, r1, 0x6ac
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0xc0(r28)
    addi r3, r1, 0x6ac
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0xc8(r28)
lbl_fn_80216CD0_00000EE4:
    addi r3, r1, 0x6ac
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_80216CD0_00000E28
    lwz r3, lbl_8087F518
    mr r4, r31
    bl fn_8046DD20
    lwz r3, lbl_8087F518
    addi r5, r1, 0x14
    lwz r4, lbl_80882F1C
    li r6, 0x20
    bl fn_8046DC5C
    lis r4, lbl_807772D0@ha
    li r0, 0x0
    addi r4, r4, lbl_807772D0@l
    stw r4, 0x78(r1)
    mr r31, r3
    lwz r27, 0x14(r1)
    stw r0, 0x7c(r1)
    addi r3, r1, 0x88
    li r4, 0x0
    li r5, 0x400
    stw r0, 0x80(r1)
    stw r0, 0x84(r1)
    stw r0, 0x6a8(r1)
    bl memset
    addi r3, r1, 0x688
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x78(r1)
    mr r4, r31
    mr r5, r27
    addi r3, r1, 0x78
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0x78
    addi r4, r4, lbl_807772B0@l
    stw r4, 0x78(r1)
    la r4, lbl_8087D708
    bl fn_8005B6E8
    lis r29, lbl_8073FBF0@ha
    li r30, 0x1
    addi r29, r29, lbl_8073FBF0@l
    b lbl_fn_80216CD0_00001074
lbl_fn_80216CD0_00000FA0:
    addi r3, r1, 0x78
    bl fn_8005B3CC
    mr r24, r3
    addi r4, r29, 0xc
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_80216CD0_00001074
    mr r3, r24
    addi r4, r1, 0x10
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    bl fn_80216AFC
    lwz r5, 0x10(r1)
    lwz r4, 0x8(r1)
    cmpwi r5, 0x4
    lwz r3, 0xc(r1)
    bne lbl_fn_80216CD0_00000FE8
    li r5, 0x3
lbl_fn_80216CD0_00000FE8:
    lwz r0, lbl_8087F274
    lwz r27, lbl_8087F270
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80216CD0_0000102C
lbl_fn_80216CD0_00000FFC:
    lwz r0, 0x44(r27)
    cmpw r0, r5
    bne lbl_fn_80216CD0_00001024
    lwz r0, 0x48(r27)
    cmpw r0, r3
    bne lbl_fn_80216CD0_00001024
    lwz r0, 0x4c(r27)
    cmpw r0, r4
    bne lbl_fn_80216CD0_00001024
    b lbl_fn_80216CD0_00001030
lbl_fn_80216CD0_00001024:
    addi r27, r27, 0xcc
    bdnz lbl_fn_80216CD0_00000FFC
lbl_fn_80216CD0_0000102C:
    li r27, 0x0
lbl_fn_80216CD0_00001030:
    cmpwi r27, 0x0
    beq lbl_fn_80216CD0_00001074
    addi r3, r1, 0x78
    bl fn_8005B3CC
    li r24, 0x0
lbl_fn_80216CD0_00001044:
    addi r3, r1, 0x78
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    cmpwi r0, 0x31
    bne lbl_fn_80216CD0_00001068
    lwz r3, 0xb4(r27)
    slw r0, r30, r24
    or r0, r3, r0
    stw r0, 0xb4(r27)
lbl_fn_80216CD0_00001068:
    addi r24, r24, 0x1
    cmpwi r24, 0x20
    blt lbl_fn_80216CD0_00001044
lbl_fn_80216CD0_00001074:
    addi r3, r1, 0x78
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_80216CD0_00000FA0
    lwz r3, lbl_8087F518
    mr r4, r31
    bl fn_8046DD20
    bl fn_802174F4
    lmw r24, 0x1940(r1)
    lwz r0, 0x1964(r1)
    mtlr r0
    addi r1, r1, 0x1960
    blr
}

asm void fn_802174E8(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0xb4(r3)
    blr
}

asm void fn_802174F4(void)
{
    nofralloc
    stwu r1, -0x660(r1)
    mflr r0
    lwz r4, lbl_80882F20
    li r6, 0x20
    stw r0, 0x664(r1)
    addi r5, r1, 0x8
    stmw r25, 0x644(r1)
    li r29, 0x0
    stw r29, 0x8(r1)
    lwz r3, lbl_8087F518
    bl fn_8046DC5C
    lis r4, lbl_807772D0@ha
    mr r31, r3
    addi r4, r4, lbl_807772D0@l
    stw r4, 0xc(r1)
    lwz r30, 0x8(r1)
    addi r3, r1, 0x1c
    stw r29, 0x10(r1)
    li r4, 0x0
    li r5, 0x400
    stw r29, 0x14(r1)
    stw r29, 0x18(r1)
    stw r29, 0x63c(r1)
    bl memset
    addi r3, r1, 0x61c
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0xc(r1)
    mr r4, r31
    mr r5, r30
    addi r3, r1, 0xc
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0xc
    addi r4, r4, lbl_807772B0@l
    stw r4, 0xc(r1)
    la r4, lbl_8087D708
    bl fn_8005B6E8
    li r26, 0x0
    b lbl_fn_802174F4_00001190
lbl_fn_802174F4_00001160:
    addi r3, r1, 0xc
    bl fn_8005B3CC
    addi r3, r1, 0xc
    bl fn_8005B3CC
    b lbl_fn_802174F4_00001180
lbl_fn_802174F4_00001174:
    addi r26, r26, 0x1
    addi r3, r1, 0xc
    bl fn_8005B3CC
lbl_fn_802174F4_00001180:
    bl strlen
    cmpwi r3, 0x0
    bne lbl_fn_802174F4_00001174
    addi r26, r26, 0x1
lbl_fn_802174F4_00001190:
    addi r3, r1, 0xc
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_802174F4_00001160
    lis r5, lbl_8073FBF0@ha
    slwi r3, r26, 2
    addi r5, r5, lbl_8073FBF0@l
    li r4, 0x1
    addi r5, r5, 0xc
    li r7, 0x0
    mr r6, r5
    bl fn_800846FC
    stw r3, lbl_8087F278
    mr r4, r31
    lwz r12, 0xc(r1)
    addi r3, r1, 0xc
    lwz r5, 0x8(r1)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    li r25, 0x0
    li r29, -0x1
    b lbl_fn_802174F4_000012AC
lbl_fn_802174F4_000011EC:
    addi r3, r1, 0xc
    bl fn_8005B3CC
    lwz r27, lbl_8087F270
    mr r30, r3
    lwz r26, lbl_8087F274
    li r28, 0x0
    b lbl_fn_802174F4_00001228
lbl_fn_802174F4_00001208:
    lwz r3, 0x0(r27)
    mr r4, r30
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802174F4_00001220
    b lbl_fn_802174F4_00001234
lbl_fn_802174F4_00001220:
    addi r27, r27, 0xcc
    addi r28, r28, 0x1
lbl_fn_802174F4_00001228:
    cmplw r28, r26
    blt lbl_fn_802174F4_00001208
    li r27, 0x0
lbl_fn_802174F4_00001234:
    cmpwi r27, 0x0
    beq lbl_fn_802174F4_000012C8
    lwz r4, lbl_8087F278
    slwi r0, r25, 2
    addi r3, r1, 0xc
    li r26, 0x0
    add r0, r4, r0
    stw r0, 0xb8(r27)
    li r30, 0x0
    bl fn_8005B3CC
    mr r28, r3
    b lbl_fn_802174F4_00001288
lbl_fn_802174F4_00001264:
    mr r3, r28
    bl fn_80684600
    lwz r4, 0xb8(r27)
    addi r26, r26, 0x1
    stwx r3, r4, r30
    addi r3, r1, 0xc
    addi r30, r30, 0x4
    bl fn_8005B3CC
    mr r28, r3
lbl_fn_802174F4_00001288:
    mr r3, r28
    bl strlen
    cmpwi r3, 0x0
    bne lbl_fn_802174F4_00001264
    lwz r3, 0xb8(r27)
    slwi r0, r26, 2
    addi r26, r26, 0x1
    stwx r29, r3, r0
    add r25, r25, r26
lbl_fn_802174F4_000012AC:
    addi r3, r1, 0xc
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_802174F4_000011EC
    lwz r3, lbl_8087F518
    mr r4, r31
    bl fn_8046DD20
lbl_fn_802174F4_000012C8:
    lmw r25, 0x644(r1)
    lwz r0, 0x664(r1)
    mtlr r0
    addi r1, r1, 0x660
    blr
}

asm void fn_8021771C(void)
{
    nofralloc
    cmpwi r3, 0x4
    bne lbl_fn_8021771C_000012E8
    li r3, 0x3
lbl_fn_8021771C_000012E8:
    lwz r0, lbl_8087F274
    lwz r6, lbl_8087F270
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8021771C_00001330
lbl_fn_8021771C_000012FC:
    lwz r0, 0x44(r6)
    cmpw r0, r3
    bne lbl_fn_8021771C_00001328
    lwz r0, 0x48(r6)
    cmpw r0, r4
    bne lbl_fn_8021771C_00001328
    lwz r0, 0x4c(r6)
    cmpw r0, r5
    bne lbl_fn_8021771C_00001328
    mr r3, r6
    blr
lbl_fn_8021771C_00001328:
    addi r6, r6, 0xcc
    bdnz lbl_fn_8021771C_000012FC
lbl_fn_8021771C_00001330:
    li r3, 0x0
    blr
}

asm void fn_80217778(void)
{
    nofralloc
    stwu r1, -0x660(r1)
    mflr r0
    lis r3, lbl_807772D0@ha
    li r4, 0x0
    stw r0, 0x664(r1)
    li r0, 0x0
    addi r3, r3, lbl_807772D0@l
    li r5, 0x400
    stmw r26, 0x648(r1)
    stw r3, 0xc(r1)
    addi r3, r1, 0x1c
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stw r0, 0x63c(r1)
    bl memset
    addi r3, r1, 0x61c
    li r4, 0x0
    li r5, 0x20
    bl memset
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0xc
    addi r4, r4, lbl_807772B0@l
    stw r4, 0xc(r1)
    la r4, lbl_8087D720
    bl fn_8005B6E8
    lwz r3, lbl_8087F518
    addi r5, r1, 0x8
    lwz r4, lbl_80882F28
    li r6, 0x20
    bl fn_8046DC5C
    lwz r12, 0xc(r1)
    mr r29, r3
    mr r4, r29
    addi r3, r1, 0xc
    lwz r12, 0x8(r12)
    lwz r5, 0x8(r1)
    mtctr r12
    bctrl
    lis r5, lbl_8073FC18@ha
    li r3, 0x920
    addi r5, r5, lbl_8073FC18@l
    li r4, 0x1
    mr r6, r5
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_802178C4@ha
    li r5, 0x0
    addi r4, r4, fn_802178C4@l
    li r6, 0xe8
    li r7, 0xa
    bl fn_80695720
    stw r3, lbl_8087F280
    li r28, 0x0
    li r30, 0x0
lbl_fn_80217778_00001414:
    cmpwi r28, 0x3a
    bge lbl_fn_80217778_00001464
    li r27, 0x0
    li r31, 0x0
lbl_fn_80217778_00001424:
    lwz r0, lbl_8087F280
    addi r3, r1, 0xc
    add r26, r0, r31
    bl fn_8005B3CC
    bl fn_800DC288
    addi r27, r27, 0x1
    stfsx f1, r30, r26
    cmpwi r27, 0xa
    addi r31, r31, 0xe8
    blt lbl_fn_80217778_00001424
    addi r30, r30, 0x4
    addi r28, r28, 0x1
    addi r3, r1, 0xc
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_80217778_00001414
lbl_fn_80217778_00001464:
    lwz r3, lbl_8087F518
    mr r4, r29
    bl fn_8046DD20
    lmw r26, 0x648(r1)
    lwz r0, 0x664(r1)
    mtlr r0
    addi r1, r1, 0x660
    blr
}

asm void fn_802178C4(void)
{
    nofralloc
    lfs f0, lbl_80882F2C
    stfs f0, 0x0(r3)
    stfs f0, 0x4(r3)
    stfs f0, 0x8(r3)
    stfs f0, 0xc(r3)
    stfs f0, 0x10(r3)
    stfs f0, 0x14(r3)
    stfs f0, 0x18(r3)
    stfs f0, 0x1c(r3)
    stfs f0, 0x20(r3)
    stfs f0, 0x24(r3)
    stfs f0, 0x28(r3)
    stfs f0, 0x2c(r3)
    stfs f0, 0x30(r3)
    stfs f0, 0x34(r3)
    stfs f0, 0x38(r3)
    stfs f0, 0x3c(r3)
    stfs f0, 0x40(r3)
    stfs f0, 0x44(r3)
    stfs f0, 0x48(r3)
    stfs f0, 0x4c(r3)
    stfs f0, 0x50(r3)
    stfs f0, 0x54(r3)
    stfs f0, 0x58(r3)
    stfs f0, 0x5c(r3)
    stfs f0, 0x60(r3)
    stfs f0, 0x64(r3)
    stfs f0, 0x68(r3)
    stfs f0, 0x6c(r3)
    stfs f0, 0x70(r3)
    stfs f0, 0x74(r3)
    stfs f0, 0x78(r3)
    stfs f0, 0x7c(r3)
    stfs f0, 0x80(r3)
    stfs f0, 0x84(r3)
    stfs f0, 0x88(r3)
    stfs f0, 0x8c(r3)
    stfs f0, 0x90(r3)
    stfs f0, 0x94(r3)
    stfs f0, 0x98(r3)
    stfs f0, 0x9c(r3)
    stfs f0, 0xa0(r3)
    stfs f0, 0xa4(r3)
    stfs f0, 0xa8(r3)
    stfs f0, 0xac(r3)
    stfs f0, 0xb0(r3)
    stfs f0, 0xb4(r3)
    stfs f0, 0xb8(r3)
    stfs f0, 0xbc(r3)
    stfs f0, 0xc0(r3)
    stfs f0, 0xc4(r3)
    stfs f0, 0xc8(r3)
    stfs f0, 0xcc(r3)
    stfs f0, 0xd0(r3)
    stfs f0, 0xd4(r3)
    stfs f0, 0xd8(r3)
    stfs f0, 0xdc(r3)
    stfs f0, 0xe0(r3)
    stfs f0, 0xe4(r3)
    blr
}

asm void fn_802179B4(void)
{
    nofralloc
    li r3, 0xa
    blr
}

asm void fn_802179BC(void)
{
    nofralloc
    cmpwi r3, 0x0
    blt lbl_fn_802179BC_000015B4
    cmpwi r3, 0xa
    bge lbl_fn_802179BC_000015B4
    cmpwi r4, 0x0
    blt lbl_fn_802179BC_000015B4
    cmpwi r4, 0x3a
    bge lbl_fn_802179BC_000015B4
    mulli r0, r3, 0xe8
    lwz r5, lbl_8087F280
    slwi r3, r4, 2
    add r0, r5, r0
    lfsx f1, r3, r0
    blr
lbl_fn_802179BC_000015B4:
    lfs f1, lbl_80882F30
    blr
}

asm void fn_802179FC(void)
{
    nofralloc
    stwu r1, -0x660(r1)
    mflr r0
    lis r3, lbl_807772D0@ha
    li r4, 0x0
    stw r0, 0x664(r1)
    li r0, 0x0
    addi r3, r3, lbl_807772D0@l
    li r5, 0x400
    stmw r27, 0x64c(r1)
    stw r3, 0xc(r1)
    addi r3, r1, 0x1c
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stw r0, 0x63c(r1)
    bl memset
    addi r3, r1, 0x61c
    li r4, 0x0
    li r5, 0x20
    bl memset
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0xc
    addi r4, r4, lbl_807772B0@l
    stw r4, 0xc(r1)
    la r4, lbl_8087D720
    bl fn_8005B6E8
    lwz r0, lbl_8087F288
    cmpwi r0, 0x0
    bne lbl_fn_802179FC_00001910
    lwz r3, lbl_8087F518
    addi r5, r1, 0x8
    lwz r4, lbl_80882F38
    li r6, 0x20
    bl fn_8046DC5C
    lwz r12, 0xc(r1)
    mr r30, r3
    mr r4, r30
    addi r3, r1, 0xc
    lwz r12, 0x8(r12)
    lwz r5, 0x8(r1)
    mtctr r12
    bctrl
    b lbl_fn_802179FC_00001688
lbl_fn_802179FC_00001668:
    addi r3, r1, 0xc
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    extsb. r0, r0
    bne lbl_fn_802179FC_00001688
    lwz r3, lbl_8087F28C
    addi r0, r3, 0x1
    stw r0, lbl_8087F28C
lbl_fn_802179FC_00001688:
    addi r3, r1, 0xc
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_802179FC_00001668
    lwz r29, lbl_8087F28C
    lis r5, lbl_8073FC54@ha
    addi r5, r5, lbl_8073FC54@l
    li r4, 0xc
    mulli r3, r29, 0x14
    li r7, 0x0
    mr r6, r5
    addi r3, r3, 0x10
    bl fn_800846FC
    lis r4, fn_80217D64@ha
    mr r7, r29
    addi r4, r4, fn_80217D64@l
    li r5, 0x0
    li r6, 0x14
    bl fn_80695720
    stw r3, lbl_8087F288
    mr r4, r30
    lwz r12, 0xc(r1)
    addi r3, r1, 0xc
    lwz r5, 0x8(r1)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    li r31, 0x0
    li r29, 0x1
    b lbl_fn_802179FC_00001794
lbl_fn_802179FC_00001700:
    addi r3, r1, 0xc
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    extsb. r0, r0
    bne lbl_fn_802179FC_00001794
    lwz r0, lbl_8087F288
    addi r3, r1, 0xc
    add r28, r0, r31
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x0(r28)
    addi r3, r1, 0xc
    bl fn_8005B3CC
    addi r3, r1, 0xc
    bl fn_8005B3CC
    stb r29, 0x4(r28)
    li r27, 0x1
    lbz r3, 0xb(r28)
    addi r0, r3, 0x1
    stb r0, 0xb(r28)
lbl_fn_802179FC_00001750:
    addi r3, r1, 0xc
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    add r4, r28, r27
    extsb r3, r0
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    stb r0, 0x4(r4)
    beq lbl_fn_802179FC_00001784
    lbz r3, 0xb(r28)
    addi r0, r3, 0x1
    stb r0, 0xb(r28)
lbl_fn_802179FC_00001784:
    addi r27, r27, 0x1
    cmpwi r27, 0x7
    blt lbl_fn_802179FC_00001750
    addi r31, r31, 0x14
lbl_fn_802179FC_00001794:
    addi r3, r1, 0xc
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_802179FC_00001700
    lwz r3, lbl_8087F518
    mr r4, r30
    bl fn_8046DD20
    lwz r3, lbl_8087F518
    addi r5, r1, 0x8
    lwz r4, lbl_80882F3C
    li r6, 0x20
    bl fn_8046DC5C
    lwz r12, 0xc(r1)
    mr r30, r3
    mr r4, r30
    addi r3, r1, 0xc
    lwz r12, 0x8(r12)
    lwz r5, 0x8(r1)
    mtctr r12
    bctrl
    li r29, 0x1
    b lbl_fn_802179FC_000018F4
lbl_fn_802179FC_000017EC:
    addi r3, r1, 0xc
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    extsb. r0, r0
    bne lbl_fn_802179FC_000018F4
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl fn_80684600
    lwz r6, lbl_8087F28C
    lwz r31, lbl_8087F288
    mulli r4, r6, 0x14
    lwz r0, 0x0(r31)
    add r4, r31, r4
    cmpw r3, r0
    lwz r0, -0x14(r4)
    bgt lbl_fn_802179FC_00001830
    b lbl_fn_802179FC_00001888
lbl_fn_802179FC_00001830:
    cmpw r0, r3
    bgt lbl_fn_802179FC_00001848
    subi r0, r6, 0x1
    mulli r0, r0, 0x14
    add r31, r31, r0
    b lbl_fn_802179FC_00001888
lbl_fn_802179FC_00001848:
    subi r0, r6, 0x1
    addi r5, r31, 0x14
    li r4, 0x1
    mtctr r0
    cmpwi r6, 0x1
    ble lbl_fn_802179FC_00001888
lbl_fn_802179FC_00001860:
    lwz r0, 0x0(r5)
    cmpw r0, r3
    ble lbl_fn_802179FC_0000187C
    subi r0, r4, 0x1
    mulli r0, r0, 0x14
    add r31, r31, r0
    b lbl_fn_802179FC_00001888
lbl_fn_802179FC_0000187C:
    addi r5, r5, 0x14
    addi r4, r4, 0x1
    bdnz lbl_fn_802179FC_00001860
lbl_fn_802179FC_00001888:
    cmpwi r31, 0x0
    beq lbl_fn_802179FC_000018F4
    addi r3, r1, 0xc
    bl fn_8005B3CC
    addi r3, r1, 0xc
    bl fn_8005B3CC
    stb r29, 0xc(r31)
    li r27, 0x1
    lbz r3, 0x13(r31)
    addi r0, r3, 0x1
    stb r0, 0x13(r31)
lbl_fn_802179FC_000018B4:
    addi r3, r1, 0xc
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    add r4, r31, r27
    extsb r3, r0
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    stb r0, 0xc(r4)
    beq lbl_fn_802179FC_000018E8
    lbz r3, 0x13(r31)
    addi r0, r3, 0x1
    stb r0, 0x13(r31)
lbl_fn_802179FC_000018E8:
    addi r27, r27, 0x1
    cmpwi r27, 0x7
    blt lbl_fn_802179FC_000018B4
lbl_fn_802179FC_000018F4:
    addi r3, r1, 0xc
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_802179FC_000017EC
    lwz r3, lbl_8087F518
    mr r4, r30
    bl fn_8046DD20
lbl_fn_802179FC_00001910:
    lmw r27, 0x64c(r1)
    lwz r0, 0x664(r1)
    mtlr r0
    addi r1, r1, 0x660
    blr
}

asm void fn_80217D64(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x14
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl memset
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80217D9C(void)
{
    nofralloc
    lwz r6, lbl_8087F28C
    lwz r7, lbl_8087F288
    subi r4, r6, 0x1
    lwz r0, 0x0(r7)
    mulli r5, r4, 0x14
    cmpw r3, r0
    lwzx r0, r7, r5
    bgt lbl_fn_80217D9C_00001984
    mr r3, r7
    blr
lbl_fn_80217D9C_00001984:
    cmpw r0, r3
    bgt lbl_fn_80217D9C_00001994
    add r3, r7, r5
    blr
lbl_fn_80217D9C_00001994:
    addi r5, r7, 0x14
    li r8, 0x1
    mtctr r4
    cmpwi r6, 0x1
    ble lbl_fn_80217D9C_000019D0
lbl_fn_80217D9C_000019A8:
    lwz r0, 0x0(r5)
    cmpw r0, r3
    ble lbl_fn_80217D9C_000019C4
    subi r0, r8, 0x1
    mulli r0, r0, 0x14
    add r3, r7, r0
    blr
lbl_fn_80217D9C_000019C4:
    addi r5, r5, 0x14
    addi r8, r8, 0x1
    bdnz lbl_fn_80217D9C_000019A8
lbl_fn_80217D9C_000019D0:
    mr r3, r7
    blr
}
