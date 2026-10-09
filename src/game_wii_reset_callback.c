#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void dtor_80084684(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_8006B174(void);
extern void fn_8006B2D8(void);
extern void fn_8006BB6C(void);
extern void fn_8006D008(void);
extern void fn_800844D8(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_800DC880(void);
extern void fn_8020F130(void);
extern void fn_8020F75C(void);
extern void fn_80470580(void);
extern void fn_80473F50(void);
extern void fn_80473F88(void);
extern void fn_80480468(void);
extern void fn_80539334(void);
extern void fn_8057D5F8(void);
extern void fn_80680770(void);
extern void fn_806827C4(void);
extern void fn_80686EA4(void);
extern char* strcpy(char* dest, const char* src);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80760D70[];
extern u8 lbl_80760FC0[];
extern u8 lbl_80775A48[];
extern u8 lbl_80775A88[];
extern u8 lbl_80782F60[];
extern u8 lbl_80782F88[];
extern u8 lbl_8079449C[];
extern u8 lbl_807944B8[];
extern u8 lbl_807C8AB0[];

/* Small data declarations */
extern u32 lbl_8087D78C;
extern u32 lbl_8087D790;
extern u32 lbl_8087F540;
extern u32 lbl_8087F9B8;
extern u32 lbl_80888088;
extern u32 lbl_8088808C;

/* Function declarations */
void fn_80575F70(void);
void fn_80575FD0(void);
void fn_80576034(void);
void fn_8057625C(void);
void fn_805763FC(void);
void fn_80576404(void);
void fn_8057666C(void);
void fn_805767D8(void);
void fn_8057683C(void);
void fn_80576B08(void);
void fn_80576BD0(void);
void fn_80576C6C(void);
void fn_80576F74(void);
void fn_80577578(void);
void fn_805776B4(void);

asm void fn_80575F70(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x98(r3)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_80575F70_0000002C
    lwz r3, 0x1d0(r3)
    b lbl_fn_80575F70_0000004C
lbl_fn_80575F70_0000002C:
    addi r3, r3, 0x1c4
    bl fn_80473F50
    cmpwi r3, 0x0
    beq lbl_fn_80575F70_00000044
    li r3, 0x0
    b lbl_fn_80575F70_0000004C
lbl_fn_80575F70_00000044:
    addi r3, r31, 0x1c4
    bl fn_80470580
lbl_fn_80575F70_0000004C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80575FD0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x98(r3)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_80575FD0_000000A0
    lwz r3, 0x1d0(r3)
    li r4, 0x0
    bl fn_8006BB6C
    li r0, 0x0
    stw r0, 0x1d0(r31)
    stw r0, 0x1cc(r31)
    b lbl_fn_80575FD0_000000B0
lbl_fn_80575FD0_000000A0:
    addi r3, r3, 0x1c4
    bl fn_80473F50
    addi r3, r31, 0x1c4
    bl fn_80473F88
lbl_fn_80575FD0_000000B0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80576034(void)
{
    nofralloc
    stwu r1, -0x160(r1)
    mflr r0
    stw r0, 0x164(r1)
    stmw r27, 0x14c(r1)
    mr r27, r4
    lis r4, lbl_80760D70@ha
    mr r31, r3
    mr r28, r5
    mr r3, r27
    addi r4, r4, lbl_80760D70@l
    bl fn_806827C4
    cmpwi r3, 0x0
    beq lbl_fn_80576034_00000190
    mr r3, r31
    mr r4, r27
    mr r5, r28
    bl fn_8057D5F8
    lwz r0, 0x190(r31)
    cmpwi r0, -0x1
    bne lbl_fn_80576034_0000019C
    li r0, 0x20
    addi r4, r1, 0x3c
    li r3, 0x0
    mtctr r0
lbl_fn_80576034_00000124:
    stw r3, 0x4(r4)
    stwu r3, 0x8(r4)
    bdnz lbl_fn_80576034_00000124
    lbz r0, 0x0(r27)
    mr r29, r27
    cmpwi r0, 0x2f
    bne lbl_fn_80576034_00000144
    addi r29, r27, 0x1
lbl_fn_80576034_00000144:
    lis r30, lbl_80760D70@ha
    addi r30, r30, lbl_80760D70@l
    addi r3, r30, 0x7
    bl strlen
    add r4, r29, r3
    addi r3, r1, 0x40
    bl strcpy
    mr r4, r30
    addi r3, r1, 0x40
    bl fn_806827C4
    cmpwi r3, 0x0
    beq lbl_fn_80576034_0000017C
    li r0, 0x0
    stb r0, 0x0(r3)
lbl_fn_80576034_0000017C:
    bl fn_8020F130
    addi r4, r1, 0x40
    bl fn_8020F75C
    stw r3, 0x190(r31)
    b lbl_fn_80576034_0000019C
lbl_fn_80576034_00000190:
    li r0, 0x0
    stw r0, 0x194(r31)
    b lbl_fn_80576034_000002D8
lbl_fn_80576034_0000019C:
    lwz r0, 0x194(r31)
    cmpwi r0, 0x4
    bne lbl_fn_80576034_000001B0
    mr r3, r31
    bl fn_8057625C
lbl_fn_80576034_000001B0:
    lwz r3, lbl_8087F540
    cmpwi r3, 0x0
    beq lbl_fn_80576034_000001C8
    mr r4, r31
    mr r5, r28
    bl fn_80480468
lbl_fn_80576034_000001C8:
    li r0, 0x0
    stw r0, 0x34(r1)
    mr r3, r27
    addi r30, r1, 0x34
    stw r0, 0x38(r1)
    stw r0, 0x3c(r1)
    bl strlen
    mr r29, r3
    mr r3, r30
    mr r4, r29
    bl fn_80013DC4
    lbz r0, 0xc(r1)
    mr r3, r30
    stb r0, 0x8(r1)
    mr r6, r27
    add r7, r27, r29
    addi r8, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    mr r4, r30
    addi r3, r1, 0x28
    bl fn_8006B174
    addi r3, r1, 0x1c
    addi r4, r1, 0x28
    bl fn_8006B2D8
    lis r5, lbl_80760D70@ha
    addi r3, r1, 0x10
    addi r5, r5, lbl_80760D70@l
    addi r4, r1, 0x1c
    addi r5, r5, 0xf
    bl fn_8006D008
    lwz r0, 0x10(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80576034_0000025C
    addi r29, r1, 0x11
    b lbl_fn_80576034_00000260
lbl_fn_80576034_0000025C:
    lwz r29, 0x18(r1)
lbl_fn_80576034_00000260:
    addi r0, r31, 0x2a0
    cmplw r29, r0
    beq lbl_fn_80576034_00000288
    mr r3, r29
    bl strlen
    mr r5, r3
    mr r4, r29
    addi r3, r31, 0x2a0
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_80576034_00000288:
    lwz r0, 0x10(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80576034_0000029C
    lwz r3, 0x18(r1)
    bl dtor_80084684
lbl_fn_80576034_0000029C:
    lwz r0, 0x1c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80576034_000002B0
    lwz r3, 0x24(r1)
    bl dtor_80084684
lbl_fn_80576034_000002B0:
    lwz r0, 0x28(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80576034_000002C4
    lwz r3, 0x30(r1)
    bl dtor_80084684
lbl_fn_80576034_000002C4:
    lwz r0, 0x34(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80576034_000002D8
    lwz r3, 0x3c(r1)
    bl dtor_80084684
lbl_fn_80576034_000002D8:
    lmw r27, 0x14c(r1)
    lwz r0, 0x164(r1)
    mtlr r0
    addi r1, r1, 0x160
    blr
}

asm void fn_8057625C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    li r12, 0x0
    li r7, 0x1
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    b lbl_fn_8057625C_00000468
lbl_fn_8057625C_00000310:
    lwz r5, 0xb8(r3)
    li r30, 0x0
    li r4, 0x0
    lwzx r9, r5, r12
    b lbl_fn_8057625C_00000454
lbl_fn_8057625C_00000324:
    cmpwi r30, 0x0
    li r0, 0x0
    blt lbl_fn_8057625C_0000033C
    cmpw r30, r5
    bge lbl_fn_8057625C_0000033C
    li r0, 0x1
lbl_fn_8057625C_0000033C:
    cmpwi r0, 0x0
    beq lbl_fn_8057625C_00000350
    lwz r5, 0x3c(r9)
    lwzx r10, r5, r4
    b lbl_fn_8057625C_00000354
lbl_fn_8057625C_00000350:
    li r10, 0x0
lbl_fn_8057625C_00000354:
    lwz r0, 0x14(r10)
    cmpwi r0, 0x0
    beq lbl_fn_8057625C_0000044C
    li r29, 0x0
    li r5, 0x0
    b lbl_fn_8057625C_00000440
lbl_fn_8057625C_0000036C:
    cmpwi r29, 0x0
    li r0, 0x0
    blt lbl_fn_8057625C_00000384
    cmpw r29, r6
    bge lbl_fn_8057625C_00000384
    li r0, 0x1
lbl_fn_8057625C_00000384:
    cmpwi r0, 0x0
    beq lbl_fn_8057625C_00000398
    lwz r6, 0x18(r10)
    lwzx r11, r6, r5
    b lbl_fn_8057625C_0000039C
lbl_fn_8057625C_00000398:
    li r11, 0x0
lbl_fn_8057625C_0000039C:
    lwz r0, 0x10(r11)
    cmpwi r0, 0x0
    beq lbl_fn_8057625C_00000438
    li r28, 0x0
    li r6, 0x0
    b lbl_fn_8057625C_0000042C
lbl_fn_8057625C_000003B4:
    cmpwi r28, 0x0
    li r0, 0x0
    blt lbl_fn_8057625C_000003CC
    cmpw r28, r8
    bge lbl_fn_8057625C_000003CC
    li r0, 0x1
lbl_fn_8057625C_000003CC:
    cmpwi r0, 0x0
    beq lbl_fn_8057625C_000003E0
    lwz r8, 0x14(r11)
    lwzx r8, r8, r6
    b lbl_fn_8057625C_000003E4
lbl_fn_8057625C_000003E0:
    li r8, 0x0
lbl_fn_8057625C_000003E4:
    lwz r0, 0xc(r8)
    cmpwi r0, 0x10
    bne lbl_fn_8057625C_000003F8
    stb r7, 0x48(r9)
    b lbl_fn_8057625C_00000424
lbl_fn_8057625C_000003F8:
    cmpwi r0, 0x2f
    bne lbl_fn_8057625C_00000408
    stb r7, 0x49(r9)
    b lbl_fn_8057625C_00000424
lbl_fn_8057625C_00000408:
    cmpwi r0, 0x11
    bne lbl_fn_8057625C_00000418
    stb r7, 0x4a(r9)
    b lbl_fn_8057625C_00000424
lbl_fn_8057625C_00000418:
    cmpwi r0, 0x12
    bne lbl_fn_8057625C_00000424
    stb r7, 0x4b(r9)
lbl_fn_8057625C_00000424:
    addi r28, r28, 0x1
    addi r6, r6, 0x8
lbl_fn_8057625C_0000042C:
    lwz r8, 0x18(r11)
    cmpw r28, r8
    blt lbl_fn_8057625C_000003B4
lbl_fn_8057625C_00000438:
    addi r29, r29, 0x1
    addi r5, r5, 0x8
lbl_fn_8057625C_00000440:
    lwz r6, 0x1c(r10)
    cmpw r29, r6
    blt lbl_fn_8057625C_0000036C
lbl_fn_8057625C_0000044C:
    addi r30, r30, 0x1
    addi r4, r4, 0x8
lbl_fn_8057625C_00000454:
    lwz r5, 0x40(r9)
    cmpw r30, r5
    blt lbl_fn_8057625C_00000324
    addi r12, r12, 0x8
    addi r31, r31, 0x1
lbl_fn_8057625C_00000468:
    lwz r0, 0xbc(r3)
    cmplw r31, r0
    blt lbl_fn_8057625C_00000310
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    addi r1, r1, 0x20
    blr
}

asm void fn_805763FC(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_80576404(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r0, 0xc(r3)
    cmpwi r0, 0xc
    bne lbl_fn_80576404_00000618
    lis r30, lbl_80760FC0@ha
    li r4, 0x0
    addi r3, r30, lbl_80760FC0@l
    bl fn_800DC880
    mr r4, r3
    mr r3, r29
    bl fn_80539334
    addi r4, r30, lbl_80760FC0@l
    lfs f31, 0x4(r3)
    addi r3, r4, 0x6
    li r4, 0x0
    bl fn_800DC880
    mr r4, r3
    mr r3, r29
    bl fn_80539334
    lfs f0, lbl_80888088
    lfs f2, 0x4(r3)
    fcmpu cr0, f0, f31
    bne lbl_fn_80576404_00000518
    fcmpu cr0, f0, f2
    beq lbl_fn_80576404_000006D8
lbl_fn_80576404_00000518:
    lis r3, lbl_807C8AB0@ha
    lfs f3, lbl_8088808C
    addi r3, r3, lbl_807C8AB0@l
    li r31, 0x0
    lfs f0, 0x4(r3)
    lfs f1, 0x0(r3)
    fsubs f0, f2, f0
    fsubs f1, f31, f1
    fmuls f0, f0, f0
    fmadds f0, f1, f1, f0
    fcmpo cr0, f0, f3
    bge lbl_fn_80576404_00000550
    fmr f3, f0
    li r31, 0x0
lbl_fn_80576404_00000550:
    lfs f0, 0xc(r3)
    lfs f1, 0x8(r3)
    fsubs f0, f2, f0
    fsubs f1, f31, f1
    fmuls f0, f0, f0
    fmadds f0, f1, f1, f0
    fcmpo cr0, f0, f3
    bge lbl_fn_80576404_00000578
    fmr f3, f0
    li r31, 0x1
lbl_fn_80576404_00000578:
    lfs f0, 0x14(r3)
    lfs f1, 0x10(r3)
    fsubs f0, f2, f0
    fsubs f1, f31, f1
    fmuls f0, f0, f0
    fmadds f0, f1, f1, f0
    fcmpo cr0, f0, f3
    bge lbl_fn_80576404_0000059C
    li r31, 0x2
lbl_fn_80576404_0000059C:
    lis r30, lbl_80760FC0@ha
    li r4, 0x0
    addi r30, r30, lbl_80760FC0@l
    addi r3, r30, 0xd
    bl fn_800DC880
    mr r4, r3
    mr r3, r29
    bl fn_80539334
    li r0, 0x1f
    stw r0, 0x0(r3)
    li r4, 0x0
    stw r31, 0x4(r3)
    mr r3, r30
    bl fn_800DC880
    mr r4, r3
    mr r3, r29
    bl fn_80539334
    li r31, 0x1
    stw r31, 0x0(r3)
    lfs f0, lbl_80888088
    li r4, 0x0
    stfs f0, 0x4(r3)
    addi r3, r30, 0x6
    bl fn_800DC880
    mr r4, r3
    mr r3, r29
    bl fn_80539334
    stw r31, 0x0(r3)
    lfs f0, lbl_80888088
    stfs f0, 0x4(r3)
    b lbl_fn_80576404_000006D8
lbl_fn_80576404_00000618:
    cmpwi r0, 0x21
    bne lbl_fn_80576404_0000068C
    lwz r0, 0x18(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80576404_000006D8
    lis r31, lbl_80760FC0@ha
    li r4, 0x0
    addi r31, r31, lbl_80760FC0@l
    addi r3, r31, 0x14
    bl fn_800DC880
    mr r4, r3
    mr r3, r29
    bl fn_80539334
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80576404_00000680
    lwz r30, 0x18(r29)
    addi r3, r31, 0x14
    li r4, 0x0
    bl fn_800DC880
    mr r4, r3
    mr r3, r29
    bl fn_80539334
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r30, 0x4(r3)
lbl_fn_80576404_00000680:
    li r0, 0x0
    stw r0, 0x18(r29)
    b lbl_fn_80576404_000006D8
lbl_fn_80576404_0000068C:
    cmpwi r0, 0x1a
    bne lbl_fn_80576404_000006D8
    lwz r0, 0x30(r3)
    cmpwi r0, 0x0
    ble lbl_fn_80576404_000006A8
    lwz r4, 0x2c(r3)
    b lbl_fn_80576404_000006AC
lbl_fn_80576404_000006A8:
    li r4, 0x0
lbl_fn_80576404_000006AC:
    lwz r0, 0x4(r4)
    cmpwi r0, 0x3
    bne lbl_fn_80576404_000006D8
    lwz r5, 0x18(r3)
    cmpwi r5, 0x0
    ble lbl_fn_80576404_000006D8
    lwz r4, 0x10(r3)
    li r0, 0x0
    stw r0, 0x18(r3)
    add r0, r4, r5
    stw r0, 0x14(r3)
lbl_fn_80576404_000006D8:
    lwz r0, 0x34(r1)
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8057666C(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stmw r20, 0x10(r1)
    mr r30, r3
    li r31, 0x0
    li r29, 0x0
    b lbl_fn_8057666C_00000848
lbl_fn_8057666C_0000071C:
    cmpwi r31, 0x0
    li r0, 0x0
    blt lbl_fn_8057666C_00000734
    cmpw r31, r3
    bge lbl_fn_8057666C_00000734
    li r0, 0x1
lbl_fn_8057666C_00000734:
    cmpwi r0, 0x0
    beq lbl_fn_8057666C_00000748
    lwz r3, 0xb8(r30)
    lwzx r25, r3, r29
    b lbl_fn_8057666C_0000074C
lbl_fn_8057666C_00000748:
    li r25, 0x0
lbl_fn_8057666C_0000074C:
    li r24, 0x0
    li r28, 0x0
    b lbl_fn_8057666C_00000834
lbl_fn_8057666C_00000758:
    cmpwi r24, 0x0
    li r0, 0x0
    blt lbl_fn_8057666C_00000770
    cmpw r24, r3
    bge lbl_fn_8057666C_00000770
    li r0, 0x1
lbl_fn_8057666C_00000770:
    cmpwi r0, 0x0
    beq lbl_fn_8057666C_00000784
    lwz r3, 0x3c(r25)
    lwzx r23, r3, r28
    b lbl_fn_8057666C_00000788
lbl_fn_8057666C_00000784:
    li r23, 0x0
lbl_fn_8057666C_00000788:
    li r22, 0x0
    li r27, 0x0
    b lbl_fn_8057666C_00000820
lbl_fn_8057666C_00000794:
    cmpwi r22, 0x0
    li r0, 0x0
    blt lbl_fn_8057666C_000007AC
    cmpw r22, r3
    bge lbl_fn_8057666C_000007AC
    li r0, 0x1
lbl_fn_8057666C_000007AC:
    cmpwi r0, 0x0
    beq lbl_fn_8057666C_000007C0
    lwz r3, 0x18(r23)
    lwzx r21, r3, r27
    b lbl_fn_8057666C_000007C4
lbl_fn_8057666C_000007C0:
    li r21, 0x0
lbl_fn_8057666C_000007C4:
    li r20, 0x0
    li r26, 0x0
    b lbl_fn_8057666C_0000080C
lbl_fn_8057666C_000007D0:
    cmpwi r20, 0x0
    li r0, 0x0
    blt lbl_fn_8057666C_000007E8
    cmpw r20, r3
    bge lbl_fn_8057666C_000007E8
    li r0, 0x1
lbl_fn_8057666C_000007E8:
    cmpwi r0, 0x0
    beq lbl_fn_8057666C_000007FC
    lwz r3, 0x14(r21)
    lwzx r3, r3, r26
    b lbl_fn_8057666C_00000800
lbl_fn_8057666C_000007FC:
    li r3, 0x0
lbl_fn_8057666C_00000800:
    bl fn_80576404
    addi r20, r20, 0x1
    addi r26, r26, 0x8
lbl_fn_8057666C_0000080C:
    lwz r3, 0x18(r21)
    cmpw r20, r3
    blt lbl_fn_8057666C_000007D0
    addi r22, r22, 0x1
    addi r27, r27, 0x8
lbl_fn_8057666C_00000820:
    lwz r3, 0x1c(r23)
    cmpw r22, r3
    blt lbl_fn_8057666C_00000794
    addi r24, r24, 0x1
    addi r28, r28, 0x8
lbl_fn_8057666C_00000834:
    lwz r3, 0x40(r25)
    cmpw r24, r3
    blt lbl_fn_8057666C_00000758
    addi r31, r31, 0x1
    addi r29, r29, 0x8
lbl_fn_8057666C_00000848:
    lwz r3, 0xbc(r30)
    cmpw r31, r3
    blt lbl_fn_8057666C_0000071C
    lmw r20, 0x10(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_805767D8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r3, r1, 0x8
    stw r31, 0x1c(r1)
    mr r31, r5
    mr r4, r31
    li r5, 0x4
    bl memcpy
    lwz r3, 0x8(r1)
    subis r0, r3, 0x4556
    cmplwi r0, 0x454e
    beq lbl_fn_805767D8_000008B4
    mr r4, r31
    addi r3, r1, 0xc
    li r5, 0x4
    bl memcpy
    li r0, 0x0
    stb r0, 0x10(r1)
lbl_fn_805767D8_000008B4:
    lwz r31, 0x1c(r1)
    li r3, 0x4
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8057683C(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0xa4(r1)
    subis r0, r3, 0x5345
    cmplwi r0, 0x5155
    stw r31, 0x9c(r1)
    lwz r6, lbl_8087F9B8
    lwz r31, 0x10(r6)
    stw r4, 0x14(r6)
    lwz r3, lbl_8087F9B8
    stw r4, 0x18(r3)
    lwz r3, lbl_8087F9B8
    stw r4, 0x1c(r3)
    lwz r3, lbl_8087F9B8
    stw r4, 0x20(r3)
    lwz r3, lbl_8087F9B8
    stw r4, 0x24(r3)
    lwz r3, lbl_8087F9B8
    stw r4, 0x28(r3)
    bne lbl_fn_8057683C_00000A54
    mr r4, r5
    addi r3, r1, 0x68
    li r5, 0x28
    bl memcpy
    lwz r0, 0x68(r1)
    addi r5, r1, 0x34
    addi r6, r1, 0x28
    li r3, 0x28
    clrlwi r0, r0, 28
    stw r0, 0x50(r31)
    lwz r0, 0x68(r1)
    extrwi r0, r0, 4, 24
    stw r0, 0x54(r31)
    lwz r0, 0x68(r1)
    lwz r4, 0x98(r31)
    rlwinm r7, r0, 0, 26, 26
    neg r0, r7
    or r0, r0, r7
    rlwimi r4, r0, 29, 3, 3
    stw r4, 0x98(r31)
    lwz r0, 0x68(r1)
    rlwinm r7, r0, 0, 25, 25
    neg r0, r7
    or r0, r0, r7
    rlwimi r4, r0, 25, 7, 7
    stw r4, 0x98(r31)
    lwz r0, 0x68(r1)
    rlwinm r7, r0, 0, 24, 24
    neg r0, r7
    or r0, r0, r7
    rlwimi r4, r0, 28, 4, 4
    stw r4, 0x98(r31)
    lwz r0, 0x68(r1)
    rlwinm r7, r0, 0, 23, 23
    neg r0, r7
    or r0, r0, r7
    rlwimi r4, r0, 24, 8, 8
    stw r4, 0x98(r31)
    lwz r0, 0x68(r1)
    rlwinm r7, r0, 0, 22, 22
    neg r0, r7
    or r0, r0, r7
    rlwimi r4, r0, 23, 9, 9
    stw r4, 0x98(r31)
    lbz r8, 0x6f(r1)
    lbz r7, 0x6e(r1)
    lhz r4, 0x6c(r1)
    sth r4, 0x58(r31)
    stb r7, 0x5a(r31)
    stb r8, 0x5b(r31)
    lha r0, 0x70(r1)
    stw r0, 0x94(r31)
    lfs f3, 0x78(r1)
    lfs f4, 0x7c(r1)
    lfs f0, 0x74(r1)
    stfs f0, 0x34(r1)
    fmr f2, f4
    stfs f3, 0x38(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x9c(r31), 0, 0
    stfs f2, 0xa4(r31)
    lfs f3, 0x84(r1)
    lfs f0, 0x80(r1)
    lfs f2, 0x88(r1)
    stfs f0, 0x28(r1)
    stfs f3, 0x2c(r1)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0xa8(r31), 0, 0
    stfs f2, 0xb0(r31)
    lfs f0, 0x8c(r1)
    sth r4, 0xc(r1)
    stb r7, 0xe(r1)
    stb r8, 0xf(r1)
    stfs f4, 0x3c(r1)
    stfs f2, 0x30(r1)
    stfs f0, 0xb4(r31)
    b lbl_fn_8057683C_00000B84
lbl_fn_8057683C_00000A54:
    mr r4, r5
    addi r3, r1, 0x40
    li r5, 0x28
    bl memcpy
    lwz r0, 0x40(r1)
    addi r5, r1, 0x1c
    addi r6, r1, 0x10
    li r3, 0x28
    clrlwi r0, r0, 28
    stw r0, 0x50(r31)
    lwz r0, 0x40(r1)
    extrwi r0, r0, 4, 24
    stw r0, 0x54(r31)
    lwz r0, 0x40(r1)
    lwz r4, 0x98(r31)
    rlwinm r7, r0, 0, 23, 23
    neg r0, r7
    or r0, r0, r7
    rlwimi r4, r0, 29, 3, 3
    stw r4, 0x98(r31)
    lwz r0, 0x40(r1)
    rlwinm r7, r0, 0, 22, 22
    neg r0, r7
    or r0, r0, r7
    rlwimi r4, r0, 25, 7, 7
    stw r4, 0x98(r31)
    lwz r0, 0x40(r1)
    rlwinm r7, r0, 0, 21, 21
    neg r0, r7
    or r0, r0, r7
    rlwimi r4, r0, 28, 4, 4
    stw r4, 0x98(r31)
    lwz r0, 0x40(r1)
    rlwinm r7, r0, 0, 20, 20
    neg r0, r7
    or r0, r0, r7
    rlwimi r4, r0, 24, 8, 8
    stw r4, 0x98(r31)
    lwz r0, 0x40(r1)
    rlwinm r7, r0, 0, 19, 19
    neg r0, r7
    or r0, r0, r7
    rlwimi r4, r0, 23, 9, 9
    stw r4, 0x98(r31)
    lbz r8, 0x47(r1)
    lbz r7, 0x46(r1)
    lhz r4, 0x44(r1)
    sth r4, 0x58(r31)
    stb r7, 0x5a(r31)
    stb r8, 0x5b(r31)
    lha r0, 0x48(r1)
    stw r0, 0x94(r31)
    lfs f3, 0x50(r1)
    lfs f4, 0x54(r1)
    lfs f0, 0x4c(r1)
    stfs f0, 0x1c(r1)
    fmr f2, f4
    stfs f3, 0x20(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x9c(r31), 0, 0
    stfs f2, 0xa4(r31)
    lfs f3, 0x5c(r1)
    lfs f0, 0x58(r1)
    lfs f2, 0x60(r1)
    stfs f0, 0x10(r1)
    stfs f3, 0x14(r1)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0xa8(r31), 0, 0
    stfs f2, 0xb0(r31)
    lfs f0, 0x64(r1)
    sth r4, 0x8(r1)
    stb r7, 0xa(r1)
    stb r8, 0xb(r1)
    stfs f4, 0x24(r1)
    stfs f2, 0x18(r1)
    stfs f0, 0xb4(r31)
lbl_fn_8057683C_00000B84:
    lwz r0, 0xa4(r1)
    lwz r31, 0x9c(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_80576B08(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r27, r4
    mr r31, r5
    lwz r3, lbl_8087F9B8
    lwz r30, 0x10(r3)
    beq lbl_fn_80576B08_00000BD0
    mr r3, r31
    bl strlen
    mr r28, r3
    b lbl_fn_80576B08_00000BD4
lbl_fn_80576B08_00000BD0:
    li r28, 0x0
lbl_fn_80576B08_00000BD4:
    cmpwi r31, 0x0
    beq lbl_fn_80576B08_00000C30
    cmpwi r28, 0x0
    beq lbl_fn_80576B08_00000C30
    addi r3, r28, 0x1
    li r4, 0x1
    la r5, lbl_8087D790
    la r6, lbl_8087D78C
    li r7, 0x0
    bl fn_800846FC
    mr r29, r3
    mr r4, r31
    mr r5, r28
    bl memcpy
    li r31, 0x0
    stbx r31, r29, r28
    lwz r3, 0x4c(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80576B08_00000C28
    bl fn_80084C24
    stw r31, 0x4c(r30)
lbl_fn_80576B08_00000C28:
    stw r29, 0x4c(r30)
    b lbl_fn_80576B08_00000C48
lbl_fn_80576B08_00000C30:
    lwz r3, 0x4c(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80576B08_00000C48
    bl fn_80084C24
    li r0, 0x0
    stw r0, 0x4c(r30)
lbl_fn_80576B08_00000C48:
    mr r3, r27
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80576BD0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r5
    stw r28, 0x10(r1)
    mr r28, r4
    lwz r3, lbl_8087F9B8
    lwz r31, 0x10(r3)
    lwz r0, 0x68(r31)
    srwi. r0, r0, 31
    bne lbl_fn_80576BD0_00000CA4
    lbz r0, 0x68(r31)
    clrlwi r30, r0, 25
    b lbl_fn_80576BD0_00000CA8
lbl_fn_80576BD0_00000CA4:
    lwz r30, 0x6c(r31)
lbl_fn_80576BD0_00000CA8:
    lbz r0, 0x8(r1)
    mr r3, r29
    stb r0, 0xc(r1)
    bl strlen
    mr r0, r3
    mr r5, r30
    mr r6, r29
    addi r3, r31, 0x68
    add r7, r29, r0
    addi r8, r1, 0xc
    li r4, 0x0
    bl fn_80013F78
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

asm void fn_80576C6C(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    mr r4, r5
    li r5, 0x4
    stw r0, 0x44(r1)
    addi r3, r1, 0x14
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    stw r29, 0x34(r1)
    stw r28, 0x30(r1)
    lwz r6, lbl_8087F9B8
    lwz r29, 0x10(r6)
    bl memcpy
    lwz r3, 0x60(r29)
    lwz r4, 0x64(r29)
    lwz r31, 0x14(r1)
    cmplw r3, r4
    bge lbl_fn_80576C6C_00000D60
    addi r3, r3, 0x1
    stw r3, 0x60(r29)
    subi r0, r3, 0x1
    lwz r3, 0x5c(r29)
    slwi r0, r0, 2
    stwx r31, r3, r0
    b lbl_fn_80576C6C_00000FE0
lbl_fn_80576C6C_00000D60:
    lis r3, 0x4000
    subi r0, r3, 0x1
    subf r0, r4, r0
    cmplwi r0, 0x1
    bge lbl_fn_80576C6C_00000D98
    lis r4, lbl_80760FC0@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80760FC0@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1f
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80576C6C_00000D98:
    li r5, 0x0
    addi r4, r29, 0x64
    lis r3, 0x4000
    stw r5, 0x18(r1)
    subi r0, r3, 0x1
    stw r5, 0x1c(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r5, 0x28(r1)
    lwz r3, 0x60(r29)
    lwz r4, 0x64(r29)
    addi r3, r3, 0x1
    subf r3, r4, r3
    stw r3, 0x8(r1)
    lwz r30, 0x64(r29)
    subf r0, r30, r0
    cmplw r3, r0
    ble lbl_fn_80576C6C_00000E04
    lis r4, lbl_80760FC0@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80760FC0@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1f
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80576C6C_00000E04:
    lis r3, 0x1555
    addi r0, r3, 0x5555
    cmplw r30, r0
    bge lbl_fn_80576C6C_00000E54
    addi r5, r30, 0x1
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
    bge lbl_fn_80576C6C_00000E48
    addi r3, r1, 0x8
lbl_fn_80576C6C_00000E48:
    lwz r0, 0x0(r3)
    add r28, r30, r0
    b lbl_fn_80576C6C_00000E98
lbl_fn_80576C6C_00000E54:
    lis r3, 0x2aab
    subi r0, r3, 0x5556
    cmplw r30, r0
    bge lbl_fn_80576C6C_00000E90
    addi r3, r30, 0x1
    lwz r0, 0x8(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_80576C6C_00000E84
    addi r3, r1, 0x8
lbl_fn_80576C6C_00000E84:
    lwz r0, 0x0(r3)
    add r28, r30, r0
    b lbl_fn_80576C6C_00000E98
lbl_fn_80576C6C_00000E90:
    lis r3, 0x4000
    subi r28, r3, 0x1
lbl_fn_80576C6C_00000E98:
    lis r3, 0x4000
    subi r0, r3, 0x1
    cmplw r28, r0
    ble lbl_fn_80576C6C_00000ECC
    lis r4, lbl_80760FC0@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80760FC0@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1f
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80576C6C_00000ECC:
    slwi r3, r28, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_80576C6C_00000F00
    lis r3, __files@ha
    lis r4, lbl_80775A88@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80576C6C_00000F00:
    lwz r0, 0x1c(r1)
    stw r30, 0x18(r1)
    slwi r3, r0, 2
    stw r28, 0x20(r1)
    lwz r0, 0x60(r29)
    stw r0, 0x28(r1)
    slwi r0, r0, 2
    add r0, r30, r0
    stwx r31, r3, r0
    lwz r3, 0x1c(r1)
    lwz r0, 0x28(r1)
    addi r3, r3, 0x1
    stw r3, 0x1c(r1)
    lwz r3, 0x18(r1)
    lwz r4, 0x60(r29)
    lwz r28, 0x5c(r29)
    slwi r4, r4, 2
    add r5, r28, r4
    subf r5, r28, r5
    mr r4, r28
    srawi r5, r5, 2
    addze r30, r5
    subf r0, r30, r0
    stw r0, 0x28(r1)
    slwi r31, r30, 2
    slwi r0, r0, 2
    mr r5, r31
    add r3, r3, r0
    bl memcpy
    mr r3, r28
    mr r5, r31
    li r4, 0x0
    bl memset
    lwz r0, 0x1c(r1)
    li r4, 0x0
    addic. r3, r1, 0x18
    add r0, r0, r30
    stw r0, 0x1c(r1)
    stw r4, 0x60(r29)
    lwz r3, 0x64(r29)
    lwz r0, 0x20(r1)
    stw r0, 0x64(r29)
    stw r3, 0x20(r1)
    lwz r0, 0x18(r1)
    lwz r3, 0x5c(r29)
    stw r0, 0x5c(r29)
    stw r3, 0x18(r1)
    lwz r0, 0x1c(r1)
    stw r0, 0x60(r29)
    stw r4, 0x1c(r1)
    beq lbl_fn_80576C6C_00000FE0
    lwz r3, 0x18(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80576C6C_00000FE0
    stw r4, 0x1c(r1)
    bl dtor_80084684
lbl_fn_80576C6C_00000FE0:
    lwz r31, 0x3c(r1)
    li r3, 0x4
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80576F74(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    mr r4, r5
    li r5, 0x4
    stw r0, 0x94(r1)
    addi r3, r1, 0x34
    stmw r24, 0x70(r1)
    lwz r6, lbl_8087F9B8
    lwz r27, 0x10(r6)
    bl memcpy
    lwz r3, 0x34(r1)
    lis r28, lbl_80760FC0@ha
    addi r28, r28, lbl_80760FC0@l
    lis r26, lbl_80775A48@ha
    addi r29, r3, 0xef
    stw r29, 0x34(r1)
    addi r30, r28, 0x33
    addi r26, r26, lbl_80775A48@l
    lwz r0, 0xd0(r27)
    li r25, 0x0
    stw r0, 0x3c(r1)
    mr r3, r30
    addi r31, r1, 0x40
    stw r26, 0x38(r1)
    stw r25, 0x40(r1)
    stw r25, 0x44(r1)
    stw r25, 0x48(r1)
    bl strlen
    mr r24, r3
    mr r3, r31
    mr r4, r24
    bl fn_80013DC4
    lbz r0, 0x8(r1)
    mr r3, r31
    stb r0, 0xc(r1)
    mr r6, r30
    add r7, r30, r24
    addi r8, r1, 0xc
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    lis r3, lbl_80782F88@ha
    stw r29, 0x4c(r1)
    addi r3, r3, lbl_80782F88@l
    stw r3, 0x38(r1)
    stw r25, 0x50(r1)
    lwz r0, 0xc8(r27)
    lwz r4, 0xcc(r27)
    cmplw r0, r4
    bge lbl_fn_80576F74_00001178
    mulli r0, r0, 0x1c
    lwz r3, 0xc4(r27)
    add. r28, r3, r0
    beq lbl_fn_80576F74_00001168
    stw r26, 0x0(r28)
    lwz r0, 0x3c(r1)
    stw r0, 0x4(r28)
    lwz r3, 0x40(r1)
    srwi. r0, r3, 31
    bne lbl_fn_80576F74_0000110C
    lwz r0, 0x44(r1)
    stw r3, 0x8(r28)
    stw r0, 0xc(r28)
    lwz r0, 0x48(r1)
    stw r0, 0x10(r28)
    b lbl_fn_80576F74_0000114C
lbl_fn_80576F74_0000110C:
    stw r25, 0x8(r28)
    addi r3, r28, 0x8
    stw r25, 0xc(r28)
    stw r25, 0x10(r28)
    lwz r4, 0x44(r1)
    bl fn_80013DC4
    lbz r5, 0x20(r1)
    addi r3, r28, 0x8
    stb r5, 0x24(r1)
    addi r8, r1, 0x24
    lwz r6, 0x48(r1)
    li r4, 0x0
    lwz r0, 0x44(r1)
    li r5, 0x0
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_80576F74_0000114C:
    lwz r0, 0x4c(r1)
    lis r3, lbl_80782F88@ha
    stw r0, 0x14(r28)
    addi r3, r3, lbl_80782F88@l
    stw r3, 0x0(r28)
    lwz r0, 0x50(r1)
    stw r0, 0x18(r28)
lbl_fn_80576F74_00001168:
    lwz r3, 0xc8(r27)
    addi r0, r3, 0x1
    stw r0, 0xc8(r27)
    b lbl_fn_80576F74_000015B0
lbl_fn_80576F74_00001178:
    lis r3, 0x925
    subi r0, r3, 0x6db7
    subf r0, r4, r0
    cmplwi r0, 0x1
    bge lbl_fn_80576F74_000011A8
    lis r3, __files@ha
    addi r4, r28, 0x1f
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80576F74_000011A8:
    li r5, 0x0
    addi r4, r27, 0xcc
    lis r3, 0x925
    stw r5, 0x54(r1)
    subi r0, r3, 0x6db7
    stw r5, 0x58(r1)
    stw r5, 0x5c(r1)
    stw r4, 0x60(r1)
    stw r5, 0x64(r1)
    lwz r3, 0xc8(r27)
    lwz r4, 0xcc(r27)
    addi r3, r3, 0x1
    subf r3, r4, r3
    stw r3, 0x28(r1)
    lwz r29, 0xcc(r27)
    subf r0, r29, r0
    cmplw r3, r0
    ble lbl_fn_80576F74_00001214
    lis r4, lbl_80760FC0@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80760FC0@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1f
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80576F74_00001214:
    lis r3, 0x30c
    addi r0, r3, 0x30c3
    cmplw r29, r0
    bge lbl_fn_80576F74_00001264
    addi r5, r29, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x28(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x30
    srwi r4, r4, 2
    stw r4, 0x30(r1)
    cmplw r4, r0
    bge lbl_fn_80576F74_00001258
    addi r3, r1, 0x28
lbl_fn_80576F74_00001258:
    lwz r0, 0x0(r3)
    add r28, r29, r0
    b lbl_fn_80576F74_000012A8
lbl_fn_80576F74_00001264:
    lis r3, 0x618
    addi r0, r3, 0x6186
    cmplw r29, r0
    bge lbl_fn_80576F74_000012A0
    addi r3, r29, 0x1
    lwz r0, 0x28(r1)
    srwi r3, r3, 1
    stw r3, 0x2c(r1)
    cmplw r3, r0
    addi r3, r1, 0x2c
    bge lbl_fn_80576F74_00001294
    addi r3, r1, 0x28
lbl_fn_80576F74_00001294:
    lwz r0, 0x0(r3)
    add r28, r29, r0
    b lbl_fn_80576F74_000012A8
lbl_fn_80576F74_000012A0:
    lis r3, 0x925
    subi r28, r3, 0x6db7
lbl_fn_80576F74_000012A8:
    lis r3, 0x925
    subi r0, r3, 0x6db7
    cmplw r28, r0
    ble lbl_fn_80576F74_000012DC
    lis r4, lbl_80760FC0@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80760FC0@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1f
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80576F74_000012DC:
    mulli r3, r28, 0x1c
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r26, r3
    bne lbl_fn_80576F74_00001310
    lis r3, __files@ha
    lis r4, lbl_8079449C@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8079449C@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80576F74_00001310:
    stw r26, 0x54(r1)
    lis r3, lbl_80775A48@ha
    lwz r0, 0x58(r1)
    lis r25, lbl_80782F88@ha
    stw r28, 0x5c(r1)
    addi r3, r3, lbl_80775A48@l
    mulli r5, r0, 0x1c
    addi r25, r25, lbl_80782F88@l
    lwz r4, 0xc8(r27)
    li r0, 0x0
    stw r4, 0x64(r1)
    mulli r4, r4, 0x1c
    add r4, r26, r4
    add. r26, r5, r4
    beq lbl_fn_80576F74_000013D0
    stw r3, 0x0(r26)
    lwz r3, 0x3c(r1)
    stw r3, 0x4(r26)
    lwz r4, 0x40(r1)
    srwi. r3, r4, 31
    bne lbl_fn_80576F74_0000137C
    lwz r0, 0x44(r1)
    stw r4, 0x8(r26)
    stw r0, 0xc(r26)
    lwz r0, 0x48(r1)
    stw r0, 0x10(r26)
    b lbl_fn_80576F74_000013BC
lbl_fn_80576F74_0000137C:
    stw r0, 0x8(r26)
    addi r3, r26, 0x8
    stw r0, 0xc(r26)
    stw r0, 0x10(r26)
    lwz r4, 0x44(r1)
    bl fn_80013DC4
    lbz r5, 0x14(r1)
    addi r3, r26, 0x8
    stb r5, 0x10(r1)
    addi r8, r1, 0x10
    lwz r6, 0x48(r1)
    li r4, 0x0
    lwz r0, 0x44(r1)
    li r5, 0x0
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_80576F74_000013BC:
    lwz r0, 0x4c(r1)
    stw r0, 0x14(r26)
    stw r25, 0x0(r26)
    lwz r0, 0x50(r1)
    stw r0, 0x18(r26)
lbl_fn_80576F74_000013D0:
    lwz r3, 0x58(r1)
    lis r31, lbl_80775A48@ha
    lwz r0, 0x64(r1)
    lis r26, lbl_80782F88@ha
    addi r3, r3, 0x1
    stw r3, 0x58(r1)
    mulli r0, r0, 0x1c
    lwz r3, 0x54(r1)
    lwz r4, 0xc8(r27)
    addi r31, r31, lbl_80775A48@l
    lwz r28, 0xc4(r27)
    addi r26, r26, lbl_80782F88@l
    mulli r4, r4, 0x1c
    add r29, r3, r0
    li r25, 0x0
    add r30, r28, r4
    b lbl_fn_80576F74_000014BC
lbl_fn_80576F74_00001414:
    subic. r29, r29, 0x1c
    subi r30, r30, 0x1c
    beq lbl_fn_80576F74_000014A4
    stw r31, 0x0(r29)
    lwz r0, 0x4(r30)
    stw r0, 0x4(r29)
    lwz r3, 0x8(r30)
    srwi. r0, r3, 31
    bne lbl_fn_80576F74_00001450
    lwz r0, 0xc(r30)
    stw r3, 0x8(r29)
    stw r0, 0xc(r29)
    lwz r0, 0x10(r30)
    stw r0, 0x10(r29)
    b lbl_fn_80576F74_00001490
lbl_fn_80576F74_00001450:
    stw r25, 0x8(r29)
    addi r3, r29, 0x8
    stw r25, 0xc(r29)
    stw r25, 0x10(r29)
    lwz r4, 0xc(r30)
    bl fn_80013DC4
    lbz r0, 0x1c(r1)
    addi r3, r29, 0x8
    stb r0, 0x18(r1)
    addi r8, r1, 0x18
    li r4, 0x0
    li r5, 0x0
    lwz r6, 0x10(r30)
    lwz r0, 0xc(r30)
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_80576F74_00001490:
    lwz r0, 0x14(r30)
    stw r0, 0x14(r29)
    stw r26, 0x0(r29)
    lwz r0, 0x18(r30)
    stw r0, 0x18(r29)
lbl_fn_80576F74_000014A4:
    lwz r4, 0x64(r1)
    lwz r3, 0x58(r1)
    subi r0, r4, 0x1
    stw r0, 0x64(r1)
    addi r0, r3, 0x1
    stw r0, 0x58(r1)
lbl_fn_80576F74_000014BC:
    cmplw r30, r28
    bgt lbl_fn_80576F74_00001414
    lwz r3, 0xcc(r27)
    addi r28, r1, 0x54
    lwz r0, 0x5c(r1)
    stw r0, 0xcc(r27)
    stw r3, 0x5c(r1)
    lwz r0, 0x54(r1)
    lwz r3, 0xc4(r27)
    stw r0, 0xc4(r27)
    stw r3, 0x54(r1)
    lwz r0, 0x58(r1)
    lwz r5, 0xc8(r27)
    stw r0, 0xc8(r27)
    mulli r0, r5, 0x1c
    lwz r3, 0x64(r1)
    lwz r4, 0x54(r1)
    mulli r3, r3, 0x1c
    stw r5, 0x58(r1)
    add r25, r4, r3
    add r26, r25, r0
    b lbl_fn_80576F74_0000153C
lbl_fn_80576F74_00001514:
    subic. r26, r26, 0x1c
    beq lbl_fn_80576F74_0000153C
    beq lbl_fn_80576F74_0000153C
    addic. r0, r26, 0x8
    beq lbl_fn_80576F74_0000153C
    lwz r0, 0x8(r26)
    srwi. r0, r0, 31
    beq lbl_fn_80576F74_0000153C
    lwz r3, 0x10(r26)
    bl dtor_80084684
lbl_fn_80576F74_0000153C:
    cmplw r26, r25
    bgt lbl_fn_80576F74_00001514
    cmpwi r28, 0x0
    li r0, 0x0
    stw r0, 0x58(r1)
    beq lbl_fn_80576F74_000015B0
    lwz r3, 0x54(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80576F74_000015B0
    mulli r0, r0, 0x1c
    li r26, 0x0
    stw r26, 0x58(r1)
    add r25, r3, r0
    b lbl_fn_80576F74_000015A0
lbl_fn_80576F74_00001574:
    subic. r25, r25, 0x1c
    beq lbl_fn_80576F74_0000159C
    beq lbl_fn_80576F74_0000159C
    addic. r0, r25, 0x8
    beq lbl_fn_80576F74_0000159C
    lwz r0, 0x8(r25)
    srwi. r0, r0, 31
    beq lbl_fn_80576F74_0000159C
    lwz r3, 0x10(r25)
    bl dtor_80084684
lbl_fn_80576F74_0000159C:
    subi r26, r26, 0x1
lbl_fn_80576F74_000015A0:
    cmpwi r26, 0x0
    bne lbl_fn_80576F74_00001574
    lwz r3, 0x54(r1)
    bl dtor_80084684
lbl_fn_80576F74_000015B0:
    addic. r0, r1, 0x38
    beq lbl_fn_80576F74_000015D4
    addic. r0, r0, 0x8
    beq lbl_fn_80576F74_000015D4
    lwz r0, 0x40(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80576F74_000015D4
    lwz r3, 0x48(r1)
    bl dtor_80084684
lbl_fn_80576F74_000015D4:
    lwz r4, 0xc8(r27)
    li r3, 0x4
    lwz r5, 0xc4(r27)
    subi r0, r4, 0x1
    lwz r4, lbl_8087F9B8
    mulli r0, r0, 0x1c
    add r0, r5, r0
    stw r0, 0x2c(r4)
    lmw r24, 0x70(r1)
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_80577578(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    li r0, 0x0
    stw r31, 0x3c(r1)
    mr r31, r4
    stw r30, 0x38(r1)
    addi r30, r1, 0x18
    stw r29, 0x34(r1)
    stw r28, 0x30(r1)
    mr r28, r5
    mr r3, r28
    stw r0, 0x18(r1)
    stw r0, 0x1c(r1)
    stw r0, 0x20(r1)
    bl strlen
    mr r29, r3
    mr r3, r30
    mr r4, r29
    bl fn_80013DC4
    lbz r0, 0x14(r1)
    mr r3, r30
    stb r0, 0x10(r1)
    mr r6, r28
    add r7, r28, r29
    addi r8, r1, 0x10
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    lwz r3, lbl_8087F9B8
    lwz r7, 0x2c(r3)
    lwz r0, 0x8(r7)
    srwi. r4, r0, 31
    bne lbl_fn_80577578_000016B4
    lwz r3, 0x18(r1)
    srwi. r0, r3, 31
    bne lbl_fn_80577578_000016B4
    lwz r0, 0x1c(r1)
    stw r3, 0x8(r7)
    stw r0, 0xc(r7)
    lwz r0, 0x20(r1)
    stw r0, 0x10(r7)
    b lbl_fn_80577578_0000170C
lbl_fn_80577578_000016B4:
    cmpwi r4, 0x0
    beq lbl_fn_80577578_000016C4
    lwz r5, 0xc(r7)
    b lbl_fn_80577578_000016CC
lbl_fn_80577578_000016C4:
    lbz r0, 0x8(r7)
    clrlwi r5, r0, 25
lbl_fn_80577578_000016CC:
    lwz r0, 0x18(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80577578_000016E8
    lbz r0, 0x18(r1)
    addi r6, r1, 0x19
    clrlwi r4, r0, 25
    b lbl_fn_80577578_000016F0
lbl_fn_80577578_000016E8:
    lwz r6, 0x20(r1)
    lwz r4, 0x1c(r1)
lbl_fn_80577578_000016F0:
    lbz r0, 0x8(r1)
    addi r3, r7, 0x8
    stb r0, 0xc(r1)
    add r7, r6, r4
    addi r8, r1, 0xc
    li r4, 0x0
    bl fn_80013F78
lbl_fn_80577578_0000170C:
    lwz r0, 0x18(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80577578_00001720
    lwz r3, 0x20(r1)
    bl dtor_80084684
lbl_fn_80577578_00001720:
    mr r3, r31
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_805776B4(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    mr r4, r5
    li r5, 0x4
    stw r0, 0x94(r1)
    addi r3, r1, 0x34
    stmw r24, 0x70(r1)
    lwz r6, lbl_8087F9B8
    lwz r27, 0x10(r6)
    bl memcpy
    lwz r0, 0xe0(r27)
    lis r28, lbl_80760FC0@ha
    addi r28, r28, lbl_80760FC0@l
    lis r26, lbl_80775A48@ha
    li r25, 0x0
    stw r0, 0x3c(r1)
    addi r29, r28, 0x33
    addi r26, r26, lbl_80775A48@l
    stw r26, 0x38(r1)
    mr r3, r29
    lwz r30, 0x34(r1)
    addi r31, r1, 0x40
    stw r25, 0x40(r1)
    stw r25, 0x44(r1)
    stw r25, 0x48(r1)
    bl strlen
    mr r24, r3
    mr r3, r31
    mr r4, r24
    bl fn_80013DC4
    lbz r0, 0x8(r1)
    mr r3, r31
    stb r0, 0xc(r1)
    mr r6, r29
    add r7, r29, r24
    addi r8, r1, 0xc
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    lis r3, lbl_80782F60@ha
    stw r30, 0x4c(r1)
    addi r3, r3, lbl_80782F60@l
    stw r3, 0x38(r1)
    stw r25, 0x54(r1)
    stw r25, 0x50(r1)
    lwz r0, 0xd8(r27)
    lwz r4, 0xdc(r27)
    cmplw r0, r4
    bge lbl_fn_805776B4_000018BC
    lwz r3, 0xd4(r27)
    slwi r0, r0, 5
    add. r28, r3, r0
    beq lbl_fn_805776B4_000018AC
    stw r26, 0x0(r28)
    lwz r0, 0x3c(r1)
    stw r0, 0x4(r28)
    lwz r3, 0x40(r1)
    srwi. r0, r3, 31
    bne lbl_fn_805776B4_00001848
    lwz r0, 0x44(r1)
    stw r3, 0x8(r28)
    stw r0, 0xc(r28)
    lwz r0, 0x48(r1)
    stw r0, 0x10(r28)
    b lbl_fn_805776B4_00001888
lbl_fn_805776B4_00001848:
    stw r25, 0x8(r28)
    addi r3, r28, 0x8
    stw r25, 0xc(r28)
    stw r25, 0x10(r28)
    lwz r4, 0x44(r1)
    bl fn_80013DC4
    lbz r5, 0x20(r1)
    addi r3, r28, 0x8
    stb r5, 0x24(r1)
    addi r8, r1, 0x24
    lwz r6, 0x48(r1)
    li r4, 0x0
    lwz r0, 0x44(r1)
    li r5, 0x0
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_805776B4_00001888:
    lwz r0, 0x4c(r1)
    lis r3, lbl_80782F60@ha
    stw r0, 0x14(r28)
    addi r3, r3, lbl_80782F60@l
    stw r3, 0x0(r28)
    lwz r0, 0x50(r1)
    stw r0, 0x18(r28)
    lwz r0, 0x54(r1)
    stw r0, 0x1c(r28)
lbl_fn_805776B4_000018AC:
    lwz r3, 0xd8(r27)
    addi r0, r3, 0x1
    stw r0, 0xd8(r27)
    b lbl_fn_805776B4_00001CFC
lbl_fn_805776B4_000018BC:
    lis r3, 0x800
    subi r0, r3, 0x1
    subf r0, r4, r0
    cmplwi r0, 0x1
    bge lbl_fn_805776B4_000018EC
    lis r3, __files@ha
    addi r4, r28, 0x1f
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805776B4_000018EC:
    li r5, 0x0
    addi r4, r27, 0xdc
    lis r3, 0x800
    stw r5, 0x58(r1)
    subi r0, r3, 0x1
    stw r5, 0x5c(r1)
    stw r5, 0x60(r1)
    stw r4, 0x64(r1)
    stw r5, 0x68(r1)
    lwz r3, 0xd8(r27)
    lwz r4, 0xdc(r27)
    addi r3, r3, 0x1
    subf r3, r4, r3
    stw r3, 0x28(r1)
    lwz r29, 0xdc(r27)
    subf r0, r29, r0
    cmplw r3, r0
    ble lbl_fn_805776B4_00001958
    lis r4, lbl_80760FC0@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80760FC0@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1f
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805776B4_00001958:
    lis r3, 0x2ab
    subi r0, r3, 0x5556
    cmplw r29, r0
    bge lbl_fn_805776B4_000019A8
    addi r5, r29, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x28(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x30
    srwi r4, r4, 2
    stw r4, 0x30(r1)
    cmplw r4, r0
    bge lbl_fn_805776B4_0000199C
    addi r3, r1, 0x28
lbl_fn_805776B4_0000199C:
    lwz r0, 0x0(r3)
    add r28, r29, r0
    b lbl_fn_805776B4_000019EC
lbl_fn_805776B4_000019A8:
    lis r3, 0x555
    addi r0, r3, 0x5554
    cmplw r29, r0
    bge lbl_fn_805776B4_000019E4
    addi r3, r29, 0x1
    lwz r0, 0x28(r1)
    srwi r3, r3, 1
    stw r3, 0x2c(r1)
    cmplw r3, r0
    addi r3, r1, 0x2c
    bge lbl_fn_805776B4_000019D8
    addi r3, r1, 0x28
lbl_fn_805776B4_000019D8:
    lwz r0, 0x0(r3)
    add r28, r29, r0
    b lbl_fn_805776B4_000019EC
lbl_fn_805776B4_000019E4:
    lis r3, 0x800
    subi r28, r3, 0x1
lbl_fn_805776B4_000019EC:
    lis r3, 0x800
    subi r0, r3, 0x1
    cmplw r28, r0
    ble lbl_fn_805776B4_00001A20
    lis r4, lbl_80760FC0@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80760FC0@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1f
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805776B4_00001A20:
    slwi r3, r28, 5
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r26, r3
    bne lbl_fn_805776B4_00001A54
    lis r3, __files@ha
    lis r4, lbl_807944B8@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_807944B8@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805776B4_00001A54:
    stw r26, 0x58(r1)
    lis r3, lbl_80775A48@ha
    lwz r0, 0x5c(r1)
    lis r25, lbl_80782F60@ha
    stw r28, 0x60(r1)
    addi r3, r3, lbl_80775A48@l
    slwi r5, r0, 5
    addi r25, r25, lbl_80782F60@l
    lwz r4, 0xd8(r27)
    li r0, 0x0
    stw r4, 0x68(r1)
    slwi r4, r4, 5
    add r4, r26, r4
    add. r26, r5, r4
    beq lbl_fn_805776B4_00001B1C
    stw r3, 0x0(r26)
    lwz r3, 0x3c(r1)
    stw r3, 0x4(r26)
    lwz r4, 0x40(r1)
    srwi. r3, r4, 31
    bne lbl_fn_805776B4_00001AC0
    lwz r0, 0x44(r1)
    stw r4, 0x8(r26)
    stw r0, 0xc(r26)
    lwz r0, 0x48(r1)
    stw r0, 0x10(r26)
    b lbl_fn_805776B4_00001B00
lbl_fn_805776B4_00001AC0:
    stw r0, 0x8(r26)
    addi r3, r26, 0x8
    stw r0, 0xc(r26)
    stw r0, 0x10(r26)
    lwz r4, 0x44(r1)
    bl fn_80013DC4
    lbz r5, 0x14(r1)
    addi r3, r26, 0x8
    stb r5, 0x10(r1)
    addi r8, r1, 0x10
    lwz r6, 0x48(r1)
    li r4, 0x0
    lwz r0, 0x44(r1)
    li r5, 0x0
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_805776B4_00001B00:
    lwz r0, 0x4c(r1)
    stw r0, 0x14(r26)
    stw r25, 0x0(r26)
    lwz r0, 0x50(r1)
    stw r0, 0x18(r26)
    lwz r0, 0x54(r1)
    stw r0, 0x1c(r26)
lbl_fn_805776B4_00001B1C:
    lwz r3, 0x5c(r1)
    lis r31, lbl_80775A48@ha
    lwz r0, 0x68(r1)
    lis r26, lbl_80782F60@ha
    addi r3, r3, 0x1
    stw r3, 0x5c(r1)
    lwz r3, 0x58(r1)
    slwi r0, r0, 5
    lwz r4, 0xd8(r27)
    addi r31, r31, lbl_80775A48@l
    lwz r28, 0xd4(r27)
    add r29, r3, r0
    slwi r0, r4, 5
    addi r26, r26, lbl_80782F60@l
    add r30, r28, r0
    li r25, 0x0
    b lbl_fn_805776B4_00001C10
lbl_fn_805776B4_00001B60:
    subic. r29, r29, 0x20
    subi r30, r30, 0x20
    beq lbl_fn_805776B4_00001BF8
    stw r31, 0x0(r29)
    lwz r0, 0x4(r30)
    stw r0, 0x4(r29)
    lwz r3, 0x8(r30)
    srwi. r0, r3, 31
    bne lbl_fn_805776B4_00001B9C
    lwz r0, 0xc(r30)
    stw r3, 0x8(r29)
    stw r0, 0xc(r29)
    lwz r0, 0x10(r30)
    stw r0, 0x10(r29)
    b lbl_fn_805776B4_00001BDC
lbl_fn_805776B4_00001B9C:
    stw r25, 0x8(r29)
    addi r3, r29, 0x8
    stw r25, 0xc(r29)
    stw r25, 0x10(r29)
    lwz r4, 0xc(r30)
    bl fn_80013DC4
    lbz r0, 0x1c(r1)
    addi r3, r29, 0x8
    stb r0, 0x18(r1)
    addi r8, r1, 0x18
    li r4, 0x0
    li r5, 0x0
    lwz r6, 0x10(r30)
    lwz r0, 0xc(r30)
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_805776B4_00001BDC:
    lwz r0, 0x14(r30)
    stw r0, 0x14(r29)
    stw r26, 0x0(r29)
    lwz r0, 0x18(r30)
    stw r0, 0x18(r29)
    lwz r0, 0x1c(r30)
    stw r0, 0x1c(r29)
lbl_fn_805776B4_00001BF8:
    lwz r4, 0x68(r1)
    lwz r3, 0x5c(r1)
    subi r0, r4, 0x1
    stw r0, 0x68(r1)
    addi r0, r3, 0x1
    stw r0, 0x5c(r1)
lbl_fn_805776B4_00001C10:
    cmplw r30, r28
    bgt lbl_fn_805776B4_00001B60
    lwz r3, 0xdc(r27)
    addi r28, r1, 0x58
    lwz r0, 0x60(r1)
    stw r0, 0xdc(r27)
    stw r3, 0x60(r1)
    lwz r0, 0x58(r1)
    lwz r3, 0xd4(r27)
    stw r0, 0xd4(r27)
    stw r3, 0x58(r1)
    lwz r0, 0x5c(r1)
    lwz r5, 0xd8(r27)
    stw r0, 0xd8(r27)
    slwi r0, r5, 5
    lwz r3, 0x68(r1)
    lwz r4, 0x58(r1)
    slwi r3, r3, 5
    stw r5, 0x5c(r1)
    add r25, r4, r3
    add r26, r25, r0
    b lbl_fn_805776B4_00001C90
lbl_fn_805776B4_00001C68:
    subic. r26, r26, 0x20
    beq lbl_fn_805776B4_00001C90
    beq lbl_fn_805776B4_00001C90
    addic. r0, r26, 0x8
    beq lbl_fn_805776B4_00001C90
    lwz r0, 0x8(r26)
    srwi. r0, r0, 31
    beq lbl_fn_805776B4_00001C90
    lwz r3, 0x10(r26)
    bl dtor_80084684
lbl_fn_805776B4_00001C90:
    cmplw r26, r25
    bgt lbl_fn_805776B4_00001C68
    cmpwi r28, 0x0
    li r0, 0x0
    stw r0, 0x5c(r1)
    beq lbl_fn_805776B4_00001CFC
    lwz r25, 0x58(r1)
    cmpwi r25, 0x0
    beq lbl_fn_805776B4_00001CFC
    li r26, 0x0
    stw r26, 0x5c(r1)
    b lbl_fn_805776B4_00001CEC
lbl_fn_805776B4_00001CC0:
    subic. r25, r25, 0x20
    beq lbl_fn_805776B4_00001CE8
    beq lbl_fn_805776B4_00001CE8
    addic. r0, r25, 0x8
    beq lbl_fn_805776B4_00001CE8
    lwz r0, 0x8(r25)
    srwi. r0, r0, 31
    beq lbl_fn_805776B4_00001CE8
    lwz r3, 0x10(r25)
    bl dtor_80084684
lbl_fn_805776B4_00001CE8:
    subi r26, r26, 0x1
lbl_fn_805776B4_00001CEC:
    cmpwi r26, 0x0
    bne lbl_fn_805776B4_00001CC0
    lwz r3, 0x58(r1)
    bl dtor_80084684
lbl_fn_805776B4_00001CFC:
    addic. r0, r1, 0x38
    beq lbl_fn_805776B4_00001D20
    addic. r0, r0, 0x8
    beq lbl_fn_805776B4_00001D20
    lwz r0, 0x40(r1)
    srwi. r0, r0, 31
    beq lbl_fn_805776B4_00001D20
    lwz r3, 0x48(r1)
    bl dtor_80084684
lbl_fn_805776B4_00001D20:
    lwz r4, 0xd8(r27)
    li r3, 0x4
    lwz r5, 0xd4(r27)
    subi r0, r4, 0x1
    lwz r4, lbl_8087F9B8
    slwi r0, r0, 5
    add r0, r5, r0
    stw r0, 0x30(r4)
    lmw r24, 0x70(r1)
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}
