#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_22(void);
extern void _restgpr_25(void);
extern void _savegpr_22(void);
extern void _savegpr_25(void);
extern void dtor_80084684(void);
extern void fn_8000D114(void);
extern void fn_8000D124(void);
extern void fn_80041C0C(void);
extern void fn_80042108(void);
extern void fn_80042740(void);
extern void fn_8004ED34(void);
extern void fn_80079044(void);
extern void fn_800790D0(void);
extern void fn_800844D8(void);
extern void fn_800846FC(void);
extern void fn_800928B0(void);
extern void fn_80094F98(void);
extern void fn_800C122C(void);
extern void fn_800C1A1C(void);
extern void fn_800C1FB4(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800CB688(void);
extern void fn_800D1E9C(void);
extern void fn_800D3FA4(void);
extern void fn_800D8814(void);
extern void fn_800F7FD8(void);
extern void fn_800F833C(void);
extern void fn_800F84BC(void);
extern void fn_801125F8(void);
extern void fn_80179D44(void);
extern void fn_80185628(void);
extern void fn_801856A4(void);
extern void fn_801856AC(void);
extern void fn_801856B4(void);
extern void fn_8020B1E0(void);
extern void fn_8020B208(void);
extern void fn_8020B27C(void);
extern void fn_8021771C(void);
extern void fn_80232B7C(void);
extern void fn_80237518(void);
extern void fn_802375C4(void);
extern void fn_80237654(void);
extern void fn_802376D0(void);
extern void fn_8023772C(void);
extern void fn_8023780C(void);
extern void fn_8023781C(void);
extern void fn_80237874(void);
extern void fn_8023A680(void);
extern void fn_8023A8B4(void);
extern void fn_80473E8C(void);
extern void fn_80680770(void);
extern void fn_80680CF8(void);
extern void fn_80682428(void);
extern void fn_80686EA4(void);
extern void fn_80695720(void);
extern void fn_806958E0(void);
extern void fn_806959D8(void);
extern void fn_80695A50(void);
extern void fn_80695D84(void);
extern int sprintf(char* str, const char* format, ...);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_807381E8[];
extern u8 lbl_807381F8[];
extern u8 lbl_80738200[];
extern u8 lbl_8073821C[];
extern u8 lbl_807382A8[];
extern u8 lbl_8077927C[];
extern u8 lbl_8077CC48[];

/* Small data declarations */
extern u32 lbl_8087D9F8;
extern u32 lbl_8087D9FC;
extern u32 lbl_8087EE98;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087EFE8;
extern u32 lbl_8087F0A0;
extern u32 lbl_8087F3C0;
extern u32 lbl_80881C94;
extern u32 lbl_80881C98;
extern u32 lbl_80881C9C;
extern u32 lbl_80881CA0;
extern u32 lbl_80881CA4;
extern u32 lbl_80881CA8;
extern u32 lbl_80881CAC;
extern u32 lbl_80881CB0;
extern u32 lbl_80881CB4;
extern u32 lbl_80881CE0;
extern u32 lbl_80881CE4;
extern u32 lbl_80881CE8;
extern u32 lbl_80881CEC;
extern u32 lbl_80881CF0;
extern u32 lbl_80881CF4;
extern u32 lbl_80881CF8;
extern u32 lbl_80881CFC;
extern u32 lbl_80881D00;
extern u32 lbl_80881D04;
extern u32 lbl_80881D08;
extern u32 lbl_80881D0C;
extern u32 lbl_80881D10;
extern u32 lbl_80881D14;
extern u32 lbl_80881D18;
extern u32 lbl_80881D1C;
extern u32 lbl_80881D20;
extern u32 lbl_80881D24;
extern u32 lbl_80881D28;
extern u32 lbl_80881D2C;
extern u32 lbl_80881D30;
extern u32 lbl_80881D34;
extern u32 lbl_80881D38;
extern u32 lbl_80881D3C;
extern u32 lbl_80881D40;
extern u32 lbl_80881D44;
extern u32 lbl_80881D48;
extern u32 lbl_80881D4C;
extern u32 lbl_80881D50;
extern u32 lbl_80881D54;
extern u32 lbl_80881D58;
extern u32 lbl_80881D5C;
extern u32 lbl_80881D60;
extern u32 lbl_80881D64;
extern u32 lbl_80881D68;
extern u32 lbl_80881D6C;
extern u32 lbl_80881D70;
extern u32 lbl_80881D74;
extern u32 lbl_80881D78;
extern u32 lbl_80881D7C;
extern u32 lbl_80881D80;
extern u32 lbl_80881D84;
extern u32 lbl_80881D88;
extern u32 lbl_80881D8C;
extern u32 lbl_80881D90;
extern u32 lbl_80881D94;
extern u32 lbl_80881D98;
extern u32 lbl_80881D9C;
extern u32 lbl_80881DA0;
extern u32 lbl_80881DA4;
extern u32 lbl_80881DA8;

/* Function declarations */
void fn_80183AAC(void);
void fn_80183B2C(void);
void fn_80183C54(void);
void fn_80183C58(void);
void fn_80183CFC(void);
void fn_80183D00(void);
void fn_80183F88(void);
void fn_80183FFC(void);
void fn_801840D8(void);
void fn_8018412C(void);
void fn_80184188(void);
void fn_80184548(void);
void fn_801847C0(void);
void fn_80184864(void);
void fn_80184A64(void);
void fn_80184AD4(void);
void fn_80184B4C(void);
void fn_80184C30(void);
void fn_80185188(void);

asm void fn_80183AAC(void)
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
    beq lbl_fn_80183AAC_00000064
    lis r4, fn_80041C0C@ha
    li r5, 0x20
    addi r4, r4, fn_80041C0C@l
    li r6, 0x3
    addi r3, r3, 0x10
    bl fn_806959D8
    lis r4, fn_802375C4@ha
    addi r3, r30, 0x4
    addi r4, r4, fn_802375C4@l
    li r5, 0xc
    li r6, 0x1
    bl fn_806959D8
    cmpwi r31, 0x0
    ble lbl_fn_80183AAC_00000064
    mr r3, r30
    bl dtor_80084684
lbl_fn_80183AAC_00000064:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80183B2C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    beq lbl_fn_80183B2C_00000184
    lis r4, lbl_8077CC48@ha
    li r0, 0x0
    addi r4, r4, lbl_8077CC48@l
    stw r4, 0x0(r3)
    li r31, 0x0
    li r30, 0x0
    stw r0, lbl_8087F0A0
    b lbl_fn_80183B2C_000000E4
lbl_fn_80183B2C_000000CC:
    lwz r0, 0x54(r28)
    add r3, r0, r30
    addi r3, r3, 0x4
    bl fn_8023772C
    addi r30, r30, 0x70
    addi r31, r31, 0x1
lbl_fn_80183B2C_000000E4:
    lwz r0, 0x50(r28)
    cmplw r31, r0
    blt lbl_fn_80183B2C_000000CC
    lwz r3, 0x54(r28)
    cmpwi r3, 0x0
    beq lbl_fn_80183B2C_00000108
    lis r4, fn_80183AAC@ha
    addi r4, r4, fn_80183AAC@l
    bl fn_80695A50
lbl_fn_80183B2C_00000108:
    li r0, 0x0
    stw r0, 0x54(r28)
    addi r3, r28, 0x5c
    stw r0, 0x50(r28)
    bl fn_8023781C
    addic. r31, r28, 0x5c
    beq lbl_fn_80183B2C_0000013C
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_80183B2C_0000013C
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80183B2C_0000013C:
    addic. r0, r28, 0x50
    beq lbl_fn_80183B2C_00000168
    lwz r3, 0x54(r28)
    cmpwi r3, 0x0
    beq lbl_fn_80183B2C_0000015C
    lis r4, fn_80183AAC@ha
    addi r4, r4, fn_80183AAC@l
    bl fn_80695A50
lbl_fn_80183B2C_0000015C:
    li r0, 0x0
    stw r0, 0x54(r28)
    stw r0, 0x50(r28)
lbl_fn_80183B2C_00000168:
    mr r3, r28
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r29, 0x0
    ble lbl_fn_80183B2C_00000184
    mr r3, r28
    bl dtor_80084684
lbl_fn_80183B2C_00000184:
    lwz r31, 0x1c(r1)
    mr r3, r28
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80183C54(void)
{
    nofralloc
    b fn_800D3FA4
}

asm void fn_80183C58(void)
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
    lwz r0, 0x4c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80183C58_00000230
    li r30, 0x0
    li r29, 0x0
    li r31, 0x0
    b lbl_fn_80183C58_0000020C
lbl_fn_80183C58_000001E8:
    lwz r0, 0x54(r28)
    add r3, r0, r31
    addi r3, r3, 0x4
    bl fn_802376D0
    cmpwi r3, 0x0
    beq lbl_fn_80183C58_00000204
    li r30, 0x1
lbl_fn_80183C58_00000204:
    addi r31, r31, 0x70
    addi r29, r29, 0x1
lbl_fn_80183C58_0000020C:
    lwz r0, 0x50(r28)
    cmplw r29, r0
    blt lbl_fn_80183C58_000001E8
    addi r3, r28, 0x5c
    bl fn_80237874
    cmpwi r3, 0x0
    beq lbl_fn_80183C58_0000022C
    li r30, 0x1
lbl_fn_80183C58_0000022C:
    stw r30, 0x4c(r28)
lbl_fn_80183C58_00000230:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80183CFC(void)
{
    nofralloc
    blr
}

asm void fn_80183D00(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, -0x1
    stw r0, 0x24(r1)
    stmw r26, 0x8(r1)
    mr r31, r3
    mr r26, r4
    mr r27, r5
    mr r28, r6
    bne lbl_fn_80183D00_00000358
    li r30, 0x0
    li r29, 0x0
    b lbl_fn_80183D00_000002A0
lbl_fn_80183D00_00000288:
    lwz r0, 0x54(r31)
    add r3, r0, r29
    addi r3, r3, 0x4
    bl fn_8023772C
    addi r29, r29, 0x70
    addi r30, r30, 0x1
lbl_fn_80183D00_000002A0:
    lwz r0, 0x50(r31)
    cmplw r30, r0
    blt lbl_fn_80183D00_00000288
    lwz r3, 0x54(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80183D00_000002C4
    lis r4, fn_80183AAC@ha
    addi r4, r4, fn_80183AAC@l
    bl fn_80695A50
lbl_fn_80183D00_000002C4:
    li r0, 0x0
    stw r0, 0x54(r31)
    stw r0, 0x50(r31)
    b lbl_fn_80183D00_000002D8
    bl fn_80695A50
lbl_fn_80183D00_000002D8:
    li r0, 0x21
    stw r0, 0x50(r31)
    mulli r3, r0, 0x70
    li r4, 0x0
    la r5, lbl_8087D9FC
    la r6, lbl_8087D9F8
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_80183F88@ha
    lis r5, fn_80183AAC@ha
    addi r4, r4, fn_80183F88@l
    li r6, 0x70
    addi r5, r5, fn_80183AAC@l
    li r7, 0x21
    bl fn_80695720
    stw r3, 0x54(r31)
    b lbl_fn_80183D00_00000324
    stw r0, 0x54(r31)
lbl_fn_80183D00_00000324:
    li r30, 0x0
    b lbl_fn_80183D00_00000340
lbl_fn_80183D00_0000032C:
    mr r3, r31
    mr r4, r30
    mr r5, r30
    bl fn_80183FFC
    addi r30, r30, 0x1
lbl_fn_80183D00_00000340:
    lwz r0, 0x50(r31)
    cmplw r30, r0
    blt lbl_fn_80183D00_0000032C
    li r0, 0x1
    stw r0, 0x4c(r31)
    b lbl_fn_80183D00_000004C8
lbl_fn_80183D00_00000358:
    li r30, 0x0
    li r29, 0x0
    b lbl_fn_80183D00_0000037C
lbl_fn_80183D00_00000364:
    lwz r0, 0x54(r31)
    add r3, r0, r29
    addi r3, r3, 0x4
    bl fn_8023772C
    addi r29, r29, 0x70
    addi r30, r30, 0x1
lbl_fn_80183D00_0000037C:
    lwz r0, 0x50(r31)
    cmplw r30, r0
    blt lbl_fn_80183D00_00000364
    lwz r3, 0x54(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80183D00_000003A0
    lis r4, fn_80183AAC@ha
    addi r4, r4, fn_80183AAC@l
    bl fn_80695A50
lbl_fn_80183D00_000003A0:
    li r0, 0x0
    stw r0, 0x54(r31)
    addi r3, r31, 0x5c
    stw r0, 0x50(r31)
    bl fn_8023781C
    lwz r3, 0x54(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80183D00_000003CC
    lis r4, fn_80183AAC@ha
    addi r4, r4, fn_80183AAC@l
    bl fn_80695A50
lbl_fn_80183D00_000003CC:
    li r0, 0x10
    stw r0, 0x50(r31)
    mulli r3, r0, 0x70
    li r4, 0x0
    la r5, lbl_8087D9FC
    la r6, lbl_8087D9F8
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_80183F88@ha
    lis r5, fn_80183AAC@ha
    addi r4, r4, fn_80183F88@l
    li r6, 0x70
    addi r5, r5, fn_80183AAC@l
    li r7, 0x10
    bl fn_80695720
    stw r3, 0x54(r31)
    b lbl_fn_80183D00_00000418
    stw r0, 0x54(r31)
lbl_fn_80183D00_00000418:
    mr r3, r26
    mr r4, r27
    mr r5, r28
    bl fn_8021771C
    cmpwi r3, 0x0
    mr r29, r3
    beq lbl_fn_80183D00_00000490
    mr r30, r29
    li r28, 0x0
    b lbl_fn_80183D00_00000458
lbl_fn_80183D00_00000440:
    lwz r5, 0x74(r30)
    mr r3, r31
    mr r4, r28
    bl fn_80183FFC
    addi r30, r30, 0x4
    addi r28, r28, 0x1
lbl_fn_80183D00_00000458:
    lwz r0, 0x50(r31)
    cmplw r28, r0
    blt lbl_fn_80183D00_00000440
    lwz r29, 0x6c(r29)
    lis r3, lbl_8073821C@ha
    addi r3, r3, lbl_8073821C@l
    mr r4, r29
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_80183D00_000004C0
    mr r4, r29
    addi r3, r31, 0x5c
    bl fn_8023780C
    b lbl_fn_80183D00_000004C0
lbl_fn_80183D00_00000490:
    mr r3, r31
    li r4, 0x0
    li r5, 0x12
    bl fn_80183FFC
    li r28, 0x1
lbl_fn_80183D00_000004A4:
    mr r3, r31
    mr r4, r28
    li r5, 0x0
    bl fn_80183FFC
    addi r28, r28, 0x1
    cmplwi r28, 0x10
    blt lbl_fn_80183D00_000004A4
lbl_fn_80183D00_000004C0:
    li r0, 0x1
    stw r0, 0x4c(r31)
lbl_fn_80183D00_000004C8:
    lmw r26, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80183F88(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, fn_80237518@ha
    lis r5, fn_802375C4@ha
    stw r0, 0x14(r1)
    li r0, 0x0
    addi r4, r4, fn_80237518@l
    addi r5, r5, fn_802375C4@l
    stw r31, 0xc(r1)
    mr r31, r3
    li r6, 0xc
    li r7, 0x1
    stw r0, 0x0(r3)
    addi r3, r3, 0x4
    bl fn_806958E0
    lis r4, fn_80042740@ha
    lis r5, fn_80041C0C@ha
    addi r3, r31, 0x10
    li r6, 0x20
    addi r4, r4, fn_80042740@l
    addi r5, r5, fn_80041C0C@l
    li r7, 0x3
    bl fn_806958E0
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80183FFC(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stmw r26, 0x28(r1)
    mr r26, r5
    mr r31, r3
    mr r28, r4
    mr r3, r26
    bl fn_8020B1E0
    cmpwi r3, 0x0
    mr r27, r3
    beq lbl_fn_80183FFC_00000618
    mulli r28, r28, 0x70
    addi r5, r3, 0x60
    lwz r3, 0x54(r31)
    lis r4, lbl_8073821C@ha
    addi r4, r4, lbl_8073821C@l
    stwx r26, r3, r28
    addi r3, r1, 0x8
    addi r4, r4, 0x1
    crclr 6
    bl sprintf
    lbz r0, 0x60(r27)
    extsb. r0, r0
    beq lbl_fn_80183FFC_000005C8
    lwz r0, 0x54(r31)
    addi r4, r1, 0x8
    add r3, r0, r28
    addi r3, r3, 0x4
    bl fn_80237654
lbl_fn_80183FFC_000005C8:
    li r26, 0x0
    li r29, 0x0
lbl_fn_80183FFC_000005D0:
    lwz r0, 0x54(r31)
    add r0, r0, r28
    add r3, r0, r29
    addi r30, r3, 0x10
    cmplw r27, r30
    beq lbl_fn_80183FFC_00000604
    mr r3, r27
    bl strlen
    mr r5, r3
    mr r3, r30
    mr r4, r27
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_80183FFC_00000604:
    addi r26, r26, 0x1
    addi r27, r27, 0x20
    cmpwi r26, 0x3
    addi r29, r29, 0x20
    blt lbl_fn_80183FFC_000005D0
lbl_fn_80183FFC_00000618:
    lmw r26, 0x28(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_801840D8(void)
{
    nofralloc
    lwz r0, 0x50(r3)
    li r8, 0x0
    li r6, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_801840D8_00000678
lbl_fn_801840D8_00000644:
    lwz r7, 0x54(r3)
    lwzx r0, r7, r6
    cmpw r4, r0
    bne lbl_fn_801840D8_0000066C
    mulli r3, r8, 0x70
    mulli r0, r5, 0xc
    add r3, r7, r3
    add r3, r3, r0
    addi r3, r3, 0x4
    blr
lbl_fn_801840D8_0000066C:
    addi r6, r6, 0x70
    addi r8, r8, 0x1
    bdnz lbl_fn_801840D8_00000644
lbl_fn_801840D8_00000678:
    li r3, 0x0
    blr
}

asm void fn_8018412C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r27, r3
    mr r3, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    mr r31, r8
    bl fn_8020B27C
    mr r4, r3
    mr r3, r27
    mr r5, r28
    mr r6, r29
    mr r7, r30
    mr r8, r31
    bl fn_80184188
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80184188(void)
{
    nofralloc
    stwu r1, -0xf0(r1)
    mflr r0
    stw r0, 0xf4(r1)
    addi r11, r1, 0xf0
    bl _savegpr_22
    psq_l f1, 0x534(r5), 0, 0
    lis r0, 0x4330
    lfs f2, 0x53c(r5)
    addi r9, r1, 0x48
    stw r0, 0xb0(r1)
    mr r26, r3
    mr r27, r4
    lwz r22, lbl_8087EFB4
    stw r0, 0xb8(r1)
    mr r28, r5
    mr r29, r6
    mr r31, r7
    psq_st f1, 0x0(r9), 0, 0
    mr r30, r8
    addi r3, r1, 0x38
    addi r4, r5, 0xb0
    stfs f2, 0x50(r1)
    bl fn_80094F98
    mr r3, r22
    addi r4, r1, 0x38
    bl fn_800C122C
    lfs f4, 0x2c(r3)
    mr r22, r3
    lfs f0, lbl_80881CA0
    fcmpo cr0, f4, f0
    cror eq, gt, eq
    bne lbl_fn_80184188_00000764
    li r23, 0xff
    b lbl_fn_80184188_00000790
lbl_fn_80184188_00000764:
    lfs f0, lbl_80881C9C
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_80184188_0000077C
    li r3, 0x0
    b lbl_fn_80184188_0000078C
lbl_fn_80184188_0000077C:
    lfs f3, lbl_80881C98
    lfs f0, lbl_80881C94
    fmadds f1, f3, f4, f0
    bl fn_80695D84
lbl_fn_80184188_0000078C:
    mr r23, r3
lbl_fn_80184188_00000790:
    lfs f4, 0x30(r22)
    lfs f0, lbl_80881CA0
    fcmpo cr0, f4, f0
    cror eq, gt, eq
    bne lbl_fn_80184188_000007AC
    li r24, 0xff
    b lbl_fn_80184188_000007D8
lbl_fn_80184188_000007AC:
    lfs f0, lbl_80881C9C
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_80184188_000007C4
    li r3, 0x0
    b lbl_fn_80184188_000007D4
lbl_fn_80184188_000007C4:
    lfs f3, lbl_80881C98
    lfs f0, lbl_80881C94
    fmadds f1, f3, f4, f0
    bl fn_80695D84
lbl_fn_80184188_000007D4:
    mr r24, r3
lbl_fn_80184188_000007D8:
    lfs f4, 0x34(r22)
    lfs f0, lbl_80881CA0
    fcmpo cr0, f4, f0
    cror eq, gt, eq
    bne lbl_fn_80184188_000007F4
    li r25, 0xff
    b lbl_fn_80184188_00000820
lbl_fn_80184188_000007F4:
    lfs f0, lbl_80881C9C
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_80184188_0000080C
    li r3, 0x0
    b lbl_fn_80184188_0000081C
lbl_fn_80184188_0000080C:
    lfs f3, lbl_80881C98
    lfs f0, lbl_80881C94
    fmadds f1, f3, f4, f0
    bl fn_80695D84
lbl_fn_80184188_0000081C:
    mr r25, r3
lbl_fn_80184188_00000820:
    lfs f4, 0x38(r22)
    lfs f0, lbl_80881CA0
    fcmpo cr0, f4, f0
    cror eq, gt, eq
    bne lbl_fn_80184188_0000083C
    li r3, 0xff
    b lbl_fn_80184188_00000864
lbl_fn_80184188_0000083C:
    lfs f0, lbl_80881C9C
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_80184188_00000854
    li r3, 0x0
    b lbl_fn_80184188_00000864
lbl_fn_80184188_00000854:
    lfs f3, lbl_80881C98
    lfs f0, lbl_80881C94
    fmadds f1, f3, f4, f0
    bl fn_80695D84
lbl_fn_80184188_00000864:
    slwi r5, r24, 8
    slwi r4, r3, 24
    li r0, 0x0
    slwi r3, r23, 16
    or r8, r25, r5
    stw r0, 0x94(r1)
    or r4, r4, r3
    mr r7, r31
    or r31, r8, r4
    stw r0, 0x98(r1)
    mr r3, r26
    mr r5, r28
    stw r0, 0x9c(r1)
    mr r6, r29
    addi r4, r1, 0x60
    stw r0, 0xa0(r1)
    bl fn_80184864
    cmpwi r3, 0x0
    blt lbl_fn_80184188_00000A84
    subi r0, r3, 0x1c
    cmplwi r0, 0x1
    ble lbl_fn_80184188_00000A84
    lfs f3, 0x78(r1)
    subi r0, r3, 0x14
    lfs f0, 0x8(r30)
    addi r5, r1, 0x28
    lfs f5, 0x74(r1)
    cmplwi r0, 0x1
    fadds f2, f3, f0
    lfs f4, 0x4(r30)
    lfs f3, 0x70(r1)
    addi r4, r1, 0x54
    lfs f0, 0x0(r30)
    fadds f4, f5, f4
    fadds f0, f3, f0
    stfs f4, 0x2c(r1)
    stfs f0, 0x28(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0x30(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x5c(r1)
    bgt lbl_fn_80184188_00000950
    lwz r6, 0x28c(r28)
    cmpwi r6, 0x0
    bne lbl_fn_80184188_00000924
    lwz r4, lbl_8087EFB4
    lwz r5, 0x2fc(r4)
    b lbl_fn_80184188_00000928
lbl_fn_80184188_00000924:
    mr r5, r6
lbl_fn_80184188_00000928:
    cmpwi r6, 0x0
    bne lbl_fn_80184188_00000938
    lwz r4, lbl_8087EFB4
    lwz r6, 0x2fc(r4)
lbl_fn_80184188_00000938:
    lfs f0, 0x160(r6)
    lfs f3, 0x158(r5)
    fneg f4, f0
    lfs f0, lbl_80881CA4
    fmadds f0, f4, f3, f0
    stfs f0, 0x58(r1)
lbl_fn_80184188_00000950:
    cmpwi r3, 0x1f
    bne lbl_fn_80184188_00000968
    lfs f3, 0x58(r1)
    lfs f0, lbl_80881CA0
    fadds f0, f3, f0
    stfs f0, 0x58(r1)
lbl_fn_80184188_00000968:
    lwz r0, 0x4c(r26)
    cmpwi r0, 0x0
    bne lbl_fn_80184188_00000A84
    lwz r0, 0x50(r26)
    li r4, 0x0
    li r5, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80184188_000009C0
lbl_fn_80184188_0000098C:
    lwz r6, 0x54(r26)
    lwzx r0, r6, r5
    cmpw r3, r0
    bne lbl_fn_80184188_000009B4
    mulli r3, r4, 0x70
    mulli r0, r27, 0xc
    add r3, r6, r3
    add r3, r3, r0
    addi r22, r3, 0x4
    b lbl_fn_80184188_000009C4
lbl_fn_80184188_000009B4:
    addi r5, r5, 0x70
    addi r4, r4, 0x1
    bdnz lbl_fn_80184188_0000098C
lbl_fn_80184188_000009C0:
    li r22, 0x0
lbl_fn_80184188_000009C4:
    cmpwi r22, 0x0
    beq lbl_fn_80184188_00000A84
    extrwi r0, r31, 8, 8
    stw r0, 0xb4(r1)
    extrwi r0, r31, 8, 16
    lis r5, lbl_807381F8@ha
    stw r0, 0xbc(r1)
    clrlwi r4, r31, 24
    lfd f0, 0xb0(r1)
    srwi r0, r31, 24
    lfd f4, 0xb8(r1)
    mr r3, r26
    stw r4, 0xb4(r1)
    li r4, 0x0
    lfd f7, lbl_807381F8@l(r5)
    lfd f3, 0xb0(r1)
    stw r0, 0xbc(r1)
    fsubs f5, f0, f7
    lfs f6, lbl_80881CA8
    fsubs f4, f4, f7
    lfd f0, 0xb8(r1)
    fsubs f3, f3, f7
    fmuls f5, f6, f5
    fsubs f0, f0, f7
    fmuls f4, f6, f4
    stfs f5, 0x18(r1)
    fmuls f3, f6, f3
    fmuls f0, f6, f0
    stfs f4, 0x1c(r1)
    stfs f3, 0x20(r1)
    stfs f0, 0x24(r1)
    bl fn_80232B7C
    li r0, 0x0
    stw r0, 0x8(r1)
    li r3, -0x1
    lfs f1, lbl_80881CA0
    stw r3, 0xc(r1)
    li r0, 0x1
    mr r4, r22
    addi r8, r1, 0x54
    stw r0, 0x10(r1)
    addi r9, r1, 0x48
    addi r10, r1, 0x18
    li r5, -0x1
    lwz r3, lbl_8087F3C0
    li r6, 0x0
    li r7, 0x0
    bl fn_8023A680
lbl_fn_80184188_00000A84:
    addi r11, r1, 0xf0
    bl _restgpr_22
    lwz r0, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0xf0
    blr
}

asm void fn_80184548(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    stw r0, 0xd4(r1)
    addi r11, r1, 0xc0
    stfd f31, 0xc0(r1)
    psq_st f31, 0xc8(r1), 0, 0
    bl _savegpr_25
    fmr f31, f1
    mr r30, r3
    mr r3, r4
    mr r25, r5
    mr r26, r6
    mr r27, r7
    mr r28, r8
    mr r31, r9
    bl fn_8020B208
    lwz r0, 0x48(r30)
    mr r29, r3
    cmpwi r0, 0x0
    beq lbl_fn_80184548_00000CF4
    li r0, 0x0
    stw r0, 0x7c(r1)
    mr r3, r30
    mr r5, r25
    stw r0, 0x80(r1)
    mr r6, r26
    mr r7, r27
    addi r4, r1, 0x48
    stw r0, 0x84(r1)
    stw r0, 0x88(r1)
    bl fn_80184864
    cmpwi r3, 0x0
    blt lbl_fn_80184548_00000CF4
    lfs f3, 0x60(r1)
    addi r4, r1, 0x18
    lfs f0, 0x8(r28)
    addi r5, r1, 0xc
    lfs f5, 0x5c(r1)
    fadds f2, f3, f0
    lfs f4, 0x4(r28)
    lfs f3, 0x58(r1)
    lfs f0, 0x0(r28)
    fadds f4, f5, f4
    stfs f2, 0x14(r1)
    fadds f0, f3, f0
    stfs f4, 0x1c(r1)
    stfs f0, 0x18(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    lwz r0, 0x4c(r30)
    stfs f2, 0x20(r1)
    cmpwi r0, 0x0
    bne lbl_fn_80184548_00000CF4
    lwz r7, 0x50(r30)
    li r4, 0x0
    li r5, 0x0
    mtctr r7
    cmplwi r7, 0x0
    ble lbl_fn_80184548_00000BBC
lbl_fn_80184548_00000B88:
    lwz r6, 0x54(r30)
    lwzx r0, r6, r5
    cmpw r3, r0
    bne lbl_fn_80184548_00000BB0
    mulli r3, r4, 0x70
    slwi r0, r29, 5
    add r3, r6, r3
    add r3, r3, r0
    addi r5, r3, 0x10
    b lbl_fn_80184548_00000BC0
lbl_fn_80184548_00000BB0:
    addi r5, r5, 0x70
    addi r4, r4, 0x1
    bdnz lbl_fn_80184548_00000B88
lbl_fn_80184548_00000BBC:
    li r5, 0x0
lbl_fn_80184548_00000BC0:
    cmpwi r5, 0x0
    bne lbl_fn_80184548_00000C14
    li r3, 0x0
    li r4, 0x0
    mtctr r7
    cmplwi r7, 0x0
    ble lbl_fn_80184548_00000C10
lbl_fn_80184548_00000BDC:
    lwz r5, 0x54(r30)
    lwzx r0, r5, r4
    cmpwi r0, 0x0
    bne lbl_fn_80184548_00000C04
    mulli r3, r3, 0x70
    slwi r0, r29, 5
    add r3, r5, r3
    add r3, r3, r0
    addi r5, r3, 0x10
    b lbl_fn_80184548_00000C14
lbl_fn_80184548_00000C04:
    addi r4, r4, 0x70
    addi r3, r3, 0x1
    bdnz lbl_fn_80184548_00000BDC
lbl_fn_80184548_00000C10:
    li r5, 0x0
lbl_fn_80184548_00000C14:
    cmpwi r5, 0x0
    beq lbl_fn_80184548_00000CF4
    cmpwi r31, 0x0
    beq lbl_fn_80184548_00000C50
    lis r3, lbl_807381E8@ha
    lis r4, lbl_8073821C@ha
    slwi r0, r31, 2
    addi r3, r3, lbl_807381E8@l
    addi r4, r4, lbl_8073821C@l
    lwzx r6, r3, r0
    addi r3, r1, 0x28
    addi r4, r4, 0xc
    crclr 6
    bl sprintf
    addi r5, r1, 0x28
lbl_fn_80184548_00000C50:
    fmr f1, f31
    mr r4, r5
    addi r3, r1, 0x8
    addi r5, r1, 0xc
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    lwz r29, lbl_8087EFE8
    cmpwi r29, 0x0
    beq lbl_fn_80184548_00000CE8
    bl fn_80680CF8
    lis r4, 0x4178
    lis r0, 0x4330
    addi r5, r4, 0x749f
    stw r0, 0x98(r1)
    mulhw r5, r5, r3
    lis r4, lbl_80738200@ha
    lfd f7, lbl_80738200@l(r4)
    lfs f5, lbl_80881CAC
    li r4, 0x0
    lfs f4, 0x34cc(r29)
    srawi r0, r5, 8
    lfs f3, lbl_80881C94
    srwi r5, r0, 31
    lfs f0, lbl_80881CA0
    add r0, r0, r5
    fmuls f3, f3, f4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    addi r3, r1, 0x8
    xoris r0, r0, 0x8000
    stw r0, 0x9c(r1)
    lfd f6, 0x98(r1)
    fsubs f6, f6, f7
    fdivs f5, f6, f5
    fmsubs f3, f4, f5, f3
    fadds f1, f0, f3
    bl fn_800CB688
lbl_fn_80184548_00000CE8:
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_80184548_00000CF4:
    addi r11, r1, 0xc0
    psq_l f31, 0xc8(r1), 0, 0
    lfd f31, 0xc0(r1)
    bl _restgpr_25
    lwz r0, 0xd4(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

asm void fn_801847C0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    mr r5, r4
    stw r0, 0x44(r1)
    lwz r0, 0x4c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801847C0_00000DA8
    cmpwi r4, 0x0
    beq lbl_fn_801847C0_00000DA8
    lwz r0, 0x5c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801847C0_00000DA8
    lfs f0, lbl_80881C9C
    li r11, -0x1
    lfs f1, lbl_80881CA0
    li r0, 0x1
    stfs f0, 0x1c(r1)
    addi r4, r3, 0x5c
    addi r5, r5, 0xb0
    addi r7, r1, 0x10
    stfs f0, 0x20(r1)
    addi r8, r1, 0x1c
    addi r9, r1, 0x28
    li r6, 0x0
    stfs f0, 0x24(r1)
    li r10, -0x1
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f1, 0x28(r1)
    stfs f1, 0x2c(r1)
    stfs f1, 0x30(r1)
    stfs f1, 0x34(r1)
    stw r11, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
lbl_fn_801847C0_00000DA8:
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80184864(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    cmpwi r6, 0x0
    stw r0, 0x94(r1)
    stw r31, 0x8c(r1)
    stw r30, 0x88(r1)
    mr r30, r3
    stw r29, 0x84(r1)
    mr r29, r5
    stw r28, 0x80(r1)
    mr r28, r4
    beq lbl_fn_80184864_00000E80
    lfs f3, lbl_80881C9C
    addi r31, r5, 0xb0
    lfs f0, lbl_80881CB0
    mr r3, r31
    stfs f3, 0x38(r1)
    mr r4, r7
    li r5, 0x0
    stfs f0, 0x3c(r1)
    stfs f3, 0x40(r1)
    bl fn_800928B0
    cmpwi r3, 0x0
    bge lbl_fn_80184864_00000E20
    li r5, 0x0
    b lbl_fn_80184864_00000E2C
lbl_fn_80184864_00000E20:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r31)
    add r5, r3, r0
lbl_fn_80184864_00000E2C:
    lfs f4, 0x2c(r5)
    addi r4, r1, 0x50
    lfs f0, 0x40(r1)
    addi r3, r1, 0x68
    lfs f5, 0x1c(r5)
    fadds f2, f4, f0
    lfs f6, 0xc(r5)
    lfs f3, 0x3c(r1)
    lfs f0, 0x38(r1)
    fadds f3, f5, f3
    stfs f6, 0x44(r1)
    fadds f0, f6, f0
    stfs f3, 0x54(r1)
    stfs f0, 0x50(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f5, 0x48(r1)
    stfs f4, 0x4c(r1)
    stfs f2, 0x58(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x70(r1)
    b lbl_fn_80184864_00000ECC
lbl_fn_80184864_00000E80:
    lfs f5, lbl_80881C9C
    addi r4, r1, 0x2c
    lfs f0, 0x530(r5)
    addi r3, r1, 0x68
    lfs f4, lbl_80881CB0
    fadds f2, f0, f5
    lfs f3, 0x52c(r5)
    lfs f0, 0x528(r5)
    fadds f3, f3, f4
    stfs f5, 0x20(r1)
    fadds f0, f0, f5
    stfs f3, 0x30(r1)
    stfs f0, 0x2c(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f4, 0x24(r1)
    stfs f5, 0x28(r1)
    stfs f2, 0x34(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x70(r1)
lbl_fn_80184864_00000ECC:
    lfs f5, lbl_80881C9C
    addi r3, r1, 0x14
    lfs f0, 0x70(r1)
    addi r31, r1, 0x5c
    lfs f4, lbl_80881CB4
    fadds f2, f0, f5
    lfs f3, 0x6c(r1)
    lfs f0, 0x68(r1)
    fadds f3, f3, f4
    stfs f2, 0x64(r1)
    fadds f0, f0, f5
    stfs f3, 0x18(r1)
    stfs f0, 0x14(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    lwz r0, 0x58(r30)
    stfs f5, 0x8(r1)
    cmpwi r0, 0x0
    stfs f4, 0xc(r1)
    stfs f5, 0x10(r1)
    stfs f2, 0x1c(r1)
    blt lbl_fn_80184864_00000F44
    addi r3, r1, 0x68
    lfs f2, 0x70(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x10(r28), 0, 0
    stfs f2, 0x18(r28)
    stfs f5, 0x14(r28)
    lwz r3, 0x58(r30)
    b lbl_fn_80184864_00000F98
lbl_fn_80184864_00000F44:
    lwz r30, lbl_8087EE98
    mr r3, r29
    bl fn_80179D44
    mr r7, r3
    mr r3, r30
    mr r4, r28
    mr r6, r31
    addi r5, r1, 0x68
    addi r8, r29, 0x5b8
    li r9, 0x0
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_80184864_00000F94
    lwz r3, 0x34(r28)
    cmpwi r3, 0x0
    beq lbl_fn_80184864_00000F8C
    lwz r3, 0x0(r3)
    b lbl_fn_80184864_00000F98
lbl_fn_80184864_00000F8C:
    li r3, -0x1
    b lbl_fn_80184864_00000F98
lbl_fn_80184864_00000F94:
    li r3, -0x1
lbl_fn_80184864_00000F98:
    lwz r0, 0x94(r1)
    lwz r31, 0x8c(r1)
    lwz r30, 0x88(r1)
    lwz r29, 0x84(r1)
    lwz r28, 0x80(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_80184A64(void)
{
    nofralloc
    lfs f2, lbl_80881CF8
    li r5, 0x1
    li r4, 0x0
    lfs f8, lbl_80881CE0
    lfs f7, lbl_80881CE4
    li r0, 0x28
    lfs f6, lbl_80881CE8
    lfs f5, lbl_80881CEC
    lfs f4, lbl_80881CF0
    lfs f3, lbl_80881CF4
    lfs f1, lbl_80881CFC
    lfs f0, lbl_80881D00
    stw r5, 0x0(r3)
    stw r4, 0x4(r3)
    stw r5, 0x8(r3)
    stfs f8, 0xc(r3)
    stfs f7, 0x10(r3)
    stfs f6, 0x14(r3)
    stfs f5, 0x18(r3)
    stfs f4, 0x1c(r3)
    stfs f3, 0x20(r3)
    stfs f2, 0x24(r3)
    stfs f1, 0x28(r3)
    stfs f0, 0x2c(r3)
    stfs f2, 0x30(r3)
    stw r4, 0x34(r3)
    stw r0, 0x38(r3)
    blr
}

asm void fn_80184AD4(void)
{
    nofralloc
    lfs f3, lbl_80881CF0
    li r5, 0x0
    lfs f4, lbl_80881D10
    li r0, 0x64
    lfs f7, lbl_80881D04
    li r4, 0x96
    lfs f6, lbl_80881D08
    lfs f5, lbl_80881D0C
    lfs f2, lbl_80881D14
    lfs f1, lbl_80881CEC
    lfs f0, lbl_80881D18
    stw r5, 0x0(r3)
    stfs f7, 0x4(r3)
    stfs f6, 0x8(r3)
    stfs f5, 0xc(r3)
    stfs f4, 0x10(r3)
    stw r4, 0x14(r3)
    stfs f3, 0x18(r3)
    stfs f3, 0x1c(r3)
    stfs f2, 0x20(r3)
    stfs f3, 0x24(r3)
    stfs f1, 0x28(r3)
    stw r0, 0x2c(r3)
    stfs f3, 0x30(r3)
    stfs f0, 0x34(r3)
    stfs f4, 0x38(r3)
    stw r0, 0x3c(r3)
    stw r5, 0x40(r3)
    stw r5, 0x44(r3)
    blr
}

asm void fn_80184B4C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    stfd f30, 0x10(r1)
    psq_st f30, 0x18(r1), 0, 0
    lfs f30, lbl_80881D1C
    li r8, 0x0
    li r7, 0x6
    lfs f31, lbl_80881D20
    lfs f13, lbl_80881CEC
    li r6, 0x1e
    lfs f12, lbl_80881D24
    li r5, 0x1c2
    lfs f11, lbl_80881CE4
    li r4, 0x8
    lfs f10, lbl_80881D28
    li r0, 0x64
    lfs f9, lbl_80881D2C
    lfs f8, lbl_80881D04
    lfs f7, lbl_80881D30
    lfs f6, lbl_80881D34
    lfs f5, lbl_80881CFC
    lfs f4, lbl_80881D38
    lfs f3, lbl_80881D3C
    lfs f2, lbl_80881D40
    lfs f1, lbl_80881D44
    lfs f0, lbl_80881D48
    stw r8, 0x0(r3)
    stfs f30, 0x4(r3)
    stfs f31, 0x8(r3)
    stfs f13, 0x10(r3)
    stfs f12, 0x14(r3)
    stfs f11, 0x18(r3)
    stfs f10, 0x20(r3)
    stfs f9, 0x24(r3)
    stfs f8, 0x28(r3)
    stfs f7, 0x2c(r3)
    stw r7, 0x30(r3)
    stw r7, 0x34(r3)
    stw r6, 0x38(r3)
    stw r8, 0x3c(r3)
    stw r5, 0x40(r3)
    stfs f6, 0x44(r3)
    stw r4, 0x48(r3)
    stw r0, 0x4c(r3)
    stfs f5, 0x50(r3)
    stfs f4, 0x54(r3)
    stfs f3, 0x58(r3)
    stfs f2, 0x5c(r3)
    stfs f1, 0xc(r3)
    stfs f0, 0x1c(r3)
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    psq_l f30, 0x18(r1), 0, 0
    lfd f30, 0x10(r1)
    addi r1, r1, 0x30
    blr
}

asm void fn_80184C30(void)
{
    nofralloc
    stwu r1, -0x320(r1)
    mflr r0
    stw r0, 0x324(r1)
    stw r31, 0x31c(r1)
    stw r30, 0x318(r1)
    mr r30, r3
    bl fn_801856B4
    addi r3, r30, 0x38
    bl fn_801856B4
    addi r3, r30, 0x70
    bl fn_801856B4
    lis r4, fn_800C1A1C@ha
    lis r5, fn_800C1FB4@ha
    addi r3, r30, 0xa8
    li r6, 0x2b4
    addi r4, r4, fn_800C1A1C@l
    addi r5, r5, fn_800C1FB4@l
    li r7, 0x4
    bl fn_806958E0
    lfs f1, lbl_80881CFC
    li r0, 0x1
    stw r0, 0xb78(r30)
    addi r3, r1, 0x30
    fmr f2, f1
    stw r0, 0xb7c(r30)
    bl fn_800F84BC
    mr r4, r3
    mr r3, r30
    bl fn_800F833C
    lfs f1, lbl_80881D4C
    addi r3, r1, 0x28
    lfs f2, lbl_80881D50
    bl fn_800F84BC
    mr r4, r3
    addi r3, r30, 0x8
    bl fn_800F833C
    lfs f1, lbl_80881CFC
    addi r3, r1, 0x1b8
    fmr f2, f1
    fmr f3, f1
    bl fn_8000D114
    mr r4, r3
    addi r3, r30, 0x10
    bl fn_8000D124
    lfs f1, lbl_80881D54
    addi r3, r1, 0x1ac
    lfs f2, lbl_80881D58
    lfs f3, lbl_80881D5C
    bl fn_8000D114
    mr r4, r3
    addi r3, r30, 0x1c
    bl fn_8000D124
    lfs f1, lbl_80881D60
    addi r3, r1, 0x1a0
    lfs f2, lbl_80881D64
    lfs f3, lbl_80881D68
    bl fn_8000D114
    mr r4, r3
    addi r3, r30, 0x28
    bl fn_8000D124
    lfs f1, lbl_80881D6C
    bl fn_801125F8
    stfs f1, 0x34(r30)
    addi r3, r1, 0x20
    lfs f1, lbl_80881D4C
    lfs f2, lbl_80881CFC
    bl fn_800F84BC
    mr r4, r3
    addi r3, r30, 0x38
    bl fn_800F833C
    lfs f1, lbl_80881D4C
    addi r3, r1, 0x18
    lfs f2, lbl_80881D50
    bl fn_800F84BC
    mr r4, r3
    addi r3, r30, 0x40
    bl fn_800F833C
    lfs f1, lbl_80881CFC
    addi r3, r1, 0x194
    fmr f2, f1
    fmr f3, f1
    bl fn_8000D114
    mr r4, r3
    addi r3, r30, 0x48
    bl fn_8000D124
    lfs f1, lbl_80881D70
    addi r3, r1, 0x188
    lfs f2, lbl_80881D58
    lfs f3, lbl_80881D74
    bl fn_8000D114
    mr r4, r3
    addi r3, r30, 0x54
    bl fn_8000D124
    lfs f1, lbl_80881D78
    addi r3, r1, 0x17c
    lfs f2, lbl_80881D64
    lfs f3, lbl_80881D7C
    bl fn_8000D114
    mr r4, r3
    addi r3, r30, 0x60
    bl fn_8000D124
    lfs f1, lbl_80881D6C
    bl fn_801125F8
    stfs f1, 0x6c(r30)
    addi r3, r1, 0x10
    lfs f1, lbl_80881D4C
    lfs f2, lbl_80881CFC
    bl fn_800F84BC
    mr r4, r3
    addi r3, r30, 0x70
    bl fn_800F833C
    lfs f1, lbl_80881D4C
    addi r3, r1, 0x8
    lfs f2, lbl_80881D50
    bl fn_800F84BC
    mr r4, r3
    addi r3, r30, 0x78
    bl fn_800F833C
    lfs f1, lbl_80881CFC
    addi r3, r1, 0x170
    fmr f2, f1
    fmr f3, f1
    bl fn_8000D114
    mr r4, r3
    addi r3, r30, 0x80
    bl fn_8000D124
    lfs f1, lbl_80881D80
    addi r3, r1, 0x164
    lfs f2, lbl_80881D58
    lfs f3, lbl_80881D84
    bl fn_8000D114
    mr r4, r3
    addi r3, r30, 0x8c
    bl fn_8000D124
    lfs f1, lbl_80881D88
    addi r3, r1, 0x158
    lfs f2, lbl_80881D64
    lfs f3, lbl_80881D8C
    bl fn_8000D114
    mr r4, r3
    addi r3, r30, 0x98
    bl fn_8000D124
    lfs f1, lbl_80881D6C
    bl fn_801125F8
    stfs f1, 0xa4(r30)
    addi r3, r1, 0x2d4
    bl fn_80079044
    lfs f1, lbl_80881D30
    addi r3, r1, 0x130
    lfs f4, lbl_80881D2C
    fmr f2, f1
    fmr f3, f1
    bl fn_800D8814
    lfs f1, lbl_80881D90
    mr r31, r3
    lfs f3, lbl_80881D94
    addi r3, r1, 0x140
    fmr f2, f1
    bl fn_8000D114
    mr r4, r3
    addi r3, r1, 0x14c
    bl fn_800F7FD8
    mr r5, r31
    addi r3, r1, 0x2d4
    addi r4, r1, 0x14c
    bl fn_800790D0
    addi r3, r1, 0x290
    addi r4, r1, 0x2d4
    bl fn_80185628
    mr r4, r3
    addi r3, r30, 0xa8
    bl fn_80185188
    lfs f2, lbl_80881D9C
    addi r3, r1, 0x120
    lfs f1, lbl_80881D98
    fmr f3, f2
    lfs f4, lbl_80881D2C
    bl fn_800D8814
    mr r31, r3
    addi r3, r30, 0xa8
    bl fn_801856A4
    mr r4, r31
    bl fn_80042108
    lfs f1, lbl_80881D90
    addi r3, r1, 0x110
    lfs f4, lbl_80881D2C
    fmr f2, f1
    fmr f3, f1
    bl fn_800D8814
    mr r31, r3
    addi r3, r30, 0xa8
    bl fn_801856AC
    mr r4, r31
    bl fn_80042108
    lfs f1, lbl_80881D30
    addi r3, r1, 0xe8
    lfs f4, lbl_80881D2C
    fmr f2, f1
    fmr f3, f1
    bl fn_800D8814
    lfs f1, lbl_80881D94
    mr r31, r3
    lfs f2, lbl_80881DA0
    addi r3, r1, 0xf8
    lfs f3, lbl_80881DA4
    bl fn_8000D114
    mr r4, r3
    addi r3, r1, 0x104
    bl fn_800F7FD8
    mr r5, r31
    addi r3, r1, 0x2d4
    addi r4, r1, 0x104
    bl fn_800790D0
    addi r3, r1, 0x24c
    addi r4, r1, 0x2d4
    bl fn_80185628
    mr r4, r3
    addi r3, r30, 0x35c
    bl fn_80185188
    lfs f2, lbl_80881D9C
    addi r3, r1, 0xd8
    lfs f1, lbl_80881D98
    fmr f3, f2
    lfs f4, lbl_80881D2C
    bl fn_800D8814
    mr r31, r3
    addi r3, r30, 0x35c
    bl fn_801856A4
    mr r4, r31
    bl fn_80042108
    lfs f1, lbl_80881D90
    addi r3, r1, 0xc8
    lfs f4, lbl_80881D2C
    fmr f2, f1
    fmr f3, f1
    bl fn_800D8814
    mr r31, r3
    addi r3, r30, 0x35c
    bl fn_801856AC
    mr r4, r31
    bl fn_80042108
    lfs f1, lbl_80881D30
    addi r3, r1, 0xa0
    lfs f4, lbl_80881D2C
    fmr f2, f1
    fmr f3, f1
    bl fn_800D8814
    lfs f1, lbl_80881D90
    mr r31, r3
    lfs f3, lbl_80881D94
    addi r3, r1, 0xb0
    fmr f2, f1
    bl fn_8000D114
    mr r4, r3
    addi r3, r1, 0xbc
    bl fn_800F7FD8
    mr r5, r31
    addi r3, r1, 0x2d4
    addi r4, r1, 0xbc
    bl fn_800790D0
    addi r3, r1, 0x208
    addi r4, r1, 0x2d4
    bl fn_80185628
    mr r4, r3
    addi r3, r30, 0x610
    bl fn_80185188
    lfs f2, lbl_80881CF4
    addi r3, r1, 0x90
    lfs f1, lbl_80881DA8
    fmr f3, f2
    lfs f4, lbl_80881D2C
    bl fn_800D8814
    mr r31, r3
    addi r3, r30, 0x610
    bl fn_801856A4
    mr r4, r31
    bl fn_80042108
    lfs f1, lbl_80881D90
    addi r3, r1, 0x80
    lfs f4, lbl_80881D2C
    fmr f2, f1
    fmr f3, f1
    bl fn_800D8814
    mr r31, r3
    addi r3, r30, 0x610
    bl fn_801856AC
    mr r4, r31
    bl fn_80042108
    lfs f1, lbl_80881D30
    addi r3, r1, 0x58
    lfs f4, lbl_80881D2C
    fmr f2, f1
    fmr f3, f1
    bl fn_800D8814
    lfs f1, lbl_80881D94
    mr r31, r3
    lfs f2, lbl_80881DA0
    addi r3, r1, 0x68
    lfs f3, lbl_80881DA4
    bl fn_8000D114
    mr r4, r3
    addi r3, r1, 0x74
    bl fn_800F7FD8
    mr r5, r31
    addi r3, r1, 0x2d4
    addi r4, r1, 0x74
    bl fn_800790D0
    addi r3, r1, 0x1c4
    addi r4, r1, 0x2d4
    bl fn_80185628
    mr r4, r3
    addi r3, r30, 0x8c4
    bl fn_80185188
    lfs f2, lbl_80881CF4
    addi r3, r1, 0x48
    lfs f1, lbl_80881DA8
    fmr f3, f2
    lfs f4, lbl_80881D2C
    bl fn_800D8814
    mr r31, r3
    addi r3, r30, 0x8c4
    bl fn_801856A4
    mr r4, r31
    bl fn_80042108
    lfs f1, lbl_80881D90
    addi r3, r1, 0x38
    lfs f4, lbl_80881D2C
    fmr f2, f1
    fmr f3, f1
    bl fn_800D8814
    mr r31, r3
    addi r3, r30, 0x8c4
    bl fn_801856AC
    mr r4, r31
    bl fn_80042108
    mr r3, r30
    lwz r31, 0x31c(r1)
    lwz r30, 0x318(r1)
    lwz r0, 0x324(r1)
    mtlr r0
    addi r1, r1, 0x320
    blr
}

asm void fn_80185188(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    stw r30, 0x48(r1)
    mr r30, r4
    stw r29, 0x44(r1)
    mr r29, r3
    stw r28, 0x40(r1)
    lwz r0, 0x5c(r3)
    lwz r31, 0x60(r3)
    cmplw r0, r31
    bge lbl_fn_80185188_000017A8
    mulli r0, r0, 0x44
    lwz r5, 0x58(r3)
    add. r5, r5, r0
    beq lbl_fn_80185188_00001798
    lwz r0, 0x0(r4)
    stw r0, 0x0(r5)
    lwz r0, 0x4(r4)
    stw r0, 0x4(r5)
    lfs f2, 0x10(r4)
    psq_l f1, 0x8(r4), 0, 0
    psq_st f1, 0x8(r5), 0, 0
    stfs f2, 0x10(r5)
    lfs f2, 0x1c(r4)
    psq_l f1, 0x14(r4), 0, 0
    psq_st f1, 0x14(r5), 0, 0
    stfs f2, 0x1c(r5)
    lwz r0, 0x20(r4)
    stw r0, 0x20(r5)
    lfs f0, 0x24(r4)
    stfs f0, 0x24(r5)
    lfs f0, 0x28(r4)
    stfs f0, 0x28(r5)
    lfs f0, 0x2c(r4)
    stfs f0, 0x2c(r5)
    lfs f0, 0x30(r4)
    stfs f0, 0x30(r5)
    lfs f0, 0x34(r4)
    stfs f0, 0x34(r5)
    lfs f0, 0x38(r4)
    stfs f0, 0x38(r5)
    lfs f0, 0x3c(r4)
    stfs f0, 0x3c(r5)
    lfs f0, 0x40(r4)
    stfs f0, 0x40(r5)
lbl_fn_80185188_00001798:
    lwz r4, 0x5c(r3)
    addi r0, r4, 0x1
    stw r0, 0x5c(r3)
    b lbl_fn_80185188_00001B5C
lbl_fn_80185188_000017A8:
    lis r3, 0x3c4
    li r4, 0x1
    subi r0, r3, 0x3c3d
    stw r4, 0x8(r1)
    subf r0, r31, r0
    cmplwi r0, 0x1
    bge lbl_fn_80185188_000017E4
    lis r3, __files@ha
    lis r4, lbl_807382A8@ha
    addi r3, r3, __files@l
    addi r4, r4, lbl_807382A8@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80185188_000017E4:
    lis r3, 0x141
    addi r0, r3, 0x4141
    cmplw r31, r0
    bge lbl_fn_80185188_0000181C
    addi r4, r31, 0x1
    lis r3, 0xcccd
    slwi r0, r4, 2
    subf r0, r4, r0
    subi r3, r3, 0x3333
    mulhwu r0, r3, r0
    srwi r0, r0, 2
    stw r0, 0x10(r1)
    cmplwi r0, 0x1
    b lbl_fn_80185188_0000183C
lbl_fn_80185188_0000181C:
    lis r3, 0x283
    subi r0, r3, 0x7d7e
    cmplw r31, r0
    bge lbl_fn_80185188_0000183C
    addi r0, r31, 0x1
    srwi r0, r0, 1
    stw r0, 0xc(r1)
    cmplwi r0, 0x1
lbl_fn_80185188_0000183C:
    li r4, 0x0
    addi r5, r29, 0x60
    lis r3, 0x3c4
    stw r4, 0x20(r1)
    subi r0, r3, 0x3c3d
    stw r4, 0x24(r1)
    stw r4, 0x28(r1)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    lwz r3, 0x5c(r29)
    lwz r31, 0x60(r29)
    addi r3, r3, 0x1
    subf r3, r31, r3
    subf r0, r31, r0
    cmplw r3, r0
    stw r3, 0x1c(r1)
    ble lbl_fn_80185188_000018A0
    lis r3, __files@ha
    lis r4, lbl_807382A8@ha
    addi r3, r3, __files@l
    addi r4, r4, lbl_807382A8@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80185188_000018A0:
    lis r3, 0x141
    addi r0, r3, 0x4141
    cmplw r31, r0
    bge lbl_fn_80185188_000018F0
    addi r5, r31, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x1c(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x14
    srwi r4, r4, 2
    stw r4, 0x14(r1)
    cmplw r4, r0
    bge lbl_fn_80185188_000018E4
    addi r3, r1, 0x1c
lbl_fn_80185188_000018E4:
    lwz r0, 0x0(r3)
    add r31, r31, r0
    b lbl_fn_80185188_00001934
lbl_fn_80185188_000018F0:
    lis r3, 0x283
    subi r0, r3, 0x7d7e
    cmplw r31, r0
    bge lbl_fn_80185188_0000192C
    addi r3, r31, 0x1
    lwz r0, 0x1c(r1)
    srwi r3, r3, 1
    stw r3, 0x18(r1)
    cmplw r3, r0
    addi r3, r1, 0x18
    bge lbl_fn_80185188_00001920
    addi r3, r1, 0x1c
lbl_fn_80185188_00001920:
    lwz r0, 0x0(r3)
    add r31, r31, r0
    b lbl_fn_80185188_00001934
lbl_fn_80185188_0000192C:
    lis r3, 0x3c4
    subi r31, r3, 0x3c3d
lbl_fn_80185188_00001934:
    lis r3, 0x3c4
    subi r0, r3, 0x3c3d
    cmplw r31, r0
    ble lbl_fn_80185188_00001964
    lis r3, __files@ha
    lis r4, lbl_807382A8@ha
    addi r3, r3, __files@l
    addi r4, r4, lbl_807382A8@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80185188_00001964:
    mulli r3, r31, 0x44
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r28, r3
    bne lbl_fn_80185188_00001998
    lis r3, __files@ha
    lis r4, lbl_8077927C@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077927C@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80185188_00001998:
    lwz r0, 0x24(r1)
    stw r28, 0x20(r1)
    mulli r3, r0, 0x44
    stw r31, 0x28(r1)
    lwz r0, 0x5c(r29)
    stw r0, 0x30(r1)
    mulli r0, r0, 0x44
    add r0, r28, r0
    add. r3, r3, r0
    beq lbl_fn_80185188_00001A38
    lwz r0, 0x0(r30)
    stw r0, 0x0(r3)
    lwz r0, 0x4(r30)
    stw r0, 0x4(r3)
    lfs f2, 0x10(r30)
    psq_l f1, 0x8(r30), 0, 0
    psq_st f1, 0x8(r3), 0, 0
    stfs f2, 0x10(r3)
    lfs f2, 0x1c(r30)
    psq_l f1, 0x14(r30), 0, 0
    psq_st f1, 0x14(r3), 0, 0
    stfs f2, 0x1c(r3)
    lwz r0, 0x20(r30)
    stw r0, 0x20(r3)
    lfs f0, 0x24(r30)
    stfs f0, 0x24(r3)
    lfs f0, 0x28(r30)
    stfs f0, 0x28(r3)
    lfs f0, 0x2c(r30)
    stfs f0, 0x2c(r3)
    lfs f0, 0x30(r30)
    stfs f0, 0x30(r3)
    lfs f0, 0x34(r30)
    stfs f0, 0x34(r3)
    lfs f0, 0x38(r30)
    stfs f0, 0x38(r3)
    lfs f0, 0x3c(r30)
    stfs f0, 0x3c(r3)
    lfs f0, 0x40(r30)
    stfs f0, 0x40(r3)
lbl_fn_80185188_00001A38:
    lwz r3, 0x24(r1)
    lwz r0, 0x30(r1)
    addi r3, r3, 0x1
    stw r3, 0x24(r1)
    mulli r0, r0, 0x44
    lwz r3, 0x20(r1)
    lwz r4, 0x5c(r29)
    lwz r7, 0x58(r29)
    mulli r4, r4, 0x44
    add r5, r3, r0
    add r6, r7, r4
    b lbl_fn_80185188_00001B04
lbl_fn_80185188_00001A68:
    subic. r5, r5, 0x44
    subi r6, r6, 0x44
    beq lbl_fn_80185188_00001AEC
    lwz r0, 0x0(r6)
    stw r0, 0x0(r5)
    lwz r0, 0x4(r6)
    stw r0, 0x4(r5)
    lfs f2, 0x10(r6)
    psq_l f1, 0x8(r6), 0, 0
    psq_st f1, 0x8(r5), 0, 0
    stfs f2, 0x10(r5)
    lfs f2, 0x1c(r6)
    psq_l f1, 0x14(r6), 0, 0
    psq_st f1, 0x14(r5), 0, 0
    stfs f2, 0x1c(r5)
    lwz r0, 0x20(r6)
    stw r0, 0x20(r5)
    lfs f0, 0x24(r6)
    stfs f0, 0x24(r5)
    lfs f0, 0x28(r6)
    stfs f0, 0x28(r5)
    lfs f0, 0x2c(r6)
    stfs f0, 0x2c(r5)
    lfs f0, 0x30(r6)
    stfs f0, 0x30(r5)
    lfs f0, 0x34(r6)
    stfs f0, 0x34(r5)
    lfs f0, 0x38(r6)
    stfs f0, 0x38(r5)
    lfs f0, 0x3c(r6)
    stfs f0, 0x3c(r5)
    lfs f0, 0x40(r6)
    stfs f0, 0x40(r5)
lbl_fn_80185188_00001AEC:
    lwz r4, 0x30(r1)
    lwz r3, 0x24(r1)
    subi r0, r4, 0x1
    stw r0, 0x30(r1)
    addi r0, r3, 0x1
    stw r0, 0x24(r1)
lbl_fn_80185188_00001B04:
    cmplw r7, r6
    blt lbl_fn_80185188_00001A68
    li r4, 0x0
    stw r4, 0x5c(r29)
    addic. r0, r1, 0x20
    lwz r3, 0x60(r29)
    lwz r0, 0x28(r1)
    stw r0, 0x60(r29)
    stw r3, 0x28(r1)
    lwz r0, 0x20(r1)
    lwz r3, 0x58(r29)
    stw r0, 0x58(r29)
    stw r3, 0x20(r1)
    lwz r0, 0x24(r1)
    stw r0, 0x5c(r29)
    stw r4, 0x24(r1)
    beq lbl_fn_80185188_00001B5C
    lwz r3, 0x20(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80185188_00001B5C
    stw r4, 0x24(r1)
    bl dtor_80084684
lbl_fn_80185188_00001B5C:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    lwz r28, 0x40(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}
