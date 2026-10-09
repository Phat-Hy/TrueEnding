#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __register_global_object(void);
extern void dtor_80084684(void);
extern void fn_8005B710(void);
extern void fn_8005B8F8(void);
extern void fn_8005B9AC(void);
extern void fn_800616C0(void);
extern void fn_8006BA8C(void);
extern void fn_8006BB6C(void);
extern void fn_8006F420(void);
extern void fn_8006F72C(void);
extern void fn_80084320(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_800A4228(void);
extern void fn_800A49C4(void);
extern void fn_800A555C(void);
extern void fn_800A55AC(void);
extern void fn_800D1E9C(void);
extern void fn_800D2338(void);
extern void fn_800DBF68(void);
extern void fn_800DC1DC(void);
extern void fn_800E0908(void);
extern void fn_80119ECC(void);
extern void fn_8012AFE8(void);
extern void fn_80209120(void);
extern void fn_80211480(void);
extern void fn_8021E444(void);
extern void fn_80366364(void);
extern void fn_80370174(void);
extern void fn_80370A78(void);
extern void fn_803940E8(void);
extern void fn_80394190(void);
extern void fn_80394208(void);
extern void fn_803B80F4(void);
extern void fn_803B8160(void);
extern void fn_803B8200(void);
extern void fn_803B8270(void);
extern void fn_803B82C0(void);
extern void fn_803B834C(void);
extern void fn_803B83A4(void);
extern void fn_803B85EC(void);
extern void fn_803B8758(void);
extern void fn_803B87A8(void);
extern void fn_803B8B08(void);
extern void fn_803BDB60(void);
extern void fn_803BE850(void);
extern void fn_803BE8B4(void);
extern void fn_803BEAB4(void);
extern void fn_80444CF8(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473F50(void);
extern void fn_80473F88(void);
extern void fn_80572B70(void);
extern void fn_80686A48(void);
extern void fn_80686A64(void);
extern void fn_8068B2A0(void);
extern void fn_8068B770(void);
extern void fn_8068BC30(void);
extern void fn_8068BD60(void);
extern void fn_8068C240(void);
extern void fn_80695720(void);
extern void fn_806959D8(void);
extern void fn_80695A50(void);
extern int sprintf(char* str, const char* format, ...);
extern char* strcpy(char* dest, const char* src);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_8074FBA4[];
extern u8 lbl_8074FC3C[];
extern u8 lbl_8074FC40[];
extern u8 lbl_8077A070[];
extern u8 lbl_8077A090[];
extern u8 lbl_8077A0A8[];
extern u8 lbl_8078B3A0[];
extern u8 lbl_8078B400[];
extern u8 lbl_807C84F0[];
extern u8 lbl_807C8508[];
extern u8 lbl_807C85C0[];

/* Small data declarations */
extern u32 lbl_8087DD60;
extern u32 lbl_8087DD64;
extern u32 lbl_8087DD68;
extern u32 lbl_8087DD70;
extern u32 lbl_8087DD74;
extern u32 lbl_8087DD78;
extern u32 lbl_8087DD7C;
extern u32 lbl_8087DD80;
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EEC8;
extern u32 lbl_8087EF68;
extern u32 lbl_8087EF70;
extern u32 lbl_8087F3CC;
extern u32 lbl_8087F3CD;
extern u32 lbl_8087F430;
extern u32 lbl_8087F458;
extern u32 lbl_8087F45C;
extern u32 lbl_8087F460;
extern u32 lbl_8087F630;
extern u32 lbl_8087F9AC;
extern u32 lbl_80885C00;
extern u32 lbl_80885C04;
extern u32 lbl_80885C08;
extern u32 lbl_80885C0C;
extern u32 lbl_80885C10;
extern u32 lbl_80885C14;

/* Function declarations */
void fn_803B2780(void);
void fn_803B27AC(void);
void fn_803B27C0(void);
void fn_803B27D4(void);
void fn_803B27DC(void);
void fn_803B27F0(void);
void fn_803B27F8(void);
void fn_803B2870(void);
void fn_803B29A8(void);
void fn_803B29E8(void);
void fn_803B2A40(void);
void fn_803B2A68(void);
void fn_803B2FBC(void);
void fn_803B30D8(void);
void fn_803B3270(void);
void fn_803B3310(void);
void fn_803B338C(void);
void fn_803B33F8(void);
void fn_803B3480(void);
void fn_803B34D8(void);
void fn_803B3530(void);
void fn_803B35A0(void);
void fn_803B35FC(void);
void fn_803B3AA0(void);
void fn_803B3AC4(void);
void fn_803B3B38(void);
void fn_803B3C10(void);
void fn_803B3CA8(void);
void fn_803B3D2C(void);

asm void fn_803B2780(void)
{
    nofralloc
    lbz r0, lbl_8087F3CC
    extsb. r0, r0
    bne lbl_fn_803B2780_00000014
    li r0, 0x1
    stb r0, lbl_8087F3CC
lbl_fn_803B2780_00000014:
    lbz r0, lbl_8087F3CD
    extsb. r0, r0
    bnelr
    li r0, 0x1
    stb r0, lbl_8087F3CD
    blr
}

asm void fn_803B27AC(void)
{
    nofralloc
    li r11, 0x3c
    lwzx r11, r3, r11
    add r3, r3, r11
    subi r3, r3, 0xc
    b fn_80394190
}

asm void fn_803B27C0(void)
{
    nofralloc
    li r11, 0x3c
    lwzx r11, r3, r11
    add r3, r3, r11
    subi r3, r3, 0x14
    b fn_803940E8
}

asm void fn_803B27D4(void)
{
    nofralloc
    subi r3, r3, 0xc
    b fn_803940E8
}

asm void fn_803B27DC(void)
{
    nofralloc
    li r11, 0x3c
    lwzx r11, r3, r11
    add r3, r3, r11
    subi r3, r3, 0x4c
    b fn_80394208
}

asm void fn_803B27F0(void)
{
    nofralloc
    subi r3, r3, 0xc
    b fn_80394208
}

asm void fn_803B27F8(void)
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
    beq lbl_fn_803B27F8_000000D4
    lis r5, lbl_8074FBA4@ha
    lis r3, 0x1
    addi r5, r5, lbl_8074FBA4@l
    li r4, 0x1
    mr r6, r5
    addi r3, r3, 0x4f80
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_803B27F8_000000D8
    mr r4, r30
    mr r5, r31
    bl fn_803B2870
    b lbl_fn_803B27F8_000000D8
lbl_fn_803B27F8_000000D4:
    li r3, 0x0
lbl_fn_803B27F8_000000D8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803B2870(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stmw r20, 0x10(r1)
    mr r29, r3
    mr r30, r5
    bl fn_803B82C0
    lwz r22, 0x0(r30)
    lis r20, lbl_8078B3A0@ha
    li r21, 0x0
    lwz r23, 0x4(r30)
    lwz r24, 0x8(r30)
    addi r20, r20, lbl_8078B3A0@l
    lwz r25, 0xc(r30)
    addi r31, r29, 0xdb4
    lwz r26, 0x10(r30)
    addi r28, r29, 0x19ec
    lwz r27, 0x14(r30)
    lwz r12, 0x18(r30)
    lwz r11, 0x1c(r30)
    lwz r10, 0x20(r30)
    lwz r9, 0x24(r30)
    lwz r8, 0x28(r30)
    lwz r7, 0x2c(r30)
    lwz r6, 0x30(r30)
    lwz r5, 0x34(r30)
    lwz r4, 0x38(r30)
    lwz r3, 0x3c(r30)
    lwz r0, 0x40(r30)
    stw r20, 0x0(r29)
    stw r21, 0xd68(r29)
    stw r22, 0xd6c(r29)
    stw r23, 0xd70(r29)
    stw r24, 0xd74(r29)
    stw r25, 0xd78(r29)
    stw r26, 0xd7c(r29)
    stw r27, 0xd80(r29)
    stw r12, 0xd84(r29)
    stw r11, 0xd88(r29)
    stw r10, 0xd8c(r29)
    stw r9, 0xd90(r29)
    stw r8, 0xd94(r29)
    stw r7, 0xd98(r29)
    stw r6, 0xd9c(r29)
    stw r5, 0xda0(r29)
    stw r4, 0xda4(r29)
    stw r3, 0xda8(r29)
    stw r0, 0xdac(r29)
    stb r21, 0xdb0(r29)
    stb r21, 0xdb1(r29)
lbl_fn_803B2870_000001B8:
    mr r3, r31
    bl fn_803BE8B4
    addi r31, r31, 0xb8
    cmplw r31, r28
    blt lbl_fn_803B2870_000001B8
    mr r3, r29
    bl fn_803B33F8
    addis r4, r29, 0x1
    stw r3, 0x4f60(r4)
    addi r3, r29, 0xd6c
    bl strlen
    cmpwi r3, 0x0
    beq lbl_fn_803B2870_000001F8
    mr r3, r29
    bl fn_803B85EC
    b lbl_fn_803B2870_00000210
lbl_fn_803B2870_000001F8:
    lwz r0, 0xdac(r29)
    cmpwi r0, 0x0
    beq lbl_fn_803B2870_00000210
    mr r3, r29
    li r4, -0x1
    bl fn_803B8758
lbl_fn_803B2870_00000210:
    mr r3, r29
    lmw r20, 0x10(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_803B29A8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_803B29A8_00000250
    cmpwi r4, 0x0
    ble lbl_fn_803B29A8_00000250
    bl dtor_80084684
lbl_fn_803B29A8_00000250:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803B29E8(void)
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
    beq lbl_fn_803B29E8_000002A4
    li r4, 0x0
    bl fn_803B834C
    cmpwi r31, 0x0
    ble lbl_fn_803B29E8_000002A4
    mr r3, r30
    bl dtor_80084684
lbl_fn_803B29E8_000002A4:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803B2A40(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_803B87A8
    cntlzw r0, r3
    srwi r3, r0, 5
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803B2A68(void)
{
    nofralloc
    stwu r1, -0x230(r1)
    mflr r0
    stw r0, 0x234(r1)
    stw r31, 0x22c(r1)
    mr r31, r3
    stw r30, 0x228(r1)
    stw r29, 0x224(r1)
    lwz r0, 0xd64(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803B2A68_00000820
    lwz r0, 0xd68(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803B2A68_00000338
    cmpwi r0, 0x1
    beq lbl_fn_803B2A68_00000344
    cmpwi r0, 0x3
    beq lbl_fn_803B2A68_000006F8
    cmpwi r0, 0x4
    beq lbl_fn_803B2A68_00000718
    b lbl_fn_803B2A68_00000820
lbl_fn_803B2A68_00000338:
    li r0, 0x1
    stw r0, 0xd68(r3)
    b lbl_fn_803B2A68_00000820
lbl_fn_803B2A68_00000344:
    lis r4, lbl_8074FBA4@ha
    addi r3, r3, 0xd6c
    addi r4, r4, lbl_8074FBA4@l
    addi r30, r4, 0x1
    bl strlen
    lbzx r0, r30, r3
    extsb. r0, r0
    bne lbl_fn_803B2A68_000003A4
    add r3, r31, r3
    addi r4, r31, 0xd6c
    addi r3, r3, 0xd6c
    subf r0, r4, r3
    mtctr r0
    cmplw r4, r3
    beq lbl_fn_803B2A68_000003A4
lbl_fn_803B2A68_00000380:
    lbz r3, 0x0(r4)
    lbz r0, 0x0(r30)
    extsb r3, r3
    extsb r0, r0
    cmpw r3, r0
    bne lbl_fn_803B2A68_000003A4
    addi r4, r4, 0x1
    addi r30, r30, 0x1
    bdnz lbl_fn_803B2A68_00000380
lbl_fn_803B2A68_000003A4:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x0
    bl fn_800A55AC
    cmpwi r3, 0x0
    bne lbl_fn_803B2A68_000003D4
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x1a
    bl fn_800A55AC
    cmpwi r3, 0x0
    beq lbl_fn_803B2A68_00000488
lbl_fn_803B2A68_000003D4:
    lis r4, lbl_8074FBA4@ha
    addi r3, r31, 0xd6c
    addi r4, r4, lbl_8074FBA4@l
    addi r30, r4, 0x1
    bl strlen
    lbzx r0, r30, r3
    extsb r0, r0
    cntlzw r0, r0
    srwi. r0, r0, 5
    beq lbl_fn_803B2A68_00000448
    add r3, r31, r3
    addi r4, r31, 0xd6c
    addi r3, r3, 0xd6c
    subf r0, r4, r3
    mtctr r0
    cmplw r4, r3
    beq lbl_fn_803B2A68_00000444
lbl_fn_803B2A68_00000418:
    lbz r3, 0x0(r4)
    lbz r0, 0x0(r30)
    extsb r3, r3
    extsb r0, r0
    cmpw r3, r0
    beq lbl_fn_803B2A68_00000438
    li r0, 0x0
    b lbl_fn_803B2A68_00000448
lbl_fn_803B2A68_00000438:
    addi r4, r4, 0x1
    addi r30, r30, 0x1
    bdnz lbl_fn_803B2A68_00000418
lbl_fn_803B2A68_00000444:
    li r0, 0x1
lbl_fn_803B2A68_00000448:
    cmpwi r0, 0x0
    beq lbl_fn_803B2A68_0000046C
    lwz r3, 0x48(r31)
    li r0, 0x10
    cmpwi r3, 0x0
    blt lbl_fn_803B2A68_00000464
    subi r0, r3, 0x1
lbl_fn_803B2A68_00000464:
    stw r0, 0x48(r31)
    b lbl_fn_803B2A68_000004E4
lbl_fn_803B2A68_0000046C:
    lwz r3, 0x48(r31)
    li r0, 0x10
    cmpwi r3, 0x0
    beq lbl_fn_803B2A68_00000480
    subi r0, r3, 0x1
lbl_fn_803B2A68_00000480:
    stw r0, 0x48(r31)
    b lbl_fn_803B2A68_000004E4
lbl_fn_803B2A68_00000488:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x1
    bl fn_800A55AC
    cmpwi r3, 0x0
    bne lbl_fn_803B2A68_000004B8
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x19
    bl fn_800A55AC
    cmpwi r3, 0x0
    beq lbl_fn_803B2A68_000004E4
lbl_fn_803B2A68_000004B8:
    lwz r4, 0x48(r31)
    lis r3, 0x7878
    addi r0, r3, 0x7879
    addi r4, r4, 0x1
    mulhw r0, r0, r4
    srawi r0, r0, 3
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r0, r0, 0x11
    subf r0, r0, r4
    stw r0, 0x48(r31)
lbl_fn_803B2A68_000004E4:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x4
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_803B2A68_000006C0
    lwz r3, 0x48(r31)
    cmpwi r3, 0x0
    bge lbl_fn_803B2A68_00000514
    li r0, 0x4
    stw r0, 0xd68(r31)
    b lbl_fn_803B2A68_000006C0
lbl_fn_803B2A68_00000514:
    lbz r0, 0xdb0(r31)
    cmpwi r0, 0x0
    beq lbl_fn_803B2A68_00000640
    mulli r0, r3, 0xb8
    add r3, r31, r0
    addi r3, r3, 0xdb4
    bl fn_803BEAB4
    cmpwi r3, 0x0
    beq lbl_fn_803B2A68_000006C0
    lis r4, lbl_8074FBA4@ha
    addi r3, r1, 0x118
    addi r4, r4, lbl_8074FBA4@l
    addi r4, r4, 0xd
    crclr 6
    bl sprintf
    lwz r29, lbl_8087F460
    cmpwi r29, 0x0
    beq lbl_fn_803B2A68_000005B0
    beq lbl_fn_803B2A68_000005A8
    addis r3, r29, 0x1
    subic. r3, r3, 0x61a0
    beq lbl_fn_803B2A68_00000584
    lis r4, fn_80119ECC@ha
    addi r3, r3, 0x11c4
    addi r4, r4, fn_80119ECC@l
    li r5, 0x2d4
    li r6, 0x1c
    bl fn_806959D8
lbl_fn_803B2A68_00000584:
    addic. r3, r29, 0x539c
    beq lbl_fn_803B2A68_000005A0
    lis r4, fn_8012AFE8@ha
    li r5, 0x240
    addi r4, r4, fn_8012AFE8@l
    li r6, 0x7
    bl fn_806959D8
lbl_fn_803B2A68_000005A0:
    mr r3, r29
    bl dtor_80084684
lbl_fn_803B2A68_000005A8:
    li r0, 0x0
    stw r0, lbl_8087F460
lbl_fn_803B2A68_000005B0:
    lis r5, lbl_8074FBA4@ha
    lis r3, 0x1
    addi r5, r5, lbl_8074FBA4@l
    li r4, 0x1
    mr r6, r5
    addi r3, r3, 0x34a8
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_803B2A68_000005DC
    bl fn_803BDB60
lbl_fn_803B2A68_000005DC:
    stw r3, lbl_8087F460
    addi r3, r1, 0x118
    addi r4, r1, 0xc
    li r5, 0x0
    bl fn_8006BA8C
    lwz r5, 0x48(r31)
    mr r30, r3
    addi r3, r1, 0x118
    addi r4, r1, 0x10
    bl fn_803B83A4
    lwz r0, 0x10(r1)
    lis r4, 0x1
    addi r5, r4, 0x34a8
    lwz r3, lbl_8087F460
    add r4, r30, r0
    addi r4, r4, 0xb8
    bl memcpy
    mr r3, r30
    li r4, 0x0
    bl fn_8006BB6C
    lwz r3, lbl_8087F460
    bl fn_803BE850
    li r0, 0x4
    stw r0, 0xd68(r31)
    b lbl_fn_803B2A68_000006C0
lbl_fn_803B2A68_00000640:
    mulli r0, r3, 0xb8
    add r3, r31, r0
    addi r3, r3, 0x4c
    bl fn_803BEAB4
    cmpwi r3, 0x0
    beq lbl_fn_803B2A68_000006C0
    lwz r29, 0x48(r31)
    addi r3, r1, 0x18
    addi r4, r1, 0x8
    mr r5, r29
    bl fn_803B83A4
    lis r30, 0x1
    addi r3, r31, 0x1a00
    addi r5, r30, 0x3560
    li r4, 0x0
    bl memset
    addis r3, r31, 0x1
    lwz r7, 0x8(r1)
    lwz r3, 0x4f60(r3)
    addi r4, r1, 0x18
    addi r5, r31, 0x1a00
    addi r6, r30, 0x3560
    bl fn_803B3530
    mulli r0, r29, 0xb8
    lis r3, lbl_807C8508@ha
    li r5, 0xb8
    addi r3, r3, lbl_807C8508@l
    add r4, r31, r0
    addi r4, r4, 0x4c
    bl memcpy
    li r0, 0x3
    stw r0, 0xd68(r31)
lbl_fn_803B2A68_000006C0:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x5
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_803B2A68_00000820
    lis r4, lbl_8074FBA4@ha
    lwz r3, lbl_8087F9AC
    addi r4, r4, lbl_8074FBA4@l
    addi r4, r4, 0x29
    bl fn_80572B70
    mr r3, r31
    bl fn_800D2338
    b lbl_fn_803B2A68_00000820
lbl_fn_803B2A68_000006F8:
    addis r4, r3, 0x1
    lwz r4, 0x4f60(r4)
    lbz r0, 0x154(r4)
    cmpwi r0, 0x0
    bne lbl_fn_803B2A68_00000820
    li r0, 0x4
    stw r0, 0xd68(r3)
    b lbl_fn_803B2A68_00000820
lbl_fn_803B2A68_00000718:
    lbz r0, 0xdb0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_803B2A68_0000080C
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    blt lbl_fn_803B2A68_0000080C
    lwz r29, lbl_8087F460
    cmpwi r29, 0x0
    beq lbl_fn_803B2A68_00000790
    beq lbl_fn_803B2A68_00000788
    addis r3, r29, 0x1
    subic. r3, r3, 0x61a0
    beq lbl_fn_803B2A68_00000764
    lis r4, fn_80119ECC@ha
    addi r3, r3, 0x11c4
    addi r4, r4, fn_80119ECC@l
    li r5, 0x2d4
    li r6, 0x1c
    bl fn_806959D8
lbl_fn_803B2A68_00000764:
    addic. r3, r29, 0x539c
    beq lbl_fn_803B2A68_00000780
    lis r4, fn_8012AFE8@ha
    li r5, 0x240
    addi r4, r4, fn_8012AFE8@l
    li r6, 0x7
    bl fn_806959D8
lbl_fn_803B2A68_00000780:
    mr r3, r29
    bl dtor_80084684
lbl_fn_803B2A68_00000788:
    li r0, 0x0
    stw r0, lbl_8087F460
lbl_fn_803B2A68_00000790:
    lis r5, lbl_8074FBA4@ha
    lis r3, 0x1
    addi r5, r5, lbl_8074FBA4@l
    li r4, 0x1
    mr r6, r5
    addi r3, r3, 0x34a8
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_803B2A68_000007BC
    bl fn_803BDB60
lbl_fn_803B2A68_000007BC:
    stw r3, lbl_8087F460
    lwz r0, 0x48(r31)
    stw r0, lbl_8087DD60
    mulli r0, r0, 0xb8
    add r4, r31, r0
    lwz r0, 0x50(r4)
    stw r0, lbl_8087DD64
    cmpwi r0, 0x4
    bge lbl_fn_803B2A68_000007F4
    lis r5, 0x1
    addi r4, r31, 0x1a38
    addi r5, r5, 0x34a8
    bl memcpy
    b lbl_fn_803B2A68_00000804
lbl_fn_803B2A68_000007F4:
    lis r5, 0x1
    addi r4, r31, 0x1ab8
    addi r5, r5, 0x34a8
    bl memcpy
lbl_fn_803B2A68_00000804:
    lwz r3, lbl_8087F460
    bl fn_803BE850
lbl_fn_803B2A68_0000080C:
    lwz r3, lbl_8087F9AC
    addi r4, r31, 0xd6c
    bl fn_80572B70
    mr r3, r31
    bl fn_800D2338
lbl_fn_803B2A68_00000820:
    lwz r0, 0x234(r1)
    lwz r31, 0x22c(r1)
    lwz r30, 0x228(r1)
    lwz r29, 0x224(r1)
    mtlr r0
    addi r1, r1, 0x230
    blr
}

asm void fn_803B2FBC(void)
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
    blt lbl_fn_803B2FBC_0000093C
    lwz r31, lbl_8087F460
    cmpwi r31, 0x0
    beq lbl_fn_803B2FBC_000008C4
    beq lbl_fn_803B2FBC_000008BC
    addis r3, r31, 0x1
    subic. r3, r3, 0x61a0
    beq lbl_fn_803B2FBC_00000898
    lis r4, fn_80119ECC@ha
    addi r3, r3, 0x11c4
    addi r4, r4, fn_80119ECC@l
    li r5, 0x2d4
    li r6, 0x1c
    bl fn_806959D8
lbl_fn_803B2FBC_00000898:
    addic. r3, r31, 0x539c
    beq lbl_fn_803B2FBC_000008B4
    lis r4, fn_8012AFE8@ha
    li r5, 0x240
    addi r4, r4, fn_8012AFE8@l
    li r6, 0x7
    bl fn_806959D8
lbl_fn_803B2FBC_000008B4:
    mr r3, r31
    bl dtor_80084684
lbl_fn_803B2FBC_000008BC:
    li r0, 0x0
    stw r0, lbl_8087F460
lbl_fn_803B2FBC_000008C4:
    lis r5, lbl_8074FBA4@ha
    lis r3, 0x1
    addi r5, r5, lbl_8074FBA4@l
    li r4, 0x1
    mr r6, r5
    addi r3, r3, 0x34a8
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_803B2FBC_000008F0
    bl fn_803BDB60
lbl_fn_803B2FBC_000008F0:
    mulli r0, r30, 0xb8
    stw r3, lbl_8087F460
    stw r30, lbl_8087DD60
    add r4, r29, r0
    lwz r0, 0x50(r4)
    stw r0, lbl_8087DD64
    cmpwi r0, 0x4
    bge lbl_fn_803B2FBC_00000924
    lis r5, 0x1
    addi r4, r29, 0x1a38
    addi r5, r5, 0x34a8
    bl memcpy
    b lbl_fn_803B2FBC_00000934
lbl_fn_803B2FBC_00000924:
    lis r5, 0x1
    addi r4, r29, 0x1ab8
    addi r5, r5, 0x34a8
    bl memcpy
lbl_fn_803B2FBC_00000934:
    lwz r3, lbl_8087F460
    bl fn_803BE850
lbl_fn_803B2FBC_0000093C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803B30D8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    lwz r0, 0xd64(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803B30D8_00000AD8
    lbz r0, 0xdb0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803B30D8_00000994
    addi r4, r3, 0xdb4
    bl fn_803B8B08
    b lbl_fn_803B30D8_0000099C
lbl_fn_803B30D8_00000994:
    addi r4, r3, 0x4c
    bl fn_803B8B08
lbl_fn_803B30D8_0000099C:
    lis r4, lbl_8074FBA4@ha
    addi r3, r31, 0xd6c
    addi r4, r4, lbl_8074FBA4@l
    addi r30, r4, 0x1
    bl strlen
    lbzx r0, r30, r3
    extsb r0, r0
    cntlzw r0, r0
    srwi. r0, r0, 5
    beq lbl_fn_803B30D8_00000A10
    add r3, r31, r3
    addi r4, r31, 0xd6c
    addi r3, r3, 0xd6c
    subf r0, r4, r3
    mtctr r0
    cmplw r4, r3
    beq lbl_fn_803B30D8_00000A0C
lbl_fn_803B30D8_000009E0:
    lbz r3, 0x0(r4)
    lbz r0, 0x0(r30)
    extsb r3, r3
    extsb r0, r0
    cmpw r3, r0
    beq lbl_fn_803B30D8_00000A00
    li r0, 0x0
    b lbl_fn_803B30D8_00000A10
lbl_fn_803B30D8_00000A00:
    addi r4, r4, 0x1
    addi r30, r30, 0x1
    bdnz lbl_fn_803B30D8_000009E0
lbl_fn_803B30D8_00000A0C:
    li r0, 0x1
lbl_fn_803B30D8_00000A10:
    cmpwi r0, 0x0
    beq lbl_fn_803B30D8_00000A8C
    lwz r5, lbl_8087F630
    cmpwi r5, 0x0
    bne lbl_fn_803B30D8_00000A2C
    lwz r4, lbl_8087DD68
    b lbl_fn_803B30D8_00000A4C
lbl_fn_803B30D8_00000A2C:
    lis r4, lbl_8074FBA4@ha
    lis r30, lbl_807C85C0@ha
    addi r4, r4, lbl_8074FBA4@l
    addi r3, r30, lbl_807C85C0@l
    addi r4, r4, 0x2f
    crclr 6
    bl sprintf
    addi r4, r30, lbl_807C85C0@l
lbl_fn_803B30D8_00000A4C:
    lfs f4, lbl_80885C0C
    li r5, -0x1
    lwz r0, 0x48(r31)
    fmr f5, f4
    lwz r3, lbl_8087EEB0
    cmpwi r0, -0x1
    lfs f1, lbl_80885C00
    lfs f2, lbl_80885C04
    lfs f3, lbl_80885C08
    bne lbl_fn_803B30D8_00000A78
    li r5, -0x100
lbl_fn_803B30D8_00000A78:
    lfs f6, lbl_80885C08
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
lbl_fn_803B30D8_00000A8C:
    lbz r0, 0xdb0(r31)
    cmpwi r0, 0x0
    beq lbl_fn_803B30D8_00000AD8
    lfs f3, lbl_80885C08
    lis r4, lbl_8074FBA4@ha
    lfs f4, lbl_80885C0C
    addi r4, r4, lbl_8074FBA4@l
    fmr f6, f3
    lis r5, 0xff01
    fmr f5, f4
    lwz r3, lbl_8087EEB0
    lfs f1, lbl_80885C10
    addi r4, r4, 0x59
    lfs f2, lbl_80885C14
    subi r5, r5, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
lbl_fn_803B30D8_00000AD8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803B3270(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    stw r31, 0x11c(r1)
    stw r30, 0x118(r1)
    mr r30, r4
    mr r5, r30
    addi r4, r1, 0x8
    stw r29, 0x114(r1)
    mr r29, r3
    addi r3, r1, 0x10
    bl fn_803B83A4
    lis r31, 0x1
    addi r3, r29, 0x1a00
    addi r5, r31, 0x3560
    li r4, 0x0
    bl memset
    addis r3, r29, 0x1
    lwz r7, 0x8(r1)
    lwz r3, 0x4f60(r3)
    addi r4, r1, 0x10
    addi r5, r29, 0x1a00
    addi r6, r31, 0x3560
    bl fn_803B3530
    mulli r0, r30, 0xb8
    lis r3, lbl_807C8508@ha
    li r5, 0xb8
    addi r3, r3, lbl_807C8508@l
    add r4, r29, r0
    addi r4, r4, 0x4c
    bl memcpy
    li r0, 0x3
    stw r0, 0xd68(r29)
    lwz r31, 0x11c(r1)
    lwz r30, 0x118(r1)
    lwz r29, 0x114(r1)
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_803B3310(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    addis r5, r3, 0x1
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x4f60(r5)
    cmpwi r0, 0x0
    bne lbl_fn_803B3310_00000BC8
    li r0, 0x1
    stw r0, 0xd68(r3)
    b lbl_fn_803B3310_00000BF4
lbl_fn_803B3310_00000BC8:
    beq lbl_fn_803B3310_00000BEC
    mr r3, r0
    bl fn_803B8160
    mulli r0, r31, 0xb8
    li r4, 0x0
    li r5, 0xb8
    add r3, r30, r0
    addi r3, r3, 0x4c
    bl memset
lbl_fn_803B3310_00000BEC:
    li r0, 0x5
    stw r0, 0xd68(r30)
lbl_fn_803B3310_00000BF4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803B338C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    la r3, lbl_8087F458
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_807C84F0@ha
    addi r31, r31, lbl_807C84F0@l
    bl fn_8068B770
    lis r4, fn_8068BC30@ha
    addi r5, r31, 0x0
    addi r4, r4, fn_8068BC30@l
    la r3, lbl_8087F458
    bl __register_global_object
    la r3, lbl_8087F45C
    bl fn_8068BD60
    lis r4, fn_8068C240@ha
    addi r5, r31, 0xc
    addi r4, r4, fn_8068C240@l
    la r3, lbl_8087F45C
    bl __register_global_object
    addi r3, r31, 0x18
    bl fn_803BE8B4
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803B33F8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_fn_803B33F8_00000CE4
    lis r5, lbl_8074FC3C@ha
    li r3, 0x160
    addi r5, r5, lbl_8074FC3C@l
    li r4, 0x1
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_803B33F8_00000CDC
    mr r4, r30
    bl fn_803B80F4
    lis r3, lbl_8078B400@ha
    li r0, 0x0
    addi r3, r3, lbl_8078B400@l
    stw r3, 0x0(r31)
    stw r0, 0x158(r31)
lbl_fn_803B33F8_00000CDC:
    mr r3, r31
    b lbl_fn_803B33F8_00000CE8
lbl_fn_803B33F8_00000CE4:
    li r3, 0x0
lbl_fn_803B33F8_00000CE8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803B3480(void)
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
    beq lbl_fn_803B3480_00000D3C
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r31, 0x0
    ble lbl_fn_803B3480_00000D3C
    mr r3, r30
    bl dtor_80084684
lbl_fn_803B3480_00000D3C:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803B34D8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    lbz r0, 0x154(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803B34D8_00000D9C
    lwz r3, lbl_8087EF68
    cmpwi r3, 0x0
    beq lbl_fn_803B34D8_00000D94
    addi r4, r1, 0x8
    bl fn_800A4228
    cmpwi r3, 0x0
    bne lbl_fn_803B34D8_00000D9C
lbl_fn_803B34D8_00000D94:
    mr r3, r31
    bl fn_803B8270
lbl_fn_803B34D8_00000D9C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803B3530(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r27, 0x1c(r1)
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r30, r6
    mr r31, r7
    stw r5, 0x158(r3)
    stw r6, 0x14c(r3)
    addi r3, r3, 0x48
    bl strcpy
    mr r3, r27
    li r4, 0x0
    bl fn_803B8200
    lwz r3, lbl_8087EF68
    mr r4, r28
    mr r5, r29
    mr r6, r30
    mr r7, r31
    addi r8, r1, 0x8
    bl fn_800A49C4
    lmw r27, 0x1c(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_803B35A0(void)
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
    beq lbl_fn_803B35A0_00000E60
    beq lbl_fn_803B35A0_00000E50
    li r4, 0x0
    bl fn_800D1E9C
lbl_fn_803B35A0_00000E50:
    cmpwi r31, 0x0
    ble lbl_fn_803B35A0_00000E60
    mr r3, r30
    bl dtor_80084684
lbl_fn_803B35A0_00000E60:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803B35FC(void)
{
    nofralloc
    stwu r1, -0xc90(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0xc94(r1)
    stmw r25, 0xc74(r1)
    mr r28, r3
    mr r25, r4
    mr r26, r5
    beq lbl_fn_803B35FC_0000130C
    lis r3, lbl_8077A090@ha
    li r0, 0x0
    addi r3, r3, lbl_8077A090@l
    stw r3, 0x18(r1)
    addi r27, r1, 0x18
    li r4, 0x0
    stw r0, 0x1c(r1)
    addi r3, r1, 0x28
    li r5, 0x800
    stw r0, 0x20(r1)
    stw r0, 0x24(r1)
    stw r0, 0xc68(r1)
    bl memset
    addi r3, r1, 0xc28
    li r4, 0x0
    li r5, 0x40
    bl memset
    srwi r26, r26, 1
    subic. r29, r26, 0x1
    mr r5, r29
    beq lbl_fn_803B35FC_00000EF8
    subi r5, r26, 0x2
lbl_fn_803B35FC_00000EF8:
    cmpwi r29, 0x0
    mr r3, r27
    beq lbl_fn_803B35FC_00000F0C
    addi r4, r25, 0x2
    b lbl_fn_803B35FC_00000F10
lbl_fn_803B35FC_00000F0C:
    mr r4, r25
lbl_fn_803B35FC_00000F10:
    lwz r12, 0x0(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r3, lbl_8077A070@ha
    lis r4, lbl_8077A0A8@ha
    addi r3, r3, lbl_8077A070@l
    stw r3, 0x18(r1)
    mr r3, r27
    addi r4, r4, lbl_8077A0A8@l
    bl fn_8005B9AC
    li r27, 0x0
    li r30, 0x0
    li r31, 0x0
lbl_fn_803B35FC_00000F48:
    addi r3, r1, 0x18
    bl fn_8005B8F8
    addi r31, r31, 0x1
    cmplwi r31, 0x4
    blt lbl_fn_803B35FC_00000F48
lbl_fn_803B35FC_00000F5C:
    addi r3, r1, 0x18
    bl fn_8005B710
    bl fn_800DC1DC
    cmpwi r3, 0x1
    beq lbl_fn_803B35FC_00000FA0
    addi r27, r27, 0x1
    addi r3, r1, 0x18
    bl fn_8005B710
    addi r3, r1, 0x18
    bl fn_8005B710
    addi r3, r1, 0x18
    bl fn_8005B710
    addi r3, r1, 0x18
    bl fn_8005B710
    bl fn_80686A48
    add r3, r3, r30
    addi r30, r3, 0x1
lbl_fn_803B35FC_00000FA0:
    addi r3, r1, 0x18
    bl fn_8005B8F8
    cmpwi r3, 0x0
    bne lbl_fn_803B35FC_00000F5C
    lwz r3, 0x4(r28)
    cmpwi r3, 0x0
    beq lbl_fn_803B35FC_00000FC0
    bl fn_80084C24
lbl_fn_803B35FC_00000FC0:
    cmpwi r30, 0x0
    stw r30, 0x0(r28)
    beq lbl_fn_803B35FC_00000FEC
    slwi r3, r30, 1
    li r4, 0x1
    la r5, lbl_8087DD7C
    la r6, lbl_8087DD78
    li r7, 0x0
    bl fn_800846FC
    stw r3, 0x4(r28)
    b lbl_fn_803B35FC_00000FF4
lbl_fn_803B35FC_00000FEC:
    li r0, 0x0
    stw r0, 0x4(r28)
lbl_fn_803B35FC_00000FF4:
    lwz r3, 0xc(r28)
    cmpwi r3, 0x0
    beq lbl_fn_803B35FC_0000100C
    lis r4, fn_80366364@ha
    addi r4, r4, fn_80366364@l
    bl fn_80695A50
lbl_fn_803B35FC_0000100C:
    cmpwi r27, 0x0
    stw r27, 0x8(r28)
    beq lbl_fn_803B35FC_00001058
    mulli r3, r27, 0x38
    li r4, 0x1
    la r5, lbl_8087DD74
    la r6, lbl_8087DD70
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_803B3AA0@ha
    lis r5, fn_80366364@ha
    mr r7, r27
    li r6, 0x38
    addi r4, r4, fn_803B3AA0@l
    addi r5, r5, fn_80366364@l
    bl fn_80695720
    stw r3, 0xc(r28)
    b lbl_fn_803B35FC_00001060
lbl_fn_803B35FC_00001058:
    li r0, 0x0
    stw r0, 0xc(r28)
lbl_fn_803B35FC_00001060:
    cmpwi r29, 0x0
    beq lbl_fn_803B35FC_0000106C
    addi r25, r25, 0x2
lbl_fn_803B35FC_0000106C:
    cmpwi r29, 0x0
    stw r25, 0x1c(r1)
    beq lbl_fn_803B35FC_0000107C
    subi r29, r26, 0x2
lbl_fn_803B35FC_0000107C:
    li r31, 0x0
    stw r29, 0x20(r1)
    li r29, 0x0
    li r26, 0x0
    stw r31, 0x24(r1)
lbl_fn_803B35FC_00001090:
    addi r3, r1, 0x18
    bl fn_8005B8F8
    addi r26, r26, 0x1
    cmplwi r26, 0x4
    blt lbl_fn_803B35FC_00001090
    addi r27, r1, 0x8
lbl_fn_803B35FC_000010A8:
    addi r3, r1, 0x18
    bl fn_8005B710
    bl fn_800DC1DC
    cmpwi r3, 0x1
    beq lbl_fn_803B35FC_000012FC
    lwz r0, 0xc(r28)
    addi r3, r1, 0x18
    add r30, r0, r31
    bl fn_8005B710
    addi r3, r1, 0x18
    bl fn_8005B710
    bl fn_800DC1DC
    stw r3, 0x0(r30)
    addi r3, r1, 0x18
    bl fn_8005B710
    bl fn_800DC1DC
    stw r3, 0x4(r30)
    slwi r0, r29, 1
    addi r3, r1, 0x18
    lwz r4, 0x4(r28)
    add r0, r4, r0
    stw r0, 0x8(r30)
    bl fn_8005B710
    mr r4, r3
    lwz r3, 0x8(r30)
    bl fn_80686A64
    lwz r3, 0x8(r30)
    bl fn_80686A48
    li r6, 0x0
    li r4, 0x0
    b lbl_fn_803B35FC_0000124C
lbl_fn_803B35FC_00001124:
    lwz r0, 0x8(r30)
    add r5, r0, r4
    lhzx r0, r4, r0
    cmplwi r0, 0xd
    bne lbl_fn_803B35FC_00001244
    lhz r0, 0x2(r5)
    cmplwi r0, 0xa
    beq lbl_fn_803B35FC_00001244
    cmplw cr1, r6, r3
    mr r7, r6
    bge cr1, lbl_fn_803B35FC_0000123C
    subf r0, r6, r3
    subi r8, r3, 0x8
    cmplwi r0, 0x8
    ble lbl_fn_803B35FC_0000120C
    bgt cr1, lbl_fn_803B35FC_0000120C
    addi r0, r8, 0x7
    slwi r5, r6, 1
    subf r0, r6, r0
    srwi r0, r0, 3
    mtctr r0
    cmplw r6, r8
    bge lbl_fn_803B35FC_0000120C
lbl_fn_803B35FC_00001180:
    lwz r0, 0x8(r30)
    addi r7, r7, 0x8
    add r8, r0, r5
    lhz r0, 0x2(r8)
    sth r0, 0x0(r8)
    lwz r0, 0x8(r30)
    add r8, r0, r5
    lhz r0, 0x4(r8)
    sth r0, 0x2(r8)
    lwz r0, 0x8(r30)
    add r8, r0, r5
    lhz r0, 0x6(r8)
    sth r0, 0x4(r8)
    lwz r0, 0x8(r30)
    add r8, r0, r5
    lhz r0, 0x8(r8)
    sth r0, 0x6(r8)
    lwz r0, 0x8(r30)
    add r8, r0, r5
    lhz r0, 0xa(r8)
    sth r0, 0x8(r8)
    lwz r0, 0x8(r30)
    add r8, r0, r5
    lhz r0, 0xc(r8)
    sth r0, 0xa(r8)
    lwz r0, 0x8(r30)
    add r8, r0, r5
    lhz r0, 0xe(r8)
    sth r0, 0xc(r8)
    lwz r0, 0x8(r30)
    add r8, r0, r5
    addi r5, r5, 0x10
    lhz r0, 0x10(r8)
    sth r0, 0xe(r8)
    bdnz lbl_fn_803B35FC_00001180
lbl_fn_803B35FC_0000120C:
    subf r0, r7, r3
    slwi r5, r7, 1
    mtctr r0
    cmplw r7, r3
    bge lbl_fn_803B35FC_0000123C
lbl_fn_803B35FC_00001220:
    lwz r0, 0x8(r30)
    addi r7, r7, 0x1
    add r8, r0, r5
    addi r5, r5, 0x2
    lhz r0, 0x2(r8)
    sth r0, 0x0(r8)
    bdnz lbl_fn_803B35FC_00001220
lbl_fn_803B35FC_0000123C:
    subic. r3, r3, 0x1
    beq lbl_fn_803B35FC_00001254
lbl_fn_803B35FC_00001244:
    addi r4, r4, 0x2
    addi r6, r6, 0x1
lbl_fn_803B35FC_0000124C:
    cmplw r3, r6
    bgt lbl_fn_803B35FC_00001124
lbl_fn_803B35FC_00001254:
    lwz r26, lbl_8087EEC8
    addi r3, r1, 0x18
    bl fn_8005B710
    mr r5, r3
    mr r3, r26
    addi r4, r1, 0x8
    li r6, 0x10
    bl fn_8006F420
    addi r3, r1, 0x8
    bl fn_80209120
    stw r3, 0xc(r30)
    addi r3, r1, 0x18
    lwz r26, lbl_8087EEC8
    bl fn_8005B710
    mr r5, r3
    mr r3, r26
    addi r4, r1, 0x8
    li r6, 0x10
    bl fn_8006F420
    addi r0, r30, 0x10
    cmplw r27, r0
    beq lbl_fn_803B35FC_000012C8
    mr r3, r27
    bl strlen
    mr r5, r3
    mr r4, r27
    addi r3, r30, 0x10
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_803B35FC_000012C8:
    addi r3, r1, 0x18
    bl fn_8005B710
    bl fn_800DC1DC
    stw r3, 0x30(r30)
    addi r3, r1, 0x18
    bl fn_8005B710
    bl fn_800DC1DC
    stw r3, 0x34(r30)
    addi r31, r31, 0x38
    lwz r3, 0x8(r30)
    bl fn_80686A48
    add r3, r3, r29
    addi r29, r3, 0x1
lbl_fn_803B35FC_000012FC:
    addi r3, r1, 0x18
    bl fn_8005B8F8
    cmpwi r3, 0x0
    bne lbl_fn_803B35FC_000010A8
lbl_fn_803B35FC_0000130C:
    lmw r25, 0xc74(r1)
    lwz r0, 0xc94(r1)
    mtlr r0
    addi r1, r1, 0xc90
    blr
}

asm void fn_803B3AA0(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
    stb r0, 0x10(r3)
    stw r0, 0x30(r3)
    stw r0, 0x34(r3)
    blr
}

asm void fn_803B3AC4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0xc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803B3AC4_00001374
    lis r4, fn_80366364@ha
    mr r3, r0
    addi r4, r4, fn_80366364@l
    bl fn_80695A50
lbl_fn_803B3AC4_00001374:
    lwz r3, 0x4(r31)
    li r0, 0x0
    stw r0, 0xc(r31)
    cmpwi r3, 0x0
    stw r0, 0x8(r31)
    beq lbl_fn_803B3AC4_00001390
    bl fn_80084C24
lbl_fn_803B3AC4_00001390:
    li r0, 0x0
    stw r0, 0x4(r31)
    addi r3, r31, 0x10
    stw r0, 0x0(r31)
    bl fn_80473F88
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803B3B38(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r0, lbl_8087F430
    cmpwi r0, 0x0
    beq lbl_fn_803B3B38_0000142C
    lis r31, lbl_8074FC40@ha
    li r30, 0x0
    addi r31, r31, lbl_8074FC40@l
lbl_fn_803B3B38_000013F4:
    lwz r0, 0x0(r31)
    cmpw r0, r29
    bne lbl_fn_803B3B38_0000141C
    lwz r3, lbl_8087F430
    lwz r4, 0x8(r31)
    bl fn_80370174
    cmpwi r3, 0x1
    bne lbl_fn_803B3B38_0000141C
    lwz r29, 0x4(r31)
    b lbl_fn_803B3B38_0000142C
lbl_fn_803B3B38_0000141C:
    addi r30, r30, 0x1
    addi r31, r31, 0xc
    cmplwi r30, 0x6
    blt lbl_fn_803B3B38_000013F4
lbl_fn_803B3B38_0000142C:
    lwz r0, 0x8(r28)
    li r5, 0x0
    li r4, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_803B3B38_0000146C
lbl_fn_803B3B38_00001444:
    lwz r3, 0xc(r28)
    lwzx r0, r3, r4
    cmpw r29, r0
    bne lbl_fn_803B3B38_00001460
    mulli r0, r5, 0x38
    add r3, r3, r0
    b lbl_fn_803B3B38_00001470
lbl_fn_803B3B38_00001460:
    addi r4, r4, 0x38
    addi r5, r5, 0x1
    bdnz lbl_fn_803B3B38_00001444
lbl_fn_803B3B38_0000146C:
    li r3, 0x0
lbl_fn_803B3B38_00001470:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803B3C10(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0xc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803B3C10_000014C8
    lis r4, fn_80366364@ha
    mr r3, r0
    addi r4, r4, fn_80366364@l
    bl fn_80695A50
lbl_fn_803B3C10_000014C8:
    lwz r3, 0x4(r30)
    li r0, 0x0
    stw r0, 0xc(r30)
    cmpwi r3, 0x0
    stw r0, 0x8(r30)
    beq lbl_fn_803B3C10_000014E4
    bl fn_80084C24
lbl_fn_803B3C10_000014E4:
    li r0, 0x0
    stw r0, 0x4(r30)
    addi r3, r30, 0x10
    stw r0, 0x0(r30)
    bl fn_80473F88
    lwz r12, 0x10(r30)
    addi r3, r30, 0x10
    mr r4, r31
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803B3CA8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    addi r3, r3, 0x10
    bl fn_80473F50
    cmpwi r3, 0x0
    beq lbl_fn_803B3CA8_00001558
    li r3, 0x1
    b lbl_fn_803B3CA8_00001594
lbl_fn_803B3CA8_00001558:
    lwz r0, 0x8(r30)
    cmpwi r0, 0x0
    bne lbl_fn_803B3CA8_00001590
    addi r3, r30, 0x10
    bl fn_8047059C
    mr r31, r3
    addi r3, r30, 0x10
    bl fn_80470580
    mr r4, r3
    mr r3, r30
    mr r5, r31
    bl fn_803B35FC
    addi r3, r30, 0x10
    bl fn_80473F88
lbl_fn_803B3CA8_00001590:
    li r3, 0x0
lbl_fn_803B3CA8_00001594:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803B3D2C(void)
{
    nofralloc
    stwu r1, -0x2e0(r1)
    mflr r0
    stw r0, 0x2e4(r1)
    stmw r19, 0x2ac(r1)
    addi r26, r3, 0x2
    mr r20, r3
    addi r25, r1, 0x4a
    addi r24, r1, 0x3e
    addi r23, r1, 0x32
    addi r22, r1, 0x56
    addi r27, r1, 0x54
    li r21, 0x0
    la r28, lbl_8087DD80
    li r31, 0x0
lbl_fn_803B3D2C_000015E4:
    lwz r0, 0x0(r20)
    srwi. r0, r0, 31
    bne lbl_fn_803B3D2C_00001600
    lbz r3, 0x0(r20)
    mr r6, r26
    clrlwi r3, r3, 25
    b lbl_fn_803B3D2C_00001608
lbl_fn_803B3D2C_00001600:
    lwz r6, 0x8(r20)
    lwz r3, 0x4(r20)
lbl_fn_803B3D2C_00001608:
    cmplw r21, r3
    bge lbl_fn_803B3D2C_00001660
    slwi r4, r3, 1
    slwi r3, r21, 1
    add r5, r6, r4
    add r4, r6, r3
    addi r3, r5, 0x1
    subf r3, r4, r3
    srwi r3, r3, 1
    mtctr r3
    cmplw r4, r5
    bge lbl_fn_803B3D2C_00001660
lbl_fn_803B3D2C_00001638:
    lhz r3, 0x0(r4)
    cmplwi r3, 0x24
    bne lbl_fn_803B3D2C_00001658
    subf r4, r6, r4
    srwi r3, r4, 31
    add r3, r3, r4
    srawi r30, r3, 1
    b lbl_fn_803B3D2C_00001664
lbl_fn_803B3D2C_00001658:
    addi r4, r4, 0x2
    bdnz lbl_fn_803B3D2C_00001638
lbl_fn_803B3D2C_00001660:
    li r30, -0x1
lbl_fn_803B3D2C_00001664:
    addis r3, r30, 0x1
    cmplwi r3, 0xffff
    beq lbl_fn_803B3D2C_00001B50
    cmpwi r0, 0x0
    bne lbl_fn_803B3D2C_00001688
    lbz r3, 0x0(r20)
    mr r6, r26
    clrlwi r4, r3, 25
    b lbl_fn_803B3D2C_00001690
lbl_fn_803B3D2C_00001688:
    lwz r6, 0x8(r20)
    lwz r4, 0x4(r20)
lbl_fn_803B3D2C_00001690:
    addi r3, r30, 0x1
    cmplw r3, r4
    bge lbl_fn_803B3D2C_000016EC
    slwi r4, r4, 1
    slwi r3, r3, 1
    add r5, r6, r4
    add r4, r6, r3
    addi r3, r5, 0x1
    subf r3, r4, r3
    srwi r3, r3, 1
    mtctr r3
    cmplw r4, r5
    bge lbl_fn_803B3D2C_000016EC
lbl_fn_803B3D2C_000016C4:
    lhz r3, 0x0(r4)
    cmplwi r3, 0x5b
    bne lbl_fn_803B3D2C_000016E4
    subf r4, r6, r4
    srwi r3, r4, 31
    add r3, r3, r4
    srawi r5, r3, 1
    b lbl_fn_803B3D2C_000016F0
lbl_fn_803B3D2C_000016E4:
    addi r4, r4, 0x2
    bdnz lbl_fn_803B3D2C_000016C4
lbl_fn_803B3D2C_000016EC:
    li r5, -0x1
lbl_fn_803B3D2C_000016F0:
    addis r3, r5, 0x1
    cmplwi r3, 0xffff
    beq lbl_fn_803B3D2C_000015E4
    cmpwi r0, 0x0
    bne lbl_fn_803B3D2C_00001714
    lbz r3, 0x0(r20)
    mr r7, r26
    clrlwi r4, r3, 25
    b lbl_fn_803B3D2C_0000171C
lbl_fn_803B3D2C_00001714:
    lwz r7, 0x8(r20)
    lwz r4, 0x4(r20)
lbl_fn_803B3D2C_0000171C:
    addi r3, r5, 0x1
    cmplw r3, r4
    bge lbl_fn_803B3D2C_00001778
    slwi r4, r4, 1
    slwi r3, r3, 1
    add r6, r7, r4
    add r4, r7, r3
    addi r3, r6, 0x1
    subf r3, r4, r3
    srwi r3, r3, 1
    mtctr r3
    cmplw r4, r6
    bge lbl_fn_803B3D2C_00001778
lbl_fn_803B3D2C_00001750:
    lhz r3, 0x0(r4)
    cmplwi r3, 0x5d
    bne lbl_fn_803B3D2C_00001770
    subf r4, r7, r4
    srwi r3, r4, 31
    add r3, r3, r4
    srawi r29, r3, 1
    b lbl_fn_803B3D2C_0000177C
lbl_fn_803B3D2C_00001770:
    addi r4, r4, 0x2
    bdnz lbl_fn_803B3D2C_00001750
lbl_fn_803B3D2C_00001778:
    li r29, -0x1
lbl_fn_803B3D2C_0000177C:
    addis r3, r29, 0x1
    cmplwi r3, 0xffff
    beq lbl_fn_803B3D2C_000015E4
    cmpwi r0, 0x0
    bne lbl_fn_803B3D2C_00001798
    mr r3, r26
    b lbl_fn_803B3D2C_0000179C
lbl_fn_803B3D2C_00001798:
    lwz r3, 0x8(r20)
lbl_fn_803B3D2C_0000179C:
    slwi r0, r5, 1
    add r3, r3, r0
    lhz r0, 0x2(r3)
    cmplwi r0, 0x4c
    bne lbl_fn_803B3D2C_00001814
    mr r4, r20
    mr r6, r29
    addi r3, r1, 0x48
    addi r5, r5, 0x2
    bl fn_800E0908
    lwz r0, 0x48(r1)
    srwi. r0, r0, 31
    bne lbl_fn_803B3D2C_000017D8
    mr r3, r25
    b lbl_fn_803B3D2C_000017DC
lbl_fn_803B3D2C_000017D8:
    lwz r3, 0x50(r1)
lbl_fn_803B3D2C_000017DC:
    bl fn_800DC1DC
    lwz r0, 0x48(r1)
    mr r21, r3
    srwi. r0, r0, 31
    beq lbl_fn_803B3D2C_000017F8
    lwz r3, 0x50(r1)
    bl dtor_80084684
lbl_fn_803B3D2C_000017F8:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803B3D2C_000018C8
    mr r4, r21
    bl fn_80370A78
    mr r21, r3
    b lbl_fn_803B3D2C_000018C8
lbl_fn_803B3D2C_00001814:
    cmplwi r0, 0x47
    bne lbl_fn_803B3D2C_00001880
    mr r4, r20
    mr r6, r29
    addi r3, r1, 0x3c
    addi r5, r5, 0x2
    bl fn_800E0908
    lwz r0, 0x3c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_803B3D2C_00001844
    mr r3, r24
    b lbl_fn_803B3D2C_00001848
lbl_fn_803B3D2C_00001844:
    lwz r3, 0x44(r1)
lbl_fn_803B3D2C_00001848:
    bl fn_800DC1DC
    lwz r0, 0x3c(r1)
    mr r21, r3
    srwi. r0, r0, 31
    beq lbl_fn_803B3D2C_00001864
    lwz r3, 0x44(r1)
    bl dtor_80084684
lbl_fn_803B3D2C_00001864:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803B3D2C_000018C8
    mr r4, r21
    bl fn_80370174
    mr r21, r3
    b lbl_fn_803B3D2C_000018C8
lbl_fn_803B3D2C_00001880:
    mr r4, r20
    mr r6, r29
    addi r3, r1, 0x30
    addi r5, r5, 0x1
    bl fn_800E0908
    lwz r0, 0x30(r1)
    srwi. r0, r0, 31
    bne lbl_fn_803B3D2C_000018A8
    mr r3, r23
    b lbl_fn_803B3D2C_000018AC
lbl_fn_803B3D2C_000018A8:
    lwz r3, 0x38(r1)
lbl_fn_803B3D2C_000018AC:
    bl fn_800DC1DC
    lwz r0, 0x30(r1)
    mr r21, r3
    srwi. r0, r0, 31
    beq lbl_fn_803B3D2C_000018C8
    lwz r3, 0x38(r1)
    bl dtor_80084684
lbl_fn_803B3D2C_000018C8:
    stw r31, 0x54(r1)
    mr r3, r28
    stw r31, 0x58(r1)
    stw r31, 0x5c(r1)
    bl fn_80686A48
    mr r19, r3
    mr r3, r27
    mr r4, r19
    bl fn_800DBF68
    lbz r3, 0x2c(r1)
    slwi r0, r19, 1
    stb r3, 0x28(r1)
    mr r3, r27
    mr r6, r28
    add r7, r28, r0
    addi r8, r1, 0x28
    li r4, 0x0
    li r5, 0x0
    bl fn_8006F72C
    lwz r0, 0x0(r20)
    srwi. r0, r0, 31
    bne lbl_fn_803B3D2C_00001928
    mr r3, r26
    b lbl_fn_803B3D2C_0000192C
lbl_fn_803B3D2C_00001928:
    lwz r3, 0x8(r20)
lbl_fn_803B3D2C_0000192C:
    slwi r0, r30, 1
    add r3, r3, r0
    lhz r0, 0x2(r3)
    cmpwi r0, 0x56
    beq lbl_fn_803B3D2C_00001954
    cmpwi r0, 0x49
    beq lbl_fn_803B3D2C_000019B8
    cmpwi r0, 0x54
    beq lbl_fn_803B3D2C_00001A1C
    b lbl_fn_803B3D2C_00001ACC
lbl_fn_803B3D2C_00001954:
    mr r3, r21
    addi r4, r1, 0x60
    li r5, 0xa
    bl fn_8068B2A0
    lwz r0, 0x54(r1)
    srwi. r0, r0, 31
    bne lbl_fn_803B3D2C_0000197C
    lbz r0, 0x54(r1)
    clrlwi r19, r0, 25
    b lbl_fn_803B3D2C_00001980
lbl_fn_803B3D2C_0000197C:
    lwz r19, 0x58(r1)
lbl_fn_803B3D2C_00001980:
    lbz r0, 0x24(r1)
    addi r3, r1, 0x60
    stb r0, 0x20(r1)
    bl fn_80686A48
    addi r6, r1, 0x60
    slwi r0, r3, 1
    mr r7, r6
    mr r4, r19
    addi r3, r1, 0x54
    addi r8, r1, 0x20
    add r7, r7, r0
    li r5, 0x0
    bl fn_8006F72C
    b lbl_fn_803B3D2C_00001ACC
lbl_fn_803B3D2C_000019B8:
    mr r3, r21
    bl fn_80211480
    cmpwi r3, 0x0
    beq lbl_fn_803B3D2C_00001ACC
    lwz r0, 0x54(r1)
    lwz r21, 0x8(r3)
    srwi. r0, r0, 31
    bne lbl_fn_803B3D2C_000019E4
    lbz r0, 0x54(r1)
    clrlwi r19, r0, 25
    b lbl_fn_803B3D2C_000019E8
lbl_fn_803B3D2C_000019E4:
    lwz r19, 0x58(r1)
lbl_fn_803B3D2C_000019E8:
    lbz r0, 0x1c(r1)
    mr r3, r21
    stb r0, 0x18(r1)
    bl fn_80686A48
    slwi r0, r3, 1
    mr r4, r19
    mr r6, r21
    addi r3, r1, 0x54
    addi r8, r1, 0x18
    add r7, r21, r0
    li r5, 0x0
    bl fn_8006F72C
    b lbl_fn_803B3D2C_00001ACC
lbl_fn_803B3D2C_00001A1C:
    mr r3, r21
    bl fn_8021E444
    cmpwi r3, 0x0
    beq lbl_fn_803B3D2C_00001ACC
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803B3D2C_00001ACC
    lwz r19, 0x4(r3)
    addi r3, r1, 0xa0
    li r4, 0x0
    li r5, 0x200
    bl memset
    lwz r4, 0x0(r19)
    li r5, 0x1
    cmpwi r4, 0x2714
    beq lbl_fn_803B3D2C_00001A64
    cmpwi r4, 0x2719
    bne lbl_fn_803B3D2C_00001A68
lbl_fn_803B3D2C_00001A64:
    lwz r5, 0x4(r19)
lbl_fn_803B3D2C_00001A68:
    addi r3, r1, 0xa0
    li r6, 0x1
    bl fn_80444CF8
    cmpwi r3, 0x0
    beq lbl_fn_803B3D2C_00001ACC
    lwz r0, 0x54(r1)
    srwi. r0, r0, 31
    bne lbl_fn_803B3D2C_00001A94
    lbz r0, 0x54(r1)
    clrlwi r19, r0, 25
    b lbl_fn_803B3D2C_00001A98
lbl_fn_803B3D2C_00001A94:
    lwz r19, 0x58(r1)
lbl_fn_803B3D2C_00001A98:
    lbz r0, 0x14(r1)
    addi r3, r1, 0xa0
    stb r0, 0x10(r1)
    bl fn_80686A48
    addi r6, r1, 0xa0
    slwi r0, r3, 1
    mr r7, r6
    mr r4, r19
    addi r3, r1, 0x54
    addi r8, r1, 0x10
    add r7, r7, r0
    li r5, 0x0
    bl fn_8006F72C
lbl_fn_803B3D2C_00001ACC:
    lwz r0, 0x54(r1)
    srwi. r0, r0, 31
    bne lbl_fn_803B3D2C_00001AE8
    lbz r0, 0x54(r1)
    mr r6, r22
    clrlwi r0, r0, 25
    b lbl_fn_803B3D2C_00001AF0
lbl_fn_803B3D2C_00001AE8:
    lwz r6, 0x5c(r1)
    lwz r0, 0x58(r1)
lbl_fn_803B3D2C_00001AF0:
    lbz r3, 0xc(r1)
    addi r5, r29, 0x1
    slwi r0, r0, 1
    stb r3, 0x8(r1)
    mr r3, r20
    mr r4, r30
    subf r5, r30, r5
    add r7, r6, r0
    addi r8, r1, 0x8
    bl fn_8006F72C
    lwz r0, 0x54(r1)
    srwi. r3, r0, 31
    bne lbl_fn_803B3D2C_00001B30
    lbz r0, 0x54(r1)
    clrlwi r0, r0, 25
    b lbl_fn_803B3D2C_00001B34
lbl_fn_803B3D2C_00001B30:
    lwz r0, 0x58(r1)
lbl_fn_803B3D2C_00001B34:
    cmpwi r3, 0x0
    add r21, r30, r0
    addi r21, r21, 0x1
    beq lbl_fn_803B3D2C_000015E4
    lwz r3, 0x5c(r1)
    bl dtor_80084684
    b lbl_fn_803B3D2C_000015E4
lbl_fn_803B3D2C_00001B50:
    lmw r19, 0x2ac(r1)
    li r3, 0x1
    lwz r0, 0x2e4(r1)
    mtlr r0
    addi r1, r1, 0x2e0
    blr
}
