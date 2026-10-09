#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_22(void);
extern void _restgpr_24(void);
extern void _savegpr_22(void);
extern void _savegpr_24(void);
extern void dtor_80084684(void);
extern void fn_80013F78(void);
extern void fn_8005B3CC(void);
extern void fn_8005B5F8(void);
extern void fn_8005B6E8(void);
extern void fn_8005B710(void);
extern void fn_8005B8F8(void);
extern void fn_8005B9AC(void);
extern void fn_8006BB6C(void);
extern void fn_8006F420(void);
extern void fn_80084320(void);
extern void fn_800846FC(void);
extern void fn_800DC12C(void);
extern void fn_800DC288(void);
extern void fn_800DC6B4(void);
extern void fn_802091E8(void);
extern void fn_8046DC5C(void);
extern void fn_8046DD20(void);
extern void fn_8068236C(void);
extern void fn_80682428(void);
extern void fn_806846C4(void);
extern void fn_80686A48(void);
extern void fn_80686AF0(void);
extern void fn_806958E0(void);
extern int sprintf(char* str, const char* format, ...);
extern char* strcpy(char* dest, const char* src);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_8073ECD8[];
extern u8 lbl_8073EEB0[];
extern u8 lbl_8073EF10[];
extern u8 lbl_8073EF4C[];
extern u8 lbl_8073F210[];
extern u8 lbl_8073F410[];
extern u8 lbl_8073F4A0[];
extern u8 lbl_807772B0[];
extern u8 lbl_807772D0[];
extern u8 lbl_8077A070[];
extern u8 lbl_8077A090[];
extern u8 lbl_8077A0A8[];

/* Small data declarations */
extern u32 lbl_8087D708;
extern u32 lbl_8087D720;
extern u32 lbl_8087DB30;
extern u32 lbl_8087EEC8;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F1B8;
extern u32 lbl_8087F1BC;
extern u32 lbl_8087F1C0;
extern u32 lbl_8087F1C8;
extern u32 lbl_8087F1CC;
extern u32 lbl_8087F1D0;
extern u32 lbl_8087F1D4;
extern u32 lbl_8087F1D8;
extern u32 lbl_8087F518;
extern u32 lbl_80882E08;
extern u32 lbl_80882E10;
extern u32 lbl_80882E14;
extern u32 lbl_80882E18;
extern u32 lbl_80882E20;
extern u32 lbl_80882E2C;

/* Function declarations */
void fn_8020A360(void);
void fn_8020A3E4(void);
void fn_8020A3EC(void);
void fn_8020A59C(void);
void fn_8020A5D4(void);
void fn_8020A780(void);
void fn_8020A808(void);
void fn_8020A81C(void);
void fn_8020A888(void);
void fn_8020A90C(void);
void fn_8020AFF4(void);
void fn_8020B1E0(void);
void fn_8020B208(void);
void fn_8020B27C(void);
void fn_8020B2BC(void);
void fn_8020BAC0(void);
void fn_8020BACC(void);
void fn_8020BB0C(void);

asm void fn_8020A360(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_807772D0@ha
    li r5, 0x400
    stw r0, 0x14(r1)
    li r0, 0x0
    addi r4, r4, lbl_807772D0@l
    stw r31, 0xc(r1)
    mr r31, r3
    stw r4, 0x0(r3)
    li r4, 0x0
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
    stw r0, 0x630(r3)
    addi r3, r3, 0x10
    bl memset
    addi r3, r31, 0x610
    li r4, 0x0
    li r5, 0x20
    bl memset
    lis r4, lbl_807772B0@ha
    mr r3, r31
    addi r4, r4, lbl_807772B0@l
    stw r4, 0x0(r31)
    la r4, lbl_8087D720
    bl fn_8005B6E8
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8020A3E4(void)
{
    nofralloc
    lwz r3, lbl_8087F518
    blr
}

asm void fn_8020A3EC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lfs f1, lbl_80882E08
    li r5, 0x0
    stw r0, 0x24(r1)
    li r4, 0x1
    lfs f0, lbl_80882E10
    li r0, 0x6
    stw r31, 0x1c(r1)
    addi r31, r3, 0x108
    stw r30, 0x18(r1)
    addi r30, r3, 0xe8
    stw r29, 0x14(r1)
    mr r29, r3
    stfs f1, 0x0(r3)
    stfs f1, 0x4(r3)
    stfs f1, 0x8(r3)
    stfs f1, 0xc(r3)
    stfs f0, 0x10(r3)
    stfs f0, 0x14(r3)
    stfs f1, 0x18(r3)
    stfs f1, 0x1c(r3)
    stw r5, 0x20(r3)
    stw r5, 0x24(r3)
    stfs f1, 0x28(r3)
    stfs f1, 0x2c(r3)
    stw r5, 0x30(r3)
    stw r5, 0x34(r3)
    stfs f1, 0x38(r3)
    stfs f1, 0x54(r3)
    stfs f1, 0x3c(r3)
    stfs f1, 0x58(r3)
    stfs f1, 0x40(r3)
    stfs f1, 0x5c(r3)
    stfs f1, 0x44(r3)
    stfs f1, 0x60(r3)
    stfs f1, 0x48(r3)
    stfs f1, 0x64(r3)
    stfs f1, 0x4c(r3)
    stfs f1, 0x68(r3)
    stfs f1, 0x50(r3)
    stfs f1, 0x6c(r3)
    stw r4, 0x78(r3)
    stw r5, 0x7c(r3)
    stw r5, 0x80(r3)
    stw r5, 0x84(r3)
    stw r5, 0x88(r3)
    stfs f1, 0x8c(r3)
    stfs f1, 0x90(r3)
    stw r5, 0x94(r3)
    stw r5, 0x98(r3)
    stw r5, 0x9c(r3)
    stw r5, 0xc0(r3)
    stw r5, 0xc4(r3)
    stw r0, 0xc8(r3)
    stw r5, 0xcc(r3)
    stw r5, 0xd0(r3)
lbl_fn_8020A3EC_00000170:
    mr r3, r30
    li r4, 0x0
    li r5, 0x8
    bl memset
    addi r30, r30, 0x8
    cmplw r30, r31
    blt lbl_fn_8020A3EC_00000170
    lfs f0, lbl_80882E10
    li r6, 0x0
    lfs f1, lbl_80882E14
    li r0, 0x64
    stb r6, 0x120(r29)
    addi r3, r29, 0xd4
    li r4, 0x0
    li r5, 0x4
    stb r6, 0x121(r29)
    stb r6, 0x122(r29)
    stb r6, 0x123(r29)
    stfs f1, 0x124(r29)
    stw r0, 0x128(r29)
    stw r6, 0x12c(r29)
    stw r6, 0x130(r29)
    stfs f0, 0x134(r29)
    stfs f0, 0x138(r29)
    bl memset
    addi r3, r29, 0xd8
    li r4, 0x0
    li r5, 0x10
    bl memset
    addi r3, r29, 0x108
    li r4, 0x0
    li r5, 0x14
    bl memset
    addi r30, r29, 0xe8
    li r31, 0x0
lbl_fn_8020A3EC_000001FC:
    mr r3, r30
    li r4, 0x0
    li r5, 0x8
    bl memset
    addi r31, r31, 0x1
    addi r30, r30, 0x8
    cmpwi r31, 0x4
    blt lbl_fn_8020A3EC_000001FC
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8020A59C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x8
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

asm void fn_8020A5D4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r3
    lwz r0, 0x0(r4)
    srwi. r6, r0, 31
    bne lbl_fn_8020A5D4_000002AC
    lbz r0, 0x0(r4)
    addi r7, r4, 0x1
    clrlwi r0, r0, 25
    b lbl_fn_8020A5D4_000002B4
lbl_fn_8020A5D4_000002AC:
    lwz r7, 0x8(r4)
    lwz r0, 0x4(r4)
lbl_fn_8020A5D4_000002B4:
    cmpwi r6, 0x0
    add r0, r7, r0
    bne lbl_fn_8020A5D4_000002C8
    addi r6, r4, 0x1
    b lbl_fn_8020A5D4_000002CC
lbl_fn_8020A5D4_000002C8:
    lwz r6, 0x8(r4)
lbl_fn_8020A5D4_000002CC:
    lwz r4, 0x8(r3)
    stw r6, 0x0(r3)
    srwi. r6, r4, 31
    stw r0, 0x4(r3)
    bne lbl_fn_8020A5D4_00000304
    lwz r4, 0x0(r5)
    srwi. r0, r4, 31
    bne lbl_fn_8020A5D4_00000304
    lwz r0, 0x4(r5)
    stw r0, 0xc(r3)
    stw r4, 0x8(r3)
    lwz r0, 0x8(r5)
    stw r0, 0x10(r3)
    b lbl_fn_8020A5D4_00000360
lbl_fn_8020A5D4_00000304:
    cmpwi r6, 0x0
    beq lbl_fn_8020A5D4_00000314
    lwz r7, 0xc(r3)
    b lbl_fn_8020A5D4_0000031C
lbl_fn_8020A5D4_00000314:
    lbz r0, 0x8(r3)
    clrlwi r7, r0, 25
lbl_fn_8020A5D4_0000031C:
    lwz r0, 0x0(r5)
    srwi. r0, r0, 31
    bne lbl_fn_8020A5D4_00000338
    lbz r0, 0x0(r5)
    addi r6, r5, 0x1
    clrlwi r4, r0, 25
    b lbl_fn_8020A5D4_00000340
lbl_fn_8020A5D4_00000338:
    lwz r6, 0x8(r5)
    lwz r4, 0x4(r5)
lbl_fn_8020A5D4_00000340:
    lbz r0, 0x14(r1)
    mr r5, r7
    stb r0, 0x10(r1)
    add r7, r6, r4
    addi r8, r1, 0x10
    li r4, 0x0
    addi r3, r3, 0x8
    bl fn_80013F78
lbl_fn_8020A5D4_00000360:
    lwz r0, 0x14(r30)
    addi r3, r30, 0x14
    srwi. r5, r0, 31
    bne lbl_fn_8020A5D4_00000394
    lwz r4, 0xc(r31)
    srwi. r0, r4, 31
    bne lbl_fn_8020A5D4_00000394
    lwz r0, 0x10(r31)
    stw r0, 0x4(r3)
    stw r4, 0x0(r3)
    lwz r0, 0x14(r31)
    stw r0, 0x8(r3)
    b lbl_fn_8020A5D4_000003E8
lbl_fn_8020A5D4_00000394:
    cmpwi r5, 0x0
    beq lbl_fn_8020A5D4_000003A4
    lwz r5, 0x4(r3)
    b lbl_fn_8020A5D4_000003AC
lbl_fn_8020A5D4_000003A4:
    lbz r0, 0x0(r3)
    clrlwi r5, r0, 25
lbl_fn_8020A5D4_000003AC:
    lwz r0, 0xc(r31)
    srwi. r0, r0, 31
    bne lbl_fn_8020A5D4_000003C8
    lbz r0, 0xc(r31)
    addi r6, r31, 0xd
    clrlwi r4, r0, 25
    b lbl_fn_8020A5D4_000003D0
lbl_fn_8020A5D4_000003C8:
    lwz r6, 0x14(r31)
    lwz r4, 0x10(r31)
lbl_fn_8020A5D4_000003D0:
    lbz r0, 0xc(r1)
    add r7, r6, r4
    stb r0, 0x8(r1)
    addi r8, r1, 0x8
    li r4, 0x0
    bl fn_80013F78
lbl_fn_8020A5D4_000003E8:
    lbz r0, 0x18(r31)
    stb r0, 0x20(r30)
    lbz r0, 0x19(r31)
    stb r0, 0x21(r30)
    lwz r0, 0x1c(r31)
    stw r0, 0x24(r30)
    lbz r0, 0x20(r31)
    stb r0, 0x28(r30)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8020A780(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r0, 0x0(r3)
    srwi. r0, r0, 31
    bne lbl_fn_8020A780_00000458
    lbz r0, 0x0(r3)
    clrlwi r31, r0, 25
    b lbl_fn_8020A780_0000045C
lbl_fn_8020A780_00000458:
    lwz r31, 0x4(r3)
lbl_fn_8020A780_0000045C:
    lbz r0, 0x8(r1)
    mr r3, r30
    stb r0, 0xc(r1)
    bl strlen
    mr r0, r3
    mr r3, r29
    mr r5, r31
    mr r6, r30
    add r7, r30, r0
    addi r8, r1, 0xc
    li r4, 0x0
    bl fn_80013F78
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8020A808(void)
{
    nofralloc
    lwz r5, 0x0(r4)
    lwz r0, 0x4(r4)
    stw r5, 0x0(r3)
    stw r0, 0x4(r3)
    blr
}

asm void fn_8020A81C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    beq lbl_fn_8020A81C_00000514
    bl fn_800DC6B4
    lwz r5, lbl_8087F1B8
    li r6, 0x0
    lwz r0, lbl_8087F1BC
    mr r4, r5
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8020A81C_00000514
lbl_fn_8020A81C_000004F0:
    lwz r0, 0xc0(r4)
    cmplw r3, r0
    bne lbl_fn_8020A81C_00000508
    mulli r0, r6, 0x13c
    add r3, r5, r0
    b lbl_fn_8020A81C_00000518
lbl_fn_8020A81C_00000508:
    addi r4, r4, 0x13c
    addi r6, r6, 0x1
    bdnz lbl_fn_8020A81C_000004F0
lbl_fn_8020A81C_00000514:
    lwz r3, lbl_8087F1B8
lbl_fn_8020A81C_00000518:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8020A888(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_802091E8
    cmpwi r3, 0x0
    beq lbl_fn_8020A888_00000598
    lwz r3, 0x14(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8020A888_00000590
    bl fn_800DC6B4
    lwz r6, lbl_8087F1B8
    li r4, 0x0
    lwz r0, lbl_8087F1BC
    mr r5, r6
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8020A888_00000590
lbl_fn_8020A888_0000056C:
    lwz r0, 0xc0(r5)
    cmplw r3, r0
    bne lbl_fn_8020A888_00000584
    mulli r0, r4, 0x13c
    add r3, r6, r0
    b lbl_fn_8020A888_0000059C
lbl_fn_8020A888_00000584:
    addi r5, r5, 0x13c
    addi r4, r4, 0x1
    bdnz lbl_fn_8020A888_0000056C
lbl_fn_8020A888_00000590:
    lwz r3, lbl_8087F1B8
    b lbl_fn_8020A888_0000059C
lbl_fn_8020A888_00000598:
    li r3, 0x0
lbl_fn_8020A888_0000059C:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8020A90C(void)
{
    nofralloc
    stwu r1, -0x660(r1)
    mflr r0
    li r6, 0x20
    stw r0, 0x664(r1)
    addi r5, r1, 0x8
    stfd f31, 0x650(r1)
    psq_st f31, 0x658(r1), 0, 0
    stw r31, 0x64c(r1)
    li r31, 0x0
    stw r30, 0x648(r1)
    stw r29, 0x644(r1)
    lis r29, lbl_8073ECD8@ha
    addi r4, r29, lbl_8073ECD8@l
    stw r28, 0x640(r1)
    stw r31, 0x8(r1)
    lwz r3, lbl_8087F518
    bl fn_8046DC5C
    lis r4, lbl_807772D0@ha
    mr r30, r3
    addi r4, r4, lbl_807772D0@l
    stw r4, 0xc(r1)
    lwz r28, 0x8(r1)
    addi r3, r1, 0x1c
    stw r31, 0x10(r1)
    li r4, 0x0
    li r5, 0x400
    stw r31, 0x14(r1)
    stw r31, 0x18(r1)
    stw r31, 0x63c(r1)
    bl memset
    addi r3, r1, 0x61c
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0xc(r1)
    mr r4, r30
    mr r5, r28
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
    lfs f31, lbl_80882E18
    addi r31, r29, lbl_8073ECD8@l
    b lbl_fn_8020A90C_00000C50
lbl_fn_8020A90C_00000674:
    addi r3, r1, 0xc
    bl fn_8005B3CC
    mr r28, r3
    addi r4, r31, 0x16
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8020A90C_000006A8
    lwz r29, lbl_8087F0A8
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x4e4(r29)
    b lbl_fn_8020A90C_00000700
lbl_fn_8020A90C_000006A8:
    mr r3, r28
    addi r4, r31, 0x28
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8020A90C_000006D4
    lwz r29, lbl_8087F0A8
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x4e0(r29)
    b lbl_fn_8020A90C_00000700
lbl_fn_8020A90C_000006D4:
    mr r3, r28
    addi r4, r31, 0x39
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8020A90C_00000700
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl fn_800DC288
    fmuls f0, f31, f1
    lwz r3, lbl_8087F0A8
    stfs f0, 0x4e8(r3)
lbl_fn_8020A90C_00000700:
    mr r3, r28
    addi r4, r31, 0x42
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8020A90C_00000728
    lwz r29, lbl_8087F0A8
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x4ec(r29)
lbl_fn_8020A90C_00000728:
    mr r3, r28
    addi r4, r31, 0x4b
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8020A90C_00000754
    lwz r29, lbl_8087F0A8
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x4f0(r29)
    b lbl_fn_8020A90C_00000C50
lbl_fn_8020A90C_00000754:
    mr r3, r28
    addi r4, r31, 0x53
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8020A90C_00000780
    lwz r29, lbl_8087F0A8
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x4f4(r29)
    b lbl_fn_8020A90C_00000C50
lbl_fn_8020A90C_00000780:
    mr r3, r28
    addi r4, r31, 0x61
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8020A90C_000007B0
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl fn_800DC288
    fmuls f0, f31, f1
    lwz r3, lbl_8087F0A8
    stfs f0, 0x4f8(r3)
    b lbl_fn_8020A90C_00000C50
lbl_fn_8020A90C_000007B0:
    mr r3, r28
    addi r4, r31, 0x6a
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8020A90C_000007DC
    lwz r29, lbl_8087F0A8
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x4fc(r29)
    b lbl_fn_8020A90C_00000C50
lbl_fn_8020A90C_000007DC:
    mr r3, r28
    addi r4, r31, 0x74
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8020A90C_00000808
    lwz r29, lbl_8087F0A8
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x500(r29)
    b lbl_fn_8020A90C_00000C50
lbl_fn_8020A90C_00000808:
    mr r3, r28
    addi r4, r31, 0x7d
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8020A90C_00000834
    lwz r29, lbl_8087F0A8
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x504(r29)
    b lbl_fn_8020A90C_00000C50
lbl_fn_8020A90C_00000834:
    mr r3, r28
    addi r4, r31, 0x87
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8020A90C_00000860
    lwz r29, lbl_8087F0A8
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x508(r29)
    b lbl_fn_8020A90C_00000C50
lbl_fn_8020A90C_00000860:
    mr r3, r28
    addi r4, r31, 0x93
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8020A90C_0000088C
    lwz r29, lbl_8087F0A8
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x514(r29)
    b lbl_fn_8020A90C_00000C50
lbl_fn_8020A90C_0000088C:
    mr r3, r28
    addi r4, r31, 0x9e
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8020A90C_000008B8
    lwz r29, lbl_8087F0A8
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x50c(r29)
    b lbl_fn_8020A90C_00000C50
lbl_fn_8020A90C_000008B8:
    mr r3, r28
    addi r4, r31, 0xa7
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8020A90C_000008E4
    lwz r29, lbl_8087F0A8
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x510(r29)
    b lbl_fn_8020A90C_00000C50
lbl_fn_8020A90C_000008E4:
    mr r3, r28
    addi r4, r31, 0xb0
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8020A90C_00000910
    lwz r29, lbl_8087F0A8
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x51c(r29)
    b lbl_fn_8020A90C_00000C50
lbl_fn_8020A90C_00000910:
    mr r3, r28
    addi r4, r31, 0xb9
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8020A90C_0000093C
    lwz r29, lbl_8087F0A8
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x518(r29)
    b lbl_fn_8020A90C_00000C50
lbl_fn_8020A90C_0000093C:
    mr r3, r28
    addi r4, r31, 0xc4
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8020A90C_00000968
    lwz r29, lbl_8087F0A8
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x520(r29)
    b lbl_fn_8020A90C_00000C50
lbl_fn_8020A90C_00000968:
    mr r3, r28
    addi r4, r31, 0xd0
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8020A90C_00000994
    lwz r29, lbl_8087F0A8
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x524(r29)
    b lbl_fn_8020A90C_00000C50
lbl_fn_8020A90C_00000994:
    mr r3, r28
    addi r4, r31, 0xe2
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8020A90C_000009C0
    lwz r29, lbl_8087F0A8
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x528(r29)
    b lbl_fn_8020A90C_00000C50
lbl_fn_8020A90C_000009C0:
    mr r3, r28
    addi r4, r31, 0xef
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8020A90C_000009EC
    lwz r29, lbl_8087F0A8
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x540(r29)
    b lbl_fn_8020A90C_00000C50
lbl_fn_8020A90C_000009EC:
    mr r3, r28
    addi r4, r31, 0xfb
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8020A90C_00000A18
    lwz r29, lbl_8087F0A8
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x544(r29)
    b lbl_fn_8020A90C_00000C50
lbl_fn_8020A90C_00000A18:
    mr r3, r28
    addi r4, r31, 0x106
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8020A90C_00000A44
    lwz r29, lbl_8087F0A8
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x548(r29)
    b lbl_fn_8020A90C_00000C50
lbl_fn_8020A90C_00000A44:
    mr r3, r28
    addi r4, r31, 0x111
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8020A90C_00000A70
    lwz r29, lbl_8087F0A8
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x550(r29)
    b lbl_fn_8020A90C_00000C50
lbl_fn_8020A90C_00000A70:
    mr r3, r28
    addi r4, r31, 0x123
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8020A90C_00000A9C
    lwz r29, lbl_8087F0A8
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x554(r29)
    b lbl_fn_8020A90C_00000C50
lbl_fn_8020A90C_00000A9C:
    mr r3, r28
    addi r4, r31, 0x137
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8020A90C_00000AC8
    lwz r29, lbl_8087F0A8
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x558(r29)
    b lbl_fn_8020A90C_00000C50
lbl_fn_8020A90C_00000AC8:
    mr r3, r28
    addi r4, r31, 0x148
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8020A90C_00000AF4
    lwz r29, lbl_8087F0A8
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x55c(r29)
    b lbl_fn_8020A90C_00000C50
lbl_fn_8020A90C_00000AF4:
    mr r3, r28
    addi r4, r31, 0x159
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8020A90C_00000B20
    lwz r29, lbl_8087F0A8
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x560(r29)
    b lbl_fn_8020A90C_00000C50
lbl_fn_8020A90C_00000B20:
    mr r3, r28
    addi r4, r31, 0x16b
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8020A90C_00000B4C
    lwz r29, lbl_8087F0A8
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x564(r29)
    b lbl_fn_8020A90C_00000C50
lbl_fn_8020A90C_00000B4C:
    mr r3, r28
    addi r4, r31, 0x17b
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8020A90C_00000B78
    lwz r29, lbl_8087F0A8
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x568(r29)
    b lbl_fn_8020A90C_00000C50
lbl_fn_8020A90C_00000B78:
    mr r3, r28
    addi r4, r31, 0x187
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8020A90C_00000BA4
    lwz r29, lbl_8087F0A8
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x54c(r29)
    b lbl_fn_8020A90C_00000C50
lbl_fn_8020A90C_00000BA4:
    mr r3, r28
    addi r4, r31, 0x196
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8020A90C_00000BD0
    lwz r29, lbl_8087F0A8
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x574(r29)
    b lbl_fn_8020A90C_00000C50
lbl_fn_8020A90C_00000BD0:
    mr r3, r28
    addi r4, r31, 0x1a5
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8020A90C_00000BFC
    lwz r29, lbl_8087F0A8
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x578(r29)
    b lbl_fn_8020A90C_00000C50
lbl_fn_8020A90C_00000BFC:
    mr r3, r28
    addi r4, r31, 0x1ba
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8020A90C_00000C28
    lwz r29, lbl_8087F0A8
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x57c(r29)
    b lbl_fn_8020A90C_00000C50
lbl_fn_8020A90C_00000C28:
    mr r3, r28
    addi r4, r31, 0x1c6
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8020A90C_00000C50
    lwz r29, lbl_8087F0A8
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x580(r29)
lbl_fn_8020A90C_00000C50:
    addi r3, r1, 0xc
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_8020A90C_00000674
    mr r3, r30
    li r4, 0x0
    bl fn_8006BB6C
    lwz r0, 0x664(r1)
    psq_l f31, 0x658(r1), 0, 0
    lfd f31, 0x650(r1)
    lwz r31, 0x64c(r1)
    lwz r30, 0x648(r1)
    lwz r29, 0x644(r1)
    lwz r28, 0x640(r1)
    mtlr r0
    addi r1, r1, 0x660
    blr
}

asm void fn_8020AFF4(void)
{
    nofralloc
    stwu r1, -0x660(r1)
    mflr r0
    lis r5, lbl_807772D0@ha
    li r4, 0x0
    stw r0, 0x664(r1)
    li r0, 0x0
    addi r5, r5, lbl_807772D0@l
    addi r3, r1, 0x1c
    stmw r27, 0x64c(r1)
    stw r5, 0xc(r1)
    li r5, 0x400
    stw r0, 0x8(r1)
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
    lwz r0, lbl_8087F1C0
    cmpwi r0, 0x0
    bne lbl_fn_8020AFF4_00000E6C
    lis r5, lbl_8073EF4C@ha
    li r3, 0x1080
    addi r5, r5, lbl_8073EF4C@l
    li r4, 0x1
    mr r6, r5
    li r7, 0x0
    bl fn_800846FC
    stw r3, lbl_8087F1C0
    li r29, 0x0
    li r31, 0x0
lbl_fn_8020AFF4_00000D34:
    lwz r0, lbl_8087F1C0
    li r27, 0x0
    add r28, r0, r31
    mr r30, r28
lbl_fn_8020AFF4_00000D44:
    mr r3, r30
    li r4, 0x0
    li r5, 0x20
    bl memset
    addi r27, r27, 0x1
    addi r30, r30, 0x20
    cmpwi r27, 0x3
    blt lbl_fn_8020AFF4_00000D44
    mr r3, r28
    li r4, 0x0
    li r5, 0x20
    bl memset
    addi r29, r29, 0x1
    addi r31, r31, 0x80
    cmpwi r29, 0x21
    blt lbl_fn_8020AFF4_00000D34
    lwz r3, lbl_8087F518
    addi r5, r1, 0x8
    lwz r4, lbl_80882E20
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
    b lbl_fn_8020AFF4_00000E50
lbl_fn_8020AFF4_00000DBC:
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl fn_800DC12C
    mr r31, r3
    addi r3, r1, 0xc
    bl fn_8005B3CC
    cmpwi r31, 0x0
    blt lbl_fn_8020AFF4_00000E50
    cmpwi r31, 0x21
    bge lbl_fn_8020AFF4_00000E50
    lwz r4, lbl_8087F1C0
    slwi r0, r31, 7
    addi r3, r1, 0xc
    add r27, r4, r0
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r27, 0x60
    li r5, 0x20
    bl fn_8068236C
    addi r3, r1, 0xc
    bl fn_8005B3CC
    mr r4, r3
    mr r3, r27
    li r5, 0x20
    bl fn_8068236C
    addi r3, r1, 0xc
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r27, 0x20
    li r5, 0x20
    bl fn_8068236C
    addi r3, r1, 0xc
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r27, 0x40
    li r5, 0x20
    bl fn_8068236C
lbl_fn_8020AFF4_00000E50:
    addi r3, r1, 0xc
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_8020AFF4_00000DBC
    lwz r3, lbl_8087F518
    mr r4, r30
    bl fn_8046DD20
lbl_fn_8020AFF4_00000E6C:
    lmw r27, 0x64c(r1)
    lwz r0, 0x664(r1)
    mtlr r0
    addi r1, r1, 0x660
    blr
}

asm void fn_8020B1E0(void)
{
    nofralloc
    cmpwi r3, 0x0
    blt lbl_fn_8020B1E0_00000E90
    cmpwi r3, 0x21
    blt lbl_fn_8020B1E0_00000E98
lbl_fn_8020B1E0_00000E90:
    li r3, 0x0
    blr
lbl_fn_8020B1E0_00000E98:
    lwz r4, lbl_8087F1C0
    slwi r0, r3, 7
    add r3, r4, r0
    blr
}

asm void fn_8020B208(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_8073EEB0@ha
    addi r31, r31, lbl_8073EEB0@l
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    mr r29, r3
lbl_fn_8020B208_00000ED0:
    mr r3, r31
    mr r4, r29
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8020B208_00000EEC
    mr r3, r30
    b lbl_fn_8020B208_00000F00
lbl_fn_8020B208_00000EEC:
    addi r30, r30, 0x1
    addi r31, r31, 0x20
    cmpwi r30, 0x3
    blt lbl_fn_8020B208_00000ED0
    li r3, 0x0
lbl_fn_8020B208_00000F00:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8020B27C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_8073EF10@ha
    mr r4, r3
    stw r0, 0x14(r1)
    addi r3, r5, lbl_8073EF10@l
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8020B27C_00000F48
    li r3, 0x0
    b lbl_fn_8020B27C_00000F4C
lbl_fn_8020B27C_00000F48:
    li r3, 0x0
lbl_fn_8020B27C_00000F4C:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8020B2BC(void)
{
    nofralloc
    stwu r1, -0x2990(r1)
    mflr r0
    stw r0, 0x2994(r1)
    li r0, 0x2988
    addi r11, r1, 0x2980
    stfd f31, 0x2980(r1)
    psq_stx f31, r1, r0, 0, 0
    bl _savegpr_24
    lwz r0, lbl_8087F1D4
    cmpwi r0, 0x0
    bne lbl_fn_8020B2BC_00000FA8
    lis r5, lbl_8073F4A0@ha
    li r3, 0x100
    addi r5, r5, lbl_8073F4A0@l
    li r4, 0x1
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    stw r3, lbl_8087F1D4
lbl_fn_8020B2BC_00000FA8:
    lwz r0, lbl_8087F1C8
    cmpwi r0, 0x0
    bne lbl_fn_8020B2BC_00000FFC
    lis r5, lbl_8073F4A0@ha
    li r3, 0x1500
    addi r5, r5, lbl_8073F4A0@l
    li r4, 0x1
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r28, r3
    beq lbl_fn_8020B2BC_00000FF8
    lis r4, fn_8020BAC0@ha
    lis r5, fn_8020BACC@ha
    addi r4, r4, fn_8020BAC0@l
    li r6, 0x54
    addi r5, r5, fn_8020BACC@l
    li r7, 0x40
    bl fn_806958E0
lbl_fn_8020B2BC_00000FF8:
    stw r28, lbl_8087F1C8
lbl_fn_8020B2BC_00000FFC:
    lis r28, lbl_8073F4A0@ha
    addi r3, r1, 0x348
    addi r4, r28, lbl_8073F4A0@l
    addi r4, r4, 0x1
    crclr 6
    bl sprintf
    lwz r3, lbl_8087F518
    addi r4, r1, 0x348
    addi r5, r1, 0x14
    li r6, 0x20
    bl fn_8046DC5C
    lis r4, lbl_807772D0@ha
    li r31, 0x0
    addi r4, r4, lbl_807772D0@l
    stw r4, 0x2324(r1)
    mr r26, r3
    lwz r29, 0x14(r1)
    stw r31, 0x2328(r1)
    addi r3, r1, 0x2334
    li r4, 0x0
    li r5, 0x400
    stw r31, 0x232c(r1)
    stw r31, 0x2330(r1)
    stw r31, 0x2954(r1)
    bl memset
    addi r3, r1, 0x2934
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x2324(r1)
    mr r4, r26
    mr r5, r29
    addi r3, r1, 0x2324
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0x2324
    addi r4, r4, lbl_807772B0@l
    stw r4, 0x2324(r1)
    la r4, lbl_8087D708
    bl fn_8005B6E8
    lfs f31, lbl_80882E2C
    lis r29, lbl_8073F210@ha
    b lbl_fn_8020B2BC_000011B4
lbl_fn_8020B2BC_000010B0:
    addi r3, r1, 0x2324
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    mr r27, r3
    extsb r0, r0
    cmpwi r0, 0x3b
    beq lbl_fn_8020B2BC_000011B4
    cmpwi r0, 0x23
    beq lbl_fn_8020B2BC_000011B4
    addi r4, r28, lbl_8073F4A0@l
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_8020B2BC_000011B4
    mr r4, r27
    addi r3, r1, 0x30
    bl strcpy
    addi r3, r1, 0x2324
    bl fn_8005B3CC
    bl fn_800DC12C
    mr r30, r3
    addi r27, r29, lbl_8073F210@l
    li r25, -0x1
    li r24, 0x0
lbl_fn_8020B2BC_0000110C:
    lwz r4, 0x0(r27)
    addi r3, r1, 0x30
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8020B2BC_00001128
    mr r25, r24
    b lbl_fn_8020B2BC_00001138
lbl_fn_8020B2BC_00001128:
    addi r24, r24, 0x1
    addi r27, r27, 0x4
    cmpwi r24, 0x40
    blt lbl_fn_8020B2BC_0000110C
lbl_fn_8020B2BC_00001138:
    cmpwi r25, 0x0
    blt lbl_fn_8020B2BC_000011B4
    lwz r4, lbl_8087F1D4
    slwi r0, r30, 2
    stfs f31, 0x44(r1)
    addi r3, r1, 0x2324
    stwx r25, r4, r0
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x38(r1)
    addi r3, r1, 0x2324
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x3c(r1)
    addi r3, r1, 0x2324
    bl fn_8005B3CC
    bl fn_800DC288
    mulli r4, r25, 0x54
    lwz r0, lbl_8087F1C8
    lfs f0, 0x38(r1)
    frsp f2, f1
    lfs f3, 0x3c(r1)
    add r3, r0, r4
    stfs f0, 0x4(r3)
    frsp f0, f31
    stfs f3, 0x8(r3)
    stfs f2, 0xc(r3)
    stfs f0, 0x10(r3)
    lwz r3, lbl_8087F1C8
    stfs f1, 0x40(r1)
    stwx r31, r3, r4
lbl_fn_8020B2BC_000011B4:
    addi r3, r1, 0x2324
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_8020B2BC_000010B0
    lwz r3, lbl_8087F518
    mr r4, r26
    bl fn_8046DD20
    lis r4, lbl_8073F4A0@ha
    addi r3, r1, 0x248
    addi r4, r4, lbl_8073F4A0@l
    addi r4, r4, 0x32
    crclr 6
    bl sprintf
    lwz r3, lbl_8087F518
    addi r4, r1, 0x248
    addi r5, r1, 0x10
    li r6, 0x20
    bl fn_8046DC5C
    lwz r5, 0x10(r1)
    li r0, 0x0
    lis r4, lbl_8077A090@ha
    mr r24, r3
    srwi r3, r5, 31
    stw r0, 0x16d4(r1)
    add r3, r3, r5
    addi r4, r4, lbl_8077A090@l
    stw r4, 0x16d0(r1)
    srawi r29, r3, 1
    addi r28, r1, 0x16d0
    addi r3, r1, 0x16e0
    stw r0, 0x16d8(r1)
    li r4, 0x0
    li r5, 0x800
    stw r0, 0x16dc(r1)
    stw r0, 0x2320(r1)
    bl memset
    addi r3, r1, 0x22e0
    li r4, 0x0
    li r5, 0x40
    bl memset
    cmpwi r29, 0x0
    mr r5, r29
    beq lbl_fn_8020B2BC_00001264
    subi r5, r29, 0x1
lbl_fn_8020B2BC_00001264:
    cmpwi r29, 0x0
    mr r3, r28
    beq lbl_fn_8020B2BC_00001278
    addi r4, r24, 0x2
    b lbl_fn_8020B2BC_0000127C
lbl_fn_8020B2BC_00001278:
    mr r4, r24
lbl_fn_8020B2BC_0000127C:
    lwz r12, 0x0(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r3, lbl_8077A070@ha
    lis r4, lbl_8077A0A8@ha
    addi r3, r3, lbl_8077A070@l
    stw r3, 0x16d0(r1)
    mr r3, r28
    addi r4, r4, lbl_8077A0A8@l
    bl fn_8005B9AC
    lis r29, lbl_8073F210@ha
    b lbl_fn_8020B2BC_00001370
lbl_fn_8020B2BC_000012B0:
    addi r3, r1, 0x16d0
    bl fn_8005B710
    lhz r0, 0x0(r3)
    mr r25, r3
    cmplwi r0, 0x3b
    beq lbl_fn_8020B2BC_00001370
    cmplwi r0, 0x23
    beq lbl_fn_8020B2BC_00001370
    la r4, lbl_8087DB30
    bl fn_80686AF0
    cmpwi r3, 0x0
    beq lbl_fn_8020B2BC_00001370
    lwz r3, lbl_8087EEC8
    mr r5, r25
    addi r4, r1, 0x28
    li r6, 0x8
    bl fn_8006F420
    addi r28, r29, lbl_8073F210@l
    li r25, -0x1
    li r26, 0x0
lbl_fn_8020B2BC_00001300:
    lwz r4, 0x0(r28)
    addi r3, r1, 0x28
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8020B2BC_0000131C
    mr r25, r26
    b lbl_fn_8020B2BC_0000132C
lbl_fn_8020B2BC_0000131C:
    addi r26, r26, 0x1
    addi r28, r28, 0x4
    cmpwi r26, 0x40
    blt lbl_fn_8020B2BC_00001300
lbl_fn_8020B2BC_0000132C:
    cmpwi r25, 0x0
    blt lbl_fn_8020B2BC_00001370
    addi r3, r1, 0x16d0
    bl fn_8005B710
    mulli r0, r25, 0x54
    lwz r4, lbl_8087F1C8
    mr r30, r3
    add r28, r4, r0
    addi r28, r28, 0x14
    cmplw r3, r28
    beq lbl_fn_8020B2BC_00001370
    bl fn_80686A48
    mr r5, r3
    mr r3, r28
    mr r4, r30
    addi r5, r5, 0x1
    bl fn_806846C4
lbl_fn_8020B2BC_00001370:
    addi r3, r1, 0x16d0
    bl fn_8005B8F8
    cmpwi r3, 0x0
    bne lbl_fn_8020B2BC_000012B0
    lwz r3, lbl_8087F518
    mr r4, r24
    bl fn_8046DD20
    lwz r0, lbl_8087F1D8
    cmpwi r0, 0x0
    bne lbl_fn_8020B2BC_000013B8
    lis r5, lbl_8073F4A0@ha
    li r3, 0x80
    addi r5, r5, lbl_8073F4A0@l
    li r4, 0x1
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    stw r3, lbl_8087F1D8
lbl_fn_8020B2BC_000013B8:
    lwz r0, lbl_8087F1CC
    cmpwi r0, 0x0
    bne lbl_fn_8020B2BC_0000140C
    lis r5, lbl_8073F4A0@ha
    li r3, 0xa80
    addi r5, r5, lbl_8073F4A0@l
    li r4, 0x1
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r28, r3
    beq lbl_fn_8020B2BC_00001408
    lis r4, fn_8020BAC0@ha
    lis r5, fn_8020BACC@ha
    addi r4, r4, fn_8020BAC0@l
    li r6, 0x54
    addi r5, r5, fn_8020BACC@l
    li r7, 0x20
    bl fn_806958E0
lbl_fn_8020B2BC_00001408:
    stw r28, lbl_8087F1CC
lbl_fn_8020B2BC_0000140C:
    lis r29, lbl_8073F4A0@ha
    addi r3, r1, 0x148
    addi r4, r29, lbl_8073F4A0@l
    addi r4, r4, 0x68
    crclr 6
    bl sprintf
    lwz r3, lbl_8087F518
    addi r4, r1, 0x148
    addi r5, r1, 0xc
    li r6, 0x20
    bl fn_8046DC5C
    lis r4, lbl_807772D0@ha
    li r0, 0x0
    addi r4, r4, lbl_807772D0@l
    stw r4, 0x109c(r1)
    mr r24, r3
    lwz r28, 0xc(r1)
    stw r0, 0x10a0(r1)
    addi r3, r1, 0x10ac
    li r4, 0x0
    li r5, 0x400
    stw r0, 0x10a4(r1)
    stw r0, 0x10a8(r1)
    stw r0, 0x16cc(r1)
    bl memset
    addi r3, r1, 0x16ac
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x109c(r1)
    mr r4, r24
    mr r5, r28
    addi r3, r1, 0x109c
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0x109c
    addi r4, r4, lbl_807772B0@l
    stw r4, 0x109c(r1)
    la r4, lbl_8087D708
    bl fn_8005B6E8
    lis r31, lbl_8073F410@ha
    b lbl_fn_8020B2BC_00001564
lbl_fn_8020B2BC_000014BC:
    addi r3, r1, 0x109c
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    mr r25, r3
    extsb r0, r0
    cmpwi r0, 0x3b
    beq lbl_fn_8020B2BC_00001564
    cmpwi r0, 0x23
    beq lbl_fn_8020B2BC_00001564
    addi r4, r29, lbl_8073F4A0@l
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_8020B2BC_00001564
    mr r4, r25
    addi r3, r1, 0x20
    bl strcpy
    addi r3, r1, 0x109c
    bl fn_8005B3CC
    bl fn_800DC12C
    mr r30, r3
    addi r28, r31, lbl_8073F410@l
    li r25, -0x1
    li r26, 0x0
lbl_fn_8020B2BC_00001518:
    lwz r4, 0x0(r28)
    addi r3, r1, 0x20
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8020B2BC_00001534
    mr r25, r26
    b lbl_fn_8020B2BC_00001544
lbl_fn_8020B2BC_00001534:
    addi r26, r26, 0x1
    addi r28, r28, 0x4
    cmpwi r26, 0x20
    blt lbl_fn_8020B2BC_00001518
lbl_fn_8020B2BC_00001544:
    cmpwi r25, 0x0
    blt lbl_fn_8020B2BC_00001564
    lwz r4, lbl_8087F1D8
    slwi r3, r30, 2
    mulli r0, r25, 0x54
    stwx r25, r4, r3
    lwz r3, lbl_8087F1CC
    stwx r25, r3, r0
lbl_fn_8020B2BC_00001564:
    addi r3, r1, 0x109c
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_8020B2BC_000014BC
    lwz r3, lbl_8087F518
    mr r4, r24
    bl fn_8046DD20
    lis r4, lbl_8073F4A0@ha
    addi r3, r1, 0x48
    addi r4, r4, lbl_8073F4A0@l
    addi r4, r4, 0x9d
    crclr 6
    bl sprintf
    lwz r3, lbl_8087F518
    addi r4, r1, 0x48
    addi r5, r1, 0x8
    li r6, 0x20
    bl fn_8046DC5C
    lwz r5, 0x8(r1)
    li r0, 0x0
    lis r4, lbl_8077A090@ha
    mr r24, r3
    srwi r3, r5, 31
    stw r0, 0x44c(r1)
    add r3, r3, r5
    addi r4, r4, lbl_8077A090@l
    stw r4, 0x448(r1)
    srawi r29, r3, 1
    addi r28, r1, 0x448
    addi r3, r1, 0x458
    stw r0, 0x450(r1)
    li r4, 0x0
    li r5, 0x800
    stw r0, 0x454(r1)
    stw r0, 0x1098(r1)
    bl memset
    addi r3, r1, 0x1058
    li r4, 0x0
    li r5, 0x40
    bl memset
    cmpwi r29, 0x0
    mr r5, r29
    beq lbl_fn_8020B2BC_00001614
    subi r5, r29, 0x1
lbl_fn_8020B2BC_00001614:
    cmpwi r29, 0x0
    mr r3, r28
    beq lbl_fn_8020B2BC_00001628
    addi r4, r24, 0x2
    b lbl_fn_8020B2BC_0000162C
lbl_fn_8020B2BC_00001628:
    mr r4, r24
lbl_fn_8020B2BC_0000162C:
    lwz r12, 0x0(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r3, lbl_8077A070@ha
    lis r4, lbl_8077A0A8@ha
    addi r3, r3, lbl_8077A070@l
    stw r3, 0x448(r1)
    mr r3, r28
    addi r4, r4, lbl_8077A0A8@l
    bl fn_8005B9AC
    lis r31, lbl_8073F410@ha
    b lbl_fn_8020B2BC_00001720
lbl_fn_8020B2BC_00001660:
    addi r3, r1, 0x448
    bl fn_8005B710
    lhz r0, 0x0(r3)
    mr r25, r3
    cmplwi r0, 0x3b
    beq lbl_fn_8020B2BC_00001720
    cmplwi r0, 0x23
    beq lbl_fn_8020B2BC_00001720
    la r4, lbl_8087DB30
    bl fn_80686AF0
    cmpwi r3, 0x0
    beq lbl_fn_8020B2BC_00001720
    lwz r3, lbl_8087EEC8
    mr r5, r25
    addi r4, r1, 0x18
    li r6, 0x8
    bl fn_8006F420
    addi r28, r31, lbl_8073F410@l
    li r25, -0x1
    li r26, 0x0
lbl_fn_8020B2BC_000016B0:
    lwz r4, 0x0(r28)
    addi r3, r1, 0x18
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8020B2BC_000016CC
    mr r25, r26
    b lbl_fn_8020B2BC_000016DC
lbl_fn_8020B2BC_000016CC:
    addi r26, r26, 0x1
    addi r28, r28, 0x4
    cmpwi r26, 0x20
    blt lbl_fn_8020B2BC_000016B0
lbl_fn_8020B2BC_000016DC:
    cmpwi r25, 0x0
    blt lbl_fn_8020B2BC_00001720
    addi r3, r1, 0x448
    bl fn_8005B710
    mulli r0, r25, 0x54
    lwz r4, lbl_8087F1CC
    mr r29, r3
    add r28, r4, r0
    addi r28, r28, 0x14
    cmplw r3, r28
    beq lbl_fn_8020B2BC_00001720
    bl fn_80686A48
    mr r5, r3
    mr r3, r28
    mr r4, r29
    addi r5, r5, 0x1
    bl fn_806846C4
lbl_fn_8020B2BC_00001720:
    addi r3, r1, 0x448
    bl fn_8005B8F8
    cmpwi r3, 0x0
    bne lbl_fn_8020B2BC_00001660
    lwz r3, lbl_8087F518
    mr r4, r24
    bl fn_8046DD20
    li r0, 0x2988
    addi r11, r1, 0x2980
    psq_lx f31, r1, r0, 0, 0
    lfd f31, 0x2980(r1)
    bl _restgpr_24
    lwz r0, 0x2994(r1)
    mtlr r0
    addi r1, r1, 0x2990
    blr
}

asm void fn_8020BAC0(void)
{
    nofralloc
    li r0, 0x0
    sth r0, 0x14(r3)
    blr
}

asm void fn_8020BACC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_8020BACC_00001794
    cmpwi r4, 0x0
    ble lbl_fn_8020BACC_00001794
    bl dtor_80084684
lbl_fn_8020BACC_00001794:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8020BB0C(void)
{
    nofralloc
    stwu r1, -0x7b0(r1)
    mflr r0
    stw r0, 0x7b4(r1)
    addi r11, r1, 0x7b0
    bl _savegpr_22
    lwz r0, lbl_8087F1D0
    cmpwi r0, 0x0
    bne lbl_fn_8020BB0C_000017EC
    lis r5, lbl_8073F4A0@ha
    li r3, 0xe0
    addi r5, r5, lbl_8073F4A0@l
    li r4, 0x1
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    stw r3, lbl_8087F1D0
lbl_fn_8020BB0C_000017EC:
    lis r29, lbl_8073F4A0@ha
    addi r3, r1, 0x50
    addi r4, r29, lbl_8073F4A0@l
    addi r4, r4, 0xd7
    crclr 6
    bl sprintf
    lwz r3, lbl_8087F518
    addi r4, r1, 0x50
    addi r5, r1, 0x8
    li r6, 0x20
    bl fn_8046DC5C
    lis r4, lbl_807772D0@ha
    li r0, 0x0
    addi r4, r4, lbl_807772D0@l
    stw r4, 0x150(r1)
    mr r24, r3
    lwz r30, 0x8(r1)
    stw r0, 0x154(r1)
    addi r3, r1, 0x160
    li r4, 0x0
    li r5, 0x400
    stw r0, 0x158(r1)
    stw r0, 0x15c(r1)
    stw r0, 0x780(r1)
    bl memset
    addi r3, r1, 0x760
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x150(r1)
    mr r4, r24
    mr r5, r30
    addi r3, r1, 0x150
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0x150
    addi r4, r4, lbl_807772B0@l
    stw r4, 0x150(r1)
    la r4, lbl_8087D708
    bl fn_8005B6E8
    lfs f0, lbl_80882E2C
    li r28, 0x0
    stfs f0, 0x40(r1)
    li r30, -0x1
    lis r31, lbl_8073F210@ha
    stfs f0, 0x14(r1)
    stfs f0, 0x28(r1)
    stfs f0, 0x3c(r1)
    b lbl_fn_8020BB0C_00001958
lbl_fn_8020BB0C_000018B8:
    addi r3, r1, 0x150
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    extsb r0, r0
    cmpwi r0, 0x3b
    beq lbl_fn_8020BB0C_00001958
    cmpwi r0, 0x23
    beq lbl_fn_8020BB0C_00001958
    addi r4, r29, lbl_8073F4A0@l
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_8020BB0C_00001958
    li r23, 0x0
    li r27, 0x0
lbl_fn_8020BB0C_000018F0:
    addi r3, r1, 0x150
    bl fn_8005B3CC
    lwz r4, lbl_8087F1D0
    add r0, r27, r28
    mr r25, r3
    addi r26, r31, lbl_8073F210@l
    stwx r30, r4, r0
    li r22, 0x0
lbl_fn_8020BB0C_00001910:
    lwz r4, 0x0(r26)
    mr r3, r25
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8020BB0C_00001934
    lwz r3, lbl_8087F1D0
    add r0, r27, r28
    stwx r22, r3, r0
    b lbl_fn_8020BB0C_00001944
lbl_fn_8020BB0C_00001934:
    addi r22, r22, 0x1
    addi r26, r26, 0x4
    cmpwi r22, 0x40
    blt lbl_fn_8020BB0C_00001910
lbl_fn_8020BB0C_00001944:
    addi r23, r23, 0x1
    addi r27, r27, 0x20
    cmpwi r23, 0x7
    blt lbl_fn_8020BB0C_000018F0
    addi r28, r28, 0x4
lbl_fn_8020BB0C_00001958:
    addi r3, r1, 0x150
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_8020BB0C_000018B8
    lwz r3, lbl_8087F518
    mr r4, r24
    bl fn_8046DD20
    addi r11, r1, 0x7b0
    bl _restgpr_22
    lwz r0, 0x7b4(r1)
    mtlr r0
    addi r1, r1, 0x7b0
    blr
}
